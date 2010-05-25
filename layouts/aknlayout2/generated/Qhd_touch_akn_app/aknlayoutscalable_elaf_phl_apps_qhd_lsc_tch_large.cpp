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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007f485 };

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
0x10e5,	// (0x0008056a) Screen

0x10f1,	// (0x00080576) application_window

0x112d,	// (0x000805b2) area_bottom_pane_ParamLimits

0x112d,	// (0x000805b2) area_bottom_pane

0x1166,	// (0x000805eb) area_top_pane_ParamLimits

0x1166,	// (0x000805eb) area_top_pane

0xb271,	// (0x0008a6f6) call_video_uplink_pane_ParamLimits

0xb271,	// (0x0008a6f6) call_video_uplink_pane

0x11f4,	// (0x00080679) main_pane_ParamLimits

0x11f4,	// (0x00080679) main_pane

0xc5ea,	// (0x0008ba6f) context_pane

0x5558,	// (0x000849dd) navi_pane

0x558a,	// (0x00084a0f) popup_cale_events_window_ParamLimits

0x558a,	// (0x00084a0f) popup_cale_events_window

0xc5fd,	// (0x0008ba82) popup_mup_playback_window

0x55a2,	// (0x00084a27) signal_pane

0x1887,	// (0x00080d0c) main_browser_pane

0x2164,	// (0x000815e9) main_burst_pane

0x52b8,	// (0x0008473d) main_calc_pane

0xc57c,	// (0x0008ba01) main_cale_day_pane

0x1b5d,	// (0x00080fe2) main_cale_month_pane

0xc57c,	// (0x0008ba01) main_cale_week_pane

0x2164,	// (0x000815e9) main_call_pane

0xefa4,	// (0x0008e429) main_call_poc_pane

0x2164,	// (0x000815e9) main_camera_pane

0x2164,	// (0x000815e9) main_chi_dic_pane

0x3dd6,	// (0x0008325b) main_clock_pane

0xefa4,	// (0x0008e429) main_fmradio_pane

0x2164,	// (0x000815e9) main_graph_messa_pane

0xefa4,	// (0x0008e429) main_help_pane

0x1887,	// (0x00080d0c) main_im_pane

0x151b,	// (0x000809a0) main_image_pane_ParamLimits

0x151b,	// (0x000809a0) main_image_pane

0xefa4,	// (0x0008e429) main_location2_pane

0x2164,	// (0x000815e9) main_location_pane

0x151b,	// (0x000809a0) main_messa_pane

0xefa4,	// (0x0008e429) main_mp2_pane

0x2164,	// (0x000815e9) main_mp_pane

0xefa4,	// (0x0008e429) main_msg_pane

0xefa4,	// (0x0008e429) main_mup_eq_pane

0xefa4,	// (0x0008e429) main_mup_pane

0x1887,	// (0x00080d0c) main_notes_pane

0xefa4,	// (0x0008e429) main_pec_pane

0xefa4,	// (0x0008e429) main_phob_pane

0xefa4,	// (0x0008e429) main_pinb_pane

0xefa4,	// (0x0008e429) main_postcard_pane

0xefa4,	// (0x0008e429) main_qdial_pane

0x2164,	// (0x000815e9) main_skin_pane

0xefa4,	// (0x0008e429) main_smil2_pane

0x2164,	// (0x000815e9) main_smil_pane

0x2164,	// (0x000815e9) main_video_pane

0x2164,	// (0x000815e9) main_video_tele_pane

0x151b,	// (0x000809a0) main_viewer_pane_ParamLimits

0x151b,	// (0x000809a0) main_viewer_pane

0x2164,	// (0x000815e9) main_vorec_pane

0x530c,	// (0x00084791) popup_blid_sat_info_window_ParamLimits

0x530c,	// (0x00084791) popup_blid_sat_info_window

0x5364,	// (0x000847e9) popup_dyc_status_message_window_ParamLimits

0x5364,	// (0x000847e9) popup_dyc_status_message_window

0x537e,	// (0x00084803) popup_grid_large_graphic_window_ParamLimits

0x537e,	// (0x00084803) popup_grid_large_graphic_window

0x543a,	// (0x000848bf) popup_loc_request_window_ParamLimits

0x543a,	// (0x000848bf) popup_loc_request_window

0x5530,	// (0x000849b5) popup_wml_address_window_ParamLimits

0x5530,	// (0x000849b5) popup_wml_address_window

0x50f2,	// (0x00084577) call_muted_g1

0x4da7,	// (0x0008422c) popup_call_audio_conf_window_ParamLimits

0x4da7,	// (0x0008422c) popup_call_audio_conf_window

0x5106,	// (0x0008458b) popup_call_audio_first_window_ParamLimits

0x5106,	// (0x0008458b) popup_call_audio_first_window

0x517c,	// (0x00084601) popup_call_audio_in_window_ParamLimits

0x517c,	// (0x00084601) popup_call_audio_in_window

0x51b8,	// (0x0008463d) popup_call_audio_out_window_ParamLimits

0x51b8,	// (0x0008463d) popup_call_audio_out_window

0x51f2,	// (0x00084677) popup_call_audio_second_window_ParamLimits

0x51f2,	// (0x00084677) popup_call_audio_second_window

0x5248,	// (0x000846cd) popup_call_audio_wait_window_ParamLimits

0x5248,	// (0x000846cd) popup_call_audio_wait_window

0x527d,	// (0x00084702) popup_number_entry_window_ParamLimits

0x527d,	// (0x00084702) popup_number_entry_window

0xdfc2,	// (0x0008d447) bg_popup_call_pane_cp05_ParamLimits

0xdfc2,	// (0x0008d447) bg_popup_call_pane_cp05

0xdfe2,	// (0x0008d467) popup_number_entry_window_t1

0xdff5,	// (0x0008d47a) popup_number_entry_window_t2

0xe007,	// (0x0008d48c) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0008e54f) popup_number_entry_window_t

0xe019,	// (0x0008d49e) text_title_cp2

0xe02c,	// (0x0008d4b1) bg_popup_call_pane_cp_ParamLimits

0xe02c,	// (0x0008d4b1) bg_popup_call_pane_cp

0xec09,	// (0x0008e08e) call_thumbnail_pane

0xec11,	// (0x0008e096) popup_call_audio_in_window_g1_ParamLimits

0xec11,	// (0x0008e096) popup_call_audio_in_window_g1

0xec1d,	// (0x0008e0a2) popup_call_audio_in_window_g2_ParamLimits

0xec1d,	// (0x0008e0a2) popup_call_audio_in_window_g2

0xec29,	// (0x0008e0ae) popup_call_audio_in_window_g3_ParamLimits

0xec29,	// (0x0008e0ae) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0008e558) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0008e558) popup_call_audio_in_window_g

0xec35,	// (0x0008e0ba) popup_call_audio_in_window_t1_ParamLimits

0xec35,	// (0x0008e0ba) popup_call_audio_in_window_t1

0xec51,	// (0x0008e0d6) popup_call_audio_in_window_t2_ParamLimits

0xec51,	// (0x0008e0d6) popup_call_audio_in_window_t2

0xec6d,	// (0x0008e0f2) popup_call_audio_in_window_t3_ParamLimits

0xec6d,	// (0x0008e0f2) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0008e55f) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0008e55f) popup_call_audio_in_window_t

0xe02c,	// (0x0008d4b1) bg_popup_call_pane_cp01_ParamLimits

0xe02c,	// (0x0008d4b1) bg_popup_call_pane_cp01

0xec09,	// (0x0008e08e) call_thumbnail_pane_cp02

0xec80,	// (0x0008e105) call_type_pane_cp022

0xec88,	// (0x0008e10d) popup_call_audio_out_window_g1_ParamLimits

0xec88,	// (0x0008e10d) popup_call_audio_out_window_g1

0xec9a,	// (0x0008e11f) popup_call_audio_out_window_g2_ParamLimits

0xec9a,	// (0x0008e11f) popup_call_audio_out_window_g2

0xeca6,	// (0x0008e12b) popup_call_audio_out_window_g3_ParamLimits

0xeca6,	// (0x0008e12b) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0008e566) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0008e566) popup_call_audio_out_window_g

0xecb8,	// (0x0008e13d) popup_call_audio_out_window_t1_ParamLimits

0xecb8,	// (0x0008e13d) popup_call_audio_out_window_t1

0xecd0,	// (0x0008e155) popup_call_audio_out_window_t2_ParamLimits

0xecd0,	// (0x0008e155) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0008e56d) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0008e56d) popup_call_audio_out_window_t

0xece5,	// (0x0008e16a) bg_popup_call_pane_ParamLimits

0xece5,	// (0x0008e16a) bg_popup_call_pane

0x13b0,	// (0x00080835) call_thumbnail_pane_cp_ParamLimits

0x13b0,	// (0x00080835) call_thumbnail_pane_cp

0xed69,	// (0x0008e1ee) call_type_pane_cp01_ParamLimits

0xed69,	// (0x0008e1ee) call_type_pane_cp01

0xedad,	// (0x0008e232) popup_call_audio_first_window_g1_ParamLimits

0xedad,	// (0x0008e232) popup_call_audio_first_window_g1

0xedf9,	// (0x0008e27e) popup_call_audio_first_window_g2_ParamLimits

0xedf9,	// (0x0008e27e) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0008e572) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0008e572) popup_call_audio_first_window_g

0xee3d,	// (0x0008e2c2) popup_call_audio_first_window_t1_ParamLimits

0xee3d,	// (0x0008e2c2) popup_call_audio_first_window_t1

0xeee9,	// (0x0008e36e) popup_call_audio_first_window_t4_ParamLimits

0xeee9,	// (0x0008e36e) popup_call_audio_first_window_t4

0xef75,	// (0x0008e3fa) popup_call_audio_first_window_t5_ParamLimits

0xef75,	// (0x0008e3fa) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0008e577) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0008e577) popup_call_audio_first_window_t

0xefa4,	// (0x0008e429) bg_popup_call_pane_cp02

0xefae,	// (0x0008e433) call_type_pane_cp023

0xefb6,	// (0x0008e43b) popup_call_audio_wait_window_g1

0xefbe,	// (0x0008e443) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008e57e) popup_call_audio_wait_window_g

0xefc6,	// (0x0008e44b) popup_call_audio_wait_window_t3

0xefd4,	// (0x0008e459) bg_popup_call_pane_cp03_ParamLimits

0xefd4,	// (0x0008e459) bg_popup_call_pane_cp03

0xf034,	// (0x0008e4b9) call_thumbnail_pane_cp011_ParamLimits

0xf034,	// (0x0008e4b9) call_thumbnail_pane_cp011

0xf040,	// (0x0008e4c5) call_type_pane_cp034_ParamLimits

0xf040,	// (0x0008e4c5) call_type_pane_cp034

0xf07c,	// (0x0008e501) popup_call_audio_second_window_g1_ParamLimits

0xf07c,	// (0x0008e501) popup_call_audio_second_window_g1

0x13d4,	// (0x00080859) popup_call_audio_second_window_g2_ParamLimits

0x13d4,	// (0x00080859) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0008e583) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0008e583) popup_call_audio_second_window_g

0x1410,	// (0x00080895) popup_call_audio_second_window_t1_ParamLimits

0x1410,	// (0x00080895) popup_call_audio_second_window_t1

0x1491,	// (0x00080916) popup_call_audio_second_window_t2_ParamLimits

0x1491,	// (0x00080916) popup_call_audio_second_window_t2

0x14c7,	// (0x0008094c) popup_call_audio_second_window_t3_ParamLimits

0x14c7,	// (0x0008094c) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0008e588) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0008e588) popup_call_audio_second_window_t

0xefa4,	// (0x0008e429) bg_popup_call_pane_cp04

0x14fd,	// (0x00080982) list_conf_pane

0x1505,	// (0x0008098a) popup_call_audio_conf_window_t1

0x1513,	// (0x00080998) call_thumbnail_pane_g1

0x151b,	// (0x000809a0) bg_pinb_pane_ParamLimits

0x151b,	// (0x000809a0) bg_pinb_pane

0x1529,	// (0x000809ae) find_pinb_pane

0x1532,	// (0x000809b7) listscroll_pinb_pane_ParamLimits

0x1532,	// (0x000809b7) listscroll_pinb_pane

0x1541,	// (0x000809c6) pinb_bg_pane_g1

0x154b,	// (0x000809d0) pinb_bg_pane_g2

0x1557,	// (0x000809dc) pinb_bg_pane_g3

0x1563,	// (0x000809e8) pinb_bg_pane_g4

0x156f,	// (0x000809f4) pinb_bg_pane_g5

0x157b,	// (0x00080a00) pinb_bg_pane_g6

0x1586,	// (0x00080a0b) pinb_bg_pane_g7

0x1591,	// (0x00080a16) pinb_bg_pane_g8

0x159c,	// (0x00080a21) pinb_bg_pane_g9

0x15a6,	// (0x00080a2b) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0008e58f) pinb_bg_pane_g

0x15c3,	// (0x00080a48) grid_pinb_pane

0x15cc,	// (0x00080a51) list_pinb_pane

0x15d5,	// (0x00080a5a) scroll_pane_cp01_ParamLimits

0x15d5,	// (0x00080a5a) scroll_pane_cp01

0x15e7,	// (0x00080a6c) find_pinb_pane_g1_ParamLimits

0x15e7,	// (0x00080a6c) find_pinb_pane_g1

0x15ff,	// (0x00080a84) find_pinb_pane_t1

0x1611,	// (0x00080a96) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0008e5a9) find_pinb_pane_t

0x1626,	// (0x00080aab) input_focus_pane_cp01_ParamLimits

0x1626,	// (0x00080aab) input_focus_pane_cp01

0x1632,	// (0x00080ab7) cell_pinb_pane_ParamLimits

0x1632,	// (0x00080ab7) cell_pinb_pane

0x165b,	// (0x00080ae0) cell_pinb_pane_g1_ParamLimits

0x165b,	// (0x00080ae0) cell_pinb_pane_g1

0x166b,	// (0x00080af0) cell_pinb_pane_g2_ParamLimits

0x166b,	// (0x00080af0) cell_pinb_pane_g2

0x1677,	// (0x00080afc) cell_pinb_pane_g3_ParamLimits

0x1677,	// (0x00080afc) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0008e5ae) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0008e5ae) cell_pinb_pane_g

0xefa4,	// (0x0008e429) grid_highlight_pane_cp01

0x1683,	// (0x00080b08) list_pinb_item_pane_ParamLimits

0x1683,	// (0x00080b08) list_pinb_item_pane

0xefa4,	// (0x0008e429) list_highlight_pane_cp02

0x1695,	// (0x00080b1a) list_pinb_item_pane_g1_ParamLimits

0x1695,	// (0x00080b1a) list_pinb_item_pane_g1

0x16a2,	// (0x00080b27) list_pinb_item_pane_g2_ParamLimits

0x16a2,	// (0x00080b27) list_pinb_item_pane_g2

0x16ae,	// (0x00080b33) list_pinb_item_pane_g3_ParamLimits

0x16ae,	// (0x00080b33) list_pinb_item_pane_g3

0x16bf,	// (0x00080b44) list_pinb_item_pane_g4_ParamLimits

0x16bf,	// (0x00080b44) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0008e5b5) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0008e5b5) list_pinb_item_pane_g

0x16cb,	// (0x00080b50) list_pinb_item_pane_t1_ParamLimits

0x16cb,	// (0x00080b50) list_pinb_item_pane_t1

0x1700,	// (0x00080b85) calc_display_pane

0x1728,	// (0x00080bad) calc_paper_pane

0x174b,	// (0x00080bd0) grid_calc_pane

0xefa4,	// (0x0008e429) bg_list_pane_cp01

0x1779,	// (0x00080bfe) clock_g1

0x1781,	// (0x00080c06) clock_g2

0x0001,

0xf139,	// (0x0008e5be) clock_g

0x1789,	// (0x00080c0e) clock_t1_ParamLimits

0x1789,	// (0x00080c0e) clock_t1

0x179e,	// (0x00080c23) clock_t2_ParamLimits

0x179e,	// (0x00080c23) clock_t2

0x17b0,	// (0x00080c35) clock_t3_ParamLimits

0x17b0,	// (0x00080c35) clock_t3

0x17c2,	// (0x00080c47) clock_t4_ParamLimits

0x17c2,	// (0x00080c47) clock_t4

0x17d4,	// (0x00080c59) clock_t5_ParamLimits

0x17d4,	// (0x00080c59) clock_t5

0x17e9,	// (0x00080c6e) clock_t6_ParamLimits

0x17e9,	// (0x00080c6e) clock_t6

0x17fb,	// (0x00080c80) clock_t7_ParamLimits

0x17fb,	// (0x00080c80) clock_t7

0x180d,	// (0x00080c92) clock_t8_ParamLimits

0x180d,	// (0x00080c92) clock_t8

0x1821,	// (0x00080ca6) clock_t9_ParamLimits

0x1821,	// (0x00080ca6) clock_t9

0x0008,

0xf13e,	// (0x0008e5c3) clock_t_ParamLimits

0xf13e,	// (0x0008e5c3) clock_t

0x1835,	// (0x00080cba) popup_clock_analogue_window_cp02

0x1835,	// (0x00080cba) popup_clock_digital_window_cp01

0x183d,	// (0x00080cc2) listscroll_help_pane

0xefa4,	// (0x0008e429) phob_pre_status_pane

0x1847,	// (0x00080ccc) grid_qdial_pane

0x151b,	// (0x000809a0) listscroll_mce_pane

0x151b,	// (0x000809a0) bg_notes_pane

0x1851,	// (0x00080cd6) list_notes_pane

0x185f,	// (0x00080ce4) scroll_pane_cp06

0x1873,	// (0x00080cf8) bg_calc_paper_pane

0xb2a5,	// (0x0008a72a) list_calc_pane

0x1887,	// (0x00080d0c) bg_calc_display_pane

0x1893,	// (0x00080d18) calc_display_pane_t1

0x18a5,	// (0x00080d2a) calc_display_pane_t2

0xb2bf,	// (0x0008a744) calc_display_pane_t3

0x0002,

0xf151,	// (0x0008e5d6) calc_display_pane_t

0x18b7,	// (0x00080d3c) cell_calc_pane_ParamLimits

0x18b7,	// (0x00080d3c) cell_calc_pane

0x18ec,	// (0x00080d71) bg_calc_paper_pane_g1

0x18f8,	// (0x00080d7d) bg_calc_paper_pane_g2

0x1904,	// (0x00080d89) bg_calc_paper_pane_g3

0x1910,	// (0x00080d95) bg_calc_paper_pane_g4

0x191c,	// (0x00080da1) bg_calc_paper_pane_g5

0x1928,	// (0x00080dad) bg_calc_paper_pane_g6

0x1937,	// (0x00080dbc) bg_calc_paper_pane_g7

0x1946,	// (0x00080dcb) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0008e5dd) bg_calc_paper_pane_g

0x1959,	// (0x00080dde) calc_bg_paper_pane_g9

0x196c,	// (0x00080df1) list_calc_item_pane_ParamLimits

0x196c,	// (0x00080df1) list_calc_item_pane

0x1981,	// (0x00080e06) list_calc_item_pane_g1

0xb2d1,	// (0x0008a756) list_calc_item_pane_t1_ParamLimits

0xb2d1,	// (0x0008a756) list_calc_item_pane_t1

0x198e,	// (0x00080e13) list_calc_item_pane_t2_ParamLimits

0x198e,	// (0x00080e13) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0008e5ee) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0008e5ee) list_calc_item_pane_t

0x19a8,	// (0x00080e2d) cell_calc_pane_g1

0x19ca,	// (0x00080e4f) grid_highlight_pane_cp02

0x19ec,	// (0x00080e71) bg_calc_display_pane_g1

0x19f5,	// (0x00080e7a) bg_calc_display_pane_g2

0x19ff,	// (0x00080e84) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0008e5f8) bg_calc_display_pane_g

0x1a08,	// (0x00080e8d) cell_qdial_pane_ParamLimits

0x1a08,	// (0x00080e8d) cell_qdial_pane

0x1a1c,	// (0x00080ea1) cell_qdial_pane_g1_ParamLimits

0x1a1c,	// (0x00080ea1) cell_qdial_pane_g1

0x1a32,	// (0x00080eb7) cell_qdial_pane_g2_ParamLimits

0x1a32,	// (0x00080eb7) cell_qdial_pane_g2

0x1a43,	// (0x00080ec8) cell_qdial_pane_g3_ParamLimits

0x1a43,	// (0x00080ec8) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0008e5ff) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0008e5ff) cell_qdial_pane_g

0x1a65,	// (0x00080eea) cell_qdial_pane_t1_ParamLimits

0x1a65,	// (0x00080eea) cell_qdial_pane_t1

0x1a7d,	// (0x00080f02) cell_qdial_pane_t2_ParamLimits

0x1a7d,	// (0x00080f02) cell_qdial_pane_t2

0x1a90,	// (0x00080f15) cell_qdial_pane_t3_ParamLimits

0x1a90,	// (0x00080f15) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0008e608) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0008e608) cell_qdial_pane_t

0xefa4,	// (0x0008e429) grid_highlight_pane_cp04

0x1aa3,	// (0x00080f28) thumbnail_qdial_pane_ParamLimits

0x1aa3,	// (0x00080f28) thumbnail_qdial_pane

0x1aff,	// (0x00080f84) list_help_pane

0x1b08,	// (0x00080f8d) scroll_pane_cp02

0x1b11,	// (0x00080f96) help_list_pane_t1_ParamLimits

0x1b11,	// (0x00080f96) help_list_pane_t1

0xb2e3,	// (0x0008a768) bg_notes_pane_g2

0xb2eb,	// (0x0008a770) bg_notes_pane_g3

0xb2f3,	// (0x0008a778) notes_bg_pane_g1

0xb2fb,	// (0x0008a780) notes_bg_pane_g4

0xb303,	// (0x0008a788) notes_bg_pane_g5

0xb30b,	// (0x0008a790) notes_bg_pane_g6

0xb313,	// (0x0008a798) notes_bg_pane_g7

0xb31b,	// (0x0008a7a0) notes_bg_pane_g8

0xb323,	// (0x0008a7a8) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0008e626) notes_bg_pane_g

0x1b2e,	// (0x00080fb3) list_notes_text_pane_ParamLimits

0x1b2e,	// (0x00080fb3) list_notes_text_pane

0x1b43,	// (0x00080fc8) list_notes_text_pane_g1

0x0255,	// (0x0007f6da) list_notes_text_pane_t1

0x1b5d,	// (0x00080fe2) listscroll_cale_week_pane

0x1b92,	// (0x00081017) bg_cale_heading_pane

0x1baa,	// (0x0008102f) bg_cale_pane_cp01

0x1bc7,	// (0x0008104c) cale_week_corner_pane

0x1be6,	// (0x0008106b) cale_week_day_heading_pane

0x1c03,	// (0x00081088) cale_week_scroll_pane_g1

0x1c16,	// (0x0008109b) cale_week_scroll_pane_g2

0x1c2e,	// (0x000810b3) cale_week_scroll_pane_g3

0x1c46,	// (0x000810cb) cale_week_scroll_pane_g4

0x1c5e,	// (0x000810e3) cale_week_scroll_pane_g5

0x1c7e,	// (0x00081103) cale_week_scroll_pane_g6

0x1c9e,	// (0x00081123) cale_week_scroll_pane_g7

0x1cbe,	// (0x00081143) cale_week_scroll_pane_g8

0x1ce2,	// (0x00081167) cale_week_scroll_pane_g9

0x1cfa,	// (0x0008117f) cale_week_scroll_pane_g10

0x1d12,	// (0x00081197) cale_week_scroll_pane_g11

0x1d2a,	// (0x000811af) cale_week_scroll_pane_g12

0x1d42,	// (0x000811c7) cale_week_scroll_pane_g13

0x1d42,	// (0x000811c7) cale_week_scroll_pane_g14

0x1d42,	// (0x000811c7) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0008e635) cale_week_scroll_pane_g

0x1d7e,	// (0x00081203) cale_week_time_pane

0x1da2,	// (0x00081227) grid_cale_week_pane

0x1dda,	// (0x0008125f) scroll_pane_cp08

0x1df7,	// (0x0008127c) cell_cale_week_pane_ParamLimits

0x1df7,	// (0x0008127c) cell_cale_week_pane

0x1e85,	// (0x0008130a) cale_week_day_heading_pane_t1

0x1eaf,	// (0x00081334) cale_week_day_heading_pane_t2

0x1ede,	// (0x00081363) cale_week_day_heading_pane_t3

0x1f0d,	// (0x00081392) cale_week_day_heading_pane_t4

0x1f3c,	// (0x000813c1) cale_week_day_heading_pane_t5

0x1f73,	// (0x000813f8) cale_week_day_heading_pane_t6

0x1faa,	// (0x0008142f) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0008e656) cale_week_day_heading_pane_t

0x1fd4,	// (0x00081459) bg_cale_side_pane

0x1fe2,	// (0x00081467) cale_week_time_pane_t1

0x1ffc,	// (0x00081481) cale_week_time_pane_t2

0x2016,	// (0x0008149b) cale_week_time_pane_t3

0x2030,	// (0x000814b5) cale_week_time_pane_t4

0x204a,	// (0x000814cf) cale_week_time_pane_t5

0x2064,	// (0x000814e9) cale_week_time_pane_t6

0x207e,	// (0x00081503) cale_week_time_pane_t7

0x2098,	// (0x0008151d) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0008e665) cale_week_time_pane_t

0x20b2,	// (0x00081537) cell_cale_week_pane_g2

0x20d1,	// (0x00081556) cell_cale_week_pane_g3_ParamLimits

0x20d1,	// (0x00081556) cell_cale_week_pane_g3

0x20e9,	// (0x0008156e) grid_highlight_pane_cp07

0x20f1,	// (0x00081576) listscroll_gms_pane

0x20fb,	// (0x00081580) grid_gms_pane

0x2104,	// (0x00081589) listscroll_gms_pane_g1

0x210c,	// (0x00081591) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0008e676) listscroll_gms_pane_g

0x2114,	// (0x00081599) scroll_pane_cp010

0x211f,	// (0x000815a4) cell_gms_pane_ParamLimits

0x211f,	// (0x000815a4) cell_gms_pane

0x2132,	// (0x000815b7) cell_gms_pane_g1

0x213a,	// (0x000815bf) cell_gms_pane_g2

0x2142,	// (0x000815c7) cell_gms_pane_g3

0x214b,	// (0x000815d0) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0008e67b) cell_gms_pane_g

0x2154,	// (0x000815d9) grid_highlight_pane_cp09

0x509c,	// (0x00084521) phob_pre_status_pane_g1

0x50a4,	// (0x00084529) phob_pre_status_pane_g2

0x50ac,	// (0x00084531) phob_pre_status_pane_g3

0x50b4,	// (0x00084539) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0008ea66) phob_pre_status_pane_g

0x50c4,	// (0x00084549) phob_pre_status_pane_t1

0x50d2,	// (0x00084557) phob_pre_status_pane_t2

0x50e2,	// (0x00084567) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0008ea71) phob_pre_status_pane_t

0x2164,	// (0x000815e9) bg_list_pane_cp05

0x216c,	// (0x000815f1) grid_vorec_pane

0x2174,	// (0x000815f9) vorec_t1

0x2182,	// (0x00081607) vorec_t2

0x2190,	// (0x00081615) vorec_t3

0x219e,	// (0x00081623) vorec_t4

0xb1fb,	// (0x0008a680) vorec_t5

0xb209,	// (0x0008a68e) vorec_t6

0x0004,

0xf1ff,	// (0x0008e684) vorec_t

0xb217,	// (0x0008a69c) wait_bar_pane_cp01

0x21ba,	// (0x0008163f) cell_vorec_pane_ParamLimits

0x21ba,	// (0x0008163f) cell_vorec_pane

0xb32b,	// (0x0008a7b0) cell_vorec_pane_g1

0xefa4,	// (0x0008e429) grid_highlight_pane_cp05

0x21e2,	// (0x00081667) cams_zoom_pane

0x21f1,	// (0x00081676) image_vga_pane

0x220b,	// (0x00081690) main_camera_pane_g1

0x221d,	// (0x000816a2) main_camera_pane_g2

0x222d,	// (0x000816b2) main_camera_pane_g3

0x223d,	// (0x000816c2) main_camera_pane_g4

0x224d,	// (0x000816d2) main_camera_pane_g5

0x225d,	// (0x000816e2) main_camera_pane_g6

0x226f,	// (0x000816f4) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0008e68f) main_camera_pane_g

0x228b,	// (0x00081710) main_camera_pane_t1

0x22a1,	// (0x00081726) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0008e6a0) main_camera_pane_t

0x22db,	// (0x00081760) cams_zoom_pane_cp_ParamLimits

0x22db,	// (0x00081760) cams_zoom_pane_cp

0x2303,	// (0x00081788) image_cif_pane_ParamLimits

0x2303,	// (0x00081788) image_cif_pane

0x2339,	// (0x000817be) image_subqcif_pane

0x2341,	// (0x000817c6) main_video_pane_g1_ParamLimits

0x2341,	// (0x000817c6) main_video_pane_g1

0x2365,	// (0x000817ea) main_video_pane_g2_ParamLimits

0x2365,	// (0x000817ea) main_video_pane_g2

0x2399,	// (0x0008181e) main_video_pane_g3_ParamLimits

0x2399,	// (0x0008181e) main_video_pane_g3

0x23c7,	// (0x0008184c) main_video_pane_g4_ParamLimits

0x23c7,	// (0x0008184c) main_video_pane_g4

0x23f5,	// (0x0008187a) main_video_pane_g5_ParamLimits

0x23f5,	// (0x0008187a) main_video_pane_g5

0x240d,	// (0x00081892) main_video_pane_g6_ParamLimits

0x240d,	// (0x00081892) main_video_pane_g6

0x0006,

0xf220,	// (0x0008e6a5) main_video_pane_g_ParamLimits

0xf220,	// (0x0008e6a5) main_video_pane_g

0x2438,	// (0x000818bd) main_video_pane_t1_ParamLimits

0x2438,	// (0x000818bd) main_video_pane_t1

0x2481,	// (0x00081906) cams_zoom_pane_g1

0x248a,	// (0x0008190f) cams_zoom_pane_g2

0x2493,	// (0x00081918) cams_zoom_pane_g3

0x249c,	// (0x00081921) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0008e6b4) cams_zoom_pane_g

0x24b9,	// (0x0008193e) grid_cams_pane

0x24d3,	// (0x00081958) linegrid_cams_pane

0x24e7,	// (0x0008196c) cell_cams_pane_ParamLimits

0x24e7,	// (0x0008196c) cell_cams_pane

0x2507,	// (0x0008198c) cams_burst_image_pane

0x250f,	// (0x00081994) cell_cams_pane_g1

0xefa4,	// (0x0008e429) grid_highlight_pane_cp03

0x19a8,	// (0x00080e2d) mp_bg_pane_g1

0xefa4,	// (0x0008e429) bg_list_pane_cp03

0xc4a1,	// (0x0008b926) bg_mp_pane

0xc4a9,	// (0x0008b92e) grid_mp_pane

0xc4b1,	// (0x0008b936) media_player_g1

0xc4b9,	// (0x0008b93e) media_player_t1

0xc4c7,	// (0x0008b94c) media_player_t2

0xc4d5,	// (0x0008b95a) media_player_t3

0xc4e3,	// (0x0008b968) media_player_t4

0xc4f1,	// (0x0008b976) media_player_t5

0xc4ff,	// (0x0008b984) media_player_t6

0xc50d,	// (0x0008b992) media_player_t7

0x0006,

0xf5cb,	// (0x0008ea50) media_player_t

0xc51b,	// (0x0008b9a0) wait_bar_pane_cp02

0xf5b0,	// (0x0008ea35) main_usb_pane_t

0x5093,	// (0x00084518) cell_mp_pane

0x19a8,	// (0x00080e2d) cell_mp_pane_g1

0xefa4,	// (0x0008e429) grid_highlight_pane_cp06

0x252f,	// (0x000819b4) grid_skin_colour_pane

0x2537,	// (0x000819bc) list_highlight_pane_cp03

0x253f,	// (0x000819c4) skin_g1

0x2547,	// (0x000819cc) skin_t1

0x2556,	// (0x000819db) skin_t2

0x0001,

0xf264,	// (0x0008e6e9) skin_t

0x2564,	// (0x000819e9) cell_skin_colour_pane_ParamLimits

0x2564,	// (0x000819e9) cell_skin_colour_pane

0x2584,	// (0x00081a09) cell_skin_colour_pane_g1

0x25ef,	// (0x00081a74) call_video_g1_ParamLimits

0x25ef,	// (0x00081a74) call_video_g1

0x260b,	// (0x00081a90) call_video_g2_ParamLimits

0x260b,	// (0x00081a90) call_video_g2

0x0001,

0xf269,	// (0x0008e6ee) call_video_g_ParamLimits

0xf269,	// (0x0008e6ee) call_video_g

0x265d,	// (0x00081ae2) call_video_uplink_pane_cp1_ParamLimits

0x265d,	// (0x00081ae2) call_video_uplink_pane_cp1

0x26c2,	// (0x00081b47) call_video_uplink_pane_cp2

0x2704,	// (0x00081b89) video_down_crop_pane_ParamLimits

0x2704,	// (0x00081b89) video_down_crop_pane

0x27fb,	// (0x00081c80) video_down_pane_ParamLimits

0x27fb,	// (0x00081c80) video_down_pane

0x28f2,	// (0x00081d77) video_down_subqcif_pane_ParamLimits

0x28f2,	// (0x00081d77) video_down_subqcif_pane

0x290a,	// (0x00081d8f) video_down_subqcif_pane_cp_ParamLimits

0x290a,	// (0x00081d8f) video_down_subqcif_pane_cp

0x2947,	// (0x00081dcc) im_reading_pane_ParamLimits

0x2947,	// (0x00081dcc) im_reading_pane

0x2959,	// (0x00081dde) im_writing_pane_ParamLimits

0x2959,	// (0x00081dde) im_writing_pane

0x2977,	// (0x00081dfc) im_reading_pane_t1

0x29b0,	// (0x00081e35) list_im_pane

0x29c1,	// (0x00081e46) scroll_pane_cp07

0x29da,	// (0x00081e5f) im_writing_pane_t1_ParamLimits

0x29da,	// (0x00081e5f) im_writing_pane_t1

0x29ef,	// (0x00081e74) im_writing_pane_t2_ParamLimits

0x29ef,	// (0x00081e74) im_writing_pane_t2

0x0001,

0xf273,	// (0x0008e6f8) im_writing_pane_t_ParamLimits

0xf273,	// (0x0008e6f8) im_writing_pane_t

0xefa4,	// (0x0008e429) input_focus_pane_cp04

0xefa4,	// (0x0008e429) input_focus_pane_cp05

0x2a0c,	// (0x00081e91) list_im_single_pane_ParamLimits

0x2a0c,	// (0x00081e91) list_im_single_pane

0x2a20,	// (0x00081ea5) list_single_im_pane_t1

0x5053,	// (0x000844d8) blid_accuracy_pane

0x505b,	// (0x000844e0) blid_compass_pane

0x5065,	// (0x000844ea) main_location_t1

0x5075,	// (0x000844fa) main_location_t2

0x5085,	// (0x0008450a) main_location_t3

0x0002,

0xf5da,	// (0x0008ea5f) main_location_t

0xefa4,	// (0x0008e429) aid_levels_location

0x19a8,	// (0x00080e2d) blid_accuracy_pane_g1

0x19a8,	// (0x00080e2d) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0008e75a) blid_accuracy_pane_g

0x2a5a,	// (0x00081edf) wml_content_pane

0x2a98,	// (0x00081f1d) wml_button_pane_ParamLimits

0x2a98,	// (0x00081f1d) wml_button_pane

0x2aac,	// (0x00081f31) wml_list_single_large_pane_ParamLimits

0x2aac,	// (0x00081f31) wml_list_single_large_pane

0x2ac1,	// (0x00081f46) wml_list_single_medium_pane_ParamLimits

0x2ac1,	// (0x00081f46) wml_list_single_medium_pane

0x2ad7,	// (0x00081f5c) wml_list_single_small_pane_ParamLimits

0x2ad7,	// (0x00081f5c) wml_list_single_small_pane

0x2aef,	// (0x00081f74) wml_selection_box_pane_ParamLimits

0x2aef,	// (0x00081f74) wml_selection_box_pane

0x2b02,	// (0x00081f87) wml_list_single_pane_t1

0x2b11,	// (0x00081f96) wml_list_single_medium_pane_t1

0x2b20,	// (0x00081fa5) wml_list_single_large_pane_t1

0x2b2f,	// (0x00081fb4) input_focus_pane_cp02_ParamLimits

0x2b2f,	// (0x00081fb4) input_focus_pane_cp02

0x2b42,	// (0x00081fc7) wml_selection_box_pane_g1

0x2b4b,	// (0x00081fd0) wml_selection_box_pane_t1_ParamLimits

0x2b4b,	// (0x00081fd0) wml_selection_box_pane_t1

0x151b,	// (0x000809a0) bg_wml_button_pane_ParamLimits

0x151b,	// (0x000809a0) bg_wml_button_pane

0x2b63,	// (0x00081fe8) wml_button_pane_g1

0x2b6b,	// (0x00081ff0) wml_button_pane_t1

0x2b63,	// (0x00081fe8) wml_button_bg_pane_g1

0x2b7b,	// (0x00082000) wml_button_bg_pane_g2

0x2b83,	// (0x00082008) wml_button_bg_pane_g3

0x2b8b,	// (0x00082010) wml_button_bg_pane_g4

0x2b93,	// (0x00082018) wml_button_bg_pane_g5

0x2b9b,	// (0x00082020) wml_button_bg_pane_g6

0x2ba3,	// (0x00082028) wml_button_bg_pane_g7

0x2bab,	// (0x00082030) wml_button_bg_pane_g8

0x2bb3,	// (0x00082038) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0008e6fd) wml_button_bg_pane_g

0x2bbb,	// (0x00082040) bg_list_pane_cp02

0x2bc3,	// (0x00082048) mce_header_pane_ParamLimits

0x2bc3,	// (0x00082048) mce_header_pane

0x2bd9,	// (0x0008205e) mce_icon_pane

0x2bd9,	// (0x0008205e) mce_image_pane

0x2be2,	// (0x00082067) mce_text_pane_ParamLimits

0x2be2,	// (0x00082067) mce_text_pane

0x2bf5,	// (0x0008207a) scroll_pane_cp03

0x2a90,	// (0x00081f15) scroll_pane_cp04

0x2bff,	// (0x00082084) scroll_pane_cp05_ParamLimits

0x2bff,	// (0x00082084) scroll_pane_cp05

0x2c0b,	// (0x00082090) mce_header_field_pane_ParamLimits

0x2c0b,	// (0x00082090) mce_header_field_pane

0x2c22,	// (0x000820a7) mce_header_field_pane_2_ParamLimits

0x2c22,	// (0x000820a7) mce_header_field_pane_2

0x2c38,	// (0x000820bd) mce_header_field_pane_3

0x2c40,	// (0x000820c5) list_single_mce_message_pane_ParamLimits

0x2c40,	// (0x000820c5) list_single_mce_message_pane

0x2c55,	// (0x000820da) list_single_mce_smart_pane_ParamLimits

0x2c55,	// (0x000820da) list_single_mce_smart_pane

0x2c75,	// (0x000820fa) input_focus_pane_cp03

0x2c7e,	// (0x00082103) list_header_data_pane

0x2c86,	// (0x0008210b) mce_header_field_pane_t1

0x2c96,	// (0x0008211b) list_single_mce_header_pane_ParamLimits

0x2c96,	// (0x0008211b) list_single_mce_header_pane

0x2caa,	// (0x0008212f) list_single_mce_header_pane_t1

0x2cb9,	// (0x0008213e) list_single_mce_message_pane_g1

0x2cc1,	// (0x00082146) list_single_mce_message_pane_t1

0x2cf5,	// (0x0008217a) bg_cale_heading_pane_cp01_ParamLimits

0x2cf5,	// (0x0008217a) bg_cale_heading_pane_cp01

0x2d2f,	// (0x000821b4) bg_cale_pane_cp02_ParamLimits

0x2d2f,	// (0x000821b4) bg_cale_pane_cp02

0x2d5c,	// (0x000821e1) cale_month_corner_pane

0x2d7b,	// (0x00082200) cale_month_day_heading_pane_ParamLimits

0x2d7b,	// (0x00082200) cale_month_day_heading_pane

0x2dcd,	// (0x00082252) cale_month_pane_g1_ParamLimits

0x2dcd,	// (0x00082252) cale_month_pane_g1

0x2dfc,	// (0x00082281) cale_month_pane_g2_ParamLimits

0x2dfc,	// (0x00082281) cale_month_pane_g2

0x2e2c,	// (0x000822b1) cale_month_pane_g3_ParamLimits

0x2e2c,	// (0x000822b1) cale_month_pane_g3

0x2e68,	// (0x000822ed) cale_month_pane_g4_ParamLimits

0x2e68,	// (0x000822ed) cale_month_pane_g4

0x2ea4,	// (0x00082329) cale_month_pane_g5_ParamLimits

0x2ea4,	// (0x00082329) cale_month_pane_g5

0x2eec,	// (0x00082371) cale_month_pane_g6_ParamLimits

0x2eec,	// (0x00082371) cale_month_pane_g6

0x2f38,	// (0x000823bd) cale_month_pane_g7_ParamLimits

0x2f38,	// (0x000823bd) cale_month_pane_g7

0x2f8c,	// (0x00082411) cale_month_pane_g8_ParamLimits

0x2f8c,	// (0x00082411) cale_month_pane_g8

0x2fe0,	// (0x00082465) cale_month_pane_g9_ParamLimits

0x2fe0,	// (0x00082465) cale_month_pane_g9

0x3032,	// (0x000824b7) cale_month_pane_g10_ParamLimits

0x3032,	// (0x000824b7) cale_month_pane_g10

0x3084,	// (0x00082509) cale_month_pane_g11_ParamLimits

0x3084,	// (0x00082509) cale_month_pane_g11

0x30d6,	// (0x0008255b) cale_month_pane_g12_ParamLimits

0x30d6,	// (0x0008255b) cale_month_pane_g12

0x3128,	// (0x000825ad) cale_month_pane_g13_ParamLimits

0x3128,	// (0x000825ad) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0008e710) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0008e710) cale_month_pane_g

0x318c,	// (0x00082611) cale_month_week_pane

0x31b0,	// (0x00082635) grid_cale_month_pane_ParamLimits

0x31b0,	// (0x00082635) grid_cale_month_pane

0x31f9,	// (0x0008267e) cale_month_day_heading_pane_t1

0x327f,	// (0x00082704) cale_month_day_heading_pane_t2

0x32f8,	// (0x0008277d) cale_month_day_heading_pane_t3

0x3371,	// (0x000827f6) cale_month_day_heading_pane_t4

0x33f2,	// (0x00082877) cale_month_day_heading_pane_t5

0x347b,	// (0x00082900) cale_month_day_heading_pane_t6

0x3504,	// (0x00082989) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008e72b) cale_month_day_heading_pane_t

0x1fd4,	// (0x00081459) bg_cale_side_pane_cp01

0x3595,	// (0x00082a1a) cale_month_week_pane_t1

0x35ae,	// (0x00082a33) cale_month_week_pane_t2

0x35c7,	// (0x00082a4c) cale_month_week_pane_t3

0x35e0,	// (0x00082a65) cale_month_week_pane_t4

0x35f9,	// (0x00082a7e) cale_month_week_pane_t5

0x3612,	// (0x00082a97) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008e73a) cale_month_week_pane_t

0x362b,	// (0x00082ab0) cell_cale_month_pane_ParamLimits

0x362b,	// (0x00082ab0) cell_cale_month_pane

0xb335,	// (0x0008a7ba) cell_cale_month_pane_g1

0x3759,	// (0x00082bde) cell_cale_month_pane_t1_ParamLimits

0x3759,	// (0x00082bde) cell_cale_month_pane_t1

0x20e9,	// (0x0008156e) grid_highlight_pane_cp08

0x19a8,	// (0x00080e2d) main_smil_g1

0x3785,	// (0x00082c0a) smil_status_pane

0x378e,	// (0x00082c13) smil_text_pane

0xc3c1,	// (0x0008b846) bg_popup_call3_rect_pane_g8

0xc3c9,	// (0x0008b84e) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0008e9f3) bg_popup_call3_rect_pane_g

0xc664,	// (0x0008bae9) smil_status_volume_pane_g1

0x37a2,	// (0x00082c27) smil_status_pane_t1

0xc697,	// (0x0008bb1c) volume_smil_pane

0x37b9,	// (0x00082c3e) list_smil_text_pane

0x37c3,	// (0x00082c48) scroll_pane_cp011

0x37ce,	// (0x00082c53) smil_text_list_pane_t1_ParamLimits

0x37ce,	// (0x00082c53) smil_text_list_pane_t1

0xb341,	// (0x0008a7c6) aid_volume_smil_ParamLimits

0xb341,	// (0x0008a7c6) aid_volume_smil

0x19a8,	// (0x00080e2d) smil_volume_pane_g1

0x19a8,	// (0x00080e2d) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0008e75a) smil_volume_pane_g

0x1b5d,	// (0x00080fe2) listscroll_cale_day_pane

0x380a,	// (0x00082c8f) bg_cale_pane

0x3822,	// (0x00082ca7) list_cale_pane

0x3845,	// (0x00082cca) scroll_pane_cp09

0x3856,	// (0x00082cdb) cale_bg_pane_g1

0x385e,	// (0x00082ce3) cale_bg_pane_g2

0x3866,	// (0x00082ceb) cale_bg_pane_g3

0x386e,	// (0x00082cf3) cale_bg_pane_g4

0x3876,	// (0x00082cfb) cale_bg_pane_g5

0x387e,	// (0x00082d03) cale_bg_pane_g6

0x3886,	// (0x00082d0b) cale_bg_pane_g7

0x388e,	// (0x00082d13) cale_bg_pane_g8

0x3896,	// (0x00082d1b) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0008e75f) cale_bg_pane_g

0x38a6,	// (0x00082d2b) list_cale_time_pane_ParamLimits

0x38a6,	// (0x00082d2b) list_cale_time_pane

0x38bb,	// (0x00082d40) list_cale_time_pane_g1_ParamLimits

0x38bb,	// (0x00082d40) list_cale_time_pane_g1

0x38c7,	// (0x00082d4c) list_cale_time_pane_g2_ParamLimits

0x38c7,	// (0x00082d4c) list_cale_time_pane_g2

0x38d4,	// (0x00082d59) list_cale_time_pane_g3_ParamLimits

0x38d4,	// (0x00082d59) list_cale_time_pane_g3

0x38e2,	// (0x00082d67) list_cale_time_pane_g4_ParamLimits

0x38e2,	// (0x00082d67) list_cale_time_pane_g4

0x38f0,	// (0x00082d75) list_cale_time_pane_g5_ParamLimits

0x38f0,	// (0x00082d75) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0008e772) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0008e772) list_cale_time_pane_g

0x390b,	// (0x00082d90) list_cale_time_pane_t1_ParamLimits

0x390b,	// (0x00082d90) list_cale_time_pane_t1

0x3933,	// (0x00082db8) list_cale_time_pane_t2_ParamLimits

0x3933,	// (0x00082db8) list_cale_time_pane_t2

0x3ff1,	// (0x00083476) aid_blid_cardinal_pane

0x403b,	// (0x000834c0) compass_pane_t4

0x395b,	// (0x00082de0) list_cale_time_pane_t4_ParamLimits

0x395b,	// (0x00082de0) list_cale_time_pane_t4

0x4049,	// (0x000834ce) compass_pane_t5

0x4057,	// (0x000834dc) compass_pane_t6

0x4065,	// (0x000834ea) compass_pane_t7

0x40fb,	// (0x00083580) navi_pane_cc_t1

0x431a,	// (0x0008379f) aid_phob_thumbnail_center_pane

0x4956,	// (0x00083ddb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0008e77f) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0008e77f) list_cale_time_pane_t

0xe02c,	// (0x0008d4b1) bg_popup_window_pane_cp02_ParamLimits

0xe02c,	// (0x0008d4b1) bg_popup_window_pane_cp02

0x3983,	// (0x00082e08) heading_pane_cp01_ParamLimits

0x3983,	// (0x00082e08) heading_pane_cp01

0x398f,	// (0x00082e14) loc_req_pane_ParamLimits

0x398f,	// (0x00082e14) loc_req_pane

0x399f,	// (0x00082e24) loc_type_pane_ParamLimits

0x399f,	// (0x00082e24) loc_type_pane

0x39b1,	// (0x00082e36) loc_type_pane_t1_ParamLimits

0x39b1,	// (0x00082e36) loc_type_pane_t1

0x39c3,	// (0x00082e48) loc_type_pane_t2_ParamLimits

0x39c3,	// (0x00082e48) loc_type_pane_t2

0x39d5,	// (0x00082e5a) loc_type_pane_t3_ParamLimits

0x39d5,	// (0x00082e5a) loc_type_pane_t3

0x0002,

0xf301,	// (0x0008e786) loc_type_pane_t_ParamLimits

0xf301,	// (0x0008e786) loc_type_pane_t

0x39e7,	// (0x00082e6c) list_loc_req_pane

0x39f1,	// (0x00082e76) scroll_pane_cp012

0x39fc,	// (0x00082e81) list_single_loc_request_popup_menu_pane_ParamLimits

0x39fc,	// (0x00082e81) list_single_loc_request_popup_menu_pane

0x3a09,	// (0x00082e8e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3a09,	// (0x00082e8e) list_single_loc_request_popup_menu_pane_g1

0x3a15,	// (0x00082e9a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3a15,	// (0x00082e9a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0008e78d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0008e78d) list_single_loc_request_popup_menu_pane_g

0x3a21,	// (0x00082ea6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3a21,	// (0x00082ea6) list_single_loc_request_popup_menu_pane_t1

0x151b,	// (0x000809a0) bg_popup_window_pane_cp03_ParamLimits

0x151b,	// (0x000809a0) bg_popup_window_pane_cp03

0xb363,	// (0x0008a7e8) heading_loc_req_pane_ParamLimits

0xb363,	// (0x0008a7e8) heading_loc_req_pane

0x3a37,	// (0x00082ebc) popup_dyc_status_message_window_g1_ParamLimits

0x3a37,	// (0x00082ebc) popup_dyc_status_message_window_g1

0x3a4b,	// (0x00082ed0) popup_dyc_status_message_window_t1_ParamLimits

0x3a4b,	// (0x00082ed0) popup_dyc_status_message_window_t1

0x3a60,	// (0x00082ee5) popup_dyc_status_message_window_t2_ParamLimits

0x3a60,	// (0x00082ee5) popup_dyc_status_message_window_t2

0x3a75,	// (0x00082efa) popup_dyc_status_message_window_t3_ParamLimits

0x3a75,	// (0x00082efa) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0008e792) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0008e792) popup_dyc_status_message_window_t

0xefa4,	// (0x0008e429) bg_heading_pane_cp01

0x3a91,	// (0x00082f16) heading_loc_req_pane_g1

0x3a99,	// (0x00082f1e) heading_loc_req_pane_g2

0x3aa1,	// (0x00082f26) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008e799) heading_loc_req_pane_g

0x3aa9,	// (0x00082f2e) heading_loc_req_pane_t1

0x3ac4,	// (0x00082f49) bg_popup_sub_pane_cp01_ParamLimits

0x3ac4,	// (0x00082f49) bg_popup_sub_pane_cp01

0x3ad2,	// (0x00082f57) popup_cale_events_window_g1_ParamLimits

0x3ad2,	// (0x00082f57) popup_cale_events_window_g1

0x3af2,	// (0x00082f77) popup_cale_events_window_g2_ParamLimits

0x3af2,	// (0x00082f77) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008e7cd) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008e7cd) popup_cale_events_window_g

0x3b12,	// (0x00082f97) popup_cale_events_window_t1_ParamLimits

0x3b12,	// (0x00082f97) popup_cale_events_window_t1

0x3b24,	// (0x00082fa9) popup_cale_events_window_t2_ParamLimits

0x3b24,	// (0x00082fa9) popup_cale_events_window_t2

0x3b62,	// (0x00082fe7) popup_cale_events_window_t3_ParamLimits

0x3b62,	// (0x00082fe7) popup_cale_events_window_t3

0x3b9c,	// (0x00083021) popup_cale_events_window_t4_ParamLimits

0x3b9c,	// (0x00083021) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0008e7d2) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0008e7d2) popup_cale_events_window_t

0x3bd2,	// (0x00083057) call_type_pane

0x3be2,	// (0x00083067) popup_call_status_window_g1

0x3bf6,	// (0x0008307b) popup_call_status_window_g2

0x3c0a,	// (0x0008308f) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008e7db) popup_call_status_window_g

0x3c19,	// (0x0008309e) call_type_pane_g1

0x3c22,	// (0x000830a7) call_type_pane_g2

0x0001,

0xf35d,	// (0x0008e7e2) call_type_pane_g

0xefa4,	// (0x0008e429) bg_popup_sub_pane_cp02

0x3c2b,	// (0x000830b0) listscroll_popup_wml_pane

0x3c33,	// (0x000830b8) list_wml_pane

0x3c3d,	// (0x000830c2) scroll_pane_cp013

0x3c48,	// (0x000830cd) list_single_graphic_popup_wml_pane_ParamLimits

0x3c48,	// (0x000830cd) list_single_graphic_popup_wml_pane

0x19a8,	// (0x00080e2d) list_single_graphic_popup_wml_pane_g1

0x3c5c,	// (0x000830e1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0008e7e7) list_single_graphic_popup_wml_pane_g

0x3c64,	// (0x000830e9) list_single_graphic_popup_wml_pane_t1

0x3c7a,	// (0x000830ff) aid_call_pane

0x1513,	// (0x00080998) popup_clock_analogue_window_g1

0x1513,	// (0x00080998) popup_clock_analogue_window_g2

0xb37b,	// (0x0008a800) popup_clock_analogue_window_g3

0xb37b,	// (0x0008a800) popup_clock_analogue_window_g4

0x19a8,	// (0x00080e2d) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0008e7ec) popup_clock_analogue_window_g

0xb383,	// (0x0008a808) popup_clock_analogue_window_t1

0xb391,	// (0x0008a816) clock_digital_number_pane_ParamLimits

0xb391,	// (0x0008a816) clock_digital_number_pane

0xb39d,	// (0x0008a822) clock_digital_number_pane_cp02_ParamLimits

0xb39d,	// (0x0008a822) clock_digital_number_pane_cp02

0xb3a9,	// (0x0008a82e) clock_digital_number_pane_cp03_ParamLimits

0xb3a9,	// (0x0008a82e) clock_digital_number_pane_cp03

0xb3b5,	// (0x0008a83a) clock_digital_number_pane_cp04_ParamLimits

0xb3b5,	// (0x0008a83a) clock_digital_number_pane_cp04

0xb3c5,	// (0x0008a84a) clock_digital_separator_pane_ParamLimits

0xb3c5,	// (0x0008a84a) clock_digital_separator_pane

0xb3d1,	// (0x0008a856) popup_clock_digital_window_t1

0x19a8,	// (0x00080e2d) clock_digital_number_pane_g1

0x19a8,	// (0x00080e2d) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0008e75a) clock_digital_number_pane_g

0x19a8,	// (0x00080e2d) clock_digital_separator_pane_g1

0x19a8,	// (0x00080e2d) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0008e75a) clock_digital_separator_pane_g

0xefa4,	// (0x0008e429) bg_popup_window_pane_cp04

0x3c82,	// (0x00083107) heading_pane_cp03

0x3c8a,	// (0x0008310f) listscroll_popup_gms_pane

0x3c92,	// (0x00083117) grid_large_graphic_popup_pane

0x3c9c,	// (0x00083121) listscroll_popup_gms_pane_g1

0x3ca4,	// (0x00083129) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0008e7f7) listscroll_popup_gms_pane_g

0x2a90,	// (0x00081f15) scroll_pane_cp014

0x3cac,	// (0x00083131) cell_large_graphic_popup_pane_ParamLimits

0x3cac,	// (0x00083131) cell_large_graphic_popup_pane

0x3cc4,	// (0x00083149) cell_large_graphic_popup_pane_g1_ParamLimits

0x3cc4,	// (0x00083149) cell_large_graphic_popup_pane_g1

0x3cd0,	// (0x00083155) cell_large_graphic_popup_pane_g2_ParamLimits

0x3cd0,	// (0x00083155) cell_large_graphic_popup_pane_g2

0x3cdc,	// (0x00083161) cell_large_graphic_popup_pane_g3_ParamLimits

0x3cdc,	// (0x00083161) cell_large_graphic_popup_pane_g3

0x3ce9,	// (0x0008316e) cell_large_graphic_popup_pane_g4_ParamLimits

0x3ce9,	// (0x0008316e) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0008e7fc) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0008e7fc) cell_large_graphic_popup_pane_g

0x3cf9,	// (0x0008317e) grid_highlight_pane_cp010

0x19a8,	// (0x00080e2d) bg_popup_call_pane_g1

0x3d03,	// (0x00083188) list_single_graphic_popup_conf_pane_ParamLimits

0x3d03,	// (0x00083188) list_single_graphic_popup_conf_pane

0x3d16,	// (0x0008319b) list_highlight_pane_cp01

0x3d1f,	// (0x000831a4) list_single_graphic_popup_conf_pane_g1

0x3d27,	// (0x000831ac) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0008e805) list_single_graphic_popup_conf_pane_g

0x3d2f,	// (0x000831b4) list_single_graphic_popup_conf_pane_t1

0x3d3d,	// (0x000831c2) linegrid_cams_pane_g1

0x3d46,	// (0x000831cb) linegrid_cams_pane_g2

0x2142,	// (0x000815c7) linegrid_cams_pane_g3

0x3d4f,	// (0x000831d4) linegrid_cams_pane_g4

0x3d58,	// (0x000831dd) linegrid_cams_pane_g5

0x3d61,	// (0x000831e6) linegrid_cams_pane_g6

0x214b,	// (0x000815d0) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0008e80a) linegrid_cams_pane_g

0x3d6c,	// (0x000831f1) popup_clock_analogue_window

0x3d6c,	// (0x000831f1) popup_clock_digital_window

0xefa4,	// (0x0008e429) popup_phob_thumbnail_window

0x19a8,	// (0x00080e2d) call_video_uplink_pane_g1

0x3d75,	// (0x000831fa) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0008e819) call_video_uplink_pane_g

0x3d7d,	// (0x00083202) video_uplink_pane

0x3d85,	// (0x0008320a) mce_image_pane_g1

0x3d8f,	// (0x00083214) mce_image_pane_g2

0x3d99,	// (0x0008321e) mce_image_pane_g3

0x3da1,	// (0x00083226) mce_image_pane_g4

0x3da9,	// (0x0008322e) mce_image_pane_g5

0x0004,

0xf399,	// (0x0008e81e) mce_image_pane_g

0x3db1,	// (0x00083236) control_top_pane_stacon_cp01_ParamLimits

0x3db1,	// (0x00083236) control_top_pane_stacon_cp01

0x3dc5,	// (0x0008324a) uni_indicator_pane_stacon_cp01_ParamLimits

0x3dc5,	// (0x0008324a) uni_indicator_pane_stacon_cp01

0x3dd6,	// (0x0008325b) bg_popup_sub_pane_cp03

0x3de0,	// (0x00083265) chi_dic_find_pane

0x3de8,	// (0x0008326d) listscroll_chi_dic_pane

0x3df1,	// (0x00083276) main_pane_chidic_g1

0x3e04,	// (0x00083289) chi_dic_find_pane_t1

0x3e12,	// (0x00083297) find_chidic_pane

0x3e1b,	// (0x000832a0) chi_dic_list_pane_ParamLimits

0x3e1b,	// (0x000832a0) chi_dic_list_pane

0x3e2c,	// (0x000832b1) scroll_pane_cp020

0x3e34,	// (0x000832b9) find_chidic_pane_t1

0xefa4,	// (0x0008e429) input_focus_pane_cp06

0x3e43,	// (0x000832c8) list_chi_dic_pane_ParamLimits

0x3e43,	// (0x000832c8) list_chi_dic_pane

0x3e55,	// (0x000832da) list_chi_dic_pane_t1_ParamLimits

0x3e55,	// (0x000832da) list_chi_dic_pane_t1

0xefa4,	// (0x0008e429) list_highlight_pane_cp020

0x3e68,	// (0x000832ed) bg_cale_heading_pane_g1

0x3e70,	// (0x000832f5) bg_cale_heading_pane_g2

0x3e78,	// (0x000832fd) bg_cale_heading_pane_g3

0x3e80,	// (0x00083305) bg_cale_heading_pane_g4

0x3e8a,	// (0x0008330f) bg_cale_heading_pane_g5

0x3e94,	// (0x00083319) bg_cale_heading_pane_g6

0x3e9c,	// (0x00083321) bg_cale_heading_pane_g7

0x3ea4,	// (0x00083329) bg_cale_heading_pane_g8

0x3eae,	// (0x00083333) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0008e829) bg_cale_heading_pane_g

0x3e68,	// (0x000832ed) bg_cale_side_pane_g1

0x3eb8,	// (0x0008333d) bg_cale_side_pane_g2

0x3ec0,	// (0x00083345) bg_cale_side_pane_g3

0x3ec8,	// (0x0008334d) bg_cale_side_pane_g4

0x3ed0,	// (0x00083355) bg_cale_side_pane_g5

0x3ed8,	// (0x0008335d) bg_cale_side_pane_g6

0x3ee0,	// (0x00083365) bg_cale_side_pane_g7

0x3ee8,	// (0x0008336d) bg_cale_side_pane_g8

0x3ef0,	// (0x00083375) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008e83c) bg_cale_side_pane_g

0x3ef8,	// (0x0008337d) popup_call_status_window_ParamLimits

0x3ef8,	// (0x0008337d) popup_call_status_window

0x3f41,	// (0x000833c6) stacon_top_pane

0x3f49,	// (0x000833ce) status_pane_ParamLimits

0x3f49,	// (0x000833ce) status_pane

0x3f5e,	// (0x000833e3) status_small_pane

0x3f66,	// (0x000833eb) control_pane

0xefa4,	// (0x0008e429) stacon_bottom_pane

0x3f6e,	// (0x000833f3) list_single_mce_smart_pane_t1_ParamLimits

0x3f6e,	// (0x000833f3) list_single_mce_smart_pane_t1

0x3f81,	// (0x00083406) list_single_mce_smart_pane_t2_ParamLimits

0x3f81,	// (0x00083406) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0008e84f) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0008e84f) list_single_mce_smart_pane_t

0x3fa0,	// (0x00083425) compass_pane

0x3fa9,	// (0x0008342e) main_location2_pane_t1

0x3fbb,	// (0x00083440) main_location2_pane_t2

0x3fcd,	// (0x00083452) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0008e854) main_location2_pane_t

0x4011,	// (0x00083496) compass_pane_g1_ParamLimits

0x4011,	// (0x00083496) compass_pane_g1

0x401d,	// (0x000834a2) compass_pane_t1

0x402c,	// (0x000834b1) compass_pane_t2

0x0005,

0xf3d8,	// (0x0008e85d) compass_pane_t

0x4073,	// (0x000834f8) text_secondary_cp61

0x40f2,	// (0x00083577) navi_pane_cams_g5

0x416e,	// (0x000835f3) navi_pane_im_t1

0x417c,	// (0x00083601) navi_pane_mp_g1_ParamLimits

0x417c,	// (0x00083601) navi_pane_mp_g1

0x4190,	// (0x00083615) navi_pane_mp_g2_ParamLimits

0x4190,	// (0x00083615) navi_pane_mp_g2

0x419c,	// (0x00083621) navi_pane_mp_g3_ParamLimits

0x419c,	// (0x00083621) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0008e871) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0008e871) navi_pane_mp_g

0x41a8,	// (0x0008362d) navi_pane_mp_t1

0x41b6,	// (0x0008363b) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0008e878) navi_pane_mp_t

0x4263,	// (0x000836e8) navi_pane_vt_g1

0x41a8,	// (0x0008362d) navi_pane_vt_t1

0x426b,	// (0x000836f0) navi_slider_pane

0x2164,	// (0x000815e9) zooming_pane

0x427b,	// (0x00083700) navi_slider_pane_g1

0xb3ee,	// (0x0008a873) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0008e87f) navi_slider_pane_g

0x429f,	// (0x00083724) aid_levels_zoom

0x42a7,	// (0x0008372c) zooming_pane_g1

0x42af,	// (0x00083734) zooming_pane_g2

0x42af,	// (0x00083734) zooming_pane_g3

0x0002,

0xf409,	// (0x0008e88e) zooming_pane_g

0x42b7,	// (0x0008373c) level_10_zoom

0x42c0,	// (0x00083745) level_11_zoom

0x42c9,	// (0x0008374e) level_1_zoom

0x42d2,	// (0x00083757) level_2_zoom

0x42db,	// (0x00083760) level_3_zoom

0x42e4,	// (0x00083769) level_4_zoom

0x42ed,	// (0x00083772) level_5_zoom

0x42f6,	// (0x0008377b) level_6_zoom

0x42ff,	// (0x00083784) level_7_zoom

0x4308,	// (0x0008378d) level_8_zoom

0x4311,	// (0x00083796) level_9_zoom

0x4322,	// (0x000837a7) popup_phob_thumbnail_window_g1

0x432a,	// (0x000837af) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0008e895) popup_phob_thumbnail_window_g

0xc523,	// (0x0008b9a8) level_1_location

0xc52b,	// (0x0008b9b0) level_2_location

0xc533,	// (0x0008b9b8) level_3_location

0xc53b,	// (0x0008b9c0) level_4_location

0x2164,	// (0x000815e9) level_5_location

0x4332,	// (0x000837b7) mce_icon_pane_g1

0x433c,	// (0x000837c1) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008e89a) mce_icon_pane_g

0x4344,	// (0x000837c9) main_mup_pane_g1_ParamLimits

0x4344,	// (0x000837c9) main_mup_pane_g1

0x435a,	// (0x000837df) main_mup_pane_g2_ParamLimits

0x435a,	// (0x000837df) main_mup_pane_g2

0x4372,	// (0x000837f7) main_mup_pane_g3_ParamLimits

0x4372,	// (0x000837f7) main_mup_pane_g3

0x438a,	// (0x0008380f) main_mup_pane_g4_ParamLimits

0x438a,	// (0x0008380f) main_mup_pane_g4

0x43a2,	// (0x00083827) main_mup_pane_g5_ParamLimits

0x43a2,	// (0x00083827) main_mup_pane_g5

0x43be,	// (0x00083843) main_mup_pane_g6_ParamLimits

0x43be,	// (0x00083843) main_mup_pane_g6

0x43d6,	// (0x0008385b) main_mup_pane_g7_ParamLimits

0x43d6,	// (0x0008385b) main_mup_pane_g7

0x43ee,	// (0x00083873) main_mup_pane_g8_ParamLimits

0x43ee,	// (0x00083873) main_mup_pane_g8

0x4408,	// (0x0008388d) main_mup_pane_g9_ParamLimits

0x4408,	// (0x0008388d) main_mup_pane_g9

0x4422,	// (0x000838a7) main_mup_pane_g10_ParamLimits

0x4422,	// (0x000838a7) main_mup_pane_g10

0x443c,	// (0x000838c1) main_mup_pane_g11_ParamLimits

0x443c,	// (0x000838c1) main_mup_pane_g11

0x4450,	// (0x000838d5) main_mup_pane_g12_ParamLimits

0x4450,	// (0x000838d5) main_mup_pane_g12

0x4466,	// (0x000838eb) main_mup_pane_g13_ParamLimits

0x4466,	// (0x000838eb) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0008e89f) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0008e89f) main_mup_pane_g

0x447a,	// (0x000838ff) main_mup_pane_t1_ParamLimits

0x447a,	// (0x000838ff) main_mup_pane_t1

0x4494,	// (0x00083919) main_mup_pane_t2_ParamLimits

0x4494,	// (0x00083919) main_mup_pane_t2

0x44ac,	// (0x00083931) main_mup_pane_t3_ParamLimits

0x44ac,	// (0x00083931) main_mup_pane_t3

0x44c4,	// (0x00083949) main_mup_pane_t4_ParamLimits

0x44c4,	// (0x00083949) main_mup_pane_t4

0x44e2,	// (0x00083967) main_mup_pane_t5_ParamLimits

0x44e2,	// (0x00083967) main_mup_pane_t5

0x44f7,	// (0x0008397c) main_mup_pane_t6_ParamLimits

0x44f7,	// (0x0008397c) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008e8ba) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008e8ba) main_mup_pane_t

0x4509,	// (0x0008398e) mup_progress_pane_ParamLimits

0x4509,	// (0x0008398e) mup_progress_pane

0x4515,	// (0x0008399a) mup_visualizer_pane_ParamLimits

0x4515,	// (0x0008399a) mup_visualizer_pane

0x4545,	// (0x000839ca) mup_volume_pane_ParamLimits

0x4545,	// (0x000839ca) mup_volume_pane

0x4563,	// (0x000839e8) mup_visualizer_pane_g1_ParamLimits

0x4563,	// (0x000839e8) mup_visualizer_pane_g1

0x4563,	// (0x000839e8) mup_visualizer_pane_g2_ParamLimits

0x4563,	// (0x000839e8) mup_visualizer_pane_g2

0x4011,	// (0x00083496) mup_visualizer_pane_g3_ParamLimits

0x4011,	// (0x00083496) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0008e8c7) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0008e8c7) mup_visualizer_pane_g

0x19a8,	// (0x00080e2d) mup_volume_pane_g1

0x4579,	// (0x000839fe) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008e8ce) mup_volume_pane_g

0x19a8,	// (0x00080e2d) mup_progress_pane_g1

0x4582,	// (0x00083a07) mup_progress_pane_g2

0x458b,	// (0x00083a10) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0008e8d3) mup_progress_pane_g

0xefa4,	// (0x0008e429) bg_popup_window_pane_cp05

0x4594,	// (0x00083a19) heading_pane_cp02_ParamLimits

0x4594,	// (0x00083a19) heading_pane_cp02

0x45ae,	// (0x00083a33) list_popup_blid_pane

0x45b6,	// (0x00083a3b) list_blid_sat_info_pane_ParamLimits

0x45b6,	// (0x00083a3b) list_blid_sat_info_pane

0x45c9,	// (0x00083a4e) list_blid_sat_info_pane_g1

0x45d1,	// (0x00083a56) list_blid_sat_info_pane_t1

0x46d7,	// (0x00083b5c) mup_equalizer_pane_ParamLimits

0x46d7,	// (0x00083b5c) mup_equalizer_pane

0x46f0,	// (0x00083b75) mup_equalizer_pane_cp1_ParamLimits

0x46f0,	// (0x00083b75) mup_equalizer_pane_cp1

0x470d,	// (0x00083b92) mup_equalizer_pane_cp2_ParamLimits

0x470d,	// (0x00083b92) mup_equalizer_pane_cp2

0x472a,	// (0x00083baf) mup_equalizer_pane_cp3_ParamLimits

0x472a,	// (0x00083baf) mup_equalizer_pane_cp3

0x474b,	// (0x00083bd0) mup_equalizer_pane_cp4_ParamLimits

0x474b,	// (0x00083bd0) mup_equalizer_pane_cp4

0x476c,	// (0x00083bf1) mup_equalizer_pane_cp5

0x4780,	// (0x00083c05) mup_equalizer_pane_cp6

0x4794,	// (0x00083c19) mup_equalizer_pane_cp7

0xc441,	// (0x0008b8c6) bg_popup_call_poc_act_pane_g9

0xc449,	// (0x0008b8ce) bg_popup_call_poc_act_pane_g10

0xc451,	// (0x0008b8d6) bg_popup_call_poc_act_pane_g11

0x000a,

0x151b,	// (0x000809a0) mup_scale_pane

0x19a8,	// (0x00080e2d) mup_scale_pane_g1

0x47a8,	// (0x00083c2d) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0008e8ef) mup_scale_pane_g

0x47de,	// (0x00083c63) msg_data_pane

0x47e6,	// (0x00083c6b) scroll_pane_cp017

0x0449,	// (0x0007f8ce) bg_list_pane_cp04_ParamLimits

0x0449,	// (0x0007f8ce) bg_list_pane_cp04

0x47ee,	// (0x00083c73) msg_data_pane_g1

0x47f6,	// (0x00083c7b) msg_data_pane_g2

0x4800,	// (0x00083c85) msg_data_pane_g3

0x4808,	// (0x00083c8d) msg_data_pane_g4

0x4810,	// (0x00083c95) msg_data_pane_g5

0x4818,	// (0x00083c9d) msg_data_pane_g6

0x4820,	// (0x00083ca5) msg_data_pane_g7

0x0006,

0xf479,	// (0x0008e8fe) msg_data_pane_g

0x0469,	// (0x0007f8ee) msg_text_pane_ParamLimits

0x0469,	// (0x0007f8ee) msg_text_pane

0x4828,	// (0x00083cad) qrid_highlight_pane_cp011_ParamLimits

0x4828,	// (0x00083cad) qrid_highlight_pane_cp011

0xefa4,	// (0x0008e429) msg_body_pane

0xefa4,	// (0x0008e429) msg_header_pane

0x4847,	// (0x00083ccc) input_focus_pane_cp07

0x04a0,	// (0x0007f925) msg_header_pane_t1_ParamLimits

0x04a0,	// (0x0007f925) msg_header_pane_t1

0x04b2,	// (0x0007f937) msg_header_pane_t2_ParamLimits

0x04b2,	// (0x0007f937) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0008e912) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0008e912) msg_header_pane_t

0x485c,	// (0x00083ce1) msg_body_pane_g1

0x04c4,	// (0x0007f949) msg_body_pane_t1_ParamLimits

0x04c4,	// (0x0007f949) msg_body_pane_t1

0x04f5,	// (0x0007f97a) msg_body_pane_t2_ParamLimits

0x04f5,	// (0x0007f97a) msg_body_pane_t2

0x0507,	// (0x0007f98c) msg_body_pane_t3_ParamLimits

0x0507,	// (0x0007f98c) msg_body_pane_t3

0x0002,

0xf492,	// (0x0008e917) msg_body_pane_t_ParamLimits

0xf492,	// (0x0008e917) msg_body_pane_t

0x489e,	// (0x00083d23) main_viewer_pane_g1_ParamLimits

0x489e,	// (0x00083d23) main_viewer_pane_g1

0x48ac,	// (0x00083d31) main_viewer_pane_g2_ParamLimits

0x48ac,	// (0x00083d31) main_viewer_pane_g2

0x48ba,	// (0x00083d3f) main_viewer_pane_g3_ParamLimits

0x48ba,	// (0x00083d3f) main_viewer_pane_g3

0x48c9,	// (0x00083d4e) main_viewer_pane_g4_ParamLimits

0x48c9,	// (0x00083d4e) main_viewer_pane_g4

0xb418,	// (0x0008a89d) main_viewer_pane_g5_ParamLimits

0xb418,	// (0x0008a89d) main_viewer_pane_g5

0xb418,	// (0x0008a89d) main_viewer_pane_g7_ParamLimits

0xb418,	// (0x0008a89d) main_viewer_pane_g7

0xb42a,	// (0x0008a8af) main_viewer_pane_g8_ParamLimits

0xb42a,	// (0x0008a8af) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0008e927) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0008e927) main_viewer_pane_g

0x48d8,	// (0x00083d5d) viewer_content_pane_ParamLimits

0x48d8,	// (0x00083d5d) viewer_content_pane

0x4913,	// (0x00083d98) main_postcard_pane_g1_ParamLimits

0x4913,	// (0x00083d98) main_postcard_pane_g1

0x4929,	// (0x00083dae) main_postcard_pane_g2_ParamLimits

0x4929,	// (0x00083dae) main_postcard_pane_g2

0x493f,	// (0x00083dc4) main_postcard_pane_g3_ParamLimits

0x493f,	// (0x00083dc4) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0008e938) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0008e938) main_postcard_pane_g

0x4956,	// (0x00083ddb) main_postcard_pane_g4

0xc677,	// (0x0008bafc) smil_status_volume_pane_g2

0x4999,	// (0x00083e1e) postcard_pane_ParamLimits

0x4999,	// (0x00083e1e) postcard_pane

0x49db,	// (0x00083e60) postcard_pane_g1_ParamLimits

0x49db,	// (0x00083e60) postcard_pane_g1

0x49e9,	// (0x00083e6e) postcard_pane_g2_ParamLimits

0x49e9,	// (0x00083e6e) postcard_pane_g2

0x49f5,	// (0x00083e7a) postcard_pane_g3_ParamLimits

0x49f5,	// (0x00083e7a) postcard_pane_g3

0x4a01,	// (0x00083e86) postcard_pane_g4_ParamLimits

0x4a01,	// (0x00083e86) postcard_pane_g4

0x4a0f,	// (0x00083e94) postcard_pane_g5_ParamLimits

0x4a0f,	// (0x00083e94) postcard_pane_g5

0x4a24,	// (0x00083ea9) postcard_pane_g6_ParamLimits

0x4a24,	// (0x00083ea9) postcard_pane_g6

0x49db,	// (0x00083e60) postcard_pane_g7_ParamLimits

0x49db,	// (0x00083e60) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0008e945) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0008e945) postcard_pane_g

0x4a38,	// (0x00083ebd) main_mp2_pane_g1_ParamLimits

0x4a38,	// (0x00083ebd) main_mp2_pane_g1

0x4a44,	// (0x00083ec9) main_mp2_pane_g2_ParamLimits

0x4a44,	// (0x00083ec9) main_mp2_pane_g2

0x4a50,	// (0x00083ed5) main_mp2_pane_g3_ParamLimits

0x4a50,	// (0x00083ed5) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0008e954) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0008e954) main_mp2_pane_g

0x4a5c,	// (0x00083ee1) main_mp2_pane_t1_ParamLimits

0x4a5c,	// (0x00083ee1) main_mp2_pane_t1

0x4a71,	// (0x00083ef6) main_mp2_pane_t2_ParamLimits

0x4a71,	// (0x00083ef6) main_mp2_pane_t2

0x4a83,	// (0x00083f08) main_mp2_pane_t3_ParamLimits

0x4a83,	// (0x00083f08) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0008e95b) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0008e95b) main_mp2_pane_t

0x4a95,	// (0x00083f1a) pec_content_pane_ParamLimits

0x4a95,	// (0x00083f1a) pec_content_pane

0x2a90,	// (0x00081f15) scroll_pane_cp015

0x4aa7,	// (0x00083f2c) pec_attribute_pane_ParamLimits

0x4aa7,	// (0x00083f2c) pec_attribute_pane

0x4ab7,	// (0x00083f3c) pec_content_pane_g1_ParamLimits

0x4ab7,	// (0x00083f3c) pec_content_pane_g1

0x4ac3,	// (0x00083f48) pec_content_pane_t1_ParamLimits

0x4ac3,	// (0x00083f48) pec_content_pane_t1

0x4ad5,	// (0x00083f5a) pec_content_pane_t2_ParamLimits

0x4ad5,	// (0x00083f5a) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0008e962) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0008e962) pec_content_pane_t

0x4ae7,	// (0x00083f6c) list_single_graphic_pane_cp01_ParamLimits

0x4ae7,	// (0x00083f6c) list_single_graphic_pane_cp01

0x151b,	// (0x000809a0) bg_popup_sub_pane_cp04

0x4afc,	// (0x00083f81) popup_mup_playback_window_g1

0x4b08,	// (0x00083f8d) popup_mup_playback_window_t1

0x4b1d,	// (0x00083fa2) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0008e967) popup_mup_playback_window_t

0x4b72,	// (0x00083ff7) main_image_pane_g1_ParamLimits

0x4b72,	// (0x00083ff7) main_image_pane_g1

0x4c4f,	// (0x000840d4) scroll_pane_cp018_ParamLimits

0x4c4f,	// (0x000840d4) scroll_pane_cp018

0xb442,	// (0x0008a8c7) scroll_pane_cp016_ParamLimits

0xb442,	// (0x0008a8c7) scroll_pane_cp016

0x4c67,	// (0x000840ec) smil2_image_pane_ParamLimits

0x4c67,	// (0x000840ec) smil2_image_pane

0x4c97,	// (0x0008411c) smil2_root_pane_ParamLimits

0x4c97,	// (0x0008411c) smil2_root_pane

0x4ccf,	// (0x00084154) smil2_text_pane_ParamLimits

0x4ccf,	// (0x00084154) smil2_text_pane

0xefa4,	// (0x0008e429) bg_list_pane_cp06

0xb47e,	// (0x0008a903) grid_radio_pane

0xefa4,	// (0x0008e429) bg_popup_window_pane_cp06

0xb486,	// (0x0008a90b) main_fmradio_pane_t1

0x3c82,	// (0x00083107) heading_pane_cp04

0xb494,	// (0x0008a919) main_fmradio_pane_t2

0xc459,	// (0x0008b8de) popup_cale_lunar_info_window_g1

0xb4a2,	// (0x0008a927) main_fmradio_pane_t3

0xc461,	// (0x0008b8e6) popup_cale_lunar_info_window_g2

0xb4b0,	// (0x0008a935) main_fmradio_pane_t4

0x0001,

0xb4be,	// (0x0008a943) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0008ea42) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0008e97c) main_fmradio_pane_t

0xb4cc,	// (0x0008a951) wait_bar_pane_cp03

0xb4d4,	// (0x0008a959) cell_fmradio_pane_ParamLimits

0xb4d4,	// (0x0008a959) cell_fmradio_pane

0x49db,	// (0x00083e60) cell_fmradio_pane_g1_ParamLimits

0x49db,	// (0x00083e60) cell_fmradio_pane_g1

0xefa4,	// (0x0008e429) grid_highlight_pane_cp011

0xb4e7,	// (0x0008a96c) poc_content_pane_ParamLimits

0xb4e7,	// (0x0008a96c) poc_content_pane

0xb4f9,	// (0x0008a97e) scroll_pane_cp019

0x4d4f,	// (0x000841d4) popup_call_poc_act_window_ParamLimits

0x4d4f,	// (0x000841d4) popup_call_poc_act_window

0x4d73,	// (0x000841f8) popup_call_poc_inact_window_ParamLimits

0x4d73,	// (0x000841f8) popup_call_poc_inact_window

0xf594,	// (0x0008ea19) bg_popup_call_poc_act_pane_g

0xc3d1,	// (0x0008b856) bg_popup_call_poc_inact_pane_g1

0xc3d9,	// (0x0008b85e) bg_popup_call_poc_inact_pane_g2

0xb501,	// (0x0008a986) popup_call_poc_act_window_g2

0xc3e1,	// (0x0008b866) bg_popup_call_poc_inact_pane_g3

0xc3e9,	// (0x0008b86e) bg_popup_call_poc_inact_pane_g4

0xc3f1,	// (0x0008b876) bg_popup_call_poc_inact_pane_g5

0xb509,	// (0x0008a98e) popup_call_poc_act_window_t1_ParamLimits

0xb509,	// (0x0008a98e) popup_call_poc_act_window_t1

0xb531,	// (0x0008a9b6) popup_call_poc_act_window_t2_ParamLimits

0xb531,	// (0x0008a9b6) popup_call_poc_act_window_t2

0xb559,	// (0x0008a9de) popup_call_poc_act_window_t3_ParamLimits

0xb559,	// (0x0008a9de) popup_call_poc_act_window_t3

0xb581,	// (0x0008aa06) popup_call_poc_act_window_t4_ParamLimits

0xb581,	// (0x0008aa06) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0008e987) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0008e987) popup_call_poc_act_window_t

0xc3f9,	// (0x0008b87e) bg_popup_call_poc_inact_pane_g6

0xc401,	// (0x0008b886) bg_popup_call_poc_inact_pane_g7

0xc409,	// (0x0008b88e) bg_popup_call_poc_inact_pane_g8

0xb593,	// (0x0008aa18) popup_call_poc_inact_window_g2

0xc411,	// (0x0008b896) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0008ea06) bg_popup_call_poc_inact_pane_g

0xb59b,	// (0x0008aa20) popup_call_poc_inact_window_t1_ParamLimits

0xb59b,	// (0x0008aa20) popup_call_poc_inact_window_t1

0xb5b0,	// (0x0008aa35) popup_call_poc_inact_window_t2_ParamLimits

0xb5b0,	// (0x0008aa35) popup_call_poc_inact_window_t2

0xb5c5,	// (0x0008aa4a) popup_call_poc_inact_window_t3_ParamLimits

0xb5c5,	// (0x0008aa4a) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0008e990) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0008e990) popup_call_poc_inact_window_t

0xc5ea,	// (0x0008ba6f) context_pane_ParamLimits

0x55a2,	// (0x00084a27) signal_pane_ParamLimits

0x2164,	// (0x000815e9) main_call2_pane

0xc5c3,	// (0x0008ba48) popup_phob_thumbnail2_window_ParamLimits

0xc5c3,	// (0x0008ba48) popup_phob_thumbnail2_window

0xb400,	// (0x0008a885) aid_hotspot_pointer_arrow_pane

0xb408,	// (0x0008a88d) aid_hotspot_pointer_hand_pane

0x50bc,	// (0x00084541) phob_pre_status_pane_g5

0x21e2,	// (0x00081667) cams_zoom_pane_ParamLimits

0x21f1,	// (0x00081676) image_vga_pane_ParamLimits

0x220b,	// (0x00081690) main_camera_pane_g1_ParamLimits

0x221d,	// (0x000816a2) main_camera_pane_g2_ParamLimits

0x222d,	// (0x000816b2) main_camera_pane_g3_ParamLimits

0x223d,	// (0x000816c2) main_camera_pane_g4_ParamLimits

0x224d,	// (0x000816d2) main_camera_pane_g5_ParamLimits

0x225d,	// (0x000816e2) main_camera_pane_g6_ParamLimits

0x226f,	// (0x000816f4) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0008e68f) main_camera_pane_g_ParamLimits

0x228b,	// (0x00081710) main_camera_pane_t1_ParamLimits

0x22a1,	// (0x00081726) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0008e6a0) main_camera_pane_t_ParamLimits

0x151b,	// (0x000809a0) bg_popup_preview_window_pane_cp01_ParamLimits

0x151b,	// (0x000809a0) bg_popup_preview_window_pane_cp01

0xb5da,	// (0x0008aa5f) popup_phob_thumbnail2_window_g1_ParamLimits

0xb5da,	// (0x0008aa5f) popup_phob_thumbnail2_window_g1

0xefa4,	// (0x0008e429) call2_cli_visual_pane

0x4da7,	// (0x0008422c) popup_call2_audio_conf_window_ParamLimits

0x4da7,	// (0x0008422c) popup_call2_audio_conf_window

0x4dc7,	// (0x0008424c) popup_call2_audio_first_window_ParamLimits

0x4dc7,	// (0x0008424c) popup_call2_audio_first_window

0x4e5d,	// (0x000842e2) popup_call2_audio_in_window_ParamLimits

0x4e5d,	// (0x000842e2) popup_call2_audio_in_window

0x4ea5,	// (0x0008432a) popup_call2_audio_out_window_ParamLimits

0x4ea5,	// (0x0008432a) popup_call2_audio_out_window

0x4f0f,	// (0x00084394) popup_call2_audio_second_window_ParamLimits

0x4f0f,	// (0x00084394) popup_call2_audio_second_window

0x4f75,	// (0x000843fa) popup_call2_audio_wait_window_ParamLimits

0x4f75,	// (0x000843fa) popup_call2_audio_wait_window

0xefa4,	// (0x0008e429) bg_popup_call2_act_pane_cp03

0x14fd,	// (0x00080982) list_conf_pane_cp

0xb5e6,	// (0x0008aa6b) popup_call2_audio_conf_window_t1

0x3d03,	// (0x00083188) list_single_graphic_popup_conf2_pane_ParamLimits

0x3d03,	// (0x00083188) list_single_graphic_popup_conf2_pane

0x3d16,	// (0x0008319b) list_highlight_pane_cp04

0xb5f4,	// (0x0008aa79) list_single_graphic_popup_conf2_pane_g1

0x3d27,	// (0x000831ac) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0008e997) list_single_graphic_popup_conf2_pane_g

0xb5fe,	// (0x0008aa83) list_single_graphic_popup_conf2_pane_t1

0xb60c,	// (0x0008aa91) bg_popup_call2_act_pane_cp01_ParamLimits

0xb60c,	// (0x0008aa91) bg_popup_call2_act_pane_cp01

0xb696,	// (0x0008ab1b) call_type_pane_cp05_ParamLimits

0xb696,	// (0x0008ab1b) call_type_pane_cp05

0xb6ea,	// (0x0008ab6f) popup_call2_audio_second_window_g1_ParamLimits

0xb6ea,	// (0x0008ab6f) popup_call2_audio_second_window_g1

0xb73e,	// (0x0008abc3) popup_call2_audio_second_window_g2_ParamLimits

0xb73e,	// (0x0008abc3) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0008e99c) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0008e99c) popup_call2_audio_second_window_g

0xb7a3,	// (0x0008ac28) popup_call2_audio_second_window_t1_ParamLimits

0xb7a3,	// (0x0008ac28) popup_call2_audio_second_window_t1

0xb85e,	// (0x0008ace3) popup_call2_audio_second_window_t2_ParamLimits

0xb85e,	// (0x0008ace3) popup_call2_audio_second_window_t2

0xb8b1,	// (0x0008ad36) popup_call2_audio_second_window_t3_ParamLimits

0xb8b1,	// (0x0008ad36) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0008e9a3) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0008e9a3) popup_call2_audio_second_window_t

0xefa4,	// (0x0008e429) bg_popup_call2_in_pane_cp02

0xefae,	// (0x0008e433) call_type_pane_cp04

0xefb6,	// (0x0008e43b) popup_call2_audio_wait_window_g1

0xefbe,	// (0x0008e443) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008e57e) popup_call2_audio_wait_window_g

0xefc6,	// (0x0008e44b) popup_call2_audio_wait_window_t3

0xb9a4,	// (0x0008ae29) bg_popup_call2_act_pane_ParamLimits

0xb9a4,	// (0x0008ae29) bg_popup_call2_act_pane

0xba64,	// (0x0008aee9) call_type_pane_cp03_ParamLimits

0xba64,	// (0x0008aee9) call_type_pane_cp03

0xbac8,	// (0x0008af4d) popup_call2_audio_first_window_g1_ParamLimits

0xbac8,	// (0x0008af4d) popup_call2_audio_first_window_g1

0xbb38,	// (0x0008afbd) popup_call2_audio_first_window_g2_ParamLimits

0xbb38,	// (0x0008afbd) popup_call2_audio_first_window_g2

0x4563,	// (0x000839e8) popup_call2_audio_first_window_g3_ParamLimits

0x4563,	// (0x000839e8) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008e9ac) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008e9ac) popup_call2_audio_first_window_g

0xbc16,	// (0x0008b09b) popup_call2_audio_first_window_t1_ParamLimits

0xbc16,	// (0x0008b09b) popup_call2_audio_first_window_t1

0xbd19,	// (0x0008b19e) popup_call2_audio_first_window_t4_ParamLimits

0xbd19,	// (0x0008b19e) popup_call2_audio_first_window_t4

0xbdfc,	// (0x0008b281) popup_call2_audio_first_window_t5_ParamLimits

0xbdfc,	// (0x0008b281) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0008e9b7) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0008e9b7) popup_call2_audio_first_window_t

0x1513,	// (0x00080998) bg_popup_call2_act_pane_g1

0xc469,	// (0x0008b8ee) popup_cale_lunar_info_window_t1

0xc477,	// (0x0008b8fc) popup_cale_lunar_info_window_t2

0xc485,	// (0x0008b90a) popup_cale_lunar_info_window_t3

0xefa4,	// (0x0008e429) bg_popup_call2_bubble_pane

0xbefd,	// (0x0008b382) bg_popup_call2_in_pane_cp01_ParamLimits

0xbefd,	// (0x0008b382) bg_popup_call2_in_pane_cp01

0xec80,	// (0x0008e105) call_type_pane_cp02

0xbf45,	// (0x0008b3ca) popup_call2_audio_out_window_g1_ParamLimits

0xbf45,	// (0x0008b3ca) popup_call2_audio_out_window_g1

0xbf71,	// (0x0008b3f6) popup_call2_audio_out_window_g2_ParamLimits

0xbf71,	// (0x0008b3f6) popup_call2_audio_out_window_g2

0xbf99,	// (0x0008b41e) popup_call2_audio_out_window_g3_ParamLimits

0xbf99,	// (0x0008b41e) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0008e9c0) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0008e9c0) popup_call2_audio_out_window_g

0xbfd4,	// (0x0008b459) popup_call2_audio_out_window_t1_ParamLimits

0xbfd4,	// (0x0008b459) popup_call2_audio_out_window_t1

0xc033,	// (0x0008b4b8) popup_call2_audio_out_window_t2_ParamLimits

0xc033,	// (0x0008b4b8) popup_call2_audio_out_window_t2

0xc087,	// (0x0008b50c) popup_call2_audio_out_window_t3_ParamLimits

0xc087,	// (0x0008b50c) popup_call2_audio_out_window_t3

0xc09d,	// (0x0008b522) popup_call2_audio_out_window_t4_ParamLimits

0xc09d,	// (0x0008b522) popup_call2_audio_out_window_t4

0xc0b3,	// (0x0008b538) popup_call2_audio_out_window_t5_ParamLimits

0xc0b3,	// (0x0008b538) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008e9c9) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008e9c9) popup_call2_audio_out_window_t

0xc117,	// (0x0008b59c) bg_popup_call2_in_pane_ParamLimits

0xc117,	// (0x0008b59c) bg_popup_call2_in_pane

0xc173,	// (0x0008b5f8) popup_call2_audio_in_window_g1_ParamLimits

0xc173,	// (0x0008b5f8) popup_call2_audio_in_window_g1

0xc1ab,	// (0x0008b630) popup_call2_audio_in_window_g2_ParamLimits

0xc1ab,	// (0x0008b630) popup_call2_audio_in_window_g2

0xc1e3,	// (0x0008b668) popup_call2_audio_in_window_g3_ParamLimits

0xc1e3,	// (0x0008b668) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0008e9d6) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0008e9d6) popup_call2_audio_in_window_g

0xc23b,	// (0x0008b6c0) popup_call2_audio_in_window_t1_ParamLimits

0xc23b,	// (0x0008b6c0) popup_call2_audio_in_window_t1

0xc2bb,	// (0x0008b740) popup_call2_audio_in_window_t2_ParamLimits

0xc2bb,	// (0x0008b740) popup_call2_audio_in_window_t2

0xc33b,	// (0x0008b7c0) popup_call2_audio_in_window_t3_ParamLimits

0xc33b,	// (0x0008b7c0) popup_call2_audio_in_window_t3

0xc355,	// (0x0008b7da) popup_call2_audio_in_window_t4_ParamLimits

0xc355,	// (0x0008b7da) popup_call2_audio_in_window_t4

0xc367,	// (0x0008b7ec) popup_call2_audio_in_window_t5_ParamLimits

0xc367,	// (0x0008b7ec) popup_call2_audio_in_window_t5

0xc37c,	// (0x0008b801) popup_call2_audio_in_window_t6_ParamLimits

0xc37c,	// (0x0008b801) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0008e9df) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0008e9df) popup_call2_audio_in_window_t

0x1513,	// (0x00080998) bg_popup_call2_in_pane_g1

0xc493,	// (0x0008b918) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0008ea47) popup_cale_lunar_info_window_t

0x151b,	// (0x000809a0) bg_popup_call2_rect_pane_ParamLimits

0x151b,	// (0x000809a0) bg_popup_call2_rect_pane

0xefa4,	// (0x0008e429) call2_cli_visual_graphic_pane

0xefa4,	// (0x0008e429) call2_cli_visual_text_pane

0xc68a,	// (0x0008bb0f) smil_status_volume_pane_g3

0x0002,

0x19a8,	// (0x00080e2d) call2_cli_visual_graphic_pane_g1

0x19a8,	// (0x00080e2d) call2_cli_visual_graphic_pane_g2

0x19a8,	// (0x00080e2d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0008e9ec) call2_cli_visual_graphic_pane_g

0xc391,	// (0x0008b816) bg_popup_call2_rect_pane_g1

0x1af7,	// (0x00080f7c) bg_popup_call2_rect_pane_g2

0xc399,	// (0x0008b81e) bg_popup_call2_rect_pane_g3

0xc3a1,	// (0x0008b826) bg_popup_call2_rect_pane_g4

0xc3a9,	// (0x0008b82e) bg_popup_call2_rect_pane_g5

0xc3b1,	// (0x0008b836) bg_popup_call2_rect_pane_g6

0xc3b9,	// (0x0008b83e) bg_popup_call2_rect_pane_g7

0xc3c1,	// (0x0008b846) bg_popup_call2_rect_pane_g8

0xc3c9,	// (0x0008b84e) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0008e9f3) bg_popup_call2_rect_pane_g

0xc3d1,	// (0x0008b856) bg_popup_call2_bubble_pane_g1

0xc3d9,	// (0x0008b85e) bg_popup_call2_bubble_pane_g2

0xc3e1,	// (0x0008b866) bg_popup_call2_bubble_pane_g3

0xc3e9,	// (0x0008b86e) bg_popup_call2_bubble_pane_g4

0xc3f1,	// (0x0008b876) bg_popup_call2_bubble_pane_g5

0xc3f9,	// (0x0008b87e) bg_popup_call2_bubble_pane_g6

0xc401,	// (0x0008b886) bg_popup_call2_bubble_pane_g7

0xc409,	// (0x0008b88e) bg_popup_call2_bubble_pane_g8

0xc411,	// (0x0008b896) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0008ea06) bg_popup_call2_bubble_pane_g

0x1b78,	// (0x00080ffd) aid_cale_week_size_cell_pane

0x22b7,	// (0x0008173c) aid_cams_cif_uncrop_pane_ParamLimits

0x22b7,	// (0x0008173c) aid_cams_cif_uncrop_pane

0x24a5,	// (0x0008192a) aid_cams_size_cell_ParamLimits

0x24a5,	// (0x0008192a) aid_cams_size_cell

0x24b9,	// (0x0008193e) grid_cams_pane_ParamLimits

0x24d3,	// (0x00081958) linegrid_cams_pane_ParamLimits

0x2621,	// (0x00081aa6) call_video_pane_t1

0x263f,	// (0x00081ac4) call_video_pane_t2

0x0001,

0xf26e,	// (0x0008e6f3) call_video_pane_t

0x2ccf,	// (0x00082154) aid_cale_month_size_cell_pane_ParamLimits

0x2ccf,	// (0x00082154) aid_cale_month_size_cell_pane

0xf60b,	// (0x0008ea90) smil_status_volume_pane_g

0xc697,	// (0x0008bb1c) volume_smil_pane_ParamLimits

0xb229,	// (0x0008a6ae) aid_popup2_width_pane

0x1a4f,	// (0x00080ed4) cell_qdial_pane_g4_ParamLimits

0x1a4f,	// (0x00080ed4) cell_qdial_pane_g4

0x3ff1,	// (0x00083476) aid_blid_cardinal_pane_ParamLimits

0x3ffd,	// (0x00083482) aid_blid_destination_pane_ParamLimits

0x3ffd,	// (0x00083482) aid_blid_destination_pane

0x151b,	// (0x000809a0) bg_popup_call_poc_act_pane_ParamLimits

0x151b,	// (0x000809a0) bg_popup_call_poc_act_pane

0x151b,	// (0x000809a0) bg_popup_call_poc_inact_pane_ParamLimits

0x151b,	// (0x000809a0) bg_popup_call_poc_inact_pane

0xc419,	// (0x0008b89e) bg_popup_call_poc_act_pane_g1

0xc421,	// (0x0008b8a6) bg_popup_call_poc_act_pane_g2

0xc429,	// (0x0008b8ae) bg_popup_call_poc_act_pane_g3

0xc3e9,	// (0x0008b86e) bg_popup_call_poc_act_pane_g4

0xc3f1,	// (0x0008b876) bg_popup_call_poc_act_pane_g5

0xc431,	// (0x0008b8b6) bg_popup_call_poc_act_pane_g6

0xc401,	// (0x0008b886) bg_popup_call_poc_act_pane_g7

0xc439,	// (0x0008b8be) bg_popup_call_poc_act_pane_g8

0xefa4,	// (0x0008e429) main_usb_pane

0xc59e,	// (0x0008ba23) popup_cale_lunar_info_window

0x2977,	// (0x00081dfc) im_reading_pane_t1_ParamLimits

0x29b0,	// (0x00081e35) list_im_pane_ParamLimits

0x29c1,	// (0x00081e46) scroll_pane_cp07_ParamLimits

0xefa4,	// (0x0008e429) grid_highlight_pane_cp012

0x151b,	// (0x000809a0) mup_scale_pane_ParamLimits

0x49db,	// (0x00083e60) main_usb_pane_g1_ParamLimits

0x49db,	// (0x00083e60) main_usb_pane_g1

0x4fd1,	// (0x00084456) main_usb_pane_g2_ParamLimits

0x4fd1,	// (0x00084456) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0008ea30) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0008ea30) main_usb_pane_g

0x4fe7,	// (0x0008446c) main_usb_pane_t1_ParamLimits

0x4fe7,	// (0x0008446c) main_usb_pane_t1

0x4ff9,	// (0x0008447e) main_usb_pane_t2_ParamLimits

0x4ff9,	// (0x0008447e) main_usb_pane_t2

0x500b,	// (0x00084490) main_usb_pane_t3_ParamLimits

0x500b,	// (0x00084490) main_usb_pane_t3

0x501d,	// (0x000844a2) main_usb_pane_t4_ParamLimits

0x501d,	// (0x000844a2) main_usb_pane_t4

0x502f,	// (0x000844b4) main_usb_pane_t5_ParamLimits

0x502f,	// (0x000844b4) main_usb_pane_t5

0x5041,	// (0x000844c6) main_usb_pane_t6_ParamLimits

0x5041,	// (0x000844c6) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0008ea35) main_usb_pane_t_ParamLimits

0x3fa0,	// (0x00083425) aid_text_placing

0x3fa9,	// (0x0008342e) main_location2_pane_t1_ParamLimits

0x3fbb,	// (0x00083440) main_location2_pane_t2_ParamLimits

0x3fcd,	// (0x00083452) main_location2_pane_t3_ParamLimits

0x3fdf,	// (0x00083464) main_location2_pane_t4_ParamLimits

0x3fdf,	// (0x00083464) main_location2_pane_t4

0xf3cf,	// (0x0008e854) main_location2_pane_t_ParamLimits

0x15f3,	// (0x00080a78) find_pinb_pane_g2_ParamLimits

0x15f3,	// (0x00080a78) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0008e5a4) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0008e5a4) find_pinb_pane_g

0x15ff,	// (0x00080a84) find_pinb_pane_t1_ParamLimits

0x1611,	// (0x00080a96) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0008e5a9) find_pinb_pane_t_ParamLimits

0xefa4,	// (0x0008e429) main_call3_pane

0x31f9,	// (0x0008267e) cale_month_day_heading_pane_t1_ParamLimits

0x327f,	// (0x00082704) cale_month_day_heading_pane_t2_ParamLimits

0x32f8,	// (0x0008277d) cale_month_day_heading_pane_t3_ParamLimits

0x3371,	// (0x000827f6) cale_month_day_heading_pane_t4_ParamLimits

0x33f2,	// (0x00082877) cale_month_day_heading_pane_t5_ParamLimits

0x347b,	// (0x00082900) cale_month_day_heading_pane_t6_ParamLimits

0x3504,	// (0x00082989) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008e72b) cale_month_day_heading_pane_t_ParamLimits

0x37b0,	// (0x00082c35) smil_status_volume_pane

0x49b7,	// (0x00083e3c) postcard_address_pane_ParamLimits

0x49b7,	// (0x00083e3c) postcard_address_pane

0x49c9,	// (0x00083e4e) postcard_message_pane_ParamLimits

0x49c9,	// (0x00083e4e) postcard_message_pane

0x4faf,	// (0x00084434) call2_cli_visual_pane_t1_ParamLimits

0x4faf,	// (0x00084434) call2_cli_visual_pane_t1

0x57cf,	// (0x00084c54) postcard_message_pane_t1_ParamLimits

0x57cf,	// (0x00084c54) postcard_message_pane_t1

0x57b8,	// (0x00084c3d) postcard_address_pane_t1_ParamLimits

0x57b8,	// (0x00084c3d) postcard_address_pane_t1

0x57a4,	// (0x00084c29) popup_call3_audio_in_window_ParamLimits

0x57a4,	// (0x00084c29) popup_call3_audio_in_window

0x562f,	// (0x00084ab4) bg_popup_call3_in_pane_ParamLimits

0x562f,	// (0x00084ab4) bg_popup_call3_in_pane

0x56a5,	// (0x00084b2a) popup_call3_audio_in_window_g1_ParamLimits

0x56a5,	// (0x00084b2a) popup_call3_audio_in_window_g1

0x56c5,	// (0x00084b4a) popup_call3_audio_in_window_g2_ParamLimits

0x56c5,	// (0x00084b4a) popup_call3_audio_in_window_g2

0x56e5,	// (0x00084b6a) popup_call3_audio_in_window_g3_ParamLimits

0x56e5,	// (0x00084b6a) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0008ea97) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0008ea97) popup_call3_audio_in_window_g

0x5716,	// (0x00084b9b) popup_call3_audio_in_window_t1_ParamLimits

0x5716,	// (0x00084b9b) popup_call3_audio_in_window_t1

0x5754,	// (0x00084bd9) popup_call3_audio_in_window_t2_ParamLimits

0x5754,	// (0x00084bd9) popup_call3_audio_in_window_t2

0x5792,	// (0x00084c17) popup_call3_audio_in_window_t3_ParamLimits

0x5792,	// (0x00084c17) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0008eaa0) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0008eaa0) popup_call3_audio_in_window_t

0x2164,	// (0x000815e9) bg_popup_call3_rect_pane

0xc391,	// (0x0008b816) bg_popup_call3_rect_pane_g1

0x1af7,	// (0x00080f7c) bg_popup_call3_rect_pane_g2

0xc399,	// (0x0008b81e) bg_popup_call3_rect_pane_g3

0xc3a1,	// (0x0008b826) bg_popup_call3_rect_pane_g4

0xc3a9,	// (0x0008b82e) bg_popup_call3_rect_pane_g5

0xc3b1,	// (0x0008b836) bg_popup_call3_rect_pane_g6

0xc3b9,	// (0x0008b83e) bg_popup_call3_rect_pane_g7

0x455b,	// (0x000839e0) mup_visualizer_osc_pane

0x4571,	// (0x000839f6) mup_visualizer_spec_pane

0x565f,	// (0x00084ae4) call3_video_qcif_pane_ParamLimits

0x565f,	// (0x00084ae4) call3_video_qcif_pane

0x5672,	// (0x00084af7) call3_video_qcif_uncrop_pane_ParamLimits

0x5672,	// (0x00084af7) call3_video_qcif_uncrop_pane

0x5680,	// (0x00084b05) call3_video_subqcif_pane_ParamLimits

0x5680,	// (0x00084b05) call3_video_subqcif_pane

0x5694,	// (0x00084b19) call3_video_subqcif_uncrop_pane_ParamLimits

0x5694,	// (0x00084b19) call3_video_subqcif_uncrop_pane

0x5705,	// (0x00084b8a) popup_call3_audio_in_window_g4_ParamLimits

0x5705,	// (0x00084b8a) popup_call3_audio_in_window_g4

0x561e,	// (0x00084aa3) mup_spec_half_pane

0x5627,	// (0x00084aac) mup_spec_half_pane_cp

0xc64a,	// (0x0008bacf) mup_osc_middle_pane

0xc653,	// (0x0008bad8) mup_visualizer_osc_pane_g1

0x55fe,	// (0x00084a83) mup_spec_bar_pane_ParamLimits

0x55fe,	// (0x00084a83) mup_spec_bar_pane

0xc637,	// (0x0008babc) mup_spec_bar_pane_g1

0xc641,	// (0x0008bac6) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008ea8b) mup_spec_bar_pane_g

0x1b78,	// (0x00080ffd) aid_cale_week_size_cell_pane_ParamLimits

0x1b92,	// (0x00081017) bg_cale_heading_pane_ParamLimits

0x1baa,	// (0x0008102f) bg_cale_pane_cp01_ParamLimits

0x1bc7,	// (0x0008104c) cale_week_corner_pane_ParamLimits

0x1be6,	// (0x0008106b) cale_week_day_heading_pane_ParamLimits

0x1c03,	// (0x00081088) cale_week_scroll_pane_g1_ParamLimits

0x1c16,	// (0x0008109b) cale_week_scroll_pane_g2_ParamLimits

0x1c2e,	// (0x000810b3) cale_week_scroll_pane_g3_ParamLimits

0x1c46,	// (0x000810cb) cale_week_scroll_pane_g4_ParamLimits

0x1c5e,	// (0x000810e3) cale_week_scroll_pane_g5_ParamLimits

0x1c7e,	// (0x00081103) cale_week_scroll_pane_g6_ParamLimits

0x1c9e,	// (0x00081123) cale_week_scroll_pane_g7_ParamLimits

0x1cbe,	// (0x00081143) cale_week_scroll_pane_g8_ParamLimits

0x1ce2,	// (0x00081167) cale_week_scroll_pane_g9_ParamLimits

0x1cfa,	// (0x0008117f) cale_week_scroll_pane_g10_ParamLimits

0x1d12,	// (0x00081197) cale_week_scroll_pane_g11_ParamLimits

0x1d2a,	// (0x000811af) cale_week_scroll_pane_g12_ParamLimits

0x1d42,	// (0x000811c7) cale_week_scroll_pane_g13_ParamLimits

0x1d42,	// (0x000811c7) cale_week_scroll_pane_g14_ParamLimits

0x1d42,	// (0x000811c7) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0008e635) cale_week_scroll_pane_g_ParamLimits

0x1d7e,	// (0x00081203) cale_week_time_pane_ParamLimits

0x1da2,	// (0x00081227) grid_cale_week_pane_ParamLimits

0x1dc8,	// (0x0008124d) listscroll_cale_week_pane_t1

0x1dda,	// (0x0008125f) scroll_pane_cp08_ParamLimits

0x2d5c,	// (0x000821e1) cale_month_corner_pane_ParamLimits

0x317a,	// (0x000825ff) cale_month_pane_t1

0x318c,	// (0x00082611) cale_month_week_pane_ParamLimits

0x3be2,	// (0x00083067) popup_call_status_window_g1_ParamLimits

0x3bf6,	// (0x0008307b) popup_call_status_window_g2_ParamLimits

0x3c0a,	// (0x0008308f) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008e7db) popup_call_status_window_g_ParamLimits

0x3c72,	// (0x000830f7) aid_call2_pane

0x0492,	// (0x0007f917) msg_header_pane_g1

0x49b7,	// (0x00083e3c) postcard_address2_pane_ParamLimits

0x49b7,	// (0x00083e3c) postcard_address2_pane

0x49c9,	// (0x00083e4e) postcard_message2_pane_ParamLimits

0x49c9,	// (0x00083e4e) postcard_message2_pane

0x55b0,	// (0x00084a35) message2_row_pane_ParamLimits

0x55b0,	// (0x00084a35) message2_row_pane

0x55cc,	// (0x00084a51) address2_row_pane_ParamLimits

0x55cc,	// (0x00084a51) address2_row_pane

0xc605,	// (0x0008ba8a) postcard_message2_row_pane_g1

0xc60d,	// (0x0008ba92) postcard_message2_row_pane_t1

0xc605,	// (0x0008ba8a) address2_row_pane_g1

0xc60d,	// (0x0008ba92) address2_row_pane_t1

0x215c,	// (0x000815e1) aid_size_cell_vorec

0xefa4,	// (0x0008e429) main_rss_pane

0x55df,	// (0x00084a64) rss_list_single_pane_ParamLimits

0x55df,	// (0x00084a64) rss_list_single_pane

0xc61b,	// (0x0008baa0) rss_list_single_pane_t1

0xc629,	// (0x0008baae) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0008ea86) rss_list_single_pane_t

0xefa4,	// (0x0008e429) main_camera2_pane

0xefa4,	// (0x0008e429) main_video2_pane

0x5848,	// (0x00084ccd) cams_zoom_pane_cp2_ParamLimits

0x5848,	// (0x00084ccd) cams_zoom_pane_cp2

0x5868,	// (0x00084ced) image2_vga_pane_ParamLimits

0x5868,	// (0x00084ced) image2_vga_pane

0x58b9,	// (0x00084d3e) main_camera2_pane_g1_ParamLimits

0x58b9,	// (0x00084d3e) main_camera2_pane_g1

0x58d9,	// (0x00084d5e) main_camera2_pane_g2_ParamLimits

0x58d9,	// (0x00084d5e) main_camera2_pane_g2

0x58f9,	// (0x00084d7e) main_camera2_pane_g3_ParamLimits

0x58f9,	// (0x00084d7e) main_camera2_pane_g3

0x5919,	// (0x00084d9e) main_camera2_pane_g4_ParamLimits

0x5919,	// (0x00084d9e) main_camera2_pane_g4

0x5939,	// (0x00084dbe) main_camera2_pane_g5_ParamLimits

0x5939,	// (0x00084dbe) main_camera2_pane_g5

0x5959,	// (0x00084dde) main_camera2_pane_g6_ParamLimits

0x5959,	// (0x00084dde) main_camera2_pane_g6

0x5979,	// (0x00084dfe) main_camera2_pane_g7_ParamLimits

0x5979,	// (0x00084dfe) main_camera2_pane_g7

0x5999,	// (0x00084e1e) main_camera2_pane_g8_ParamLimits

0x5999,	// (0x00084e1e) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0008eaa7) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0008eaa7) main_camera2_pane_g

0x59d9,	// (0x00084e5e) main_camera2_pane_t1_ParamLimits

0x59d9,	// (0x00084e5e) main_camera2_pane_t1

0x5a0e,	// (0x00084e93) main_camera2_pane_t2_ParamLimits

0x5a0e,	// (0x00084e93) main_camera2_pane_t2

0x5a34,	// (0x00084eb9) main_camera2_pane_t3_ParamLimits

0x5a34,	// (0x00084eb9) main_camera2_pane_t3

0x5a92,	// (0x00084f17) main_camera2_pane_t4_ParamLimits

0x5a92,	// (0x00084f17) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0008eaba) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0008eaba) main_camera2_pane_t

0x5b24,	// (0x00084fa9) cams_zoom_pane_cp4_ParamLimits

0x5b24,	// (0x00084fa9) cams_zoom_pane_cp4

0x5b3a,	// (0x00084fbf) image2_cif_pane_ParamLimits

0x5b3a,	// (0x00084fbf) image2_cif_pane

0x5b65,	// (0x00084fea) image2_subqcif_pane_ParamLimits

0x5b65,	// (0x00084fea) image2_subqcif_pane

0x5b7f,	// (0x00085004) main_video2_pane_g1_ParamLimits

0x5b7f,	// (0x00085004) main_video2_pane_g1

0x5b99,	// (0x0008501e) main_video2_pane_g2_ParamLimits

0x5b99,	// (0x0008501e) main_video2_pane_g2

0x5baf,	// (0x00085034) main_video2_pane_g3_ParamLimits

0x5baf,	// (0x00085034) main_video2_pane_g3

0x5bc5,	// (0x0008504a) main_video2_pane_g4_ParamLimits

0x5bc5,	// (0x0008504a) main_video2_pane_g4

0x5bdb,	// (0x00085060) main_video2_pane_g5_ParamLimits

0x5bdb,	// (0x00085060) main_video2_pane_g5

0x5bf1,	// (0x00085076) main_video2_pane_g6_ParamLimits

0x5bf1,	// (0x00085076) main_video2_pane_g6

0x0005,

0xf644,	// (0x0008eac9) main_video2_pane_g_ParamLimits

0xf644,	// (0x0008eac9) main_video2_pane_g

0x5c0b,	// (0x00085090) main_video2_pane_t1_ParamLimits

0x5c0b,	// (0x00085090) main_video2_pane_t1

0x5c2f,	// (0x000850b4) main_video2_pane_t2_ParamLimits

0x5c2f,	// (0x000850b4) main_video2_pane_t2

0x5c7d,	// (0x00085102) main_video2_pane_t3_ParamLimits

0x5c7d,	// (0x00085102) main_video2_pane_t3

0x0002,

0xf651,	// (0x0008ead6) main_video2_pane_t_ParamLimits

0xf651,	// (0x0008ead6) main_video2_pane_t

0x50fc,	// (0x00084581) call_muted_g2

0x0001,

0xf5f3,	// (0x0008ea78) call_muted_g

0xefa4,	// (0x0008e429) main_mup2_pane

0x5cc1,	// (0x00085146) main_mup2_pane_g1_ParamLimits

0x5cc1,	// (0x00085146) main_mup2_pane_g1

0x5ccd,	// (0x00085152) main_mup2_pane_g2_ParamLimits

0x5ccd,	// (0x00085152) main_mup2_pane_g2

0xc7bb,	// (0x0008bc40) main_mup_pane_g13_cp1

0xc7c3,	// (0x0008bc48) mup_volume_pane_cp1

0x5ce9,	// (0x0008516e) main_mup2_pane_g4_ParamLimits

0x5ce9,	// (0x0008516e) main_mup2_pane_g4

0x5cfb,	// (0x00085180) main_mup2_pane_g5_ParamLimits

0x5cfb,	// (0x00085180) main_mup2_pane_g5

0x5d0d,	// (0x00085192) main_mup2_pane_g6_ParamLimits

0x5d0d,	// (0x00085192) main_mup2_pane_g6

0x5d1f,	// (0x000851a4) main_mup2_pane_g7_ParamLimits

0x5d1f,	// (0x000851a4) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0008eadd) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0008eadd) main_mup2_pane_g

0x5d37,	// (0x000851bc) main_mup2_pane_t1_ParamLimits

0x5d37,	// (0x000851bc) main_mup2_pane_t1

0x5d4d,	// (0x000851d2) main_mup2_pane_t2_ParamLimits

0x5d4d,	// (0x000851d2) main_mup2_pane_t2

0x5d63,	// (0x000851e8) main_mup2_pane_t3_ParamLimits

0x5d63,	// (0x000851e8) main_mup2_pane_t3

0x5d79,	// (0x000851fe) main_mup2_pane_t4_ParamLimits

0x5d79,	// (0x000851fe) main_mup2_pane_t4

0x5d91,	// (0x00085216) main_mup2_pane_t5_ParamLimits

0x5d91,	// (0x00085216) main_mup2_pane_t5

0x5da9,	// (0x0008522e) main_mup2_pane_t6_ParamLimits

0x5da9,	// (0x0008522e) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0008eaec) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0008eaec) main_mup2_pane_t

0x5dd9,	// (0x0008525e) mup2_visualizer_pane_ParamLimits

0x5dd9,	// (0x0008525e) mup2_visualizer_pane

0x5e07,	// (0x0008528c) mup_progress_pane_cp_ParamLimits

0x5e07,	// (0x0008528c) mup_progress_pane_cp

0xc79d,	// (0x0008bc22) mup_volume_pane_cp_ParamLimits

0xc79d,	// (0x0008bc22) mup_volume_pane_cp

0x5e1b,	// (0x000852a0) mup2_visualizer_pane_g1_ParamLimits

0x5e1b,	// (0x000852a0) mup2_visualizer_pane_g1

0xc6dc,	// (0x0008bb61) mup2_visualizer_pane_g2_ParamLimits

0xc6dc,	// (0x0008bb61) mup2_visualizer_pane_g2

0x5e32,	// (0x000852b7) mup2_visualizer_pane_g3_ParamLimits

0x5e32,	// (0x000852b7) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0008eaf9) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0008eaf9) mup2_visualizer_pane_g

0xb476,	// (0x0008a8fb) aid_size_cell_fmradio

0x52ae,	// (0x00084733) aid_height_parent_landcape

0x2a77,	// (0x00081efc) wml_content_pane_cp

0x2a7f,	// (0x00081f04) wml_tabs_pane

0x2a88,	// (0x00081f0d) popup_wml_miniature_window

0x2a90,	// (0x00081f15) scroll_pane_cp021

0x2aa4,	// (0x00081f29) wml_content_pane_comp8

0xefa4,	// (0x0008e429) bg_popup_sub_pane_cp05

0xc6fa,	// (0x0008bb7f) popup_wml_miniature_window_g1

0xc702,	// (0x0008bb87) wml_miniature_view_pane

0x5e3e,	// (0x000852c3) aid_size_wml_view

0x5e46,	// (0x000852cb) wml_miniature_view_pane_g1

0x5e4f,	// (0x000852d4) wml_miniature_view_pane_g2

0x5e58,	// (0x000852dd) wml_miniature_view_pane_g3

0x5e60,	// (0x000852e5) wml_miniature_view_pane_g4

0x5e68,	// (0x000852ed) wml_miniature_view_pane_g5

0x5e70,	// (0x000852f5) wml_miniature_view_pane_g6

0x5e78,	// (0x000852fd) wml_miniature_view_pane_g7

0x5e80,	// (0x00085305) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0008eb00) wml_miniature_view_pane_g

0xc70a,	// (0x0008bb8f) background_graphic_ParamLimits

0xc70a,	// (0x0008bb8f) background_graphic

0xc716,	// (0x0008bb9b) wml_tabs_2_pane

0xc71f,	// (0x0008bba4) wml_tabs_3_pane_ParamLimits

0xc71f,	// (0x0008bba4) wml_tabs_3_pane

0xc731,	// (0x0008bbb6) wml_tabs_4_pane_ParamLimits

0xc731,	// (0x0008bbb6) wml_tabs_4_pane

0xc747,	// (0x0008bbcc) wml_tabs_5_pane_ParamLimits

0xc747,	// (0x0008bbcc) wml_tabs_5_pane

0xc761,	// (0x0008bbe6) wml_tabs_pane_g2_ParamLimits

0xc761,	// (0x0008bbe6) wml_tabs_pane_g2

0xc775,	// (0x0008bbfa) wml_tabs_pane_g3_ParamLimits

0xc775,	// (0x0008bbfa) wml_tabs_pane_g3

0x5e88,	// (0x0008530d) wml_tabs_2_active_pane_ParamLimits

0x5e88,	// (0x0008530d) wml_tabs_2_active_pane

0x5e9c,	// (0x00085321) wml_tabs_2_passive_pane_ParamLimits

0x5e9c,	// (0x00085321) wml_tabs_2_passive_pane

0x5eb0,	// (0x00085335) wml_tabs_3_active_pane_cp_ParamLimits

0x5eb0,	// (0x00085335) wml_tabs_3_active_pane_cp

0x5ec5,	// (0x0008534a) wml_tabs_3_passive_pane_ParamLimits

0x5ec5,	// (0x0008534a) wml_tabs_3_passive_pane

0x5ed8,	// (0x0008535d) wml_tabs_3_passive_pane_cp_ParamLimits

0x5ed8,	// (0x0008535d) wml_tabs_3_passive_pane_cp

0x5eef,	// (0x00085374) tabs_4_active_pane

0x5ef7,	// (0x0008537c) tabs_4_passive_pane

0x5f01,	// (0x00085386) tabs_4_passive_pane_cp

0x5f09,	// (0x0008538e) tabs_4_passive_pane_cp2

0x4fc9,	// (0x0008444e) aid_height_text

0x4531,	// (0x000839b6) mup_volume_cont_pane_ParamLimits

0x4531,	// (0x000839b6) mup_volume_cont_pane

0x15b1,	// (0x00080a36) aid_size_cell_pinb

0x15bb,	// (0x00080a40) aid_size_list_pinb

0x5df3,	// (0x00085278) mup2_volume_cont_pane_ParamLimits

0x5df3,	// (0x00085278) mup2_volume_cont_pane

0xc789,	// (0x0008bc0e) mup2_volume_cont_pane_g1_ParamLimits

0xc789,	// (0x0008bc0e) mup2_volume_cont_pane_g1

0x10fd,	// (0x00080582) aid_size_cell_touch_ParamLimits

0x10fd,	// (0x00080582) aid_size_cell_touch

0x132a,	// (0x000807af) touch_pane_ParamLimits

0x132a,	// (0x000807af) touch_pane

0xdfb8,	// (0x0008d43d) main_rss2_pane

0xc7cb,	// (0x0008bc50) listscroll_rss2_pane

0xc7d4,	// (0x0008bc59) rss2_navigation_pane

0xc7dc,	// (0x0008bc61) list_rss2_pane

0x3e2c,	// (0x000832b1) scroll_pane_cp22

0xc7e4,	// (0x0008bc69) rss2_navigation_pane_g1

0xc7ed,	// (0x0008bc72) rss2_navigation_pane_g2

0xc7f5,	// (0x0008bc7a) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0008eb11) rss2_navigation_pane_g

0xc7fd,	// (0x0008bc82) rss2_navigation_pane_t1

0x5f13,	// (0x00085398) rss2_list_single_pane_ParamLimits

0x5f13,	// (0x00085398) rss2_list_single_pane

0xc80b,	// (0x0008bc90) rss2_list_single_pane_t2

0xc819,	// (0x0008bc9e) rss2_list_single_pane_t3_ParamLimits

0xc819,	// (0x0008bc9e) rss2_list_single_pane_t3

0xc836,	// (0x0008bcbb) rss2_list_single_pane_t4

0x3798,	// (0x00082c1d) smil_status_pane_g1

0xb28f,	// (0x0008a714) main_image2_pane_ParamLimits

0xb28f,	// (0x0008a714) main_image2_pane

0x59b9,	// (0x00084e3e) main_camera2_pane_g9_ParamLimits

0x59b9,	// (0x00084e3e) main_camera2_pane_g9

0x5ae7,	// (0x00084f6c) main_camera2_pane_t5_ParamLimits

0x5ae7,	// (0x00084f6c) main_camera2_pane_t5

0xc6ac,	// (0x0008bb31) main_camera2_pane_t6_ParamLimits

0xc6ac,	// (0x0008bb31) main_camera2_pane_t6

0x5f28,	// (0x000853ad) main_image2_pane_g1_ParamLimits

0x5f28,	// (0x000853ad) main_image2_pane_g1

0x4d05,	// (0x0008418a) smil2_video_pane_ParamLimits

0x4d05,	// (0x0008418a) smil2_video_pane

0xb245,	// (0x0008a6ca) aid_zoom_text_primary_cp

0xb285,	// (0x0008a70a) popup_preview_fixed_window

0x296f,	// (0x00081df4) im_reading_pane_g1

0x5830,	// (0x00084cb5) cams2_bc_adjust_pane_cp_ParamLimits

0x5830,	// (0x00084cb5) cams2_bc_adjust_pane_cp

0x5b16,	// (0x00084f9b) cams2_bc_adjust_pane_ParamLimits

0x5b16,	// (0x00084f9b) cams2_bc_adjust_pane

0xc844,	// (0x0008bcc9) cams2_bc_adjust_pane_g1

0xc84c,	// (0x0008bcd1) cams2_slider_pane

0xc855,	// (0x0008bcda) cams2_slider_pane_g1

0xc85e,	// (0x0008bce3) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0008eb18) cams2_slider_pane_g

0x1700,	// (0x00080b85) calc_display_pane_ParamLimits

0x1728,	// (0x00080bad) calc_paper_pane_ParamLimits

0x174b,	// (0x00080bd0) grid_calc_pane_ParamLimits

0xb3d1,	// (0x0008a856) popup_clock_digital_window_t1_ParamLimits

0x4bc0,	// (0x00084045) main_image_pane_t1

0x16e2,	// (0x00080b67) aid_size_cell_calc_ParamLimits

0x16e2,	// (0x00080b67) aid_size_cell_calc

0x52f4,	// (0x00084779) popup_blid_sat_info2_window_ParamLimits

0x52f4,	// (0x00084779) popup_blid_sat_info2_window

0xc880,	// (0x0008bd05) aid_size_cell_blid

0xc888,	// (0x0008bd0d) bg_popup_window_pane_cp07

0xc8ab,	// (0x0008bd30) grid_popup_blid_pane

0xc8b5,	// (0x0008bd3a) heading_pane_cp05_ParamLimits

0xc8b5,	// (0x0008bd3a) heading_pane_cp05

0xc97f,	// (0x0008be04) cell_popup_blid_pane_ParamLimits

0xc97f,	// (0x0008be04) cell_popup_blid_pane

0xc9a3,	// (0x0008be28) cell_popup_blid_pane_g1

0xc9ab,	// (0x0008be30) cell_popup_blid_pane_t1

0x5dc3,	// (0x00085248) mup2_indicator_pane_ParamLimits

0x5dc3,	// (0x00085248) mup2_indicator_pane

0x2164,	// (0x000815e9) mup2_visualizer_osc_pane

0xc6e8,	// (0x0008bb6d) mup2_visualizer_spec_pane_ParamLimits

0xc6e8,	// (0x0008bb6d) mup2_visualizer_spec_pane

0x5f3e,	// (0x000853c3) mup2_spec_half_pane

0x5f47,	// (0x000853cc) mup2_spec_half_pane_cp

0x5f4f,	// (0x000853d4) mup2_spec_bar_pane_ParamLimits

0x5f4f,	// (0x000853d4) mup2_spec_bar_pane

0xc637,	// (0x0008babc) mup2_spec_bar_pane_g1

0xc641,	// (0x0008bac6) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008ea8b) mup2_spec_bar_pane_g

0x5f6f,	// (0x000853f4) mup2_osc_middle_pane

0xc653,	// (0x0008bad8) mup2_visualizer_osc_pane_g1

0xdfe2,	// (0x0008d467) popup_number_entry_window_t1_ParamLimits

0xdff5,	// (0x0008d47a) popup_number_entry_window_t2_ParamLimits

0xe007,	// (0x0008d48c) popup_number_entry_window_t3_ParamLimits

0x137c,	// (0x00080801) popup_number_entry_window_t5_ParamLimits

0x137c,	// (0x00080801) popup_number_entry_window_t5

0xf0ca,	// (0x0008e54f) popup_number_entry_window_t_ParamLimits

0xe019,	// (0x0008d49e) text_title_cp2_ParamLimits

0xb410,	// (0x0008a895) aid_hotspot_pointer_text2_pane

0xb436,	// (0x0008a8bb) main_viewer_pane_g9_ParamLimits

0xb436,	// (0x0008a8bb) main_viewer_pane_g9

0x317a,	// (0x000825ff) cale_month_pane_t1_ParamLimits

0x380a,	// (0x00082c8f) bg_cale_pane_ParamLimits

0x3822,	// (0x00082ca7) list_cale_pane_ParamLimits

0x3833,	// (0x00082cb8) listscroll_cale_day_pane_t1

0x3845,	// (0x00082cca) scroll_pane_cp09_ParamLimits

0x45df,	// (0x00083a64) main_mup_eq_pane_t1_ParamLimits

0x45df,	// (0x00083a64) main_mup_eq_pane_t1

0x45f9,	// (0x00083a7e) main_mup_eq_pane_t2_ParamLimits

0x45f9,	// (0x00083a7e) main_mup_eq_pane_t2

0x4613,	// (0x00083a98) main_mup_eq_pane_t3_ParamLimits

0x4613,	// (0x00083a98) main_mup_eq_pane_t3

0x462f,	// (0x00083ab4) main_mup_eq_pane_t4_ParamLimits

0x462f,	// (0x00083ab4) main_mup_eq_pane_t4

0x464b,	// (0x00083ad0) main_mup_eq_pane_t5_ParamLimits

0x464b,	// (0x00083ad0) main_mup_eq_pane_t5

0x4667,	// (0x00083aec) main_mup_eq_pane_t6_ParamLimits

0x4667,	// (0x00083aec) main_mup_eq_pane_t6

0x467b,	// (0x00083b00) main_mup_eq_pane_t7_ParamLimits

0x467b,	// (0x00083b00) main_mup_eq_pane_t7

0x468f,	// (0x00083b14) main_mup_eq_pane_t8_ParamLimits

0x468f,	// (0x00083b14) main_mup_eq_pane_t8

0x46a3,	// (0x00083b28) main_mup_eq_pane_t9_ParamLimits

0x46a3,	// (0x00083b28) main_mup_eq_pane_t9

0x46bd,	// (0x00083b42) main_mup_eq_pane_t10_ParamLimits

0x46bd,	// (0x00083b42) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0008e8da) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0008e8da) main_mup_eq_pane_t

0x476c,	// (0x00083bf1) mup_equalizer_pane_cp5_ParamLimits

0x4780,	// (0x00083c05) mup_equalizer_pane_cp6_ParamLimits

0x4794,	// (0x00083c19) mup_equalizer_pane_cp7_ParamLimits

0xdfb8,	// (0x0008d43d) main_gallery_pane

0xc65c,	// (0x0008bae1) smil2_volume_pane

0xc664,	// (0x0008bae9) smil_status_volume_pane_g1_ParamLimits

0xc677,	// (0x0008bafc) smil_status_volume_pane_g2_ParamLimits

0xc68a,	// (0x0008bb0f) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0008ea90) smil_status_volume_pane_g_ParamLimits

0xc888,	// (0x0008bd0d) bg_popup_window_pane_cp07_ParamLimits

0xc896,	// (0x0008bd1b) blid_firmament_pane

0x5f78,	// (0x000853fd) aid_size_cell_gallery_ParamLimits

0x5f78,	// (0x000853fd) aid_size_cell_gallery

0x5f8e,	// (0x00085413) grid_gallery_pane_ParamLimits

0x5f8e,	// (0x00085413) grid_gallery_pane

0x5fa7,	// (0x0008542c) cell_gallery_pane_ParamLimits

0x5fa7,	// (0x0008542c) cell_gallery_pane

0xc9b9,	// (0x0008be3e) bg_cell_gallery_focus_pane_ParamLimits

0xc9b9,	// (0x0008be3e) bg_cell_gallery_focus_pane

0xc9cb,	// (0x0008be50) cell_gallery_pane_g1_ParamLimits

0xc9cb,	// (0x0008be50) cell_gallery_pane_g1

0x5ff0,	// (0x00085475) cell_gallery_pane_g2_ParamLimits

0x5ff0,	// (0x00085475) cell_gallery_pane_g2

0x5ffd,	// (0x00085482) cell_gallery_pane_g3_ParamLimits

0x5ffd,	// (0x00085482) cell_gallery_pane_g3

0xc9d7,	// (0x0008be5c) cell_gallery_pane_g4_ParamLimits

0xc9d7,	// (0x0008be5c) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008eb3e) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008eb3e) cell_gallery_pane_g

0xc9e3,	// (0x0008be68) bg_cell_gallery_focus_pane_g1

0xc9eb,	// (0x0008be70) bg_cell_gallery_focus_pane_g2

0xc9f3,	// (0x0008be78) bg_cell_gallery_focus_pane_g3

0xc9fb,	// (0x0008be80) bg_cell_gallery_focus_pane_g4

0xca03,	// (0x0008be88) bg_cell_gallery_focus_pane_g5

0xca0b,	// (0x0008be90) bg_cell_gallery_focus_pane_g6

0xca13,	// (0x0008be98) bg_cell_gallery_focus_pane_g7

0xca1b,	// (0x0008bea0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0008eb47) bg_cell_gallery_focus_pane_g

0xca23,	// (0x0008bea8) aid_firma_cardinal

0xca37,	// (0x0008bebc) blid_firmament_pane_t1

0xca4e,	// (0x0008bed3) blid_firmament_pane_t2

0xca65,	// (0x0008beea) blid_firmament_pane_t3

0xca7c,	// (0x0008bf01) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0008eb58) blid_firmament_pane_t

0xca93,	// (0x0008bf18) blid_sat_info_pane

0xcaa3,	// (0x0008bf28) blid_sat_info_pane_g1

0xcaa3,	// (0x0008bf28) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0008eb61) blid_sat_info_pane_g

0xcaad,	// (0x0008bf32) blid_sat_info_pane_t1

0xcabb,	// (0x0008bf40) smil2_volume_content_pane

0xcac4,	// (0x0008bf49) smil2_volume_pane_g1

0xcacc,	// (0x0008bf51) smil2_volume_content_pane_g1

0xcad5,	// (0x0008bf5a) smil2_volume_content_pane_g2

0xcade,	// (0x0008bf63) smil2_volume_content_pane_g3

0xcae7,	// (0x0008bf6c) smil2_volume_content_pane_g4

0xcaf0,	// (0x0008bf75) smil2_volume_content_pane_g5

0xcaf9,	// (0x0008bf7e) smil2_volume_content_pane_g6

0xcb02,	// (0x0008bf87) smil2_volume_content_pane_g7

0xcb0b,	// (0x0008bf90) smil2_volume_content_pane_g8

0xcb14,	// (0x0008bf99) smil2_volume_content_pane_g9

0xcb1d,	// (0x0008bfa2) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0008eb66) smil2_volume_content_pane_g

0x1e85,	// (0x0008130a) cale_week_day_heading_pane_t1_ParamLimits

0x1eaf,	// (0x00081334) cale_week_day_heading_pane_t2_ParamLimits

0x1ede,	// (0x00081363) cale_week_day_heading_pane_t3_ParamLimits

0x1f0d,	// (0x00081392) cale_week_day_heading_pane_t4_ParamLimits

0x1f3c,	// (0x000813c1) cale_week_day_heading_pane_t5_ParamLimits

0x1f73,	// (0x000813f8) cale_week_day_heading_pane_t6_ParamLimits

0x1faa,	// (0x0008142f) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0008e656) cale_week_day_heading_pane_t_ParamLimits

0x1fd4,	// (0x00081459) bg_cale_side_pane_ParamLimits

0x1fe2,	// (0x00081467) cale_week_time_pane_t1_ParamLimits

0x1ffc,	// (0x00081481) cale_week_time_pane_t2_ParamLimits

0x2016,	// (0x0008149b) cale_week_time_pane_t3_ParamLimits

0x2030,	// (0x000814b5) cale_week_time_pane_t4_ParamLimits

0x204a,	// (0x000814cf) cale_week_time_pane_t5_ParamLimits

0x2064,	// (0x000814e9) cale_week_time_pane_t6_ParamLimits

0x207e,	// (0x00081503) cale_week_time_pane_t7_ParamLimits

0x2098,	// (0x0008151d) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0008e665) cale_week_time_pane_t_ParamLimits

0x20b2,	// (0x00081537) cell_cale_week_pane_g2_ParamLimits

0x1fd4,	// (0x00081459) bg_cale_side_pane_cp01_ParamLimits

0x3595,	// (0x00082a1a) cale_month_week_pane_t1_ParamLimits

0x35ae,	// (0x00082a33) cale_month_week_pane_t2_ParamLimits

0x35c7,	// (0x00082a4c) cale_month_week_pane_t3_ParamLimits

0x35e0,	// (0x00082a65) cale_month_week_pane_t4_ParamLimits

0x35f9,	// (0x00082a7e) cale_month_week_pane_t5_ParamLimits

0x3612,	// (0x00082a97) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008e73a) cale_month_week_pane_t_ParamLimits

0xb335,	// (0x0008a7ba) cell_cale_month_pane_g1_ParamLimits

0xdfb8,	// (0x0008d43d) main_cale_event_viewer_pane

0xdfb8,	// (0x0008d43d) listscroll_cale_event_viewer_pane

0xcb26,	// (0x0008bfab) list_cale_ev_pane

0xcb2e,	// (0x0008bfb3) scroll_pane_cp023

0xcb3a,	// (0x0008bfbf) field_cale_ev_pane_ParamLimits

0xcb3a,	// (0x0008bfbf) field_cale_ev_pane

0xcb58,	// (0x0008bfdd) field_cale_ev_content_pane_ParamLimits

0xcb58,	// (0x0008bfdd) field_cale_ev_content_pane

0xcb64,	// (0x0008bfe9) field_cale_ev_pane_g1_ParamLimits

0xcb64,	// (0x0008bfe9) field_cale_ev_pane_g1

0xcb70,	// (0x0008bff5) field_cale_ev_pane_g2_ParamLimits

0xcb70,	// (0x0008bff5) field_cale_ev_pane_g2

0xcb88,	// (0x0008c00d) field_cale_ev_pane_g3_ParamLimits

0xcb88,	// (0x0008c00d) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0008eb7b) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0008eb7b) field_cale_ev_pane_g

0xcba0,	// (0x0008c025) field_cale_ev_pane_t1_ParamLimits

0xcba0,	// (0x0008c025) field_cale_ev_pane_t1

0xcbb7,	// (0x0008c03c) field_cale_ev_content_pane_t1_ParamLimits

0xcbb7,	// (0x0008c03c) field_cale_ev_content_pane_t1

0x483e,	// (0x00083cc3) bg_button_pane_cp01

0x1b5d,	// (0x00080fe2) listscroll_cale_week_pane_ParamLimits

0x1b6f,	// (0x00080ff4) popup_toolbar_window_cp01

0x1dc8,	// (0x0008124d) listscroll_cale_week_pane_t1_ParamLimits

0x1b5d,	// (0x00080fe2) listscroll_cale_day_pane_ParamLimits

0x1b6f,	// (0x00080ff4) popup_toolbar_window_cp02

0x3833,	// (0x00082cb8) listscroll_cale_day_pane_t1_ParamLimits

0x1b5d,	// (0x00080fe2) main_cale_month_pane_ParamLimits

0xc5d5,	// (0x0008ba5a) popup_toolbar_window_cp03_ParamLimits

0xc5d5,	// (0x0008ba5a) popup_toolbar_window_cp03

0x4b9e,	// (0x00084023) main_image_pane_g2_ParamLimits

0x4b9e,	// (0x00084023) main_image_pane_g2

0x4baf,	// (0x00084034) main_image_pane_g3_ParamLimits

0x4baf,	// (0x00084034) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0008e96c) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0008e96c) main_image_pane_g

0x4bc0,	// (0x00084045) main_image_pane_t1_ParamLimits

0x4bd7,	// (0x0008405c) main_image_pane_t2_ParamLimits

0x4bd7,	// (0x0008405c) main_image_pane_t2

0x4be9,	// (0x0008406e) main_image_pane_t3_ParamLimits

0x4be9,	// (0x0008406e) main_image_pane_t3

0x4c11,	// (0x00084096) main_image_pane_t4_ParamLimits

0x4c11,	// (0x00084096) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0008e973) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0008e973) main_image_pane_t

0x4c31,	// (0x000840b6) popup_image_details_window_cp01

0x4c3b,	// (0x000840c0) popup_toobar_trans_pane_cp01_ParamLimits

0x4c3b,	// (0x000840c0) popup_toobar_trans_pane_cp01

0x53d3,	// (0x00084858) popup_image_details_window_ParamLimits

0x53d3,	// (0x00084858) popup_image_details_window

0xc5a8,	// (0x0008ba2d) popup_image_focus_window

0x57ea,	// (0x00084c6f) camera2_autofocus_pane_ParamLimits

0x57ea,	// (0x00084c6f) camera2_autofocus_pane

0xdfb8,	// (0x0008d43d) bg_popup_sub_pane_cp06

0xcbd5,	// (0x0008c05a) popup_image_focus_window_g1

0xcbdd,	// (0x0008c062) popup_image_focus_window_g2

0xcbe5,	// (0x0008c06a) popup_image_focus_window_g3

0xcbed,	// (0x0008c072) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0008eb82) popup_image_focus_window_g

0xcbf5,	// (0x0008c07a) popup_image_focus_window_t1

0xcc03,	// (0x0008c088) popup_image_focus_window_t2

0xcc13,	// (0x0008c098) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0008eb8b) popup_image_focus_window_t

0xcc21,	// (0x0008c0a6) camera2_autofocus_pane_g1

0xb28f,	// (0x0008a714) bg_tb_trans_pane_cp01

0xcc2f,	// (0x0008c0b4) popup_image_details_window_g1

0xcc42,	// (0x0008c0c7) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0008eb9d) popup_image_details_window_g

0xcc6b,	// (0x0008c0f0) popup_image_details_window_t1

0xcc7d,	// (0x0008c102) popup_image_details_window_t2

0xcc96,	// (0x0008c11b) popup_image_details_window_t3

0xccaa,	// (0x0008c12f) popup_image_details_window_t4

0xccc5,	// (0x0008c14a) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0008eba4) popup_image_details_window_t

0x1873,	// (0x00080cf8) bg_calc_paper_pane_ParamLimits

0xdfb8,	// (0x0008d43d) grid_highlight_pane_cp013

0xb2a5,	// (0x0008a72a) list_calc_pane_ParamLimits

0xb2b7,	// (0x0008a73c) scroll_pane_cp024

0x1887,	// (0x00080d0c) bg_calc_display_pane_ParamLimits

0x1893,	// (0x00080d18) calc_display_pane_t1_ParamLimits

0x18a5,	// (0x00080d2a) calc_display_pane_t2_ParamLimits

0xb2bf,	// (0x0008a744) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0008e5d6) calc_display_pane_t_ParamLimits

0x19b2,	// (0x00080e37) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0008e5f3) cell_calc_pane_g

0x19bb,	// (0x00080e40) cell_calc_pane_t1

0x19ca,	// (0x00080e4f) grid_highlight_pane_cp02_ParamLimits

0x19e0,	// (0x00080e65) toolbar_button_pane_cp01_ParamLimits

0x19e0,	// (0x00080e65) toolbar_button_pane_cp01

0xb458,	// (0x0008a8dd) temp_image_control_pane_ParamLimits

0xb458,	// (0x0008a8dd) temp_image_control_pane

0xb28f,	// (0x0008a714) main_mp3_pane

0xccdf,	// (0x0008c164) temp_image_control_pane_g1_ParamLimits

0xccdf,	// (0x0008c164) temp_image_control_pane_g1

0xcced,	// (0x0008c172) temp_image_control_pane_g2_ParamLimits

0xcced,	// (0x0008c172) temp_image_control_pane_g2

0xccff,	// (0x0008c184) temp_image_control_pane_g3_ParamLimits

0xccff,	// (0x0008c184) temp_image_control_pane_g3

0x603a,	// (0x000854bf) temp_image_control_pane_g4_ParamLimits

0x603a,	// (0x000854bf) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0008ebaf) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0008ebaf) temp_image_control_pane_g

0xccdf,	// (0x0008c164) main_mp3_pane_g1

0x604d,	// (0x000854d2) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0008ebb8) main_mp3_pane_g

0xcd42,	// (0x0008c1c7) main_mp3_pane_t1

0x227f,	// (0x00081704) main_camera_pane_g8_ParamLimits

0x227f,	// (0x00081704) main_camera_pane_g8

0x2427,	// (0x000818ac) main_video_pane_g7_ParamLimits

0x2427,	// (0x000818ac) main_video_pane_g7

0xc6ca,	// (0x0008bb4f) main_camera2_pane_t7_ParamLimits

0xc6ca,	// (0x0008bb4f) main_camera2_pane_t7

0x2a37,	// (0x00081ebc) scroll_pane_cp025_ParamLimits

0x2a37,	// (0x00081ebc) scroll_pane_cp025

0x2a4b,	// (0x00081ed0) scroll_pane_cp026_ParamLimits

0x2a4b,	// (0x00081ed0) scroll_pane_cp026

0x2a5a,	// (0x00081edf) wml_content_pane_ParamLimits

0xdfb8,	// (0x0008d43d) main_touch_calib_pane

0x6121,	// (0x000855a6) main_touch_calib_pane_g1

0x6133,	// (0x000855b8) main_touch_calib_pane_g2

0x6145,	// (0x000855ca) main_touch_calib_pane_g3

0x6157,	// (0x000855dc) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0008ebd6) main_touch_calib_pane_g

0x6169,	// (0x000855ee) main_touch_calib_pane_t1

0x6183,	// (0x00085608) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0008ebdf) main_touch_calib_pane_t

0x40d4,	// (0x00083559) mup_progress_pane_cp02

0x4109,	// (0x0008358e) navi_pane_g1

0x41c4,	// (0x00083649) navi_pane_mp_t3

0xb28f,	// (0x0008a714) main_mp3_pane_ParamLimits

0x5558,	// (0x000849dd) navi_pane_ParamLimits

0xccdf,	// (0x0008c164) main_mp3_pane_g1_ParamLimits

0x604d,	// (0x000854d2) main_mp3_pane_g2_ParamLimits

0x605b,	// (0x000854e0) main_mp3_pane_g3_ParamLimits

0x605b,	// (0x000854e0) main_mp3_pane_g3

0x6069,	// (0x000854ee) main_mp3_pane_g4_ParamLimits

0x6069,	// (0x000854ee) main_mp3_pane_g4

0xcd0f,	// (0x0008c194) main_mp3_pane_g5_ParamLimits

0xcd0f,	// (0x0008c194) main_mp3_pane_g5

0xcd1d,	// (0x0008c1a2) main_mp3_pane_g6_ParamLimits

0xcd1d,	// (0x0008c1a2) main_mp3_pane_g6

0xcd2a,	// (0x0008c1af) main_mp3_pane_g7_ParamLimits

0xcd2a,	// (0x0008c1af) main_mp3_pane_g7

0xcd36,	// (0x0008c1bb) main_mp3_pane_g8_ParamLimits

0xcd36,	// (0x0008c1bb) main_mp3_pane_g8

0xf733,	// (0x0008ebb8) main_mp3_pane_g_ParamLimits

0x6075,	// (0x000854fa) main_mp3_pane_t2

0x6083,	// (0x00085508) main_mp3_pane_t3

0xcd50,	// (0x0008c1d5) main_mp3_pane_t4

0xcd5e,	// (0x0008c1e3) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0008ebc9) main_mp3_pane_t

0xcd6c,	// (0x0008c1f1) mup_progress_pane_cp01

0xb245,	// (0x0008a6ca) aid_zoom_text_secondary2

0xcb26,	// (0x0008bfab) list_cale_ev2_pane

0xcb2e,	// (0x0008bfb3) scroll_pane_cp023_ParamLimits

0x61d9,	// (0x0008565e) field_cale_ev2_pane_ParamLimits

0x61d9,	// (0x0008565e) field_cale_ev2_pane

0x61f9,	// (0x0008567e) field_cale_ev2_pane_g1_ParamLimits

0x61f9,	// (0x0008567e) field_cale_ev2_pane_g1

0x6205,	// (0x0008568a) field_cale_ev2_pane_g2_ParamLimits

0x6205,	// (0x0008568a) field_cale_ev2_pane_g2

0x621d,	// (0x000856a2) field_cale_ev2_pane_g3_ParamLimits

0x621d,	// (0x000856a2) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0008ebea) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0008ebea) field_cale_ev2_pane_g

0xcd80,	// (0x0008c205) field_cale_ev2_pane_t1_ParamLimits

0xcd80,	// (0x0008c205) field_cale_ev2_pane_t1

0xcd97,	// (0x0008c21c) field_cale_ev2_pane_t2_ParamLimits

0xcd97,	// (0x0008c21c) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0008ebf3) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0008ebf3) field_cale_ev2_pane_t

0x496d,	// (0x00083df2) main_postcard_pane_g5_ParamLimits

0x496d,	// (0x00083df2) main_postcard_pane_g5

0x4983,	// (0x00083e08) main_postcard_pane_g6_ParamLimits

0x4983,	// (0x00083e08) main_postcard_pane_g6

0x21cd,	// (0x00081652) camera2_autofocus_pane_cp_ParamLimits

0x21cd,	// (0x00081652) camera2_autofocus_pane_cp

0xb28f,	// (0x0008a714) main_mup3_pane

0x6235,	// (0x000856ba) main_mup3_pane_g1_ParamLimits

0x6235,	// (0x000856ba) main_mup3_pane_g1

0x6257,	// (0x000856dc) main_mup3_pane_g2_ParamLimits

0x6257,	// (0x000856dc) main_mup3_pane_g2

0x62d5,	// (0x0008575a) main_mup3_pane_g3_ParamLimits

0x62d5,	// (0x0008575a) main_mup3_pane_g3

0x631b,	// (0x000857a0) main_mup3_pane_g4_ParamLimits

0x631b,	// (0x000857a0) main_mup3_pane_g4

0x6361,	// (0x000857e6) main_mup3_pane_g5_ParamLimits

0x6361,	// (0x000857e6) main_mup3_pane_g5

0x63a7,	// (0x0008582c) main_mup3_pane_g6_ParamLimits

0x63a7,	// (0x0008582c) main_mup3_pane_g6

0xcdcc,	// (0x0008c251) main_mup3_pane_g7_ParamLimits

0xcdcc,	// (0x0008c251) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0008ec03) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0008ec03) main_mup3_pane_g

0x6425,	// (0x000858aa) main_mup3_pane_t1_ParamLimits

0x6425,	// (0x000858aa) main_mup3_pane_t1

0x6499,	// (0x0008591e) main_mup3_pane_t2_ParamLimits

0x6499,	// (0x0008591e) main_mup3_pane_t2

0x656d,	// (0x000859f2) main_mup3_pane_t4_ParamLimits

0x656d,	// (0x000859f2) main_mup3_pane_t4

0x65c3,	// (0x00085a48) main_mup3_pane_t5_ParamLimits

0x65c3,	// (0x00085a48) main_mup3_pane_t5

0x667f,	// (0x00085b04) main_mup3_pane_t6_ParamLimits

0x667f,	// (0x00085b04) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0008ec14) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0008ec14) main_mup3_pane_t

0x6737,	// (0x00085bbc) mup3_progress_pane_ParamLimits

0x6737,	// (0x00085bbc) mup3_progress_pane

0x67cd,	// (0x00085c52) popup_mup3_control_window_ParamLimits

0x67cd,	// (0x00085c52) popup_mup3_control_window

0xcdda,	// (0x0008c25f) popup_mup3_text_window

0x67ff,	// (0x00085c84) mup3_progress_pane_t1

0x681e,	// (0x00085ca3) mup3_progress_pane_t2

0xcde2,	// (0x0008c267) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0008ec21) mup3_progress_pane_t

0xcdff,	// (0x0008c284) mup_progress_pane_cp03

0xdfb8,	// (0x0008d43d) bg_tb_trans_pane_cp04

0x683d,	// (0x00085cc2) mup3_volume_pane

0x6845,	// (0x00085cca) popup_mup3_control_window_g1

0x684e,	// (0x00085cd3) mup3_volume_pane_g1

0x6857,	// (0x00085cdc) mup3_volume_pane_g2

0x6860,	// (0x00085ce5) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0008ec28) mup3_volume_pane_g

0xdfb8,	// (0x0008d43d) bg_tb_trans_pane_cp03

0xce0f,	// (0x0008c294) popup_mup3_text_window_g1

0xce17,	// (0x0008c29c) popup_mup3_text_window_t1

0x1981,	// (0x00080e06) list_calc_item_pane_g1_ParamLimits

0xc7b2,	// (0x0008bc37) mup_volume_pane_cp_g1

0x619d,	// (0x00085622) main_touch_calib_pane_t3

0x61b1,	// (0x00085636) main_touch_calib_pane_t4

0x61c5,	// (0x0008564a) main_touch_calib_pane_t5

0xb221,	// (0x0008a6a6) aid_cell_size_toolbar2

0xb229,	// (0x0008a6ae) aid_popup3_width_pane

0xb235,	// (0x0008a6ba) aid_zoom_text_msg_primary

0x21ac,	// (0x00081631) vorec_t7

0x18ec,	// (0x00080d71) bg_calc_paper_pane_g1_ParamLimits

0x18f8,	// (0x00080d7d) bg_calc_paper_pane_g2_ParamLimits

0x1904,	// (0x00080d89) bg_calc_paper_pane_g3_ParamLimits

0x1910,	// (0x00080d95) bg_calc_paper_pane_g4_ParamLimits

0x191c,	// (0x00080da1) bg_calc_paper_pane_g5_ParamLimits

0x1928,	// (0x00080dad) bg_calc_paper_pane_g6_ParamLimits

0x1937,	// (0x00080dbc) bg_calc_paper_pane_g7_ParamLimits

0x1946,	// (0x00080dcb) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0008e5dd) bg_calc_paper_pane_g_ParamLimits

0x1959,	// (0x00080dde) calc_bg_paper_pane_g9_ParamLimits

0x2324,	// (0x000817a9) image_qvga_pane_ParamLimits

0x2324,	// (0x000817a9) image_qvga_pane

0x151b,	// (0x000809a0) bg_popup_sub_pane_cp04_ParamLimits

0x4afc,	// (0x00083f81) popup_mup_playback_window_g1_ParamLimits

0x4b08,	// (0x00083f8d) popup_mup_playback_window_t1_ParamLimits

0x4b1d,	// (0x00083fa2) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0008e967) popup_mup_playback_window_t_ParamLimits

0x5cdd,	// (0x00085162) main_mup2_pane_g3_ParamLimits

0x5cdd,	// (0x00085162) main_mup2_pane_g3

0x26ca,	// (0x00081b4f) popup_toolbar_window_cp04

0xb792,	// (0x0008ac17) popup_call2_audio_second_window_g3_ParamLimits

0xb792,	// (0x0008ac17) popup_call2_audio_second_window_g3

0xbb9c,	// (0x0008b021) popup_call2_audio_first_window_g4_ParamLimits

0xbb9c,	// (0x0008b021) popup_call2_audio_first_window_g4

0xc21b,	// (0x0008b6a0) popup_call2_audio_in_window_g4_ParamLimits

0xc21b,	// (0x0008b6a0) popup_call2_audio_in_window_g4

0x4b32,	// (0x00083fb7) aid_area_sk_bg_cut_ParamLimits

0x4b32,	// (0x00083fb7) aid_area_sk_bg_cut

0x4b50,	// (0x00083fd5) aid_area_sk_bg_cut_2_ParamLimits

0x4b50,	// (0x00083fd5) aid_area_sk_bg_cut_2

0x5fe0,	// (0x00085465) aid_placing_details_win

0x5fe8,	// (0x0008546d) aid_placing_details_win_2

0xcc21,	// (0x0008c0a6) camera2_autofocus_pane_g1_ParamLimits

0x12c3,	// (0x00080748) popup_fixed_preview_cale_window_ParamLimits

0x12c3,	// (0x00080748) popup_fixed_preview_cale_window

0x4284,	// (0x00083709) navi_slider_pane_g3

0x428d,	// (0x00083712) navi_slider_pane_g4

0x4296,	// (0x0008371b) navi_slider_pane_g5

0x4284,	// (0x00083709) navi_slider_pane_g6

0xb3f7,	// (0x0008a87c) navi_slider_pane_g7

0x47b1,	// (0x00083c36) mup_scale_pane_g3

0x47ba,	// (0x00083c3f) mup_scale_pane_g4

0x47c3,	// (0x00083c48) mup_scale_pane_g5

0x47cc,	// (0x00083c51) mup_scale_pane_g6

0x47d5,	// (0x00083c5a) mup_scale_pane_g7

0x4284,	// (0x00083709) cams2_slider_pane_g3

0xc867,	// (0x0008bcec) cams2_slider_pane_g4

0xc86f,	// (0x0008bcf4) cams2_slider_pane_g5

0x4284,	// (0x00083709) cams2_slider_pane_g6

0xc877,	// (0x0008bcfc) cams2_slider_pane_g7

0xcaa3,	// (0x0008bf28) camera2_autofocus_pane_cp_g1

0xc57c,	// (0x0008ba01) bg_popup_preview_window_pane_cp02_ParamLimits

0xc57c,	// (0x0008ba01) bg_popup_preview_window_pane_cp02

0xce25,	// (0x0008c2aa) list_fp_cale_pane_ParamLimits

0xce25,	// (0x0008c2aa) list_fp_cale_pane

0xce31,	// (0x0008c2b6) popup_fixed_preview_cale_window_t1_ParamLimits

0xce31,	// (0x0008c2b6) popup_fixed_preview_cale_window_t1

0x6869,	// (0x00085cee) popup_fixed_preview_cale_window_t2_ParamLimits

0x6869,	// (0x00085cee) popup_fixed_preview_cale_window_t2

0x687e,	// (0x00085d03) popup_fixed_preview_cale_window_t3_ParamLimits

0x687e,	// (0x00085d03) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0008ec2f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0008ec2f) popup_fixed_preview_cale_window_t

0x6893,	// (0x00085d18) list_single_fp_cale_pane_ParamLimits

0x6893,	// (0x00085d18) list_single_fp_cale_pane

0xce4f,	// (0x0008c2d4) list_single_fp_cale_pane_g1_ParamLimits

0xce4f,	// (0x0008c2d4) list_single_fp_cale_pane_g1

0xce5b,	// (0x0008c2e0) list_single_fp_cale_pane_g2_ParamLimits

0xce5b,	// (0x0008c2e0) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0008ec36) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0008ec36) list_single_fp_cale_pane_g

0xce74,	// (0x0008c2f9) list_single_fp_cale_pane_t1_ParamLimits

0xce74,	// (0x0008c2f9) list_single_fp_cale_pane_t1

0xce86,	// (0x0008c30b) list_single_fp_cale_pane_t2_ParamLimits

0xce86,	// (0x0008c30b) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0008ec3d) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0008ec3d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdfb8,	// (0x0008d43d) main_dialer_pane

0x68a8,	// (0x00085d2d) aid_cell_size_keypad

0x68b2,	// (0x00085d37) dialer_ne_pane

0x68ba,	// (0x00085d3f) grid_dialer_command_1_pane

0x68c2,	// (0x00085d47) grid_dialer_command_2_pane

0x68ca,	// (0x00085d4f) grid_dialer_keypad_pane

0x68dc,	// (0x00085d61) bg_popup_call_pane_cp06_ParamLimits

0x68dc,	// (0x00085d61) bg_popup_call_pane_cp06

0x68e8,	// (0x00085d6d) dialer_ne_clear_pane_ParamLimits

0x68e8,	// (0x00085d6d) dialer_ne_clear_pane

0xceb9,	// (0x0008c33e) dialer_ne_pane_g1

0xcec1,	// (0x0008c346) dialer_ne_pane_t1_ParamLimits

0xcec1,	// (0x0008c346) dialer_ne_pane_t1

0x68f4,	// (0x00085d79) dialer_ne_pane_t2_ParamLimits

0x68f4,	// (0x00085d79) dialer_ne_pane_t2

0x691e,	// (0x00085da3) dialer_ne_pane_t3_ParamLimits

0x691e,	// (0x00085da3) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0008ec42) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0008ec42) dialer_ne_pane_t

0x694e,	// (0x00085dd3) dialer_ne_pane_t3_copy1_ParamLimits

0x694e,	// (0x00085dd3) dialer_ne_pane_t3_copy1

0x697d,	// (0x00085e02) cell_dialer_keypad_pane_ParamLimits

0x697d,	// (0x00085e02) cell_dialer_keypad_pane

0x6994,	// (0x00085e19) cell_dialer_command_1_pane_ParamLimits

0x6994,	// (0x00085e19) cell_dialer_command_1_pane

0x69aa,	// (0x00085e2f) cell_dialer_command_2_pane_ParamLimits

0x69aa,	// (0x00085e2f) cell_dialer_command_2_pane

0xced3,	// (0x0008c358) bg_button_pane_cp02_ParamLimits

0xced3,	// (0x0008c358) bg_button_pane_cp02

0x69b9,	// (0x00085e3e) cell_dialer_keypad_pane_g1_ParamLimits

0x69b9,	// (0x00085e3e) cell_dialer_keypad_pane_g1

0xced3,	// (0x0008c358) bg_button_pane_cp03_ParamLimits

0xced3,	// (0x0008c358) bg_button_pane_cp03

0x69cd,	// (0x00085e52) cell_dialer_command_1_pane_g1_ParamLimits

0x69cd,	// (0x00085e52) cell_dialer_command_1_pane_g1

0xcedf,	// (0x0008c364) bg_button_pane_cp04

0x69e1,	// (0x00085e66) cell_dialer_command_2_pane_g1

0x2164,	// (0x000815e9) bg_button_pane_cp06

0xcee7,	// (0x0008c36c) dialer_ne_clear_pane_g1

0x4115,	// (0x0008359a) navi_pane_g2

0x4143,	// (0x000835c8) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008e86a) navi_pane_g

0x41d2,	// (0x00083657) navi_pane_mv_g2

0x41f9,	// (0x0008367e) navi_pane_mv_g5

0x4201,	// (0x00083686) navi_pane_mv_t1

0x1887,	// (0x00080d0c) main_clock2_pane

0x6a2e,	// (0x00085eb3) main_clock2_list_pane_ParamLimits

0x6a2e,	// (0x00085eb3) main_clock2_list_pane

0x6a66,	// (0x00085eeb) main_clock2_pane_t1_ParamLimits

0x6a66,	// (0x00085eeb) main_clock2_pane_t1

0x6aa2,	// (0x00085f27) main_clock2_pane_t2_ParamLimits

0x6aa2,	// (0x00085f27) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0008ec4e) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0008ec4e) main_clock2_pane_t

0x6b40,	// (0x00085fc5) popup_clock_analogue_window_cp03_ParamLimits

0x6b40,	// (0x00085fc5) popup_clock_analogue_window_cp03

0x6b65,	// (0x00085fea) popup_clock_digital_window_cp02_ParamLimits

0x6b65,	// (0x00085fea) popup_clock_digital_window_cp02

0x6bd6,	// (0x0008605b) main_clock2_list_single_pane_ParamLimits

0x6bd6,	// (0x0008605b) main_clock2_list_single_pane

0x2164,	// (0x000815e9) list_highlight_pane_cp05

0xcf25,	// (0x0008c3aa) main_clock2_list_single_pane_t1

0x26ca,	// (0x00081b4f) popup_toolbar_window_cp04_ParamLimits

0x600a,	// (0x0008548f) camera2_autofocus_pane_g2_ParamLimits

0x600a,	// (0x0008548f) camera2_autofocus_pane_g2

0x6016,	// (0x0008549b) camera2_autofocus_pane_g3_ParamLimits

0x6016,	// (0x0008549b) camera2_autofocus_pane_g3

0x6022,	// (0x000854a7) camera2_autofocus_pane_g4_ParamLimits

0x6022,	// (0x000854a7) camera2_autofocus_pane_g4

0x602e,	// (0x000854b3) camera2_autofocus_pane_g5_ParamLimits

0x602e,	// (0x000854b3) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0008eb92) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0008eb92) camera2_autofocus_pane_g

0xcdac,	// (0x0008c231) camera2_autofocus_pane_cp_g2

0xcdb4,	// (0x0008c239) camera2_autofocus_pane_cp_g3

0xcdbc,	// (0x0008c241) camera2_autofocus_pane_cp_g4

0xcdc4,	// (0x0008c249) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0008ebf8) camera2_autofocus_pane_cp_g

0x68d4,	// (0x00085d59) popup_dialer_spcha_window

0xdfb8,	// (0x0008d43d) bg_popup_sub_pane_cp07

0xcf33,	// (0x0008c3b8) list_spcha_pane

0xcf3b,	// (0x0008c3c0) list_single_spcha_pane_ParamLimits

0xcf3b,	// (0x0008c3c0) list_single_spcha_pane

0xdfb8,	// (0x0008d43d) list_highlight_pane_cp06

0xcf4c,	// (0x0008c3d1) list_single_spcha_pane_t1

0xbfc5,	// (0x0008b44a) popup_call2_audio_out_window_g4_ParamLimits

0xbfc5,	// (0x0008b44a) popup_call2_audio_out_window_g4

0xdfb8,	// (0x0008d43d) main_imed2_pane

0xc5b0,	// (0x0008ba35) popup_imed_adjust2_window

0x53eb,	// (0x00084870) popup_imed_trans_window_ParamLimits

0x53eb,	// (0x00084870) popup_imed_trans_window

0xc8e1,	// (0x0008bd66) popup_blid_sat_info2_window_t1

0xc8ef,	// (0x0008bd74) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0008eb27) popup_blid_sat_info2_window_t

0x6c7f,	// (0x00086104) aid_size_cell_colour_35

0x6c9f,	// (0x00086124) aid_size_cell_colour_112

0x6cbf,	// (0x00086144) aid_size_cell_effect

0xc588,	// (0x0008ba0d) bg_tb_trans_pane_cp02

0x3983,	// (0x00082e08) heading_imed_pane

0x6cdf,	// (0x00086164) listscroll_imed_pane

0xcf5a,	// (0x0008c3df) heading_imed_pane_g1

0xcf62,	// (0x0008c3e7) heading_imed_pane_t1

0xcf70,	// (0x0008c3f5) grid_imed_colour_35_pane_ParamLimits

0xcf70,	// (0x0008c3f5) grid_imed_colour_35_pane

0x6ceb,	// (0x00086170) grid_imed_effect_pane

0xcf87,	// (0x0008c40c) list_imed_aspect_pane

0x6d01,	// (0x00086186) scroll_pane_cp027_ParamLimits

0x6d01,	// (0x00086186) scroll_pane_cp027

0x6d12,	// (0x00086197) cell_imed_effect_pane_ParamLimits

0x6d12,	// (0x00086197) cell_imed_effect_pane

0xcf8f,	// (0x0008c414) cell_imed_colour_pane_ParamLimits

0xcf8f,	// (0x0008c414) cell_imed_colour_pane

0xcfd1,	// (0x0008c456) cell_imed_colour_pane_g1_ParamLimits

0xcfd1,	// (0x0008c456) cell_imed_colour_pane_g1

0xcfe2,	// (0x0008c467) hgihlgiht_grid_pane_cp016_ParamLimits

0xcfe2,	// (0x0008c467) hgihlgiht_grid_pane_cp016

0x6d39,	// (0x000861be) cell_imed_effect_pane_g1

0x6d41,	// (0x000861c6) grid_highlight_pane_cp017

0xcff3,	// (0x0008c478) list_imed_single_pane_ParamLimits

0xcff3,	// (0x0008c478) list_imed_single_pane

0xdfb8,	// (0x0008d43d) list_highlight_pane_cp07

0xd008,	// (0x0008c48d) list_imed_aspect_pane_comp1_t1

0xc588,	// (0x0008ba0d) bg_tb_trans_pane_cp05

0xd02a,	// (0x0008c4af) popup_imed_adjust2_window_g1

0xd051,	// (0x0008c4d6) popup_imed_adjust2_window_t1

0xd069,	// (0x0008c4ee) slider_imed_adjust_pane

0xd07d,	// (0x0008c502) slider_imed_adjust_pane_g1

0xd08d,	// (0x0008c512) slider_imed_adjust_pane_g2

0xd09d,	// (0x0008c522) slider_imed_adjust_pane_g3

0xd0ae,	// (0x0008c533) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0008ec6b) slider_imed_adjust_pane_g

0x6d4a,	// (0x000861cf) aid_size_cell_clipart2

0x6d56,	// (0x000861db) grid_imed_clipart_pane

0xd0bf,	// (0x0008c544) scroll_pane_cp031

0x6d60,	// (0x000861e5) cell_imed_clipart_pane_ParamLimits

0x6d60,	// (0x000861e5) cell_imed_clipart_pane

0x6d82,	// (0x00086207) cell_imed_clipart_pane_g1

0xdfb8,	// (0x0008d43d) grid_highlight_pane_cp014

0x6a43,	// (0x00085ec8) main_clock2_pane_g1_ParamLimits

0x6a43,	// (0x00085ec8) main_clock2_pane_g1

0x6b81,	// (0x00086006) aid_call2_pane_cp10

0x6b93,	// (0x00086018) aid_call_pane_cp10

0x4011,	// (0x00083496) popup_clock_analogue_window_cp10_g1

0x4011,	// (0x00083496) popup_clock_analogue_window_cp10_g2

0x6ba5,	// (0x0008602a) popup_clock_analogue_window_cp10_g3

0x6ba5,	// (0x0008602a) popup_clock_analogue_window_cp10_g4

0x4011,	// (0x00083496) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0008ec59) popup_clock_analogue_window_cp10_g

0x6bb7,	// (0x0008603c) popup_clock_analogue_window_cp10_t1

0x6be8,	// (0x0008606d) clock_digital_number_pane_cp10_ParamLimits

0x6be8,	// (0x0008606d) clock_digital_number_pane_cp10

0x6c00,	// (0x00086085) clock_digital_number_pane_cp11_ParamLimits

0x6c00,	// (0x00086085) clock_digital_number_pane_cp11

0x6c18,	// (0x0008609d) clock_digital_number_pane_cp12_ParamLimits

0x6c18,	// (0x0008609d) clock_digital_number_pane_cp12

0x6c30,	// (0x000860b5) clock_digital_number_pane_cp13_ParamLimits

0x6c30,	// (0x000860b5) clock_digital_number_pane_cp13

0x6c48,	// (0x000860cd) clock_digital_separator_pane_cp10_ParamLimits

0x6c48,	// (0x000860cd) clock_digital_separator_pane_cp10

0x6c60,	// (0x000860e5) popup_clock_digital_window_cp02_t1_ParamLimits

0x6c60,	// (0x000860e5) popup_clock_digital_window_cp02_t1

0x1513,	// (0x00080998) clock_digital_number_pane_cp10_g1

0x1513,	// (0x00080998) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0008ec74) clock_digital_number_pane_cp10_g

0x1513,	// (0x00080998) clock_digital_separator_pane_cp10_g1

0x1513,	// (0x00080998) clock_digital_separator_pane_g2_cp10

0x4243,	// (0x000836c8) navi_pane_vded_g4

0x424c,	// (0x000836d1) navi_pane_vded_g5

0x4255,	// (0x000836da) navi_pane_vded_t1

0xdfb8,	// (0x0008d43d) main_vded_pane

0x6d8b,	// (0x00086210) main_vded_pane_g1

0x6d95,	// (0x0008621a) main_vded_pane_g2

0x6d9f,	// (0x00086224) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0008ec79) main_vded_pane_g

0x6da9,	// (0x0008622e) main_vded_pane_t1

0x6db7,	// (0x0008623c) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0008ec80) main_vded_pane_t

0x6dc5,	// (0x0008624a) vded_slider_pane

0x6dcd,	// (0x00086252) vded_video_pane

0xd0c7,	// (0x0008c54c) vded_video_pane_g1

0x6dd5,	// (0x0008625a) vded_video_pane_g2

0xcaa3,	// (0x0008bf28) vded_video_pane_g3

0x0002,

0xf800,	// (0x0008ec85) vded_video_pane_g

0xd0d1,	// (0x0008c556) vded_slider_pane_g1

0xc7b2,	// (0x0008bc37) vded_slider_pane_g2

0xd0da,	// (0x0008c55f) vded_slider_pane_g3

0xd0e3,	// (0x0008c568) vded_slider_pane_g4

0xd0ec,	// (0x0008c571) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0008ec8c) vded_slider_pane_g

0x67b5,	// (0x00085c3a) mup3_rocker_pane_ParamLimits

0x67b5,	// (0x00085c3a) mup3_rocker_pane

0x6dde,	// (0x00086263) mup3_control_keys_pane_g1

0x6de6,	// (0x0008626b) mup3_control_keys_pane_g2

0x6dee,	// (0x00086273) mup3_control_keys_pane_g3

0x6df6,	// (0x0008627b) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0008ec97) mup3_control_keys_pane_g

0x12fa,	// (0x0008077f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x12fa,	// (0x0008077f) popup_toolbar2_fixed_window_cp01

0x67e9,	// (0x00085c6e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x67e9,	// (0x00085c6e) popup_toolbar2_fixed_window_cp02

0xb904,	// (0x0008ad89) popup_call2_audio_second_window_t4_ParamLimits

0xb904,	// (0x0008ad89) popup_call2_audio_second_window_t4

0xbe32,	// (0x0008b2b7) popup_call2_audio_first_window_t6_ParamLimits

0xbe32,	// (0x0008b2b7) popup_call2_audio_first_window_t6

0xc0c8,	// (0x0008b54d) popup_call2_audio_out_window_t6_ParamLimits

0xc0c8,	// (0x0008b54d) popup_call2_audio_out_window_t6

0xdfb8,	// (0x0008d43d) main_vitu_pane

0x6e06,	// (0x0008628b) aid_size_cell_itu_ParamLimits

0x6e06,	// (0x0008628b) aid_size_cell_itu

0xb28f,	// (0x0008a714) bg_popup_window_pane_cp08_ParamLimits

0xb28f,	// (0x0008a714) bg_popup_window_pane_cp08

0x6e1c,	// (0x000862a1) field_vitu_entry_pane_ParamLimits

0x6e1c,	// (0x000862a1) field_vitu_entry_pane

0x6e33,	// (0x000862b8) grid_vitu_function_pane_ParamLimits

0x6e33,	// (0x000862b8) grid_vitu_function_pane

0x6e4e,	// (0x000862d3) grid_vitu_itu_pane_ParamLimits

0x6e4e,	// (0x000862d3) grid_vitu_itu_pane

0x6e6c,	// (0x000862f1) cell_vitu_itu_pane_ParamLimits

0x6e6c,	// (0x000862f1) cell_vitu_itu_pane

0x6e8e,	// (0x00086313) cell_vitu_function_pane_ParamLimits

0x6e8e,	// (0x00086313) cell_vitu_function_pane

0xb28f,	// (0x0008a714) bg_popup_sub_pane_cp08_ParamLimits

0xb28f,	// (0x0008a714) bg_popup_sub_pane_cp08

0x6ea7,	// (0x0008632c) field_vitu_entry_pane_t1_ParamLimits

0x6ea7,	// (0x0008632c) field_vitu_entry_pane_t1

0xd10d,	// (0x0008c592) field_vitu_entry_pane_t2_ParamLimits

0xd10d,	// (0x0008c592) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0008eca5) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0008eca5) field_vitu_entry_pane_t

0xd12a,	// (0x0008c5af) bg_button_pane_cp05_ParamLimits

0xd12a,	// (0x0008c5af) bg_button_pane_cp05

0x6ec5,	// (0x0008634a) cell_vitu_itu_pane_g1

0x6edd,	// (0x00086362) cell_vitu_itu_pane_t1_ParamLimits

0x6edd,	// (0x00086362) cell_vitu_itu_pane_t1

0x6eef,	// (0x00086374) cell_vitu_itu_pane_t2_ParamLimits

0x6eef,	// (0x00086374) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0008ecaa) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0008ecaa) cell_vitu_itu_pane_t

0xd138,	// (0x0008c5bd) bg_button_pane_cp07

0x6f24,	// (0x000863a9) cell_vitu_function_pane_g1

0xb29d,	// (0x0008a722) main_calc_pane_g1

0x1121,	// (0x000805a6) aid_visual_content_pane

0xdfb8,	// (0x0008d43d) main_vradio_pane

0x6f2d,	// (0x000863b2) main_vradio_pane_g1_ParamLimits

0x6f2d,	// (0x000863b2) main_vradio_pane_g1

0xd142,	// (0x0008c5c7) main_vradio_pane_g2_ParamLimits

0xd142,	// (0x0008c5c7) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0008ecb1) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0008ecb1) main_vradio_pane_g

0x6f46,	// (0x000863cb) main_vradio_pane_t1_ParamLimits

0x6f46,	// (0x000863cb) main_vradio_pane_t1

0x6f5b,	// (0x000863e0) main_vradio_pane_t2_ParamLimits

0x6f5b,	// (0x000863e0) main_vradio_pane_t2

0xd14f,	// (0x0008c5d4) main_vradio_pane_t3_ParamLimits

0xd14f,	// (0x0008c5d4) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0008ecb6) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0008ecb6) main_vradio_pane_t

0x6f70,	// (0x000863f5) vradio_rocker_control_pane_ParamLimits

0x6f70,	// (0x000863f5) vradio_rocker_control_pane

0x6f82,	// (0x00086407) vradio_station_info_pane_ParamLimits

0x6f82,	// (0x00086407) vradio_station_info_pane

0xd163,	// (0x0008c5e8) vradio_frequency_info_pane_ParamLimits

0xd163,	// (0x0008c5e8) vradio_frequency_info_pane

0xcaa3,	// (0x0008bf28) vradio_station_info_pane_g1

0xd172,	// (0x0008c5f7) vradio_station_info_pane_t1_ParamLimits

0xd172,	// (0x0008c5f7) vradio_station_info_pane_t1

0xd194,	// (0x0008c619) vradio_station_info_pane_t2_ParamLimits

0xd194,	// (0x0008c619) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0008ecbd) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0008ecbd) vradio_station_info_pane_t

0xd1a6,	// (0x0008c62b) vradio_tuning_pane

0xd1ae,	// (0x0008c633) vradio_rocker_control_pane_g1

0xd1b6,	// (0x0008c63b) vradio_rocker_control_pane_g2

0xd1be,	// (0x0008c643) vradio_rocker_control_pane_g3

0xd1c6,	// (0x0008c64b) vradio_rocker_control_pane_g4

0xd1ce,	// (0x0008c653) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0008ecc2) vradio_rocker_control_pane_g

0x6f94,	// (0x00086419) vradio_frequency_info_pane_g1

0xd1d6,	// (0x0008c65b) vradio_frequency_info_pane_t1_ParamLimits

0xd1d6,	// (0x0008c65b) vradio_frequency_info_pane_t1

0x6f9e,	// (0x00086423) vradio_tuning_pane_g1

0x6fa9,	// (0x0008642e) vradio_tuning_pane_t1

0xb24d,	// (0x0008a6d2) area_side_right_pane_ParamLimits

0xb24d,	// (0x0008a6d2) area_side_right_pane

0xc543,	// (0x0008b9c8) status_small_pane_g1

0xc54b,	// (0x0008b9d0) status_small_pane_g2

0xc554,	// (0x0008b9d9) status_small_pane_g3

0xc55d,	// (0x0008b9e2) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0008ea7d) status_small_pane_g

0xc566,	// (0x0008b9eb) status_small_pane_t1

0xdfb8,	// (0x0008d43d) main_video3_pane

0xd1ea,	// (0x0008c66f) cams_zoom_vslider_pane

0xd1f2,	// (0x0008c677) image3_wide_pane_ParamLimits

0xd1f2,	// (0x0008c677) image3_wide_pane

0xd20c,	// (0x0008c691) image3_wide_small_pane

0xd218,	// (0x0008c69d) main_video3_pane_g1_ParamLimits

0xd218,	// (0x0008c69d) main_video3_pane_g1

0xd234,	// (0x0008c6b9) main_video3_pane_g2_ParamLimits

0xd234,	// (0x0008c6b9) main_video3_pane_g2

0x0001,

0xf848,	// (0x0008eccd) main_video3_pane_g_ParamLimits

0xf848,	// (0x0008eccd) main_video3_pane_g

0xd250,	// (0x0008c6d5) main_video3_pane_t1_ParamLimits

0xd250,	// (0x0008c6d5) main_video3_pane_t1

0xd27b,	// (0x0008c700) main_video3_pane_t2_ParamLimits

0xd27b,	// (0x0008c700) main_video3_pane_t2

0xd2a6,	// (0x0008c72b) main_video3_pane_t3_ParamLimits

0xd2a6,	// (0x0008c72b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0008ecd2) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0008ecd2) main_video3_pane_t

0xd2d3,	// (0x0008c758) cams_zoom_vslider_pane_g1

0xd2dc,	// (0x0008c761) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0008ecd9) cams_zoom_vslider_pane_g

0xd2e4,	// (0x0008c769) small_slider_vertical_pane

0xcaa3,	// (0x0008bf28) small_slider_vertical_pane_g1

0xcaa3,	// (0x0008bf28) small_slider_vertical_pane_g2

0xd2ec,	// (0x0008c771) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0008ecde) small_slider_vertical_pane_g

0xdfb8,	// (0x0008d43d) main_hwr_training_pane

0xd2f5,	// (0x0008c77a) hwr_training_instruct_pane_ParamLimits

0xd2f5,	// (0x0008c77a) hwr_training_instruct_pane

0x6fb8,	// (0x0008643d) hwr_training_navi_pane_ParamLimits

0x6fb8,	// (0x0008643d) hwr_training_navi_pane

0x6fd7,	// (0x0008645c) hwr_training_write_pane_ParamLimits

0x6fd7,	// (0x0008645c) hwr_training_write_pane

0xdfb8,	// (0x0008d43d) bg_frame_shadow_pane

0xd32c,	// (0x0008c7b1) hwr_training_write_pane_g1

0xd334,	// (0x0008c7b9) hwr_training_write_pane_g2

0xd33c,	// (0x0008c7c1) hwr_training_write_pane_g3

0xd344,	// (0x0008c7c9) hwr_training_write_pane_g4

0xd34c,	// (0x0008c7d1) hwr_training_write_pane_g5

0xd354,	// (0x0008c7d9) hwr_training_write_pane_g6

0xd35c,	// (0x0008c7e1) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0008ece5) hwr_training_write_pane_g

0xd364,	// (0x0008c7e9) hwr_training_navi_pane_g1_ParamLimits

0xd364,	// (0x0008c7e9) hwr_training_navi_pane_g1

0xd376,	// (0x0008c7fb) hwr_training_navi_pane_g2_ParamLimits

0xd376,	// (0x0008c7fb) hwr_training_navi_pane_g2

0xd388,	// (0x0008c80d) hwr_training_navi_pane_g3_ParamLimits

0xd388,	// (0x0008c80d) hwr_training_navi_pane_g3

0xd398,	// (0x0008c81d) hwr_training_navi_pane_g4_ParamLimits

0xd398,	// (0x0008c81d) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0008ecf4) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0008ecf4) hwr_training_navi_pane_g

0xd3a5,	// (0x0008c82a) hwr_training_navi_pane_t1

0x701f,	// (0x000864a4) list_single_hwr_training_instruct_pane_ParamLimits

0x701f,	// (0x000864a4) list_single_hwr_training_instruct_pane

0xd3b3,	// (0x0008c838) list_single_hwr_training_instruct_pane_t1

0xc9e3,	// (0x0008be68) bg_frame_shadow_pane_g1

0xd3c2,	// (0x0008c847) bg_frame_shadow_pane_g2

0xd3ca,	// (0x0008c84f) bg_frame_shadow_pane_g3

0xd3d2,	// (0x0008c857) bg_frame_shadow_pane_g4

0xd3da,	// (0x0008c85f) bg_frame_shadow_pane_g5

0xd3e2,	// (0x0008c867) bg_frame_shadow_pane_g6

0xd3ea,	// (0x0008c86f) bg_frame_shadow_pane_g7

0x1acf,	// (0x00080f54) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0008ecff) bg_frame_shadow_pane_g

0xdfb8,	// (0x0008d43d) main_video_tele_dialer_pane

0x7034,	// (0x000864b9) aid_size_cell_video_keypad_ParamLimits

0x7034,	// (0x000864b9) aid_size_cell_video_keypad

0x704e,	// (0x000864d3) grid_video_dialer_keypad_pane_ParamLimits

0x704e,	// (0x000864d3) grid_video_dialer_keypad_pane

0x709a,	// (0x0008651f) video_down_pane_cp_ParamLimits

0x709a,	// (0x0008651f) video_down_pane_cp

0x70cc,	// (0x00086551) cell_video_dialer_keypad_pane_ParamLimits

0x70cc,	// (0x00086551) cell_video_dialer_keypad_pane

0xd3f2,	// (0x0008c877) bg_button_pane_cp08_ParamLimits

0xd3f2,	// (0x0008c877) bg_button_pane_cp08

0x70ee,	// (0x00086573) cell_video_dialer_keypad_pane_g1_ParamLimits

0x70ee,	// (0x00086573) cell_video_dialer_keypad_pane_g1

0x679f,	// (0x00085c24) mup3_rocker2_pane_ParamLimits

0x679f,	// (0x00085c24) mup3_rocker2_pane

0xcaa3,	// (0x0008bf28) mup3_rocker2_pane_g1

0x52cc,	// (0x00084751) main_dialer2_pane

0xdfb8,	// (0x0008d43d) main_mp4_pane

0xd406,	// (0x0008c88b) main_mp4_pane_g1_ParamLimits

0xd406,	// (0x0008c88b) main_mp4_pane_g1

0xd406,	// (0x0008c88b) main_mp4_pane_g2_ParamLimits

0xd406,	// (0x0008c88b) main_mp4_pane_g2

0x7125,	// (0x000865aa) main_mp4_pane_g3_ParamLimits

0x7125,	// (0x000865aa) main_mp4_pane_g3

0xd414,	// (0x0008c899) main_mp4_pane_g4_ParamLimits

0xd414,	// (0x0008c899) main_mp4_pane_g4

0xd43c,	// (0x0008c8c1) main_mp4_pane_g5_ParamLimits

0xd43c,	// (0x0008c8c1) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0008ed1f) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0008ed1f) main_mp4_pane_g

0xd48c,	// (0x0008c911) main_mp4_pane_t1_ParamLimits

0xd48c,	// (0x0008c911) main_mp4_pane_t1

0xd4e8,	// (0x0008c96d) main_mp4_pane_t2_ParamLimits

0xd4e8,	// (0x0008c96d) main_mp4_pane_t2

0xd53a,	// (0x0008c9bf) main_mp4_pane_t3_ParamLimits

0xd53a,	// (0x0008c9bf) main_mp4_pane_t3

0xd55a,	// (0x0008c9df) main_mp4_pane_t4_ParamLimits

0xd55a,	// (0x0008c9df) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0008ed2c) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0008ed2c) main_mp4_pane_t

0xd59e,	// (0x0008ca23) mp4_progress_pane_ParamLimits

0xd59e,	// (0x0008ca23) mp4_progress_pane

0xd5e8,	// (0x0008ca6d) mp4_rocker_pane_ParamLimits

0xd5e8,	// (0x0008ca6d) mp4_rocker_pane

0xd610,	// (0x0008ca95) mp4_progress_pane_t1

0xd629,	// (0x0008caae) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0008ed35) mp4_progress_pane_t

0xd642,	// (0x0008cac7) mup_progress_pane_cp04

0xcaa3,	// (0x0008bf28) mp4_rocker_pane_g1

0x7161,	// (0x000865e6) aid_cell_size_keypad2_ParamLimits

0x7161,	// (0x000865e6) aid_cell_size_keypad2

0x7177,	// (0x000865fc) dialer2_ne_pane_ParamLimits

0x7177,	// (0x000865fc) dialer2_ne_pane

0x7191,	// (0x00086616) grid_dialer2_keypad_pane_ParamLimits

0x7191,	// (0x00086616) grid_dialer2_keypad_pane

0xc888,	// (0x0008bd0d) bg_popup_call_pane_cp07_ParamLimits

0xc888,	// (0x0008bd0d) bg_popup_call_pane_cp07

0x71ad,	// (0x00086632) dialer2_ne_pane_t1_ParamLimits

0x71ad,	// (0x00086632) dialer2_ne_pane_t1

0x71e8,	// (0x0008666d) cell_dialer2_keypad_pane_ParamLimits

0x71e8,	// (0x0008666d) cell_dialer2_keypad_pane

0xd660,	// (0x0008cae5) bg_button_pane_pane_cp04_ParamLimits

0xd660,	// (0x0008cae5) bg_button_pane_pane_cp04

0x720a,	// (0x0008668f) cell_dialer2_keypad_pane_g1_ParamLimits

0x720a,	// (0x0008668f) cell_dialer2_keypad_pane_g1

0x258c,	// (0x00081a11) aid_placing_vt_set_content_ParamLimits

0x258c,	// (0x00081a11) aid_placing_vt_set_content

0x25b4,	// (0x00081a39) aid_placing_vt_set_title_ParamLimits

0x25b4,	// (0x00081a39) aid_placing_vt_set_title

0xdfb8,	// (0x0008d43d) main_image3_pane

0x72d0,	// (0x00086755) area_side_right_pane_cp01_ParamLimits

0x72d0,	// (0x00086755) area_side_right_pane_cp01

0xd406,	// (0x0008c88b) main_image3_pane_g1_ParamLimits

0xd406,	// (0x0008c88b) main_image3_pane_g1

0x72e7,	// (0x0008676c) main_image3_pane_g2_ParamLimits

0x72e7,	// (0x0008676c) main_image3_pane_g2

0x730f,	// (0x00086794) main_image3_pane_g3_ParamLimits

0x730f,	// (0x00086794) main_image3_pane_g3

0x7339,	// (0x000867be) main_image3_pane_g4_ParamLimits

0x7339,	// (0x000867be) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0008ed44) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0008ed44) main_image3_pane_g

0x7363,	// (0x000867e8) main_image3_pane_t1_ParamLimits

0x7363,	// (0x000867e8) main_image3_pane_t1

0x73bb,	// (0x00086840) main_image3_pane_t2_ParamLimits

0x73bb,	// (0x00086840) main_image3_pane_t2

0x740d,	// (0x00086892) main_image3_pane_t3_ParamLimits

0x740d,	// (0x00086892) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0008ed4d) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0008ed4d) main_image3_pane_t

0xb28f,	// (0x0008a714) grid_sctrl_middle_pane_cp01_ParamLimits

0xb28f,	// (0x0008a714) grid_sctrl_middle_pane_cp01

0x7495,	// (0x0008691a) cell_sctrl_middle_pane_cp01_ParamLimits

0x7495,	// (0x0008691a) cell_sctrl_middle_pane_cp01

0x74b2,	// (0x00086937) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x74b2,	// (0x00086937) cell_sctrl_middle_pane_cp01_g1

0xdfb8,	// (0x0008d43d) main_call4_pane

0x74c8,	// (0x0008694d) aid_size_button_call4_ParamLimits

0x74c8,	// (0x0008694d) aid_size_button_call4

0x74f9,	// (0x0008697e) call4_windows_pane_ParamLimits

0x74f9,	// (0x0008697e) call4_windows_pane

0x7519,	// (0x0008699e) grid_call4_button_pane_ParamLimits

0x7519,	// (0x0008699e) grid_call4_button_pane

0xd69e,	// (0x0008cb23) call4_windows_conf_pane

0xd6b5,	// (0x0008cb3a) popup_call4_audio_first_window_ParamLimits

0xd6b5,	// (0x0008cb3a) popup_call4_audio_first_window

0xd701,	// (0x0008cb86) popup_call4_audio_second_window_ParamLimits

0xd701,	// (0x0008cb86) popup_call4_audio_second_window

0xd715,	// (0x0008cb9a) popup_call4_audio_wait_window_ParamLimits

0xd715,	// (0x0008cb9a) popup_call4_audio_wait_window

0x7546,	// (0x000869cb) cell_call4_button_pane_ParamLimits

0x7546,	// (0x000869cb) cell_call4_button_pane

0x756f,	// (0x000869f4) bg_button_pane_cp09_ParamLimits

0x756f,	// (0x000869f4) bg_button_pane_cp09

0x757b,	// (0x00086a00) cell_call4_button_pane_g1_ParamLimits

0x757b,	// (0x00086a00) cell_call4_button_pane_g1

0x75a1,	// (0x00086a26) cell_call4_button_pane_t1_ParamLimits

0x75a1,	// (0x00086a26) cell_call4_button_pane_t1

0xd75d,	// (0x0008cbe2) popup_call4_audio_conf_window_ParamLimits

0xd75d,	// (0x0008cbe2) popup_call4_audio_conf_window

0x67ff,	// (0x00085c84) mup3_progress_pane_t1_ParamLimits

0x681e,	// (0x00085ca3) mup3_progress_pane_t2_ParamLimits

0xcde2,	// (0x0008c267) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0008ec21) mup3_progress_pane_t_ParamLimits

0xcdff,	// (0x0008c284) mup_progress_pane_cp03_ParamLimits

0x6dfe,	// (0x00086283) mup3_control_keys_pane_g4_copy1

0xd5cc,	// (0x0008ca51) mp4_rocker2_pane_ParamLimits

0xd5cc,	// (0x0008ca51) mp4_rocker2_pane

0xd771,	// (0x0008cbf6) mp4_rocker2_pane_g1

0xd779,	// (0x0008cbfe) mp4_rocker2_pane_g2

0xd781,	// (0x0008cc06) mp4_rocker2_pane_g3

0xd789,	// (0x0008cc0e) mp4_rocker2_pane_g4

0xd791,	// (0x0008cc16) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0008ed56) mp4_rocker2_pane_g

0xdfb8,	// (0x0008d43d) main_camera4_pane

0xdfb8,	// (0x0008d43d) main_video4_pane

0x7068,	// (0x000864ed) main_video_tele_dialer_pane_t1_ParamLimits

0x7068,	// (0x000864ed) main_video_tele_dialer_pane_t1

0x7081,	// (0x00086506) main_video_tele_dialer_pane_t2_ParamLimits

0x7081,	// (0x00086506) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0008ed10) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0008ed10) main_video_tele_dialer_pane_t

0x75df,	// (0x00086a64) cam4_autofocus_pane_ParamLimits

0x75df,	// (0x00086a64) cam4_autofocus_pane

0x75f5,	// (0x00086a7a) cam4_image_uncrop_pane_ParamLimits

0x75f5,	// (0x00086a7a) cam4_image_uncrop_pane

0x760f,	// (0x00086a94) cam4_indicators_pane_ParamLimits

0x760f,	// (0x00086a94) cam4_indicators_pane

0x763a,	// (0x00086abf) main_camera4_pane_g1_ParamLimits

0x763a,	// (0x00086abf) main_camera4_pane_g1

0x764c,	// (0x00086ad1) main_camera4_pane_g2_ParamLimits

0x764c,	// (0x00086ad1) main_camera4_pane_g2

0x765f,	// (0x00086ae4) main_camera4_pane_g3_ParamLimits

0x765f,	// (0x00086ae4) main_camera4_pane_g3

0x7672,	// (0x00086af7) main_camera4_pane_g4_ParamLimits

0x7672,	// (0x00086af7) main_camera4_pane_g4

0x7685,	// (0x00086b0a) main_camera4_pane_g5_ParamLimits

0x7685,	// (0x00086b0a) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0008ed61) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0008ed61) main_camera4_pane_g

0x76a9,	// (0x00086b2e) main_camera4_pane_t1_ParamLimits

0x76a9,	// (0x00086b2e) main_camera4_pane_t1

0xcd0f,	// (0x0008c194) bg_tb_trans_pane_cp06

0xd7bd,	// (0x0008cc42) cam4_indicators_pane_g1

0xd7ce,	// (0x0008cc53) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0008ed7c) cam4_indicators_pane_g

0xd7ec,	// (0x0008cc71) cam4_indicators_pane_t1

0x770d,	// (0x00086b92) main_video4_pane_g1_ParamLimits

0x770d,	// (0x00086b92) main_video4_pane_g1

0x771c,	// (0x00086ba1) main_video4_pane_g2_ParamLimits

0x771c,	// (0x00086ba1) main_video4_pane_g2

0x772b,	// (0x00086bb0) main_video4_pane_g3_ParamLimits

0x772b,	// (0x00086bb0) main_video4_pane_g3

0x773a,	// (0x00086bbf) main_video4_pane_g4_ParamLimits

0x773a,	// (0x00086bbf) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0008ed83) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0008ed83) main_video4_pane_g

0x7758,	// (0x00086bdd) vid4_indicators_pane_ParamLimits

0x7758,	// (0x00086bdd) vid4_indicators_pane

0x7786,	// (0x00086c0b) video4_image_uncrop_cif_pane_ParamLimits

0x7786,	// (0x00086c0b) video4_image_uncrop_cif_pane

0x77a0,	// (0x00086c25) video4_image_uncrop_nhd_pane_ParamLimits

0x77a0,	// (0x00086c25) video4_image_uncrop_nhd_pane

0x75f5,	// (0x00086a7a) video4_image_uncrop_vga_pane_ParamLimits

0x75f5,	// (0x00086a7a) video4_image_uncrop_vga_pane

0xb28f,	// (0x0008a714) bg_tb_trans_pane_cp07

0xd818,	// (0x0008cc9d) vid4_indicators_pane_g1

0xd82c,	// (0x0008ccb1) vid4_indicators_pane_g2

0xd840,	// (0x0008ccc5) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0008ed8e) vid4_indicators_pane_g

0xd86f,	// (0x0008ccf4) vid4_indicators_pane_t1

0x77b4,	// (0x00086c39) cam4_autofocus_pane_g1

0x77bc,	// (0x00086c41) cam4_autofocus_pane_g2

0x77c4,	// (0x00086c49) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0008ed99) cam4_autofocus_pane_g

0x77cc,	// (0x00086c51) cam4_autofocus_pane_g3_copy1

0x70b0,	// (0x00086535) video_down_pane_cp_t1

0x70be,	// (0x00086543) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0008ed15) video_down_pane_cp_t

0xb28f,	// (0x0008a714) popup_vitu2_window_ParamLimits

0xb28f,	// (0x0008a714) popup_vitu2_window

0x77d4,	// (0x00086c59) aid_size_cell2_itu2_ParamLimits

0x77d4,	// (0x00086c59) aid_size_cell2_itu2

0x77fa,	// (0x00086c7f) aid_size_cell_itu2_ParamLimits

0x77fa,	// (0x00086c7f) aid_size_cell_itu2

0x7856,	// (0x00086cdb) bg_popup_window_pane_cp09_ParamLimits

0x7856,	// (0x00086cdb) bg_popup_window_pane_cp09

0x7864,	// (0x00086ce9) field_vitu2_entry_pane_ParamLimits

0x7864,	// (0x00086ce9) field_vitu2_entry_pane

0x788a,	// (0x00086d0f) grid_vitu2_function_pane_ParamLimits

0x788a,	// (0x00086d0f) grid_vitu2_function_pane

0x78db,	// (0x00086d60) grid_vitu2_itu_pane_ParamLimits

0x78db,	// (0x00086d60) grid_vitu2_itu_pane

0x7973,	// (0x00086df8) cell_vitu2_itu_pane_ParamLimits

0x7973,	// (0x00086df8) cell_vitu2_itu_pane

0x799f,	// (0x00086e24) cell_vitu2_function_pane_ParamLimits

0x799f,	// (0x00086e24) cell_vitu2_function_pane

0xd886,	// (0x0008cd0b) bg_popup_call_pane_cp08_ParamLimits

0xd886,	// (0x0008cd0b) bg_popup_call_pane_cp08

0xd89d,	// (0x0008cd22) field_vitu2_entry_pane_g1

0xd8a9,	// (0x0008cd2e) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0008eda0) field_vitu2_entry_pane_g

0x0519,	// (0x0007f99e) field_vitu2_entry_pane_t1_ParamLimits

0x0519,	// (0x0007f99e) field_vitu2_entry_pane_t1

0xd8c3,	// (0x0008cd48) field_vitu2_entry_pane_t2_ParamLimits

0xd8c3,	// (0x0008cd48) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0008eda7) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0008eda7) field_vitu2_entry_pane_t

0x79de,	// (0x00086e63) bg_button_pane_cp010_ParamLimits

0x79de,	// (0x00086e63) bg_button_pane_cp010

0xd8e8,	// (0x0008cd6d) cell_vitu2_itu_pane_g1

0x79fa,	// (0x00086e7f) cell_vitu2_itu_pane_t1_ParamLimits

0x79fa,	// (0x00086e7f) cell_vitu2_itu_pane_t1

0x0547,	// (0x0007f9cc) cell_vitu2_itu_pane_t2_ParamLimits

0x0547,	// (0x0007f9cc) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0008edb1) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0008edb1) cell_vitu2_itu_pane_t

0xb28f,	// (0x0008a714) bg_button_pane_cp011

0x7a58,	// (0x00086edd) cell_vitu2_function_pane_g1

0xdfb8,	// (0x0008d43d) main_myfav_hc_pane

0x745d,	// (0x000868e2) popup_image3_note_pane_ParamLimits

0x745d,	// (0x000868e2) popup_image3_note_pane

0x7479,	// (0x000868fe) popup_image3_tool_bar_pane_ParamLimits

0x7479,	// (0x000868fe) popup_image3_tool_bar_pane

0x05d5,	// (0x0007fa5a) cell_vitu2_itu_pane_t3_ParamLimits

0x05d5,	// (0x0007fa5a) cell_vitu2_itu_pane_t3

0xdfb8,	// (0x0008d43d) bg_popup_trans_pane

0xd8fa,	// (0x0008cd7f) grid_image3_tool_bar_pane

0xd904,	// (0x0008cd89) bg_popup_trans_pane_g1

0x2b83,	// (0x00082008) bg_popup_trans_pane_g2

0xd90c,	// (0x0008cd91) bg_popup_trans_pane_g3

0xd914,	// (0x0008cd99) bg_popup_trans_pane_g4

0xd91c,	// (0x0008cda1) bg_popup_trans_pane_g5

0xd924,	// (0x0008cda9) bg_popup_trans_pane_g6

0xd92c,	// (0x0008cdb1) bg_popup_trans_pane_g7

0xd934,	// (0x0008cdb9) bg_popup_trans_pane_g8

0x2b63,	// (0x00081fe8) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0008edb8) bg_popup_trans_pane_g

0xd93c,	// (0x0008cdc1) cell_image3_tool_bar_pane_ParamLimits

0xd93c,	// (0x0008cdc1) cell_image3_tool_bar_pane

0xcaa3,	// (0x0008bf28) cell_image3_tool_bar_pane_g1

0xdfb8,	// (0x0008d43d) bg_popup_trans_pane_cp1

0xd950,	// (0x0008cdd5) popup_image3_note_pane_t1

0xd95e,	// (0x0008cde3) popup_image3_note_pane_t2

0xd96c,	// (0x0008cdf1) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0008edcb) popup_image3_note_pane_t

0xd97a,	// (0x0008cdff) popup_image3_note_pane_t3_copy1

0x7a6c,	// (0x00086ef1) bg_myfav_hc_instruction_pane_ParamLimits

0x7a6c,	// (0x00086ef1) bg_myfav_hc_instruction_pane

0x7a80,	// (0x00086f05) cell_myfav_contact_pane_ParamLimits

0x7a80,	// (0x00086f05) cell_myfav_contact_pane

0x7a9e,	// (0x00086f23) cell_myfav_contact_pane_cp1_ParamLimits

0x7a9e,	// (0x00086f23) cell_myfav_contact_pane_cp1

0x7ab6,	// (0x00086f3b) cell_myfav_contact_pane_cp2_ParamLimits

0x7ab6,	// (0x00086f3b) cell_myfav_contact_pane_cp2

0x7ace,	// (0x00086f53) cell_myfav_contact_pane_cp3_ParamLimits

0x7ace,	// (0x00086f53) cell_myfav_contact_pane_cp3

0x7ae5,	// (0x00086f6a) cell_myfav_contact_pane_cp4_ParamLimits

0x7ae5,	// (0x00086f6a) cell_myfav_contact_pane_cp4

0x7afd,	// (0x00086f82) cell_myfav_contact_pane_cp5_ParamLimits

0x7afd,	// (0x00086f82) cell_myfav_contact_pane_cp5

0x7b11,	// (0x00086f96) cell_myfav_contact_pane_cp6_ParamLimits

0x7b11,	// (0x00086f96) cell_myfav_contact_pane_cp6

0x7b27,	// (0x00086fac) cell_myfav_contact_pane_cp7_ParamLimits

0x7b27,	// (0x00086fac) cell_myfav_contact_pane_cp7

0xd988,	// (0x0008ce0d) listscroll_gen_pane_cp05

0x7b41,	// (0x00086fc6) main_myfav_hc_pane_g1_ParamLimits

0x7b41,	// (0x00086fc6) main_myfav_hc_pane_g1

0x7b5b,	// (0x00086fe0) main_myfav_hc_pane_g2_ParamLimits

0x7b5b,	// (0x00086fe0) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0008edd2) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0008edd2) main_myfav_hc_pane_g

0x7b8d,	// (0x00087012) main_myfav_hc_pane_t1_ParamLimits

0x7b8d,	// (0x00087012) main_myfav_hc_pane_t1

0xd991,	// (0x0008ce16) main_myfav_hc_pane_t2_ParamLimits

0xd991,	// (0x0008ce16) main_myfav_hc_pane_t2

0xd9a3,	// (0x0008ce28) main_myfav_hc_pane_t3_ParamLimits

0xd9a3,	// (0x0008ce28) main_myfav_hc_pane_t3

0x7ba4,	// (0x00087029) main_myfav_hc_pane_t4_ParamLimits

0x7ba4,	// (0x00087029) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0008edd9) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0008edd9) main_myfav_hc_pane_t

0xcaa3,	// (0x0008bf28) bg_myfav_hc_instruction_pane_g1

0xd9b5,	// (0x0008ce3a) cell_myfav_contact_pane_g1_ParamLimits

0xd9b5,	// (0x0008ce3a) cell_myfav_contact_pane_g1

0xd9b5,	// (0x0008ce3a) cell_myfav_contact_pane_g2_ParamLimits

0xd9b5,	// (0x0008ce3a) cell_myfav_contact_pane_g2

0xd9c1,	// (0x0008ce46) cell_myfav_contact_pane_g3_ParamLimits

0xd9c1,	// (0x0008ce46) cell_myfav_contact_pane_g3

0xcdcc,	// (0x0008c251) cell_myfav_contact_pane_g4_ParamLimits

0xcdcc,	// (0x0008c251) cell_myfav_contact_pane_g4

0xd9ce,	// (0x0008ce53) cell_myfav_contact_pane_g5_ParamLimits

0xd9ce,	// (0x0008ce53) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0008ede4) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0008ede4) cell_myfav_contact_pane_g

0x7b75,	// (0x00086ffa) main_myfav_hc_pane_g3_ParamLimits

0x7b75,	// (0x00086ffa) main_myfav_hc_pane_g3

0x125c,	// (0x000806e1) popup_adpt_find_window

0x7bcc,	// (0x00087051) afind_page_pane_ParamLimits

0x7bcc,	// (0x00087051) afind_page_pane

0x7be1,	// (0x00087066) aid_size_cell_afind_ParamLimits

0x7be1,	// (0x00087066) aid_size_cell_afind

0x7bff,	// (0x00087084) bg_popup_sub_pane_cp09_ParamLimits

0x7bff,	// (0x00087084) bg_popup_sub_pane_cp09

0x7c0c,	// (0x00087091) find_pane_cp01_ParamLimits

0x7c0c,	// (0x00087091) find_pane_cp01

0xd9da,	// (0x0008ce5f) grid_afind_control_pane_ParamLimits

0xd9da,	// (0x0008ce5f) grid_afind_control_pane

0x7c19,	// (0x0008709e) grid_afind_pane_ParamLimits

0x7c19,	// (0x0008709e) grid_afind_pane

0x7c3b,	// (0x000870c0) cell_afind_pane_ParamLimits

0x7c3b,	// (0x000870c0) cell_afind_pane

0xcaa3,	// (0x0008bf28) afind_page_pane_g1

0x7ca2,	// (0x00087127) afind_page_pane_g2

0x7cab,	// (0x00087130) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0008edef) afind_page_pane_g

0x7cb4,	// (0x00087139) afind_page_pane_t1

0xd9ee,	// (0x0008ce73) cell_afind_grid_control_pane_ParamLimits

0xd9ee,	// (0x0008ce73) cell_afind_grid_control_pane

0xd660,	// (0x0008cae5) bg_button_pane_cp69_ParamLimits

0xd660,	// (0x0008cae5) bg_button_pane_cp69

0x7cd4,	// (0x00087159) cell_afind_pane_g1_ParamLimits

0x7cd4,	// (0x00087159) cell_afind_pane_g1

0x7ce1,	// (0x00087166) cell_afind_pane_t1_ParamLimits

0x7ce1,	// (0x00087166) cell_afind_pane_t1

0x2507,	// (0x0008198c) bg_button_pane_cp72

0xd9fd,	// (0x0008ce82) cell_afind_grid_control_pane_g1

0x4d8c,	// (0x00084211) aid_image_placing_area_ParamLimits

0x4d8c,	// (0x00084211) aid_image_placing_area

0xd0f5,	// (0x0008c57a) field_vitu_entry_pane_g1_ParamLimits

0xd0f5,	// (0x0008c57a) field_vitu_entry_pane_g1

0xd101,	// (0x0008c586) field_vitu_entry_pane_g2_ParamLimits

0xd101,	// (0x0008c586) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0008eca0) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0008eca0) field_vitu_entry_pane_g

0x6ec5,	// (0x0008634a) cell_vitu_itu_pane_g1_ParamLimits

0x6f07,	// (0x0008638c) cell_vitu_itu_pane_t3_ParamLimits

0x6f07,	// (0x0008638c) cell_vitu_itu_pane_t3

0xd610,	// (0x0008ca95) mp4_progress_pane_t1_ParamLimits

0xd629,	// (0x0008caae) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0008ed35) mp4_progress_pane_t_ParamLimits

0xd642,	// (0x0008cac7) mup_progress_pane_cp04_ParamLimits

0x7bb8,	// (0x0008703d) main_myfav_hc_pane_t5_ParamLimits

0x7bb8,	// (0x0008703d) main_myfav_hc_pane_t5

0xb23d,	// (0x0008a6c2) aid_zoom_text_primary

0x125c,	// (0x000806e1) popup_adpt_find_window_ParamLimits

0xb28f,	// (0x0008a714) main_cam_set_pane

0x7626,	// (0x00086aab) cam4_zoom_pane_ParamLimits

0x7626,	// (0x00086aab) cam4_zoom_pane

0x7cf3,	// (0x00087178) main_cam_set_pane_g1_ParamLimits

0x7cf3,	// (0x00087178) main_cam_set_pane_g1

0x7d01,	// (0x00087186) main_cam_set_pane_g2_ParamLimits

0x7d01,	// (0x00087186) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0008edf6) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0008edf6) main_cam_set_pane_g

0x7d22,	// (0x000871a7) main_cam_set_pane_t1_ParamLimits

0x7d22,	// (0x000871a7) main_cam_set_pane_t1

0x7d3d,	// (0x000871c2) main_cset_listscroll_pane_ParamLimits

0x7d3d,	// (0x000871c2) main_cset_listscroll_pane

0x7d5d,	// (0x000871e2) main_cset_slider_pane_ParamLimits

0x7d5d,	// (0x000871e2) main_cset_slider_pane

0xda0e,	// (0x0008ce93) main_cset_list_pane_ParamLimits

0xda0e,	// (0x0008ce93) main_cset_list_pane

0xda1e,	// (0x0008cea3) scroll_pane_cp028

0x7d83,	// (0x00087208) aid_area_touch_slider

0x7d9f,	// (0x00087224) cset_slider_pane

0x7dc9,	// (0x0008724e) main_cset_slider_pane_g1

0x7dde,	// (0x00087263) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0008edfb) main_cset_slider_pane_g

0xda57,	// (0x0008cedc) main_cset_slider_pane_t1

0x7e9a,	// (0x0008731f) main_cset_slider_pane_t2

0x7eb4,	// (0x00087339) main_cset_slider_pane_t3

0x7ece,	// (0x00087353) main_cset_slider_pane_t4

0x7ee8,	// (0x0008736d) main_cset_slider_pane_t5

0x7f02,	// (0x00087387) main_cset_slider_pane_t6

0x7f17,	// (0x0008739c) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0008ee20) main_cset_slider_pane_t

0x801b,	// (0x000874a0) cset_list_set_pane_ParamLimits

0x801b,	// (0x000874a0) cset_list_set_pane

0x802d,	// (0x000874b2) aid_position_infowindow_above

0x8035,	// (0x000874ba) aid_position_infowindow_below

0xdaf7,	// (0x0008cf7c) cset_list_set_pane_g1_ParamLimits

0xdaf7,	// (0x0008cf7c) cset_list_set_pane_g1

0xdb03,	// (0x0008cf88) cset_list_set_pane_g3_ParamLimits

0xdb03,	// (0x0008cf88) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0008ee3f) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0008ee3f) cset_list_set_pane_g

0xdb12,	// (0x0008cf97) cset_list_set_pane_t1_ParamLimits

0xdb12,	// (0x0008cf97) cset_list_set_pane_t1

0xb28f,	// (0x0008a714) list_highlight_pane_cp021_ParamLimits

0xb28f,	// (0x0008a714) list_highlight_pane_cp021

0x47b1,	// (0x00083c36) cset_slider_pane_g1

0x47c3,	// (0x00083c48) cset_slider_pane_g2

0x47ba,	// (0x00083c3f) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0008ee44) cset_slider_pane_g

0xdb27,	// (0x0008cfac) aid_area_touch_cam4_zoom

0xdb2f,	// (0x0008cfb4) cam4_zoom_cont_pane

0xdb37,	// (0x0008cfbc) cam4_zoom_pane_g1

0xdb3f,	// (0x0008cfc4) cam4_zoom_pane_g2

0x803d,	// (0x000874c2) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0008ee4b) cam4_zoom_pane_g

0xdb47,	// (0x0008cfcc) cam4_zoom_cont_pane_g1

0xdb50,	// (0x0008cfd5) cam4_zoom_cont_pane_g2

0xdb59,	// (0x0008cfde) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0008ee52) cam4_zoom_cont_pane_g

0x74e6,	// (0x0008696b) call4_image_pane_ParamLimits

0x74e6,	// (0x0008696b) call4_image_pane

0xd69e,	// (0x0008cb23) call4_windows_conf_pane_ParamLimits

0xd6df,	// (0x0008cb64) popup_call4_audio_in_window_ParamLimits

0xd6df,	// (0x0008cb64) popup_call4_audio_in_window

0xdfb8,	// (0x0008d43d) bg_popup_call2_act_pane_cp02

0xd755,	// (0x0008cbda) call4_list_conf_pane

0xcaa3,	// (0x0008bf28) call4_image_pane_g1

0xcaa3,	// (0x0008bf28) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0008eb61) call4_image_pane_g

0xdb62,	// (0x0008cfe7) list_single_graphic_popup_conf4_pane_ParamLimits

0xdb62,	// (0x0008cfe7) list_single_graphic_popup_conf4_pane

0xdfb8,	// (0x0008d43d) list_highlight_pane_cp022

0xdb75,	// (0x0008cffa) list_single_graphic_popup_conf4_pane_g1

0x3d27,	// (0x000831ac) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0008ee59) list_single_graphic_popup_conf4_pane_g

0xdb7d,	// (0x0008d002) list_single_graphic_popup_conf4_pane_t1

0x26ea,	// (0x00081b6f) popup_vtel_slider_window_ParamLimits

0x26ea,	// (0x00081b6f) popup_vtel_slider_window

0xd64e,	// (0x0008cad3) dialer2_ne_pane_t2_ParamLimits

0xd64e,	// (0x0008cad3) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0008ed3a) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0008ed3a) dialer2_ne_pane_t

0xc888,	// (0x0008bd0d) bg_popup_sub_pane_cp010_ParamLimits

0xc888,	// (0x0008bd0d) bg_popup_sub_pane_cp010

0x8045,	// (0x000874ca) popup_vtel_slider_window_g1_ParamLimits

0x8045,	// (0x000874ca) popup_vtel_slider_window_g1

0x8058,	// (0x000874dd) popup_vtel_slider_window_g2_ParamLimits

0x8058,	// (0x000874dd) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0008ee5e) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0008ee5e) popup_vtel_slider_window_g

0x80ae,	// (0x00087533) vtel_slider_pane_ParamLimits

0x80ae,	// (0x00087533) vtel_slider_pane

0x80d0,	// (0x00087555) vtel_slider_pane_g1_ParamLimits

0x80d0,	// (0x00087555) vtel_slider_pane_g1

0x80e4,	// (0x00087569) vtel_slider_pane_g2_ParamLimits

0x80e4,	// (0x00087569) vtel_slider_pane_g2

0x80fc,	// (0x00087581) vtel_slider_pane_g3_ParamLimits

0x80fc,	// (0x00087581) vtel_slider_pane_g3

0x80d0,	// (0x00087555) vtel_slider_pane_g4_ParamLimits

0x80d0,	// (0x00087555) vtel_slider_pane_g4

0x8112,	// (0x00087597) vtel_slider_pane_g5_ParamLimits

0x8112,	// (0x00087597) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0008ee67) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0008ee67) vtel_slider_pane_g

0xb28f,	// (0x0008a714) main_gallery2_pane

0x7826,	// (0x00086cab) aid_size_row_itut2_dropdow_list_ParamLimits

0x7826,	// (0x00086cab) aid_size_row_itut2_dropdow_list

0x78b2,	// (0x00086d37) grid_vitu2_function_top_pane_ParamLimits

0x78b2,	// (0x00086d37) grid_vitu2_function_top_pane

0x791c,	// (0x00086da1) popup_vitu2_dropdown_list_window_ParamLimits

0x791c,	// (0x00086da1) popup_vitu2_dropdown_list_window

0x7945,	// (0x00086dca) popup_vitu2_match_list_window

0x8128,	// (0x000875ad) cell_vitu2_function_top_pane_ParamLimits

0x8128,	// (0x000875ad) cell_vitu2_function_top_pane

0x8140,	// (0x000875c5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8140,	// (0x000875c5) cell_vitu2_function_top_pane_cp01

0x815c,	// (0x000875e1) cell_vitu2_function_top_wide_pane_ParamLimits

0x815c,	// (0x000875e1) cell_vitu2_function_top_wide_pane

0xb28f,	// (0x0008a714) bg_button_pane_cp012

0x8178,	// (0x000875fd) cell_vitu2_function_top_pane_g1

0xdb93,	// (0x0008d018) bg_button_pane_cp013_ParamLimits

0xdb93,	// (0x0008d018) bg_button_pane_cp013

0x818c,	// (0x00087611) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x818c,	// (0x00087611) cell_vitu2_function_top_wide_pane_g1

0xb28f,	// (0x0008a714) bg_popup_sub_pane_cp20

0x81a4,	// (0x00087629) list_vitu2_match_list_pane

0xd904,	// (0x0008cd89) bg_popup_sub_pane_cp20_g1

0xd90c,	// (0x0008cd91) bg_popup_sub_pane_cp20_g2

0x2b83,	// (0x00082008) bg_popup_sub_pane_cp20_g3

0xd914,	// (0x0008cd99) bg_popup_sub_pane_cp20_g4

0x2b63,	// (0x00081fe8) bg_popup_sub_pane_cp20_g5

0xdbaf,	// (0x0008d034) bg_popup_sub_pane_cp20_g6

0xd924,	// (0x0008cda9) bg_popup_sub_pane_cp20_g7

0xd92c,	// (0x0008cdb1) bg_popup_sub_pane_cp20_g8

0xd934,	// (0x0008cdb9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0008ee72) bg_popup_sub_pane_cp20_g

0xdbb7,	// (0x0008d03c) list_vitu2_match_list_item_pane_ParamLimits

0xdbb7,	// (0x0008d03c) list_vitu2_match_list_item_pane

0xdbc9,	// (0x0008d04e) list_vitu2_match_list_item_pane_t1

0xdfb8,	// (0x0008d43d) bg_popup_sub_pane_cp21

0x3c2b,	// (0x000830b0) grid_vitu2_dropdown_list_pane

0x81c2,	// (0x00087647) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x81c2,	// (0x00087647) cell_vitu2_dropdown_list_char_pane

0x81e3,	// (0x00087668) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x81e3,	// (0x00087668) cell_vitu2_dropdown_list_ctrl_pane

0xe03a,	// (0x0008d4bf) cell_vitu2_dropdown_list_char_pane_g1

0xe043,	// (0x0008d4c8) cell_vitu2_dropdown_list_char_pane_g2

0xe04c,	// (0x0008d4d1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0008ee8f) cell_vitu2_dropdown_list_char_pane_g

0x820f,	// (0x00087694) cell_vitu2_dropdown_list_char_pane_t1

0x821d,	// (0x000876a2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x821d,	// (0x000876a2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x822a,	// (0x000876af) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x822a,	// (0x000876af) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8237,	// (0x000876bc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8237,	// (0x000876bc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8244,	// (0x000876c9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8244,	// (0x000876c9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcd0f,	// (0x0008c194) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcd0f,	// (0x0008c194) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0008ee96) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0008ee96) cell_vitu2_dropdown_list_ctrl_pane_g

0x8260,	// (0x000876e5) aid_size_cell_gallery2_ParamLimits

0x8260,	// (0x000876e5) aid_size_cell_gallery2

0x827e,	// (0x00087703) grid_gallery2_pane_ParamLimits

0x827e,	// (0x00087703) grid_gallery2_pane

0x8298,	// (0x0008771d) scroll_pane_cp029_ParamLimits

0x8298,	// (0x0008771d) scroll_pane_cp029

0x82a4,	// (0x00087729) cell_gallery2_pane_ParamLimits

0x82a4,	// (0x00087729) cell_gallery2_pane

0xe055,	// (0x0008d4da) cell_gallery2_pane_g2

0x8300,	// (0x00087785) cell_gallery2_pane_g3

0xe05d,	// (0x0008d4e2) cell_gallery2_pane_g4

0xe065,	// (0x0008d4ea) cell_gallery2_pane_g5

0x2164,	// (0x000815e9) grid_highlight_pane_cp10

0x7945,	// (0x00086dca) popup_vitu2_match_list_window_ParamLimits

0x795c,	// (0x00086de1) popup_vitu2_query_window_ParamLimits

0x795c,	// (0x00086de1) popup_vitu2_query_window

0xdfb8,	// (0x0008d43d) bg_vitu2_candi_button_pane

0xe03a,	// (0x0008d4bf) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe043,	// (0x0008d4c8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe04c,	// (0x0008d4d1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0691,	// (0x0007fb16) bg_button_pane_cp015

0x8308,	// (0x0008778d) bg_button_pane_cp016

0x831b,	// (0x000877a0) bg_button_pane_cp017

0xc588,	// (0x0008ba0d) bg_popup_sub_pane_cp22

0xe06d,	// (0x0008d4f2) popup_vitu2_query_window_g1

0x06c4,	// (0x0007fb49) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0008eea1) popup_vitu2_query_window_g

0x06e3,	// (0x0007fb68) popup_vitu2_query_window_t1_ParamLimits

0x06e3,	// (0x0007fb68) popup_vitu2_query_window_t1

0x0718,	// (0x0007fb9d) popup_vitu2_query_window_t2_ParamLimits

0x0718,	// (0x0007fb9d) popup_vitu2_query_window_t2

0x072a,	// (0x0007fbaf) popup_vitu2_query_window_t3_ParamLimits

0x072a,	// (0x0007fbaf) popup_vitu2_query_window_t3

0x833f,	// (0x000877c4) popup_vitu2_query_window_t4_ParamLimits

0x833f,	// (0x000877c4) popup_vitu2_query_window_t4

0x8360,	// (0x000877e5) popup_vitu2_query_window_t5_ParamLimits

0x8360,	// (0x000877e5) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0008eea8) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0008eea8) popup_vitu2_query_window_t

0xda06,	// (0x0008ce8b) main_cset_text_pane

0x7d83,	// (0x00087208) aid_area_touch_slider_ParamLimits

0x7d9f,	// (0x00087224) cset_slider_pane_ParamLimits

0x7dc9,	// (0x0008724e) main_cset_slider_pane_g1_ParamLimits

0x7dde,	// (0x00087263) main_cset_slider_pane_g2_ParamLimits

0xda27,	// (0x0008ceac) main_cset_slider_pane_g3_ParamLimits

0xda27,	// (0x0008ceac) main_cset_slider_pane_g3

0x7df3,	// (0x00087278) main_cset_slider_pane_g4_ParamLimits

0x7df3,	// (0x00087278) main_cset_slider_pane_g4

0x7e02,	// (0x00087287) main_cset_slider_pane_g5_ParamLimits

0x7e02,	// (0x00087287) main_cset_slider_pane_g5

0x7e0e,	// (0x00087293) main_cset_slider_pane_g6_ParamLimits

0x7e0e,	// (0x00087293) main_cset_slider_pane_g6

0xf976,	// (0x0008edfb) main_cset_slider_pane_g_ParamLimits

0xda57,	// (0x0008cedc) main_cset_slider_pane_t1_ParamLimits

0x7e9a,	// (0x0008731f) main_cset_slider_pane_t2_ParamLimits

0x7eb4,	// (0x00087339) main_cset_slider_pane_t3_ParamLimits

0x7ece,	// (0x00087353) main_cset_slider_pane_t4_ParamLimits

0x7ee8,	// (0x0008736d) main_cset_slider_pane_t5_ParamLimits

0x7f02,	// (0x00087387) main_cset_slider_pane_t6_ParamLimits

0x7f17,	// (0x0008739c) main_cset_slider_pane_t7_ParamLimits

0x7f41,	// (0x000873c6) main_cset_slider_pane_t8_ParamLimits

0x7f41,	// (0x000873c6) main_cset_slider_pane_t8

0x7f69,	// (0x000873ee) main_cset_slider_pane_t9_ParamLimits

0x7f69,	// (0x000873ee) main_cset_slider_pane_t9

0x7f91,	// (0x00087416) main_cset_slider_pane_t10_ParamLimits

0x7f91,	// (0x00087416) main_cset_slider_pane_t10

0x7fb9,	// (0x0008743e) main_cset_slider_pane_t11_ParamLimits

0x7fb9,	// (0x0008743e) main_cset_slider_pane_t11

0x7fe1,	// (0x00087466) main_cset_slider_pane_t12_ParamLimits

0x7fe1,	// (0x00087466) main_cset_slider_pane_t12

0x7ffe,	// (0x00087483) main_cset_slider_pane_t13_ParamLimits

0x7ffe,	// (0x00087483) main_cset_slider_pane_t13

0xf99b,	// (0x0008ee20) main_cset_slider_pane_t_ParamLimits

0xdfb8,	// (0x0008d43d) bg_popup_sub_pane_cp011

0xe079,	// (0x0008d4fe) main_cset_text_pane_g1

0xe081,	// (0x0008d506) main_cset_text_pane_t1

0xe08f,	// (0x0008d514) main_cset_text_pane_t2

0xe09d,	// (0x0008d522) main_cset_text_pane_t3

0xe0ab,	// (0x0008d530) main_cset_text_pane_t4

0xe0b9,	// (0x0008d53e) main_cset_text_pane_t5

0xe0c7,	// (0x0008d54c) main_cset_text_pane_t6

0xe0d5,	// (0x0008d55a) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0008eeb7) main_cset_text_pane_t

0xdfb8,	// (0x0008d43d) main_cam4_burst_pane

0xdfb8,	// (0x0008d43d) main_cam5_pane

0x7cc2,	// (0x00087147) bg_button_pane_cp019

0x7ccb,	// (0x00087150) bg_button_pane_cp020

0xda33,	// (0x0008ceb8) main_cset_slider_pane_g7_ParamLimits

0xda33,	// (0x0008ceb8) main_cset_slider_pane_g7

0xda3f,	// (0x0008cec4) main_cset_slider_pane_g8_ParamLimits

0xda3f,	// (0x0008cec4) main_cset_slider_pane_g8

0x7e22,	// (0x000872a7) main_cset_slider_pane_g9_ParamLimits

0x7e22,	// (0x000872a7) main_cset_slider_pane_g9

0x7e2e,	// (0x000872b3) main_cset_slider_pane_g10_ParamLimits

0x7e2e,	// (0x000872b3) main_cset_slider_pane_g10

0x7e3a,	// (0x000872bf) main_cset_slider_pane_g11_ParamLimits

0x7e3a,	// (0x000872bf) main_cset_slider_pane_g11

0x7e46,	// (0x000872cb) main_cset_slider_pane_g12_ParamLimits

0x7e46,	// (0x000872cb) main_cset_slider_pane_g12

0x7e52,	// (0x000872d7) main_cset_slider_pane_g13_ParamLimits

0x7e52,	// (0x000872d7) main_cset_slider_pane_g13

0x7e5e,	// (0x000872e3) main_cset_slider_pane_g14_ParamLimits

0x7e5e,	// (0x000872e3) main_cset_slider_pane_g14

0x7e6a,	// (0x000872ef) main_cset_slider_pane_g15_ParamLimits

0x7e6a,	// (0x000872ef) main_cset_slider_pane_g15

0xda85,	// (0x0008cf0a) main_cset_slider_pane_t14_ParamLimits

0xda85,	// (0x0008cf0a) main_cset_slider_pane_t14

0xdabe,	// (0x0008cf43) main_cset_slider_pane_t15_ParamLimits

0xdabe,	// (0x0008cf43) main_cset_slider_pane_t15

0x8381,	// (0x00087806) aid_cam4_burst_size_cell_ParamLimits

0x8381,	// (0x00087806) aid_cam4_burst_size_cell

0x83a1,	// (0x00087826) grid_cam4_burst_pane_ParamLimits

0x83a1,	// (0x00087826) grid_cam4_burst_pane

0x83d9,	// (0x0008785e) linegrid_cam4_burst_pane_ParamLimits

0x83d9,	// (0x0008785e) linegrid_cam4_burst_pane

0xe0e3,	// (0x0008d568) scroll_pane_cp30_ParamLimits

0xe0e3,	// (0x0008d568) scroll_pane_cp30

0x83fd,	// (0x00087882) cell_cam4_burst_pane_ParamLimits

0x83fd,	// (0x00087882) cell_cam4_burst_pane

0xe0ef,	// (0x0008d574) linegrid_cam4_burst_pane_g1_ParamLimits

0xe0ef,	// (0x0008d574) linegrid_cam4_burst_pane_g1

0x844a,	// (0x000878cf) linegrid_cam4_burst_pane_g2_ParamLimits

0x844a,	// (0x000878cf) linegrid_cam4_burst_pane_g2

0xe0fc,	// (0x0008d581) linegrid_cam4_burst_pane_g3_ParamLimits

0xe0fc,	// (0x0008d581) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0008eec6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0008eec6) linegrid_cam4_burst_pane_g

0x845b,	// (0x000878e0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x845b,	// (0x000878e0) linegrid_cam4_burst_pane_g3_copy1

0xe109,	// (0x0008d58e) linegrid_cam4_burst_pane_g4_ParamLimits

0xe109,	// (0x0008d58e) linegrid_cam4_burst_pane_g4

0x8475,	// (0x000878fa) linegrid_cam4_burst_pane_g5_ParamLimits

0x8475,	// (0x000878fa) linegrid_cam4_burst_pane_g5

0x8486,	// (0x0008790b) linegrid_cam4_burst_pane_g6_ParamLimits

0x8486,	// (0x0008790b) linegrid_cam4_burst_pane_g6

0xe116,	// (0x0008d59b) linegrid_cam4_burst_pane_g7_ParamLimits

0xe116,	// (0x0008d59b) linegrid_cam4_burst_pane_g7

0x849d,	// (0x00087922) cell_cam4_burst_pane_g1

0xe12f,	// (0x0008d5b4) main_cam5_pane_t1_ParamLimits

0xe12f,	// (0x0008d5b4) main_cam5_pane_t1

0xe141,	// (0x0008d5c6) main_cam5_pane_t2_ParamLimits

0xe141,	// (0x0008d5c6) main_cam5_pane_t2

0xe153,	// (0x0008d5d8) main_cam5_pane_t3_ParamLimits

0xe153,	// (0x0008d5d8) main_cam5_pane_t3

0xe165,	// (0x0008d5ea) main_cam5_pane_t4_ParamLimits

0xe165,	// (0x0008d5ea) main_cam5_pane_t4

0xe17d,	// (0x0008d602) main_cam5_pane_t5_ParamLimits

0xe17d,	// (0x0008d602) main_cam5_pane_t5

0xe191,	// (0x0008d616) main_cam5_pane_t6_ParamLimits

0xe191,	// (0x0008d616) main_cam5_pane_t6

0xe1a5,	// (0x0008d62a) main_cam5_pane_t7_ParamLimits

0xe1a5,	// (0x0008d62a) main_cam5_pane_t7

0xe1b7,	// (0x0008d63c) main_cam5_pane_t8_ParamLimits

0xe1b7,	// (0x0008d63c) main_cam5_pane_t8

0xe1d3,	// (0x0008d658) main_cam5_pane_t9_ParamLimits

0xe1d3,	// (0x0008d658) main_cam5_pane_t9

0xe1e5,	// (0x0008d66a) main_cam5_pane_t10_ParamLimits

0xe1e5,	// (0x0008d66a) main_cam5_pane_t10

0xe1f7,	// (0x0008d67c) main_cam5_pane_t11_ParamLimits

0xe1f7,	// (0x0008d67c) main_cam5_pane_t11

0xe209,	// (0x0008d68e) main_cam5_pane_t12_ParamLimits

0xe209,	// (0x0008d68e) main_cam5_pane_t12

0xe21e,	// (0x0008d6a3) main_cam5_pane_t13_ParamLimits

0xe21e,	// (0x0008d6a3) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0008eed2) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0008eed2) main_cam5_pane_t

0x12de,	// (0x00080763) popup_scut_keymap_window_ParamLimits

0x12de,	// (0x00080763) popup_scut_keymap_window

0x84b0,	// (0x00087935) aid_size_cell_brow_shortcut

0x2164,	// (0x000815e9) bg_popup_window_pane_cp010

0x84bc,	// (0x00087941) grid_scut_pane

0x84c8,	// (0x0008794d) cell_scut_pane_ParamLimits

0x84c8,	// (0x0008794d) cell_scut_pane

0x84df,	// (0x00087964) cell_scut_pane_g1

0xe23b,	// (0x0008d6c0) cell_scut_pane_t1

0xe24a,	// (0x0008d6cf) cell_scut_pane_t2

0x84e8,	// (0x0008796d) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0008eeed) cell_scut_pane_t

0x63b8,	// (0x0008583d) main_mup3_pane_g8_ParamLimits

0x63b8,	// (0x0008583d) main_mup3_pane_g8

0x783e,	// (0x00086cc3) area_vitu2_query_pane_ParamLimits

0x783e,	// (0x00086cc3) area_vitu2_query_pane

0x06a3,	// (0x0007fb28) input_focus_pane_cp08

0xe259,	// (0x0008d6de) area_vitu2_query_pane_g1

0x07a8,	// (0x0007fc2d) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0008eef4) area_vitu2_query_pane_g

0x84f6,	// (0x0008797b) area_vitu2_query_pane_t1_ParamLimits

0x84f6,	// (0x0008797b) area_vitu2_query_pane_t1

0x850a,	// (0x0008798f) area_vitu2_query_pane_t2_ParamLimits

0x850a,	// (0x0008798f) area_vitu2_query_pane_t2

0x07b9,	// (0x0007fc3e) area_vitu2_query_pane_t3_ParamLimits

0x07b9,	// (0x0007fc3e) area_vitu2_query_pane_t3

0xdbd7,	// (0x0008d05c) area_vitu2_query_pane_t4_ParamLimits

0xdbd7,	// (0x0008d05c) area_vitu2_query_pane_t4

0xdbff,	// (0x0008d084) area_vitu2_query_pane_t5_ParamLimits

0xdbff,	// (0x0008d084) area_vitu2_query_pane_t5

0xdc27,	// (0x0008d0ac) area_vitu2_query_pane_t6_ParamLimits

0xdc27,	// (0x0008d0ac) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0008eef9) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0008eef9) area_vitu2_query_pane_t

0x851e,	// (0x000879a3) bg_button_pane_cp018

0x852c,	// (0x000879b1) bg_button_pane_cp021

0x07e1,	// (0x0007fc66) bg_button_pane_cp022

0x07f0,	// (0x0007fc75) input_focus_pane_cp09

0x4082,	// (0x00083507) aid_size_touch_mv_arrow_left

0x40ab,	// (0x00083530) aid_size_touch_mv_arrow_right

0x7e82,	// (0x00087307) main_cset_slider_pane_g16_ParamLimits

0x7e82,	// (0x00087307) main_cset_slider_pane_g16

0x7e8e,	// (0x00087313) main_cset_slider_pane_g17_ParamLimits

0x7e8e,	// (0x00087313) main_cset_slider_pane_g17

0x849d,	// (0x00087922) cell_cam4_burst_pane_g1_ParamLimits

0xdfb8,	// (0x0008d43d) compa_mode_pane

0x8068,	// (0x000874ed) popup_vtel_slider_window_g3_ParamLimits

0x8068,	// (0x000874ed) popup_vtel_slider_window_g3

0x807f,	// (0x00087504) popup_vtel_slider_window_g4_ParamLimits

0x807f,	// (0x00087504) popup_vtel_slider_window_g4

0x8096,	// (0x0008751b) popup_vtel_slider_window_t1_ParamLimits

0x8096,	// (0x0008751b) popup_vtel_slider_window_t1

0xdfb8,	// (0x0008d43d) main_cl_pane

0xc5b0,	// (0x0008ba35) popup_imed_adjust2_window_ParamLimits

0xc588,	// (0x0008ba0d) bg_tb_trans_pane_cp05_ParamLimits

0xd02a,	// (0x0008c4af) popup_imed_adjust2_window_g1_ParamLimits

0xd039,	// (0x0008c4be) popup_imed_adjust2_window_g2_ParamLimits

0xd039,	// (0x0008c4be) popup_imed_adjust2_window_g2

0xd045,	// (0x0008c4ca) popup_imed_adjust2_window_g3_ParamLimits

0xd045,	// (0x0008c4ca) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0008ec64) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0008ec64) popup_imed_adjust2_window_g

0xd051,	// (0x0008c4d6) popup_imed_adjust2_window_t1_ParamLimits

0xd069,	// (0x0008c4ee) slider_imed_adjust_pane_ParamLimits

0xd07d,	// (0x0008c502) slider_imed_adjust_pane_g1_ParamLimits

0xd08d,	// (0x0008c512) slider_imed_adjust_pane_g2_ParamLimits

0xd09d,	// (0x0008c522) slider_imed_adjust_pane_g3_ParamLimits

0xd0ae,	// (0x0008c533) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0008ec6b) slider_imed_adjust_pane_g_ParamLimits

0x75c7,	// (0x00086a4c) aid_touch_area_cam4_ParamLimits

0x75c7,	// (0x00086a4c) aid_touch_area_cam4

0xd799,	// (0x0008cc1e) battery_pane_cp01

0x7696,	// (0x00086b1b) main_camera4_pane_g6_ParamLimits

0x7696,	// (0x00086b1b) main_camera4_pane_g6

0x76c0,	// (0x00086b45) main_camera4_pane_t2_ParamLimits

0x76c0,	// (0x00086b45) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0008ed6e) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0008ed6e) main_camera4_pane_t

0x76f5,	// (0x00086b7a) aid_touch_area_vid4_ParamLimits

0x76f5,	// (0x00086b7a) aid_touch_area_vid4

0x7749,	// (0x00086bce) main_video4_pane_g5_ParamLimits

0x7749,	// (0x00086bce) main_video4_pane_g5

0x776e,	// (0x00086bf3) vid4_progress_pane_ParamLimits

0x776e,	// (0x00086bf3) vid4_progress_pane

0xda4b,	// (0x0008ced0) main_cset_slider_pane_g18_ParamLimits

0xda4b,	// (0x0008ced0) main_cset_slider_pane_g18

0xe123,	// (0x0008d5a8) cell_cam4_burst_pane_g2_ParamLimits

0xe123,	// (0x0008d5a8) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0008eecd) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0008eecd) cell_cam4_burst_pane_g

0x1887,	// (0x00080d0c) bg_cl_pane_ParamLimits

0x1887,	// (0x00080d0c) bg_cl_pane

0x8538,	// (0x000879bd) cl_header_pane_ParamLimits

0x8538,	// (0x000879bd) cl_header_pane

0x854c,	// (0x000879d1) cl_listscroll_pane_ParamLimits

0x854c,	// (0x000879d1) cl_listscroll_pane

0xe265,	// (0x0008d6ea) bg_cl_pane_g1

0xe26d,	// (0x0008d6f2) bg_cl_pane_g2

0xe275,	// (0x0008d6fa) bg_cl_pane_g3

0xe27d,	// (0x0008d702) bg_cl_pane_g4

0xe285,	// (0x0008d70a) bg_cl_pane_g5

0xe28d,	// (0x0008d712) bg_cl_pane_g6

0xe295,	// (0x0008d71a) bg_cl_pane_g7

0xe29d,	// (0x0008d722) bg_cl_pane_g8

0xe2a5,	// (0x0008d72a) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0008ef08) bg_cl_pane_g

0x855c,	// (0x000879e1) aid_height_cl_leading_ParamLimits

0x855c,	// (0x000879e1) aid_height_cl_leading

0x8568,	// (0x000879ed) aid_height_cl_text_ParamLimits

0x8568,	// (0x000879ed) aid_height_cl_text

0xb28f,	// (0x0008a714) bg_cl_header_pane_ParamLimits

0xb28f,	// (0x0008a714) bg_cl_header_pane

0x8587,	// (0x00087a0c) cl_header_pane_g1_ParamLimits

0x8587,	// (0x00087a0c) cl_header_pane_g1

0x859d,	// (0x00087a22) cl_header_pane_t1_ParamLimits

0x859d,	// (0x00087a22) cl_header_pane_t1

0xe2ad,	// (0x0008d732) cl_list_pane

0xda1e,	// (0x0008cea3) hc_scroll_pane_cp01

0x2b63,	// (0x00081fe8) bg_cl_header_pane_g1

0xd904,	// (0x0008cd89) bg_cl_header_pane_g2

0x2b83,	// (0x00082008) bg_cl_header_pane_g3

0xd914,	// (0x0008cd99) bg_cl_header_pane_g4

0xd90c,	// (0x0008cd91) bg_cl_header_pane_g5

0xdbaf,	// (0x0008d034) bg_cl_header_pane_g6

0xd92c,	// (0x0008cdb1) bg_cl_header_pane_g7

0xd934,	// (0x0008cdb9) bg_cl_header_pane_g8

0xd924,	// (0x0008cda9) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0008ef1b) bg_cl_header_pane_g

0x85b6,	// (0x00087a3b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x85b6,	// (0x00087a3b) hc_cl_list_double_graphic_heading_pane

0x85c7,	// (0x00087a4c) hc_cl_list_single_graphic_pane_ParamLimits

0x85c7,	// (0x00087a4c) hc_cl_list_single_graphic_pane

0x85dd,	// (0x00087a62) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x85dd,	// (0x00087a62) hc_cl_list_single_graphic_pane_g1

0x85e9,	// (0x00087a6e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x85e9,	// (0x00087a6e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0008ef2e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0008ef2e) hc_cl_list_single_graphic_pane_g

0x85fd,	// (0x00087a82) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x85fd,	// (0x00087a82) hc_cl_list_single_graphic_pane_t1

0x85dd,	// (0x00087a62) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x85dd,	// (0x00087a62) hc_cl_list_double_graphic_heading_pane_g1

0x8612,	// (0x00087a97) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8612,	// (0x00087a97) hc_cl_list_double_graphic_heading_pane_g2

0x8626,	// (0x00087aab) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8626,	// (0x00087aab) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0008ef33) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0008ef33) hc_cl_list_double_graphic_heading_pane_g

0x863a,	// (0x00087abf) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x863a,	// (0x00087abf) hc_cl_list_double_graphic_heading_pane_t1

0x864f,	// (0x00087ad4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x864f,	// (0x00087ad4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0008ef3a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0008ef3a) hc_cl_list_double_graphic_heading_pane_t

0xe2be,	// (0x0008d743) vid4_progress_pane_g1

0xe2ce,	// (0x0008d753) vid4_progress_pane_g2

0x8664,	// (0x00087ae9) vid4_progress_pane_g3

0xe2de,	// (0x0008d763) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0008ef3f) vid4_progress_pane_g

0x8676,	// (0x00087afb) vid4_progress_pane_t1

0xe2f6,	// (0x0008d77b) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0008ef4a) vid4_progress_pane_t

0x868e,	// (0x00087b13) wait_bar_pane_cp07

0xc896,	// (0x0008bd1b) blid_firmament_pane_ParamLimits

0xc8d9,	// (0x0008bd5e) popup_blid_sat_info2_window_g1

0xc8fd,	// (0x0008bd82) popup_blid_sat_info2_window_t3

0xc90b,	// (0x0008bd90) popup_blid_sat_info2_window_t4

0xc919,	// (0x0008bd9e) popup_blid_sat_info2_window_t5

0xc927,	// (0x0008bdac) popup_blid_sat_info2_window_t6

0xc937,	// (0x0008bdbc) popup_blid_sat_info2_window_t7

0xc945,	// (0x0008bdca) popup_blid_sat_info2_window_t8

0xc953,	// (0x0008bdd8) popup_blid_sat_info2_window_t9

0xc961,	// (0x0008bde6) popup_blid_sat_info2_window_t10

0xca23,	// (0x0008bea8) aid_firma_cardinal_ParamLimits

0xca37,	// (0x0008bebc) blid_firmament_pane_t1_ParamLimits

0xca4e,	// (0x0008bed3) blid_firmament_pane_t2_ParamLimits

0xca65,	// (0x0008beea) blid_firmament_pane_t3_ParamLimits

0xca7c,	// (0x0008bf01) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0008eb58) blid_firmament_pane_t_ParamLimits

0xca93,	// (0x0008bf18) blid_sat_info_pane_ParamLimits

0xb28f,	// (0x0008a714) main_cam_set_pane_ParamLimits

0x6c7f,	// (0x00086104) aid_size_cell_colour_35_ParamLimits

0x6c9f,	// (0x00086124) aid_size_cell_colour_112_ParamLimits

0x6cbf,	// (0x00086144) aid_size_cell_effect_ParamLimits

0xc588,	// (0x0008ba0d) bg_tb_trans_pane_cp02_ParamLimits

0x3983,	// (0x00082e08) heading_imed_pane_ParamLimits

0x6cdf,	// (0x00086164) listscroll_imed_pane_ParamLimits

0xbbae,	// (0x0008b033) popup_call2_audio_first_window_g5_ParamLimits

0xbbae,	// (0x0008b033) popup_call2_audio_first_window_g5

0x7272,	// (0x000866f7) aid_size_touch_image3_arrow_left_ParamLimits

0x7272,	// (0x000866f7) aid_size_touch_image3_arrow_left

0x729e,	// (0x00086723) aid_size_touch_image3_arrow_right_ParamLimits

0x729e,	// (0x00086723) aid_size_touch_image3_arrow_right

0xe30b,	// (0x0008d790) vid4_progress_pane_t3

0x6ff2,	// (0x00086477) main_hwr_training_symbol_option_pane_ParamLimits

0x6ff2,	// (0x00086477) main_hwr_training_symbol_option_pane

0xd317,	// (0x0008c79c) popup_hwr_training_preview_window_ParamLimits

0xd317,	// (0x0008c79c) popup_hwr_training_preview_window

0x7012,	// (0x00086497) hwr_training_navi_pane_g5_ParamLimits

0x7012,	// (0x00086497) hwr_training_navi_pane_g5

0xd8e0,	// (0x0008cd65) popup_char_count_window

0xb28f,	// (0x0008a714) bg_popup_sub_pane_cp20_ParamLimits

0x81a4,	// (0x00087629) list_vitu2_match_list_pane_ParamLimits

0x81b3,	// (0x00087638) vitu2_page_scroll_pane_ParamLimits

0x81b3,	// (0x00087638) vitu2_page_scroll_pane

0xe331,	// (0x0008d7b6) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe331,	// (0x0008d7b6) list_single_hwr_training_symbol_option_pane

0xe344,	// (0x0008d7c9) list_single_hwr_training_symbol_option_pane_g1

0xe34c,	// (0x0008d7d1) list_single_hwr_training_symbol_option_pane_t1

0xe35a,	// (0x0008d7df) bg_button_pane_cp023

0xe363,	// (0x0008d7e8) bg_button_pane_cp024

0x86bc,	// (0x00087b41) vitu2_page_scroll_pane_g1

0x86c4,	// (0x00087b49) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0008ef51) vitu2_page_scroll_pane_g

0x86cc,	// (0x00087b51) vitu2_page_scroll_pane_t1

0xc7b2,	// (0x0008bc37) popup_char_count_window_g1

0xe396,	// (0x0008d81b) popup_char_count_window_g2

0xe39f,	// (0x0008d824) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0008ef56) popup_char_count_window_g

0xe3a8,	// (0x0008d82d) popup_char_count_window_t1

0xdfb8,	// (0x0008d43d) main_vded2_pane

0xd016,	// (0x0008c49b) aid_size_cell_imed_line

0xd020,	// (0x0008c4a5) grid_imed_line_width_pane

0xd851,	// (0x0008ccd6) vid4_indicators_pane_g4

0xe3b6,	// (0x0008d83b) cell_imed_line_width_pane_ParamLimits

0xe3b6,	// (0x0008d83b) cell_imed_line_width_pane

0xe3ca,	// (0x0008d84f) cell_imed_line_width_pane_g1

0xe3d3,	// (0x0008d858) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0008ef5d) cell_imed_line_width_pane_g

0x86db,	// (0x00087b60) main_vded2_pane_g1_ParamLimits

0x86db,	// (0x00087b60) main_vded2_pane_g1

0x86f1,	// (0x00087b76) main_vded2_pane_g2_ParamLimits

0x86f1,	// (0x00087b76) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0008ef62) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0008ef62) main_vded2_pane_g

0x8703,	// (0x00087b88) vded2_slider_pane_ParamLimits

0x8703,	// (0x00087b88) vded2_slider_pane

0x8713,	// (0x00087b98) aid_size_touch_vded2_end

0x871d,	// (0x00087ba2) aid_size_touch_vded2_playhead

0xe3db,	// (0x0008d860) aid_size_touch_vded2_start

0xe3e3,	// (0x0008d868) vded2_slider_bg_pane

0xe3ec,	// (0x0008d871) vded2_slider_pane_g1

0xe3f5,	// (0x0008d87a) vded2_slider_pane_g2

0x8727,	// (0x00087bac) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0008ef67) vded2_slider_pane_g

0xe3fd,	// (0x0008d882) vded2_slider_bg_pane_g1

0xe406,	// (0x0008d88b) vded2_slider_bg_pane_g2

0xe40f,	// (0x0008d894) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0008ef6e) vded2_slider_bg_pane_g

0x48e6,	// (0x00083d6b) aid_postcard_touch_down_pane_ParamLimits

0x48e6,	// (0x00083d6b) aid_postcard_touch_down_pane

0x48fc,	// (0x00083d81) aid_postcard_touch_up_pane_ParamLimits

0x48fc,	// (0x00083d81) aid_postcard_touch_up_pane

0xdfb8,	// (0x0008d43d) main_blid2_pane

0xc596,	// (0x0008ba1b) popup_blid2_search_window

0xdfb8,	// (0x0008d43d) blid2_gps_pane

0xdfb8,	// (0x0008d43d) blid2_navig_pane

0xdfb8,	// (0x0008d43d) blid2_search_pane

0xdfb8,	// (0x0008d43d) blid2_tripm_pane

0x8732,	// (0x00087bb7) blid2_search_pane_g1_ParamLimits

0x8732,	// (0x00087bb7) blid2_search_pane_g1

0x874c,	// (0x00087bd1) blid2_search_pane_t1_ParamLimits

0x874c,	// (0x00087bd1) blid2_search_pane_t1

0x875e,	// (0x00087be3) aid_size_cell_blid2_gps_ParamLimits

0x875e,	// (0x00087be3) aid_size_cell_blid2_gps

0x8776,	// (0x00087bfb) blid2_gps_pane_g1_ParamLimits

0x8776,	// (0x00087bfb) blid2_gps_pane_g1

0x878a,	// (0x00087c0f) grid_blid2_satellite_pane_ParamLimits

0x878a,	// (0x00087c0f) grid_blid2_satellite_pane

0x87a4,	// (0x00087c29) blid2_navig_pane_g1_ParamLimits

0x87a4,	// (0x00087c29) blid2_navig_pane_g1

0x87b0,	// (0x00087c35) blid2_navig_pane_t1_ParamLimits

0x87b0,	// (0x00087c35) blid2_navig_pane_t1

0x87cb,	// (0x00087c50) blid2_navig_pane_t2_ParamLimits

0x87cb,	// (0x00087c50) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0008ef75) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0008ef75) blid2_navig_pane_t

0x87e6,	// (0x00087c6b) blid2_navig_ring_pane_ParamLimits

0x87e6,	// (0x00087c6b) blid2_navig_ring_pane

0x87ff,	// (0x00087c84) blid2_speed_pane_ParamLimits

0x87ff,	// (0x00087c84) blid2_speed_pane

0x880b,	// (0x00087c90) blid2_tripm_pane_g1_ParamLimits

0x880b,	// (0x00087c90) blid2_tripm_pane_g1

0x8824,	// (0x00087ca9) blid2_tripm_pane_g2_ParamLimits

0x8824,	// (0x00087ca9) blid2_tripm_pane_g2

0x8838,	// (0x00087cbd) blid2_tripm_pane_g3_ParamLimits

0x8838,	// (0x00087cbd) blid2_tripm_pane_g3

0x884c,	// (0x00087cd1) blid2_tripm_pane_g4_ParamLimits

0x884c,	// (0x00087cd1) blid2_tripm_pane_g4

0x8860,	// (0x00087ce5) blid2_tripm_pane_g5_ParamLimits

0x8860,	// (0x00087ce5) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0008ef7a) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0008ef7a) blid2_tripm_pane_g

0x8886,	// (0x00087d0b) blid2_tripm_pane_t1_ParamLimits

0x8886,	// (0x00087d0b) blid2_tripm_pane_t1

0x88a1,	// (0x00087d26) blid2_tripm_pane_t2_ParamLimits

0x88a1,	// (0x00087d26) blid2_tripm_pane_t2

0x88ba,	// (0x00087d3f) blid2_tripm_pane_t3_ParamLimits

0x88ba,	// (0x00087d3f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0008ef87) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0008ef87) blid2_tripm_pane_t

0x8901,	// (0x00087d86) cell_blid2_satellite_pane_ParamLimits

0x8901,	// (0x00087d86) cell_blid2_satellite_pane

0x891f,	// (0x00087da4) cell_blid2_satellite_pane_g1

0xe418,	// (0x0008d89d) cell_blid2_satellite_pane_t1

0xcaa3,	// (0x0008bf28) blid2_speed_pane_g1

0xe426,	// (0x0008d8ab) blid2_speed_pane_t1

0xe434,	// (0x0008d8b9) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0008ef90) blid2_speed_pane_t

0xcaa3,	// (0x0008bf28) blid2_navig_ring_pane_g1

0x8928,	// (0x00087dad) blid2_navig_ring_pane_g2

0x8930,	// (0x00087db5) blid2_navig_ring_pane_g3

0x8938,	// (0x00087dbd) blid2_navig_ring_pane_g4

0x8940,	// (0x00087dc5) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0008ef95) blid2_navig_ring_pane_g

0xdfb8,	// (0x0008d43d) bg_popup_window_pane_cp011

0xe442,	// (0x0008d8c7) popup_blid2_search_window_g1

0xe44a,	// (0x0008d8cf) popup_blid2_search_window_t1

0xe458,	// (0x0008d8dd) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0008efa0) popup_blid2_search_window_t

0x2a2f,	// (0x00081eb4) main_browser_pane_g1

0x1887,	// (0x00080d0c) main_browser_pane_ParamLimits

0xb28f,	// (0x0008a714) bg_button_pane_cp011_ParamLimits

0x7a58,	// (0x00086edd) cell_vitu2_function_pane_g1_ParamLimits

0xc588,	// (0x0008ba0d) bg_popup_sub_pane_cp22_ParamLimits

0x06a3,	// (0x0007fb28) input_focus_pane_cp08_ParamLimits

0x832e,	// (0x000877b3) popup_vitu2_query_button_pane_ParamLimits

0x832e,	// (0x000877b3) popup_vitu2_query_button_pane

0x06ba,	// (0x0007fb3f) popup_vitu2_query_input_button_pane

0xe06d,	// (0x0008d4f2) popup_vitu2_query_window_g1_ParamLimits

0x06c4,	// (0x0007fb49) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0008eea1) popup_vitu2_query_window_g_ParamLimits

0xdfb8,	// (0x0008d43d) bg_button_pane_cp026

0x8948,	// (0x00087dcd) popup_vitu2_query_input_button_pane_g1

0xdfb8,	// (0x0008d43d) bg_button_pane_cp025

0xe466,	// (0x0008d8eb) popup_vitu2_query_button_pane_t1

0x6091,	// (0x00085516) main_mp3_pane_t6

0x609f,	// (0x00085524) popup_slider_window_cp01

0xd7b5,	// (0x0008cc3a) cam4_battery_pane

0xd80e,	// (0x0008cc93) cam4_battery_pane_cp02

0xe2b6,	// (0x0008d73b) cam4_battery_pane_cp01

0xe2b6,	// (0x0008d73b) cam4_battery_pane_cp03

0xcaa3,	// (0x0008bf28) cam4_battery_pane_g1

0xe474,	// (0x0008d8f9) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0008efa5) cam4_battery_pane_g

0xc96f,	// (0x0008bdf4) popup_blid_sat_info2_window_t11

0x4082,	// (0x00083507) aid_size_touch_mv_arrow_left_ParamLimits

0x40ab,	// (0x00083530) aid_size_touch_mv_arrow_right_ParamLimits

0x4109,	// (0x0008358e) navi_pane_g1_ParamLimits

0x4115,	// (0x0008359a) navi_pane_g2_ParamLimits

0x4143,	// (0x000835c8) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008e86a) navi_pane_g_ParamLimits

0x4201,	// (0x00083686) navi_pane_mv_t1_ParamLimits

0x6ceb,	// (0x00086170) grid_imed_effect_pane_ParamLimits

0x25d5,	// (0x00081a5a) aid_placing_vt_slider_lsc

0x25e5,	// (0x00081a6a) aid_placing_vt_slider_prt

0xb28f,	// (0x0008a714) bg_tb_trans_pane_cp01_ParamLimits

0xcc2f,	// (0x0008c0b4) popup_image_details_window_g1_ParamLimits

0xcc42,	// (0x0008c0c7) popup_image_details_window_g2_ParamLimits

0xcc57,	// (0x0008c0dc) popup_image_details_window_g3_ParamLimits

0xcc57,	// (0x0008c0dc) popup_image_details_window_g3

0xf718,	// (0x0008eb9d) popup_image_details_window_g_ParamLimits

0xcc6b,	// (0x0008c0f0) popup_image_details_window_t1_ParamLimits

0xcc7d,	// (0x0008c102) popup_image_details_window_t2_ParamLimits

0xcc96,	// (0x0008c11b) popup_image_details_window_t3_ParamLimits

0xccaa,	// (0x0008c12f) popup_image_details_window_t4_ParamLimits

0xccc5,	// (0x0008c14a) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0008eba4) popup_image_details_window_t_ParamLimits

0x8574,	// (0x000879f9) cl_header_name_pane_ParamLimits

0x8574,	// (0x000879f9) cl_header_name_pane

0x8950,	// (0x00087dd5) cl_header_name_pane_t1_ParamLimits

0x8950,	// (0x00087dd5) cl_header_name_pane_t1

0x8971,	// (0x00087df6) cl_header_name_pane_t2_ParamLimits

0x8971,	// (0x00087df6) cl_header_name_pane_t2

0x89b3,	// (0x00087e38) cl_header_name_pane_t3_ParamLimits

0x89b3,	// (0x00087e38) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0008efaa) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0008efaa) cl_header_name_pane_t

0x41d2,	// (0x00083657) navi_pane_mv_g2_ParamLimits

0xd89d,	// (0x0008cd22) field_vitu2_entry_pane_g1_ParamLimits

0xd8a9,	// (0x0008cd2e) field_vitu2_entry_pane_g2_ParamLimits

0xd8b5,	// (0x0008cd3a) field_vitu2_entry_pane_g3_ParamLimits

0xd8b5,	// (0x0008cd3a) field_vitu2_entry_pane_g3

0xf91b,	// (0x0008eda0) field_vitu2_entry_pane_g_ParamLimits

0xd8e8,	// (0x0008cd6d) cell_vitu2_itu_pane_g1_ParamLimits

0x79ec,	// (0x00086e71) cell_vitu2_itu_pane_g2_ParamLimits

0x79ec,	// (0x00086e71) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0008edac) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0008edac) cell_vitu2_itu_pane_g

0xb28f,	// (0x0008a714) bg_vkb2_func_pane_cp05_ParamLimits

0xb28f,	// (0x0008a714) bg_vkb2_func_pane_cp05

0xb28f,	// (0x0008a714) bg_vkb2_func_pane_cp03

0xb28f,	// (0x0008a714) bg_vkb2_func_pane_cp04

0xb28f,	// (0x0008a714) bg_vkb2_func_pane_cp10_ParamLimits

0xb28f,	// (0x0008a714) bg_vkb2_func_pane_cp10

0x07e1,	// (0x0007fc66) bg_vkb2_func_pane_cp08

0x851e,	// (0x000879a3) bg_vkb2_func_pane_cp06

0x852c,	// (0x000879b1) bg_vkb2_func_pane_cp07

0xe36c,	// (0x0008d7f1) bg_vkb2_func_pane_cp11_ParamLimits

0xe36c,	// (0x0008d7f1) bg_vkb2_func_pane_cp11

0xe381,	// (0x0008d806) bg_vkb2_func_pane_cp12_ParamLimits

0xe381,	// (0x0008d806) bg_vkb2_func_pane_cp12

0xdfb8,	// (0x0008d43d) bg_vkb2_func_pane_cp09

0xd904,	// (0x0008cd89) bg_vkb2_func_pane_g1

0x2b83,	// (0x00082008) bg_vkb2_func_pane_g2

0xd90c,	// (0x0008cd91) bg_vkb2_func_pane_g3

0xd914,	// (0x0008cd99) bg_vkb2_func_pane_g4

0xdbaf,	// (0x0008d034) bg_vkb2_func_pane_g5

0xd92c,	// (0x0008cdb1) bg_vkb2_func_pane_g6

0xd934,	// (0x0008cdb9) bg_vkb2_func_pane_g7

0xd924,	// (0x0008cda9) bg_vkb2_func_pane_g8

0x2b63,	// (0x00081fe8) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0008efb1) bg_vkb2_func_pane_g

0x8874,	// (0x00087cf9) blid2_tripm_pane_g6_ParamLimits

0x8874,	// (0x00087cf9) blid2_tripm_pane_g6

0xd608,	// (0x0008ca8d) mp4_progress_pane_g1

0x88ed,	// (0x00087d72) blid2_tripm_values_pane_ParamLimits

0x88ed,	// (0x00087d72) blid2_tripm_values_pane

0x89e4,	// (0x00087e69) blid2_tripm_values_pane_t1

0x89f2,	// (0x00087e77) blid2_tripm_values_pane_t2

0x8a00,	// (0x00087e85) blid2_tripm_values_pane_t3

0x8a0e,	// (0x00087e93) blid2_tripm_values_pane_t4

0x8a1c,	// (0x00087ea1) blid2_tripm_values_pane_t5

0x8a2a,	// (0x00087eaf) blid2_tripm_values_pane_t6

0x8a38,	// (0x00087ebd) blid2_tripm_values_pane_t7

0x8a46,	// (0x00087ecb) blid2_tripm_values_pane_t8

0x8a54,	// (0x00087ed9) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0008efc4) blid2_tripm_values_pane_t

0x2621,	// (0x00081aa6) call_video_pane_t1_ParamLimits

0x263f,	// (0x00081ac4) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0008e6f3) call_video_pane_t_ParamLimits

0x0492,	// (0x0007f917) msg_header_pane_g1_ParamLimits

0x4850,	// (0x00083cd5) msg_header_pane_g2_ParamLimits

0x4850,	// (0x00083cd5) msg_header_pane_g2

0x0001,

0xf488,	// (0x0008e90d) msg_header_pane_g_ParamLimits

0xf488,	// (0x0008e90d) msg_header_pane_g

0x1887,	// (0x00080d0c) main_clock2_pane_ParamLimits

0x69e9,	// (0x00085e6e) grid_clock2_toolbar_pane_ParamLimits

0x69e9,	// (0x00085e6e) grid_clock2_toolbar_pane

0x69e9,	// (0x00085e6e) listscroll_clock2_pane_ParamLimits

0x69e9,	// (0x00085e6e) listscroll_clock2_pane

0x6ae0,	// (0x00085f65) main_clock2_pane_t3_ParamLimits

0x6ae0,	// (0x00085f65) main_clock2_pane_t3

0x6b04,	// (0x00085f89) main_clock2_pane_t4_ParamLimits

0x6b04,	// (0x00085f89) main_clock2_pane_t4

0xe47e,	// (0x0008d903) cell_clock2_toolbar_pane

0xe486,	// (0x0008d90b) cell_clock2_toolbar_pane_cp01

0xe486,	// (0x0008d90b) cell_clock2_toolbar_pane_cp02

0xe48e,	// (0x0008d913) cell_clock2_toolbar_pane_cp03

0xe496,	// (0x0008d91b) list_clock2_pane

0x3e2c,	// (0x000832b1) scroll_pane_cp10

0xe49e,	// (0x0008d923) list_single_clock2_pane_ParamLimits

0xe49e,	// (0x0008d923) list_single_clock2_pane

0x2164,	// (0x000815e9) list_highlight_pane_cp08

0xe4ab,	// (0x0008d930) list_single_clock2_pane_t1

0xe4b9,	// (0x0008d93e) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0008efd7) list_single_clock2_pane_t

0xdfb8,	// (0x0008d43d) bg_button_pane_cp10

0xe4c7,	// (0x0008d94c) cell_clock2_toolbar_pane_g1

0x4864,	// (0x00083ce9) aid_main_viewer_pane_g1_ParamLimits

0x4864,	// (0x00083ce9) aid_main_viewer_pane_g1

0x4872,	// (0x00083cf7) aid_main_viewer_pane_g2_ParamLimits

0x4872,	// (0x00083cf7) aid_main_viewer_pane_g2

0x4880,	// (0x00083d05) aid_main_viewer_pane_g3_ParamLimits

0x4880,	// (0x00083d05) aid_main_viewer_pane_g3

0x488f,	// (0x00083d14) aid_main_viewer_pane_g4_ParamLimits

0x488f,	// (0x00083d14) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0008e91e) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0008e91e) aid_main_viewer_pane_g

0x52b8,	// (0x0008473d) main_calc_pane_ParamLimits

0x52cc,	// (0x00084751) main_dialer2_pane_ParamLimits

0xdfb8,	// (0x0008d43d) main_cam6_pane

0xdfb8,	// (0x0008d43d) main_vid6_pane

0x69f5,	// (0x00085e7a) listscroll_gen_pane_cp06_ParamLimits

0x69f5,	// (0x00085e7a) listscroll_gen_pane_cp06

0x6b27,	// (0x00085fac) main_clock2_pane_t5_ParamLimits

0x6b27,	// (0x00085fac) main_clock2_pane_t5

0x6b81,	// (0x00086006) aid_call2_pane_cp10_ParamLimits

0x6b93,	// (0x00086018) aid_call_pane_cp10_ParamLimits

0x4011,	// (0x00083496) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4011,	// (0x00083496) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6ba5,	// (0x0008602a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6ba5,	// (0x0008602a) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4011,	// (0x00083496) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0008ec59) popup_clock_analogue_window_cp10_g_ParamLimits

0x6bb7,	// (0x0008603c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x721f,	// (0x000866a4) cell_dialer2_keypad_pane_g2_ParamLimits

0x721f,	// (0x000866a4) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0008ed3f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0008ed3f) cell_dialer2_keypad_pane_g

0x723b,	// (0x000866c0) cell_dialer2_keypad_pane_t1

0x7d75,	// (0x000871fa) main_cset_text2_pane_ParamLimits

0x7d75,	// (0x000871fa) main_cset_text2_pane

0xe259,	// (0x0008d6de) area_vitu2_query_pane_g1_ParamLimits

0x07a8,	// (0x0007fc2d) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0008eef4) area_vitu2_query_pane_g_ParamLimits

0xdc4f,	// (0x0008d0d4) area_vitu2_query_pane_t7_ParamLimits

0xdc4f,	// (0x0008d0d4) area_vitu2_query_pane_t7

0x851e,	// (0x000879a3) bg_button_pane_cp018_ParamLimits

0x852c,	// (0x000879b1) bg_button_pane_cp021_ParamLimits

0x07e1,	// (0x0007fc66) bg_button_pane_cp022_ParamLimits

0x07e1,	// (0x0007fc66) bg_vkb2_func_pane_cp08_ParamLimits

0x851e,	// (0x000879a3) bg_vkb2_func_pane_cp06_ParamLimits

0x852c,	// (0x000879b1) bg_vkb2_func_pane_cp07_ParamLimits

0x07f0,	// (0x0007fc75) input_focus_pane_cp09_ParamLimits

0xe4cf,	// (0x0008d954) cam6_autofocus_pane_ParamLimits

0xe4cf,	// (0x0008d954) cam6_autofocus_pane

0x8a62,	// (0x00087ee7) cam6_image_uncrop_pane_ParamLimits

0x8a62,	// (0x00087ee7) cam6_image_uncrop_pane

0x8a71,	// (0x00087ef6) cam6_indi_pane_ParamLimits

0x8a71,	// (0x00087ef6) cam6_indi_pane

0x8a87,	// (0x00087f0c) cam6_mode_pane_ParamLimits

0x8a87,	// (0x00087f0c) cam6_mode_pane

0x8a99,	// (0x00087f1e) cam6_timer_pane_ParamLimits

0x8a99,	// (0x00087f1e) cam6_timer_pane

0x8aa5,	// (0x00087f2a) cam6_zoom_pane_ParamLimits

0x8aa5,	// (0x00087f2a) cam6_zoom_pane

0x8ab1,	// (0x00087f36) cam6_mode_pane_g1_ParamLimits

0x8ab1,	// (0x00087f36) cam6_mode_pane_g1

0x8ac1,	// (0x00087f46) cam6_mode_pane_g2_ParamLimits

0x8ac1,	// (0x00087f46) cam6_mode_pane_g2

0x8ad1,	// (0x00087f56) cam6_mode_pane_g3_ParamLimits

0x8ad1,	// (0x00087f56) cam6_mode_pane_g3

0x8ae1,	// (0x00087f66) cam6_mode_pane_g4_ParamLimits

0x8ae1,	// (0x00087f66) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0008efdc) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0008efdc) cam6_mode_pane_g

0xe4dd,	// (0x0008d962) bg_tb_trans_pane_cp08_ParamLimits

0xe4dd,	// (0x0008d962) bg_tb_trans_pane_cp08

0xe4eb,	// (0x0008d970) cam6_battery_pane_ParamLimits

0xe4eb,	// (0x0008d970) cam6_battery_pane

0xe501,	// (0x0008d986) cam6_indi_pane_g1_ParamLimits

0xe501,	// (0x0008d986) cam6_indi_pane_g1

0xe513,	// (0x0008d998) cam6_indi_pane_g2_ParamLimits

0xe513,	// (0x0008d998) cam6_indi_pane_g2

0xe525,	// (0x0008d9aa) cam6_indi_pane_g3_ParamLimits

0xe525,	// (0x0008d9aa) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0008efe5) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0008efe5) cam6_indi_pane_g

0xe537,	// (0x0008d9bc) cam6_indi_pane_t1_ParamLimits

0xe537,	// (0x0008d9bc) cam6_indi_pane_t1

0x8af1,	// (0x00087f76) cam6_autofocus_pane_g1

0x8af9,	// (0x00087f7e) cam6_autofocus_pane_g2

0x8b01,	// (0x00087f86) cam6_autofocus_pane_g3

0x8b09,	// (0x00087f8e) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0008efec) cam6_autofocus_pane_g

0xe55d,	// (0x0008d9e2) cam6_timer_pane_g1

0xe565,	// (0x0008d9ea) cam6_timer_pane_t1

0xe573,	// (0x0008d9f8) cam6_zoom_cont_pane

0xe57b,	// (0x0008da00) cam6_zoom_pane_g1

0xe583,	// (0x0008da08) cam6_zoom_pane_g2

0x8b11,	// (0x00087f96) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0008eff5) cam6_zoom_pane_g

0xcaa3,	// (0x0008bf28) cam6_battery_pane_g1

0xcaa3,	// (0x0008bf28) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0008eb61) cam6_battery_pane_g

0xe58b,	// (0x0008da10) cam6_zoom_cont_pane_g1

0xe594,	// (0x0008da19) cam6_zoom_cont_pane_g2

0xe59d,	// (0x0008da22) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0008effc) cam6_zoom_cont_pane_g

0x8b2e,	// (0x00087fb3) cam6_mode_pane_cp_ParamLimits

0x8b2e,	// (0x00087fb3) cam6_mode_pane_cp

0x8aa5,	// (0x00087f2a) cam6_zoom_pane_cp_ParamLimits

0x8aa5,	// (0x00087f2a) cam6_zoom_pane_cp

0x8b40,	// (0x00087fc5) vid6_image_uncrop_cif_pane_ParamLimits

0x8b40,	// (0x00087fc5) vid6_image_uncrop_cif_pane

0x8b50,	// (0x00087fd5) vid6_image_uncrop_nhd_pane_ParamLimits

0x8b50,	// (0x00087fd5) vid6_image_uncrop_nhd_pane

0x8a62,	// (0x00087ee7) vid6_image_uncrop_vga_pane_ParamLimits

0x8a62,	// (0x00087ee7) vid6_image_uncrop_vga_pane

0x8b5f,	// (0x00087fe4) vid6_image_uncrop_wvga_pane_ParamLimits

0x8b5f,	// (0x00087fe4) vid6_image_uncrop_wvga_pane

0x8b6e,	// (0x00087ff3) vid6_indi_pane_ParamLimits

0x8b6e,	// (0x00087ff3) vid6_indi_pane

0xe4dd,	// (0x0008d962) bg_tb_trans_pane_cp09_ParamLimits

0xe4dd,	// (0x0008d962) bg_tb_trans_pane_cp09

0xe5b5,	// (0x0008da3a) cam6_battery_pane_cp_ParamLimits

0xe5b5,	// (0x0008da3a) cam6_battery_pane_cp

0xe5c1,	// (0x0008da46) vid6_indi_pane_g1_ParamLimits

0xe5c1,	// (0x0008da46) vid6_indi_pane_g1

0xe5d3,	// (0x0008da58) vid6_indi_pane_g2_ParamLimits

0xe5d3,	// (0x0008da58) vid6_indi_pane_g2

0xe5e5,	// (0x0008da6a) vid6_indi_pane_g3_ParamLimits

0xe5e5,	// (0x0008da6a) vid6_indi_pane_g3

0xe5fa,	// (0x0008da7f) vid6_indi_pane_g4_ParamLimits

0xe5fa,	// (0x0008da7f) vid6_indi_pane_g4

0xe60f,	// (0x0008da94) vid6_indi_pane_g5_ParamLimits

0xe60f,	// (0x0008da94) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0008f003) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0008f003) vid6_indi_pane_g

0xe629,	// (0x0008daae) vid6_indi_pane_t1_ParamLimits

0xe629,	// (0x0008daae) vid6_indi_pane_t1

0xe63f,	// (0x0008dac4) vid6_indi_pane_t2_ParamLimits

0xe63f,	// (0x0008dac4) vid6_indi_pane_t2

0xe667,	// (0x0008daec) vid6_indi_pane_t3_ParamLimits

0xe667,	// (0x0008daec) vid6_indi_pane_t3

0xe68f,	// (0x0008db14) vid6_indi_pane_t4_ParamLimits

0xe68f,	// (0x0008db14) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0008f00e) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0008f00e) vid6_indi_pane_t

0xe6b3,	// (0x0008db38) wait_bar_pane_cp08

0x8b86,	// (0x0008800b) main_cset_text2_pane_t1_ParamLimits

0x8b86,	// (0x0008800b) main_cset_text2_pane_t1

0x8b19,	// (0x00087f9e) listscroll_gen_pane_cp06_t1_ParamLimits

0x8b19,	// (0x00087f9e) listscroll_gen_pane_cp06_t1

0xdfb8,	// (0x0008d43d) main_cam6_set_pane

0xcd0f,	// (0x0008c194) bg_tb_trans_pane_cp06_ParamLimits

0xd7bd,	// (0x0008cc42) cam4_indicators_pane_g1_ParamLimits

0xd7ce,	// (0x0008cc53) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0008ed7c) cam4_indicators_pane_g_ParamLimits

0xd7ec,	// (0x0008cc71) cam4_indicators_pane_t1_ParamLimits

0xb28f,	// (0x0008a714) bg_tb_trans_pane_cp07_ParamLimits

0xd818,	// (0x0008cc9d) vid4_indicators_pane_g1_ParamLimits

0xd82c,	// (0x0008ccb1) vid4_indicators_pane_g2_ParamLimits

0xd840,	// (0x0008ccc5) vid4_indicators_pane_g3_ParamLimits

0xd851,	// (0x0008ccd6) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0008ed8e) vid4_indicators_pane_g_ParamLimits

0xd86f,	// (0x0008ccf4) vid4_indicators_pane_t1_ParamLimits

0xe2be,	// (0x0008d743) vid4_progress_pane_g1_ParamLimits

0xe2ce,	// (0x0008d753) vid4_progress_pane_g2_ParamLimits

0x8664,	// (0x00087ae9) vid4_progress_pane_g3_ParamLimits

0xe2de,	// (0x0008d763) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0008ef3f) vid4_progress_pane_g_ParamLimits

0x8676,	// (0x00087afb) vid4_progress_pane_t1_ParamLimits

0xe2f6,	// (0x0008d77b) vid4_progress_pane_t2_ParamLimits

0xe30b,	// (0x0008d790) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0008ef4a) vid4_progress_pane_t_ParamLimits

0x868e,	// (0x00087b13) wait_bar_pane_cp07_ParamLimits

0x8ba3,	// (0x00088028) main_cam6_set_pane_g2_ParamLimits

0x8ba3,	// (0x00088028) main_cam6_set_pane_g2

0x8bc7,	// (0x0008804c) main_cset6_listscroll_pane_ParamLimits

0x8bc7,	// (0x0008804c) main_cset6_listscroll_pane

0x8be7,	// (0x0008806c) main_cset6_slider_pane_ParamLimits

0x8be7,	// (0x0008806c) main_cset6_slider_pane

0x8bfd,	// (0x00088082) main_cset6_text2_pane_ParamLimits

0x8bfd,	// (0x00088082) main_cset6_text2_pane

0xe6c2,	// (0x0008db47) main_cset6_text_pane

0xe6ca,	// (0x0008db4f) main_cset_list_pane_copy1_ParamLimits

0xe6ca,	// (0x0008db4f) main_cset_list_pane_copy1

0xe6da,	// (0x0008db5f) scroll_pane_cp028_copy1

0x8c0b,	// (0x00088090) cset_list_set_pane_copy1

0x8c1c,	// (0x000880a1) aid_position_infowindow_above_copy1

0x8c24,	// (0x000880a9) aid_position_infowindow_below_copy1

0x8c2c,	// (0x000880b1) cset_list_set_pane_g1_copy1

0x0813,	// (0x0007fc98) cset_list_set_pane_g3_copy1_ParamLimits

0x0813,	// (0x0007fc98) cset_list_set_pane_g3_copy1

0x0822,	// (0x0007fca7) cset_list_set_pane_t1_copy1_ParamLimits

0x0822,	// (0x0007fca7) cset_list_set_pane_t1_copy1

0xb28f,	// (0x0008a714) list_highlight_pane_cp021_copy1_ParamLimits

0xb28f,	// (0x0008a714) list_highlight_pane_cp021_copy1

0xe6e3,	// (0x0008db68) cset6_slider_pane_ParamLimits

0xe6e3,	// (0x0008db68) cset6_slider_pane

0xe70f,	// (0x0008db94) main_cset6_slider_pane_g1_ParamLimits

0xe70f,	// (0x0008db94) main_cset6_slider_pane_g1

0x8c34,	// (0x000880b9) main_cset6_slider_pane_g2_ParamLimits

0x8c34,	// (0x000880b9) main_cset6_slider_pane_g2

0xe737,	// (0x0008dbbc) main_cset6_slider_pane_g3_ParamLimits

0xe737,	// (0x0008dbbc) main_cset6_slider_pane_g3

0x8c5c,	// (0x000880e1) main_cset6_slider_pane_g4_ParamLimits

0x8c5c,	// (0x000880e1) main_cset6_slider_pane_g4

0x8c68,	// (0x000880ed) main_cset6_slider_pane_g5_ParamLimits

0x8c68,	// (0x000880ed) main_cset6_slider_pane_g5

0xda33,	// (0x0008ceb8) main_cset6_slider_pane_g7_ParamLimits

0xda33,	// (0x0008ceb8) main_cset6_slider_pane_g7

0xda3f,	// (0x0008cec4) main_cset6_slider_pane_g8_ParamLimits

0xda3f,	// (0x0008cec4) main_cset6_slider_pane_g8

0x7e22,	// (0x000872a7) main_cset6_slider_pane_g9_ParamLimits

0x7e22,	// (0x000872a7) main_cset6_slider_pane_g9

0x7e2e,	// (0x000872b3) main_cset6_slider_pane_g10_ParamLimits

0x7e2e,	// (0x000872b3) main_cset6_slider_pane_g10

0x7e3a,	// (0x000872bf) main_cset6_slider_pane_g11_ParamLimits

0x7e3a,	// (0x000872bf) main_cset6_slider_pane_g11

0x7e46,	// (0x000872cb) main_cset6_slider_pane_g12_ParamLimits

0x7e46,	// (0x000872cb) main_cset6_slider_pane_g12

0x7e52,	// (0x000872d7) main_cset6_slider_pane_g13_ParamLimits

0x7e52,	// (0x000872d7) main_cset6_slider_pane_g13

0x7e5e,	// (0x000872e3) main_cset6_slider_pane_g14_ParamLimits

0x7e5e,	// (0x000872e3) main_cset6_slider_pane_g14

0x8c74,	// (0x000880f9) main_cset6_slider_pane_g15_ParamLimits

0x8c74,	// (0x000880f9) main_cset6_slider_pane_g15

0x7e82,	// (0x00087307) main_cset6_slider_pane_g16_ParamLimits

0x7e82,	// (0x00087307) main_cset6_slider_pane_g16

0x7e8e,	// (0x00087313) main_cset6_slider_pane_g17_ParamLimits

0x7e8e,	// (0x00087313) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0008f017) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0008f017) main_cset6_slider_pane_g

0xe743,	// (0x0008dbc8) main_cset6_slider_pane_t1_ParamLimits

0xe743,	// (0x0008dbc8) main_cset6_slider_pane_t1

0x8ca4,	// (0x00088129) main_cset6_slider_pane_t2_ParamLimits

0x8ca4,	// (0x00088129) main_cset6_slider_pane_t2

0x8ccf,	// (0x00088154) main_cset6_slider_pane_t3_ParamLimits

0x8ccf,	// (0x00088154) main_cset6_slider_pane_t3

0x8cfa,	// (0x0008817f) main_cset6_slider_pane_t4_ParamLimits

0x8cfa,	// (0x0008817f) main_cset6_slider_pane_t4

0x8d25,	// (0x000881aa) main_cset6_slider_pane_t5_ParamLimits

0x8d25,	// (0x000881aa) main_cset6_slider_pane_t5

0xe784,	// (0x0008dc09) main_cset6_slider_pane_t7_ParamLimits

0xe784,	// (0x0008dc09) main_cset6_slider_pane_t7

0x8d50,	// (0x000881d5) main_cset6_slider_pane_t8_ParamLimits

0x8d50,	// (0x000881d5) main_cset6_slider_pane_t8

0x8d74,	// (0x000881f9) main_cset6_slider_pane_t9_ParamLimits

0x8d74,	// (0x000881f9) main_cset6_slider_pane_t9

0x8d98,	// (0x0008821d) main_cset6_slider_pane_t10_ParamLimits

0x8d98,	// (0x0008821d) main_cset6_slider_pane_t10

0x8dbc,	// (0x00088241) main_cset6_slider_pane_t11_ParamLimits

0x8dbc,	// (0x00088241) main_cset6_slider_pane_t11

0xe7ba,	// (0x0008dc3f) main_cset6_slider_pane_t14_ParamLimits

0xe7ba,	// (0x0008dc3f) main_cset6_slider_pane_t14

0xe7f3,	// (0x0008dc78) main_cset6_slider_pane_t15_ParamLimits

0xe7f3,	// (0x0008dc78) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0008f03c) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0008f03c) main_cset6_slider_pane_t

0xdb47,	// (0x0008cfcc) cset_slider_pane_g1_copy1

0xdb50,	// (0x0008cfd5) cset_slider_pane_g2_copy1

0xdb59,	// (0x0008cfde) cset_slider_pane_g3_copy1

0xdfb8,	// (0x0008d43d) bg_popup_sub_pane_cp011_copy1

0xe82c,	// (0x0008dcb1) main_cset_text_pane_g1_copy1

0xe081,	// (0x0008d506) main_cset_text_pane_t1_copy1

0xe08f,	// (0x0008d514) main_cset_text_pane_t2_copy1

0xe09d,	// (0x0008d522) main_cset_text_pane_t3_copy1

0xe0ab,	// (0x0008d530) main_cset_text_pane_t4_copy1

0xe0b9,	// (0x0008d53e) main_cset_text_pane_t5_copy1

0xe834,	// (0x0008dcb9) main_cset_text_pane_t6_copy1

0xe842,	// (0x0008dcc7) main_cset_text_pane_t7_copy1

0x8b86,	// (0x0008800b) main_cset_text2_pane_t1_copy1

0xb28f,	// (0x0008a714) main_ncimui_pane

0x5516,	// (0x0008499b) popup_query_ncimui_window_ParamLimits

0x5516,	// (0x0008499b) popup_query_ncimui_window

0xcd74,	// (0x0008c1f9) field_cale_ev2_pane_g4_ParamLimits

0xcd74,	// (0x0008c1f9) field_cale_ev2_pane_g4

0x70ff,	// (0x00086584) cell_video_dialer_keypad_pane_g2_ParamLimits

0x70ff,	// (0x00086584) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0008ed1a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0008ed1a) cell_video_dialer_keypad_pane_g

0x7117,	// (0x0008659c) cell_video_dialer_keypad_pane_t1

0xdfb8,	// (0x0008d43d) bg_popup_window_pane_cp012

0x3c82,	// (0x00083107) heading_pane_cp06

0xe86e,	// (0x0008dcf3) ncim_query_content_pane

0xdfb8,	// (0x0008d43d) bg_popup_heading_pane_cp01

0xe876,	// (0x0008dcfb) ncim_heading_pane_t1

0xe884,	// (0x0008dd09) ncim_indicator_popup_pane

0xe896,	// (0x0008dd1b) ncim_query_button_pane

0xe8aa,	// (0x0008dd2f) ncim_query_content_pane_t1

0xe8bc,	// (0x0008dd41) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0008f080) ncim_query_content_pane_t

0xe8f6,	// (0x0008dd7b) ncim_query_list_pane

0xe908,	// (0x0008dd8d) ncim_query_popup_pane

0xe884,	// (0x0008dd09) ncim_indicator_popup_pane_ParamLimits

0x8f24,	// (0x000883a9) ncim_query_content_pane_g1_ParamLimits

0x8f24,	// (0x000883a9) ncim_query_content_pane_g1

0xe8aa,	// (0x0008dd2f) ncim_query_content_pane_t1_ParamLimits

0xe8bc,	// (0x0008dd41) ncim_query_content_pane_t2_ParamLimits

0x8f30,	// (0x000883b5) ncim_query_content_pane_t3_ParamLimits

0x8f30,	// (0x000883b5) ncim_query_content_pane_t3

0x8f58,	// (0x000883dd) ncim_query_content_pane_t4_ParamLimits

0x8f58,	// (0x000883dd) ncim_query_content_pane_t4

0x8f80,	// (0x00088405) ncim_query_content_pane_t5_ParamLimits

0x8f80,	// (0x00088405) ncim_query_content_pane_t5

0xe8ce,	// (0x0008dd53) ncim_query_content_pane_t6_ParamLimits

0xe8ce,	// (0x0008dd53) ncim_query_content_pane_t6

0xfbfb,	// (0x0008f080) ncim_query_content_pane_t_ParamLimits

0xe8f6,	// (0x0008dd7b) ncim_query_list_pane_ParamLimits

0xe908,	// (0x0008dd8d) ncim_query_popup_pane_ParamLimits

0xe91c,	// (0x0008dda1) wait_bar_pane_cp04

0xdfb8,	// (0x0008d43d) input_focus_pane_cp011

0xe924,	// (0x0008dda9) ncim_query_popup_pane_t1

0xe932,	// (0x0008ddb7) ncim_list_query_list_pane_ParamLimits

0xe932,	// (0x0008ddb7) ncim_list_query_list_pane

0xdfb8,	// (0x0008d43d) bg_button_pane_cp027

0xe93f,	// (0x0008ddc4) ncim_query_button_pane_g1

0xdfb8,	// (0x0008d43d) list_highlight_pane_cp012

0xe949,	// (0x0008ddce) ncim_list_query_list_pane_g1

0xe951,	// (0x0008ddd6) ncim_list_query_list_pane_t1

0xd7dd,	// (0x0008cc62) cam4_indicators_pane_g3_ParamLimits

0xd7dd,	// (0x0008cc62) cam4_indicators_pane_g3

0xd85d,	// (0x0008cce2) vid4_indicators_pane_g5_ParamLimits

0xd85d,	// (0x0008cce2) vid4_indicators_pane_g5

0xe2ea,	// (0x0008d76f) vid4_progress_pane_g5_ParamLimits

0xe2ea,	// (0x0008d76f) vid4_progress_pane_g5

0x8e0f,	// (0x00088294) main_ncimui_pane_g1

0x8e78,	// (0x000882fd) ncimui_group_query_pane_ParamLimits

0x8e78,	// (0x000882fd) ncimui_group_query_pane

0x8ec0,	// (0x00088345) ncimui_list_pane_ParamLimits

0x8ec0,	// (0x00088345) ncimui_list_pane

0x8ee7,	// (0x0008836c) ncimui_text_pane_ParamLimits

0x8ee7,	// (0x0008836c) ncimui_text_pane

0x8fa8,	// (0x0008842d) ncimui_text_pane_t1_ParamLimits

0x8fa8,	// (0x0008842d) ncimui_text_pane_t1

0xe95f,	// (0x0008dde4) ncimui_list_single_graphic_pane_ParamLimits

0xe95f,	// (0x0008dde4) ncimui_list_single_graphic_pane

0x8fc6,	// (0x0008844b) ncimui_query_pane_ParamLimits

0x8fc6,	// (0x0008844b) ncimui_query_pane

0xdfb8,	// (0x0008d43d) list_highlight_pane_cp013

0xe96f,	// (0x0008ddf4) ncim_list_query_list_pane_t1_copy1

0xe949,	// (0x0008ddce) ncim_list_single_graphic_pane_g1

0x8fd9,	// (0x0008845e) ncim_query_button_pane_cp01

0x8fe5,	// (0x0008846a) ncim_query_entry_pane_ParamLimits

0x8fe5,	// (0x0008846a) ncim_query_entry_pane

0x8ff8,	// (0x0008847d) ncimui_query_pane_g1

0x9004,	// (0x00088489) ncimui_query_pane_t1_ParamLimits

0x9004,	// (0x00088489) ncimui_query_pane_t1

0xb28f,	// (0x0008a714) input_focus_pane_cp012

0xe97d,	// (0x0008de02) ncim_query_entry_pane_t1

0x1887,	// (0x00080d0c) main_im_pane_ParamLimits

0xb28f,	// (0x0008a714) main_mobtv_pane_ParamLimits

0xb28f,	// (0x0008a714) main_mobtv_pane

0x8c8c,	// (0x00088111) main_cset6_slider_pane_g18_ParamLimits

0x8c8c,	// (0x00088111) main_cset6_slider_pane_g18

0x8c98,	// (0x0008811d) main_cset6_slider_pane_g19_ParamLimits

0x8c98,	// (0x0008811d) main_cset6_slider_pane_g19

0xe98f,	// (0x0008de14) bg_main_mobtv_pane_ParamLimits

0xe98f,	// (0x0008de14) bg_main_mobtv_pane

0x901d,	// (0x000884a2) main_mobtv_info_pane

0x9026,	// (0x000884ab) main_mobtv_loading_pane_ParamLimits

0x9026,	// (0x000884ab) main_mobtv_loading_pane

0xe99d,	// (0x0008de22) main_mobtv_pg_channel_list_pane

0xe9a7,	// (0x0008de2c) main_mobtv_pg_hdr_pane

0x9033,	// (0x000884b8) main_mobtv_programe_curr_pane_ParamLimits

0x9033,	// (0x000884b8) main_mobtv_programe_curr_pane

0x9040,	// (0x000884c5) main_mobtv_programe_next_pane_ParamLimits

0x9040,	// (0x000884c5) main_mobtv_programe_next_pane

0xe9b0,	// (0x0008de35) popup_mobtv_noti_window

0xcaa3,	// (0x0008bf28) main_tv_pg_hdr_pane_g1

0xe9b8,	// (0x0008de3d) main_tv_pg_hdr_pane_g2

0xe9c0,	// (0x0008de45) main_tv_pg_hdr_pane_g3

0xe9c8,	// (0x0008de4d) main_tv_pg_hdr_pane_g4

0xe9d0,	// (0x0008de55) main_tv_pg_hdr_pane_g5

0xe9da,	// (0x0008de5f) main_tv_pg_hdr_pane_g6

0xe9e4,	// (0x0008de69) main_tv_pg_hdr_pane_g7

0xe9ee,	// (0x0008de73) main_tv_pg_hdr_pane_g8

0xe9f8,	// (0x0008de7d) main_tv_pg_hdr_pane_g9

0xea02,	// (0x0008de87) main_tv_pg_hdr_pane_g10

0xea0c,	// (0x0008de91) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0008f08d) main_tv_pg_hdr_pane_g

0xea16,	// (0x0008de9b) main_tv_pg_hdr_pane_t1

0xea24,	// (0x0008dea9) main_tv_pg_hdr_pane_t2

0xea32,	// (0x0008deb7) main_tv_pg_hdr_pane_t3

0xea42,	// (0x0008dec7) main_tv_pg_hdr_pane_t4

0xea52,	// (0x0008ded7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0008f0a4) main_tv_pg_hdr_pane_t

0xea62,	// (0x0008dee7) single_mobtv_pg_channel_pane_ParamLimits

0xea62,	// (0x0008dee7) single_mobtv_pg_channel_pane

0xea74,	// (0x0008def9) single_mobtv_pg_channel_table_pane

0xea7d,	// (0x0008df02) single_mobtv_pg_channel_thumb_pane

0xea86,	// (0x0008df0b) single_tv_pg_channel_pane_g1

0xea8f,	// (0x0008df14) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0008f0af) single_tv_pg_channel_pane_g

0xcd0f,	// (0x0008c194) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcd0f,	// (0x0008c194) bg_single_mobtv_pg_channel_thumb_pane

0xea98,	// (0x0008df1d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xea98,	// (0x0008df1d) single_mobtv_pg_channel_thumb_pane_g1

0xeaa6,	// (0x0008df2b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xeaa6,	// (0x0008df2b) single_mobtv_pg_channel_thumb_pane_g2

0xeab2,	// (0x0008df37) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xeab2,	// (0x0008df37) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0008f0b4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0008f0b4) single_mobtv_pg_channel_thumb_pane_g

0xeabe,	// (0x0008df43) single_mobtv_pg_channel_thumb_pane_t1

0xeacc,	// (0x0008df51) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0008f0bb) single_mobtv_pg_channel_thumb_pane_t

0xcaa3,	// (0x0008bf28) bg_single_mobtv_pg_channel_table_pane_g1

0xcaa3,	// (0x0008bf28) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0008eb61) bg_single_mobtv_pg_channel_table_pane_g

0xeada,	// (0x0008df5f) single_mobtv_pg_channel_table_pane_t1

0xeae8,	// (0x0008df6d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0008f0c0) single_mobtv_pg_channel_table_pane_t

0x9055,	// (0x000884da) main_mobtv_info_pane_g1_ParamLimits

0x9055,	// (0x000884da) main_mobtv_info_pane_g1

0x9073,	// (0x000884f8) main_mobtv_info_pane_t1_ParamLimits

0x9073,	// (0x000884f8) main_mobtv_info_pane_t1

0x90eb,	// (0x00088570) main_mobtv_info_pane_t2_ParamLimits

0x90eb,	// (0x00088570) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0008f0ca) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0008f0ca) main_mobtv_info_pane_t

0x917a,	// (0x000885ff) wait_bar_pane_cp05

0x918c,	// (0x00088611) main_mobtv_loading_pane_g1_ParamLimits

0x918c,	// (0x00088611) main_mobtv_loading_pane_g1

0x919f,	// (0x00088624) main_mobtv_loading_pane_g2_ParamLimits

0x919f,	// (0x00088624) main_mobtv_loading_pane_g2

0x91ab,	// (0x00088630) main_mobtv_loading_pane_g3_ParamLimits

0x91ab,	// (0x00088630) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0008f0d1) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0008f0d1) main_mobtv_loading_pane_g

0xeaf6,	// (0x0008df7b) main_mobtv_loading_pane_t1_ParamLimits

0xeaf6,	// (0x0008df7b) main_mobtv_loading_pane_t1

0xeb0e,	// (0x0008df93) main_mobtv_loading_pane_t2_ParamLimits

0xeb0e,	// (0x0008df93) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0008f0d8) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0008f0d8) main_mobtv_loading_pane_t

0x91be,	// (0x00088643) wait_bar_pane_cp06_ParamLimits

0x91be,	// (0x00088643) wait_bar_pane_cp06

0xeb32,	// (0x0008dfb7) main_mobtv_programe_curr_pane_t1

0xeb40,	// (0x0008dfc5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0008f0dd) main_mobtv_programe_curr_pane_t

0xeb4e,	// (0x0008dfd3) main_mobtv_programe_next_pane_t1

0xeb5c,	// (0x0008dfe1) main_mobtv_programe_next_pane_t2

0xeb6a,	// (0x0008dfef) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0008f0e2) main_mobtv_programe_next_pane_t

0xdfb8,	// (0x0008d43d) bg_popup_mobtv_noti_window_pane

0xeb78,	// (0x0008dffd) popup_mobtv_noti_window_g1

0xeb80,	// (0x0008e005) popup_mobtv_noti_window_t1

0xeb8e,	// (0x0008e013) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0008f0e9) popup_mobtv_noti_window_t

0xcaa3,	// (0x0008bf28) bg_popup_mobtv_noti_window_pane_g1

0xdfb8,	// (0x0008d43d) sc_clock_pane

0xdfb8,	// (0x0008d43d) main_fs_bigclock_pane

0x88d7,	// (0x00087d5c) blid2_tripm_pane_t4_ParamLimits

0x88d7,	// (0x00087d5c) blid2_tripm_pane_t4

0x91cd,	// (0x00088652) sc_clock_pane_g1_ParamLimits

0x91cd,	// (0x00088652) sc_clock_pane_g1

0x91df,	// (0x00088664) sc_clock_pane_t1_ParamLimits

0x91df,	// (0x00088664) sc_clock_pane_t1

0x9201,	// (0x00088686) sc_clock_pane_t2_ParamLimits

0x9201,	// (0x00088686) sc_clock_pane_t2

0x9219,	// (0x0008869e) sc_clock_pane_t3_ParamLimits

0x9219,	// (0x0008869e) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0008f0ee) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0008f0ee) sc_clock_pane_t

0xa3e3,	// (0x00089868) main_fs_bigclock_indicator_pane_ParamLimits

0xa3e3,	// (0x00089868) main_fs_bigclock_indicator_pane

0x92bf,	// (0x00088744) main_fs_bigclock_pane_g1_ParamLimits

0x92bf,	// (0x00088744) main_fs_bigclock_pane_g1

0xa3ef,	// (0x00089874) main_fs_bigclock_pane_t1_ParamLimits

0xa3ef,	// (0x00089874) main_fs_bigclock_pane_t1

0xa401,	// (0x00089886) main_fs_bigclock_pane_t2_ParamLimits

0xa401,	// (0x00089886) main_fs_bigclock_pane_t2

0xa415,	// (0x0008989a) main_fs_bigclock_pane_t3_ParamLimits

0xa415,	// (0x0008989a) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0008f2f8) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0008f2f8) main_fs_bigclock_pane_t

0xa427,	// (0x000898ac) main_fs_bigclock_indicator_pane_g1

0xe89e,	// (0x0008dd23) ncim_query_content_pane_g2_ParamLimits

0xe89e,	// (0x0008dd23) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0008f07b) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0008f07b) ncim_query_content_pane_g

0x9232,	// (0x000886b7) sc_clock_pane_t4_ParamLimits

0x9232,	// (0x000886b7) sc_clock_pane_t4

0xb28f,	// (0x0008a714) main_radioblah_pane

0xd723,	// (0x0008cba8) cell_call4_button_pane_t1_copy1_ParamLimits

0xd723,	// (0x0008cba8) cell_call4_button_pane_t1_copy1

0x8e27,	// (0x000882ac) main_ncimui_pane_t1_ParamLimits

0x8e27,	// (0x000882ac) main_ncimui_pane_t1

0x8e41,	// (0x000882c6) main_ncimui_pane_t2_ParamLimits

0x8e41,	// (0x000882c6) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0008f074) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0008f074) main_ncimui_pane_t

0x9428,	// (0x000888ad) main_radioblah_anim_pane_ParamLimits

0x9428,	// (0x000888ad) main_radioblah_anim_pane

0x9439,	// (0x000888be) main_radioblah_info_pane_ParamLimits

0x9439,	// (0x000888be) main_radioblah_info_pane

0x945f,	// (0x000888e4) main_radioblah_pane_t1_ParamLimits

0x945f,	// (0x000888e4) main_radioblah_pane_t1

0x947b,	// (0x00088900) main_radioblah_pane_t2_ParamLimits

0x947b,	// (0x00088900) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0008f10f) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0008f10f) main_radioblah_pane_t

0x94c3,	// (0x00088948) main_radioblah_rocker_ctrl_pane_ParamLimits

0x94c3,	// (0x00088948) main_radioblah_rocker_ctrl_pane

0x951b,	// (0x000889a0) main_radioblah_info_pane_t1_ParamLimits

0x951b,	// (0x000889a0) main_radioblah_info_pane_t1

0x9555,	// (0x000889da) main_radioblah_info_pane_t2_ParamLimits

0x9555,	// (0x000889da) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0008f118) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0008f118) main_radioblah_info_pane_t

0xcaa3,	// (0x0008bf28) main_radioblah_rocker_ctrl_pane_g1

0x9605,	// (0x00088a8a) main_radioblah_rocker_ctrl_pane_g2

0x960d,	// (0x00088a92) main_radioblah_rocker_ctrl_pane_g3

0x9615,	// (0x00088a9a) main_radioblah_rocker_ctrl_pane_g4

0x961d,	// (0x00088aa2) main_radioblah_rocker_ctrl_pane_g5

0x9625,	// (0x00088aaa) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0008f121) main_radioblah_rocker_ctrl_pane_g

0x8b86,	// (0x0008800b) main_cset_text2_pane_t1_copy1_ParamLimits

0xd7ad,	// (0x0008cc32) cam4_image_uncrop_qvga_pane

0xd806,	// (0x0008cc8b) vid4_image_uncrop_qcif_pane

0xe4cf,	// (0x0008d954) cam6_image_uncrop_qvga_pane_ParamLimits

0xe4cf,	// (0x0008d954) cam6_image_uncrop_qvga_pane

0xe5a5,	// (0x0008da2a) vid6_image_uncrop_qcif_pane_ParamLimits

0xe5a5,	// (0x0008da2a) vid6_image_uncrop_qcif_pane

0xdfb8,	// (0x0008d43d) bg_popup_preview_window_pane_cp03

0xe850,	// (0x0008dcd5) list_cset_text2_pane

0xe858,	// (0x0008dcdd) main_cset6_text2_pane_g1

0xe860,	// (0x0008dce5) main_cset6_text2_pane_t1

0x962d,	// (0x00088ab2) list_cset_text2_pane_t1_ParamLimits

0x962d,	// (0x00088ab2) list_cset_text2_pane_t1

0xb28f,	// (0x0008a714) main_radioblah_pane_ParamLimits

0x9166,	// (0x000885eb) main_mobtv_info_pane_t3_ParamLimits

0x9166,	// (0x000885eb) main_mobtv_info_pane_t3

0x944d,	// (0x000888d2) main_radioblah_pane_g1

0x94eb,	// (0x00088970) main_radioblah_info_pane_g1

0x95aa,	// (0x00088a2f) main_radioblah_info_pane_t3_ParamLimits

0x95aa,	// (0x00088a2f) main_radioblah_info_pane_t3

0x3733,	// (0x00082bb8) highlight_cell_cale_month_pane_ParamLimits

0x3733,	// (0x00082bb8) highlight_cell_cale_month_pane

0xdfb8,	// (0x0008d43d) main_phob_fisheye_pane

0xce43,	// (0x0008c2c8) scroll_pane_cp0031_ParamLimits

0xce43,	// (0x0008c2c8) scroll_pane_cp0031

0xe6b3,	// (0x0008db38) wait_bar_pane_cp08_ParamLimits

0x8c0b,	// (0x00088090) cset_list_set_pane_copy1_ParamLimits

0x9646,	// (0x00088acb) highlight_cell_cale_month_pane_g1

0x964e,	// (0x00088ad3) highlight_cell_cale_month_pane_t1

0xe2ad,	// (0x0008d732) list_gen_pane_cp01

0xda1e,	// (0x0008cea3) scroll_pane_01

0xebb7,	// (0x0008e03c) list_single_double_fisheye_pane

0x08ec,	// (0x0007fd71) list_double_fisheye_pane_g1_ParamLimits

0x08ec,	// (0x0007fd71) list_double_fisheye_pane_g1

0x08f8,	// (0x0007fd7d) list_double_fisheye_pane_g2_ParamLimits

0x08f8,	// (0x0007fd7d) list_double_fisheye_pane_g2

0x965c,	// (0x00088ae1) list_double_fisheye_pane_g3_ParamLimits

0x965c,	// (0x00088ae1) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0008f12e) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0008f12e) list_double_fisheye_pane_g

0x0929,	// (0x0007fdae) list_double_fisheye_pane_t1_ParamLimits

0x0929,	// (0x0007fdae) list_double_fisheye_pane_t1

0x0944,	// (0x0007fdc9) list_double_fisheye_pane_t2_ParamLimits

0x0944,	// (0x0007fdc9) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0008f139) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0008f139) list_double_fisheye_pane_t

0xdfb8,	// (0x0008d43d) main_call5_pane

0x925d,	// (0x000886e2) sc_swipe_pane_ParamLimits

0x925d,	// (0x000886e2) sc_swipe_pane

0x967b,	// (0x00088b00) call5_image_pane_ParamLimits

0x967b,	// (0x00088b00) call5_image_pane

0x9698,	// (0x00088b1d) call5_swipe_1_pane_ParamLimits

0x9698,	// (0x00088b1d) call5_swipe_1_pane

0x96ab,	// (0x00088b30) call5_swipe_2_pane_ParamLimits

0x96ab,	// (0x00088b30) call5_swipe_2_pane

0x96d6,	// (0x00088b5b) popup_call5_audio_first_window_ParamLimits

0x96d6,	// (0x00088b5b) popup_call5_audio_first_window

0xcd0f,	// (0x0008c194) call5_swipe_1_pane_g1_ParamLimits

0xcd0f,	// (0x0008c194) call5_swipe_1_pane_g1

0x96e7,	// (0x00088b6c) call5_swipe_1_pane_g2_ParamLimits

0x96e7,	// (0x00088b6c) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0008f13e) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0008f13e) call5_swipe_1_pane_g

0x96f3,	// (0x00088b78) call5_swipe_1_pane_t1_ParamLimits

0x96f3,	// (0x00088b78) call5_swipe_1_pane_t1

0xcd0f,	// (0x0008c194) call5_swipe_2_pane_g1_ParamLimits

0xcd0f,	// (0x0008c194) call5_swipe_2_pane_g1

0x9708,	// (0x00088b8d) call5_swipe_2_pane_g2_ParamLimits

0x9708,	// (0x00088b8d) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0008f143) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0008f143) call5_swipe_2_pane_g

0x9714,	// (0x00088b99) call5_swipe_2_pane_t1_ParamLimits

0x9714,	// (0x00088b99) call5_swipe_2_pane_t1

0x9729,	// (0x00088bae) sc_swipe_pane_g1_ParamLimits

0x9729,	// (0x00088bae) sc_swipe_pane_g1

0x9736,	// (0x00088bbb) sc_swipe_pane_g2_ParamLimits

0x9736,	// (0x00088bbb) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0008f148) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0008f148) sc_swipe_pane_g

0x9742,	// (0x00088bc7) sc_swipe_pane_t1_ParamLimits

0x9742,	// (0x00088bc7) sc_swipe_pane_t1

0xdfb8,	// (0x0008d43d) main_cmail_launcher_pane

0x9757,	// (0x00088bdc) aid_size_cell_cmail_l_ParamLimits

0x9757,	// (0x00088bdc) aid_size_cell_cmail_l

0x9771,	// (0x00088bf6) grid_cmail_l_pane_ParamLimits

0x9771,	// (0x00088bf6) grid_cmail_l_pane

0x978c,	// (0x00088c11) cell_cmail_l_pane_ParamLimits

0x978c,	// (0x00088c11) cell_cmail_l_pane

0x97b2,	// (0x00088c37) cell_cmail_l_pane_g1_ParamLimits

0x97b2,	// (0x00088c37) cell_cmail_l_pane_g1

0x97be,	// (0x00088c43) cell_cmail_l_pane_t1_ParamLimits

0x97be,	// (0x00088c43) cell_cmail_l_pane_t1

0x97d4,	// (0x00088c59) cell_cmail_l_pane_t2_ParamLimits

0x97d4,	// (0x00088c59) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0008f14d) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0008f14d) cell_cmail_l_pane_t

0xb28f,	// (0x0008a714) grid_highlight_pane_cp018_ParamLimits

0xb28f,	// (0x0008a714) grid_highlight_pane_cp018

0x11c3,	// (0x00080648) main2_pane_ParamLimits

0x11c3,	// (0x00080648) main2_pane

0x1aaf,	// (0x00080f34) popup_sp_fs_action_menu_bg_pane_g1

0x1ab7,	// (0x00080f3c) popup_sp_fs_action_menu_bg_pane_g2

0x1abf,	// (0x00080f44) popup_sp_fs_action_menu_bg_pane_g3

0x1ac7,	// (0x00080f4c) popup_sp_fs_action_menu_bg_pane_g4

0x1acf,	// (0x00080f54) popup_sp_fs_action_menu_bg_pane_g5

0x1ad7,	// (0x00080f5c) popup_sp_fs_action_menu_bg_pane_g6

0x1adf,	// (0x00080f64) popup_sp_fs_action_menu_bg_pane_g7

0x1ae7,	// (0x00080f6c) popup_sp_fs_action_menu_bg_pane_g8

0x1aef,	// (0x00080f74) popup_sp_fs_action_menu_bg_pane_g9

0x1af7,	// (0x00080f7c) popup_sp_fs_action_menu_bg_pane_g10

0x1af7,	// (0x00080f7c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0008e60f) popup_sp_fs_action_menu_bg_pane_g

0x0263,	// (0x0007f6e8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x2_t3_g3_g1

0x2517,	// (0x0008199c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2517,	// (0x0008199c) list_medium_line_x2_t3_g3_g2

0x026f,	// (0x0007f6f4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x026f,	// (0x0007f6f4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008e6bd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008e6bd) list_medium_line_x2_t3_g3_g

0x027b,	// (0x0007f700) list_medium_line_x2_t3_g3_t1_ParamLimits

0x027b,	// (0x0007f700) list_medium_line_x2_t3_g3_t1

0x0290,	// (0x0007f715) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0290,	// (0x0007f715) list_medium_line_x2_t3_g3_t2

0x02a4,	// (0x0007f729) list_medium_line_x2_t3_g3_t3_ParamLimits

0x02a4,	// (0x0007f729) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0008e6c4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0008e6c4) list_medium_line_x2_t3_g3_t

0x0263,	// (0x0007f6e8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x2_t3_g2_g1

0x026f,	// (0x0007f6f4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x026f,	// (0x0007f6f4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008e6cb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008e6cb) list_medium_line_x2_t3_g2_g

0x02b9,	// (0x0007f73e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x02b9,	// (0x0007f73e) list_medium_line_x2_t3_g2_t1

0x02cf,	// (0x0007f754) list_medium_line_x2_t3_g2_t2_ParamLimits

0x02cf,	// (0x0007f754) list_medium_line_x2_t3_g2_t2

0x02a4,	// (0x0007f729) list_medium_line_x2_t3_g2_t3_ParamLimits

0x02a4,	// (0x0007f729) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0008e6d0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0008e6d0) list_medium_line_x2_t3_g2_t

0x0263,	// (0x0007f6e8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x2_t4_g4_g1

0x2523,	// (0x000819a8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2523,	// (0x000819a8) list_medium_line_x2_t4_g4_g2

0x2517,	// (0x0008199c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2517,	// (0x0008199c) list_medium_line_x2_t4_g4_g3

0x02e1,	// (0x0007f766) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02e1,	// (0x0007f766) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0008e6d7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0008e6d7) list_medium_line_x2_t4_g4_g

0x02ed,	// (0x0007f772) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02ed,	// (0x0007f772) list_medium_line_x2_t4_g4_t1

0x0307,	// (0x0007f78c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0307,	// (0x0007f78c) list_medium_line_x2_t4_g4_t2

0x031d,	// (0x0007f7a2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x031d,	// (0x0007f7a2) list_medium_line_x2_t4_g4_t3

0x0332,	// (0x0007f7b7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0332,	// (0x0007f7b7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0008e6e0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0008e6e0) list_medium_line_x2_t4_g4_t

0x0263,	// (0x0007f6e8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x2_t2_g4_g1

0x2523,	// (0x000819a8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2523,	// (0x000819a8) list_medium_line_x2_t2_g4_g2

0x2517,	// (0x0008199c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2517,	// (0x0008199c) list_medium_line_x2_t2_g4_g3

0x026f,	// (0x0007f6f4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x026f,	// (0x0007f6f4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0008e747) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0008e747) list_medium_line_x2_t2_g4_g

0x0344,	// (0x0007f7c9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0344,	// (0x0007f7c9) list_medium_line_x2_t2_g4_t1

0x02a4,	// (0x0007f729) list_medium_line_x2_t2_g4_t2_ParamLimits

0x02a4,	// (0x0007f729) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0008e750) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0008e750) list_medium_line_x2_t2_g4_t

0x0263,	// (0x0007f6e8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x2_t2_g3_g1

0x2517,	// (0x0008199c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2517,	// (0x0008199c) list_medium_line_x2_t2_g3_g2

0x026f,	// (0x0007f6f4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x026f,	// (0x0007f6f4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008e6bd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008e6bd) list_medium_line_x2_t2_g3_g

0x0359,	// (0x0007f7de) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0359,	// (0x0007f7de) list_medium_line_x2_t2_g3_t1

0x02a4,	// (0x0007f729) list_medium_line_x2_t2_g3_t2_ParamLimits

0x02a4,	// (0x0007f729) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0008e755) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0008e755) list_medium_line_x2_t2_g3_t

0x3ab8,	// (0x00082f3d) main_sp_fs_list_pane_ParamLimits

0x3ab8,	// (0x00082f3d) main_sp_fs_list_pane

0xb36f,	// (0x0008a7f4) sp_fs_scroll_pane_ParamLimits

0xb36f,	// (0x0008a7f4) sp_fs_scroll_pane

0x036e,	// (0x0007f7f3) list_medium_line_x2_t3_t1

0x037e,	// (0x0007f803) list_medium_line_x2_t3_t2

0x038c,	// (0x0007f811) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0008e7a0) list_medium_line_x2_t3_t

0x039a,	// (0x0007f81f) list_medium_line_x3_t4_t1

0x03aa,	// (0x0007f82f) list_medium_line_x3_t4_t2

0x03b8,	// (0x0007f83d) list_medium_line_x3_t4_t3

0x038c,	// (0x0007f811) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0008e7a7) list_medium_line_x3_t4_t

0x03c6,	// (0x0007f84b) list_medium_line_x4_t5_t1

0x03d6,	// (0x0007f85b) list_medium_line_x4_t5_t2

0x03b8,	// (0x0007f83d) list_medium_line_x4_t5_t3

0x03e4,	// (0x0007f869) list_medium_line_x4_t5_t4

0x038c,	// (0x0007f811) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0008e7b0) list_medium_line_x4_t5_t

0x0263,	// (0x0007f6e8) list_medium_line_t4_g4_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_t4_g4_g1

0x03f2,	// (0x0007f877) list_medium_line_t4_g4_g2_ParamLimits

0x03f2,	// (0x0007f877) list_medium_line_t4_g4_g2

0x03fe,	// (0x0007f883) list_medium_line_t4_g4_g3_ParamLimits

0x03fe,	// (0x0007f883) list_medium_line_t4_g4_g3

0x026f,	// (0x0007f6f4) list_medium_line_t4_g4_g4_ParamLimits

0x026f,	// (0x0007f6f4) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008e7bb) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008e7bb) list_medium_line_t4_g4_g

0x040a,	// (0x0007f88f) list_medium_line_t4_g4_t1_ParamLimits

0x040a,	// (0x0007f88f) list_medium_line_t4_g4_t1

0x041f,	// (0x0007f8a4) list_medium_line_t4_g4_t2_ParamLimits

0x041f,	// (0x0007f8a4) list_medium_line_t4_g4_t2

0x0434,	// (0x0007f8b9) list_medium_line_t4_g4_t3_ParamLimits

0x0434,	// (0x0007f8b9) list_medium_line_t4_g4_t3

0x02a4,	// (0x0007f729) list_medium_line_t4_g4_t4_ParamLimits

0x02a4,	// (0x0007f729) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0008e7c4) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0008e7c4) list_medium_line_t4_g4_t

0x3df9,	// (0x0008327e) chi_dic_find_pane_g1

0x52e0,	// (0x00084765) main_tport_pane

0x0633,	// (0x0007fab8) list_medium_line_plain_t1

0x0641,	// (0x0007fac6) list_medium_line_t2_g2_g1_ParamLimits

0x0641,	// (0x0007fac6) list_medium_line_t2_g2_g1

0x064d,	// (0x0007fad2) list_medium_line_t2_g2_g2_ParamLimits

0x064d,	// (0x0007fad2) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0008ee85) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0008ee85) list_medium_line_t2_g2_g

0x0659,	// (0x0007fade) list_medium_line_t2_g2_t1_ParamLimits

0x0659,	// (0x0007fade) list_medium_line_t2_g2_t1

0x0673,	// (0x0007faf8) list_medium_line_t2_g2_t2_ParamLimits

0x0673,	// (0x0007faf8) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0008ee8a) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0008ee8a) list_medium_line_t2_g2_t

0xdc73,	// (0x0008d0f8) aid_sp_fs_list_icon_a_sm

0xe320,	// (0x0008d7a5) aid_sp_fs_list_icon_d

0xe328,	// (0x0008d7ad) aid_sp_fs_text_primary

0xdc7b,	// (0x0008d100) aid_sp_fs_text_secondary

0x86a1,	// (0x00087b26) list_medium_line

0x86a1,	// (0x00087b26) list_medium_line_g2

0x86a1,	// (0x00087b26) list_medium_line_g3

0x86a1,	// (0x00087b26) list_medium_line_plain

0x86a1,	// (0x00087b26) list_medium_line_plain_t2

0x86a1,	// (0x00087b26) list_medium_line_plain_t3

0x86a1,	// (0x00087b26) list_medium_line_right_icon

0x86a1,	// (0x00087b26) list_medium_line_right_iconx2

0x86a1,	// (0x00087b26) list_medium_line_t2

0x86a1,	// (0x00087b26) list_medium_line_t2_g2

0x86a1,	// (0x00087b26) list_medium_line_t2_g3

0x86a1,	// (0x00087b26) list_medium_line_t2_right_icon

0x86a1,	// (0x00087b26) list_medium_line_t2_right_iconx2

0x86a1,	// (0x00087b26) list_medium_line_t3

0x86a1,	// (0x00087b26) list_medium_line_t3_g2

0x86a1,	// (0x00087b26) list_medium_line_t3_g3

0x86a1,	// (0x00087b26) list_medium_line_t3_right_iconx2

0x86aa,	// (0x00087b2f) list_medium_line_t4_g4

0x86a1,	// (0x00087b26) list_medium_line_x2

0x86a1,	// (0x00087b26) list_medium_line_x2_t2_g2

0x86a1,	// (0x00087b26) list_medium_line_x2_t2_g3

0x86a1,	// (0x00087b26) list_medium_line_x2_t2_g4

0x86a1,	// (0x00087b26) list_medium_line_x2_t3

0x86a1,	// (0x00087b26) list_medium_line_x2_t3_g2

0x86a1,	// (0x00087b26) list_medium_line_x2_t3_g3

0x86a1,	// (0x00087b26) list_medium_line_x2_t3_g4

0x86a1,	// (0x00087b26) list_medium_line_x2_t4_g2

0x86a1,	// (0x00087b26) list_medium_line_x2_t4_g4

0x86b3,	// (0x00087b38) list_medium_line_x3

0x86b3,	// (0x00087b38) list_medium_line_x3_t4

0x86b3,	// (0x00087b38) list_medium_line_x3_t4_g4

0x86aa,	// (0x00087b2f) list_medium_line_x4_t4

0x86aa,	// (0x00087b2f) list_medium_line_x4_t4_g7

0x86aa,	// (0x00087b2f) list_medium_line_x4_t5

0x07ff,	// (0x0007fc84) list_single_fs_dyc_pane_ParamLimits

0x07ff,	// (0x0007fc84) list_single_fs_dyc_pane

0x0263,	// (0x0007f6e8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x4_t4_g7_g1

0x0837,	// (0x0007fcbc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0837,	// (0x0007fcbc) list_medium_line_x4_t4_g7_g2

0x8de0,	// (0x00088265) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8de0,	// (0x00088265) list_medium_line_x4_t4_g7_g3

0x8def,	// (0x00088274) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8def,	// (0x00088274) list_medium_line_x4_t4_g7_g4

0x0843,	// (0x0007fcc8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0843,	// (0x0007fcc8) list_medium_line_x4_t4_g7_g5

0x0852,	// (0x0007fcd7) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0852,	// (0x0007fcd7) list_medium_line_x4_t4_g7_g6

0x0861,	// (0x0007fce6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0861,	// (0x0007fce6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0008f055) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0008f055) list_medium_line_x4_t4_g7_g

0x086d,	// (0x0007fcf2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x086d,	// (0x0007fcf2) list_medium_line_x4_t4_g7_t1

0x0882,	// (0x0007fd07) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0882,	// (0x0007fd07) list_medium_line_x4_t4_g7_t2

0x0897,	// (0x0007fd1c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0897,	// (0x0007fd1c) list_medium_line_x4_t4_g7_t3

0x08ac,	// (0x0007fd31) list_medium_line_x4_t4_g7_t4_ParamLimits

0x08ac,	// (0x0007fd31) list_medium_line_x4_t4_g7_t4

0x08be,	// (0x0007fd43) list_medium_line_x4_t4_g7_t5_ParamLimits

0x08be,	// (0x0007fd43) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0008f064) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0008f064) list_medium_line_x4_t4_g7_t

0x08d0,	// (0x0007fd55) list_single_dyc_row_pane_ParamLimits

0x08d0,	// (0x0007fd55) list_single_dyc_row_pane

0x9668,	// (0x00088aed) call5_gesture_pane_ParamLimits

0x9668,	// (0x00088aed) call5_gesture_pane

0x96be,	// (0x00088b43) call5_windows_pane_ParamLimits

0x96be,	// (0x00088b43) call5_windows_pane

0x97e6,	// (0x00088c6b) call5_swipe_1_pane_cp_ParamLimits

0x97e6,	// (0x00088c6b) call5_swipe_1_pane_cp

0x97f2,	// (0x00088c77) call5_swipe_2_pane_cp_ParamLimits

0x97f2,	// (0x00088c77) call5_swipe_2_pane_cp

0x2164,	// (0x000815e9) call5_image_pane_cp

0x97fe,	// (0x00088c83) popup_call5_audio_first_window_cp_ParamLimits

0x97fe,	// (0x00088c83) popup_call5_audio_first_window_cp

0x9729,	// (0x00088bae) call5_swipe_1_pane_g1_cp_ParamLimits

0x9729,	// (0x00088bae) call5_swipe_1_pane_g1_cp

0x980c,	// (0x00088c91) call5_swipe_1_pane_g2_cp

0x9742,	// (0x00088bc7) call5_swipe_1_pane_t1_cp_ParamLimits

0x9742,	// (0x00088bc7) call5_swipe_1_pane_t1_cp

0x9729,	// (0x00088bae) call5_swipe_2_pane_g1_cp_ParamLimits

0x9729,	// (0x00088bae) call5_swipe_2_pane_g1_cp

0x9814,	// (0x00088c99) call5_swipe_2_pane_g2_cp

0x981c,	// (0x00088ca1) call5_swipe_2_pane_t1_cp_ParamLimits

0x981c,	// (0x00088ca1) call5_swipe_2_pane_t1_cp

0xb28f,	// (0x0008a714) main_sp_fs_email_pane

0x9831,	// (0x00088cb6) main_sp_fs_listscroll_pane_te

0x983a,	// (0x00088cbf) popup_sp_fs_action_menu_pane_ParamLimits

0x983a,	// (0x00088cbf) popup_sp_fs_action_menu_pane

0xcaa3,	// (0x0008bf28) bg_sp_fs_ctrlbar_pane_g1

0x987e,	// (0x00088d03) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x9887,	// (0x00088d0c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x9890,	// (0x00088d15) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcaa3,	// (0x0008bf28) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0008f152) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc888,	// (0x0008bd0d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc888,	// (0x0008bd0d) bg_sp_fs_ctrlbar_ddmenu_pane

0x9899,	// (0x00088d1e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x9899,	// (0x00088d1e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x98a5,	// (0x00088d2a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x98a5,	// (0x00088d2a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0008f15b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0008f15b) main_sp_fs_ctrlbar_ddmenu_pane_g

0x98b1,	// (0x00088d36) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x98b1,	// (0x00088d36) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0966,	// (0x0007fdeb) list_medium_line_t2_right_icon_g1

0x096e,	// (0x0007fdf3) list_medium_line_t2_right_icon_t1

0x097e,	// (0x0007fe03) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0008f160) list_medium_line_t2_right_icon_t

0xc588,	// (0x0008ba0d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc588,	// (0x0008ba0d) bg_sp_fs_ctrlbar_pane

0x994b,	// (0x00088dd0) main_sp_fs_ctrlbar_button_pane_cp01

0x9955,	// (0x00088dda) main_sp_fs_ctrlbar_ddmenu_pane

0x995f,	// (0x00088de4) main_sp_fs_ctrlbar_pane_g1

0x996b,	// (0x00088df0) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0008f165) main_sp_fs_ctrlbar_pane_g

0x9977,	// (0x00088dfc) main_sp_fs_ctrlbar_pane_t1

0x998c,	// (0x00088e11) main_sp_fs_ctrlbar_pane

0x99cb,	// (0x00088e50) main_sp_fs_listscroll_pane_te_cp01

0x0990,	// (0x0007fe15) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0990,	// (0x0007fe15) popup_sp_fs_action_menu_pane_cp01

0xb28f,	// (0x0008a714) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb28f,	// (0x0008a714) bg_sp_fs_highlight_list_pane_cp01

0xdc84,	// (0x0008d109) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdc84,	// (0x0008d109) sp_fs_action_menu_list_gene_pane_g1

0x99eb,	// (0x00088e70) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x99eb,	// (0x00088e70) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0008f16f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0008f16f) sp_fs_action_menu_list_gene_pane_g

0xdc93,	// (0x0008d118) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdc93,	// (0x0008d118) sp_fs_action_menu_list_gene_pane_t1

0xdcab,	// (0x0008d130) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdcab,	// (0x0008d130) sp_fs_action_menu_list_gene_pane

0x99f8,	// (0x00088e7d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x99f8,	// (0x00088e7d) popup_sp_fs_action_menu_bg_pane

0xdccc,	// (0x0008d151) sp_fs_action_menu_list_pane_ParamLimits

0xdccc,	// (0x0008d151) sp_fs_action_menu_list_pane

0xebc0,	// (0x0008e045) sp_fs_scroll_pane_cp01_ParamLimits

0xebc0,	// (0x0008e045) sp_fs_scroll_pane_cp01

0x09c0,	// (0x0007fe45) list_medium_line_plain_t2_t1

0x09d0,	// (0x0007fe55) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0008f174) list_medium_line_plain_t2_t

0x09e0,	// (0x0007fe65) list_medium_line_plain_t3_t1

0x09f0,	// (0x0007fe75) list_medium_line_plain_t3_t2

0x09fe,	// (0x0007fe83) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0008f179) list_medium_line_plain_t3_t

0x0263,	// (0x0007f6e8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x2_t2_g2_g1

0x026f,	// (0x0007f6f4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x026f,	// (0x0007f6f4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008e6cb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008e6cb) list_medium_line_x2_t2_g2_g

0x040a,	// (0x0007f88f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x040a,	// (0x0007f88f) list_medium_line_x2_t2_g2_t1

0x02a4,	// (0x0007f729) list_medium_line_x2_t2_g2_t2_ParamLimits

0x02a4,	// (0x0007f729) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0008f180) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0008f180) list_medium_line_x2_t2_g2_t

0x0263,	// (0x0007f6e8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x2_t4_g2_g1

0x0a0c,	// (0x0007fe91) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0a0c,	// (0x0007fe91) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0008f185) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0008f185) list_medium_line_x2_t4_g2_g

0x0a1e,	// (0x0007fea3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0a1e,	// (0x0007fea3) list_medium_line_x2_t4_g2_t1

0x0a38,	// (0x0007febd) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0a38,	// (0x0007febd) list_medium_line_x2_t4_g2_t2

0x0a4e,	// (0x0007fed3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0a4e,	// (0x0007fed3) list_medium_line_x2_t4_g2_t3

0x02a4,	// (0x0007f729) list_medium_line_x2_t4_g2_t4_ParamLimits

0x02a4,	// (0x0007f729) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0008f18a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0008f18a) list_medium_line_x2_t4_g2_t

0x0a63,	// (0x0007fee8) list_medium_line_t3_right_iconx2_g1

0x0966,	// (0x0007fdeb) list_medium_line_t3_right_iconx2_g2

0x0a6b,	// (0x0007fef0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0008f193) list_medium_line_t3_right_iconx2_g

0x0a75,	// (0x0007fefa) list_medium_line_t3_right_iconx2_t1

0x0a85,	// (0x0007ff0a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0008f19a) list_medium_line_t3_right_iconx2_t

0x0263,	// (0x0007f6e8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x3_t4_g4_g1

0x2517,	// (0x0008199c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2517,	// (0x0008199c) list_medium_line_x3_t4_g4_g2

0x03f2,	// (0x0007f877) list_medium_line_x3_t4_g4_g3_ParamLimits

0x03f2,	// (0x0007f877) list_medium_line_x3_t4_g4_g3

0x9a06,	// (0x00088e8b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9a06,	// (0x00088e8b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0008f19f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0008f19f) list_medium_line_x3_t4_g4_g

0x0a93,	// (0x0007ff18) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a93,	// (0x0007ff18) list_medium_line_x3_t4_g4_t1

0x0aaa,	// (0x0007ff2f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0aaa,	// (0x0007ff2f) list_medium_line_x3_t4_g4_t2

0x041f,	// (0x0007f8a4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x041f,	// (0x0007f8a4) list_medium_line_x3_t4_g4_t3

0x0ac5,	// (0x0007ff4a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0ac5,	// (0x0007ff4a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0008f1a8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0008f1a8) list_medium_line_x3_t4_g4_t

0x0ae2,	// (0x0007ff67) list_single_dyc_row_text_pane_t1_ParamLimits

0x0ae2,	// (0x0007ff67) list_single_dyc_row_text_pane_t1

0x0b2b,	// (0x0007ffb0) list_single_dyc_row_text_pane_t2_ParamLimits

0x0b2b,	// (0x0007ffb0) list_single_dyc_row_text_pane_t2

0xdcee,	// (0x0008d173) list_single_dyc_row_text_pane_t3_ParamLimits

0xdcee,	// (0x0008d173) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0008f1b1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0008f1b1) list_single_dyc_row_text_pane_t

0xdd12,	// (0x0008d197) list_single_dyc_row_pane_g1_ParamLimits

0xdd12,	// (0x0008d197) list_single_dyc_row_pane_g1

0xdd1e,	// (0x0008d1a3) list_single_dyc_row_pane_g2_ParamLimits

0xdd1e,	// (0x0008d1a3) list_single_dyc_row_pane_g2

0xdd2a,	// (0x0008d1af) list_single_dyc_row_pane_g3_ParamLimits

0xdd2a,	// (0x0008d1af) list_single_dyc_row_pane_g3

0xdd36,	// (0x0008d1bb) list_single_dyc_row_pane_g4_ParamLimits

0xdd36,	// (0x0008d1bb) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0008f1be) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0008f1be) list_single_dyc_row_pane_g

0xdd42,	// (0x0008d1c7) list_single_dyc_row_text_pane_ParamLimits

0xdd42,	// (0x0008d1c7) list_single_dyc_row_text_pane

0xdfb8,	// (0x0008d43d) bg_sp_fs_scroll_pane

0x9a12,	// (0x00088e97) thumb_sp_fs_scroll_pane

0x0641,	// (0x0007fac6) list_medium_line_g1_ParamLimits

0x0641,	// (0x0007fac6) list_medium_line_g1

0x0c60,	// (0x000800e5) list_medium_line_t1_ParamLimits

0x0c60,	// (0x000800e5) list_medium_line_t1

0x0263,	// (0x0007f6e8) list_medium_line_x2_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x2_g1

0x2517,	// (0x0008199c) list_medium_line_x2_g2_ParamLimits

0x2517,	// (0x0008199c) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0008f1c7) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0008f1c7) list_medium_line_x2_g

0xdd61,	// (0x0008d1e6) list_medium_line_x2_t1_ParamLimits

0xdd61,	// (0x0008d1e6) list_medium_line_x2_t1

0x0263,	// (0x0007f6e8) list_medium_line_x3_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x3_g1

0x2517,	// (0x0008199c) list_medium_line_x3_g2_ParamLimits

0x2517,	// (0x0008199c) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0008f1c7) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0008f1c7) list_medium_line_x3_g

0xdd61,	// (0x0008d1e6) list_medium_line_x3_t1_ParamLimits

0xdd61,	// (0x0008d1e6) list_medium_line_x3_t1

0x9a1b,	// (0x00088ea0) thumb_sp_fs_scroll_pane_g1

0x9a24,	// (0x00088ea9) thumb_sp_fs_scroll_pane_g2

0x9a2d,	// (0x00088eb2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0008f1cc) thumb_sp_fs_scroll_pane_g

0x9a1b,	// (0x00088ea0) bg_sp_fs_scroll_pane_g1

0x9a24,	// (0x00088ea9) bg_sp_fs_scroll_pane_g2

0x9a2d,	// (0x00088eb2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0008f1cc) bg_sp_fs_scroll_pane_g

0x0263,	// (0x0007f6e8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0263,	// (0x0007f6e8) list_medium_line_x2_t3_g4_g1

0x2523,	// (0x000819a8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2523,	// (0x000819a8) list_medium_line_x2_t3_g4_g2

0x2517,	// (0x0008199c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2517,	// (0x0008199c) list_medium_line_x2_t3_g4_g3

0x026f,	// (0x0007f6f4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x026f,	// (0x0007f6f4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0008e747) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0008e747) list_medium_line_x2_t3_g4_g

0x0c75,	// (0x000800fa) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c75,	// (0x000800fa) list_medium_line_x2_t3_g4_t1

0x0c8d,	// (0x00080112) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0c8d,	// (0x00080112) list_medium_line_x2_t3_g4_t2

0x02a4,	// (0x0007f729) list_medium_line_x2_t3_g4_t3_ParamLimits

0x02a4,	// (0x0007f729) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0008f1d3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0008f1d3) list_medium_line_x2_t3_g4_t

0x0641,	// (0x0007fac6) list_medium_line_g2_g1_ParamLimits

0x0641,	// (0x0007fac6) list_medium_line_g2_g1

0x064d,	// (0x0007fad2) list_medium_line_g2_g2_ParamLimits

0x064d,	// (0x0007fad2) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0008ee85) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0008ee85) list_medium_line_g2_g

0x0ca7,	// (0x0008012c) list_medium_line_g2_t1_ParamLimits

0x0ca7,	// (0x0008012c) list_medium_line_g2_t1

0x0641,	// (0x0007fac6) list_medium_line_t3_g2_g1_ParamLimits

0x0641,	// (0x0007fac6) list_medium_line_t3_g2_g1

0x064d,	// (0x0007fad2) list_medium_line_t3_g2_g2_ParamLimits

0x064d,	// (0x0007fad2) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0008ee85) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0008ee85) list_medium_line_t3_g2_g

0x0cbc,	// (0x00080141) list_medium_line_t3_g2_t1_ParamLimits

0x0cbc,	// (0x00080141) list_medium_line_t3_g2_t1

0x0cd6,	// (0x0008015b) list_medium_line_t3_g2_t2_ParamLimits

0x0cd6,	// (0x0008015b) list_medium_line_t3_g2_t2

0x0cec,	// (0x00080171) list_medium_line_t3_g2_t3_ParamLimits

0x0cec,	// (0x00080171) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0008f1da) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0008f1da) list_medium_line_t3_g2_t

0x0966,	// (0x0007fdeb) list_medium_line_right_icon_g1

0x0d06,	// (0x0008018b) list_medium_line_right_icon_t1

0x0641,	// (0x0007fac6) list_medium_line_t2_g1_ParamLimits

0x0641,	// (0x0007fac6) list_medium_line_t2_g1

0x0d14,	// (0x00080199) list_medium_line_t2_t1_ParamLimits

0x0d14,	// (0x00080199) list_medium_line_t2_t1

0x0d2e,	// (0x000801b3) list_medium_line_t2_t2_ParamLimits

0x0d2e,	// (0x000801b3) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0008f1e1) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0008f1e1) list_medium_line_t2_t

0x0641,	// (0x0007fac6) list_medium_line_t3_g1_ParamLimits

0x0641,	// (0x0007fac6) list_medium_line_t3_g1

0x0d47,	// (0x000801cc) list_medium_line_t3_t1_ParamLimits

0x0d47,	// (0x000801cc) list_medium_line_t3_t1

0x0d61,	// (0x000801e6) list_medium_line_t3_t2_ParamLimits

0x0d61,	// (0x000801e6) list_medium_line_t3_t2

0x0d77,	// (0x000801fc) list_medium_line_t3_t3_ParamLimits

0x0d77,	// (0x000801fc) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0008f1e6) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0008f1e6) list_medium_line_t3_t

0x0641,	// (0x0007fac6) list_medium_line_g3_g1_ParamLimits

0x0641,	// (0x0007fac6) list_medium_line_g3_g1

0x0d8c,	// (0x00080211) list_medium_line_g3_g2_ParamLimits

0x0d8c,	// (0x00080211) list_medium_line_g3_g2

0x064d,	// (0x0007fad2) list_medium_line_g3_g3_ParamLimits

0x064d,	// (0x0007fad2) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0008f1ed) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0008f1ed) list_medium_line_g3_g

0x0d98,	// (0x0008021d) list_medium_line_g3_t1_ParamLimits

0x0d98,	// (0x0008021d) list_medium_line_g3_t1

0x0641,	// (0x0007fac6) list_medium_line_t2_g3_g1_ParamLimits

0x0641,	// (0x0007fac6) list_medium_line_t2_g3_g1

0x0d8c,	// (0x00080211) list_medium_line_t2_g3_g2_ParamLimits

0x0d8c,	// (0x00080211) list_medium_line_t2_g3_g2

0x064d,	// (0x0007fad2) list_medium_line_t2_g3_g3_ParamLimits

0x064d,	// (0x0007fad2) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0008f1ed) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0008f1ed) list_medium_line_t2_g3_g

0x0dad,	// (0x00080232) list_medium_line_t2_g3_t1_ParamLimits

0x0dad,	// (0x00080232) list_medium_line_t2_g3_t1

0x0dc7,	// (0x0008024c) list_medium_line_t2_g3_t2_ParamLimits

0x0dc7,	// (0x0008024c) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0008f1f4) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0008f1f4) list_medium_line_t2_g3_t

0x0641,	// (0x0007fac6) list_medium_line_t3_g3_g1_ParamLimits

0x0641,	// (0x0007fac6) list_medium_line_t3_g3_g1

0x0d8c,	// (0x00080211) list_medium_line_t3_g3_g2_ParamLimits

0x0d8c,	// (0x00080211) list_medium_line_t3_g3_g2

0x064d,	// (0x0007fad2) list_medium_line_t3_g3_g3_ParamLimits

0x064d,	// (0x0007fad2) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0008f1ed) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0008f1ed) list_medium_line_t3_g3_g

0x0de3,	// (0x00080268) list_medium_line_t3_g3_t1_ParamLimits

0x0de3,	// (0x00080268) list_medium_line_t3_g3_t1

0x0dfc,	// (0x00080281) list_medium_line_t3_g3_t2_ParamLimits

0x0dfc,	// (0x00080281) list_medium_line_t3_g3_t2

0x0e12,	// (0x00080297) list_medium_line_t3_g3_t3_ParamLimits

0x0e12,	// (0x00080297) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0008f1f9) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0008f1f9) list_medium_line_t3_g3_t

0x0a63,	// (0x0007fee8) list_medium_line_right_iconx2_g1

0x0966,	// (0x0007fdeb) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008f200) list_medium_line_right_iconx2_g

0x0e2c,	// (0x000802b1) list_medium_line_right_iconx2_t1

0x0a63,	// (0x0007fee8) list_medium_line_t2_right_iconx2_g1

0x0966,	// (0x0007fdeb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008f200) list_medium_line_t2_right_iconx2_g

0x0e3a,	// (0x000802bf) list_medium_line_t2_right_iconx2_t1

0x0e4a,	// (0x000802cf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0008f205) list_medium_line_t2_right_iconx2_t

0x0e5c,	// (0x000802e1) list_medium_line_x4_t4_t1

0x0e6a,	// (0x000802ef) list_medium_line_x4_t4_t2

0x0e7a,	// (0x000802ff) list_medium_line_x4_t4_t3

0x0e8a,	// (0x0008030f) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0008f20a) list_medium_line_x4_t4_t

0x9a79,	// (0x00088efe) tport_appsw_pane_ParamLimits

0x9a79,	// (0x00088efe) tport_appsw_pane

0x9a91,	// (0x00088f16) tport_contact_pane_ParamLimits

0x9a91,	// (0x00088f16) tport_contact_pane

0x9aa9,	// (0x00088f2e) tport_listscroll_pane_ParamLimits

0x9aa9,	// (0x00088f2e) tport_listscroll_pane

0x9ac3,	// (0x00088f48) cell_tport_appsw_pane_ParamLimits

0x9ac3,	// (0x00088f48) cell_tport_appsw_pane

0xd8b5,	// (0x0008cd3a) tport_appsw_pane_g1_ParamLimits

0xd8b5,	// (0x0008cd3a) tport_appsw_pane_g1

0x9b03,	// (0x00088f88) tport_contact_pane_g1

0xe924,	// (0x0008dda9) tport_contact_pane_t1

0x9b0c,	// (0x00088f91) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0008f213) tport_contact_pane_t

0x9b1a,	// (0x00088f9f) list_tport_pane

0x9b23,	// (0x00088fa8) scroll_pane_cp_030

0x9b34,	// (0x00088fb9) cell_tport_appsw_pane_g1

0x9b44,	// (0x00088fc9) cell_tport_appsw_pane_t1

0x9b52,	// (0x00088fd7) grid_highlight_pane_cp019

0x9b5a,	// (0x00088fdf) list_tport_double_graphic_pane_ParamLimits

0x9b5a,	// (0x00088fdf) list_tport_double_graphic_pane

0xb28f,	// (0x0008a714) list_highlight_pane_cp023_ParamLimits

0xb28f,	// (0x0008a714) list_highlight_pane_cp023

0x9b67,	// (0x00088fec) list_tport_double_graphic_pane_g1_ParamLimits

0x9b67,	// (0x00088fec) list_tport_double_graphic_pane_g1

0x9b74,	// (0x00088ff9) list_tport_double_graphic_pane_t1_ParamLimits

0x9b74,	// (0x00088ff9) list_tport_double_graphic_pane_t1

0x9b89,	// (0x0008900e) list_tport_double_graphic_pane_t2_ParamLimits

0x9b89,	// (0x0008900e) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0008f21f) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0008f21f) list_tport_double_graphic_pane_t

0xdfb8,	// (0x0008d43d) main_cale_note_pane

0x79c4,	// (0x00086e49) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x79c4,	// (0x00086e49) cell_vitu2_function_top_wide_pane_cp01

0x917a,	// (0x000885ff) wait_bar_pane_cp05_ParamLimits

0xb28f,	// (0x0008a714) listscroll_cmail_pane

0x9b9b,	// (0x00089020) list_cmail_pane

0x9bab,	// (0x00089030) list_cmail_body_pane

0x9bc0,	// (0x00089045) list_single_cmail_header_caption_pane

0x9bd6,	// (0x0008905b) list_single_cmail_header_detail_pane_ParamLimits

0x9bd6,	// (0x0008905b) list_single_cmail_header_detail_pane

0x9bff,	// (0x00089084) list_single_cmail_header_caption_pane_t1

0x0e9a,	// (0x0008031f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e9a,	// (0x0008031f) list_single_cmail_header_detail_pane_g1

0xebe6,	// (0x0008e06b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xebe6,	// (0x0008e06b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0008f224) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0008f224) list_single_cmail_header_detail_pane_g

0xdd77,	// (0x0008d1fc) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdd77,	// (0x0008d1fc) list_single_cmail_header_detail_pane_t1

0xddd7,	// (0x0008d25c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xddd7,	// (0x0008d25c) list_single_cmail_header_editor_pane_bg

0xea8f,	// (0x0008df14) list_cmail_body_pane_g1

0x9c23,	// (0x000890a8) list_cmail_body_pane_t1

0xd904,	// (0x0008cd89) list_single_cmail_header_editor_pane_bg_g1

0x2b83,	// (0x00082008) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd914,	// (0x0008cd99) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd90c,	// (0x0008cd91) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdbaf,	// (0x0008d034) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd934,	// (0x0008cdb9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd924,	// (0x0008cda9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd92c,	// (0x0008cdb1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2b63,	// (0x00081fe8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9c31,	// (0x000890b6) calenote_gesture_pane_ParamLimits

0x9c31,	// (0x000890b6) calenote_gesture_pane

0x9c51,	// (0x000890d6) calenote_window_pane_ParamLimits

0x9c51,	// (0x000890d6) calenote_window_pane

0x9c6d,	// (0x000890f2) popup_note_window_cp01

0x9c76,	// (0x000890fb) calenote_swipe_1_pane_ParamLimits

0x9c76,	// (0x000890fb) calenote_swipe_1_pane

0x97f2,	// (0x00088c77) calenote_swipe_2_pane_ParamLimits

0x97f2,	// (0x00088c77) calenote_swipe_2_pane

0x9729,	// (0x00088bae) calenote_swipe_1_pane_g1_ParamLimits

0x9729,	// (0x00088bae) calenote_swipe_1_pane_g1

0x9736,	// (0x00088bbb) calenote_swipe_1_pane_g2_ParamLimits

0x9736,	// (0x00088bbb) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0008f148) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0008f148) calenote_swipe_1_pane_g

0x9c94,	// (0x00089119) calenote_swipe_1_pane_t1_ParamLimits

0x9c94,	// (0x00089119) calenote_swipe_1_pane_t1

0x9729,	// (0x00088bae) calenote_swipe_2_pane_g1_ParamLimits

0x9729,	// (0x00088bae) calenote_swipe_2_pane_g1

0x9cb3,	// (0x00089138) calenote_swipe_2_pane_g2_ParamLimits

0x9cb3,	// (0x00089138) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0008f230) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0008f230) calenote_swipe_2_pane_g

0x9cbf,	// (0x00089144) calenote_swipe_2_pane_t1_ParamLimits

0x9cbf,	// (0x00089144) calenote_swipe_2_pane_t1

0xdfb8,	// (0x0008d43d) main_mup_navstr_pane

0x6691,	// (0x00085b16) main_mup3_pane_t7_ParamLimits

0x6691,	// (0x00085b16) main_mup3_pane_t7

0xd464,	// (0x0008c8e9) main_mp4_pane_g6_ParamLimits

0xd464,	// (0x0008c8e9) main_mp4_pane_g6

0xd68c,	// (0x0008cb11) main_image3_pane_t4_ParamLimits

0xd68c,	// (0x0008cb11) main_image3_pane_t4

0x9ce6,	// (0x0008916b) popup_navstr_preview_pane_ParamLimits

0x9ce6,	// (0x0008916b) popup_navstr_preview_pane

0x9cfa,	// (0x0008917f) scroll_navstr_pane_ParamLimits

0x9cfa,	// (0x0008917f) scroll_navstr_pane

0xdfb8,	// (0x0008d43d) bg_popup_preview_window_pane_cp04

0x9d0e,	// (0x00089193) popup_navstr_preview_pane_t1

0x9d1c,	// (0x000891a1) scroll_navstr_pane_g1_ParamLimits

0x9d1c,	// (0x000891a1) scroll_navstr_pane_g1

0x9d30,	// (0x000891b5) scroll_navstr_pane_t1_ParamLimits

0x9d30,	// (0x000891b5) scroll_navstr_pane_t1

0x9c8b,	// (0x00089110) bg_button_pane_cp014

0x9c8b,	// (0x00089110) bg_button_pane_cp030

0x090c,	// (0x0007fd91) list_double_fisheye_pane_g4_ParamLimits

0x090c,	// (0x0007fd91) list_double_fisheye_pane_g4

0x0918,	// (0x0007fd9d) list_double_fisheye_pane_g5_ParamLimits

0x0918,	// (0x0007fd9d) list_double_fisheye_pane_g5

0xb36f,	// (0x0008a7f4) sp_fs_scroll_pane_cp03

0x995f,	// (0x00088de4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x996b,	// (0x00088df0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0008f165) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9977,	// (0x00088dfc) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9ba3,	// (0x00089028) sp_fs_scroll_pane_cp02

0x1b4c,	// (0x00080fd1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1b4c,	// (0x00080fd1) popup_sp_fs_calendar_preview_list_single_pane

0xdfb8,	// (0x0008d43d) main_cam6_pano_pane

0xb28f,	// (0x0008a714) main_mup3_pane_ParamLimits

0xdfb8,	// (0x0008d43d) main_phacti_pane

0x904d,	// (0x000884d2) bg_button_pane_cp11

0x9067,	// (0x000884ec) main_mobtv_info_pane_g2_ParamLimits

0x9067,	// (0x000884ec) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0008f0c5) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0008f0c5) main_mobtv_info_pane_g

0x9244,	// (0x000886c9) sc_clock_pane_t5_ParamLimits

0x9244,	// (0x000886c9) sc_clock_pane_t5

0x944d,	// (0x000888d2) main_radioblah_pane_g1_ParamLimits

0x9493,	// (0x00088918) main_radioblah_pane_t3_ParamLimits

0x9493,	// (0x00088918) main_radioblah_pane_t3

0x94ab,	// (0x00088930) main_radioblah_pane_t4_ParamLimits

0x94ab,	// (0x00088930) main_radioblah_pane_t4

0x94d9,	// (0x0008895e) main_radioblah_text_pane_ParamLimits

0x94d9,	// (0x0008895e) main_radioblah_text_pane

0x94eb,	// (0x00088970) main_radioblah_info_pane_g1_ParamLimits

0x95be,	// (0x00088a43) main_radioblah_info_pane_t4_ParamLimits

0x95be,	// (0x00088a43) main_radioblah_info_pane_t4

0xb28f,	// (0x0008a714) main_sp_fs_calendar_pane

0x9d47,	// (0x000891cc) main_phacti_pane_g1

0x9d58,	// (0x000891dd) phacti_note_pane_ParamLimits

0x9d58,	// (0x000891dd) phacti_note_pane

0x9d6c,	// (0x000891f1) phacti_term_pane_ParamLimits

0x9d6c,	// (0x000891f1) phacti_term_pane

0x9d81,	// (0x00089206) phacti_note_pane_t1_ParamLimits

0x9d81,	// (0x00089206) phacti_note_pane_t1

0xddee,	// (0x0008d273) phacti_term_pane_g1

0xddf6,	// (0x0008d27b) phacti_term_pane_t1_ParamLimits

0xddf6,	// (0x0008d27b) phacti_term_pane_t1

0x9d98,	// (0x0008921d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x213a,	// (0x000815bf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0008f23a) popup_sp_fs_calendar_preview_list_single_pane_g

0x9da0,	// (0x00089225) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x9da0,	// (0x00089225) popup_sp_fs_calendar_preview_list_single_pane_t1

0x9db6,	// (0x0008923b) aid_popup_sp_fs_bg_corner_pane

0xcaa3,	// (0x0008bf28) popup_sp_fs_calendar_preview_bg_pane_g1

0xdfb8,	// (0x0008d43d) popup_sp_fs_calendar_preview_bg_pane

0x9dbe,	// (0x00089243) popup_sp_fs_calendar_preview_list_pane

0xc588,	// (0x0008ba0d) bg_main_sp_fs_cale_pane_ParamLimits

0xc588,	// (0x0008ba0d) bg_main_sp_fs_cale_pane

0xde20,	// (0x0008d2a5) listscroll_cale_mrui_pane_ParamLimits

0xde20,	// (0x0008d2a5) listscroll_cale_mrui_pane

0xde35,	// (0x0008d2ba) listscroll_sp_fs_schedule_track_pane

0xde3e,	// (0x0008d2c3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xde3e,	// (0x0008d2c3) main_sp_fs_ctrlbar_pane_cp01

0x9e27,	// (0x000892ac) main_sp_fs_ribbon_pane

0xde51,	// (0x0008d2d6) popup_sp_fs_cale_preview_window

0x9e2f,	// (0x000892b4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9e2f,	// (0x000892b4) list_single_sp_fs_schedule_track_pane

0xb28f,	// (0x0008a714) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb28f,	// (0x0008a714) bg_sp_fs_highlight_list_pane_cp03

0x9e42,	// (0x000892c7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9e42,	// (0x000892c7) list_single_sp_fs_schedule_track_pane_g1

0x9e4e,	// (0x000892d3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9e4e,	// (0x000892d3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0008f23f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0008f23f) list_single_sp_fs_schedule_track_pane_g

0x9e5a,	// (0x000892df) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9e5a,	// (0x000892df) list_single_sp_fs_schedule_track_pane_t1

0x9e74,	// (0x000892f9) sp_fs_schedule_track_pane_ParamLimits

0x9e74,	// (0x000892f9) sp_fs_schedule_track_pane

0x9e85,	// (0x0008930a) sp_fs_schedule_track_pane_g1

0x9e8d,	// (0x00089312) sp_fs_schedule_track_pane_g2

0x9e95,	// (0x0008931a) sp_fs_schedule_track_pane_g3

0x9e9d,	// (0x00089322) sp_fs_schedule_track_pane_g4

0x9ea5,	// (0x0008932a) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0008f244) sp_fs_schedule_track_pane_g

0xd904,	// (0x0008cd89) bg_sp_fs_schedule_viewer_highlight_g1

0x2b83,	// (0x00082008) bg_sp_fs_schedule_viewer_highlight_g2

0xd90c,	// (0x0008cd91) bg_sp_fs_schedule_viewer_highlight_g3

0xd914,	// (0x0008cd99) bg_sp_fs_schedule_viewer_highlight_g4

0xdbaf,	// (0x0008d034) bg_sp_fs_schedule_viewer_highlight_g5

0xd924,	// (0x0008cda9) bg_sp_fs_schedule_viewer_highlight_g6

0xd92c,	// (0x0008cdb1) bg_sp_fs_schedule_viewer_highlight_g7

0xd934,	// (0x0008cdb9) bg_sp_fs_schedule_viewer_highlight_g8

0x2b63,	// (0x00081fe8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0008f24f) bg_sp_fs_schedule_viewer_highlight_g

0xdfb8,	// (0x0008d43d) bg_main_sp_fs_ribbon_pane

0x9ead,	// (0x00089332) main_sp_fs_ribbon_pane_g1

0x9eb6,	// (0x0008933b) main_sp_fs_ribbon_pane_t1

0x9ec5,	// (0x0008934a) main_sp_fs_ribbon_pane_t2

0x9ed4,	// (0x00089359) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0008f262) main_sp_fs_ribbon_pane_t

0x9ee3,	// (0x00089368) main_sp_fs_ribbon_scheduler_pane

0x9eeb,	// (0x00089370) bg_main_sp_fs_ribbon_pane_g1

0x9ef4,	// (0x00089379) bg_main_sp_fs_ribbon_pane_g2

0x9efd,	// (0x00089382) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0008f269) bg_main_sp_fs_ribbon_pane_g

0x9f05,	// (0x0008938a) main_sp_fs_ribbon_scheduler_pane_g1

0x9f0e,	// (0x00089393) main_sp_fs_ribbon_scheduler_pane_g2

0x9f17,	// (0x0008939c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0008f270) main_sp_fs_ribbon_scheduler_pane_g

0x9f20,	// (0x000893a5) list_cale_mrui_pane

0x9f2d,	// (0x000893b2) sp_fs_scroll_pane_cp07_ParamLimits

0x9f2d,	// (0x000893b2) sp_fs_scroll_pane_cp07

0x9f49,	// (0x000893ce) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9f49,	// (0x000893ce) bg_sp_fs_schedule_viewer_highlight

0x9f59,	// (0x000893de) list_single_sp_fs_schedule_track_pane_cp01

0x9f61,	// (0x000893e6) list_sp_fs_schedule_track_pane

0x9f69,	// (0x000893ee) sp_fs_scroll_pane_cp06_ParamLimits

0x9f69,	// (0x000893ee) sp_fs_scroll_pane_cp06

0xcaa3,	// (0x0008bf28) bgmain_sp_fs_calendar_pane_g1

0x0eb2,	// (0x00080337) list_single_cale_mrui_pane_ParamLimits

0x0eb2,	// (0x00080337) list_single_cale_mrui_pane

0xde63,	// (0x0008d2e8) list_single_cale_mrui_row_pane_ParamLimits

0xde63,	// (0x0008d2e8) list_single_cale_mrui_row_pane

0xde70,	// (0x0008d2f5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xde70,	// (0x0008d2f5) list_single_cale_mrui_row_pane_g1

0xdea8,	// (0x0008d32d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdea8,	// (0x0008d32d) list_single_cale_mrui_row_pane_t1

0x0ed3,	// (0x00080358) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ed3,	// (0x00080358) list_single_cale_mrui_row_pane_t2

0xdeba,	// (0x0008d33f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdeba,	// (0x0008d33f) list_single_cale_mrui_row_pane_t3

0xdee9,	// (0x0008d36e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdee9,	// (0x0008d36e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0008f27e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0008f27e) list_single_cale_mrui_row_pane_t

0x0f3b,	// (0x000803c0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f3b,	// (0x000803c0) list_single_cmail_header_editor_pane_bg_cp01

0x0f61,	// (0x000803e6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f61,	// (0x000803e6) list_single_cmail_header_editor_pane_bg_cp02

0x9f88,	// (0x0008940d) main_radioblah_text_pane_t1_ParamLimits

0x9f88,	// (0x0008940d) main_radioblah_text_pane_t1

0x9fa2,	// (0x00089427) cam6_indi_pane_cp01

0x9faa,	// (0x0008942f) cam6_mode_pane_cp01

0x9fb2,	// (0x00089437) cam6_pano_pane

0x9fbb,	// (0x00089440) cam6_zoom_pane_cp01

0x9fc3,	// (0x00089448) cam6_pano_image_pane

0x9fce,	// (0x00089453) cam6_pano_pane_g1

0xea8f,	// (0x0008df14) cam6_pano_pane_g2

0x9fd7,	// (0x0008945c) cam6_pano_pane_g3

0x9fe0,	// (0x00089465) cam6_pano_pane_g4

0xd0c7,	// (0x0008c54c) cam6_pano_pane_g5

0x9fe9,	// (0x0008946e) cam6_pano_pane_g6

0x9ff3,	// (0x00089478) cam6_pano_pane_g7

0x9ffb,	// (0x00089480) cam6_pano_pane_g8

0xa004,	// (0x00089489) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0008f287) cam6_pano_pane_g

0xdfb8,	// (0x0008d43d) main_browser_tag_pane

0x9cde,	// (0x00089163) grid_navstr_albumart_pane

0xa00f,	// (0x00089494) cell_navstr_albumart_pane_ParamLimits

0xa00f,	// (0x00089494) cell_navstr_albumart_pane

0xa02f,	// (0x000894b4) cell_navstr_albumart_pane_g1

0xc399,	// (0x0008b81e) cell_navstr_albumart_pane_g2

0xc3a9,	// (0x0008b82e) cell_navstr_albumart_pane_g3

0xc3a1,	// (0x0008b826) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0008f29a) cell_navstr_albumart_pane_g

0xa037,	// (0x000894bc) bt_list_pane_ParamLimits

0xa037,	// (0x000894bc) bt_list_pane

0xa04b,	// (0x000894d0) bt_list_pane_t1

0xa05a,	// (0x000894df) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0008f2a3) bt_list_pane_t

0xdfb8,	// (0x0008d43d) main_cale_prevew_pane

0xa069,	// (0x000894ee) popup_cale_preview_window_ParamLimits

0xa069,	// (0x000894ee) popup_cale_preview_window

0xb28f,	// (0x0008a714) bg_popup_preview_window_pane_cp05_ParamLimits

0xb28f,	// (0x0008a714) bg_popup_preview_window_pane_cp05

0xa084,	// (0x00089509) list_cale_preview_pane_ParamLimits

0xa084,	// (0x00089509) list_cale_preview_pane

0xa090,	// (0x00089515) list_double_cale_preview_pane_ParamLimits

0xa090,	// (0x00089515) list_double_cale_preview_pane

0xa0a2,	// (0x00089527) list_single_cale_preview_pane_ParamLimits

0xa0a2,	// (0x00089527) list_single_cale_preview_pane

0xa0b8,	// (0x0008953d) list_single_cale_preview_pane_g1

0xa0c0,	// (0x00089545) list_single_cale_preview_pane_t1_ParamLimits

0xa0c0,	// (0x00089545) list_single_cale_preview_pane_t1

0xa0d5,	// (0x0008955a) list_double_cale_preview_pane_g1

0xa0dd,	// (0x00089562) list_double_cale_preview_pane_t1_ParamLimits

0xa0dd,	// (0x00089562) list_double_cale_preview_pane_t1

0xa0f2,	// (0x00089577) list_double_cale_preview_pane_t2_ParamLimits

0xa0f2,	// (0x00089577) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0008f2a8) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0008f2a8) list_double_cale_preview_pane_t

0xdfb8,	// (0x0008d43d) main_ezdial_pane

0xb28f,	// (0x0008a714) main_sp_fs_email_pane_ParamLimits

0x98cb,	// (0x00088d50) cmail_ddmenu_btn01_pane_ParamLimits

0x98cb,	// (0x00088d50) cmail_ddmenu_btn01_pane

0x98de,	// (0x00088d63) cmail_ddmenu_btn02_pane_ParamLimits

0x98de,	// (0x00088d63) cmail_ddmenu_btn02_pane

0x9939,	// (0x00088dbe) cmail_ddmenu_btn03_pane_ParamLimits

0x9939,	// (0x00088dbe) cmail_ddmenu_btn03_pane

0x998c,	// (0x00088e11) main_sp_fs_ctrlbar_pane_ParamLimits

0x99cb,	// (0x00088e50) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9bab,	// (0x00089030) list_cmail_body_pane_ParamLimits

0x9c0d,	// (0x00089092) bg_button_pane_cp12

0x9c16,	// (0x0008909b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x9c16,	// (0x0008909b) list_single_cmail_header_detail_pane_g3

0xddb3,	// (0x0008d238) list_single_cmail_header_detail_pane_t2_ParamLimits

0xddb3,	// (0x0008d238) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0008f22b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0008f22b) list_single_cmail_header_detail_pane_t

0xde0b,	// (0x0008d290) phacti_term_pane_t2_ParamLimits

0xde0b,	// (0x0008d290) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0008f235) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0008f235) phacti_term_pane_t

0xa10a,	// (0x0008958f) aid_size_list_single_double

0xa116,	// (0x0008959b) popup_ezdial_listscroll_window

0xa132,	// (0x000895b7) popup_number_entry_window_cp01

0x2164,	// (0x000815e9) bg_popup_call_pane_cp09

0xa140,	// (0x000895c5) ezdial_list_pane

0xa148,	// (0x000895cd) scroll_pane_cp23

0xc588,	// (0x0008ba0d) bg_button_pane_cp028_ParamLimits

0xc588,	// (0x0008ba0d) bg_button_pane_cp028

0xa150,	// (0x000895d5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa150,	// (0x000895d5) cmail_ddmenu_btn01_pane_g1

0xa15c,	// (0x000895e1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa15c,	// (0x000895e1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0008f2ad) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0008f2ad) cmail_ddmenu_btn01_pane_g

0xa168,	// (0x000895ed) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xa168,	// (0x000895ed) cmail_ddmenu_btn01_pane_t1

0xc588,	// (0x0008ba0d) bg_button_pane_cp029_ParamLimits

0xc588,	// (0x0008ba0d) bg_button_pane_cp029

0xa17d,	// (0x00089602) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa17d,	// (0x00089602) cmail_ddmenu_btn02_pane_g1

0xa196,	// (0x0008961b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa196,	// (0x0008961b) cmail_ddmenu_btn02_pane_t1

0xb28f,	// (0x0008a714) bg_button_pane_cp031_ParamLimits

0xb28f,	// (0x0008a714) bg_button_pane_cp031

0xa17d,	// (0x00089602) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa17d,	// (0x00089602) cmail_ddmenu_btn03_pane_g1

0xa196,	// (0x0008961b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa196,	// (0x0008961b) cmail_ddmenu_btn03_pane_t1

0x723b,	// (0x000866c0) cell_dialer2_keypad_pane_t1_ParamLimits

0x7255,	// (0x000866da) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7255,	// (0x000866da) cell_dialer2_keypad_pane_t1_copy1

0x8e70,	// (0x000882f5) ncimui_group_button_pane

0xb28f,	// (0x0008a714) main_sp_fs_calendar_pane_ParamLimits

0x9bc0,	// (0x00089045) list_single_cmail_header_caption_pane_ParamLimits

0xebf2,	// (0x0008e077) aid_recal_txt_sm_pane

0xdfb8,	// (0x0008d43d) mian_recal_day_pane

0xde51,	// (0x0008d2d6) popup_sp_fs_cale_preview_window_ParamLimits

0xa1ba,	// (0x0008963f) list_recal_day_pane

0xdf33,	// (0x0008d3b8) list_single_recal_day_pane_ParamLimits

0xdf33,	// (0x0008d3b8) list_single_recal_day_pane

0xa1e1,	// (0x00089666) list_single_recal_day_pane_g1_ParamLimits

0xa1e1,	// (0x00089666) list_single_recal_day_pane_g1

0xdf45,	// (0x0008d3ca) list_single_recal_day_pane_g2_ParamLimits

0xdf45,	// (0x0008d3ca) list_single_recal_day_pane_g2

0xdf51,	// (0x0008d3d6) list_single_recal_day_pane_g3_ParamLimits

0xdf51,	// (0x0008d3d6) list_single_recal_day_pane_g3

0x0f81,	// (0x00080406) list_single_recal_day_pane_g4_ParamLimits

0x0f81,	// (0x00080406) list_single_recal_day_pane_g4

0xdf5d,	// (0x0008d3e2) list_single_recal_day_pane_g5_ParamLimits

0xdf5d,	// (0x0008d3e2) list_single_recal_day_pane_g5

0xdf69,	// (0x0008d3ee) list_single_recal_day_pane_g6_ParamLimits

0xdf69,	// (0x0008d3ee) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0008f2bc) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0008f2bc) list_single_recal_day_pane_g

0xdf7d,	// (0x0008d402) list_single_recal_day_pane_t1

0xdf8f,	// (0x0008d414) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0008f2c7) list_single_recal_day_pane_t

0xa1ed,	// (0x00089672) ncimui_query_button_pane_ParamLimits

0xa1ed,	// (0x00089672) ncimui_query_button_pane

0xa1fd,	// (0x00089682) ncimui_query_button_pane_t1_ParamLimits

0xa1fd,	// (0x00089682) ncimui_query_button_pane_t1

0xa210,	// (0x00089695) ncimui_query_button_pane_t2_ParamLimits

0xa210,	// (0x00089695) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0008f2cc) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0008f2cc) ncimui_query_button_pane_t

0xa223,	// (0x000896a8) query_button_pane_ParamLimits

0xa223,	// (0x000896a8) query_button_pane

0xdfb8,	// (0x0008d43d) bg_button_pane_cp0028

0xa236,	// (0x000896bb) query_button_pane_t1

0x52e0,	// (0x00084765) main_tport_pane_ParamLimits

0x9a36,	// (0x00088ebb) bg_popup_window_pane_cp01_ParamLimits

0x9a36,	// (0x00088ebb) bg_popup_window_pane_cp01

0x9a51,	// (0x00088ed6) heading_pane_cp08_ParamLimits

0x9a51,	// (0x00088ed6) heading_pane_cp08

0x9a64,	// (0x00088ee9) heading_pane_cp07_ParamLimits

0x9a64,	// (0x00088ee9) heading_pane_cp07

0x9b34,	// (0x00088fb9) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0008f218) cell_tport_appsw_pane_g

0x0461,	// (0x0007f8e6) input_candi_list_open_g1

0x38fe,	// (0x00082d83) list_cale_time_pane_g6_ParamLimits

0x38fe,	// (0x00082d83) list_cale_time_pane_g6

0x60a9,	// (0x0008552e) aid_size_touch_calib_1_ParamLimits

0x60a9,	// (0x0008552e) aid_size_touch_calib_1

0x60bb,	// (0x00085540) aid_size_touch_calib_2_ParamLimits

0x60bb,	// (0x00085540) aid_size_touch_calib_2

0x60d3,	// (0x00085558) aid_size_touch_calib_3_ParamLimits

0x60d3,	// (0x00085558) aid_size_touch_calib_3

0x60f1,	// (0x00085576) aid_size_touch_calib_4_ParamLimits

0x60f1,	// (0x00085576) aid_size_touch_calib_4

0x6109,	// (0x0008558e) main_touch_calib_button_group_pane_ParamLimits

0x6109,	// (0x0008558e) main_touch_calib_button_group_pane

0x6121,	// (0x000855a6) main_touch_calib_pane_g1_ParamLimits

0x6133,	// (0x000855b8) main_touch_calib_pane_g2_ParamLimits

0x6145,	// (0x000855ca) main_touch_calib_pane_g3_ParamLimits

0x6157,	// (0x000855dc) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0008ebd6) main_touch_calib_pane_g_ParamLimits

0x6169,	// (0x000855ee) main_touch_calib_pane_t1_ParamLimits

0x6183,	// (0x00085608) main_touch_calib_pane_t2_ParamLimits

0x619d,	// (0x00085622) main_touch_calib_pane_t3_ParamLimits

0x61b1,	// (0x00085636) main_touch_calib_pane_t4_ParamLimits

0x61c5,	// (0x0008564a) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0008ebdf) main_touch_calib_pane_t_ParamLimits

0xce67,	// (0x0008c2ec) list_single_fp_cale_pane_g3_ParamLimits

0xce67,	// (0x0008c2ec) list_single_fp_cale_pane_g3

0xb28f,	// (0x0008a714) bg_button_pane_cp012_ParamLimits

0xb28f,	// (0x0008a714) bg_vkb2_func_pane_cp03_ParamLimits

0x8178,	// (0x000875fd) cell_vitu2_function_top_pane_g1_ParamLimits

0xb28f,	// (0x0008a714) bg_vkb2_func_pane_cp04_ParamLimits

0x8dfb,	// (0x00088280) main_ncimui_button_group_pane_ParamLimits

0x8dfb,	// (0x00088280) main_ncimui_button_group_pane

0x8e5b,	// (0x000882e0) main_ncimui_pane_t3_ParamLimits

0x8e5b,	// (0x000882e0) main_ncimui_pane_t3

0x9d4f,	// (0x000891d4) phacti_button_group_pane

0xa10a,	// (0x0008958f) aid_size_list_single_double_ParamLimits

0xa116,	// (0x0008959b) popup_ezdial_listscroll_window_ParamLimits

0xa132,	// (0x000895b7) popup_number_entry_window_cp01_ParamLimits

0xa244,	// (0x000896c9) phacti_button_pane_ParamLimits

0xa244,	// (0x000896c9) phacti_button_pane

0xdfb8,	// (0x0008d43d) bg_button_pane_cp14

0xa255,	// (0x000896da) phacti_button_pane_t1

0xa263,	// (0x000896e8) main_touch_calib_button_pane_ParamLimits

0xa263,	// (0x000896e8) main_touch_calib_button_pane

0x1887,	// (0x00080d0c) bg_button_pane_cp18_ParamLimits

0x1887,	// (0x00080d0c) bg_button_pane_cp18

0xa278,	// (0x000896fd) main_touch_calib_button_pane_t1_ParamLimits

0xa278,	// (0x000896fd) main_touch_calib_button_pane_t1

0xa28e,	// (0x00089713) main_touch_calib_button_pane_t2_ParamLimits

0xa28e,	// (0x00089713) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0008f2d1) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0008f2d1) main_touch_calib_button_pane_t

0xdfb8,	// (0x0008d43d) cell_ncimui_button_pane

0xdfb8,	// (0x0008d43d) bg_button_pane_cp032

0xa2ac,	// (0x00089731) cell_ncimui_button_pane_t1

0xd66c,	// (0x0008caf1) image3_infobar_pane_ParamLimits

0xd66c,	// (0x0008caf1) image3_infobar_pane

0x9270,	// (0x000886f5) fs_bigclock_status_pane_ParamLimits

0x9270,	// (0x000886f5) fs_bigclock_status_pane

0x927d,	// (0x00088702) main_fs_bigclock_clock_pane_ParamLimits

0x927d,	// (0x00088702) main_fs_bigclock_clock_pane

0x929b,	// (0x00088720) main_fs_bigclock_indi_pane_ParamLimits

0x929b,	// (0x00088720) main_fs_bigclock_indi_pane

0x92cd,	// (0x00088752) main_fs_bigclock_swipe_pane_ParamLimits

0x92cd,	// (0x00088752) main_fs_bigclock_swipe_pane

0xdfb8,	// (0x0008d43d) main_fs_clock_dumped_data

0xeb9c,	// (0x0008e021) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xeb9c,	// (0x0008e021) list_single_fs_bigclock_indicator_pane_g1

0x930c,	// (0x00088791) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x930c,	// (0x00088791) list_single_fs_bigclock_indicator_pane_g2

0x9326,	// (0x000887ab) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9326,	// (0x000887ab) list_single_fs_bigclock_indicator_pane_g3

0x9340,	// (0x000887c5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9340,	// (0x000887c5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0008f0f9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0008f0f9) list_single_fs_bigclock_indicator_pane_g

0x936b,	// (0x000887f0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x936b,	// (0x000887f0) list_single_fs_bigclock_indicator_pane_t1

0x9393,	// (0x00088818) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9393,	// (0x00088818) list_single_fs_bigclock_indicator_pane_t2

0x93bb,	// (0x00088840) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x93bb,	// (0x00088840) list_single_fs_bigclock_indicator_pane_t3

0x93e3,	// (0x00088868) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x93e3,	// (0x00088868) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0008f104) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0008f104) list_single_fs_bigclock_indicator_pane_t

0xa2ba,	// (0x0008973f) image3_infobar_fav_pane_ParamLimits

0xa2ba,	// (0x0008973f) image3_infobar_fav_pane

0xa2ca,	// (0x0008974f) image3_infobar_loc_pane_ParamLimits

0xa2ca,	// (0x0008974f) image3_infobar_loc_pane

0xa2de,	// (0x00089763) image3_infobar_time_pane_ParamLimits

0xa2de,	// (0x00089763) image3_infobar_time_pane

0xcaa3,	// (0x0008bf28) image3_infobar_time_pane_g1

0xa2ee,	// (0x00089773) image3_infobar_time_pane_t1

0xcaa3,	// (0x0008bf28) image3_infobar_loc_pane_g1

0xa2fc,	// (0x00089781) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0008f2d6) image3_infobar_loc_pane_g

0xa304,	// (0x00089789) image3_infobar_loc_pane_t1

0xcaa3,	// (0x0008bf28) image3_infobar_fav_pane_g1

0xa312,	// (0x00089797) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0008f2db) image3_infobar_fav_pane_g

0xa31a,	// (0x0008979f) fs_bigclock_status_battery_pane

0xa323,	// (0x000897a8) fs_bigclock_status_signal_pane

0xa32c,	// (0x000897b1) fs_bigclock_status_title_pane

0xa335,	// (0x000897ba) fs_bigclock_status_signal_pane_g1

0xa33e,	// (0x000897c3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0008f2e0) fs_bigclock_status_signal_pane_g

0xa346,	// (0x000897cb) fs_bigclock_status_battery_pane_g1

0xa34f,	// (0x000897d4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0008f2e5) fs_bigclock_status_battery_pane_g

0xa357,	// (0x000897dc) fs_bigclock_status_title_pane_t1

0xa365,	// (0x000897ea) main_fs_bigclock_clock_pane_g1

0xa365,	// (0x000897ea) main_fs_bigclock_clock_pane_g2

0xa376,	// (0x000897fb) main_fs_bigclock_clock_pane_g3

0xa376,	// (0x000897fb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0008f2ea) main_fs_bigclock_clock_pane_g

0xa389,	// (0x0008980e) main_fs_bigclock_clock_pane_t1

0xa39f,	// (0x00089824) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0008f2f3) main_fs_bigclock_clock_pane_t

0xa3b5,	// (0x0008983a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa3b5,	// (0x0008983a) list_single_fs_bigclock_indicator_pane

0xa3c6,	// (0x0008984b) list_single_fs_bigclock_pane_ParamLimits

0xa3c6,	// (0x0008984b) list_single_fs_bigclock_pane

0xa430,	// (0x000898b5) main_fs_bigclock_indicator_pane_t1

0xa43f,	// (0x000898c4) list_single_fs_bigclock_pane_g1

0xa447,	// (0x000898cc) list_single_fs_bigclock_pane_t1

0xcaa3,	// (0x0008bf28) main_fs_bigclock_swipe_pane_g1

0xa48a,	// (0x0008990f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0008f304) main_fs_bigclock_swipe_pane_g

0xa492,	// (0x00089917) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xa492,	// (0x00089917) main_fs_bigclock_swipe_pane_t1

0x3bd2,	// (0x00083057) call_type_pane_ParamLimits

0xdfb8,	// (0x0008d43d) main_btmg_pane

0xde9c,	// (0x0008d321) list_single_cale_mrui_row_pane_g2_ParamLimits

0xde9c,	// (0x0008d321) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0008f277) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0008f277) list_single_cale_mrui_row_pane_g

0xdf22,	// (0x0008d3a7) list_recal_vselct_arw_lo_pane

0xa1d9,	// (0x0008965e) list_recal_vselct_arw_up_pane

0xdf2a,	// (0x0008d3af) list_recal_vselct_pane

0xa4af,	// (0x00089934) btmg_button_pane

0xa4b9,	// (0x0008993e) main_btmg_pane_g1

0xdfb8,	// (0x0008d43d) bg_button_pane_cp044

0xa4c3,	// (0x00089948) btmg_button_pane_t1

0xc574,	// (0x0008b9f9) aid_listscroll_gen

0xb28f,	// (0x0008a714) main_cntbar_detail_pane

0x9b9b,	// (0x00089020) list_cmail_folder_pane

0xb36f,	// (0x0008a7f4) sp_fs_scroll_pane_cp03_ParamLimits

0x0f99,	// (0x0008041e) list_single_fs_dyc_pane_cp01_ParamLimits

0x0f99,	// (0x0008041e) list_single_fs_dyc_pane_cp01

0xa4d1,	// (0x00089956) aid_size_cmail_indent

0xdfa1,	// (0x0008d426) list_single_dyc_row_pane_cp01

0xa50c,	// (0x00089991) cntbar_detail_list_pane_ParamLimits

0xa50c,	// (0x00089991) cntbar_detail_list_pane

0xa558,	// (0x000899dd) main_cntbar_detail_cont_pane_ParamLimits

0xa558,	// (0x000899dd) main_cntbar_detail_cont_pane

0xb36f,	// (0x0008a7f4) scroll_pane_cp032_ParamLimits

0xb36f,	// (0x0008a7f4) scroll_pane_cp032

0xa56c,	// (0x000899f1) cntbar_detail_list_event_pane_ParamLimits

0xa56c,	// (0x000899f1) cntbar_detail_list_event_pane

0xa51c,	// (0x000899a1) cntbar_detail_list_shct_pane

0x2bd9,	// (0x0008205e) aid_list_gen

0xa57c,	// (0x00089a01) aid_scroll

0xa585,	// (0x00089a0a) aid_size_touch_scroll_bar

0x86a1,	// (0x00087b26) aid_list_double

0xa58e,	// (0x00089a13) aid_list_single

0x86a1,	// (0x00087b26) aid_list_single_lg

0x0fae,	// (0x00080433) aid_list_z_g_a_sm

0xa597,	// (0x00089a1c) aid_list_z_g_d

0x0fb6,	// (0x0008043b) aid_txt_z_prm

0x0fc4,	// (0x00080449) aid_txt_z_prm_cp01

0x0fd2,	// (0x00080457) aid_txt_z_sec

0xa59f,	// (0x00089a24) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa59f,	// (0x00089a24) main_cntbar_detail_cont_pane_g1

0xa5b3,	// (0x00089a38) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa5b3,	// (0x00089a38) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0008f309) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0008f309) main_cntbar_detail_cont_pane_g

0xa5c3,	// (0x00089a48) main_cntbar_detail_cont_pane_t1

0xa5d1,	// (0x00089a56) main_cntbar_detail_cont_pane_t2

0xa5df,	// (0x00089a64) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0008f30e) main_cntbar_detail_cont_pane_t

0xa5ed,	// (0x00089a72) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa5ed,	// (0x00089a72) cell_cntbar_detail_list_shct_pane

0xa601,	// (0x00089a86) cntbar_detail_list_shct_pane_g1

0xa60a,	// (0x00089a8f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0008f315) cntbar_detail_list_shct_pane_g

0xa613,	// (0x00089a98) cntbar_detail_list_event_pane_g1_ParamLimits

0xa613,	// (0x00089a98) cntbar_detail_list_event_pane_g1

0xa61f,	// (0x00089aa4) cntbar_detail_list_event_pane_g2_ParamLimits

0xa61f,	// (0x00089aa4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0008f31a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0008f31a) cntbar_detail_list_event_pane_g

0xa68b,	// (0x00089b10) cntbar_detail_list_event_pane_t1_ParamLimits

0xa68b,	// (0x00089b10) cntbar_detail_list_event_pane_t1

0xa6a0,	// (0x00089b25) cntbar_detail_list_event_pane_t2_ParamLimits

0xa6a0,	// (0x00089b25) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0008f327) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0008f327) cntbar_detail_list_event_pane_t

0xcaa3,	// (0x0008bf28) cell_cntbar_detail_list_shct_pane_g1

0x41f1,	// (0x00083676) navi_pane_mv_g3

0xb28f,	// (0x0008a714) main_cntbar_detail_pane_ParamLimits

0xdfb8,	// (0x0008d43d) main_notif_wgt_pane

0xd3fe,	// (0x0008c883) aid_tch_main_mp4_pane_g4

0xd600,	// (0x0008ca85) popup_slider_window_cp02

0xdf18,	// (0x0008d39d) list_recal_day_event_pane

0xa4da,	// (0x0008995f) cntbar_detail_btn_pane_ParamLimits

0xa4da,	// (0x0008995f) cntbar_detail_btn_pane

0xa4f3,	// (0x00089978) cntbar_detail_btn_pane_cp01_ParamLimits

0xa4f3,	// (0x00089978) cntbar_detail_btn_pane_cp01

0xa51c,	// (0x000899a1) cntbar_detail_list_shct_pane_ParamLimits

0xa52c,	// (0x000899b1) cntbar_detail_pane_g1_ParamLimits

0xa52c,	// (0x000899b1) cntbar_detail_pane_g1

0xa53c,	// (0x000899c1) cntbar_detail_pane_t1_ParamLimits

0xa53c,	// (0x000899c1) cntbar_detail_pane_t1

0xa62b,	// (0x00089ab0) cntbar_detail_list_event_pane_g3_ParamLimits

0xa62b,	// (0x00089ab0) cntbar_detail_list_event_pane_g3

0xa643,	// (0x00089ac8) cntbar_detail_list_event_pane_g4_ParamLimits

0xa643,	// (0x00089ac8) cntbar_detail_list_event_pane_g4

0xa65b,	// (0x00089ae0) cntbar_detail_list_event_pane_g5_ParamLimits

0xa65b,	// (0x00089ae0) cntbar_detail_list_event_pane_g5

0xa673,	// (0x00089af8) cntbar_detail_list_event_pane_g6_ParamLimits

0xa673,	// (0x00089af8) cntbar_detail_list_event_pane_g6

0xa6b5,	// (0x00089b3a) cntbar_detail_list_event_pane_t3_ParamLimits

0xa6b5,	// (0x00089b3a) cntbar_detail_list_event_pane_t3

0xa6c7,	// (0x00089b4c) popup_notif_wgt_window_ParamLimits

0xa6c7,	// (0x00089b4c) popup_notif_wgt_window

0xa6e0,	// (0x00089b65) popup_submenu_window_cp01_ParamLimits

0xa6e0,	// (0x00089b65) popup_submenu_window_cp01

0x2164,	// (0x000815e9) bg_popup_window_pane_cp10

0xa6f6,	// (0x00089b7b) listscroll_notif_wgt_pane

0xa708,	// (0x00089b8d) list_notif_wgt_window

0xa711,	// (0x00089b96) scroll_pane_cp033

0xa71a,	// (0x00089b9f) list_notif_wgt_row_pane_ParamLimits

0xa71a,	// (0x00089b9f) list_notif_wgt_row_pane

0xa72a,	// (0x00089baf) aid_size_list_notif_wgt_del

0xa737,	// (0x00089bbc) list_notif_wgt_row_pane_g1

0xa743,	// (0x00089bc8) list_notif_wgt_row_pane_g2

0xa752,	// (0x00089bd7) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0008f32e) list_notif_wgt_row_pane_g

0xa75f,	// (0x00089be4) list_notif_wgt_row_pane_t1

0xa775,	// (0x00089bfa) list_notif_wgt_row_pane_t2

0xa787,	// (0x00089c0c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0008f335) list_notif_wgt_row_pane_t

0xe03a,	// (0x0008d4bf) list_recal_day_event_pane_g1

0xa799,	// (0x00089c1e) list_recal_day_event_pane_t1

0xdfb8,	// (0x0008d43d) bg_button_pane_cp045

0xa7a8,	// (0x00089c2d) cntbar_detail_btn_pane_t1

0xc588,	// (0x0008ba0d) main_callh_pane_ParamLimits

0xc588,	// (0x0008ba0d) main_callh_pane

0xdfb8,	// (0x0008d43d) main_coverflow0_pane

0xdfb8,	// (0x0008d43d) main_wgtman_pane

0x92e5,	// (0x0008876a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x92e5,	// (0x0008876a) main_fs_bigclock_unlock_btn_pane

0x9b2c,	// (0x00088fb1) bg_button_pane_cp16

0x9b3c,	// (0x00088fc1) cell_tport_appsw_pane_g3

0xa7b6,	// (0x00089c3b) cf0_flow_pane_ParamLimits

0xa7b6,	// (0x00089c3b) cf0_flow_pane

0xa7cb,	// (0x00089c50) listscroll_cf0_pane

0xa7d6,	// (0x00089c5b) main_cf0_pane_g1

0xa7e8,	// (0x00089c6d) main_cf0_pane_t1_ParamLimits

0xa7e8,	// (0x00089c6d) main_cf0_pane_t1

0xa7ff,	// (0x00089c84) main_cf0_pane_t2_ParamLimits

0xa7ff,	// (0x00089c84) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0008f341) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0008f341) main_cf0_pane_t

0xa816,	// (0x00089c9b) scroll_pane_cp11

0xa821,	// (0x00089ca6) cf0_flow_pane_g1

0xa829,	// (0x00089cae) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0008f346) cf0_flow_pane_g

0xa831,	// (0x00089cb6) cf0_flow_pane_t1

0xdfb8,	// (0x0008d43d) main_call6_pane

0xdfb8,	// (0x0008d43d) main_calllock_pane

0xa83f,	// (0x00089cc4) call6_btn_grp_pane_ParamLimits

0xa83f,	// (0x00089cc4) call6_btn_grp_pane

0xa859,	// (0x00089cde) call6_pane_g1_ParamLimits

0xa859,	// (0x00089cde) call6_pane_g1

0xa86e,	// (0x00089cf3) popup_call6_1st_window_ParamLimits

0xa86e,	// (0x00089cf3) popup_call6_1st_window

0xa87f,	// (0x00089d04) popup_call6_2nd_window_ParamLimits

0xa87f,	// (0x00089d04) popup_call6_2nd_window

0xa890,	// (0x00089d15) cell_call6_btn_pane_ParamLimits

0xa890,	// (0x00089d15) cell_call6_btn_pane

0x2164,	// (0x000815e9) bg_popup_call2_in_pane_cp03

0xa8a4,	// (0x00089d29) popup_call6_1st_window_g1

0xa8ac,	// (0x00089d31) popup_call6_1st_window_g2

0xa8b4,	// (0x00089d39) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0008f34b) popup_call6_1st_window_g

0xa8bc,	// (0x00089d41) popup_call6_1st_window_t1

0xa8cb,	// (0x00089d50) popup_call6_1st_window_t2

0xa8db,	// (0x00089d60) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0008f352) popup_call6_1st_window_t

0x2164,	// (0x000815e9) bg_popup_call2_in_pane_cp04

0xa8a4,	// (0x00089d29) popup_call6_2nd_window_g1

0xa8ac,	// (0x00089d31) popup_call6_2nd_window_g2

0xa8b4,	// (0x00089d39) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0008f34b) popup_call6_2nd_window_g

0xa8bc,	// (0x00089d41) popup_call6_2nd_window_t1

0xdfb8,	// (0x0008d43d) bg_button_pane_cp15

0xa8eb,	// (0x00089d70) cell_call6_btn_pane_g1

0xa8f4,	// (0x00089d79) cell_call6_btn_pane_t1

0xa903,	// (0x00089d88) listscroll_wgtman_pane_ParamLimits

0xa903,	// (0x00089d88) listscroll_wgtman_pane

0xa924,	// (0x00089da9) wgtman_btn_pane_ParamLimits

0xa924,	// (0x00089da9) wgtman_btn_pane

0x3e2c,	// (0x000832b1) aid_scroll_copy1

0xa967,	// (0x00089dec) list_wgtman_pane

0xa971,	// (0x00089df6) wgtman_btn_pane_g1_ParamLimits

0xa971,	// (0x00089df6) wgtman_btn_pane_g1

0xa99d,	// (0x00089e22) wgtman_btn_pane_t1_ParamLimits

0xa99d,	// (0x00089e22) wgtman_btn_pane_t1

0xa9da,	// (0x00089e5f) wgtman_btn_pane_t2_ParamLimits

0xa9da,	// (0x00089e5f) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0008f359) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0008f359) wgtman_btn_pane_t

0xa9f1,	// (0x00089e76) listrow_wgtman_pane_ParamLimits

0xa9f1,	// (0x00089e76) listrow_wgtman_pane

0xaa03,	// (0x00089e88) listrow_wgtman_pane_g1

0xaa10,	// (0x00089e95) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0008f35e) listrow_wgtman_pane_g

0x0fe0,	// (0x00080465) listrow_wgtman_pane_t1

0x0ff8,	// (0x0008047d) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0008f363) listrow_wgtman_pane_t

0x101e,	// (0x000804a3) wait_bar_pane_cp09

0xaa2e,	// (0x00089eb3) main_calllock_btn_pane

0xaa38,	// (0x00089ebd) main_calllock_pane_g1

0xdfb8,	// (0x0008d43d) bg_button_pane_cp17

0xaa44,	// (0x00089ec9) main_calllock_btn_pane_g1

0xaa4d,	// (0x00089ed2) main_calllock_btn_pane_t1

0xdfb8,	// (0x0008d43d) main_dialer3_pane

0xdfb8,	// (0x0008d43d) main_fmrd2_pane

0xcaa3,	// (0x0008bf28) main_fs_bigclock_unlock_btn_pane_g1

0xaa64,	// (0x00089ee9) main_fs_bigclock_unlock_btn_pane_t1

0xaa72,	// (0x00089ef7) area_fmrd2_info_pane_ParamLimits

0xaa72,	// (0x00089ef7) area_fmrd2_info_pane

0xaa83,	// (0x00089f08) area_fmrd2_visual_pane_ParamLimits

0xaa83,	// (0x00089f08) area_fmrd2_visual_pane

0xaa91,	// (0x00089f16) fmrd2_indi_pane_ParamLimits

0xaa91,	// (0x00089f16) fmrd2_indi_pane

0xaa9e,	// (0x00089f23) area_fmrd2_visual_pane_g1

0xaaa6,	// (0x00089f2b) area_fmrd2_visual_pane_t1

0xaab6,	// (0x00089f3b) area_fmrd2_visual_pane_t2

0xaac6,	// (0x00089f4b) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0008f36d) area_fmrd2_visual_pane_t

0xaad6,	// (0x00089f5b) area_fmrd2_info_pane_g1

0xaade,	// (0x00089f63) area_fmrd2_info_pane_t1

0xaaee,	// (0x00089f73) area_fmrd2_info_pane_t2

0xaafe,	// (0x00089f83) area_fmrd2_info_pane_t3

0xab0e,	// (0x00089f93) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0008f374) area_fmrd2_info_pane_t

0xab1c,	// (0x00089fa1) fmrd2_indi_pane_t1

0xab2c,	// (0x00089fb1) fmrd2_indi_pane_t2

0xab3c,	// (0x00089fc1) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0008f37d) fmrd2_indi_pane_t

0x934f,	// (0x000887d4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x934f,	// (0x000887d4) list_single_fs_bigclock_indicator_pane_g5

0x9400,	// (0x00088885) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9400,	// (0x00088885) list_single_fs_bigclock_indicator_pane_t5

0x9dc6,	// (0x0008924b) aid_cell_bcale_month_pane_ParamLimits

0x9dc6,	// (0x0008924b) aid_cell_bcale_month_pane

0x9de4,	// (0x00089269) bcale_month_pane_ParamLimits

0x9de4,	// (0x00089269) bcale_month_pane

0x9e08,	// (0x0008928d) bcale_preview_pane_ParamLimits

0x9e08,	// (0x0008928d) bcale_preview_pane

0xa447,	// (0x000898cc) list_single_fs_bigclock_pane_t1_ParamLimits

0xa466,	// (0x000898eb) list_single_fs_bigclock_pane_t2_ParamLimits

0xa466,	// (0x000898eb) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0008f2ff) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0008f2ff) list_single_fs_bigclock_pane_t

0xaa5c,	// (0x00089ee1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0008f368) main_fs_bigclock_unlock_btn_pane_g

0xab4c,	// (0x00089fd1) aid_dia3_key_size_ParamLimits

0xab4c,	// (0x00089fd1) aid_dia3_key_size

0xab5b,	// (0x00089fe0) aid_dia3_listrow_size_ParamLimits

0xab5b,	// (0x00089fe0) aid_dia3_listrow_size

0xab70,	// (0x00089ff5) dia3_keypad_fun_pane_ParamLimits

0xab70,	// (0x00089ff5) dia3_keypad_fun_pane

0xab8c,	// (0x0008a011) dia3_keypad_num_pane_ParamLimits

0xab8c,	// (0x0008a011) dia3_keypad_num_pane

0xaba7,	// (0x0008a02c) dia3_listscroll_pane_ParamLimits

0xaba7,	// (0x0008a02c) dia3_listscroll_pane

0xabba,	// (0x0008a03f) dia3_numentry_pane_ParamLimits

0xabba,	// (0x0008a03f) dia3_numentry_pane

0xabce,	// (0x0008a053) dia3_list_pane

0xabd9,	// (0x0008a05e) scroll_pane_cp12

0xdfb8,	// (0x0008d43d) bg_dia3_numentry_pane

0xabe4,	// (0x0008a069) dia3_numentry_pane_t1

0xabf3,	// (0x0008a078) cell_dia3_key_num_pane

0xabfb,	// (0x0008a080) cell_dia3_key0_fun_pane_ParamLimits

0xabfb,	// (0x0008a080) cell_dia3_key0_fun_pane

0xac0f,	// (0x0008a094) cell_dia3_key1_fun_pane_ParamLimits

0xac0f,	// (0x0008a094) cell_dia3_key1_fun_pane

0xac27,	// (0x0008a0ac) dia3_listrow_pane

0xe93f,	// (0x0008ddc4) bg_dia3_numentry_pane_g1

0xdfb8,	// (0x0008d43d) bg_button_pane_cp21

0xac39,	// (0x0008a0be) cell_dia3_key_num_pane_t1

0xac47,	// (0x0008a0cc) cell_dia3_key_num_pane_t2

0xac56,	// (0x0008a0db) cell_dia3_key_num_pane_t3

0xac65,	// (0x0008a0ea) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0008f384) cell_dia3_key_num_pane_t

0xdfb8,	// (0x0008d43d) bg_button_pane_cp19

0xac74,	// (0x0008a0f9) cell_dia3_key0_fun_pane_g1

0xdfb8,	// (0x0008d43d) bg_button_pane_cp20

0xac7c,	// (0x0008a101) cell_dia3_key1_fun_pane_g1

0xac84,	// (0x0008a109) area_left_week_number_pane

0xac90,	// (0x0008a115) area_top_day_name_pane

0xaca3,	// (0x0008a128) frame_month_view_pane

0xacb6,	// (0x0008a13b) grid_month_view_pane

0xacc4,	// (0x0008a149) cell_top_day_name_pane_ParamLimits

0xacc4,	// (0x0008a149) cell_top_day_name_pane

0xacf1,	// (0x0008a176) cell_area_left_week_number_pane_ParamLimits

0xacf1,	// (0x0008a176) cell_area_left_week_number_pane

0xad05,	// (0x0008a18a) cell_month_view_pane_ParamLimits

0xad05,	// (0x0008a18a) cell_month_view_pane

0xad32,	// (0x0008a1b7) frm_month_g1

0xad3f,	// (0x0008a1c4) frm_month_g2

0xad52,	// (0x0008a1d7) frm_month_g3

0xad65,	// (0x0008a1ea) frm_month_g4

0xad78,	// (0x0008a1fd) frm_month_g5

0xad8b,	// (0x0008a210) frm_month_g6

0xad9e,	// (0x0008a223) frm_month_g7

0xadb1,	// (0x0008a236) frm_month_g8

0xadbe,	// (0x0008a243) frm_month_g9

0xadce,	// (0x0008a253) frm_month_g10

0xadde,	// (0x0008a263) frm_month_g11

0xadee,	// (0x0008a273) frm_month_g12

0xae00,	// (0x0008a285) frm_month_g13

0xae12,	// (0x0008a297) frm_month_g14

0xae26,	// (0x0008a2ab) frm_month_g15

0xae3a,	// (0x0008a2bf) frm_month_g16

0x000f,

0xff08,	// (0x0008f38d) frm_month_g

0xae4e,	// (0x0008a2d3) cell_top_day_name_pane_t1

0xae61,	// (0x0008a2e6) cell_area_left_week_number_pane_g1

0xae6d,	// (0x0008a2f2) cell_area_left_week_number_pane_t1

0xcd0f,	// (0x0008c194) cell_month_view_pane_g1

0xae80,	// (0x0008a305) cell_month_view_pane_t1

0xdfb8,	// (0x0008d43d) main_fps_pane

0x9901,	// (0x00088d86) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x9901,	// (0x00088d86) cmail_ddmenu_btn02_pane_cp1

0x991d,	// (0x00088da2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x991d,	// (0x00088da2) cmail_ddmenu_btn02_pane_cp2

0xa189,	// (0x0008960e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa189,	// (0x0008960e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0008f2b2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0008f2b2) cmail_ddmenu_btn02_pane_g

0xa1a8,	// (0x0008962d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa1a8,	// (0x0008962d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0008f2b7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0008f2b7) cmail_ddmenu_btn02_pane_t

0xae93,	// (0x0008a318) fps_text_pane_ParamLimits

0xae93,	// (0x0008a318) fps_text_pane

0xaeaa,	// (0x0008a32f) main_fps_pane_g1_ParamLimits

0xaeaa,	// (0x0008a32f) main_fps_pane_g1

0xaec4,	// (0x0008a349) wait_bar_pane_cp010_ParamLimits

0xaec4,	// (0x0008a349) wait_bar_pane_cp010

0xaed5,	// (0x0008a35a) fps_text_pane_t1_ParamLimits

0xaed5,	// (0x0008a35a) fps_text_pane_t1

0xf0b8,	// (0x0008e53d) cam4_image_uncrop_pane_g1

0xf0c1,	// (0x0008e546) cam4_image_uncrop_pane_g2

0x76e1,	// (0x00086b66) cam4_image_uncrop_pane_g3

0x76ea,	// (0x00086b6f) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0008ed73) cam4_image_uncrop_pane_g

0xac27,	// (0x0008a0ac) dia3_listrow_pane_ParamLimits

0xdfb8,	// (0x0008d43d) main_phob2_pane

0x9ad4,	// (0x00088f59) cell_tport_appsw_pane_cp02_ParamLimits

0x9ad4,	// (0x00088f59) cell_tport_appsw_pane_cp02

0x9ae8,	// (0x00088f6d) cell_tport_appsw_pane_cp03_ParamLimits

0x9ae8,	// (0x00088f6d) cell_tport_appsw_pane_cp03

0xdfb8,	// (0x0008d43d) phob2_contact_card_pane

0xdfb8,	// (0x0008d43d) phob2_listscroll_pane

0xaeed,	// (0x0008a372) phob2_list_pane

0xaef5,	// (0x0008a37a) scroll_pane_cp034

0xaefd,	// (0x0008a382) phob2_cc_data_pane_ParamLimits

0xaefd,	// (0x0008a382) phob2_cc_data_pane

0xaf1c,	// (0x0008a3a1) phob2_cc_listscroll_pane_ParamLimits

0xaf1c,	// (0x0008a3a1) phob2_cc_listscroll_pane

0xa9f1,	// (0x00089e76) list_double_large_graphic_phob2_pane_ParamLimits

0xa9f1,	// (0x00089e76) list_double_large_graphic_phob2_pane

0xaf3a,	// (0x0008a3bf) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaf3a,	// (0x0008a3bf) list_double_large_graphic_phob2_pane_g1

0x1030,	// (0x000804b5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1030,	// (0x000804b5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0008f3ae) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0008f3ae) list_double_large_graphic_phob2_pane_g

0x103c,	// (0x000804c1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x103c,	// (0x000804c1) list_double_large_graphic_phob2_pane_t1

0x1051,	// (0x000804d6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1051,	// (0x000804d6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0008f3b3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0008f3b3) list_double_large_graphic_phob2_pane_t

0xdfb8,	// (0x0008d43d) list_highlight_pane_cp024

0xaf50,	// (0x0008a3d5) phob2_cc_button_pane

0xaf58,	// (0x0008a3dd) phob2_cc_data_pane_g1_ParamLimits

0xaf58,	// (0x0008a3dd) phob2_cc_data_pane_g1

0xaf6d,	// (0x0008a3f2) phob2_cc_data_pane_g2_ParamLimits

0xaf6d,	// (0x0008a3f2) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0008f3b8) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0008f3b8) phob2_cc_data_pane_g

0xaf7d,	// (0x0008a402) phob2_cc_data_pane_t1_ParamLimits

0xaf7d,	// (0x0008a402) phob2_cc_data_pane_t1

0xaf95,	// (0x0008a41a) phob2_cc_data_pane_t2_ParamLimits

0xaf95,	// (0x0008a41a) phob2_cc_data_pane_t2

0xafad,	// (0x0008a432) phob2_cc_data_pane_t3_ParamLimits

0xafad,	// (0x0008a432) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0008f3bd) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0008f3bd) phob2_cc_data_pane_t

0xafc5,	// (0x0008a44a) phob2_cc_list_pane_ParamLimits

0xafc5,	// (0x0008a44a) phob2_cc_list_pane

0xe0e3,	// (0x0008d568) scroll_pane_cp035_ParamLimits

0xe0e3,	// (0x0008d568) scroll_pane_cp035

0xb28f,	// (0x0008a714) bg_button_pane_cp033

0xafd1,	// (0x0008a456) phob2_cc_button_pane_g1

0xafdd,	// (0x0008a462) phob2_cc_button_pane_t1

0xaff2,	// (0x0008a477) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0008f3c4) phob2_cc_button_pane_t

0xb004,	// (0x0008a489) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb004,	// (0x0008a489) list_double_large_graphic_phob2_cc_pane

0xb016,	// (0x0008a49b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb016,	// (0x0008a49b) list_double_large_graphic_phob2_cc_pane_g1

0x1063,	// (0x000804e8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1063,	// (0x000804e8) list_double_large_graphic_phob2_cc_pane_g2

0x106f,	// (0x000804f4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x106f,	// (0x000804f4) list_double_large_graphic_phob2_cc_pane_g3

0x107b,	// (0x00080500) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x107b,	// (0x00080500) list_double_large_graphic_phob2_cc_pane_g4

0x1087,	// (0x0008050c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1087,	// (0x0008050c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0008f3c9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0008f3c9) list_double_large_graphic_phob2_cc_pane_g

0x1093,	// (0x00080518) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1093,	// (0x00080518) list_double_large_graphic_phob2_cc_pane_t1

0x10bc,	// (0x00080541) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x10bc,	// (0x00080541) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0008f3d4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0008f3d4) list_double_large_graphic_phob2_cc_pane_t

0xb022,	// (0x0008a4a7) list_highlight_pane_cp025_ParamLimits

0xb022,	// (0x0008a4a7) list_highlight_pane_cp025

0xb28f,	// (0x0008a714) bg_button_pane_cp033_ParamLimits

0xafd1,	// (0x0008a456) phob2_cc_button_pane_g1_ParamLimits

0xafdd,	// (0x0008a462) phob2_cc_button_pane_t1_ParamLimits

0xaff2,	// (0x0008a477) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0008f3c4) phob2_cc_button_pane_t_ParamLimits

0x131e,	// (0x000807a3) popup_wgtman_window

0xda1e,	// (0x0008cea3) scroll_pane_cp038

0xa949,	// (0x00089dce) wgtman_btn_pane_cp_01_ParamLimits

0xa949,	// (0x00089dce) wgtman_btn_pane_cp_01

0xb030,	// (0x0008a4b5) wgtman_content_pane

0xb039,	// (0x0008a4be) wgtman_heading_pane

0xdfb8,	// (0x0008d43d) bg_heading_pane_cp02

0xb042,	// (0x0008a4c7) wgtman_heading_pane_g1

0xb04a,	// (0x0008a4cf) wgtman_heading_pane_t1

0xb058,	// (0x0008a4dd) scroll_pane_cp036

0xb060,	// (0x0008a4e5) wgtman_list_pane

0xb068,	// (0x0008a4ed) wgtman_list_pane_t1_ParamLimits

0xb068,	// (0x0008a4ed) wgtman_list_pane_t1

0xd7a1,	// (0x0008cc26) cam4_grid_pane

0x0691,	// (0x0007fb16) bg_button_pane_cp015_ParamLimits

0x8308,	// (0x0008778d) bg_button_pane_cp016_ParamLimits

0x831b,	// (0x000877a0) bg_button_pane_cp017_ParamLimits

0x06d7,	// (0x0007fb5c) popup_vitu2_query_window_g3_ParamLimits

0x06d7,	// (0x0007fb5c) popup_vitu2_query_window_g3

0x0752,	// (0x0007fbd7) popup_vitu2_query_window_t6_ParamLimits

0x0752,	// (0x0007fbd7) popup_vitu2_query_window_t6

0x077d,	// (0x0007fc02) popup_vitu2_query_window_t7_ParamLimits

0x077d,	// (0x0007fc02) popup_vitu2_query_window_t7

0xf0b8,	// (0x0008e53d) cam4_grid_pane_g1

0xf0c1,	// (0x0008e546) cam4_grid_pane_g2

0xb082,	// (0x0008a507) cam4_grid_pane_g3

0xb08b,	// (0x0008a510) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0008f3d9) cam4_grid_pane_g

0x25d5,	// (0x00081a5a) aid_placing_vt_slider_lsc_ParamLimits

0x2930,	// (0x00081db5) vidtel_button_pane_ParamLimits

0x2930,	// (0x00081db5) vidtel_button_pane

0xdfb8,	// (0x0008d43d) bg_button_pane_cp034

0xb096,	// (0x0008a51b) vidtel_button_pane_g1

0xb09e,	// (0x0008a523) vidtel_button_pane_t1

0xdb8b,	// (0x0008d010) aid_size_vtel_slider_touch

0xe0e3,	// (0x0008d568) scroll_pane_cp039

0x8fd9,	// (0x0008845e) ncim_query_button_pane_cp01_ParamLimits

0x8ff8,	// (0x0008847d) ncimui_query_pane_g1_ParamLimits

0xb28f,	// (0x0008a714) input_focus_pane_cp012_ParamLimits

0xe97d,	// (0x0008de02) ncim_query_entry_pane_t1_ParamLimits

0xe0e3,	// (0x0008d568) scroll_pane_cp039_ParamLimits

0x40dc,	// (0x00083561) navi_pane_bcale_mc_g1

0x40e4,	// (0x00083569) navi_pane_bcale_mc_t1

0x99b0,	// (0x00088e35) main_sp_fs_email_pane_g1

0x99bc,	// (0x00088e41) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0008f16a) main_sp_fs_email_pane_g

0x9f7b,	// (0x00089400) list_single_cale_mrui_row_pane_g3_ParamLimits

0x9f7b,	// (0x00089400) list_single_cale_mrui_row_pane_g3

0x0f8f,	// (0x00080414) list_single_recal_day_pane_g5_event_pane

0xdf75,	// (0x0008d3fa) list_single_recal_day_pane_g7

0xb0b4,	// (0x0008a539) list_recal_day_event_pane_cp01

0xb0bd,	// (0x0008a542) list_recal_vselct_arw_lo_pane_cp01

0xb0c5,	// (0x0008a54a) list_recal_vselct_arw_up_pane_cp01

0xb0cd,	// (0x0008a552) list_recal_vselct_pane_cp01

0xe03a,	// (0x0008d4bf) list_recal_day_event_pane_cp01_g1

0xdfaa,	// (0x0008d42f) list_recal_day_event_pane_cp01_t1

0xdf7d,	// (0x0008d402) list_single_recal_day_pane_t1_ParamLimits

0xdf8f,	// (0x0008d414) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0008f2c7) list_single_recal_day_pane_t_ParamLimits

0x151b,	// (0x000809a0) bg_notes_pane_ParamLimits

0x1851,	// (0x00080cd6) list_notes_pane_ParamLimits

0x185f,	// (0x00080ce4) scroll_pane_cp06_ParamLimits

0x1887,	// (0x00080d0c) main_notes_pane_ParamLimits

0xdfb8,	// (0x0008d43d) main_welc_pane

0xb0d7,	// (0x0008a55c) main_welc_body_pane_ParamLimits

0xb0d7,	// (0x0008a55c) main_welc_body_pane

0xb0f5,	// (0x0008a57a) main_welc_opti_pane_ParamLimits

0xb0f5,	// (0x0008a57a) main_welc_opti_pane

0xb13a,	// (0x0008a5bf) main_welc_pane_t1_ParamLimits

0xb13a,	// (0x0008a5bf) main_welc_pane_t1

0xb158,	// (0x0008a5dd) main_welc_body_row_pane_ParamLimits

0xb158,	// (0x0008a5dd) main_welc_body_row_pane

0xebfb,	// (0x0008e080) main_welc_opti_row_pane_ParamLimits

0xebfb,	// (0x0008e080) main_welc_opti_row_pane

0xb16c,	// (0x0008a5f1) main_welc_opti_row_pane_g1

0xb174,	// (0x0008a5f9) main_welc_opti_row_pane_t1

0xb183,	// (0x0008a608) main_welc_body_row_pane_t1

0xa700,	// (0x00089b85) popup_notif_wgt_heading_pane

0xa72a,	// (0x00089baf) aid_size_list_notif_wgt_del_ParamLimits

0xa737,	// (0x00089bbc) list_notif_wgt_row_pane_g1_ParamLimits

0xa743,	// (0x00089bc8) list_notif_wgt_row_pane_g2_ParamLimits

0xa752,	// (0x00089bd7) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0008f32e) list_notif_wgt_row_pane_g_ParamLimits

0xa75f,	// (0x00089be4) list_notif_wgt_row_pane_t1_ParamLimits

0xa775,	// (0x00089bfa) list_notif_wgt_row_pane_t2_ParamLimits

0xa787,	// (0x00089c0c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0008f335) list_notif_wgt_row_pane_t_ParamLimits

0xaa03,	// (0x00089e88) listrow_wgtman_pane_g1_ParamLimits

0xaa10,	// (0x00089e95) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0008f35e) listrow_wgtman_pane_g_ParamLimits

0x0fe0,	// (0x00080465) listrow_wgtman_pane_t1_ParamLimits

0x0ff8,	// (0x0008047d) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0008f363) listrow_wgtman_pane_t_ParamLimits

0x101e,	// (0x000804a3) wait_bar_pane_cp09_ParamLimits

0xdfb8,	// (0x0008d43d) bg_popup_heading_pane_cp02

0xb192,	// (0x0008a617) popup_notif_wgt_heading_pane_g1

0xb19a,	// (0x0008a61f) popup_notif_wgt_heading_pane_t1

0xdfb8,	// (0x0008d43d) main_vids_pane

0xdfb8,	// (0x0008d43d) vids_listscroll_pane

0xb1a8,	// (0x0008a62d) scroll_pane_cp040

0xdfb8,	// (0x0008d43d) vids_list_pane

0xb1b3,	// (0x0008a638) vids_list_double_pane_ParamLimits

0xb1b3,	// (0x0008a638) vids_list_double_pane

0xb1c4,	// (0x0008a649) vids_list_double_pane_g1

0xb1cd,	// (0x0008a652) vids_list_double_pane_t1

0xb1dd,	// (0x0008a662) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0008f3e7) vids_list_double_pane_t

0xb28f,	// (0x0008a714) main_ncimui_pane_ParamLimits

0x8e0f,	// (0x00088294) main_ncimui_pane_g1_ParamLimits

0x8e1b,	// (0x000882a0) main_ncimui_pane_g2_ParamLimits

0x8e1b,	// (0x000882a0) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0008f06f) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0008f06f) main_ncimui_pane_g

0xb110,	// (0x0008a595) main_welc_pane_g1_ParamLimits

0xb110,	// (0x0008a595) main_welc_pane_g1

0xb125,	// (0x0008a5aa) main_welc_pane_g2_ParamLimits

0xb125,	// (0x0008a5aa) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0008f3e2) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0008f3e2) main_welc_pane_g

0x151b,	// (0x000809a0) listscroll_mce_pane_ParamLimits

0x4273,	// (0x000836f8) wait_bar_pane_cp10

0xc57c,	// (0x0008ba01) main_cale_day_pane_ParamLimits

0xc57c,	// (0x0008ba01) main_cale_week_pane_ParamLimits

0x151b,	// (0x000809a0) main_messa_pane_ParamLimits

0x6a1d,	// (0x00085ea2) main_clock2_btn_pane_ParamLimits

0x6a1d,	// (0x00085ea2) main_clock2_btn_pane

0xceef,	// (0x0008c374) main_clock2_btn_pane_cp01_ParamLimits

0xceef,	// (0x0008c374) main_clock2_btn_pane_cp01

0x9f20,	// (0x000893a5) list_cale_mrui_pane_ParamLimits

0xa7e0,	// (0x00089c65) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0008f33c) main_cf0_pane_g

0xac84,	// (0x0008a109) area_left_week_number_pane_ParamLimits

0xac90,	// (0x0008a115) area_top_day_name_pane_ParamLimits

0xaca3,	// (0x0008a128) frame_month_view_pane_ParamLimits

0xacb6,	// (0x0008a13b) grid_month_view_pane_ParamLimits

0xad32,	// (0x0008a1b7) frm_month_g1_ParamLimits

0xad3f,	// (0x0008a1c4) frm_month_g2_ParamLimits

0xad52,	// (0x0008a1d7) frm_month_g3_ParamLimits

0xad65,	// (0x0008a1ea) frm_month_g4_ParamLimits

0xad78,	// (0x0008a1fd) frm_month_g5_ParamLimits

0xad8b,	// (0x0008a210) frm_month_g6_ParamLimits

0xad9e,	// (0x0008a223) frm_month_g7_ParamLimits

0xadb1,	// (0x0008a236) frm_month_g8_ParamLimits

0xadbe,	// (0x0008a243) frm_month_g9_ParamLimits

0xadce,	// (0x0008a253) frm_month_g10_ParamLimits

0xadde,	// (0x0008a263) frm_month_g11_ParamLimits

0xadee,	// (0x0008a273) frm_month_g12_ParamLimits

0xae00,	// (0x0008a285) frm_month_g13_ParamLimits

0xae12,	// (0x0008a297) frm_month_g14_ParamLimits

0xae26,	// (0x0008a2ab) frm_month_g15_ParamLimits

0xae3a,	// (0x0008a2bf) frm_month_g16_ParamLimits

0xff08,	// (0x0008f38d) frm_month_g_ParamLimits

0xae4e,	// (0x0008a2d3) cell_top_day_name_pane_t1_ParamLimits

0xae61,	// (0x0008a2e6) cell_area_left_week_number_pane_g1_ParamLimits

0xae6d,	// (0x0008a2f2) cell_area_left_week_number_pane_t1_ParamLimits

0xcd0f,	// (0x0008c194) cell_month_view_pane_g1_ParamLimits

0xae80,	// (0x0008a305) cell_month_view_pane_t1_ParamLimits

0x1513,	// (0x00080998) main_clock2_btn_pane_g1

0xb1ed,	// (0x0008a672) main_clock2_btn_pane_t1

0xb28f,	// (0x0008a714) listscroll_cmail_pane_ParamLimits

0x99b0,	// (0x00088e35) main_sp_fs_email_pane_g1_ParamLimits

0x99bc,	// (0x00088e41) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0008f16a) main_sp_fs_email_pane_g_ParamLimits

0xa1ba,	// (0x0008963f) list_recal_day_pane_ParamLimits

0xa1cb,	// (0x00089650) mian_recal_day_pane_t1

0x0ba1,	// (0x00080026) list_single_dyc_row_text_pane_t4_ParamLimits

0x0ba1,	// (0x00080026) list_single_dyc_row_text_pane_t4

0x0bea,	// (0x0008006f) list_single_dyc_row_text_pane_t5_ParamLimits

0x0bea,	// (0x0008006f) list_single_dyc_row_text_pane_t5

0xdd00,	// (0x0008d185) list_single_dyc_row_text_pane_t6_ParamLimits

0xdd00,	// (0x0008d185) list_single_dyc_row_text_pane_t6

0x389e,	// (0x00082d23) aid_mgn_list_cale_time_pane

0xb28f,	// (0x0008a714) main_gallery2_pane_ParamLimits

0xcf05,	// (0x0008c38a) main_clock2_pane_cp01_t1

0xcf15,	// (0x0008c39a) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0008ec49) main_clock2_pane_cp01_t

0x1d5a,	// (0x000811df) cale_week_scroll_pane_g16_ParamLimits

0x1d5a,	// (0x000811df) cale_week_scroll_pane_g16

0x2164,	// (0x000815e9) vorec_slider_pane

0xb09e,	// (0x0008a523) vidtel_button_pane_t1_ParamLimits

0xa365,	// (0x000897ea) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa365,	// (0x000897ea) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa376,	// (0x000897fb) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa376,	// (0x000897fb) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0008f2ea) main_fs_bigclock_clock_pane_g_ParamLimits

0xa389,	// (0x0008980e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa39f,	// (0x00089824) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0008f2f3) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
