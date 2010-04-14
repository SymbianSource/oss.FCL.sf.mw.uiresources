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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003cdfe };

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
0x2246,	// (0x0003f044) Screen

0x2252,	// (0x0003f050) application_window

0x22ae,	// (0x0003f0ac) area_bottom_pane_ParamLimits

0x22ae,	// (0x0003f0ac) area_bottom_pane

0x2307,	// (0x0003f105) area_top_pane_ParamLimits

0x2307,	// (0x0003f105) area_top_pane

0x236b,	// (0x0003f169) call_video_uplink_pane_ParamLimits

0x236b,	// (0x0003f169) call_video_uplink_pane

0x23aa,	// (0x0003f1a8) main_pane_ParamLimits

0x23aa,	// (0x0003f1a8) main_pane

0xc869,	// (0x00049667) context_pane

0x56dc,	// (0x000424da) navi_pane

0x5702,	// (0x00042500) popup_cale_events_window_ParamLimits

0x5702,	// (0x00042500) popup_cale_events_window

0xc87c,	// (0x0004967a) popup_mup_playback_window

0x571a,	// (0x00042518) signal_pane

0xa823,	// (0x00047621) main_browser_pane

0xb463,	// (0x00048261) main_burst_pane

0x5568,	// (0x00042366) main_calc_pane

0xc84f,	// (0x0004964d) main_cale_day_pane

0x2ae7,	// (0x0003f8e5) main_cale_month_pane

0xc84f,	// (0x0004964d) main_cale_week_pane

0xb463,	// (0x00048261) main_call_pane

0xa4f5,	// (0x000472f3) main_call_poc_pane

0xb463,	// (0x00048261) main_camera_pane

0xb463,	// (0x00048261) main_chi_dic_pane

0xb1e0,	// (0x00047fde) main_clock_pane

0xa4f5,	// (0x000472f3) main_fmradio_pane

0xb463,	// (0x00048261) main_graph_messa_pane

0xa4f5,	// (0x000472f3) main_help_pane

0xa823,	// (0x00047621) main_im_pane

0xa75e,	// (0x0004755c) main_image_pane_ParamLimits

0xa75e,	// (0x0004755c) main_image_pane

0xa4f5,	// (0x000472f3) main_location2_pane

0xb463,	// (0x00048261) main_location_pane

0xa75e,	// (0x0004755c) main_messa_pane

0xa4f5,	// (0x000472f3) main_mp2_pane

0xb463,	// (0x00048261) main_mp_pane

0xa4f5,	// (0x000472f3) main_msg_pane

0xa4f5,	// (0x000472f3) main_mup_eq_pane

0xa4f5,	// (0x000472f3) main_mup_pane

0xa823,	// (0x00047621) main_notes_pane

0xa4f5,	// (0x000472f3) main_pec_pane

0xa4f5,	// (0x000472f3) main_phob_pane

0xa4f5,	// (0x000472f3) main_pinb_pane

0xa4f5,	// (0x000472f3) main_postcard_pane

0xa4f5,	// (0x000472f3) main_qdial_pane

0xb463,	// (0x00048261) main_skin_pane

0xa4f5,	// (0x000472f3) main_smil2_pane

0xb463,	// (0x00048261) main_smil_pane

0xb463,	// (0x00048261) main_video_pane

0xb463,	// (0x00048261) main_video_tele_pane

0xa75e,	// (0x0004755c) main_viewer_pane_ParamLimits

0xa75e,	// (0x0004755c) main_viewer_pane

0xb463,	// (0x00048261) main_vorec_pane

0x55a6,	// (0x000423a4) popup_blid_sat_info_window_ParamLimits

0x55a6,	// (0x000423a4) popup_blid_sat_info_window

0x55c6,	// (0x000423c4) popup_dyc_status_message_window_ParamLimits

0x55c6,	// (0x000423c4) popup_dyc_status_message_window

0x55d6,	// (0x000423d4) popup_grid_large_graphic_window_ParamLimits

0x55d6,	// (0x000423d4) popup_grid_large_graphic_window

0x5667,	// (0x00042465) popup_loc_request_window_ParamLimits

0x5667,	// (0x00042465) popup_loc_request_window

0x56b4,	// (0x000424b2) popup_wml_address_window_ParamLimits

0x56b4,	// (0x000424b2) popup_wml_address_window

0x5440,	// (0x0004223e) call_muted_g1

0x5102,	// (0x00041f00) popup_call_audio_conf_window_ParamLimits

0x5102,	// (0x00041f00) popup_call_audio_conf_window

0x5450,	// (0x0004224e) popup_call_audio_first_window_ParamLimits

0x5450,	// (0x0004224e) popup_call_audio_first_window

0x5490,	// (0x0004228e) popup_call_audio_in_window_ParamLimits

0x5490,	// (0x0004228e) popup_call_audio_in_window

0x54b4,	// (0x000422b2) popup_call_audio_out_window_ParamLimits

0x54b4,	// (0x000422b2) popup_call_audio_out_window

0x54d6,	// (0x000422d4) popup_call_audio_second_window_ParamLimits

0x54d6,	// (0x000422d4) popup_call_audio_second_window

0x5506,	// (0x00042304) popup_call_audio_wait_window_ParamLimits

0x5506,	// (0x00042304) popup_call_audio_wait_window

0x5527,	// (0x00042325) popup_number_entry_window_ParamLimits

0x5527,	// (0x00042325) popup_number_entry_window

0xa0e2,	// (0x00046ee0) bg_popup_call_pane_cp05_ParamLimits

0xa0e2,	// (0x00046ee0) bg_popup_call_pane_cp05

0xa102,	// (0x00046f00) popup_number_entry_window_t1

0xa115,	// (0x00046f13) popup_number_entry_window_t2

0xa127,	// (0x00046f25) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0004bec4) popup_number_entry_window_t

0xa139,	// (0x00046f37) text_title_cp2

0xa14c,	// (0x00046f4a) bg_popup_call_pane_cp_ParamLimits

0xa14c,	// (0x00046f4a) bg_popup_call_pane_cp

0xa15a,	// (0x00046f58) call_thumbnail_pane

0xa162,	// (0x00046f60) popup_call_audio_in_window_g1_ParamLimits

0xa162,	// (0x00046f60) popup_call_audio_in_window_g1

0xa16e,	// (0x00046f6c) popup_call_audio_in_window_g2_ParamLimits

0xa16e,	// (0x00046f6c) popup_call_audio_in_window_g2

0xa17a,	// (0x00046f78) popup_call_audio_in_window_g3_ParamLimits

0xa17a,	// (0x00046f78) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0004becd) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0004becd) popup_call_audio_in_window_g

0xa186,	// (0x00046f84) popup_call_audio_in_window_t1_ParamLimits

0xa186,	// (0x00046f84) popup_call_audio_in_window_t1

0xa1a2,	// (0x00046fa0) popup_call_audio_in_window_t2_ParamLimits

0xa1a2,	// (0x00046fa0) popup_call_audio_in_window_t2

0xa1be,	// (0x00046fbc) popup_call_audio_in_window_t3_ParamLimits

0xa1be,	// (0x00046fbc) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0004bed4) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0004bed4) popup_call_audio_in_window_t

0xa14c,	// (0x00046f4a) bg_popup_call_pane_cp01_ParamLimits

0xa14c,	// (0x00046f4a) bg_popup_call_pane_cp01

0xa15a,	// (0x00046f58) call_thumbnail_pane_cp02

0xa1d1,	// (0x00046fcf) call_type_pane_cp022

0xa1d9,	// (0x00046fd7) popup_call_audio_out_window_g1_ParamLimits

0xa1d9,	// (0x00046fd7) popup_call_audio_out_window_g1

0xa1eb,	// (0x00046fe9) popup_call_audio_out_window_g2_ParamLimits

0xa1eb,	// (0x00046fe9) popup_call_audio_out_window_g2

0xa1f7,	// (0x00046ff5) popup_call_audio_out_window_g3_ParamLimits

0xa1f7,	// (0x00046ff5) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0004bedb) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0004bedb) popup_call_audio_out_window_g

0xa209,	// (0x00047007) popup_call_audio_out_window_t1_ParamLimits

0xa209,	// (0x00047007) popup_call_audio_out_window_t1

0xa221,	// (0x0004701f) popup_call_audio_out_window_t2_ParamLimits

0xa221,	// (0x0004701f) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0004bee2) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0004bee2) popup_call_audio_out_window_t

0xa236,	// (0x00047034) bg_popup_call_pane_ParamLimits

0xa236,	// (0x00047034) bg_popup_call_pane

0x25ab,	// (0x0003f3a9) call_thumbnail_pane_cp_ParamLimits

0x25ab,	// (0x0003f3a9) call_thumbnail_pane_cp

0xa2ba,	// (0x000470b8) call_type_pane_cp01_ParamLimits

0xa2ba,	// (0x000470b8) call_type_pane_cp01

0xa2fe,	// (0x000470fc) popup_call_audio_first_window_g1_ParamLimits

0xa2fe,	// (0x000470fc) popup_call_audio_first_window_g1

0xa34a,	// (0x00047148) popup_call_audio_first_window_g2_ParamLimits

0xa34a,	// (0x00047148) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0004bee7) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0004bee7) popup_call_audio_first_window_g

0xa38e,	// (0x0004718c) popup_call_audio_first_window_t1_ParamLimits

0xa38e,	// (0x0004718c) popup_call_audio_first_window_t1

0xa43a,	// (0x00047238) popup_call_audio_first_window_t4_ParamLimits

0xa43a,	// (0x00047238) popup_call_audio_first_window_t4

0xa4c6,	// (0x000472c4) popup_call_audio_first_window_t5_ParamLimits

0xa4c6,	// (0x000472c4) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0004beec) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0004beec) popup_call_audio_first_window_t

0xa4f5,	// (0x000472f3) bg_popup_call_pane_cp02

0xa4ff,	// (0x000472fd) call_type_pane_cp023

0xa507,	// (0x00047305) popup_call_audio_wait_window_g1

0xa50f,	// (0x0004730d) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004bef3) popup_call_audio_wait_window_g

0xa517,	// (0x00047315) popup_call_audio_wait_window_t3

0xa525,	// (0x00047323) bg_popup_call_pane_cp03_ParamLimits

0xa525,	// (0x00047323) bg_popup_call_pane_cp03

0xa585,	// (0x00047383) call_thumbnail_pane_cp011_ParamLimits

0xa585,	// (0x00047383) call_thumbnail_pane_cp011

0xa591,	// (0x0004738f) call_type_pane_cp034_ParamLimits

0xa591,	// (0x0004738f) call_type_pane_cp034

0xa5cd,	// (0x000473cb) popup_call_audio_second_window_g1_ParamLimits

0xa5cd,	// (0x000473cb) popup_call_audio_second_window_g1

0xa609,	// (0x00047407) popup_call_audio_second_window_g2_ParamLimits

0xa609,	// (0x00047407) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0004bef8) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0004bef8) popup_call_audio_second_window_g

0xa653,	// (0x00047451) popup_call_audio_second_window_t1_ParamLimits

0xa653,	// (0x00047451) popup_call_audio_second_window_t1

0xa6d4,	// (0x000474d2) popup_call_audio_second_window_t2_ParamLimits

0xa6d4,	// (0x000474d2) popup_call_audio_second_window_t2

0xa70a,	// (0x00047508) popup_call_audio_second_window_t3_ParamLimits

0xa70a,	// (0x00047508) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0004befd) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0004befd) popup_call_audio_second_window_t

0xa4f5,	// (0x000472f3) bg_popup_call_pane_cp04

0xa740,	// (0x0004753e) list_conf_pane

0xa748,	// (0x00047546) popup_call_audio_conf_window_t1

0xa756,	// (0x00047554) call_thumbnail_pane_g1

0xa75e,	// (0x0004755c) bg_pinb_pane_ParamLimits

0xa75e,	// (0x0004755c) bg_pinb_pane

0xa76c,	// (0x0004756a) find_pinb_pane

0xa775,	// (0x00047573) listscroll_pinb_pane_ParamLimits

0xa775,	// (0x00047573) listscroll_pinb_pane

0xa784,	// (0x00047582) pinb_bg_pane_g1

0x25cf,	// (0x0003f3cd) pinb_bg_pane_g2

0x25db,	// (0x0003f3d9) pinb_bg_pane_g3

0x25e7,	// (0x0003f3e5) pinb_bg_pane_g4

0x25f3,	// (0x0003f3f1) pinb_bg_pane_g5

0x25ff,	// (0x0003f3fd) pinb_bg_pane_g6

0x260a,	// (0x0003f408) pinb_bg_pane_g7

0x2615,	// (0x0003f413) pinb_bg_pane_g8

0x2620,	// (0x0003f41e) pinb_bg_pane_g9

0x262a,	// (0x0003f428) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0004bf04) pinb_bg_pane_g

0x2647,	// (0x0003f445) grid_pinb_pane

0x2652,	// (0x0003f450) list_pinb_pane

0x265d,	// (0x0003f45b) scroll_pane_cp01_ParamLimits

0x265d,	// (0x0003f45b) scroll_pane_cp01

0xa78e,	// (0x0004758c) find_pinb_pane_g1_ParamLimits

0xa78e,	// (0x0004758c) find_pinb_pane_g1

0xa7a6,	// (0x000475a4) find_pinb_pane_t1

0xa7b8,	// (0x000475b6) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0004bf1e) find_pinb_pane_t

0xa7cd,	// (0x000475cb) input_focus_pane_cp01_ParamLimits

0xa7cd,	// (0x000475cb) input_focus_pane_cp01

0x266f,	// (0x0003f46d) cell_pinb_pane_ParamLimits

0x266f,	// (0x0003f46d) cell_pinb_pane

0x2697,	// (0x0003f495) cell_pinb_pane_g1_ParamLimits

0x2697,	// (0x0003f495) cell_pinb_pane_g1

0x26ac,	// (0x0003f4aa) cell_pinb_pane_g2_ParamLimits

0x26ac,	// (0x0003f4aa) cell_pinb_pane_g2

0xa7d9,	// (0x000475d7) cell_pinb_pane_g3_ParamLimits

0xa7d9,	// (0x000475d7) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0004bf23) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0004bf23) cell_pinb_pane_g

0xa4f5,	// (0x000472f3) grid_highlight_pane_cp01

0x26b8,	// (0x0003f4b6) list_pinb_item_pane_ParamLimits

0x26b8,	// (0x0003f4b6) list_pinb_item_pane

0xa4f5,	// (0x000472f3) list_highlight_pane_cp02

0x26de,	// (0x0003f4dc) list_pinb_item_pane_g1_ParamLimits

0x26de,	// (0x0003f4dc) list_pinb_item_pane_g1

0x26eb,	// (0x0003f4e9) list_pinb_item_pane_g2_ParamLimits

0x26eb,	// (0x0003f4e9) list_pinb_item_pane_g2

0x26f7,	// (0x0003f4f5) list_pinb_item_pane_g3_ParamLimits

0x26f7,	// (0x0003f4f5) list_pinb_item_pane_g3

0x2708,	// (0x0003f506) list_pinb_item_pane_g4_ParamLimits

0x2708,	// (0x0003f506) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0004bf2a) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0004bf2a) list_pinb_item_pane_g

0x2714,	// (0x0003f512) list_pinb_item_pane_t1_ParamLimits

0x2714,	// (0x0003f512) list_pinb_item_pane_t1

0x2745,	// (0x0003f543) calc_display_pane

0x2763,	// (0x0003f561) calc_paper_pane

0x277f,	// (0x0003f57d) grid_calc_pane

0xa4f5,	// (0x000472f3) bg_list_pane_cp01

0x27ab,	// (0x0003f5a9) clock_g1

0x27b3,	// (0x0003f5b1) clock_g2

0x0001,

0xf135,	// (0x0004bf33) clock_g

0x27bd,	// (0x0003f5bb) clock_t1_ParamLimits

0x27bd,	// (0x0003f5bb) clock_t1

0x27d2,	// (0x0003f5d0) clock_t2_ParamLimits

0x27d2,	// (0x0003f5d0) clock_t2

0x27e4,	// (0x0003f5e2) clock_t3_ParamLimits

0x27e4,	// (0x0003f5e2) clock_t3

0x27f6,	// (0x0003f5f4) clock_t4_ParamLimits

0x27f6,	// (0x0003f5f4) clock_t4

0x2808,	// (0x0003f606) clock_t5_ParamLimits

0x2808,	// (0x0003f606) clock_t5

0x281d,	// (0x0003f61b) clock_t6_ParamLimits

0x281d,	// (0x0003f61b) clock_t6

0x282f,	// (0x0003f62d) clock_t7_ParamLimits

0x282f,	// (0x0003f62d) clock_t7

0x2841,	// (0x0003f63f) clock_t8_ParamLimits

0x2841,	// (0x0003f63f) clock_t8

0x2857,	// (0x0003f655) clock_t9_ParamLimits

0x2857,	// (0x0003f655) clock_t9

0x0008,

0xf13a,	// (0x0004bf38) clock_t_ParamLimits

0xf13a,	// (0x0004bf38) clock_t

0xa7e5,	// (0x000475e3) popup_clock_analogue_window_cp02

0xa7e5,	// (0x000475e3) popup_clock_digital_window_cp01

0xa7ed,	// (0x000475eb) listscroll_help_pane

0xa4f5,	// (0x000472f3) phob_pre_status_pane

0xa7f7,	// (0x000475f5) grid_qdial_pane

0xa75e,	// (0x0004755c) listscroll_mce_pane

0xa75e,	// (0x0004755c) bg_notes_pane

0xa801,	// (0x000475ff) list_notes_pane

0x286d,	// (0x0003f66b) scroll_pane_cp06

0xa80f,	// (0x0004760d) bg_calc_paper_pane

0x287c,	// (0x0003f67a) list_calc_pane

0xa823,	// (0x00047621) bg_calc_display_pane

0x2896,	// (0x0003f694) calc_display_pane_t1

0x28ab,	// (0x0003f6a9) calc_display_pane_t2

0x28c0,	// (0x0003f6be) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0004bf4b) calc_display_pane_t

0x28d2,	// (0x0003f6d0) cell_calc_pane_ParamLimits

0x28d2,	// (0x0003f6d0) cell_calc_pane

0xa82f,	// (0x0004762d) bg_calc_paper_pane_g1

0xa83b,	// (0x00047639) bg_calc_paper_pane_g2

0xa847,	// (0x00047645) bg_calc_paper_pane_g3

0xa853,	// (0x00047651) bg_calc_paper_pane_g4

0xa85f,	// (0x0004765d) bg_calc_paper_pane_g5

0x28ff,	// (0x0003f6fd) bg_calc_paper_pane_g6

0x2910,	// (0x0003f70e) bg_calc_paper_pane_g7

0x2921,	// (0x0003f71f) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0004bf52) bg_calc_paper_pane_g

0x2932,	// (0x0003f730) calc_bg_paper_pane_g9

0x2943,	// (0x0003f741) list_calc_item_pane_ParamLimits

0x2943,	// (0x0003f741) list_calc_item_pane

0xa86b,	// (0x00047669) list_calc_item_pane_g1

0x2972,	// (0x0003f770) list_calc_item_pane_t1_ParamLimits

0x2972,	// (0x0003f770) list_calc_item_pane_t1

0x2984,	// (0x0003f782) list_calc_item_pane_t2_ParamLimits

0x2984,	// (0x0003f782) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0004bf63) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0004bf63) list_calc_item_pane_t

0xa878,	// (0x00047676) cell_calc_pane_g1

0xa882,	// (0x00047680) grid_highlight_pane_cp02

0xcabd,	// (0x000498bb) bg_calc_display_pane_g1

0x29b4,	// (0x0003f7b2) bg_calc_display_pane_g2

0x29be,	// (0x0003f7bc) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0004bf6d) bg_calc_display_pane_g

0x29c7,	// (0x0003f7c5) cell_qdial_pane_ParamLimits

0x29c7,	// (0x0003f7c5) cell_qdial_pane

0x29db,	// (0x0003f7d9) cell_qdial_pane_g1_ParamLimits

0x29db,	// (0x0003f7d9) cell_qdial_pane_g1

0x29e8,	// (0x0003f7e6) cell_qdial_pane_g2_ParamLimits

0x29e8,	// (0x0003f7e6) cell_qdial_pane_g2

0xa8a4,	// (0x000476a2) cell_qdial_pane_g3_ParamLimits

0xa8a4,	// (0x000476a2) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0004bf74) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0004bf74) cell_qdial_pane_g

0x2a06,	// (0x0003f804) cell_qdial_pane_t1_ParamLimits

0x2a06,	// (0x0003f804) cell_qdial_pane_t1

0x2a1e,	// (0x0003f81c) cell_qdial_pane_t2_ParamLimits

0x2a1e,	// (0x0003f81c) cell_qdial_pane_t2

0x2a31,	// (0x0003f82f) cell_qdial_pane_t3_ParamLimits

0x2a31,	// (0x0003f82f) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0004bf7d) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0004bf7d) cell_qdial_pane_t

0xa4f5,	// (0x000472f3) grid_highlight_pane_cp04

0xa8b0,	// (0x000476ae) thumbnail_qdial_pane_ParamLimits

0xa8b0,	// (0x000476ae) thumbnail_qdial_pane

0xa90c,	// (0x0004770a) list_help_pane

0xa915,	// (0x00047713) scroll_pane_cp02

0x2a44,	// (0x0003f842) help_list_pane_t1_ParamLimits

0x2a44,	// (0x0003f842) help_list_pane_t1

0x2a77,	// (0x0003f875) bg_notes_pane_g2

0x2a7f,	// (0x0003f87d) bg_notes_pane_g3

0x2a87,	// (0x0003f885) notes_bg_pane_g1

0x2a8f,	// (0x0003f88d) notes_bg_pane_g4

0x2a97,	// (0x0003f895) notes_bg_pane_g5

0x2a9f,	// (0x0003f89d) notes_bg_pane_g6

0x2aa7,	// (0x0003f8a5) notes_bg_pane_g7

0x2aaf,	// (0x0003f8ad) notes_bg_pane_g8

0x2ab7,	// (0x0003f8b5) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0004bf9b) notes_bg_pane_g

0x2abf,	// (0x0003f8bd) list_notes_text_pane_ParamLimits

0x2abf,	// (0x0003f8bd) list_notes_text_pane

0xa91e,	// (0x0004771c) list_notes_text_pane_g1

0x0e92,	// (0x0003dc90) list_notes_text_pane_t1

0x2ae7,	// (0x0003f8e5) listscroll_cale_week_pane

0x2b0c,	// (0x0003f90a) bg_cale_heading_pane

0xa941,	// (0x0004773f) bg_cale_pane_cp01

0x2b2e,	// (0x0003f92c) cale_week_corner_pane

0x2b48,	// (0x0003f946) cale_week_day_heading_pane

0x2b6a,	// (0x0003f968) cale_week_scroll_pane_g1

0x2b87,	// (0x0003f985) cale_week_scroll_pane_g2

0x2b9a,	// (0x0003f998) cale_week_scroll_pane_g3

0x2bad,	// (0x0003f9ab) cale_week_scroll_pane_g4

0x2bc0,	// (0x0003f9be) cale_week_scroll_pane_g5

0x2bd3,	// (0x0003f9d1) cale_week_scroll_pane_g6

0x2be6,	// (0x0003f9e4) cale_week_scroll_pane_g7

0x2bf9,	// (0x0003f9f7) cale_week_scroll_pane_g8

0x2c0e,	// (0x0003fa0c) cale_week_scroll_pane_g9

0x2c21,	// (0x0003fa1f) cale_week_scroll_pane_g10

0x2c34,	// (0x0003fa32) cale_week_scroll_pane_g11

0x2c47,	// (0x0003fa45) cale_week_scroll_pane_g12

0x2c5e,	// (0x0003fa5c) cale_week_scroll_pane_g13

0x2c79,	// (0x0003fa77) cale_week_scroll_pane_g14

0x2c94,	// (0x0003fa92) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0004bfaa) cale_week_scroll_pane_g

0x2cc4,	// (0x0003fac2) cale_week_time_pane

0x2cd9,	// (0x0003fad7) grid_cale_week_pane

0xa971,	// (0x0004776f) scroll_pane_cp08

0x2cf8,	// (0x0003faf6) cell_cale_week_pane_ParamLimits

0x2cf8,	// (0x0003faf6) cell_cale_week_pane

0x2d5a,	// (0x0003fb58) cale_week_day_heading_pane_t1

0x2d95,	// (0x0003fb93) cale_week_day_heading_pane_t2

0x2dd0,	// (0x0003fbce) cale_week_day_heading_pane_t3

0x2e0b,	// (0x0003fc09) cale_week_day_heading_pane_t4

0x2e46,	// (0x0003fc44) cale_week_day_heading_pane_t5

0x2e81,	// (0x0003fc7f) cale_week_day_heading_pane_t6

0x2ebc,	// (0x0003fcba) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0004bfcb) cale_week_day_heading_pane_t

0xa98e,	// (0x0004778c) bg_cale_side_pane

0x2ef7,	// (0x0003fcf5) cale_week_time_pane_t1

0x2f11,	// (0x0003fd0f) cale_week_time_pane_t2

0x2f2b,	// (0x0003fd29) cale_week_time_pane_t3

0x2f45,	// (0x0003fd43) cale_week_time_pane_t4

0x2f5f,	// (0x0003fd5d) cale_week_time_pane_t5

0x2f79,	// (0x0003fd77) cale_week_time_pane_t6

0x2f99,	// (0x0003fd97) cale_week_time_pane_t7

0x2fbb,	// (0x0003fdb9) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0004bfda) cale_week_time_pane_t

0x2fdf,	// (0x0003fddd) cell_cale_week_pane_g2

0x3003,	// (0x0003fe01) cell_cale_week_pane_g3_ParamLimits

0x3003,	// (0x0003fe01) cell_cale_week_pane_g3

0xa99c,	// (0x0004779a) grid_highlight_pane_cp07

0xa9a4,	// (0x000477a2) listscroll_gms_pane

0xa9ae,	// (0x000477ac) grid_gms_pane

0xa9b7,	// (0x000477b5) listscroll_gms_pane_g1

0xa9bf,	// (0x000477bd) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0004bfeb) listscroll_gms_pane_g

0x301b,	// (0x0003fe19) scroll_pane_cp010

0x3026,	// (0x0003fe24) cell_gms_pane_ParamLimits

0x3026,	// (0x0003fe24) cell_gms_pane

0x3039,	// (0x0003fe37) cell_gms_pane_g1

0xa9c7,	// (0x000477c5) cell_gms_pane_g2

0xa9cf,	// (0x000477cd) cell_gms_pane_g3

0xa9d8,	// (0x000477d6) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0004bff0) cell_gms_pane_g

0xa9e1,	// (0x000477df) grid_highlight_pane_cp09

0x53e8,	// (0x000421e6) phob_pre_status_pane_g1

0x53f0,	// (0x000421ee) phob_pre_status_pane_g2

0x53f8,	// (0x000421f6) phob_pre_status_pane_g3

0x5400,	// (0x000421fe) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004c3df) phob_pre_status_pane_g

0x5410,	// (0x0004220e) phob_pre_status_pane_t1

0x5420,	// (0x0004221e) phob_pre_status_pane_t2

0x5430,	// (0x0004222e) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0004c3ea) phob_pre_status_pane_t

0xa4f5,	// (0x000472f3) bg_list_pane_cp05

0x3049,	// (0x0003fe47) grid_vorec_pane

0x3053,	// (0x0003fe51) vorec_t1

0x3061,	// (0x0003fe5f) vorec_t2

0x306f,	// (0x0003fe6d) vorec_t3

0x307d,	// (0x0003fe7b) vorec_t4

0x308b,	// (0x0003fe89) vorec_t5

0x3099,	// (0x0003fe97) vorec_t6

0x0006,

0xf1fb,	// (0x0004bff9) vorec_t

0x30b5,	// (0x0003feb3) wait_bar_pane_cp01

0x30bd,	// (0x0003febb) cell_vorec_pane_ParamLimits

0x30bd,	// (0x0003febb) cell_vorec_pane

0x30d0,	// (0x0003fece) cell_vorec_pane_g1

0xa4f5,	// (0x000472f3) grid_highlight_pane_cp05

0x30ea,	// (0x0003fee8) cams_zoom_pane

0x30f6,	// (0x0003fef4) image_vga_pane

0x3105,	// (0x0003ff03) main_camera_pane_g1

0x3113,	// (0x0003ff11) main_camera_pane_g2

0x311f,	// (0x0003ff1d) main_camera_pane_g3

0x312b,	// (0x0003ff29) main_camera_pane_g4

0x3137,	// (0x0003ff35) main_camera_pane_g5

0x3143,	// (0x0003ff41) main_camera_pane_g6

0x314f,	// (0x0003ff4d) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004c008) main_camera_pane_g

0x315b,	// (0x0003ff59) main_camera_pane_t1

0x316d,	// (0x0003ff6b) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004c019) main_camera_pane_t

0x318e,	// (0x0003ff8c) cams_zoom_pane_cp_ParamLimits

0x318e,	// (0x0003ff8c) cams_zoom_pane_cp

0x31b2,	// (0x0003ffb0) image_cif_pane_ParamLimits

0x31b2,	// (0x0003ffb0) image_cif_pane

0x31d0,	// (0x0003ffce) image_subqcif_pane

0x31d8,	// (0x0003ffd6) main_video_pane_g1_ParamLimits

0x31d8,	// (0x0003ffd6) main_video_pane_g1

0x31f8,	// (0x0003fff6) main_video_pane_g2_ParamLimits

0x31f8,	// (0x0003fff6) main_video_pane_g2

0x3228,	// (0x00040026) main_video_pane_g3_ParamLimits

0x3228,	// (0x00040026) main_video_pane_g3

0x3251,	// (0x0004004f) main_video_pane_g4_ParamLimits

0x3251,	// (0x0004004f) main_video_pane_g4

0x327a,	// (0x00040078) main_video_pane_g5_ParamLimits

0x327a,	// (0x00040078) main_video_pane_g5

0xa9f5,	// (0x000477f3) main_video_pane_g6_ParamLimits

0xa9f5,	// (0x000477f3) main_video_pane_g6

0x0006,

0xf220,	// (0x0004c01e) main_video_pane_g_ParamLimits

0xf220,	// (0x0004c01e) main_video_pane_g

0x329c,	// (0x0004009a) main_video_pane_t1_ParamLimits

0x329c,	// (0x0004009a) main_video_pane_t1

0xaa0f,	// (0x0004780d) cams_zoom_pane_g1

0xaa18,	// (0x00047816) cams_zoom_pane_g2

0xaa21,	// (0x0004781f) cams_zoom_pane_g3

0xaa2a,	// (0x00047828) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004c02d) cams_zoom_pane_g

0x32e6,	// (0x000400e4) grid_cams_pane

0x32f4,	// (0x000400f2) linegrid_cams_pane

0x3302,	// (0x00040100) cell_cams_pane_ParamLimits

0x3302,	// (0x00040100) cell_cams_pane

0xaa33,	// (0x00047831) cams_burst_image_pane

0xaa3b,	// (0x00047839) cell_cams_pane_g1

0xa4f5,	// (0x000472f3) grid_highlight_pane_cp03

0xa878,	// (0x00047676) mp_bg_pane_g1

0xa4f5,	// (0x000472f3) bg_list_pane_cp03

0xc774,	// (0x00049572) bg_mp_pane

0xc77c,	// (0x0004957a) grid_mp_pane

0xc784,	// (0x00049582) media_player_g1

0xc78c,	// (0x0004958a) media_player_t1

0xc79a,	// (0x00049598) media_player_t2

0xc7a8,	// (0x000495a6) media_player_t3

0xc7b6,	// (0x000495b4) media_player_t4

0xc7c4,	// (0x000495c2) media_player_t5

0xc7d2,	// (0x000495d0) media_player_t6

0xc7e0,	// (0x000495de) media_player_t7

0x0006,

0xf5cb,	// (0x0004c3c9) media_player_t

0xc7ee,	// (0x000495ec) wait_bar_pane_cp02

0xf5b0,	// (0x0004c3ae) main_usb_pane_t

0x53df,	// (0x000421dd) cell_mp_pane

0xa878,	// (0x00047676) cell_mp_pane_g1

0xa4f5,	// (0x000472f3) grid_highlight_pane_cp06

0xaa43,	// (0x00047841) grid_skin_colour_pane

0xaa4b,	// (0x00047849) list_highlight_pane_cp03

0x3315,	// (0x00040113) skin_g1

0xaa53,	// (0x00047851) skin_t1

0xaa62,	// (0x00047860) skin_t2

0x0001,

0xf264,	// (0x0004c062) skin_t

0x331f,	// (0x0004011d) cell_skin_colour_pane_ParamLimits

0x331f,	// (0x0004011d) cell_skin_colour_pane

0xaa70,	// (0x0004786e) cell_skin_colour_pane_g1

0x33a3,	// (0x000401a1) call_video_g1_ParamLimits

0x33a3,	// (0x000401a1) call_video_g1

0x33b3,	// (0x000401b1) call_video_g2_ParamLimits

0x33b3,	// (0x000401b1) call_video_g2

0x0001,

0xf269,	// (0x0004c067) call_video_g_ParamLimits

0xf269,	// (0x0004c067) call_video_g

0x340d,	// (0x0004020b) call_video_uplink_pane_cp1_ParamLimits

0x340d,	// (0x0004020b) call_video_uplink_pane_cp1

0xaa82,	// (0x00047880) call_video_uplink_pane_cp2

0x34d9,	// (0x000402d7) video_down_crop_pane_ParamLimits

0x34d9,	// (0x000402d7) video_down_crop_pane

0x35d7,	// (0x000403d5) video_down_pane_ParamLimits

0x35d7,	// (0x000403d5) video_down_pane

0xaa8a,	// (0x00047888) video_down_subqcif_pane_ParamLimits

0xaa8a,	// (0x00047888) video_down_subqcif_pane

0xaaa2,	// (0x000478a0) video_down_subqcif_pane_cp_ParamLimits

0xaaa2,	// (0x000478a0) video_down_subqcif_pane_cp

0xaac8,	// (0x000478c6) im_reading_pane_ParamLimits

0xaac8,	// (0x000478c6) im_reading_pane

0x36f9,	// (0x000404f7) im_writing_pane_ParamLimits

0x36f9,	// (0x000404f7) im_writing_pane

0x3717,	// (0x00040515) im_reading_pane_t1

0xaae2,	// (0x000478e0) list_im_pane

0xaaf3,	// (0x000478f1) scroll_pane_cp07

0x376b,	// (0x00040569) im_writing_pane_t1_ParamLimits

0x376b,	// (0x00040569) im_writing_pane_t1

0xab0c,	// (0x0004790a) im_writing_pane_t2_ParamLimits

0xab0c,	// (0x0004790a) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004c071) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004c071) im_writing_pane_t

0xa4f5,	// (0x000472f3) input_focus_pane_cp04

0xa4f5,	// (0x000472f3) input_focus_pane_cp05

0x3780,	// (0x0004057e) list_im_single_pane_ParamLimits

0x3780,	// (0x0004057e) list_im_single_pane

0x37a4,	// (0x000405a2) list_single_im_pane_t1

0x53a3,	// (0x000421a1) blid_accuracy_pane

0x53ab,	// (0x000421a9) blid_compass_pane

0x53b5,	// (0x000421b3) main_location_t1

0x53c3,	// (0x000421c1) main_location_t2

0x53d1,	// (0x000421cf) main_location_t3

0x0002,

0xf5da,	// (0x0004c3d8) main_location_t

0xa4f5,	// (0x000472f3) aid_levels_location

0xa878,	// (0x00047676) blid_accuracy_pane_g1

0xa878,	// (0x00047676) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d3) blid_accuracy_pane_g

0xab54,	// (0x00047952) wml_content_pane

0xab92,	// (0x00047990) wml_button_pane_ParamLimits

0xab92,	// (0x00047990) wml_button_pane

0x37b3,	// (0x000405b1) wml_list_single_large_pane_ParamLimits

0x37b3,	// (0x000405b1) wml_list_single_large_pane

0x37dd,	// (0x000405db) wml_list_single_medium_pane_ParamLimits

0x37dd,	// (0x000405db) wml_list_single_medium_pane

0x380e,	// (0x0004060c) wml_list_single_small_pane_ParamLimits

0x380e,	// (0x0004060c) wml_list_single_small_pane

0xaba6,	// (0x000479a4) wml_selection_box_pane_ParamLimits

0xaba6,	// (0x000479a4) wml_selection_box_pane

0xabb9,	// (0x000479b7) wml_list_single_pane_t1

0xabc8,	// (0x000479c6) wml_list_single_medium_pane_t1

0xabd7,	// (0x000479d5) wml_list_single_large_pane_t1

0xabe6,	// (0x000479e4) input_focus_pane_cp02_ParamLimits

0xabe6,	// (0x000479e4) input_focus_pane_cp02

0xabf9,	// (0x000479f7) wml_selection_box_pane_g1

0xac02,	// (0x00047a00) wml_selection_box_pane_t1_ParamLimits

0xac02,	// (0x00047a00) wml_selection_box_pane_t1

0xa75e,	// (0x0004755c) bg_wml_button_pane_ParamLimits

0xa75e,	// (0x0004755c) bg_wml_button_pane

0xac1a,	// (0x00047a18) wml_button_pane_g1

0xac22,	// (0x00047a20) wml_button_pane_t1

0xac1a,	// (0x00047a18) wml_button_bg_pane_g1

0xac32,	// (0x00047a30) wml_button_bg_pane_g2

0xac3a,	// (0x00047a38) wml_button_bg_pane_g3

0xac42,	// (0x00047a40) wml_button_bg_pane_g4

0xac4a,	// (0x00047a48) wml_button_bg_pane_g5

0xac52,	// (0x00047a50) wml_button_bg_pane_g6

0xac5a,	// (0x00047a58) wml_button_bg_pane_g7

0xac62,	// (0x00047a60) wml_button_bg_pane_g8

0xac6a,	// (0x00047a68) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004c076) wml_button_bg_pane_g

0x3848,	// (0x00040646) bg_list_pane_cp02

0xac72,	// (0x00047a70) mce_header_pane_ParamLimits

0xac72,	// (0x00047a70) mce_header_pane

0xac88,	// (0x00047a86) mce_icon_pane

0xac88,	// (0x00047a86) mce_image_pane

0xac91,	// (0x00047a8f) mce_text_pane_ParamLimits

0xac91,	// (0x00047a8f) mce_text_pane

0x3852,	// (0x00040650) scroll_pane_cp03

0xab8a,	// (0x00047988) scroll_pane_cp04

0xaca4,	// (0x00047aa2) scroll_pane_cp05_ParamLimits

0xaca4,	// (0x00047aa2) scroll_pane_cp05

0x385c,	// (0x0004065a) mce_header_field_pane_ParamLimits

0x385c,	// (0x0004065a) mce_header_field_pane

0x387c,	// (0x0004067a) mce_header_field_pane_2_ParamLimits

0x387c,	// (0x0004067a) mce_header_field_pane_2

0x3892,	// (0x00040690) mce_header_field_pane_3

0x389a,	// (0x00040698) list_single_mce_message_pane_ParamLimits

0x389a,	// (0x00040698) list_single_mce_message_pane

0x38c5,	// (0x000406c3) list_single_mce_smart_pane_ParamLimits

0x38c5,	// (0x000406c3) list_single_mce_smart_pane

0xacb0,	// (0x00047aae) input_focus_pane_cp03

0xacb9,	// (0x00047ab7) list_header_data_pane

0x38fb,	// (0x000406f9) mce_header_field_pane_t1

0x3909,	// (0x00040707) list_single_mce_header_pane_ParamLimits

0x3909,	// (0x00040707) list_single_mce_header_pane

0xacc1,	// (0x00047abf) list_single_mce_header_pane_t1

0xacd0,	// (0x00047ace) list_single_mce_message_pane_g1

0xacd8,	// (0x00047ad6) list_single_mce_message_pane_t1

0x395b,	// (0x00040759) bg_cale_heading_pane_cp01_ParamLimits

0x395b,	// (0x00040759) bg_cale_heading_pane_cp01

0xace6,	// (0x00047ae4) bg_cale_pane_cp02_ParamLimits

0xace6,	// (0x00047ae4) bg_cale_pane_cp02

0x399e,	// (0x0004079c) cale_month_corner_pane

0x39b8,	// (0x000407b6) cale_month_day_heading_pane_ParamLimits

0x39b8,	// (0x000407b6) cale_month_day_heading_pane

0x3a13,	// (0x00040811) cale_month_pane_g1_ParamLimits

0x3a13,	// (0x00040811) cale_month_pane_g1

0x3a4b,	// (0x00040849) cale_month_pane_g2_ParamLimits

0x3a4b,	// (0x00040849) cale_month_pane_g2

0x3a74,	// (0x00040872) cale_month_pane_g3_ParamLimits

0x3a74,	// (0x00040872) cale_month_pane_g3

0x3ac0,	// (0x000408be) cale_month_pane_g4_ParamLimits

0x3ac0,	// (0x000408be) cale_month_pane_g4

0x3b0c,	// (0x0004090a) cale_month_pane_g5_ParamLimits

0x3b0c,	// (0x0004090a) cale_month_pane_g5

0x3b58,	// (0x00040956) cale_month_pane_g6_ParamLimits

0x3b58,	// (0x00040956) cale_month_pane_g6

0x3ba4,	// (0x000409a2) cale_month_pane_g7_ParamLimits

0x3ba4,	// (0x000409a2) cale_month_pane_g7

0x3c08,	// (0x00040a06) cale_month_pane_g8_ParamLimits

0x3c08,	// (0x00040a06) cale_month_pane_g8

0x3c6c,	// (0x00040a6a) cale_month_pane_g9_ParamLimits

0x3c6c,	// (0x00040a6a) cale_month_pane_g9

0x3cca,	// (0x00040ac8) cale_month_pane_g10_ParamLimits

0x3cca,	// (0x00040ac8) cale_month_pane_g10

0x3d26,	// (0x00040b24) cale_month_pane_g11_ParamLimits

0x3d26,	// (0x00040b24) cale_month_pane_g11

0x3d7a,	// (0x00040b78) cale_month_pane_g12_ParamLimits

0x3d7a,	// (0x00040b78) cale_month_pane_g12

0x3dd0,	// (0x00040bce) cale_month_pane_g13_ParamLimits

0x3dd0,	// (0x00040bce) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004c089) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004c089) cale_month_pane_g

0x3e26,	// (0x00040c24) cale_month_week_pane

0x3e3b,	// (0x00040c39) grid_cale_month_pane_ParamLimits

0x3e3b,	// (0x00040c39) grid_cale_month_pane

0x3e89,	// (0x00040c87) cale_month_day_heading_pane_t1

0x3f0f,	// (0x00040d0d) cale_month_day_heading_pane_t2

0x3fa0,	// (0x00040d9e) cale_month_day_heading_pane_t3

0x4031,	// (0x00040e2f) cale_month_day_heading_pane_t4

0x40c2,	// (0x00040ec0) cale_month_day_heading_pane_t5

0x4153,	// (0x00040f51) cale_month_day_heading_pane_t6

0x41e4,	// (0x00040fe2) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004c0a4) cale_month_day_heading_pane_t

0xa98e,	// (0x0004778c) bg_cale_side_pane_cp01

0x428d,	// (0x0004108b) cale_month_week_pane_t1

0x42a6,	// (0x000410a4) cale_month_week_pane_t2

0x42bf,	// (0x000410bd) cale_month_week_pane_t3

0x42d8,	// (0x000410d6) cale_month_week_pane_t4

0x42f1,	// (0x000410ef) cale_month_week_pane_t5

0x4312,	// (0x00041110) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004c0b3) cale_month_week_pane_t

0x4333,	// (0x00041131) cell_cale_month_pane_ParamLimits

0x4333,	// (0x00041131) cell_cale_month_pane

0x4455,	// (0x00041253) cell_cale_month_pane_g1

0x4461,	// (0x0004125f) cell_cale_month_pane_t1_ParamLimits

0x4461,	// (0x0004125f) cell_cale_month_pane_t1

0xa99c,	// (0x0004779a) grid_highlight_pane_cp08

0xa878,	// (0x00047676) main_smil_g1

0x4481,	// (0x0004127f) smil_status_pane

0xad25,	// (0x00047b23) smil_text_pane

0xc694,	// (0x00049492) bg_popup_call3_rect_pane_g8

0xc69c,	// (0x0004949a) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004c36c) bg_popup_call3_rect_pane_g

0xc8e3,	// (0x000496e1) smil_status_volume_pane_g1

0xad2f,	// (0x00047b2d) smil_status_pane_t1

0x57cd,	// (0x000425cb) volume_smil_pane

0xad46,	// (0x00047b44) list_smil_text_pane

0x4494,	// (0x00041292) scroll_pane_cp011

0x449f,	// (0x0004129d) smil_text_list_pane_t1_ParamLimits

0x449f,	// (0x0004129d) smil_text_list_pane_t1

0x4517,	// (0x00041315) aid_volume_smil_ParamLimits

0x4517,	// (0x00041315) aid_volume_smil

0xa878,	// (0x00047676) smil_volume_pane_g1

0xa878,	// (0x00047676) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d3) smil_volume_pane_g

0x2ae7,	// (0x0003f8e5) listscroll_cale_day_pane

0xad50,	// (0x00047b4e) bg_cale_pane

0xad68,	// (0x00047b66) list_cale_pane

0xad8b,	// (0x00047b89) scroll_pane_cp09

0xad9c,	// (0x00047b9a) cale_bg_pane_g1

0xada4,	// (0x00047ba2) cale_bg_pane_g2

0xadac,	// (0x00047baa) cale_bg_pane_g3

0xadb4,	// (0x00047bb2) cale_bg_pane_g4

0xadbc,	// (0x00047bba) cale_bg_pane_g5

0xadc4,	// (0x00047bc2) cale_bg_pane_g6

0xadcc,	// (0x00047bca) cale_bg_pane_g7

0xadd4,	// (0x00047bd2) cale_bg_pane_g8

0xaddc,	// (0x00047bda) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004c0d8) cale_bg_pane_g

0x4541,	// (0x0004133f) list_cale_time_pane_ParamLimits

0x4541,	// (0x0004133f) list_cale_time_pane

0xade4,	// (0x00047be2) list_cale_time_pane_g1_ParamLimits

0xade4,	// (0x00047be2) list_cale_time_pane_g1

0xadf0,	// (0x00047bee) list_cale_time_pane_g2_ParamLimits

0xadf0,	// (0x00047bee) list_cale_time_pane_g2

0x4563,	// (0x00041361) list_cale_time_pane_g3_ParamLimits

0x4563,	// (0x00041361) list_cale_time_pane_g3

0x4571,	// (0x0004136f) list_cale_time_pane_g4_ParamLimits

0x4571,	// (0x0004136f) list_cale_time_pane_g4

0x457f,	// (0x0004137d) list_cale_time_pane_g5_ParamLimits

0x457f,	// (0x0004137d) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004c0eb) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004c0eb) list_cale_time_pane_g

0xae0a,	// (0x00047c08) list_cale_time_pane_t1_ParamLimits

0xae0a,	// (0x00047c08) list_cale_time_pane_t1

0xae32,	// (0x00047c30) list_cale_time_pane_t2_ParamLimits

0xae32,	// (0x00047c30) list_cale_time_pane_t2

0x4846,	// (0x00041644) aid_blid_cardinal_pane

0x4888,	// (0x00041686) compass_pane_t4

0xae5a,	// (0x00047c58) list_cale_time_pane_t4_ParamLimits

0xae5a,	// (0x00047c58) list_cale_time_pane_t4

0x4896,	// (0x00041694) compass_pane_t5

0x48a6,	// (0x000416a4) compass_pane_t6

0x48b4,	// (0x000416b2) compass_pane_t7

0xb325,	// (0x00048123) navi_pane_cc_t1

0xb50a,	// (0x00048308) aid_phob_thumbnail_center_pane

0x4ea9,	// (0x00041ca7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004c0f8) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004c0f8) list_cale_time_pane_t

0xa14c,	// (0x00046f4a) bg_popup_window_pane_cp02_ParamLimits

0xa14c,	// (0x00046f4a) bg_popup_window_pane_cp02

0xae82,	// (0x00047c80) heading_pane_cp01_ParamLimits

0xae82,	// (0x00047c80) heading_pane_cp01

0xae8e,	// (0x00047c8c) loc_req_pane_ParamLimits

0xae8e,	// (0x00047c8c) loc_req_pane

0xae9e,	// (0x00047c9c) loc_type_pane_ParamLimits

0xae9e,	// (0x00047c9c) loc_type_pane

0xaeb0,	// (0x00047cae) loc_type_pane_t1_ParamLimits

0xaeb0,	// (0x00047cae) loc_type_pane_t1

0xaec2,	// (0x00047cc0) loc_type_pane_t2_ParamLimits

0xaec2,	// (0x00047cc0) loc_type_pane_t2

0xaed4,	// (0x00047cd2) loc_type_pane_t3_ParamLimits

0xaed4,	// (0x00047cd2) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004c0ff) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004c0ff) loc_type_pane_t

0xaee6,	// (0x00047ce4) list_loc_req_pane

0xaef0,	// (0x00047cee) scroll_pane_cp012

0x458d,	// (0x0004138b) list_single_loc_request_popup_menu_pane_ParamLimits

0x458d,	// (0x0004138b) list_single_loc_request_popup_menu_pane

0xaefb,	// (0x00047cf9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaefb,	// (0x00047cf9) list_single_loc_request_popup_menu_pane_g1

0xaf07,	// (0x00047d05) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf07,	// (0x00047d05) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004c106) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004c106) list_single_loc_request_popup_menu_pane_g

0xaf13,	// (0x00047d11) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf13,	// (0x00047d11) list_single_loc_request_popup_menu_pane_t1

0x459f,	// (0x0004139d) bg_popup_window_pane_cp03_ParamLimits

0x459f,	// (0x0004139d) bg_popup_window_pane_cp03

0x45ad,	// (0x000413ab) heading_loc_req_pane_ParamLimits

0x45ad,	// (0x000413ab) heading_loc_req_pane

0x45b9,	// (0x000413b7) popup_dyc_status_message_window_g1_ParamLimits

0x45b9,	// (0x000413b7) popup_dyc_status_message_window_g1

0x45c5,	// (0x000413c3) popup_dyc_status_message_window_t1_ParamLimits

0x45c5,	// (0x000413c3) popup_dyc_status_message_window_t1

0x45d7,	// (0x000413d5) popup_dyc_status_message_window_t2_ParamLimits

0x45d7,	// (0x000413d5) popup_dyc_status_message_window_t2

0x45e9,	// (0x000413e7) popup_dyc_status_message_window_t3_ParamLimits

0x45e9,	// (0x000413e7) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004c10b) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004c10b) popup_dyc_status_message_window_t

0xa4f5,	// (0x000472f3) bg_heading_pane_cp01

0xaf29,	// (0x00047d27) heading_loc_req_pane_g1

0xaf31,	// (0x00047d2f) heading_loc_req_pane_g2

0xaf39,	// (0x00047d37) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004c112) heading_loc_req_pane_g

0xaf41,	// (0x00047d3f) heading_loc_req_pane_t1

0xaf50,	// (0x00047d4e) bg_popup_sub_pane_cp01_ParamLimits

0xaf50,	// (0x00047d4e) bg_popup_sub_pane_cp01

0xaf5e,	// (0x00047d5c) popup_cale_events_window_g1_ParamLimits

0xaf5e,	// (0x00047d5c) popup_cale_events_window_g1

0xaf7e,	// (0x00047d7c) popup_cale_events_window_g2_ParamLimits

0xaf7e,	// (0x00047d7c) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004c146) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004c146) popup_cale_events_window_g

0xaf9e,	// (0x00047d9c) popup_cale_events_window_t1_ParamLimits

0xaf9e,	// (0x00047d9c) popup_cale_events_window_t1

0xafb0,	// (0x00047dae) popup_cale_events_window_t2_ParamLimits

0xafb0,	// (0x00047dae) popup_cale_events_window_t2

0xafee,	// (0x00047dec) popup_cale_events_window_t3_ParamLimits

0xafee,	// (0x00047dec) popup_cale_events_window_t3

0xb028,	// (0x00047e26) popup_cale_events_window_t4_ParamLimits

0xb028,	// (0x00047e26) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004c14b) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004c14b) popup_cale_events_window_t

0x4613,	// (0x00041411) call_type_pane

0xb078,	// (0x00047e76) popup_call_status_window_g1

0x461f,	// (0x0004141d) popup_call_status_window_g2

0x462b,	// (0x00041429) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004c154) popup_call_status_window_g

0xb086,	// (0x00047e84) call_type_pane_g1

0xb08f,	// (0x00047e8d) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004c15b) call_type_pane_g

0xa4f5,	// (0x000472f3) bg_popup_sub_pane_cp02

0xb098,	// (0x00047e96) listscroll_popup_wml_pane

0xb0a0,	// (0x00047e9e) list_wml_pane

0xb0aa,	// (0x00047ea8) scroll_pane_cp013

0xb0b5,	// (0x00047eb3) list_single_graphic_popup_wml_pane_ParamLimits

0xb0b5,	// (0x00047eb3) list_single_graphic_popup_wml_pane

0xa878,	// (0x00047676) list_single_graphic_popup_wml_pane_g1

0xb0c9,	// (0x00047ec7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004c160) list_single_graphic_popup_wml_pane_g

0xb0d1,	// (0x00047ecf) list_single_graphic_popup_wml_pane_t1

0xb0e7,	// (0x00047ee5) aid_call_pane

0xa756,	// (0x00047554) popup_clock_analogue_window_g1

0xa756,	// (0x00047554) popup_clock_analogue_window_g2

0x4637,	// (0x00041435) popup_clock_analogue_window_g3

0x4637,	// (0x00041435) popup_clock_analogue_window_g4

0xa878,	// (0x00047676) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004c165) popup_clock_analogue_window_g

0x463f,	// (0x0004143d) popup_clock_analogue_window_t1

0x464d,	// (0x0004144b) clock_digital_number_pane_ParamLimits

0x464d,	// (0x0004144b) clock_digital_number_pane

0x4659,	// (0x00041457) clock_digital_number_pane_cp02_ParamLimits

0x4659,	// (0x00041457) clock_digital_number_pane_cp02

0x4665,	// (0x00041463) clock_digital_number_pane_cp03_ParamLimits

0x4665,	// (0x00041463) clock_digital_number_pane_cp03

0x4671,	// (0x0004146f) clock_digital_number_pane_cp04_ParamLimits

0x4671,	// (0x0004146f) clock_digital_number_pane_cp04

0x4681,	// (0x0004147f) clock_digital_separator_pane_ParamLimits

0x4681,	// (0x0004147f) clock_digital_separator_pane

0x468d,	// (0x0004148b) popup_clock_digital_window_t1

0xa878,	// (0x00047676) clock_digital_number_pane_g1

0xa878,	// (0x00047676) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d3) clock_digital_number_pane_g

0xa878,	// (0x00047676) clock_digital_separator_pane_g1

0xa878,	// (0x00047676) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004c0d3) clock_digital_separator_pane_g

0xa4f5,	// (0x000472f3) bg_popup_window_pane_cp04

0xb0ef,	// (0x00047eed) heading_pane_cp03

0xb0f7,	// (0x00047ef5) listscroll_popup_gms_pane

0xb0ff,	// (0x00047efd) grid_large_graphic_popup_pane

0xb109,	// (0x00047f07) listscroll_popup_gms_pane_g1

0xb111,	// (0x00047f0f) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004c170) listscroll_popup_gms_pane_g

0xab8a,	// (0x00047988) scroll_pane_cp014

0x46aa,	// (0x000414a8) cell_large_graphic_popup_pane_ParamLimits

0x46aa,	// (0x000414a8) cell_large_graphic_popup_pane

0x46c2,	// (0x000414c0) cell_large_graphic_popup_pane_g1_ParamLimits

0x46c2,	// (0x000414c0) cell_large_graphic_popup_pane_g1

0xb119,	// (0x00047f17) cell_large_graphic_popup_pane_g2_ParamLimits

0xb119,	// (0x00047f17) cell_large_graphic_popup_pane_g2

0xb125,	// (0x00047f23) cell_large_graphic_popup_pane_g3_ParamLimits

0xb125,	// (0x00047f23) cell_large_graphic_popup_pane_g3

0xb132,	// (0x00047f30) cell_large_graphic_popup_pane_g4_ParamLimits

0xb132,	// (0x00047f30) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004c175) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004c175) cell_large_graphic_popup_pane_g

0xb142,	// (0x00047f40) grid_highlight_pane_cp010

0xa878,	// (0x00047676) bg_popup_call_pane_g1

0xb14c,	// (0x00047f4a) list_single_graphic_popup_conf_pane_ParamLimits

0xb14c,	// (0x00047f4a) list_single_graphic_popup_conf_pane

0xb15f,	// (0x00047f5d) list_highlight_pane_cp01

0xb168,	// (0x00047f66) list_single_graphic_popup_conf_pane_g1

0xb170,	// (0x00047f6e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004c17e) list_single_graphic_popup_conf_pane_g

0xb178,	// (0x00047f76) list_single_graphic_popup_conf_pane_t1

0xb186,	// (0x00047f84) linegrid_cams_pane_g1

0x46ce,	// (0x000414cc) linegrid_cams_pane_g2

0xa9cf,	// (0x000477cd) linegrid_cams_pane_g3

0xb18f,	// (0x00047f8d) linegrid_cams_pane_g4

0x46d7,	// (0x000414d5) linegrid_cams_pane_g5

0x46e0,	// (0x000414de) linegrid_cams_pane_g6

0xa9d8,	// (0x000477d6) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004c183) linegrid_cams_pane_g

0xb198,	// (0x00047f96) popup_clock_analogue_window

0xb198,	// (0x00047f96) popup_clock_digital_window

0xa4f5,	// (0x000472f3) popup_phob_thumbnail_window

0xa878,	// (0x00047676) call_video_uplink_pane_g1

0xb1a1,	// (0x00047f9f) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004c192) call_video_uplink_pane_g

0xb1a9,	// (0x00047fa7) video_uplink_pane

0xb1b1,	// (0x00047faf) mce_image_pane_g1

0x46e9,	// (0x000414e7) mce_image_pane_g2

0x46f3,	// (0x000414f1) mce_image_pane_g3

0x46fb,	// (0x000414f9) mce_image_pane_g4

0x4703,	// (0x00041501) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004c197) mce_image_pane_g

0xb1bb,	// (0x00047fb9) control_top_pane_stacon_cp01_ParamLimits

0xb1bb,	// (0x00047fb9) control_top_pane_stacon_cp01

0xb1cf,	// (0x00047fcd) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1cf,	// (0x00047fcd) uni_indicator_pane_stacon_cp01

0xb1e0,	// (0x00047fde) bg_popup_sub_pane_cp03

0xb1ea,	// (0x00047fe8) chi_dic_find_pane

0x470b,	// (0x00041509) listscroll_chi_dic_pane

0xb1f2,	// (0x00047ff0) main_pane_chidic_g1

0xb1fa,	// (0x00047ff8) chi_dic_find_pane_t1

0xb208,	// (0x00048006) find_chidic_pane

0xb211,	// (0x0004800f) chi_dic_list_pane_ParamLimits

0xb211,	// (0x0004800f) chi_dic_list_pane

0xb222,	// (0x00048020) scroll_pane_cp020

0xb22a,	// (0x00048028) find_chidic_pane_t1

0xa4f5,	// (0x000472f3) input_focus_pane_cp06

0x471f,	// (0x0004151d) list_chi_dic_pane_ParamLimits

0x471f,	// (0x0004151d) list_chi_dic_pane

0x4739,	// (0x00041537) list_chi_dic_pane_t1_ParamLimits

0x4739,	// (0x00041537) list_chi_dic_pane_t1

0xa4f5,	// (0x000472f3) list_highlight_pane_cp020

0xb239,	// (0x00048037) bg_cale_heading_pane_g1

0x474c,	// (0x0004154a) bg_cale_heading_pane_g2

0x4754,	// (0x00041552) bg_cale_heading_pane_g3

0x475c,	// (0x0004155a) bg_cale_heading_pane_g4

0x4766,	// (0x00041564) bg_cale_heading_pane_g5

0x4770,	// (0x0004156e) bg_cale_heading_pane_g6

0x4778,	// (0x00041576) bg_cale_heading_pane_g7

0x4780,	// (0x0004157e) bg_cale_heading_pane_g8

0x478a,	// (0x00041588) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004c1a2) bg_cale_heading_pane_g

0xb239,	// (0x00048037) bg_cale_side_pane_g1

0x4794,	// (0x00041592) bg_cale_side_pane_g2

0x479e,	// (0x0004159c) bg_cale_side_pane_g3

0x47a8,	// (0x000415a6) bg_cale_side_pane_g4

0x47b2,	// (0x000415b0) bg_cale_side_pane_g5

0x47bc,	// (0x000415ba) bg_cale_side_pane_g6

0x47c6,	// (0x000415c4) bg_cale_side_pane_g7

0x47d0,	// (0x000415ce) bg_cale_side_pane_g8

0x47d8,	// (0x000415d6) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004c1b5) bg_cale_side_pane_g

0x47e0,	// (0x000415de) popup_call_status_window_ParamLimits

0x47e0,	// (0x000415de) popup_call_status_window

0xb241,	// (0x0004803f) stacon_top_pane

0xb249,	// (0x00048047) status_pane_ParamLimits

0xb249,	// (0x00048047) status_pane

0xb25e,	// (0x0004805c) status_small_pane

0xb266,	// (0x00048064) control_pane

0xa4f5,	// (0x000472f3) stacon_bottom_pane

0xb26e,	// (0x0004806c) list_single_mce_smart_pane_t1_ParamLimits

0xb26e,	// (0x0004806c) list_single_mce_smart_pane_t1

0xb281,	// (0x0004807f) list_single_mce_smart_pane_t2_ParamLimits

0xb281,	// (0x0004807f) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004c1c8) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004c1c8) list_single_mce_smart_pane_t

0x47ec,	// (0x000415ea) compass_pane

0x47f8,	// (0x000415f6) main_location2_pane_t1

0x480c,	// (0x0004160a) main_location2_pane_t2

0x4820,	// (0x0004161e) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004c1cd) main_location2_pane_t

0xb2a0,	// (0x0004809e) compass_pane_g1_ParamLimits

0xb2a0,	// (0x0004809e) compass_pane_g1

0x486a,	// (0x00041668) compass_pane_t1

0x4879,	// (0x00041677) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004c1d6) compass_pane_t

0x48c4,	// (0x000416c2) text_secondary_cp61

0xb31c,	// (0x0004811a) navi_pane_cams_g5

0xb398,	// (0x00048196) navi_pane_im_t1

0xb3a6,	// (0x000481a4) navi_pane_mp_g1_ParamLimits

0xb3a6,	// (0x000481a4) navi_pane_mp_g1

0xb3ba,	// (0x000481b8) navi_pane_mp_g2_ParamLimits

0xb3ba,	// (0x000481b8) navi_pane_mp_g2

0xb3c6,	// (0x000481c4) navi_pane_mp_g3_ParamLimits

0xb3c6,	// (0x000481c4) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004c1ea) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004c1ea) navi_pane_mp_g

0xb3d2,	// (0x000481d0) navi_pane_mp_t1

0xb3e0,	// (0x000481de) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004c1f1) navi_pane_mp_t

0xb44b,	// (0x00048249) navi_pane_vt_g1

0xb3d2,	// (0x000481d0) navi_pane_vt_t1

0xb453,	// (0x00048251) navi_slider_pane

0xb463,	// (0x00048261) zooming_pane

0xb46b,	// (0x00048269) navi_slider_pane_g1

0x48ff,	// (0x000416fd) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004c1f8) navi_slider_pane_g

0xb48f,	// (0x0004828d) aid_levels_zoom

0xb497,	// (0x00048295) zooming_pane_g1

0xb49f,	// (0x0004829d) zooming_pane_g2

0xb49f,	// (0x0004829d) zooming_pane_g3

0x0002,

0xf409,	// (0x0004c207) zooming_pane_g

0xb4a7,	// (0x000482a5) level_10_zoom

0xb4b0,	// (0x000482ae) level_11_zoom

0xb4b9,	// (0x000482b7) level_1_zoom

0xb4c2,	// (0x000482c0) level_2_zoom

0xb4cb,	// (0x000482c9) level_3_zoom

0xb4d4,	// (0x000482d2) level_4_zoom

0xb4dd,	// (0x000482db) level_5_zoom

0xb4e6,	// (0x000482e4) level_6_zoom

0xb4ef,	// (0x000482ed) level_7_zoom

0xb4f8,	// (0x000482f6) level_8_zoom

0xb501,	// (0x000482ff) level_9_zoom

0xb512,	// (0x00048310) popup_phob_thumbnail_window_g1

0xb51a,	// (0x00048318) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004c20e) popup_phob_thumbnail_window_g

0xc7f6,	// (0x000495f4) level_1_location

0xc7fe,	// (0x000495fc) level_2_location

0xc806,	// (0x00049604) level_3_location

0xc80e,	// (0x0004960c) level_4_location

0xb463,	// (0x00048261) level_5_location

0x4911,	// (0x0004170f) mce_icon_pane_g1

0x4919,	// (0x00041717) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004c213) mce_icon_pane_g

0x4921,	// (0x0004171f) main_mup_pane_g1_ParamLimits

0x4921,	// (0x0004171f) main_mup_pane_g1

0x4939,	// (0x00041737) main_mup_pane_g2_ParamLimits

0x4939,	// (0x00041737) main_mup_pane_g2

0x4955,	// (0x00041753) main_mup_pane_g3_ParamLimits

0x4955,	// (0x00041753) main_mup_pane_g3

0x4971,	// (0x0004176f) main_mup_pane_g4_ParamLimits

0x4971,	// (0x0004176f) main_mup_pane_g4

0x498d,	// (0x0004178b) main_mup_pane_g5_ParamLimits

0x498d,	// (0x0004178b) main_mup_pane_g5

0x49ae,	// (0x000417ac) main_mup_pane_g6_ParamLimits

0x49ae,	// (0x000417ac) main_mup_pane_g6

0x49ca,	// (0x000417c8) main_mup_pane_g7_ParamLimits

0x49ca,	// (0x000417c8) main_mup_pane_g7

0x49e6,	// (0x000417e4) main_mup_pane_g8_ParamLimits

0x49e6,	// (0x000417e4) main_mup_pane_g8

0x4a06,	// (0x00041804) main_mup_pane_g9_ParamLimits

0x4a06,	// (0x00041804) main_mup_pane_g9

0x4a25,	// (0x00041823) main_mup_pane_g10_ParamLimits

0x4a25,	// (0x00041823) main_mup_pane_g10

0x4a44,	// (0x00041842) main_mup_pane_g11_ParamLimits

0x4a44,	// (0x00041842) main_mup_pane_g11

0x4a5c,	// (0x0004185a) main_mup_pane_g12_ParamLimits

0x4a5c,	// (0x0004185a) main_mup_pane_g12

0x4a6a,	// (0x00041868) main_mup_pane_g13_ParamLimits

0x4a6a,	// (0x00041868) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004c218) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004c218) main_mup_pane_g

0x4a80,	// (0x0004187e) main_mup_pane_t1_ParamLimits

0x4a80,	// (0x0004187e) main_mup_pane_t1

0x4a9d,	// (0x0004189b) main_mup_pane_t2_ParamLimits

0x4a9d,	// (0x0004189b) main_mup_pane_t2

0x4ab7,	// (0x000418b5) main_mup_pane_t3_ParamLimits

0x4ab7,	// (0x000418b5) main_mup_pane_t3

0x4ad1,	// (0x000418cf) main_mup_pane_t4_ParamLimits

0x4ad1,	// (0x000418cf) main_mup_pane_t4

0x4ae3,	// (0x000418e1) main_mup_pane_t5_ParamLimits

0x4ae3,	// (0x000418e1) main_mup_pane_t5

0x4af5,	// (0x000418f3) main_mup_pane_t6_ParamLimits

0x4af5,	// (0x000418f3) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004c233) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004c233) main_mup_pane_t

0x4b0b,	// (0x00041909) mup_progress_pane_ParamLimits

0x4b0b,	// (0x00041909) mup_progress_pane

0x4b17,	// (0x00041915) mup_visualizer_pane_ParamLimits

0x4b17,	// (0x00041915) mup_visualizer_pane

0x4b51,	// (0x0004194f) mup_volume_pane_ParamLimits

0x4b51,	// (0x0004194f) mup_volume_pane

0xb078,	// (0x00047e76) mup_visualizer_pane_g1_ParamLimits

0xb078,	// (0x00047e76) mup_visualizer_pane_g1

0xb078,	// (0x00047e76) mup_visualizer_pane_g2_ParamLimits

0xb078,	// (0x00047e76) mup_visualizer_pane_g2

0xb2a0,	// (0x0004809e) mup_visualizer_pane_g3_ParamLimits

0xb2a0,	// (0x0004809e) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004c240) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004c240) mup_visualizer_pane_g

0xa878,	// (0x00047676) mup_volume_pane_g1

0xb52a,	// (0x00048328) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004c247) mup_volume_pane_g

0xa878,	// (0x00047676) mup_progress_pane_g1

0xb533,	// (0x00048331) mup_progress_pane_g2

0xb53c,	// (0x0004833a) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004c24c) mup_progress_pane_g

0xa4f5,	// (0x000472f3) bg_popup_window_pane_cp05

0xb545,	// (0x00048343) heading_pane_cp02_ParamLimits

0xb545,	// (0x00048343) heading_pane_cp02

0xb55f,	// (0x0004835d) list_popup_blid_pane

0xb567,	// (0x00048365) list_blid_sat_info_pane_ParamLimits

0xb567,	// (0x00048365) list_blid_sat_info_pane

0xb57a,	// (0x00048378) list_blid_sat_info_pane_g1

0xb582,	// (0x00048380) list_blid_sat_info_pane_t1

0x4c5e,	// (0x00041a5c) mup_equalizer_pane_ParamLimits

0x4c5e,	// (0x00041a5c) mup_equalizer_pane

0x4c7f,	// (0x00041a7d) mup_equalizer_pane_cp1_ParamLimits

0x4c7f,	// (0x00041a7d) mup_equalizer_pane_cp1

0x4ca0,	// (0x00041a9e) mup_equalizer_pane_cp2_ParamLimits

0x4ca0,	// (0x00041a9e) mup_equalizer_pane_cp2

0x4cc1,	// (0x00041abf) mup_equalizer_pane_cp3_ParamLimits

0x4cc1,	// (0x00041abf) mup_equalizer_pane_cp3

0x4ce2,	// (0x00041ae0) mup_equalizer_pane_cp4_ParamLimits

0x4ce2,	// (0x00041ae0) mup_equalizer_pane_cp4

0x4d03,	// (0x00041b01) mup_equalizer_pane_cp5

0x4d19,	// (0x00041b17) mup_equalizer_pane_cp6

0x4d31,	// (0x00041b2f) mup_equalizer_pane_cp7

0xc714,	// (0x00049512) bg_popup_call_poc_act_pane_g9

0xc71c,	// (0x0004951a) bg_popup_call_poc_act_pane_g10

0xc724,	// (0x00049522) bg_popup_call_poc_act_pane_g11

0x000a,

0xa75e,	// (0x0004755c) mup_scale_pane

0xa878,	// (0x00047676) mup_scale_pane_g1

0xb590,	// (0x0004838e) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004c268) mup_scale_pane_g

0xb5b4,	// (0x000483b2) msg_data_pane

0xb5bc,	// (0x000483ba) scroll_pane_cp017

0x10a6,	// (0x0003dea4) bg_list_pane_cp04_ParamLimits

0x10a6,	// (0x0003dea4) bg_list_pane_cp04

0xb5c4,	// (0x000483c2) msg_data_pane_g1

0x4d5b,	// (0x00041b59) msg_data_pane_g2

0x4d65,	// (0x00041b63) msg_data_pane_g3

0x4d6d,	// (0x00041b6b) msg_data_pane_g4

0x4d75,	// (0x00041b73) msg_data_pane_g5

0x4d7d,	// (0x00041b7b) msg_data_pane_g6

0x4d85,	// (0x00041b83) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004c277) msg_data_pane_g

0x10ca,	// (0x0003dec8) msg_text_pane_ParamLimits

0x10ca,	// (0x0003dec8) msg_text_pane

0x4d8d,	// (0x00041b8b) qrid_highlight_pane_cp011_ParamLimits

0x4d8d,	// (0x00041b8b) qrid_highlight_pane_cp011

0xa4f5,	// (0x000472f3) msg_body_pane

0xa4f5,	// (0x000472f3) msg_header_pane

0xb5d5,	// (0x000483d3) input_focus_pane_cp07

0x1116,	// (0x0003df14) msg_header_pane_t1_ParamLimits

0x1116,	// (0x0003df14) msg_header_pane_t1

0x1128,	// (0x0003df26) msg_header_pane_t2_ParamLimits

0x1128,	// (0x0003df26) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004c28b) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004c28b) msg_header_pane_t

0xb5ea,	// (0x000483e8) msg_body_pane_g1

0x113a,	// (0x0003df38) msg_body_pane_t1_ParamLimits

0x113a,	// (0x0003df38) msg_body_pane_t1

0x116b,	// (0x0003df69) msg_body_pane_t2_ParamLimits

0x116b,	// (0x0003df69) msg_body_pane_t2

0x117d,	// (0x0003df7b) msg_body_pane_t3_ParamLimits

0x117d,	// (0x0003df7b) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004c290) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004c290) msg_body_pane_t

0x4df9,	// (0x00041bf7) main_viewer_pane_g1_ParamLimits

0x4df9,	// (0x00041bf7) main_viewer_pane_g1

0x4e05,	// (0x00041c03) main_viewer_pane_g2_ParamLimits

0x4e05,	// (0x00041c03) main_viewer_pane_g2

0x4e11,	// (0x00041c0f) main_viewer_pane_g3_ParamLimits

0x4e11,	// (0x00041c0f) main_viewer_pane_g3

0x4e22,	// (0x00041c20) main_viewer_pane_g4_ParamLimits

0x4e22,	// (0x00041c20) main_viewer_pane_g4

0x4e33,	// (0x00041c31) main_viewer_pane_g5_ParamLimits

0x4e33,	// (0x00041c31) main_viewer_pane_g5

0x4e33,	// (0x00041c31) main_viewer_pane_g7_ParamLimits

0x4e33,	// (0x00041c31) main_viewer_pane_g7

0x4e45,	// (0x00041c43) main_viewer_pane_g8_ParamLimits

0x4e45,	// (0x00041c43) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004c2a0) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004c2a0) main_viewer_pane_g

0xb5f2,	// (0x000483f0) viewer_content_pane_ParamLimits

0xb5f2,	// (0x000483f0) viewer_content_pane

0x4e7d,	// (0x00041c7b) main_postcard_pane_g1_ParamLimits

0x4e7d,	// (0x00041c7b) main_postcard_pane_g1

0x4e8b,	// (0x00041c89) main_postcard_pane_g2_ParamLimits

0x4e8b,	// (0x00041c89) main_postcard_pane_g2

0x4e99,	// (0x00041c97) main_postcard_pane_g3_ParamLimits

0x4e99,	// (0x00041c97) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004c2b1) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004c2b1) main_postcard_pane_g

0x4ea9,	// (0x00041ca7) main_postcard_pane_g4

0xc8f6,	// (0x000496f4) smil_status_volume_pane_g2

0x4ed5,	// (0x00041cd3) postcard_pane_ParamLimits

0x4ed5,	// (0x00041cd3) postcard_pane

0xb078,	// (0x00047e76) postcard_pane_g1_ParamLimits

0xb078,	// (0x00047e76) postcard_pane_g1

0x4f07,	// (0x00041d05) postcard_pane_g2_ParamLimits

0x4f07,	// (0x00041d05) postcard_pane_g2

0x4f13,	// (0x00041d11) postcard_pane_g3_ParamLimits

0x4f13,	// (0x00041d11) postcard_pane_g3

0xb600,	// (0x000483fe) postcard_pane_g4_ParamLimits

0xb600,	// (0x000483fe) postcard_pane_g4

0x4f1f,	// (0x00041d1d) postcard_pane_g5_ParamLimits

0x4f1f,	// (0x00041d1d) postcard_pane_g5

0x4f2b,	// (0x00041d29) postcard_pane_g6_ParamLimits

0x4f2b,	// (0x00041d29) postcard_pane_g6

0xb60e,	// (0x0004840c) postcard_pane_g7_ParamLimits

0xb60e,	// (0x0004840c) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004c2be) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004c2be) postcard_pane_g

0x4f37,	// (0x00041d35) main_mp2_pane_g1_ParamLimits

0x4f37,	// (0x00041d35) main_mp2_pane_g1

0x4f43,	// (0x00041d41) main_mp2_pane_g2_ParamLimits

0x4f43,	// (0x00041d41) main_mp2_pane_g2

0x4f4f,	// (0x00041d4d) main_mp2_pane_g3_ParamLimits

0x4f4f,	// (0x00041d4d) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004c2cd) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004c2cd) main_mp2_pane_g

0x4f5b,	// (0x00041d59) main_mp2_pane_t1_ParamLimits

0x4f5b,	// (0x00041d59) main_mp2_pane_t1

0x4f72,	// (0x00041d70) main_mp2_pane_t2_ParamLimits

0x4f72,	// (0x00041d70) main_mp2_pane_t2

0x4f86,	// (0x00041d84) main_mp2_pane_t3_ParamLimits

0x4f86,	// (0x00041d84) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004c2d4) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004c2d4) main_mp2_pane_t

0xb61c,	// (0x0004841a) pec_content_pane_ParamLimits

0xb61c,	// (0x0004841a) pec_content_pane

0xab8a,	// (0x00047988) scroll_pane_cp015

0xb62e,	// (0x0004842c) pec_attribute_pane_ParamLimits

0xb62e,	// (0x0004842c) pec_attribute_pane

0x4f98,	// (0x00041d96) pec_content_pane_g1_ParamLimits

0x4f98,	// (0x00041d96) pec_content_pane_g1

0xb63e,	// (0x0004843c) pec_content_pane_t1_ParamLimits

0xb63e,	// (0x0004843c) pec_content_pane_t1

0xb650,	// (0x0004844e) pec_content_pane_t2_ParamLimits

0xb650,	// (0x0004844e) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004c2db) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004c2db) pec_content_pane_t

0x4fa4,	// (0x00041da2) list_single_graphic_pane_cp01_ParamLimits

0x4fa4,	// (0x00041da2) list_single_graphic_pane_cp01

0xa75e,	// (0x0004755c) bg_popup_sub_pane_cp04

0xb662,	// (0x00048460) popup_mup_playback_window_g1

0xb66e,	// (0x0004846c) popup_mup_playback_window_t1

0xb683,	// (0x00048481) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004c2e0) popup_mup_playback_window_t

0xb6ba,	// (0x000484b8) main_image_pane_g1_ParamLimits

0xb6ba,	// (0x000484b8) main_image_pane_g1

0xb6fd,	// (0x000484fb) scroll_pane_cp018_ParamLimits

0xb6fd,	// (0x000484fb) scroll_pane_cp018

0xb715,	// (0x00048513) scroll_pane_cp016_ParamLimits

0xb715,	// (0x00048513) scroll_pane_cp016

0x503d,	// (0x00041e3b) smil2_image_pane_ParamLimits

0x503d,	// (0x00041e3b) smil2_image_pane

0x506d,	// (0x00041e6b) smil2_root_pane_ParamLimits

0x506d,	// (0x00041e6b) smil2_root_pane

0x5099,	// (0x00041e97) smil2_text_pane_ParamLimits

0x5099,	// (0x00041e97) smil2_text_pane

0xa4f5,	// (0x000472f3) bg_list_pane_cp06

0xb751,	// (0x0004854f) grid_radio_pane

0xa4f5,	// (0x000472f3) bg_popup_window_pane_cp06

0xb759,	// (0x00048557) main_fmradio_pane_t1

0xb0ef,	// (0x00047eed) heading_pane_cp04

0xb767,	// (0x00048565) main_fmradio_pane_t2

0xc72c,	// (0x0004952a) popup_cale_lunar_info_window_g1

0xb775,	// (0x00048573) main_fmradio_pane_t3

0xc734,	// (0x00049532) popup_cale_lunar_info_window_g2

0xb783,	// (0x00048581) main_fmradio_pane_t4

0x0001,

0xb791,	// (0x0004858f) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004c3bb) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004c2f5) main_fmradio_pane_t

0xb79f,	// (0x0004859d) wait_bar_pane_cp03

0xb7a7,	// (0x000485a5) cell_fmradio_pane_ParamLimits

0xb7a7,	// (0x000485a5) cell_fmradio_pane

0xb60e,	// (0x0004840c) cell_fmradio_pane_g1_ParamLimits

0xb60e,	// (0x0004840c) cell_fmradio_pane_g1

0xa4f5,	// (0x000472f3) grid_highlight_pane_cp011

0xb7ba,	// (0x000485b8) poc_content_pane_ParamLimits

0xb7ba,	// (0x000485b8) poc_content_pane

0xb7cc,	// (0x000485ca) scroll_pane_cp019

0x50d9,	// (0x00041ed7) popup_call_poc_act_window_ParamLimits

0x50d9,	// (0x00041ed7) popup_call_poc_act_window

0x50e6,	// (0x00041ee4) popup_call_poc_inact_window_ParamLimits

0x50e6,	// (0x00041ee4) popup_call_poc_inact_window

0xf594,	// (0x0004c392) bg_popup_call_poc_act_pane_g

0xc6a4,	// (0x000494a2) bg_popup_call_poc_inact_pane_g1

0xc6ac,	// (0x000494aa) bg_popup_call_poc_inact_pane_g2

0xb7d4,	// (0x000485d2) popup_call_poc_act_window_g2

0xc6b4,	// (0x000494b2) bg_popup_call_poc_inact_pane_g3

0xc6bc,	// (0x000494ba) bg_popup_call_poc_inact_pane_g4

0xc6c4,	// (0x000494c2) bg_popup_call_poc_inact_pane_g5

0xb7dc,	// (0x000485da) popup_call_poc_act_window_t1_ParamLimits

0xb7dc,	// (0x000485da) popup_call_poc_act_window_t1

0xb804,	// (0x00048602) popup_call_poc_act_window_t2_ParamLimits

0xb804,	// (0x00048602) popup_call_poc_act_window_t2

0xb82c,	// (0x0004862a) popup_call_poc_act_window_t3_ParamLimits

0xb82c,	// (0x0004862a) popup_call_poc_act_window_t3

0xb854,	// (0x00048652) popup_call_poc_act_window_t4_ParamLimits

0xb854,	// (0x00048652) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004c300) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004c300) popup_call_poc_act_window_t

0xc6cc,	// (0x000494ca) bg_popup_call_poc_inact_pane_g6

0xc6d4,	// (0x000494d2) bg_popup_call_poc_inact_pane_g7

0xc6dc,	// (0x000494da) bg_popup_call_poc_inact_pane_g8

0xb866,	// (0x00048664) popup_call_poc_inact_window_g2

0xc6e4,	// (0x000494e2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0004c37f) bg_popup_call_poc_inact_pane_g

0xb86e,	// (0x0004866c) popup_call_poc_inact_window_t1_ParamLimits

0xb86e,	// (0x0004866c) popup_call_poc_inact_window_t1

0xb883,	// (0x00048681) popup_call_poc_inact_window_t2_ParamLimits

0xb883,	// (0x00048681) popup_call_poc_inact_window_t2

0xb898,	// (0x00048696) popup_call_poc_inact_window_t3_ParamLimits

0xb898,	// (0x00048696) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004c309) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004c309) popup_call_poc_inact_window_t

0xc869,	// (0x00049667) context_pane_ParamLimits

0x571a,	// (0x00042518) signal_pane_ParamLimits

0xb463,	// (0x00048261) main_call2_pane

0x568d,	// (0x0004248b) popup_phob_thumbnail2_window_ParamLimits

0x568d,	// (0x0004248b) popup_phob_thumbnail2_window

0x4da7,	// (0x00041ba5) aid_hotspot_pointer_arrow_pane

0x4daf,	// (0x00041bad) aid_hotspot_pointer_hand_pane

0x5408,	// (0x00042206) phob_pre_status_pane_g5

0x30ea,	// (0x0003fee8) cams_zoom_pane_ParamLimits

0x30f6,	// (0x0003fef4) image_vga_pane_ParamLimits

0x3105,	// (0x0003ff03) main_camera_pane_g1_ParamLimits

0x3113,	// (0x0003ff11) main_camera_pane_g2_ParamLimits

0x311f,	// (0x0003ff1d) main_camera_pane_g3_ParamLimits

0x312b,	// (0x0003ff29) main_camera_pane_g4_ParamLimits

0x3137,	// (0x0003ff35) main_camera_pane_g5_ParamLimits

0x3143,	// (0x0003ff41) main_camera_pane_g6_ParamLimits

0x314f,	// (0x0003ff4d) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004c008) main_camera_pane_g_ParamLimits

0x315b,	// (0x0003ff59) main_camera_pane_t1_ParamLimits

0x316d,	// (0x0003ff6b) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004c019) main_camera_pane_t_ParamLimits

0xa75e,	// (0x0004755c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa75e,	// (0x0004755c) bg_popup_preview_window_pane_cp01

0xb8ad,	// (0x000486ab) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ad,	// (0x000486ab) popup_phob_thumbnail2_window_g1

0xa4f5,	// (0x000472f3) call2_cli_visual_pane

0x5102,	// (0x00041f00) popup_call2_audio_conf_window_ParamLimits

0x5102,	// (0x00041f00) popup_call2_audio_conf_window

0x5117,	// (0x00041f15) popup_call2_audio_first_window_ParamLimits

0x5117,	// (0x00041f15) popup_call2_audio_first_window

0x51b5,	// (0x00041fb3) popup_call2_audio_in_window_ParamLimits

0x51b5,	// (0x00041fb3) popup_call2_audio_in_window

0x51f7,	// (0x00041ff5) popup_call2_audio_out_window_ParamLimits

0x51f7,	// (0x00041ff5) popup_call2_audio_out_window

0x5259,	// (0x00042057) popup_call2_audio_second_window_ParamLimits

0x5259,	// (0x00042057) popup_call2_audio_second_window

0x52b7,	// (0x000420b5) popup_call2_audio_wait_window_ParamLimits

0x52b7,	// (0x000420b5) popup_call2_audio_wait_window

0xa4f5,	// (0x000472f3) bg_popup_call2_act_pane_cp03

0xa740,	// (0x0004753e) list_conf_pane_cp

0xb8b9,	// (0x000486b7) popup_call2_audio_conf_window_t1

0xb14c,	// (0x00047f4a) list_single_graphic_popup_conf2_pane_ParamLimits

0xb14c,	// (0x00047f4a) list_single_graphic_popup_conf2_pane

0xb15f,	// (0x00047f5d) list_highlight_pane_cp04

0xb8c7,	// (0x000486c5) list_single_graphic_popup_conf2_pane_g1

0xb170,	// (0x00047f6e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004c310) list_single_graphic_popup_conf2_pane_g

0xb8d1,	// (0x000486cf) list_single_graphic_popup_conf2_pane_t1

0xb8df,	// (0x000486dd) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8df,	// (0x000486dd) bg_popup_call2_act_pane_cp01

0xb969,	// (0x00048767) call_type_pane_cp05_ParamLimits

0xb969,	// (0x00048767) call_type_pane_cp05

0xb9bd,	// (0x000487bb) popup_call2_audio_second_window_g1_ParamLimits

0xb9bd,	// (0x000487bb) popup_call2_audio_second_window_g1

0xba11,	// (0x0004880f) popup_call2_audio_second_window_g2_ParamLimits

0xba11,	// (0x0004880f) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004c315) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004c315) popup_call2_audio_second_window_g

0xba76,	// (0x00048874) popup_call2_audio_second_window_t1_ParamLimits

0xba76,	// (0x00048874) popup_call2_audio_second_window_t1

0xbb31,	// (0x0004892f) popup_call2_audio_second_window_t2_ParamLimits

0xbb31,	// (0x0004892f) popup_call2_audio_second_window_t2

0xbb84,	// (0x00048982) popup_call2_audio_second_window_t3_ParamLimits

0xbb84,	// (0x00048982) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004c31c) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004c31c) popup_call2_audio_second_window_t

0xa4f5,	// (0x000472f3) bg_popup_call2_in_pane_cp02

0xa4ff,	// (0x000472fd) call_type_pane_cp04

0xa507,	// (0x00047305) popup_call2_audio_wait_window_g1

0xa50f,	// (0x0004730d) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004bef3) popup_call2_audio_wait_window_g

0xa517,	// (0x00047315) popup_call2_audio_wait_window_t3

0xbc77,	// (0x00048a75) bg_popup_call2_act_pane_ParamLimits

0xbc77,	// (0x00048a75) bg_popup_call2_act_pane

0xbd37,	// (0x00048b35) call_type_pane_cp03_ParamLimits

0xbd37,	// (0x00048b35) call_type_pane_cp03

0xbd9b,	// (0x00048b99) popup_call2_audio_first_window_g1_ParamLimits

0xbd9b,	// (0x00048b99) popup_call2_audio_first_window_g1

0xbe0b,	// (0x00048c09) popup_call2_audio_first_window_g2_ParamLimits

0xbe0b,	// (0x00048c09) popup_call2_audio_first_window_g2

0xb078,	// (0x00047e76) popup_call2_audio_first_window_g3_ParamLimits

0xb078,	// (0x00047e76) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004c325) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004c325) popup_call2_audio_first_window_g

0xbee9,	// (0x00048ce7) popup_call2_audio_first_window_t1_ParamLimits

0xbee9,	// (0x00048ce7) popup_call2_audio_first_window_t1

0xbfec,	// (0x00048dea) popup_call2_audio_first_window_t4_ParamLimits

0xbfec,	// (0x00048dea) popup_call2_audio_first_window_t4

0xc0cf,	// (0x00048ecd) popup_call2_audio_first_window_t5_ParamLimits

0xc0cf,	// (0x00048ecd) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004c330) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004c330) popup_call2_audio_first_window_t

0xa756,	// (0x00047554) bg_popup_call2_act_pane_g1

0xc73c,	// (0x0004953a) popup_cale_lunar_info_window_t1

0xc74a,	// (0x00049548) popup_cale_lunar_info_window_t2

0xc758,	// (0x00049556) popup_cale_lunar_info_window_t3

0xa4f5,	// (0x000472f3) bg_popup_call2_bubble_pane

0xc1d0,	// (0x00048fce) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1d0,	// (0x00048fce) bg_popup_call2_in_pane_cp01

0xa1d1,	// (0x00046fcf) call_type_pane_cp02

0xc218,	// (0x00049016) popup_call2_audio_out_window_g1_ParamLimits

0xc218,	// (0x00049016) popup_call2_audio_out_window_g1

0xc244,	// (0x00049042) popup_call2_audio_out_window_g2_ParamLimits

0xc244,	// (0x00049042) popup_call2_audio_out_window_g2

0xc26c,	// (0x0004906a) popup_call2_audio_out_window_g3_ParamLimits

0xc26c,	// (0x0004906a) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004c339) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004c339) popup_call2_audio_out_window_g

0xc2a7,	// (0x000490a5) popup_call2_audio_out_window_t1_ParamLimits

0xc2a7,	// (0x000490a5) popup_call2_audio_out_window_t1

0xc306,	// (0x00049104) popup_call2_audio_out_window_t2_ParamLimits

0xc306,	// (0x00049104) popup_call2_audio_out_window_t2

0xc35a,	// (0x00049158) popup_call2_audio_out_window_t3_ParamLimits

0xc35a,	// (0x00049158) popup_call2_audio_out_window_t3

0xc370,	// (0x0004916e) popup_call2_audio_out_window_t4_ParamLimits

0xc370,	// (0x0004916e) popup_call2_audio_out_window_t4

0xc386,	// (0x00049184) popup_call2_audio_out_window_t5_ParamLimits

0xc386,	// (0x00049184) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004c342) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004c342) popup_call2_audio_out_window_t

0xc3ea,	// (0x000491e8) bg_popup_call2_in_pane_ParamLimits

0xc3ea,	// (0x000491e8) bg_popup_call2_in_pane

0xc446,	// (0x00049244) popup_call2_audio_in_window_g1_ParamLimits

0xc446,	// (0x00049244) popup_call2_audio_in_window_g1

0xc47e,	// (0x0004927c) popup_call2_audio_in_window_g2_ParamLimits

0xc47e,	// (0x0004927c) popup_call2_audio_in_window_g2

0xc4b6,	// (0x000492b4) popup_call2_audio_in_window_g3_ParamLimits

0xc4b6,	// (0x000492b4) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004c34f) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004c34f) popup_call2_audio_in_window_g

0xc50e,	// (0x0004930c) popup_call2_audio_in_window_t1_ParamLimits

0xc50e,	// (0x0004930c) popup_call2_audio_in_window_t1

0xc58e,	// (0x0004938c) popup_call2_audio_in_window_t2_ParamLimits

0xc58e,	// (0x0004938c) popup_call2_audio_in_window_t2

0xc60e,	// (0x0004940c) popup_call2_audio_in_window_t3_ParamLimits

0xc60e,	// (0x0004940c) popup_call2_audio_in_window_t3

0xc628,	// (0x00049426) popup_call2_audio_in_window_t4_ParamLimits

0xc628,	// (0x00049426) popup_call2_audio_in_window_t4

0xc63a,	// (0x00049438) popup_call2_audio_in_window_t5_ParamLimits

0xc63a,	// (0x00049438) popup_call2_audio_in_window_t5

0xc64f,	// (0x0004944d) popup_call2_audio_in_window_t6_ParamLimits

0xc64f,	// (0x0004944d) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004c358) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004c358) popup_call2_audio_in_window_t

0xa756,	// (0x00047554) bg_popup_call2_in_pane_g1

0xc766,	// (0x00049564) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004c3c0) popup_cale_lunar_info_window_t

0xa75e,	// (0x0004755c) bg_popup_call2_rect_pane_ParamLimits

0xa75e,	// (0x0004755c) bg_popup_call2_rect_pane

0xa4f5,	// (0x000472f3) call2_cli_visual_graphic_pane

0xa4f5,	// (0x000472f3) call2_cli_visual_text_pane

0x57c0,	// (0x000425be) smil_status_volume_pane_g3

0x0002,

0xa878,	// (0x00047676) call2_cli_visual_graphic_pane_g1

0xa878,	// (0x00047676) call2_cli_visual_graphic_pane_g2

0xa878,	// (0x00047676) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004c365) call2_cli_visual_graphic_pane_g

0xc664,	// (0x00049462) bg_popup_call2_rect_pane_g1

0xa904,	// (0x00047702) bg_popup_call2_rect_pane_g2

0xc66c,	// (0x0004946a) bg_popup_call2_rect_pane_g3

0xc674,	// (0x00049472) bg_popup_call2_rect_pane_g4

0xc67c,	// (0x0004947a) bg_popup_call2_rect_pane_g5

0xc684,	// (0x00049482) bg_popup_call2_rect_pane_g6

0xc68c,	// (0x0004948a) bg_popup_call2_rect_pane_g7

0xc694,	// (0x00049492) bg_popup_call2_rect_pane_g8

0xc69c,	// (0x0004949a) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004c36c) bg_popup_call2_rect_pane_g

0xc6a4,	// (0x000494a2) bg_popup_call2_bubble_pane_g1

0xc6ac,	// (0x000494aa) bg_popup_call2_bubble_pane_g2

0xc6b4,	// (0x000494b2) bg_popup_call2_bubble_pane_g3

0xc6bc,	// (0x000494ba) bg_popup_call2_bubble_pane_g4

0xc6c4,	// (0x000494c2) bg_popup_call2_bubble_pane_g5

0xc6cc,	// (0x000494ca) bg_popup_call2_bubble_pane_g6

0xc6d4,	// (0x000494d2) bg_popup_call2_bubble_pane_g7

0xc6dc,	// (0x000494da) bg_popup_call2_bubble_pane_g8

0xc6e4,	// (0x000494e2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004c37f) bg_popup_call2_bubble_pane_g

0x2af7,	// (0x0003f8f5) aid_cale_week_size_cell_pane

0x317f,	// (0x0003ff7d) aid_cams_cif_uncrop_pane_ParamLimits

0x317f,	// (0x0003ff7d) aid_cams_cif_uncrop_pane

0x32da,	// (0x000400d8) aid_cams_size_cell_ParamLimits

0x32da,	// (0x000400d8) aid_cams_size_cell

0x32e6,	// (0x000400e4) grid_cams_pane_ParamLimits

0x32f4,	// (0x000400f2) linegrid_cams_pane_ParamLimits

0x33cb,	// (0x000401c9) call_video_pane_t1

0x33ec,	// (0x000401ea) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004c06c) call_video_pane_t

0x3935,	// (0x00040733) aid_cale_month_size_cell_pane_ParamLimits

0x3935,	// (0x00040733) aid_cale_month_size_cell_pane

0xf60b,	// (0x0004c409) smil_status_volume_pane_g

0x57cd,	// (0x000425cb) volume_smil_pane_ParamLimits

0x2266,	// (0x0003f064) aid_popup2_width_pane

0x29f9,	// (0x0003f7f7) cell_qdial_pane_g4_ParamLimits

0x29f9,	// (0x0003f7f7) cell_qdial_pane_g4

0x4846,	// (0x00041644) aid_blid_cardinal_pane_ParamLimits

0x4856,	// (0x00041654) aid_blid_destination_pane_ParamLimits

0x4856,	// (0x00041654) aid_blid_destination_pane

0xa75e,	// (0x0004755c) bg_popup_call_poc_act_pane_ParamLimits

0xa75e,	// (0x0004755c) bg_popup_call_poc_act_pane

0xa75e,	// (0x0004755c) bg_popup_call_poc_inact_pane_ParamLimits

0xa75e,	// (0x0004755c) bg_popup_call_poc_inact_pane

0xc6ec,	// (0x000494ea) bg_popup_call_poc_act_pane_g1

0xc6f4,	// (0x000494f2) bg_popup_call_poc_act_pane_g2

0xc6fc,	// (0x000494fa) bg_popup_call_poc_act_pane_g3

0xc6bc,	// (0x000494ba) bg_popup_call_poc_act_pane_g4

0xc6c4,	// (0x000494c2) bg_popup_call_poc_act_pane_g5

0xc704,	// (0x00049502) bg_popup_call_poc_act_pane_g6

0xc6d4,	// (0x000494d2) bg_popup_call_poc_act_pane_g7

0xc70c,	// (0x0004950a) bg_popup_call_poc_act_pane_g8

0xa4f5,	// (0x000472f3) main_usb_pane

0x55bc,	// (0x000423ba) popup_cale_lunar_info_window

0x3717,	// (0x00040515) im_reading_pane_t1_ParamLimits

0xaae2,	// (0x000478e0) list_im_pane_ParamLimits

0xaaf3,	// (0x000478f1) scroll_pane_cp07_ParamLimits

0xa4f5,	// (0x000472f3) grid_highlight_pane_cp012

0xa75e,	// (0x0004755c) mup_scale_pane_ParamLimits

0xb078,	// (0x00047e76) main_usb_pane_g1_ParamLimits

0xb078,	// (0x00047e76) main_usb_pane_g1

0x532b,	// (0x00042129) main_usb_pane_g2_ParamLimits

0x532b,	// (0x00042129) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0004c3a9) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0004c3a9) main_usb_pane_g

0x5337,	// (0x00042135) main_usb_pane_t1_ParamLimits

0x5337,	// (0x00042135) main_usb_pane_t1

0x5349,	// (0x00042147) main_usb_pane_t2_ParamLimits

0x5349,	// (0x00042147) main_usb_pane_t2

0x535b,	// (0x00042159) main_usb_pane_t3_ParamLimits

0x535b,	// (0x00042159) main_usb_pane_t3

0x536d,	// (0x0004216b) main_usb_pane_t4_ParamLimits

0x536d,	// (0x0004216b) main_usb_pane_t4

0x537f,	// (0x0004217d) main_usb_pane_t5_ParamLimits

0x537f,	// (0x0004217d) main_usb_pane_t5

0x5391,	// (0x0004218f) main_usb_pane_t6_ParamLimits

0x5391,	// (0x0004218f) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004c3ae) main_usb_pane_t_ParamLimits

0x47ec,	// (0x000415ea) aid_text_placing

0x47f8,	// (0x000415f6) main_location2_pane_t1_ParamLimits

0x480c,	// (0x0004160a) main_location2_pane_t2_ParamLimits

0x4820,	// (0x0004161e) main_location2_pane_t3_ParamLimits

0x4834,	// (0x00041632) main_location2_pane_t4_ParamLimits

0x4834,	// (0x00041632) main_location2_pane_t4

0xf3cf,	// (0x0004c1cd) main_location2_pane_t_ParamLimits

0xa79a,	// (0x00047598) find_pinb_pane_g2_ParamLimits

0xa79a,	// (0x00047598) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0004bf19) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0004bf19) find_pinb_pane_g

0xa7a6,	// (0x000475a4) find_pinb_pane_t1_ParamLimits

0xa7b8,	// (0x000475b6) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0004bf1e) find_pinb_pane_t_ParamLimits

0xa4f5,	// (0x000472f3) main_call3_pane

0x3e89,	// (0x00040c87) cale_month_day_heading_pane_t1_ParamLimits

0x3f0f,	// (0x00040d0d) cale_month_day_heading_pane_t2_ParamLimits

0x3fa0,	// (0x00040d9e) cale_month_day_heading_pane_t3_ParamLimits

0x4031,	// (0x00040e2f) cale_month_day_heading_pane_t4_ParamLimits

0x40c2,	// (0x00040ec0) cale_month_day_heading_pane_t5_ParamLimits

0x4153,	// (0x00040f51) cale_month_day_heading_pane_t6_ParamLimits

0x41e4,	// (0x00040fe2) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004c0a4) cale_month_day_heading_pane_t_ParamLimits

0xad3d,	// (0x00047b3b) smil_status_volume_pane

0x4eef,	// (0x00041ced) postcard_address_pane_ParamLimits

0x4eef,	// (0x00041ced) postcard_address_pane

0x4efb,	// (0x00041cf9) postcard_message_pane_ParamLimits

0x4efb,	// (0x00041cf9) postcard_message_pane

0x52f6,	// (0x000420f4) call2_cli_visual_pane_t1_ParamLimits

0x52f6,	// (0x000420f4) call2_cli_visual_pane_t1

0x5924,	// (0x00042722) postcard_message_pane_t1_ParamLimits

0x5924,	// (0x00042722) postcard_message_pane_t1

0x590d,	// (0x0004270b) postcard_address_pane_t1_ParamLimits

0x590d,	// (0x0004270b) postcard_address_pane_t1

0x58fe,	// (0x000426fc) popup_call3_audio_in_window_ParamLimits

0x58fe,	// (0x000426fc) popup_call3_audio_in_window

0x57e2,	// (0x000425e0) bg_popup_call3_in_pane_ParamLimits

0x57e2,	// (0x000425e0) bg_popup_call3_in_pane

0x5844,	// (0x00042642) popup_call3_audio_in_window_g1_ParamLimits

0x5844,	// (0x00042642) popup_call3_audio_in_window_g1

0x585c,	// (0x0004265a) popup_call3_audio_in_window_g2_ParamLimits

0x585c,	// (0x0004265a) popup_call3_audio_in_window_g2

0x5874,	// (0x00042672) popup_call3_audio_in_window_g3_ParamLimits

0x5874,	// (0x00042672) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004c410) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004c410) popup_call3_audio_in_window_g

0x589c,	// (0x0004269a) popup_call3_audio_in_window_t1_ParamLimits

0x589c,	// (0x0004269a) popup_call3_audio_in_window_t1

0x58c4,	// (0x000426c2) popup_call3_audio_in_window_t2_ParamLimits

0x58c4,	// (0x000426c2) popup_call3_audio_in_window_t2

0x58ec,	// (0x000426ea) popup_call3_audio_in_window_t3_ParamLimits

0x58ec,	// (0x000426ea) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0004c419) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0004c419) popup_call3_audio_in_window_t

0xb463,	// (0x00048261) bg_popup_call3_rect_pane

0xc664,	// (0x00049462) bg_popup_call3_rect_pane_g1

0xa904,	// (0x00047702) bg_popup_call3_rect_pane_g2

0xc66c,	// (0x0004946a) bg_popup_call3_rect_pane_g3

0xc674,	// (0x00049472) bg_popup_call3_rect_pane_g4

0xc67c,	// (0x0004947a) bg_popup_call3_rect_pane_g5

0xc684,	// (0x00049482) bg_popup_call3_rect_pane_g6

0xc68c,	// (0x0004948a) bg_popup_call3_rect_pane_g7

0x4b6c,	// (0x0004196a) mup_visualizer_osc_pane

0xb522,	// (0x00048320) mup_visualizer_spec_pane

0x5802,	// (0x00042600) call3_video_qcif_pane_ParamLimits

0x5802,	// (0x00042600) call3_video_qcif_pane

0x5814,	// (0x00042612) call3_video_qcif_uncrop_pane_ParamLimits

0x5814,	// (0x00042612) call3_video_qcif_uncrop_pane

0x5822,	// (0x00042620) call3_video_subqcif_pane_ParamLimits

0x5822,	// (0x00042620) call3_video_subqcif_pane

0x5834,	// (0x00042632) call3_video_subqcif_uncrop_pane_ParamLimits

0x5834,	// (0x00042632) call3_video_subqcif_uncrop_pane

0x588c,	// (0x0004268a) popup_call3_audio_in_window_g4_ParamLimits

0x588c,	// (0x0004268a) popup_call3_audio_in_window_g4

0x57af,	// (0x000425ad) mup_spec_half_pane

0x57b8,	// (0x000425b6) mup_spec_half_pane_cp

0xc8c9,	// (0x000496c7) mup_osc_middle_pane

0xc8d2,	// (0x000496d0) mup_visualizer_osc_pane_g1

0x5790,	// (0x0004258e) mup_spec_bar_pane_ParamLimits

0x5790,	// (0x0004258e) mup_spec_bar_pane

0xc8b6,	// (0x000496b4) mup_spec_bar_pane_g1

0xc8c0,	// (0x000496be) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004c404) mup_spec_bar_pane_g

0x2af7,	// (0x0003f8f5) aid_cale_week_size_cell_pane_ParamLimits

0x2b0c,	// (0x0003f90a) bg_cale_heading_pane_ParamLimits

0xa941,	// (0x0004773f) bg_cale_pane_cp01_ParamLimits

0x2b2e,	// (0x0003f92c) cale_week_corner_pane_ParamLimits

0x2b48,	// (0x0003f946) cale_week_day_heading_pane_ParamLimits

0x2b6a,	// (0x0003f968) cale_week_scroll_pane_g1_ParamLimits

0x2b87,	// (0x0003f985) cale_week_scroll_pane_g2_ParamLimits

0x2b9a,	// (0x0003f998) cale_week_scroll_pane_g3_ParamLimits

0x2bad,	// (0x0003f9ab) cale_week_scroll_pane_g4_ParamLimits

0x2bc0,	// (0x0003f9be) cale_week_scroll_pane_g5_ParamLimits

0x2bd3,	// (0x0003f9d1) cale_week_scroll_pane_g6_ParamLimits

0x2be6,	// (0x0003f9e4) cale_week_scroll_pane_g7_ParamLimits

0x2bf9,	// (0x0003f9f7) cale_week_scroll_pane_g8_ParamLimits

0x2c0e,	// (0x0003fa0c) cale_week_scroll_pane_g9_ParamLimits

0x2c21,	// (0x0003fa1f) cale_week_scroll_pane_g10_ParamLimits

0x2c34,	// (0x0003fa32) cale_week_scroll_pane_g11_ParamLimits

0x2c47,	// (0x0003fa45) cale_week_scroll_pane_g12_ParamLimits

0x2c5e,	// (0x0003fa5c) cale_week_scroll_pane_g13_ParamLimits

0x2c79,	// (0x0003fa77) cale_week_scroll_pane_g14_ParamLimits

0x2c94,	// (0x0003fa92) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0004bfaa) cale_week_scroll_pane_g_ParamLimits

0x2cc4,	// (0x0003fac2) cale_week_time_pane_ParamLimits

0x2cd9,	// (0x0003fad7) grid_cale_week_pane_ParamLimits

0xa95f,	// (0x0004775d) listscroll_cale_week_pane_t1

0xa971,	// (0x0004776f) scroll_pane_cp08_ParamLimits

0x399e,	// (0x0004079c) cale_month_corner_pane_ParamLimits

0xad13,	// (0x00047b11) cale_month_pane_t1

0x3e26,	// (0x00040c24) cale_month_week_pane_ParamLimits

0xb078,	// (0x00047e76) popup_call_status_window_g1_ParamLimits

0x461f,	// (0x0004141d) popup_call_status_window_g2_ParamLimits

0x462b,	// (0x00041429) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004c154) popup_call_status_window_g_ParamLimits

0xb0df,	// (0x00047edd) aid_call2_pane

0x110a,	// (0x0003df08) msg_header_pane_g1

0x4eef,	// (0x00041ced) postcard_address2_pane_ParamLimits

0x4eef,	// (0x00041ced) postcard_address2_pane

0x4efb,	// (0x00041cf9) postcard_message2_pane_ParamLimits

0x4efb,	// (0x00041cf9) postcard_message2_pane

0x5728,	// (0x00042526) message2_row_pane_ParamLimits

0x5728,	// (0x00042526) message2_row_pane

0x5743,	// (0x00042541) address2_row_pane_ParamLimits

0x5743,	// (0x00042541) address2_row_pane

0xc884,	// (0x00049682) postcard_message2_row_pane_g1

0xc88c,	// (0x0004968a) postcard_message2_row_pane_t1

0xc884,	// (0x00049682) address2_row_pane_g1

0xc88c,	// (0x0004968a) address2_row_pane_t1

0x3041,	// (0x0003fe3f) aid_size_cell_vorec

0xa4f5,	// (0x000472f3) main_rss_pane

0x5756,	// (0x00042554) rss_list_single_pane_ParamLimits

0x5756,	// (0x00042554) rss_list_single_pane

0xc89a,	// (0x00049698) rss_list_single_pane_t1

0xc8a8,	// (0x000496a6) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004c3ff) rss_list_single_pane_t

0xa4f5,	// (0x000472f3) main_camera2_pane

0xa4f5,	// (0x000472f3) main_video2_pane

0x5988,	// (0x00042786) cams_zoom_pane_cp2_ParamLimits

0x5988,	// (0x00042786) cams_zoom_pane_cp2

0x5994,	// (0x00042792) image2_vga_pane_ParamLimits

0x5994,	// (0x00042792) image2_vga_pane

0x59a3,	// (0x000427a1) main_camera2_pane_g1_ParamLimits

0x59a3,	// (0x000427a1) main_camera2_pane_g1

0x59af,	// (0x000427ad) main_camera2_pane_g2_ParamLimits

0x59af,	// (0x000427ad) main_camera2_pane_g2

0x59bb,	// (0x000427b9) main_camera2_pane_g3_ParamLimits

0x59bb,	// (0x000427b9) main_camera2_pane_g3

0x59c7,	// (0x000427c5) main_camera2_pane_g4_ParamLimits

0x59c7,	// (0x000427c5) main_camera2_pane_g4

0x59d3,	// (0x000427d1) main_camera2_pane_g5_ParamLimits

0x59d3,	// (0x000427d1) main_camera2_pane_g5

0x59df,	// (0x000427dd) main_camera2_pane_g6_ParamLimits

0x59df,	// (0x000427dd) main_camera2_pane_g6

0x59eb,	// (0x000427e9) main_camera2_pane_g7_ParamLimits

0x59eb,	// (0x000427e9) main_camera2_pane_g7

0x59f7,	// (0x000427f5) main_camera2_pane_g8_ParamLimits

0x59f7,	// (0x000427f5) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004c420) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004c420) main_camera2_pane_g

0x5a0f,	// (0x0004280d) main_camera2_pane_t1_ParamLimits

0x5a0f,	// (0x0004280d) main_camera2_pane_t1

0x5a21,	// (0x0004281f) main_camera2_pane_t2_ParamLimits

0x5a21,	// (0x0004281f) main_camera2_pane_t2

0x5a33,	// (0x00042831) main_camera2_pane_t3_ParamLimits

0x5a33,	// (0x00042831) main_camera2_pane_t3

0x5a45,	// (0x00042843) main_camera2_pane_t4_ParamLimits

0x5a45,	// (0x00042843) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0004c433) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0004c433) main_camera2_pane_t

0x5aa7,	// (0x000428a5) cams_zoom_pane_cp4_ParamLimits

0x5aa7,	// (0x000428a5) cams_zoom_pane_cp4

0x5ab7,	// (0x000428b5) image2_cif_pane_ParamLimits

0x5ab7,	// (0x000428b5) image2_cif_pane

0x5acc,	// (0x000428ca) image2_subqcif_pane_ParamLimits

0x5acc,	// (0x000428ca) image2_subqcif_pane

0x5adb,	// (0x000428d9) main_video2_pane_g1_ParamLimits

0x5adb,	// (0x000428d9) main_video2_pane_g1

0x5aed,	// (0x000428eb) main_video2_pane_g2_ParamLimits

0x5aed,	// (0x000428eb) main_video2_pane_g2

0x5afd,	// (0x000428fb) main_video2_pane_g3_ParamLimits

0x5afd,	// (0x000428fb) main_video2_pane_g3

0x5b0d,	// (0x0004290b) main_video2_pane_g4_ParamLimits

0x5b0d,	// (0x0004290b) main_video2_pane_g4

0x5b1d,	// (0x0004291b) main_video2_pane_g5_ParamLimits

0x5b1d,	// (0x0004291b) main_video2_pane_g5

0x5b2d,	// (0x0004292b) main_video2_pane_g6_ParamLimits

0x5b2d,	// (0x0004292b) main_video2_pane_g6

0x0005,

0xf644,	// (0x0004c442) main_video2_pane_g_ParamLimits

0xf644,	// (0x0004c442) main_video2_pane_g

0x5b3f,	// (0x0004293d) main_video2_pane_t1_ParamLimits

0x5b3f,	// (0x0004293d) main_video2_pane_t1

0x5b59,	// (0x00042957) main_video2_pane_t2_ParamLimits

0x5b59,	// (0x00042957) main_video2_pane_t2

0x5b7f,	// (0x0004297d) main_video2_pane_t3_ParamLimits

0x5b7f,	// (0x0004297d) main_video2_pane_t3

0x0002,

0xf651,	// (0x0004c44f) main_video2_pane_t_ParamLimits

0xf651,	// (0x0004c44f) main_video2_pane_t

0x5448,	// (0x00042246) call_muted_g2

0x0001,

0xf5f3,	// (0x0004c3f1) call_muted_g

0xa4f5,	// (0x000472f3) main_mup2_pane

0xc909,	// (0x00049707) main_mup2_pane_g1_ParamLimits

0xc909,	// (0x00049707) main_mup2_pane_g1

0x5ba5,	// (0x000429a3) main_mup2_pane_g2_ParamLimits

0x5ba5,	// (0x000429a3) main_mup2_pane_g2

0x5e27,	// (0x00042c25) main_mup_pane_g13_cp1

0x5e2f,	// (0x00042c2d) mup_volume_pane_cp1

0x5bc5,	// (0x000429c3) main_mup2_pane_g4_ParamLimits

0x5bc5,	// (0x000429c3) main_mup2_pane_g4

0x5bda,	// (0x000429d8) main_mup2_pane_g5_ParamLimits

0x5bda,	// (0x000429d8) main_mup2_pane_g5

0x5bef,	// (0x000429ed) main_mup2_pane_g6_ParamLimits

0x5bef,	// (0x000429ed) main_mup2_pane_g6

0x5c04,	// (0x00042a02) main_mup2_pane_g7_ParamLimits

0x5c04,	// (0x00042a02) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0004c456) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0004c456) main_mup2_pane_g

0x5c20,	// (0x00042a1e) main_mup2_pane_t1_ParamLimits

0x5c20,	// (0x00042a1e) main_mup2_pane_t1

0x5c37,	// (0x00042a35) main_mup2_pane_t2_ParamLimits

0x5c37,	// (0x00042a35) main_mup2_pane_t2

0x5c4e,	// (0x00042a4c) main_mup2_pane_t3_ParamLimits

0x5c4e,	// (0x00042a4c) main_mup2_pane_t3

0x5c65,	// (0x00042a63) main_mup2_pane_t4_ParamLimits

0x5c65,	// (0x00042a63) main_mup2_pane_t4

0x5c7f,	// (0x00042a7d) main_mup2_pane_t5_ParamLimits

0x5c7f,	// (0x00042a7d) main_mup2_pane_t5

0x5c99,	// (0x00042a97) main_mup2_pane_t6_ParamLimits

0x5c99,	// (0x00042a97) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0004c465) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0004c465) main_mup2_pane_t

0x5cd1,	// (0x00042acf) mup2_visualizer_pane_ParamLimits

0x5cd1,	// (0x00042acf) mup2_visualizer_pane

0x5d07,	// (0x00042b05) mup_progress_pane_cp_ParamLimits

0x5d07,	// (0x00042b05) mup_progress_pane_cp

0x5e12,	// (0x00042c10) mup_volume_pane_cp_ParamLimits

0x5e12,	// (0x00042c10) mup_volume_pane_cp

0x5d1e,	// (0x00042b1c) mup2_visualizer_pane_g1_ParamLimits

0x5d1e,	// (0x00042b1c) mup2_visualizer_pane_g1

0xc915,	// (0x00049713) mup2_visualizer_pane_g2_ParamLimits

0xc915,	// (0x00049713) mup2_visualizer_pane_g2

0x5d33,	// (0x00042b31) mup2_visualizer_pane_g3_ParamLimits

0x5d33,	// (0x00042b31) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0004c472) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0004c472) mup2_visualizer_pane_g

0xb749,	// (0x00048547) aid_size_cell_fmradio

0x555e,	// (0x0004235c) aid_height_parent_landcape

0xab71,	// (0x0004796f) wml_content_pane_cp

0xab79,	// (0x00047977) wml_tabs_pane

0xab82,	// (0x00047980) popup_wml_miniature_window

0xab8a,	// (0x00047988) scroll_pane_cp021

0xab9e,	// (0x0004799c) wml_content_pane_comp8

0xa4f5,	// (0x000472f3) bg_popup_sub_pane_cp05

0xc933,	// (0x00049731) popup_wml_miniature_window_g1

0xc93b,	// (0x00049739) wml_miniature_view_pane

0x5d41,	// (0x00042b3f) aid_size_wml_view

0x5d49,	// (0x00042b47) wml_miniature_view_pane_g1

0x5d52,	// (0x00042b50) wml_miniature_view_pane_g2

0x5d5b,	// (0x00042b59) wml_miniature_view_pane_g3

0x5d63,	// (0x00042b61) wml_miniature_view_pane_g4

0x5d6b,	// (0x00042b69) wml_miniature_view_pane_g5

0x5d73,	// (0x00042b71) wml_miniature_view_pane_g6

0x5d7b,	// (0x00042b79) wml_miniature_view_pane_g7

0x5d83,	// (0x00042b81) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0004c479) wml_miniature_view_pane_g

0xc909,	// (0x00049707) background_graphic_ParamLimits

0xc909,	// (0x00049707) background_graphic

0xc943,	// (0x00049741) wml_tabs_2_pane

0xc94c,	// (0x0004974a) wml_tabs_3_pane_ParamLimits

0xc94c,	// (0x0004974a) wml_tabs_3_pane

0xc95e,	// (0x0004975c) wml_tabs_4_pane_ParamLimits

0xc95e,	// (0x0004975c) wml_tabs_4_pane

0xc974,	// (0x00049772) wml_tabs_5_pane_ParamLimits

0xc974,	// (0x00049772) wml_tabs_5_pane

0xc98e,	// (0x0004978c) wml_tabs_pane_g2_ParamLimits

0xc98e,	// (0x0004978c) wml_tabs_pane_g2

0xc9a2,	// (0x000497a0) wml_tabs_pane_g3_ParamLimits

0xc9a2,	// (0x000497a0) wml_tabs_pane_g3

0x5d8b,	// (0x00042b89) wml_tabs_2_active_pane_ParamLimits

0x5d8b,	// (0x00042b89) wml_tabs_2_active_pane

0x5d9b,	// (0x00042b99) wml_tabs_2_passive_pane_ParamLimits

0x5d9b,	// (0x00042b99) wml_tabs_2_passive_pane

0x5dab,	// (0x00042ba9) wml_tabs_3_active_pane_cp_ParamLimits

0x5dab,	// (0x00042ba9) wml_tabs_3_active_pane_cp

0x5dbc,	// (0x00042bba) wml_tabs_3_passive_pane_ParamLimits

0x5dbc,	// (0x00042bba) wml_tabs_3_passive_pane

0x5dcd,	// (0x00042bcb) wml_tabs_3_passive_pane_cp_ParamLimits

0x5dcd,	// (0x00042bcb) wml_tabs_3_passive_pane_cp

0x5dde,	// (0x00042bdc) tabs_4_active_pane

0x5de6,	// (0x00042be4) tabs_4_passive_pane

0x5dee,	// (0x00042bec) tabs_4_passive_pane_cp

0x5df6,	// (0x00042bf4) tabs_4_passive_pane_cp2

0x5323,	// (0x00042121) aid_height_text

0x4b39,	// (0x00041937) mup_volume_cont_pane_ParamLimits

0x4b39,	// (0x00041937) mup_volume_cont_pane

0x2635,	// (0x0003f433) aid_size_cell_pinb

0x263f,	// (0x0003f43d) aid_size_list_pinb

0x5cf0,	// (0x00042aee) mup2_volume_cont_pane_ParamLimits

0x5cf0,	// (0x00042aee) mup2_volume_cont_pane

0x5dfe,	// (0x00042bfc) mup2_volume_cont_pane_g1_ParamLimits

0x5dfe,	// (0x00042bfc) mup2_volume_cont_pane_g1

0x2272,	// (0x0003f070) aid_size_cell_touch_ParamLimits

0x2272,	// (0x0003f070) aid_size_cell_touch

0x251b,	// (0x0003f319) touch_pane_ParamLimits

0x251b,	// (0x0003f319) touch_pane

0xa0d8,	// (0x00046ed6) main_rss2_pane

0xc9bf,	// (0x000497bd) listscroll_rss2_pane

0xc9c8,	// (0x000497c6) rss2_navigation_pane

0xc9d0,	// (0x000497ce) list_rss2_pane

0xb222,	// (0x00048020) scroll_pane_cp22

0xc9d8,	// (0x000497d6) rss2_navigation_pane_g1

0xc9e1,	// (0x000497df) rss2_navigation_pane_g2

0xc9e9,	// (0x000497e7) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0004c48a) rss2_navigation_pane_g

0xc9f1,	// (0x000497ef) rss2_navigation_pane_t1

0x5e37,	// (0x00042c35) rss2_list_single_pane_ParamLimits

0x5e37,	// (0x00042c35) rss2_list_single_pane

0xc9ff,	// (0x000497fd) rss2_list_single_pane_t2

0xca0d,	// (0x0004980b) rss2_list_single_pane_t3_ParamLimits

0xca0d,	// (0x0004980b) rss2_list_single_pane_t3

0xca2a,	// (0x00049828) rss2_list_single_pane_t4

0x448c,	// (0x0004128a) smil_status_pane_g1

0xb05e,	// (0x00047e5c) main_image2_pane_ParamLimits

0xb05e,	// (0x00047e5c) main_image2_pane

0x5a03,	// (0x00042801) main_camera2_pane_g9_ParamLimits

0x5a03,	// (0x00042801) main_camera2_pane_g9

0x5a57,	// (0x00042855) main_camera2_pane_t5_ParamLimits

0x5a57,	// (0x00042855) main_camera2_pane_t5

0x5a69,	// (0x00042867) main_camera2_pane_t6_ParamLimits

0x5a69,	// (0x00042867) main_camera2_pane_t6

0x5e68,	// (0x00042c66) main_image2_pane_g1_ParamLimits

0x5e68,	// (0x00042c66) main_image2_pane_g1

0x50c3,	// (0x00041ec1) smil2_video_pane_ParamLimits

0x50c3,	// (0x00041ec1) smil2_video_pane

0x0e8a,	// (0x0003dc88) aid_zoom_text_primary_cp

0x24c4,	// (0x0003f2c2) popup_preview_fixed_window

0xaada,	// (0x000478d8) im_reading_pane_g1

0x594d,	// (0x0004274b) cams2_bc_adjust_pane_cp_ParamLimits

0x594d,	// (0x0004274b) cams2_bc_adjust_pane_cp

0x5a99,	// (0x00042897) cams2_bc_adjust_pane_ParamLimits

0x5a99,	// (0x00042897) cams2_bc_adjust_pane

0x5e74,	// (0x00042c72) cams2_bc_adjust_pane_g1

0x5e7c,	// (0x00042c7a) cams2_slider_pane

0x5e85,	// (0x00042c83) cams2_slider_pane_g1

0x5e8e,	// (0x00042c8c) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0004c491) cams2_slider_pane_g

0x2745,	// (0x0003f543) calc_display_pane_ParamLimits

0x2763,	// (0x0003f561) calc_paper_pane_ParamLimits

0x277f,	// (0x0003f57d) grid_calc_pane_ParamLimits

0x468d,	// (0x0004148b) popup_clock_digital_window_t1_ParamLimits

0xb6e6,	// (0x000484e4) main_image_pane_t1

0x272b,	// (0x0003f529) aid_size_cell_calc_ParamLimits

0x272b,	// (0x0003f529) aid_size_cell_calc

0x5598,	// (0x00042396) popup_blid_sat_info2_window_ParamLimits

0x5598,	// (0x00042396) popup_blid_sat_info2_window

0xca40,	// (0x0004983e) aid_size_cell_blid

0xca48,	// (0x00049846) bg_popup_window_pane_cp07

0xca6b,	// (0x00049869) grid_popup_blid_pane

0xca75,	// (0x00049873) heading_pane_cp05_ParamLimits

0xca75,	// (0x00049873) heading_pane_cp05

0xcb48,	// (0x00049946) cell_popup_blid_pane_ParamLimits

0xcb48,	// (0x00049946) cell_popup_blid_pane

0xcb6c,	// (0x0004996a) cell_popup_blid_pane_g1

0xcb74,	// (0x00049972) cell_popup_blid_pane_t1

0x5cb6,	// (0x00042ab4) mup2_indicator_pane_ParamLimits

0x5cb6,	// (0x00042ab4) mup2_indicator_pane

0xb463,	// (0x00048261) mup2_visualizer_osc_pane

0xc921,	// (0x0004971f) mup2_visualizer_spec_pane_ParamLimits

0xc921,	// (0x0004971f) mup2_visualizer_spec_pane

0x5ea8,	// (0x00042ca6) mup2_spec_half_pane

0x5eb1,	// (0x00042caf) mup2_spec_half_pane_cp

0x5ebb,	// (0x00042cb9) mup2_spec_bar_pane_ParamLimits

0x5ebb,	// (0x00042cb9) mup2_spec_bar_pane

0xc8b6,	// (0x000496b4) mup2_spec_bar_pane_g1

0xc8c0,	// (0x000496be) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004c404) mup2_spec_bar_pane_g

0x5eda,	// (0x00042cd8) mup2_osc_middle_pane

0xc8d2,	// (0x000496d0) mup2_visualizer_osc_pane_g1

0xa102,	// (0x00046f00) popup_number_entry_window_t1_ParamLimits

0xa115,	// (0x00046f13) popup_number_entry_window_t2_ParamLimits

0xa127,	// (0x00046f25) popup_number_entry_window_t3_ParamLimits

0x2572,	// (0x0003f370) popup_number_entry_window_t5_ParamLimits

0x2572,	// (0x0003f370) popup_number_entry_window_t5

0xf0c6,	// (0x0004bec4) popup_number_entry_window_t_ParamLimits

0xa139,	// (0x00046f37) text_title_cp2_ParamLimits

0x4db7,	// (0x00041bb5) aid_hotspot_pointer_text2_pane

0x4e51,	// (0x00041c4f) main_viewer_pane_g9_ParamLimits

0x4e51,	// (0x00041c4f) main_viewer_pane_g9

0xad13,	// (0x00047b11) cale_month_pane_t1_ParamLimits

0xad50,	// (0x00047b4e) bg_cale_pane_ParamLimits

0xad68,	// (0x00047b66) list_cale_pane_ParamLimits

0xad79,	// (0x00047b77) listscroll_cale_day_pane_t1

0xad8b,	// (0x00047b89) scroll_pane_cp09_ParamLimits

0x4b74,	// (0x00041972) main_mup_eq_pane_t1_ParamLimits

0x4b74,	// (0x00041972) main_mup_eq_pane_t1

0x4b8e,	// (0x0004198c) main_mup_eq_pane_t2_ParamLimits

0x4b8e,	// (0x0004198c) main_mup_eq_pane_t2

0x4ba8,	// (0x000419a6) main_mup_eq_pane_t3_ParamLimits

0x4ba8,	// (0x000419a6) main_mup_eq_pane_t3

0x4bc0,	// (0x000419be) main_mup_eq_pane_t4_ParamLimits

0x4bc0,	// (0x000419be) main_mup_eq_pane_t4

0x4bd8,	// (0x000419d6) main_mup_eq_pane_t5_ParamLimits

0x4bd8,	// (0x000419d6) main_mup_eq_pane_t5

0x4bf0,	// (0x000419ee) main_mup_eq_pane_t6_ParamLimits

0x4bf0,	// (0x000419ee) main_mup_eq_pane_t6

0x4c04,	// (0x00041a02) main_mup_eq_pane_t7_ParamLimits

0x4c04,	// (0x00041a02) main_mup_eq_pane_t7

0x4c18,	// (0x00041a16) main_mup_eq_pane_t8_ParamLimits

0x4c18,	// (0x00041a16) main_mup_eq_pane_t8

0x4c2e,	// (0x00041a2c) main_mup_eq_pane_t9_ParamLimits

0x4c2e,	// (0x00041a2c) main_mup_eq_pane_t9

0x4c46,	// (0x00041a44) main_mup_eq_pane_t10_ParamLimits

0x4c46,	// (0x00041a44) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004c253) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004c253) main_mup_eq_pane_t

0x4d03,	// (0x00041b01) mup_equalizer_pane_cp5_ParamLimits

0x4d19,	// (0x00041b17) mup_equalizer_pane_cp6_ParamLimits

0x4d31,	// (0x00041b2f) mup_equalizer_pane_cp7_ParamLimits

0xa0d8,	// (0x00046ed6) main_gallery_pane

0xc8db,	// (0x000496d9) smil2_volume_pane

0xc8e3,	// (0x000496e1) smil_status_volume_pane_g1_ParamLimits

0xc8f6,	// (0x000496f4) smil_status_volume_pane_g2_ParamLimits

0x57c0,	// (0x000425be) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0004c409) smil_status_volume_pane_g_ParamLimits

0xca48,	// (0x00049846) bg_popup_window_pane_cp07_ParamLimits

0xca56,	// (0x00049854) blid_firmament_pane

0x5ee3,	// (0x00042ce1) aid_size_cell_gallery_ParamLimits

0x5ee3,	// (0x00042ce1) aid_size_cell_gallery

0x5ef1,	// (0x00042cef) grid_gallery_pane_ParamLimits

0x5ef1,	// (0x00042cef) grid_gallery_pane

0x5f01,	// (0x00042cff) cell_gallery_pane_ParamLimits

0x5f01,	// (0x00042cff) cell_gallery_pane

0xcb82,	// (0x00049980) bg_cell_gallery_focus_pane_ParamLimits

0xcb82,	// (0x00049980) bg_cell_gallery_focus_pane

0xcb94,	// (0x00049992) cell_gallery_pane_g1_ParamLimits

0xcb94,	// (0x00049992) cell_gallery_pane_g1

0x5f4f,	// (0x00042d4d) cell_gallery_pane_g2_ParamLimits

0x5f4f,	// (0x00042d4d) cell_gallery_pane_g2

0x5f5c,	// (0x00042d5a) cell_gallery_pane_g3_ParamLimits

0x5f5c,	// (0x00042d5a) cell_gallery_pane_g3

0xcba0,	// (0x0004999e) cell_gallery_pane_g4_ParamLimits

0xcba0,	// (0x0004999e) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0004c4b7) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0004c4b7) cell_gallery_pane_g

0xcbac,	// (0x000499aa) bg_cell_gallery_focus_pane_g1

0xcbb4,	// (0x000499b2) bg_cell_gallery_focus_pane_g2

0xcbbc,	// (0x000499ba) bg_cell_gallery_focus_pane_g3

0xcbc4,	// (0x000499c2) bg_cell_gallery_focus_pane_g4

0xcbcc,	// (0x000499ca) bg_cell_gallery_focus_pane_g5

0xcbd4,	// (0x000499d2) bg_cell_gallery_focus_pane_g6

0xcbdc,	// (0x000499da) bg_cell_gallery_focus_pane_g7

0xcbe4,	// (0x000499e2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004c4c0) bg_cell_gallery_focus_pane_g

0xcbec,	// (0x000499ea) aid_firma_cardinal

0xcc00,	// (0x000499fe) blid_firmament_pane_t1

0xcc17,	// (0x00049a15) blid_firmament_pane_t2

0xcc2e,	// (0x00049a2c) blid_firmament_pane_t3

0xcc45,	// (0x00049a43) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0004c4d1) blid_firmament_pane_t

0xcc5c,	// (0x00049a5a) blid_sat_info_pane

0xcc6c,	// (0x00049a6a) blid_sat_info_pane_g1

0xcc6c,	// (0x00049a6a) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0004c4da) blid_sat_info_pane_g

0xcc76,	// (0x00049a74) blid_sat_info_pane_t1

0xcc84,	// (0x00049a82) smil2_volume_content_pane

0xcc8d,	// (0x00049a8b) smil2_volume_pane_g1

0xcabd,	// (0x000498bb) smil2_volume_content_pane_g1

0xcc95,	// (0x00049a93) smil2_volume_content_pane_g2

0xcc9e,	// (0x00049a9c) smil2_volume_content_pane_g3

0xcca7,	// (0x00049aa5) smil2_volume_content_pane_g4

0xccb0,	// (0x00049aae) smil2_volume_content_pane_g5

0xccb9,	// (0x00049ab7) smil2_volume_content_pane_g6

0xccc2,	// (0x00049ac0) smil2_volume_content_pane_g7

0xcccb,	// (0x00049ac9) smil2_volume_content_pane_g8

0xccd4,	// (0x00049ad2) smil2_volume_content_pane_g9

0xccdd,	// (0x00049adb) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004c4df) smil2_volume_content_pane_g

0x2d5a,	// (0x0003fb58) cale_week_day_heading_pane_t1_ParamLimits

0x2d95,	// (0x0003fb93) cale_week_day_heading_pane_t2_ParamLimits

0x2dd0,	// (0x0003fbce) cale_week_day_heading_pane_t3_ParamLimits

0x2e0b,	// (0x0003fc09) cale_week_day_heading_pane_t4_ParamLimits

0x2e46,	// (0x0003fc44) cale_week_day_heading_pane_t5_ParamLimits

0x2e81,	// (0x0003fc7f) cale_week_day_heading_pane_t6_ParamLimits

0x2ebc,	// (0x0003fcba) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0004bfcb) cale_week_day_heading_pane_t_ParamLimits

0xa98e,	// (0x0004778c) bg_cale_side_pane_ParamLimits

0x2ef7,	// (0x0003fcf5) cale_week_time_pane_t1_ParamLimits

0x2f11,	// (0x0003fd0f) cale_week_time_pane_t2_ParamLimits

0x2f2b,	// (0x0003fd29) cale_week_time_pane_t3_ParamLimits

0x2f45,	// (0x0003fd43) cale_week_time_pane_t4_ParamLimits

0x2f5f,	// (0x0003fd5d) cale_week_time_pane_t5_ParamLimits

0x2f79,	// (0x0003fd77) cale_week_time_pane_t6_ParamLimits

0x2f99,	// (0x0003fd97) cale_week_time_pane_t7_ParamLimits

0x2fbb,	// (0x0003fdb9) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0004bfda) cale_week_time_pane_t_ParamLimits

0x2fdf,	// (0x0003fddd) cell_cale_week_pane_g2_ParamLimits

0xa98e,	// (0x0004778c) bg_cale_side_pane_cp01_ParamLimits

0x428d,	// (0x0004108b) cale_month_week_pane_t1_ParamLimits

0x42a6,	// (0x000410a4) cale_month_week_pane_t2_ParamLimits

0x42bf,	// (0x000410bd) cale_month_week_pane_t3_ParamLimits

0x42d8,	// (0x000410d6) cale_month_week_pane_t4_ParamLimits

0x42f1,	// (0x000410ef) cale_month_week_pane_t5_ParamLimits

0x4312,	// (0x00041110) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004c0b3) cale_month_week_pane_t_ParamLimits

0x4455,	// (0x00041253) cell_cale_month_pane_g1_ParamLimits

0xa0d8,	// (0x00046ed6) main_cale_event_viewer_pane

0xa0d8,	// (0x00046ed6) listscroll_cale_event_viewer_pane

0xcce6,	// (0x00049ae4) list_cale_ev_pane

0xccee,	// (0x00049aec) scroll_pane_cp023

0xccfa,	// (0x00049af8) field_cale_ev_pane_ParamLimits

0xccfa,	// (0x00049af8) field_cale_ev_pane

0xcd18,	// (0x00049b16) field_cale_ev_content_pane_ParamLimits

0xcd18,	// (0x00049b16) field_cale_ev_content_pane

0xcd24,	// (0x00049b22) field_cale_ev_pane_g1_ParamLimits

0xcd24,	// (0x00049b22) field_cale_ev_pane_g1

0xcd30,	// (0x00049b2e) field_cale_ev_pane_g2_ParamLimits

0xcd30,	// (0x00049b2e) field_cale_ev_pane_g2

0xcd48,	// (0x00049b46) field_cale_ev_pane_g3_ParamLimits

0xcd48,	// (0x00049b46) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0004c4f4) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0004c4f4) field_cale_ev_pane_g

0xcd60,	// (0x00049b5e) field_cale_ev_pane_t1_ParamLimits

0xcd60,	// (0x00049b5e) field_cale_ev_pane_t1

0xcd77,	// (0x00049b75) field_cale_ev_content_pane_t1_ParamLimits

0xcd77,	// (0x00049b75) field_cale_ev_content_pane_t1

0xb5cc,	// (0x000483ca) bg_button_pane_cp01

0x2ae7,	// (0x0003f8e5) listscroll_cale_week_pane_ParamLimits

0xa938,	// (0x00047736) popup_toolbar_window_cp01

0xa95f,	// (0x0004775d) listscroll_cale_week_pane_t1_ParamLimits

0x2ae7,	// (0x0003f8e5) listscroll_cale_day_pane_ParamLimits

0xa938,	// (0x00047736) popup_toolbar_window_cp02

0xad79,	// (0x00047b77) listscroll_cale_day_pane_t1_ParamLimits

0x2ae7,	// (0x0003f8e5) main_cale_month_pane_ParamLimits

0x569f,	// (0x0004249d) popup_toolbar_window_cp03_ParamLimits

0x569f,	// (0x0004249d) popup_toolbar_window_cp03

0x4fd9,	// (0x00041dd7) main_image_pane_g2_ParamLimits

0x4fd9,	// (0x00041dd7) main_image_pane_g2

0x4fe5,	// (0x00041de3) main_image_pane_g3_ParamLimits

0x4fe5,	// (0x00041de3) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004c2e5) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004c2e5) main_image_pane_g

0xb6e6,	// (0x000484e4) main_image_pane_t1_ParamLimits

0x4ff1,	// (0x00041def) main_image_pane_t2_ParamLimits

0x4ff1,	// (0x00041def) main_image_pane_t2

0x5003,	// (0x00041e01) main_image_pane_t3_ParamLimits

0x5003,	// (0x00041e01) main_image_pane_t3

0x5015,	// (0x00041e13) main_image_pane_t4_ParamLimits

0x5015,	// (0x00041e13) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004c2ec) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004c2ec) main_image_pane_t

0x5027,	// (0x00041e25) popup_image_details_window_cp01

0x5031,	// (0x00041e2f) popup_toobar_trans_pane_cp01_ParamLimits

0x5031,	// (0x00041e2f) popup_toobar_trans_pane_cp01

0x55ef,	// (0x000423ed) popup_image_details_window_ParamLimits

0x55ef,	// (0x000423ed) popup_image_details_window

0x55fd,	// (0x000423fb) popup_image_focus_window

0x593f,	// (0x0004273d) camera2_autofocus_pane_ParamLimits

0x593f,	// (0x0004273d) camera2_autofocus_pane

0xa0d8,	// (0x00046ed6) bg_popup_sub_pane_cp06

0xcd95,	// (0x00049b93) popup_image_focus_window_g1

0xcd9d,	// (0x00049b9b) popup_image_focus_window_g2

0xcda5,	// (0x00049ba3) popup_image_focus_window_g3

0xcdad,	// (0x00049bab) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004c4fb) popup_image_focus_window_g

0xcdb5,	// (0x00049bb3) popup_image_focus_window_t1

0xcdc3,	// (0x00049bc1) popup_image_focus_window_t2

0xcdd3,	// (0x00049bd1) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0004c504) popup_image_focus_window_t

0xcde1,	// (0x00049bdf) camera2_autofocus_pane_g1

0xb05e,	// (0x00047e5c) bg_tb_trans_pane_cp01

0xcdef,	// (0x00049bed) popup_image_details_window_g1

0xce02,	// (0x00049c00) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0004c516) popup_image_details_window_g

0xce2b,	// (0x00049c29) popup_image_details_window_t1

0xce3d,	// (0x00049c3b) popup_image_details_window_t2

0xce56,	// (0x00049c54) popup_image_details_window_t3

0xce6a,	// (0x00049c68) popup_image_details_window_t4

0xce85,	// (0x00049c83) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004c51d) popup_image_details_window_t

0xa80f,	// (0x0004760d) bg_calc_paper_pane_ParamLimits

0xa0d8,	// (0x00046ed6) grid_highlight_pane_cp013

0x287c,	// (0x0003f67a) list_calc_pane_ParamLimits

0x288e,	// (0x0003f68c) scroll_pane_cp024

0xa823,	// (0x00047621) bg_calc_display_pane_ParamLimits

0x2896,	// (0x0003f694) calc_display_pane_t1_ParamLimits

0x28ab,	// (0x0003f6a9) calc_display_pane_t2_ParamLimits

0x28c0,	// (0x0003f6be) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0004bf4b) calc_display_pane_t_ParamLimits

0x299c,	// (0x0003f79a) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0004bf68) cell_calc_pane_g

0x29a5,	// (0x0003f7a3) cell_calc_pane_t1

0xa882,	// (0x00047680) grid_highlight_pane_cp02_ParamLimits

0xa898,	// (0x00047696) toolbar_button_pane_cp01_ParamLimits

0xa898,	// (0x00047696) toolbar_button_pane_cp01

0xb72b,	// (0x00048529) temp_image_control_pane_ParamLimits

0xb72b,	// (0x00048529) temp_image_control_pane

0xb05e,	// (0x00047e5c) main_mp3_pane

0xce9f,	// (0x00049c9d) temp_image_control_pane_g1_ParamLimits

0xce9f,	// (0x00049c9d) temp_image_control_pane_g1

0xcead,	// (0x00049cab) temp_image_control_pane_g2_ParamLimits

0xcead,	// (0x00049cab) temp_image_control_pane_g2

0xcebf,	// (0x00049cbd) temp_image_control_pane_g3_ParamLimits

0xcebf,	// (0x00049cbd) temp_image_control_pane_g3

0x5f99,	// (0x00042d97) temp_image_control_pane_g4_ParamLimits

0x5f99,	// (0x00042d97) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0004c528) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0004c528) temp_image_control_pane_g

0xce9f,	// (0x00049c9d) main_mp3_pane_g1

0x5faa,	// (0x00042da8) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0004c531) main_mp3_pane_g

0xcf02,	// (0x00049d00) main_mp3_pane_t1

0xa9e9,	// (0x000477e7) main_camera_pane_g8_ParamLimits

0xa9e9,	// (0x000477e7) main_camera_pane_g8

0x3290,	// (0x0004008e) main_video_pane_g7_ParamLimits

0x3290,	// (0x0004008e) main_video_pane_g7

0x5a87,	// (0x00042885) main_camera2_pane_t7_ParamLimits

0x5a87,	// (0x00042885) main_camera2_pane_t7

0xab31,	// (0x0004792f) scroll_pane_cp025_ParamLimits

0xab31,	// (0x0004792f) scroll_pane_cp025

0xab45,	// (0x00047943) scroll_pane_cp026_ParamLimits

0xab45,	// (0x00047943) scroll_pane_cp026

0xab54,	// (0x00047952) wml_content_pane_ParamLimits

0xa0d8,	// (0x00046ed6) main_touch_calib_pane

0x604e,	// (0x00042e4c) main_touch_calib_pane_g1

0x605a,	// (0x00042e58) main_touch_calib_pane_g2

0x6066,	// (0x00042e64) main_touch_calib_pane_g3

0x6072,	// (0x00042e70) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0004c54f) main_touch_calib_pane_g

0x607e,	// (0x00042e7c) main_touch_calib_pane_t1

0x6097,	// (0x00042e95) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0004c558) main_touch_calib_pane_t

0xb2fe,	// (0x000480fc) mup_progress_pane_cp02

0xb333,	// (0x00048131) navi_pane_g1

0xb3ee,	// (0x000481ec) navi_pane_mp_t3

0xb05e,	// (0x00047e5c) main_mp3_pane_ParamLimits

0x56dc,	// (0x000424da) navi_pane_ParamLimits

0xce9f,	// (0x00049c9d) main_mp3_pane_g1_ParamLimits

0x5faa,	// (0x00042da8) main_mp3_pane_g2_ParamLimits

0x5fb6,	// (0x00042db4) main_mp3_pane_g3_ParamLimits

0x5fb6,	// (0x00042db4) main_mp3_pane_g3

0x5fc2,	// (0x00042dc0) main_mp3_pane_g4_ParamLimits

0x5fc2,	// (0x00042dc0) main_mp3_pane_g4

0xcecf,	// (0x00049ccd) main_mp3_pane_g5_ParamLimits

0xcecf,	// (0x00049ccd) main_mp3_pane_g5

0xcedd,	// (0x00049cdb) main_mp3_pane_g6_ParamLimits

0xcedd,	// (0x00049cdb) main_mp3_pane_g6

0xceea,	// (0x00049ce8) main_mp3_pane_g7_ParamLimits

0xceea,	// (0x00049ce8) main_mp3_pane_g7

0xcef6,	// (0x00049cf4) main_mp3_pane_g8_ParamLimits

0xcef6,	// (0x00049cf4) main_mp3_pane_g8

0xf733,	// (0x0004c531) main_mp3_pane_g_ParamLimits

0x5fce,	// (0x00042dcc) main_mp3_pane_t2

0x5fde,	// (0x00042ddc) main_mp3_pane_t3

0xcf10,	// (0x00049d0e) main_mp3_pane_t4

0xcf1e,	// (0x00049d1c) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0004c542) main_mp3_pane_t

0xcf2c,	// (0x00049d2a) mup_progress_pane_cp01

0x0e8a,	// (0x0003dc88) aid_zoom_text_secondary2

0xcce6,	// (0x00049ae4) list_cale_ev2_pane

0xccee,	// (0x00049aec) scroll_pane_cp023_ParamLimits

0x60f2,	// (0x00042ef0) field_cale_ev2_pane_ParamLimits

0x60f2,	// (0x00042ef0) field_cale_ev2_pane

0x118f,	// (0x0003df8d) field_cale_ev2_pane_g1_ParamLimits

0x118f,	// (0x0003df8d) field_cale_ev2_pane_g1

0x119b,	// (0x0003df99) field_cale_ev2_pane_g2_ParamLimits

0x119b,	// (0x0003df99) field_cale_ev2_pane_g2

0x11b3,	// (0x0003dfb1) field_cale_ev2_pane_g3_ParamLimits

0x11b3,	// (0x0003dfb1) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0004c563) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0004c563) field_cale_ev2_pane_g

0x11d7,	// (0x0003dfd5) field_cale_ev2_pane_t1_ParamLimits

0x11d7,	// (0x0003dfd5) field_cale_ev2_pane_t1

0x11ee,	// (0x0003dfec) field_cale_ev2_pane_t2_ParamLimits

0x11ee,	// (0x0003dfec) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0004c56c) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0004c56c) field_cale_ev2_pane_t

0x4eb9,	// (0x00041cb7) main_postcard_pane_g5_ParamLimits

0x4eb9,	// (0x00041cb7) main_postcard_pane_g5

0x4ec7,	// (0x00041cc5) main_postcard_pane_g6_ParamLimits

0x4ec7,	// (0x00041cc5) main_postcard_pane_g6

0x30da,	// (0x0003fed8) camera2_autofocus_pane_cp_ParamLimits

0x30da,	// (0x0003fed8) camera2_autofocus_pane_cp

0xb05e,	// (0x00047e5c) main_mup3_pane

0x611b,	// (0x00042f19) main_mup3_pane_g1_ParamLimits

0x611b,	// (0x00042f19) main_mup3_pane_g1

0x613c,	// (0x00042f3a) main_mup3_pane_g2_ParamLimits

0x613c,	// (0x00042f3a) main_mup3_pane_g2

0x61b4,	// (0x00042fb2) main_mup3_pane_g3_ParamLimits

0x61b4,	// (0x00042fb2) main_mup3_pane_g3

0x61f7,	// (0x00042ff5) main_mup3_pane_g4_ParamLimits

0x61f7,	// (0x00042ff5) main_mup3_pane_g4

0x623a,	// (0x00043038) main_mup3_pane_g5_ParamLimits

0x623a,	// (0x00043038) main_mup3_pane_g5

0x627d,	// (0x0004307b) main_mup3_pane_g6_ParamLimits

0x627d,	// (0x0004307b) main_mup3_pane_g6

0xcf54,	// (0x00049d52) main_mup3_pane_g7_ParamLimits

0xcf54,	// (0x00049d52) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0004c57c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0004c57c) main_mup3_pane_g

0x62f3,	// (0x000430f1) main_mup3_pane_t1_ParamLimits

0x62f3,	// (0x000430f1) main_mup3_pane_t1

0x6362,	// (0x00043160) main_mup3_pane_t2_ParamLimits

0x6362,	// (0x00043160) main_mup3_pane_t2

0x642b,	// (0x00043229) main_mup3_pane_t4_ParamLimits

0x642b,	// (0x00043229) main_mup3_pane_t4

0x6479,	// (0x00043277) main_mup3_pane_t5_ParamLimits

0x6479,	// (0x00043277) main_mup3_pane_t5

0x6529,	// (0x00043327) main_mup3_pane_t6_ParamLimits

0x6529,	// (0x00043327) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0004c58d) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0004c58d) main_mup3_pane_t

0x65d5,	// (0x000433d3) mup3_progress_pane_ParamLimits

0x65d5,	// (0x000433d3) mup3_progress_pane

0x6653,	// (0x00043451) popup_mup3_control_window_ParamLimits

0x6653,	// (0x00043451) popup_mup3_control_window

0xcf62,	// (0x00049d60) popup_mup3_text_window

0x666c,	// (0x0004346a) mup3_progress_pane_t1

0x668b,	// (0x00043489) mup3_progress_pane_t2

0xcf6a,	// (0x00049d68) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0004c59a) mup3_progress_pane_t

0xcf87,	// (0x00049d85) mup_progress_pane_cp03

0xa0d8,	// (0x00046ed6) bg_tb_trans_pane_cp04

0x66aa,	// (0x000434a8) mup3_volume_pane

0x66b2,	// (0x000434b0) popup_mup3_control_window_g1

0x66bb,	// (0x000434b9) mup3_volume_pane_g1

0x66c4,	// (0x000434c2) mup3_volume_pane_g2

0x66cd,	// (0x000434cb) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0004c5a1) mup3_volume_pane_g

0xa0d8,	// (0x00046ed6) bg_tb_trans_pane_cp03

0xcf97,	// (0x00049d95) popup_mup3_text_window_g1

0xcf9f,	// (0x00049d9d) popup_mup3_text_window_t1

0xa86b,	// (0x00047669) list_calc_item_pane_g1_ParamLimits

0xc9b6,	// (0x000497b4) mup_volume_pane_cp_g1

0x60b0,	// (0x00042eae) main_touch_calib_pane_t3

0x60c6,	// (0x00042ec4) main_touch_calib_pane_t4

0x60dc,	// (0x00042eda) main_touch_calib_pane_t5

0x225e,	// (0x0003f05c) aid_cell_size_toolbar2

0x2266,	// (0x0003f064) aid_popup3_width_pane

0x0e82,	// (0x0003dc80) aid_zoom_text_msg_primary

0x30a7,	// (0x0003fea5) vorec_t7

0xa82f,	// (0x0004762d) bg_calc_paper_pane_g1_ParamLimits

0xa83b,	// (0x00047639) bg_calc_paper_pane_g2_ParamLimits

0xa847,	// (0x00047645) bg_calc_paper_pane_g3_ParamLimits

0xa853,	// (0x00047651) bg_calc_paper_pane_g4_ParamLimits

0xa85f,	// (0x0004765d) bg_calc_paper_pane_g5_ParamLimits

0x28ff,	// (0x0003f6fd) bg_calc_paper_pane_g6_ParamLimits

0x2910,	// (0x0003f70e) bg_calc_paper_pane_g7_ParamLimits

0x2921,	// (0x0003f71f) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0004bf52) bg_calc_paper_pane_g_ParamLimits

0x2932,	// (0x0003f730) calc_bg_paper_pane_g9_ParamLimits

0x31c1,	// (0x0003ffbf) image_qvga_pane_ParamLimits

0x31c1,	// (0x0003ffbf) image_qvga_pane

0xa75e,	// (0x0004755c) bg_popup_sub_pane_cp04_ParamLimits

0xb662,	// (0x00048460) popup_mup_playback_window_g1_ParamLimits

0xb66e,	// (0x0004846c) popup_mup_playback_window_t1_ParamLimits

0xb683,	// (0x00048481) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004c2e0) popup_mup_playback_window_t_ParamLimits

0x5bb6,	// (0x000429b4) main_mup2_pane_g3_ParamLimits

0x5bb6,	// (0x000429b4) main_mup2_pane_g3

0x3479,	// (0x00040277) popup_toolbar_window_cp04

0xba65,	// (0x00048863) popup_call2_audio_second_window_g3_ParamLimits

0xba65,	// (0x00048863) popup_call2_audio_second_window_g3

0xbe6f,	// (0x00048c6d) popup_call2_audio_first_window_g4_ParamLimits

0xbe6f,	// (0x00048c6d) popup_call2_audio_first_window_g4

0xc4ee,	// (0x000492ec) popup_call2_audio_in_window_g4_ParamLimits

0xc4ee,	// (0x000492ec) popup_call2_audio_in_window_g4

0x4fcc,	// (0x00041dca) aid_area_sk_bg_cut_ParamLimits

0x4fcc,	// (0x00041dca) aid_area_sk_bg_cut

0xb698,	// (0x00048496) aid_area_sk_bg_cut_2_ParamLimits

0xb698,	// (0x00048496) aid_area_sk_bg_cut_2

0x5f3f,	// (0x00042d3d) aid_placing_details_win

0x5f47,	// (0x00042d45) aid_placing_details_win_2

0xcde1,	// (0x00049bdf) camera2_autofocus_pane_g1_ParamLimits

0x24b5,	// (0x0003f2b3) popup_fixed_preview_cale_window_ParamLimits

0x24b5,	// (0x0003f2b3) popup_fixed_preview_cale_window

0xb474,	// (0x00048272) navi_slider_pane_g3

0xb47d,	// (0x0004827b) navi_slider_pane_g4

0xb486,	// (0x00048284) navi_slider_pane_g5

0xb474,	// (0x00048272) navi_slider_pane_g6

0x4908,	// (0x00041706) navi_slider_pane_g7

0xb599,	// (0x00048397) mup_scale_pane_g3

0xb5a2,	// (0x000483a0) mup_scale_pane_g4

0xb5ab,	// (0x000483a9) mup_scale_pane_g5

0x4d49,	// (0x00041b47) mup_scale_pane_g6

0x4d52,	// (0x00041b50) mup_scale_pane_g7

0xb474,	// (0x00048272) cams2_slider_pane_g3

0xca38,	// (0x00049836) cams2_slider_pane_g4

0x5e97,	// (0x00042c95) cams2_slider_pane_g5

0xb474,	// (0x00048272) cams2_slider_pane_g6

0x5e9f,	// (0x00042c9d) cams2_slider_pane_g7

0xcc6c,	// (0x00049a6a) camera2_autofocus_pane_cp_g1

0xc84f,	// (0x0004964d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84f,	// (0x0004964d) bg_popup_preview_window_pane_cp02

0xcfad,	// (0x00049dab) list_fp_cale_pane_ParamLimits

0xcfad,	// (0x00049dab) list_fp_cale_pane

0xcfb9,	// (0x00049db7) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfb9,	// (0x00049db7) popup_fixed_preview_cale_window_t1

0x66d6,	// (0x000434d4) popup_fixed_preview_cale_window_t2_ParamLimits

0x66d6,	// (0x000434d4) popup_fixed_preview_cale_window_t2

0x66eb,	// (0x000434e9) popup_fixed_preview_cale_window_t3_ParamLimits

0x66eb,	// (0x000434e9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0004c5a8) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0004c5a8) popup_fixed_preview_cale_window_t

0x6700,	// (0x000434fe) list_single_fp_cale_pane_ParamLimits

0x6700,	// (0x000434fe) list_single_fp_cale_pane

0xcfd7,	// (0x00049dd5) list_single_fp_cale_pane_g1_ParamLimits

0xcfd7,	// (0x00049dd5) list_single_fp_cale_pane_g1

0xcfe3,	// (0x00049de1) list_single_fp_cale_pane_g2_ParamLimits

0xcfe3,	// (0x00049de1) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004c5af) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004c5af) list_single_fp_cale_pane_g

0xcffc,	// (0x00049dfa) list_single_fp_cale_pane_t1_ParamLimits

0xcffc,	// (0x00049dfa) list_single_fp_cale_pane_t1

0xd00e,	// (0x00049e0c) list_single_fp_cale_pane_t2_ParamLimits

0xd00e,	// (0x00049e0c) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0004c5b6) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0004c5b6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa0d8,	// (0x00046ed6) main_dialer_pane

0x6713,	// (0x00043511) aid_cell_size_keypad

0x671d,	// (0x0004351b) dialer_ne_pane

0x6727,	// (0x00043525) grid_dialer_command_1_pane

0x672f,	// (0x0004352d) grid_dialer_command_2_pane

0x6737,	// (0x00043535) grid_dialer_keypad_pane

0x6749,	// (0x00043547) bg_popup_call_pane_cp06_ParamLimits

0x6749,	// (0x00043547) bg_popup_call_pane_cp06

0x6755,	// (0x00043553) dialer_ne_clear_pane_ParamLimits

0x6755,	// (0x00043553) dialer_ne_clear_pane

0xd041,	// (0x00049e3f) dialer_ne_pane_g1

0xd049,	// (0x00049e47) dialer_ne_pane_t1_ParamLimits

0xd049,	// (0x00049e47) dialer_ne_pane_t1

0x6761,	// (0x0004355f) dialer_ne_pane_t2_ParamLimits

0x6761,	// (0x0004355f) dialer_ne_pane_t2

0x677e,	// (0x0004357c) dialer_ne_pane_t3_ParamLimits

0x677e,	// (0x0004357c) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004c5bb) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004c5bb) dialer_ne_pane_t

0x67a2,	// (0x000435a0) dialer_ne_pane_t3_copy1_ParamLimits

0x67a2,	// (0x000435a0) dialer_ne_pane_t3_copy1

0x67c6,	// (0x000435c4) cell_dialer_keypad_pane_ParamLimits

0x67c6,	// (0x000435c4) cell_dialer_keypad_pane

0x67dd,	// (0x000435db) cell_dialer_command_1_pane_ParamLimits

0x67dd,	// (0x000435db) cell_dialer_command_1_pane

0x67f3,	// (0x000435f1) cell_dialer_command_2_pane_ParamLimits

0x67f3,	// (0x000435f1) cell_dialer_command_2_pane

0xd05b,	// (0x00049e59) bg_button_pane_cp02_ParamLimits

0xd05b,	// (0x00049e59) bg_button_pane_cp02

0x6802,	// (0x00043600) cell_dialer_keypad_pane_g1_ParamLimits

0x6802,	// (0x00043600) cell_dialer_keypad_pane_g1

0xd05b,	// (0x00049e59) bg_button_pane_cp03_ParamLimits

0xd05b,	// (0x00049e59) bg_button_pane_cp03

0x6817,	// (0x00043615) cell_dialer_command_1_pane_g1_ParamLimits

0x6817,	// (0x00043615) cell_dialer_command_1_pane_g1

0xd067,	// (0x00049e65) bg_button_pane_cp04

0x682b,	// (0x00043629) cell_dialer_command_2_pane_g1

0xb463,	// (0x00048261) bg_button_pane_cp06

0xd06f,	// (0x00049e6d) dialer_ne_clear_pane_g1

0xb33f,	// (0x0004813d) navi_pane_g2

0xb36d,	// (0x0004816b) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004c1e3) navi_pane_g

0xb3fc,	// (0x000481fa) navi_pane_mv_g2

0xb423,	// (0x00048221) navi_pane_mv_g5

0x48d3,	// (0x000416d1) navi_pane_mv_t1

0xa823,	// (0x00047621) main_clock2_pane

0x6869,	// (0x00043667) main_clock2_list_pane_ParamLimits

0x6869,	// (0x00043667) main_clock2_list_pane

0x6891,	// (0x0004368f) main_clock2_pane_t1_ParamLimits

0x6891,	// (0x0004368f) main_clock2_pane_t1

0x68b3,	// (0x000436b1) main_clock2_pane_t2_ParamLimits

0x68b3,	// (0x000436b1) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004c5c7) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004c5c7) main_clock2_pane_t

0x690e,	// (0x0004370c) popup_clock_analogue_window_cp03_ParamLimits

0x690e,	// (0x0004370c) popup_clock_analogue_window_cp03

0x692c,	// (0x0004372a) popup_clock_digital_window_cp02_ParamLimits

0x692c,	// (0x0004372a) popup_clock_digital_window_cp02

0x6999,	// (0x00043797) main_clock2_list_single_pane_ParamLimits

0x6999,	// (0x00043797) main_clock2_list_single_pane

0xb463,	// (0x00048261) list_highlight_pane_cp05

0xd0ad,	// (0x00049eab) main_clock2_list_single_pane_t1

0x3479,	// (0x00040277) popup_toolbar_window_cp04_ParamLimits

0x5f69,	// (0x00042d67) camera2_autofocus_pane_g2_ParamLimits

0x5f69,	// (0x00042d67) camera2_autofocus_pane_g2

0x5f75,	// (0x00042d73) camera2_autofocus_pane_g3_ParamLimits

0x5f75,	// (0x00042d73) camera2_autofocus_pane_g3

0x5f81,	// (0x00042d7f) camera2_autofocus_pane_g4_ParamLimits

0x5f81,	// (0x00042d7f) camera2_autofocus_pane_g4

0x5f8d,	// (0x00042d8b) camera2_autofocus_pane_g5_ParamLimits

0x5f8d,	// (0x00042d8b) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004c50b) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004c50b) camera2_autofocus_pane_g

0xcf34,	// (0x00049d32) camera2_autofocus_pane_cp_g2

0xcf3c,	// (0x00049d3a) camera2_autofocus_pane_cp_g3

0xcf44,	// (0x00049d42) camera2_autofocus_pane_cp_g4

0xcf4c,	// (0x00049d4a) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0004c571) camera2_autofocus_pane_cp_g

0x6741,	// (0x0004353f) popup_dialer_spcha_window

0xa0d8,	// (0x00046ed6) bg_popup_sub_pane_cp07

0xd0bb,	// (0x00049eb9) list_spcha_pane

0xd0c3,	// (0x00049ec1) list_single_spcha_pane_ParamLimits

0xd0c3,	// (0x00049ec1) list_single_spcha_pane

0xa0d8,	// (0x00046ed6) list_highlight_pane_cp06

0xd0d4,	// (0x00049ed2) list_single_spcha_pane_t1

0xc298,	// (0x00049096) popup_call2_audio_out_window_g4_ParamLimits

0xc298,	// (0x00049096) popup_call2_audio_out_window_g4

0xa0d8,	// (0x00046ed6) main_imed2_pane

0x5605,	// (0x00042403) popup_imed_adjust2_window

0x5618,	// (0x00042416) popup_imed_trans_window_ParamLimits

0x5618,	// (0x00042416) popup_imed_trans_window

0xcaa1,	// (0x0004989f) popup_blid_sat_info2_window_t1

0xcaaf,	// (0x000498ad) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0004c4a0) popup_blid_sat_info2_window_t

0x6a43,	// (0x00043841) aid_size_cell_colour_35

0x6a5d,	// (0x0004385b) aid_size_cell_colour_112

0x6a74,	// (0x00043872) aid_size_cell_effect

0xb05e,	// (0x00047e5c) bg_tb_trans_pane_cp02

0xb06c,	// (0x00047e6a) heading_imed_pane

0x6a8e,	// (0x0004388c) listscroll_imed_pane

0xd0e2,	// (0x00049ee0) heading_imed_pane_g1

0xd0ea,	// (0x00049ee8) heading_imed_pane_t1

0xd0f8,	// (0x00049ef6) grid_imed_colour_35_pane_ParamLimits

0xd0f8,	// (0x00049ef6) grid_imed_colour_35_pane

0x6a9a,	// (0x00043898) grid_imed_effect_pane

0xd10f,	// (0x00049f0d) list_imed_aspect_pane

0x6aaa,	// (0x000438a8) scroll_pane_cp027_ParamLimits

0x6aaa,	// (0x000438a8) scroll_pane_cp027

0x6ab6,	// (0x000438b4) cell_imed_effect_pane_ParamLimits

0x6ab6,	// (0x000438b4) cell_imed_effect_pane

0xd117,	// (0x00049f15) cell_imed_colour_pane_ParamLimits

0xd117,	// (0x00049f15) cell_imed_colour_pane

0xd159,	// (0x00049f57) cell_imed_colour_pane_g1_ParamLimits

0xd159,	// (0x00049f57) cell_imed_colour_pane_g1

0xd16a,	// (0x00049f68) hgihlgiht_grid_pane_cp016_ParamLimits

0xd16a,	// (0x00049f68) hgihlgiht_grid_pane_cp016

0x6ace,	// (0x000438cc) cell_imed_effect_pane_g1

0x6ad6,	// (0x000438d4) grid_highlight_pane_cp017

0xd17b,	// (0x00049f79) list_imed_single_pane_ParamLimits

0xd17b,	// (0x00049f79) list_imed_single_pane

0xa0d8,	// (0x00046ed6) list_highlight_pane_cp07

0xd190,	// (0x00049f8e) list_imed_aspect_pane_comp1_t1

0xc85b,	// (0x00049659) bg_tb_trans_pane_cp05

0xd1b2,	// (0x00049fb0) popup_imed_adjust2_window_g1

0xd1d9,	// (0x00049fd7) popup_imed_adjust2_window_t1

0xd1f1,	// (0x00049fef) slider_imed_adjust_pane

0xd205,	// (0x0004a003) slider_imed_adjust_pane_g1

0xd215,	// (0x0004a013) slider_imed_adjust_pane_g2

0xd225,	// (0x0004a023) slider_imed_adjust_pane_g3

0xd236,	// (0x0004a034) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004c5e4) slider_imed_adjust_pane_g

0x6adf,	// (0x000438dd) aid_size_cell_clipart2

0x6aeb,	// (0x000438e9) grid_imed_clipart_pane

0xd247,	// (0x0004a045) scroll_pane_cp031

0x6af5,	// (0x000438f3) cell_imed_clipart_pane_ParamLimits

0x6af5,	// (0x000438f3) cell_imed_clipart_pane

0x6b17,	// (0x00043915) cell_imed_clipart_pane_g1

0xa0d8,	// (0x00046ed6) grid_highlight_pane_cp014

0x6875,	// (0x00043673) main_clock2_pane_g1_ParamLimits

0x6875,	// (0x00043673) main_clock2_pane_g1

0x6944,	// (0x00043742) aid_call2_pane_cp10

0x6956,	// (0x00043754) aid_call_pane_cp10

0xb2a0,	// (0x0004809e) popup_clock_analogue_window_cp10_g1

0xb2a0,	// (0x0004809e) popup_clock_analogue_window_cp10_g2

0x6968,	// (0x00043766) popup_clock_analogue_window_cp10_g3

0x6968,	// (0x00043766) popup_clock_analogue_window_cp10_g4

0xb2a0,	// (0x0004809e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004c5d2) popup_clock_analogue_window_cp10_g

0x697a,	// (0x00043778) popup_clock_analogue_window_cp10_t1

0x69ab,	// (0x000437a9) clock_digital_number_pane_cp10_ParamLimits

0x69ab,	// (0x000437a9) clock_digital_number_pane_cp10

0x69c3,	// (0x000437c1) clock_digital_number_pane_cp11_ParamLimits

0x69c3,	// (0x000437c1) clock_digital_number_pane_cp11

0x69db,	// (0x000437d9) clock_digital_number_pane_cp12_ParamLimits

0x69db,	// (0x000437d9) clock_digital_number_pane_cp12

0x69f3,	// (0x000437f1) clock_digital_number_pane_cp13_ParamLimits

0x69f3,	// (0x000437f1) clock_digital_number_pane_cp13

0x6a0b,	// (0x00043809) clock_digital_separator_pane_cp10_ParamLimits

0x6a0b,	// (0x00043809) clock_digital_separator_pane_cp10

0x6a23,	// (0x00043821) popup_clock_digital_window_cp02_t1_ParamLimits

0x6a23,	// (0x00043821) popup_clock_digital_window_cp02_t1

0xa756,	// (0x00047554) clock_digital_number_pane_cp10_g1

0xa756,	// (0x00047554) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004c5ed) clock_digital_number_pane_cp10_g

0xa756,	// (0x00047554) clock_digital_separator_pane_cp10_g1

0xa756,	// (0x00047554) clock_digital_separator_pane_g2_cp10

0xb42b,	// (0x00048229) navi_pane_vded_g4

0xb434,	// (0x00048232) navi_pane_vded_g5

0xb43d,	// (0x0004823b) navi_pane_vded_t1

0xa0d8,	// (0x00046ed6) main_vded_pane

0x6b20,	// (0x0004391e) main_vded_pane_g1

0x6b2c,	// (0x0004392a) main_vded_pane_g2

0x6b36,	// (0x00043934) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004c5f2) main_vded_pane_g

0x6b40,	// (0x0004393e) main_vded_pane_t1

0x6b4e,	// (0x0004394c) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004c5f9) main_vded_pane_t

0x6b5c,	// (0x0004395a) vded_slider_pane

0x6b66,	// (0x00043964) vded_video_pane

0xd24f,	// (0x0004a04d) vded_video_pane_g1

0x6b70,	// (0x0004396e) vded_video_pane_g2

0xcc6c,	// (0x00049a6a) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004c5fe) vded_video_pane_g

0xd259,	// (0x0004a057) vded_slider_pane_g1

0xc9b6,	// (0x000497b4) vded_slider_pane_g2

0xd262,	// (0x0004a060) vded_slider_pane_g3

0xd26b,	// (0x0004a069) vded_slider_pane_g4

0xd274,	// (0x0004a072) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004c605) vded_slider_pane_g

0x6645,	// (0x00043443) mup3_rocker_pane_ParamLimits

0x6645,	// (0x00043443) mup3_rocker_pane

0x6b79,	// (0x00043977) mup3_control_keys_pane_g1

0x6b81,	// (0x0004397f) mup3_control_keys_pane_g2

0x6b89,	// (0x00043987) mup3_control_keys_pane_g3

0x6b91,	// (0x0004398f) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004c610) mup3_control_keys_pane_g

0x24dd,	// (0x0003f2db) popup_toolbar2_fixed_window_cp01_ParamLimits

0x24dd,	// (0x0003f2db) popup_toolbar2_fixed_window_cp01

0x665f,	// (0x0004345d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x665f,	// (0x0004345d) popup_toolbar2_fixed_window_cp02

0xbbd7,	// (0x000489d5) popup_call2_audio_second_window_t4_ParamLimits

0xbbd7,	// (0x000489d5) popup_call2_audio_second_window_t4

0xc105,	// (0x00048f03) popup_call2_audio_first_window_t6_ParamLimits

0xc105,	// (0x00048f03) popup_call2_audio_first_window_t6

0xc39b,	// (0x00049199) popup_call2_audio_out_window_t6_ParamLimits

0xc39b,	// (0x00049199) popup_call2_audio_out_window_t6

0xa0d8,	// (0x00046ed6) main_vitu_pane

0x6ba1,	// (0x0004399f) aid_size_cell_itu_ParamLimits

0x6ba1,	// (0x0004399f) aid_size_cell_itu

0xdb26,	// (0x0004a924) bg_popup_window_pane_cp08_ParamLimits

0xdb26,	// (0x0004a924) bg_popup_window_pane_cp08

0x6baf,	// (0x000439ad) field_vitu_entry_pane_ParamLimits

0x6baf,	// (0x000439ad) field_vitu_entry_pane

0x6bbe,	// (0x000439bc) grid_vitu_function_pane_ParamLimits

0x6bbe,	// (0x000439bc) grid_vitu_function_pane

0x6bce,	// (0x000439cc) grid_vitu_itu_pane_ParamLimits

0x6bce,	// (0x000439cc) grid_vitu_itu_pane

0x6bde,	// (0x000439dc) cell_vitu_itu_pane_ParamLimits

0x6bde,	// (0x000439dc) cell_vitu_itu_pane

0x6bf3,	// (0x000439f1) cell_vitu_function_pane_ParamLimits

0x6bf3,	// (0x000439f1) cell_vitu_function_pane

0xb05e,	// (0x00047e5c) bg_popup_sub_pane_cp08_ParamLimits

0xb05e,	// (0x00047e5c) bg_popup_sub_pane_cp08

0x6c05,	// (0x00043a03) field_vitu_entry_pane_t1_ParamLimits

0x6c05,	// (0x00043a03) field_vitu_entry_pane_t1

0xd295,	// (0x0004a093) field_vitu_entry_pane_t2_ParamLimits

0xd295,	// (0x0004a093) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004c61e) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004c61e) field_vitu_entry_pane_t

0xd2b2,	// (0x0004a0b0) bg_button_pane_cp05_ParamLimits

0xd2b2,	// (0x0004a0b0) bg_button_pane_cp05

0x6c21,	// (0x00043a1f) cell_vitu_itu_pane_g1

0x6c39,	// (0x00043a37) cell_vitu_itu_pane_t1_ParamLimits

0x6c39,	// (0x00043a37) cell_vitu_itu_pane_t1

0x6c4b,	// (0x00043a49) cell_vitu_itu_pane_t2_ParamLimits

0x6c4b,	// (0x00043a49) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004c623) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004c623) cell_vitu_itu_pane_t

0xd2c0,	// (0x0004a0be) bg_button_pane_cp07

0x6c80,	// (0x00043a7e) cell_vitu_function_pane_g1

0x27a3,	// (0x0003f5a1) main_calc_pane_g1

0x229a,	// (0x0003f098) aid_visual_content_pane

0xa0d8,	// (0x00046ed6) main_vradio_pane

0x6c89,	// (0x00043a87) main_vradio_pane_g1_ParamLimits

0x6c89,	// (0x00043a87) main_vradio_pane_g1

0xd2ca,	// (0x0004a0c8) main_vradio_pane_g2_ParamLimits

0xd2ca,	// (0x0004a0c8) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004c62a) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004c62a) main_vradio_pane_g

0x6c99,	// (0x00043a97) main_vradio_pane_t1_ParamLimits

0x6c99,	// (0x00043a97) main_vradio_pane_t1

0x6cab,	// (0x00043aa9) main_vradio_pane_t2_ParamLimits

0x6cab,	// (0x00043aa9) main_vradio_pane_t2

0xd2d7,	// (0x0004a0d5) main_vradio_pane_t3_ParamLimits

0xd2d7,	// (0x0004a0d5) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004c62f) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004c62f) main_vradio_pane_t

0x6cbd,	// (0x00043abb) vradio_rocker_control_pane_ParamLimits

0x6cbd,	// (0x00043abb) vradio_rocker_control_pane

0x6cc9,	// (0x00043ac7) vradio_station_info_pane_ParamLimits

0x6cc9,	// (0x00043ac7) vradio_station_info_pane

0xd2eb,	// (0x0004a0e9) vradio_frequency_info_pane_ParamLimits

0xd2eb,	// (0x0004a0e9) vradio_frequency_info_pane

0xcc6c,	// (0x00049a6a) vradio_station_info_pane_g1

0xd2fa,	// (0x0004a0f8) vradio_station_info_pane_t1_ParamLimits

0xd2fa,	// (0x0004a0f8) vradio_station_info_pane_t1

0xd328,	// (0x0004a126) vradio_station_info_pane_t2_ParamLimits

0xd328,	// (0x0004a126) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004c636) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004c636) vradio_station_info_pane_t

0xd33a,	// (0x0004a138) vradio_tuning_pane

0xd342,	// (0x0004a140) vradio_rocker_control_pane_g1

0xd34a,	// (0x0004a148) vradio_rocker_control_pane_g2

0xd352,	// (0x0004a150) vradio_rocker_control_pane_g3

0xd35a,	// (0x0004a158) vradio_rocker_control_pane_g4

0xd362,	// (0x0004a160) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004c63b) vradio_rocker_control_pane_g

0x6cd8,	// (0x00043ad6) vradio_frequency_info_pane_g1

0xd36a,	// (0x0004a168) vradio_frequency_info_pane_t1_ParamLimits

0xd36a,	// (0x0004a168) vradio_frequency_info_pane_t1

0x6ce2,	// (0x00043ae0) vradio_tuning_pane_g1

0x6ceb,	// (0x00043ae9) vradio_tuning_pane_t1

0x22e3,	// (0x0003f0e1) area_side_right_pane_ParamLimits

0x22e3,	// (0x0003f0e1) area_side_right_pane

0xc816,	// (0x00049614) status_small_pane_g1

0xc81e,	// (0x0004961c) status_small_pane_g2

0xc827,	// (0x00049625) status_small_pane_g3

0xc830,	// (0x0004962e) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0004c3f6) status_small_pane_g

0xc839,	// (0x00049637) status_small_pane_t1

0xa0d8,	// (0x00046ed6) main_video3_pane

0xd37e,	// (0x0004a17c) cams_zoom_vslider_pane

0xd386,	// (0x0004a184) image3_wide_pane_ParamLimits

0xd386,	// (0x0004a184) image3_wide_pane

0xd3a0,	// (0x0004a19e) image3_wide_small_pane

0xd3ac,	// (0x0004a1aa) main_video3_pane_g1_ParamLimits

0xd3ac,	// (0x0004a1aa) main_video3_pane_g1

0xd3c8,	// (0x0004a1c6) main_video3_pane_g2_ParamLimits

0xd3c8,	// (0x0004a1c6) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004c646) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004c646) main_video3_pane_g

0xd3e4,	// (0x0004a1e2) main_video3_pane_t1_ParamLimits

0xd3e4,	// (0x0004a1e2) main_video3_pane_t1

0xd40f,	// (0x0004a20d) main_video3_pane_t2_ParamLimits

0xd40f,	// (0x0004a20d) main_video3_pane_t2

0xd43a,	// (0x0004a238) main_video3_pane_t3_ParamLimits

0xd43a,	// (0x0004a238) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004c64b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004c64b) main_video3_pane_t

0xd467,	// (0x0004a265) cams_zoom_vslider_pane_g1

0xd470,	// (0x0004a26e) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004c652) cams_zoom_vslider_pane_g

0xd478,	// (0x0004a276) small_slider_vertical_pane

0xcc6c,	// (0x00049a6a) small_slider_vertical_pane_g1

0xcc6c,	// (0x00049a6a) small_slider_vertical_pane_g2

0xd480,	// (0x0004a27e) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004c657) small_slider_vertical_pane_g

0xa0d8,	// (0x00046ed6) main_hwr_training_pane

0xd489,	// (0x0004a287) hwr_training_instruct_pane_ParamLimits

0xd489,	// (0x0004a287) hwr_training_instruct_pane

0x6cfa,	// (0x00043af8) hwr_training_navi_pane_ParamLimits

0x6cfa,	// (0x00043af8) hwr_training_navi_pane

0x6d14,	// (0x00043b12) hwr_training_write_pane_ParamLimits

0x6d14,	// (0x00043b12) hwr_training_write_pane

0xa0d8,	// (0x00046ed6) bg_frame_shadow_pane

0xd4c0,	// (0x0004a2be) hwr_training_write_pane_g1

0xd4c8,	// (0x0004a2c6) hwr_training_write_pane_g2

0xd4d0,	// (0x0004a2ce) hwr_training_write_pane_g3

0xd4d8,	// (0x0004a2d6) hwr_training_write_pane_g4

0xd4e0,	// (0x0004a2de) hwr_training_write_pane_g5

0xd4e8,	// (0x0004a2e6) hwr_training_write_pane_g6

0xd4f0,	// (0x0004a2ee) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004c65e) hwr_training_write_pane_g

0x6d4c,	// (0x00043b4a) hwr_training_navi_pane_g1_ParamLimits

0x6d4c,	// (0x00043b4a) hwr_training_navi_pane_g1

0x6d5e,	// (0x00043b5c) hwr_training_navi_pane_g2_ParamLimits

0x6d5e,	// (0x00043b5c) hwr_training_navi_pane_g2

0x6d70,	// (0x00043b6e) hwr_training_navi_pane_g3_ParamLimits

0x6d70,	// (0x00043b6e) hwr_training_navi_pane_g3

0x6d80,	// (0x00043b7e) hwr_training_navi_pane_g4_ParamLimits

0x6d80,	// (0x00043b7e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004c66d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004c66d) hwr_training_navi_pane_g

0x6d9a,	// (0x00043b98) hwr_training_navi_pane_t1

0x6da8,	// (0x00043ba6) list_single_hwr_training_instruct_pane_ParamLimits

0x6da8,	// (0x00043ba6) list_single_hwr_training_instruct_pane

0xd4f8,	// (0x0004a2f6) list_single_hwr_training_instruct_pane_t1

0xcbac,	// (0x000499aa) bg_frame_shadow_pane_g1

0xd507,	// (0x0004a305) bg_frame_shadow_pane_g2

0xd50f,	// (0x0004a30d) bg_frame_shadow_pane_g3

0xd517,	// (0x0004a315) bg_frame_shadow_pane_g4

0xd51f,	// (0x0004a31d) bg_frame_shadow_pane_g5

0xd527,	// (0x0004a325) bg_frame_shadow_pane_g6

0xd52f,	// (0x0004a32d) bg_frame_shadow_pane_g7

0xa8dc,	// (0x000476da) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004c678) bg_frame_shadow_pane_g

0xa0d8,	// (0x00046ed6) main_video_tele_dialer_pane

0x6dcd,	// (0x00043bcb) aid_size_cell_video_keypad_ParamLimits

0x6dcd,	// (0x00043bcb) aid_size_cell_video_keypad

0x6ddd,	// (0x00043bdb) grid_video_dialer_keypad_pane_ParamLimits

0x6ddd,	// (0x00043bdb) grid_video_dialer_keypad_pane

0x6e11,	// (0x00043c0f) video_down_pane_cp_ParamLimits

0x6e11,	// (0x00043c0f) video_down_pane_cp

0x6e3b,	// (0x00043c39) cell_video_dialer_keypad_pane_ParamLimits

0x6e3b,	// (0x00043c39) cell_video_dialer_keypad_pane

0xd537,	// (0x0004a335) bg_button_pane_cp08_ParamLimits

0xd537,	// (0x0004a335) bg_button_pane_cp08

0x6e50,	// (0x00043c4e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6e50,	// (0x00043c4e) cell_video_dialer_keypad_pane_g1

0x6639,	// (0x00043437) mup3_rocker2_pane_ParamLimits

0x6639,	// (0x00043437) mup3_rocker2_pane

0xcc6c,	// (0x00049a6a) mup3_rocker2_pane_g1

0x5575,	// (0x00042373) main_dialer2_pane

0xa0d8,	// (0x00046ed6) main_mp4_pane

0x6e8f,	// (0x00043c8d) main_mp4_pane_g1_ParamLimits

0x6e8f,	// (0x00043c8d) main_mp4_pane_g1

0x6e9d,	// (0x00043c9b) main_mp4_pane_g2_ParamLimits

0x6e9d,	// (0x00043c9b) main_mp4_pane_g2

0x6eab,	// (0x00043ca9) main_mp4_pane_g3_ParamLimits

0x6eab,	// (0x00043ca9) main_mp4_pane_g3

0x6ef0,	// (0x00043cee) main_mp4_pane_g4_ParamLimits

0x6ef0,	// (0x00043cee) main_mp4_pane_g4

0x6f18,	// (0x00043d16) main_mp4_pane_g5_ParamLimits

0x6f18,	// (0x00043d16) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004c698) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004c698) main_mp4_pane_g

0x6f68,	// (0x00043d66) main_mp4_pane_t1_ParamLimits

0x6f68,	// (0x00043d66) main_mp4_pane_t1

0x6fc4,	// (0x00043dc2) main_mp4_pane_t2_ParamLimits

0x6fc4,	// (0x00043dc2) main_mp4_pane_t2

0xd543,	// (0x0004a341) main_mp4_pane_t3_ParamLimits

0xd543,	// (0x0004a341) main_mp4_pane_t3

0x7016,	// (0x00043e14) main_mp4_pane_t4_ParamLimits

0x7016,	// (0x00043e14) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004c6a5) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004c6a5) main_mp4_pane_t

0x705a,	// (0x00043e58) mp4_progress_pane_ParamLimits

0x705a,	// (0x00043e58) mp4_progress_pane

0x70a4,	// (0x00043ea2) mp4_rocker_pane_ParamLimits

0x70a4,	// (0x00043ea2) mp4_rocker_pane

0xd56b,	// (0x0004a369) mp4_progress_pane_t1

0xd584,	// (0x0004a382) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004c6ae) mp4_progress_pane_t

0xd59d,	// (0x0004a39b) mup_progress_pane_cp04

0xcc6c,	// (0x00049a6a) mp4_rocker_pane_g1

0x70c4,	// (0x00043ec2) aid_cell_size_keypad2_ParamLimits

0x70c4,	// (0x00043ec2) aid_cell_size_keypad2

0x70d4,	// (0x00043ed2) dialer2_ne_pane_ParamLimits

0x70d4,	// (0x00043ed2) dialer2_ne_pane

0x70e2,	// (0x00043ee0) grid_dialer2_keypad_pane_ParamLimits

0x70e2,	// (0x00043ee0) grid_dialer2_keypad_pane

0xdb34,	// (0x0004a932) bg_popup_call_pane_cp07_ParamLimits

0xdb34,	// (0x0004a932) bg_popup_call_pane_cp07

0x70f2,	// (0x00043ef0) dialer2_ne_pane_t1_ParamLimits

0x70f2,	// (0x00043ef0) dialer2_ne_pane_t1

0x7117,	// (0x00043f15) cell_dialer2_keypad_pane_ParamLimits

0x7117,	// (0x00043f15) cell_dialer2_keypad_pane

0xd5bb,	// (0x0004a3b9) bg_button_pane_pane_cp04_ParamLimits

0xd5bb,	// (0x0004a3b9) bg_button_pane_pane_cp04

0x712c,	// (0x00043f2a) cell_dialer2_keypad_pane_g1_ParamLimits

0x712c,	// (0x00043f2a) cell_dialer2_keypad_pane_g1

0x333b,	// (0x00040139) aid_placing_vt_set_content_ParamLimits

0x333b,	// (0x00040139) aid_placing_vt_set_content

0x3367,	// (0x00040165) aid_placing_vt_set_title_ParamLimits

0x3367,	// (0x00040165) aid_placing_vt_set_title

0xa0d8,	// (0x00046ed6) main_image3_pane

0x71c6,	// (0x00043fc4) area_side_right_pane_cp01_ParamLimits

0x71c6,	// (0x00043fc4) area_side_right_pane_cp01

0xa645,	// (0x00047443) main_image3_pane_g1_ParamLimits

0xa645,	// (0x00047443) main_image3_pane_g1

0x71f3,	// (0x00043ff1) main_image3_pane_g2_ParamLimits

0x71f3,	// (0x00043ff1) main_image3_pane_g2

0x720c,	// (0x0004400a) main_image3_pane_g3_ParamLimits

0x720c,	// (0x0004400a) main_image3_pane_g3

0x7225,	// (0x00044023) main_image3_pane_g4_ParamLimits

0x7225,	// (0x00044023) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004c6bd) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004c6bd) main_image3_pane_g

0x723e,	// (0x0004403c) main_image3_pane_t1_ParamLimits

0x723e,	// (0x0004403c) main_image3_pane_t1

0x7263,	// (0x00044061) main_image3_pane_t2_ParamLimits

0x7263,	// (0x00044061) main_image3_pane_t2

0x7282,	// (0x00044080) main_image3_pane_t3_ParamLimits

0x7282,	// (0x00044080) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004c6c6) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004c6c6) main_image3_pane_t

0xdb26,	// (0x0004a924) grid_sctrl_middle_pane_cp01_ParamLimits

0xdb26,	// (0x0004a924) grid_sctrl_middle_pane_cp01

0x72e3,	// (0x000440e1) cell_sctrl_middle_pane_cp01_ParamLimits

0x72e3,	// (0x000440e1) cell_sctrl_middle_pane_cp01

0x72f4,	// (0x000440f2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x72f4,	// (0x000440f2) cell_sctrl_middle_pane_cp01_g1

0xa0d8,	// (0x00046ed6) main_call4_pane

0x7301,	// (0x000440ff) aid_size_button_call4_ParamLimits

0x7301,	// (0x000440ff) aid_size_button_call4

0x7331,	// (0x0004412f) call4_windows_pane_ParamLimits

0x7331,	// (0x0004412f) call4_windows_pane

0x734b,	// (0x00044149) grid_call4_button_pane_ParamLimits

0x734b,	// (0x00044149) grid_call4_button_pane

0xd5c7,	// (0x0004a3c5) call4_windows_conf_pane

0xd5de,	// (0x0004a3dc) popup_call4_audio_first_window_ParamLimits

0xd5de,	// (0x0004a3dc) popup_call4_audio_first_window

0xd62a,	// (0x0004a428) popup_call4_audio_second_window_ParamLimits

0xd62a,	// (0x0004a428) popup_call4_audio_second_window

0xd63e,	// (0x0004a43c) popup_call4_audio_wait_window_ParamLimits

0xd63e,	// (0x0004a43c) popup_call4_audio_wait_window

0x736f,	// (0x0004416d) cell_call4_button_pane_ParamLimits

0x736f,	// (0x0004416d) cell_call4_button_pane

0x7394,	// (0x00044192) bg_button_pane_cp09_ParamLimits

0x7394,	// (0x00044192) bg_button_pane_cp09

0x73a0,	// (0x0004419e) cell_call4_button_pane_g1_ParamLimits

0x73a0,	// (0x0004419e) cell_call4_button_pane_g1

0x73ad,	// (0x000441ab) cell_call4_button_pane_t1_ParamLimits

0x73ad,	// (0x000441ab) cell_call4_button_pane_t1

0xd686,	// (0x0004a484) popup_call4_audio_conf_window_ParamLimits

0xd686,	// (0x0004a484) popup_call4_audio_conf_window

0x666c,	// (0x0004346a) mup3_progress_pane_t1_ParamLimits

0x668b,	// (0x00043489) mup3_progress_pane_t2_ParamLimits

0xcf6a,	// (0x00049d68) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0004c59a) mup3_progress_pane_t_ParamLimits

0xcf87,	// (0x00049d85) mup_progress_pane_cp03_ParamLimits

0x6b99,	// (0x00043997) mup3_control_keys_pane_g4_copy1

0x7088,	// (0x00043e86) mp4_rocker2_pane_ParamLimits

0x7088,	// (0x00043e86) mp4_rocker2_pane

0xd69a,	// (0x0004a498) mp4_rocker2_pane_g1

0xd6a2,	// (0x0004a4a0) mp4_rocker2_pane_g2

0x73bf,	// (0x000441bd) mp4_rocker2_pane_g3

0x73c7,	// (0x000441c5) mp4_rocker2_pane_g4

0x73cf,	// (0x000441cd) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004c6cf) mp4_rocker2_pane_g

0xa0d8,	// (0x00046ed6) main_camera4_pane

0xa0d8,	// (0x00046ed6) main_video4_pane

0x6ded,	// (0x00043beb) main_video_tele_dialer_pane_t1_ParamLimits

0x6ded,	// (0x00043beb) main_video_tele_dialer_pane_t1

0x6dff,	// (0x00043bfd) main_video_tele_dialer_pane_t2_ParamLimits

0x6dff,	// (0x00043bfd) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004c689) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004c689) main_video_tele_dialer_pane_t

0x73ef,	// (0x000441ed) cam4_autofocus_pane_ParamLimits

0x73ef,	// (0x000441ed) cam4_autofocus_pane

0x7409,	// (0x00044207) cam4_image_uncrop_pane_ParamLimits

0x7409,	// (0x00044207) cam4_image_uncrop_pane

0x7420,	// (0x0004421e) cam4_indicators_pane_ParamLimits

0x7420,	// (0x0004421e) cam4_indicators_pane

0x743c,	// (0x0004423a) main_camera4_pane_g1_ParamLimits

0x743c,	// (0x0004423a) main_camera4_pane_g1

0x7448,	// (0x00044246) main_camera4_pane_g2_ParamLimits

0x7448,	// (0x00044246) main_camera4_pane_g2

0x7448,	// (0x00044246) main_camera4_pane_g3_ParamLimits

0x7448,	// (0x00044246) main_camera4_pane_g3

0x7454,	// (0x00044252) main_camera4_pane_g4_ParamLimits

0x7454,	// (0x00044252) main_camera4_pane_g4

0x7460,	// (0x0004425e) main_camera4_pane_g5_ParamLimits

0x7460,	// (0x0004425e) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004c6da) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004c6da) main_camera4_pane_g

0x747a,	// (0x00044278) main_camera4_pane_t1_ParamLimits

0x747a,	// (0x00044278) main_camera4_pane_t1

0xcecf,	// (0x00049ccd) bg_tb_trans_pane_cp06

0x74ca,	// (0x000442c8) cam4_indicators_pane_g1

0x74db,	// (0x000442d9) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004c6f5) cam4_indicators_pane_g

0x74f9,	// (0x000442f7) cam4_indicators_pane_t1

0x7523,	// (0x00044321) main_video4_pane_g1_ParamLimits

0x7523,	// (0x00044321) main_video4_pane_g1

0x752f,	// (0x0004432d) main_video4_pane_g2_ParamLimits

0x752f,	// (0x0004432d) main_video4_pane_g2

0x753b,	// (0x00044339) main_video4_pane_g3_ParamLimits

0x753b,	// (0x00044339) main_video4_pane_g3

0x7547,	// (0x00044345) main_video4_pane_g4_ParamLimits

0x7547,	// (0x00044345) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004c6fc) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004c6fc) main_video4_pane_g

0x7567,	// (0x00044365) vid4_indicators_pane_ParamLimits

0x7567,	// (0x00044365) vid4_indicators_pane

0x7586,	// (0x00044384) video4_image_uncrop_cif_pane_ParamLimits

0x7586,	// (0x00044384) video4_image_uncrop_cif_pane

0x7595,	// (0x00044393) video4_image_uncrop_nhd_pane_ParamLimits

0x7595,	// (0x00044393) video4_image_uncrop_nhd_pane

0x7409,	// (0x00044207) video4_image_uncrop_vga_pane_ParamLimits

0x7409,	// (0x00044207) video4_image_uncrop_vga_pane

0xb05e,	// (0x00047e5c) bg_tb_trans_pane_cp07

0x75ac,	// (0x000443aa) vid4_indicators_pane_g1

0x75c0,	// (0x000443be) vid4_indicators_pane_g2

0x75d4,	// (0x000443d2) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004c707) vid4_indicators_pane_g

0x7603,	// (0x00044401) vid4_indicators_pane_t1

0x761a,	// (0x00044418) cam4_autofocus_pane_g1

0x7622,	// (0x00044420) cam4_autofocus_pane_g2

0x762a,	// (0x00044428) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004c712) cam4_autofocus_pane_g

0x7632,	// (0x00044430) cam4_autofocus_pane_g3_copy1

0x6e1f,	// (0x00043c1d) video_down_pane_cp_t1

0x6e2d,	// (0x00043c2b) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004c68e) video_down_pane_cp_t

0xdb26,	// (0x0004a924) popup_vitu2_window_ParamLimits

0xdb26,	// (0x0004a924) popup_vitu2_window

0x763a,	// (0x00044438) aid_size_cell2_itu2_ParamLimits

0x763a,	// (0x00044438) aid_size_cell2_itu2

0x765c,	// (0x0004445a) aid_size_cell_itu2_ParamLimits

0x765c,	// (0x0004445a) aid_size_cell_itu2

0xdb34,	// (0x0004a932) bg_popup_window_pane_cp09_ParamLimits

0xdb34,	// (0x0004a932) bg_popup_window_pane_cp09

0x76a0,	// (0x0004449e) field_vitu2_entry_pane_ParamLimits

0x76a0,	// (0x0004449e) field_vitu2_entry_pane

0x76c0,	// (0x000444be) grid_vitu2_function_pane_ParamLimits

0x76c0,	// (0x000444be) grid_vitu2_function_pane

0x7704,	// (0x00044502) grid_vitu2_itu_pane_ParamLimits

0x7704,	// (0x00044502) grid_vitu2_itu_pane

0x777c,	// (0x0004457a) cell_vitu2_itu_pane_ParamLimits

0x777c,	// (0x0004457a) cell_vitu2_itu_pane

0x7791,	// (0x0004458f) cell_vitu2_function_pane_ParamLimits

0x7791,	// (0x0004458f) cell_vitu2_function_pane

0xd6aa,	// (0x0004a4a8) bg_popup_call_pane_cp08_ParamLimits

0xd6aa,	// (0x0004a4a8) bg_popup_call_pane_cp08

0xd6c1,	// (0x0004a4bf) field_vitu2_entry_pane_g1

0xd6cd,	// (0x0004a4cb) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004c719) field_vitu2_entry_pane_g

0x1203,	// (0x0003e001) field_vitu2_entry_pane_t1_ParamLimits

0x1203,	// (0x0003e001) field_vitu2_entry_pane_t1

0x1230,	// (0x0003e02e) field_vitu2_entry_pane_t2_ParamLimits

0x1230,	// (0x0003e02e) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004c720) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004c720) field_vitu2_entry_pane_t

0x77d0,	// (0x000445ce) bg_button_pane_cp010_ParamLimits

0x77d0,	// (0x000445ce) bg_button_pane_cp010

0x77de,	// (0x000445dc) cell_vitu2_itu_pane_g1

0x7807,	// (0x00044605) cell_vitu2_itu_pane_t1_ParamLimits

0x7807,	// (0x00044605) cell_vitu2_itu_pane_t1

0x124d,	// (0x0003e04b) cell_vitu2_itu_pane_t2_ParamLimits

0x124d,	// (0x0003e04b) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004c72a) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004c72a) cell_vitu2_itu_pane_t

0xb05e,	// (0x00047e5c) bg_button_pane_cp011

0x7853,	// (0x00044651) cell_vitu2_function_pane_g1

0xa0d8,	// (0x00046ed6) main_myfav_hc_pane

0x72c4,	// (0x000440c2) popup_image3_note_pane_ParamLimits

0x72c4,	// (0x000440c2) popup_image3_note_pane

0x72d2,	// (0x000440d0) popup_image3_tool_bar_pane_ParamLimits

0x72d2,	// (0x000440d0) popup_image3_tool_bar_pane

0x12bb,	// (0x0003e0b9) cell_vitu2_itu_pane_t3_ParamLimits

0x12bb,	// (0x0003e0b9) cell_vitu2_itu_pane_t3

0xa0d8,	// (0x00046ed6) bg_popup_trans_pane

0xd6ef,	// (0x0004a4ed) grid_image3_tool_bar_pane

0xd6f9,	// (0x0004a4f7) bg_popup_trans_pane_g1

0xac3a,	// (0x00047a38) bg_popup_trans_pane_g2

0xd701,	// (0x0004a4ff) bg_popup_trans_pane_g3

0xd709,	// (0x0004a507) bg_popup_trans_pane_g4

0xd711,	// (0x0004a50f) bg_popup_trans_pane_g5

0xd719,	// (0x0004a517) bg_popup_trans_pane_g6

0xd721,	// (0x0004a51f) bg_popup_trans_pane_g7

0xd729,	// (0x0004a527) bg_popup_trans_pane_g8

0xac1a,	// (0x00047a18) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004c731) bg_popup_trans_pane_g

0xd731,	// (0x0004a52f) cell_image3_tool_bar_pane_ParamLimits

0xd731,	// (0x0004a52f) cell_image3_tool_bar_pane

0xcc6c,	// (0x00049a6a) cell_image3_tool_bar_pane_g1

0xa0d8,	// (0x00046ed6) bg_popup_trans_pane_cp1

0xd745,	// (0x0004a543) popup_image3_note_pane_t1

0xd753,	// (0x0004a551) popup_image3_note_pane_t2

0xd761,	// (0x0004a55f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004c744) popup_image3_note_pane_t

0xd76f,	// (0x0004a56d) popup_image3_note_pane_t3_copy1

0x7867,	// (0x00044665) bg_myfav_hc_instruction_pane_ParamLimits

0x7867,	// (0x00044665) bg_myfav_hc_instruction_pane

0x787f,	// (0x0004467d) cell_myfav_contact_pane_ParamLimits

0x787f,	// (0x0004467d) cell_myfav_contact_pane

0x7899,	// (0x00044697) cell_myfav_contact_pane_cp1_ParamLimits

0x7899,	// (0x00044697) cell_myfav_contact_pane_cp1

0x78b1,	// (0x000446af) cell_myfav_contact_pane_cp2_ParamLimits

0x78b1,	// (0x000446af) cell_myfav_contact_pane_cp2

0x78c9,	// (0x000446c7) cell_myfav_contact_pane_cp3_ParamLimits

0x78c9,	// (0x000446c7) cell_myfav_contact_pane_cp3

0x78e0,	// (0x000446de) cell_myfav_contact_pane_cp4_ParamLimits

0x78e0,	// (0x000446de) cell_myfav_contact_pane_cp4

0x78f6,	// (0x000446f4) cell_myfav_contact_pane_cp5_ParamLimits

0x78f6,	// (0x000446f4) cell_myfav_contact_pane_cp5

0x790a,	// (0x00044708) cell_myfav_contact_pane_cp6_ParamLimits

0x790a,	// (0x00044708) cell_myfav_contact_pane_cp6

0x791e,	// (0x0004471c) cell_myfav_contact_pane_cp7_ParamLimits

0x791e,	// (0x0004471c) cell_myfav_contact_pane_cp7

0xd77d,	// (0x0004a57b) listscroll_gen_pane_cp05

0x7936,	// (0x00044734) main_myfav_hc_pane_g1_ParamLimits

0x7936,	// (0x00044734) main_myfav_hc_pane_g1

0x794c,	// (0x0004474a) main_myfav_hc_pane_g2_ParamLimits

0x794c,	// (0x0004474a) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004c74b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004c74b) main_myfav_hc_pane_g

0x797a,	// (0x00044778) main_myfav_hc_pane_t1_ParamLimits

0x797a,	// (0x00044778) main_myfav_hc_pane_t1

0xd786,	// (0x0004a584) main_myfav_hc_pane_t2_ParamLimits

0xd786,	// (0x0004a584) main_myfav_hc_pane_t2

0xd798,	// (0x0004a596) main_myfav_hc_pane_t3_ParamLimits

0xd798,	// (0x0004a596) main_myfav_hc_pane_t3

0x7991,	// (0x0004478f) main_myfav_hc_pane_t4_ParamLimits

0x7991,	// (0x0004478f) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004c752) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004c752) main_myfav_hc_pane_t

0xcc6c,	// (0x00049a6a) bg_myfav_hc_instruction_pane_g1

0xd7aa,	// (0x0004a5a8) cell_myfav_contact_pane_g1_ParamLimits

0xd7aa,	// (0x0004a5a8) cell_myfav_contact_pane_g1

0xd7aa,	// (0x0004a5a8) cell_myfav_contact_pane_g2_ParamLimits

0xd7aa,	// (0x0004a5a8) cell_myfav_contact_pane_g2

0xd7b6,	// (0x0004a5b4) cell_myfav_contact_pane_g3_ParamLimits

0xd7b6,	// (0x0004a5b4) cell_myfav_contact_pane_g3

0xcf54,	// (0x00049d52) cell_myfav_contact_pane_g4_ParamLimits

0xcf54,	// (0x00049d52) cell_myfav_contact_pane_g4

0xd7c3,	// (0x0004a5c1) cell_myfav_contact_pane_g5_ParamLimits

0xd7c3,	// (0x0004a5c1) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004c75d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004c75d) cell_myfav_contact_pane_g

0x7962,	// (0x00044760) main_myfav_hc_pane_g3_ParamLimits

0x7962,	// (0x00044760) main_myfav_hc_pane_g3

0x2418,	// (0x0003f216) popup_adpt_find_window

0x79bb,	// (0x000447b9) afind_page_pane_ParamLimits

0x79bb,	// (0x000447b9) afind_page_pane

0x79c8,	// (0x000447c6) aid_size_cell_afind_ParamLimits

0x79c8,	// (0x000447c6) aid_size_cell_afind

0x79e2,	// (0x000447e0) bg_popup_sub_pane_cp09_ParamLimits

0x79e2,	// (0x000447e0) bg_popup_sub_pane_cp09

0x79ef,	// (0x000447ed) find_pane_cp01_ParamLimits

0x79ef,	// (0x000447ed) find_pane_cp01

0xd7cf,	// (0x0004a5cd) grid_afind_control_pane_ParamLimits

0xd7cf,	// (0x0004a5cd) grid_afind_control_pane

0x79fc,	// (0x000447fa) grid_afind_pane_ParamLimits

0x79fc,	// (0x000447fa) grid_afind_pane

0x7a18,	// (0x00044816) cell_afind_pane_ParamLimits

0x7a18,	// (0x00044816) cell_afind_pane

0xcc6c,	// (0x00049a6a) afind_page_pane_g1

0x7a60,	// (0x0004485e) afind_page_pane_g2

0x7a69,	// (0x00044867) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004c768) afind_page_pane_g

0x7a72,	// (0x00044870) afind_page_pane_t1

0xd7e3,	// (0x0004a5e1) cell_afind_grid_control_pane_ParamLimits

0xd7e3,	// (0x0004a5e1) cell_afind_grid_control_pane

0xd5bb,	// (0x0004a3b9) bg_button_pane_cp69_ParamLimits

0xd5bb,	// (0x0004a3b9) bg_button_pane_cp69

0x7a92,	// (0x00044890) cell_afind_pane_g1_ParamLimits

0x7a92,	// (0x00044890) cell_afind_pane_g1

0x7a9f,	// (0x0004489d) cell_afind_pane_t1_ParamLimits

0x7a9f,	// (0x0004489d) cell_afind_pane_t1

0xaa33,	// (0x00047831) bg_button_pane_cp72

0xd7f2,	// (0x0004a5f0) cell_afind_grid_control_pane_g1

0x50f3,	// (0x00041ef1) aid_image_placing_area_ParamLimits

0x50f3,	// (0x00041ef1) aid_image_placing_area

0xd27d,	// (0x0004a07b) field_vitu_entry_pane_g1_ParamLimits

0xd27d,	// (0x0004a07b) field_vitu_entry_pane_g1

0xd289,	// (0x0004a087) field_vitu_entry_pane_g2_ParamLimits

0xd289,	// (0x0004a087) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004c619) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004c619) field_vitu_entry_pane_g

0x6c21,	// (0x00043a1f) cell_vitu_itu_pane_g1_ParamLimits

0x6c63,	// (0x00043a61) cell_vitu_itu_pane_t3_ParamLimits

0x6c63,	// (0x00043a61) cell_vitu_itu_pane_t3

0xd56b,	// (0x0004a369) mp4_progress_pane_t1_ParamLimits

0xd584,	// (0x0004a382) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004c6ae) mp4_progress_pane_t_ParamLimits

0xd59d,	// (0x0004a39b) mup_progress_pane_cp04_ParamLimits

0x79a5,	// (0x000447a3) main_myfav_hc_pane_t5_ParamLimits

0x79a5,	// (0x000447a3) main_myfav_hc_pane_t5

0x22a6,	// (0x0003f0a4) aid_zoom_text_primary

0x2418,	// (0x0003f216) popup_adpt_find_window_ParamLimits

0xb05e,	// (0x00047e5c) main_cam_set_pane

0x742e,	// (0x0004422c) cam4_zoom_pane_ParamLimits

0x742e,	// (0x0004422c) cam4_zoom_pane

0x7ab1,	// (0x000448af) main_cam_set_pane_g1_ParamLimits

0x7ab1,	// (0x000448af) main_cam_set_pane_g1

0x7abf,	// (0x000448bd) main_cam_set_pane_g2_ParamLimits

0x7abf,	// (0x000448bd) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004c76f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004c76f) main_cam_set_pane_g

0x7acb,	// (0x000448c9) main_cam_set_pane_t1_ParamLimits

0x7acb,	// (0x000448c9) main_cam_set_pane_t1

0x7ae7,	// (0x000448e5) main_cset_listscroll_pane_ParamLimits

0x7ae7,	// (0x000448e5) main_cset_listscroll_pane

0x7b12,	// (0x00044910) main_cset_slider_pane_ParamLimits

0x7b12,	// (0x00044910) main_cset_slider_pane

0xd803,	// (0x0004a601) main_cset_list_pane_ParamLimits

0xd803,	// (0x0004a601) main_cset_list_pane

0xd813,	// (0x0004a611) scroll_pane_cp028

0x7b31,	// (0x0004492f) aid_area_touch_slider

0x7b4d,	// (0x0004494b) cset_slider_pane

0x7b77,	// (0x00044975) main_cset_slider_pane_g1

0x7b8c,	// (0x0004498a) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004c774) main_cset_slider_pane_g

0xd84c,	// (0x0004a64a) main_cset_slider_pane_t1

0x7c4e,	// (0x00044a4c) main_cset_slider_pane_t2

0x7c68,	// (0x00044a66) main_cset_slider_pane_t3

0x7c82,	// (0x00044a80) main_cset_slider_pane_t4

0x7c9c,	// (0x00044a9a) main_cset_slider_pane_t5

0x7cba,	// (0x00044ab8) main_cset_slider_pane_t6

0x7cd1,	// (0x00044acf) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004c799) main_cset_slider_pane_t

0x7ddd,	// (0x00044bdb) cset_list_set_pane_ParamLimits

0x7ddd,	// (0x00044bdb) cset_list_set_pane

0x7df3,	// (0x00044bf1) aid_position_infowindow_above

0x7dfb,	// (0x00044bf9) aid_position_infowindow_below

0x1308,	// (0x0003e106) cset_list_set_pane_g1_ParamLimits

0x1308,	// (0x0003e106) cset_list_set_pane_g1

0x1314,	// (0x0003e112) cset_list_set_pane_g3_ParamLimits

0x1314,	// (0x0003e112) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004c7b8) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004c7b8) cset_list_set_pane_g

0x1323,	// (0x0003e121) cset_list_set_pane_t1_ParamLimits

0x1323,	// (0x0003e121) cset_list_set_pane_t1

0xb05e,	// (0x00047e5c) list_highlight_pane_cp021_ParamLimits

0xb05e,	// (0x00047e5c) list_highlight_pane_cp021

0xb599,	// (0x00048397) cset_slider_pane_g1

0xb5ab,	// (0x000483a9) cset_slider_pane_g2

0xb5a2,	// (0x000483a0) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004c7bd) cset_slider_pane_g

0x7e03,	// (0x00044c01) aid_area_touch_cam4_zoom

0x7e0b,	// (0x00044c09) cam4_zoom_cont_pane

0x7e13,	// (0x00044c11) cam4_zoom_pane_g1

0x7e1b,	// (0x00044c19) cam4_zoom_pane_g2

0x7e23,	// (0x00044c21) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004c7c4) cam4_zoom_pane_g

0xdb42,	// (0x0004a940) cam4_zoom_cont_pane_g1

0xdb4b,	// (0x0004a949) cam4_zoom_cont_pane_g2

0xdb54,	// (0x0004a952) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004c7cb) cam4_zoom_cont_pane_g

0x731b,	// (0x00044119) call4_image_pane_ParamLimits

0x731b,	// (0x00044119) call4_image_pane

0xd5c7,	// (0x0004a3c5) call4_windows_conf_pane_ParamLimits

0xd608,	// (0x0004a406) popup_call4_audio_in_window_ParamLimits

0xd608,	// (0x0004a406) popup_call4_audio_in_window

0xa0d8,	// (0x00046ed6) bg_popup_call2_act_pane_cp02

0xd67e,	// (0x0004a47c) call4_list_conf_pane

0xcc6c,	// (0x00049a6a) call4_image_pane_g1

0xcc6c,	// (0x00049a6a) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0004c4da) call4_image_pane_g

0xd8ec,	// (0x0004a6ea) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8ec,	// (0x0004a6ea) list_single_graphic_popup_conf4_pane

0xa0d8,	// (0x00046ed6) list_highlight_pane_cp022

0xd8ff,	// (0x0004a6fd) list_single_graphic_popup_conf4_pane_g1

0xb170,	// (0x00047f6e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004c7d2) list_single_graphic_popup_conf4_pane_g

0xd907,	// (0x0004a705) list_single_graphic_popup_conf4_pane_t1

0x34cb,	// (0x000402c9) popup_vtel_slider_window_ParamLimits

0x34cb,	// (0x000402c9) popup_vtel_slider_window

0xd5a9,	// (0x0004a3a7) dialer2_ne_pane_t2_ParamLimits

0xd5a9,	// (0x0004a3a7) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004c6b3) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004c6b3) dialer2_ne_pane_t

0xb05e,	// (0x00047e5c) bg_popup_sub_pane_cp010_ParamLimits

0xb05e,	// (0x00047e5c) bg_popup_sub_pane_cp010

0x7e2b,	// (0x00044c29) popup_vtel_slider_window_g1_ParamLimits

0x7e2b,	// (0x00044c29) popup_vtel_slider_window_g1

0x7e37,	// (0x00044c35) popup_vtel_slider_window_g2_ParamLimits

0x7e37,	// (0x00044c35) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004c7d7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004c7d7) popup_vtel_slider_window_g

0x7e7f,	// (0x00044c7d) vtel_slider_pane_ParamLimits

0x7e7f,	// (0x00044c7d) vtel_slider_pane

0x7e8e,	// (0x00044c8c) vtel_slider_pane_g1_ParamLimits

0x7e8e,	// (0x00044c8c) vtel_slider_pane_g1

0x7e9b,	// (0x00044c99) vtel_slider_pane_g2_ParamLimits

0x7e9b,	// (0x00044c99) vtel_slider_pane_g2

0x7ea8,	// (0x00044ca6) vtel_slider_pane_g3_ParamLimits

0x7ea8,	// (0x00044ca6) vtel_slider_pane_g3

0x7e8e,	// (0x00044c8c) vtel_slider_pane_g4_ParamLimits

0x7e8e,	// (0x00044c8c) vtel_slider_pane_g4

0x7eb5,	// (0x00044cb3) vtel_slider_pane_g5_ParamLimits

0x7eb5,	// (0x00044cb3) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004c7e0) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004c7e0) vtel_slider_pane_g

0xb05e,	// (0x00047e5c) main_gallery2_pane

0x7682,	// (0x00044480) aid_size_row_itut2_dropdow_list_ParamLimits

0x7682,	// (0x00044480) aid_size_row_itut2_dropdow_list

0x76e2,	// (0x000444e0) grid_vitu2_function_top_pane_ParamLimits

0x76e2,	// (0x000444e0) grid_vitu2_function_top_pane

0x7738,	// (0x00044536) popup_vitu2_dropdown_list_window_ParamLimits

0x7738,	// (0x00044536) popup_vitu2_dropdown_list_window

0x7758,	// (0x00044556) popup_vitu2_match_list_window

0x7ec2,	// (0x00044cc0) cell_vitu2_function_top_pane_ParamLimits

0x7ec2,	// (0x00044cc0) cell_vitu2_function_top_pane

0x7ee2,	// (0x00044ce0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7ee2,	// (0x00044ce0) cell_vitu2_function_top_pane_cp01

0x7f00,	// (0x00044cfe) cell_vitu2_function_top_wide_pane_ParamLimits

0x7f00,	// (0x00044cfe) cell_vitu2_function_top_wide_pane

0xb05e,	// (0x00047e5c) bg_button_pane_cp012

0x7f1e,	// (0x00044d1c) cell_vitu2_function_top_pane_g1

0x7f32,	// (0x00044d30) bg_button_pane_cp013_ParamLimits

0x7f32,	// (0x00044d30) bg_button_pane_cp013

0x7f4e,	// (0x00044d4c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7f4e,	// (0x00044d4c) cell_vitu2_function_top_wide_pane_g1

0xdb26,	// (0x0004a924) bg_popup_sub_pane_cp20

0x7f66,	// (0x00044d64) list_vitu2_match_list_pane

0xd6f9,	// (0x0004a4f7) bg_popup_sub_pane_cp20_g1

0xd701,	// (0x0004a4ff) bg_popup_sub_pane_cp20_g2

0xac3a,	// (0x00047a38) bg_popup_sub_pane_cp20_g3

0xd709,	// (0x0004a507) bg_popup_sub_pane_cp20_g4

0xac1a,	// (0x00047a18) bg_popup_sub_pane_cp20_g5

0xd91d,	// (0x0004a71b) bg_popup_sub_pane_cp20_g6

0xd719,	// (0x0004a517) bg_popup_sub_pane_cp20_g7

0xd721,	// (0x0004a51f) bg_popup_sub_pane_cp20_g8

0xd729,	// (0x0004a527) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004c7eb) bg_popup_sub_pane_cp20_g

0x7f7e,	// (0x00044d7c) list_vitu2_match_list_item_pane_ParamLimits

0x7f7e,	// (0x00044d7c) list_vitu2_match_list_item_pane

0x7f90,	// (0x00044d8e) list_vitu2_match_list_item_pane_t1

0xa0d8,	// (0x00046ed6) bg_popup_sub_pane_cp21

0xb098,	// (0x00047e96) grid_vitu2_dropdown_list_pane

0x7f9e,	// (0x00044d9c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f9e,	// (0x00044d9c) cell_vitu2_dropdown_list_char_pane

0x7fbf,	// (0x00044dbd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7fbf,	// (0x00044dbd) cell_vitu2_dropdown_list_ctrl_pane

0xd925,	// (0x0004a723) cell_vitu2_dropdown_list_char_pane_g1

0xd92e,	// (0x0004a72c) cell_vitu2_dropdown_list_char_pane_g2

0xd937,	// (0x0004a735) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004c808) cell_vitu2_dropdown_list_char_pane_g

0x7feb,	// (0x00044de9) cell_vitu2_dropdown_list_char_pane_t1

0x7ff9,	// (0x00044df7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7ff9,	// (0x00044df7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8009,	// (0x00044e07) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8009,	// (0x00044e07) cell_vitu2_dropdown_list_ctrl_pane_g2

0x801a,	// (0x00044e18) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x801a,	// (0x00044e18) cell_vitu2_dropdown_list_ctrl_pane_g3

0x802a,	// (0x00044e28) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x802a,	// (0x00044e28) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcecf,	// (0x00049ccd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcecf,	// (0x00049ccd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004c80f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004c80f) cell_vitu2_dropdown_list_ctrl_pane_g

0x8046,	// (0x00044e44) aid_size_cell_gallery2_ParamLimits

0x8046,	// (0x00044e44) aid_size_cell_gallery2

0x8060,	// (0x00044e5e) grid_gallery2_pane_ParamLimits

0x8060,	// (0x00044e5e) grid_gallery2_pane

0x6aaa,	// (0x000438a8) scroll_pane_cp029_ParamLimits

0x6aaa,	// (0x000438a8) scroll_pane_cp029

0x8077,	// (0x00044e75) cell_gallery2_pane_ParamLimits

0x8077,	// (0x00044e75) cell_gallery2_pane

0xd940,	// (0x0004a73e) cell_gallery2_pane_g2

0xea22,	// (0x0004b820) cell_gallery2_pane_g3

0xd948,	// (0x0004a746) cell_gallery2_pane_g4

0xd950,	// (0x0004a74e) cell_gallery2_pane_g5

0xb463,	// (0x00048261) grid_highlight_pane_cp10

0x7758,	// (0x00044556) popup_vitu2_match_list_window_ParamLimits

0x776c,	// (0x0004456a) popup_vitu2_query_window_ParamLimits

0x776c,	// (0x0004456a) popup_vitu2_query_window

0xa0d8,	// (0x00046ed6) bg_vitu2_candi_button_pane

0xd925,	// (0x0004a723) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd92e,	// (0x0004a72c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd937,	// (0x0004a735) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x138a,	// (0x0003e188) bg_button_pane_cp015

0x80cb,	// (0x00044ec9) bg_button_pane_cp016

0x80de,	// (0x00044edc) bg_button_pane_cp017

0xc85b,	// (0x00049659) bg_popup_sub_pane_cp22

0xd958,	// (0x0004a756) popup_vitu2_query_window_g1

0x13bd,	// (0x0003e1bb) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004c81a) popup_vitu2_query_window_g

0x13da,	// (0x0003e1d8) popup_vitu2_query_window_t1_ParamLimits

0x13da,	// (0x0003e1d8) popup_vitu2_query_window_t1

0x140d,	// (0x0003e20b) popup_vitu2_query_window_t2_ParamLimits

0x140d,	// (0x0003e20b) popup_vitu2_query_window_t2

0x141f,	// (0x0003e21d) popup_vitu2_query_window_t3_ParamLimits

0x141f,	// (0x0003e21d) popup_vitu2_query_window_t3

0x8102,	// (0x00044f00) popup_vitu2_query_window_t4_ParamLimits

0x8102,	// (0x00044f00) popup_vitu2_query_window_t4

0x8123,	// (0x00044f21) popup_vitu2_query_window_t5_ParamLimits

0x8123,	// (0x00044f21) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004c821) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004c821) popup_vitu2_query_window_t

0xd7fb,	// (0x0004a5f9) main_cset_text_pane

0x7b31,	// (0x0004492f) aid_area_touch_slider_ParamLimits

0x7b4d,	// (0x0004494b) cset_slider_pane_ParamLimits

0x7b77,	// (0x00044975) main_cset_slider_pane_g1_ParamLimits

0x7b8c,	// (0x0004498a) main_cset_slider_pane_g2_ParamLimits

0xd81c,	// (0x0004a61a) main_cset_slider_pane_g3_ParamLimits

0xd81c,	// (0x0004a61a) main_cset_slider_pane_g3

0x7ba1,	// (0x0004499f) main_cset_slider_pane_g4_ParamLimits

0x7ba1,	// (0x0004499f) main_cset_slider_pane_g4

0x7bb0,	// (0x000449ae) main_cset_slider_pane_g5_ParamLimits

0x7bb0,	// (0x000449ae) main_cset_slider_pane_g5

0x7bbe,	// (0x000449bc) main_cset_slider_pane_g6_ParamLimits

0x7bbe,	// (0x000449bc) main_cset_slider_pane_g6

0xf976,	// (0x0004c774) main_cset_slider_pane_g_ParamLimits

0xd84c,	// (0x0004a64a) main_cset_slider_pane_t1_ParamLimits

0x7c4e,	// (0x00044a4c) main_cset_slider_pane_t2_ParamLimits

0x7c68,	// (0x00044a66) main_cset_slider_pane_t3_ParamLimits

0x7c82,	// (0x00044a80) main_cset_slider_pane_t4_ParamLimits

0x7c9c,	// (0x00044a9a) main_cset_slider_pane_t5_ParamLimits

0x7cba,	// (0x00044ab8) main_cset_slider_pane_t6_ParamLimits

0x7cd1,	// (0x00044acf) main_cset_slider_pane_t7_ParamLimits

0x7cff,	// (0x00044afd) main_cset_slider_pane_t8_ParamLimits

0x7cff,	// (0x00044afd) main_cset_slider_pane_t8

0x7d27,	// (0x00044b25) main_cset_slider_pane_t9_ParamLimits

0x7d27,	// (0x00044b25) main_cset_slider_pane_t9

0x7d4f,	// (0x00044b4d) main_cset_slider_pane_t10_ParamLimits

0x7d4f,	// (0x00044b4d) main_cset_slider_pane_t10

0x7d77,	// (0x00044b75) main_cset_slider_pane_t11_ParamLimits

0x7d77,	// (0x00044b75) main_cset_slider_pane_t11

0x7da1,	// (0x00044b9f) main_cset_slider_pane_t12_ParamLimits

0x7da1,	// (0x00044b9f) main_cset_slider_pane_t12

0x7dbe,	// (0x00044bbc) main_cset_slider_pane_t13_ParamLimits

0x7dbe,	// (0x00044bbc) main_cset_slider_pane_t13

0xf99b,	// (0x0004c799) main_cset_slider_pane_t_ParamLimits

0xa0d8,	// (0x00046ed6) bg_popup_sub_pane_cp011

0xd964,	// (0x0004a762) main_cset_text_pane_g1

0xd96c,	// (0x0004a76a) main_cset_text_pane_t1

0xd97a,	// (0x0004a778) main_cset_text_pane_t2

0xd988,	// (0x0004a786) main_cset_text_pane_t3

0xd996,	// (0x0004a794) main_cset_text_pane_t4

0xd9a4,	// (0x0004a7a2) main_cset_text_pane_t5

0xd9b2,	// (0x0004a7b0) main_cset_text_pane_t6

0xd9c0,	// (0x0004a7be) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004c830) main_cset_text_pane_t

0xa0d8,	// (0x00046ed6) main_cam4_burst_pane

0xa0d8,	// (0x00046ed6) main_cam5_pane

0x7a80,	// (0x0004487e) bg_button_pane_cp019

0x7a89,	// (0x00044887) bg_button_pane_cp020

0xd828,	// (0x0004a626) main_cset_slider_pane_g7_ParamLimits

0xd828,	// (0x0004a626) main_cset_slider_pane_g7

0xd834,	// (0x0004a632) main_cset_slider_pane_g8_ParamLimits

0xd834,	// (0x0004a632) main_cset_slider_pane_g8

0x7bd2,	// (0x000449d0) main_cset_slider_pane_g9_ParamLimits

0x7bd2,	// (0x000449d0) main_cset_slider_pane_g9

0x7bde,	// (0x000449dc) main_cset_slider_pane_g10_ParamLimits

0x7bde,	// (0x000449dc) main_cset_slider_pane_g10

0x7bea,	// (0x000449e8) main_cset_slider_pane_g11_ParamLimits

0x7bea,	// (0x000449e8) main_cset_slider_pane_g11

0x7bf6,	// (0x000449f4) main_cset_slider_pane_g12_ParamLimits

0x7bf6,	// (0x000449f4) main_cset_slider_pane_g12

0x7c02,	// (0x00044a00) main_cset_slider_pane_g13_ParamLimits

0x7c02,	// (0x00044a00) main_cset_slider_pane_g13

0x7c0e,	// (0x00044a0c) main_cset_slider_pane_g14_ParamLimits

0x7c0e,	// (0x00044a0c) main_cset_slider_pane_g14

0x7c1a,	// (0x00044a18) main_cset_slider_pane_g15_ParamLimits

0x7c1a,	// (0x00044a18) main_cset_slider_pane_g15

0xd87a,	// (0x0004a678) main_cset_slider_pane_t14_ParamLimits

0xd87a,	// (0x0004a678) main_cset_slider_pane_t14

0xd8b3,	// (0x0004a6b1) main_cset_slider_pane_t15_ParamLimits

0xd8b3,	// (0x0004a6b1) main_cset_slider_pane_t15

0x8144,	// (0x00044f42) aid_cam4_burst_size_cell_ParamLimits

0x8144,	// (0x00044f42) aid_cam4_burst_size_cell

0x8160,	// (0x00044f5e) grid_cam4_burst_pane_ParamLimits

0x8160,	// (0x00044f5e) grid_cam4_burst_pane

0x8190,	// (0x00044f8e) linegrid_cam4_burst_pane_ParamLimits

0x8190,	// (0x00044f8e) linegrid_cam4_burst_pane

0x81b0,	// (0x00044fae) scroll_pane_cp30_ParamLimits

0x81b0,	// (0x00044fae) scroll_pane_cp30

0x81bc,	// (0x00044fba) cell_cam4_burst_pane_ParamLimits

0x81bc,	// (0x00044fba) cell_cam4_burst_pane

0xd9ce,	// (0x0004a7cc) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9ce,	// (0x0004a7cc) linegrid_cam4_burst_pane_g1

0x81f8,	// (0x00044ff6) linegrid_cam4_burst_pane_g2_ParamLimits

0x81f8,	// (0x00044ff6) linegrid_cam4_burst_pane_g2

0xd9db,	// (0x0004a7d9) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9db,	// (0x0004a7d9) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004c83f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004c83f) linegrid_cam4_burst_pane_g

0x8209,	// (0x00045007) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8209,	// (0x00045007) linegrid_cam4_burst_pane_g3_copy1

0xd9e8,	// (0x0004a7e6) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e8,	// (0x0004a7e6) linegrid_cam4_burst_pane_g4

0x8223,	// (0x00045021) linegrid_cam4_burst_pane_g5_ParamLimits

0x8223,	// (0x00045021) linegrid_cam4_burst_pane_g5

0x8234,	// (0x00045032) linegrid_cam4_burst_pane_g6_ParamLimits

0x8234,	// (0x00045032) linegrid_cam4_burst_pane_g6

0xd9f5,	// (0x0004a7f3) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f5,	// (0x0004a7f3) linegrid_cam4_burst_pane_g7

0x8245,	// (0x00045043) cell_cam4_burst_pane_g1

0xda0e,	// (0x0004a80c) main_cam5_pane_t1_ParamLimits

0xda0e,	// (0x0004a80c) main_cam5_pane_t1

0xda20,	// (0x0004a81e) main_cam5_pane_t2_ParamLimits

0xda20,	// (0x0004a81e) main_cam5_pane_t2

0xda32,	// (0x0004a830) main_cam5_pane_t3_ParamLimits

0xda32,	// (0x0004a830) main_cam5_pane_t3

0xda44,	// (0x0004a842) main_cam5_pane_t4_ParamLimits

0xda44,	// (0x0004a842) main_cam5_pane_t4

0xda5c,	// (0x0004a85a) main_cam5_pane_t5_ParamLimits

0xda5c,	// (0x0004a85a) main_cam5_pane_t5

0xda70,	// (0x0004a86e) main_cam5_pane_t6_ParamLimits

0xda70,	// (0x0004a86e) main_cam5_pane_t6

0xda84,	// (0x0004a882) main_cam5_pane_t7_ParamLimits

0xda84,	// (0x0004a882) main_cam5_pane_t7

0xda96,	// (0x0004a894) main_cam5_pane_t8_ParamLimits

0xda96,	// (0x0004a894) main_cam5_pane_t8

0xdab2,	// (0x0004a8b0) main_cam5_pane_t9_ParamLimits

0xdab2,	// (0x0004a8b0) main_cam5_pane_t9

0xdac4,	// (0x0004a8c2) main_cam5_pane_t10_ParamLimits

0xdac4,	// (0x0004a8c2) main_cam5_pane_t10

0xdad6,	// (0x0004a8d4) main_cam5_pane_t11_ParamLimits

0xdad6,	// (0x0004a8d4) main_cam5_pane_t11

0xdae8,	// (0x0004a8e6) main_cam5_pane_t12_ParamLimits

0xdae8,	// (0x0004a8e6) main_cam5_pane_t12

0xdafd,	// (0x0004a8fb) main_cam5_pane_t13_ParamLimits

0xdafd,	// (0x0004a8fb) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004c84b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004c84b) main_cam5_pane_t

0x24ce,	// (0x0003f2cc) popup_scut_keymap_window_ParamLimits

0x24ce,	// (0x0003f2cc) popup_scut_keymap_window

0x8258,	// (0x00045056) aid_size_cell_brow_shortcut

0xb463,	// (0x00048261) bg_popup_window_pane_cp010

0x8264,	// (0x00045062) grid_scut_pane

0x8270,	// (0x0004506e) cell_scut_pane_ParamLimits

0x8270,	// (0x0004506e) cell_scut_pane

0x8287,	// (0x00045085) cell_scut_pane_g1

0xdb5d,	// (0x0004a95b) cell_scut_pane_t1

0xdb6c,	// (0x0004a96a) cell_scut_pane_t2

0x8290,	// (0x0004508e) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004c866) cell_scut_pane_t

0x628b,	// (0x00043089) main_mup3_pane_g8_ParamLimits

0x628b,	// (0x00043089) main_mup3_pane_g8

0x7690,	// (0x0004448e) area_vitu2_query_pane_ParamLimits

0x7690,	// (0x0004448e) area_vitu2_query_pane

0x139c,	// (0x0003e19a) input_focus_pane_cp08

0xdb7b,	// (0x0004a979) area_vitu2_query_pane_g1

0x149d,	// (0x0003e29b) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004c86d) area_vitu2_query_pane_g

0x829e,	// (0x0004509c) area_vitu2_query_pane_t1_ParamLimits

0x829e,	// (0x0004509c) area_vitu2_query_pane_t1

0x82b2,	// (0x000450b0) area_vitu2_query_pane_t2_ParamLimits

0x82b2,	// (0x000450b0) area_vitu2_query_pane_t2

0x14ae,	// (0x0003e2ac) area_vitu2_query_pane_t3_ParamLimits

0x14ae,	// (0x0003e2ac) area_vitu2_query_pane_t3

0x14d6,	// (0x0003e2d4) area_vitu2_query_pane_t4_ParamLimits

0x14d6,	// (0x0003e2d4) area_vitu2_query_pane_t4

0x14fe,	// (0x0003e2fc) area_vitu2_query_pane_t5_ParamLimits

0x14fe,	// (0x0003e2fc) area_vitu2_query_pane_t5

0x1526,	// (0x0003e324) area_vitu2_query_pane_t6_ParamLimits

0x1526,	// (0x0003e324) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004c872) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004c872) area_vitu2_query_pane_t

0x82c6,	// (0x000450c4) bg_button_pane_cp018

0x82d4,	// (0x000450d2) bg_button_pane_cp021

0x1572,	// (0x0003e370) bg_button_pane_cp022

0x1583,	// (0x0003e381) input_focus_pane_cp09

0xb2ac,	// (0x000480aa) aid_size_touch_mv_arrow_left

0xb2d5,	// (0x000480d3) aid_size_touch_mv_arrow_right

0x7c32,	// (0x00044a30) main_cset_slider_pane_g16_ParamLimits

0x7c32,	// (0x00044a30) main_cset_slider_pane_g16

0x7c40,	// (0x00044a3e) main_cset_slider_pane_g17_ParamLimits

0x7c40,	// (0x00044a3e) main_cset_slider_pane_g17

0x8245,	// (0x00045043) cell_cam4_burst_pane_g1_ParamLimits

0xa0d8,	// (0x00046ed6) compa_mode_pane

0x7e43,	// (0x00044c41) popup_vtel_slider_window_g3_ParamLimits

0x7e43,	// (0x00044c41) popup_vtel_slider_window_g3

0x7e57,	// (0x00044c55) popup_vtel_slider_window_g4_ParamLimits

0x7e57,	// (0x00044c55) popup_vtel_slider_window_g4

0x7e6b,	// (0x00044c69) popup_vtel_slider_window_t1_ParamLimits

0x7e6b,	// (0x00044c69) popup_vtel_slider_window_t1

0xa0d8,	// (0x00046ed6) main_cl_pane

0x5605,	// (0x00042403) popup_imed_adjust2_window_ParamLimits

0xc85b,	// (0x00049659) bg_tb_trans_pane_cp05_ParamLimits

0xd1b2,	// (0x00049fb0) popup_imed_adjust2_window_g1_ParamLimits

0xd1c1,	// (0x00049fbf) popup_imed_adjust2_window_g2_ParamLimits

0xd1c1,	// (0x00049fbf) popup_imed_adjust2_window_g2

0xd1cd,	// (0x00049fcb) popup_imed_adjust2_window_g3_ParamLimits

0xd1cd,	// (0x00049fcb) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004c5dd) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004c5dd) popup_imed_adjust2_window_g

0xd1d9,	// (0x00049fd7) popup_imed_adjust2_window_t1_ParamLimits

0xd1f1,	// (0x00049fef) slider_imed_adjust_pane_ParamLimits

0xd205,	// (0x0004a003) slider_imed_adjust_pane_g1_ParamLimits

0xd215,	// (0x0004a013) slider_imed_adjust_pane_g2_ParamLimits

0xd225,	// (0x0004a023) slider_imed_adjust_pane_g3_ParamLimits

0xd236,	// (0x0004a034) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004c5e4) slider_imed_adjust_pane_g_ParamLimits

0x73d7,	// (0x000441d5) aid_touch_area_cam4_ParamLimits

0x73d7,	// (0x000441d5) aid_touch_area_cam4

0x73e7,	// (0x000441e5) battery_pane_cp01

0x746e,	// (0x0004426c) main_camera4_pane_g6_ParamLimits

0x746e,	// (0x0004426c) main_camera4_pane_g6

0x748c,	// (0x0004428a) main_camera4_pane_t2_ParamLimits

0x748c,	// (0x0004428a) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004c6e7) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004c6e7) main_camera4_pane_t

0x7513,	// (0x00044311) aid_touch_area_vid4_ParamLimits

0x7513,	// (0x00044311) aid_touch_area_vid4

0x7553,	// (0x00044351) main_video4_pane_g5_ParamLimits

0x7553,	// (0x00044351) main_video4_pane_g5

0x7577,	// (0x00044375) vid4_progress_pane_ParamLimits

0x7577,	// (0x00044375) vid4_progress_pane

0xd840,	// (0x0004a63e) main_cset_slider_pane_g18_ParamLimits

0xd840,	// (0x0004a63e) main_cset_slider_pane_g18

0xda02,	// (0x0004a800) cell_cam4_burst_pane_g2_ParamLimits

0xda02,	// (0x0004a800) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004c846) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004c846) cell_cam4_burst_pane_g

0x82e0,	// (0x000450de) bg_cl_pane_ParamLimits

0x82e0,	// (0x000450de) bg_cl_pane

0x82ec,	// (0x000450ea) cl_header_pane_ParamLimits

0x82ec,	// (0x000450ea) cl_header_pane

0x82f8,	// (0x000450f6) cl_listscroll_pane_ParamLimits

0x82f8,	// (0x000450f6) cl_listscroll_pane

0xdb87,	// (0x0004a985) bg_cl_pane_g1

0xdb8f,	// (0x0004a98d) bg_cl_pane_g2

0xdb97,	// (0x0004a995) bg_cl_pane_g3

0xdb9f,	// (0x0004a99d) bg_cl_pane_g4

0xdba7,	// (0x0004a9a5) bg_cl_pane_g5

0xdbaf,	// (0x0004a9ad) bg_cl_pane_g6

0xdbb7,	// (0x0004a9b5) bg_cl_pane_g7

0xdbbf,	// (0x0004a9bd) bg_cl_pane_g8

0xdbc7,	// (0x0004a9c5) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004c881) bg_cl_pane_g

0x8304,	// (0x00045102) aid_height_cl_leading_ParamLimits

0x8304,	// (0x00045102) aid_height_cl_leading

0x8310,	// (0x0004510e) aid_height_cl_text_ParamLimits

0x8310,	// (0x0004510e) aid_height_cl_text

0xdb26,	// (0x0004a924) bg_cl_header_pane_ParamLimits

0xdb26,	// (0x0004a924) bg_cl_header_pane

0x8328,	// (0x00045126) cl_header_pane_g1_ParamLimits

0x8328,	// (0x00045126) cl_header_pane_g1

0x8335,	// (0x00045133) cl_header_pane_t1_ParamLimits

0x8335,	// (0x00045133) cl_header_pane_t1

0xdbcf,	// (0x0004a9cd) cl_list_pane

0xd813,	// (0x0004a611) hc_scroll_pane_cp01

0xac1a,	// (0x00047a18) bg_cl_header_pane_g1

0xd6f9,	// (0x0004a4f7) bg_cl_header_pane_g2

0xac3a,	// (0x00047a38) bg_cl_header_pane_g3

0xd709,	// (0x0004a507) bg_cl_header_pane_g4

0xd701,	// (0x0004a4ff) bg_cl_header_pane_g5

0xd91d,	// (0x0004a71b) bg_cl_header_pane_g6

0xd721,	// (0x0004a51f) bg_cl_header_pane_g7

0xd729,	// (0x0004a527) bg_cl_header_pane_g8

0xd719,	// (0x0004a517) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004c894) bg_cl_header_pane_g

0x8347,	// (0x00045145) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8347,	// (0x00045145) hc_cl_list_double_graphic_heading_pane

0x8358,	// (0x00045156) hc_cl_list_single_graphic_pane_ParamLimits

0x8358,	// (0x00045156) hc_cl_list_single_graphic_pane

0x8371,	// (0x0004516f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8371,	// (0x0004516f) hc_cl_list_single_graphic_pane_g1

0x837d,	// (0x0004517b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x837d,	// (0x0004517b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004c8a7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004c8a7) hc_cl_list_single_graphic_pane_g

0x8391,	// (0x0004518f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8391,	// (0x0004518f) hc_cl_list_single_graphic_pane_t1

0x8371,	// (0x0004516f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8371,	// (0x0004516f) hc_cl_list_double_graphic_heading_pane_g1

0x83a6,	// (0x000451a4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x83a6,	// (0x000451a4) hc_cl_list_double_graphic_heading_pane_g2

0x83ba,	// (0x000451b8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x83ba,	// (0x000451b8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004c8ac) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004c8ac) hc_cl_list_double_graphic_heading_pane_g

0x83ce,	// (0x000451cc) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x83ce,	// (0x000451cc) hc_cl_list_double_graphic_heading_pane_t1

0x83e3,	// (0x000451e1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x83e3,	// (0x000451e1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004c8b3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004c8b3) hc_cl_list_double_graphic_heading_pane_t

0x8400,	// (0x000451fe) vid4_progress_pane_g1

0x8410,	// (0x0004520e) vid4_progress_pane_g2

0x8420,	// (0x0004521e) vid4_progress_pane_g3

0x8432,	// (0x00045230) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004c8b8) vid4_progress_pane_g

0x844a,	// (0x00045248) vid4_progress_pane_t1

0x8460,	// (0x0004525e) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004c8c3) vid4_progress_pane_t

0x848a,	// (0x00045288) wait_bar_pane_cp07

0xca56,	// (0x00049854) blid_firmament_pane_ParamLimits

0xca99,	// (0x00049897) popup_blid_sat_info2_window_g1

0xcac6,	// (0x000498c4) popup_blid_sat_info2_window_t3

0xcad4,	// (0x000498d2) popup_blid_sat_info2_window_t4

0xcae2,	// (0x000498e0) popup_blid_sat_info2_window_t5

0xcaf0,	// (0x000498ee) popup_blid_sat_info2_window_t6

0xcb00,	// (0x000498fe) popup_blid_sat_info2_window_t7

0xcb0e,	// (0x0004990c) popup_blid_sat_info2_window_t8

0xcb1c,	// (0x0004991a) popup_blid_sat_info2_window_t9

0xcb2a,	// (0x00049928) popup_blid_sat_info2_window_t10

0xcbec,	// (0x000499ea) aid_firma_cardinal_ParamLimits

0xcc00,	// (0x000499fe) blid_firmament_pane_t1_ParamLimits

0xcc17,	// (0x00049a15) blid_firmament_pane_t2_ParamLimits

0xcc2e,	// (0x00049a2c) blid_firmament_pane_t3_ParamLimits

0xcc45,	// (0x00049a43) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0004c4d1) blid_firmament_pane_t_ParamLimits

0xcc5c,	// (0x00049a5a) blid_sat_info_pane_ParamLimits

0xb05e,	// (0x00047e5c) main_cam_set_pane_ParamLimits

0x6a43,	// (0x00043841) aid_size_cell_colour_35_ParamLimits

0x6a5d,	// (0x0004385b) aid_size_cell_colour_112_ParamLimits

0x6a74,	// (0x00043872) aid_size_cell_effect_ParamLimits

0xb05e,	// (0x00047e5c) bg_tb_trans_pane_cp02_ParamLimits

0xb06c,	// (0x00047e6a) heading_imed_pane_ParamLimits

0x6a8e,	// (0x0004388c) listscroll_imed_pane_ParamLimits

0xbe81,	// (0x00048c7f) popup_call2_audio_first_window_g5_ParamLimits

0xbe81,	// (0x00048c7f) popup_call2_audio_first_window_g5

0x7194,	// (0x00043f92) aid_size_touch_image3_arrow_left_ParamLimits

0x7194,	// (0x00043f92) aid_size_touch_image3_arrow_left

0x71aa,	// (0x00043fa8) aid_size_touch_image3_arrow_right_ParamLimits

0x71aa,	// (0x00043fa8) aid_size_touch_image3_arrow_right

0x8475,	// (0x00045273) vid4_progress_pane_t3

0x6d2c,	// (0x00043b2a) main_hwr_training_symbol_option_pane_ParamLimits

0x6d2c,	// (0x00043b2a) main_hwr_training_symbol_option_pane

0xd4ab,	// (0x0004a2a9) popup_hwr_training_preview_window_ParamLimits

0xd4ab,	// (0x0004a2a9) popup_hwr_training_preview_window

0x6d8d,	// (0x00043b8b) hwr_training_navi_pane_g5_ParamLimits

0x6d8d,	// (0x00043b8b) hwr_training_navi_pane_g5

0xd6e7,	// (0x0004a4e5) popup_char_count_window

0xdb26,	// (0x0004a924) bg_popup_sub_pane_cp20_ParamLimits

0x7f66,	// (0x00044d64) list_vitu2_match_list_pane_ParamLimits

0x7f72,	// (0x00044d70) vitu2_page_scroll_pane_ParamLimits

0x7f72,	// (0x00044d70) vitu2_page_scroll_pane

0xdbd8,	// (0x0004a9d6) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbd8,	// (0x0004a9d6) list_single_hwr_training_symbol_option_pane

0xdbeb,	// (0x0004a9e9) list_single_hwr_training_symbol_option_pane_g1

0xdbf3,	// (0x0004a9f1) list_single_hwr_training_symbol_option_pane_t1

0xdc01,	// (0x0004a9ff) bg_button_pane_cp023

0xdc0a,	// (0x0004aa08) bg_button_pane_cp024

0x84af,	// (0x000452ad) vitu2_page_scroll_pane_g1

0x84b7,	// (0x000452b5) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004c8ca) vitu2_page_scroll_pane_g

0x84bf,	// (0x000452bd) vitu2_page_scroll_pane_t1

0xdc3d,	// (0x0004aa3b) popup_char_count_window_g1

0xdc46,	// (0x0004aa44) popup_char_count_window_g2

0xdc4f,	// (0x0004aa4d) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004c8cf) popup_char_count_window_g

0xdc58,	// (0x0004aa56) popup_char_count_window_t1

0xa0d8,	// (0x00046ed6) main_vded2_pane

0xd19e,	// (0x00049f9c) aid_size_cell_imed_line

0xd1a8,	// (0x00049fa6) grid_imed_line_width_pane

0x75e5,	// (0x000443e3) vid4_indicators_pane_g4

0xdc66,	// (0x0004aa64) cell_imed_line_width_pane_ParamLimits

0xdc66,	// (0x0004aa64) cell_imed_line_width_pane

0xdc7a,	// (0x0004aa78) cell_imed_line_width_pane_g1

0xdc83,	// (0x0004aa81) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004c8d6) cell_imed_line_width_pane_g

0x84ce,	// (0x000452cc) main_vded2_pane_g1_ParamLimits

0x84ce,	// (0x000452cc) main_vded2_pane_g1

0x84db,	// (0x000452d9) main_vded2_pane_g2_ParamLimits

0x84db,	// (0x000452d9) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004c8db) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004c8db) main_vded2_pane_g

0x84e9,	// (0x000452e7) vded2_slider_pane_ParamLimits

0x84e9,	// (0x000452e7) vded2_slider_pane

0x84f6,	// (0x000452f4) aid_size_touch_vded2_end

0x8500,	// (0x000452fe) aid_size_touch_vded2_playhead

0xdc8b,	// (0x0004aa89) aid_size_touch_vded2_start

0xdc93,	// (0x0004aa91) vded2_slider_bg_pane

0xdc9c,	// (0x0004aa9a) vded2_slider_pane_g1

0xdca5,	// (0x0004aaa3) vded2_slider_pane_g2

0x8508,	// (0x00045306) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004c8e0) vded2_slider_pane_g

0xdcad,	// (0x0004aaab) vded2_slider_bg_pane_g1

0xdcb6,	// (0x0004aab4) vded2_slider_bg_pane_g2

0xdcbf,	// (0x0004aabd) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0004c8e7) vded2_slider_bg_pane_g

0x4e5d,	// (0x00041c5b) aid_postcard_touch_down_pane_ParamLimits

0x4e5d,	// (0x00041c5b) aid_postcard_touch_down_pane

0x4e6d,	// (0x00041c6b) aid_postcard_touch_up_pane_ParamLimits

0x4e6d,	// (0x00041c6b) aid_postcard_touch_up_pane

0xa0d8,	// (0x00046ed6) main_blid2_pane

0x5590,	// (0x0004238e) popup_blid2_search_window

0xa0d8,	// (0x00046ed6) blid2_gps_pane

0xa0d8,	// (0x00046ed6) blid2_navig_pane

0xa0d8,	// (0x00046ed6) blid2_search_pane

0xa0d8,	// (0x00046ed6) blid2_tripm_pane

0x8511,	// (0x0004530f) blid2_search_pane_g1_ParamLimits

0x8511,	// (0x0004530f) blid2_search_pane_g1

0x8521,	// (0x0004531f) blid2_search_pane_t1_ParamLimits

0x8521,	// (0x0004531f) blid2_search_pane_t1

0x8533,	// (0x00045331) aid_size_cell_blid2_gps_ParamLimits

0x8533,	// (0x00045331) aid_size_cell_blid2_gps

0x8543,	// (0x00045341) blid2_gps_pane_g1_ParamLimits

0x8543,	// (0x00045341) blid2_gps_pane_g1

0x854f,	// (0x0004534d) grid_blid2_satellite_pane_ParamLimits

0x854f,	// (0x0004534d) grid_blid2_satellite_pane

0x855f,	// (0x0004535d) blid2_navig_pane_g1_ParamLimits

0x855f,	// (0x0004535d) blid2_navig_pane_g1

0x856b,	// (0x00045369) blid2_navig_pane_t1_ParamLimits

0x856b,	// (0x00045369) blid2_navig_pane_t1

0x857d,	// (0x0004537b) blid2_navig_pane_t2_ParamLimits

0x857d,	// (0x0004537b) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0004c8ee) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0004c8ee) blid2_navig_pane_t

0x858f,	// (0x0004538d) blid2_navig_ring_pane_ParamLimits

0x858f,	// (0x0004538d) blid2_navig_ring_pane

0x859f,	// (0x0004539d) blid2_speed_pane_ParamLimits

0x859f,	// (0x0004539d) blid2_speed_pane

0x85ab,	// (0x000453a9) blid2_tripm_pane_g1_ParamLimits

0x85ab,	// (0x000453a9) blid2_tripm_pane_g1

0x85bb,	// (0x000453b9) blid2_tripm_pane_g2_ParamLimits

0x85bb,	// (0x000453b9) blid2_tripm_pane_g2

0x85c7,	// (0x000453c5) blid2_tripm_pane_g3_ParamLimits

0x85c7,	// (0x000453c5) blid2_tripm_pane_g3

0x85d3,	// (0x000453d1) blid2_tripm_pane_g4_ParamLimits

0x85d3,	// (0x000453d1) blid2_tripm_pane_g4

0x85df,	// (0x000453dd) blid2_tripm_pane_g5_ParamLimits

0x85df,	// (0x000453dd) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0004c8f3) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0004c8f3) blid2_tripm_pane_g

0x85fb,	// (0x000453f9) blid2_tripm_pane_t1_ParamLimits

0x85fb,	// (0x000453f9) blid2_tripm_pane_t1

0x860f,	// (0x0004540d) blid2_tripm_pane_t2_ParamLimits

0x860f,	// (0x0004540d) blid2_tripm_pane_t2

0x8621,	// (0x0004541f) blid2_tripm_pane_t3_ParamLimits

0x8621,	// (0x0004541f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0004c900) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0004c900) blid2_tripm_pane_t

0x8653,	// (0x00045451) cell_blid2_satellite_pane_ParamLimits

0x8653,	// (0x00045451) cell_blid2_satellite_pane

0x866d,	// (0x0004546b) cell_blid2_satellite_pane_g1

0xdcc8,	// (0x0004aac6) cell_blid2_satellite_pane_t1

0xcc6c,	// (0x00049a6a) blid2_speed_pane_g1

0xdcd6,	// (0x0004aad4) blid2_speed_pane_t1

0xdce4,	// (0x0004aae2) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0004c909) blid2_speed_pane_t

0xcc6c,	// (0x00049a6a) blid2_navig_ring_pane_g1

0x8676,	// (0x00045474) blid2_navig_ring_pane_g2

0x867e,	// (0x0004547c) blid2_navig_ring_pane_g3

0x8686,	// (0x00045484) blid2_navig_ring_pane_g4

0x868e,	// (0x0004548c) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0004c90e) blid2_navig_ring_pane_g

0xa0d8,	// (0x00046ed6) bg_popup_window_pane_cp011

0xdcf2,	// (0x0004aaf0) popup_blid2_search_window_g1

0xdcfa,	// (0x0004aaf8) popup_blid2_search_window_t1

0xdd08,	// (0x0004ab06) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0004c919) popup_blid2_search_window_t

0xab29,	// (0x00047927) main_browser_pane_g1

0xa823,	// (0x00047621) main_browser_pane_ParamLimits

0xb05e,	// (0x00047e5c) bg_button_pane_cp011_ParamLimits

0x7853,	// (0x00044651) cell_vitu2_function_pane_g1_ParamLimits

0xc85b,	// (0x00049659) bg_popup_sub_pane_cp22_ParamLimits

0x139c,	// (0x0003e19a) input_focus_pane_cp08_ParamLimits

0x80f1,	// (0x00044eef) popup_vitu2_query_button_pane_ParamLimits

0x80f1,	// (0x00044eef) popup_vitu2_query_button_pane

0x13b3,	// (0x0003e1b1) popup_vitu2_query_input_button_pane

0xd958,	// (0x0004a756) popup_vitu2_query_window_g1_ParamLimits

0x13bd,	// (0x0003e1bb) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004c81a) popup_vitu2_query_window_g_ParamLimits

0xa0d8,	// (0x00046ed6) bg_button_pane_cp026

0x8696,	// (0x00045494) popup_vitu2_query_input_button_pane_g1

0xa0d8,	// (0x00046ed6) bg_button_pane_cp025

0xdd16,	// (0x0004ab14) popup_vitu2_query_button_pane_t1

0x5fee,	// (0x00042dec) main_mp3_pane_t6

0x5ffe,	// (0x00042dfc) popup_slider_window_cp01

0x74c2,	// (0x000442c0) cam4_battery_pane

0x75a2,	// (0x000443a0) cam4_battery_pane_cp02

0x83f8,	// (0x000451f6) cam4_battery_pane_cp01

0x83f8,	// (0x000451f6) cam4_battery_pane_cp03

0xcc6c,	// (0x00049a6a) cam4_battery_pane_g1

0xdd24,	// (0x0004ab22) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0004c91e) cam4_battery_pane_g

0xcb38,	// (0x00049936) popup_blid_sat_info2_window_t11

0xb2ac,	// (0x000480aa) aid_size_touch_mv_arrow_left_ParamLimits

0xb2d5,	// (0x000480d3) aid_size_touch_mv_arrow_right_ParamLimits

0xb333,	// (0x00048131) navi_pane_g1_ParamLimits

0xb33f,	// (0x0004813d) navi_pane_g2_ParamLimits

0xb36d,	// (0x0004816b) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004c1e3) navi_pane_g_ParamLimits

0x48d3,	// (0x000416d1) navi_pane_mv_t1_ParamLimits

0x6a9a,	// (0x00043898) grid_imed_effect_pane_ParamLimits

0x338b,	// (0x00040189) aid_placing_vt_slider_lsc

0xaa78,	// (0x00047876) aid_placing_vt_slider_prt

0xb05e,	// (0x00047e5c) bg_tb_trans_pane_cp01_ParamLimits

0xcdef,	// (0x00049bed) popup_image_details_window_g1_ParamLimits

0xce02,	// (0x00049c00) popup_image_details_window_g2_ParamLimits

0xce17,	// (0x00049c15) popup_image_details_window_g3_ParamLimits

0xce17,	// (0x00049c15) popup_image_details_window_g3

0xf718,	// (0x0004c516) popup_image_details_window_g_ParamLimits

0xce2b,	// (0x00049c29) popup_image_details_window_t1_ParamLimits

0xce3d,	// (0x00049c3b) popup_image_details_window_t2_ParamLimits

0xce56,	// (0x00049c54) popup_image_details_window_t3_ParamLimits

0xce6a,	// (0x00049c68) popup_image_details_window_t4_ParamLimits

0xce85,	// (0x00049c83) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004c51d) popup_image_details_window_t_ParamLimits

0x831c,	// (0x0004511a) cl_header_name_pane_ParamLimits

0x831c,	// (0x0004511a) cl_header_name_pane

0x869e,	// (0x0004549c) cl_header_name_pane_t1_ParamLimits

0x869e,	// (0x0004549c) cl_header_name_pane_t1

0x86b5,	// (0x000454b3) cl_header_name_pane_t2_ParamLimits

0x86b5,	// (0x000454b3) cl_header_name_pane_t2

0x86df,	// (0x000454dd) cl_header_name_pane_t3_ParamLimits

0x86df,	// (0x000454dd) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0004c923) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0004c923) cl_header_name_pane_t

0xb3fc,	// (0x000481fa) navi_pane_mv_g2_ParamLimits

0xd6c1,	// (0x0004a4bf) field_vitu2_entry_pane_g1_ParamLimits

0xd6cd,	// (0x0004a4cb) field_vitu2_entry_pane_g2_ParamLimits

0xd6d9,	// (0x0004a4d7) field_vitu2_entry_pane_g3_ParamLimits

0xd6d9,	// (0x0004a4d7) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004c719) field_vitu2_entry_pane_g_ParamLimits

0x77de,	// (0x000445dc) cell_vitu2_itu_pane_g1_ParamLimits

0x77ee,	// (0x000445ec) cell_vitu2_itu_pane_g2_ParamLimits

0x77ee,	// (0x000445ec) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004c725) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004c725) cell_vitu2_itu_pane_g

0xb05e,	// (0x00047e5c) bg_vkb2_func_pane_cp05_ParamLimits

0xb05e,	// (0x00047e5c) bg_vkb2_func_pane_cp05

0xb05e,	// (0x00047e5c) bg_vkb2_func_pane_cp03

0xb05e,	// (0x00047e5c) bg_vkb2_func_pane_cp04

0xb05e,	// (0x00047e5c) bg_vkb2_func_pane_cp10_ParamLimits

0xb05e,	// (0x00047e5c) bg_vkb2_func_pane_cp10

0x1572,	// (0x0003e370) bg_vkb2_func_pane_cp08

0x82c6,	// (0x000450c4) bg_vkb2_func_pane_cp06

0x82d4,	// (0x000450d2) bg_vkb2_func_pane_cp07

0xdc13,	// (0x0004aa11) bg_vkb2_func_pane_cp11_ParamLimits

0xdc13,	// (0x0004aa11) bg_vkb2_func_pane_cp11

0xdc28,	// (0x0004aa26) bg_vkb2_func_pane_cp12_ParamLimits

0xdc28,	// (0x0004aa26) bg_vkb2_func_pane_cp12

0xa0d8,	// (0x00046ed6) bg_vkb2_func_pane_cp09

0xd6f9,	// (0x0004a4f7) bg_vkb2_func_pane_g1

0xac3a,	// (0x00047a38) bg_vkb2_func_pane_g2

0xd701,	// (0x0004a4ff) bg_vkb2_func_pane_g3

0xd709,	// (0x0004a507) bg_vkb2_func_pane_g4

0xd91d,	// (0x0004a71b) bg_vkb2_func_pane_g5

0xd721,	// (0x0004a51f) bg_vkb2_func_pane_g6

0xd729,	// (0x0004a527) bg_vkb2_func_pane_g7

0xd719,	// (0x0004a517) bg_vkb2_func_pane_g8

0xac1a,	// (0x00047a18) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0004c92a) bg_vkb2_func_pane_g

0x85ed,	// (0x000453eb) blid2_tripm_pane_g6_ParamLimits

0x85ed,	// (0x000453eb) blid2_tripm_pane_g6

0xd563,	// (0x0004a361) mp4_progress_pane_g1

0x8647,	// (0x00045445) blid2_tripm_values_pane_ParamLimits

0x8647,	// (0x00045445) blid2_tripm_values_pane

0x8704,	// (0x00045502) blid2_tripm_values_pane_t1

0x8712,	// (0x00045510) blid2_tripm_values_pane_t2

0x8720,	// (0x0004551e) blid2_tripm_values_pane_t3

0x872e,	// (0x0004552c) blid2_tripm_values_pane_t4

0x873c,	// (0x0004553a) blid2_tripm_values_pane_t5

0x874a,	// (0x00045548) blid2_tripm_values_pane_t6

0x8758,	// (0x00045556) blid2_tripm_values_pane_t7

0x8766,	// (0x00045564) blid2_tripm_values_pane_t8

0x8774,	// (0x00045572) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0004c93d) blid2_tripm_values_pane_t

0x33cb,	// (0x000401c9) call_video_pane_t1_ParamLimits

0x33ec,	// (0x000401ea) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004c06c) call_video_pane_t_ParamLimits

0x110a,	// (0x0003df08) msg_header_pane_g1_ParamLimits

0xb5de,	// (0x000483dc) msg_header_pane_g2_ParamLimits

0xb5de,	// (0x000483dc) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004c286) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004c286) msg_header_pane_g

0xa823,	// (0x00047621) main_clock2_pane_ParamLimits

0x6833,	// (0x00043631) grid_clock2_toolbar_pane_ParamLimits

0x6833,	// (0x00043631) grid_clock2_toolbar_pane

0x6833,	// (0x00043631) listscroll_clock2_pane_ParamLimits

0x6833,	// (0x00043631) listscroll_clock2_pane

0x68d7,	// (0x000436d5) main_clock2_pane_t3_ParamLimits

0x68d7,	// (0x000436d5) main_clock2_pane_t3

0x68e9,	// (0x000436e7) main_clock2_pane_t4_ParamLimits

0x68e9,	// (0x000436e7) main_clock2_pane_t4

0xdd2e,	// (0x0004ab2c) cell_clock2_toolbar_pane

0xdd36,	// (0x0004ab34) cell_clock2_toolbar_pane_cp01

0xdd36,	// (0x0004ab34) cell_clock2_toolbar_pane_cp02

0xdd3e,	// (0x0004ab3c) cell_clock2_toolbar_pane_cp03

0xdd46,	// (0x0004ab44) list_clock2_pane

0xb222,	// (0x00048020) scroll_pane_cp10

0xdd4e,	// (0x0004ab4c) list_single_clock2_pane_ParamLimits

0xdd4e,	// (0x0004ab4c) list_single_clock2_pane

0xb463,	// (0x00048261) list_highlight_pane_cp08

0xdd5b,	// (0x0004ab59) list_single_clock2_pane_t1

0xdd69,	// (0x0004ab67) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0004c950) list_single_clock2_pane_t

0xa0d8,	// (0x00046ed6) bg_button_pane_cp10

0xdd77,	// (0x0004ab75) cell_clock2_toolbar_pane_g1

0x4dbf,	// (0x00041bbd) aid_main_viewer_pane_g1_ParamLimits

0x4dbf,	// (0x00041bbd) aid_main_viewer_pane_g1

0x4dcb,	// (0x00041bc9) aid_main_viewer_pane_g2_ParamLimits

0x4dcb,	// (0x00041bc9) aid_main_viewer_pane_g2

0x4dd7,	// (0x00041bd5) aid_main_viewer_pane_g3_ParamLimits

0x4dd7,	// (0x00041bd5) aid_main_viewer_pane_g3

0x4de8,	// (0x00041be6) aid_main_viewer_pane_g4_ParamLimits

0x4de8,	// (0x00041be6) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004c297) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004c297) aid_main_viewer_pane_g

0x5568,	// (0x00042366) main_calc_pane_ParamLimits

0x5575,	// (0x00042373) main_dialer2_pane_ParamLimits

0xa0d8,	// (0x00046ed6) main_cam6_pane

0xa0d8,	// (0x00046ed6) main_vid6_pane

0x683f,	// (0x0004363d) listscroll_gen_pane_cp06_ParamLimits

0x683f,	// (0x0004363d) listscroll_gen_pane_cp06

0x68fb,	// (0x000436f9) main_clock2_pane_t5_ParamLimits

0x68fb,	// (0x000436f9) main_clock2_pane_t5

0x6944,	// (0x00043742) aid_call2_pane_cp10_ParamLimits

0x6956,	// (0x00043754) aid_call_pane_cp10_ParamLimits

0xb2a0,	// (0x0004809e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2a0,	// (0x0004809e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6968,	// (0x00043766) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6968,	// (0x00043766) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2a0,	// (0x0004809e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004c5d2) popup_clock_analogue_window_cp10_g_ParamLimits

0x697a,	// (0x00043778) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7141,	// (0x00043f3f) cell_dialer2_keypad_pane_g2_ParamLimits

0x7141,	// (0x00043f3f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004c6b8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004c6b8) cell_dialer2_keypad_pane_g

0x715d,	// (0x00043f5b) cell_dialer2_keypad_pane_t1

0x7b1e,	// (0x0004491c) main_cset_text2_pane_ParamLimits

0x7b1e,	// (0x0004491c) main_cset_text2_pane

0xdb7b,	// (0x0004a979) area_vitu2_query_pane_g1_ParamLimits

0x149d,	// (0x0003e29b) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004c86d) area_vitu2_query_pane_g_ParamLimits

0x154e,	// (0x0003e34c) area_vitu2_query_pane_t7_ParamLimits

0x154e,	// (0x0003e34c) area_vitu2_query_pane_t7

0x82c6,	// (0x000450c4) bg_button_pane_cp018_ParamLimits

0x82d4,	// (0x000450d2) bg_button_pane_cp021_ParamLimits

0x1572,	// (0x0003e370) bg_button_pane_cp022_ParamLimits

0x1572,	// (0x0003e370) bg_vkb2_func_pane_cp08_ParamLimits

0x82c6,	// (0x000450c4) bg_vkb2_func_pane_cp06_ParamLimits

0x82d4,	// (0x000450d2) bg_vkb2_func_pane_cp07_ParamLimits

0x1583,	// (0x0003e381) input_focus_pane_cp09_ParamLimits

0x8782,	// (0x00045580) cam6_autofocus_pane_ParamLimits

0x8782,	// (0x00045580) cam6_autofocus_pane

0x87a4,	// (0x000455a2) cam6_image_uncrop_pane_ParamLimits

0x87a4,	// (0x000455a2) cam6_image_uncrop_pane

0x87d1,	// (0x000455cf) cam6_indi_pane_ParamLimits

0x87d1,	// (0x000455cf) cam6_indi_pane

0x87eb,	// (0x000455e9) cam6_mode_pane_ParamLimits

0x87eb,	// (0x000455e9) cam6_mode_pane

0x87ff,	// (0x000455fd) cam6_timer_pane_ParamLimits

0x87ff,	// (0x000455fd) cam6_timer_pane

0x880b,	// (0x00045609) cam6_zoom_pane_ParamLimits

0x880b,	// (0x00045609) cam6_zoom_pane

0x8823,	// (0x00045621) cam6_mode_pane_g1_ParamLimits

0x8823,	// (0x00045621) cam6_mode_pane_g1

0x882f,	// (0x0004562d) cam6_mode_pane_g2_ParamLimits

0x882f,	// (0x0004562d) cam6_mode_pane_g2

0x883b,	// (0x00045639) cam6_mode_pane_g3_ParamLimits

0x883b,	// (0x00045639) cam6_mode_pane_g3

0x8847,	// (0x00045645) cam6_mode_pane_g4_ParamLimits

0x8847,	// (0x00045645) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0004c955) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0004c955) cam6_mode_pane_g

0xdb34,	// (0x0004a932) bg_tb_trans_pane_cp08_ParamLimits

0xdb34,	// (0x0004a932) bg_tb_trans_pane_cp08

0xdd7f,	// (0x0004ab7d) cam6_battery_pane_ParamLimits

0xdd7f,	// (0x0004ab7d) cam6_battery_pane

0xdd95,	// (0x0004ab93) cam6_indi_pane_g1_ParamLimits

0xdd95,	// (0x0004ab93) cam6_indi_pane_g1

0xdda7,	// (0x0004aba5) cam6_indi_pane_g2_ParamLimits

0xdda7,	// (0x0004aba5) cam6_indi_pane_g2

0xddb9,	// (0x0004abb7) cam6_indi_pane_g3_ParamLimits

0xddb9,	// (0x0004abb7) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0004c95e) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0004c95e) cam6_indi_pane_g

0xddcb,	// (0x0004abc9) cam6_indi_pane_t1_ParamLimits

0xddcb,	// (0x0004abc9) cam6_indi_pane_t1

0x761a,	// (0x00044418) cam6_autofocus_pane_g1

0x7622,	// (0x00044420) cam6_autofocus_pane_g2

0x762a,	// (0x00044428) cam6_autofocus_pane_g3

0x7632,	// (0x00044430) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0004c965) cam6_autofocus_pane_g

0xddf1,	// (0x0004abef) cam6_timer_pane_g1

0xddf9,	// (0x0004abf7) cam6_timer_pane_t1

0xde07,	// (0x0004ac05) cam6_zoom_cont_pane

0xde0f,	// (0x0004ac0d) cam6_zoom_pane_g1

0xde17,	// (0x0004ac15) cam6_zoom_pane_g2

0x8853,	// (0x00045651) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0004c96e) cam6_zoom_pane_g

0xcc6c,	// (0x00049a6a) cam6_battery_pane_g1

0xcc6c,	// (0x00049a6a) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0004c4da) cam6_battery_pane_g

0xde1f,	// (0x0004ac1d) cam6_zoom_cont_pane_g1

0xde28,	// (0x0004ac26) cam6_zoom_cont_pane_g2

0xde31,	// (0x0004ac2f) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0004c975) cam6_zoom_cont_pane_g

0x8870,	// (0x0004566e) cam6_mode_pane_cp_ParamLimits

0x8870,	// (0x0004566e) cam6_mode_pane_cp

0x880b,	// (0x00045609) cam6_zoom_pane_cp_ParamLimits

0x880b,	// (0x00045609) cam6_zoom_pane_cp

0x8884,	// (0x00045682) vid6_image_uncrop_cif_pane_ParamLimits

0x8884,	// (0x00045682) vid6_image_uncrop_cif_pane

0x88b0,	// (0x000456ae) vid6_image_uncrop_nhd_pane_ParamLimits

0x88b0,	// (0x000456ae) vid6_image_uncrop_nhd_pane

0x87a4,	// (0x000455a2) vid6_image_uncrop_vga_pane_ParamLimits

0x87a4,	// (0x000455a2) vid6_image_uncrop_vga_pane

0x88cd,	// (0x000456cb) vid6_image_uncrop_wvga_pane_ParamLimits

0x88cd,	// (0x000456cb) vid6_image_uncrop_wvga_pane

0x88ea,	// (0x000456e8) vid6_indi_pane_ParamLimits

0x88ea,	// (0x000456e8) vid6_indi_pane

0xdb34,	// (0x0004a932) bg_tb_trans_pane_cp09_ParamLimits

0xdb34,	// (0x0004a932) bg_tb_trans_pane_cp09

0xde49,	// (0x0004ac47) cam6_battery_pane_cp_ParamLimits

0xde49,	// (0x0004ac47) cam6_battery_pane_cp

0xde55,	// (0x0004ac53) vid6_indi_pane_g1_ParamLimits

0xde55,	// (0x0004ac53) vid6_indi_pane_g1

0xde67,	// (0x0004ac65) vid6_indi_pane_g2_ParamLimits

0xde67,	// (0x0004ac65) vid6_indi_pane_g2

0xde79,	// (0x0004ac77) vid6_indi_pane_g3_ParamLimits

0xde79,	// (0x0004ac77) vid6_indi_pane_g3

0xde8e,	// (0x0004ac8c) vid6_indi_pane_g4_ParamLimits

0xde8e,	// (0x0004ac8c) vid6_indi_pane_g4

0xdea3,	// (0x0004aca1) vid6_indi_pane_g5_ParamLimits

0xdea3,	// (0x0004aca1) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0004c97c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0004c97c) vid6_indi_pane_g

0xdebd,	// (0x0004acbb) vid6_indi_pane_t1_ParamLimits

0xdebd,	// (0x0004acbb) vid6_indi_pane_t1

0xded3,	// (0x0004acd1) vid6_indi_pane_t2_ParamLimits

0xded3,	// (0x0004acd1) vid6_indi_pane_t2

0xdefb,	// (0x0004acf9) vid6_indi_pane_t3_ParamLimits

0xdefb,	// (0x0004acf9) vid6_indi_pane_t3

0xdf23,	// (0x0004ad21) vid6_indi_pane_t4_ParamLimits

0xdf23,	// (0x0004ad21) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0004c987) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0004c987) vid6_indi_pane_t

0xdf47,	// (0x0004ad45) wait_bar_pane_cp08

0x890f,	// (0x0004570d) main_cset_text2_pane_t1_ParamLimits

0x890f,	// (0x0004570d) main_cset_text2_pane_t1

0x885b,	// (0x00045659) listscroll_gen_pane_cp06_t1_ParamLimits

0x885b,	// (0x00045659) listscroll_gen_pane_cp06_t1

0xa0d8,	// (0x00046ed6) main_cam6_set_pane

0xcecf,	// (0x00049ccd) bg_tb_trans_pane_cp06_ParamLimits

0x74ca,	// (0x000442c8) cam4_indicators_pane_g1_ParamLimits

0x74db,	// (0x000442d9) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004c6f5) cam4_indicators_pane_g_ParamLimits

0x74f9,	// (0x000442f7) cam4_indicators_pane_t1_ParamLimits

0xb05e,	// (0x00047e5c) bg_tb_trans_pane_cp07_ParamLimits

0x75ac,	// (0x000443aa) vid4_indicators_pane_g1_ParamLimits

0x75c0,	// (0x000443be) vid4_indicators_pane_g2_ParamLimits

0x75d4,	// (0x000443d2) vid4_indicators_pane_g3_ParamLimits

0x75e5,	// (0x000443e3) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004c707) vid4_indicators_pane_g_ParamLimits

0x7603,	// (0x00044401) vid4_indicators_pane_t1_ParamLimits

0x8400,	// (0x000451fe) vid4_progress_pane_g1_ParamLimits

0x8410,	// (0x0004520e) vid4_progress_pane_g2_ParamLimits

0x8420,	// (0x0004521e) vid4_progress_pane_g3_ParamLimits

0x8432,	// (0x00045230) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004c8b8) vid4_progress_pane_g_ParamLimits

0x844a,	// (0x00045248) vid4_progress_pane_t1_ParamLimits

0x8460,	// (0x0004525e) vid4_progress_pane_t2_ParamLimits

0x8475,	// (0x00045273) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004c8c3) vid4_progress_pane_t_ParamLimits

0x848a,	// (0x00045288) wait_bar_pane_cp07_ParamLimits

0x8942,	// (0x00045740) main_cam6_set_pane_g2_ParamLimits

0x8942,	// (0x00045740) main_cam6_set_pane_g2

0x894e,	// (0x0004574c) main_cset6_listscroll_pane_ParamLimits

0x894e,	// (0x0004574c) main_cset6_listscroll_pane

0x8979,	// (0x00045777) main_cset6_slider_pane_ParamLimits

0x8979,	// (0x00045777) main_cset6_slider_pane

0x8985,	// (0x00045783) main_cset6_text2_pane_ParamLimits

0x8985,	// (0x00045783) main_cset6_text2_pane

0xdf56,	// (0x0004ad54) main_cset6_text_pane

0xdf5e,	// (0x0004ad5c) main_cset_list_pane_copy1_ParamLimits

0xdf5e,	// (0x0004ad5c) main_cset_list_pane_copy1

0xdf6e,	// (0x0004ad6c) scroll_pane_cp028_copy1

0x8998,	// (0x00045796) cset_list_set_pane_copy1

0x89ab,	// (0x000457a9) aid_position_infowindow_above_copy1

0x89b3,	// (0x000457b1) aid_position_infowindow_below_copy1

0x15dc,	// (0x0003e3da) cset_list_set_pane_g1_copy1

0x1314,	// (0x0003e112) cset_list_set_pane_g3_copy1_ParamLimits

0x1314,	// (0x0003e112) cset_list_set_pane_g3_copy1

0x1323,	// (0x0003e121) cset_list_set_pane_t1_copy1_ParamLimits

0x1323,	// (0x0003e121) cset_list_set_pane_t1_copy1

0xb05e,	// (0x00047e5c) list_highlight_pane_cp021_copy1_ParamLimits

0xb05e,	// (0x00047e5c) list_highlight_pane_cp021_copy1

0xdf77,	// (0x0004ad75) cset6_slider_pane_ParamLimits

0xdf77,	// (0x0004ad75) cset6_slider_pane

0xdfa3,	// (0x0004ada1) main_cset6_slider_pane_g1_ParamLimits

0xdfa3,	// (0x0004ada1) main_cset6_slider_pane_g1

0x89bb,	// (0x000457b9) main_cset6_slider_pane_g2_ParamLimits

0x89bb,	// (0x000457b9) main_cset6_slider_pane_g2

0xdfcb,	// (0x0004adc9) main_cset6_slider_pane_g3_ParamLimits

0xdfcb,	// (0x0004adc9) main_cset6_slider_pane_g3

0x89e3,	// (0x000457e1) main_cset6_slider_pane_g4_ParamLimits

0x89e3,	// (0x000457e1) main_cset6_slider_pane_g4

0x89ef,	// (0x000457ed) main_cset6_slider_pane_g5_ParamLimits

0x89ef,	// (0x000457ed) main_cset6_slider_pane_g5

0xd828,	// (0x0004a626) main_cset6_slider_pane_g7_ParamLimits

0xd828,	// (0x0004a626) main_cset6_slider_pane_g7

0xd834,	// (0x0004a632) main_cset6_slider_pane_g8_ParamLimits

0xd834,	// (0x0004a632) main_cset6_slider_pane_g8

0x89fd,	// (0x000457fb) main_cset6_slider_pane_g9_ParamLimits

0x89fd,	// (0x000457fb) main_cset6_slider_pane_g9

0x8a09,	// (0x00045807) main_cset6_slider_pane_g10_ParamLimits

0x8a09,	// (0x00045807) main_cset6_slider_pane_g10

0x8a15,	// (0x00045813) main_cset6_slider_pane_g11_ParamLimits

0x8a15,	// (0x00045813) main_cset6_slider_pane_g11

0x8a21,	// (0x0004581f) main_cset6_slider_pane_g12_ParamLimits

0x8a21,	// (0x0004581f) main_cset6_slider_pane_g12

0x8a2d,	// (0x0004582b) main_cset6_slider_pane_g13_ParamLimits

0x8a2d,	// (0x0004582b) main_cset6_slider_pane_g13

0x8a39,	// (0x00045837) main_cset6_slider_pane_g14_ParamLimits

0x8a39,	// (0x00045837) main_cset6_slider_pane_g14

0x8a45,	// (0x00045843) main_cset6_slider_pane_g15_ParamLimits

0x8a45,	// (0x00045843) main_cset6_slider_pane_g15

0x8a5d,	// (0x0004585b) main_cset6_slider_pane_g16_ParamLimits

0x8a5d,	// (0x0004585b) main_cset6_slider_pane_g16

0x8a6b,	// (0x00045869) main_cset6_slider_pane_g17_ParamLimits

0x8a6b,	// (0x00045869) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0004c990) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0004c990) main_cset6_slider_pane_g

0xdfd7,	// (0x0004add5) main_cset6_slider_pane_t1_ParamLimits

0xdfd7,	// (0x0004add5) main_cset6_slider_pane_t1

0x8a91,	// (0x0004588f) main_cset6_slider_pane_t2_ParamLimits

0x8a91,	// (0x0004588f) main_cset6_slider_pane_t2

0x8abc,	// (0x000458ba) main_cset6_slider_pane_t3_ParamLimits

0x8abc,	// (0x000458ba) main_cset6_slider_pane_t3

0x8ae7,	// (0x000458e5) main_cset6_slider_pane_t4_ParamLimits

0x8ae7,	// (0x000458e5) main_cset6_slider_pane_t4

0x8b12,	// (0x00045910) main_cset6_slider_pane_t5_ParamLimits

0x8b12,	// (0x00045910) main_cset6_slider_pane_t5

0xe018,	// (0x0004ae16) main_cset6_slider_pane_t7_ParamLimits

0xe018,	// (0x0004ae16) main_cset6_slider_pane_t7

0x8b3f,	// (0x0004593d) main_cset6_slider_pane_t8_ParamLimits

0x8b3f,	// (0x0004593d) main_cset6_slider_pane_t8

0x8b63,	// (0x00045961) main_cset6_slider_pane_t9_ParamLimits

0x8b63,	// (0x00045961) main_cset6_slider_pane_t9

0x8b87,	// (0x00045985) main_cset6_slider_pane_t10_ParamLimits

0x8b87,	// (0x00045985) main_cset6_slider_pane_t10

0x8bab,	// (0x000459a9) main_cset6_slider_pane_t11_ParamLimits

0x8bab,	// (0x000459a9) main_cset6_slider_pane_t11

0xe04e,	// (0x0004ae4c) main_cset6_slider_pane_t14_ParamLimits

0xe04e,	// (0x0004ae4c) main_cset6_slider_pane_t14

0xe087,	// (0x0004ae85) main_cset6_slider_pane_t15_ParamLimits

0xe087,	// (0x0004ae85) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0004c9b5) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0004c9b5) main_cset6_slider_pane_t

0xdb42,	// (0x0004a940) cset_slider_pane_g1_copy1

0xdb4b,	// (0x0004a949) cset_slider_pane_g2_copy1

0xdb54,	// (0x0004a952) cset_slider_pane_g3_copy1

0xa0d8,	// (0x00046ed6) bg_popup_sub_pane_cp011_copy1

0xe0c0,	// (0x0004aebe) main_cset_text_pane_g1_copy1

0xd96c,	// (0x0004a76a) main_cset_text_pane_t1_copy1

0xd97a,	// (0x0004a778) main_cset_text_pane_t2_copy1

0xd988,	// (0x0004a786) main_cset_text_pane_t3_copy1

0xd996,	// (0x0004a794) main_cset_text_pane_t4_copy1

0xd9a4,	// (0x0004a7a2) main_cset_text_pane_t5_copy1

0xe0c8,	// (0x0004aec6) main_cset_text_pane_t6_copy1

0xd9c0,	// (0x0004a7be) main_cset_text_pane_t7_copy1

0x8bcf,	// (0x000459cd) main_cset_text2_pane_t1_copy1

0xb05e,	// (0x00047e5c) main_ncimui_pane

0x55c6,	// (0x000423c4) popup_query_ncimui_window_ParamLimits

0x55c6,	// (0x000423c4) popup_query_ncimui_window

0x11cb,	// (0x0003dfc9) field_cale_ev2_pane_g4_ParamLimits

0x11cb,	// (0x0003dfc9) field_cale_ev2_pane_g4

0x6e61,	// (0x00043c5f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e61,	// (0x00043c5f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004c693) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004c693) cell_video_dialer_keypad_pane_g

0x6e79,	// (0x00043c77) cell_video_dialer_keypad_pane_t1

0xa0d8,	// (0x00046ed6) bg_popup_window_pane_cp012

0xb0ef,	// (0x00047eed) heading_pane_cp06

0xe0f4,	// (0x0004aef2) ncim_query_content_pane

0xa0d8,	// (0x00046ed6) bg_popup_heading_pane_cp01

0xe0fc,	// (0x0004aefa) ncim_heading_pane_t1

0xe10a,	// (0x0004af08) ncim_indicator_popup_pane

0xe11c,	// (0x0004af1a) ncim_query_button_pane

0xe130,	// (0x0004af2e) ncim_query_content_pane_t1

0xe142,	// (0x0004af40) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0004c9f9) ncim_query_content_pane_t

0xe17c,	// (0x0004af7a) ncim_query_list_pane

0xe18e,	// (0x0004af8c) ncim_query_popup_pane

0xe10a,	// (0x0004af08) ncim_indicator_popup_pane_ParamLimits

0x8d22,	// (0x00045b20) ncim_query_content_pane_g1_ParamLimits

0x8d22,	// (0x00045b20) ncim_query_content_pane_g1

0xe130,	// (0x0004af2e) ncim_query_content_pane_t1_ParamLimits

0xe142,	// (0x0004af40) ncim_query_content_pane_t2_ParamLimits

0x8d2e,	// (0x00045b2c) ncim_query_content_pane_t3_ParamLimits

0x8d2e,	// (0x00045b2c) ncim_query_content_pane_t3

0x8d4b,	// (0x00045b49) ncim_query_content_pane_t4_ParamLimits

0x8d4b,	// (0x00045b49) ncim_query_content_pane_t4

0x8d68,	// (0x00045b66) ncim_query_content_pane_t5_ParamLimits

0x8d68,	// (0x00045b66) ncim_query_content_pane_t5

0xe154,	// (0x0004af52) ncim_query_content_pane_t6_ParamLimits

0xe154,	// (0x0004af52) ncim_query_content_pane_t6

0xfbfb,	// (0x0004c9f9) ncim_query_content_pane_t_ParamLimits

0xe17c,	// (0x0004af7a) ncim_query_list_pane_ParamLimits

0xe18e,	// (0x0004af8c) ncim_query_popup_pane_ParamLimits

0xe1a2,	// (0x0004afa0) wait_bar_pane_cp04

0xa0d8,	// (0x00046ed6) input_focus_pane_cp011

0xe1aa,	// (0x0004afa8) ncim_query_popup_pane_t1

0xe1b8,	// (0x0004afb6) ncim_list_query_list_pane_ParamLimits

0xe1b8,	// (0x0004afb6) ncim_list_query_list_pane

0xa0d8,	// (0x00046ed6) bg_button_pane_cp027

0xe1c5,	// (0x0004afc3) ncim_query_button_pane_g1

0xa0d8,	// (0x00046ed6) list_highlight_pane_cp012

0xe1cf,	// (0x0004afcd) ncim_list_query_list_pane_g1

0xe1d7,	// (0x0004afd5) ncim_list_query_list_pane_t1

0x74ea,	// (0x000442e8) cam4_indicators_pane_g3_ParamLimits

0x74ea,	// (0x000442e8) cam4_indicators_pane_g3

0x75f1,	// (0x000443ef) vid4_indicators_pane_g5_ParamLimits

0x75f1,	// (0x000443ef) vid4_indicators_pane_g5

0x843e,	// (0x0004523c) vid4_progress_pane_g5_ParamLimits

0x843e,	// (0x0004523c) vid4_progress_pane_g5

0x8c0e,	// (0x00045a0c) main_ncimui_pane_g1

0x8c76,	// (0x00045a74) ncimui_group_query_pane_ParamLimits

0x8c76,	// (0x00045a74) ncimui_group_query_pane

0x8cbe,	// (0x00045abc) ncimui_list_pane_ParamLimits

0x8cbe,	// (0x00045abc) ncimui_list_pane

0x8ce5,	// (0x00045ae3) ncimui_text_pane_ParamLimits

0x8ce5,	// (0x00045ae3) ncimui_text_pane

0x8d85,	// (0x00045b83) ncimui_text_pane_t1_ParamLimits

0x8d85,	// (0x00045b83) ncimui_text_pane_t1

0xe1e5,	// (0x0004afe3) ncimui_list_single_graphic_pane_ParamLimits

0xe1e5,	// (0x0004afe3) ncimui_list_single_graphic_pane

0x8da4,	// (0x00045ba2) ncimui_query_pane_ParamLimits

0x8da4,	// (0x00045ba2) ncimui_query_pane

0xa0d8,	// (0x00046ed6) list_highlight_pane_cp013

0xe1f5,	// (0x0004aff3) ncim_list_query_list_pane_t1_copy1

0xe1cf,	// (0x0004afcd) ncim_list_single_graphic_pane_g1

0xe203,	// (0x0004b001) ncim_query_button_pane_cp01

0xe20f,	// (0x0004b00d) ncim_query_entry_pane_ParamLimits

0xe20f,	// (0x0004b00d) ncim_query_entry_pane

0xe222,	// (0x0004b020) ncimui_query_pane_g1

0xe22e,	// (0x0004b02c) ncimui_query_pane_t1_ParamLimits

0xe22e,	// (0x0004b02c) ncimui_query_pane_t1

0xb05e,	// (0x00047e5c) input_focus_pane_cp012

0xe247,	// (0x0004b045) ncim_query_entry_pane_t1

0xa823,	// (0x00047621) main_im_pane_ParamLimits

0xb05e,	// (0x00047e5c) main_mobtv_pane_ParamLimits

0xb05e,	// (0x00047e5c) main_mobtv_pane

0x8a79,	// (0x00045877) main_cset6_slider_pane_g18_ParamLimits

0x8a79,	// (0x00045877) main_cset6_slider_pane_g18

0x8a85,	// (0x00045883) main_cset6_slider_pane_g19_ParamLimits

0x8a85,	// (0x00045883) main_cset6_slider_pane_g19

0xd6d9,	// (0x0004a4d7) bg_main_mobtv_pane_ParamLimits

0xd6d9,	// (0x0004a4d7) bg_main_mobtv_pane

0x8db7,	// (0x00045bb5) main_mobtv_info_pane

0x8dc2,	// (0x00045bc0) main_mobtv_loading_pane_ParamLimits

0x8dc2,	// (0x00045bc0) main_mobtv_loading_pane

0xe259,	// (0x0004b057) main_mobtv_pg_channel_list_pane

0xe263,	// (0x0004b061) main_mobtv_pg_hdr_pane

0x8dcf,	// (0x00045bcd) main_mobtv_programe_curr_pane_ParamLimits

0x8dcf,	// (0x00045bcd) main_mobtv_programe_curr_pane

0x8ddc,	// (0x00045bda) main_mobtv_programe_next_pane_ParamLimits

0x8ddc,	// (0x00045bda) main_mobtv_programe_next_pane

0xe26c,	// (0x0004b06a) popup_mobtv_noti_window

0xcc6c,	// (0x00049a6a) main_tv_pg_hdr_pane_g1

0xe274,	// (0x0004b072) main_tv_pg_hdr_pane_g2

0xe27c,	// (0x0004b07a) main_tv_pg_hdr_pane_g3

0xe284,	// (0x0004b082) main_tv_pg_hdr_pane_g4

0xe28c,	// (0x0004b08a) main_tv_pg_hdr_pane_g5

0xe296,	// (0x0004b094) main_tv_pg_hdr_pane_g6

0xe2a0,	// (0x0004b09e) main_tv_pg_hdr_pane_g7

0xe2aa,	// (0x0004b0a8) main_tv_pg_hdr_pane_g8

0xe2b4,	// (0x0004b0b2) main_tv_pg_hdr_pane_g9

0xe2be,	// (0x0004b0bc) main_tv_pg_hdr_pane_g10

0xe2c8,	// (0x0004b0c6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0004ca06) main_tv_pg_hdr_pane_g

0xe2d2,	// (0x0004b0d0) main_tv_pg_hdr_pane_t1

0xe2e0,	// (0x0004b0de) main_tv_pg_hdr_pane_t2

0xe2ee,	// (0x0004b0ec) main_tv_pg_hdr_pane_t3

0xe2fe,	// (0x0004b0fc) main_tv_pg_hdr_pane_t4

0xe30e,	// (0x0004b10c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0004ca1d) main_tv_pg_hdr_pane_t

0xe31e,	// (0x0004b11c) single_mobtv_pg_channel_pane_ParamLimits

0xe31e,	// (0x0004b11c) single_mobtv_pg_channel_pane

0xe330,	// (0x0004b12e) single_mobtv_pg_channel_table_pane

0xe339,	// (0x0004b137) single_mobtv_pg_channel_thumb_pane

0xe342,	// (0x0004b140) single_tv_pg_channel_pane_g1

0xe34b,	// (0x0004b149) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0004ca28) single_tv_pg_channel_pane_g

0xcecf,	// (0x00049ccd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcecf,	// (0x00049ccd) bg_single_mobtv_pg_channel_thumb_pane

0xe354,	// (0x0004b152) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe354,	// (0x0004b152) single_mobtv_pg_channel_thumb_pane_g1

0xe362,	// (0x0004b160) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe362,	// (0x0004b160) single_mobtv_pg_channel_thumb_pane_g2

0xe36e,	// (0x0004b16c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe36e,	// (0x0004b16c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0004ca2d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0004ca2d) single_mobtv_pg_channel_thumb_pane_g

0xe37a,	// (0x0004b178) single_mobtv_pg_channel_thumb_pane_t1

0xe388,	// (0x0004b186) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0004ca34) single_mobtv_pg_channel_thumb_pane_t

0xcc6c,	// (0x00049a6a) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6c,	// (0x00049a6a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0004c4da) bg_single_mobtv_pg_channel_table_pane_g

0xe396,	// (0x0004b194) single_mobtv_pg_channel_table_pane_t1

0xe3a4,	// (0x0004b1a2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0004ca39) single_mobtv_pg_channel_table_pane_t

0x8df1,	// (0x00045bef) main_mobtv_info_pane_g1_ParamLimits

0x8df1,	// (0x00045bef) main_mobtv_info_pane_g1

0x8e0d,	// (0x00045c0b) main_mobtv_info_pane_t1_ParamLimits

0x8e0d,	// (0x00045c0b) main_mobtv_info_pane_t1

0x8e85,	// (0x00045c83) main_mobtv_info_pane_t2_ParamLimits

0x8e85,	// (0x00045c83) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0004ca43) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0004ca43) main_mobtv_info_pane_t

0x8f14,	// (0x00045d12) wait_bar_pane_cp05

0x8f26,	// (0x00045d24) main_mobtv_loading_pane_g1_ParamLimits

0x8f26,	// (0x00045d24) main_mobtv_loading_pane_g1

0x8f34,	// (0x00045d32) main_mobtv_loading_pane_g2_ParamLimits

0x8f34,	// (0x00045d32) main_mobtv_loading_pane_g2

0x8f40,	// (0x00045d3e) main_mobtv_loading_pane_g3_ParamLimits

0x8f40,	// (0x00045d3e) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0004ca4a) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0004ca4a) main_mobtv_loading_pane_g

0xe3b2,	// (0x0004b1b0) main_mobtv_loading_pane_t1_ParamLimits

0xe3b2,	// (0x0004b1b0) main_mobtv_loading_pane_t1

0xe3ca,	// (0x0004b1c8) main_mobtv_loading_pane_t2_ParamLimits

0xe3ca,	// (0x0004b1c8) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0004ca51) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0004ca51) main_mobtv_loading_pane_t

0x8f4e,	// (0x00045d4c) wait_bar_pane_cp06_ParamLimits

0x8f4e,	// (0x00045d4c) wait_bar_pane_cp06

0xe3ee,	// (0x0004b1ec) main_mobtv_programe_curr_pane_t1

0xe3fc,	// (0x0004b1fa) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0004ca56) main_mobtv_programe_curr_pane_t

0xe40a,	// (0x0004b208) main_mobtv_programe_next_pane_t1

0xe418,	// (0x0004b216) main_mobtv_programe_next_pane_t2

0xe426,	// (0x0004b224) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0004ca5b) main_mobtv_programe_next_pane_t

0xa0d8,	// (0x00046ed6) bg_popup_mobtv_noti_window_pane

0xe434,	// (0x0004b232) popup_mobtv_noti_window_g1

0xe43c,	// (0x0004b23a) popup_mobtv_noti_window_t1

0xe44a,	// (0x0004b248) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0004ca62) popup_mobtv_noti_window_t

0xcc6c,	// (0x00049a6a) bg_popup_mobtv_noti_window_pane_g1

0xa0d8,	// (0x00046ed6) sc_clock_pane

0xa0d8,	// (0x00046ed6) main_fs_bigclock_pane

0x8635,	// (0x00045433) blid2_tripm_pane_t4_ParamLimits

0x8635,	// (0x00045433) blid2_tripm_pane_t4

0x8f5a,	// (0x00045d58) sc_clock_pane_g1_ParamLimits

0x8f5a,	// (0x00045d58) sc_clock_pane_g1

0x8f68,	// (0x00045d66) sc_clock_pane_t1_ParamLimits

0x8f68,	// (0x00045d66) sc_clock_pane_t1

0x8f7b,	// (0x00045d79) sc_clock_pane_t2_ParamLimits

0x8f7b,	// (0x00045d79) sc_clock_pane_t2

0x8f8d,	// (0x00045d8b) sc_clock_pane_t3_ParamLimits

0x8f8d,	// (0x00045d8b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0004ca67) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0004ca67) sc_clock_pane_t

0x97f7,	// (0x000465f5) main_fs_bigclock_indicator_pane_ParamLimits

0x97f7,	// (0x000465f5) main_fs_bigclock_indicator_pane

0x9016,	// (0x00045e14) main_fs_bigclock_pane_g1_ParamLimits

0x9016,	// (0x00045e14) main_fs_bigclock_pane_g1

0x9803,	// (0x00046601) main_fs_bigclock_pane_t1_ParamLimits

0x9803,	// (0x00046601) main_fs_bigclock_pane_t1

0x9815,	// (0x00046613) main_fs_bigclock_pane_t2_ParamLimits

0x9815,	// (0x00046613) main_fs_bigclock_pane_t2

0x9829,	// (0x00046627) main_fs_bigclock_pane_t3_ParamLimits

0x9829,	// (0x00046627) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004cc71) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004cc71) main_fs_bigclock_pane_t

0xec81,	// (0x0004ba7f) main_fs_bigclock_indicator_pane_g1

0xe124,	// (0x0004af22) ncim_query_content_pane_g2_ParamLimits

0xe124,	// (0x0004af22) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0004c9f4) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0004c9f4) ncim_query_content_pane_g

0x8fa1,	// (0x00045d9f) sc_clock_pane_t4_ParamLimits

0x8fa1,	// (0x00045d9f) sc_clock_pane_t4

0xb05e,	// (0x00047e5c) main_radioblah_pane

0xd64c,	// (0x0004a44a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd64c,	// (0x0004a44a) cell_call4_button_pane_t1_copy1

0x8c28,	// (0x00045a26) main_ncimui_pane_t1_ParamLimits

0x8c28,	// (0x00045a26) main_ncimui_pane_t1

0x8c42,	// (0x00045a40) main_ncimui_pane_t2_ParamLimits

0x8c42,	// (0x00045a40) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0004c9ed) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0004c9ed) main_ncimui_pane_t

0xe58e,	// (0x0004b38c) main_radioblah_anim_pane_ParamLimits

0xe58e,	// (0x0004b38c) main_radioblah_anim_pane

0xe59f,	// (0x0004b39d) main_radioblah_info_pane_ParamLimits

0xe59f,	// (0x0004b39d) main_radioblah_info_pane

0xe5b3,	// (0x0004b3b1) main_radioblah_pane_t1_ParamLimits

0xe5b3,	// (0x0004b3b1) main_radioblah_pane_t1

0xe5cf,	// (0x0004b3cd) main_radioblah_pane_t2_ParamLimits

0xe5cf,	// (0x0004b3cd) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0004ca88) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0004ca88) main_radioblah_pane_t

0x9068,	// (0x00045e66) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9068,	// (0x00045e66) main_radioblah_rocker_ctrl_pane

0xe617,	// (0x0004b415) main_radioblah_info_pane_t1_ParamLimits

0xe617,	// (0x0004b415) main_radioblah_info_pane_t1

0x90ad,	// (0x00045eab) main_radioblah_info_pane_t2_ParamLimits

0x90ad,	// (0x00045eab) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0004ca91) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0004ca91) main_radioblah_info_pane_t

0xcc6c,	// (0x00049a6a) main_radioblah_rocker_ctrl_pane_g1

0x915d,	// (0x00045f5b) main_radioblah_rocker_ctrl_pane_g2

0x9165,	// (0x00045f63) main_radioblah_rocker_ctrl_pane_g3

0x916d,	// (0x00045f6b) main_radioblah_rocker_ctrl_pane_g4

0x9175,	// (0x00045f73) main_radioblah_rocker_ctrl_pane_g5

0x917d,	// (0x00045f7b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0004ca9a) main_radioblah_rocker_ctrl_pane_g

0x8bcf,	// (0x000459cd) main_cset_text2_pane_t1_copy1_ParamLimits

0x7418,	// (0x00044216) cam4_image_uncrop_qvga_pane

0x755f,	// (0x0004435d) vid4_image_uncrop_qcif_pane

0x87c3,	// (0x000455c1) cam6_image_uncrop_qvga_pane_ParamLimits

0x87c3,	// (0x000455c1) cam6_image_uncrop_qvga_pane

0xde39,	// (0x0004ac37) vid6_image_uncrop_qcif_pane_ParamLimits

0xde39,	// (0x0004ac37) vid6_image_uncrop_qcif_pane

0xa0d8,	// (0x00046ed6) bg_popup_preview_window_pane_cp03

0xe0d6,	// (0x0004aed4) list_cset_text2_pane

0xe0de,	// (0x0004aedc) main_cset6_text2_pane_g1

0xe0e6,	// (0x0004aee4) main_cset6_text2_pane_t1

0x9185,	// (0x00045f83) list_cset_text2_pane_t1_ParamLimits

0x9185,	// (0x00045f83) list_cset_text2_pane_t1

0xb05e,	// (0x00047e5c) main_radioblah_pane_ParamLimits

0x8f00,	// (0x00045cfe) main_mobtv_info_pane_t3_ParamLimits

0x8f00,	// (0x00045cfe) main_mobtv_info_pane_t3

0x9056,	// (0x00045e54) main_radioblah_pane_g1

0x9081,	// (0x00045e7f) main_radioblah_info_pane_g1

0x9102,	// (0x00045f00) main_radioblah_info_pane_t3_ParamLimits

0x9102,	// (0x00045f00) main_radioblah_info_pane_t3

0x442f,	// (0x0004122d) highlight_cell_cale_month_pane_ParamLimits

0x442f,	// (0x0004122d) highlight_cell_cale_month_pane

0xa0d8,	// (0x00046ed6) main_phob_fisheye_pane

0xcfcb,	// (0x00049dc9) scroll_pane_cp0031_ParamLimits

0xcfcb,	// (0x00049dc9) scroll_pane_cp0031

0xdf47,	// (0x0004ad45) wait_bar_pane_cp08_ParamLimits

0x8998,	// (0x00045796) cset_list_set_pane_copy1_ParamLimits

0xe651,	// (0x0004b44f) highlight_cell_cale_month_pane_g1

0x91a2,	// (0x00045fa0) highlight_cell_cale_month_pane_t1

0xdbcf,	// (0x0004a9cd) list_gen_pane_cp01

0xd813,	// (0x0004a611) scroll_pane_01

0x91b0,	// (0x00045fae) list_single_double_fisheye_pane

0x16b5,	// (0x0003e4b3) list_double_fisheye_pane_g1_ParamLimits

0x16b5,	// (0x0003e4b3) list_double_fisheye_pane_g1

0x16c1,	// (0x0003e4bf) list_double_fisheye_pane_g2_ParamLimits

0x16c1,	// (0x0003e4bf) list_double_fisheye_pane_g2

0x91b9,	// (0x00045fb7) list_double_fisheye_pane_g3_ParamLimits

0x91b9,	// (0x00045fb7) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0004caa7) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0004caa7) list_double_fisheye_pane_g

0x16f2,	// (0x0003e4f0) list_double_fisheye_pane_t1_ParamLimits

0x16f2,	// (0x0003e4f0) list_double_fisheye_pane_t1

0x170d,	// (0x0003e50b) list_double_fisheye_pane_t2_ParamLimits

0x170d,	// (0x0003e50b) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0004cab2) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0004cab2) list_double_fisheye_pane_t

0xa0d8,	// (0x00046ed6) main_call5_pane

0x8fc7,	// (0x00045dc5) sc_swipe_pane_ParamLimits

0x8fc7,	// (0x00045dc5) sc_swipe_pane

0x91d1,	// (0x00045fcf) call5_image_pane_ParamLimits

0x91d1,	// (0x00045fcf) call5_image_pane

0x91e1,	// (0x00045fdf) call5_swipe_1_pane_ParamLimits

0x91e1,	// (0x00045fdf) call5_swipe_1_pane

0x91ed,	// (0x00045feb) call5_swipe_2_pane_ParamLimits

0x91ed,	// (0x00045feb) call5_swipe_2_pane

0x9207,	// (0x00046005) popup_call5_audio_first_window_ParamLimits

0x9207,	// (0x00046005) popup_call5_audio_first_window

0xcecf,	// (0x00049ccd) call5_swipe_1_pane_g1_ParamLimits

0xcecf,	// (0x00049ccd) call5_swipe_1_pane_g1

0xe659,	// (0x0004b457) call5_swipe_1_pane_g2_ParamLimits

0xe659,	// (0x0004b457) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0004cab7) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0004cab7) call5_swipe_1_pane_g

0xe665,	// (0x0004b463) call5_swipe_1_pane_t1_ParamLimits

0xe665,	// (0x0004b463) call5_swipe_1_pane_t1

0xcecf,	// (0x00049ccd) call5_swipe_2_pane_g1_ParamLimits

0xcecf,	// (0x00049ccd) call5_swipe_2_pane_g1

0xe67a,	// (0x0004b478) call5_swipe_2_pane_g2_ParamLimits

0xe67a,	// (0x0004b478) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0004cabc) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0004cabc) call5_swipe_2_pane_g

0xe686,	// (0x0004b484) call5_swipe_2_pane_t1_ParamLimits

0xe686,	// (0x0004b484) call5_swipe_2_pane_t1

0xe69b,	// (0x0004b499) sc_swipe_pane_g1_ParamLimits

0xe69b,	// (0x0004b499) sc_swipe_pane_g1

0xe6a8,	// (0x0004b4a6) sc_swipe_pane_g2_ParamLimits

0xe6a8,	// (0x0004b4a6) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0004cac1) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0004cac1) sc_swipe_pane_g

0xe6b4,	// (0x0004b4b2) sc_swipe_pane_t1_ParamLimits

0xe6b4,	// (0x0004b4b2) sc_swipe_pane_t1

0xa0d8,	// (0x00046ed6) main_cmail_launcher_pane

0x9215,	// (0x00046013) aid_size_cell_cmail_l_ParamLimits

0x9215,	// (0x00046013) aid_size_cell_cmail_l

0x9225,	// (0x00046023) grid_cmail_l_pane_ParamLimits

0x9225,	// (0x00046023) grid_cmail_l_pane

0x9235,	// (0x00046033) cell_cmail_l_pane_ParamLimits

0x9235,	// (0x00046033) cell_cmail_l_pane

0x9249,	// (0x00046047) cell_cmail_l_pane_g1_ParamLimits

0x9249,	// (0x00046047) cell_cmail_l_pane_g1

0x9255,	// (0x00046053) cell_cmail_l_pane_t1_ParamLimits

0x9255,	// (0x00046053) cell_cmail_l_pane_t1

0xe6c9,	// (0x0004b4c7) cell_cmail_l_pane_t2_ParamLimits

0xe6c9,	// (0x0004b4c7) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0004cac6) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0004cac6) cell_cmail_l_pane_t

0xb05e,	// (0x00047e5c) grid_highlight_pane_cp018_ParamLimits

0xb05e,	// (0x00047e5c) grid_highlight_pane_cp018

0x237f,	// (0x0003f17d) main2_pane_ParamLimits

0x237f,	// (0x0003f17d) main2_pane

0xa8bc,	// (0x000476ba) popup_sp_fs_action_menu_bg_pane_g1

0xa8c4,	// (0x000476c2) popup_sp_fs_action_menu_bg_pane_g2

0xa8cc,	// (0x000476ca) popup_sp_fs_action_menu_bg_pane_g3

0xa8d4,	// (0x000476d2) popup_sp_fs_action_menu_bg_pane_g4

0xa8dc,	// (0x000476da) popup_sp_fs_action_menu_bg_pane_g5

0xa8e4,	// (0x000476e2) popup_sp_fs_action_menu_bg_pane_g6

0xa8ec,	// (0x000476ea) popup_sp_fs_action_menu_bg_pane_g7

0xa8f4,	// (0x000476f2) popup_sp_fs_action_menu_bg_pane_g8

0xa8fc,	// (0x000476fa) popup_sp_fs_action_menu_bg_pane_g9

0xa904,	// (0x00047702) popup_sp_fs_action_menu_bg_pane_g10

0xa904,	// (0x00047702) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0004bf84) popup_sp_fs_action_menu_bg_pane_g

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t3_g3_g1

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t3_g3_g2

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004c036) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004c036) list_medium_line_x2_t3_g3_g

0x0ec4,	// (0x0003dcc2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ec4,	// (0x0003dcc2) list_medium_line_x2_t3_g3_t1

0x0ed9,	// (0x0003dcd7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ed9,	// (0x0003dcd7) list_medium_line_x2_t3_g3_t2

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004c03d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004c03d) list_medium_line_x2_t3_g3_t

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t3_g2_g1

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004c044) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004c044) list_medium_line_x2_t3_g2_g

0x0f00,	// (0x0003dcfe) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f00,	// (0x0003dcfe) list_medium_line_x2_t3_g2_t1

0x0f16,	// (0x0003dd14) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f16,	// (0x0003dd14) list_medium_line_x2_t3_g2_t2

0x0f28,	// (0x0003dd26) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0f28,	// (0x0003dd26) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004c049) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004c049) list_medium_line_x2_t3_g2_t

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t4_g4_g1

0x0f45,	// (0x0003dd43) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0f45,	// (0x0003dd43) list_medium_line_x2_t4_g4_g2

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t4_g4_g3

0x0f51,	// (0x0003dd4f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0f51,	// (0x0003dd4f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004c050) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004c050) list_medium_line_x2_t4_g4_g

0x0f5d,	// (0x0003dd5b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0f5d,	// (0x0003dd5b) list_medium_line_x2_t4_g4_t1

0x0f74,	// (0x0003dd72) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0f74,	// (0x0003dd72) list_medium_line_x2_t4_g4_t2

0x0f89,	// (0x0003dd87) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0f89,	// (0x0003dd87) list_medium_line_x2_t4_g4_t3

0x0f9b,	// (0x0003dd99) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f9b,	// (0x0003dd99) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004c059) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004c059) list_medium_line_x2_t4_g4_t

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t2_g4_g1

0x0f45,	// (0x0003dd43) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0f45,	// (0x0003dd43) list_medium_line_x2_t2_g4_g2

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t2_g4_g3

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004c0c0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004c0c0) list_medium_line_x2_t2_g4_g

0x0fad,	// (0x0003ddab) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0fad,	// (0x0003ddab) list_medium_line_x2_t2_g4_t1

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004c0c9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004c0c9) list_medium_line_x2_t2_g4_t

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t2_g3_g1

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t2_g3_g2

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004c036) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004c036) list_medium_line_x2_t2_g3_g

0x0fc2,	// (0x0003ddc0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0fc2,	// (0x0003ddc0) list_medium_line_x2_t2_g3_t1

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004c0ce) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004c0ce) list_medium_line_x2_t2_g3_t

0x45fb,	// (0x000413f9) main_sp_fs_list_pane_ParamLimits

0x45fb,	// (0x000413f9) main_sp_fs_list_pane

0x4607,	// (0x00041405) sp_fs_scroll_pane_ParamLimits

0x4607,	// (0x00041405) sp_fs_scroll_pane

0x0fd7,	// (0x0003ddd5) list_medium_line_x2_t3_t1

0x0fe7,	// (0x0003dde5) list_medium_line_x2_t3_t2

0x0ff5,	// (0x0003ddf3) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004c119) list_medium_line_x2_t3_t

0x1003,	// (0x0003de01) list_medium_line_x3_t4_t1

0x1013,	// (0x0003de11) list_medium_line_x3_t4_t2

0x1021,	// (0x0003de1f) list_medium_line_x3_t4_t3

0x0ff5,	// (0x0003ddf3) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004c120) list_medium_line_x3_t4_t

0x102f,	// (0x0003de2d) list_medium_line_x4_t5_t1

0x103f,	// (0x0003de3d) list_medium_line_x4_t5_t2

0x1021,	// (0x0003de1f) list_medium_line_x4_t5_t3

0x104d,	// (0x0003de4b) list_medium_line_x4_t5_t4

0x0ff5,	// (0x0003ddf3) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004c129) list_medium_line_x4_t5_t

0x0ea0,	// (0x0003dc9e) list_medium_line_t4_g4_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_t4_g4_g1

0x0f51,	// (0x0003dd4f) list_medium_line_t4_g4_g2_ParamLimits

0x0f51,	// (0x0003dd4f) list_medium_line_t4_g4_g2

0x105b,	// (0x0003de59) list_medium_line_t4_g4_g3_ParamLimits

0x105b,	// (0x0003de59) list_medium_line_t4_g4_g3

0x0eb8,	// (0x0003dcb6) list_medium_line_t4_g4_g4_ParamLimits

0x0eb8,	// (0x0003dcb6) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004c134) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004c134) list_medium_line_t4_g4_g

0x1067,	// (0x0003de65) list_medium_line_t4_g4_t1_ParamLimits

0x1067,	// (0x0003de65) list_medium_line_t4_g4_t1

0x107c,	// (0x0003de7a) list_medium_line_t4_g4_t2_ParamLimits

0x107c,	// (0x0003de7a) list_medium_line_t4_g4_t2

0x1091,	// (0x0003de8f) list_medium_line_t4_g4_t3_ParamLimits

0x1091,	// (0x0003de8f) list_medium_line_t4_g4_t3

0x0eeb,	// (0x0003dce9) list_medium_line_t4_g4_t4_ParamLimits

0x0eeb,	// (0x0003dce9) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004c13d) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004c13d) list_medium_line_t4_g4_t

0x4714,	// (0x00041512) chi_dic_find_pane_g1

0x5583,	// (0x00042381) main_tport_pane

0x1338,	// (0x0003e136) list_medium_line_plain_t1

0x1346,	// (0x0003e144) list_medium_line_t2_g2_g1_ParamLimits

0x1346,	// (0x0003e144) list_medium_line_t2_g2_g1

0x1352,	// (0x0003e150) list_medium_line_t2_g2_g2_ParamLimits

0x1352,	// (0x0003e150) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004c7fe) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004c7fe) list_medium_line_t2_g2_g

0x135e,	// (0x0003e15c) list_medium_line_t2_g2_t1_ParamLimits

0x135e,	// (0x0003e15c) list_medium_line_t2_g2_t1

0x1375,	// (0x0003e173) list_medium_line_t2_g2_t2_ParamLimits

0x1375,	// (0x0003e173) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004c803) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004c803) list_medium_line_t2_g2_t

0x1594,	// (0x0003e392) aid_sp_fs_list_icon_a_sm

0x159c,	// (0x0003e39a) aid_sp_fs_list_icon_d

0x15a4,	// (0x0003e3a2) aid_sp_fs_text_primary

0x15ad,	// (0x0003e3ab) aid_sp_fs_text_secondary

0x849d,	// (0x0004529b) list_medium_line

0x849d,	// (0x0004529b) list_medium_line_g2

0x849d,	// (0x0004529b) list_medium_line_g3

0x849d,	// (0x0004529b) list_medium_line_plain

0x849d,	// (0x0004529b) list_medium_line_plain_t2

0x849d,	// (0x0004529b) list_medium_line_plain_t3

0x849d,	// (0x0004529b) list_medium_line_right_icon

0x849d,	// (0x0004529b) list_medium_line_right_iconx2

0x849d,	// (0x0004529b) list_medium_line_t2

0x849d,	// (0x0004529b) list_medium_line_t2_g2

0x849d,	// (0x0004529b) list_medium_line_t2_g3

0x849d,	// (0x0004529b) list_medium_line_t2_right_icon

0x849d,	// (0x0004529b) list_medium_line_t2_right_iconx2

0x849d,	// (0x0004529b) list_medium_line_t3

0x849d,	// (0x0004529b) list_medium_line_t3_g2

0x849d,	// (0x0004529b) list_medium_line_t3_g3

0x849d,	// (0x0004529b) list_medium_line_t3_right_iconx2

0x15b6,	// (0x0003e3b4) list_medium_line_t4_g4

0x84a6,	// (0x000452a4) list_medium_line_x2

0x84a6,	// (0x000452a4) list_medium_line_x2_t2_g2

0x84a6,	// (0x000452a4) list_medium_line_x2_t2_g3

0x84a6,	// (0x000452a4) list_medium_line_x2_t2_g4

0x84a6,	// (0x000452a4) list_medium_line_x2_t3

0x84a6,	// (0x000452a4) list_medium_line_x2_t3_g2

0x84a6,	// (0x000452a4) list_medium_line_x2_t3_g3

0x84a6,	// (0x000452a4) list_medium_line_x2_t3_g4

0x84a6,	// (0x000452a4) list_medium_line_x2_t4_g2

0x84a6,	// (0x000452a4) list_medium_line_x2_t4_g4

0x15bf,	// (0x0003e3bd) list_medium_line_x3

0x15bf,	// (0x0003e3bd) list_medium_line_x3_t4

0x15bf,	// (0x0003e3bd) list_medium_line_x3_t4_g4

0x15b6,	// (0x0003e3b4) list_medium_line_x4_t4

0x15b6,	// (0x0003e3b4) list_medium_line_x4_t4_g7

0x15b6,	// (0x0003e3b4) list_medium_line_x4_t5

0x15c8,	// (0x0003e3c6) list_single_fs_dyc_pane_ParamLimits

0x15c8,	// (0x0003e3c6) list_single_fs_dyc_pane

0x0ea0,	// (0x0003dc9e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x4_t4_g7_g1

0x15e4,	// (0x0003e3e2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x15e4,	// (0x0003e3e2) list_medium_line_x4_t4_g7_g2

0x15f0,	// (0x0003e3ee) list_medium_line_x4_t4_g7_g3_ParamLimits

0x15f0,	// (0x0003e3ee) list_medium_line_x4_t4_g7_g3

0x15ff,	// (0x0003e3fd) list_medium_line_x4_t4_g7_g4_ParamLimits

0x15ff,	// (0x0003e3fd) list_medium_line_x4_t4_g7_g4

0x160b,	// (0x0003e409) list_medium_line_x4_t4_g7_g5_ParamLimits

0x160b,	// (0x0003e409) list_medium_line_x4_t4_g7_g5

0x161a,	// (0x0003e418) list_medium_line_x4_t4_g7_g6_ParamLimits

0x161a,	// (0x0003e418) list_medium_line_x4_t4_g7_g6

0x1629,	// (0x0003e427) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1629,	// (0x0003e427) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0004c9ce) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0004c9ce) list_medium_line_x4_t4_g7_g

0x1635,	// (0x0003e433) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1635,	// (0x0003e433) list_medium_line_x4_t4_g7_t1

0x164a,	// (0x0003e448) list_medium_line_x4_t4_g7_t2_ParamLimits

0x164a,	// (0x0003e448) list_medium_line_x4_t4_g7_t2

0x165f,	// (0x0003e45d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x165f,	// (0x0003e45d) list_medium_line_x4_t4_g7_t3

0x1674,	// (0x0003e472) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1674,	// (0x0003e472) list_medium_line_x4_t4_g7_t4

0x1686,	// (0x0003e484) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1686,	// (0x0003e484) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0004c9dd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0004c9dd) list_medium_line_x4_t4_g7_t

0x1698,	// (0x0003e496) list_single_dyc_row_pane_ParamLimits

0x1698,	// (0x0003e496) list_single_dyc_row_pane

0x91c5,	// (0x00045fc3) call5_gesture_pane_ParamLimits

0x91c5,	// (0x00045fc3) call5_gesture_pane

0x91f9,	// (0x00045ff7) call5_windows_pane_ParamLimits

0x91f9,	// (0x00045ff7) call5_windows_pane

0x926b,	// (0x00046069) call5_swipe_1_pane_cp_ParamLimits

0x926b,	// (0x00046069) call5_swipe_1_pane_cp

0x9277,	// (0x00046075) call5_swipe_2_pane_cp_ParamLimits

0x9277,	// (0x00046075) call5_swipe_2_pane_cp

0xb463,	// (0x00048261) call5_image_pane_cp

0x9283,	// (0x00046081) popup_call5_audio_first_window_cp_ParamLimits

0x9283,	// (0x00046081) popup_call5_audio_first_window_cp

0xe69b,	// (0x0004b499) call5_swipe_1_pane_g1_cp_ParamLimits

0xe69b,	// (0x0004b499) call5_swipe_1_pane_g1_cp

0xe6db,	// (0x0004b4d9) call5_swipe_1_pane_g2_cp

0xe6b4,	// (0x0004b4b2) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b4,	// (0x0004b4b2) call5_swipe_1_pane_t1_cp

0xe69b,	// (0x0004b499) call5_swipe_2_pane_g1_cp_ParamLimits

0xe69b,	// (0x0004b499) call5_swipe_2_pane_g1_cp

0xe6e3,	// (0x0004b4e1) call5_swipe_2_pane_g2_cp

0xe6eb,	// (0x0004b4e9) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6eb,	// (0x0004b4e9) call5_swipe_2_pane_t1_cp

0xb05e,	// (0x00047e5c) main_sp_fs_email_pane

0xe700,	// (0x0004b4fe) main_sp_fs_listscroll_pane_te

0x172f,	// (0x0003e52d) popup_sp_fs_action_menu_pane_ParamLimits

0x172f,	// (0x0003e52d) popup_sp_fs_action_menu_pane

0xcc6c,	// (0x00049a6a) bg_sp_fs_ctrlbar_pane_g1

0xd262,	// (0x0004a060) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd274,	// (0x0004a072) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd26b,	// (0x0004a069) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6c,	// (0x00049a6a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0004cacb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca48,	// (0x00049846) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca48,	// (0x00049846) bg_sp_fs_ctrlbar_ddmenu_pane

0xe709,	// (0x0004b507) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe709,	// (0x0004b507) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe715,	// (0x0004b513) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe715,	// (0x0004b513) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0004cad4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0004cad4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe721,	// (0x0004b51f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe721,	// (0x0004b51f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1771,	// (0x0003e56f) list_medium_line_t2_right_icon_g1

0x1779,	// (0x0003e577) list_medium_line_t2_right_icon_t1

0x1789,	// (0x0003e587) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0004cad9) list_medium_line_t2_right_icon_t

0xc85b,	// (0x00049659) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc85b,	// (0x00049659) bg_sp_fs_ctrlbar_pane

0x92e8,	// (0x000460e6) main_sp_fs_ctrlbar_button_pane_cp01

0x92f0,	// (0x000460ee) main_sp_fs_ctrlbar_ddmenu_pane

0xe773,	// (0x0004b571) main_sp_fs_ctrlbar_pane_g1

0xe77f,	// (0x0004b57d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0004cade) main_sp_fs_ctrlbar_pane_g

0xe78b,	// (0x0004b589) main_sp_fs_ctrlbar_pane_t1

0x92fa,	// (0x000460f8) main_sp_fs_ctrlbar_pane

0x9310,	// (0x0004610e) main_sp_fs_listscroll_pane_te_cp01

0x1797,	// (0x0003e595) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1797,	// (0x0003e595) popup_sp_fs_action_menu_pane_cp01

0xb05e,	// (0x00047e5c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb05e,	// (0x00047e5c) bg_sp_fs_highlight_list_pane_cp01

0x17c1,	// (0x0003e5bf) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x17c1,	// (0x0003e5bf) sp_fs_action_menu_list_gene_pane_g1

0xe7bb,	// (0x0004b5b9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7bb,	// (0x0004b5b9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0004cae8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0004cae8) sp_fs_action_menu_list_gene_pane_g

0x17d0,	// (0x0003e5ce) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x17d0,	// (0x0003e5ce) sp_fs_action_menu_list_gene_pane_t1

0x17e8,	// (0x0003e5e6) sp_fs_action_menu_list_gene_pane_ParamLimits

0x17e8,	// (0x0003e5e6) sp_fs_action_menu_list_gene_pane

0xe7c8,	// (0x0004b5c6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7c8,	// (0x0004b5c6) popup_sp_fs_action_menu_bg_pane

0x1807,	// (0x0003e605) sp_fs_action_menu_list_pane_ParamLimits

0x1807,	// (0x0003e605) sp_fs_action_menu_list_pane

0x1827,	// (0x0003e625) sp_fs_scroll_pane_cp01_ParamLimits

0x1827,	// (0x0003e625) sp_fs_scroll_pane_cp01

0x184d,	// (0x0003e64b) list_medium_line_plain_t2_t1

0x185d,	// (0x0003e65b) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004caed) list_medium_line_plain_t2_t

0x186b,	// (0x0003e669) list_medium_line_plain_t3_t1

0x187b,	// (0x0003e679) list_medium_line_plain_t3_t2

0x1889,	// (0x0003e687) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0004caf2) list_medium_line_plain_t3_t

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t2_g2_g1

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004c044) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004c044) list_medium_line_x2_t2_g2_g

0x1067,	// (0x0003de65) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1067,	// (0x0003de65) list_medium_line_x2_t2_g2_t1

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0004caf9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0004caf9) list_medium_line_x2_t2_g2_t

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t4_g2_g1

0x1897,	// (0x0003e695) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1897,	// (0x0003e695) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004cafe) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004cafe) list_medium_line_x2_t4_g2_g

0x18a8,	// (0x0003e6a6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x18a8,	// (0x0003e6a6) list_medium_line_x2_t4_g2_t1

0x18c2,	// (0x0003e6c0) list_medium_line_x2_t4_g2_t2_ParamLimits

0x18c2,	// (0x0003e6c0) list_medium_line_x2_t4_g2_t2

0x18d7,	// (0x0003e6d5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x18d7,	// (0x0003e6d5) list_medium_line_x2_t4_g2_t3

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0004cb03) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0004cb03) list_medium_line_x2_t4_g2_t

0x18ec,	// (0x0003e6ea) list_medium_line_t3_right_iconx2_g1

0x1771,	// (0x0003e56f) list_medium_line_t3_right_iconx2_g2

0x18f4,	// (0x0003e6f2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004cb0c) list_medium_line_t3_right_iconx2_g

0x18fc,	// (0x0003e6fa) list_medium_line_t3_right_iconx2_t1

0x190c,	// (0x0003e70a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0004cb13) list_medium_line_t3_right_iconx2_t

0x0ea0,	// (0x0003dc9e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x3_t4_g4_g1

0x0eac,	// (0x0003dcaa) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0eac,	// (0x0003dcaa) list_medium_line_x3_t4_g4_g2

0x0f51,	// (0x0003dd4f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f51,	// (0x0003dd4f) list_medium_line_x3_t4_g4_g3

0x191a,	// (0x0003e718) list_medium_line_x3_t4_g4_g4_ParamLimits

0x191a,	// (0x0003e718) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0004cb18) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0004cb18) list_medium_line_x3_t4_g4_g

0x1926,	// (0x0003e724) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1926,	// (0x0003e724) list_medium_line_x3_t4_g4_t1

0x193d,	// (0x0003e73b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x193d,	// (0x0003e73b) list_medium_line_x3_t4_g4_t2

0x107c,	// (0x0003de7a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x107c,	// (0x0003de7a) list_medium_line_x3_t4_g4_t3

0x1952,	// (0x0003e750) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1952,	// (0x0003e750) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0004cb21) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0004cb21) list_medium_line_x3_t4_g4_t

0x196f,	// (0x0003e76d) list_single_dyc_row_text_pane_t1_ParamLimits

0x196f,	// (0x0003e76d) list_single_dyc_row_text_pane_t1

0x19a6,	// (0x0003e7a4) list_single_dyc_row_text_pane_t2_ParamLimits

0x19a6,	// (0x0003e7a4) list_single_dyc_row_text_pane_t2

0x1a1c,	// (0x0003e81a) list_single_dyc_row_text_pane_t3_ParamLimits

0x1a1c,	// (0x0003e81a) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0004cb2a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0004cb2a) list_single_dyc_row_text_pane_t

0x1aed,	// (0x0003e8eb) list_single_dyc_row_pane_g1_ParamLimits

0x1aed,	// (0x0003e8eb) list_single_dyc_row_pane_g1

0x1af9,	// (0x0003e8f7) list_single_dyc_row_pane_g2_ParamLimits

0x1af9,	// (0x0003e8f7) list_single_dyc_row_pane_g2

0x1b05,	// (0x0003e903) list_single_dyc_row_pane_g3_ParamLimits

0x1b05,	// (0x0003e903) list_single_dyc_row_pane_g3

0x1b11,	// (0x0003e90f) list_single_dyc_row_pane_g4_ParamLimits

0x1b11,	// (0x0003e90f) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004cb37) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004cb37) list_single_dyc_row_pane_g

0x1b1d,	// (0x0003e91b) list_single_dyc_row_text_pane_ParamLimits

0x1b1d,	// (0x0003e91b) list_single_dyc_row_text_pane

0xa0d8,	// (0x00046ed6) bg_sp_fs_scroll_pane

0xe7d6,	// (0x0004b5d4) thumb_sp_fs_scroll_pane

0x1346,	// (0x0003e144) list_medium_line_g1_ParamLimits

0x1346,	// (0x0003e144) list_medium_line_g1

0x1b3c,	// (0x0003e93a) list_medium_line_t1_ParamLimits

0x1b3c,	// (0x0003e93a) list_medium_line_t1

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_g1

0x0eac,	// (0x0003dcaa) list_medium_line_x2_g2_ParamLimits

0x0eac,	// (0x0003dcaa) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004cb40) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004cb40) list_medium_line_x2_g

0x1b51,	// (0x0003e94f) list_medium_line_x2_t1_ParamLimits

0x1b51,	// (0x0003e94f) list_medium_line_x2_t1

0x0ea0,	// (0x0003dc9e) list_medium_line_x3_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x3_g1

0x0eac,	// (0x0003dcaa) list_medium_line_x3_g2_ParamLimits

0x0eac,	// (0x0003dcaa) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004cb40) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004cb40) list_medium_line_x3_g

0x1b51,	// (0x0003e94f) list_medium_line_x3_t1_ParamLimits

0x1b51,	// (0x0003e94f) list_medium_line_x3_t1

0xe7df,	// (0x0004b5dd) thumb_sp_fs_scroll_pane_g1

0xe7e8,	// (0x0004b5e6) thumb_sp_fs_scroll_pane_g2

0xe7f1,	// (0x0004b5ef) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004cb45) thumb_sp_fs_scroll_pane_g

0xe7df,	// (0x0004b5dd) bg_sp_fs_scroll_pane_g1

0xe7e8,	// (0x0004b5e6) bg_sp_fs_scroll_pane_g2

0xe7f1,	// (0x0004b5ef) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004cb45) bg_sp_fs_scroll_pane_g

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0ea0,	// (0x0003dc9e) list_medium_line_x2_t3_g4_g1

0x0f45,	// (0x0003dd43) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0f45,	// (0x0003dd43) list_medium_line_x2_t3_g4_g2

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0eac,	// (0x0003dcaa) list_medium_line_x2_t3_g4_g3

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0eb8,	// (0x0003dcb6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004c0c0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004c0c0) list_medium_line_x2_t3_g4_g

0x1b67,	// (0x0003e965) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1b67,	// (0x0003e965) list_medium_line_x2_t3_g4_t1

0x1b7d,	// (0x0003e97b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1b7d,	// (0x0003e97b) list_medium_line_x2_t3_g4_t2

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0eeb,	// (0x0003dce9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004cb4c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004cb4c) list_medium_line_x2_t3_g4_t

0x1346,	// (0x0003e144) list_medium_line_g2_g1_ParamLimits

0x1346,	// (0x0003e144) list_medium_line_g2_g1

0x1352,	// (0x0003e150) list_medium_line_g2_g2_ParamLimits

0x1352,	// (0x0003e150) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004c7fe) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004c7fe) list_medium_line_g2_g

0x1b97,	// (0x0003e995) list_medium_line_g2_t1_ParamLimits

0x1b97,	// (0x0003e995) list_medium_line_g2_t1

0x1346,	// (0x0003e144) list_medium_line_t3_g2_g1_ParamLimits

0x1346,	// (0x0003e144) list_medium_line_t3_g2_g1

0x1352,	// (0x0003e150) list_medium_line_t3_g2_g2_ParamLimits

0x1352,	// (0x0003e150) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004c7fe) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004c7fe) list_medium_line_t3_g2_g

0x1bac,	// (0x0003e9aa) list_medium_line_t3_g2_t1_ParamLimits

0x1bac,	// (0x0003e9aa) list_medium_line_t3_g2_t1

0x1bc6,	// (0x0003e9c4) list_medium_line_t3_g2_t2_ParamLimits

0x1bc6,	// (0x0003e9c4) list_medium_line_t3_g2_t2

0x1bdb,	// (0x0003e9d9) list_medium_line_t3_g2_t3_ParamLimits

0x1bdb,	// (0x0003e9d9) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004cb53) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004cb53) list_medium_line_t3_g2_t

0x1771,	// (0x0003e56f) list_medium_line_right_icon_g1

0x1bf1,	// (0x0003e9ef) list_medium_line_right_icon_t1

0x1346,	// (0x0003e144) list_medium_line_t2_g1_ParamLimits

0x1346,	// (0x0003e144) list_medium_line_t2_g1

0x1bff,	// (0x0003e9fd) list_medium_line_t2_t1_ParamLimits

0x1bff,	// (0x0003e9fd) list_medium_line_t2_t1

0x1c19,	// (0x0003ea17) list_medium_line_t2_t2_ParamLimits

0x1c19,	// (0x0003ea17) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004cb5a) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004cb5a) list_medium_line_t2_t

0x1346,	// (0x0003e144) list_medium_line_t3_g1_ParamLimits

0x1346,	// (0x0003e144) list_medium_line_t3_g1

0x1c2e,	// (0x0003ea2c) list_medium_line_t3_t1_ParamLimits

0x1c2e,	// (0x0003ea2c) list_medium_line_t3_t1

0x1c45,	// (0x0003ea43) list_medium_line_t3_t2_ParamLimits

0x1c45,	// (0x0003ea43) list_medium_line_t3_t2

0x1c5a,	// (0x0003ea58) list_medium_line_t3_t3_ParamLimits

0x1c5a,	// (0x0003ea58) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004cb5f) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004cb5f) list_medium_line_t3_t

0x1346,	// (0x0003e144) list_medium_line_g3_g1_ParamLimits

0x1346,	// (0x0003e144) list_medium_line_g3_g1

0x1c6c,	// (0x0003ea6a) list_medium_line_g3_g2_ParamLimits

0x1c6c,	// (0x0003ea6a) list_medium_line_g3_g2

0x1352,	// (0x0003e150) list_medium_line_g3_g3_ParamLimits

0x1352,	// (0x0003e150) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004cb66) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004cb66) list_medium_line_g3_g

0x1c78,	// (0x0003ea76) list_medium_line_g3_t1_ParamLimits

0x1c78,	// (0x0003ea76) list_medium_line_g3_t1

0x1346,	// (0x0003e144) list_medium_line_t2_g3_g1_ParamLimits

0x1346,	// (0x0003e144) list_medium_line_t2_g3_g1

0x1c6c,	// (0x0003ea6a) list_medium_line_t2_g3_g2_ParamLimits

0x1c6c,	// (0x0003ea6a) list_medium_line_t2_g3_g2

0x1352,	// (0x0003e150) list_medium_line_t2_g3_g3_ParamLimits

0x1352,	// (0x0003e150) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004cb66) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004cb66) list_medium_line_t2_g3_g

0x1c8d,	// (0x0003ea8b) list_medium_line_t2_g3_t1_ParamLimits

0x1c8d,	// (0x0003ea8b) list_medium_line_t2_g3_t1

0x1ca7,	// (0x0003eaa5) list_medium_line_t2_g3_t2_ParamLimits

0x1ca7,	// (0x0003eaa5) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004cb6d) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004cb6d) list_medium_line_t2_g3_t

0x1346,	// (0x0003e144) list_medium_line_t3_g3_g1_ParamLimits

0x1346,	// (0x0003e144) list_medium_line_t3_g3_g1

0x1c6c,	// (0x0003ea6a) list_medium_line_t3_g3_g2_ParamLimits

0x1c6c,	// (0x0003ea6a) list_medium_line_t3_g3_g2

0x1352,	// (0x0003e150) list_medium_line_t3_g3_g3_ParamLimits

0x1352,	// (0x0003e150) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004cb66) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004cb66) list_medium_line_t3_g3_g

0x1cbc,	// (0x0003eaba) list_medium_line_t3_g3_t1_ParamLimits

0x1cbc,	// (0x0003eaba) list_medium_line_t3_g3_t1

0x1cd5,	// (0x0003ead3) list_medium_line_t3_g3_t2_ParamLimits

0x1cd5,	// (0x0003ead3) list_medium_line_t3_g3_t2

0x1ceb,	// (0x0003eae9) list_medium_line_t3_g3_t3_ParamLimits

0x1ceb,	// (0x0003eae9) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004cb72) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004cb72) list_medium_line_t3_g3_t

0x18ec,	// (0x0003e6ea) list_medium_line_right_iconx2_g1

0x1771,	// (0x0003e56f) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004cb79) list_medium_line_right_iconx2_g

0x1d01,	// (0x0003eaff) list_medium_line_right_iconx2_t1

0x18ec,	// (0x0003e6ea) list_medium_line_t2_right_iconx2_g1

0x1771,	// (0x0003e56f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004cb79) list_medium_line_t2_right_iconx2_g

0x1d0f,	// (0x0003eb0d) list_medium_line_t2_right_iconx2_t1

0x1d1f,	// (0x0003eb1d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004cb7e) list_medium_line_t2_right_iconx2_t

0x1d2d,	// (0x0003eb2b) list_medium_line_x4_t4_t1

0x1d3b,	// (0x0003eb39) list_medium_line_x4_t4_t2

0x1d4b,	// (0x0003eb49) list_medium_line_x4_t4_t3

0x1d5b,	// (0x0003eb59) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004cb83) list_medium_line_x4_t4_t

0x934b,	// (0x00046149) tport_appsw_pane_ParamLimits

0x934b,	// (0x00046149) tport_appsw_pane

0x9359,	// (0x00046157) tport_contact_pane_ParamLimits

0x9359,	// (0x00046157) tport_contact_pane

0x9369,	// (0x00046167) tport_listscroll_pane_ParamLimits

0x9369,	// (0x00046167) tport_listscroll_pane

0x9379,	// (0x00046177) cell_tport_appsw_pane_ParamLimits

0x9379,	// (0x00046177) cell_tport_appsw_pane

0xcf54,	// (0x00049d52) tport_appsw_pane_g1_ParamLimits

0xcf54,	// (0x00049d52) tport_appsw_pane_g1

0xe7fa,	// (0x0004b5f8) tport_contact_pane_g1

0xe1aa,	// (0x0004afa8) tport_contact_pane_t1

0xe803,	// (0x0004b601) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004cb8c) tport_contact_pane_t

0xe811,	// (0x0004b60f) list_tport_pane

0xe81a,	// (0x0004b618) scroll_pane_cp_030

0x93ac,	// (0x000461aa) cell_tport_appsw_pane_g1

0x93bc,	// (0x000461ba) cell_tport_appsw_pane_t1

0x93ca,	// (0x000461c8) grid_highlight_pane_cp019

0x93d2,	// (0x000461d0) list_tport_double_graphic_pane_ParamLimits

0x93d2,	// (0x000461d0) list_tport_double_graphic_pane

0xb05e,	// (0x00047e5c) list_highlight_pane_cp023_ParamLimits

0xb05e,	// (0x00047e5c) list_highlight_pane_cp023

0x93e3,	// (0x000461e1) list_tport_double_graphic_pane_g1_ParamLimits

0x93e3,	// (0x000461e1) list_tport_double_graphic_pane_g1

0x93f0,	// (0x000461ee) list_tport_double_graphic_pane_t1_ParamLimits

0x93f0,	// (0x000461ee) list_tport_double_graphic_pane_t1

0x9405,	// (0x00046203) list_tport_double_graphic_pane_t2_ParamLimits

0x9405,	// (0x00046203) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004cb98) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004cb98) list_tport_double_graphic_pane_t

0xa0d8,	// (0x00046ed6) main_cale_note_pane

0x77b6,	// (0x000445b4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x77b6,	// (0x000445b4) cell_vitu2_function_top_wide_pane_cp01

0x8f14,	// (0x00045d12) wait_bar_pane_cp05_ParamLimits

0xb05e,	// (0x00047e5c) listscroll_cmail_pane

0xe823,	// (0x0004b621) list_cmail_pane

0x9417,	// (0x00046215) list_cmail_body_pane

0x9437,	// (0x00046235) list_single_cmail_header_caption_pane

0x9463,	// (0x00046261) list_single_cmail_header_detail_pane_ParamLimits

0x9463,	// (0x00046261) list_single_cmail_header_detail_pane

0xe833,	// (0x0004b631) list_single_cmail_header_caption_pane_t1

0x1d6b,	// (0x0003eb69) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1d6b,	// (0x0003eb69) list_single_cmail_header_detail_pane_g1

0x1d81,	// (0x0003eb7f) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1d81,	// (0x0003eb7f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004cb9d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004cb9d) list_single_cmail_header_detail_pane_g

0x1d8d,	// (0x0003eb8b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1d8d,	// (0x0003eb8b) list_single_cmail_header_detail_pane_t1

0x1ded,	// (0x0003ebeb) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1ded,	// (0x0003ebeb) list_single_cmail_header_editor_pane_bg

0xe34b,	// (0x0004b149) list_cmail_body_pane_g1

0xe857,	// (0x0004b655) list_cmail_body_pane_t1

0xd6f9,	// (0x0004a4f7) list_single_cmail_header_editor_pane_bg_g1

0xac3a,	// (0x00047a38) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd709,	// (0x0004a507) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd701,	// (0x0004a4ff) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd91d,	// (0x0004a71b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd729,	// (0x0004a527) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd719,	// (0x0004a517) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd721,	// (0x0004a51f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac1a,	// (0x00047a18) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9499,	// (0x00046297) calenote_gesture_pane_ParamLimits

0x9499,	// (0x00046297) calenote_gesture_pane

0x94b3,	// (0x000462b1) calenote_window_pane_ParamLimits

0x94b3,	// (0x000462b1) calenote_window_pane

0xe865,	// (0x0004b663) popup_note_window_cp01

0x94cb,	// (0x000462c9) calenote_swipe_1_pane_ParamLimits

0x94cb,	// (0x000462c9) calenote_swipe_1_pane

0x9277,	// (0x00046075) calenote_swipe_2_pane_ParamLimits

0x9277,	// (0x00046075) calenote_swipe_2_pane

0xe69b,	// (0x0004b499) calenote_swipe_1_pane_g1_ParamLimits

0xe69b,	// (0x0004b499) calenote_swipe_1_pane_g1

0xe6a8,	// (0x0004b4a6) calenote_swipe_1_pane_g2_ParamLimits

0xe6a8,	// (0x0004b4a6) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0004cac1) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0004cac1) calenote_swipe_1_pane_g

0xe877,	// (0x0004b675) calenote_swipe_1_pane_t1_ParamLimits

0xe877,	// (0x0004b675) calenote_swipe_1_pane_t1

0xe69b,	// (0x0004b499) calenote_swipe_2_pane_g1_ParamLimits

0xe69b,	// (0x0004b499) calenote_swipe_2_pane_g1

0xe896,	// (0x0004b694) calenote_swipe_2_pane_g2_ParamLimits

0xe896,	// (0x0004b694) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004cba9) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004cba9) calenote_swipe_2_pane_g

0xe8a2,	// (0x0004b6a0) calenote_swipe_2_pane_t1_ParamLimits

0xe8a2,	// (0x0004b6a0) calenote_swipe_2_pane_t1

0xa0d8,	// (0x00046ed6) main_mup_navstr_pane

0x653b,	// (0x00043339) main_mup3_pane_t7_ParamLimits

0x653b,	// (0x00043339) main_mup3_pane_t7

0x6f40,	// (0x00043d3e) main_mp4_pane_g6_ParamLimits

0x6f40,	// (0x00043d3e) main_mp4_pane_g6

0x72b2,	// (0x000440b0) main_image3_pane_t4_ParamLimits

0x72b2,	// (0x000440b0) main_image3_pane_t4

0x94de,	// (0x000462dc) popup_navstr_preview_pane_ParamLimits

0x94de,	// (0x000462dc) popup_navstr_preview_pane

0x94ea,	// (0x000462e8) scroll_navstr_pane_ParamLimits

0x94ea,	// (0x000462e8) scroll_navstr_pane

0xa0d8,	// (0x00046ed6) bg_popup_preview_window_pane_cp04

0xe8c9,	// (0x0004b6c7) popup_navstr_preview_pane_t1

0x94f6,	// (0x000462f4) scroll_navstr_pane_g1_ParamLimits

0x94f6,	// (0x000462f4) scroll_navstr_pane_g1

0x9503,	// (0x00046301) scroll_navstr_pane_t1_ParamLimits

0x9503,	// (0x00046301) scroll_navstr_pane_t1

0xe86e,	// (0x0004b66c) bg_button_pane_cp014

0xe86e,	// (0x0004b66c) bg_button_pane_cp030

0x16d5,	// (0x0003e4d3) list_double_fisheye_pane_g4_ParamLimits

0x16d5,	// (0x0003e4d3) list_double_fisheye_pane_g4

0x16e1,	// (0x0003e4df) list_double_fisheye_pane_g5_ParamLimits

0x16e1,	// (0x0003e4df) list_double_fisheye_pane_g5

0xd31c,	// (0x0004a11a) sp_fs_scroll_pane_cp03

0xe773,	// (0x0004b571) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe77f,	// (0x0004b57d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0004cade) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe78b,	// (0x0004b589) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe82b,	// (0x0004b629) sp_fs_scroll_pane_cp02

0xa927,	// (0x00047725) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa927,	// (0x00047725) popup_sp_fs_calendar_preview_list_single_pane

0xa0d8,	// (0x00046ed6) main_cam6_pano_pane

0xb05e,	// (0x00047e5c) main_mup3_pane_ParamLimits

0xa0d8,	// (0x00046ed6) main_phacti_pane

0x8de9,	// (0x00045be7) bg_button_pane_cp11

0x8e01,	// (0x00045bff) main_mobtv_info_pane_g2_ParamLimits

0x8e01,	// (0x00045bff) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0004ca3e) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0004ca3e) main_mobtv_info_pane_g

0x8fb3,	// (0x00045db1) sc_clock_pane_t5_ParamLimits

0x8fb3,	// (0x00045db1) sc_clock_pane_t5

0x9056,	// (0x00045e54) main_radioblah_pane_g1_ParamLimits

0xe5e7,	// (0x0004b3e5) main_radioblah_pane_t3_ParamLimits

0xe5e7,	// (0x0004b3e5) main_radioblah_pane_t3

0xe5ff,	// (0x0004b3fd) main_radioblah_pane_t4_ParamLimits

0xe5ff,	// (0x0004b3fd) main_radioblah_pane_t4

0x9074,	// (0x00045e72) main_radioblah_text_pane_ParamLimits

0x9074,	// (0x00045e72) main_radioblah_text_pane

0x9081,	// (0x00045e7f) main_radioblah_info_pane_g1_ParamLimits

0x9116,	// (0x00045f14) main_radioblah_info_pane_t4_ParamLimits

0x9116,	// (0x00045f14) main_radioblah_info_pane_t4

0xb05e,	// (0x00047e5c) main_sp_fs_calendar_pane

0x9515,	// (0x00046313) main_phacti_pane_g1

0x951d,	// (0x0004631b) phacti_note_pane_ParamLimits

0x951d,	// (0x0004631b) phacti_note_pane

0xe8e0,	// (0x0004b6de) phacti_term_pane_ParamLimits

0xe8e0,	// (0x0004b6de) phacti_term_pane

0xe8f5,	// (0x0004b6f3) phacti_note_pane_t1_ParamLimits

0xe8f5,	// (0x0004b6f3) phacti_note_pane_t1

0x1e04,	// (0x0003ec02) phacti_term_pane_g1

0x1e0c,	// (0x0003ec0a) phacti_term_pane_t1_ParamLimits

0x1e0c,	// (0x0003ec0a) phacti_term_pane_t1

0xe90c,	// (0x0004b70a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa3b,	// (0x00047839) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004cbb3) popup_sp_fs_calendar_preview_list_single_pane_g

0xe914,	// (0x0004b712) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe914,	// (0x0004b712) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe929,	// (0x0004b727) aid_popup_sp_fs_bg_corner_pane

0xcc6c,	// (0x00049a6a) popup_sp_fs_calendar_preview_bg_pane_g1

0xa0d8,	// (0x00046ed6) popup_sp_fs_calendar_preview_bg_pane

0xe931,	// (0x0004b72f) popup_sp_fs_calendar_preview_list_pane

0xc85b,	// (0x00049659) bg_main_sp_fs_cale_pane_ParamLimits

0xc85b,	// (0x00049659) bg_main_sp_fs_cale_pane

0x1e3f,	// (0x0003ec3d) listscroll_cale_mrui_pane_ParamLimits

0x1e3f,	// (0x0003ec3d) listscroll_cale_mrui_pane

0x1e54,	// (0x0003ec52) listscroll_sp_fs_schedule_track_pane

0x1e5d,	// (0x0003ec5b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1e5d,	// (0x0003ec5b) main_sp_fs_ctrlbar_pane_cp01

0xe939,	// (0x0004b737) main_sp_fs_ribbon_pane

0x1e70,	// (0x0003ec6e) popup_sp_fs_cale_preview_window

0x9580,	// (0x0004637e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9580,	// (0x0004637e) list_single_sp_fs_schedule_track_pane

0xdb26,	// (0x0004a924) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdb26,	// (0x0004a924) bg_sp_fs_highlight_list_pane_cp03

0x95a3,	// (0x000463a1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x95a3,	// (0x000463a1) list_single_sp_fs_schedule_track_pane_g1

0x95af,	// (0x000463ad) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x95af,	// (0x000463ad) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004cbb8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004cbb8) list_single_sp_fs_schedule_track_pane_g

0x95bb,	// (0x000463b9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x95bb,	// (0x000463b9) list_single_sp_fs_schedule_track_pane_t1

0x95d3,	// (0x000463d1) sp_fs_schedule_track_pane_ParamLimits

0x95d3,	// (0x000463d1) sp_fs_schedule_track_pane

0xe953,	// (0x0004b751) sp_fs_schedule_track_pane_g1

0xe95b,	// (0x0004b759) sp_fs_schedule_track_pane_g2

0xe963,	// (0x0004b761) sp_fs_schedule_track_pane_g3

0xe96b,	// (0x0004b769) sp_fs_schedule_track_pane_g4

0xe973,	// (0x0004b771) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004cbbd) sp_fs_schedule_track_pane_g

0xd6f9,	// (0x0004a4f7) bg_sp_fs_schedule_viewer_highlight_g1

0xac3a,	// (0x00047a38) bg_sp_fs_schedule_viewer_highlight_g2

0xd701,	// (0x0004a4ff) bg_sp_fs_schedule_viewer_highlight_g3

0xd709,	// (0x0004a507) bg_sp_fs_schedule_viewer_highlight_g4

0xd91d,	// (0x0004a71b) bg_sp_fs_schedule_viewer_highlight_g5

0xd719,	// (0x0004a517) bg_sp_fs_schedule_viewer_highlight_g6

0xd721,	// (0x0004a51f) bg_sp_fs_schedule_viewer_highlight_g7

0xd729,	// (0x0004a527) bg_sp_fs_schedule_viewer_highlight_g8

0xac1a,	// (0x00047a18) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004cbc8) bg_sp_fs_schedule_viewer_highlight_g

0xa0d8,	// (0x00046ed6) bg_main_sp_fs_ribbon_pane

0x95e3,	// (0x000463e1) main_sp_fs_ribbon_pane_g1

0xe97b,	// (0x0004b779) main_sp_fs_ribbon_pane_t1

0x95ec,	// (0x000463ea) main_sp_fs_ribbon_pane_t2

0xe98a,	// (0x0004b788) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004cbdb) main_sp_fs_ribbon_pane_t

0xe999,	// (0x0004b797) main_sp_fs_ribbon_scheduler_pane

0xe9a1,	// (0x0004b79f) bg_main_sp_fs_ribbon_pane_g1

0xe9aa,	// (0x0004b7a8) bg_main_sp_fs_ribbon_pane_g2

0xe9b3,	// (0x0004b7b1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004cbe2) bg_main_sp_fs_ribbon_pane_g

0xe9bb,	// (0x0004b7b9) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c4,	// (0x0004b7c2) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cd,	// (0x0004b7cb) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004cbe9) main_sp_fs_ribbon_scheduler_pane_g

0xe9d6,	// (0x0004b7d4) list_cale_mrui_pane

0x95fb,	// (0x000463f9) sp_fs_scroll_pane_cp07_ParamLimits

0x95fb,	// (0x000463f9) sp_fs_scroll_pane_cp07

0x9617,	// (0x00046415) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9617,	// (0x00046415) bg_sp_fs_schedule_viewer_highlight

0xe9e3,	// (0x0004b7e1) list_single_sp_fs_schedule_track_pane_cp01

0xe9eb,	// (0x0004b7e9) list_sp_fs_schedule_track_pane

0xe9f3,	// (0x0004b7f1) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f3,	// (0x0004b7f1) sp_fs_scroll_pane_cp06

0xcc6c,	// (0x00049a6a) bgmain_sp_fs_calendar_pane_g1

0x1e82,	// (0x0003ec80) list_single_cale_mrui_pane_ParamLimits

0x1e82,	// (0x0003ec80) list_single_cale_mrui_pane

0x1eb0,	// (0x0003ecae) list_single_cale_mrui_row_pane_ParamLimits

0x1eb0,	// (0x0003ecae) list_single_cale_mrui_row_pane

0x1ebd,	// (0x0003ecbb) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1ebd,	// (0x0003ecbb) list_single_cale_mrui_row_pane_g1

0x1ef5,	// (0x0003ecf3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1ef5,	// (0x0003ecf3) list_single_cale_mrui_row_pane_t1

0x1f07,	// (0x0003ed05) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1f07,	// (0x0003ed05) list_single_cale_mrui_row_pane_t2

0x1f6d,	// (0x0003ed6b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1f6d,	// (0x0003ed6b) list_single_cale_mrui_row_pane_t3

0x1f9c,	// (0x0003ed9a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1f9c,	// (0x0003ed9a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004cbf7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004cbf7) list_single_cale_mrui_row_pane_t

0x1fcb,	// (0x0003edc9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1fcb,	// (0x0003edc9) list_single_cmail_header_editor_pane_bg_cp01

0x1feb,	// (0x0003ede9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1feb,	// (0x0003ede9) list_single_cmail_header_editor_pane_bg_cp02

0x9624,	// (0x00046422) main_radioblah_text_pane_t1_ParamLimits

0x9624,	// (0x00046422) main_radioblah_text_pane_t1

0xea12,	// (0x0004b810) cam6_indi_pane_cp01

0xea1a,	// (0x0004b818) cam6_mode_pane_cp01

0xea2a,	// (0x0004b828) cam6_pano_pane

0xea33,	// (0x0004b831) cam6_zoom_pane_cp01

0xea3b,	// (0x0004b839) cam6_pano_image_pane

0xea46,	// (0x0004b844) cam6_pano_pane_g1

0xe34b,	// (0x0004b149) cam6_pano_pane_g2

0xea4f,	// (0x0004b84d) cam6_pano_pane_g3

0xea58,	// (0x0004b856) cam6_pano_pane_g4

0xd24f,	// (0x0004a04d) cam6_pano_pane_g5

0xea61,	// (0x0004b85f) cam6_pano_pane_g6

0xea22,	// (0x0004b820) cam6_pano_pane_g7

0xea6b,	// (0x0004b869) cam6_pano_pane_g8

0xea74,	// (0x0004b872) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004cc00) cam6_pano_pane_g

0xa0d8,	// (0x00046ed6) main_browser_tag_pane

0xe8c1,	// (0x0004b6bf) grid_navstr_albumart_pane

0xea7f,	// (0x0004b87d) cell_navstr_albumart_pane_ParamLimits

0xea7f,	// (0x0004b87d) cell_navstr_albumart_pane

0xea9f,	// (0x0004b89d) cell_navstr_albumart_pane_g1

0xc66c,	// (0x0004946a) cell_navstr_albumart_pane_g2

0xc67c,	// (0x0004947a) cell_navstr_albumart_pane_g3

0xc674,	// (0x00049472) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004cc13) cell_navstr_albumart_pane_g

0x963f,	// (0x0004643d) bt_list_pane_ParamLimits

0x963f,	// (0x0004643d) bt_list_pane

0x965f,	// (0x0004645d) bt_list_pane_t1

0x966e,	// (0x0004646c) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004cc1c) bt_list_pane_t

0xa0d8,	// (0x00046ed6) main_cale_prevew_pane

0x967d,	// (0x0004647b) popup_cale_preview_window_ParamLimits

0x967d,	// (0x0004647b) popup_cale_preview_window

0xb05e,	// (0x00047e5c) bg_popup_preview_window_pane_cp05_ParamLimits

0xb05e,	// (0x00047e5c) bg_popup_preview_window_pane_cp05

0xeaa7,	// (0x0004b8a5) list_cale_preview_pane_ParamLimits

0xeaa7,	// (0x0004b8a5) list_cale_preview_pane

0x9696,	// (0x00046494) list_double_cale_preview_pane_ParamLimits

0x9696,	// (0x00046494) list_double_cale_preview_pane

0x96a8,	// (0x000464a6) list_single_cale_preview_pane_ParamLimits

0x96a8,	// (0x000464a6) list_single_cale_preview_pane

0x96be,	// (0x000464bc) list_single_cale_preview_pane_g1

0x96c6,	// (0x000464c4) list_single_cale_preview_pane_t1_ParamLimits

0x96c6,	// (0x000464c4) list_single_cale_preview_pane_t1

0x96db,	// (0x000464d9) list_double_cale_preview_pane_g1

0x96e3,	// (0x000464e1) list_double_cale_preview_pane_t1_ParamLimits

0x96e3,	// (0x000464e1) list_double_cale_preview_pane_t1

0x96f8,	// (0x000464f6) list_double_cale_preview_pane_t2_ParamLimits

0x96f8,	// (0x000464f6) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004cc21) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004cc21) list_double_cale_preview_pane_t

0xa0d8,	// (0x00046ed6) main_ezdial_pane

0xb05e,	// (0x00047e5c) main_sp_fs_email_pane_ParamLimits

0x9291,	// (0x0004608f) cmail_ddmenu_btn01_pane_ParamLimits

0x9291,	// (0x0004608f) cmail_ddmenu_btn01_pane

0x92ae,	// (0x000460ac) cmail_ddmenu_btn02_pane_ParamLimits

0x92ae,	// (0x000460ac) cmail_ddmenu_btn02_pane

0x92cc,	// (0x000460ca) cmail_ddmenu_btn03_pane_ParamLimits

0x92cc,	// (0x000460ca) cmail_ddmenu_btn03_pane

0x92fa,	// (0x000460f8) main_sp_fs_ctrlbar_pane_ParamLimits

0x9310,	// (0x0004610e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9417,	// (0x00046215) list_cmail_body_pane_ParamLimits

0xe841,	// (0x0004b63f) bg_button_pane_cp12

0xe84a,	// (0x0004b648) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe84a,	// (0x0004b648) list_single_cmail_header_detail_pane_g3

0x1dc9,	// (0x0003ebc7) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1dc9,	// (0x0003ebc7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004cba4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004cba4) list_single_cmail_header_detail_pane_t

0x1e21,	// (0x0003ec1f) phacti_term_pane_t2_ParamLimits

0x1e21,	// (0x0003ec1f) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004cbae) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004cbae) phacti_term_pane_t

0xeab3,	// (0x0004b8b1) aid_size_list_single_double

0x9710,	// (0x0004650e) popup_ezdial_listscroll_window

0x9731,	// (0x0004652f) popup_number_entry_window_cp01

0xb463,	// (0x00048261) bg_popup_call_pane_cp09

0xeabf,	// (0x0004b8bd) ezdial_list_pane

0xeac7,	// (0x0004b8c5) scroll_pane_cp23

0xca48,	// (0x00049846) bg_button_pane_cp028_ParamLimits

0xca48,	// (0x00049846) bg_button_pane_cp028

0x973f,	// (0x0004653d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x973f,	// (0x0004653d) cmail_ddmenu_btn01_pane_g1

0x974f,	// (0x0004654d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x974f,	// (0x0004654d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004cc26) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004cc26) cmail_ddmenu_btn01_pane_g

0xeacf,	// (0x0004b8cd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacf,	// (0x0004b8cd) cmail_ddmenu_btn01_pane_t1

0xc85b,	// (0x00049659) bg_button_pane_cp029_ParamLimits

0xc85b,	// (0x00049659) bg_button_pane_cp029

0x975b,	// (0x00046559) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x975b,	// (0x00046559) cmail_ddmenu_btn02_pane_g1

0x9773,	// (0x00046571) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9773,	// (0x00046571) cmail_ddmenu_btn02_pane_t1

0xdb26,	// (0x0004a924) bg_button_pane_cp031_ParamLimits

0xdb26,	// (0x0004a924) bg_button_pane_cp031

0x975b,	// (0x00046559) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x975b,	// (0x00046559) cmail_ddmenu_btn03_pane_g1

0x9773,	// (0x00046571) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9773,	// (0x00046571) cmail_ddmenu_btn03_pane_t1

0x715d,	// (0x00043f5b) cell_dialer2_keypad_pane_t1_ParamLimits

0x7177,	// (0x00043f75) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7177,	// (0x00043f75) cell_dialer2_keypad_pane_t1_copy1

0x8c6e,	// (0x00045a6c) ncimui_group_button_pane

0xb05e,	// (0x00047e5c) main_sp_fs_calendar_pane_ParamLimits

0x9437,	// (0x00046235) list_single_cmail_header_caption_pane_ParamLimits

0x1e36,	// (0x0003ec34) aid_recal_txt_sm_pane

0xa0d8,	// (0x00046ed6) mian_recal_day_pane

0x1e70,	// (0x0003ec6e) popup_sp_fs_cale_preview_window_ParamLimits

0xeae5,	// (0x0004b8e3) list_recal_day_pane

0x2022,	// (0x0003ee20) list_single_recal_day_pane_ParamLimits

0x2022,	// (0x0003ee20) list_single_recal_day_pane

0xeb0c,	// (0x0004b90a) list_single_recal_day_pane_g1_ParamLimits

0xeb0c,	// (0x0004b90a) list_single_recal_day_pane_g1

0x2034,	// (0x0003ee32) list_single_recal_day_pane_g2_ParamLimits

0x2034,	// (0x0003ee32) list_single_recal_day_pane_g2

0x2044,	// (0x0003ee42) list_single_recal_day_pane_g3_ParamLimits

0x2044,	// (0x0003ee42) list_single_recal_day_pane_g3

0x2050,	// (0x0003ee4e) list_single_recal_day_pane_g4_ParamLimits

0x2050,	// (0x0003ee4e) list_single_recal_day_pane_g4

0x2066,	// (0x0003ee64) list_single_recal_day_pane_g5_ParamLimits

0x2066,	// (0x0003ee64) list_single_recal_day_pane_g5

0x2080,	// (0x0003ee7e) list_single_recal_day_pane_g6_ParamLimits

0x2080,	// (0x0003ee7e) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004cc35) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004cc35) list_single_recal_day_pane_g

0x2094,	// (0x0003ee92) list_single_recal_day_pane_t1

0x20a6,	// (0x0003eea4) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004cc40) list_single_recal_day_pane_t

0x9797,	// (0x00046595) ncimui_query_button_pane_ParamLimits

0x9797,	// (0x00046595) ncimui_query_button_pane

0x97a7,	// (0x000465a5) ncimui_query_button_pane_t1_ParamLimits

0x97a7,	// (0x000465a5) ncimui_query_button_pane_t1

0xeb18,	// (0x0004b916) ncimui_query_button_pane_t2_ParamLimits

0xeb18,	// (0x0004b916) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004cc45) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004cc45) ncimui_query_button_pane_t

0x97ba,	// (0x000465b8) query_button_pane_ParamLimits

0x97ba,	// (0x000465b8) query_button_pane

0xa0d8,	// (0x00046ed6) bg_button_pane_cp0028

0xeb2b,	// (0x0004b929) query_button_pane_t1

0x5583,	// (0x00042381) main_tport_pane_ParamLimits

0x9321,	// (0x0004611f) bg_popup_window_pane_cp01_ParamLimits

0x9321,	// (0x0004611f) bg_popup_window_pane_cp01

0x932f,	// (0x0004612d) heading_pane_cp08_ParamLimits

0x932f,	// (0x0004612d) heading_pane_cp08

0x933d,	// (0x0004613b) heading_pane_cp07_ParamLimits

0x933d,	// (0x0004613b) heading_pane_cp07

0x93ac,	// (0x000461aa) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004cb91) cell_tport_appsw_pane_g

0x10c2,	// (0x0003dec0) input_candi_list_open_g1

0xadfd,	// (0x00047bfb) list_cale_time_pane_g6_ParamLimits

0xadfd,	// (0x00047bfb) list_cale_time_pane_g6

0x6008,	// (0x00042e06) aid_size_touch_calib_1_ParamLimits

0x6008,	// (0x00042e06) aid_size_touch_calib_1

0x6014,	// (0x00042e12) aid_size_touch_calib_2_ParamLimits

0x6014,	// (0x00042e12) aid_size_touch_calib_2

0x6022,	// (0x00042e20) aid_size_touch_calib_3_ParamLimits

0x6022,	// (0x00042e20) aid_size_touch_calib_3

0x6032,	// (0x00042e30) aid_size_touch_calib_4_ParamLimits

0x6032,	// (0x00042e30) aid_size_touch_calib_4

0x6040,	// (0x00042e3e) main_touch_calib_button_group_pane_ParamLimits

0x6040,	// (0x00042e3e) main_touch_calib_button_group_pane

0x604e,	// (0x00042e4c) main_touch_calib_pane_g1_ParamLimits

0x605a,	// (0x00042e58) main_touch_calib_pane_g2_ParamLimits

0x6066,	// (0x00042e64) main_touch_calib_pane_g3_ParamLimits

0x6072,	// (0x00042e70) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0004c54f) main_touch_calib_pane_g_ParamLimits

0x607e,	// (0x00042e7c) main_touch_calib_pane_t1_ParamLimits

0x6097,	// (0x00042e95) main_touch_calib_pane_t2_ParamLimits

0x60b0,	// (0x00042eae) main_touch_calib_pane_t3_ParamLimits

0x60c6,	// (0x00042ec4) main_touch_calib_pane_t4_ParamLimits

0x60dc,	// (0x00042eda) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0004c558) main_touch_calib_pane_t_ParamLimits

0xcfef,	// (0x00049ded) list_single_fp_cale_pane_g3_ParamLimits

0xcfef,	// (0x00049ded) list_single_fp_cale_pane_g3

0xb05e,	// (0x00047e5c) bg_button_pane_cp012_ParamLimits

0xb05e,	// (0x00047e5c) bg_vkb2_func_pane_cp03_ParamLimits

0x7f1e,	// (0x00044d1c) cell_vitu2_function_top_pane_g1_ParamLimits

0xb05e,	// (0x00047e5c) bg_vkb2_func_pane_cp04_ParamLimits

0x8bf6,	// (0x000459f4) main_ncimui_button_group_pane_ParamLimits

0x8bf6,	// (0x000459f4) main_ncimui_button_group_pane

0x8c5c,	// (0x00045a5a) main_ncimui_pane_t3_ParamLimits

0x8c5c,	// (0x00045a5a) main_ncimui_pane_t3

0xe8d7,	// (0x0004b6d5) phacti_button_group_pane

0xeab3,	// (0x0004b8b1) aid_size_list_single_double_ParamLimits

0x9710,	// (0x0004650e) popup_ezdial_listscroll_window_ParamLimits

0x9731,	// (0x0004652f) popup_number_entry_window_cp01_ParamLimits

0x97c7,	// (0x000465c5) phacti_button_pane_ParamLimits

0x97c7,	// (0x000465c5) phacti_button_pane

0xa0d8,	// (0x00046ed6) bg_button_pane_cp14

0xeb39,	// (0x0004b937) phacti_button_pane_t1

0x97d8,	// (0x000465d6) main_touch_calib_button_pane_ParamLimits

0x97d8,	// (0x000465d6) main_touch_calib_button_pane

0xa823,	// (0x00047621) bg_button_pane_cp18_ParamLimits

0xa823,	// (0x00047621) bg_button_pane_cp18

0xeb47,	// (0x0004b945) main_touch_calib_button_pane_t1_ParamLimits

0xeb47,	// (0x0004b945) main_touch_calib_button_pane_t1

0xeb5d,	// (0x0004b95b) main_touch_calib_button_pane_t2_ParamLimits

0xeb5d,	// (0x0004b95b) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004cc4a) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004cc4a) main_touch_calib_button_pane_t

0xa0d8,	// (0x00046ed6) cell_ncimui_button_pane

0xa0d8,	// (0x00046ed6) bg_button_pane_cp032

0xeb7b,	// (0x0004b979) cell_ncimui_button_pane_t1

0x71d3,	// (0x00043fd1) image3_infobar_pane_ParamLimits

0x71d3,	// (0x00043fd1) image3_infobar_pane

0x8fd5,	// (0x00045dd3) fs_bigclock_status_pane_ParamLimits

0x8fd5,	// (0x00045dd3) fs_bigclock_status_pane

0x8fe2,	// (0x00045de0) main_fs_bigclock_clock_pane_ParamLimits

0x8fe2,	// (0x00045de0) main_fs_bigclock_clock_pane

0x8ffc,	// (0x00045dfa) main_fs_bigclock_indi_pane_ParamLimits

0x8ffc,	// (0x00045dfa) main_fs_bigclock_indi_pane

0x9024,	// (0x00045e22) main_fs_bigclock_swipe_pane_ParamLimits

0x9024,	// (0x00045e22) main_fs_bigclock_swipe_pane

0xa0d8,	// (0x00046ed6) main_fs_clock_dumped_data

0xe458,	// (0x0004b256) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe458,	// (0x0004b256) list_single_fs_bigclock_indicator_pane_g1

0xe473,	// (0x0004b271) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe473,	// (0x0004b271) list_single_fs_bigclock_indicator_pane_g2

0xe48d,	// (0x0004b28b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe48d,	// (0x0004b28b) list_single_fs_bigclock_indicator_pane_g3

0xe4a7,	// (0x0004b2a5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4a7,	// (0x0004b2a5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0004ca72) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0004ca72) list_single_fs_bigclock_indicator_pane_g

0xe4d2,	// (0x0004b2d0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4d2,	// (0x0004b2d0) list_single_fs_bigclock_indicator_pane_t1

0xe4fa,	// (0x0004b2f8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4fa,	// (0x0004b2f8) list_single_fs_bigclock_indicator_pane_t2

0xe522,	// (0x0004b320) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe522,	// (0x0004b320) list_single_fs_bigclock_indicator_pane_t3

0xe54a,	// (0x0004b348) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe54a,	// (0x0004b348) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0004ca7d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0004ca7d) list_single_fs_bigclock_indicator_pane_t

0xeb89,	// (0x0004b987) image3_infobar_fav_pane_ParamLimits

0xeb89,	// (0x0004b987) image3_infobar_fav_pane

0xeb99,	// (0x0004b997) image3_infobar_loc_pane_ParamLimits

0xeb99,	// (0x0004b997) image3_infobar_loc_pane

0xebad,	// (0x0004b9ab) image3_infobar_time_pane_ParamLimits

0xebad,	// (0x0004b9ab) image3_infobar_time_pane

0xcc6c,	// (0x00049a6a) image3_infobar_time_pane_g1

0xebbd,	// (0x0004b9bb) image3_infobar_time_pane_t1

0xcc6c,	// (0x00049a6a) image3_infobar_loc_pane_g1

0xebcb,	// (0x0004b9c9) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004cc4f) image3_infobar_loc_pane_g

0xebd3,	// (0x0004b9d1) image3_infobar_loc_pane_t1

0xcc6c,	// (0x00049a6a) image3_infobar_fav_pane_g1

0xebe1,	// (0x0004b9df) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004cc54) image3_infobar_fav_pane_g

0xebe9,	// (0x0004b9e7) fs_bigclock_status_battery_pane

0xebf2,	// (0x0004b9f0) fs_bigclock_status_signal_pane

0xebfb,	// (0x0004b9f9) fs_bigclock_status_title_pane

0xec04,	// (0x0004ba02) fs_bigclock_status_signal_pane_g1

0xec0d,	// (0x0004ba0b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004cc59) fs_bigclock_status_signal_pane_g

0xec15,	// (0x0004ba13) fs_bigclock_status_battery_pane_g1

0xec1e,	// (0x0004ba1c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004cc5e) fs_bigclock_status_battery_pane_g

0xec26,	// (0x0004ba24) fs_bigclock_status_title_pane_t1

0xcc6c,	// (0x00049a6a) main_fs_bigclock_clock_pane_g1

0xec34,	// (0x0004ba32) main_fs_bigclock_clock_pane_g2

0xec3d,	// (0x0004ba3b) main_fs_bigclock_clock_pane_g3

0xec3d,	// (0x0004ba3b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004cc63) main_fs_bigclock_clock_pane_g

0xec45,	// (0x0004ba43) main_fs_bigclock_clock_pane_t1

0x97e8,	// (0x000465e6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004cc6c) main_fs_bigclock_clock_pane_t

0xec53,	// (0x0004ba51) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec53,	// (0x0004ba51) list_single_fs_bigclock_indicator_pane

0xec64,	// (0x0004ba62) list_single_fs_bigclock_pane_ParamLimits

0xec64,	// (0x0004ba62) list_single_fs_bigclock_pane

0xec8a,	// (0x0004ba88) main_fs_bigclock_indicator_pane_t1

0xec99,	// (0x0004ba97) list_single_fs_bigclock_pane_g1

0xeca1,	// (0x0004ba9f) list_single_fs_bigclock_pane_t1

0xcc6c,	// (0x00049a6a) main_fs_bigclock_swipe_pane_g1

0xece4,	// (0x0004bae2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004cc7d) main_fs_bigclock_swipe_pane_g

0xecec,	// (0x0004baea) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecec,	// (0x0004baea) main_fs_bigclock_swipe_pane_t1

0x4613,	// (0x00041411) call_type_pane_ParamLimits

0xa0d8,	// (0x00046ed6) main_btmg_pane

0x1ee9,	// (0x0003ece7) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1ee9,	// (0x0003ece7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004cbf0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004cbf0) list_single_cale_mrui_row_pane_g

0x2011,	// (0x0003ee0f) list_recal_vselct_arw_lo_pane

0xeb04,	// (0x0004b902) list_recal_vselct_arw_up_pane

0x2019,	// (0x0003ee17) list_recal_vselct_pane

0x983b,	// (0x00046639) btmg_button_pane

0x9847,	// (0x00046645) main_btmg_pane_g1

0xa0d8,	// (0x00046ed6) bg_button_pane_cp044

0xed09,	// (0x0004bb07) btmg_button_pane_t1

0xc847,	// (0x00049645) aid_listscroll_gen

0xb05e,	// (0x00047e5c) main_cntbar_detail_pane

0xe823,	// (0x0004b621) list_cmail_folder_pane

0xd31c,	// (0x0004a11a) sp_fs_scroll_pane_cp03_ParamLimits

0x20b8,	// (0x0003eeb6) list_single_fs_dyc_pane_cp01_ParamLimits

0x20b8,	// (0x0003eeb6) list_single_fs_dyc_pane_cp01

0xed17,	// (0x0004bb15) aid_size_cmail_indent

0x20e7,	// (0x0003eee5) list_single_dyc_row_pane_cp01

0x986f,	// (0x0004666d) cntbar_detail_list_pane_ParamLimits

0x986f,	// (0x0004666d) cntbar_detail_list_pane

0x98a9,	// (0x000466a7) main_cntbar_detail_cont_pane_ParamLimits

0x98a9,	// (0x000466a7) main_cntbar_detail_cont_pane

0x4607,	// (0x00041405) scroll_pane_cp032_ParamLimits

0x4607,	// (0x00041405) scroll_pane_cp032

0x98b5,	// (0x000466b3) cntbar_detail_list_event_pane_ParamLimits

0x98b5,	// (0x000466b3) cntbar_detail_list_event_pane

0x987b,	// (0x00046679) cntbar_detail_list_shct_pane

0xac88,	// (0x00047a86) aid_list_gen

0xed20,	// (0x0004bb1e) aid_scroll

0xed29,	// (0x0004bb27) aid_size_touch_scroll_bar

0x84a6,	// (0x000452a4) aid_list_double

0x20f0,	// (0x0003eeee) aid_list_single

0x849d,	// (0x0004529b) aid_list_single_lg

0x20f9,	// (0x0003eef7) aid_list_z_g_a_sm

0x2101,	// (0x0003eeff) aid_list_z_g_d

0x2109,	// (0x0003ef07) aid_txt_z_prm

0x2117,	// (0x0003ef15) aid_txt_z_prm_cp01

0x2125,	// (0x0003ef23) aid_txt_z_sec

0x98c9,	// (0x000466c7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x98c9,	// (0x000466c7) main_cntbar_detail_cont_pane_g1

0x98d6,	// (0x000466d4) main_cntbar_detail_cont_pane_g2_ParamLimits

0x98d6,	// (0x000466d4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004cc82) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004cc82) main_cntbar_detail_cont_pane_g

0xed32,	// (0x0004bb30) main_cntbar_detail_cont_pane_t1

0xed40,	// (0x0004bb3e) main_cntbar_detail_cont_pane_t2

0xed4e,	// (0x0004bb4c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004cc87) main_cntbar_detail_cont_pane_t

0x98e2,	// (0x000466e0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x98e2,	// (0x000466e0) cell_cntbar_detail_list_shct_pane

0xed5c,	// (0x0004bb5a) cntbar_detail_list_shct_pane_g1

0xed65,	// (0x0004bb63) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004cc8e) cntbar_detail_list_shct_pane_g

0x98f6,	// (0x000466f4) cntbar_detail_list_event_pane_g1_ParamLimits

0x98f6,	// (0x000466f4) cntbar_detail_list_event_pane_g1

0x9902,	// (0x00046700) cntbar_detail_list_event_pane_g2_ParamLimits

0x9902,	// (0x00046700) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004cc93) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004cc93) cntbar_detail_list_event_pane_g

0x996e,	// (0x0004676c) cntbar_detail_list_event_pane_t1_ParamLimits

0x996e,	// (0x0004676c) cntbar_detail_list_event_pane_t1

0x9983,	// (0x00046781) cntbar_detail_list_event_pane_t2_ParamLimits

0x9983,	// (0x00046781) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004cca0) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004cca0) cntbar_detail_list_event_pane_t

0xcc6c,	// (0x00049a6a) cell_cntbar_detail_list_shct_pane_g1

0xb41b,	// (0x00048219) navi_pane_mv_g3

0xb05e,	// (0x00047e5c) main_cntbar_detail_pane_ParamLimits

0xa0d8,	// (0x00046ed6) main_notif_wgt_pane

0x6e87,	// (0x00043c85) aid_tch_main_mp4_pane_g4

0x70bc,	// (0x00043eba) popup_slider_window_cp02

0x2007,	// (0x0003ee05) list_recal_day_event_pane

0x984f,	// (0x0004664d) cntbar_detail_btn_pane_ParamLimits

0x984f,	// (0x0004664d) cntbar_detail_btn_pane

0x985f,	// (0x0004665d) cntbar_detail_btn_pane_cp01_ParamLimits

0x985f,	// (0x0004665d) cntbar_detail_btn_pane_cp01

0x987b,	// (0x00046679) cntbar_detail_list_shct_pane_ParamLimits

0x9887,	// (0x00046685) cntbar_detail_pane_g1_ParamLimits

0x9887,	// (0x00046685) cntbar_detail_pane_g1

0x9893,	// (0x00046691) cntbar_detail_pane_t1_ParamLimits

0x9893,	// (0x00046691) cntbar_detail_pane_t1

0x990e,	// (0x0004670c) cntbar_detail_list_event_pane_g3_ParamLimits

0x990e,	// (0x0004670c) cntbar_detail_list_event_pane_g3

0x9926,	// (0x00046724) cntbar_detail_list_event_pane_g4_ParamLimits

0x9926,	// (0x00046724) cntbar_detail_list_event_pane_g4

0x993e,	// (0x0004673c) cntbar_detail_list_event_pane_g5_ParamLimits

0x993e,	// (0x0004673c) cntbar_detail_list_event_pane_g5

0x9956,	// (0x00046754) cntbar_detail_list_event_pane_g6_ParamLimits

0x9956,	// (0x00046754) cntbar_detail_list_event_pane_g6

0x9998,	// (0x00046796) cntbar_detail_list_event_pane_t3_ParamLimits

0x9998,	// (0x00046796) cntbar_detail_list_event_pane_t3

0x99aa,	// (0x000467a8) popup_notif_wgt_window_ParamLimits

0x99aa,	// (0x000467a8) popup_notif_wgt_window

0x99ba,	// (0x000467b8) popup_submenu_window_cp01_ParamLimits

0x99ba,	// (0x000467b8) popup_submenu_window_cp01

0xb463,	// (0x00048261) bg_popup_window_pane_cp10

0xed6e,	// (0x0004bb6c) listscroll_notif_wgt_pane

0xed80,	// (0x0004bb7e) list_notif_wgt_window

0xed89,	// (0x0004bb87) scroll_pane_cp033

0x99cc,	// (0x000467ca) list_notif_wgt_row_pane_ParamLimits

0x99cc,	// (0x000467ca) list_notif_wgt_row_pane

0xed92,	// (0x0004bb90) aid_size_list_notif_wgt_del

0xed9f,	// (0x0004bb9d) list_notif_wgt_row_pane_g1

0xedab,	// (0x0004bba9) list_notif_wgt_row_pane_g2

0xedbf,	// (0x0004bbbd) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004cca7) list_notif_wgt_row_pane_g

0xedcc,	// (0x0004bbca) list_notif_wgt_row_pane_t1

0xede2,	// (0x0004bbe0) list_notif_wgt_row_pane_t2

0xedf4,	// (0x0004bbf2) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004ccae) list_notif_wgt_row_pane_t

0xd925,	// (0x0004a723) list_recal_day_event_pane_g1

0xee06,	// (0x0004bc04) list_recal_day_event_pane_t1

0xa0d8,	// (0x00046ed6) bg_button_pane_cp045

0x99de,	// (0x000467dc) cntbar_detail_btn_pane_t1

0xc85b,	// (0x00049659) main_callh_pane_ParamLimits

0xc85b,	// (0x00049659) main_callh_pane

0xa0d8,	// (0x00046ed6) main_coverflow0_pane

0xa0d8,	// (0x00046ed6) main_wgtman_pane

0x903c,	// (0x00045e3a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x903c,	// (0x00045e3a) main_fs_bigclock_unlock_btn_pane

0x93a4,	// (0x000461a2) bg_button_pane_cp16

0x93b4,	// (0x000461b2) cell_tport_appsw_pane_g3

0x99ec,	// (0x000467ea) cf0_flow_pane_ParamLimits

0x99ec,	// (0x000467ea) cf0_flow_pane

0xee15,	// (0x0004bc13) listscroll_cf0_pane

0xee20,	// (0x0004bc1e) main_cf0_pane_g1

0x99fb,	// (0x000467f9) main_cf0_pane_t1_ParamLimits

0x99fb,	// (0x000467f9) main_cf0_pane_t1

0x9a0f,	// (0x0004680d) main_cf0_pane_t2_ParamLimits

0x9a0f,	// (0x0004680d) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004ccba) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004ccba) main_cf0_pane_t

0xee32,	// (0x0004bc30) scroll_pane_cp11

0x9a23,	// (0x00046821) cf0_flow_pane_g1

0x9a2b,	// (0x00046829) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004ccbf) cf0_flow_pane_g

0x9a33,	// (0x00046831) cf0_flow_pane_t1

0xa0d8,	// (0x00046ed6) main_call6_pane

0xa0d8,	// (0x00046ed6) main_calllock_pane

0x9a41,	// (0x0004683f) call6_btn_grp_pane_ParamLimits

0x9a41,	// (0x0004683f) call6_btn_grp_pane

0x9a50,	// (0x0004684e) call6_pane_g1_ParamLimits

0x9a50,	// (0x0004684e) call6_pane_g1

0x9a5f,	// (0x0004685d) popup_call6_1st_window_ParamLimits

0x9a5f,	// (0x0004685d) popup_call6_1st_window

0x9a6d,	// (0x0004686b) popup_call6_2nd_window_ParamLimits

0x9a6d,	// (0x0004686b) popup_call6_2nd_window

0x9a7b,	// (0x00046879) cell_call6_btn_pane_ParamLimits

0x9a7b,	// (0x00046879) cell_call6_btn_pane

0xb463,	// (0x00048261) bg_popup_call2_in_pane_cp03

0xee3d,	// (0x0004bc3b) popup_call6_1st_window_g1

0xee45,	// (0x0004bc43) popup_call6_1st_window_g2

0xee4d,	// (0x0004bc4b) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004ccc4) popup_call6_1st_window_g

0xee55,	// (0x0004bc53) popup_call6_1st_window_t1

0xee64,	// (0x0004bc62) popup_call6_1st_window_t2

0xee74,	// (0x0004bc72) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004cccb) popup_call6_1st_window_t

0xb463,	// (0x00048261) bg_popup_call2_in_pane_cp04

0xee3d,	// (0x0004bc3b) popup_call6_2nd_window_g1

0xee45,	// (0x0004bc43) popup_call6_2nd_window_g2

0xee4d,	// (0x0004bc4b) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004ccc4) popup_call6_2nd_window_g

0xee55,	// (0x0004bc53) popup_call6_2nd_window_t1

0xa0d8,	// (0x00046ed6) bg_button_pane_cp15

0xee84,	// (0x0004bc82) cell_call6_btn_pane_g1

0xee8d,	// (0x0004bc8b) cell_call6_btn_pane_t1

0x9a8a,	// (0x00046888) listscroll_wgtman_pane_ParamLimits

0x9a8a,	// (0x00046888) listscroll_wgtman_pane

0x9aa6,	// (0x000468a4) wgtman_btn_pane_ParamLimits

0x9aa6,	// (0x000468a4) wgtman_btn_pane

0xb222,	// (0x00048020) aid_scroll_copy1

0xee9c,	// (0x0004bc9a) list_wgtman_pane

0x9adb,	// (0x000468d9) wgtman_btn_pane_g1_ParamLimits

0x9adb,	// (0x000468d9) wgtman_btn_pane_g1

0x9b03,	// (0x00046901) wgtman_btn_pane_t1_ParamLimits

0x9b03,	// (0x00046901) wgtman_btn_pane_t1

0xeea6,	// (0x0004bca4) wgtman_btn_pane_t2_ParamLimits

0xeea6,	// (0x0004bca4) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004ccd2) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004ccd2) wgtman_btn_pane_t

0x9b3a,	// (0x00046938) listrow_wgtman_pane_ParamLimits

0x9b3a,	// (0x00046938) listrow_wgtman_pane

0x9b55,	// (0x00046953) listrow_wgtman_pane_g1

0x9b62,	// (0x00046960) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004ccd7) listrow_wgtman_pane_g

0x2133,	// (0x0003ef31) listrow_wgtman_pane_t1

0x214b,	// (0x0003ef49) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004ccdc) listrow_wgtman_pane_t

0x2171,	// (0x0003ef6f) wait_bar_pane_cp09

0xeebd,	// (0x0004bcbb) main_calllock_btn_pane

0xeec7,	// (0x0004bcc5) main_calllock_pane_g1

0xa0d8,	// (0x00046ed6) bg_button_pane_cp17

0xeed3,	// (0x0004bcd1) main_calllock_btn_pane_g1

0xeedc,	// (0x0004bcda) main_calllock_btn_pane_t1

0xa0d8,	// (0x00046ed6) main_dialer3_pane

0xa0d8,	// (0x00046ed6) main_fmrd2_pane

0xcc6c,	// (0x00049a6a) main_fs_bigclock_unlock_btn_pane_g1

0xeef3,	// (0x0004bcf1) main_fs_bigclock_unlock_btn_pane_t1

0x9b80,	// (0x0004697e) area_fmrd2_info_pane_ParamLimits

0x9b80,	// (0x0004697e) area_fmrd2_info_pane

0x9b8e,	// (0x0004698c) area_fmrd2_visual_pane_ParamLimits

0x9b8e,	// (0x0004698c) area_fmrd2_visual_pane

0x9b9c,	// (0x0004699a) fmrd2_indi_pane_ParamLimits

0x9b9c,	// (0x0004699a) fmrd2_indi_pane

0x9ba9,	// (0x000469a7) area_fmrd2_visual_pane_g1

0x9bb1,	// (0x000469af) area_fmrd2_visual_pane_t1

0x9bc1,	// (0x000469bf) area_fmrd2_visual_pane_t2

0x9bd1,	// (0x000469cf) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004cce6) area_fmrd2_visual_pane_t

0x9be1,	// (0x000469df) area_fmrd2_info_pane_g1

0x9be9,	// (0x000469e7) area_fmrd2_info_pane_t1

0x9bf9,	// (0x000469f7) area_fmrd2_info_pane_t2

0x9c09,	// (0x00046a07) area_fmrd2_info_pane_t3

0x9c19,	// (0x00046a17) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004cced) area_fmrd2_info_pane_t

0x9c27,	// (0x00046a25) fmrd2_indi_pane_t1

0x9c37,	// (0x00046a35) fmrd2_indi_pane_t2

0x9c47,	// (0x00046a45) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004ccf6) fmrd2_indi_pane_t

0xe4b6,	// (0x0004b2b4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4b6,	// (0x0004b2b4) list_single_fs_bigclock_indicator_pane_g5

0xe566,	// (0x0004b364) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe566,	// (0x0004b364) list_single_fs_bigclock_indicator_pane_t5

0x9533,	// (0x00046331) aid_cell_bcale_month_pane_ParamLimits

0x9533,	// (0x00046331) aid_cell_bcale_month_pane

0x9551,	// (0x0004634f) bcale_month_pane_ParamLimits

0x9551,	// (0x0004634f) bcale_month_pane

0x956f,	// (0x0004636d) bcale_preview_pane_ParamLimits

0x956f,	// (0x0004636d) bcale_preview_pane

0xeca1,	// (0x0004ba9f) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc0,	// (0x0004babe) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc0,	// (0x0004babe) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004cc78) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004cc78) list_single_fs_bigclock_pane_t

0xeeeb,	// (0x0004bce9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004cce1) main_fs_bigclock_unlock_btn_pane_g

0x9c55,	// (0x00046a53) aid_dia3_key_size_ParamLimits

0x9c55,	// (0x00046a53) aid_dia3_key_size

0x9c61,	// (0x00046a5f) aid_dia3_listrow_size_ParamLimits

0x9c61,	// (0x00046a5f) aid_dia3_listrow_size

0x9c71,	// (0x00046a6f) dia3_keypad_fun_pane_ParamLimits

0x9c71,	// (0x00046a6f) dia3_keypad_fun_pane

0x9c83,	// (0x00046a81) dia3_keypad_num_pane_ParamLimits

0x9c83,	// (0x00046a81) dia3_keypad_num_pane

0x9c95,	// (0x00046a93) dia3_listscroll_pane_ParamLimits

0x9c95,	// (0x00046a93) dia3_listscroll_pane

0x9ca3,	// (0x00046aa1) dia3_numentry_pane_ParamLimits

0x9ca3,	// (0x00046aa1) dia3_numentry_pane

0xef01,	// (0x0004bcff) dia3_list_pane

0xef0c,	// (0x0004bd0a) scroll_pane_cp12

0xa0d8,	// (0x00046ed6) bg_dia3_numentry_pane

0x9cb1,	// (0x00046aaf) dia3_numentry_pane_t1

0x9cc0,	// (0x00046abe) cell_dia3_key_num_pane

0x9cc8,	// (0x00046ac6) cell_dia3_key0_fun_pane_ParamLimits

0x9cc8,	// (0x00046ac6) cell_dia3_key0_fun_pane

0x9cd5,	// (0x00046ad3) cell_dia3_key1_fun_pane_ParamLimits

0x9cd5,	// (0x00046ad3) cell_dia3_key1_fun_pane

0x9ce2,	// (0x00046ae0) dia3_listrow_pane

0xe1c5,	// (0x0004afc3) bg_dia3_numentry_pane_g1

0xa0d8,	// (0x00046ed6) bg_button_pane_cp21

0xef17,	// (0x0004bd15) cell_dia3_key_num_pane_t1

0xef25,	// (0x0004bd23) cell_dia3_key_num_pane_t2

0xef34,	// (0x0004bd32) cell_dia3_key_num_pane_t3

0xef43,	// (0x0004bd41) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004ccfd) cell_dia3_key_num_pane_t

0xa0d8,	// (0x00046ed6) bg_button_pane_cp19

0x9cef,	// (0x00046aed) cell_dia3_key0_fun_pane_g1

0xa0d8,	// (0x00046ed6) bg_button_pane_cp20

0x9cf7,	// (0x00046af5) cell_dia3_key1_fun_pane_g1

0x9cff,	// (0x00046afd) area_left_week_number_pane

0x9d12,	// (0x00046b10) area_top_day_name_pane

0x9d20,	// (0x00046b1e) frame_month_view_pane

0xef52,	// (0x0004bd50) grid_month_view_pane

0x9d35,	// (0x00046b33) cell_top_day_name_pane_ParamLimits

0x9d35,	// (0x00046b33) cell_top_day_name_pane

0x9d4f,	// (0x00046b4d) cell_area_left_week_number_pane_ParamLimits

0x9d4f,	// (0x00046b4d) cell_area_left_week_number_pane

0x9d72,	// (0x00046b70) cell_month_view_pane_ParamLimits

0x9d72,	// (0x00046b70) cell_month_view_pane

0xef60,	// (0x0004bd5e) frm_month_g1

0x9d9e,	// (0x00046b9c) frm_month_g2

0x9daf,	// (0x00046bad) frm_month_g3

0x9dc0,	// (0x00046bbe) frm_month_g4

0x9dd1,	// (0x00046bcf) frm_month_g5

0x9de4,	// (0x00046be2) frm_month_g6

0x9df7,	// (0x00046bf5) frm_month_g7

0xef6d,	// (0x0004bd6b) frm_month_g8

0x9e0a,	// (0x00046c08) frm_month_g9

0x9e17,	// (0x00046c15) frm_month_g10

0x9e24,	// (0x00046c22) frm_month_g11

0x9e31,	// (0x00046c2f) frm_month_g12

0x9e3e,	// (0x00046c3c) frm_month_g13

0x9e4b,	// (0x00046c49) frm_month_g14

0x9e5a,	// (0x00046c58) frm_month_g15

0x9e69,	// (0x00046c67) frm_month_g16

0x000f,

0xff08,	// (0x0004cd06) frm_month_g

0xef7a,	// (0x0004bd78) cell_top_day_name_pane_t1

0x9e78,	// (0x00046c76) cell_area_left_week_number_pane_g1

0x9e87,	// (0x00046c85) cell_area_left_week_number_pane_t1

0xcecf,	// (0x00049ccd) cell_month_view_pane_g1

0x9e9d,	// (0x00046c9b) cell_month_view_pane_t1

0xa0d8,	// (0x00046ed6) main_fps_pane

0xe73b,	// (0x0004b539) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe73b,	// (0x0004b539) cmail_ddmenu_btn02_pane_cp1

0xe757,	// (0x0004b555) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe757,	// (0x0004b555) cmail_ddmenu_btn02_pane_cp2

0x9767,	// (0x00046565) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9767,	// (0x00046565) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004cc2b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004cc2b) cmail_ddmenu_btn02_pane_g

0x9785,	// (0x00046583) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9785,	// (0x00046583) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004cc30) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004cc30) cmail_ddmenu_btn02_pane_t

0x9eb3,	// (0x00046cb1) fps_text_pane_ParamLimits

0x9eb3,	// (0x00046cb1) fps_text_pane

0x9ec0,	// (0x00046cbe) main_fps_pane_g1_ParamLimits

0x9ec0,	// (0x00046cbe) main_fps_pane_g1

0x9ece,	// (0x00046ccc) wait_bar_pane_cp010_ParamLimits

0x9ece,	// (0x00046ccc) wait_bar_pane_cp010

0x9eda,	// (0x00046cd8) fps_text_pane_t1_ParamLimits

0x9eda,	// (0x00046cd8) fps_text_pane_t1

0x749e,	// (0x0004429c) cam4_image_uncrop_pane_g1

0x74a7,	// (0x000442a5) cam4_image_uncrop_pane_g2

0x74b0,	// (0x000442ae) cam4_image_uncrop_pane_g3

0x74b9,	// (0x000442b7) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004c6ec) cam4_image_uncrop_pane_g

0x9ce2,	// (0x00046ae0) dia3_listrow_pane_ParamLimits

0xa0d8,	// (0x00046ed6) main_phob2_pane

0x9386,	// (0x00046184) cell_tport_appsw_pane_cp02_ParamLimits

0x9386,	// (0x00046184) cell_tport_appsw_pane_cp02

0x9395,	// (0x00046193) cell_tport_appsw_pane_cp03_ParamLimits

0x9395,	// (0x00046193) cell_tport_appsw_pane_cp03

0xa0d8,	// (0x00046ed6) phob2_contact_card_pane

0xa0d8,	// (0x00046ed6) phob2_listscroll_pane

0xef8d,	// (0x0004bd8b) phob2_list_pane

0xef95,	// (0x0004bd93) scroll_pane_cp034

0x9ef3,	// (0x00046cf1) phob2_cc_data_pane_ParamLimits

0x9ef3,	// (0x00046cf1) phob2_cc_data_pane

0x9f0d,	// (0x00046d0b) phob2_cc_listscroll_pane_ParamLimits

0x9f0d,	// (0x00046d0b) phob2_cc_listscroll_pane

0x9f27,	// (0x00046d25) list_double_large_graphic_phob2_pane_ParamLimits

0x9f27,	// (0x00046d25) list_double_large_graphic_phob2_pane

0x9f45,	// (0x00046d43) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9f45,	// (0x00046d43) list_double_large_graphic_phob2_pane_g1

0x2183,	// (0x0003ef81) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2183,	// (0x0003ef81) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004cd27) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004cd27) list_double_large_graphic_phob2_pane_g

0x218f,	// (0x0003ef8d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x218f,	// (0x0003ef8d) list_double_large_graphic_phob2_pane_t1

0x21a4,	// (0x0003efa2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x21a4,	// (0x0003efa2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004cd2c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004cd2c) list_double_large_graphic_phob2_pane_t

0xa0d8,	// (0x00046ed6) list_highlight_pane_cp024

0x9f5b,	// (0x00046d59) phob2_cc_button_pane

0x9f63,	// (0x00046d61) phob2_cc_data_pane_g1_ParamLimits

0x9f63,	// (0x00046d61) phob2_cc_data_pane_g1

0x9f6f,	// (0x00046d6d) phob2_cc_data_pane_g2_ParamLimits

0x9f6f,	// (0x00046d6d) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004cd31) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004cd31) phob2_cc_data_pane_g

0x9f7b,	// (0x00046d79) phob2_cc_data_pane_t1_ParamLimits

0x9f7b,	// (0x00046d79) phob2_cc_data_pane_t1

0x9f8d,	// (0x00046d8b) phob2_cc_data_pane_t2_ParamLimits

0x9f8d,	// (0x00046d8b) phob2_cc_data_pane_t2

0x9f9f,	// (0x00046d9d) phob2_cc_data_pane_t3_ParamLimits

0x9f9f,	// (0x00046d9d) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004cd36) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004cd36) phob2_cc_data_pane_t

0xef9d,	// (0x0004bd9b) phob2_cc_list_pane_ParamLimits

0xef9d,	// (0x0004bd9b) phob2_cc_list_pane

0xdb1a,	// (0x0004a918) scroll_pane_cp035_ParamLimits

0xdb1a,	// (0x0004a918) scroll_pane_cp035

0xb05e,	// (0x00047e5c) bg_button_pane_cp033

0xefa9,	// (0x0004bda7) phob2_cc_button_pane_g1

0xefb5,	// (0x0004bdb3) phob2_cc_button_pane_t1

0xefca,	// (0x0004bdc8) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004cd3d) phob2_cc_button_pane_t

0x9fb1,	// (0x00046daf) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9fb1,	// (0x00046daf) list_double_large_graphic_phob2_cc_pane

0x9fd8,	// (0x00046dd6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9fd8,	// (0x00046dd6) list_double_large_graphic_phob2_cc_pane_g1

0x21b6,	// (0x0003efb4) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x21b6,	// (0x0003efb4) list_double_large_graphic_phob2_cc_pane_g2

0x21c2,	// (0x0003efc0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x21c2,	// (0x0003efc0) list_double_large_graphic_phob2_cc_pane_g3

0x21ce,	// (0x0003efcc) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x21ce,	// (0x0003efcc) list_double_large_graphic_phob2_cc_pane_g4

0x21da,	// (0x0003efd8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x21da,	// (0x0003efd8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004cd42) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004cd42) list_double_large_graphic_phob2_cc_pane_g

0x21e6,	// (0x0003efe4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x21e6,	// (0x0003efe4) list_double_large_graphic_phob2_cc_pane_t1

0x220f,	// (0x0003f00d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x220f,	// (0x0003f00d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004cd4d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004cd4d) list_double_large_graphic_phob2_cc_pane_t

0xefdc,	// (0x0004bdda) list_highlight_pane_cp025_ParamLimits

0xefdc,	// (0x0004bdda) list_highlight_pane_cp025

0xb05e,	// (0x00047e5c) bg_button_pane_cp033_ParamLimits

0xefa9,	// (0x0004bda7) phob2_cc_button_pane_g1_ParamLimits

0xefb5,	// (0x0004bdb3) phob2_cc_button_pane_t1_ParamLimits

0xefca,	// (0x0004bdc8) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004cd3d) phob2_cc_button_pane_t_ParamLimits

0x250f,	// (0x0003f30d) popup_wgtman_window

0xd813,	// (0x0004a611) scroll_pane_cp038

0x9ac3,	// (0x000468c1) wgtman_btn_pane_cp_01_ParamLimits

0x9ac3,	// (0x000468c1) wgtman_btn_pane_cp_01

0xefea,	// (0x0004bde8) wgtman_content_pane

0xeff3,	// (0x0004bdf1) wgtman_heading_pane

0xa0d8,	// (0x00046ed6) bg_heading_pane_cp02

0xeffc,	// (0x0004bdfa) wgtman_heading_pane_g1

0xf004,	// (0x0004be02) wgtman_heading_pane_t1

0xf012,	// (0x0004be10) scroll_pane_cp036

0xf01a,	// (0x0004be18) wgtman_list_pane

0xf022,	// (0x0004be20) wgtman_list_pane_t1_ParamLimits

0xf022,	// (0x0004be20) wgtman_list_pane_t1

0x73fd,	// (0x000441fb) cam4_grid_pane

0x138a,	// (0x0003e188) bg_button_pane_cp015_ParamLimits

0x80cb,	// (0x00044ec9) bg_button_pane_cp016_ParamLimits

0x80de,	// (0x00044edc) bg_button_pane_cp017_ParamLimits

0x13ce,	// (0x0003e1cc) popup_vitu2_query_window_g3_ParamLimits

0x13ce,	// (0x0003e1cc) popup_vitu2_query_window_g3

0x1447,	// (0x0003e245) popup_vitu2_query_window_t6_ParamLimits

0x1447,	// (0x0003e245) popup_vitu2_query_window_t6

0x1472,	// (0x0003e270) popup_vitu2_query_window_t7_ParamLimits

0x1472,	// (0x0003e270) popup_vitu2_query_window_t7

0xe941,	// (0x0004b73f) cam4_grid_pane_g1

0xe94a,	// (0x0004b748) cam4_grid_pane_g2

0xf03c,	// (0x0004be3a) cam4_grid_pane_g3

0xf045,	// (0x0004be43) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004cd52) cam4_grid_pane_g

0x338b,	// (0x00040189) aid_placing_vt_slider_lsc_ParamLimits

0x36d7,	// (0x000404d5) vidtel_button_pane_ParamLimits

0x36d7,	// (0x000404d5) vidtel_button_pane

0xf050,	// (0x0004be4e) bg_button_pane_cp034

0x9fe9,	// (0x00046de7) vidtel_button_pane_g1

0xf05a,	// (0x0004be58) vidtel_button_pane_t1

0xd915,	// (0x0004a713) aid_size_vtel_slider_touch

0xdb1a,	// (0x0004a918) scroll_pane_cp039

0xe203,	// (0x0004b001) ncim_query_button_pane_cp01_ParamLimits

0xe222,	// (0x0004b020) ncimui_query_pane_g1_ParamLimits

0xb05e,	// (0x00047e5c) input_focus_pane_cp012_ParamLimits

0xe247,	// (0x0004b045) ncim_query_entry_pane_t1_ParamLimits

0xdb1a,	// (0x0004a918) scroll_pane_cp039_ParamLimits

0xb306,	// (0x00048104) navi_pane_bcale_mc_g1

0xb30e,	// (0x0004810c) navi_pane_bcale_mc_t1

0xe7a0,	// (0x0004b59e) main_sp_fs_email_pane_g1

0xe7ac,	// (0x0004b5aa) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0004cae3) main_sp_fs_email_pane_g

0xea05,	// (0x0004b803) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea05,	// (0x0004b803) list_single_cale_mrui_row_pane_g3

0x2076,	// (0x0003ee74) list_single_recal_day_pane_g5_event_pane

0x208c,	// (0x0003ee8a) list_single_recal_day_pane_g7

0xf068,	// (0x0004be66) list_recal_day_event_pane_cp01

0xf071,	// (0x0004be6f) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0004be77) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0004be7f) list_recal_vselct_pane_cp01

0xd925,	// (0x0004a723) list_recal_day_event_pane_cp01_g1

0x2238,	// (0x0003f036) list_recal_day_event_pane_cp01_t1

0x2094,	// (0x0003ee92) list_single_recal_day_pane_t1_ParamLimits

0x20a6,	// (0x0003eea4) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004cc40) list_single_recal_day_pane_t_ParamLimits

0xa75e,	// (0x0004755c) bg_notes_pane_ParamLimits

0xa801,	// (0x000475ff) list_notes_pane_ParamLimits

0x286d,	// (0x0003f66b) scroll_pane_cp06_ParamLimits

0xa823,	// (0x00047621) main_notes_pane_ParamLimits

0xa0d8,	// (0x00046ed6) main_welc_pane

0x9ff1,	// (0x00046def) main_welc_body_pane_ParamLimits

0x9ff1,	// (0x00046def) main_welc_body_pane

0xa00b,	// (0x00046e09) main_welc_opti_pane_ParamLimits

0xa00b,	// (0x00046e09) main_welc_opti_pane

0xa03e,	// (0x00046e3c) main_welc_pane_t1_ParamLimits

0xa03e,	// (0x00046e3c) main_welc_pane_t1

0xa058,	// (0x00046e56) main_welc_body_row_pane_ParamLimits

0xa058,	// (0x00046e56) main_welc_body_row_pane

0xdb26,	// (0x0004a924) main_welc_opti_row_pane_ParamLimits

0xdb26,	// (0x0004a924) main_welc_opti_row_pane

0xf08b,	// (0x0004be89) main_welc_opti_row_pane_g1

0xa07d,	// (0x00046e7b) main_welc_opti_row_pane_t1

0xf093,	// (0x0004be91) main_welc_body_row_pane_t1

0xed78,	// (0x0004bb76) popup_notif_wgt_heading_pane

0xed92,	// (0x0004bb90) aid_size_list_notif_wgt_del_ParamLimits

0xed9f,	// (0x0004bb9d) list_notif_wgt_row_pane_g1_ParamLimits

0xedab,	// (0x0004bba9) list_notif_wgt_row_pane_g2_ParamLimits

0xedbf,	// (0x0004bbbd) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004cca7) list_notif_wgt_row_pane_g_ParamLimits

0xedcc,	// (0x0004bbca) list_notif_wgt_row_pane_t1_ParamLimits

0xede2,	// (0x0004bbe0) list_notif_wgt_row_pane_t2_ParamLimits

0xedf4,	// (0x0004bbf2) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004ccae) list_notif_wgt_row_pane_t_ParamLimits

0x9b55,	// (0x00046953) listrow_wgtman_pane_g1_ParamLimits

0x9b62,	// (0x00046960) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004ccd7) listrow_wgtman_pane_g_ParamLimits

0x2133,	// (0x0003ef31) listrow_wgtman_pane_t1_ParamLimits

0x214b,	// (0x0003ef49) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004ccdc) listrow_wgtman_pane_t_ParamLimits

0x2171,	// (0x0003ef6f) wait_bar_pane_cp09_ParamLimits

0xa0d8,	// (0x00046ed6) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0004bea0) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0004bea8) popup_notif_wgt_heading_pane_t1

0xa0d8,	// (0x00046ed6) main_vids_pane

0xa0d8,	// (0x00046ed6) vids_listscroll_pane

0xa08c,	// (0x00046e8a) scroll_pane_cp040

0xa0d8,	// (0x00046ed6) vids_list_pane

0xa097,	// (0x00046e95) vids_list_double_pane_ParamLimits

0xa097,	// (0x00046e95) vids_list_double_pane

0xa0b1,	// (0x00046eaf) vids_list_double_pane_g1

0xa0ba,	// (0x00046eb8) vids_list_double_pane_t1

0xa0ca,	// (0x00046ec8) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004cd60) vids_list_double_pane_t

0xb05e,	// (0x00047e5c) main_ncimui_pane_ParamLimits

0x8c0e,	// (0x00045a0c) main_ncimui_pane_g1_ParamLimits

0x8c1a,	// (0x00045a18) main_ncimui_pane_g2_ParamLimits

0x8c1a,	// (0x00045a18) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0004c9e8) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0004c9e8) main_ncimui_pane_g

0xa024,	// (0x00046e22) main_welc_pane_g1_ParamLimits

0xa024,	// (0x00046e22) main_welc_pane_g1

0xa030,	// (0x00046e2e) main_welc_pane_g2_ParamLimits

0xa030,	// (0x00046e2e) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004cd5b) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004cd5b) main_welc_pane_g

0xa75e,	// (0x0004755c) listscroll_mce_pane_ParamLimits

0xb45b,	// (0x00048259) wait_bar_pane_cp10

0xc84f,	// (0x0004964d) main_cale_day_pane_ParamLimits

0xc84f,	// (0x0004964d) main_cale_week_pane_ParamLimits

0xa75e,	// (0x0004755c) main_messa_pane_ParamLimits

0x685d,	// (0x0004365b) main_clock2_btn_pane_ParamLimits

0x685d,	// (0x0004365b) main_clock2_btn_pane

0xd077,	// (0x00049e75) main_clock2_btn_pane_cp01_ParamLimits

0xd077,	// (0x00049e75) main_clock2_btn_pane_cp01

0xe9d6,	// (0x0004b7d4) list_cale_mrui_pane_ParamLimits

0xee2a,	// (0x0004bc28) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004ccb5) main_cf0_pane_g

0x9cff,	// (0x00046afd) area_left_week_number_pane_ParamLimits

0x9d12,	// (0x00046b10) area_top_day_name_pane_ParamLimits

0x9d20,	// (0x00046b1e) frame_month_view_pane_ParamLimits

0xef52,	// (0x0004bd50) grid_month_view_pane_ParamLimits

0xef60,	// (0x0004bd5e) frm_month_g1_ParamLimits

0x9d9e,	// (0x00046b9c) frm_month_g2_ParamLimits

0x9daf,	// (0x00046bad) frm_month_g3_ParamLimits

0x9dc0,	// (0x00046bbe) frm_month_g4_ParamLimits

0x9dd1,	// (0x00046bcf) frm_month_g5_ParamLimits

0x9de4,	// (0x00046be2) frm_month_g6_ParamLimits

0x9df7,	// (0x00046bf5) frm_month_g7_ParamLimits

0xef6d,	// (0x0004bd6b) frm_month_g8_ParamLimits

0x9e0a,	// (0x00046c08) frm_month_g9_ParamLimits

0x9e17,	// (0x00046c15) frm_month_g10_ParamLimits

0x9e24,	// (0x00046c22) frm_month_g11_ParamLimits

0x9e31,	// (0x00046c2f) frm_month_g12_ParamLimits

0x9e3e,	// (0x00046c3c) frm_month_g13_ParamLimits

0x9e4b,	// (0x00046c49) frm_month_g14_ParamLimits

0x9e5a,	// (0x00046c58) frm_month_g15_ParamLimits

0x9e69,	// (0x00046c67) frm_month_g16_ParamLimits

0xff08,	// (0x0004cd06) frm_month_g_ParamLimits

0xef7a,	// (0x0004bd78) cell_top_day_name_pane_t1_ParamLimits

0x9e78,	// (0x00046c76) cell_area_left_week_number_pane_g1_ParamLimits

0x9e87,	// (0x00046c85) cell_area_left_week_number_pane_t1_ParamLimits

0xcecf,	// (0x00049ccd) cell_month_view_pane_g1_ParamLimits

0x9e9d,	// (0x00046c9b) cell_month_view_pane_t1_ParamLimits

0xa756,	// (0x00047554) main_clock2_btn_pane_g1

0xf0b8,	// (0x0004beb6) main_clock2_btn_pane_t1

0xb05e,	// (0x00047e5c) listscroll_cmail_pane_ParamLimits

0xe7a0,	// (0x0004b59e) main_sp_fs_email_pane_g1_ParamLimits

0xe7ac,	// (0x0004b5aa) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0004cae3) main_sp_fs_email_pane_g_ParamLimits

0xeae5,	// (0x0004b8e3) list_recal_day_pane_ParamLimits

0xeaf6,	// (0x0004b8f4) mian_recal_day_pane_t1

0x1a2e,	// (0x0003e82c) list_single_dyc_row_text_pane_t4_ParamLimits

0x1a2e,	// (0x0003e82c) list_single_dyc_row_text_pane_t4

0x1a65,	// (0x0003e863) list_single_dyc_row_text_pane_t5_ParamLimits

0x1a65,	// (0x0003e863) list_single_dyc_row_text_pane_t5

0x1adb,	// (0x0003e8d9) list_single_dyc_row_text_pane_t6_ParamLimits

0x1adb,	// (0x0003e8d9) list_single_dyc_row_text_pane_t6

0x4539,	// (0x00041337) aid_mgn_list_cale_time_pane

0xb05e,	// (0x00047e5c) main_gallery2_pane_ParamLimits

0xd08d,	// (0x00049e8b) main_clock2_pane_cp01_t1

0xd09d,	// (0x00049e9b) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0004c5c2) main_clock2_pane_cp01_t

0x2caf,	// (0x0003faad) cale_week_scroll_pane_g16_ParamLimits

0x2caf,	// (0x0003faad) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
