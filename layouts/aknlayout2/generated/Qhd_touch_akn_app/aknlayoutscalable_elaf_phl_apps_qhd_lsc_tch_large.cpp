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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007ab9b };

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
0x10bc,	// (0x0007bc57) Screen

0x10c8,	// (0x0007bc63) application_window

0x110e,	// (0x0007bca9) area_bottom_pane_ParamLimits

0x110e,	// (0x0007bca9) area_bottom_pane

0x1147,	// (0x0007bce2) area_top_pane_ParamLimits

0x1147,	// (0x0007bce2) area_top_pane

0xa523,	// (0x000850be) call_video_uplink_pane_ParamLimits

0xa523,	// (0x000850be) call_video_uplink_pane

0x11d5,	// (0x0007bd70) main_pane_ParamLimits

0x11d5,	// (0x0007bd70) main_pane

0xcd4b,	// (0x000878e6) context_pane

0x3e24,	// (0x0007e9bf) navi_pane

0x3e56,	// (0x0007e9f1) popup_cale_events_window_ParamLimits

0x3e56,	// (0x0007e9f1) popup_cale_events_window

0xcd5e,	// (0x000878f9) popup_mup_playback_window

0x3e6e,	// (0x0007ea09) signal_pane

0xacc3,	// (0x0008585e) main_browser_pane

0xaf08,	// (0x00085aa3) main_burst_pane

0x3b84,	// (0x0007e71f) main_calc_pane

0xcceb,	// (0x00087886) main_cale_day_pane

0x1633,	// (0x0007c1ce) main_cale_month_pane

0xcceb,	// (0x00087886) main_cale_week_pane

0xaf08,	// (0x00085aa3) main_call_pane

0xa92f,	// (0x000854ca) main_call_poc_pane

0xaf08,	// (0x00085aa3) main_camera_pane

0xaf08,	// (0x00085aa3) main_chi_dic_pane

0xb762,	// (0x000862fd) main_clock_pane

0xa92f,	// (0x000854ca) main_fmradio_pane

0xaf08,	// (0x00085aa3) main_graph_messa_pane

0xa92f,	// (0x000854ca) main_help_pane

0xacc3,	// (0x0008585e) main_im_pane

0xab8a,	// (0x00085725) main_image_pane_ParamLimits

0xab8a,	// (0x00085725) main_image_pane

0xa92f,	// (0x000854ca) main_location2_pane

0xaf08,	// (0x00085aa3) main_location_pane

0xab8a,	// (0x00085725) main_messa_pane

0xa92f,	// (0x000854ca) main_mp2_pane

0xaf08,	// (0x00085aa3) main_mp_pane

0xa92f,	// (0x000854ca) main_msg_pane

0xa92f,	// (0x000854ca) main_mup_eq_pane

0xa92f,	// (0x000854ca) main_mup_pane

0xacc3,	// (0x0008585e) main_notes_pane

0xa92f,	// (0x000854ca) main_pec_pane

0xa92f,	// (0x000854ca) main_phob_pane

0xa92f,	// (0x000854ca) main_pinb_pane

0xa92f,	// (0x000854ca) main_postcard_pane

0xa92f,	// (0x000854ca) main_qdial_pane

0xaf08,	// (0x00085aa3) main_skin_pane

0xa92f,	// (0x000854ca) main_smil2_pane

0xaf08,	// (0x00085aa3) main_smil_pane

0xaf08,	// (0x00085aa3) main_video_pane

0xaf08,	// (0x00085aa3) main_video_tele_pane

0xab8a,	// (0x00085725) main_viewer_pane_ParamLimits

0xab8a,	// (0x00085725) main_viewer_pane

0xaf08,	// (0x00085aa3) main_vorec_pane

0x3bd8,	// (0x0007e773) popup_blid_sat_info_window_ParamLimits

0x3bd8,	// (0x0007e773) popup_blid_sat_info_window

0x3c30,	// (0x0007e7cb) popup_dyc_status_message_window_ParamLimits

0x3c30,	// (0x0007e7cb) popup_dyc_status_message_window

0x3c4a,	// (0x0007e7e5) popup_grid_large_graphic_window_ParamLimits

0x3c4a,	// (0x0007e7e5) popup_grid_large_graphic_window

0x3d06,	// (0x0007e8a1) popup_loc_request_window_ParamLimits

0x3d06,	// (0x0007e8a1) popup_loc_request_window

0x3dfc,	// (0x0007e997) popup_wml_address_window_ParamLimits

0x3dfc,	// (0x0007e997) popup_wml_address_window

0x39be,	// (0x0007e559) call_muted_g1

0x36b4,	// (0x0007e24f) popup_call_audio_conf_window_ParamLimits

0x36b4,	// (0x0007e24f) popup_call_audio_conf_window

0x39d2,	// (0x0007e56d) popup_call_audio_first_window_ParamLimits

0x39d2,	// (0x0007e56d) popup_call_audio_first_window

0x3a48,	// (0x0007e5e3) popup_call_audio_in_window_ParamLimits

0x3a48,	// (0x0007e5e3) popup_call_audio_in_window

0x3a84,	// (0x0007e61f) popup_call_audio_out_window_ParamLimits

0x3a84,	// (0x0007e61f) popup_call_audio_out_window

0x3abe,	// (0x0007e659) popup_call_audio_second_window_ParamLimits

0x3abe,	// (0x0007e659) popup_call_audio_second_window

0x3b14,	// (0x0007e6af) popup_call_audio_wait_window_ParamLimits

0x3b14,	// (0x0007e6af) popup_call_audio_wait_window

0x3b49,	// (0x0007e6e4) popup_number_entry_window_ParamLimits

0x3b49,	// (0x0007e6e4) popup_number_entry_window

0x135c,	// (0x0007bef7) bg_popup_call_pane_cp05_ParamLimits

0x135c,	// (0x0007bef7) bg_popup_call_pane_cp05

0x137c,	// (0x0007bf17) popup_number_entry_window_t1

0xa54f,	// (0x000850ea) popup_number_entry_window_t2

0xa561,	// (0x000850fc) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00089bdb) popup_number_entry_window_t

0xa573,	// (0x0008510e) text_title_cp2

0xa586,	// (0x00085121) bg_popup_call_pane_cp_ParamLimits

0xa586,	// (0x00085121) bg_popup_call_pane_cp

0xa594,	// (0x0008512f) call_thumbnail_pane

0xa59c,	// (0x00085137) popup_call_audio_in_window_g1_ParamLimits

0xa59c,	// (0x00085137) popup_call_audio_in_window_g1

0xa5a8,	// (0x00085143) popup_call_audio_in_window_g2_ParamLimits

0xa5a8,	// (0x00085143) popup_call_audio_in_window_g2

0xa5b4,	// (0x0008514f) popup_call_audio_in_window_g3_ParamLimits

0xa5b4,	// (0x0008514f) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00089be4) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00089be4) popup_call_audio_in_window_g

0xa5c0,	// (0x0008515b) popup_call_audio_in_window_t1_ParamLimits

0xa5c0,	// (0x0008515b) popup_call_audio_in_window_t1

0xa5dc,	// (0x00085177) popup_call_audio_in_window_t2_ParamLimits

0xa5dc,	// (0x00085177) popup_call_audio_in_window_t2

0xa5f8,	// (0x00085193) popup_call_audio_in_window_t3_ParamLimits

0xa5f8,	// (0x00085193) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00089beb) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00089beb) popup_call_audio_in_window_t

0xa586,	// (0x00085121) bg_popup_call_pane_cp01_ParamLimits

0xa586,	// (0x00085121) bg_popup_call_pane_cp01

0xa594,	// (0x0008512f) call_thumbnail_pane_cp02

0xa60b,	// (0x000851a6) call_type_pane_cp022

0xa613,	// (0x000851ae) popup_call_audio_out_window_g1_ParamLimits

0xa613,	// (0x000851ae) popup_call_audio_out_window_g1

0xa625,	// (0x000851c0) popup_call_audio_out_window_g2_ParamLimits

0xa625,	// (0x000851c0) popup_call_audio_out_window_g2

0xa631,	// (0x000851cc) popup_call_audio_out_window_g3_ParamLimits

0xa631,	// (0x000851cc) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00089bf2) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00089bf2) popup_call_audio_out_window_g

0xa643,	// (0x000851de) popup_call_audio_out_window_t1_ParamLimits

0xa643,	// (0x000851de) popup_call_audio_out_window_t1

0xa65b,	// (0x000851f6) popup_call_audio_out_window_t2_ParamLimits

0xa65b,	// (0x000851f6) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00089bf9) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00089bf9) popup_call_audio_out_window_t

0xa670,	// (0x0008520b) bg_popup_call_pane_ParamLimits

0xa670,	// (0x0008520b) bg_popup_call_pane

0x13c3,	// (0x0007bf5e) call_thumbnail_pane_cp_ParamLimits

0x13c3,	// (0x0007bf5e) call_thumbnail_pane_cp

0xa6f4,	// (0x0008528f) call_type_pane_cp01_ParamLimits

0xa6f4,	// (0x0008528f) call_type_pane_cp01

0xa738,	// (0x000852d3) popup_call_audio_first_window_g1_ParamLimits

0xa738,	// (0x000852d3) popup_call_audio_first_window_g1

0xa784,	// (0x0008531f) popup_call_audio_first_window_g2_ParamLimits

0xa784,	// (0x0008531f) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00089bfe) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00089bfe) popup_call_audio_first_window_g

0xa7c8,	// (0x00085363) popup_call_audio_first_window_t1_ParamLimits

0xa7c8,	// (0x00085363) popup_call_audio_first_window_t1

0xa874,	// (0x0008540f) popup_call_audio_first_window_t4_ParamLimits

0xa874,	// (0x0008540f) popup_call_audio_first_window_t4

0xa900,	// (0x0008549b) popup_call_audio_first_window_t5_ParamLimits

0xa900,	// (0x0008549b) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00089c03) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00089c03) popup_call_audio_first_window_t

0xa92f,	// (0x000854ca) bg_popup_call_pane_cp02

0xa939,	// (0x000854d4) call_type_pane_cp023

0xa941,	// (0x000854dc) popup_call_audio_wait_window_g1

0xa949,	// (0x000854e4) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00089c0a) popup_call_audio_wait_window_g

0xa951,	// (0x000854ec) popup_call_audio_wait_window_t3

0xa95f,	// (0x000854fa) bg_popup_call_pane_cp03_ParamLimits

0xa95f,	// (0x000854fa) bg_popup_call_pane_cp03

0xa9bf,	// (0x0008555a) call_thumbnail_pane_cp011_ParamLimits

0xa9bf,	// (0x0008555a) call_thumbnail_pane_cp011

0xa9cb,	// (0x00085566) call_type_pane_cp034_ParamLimits

0xa9cb,	// (0x00085566) call_type_pane_cp034

0xaa07,	// (0x000855a2) popup_call_audio_second_window_g1_ParamLimits

0xaa07,	// (0x000855a2) popup_call_audio_second_window_g1

0xaa43,	// (0x000855de) popup_call_audio_second_window_g2_ParamLimits

0xaa43,	// (0x000855de) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00089c0f) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00089c0f) popup_call_audio_second_window_g

0xaa7f,	// (0x0008561a) popup_call_audio_second_window_t1_ParamLimits

0xaa7f,	// (0x0008561a) popup_call_audio_second_window_t1

0xab00,	// (0x0008569b) popup_call_audio_second_window_t2_ParamLimits

0xab00,	// (0x0008569b) popup_call_audio_second_window_t2

0xab36,	// (0x000856d1) popup_call_audio_second_window_t3_ParamLimits

0xab36,	// (0x000856d1) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00089c14) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00089c14) popup_call_audio_second_window_t

0xa92f,	// (0x000854ca) bg_popup_call_pane_cp04

0xab6c,	// (0x00085707) list_conf_pane

0xab74,	// (0x0008570f) popup_call_audio_conf_window_t1

0xab82,	// (0x0008571d) call_thumbnail_pane_g1

0xab8a,	// (0x00085725) bg_pinb_pane_ParamLimits

0xab8a,	// (0x00085725) bg_pinb_pane

0xab98,	// (0x00085733) find_pinb_pane

0xab8a,	// (0x00085725) listscroll_pinb_pane_ParamLimits

0xab8a,	// (0x00085725) listscroll_pinb_pane

0xaba2,	// (0x0008573d) pinb_bg_pane_g1

0xaba2,	// (0x0008573d) pinb_bg_pane_g2

0xaba2,	// (0x0008573d) pinb_bg_pane_g3

0xaba2,	// (0x0008573d) pinb_bg_pane_g4

0xaba2,	// (0x0008573d) pinb_bg_pane_g5

0xaba2,	// (0x0008573d) pinb_bg_pane_g6

0xaba2,	// (0x0008573d) pinb_bg_pane_g7

0xaba2,	// (0x0008573d) pinb_bg_pane_g8

0xaba2,	// (0x0008573d) pinb_bg_pane_g9

0xaba2,	// (0x0008573d) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00089c1b) pinb_bg_pane_g

0x10d4,	// (0x0007bc6f) grid_pinb_pane

0x10d4,	// (0x0007bc6f) list_pinb_pane

0xa541,	// (0x000850dc) scroll_pane_cp01_ParamLimits

0xa541,	// (0x000850dc) scroll_pane_cp01

0xabac,	// (0x00085747) find_pinb_pane_g1_ParamLimits

0xabac,	// (0x00085747) find_pinb_pane_g1

0xabc4,	// (0x0008575f) find_pinb_pane_t1

0xabd6,	// (0x00085771) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00089c35) find_pinb_pane_t

0xabeb,	// (0x00085786) input_focus_pane_cp01_ParamLimits

0xabeb,	// (0x00085786) input_focus_pane_cp01

0xabf7,	// (0x00085792) cell_pinb_pane_ParamLimits

0xabf7,	// (0x00085792) cell_pinb_pane

0xac05,	// (0x000857a0) cell_pinb_pane_g1_ParamLimits

0xac05,	// (0x000857a0) cell_pinb_pane_g1

0xac13,	// (0x000857ae) cell_pinb_pane_g2_ParamLimits

0xac13,	// (0x000857ae) cell_pinb_pane_g2

0xac13,	// (0x000857ae) cell_pinb_pane_g3_ParamLimits

0xac13,	// (0x000857ae) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00089c3a) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00089c3a) cell_pinb_pane_g

0xa92f,	// (0x000854ca) grid_highlight_pane_cp01

0xabf7,	// (0x00085792) list_pinb_item_pane_ParamLimits

0xabf7,	// (0x00085792) list_pinb_item_pane

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp02

0xac21,	// (0x000857bc) list_pinb_item_pane_g1_ParamLimits

0xac21,	// (0x000857bc) list_pinb_item_pane_g1

0xac13,	// (0x000857ae) list_pinb_item_pane_g2_ParamLimits

0xac13,	// (0x000857ae) list_pinb_item_pane_g2

0xac05,	// (0x000857a0) list_pinb_item_pane_g3_ParamLimits

0xac05,	// (0x000857a0) list_pinb_item_pane_g3

0xac13,	// (0x000857ae) list_pinb_item_pane_g4_ParamLimits

0xac13,	// (0x000857ae) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00089c41) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00089c41) list_pinb_item_pane_g

0xac2f,	// (0x000857ca) list_pinb_item_pane_t1_ParamLimits

0xac2f,	// (0x000857ca) list_pinb_item_pane_t1

0x1405,	// (0x0007bfa0) calc_display_pane

0x142a,	// (0x0007bfc5) calc_paper_pane

0x144d,	// (0x0007bfe8) grid_calc_pane

0x10d4,	// (0x0007bc6f) bg_list_pane_cp01

0xac4b,	// (0x000857e6) clock_g1

0xac4b,	// (0x000857e6) clock_g2

0x0001,

0xf0af,	// (0x00089c4a) clock_g

0xac55,	// (0x000857f0) clock_t1_ParamLimits

0xac55,	// (0x000857f0) clock_t1

0xac69,	// (0x00085804) clock_t2_ParamLimits

0xac69,	// (0x00085804) clock_t2

0xac69,	// (0x00085804) clock_t3_ParamLimits

0xac69,	// (0x00085804) clock_t3

0xac69,	// (0x00085804) clock_t4_ParamLimits

0xac69,	// (0x00085804) clock_t4

0xac55,	// (0x000857f0) clock_t5_ParamLimits

0xac55,	// (0x000857f0) clock_t5

0xac69,	// (0x00085804) clock_t6_ParamLimits

0xac69,	// (0x00085804) clock_t6

0xac69,	// (0x00085804) clock_t7_ParamLimits

0xac69,	// (0x00085804) clock_t7

0xac69,	// (0x00085804) clock_t8_ParamLimits

0xac69,	// (0x00085804) clock_t8

0xac69,	// (0x00085804) clock_t9_ParamLimits

0xac69,	// (0x00085804) clock_t9

0x0008,

0xf0b4,	// (0x00089c4f) clock_t_ParamLimits

0xf0b4,	// (0x00089c4f) clock_t

0x10d4,	// (0x0007bc6f) popup_clock_analogue_window_cp02

0x10d4,	// (0x0007bc6f) popup_clock_digital_window_cp01

0xa92f,	// (0x000854ca) listscroll_help_pane

0xa92f,	// (0x000854ca) phob_pre_status_pane

0xac7d,	// (0x00085818) grid_qdial_pane

0xab8a,	// (0x00085725) listscroll_mce_pane

0xab8a,	// (0x00085725) bg_notes_pane

0xac87,	// (0x00085822) list_notes_pane

0x147b,	// (0x0007c016) scroll_pane_cp06

0xac95,	// (0x00085830) bg_calc_paper_pane

0xaca9,	// (0x00085844) list_calc_pane

0xacc3,	// (0x0008585e) bg_calc_display_pane

0x148f,	// (0x0007c02a) calc_display_pane_t1

0x14a4,	// (0x0007c03f) calc_display_pane_t2

0xaccf,	// (0x0008586a) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00089c62) calc_display_pane_t

0x14b9,	// (0x0007c054) cell_calc_pane_ParamLimits

0x14b9,	// (0x0007c054) cell_calc_pane

0xace1,	// (0x0008587c) bg_calc_paper_pane_g1

0xaced,	// (0x00085888) bg_calc_paper_pane_g2

0xacf9,	// (0x00085894) bg_calc_paper_pane_g3

0xad05,	// (0x000858a0) bg_calc_paper_pane_g4

0xad11,	// (0x000858ac) bg_calc_paper_pane_g5

0x14ee,	// (0x0007c089) bg_calc_paper_pane_g6

0x14fd,	// (0x0007c098) bg_calc_paper_pane_g7

0x150c,	// (0x0007c0a7) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00089c69) bg_calc_paper_pane_g

0x151f,	// (0x0007c0ba) calc_bg_paper_pane_g9

0x1532,	// (0x0007c0cd) list_calc_item_pane_ParamLimits

0x1532,	// (0x0007c0cd) list_calc_item_pane

0xad1d,	// (0x000858b8) list_calc_item_pane_g1

0xad2a,	// (0x000858c5) list_calc_item_pane_t1_ParamLimits

0xad2a,	// (0x000858c5) list_calc_item_pane_t1

0x154a,	// (0x0007c0e5) list_calc_item_pane_t2_ParamLimits

0x154a,	// (0x0007c0e5) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00089c7a) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00089c7a) list_calc_item_pane_t

0xaba2,	// (0x0008573d) cell_calc_pane_g1

0xad3c,	// (0x000858d7) grid_highlight_pane_cp02

0xad5e,	// (0x000858f9) bg_calc_display_pane_g1

0x157c,	// (0x0007c117) bg_calc_display_pane_g2

0x1586,	// (0x0007c121) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00089c84) bg_calc_display_pane_g

0x158f,	// (0x0007c12a) cell_qdial_pane_ParamLimits

0x158f,	// (0x0007c12a) cell_qdial_pane

0x15a3,	// (0x0007c13e) cell_qdial_pane_g1_ParamLimits

0x15a3,	// (0x0007c13e) cell_qdial_pane_g1

0x15b9,	// (0x0007c154) cell_qdial_pane_g2_ParamLimits

0x15b9,	// (0x0007c154) cell_qdial_pane_g2

0xad67,	// (0x00085902) cell_qdial_pane_g3_ParamLimits

0xad67,	// (0x00085902) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00089c8b) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00089c8b) cell_qdial_pane_g

0x15e0,	// (0x0007c17b) cell_qdial_pane_t1_ParamLimits

0x15e0,	// (0x0007c17b) cell_qdial_pane_t1

0x15f8,	// (0x0007c193) cell_qdial_pane_t2_ParamLimits

0x15f8,	// (0x0007c193) cell_qdial_pane_t2

0x160b,	// (0x0007c1a6) cell_qdial_pane_t3_ParamLimits

0x160b,	// (0x0007c1a6) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00089c94) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00089c94) cell_qdial_pane_t

0xa92f,	// (0x000854ca) grid_highlight_pane_cp04

0xad73,	// (0x0008590e) thumbnail_qdial_pane_ParamLimits

0xad73,	// (0x0008590e) thumbnail_qdial_pane

0xadcf,	// (0x0008596a) list_help_pane

0xadd8,	// (0x00085973) scroll_pane_cp02

0xade1,	// (0x0008597c) help_list_pane_t1_ParamLimits

0xade1,	// (0x0008597c) help_list_pane_t1

0xadff,	// (0x0008599a) bg_notes_pane_g2

0xae07,	// (0x000859a2) bg_notes_pane_g3

0xae0f,	// (0x000859aa) notes_bg_pane_g1

0xae17,	// (0x000859b2) notes_bg_pane_g4

0xae1f,	// (0x000859ba) notes_bg_pane_g5

0xae27,	// (0x000859c2) notes_bg_pane_g6

0xae2f,	// (0x000859ca) notes_bg_pane_g7

0xae37,	// (0x000859d2) notes_bg_pane_g8

0xae3f,	// (0x000859da) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00089cb2) notes_bg_pane_g

0x161e,	// (0x0007c1b9) list_notes_text_pane_ParamLimits

0x161e,	// (0x0007c1b9) list_notes_text_pane

0xae47,	// (0x000859e2) list_notes_text_pane_g1

0x0817,	// (0x0007b3b2) list_notes_text_pane_t1

0x1633,	// (0x0007c1ce) listscroll_cale_week_pane

0x165f,	// (0x0007c1fa) bg_cale_heading_pane

0xae6a,	// (0x00085a05) bg_cale_pane_cp01

0x1677,	// (0x0007c212) cale_week_corner_pane

0x1696,	// (0x0007c231) cale_week_day_heading_pane

0x16b3,	// (0x0007c24e) cale_week_scroll_pane_g1

0x16c6,	// (0x0007c261) cale_week_scroll_pane_g2

0x16de,	// (0x0007c279) cale_week_scroll_pane_g3

0x16f6,	// (0x0007c291) cale_week_scroll_pane_g4

0x170e,	// (0x0007c2a9) cale_week_scroll_pane_g5

0x172e,	// (0x0007c2c9) cale_week_scroll_pane_g6

0x174e,	// (0x0007c2e9) cale_week_scroll_pane_g7

0x176e,	// (0x0007c309) cale_week_scroll_pane_g8

0x1792,	// (0x0007c32d) cale_week_scroll_pane_g9

0x17aa,	// (0x0007c345) cale_week_scroll_pane_g10

0x17c2,	// (0x0007c35d) cale_week_scroll_pane_g11

0x17da,	// (0x0007c375) cale_week_scroll_pane_g12

0x17f2,	// (0x0007c38d) cale_week_scroll_pane_g13

0x17f2,	// (0x0007c38d) cale_week_scroll_pane_g14

0x17f2,	// (0x0007c38d) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00089cc1) cale_week_scroll_pane_g

0x182e,	// (0x0007c3c9) cale_week_time_pane

0x1852,	// (0x0007c3ed) grid_cale_week_pane

0xae99,	// (0x00085a34) scroll_pane_cp08

0x1878,	// (0x0007c413) cell_cale_week_pane_ParamLimits

0x1878,	// (0x0007c413) cell_cale_week_pane

0x1906,	// (0x0007c4a1) cale_week_day_heading_pane_t1

0x1930,	// (0x0007c4cb) cale_week_day_heading_pane_t2

0x195f,	// (0x0007c4fa) cale_week_day_heading_pane_t3

0x198e,	// (0x0007c529) cale_week_day_heading_pane_t4

0x19bd,	// (0x0007c558) cale_week_day_heading_pane_t5

0x19f4,	// (0x0007c58f) cale_week_day_heading_pane_t6

0x1a2b,	// (0x0007c5c6) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00089ce2) cale_week_day_heading_pane_t

0xaeb6,	// (0x00085a51) bg_cale_side_pane

0x1a55,	// (0x0007c5f0) cale_week_time_pane_t1

0x1a6f,	// (0x0007c60a) cale_week_time_pane_t2

0x1a89,	// (0x0007c624) cale_week_time_pane_t3

0x1aa3,	// (0x0007c63e) cale_week_time_pane_t4

0x1abd,	// (0x0007c658) cale_week_time_pane_t5

0x1ad7,	// (0x0007c672) cale_week_time_pane_t6

0x1af1,	// (0x0007c68c) cale_week_time_pane_t7

0x1b0b,	// (0x0007c6a6) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00089cf1) cale_week_time_pane_t

0x1b25,	// (0x0007c6c0) cell_cale_week_pane_g2

0x1b44,	// (0x0007c6df) cell_cale_week_pane_g3_ParamLimits

0x1b44,	// (0x0007c6df) cell_cale_week_pane_g3

0xaec4,	// (0x00085a5f) grid_highlight_pane_cp07

0xaecc,	// (0x00085a67) listscroll_gms_pane

0xaed6,	// (0x00085a71) grid_gms_pane

0xaedf,	// (0x00085a7a) listscroll_gms_pane_g1

0xaee7,	// (0x00085a82) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00089d02) listscroll_gms_pane_g

0x1b5c,	// (0x0007c6f7) scroll_pane_cp010

0x1b67,	// (0x0007c702) cell_gms_pane_ParamLimits

0x1b67,	// (0x0007c702) cell_gms_pane

0x1b7a,	// (0x0007c715) cell_gms_pane_g1

0xaeef,	// (0x00085a8a) cell_gms_pane_g2

0xae47,	// (0x000859e2) cell_gms_pane_g3

0xaef7,	// (0x00085a92) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00089d07) cell_gms_pane_g

0xaf00,	// (0x00085a9b) grid_highlight_pane_cp09

0x3946,	// (0x0007e4e1) phob_pre_status_pane_g1

0x394e,	// (0x0007e4e9) phob_pre_status_pane_g2

0x3956,	// (0x0007e4f1) phob_pre_status_pane_g3

0x395e,	// (0x0007e4f9) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x0008a0b6) phob_pre_status_pane_g

0x396e,	// (0x0007e509) phob_pre_status_pane_t1

0x397c,	// (0x0007e517) phob_pre_status_pane_t2

0x398c,	// (0x0007e527) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x0008a0c1) phob_pre_status_pane_t

0xaf08,	// (0x00085aa3) bg_list_pane_cp05

0x1b8a,	// (0x0007c725) grid_vorec_pane

0x1b92,	// (0x0007c72d) vorec_t1

0x1ba0,	// (0x0007c73b) vorec_t2

0x1bae,	// (0x0007c749) vorec_t3

0x1bbc,	// (0x0007c757) vorec_t4

0xebd5,	// (0x00089770) vorec_t5

0x96c1,	// (0x0008425c) vorec_t6

0x0004,

0xf175,	// (0x00089d10) vorec_t

0x96cf,	// (0x0008426a) wait_bar_pane_cp01

0x1bd8,	// (0x0007c773) cell_vorec_pane_ParamLimits

0x1bd8,	// (0x0007c773) cell_vorec_pane

0xaf10,	// (0x00085aab) cell_vorec_pane_g1

0xa92f,	// (0x000854ca) grid_highlight_pane_cp05

0xa541,	// (0x000850dc) cams_zoom_pane

0xa541,	// (0x000850dc) image_vga_pane

0xac05,	// (0x000857a0) main_camera_pane_g1

0xac05,	// (0x000857a0) main_camera_pane_g2

0xac05,	// (0x000857a0) main_camera_pane_g3

0xac05,	// (0x000857a0) main_camera_pane_g4

0xac05,	// (0x000857a0) main_camera_pane_g5

0xac05,	// (0x000857a0) main_camera_pane_g6

0xac05,	// (0x000857a0) main_camera_pane_g7

0x0007,

0xf180,	// (0x00089d1b) main_camera_pane_g

0xac55,	// (0x000857f0) main_camera_pane_t1

0xac55,	// (0x000857f0) main_camera_pane_t2

0x0001,

0xf191,	// (0x00089d2c) main_camera_pane_t

0x1bff,	// (0x0007c79a) cams_zoom_pane_cp_ParamLimits

0x1bff,	// (0x0007c79a) cams_zoom_pane_cp

0x1c33,	// (0x0007c7ce) image_cif_pane_ParamLimits

0x1c33,	// (0x0007c7ce) image_cif_pane

0x10d4,	// (0x0007bc6f) image_subqcif_pane

0x1c45,	// (0x0007c7e0) main_video_pane_g1_ParamLimits

0x1c45,	// (0x0007c7e0) main_video_pane_g1

0x1c73,	// (0x0007c80e) main_video_pane_g2_ParamLimits

0x1c73,	// (0x0007c80e) main_video_pane_g2

0x1cad,	// (0x0007c848) main_video_pane_g3_ParamLimits

0x1cad,	// (0x0007c848) main_video_pane_g3

0x1cad,	// (0x0007c848) main_video_pane_g4_ParamLimits

0x1cad,	// (0x0007c848) main_video_pane_g4

0x1ce1,	// (0x0007c87c) main_video_pane_g5_ParamLimits

0x1ce1,	// (0x0007c87c) main_video_pane_g5

0xaf1a,	// (0x00085ab5) main_video_pane_g6_ParamLimits

0xaf1a,	// (0x00085ab5) main_video_pane_g6

0x0006,

0xf196,	// (0x00089d31) main_video_pane_g_ParamLimits

0xf196,	// (0x00089d31) main_video_pane_g

0x1cfd,	// (0x0007c898) main_video_pane_t1_ParamLimits

0x1cfd,	// (0x0007c898) main_video_pane_t1

0xac4b,	// (0x000857e6) cams_zoom_pane_g1

0xac4b,	// (0x000857e6) cams_zoom_pane_g2

0xac4b,	// (0x000857e6) cams_zoom_pane_g3

0xac4b,	// (0x000857e6) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00089d40) cams_zoom_pane_g

0xa541,	// (0x000850dc) grid_cams_pane

0xa541,	// (0x000850dc) linegrid_cams_pane

0x1d41,	// (0x0007c8dc) cell_cams_pane_ParamLimits

0x1d41,	// (0x0007c8dc) cell_cams_pane

0x10d4,	// (0x0007bc6f) cams_burst_image_pane

0xac4b,	// (0x000857e6) cell_cams_pane_g1

0x10d4,	// (0x0007bc6f) grid_highlight_pane_cp03

0xaba2,	// (0x0008573d) mp_bg_pane_g1

0x10d4,	// (0x0007bc6f) bg_list_pane_cp03

0x10d4,	// (0x0007bc6f) bg_mp_pane

0x10d4,	// (0x0007bc6f) grid_mp_pane

0xac4b,	// (0x000857e6) media_player_g1

0xb483,	// (0x0008601e) media_player_t1

0xb483,	// (0x0008601e) media_player_t2

0xb483,	// (0x0008601e) media_player_t3

0xb483,	// (0x0008601e) media_player_t4

0xb483,	// (0x0008601e) media_player_t5

0xb483,	// (0x0008601e) media_player_t6

0xb483,	// (0x0008601e) media_player_t7

0x0006,

0xf505,	// (0x0008a0a0) media_player_t

0x10d4,	// (0x0007bc6f) wait_bar_pane_cp02

0xf4ea,	// (0x0008a085) main_usb_pane_t

0xb762,	// (0x000862fd) cell_mp_pane

0xaba2,	// (0x0008573d) cell_mp_pane_g1

0xa92f,	// (0x000854ca) grid_highlight_pane_cp06

0xaf34,	// (0x00085acf) grid_skin_colour_pane

0xaf3c,	// (0x00085ad7) list_highlight_pane_cp03

0x1d56,	// (0x0007c8f1) skin_g1

0xaf44,	// (0x00085adf) skin_t1

0xaf53,	// (0x00085aee) skin_t2

0x0001,

0xf1d3,	// (0x00089d6e) skin_t

0x1d5e,	// (0x0007c8f9) cell_skin_colour_pane_ParamLimits

0x1d5e,	// (0x0007c8f9) cell_skin_colour_pane

0xaf61,	// (0x00085afc) cell_skin_colour_pane_g1

0x1dd7,	// (0x0007c972) call_video_g1_ParamLimits

0x1dd7,	// (0x0007c972) call_video_g1

0x1df3,	// (0x0007c98e) call_video_g2_ParamLimits

0x1df3,	// (0x0007c98e) call_video_g2

0x0001,

0xf1d8,	// (0x00089d73) call_video_g_ParamLimits

0xf1d8,	// (0x00089d73) call_video_g

0x1e45,	// (0x0007c9e0) call_video_uplink_pane_cp1_ParamLimits

0x1e45,	// (0x0007c9e0) call_video_uplink_pane_cp1

0xaf73,	// (0x00085b0e) call_video_uplink_pane_cp2

0x1ee4,	// (0x0007ca7f) video_down_crop_pane_ParamLimits

0x1ee4,	// (0x0007ca7f) video_down_crop_pane

0x1fdb,	// (0x0007cb76) video_down_pane_ParamLimits

0x1fdb,	// (0x0007cb76) video_down_pane

0xaf7b,	// (0x00085b16) video_down_subqcif_pane_ParamLimits

0xaf7b,	// (0x00085b16) video_down_subqcif_pane

0xaf93,	// (0x00085b2e) video_down_subqcif_pane_cp_ParamLimits

0xaf93,	// (0x00085b2e) video_down_subqcif_pane_cp

0xafb9,	// (0x00085b54) im_reading_pane_ParamLimits

0xafb9,	// (0x00085b54) im_reading_pane

0x20eb,	// (0x0007cc86) im_writing_pane_ParamLimits

0x20eb,	// (0x0007cc86) im_writing_pane

0x2101,	// (0x0007cc9c) im_reading_pane_t1

0xafd3,	// (0x00085b6e) list_im_pane

0xafe4,	// (0x00085b7f) scroll_pane_cp07

0x213a,	// (0x0007ccd5) im_writing_pane_t1_ParamLimits

0x213a,	// (0x0007ccd5) im_writing_pane_t1

0xaffd,	// (0x00085b98) im_writing_pane_t2_ParamLimits

0xaffd,	// (0x00085b98) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00089d7d) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00089d7d) im_writing_pane_t

0xa92f,	// (0x000854ca) input_focus_pane_cp04

0xa92f,	// (0x000854ca) input_focus_pane_cp05

0x214f,	// (0x0007ccea) list_im_single_pane_ParamLimits

0x214f,	// (0x0007ccea) list_im_single_pane

0x2163,	// (0x0007ccfe) list_single_im_pane_t1

0xaf08,	// (0x00085aa3) blid_accuracy_pane

0xaf08,	// (0x00085aa3) blid_compass_pane

0xcca3,	// (0x0008783e) main_location_t1

0xcca3,	// (0x0008783e) main_location_t2

0xcca3,	// (0x0008783e) main_location_t3

0x0002,

0xf514,	// (0x0008a0af) main_location_t

0xa92f,	// (0x000854ca) aid_levels_location

0xaba2,	// (0x0008573d) blid_accuracy_pane_g1

0xaba2,	// (0x0008573d) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x00089dcc) blid_accuracy_pane_g

0xb045,	// (0x00085be0) wml_content_pane

0xb083,	// (0x00085c1e) wml_button_pane_ParamLimits

0xb083,	// (0x00085c1e) wml_button_pane

0x2172,	// (0x0007cd0d) wml_list_single_large_pane_ParamLimits

0x2172,	// (0x0007cd0d) wml_list_single_large_pane

0x2187,	// (0x0007cd22) wml_list_single_medium_pane_ParamLimits

0x2187,	// (0x0007cd22) wml_list_single_medium_pane

0x219d,	// (0x0007cd38) wml_list_single_small_pane_ParamLimits

0x219d,	// (0x0007cd38) wml_list_single_small_pane

0xb097,	// (0x00085c32) wml_selection_box_pane_ParamLimits

0xb097,	// (0x00085c32) wml_selection_box_pane

0xb0aa,	// (0x00085c45) wml_list_single_pane_t1

0xb0b9,	// (0x00085c54) wml_list_single_medium_pane_t1

0xb0c8,	// (0x00085c63) wml_list_single_large_pane_t1

0xb0d7,	// (0x00085c72) input_focus_pane_cp02_ParamLimits

0xb0d7,	// (0x00085c72) input_focus_pane_cp02

0xb0ea,	// (0x00085c85) wml_selection_box_pane_g1

0xb0f3,	// (0x00085c8e) wml_selection_box_pane_t1_ParamLimits

0xb0f3,	// (0x00085c8e) wml_selection_box_pane_t1

0xab8a,	// (0x00085725) bg_wml_button_pane_ParamLimits

0xab8a,	// (0x00085725) bg_wml_button_pane

0xb10b,	// (0x00085ca6) wml_button_pane_g1

0xb113,	// (0x00085cae) wml_button_pane_t1

0xb10b,	// (0x00085ca6) wml_button_bg_pane_g1

0xb123,	// (0x00085cbe) wml_button_bg_pane_g2

0xb12b,	// (0x00085cc6) wml_button_bg_pane_g3

0xb133,	// (0x00085cce) wml_button_bg_pane_g4

0xb13b,	// (0x00085cd6) wml_button_bg_pane_g5

0xb143,	// (0x00085cde) wml_button_bg_pane_g6

0xb14b,	// (0x00085ce6) wml_button_bg_pane_g7

0xb153,	// (0x00085cee) wml_button_bg_pane_g8

0xb15b,	// (0x00085cf6) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00089d82) wml_button_bg_pane_g

0x21b5,	// (0x0007cd50) bg_list_pane_cp02

0xb163,	// (0x00085cfe) mce_header_pane_ParamLimits

0xb163,	// (0x00085cfe) mce_header_pane

0xb179,	// (0x00085d14) mce_icon_pane

0xb179,	// (0x00085d14) mce_image_pane

0xb182,	// (0x00085d1d) mce_text_pane_ParamLimits

0xb182,	// (0x00085d1d) mce_text_pane

0x21bd,	// (0x0007cd58) scroll_pane_cp03

0xb07b,	// (0x00085c16) scroll_pane_cp04

0xb195,	// (0x00085d30) scroll_pane_cp05_ParamLimits

0xb195,	// (0x00085d30) scroll_pane_cp05

0x21c7,	// (0x0007cd62) mce_header_field_pane_ParamLimits

0x21c7,	// (0x0007cd62) mce_header_field_pane

0x21de,	// (0x0007cd79) mce_header_field_pane_2_ParamLimits

0x21de,	// (0x0007cd79) mce_header_field_pane_2

0x21f4,	// (0x0007cd8f) mce_header_field_pane_3

0x21fc,	// (0x0007cd97) list_single_mce_message_pane_ParamLimits

0x21fc,	// (0x0007cd97) list_single_mce_message_pane

0x2211,	// (0x0007cdac) list_single_mce_smart_pane_ParamLimits

0x2211,	// (0x0007cdac) list_single_mce_smart_pane

0xb1a1,	// (0x00085d3c) input_focus_pane_cp03

0xb1aa,	// (0x00085d45) list_header_data_pane

0x2231,	// (0x0007cdcc) mce_header_field_pane_t1

0x2241,	// (0x0007cddc) list_single_mce_header_pane_ParamLimits

0x2241,	// (0x0007cddc) list_single_mce_header_pane

0xb1b2,	// (0x00085d4d) list_single_mce_header_pane_t1

0xb1c1,	// (0x00085d5c) list_single_mce_message_pane_g1

0xb1c9,	// (0x00085d64) list_single_mce_message_pane_t1

0x227b,	// (0x0007ce16) bg_cale_heading_pane_cp01_ParamLimits

0x227b,	// (0x0007ce16) bg_cale_heading_pane_cp01

0xb1d7,	// (0x00085d72) bg_cale_pane_cp02_ParamLimits

0xb1d7,	// (0x00085d72) bg_cale_pane_cp02

0x22b5,	// (0x0007ce50) cale_month_corner_pane

0x22d4,	// (0x0007ce6f) cale_month_day_heading_pane_ParamLimits

0x22d4,	// (0x0007ce6f) cale_month_day_heading_pane

0x2326,	// (0x0007cec1) cale_month_pane_g1_ParamLimits

0x2326,	// (0x0007cec1) cale_month_pane_g1

0x2355,	// (0x0007cef0) cale_month_pane_g2_ParamLimits

0x2355,	// (0x0007cef0) cale_month_pane_g2

0x2385,	// (0x0007cf20) cale_month_pane_g3_ParamLimits

0x2385,	// (0x0007cf20) cale_month_pane_g3

0x23c1,	// (0x0007cf5c) cale_month_pane_g4_ParamLimits

0x23c1,	// (0x0007cf5c) cale_month_pane_g4

0x23fd,	// (0x0007cf98) cale_month_pane_g5_ParamLimits

0x23fd,	// (0x0007cf98) cale_month_pane_g5

0x2445,	// (0x0007cfe0) cale_month_pane_g6_ParamLimits

0x2445,	// (0x0007cfe0) cale_month_pane_g6

0x2491,	// (0x0007d02c) cale_month_pane_g7_ParamLimits

0x2491,	// (0x0007d02c) cale_month_pane_g7

0x24e5,	// (0x0007d080) cale_month_pane_g8_ParamLimits

0x24e5,	// (0x0007d080) cale_month_pane_g8

0x2539,	// (0x0007d0d4) cale_month_pane_g9_ParamLimits

0x2539,	// (0x0007d0d4) cale_month_pane_g9

0x258b,	// (0x0007d126) cale_month_pane_g10_ParamLimits

0x258b,	// (0x0007d126) cale_month_pane_g10

0x25dd,	// (0x0007d178) cale_month_pane_g11_ParamLimits

0x25dd,	// (0x0007d178) cale_month_pane_g11

0x262f,	// (0x0007d1ca) cale_month_pane_g12_ParamLimits

0x262f,	// (0x0007d1ca) cale_month_pane_g12

0x2681,	// (0x0007d21c) cale_month_pane_g13_ParamLimits

0x2681,	// (0x0007d21c) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00089d95) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00089d95) cale_month_pane_g

0x26d3,	// (0x0007d26e) cale_month_week_pane

0x26f7,	// (0x0007d292) grid_cale_month_pane_ParamLimits

0x26f7,	// (0x0007d292) grid_cale_month_pane

0x2740,	// (0x0007d2db) cale_month_day_heading_pane_t1

0x27c6,	// (0x0007d361) cale_month_day_heading_pane_t2

0x283f,	// (0x0007d3da) cale_month_day_heading_pane_t3

0x28b8,	// (0x0007d453) cale_month_day_heading_pane_t4

0x2939,	// (0x0007d4d4) cale_month_day_heading_pane_t5

0x29c2,	// (0x0007d55d) cale_month_day_heading_pane_t6

0x2a4b,	// (0x0007d5e6) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00089db0) cale_month_day_heading_pane_t

0xaeb6,	// (0x00085a51) bg_cale_side_pane_cp01

0x2adc,	// (0x0007d677) cale_month_week_pane_t1

0x2af5,	// (0x0007d690) cale_month_week_pane_t2

0x2b0e,	// (0x0007d6a9) cale_month_week_pane_t3

0x2b27,	// (0x0007d6c2) cale_month_week_pane_t4

0x2b40,	// (0x0007d6db) cale_month_week_pane_t5

0x2b59,	// (0x0007d6f4) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00089dbf) cale_month_week_pane_t

0x2b72,	// (0x0007d70d) cell_cale_month_pane_ParamLimits

0x2b72,	// (0x0007d70d) cell_cale_month_pane

0xb216,	// (0x00085db1) cell_cale_month_pane_g1

0x2ca0,	// (0x0007d83b) cell_cale_month_pane_t1_ParamLimits

0x2ca0,	// (0x0007d83b) cell_cale_month_pane_t1

0xaec4,	// (0x00085a5f) grid_highlight_pane_cp08

0xaba2,	// (0x0008573d) main_smil_g1

0x2ccc,	// (0x0007d867) smil_status_pane

0xb222,	// (0x00085dbd) smil_text_pane

0xcbbb,	// (0x00087756) bg_popup_call3_rect_pane_g8

0xcbc3,	// (0x0008775e) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x0008a048) bg_popup_call3_rect_pane_g

0xcdc0,	// (0x0008795b) smil_status_volume_pane_g1

0xb22c,	// (0x00085dc7) smil_status_pane_t1

0xcdf3,	// (0x0008798e) volume_smil_pane

0xb243,	// (0x00085dde) list_smil_text_pane

0x2cdf,	// (0x0007d87a) scroll_pane_cp011

0x2cea,	// (0x0007d885) smil_text_list_pane_t1_ParamLimits

0x2cea,	// (0x0007d885) smil_text_list_pane_t1

0xb24d,	// (0x00085de8) aid_volume_smil_ParamLimits

0xb24d,	// (0x00085de8) aid_volume_smil

0xaba2,	// (0x0008573d) smil_volume_pane_g1

0xaba2,	// (0x0008573d) smil_volume_pane_g2

0x0001,

0xf231,	// (0x00089dcc) smil_volume_pane_g

0x1633,	// (0x0007c1ce) listscroll_cale_day_pane

0xb26f,	// (0x00085e0a) bg_cale_pane

0xb287,	// (0x00085e22) list_cale_pane

0xb2aa,	// (0x00085e45) scroll_pane_cp09

0xb2bb,	// (0x00085e56) cale_bg_pane_g1

0xb2c3,	// (0x00085e5e) cale_bg_pane_g2

0xb2cb,	// (0x00085e66) cale_bg_pane_g3

0xb2d3,	// (0x00085e6e) cale_bg_pane_g4

0xb2db,	// (0x00085e76) cale_bg_pane_g5

0xb2e3,	// (0x00085e7e) cale_bg_pane_g6

0xb2eb,	// (0x00085e86) cale_bg_pane_g7

0xb2f3,	// (0x00085e8e) cale_bg_pane_g8

0xb2fb,	// (0x00085e96) cale_bg_pane_g9

0x0008,

0xf236,	// (0x00089dd1) cale_bg_pane_g

0x2d26,	// (0x0007d8c1) list_cale_time_pane_ParamLimits

0x2d26,	// (0x0007d8c1) list_cale_time_pane

0xb30b,	// (0x00085ea6) list_cale_time_pane_g1_ParamLimits

0xb30b,	// (0x00085ea6) list_cale_time_pane_g1

0xb317,	// (0x00085eb2) list_cale_time_pane_g2_ParamLimits

0xb317,	// (0x00085eb2) list_cale_time_pane_g2

0x2d3b,	// (0x0007d8d6) list_cale_time_pane_g3_ParamLimits

0x2d3b,	// (0x0007d8d6) list_cale_time_pane_g3

0x2d49,	// (0x0007d8e4) list_cale_time_pane_g4_ParamLimits

0x2d49,	// (0x0007d8e4) list_cale_time_pane_g4

0x2d57,	// (0x0007d8f2) list_cale_time_pane_g5_ParamLimits

0x2d57,	// (0x0007d8f2) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x00089de4) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x00089de4) list_cale_time_pane_g

0xb331,	// (0x00085ecc) list_cale_time_pane_t1_ParamLimits

0xb331,	// (0x00085ecc) list_cale_time_pane_t1

0xb359,	// (0x00085ef4) list_cale_time_pane_t2_ParamLimits

0xb359,	// (0x00085ef4) list_cale_time_pane_t2

0x2fb9,	// (0x0007db54) aid_blid_cardinal_pane

0x2ff7,	// (0x0007db92) compass_pane_t4

0xb381,	// (0x00085f1c) list_cale_time_pane_t4_ParamLimits

0xb381,	// (0x00085f1c) list_cale_time_pane_t4

0x3005,	// (0x0007dba0) compass_pane_t5

0x3013,	// (0x0007dbae) compass_pane_t6

0x3021,	// (0x0007dbbc) compass_pane_t7

0xb8a7,	// (0x00086442) navi_pane_cc_t1

0xba96,	// (0x00086631) aid_phob_thumbnail_center_pane

0x3399,	// (0x0007df34) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x00089df1) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x00089df1) list_cale_time_pane_t

0xa586,	// (0x00085121) bg_popup_window_pane_cp02_ParamLimits

0xa586,	// (0x00085121) bg_popup_window_pane_cp02

0xb3a9,	// (0x00085f44) heading_pane_cp01_ParamLimits

0xb3a9,	// (0x00085f44) heading_pane_cp01

0xb3b5,	// (0x00085f50) loc_req_pane_ParamLimits

0xb3b5,	// (0x00085f50) loc_req_pane

0xb3c5,	// (0x00085f60) loc_type_pane_ParamLimits

0xb3c5,	// (0x00085f60) loc_type_pane

0xb3d7,	// (0x00085f72) loc_type_pane_t1_ParamLimits

0xb3d7,	// (0x00085f72) loc_type_pane_t1

0xb3e9,	// (0x00085f84) loc_type_pane_t2_ParamLimits

0xb3e9,	// (0x00085f84) loc_type_pane_t2

0xb3fb,	// (0x00085f96) loc_type_pane_t3_ParamLimits

0xb3fb,	// (0x00085f96) loc_type_pane_t3

0x0002,

0xf25d,	// (0x00089df8) loc_type_pane_t_ParamLimits

0xf25d,	// (0x00089df8) loc_type_pane_t

0xb40d,	// (0x00085fa8) list_loc_req_pane

0xb417,	// (0x00085fb2) scroll_pane_cp012

0x2d65,	// (0x0007d900) list_single_loc_request_popup_menu_pane_ParamLimits

0x2d65,	// (0x0007d900) list_single_loc_request_popup_menu_pane

0xb422,	// (0x00085fbd) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb422,	// (0x00085fbd) list_single_loc_request_popup_menu_pane_g1

0xb42e,	// (0x00085fc9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb42e,	// (0x00085fc9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x00089dff) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x00089dff) list_single_loc_request_popup_menu_pane_g

0xb43a,	// (0x00085fd5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb43a,	// (0x00085fd5) list_single_loc_request_popup_menu_pane_t1

0xab8a,	// (0x00085725) bg_popup_window_pane_cp03_ParamLimits

0xab8a,	// (0x00085725) bg_popup_window_pane_cp03

0xb450,	// (0x00085feb) heading_loc_req_pane_ParamLimits

0xb450,	// (0x00085feb) heading_loc_req_pane

0x2d72,	// (0x0007d90d) popup_dyc_status_message_window_g1_ParamLimits

0x2d72,	// (0x0007d90d) popup_dyc_status_message_window_g1

0x2d86,	// (0x0007d921) popup_dyc_status_message_window_t1_ParamLimits

0x2d86,	// (0x0007d921) popup_dyc_status_message_window_t1

0x2d9b,	// (0x0007d936) popup_dyc_status_message_window_t2_ParamLimits

0x2d9b,	// (0x0007d936) popup_dyc_status_message_window_t2

0x2db0,	// (0x0007d94b) popup_dyc_status_message_window_t3_ParamLimits

0x2db0,	// (0x0007d94b) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x00089e04) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x00089e04) popup_dyc_status_message_window_t

0xa92f,	// (0x000854ca) bg_heading_pane_cp01

0xb45c,	// (0x00085ff7) heading_loc_req_pane_g1

0xb464,	// (0x00085fff) heading_loc_req_pane_g2

0xb46c,	// (0x00086007) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x00089e0b) heading_loc_req_pane_g

0xb474,	// (0x0008600f) heading_loc_req_pane_t1

0xb493,	// (0x0008602e) bg_popup_sub_pane_cp01_ParamLimits

0xb493,	// (0x0008602e) bg_popup_sub_pane_cp01

0xb4a1,	// (0x0008603c) popup_cale_events_window_g1_ParamLimits

0xb4a1,	// (0x0008603c) popup_cale_events_window_g1

0xb4c1,	// (0x0008605c) popup_cale_events_window_g2_ParamLimits

0xb4c1,	// (0x0008605c) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x00089e2d) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x00089e2d) popup_cale_events_window_g

0xb4e1,	// (0x0008607c) popup_cale_events_window_t1_ParamLimits

0xb4e1,	// (0x0008607c) popup_cale_events_window_t1

0xb4f3,	// (0x0008608e) popup_cale_events_window_t2_ParamLimits

0xb4f3,	// (0x0008608e) popup_cale_events_window_t2

0xb531,	// (0x000860cc) popup_cale_events_window_t3_ParamLimits

0xb531,	// (0x000860cc) popup_cale_events_window_t3

0xb56b,	// (0x00086106) popup_cale_events_window_t4_ParamLimits

0xb56b,	// (0x00086106) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x00089e32) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x00089e32) popup_cale_events_window_t

0x2dd8,	// (0x0007d973) call_type_pane

0x2de8,	// (0x0007d983) popup_call_status_window_g1

0x2dfc,	// (0x0007d997) popup_call_status_window_g2

0x2e10,	// (0x0007d9ab) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x00089e3b) popup_call_status_window_g

0xb5a1,	// (0x0008613c) call_type_pane_g1

0xb5aa,	// (0x00086145) call_type_pane_g2

0x0001,

0xf2a7,	// (0x00089e42) call_type_pane_g

0xa92f,	// (0x000854ca) bg_popup_sub_pane_cp02

0xb5b3,	// (0x0008614e) listscroll_popup_wml_pane

0xb5bb,	// (0x00086156) list_wml_pane

0xb5c5,	// (0x00086160) scroll_pane_cp013

0xb5d0,	// (0x0008616b) list_single_graphic_popup_wml_pane_ParamLimits

0xb5d0,	// (0x0008616b) list_single_graphic_popup_wml_pane

0xaba2,	// (0x0008573d) list_single_graphic_popup_wml_pane_g1

0xb5e4,	// (0x0008617f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x00089e47) list_single_graphic_popup_wml_pane_g

0xb5ec,	// (0x00086187) list_single_graphic_popup_wml_pane_t1

0xb602,	// (0x0008619d) aid_call_pane

0xab82,	// (0x0008571d) popup_clock_analogue_window_g1

0xab82,	// (0x0008571d) popup_clock_analogue_window_g2

0xb60a,	// (0x000861a5) popup_clock_analogue_window_g3

0xb60a,	// (0x000861a5) popup_clock_analogue_window_g4

0xaba2,	// (0x0008573d) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x00089e4c) popup_clock_analogue_window_g

0xb612,	// (0x000861ad) popup_clock_analogue_window_t1

0xb620,	// (0x000861bb) clock_digital_number_pane_ParamLimits

0xb620,	// (0x000861bb) clock_digital_number_pane

0xb62c,	// (0x000861c7) clock_digital_number_pane_cp02_ParamLimits

0xb62c,	// (0x000861c7) clock_digital_number_pane_cp02

0xb638,	// (0x000861d3) clock_digital_number_pane_cp03_ParamLimits

0xb638,	// (0x000861d3) clock_digital_number_pane_cp03

0xb644,	// (0x000861df) clock_digital_number_pane_cp04_ParamLimits

0xb644,	// (0x000861df) clock_digital_number_pane_cp04

0xb654,	// (0x000861ef) clock_digital_separator_pane_ParamLimits

0xb654,	// (0x000861ef) clock_digital_separator_pane

0xb660,	// (0x000861fb) popup_clock_digital_window_t1

0xaba2,	// (0x0008573d) clock_digital_number_pane_g1

0xaba2,	// (0x0008573d) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x00089dcc) clock_digital_number_pane_g

0xaba2,	// (0x0008573d) clock_digital_separator_pane_g1

0xaba2,	// (0x0008573d) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x00089dcc) clock_digital_separator_pane_g

0xa92f,	// (0x000854ca) bg_popup_window_pane_cp04

0xb67d,	// (0x00086218) heading_pane_cp03

0xaf08,	// (0x00085aa3) listscroll_popup_gms_pane

0xa92f,	// (0x000854ca) grid_large_graphic_popup_pane

0xb686,	// (0x00086221) listscroll_popup_gms_pane_g1

0xb68f,	// (0x0008622a) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x00089e57) listscroll_popup_gms_pane_g

0xb698,	// (0x00086233) scroll_pane_cp014

0xabf7,	// (0x00085792) cell_large_graphic_popup_pane_ParamLimits

0xabf7,	// (0x00085792) cell_large_graphic_popup_pane

0xac05,	// (0x000857a0) cell_large_graphic_popup_pane_g1_ParamLimits

0xac05,	// (0x000857a0) cell_large_graphic_popup_pane_g1

0xb6a1,	// (0x0008623c) cell_large_graphic_popup_pane_g2_ParamLimits

0xb6a1,	// (0x0008623c) cell_large_graphic_popup_pane_g2

0xb6af,	// (0x0008624a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb6af,	// (0x0008624a) cell_large_graphic_popup_pane_g3

0xb6bd,	// (0x00086258) cell_large_graphic_popup_pane_g4_ParamLimits

0xb6bd,	// (0x00086258) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x00089e5c) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x00089e5c) cell_large_graphic_popup_pane_g

0xa92f,	// (0x000854ca) grid_highlight_pane_cp010

0xaba2,	// (0x0008573d) bg_popup_call_pane_g1

0xb6ce,	// (0x00086269) list_single_graphic_popup_conf_pane_ParamLimits

0xb6ce,	// (0x00086269) list_single_graphic_popup_conf_pane

0xb6e1,	// (0x0008627c) list_highlight_pane_cp01

0xb6ea,	// (0x00086285) list_single_graphic_popup_conf_pane_g1

0xb6f2,	// (0x0008628d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x00089e65) list_single_graphic_popup_conf_pane_g

0xb6fa,	// (0x00086295) list_single_graphic_popup_conf_pane_t1

0xb708,	// (0x000862a3) linegrid_cams_pane_g1

0x2e1f,	// (0x0007d9ba) linegrid_cams_pane_g2

0xae47,	// (0x000859e2) linegrid_cams_pane_g3

0xb711,	// (0x000862ac) linegrid_cams_pane_g4

0x2e28,	// (0x0007d9c3) linegrid_cams_pane_g5

0x2e31,	// (0x0007d9cc) linegrid_cams_pane_g6

0xaef7,	// (0x00085a92) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x00089e6a) linegrid_cams_pane_g

0xb71a,	// (0x000862b5) popup_clock_analogue_window

0xb71a,	// (0x000862b5) popup_clock_digital_window

0xa92f,	// (0x000854ca) popup_phob_thumbnail_window

0xaba2,	// (0x0008573d) call_video_uplink_pane_g1

0xb723,	// (0x000862be) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x00089e79) call_video_uplink_pane_g

0xb72b,	// (0x000862c6) video_uplink_pane

0xb733,	// (0x000862ce) mce_image_pane_g1

0x2e3c,	// (0x0007d9d7) mce_image_pane_g2

0x2e46,	// (0x0007d9e1) mce_image_pane_g3

0x2e4e,	// (0x0007d9e9) mce_image_pane_g4

0x2e56,	// (0x0007d9f1) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x00089e7e) mce_image_pane_g

0xb73d,	// (0x000862d8) control_top_pane_stacon_cp01_ParamLimits

0xb73d,	// (0x000862d8) control_top_pane_stacon_cp01

0xb751,	// (0x000862ec) uni_indicator_pane_stacon_cp01_ParamLimits

0xb751,	// (0x000862ec) uni_indicator_pane_stacon_cp01

0xb762,	// (0x000862fd) bg_popup_sub_pane_cp03

0xb76c,	// (0x00086307) chi_dic_find_pane

0x2e5e,	// (0x0007d9f9) listscroll_chi_dic_pane

0xb774,	// (0x0008630f) main_pane_chidic_g1

0xb77c,	// (0x00086317) chi_dic_find_pane_t1

0xb78a,	// (0x00086325) find_chidic_pane

0xb793,	// (0x0008632e) chi_dic_list_pane_ParamLimits

0xb793,	// (0x0008632e) chi_dic_list_pane

0xb7a4,	// (0x0008633f) scroll_pane_cp020

0xb7ac,	// (0x00086347) find_chidic_pane_t1

0xa92f,	// (0x000854ca) input_focus_pane_cp06

0x2e72,	// (0x0007da0d) list_chi_dic_pane_ParamLimits

0x2e72,	// (0x0007da0d) list_chi_dic_pane

0x2e84,	// (0x0007da1f) list_chi_dic_pane_t1_ParamLimits

0x2e84,	// (0x0007da1f) list_chi_dic_pane_t1

0xa92f,	// (0x000854ca) list_highlight_pane_cp020

0xb7bb,	// (0x00086356) bg_cale_heading_pane_g1

0x2e97,	// (0x0007da32) bg_cale_heading_pane_g2

0x2e9f,	// (0x0007da3a) bg_cale_heading_pane_g3

0x2ea7,	// (0x0007da42) bg_cale_heading_pane_g4

0x2eb1,	// (0x0007da4c) bg_cale_heading_pane_g5

0x2ebb,	// (0x0007da56) bg_cale_heading_pane_g6

0x2ec3,	// (0x0007da5e) bg_cale_heading_pane_g7

0x2ecb,	// (0x0007da66) bg_cale_heading_pane_g8

0x2ed5,	// (0x0007da70) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x00089e89) bg_cale_heading_pane_g

0xb7bb,	// (0x00086356) bg_cale_side_pane_g1

0x2edf,	// (0x0007da7a) bg_cale_side_pane_g2

0x2ee7,	// (0x0007da82) bg_cale_side_pane_g3

0x2eef,	// (0x0007da8a) bg_cale_side_pane_g4

0x2ef7,	// (0x0007da92) bg_cale_side_pane_g5

0x2eff,	// (0x0007da9a) bg_cale_side_pane_g6

0x2f07,	// (0x0007daa2) bg_cale_side_pane_g7

0x2f0f,	// (0x0007daaa) bg_cale_side_pane_g8

0x2f17,	// (0x0007dab2) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x00089e9c) bg_cale_side_pane_g

0x2f1f,	// (0x0007daba) popup_call_status_window_ParamLimits

0x2f1f,	// (0x0007daba) popup_call_status_window

0xb7c3,	// (0x0008635e) stacon_top_pane

0xb7cb,	// (0x00086366) status_pane_ParamLimits

0xb7cb,	// (0x00086366) status_pane

0xb7e0,	// (0x0008637b) status_small_pane

0xb7e8,	// (0x00086383) control_pane

0xa92f,	// (0x000854ca) stacon_bottom_pane

0xb7f0,	// (0x0008638b) list_single_mce_smart_pane_t1_ParamLimits

0xb7f0,	// (0x0008638b) list_single_mce_smart_pane_t1

0xb803,	// (0x0008639e) list_single_mce_smart_pane_t2_ParamLimits

0xb803,	// (0x0008639e) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x00089eaf) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x00089eaf) list_single_mce_smart_pane_t

0x2f68,	// (0x0007db03) compass_pane

0x2f71,	// (0x0007db0c) main_location2_pane_t1

0x2f83,	// (0x0007db1e) main_location2_pane_t2

0x2f95,	// (0x0007db30) main_location2_pane_t3

0x0003,

0xf319,	// (0x00089eb4) main_location2_pane_t

0xb822,	// (0x000863bd) compass_pane_g1_ParamLimits

0xb822,	// (0x000863bd) compass_pane_g1

0x2fd9,	// (0x0007db74) compass_pane_t1

0x2fe8,	// (0x0007db83) compass_pane_t2

0x0005,

0xf322,	// (0x00089ebd) compass_pane_t

0x302f,	// (0x0007dbca) text_secondary_cp61

0xb89e,	// (0x00086439) navi_pane_cams_g5

0xb91a,	// (0x000864b5) navi_pane_im_t1

0xb928,	// (0x000864c3) navi_pane_mp_g1_ParamLimits

0xb928,	// (0x000864c3) navi_pane_mp_g1

0xb93c,	// (0x000864d7) navi_pane_mp_g2_ParamLimits

0xb93c,	// (0x000864d7) navi_pane_mp_g2

0xb948,	// (0x000864e3) navi_pane_mp_g3_ParamLimits

0xb948,	// (0x000864e3) navi_pane_mp_g3

0x0002,

0xf336,	// (0x00089ed1) navi_pane_mp_g_ParamLimits

0xf336,	// (0x00089ed1) navi_pane_mp_g

0xb954,	// (0x000864ef) navi_pane_mp_t1

0xb962,	// (0x000864fd) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x00089ed8) navi_pane_mp_t

0xb9cd,	// (0x00086568) navi_pane_vt_g1

0xb954,	// (0x000864ef) navi_pane_vt_t1

0xb9d5,	// (0x00086570) navi_slider_pane

0xaf08,	// (0x00085aa3) zooming_pane

0xb9e5,	// (0x00086580) navi_slider_pane_g1

0xb9ee,	// (0x00086589) navi_slider_pane_g2

0x0006,

0xf344,	// (0x00089edf) navi_slider_pane_g

0xba1b,	// (0x000865b6) aid_levels_zoom

0xba23,	// (0x000865be) zooming_pane_g1

0xba2b,	// (0x000865c6) zooming_pane_g2

0xba2b,	// (0x000865c6) zooming_pane_g3

0x0002,

0xf353,	// (0x00089eee) zooming_pane_g

0xba33,	// (0x000865ce) level_10_zoom

0xba3c,	// (0x000865d7) level_11_zoom

0xba45,	// (0x000865e0) level_1_zoom

0xba4e,	// (0x000865e9) level_2_zoom

0xba57,	// (0x000865f2) level_3_zoom

0xba60,	// (0x000865fb) level_4_zoom

0xba69,	// (0x00086604) level_5_zoom

0xba72,	// (0x0008660d) level_6_zoom

0xba7b,	// (0x00086616) level_7_zoom

0xba84,	// (0x0008661f) level_8_zoom

0xba8d,	// (0x00086628) level_9_zoom

0xba9e,	// (0x00086639) popup_phob_thumbnail_window_g1

0xbaa6,	// (0x00086641) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x00089ef5) popup_phob_thumbnail_window_g

0x399c,	// (0x0007e537) level_1_location

0x39a4,	// (0x0007e53f) level_2_location

0x39ac,	// (0x0007e547) level_3_location

0x39b4,	// (0x0007e54f) level_4_location

0xaf08,	// (0x00085aa3) level_5_location

0x3080,	// (0x0007dc1b) mce_icon_pane_g1

0x308a,	// (0x0007dc25) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x00089efa) mce_icon_pane_g

0xbaae,	// (0x00086649) main_mup_pane_g1_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g1

0xbaae,	// (0x00086649) main_mup_pane_g2_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g2

0xbaae,	// (0x00086649) main_mup_pane_g3_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g3

0xbaae,	// (0x00086649) main_mup_pane_g4_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g4

0xbaae,	// (0x00086649) main_mup_pane_g5_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g5

0xbaae,	// (0x00086649) main_mup_pane_g6_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g6

0xbaae,	// (0x00086649) main_mup_pane_g7_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g7

0xbaae,	// (0x00086649) main_mup_pane_g8_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g8

0xbaae,	// (0x00086649) main_mup_pane_g9_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g9

0xbaae,	// (0x00086649) main_mup_pane_g10_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g10

0xbaae,	// (0x00086649) main_mup_pane_g11_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g11

0xac05,	// (0x000857a0) main_mup_pane_g12_ParamLimits

0xac05,	// (0x000857a0) main_mup_pane_g12

0xbaae,	// (0x00086649) main_mup_pane_g13_ParamLimits

0xbaae,	// (0x00086649) main_mup_pane_g13

0x000c,

0xf364,	// (0x00089eff) main_mup_pane_g_ParamLimits

0xf364,	// (0x00089eff) main_mup_pane_g

0xbabc,	// (0x00086657) main_mup_pane_t1_ParamLimits

0xbabc,	// (0x00086657) main_mup_pane_t1

0xbabc,	// (0x00086657) main_mup_pane_t2_ParamLimits

0xbabc,	// (0x00086657) main_mup_pane_t2

0xbabc,	// (0x00086657) main_mup_pane_t3_ParamLimits

0xbabc,	// (0x00086657) main_mup_pane_t3

0xac55,	// (0x000857f0) main_mup_pane_t4_ParamLimits

0xac55,	// (0x000857f0) main_mup_pane_t4

0xac55,	// (0x000857f0) main_mup_pane_t5_ParamLimits

0xac55,	// (0x000857f0) main_mup_pane_t5

0xac69,	// (0x00085804) main_mup_pane_t6_ParamLimits

0xac69,	// (0x00085804) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00089f1a) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00089f1a) main_mup_pane_t

0xabf7,	// (0x00085792) mup_progress_pane_ParamLimits

0xabf7,	// (0x00085792) mup_progress_pane

0xbad0,	// (0x0008666b) mup_visualizer_pane_ParamLimits

0xbad0,	// (0x0008666b) mup_visualizer_pane

0xbad0,	// (0x0008666b) mup_volume_pane_ParamLimits

0xbad0,	// (0x0008666b) mup_volume_pane

0xac13,	// (0x000857ae) mup_visualizer_pane_g1_ParamLimits

0xac13,	// (0x000857ae) mup_visualizer_pane_g1

0xbade,	// (0x00086679) mup_visualizer_pane_g2_ParamLimits

0xbade,	// (0x00086679) mup_visualizer_pane_g2

0xac05,	// (0x000857a0) mup_visualizer_pane_g3_ParamLimits

0xac05,	// (0x000857a0) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x00089f27) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x00089f27) mup_visualizer_pane_g

0xac4b,	// (0x000857e6) mup_volume_pane_g1

0xac4b,	// (0x000857e6) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00089c4a) mup_volume_pane_g

0xac4b,	// (0x000857e6) mup_progress_pane_g1

0xac4b,	// (0x000857e6) mup_progress_pane_g2

0xac4b,	// (0x000857e6) mup_progress_pane_g3

0x0002,

0xf393,	// (0x00089f2e) mup_progress_pane_g

0xa92f,	// (0x000854ca) bg_popup_window_pane_cp05

0xbaec,	// (0x00086687) heading_pane_cp02_ParamLimits

0xbaec,	// (0x00086687) heading_pane_cp02

0xbb06,	// (0x000866a1) list_popup_blid_pane

0xbb0e,	// (0x000866a9) list_blid_sat_info_pane_ParamLimits

0xbb0e,	// (0x000866a9) list_blid_sat_info_pane

0xbb21,	// (0x000866bc) list_blid_sat_info_pane_g1

0xbb29,	// (0x000866c4) list_blid_sat_info_pane_t1

0x318a,	// (0x0007dd25) mup_equalizer_pane_ParamLimits

0x318a,	// (0x0007dd25) mup_equalizer_pane

0x31a3,	// (0x0007dd3e) mup_equalizer_pane_cp1_ParamLimits

0x31a3,	// (0x0007dd3e) mup_equalizer_pane_cp1

0x31c0,	// (0x0007dd5b) mup_equalizer_pane_cp2_ParamLimits

0x31c0,	// (0x0007dd5b) mup_equalizer_pane_cp2

0x31dd,	// (0x0007dd78) mup_equalizer_pane_cp3_ParamLimits

0x31dd,	// (0x0007dd78) mup_equalizer_pane_cp3

0x31fe,	// (0x0007dd99) mup_equalizer_pane_cp4_ParamLimits

0x31fe,	// (0x0007dd99) mup_equalizer_pane_cp4

0x321f,	// (0x0007ddba) mup_equalizer_pane_cp5

0x3233,	// (0x0007ddce) mup_equalizer_pane_cp6

0x3247,	// (0x0007dde2) mup_equalizer_pane_cp7

0xcc3b,	// (0x000877d6) bg_popup_call_poc_act_pane_g9

0xcc43,	// (0x000877de) bg_popup_call_poc_act_pane_g10

0xcc4b,	// (0x000877e6) bg_popup_call_poc_act_pane_g11

0x000a,

0xab8a,	// (0x00085725) mup_scale_pane

0xaba2,	// (0x0008573d) mup_scale_pane_g1

0xbb37,	// (0x000866d2) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00089f4a) mup_scale_pane_g

0xbb5b,	// (0x000866f6) msg_data_pane

0xbb63,	// (0x000866fe) scroll_pane_cp017

0x0825,	// (0x0007b3c0) bg_list_pane_cp04_ParamLimits

0x0825,	// (0x0007b3c0) bg_list_pane_cp04

0xbb6b,	// (0x00086706) msg_data_pane_g1

0x326d,	// (0x0007de08) msg_data_pane_g2

0x3277,	// (0x0007de12) msg_data_pane_g3

0x327f,	// (0x0007de1a) msg_data_pane_g4

0x3287,	// (0x0007de22) msg_data_pane_g5

0x328f,	// (0x0007de2a) msg_data_pane_g6

0x3297,	// (0x0007de32) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00089f59) msg_data_pane_g

0x084b,	// (0x0007b3e6) msg_text_pane_ParamLimits

0x084b,	// (0x0007b3e6) msg_text_pane

0x329f,	// (0x0007de3a) qrid_highlight_pane_cp011_ParamLimits

0x329f,	// (0x0007de3a) qrid_highlight_pane_cp011

0xa92f,	// (0x000854ca) msg_body_pane

0xab8a,	// (0x00085725) msg_header_pane

0xbb87,	// (0x00086722) input_focus_pane_cp07

0x0889,	// (0x0007b424) msg_header_pane_t1_ParamLimits

0x0889,	// (0x0007b424) msg_header_pane_t1

0x08a5,	// (0x0007b440) msg_header_pane_t2_ParamLimits

0x08a5,	// (0x0007b440) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x00089f6d) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x00089f6d) msg_header_pane_t

0xbba8,	// (0x00086743) msg_body_pane_g1

0x08c5,	// (0x0007b460) msg_body_pane_t1_ParamLimits

0x08c5,	// (0x0007b460) msg_body_pane_t1

0x08f6,	// (0x0007b491) msg_body_pane_t2_ParamLimits

0x08f6,	// (0x0007b491) msg_body_pane_t2

0x0908,	// (0x0007b4a3) msg_body_pane_t3_ParamLimits

0x0908,	// (0x0007b4a3) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x00089f72) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x00089f72) msg_body_pane_t

0x32ef,	// (0x0007de8a) main_viewer_pane_g1_ParamLimits

0x32ef,	// (0x0007de8a) main_viewer_pane_g1

0x32fd,	// (0x0007de98) main_viewer_pane_g2_ParamLimits

0x32fd,	// (0x0007de98) main_viewer_pane_g2

0x330b,	// (0x0007dea6) main_viewer_pane_g3_ParamLimits

0x330b,	// (0x0007dea6) main_viewer_pane_g3

0x331a,	// (0x0007deb5) main_viewer_pane_g4_ParamLimits

0x331a,	// (0x0007deb5) main_viewer_pane_g4

0xbbc8,	// (0x00086763) main_viewer_pane_g5_ParamLimits

0xbbc8,	// (0x00086763) main_viewer_pane_g5

0xbbc8,	// (0x00086763) main_viewer_pane_g7_ParamLimits

0xbbc8,	// (0x00086763) main_viewer_pane_g7

0xbbda,	// (0x00086775) main_viewer_pane_g8_ParamLimits

0xbbda,	// (0x00086775) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x00089f82) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x00089f82) main_viewer_pane_g

0xbbf2,	// (0x0008678d) viewer_content_pane_ParamLimits

0xbbf2,	// (0x0008678d) viewer_content_pane

0x3356,	// (0x0007def1) main_postcard_pane_g1_ParamLimits

0x3356,	// (0x0007def1) main_postcard_pane_g1

0x336c,	// (0x0007df07) main_postcard_pane_g2_ParamLimits

0x336c,	// (0x0007df07) main_postcard_pane_g2

0x3382,	// (0x0007df1d) main_postcard_pane_g3_ParamLimits

0x3382,	// (0x0007df1d) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x00089f93) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x00089f93) main_postcard_pane_g

0x3399,	// (0x0007df34) main_postcard_pane_g4

0xcdd3,	// (0x0008796e) smil_status_volume_pane_g2

0x33dc,	// (0x0007df77) postcard_pane_ParamLimits

0x33dc,	// (0x0007df77) postcard_pane

0xbc00,	// (0x0008679b) postcard_pane_g1_ParamLimits

0xbc00,	// (0x0008679b) postcard_pane_g1

0x341e,	// (0x0007dfb9) postcard_pane_g2_ParamLimits

0x341e,	// (0x0007dfb9) postcard_pane_g2

0x342a,	// (0x0007dfc5) postcard_pane_g3_ParamLimits

0x342a,	// (0x0007dfc5) postcard_pane_g3

0xbc0e,	// (0x000867a9) postcard_pane_g4_ParamLimits

0xbc0e,	// (0x000867a9) postcard_pane_g4

0x3436,	// (0x0007dfd1) postcard_pane_g5_ParamLimits

0x3436,	// (0x0007dfd1) postcard_pane_g5

0x344b,	// (0x0007dfe6) postcard_pane_g6_ParamLimits

0x344b,	// (0x0007dfe6) postcard_pane_g6

0xbc00,	// (0x0008679b) postcard_pane_g7_ParamLimits

0xbc00,	// (0x0008679b) postcard_pane_g7

0x0006,

0xf405,	// (0x00089fa0) postcard_pane_g_ParamLimits

0xf405,	// (0x00089fa0) postcard_pane_g

0x345f,	// (0x0007dffa) main_mp2_pane_g1_ParamLimits

0x345f,	// (0x0007dffa) main_mp2_pane_g1

0x346b,	// (0x0007e006) main_mp2_pane_g2_ParamLimits

0x346b,	// (0x0007e006) main_mp2_pane_g2

0x3477,	// (0x0007e012) main_mp2_pane_g3_ParamLimits

0x3477,	// (0x0007e012) main_mp2_pane_g3

0x0002,

0xf414,	// (0x00089faf) main_mp2_pane_g_ParamLimits

0xf414,	// (0x00089faf) main_mp2_pane_g

0x3483,	// (0x0007e01e) main_mp2_pane_t1_ParamLimits

0x3483,	// (0x0007e01e) main_mp2_pane_t1

0x3498,	// (0x0007e033) main_mp2_pane_t2_ParamLimits

0x3498,	// (0x0007e033) main_mp2_pane_t2

0x34aa,	// (0x0007e045) main_mp2_pane_t3_ParamLimits

0x34aa,	// (0x0007e045) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x00089fb6) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x00089fb6) main_mp2_pane_t

0xa541,	// (0x000850dc) pec_content_pane_ParamLimits

0xa541,	// (0x000850dc) pec_content_pane

0x10d4,	// (0x0007bc6f) scroll_pane_cp015

0xbad0,	// (0x0008666b) pec_attribute_pane_ParamLimits

0xbad0,	// (0x0008666b) pec_attribute_pane

0xac05,	// (0x000857a0) pec_content_pane_g1_ParamLimits

0xac05,	// (0x000857a0) pec_content_pane_g1

0xbc1c,	// (0x000867b7) pec_content_pane_t1_ParamLimits

0xbc1c,	// (0x000867b7) pec_content_pane_t1

0xbc30,	// (0x000867cb) pec_content_pane_t2_ParamLimits

0xbc30,	// (0x000867cb) pec_content_pane_t2

0x0001,

0xf422,	// (0x00089fbd) pec_content_pane_t_ParamLimits

0xf422,	// (0x00089fbd) pec_content_pane_t

0xabf7,	// (0x00085792) list_single_graphic_pane_cp01_ParamLimits

0xabf7,	// (0x00085792) list_single_graphic_pane_cp01

0xab8a,	// (0x00085725) bg_popup_sub_pane_cp04

0xbc44,	// (0x000867df) popup_mup_playback_window_g1

0xbc50,	// (0x000867eb) popup_mup_playback_window_t1

0xbc65,	// (0x00086800) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x00089fc2) popup_mup_playback_window_t

0xbc9c,	// (0x00086837) main_image_pane_g1_ParamLimits

0xbc9c,	// (0x00086837) main_image_pane_g1

0xbcdf,	// (0x0008687a) scroll_pane_cp018_ParamLimits

0xbcdf,	// (0x0008687a) scroll_pane_cp018

0xbcf7,	// (0x00086892) scroll_pane_cp016_ParamLimits

0xbcf7,	// (0x00086892) scroll_pane_cp016

0x3574,	// (0x0007e10f) smil2_image_pane_ParamLimits

0x3574,	// (0x0007e10f) smil2_image_pane

0x35a4,	// (0x0007e13f) smil2_root_pane_ParamLimits

0x35a4,	// (0x0007e13f) smil2_root_pane

0x35dc,	// (0x0007e177) smil2_text_pane_ParamLimits

0x35dc,	// (0x0007e177) smil2_text_pane

0x10d4,	// (0x0007bc6f) bg_list_pane_cp06

0x10d4,	// (0x0007bc6f) grid_radio_pane

0xa92f,	// (0x000854ca) bg_popup_window_pane_cp06

0xb483,	// (0x0008601e) main_fmradio_pane_t1

0xcc53,	// (0x000877ee) heading_pane_cp04

0xb483,	// (0x0008601e) main_fmradio_pane_t2

0xcc5b,	// (0x000877f6) popup_cale_lunar_info_window_g1

0xb483,	// (0x0008601e) main_fmradio_pane_t3

0xcc63,	// (0x000877fe) popup_cale_lunar_info_window_g2

0xb483,	// (0x0008601e) main_fmradio_pane_t4

0x0001,

0xb483,	// (0x0008601e) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x0008a092) popup_cale_lunar_info_window_g

0xf287,	// (0x00089e22) main_fmradio_pane_t

0x10d4,	// (0x0007bc6f) wait_bar_pane_cp03

0xabf7,	// (0x00085792) cell_fmradio_pane_ParamLimits

0xabf7,	// (0x00085792) cell_fmradio_pane

0xac05,	// (0x000857a0) cell_fmradio_pane_g1_ParamLimits

0xac05,	// (0x000857a0) cell_fmradio_pane_g1

0x10d4,	// (0x0007bc6f) grid_highlight_pane_cp011

0xbd2b,	// (0x000868c6) poc_content_pane_ParamLimits

0xbd2b,	// (0x000868c6) poc_content_pane

0xbd3d,	// (0x000868d8) scroll_pane_cp019

0x365c,	// (0x0007e1f7) popup_call_poc_act_window_ParamLimits

0x365c,	// (0x0007e1f7) popup_call_poc_act_window

0x3680,	// (0x0007e21b) popup_call_poc_inact_window_ParamLimits

0x3680,	// (0x0007e21b) popup_call_poc_inact_window

0xf4d3,	// (0x0008a06e) bg_popup_call_poc_act_pane_g

0xcbcb,	// (0x00087766) bg_popup_call_poc_inact_pane_g1

0xcbd3,	// (0x0008776e) bg_popup_call_poc_inact_pane_g2

0xbd45,	// (0x000868e0) popup_call_poc_act_window_g2

0xcbdb,	// (0x00087776) bg_popup_call_poc_inact_pane_g3

0xcbe3,	// (0x0008777e) bg_popup_call_poc_inact_pane_g4

0xcbeb,	// (0x00087786) bg_popup_call_poc_inact_pane_g5

0xbd4d,	// (0x000868e8) popup_call_poc_act_window_t1_ParamLimits

0xbd4d,	// (0x000868e8) popup_call_poc_act_window_t1

0xbd75,	// (0x00086910) popup_call_poc_act_window_t2_ParamLimits

0xbd75,	// (0x00086910) popup_call_poc_act_window_t2

0xbd9d,	// (0x00086938) popup_call_poc_act_window_t3_ParamLimits

0xbd9d,	// (0x00086938) popup_call_poc_act_window_t3

0xbdc5,	// (0x00086960) popup_call_poc_act_window_t4_ParamLimits

0xbdc5,	// (0x00086960) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x00089fd7) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x00089fd7) popup_call_poc_act_window_t

0xcbf3,	// (0x0008778e) bg_popup_call_poc_inact_pane_g6

0xcbfb,	// (0x00087796) bg_popup_call_poc_inact_pane_g7

0xcc03,	// (0x0008779e) bg_popup_call_poc_inact_pane_g8

0xbdd7,	// (0x00086972) popup_call_poc_inact_window_g2

0xcc0b,	// (0x000877a6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x0008a05b) bg_popup_call_poc_inact_pane_g

0xbddf,	// (0x0008697a) popup_call_poc_inact_window_t1_ParamLimits

0xbddf,	// (0x0008697a) popup_call_poc_inact_window_t1

0xbdf4,	// (0x0008698f) popup_call_poc_inact_window_t2_ParamLimits

0xbdf4,	// (0x0008698f) popup_call_poc_inact_window_t2

0xbe09,	// (0x000869a4) popup_call_poc_inact_window_t3_ParamLimits

0xbe09,	// (0x000869a4) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x00089fe0) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x00089fe0) popup_call_poc_inact_window_t

0xcd4b,	// (0x000878e6) context_pane_ParamLimits

0x3e6e,	// (0x0007ea09) signal_pane_ParamLimits

0xaf08,	// (0x00085aa3) main_call2_pane

0xcd24,	// (0x000878bf) popup_phob_thumbnail2_window_ParamLimits

0xcd24,	// (0x000878bf) popup_phob_thumbnail2_window

0xbbb0,	// (0x0008674b) aid_hotspot_pointer_arrow_pane

0xbbb8,	// (0x00086753) aid_hotspot_pointer_hand_pane

0x3966,	// (0x0007e501) phob_pre_status_pane_g5

0xa541,	// (0x000850dc) cams_zoom_pane_ParamLimits

0xa541,	// (0x000850dc) image_vga_pane_ParamLimits

0xac05,	// (0x000857a0) main_camera_pane_g1_ParamLimits

0xac05,	// (0x000857a0) main_camera_pane_g2_ParamLimits

0xac05,	// (0x000857a0) main_camera_pane_g3_ParamLimits

0xac05,	// (0x000857a0) main_camera_pane_g4_ParamLimits

0xac05,	// (0x000857a0) main_camera_pane_g5_ParamLimits

0xac05,	// (0x000857a0) main_camera_pane_g6_ParamLimits

0xac05,	// (0x000857a0) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00089d1b) main_camera_pane_g_ParamLimits

0xac55,	// (0x000857f0) main_camera_pane_t1_ParamLimits

0xac55,	// (0x000857f0) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00089d2c) main_camera_pane_t_ParamLimits

0xab8a,	// (0x00085725) bg_popup_preview_window_pane_cp01_ParamLimits

0xab8a,	// (0x00085725) bg_popup_preview_window_pane_cp01

0xbe1e,	// (0x000869b9) popup_phob_thumbnail2_window_g1_ParamLimits

0xbe1e,	// (0x000869b9) popup_phob_thumbnail2_window_g1

0xa92f,	// (0x000854ca) call2_cli_visual_pane

0x36b4,	// (0x0007e24f) popup_call2_audio_conf_window_ParamLimits

0x36b4,	// (0x0007e24f) popup_call2_audio_conf_window

0x36d4,	// (0x0007e26f) popup_call2_audio_first_window_ParamLimits

0x36d4,	// (0x0007e26f) popup_call2_audio_first_window

0x376a,	// (0x0007e305) popup_call2_audio_in_window_ParamLimits

0x376a,	// (0x0007e305) popup_call2_audio_in_window

0x37b2,	// (0x0007e34d) popup_call2_audio_out_window_ParamLimits

0x37b2,	// (0x0007e34d) popup_call2_audio_out_window

0x381c,	// (0x0007e3b7) popup_call2_audio_second_window_ParamLimits

0x381c,	// (0x0007e3b7) popup_call2_audio_second_window

0x3882,	// (0x0007e41d) popup_call2_audio_wait_window_ParamLimits

0x3882,	// (0x0007e41d) popup_call2_audio_wait_window

0xa92f,	// (0x000854ca) bg_popup_call2_act_pane_cp03

0xab6c,	// (0x00085707) list_conf_pane_cp

0xbe2a,	// (0x000869c5) popup_call2_audio_conf_window_t1

0xb6ce,	// (0x00086269) list_single_graphic_popup_conf2_pane_ParamLimits

0xb6ce,	// (0x00086269) list_single_graphic_popup_conf2_pane

0xb6e1,	// (0x0008627c) list_highlight_pane_cp04

0xbe38,	// (0x000869d3) list_single_graphic_popup_conf2_pane_g1

0xb6f2,	// (0x0008628d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x00089fe7) list_single_graphic_popup_conf2_pane_g

0xbe42,	// (0x000869dd) list_single_graphic_popup_conf2_pane_t1

0xbe50,	// (0x000869eb) bg_popup_call2_act_pane_cp01_ParamLimits

0xbe50,	// (0x000869eb) bg_popup_call2_act_pane_cp01

0xbeda,	// (0x00086a75) call_type_pane_cp05_ParamLimits

0xbeda,	// (0x00086a75) call_type_pane_cp05

0xbf2e,	// (0x00086ac9) popup_call2_audio_second_window_g1_ParamLimits

0xbf2e,	// (0x00086ac9) popup_call2_audio_second_window_g1

0xbf82,	// (0x00086b1d) popup_call2_audio_second_window_g2_ParamLimits

0xbf82,	// (0x00086b1d) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x00089fec) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x00089fec) popup_call2_audio_second_window_g

0xbfe7,	// (0x00086b82) popup_call2_audio_second_window_t1_ParamLimits

0xbfe7,	// (0x00086b82) popup_call2_audio_second_window_t1

0xc0a2,	// (0x00086c3d) popup_call2_audio_second_window_t2_ParamLimits

0xc0a2,	// (0x00086c3d) popup_call2_audio_second_window_t2

0xc0f5,	// (0x00086c90) popup_call2_audio_second_window_t3_ParamLimits

0xc0f5,	// (0x00086c90) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x00089ff3) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x00089ff3) popup_call2_audio_second_window_t

0xa92f,	// (0x000854ca) bg_popup_call2_in_pane_cp02

0xa939,	// (0x000854d4) call_type_pane_cp04

0x38bc,	// (0x0007e457) popup_call2_audio_wait_window_g1

0x38c4,	// (0x0007e45f) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x00089ffc) popup_call2_audio_wait_window_g

0xa951,	// (0x000854ec) popup_call2_audio_wait_window_t3

0xc1e8,	// (0x00086d83) bg_popup_call2_act_pane_ParamLimits

0xc1e8,	// (0x00086d83) bg_popup_call2_act_pane

0xc2a8,	// (0x00086e43) call_type_pane_cp03_ParamLimits

0xc2a8,	// (0x00086e43) call_type_pane_cp03

0xc30c,	// (0x00086ea7) popup_call2_audio_first_window_g1_ParamLimits

0xc30c,	// (0x00086ea7) popup_call2_audio_first_window_g1

0xc37c,	// (0x00086f17) popup_call2_audio_first_window_g2_ParamLimits

0xc37c,	// (0x00086f17) popup_call2_audio_first_window_g2

0xc3e0,	// (0x00086f7b) popup_call2_audio_first_window_g3_ParamLimits

0xc3e0,	// (0x00086f7b) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x0008a001) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x0008a001) popup_call2_audio_first_window_g

0xc468,	// (0x00087003) popup_call2_audio_first_window_t1_ParamLimits

0xc468,	// (0x00087003) popup_call2_audio_first_window_t1

0xc56b,	// (0x00087106) popup_call2_audio_first_window_t4_ParamLimits

0xc56b,	// (0x00087106) popup_call2_audio_first_window_t4

0xc64e,	// (0x000871e9) popup_call2_audio_first_window_t5_ParamLimits

0xc64e,	// (0x000871e9) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x0008a00c) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x0008a00c) popup_call2_audio_first_window_t

0xab82,	// (0x0008571d) bg_popup_call2_act_pane_g1

0xcc6b,	// (0x00087806) popup_cale_lunar_info_window_t1

0xcc79,	// (0x00087814) popup_cale_lunar_info_window_t2

0xcc87,	// (0x00087822) popup_cale_lunar_info_window_t3

0xa92f,	// (0x000854ca) bg_popup_call2_bubble_pane

0xc74f,	// (0x000872ea) bg_popup_call2_in_pane_cp01_ParamLimits

0xc74f,	// (0x000872ea) bg_popup_call2_in_pane_cp01

0xa60b,	// (0x000851a6) call_type_pane_cp02

0x38cc,	// (0x0007e467) popup_call2_audio_out_window_g1_ParamLimits

0x38cc,	// (0x0007e467) popup_call2_audio_out_window_g1

0xc797,	// (0x00087332) popup_call2_audio_out_window_g2_ParamLimits

0xc797,	// (0x00087332) popup_call2_audio_out_window_g2

0x38f8,	// (0x0007e493) popup_call2_audio_out_window_g3_ParamLimits

0x38f8,	// (0x0007e493) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x0008a015) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x0008a015) popup_call2_audio_out_window_g

0xc7ce,	// (0x00087369) popup_call2_audio_out_window_t1_ParamLimits

0xc7ce,	// (0x00087369) popup_call2_audio_out_window_t1

0xc82d,	// (0x000873c8) popup_call2_audio_out_window_t2_ParamLimits

0xc82d,	// (0x000873c8) popup_call2_audio_out_window_t2

0xc881,	// (0x0008741c) popup_call2_audio_out_window_t3_ParamLimits

0xc881,	// (0x0008741c) popup_call2_audio_out_window_t3

0xc897,	// (0x00087432) popup_call2_audio_out_window_t4_ParamLimits

0xc897,	// (0x00087432) popup_call2_audio_out_window_t4

0xc8ad,	// (0x00087448) popup_call2_audio_out_window_t5_ParamLimits

0xc8ad,	// (0x00087448) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x0008a01e) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x0008a01e) popup_call2_audio_out_window_t

0xc911,	// (0x000874ac) bg_popup_call2_in_pane_ParamLimits

0xc911,	// (0x000874ac) bg_popup_call2_in_pane

0xc96d,	// (0x00087508) popup_call2_audio_in_window_g1_ParamLimits

0xc96d,	// (0x00087508) popup_call2_audio_in_window_g1

0xc9a5,	// (0x00087540) popup_call2_audio_in_window_g2_ParamLimits

0xc9a5,	// (0x00087540) popup_call2_audio_in_window_g2

0xc9dd,	// (0x00087578) popup_call2_audio_in_window_g3_ParamLimits

0xc9dd,	// (0x00087578) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x0008a02b) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x0008a02b) popup_call2_audio_in_window_g

0xca35,	// (0x000875d0) popup_call2_audio_in_window_t1_ParamLimits

0xca35,	// (0x000875d0) popup_call2_audio_in_window_t1

0xcab5,	// (0x00087650) popup_call2_audio_in_window_t2_ParamLimits

0xcab5,	// (0x00087650) popup_call2_audio_in_window_t2

0xcb35,	// (0x000876d0) popup_call2_audio_in_window_t3_ParamLimits

0xcb35,	// (0x000876d0) popup_call2_audio_in_window_t3

0xcb4f,	// (0x000876ea) popup_call2_audio_in_window_t4_ParamLimits

0xcb4f,	// (0x000876ea) popup_call2_audio_in_window_t4

0xcb61,	// (0x000876fc) popup_call2_audio_in_window_t5_ParamLimits

0xcb61,	// (0x000876fc) popup_call2_audio_in_window_t5

0xcb76,	// (0x00087711) popup_call2_audio_in_window_t6_ParamLimits

0xcb76,	// (0x00087711) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0008a034) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0008a034) popup_call2_audio_in_window_t

0xab82,	// (0x0008571d) bg_popup_call2_in_pane_g1

0xcc95,	// (0x00087830) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x0008a097) popup_cale_lunar_info_window_t

0xab8a,	// (0x00085725) bg_popup_call2_rect_pane_ParamLimits

0xab8a,	// (0x00085725) bg_popup_call2_rect_pane

0xa92f,	// (0x000854ca) call2_cli_visual_graphic_pane

0xa92f,	// (0x000854ca) call2_cli_visual_text_pane

0xcde6,	// (0x00087981) smil_status_volume_pane_g3

0x0002,

0xaba2,	// (0x0008573d) call2_cli_visual_graphic_pane_g1

0xaba2,	// (0x0008573d) call2_cli_visual_graphic_pane_g2

0xaba2,	// (0x0008573d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x0008a041) call2_cli_visual_graphic_pane_g

0xcb8b,	// (0x00087726) bg_popup_call2_rect_pane_g1

0xadc7,	// (0x00085962) bg_popup_call2_rect_pane_g2

0xcb93,	// (0x0008772e) bg_popup_call2_rect_pane_g3

0xcb9b,	// (0x00087736) bg_popup_call2_rect_pane_g4

0xcba3,	// (0x0008773e) bg_popup_call2_rect_pane_g5

0xcbab,	// (0x00087746) bg_popup_call2_rect_pane_g6

0xcbb3,	// (0x0008774e) bg_popup_call2_rect_pane_g7

0xcbbb,	// (0x00087756) bg_popup_call2_rect_pane_g8

0xcbc3,	// (0x0008775e) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x0008a048) bg_popup_call2_rect_pane_g

0xcbcb,	// (0x00087766) bg_popup_call2_bubble_pane_g1

0xcbd3,	// (0x0008776e) bg_popup_call2_bubble_pane_g2

0xcbdb,	// (0x00087776) bg_popup_call2_bubble_pane_g3

0xcbe3,	// (0x0008777e) bg_popup_call2_bubble_pane_g4

0xcbeb,	// (0x00087786) bg_popup_call2_bubble_pane_g5

0xcbf3,	// (0x0008778e) bg_popup_call2_bubble_pane_g6

0xcbfb,	// (0x00087796) bg_popup_call2_bubble_pane_g7

0xcc03,	// (0x0008779e) bg_popup_call2_bubble_pane_g8

0xcc0b,	// (0x000877a6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x0008a05b) bg_popup_call2_bubble_pane_g

0x1645,	// (0x0007c1e0) aid_cale_week_size_cell_pane

0x1beb,	// (0x0007c786) aid_cams_cif_uncrop_pane_ParamLimits

0x1beb,	// (0x0007c786) aid_cams_cif_uncrop_pane

0xa541,	// (0x000850dc) aid_cams_size_cell_ParamLimits

0xa541,	// (0x000850dc) aid_cams_size_cell

0xa541,	// (0x000850dc) grid_cams_pane_ParamLimits

0xa541,	// (0x000850dc) linegrid_cams_pane_ParamLimits

0x1e09,	// (0x0007c9a4) call_video_pane_t1

0x1e27,	// (0x0007c9c2) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00089d78) call_video_pane_t

0x2255,	// (0x0007cdf0) aid_cale_month_size_cell_pane_ParamLimits

0x2255,	// (0x0007cdf0) aid_cale_month_size_cell_pane

0xf540,	// (0x0008a0db) smil_status_volume_pane_g

0xcdf3,	// (0x0008798e) volume_smil_pane_ParamLimits

0xa4dc,	// (0x00085077) aid_popup2_width_pane

0x15ca,	// (0x0007c165) cell_qdial_pane_g4_ParamLimits

0x15ca,	// (0x0007c165) cell_qdial_pane_g4

0x2fb9,	// (0x0007db54) aid_blid_cardinal_pane_ParamLimits

0x2fc5,	// (0x0007db60) aid_blid_destination_pane_ParamLimits

0x2fc5,	// (0x0007db60) aid_blid_destination_pane

0xab8a,	// (0x00085725) bg_popup_call_poc_act_pane_ParamLimits

0xab8a,	// (0x00085725) bg_popup_call_poc_act_pane

0xab8a,	// (0x00085725) bg_popup_call_poc_inact_pane_ParamLimits

0xab8a,	// (0x00085725) bg_popup_call_poc_inact_pane

0xcc13,	// (0x000877ae) bg_popup_call_poc_act_pane_g1

0xcc1b,	// (0x000877b6) bg_popup_call_poc_act_pane_g2

0xcc23,	// (0x000877be) bg_popup_call_poc_act_pane_g3

0xcbe3,	// (0x0008777e) bg_popup_call_poc_act_pane_g4

0xcbeb,	// (0x00087786) bg_popup_call_poc_act_pane_g5

0xcc2b,	// (0x000877c6) bg_popup_call_poc_act_pane_g6

0xcbfb,	// (0x00087796) bg_popup_call_poc_act_pane_g7

0xcc33,	// (0x000877ce) bg_popup_call_poc_act_pane_g8

0xa92f,	// (0x000854ca) main_usb_pane

0xccff,	// (0x0008789a) popup_cale_lunar_info_window

0x2101,	// (0x0007cc9c) im_reading_pane_t1_ParamLimits

0xafd3,	// (0x00085b6e) list_im_pane_ParamLimits

0xafe4,	// (0x00085b7f) scroll_pane_cp07_ParamLimits

0xa92f,	// (0x000854ca) grid_highlight_pane_cp012

0xab8a,	// (0x00085725) mup_scale_pane_ParamLimits

0xac05,	// (0x000857a0) main_usb_pane_g1_ParamLimits

0xac05,	// (0x000857a0) main_usb_pane_g1

0xac05,	// (0x000857a0) main_usb_pane_g2_ParamLimits

0xac05,	// (0x000857a0) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x00089d57) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x00089d57) main_usb_pane_g

0xac55,	// (0x000857f0) main_usb_pane_t1_ParamLimits

0xac55,	// (0x000857f0) main_usb_pane_t1

0xac55,	// (0x000857f0) main_usb_pane_t2_ParamLimits

0xac55,	// (0x000857f0) main_usb_pane_t2

0xac55,	// (0x000857f0) main_usb_pane_t3_ParamLimits

0xac55,	// (0x000857f0) main_usb_pane_t3

0xac55,	// (0x000857f0) main_usb_pane_t4_ParamLimits

0xac55,	// (0x000857f0) main_usb_pane_t4

0xac55,	// (0x000857f0) main_usb_pane_t5_ParamLimits

0xac55,	// (0x000857f0) main_usb_pane_t5

0xac55,	// (0x000857f0) main_usb_pane_t6_ParamLimits

0xac55,	// (0x000857f0) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x0008a085) main_usb_pane_t_ParamLimits

0x2f68,	// (0x0007db03) aid_text_placing

0x2f71,	// (0x0007db0c) main_location2_pane_t1_ParamLimits

0x2f83,	// (0x0007db1e) main_location2_pane_t2_ParamLimits

0x2f95,	// (0x0007db30) main_location2_pane_t3_ParamLimits

0x2fa7,	// (0x0007db42) main_location2_pane_t4_ParamLimits

0x2fa7,	// (0x0007db42) main_location2_pane_t4

0xf319,	// (0x00089eb4) main_location2_pane_t_ParamLimits

0xabb8,	// (0x00085753) find_pinb_pane_g2_ParamLimits

0xabb8,	// (0x00085753) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00089c30) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00089c30) find_pinb_pane_g

0xabc4,	// (0x0008575f) find_pinb_pane_t1_ParamLimits

0xabd6,	// (0x00085771) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00089c35) find_pinb_pane_t_ParamLimits

0xa92f,	// (0x000854ca) main_call3_pane

0x2740,	// (0x0007d2db) cale_month_day_heading_pane_t1_ParamLimits

0x27c6,	// (0x0007d361) cale_month_day_heading_pane_t2_ParamLimits

0x283f,	// (0x0007d3da) cale_month_day_heading_pane_t3_ParamLimits

0x28b8,	// (0x0007d453) cale_month_day_heading_pane_t4_ParamLimits

0x2939,	// (0x0007d4d4) cale_month_day_heading_pane_t5_ParamLimits

0x29c2,	// (0x0007d55d) cale_month_day_heading_pane_t6_ParamLimits

0x2a4b,	// (0x0007d5e6) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00089db0) cale_month_day_heading_pane_t_ParamLimits

0xb23a,	// (0x00085dd5) smil_status_volume_pane

0x33fa,	// (0x0007df95) postcard_address_pane_ParamLimits

0x33fa,	// (0x0007df95) postcard_address_pane

0x340c,	// (0x0007dfa7) postcard_message_pane_ParamLimits

0x340c,	// (0x0007dfa7) postcard_message_pane

0x3924,	// (0x0007e4bf) call2_cli_visual_pane_t1_ParamLimits

0x3924,	// (0x0007e4bf) call2_cli_visual_pane_t1

0xce20,	// (0x000879bb) postcard_message_pane_t1_ParamLimits

0xce20,	// (0x000879bb) postcard_message_pane_t1

0xce08,	// (0x000879a3) postcard_address_pane_t1_ParamLimits

0xce08,	// (0x000879a3) postcard_address_pane_t1

0x4020,	// (0x0007ebbb) popup_call3_audio_in_window_ParamLimits

0x4020,	// (0x0007ebbb) popup_call3_audio_in_window

0x3eab,	// (0x0007ea46) bg_popup_call3_in_pane_ParamLimits

0x3eab,	// (0x0007ea46) bg_popup_call3_in_pane

0x3f21,	// (0x0007eabc) popup_call3_audio_in_window_g1_ParamLimits

0x3f21,	// (0x0007eabc) popup_call3_audio_in_window_g1

0x3f41,	// (0x0007eadc) popup_call3_audio_in_window_g2_ParamLimits

0x3f41,	// (0x0007eadc) popup_call3_audio_in_window_g2

0x3f61,	// (0x0007eafc) popup_call3_audio_in_window_g3_ParamLimits

0x3f61,	// (0x0007eafc) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x0008a0e2) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x0008a0e2) popup_call3_audio_in_window_g

0x3f92,	// (0x0007eb2d) popup_call3_audio_in_window_t1_ParamLimits

0x3f92,	// (0x0007eb2d) popup_call3_audio_in_window_t1

0x3fd0,	// (0x0007eb6b) popup_call3_audio_in_window_t2_ParamLimits

0x3fd0,	// (0x0007eb6b) popup_call3_audio_in_window_t2

0x400e,	// (0x0007eba9) popup_call3_audio_in_window_t3_ParamLimits

0x400e,	// (0x0007eba9) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x0008a0eb) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x0008a0eb) popup_call3_audio_in_window_t

0xaf08,	// (0x00085aa3) bg_popup_call3_rect_pane

0xcb8b,	// (0x00087726) bg_popup_call3_rect_pane_g1

0xadc7,	// (0x00085962) bg_popup_call3_rect_pane_g2

0xcb93,	// (0x0008772e) bg_popup_call3_rect_pane_g3

0xcb9b,	// (0x00087736) bg_popup_call3_rect_pane_g4

0xcba3,	// (0x0008773e) bg_popup_call3_rect_pane_g5

0xcbab,	// (0x00087746) bg_popup_call3_rect_pane_g6

0xcbb3,	// (0x0008774e) bg_popup_call3_rect_pane_g7

0x10d4,	// (0x0007bc6f) mup_visualizer_osc_pane

0x10d4,	// (0x0007bc6f) mup_visualizer_spec_pane

0x3edb,	// (0x0007ea76) call3_video_qcif_pane_ParamLimits

0x3edb,	// (0x0007ea76) call3_video_qcif_pane

0x3eee,	// (0x0007ea89) call3_video_qcif_uncrop_pane_ParamLimits

0x3eee,	// (0x0007ea89) call3_video_qcif_uncrop_pane

0x3efc,	// (0x0007ea97) call3_video_subqcif_pane_ParamLimits

0x3efc,	// (0x0007ea97) call3_video_subqcif_pane

0x3f10,	// (0x0007eaab) call3_video_subqcif_uncrop_pane_ParamLimits

0x3f10,	// (0x0007eaab) call3_video_subqcif_uncrop_pane

0x3f81,	// (0x0007eb1c) popup_call3_audio_in_window_g4_ParamLimits

0x3f81,	// (0x0007eb1c) popup_call3_audio_in_window_g4

0x10d4,	// (0x0007bc6f) mup_spec_half_pane

0x10d4,	// (0x0007bc6f) mup_spec_half_pane_cp

0x10d4,	// (0x0007bc6f) mup_osc_middle_pane

0xac4b,	// (0x000857e6) mup_visualizer_osc_pane_g1

0xcd99,	// (0x00087934) mup_spec_bar_pane_ParamLimits

0xcd99,	// (0x00087934) mup_spec_bar_pane

0xac4b,	// (0x000857e6) mup_spec_bar_pane_g1

0xac4b,	// (0x000857e6) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00089c4a) mup_spec_bar_pane_g

0x1645,	// (0x0007c1e0) aid_cale_week_size_cell_pane_ParamLimits

0x165f,	// (0x0007c1fa) bg_cale_heading_pane_ParamLimits

0xae6a,	// (0x00085a05) bg_cale_pane_cp01_ParamLimits

0x1677,	// (0x0007c212) cale_week_corner_pane_ParamLimits

0x1696,	// (0x0007c231) cale_week_day_heading_pane_ParamLimits

0x16b3,	// (0x0007c24e) cale_week_scroll_pane_g1_ParamLimits

0x16c6,	// (0x0007c261) cale_week_scroll_pane_g2_ParamLimits

0x16de,	// (0x0007c279) cale_week_scroll_pane_g3_ParamLimits

0x16f6,	// (0x0007c291) cale_week_scroll_pane_g4_ParamLimits

0x170e,	// (0x0007c2a9) cale_week_scroll_pane_g5_ParamLimits

0x172e,	// (0x0007c2c9) cale_week_scroll_pane_g6_ParamLimits

0x174e,	// (0x0007c2e9) cale_week_scroll_pane_g7_ParamLimits

0x176e,	// (0x0007c309) cale_week_scroll_pane_g8_ParamLimits

0x1792,	// (0x0007c32d) cale_week_scroll_pane_g9_ParamLimits

0x17aa,	// (0x0007c345) cale_week_scroll_pane_g10_ParamLimits

0x17c2,	// (0x0007c35d) cale_week_scroll_pane_g11_ParamLimits

0x17da,	// (0x0007c375) cale_week_scroll_pane_g12_ParamLimits

0x17f2,	// (0x0007c38d) cale_week_scroll_pane_g13_ParamLimits

0x17f2,	// (0x0007c38d) cale_week_scroll_pane_g14_ParamLimits

0x17f2,	// (0x0007c38d) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00089cc1) cale_week_scroll_pane_g_ParamLimits

0x182e,	// (0x0007c3c9) cale_week_time_pane_ParamLimits

0x1852,	// (0x0007c3ed) grid_cale_week_pane_ParamLimits

0xae87,	// (0x00085a22) listscroll_cale_week_pane_t1

0xae99,	// (0x00085a34) scroll_pane_cp08_ParamLimits

0x22b5,	// (0x0007ce50) cale_month_corner_pane_ParamLimits

0xb204,	// (0x00085d9f) cale_month_pane_t1

0x26d3,	// (0x0007d26e) cale_month_week_pane_ParamLimits

0x2de8,	// (0x0007d983) popup_call_status_window_g1_ParamLimits

0x2dfc,	// (0x0007d997) popup_call_status_window_g2_ParamLimits

0x2e10,	// (0x0007d9ab) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x00089e3b) popup_call_status_window_g_ParamLimits

0xb5fa,	// (0x00086195) aid_call2_pane

0x087b,	// (0x0007b416) msg_header_pane_g1

0x33fa,	// (0x0007df95) postcard_address2_pane_ParamLimits

0x33fa,	// (0x0007df95) postcard_address2_pane

0x340c,	// (0x0007dfa7) postcard_message2_pane_ParamLimits

0x340c,	// (0x0007dfa7) postcard_message2_pane

0x3e7c,	// (0x0007ea17) message2_row_pane_ParamLimits

0x3e7c,	// (0x0007ea17) message2_row_pane

0x3e98,	// (0x0007ea33) address2_row_pane_ParamLimits

0x3e98,	// (0x0007ea33) address2_row_pane

0xcd66,	// (0x00087901) postcard_message2_row_pane_g1

0xcd6e,	// (0x00087909) postcard_message2_row_pane_t1

0xcd66,	// (0x00087901) address2_row_pane_g1

0xcd6e,	// (0x00087909) address2_row_pane_t1

0x1b82,	// (0x0007c71d) aid_size_cell_vorec

0xa92f,	// (0x000854ca) main_rss_pane

0xcd7c,	// (0x00087917) rss_list_single_pane_ParamLimits

0xcd7c,	// (0x00087917) rss_list_single_pane

0xcd8a,	// (0x00087925) rss_list_single_pane_t1

0xcd8a,	// (0x00087925) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x0008a0d6) rss_list_single_pane_t

0xa92f,	// (0x000854ca) main_camera2_pane

0xa92f,	// (0x000854ca) main_video2_pane

0xce3c,	// (0x000879d7) cams_zoom_pane_cp2_ParamLimits

0xce3c,	// (0x000879d7) cams_zoom_pane_cp2

0xce3c,	// (0x000879d7) image2_vga_pane_ParamLimits

0xce3c,	// (0x000879d7) image2_vga_pane

0xe594,	// (0x0008912f) main_camera2_pane_g1_ParamLimits

0xe594,	// (0x0008912f) main_camera2_pane_g1

0xe594,	// (0x0008912f) main_camera2_pane_g2_ParamLimits

0xe594,	// (0x0008912f) main_camera2_pane_g2

0xe594,	// (0x0008912f) main_camera2_pane_g3_ParamLimits

0xe594,	// (0x0008912f) main_camera2_pane_g3

0xe594,	// (0x0008912f) main_camera2_pane_g4_ParamLimits

0xe594,	// (0x0008912f) main_camera2_pane_g4

0xe594,	// (0x0008912f) main_camera2_pane_g5_ParamLimits

0xe594,	// (0x0008912f) main_camera2_pane_g5

0xe594,	// (0x0008912f) main_camera2_pane_g6_ParamLimits

0xe594,	// (0x0008912f) main_camera2_pane_g6

0xe594,	// (0x0008912f) main_camera2_pane_g7_ParamLimits

0xe594,	// (0x0008912f) main_camera2_pane_g7

0xe594,	// (0x0008912f) main_camera2_pane_g8_ParamLimits

0xe594,	// (0x0008912f) main_camera2_pane_g8

0x0008,

0xf557,	// (0x0008a0f2) main_camera2_pane_g_ParamLimits

0xf557,	// (0x0008a0f2) main_camera2_pane_g

0x4042,	// (0x0007ebdd) main_camera2_pane_t1_ParamLimits

0x4042,	// (0x0007ebdd) main_camera2_pane_t1

0x4042,	// (0x0007ebdd) main_camera2_pane_t2_ParamLimits

0x4042,	// (0x0007ebdd) main_camera2_pane_t2

0x4042,	// (0x0007ebdd) main_camera2_pane_t3_ParamLimits

0x4042,	// (0x0007ebdd) main_camera2_pane_t3

0x4042,	// (0x0007ebdd) main_camera2_pane_t4_ParamLimits

0x4042,	// (0x0007ebdd) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x0008a105) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x0008a105) main_camera2_pane_t

0xce5e,	// (0x000879f9) cams_zoom_pane_cp4_ParamLimits

0xce5e,	// (0x000879f9) cams_zoom_pane_cp4

0xce6c,	// (0x00087a07) image2_cif_pane_ParamLimits

0xce6c,	// (0x00087a07) image2_cif_pane

0xa541,	// (0x000850dc) image2_subqcif_pane_ParamLimits

0xa541,	// (0x000850dc) image2_subqcif_pane

0x4056,	// (0x0007ebf1) main_video2_pane_g1_ParamLimits

0x4056,	// (0x0007ebf1) main_video2_pane_g1

0x4056,	// (0x0007ebf1) main_video2_pane_g2_ParamLimits

0x4056,	// (0x0007ebf1) main_video2_pane_g2

0x4056,	// (0x0007ebf1) main_video2_pane_g3_ParamLimits

0x4056,	// (0x0007ebf1) main_video2_pane_g3

0x4056,	// (0x0007ebf1) main_video2_pane_g4_ParamLimits

0x4056,	// (0x0007ebf1) main_video2_pane_g4

0x4056,	// (0x0007ebf1) main_video2_pane_g5_ParamLimits

0x4056,	// (0x0007ebf1) main_video2_pane_g5

0x4056,	// (0x0007ebf1) main_video2_pane_g6_ParamLimits

0x4056,	// (0x0007ebf1) main_video2_pane_g6

0x0005,

0xf579,	// (0x0008a114) main_video2_pane_g_ParamLimits

0xf579,	// (0x0008a114) main_video2_pane_g

0x4064,	// (0x0007ebff) main_video2_pane_t1_ParamLimits

0x4064,	// (0x0007ebff) main_video2_pane_t1

0x4064,	// (0x0007ebff) main_video2_pane_t2_ParamLimits

0x4064,	// (0x0007ebff) main_video2_pane_t2

0x4064,	// (0x0007ebff) main_video2_pane_t3_ParamLimits

0x4064,	// (0x0007ebff) main_video2_pane_t3

0x0002,

0xf586,	// (0x0008a121) main_video2_pane_t_ParamLimits

0xf586,	// (0x0008a121) main_video2_pane_t

0x39c8,	// (0x0007e563) call_muted_g2

0x0001,

0xf52d,	// (0x0008a0c8) call_muted_g

0xa92f,	// (0x000854ca) main_mup2_pane

0xbaae,	// (0x00086649) main_mup2_pane_g1_ParamLimits

0xbaae,	// (0x00086649) main_mup2_pane_g1

0xbaae,	// (0x00086649) main_mup2_pane_g2_ParamLimits

0xbaae,	// (0x00086649) main_mup2_pane_g2

0xac4b,	// (0x000857e6) main_mup_pane_g13_cp1

0x10d4,	// (0x0007bc6f) mup_volume_pane_cp1

0xbaae,	// (0x00086649) main_mup2_pane_g4_ParamLimits

0xbaae,	// (0x00086649) main_mup2_pane_g4

0xbaae,	// (0x00086649) main_mup2_pane_g5_ParamLimits

0xbaae,	// (0x00086649) main_mup2_pane_g5

0xbaae,	// (0x00086649) main_mup2_pane_g6_ParamLimits

0xbaae,	// (0x00086649) main_mup2_pane_g6

0xbaae,	// (0x00086649) main_mup2_pane_g7_ParamLimits

0xbaae,	// (0x00086649) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x0008a128) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x0008a128) main_mup2_pane_g

0xbabc,	// (0x00086657) main_mup2_pane_t1_ParamLimits

0xbabc,	// (0x00086657) main_mup2_pane_t1

0xbabc,	// (0x00086657) main_mup2_pane_t2_ParamLimits

0xbabc,	// (0x00086657) main_mup2_pane_t2

0xbabc,	// (0x00086657) main_mup2_pane_t3_ParamLimits

0xbabc,	// (0x00086657) main_mup2_pane_t3

0xbabc,	// (0x00086657) main_mup2_pane_t4_ParamLimits

0xbabc,	// (0x00086657) main_mup2_pane_t4

0xbabc,	// (0x00086657) main_mup2_pane_t5_ParamLimits

0xbabc,	// (0x00086657) main_mup2_pane_t5

0xbabc,	// (0x00086657) main_mup2_pane_t6_ParamLimits

0xbabc,	// (0x00086657) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x0008a137) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x0008a137) main_mup2_pane_t

0xbad0,	// (0x0008666b) mup2_visualizer_pane_ParamLimits

0xbad0,	// (0x0008666b) mup2_visualizer_pane

0xbad0,	// (0x0008666b) mup_progress_pane_cp_ParamLimits

0xbad0,	// (0x0008666b) mup_progress_pane_cp

0xce7a,	// (0x00087a15) mup_volume_pane_cp_ParamLimits

0xce7a,	// (0x00087a15) mup_volume_pane_cp

0xac05,	// (0x000857a0) mup2_visualizer_pane_g1_ParamLimits

0xac05,	// (0x000857a0) mup2_visualizer_pane_g1

0xac13,	// (0x000857ae) mup2_visualizer_pane_g2_ParamLimits

0xac13,	// (0x000857ae) mup2_visualizer_pane_g2

0xac13,	// (0x000857ae) mup2_visualizer_pane_g3_ParamLimits

0xac13,	// (0x000857ae) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00089c3a) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00089c3a) mup2_visualizer_pane_g

0x10d4,	// (0x0007bc6f) aid_size_cell_fmradio

0x3b7a,	// (0x0007e715) aid_height_parent_landcape

0xb062,	// (0x00085bfd) wml_content_pane_cp

0xb06a,	// (0x00085c05) wml_tabs_pane

0xb073,	// (0x00085c0e) popup_wml_miniature_window

0xb07b,	// (0x00085c16) scroll_pane_cp021

0xb08f,	// (0x00085c2a) wml_content_pane_comp8

0xa92f,	// (0x000854ca) bg_popup_sub_pane_cp05

0xce90,	// (0x00087a2b) popup_wml_miniature_window_g1

0xce98,	// (0x00087a33) wml_miniature_view_pane

0x4078,	// (0x0007ec13) aid_size_wml_view

0x4080,	// (0x0007ec1b) wml_miniature_view_pane_g1

0x4089,	// (0x0007ec24) wml_miniature_view_pane_g2

0x4092,	// (0x0007ec2d) wml_miniature_view_pane_g3

0x409a,	// (0x0007ec35) wml_miniature_view_pane_g4

0x40a2,	// (0x0007ec3d) wml_miniature_view_pane_g5

0x40aa,	// (0x0007ec45) wml_miniature_view_pane_g6

0x40b2,	// (0x0007ec4d) wml_miniature_view_pane_g7

0x40ba,	// (0x0007ec55) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x0008a144) wml_miniature_view_pane_g

0xcea0,	// (0x00087a3b) background_graphic_ParamLimits

0xcea0,	// (0x00087a3b) background_graphic

0xceac,	// (0x00087a47) wml_tabs_2_pane

0xceb5,	// (0x00087a50) wml_tabs_3_pane_ParamLimits

0xceb5,	// (0x00087a50) wml_tabs_3_pane

0xcec7,	// (0x00087a62) wml_tabs_4_pane_ParamLimits

0xcec7,	// (0x00087a62) wml_tabs_4_pane

0xcedd,	// (0x00087a78) wml_tabs_5_pane_ParamLimits

0xcedd,	// (0x00087a78) wml_tabs_5_pane

0xcef7,	// (0x00087a92) wml_tabs_pane_g2_ParamLimits

0xcef7,	// (0x00087a92) wml_tabs_pane_g2

0xcf0c,	// (0x00087aa7) wml_tabs_pane_g3_ParamLimits

0xcf0c,	// (0x00087aa7) wml_tabs_pane_g3

0xcf21,	// (0x00087abc) wml_tabs_2_active_pane_ParamLimits

0xcf21,	// (0x00087abc) wml_tabs_2_active_pane

0xcf21,	// (0x00087abc) wml_tabs_2_passive_pane_ParamLimits

0xcf21,	// (0x00087abc) wml_tabs_2_passive_pane

0x40c2,	// (0x0007ec5d) wml_tabs_3_active_pane_cp_ParamLimits

0x40c2,	// (0x0007ec5d) wml_tabs_3_active_pane_cp

0x40d7,	// (0x0007ec72) wml_tabs_3_passive_pane_ParamLimits

0x40d7,	// (0x0007ec72) wml_tabs_3_passive_pane

0x40ea,	// (0x0007ec85) wml_tabs_3_passive_pane_cp_ParamLimits

0x40ea,	// (0x0007ec85) wml_tabs_3_passive_pane_cp

0x4101,	// (0x0007ec9c) tabs_4_active_pane

0x4109,	// (0x0007eca4) tabs_4_passive_pane

0x4113,	// (0x0007ecae) tabs_4_passive_pane_cp

0x411b,	// (0x0007ecb6) tabs_4_passive_pane_cp2

0x393e,	// (0x0007e4d9) aid_height_text

0xbad0,	// (0x0008666b) mup_volume_cont_pane_ParamLimits

0xbad0,	// (0x0008666b) mup_volume_cont_pane

0x10d4,	// (0x0007bc6f) aid_size_cell_pinb

0x10d4,	// (0x0007bc6f) aid_size_list_pinb

0xbad0,	// (0x0008666b) mup2_volume_cont_pane_ParamLimits

0xbad0,	// (0x0008666b) mup2_volume_cont_pane

0xcf2f,	// (0x00087aca) mup2_volume_cont_pane_g1_ParamLimits

0xcf2f,	// (0x00087aca) mup2_volume_cont_pane_g1

0x10de,	// (0x0007bc79) aid_size_cell_touch_ParamLimits

0x10de,	// (0x0007bc79) aid_size_cell_touch

0x130a,	// (0x0007bea5) touch_pane_ParamLimits

0x130a,	// (0x0007bea5) touch_pane

0x10d4,	// (0x0007bc6f) main_rss2_pane

0xcf4e,	// (0x00087ae9) listscroll_rss2_pane

0xcf57,	// (0x00087af2) rss2_navigation_pane

0xcf5f,	// (0x00087afa) list_rss2_pane

0xb7a4,	// (0x0008633f) scroll_pane_cp22

0xcf67,	// (0x00087b02) rss2_navigation_pane_g1

0xcf70,	// (0x00087b0b) rss2_navigation_pane_g2

0xcf78,	// (0x00087b13) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x0008a155) rss2_navigation_pane_g

0xcf80,	// (0x00087b1b) rss2_navigation_pane_t1

0x4125,	// (0x0007ecc0) rss2_list_single_pane_ParamLimits

0x4125,	// (0x0007ecc0) rss2_list_single_pane

0xcf8e,	// (0x00087b29) rss2_list_single_pane_t2

0xcf9c,	// (0x00087b37) rss2_list_single_pane_t3_ParamLimits

0xcf9c,	// (0x00087b37) rss2_list_single_pane_t3

0xcfb9,	// (0x00087b54) rss2_list_single_pane_t4

0x2cd5,	// (0x0007d870) smil_status_pane_g1

0xa541,	// (0x000850dc) main_image2_pane_ParamLimits

0xa541,	// (0x000850dc) main_image2_pane

0xe594,	// (0x0008912f) main_camera2_pane_g9_ParamLimits

0xe594,	// (0x0008912f) main_camera2_pane_g9

0x4042,	// (0x0007ebdd) main_camera2_pane_t5_ParamLimits

0x4042,	// (0x0007ebdd) main_camera2_pane_t5

0xce4a,	// (0x000879e5) main_camera2_pane_t6_ParamLimits

0xce4a,	// (0x000879e5) main_camera2_pane_t6

0x413a,	// (0x0007ecd5) main_image2_pane_g1_ParamLimits

0x413a,	// (0x0007ecd5) main_image2_pane_g1

0x3612,	// (0x0007e1ad) smil2_video_pane_ParamLimits

0x3612,	// (0x0007e1ad) smil2_video_pane

0xa4f8,	// (0x00085093) aid_zoom_text_primary_cp

0xa537,	// (0x000850d2) popup_preview_fixed_window

0xafcb,	// (0x00085b66) im_reading_pane_g1

0x4034,	// (0x0007ebcf) cams2_bc_adjust_pane_cp_ParamLimits

0x4034,	// (0x0007ebcf) cams2_bc_adjust_pane_cp

0xbad0,	// (0x0008666b) cams2_bc_adjust_pane_ParamLimits

0xbad0,	// (0x0008666b) cams2_bc_adjust_pane

0xac4b,	// (0x000857e6) cams2_bc_adjust_pane_g1

0x10d4,	// (0x0007bc6f) cams2_slider_pane

0xac4b,	// (0x000857e6) cams2_slider_pane_g1

0xac4b,	// (0x000857e6) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x0008a15c) cams2_slider_pane_g

0x1405,	// (0x0007bfa0) calc_display_pane_ParamLimits

0x142a,	// (0x0007bfc5) calc_paper_pane_ParamLimits

0x144d,	// (0x0007bfe8) grid_calc_pane_ParamLimits

0xb660,	// (0x000861fb) popup_clock_digital_window_t1_ParamLimits

0xbcc8,	// (0x00086863) main_image_pane_t1

0x13e7,	// (0x0007bf82) aid_size_cell_calc_ParamLimits

0x13e7,	// (0x0007bf82) aid_size_cell_calc

0x3bc0,	// (0x0007e75b) popup_blid_sat_info2_window_ParamLimits

0x3bc0,	// (0x0007e75b) popup_blid_sat_info2_window

0xcfc7,	// (0x00087b62) aid_size_cell_blid

0xce6c,	// (0x00087a07) bg_popup_window_pane_cp07

0xcfe4,	// (0x00087b7f) grid_popup_blid_pane

0xcfee,	// (0x00087b89) heading_pane_cp05_ParamLimits

0xcfee,	// (0x00087b89) heading_pane_cp05

0xd0b8,	// (0x00087c53) cell_popup_blid_pane_ParamLimits

0xd0b8,	// (0x00087c53) cell_popup_blid_pane

0xd0dc,	// (0x00087c77) cell_popup_blid_pane_g1

0xd0e4,	// (0x00087c7f) cell_popup_blid_pane_t1

0xbad0,	// (0x0008666b) mup2_indicator_pane_ParamLimits

0xbad0,	// (0x0008666b) mup2_indicator_pane

0x10d4,	// (0x0007bc6f) mup2_visualizer_osc_pane

0xce7a,	// (0x00087a15) mup2_visualizer_spec_pane_ParamLimits

0xce7a,	// (0x00087a15) mup2_visualizer_spec_pane

0x10d4,	// (0x0007bc6f) mup2_spec_half_pane

0x10d4,	// (0x0007bc6f) mup2_spec_half_pane_cp

0xd0f2,	// (0x00087c8d) mup2_spec_bar_pane_ParamLimits

0xd0f2,	// (0x00087c8d) mup2_spec_bar_pane

0xac4b,	// (0x000857e6) mup2_spec_bar_pane_g1

0xd111,	// (0x00087cac) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x0008a182) mup2_spec_bar_pane_g

0x10d4,	// (0x0007bc6f) mup2_osc_middle_pane

0xac4b,	// (0x000857e6) mup2_visualizer_osc_pane_g1

0x137c,	// (0x0007bf17) popup_number_entry_window_t1_ParamLimits

0xa54f,	// (0x000850ea) popup_number_entry_window_t2_ParamLimits

0xa561,	// (0x000850fc) popup_number_entry_window_t3_ParamLimits

0x138f,	// (0x0007bf2a) popup_number_entry_window_t5_ParamLimits

0x138f,	// (0x0007bf2a) popup_number_entry_window_t5

0xf040,	// (0x00089bdb) popup_number_entry_window_t_ParamLimits

0xa573,	// (0x0008510e) text_title_cp2_ParamLimits

0xbbc0,	// (0x0008675b) aid_hotspot_pointer_text2_pane

0xbbe6,	// (0x00086781) main_viewer_pane_g9_ParamLimits

0xbbe6,	// (0x00086781) main_viewer_pane_g9

0xb204,	// (0x00085d9f) cale_month_pane_t1_ParamLimits

0xb26f,	// (0x00085e0a) bg_cale_pane_ParamLimits

0xb287,	// (0x00085e22) list_cale_pane_ParamLimits

0xb298,	// (0x00085e33) listscroll_cale_day_pane_t1

0xb2aa,	// (0x00085e45) scroll_pane_cp09_ParamLimits

0x3092,	// (0x0007dc2d) main_mup_eq_pane_t1_ParamLimits

0x3092,	// (0x0007dc2d) main_mup_eq_pane_t1

0x30ac,	// (0x0007dc47) main_mup_eq_pane_t2_ParamLimits

0x30ac,	// (0x0007dc47) main_mup_eq_pane_t2

0x30c6,	// (0x0007dc61) main_mup_eq_pane_t3_ParamLimits

0x30c6,	// (0x0007dc61) main_mup_eq_pane_t3

0x30e2,	// (0x0007dc7d) main_mup_eq_pane_t4_ParamLimits

0x30e2,	// (0x0007dc7d) main_mup_eq_pane_t4

0x30fe,	// (0x0007dc99) main_mup_eq_pane_t5_ParamLimits

0x30fe,	// (0x0007dc99) main_mup_eq_pane_t5

0x311a,	// (0x0007dcb5) main_mup_eq_pane_t6_ParamLimits

0x311a,	// (0x0007dcb5) main_mup_eq_pane_t6

0x312e,	// (0x0007dcc9) main_mup_eq_pane_t7_ParamLimits

0x312e,	// (0x0007dcc9) main_mup_eq_pane_t7

0x3142,	// (0x0007dcdd) main_mup_eq_pane_t8_ParamLimits

0x3142,	// (0x0007dcdd) main_mup_eq_pane_t8

0x3156,	// (0x0007dcf1) main_mup_eq_pane_t9_ParamLimits

0x3156,	// (0x0007dcf1) main_mup_eq_pane_t9

0x3170,	// (0x0007dd0b) main_mup_eq_pane_t10_ParamLimits

0x3170,	// (0x0007dd0b) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x00089f35) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x00089f35) main_mup_eq_pane_t

0x321f,	// (0x0007ddba) mup_equalizer_pane_cp5_ParamLimits

0x3233,	// (0x0007ddce) mup_equalizer_pane_cp6_ParamLimits

0x3247,	// (0x0007dde2) mup_equalizer_pane_cp7_ParamLimits

0x10d4,	// (0x0007bc6f) main_gallery_pane

0xcdb8,	// (0x00087953) smil2_volume_pane

0xcdc0,	// (0x0008795b) smil_status_volume_pane_g1_ParamLimits

0xcdd3,	// (0x0008796e) smil_status_volume_pane_g2_ParamLimits

0xcde6,	// (0x00087981) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x0008a0db) smil_status_volume_pane_g_ParamLimits

0xce6c,	// (0x00087a07) bg_popup_window_pane_cp07_ParamLimits

0xcfcf,	// (0x00087b6a) blid_firmament_pane

0xa541,	// (0x000850dc) aid_size_cell_gallery_ParamLimits

0xa541,	// (0x000850dc) aid_size_cell_gallery

0xa541,	// (0x000850dc) grid_gallery_pane_ParamLimits

0xa541,	// (0x000850dc) grid_gallery_pane

0xce6c,	// (0x00087a07) cell_gallery_pane_ParamLimits

0xce6c,	// (0x00087a07) cell_gallery_pane

0xa541,	// (0x000850dc) bg_cell_gallery_focus_pane_ParamLimits

0xa541,	// (0x000850dc) bg_cell_gallery_focus_pane

0xac05,	// (0x000857a0) cell_gallery_pane_g1_ParamLimits

0xac05,	// (0x000857a0) cell_gallery_pane_g1

0xac05,	// (0x000857a0) cell_gallery_pane_g2_ParamLimits

0xac05,	// (0x000857a0) cell_gallery_pane_g2

0xac05,	// (0x000857a0) cell_gallery_pane_g3_ParamLimits

0xac05,	// (0x000857a0) cell_gallery_pane_g3

0xac13,	// (0x000857ae) cell_gallery_pane_g4_ParamLimits

0xac13,	// (0x000857ae) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x0008a187) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x0008a187) cell_gallery_pane_g

0xd11b,	// (0x00087cb6) bg_cell_gallery_focus_pane_g1

0xd123,	// (0x00087cbe) bg_cell_gallery_focus_pane_g2

0xd12b,	// (0x00087cc6) bg_cell_gallery_focus_pane_g3

0xd133,	// (0x00087cce) bg_cell_gallery_focus_pane_g4

0xd13b,	// (0x00087cd6) bg_cell_gallery_focus_pane_g5

0xd143,	// (0x00087cde) bg_cell_gallery_focus_pane_g6

0xd14b,	// (0x00087ce6) bg_cell_gallery_focus_pane_g7

0xd153,	// (0x00087cee) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x0008a190) bg_cell_gallery_focus_pane_g

0xd15b,	// (0x00087cf6) aid_firma_cardinal

0xd16f,	// (0x00087d0a) blid_firmament_pane_t1

0xd186,	// (0x00087d21) blid_firmament_pane_t2

0xd19d,	// (0x00087d38) blid_firmament_pane_t3

0xd1b4,	// (0x00087d4f) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x0008a1a1) blid_firmament_pane_t

0xd1cb,	// (0x00087d66) blid_sat_info_pane

0xac4b,	// (0x000857e6) blid_sat_info_pane_g1

0xac4b,	// (0x000857e6) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00089c4a) blid_sat_info_pane_g

0xd1db,	// (0x00087d76) blid_sat_info_pane_t1

0xd1e9,	// (0x00087d84) smil2_volume_content_pane

0xd1f2,	// (0x00087d8d) smil2_volume_pane_g1

0xad5e,	// (0x000858f9) smil2_volume_content_pane_g1

0xd1fa,	// (0x00087d95) smil2_volume_content_pane_g2

0xd203,	// (0x00087d9e) smil2_volume_content_pane_g3

0xd20c,	// (0x00087da7) smil2_volume_content_pane_g4

0xd215,	// (0x00087db0) smil2_volume_content_pane_g5

0xd21e,	// (0x00087db9) smil2_volume_content_pane_g6

0xd227,	// (0x00087dc2) smil2_volume_content_pane_g7

0xd230,	// (0x00087dcb) smil2_volume_content_pane_g8

0xd239,	// (0x00087dd4) smil2_volume_content_pane_g9

0xd242,	// (0x00087ddd) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x0008a1aa) smil2_volume_content_pane_g

0x1906,	// (0x0007c4a1) cale_week_day_heading_pane_t1_ParamLimits

0x1930,	// (0x0007c4cb) cale_week_day_heading_pane_t2_ParamLimits

0x195f,	// (0x0007c4fa) cale_week_day_heading_pane_t3_ParamLimits

0x198e,	// (0x0007c529) cale_week_day_heading_pane_t4_ParamLimits

0x19bd,	// (0x0007c558) cale_week_day_heading_pane_t5_ParamLimits

0x19f4,	// (0x0007c58f) cale_week_day_heading_pane_t6_ParamLimits

0x1a2b,	// (0x0007c5c6) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00089ce2) cale_week_day_heading_pane_t_ParamLimits

0xaeb6,	// (0x00085a51) bg_cale_side_pane_ParamLimits

0x1a55,	// (0x0007c5f0) cale_week_time_pane_t1_ParamLimits

0x1a6f,	// (0x0007c60a) cale_week_time_pane_t2_ParamLimits

0x1a89,	// (0x0007c624) cale_week_time_pane_t3_ParamLimits

0x1aa3,	// (0x0007c63e) cale_week_time_pane_t4_ParamLimits

0x1abd,	// (0x0007c658) cale_week_time_pane_t5_ParamLimits

0x1ad7,	// (0x0007c672) cale_week_time_pane_t6_ParamLimits

0x1af1,	// (0x0007c68c) cale_week_time_pane_t7_ParamLimits

0x1b0b,	// (0x0007c6a6) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00089cf1) cale_week_time_pane_t_ParamLimits

0x1b25,	// (0x0007c6c0) cell_cale_week_pane_g2_ParamLimits

0xaeb6,	// (0x00085a51) bg_cale_side_pane_cp01_ParamLimits

0x2adc,	// (0x0007d677) cale_month_week_pane_t1_ParamLimits

0x2af5,	// (0x0007d690) cale_month_week_pane_t2_ParamLimits

0x2b0e,	// (0x0007d6a9) cale_month_week_pane_t3_ParamLimits

0x2b27,	// (0x0007d6c2) cale_month_week_pane_t4_ParamLimits

0x2b40,	// (0x0007d6db) cale_month_week_pane_t5_ParamLimits

0x2b59,	// (0x0007d6f4) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00089dbf) cale_month_week_pane_t_ParamLimits

0xb216,	// (0x00085db1) cell_cale_month_pane_g1_ParamLimits

0x10d4,	// (0x0007bc6f) main_cale_event_viewer_pane

0x10d4,	// (0x0007bc6f) listscroll_cale_event_viewer_pane

0xd24b,	// (0x00087de6) list_cale_ev_pane

0xd253,	// (0x00087dee) scroll_pane_cp023

0xd25f,	// (0x00087dfa) field_cale_ev_pane_ParamLimits

0xd25f,	// (0x00087dfa) field_cale_ev_pane

0xd27d,	// (0x00087e18) field_cale_ev_content_pane_ParamLimits

0xd27d,	// (0x00087e18) field_cale_ev_content_pane

0xd289,	// (0x00087e24) field_cale_ev_pane_g1_ParamLimits

0xd289,	// (0x00087e24) field_cale_ev_pane_g1

0xd295,	// (0x00087e30) field_cale_ev_pane_g2_ParamLimits

0xd295,	// (0x00087e30) field_cale_ev_pane_g2

0xd2ad,	// (0x00087e48) field_cale_ev_pane_g3_ParamLimits

0xd2ad,	// (0x00087e48) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x0008a1bf) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x0008a1bf) field_cale_ev_pane_g

0xd2c5,	// (0x00087e60) field_cale_ev_pane_t1_ParamLimits

0xd2c5,	// (0x00087e60) field_cale_ev_pane_t1

0xade1,	// (0x0008597c) field_cale_ev_content_pane_t1_ParamLimits

0xade1,	// (0x0008597c) field_cale_ev_content_pane_t1

0xbb73,	// (0x0008670e) bg_button_pane_cp01

0x1633,	// (0x0007c1ce) listscroll_cale_week_pane_ParamLimits

0xae61,	// (0x000859fc) popup_toolbar_window_cp01

0xae87,	// (0x00085a22) listscroll_cale_week_pane_t1_ParamLimits

0x1633,	// (0x0007c1ce) listscroll_cale_day_pane_ParamLimits

0xae61,	// (0x000859fc) popup_toolbar_window_cp02

0xb298,	// (0x00085e33) listscroll_cale_day_pane_t1_ParamLimits

0x1633,	// (0x0007c1ce) main_cale_month_pane_ParamLimits

0xcd36,	// (0x000878d1) popup_toolbar_window_cp03_ParamLimits

0xcd36,	// (0x000878d1) popup_toolbar_window_cp03

0x34da,	// (0x0007e075) main_image_pane_g2_ParamLimits

0x34da,	// (0x0007e075) main_image_pane_g2

0x34eb,	// (0x0007e086) main_image_pane_g3_ParamLimits

0x34eb,	// (0x0007e086) main_image_pane_g3

0x0002,

0xf42c,	// (0x00089fc7) main_image_pane_g_ParamLimits

0xf42c,	// (0x00089fc7) main_image_pane_g

0xbcc8,	// (0x00086863) main_image_pane_t1_ParamLimits

0x34fc,	// (0x0007e097) main_image_pane_t2_ParamLimits

0x34fc,	// (0x0007e097) main_image_pane_t2

0x350e,	// (0x0007e0a9) main_image_pane_t3_ParamLimits

0x350e,	// (0x0007e0a9) main_image_pane_t3

0x3536,	// (0x0007e0d1) main_image_pane_t4_ParamLimits

0x3536,	// (0x0007e0d1) main_image_pane_t4

0x0003,

0xf433,	// (0x00089fce) main_image_pane_t_ParamLimits

0xf433,	// (0x00089fce) main_image_pane_t

0x3556,	// (0x0007e0f1) popup_image_details_window_cp01

0x3560,	// (0x0007e0fb) popup_toobar_trans_pane_cp01_ParamLimits

0x3560,	// (0x0007e0fb) popup_toobar_trans_pane_cp01

0x3c9f,	// (0x0007e83a) popup_image_details_window_ParamLimits

0x3c9f,	// (0x0007e83a) popup_image_details_window

0xcd09,	// (0x000878a4) popup_image_focus_window

0xce3c,	// (0x000879d7) camera2_autofocus_pane_ParamLimits

0xce3c,	// (0x000879d7) camera2_autofocus_pane

0x10d4,	// (0x0007bc6f) bg_popup_sub_pane_cp06

0xd2dc,	// (0x00087e77) popup_image_focus_window_g1

0xd2e4,	// (0x00087e7f) popup_image_focus_window_g2

0xd2ec,	// (0x00087e87) popup_image_focus_window_g3

0xd2f4,	// (0x00087e8f) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x0008a1c6) popup_image_focus_window_g

0xd2fc,	// (0x00087e97) popup_image_focus_window_t1

0xd30a,	// (0x00087ea5) popup_image_focus_window_t2

0xd31a,	// (0x00087eb5) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x0008a1cf) popup_image_focus_window_t

0xac05,	// (0x000857a0) camera2_autofocus_pane_g1

0xa541,	// (0x000850dc) bg_tb_trans_pane_cp01

0xd328,	// (0x00087ec3) popup_image_details_window_g1

0xd33b,	// (0x00087ed6) popup_image_details_window_g2

0x0002,

0xf646,	// (0x0008a1e1) popup_image_details_window_g

0xd364,	// (0x00087eff) popup_image_details_window_t1

0xd376,	// (0x00087f11) popup_image_details_window_t2

0xd38f,	// (0x00087f2a) popup_image_details_window_t3

0xd3a3,	// (0x00087f3e) popup_image_details_window_t4

0xd3be,	// (0x00087f59) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x0008a1e8) popup_image_details_window_t

0xac95,	// (0x00085830) bg_calc_paper_pane_ParamLimits

0x10d4,	// (0x0007bc6f) grid_highlight_pane_cp013

0xaca9,	// (0x00085844) list_calc_pane_ParamLimits

0xacbb,	// (0x00085856) scroll_pane_cp024

0xacc3,	// (0x0008585e) bg_calc_display_pane_ParamLimits

0x148f,	// (0x0007c02a) calc_display_pane_t1_ParamLimits

0x14a4,	// (0x0007c03f) calc_display_pane_t2_ParamLimits

0xaccf,	// (0x0008586a) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00089c62) calc_display_pane_t_ParamLimits

0x1564,	// (0x0007c0ff) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00089c7f) cell_calc_pane_g

0x156d,	// (0x0007c108) cell_calc_pane_t1

0xad3c,	// (0x000858d7) grid_highlight_pane_cp02_ParamLimits

0xad52,	// (0x000858ed) toolbar_button_pane_cp01_ParamLimits

0xad52,	// (0x000858ed) toolbar_button_pane_cp01

0xbd0d,	// (0x000868a8) temp_image_control_pane_ParamLimits

0xbd0d,	// (0x000868a8) temp_image_control_pane

0xa541,	// (0x000850dc) main_mp3_pane

0xd3d8,	// (0x00087f73) temp_image_control_pane_g1_ParamLimits

0xd3d8,	// (0x00087f73) temp_image_control_pane_g1

0xd3e6,	// (0x00087f81) temp_image_control_pane_g2_ParamLimits

0xd3e6,	// (0x00087f81) temp_image_control_pane_g2

0xd3f8,	// (0x00087f93) temp_image_control_pane_g3_ParamLimits

0xd3f8,	// (0x00087f93) temp_image_control_pane_g3

0x4150,	// (0x0007eceb) temp_image_control_pane_g4_ParamLimits

0x4150,	// (0x0007eceb) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x0008a1f3) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x0008a1f3) temp_image_control_pane_g

0xd3d8,	// (0x00087f73) main_mp3_pane_g1

0x4163,	// (0x0007ecfe) main_mp3_pane_g2

0x0007,

0xf661,	// (0x0008a1fc) main_mp3_pane_g

0xd42d,	// (0x00087fc8) main_mp3_pane_t1

0xac13,	// (0x000857ae) main_camera_pane_g8_ParamLimits

0xac13,	// (0x000857ae) main_camera_pane_g8

0x1cef,	// (0x0007c88a) main_video_pane_g7_ParamLimits

0x1cef,	// (0x0007c88a) main_video_pane_g7

0xac69,	// (0x00085804) main_camera2_pane_t7_ParamLimits

0xac69,	// (0x00085804) main_camera2_pane_t7

0xb022,	// (0x00085bbd) scroll_pane_cp025_ParamLimits

0xb022,	// (0x00085bbd) scroll_pane_cp025

0xb036,	// (0x00085bd1) scroll_pane_cp026_ParamLimits

0xb036,	// (0x00085bd1) scroll_pane_cp026

0xb045,	// (0x00085be0) wml_content_pane_ParamLimits

0x10d4,	// (0x0007bc6f) main_touch_calib_pane

0x4237,	// (0x0007edd2) main_touch_calib_pane_g1

0x4249,	// (0x0007ede4) main_touch_calib_pane_g2

0x425b,	// (0x0007edf6) main_touch_calib_pane_g3

0x426d,	// (0x0007ee08) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x0008a21a) main_touch_calib_pane_g

0x427f,	// (0x0007ee1a) main_touch_calib_pane_t1

0x4299,	// (0x0007ee34) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x0008a223) main_touch_calib_pane_t

0xb880,	// (0x0008641b) mup_progress_pane_cp02

0xb8b5,	// (0x00086450) navi_pane_g1

0xb970,	// (0x0008650b) navi_pane_mp_t3

0xa541,	// (0x000850dc) main_mp3_pane_ParamLimits

0x3e24,	// (0x0007e9bf) navi_pane_ParamLimits

0xd3d8,	// (0x00087f73) main_mp3_pane_g1_ParamLimits

0x4163,	// (0x0007ecfe) main_mp3_pane_g2_ParamLimits

0x4171,	// (0x0007ed0c) main_mp3_pane_g3_ParamLimits

0x4171,	// (0x0007ed0c) main_mp3_pane_g3

0x417f,	// (0x0007ed1a) main_mp3_pane_g4_ParamLimits

0x417f,	// (0x0007ed1a) main_mp3_pane_g4

0xac05,	// (0x000857a0) main_mp3_pane_g5_ParamLimits

0xac05,	// (0x000857a0) main_mp3_pane_g5

0xd408,	// (0x00087fa3) main_mp3_pane_g6_ParamLimits

0xd408,	// (0x00087fa3) main_mp3_pane_g6

0xd415,	// (0x00087fb0) main_mp3_pane_g7_ParamLimits

0xd415,	// (0x00087fb0) main_mp3_pane_g7

0xd421,	// (0x00087fbc) main_mp3_pane_g8_ParamLimits

0xd421,	// (0x00087fbc) main_mp3_pane_g8

0xf661,	// (0x0008a1fc) main_mp3_pane_g_ParamLimits

0x418b,	// (0x0007ed26) main_mp3_pane_t2

0x4199,	// (0x0007ed34) main_mp3_pane_t3

0xd43b,	// (0x00087fd6) main_mp3_pane_t4

0xd449,	// (0x00087fe4) main_mp3_pane_t5

0x0005,

0xf672,	// (0x0008a20d) main_mp3_pane_t

0xd457,	// (0x00087ff2) mup_progress_pane_cp01

0xa4f8,	// (0x00085093) aid_zoom_text_secondary2

0xd24b,	// (0x00087de6) list_cale_ev2_pane

0xd253,	// (0x00087dee) scroll_pane_cp023_ParamLimits

0x42ef,	// (0x0007ee8a) field_cale_ev2_pane_ParamLimits

0x42ef,	// (0x0007ee8a) field_cale_ev2_pane

0x430f,	// (0x0007eeaa) field_cale_ev2_pane_g1_ParamLimits

0x430f,	// (0x0007eeaa) field_cale_ev2_pane_g1

0x431b,	// (0x0007eeb6) field_cale_ev2_pane_g2_ParamLimits

0x431b,	// (0x0007eeb6) field_cale_ev2_pane_g2

0x4333,	// (0x0007eece) field_cale_ev2_pane_g3_ParamLimits

0x4333,	// (0x0007eece) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x0008a22e) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x0008a22e) field_cale_ev2_pane_g

0xd46b,	// (0x00088006) field_cale_ev2_pane_t1_ParamLimits

0xd46b,	// (0x00088006) field_cale_ev2_pane_t1

0xd482,	// (0x0008801d) field_cale_ev2_pane_t2_ParamLimits

0xd482,	// (0x0008801d) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x0008a237) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x0008a237) field_cale_ev2_pane_t

0x33b0,	// (0x0007df4b) main_postcard_pane_g5_ParamLimits

0x33b0,	// (0x0007df4b) main_postcard_pane_g5

0x33c6,	// (0x0007df61) main_postcard_pane_g6_ParamLimits

0x33c6,	// (0x0007df61) main_postcard_pane_g6

0xa541,	// (0x000850dc) camera2_autofocus_pane_cp_ParamLimits

0xa541,	// (0x000850dc) camera2_autofocus_pane_cp

0xa541,	// (0x000850dc) main_mup3_pane

0x438f,	// (0x0007ef2a) main_mup3_pane_g1_ParamLimits

0x438f,	// (0x0007ef2a) main_mup3_pane_g1

0x43b1,	// (0x0007ef4c) main_mup3_pane_g2_ParamLimits

0x43b1,	// (0x0007ef4c) main_mup3_pane_g2

0x442f,	// (0x0007efca) main_mup3_pane_g3_ParamLimits

0x442f,	// (0x0007efca) main_mup3_pane_g3

0x4475,	// (0x0007f010) main_mup3_pane_g4_ParamLimits

0x4475,	// (0x0007f010) main_mup3_pane_g4

0x44bb,	// (0x0007f056) main_mup3_pane_g5_ParamLimits

0x44bb,	// (0x0007f056) main_mup3_pane_g5

0x4501,	// (0x0007f09c) main_mup3_pane_g6_ParamLimits

0x4501,	// (0x0007f09c) main_mup3_pane_g6

0xac13,	// (0x000857ae) main_mup3_pane_g7_ParamLimits

0xac13,	// (0x000857ae) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x0008a247) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x0008a247) main_mup3_pane_g

0x457f,	// (0x0007f11a) main_mup3_pane_t1_ParamLimits

0x457f,	// (0x0007f11a) main_mup3_pane_t1

0x45f3,	// (0x0007f18e) main_mup3_pane_t2_ParamLimits

0x45f3,	// (0x0007f18e) main_mup3_pane_t2

0x46c7,	// (0x0007f262) main_mup3_pane_t4_ParamLimits

0x46c7,	// (0x0007f262) main_mup3_pane_t4

0x471d,	// (0x0007f2b8) main_mup3_pane_t5_ParamLimits

0x471d,	// (0x0007f2b8) main_mup3_pane_t5

0x47d9,	// (0x0007f374) main_mup3_pane_t6_ParamLimits

0x47d9,	// (0x0007f374) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x0008a258) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x0008a258) main_mup3_pane_t

0x4891,	// (0x0007f42c) mup3_progress_pane_ParamLimits

0x4891,	// (0x0007f42c) mup3_progress_pane

0x4927,	// (0x0007f4c2) popup_mup3_control_window_ParamLimits

0x4927,	// (0x0007f4c2) popup_mup3_control_window

0xd497,	// (0x00088032) popup_mup3_text_window

0x4959,	// (0x0007f4f4) mup3_progress_pane_t1

0x4978,	// (0x0007f513) mup3_progress_pane_t2

0xd49f,	// (0x0008803a) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x0008a265) mup3_progress_pane_t

0xd4bc,	// (0x00088057) mup_progress_pane_cp03

0x10d4,	// (0x0007bc6f) bg_tb_trans_pane_cp04

0x4997,	// (0x0007f532) mup3_volume_pane

0x499f,	// (0x0007f53a) popup_mup3_control_window_g1

0x49a8,	// (0x0007f543) mup3_volume_pane_g1

0x49b1,	// (0x0007f54c) mup3_volume_pane_g2

0x49ba,	// (0x0007f555) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x0008a26c) mup3_volume_pane_g

0x10d4,	// (0x0007bc6f) bg_tb_trans_pane_cp03

0xd4cc,	// (0x00088067) popup_mup3_text_window_g1

0xd4d4,	// (0x0008806f) popup_mup3_text_window_t1

0xad1d,	// (0x000858b8) list_calc_item_pane_g1_ParamLimits

0xcf45,	// (0x00087ae0) mup_volume_pane_cp_g1

0x42b3,	// (0x0007ee4e) main_touch_calib_pane_t3

0x42c7,	// (0x0007ee62) main_touch_calib_pane_t4

0x42db,	// (0x0007ee76) main_touch_calib_pane_t5

0xa4d4,	// (0x0008506f) aid_cell_size_toolbar2

0xa4dc,	// (0x00085077) aid_popup3_width_pane

0xa4e8,	// (0x00085083) aid_zoom_text_msg_primary

0x1bca,	// (0x0007c765) vorec_t7

0xace1,	// (0x0008587c) bg_calc_paper_pane_g1_ParamLimits

0xaced,	// (0x00085888) bg_calc_paper_pane_g2_ParamLimits

0xacf9,	// (0x00085894) bg_calc_paper_pane_g3_ParamLimits

0xad05,	// (0x000858a0) bg_calc_paper_pane_g4_ParamLimits

0xad11,	// (0x000858ac) bg_calc_paper_pane_g5_ParamLimits

0x14ee,	// (0x0007c089) bg_calc_paper_pane_g6_ParamLimits

0x14fd,	// (0x0007c098) bg_calc_paper_pane_g7_ParamLimits

0x150c,	// (0x0007c0a7) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00089c69) bg_calc_paper_pane_g_ParamLimits

0x151f,	// (0x0007c0ba) calc_bg_paper_pane_g9_ParamLimits

0xa541,	// (0x000850dc) image_qvga_pane_ParamLimits

0xa541,	// (0x000850dc) image_qvga_pane

0xab8a,	// (0x00085725) bg_popup_sub_pane_cp04_ParamLimits

0xbc44,	// (0x000867df) popup_mup_playback_window_g1_ParamLimits

0xbc50,	// (0x000867eb) popup_mup_playback_window_t1_ParamLimits

0xbc65,	// (0x00086800) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x00089fc2) popup_mup_playback_window_t_ParamLimits

0xac13,	// (0x000857ae) main_mup2_pane_g3_ParamLimits

0xac13,	// (0x000857ae) main_mup2_pane_g3

0x1eaa,	// (0x0007ca45) popup_toolbar_window_cp04

0xbfd6,	// (0x00086b71) popup_call2_audio_second_window_g3_ParamLimits

0xbfd6,	// (0x00086b71) popup_call2_audio_second_window_g3

0xc3ee,	// (0x00086f89) popup_call2_audio_first_window_g4_ParamLimits

0xc3ee,	// (0x00086f89) popup_call2_audio_first_window_g4

0xca15,	// (0x000875b0) popup_call2_audio_in_window_g4_ParamLimits

0xca15,	// (0x000875b0) popup_call2_audio_in_window_g4

0x34bc,	// (0x0007e057) aid_area_sk_bg_cut_ParamLimits

0x34bc,	// (0x0007e057) aid_area_sk_bg_cut

0xbc7a,	// (0x00086815) aid_area_sk_bg_cut_2_ParamLimits

0xbc7a,	// (0x00086815) aid_area_sk_bg_cut_2

0x10d4,	// (0x0007bc6f) aid_placing_details_win

0x10d4,	// (0x0007bc6f) aid_placing_details_win_2

0xac05,	// (0x000857a0) camera2_autofocus_pane_g1_ParamLimits

0x12a3,	// (0x0007be3e) popup_fixed_preview_cale_window_ParamLimits

0x12a3,	// (0x0007be3e) popup_fixed_preview_cale_window

0xb9f7,	// (0x00086592) navi_slider_pane_g3

0xba00,	// (0x0008659b) navi_slider_pane_g4

0xba09,	// (0x000865a4) navi_slider_pane_g5

0xb9f7,	// (0x00086592) navi_slider_pane_g6

0xba12,	// (0x000865ad) navi_slider_pane_g7

0xbb40,	// (0x000866db) mup_scale_pane_g3

0xbb49,	// (0x000866e4) mup_scale_pane_g4

0xbb52,	// (0x000866ed) mup_scale_pane_g5

0x325b,	// (0x0007ddf6) mup_scale_pane_g6

0x3264,	// (0x0007ddff) mup_scale_pane_g7

0xac4b,	// (0x000857e6) cams2_slider_pane_g3

0xac4b,	// (0x000857e6) cams2_slider_pane_g4

0xac4b,	// (0x000857e6) cams2_slider_pane_g5

0xac4b,	// (0x000857e6) cams2_slider_pane_g6

0xac4b,	// (0x000857e6) cams2_slider_pane_g7

0xac4b,	// (0x000857e6) camera2_autofocus_pane_cp_g1

0xcceb,	// (0x00087886) bg_popup_preview_window_pane_cp02_ParamLimits

0xcceb,	// (0x00087886) bg_popup_preview_window_pane_cp02

0xd4e2,	// (0x0008807d) list_fp_cale_pane_ParamLimits

0xd4e2,	// (0x0008807d) list_fp_cale_pane

0xd4ee,	// (0x00088089) popup_fixed_preview_cale_window_t1_ParamLimits

0xd4ee,	// (0x00088089) popup_fixed_preview_cale_window_t1

0x49c3,	// (0x0007f55e) popup_fixed_preview_cale_window_t2_ParamLimits

0x49c3,	// (0x0007f55e) popup_fixed_preview_cale_window_t2

0x49d8,	// (0x0007f573) popup_fixed_preview_cale_window_t3_ParamLimits

0x49d8,	// (0x0007f573) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x0008a273) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x0008a273) popup_fixed_preview_cale_window_t

0x49ed,	// (0x0007f588) list_single_fp_cale_pane_ParamLimits

0x49ed,	// (0x0007f588) list_single_fp_cale_pane

0xd50c,	// (0x000880a7) list_single_fp_cale_pane_g1_ParamLimits

0xd50c,	// (0x000880a7) list_single_fp_cale_pane_g1

0xd518,	// (0x000880b3) list_single_fp_cale_pane_g2_ParamLimits

0xd518,	// (0x000880b3) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x0008a27a) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x0008a27a) list_single_fp_cale_pane_g

0xd531,	// (0x000880cc) list_single_fp_cale_pane_t1_ParamLimits

0xd531,	// (0x000880cc) list_single_fp_cale_pane_t1

0xd543,	// (0x000880de) list_single_fp_cale_pane_t2_ParamLimits

0xd543,	// (0x000880de) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x0008a281) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x0008a281) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x10d4,	// (0x0007bc6f) main_dialer_pane

0x10d4,	// (0x0007bc6f) aid_cell_size_keypad

0x10d4,	// (0x0007bc6f) dialer_ne_pane

0x10d4,	// (0x0007bc6f) grid_dialer_command_1_pane

0x10d4,	// (0x0007bc6f) grid_dialer_command_2_pane

0x10d4,	// (0x0007bc6f) grid_dialer_keypad_pane

0x4a02,	// (0x0007f59d) bg_popup_call_pane_cp06_ParamLimits

0x4a02,	// (0x0007f59d) bg_popup_call_pane_cp06

0x4a02,	// (0x0007f59d) dialer_ne_clear_pane_ParamLimits

0x4a02,	// (0x0007f59d) dialer_ne_clear_pane

0xac4b,	// (0x000857e6) dialer_ne_pane_g1

0xac69,	// (0x00085804) dialer_ne_pane_t1_ParamLimits

0xac69,	// (0x00085804) dialer_ne_pane_t1

0x4a10,	// (0x0007f5ab) dialer_ne_pane_t2_ParamLimits

0x4a10,	// (0x0007f5ab) dialer_ne_pane_t2

0x4a38,	// (0x0007f5d3) dialer_ne_pane_t3_ParamLimits

0x4a38,	// (0x0007f5d3) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x0008a286) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x0008a286) dialer_ne_pane_t

0x4a38,	// (0x0007f5d3) dialer_ne_pane_t3_copy1_ParamLimits

0x4a38,	// (0x0007f5d3) dialer_ne_pane_t3_copy1

0xd576,	// (0x00088111) cell_dialer_keypad_pane_ParamLimits

0xd576,	// (0x00088111) cell_dialer_keypad_pane

0xa541,	// (0x000850dc) cell_dialer_command_1_pane_ParamLimits

0xa541,	// (0x000850dc) cell_dialer_command_1_pane

0xd58d,	// (0x00088128) cell_dialer_command_2_pane_ParamLimits

0xd58d,	// (0x00088128) cell_dialer_command_2_pane

0xa541,	// (0x000850dc) bg_button_pane_cp02_ParamLimits

0xa541,	// (0x000850dc) bg_button_pane_cp02

0xac05,	// (0x000857a0) cell_dialer_keypad_pane_g1_ParamLimits

0xac05,	// (0x000857a0) cell_dialer_keypad_pane_g1

0xa541,	// (0x000850dc) bg_button_pane_cp03_ParamLimits

0xa541,	// (0x000850dc) bg_button_pane_cp03

0xac05,	// (0x000857a0) cell_dialer_command_1_pane_g1_ParamLimits

0xac05,	// (0x000857a0) cell_dialer_command_1_pane_g1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp04

0xac4b,	// (0x000857e6) cell_dialer_command_2_pane_g1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp06

0xac4b,	// (0x000857e6) dialer_ne_clear_pane_g1

0xb8c1,	// (0x0008645c) navi_pane_g2

0xb8ef,	// (0x0008648a) navi_pane_g3

0x0002,

0xf32f,	// (0x00089eca) navi_pane_g

0xb97e,	// (0x00086519) navi_pane_mv_g2

0xb9a5,	// (0x00086540) navi_pane_mv_g5

0x303e,	// (0x0007dbd9) navi_pane_mv_t1

0xacc3,	// (0x0008585e) main_clock2_pane

0xa541,	// (0x000850dc) main_clock2_list_pane_ParamLimits

0xa541,	// (0x000850dc) main_clock2_list_pane

0x4ace,	// (0x0007f669) main_clock2_pane_t1_ParamLimits

0x4ace,	// (0x0007f669) main_clock2_pane_t1

0x4b09,	// (0x0007f6a4) main_clock2_pane_t2_ParamLimits

0x4b09,	// (0x0007f6a4) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x0008a292) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x0008a292) main_clock2_pane_t

0x4ba9,	// (0x0007f744) popup_clock_analogue_window_cp03_ParamLimits

0x4ba9,	// (0x0007f744) popup_clock_analogue_window_cp03

0x4bce,	// (0x0007f769) popup_clock_digital_window_cp02_ParamLimits

0x4bce,	// (0x0007f769) popup_clock_digital_window_cp02

0x4c47,	// (0x0007f7e2) main_clock2_list_single_pane_ParamLimits

0x4c47,	// (0x0007f7e2) main_clock2_list_single_pane

0xaf08,	// (0x00085aa3) list_highlight_pane_cp05

0xd5d4,	// (0x0008816f) main_clock2_list_single_pane_t1

0x1eaa,	// (0x0007ca45) popup_toolbar_window_cp04_ParamLimits

0xac13,	// (0x000857ae) camera2_autofocus_pane_g2_ParamLimits

0xac13,	// (0x000857ae) camera2_autofocus_pane_g2

0xac13,	// (0x000857ae) camera2_autofocus_pane_g3_ParamLimits

0xac13,	// (0x000857ae) camera2_autofocus_pane_g3

0xac13,	// (0x000857ae) camera2_autofocus_pane_g4_ParamLimits

0xac13,	// (0x000857ae) camera2_autofocus_pane_g4

0xac13,	// (0x000857ae) camera2_autofocus_pane_g5_ParamLimits

0xac13,	// (0x000857ae) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x0008a1d6) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x0008a1d6) camera2_autofocus_pane_g

0x434b,	// (0x0007eee6) camera2_autofocus_pane_cp_g2

0x4353,	// (0x0007eeee) camera2_autofocus_pane_cp_g3

0x435b,	// (0x0007eef6) camera2_autofocus_pane_cp_g4

0x4363,	// (0x0007eefe) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x0008a23c) camera2_autofocus_pane_cp_g

0x10d4,	// (0x0007bc6f) popup_dialer_spcha_window

0x10d4,	// (0x0007bc6f) bg_popup_sub_pane_cp07

0x10d4,	// (0x0007bc6f) list_spcha_pane

0xd5e2,	// (0x0008817d) list_single_spcha_pane_ParamLimits

0xd5e2,	// (0x0008817d) list_single_spcha_pane

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp06

0xb483,	// (0x0008601e) list_single_spcha_pane_t1

0xc7bf,	// (0x0008735a) popup_call2_audio_out_window_g4_ParamLimits

0xc7bf,	// (0x0008735a) popup_call2_audio_out_window_g4

0x10d4,	// (0x0007bc6f) main_imed2_pane

0xcd11,	// (0x000878ac) popup_imed_adjust2_window

0x3cb7,	// (0x0007e852) popup_imed_trans_window_ParamLimits

0x3cb7,	// (0x0007e852) popup_imed_trans_window

0xd01a,	// (0x00087bb5) popup_blid_sat_info2_window_t1

0xd028,	// (0x00087bc3) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x0008a16b) popup_blid_sat_info2_window_t

0x4cf8,	// (0x0007f893) aid_size_cell_colour_35

0x4d18,	// (0x0007f8b3) aid_size_cell_colour_112

0x4d38,	// (0x0007f8d3) aid_size_cell_effect

0xbad0,	// (0x0008666b) bg_tb_trans_pane_cp02

0xb3a9,	// (0x00085f44) heading_imed_pane

0x4d58,	// (0x0007f8f3) listscroll_imed_pane

0xd5f4,	// (0x0008818f) heading_imed_pane_g1

0xd5fc,	// (0x00088197) heading_imed_pane_t1

0xd60a,	// (0x000881a5) grid_imed_colour_35_pane_ParamLimits

0xd60a,	// (0x000881a5) grid_imed_colour_35_pane

0x4d64,	// (0x0007f8ff) grid_imed_effect_pane

0xd621,	// (0x000881bc) list_imed_aspect_pane

0x4d7a,	// (0x0007f915) scroll_pane_cp027_ParamLimits

0x4d7a,	// (0x0007f915) scroll_pane_cp027

0x4d8b,	// (0x0007f926) cell_imed_effect_pane_ParamLimits

0x4d8b,	// (0x0007f926) cell_imed_effect_pane

0xd629,	// (0x000881c4) cell_imed_colour_pane_ParamLimits

0xd629,	// (0x000881c4) cell_imed_colour_pane

0xd66b,	// (0x00088206) cell_imed_colour_pane_g1_ParamLimits

0xd66b,	// (0x00088206) cell_imed_colour_pane_g1

0xd67c,	// (0x00088217) hgihlgiht_grid_pane_cp016_ParamLimits

0xd67c,	// (0x00088217) hgihlgiht_grid_pane_cp016

0x4db2,	// (0x0007f94d) cell_imed_effect_pane_g1

0x4dba,	// (0x0007f955) grid_highlight_pane_cp017

0xd68d,	// (0x00088228) list_imed_single_pane_ParamLimits

0xd68d,	// (0x00088228) list_imed_single_pane

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp07

0xd6a2,	// (0x0008823d) list_imed_aspect_pane_comp1_t1

0xbad0,	// (0x0008666b) bg_tb_trans_pane_cp05

0xd6c4,	// (0x0008825f) popup_imed_adjust2_window_g1

0xd6eb,	// (0x00088286) popup_imed_adjust2_window_t1

0xd703,	// (0x0008829e) slider_imed_adjust_pane

0xd717,	// (0x000882b2) slider_imed_adjust_pane_g1

0xd727,	// (0x000882c2) slider_imed_adjust_pane_g2

0xd737,	// (0x000882d2) slider_imed_adjust_pane_g3

0xd748,	// (0x000882e3) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x0008a2af) slider_imed_adjust_pane_g

0x4dc3,	// (0x0007f95e) aid_size_cell_clipart2

0x4dcf,	// (0x0007f96a) grid_imed_clipart_pane

0xbb63,	// (0x000866fe) scroll_pane_cp031

0x4dd9,	// (0x0007f974) cell_imed_clipart_pane_ParamLimits

0x4dd9,	// (0x0007f974) cell_imed_clipart_pane

0x4dfb,	// (0x0007f996) cell_imed_clipart_pane_g1

0x10d4,	// (0x0007bc6f) grid_highlight_pane_cp014

0x4aaa,	// (0x0007f645) main_clock2_pane_g1_ParamLimits

0x4aaa,	// (0x0007f645) main_clock2_pane_g1

0x4bee,	// (0x0007f789) aid_call2_pane_cp10

0x4c00,	// (0x0007f79b) aid_call_pane_cp10

0xb822,	// (0x000863bd) popup_clock_analogue_window_cp10_g1

0xb822,	// (0x000863bd) popup_clock_analogue_window_cp10_g2

0x4c12,	// (0x0007f7ad) popup_clock_analogue_window_cp10_g3

0x4c12,	// (0x0007f7ad) popup_clock_analogue_window_cp10_g4

0xb822,	// (0x000863bd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x0008a29d) popup_clock_analogue_window_cp10_g

0x4c28,	// (0x0007f7c3) popup_clock_analogue_window_cp10_t1

0x4c59,	// (0x0007f7f4) clock_digital_number_pane_cp10_ParamLimits

0x4c59,	// (0x0007f7f4) clock_digital_number_pane_cp10

0x4c71,	// (0x0007f80c) clock_digital_number_pane_cp11_ParamLimits

0x4c71,	// (0x0007f80c) clock_digital_number_pane_cp11

0x4c89,	// (0x0007f824) clock_digital_number_pane_cp12_ParamLimits

0x4c89,	// (0x0007f824) clock_digital_number_pane_cp12

0x4ca3,	// (0x0007f83e) clock_digital_number_pane_cp13_ParamLimits

0x4ca3,	// (0x0007f83e) clock_digital_number_pane_cp13

0x4cbd,	// (0x0007f858) clock_digital_separator_pane_cp10_ParamLimits

0x4cbd,	// (0x0007f858) clock_digital_separator_pane_cp10

0x4cd7,	// (0x0007f872) popup_clock_digital_window_cp02_t1_ParamLimits

0x4cd7,	// (0x0007f872) popup_clock_digital_window_cp02_t1

0xab82,	// (0x0008571d) clock_digital_number_pane_cp10_g1

0xab82,	// (0x0008571d) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x0008a2b8) clock_digital_number_pane_cp10_g

0xab82,	// (0x0008571d) clock_digital_separator_pane_cp10_g1

0xab82,	// (0x0008571d) clock_digital_separator_pane_g2_cp10

0xb9ad,	// (0x00086548) navi_pane_vded_g4

0xb9b6,	// (0x00086551) navi_pane_vded_g5

0xb9bf,	// (0x0008655a) navi_pane_vded_t1

0x10d4,	// (0x0007bc6f) main_vded_pane

0x4e04,	// (0x0007f99f) main_vded_pane_g1

0x4e0e,	// (0x0007f9a9) main_vded_pane_g2

0x4e18,	// (0x0007f9b3) main_vded_pane_g3

0x0002,

0xf722,	// (0x0008a2bd) main_vded_pane_g

0x4e22,	// (0x0007f9bd) main_vded_pane_t1

0x4e30,	// (0x0007f9cb) main_vded_pane_t2

0x0001,

0xf729,	// (0x0008a2c4) main_vded_pane_t

0x4e3e,	// (0x0007f9d9) vded_slider_pane

0x4e46,	// (0x0007f9e1) vded_video_pane

0xd759,	// (0x000882f4) vded_video_pane_g1

0x4e4e,	// (0x0007f9e9) vded_video_pane_g2

0xac4b,	// (0x000857e6) vded_video_pane_g3

0x0002,

0xf72e,	// (0x0008a2c9) vded_video_pane_g

0xd763,	// (0x000882fe) vded_slider_pane_g1

0xcf45,	// (0x00087ae0) vded_slider_pane_g2

0xd76c,	// (0x00088307) vded_slider_pane_g3

0xd775,	// (0x00088310) vded_slider_pane_g4

0xd77e,	// (0x00088319) vded_slider_pane_g5

0x0004,

0xf735,	// (0x0008a2d0) vded_slider_pane_g

0x490f,	// (0x0007f4aa) mup3_rocker_pane_ParamLimits

0x490f,	// (0x0007f4aa) mup3_rocker_pane

0x4e57,	// (0x0007f9f2) mup3_control_keys_pane_g1

0x4e5f,	// (0x0007f9fa) mup3_control_keys_pane_g2

0x4e67,	// (0x0007fa02) mup3_control_keys_pane_g3

0x4e6f,	// (0x0007fa0a) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x0008a2db) mup3_control_keys_pane_g

0x12da,	// (0x0007be75) popup_toolbar2_fixed_window_cp01_ParamLimits

0x12da,	// (0x0007be75) popup_toolbar2_fixed_window_cp01

0x4943,	// (0x0007f4de) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4943,	// (0x0007f4de) popup_toolbar2_fixed_window_cp02

0xc148,	// (0x00086ce3) popup_call2_audio_second_window_t4_ParamLimits

0xc148,	// (0x00086ce3) popup_call2_audio_second_window_t4

0xc684,	// (0x0008721f) popup_call2_audio_first_window_t6_ParamLimits

0xc684,	// (0x0008721f) popup_call2_audio_first_window_t6

0xc8c2,	// (0x0008745d) popup_call2_audio_out_window_t6_ParamLimits

0xc8c2,	// (0x0008745d) popup_call2_audio_out_window_t6

0x10d4,	// (0x0007bc6f) main_vitu_pane

0xa541,	// (0x000850dc) aid_size_cell_itu_ParamLimits

0xa541,	// (0x000850dc) aid_size_cell_itu

0xa541,	// (0x000850dc) bg_popup_window_pane_cp08_ParamLimits

0xa541,	// (0x000850dc) bg_popup_window_pane_cp08

0xa541,	// (0x000850dc) field_vitu_entry_pane_ParamLimits

0xa541,	// (0x000850dc) field_vitu_entry_pane

0xa541,	// (0x000850dc) grid_vitu_function_pane_ParamLimits

0xa541,	// (0x000850dc) grid_vitu_function_pane

0xa541,	// (0x000850dc) grid_vitu_itu_pane_ParamLimits

0xa541,	// (0x000850dc) grid_vitu_itu_pane

0xa541,	// (0x000850dc) cell_vitu_itu_pane_ParamLimits

0xa541,	// (0x000850dc) cell_vitu_itu_pane

0xa541,	// (0x000850dc) cell_vitu_function_pane_ParamLimits

0xa541,	// (0x000850dc) cell_vitu_function_pane

0xa541,	// (0x000850dc) bg_popup_sub_pane_cp08_ParamLimits

0xa541,	// (0x000850dc) bg_popup_sub_pane_cp08

0xac55,	// (0x000857f0) field_vitu_entry_pane_t1_ParamLimits

0xac55,	// (0x000857f0) field_vitu_entry_pane_t1

0xd787,	// (0x00088322) field_vitu_entry_pane_t2_ParamLimits

0xd787,	// (0x00088322) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x0008a2e4) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x0008a2e4) field_vitu_entry_pane_t

0xce6c,	// (0x00087a07) bg_button_pane_cp05_ParamLimits

0xce6c,	// (0x00087a07) bg_button_pane_cp05

0xd7a4,	// (0x0008833f) cell_vitu_itu_pane_g1

0xbabc,	// (0x00086657) cell_vitu_itu_pane_t1_ParamLimits

0xbabc,	// (0x00086657) cell_vitu_itu_pane_t1

0xbabc,	// (0x00086657) cell_vitu_itu_pane_t2_ParamLimits

0xbabc,	// (0x00086657) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x0008a2e9) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x0008a2e9) cell_vitu_itu_pane_t

0x10d4,	// (0x0007bc6f) bg_button_pane_cp07

0xac4b,	// (0x000857e6) cell_vitu_function_pane_g1

0xac43,	// (0x000857de) main_calc_pane_g1

0x1102,	// (0x0007bc9d) aid_visual_content_pane

0x10d4,	// (0x0007bc6f) main_vradio_pane

0xac05,	// (0x000857a0) main_vradio_pane_g1_ParamLimits

0xac05,	// (0x000857a0) main_vradio_pane_g1

0xac13,	// (0x000857ae) main_vradio_pane_g2_ParamLimits

0xac13,	// (0x000857ae) main_vradio_pane_g2

0x0001,

0xf755,	// (0x0008a2f0) main_vradio_pane_g_ParamLimits

0xf755,	// (0x0008a2f0) main_vradio_pane_g

0xac55,	// (0x000857f0) main_vradio_pane_t1_ParamLimits

0xac55,	// (0x000857f0) main_vradio_pane_t1

0xac55,	// (0x000857f0) main_vradio_pane_t2_ParamLimits

0xac55,	// (0x000857f0) main_vradio_pane_t2

0xac69,	// (0x00085804) main_vradio_pane_t3_ParamLimits

0xac69,	// (0x00085804) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x0008a2f5) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x0008a2f5) main_vradio_pane_t

0xa541,	// (0x000850dc) vradio_rocker_control_pane_ParamLimits

0xa541,	// (0x000850dc) vradio_rocker_control_pane

0xa541,	// (0x000850dc) vradio_station_info_pane_ParamLimits

0xa541,	// (0x000850dc) vradio_station_info_pane

0xa541,	// (0x000850dc) vradio_frequency_info_pane_ParamLimits

0xa541,	// (0x000850dc) vradio_frequency_info_pane

0xac4b,	// (0x000857e6) vradio_station_info_pane_g1

0xbabc,	// (0x00086657) vradio_station_info_pane_t1_ParamLimits

0xbabc,	// (0x00086657) vradio_station_info_pane_t1

0xac69,	// (0x00085804) vradio_station_info_pane_t2_ParamLimits

0xac69,	// (0x00085804) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x0008a2fc) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x0008a2fc) vradio_station_info_pane_t

0x10d4,	// (0x0007bc6f) vradio_tuning_pane

0x4e7f,	// (0x0007fa1a) vradio_rocker_control_pane_g1

0xd7c0,	// (0x0008835b) vradio_rocker_control_pane_g2

0x4e89,	// (0x0007fa24) vradio_rocker_control_pane_g3

0x4e93,	// (0x0007fa2e) vradio_rocker_control_pane_g4

0x4e9d,	// (0x0007fa38) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x0008a301) vradio_rocker_control_pane_g

0xac4b,	// (0x000857e6) vradio_frequency_info_pane_g1

0xac55,	// (0x000857f0) vradio_frequency_info_pane_t1_ParamLimits

0xac55,	// (0x000857f0) vradio_frequency_info_pane_t1

0x4ea7,	// (0x0007fa42) vradio_tuning_pane_g1

0x4eb4,	// (0x0007fa4f) vradio_tuning_pane_t1

0xa500,	// (0x0008509b) area_side_right_pane_ParamLimits

0xa500,	// (0x0008509b) area_side_right_pane

0xccb2,	// (0x0008784d) status_small_pane_g1

0xccba,	// (0x00087855) status_small_pane_g2

0xccc3,	// (0x0008785e) status_small_pane_g3

0xcccc,	// (0x00087867) status_small_pane_g4

0x0003,

0xf532,	// (0x0008a0cd) status_small_pane_g

0xccd5,	// (0x00087870) status_small_pane_t1

0x10d4,	// (0x0007bc6f) main_video3_pane

0x10d4,	// (0x0007bc6f) cams_zoom_vslider_pane

0xd7c8,	// (0x00088363) image3_wide_pane_ParamLimits

0xd7c8,	// (0x00088363) image3_wide_pane

0x10d4,	// (0x0007bc6f) image3_wide_small_pane

0xd7e2,	// (0x0008837d) main_video3_pane_g1_ParamLimits

0xd7e2,	// (0x0008837d) main_video3_pane_g1

0xd7e2,	// (0x0008837d) main_video3_pane_g2_ParamLimits

0xd7e2,	// (0x0008837d) main_video3_pane_g2

0x0001,

0xf771,	// (0x0008a30c) main_video3_pane_g_ParamLimits

0xf771,	// (0x0008a30c) main_video3_pane_g

0xd800,	// (0x0008839b) main_video3_pane_t1_ParamLimits

0xd800,	// (0x0008839b) main_video3_pane_t1

0xd800,	// (0x0008839b) main_video3_pane_t2_ParamLimits

0xd800,	// (0x0008839b) main_video3_pane_t2

0xd800,	// (0x0008839b) main_video3_pane_t3_ParamLimits

0xd800,	// (0x0008839b) main_video3_pane_t3

0x0002,

0xf776,	// (0x0008a311) main_video3_pane_t_ParamLimits

0xf776,	// (0x0008a311) main_video3_pane_t

0xac4b,	// (0x000857e6) cams_zoom_vslider_pane_g1

0xac4b,	// (0x000857e6) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00089c4a) cams_zoom_vslider_pane_g

0x10d4,	// (0x0007bc6f) small_slider_vertical_pane

0xac4b,	// (0x000857e6) small_slider_vertical_pane_g1

0xac4b,	// (0x000857e6) small_slider_vertical_pane_g2

0xd827,	// (0x000883c2) small_slider_vertical_pane_g3

0x0002,

0xf77d,	// (0x0008a318) small_slider_vertical_pane_g

0x10d4,	// (0x0007bc6f) main_hwr_training_pane

0xd830,	// (0x000883cb) hwr_training_instruct_pane_ParamLimits

0xd830,	// (0x000883cb) hwr_training_instruct_pane

0x4ec3,	// (0x0007fa5e) hwr_training_navi_pane_ParamLimits

0x4ec3,	// (0x0007fa5e) hwr_training_navi_pane

0x4ee2,	// (0x0007fa7d) hwr_training_write_pane_ParamLimits

0x4ee2,	// (0x0007fa7d) hwr_training_write_pane

0x10d4,	// (0x0007bc6f) bg_frame_shadow_pane

0xd867,	// (0x00088402) hwr_training_write_pane_g1

0xd86f,	// (0x0008840a) hwr_training_write_pane_g2

0xd877,	// (0x00088412) hwr_training_write_pane_g3

0xd87f,	// (0x0008841a) hwr_training_write_pane_g4

0xd887,	// (0x00088422) hwr_training_write_pane_g5

0xd88f,	// (0x0008842a) hwr_training_write_pane_g6

0xd897,	// (0x00088432) hwr_training_write_pane_g7

0x0006,

0xf784,	// (0x0008a31f) hwr_training_write_pane_g

0xd89f,	// (0x0008843a) hwr_training_navi_pane_g1_ParamLimits

0xd89f,	// (0x0008843a) hwr_training_navi_pane_g1

0xd8b1,	// (0x0008844c) hwr_training_navi_pane_g2_ParamLimits

0xd8b1,	// (0x0008844c) hwr_training_navi_pane_g2

0xd8c3,	// (0x0008845e) hwr_training_navi_pane_g3_ParamLimits

0xd8c3,	// (0x0008845e) hwr_training_navi_pane_g3

0xd8d3,	// (0x0008846e) hwr_training_navi_pane_g4_ParamLimits

0xd8d3,	// (0x0008846e) hwr_training_navi_pane_g4

0x0004,

0xf793,	// (0x0008a32e) hwr_training_navi_pane_g_ParamLimits

0xf793,	// (0x0008a32e) hwr_training_navi_pane_g

0xd8e0,	// (0x0008847b) hwr_training_navi_pane_t1

0x4f2a,	// (0x0007fac5) list_single_hwr_training_instruct_pane_ParamLimits

0x4f2a,	// (0x0007fac5) list_single_hwr_training_instruct_pane

0xd8ee,	// (0x00088489) list_single_hwr_training_instruct_pane_t1

0xd11b,	// (0x00087cb6) bg_frame_shadow_pane_g1

0xd8fd,	// (0x00088498) bg_frame_shadow_pane_g2

0xd905,	// (0x000884a0) bg_frame_shadow_pane_g3

0xd90d,	// (0x000884a8) bg_frame_shadow_pane_g4

0xd915,	// (0x000884b0) bg_frame_shadow_pane_g5

0xd91d,	// (0x000884b8) bg_frame_shadow_pane_g6

0xd925,	// (0x000884c0) bg_frame_shadow_pane_g7

0xad9f,	// (0x0008593a) bg_frame_shadow_pane_g8

0x0007,

0xf79e,	// (0x0008a339) bg_frame_shadow_pane_g

0x10d4,	// (0x0007bc6f) main_video_tele_dialer_pane

0x4f3f,	// (0x0007fada) aid_size_cell_video_keypad_ParamLimits

0x4f3f,	// (0x0007fada) aid_size_cell_video_keypad

0x4f59,	// (0x0007faf4) grid_video_dialer_keypad_pane_ParamLimits

0x4f59,	// (0x0007faf4) grid_video_dialer_keypad_pane

0x4fa5,	// (0x0007fb40) video_down_pane_cp_ParamLimits

0x4fa5,	// (0x0007fb40) video_down_pane_cp

0x4fd7,	// (0x0007fb72) cell_video_dialer_keypad_pane_ParamLimits

0x4fd7,	// (0x0007fb72) cell_video_dialer_keypad_pane

0xd92d,	// (0x000884c8) bg_button_pane_cp08_ParamLimits

0xd92d,	// (0x000884c8) bg_button_pane_cp08

0x4ff9,	// (0x0007fb94) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4ff9,	// (0x0007fb94) cell_video_dialer_keypad_pane_g1

0x48f9,	// (0x0007f494) mup3_rocker2_pane_ParamLimits

0x48f9,	// (0x0007f494) mup3_rocker2_pane

0xac4b,	// (0x000857e6) mup3_rocker2_pane_g1

0x3b98,	// (0x0007e733) main_dialer2_pane

0x10d4,	// (0x0007bc6f) main_mp4_pane

0xd957,	// (0x000884f2) main_mp4_pane_g1_ParamLimits

0xd957,	// (0x000884f2) main_mp4_pane_g1

0xd957,	// (0x000884f2) main_mp4_pane_g2_ParamLimits

0xd957,	// (0x000884f2) main_mp4_pane_g2

0x5030,	// (0x0007fbcb) main_mp4_pane_g3_ParamLimits

0x5030,	// (0x0007fbcb) main_mp4_pane_g3

0xd975,	// (0x00088510) main_mp4_pane_g4_ParamLimits

0xd975,	// (0x00088510) main_mp4_pane_g4

0xd99d,	// (0x00088538) main_mp4_pane_g5_ParamLimits

0xd99d,	// (0x00088538) main_mp4_pane_g5

0x0007,

0xf7be,	// (0x0008a359) main_mp4_pane_g_ParamLimits

0xf7be,	// (0x0008a359) main_mp4_pane_g

0xda05,	// (0x000885a0) main_mp4_pane_t1_ParamLimits

0xda05,	// (0x000885a0) main_mp4_pane_t1

0xda67,	// (0x00088602) main_mp4_pane_t2_ParamLimits

0xda67,	// (0x00088602) main_mp4_pane_t2

0xdacb,	// (0x00088666) main_mp4_pane_t3_ParamLimits

0xdacb,	// (0x00088666) main_mp4_pane_t3

0xdb29,	// (0x000886c4) main_mp4_pane_t4_ParamLimits

0xdb29,	// (0x000886c4) main_mp4_pane_t4

0x0003,

0xf7cf,	// (0x0008a36a) main_mp4_pane_t_ParamLimits

0xf7cf,	// (0x0008a36a) main_mp4_pane_t

0xdb87,	// (0x00088722) mp4_progress_pane_ParamLimits

0xdb87,	// (0x00088722) mp4_progress_pane

0xdbbb,	// (0x00088756) mp4_rocker_pane_ParamLimits

0xdbbb,	// (0x00088756) mp4_rocker_pane

0xe5aa,	// (0x00089145) mp4_progress_pane_t1

0xe5cc,	// (0x00089167) mp4_progress_pane_t2

0x0001,

0xf7d8,	// (0x0008a373) mp4_progress_pane_t

0xe5ee,	// (0x00089189) mup_progress_pane_cp04

0xac4b,	// (0x000857e6) mp4_rocker_pane_g1

0xa541,	// (0x000850dc) aid_cell_size_keypad2_ParamLimits

0xa541,	// (0x000850dc) aid_cell_size_keypad2

0xa541,	// (0x000850dc) dialer2_ne_pane_ParamLimits

0xa541,	// (0x000850dc) dialer2_ne_pane

0xa541,	// (0x000850dc) grid_dialer2_keypad_pane_ParamLimits

0xa541,	// (0x000850dc) grid_dialer2_keypad_pane

0xce6c,	// (0x00087a07) bg_popup_call_pane_cp07_ParamLimits

0xce6c,	// (0x00087a07) bg_popup_call_pane_cp07

0x5060,	// (0x0007fbfb) dialer2_ne_pane_t1_ParamLimits

0x5060,	// (0x0007fbfb) dialer2_ne_pane_t1

0x509e,	// (0x0007fc39) cell_dialer2_keypad_pane_ParamLimits

0x509e,	// (0x0007fc39) cell_dialer2_keypad_pane

0xce6c,	// (0x00087a07) bg_button_pane_pane_cp04_ParamLimits

0xce6c,	// (0x00087a07) bg_button_pane_pane_cp04

0xac05,	// (0x000857a0) cell_dialer2_keypad_pane_g1_ParamLimits

0xac05,	// (0x000857a0) cell_dialer2_keypad_pane_g1

0x1d7e,	// (0x0007c919) aid_placing_vt_set_content_ParamLimits

0x1d7e,	// (0x0007c919) aid_placing_vt_set_content

0x1da6,	// (0x0007c941) aid_placing_vt_set_title_ParamLimits

0x1da6,	// (0x0007c941) aid_placing_vt_set_title

0x10d4,	// (0x0007bc6f) main_image3_pane

0x5113,	// (0x0007fcae) area_side_right_pane_cp01_ParamLimits

0x5113,	// (0x0007fcae) area_side_right_pane_cp01

0x512a,	// (0x0007fcc5) main_image3_pane_g1_ParamLimits

0x512a,	// (0x0007fcc5) main_image3_pane_g1

0x5138,	// (0x0007fcd3) main_image3_pane_g2_ParamLimits

0x5138,	// (0x0007fcd3) main_image3_pane_g2

0x5160,	// (0x0007fcfb) main_image3_pane_g3_ParamLimits

0x5160,	// (0x0007fcfb) main_image3_pane_g3

0x518a,	// (0x0007fd25) main_image3_pane_g4_ParamLimits

0x518a,	// (0x0007fd25) main_image3_pane_g4

0x0003,

0xf7e7,	// (0x0008a382) main_image3_pane_g_ParamLimits

0xf7e7,	// (0x0008a382) main_image3_pane_g

0x51b4,	// (0x0007fd4f) main_image3_pane_t1_ParamLimits

0x51b4,	// (0x0007fd4f) main_image3_pane_t1

0x520c,	// (0x0007fda7) main_image3_pane_t2_ParamLimits

0x520c,	// (0x0007fda7) main_image3_pane_t2

0x525e,	// (0x0007fdf9) main_image3_pane_t3_ParamLimits

0x525e,	// (0x0007fdf9) main_image3_pane_t3

0x0003,

0xf7f0,	// (0x0008a38b) main_image3_pane_t_ParamLimits

0xf7f0,	// (0x0008a38b) main_image3_pane_t

0xa541,	// (0x000850dc) grid_sctrl_middle_pane_cp01_ParamLimits

0xa541,	// (0x000850dc) grid_sctrl_middle_pane_cp01

0x52e6,	// (0x0007fe81) cell_sctrl_middle_pane_cp01_ParamLimits

0x52e6,	// (0x0007fe81) cell_sctrl_middle_pane_cp01

0x5303,	// (0x0007fe9e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5303,	// (0x0007fe9e) cell_sctrl_middle_pane_cp01_g1

0x10d4,	// (0x0007bc6f) main_call4_pane

0x5319,	// (0x0007feb4) aid_size_button_call4_ParamLimits

0x5319,	// (0x0007feb4) aid_size_button_call4

0x534c,	// (0x0007fee7) call4_windows_pane_ParamLimits

0x534c,	// (0x0007fee7) call4_windows_pane

0x536b,	// (0x0007ff06) grid_call4_button_pane_ParamLimits

0x536b,	// (0x0007ff06) grid_call4_button_pane

0x539e,	// (0x0007ff39) call4_windows_conf_pane

0x53b5,	// (0x0007ff50) popup_call4_audio_first_window_ParamLimits

0x53b5,	// (0x0007ff50) popup_call4_audio_first_window

0x5405,	// (0x0007ffa0) popup_call4_audio_second_window_ParamLimits

0x5405,	// (0x0007ffa0) popup_call4_audio_second_window

0x541c,	// (0x0007ffb7) popup_call4_audio_wait_window_ParamLimits

0x541c,	// (0x0007ffb7) popup_call4_audio_wait_window

0x542a,	// (0x0007ffc5) cell_call4_button_pane_ParamLimits

0x542a,	// (0x0007ffc5) cell_call4_button_pane

0x544f,	// (0x0007ffea) bg_button_pane_cp09_ParamLimits

0x544f,	// (0x0007ffea) bg_button_pane_cp09

0x545b,	// (0x0007fff6) cell_call4_button_pane_g1_ParamLimits

0x545b,	// (0x0007fff6) cell_call4_button_pane_g1

0x5481,	// (0x0008001c) cell_call4_button_pane_t1_ParamLimits

0x5481,	// (0x0008001c) cell_call4_button_pane_t1

0xe669,	// (0x00089204) popup_call4_audio_conf_window_ParamLimits

0xe669,	// (0x00089204) popup_call4_audio_conf_window

0x4959,	// (0x0007f4f4) mup3_progress_pane_t1_ParamLimits

0x4978,	// (0x0007f513) mup3_progress_pane_t2_ParamLimits

0xd49f,	// (0x0008803a) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x0008a265) mup3_progress_pane_t_ParamLimits

0xd4bc,	// (0x00088057) mup_progress_pane_cp03_ParamLimits

0x4e77,	// (0x0007fa12) mup3_control_keys_pane_g4_copy1

0xdbbb,	// (0x00088756) mp4_rocker2_pane_ParamLimits

0xdbbb,	// (0x00088756) mp4_rocker2_pane

0xe67d,	// (0x00089218) mp4_rocker2_pane_g1

0xe67d,	// (0x00089218) mp4_rocker2_pane_g2

0xe67d,	// (0x00089218) mp4_rocker2_pane_g3

0xe67d,	// (0x00089218) mp4_rocker2_pane_g4

0xe67d,	// (0x00089218) mp4_rocker2_pane_g5

0x0004,

0xf7f9,	// (0x0008a394) mp4_rocker2_pane_g

0x10d4,	// (0x0007bc6f) main_camera4_pane

0x10d4,	// (0x0007bc6f) main_video4_pane

0x4f73,	// (0x0007fb0e) main_video_tele_dialer_pane_t1_ParamLimits

0x4f73,	// (0x0007fb0e) main_video_tele_dialer_pane_t1

0x4f8c,	// (0x0007fb27) main_video_tele_dialer_pane_t2_ParamLimits

0x4f8c,	// (0x0007fb27) main_video_tele_dialer_pane_t2

0x0001,

0xf7af,	// (0x0008a34a) main_video_tele_dialer_pane_t_ParamLimits

0xf7af,	// (0x0008a34a) main_video_tele_dialer_pane_t

0x54bf,	// (0x0008005a) cam4_autofocus_pane_ParamLimits

0x54bf,	// (0x0008005a) cam4_autofocus_pane

0x54d5,	// (0x00080070) cam4_image_uncrop_pane_ParamLimits

0x54d5,	// (0x00080070) cam4_image_uncrop_pane

0x54ef,	// (0x0008008a) cam4_indicators_pane_ParamLimits

0x54ef,	// (0x0008008a) cam4_indicators_pane

0x551a,	// (0x000800b5) main_camera4_pane_g1_ParamLimits

0x551a,	// (0x000800b5) main_camera4_pane_g1

0x552c,	// (0x000800c7) main_camera4_pane_g2_ParamLimits

0x552c,	// (0x000800c7) main_camera4_pane_g2

0x553f,	// (0x000800da) main_camera4_pane_g3_ParamLimits

0x553f,	// (0x000800da) main_camera4_pane_g3

0x5552,	// (0x000800ed) main_camera4_pane_g4_ParamLimits

0x5552,	// (0x000800ed) main_camera4_pane_g4

0x5565,	// (0x00080100) main_camera4_pane_g5_ParamLimits

0x5565,	// (0x00080100) main_camera4_pane_g5

0x0005,

0xf804,	// (0x0008a39f) main_camera4_pane_g_ParamLimits

0xf804,	// (0x0008a39f) main_camera4_pane_g

0x5589,	// (0x00080124) main_camera4_pane_t1_ParamLimits

0x5589,	// (0x00080124) main_camera4_pane_t1

0xac05,	// (0x000857a0) bg_tb_trans_pane_cp06

0xe6a9,	// (0x00089244) cam4_indicators_pane_g1

0xe6ba,	// (0x00089255) cam4_indicators_pane_g2

0x0002,

0xf81f,	// (0x0008a3ba) cam4_indicators_pane_g

0xe6d8,	// (0x00089273) cam4_indicators_pane_t1

0x55ff,	// (0x0008019a) main_video4_pane_g1_ParamLimits

0x55ff,	// (0x0008019a) main_video4_pane_g1

0x560e,	// (0x000801a9) main_video4_pane_g2_ParamLimits

0x560e,	// (0x000801a9) main_video4_pane_g2

0x561d,	// (0x000801b8) main_video4_pane_g3_ParamLimits

0x561d,	// (0x000801b8) main_video4_pane_g3

0x562c,	// (0x000801c7) main_video4_pane_g4_ParamLimits

0x562c,	// (0x000801c7) main_video4_pane_g4

0x0004,

0xf826,	// (0x0008a3c1) main_video4_pane_g_ParamLimits

0xf826,	// (0x0008a3c1) main_video4_pane_g

0x564a,	// (0x000801e5) vid4_indicators_pane_ParamLimits

0x564a,	// (0x000801e5) vid4_indicators_pane

0x5678,	// (0x00080213) video4_image_uncrop_cif_pane_ParamLimits

0x5678,	// (0x00080213) video4_image_uncrop_cif_pane

0x5692,	// (0x0008022d) video4_image_uncrop_nhd_pane_ParamLimits

0x5692,	// (0x0008022d) video4_image_uncrop_nhd_pane

0x54d5,	// (0x00080070) video4_image_uncrop_vga_pane_ParamLimits

0x54d5,	// (0x00080070) video4_image_uncrop_vga_pane

0xa541,	// (0x000850dc) bg_tb_trans_pane_cp07

0xe704,	// (0x0008929f) vid4_indicators_pane_g1

0xe718,	// (0x000892b3) vid4_indicators_pane_g2

0xe72c,	// (0x000892c7) vid4_indicators_pane_g3

0x0004,

0xf831,	// (0x0008a3cc) vid4_indicators_pane_g

0xe75b,	// (0x000892f6) vid4_indicators_pane_t1

0x56a6,	// (0x00080241) cam4_autofocus_pane_g1

0x56ae,	// (0x00080249) cam4_autofocus_pane_g2

0x56b6,	// (0x00080251) cam4_autofocus_pane_g3

0x0002,

0xf83c,	// (0x0008a3d7) cam4_autofocus_pane_g

0x56be,	// (0x00080259) cam4_autofocus_pane_g3_copy1

0x4fbb,	// (0x0007fb56) video_down_pane_cp_t1

0x4fc9,	// (0x0007fb64) video_down_pane_cp_t2

0x0001,

0xf7b4,	// (0x0008a34f) video_down_pane_cp_t

0xa541,	// (0x000850dc) popup_vitu2_window_ParamLimits

0xa541,	// (0x000850dc) popup_vitu2_window

0x56c6,	// (0x00080261) aid_size_cell2_itu2_ParamLimits

0x56c6,	// (0x00080261) aid_size_cell2_itu2

0x56ec,	// (0x00080287) aid_size_cell_itu2_ParamLimits

0x56ec,	// (0x00080287) aid_size_cell_itu2

0x4a02,	// (0x0007f59d) bg_popup_window_pane_cp09_ParamLimits

0x4a02,	// (0x0007f59d) bg_popup_window_pane_cp09

0x5748,	// (0x000802e3) field_vitu2_entry_pane_ParamLimits

0x5748,	// (0x000802e3) field_vitu2_entry_pane

0x576e,	// (0x00080309) grid_vitu2_function_pane_ParamLimits

0x576e,	// (0x00080309) grid_vitu2_function_pane

0x57bf,	// (0x0008035a) grid_vitu2_itu_pane_ParamLimits

0x57bf,	// (0x0008035a) grid_vitu2_itu_pane

0x5855,	// (0x000803f0) cell_vitu2_itu_pane_ParamLimits

0x5855,	// (0x000803f0) cell_vitu2_itu_pane

0x5881,	// (0x0008041c) cell_vitu2_function_pane_ParamLimits

0x5881,	// (0x0008041c) cell_vitu2_function_pane

0xe772,	// (0x0008930d) bg_popup_call_pane_cp08_ParamLimits

0xe772,	// (0x0008930d) bg_popup_call_pane_cp08

0xe789,	// (0x00089324) field_vitu2_entry_pane_g1

0xe795,	// (0x00089330) field_vitu2_entry_pane_g2

0x0002,

0xf843,	// (0x0008a3de) field_vitu2_entry_pane_g

0x091a,	// (0x0007b4b5) field_vitu2_entry_pane_t1_ParamLimits

0x091a,	// (0x0007b4b5) field_vitu2_entry_pane_t1

0xdc01,	// (0x0008879c) field_vitu2_entry_pane_t2_ParamLimits

0xdc01,	// (0x0008879c) field_vitu2_entry_pane_t2

0x0001,

0xf84a,	// (0x0008a3e5) field_vitu2_entry_pane_t_ParamLimits

0xf84a,	// (0x0008a3e5) field_vitu2_entry_pane_t

0x58c0,	// (0x0008045b) bg_button_pane_cp010_ParamLimits

0x58c0,	// (0x0008045b) bg_button_pane_cp010

0x58ce,	// (0x00080469) cell_vitu2_itu_pane_g1

0x58f4,	// (0x0008048f) cell_vitu2_itu_pane_t1_ParamLimits

0x58f4,	// (0x0008048f) cell_vitu2_itu_pane_t1

0x0949,	// (0x0007b4e4) cell_vitu2_itu_pane_t2_ParamLimits

0x0949,	// (0x0007b4e4) cell_vitu2_itu_pane_t2

0x0002,

0xf854,	// (0x0008a3ef) cell_vitu2_itu_pane_t_ParamLimits

0xf854,	// (0x0008a3ef) cell_vitu2_itu_pane_t

0xa541,	// (0x000850dc) bg_button_pane_cp011

0x5952,	// (0x000804ed) cell_vitu2_function_pane_g1

0x10d4,	// (0x0007bc6f) main_myfav_hc_pane

0x52ae,	// (0x0007fe49) popup_image3_note_pane_ParamLimits

0x52ae,	// (0x0007fe49) popup_image3_note_pane

0x52ca,	// (0x0007fe65) popup_image3_tool_bar_pane_ParamLimits

0x52ca,	// (0x0007fe65) popup_image3_tool_bar_pane

0x09d7,	// (0x0007b572) cell_vitu2_itu_pane_t3_ParamLimits

0x09d7,	// (0x0007b572) cell_vitu2_itu_pane_t3

0x10d4,	// (0x0007bc6f) bg_popup_trans_pane

0xe7a9,	// (0x00089344) grid_image3_tool_bar_pane

0xe7b3,	// (0x0008934e) bg_popup_trans_pane_g1

0xb12b,	// (0x00085cc6) bg_popup_trans_pane_g2

0xe7bb,	// (0x00089356) bg_popup_trans_pane_g3

0xe7c3,	// (0x0008935e) bg_popup_trans_pane_g4

0xe7cb,	// (0x00089366) bg_popup_trans_pane_g5

0xe7d3,	// (0x0008936e) bg_popup_trans_pane_g6

0xe7db,	// (0x00089376) bg_popup_trans_pane_g7

0xe7e3,	// (0x0008937e) bg_popup_trans_pane_g8

0xb10b,	// (0x00085ca6) bg_popup_trans_pane_g9

0x0008,

0xf85b,	// (0x0008a3f6) bg_popup_trans_pane_g

0xe7eb,	// (0x00089386) cell_image3_tool_bar_pane_ParamLimits

0xe7eb,	// (0x00089386) cell_image3_tool_bar_pane

0xac4b,	// (0x000857e6) cell_image3_tool_bar_pane_g1

0x10d4,	// (0x0007bc6f) bg_popup_trans_pane_cp1

0xe7ff,	// (0x0008939a) popup_image3_note_pane_t1

0xe80d,	// (0x000893a8) popup_image3_note_pane_t2

0xe81b,	// (0x000893b6) popup_image3_note_pane_t3

0x0002,

0xf86e,	// (0x0008a409) popup_image3_note_pane_t

0xe829,	// (0x000893c4) popup_image3_note_pane_t3_copy1

0x5966,	// (0x00080501) bg_myfav_hc_instruction_pane_ParamLimits

0x5966,	// (0x00080501) bg_myfav_hc_instruction_pane

0x597a,	// (0x00080515) cell_myfav_contact_pane_ParamLimits

0x597a,	// (0x00080515) cell_myfav_contact_pane

0x5998,	// (0x00080533) cell_myfav_contact_pane_cp1_ParamLimits

0x5998,	// (0x00080533) cell_myfav_contact_pane_cp1

0x59b0,	// (0x0008054b) cell_myfav_contact_pane_cp2_ParamLimits

0x59b0,	// (0x0008054b) cell_myfav_contact_pane_cp2

0x59c8,	// (0x00080563) cell_myfav_contact_pane_cp3_ParamLimits

0x59c8,	// (0x00080563) cell_myfav_contact_pane_cp3

0x59df,	// (0x0008057a) cell_myfav_contact_pane_cp4_ParamLimits

0x59df,	// (0x0008057a) cell_myfav_contact_pane_cp4

0x59f7,	// (0x00080592) cell_myfav_contact_pane_cp5_ParamLimits

0x59f7,	// (0x00080592) cell_myfav_contact_pane_cp5

0x5a0b,	// (0x000805a6) cell_myfav_contact_pane_cp6_ParamLimits

0x5a0b,	// (0x000805a6) cell_myfav_contact_pane_cp6

0x5a21,	// (0x000805bc) cell_myfav_contact_pane_cp7_ParamLimits

0x5a21,	// (0x000805bc) cell_myfav_contact_pane_cp7

0xe837,	// (0x000893d2) listscroll_gen_pane_cp05

0x5a3b,	// (0x000805d6) main_myfav_hc_pane_g1_ParamLimits

0x5a3b,	// (0x000805d6) main_myfav_hc_pane_g1

0x5a55,	// (0x000805f0) main_myfav_hc_pane_g2_ParamLimits

0x5a55,	// (0x000805f0) main_myfav_hc_pane_g2

0x0002,

0xf875,	// (0x0008a410) main_myfav_hc_pane_g_ParamLimits

0xf875,	// (0x0008a410) main_myfav_hc_pane_g

0x5a87,	// (0x00080622) main_myfav_hc_pane_t1_ParamLimits

0x5a87,	// (0x00080622) main_myfav_hc_pane_t1

0xe840,	// (0x000893db) main_myfav_hc_pane_t2_ParamLimits

0xe840,	// (0x000893db) main_myfav_hc_pane_t2

0xe852,	// (0x000893ed) main_myfav_hc_pane_t3_ParamLimits

0xe852,	// (0x000893ed) main_myfav_hc_pane_t3

0x5a9e,	// (0x00080639) main_myfav_hc_pane_t4_ParamLimits

0x5a9e,	// (0x00080639) main_myfav_hc_pane_t4

0x0004,

0xf87c,	// (0x0008a417) main_myfav_hc_pane_t_ParamLimits

0xf87c,	// (0x0008a417) main_myfav_hc_pane_t

0xac4b,	// (0x000857e6) bg_myfav_hc_instruction_pane_g1

0xe864,	// (0x000893ff) cell_myfav_contact_pane_g1_ParamLimits

0xe864,	// (0x000893ff) cell_myfav_contact_pane_g1

0xe864,	// (0x000893ff) cell_myfav_contact_pane_g2_ParamLimits

0xe864,	// (0x000893ff) cell_myfav_contact_pane_g2

0xe870,	// (0x0008940b) cell_myfav_contact_pane_g3_ParamLimits

0xe870,	// (0x0008940b) cell_myfav_contact_pane_g3

0xac13,	// (0x000857ae) cell_myfav_contact_pane_g4_ParamLimits

0xac13,	// (0x000857ae) cell_myfav_contact_pane_g4

0xe87d,	// (0x00089418) cell_myfav_contact_pane_g5_ParamLimits

0xe87d,	// (0x00089418) cell_myfav_contact_pane_g5

0x0004,

0xf887,	// (0x0008a422) cell_myfav_contact_pane_g_ParamLimits

0xf887,	// (0x0008a422) cell_myfav_contact_pane_g

0x5a6f,	// (0x0008060a) main_myfav_hc_pane_g3_ParamLimits

0x5a6f,	// (0x0008060a) main_myfav_hc_pane_g3

0x123d,	// (0x0007bdd8) popup_adpt_find_window

0x5ac6,	// (0x00080661) afind_page_pane_ParamLimits

0x5ac6,	// (0x00080661) afind_page_pane

0x5adb,	// (0x00080676) aid_size_cell_afind_ParamLimits

0x5adb,	// (0x00080676) aid_size_cell_afind

0x5af9,	// (0x00080694) bg_popup_sub_pane_cp09_ParamLimits

0x5af9,	// (0x00080694) bg_popup_sub_pane_cp09

0x5b06,	// (0x000806a1) find_pane_cp01_ParamLimits

0x5b06,	// (0x000806a1) find_pane_cp01

0xe889,	// (0x00089424) grid_afind_control_pane_ParamLimits

0xe889,	// (0x00089424) grid_afind_control_pane

0x5b13,	// (0x000806ae) grid_afind_pane_ParamLimits

0x5b13,	// (0x000806ae) grid_afind_pane

0x5b35,	// (0x000806d0) cell_afind_pane_ParamLimits

0x5b35,	// (0x000806d0) cell_afind_pane

0xac4b,	// (0x000857e6) afind_page_pane_g1

0x5b9c,	// (0x00080737) afind_page_pane_g2

0x5ba4,	// (0x0008073f) afind_page_pane_g3

0x0002,

0xf892,	// (0x0008a42d) afind_page_pane_g

0x5bac,	// (0x00080747) afind_page_pane_t1

0xe8af,	// (0x0008944a) cell_afind_grid_control_pane_ParamLimits

0xe8af,	// (0x0008944a) cell_afind_grid_control_pane

0xe8be,	// (0x00089459) bg_button_pane_cp69_ParamLimits

0xe8be,	// (0x00089459) bg_button_pane_cp69

0x5bba,	// (0x00080755) cell_afind_pane_g1_ParamLimits

0x5bba,	// (0x00080755) cell_afind_pane_g1

0x5bc7,	// (0x00080762) cell_afind_pane_t1_ParamLimits

0x5bc7,	// (0x00080762) cell_afind_pane_t1

0xe8ca,	// (0x00089465) bg_button_pane_cp72

0xe8d2,	// (0x0008946d) cell_afind_grid_control_pane_g1

0x3699,	// (0x0007e234) aid_image_placing_area_ParamLimits

0x3699,	// (0x0007e234) aid_image_placing_area

0xac05,	// (0x000857a0) field_vitu_entry_pane_g1_ParamLimits

0xac05,	// (0x000857a0) field_vitu_entry_pane_g1

0xac05,	// (0x000857a0) field_vitu_entry_pane_g2_ParamLimits

0xac05,	// (0x000857a0) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00089d57) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00089d57) field_vitu_entry_pane_g

0xd7a4,	// (0x0008833f) cell_vitu_itu_pane_g1_ParamLimits

0xd787,	// (0x00088322) cell_vitu_itu_pane_t3_ParamLimits

0xd787,	// (0x00088322) cell_vitu_itu_pane_t3

0xe5aa,	// (0x00089145) mp4_progress_pane_t1_ParamLimits

0xe5cc,	// (0x00089167) mp4_progress_pane_t2_ParamLimits

0xf7d8,	// (0x0008a373) mp4_progress_pane_t_ParamLimits

0xe5ee,	// (0x00089189) mup_progress_pane_cp04_ParamLimits

0x5ab2,	// (0x0008064d) main_myfav_hc_pane_t5_ParamLimits

0x5ab2,	// (0x0008064d) main_myfav_hc_pane_t5

0xa4f0,	// (0x0008508b) aid_zoom_text_primary

0x123d,	// (0x0007bdd8) popup_adpt_find_window_ParamLimits

0xa541,	// (0x000850dc) main_cam_set_pane

0x5506,	// (0x000800a1) cam4_zoom_pane_ParamLimits

0x5506,	// (0x000800a1) cam4_zoom_pane

0x5bd9,	// (0x00080774) main_cam_set_pane_g1_ParamLimits

0x5bd9,	// (0x00080774) main_cam_set_pane_g1

0x5be7,	// (0x00080782) main_cam_set_pane_g2_ParamLimits

0x5be7,	// (0x00080782) main_cam_set_pane_g2

0x0001,

0xf899,	// (0x0008a434) main_cam_set_pane_g_ParamLimits

0xf899,	// (0x0008a434) main_cam_set_pane_g

0x5c08,	// (0x000807a3) main_cam_set_pane_t1_ParamLimits

0x5c08,	// (0x000807a3) main_cam_set_pane_t1

0x5c23,	// (0x000807be) main_cset_listscroll_pane_ParamLimits

0x5c23,	// (0x000807be) main_cset_listscroll_pane

0x5c49,	// (0x000807e4) main_cset_slider_pane_ParamLimits

0x5c49,	// (0x000807e4) main_cset_slider_pane

0xe8e3,	// (0x0008947e) main_cset_list_pane_ParamLimits

0xe8e3,	// (0x0008947e) main_cset_list_pane

0xe8f3,	// (0x0008948e) scroll_pane_cp028

0x5c6f,	// (0x0008080a) aid_area_touch_slider

0x5c8b,	// (0x00080826) cset_slider_pane

0x5cae,	// (0x00080849) main_cset_slider_pane_g1

0x5cc3,	// (0x0008085e) main_cset_slider_pane_g2

0x0011,

0xf89e,	// (0x0008a439) main_cset_slider_pane_g

0xe92c,	// (0x000894c7) main_cset_slider_pane_t1

0x5d7f,	// (0x0008091a) main_cset_slider_pane_t2

0x5d99,	// (0x00080934) main_cset_slider_pane_t3

0x5db3,	// (0x0008094e) main_cset_slider_pane_t4

0x5dcd,	// (0x00080968) main_cset_slider_pane_t5

0x5de7,	// (0x00080982) main_cset_slider_pane_t6

0x5dfc,	// (0x00080997) main_cset_slider_pane_t7

0x000e,

0xf8c3,	// (0x0008a45e) main_cset_slider_pane_t

0x5f00,	// (0x00080a9b) cset_list_set_pane_ParamLimits

0x5f00,	// (0x00080a9b) cset_list_set_pane

0xe9c6,	// (0x00089561) aid_position_infowindow_above

0xe9ce,	// (0x00089569) aid_position_infowindow_below

0xe9d6,	// (0x00089571) cset_list_set_pane_g1_ParamLimits

0xe9d6,	// (0x00089571) cset_list_set_pane_g1

0xdc1e,	// (0x000887b9) cset_list_set_pane_g3_ParamLimits

0xdc1e,	// (0x000887b9) cset_list_set_pane_g3

0x0001,

0xf8e2,	// (0x0008a47d) cset_list_set_pane_g_ParamLimits

0xf8e2,	// (0x0008a47d) cset_list_set_pane_g

0xdc2d,	// (0x000887c8) cset_list_set_pane_t1_ParamLimits

0xdc2d,	// (0x000887c8) cset_list_set_pane_t1

0xa541,	// (0x000850dc) list_highlight_pane_cp021_ParamLimits

0xa541,	// (0x000850dc) list_highlight_pane_cp021

0xbb40,	// (0x000866db) cset_slider_pane_g1

0xbb52,	// (0x000866ed) cset_slider_pane_g2

0xbb49,	// (0x000866e4) cset_slider_pane_g3

0x0002,

0xf8e7,	// (0x0008a482) cset_slider_pane_g

0xe9e2,	// (0x0008957d) aid_area_touch_cam4_zoom

0xe9ea,	// (0x00089585) cam4_zoom_cont_pane

0xe9f2,	// (0x0008958d) cam4_zoom_pane_g1

0xe9fa,	// (0x00089595) cam4_zoom_pane_g2

0x5f12,	// (0x00080aad) cam4_zoom_pane_g3

0x0002,

0xf8ee,	// (0x0008a489) cam4_zoom_pane_g

0xea02,	// (0x0008959d) cam4_zoom_cont_pane_g1

0xea0b,	// (0x000895a6) cam4_zoom_cont_pane_g2

0xea14,	// (0x000895af) cam4_zoom_cont_pane_g3

0x0002,

0xf8f5,	// (0x0008a490) cam4_zoom_cont_pane_g

0x5337,	// (0x0007fed2) call4_image_pane_ParamLimits

0x5337,	// (0x0007fed2) call4_image_pane

0x539e,	// (0x0007ff39) call4_windows_conf_pane_ParamLimits

0x53e3,	// (0x0007ff7e) popup_call4_audio_in_window_ParamLimits

0x53e3,	// (0x0007ff7e) popup_call4_audio_in_window

0x10d4,	// (0x0007bc6f) bg_popup_call2_act_pane_cp02

0xe661,	// (0x000891fc) call4_list_conf_pane

0xac4b,	// (0x000857e6) call4_image_pane_g1

0xac4b,	// (0x000857e6) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00089c4a) call4_image_pane_g

0xea1d,	// (0x000895b8) list_single_graphic_popup_conf4_pane_ParamLimits

0xea1d,	// (0x000895b8) list_single_graphic_popup_conf4_pane

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp022

0xea30,	// (0x000895cb) list_single_graphic_popup_conf4_pane_g1

0xb6f2,	// (0x0008628d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fc,	// (0x0008a497) list_single_graphic_popup_conf4_pane_g

0xea38,	// (0x000895d3) list_single_graphic_popup_conf4_pane_t1

0x1eca,	// (0x0007ca65) popup_vtel_slider_window_ParamLimits

0x1eca,	// (0x0007ca65) popup_vtel_slider_window

0xe601,	// (0x0008919c) dialer2_ne_pane_t2_ParamLimits

0xe601,	// (0x0008919c) dialer2_ne_pane_t2

0x0001,

0xf7dd,	// (0x0008a378) dialer2_ne_pane_t_ParamLimits

0xf7dd,	// (0x0008a378) dialer2_ne_pane_t

0xce6c,	// (0x00087a07) bg_popup_sub_pane_cp010_ParamLimits

0xce6c,	// (0x00087a07) bg_popup_sub_pane_cp010

0x5f1a,	// (0x00080ab5) popup_vtel_slider_window_g1_ParamLimits

0x5f1a,	// (0x00080ab5) popup_vtel_slider_window_g1

0x5f2d,	// (0x00080ac8) popup_vtel_slider_window_g2_ParamLimits

0x5f2d,	// (0x00080ac8) popup_vtel_slider_window_g2

0x0003,

0xf901,	// (0x0008a49c) popup_vtel_slider_window_g_ParamLimits

0xf901,	// (0x0008a49c) popup_vtel_slider_window_g

0x5f83,	// (0x00080b1e) vtel_slider_pane_ParamLimits

0x5f83,	// (0x00080b1e) vtel_slider_pane

0x5fa5,	// (0x00080b40) vtel_slider_pane_g1_ParamLimits

0x5fa5,	// (0x00080b40) vtel_slider_pane_g1

0x5fb9,	// (0x00080b54) vtel_slider_pane_g2_ParamLimits

0x5fb9,	// (0x00080b54) vtel_slider_pane_g2

0x5fd1,	// (0x00080b6c) vtel_slider_pane_g3_ParamLimits

0x5fd1,	// (0x00080b6c) vtel_slider_pane_g3

0x5fa5,	// (0x00080b40) vtel_slider_pane_g4_ParamLimits

0x5fa5,	// (0x00080b40) vtel_slider_pane_g4

0x5fe7,	// (0x00080b82) vtel_slider_pane_g5_ParamLimits

0x5fe7,	// (0x00080b82) vtel_slider_pane_g5

0x0004,

0xf90a,	// (0x0008a4a5) vtel_slider_pane_g_ParamLimits

0xf90a,	// (0x0008a4a5) vtel_slider_pane_g

0xa541,	// (0x000850dc) main_gallery2_pane

0x5718,	// (0x000802b3) aid_size_row_itut2_dropdow_list_ParamLimits

0x5718,	// (0x000802b3) aid_size_row_itut2_dropdow_list

0x5796,	// (0x00080331) grid_vitu2_function_top_pane_ParamLimits

0x5796,	// (0x00080331) grid_vitu2_function_top_pane

0x5800,	// (0x0008039b) popup_vitu2_dropdown_list_window_ParamLimits

0x5800,	// (0x0008039b) popup_vitu2_dropdown_list_window

0x5827,	// (0x000803c2) popup_vitu2_match_list_window

0x5ffd,	// (0x00080b98) cell_vitu2_function_top_pane_ParamLimits

0x5ffd,	// (0x00080b98) cell_vitu2_function_top_pane

0x6015,	// (0x00080bb0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6015,	// (0x00080bb0) cell_vitu2_function_top_pane_cp01

0x6031,	// (0x00080bcc) cell_vitu2_function_top_wide_pane_ParamLimits

0x6031,	// (0x00080bcc) cell_vitu2_function_top_wide_pane

0xa541,	// (0x000850dc) bg_button_pane_cp012

0x604f,	// (0x00080bea) cell_vitu2_function_top_pane_g1

0xea4e,	// (0x000895e9) bg_button_pane_cp013_ParamLimits

0xea4e,	// (0x000895e9) bg_button_pane_cp013

0x6063,	// (0x00080bfe) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6063,	// (0x00080bfe) cell_vitu2_function_top_wide_pane_g1

0xa541,	// (0x000850dc) bg_popup_sub_pane_cp20

0x607b,	// (0x00080c16) list_vitu2_match_list_pane

0xe7b3,	// (0x0008934e) bg_popup_sub_pane_cp20_g1

0xe7bb,	// (0x00089356) bg_popup_sub_pane_cp20_g2

0xb12b,	// (0x00085cc6) bg_popup_sub_pane_cp20_g3

0xe7c3,	// (0x0008935e) bg_popup_sub_pane_cp20_g4

0xb10b,	// (0x00085ca6) bg_popup_sub_pane_cp20_g5

0xea6a,	// (0x00089605) bg_popup_sub_pane_cp20_g6

0xe7d3,	// (0x0008936e) bg_popup_sub_pane_cp20_g7

0xe7db,	// (0x00089376) bg_popup_sub_pane_cp20_g8

0xe7e3,	// (0x0008937e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf915,	// (0x0008a4b0) bg_popup_sub_pane_cp20_g

0xea72,	// (0x0008960d) list_vitu2_match_list_item_pane_ParamLimits

0xea72,	// (0x0008960d) list_vitu2_match_list_item_pane

0xea84,	// (0x0008961f) list_vitu2_match_list_item_pane_t1

0x10d4,	// (0x0007bc6f) bg_popup_sub_pane_cp21

0xaf08,	// (0x00085aa3) grid_vitu2_dropdown_list_pane

0x6093,	// (0x00080c2e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6093,	// (0x00080c2e) cell_vitu2_dropdown_list_char_pane

0x60b3,	// (0x00080c4e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x60b3,	// (0x00080c4e) cell_vitu2_dropdown_list_ctrl_pane

0xea92,	// (0x0008962d) cell_vitu2_dropdown_list_char_pane_g1

0xea9b,	// (0x00089636) cell_vitu2_dropdown_list_char_pane_g2

0xeaa4,	// (0x0008963f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf928,	// (0x0008a4c3) cell_vitu2_dropdown_list_char_pane_g

0x60db,	// (0x00080c76) cell_vitu2_dropdown_list_char_pane_t1

0x60e9,	// (0x00080c84) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x60e9,	// (0x00080c84) cell_vitu2_dropdown_list_ctrl_pane_g1

0x60f6,	// (0x00080c91) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x60f6,	// (0x00080c91) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6103,	// (0x00080c9e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6103,	// (0x00080c9e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6110,	// (0x00080cab) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6110,	// (0x00080cab) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac05,	// (0x000857a0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac05,	// (0x000857a0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92f,	// (0x0008a4ca) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92f,	// (0x0008a4ca) cell_vitu2_dropdown_list_ctrl_pane_g

0x612c,	// (0x00080cc7) aid_size_cell_gallery2_ParamLimits

0x612c,	// (0x00080cc7) aid_size_cell_gallery2

0x614a,	// (0x00080ce5) grid_gallery2_pane_ParamLimits

0x614a,	// (0x00080ce5) grid_gallery2_pane

0x6164,	// (0x00080cff) scroll_pane_cp029_ParamLimits

0x6164,	// (0x00080cff) scroll_pane_cp029

0x6175,	// (0x00080d10) cell_gallery2_pane_ParamLimits

0x6175,	// (0x00080d10) cell_gallery2_pane

0xeaad,	// (0x00089648) cell_gallery2_pane_g2

0x61d4,	// (0x00080d6f) cell_gallery2_pane_g3

0xeab5,	// (0x00089650) cell_gallery2_pane_g4

0xeabd,	// (0x00089658) cell_gallery2_pane_g5

0xaf08,	// (0x00085aa3) grid_highlight_pane_cp10

0x5827,	// (0x000803c2) popup_vitu2_match_list_window_ParamLimits

0x583c,	// (0x000803d7) popup_vitu2_query_window_ParamLimits

0x583c,	// (0x000803d7) popup_vitu2_query_window

0x10d4,	// (0x0007bc6f) bg_vitu2_candi_button_pane

0xea92,	// (0x0008962d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xea9b,	// (0x00089636) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xeaa4,	// (0x0008963f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0a35,	// (0x0007b5d0) bg_button_pane_cp015

0x61dc,	// (0x00080d77) bg_button_pane_cp016

0x61e8,	// (0x00080d83) bg_button_pane_cp017

0xbad0,	// (0x0008666b) bg_popup_sub_pane_cp22

0xeac5,	// (0x00089660) popup_vitu2_query_window_g1

0x0a69,	// (0x0007b604) popup_vitu2_query_window_g2

0x0002,

0xf93a,	// (0x0008a4d5) popup_vitu2_query_window_g

0x0a7f,	// (0x0007b61a) popup_vitu2_query_window_t1_ParamLimits

0x0a7f,	// (0x0007b61a) popup_vitu2_query_window_t1

0x0ab2,	// (0x0007b64d) popup_vitu2_query_window_t2_ParamLimits

0x0ab2,	// (0x0007b64d) popup_vitu2_query_window_t2

0x0ac4,	// (0x0007b65f) popup_vitu2_query_window_t3_ParamLimits

0x0ac4,	// (0x0007b65f) popup_vitu2_query_window_t3

0x620f,	// (0x00080daa) popup_vitu2_query_window_t4_ParamLimits

0x620f,	// (0x00080daa) popup_vitu2_query_window_t4

0x6223,	// (0x00080dbe) popup_vitu2_query_window_t5_ParamLimits

0x6223,	// (0x00080dbe) popup_vitu2_query_window_t5

0x0006,

0xf941,	// (0x0008a4dc) popup_vitu2_query_window_t_ParamLimits

0xf941,	// (0x0008a4dc) popup_vitu2_query_window_t

0xe8db,	// (0x00089476) main_cset_text_pane

0x5c6f,	// (0x0008080a) aid_area_touch_slider_ParamLimits

0x5c8b,	// (0x00080826) cset_slider_pane_ParamLimits

0x5cae,	// (0x00080849) main_cset_slider_pane_g1_ParamLimits

0x5cc3,	// (0x0008085e) main_cset_slider_pane_g2_ParamLimits

0xe8fc,	// (0x00089497) main_cset_slider_pane_g3_ParamLimits

0xe8fc,	// (0x00089497) main_cset_slider_pane_g3

0x5cd8,	// (0x00080873) main_cset_slider_pane_g4_ParamLimits

0x5cd8,	// (0x00080873) main_cset_slider_pane_g4

0x5ce7,	// (0x00080882) main_cset_slider_pane_g5_ParamLimits

0x5ce7,	// (0x00080882) main_cset_slider_pane_g5

0x5cf3,	// (0x0008088e) main_cset_slider_pane_g6_ParamLimits

0x5cf3,	// (0x0008088e) main_cset_slider_pane_g6

0xf89e,	// (0x0008a439) main_cset_slider_pane_g_ParamLimits

0xe92c,	// (0x000894c7) main_cset_slider_pane_t1_ParamLimits

0x5d7f,	// (0x0008091a) main_cset_slider_pane_t2_ParamLimits

0x5d99,	// (0x00080934) main_cset_slider_pane_t3_ParamLimits

0x5db3,	// (0x0008094e) main_cset_slider_pane_t4_ParamLimits

0x5dcd,	// (0x00080968) main_cset_slider_pane_t5_ParamLimits

0x5de7,	// (0x00080982) main_cset_slider_pane_t6_ParamLimits

0x5dfc,	// (0x00080997) main_cset_slider_pane_t7_ParamLimits

0x5e26,	// (0x000809c1) main_cset_slider_pane_t8_ParamLimits

0x5e26,	// (0x000809c1) main_cset_slider_pane_t8

0x5e4e,	// (0x000809e9) main_cset_slider_pane_t9_ParamLimits

0x5e4e,	// (0x000809e9) main_cset_slider_pane_t9

0x5e76,	// (0x00080a11) main_cset_slider_pane_t10_ParamLimits

0x5e76,	// (0x00080a11) main_cset_slider_pane_t10

0x5e9e,	// (0x00080a39) main_cset_slider_pane_t11_ParamLimits

0x5e9e,	// (0x00080a39) main_cset_slider_pane_t11

0x5ec6,	// (0x00080a61) main_cset_slider_pane_t12_ParamLimits

0x5ec6,	// (0x00080a61) main_cset_slider_pane_t12

0x5ee3,	// (0x00080a7e) main_cset_slider_pane_t13_ParamLimits

0x5ee3,	// (0x00080a7e) main_cset_slider_pane_t13

0xf8c3,	// (0x0008a45e) main_cset_slider_pane_t_ParamLimits

0x10d4,	// (0x0007bc6f) bg_popup_sub_pane_cp011

0xead1,	// (0x0008966c) main_cset_text_pane_g1

0xead9,	// (0x00089674) main_cset_text_pane_t1

0xeae7,	// (0x00089682) main_cset_text_pane_t2

0xebef,	// (0x0008978a) main_cset_text_pane_t3

0xebfd,	// (0x00089798) main_cset_text_pane_t4

0xec0b,	// (0x000897a6) main_cset_text_pane_t5

0xec19,	// (0x000897b4) main_cset_text_pane_t6

0xec27,	// (0x000897c2) main_cset_text_pane_t7

0x0006,

0xf950,	// (0x0008a4eb) main_cset_text_pane_t

0x10d4,	// (0x0007bc6f) main_cam4_burst_pane

0x10d4,	// (0x0007bc6f) main_cam5_pane

0xe89d,	// (0x00089438) bg_button_pane_cp019

0xe8a6,	// (0x00089441) bg_button_pane_cp020

0xe908,	// (0x000894a3) main_cset_slider_pane_g7_ParamLimits

0xe908,	// (0x000894a3) main_cset_slider_pane_g7

0xe914,	// (0x000894af) main_cset_slider_pane_g8_ParamLimits

0xe914,	// (0x000894af) main_cset_slider_pane_g8

0x5d07,	// (0x000808a2) main_cset_slider_pane_g9_ParamLimits

0x5d07,	// (0x000808a2) main_cset_slider_pane_g9

0x5d13,	// (0x000808ae) main_cset_slider_pane_g10_ParamLimits

0x5d13,	// (0x000808ae) main_cset_slider_pane_g10

0x5d1f,	// (0x000808ba) main_cset_slider_pane_g11_ParamLimits

0x5d1f,	// (0x000808ba) main_cset_slider_pane_g11

0x5d2b,	// (0x000808c6) main_cset_slider_pane_g12_ParamLimits

0x5d2b,	// (0x000808c6) main_cset_slider_pane_g12

0x5d37,	// (0x000808d2) main_cset_slider_pane_g13_ParamLimits

0x5d37,	// (0x000808d2) main_cset_slider_pane_g13

0x5d43,	// (0x000808de) main_cset_slider_pane_g14_ParamLimits

0x5d43,	// (0x000808de) main_cset_slider_pane_g14

0x5d4f,	// (0x000808ea) main_cset_slider_pane_g15_ParamLimits

0x5d4f,	// (0x000808ea) main_cset_slider_pane_g15

0xe954,	// (0x000894ef) main_cset_slider_pane_t14_ParamLimits

0xe954,	// (0x000894ef) main_cset_slider_pane_t14

0xe98d,	// (0x00089528) main_cset_slider_pane_t15_ParamLimits

0xe98d,	// (0x00089528) main_cset_slider_pane_t15

0x6237,	// (0x00080dd2) aid_cam4_burst_size_cell_ParamLimits

0x6237,	// (0x00080dd2) aid_cam4_burst_size_cell

0x6257,	// (0x00080df2) grid_cam4_burst_pane_ParamLimits

0x6257,	// (0x00080df2) grid_cam4_burst_pane

0x628f,	// (0x00080e2a) linegrid_cam4_burst_pane_ParamLimits

0x628f,	// (0x00080e2a) linegrid_cam4_burst_pane

0xec35,	// (0x000897d0) scroll_pane_cp30_ParamLimits

0xec35,	// (0x000897d0) scroll_pane_cp30

0x62b3,	// (0x00080e4e) cell_cam4_burst_pane_ParamLimits

0x62b3,	// (0x00080e4e) cell_cam4_burst_pane

0xec41,	// (0x000897dc) linegrid_cam4_burst_pane_g1_ParamLimits

0xec41,	// (0x000897dc) linegrid_cam4_burst_pane_g1

0x6300,	// (0x00080e9b) linegrid_cam4_burst_pane_g2_ParamLimits

0x6300,	// (0x00080e9b) linegrid_cam4_burst_pane_g2

0xec4e,	// (0x000897e9) linegrid_cam4_burst_pane_g3_ParamLimits

0xec4e,	// (0x000897e9) linegrid_cam4_burst_pane_g3

0x0002,

0xf95f,	// (0x0008a4fa) linegrid_cam4_burst_pane_g_ParamLimits

0xf95f,	// (0x0008a4fa) linegrid_cam4_burst_pane_g

0x6311,	// (0x00080eac) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6311,	// (0x00080eac) linegrid_cam4_burst_pane_g3_copy1

0xec5b,	// (0x000897f6) linegrid_cam4_burst_pane_g4_ParamLimits

0xec5b,	// (0x000897f6) linegrid_cam4_burst_pane_g4

0x632b,	// (0x00080ec6) linegrid_cam4_burst_pane_g5_ParamLimits

0x632b,	// (0x00080ec6) linegrid_cam4_burst_pane_g5

0x633c,	// (0x00080ed7) linegrid_cam4_burst_pane_g6_ParamLimits

0x633c,	// (0x00080ed7) linegrid_cam4_burst_pane_g6

0xec68,	// (0x00089803) linegrid_cam4_burst_pane_g7_ParamLimits

0xec68,	// (0x00089803) linegrid_cam4_burst_pane_g7

0x6353,	// (0x00080eee) cell_cam4_burst_pane_g1

0xec81,	// (0x0008981c) main_cam5_pane_t1_ParamLimits

0xec81,	// (0x0008981c) main_cam5_pane_t1

0xec93,	// (0x0008982e) main_cam5_pane_t2_ParamLimits

0xec93,	// (0x0008982e) main_cam5_pane_t2

0xeca5,	// (0x00089840) main_cam5_pane_t3_ParamLimits

0xeca5,	// (0x00089840) main_cam5_pane_t3

0xecb7,	// (0x00089852) main_cam5_pane_t4_ParamLimits

0xecb7,	// (0x00089852) main_cam5_pane_t4

0xeccf,	// (0x0008986a) main_cam5_pane_t5_ParamLimits

0xeccf,	// (0x0008986a) main_cam5_pane_t5

0xece3,	// (0x0008987e) main_cam5_pane_t6_ParamLimits

0xece3,	// (0x0008987e) main_cam5_pane_t6

0xecf7,	// (0x00089892) main_cam5_pane_t7_ParamLimits

0xecf7,	// (0x00089892) main_cam5_pane_t7

0xed09,	// (0x000898a4) main_cam5_pane_t8_ParamLimits

0xed09,	// (0x000898a4) main_cam5_pane_t8

0xed25,	// (0x000898c0) main_cam5_pane_t9_ParamLimits

0xed25,	// (0x000898c0) main_cam5_pane_t9

0xed37,	// (0x000898d2) main_cam5_pane_t10_ParamLimits

0xed37,	// (0x000898d2) main_cam5_pane_t10

0xed49,	// (0x000898e4) main_cam5_pane_t11_ParamLimits

0xed49,	// (0x000898e4) main_cam5_pane_t11

0xed5b,	// (0x000898f6) main_cam5_pane_t12_ParamLimits

0xed5b,	// (0x000898f6) main_cam5_pane_t12

0xed70,	// (0x0008990b) main_cam5_pane_t13_ParamLimits

0xed70,	// (0x0008990b) main_cam5_pane_t13

0x000c,

0xf96b,	// (0x0008a506) main_cam5_pane_t_ParamLimits

0xf96b,	// (0x0008a506) main_cam5_pane_t

0x12be,	// (0x0007be59) popup_scut_keymap_window_ParamLimits

0x12be,	// (0x0007be59) popup_scut_keymap_window

0x6366,	// (0x00080f01) aid_size_cell_brow_shortcut

0xaf08,	// (0x00085aa3) bg_popup_window_pane_cp010

0x6372,	// (0x00080f0d) grid_scut_pane

0x637e,	// (0x00080f19) cell_scut_pane_ParamLimits

0x637e,	// (0x00080f19) cell_scut_pane

0x6395,	// (0x00080f30) cell_scut_pane_g1

0xed8d,	// (0x00089928) cell_scut_pane_t1

0xed9c,	// (0x00089937) cell_scut_pane_t2

0x639e,	// (0x00080f39) cell_scut_pane_t3

0x0002,

0xf986,	// (0x0008a521) cell_scut_pane_t

0x4512,	// (0x0007f0ad) main_mup3_pane_g8_ParamLimits

0x4512,	// (0x0007f0ad) main_mup3_pane_g8

0x5730,	// (0x000802cb) area_vitu2_query_pane_ParamLimits

0x5730,	// (0x000802cb) area_vitu2_query_pane

0x0a46,	// (0x0007b5e1) input_focus_pane_cp08

0xedab,	// (0x00089946) area_vitu2_query_pane_g1

0x0b42,	// (0x0007b6dd) area_vitu2_query_pane_g2

0x0001,

0xf98d,	// (0x0008a528) area_vitu2_query_pane_g

0x63ac,	// (0x00080f47) area_vitu2_query_pane_t1_ParamLimits

0x63ac,	// (0x00080f47) area_vitu2_query_pane_t1

0x63c0,	// (0x00080f5b) area_vitu2_query_pane_t2_ParamLimits

0x63c0,	// (0x00080f5b) area_vitu2_query_pane_t2

0x0b51,	// (0x0007b6ec) area_vitu2_query_pane_t3_ParamLimits

0x0b51,	// (0x0007b6ec) area_vitu2_query_pane_t3

0xdc42,	// (0x000887dd) area_vitu2_query_pane_t4_ParamLimits

0xdc42,	// (0x000887dd) area_vitu2_query_pane_t4

0xdc6a,	// (0x00088805) area_vitu2_query_pane_t5_ParamLimits

0xdc6a,	// (0x00088805) area_vitu2_query_pane_t5

0xdc92,	// (0x0008882d) area_vitu2_query_pane_t6_ParamLimits

0xdc92,	// (0x0008882d) area_vitu2_query_pane_t6

0x0006,

0xf992,	// (0x0008a52d) area_vitu2_query_pane_t_ParamLimits

0xf992,	// (0x0008a52d) area_vitu2_query_pane_t

0x63d4,	// (0x00080f6f) bg_button_pane_cp018

0x63e0,	// (0x00080f7b) bg_button_pane_cp021

0x0b79,	// (0x0007b714) bg_button_pane_cp022

0x0b98,	// (0x0007b733) input_focus_pane_cp09

0xb82e,	// (0x000863c9) aid_size_touch_mv_arrow_left

0xb857,	// (0x000863f2) aid_size_touch_mv_arrow_right

0x5d67,	// (0x00080902) main_cset_slider_pane_g16_ParamLimits

0x5d67,	// (0x00080902) main_cset_slider_pane_g16

0x5d73,	// (0x0008090e) main_cset_slider_pane_g17_ParamLimits

0x5d73,	// (0x0008090e) main_cset_slider_pane_g17

0x6353,	// (0x00080eee) cell_cam4_burst_pane_g1_ParamLimits

0x10d4,	// (0x0007bc6f) compa_mode_pane

0x5f3d,	// (0x00080ad8) popup_vtel_slider_window_g3_ParamLimits

0x5f3d,	// (0x00080ad8) popup_vtel_slider_window_g3

0x5f54,	// (0x00080aef) popup_vtel_slider_window_g4_ParamLimits

0x5f54,	// (0x00080aef) popup_vtel_slider_window_g4

0x5f6b,	// (0x00080b06) popup_vtel_slider_window_t1_ParamLimits

0x5f6b,	// (0x00080b06) popup_vtel_slider_window_t1

0x10d4,	// (0x0007bc6f) main_cl_pane

0xcd11,	// (0x000878ac) popup_imed_adjust2_window_ParamLimits

0xbad0,	// (0x0008666b) bg_tb_trans_pane_cp05_ParamLimits

0xd6c4,	// (0x0008825f) popup_imed_adjust2_window_g1_ParamLimits

0xd6d3,	// (0x0008826e) popup_imed_adjust2_window_g2_ParamLimits

0xd6d3,	// (0x0008826e) popup_imed_adjust2_window_g2

0xd6df,	// (0x0008827a) popup_imed_adjust2_window_g3_ParamLimits

0xd6df,	// (0x0008827a) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x0008a2a8) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x0008a2a8) popup_imed_adjust2_window_g

0xd6eb,	// (0x00088286) popup_imed_adjust2_window_t1_ParamLimits

0xd703,	// (0x0008829e) slider_imed_adjust_pane_ParamLimits

0xd717,	// (0x000882b2) slider_imed_adjust_pane_g1_ParamLimits

0xd727,	// (0x000882c2) slider_imed_adjust_pane_g2_ParamLimits

0xd737,	// (0x000882d2) slider_imed_adjust_pane_g3_ParamLimits

0xd748,	// (0x000882e3) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x0008a2af) slider_imed_adjust_pane_g_ParamLimits

0x54a7,	// (0x00080042) aid_touch_area_cam4_ParamLimits

0x54a7,	// (0x00080042) aid_touch_area_cam4

0xe685,	// (0x00089220) battery_pane_cp01

0x5576,	// (0x00080111) main_camera4_pane_g6_ParamLimits

0x5576,	// (0x00080111) main_camera4_pane_g6

0x55a0,	// (0x0008013b) main_camera4_pane_t2_ParamLimits

0x55a0,	// (0x0008013b) main_camera4_pane_t2

0x0001,

0xf811,	// (0x0008a3ac) main_camera4_pane_t_ParamLimits

0xf811,	// (0x0008a3ac) main_camera4_pane_t

0x55e7,	// (0x00080182) aid_touch_area_vid4_ParamLimits

0x55e7,	// (0x00080182) aid_touch_area_vid4

0x563b,	// (0x000801d6) main_video4_pane_g5_ParamLimits

0x563b,	// (0x000801d6) main_video4_pane_g5

0x5660,	// (0x000801fb) vid4_progress_pane_ParamLimits

0x5660,	// (0x000801fb) vid4_progress_pane

0xe920,	// (0x000894bb) main_cset_slider_pane_g18_ParamLimits

0xe920,	// (0x000894bb) main_cset_slider_pane_g18

0xec75,	// (0x00089810) cell_cam4_burst_pane_g2_ParamLimits

0xec75,	// (0x00089810) cell_cam4_burst_pane_g2

0x0001,

0xf966,	// (0x0008a501) cell_cam4_burst_pane_g_ParamLimits

0xf966,	// (0x0008a501) cell_cam4_burst_pane_g

0xacc3,	// (0x0008585e) bg_cl_pane_ParamLimits

0xacc3,	// (0x0008585e) bg_cl_pane

0x63ec,	// (0x00080f87) cl_header_pane_ParamLimits

0x63ec,	// (0x00080f87) cl_header_pane

0x6400,	// (0x00080f9b) cl_listscroll_pane_ParamLimits

0x6400,	// (0x00080f9b) cl_listscroll_pane

0xedb7,	// (0x00089952) bg_cl_pane_g1

0xedbf,	// (0x0008995a) bg_cl_pane_g2

0xedc7,	// (0x00089962) bg_cl_pane_g3

0xedcf,	// (0x0008996a) bg_cl_pane_g4

0xedd7,	// (0x00089972) bg_cl_pane_g5

0xeddf,	// (0x0008997a) bg_cl_pane_g6

0xede7,	// (0x00089982) bg_cl_pane_g7

0xedef,	// (0x0008998a) bg_cl_pane_g8

0xedf7,	// (0x00089992) bg_cl_pane_g9

0x0008,

0xf9a1,	// (0x0008a53c) bg_cl_pane_g

0x6410,	// (0x00080fab) aid_height_cl_leading_ParamLimits

0x6410,	// (0x00080fab) aid_height_cl_leading

0x641c,	// (0x00080fb7) aid_height_cl_text_ParamLimits

0x641c,	// (0x00080fb7) aid_height_cl_text

0xa541,	// (0x000850dc) bg_cl_header_pane_ParamLimits

0xa541,	// (0x000850dc) bg_cl_header_pane

0x643b,	// (0x00080fd6) cl_header_pane_g1_ParamLimits

0x643b,	// (0x00080fd6) cl_header_pane_g1

0x6451,	// (0x00080fec) cl_header_pane_t1_ParamLimits

0x6451,	// (0x00080fec) cl_header_pane_t1

0xedff,	// (0x0008999a) cl_list_pane

0xe8f3,	// (0x0008948e) hc_scroll_pane_cp01

0xb10b,	// (0x00085ca6) bg_cl_header_pane_g1

0xe7b3,	// (0x0008934e) bg_cl_header_pane_g2

0xb12b,	// (0x00085cc6) bg_cl_header_pane_g3

0xe7c3,	// (0x0008935e) bg_cl_header_pane_g4

0xe7bb,	// (0x00089356) bg_cl_header_pane_g5

0xea6a,	// (0x00089605) bg_cl_header_pane_g6

0xe7db,	// (0x00089376) bg_cl_header_pane_g7

0xe7e3,	// (0x0008937e) bg_cl_header_pane_g8

0xe7d3,	// (0x0008936e) bg_cl_header_pane_g9

0x0008,

0xf9b4,	// (0x0008a54f) bg_cl_header_pane_g

0x646a,	// (0x00081005) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x646a,	// (0x00081005) hc_cl_list_double_graphic_heading_pane

0x647b,	// (0x00081016) hc_cl_list_single_graphic_pane_ParamLimits

0x647b,	// (0x00081016) hc_cl_list_single_graphic_pane

0x6491,	// (0x0008102c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6491,	// (0x0008102c) hc_cl_list_single_graphic_pane_g1

0x649d,	// (0x00081038) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x649d,	// (0x00081038) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c7,	// (0x0008a562) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c7,	// (0x0008a562) hc_cl_list_single_graphic_pane_g

0x64b1,	// (0x0008104c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x64b1,	// (0x0008104c) hc_cl_list_single_graphic_pane_t1

0x6491,	// (0x0008102c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6491,	// (0x0008102c) hc_cl_list_double_graphic_heading_pane_g1

0x64c6,	// (0x00081061) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x64c6,	// (0x00081061) hc_cl_list_double_graphic_heading_pane_g2

0x64da,	// (0x00081075) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x64da,	// (0x00081075) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9cc,	// (0x0008a567) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9cc,	// (0x0008a567) hc_cl_list_double_graphic_heading_pane_g

0x64ee,	// (0x00081089) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x64ee,	// (0x00081089) hc_cl_list_double_graphic_heading_pane_t1

0x6503,	// (0x0008109e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6503,	// (0x0008109e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d3,	// (0x0008a56e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d3,	// (0x0008a56e) hc_cl_list_double_graphic_heading_pane_t

0xeafd,	// (0x00089698) vid4_progress_pane_g1

0xeb0d,	// (0x000896a8) vid4_progress_pane_g2

0x6518,	// (0x000810b3) vid4_progress_pane_g3

0xeb1d,	// (0x000896b8) vid4_progress_pane_g4

0x0004,

0xf9d8,	// (0x0008a573) vid4_progress_pane_g

0x652a,	// (0x000810c5) vid4_progress_pane_t1

0xeb35,	// (0x000896d0) vid4_progress_pane_t2

0x0002,

0xf9e3,	// (0x0008a57e) vid4_progress_pane_t

0x6542,	// (0x000810dd) wait_bar_pane_cp07

0xcfcf,	// (0x00087b6a) blid_firmament_pane_ParamLimits

0xd012,	// (0x00087bad) popup_blid_sat_info2_window_g1

0xd036,	// (0x00087bd1) popup_blid_sat_info2_window_t3

0xd044,	// (0x00087bdf) popup_blid_sat_info2_window_t4

0xd052,	// (0x00087bed) popup_blid_sat_info2_window_t5

0xd060,	// (0x00087bfb) popup_blid_sat_info2_window_t6

0xd070,	// (0x00087c0b) popup_blid_sat_info2_window_t7

0xd07e,	// (0x00087c19) popup_blid_sat_info2_window_t8

0xd08c,	// (0x00087c27) popup_blid_sat_info2_window_t9

0xd09a,	// (0x00087c35) popup_blid_sat_info2_window_t10

0xd15b,	// (0x00087cf6) aid_firma_cardinal_ParamLimits

0xd16f,	// (0x00087d0a) blid_firmament_pane_t1_ParamLimits

0xd186,	// (0x00087d21) blid_firmament_pane_t2_ParamLimits

0xd19d,	// (0x00087d38) blid_firmament_pane_t3_ParamLimits

0xd1b4,	// (0x00087d4f) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x0008a1a1) blid_firmament_pane_t_ParamLimits

0xd1cb,	// (0x00087d66) blid_sat_info_pane_ParamLimits

0xa541,	// (0x000850dc) main_cam_set_pane_ParamLimits

0x4cf8,	// (0x0007f893) aid_size_cell_colour_35_ParamLimits

0x4d18,	// (0x0007f8b3) aid_size_cell_colour_112_ParamLimits

0x4d38,	// (0x0007f8d3) aid_size_cell_effect_ParamLimits

0xbad0,	// (0x0008666b) bg_tb_trans_pane_cp02_ParamLimits

0xb3a9,	// (0x00085f44) heading_imed_pane_ParamLimits

0x4d58,	// (0x0007f8f3) listscroll_imed_pane_ParamLimits

0xc400,	// (0x00086f9b) popup_call2_audio_first_window_g5_ParamLimits

0xc400,	// (0x00086f9b) popup_call2_audio_first_window_g5

0x50b5,	// (0x0007fc50) aid_size_touch_image3_arrow_left_ParamLimits

0x50b5,	// (0x0007fc50) aid_size_touch_image3_arrow_left

0x50e1,	// (0x0007fc7c) aid_size_touch_image3_arrow_right_ParamLimits

0x50e1,	// (0x0007fc7c) aid_size_touch_image3_arrow_right

0xeb4a,	// (0x000896e5) vid4_progress_pane_t3

0x4efd,	// (0x0007fa98) main_hwr_training_symbol_option_pane_ParamLimits

0x4efd,	// (0x0007fa98) main_hwr_training_symbol_option_pane

0xd852,	// (0x000883ed) popup_hwr_training_preview_window_ParamLimits

0xd852,	// (0x000883ed) popup_hwr_training_preview_window

0x4f1d,	// (0x0007fab8) hwr_training_navi_pane_g5_ParamLimits

0x4f1d,	// (0x0007fab8) hwr_training_navi_pane_g5

0xe7a1,	// (0x0008933c) popup_char_count_window

0xa541,	// (0x000850dc) bg_popup_sub_pane_cp20_ParamLimits

0x607b,	// (0x00080c16) list_vitu2_match_list_pane_ParamLimits

0x6087,	// (0x00080c22) vitu2_page_scroll_pane_ParamLimits

0x6087,	// (0x00080c22) vitu2_page_scroll_pane

0xee11,	// (0x000899ac) list_single_hwr_training_symbol_option_pane_ParamLimits

0xee11,	// (0x000899ac) list_single_hwr_training_symbol_option_pane

0xee24,	// (0x000899bf) list_single_hwr_training_symbol_option_pane_g1

0xee2c,	// (0x000899c7) list_single_hwr_training_symbol_option_pane_t1

0xee3a,	// (0x000899d5) bg_button_pane_cp023

0xee43,	// (0x000899de) bg_button_pane_cp024

0xee76,	// (0x00089a11) vitu2_page_scroll_pane_g1

0xee7e,	// (0x00089a19) vitu2_page_scroll_pane_g2

0x0001,

0xf9ea,	// (0x0008a585) vitu2_page_scroll_pane_g

0xee86,	// (0x00089a21) vitu2_page_scroll_pane_t1

0xcf45,	// (0x00087ae0) popup_char_count_window_g1

0xee95,	// (0x00089a30) popup_char_count_window_g2

0xee9e,	// (0x00089a39) popup_char_count_window_g3

0x0002,

0xf9ef,	// (0x0008a58a) popup_char_count_window_g

0xeea7,	// (0x00089a42) popup_char_count_window_t1

0x10d4,	// (0x0007bc6f) main_vded2_pane

0xd6b0,	// (0x0008824b) aid_size_cell_imed_line

0xd6ba,	// (0x00088255) grid_imed_line_width_pane

0xe73d,	// (0x000892d8) vid4_indicators_pane_g4

0xeeb5,	// (0x00089a50) cell_imed_line_width_pane_ParamLimits

0xeeb5,	// (0x00089a50) cell_imed_line_width_pane

0xeec9,	// (0x00089a64) cell_imed_line_width_pane_g1

0xeed2,	// (0x00089a6d) cell_imed_line_width_pane_g2

0x0001,

0xf9f6,	// (0x0008a591) cell_imed_line_width_pane_g

0x6555,	// (0x000810f0) main_vded2_pane_g1_ParamLimits

0x6555,	// (0x000810f0) main_vded2_pane_g1

0x656b,	// (0x00081106) main_vded2_pane_g2_ParamLimits

0x656b,	// (0x00081106) main_vded2_pane_g2

0x0001,

0xf9fb,	// (0x0008a596) main_vded2_pane_g_ParamLimits

0xf9fb,	// (0x0008a596) main_vded2_pane_g

0x657d,	// (0x00081118) vded2_slider_pane_ParamLimits

0x657d,	// (0x00081118) vded2_slider_pane

0x658d,	// (0x00081128) aid_size_touch_vded2_end

0x6597,	// (0x00081132) aid_size_touch_vded2_playhead

0xeeda,	// (0x00089a75) aid_size_touch_vded2_start

0xeee2,	// (0x00089a7d) vded2_slider_bg_pane

0xeeeb,	// (0x00089a86) vded2_slider_pane_g1

0xeef4,	// (0x00089a8f) vded2_slider_pane_g2

0x65a1,	// (0x0008113c) vded2_slider_pane_g3

0x0002,

0xfa00,	// (0x0008a59b) vded2_slider_pane_g

0xeefc,	// (0x00089a97) vded2_slider_bg_pane_g1

0xef05,	// (0x00089aa0) vded2_slider_bg_pane_g2

0xef0e,	// (0x00089aa9) vded2_slider_bg_pane_g3

0x0002,

0xfa07,	// (0x0008a5a2) vded2_slider_bg_pane_g

0x3329,	// (0x0007dec4) aid_postcard_touch_down_pane_ParamLimits

0x3329,	// (0x0007dec4) aid_postcard_touch_down_pane

0x333f,	// (0x0007deda) aid_postcard_touch_up_pane_ParamLimits

0x333f,	// (0x0007deda) aid_postcard_touch_up_pane

0x10d4,	// (0x0007bc6f) main_blid2_pane

0xccf7,	// (0x00087892) popup_blid2_search_window

0x10d4,	// (0x0007bc6f) blid2_gps_pane

0x10d4,	// (0x0007bc6f) blid2_navig_pane

0x10d4,	// (0x0007bc6f) blid2_search_pane

0x10d4,	// (0x0007bc6f) blid2_tripm_pane

0x65ac,	// (0x00081147) blid2_search_pane_g1_ParamLimits

0x65ac,	// (0x00081147) blid2_search_pane_g1

0x65c6,	// (0x00081161) blid2_search_pane_t1_ParamLimits

0x65c6,	// (0x00081161) blid2_search_pane_t1

0x65d8,	// (0x00081173) aid_size_cell_blid2_gps_ParamLimits

0x65d8,	// (0x00081173) aid_size_cell_blid2_gps

0x65f0,	// (0x0008118b) blid2_gps_pane_g1_ParamLimits

0x65f0,	// (0x0008118b) blid2_gps_pane_g1

0x6604,	// (0x0008119f) grid_blid2_satellite_pane_ParamLimits

0x6604,	// (0x0008119f) grid_blid2_satellite_pane

0x661e,	// (0x000811b9) blid2_navig_pane_g1_ParamLimits

0x661e,	// (0x000811b9) blid2_navig_pane_g1

0x662a,	// (0x000811c5) blid2_navig_pane_t1_ParamLimits

0x662a,	// (0x000811c5) blid2_navig_pane_t1

0x6645,	// (0x000811e0) blid2_navig_pane_t2_ParamLimits

0x6645,	// (0x000811e0) blid2_navig_pane_t2

0x0001,

0xfa0e,	// (0x0008a5a9) blid2_navig_pane_t_ParamLimits

0xfa0e,	// (0x0008a5a9) blid2_navig_pane_t

0x6660,	// (0x000811fb) blid2_navig_ring_pane_ParamLimits

0x6660,	// (0x000811fb) blid2_navig_ring_pane

0x6679,	// (0x00081214) blid2_speed_pane_ParamLimits

0x6679,	// (0x00081214) blid2_speed_pane

0x6685,	// (0x00081220) blid2_tripm_pane_g1_ParamLimits

0x6685,	// (0x00081220) blid2_tripm_pane_g1

0x669e,	// (0x00081239) blid2_tripm_pane_g2_ParamLimits

0x669e,	// (0x00081239) blid2_tripm_pane_g2

0x66b2,	// (0x0008124d) blid2_tripm_pane_g3_ParamLimits

0x66b2,	// (0x0008124d) blid2_tripm_pane_g3

0x66c6,	// (0x00081261) blid2_tripm_pane_g4_ParamLimits

0x66c6,	// (0x00081261) blid2_tripm_pane_g4

0x66da,	// (0x00081275) blid2_tripm_pane_g5_ParamLimits

0x66da,	// (0x00081275) blid2_tripm_pane_g5

0x0005,

0xfa13,	// (0x0008a5ae) blid2_tripm_pane_g_ParamLimits

0xfa13,	// (0x0008a5ae) blid2_tripm_pane_g

0x6700,	// (0x0008129b) blid2_tripm_pane_t1_ParamLimits

0x6700,	// (0x0008129b) blid2_tripm_pane_t1

0x671b,	// (0x000812b6) blid2_tripm_pane_t2_ParamLimits

0x671b,	// (0x000812b6) blid2_tripm_pane_t2

0x6734,	// (0x000812cf) blid2_tripm_pane_t3_ParamLimits

0x6734,	// (0x000812cf) blid2_tripm_pane_t3

0x0003,

0xfa20,	// (0x0008a5bb) blid2_tripm_pane_t_ParamLimits

0xfa20,	// (0x0008a5bb) blid2_tripm_pane_t

0x677b,	// (0x00081316) cell_blid2_satellite_pane_ParamLimits

0x677b,	// (0x00081316) cell_blid2_satellite_pane

0x6799,	// (0x00081334) cell_blid2_satellite_pane_g1

0xef17,	// (0x00089ab2) cell_blid2_satellite_pane_t1

0xac4b,	// (0x000857e6) blid2_speed_pane_g1

0xef25,	// (0x00089ac0) blid2_speed_pane_t1

0xef33,	// (0x00089ace) blid2_speed_pane_t2

0x0001,

0xfa29,	// (0x0008a5c4) blid2_speed_pane_t

0xac4b,	// (0x000857e6) blid2_navig_ring_pane_g1

0x67a2,	// (0x0008133d) blid2_navig_ring_pane_g2

0x67aa,	// (0x00081345) blid2_navig_ring_pane_g3

0x67b2,	// (0x0008134d) blid2_navig_ring_pane_g4

0x67ba,	// (0x00081355) blid2_navig_ring_pane_g5

0x0004,

0xfa2e,	// (0x0008a5c9) blid2_navig_ring_pane_g

0x10d4,	// (0x0007bc6f) bg_popup_window_pane_cp011

0xef41,	// (0x00089adc) popup_blid2_search_window_g1

0xef49,	// (0x00089ae4) popup_blid2_search_window_t1

0xef57,	// (0x00089af2) popup_blid2_search_window_t2

0x0001,

0xfa39,	// (0x0008a5d4) popup_blid2_search_window_t

0xb01a,	// (0x00085bb5) main_browser_pane_g1

0xacc3,	// (0x0008585e) main_browser_pane_ParamLimits

0xa541,	// (0x000850dc) bg_button_pane_cp011_ParamLimits

0x5952,	// (0x000804ed) cell_vitu2_function_pane_g1_ParamLimits

0xbad0,	// (0x0008666b) bg_popup_sub_pane_cp22_ParamLimits

0x0a46,	// (0x0007b5e1) input_focus_pane_cp08_ParamLimits

0x61f4,	// (0x00080d8f) popup_vitu2_query_button_pane_ParamLimits

0x61f4,	// (0x00080d8f) popup_vitu2_query_button_pane

0x0a61,	// (0x0007b5fc) popup_vitu2_query_input_button_pane

0xeac5,	// (0x00089660) popup_vitu2_query_window_g1_ParamLimits

0x0a69,	// (0x0007b604) popup_vitu2_query_window_g2_ParamLimits

0xf93a,	// (0x0008a4d5) popup_vitu2_query_window_g_ParamLimits

0x10d4,	// (0x0007bc6f) bg_button_pane_cp026

0x67c2,	// (0x0008135d) popup_vitu2_query_input_button_pane_g1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp025

0xef65,	// (0x00089b00) popup_vitu2_query_button_pane_t1

0x41a7,	// (0x0007ed42) main_mp3_pane_t6

0x41b5,	// (0x0007ed50) popup_slider_window_cp01

0xe6a1,	// (0x0008923c) cam4_battery_pane

0xe6fa,	// (0x00089295) cam4_battery_pane_cp02

0xeaf5,	// (0x00089690) cam4_battery_pane_cp01

0xeaf5,	// (0x00089690) cam4_battery_pane_cp03

0xac4b,	// (0x000857e6) cam4_battery_pane_g1

0xef73,	// (0x00089b0e) cam4_battery_pane_g2

0x0001,

0xfa3e,	// (0x0008a5d9) cam4_battery_pane_g

0xd0a8,	// (0x00087c43) popup_blid_sat_info2_window_t11

0xb82e,	// (0x000863c9) aid_size_touch_mv_arrow_left_ParamLimits

0xb857,	// (0x000863f2) aid_size_touch_mv_arrow_right_ParamLimits

0xb8b5,	// (0x00086450) navi_pane_g1_ParamLimits

0xb8c1,	// (0x0008645c) navi_pane_g2_ParamLimits

0xb8ef,	// (0x0008648a) navi_pane_g3_ParamLimits

0xf32f,	// (0x00089eca) navi_pane_g_ParamLimits

0x303e,	// (0x0007dbd9) navi_pane_mv_t1_ParamLimits

0x4d64,	// (0x0007f8ff) grid_imed_effect_pane_ParamLimits

0x1dc7,	// (0x0007c962) aid_placing_vt_slider_lsc

0xaf69,	// (0x00085b04) aid_placing_vt_slider_prt

0xa541,	// (0x000850dc) bg_tb_trans_pane_cp01_ParamLimits

0xd328,	// (0x00087ec3) popup_image_details_window_g1_ParamLimits

0xd33b,	// (0x00087ed6) popup_image_details_window_g2_ParamLimits

0xd350,	// (0x00087eeb) popup_image_details_window_g3_ParamLimits

0xd350,	// (0x00087eeb) popup_image_details_window_g3

0xf646,	// (0x0008a1e1) popup_image_details_window_g_ParamLimits

0xd364,	// (0x00087eff) popup_image_details_window_t1_ParamLimits

0xd376,	// (0x00087f11) popup_image_details_window_t2_ParamLimits

0xd38f,	// (0x00087f2a) popup_image_details_window_t3_ParamLimits

0xd3a3,	// (0x00087f3e) popup_image_details_window_t4_ParamLimits

0xd3be,	// (0x00087f59) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x0008a1e8) popup_image_details_window_t_ParamLimits

0x6428,	// (0x00080fc3) cl_header_name_pane_ParamLimits

0x6428,	// (0x00080fc3) cl_header_name_pane

0x67ca,	// (0x00081365) cl_header_name_pane_t1_ParamLimits

0x67ca,	// (0x00081365) cl_header_name_pane_t1

0x67eb,	// (0x00081386) cl_header_name_pane_t2_ParamLimits

0x67eb,	// (0x00081386) cl_header_name_pane_t2

0x682d,	// (0x000813c8) cl_header_name_pane_t3_ParamLimits

0x682d,	// (0x000813c8) cl_header_name_pane_t3

0x0002,

0xfa43,	// (0x0008a5de) cl_header_name_pane_t_ParamLimits

0xfa43,	// (0x0008a5de) cl_header_name_pane_t

0xb97e,	// (0x00086519) navi_pane_mv_g2_ParamLimits

0xe789,	// (0x00089324) field_vitu2_entry_pane_g1_ParamLimits

0xe795,	// (0x00089330) field_vitu2_entry_pane_g2_ParamLimits

0xbaae,	// (0x00086649) field_vitu2_entry_pane_g3_ParamLimits

0xbaae,	// (0x00086649) field_vitu2_entry_pane_g3

0xf843,	// (0x0008a3de) field_vitu2_entry_pane_g_ParamLimits

0x58ce,	// (0x00080469) cell_vitu2_itu_pane_g1_ParamLimits

0x58e6,	// (0x00080481) cell_vitu2_itu_pane_g2_ParamLimits

0x58e6,	// (0x00080481) cell_vitu2_itu_pane_g2

0x0001,

0xf84f,	// (0x0008a3ea) cell_vitu2_itu_pane_g_ParamLimits

0xf84f,	// (0x0008a3ea) cell_vitu2_itu_pane_g

0xa541,	// (0x000850dc) bg_vkb2_func_pane_cp05_ParamLimits

0xa541,	// (0x000850dc) bg_vkb2_func_pane_cp05

0xa541,	// (0x000850dc) bg_vkb2_func_pane_cp03

0xa541,	// (0x000850dc) bg_vkb2_func_pane_cp04

0xa541,	// (0x000850dc) bg_vkb2_func_pane_cp10_ParamLimits

0xa541,	// (0x000850dc) bg_vkb2_func_pane_cp10

0x0b88,	// (0x0007b723) bg_vkb2_func_pane_cp08

0x63d4,	// (0x00080f6f) bg_vkb2_func_pane_cp06

0x63e0,	// (0x00080f7b) bg_vkb2_func_pane_cp07

0xee4c,	// (0x000899e7) bg_vkb2_func_pane_cp11_ParamLimits

0xee4c,	// (0x000899e7) bg_vkb2_func_pane_cp11

0xee61,	// (0x000899fc) bg_vkb2_func_pane_cp12_ParamLimits

0xee61,	// (0x000899fc) bg_vkb2_func_pane_cp12

0x10d4,	// (0x0007bc6f) bg_vkb2_func_pane_cp09

0xe7b3,	// (0x0008934e) bg_vkb2_func_pane_g1

0xb12b,	// (0x00085cc6) bg_vkb2_func_pane_g2

0xe7bb,	// (0x00089356) bg_vkb2_func_pane_g3

0xe7c3,	// (0x0008935e) bg_vkb2_func_pane_g4

0xea6a,	// (0x00089605) bg_vkb2_func_pane_g5

0xe7db,	// (0x00089376) bg_vkb2_func_pane_g6

0xe7e3,	// (0x0008937e) bg_vkb2_func_pane_g7

0xe7d3,	// (0x0008936e) bg_vkb2_func_pane_g8

0xb10b,	// (0x00085ca6) bg_vkb2_func_pane_g9

0x0008,

0xfa4a,	// (0x0008a5e5) bg_vkb2_func_pane_g

0x66ee,	// (0x00081289) blid2_tripm_pane_g6_ParamLimits

0x66ee,	// (0x00081289) blid2_tripm_pane_g6

0xe5a2,	// (0x0008913d) mp4_progress_pane_g1

0x6767,	// (0x00081302) blid2_tripm_values_pane_ParamLimits

0x6767,	// (0x00081302) blid2_tripm_values_pane

0x685e,	// (0x000813f9) blid2_tripm_values_pane_t1

0x686c,	// (0x00081407) blid2_tripm_values_pane_t2

0x687a,	// (0x00081415) blid2_tripm_values_pane_t3

0x6888,	// (0x00081423) blid2_tripm_values_pane_t4

0x6896,	// (0x00081431) blid2_tripm_values_pane_t5

0x68a4,	// (0x0008143f) blid2_tripm_values_pane_t6

0x68b2,	// (0x0008144d) blid2_tripm_values_pane_t7

0x68c0,	// (0x0008145b) blid2_tripm_values_pane_t8

0x68ce,	// (0x00081469) blid2_tripm_values_pane_t9

0x0008,

0xfa5d,	// (0x0008a5f8) blid2_tripm_values_pane_t

0x1e09,	// (0x0007c9a4) call_video_pane_t1_ParamLimits

0x1e27,	// (0x0007c9c2) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00089d78) call_video_pane_t_ParamLimits

0x087b,	// (0x0007b416) msg_header_pane_g1_ParamLimits

0xbb9c,	// (0x00086737) msg_header_pane_g2_ParamLimits

0xbb9c,	// (0x00086737) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x00089f68) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x00089f68) msg_header_pane_g

0xacc3,	// (0x0008585e) main_clock2_pane_ParamLimits

0x4a65,	// (0x0007f600) grid_clock2_toolbar_pane_ParamLimits

0x4a65,	// (0x0007f600) grid_clock2_toolbar_pane

0x4a65,	// (0x0007f600) listscroll_clock2_pane_ParamLimits

0x4a65,	// (0x0007f600) listscroll_clock2_pane

0x4b49,	// (0x0007f6e4) main_clock2_pane_t3_ParamLimits

0x4b49,	// (0x0007f6e4) main_clock2_pane_t3

0x4b6d,	// (0x0007f708) main_clock2_pane_t4_ParamLimits

0x4b6d,	// (0x0007f708) main_clock2_pane_t4

0xef7d,	// (0x00089b18) cell_clock2_toolbar_pane

0xef85,	// (0x00089b20) cell_clock2_toolbar_pane_cp01

0xef85,	// (0x00089b20) cell_clock2_toolbar_pane_cp02

0xef8d,	// (0x00089b28) cell_clock2_toolbar_pane_cp03

0xef95,	// (0x00089b30) list_clock2_pane

0xb7a4,	// (0x0008633f) scroll_pane_cp10

0xef9d,	// (0x00089b38) list_single_clock2_pane_ParamLimits

0xef9d,	// (0x00089b38) list_single_clock2_pane

0xaf08,	// (0x00085aa3) list_highlight_pane_cp08

0xefaa,	// (0x00089b45) list_single_clock2_pane_t1

0xefb8,	// (0x00089b53) list_single_clock2_pane_t2

0x0001,

0xfa70,	// (0x0008a60b) list_single_clock2_pane_t

0x10d4,	// (0x0007bc6f) bg_button_pane_cp10

0xefc6,	// (0x00089b61) cell_clock2_toolbar_pane_g1

0x32b5,	// (0x0007de50) aid_main_viewer_pane_g1_ParamLimits

0x32b5,	// (0x0007de50) aid_main_viewer_pane_g1

0x32c3,	// (0x0007de5e) aid_main_viewer_pane_g2_ParamLimits

0x32c3,	// (0x0007de5e) aid_main_viewer_pane_g2

0x32d1,	// (0x0007de6c) aid_main_viewer_pane_g3_ParamLimits

0x32d1,	// (0x0007de6c) aid_main_viewer_pane_g3

0x32e0,	// (0x0007de7b) aid_main_viewer_pane_g4_ParamLimits

0x32e0,	// (0x0007de7b) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x00089f79) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x00089f79) aid_main_viewer_pane_g

0x3b84,	// (0x0007e71f) main_calc_pane_ParamLimits

0x3b98,	// (0x0007e733) main_dialer2_pane_ParamLimits

0x10d4,	// (0x0007bc6f) main_cam6_pane

0x10d4,	// (0x0007bc6f) main_vid6_pane

0x4a71,	// (0x0007f60c) listscroll_gen_pane_cp06_ParamLimits

0x4a71,	// (0x0007f60c) listscroll_gen_pane_cp06

0x4b90,	// (0x0007f72b) main_clock2_pane_t5_ParamLimits

0x4b90,	// (0x0007f72b) main_clock2_pane_t5

0x4bee,	// (0x0007f789) aid_call2_pane_cp10_ParamLimits

0x4c00,	// (0x0007f79b) aid_call_pane_cp10_ParamLimits

0xb822,	// (0x000863bd) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb822,	// (0x000863bd) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4c12,	// (0x0007f7ad) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4c12,	// (0x0007f7ad) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb822,	// (0x000863bd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x0008a29d) popup_clock_analogue_window_cp10_g_ParamLimits

0x4c28,	// (0x0007f7c3) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe613,	// (0x000891ae) cell_dialer2_keypad_pane_g2_ParamLimits

0xe613,	// (0x000891ae) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e2,	// (0x0008a37d) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e2,	// (0x0008a37d) cell_dialer2_keypad_pane_g

0xac55,	// (0x000857f0) cell_dialer2_keypad_pane_t1

0x5c61,	// (0x000807fc) main_cset_text2_pane_ParamLimits

0x5c61,	// (0x000807fc) main_cset_text2_pane

0xedab,	// (0x00089946) area_vitu2_query_pane_g1_ParamLimits

0x0b42,	// (0x0007b6dd) area_vitu2_query_pane_g2_ParamLimits

0xf98d,	// (0x0008a528) area_vitu2_query_pane_g_ParamLimits

0xdcba,	// (0x00088855) area_vitu2_query_pane_t7_ParamLimits

0xdcba,	// (0x00088855) area_vitu2_query_pane_t7

0x63d4,	// (0x00080f6f) bg_button_pane_cp018_ParamLimits

0x63e0,	// (0x00080f7b) bg_button_pane_cp021_ParamLimits

0x0b79,	// (0x0007b714) bg_button_pane_cp022_ParamLimits

0x0b88,	// (0x0007b723) bg_vkb2_func_pane_cp08_ParamLimits

0x63d4,	// (0x00080f6f) bg_vkb2_func_pane_cp06_ParamLimits

0x63e0,	// (0x00080f7b) bg_vkb2_func_pane_cp07_ParamLimits

0x0b98,	// (0x0007b733) input_focus_pane_cp09_ParamLimits

0x68dc,	// (0x00081477) cam6_autofocus_pane_ParamLimits

0x68dc,	// (0x00081477) cam6_autofocus_pane

0x68e8,	// (0x00081483) cam6_image_uncrop_pane_ParamLimits

0x68e8,	// (0x00081483) cam6_image_uncrop_pane

0x68f8,	// (0x00081493) cam6_indi_pane_ParamLimits

0x68f8,	// (0x00081493) cam6_indi_pane

0x690e,	// (0x000814a9) cam6_mode_pane_ParamLimits

0x690e,	// (0x000814a9) cam6_mode_pane

0x6920,	// (0x000814bb) cam6_timer_pane_ParamLimits

0x6920,	// (0x000814bb) cam6_timer_pane

0x692c,	// (0x000814c7) cam6_zoom_pane_ParamLimits

0x692c,	// (0x000814c7) cam6_zoom_pane

0x6939,	// (0x000814d4) cam6_mode_pane_g1_ParamLimits

0x6939,	// (0x000814d4) cam6_mode_pane_g1

0x6949,	// (0x000814e4) cam6_mode_pane_g2_ParamLimits

0x6949,	// (0x000814e4) cam6_mode_pane_g2

0x6959,	// (0x000814f4) cam6_mode_pane_g3_ParamLimits

0x6959,	// (0x000814f4) cam6_mode_pane_g3

0x6969,	// (0x00081504) cam6_mode_pane_g4_ParamLimits

0x6969,	// (0x00081504) cam6_mode_pane_g4

0x0003,

0xfa75,	// (0x0008a610) cam6_mode_pane_g_ParamLimits

0xfa75,	// (0x0008a610) cam6_mode_pane_g

0xce5e,	// (0x000879f9) bg_tb_trans_pane_cp08_ParamLimits

0xce5e,	// (0x000879f9) bg_tb_trans_pane_cp08

0xefce,	// (0x00089b69) cam6_battery_pane_ParamLimits

0xefce,	// (0x00089b69) cam6_battery_pane

0xefe4,	// (0x00089b7f) cam6_indi_pane_g1_ParamLimits

0xefe4,	// (0x00089b7f) cam6_indi_pane_g1

0xeff6,	// (0x00089b91) cam6_indi_pane_g2_ParamLimits

0xeff6,	// (0x00089b91) cam6_indi_pane_g2

0xf008,	// (0x00089ba3) cam6_indi_pane_g3_ParamLimits

0xf008,	// (0x00089ba3) cam6_indi_pane_g3

0x0002,

0xfa7e,	// (0x0008a619) cam6_indi_pane_g_ParamLimits

0xfa7e,	// (0x0008a619) cam6_indi_pane_g

0xf01a,	// (0x00089bb5) cam6_indi_pane_t1_ParamLimits

0xf01a,	// (0x00089bb5) cam6_indi_pane_t1

0x56a6,	// (0x00080241) cam6_autofocus_pane_g1

0x56ae,	// (0x00080249) cam6_autofocus_pane_g2

0x56b6,	// (0x00080251) cam6_autofocus_pane_g3

0x56be,	// (0x00080259) cam6_autofocus_pane_g4

0x0003,

0xfa85,	// (0x0008a620) cam6_autofocus_pane_g

0x6979,	// (0x00081514) cam6_timer_pane_g1

0x6981,	// (0x0008151c) cam6_timer_pane_t1

0x698f,	// (0x0008152a) cam6_zoom_cont_pane

0x6997,	// (0x00081532) cam6_zoom_pane_g1

0x69a0,	// (0x0008153b) cam6_zoom_pane_g2

0x69a9,	// (0x00081544) cam6_zoom_pane_g3

0x0002,

0xfa8e,	// (0x0008a629) cam6_zoom_pane_g

0xac4b,	// (0x000857e6) cam6_battery_pane_g1

0xac4b,	// (0x000857e6) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00089c4a) cam6_battery_pane_g

0x6997,	// (0x00081532) cam6_zoom_cont_pane_g1

0x69a0,	// (0x0008153b) cam6_zoom_cont_pane_g2

0x69b2,	// (0x0008154d) cam6_zoom_cont_pane_g3

0x0002,

0xfa95,	// (0x0008a630) cam6_zoom_cont_pane_g

0x69cc,	// (0x00081567) cam6_mode_pane_cp_ParamLimits

0x69cc,	// (0x00081567) cam6_mode_pane_cp

0x69de,	// (0x00081579) cam6_zoom_pane_cp_ParamLimits

0x69de,	// (0x00081579) cam6_zoom_pane_cp

0x69ea,	// (0x00081585) vid6_image_uncrop_cif_pane_ParamLimits

0x69ea,	// (0x00081585) vid6_image_uncrop_cif_pane

0x69fa,	// (0x00081595) vid6_image_uncrop_nhd_pane_ParamLimits

0x69fa,	// (0x00081595) vid6_image_uncrop_nhd_pane

0x6a19,	// (0x000815b4) vid6_image_uncrop_vga_pane_ParamLimits

0x6a19,	// (0x000815b4) vid6_image_uncrop_vga_pane

0x6a28,	// (0x000815c3) vid6_image_uncrop_wvga_pane_ParamLimits

0x6a28,	// (0x000815c3) vid6_image_uncrop_wvga_pane

0x6a37,	// (0x000815d2) vid6_indi_pane_ParamLimits

0x6a37,	// (0x000815d2) vid6_indi_pane

0xce5e,	// (0x000879f9) bg_tb_trans_pane_cp09_ParamLimits

0xce5e,	// (0x000879f9) bg_tb_trans_pane_cp09

0x6a4f,	// (0x000815ea) cam6_battery_pane_cp_ParamLimits

0x6a4f,	// (0x000815ea) cam6_battery_pane_cp

0x6a5b,	// (0x000815f6) vid6_indi_pane_g1_ParamLimits

0x6a5b,	// (0x000815f6) vid6_indi_pane_g1

0x6a6d,	// (0x00081608) vid6_indi_pane_g2_ParamLimits

0x6a6d,	// (0x00081608) vid6_indi_pane_g2

0x6a7f,	// (0x0008161a) vid6_indi_pane_g3_ParamLimits

0x6a7f,	// (0x0008161a) vid6_indi_pane_g3

0x6a94,	// (0x0008162f) vid6_indi_pane_g4_ParamLimits

0x6a94,	// (0x0008162f) vid6_indi_pane_g4

0x6aa9,	// (0x00081644) vid6_indi_pane_g5_ParamLimits

0x6aa9,	// (0x00081644) vid6_indi_pane_g5

0x0004,

0xfa9c,	// (0x0008a637) vid6_indi_pane_g_ParamLimits

0xfa9c,	// (0x0008a637) vid6_indi_pane_g

0x6ac3,	// (0x0008165e) vid6_indi_pane_t1_ParamLimits

0x6ac3,	// (0x0008165e) vid6_indi_pane_t1

0x6ad9,	// (0x00081674) vid6_indi_pane_t2_ParamLimits

0x6ad9,	// (0x00081674) vid6_indi_pane_t2

0x6b01,	// (0x0008169c) vid6_indi_pane_t3_ParamLimits

0x6b01,	// (0x0008169c) vid6_indi_pane_t3

0x6b29,	// (0x000816c4) vid6_indi_pane_t4_ParamLimits

0x6b29,	// (0x000816c4) vid6_indi_pane_t4

0x0003,

0xfaa7,	// (0x0008a642) vid6_indi_pane_t_ParamLimits

0xfaa7,	// (0x0008a642) vid6_indi_pane_t

0x6b4d,	// (0x000816e8) wait_bar_pane_cp08

0x6b5c,	// (0x000816f7) main_cset_text2_pane_t1_ParamLimits

0x6b5c,	// (0x000816f7) main_cset_text2_pane_t1

0x69ba,	// (0x00081555) listscroll_gen_pane_cp06_t1_ParamLimits

0x69ba,	// (0x00081555) listscroll_gen_pane_cp06_t1

0x10d4,	// (0x0007bc6f) main_cam6_set_pane

0xac05,	// (0x000857a0) bg_tb_trans_pane_cp06_ParamLimits

0xe6a9,	// (0x00089244) cam4_indicators_pane_g1_ParamLimits

0xe6ba,	// (0x00089255) cam4_indicators_pane_g2_ParamLimits

0xf81f,	// (0x0008a3ba) cam4_indicators_pane_g_ParamLimits

0xe6d8,	// (0x00089273) cam4_indicators_pane_t1_ParamLimits

0xa541,	// (0x000850dc) bg_tb_trans_pane_cp07_ParamLimits

0xe704,	// (0x0008929f) vid4_indicators_pane_g1_ParamLimits

0xe718,	// (0x000892b3) vid4_indicators_pane_g2_ParamLimits

0xe72c,	// (0x000892c7) vid4_indicators_pane_g3_ParamLimits

0xe73d,	// (0x000892d8) vid4_indicators_pane_g4_ParamLimits

0xf831,	// (0x0008a3cc) vid4_indicators_pane_g_ParamLimits

0xe75b,	// (0x000892f6) vid4_indicators_pane_t1_ParamLimits

0xeafd,	// (0x00089698) vid4_progress_pane_g1_ParamLimits

0xeb0d,	// (0x000896a8) vid4_progress_pane_g2_ParamLimits

0x6518,	// (0x000810b3) vid4_progress_pane_g3_ParamLimits

0xeb1d,	// (0x000896b8) vid4_progress_pane_g4_ParamLimits

0xf9d8,	// (0x0008a573) vid4_progress_pane_g_ParamLimits

0x652a,	// (0x000810c5) vid4_progress_pane_t1_ParamLimits

0xeb35,	// (0x000896d0) vid4_progress_pane_t2_ParamLimits

0xeb4a,	// (0x000896e5) vid4_progress_pane_t3_ParamLimits

0xf9e3,	// (0x0008a57e) vid4_progress_pane_t_ParamLimits

0x6542,	// (0x000810dd) wait_bar_pane_cp07_ParamLimits

0x6b79,	// (0x00081714) main_cam6_set_pane_g2_ParamLimits

0x6b79,	// (0x00081714) main_cam6_set_pane_g2

0x6b9d,	// (0x00081738) main_cset6_listscroll_pane_ParamLimits

0x6b9d,	// (0x00081738) main_cset6_listscroll_pane

0x6bbd,	// (0x00081758) main_cset6_slider_pane_ParamLimits

0x6bbd,	// (0x00081758) main_cset6_slider_pane

0x6bd3,	// (0x0008176e) main_cset6_text2_pane_ParamLimits

0x6bd3,	// (0x0008176e) main_cset6_text2_pane

0x6be1,	// (0x0008177c) main_cset6_text_pane

0x6be9,	// (0x00081784) main_cset_list_pane_copy1_ParamLimits

0x6be9,	// (0x00081784) main_cset_list_pane_copy1

0x6bf9,	// (0x00081794) scroll_pane_cp028_copy1

0x6c02,	// (0x0008179d) cset_list_set_pane_copy1

0x6c13,	// (0x000817ae) aid_position_infowindow_above_copy1

0x6c1b,	// (0x000817b6) aid_position_infowindow_below_copy1

0x6c23,	// (0x000817be) cset_list_set_pane_g1_copy1

0x0bbc,	// (0x0007b757) cset_list_set_pane_g3_copy1_ParamLimits

0x0bbc,	// (0x0007b757) cset_list_set_pane_g3_copy1

0x0bcb,	// (0x0007b766) cset_list_set_pane_t1_copy1_ParamLimits

0x0bcb,	// (0x0007b766) cset_list_set_pane_t1_copy1

0xa541,	// (0x000850dc) list_highlight_pane_cp021_copy1_ParamLimits

0xa541,	// (0x000850dc) list_highlight_pane_cp021_copy1

0x6c2b,	// (0x000817c6) cset6_slider_pane_ParamLimits

0x6c2b,	// (0x000817c6) cset6_slider_pane

0x6c57,	// (0x000817f2) main_cset6_slider_pane_g1_ParamLimits

0x6c57,	// (0x000817f2) main_cset6_slider_pane_g1

0x6c7f,	// (0x0008181a) main_cset6_slider_pane_g2_ParamLimits

0x6c7f,	// (0x0008181a) main_cset6_slider_pane_g2

0x6ca7,	// (0x00081842) main_cset6_slider_pane_g3_ParamLimits

0x6ca7,	// (0x00081842) main_cset6_slider_pane_g3

0x6cb3,	// (0x0008184e) main_cset6_slider_pane_g4_ParamLimits

0x6cb3,	// (0x0008184e) main_cset6_slider_pane_g4

0x6cbf,	// (0x0008185a) main_cset6_slider_pane_g5_ParamLimits

0x6cbf,	// (0x0008185a) main_cset6_slider_pane_g5

0xe908,	// (0x000894a3) main_cset6_slider_pane_g7_ParamLimits

0xe908,	// (0x000894a3) main_cset6_slider_pane_g7

0xe914,	// (0x000894af) main_cset6_slider_pane_g8_ParamLimits

0xe914,	// (0x000894af) main_cset6_slider_pane_g8

0x5d07,	// (0x000808a2) main_cset6_slider_pane_g9_ParamLimits

0x5d07,	// (0x000808a2) main_cset6_slider_pane_g9

0x5d13,	// (0x000808ae) main_cset6_slider_pane_g10_ParamLimits

0x5d13,	// (0x000808ae) main_cset6_slider_pane_g10

0x5d1f,	// (0x000808ba) main_cset6_slider_pane_g11_ParamLimits

0x5d1f,	// (0x000808ba) main_cset6_slider_pane_g11

0x5d2b,	// (0x000808c6) main_cset6_slider_pane_g12_ParamLimits

0x5d2b,	// (0x000808c6) main_cset6_slider_pane_g12

0x5d37,	// (0x000808d2) main_cset6_slider_pane_g13_ParamLimits

0x5d37,	// (0x000808d2) main_cset6_slider_pane_g13

0x5d43,	// (0x000808de) main_cset6_slider_pane_g14_ParamLimits

0x5d43,	// (0x000808de) main_cset6_slider_pane_g14

0x6ccb,	// (0x00081866) main_cset6_slider_pane_g15_ParamLimits

0x6ccb,	// (0x00081866) main_cset6_slider_pane_g15

0x5d67,	// (0x00080902) main_cset6_slider_pane_g16_ParamLimits

0x5d67,	// (0x00080902) main_cset6_slider_pane_g16

0x5d73,	// (0x0008090e) main_cset6_slider_pane_g17_ParamLimits

0x5d73,	// (0x0008090e) main_cset6_slider_pane_g17

0x0011,

0xfab0,	// (0x0008a64b) main_cset6_slider_pane_g_ParamLimits

0xfab0,	// (0x0008a64b) main_cset6_slider_pane_g

0x6cfb,	// (0x00081896) main_cset6_slider_pane_t1_ParamLimits

0x6cfb,	// (0x00081896) main_cset6_slider_pane_t1

0x6d3c,	// (0x000818d7) main_cset6_slider_pane_t2_ParamLimits

0x6d3c,	// (0x000818d7) main_cset6_slider_pane_t2

0x6d67,	// (0x00081902) main_cset6_slider_pane_t3_ParamLimits

0x6d67,	// (0x00081902) main_cset6_slider_pane_t3

0x6d92,	// (0x0008192d) main_cset6_slider_pane_t4_ParamLimits

0x6d92,	// (0x0008192d) main_cset6_slider_pane_t4

0x6dbd,	// (0x00081958) main_cset6_slider_pane_t5_ParamLimits

0x6dbd,	// (0x00081958) main_cset6_slider_pane_t5

0x6de8,	// (0x00081983) main_cset6_slider_pane_t7_ParamLimits

0x6de8,	// (0x00081983) main_cset6_slider_pane_t7

0x6e1e,	// (0x000819b9) main_cset6_slider_pane_t8_ParamLimits

0x6e1e,	// (0x000819b9) main_cset6_slider_pane_t8

0x6e42,	// (0x000819dd) main_cset6_slider_pane_t9_ParamLimits

0x6e42,	// (0x000819dd) main_cset6_slider_pane_t9

0x6e66,	// (0x00081a01) main_cset6_slider_pane_t10_ParamLimits

0x6e66,	// (0x00081a01) main_cset6_slider_pane_t10

0x6e8a,	// (0x00081a25) main_cset6_slider_pane_t11_ParamLimits

0x6e8a,	// (0x00081a25) main_cset6_slider_pane_t11

0x6eae,	// (0x00081a49) main_cset6_slider_pane_t14_ParamLimits

0x6eae,	// (0x00081a49) main_cset6_slider_pane_t14

0x6ee7,	// (0x00081a82) main_cset6_slider_pane_t15_ParamLimits

0x6ee7,	// (0x00081a82) main_cset6_slider_pane_t15

0x000b,

0xfad5,	// (0x0008a670) main_cset6_slider_pane_t_ParamLimits

0xfad5,	// (0x0008a670) main_cset6_slider_pane_t

0xea02,	// (0x0008959d) cset_slider_pane_g1_copy1

0xea0b,	// (0x000895a6) cset_slider_pane_g2_copy1

0xea14,	// (0x000895af) cset_slider_pane_g3_copy1

0x10d4,	// (0x0007bc6f) bg_popup_sub_pane_cp011_copy1

0x6f20,	// (0x00081abb) main_cset_text_pane_g1_copy1

0xead9,	// (0x00089674) main_cset_text_pane_t1_copy1

0xeae7,	// (0x00089682) main_cset_text_pane_t2_copy1

0xebef,	// (0x0008978a) main_cset_text_pane_t3_copy1

0xebfd,	// (0x00089798) main_cset_text_pane_t4_copy1

0xec0b,	// (0x000897a6) main_cset_text_pane_t5_copy1

0x6f28,	// (0x00081ac3) main_cset_text_pane_t6_copy1

0x6f36,	// (0x00081ad1) main_cset_text_pane_t7_copy1

0x6b5c,	// (0x000816f7) main_cset_text2_pane_t1_copy1

0xa541,	// (0x000850dc) main_ncimui_pane

0x3de2,	// (0x0007e97d) popup_query_ncimui_window_ParamLimits

0x3de2,	// (0x0007e97d) popup_query_ncimui_window

0xd45f,	// (0x00087ffa) field_cale_ev2_pane_g4_ParamLimits

0xd45f,	// (0x00087ffa) field_cale_ev2_pane_g4

0x500a,	// (0x0007fba5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x500a,	// (0x0007fba5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b9,	// (0x0008a354) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b9,	// (0x0008a354) cell_video_dialer_keypad_pane_g

0x5022,	// (0x0007fbbd) cell_video_dialer_keypad_pane_t1

0x10d4,	// (0x0007bc6f) bg_popup_window_pane_cp012

0xcc53,	// (0x000877ee) heading_pane_cp06

0x708b,	// (0x00081c26) ncim_query_content_pane

0x10d4,	// (0x0007bc6f) bg_popup_heading_pane_cp01

0x7093,	// (0x00081c2e) ncim_heading_pane_t1

0x70a1,	// (0x00081c3c) ncim_indicator_popup_pane

0x70b3,	// (0x00081c4e) ncim_query_button_pane

0x70d3,	// (0x00081c6e) ncim_query_content_pane_t1

0x70e5,	// (0x00081c80) ncim_query_content_pane_t2

0x0005,

0xfb19,	// (0x0008a6b4) ncim_query_content_pane_t

0x7197,	// (0x00081d32) ncim_query_list_pane

0x71a9,	// (0x00081d44) ncim_query_popup_pane

0x70a1,	// (0x00081c3c) ncim_indicator_popup_pane_ParamLimits

0x70bb,	// (0x00081c56) ncim_query_content_pane_g1_ParamLimits

0x70bb,	// (0x00081c56) ncim_query_content_pane_g1

0x70d3,	// (0x00081c6e) ncim_query_content_pane_t1_ParamLimits

0x70e5,	// (0x00081c80) ncim_query_content_pane_t2_ParamLimits

0x70f7,	// (0x00081c92) ncim_query_content_pane_t3_ParamLimits

0x70f7,	// (0x00081c92) ncim_query_content_pane_t3

0x711f,	// (0x00081cba) ncim_query_content_pane_t4_ParamLimits

0x711f,	// (0x00081cba) ncim_query_content_pane_t4

0x7147,	// (0x00081ce2) ncim_query_content_pane_t5_ParamLimits

0x7147,	// (0x00081ce2) ncim_query_content_pane_t5

0x716f,	// (0x00081d0a) ncim_query_content_pane_t6_ParamLimits

0x716f,	// (0x00081d0a) ncim_query_content_pane_t6

0xfb19,	// (0x0008a6b4) ncim_query_content_pane_t_ParamLimits

0x7197,	// (0x00081d32) ncim_query_list_pane_ParamLimits

0x71a9,	// (0x00081d44) ncim_query_popup_pane_ParamLimits

0x71bd,	// (0x00081d58) wait_bar_pane_cp04

0x10d4,	// (0x0007bc6f) input_focus_pane_cp011

0x71c5,	// (0x00081d60) ncim_query_popup_pane_t1

0x71d3,	// (0x00081d6e) ncim_list_query_list_pane_ParamLimits

0x71d3,	// (0x00081d6e) ncim_list_query_list_pane

0x10d4,	// (0x0007bc6f) bg_button_pane_cp027

0x71e0,	// (0x00081d7b) ncim_query_button_pane_g1

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp012

0x71ea,	// (0x00081d85) ncim_list_query_list_pane_g1

0x71f2,	// (0x00081d8d) ncim_list_query_list_pane_t1

0xe6c9,	// (0x00089264) cam4_indicators_pane_g3_ParamLimits

0xe6c9,	// (0x00089264) cam4_indicators_pane_g3

0xe749,	// (0x000892e4) vid4_indicators_pane_g5_ParamLimits

0xe749,	// (0x000892e4) vid4_indicators_pane_g5

0xeb29,	// (0x000896c4) vid4_progress_pane_g5_ParamLimits

0xeb29,	// (0x000896c4) vid4_progress_pane_g5

0x6f76,	// (0x00081b11) main_ncimui_pane_g1

0x6fdf,	// (0x00081b7a) ncimui_group_query_pane_ParamLimits

0x6fdf,	// (0x00081b7a) ncimui_group_query_pane

0x7027,	// (0x00081bc2) ncimui_list_pane_ParamLimits

0x7027,	// (0x00081bc2) ncimui_list_pane

0x704e,	// (0x00081be9) ncimui_text_pane_ParamLimits

0x704e,	// (0x00081be9) ncimui_text_pane

0x7200,	// (0x00081d9b) ncimui_text_pane_t1_ParamLimits

0x7200,	// (0x00081d9b) ncimui_text_pane_t1

0x721e,	// (0x00081db9) ncimui_list_single_graphic_pane_ParamLimits

0x721e,	// (0x00081db9) ncimui_list_single_graphic_pane

0x722e,	// (0x00081dc9) ncimui_query_pane_ParamLimits

0x722e,	// (0x00081dc9) ncimui_query_pane

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp013

0x7241,	// (0x00081ddc) ncim_list_query_list_pane_t1_copy1

0x71ea,	// (0x00081d85) ncim_list_single_graphic_pane_g1

0x724f,	// (0x00081dea) ncim_query_button_pane_cp01

0x725b,	// (0x00081df6) ncim_query_entry_pane_ParamLimits

0x725b,	// (0x00081df6) ncim_query_entry_pane

0x726e,	// (0x00081e09) ncimui_query_pane_g1

0x727a,	// (0x00081e15) ncimui_query_pane_t1_ParamLimits

0x727a,	// (0x00081e15) ncimui_query_pane_t1

0xa541,	// (0x000850dc) input_focus_pane_cp012

0x7293,	// (0x00081e2e) ncim_query_entry_pane_t1

0xacc3,	// (0x0008585e) main_im_pane_ParamLimits

0xa541,	// (0x000850dc) main_mobtv_pane_ParamLimits

0xa541,	// (0x000850dc) main_mobtv_pane

0x6ce3,	// (0x0008187e) main_cset6_slider_pane_g18_ParamLimits

0x6ce3,	// (0x0008187e) main_cset6_slider_pane_g18

0x6cef,	// (0x0008188a) main_cset6_slider_pane_g19_ParamLimits

0x6cef,	// (0x0008188a) main_cset6_slider_pane_g19

0xac21,	// (0x000857bc) bg_main_mobtv_pane_ParamLimits

0xac21,	// (0x000857bc) bg_main_mobtv_pane

0x72a5,	// (0x00081e40) main_mobtv_info_pane

0x72ae,	// (0x00081e49) main_mobtv_loading_pane_ParamLimits

0x72ae,	// (0x00081e49) main_mobtv_loading_pane

0x72bb,	// (0x00081e56) main_mobtv_pg_channel_list_pane

0x72c5,	// (0x00081e60) main_mobtv_pg_hdr_pane

0x72ce,	// (0x00081e69) main_mobtv_programe_curr_pane_ParamLimits

0x72ce,	// (0x00081e69) main_mobtv_programe_curr_pane

0x72db,	// (0x00081e76) main_mobtv_programe_next_pane_ParamLimits

0x72db,	// (0x00081e76) main_mobtv_programe_next_pane

0x72e8,	// (0x00081e83) popup_mobtv_noti_window

0xac4b,	// (0x000857e6) main_tv_pg_hdr_pane_g1

0x72f0,	// (0x00081e8b) main_tv_pg_hdr_pane_g2

0x72f8,	// (0x00081e93) main_tv_pg_hdr_pane_g3

0x7300,	// (0x00081e9b) main_tv_pg_hdr_pane_g4

0x7308,	// (0x00081ea3) main_tv_pg_hdr_pane_g5

0x7312,	// (0x00081ead) main_tv_pg_hdr_pane_g6

0x731c,	// (0x00081eb7) main_tv_pg_hdr_pane_g7

0x7326,	// (0x00081ec1) main_tv_pg_hdr_pane_g8

0x7330,	// (0x00081ecb) main_tv_pg_hdr_pane_g9

0x733a,	// (0x00081ed5) main_tv_pg_hdr_pane_g10

0x7344,	// (0x00081edf) main_tv_pg_hdr_pane_g11

0x000a,

0xfb26,	// (0x0008a6c1) main_tv_pg_hdr_pane_g

0x734e,	// (0x00081ee9) main_tv_pg_hdr_pane_t1

0x735c,	// (0x00081ef7) main_tv_pg_hdr_pane_t2

0x736a,	// (0x00081f05) main_tv_pg_hdr_pane_t3

0x737a,	// (0x00081f15) main_tv_pg_hdr_pane_t4

0x738a,	// (0x00081f25) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3d,	// (0x0008a6d8) main_tv_pg_hdr_pane_t

0x739a,	// (0x00081f35) single_mobtv_pg_channel_pane_ParamLimits

0x739a,	// (0x00081f35) single_mobtv_pg_channel_pane

0x73ac,	// (0x00081f47) single_mobtv_pg_channel_table_pane

0x73b5,	// (0x00081f50) single_mobtv_pg_channel_thumb_pane

0x73be,	// (0x00081f59) single_tv_pg_channel_pane_g1

0x73c7,	// (0x00081f62) single_tv_pg_channel_pane_g2

0x0001,

0xfb48,	// (0x0008a6e3) single_tv_pg_channel_pane_g

0xac05,	// (0x000857a0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xac05,	// (0x000857a0) bg_single_mobtv_pg_channel_thumb_pane

0x73d0,	// (0x00081f6b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x73d0,	// (0x00081f6b) single_mobtv_pg_channel_thumb_pane_g1

0x73de,	// (0x00081f79) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x73de,	// (0x00081f79) single_mobtv_pg_channel_thumb_pane_g2

0x73ea,	// (0x00081f85) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x73ea,	// (0x00081f85) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4d,	// (0x0008a6e8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4d,	// (0x0008a6e8) single_mobtv_pg_channel_thumb_pane_g

0x73f6,	// (0x00081f91) single_mobtv_pg_channel_thumb_pane_t1

0x7404,	// (0x00081f9f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb54,	// (0x0008a6ef) single_mobtv_pg_channel_thumb_pane_t

0xac4b,	// (0x000857e6) bg_single_mobtv_pg_channel_table_pane_g1

0xac4b,	// (0x000857e6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00089c4a) bg_single_mobtv_pg_channel_table_pane_g

0x7412,	// (0x00081fad) single_mobtv_pg_channel_table_pane_t1

0x7420,	// (0x00081fbb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb59,	// (0x0008a6f4) single_mobtv_pg_channel_table_pane_t

0x7436,	// (0x00081fd1) main_mobtv_info_pane_g1_ParamLimits

0x7436,	// (0x00081fd1) main_mobtv_info_pane_g1

0x7454,	// (0x00081fef) main_mobtv_info_pane_t1_ParamLimits

0x7454,	// (0x00081fef) main_mobtv_info_pane_t1

0x74cc,	// (0x00082067) main_mobtv_info_pane_t2_ParamLimits

0x74cc,	// (0x00082067) main_mobtv_info_pane_t2

0x0002,

0xfb63,	// (0x0008a6fe) main_mobtv_info_pane_t_ParamLimits

0xfb63,	// (0x0008a6fe) main_mobtv_info_pane_t

0x755b,	// (0x000820f6) wait_bar_pane_cp05

0x756d,	// (0x00082108) main_mobtv_loading_pane_g1_ParamLimits

0x756d,	// (0x00082108) main_mobtv_loading_pane_g1

0x7580,	// (0x0008211b) main_mobtv_loading_pane_g2_ParamLimits

0x7580,	// (0x0008211b) main_mobtv_loading_pane_g2

0x758c,	// (0x00082127) main_mobtv_loading_pane_g3_ParamLimits

0x758c,	// (0x00082127) main_mobtv_loading_pane_g3

0x0002,

0xfb6a,	// (0x0008a705) main_mobtv_loading_pane_g_ParamLimits

0xfb6a,	// (0x0008a705) main_mobtv_loading_pane_g

0x759f,	// (0x0008213a) main_mobtv_loading_pane_t1_ParamLimits

0x759f,	// (0x0008213a) main_mobtv_loading_pane_t1

0x75b7,	// (0x00082152) main_mobtv_loading_pane_t2_ParamLimits

0x75b7,	// (0x00082152) main_mobtv_loading_pane_t2

0x0001,

0xfb71,	// (0x0008a70c) main_mobtv_loading_pane_t_ParamLimits

0xfb71,	// (0x0008a70c) main_mobtv_loading_pane_t

0x75db,	// (0x00082176) wait_bar_pane_cp06_ParamLimits

0x75db,	// (0x00082176) wait_bar_pane_cp06

0x75ea,	// (0x00082185) main_mobtv_programe_curr_pane_t1

0x75f8,	// (0x00082193) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb76,	// (0x0008a711) main_mobtv_programe_curr_pane_t

0x7606,	// (0x000821a1) main_mobtv_programe_next_pane_t1

0x7614,	// (0x000821af) main_mobtv_programe_next_pane_t2

0x7622,	// (0x000821bd) main_mobtv_programe_next_pane_t3

0x0002,

0xfb7b,	// (0x0008a716) main_mobtv_programe_next_pane_t

0x10d4,	// (0x0007bc6f) bg_popup_mobtv_noti_window_pane

0x7630,	// (0x000821cb) popup_mobtv_noti_window_g1

0x7638,	// (0x000821d3) popup_mobtv_noti_window_t1

0x7646,	// (0x000821e1) popup_mobtv_noti_window_t2

0x0001,

0xfb82,	// (0x0008a71d) popup_mobtv_noti_window_t

0xac4b,	// (0x000857e6) bg_popup_mobtv_noti_window_pane_g1

0x10d4,	// (0x0007bc6f) sc_clock_pane

0x10d4,	// (0x0007bc6f) main_fs_bigclock_pane

0x6751,	// (0x000812ec) blid2_tripm_pane_t4_ParamLimits

0x6751,	// (0x000812ec) blid2_tripm_pane_t4

0xac05,	// (0x000857a0) sc_clock_pane_g1_ParamLimits

0xac05,	// (0x000857a0) sc_clock_pane_g1

0xac55,	// (0x000857f0) sc_clock_pane_t1_ParamLimits

0xac55,	// (0x000857f0) sc_clock_pane_t1

0xac55,	// (0x000857f0) sc_clock_pane_t2_ParamLimits

0xac55,	// (0x000857f0) sc_clock_pane_t2

0xac55,	// (0x000857f0) sc_clock_pane_t3_ParamLimits

0xac55,	// (0x000857f0) sc_clock_pane_t3

0x0004,

0xfb87,	// (0x0008a722) sc_clock_pane_t_ParamLimits

0xfb87,	// (0x0008a722) sc_clock_pane_t

0x869e,	// (0x00083239) main_fs_bigclock_indicator_pane_ParamLimits

0x869e,	// (0x00083239) main_fs_bigclock_indicator_pane

0x76a3,	// (0x0008223e) main_fs_bigclock_pane_g1_ParamLimits

0x76a3,	// (0x0008223e) main_fs_bigclock_pane_g1

0x86aa,	// (0x00083245) main_fs_bigclock_pane_t1_ParamLimits

0x86aa,	// (0x00083245) main_fs_bigclock_pane_t1

0x86bc,	// (0x00083257) main_fs_bigclock_pane_t2_ParamLimits

0x86bc,	// (0x00083257) main_fs_bigclock_pane_t2

0x86d0,	// (0x0008326b) main_fs_bigclock_pane_t3_ParamLimits

0x86d0,	// (0x0008326b) main_fs_bigclock_pane_t3

0x0002,

0xfd18,	// (0x0008a8b3) main_fs_bigclock_pane_t_ParamLimits

0xfd18,	// (0x0008a8b3) main_fs_bigclock_pane_t

0x86e2,	// (0x0008327d) main_fs_bigclock_indicator_pane_g1

0x70c7,	// (0x00081c62) ncim_query_content_pane_g2_ParamLimits

0x70c7,	// (0x00081c62) ncim_query_content_pane_g2

0x0001,

0xfb14,	// (0x0008a6af) ncim_query_content_pane_g_ParamLimits

0xfb14,	// (0x0008a6af) ncim_query_content_pane_g

0xac55,	// (0x000857f0) sc_clock_pane_t4_ParamLimits

0xac55,	// (0x000857f0) sc_clock_pane_t4

0xa541,	// (0x000850dc) main_radioblah_pane

0xe62f,	// (0x000891ca) cell_call4_button_pane_t1_copy1_ParamLimits

0xe62f,	// (0x000891ca) cell_call4_button_pane_t1_copy1

0x6f8e,	// (0x00081b29) main_ncimui_pane_t1_ParamLimits

0x6f8e,	// (0x00081b29) main_ncimui_pane_t1

0x6fa8,	// (0x00081b43) main_ncimui_pane_t2_ParamLimits

0x6fa8,	// (0x00081b43) main_ncimui_pane_t2

0x0002,

0xfb0d,	// (0x0008a6a8) main_ncimui_pane_t_ParamLimits

0xfb0d,	// (0x0008a6a8) main_ncimui_pane_t

0xbad0,	// (0x0008666b) main_radioblah_anim_pane_ParamLimits

0xbad0,	// (0x0008666b) main_radioblah_anim_pane

0xbad0,	// (0x0008666b) main_radioblah_info_pane_ParamLimits

0xbad0,	// (0x0008666b) main_radioblah_info_pane

0xbabc,	// (0x00086657) main_radioblah_pane_t1_ParamLimits

0xbabc,	// (0x00086657) main_radioblah_pane_t1

0xbabc,	// (0x00086657) main_radioblah_pane_t2_ParamLimits

0xbabc,	// (0x00086657) main_radioblah_pane_t2

0x0003,

0xfba8,	// (0x0008a743) main_radioblah_pane_t_ParamLimits

0xfba8,	// (0x0008a743) main_radioblah_pane_t

0xa541,	// (0x000850dc) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa541,	// (0x000850dc) main_radioblah_rocker_ctrl_pane

0xce4a,	// (0x000879e5) main_radioblah_info_pane_t1_ParamLimits

0xce4a,	// (0x000879e5) main_radioblah_info_pane_t1

0x7857,	// (0x000823f2) main_radioblah_info_pane_t2_ParamLimits

0x7857,	// (0x000823f2) main_radioblah_info_pane_t2

0x0003,

0xfbb1,	// (0x0008a74c) main_radioblah_info_pane_t_ParamLimits

0xfbb1,	// (0x0008a74c) main_radioblah_info_pane_t

0xac4b,	// (0x000857e6) main_radioblah_rocker_ctrl_pane_g1

0xac4b,	// (0x000857e6) main_radioblah_rocker_ctrl_pane_g2

0xac4b,	// (0x000857e6) main_radioblah_rocker_ctrl_pane_g3

0xac4b,	// (0x000857e6) main_radioblah_rocker_ctrl_pane_g4

0xac4b,	// (0x000857e6) main_radioblah_rocker_ctrl_pane_g5

0xac4b,	// (0x000857e6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbba,	// (0x0008a755) main_radioblah_rocker_ctrl_pane_g

0x6b5c,	// (0x000816f7) main_cset_text2_pane_t1_copy1_ParamLimits

0xe699,	// (0x00089234) cam4_image_uncrop_qvga_pane

0xe6f2,	// (0x0008928d) vid4_image_uncrop_qcif_pane

0xeb67,	// (0x00089702) cam6_image_uncrop_qvga_pane_ParamLimits

0xeb67,	// (0x00089702) cam6_image_uncrop_qvga_pane

0x6a09,	// (0x000815a4) vid6_image_uncrop_qcif_pane_ParamLimits

0x6a09,	// (0x000815a4) vid6_image_uncrop_qcif_pane

0x10d4,	// (0x0007bc6f) bg_popup_preview_window_pane_cp03

0x6f44,	// (0x00081adf) list_cset_text2_pane

0x6f4c,	// (0x00081ae7) main_cset6_text2_pane_g1

0x6f54,	// (0x00081aef) main_cset6_text2_pane_t1

0x78a6,	// (0x00082441) list_cset_text2_pane_t1_ParamLimits

0x78a6,	// (0x00082441) list_cset_text2_pane_t1

0xa541,	// (0x000850dc) main_radioblah_pane_ParamLimits

0x7547,	// (0x000820e2) main_mobtv_info_pane_t3_ParamLimits

0x7547,	// (0x000820e2) main_mobtv_info_pane_t3

0xbaae,	// (0x00086649) main_radioblah_pane_g1

0x7827,	// (0x000823c2) main_radioblah_info_pane_g1

0xac69,	// (0x00085804) main_radioblah_info_pane_t3_ParamLimits

0xac69,	// (0x00085804) main_radioblah_info_pane_t3

0x2c7a,	// (0x0007d815) highlight_cell_cale_month_pane_ParamLimits

0x2c7a,	// (0x0007d815) highlight_cell_cale_month_pane

0x10d4,	// (0x0007bc6f) main_phob_fisheye_pane

0xd500,	// (0x0008809b) scroll_pane_cp0031_ParamLimits

0xd500,	// (0x0008809b) scroll_pane_cp0031

0x6b4d,	// (0x000816e8) wait_bar_pane_cp08_ParamLimits

0x6c02,	// (0x0008179d) cset_list_set_pane_copy1_ParamLimits

0x78bf,	// (0x0008245a) highlight_cell_cale_month_pane_g1

0x78c7,	// (0x00082462) highlight_cell_cale_month_pane_t1

0xedff,	// (0x0008999a) list_gen_pane_cp01

0xe8f3,	// (0x0008948e) scroll_pane_01

0x78d5,	// (0x00082470) list_single_double_fisheye_pane

0x0bfd,	// (0x0007b798) list_double_fisheye_pane_g1_ParamLimits

0x0bfd,	// (0x0007b798) list_double_fisheye_pane_g1

0x0c09,	// (0x0007b7a4) list_double_fisheye_pane_g2_ParamLimits

0x0c09,	// (0x0007b7a4) list_double_fisheye_pane_g2

0x78de,	// (0x00082479) list_double_fisheye_pane_g3_ParamLimits

0x78de,	// (0x00082479) list_double_fisheye_pane_g3

0x0004,

0xfbc7,	// (0x0008a762) list_double_fisheye_pane_g_ParamLimits

0xfbc7,	// (0x0008a762) list_double_fisheye_pane_g

0x0c3a,	// (0x0007b7d5) list_double_fisheye_pane_t1_ParamLimits

0x0c3a,	// (0x0007b7d5) list_double_fisheye_pane_t1

0x0c55,	// (0x0007b7f0) list_double_fisheye_pane_t2_ParamLimits

0x0c55,	// (0x0007b7f0) list_double_fisheye_pane_t2

0x0001,

0xfbd2,	// (0x0008a76d) list_double_fisheye_pane_t_ParamLimits

0xfbd2,	// (0x0008a76d) list_double_fisheye_pane_t

0x10d4,	// (0x0007bc6f) main_call5_pane

0xa541,	// (0x000850dc) sc_swipe_pane_ParamLimits

0xa541,	// (0x000850dc) sc_swipe_pane

0x78fd,	// (0x00082498) call5_image_pane_ParamLimits

0x78fd,	// (0x00082498) call5_image_pane

0x791a,	// (0x000824b5) call5_swipe_1_pane_ParamLimits

0x791a,	// (0x000824b5) call5_swipe_1_pane

0x792d,	// (0x000824c8) call5_swipe_2_pane_ParamLimits

0x792d,	// (0x000824c8) call5_swipe_2_pane

0x7958,	// (0x000824f3) popup_call5_audio_first_window_ParamLimits

0x7958,	// (0x000824f3) popup_call5_audio_first_window

0xac05,	// (0x000857a0) call5_swipe_1_pane_g1_ParamLimits

0xac05,	// (0x000857a0) call5_swipe_1_pane_g1

0x7969,	// (0x00082504) call5_swipe_1_pane_g2_ParamLimits

0x7969,	// (0x00082504) call5_swipe_1_pane_g2

0x0001,

0xfbd7,	// (0x0008a772) call5_swipe_1_pane_g_ParamLimits

0xfbd7,	// (0x0008a772) call5_swipe_1_pane_g

0x7975,	// (0x00082510) call5_swipe_1_pane_t1_ParamLimits

0x7975,	// (0x00082510) call5_swipe_1_pane_t1

0xac05,	// (0x000857a0) call5_swipe_2_pane_g1_ParamLimits

0xac05,	// (0x000857a0) call5_swipe_2_pane_g1

0x798a,	// (0x00082525) call5_swipe_2_pane_g2_ParamLimits

0x798a,	// (0x00082525) call5_swipe_2_pane_g2

0x0001,

0xfbdc,	// (0x0008a777) call5_swipe_2_pane_g_ParamLimits

0xfbdc,	// (0x0008a777) call5_swipe_2_pane_g

0x7996,	// (0x00082531) call5_swipe_2_pane_t1_ParamLimits

0x7996,	// (0x00082531) call5_swipe_2_pane_t1

0xac05,	// (0x000857a0) sc_swipe_pane_g1_ParamLimits

0xac05,	// (0x000857a0) sc_swipe_pane_g1

0xac13,	// (0x000857ae) sc_swipe_pane_g2_ParamLimits

0xac13,	// (0x000857ae) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x0008a2f0) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x0008a2f0) sc_swipe_pane_g

0xac55,	// (0x000857f0) sc_swipe_pane_t1_ParamLimits

0xac55,	// (0x000857f0) sc_swipe_pane_t1

0x10d4,	// (0x0007bc6f) main_cmail_launcher_pane

0x79ab,	// (0x00082546) aid_size_cell_cmail_l_ParamLimits

0x79ab,	// (0x00082546) aid_size_cell_cmail_l

0x79b9,	// (0x00082554) grid_cmail_l_pane_ParamLimits

0x79b9,	// (0x00082554) grid_cmail_l_pane

0x79d3,	// (0x0008256e) cell_cmail_l_pane_ParamLimits

0x79d3,	// (0x0008256e) cell_cmail_l_pane

0x79ed,	// (0x00082588) cell_cmail_l_pane_g1_ParamLimits

0x79ed,	// (0x00082588) cell_cmail_l_pane_g1

0x79f9,	// (0x00082594) cell_cmail_l_pane_t1_ParamLimits

0x79f9,	// (0x00082594) cell_cmail_l_pane_t1

0x7a0f,	// (0x000825aa) cell_cmail_l_pane_t2_ParamLimits

0x7a0f,	// (0x000825aa) cell_cmail_l_pane_t2

0x0001,

0xfbe1,	// (0x0008a77c) cell_cmail_l_pane_t_ParamLimits

0xfbe1,	// (0x0008a77c) cell_cmail_l_pane_t

0xa541,	// (0x000850dc) grid_highlight_pane_cp018_ParamLimits

0xa541,	// (0x000850dc) grid_highlight_pane_cp018

0x11a4,	// (0x0007bd3f) main2_pane_ParamLimits

0x11a4,	// (0x0007bd3f) main2_pane

0xad7f,	// (0x0008591a) popup_sp_fs_action_menu_bg_pane_g1

0xad87,	// (0x00085922) popup_sp_fs_action_menu_bg_pane_g2

0xad8f,	// (0x0008592a) popup_sp_fs_action_menu_bg_pane_g3

0xad97,	// (0x00085932) popup_sp_fs_action_menu_bg_pane_g4

0xad9f,	// (0x0008593a) popup_sp_fs_action_menu_bg_pane_g5

0xada7,	// (0x00085942) popup_sp_fs_action_menu_bg_pane_g6

0xadaf,	// (0x0008594a) popup_sp_fs_action_menu_bg_pane_g7

0xadb7,	// (0x00085952) popup_sp_fs_action_menu_bg_pane_g8

0xadbf,	// (0x0008595a) popup_sp_fs_action_menu_bg_pane_g9

0xadc7,	// (0x00085962) popup_sp_fs_action_menu_bg_pane_g10

0xadc7,	// (0x00085962) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00089c9b) popup_sp_fs_action_menu_bg_pane_g

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g3_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g3_g1

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g3_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g3_g2

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g3_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00089d49) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00089d49) list_medium_line_x2_t3_g3_g

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g3_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g3_t1

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g3_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g3_t2

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g3_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00089d50) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00089d50) list_medium_line_x2_t3_g3_t

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g2_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g2_g1

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g2_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00089d57) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00089d57) list_medium_line_x2_t3_g2_g

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g2_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g2_t1

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g2_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g2_t2

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g2_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00089d50) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00089d50) list_medium_line_x2_t3_g2_t

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g4_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g4_g1

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g4_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g4_g2

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g4_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g4_g3

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g4_g4_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00089d5c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00089d5c) list_medium_line_x2_t4_g4_g

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g4_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g4_t1

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g4_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g4_t2

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g4_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g4_t3

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g4_t4_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00089d65) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00089d65) list_medium_line_x2_t4_g4_t

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g4_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g4_g1

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g4_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g4_g2

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g4_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g4_g3

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g4_g4_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00089d5c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00089d5c) list_medium_line_x2_t2_g4_g

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g4_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g4_t1

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g4_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x00089d2c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x00089d2c) list_medium_line_x2_t2_g4_t

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g3_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g3_g1

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g3_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g3_g2

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g3_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00089d49) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00089d49) list_medium_line_x2_t2_g3_g

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g3_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g3_t1

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g3_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x00089d2c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x00089d2c) list_medium_line_x2_t2_g3_t

0x2dcc,	// (0x0007d967) main_sp_fs_list_pane_ParamLimits

0x2dcc,	// (0x0007d967) main_sp_fs_list_pane

0xebe3,	// (0x0008977e) sp_fs_scroll_pane_ParamLimits

0xebe3,	// (0x0008977e) sp_fs_scroll_pane

0xb483,	// (0x0008601e) list_medium_line_x2_t3_t1

0xb483,	// (0x0008601e) list_medium_line_x2_t3_t2

0xb483,	// (0x0008601e) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x00089e12) list_medium_line_x2_t3_t

0xb483,	// (0x0008601e) list_medium_line_x3_t4_t1

0xb483,	// (0x0008601e) list_medium_line_x3_t4_t2

0xb483,	// (0x0008601e) list_medium_line_x3_t4_t3

0xb483,	// (0x0008601e) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x00089e19) list_medium_line_x3_t4_t

0xb483,	// (0x0008601e) list_medium_line_x4_t5_t1

0xb483,	// (0x0008601e) list_medium_line_x4_t5_t2

0xb483,	// (0x0008601e) list_medium_line_x4_t5_t3

0xb483,	// (0x0008601e) list_medium_line_x4_t5_t4

0xb483,	// (0x0008601e) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x00089e22) list_medium_line_x4_t5_t

0xac05,	// (0x000857a0) list_medium_line_t4_g4_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t4_g4_g1

0xac05,	// (0x000857a0) list_medium_line_t4_g4_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t4_g4_g2

0xac05,	// (0x000857a0) list_medium_line_t4_g4_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t4_g4_g3

0xac05,	// (0x000857a0) list_medium_line_t4_g4_g4_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00089d5c) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00089d5c) list_medium_line_t4_g4_g

0xac55,	// (0x000857f0) list_medium_line_t4_g4_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t4_g4_t1

0xac55,	// (0x000857f0) list_medium_line_t4_g4_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t4_g4_t2

0xac55,	// (0x000857f0) list_medium_line_t4_g4_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t4_g4_t3

0xac55,	// (0x000857f0) list_medium_line_t4_g4_t4_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00089d65) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00089d65) list_medium_line_t4_g4_t

0x2e67,	// (0x0007da02) chi_dic_find_pane_g1

0x3bac,	// (0x0007e747) main_tport_pane

0xb483,	// (0x0008601e) list_medium_line_plain_t1

0xac05,	// (0x000857a0) list_medium_line_t2_g2_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t2_g2_g1

0xac05,	// (0x000857a0) list_medium_line_t2_g2_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00089d57) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00089d57) list_medium_line_t2_g2_g

0xac55,	// (0x000857f0) list_medium_line_t2_g2_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t2_g2_t1

0xac55,	// (0x000857f0) list_medium_line_t2_g2_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x00089d2c) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x00089d2c) list_medium_line_t2_g2_t

0xdcde,	// (0x00088879) aid_sp_fs_list_icon_a_sm

0xeb5f,	// (0x000896fa) aid_sp_fs_list_icon_d

0xee08,	// (0x000899a3) aid_sp_fs_text_primary

0xdce6,	// (0x00088881) aid_sp_fs_text_secondary

0x10d4,	// (0x0007bc6f) list_medium_line

0x10d4,	// (0x0007bc6f) list_medium_line_g2

0x10d4,	// (0x0007bc6f) list_medium_line_g3

0x10d4,	// (0x0007bc6f) list_medium_line_plain

0x10d4,	// (0x0007bc6f) list_medium_line_plain_t2

0x10d4,	// (0x0007bc6f) list_medium_line_plain_t3

0x10d4,	// (0x0007bc6f) list_medium_line_right_icon

0x10d4,	// (0x0007bc6f) list_medium_line_right_iconx2

0x10d4,	// (0x0007bc6f) list_medium_line_t2

0x10d4,	// (0x0007bc6f) list_medium_line_t2_g2

0x10d4,	// (0x0007bc6f) list_medium_line_t2_g3

0x10d4,	// (0x0007bc6f) list_medium_line_t2_right_icon

0x10d4,	// (0x0007bc6f) list_medium_line_t2_right_iconx2

0x10d4,	// (0x0007bc6f) list_medium_line_t3

0x10d4,	// (0x0007bc6f) list_medium_line_t3_g2

0x10d4,	// (0x0007bc6f) list_medium_line_t3_g3

0x10d4,	// (0x0007bc6f) list_medium_line_t3_right_iconx2

0x10d4,	// (0x0007bc6f) list_medium_line_t4_g4

0x10d4,	// (0x0007bc6f) list_medium_line_x2

0x10d4,	// (0x0007bc6f) list_medium_line_x2_t2_g2

0x10d4,	// (0x0007bc6f) list_medium_line_x2_t2_g3

0x10d4,	// (0x0007bc6f) list_medium_line_x2_t2_g4

0x10d4,	// (0x0007bc6f) list_medium_line_x2_t3

0x10d4,	// (0x0007bc6f) list_medium_line_x2_t3_g2

0x10d4,	// (0x0007bc6f) list_medium_line_x2_t3_g3

0x10d4,	// (0x0007bc6f) list_medium_line_x2_t3_g4

0x10d4,	// (0x0007bc6f) list_medium_line_x2_t4_g2

0x10d4,	// (0x0007bc6f) list_medium_line_x2_t4_g4

0x10d4,	// (0x0007bc6f) list_medium_line_x3

0x10d4,	// (0x0007bc6f) list_medium_line_x3_t4

0x10d4,	// (0x0007bc6f) list_medium_line_x3_t4_g4

0x10d4,	// (0x0007bc6f) list_medium_line_x4_t4

0x10d4,	// (0x0007bc6f) list_medium_line_x4_t4_g7

0x10d4,	// (0x0007bc6f) list_medium_line_x4_t5

0x0ba8,	// (0x0007b743) list_single_fs_dyc_pane_ParamLimits

0x0ba8,	// (0x0007b743) list_single_fs_dyc_pane

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g1

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g2

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g3

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g4_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g4

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g5_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g5

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g6_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x4_t4_g7_g6

0xac13,	// (0x000857ae) list_medium_line_x4_t4_g7_g7_ParamLimits

0xac13,	// (0x000857ae) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaee,	// (0x0008a689) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaee,	// (0x0008a689) list_medium_line_x4_t4_g7_g

0xac55,	// (0x000857f0) list_medium_line_x4_t4_g7_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x4_t4_g7_t1

0xac55,	// (0x000857f0) list_medium_line_x4_t4_g7_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x4_t4_g7_t2

0xac55,	// (0x000857f0) list_medium_line_x4_t4_g7_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x4_t4_g7_t3

0xac69,	// (0x00085804) list_medium_line_x4_t4_g7_t4_ParamLimits

0xac69,	// (0x00085804) list_medium_line_x4_t4_g7_t4

0xac69,	// (0x00085804) list_medium_line_x4_t4_g7_t5_ParamLimits

0xac69,	// (0x00085804) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafd,	// (0x0008a698) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafd,	// (0x0008a698) list_medium_line_x4_t4_g7_t

0x0be0,	// (0x0007b77b) list_single_dyc_row_pane_ParamLimits

0x0be0,	// (0x0007b77b) list_single_dyc_row_pane

0x78ea,	// (0x00082485) call5_gesture_pane_ParamLimits

0x78ea,	// (0x00082485) call5_gesture_pane

0x7940,	// (0x000824db) call5_windows_pane_ParamLimits

0x7940,	// (0x000824db) call5_windows_pane

0x7a2c,	// (0x000825c7) call5_swipe_1_pane_cp_ParamLimits

0x7a2c,	// (0x000825c7) call5_swipe_1_pane_cp

0x7a38,	// (0x000825d3) call5_swipe_2_pane_cp_ParamLimits

0x7a38,	// (0x000825d3) call5_swipe_2_pane_cp

0xaf08,	// (0x00085aa3) call5_image_pane_cp

0x7a44,	// (0x000825df) popup_call5_audio_first_window_cp_ParamLimits

0x7a44,	// (0x000825df) popup_call5_audio_first_window_cp

0x7a52,	// (0x000825ed) call5_swipe_1_pane_g1_cp_ParamLimits

0x7a52,	// (0x000825ed) call5_swipe_1_pane_g1_cp

0x7a5f,	// (0x000825fa) call5_swipe_1_pane_g2_cp

0x7a67,	// (0x00082602) call5_swipe_1_pane_t1_cp_ParamLimits

0x7a67,	// (0x00082602) call5_swipe_1_pane_t1_cp

0x7a52,	// (0x000825ed) call5_swipe_2_pane_g1_cp_ParamLimits

0x7a52,	// (0x000825ed) call5_swipe_2_pane_g1_cp

0x7a7c,	// (0x00082617) call5_swipe_2_pane_g2_cp

0x7a84,	// (0x0008261f) call5_swipe_2_pane_t1_cp_ParamLimits

0x7a84,	// (0x0008261f) call5_swipe_2_pane_t1_cp

0xa541,	// (0x000850dc) main_sp_fs_email_pane

0x7a99,	// (0x00082634) main_sp_fs_listscroll_pane_te

0xeb75,	// (0x00089710) popup_sp_fs_action_menu_pane_ParamLimits

0xeb75,	// (0x00089710) popup_sp_fs_action_menu_pane

0xac4b,	// (0x000857e6) bg_sp_fs_ctrlbar_pane_g1

0x7aa2,	// (0x0008263d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x7aab,	// (0x00082646) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x7ab4,	// (0x0008264f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xac4b,	// (0x000857e6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe6,	// (0x0008a781) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xce6c,	// (0x00087a07) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xce6c,	// (0x00087a07) bg_sp_fs_ctrlbar_ddmenu_pane

0x7abd,	// (0x00082658) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x7abd,	// (0x00082658) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x7ac9,	// (0x00082664) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x7ac9,	// (0x00082664) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbef,	// (0x0008a78a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbef,	// (0x0008a78a) main_sp_fs_ctrlbar_ddmenu_pane_g

0x7ad5,	// (0x00082670) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x7ad5,	// (0x00082670) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xac4b,	// (0x000857e6) list_medium_line_t2_right_icon_g1

0xb483,	// (0x0008601e) list_medium_line_t2_right_icon_t1

0xb483,	// (0x0008601e) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf4,	// (0x0008a78f) list_medium_line_t2_right_icon_t

0xbad0,	// (0x0008666b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbad0,	// (0x0008666b) bg_sp_fs_ctrlbar_pane

0x7b6f,	// (0x0008270a) main_sp_fs_ctrlbar_button_pane_cp01

0x7b79,	// (0x00082714) main_sp_fs_ctrlbar_ddmenu_pane

0x7b83,	// (0x0008271e) main_sp_fs_ctrlbar_pane_g1

0x7b8f,	// (0x0008272a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbf9,	// (0x0008a794) main_sp_fs_ctrlbar_pane_g

0x7bcf,	// (0x0008276a) main_sp_fs_ctrlbar_pane_t1

0x7c0e,	// (0x000827a9) main_sp_fs_ctrlbar_pane

0x7c4d,	// (0x000827e8) main_sp_fs_listscroll_pane_te_cp01

0x0c77,	// (0x0007b812) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0c77,	// (0x0007b812) popup_sp_fs_action_menu_pane_cp01

0xa541,	// (0x000850dc) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa541,	// (0x000850dc) bg_sp_fs_highlight_list_pane_cp01

0xdcef,	// (0x0008888a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdcef,	// (0x0008888a) sp_fs_action_menu_list_gene_pane_g1

0x7c77,	// (0x00082812) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x7c77,	// (0x00082812) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc07,	// (0x0008a7a2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc07,	// (0x0008a7a2) sp_fs_action_menu_list_gene_pane_g

0xdcfe,	// (0x00088899) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdcfe,	// (0x00088899) sp_fs_action_menu_list_gene_pane_t1

0xdd16,	// (0x000888b1) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdd16,	// (0x000888b1) sp_fs_action_menu_list_gene_pane

0x7c84,	// (0x0008281f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x7c84,	// (0x0008281f) popup_sp_fs_action_menu_bg_pane

0xdd37,	// (0x000888d2) sp_fs_action_menu_list_pane_ParamLimits

0xdd37,	// (0x000888d2) sp_fs_action_menu_list_pane

0xdd59,	// (0x000888f4) sp_fs_scroll_pane_cp01_ParamLimits

0xdd59,	// (0x000888f4) sp_fs_scroll_pane_cp01

0xb483,	// (0x0008601e) list_medium_line_plain_t2_t1

0xb483,	// (0x0008601e) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x0008a78f) list_medium_line_plain_t2_t

0xb483,	// (0x0008601e) list_medium_line_plain_t3_t1

0xb483,	// (0x0008601e) list_medium_line_plain_t3_t2

0xb483,	// (0x0008601e) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x00089e12) list_medium_line_plain_t3_t

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g2_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g2_g1

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g2_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00089d57) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00089d57) list_medium_line_x2_t2_g2_g

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g2_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g2_t1

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g2_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x00089d2c) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x00089d2c) list_medium_line_x2_t2_g2_t

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g2_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g2_g1

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g2_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00089d57) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00089d57) list_medium_line_x2_t4_g2_g

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g2_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g2_t1

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g2_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g2_t2

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g2_t3

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g2_t4_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00089d65) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00089d65) list_medium_line_x2_t4_g2_t

0xac4b,	// (0x000857e6) list_medium_line_t3_right_iconx2_g1

0xac4b,	// (0x000857e6) list_medium_line_t3_right_iconx2_g2

0xac4b,	// (0x000857e6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x00089f2e) list_medium_line_t3_right_iconx2_g

0xb483,	// (0x0008601e) list_medium_line_t3_right_iconx2_t1

0xb483,	// (0x0008601e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf4,	// (0x0008a78f) list_medium_line_t3_right_iconx2_t

0xac05,	// (0x000857a0) list_medium_line_x3_t4_g4_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x3_t4_g4_g1

0xac05,	// (0x000857a0) list_medium_line_x3_t4_g4_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x3_t4_g4_g2

0xac05,	// (0x000857a0) list_medium_line_x3_t4_g4_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x3_t4_g4_g3

0xac05,	// (0x000857a0) list_medium_line_x3_t4_g4_g4_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00089d5c) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00089d5c) list_medium_line_x3_t4_g4_g

0xac55,	// (0x000857f0) list_medium_line_x3_t4_g4_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x3_t4_g4_t1

0xac55,	// (0x000857f0) list_medium_line_x3_t4_g4_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x3_t4_g4_t2

0xac55,	// (0x000857f0) list_medium_line_x3_t4_g4_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x3_t4_g4_t3

0xac55,	// (0x000857f0) list_medium_line_x3_t4_g4_t4_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00089d65) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00089d65) list_medium_line_x3_t4_g4_t

0x0c9c,	// (0x0007b837) list_single_dyc_row_text_pane_t1_ParamLimits

0x0c9c,	// (0x0007b837) list_single_dyc_row_text_pane_t1

0x0ce5,	// (0x0007b880) list_single_dyc_row_text_pane_t2_ParamLimits

0x0ce5,	// (0x0007b880) list_single_dyc_row_text_pane_t2

0xdd7f,	// (0x0008891a) list_single_dyc_row_text_pane_t3_ParamLimits

0xdd7f,	// (0x0008891a) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0c,	// (0x0008a7a7) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0c,	// (0x0008a7a7) list_single_dyc_row_text_pane_t

0xdda3,	// (0x0008893e) list_single_dyc_row_pane_g1_ParamLimits

0xdda3,	// (0x0008893e) list_single_dyc_row_pane_g1

0xddaf,	// (0x0008894a) list_single_dyc_row_pane_g2_ParamLimits

0xddaf,	// (0x0008894a) list_single_dyc_row_pane_g2

0xddbb,	// (0x00088956) list_single_dyc_row_pane_g3_ParamLimits

0xddbb,	// (0x00088956) list_single_dyc_row_pane_g3

0xddc7,	// (0x00088962) list_single_dyc_row_pane_g4_ParamLimits

0xddc7,	// (0x00088962) list_single_dyc_row_pane_g4

0x0003,

0xfc19,	// (0x0008a7b4) list_single_dyc_row_pane_g_ParamLimits

0xfc19,	// (0x0008a7b4) list_single_dyc_row_pane_g

0xddd3,	// (0x0008896e) list_single_dyc_row_text_pane_ParamLimits

0xddd3,	// (0x0008896e) list_single_dyc_row_text_pane

0x10d4,	// (0x0007bc6f) bg_sp_fs_scroll_pane

0x7c92,	// (0x0008282d) thumb_sp_fs_scroll_pane

0xac05,	// (0x000857a0) list_medium_line_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_g1

0xac55,	// (0x000857f0) list_medium_line_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t1

0xac05,	// (0x000857a0) list_medium_line_x2_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_g1

0xac05,	// (0x000857a0) list_medium_line_x2_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00089d57) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00089d57) list_medium_line_x2_g

0xac55,	// (0x000857f0) list_medium_line_x2_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t1

0xac05,	// (0x000857a0) list_medium_line_x3_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x3_g1

0x7c9b,	// (0x00082836) list_medium_line_x3_g2_ParamLimits

0x7c9b,	// (0x00082836) list_medium_line_x3_g2

0x0001,

0xfc22,	// (0x0008a7bd) list_medium_line_x3_g_ParamLimits

0xfc22,	// (0x0008a7bd) list_medium_line_x3_g

0x7ca9,	// (0x00082844) list_medium_line_x3_t1_ParamLimits

0x7ca9,	// (0x00082844) list_medium_line_x3_t1

0x7cbd,	// (0x00082858) thumb_sp_fs_scroll_pane_g1

0x7cc6,	// (0x00082861) thumb_sp_fs_scroll_pane_g2

0x7ccf,	// (0x0008286a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x0008a7c2) thumb_sp_fs_scroll_pane_g

0x7cbd,	// (0x00082858) bg_sp_fs_scroll_pane_g1

0x7cc6,	// (0x00082861) bg_sp_fs_scroll_pane_g2

0x7ccf,	// (0x0008286a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x0008a7c2) bg_sp_fs_scroll_pane_g

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g4_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g4_g1

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g4_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g4_g2

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g4_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g4_g3

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g4_g4_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00089d5c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00089d5c) list_medium_line_x2_t3_g4_g

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g4_t1

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g4_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g4_t2

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g4_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00089d50) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00089d50) list_medium_line_x2_t3_g4_t

0xac05,	// (0x000857a0) list_medium_line_g2_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_g2_g1

0xac05,	// (0x000857a0) list_medium_line_g2_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00089d57) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00089d57) list_medium_line_g2_g

0xac55,	// (0x000857f0) list_medium_line_g2_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_g2_t1

0xac05,	// (0x000857a0) list_medium_line_t3_g2_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t3_g2_g1

0xac05,	// (0x000857a0) list_medium_line_t3_g2_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00089d57) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00089d57) list_medium_line_t3_g2_g

0xac55,	// (0x000857f0) list_medium_line_t3_g2_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t3_g2_t1

0xac55,	// (0x000857f0) list_medium_line_t3_g2_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t3_g2_t2

0xac55,	// (0x000857f0) list_medium_line_t3_g2_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00089d50) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00089d50) list_medium_line_t3_g2_t

0xac4b,	// (0x000857e6) list_medium_line_right_icon_g1

0xb483,	// (0x0008601e) list_medium_line_right_icon_t1

0xac05,	// (0x000857a0) list_medium_line_t2_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t2_g1

0xac55,	// (0x000857f0) list_medium_line_t2_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t2_t1

0xac55,	// (0x000857f0) list_medium_line_t2_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x00089d2c) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x00089d2c) list_medium_line_t2_t

0xac05,	// (0x000857a0) list_medium_line_t3_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t3_g1

0xac55,	// (0x000857f0) list_medium_line_t3_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t3_t1

0xac55,	// (0x000857f0) list_medium_line_t3_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t3_t2

0xac55,	// (0x000857f0) list_medium_line_t3_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00089d50) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00089d50) list_medium_line_t3_t

0xac05,	// (0x000857a0) list_medium_line_g3_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_g3_g1

0xac05,	// (0x000857a0) list_medium_line_g3_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_g3_g2

0xac05,	// (0x000857a0) list_medium_line_g3_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00089d49) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00089d49) list_medium_line_g3_g

0xac55,	// (0x000857f0) list_medium_line_g3_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_g3_t1

0xac05,	// (0x000857a0) list_medium_line_t2_g3_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t2_g3_g1

0xac05,	// (0x000857a0) list_medium_line_t2_g3_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t2_g3_g2

0xac05,	// (0x000857a0) list_medium_line_t2_g3_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00089d49) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00089d49) list_medium_line_t2_g3_g

0xac55,	// (0x000857f0) list_medium_line_t2_g3_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t2_g3_t1

0xac55,	// (0x000857f0) list_medium_line_t2_g3_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x00089d2c) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x00089d2c) list_medium_line_t2_g3_t

0xac05,	// (0x000857a0) list_medium_line_t3_g3_g1_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t3_g3_g1

0xac05,	// (0x000857a0) list_medium_line_t3_g3_g2_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t3_g3_g2

0xac05,	// (0x000857a0) list_medium_line_t3_g3_g3_ParamLimits

0xac05,	// (0x000857a0) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00089d49) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00089d49) list_medium_line_t3_g3_g

0xac55,	// (0x000857f0) list_medium_line_t3_g3_t1_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t3_g3_t1

0xac55,	// (0x000857f0) list_medium_line_t3_g3_t2_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t3_g3_t2

0xac55,	// (0x000857f0) list_medium_line_t3_g3_t3_ParamLimits

0xac55,	// (0x000857f0) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00089d50) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00089d50) list_medium_line_t3_g3_t

0xac4b,	// (0x000857e6) list_medium_line_right_iconx2_g1

0xac4b,	// (0x000857e6) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00089c4a) list_medium_line_right_iconx2_g

0xb483,	// (0x0008601e) list_medium_line_right_iconx2_t1

0xac4b,	// (0x000857e6) list_medium_line_t2_right_iconx2_g1

0xac4b,	// (0x000857e6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00089c4a) list_medium_line_t2_right_iconx2_g

0xb483,	// (0x0008601e) list_medium_line_t2_right_iconx2_t1

0xb483,	// (0x0008601e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf4,	// (0x0008a78f) list_medium_line_t2_right_iconx2_t

0xb483,	// (0x0008601e) list_medium_line_x4_t4_t1

0xb483,	// (0x0008601e) list_medium_line_x4_t4_t2

0xb483,	// (0x0008601e) list_medium_line_x4_t4_t3

0xb483,	// (0x0008601e) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x00089e19) list_medium_line_x4_t4_t

0x7d1b,	// (0x000828b6) tport_appsw_pane_ParamLimits

0x7d1b,	// (0x000828b6) tport_appsw_pane

0x7d33,	// (0x000828ce) tport_contact_pane_ParamLimits

0x7d33,	// (0x000828ce) tport_contact_pane

0x7d4b,	// (0x000828e6) tport_listscroll_pane_ParamLimits

0x7d4b,	// (0x000828e6) tport_listscroll_pane

0x7d65,	// (0x00082900) cell_tport_appsw_pane_ParamLimits

0x7d65,	// (0x00082900) cell_tport_appsw_pane

0xbaae,	// (0x00086649) tport_appsw_pane_g1_ParamLimits

0xbaae,	// (0x00086649) tport_appsw_pane_g1

0x7da5,	// (0x00082940) tport_contact_pane_g1

0x71c5,	// (0x00081d60) tport_contact_pane_t1

0x7dae,	// (0x00082949) tport_contact_pane_t2

0x0001,

0xfc2e,	// (0x0008a7c9) tport_contact_pane_t

0x7dbc,	// (0x00082957) list_tport_pane

0x7dc5,	// (0x00082960) scroll_pane_cp_030

0x7dd6,	// (0x00082971) cell_tport_appsw_pane_g1

0x7de6,	// (0x00082981) cell_tport_appsw_pane_t1

0x7df4,	// (0x0008298f) grid_highlight_pane_cp019

0x7dfc,	// (0x00082997) list_tport_double_graphic_pane_ParamLimits

0x7dfc,	// (0x00082997) list_tport_double_graphic_pane

0xa541,	// (0x000850dc) list_highlight_pane_cp023_ParamLimits

0xa541,	// (0x000850dc) list_highlight_pane_cp023

0x7e09,	// (0x000829a4) list_tport_double_graphic_pane_g1_ParamLimits

0x7e09,	// (0x000829a4) list_tport_double_graphic_pane_g1

0x7e16,	// (0x000829b1) list_tport_double_graphic_pane_t1_ParamLimits

0x7e16,	// (0x000829b1) list_tport_double_graphic_pane_t1

0x7e2b,	// (0x000829c6) list_tport_double_graphic_pane_t2_ParamLimits

0x7e2b,	// (0x000829c6) list_tport_double_graphic_pane_t2

0x0001,

0xfc3a,	// (0x0008a7d5) list_tport_double_graphic_pane_t_ParamLimits

0xfc3a,	// (0x0008a7d5) list_tport_double_graphic_pane_t

0x10d4,	// (0x0007bc6f) main_cale_note_pane

0x58a6,	// (0x00080441) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x58a6,	// (0x00080441) cell_vitu2_function_top_wide_pane_cp01

0x755b,	// (0x000820f6) wait_bar_pane_cp05_ParamLimits

0xa541,	// (0x000850dc) listscroll_cmail_pane

0x7e45,	// (0x000829e0) list_cmail_pane

0x7e5c,	// (0x000829f7) list_cmail_body_pane

0x7e71,	// (0x00082a0c) list_single_cmail_header_caption_pane

0x7e87,	// (0x00082a22) list_single_cmail_header_detail_pane_ParamLimits

0x7e87,	// (0x00082a22) list_single_cmail_header_detail_pane

0x7eb4,	// (0x00082a4f) list_single_cmail_header_caption_pane_t1

0x0e1a,	// (0x0007b9b5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e1a,	// (0x0007b9b5) list_single_cmail_header_detail_pane_g1

0xebb9,	// (0x00089754) list_single_cmail_header_detail_pane_g2_ParamLimits

0xebb9,	// (0x00089754) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc3f,	// (0x0008a7da) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc3f,	// (0x0008a7da) list_single_cmail_header_detail_pane_g

0x0e32,	// (0x0007b9cd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0e32,	// (0x0007b9cd) list_single_cmail_header_detail_pane_t1

0x0e70,	// (0x0007ba0b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0e70,	// (0x0007ba0b) list_single_cmail_header_editor_pane_bg

0x73c7,	// (0x00081f62) list_cmail_body_pane_g1

0x7ed8,	// (0x00082a73) list_cmail_body_pane_t1

0xe7b3,	// (0x0008934e) list_single_cmail_header_editor_pane_bg_g1

0xb12b,	// (0x00085cc6) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe7c3,	// (0x0008935e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe7bb,	// (0x00089356) list_single_cmail_header_editor_pane_bg_g1_copy3

0xea6a,	// (0x00089605) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe7e3,	// (0x0008937e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe7d3,	// (0x0008936e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe7db,	// (0x00089376) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb10b,	// (0x00085ca6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7ee6,	// (0x00082a81) calenote_gesture_pane_ParamLimits

0x7ee6,	// (0x00082a81) calenote_gesture_pane

0x7f06,	// (0x00082aa1) calenote_window_pane_ParamLimits

0x7f06,	// (0x00082aa1) calenote_window_pane

0x7f22,	// (0x00082abd) popup_note_window_cp01

0x7f2b,	// (0x00082ac6) calenote_swipe_1_pane_ParamLimits

0x7f2b,	// (0x00082ac6) calenote_swipe_1_pane

0x7a38,	// (0x000825d3) calenote_swipe_2_pane_ParamLimits

0x7a38,	// (0x000825d3) calenote_swipe_2_pane

0x7a52,	// (0x000825ed) calenote_swipe_1_pane_g1_ParamLimits

0x7a52,	// (0x000825ed) calenote_swipe_1_pane_g1

0x7f49,	// (0x00082ae4) calenote_swipe_1_pane_g2_ParamLimits

0x7f49,	// (0x00082ae4) calenote_swipe_1_pane_g2

0x0001,

0xfc4b,	// (0x0008a7e6) calenote_swipe_1_pane_g_ParamLimits

0xfc4b,	// (0x0008a7e6) calenote_swipe_1_pane_g

0x7f55,	// (0x00082af0) calenote_swipe_1_pane_t1_ParamLimits

0x7f55,	// (0x00082af0) calenote_swipe_1_pane_t1

0x7a52,	// (0x000825ed) calenote_swipe_2_pane_g1_ParamLimits

0x7a52,	// (0x000825ed) calenote_swipe_2_pane_g1

0x7f74,	// (0x00082b0f) calenote_swipe_2_pane_g2_ParamLimits

0x7f74,	// (0x00082b0f) calenote_swipe_2_pane_g2

0x0001,

0xfc50,	// (0x0008a7eb) calenote_swipe_2_pane_g_ParamLimits

0xfc50,	// (0x0008a7eb) calenote_swipe_2_pane_g

0x7f80,	// (0x00082b1b) calenote_swipe_2_pane_t1_ParamLimits

0x7f80,	// (0x00082b1b) calenote_swipe_2_pane_t1

0x10d4,	// (0x0007bc6f) main_mup_navstr_pane

0x47eb,	// (0x0007f386) main_mup3_pane_t7_ParamLimits

0x47eb,	// (0x0007f386) main_mup3_pane_t7

0xd9c5,	// (0x00088560) main_mp4_pane_g6_ParamLimits

0xd9c5,	// (0x00088560) main_mp4_pane_g6

0xdbef,	// (0x0008878a) main_image3_pane_t4_ParamLimits

0xdbef,	// (0x0008878a) main_image3_pane_t4

0x7fa7,	// (0x00082b42) popup_navstr_preview_pane_ParamLimits

0x7fa7,	// (0x00082b42) popup_navstr_preview_pane

0x7fbb,	// (0x00082b56) scroll_navstr_pane_ParamLimits

0x7fbb,	// (0x00082b56) scroll_navstr_pane

0x10d4,	// (0x0007bc6f) bg_popup_preview_window_pane_cp04

0x7fcf,	// (0x00082b6a) popup_navstr_preview_pane_t1

0x7fdd,	// (0x00082b78) scroll_navstr_pane_g1_ParamLimits

0x7fdd,	// (0x00082b78) scroll_navstr_pane_g1

0x7ff1,	// (0x00082b8c) scroll_navstr_pane_t1_ParamLimits

0x7ff1,	// (0x00082b8c) scroll_navstr_pane_t1

0x7f40,	// (0x00082adb) bg_button_pane_cp014

0x7f40,	// (0x00082adb) bg_button_pane_cp030

0x0c1d,	// (0x0007b7b8) list_double_fisheye_pane_g4_ParamLimits

0x0c1d,	// (0x0007b7b8) list_double_fisheye_pane_g4

0x0c29,	// (0x0007b7c4) list_double_fisheye_pane_g5_ParamLimits

0x0c29,	// (0x0007b7c4) list_double_fisheye_pane_g5

0xebe3,	// (0x0008977e) sp_fs_scroll_pane_cp03

0x7b83,	// (0x0008271e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x7b8f,	// (0x0008272a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf9,	// (0x0008a794) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7bcf,	// (0x0008276a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x7e54,	// (0x000829ef) sp_fs_scroll_pane_cp02

0xae50,	// (0x000859eb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xae50,	// (0x000859eb) popup_sp_fs_calendar_preview_list_single_pane

0x10d4,	// (0x0007bc6f) main_cam6_pano_pane

0xa541,	// (0x000850dc) main_mup3_pane_ParamLimits

0x10d4,	// (0x0007bc6f) main_phacti_pane

0x742e,	// (0x00081fc9) bg_button_pane_cp11

0x7448,	// (0x00081fe3) main_mobtv_info_pane_g2_ParamLimits

0x7448,	// (0x00081fe3) main_mobtv_info_pane_g2

0x0001,

0xfb5e,	// (0x0008a6f9) main_mobtv_info_pane_g_ParamLimits

0xfb5e,	// (0x0008a6f9) main_mobtv_info_pane_g

0xac55,	// (0x000857f0) sc_clock_pane_t5_ParamLimits

0xac55,	// (0x000857f0) sc_clock_pane_t5

0xbaae,	// (0x00086649) main_radioblah_pane_g1_ParamLimits

0xbabc,	// (0x00086657) main_radioblah_pane_t3_ParamLimits

0xbabc,	// (0x00086657) main_radioblah_pane_t3

0xbabc,	// (0x00086657) main_radioblah_pane_t4_ParamLimits

0xbabc,	// (0x00086657) main_radioblah_pane_t4

0xa541,	// (0x000850dc) main_radioblah_text_pane_ParamLimits

0xa541,	// (0x000850dc) main_radioblah_text_pane

0x7827,	// (0x000823c2) main_radioblah_info_pane_g1_ParamLimits

0x786b,	// (0x00082406) main_radioblah_info_pane_t4_ParamLimits

0x786b,	// (0x00082406) main_radioblah_info_pane_t4

0xa541,	// (0x000850dc) main_sp_fs_calendar_pane

0x8008,	// (0x00082ba3) main_phacti_pane_g1

0x8019,	// (0x00082bb4) phacti_note_pane_ParamLimits

0x8019,	// (0x00082bb4) phacti_note_pane

0x802d,	// (0x00082bc8) phacti_term_pane_ParamLimits

0x802d,	// (0x00082bc8) phacti_term_pane

0x8042,	// (0x00082bdd) phacti_note_pane_t1_ParamLimits

0x8042,	// (0x00082bdd) phacti_note_pane_t1

0xde16,	// (0x000889b1) phacti_term_pane_g1

0xde1e,	// (0x000889b9) phacti_term_pane_t1_ParamLimits

0xde1e,	// (0x000889b9) phacti_term_pane_t1

0x8059,	// (0x00082bf4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaeef,	// (0x00085a8a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5a,	// (0x0008a7f5) popup_sp_fs_calendar_preview_list_single_pane_g

0x8061,	// (0x00082bfc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x8061,	// (0x00082bfc) popup_sp_fs_calendar_preview_list_single_pane_t1

0x8077,	// (0x00082c12) aid_popup_sp_fs_bg_corner_pane

0xac4b,	// (0x000857e6) popup_sp_fs_calendar_preview_bg_pane_g1

0x10d4,	// (0x0007bc6f) popup_sp_fs_calendar_preview_bg_pane

0x807f,	// (0x00082c1a) popup_sp_fs_calendar_preview_list_pane

0xbad0,	// (0x0008666b) bg_main_sp_fs_cale_pane_ParamLimits

0xbad0,	// (0x0008666b) bg_main_sp_fs_cale_pane

0xde51,	// (0x000889ec) listscroll_cale_mrui_pane_ParamLimits

0xde51,	// (0x000889ec) listscroll_cale_mrui_pane

0xde66,	// (0x00088a01) listscroll_sp_fs_schedule_track_pane

0xde6f,	// (0x00088a0a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xde6f,	// (0x00088a0a) main_sp_fs_ctrlbar_pane_cp01

0x80e8,	// (0x00082c83) main_sp_fs_ribbon_pane

0xde82,	// (0x00088a1d) popup_sp_fs_cale_preview_window

0x80f0,	// (0x00082c8b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x80f0,	// (0x00082c8b) list_single_sp_fs_schedule_track_pane

0xa541,	// (0x000850dc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa541,	// (0x000850dc) bg_sp_fs_highlight_list_pane_cp03

0x8103,	// (0x00082c9e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8103,	// (0x00082c9e) list_single_sp_fs_schedule_track_pane_g1

0x810f,	// (0x00082caa) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x810f,	// (0x00082caa) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc5f,	// (0x0008a7fa) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc5f,	// (0x0008a7fa) list_single_sp_fs_schedule_track_pane_g

0x811b,	// (0x00082cb6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x811b,	// (0x00082cb6) list_single_sp_fs_schedule_track_pane_t1

0x8135,	// (0x00082cd0) sp_fs_schedule_track_pane_ParamLimits

0x8135,	// (0x00082cd0) sp_fs_schedule_track_pane

0x8146,	// (0x00082ce1) sp_fs_schedule_track_pane_g1

0x814e,	// (0x00082ce9) sp_fs_schedule_track_pane_g2

0x8156,	// (0x00082cf1) sp_fs_schedule_track_pane_g3

0x815e,	// (0x00082cf9) sp_fs_schedule_track_pane_g4

0x8166,	// (0x00082d01) sp_fs_schedule_track_pane_g5

0x0004,

0xfc64,	// (0x0008a7ff) sp_fs_schedule_track_pane_g

0xe7b3,	// (0x0008934e) bg_sp_fs_schedule_viewer_highlight_g1

0xb12b,	// (0x00085cc6) bg_sp_fs_schedule_viewer_highlight_g2

0xe7bb,	// (0x00089356) bg_sp_fs_schedule_viewer_highlight_g3

0xe7c3,	// (0x0008935e) bg_sp_fs_schedule_viewer_highlight_g4

0xea6a,	// (0x00089605) bg_sp_fs_schedule_viewer_highlight_g5

0xe7d3,	// (0x0008936e) bg_sp_fs_schedule_viewer_highlight_g6

0xe7db,	// (0x00089376) bg_sp_fs_schedule_viewer_highlight_g7

0xe7e3,	// (0x0008937e) bg_sp_fs_schedule_viewer_highlight_g8

0xb10b,	// (0x00085ca6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc6f,	// (0x0008a80a) bg_sp_fs_schedule_viewer_highlight_g

0x10d4,	// (0x0007bc6f) bg_main_sp_fs_ribbon_pane

0x816e,	// (0x00082d09) main_sp_fs_ribbon_pane_g1

0x8177,	// (0x00082d12) main_sp_fs_ribbon_pane_t1

0x8186,	// (0x00082d21) main_sp_fs_ribbon_pane_t2

0x8195,	// (0x00082d30) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc82,	// (0x0008a81d) main_sp_fs_ribbon_pane_t

0x81a4,	// (0x00082d3f) main_sp_fs_ribbon_scheduler_pane

0x81ac,	// (0x00082d47) bg_main_sp_fs_ribbon_pane_g1

0x81b5,	// (0x00082d50) bg_main_sp_fs_ribbon_pane_g2

0x81be,	// (0x00082d59) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc89,	// (0x0008a824) bg_main_sp_fs_ribbon_pane_g

0x81c6,	// (0x00082d61) main_sp_fs_ribbon_scheduler_pane_g1

0x81cf,	// (0x00082d6a) main_sp_fs_ribbon_scheduler_pane_g2

0x81d8,	// (0x00082d73) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc90,	// (0x0008a82b) main_sp_fs_ribbon_scheduler_pane_g

0x81e1,	// (0x00082d7c) list_cale_mrui_pane

0x81ee,	// (0x00082d89) sp_fs_scroll_pane_cp07_ParamLimits

0x81ee,	// (0x00082d89) sp_fs_scroll_pane_cp07

0x820a,	// (0x00082da5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x820a,	// (0x00082da5) bg_sp_fs_schedule_viewer_highlight

0x821a,	// (0x00082db5) list_single_sp_fs_schedule_track_pane_cp01

0x8222,	// (0x00082dbd) list_sp_fs_schedule_track_pane

0x822a,	// (0x00082dc5) sp_fs_scroll_pane_cp06_ParamLimits

0x822a,	// (0x00082dc5) sp_fs_scroll_pane_cp06

0xac4b,	// (0x000857e6) bgmain_sp_fs_calendar_pane_g1

0x0e89,	// (0x0007ba24) list_single_cale_mrui_pane_ParamLimits

0x0e89,	// (0x0007ba24) list_single_cale_mrui_pane

0xde94,	// (0x00088a2f) list_single_cale_mrui_row_pane_ParamLimits

0xde94,	// (0x00088a2f) list_single_cale_mrui_row_pane

0xdea1,	// (0x00088a3c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdea1,	// (0x00088a3c) list_single_cale_mrui_row_pane_g1

0xded9,	// (0x00088a74) list_single_cale_mrui_row_pane_t1_ParamLimits

0xded9,	// (0x00088a74) list_single_cale_mrui_row_pane_t1

0x0ea9,	// (0x0007ba44) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ea9,	// (0x0007ba44) list_single_cale_mrui_row_pane_t2

0xdeeb,	// (0x00088a86) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdeeb,	// (0x00088a86) list_single_cale_mrui_row_pane_t3

0xdf1a,	// (0x00088ab5) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdf1a,	// (0x00088ab5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc9e,	// (0x0008a839) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc9e,	// (0x0008a839) list_single_cale_mrui_row_pane_t

0x0f11,	// (0x0007baac) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f11,	// (0x0007baac) list_single_cmail_header_editor_pane_bg_cp01

0x0f3f,	// (0x0007bada) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f3f,	// (0x0007bada) list_single_cmail_header_editor_pane_bg_cp02

0x8249,	// (0x00082de4) main_radioblah_text_pane_t1_ParamLimits

0x8249,	// (0x00082de4) main_radioblah_text_pane_t1

0x8263,	// (0x00082dfe) cam6_indi_pane_cp01

0x826b,	// (0x00082e06) cam6_mode_pane_cp01

0x8273,	// (0x00082e0e) cam6_pano_pane

0x827c,	// (0x00082e17) cam6_zoom_pane_cp01

0x8284,	// (0x00082e1f) cam6_pano_image_pane

0x828f,	// (0x00082e2a) cam6_pano_pane_g1

0x73c7,	// (0x00081f62) cam6_pano_pane_g2

0x8298,	// (0x00082e33) cam6_pano_pane_g3

0x82a1,	// (0x00082e3c) cam6_pano_pane_g4

0xd759,	// (0x000882f4) cam6_pano_pane_g5

0x82aa,	// (0x00082e45) cam6_pano_pane_g6

0xebc5,	// (0x00089760) cam6_pano_pane_g7

0x82b4,	// (0x00082e4f) cam6_pano_pane_g8

0x82bd,	// (0x00082e58) cam6_pano_pane_g9

0x0008,

0xfca7,	// (0x0008a842) cam6_pano_pane_g

0x10d4,	// (0x0007bc6f) main_browser_tag_pane

0x7f9f,	// (0x00082b3a) grid_navstr_albumart_pane

0x82c8,	// (0x00082e63) cell_navstr_albumart_pane_ParamLimits

0x82c8,	// (0x00082e63) cell_navstr_albumart_pane

0x82e8,	// (0x00082e83) cell_navstr_albumart_pane_g1

0xcb93,	// (0x0008772e) cell_navstr_albumart_pane_g2

0xcba3,	// (0x0008773e) cell_navstr_albumart_pane_g3

0xcb9b,	// (0x00087736) cell_navstr_albumart_pane_g4

0x0003,

0xfcba,	// (0x0008a855) cell_navstr_albumart_pane_g

0x82f0,	// (0x00082e8b) bt_list_pane_ParamLimits

0x82f0,	// (0x00082e8b) bt_list_pane

0x8304,	// (0x00082e9f) bt_list_pane_t1

0x8313,	// (0x00082eae) bt_list_pane_t2

0x0001,

0xfcc3,	// (0x0008a85e) bt_list_pane_t

0x10d4,	// (0x0007bc6f) main_cale_prevew_pane

0x8322,	// (0x00082ebd) popup_cale_preview_window_ParamLimits

0x8322,	// (0x00082ebd) popup_cale_preview_window

0xa541,	// (0x000850dc) bg_popup_preview_window_pane_cp05_ParamLimits

0xa541,	// (0x000850dc) bg_popup_preview_window_pane_cp05

0x833d,	// (0x00082ed8) list_cale_preview_pane_ParamLimits

0x833d,	// (0x00082ed8) list_cale_preview_pane

0x8349,	// (0x00082ee4) list_double_cale_preview_pane_ParamLimits

0x8349,	// (0x00082ee4) list_double_cale_preview_pane

0x835b,	// (0x00082ef6) list_single_cale_preview_pane_ParamLimits

0x835b,	// (0x00082ef6) list_single_cale_preview_pane

0x8371,	// (0x00082f0c) list_single_cale_preview_pane_g1

0x8379,	// (0x00082f14) list_single_cale_preview_pane_t1_ParamLimits

0x8379,	// (0x00082f14) list_single_cale_preview_pane_t1

0x838e,	// (0x00082f29) list_double_cale_preview_pane_g1

0x8396,	// (0x00082f31) list_double_cale_preview_pane_t1_ParamLimits

0x8396,	// (0x00082f31) list_double_cale_preview_pane_t1

0x83ab,	// (0x00082f46) list_double_cale_preview_pane_t2_ParamLimits

0x83ab,	// (0x00082f46) list_double_cale_preview_pane_t2

0x0001,

0xfcc8,	// (0x0008a863) list_double_cale_preview_pane_t_ParamLimits

0xfcc8,	// (0x0008a863) list_double_cale_preview_pane_t

0x10d4,	// (0x0007bc6f) main_ezdial_pane

0xa541,	// (0x000850dc) main_sp_fs_email_pane_ParamLimits

0x7aef,	// (0x0008268a) cmail_ddmenu_btn01_pane_ParamLimits

0x7aef,	// (0x0008268a) cmail_ddmenu_btn01_pane

0x7b02,	// (0x0008269d) cmail_ddmenu_btn02_pane_ParamLimits

0x7b02,	// (0x0008269d) cmail_ddmenu_btn02_pane

0x7b5d,	// (0x000826f8) cmail_ddmenu_btn03_pane_ParamLimits

0x7b5d,	// (0x000826f8) cmail_ddmenu_btn03_pane

0x7c0e,	// (0x000827a9) main_sp_fs_ctrlbar_pane_ParamLimits

0x7c4d,	// (0x000827e8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7e5c,	// (0x000829f7) list_cmail_body_pane_ParamLimits

0x7ec2,	// (0x00082a5d) bg_button_pane_cp12

0x7ecb,	// (0x00082a66) list_single_cmail_header_detail_pane_g3_ParamLimits

0x7ecb,	// (0x00082a66) list_single_cmail_header_detail_pane_g3

0xddf2,	// (0x0008898d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xddf2,	// (0x0008898d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc46,	// (0x0008a7e1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc46,	// (0x0008a7e1) list_single_cmail_header_detail_pane_t

0xde33,	// (0x000889ce) phacti_term_pane_t2_ParamLimits

0xde33,	// (0x000889ce) phacti_term_pane_t2

0x0001,

0xfc55,	// (0x0008a7f0) phacti_term_pane_t_ParamLimits

0xfc55,	// (0x0008a7f0) phacti_term_pane_t

0x83c3,	// (0x00082f5e) aid_size_list_single_double

0x83cf,	// (0x00082f6a) popup_ezdial_listscroll_window

0x83e6,	// (0x00082f81) popup_number_entry_window_cp01

0xaf08,	// (0x00085aa3) bg_popup_call_pane_cp09

0x83f3,	// (0x00082f8e) ezdial_list_pane

0x83fb,	// (0x00082f96) scroll_pane_cp23

0xbad0,	// (0x0008666b) bg_button_pane_cp028_ParamLimits

0xbad0,	// (0x0008666b) bg_button_pane_cp028

0x8403,	// (0x00082f9e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8403,	// (0x00082f9e) cmail_ddmenu_btn01_pane_g1

0x840f,	// (0x00082faa) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x840f,	// (0x00082faa) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfccd,	// (0x0008a868) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfccd,	// (0x0008a868) cmail_ddmenu_btn01_pane_g

0x8423,	// (0x00082fbe) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x8423,	// (0x00082fbe) cmail_ddmenu_btn01_pane_t1

0xbad0,	// (0x0008666b) bg_button_pane_cp029_ParamLimits

0xbad0,	// (0x0008666b) bg_button_pane_cp029

0x8439,	// (0x00082fd4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8439,	// (0x00082fd4) cmail_ddmenu_btn02_pane_g1

0x8451,	// (0x00082fec) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8451,	// (0x00082fec) cmail_ddmenu_btn02_pane_t1

0xa541,	// (0x000850dc) bg_button_pane_cp031_ParamLimits

0xa541,	// (0x000850dc) bg_button_pane_cp031

0x8439,	// (0x00082fd4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8439,	// (0x00082fd4) cmail_ddmenu_btn03_pane_g1

0x8451,	// (0x00082fec) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8451,	// (0x00082fec) cmail_ddmenu_btn03_pane_t1

0xac55,	// (0x000857f0) cell_dialer2_keypad_pane_t1_ParamLimits

0xd787,	// (0x00088322) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xd787,	// (0x00088322) cell_dialer2_keypad_pane_t1_copy1

0x6fd7,	// (0x00081b72) ncimui_group_button_pane

0xa541,	// (0x000850dc) main_sp_fs_calendar_pane_ParamLimits

0x7e71,	// (0x00082a0c) list_single_cmail_header_caption_pane_ParamLimits

0xde48,	// (0x000889e3) aid_recal_txt_sm_pane

0x10d4,	// (0x0007bc6f) mian_recal_day_pane

0xde82,	// (0x00088a1d) popup_sp_fs_cale_preview_window_ParamLimits

0x8475,	// (0x00083010) list_recal_day_pane

0xdf64,	// (0x00088aff) list_single_recal_day_pane_ParamLimits

0xdf64,	// (0x00088aff) list_single_recal_day_pane

0x849c,	// (0x00083037) list_single_recal_day_pane_g1_ParamLimits

0x849c,	// (0x00083037) list_single_recal_day_pane_g1

0xdf76,	// (0x00088b11) list_single_recal_day_pane_g2_ParamLimits

0xdf76,	// (0x00088b11) list_single_recal_day_pane_g2

0xdf82,	// (0x00088b1d) list_single_recal_day_pane_g3_ParamLimits

0xdf82,	// (0x00088b1d) list_single_recal_day_pane_g3

0x0f5f,	// (0x0007bafa) list_single_recal_day_pane_g4_ParamLimits

0x0f5f,	// (0x0007bafa) list_single_recal_day_pane_g4

0xdf8e,	// (0x00088b29) list_single_recal_day_pane_g5_ParamLimits

0xdf8e,	// (0x00088b29) list_single_recal_day_pane_g5

0xdf9a,	// (0x00088b35) list_single_recal_day_pane_g6_ParamLimits

0xdf9a,	// (0x00088b35) list_single_recal_day_pane_g6

0x0004,

0xfcdc,	// (0x0008a877) list_single_recal_day_pane_g_ParamLimits

0xfcdc,	// (0x0008a877) list_single_recal_day_pane_g

0xdfae,	// (0x00088b49) list_single_recal_day_pane_t1

0xdfc0,	// (0x00088b5b) list_single_recal_day_pane_t2

0x0001,

0xfce7,	// (0x0008a882) list_single_recal_day_pane_t

0x84a8,	// (0x00083043) ncimui_query_button_pane_ParamLimits

0x84a8,	// (0x00083043) ncimui_query_button_pane

0x84b8,	// (0x00083053) ncimui_query_button_pane_t1_ParamLimits

0x84b8,	// (0x00083053) ncimui_query_button_pane_t1

0x84cb,	// (0x00083066) ncimui_query_button_pane_t2_ParamLimits

0x84cb,	// (0x00083066) ncimui_query_button_pane_t2

0x0001,

0xfcec,	// (0x0008a887) ncimui_query_button_pane_t_ParamLimits

0xfcec,	// (0x0008a887) ncimui_query_button_pane_t

0x84de,	// (0x00083079) query_button_pane_ParamLimits

0x84de,	// (0x00083079) query_button_pane

0x10d4,	// (0x0007bc6f) bg_button_pane_cp0028

0x84f1,	// (0x0008308c) query_button_pane_t1

0x3bac,	// (0x0007e747) main_tport_pane_ParamLimits

0x7cd8,	// (0x00082873) bg_popup_window_pane_cp01_ParamLimits

0x7cd8,	// (0x00082873) bg_popup_window_pane_cp01

0x7cf3,	// (0x0008288e) heading_pane_cp08_ParamLimits

0x7cf3,	// (0x0008288e) heading_pane_cp08

0x7d06,	// (0x000828a1) heading_pane_cp07_ParamLimits

0x7d06,	// (0x000828a1) heading_pane_cp07

0x7dd6,	// (0x00082971) cell_tport_appsw_pane_g2

0x0002,

0xfc33,	// (0x0008a7ce) cell_tport_appsw_pane_g

0x0843,	// (0x0007b3de) input_candi_list_open_g1

0xb324,	// (0x00085ebf) list_cale_time_pane_g6_ParamLimits

0xb324,	// (0x00085ebf) list_cale_time_pane_g6

0x41bf,	// (0x0007ed5a) aid_size_touch_calib_1_ParamLimits

0x41bf,	// (0x0007ed5a) aid_size_touch_calib_1

0x41d1,	// (0x0007ed6c) aid_size_touch_calib_2_ParamLimits

0x41d1,	// (0x0007ed6c) aid_size_touch_calib_2

0x41e9,	// (0x0007ed84) aid_size_touch_calib_3_ParamLimits

0x41e9,	// (0x0007ed84) aid_size_touch_calib_3

0x4207,	// (0x0007eda2) aid_size_touch_calib_4_ParamLimits

0x4207,	// (0x0007eda2) aid_size_touch_calib_4

0x421f,	// (0x0007edba) main_touch_calib_button_group_pane_ParamLimits

0x421f,	// (0x0007edba) main_touch_calib_button_group_pane

0x4237,	// (0x0007edd2) main_touch_calib_pane_g1_ParamLimits

0x4249,	// (0x0007ede4) main_touch_calib_pane_g2_ParamLimits

0x425b,	// (0x0007edf6) main_touch_calib_pane_g3_ParamLimits

0x426d,	// (0x0007ee08) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x0008a21a) main_touch_calib_pane_g_ParamLimits

0x427f,	// (0x0007ee1a) main_touch_calib_pane_t1_ParamLimits

0x4299,	// (0x0007ee34) main_touch_calib_pane_t2_ParamLimits

0x42b3,	// (0x0007ee4e) main_touch_calib_pane_t3_ParamLimits

0x42c7,	// (0x0007ee62) main_touch_calib_pane_t4_ParamLimits

0x42db,	// (0x0007ee76) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x0008a223) main_touch_calib_pane_t_ParamLimits

0xd524,	// (0x000880bf) list_single_fp_cale_pane_g3_ParamLimits

0xd524,	// (0x000880bf) list_single_fp_cale_pane_g3

0xa541,	// (0x000850dc) bg_button_pane_cp012_ParamLimits

0xa541,	// (0x000850dc) bg_vkb2_func_pane_cp03_ParamLimits

0x604f,	// (0x00080bea) cell_vitu2_function_top_pane_g1_ParamLimits

0xa541,	// (0x000850dc) bg_vkb2_func_pane_cp04_ParamLimits

0x6f62,	// (0x00081afd) main_ncimui_button_group_pane_ParamLimits

0x6f62,	// (0x00081afd) main_ncimui_button_group_pane

0x6fc2,	// (0x00081b5d) main_ncimui_pane_t3_ParamLimits

0x6fc2,	// (0x00081b5d) main_ncimui_pane_t3

0x8010,	// (0x00082bab) phacti_button_group_pane

0x83c3,	// (0x00082f5e) aid_size_list_single_double_ParamLimits

0x83cf,	// (0x00082f6a) popup_ezdial_listscroll_window_ParamLimits

0x83e6,	// (0x00082f81) popup_number_entry_window_cp01_ParamLimits

0x84ff,	// (0x0008309a) phacti_button_pane_ParamLimits

0x84ff,	// (0x0008309a) phacti_button_pane

0x10d4,	// (0x0007bc6f) bg_button_pane_cp14

0x8510,	// (0x000830ab) phacti_button_pane_t1

0x851e,	// (0x000830b9) main_touch_calib_button_pane_ParamLimits

0x851e,	// (0x000830b9) main_touch_calib_button_pane

0xacc3,	// (0x0008585e) bg_button_pane_cp18_ParamLimits

0xacc3,	// (0x0008585e) bg_button_pane_cp18

0x8533,	// (0x000830ce) main_touch_calib_button_pane_t1_ParamLimits

0x8533,	// (0x000830ce) main_touch_calib_button_pane_t1

0x8549,	// (0x000830e4) main_touch_calib_button_pane_t2_ParamLimits

0x8549,	// (0x000830e4) main_touch_calib_button_pane_t2

0x0001,

0xfcf1,	// (0x0008a88c) main_touch_calib_button_pane_t_ParamLimits

0xfcf1,	// (0x0008a88c) main_touch_calib_button_pane_t

0x10d4,	// (0x0007bc6f) cell_ncimui_button_pane

0x10d4,	// (0x0007bc6f) bg_button_pane_cp032

0x8567,	// (0x00083102) cell_ncimui_button_pane_t1

0xdbcf,	// (0x0008876a) image3_infobar_pane_ParamLimits

0xdbcf,	// (0x0008876a) image3_infobar_pane

0x7654,	// (0x000821ef) fs_bigclock_status_pane_ParamLimits

0x7654,	// (0x000821ef) fs_bigclock_status_pane

0x7661,	// (0x000821fc) main_fs_bigclock_clock_pane_ParamLimits

0x7661,	// (0x000821fc) main_fs_bigclock_clock_pane

0x767f,	// (0x0008221a) main_fs_bigclock_indi_pane_ParamLimits

0x767f,	// (0x0008221a) main_fs_bigclock_indi_pane

0x76b1,	// (0x0008224c) main_fs_bigclock_swipe_pane_ParamLimits

0x76b1,	// (0x0008224c) main_fs_bigclock_swipe_pane

0x10d4,	// (0x0007bc6f) main_fs_clock_dumped_data

0x76f0,	// (0x0008228b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x76f0,	// (0x0008228b) list_single_fs_bigclock_indicator_pane_g1

0x770b,	// (0x000822a6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x770b,	// (0x000822a6) list_single_fs_bigclock_indicator_pane_g2

0x7725,	// (0x000822c0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7725,	// (0x000822c0) list_single_fs_bigclock_indicator_pane_g3

0x773f,	// (0x000822da) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x773f,	// (0x000822da) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb92,	// (0x0008a72d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb92,	// (0x0008a72d) list_single_fs_bigclock_indicator_pane_g

0x776a,	// (0x00082305) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x776a,	// (0x00082305) list_single_fs_bigclock_indicator_pane_t1

0x7792,	// (0x0008232d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7792,	// (0x0008232d) list_single_fs_bigclock_indicator_pane_t2

0x77ba,	// (0x00082355) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x77ba,	// (0x00082355) list_single_fs_bigclock_indicator_pane_t3

0x77e2,	// (0x0008237d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x77e2,	// (0x0008237d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9d,	// (0x0008a738) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9d,	// (0x0008a738) list_single_fs_bigclock_indicator_pane_t

0x8575,	// (0x00083110) image3_infobar_fav_pane_ParamLimits

0x8575,	// (0x00083110) image3_infobar_fav_pane

0x8585,	// (0x00083120) image3_infobar_loc_pane_ParamLimits

0x8585,	// (0x00083120) image3_infobar_loc_pane

0x8599,	// (0x00083134) image3_infobar_time_pane_ParamLimits

0x8599,	// (0x00083134) image3_infobar_time_pane

0xac4b,	// (0x000857e6) image3_infobar_time_pane_g1

0x85a9,	// (0x00083144) image3_infobar_time_pane_t1

0xac4b,	// (0x000857e6) image3_infobar_loc_pane_g1

0x85b7,	// (0x00083152) image3_infobar_loc_pane_g2

0x0001,

0xfcf6,	// (0x0008a891) image3_infobar_loc_pane_g

0x85bf,	// (0x0008315a) image3_infobar_loc_pane_t1

0xac4b,	// (0x000857e6) image3_infobar_fav_pane_g1

0x85cd,	// (0x00083168) image3_infobar_fav_pane_g2

0x0001,

0xfcfb,	// (0x0008a896) image3_infobar_fav_pane_g

0x85d5,	// (0x00083170) fs_bigclock_status_battery_pane

0x85de,	// (0x00083179) fs_bigclock_status_signal_pane

0x85e7,	// (0x00083182) fs_bigclock_status_title_pane

0x85f0,	// (0x0008318b) fs_bigclock_status_signal_pane_g1

0x85f9,	// (0x00083194) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd00,	// (0x0008a89b) fs_bigclock_status_signal_pane_g

0x8601,	// (0x0008319c) fs_bigclock_status_battery_pane_g1

0x860a,	// (0x000831a5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd05,	// (0x0008a8a0) fs_bigclock_status_battery_pane_g

0x8612,	// (0x000831ad) fs_bigclock_status_title_pane_t1

0x8620,	// (0x000831bb) main_fs_bigclock_clock_pane_g1

0x8620,	// (0x000831bb) main_fs_bigclock_clock_pane_g2

0x8631,	// (0x000831cc) main_fs_bigclock_clock_pane_g3

0x8631,	// (0x000831cc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0a,	// (0x0008a8a5) main_fs_bigclock_clock_pane_g

0x8644,	// (0x000831df) main_fs_bigclock_clock_pane_t1

0x865a,	// (0x000831f5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd13,	// (0x0008a8ae) main_fs_bigclock_clock_pane_t

0x8670,	// (0x0008320b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8670,	// (0x0008320b) list_single_fs_bigclock_indicator_pane

0x8681,	// (0x0008321c) list_single_fs_bigclock_pane_ParamLimits

0x8681,	// (0x0008321c) list_single_fs_bigclock_pane

0x86eb,	// (0x00083286) main_fs_bigclock_indicator_pane_t1

0x86fa,	// (0x00083295) list_single_fs_bigclock_pane_g1

0x8702,	// (0x0008329d) list_single_fs_bigclock_pane_t1

0xac4b,	// (0x000857e6) main_fs_bigclock_swipe_pane_g1

0x8745,	// (0x000832e0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd24,	// (0x0008a8bf) main_fs_bigclock_swipe_pane_g

0x874d,	// (0x000832e8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x874d,	// (0x000832e8) main_fs_bigclock_swipe_pane_t1

0x2dd8,	// (0x0007d973) call_type_pane_ParamLimits

0x10d4,	// (0x0007bc6f) main_btmg_pane

0xdecd,	// (0x00088a68) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdecd,	// (0x00088a68) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc97,	// (0x0008a832) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc97,	// (0x0008a832) list_single_cale_mrui_row_pane_g

0xdf53,	// (0x00088aee) list_recal_vselct_arw_lo_pane

0x8494,	// (0x0008302f) list_recal_vselct_arw_up_pane

0xdf5b,	// (0x00088af6) list_recal_vselct_pane

0x876a,	// (0x00083305) btmg_button_pane

0x8774,	// (0x0008330f) main_btmg_pane_g1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp044

0x877e,	// (0x00083319) btmg_button_pane_t1

0xcce3,	// (0x0008787e) aid_listscroll_gen

0xa541,	// (0x000850dc) main_cntbar_detail_pane

0x7e3d,	// (0x000829d8) list_cmail_folder_pane

0xebe3,	// (0x0008977e) sp_fs_scroll_pane_cp03_ParamLimits

0x0f77,	// (0x0007bb12) list_single_fs_dyc_pane_cp01_ParamLimits

0x0f77,	// (0x0007bb12) list_single_fs_dyc_pane_cp01

0x878c,	// (0x00083327) aid_size_cmail_indent

0xdfd2,	// (0x00088b6d) list_single_dyc_row_pane_cp01

0x87c1,	// (0x0008335c) cntbar_detail_list_pane_ParamLimits

0x87c1,	// (0x0008335c) cntbar_detail_list_pane

0x880d,	// (0x000833a8) main_cntbar_detail_cont_pane_ParamLimits

0x880d,	// (0x000833a8) main_cntbar_detail_cont_pane

0xebe3,	// (0x0008977e) scroll_pane_cp032_ParamLimits

0xebe3,	// (0x0008977e) scroll_pane_cp032

0x8821,	// (0x000833bc) cntbar_detail_list_event_pane_ParamLimits

0x8821,	// (0x000833bc) cntbar_detail_list_event_pane

0x87d1,	// (0x0008336c) cntbar_detail_list_shct_pane

0xb179,	// (0x00085d14) aid_list_gen

0x8831,	// (0x000833cc) aid_scroll

0x883a,	// (0x000833d5) aid_size_touch_scroll_bar

0x78d5,	// (0x00082470) aid_list_double

0x8843,	// (0x000833de) aid_list_single

0x8843,	// (0x000833de) aid_list_single_lg

0xdfdb,	// (0x00088b76) aid_list_z_g_a_sm

0xebcd,	// (0x00089768) aid_list_z_g_d

0xdfe3,	// (0x00088b7e) aid_txt_z_prm

0x0f8c,	// (0x0007bb27) aid_txt_z_prm_cp01

0x0f9a,	// (0x0007bb35) aid_txt_z_sec

0x884c,	// (0x000833e7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x884c,	// (0x000833e7) main_cntbar_detail_cont_pane_g1

0x8860,	// (0x000833fb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8860,	// (0x000833fb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd29,	// (0x0008a8c4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd29,	// (0x0008a8c4) main_cntbar_detail_cont_pane_g

0x8870,	// (0x0008340b) main_cntbar_detail_cont_pane_t1

0x887e,	// (0x00083419) main_cntbar_detail_cont_pane_t2

0x888c,	// (0x00083427) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd2e,	// (0x0008a8c9) main_cntbar_detail_cont_pane_t

0x889a,	// (0x00083435) cell_cntbar_detail_list_shct_pane_ParamLimits

0x889a,	// (0x00083435) cell_cntbar_detail_list_shct_pane

0x88ae,	// (0x00083449) cntbar_detail_list_shct_pane_g1

0x88b7,	// (0x00083452) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd35,	// (0x0008a8d0) cntbar_detail_list_shct_pane_g

0x88c0,	// (0x0008345b) cntbar_detail_list_event_pane_g1_ParamLimits

0x88c0,	// (0x0008345b) cntbar_detail_list_event_pane_g1

0x88cc,	// (0x00083467) cntbar_detail_list_event_pane_g2_ParamLimits

0x88cc,	// (0x00083467) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3a,	// (0x0008a8d5) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3a,	// (0x0008a8d5) cntbar_detail_list_event_pane_g

0x8938,	// (0x000834d3) cntbar_detail_list_event_pane_t1_ParamLimits

0x8938,	// (0x000834d3) cntbar_detail_list_event_pane_t1

0x894d,	// (0x000834e8) cntbar_detail_list_event_pane_t2_ParamLimits

0x894d,	// (0x000834e8) cntbar_detail_list_event_pane_t2

0x0002,

0xfd47,	// (0x0008a8e2) cntbar_detail_list_event_pane_t_ParamLimits

0xfd47,	// (0x0008a8e2) cntbar_detail_list_event_pane_t

0xac4b,	// (0x000857e6) cell_cntbar_detail_list_shct_pane_g1

0xb99d,	// (0x00086538) navi_pane_mv_g3

0xa541,	// (0x000850dc) main_cntbar_detail_pane_ParamLimits

0x10d4,	// (0x0007bc6f) main_notif_wgt_pane

0xd94f,	// (0x000884ea) aid_tch_main_mp4_pane_g4

0xdbc7,	// (0x00088762) popup_slider_window_cp02

0xdf49,	// (0x00088ae4) list_recal_day_event_pane

0x8795,	// (0x00083330) cntbar_detail_btn_pane_ParamLimits

0x8795,	// (0x00083330) cntbar_detail_btn_pane

0x87ab,	// (0x00083346) cntbar_detail_btn_pane_cp01_ParamLimits

0x87ab,	// (0x00083346) cntbar_detail_btn_pane_cp01

0x87d1,	// (0x0008336c) cntbar_detail_list_shct_pane_ParamLimits

0x87e1,	// (0x0008337c) cntbar_detail_pane_g1_ParamLimits

0x87e1,	// (0x0008337c) cntbar_detail_pane_g1

0x87f1,	// (0x0008338c) cntbar_detail_pane_t1_ParamLimits

0x87f1,	// (0x0008338c) cntbar_detail_pane_t1

0x88d8,	// (0x00083473) cntbar_detail_list_event_pane_g3_ParamLimits

0x88d8,	// (0x00083473) cntbar_detail_list_event_pane_g3

0x88f0,	// (0x0008348b) cntbar_detail_list_event_pane_g4_ParamLimits

0x88f0,	// (0x0008348b) cntbar_detail_list_event_pane_g4

0x8908,	// (0x000834a3) cntbar_detail_list_event_pane_g5_ParamLimits

0x8908,	// (0x000834a3) cntbar_detail_list_event_pane_g5

0x8920,	// (0x000834bb) cntbar_detail_list_event_pane_g6_ParamLimits

0x8920,	// (0x000834bb) cntbar_detail_list_event_pane_g6

0x8962,	// (0x000834fd) cntbar_detail_list_event_pane_t3_ParamLimits

0x8962,	// (0x000834fd) cntbar_detail_list_event_pane_t3

0x8974,	// (0x0008350f) popup_notif_wgt_window_ParamLimits

0x8974,	// (0x0008350f) popup_notif_wgt_window

0x898d,	// (0x00083528) popup_submenu_window_cp01_ParamLimits

0x898d,	// (0x00083528) popup_submenu_window_cp01

0xaf08,	// (0x00085aa3) bg_popup_window_pane_cp10

0x89a3,	// (0x0008353e) listscroll_notif_wgt_pane

0x89b5,	// (0x00083550) list_notif_wgt_window

0x89be,	// (0x00083559) scroll_pane_cp033

0x89c7,	// (0x00083562) list_notif_wgt_row_pane_ParamLimits

0x89c7,	// (0x00083562) list_notif_wgt_row_pane

0x89d7,	// (0x00083572) aid_size_list_notif_wgt_del

0x89e4,	// (0x0008357f) list_notif_wgt_row_pane_g1

0x89f0,	// (0x0008358b) list_notif_wgt_row_pane_g2

0x89ff,	// (0x0008359a) list_notif_wgt_row_pane_g3

0x0002,

0xfd4e,	// (0x0008a8e9) list_notif_wgt_row_pane_g

0x8a0c,	// (0x000835a7) list_notif_wgt_row_pane_t1

0x8a22,	// (0x000835bd) list_notif_wgt_row_pane_t2

0x8a34,	// (0x000835cf) list_notif_wgt_row_pane_t3

0x0002,

0xfd55,	// (0x0008a8f0) list_notif_wgt_row_pane_t

0xea92,	// (0x0008962d) list_recal_day_event_pane_g1

0x8a46,	// (0x000835e1) list_recal_day_event_pane_t1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp045

0x8a55,	// (0x000835f0) cntbar_detail_btn_pane_t1

0xbad0,	// (0x0008666b) main_callh_pane_ParamLimits

0xbad0,	// (0x0008666b) main_callh_pane

0x10d4,	// (0x0007bc6f) main_coverflow0_pane

0x10d4,	// (0x0007bc6f) main_wgtman_pane

0x76c9,	// (0x00082264) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x76c9,	// (0x00082264) main_fs_bigclock_unlock_btn_pane

0x7dce,	// (0x00082969) bg_button_pane_cp16

0x7dde,	// (0x00082979) cell_tport_appsw_pane_g3

0x8a63,	// (0x000835fe) cf0_flow_pane_ParamLimits

0x8a63,	// (0x000835fe) cf0_flow_pane

0x8a78,	// (0x00083613) listscroll_cf0_pane

0x8a83,	// (0x0008361e) main_cf0_pane_g1

0x8a95,	// (0x00083630) main_cf0_pane_t1_ParamLimits

0x8a95,	// (0x00083630) main_cf0_pane_t1

0x8aac,	// (0x00083647) main_cf0_pane_t2_ParamLimits

0x8aac,	// (0x00083647) main_cf0_pane_t2

0x0001,

0xfd61,	// (0x0008a8fc) main_cf0_pane_t_ParamLimits

0xfd61,	// (0x0008a8fc) main_cf0_pane_t

0x8ac3,	// (0x0008365e) scroll_pane_cp11

0x8ace,	// (0x00083669) cf0_flow_pane_g1

0x8ad6,	// (0x00083671) cf0_flow_pane_g2

0x0001,

0xfd66,	// (0x0008a901) cf0_flow_pane_g

0x8ade,	// (0x00083679) cf0_flow_pane_t1

0x10d4,	// (0x0007bc6f) main_call6_pane

0x10d4,	// (0x0007bc6f) main_calllock_pane

0x8aec,	// (0x00083687) call6_btn_grp_pane_ParamLimits

0x8aec,	// (0x00083687) call6_btn_grp_pane

0x8b06,	// (0x000836a1) call6_pane_g1_ParamLimits

0x8b06,	// (0x000836a1) call6_pane_g1

0x8b1c,	// (0x000836b7) popup_call6_1st_window_ParamLimits

0x8b1c,	// (0x000836b7) popup_call6_1st_window

0x8b2d,	// (0x000836c8) popup_call6_2nd_window_ParamLimits

0x8b2d,	// (0x000836c8) popup_call6_2nd_window

0x8b3e,	// (0x000836d9) cell_call6_btn_pane_ParamLimits

0x8b3e,	// (0x000836d9) cell_call6_btn_pane

0xaf08,	// (0x00085aa3) bg_popup_call2_in_pane_cp03

0x8b51,	// (0x000836ec) popup_call6_1st_window_g1

0x8b59,	// (0x000836f4) popup_call6_1st_window_g2

0x8b61,	// (0x000836fc) popup_call6_1st_window_g3

0x0002,

0xfd6b,	// (0x0008a906) popup_call6_1st_window_g

0x8b69,	// (0x00083704) popup_call6_1st_window_t1

0x8b78,	// (0x00083713) popup_call6_1st_window_t2

0x8b86,	// (0x00083721) popup_call6_1st_window_t3

0x0002,

0xfd72,	// (0x0008a90d) popup_call6_1st_window_t

0xaf08,	// (0x00085aa3) bg_popup_call2_in_pane_cp04

0x8b94,	// (0x0008372f) popup_call6_2nd_window_g1

0x8b9c,	// (0x00083737) popup_call6_2nd_window_g2

0x8ba4,	// (0x0008373f) popup_call6_2nd_window_g3

0x0002,

0xfd79,	// (0x0008a914) popup_call6_2nd_window_g

0x8bac,	// (0x00083747) popup_call6_2nd_window_t1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp15

0x8bbb,	// (0x00083756) cell_call6_btn_pane_g1

0x8bc4,	// (0x0008375f) cell_call6_btn_pane_t1

0x8bd3,	// (0x0008376e) listscroll_wgtman_pane_ParamLimits

0x8bd3,	// (0x0008376e) listscroll_wgtman_pane

0x8bf4,	// (0x0008378f) wgtman_btn_pane_ParamLimits

0x8bf4,	// (0x0008378f) wgtman_btn_pane

0xb7a4,	// (0x0008633f) aid_scroll_copy1

0x8c37,	// (0x000837d2) list_wgtman_pane

0x8c41,	// (0x000837dc) wgtman_btn_pane_g1_ParamLimits

0x8c41,	// (0x000837dc) wgtman_btn_pane_g1

0x8c6d,	// (0x00083808) wgtman_btn_pane_t1_ParamLimits

0x8c6d,	// (0x00083808) wgtman_btn_pane_t1

0x8caa,	// (0x00083845) wgtman_btn_pane_t2_ParamLimits

0x8caa,	// (0x00083845) wgtman_btn_pane_t2

0x0001,

0xfd80,	// (0x0008a91b) wgtman_btn_pane_t_ParamLimits

0xfd80,	// (0x0008a91b) wgtman_btn_pane_t

0x8cc1,	// (0x0008385c) listrow_wgtman_pane_ParamLimits

0x8cc1,	// (0x0008385c) listrow_wgtman_pane

0x8cd3,	// (0x0008386e) listrow_wgtman_pane_g1

0x8ce0,	// (0x0008387b) listrow_wgtman_pane_g2

0x0001,

0xfd85,	// (0x0008a920) listrow_wgtman_pane_g

0x0fa8,	// (0x0007bb43) listrow_wgtman_pane_t1

0x0fc0,	// (0x0007bb5b) listrow_wgtman_pane_t2

0x0001,

0xfd8a,	// (0x0008a925) listrow_wgtman_pane_t

0x0fe6,	// (0x0007bb81) wait_bar_pane_cp09

0x8cfe,	// (0x00083899) main_calllock_btn_pane

0x8d08,	// (0x000838a3) main_calllock_pane_g1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp17

0x8bbb,	// (0x00083756) main_calllock_btn_pane_g1

0x8d10,	// (0x000838ab) main_calllock_btn_pane_t1

0x10d4,	// (0x0007bc6f) main_dialer3_pane

0x10d4,	// (0x0007bc6f) main_fmrd2_pane

0xac4b,	// (0x000857e6) main_fs_bigclock_unlock_btn_pane_g1

0x8d27,	// (0x000838c2) main_fs_bigclock_unlock_btn_pane_t1

0x8d35,	// (0x000838d0) area_fmrd2_info_pane_ParamLimits

0x8d35,	// (0x000838d0) area_fmrd2_info_pane

0x8d46,	// (0x000838e1) area_fmrd2_visual_pane_ParamLimits

0x8d46,	// (0x000838e1) area_fmrd2_visual_pane

0x8d54,	// (0x000838ef) fmrd2_indi_pane_ParamLimits

0x8d54,	// (0x000838ef) fmrd2_indi_pane

0x8d61,	// (0x000838fc) area_fmrd2_visual_pane_g1

0x8d69,	// (0x00083904) area_fmrd2_visual_pane_t1

0x8d79,	// (0x00083914) area_fmrd2_visual_pane_t2

0x8d89,	// (0x00083924) area_fmrd2_visual_pane_t3

0x0002,

0xfd94,	// (0x0008a92f) area_fmrd2_visual_pane_t

0x8d99,	// (0x00083934) area_fmrd2_info_pane_g1

0x8da1,	// (0x0008393c) area_fmrd2_info_pane_t1

0x8db1,	// (0x0008394c) area_fmrd2_info_pane_t2

0x8dc1,	// (0x0008395c) area_fmrd2_info_pane_t3

0x8dd1,	// (0x0008396c) area_fmrd2_info_pane_t4

0x0003,

0xfd9b,	// (0x0008a936) area_fmrd2_info_pane_t

0x8ddf,	// (0x0008397a) fmrd2_indi_pane_t1

0x8def,	// (0x0008398a) fmrd2_indi_pane_t2

0x8dff,	// (0x0008399a) fmrd2_indi_pane_t3

0x0002,

0xfda4,	// (0x0008a93f) fmrd2_indi_pane_t

0x774e,	// (0x000822e9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x774e,	// (0x000822e9) list_single_fs_bigclock_indicator_pane_g5

0x77ff,	// (0x0008239a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x77ff,	// (0x0008239a) list_single_fs_bigclock_indicator_pane_t5

0x8087,	// (0x00082c22) aid_cell_bcale_month_pane_ParamLimits

0x8087,	// (0x00082c22) aid_cell_bcale_month_pane

0x80a5,	// (0x00082c40) bcale_month_pane_ParamLimits

0x80a5,	// (0x00082c40) bcale_month_pane

0x80c9,	// (0x00082c64) bcale_preview_pane_ParamLimits

0x80c9,	// (0x00082c64) bcale_preview_pane

0x8702,	// (0x0008329d) list_single_fs_bigclock_pane_t1_ParamLimits

0x8721,	// (0x000832bc) list_single_fs_bigclock_pane_t2_ParamLimits

0x8721,	// (0x000832bc) list_single_fs_bigclock_pane_t2

0x0001,

0xfd1f,	// (0x0008a8ba) list_single_fs_bigclock_pane_t_ParamLimits

0xfd1f,	// (0x0008a8ba) list_single_fs_bigclock_pane_t

0x8d1f,	// (0x000838ba) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd8f,	// (0x0008a92a) main_fs_bigclock_unlock_btn_pane_g

0x8e0f,	// (0x000839aa) aid_dia3_key_size_ParamLimits

0x8e0f,	// (0x000839aa) aid_dia3_key_size

0x8e1e,	// (0x000839b9) aid_dia3_listrow_size_ParamLimits

0x8e1e,	// (0x000839b9) aid_dia3_listrow_size

0x8e33,	// (0x000839ce) dia3_keypad_fun_pane_ParamLimits

0x8e33,	// (0x000839ce) dia3_keypad_fun_pane

0x8e4f,	// (0x000839ea) dia3_keypad_num_pane_ParamLimits

0x8e4f,	// (0x000839ea) dia3_keypad_num_pane

0x8e6a,	// (0x00083a05) dia3_listscroll_pane_ParamLimits

0x8e6a,	// (0x00083a05) dia3_listscroll_pane

0x8e7d,	// (0x00083a18) dia3_numentry_pane_ParamLimits

0x8e7d,	// (0x00083a18) dia3_numentry_pane

0x8e95,	// (0x00083a30) dia3_list_pane

0x8ea0,	// (0x00083a3b) scroll_pane_cp12

0x10d4,	// (0x0007bc6f) bg_dia3_numentry_pane

0x8eab,	// (0x00083a46) dia3_numentry_pane_t1

0x8eba,	// (0x00083a55) cell_dia3_key_num_pane

0x8ec2,	// (0x00083a5d) cell_dia3_key0_fun_pane_ParamLimits

0x8ec2,	// (0x00083a5d) cell_dia3_key0_fun_pane

0x8ed6,	// (0x00083a71) cell_dia3_key1_fun_pane_ParamLimits

0x8ed6,	// (0x00083a71) cell_dia3_key1_fun_pane

0x8eee,	// (0x00083a89) dia3_listrow_pane

0x71e0,	// (0x00081d7b) bg_dia3_numentry_pane_g1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp21

0x8f00,	// (0x00083a9b) cell_dia3_key_num_pane_t1

0x8f0e,	// (0x00083aa9) cell_dia3_key_num_pane_t2

0x8f1d,	// (0x00083ab8) cell_dia3_key_num_pane_t3

0x8f2c,	// (0x00083ac7) cell_dia3_key_num_pane_t4

0x0003,

0xfdab,	// (0x0008a946) cell_dia3_key_num_pane_t

0x10d4,	// (0x0007bc6f) bg_button_pane_cp19

0x8f3b,	// (0x00083ad6) cell_dia3_key0_fun_pane_g1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp20

0x8f43,	// (0x00083ade) cell_dia3_key1_fun_pane_g1

0x8f4b,	// (0x00083ae6) area_left_week_number_pane

0x8f57,	// (0x00083af2) area_top_day_name_pane

0x8f6a,	// (0x00083b05) frame_month_view_pane

0x8f7d,	// (0x00083b18) grid_month_view_pane

0x8f8b,	// (0x00083b26) cell_top_day_name_pane_ParamLimits

0x8f8b,	// (0x00083b26) cell_top_day_name_pane

0x8fb8,	// (0x00083b53) cell_area_left_week_number_pane_ParamLimits

0x8fb8,	// (0x00083b53) cell_area_left_week_number_pane

0x8fcc,	// (0x00083b67) cell_month_view_pane_ParamLimits

0x8fcc,	// (0x00083b67) cell_month_view_pane

0x8ff9,	// (0x00083b94) frm_month_g1

0x9006,	// (0x00083ba1) frm_month_g2

0x9019,	// (0x00083bb4) frm_month_g3

0x902c,	// (0x00083bc7) frm_month_g4

0x903f,	// (0x00083bda) frm_month_g5

0x9052,	// (0x00083bed) frm_month_g6

0x9065,	// (0x00083c00) frm_month_g7

0x9078,	// (0x00083c13) frm_month_g8

0x9085,	// (0x00083c20) frm_month_g9

0x9095,	// (0x00083c30) frm_month_g10

0x90a5,	// (0x00083c40) frm_month_g11

0x90b5,	// (0x00083c50) frm_month_g12

0x90c7,	// (0x00083c62) frm_month_g13

0x90d9,	// (0x00083c74) frm_month_g14

0x90ed,	// (0x00083c88) frm_month_g15

0x9101,	// (0x00083c9c) frm_month_g16

0x000f,

0xfdb4,	// (0x0008a94f) frm_month_g

0x9115,	// (0x00083cb0) cell_top_day_name_pane_t1

0x9128,	// (0x00083cc3) cell_area_left_week_number_pane_g1

0x9134,	// (0x00083ccf) cell_area_left_week_number_pane_t1

0xac05,	// (0x000857a0) cell_month_view_pane_g1

0x9147,	// (0x00083ce2) cell_month_view_pane_t1

0x10d4,	// (0x0007bc6f) main_fps_pane

0x7b25,	// (0x000826c0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x7b25,	// (0x000826c0) cmail_ddmenu_btn02_pane_cp1

0x7b41,	// (0x000826dc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x7b41,	// (0x000826dc) cmail_ddmenu_btn02_pane_cp2

0x8445,	// (0x00082fe0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8445,	// (0x00082fe0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd2,	// (0x0008a86d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd2,	// (0x0008a86d) cmail_ddmenu_btn02_pane_g

0x8463,	// (0x00082ffe) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8463,	// (0x00082ffe) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcd7,	// (0x0008a872) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcd7,	// (0x0008a872) cmail_ddmenu_btn02_pane_t

0x915a,	// (0x00083cf5) fps_text_pane_ParamLimits

0x915a,	// (0x00083cf5) fps_text_pane

0x9171,	// (0x00083d0c) main_fps_pane_g1_ParamLimits

0x9171,	// (0x00083d0c) main_fps_pane_g1

0x918b,	// (0x00083d26) wait_bar_pane_cp010_ParamLimits

0x918b,	// (0x00083d26) wait_bar_pane_cp010

0x919c,	// (0x00083d37) fps_text_pane_t1_ParamLimits

0x919c,	// (0x00083d37) fps_text_pane_t1

0x55c1,	// (0x0008015c) cam4_image_uncrop_pane_g1

0x55ca,	// (0x00080165) cam4_image_uncrop_pane_g2

0x55d3,	// (0x0008016e) cam4_image_uncrop_pane_g3

0x55dc,	// (0x00080177) cam4_image_uncrop_pane_g4

0x0003,

0xf816,	// (0x0008a3b1) cam4_image_uncrop_pane_g

0x8eee,	// (0x00083a89) dia3_listrow_pane_ParamLimits

0x10d4,	// (0x0007bc6f) main_phob2_pane

0x7d76,	// (0x00082911) cell_tport_appsw_pane_cp02_ParamLimits

0x7d76,	// (0x00082911) cell_tport_appsw_pane_cp02

0x7d8a,	// (0x00082925) cell_tport_appsw_pane_cp03_ParamLimits

0x7d8a,	// (0x00082925) cell_tport_appsw_pane_cp03

0x10d4,	// (0x0007bc6f) phob2_contact_card_pane

0x10d4,	// (0x0007bc6f) phob2_listscroll_pane

0x91b4,	// (0x00083d4f) phob2_list_pane

0x83fb,	// (0x00082f96) scroll_pane_cp034

0x91bc,	// (0x00083d57) phob2_cc_data_pane_ParamLimits

0x91bc,	// (0x00083d57) phob2_cc_data_pane

0x91db,	// (0x00083d76) phob2_cc_listscroll_pane_ParamLimits

0x91db,	// (0x00083d76) phob2_cc_listscroll_pane

0x8cc1,	// (0x0008385c) list_double_large_graphic_phob2_pane_ParamLimits

0x8cc1,	// (0x0008385c) list_double_large_graphic_phob2_pane

0x91f9,	// (0x00083d94) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x91f9,	// (0x00083d94) list_double_large_graphic_phob2_pane_g1

0x0ff8,	// (0x0007bb93) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0ff8,	// (0x0007bb93) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd5,	// (0x0008a970) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd5,	// (0x0008a970) list_double_large_graphic_phob2_pane_g

0x1010,	// (0x0007bbab) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1010,	// (0x0007bbab) list_double_large_graphic_phob2_pane_t1

0x1025,	// (0x0007bbc0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1025,	// (0x0007bbc0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdde,	// (0x0008a979) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdde,	// (0x0008a979) list_double_large_graphic_phob2_pane_t

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp024

0x9214,	// (0x00083daf) phob2_cc_button_pane

0x921c,	// (0x00083db7) phob2_cc_data_pane_g1_ParamLimits

0x921c,	// (0x00083db7) phob2_cc_data_pane_g1

0x9233,	// (0x00083dce) phob2_cc_data_pane_g2_ParamLimits

0x9233,	// (0x00083dce) phob2_cc_data_pane_g2

0x0001,

0xfde3,	// (0x0008a97e) phob2_cc_data_pane_g_ParamLimits

0xfde3,	// (0x0008a97e) phob2_cc_data_pane_g

0x9245,	// (0x00083de0) phob2_cc_data_pane_t1_ParamLimits

0x9245,	// (0x00083de0) phob2_cc_data_pane_t1

0x925d,	// (0x00083df8) phob2_cc_data_pane_t2_ParamLimits

0x925d,	// (0x00083df8) phob2_cc_data_pane_t2

0x9275,	// (0x00083e10) phob2_cc_data_pane_t3_ParamLimits

0x9275,	// (0x00083e10) phob2_cc_data_pane_t3

0x0002,

0xfde8,	// (0x0008a983) phob2_cc_data_pane_t_ParamLimits

0xfde8,	// (0x0008a983) phob2_cc_data_pane_t

0x928d,	// (0x00083e28) phob2_cc_list_pane_ParamLimits

0x928d,	// (0x00083e28) phob2_cc_list_pane

0xec35,	// (0x000897d0) scroll_pane_cp035_ParamLimits

0xec35,	// (0x000897d0) scroll_pane_cp035

0xa541,	// (0x000850dc) bg_button_pane_cp033

0x9299,	// (0x00083e34) phob2_cc_button_pane_g1

0x92a5,	// (0x00083e40) phob2_cc_button_pane_t1

0x92ba,	// (0x00083e55) phob2_cc_button_pane_t2

0x0001,

0xfdef,	// (0x0008a98a) phob2_cc_button_pane_t

0x92cc,	// (0x00083e67) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92cc,	// (0x00083e67) list_double_large_graphic_phob2_cc_pane

0x92fc,	// (0x00083e97) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92fc,	// (0x00083e97) list_double_large_graphic_phob2_cc_pane_g1

0x103a,	// (0x0007bbd5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x103a,	// (0x0007bbd5) list_double_large_graphic_phob2_cc_pane_g2

0x1046,	// (0x0007bbe1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1046,	// (0x0007bbe1) list_double_large_graphic_phob2_cc_pane_g3

0x1052,	// (0x0007bbed) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1052,	// (0x0007bbed) list_double_large_graphic_phob2_cc_pane_g4

0x105e,	// (0x0007bbf9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x105e,	// (0x0007bbf9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf4,	// (0x0008a98f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf4,	// (0x0008a98f) list_double_large_graphic_phob2_cc_pane_g

0x106a,	// (0x0007bc05) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x106a,	// (0x0007bc05) list_double_large_graphic_phob2_cc_pane_t1

0x1093,	// (0x0007bc2e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1093,	// (0x0007bc2e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdff,	// (0x0008a99a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdff,	// (0x0008a99a) list_double_large_graphic_phob2_cc_pane_t

0x9308,	// (0x00083ea3) list_highlight_pane_cp025_ParamLimits

0x9308,	// (0x00083ea3) list_highlight_pane_cp025

0xa541,	// (0x000850dc) bg_button_pane_cp033_ParamLimits

0x9299,	// (0x00083e34) phob2_cc_button_pane_g1_ParamLimits

0x92a5,	// (0x00083e40) phob2_cc_button_pane_t1_ParamLimits

0x92ba,	// (0x00083e55) phob2_cc_button_pane_t2_ParamLimits

0xfdef,	// (0x0008a98a) phob2_cc_button_pane_t_ParamLimits

0x12fe,	// (0x0007be99) popup_wgtman_window

0xe8f3,	// (0x0008948e) scroll_pane_cp038

0x8c19,	// (0x000837b4) wgtman_btn_pane_cp_01_ParamLimits

0x8c19,	// (0x000837b4) wgtman_btn_pane_cp_01

0x9316,	// (0x00083eb1) wgtman_content_pane

0x931f,	// (0x00083eba) wgtman_heading_pane

0x10d4,	// (0x0007bc6f) bg_heading_pane_cp02

0x9328,	// (0x00083ec3) wgtman_heading_pane_g1

0x9330,	// (0x00083ecb) wgtman_heading_pane_t1

0x933e,	// (0x00083ed9) scroll_pane_cp036

0x9346,	// (0x00083ee1) wgtman_list_pane

0x934e,	// (0x00083ee9) wgtman_list_pane_t1_ParamLimits

0x934e,	// (0x00083ee9) wgtman_list_pane_t1

0xe68d,	// (0x00089228) cam4_grid_pane

0x0a35,	// (0x0007b5d0) bg_button_pane_cp015_ParamLimits

0x61dc,	// (0x00080d77) bg_button_pane_cp016_ParamLimits

0x61e8,	// (0x00080d83) bg_button_pane_cp017_ParamLimits

0x6203,	// (0x00080d9e) popup_vitu2_query_window_g3_ParamLimits

0x6203,	// (0x00080d9e) popup_vitu2_query_window_g3

0x0aec,	// (0x0007b687) popup_vitu2_query_window_t6_ParamLimits

0x0aec,	// (0x0007b687) popup_vitu2_query_window_t6

0x0b17,	// (0x0007b6b2) popup_vitu2_query_window_t7_ParamLimits

0x0b17,	// (0x0007b6b2) popup_vitu2_query_window_t7

0x55c1,	// (0x0008015c) cam4_grid_pane_g1

0x55ca,	// (0x00080165) cam4_grid_pane_g2

0x9368,	// (0x00083f03) cam4_grid_pane_g3

0x9371,	// (0x00083f0c) cam4_grid_pane_g4

0x0003,

0xfe04,	// (0x0008a99f) cam4_grid_pane_g

0x1dc7,	// (0x0007c962) aid_placing_vt_slider_lsc_ParamLimits

0x20d2,	// (0x0007cc6d) vidtel_button_pane_ParamLimits

0x20d2,	// (0x0007cc6d) vidtel_button_pane

0x10d4,	// (0x0007bc6f) bg_button_pane_cp034

0x937c,	// (0x00083f17) vidtel_button_pane_g1

0x9384,	// (0x00083f1f) vidtel_button_pane_t1

0xea46,	// (0x000895e1) aid_size_vtel_slider_touch

0xec35,	// (0x000897d0) scroll_pane_cp039

0x724f,	// (0x00081dea) ncim_query_button_pane_cp01_ParamLimits

0x726e,	// (0x00081e09) ncimui_query_pane_g1_ParamLimits

0xa541,	// (0x000850dc) input_focus_pane_cp012_ParamLimits

0x7293,	// (0x00081e2e) ncim_query_entry_pane_t1_ParamLimits

0xec35,	// (0x000897d0) scroll_pane_cp039_ParamLimits

0xb888,	// (0x00086423) navi_pane_bcale_mc_g1

0xb890,	// (0x0008642b) navi_pane_bcale_mc_t1

0x7c32,	// (0x000827cd) main_sp_fs_email_pane_g1

0x7c3e,	// (0x000827d9) main_sp_fs_email_pane_g2

0x0001,

0xfc02,	// (0x0008a79d) main_sp_fs_email_pane_g

0x823c,	// (0x00082dd7) list_single_cale_mrui_row_pane_g3_ParamLimits

0x823c,	// (0x00082dd7) list_single_cale_mrui_row_pane_g3

0x0f6d,	// (0x0007bb08) list_single_recal_day_pane_g5_event_pane

0xdfa6,	// (0x00088b41) list_single_recal_day_pane_g7

0xdff1,	// (0x00088b8c) list_recal_day_event_pane_cp01

0xdffa,	// (0x00088b95) list_recal_vselct_arw_lo_pane_cp01

0xe002,	// (0x00088b9d) list_recal_vselct_arw_up_pane_cp01

0xe00a,	// (0x00088ba5) list_recal_vselct_pane_cp01

0xea92,	// (0x0008962d) list_recal_day_event_pane_cp01_g1

0xe014,	// (0x00088baf) list_recal_day_event_pane_cp01_t1

0xdfae,	// (0x00088b49) list_single_recal_day_pane_t1_ParamLimits

0xdfc0,	// (0x00088b5b) list_single_recal_day_pane_t2_ParamLimits

0xfce7,	// (0x0008a882) list_single_recal_day_pane_t_ParamLimits

0xab8a,	// (0x00085725) bg_notes_pane_ParamLimits

0xac87,	// (0x00085822) list_notes_pane_ParamLimits

0x147b,	// (0x0007c016) scroll_pane_cp06_ParamLimits

0xacc3,	// (0x0008585e) main_notes_pane_ParamLimits

0xa541,	// (0x000850dc) main_welc_pane

0x93c7,	// (0x00083f62) main_welc_body_pane_ParamLimits

0x93c7,	// (0x00083f62) main_welc_body_pane

0x93e5,	// (0x00083f80) main_welc_opti_pane_ParamLimits

0x93e5,	// (0x00083f80) main_welc_opti_pane

0x9461,	// (0x00083ffc) main_welc_pane_t1_ParamLimits

0x9461,	// (0x00083ffc) main_welc_pane_t1

0x9659,	// (0x000841f4) main_welc_body_row_pane_ParamLimits

0x9659,	// (0x000841f4) main_welc_body_row_pane

0xabf7,	// (0x00085792) main_welc_opti_row_pane_ParamLimits

0xabf7,	// (0x00085792) main_welc_opti_row_pane

0xe032,	// (0x00088bcd) main_welc_opti_row_pane_g1

0x966d,	// (0x00084208) main_welc_opti_row_pane_t1

0xe03a,	// (0x00088bd5) main_welc_body_row_pane_t1

0x89ad,	// (0x00083548) popup_notif_wgt_heading_pane

0x89d7,	// (0x00083572) aid_size_list_notif_wgt_del_ParamLimits

0x89e4,	// (0x0008357f) list_notif_wgt_row_pane_g1_ParamLimits

0x89f0,	// (0x0008358b) list_notif_wgt_row_pane_g2_ParamLimits

0x89ff,	// (0x0008359a) list_notif_wgt_row_pane_g3_ParamLimits

0xfd4e,	// (0x0008a8e9) list_notif_wgt_row_pane_g_ParamLimits

0x8a0c,	// (0x000835a7) list_notif_wgt_row_pane_t1_ParamLimits

0x8a22,	// (0x000835bd) list_notif_wgt_row_pane_t2_ParamLimits

0x8a34,	// (0x000835cf) list_notif_wgt_row_pane_t3_ParamLimits

0xfd55,	// (0x0008a8f0) list_notif_wgt_row_pane_t_ParamLimits

0x8cd3,	// (0x0008386e) listrow_wgtman_pane_g1_ParamLimits

0x8ce0,	// (0x0008387b) listrow_wgtman_pane_g2_ParamLimits

0xfd85,	// (0x0008a920) listrow_wgtman_pane_g_ParamLimits

0x0fa8,	// (0x0007bb43) listrow_wgtman_pane_t1_ParamLimits

0x0fc0,	// (0x0007bb5b) listrow_wgtman_pane_t2_ParamLimits

0xfd8a,	// (0x0008a925) listrow_wgtman_pane_t_ParamLimits

0x0fe6,	// (0x0007bb81) wait_bar_pane_cp09_ParamLimits

0x10d4,	// (0x0007bc6f) bg_popup_heading_pane_cp02

0xe049,	// (0x00088be4) popup_notif_wgt_heading_pane_g1

0xe051,	// (0x00088bec) popup_notif_wgt_heading_pane_t1

0x10d4,	// (0x0007bc6f) main_vids_pane

0x10d4,	// (0x0007bc6f) vids_listscroll_pane

0x967c,	// (0x00084217) scroll_pane_cp040

0x10d4,	// (0x0007bc6f) vids_list_pane

0x9687,	// (0x00084222) vids_list_double_pane_ParamLimits

0x9687,	// (0x00084222) vids_list_double_pane

0x9698,	// (0x00084233) vids_list_double_pane_g1

0x96a1,	// (0x0008423c) vids_list_double_pane_t1

0x96b1,	// (0x0008424c) vids_list_double_pane_t2

0x0001,

0xfe23,	// (0x0008a9be) vids_list_double_pane_t

0xa541,	// (0x000850dc) main_ncimui_pane_ParamLimits

0x6f76,	// (0x00081b11) main_ncimui_pane_g1_ParamLimits

0x6f82,	// (0x00081b1d) main_ncimui_pane_g2_ParamLimits

0x6f82,	// (0x00081b1d) main_ncimui_pane_g2

0x0001,

0xfb08,	// (0x0008a6a3) main_ncimui_pane_g_ParamLimits

0xfb08,	// (0x0008a6a3) main_ncimui_pane_g

0x9400,	// (0x00083f9b) main_welc_pane_g1_ParamLimits

0x9400,	// (0x00083f9b) main_welc_pane_g1

0x9415,	// (0x00083fb0) main_welc_pane_g2_ParamLimits

0x9415,	// (0x00083fb0) main_welc_pane_g2

0x0003,

0xfe0d,	// (0x0008a9a8) main_welc_pane_g_ParamLimits

0xfe0d,	// (0x0008a9a8) main_welc_pane_g

0xab8a,	// (0x00085725) listscroll_mce_pane_ParamLimits

0xb9dd,	// (0x00086578) wait_bar_pane_cp10

0xcceb,	// (0x00087886) main_cale_day_pane_ParamLimits

0xcceb,	// (0x00087886) main_cale_week_pane_ParamLimits

0xab8a,	// (0x00085725) main_messa_pane_ParamLimits

0x4a96,	// (0x0007f631) main_clock2_btn_pane_ParamLimits

0x4a96,	// (0x0007f631) main_clock2_btn_pane

0xd59e,	// (0x00088139) main_clock2_btn_pane_cp01_ParamLimits

0xd59e,	// (0x00088139) main_clock2_btn_pane_cp01

0x81e1,	// (0x00082d7c) list_cale_mrui_pane_ParamLimits

0x8a8d,	// (0x00083628) main_cf0_pane_g2

0x0001,

0xfd5c,	// (0x0008a8f7) main_cf0_pane_g

0x8f4b,	// (0x00083ae6) area_left_week_number_pane_ParamLimits

0x8f57,	// (0x00083af2) area_top_day_name_pane_ParamLimits

0x8f6a,	// (0x00083b05) frame_month_view_pane_ParamLimits

0x8f7d,	// (0x00083b18) grid_month_view_pane_ParamLimits

0x8ff9,	// (0x00083b94) frm_month_g1_ParamLimits

0x9006,	// (0x00083ba1) frm_month_g2_ParamLimits

0x9019,	// (0x00083bb4) frm_month_g3_ParamLimits

0x902c,	// (0x00083bc7) frm_month_g4_ParamLimits

0x903f,	// (0x00083bda) frm_month_g5_ParamLimits

0x9052,	// (0x00083bed) frm_month_g6_ParamLimits

0x9065,	// (0x00083c00) frm_month_g7_ParamLimits

0x9078,	// (0x00083c13) frm_month_g8_ParamLimits

0x9085,	// (0x00083c20) frm_month_g9_ParamLimits

0x9095,	// (0x00083c30) frm_month_g10_ParamLimits

0x90a5,	// (0x00083c40) frm_month_g11_ParamLimits

0x90b5,	// (0x00083c50) frm_month_g12_ParamLimits

0x90c7,	// (0x00083c62) frm_month_g13_ParamLimits

0x90d9,	// (0x00083c74) frm_month_g14_ParamLimits

0x90ed,	// (0x00083c88) frm_month_g15_ParamLimits

0x9101,	// (0x00083c9c) frm_month_g16_ParamLimits

0xfdb4,	// (0x0008a94f) frm_month_g_ParamLimits

0x9115,	// (0x00083cb0) cell_top_day_name_pane_t1_ParamLimits

0x9128,	// (0x00083cc3) cell_area_left_week_number_pane_g1_ParamLimits

0x9134,	// (0x00083ccf) cell_area_left_week_number_pane_t1_ParamLimits

0xac05,	// (0x000857a0) cell_month_view_pane_g1_ParamLimits

0x9147,	// (0x00083ce2) cell_month_view_pane_t1_ParamLimits

0xab82,	// (0x0008571d) main_clock2_btn_pane_g1

0xe05f,	// (0x00088bfa) main_clock2_btn_pane_t1

0xa541,	// (0x000850dc) listscroll_cmail_pane_ParamLimits

0x7c32,	// (0x000827cd) main_sp_fs_email_pane_g1_ParamLimits

0x7c3e,	// (0x000827d9) main_sp_fs_email_pane_g2_ParamLimits

0xfc02,	// (0x0008a79d) main_sp_fs_email_pane_g_ParamLimits

0x8475,	// (0x00083010) list_recal_day_pane_ParamLimits

0x8486,	// (0x00083021) mian_recal_day_pane_t1

0x0d5b,	// (0x0007b8f6) list_single_dyc_row_text_pane_t4_ParamLimits

0x0d5b,	// (0x0007b8f6) list_single_dyc_row_text_pane_t4

0x0da4,	// (0x0007b93f) list_single_dyc_row_text_pane_t5_ParamLimits

0x0da4,	// (0x0007b93f) list_single_dyc_row_text_pane_t5

0xdd91,	// (0x0008892c) list_single_dyc_row_text_pane_t6_ParamLimits

0xdd91,	// (0x0008892c) list_single_dyc_row_text_pane_t6

0xb303,	// (0x00085e9e) aid_mgn_list_cale_time_pane

0xa541,	// (0x000850dc) main_gallery2_pane_ParamLimits

0xd5b4,	// (0x0008814f) main_clock2_pane_cp01_t1

0xd5c4,	// (0x0008815f) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x0008a28d) main_clock2_pane_cp01_t

0x180a,	// (0x0007c3a5) cale_week_scroll_pane_g16_ParamLimits

0x180a,	// (0x0007c3a5) cale_week_scroll_pane_g16

0xaf08,	// (0x00085aa3) vorec_slider_pane

0x9384,	// (0x00083f1f) vidtel_button_pane_t1_ParamLimits

0x8620,	// (0x000831bb) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8620,	// (0x000831bb) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8631,	// (0x000831cc) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8631,	// (0x000831cc) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0a,	// (0x0008a8a5) main_fs_bigclock_clock_pane_g_ParamLimits

0x8644,	// (0x000831df) main_fs_bigclock_clock_pane_t1_ParamLimits

0x865a,	// (0x000831f5) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd13,	// (0x0008a8ae) main_fs_bigclock_clock_pane_t_ParamLimits

0x436b,	// (0x0007ef06) main_mup3_lyrics_pane_ParamLimits

0x436b,	// (0x0007ef06) main_mup3_lyrics_pane

0x96d9,	// (0x00084274) main_mup3_lyrics_pane_t1_ParamLimits

0x96d9,	// (0x00084274) main_mup3_lyrics_pane_t1

0xd939,	// (0x000884d4) aid_main_mp4_pane_t1_area

0xd943,	// (0x000884de) aid_main_mp4_pane_t2_area

0xd9ed,	// (0x00088588) main_mp4_pane_g7_ParamLimits

0xd9ed,	// (0x00088588) main_mp4_pane_g7

0xd9f9,	// (0x00088594) main_mp4_pane_g8_ParamLimits

0xd9f9,	// (0x00088594) main_mp4_pane_g8

0x5394,	// (0x0007ff2f) aid_call6_pane_g1_size

0x92e6,	// (0x00083e81) list_double_large_graphic_phob2_other_pane_ParamLimits

0x92e6,	// (0x00083e81) list_double_large_graphic_phob2_other_pane

0xb2bb,	// (0x00085e56) list_double_large_graphic_phob2_other_pane_g1

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp026

0xa541,	// (0x000850dc) main_welc_pane_ParamLimits

0x7b9b,	// (0x00082736) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7b9b,	// (0x00082736) main_sp_fs_ctrlbar_pane_g3

0x7bb5,	// (0x00082750) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7bb5,	// (0x00082750) main_sp_fs_ctrlbar_pane_g4

0x7be9,	// (0x00082784) toolbar2_fixed_button_pane_cp01

0x7bf4,	// (0x0008278f) toolbar2_fixed_button_pane_cp02

0x7c01,	// (0x0008279c) toolbar2_fixed_button_pane_cp03

0x93ad,	// (0x00083f48) list_welc_entry_pane_ParamLimits

0x93ad,	// (0x00083f48) list_welc_entry_pane

0x942a,	// (0x00083fc5) main_welc_pane_g3_ParamLimits

0x942a,	// (0x00083fc5) main_welc_pane_g3

0x947f,	// (0x0008401a) main_welc_pane_t2_ParamLimits

0x947f,	// (0x0008401a) main_welc_pane_t2

0x949a,	// (0x00084035) main_welc_pane_t3_ParamLimits

0x949a,	// (0x00084035) main_welc_pane_t3

0x0005,

0xfe16,	// (0x0008a9b1) main_welc_pane_t_ParamLimits

0xfe16,	// (0x0008a9b1) main_welc_pane_t

0x95ca,	// (0x00084165) welc_button_pane_ParamLimits

0x95ca,	// (0x00084165) welc_button_pane

0x9644,	// (0x000841df) welc_service_logo_pane_ParamLimits

0x9644,	// (0x000841df) welc_service_logo_pane

0x96f5,	// (0x00084290) list_single_welc_entry_pane_ParamLimits

0x96f5,	// (0x00084290) list_single_welc_entry_pane

0x9706,	// (0x000842a1) list_single_welc_entry_pane_g1

0x970e,	// (0x000842a9) list_single_welc_entry_pane_t1

0x971c,	// (0x000842b7) list_single_welc_entry_pane_t2

0x0001,

0xfe28,	// (0x0008a9c3) list_single_welc_entry_pane_t

0x10d4,	// (0x0007bc6f) bg_button_pane_cp035

0x972a,	// (0x000842c5) welc_button_pane_t1

0xe06d,	// (0x00088c08) welc_service_logo_pane_g1

0xe076,	// (0x00088c11) welc_service_logo_pane_g2

0x0001,

0xfe2d,	// (0x0008a9c8) welc_service_logo_pane_g

0x10d4,	// (0x0007bc6f) main_int_radio_pane

0xad5e,	// (0x000858f9) list_single_fs_dyc_pane_g1

0x1004,	// (0x0007bb9f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x1004,	// (0x0007bb9f) list_double_large_graphic_phob2_pane_g3

0x9206,	// (0x00083da1) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9206,	// (0x00083da1) list_double_large_graphic_phob2_pane_g4

0x9738,	// (0x000842d3) main_int_radio1_pane_ParamLimits

0x9738,	// (0x000842d3) main_int_radio1_pane

0xe07f,	// (0x00088c1a) find_pane_cp02

0x9755,	// (0x000842f0) input_focus_pane_cp12_ParamLimits

0x9755,	// (0x000842f0) input_focus_pane_cp12

0x9765,	// (0x00084300) input_focus_pane_cp13_ParamLimits

0x9765,	// (0x00084300) input_focus_pane_cp13

0x9779,	// (0x00084314) input_focus_pane_cp14_ParamLimits

0x9779,	// (0x00084314) input_focus_pane_cp14

0xe088,	// (0x00088c23) int_radio1_listscroll_pane

0x978d,	// (0x00084328) main_int_radio1_pane_g1_ParamLimits

0x978d,	// (0x00084328) main_int_radio1_pane_g1

0x97a5,	// (0x00084340) main_int_radio1_pane_t1_ParamLimits

0x97a5,	// (0x00084340) main_int_radio1_pane_t1

0x97c0,	// (0x0008435b) main_int_radio1_pane_t2_ParamLimits

0x97c0,	// (0x0008435b) main_int_radio1_pane_t2

0x97db,	// (0x00084376) main_int_radio1_pane_t3_ParamLimits

0x97db,	// (0x00084376) main_int_radio1_pane_t3

0x97f6,	// (0x00084391) main_int_radio1_pane_t4_ParamLimits

0x97f6,	// (0x00084391) main_int_radio1_pane_t4

0xe092,	// (0x00088c2d) main_int_radio1_pane_t5_ParamLimits

0xe092,	// (0x00088c2d) main_int_radio1_pane_t5

0x9808,	// (0x000843a3) main_int_radio1_pane_t6_ParamLimits

0x9808,	// (0x000843a3) main_int_radio1_pane_t6

0x981d,	// (0x000843b8) main_int_radio1_pane_t7_ParamLimits

0x981d,	// (0x000843b8) main_int_radio1_pane_t7

0x9832,	// (0x000843cd) main_int_radio1_pane_t8_ParamLimits

0x9832,	// (0x000843cd) main_int_radio1_pane_t8

0x9851,	// (0x000843ec) main_int_radio1_pane_t9_ParamLimits

0x9851,	// (0x000843ec) main_int_radio1_pane_t9

0x9863,	// (0x000843fe) main_int_radio1_pane_t10_ParamLimits

0x9863,	// (0x000843fe) main_int_radio1_pane_t10

0x9889,	// (0x00084424) main_int_radio1_pane_t11_ParamLimits

0x9889,	// (0x00084424) main_int_radio1_pane_t11

0x98af,	// (0x0008444a) main_int_radio1_pane_t12_ParamLimits

0x98af,	// (0x0008444a) main_int_radio1_pane_t12

0x000b,

0xfe32,	// (0x0008a9cd) main_int_radio1_pane_t_ParamLimits

0xfe32,	// (0x0008a9cd) main_int_radio1_pane_t

0xe0a4,	// (0x00088c3f) int_radio_list_pane

0x83fb,	// (0x00082f96) scroll_pane_cp037

0xe0ac,	// (0x00088c47) list_double_large_graphic_int_radio_pane_ParamLimits

0xe0ac,	// (0x00088c47) list_double_large_graphic_int_radio_pane

0xe0c4,	// (0x00088c5f) list_double_large_graphic_int_radio_pane_g1

0xe0cd,	// (0x00088c68) list_double_large_graphic_int_radio_pane_t1

0xe0db,	// (0x00088c76) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4b,	// (0x0008a9e6) list_double_large_graphic_int_radio_pane_t

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp027

0xe022,	// (0x00088bbd) main_button_pane_4

0x943d,	// (0x00083fd8) main_welc_pane_g4_ParamLimits

0x943d,	// (0x00083fd8) main_welc_pane_g4

0x94b3,	// (0x0008404e) main_welc_pane_t4_ParamLimits

0x94b3,	// (0x0008404e) main_welc_pane_t4

0x94ca,	// (0x00084065) main_welc_pane_t5_ParamLimits

0x94ca,	// (0x00084065) main_welc_pane_t5

0x9507,	// (0x000840a2) main_welc_pane_t6_ParamLimits

0x9507,	// (0x000840a2) main_welc_pane_t6

0x95e1,	// (0x0008417c) welc_button_pane_2_ParamLimits

0x95e1,	// (0x0008417c) welc_button_pane_2

0x95fd,	// (0x00084198) welc_button_pane_3_ParamLimits

0x95fd,	// (0x00084198) welc_button_pane_3

0xe02a,	// (0x00088bc5) welc_button_pane_4

0x961c,	// (0x000841b7) welc_button_pane_5_ParamLimits

0x961c,	// (0x000841b7) welc_button_pane_5

0x1102,	// (0x0007bc9d) main_popup_welc_pane

0xe101,	// (0x00088c9c) main_welc_sk_g3

0xe10b,	// (0x00088ca6) main_welc_sk_g4

0xe115,	// (0x00088cb0) main_welc_sk_t3

0xe125,	// (0x00088cc0) main_welc_sk_t4

0xe135,	// (0x00088cd0) popup_welc_pane_t4

0xe143,	// (0x00088cde) popup_welc_pane_t5

0xe151,	// (0x00088cec) popup_welc_pane_t6

0x10d4,	// (0x0007bc6f) main_acti_pane

0x10d4,	// (0x0007bc6f) main_sso_pane

0x98c1,	// (0x0008445c) sso_body_pane_ParamLimits

0x98c1,	// (0x0008445c) sso_body_pane

0x98d5,	// (0x00084470) sso_logo_pane_ParamLimits

0x98d5,	// (0x00084470) sso_logo_pane

0x990e,	// (0x000844a9) sso_sk_pane_ParamLimits

0x990e,	// (0x000844a9) sso_sk_pane

0xe18f,	// (0x00088d2a) main_sso_logo_pane_g1

0x9920,	// (0x000844bb) sso_sk_pane_t1_ParamLimits

0x9920,	// (0x000844bb) sso_sk_pane_t1

0x993a,	// (0x000844d5) sso_sk_pane_t2_ParamLimits

0x993a,	// (0x000844d5) sso_sk_pane_t2

0x0001,

0xfe50,	// (0x0008a9eb) sso_sk_pane_t_ParamLimits

0xfe50,	// (0x0008a9eb) sso_sk_pane_t

0xe19a,	// (0x00088d35) aid_sso_gap

0xe1a3,	// (0x00088d3e) aid_sso_txt1

0xe1ad,	// (0x00088d48) aid_sso_txt2

0xe1b7,	// (0x00088d52) aid_sso_txt3

0x0002,

0xfe55,	// (0x0008a9f0) aid_sso_txt

0xe1c1,	// (0x00088d5c) aid_sso_widget

0x99a4,	// (0x0008453f) sso_btn_pane_ParamLimits

0x99a4,	// (0x0008453f) sso_btn_pane

0x9a28,	// (0x000845c3) sso_option_pane_ParamLimits

0x9a28,	// (0x000845c3) sso_option_pane

0x9ade,	// (0x00084679) sso_query_pane_ParamLimits

0x9ade,	// (0x00084679) sso_query_pane

0x9b34,	// (0x000846cf) sso_query_pane_cp01_ParamLimits

0x9b34,	// (0x000846cf) sso_query_pane_cp01

0x9b8e,	// (0x00084729) sso_t_hdr_pane_ParamLimits

0x9b8e,	// (0x00084729) sso_t_hdr_pane

0x9bb8,	// (0x00084753) sso_t_nml_pane_ParamLimits

0x9bb8,	// (0x00084753) sso_t_nml_pane

0xe1cb,	// (0x00088d66) sso_t_sub_pane

0x98e2,	// (0x0008447d) sso_popup_window_ParamLimits

0x98e2,	// (0x0008447d) sso_popup_window

0x9950,	// (0x000844eb) sso_apps_pane_ParamLimits

0x9950,	// (0x000844eb) sso_apps_pane

0x997a,	// (0x00084515) sso_body_pane_g1

0x9984,	// (0x0008451f) sso_body_pane_t1

0x9994,	// (0x0008452f) sso_body_pane_t2

0x0001,

0xfe5c,	// (0x0008a9f7) sso_body_pane_t

0x99f0,	// (0x0008458b) sso_btn_pane_cp01_ParamLimits

0x99f0,	// (0x0008458b) sso_btn_pane_cp01

0x9ab2,	// (0x0008464d) sso_prog_pane_ParamLimits

0x9ab2,	// (0x0008464d) sso_prog_pane

0x9c0e,	// (0x000847a9) sso_t_hdr_pane_t1_ParamLimits

0x9c0e,	// (0x000847a9) sso_t_hdr_pane_t1

0xe1e0,	// (0x00088d7b) input_focus_pane_cp10_ParamLimits

0xe1e0,	// (0x00088d7b) input_focus_pane_cp10

0xe1f4,	// (0x00088d8f) sso_query_pane_t1_ParamLimits

0xe1f4,	// (0x00088d8f) sso_query_pane_t1

0xe207,	// (0x00088da2) sso_query_pane_t2_ParamLimits

0xe207,	// (0x00088da2) sso_query_pane_t2

0xe220,	// (0x00088dbb) sso_query_pane_t3_ParamLimits

0xe220,	// (0x00088dbb) sso_query_pane_t3

0xe24a,	// (0x00088de5) sso_query_pane_t4_ParamLimits

0xe24a,	// (0x00088de5) sso_query_pane_t4

0x0003,

0xfe61,	// (0x0008a9fc) sso_query_pane_t_ParamLimits

0xfe61,	// (0x0008a9fc) sso_query_pane_t

0xe0f8,	// (0x00088c93) bg_button_pane_cp22

0xe0e9,	// (0x00088c84) sso_btn_pane_t1

0x9c21,	// (0x000847bc) sso_t_nml_pane_t1_ParamLimits

0x9c21,	// (0x000847bc) sso_t_nml_pane_t1

0xe26e,	// (0x00088e09) sso_option_row_pane_ParamLimits

0xe26e,	// (0x00088e09) sso_option_row_pane

0xe27b,	// (0x00088e16) sso_t_sub_pane_t1_ParamLimits

0xe27b,	// (0x00088e16) sso_t_sub_pane_t1

0xa541,	// (0x000850dc) bg_popup_window_pane_cp11_ParamLimits

0xa541,	// (0x000850dc) bg_popup_window_pane_cp11

0xe298,	// (0x00088e33) popup_sk_window_cp01_ParamLimits

0xe298,	// (0x00088e33) popup_sk_window_cp01

0xe2a5,	// (0x00088e40) sso_popup_body_pane_ParamLimits

0xe2a5,	// (0x00088e40) sso_popup_body_pane

0xe2b2,	// (0x00088e4d) scroll_pane_cp21_ParamLimits

0xe2b2,	// (0x00088e4d) scroll_pane_cp21

0xe2bf,	// (0x00088e5a) sso_popup_body_t_pane_ParamLimits

0xe2bf,	// (0x00088e5a) sso_popup_body_t_pane

0xe2cc,	// (0x00088e67) sso_popup_body_t_hdr_pane_ParamLimits

0xe2cc,	// (0x00088e67) sso_popup_body_t_hdr_pane

0x9c3c,	// (0x000847d7) sso_popup_body_t_nml_pane_ParamLimits

0x9c3c,	// (0x000847d7) sso_popup_body_t_nml_pane

0x9c63,	// (0x000847fe) sso_popup_body_t_sub_pane_ParamLimits

0x9c63,	// (0x000847fe) sso_popup_body_t_sub_pane

0xe2de,	// (0x00088e79) sso_popup_body_t_hdr_pane_t1

0x9c86,	// (0x00084821) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9c86,	// (0x00084821) sso_popup_body_t_nml_pane_t1

0xe2ee,	// (0x00088e89) sso_popup_body_t_sub_pane_t1_ParamLimits

0xe2ee,	// (0x00088e89) sso_popup_body_t_sub_pane_t1

0xac4b,	// (0x000857e6) sso_prog_pane_g1

0x9cbe,	// (0x00084859) sso_apps_pane_comp1_ParamLimits

0x9cbe,	// (0x00084859) sso_apps_pane_comp1

0xe313,	// (0x00088eae) sso_apps_pane_comp1_g1

0xe31b,	// (0x00088eb6) sso_apps_pane_comp1_t1

0xe337,	// (0x00088ed2) sso_option_row_pane_g1

0xe33f,	// (0x00088eda) sso_option_row_pane_t1

0x7e45,	// (0x000829e0) list_cmail_pane_ParamLimits

0x10d4,	// (0x0007bc6f) main_call7_pane

0x939a,	// (0x00083f35) bg_welc_area_ParamLimits

0x939a,	// (0x00083f35) bg_welc_area

0x9545,	// (0x000840e0) sso_t_hdr_pane_a_t1_ParamLimits

0x9545,	// (0x000840e0) sso_t_hdr_pane_a_t1

0x9560,	// (0x000840fb) sso_t_nml_pane_a_t1_ParamLimits

0x9560,	// (0x000840fb) sso_t_nml_pane_a_t1

0x958f,	// (0x0008412a) sso_t_sub_pane_a_t1_ParamLimits

0x958f,	// (0x0008412a) sso_t_sub_pane_a_t1

0x9632,	// (0x000841cd) welc_button_pane_cp01_ParamLimits

0x9632,	// (0x000841cd) welc_button_pane_cp01

0xe0e9,	// (0x00088c84) sso_btn_pane_t1_copy1

0xe0f8,	// (0x00088c93) welc_button_pane_2_comp1

0xe15f,	// (0x00088cfa) sso_t_hdr_pane_p_t1

0xe16f,	// (0x00088d0a) sso_t_nml_pane_p_t1

0xe17f,	// (0x00088d1a) sso_t_sub_pane_p_t1

0x10d4,	// (0x0007bc6f) main_att_pane

0x10d4,	// (0x0007bc6f) main_vod_pane

0xe1cb,	// (0x00088d66) sso_t_sub_pane_ParamLimits

0xe329,	// (0x00088ec4) input_focus_pane_cp10_t1

0xe33f,	// (0x00088eda) sso_option_row_pane_t1_ParamLimits

0x9cd8,	// (0x00084873) main_att_body_pane_ParamLimits

0x9cd8,	// (0x00084873) main_att_body_pane

0x9cee,	// (0x00084889) att_btn_emg_pane_ParamLimits

0x9cee,	// (0x00084889) att_btn_emg_pane

0x9d0d,	// (0x000848a8) att_btn_pane_ParamLimits

0x9d0d,	// (0x000848a8) att_btn_pane

0x9d7e,	// (0x00084919) att_btn_pane_cp01_ParamLimits

0x9d7e,	// (0x00084919) att_btn_pane_cp01

0x9d9e,	// (0x00084939) att_li_srv_pane_ParamLimits

0x9d9e,	// (0x00084939) att_li_srv_pane

0x9dbb,	// (0x00084956) att_opt_pane_ParamLimits

0x9dbb,	// (0x00084956) att_opt_pane

0x9e05,	// (0x000849a0) att_query_pane_ParamLimits

0x9e05,	// (0x000849a0) att_query_pane

0x9e7e,	// (0x00084a19) att_query_pane_cp01_ParamLimits

0x9e7e,	// (0x00084a19) att_query_pane_cp01

0x9eca,	// (0x00084a65) att_t_hdr_pane_ParamLimits

0x9eca,	// (0x00084a65) att_t_hdr_pane

0x9f36,	// (0x00084ad1) att_t_nml_pane_ParamLimits

0x9f36,	// (0x00084ad1) att_t_nml_pane

0x9fa6,	// (0x00084b41) att_t_nml_pane_cp01_ParamLimits

0x9fa6,	// (0x00084b41) att_t_nml_pane_cp01

0x9fd2,	// (0x00084b6d) att_t_nmlb_pane_ParamLimits

0x9fd2,	// (0x00084b6d) att_t_nmlb_pane

0xa03f,	// (0x00084bda) att_term_pane_ParamLimits

0xa03f,	// (0x00084bda) att_term_pane

0xa089,	// (0x00084c24) main_att_body_pane_g1_ParamLimits

0xa089,	// (0x00084c24) main_att_body_pane_g1

0xe358,	// (0x00088ef3) att_t_hdr_pane_t1_ParamLimits

0xe358,	// (0x00088ef3) att_t_hdr_pane_t1

0xe371,	// (0x00088f0c) att_t_nml_pane_t1_ParamLimits

0xe371,	// (0x00088f0c) att_t_nml_pane_t1

0xe396,	// (0x00088f31) att_btn_pane_t1

0xe0f8,	// (0x00088c93) bg_button_pane_cp23

0xa0b5,	// (0x00084c50) att_li_srv_row_pane_ParamLimits

0xa0b5,	// (0x00084c50) att_li_srv_row_pane

0xe3a6,	// (0x00088f41) att_t_nmlb_pane_t1_ParamLimits

0xe3a6,	// (0x00088f41) att_t_nmlb_pane_t1

0xe3c4,	// (0x00088f5f) att_query_pane_t1

0xe3d3,	// (0x00088f6e) att_query_pane_t2

0xe3e2,	// (0x00088f7d) att_query_pane_t3

0x0002,

0xfe6a,	// (0x0008aa05) att_query_pane_t

0xe3f1,	// (0x00088f8c) input_focus_pane_cp11

0xe3fa,	// (0x00088f95) att_term_pane_t1_ParamLimits

0xe3fa,	// (0x00088f95) att_term_pane_t1

0x10d4,	// (0x0007bc6f) att_opt_row_pane

0xe337,	// (0x00088ed2) att_opt_row_pane_g1

0xe417,	// (0x00088fb2) att_opt_row_pane_t1_ParamLimits

0xe417,	// (0x00088fb2) att_opt_row_pane_t1

0xa0c5,	// (0x00084c60) att_li_srv_row_pane_g1

0xa0cd,	// (0x00084c68) att_li_srv_row_pane_t1_ParamLimits

0xa0cd,	// (0x00084c68) att_li_srv_row_pane_t1

0xa0e2,	// (0x00084c7d) att_li_srv_row_pane_t2_ParamLimits

0xa0e2,	// (0x00084c7d) att_li_srv_row_pane_t2

0x0001,

0xfe71,	// (0x0008aa0c) att_li_srv_row_pane_t_ParamLimits

0xfe71,	// (0x0008aa0c) att_li_srv_row_pane_t

0xe430,	// (0x00088fcb) att_btn_close_pane_g1

0x10d4,	// (0x0007bc6f) bg_button_pane_cp24

0xa0f7,	// (0x00084c92) main_vod_body_pane_ParamLimits

0xa0f7,	// (0x00084c92) main_vod_body_pane

0xa10b,	// (0x00084ca6) main_vod_body_pane_g1_ParamLimits

0xa10b,	// (0x00084ca6) main_vod_body_pane_g1

0xa13f,	// (0x00084cda) scroll_pane_cp24_ParamLimits

0xa13f,	// (0x00084cda) scroll_pane_cp24

0xa18d,	// (0x00084d28) vod_btn_pane_ParamLimits

0xa18d,	// (0x00084d28) vod_btn_pane

0xa1cf,	// (0x00084d6a) vod_det_pane_ParamLimits

0xa1cf,	// (0x00084d6a) vod_det_pane

0xa203,	// (0x00084d9e) vod_logo_g1_ParamLimits

0xa203,	// (0x00084d9e) vod_logo_g1

0xa241,	// (0x00084ddc) vod_opt_pane_ParamLimits

0xa241,	// (0x00084ddc) vod_opt_pane

0xa274,	// (0x00084e0f) vod_opt_pane_cp01_ParamLimits

0xa274,	// (0x00084e0f) vod_opt_pane_cp01

0xa2a0,	// (0x00084e3b) vod_query_pane_ParamLimits

0xa2a0,	// (0x00084e3b) vod_query_pane

0xa2cb,	// (0x00084e66) vod_query_pane_cp01_ParamLimits

0xa2cb,	// (0x00084e66) vod_query_pane_cp01

0xa2d7,	// (0x00084e72) vod_t_nml_pane_ParamLimits

0xa2d7,	// (0x00084e72) vod_t_nml_pane

0xa384,	// (0x00084f1f) vod_t_nml_pane_cp01_ParamLimits

0xa384,	// (0x00084f1f) vod_t_nml_pane_cp01

0xa3c0,	// (0x00084f5b) vod_t_sub_pane_ParamLimits

0xa3c0,	// (0x00084f5b) vod_t_sub_pane

0xa3f1,	// (0x00084f8c) vod_t_sub_pane_cp01_ParamLimits

0xa3f1,	// (0x00084f8c) vod_t_sub_pane_cp01

0xe3f1,	// (0x00088f8c) vod_query_field_pane

0xe438,	// (0x00088fd3) vod_query_pane_t1

0xe0f8,	// (0x00088c93) bg_button_pane_cp25

0xe0e9,	// (0x00088c84) sso_btn_pane_t1_copy2

0xa41d,	// (0x00084fb8) vod_t_nml_pane_t1_ParamLimits

0xa41d,	// (0x00084fb8) vod_t_nml_pane_t1

0xe447,	// (0x00088fe2) vod_opt_row_pane_ParamLimits

0xe447,	// (0x00088fe2) vod_opt_row_pane

0xe459,	// (0x00088ff4) vod_t_sub_pane_t1_ParamLimits

0xe459,	// (0x00088ff4) vod_t_sub_pane_t1

0xe472,	// (0x0008900d) vod_det_cell_pane_ParamLimits

0xe472,	// (0x0008900d) vod_det_cell_pane

0x10d4,	// (0x0007bc6f) input_focus_pane_cp15

0xe483,	// (0x0008901e) vod_query_field_pane_t1

0xe491,	// (0x0008902c) vod_opt_row_pane_g1_ParamLimits

0xe491,	// (0x0008902c) vod_opt_row_pane_g1

0xe49d,	// (0x00089038) vod_opt_row_pane_t1_ParamLimits

0xe49d,	// (0x00089038) vod_opt_row_pane_t1

0xe4bc,	// (0x00089057) vod_det_cell_field_pane

0xe4c5,	// (0x00089060) vod_det_cell_pane_g1

0xe4cd,	// (0x00089068) vod_det_cell_pane_t1

0x10d4,	// (0x0007bc6f) input_focus_pane_cp16

0xe4dc,	// (0x00089077) vod_det_cell_field_pane_t1

0x8aec,	// (0x00083687) call7_btn_grp_pane_ParamLimits

0x8aec,	// (0x00083687) call7_btn_grp_pane

0xa44e,	// (0x00084fe9) call7_bubble_pane_ParamLimits

0xa44e,	// (0x00084fe9) call7_bubble_pane

0xa465,	// (0x00085000) cell_call7_btn_pane_ParamLimits

0xa465,	// (0x00085000) cell_call7_btn_pane

0xa478,	// (0x00085013) call7_pane_g1_ParamLimits

0xa478,	// (0x00085013) call7_pane_g1

0xa487,	// (0x00085022) call7_windows_conf_pane_ParamLimits

0xa487,	// (0x00085022) call7_windows_conf_pane

0xa4a1,	// (0x0008503c) popup_call7_1st_window_ParamLimits

0xa4a1,	// (0x0008503c) popup_call7_1st_window

0xa4b2,	// (0x0008504d) popup_call7_2nd_window_ParamLimits

0xa4b2,	// (0x0008504d) popup_call7_2nd_window

0xa4c3,	// (0x0008505e) popup_call7_3rd_window_ParamLimits

0xa4c3,	// (0x0008505e) popup_call7_3rd_window

0x10d4,	// (0x0007bc6f) bg_button_pane_cp26

0x8bbb,	// (0x00083756) cell_call7_btn_pane_g1

0x8bc4,	// (0x0008375f) cell_call7_btn_pane_t1

0x10d4,	// (0x0007bc6f) bg_popup_window_pane_cp12

0xe4ea,	// (0x00089085) popup_call7_1st_window_g1

0xe4f2,	// (0x0008908d) popup_call7_1st_window_g2

0xe4fa,	// (0x00089095) popup_call7_1st_window_g3

0x0002,

0xfe76,	// (0x0008aa11) popup_call7_1st_window_g

0xe502,	// (0x0008909d) popup_call7_1st_window_t1

0xe511,	// (0x000890ac) popup_call7_1st_window_t2

0xe51f,	// (0x000890ba) popup_call7_1st_window_t3

0x0002,

0xfe7d,	// (0x0008aa18) popup_call7_1st_window_t

0x10d4,	// (0x0007bc6f) bg_popup_window_pane_cp13

0xe52d,	// (0x000890c8) popup_call7_2nd_window_g1

0xe535,	// (0x000890d0) popup_call7_2nd_window_g2

0xe53d,	// (0x000890d8) popup_call7_2nd_window_g3

0x0002,

0xfe84,	// (0x0008aa1f) popup_call7_2nd_window_g

0xe502,	// (0x0008909d) popup_call7_2nd_window_t1

0x10d4,	// (0x0007bc6f) bg_popup_window_pane_cp14

0xe545,	// (0x000890e0) call7_list_conf_pane

0xe54d,	// (0x000890e8) call7_list_conf_row_pane_ParamLimits

0xe54d,	// (0x000890e8) call7_list_conf_row_pane

0xe560,	// (0x000890fb) call7_list_conf_row_pane_g1

0xe568,	// (0x00089103) call7_list_conf_row_pane_g2

0x0001,

0xfe8b,	// (0x0008aa26) call7_list_conf_row_pane_g

0xe570,	// (0x0008910b) call7_list_conf_row_pane_t1

0x10d4,	// (0x0007bc6f) list_highlight_pane_cp22

0x9a7e,	// (0x00084619) sso_option_pane_cp01_ParamLimits

0x9a7e,	// (0x00084619) sso_option_pane_cp01

0xab8a,	// (0x00085725) msg_header_pane_ParamLimits

0xbb73,	// (0x0008670e) bg_button_pane_cp01_ParamLimits

0xbb87,	// (0x00086722) input_focus_pane_cp07_ParamLimits

0x7c6d,	// (0x00082808) popup_email_progress_window

0xac4b,	// (0x000857e6) popup_email_progress_window_g1

0xe57e,	// (0x00089119) popup_email_progress_window_g2

0x0001,

0xfe90,	// (0x0008aa2b) popup_email_progress_window_g

0xe586,	// (0x00089121) popup_email_progress_window_t1
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
