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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000595bd };

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
0x6cf1,	// (0x000602ae) Screen

0x6cfb,	// (0x000602b8) application_window

0x6d4f,	// (0x0006030c) area_bottom_pane_ParamLimits

0x6d4f,	// (0x0006030c) area_bottom_pane

0x6d8b,	// (0x00060348) area_top_pane_ParamLimits

0x6d8b,	// (0x00060348) area_top_pane

0x6de7,	// (0x000603a4) call_video_uplink_pane_ParamLimits

0x6de7,	// (0x000603a4) call_video_uplink_pane

0x6e22,	// (0x000603df) main_pane_ParamLimits

0x6e22,	// (0x000603df) main_pane

0x219e,	// (0x0005b75b) context_pane

0xa581,	// (0x00063b3e) navi_pane

0xa59b,	// (0x00063b58) popup_cale_events_window_ParamLimits

0xa59b,	// (0x00063b58) popup_cale_events_window

0x21b1,	// (0x0005b76e) popup_mup_playback_window

0xa5b2,	// (0x00063b6f) signal_pane

0x79ba,	// (0x00060f77) main_browser_pane

0x0cd4,	// (0x0005a291) main_burst_pane

0x6f51,	// (0x0006050e) main_calc_pane

0x0cd4,	// (0x0005a291) main_cale_day_pane

0x7cdb,	// (0x00061298) main_cale_month_pane

0x0cd4,	// (0x0005a291) main_cale_week_pane

0x0cd4,	// (0x0005a291) main_call_pane

0x741e,	// (0x000609db) main_call_poc_pane

0x0cd4,	// (0x0005a291) main_camera_pane

0x0cd4,	// (0x0005a291) main_chi_dic_pane

0xec8c,	// (0x00068249) main_clock_pane

0x741e,	// (0x000609db) main_fmradio_pane

0x0cd4,	// (0x0005a291) main_graph_messa_pane

0x741e,	// (0x000609db) main_help_pane

0x79ba,	// (0x00060f77) main_im_pane

0x7679,	// (0x00060c36) main_image_pane_ParamLimits

0x7679,	// (0x00060c36) main_image_pane

0x741e,	// (0x000609db) main_location2_pane

0x0cd4,	// (0x0005a291) main_location_pane

0x741e,	// (0x000609db) main_messa_pane

0x741e,	// (0x000609db) main_mp2_pane

0x0cd4,	// (0x0005a291) main_mp_pane

0x741e,	// (0x000609db) main_msg_pane

0x741e,	// (0x000609db) main_mup_eq_pane

0x741e,	// (0x000609db) main_mup_pane

0x0cd4,	// (0x0005a291) main_notes_pane

0x741e,	// (0x000609db) main_pec_pane

0x741e,	// (0x000609db) main_phob_pane

0x741e,	// (0x000609db) main_pinb_pane

0x741e,	// (0x000609db) main_postcard_pane

0x741e,	// (0x000609db) main_qdial_pane

0x0cd4,	// (0x0005a291) main_skin_pane

0x741e,	// (0x000609db) main_smil2_pane

0x0cd4,	// (0x0005a291) main_smil_pane

0x0cd4,	// (0x0005a291) main_video_pane

0x0cd4,	// (0x0005a291) main_video_tele_pane

0x7679,	// (0x00060c36) main_viewer_pane_ParamLimits

0x7679,	// (0x00060c36) main_viewer_pane

0x0cd4,	// (0x0005a291) main_vorec_pane

0xa4b3,	// (0x00063a70) popup_blid_sat_info_window_ParamLimits

0xa4b3,	// (0x00063a70) popup_blid_sat_info_window

0xa4c7,	// (0x00063a84) popup_dyc_status_message_window_ParamLimits

0xa4c7,	// (0x00063a84) popup_dyc_status_message_window

0xa4d3,	// (0x00063a90) popup_grid_large_graphic_window_ParamLimits

0xa4d3,	// (0x00063a90) popup_grid_large_graphic_window

0xa52b,	// (0x00063ae8) popup_loc_request_window_ParamLimits

0xa52b,	// (0x00063ae8) popup_loc_request_window

0xa55b,	// (0x00063b18) popup_wml_address_window_ParamLimits

0xa55b,	// (0x00063b18) popup_wml_address_window

0xa398,	// (0x00063955) call_muted_g1

0xa0d3,	// (0x00063690) popup_call_audio_conf_window_ParamLimits

0xa0d3,	// (0x00063690) popup_call_audio_conf_window

0xa3a8,	// (0x00063965) popup_call_audio_first_window_ParamLimits

0xa3a8,	// (0x00063965) popup_call_audio_first_window

0xa3dc,	// (0x00063999) popup_call_audio_in_window_ParamLimits

0xa3dc,	// (0x00063999) popup_call_audio_in_window

0xa3f8,	// (0x000639b5) popup_call_audio_out_window_ParamLimits

0xa3f8,	// (0x000639b5) popup_call_audio_out_window

0xa414,	// (0x000639d1) popup_call_audio_second_window_ParamLimits

0xa414,	// (0x000639d1) popup_call_audio_second_window

0xa43c,	// (0x000639f9) popup_call_audio_wait_window_ParamLimits

0xa43c,	// (0x000639f9) popup_call_audio_wait_window

0xa45b,	// (0x00063a18) popup_number_entry_window_ParamLimits

0xa45b,	// (0x00063a18) popup_number_entry_window

0x6fb4,	// (0x00060571) bg_popup_call_pane_cp05_ParamLimits

0x6fb4,	// (0x00060571) bg_popup_call_pane_cp05

0x6fd4,	// (0x00060591) popup_number_entry_window_t1

0x6fe7,	// (0x000605a4) popup_number_entry_window_t2

0x6ff9,	// (0x000605b6) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x000686b8) popup_number_entry_window_t

0x7040,	// (0x000605fd) text_title_cp2

0x7053,	// (0x00060610) bg_popup_call_pane_cp_ParamLimits

0x7053,	// (0x00060610) bg_popup_call_pane_cp

0x7061,	// (0x0006061e) call_thumbnail_pane

0x7069,	// (0x00060626) popup_call_audio_in_window_g1_ParamLimits

0x7069,	// (0x00060626) popup_call_audio_in_window_g1

0x7075,	// (0x00060632) popup_call_audio_in_window_g2_ParamLimits

0x7075,	// (0x00060632) popup_call_audio_in_window_g2

0x7081,	// (0x0006063e) popup_call_audio_in_window_g3_ParamLimits

0x7081,	// (0x0006063e) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000686c1) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000686c1) popup_call_audio_in_window_g

0x708d,	// (0x0006064a) popup_call_audio_in_window_t1_ParamLimits

0x708d,	// (0x0006064a) popup_call_audio_in_window_t1

0x70a8,	// (0x00060665) popup_call_audio_in_window_t2_ParamLimits

0x70a8,	// (0x00060665) popup_call_audio_in_window_t2

0x70c3,	// (0x00060680) popup_call_audio_in_window_t3_ParamLimits

0x70c3,	// (0x00060680) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000686c8) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000686c8) popup_call_audio_in_window_t

0x7053,	// (0x00060610) bg_popup_call_pane_cp01_ParamLimits

0x7053,	// (0x00060610) bg_popup_call_pane_cp01

0x7061,	// (0x0006061e) call_thumbnail_pane_cp02

0x70d6,	// (0x00060693) call_type_pane_cp022

0x70de,	// (0x0006069b) popup_call_audio_out_window_g1_ParamLimits

0x70de,	// (0x0006069b) popup_call_audio_out_window_g1

0x70f0,	// (0x000606ad) popup_call_audio_out_window_g2_ParamLimits

0x70f0,	// (0x000606ad) popup_call_audio_out_window_g2

0x70fc,	// (0x000606b9) popup_call_audio_out_window_g3_ParamLimits

0x70fc,	// (0x000606b9) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000686cf) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000686cf) popup_call_audio_out_window_g

0x710e,	// (0x000606cb) popup_call_audio_out_window_t1_ParamLimits

0x710e,	// (0x000606cb) popup_call_audio_out_window_t1

0x7126,	// (0x000606e3) popup_call_audio_out_window_t2_ParamLimits

0x7126,	// (0x000606e3) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000686d6) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000686d6) popup_call_audio_out_window_t

0x713b,	// (0x000606f8) bg_popup_call_pane_ParamLimits

0x713b,	// (0x000606f8) bg_popup_call_pane

0x71bf,	// (0x0006077c) call_thumbnail_pane_cp_ParamLimits

0x71bf,	// (0x0006077c) call_thumbnail_pane_cp

0x71e3,	// (0x000607a0) call_type_pane_cp01_ParamLimits

0x71e3,	// (0x000607a0) call_type_pane_cp01

0x7227,	// (0x000607e4) popup_call_audio_first_window_g1_ParamLimits

0x7227,	// (0x000607e4) popup_call_audio_first_window_g1

0x7273,	// (0x00060830) popup_call_audio_first_window_g2_ParamLimits

0x7273,	// (0x00060830) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x000686db) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x000686db) popup_call_audio_first_window_g

0x72b7,	// (0x00060874) popup_call_audio_first_window_t1_ParamLimits

0x72b7,	// (0x00060874) popup_call_audio_first_window_t1

0x7363,	// (0x00060920) popup_call_audio_first_window_t4_ParamLimits

0x7363,	// (0x00060920) popup_call_audio_first_window_t4

0x73ef,	// (0x000609ac) popup_call_audio_first_window_t5_ParamLimits

0x73ef,	// (0x000609ac) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x000686e0) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x000686e0) popup_call_audio_first_window_t

0x741e,	// (0x000609db) bg_popup_call_pane_cp02

0x7428,	// (0x000609e5) call_type_pane_cp023

0x7430,	// (0x000609ed) popup_call_audio_wait_window_g1

0x7438,	// (0x000609f5) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000686e7) popup_call_audio_wait_window_g

0x7440,	// (0x000609fd) popup_call_audio_wait_window_t3

0x744e,	// (0x00060a0b) bg_popup_call_pane_cp03_ParamLimits

0x744e,	// (0x00060a0b) bg_popup_call_pane_cp03

0x74ae,	// (0x00060a6b) call_thumbnail_pane_cp011_ParamLimits

0x74ae,	// (0x00060a6b) call_thumbnail_pane_cp011

0x74ba,	// (0x00060a77) call_type_pane_cp034_ParamLimits

0x74ba,	// (0x00060a77) call_type_pane_cp034

0x74f6,	// (0x00060ab3) popup_call_audio_second_window_g1_ParamLimits

0x74f6,	// (0x00060ab3) popup_call_audio_second_window_g1

0x7532,	// (0x00060aef) popup_call_audio_second_window_g2_ParamLimits

0x7532,	// (0x00060aef) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x000686ec) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x000686ec) popup_call_audio_second_window_g

0x756e,	// (0x00060b2b) popup_call_audio_second_window_t1_ParamLimits

0x756e,	// (0x00060b2b) popup_call_audio_second_window_t1

0x75ef,	// (0x00060bac) popup_call_audio_second_window_t2_ParamLimits

0x75ef,	// (0x00060bac) popup_call_audio_second_window_t2

0x7625,	// (0x00060be2) popup_call_audio_second_window_t3_ParamLimits

0x7625,	// (0x00060be2) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x000686f1) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x000686f1) popup_call_audio_second_window_t

0x741e,	// (0x000609db) bg_popup_call_pane_cp04

0x765b,	// (0x00060c18) list_conf_pane

0x7663,	// (0x00060c20) popup_call_audio_conf_window_t1

0x7671,	// (0x00060c2e) call_thumbnail_pane_g1

0x7679,	// (0x00060c36) bg_pinb_pane_ParamLimits

0x7679,	// (0x00060c36) bg_pinb_pane

0x7687,	// (0x00060c44) find_pinb_pane

0x7690,	// (0x00060c4d) listscroll_pinb_pane_ParamLimits

0x7690,	// (0x00060c4d) listscroll_pinb_pane

0x769f,	// (0x00060c5c) pinb_bg_pane_g1

0x76a9,	// (0x00060c66) pinb_bg_pane_g2

0x76b3,	// (0x00060c70) pinb_bg_pane_g3

0x76bd,	// (0x00060c7a) pinb_bg_pane_g4

0x76c7,	// (0x00060c84) pinb_bg_pane_g5

0x76d1,	// (0x00060c8e) pinb_bg_pane_g6

0x76dc,	// (0x00060c99) pinb_bg_pane_g7

0x76e7,	// (0x00060ca4) pinb_bg_pane_g8

0x76f0,	// (0x00060cad) pinb_bg_pane_g9

0x76f8,	// (0x00060cb5) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x000686f8) pinb_bg_pane_g

0x7715,	// (0x00060cd2) grid_pinb_pane

0x771e,	// (0x00060cdb) list_pinb_pane

0x7729,	// (0x00060ce6) scroll_pane_cp01_ParamLimits

0x7729,	// (0x00060ce6) scroll_pane_cp01

0x7739,	// (0x00060cf6) find_pinb_pane_g1_ParamLimits

0x7739,	// (0x00060cf6) find_pinb_pane_g1

0x7751,	// (0x00060d0e) find_pinb_pane_t1

0x7763,	// (0x00060d20) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00068712) find_pinb_pane_t

0x7778,	// (0x00060d35) input_focus_pane_cp01_ParamLimits

0x7778,	// (0x00060d35) input_focus_pane_cp01

0x7784,	// (0x00060d41) cell_pinb_pane_ParamLimits

0x7784,	// (0x00060d41) cell_pinb_pane

0x779d,	// (0x00060d5a) cell_pinb_pane_g1_ParamLimits

0x779d,	// (0x00060d5a) cell_pinb_pane_g1

0x77b1,	// (0x00060d6e) cell_pinb_pane_g2_ParamLimits

0x77b1,	// (0x00060d6e) cell_pinb_pane_g2

0x77bd,	// (0x00060d7a) cell_pinb_pane_g3_ParamLimits

0x77bd,	// (0x00060d7a) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00068717) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00068717) cell_pinb_pane_g

0x741e,	// (0x000609db) grid_highlight_pane_cp01

0x77c9,	// (0x00060d86) list_pinb_item_pane_ParamLimits

0x77c9,	// (0x00060d86) list_pinb_item_pane

0x741e,	// (0x000609db) list_highlight_pane_cp02

0x77de,	// (0x00060d9b) list_pinb_item_pane_g1_ParamLimits

0x77de,	// (0x00060d9b) list_pinb_item_pane_g1

0x77eb,	// (0x00060da8) list_pinb_item_pane_g2_ParamLimits

0x77eb,	// (0x00060da8) list_pinb_item_pane_g2

0x77f7,	// (0x00060db4) list_pinb_item_pane_g3_ParamLimits

0x77f7,	// (0x00060db4) list_pinb_item_pane_g3

0x7806,	// (0x00060dc3) list_pinb_item_pane_g4_ParamLimits

0x7806,	// (0x00060dc3) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0006871e) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0006871e) list_pinb_item_pane_g

0x7812,	// (0x00060dcf) list_pinb_item_pane_t1_ParamLimits

0x7812,	// (0x00060dcf) list_pinb_item_pane_t1

0x7843,	// (0x00060e00) calc_display_pane

0x785b,	// (0x00060e18) calc_paper_pane

0x7877,	// (0x00060e34) grid_calc_pane

0x741e,	// (0x000609db) bg_list_pane_cp01

0x7897,	// (0x00060e54) clock_g1

0x789f,	// (0x00060e5c) clock_g2

0x0001,

0xf16a,	// (0x00068727) clock_g

0x78a7,	// (0x00060e64) clock_t1_ParamLimits

0x78a7,	// (0x00060e64) clock_t1

0x78bc,	// (0x00060e79) clock_t2_ParamLimits

0x78bc,	// (0x00060e79) clock_t2

0x78ce,	// (0x00060e8b) clock_t3_ParamLimits

0x78ce,	// (0x00060e8b) clock_t3

0x78e0,	// (0x00060e9d) clock_t4_ParamLimits

0x78e0,	// (0x00060e9d) clock_t4

0x78f2,	// (0x00060eaf) clock_t5_ParamLimits

0x78f2,	// (0x00060eaf) clock_t5

0x7907,	// (0x00060ec4) clock_t6_ParamLimits

0x7907,	// (0x00060ec4) clock_t6

0x7919,	// (0x00060ed6) clock_t7_ParamLimits

0x7919,	// (0x00060ed6) clock_t7

0x792b,	// (0x00060ee8) clock_t8_ParamLimits

0x792b,	// (0x00060ee8) clock_t8

0x793d,	// (0x00060efa) clock_t9_ParamLimits

0x793d,	// (0x00060efa) clock_t9

0x0008,

0xf16f,	// (0x0006872c) clock_t_ParamLimits

0xf16f,	// (0x0006872c) clock_t

0x794f,	// (0x00060f0c) popup_clock_analogue_window_cp02

0x794f,	// (0x00060f0c) popup_clock_digital_window_cp01

0x7957,	// (0x00060f14) listscroll_help_pane

0x741e,	// (0x000609db) phob_pre_status_pane

0x7961,	// (0x00060f1e) grid_qdial_pane

0x741e,	// (0x000609db) listscroll_mce_pane

0x796b,	// (0x00060f28) bg_notes_pane

0x7975,	// (0x00060f32) list_notes_pane

0x797f,	// (0x00060f3c) scroll_pane_cp06

0x7988,	// (0x00060f45) bg_calc_paper_pane

0x79a0,	// (0x00060f5d) list_calc_pane

0x79ba,	// (0x00060f77) bg_calc_display_pane

0x79c6,	// (0x00060f83) calc_display_pane_t1

0x79db,	// (0x00060f98) calc_display_pane_t2

0x79f0,	// (0x00060fad) calc_display_pane_t3

0x0002,

0xf182,	// (0x0006873f) calc_display_pane_t

0x7a02,	// (0x00060fbf) cell_calc_pane_ParamLimits

0x7a02,	// (0x00060fbf) cell_calc_pane

0x7a29,	// (0x00060fe6) bg_calc_paper_pane_g1

0x7a35,	// (0x00060ff2) bg_calc_paper_pane_g2

0x7a41,	// (0x00060ffe) bg_calc_paper_pane_g3

0x7a4d,	// (0x0006100a) bg_calc_paper_pane_g4

0x7a59,	// (0x00061016) bg_calc_paper_pane_g5

0x7a65,	// (0x00061022) bg_calc_paper_pane_g6

0x7a74,	// (0x00061031) bg_calc_paper_pane_g7

0x7a83,	// (0x00061040) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00068746) bg_calc_paper_pane_g

0x7a92,	// (0x0006104f) calc_bg_paper_pane_g9

0x7aa1,	// (0x0006105e) list_calc_item_pane_ParamLimits

0x7aa1,	// (0x0006105e) list_calc_item_pane

0x7aba,	// (0x00061077) list_calc_item_pane_g1

0x7ac7,	// (0x00061084) list_calc_item_pane_t1_ParamLimits

0x7ac7,	// (0x00061084) list_calc_item_pane_t1

0x7ad9,	// (0x00061096) list_calc_item_pane_t2_ParamLimits

0x7ad9,	// (0x00061096) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00068757) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00068757) list_calc_item_pane_t

0x7aef,	// (0x000610ac) cell_calc_pane_g1

0x7b11,	// (0x000610ce) grid_highlight_pane_cp02

0x7b33,	// (0x000610f0) bg_calc_display_pane_g1

0x7b3c,	// (0x000610f9) bg_calc_display_pane_g2

0x7b46,	// (0x00061103) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00068761) bg_calc_display_pane_g

0x7b4f,	// (0x0006110c) cell_qdial_pane_ParamLimits

0x7b4f,	// (0x0006110c) cell_qdial_pane

0x7b61,	// (0x0006111e) cell_qdial_pane_g1_ParamLimits

0x7b61,	// (0x0006111e) cell_qdial_pane_g1

0x7b6e,	// (0x0006112b) cell_qdial_pane_g2_ParamLimits

0x7b6e,	// (0x0006112b) cell_qdial_pane_g2

0x7b7f,	// (0x0006113c) cell_qdial_pane_g3_ParamLimits

0x7b7f,	// (0x0006113c) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00068768) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00068768) cell_qdial_pane_g

0x7b98,	// (0x00061155) cell_qdial_pane_t1_ParamLimits

0x7b98,	// (0x00061155) cell_qdial_pane_t1

0x7bb0,	// (0x0006116d) cell_qdial_pane_t2_ParamLimits

0x7bb0,	// (0x0006116d) cell_qdial_pane_t2

0x7bc3,	// (0x00061180) cell_qdial_pane_t3_ParamLimits

0x7bc3,	// (0x00061180) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00068771) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00068771) cell_qdial_pane_t

0x741e,	// (0x000609db) grid_highlight_pane_cp04

0x7bd6,	// (0x00061193) thumbnail_qdial_pane_ParamLimits

0x7bd6,	// (0x00061193) thumbnail_qdial_pane

0x7c32,	// (0x000611ef) list_help_pane

0x7c3c,	// (0x000611f9) scroll_pane_cp02

0x7c45,	// (0x00061202) help_list_pane_t1_ParamLimits

0x7c45,	// (0x00061202) help_list_pane_t1

0x7c63,	// (0x00061220) bg_notes_pane_g2

0x7c6b,	// (0x00061228) bg_notes_pane_g3

0x7c73,	// (0x00061230) notes_bg_pane_g1

0x7c7b,	// (0x00061238) notes_bg_pane_g4

0x7c83,	// (0x00061240) notes_bg_pane_g5

0x7c8b,	// (0x00061248) notes_bg_pane_g6

0x7c93,	// (0x00061250) notes_bg_pane_g7

0x7c9b,	// (0x00061258) notes_bg_pane_g8

0x7ca3,	// (0x00061260) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0006878f) notes_bg_pane_g

0x7cab,	// (0x00061268) list_notes_text_pane_ParamLimits

0x7cab,	// (0x00061268) list_notes_text_pane

0x7cc1,	// (0x0006127e) list_notes_text_pane_g1

0x5d1c,	// (0x0005f2d9) list_notes_text_pane_t1

0x7cdb,	// (0x00061298) listscroll_cale_week_pane

0x7d05,	// (0x000612c2) bg_cale_heading_pane

0x7d19,	// (0x000612d6) bg_cale_pane_cp01

0x7d32,	// (0x000612ef) cale_week_corner_pane

0x7d48,	// (0x00061305) cale_week_day_heading_pane

0x7d5c,	// (0x00061319) cale_week_scroll_pane_g1

0x7d6d,	// (0x0006132a) cale_week_scroll_pane_g2

0x7d7e,	// (0x0006133b) cale_week_scroll_pane_g3

0x7d8f,	// (0x0006134c) cale_week_scroll_pane_g4

0x7da0,	// (0x0006135d) cale_week_scroll_pane_g5

0x7db1,	// (0x0006136e) cale_week_scroll_pane_g6

0x7dc2,	// (0x0006137f) cale_week_scroll_pane_g7

0x7dd3,	// (0x00061390) cale_week_scroll_pane_g8

0x7de4,	// (0x000613a1) cale_week_scroll_pane_g9

0x7df5,	// (0x000613b2) cale_week_scroll_pane_g10

0x7e06,	// (0x000613c3) cale_week_scroll_pane_g11

0x7e17,	// (0x000613d4) cale_week_scroll_pane_g12

0x7e28,	// (0x000613e5) cale_week_scroll_pane_g13

0x7e39,	// (0x000613f6) cale_week_scroll_pane_g14

0x7e4a,	// (0x00061407) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0006879e) cale_week_scroll_pane_g

0x7e5b,	// (0x00061418) cale_week_time_pane

0x7e6c,	// (0x00061429) grid_cale_week_pane

0x7e91,	// (0x0006144e) scroll_pane_cp08

0x7ea9,	// (0x00061466) cell_cale_week_pane_ParamLimits

0x7ea9,	// (0x00061466) cell_cale_week_pane

0x7ee5,	// (0x000614a2) cale_week_day_heading_pane_t1

0x7efe,	// (0x000614bb) cale_week_day_heading_pane_t2

0x7f17,	// (0x000614d4) cale_week_day_heading_pane_t3

0x7f30,	// (0x000614ed) cale_week_day_heading_pane_t4

0x7f49,	// (0x00061506) cale_week_day_heading_pane_t5

0x7f62,	// (0x0006151f) cale_week_day_heading_pane_t6

0x7f7b,	// (0x00061538) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x000687bd) cale_week_day_heading_pane_t

0x7f94,	// (0x00061551) bg_cale_side_pane

0x7fa2,	// (0x0006155f) cale_week_time_pane_t1

0x7fce,	// (0x0006158b) cale_week_time_pane_t2

0x7ffa,	// (0x000615b7) cale_week_time_pane_t3

0x8026,	// (0x000615e3) cale_week_time_pane_t4

0x8052,	// (0x0006160f) cale_week_time_pane_t5

0x807e,	// (0x0006163b) cale_week_time_pane_t6

0x80aa,	// (0x00061667) cale_week_time_pane_t7

0x80d6,	// (0x00061693) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000687cc) cale_week_time_pane_t

0x8102,	// (0x000616bf) cell_cale_week_pane_g2

0x811e,	// (0x000616db) cell_cale_week_pane_g3_ParamLimits

0x811e,	// (0x000616db) cell_cale_week_pane_g3

0x8136,	// (0x000616f3) grid_highlight_pane_cp07

0x813e,	// (0x000616fb) listscroll_gms_pane

0x8148,	// (0x00061705) grid_gms_pane

0x8151,	// (0x0006170e) listscroll_gms_pane_g1

0x8159,	// (0x00061716) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x000687dd) listscroll_gms_pane_g

0x8161,	// (0x0006171e) scroll_pane_cp010

0x816a,	// (0x00061727) cell_gms_pane_ParamLimits

0x816a,	// (0x00061727) cell_gms_pane

0x817b,	// (0x00061738) cell_gms_pane_g1

0x8183,	// (0x00061740) cell_gms_pane_g2

0x7cc1,	// (0x0006127e) cell_gms_pane_g3

0x818b,	// (0x00061748) cell_gms_pane_g4

0x0003,

0xf225,	// (0x000687e2) cell_gms_pane_g

0x8194,	// (0x00061751) grid_highlight_pane_cp09

0xa346,	// (0x00063903) phob_pre_status_pane_g1

0xa34e,	// (0x0006390b) phob_pre_status_pane_g2

0xa356,	// (0x00063913) phob_pre_status_pane_g3

0xa35e,	// (0x0006391b) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x00068be4) phob_pre_status_pane_g

0xa36e,	// (0x0006392b) phob_pre_status_pane_t1

0xa37c,	// (0x00063939) phob_pre_status_pane_t2

0xa38a,	// (0x00063947) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x00068bef) phob_pre_status_pane_t

0x741e,	// (0x000609db) bg_list_pane_cp05

0x819c,	// (0x00061759) grid_vorec_pane

0x81a4,	// (0x00061761) vorec_t1

0x81b2,	// (0x0006176f) vorec_t2

0x81c0,	// (0x0006177d) vorec_t3

0x81ce,	// (0x0006178b) vorec_t4

0x81dc,	// (0x00061799) vorec_t5

0x81ea,	// (0x000617a7) vorec_t6

0x0006,

0xf22e,	// (0x000687eb) vorec_t

0x8206,	// (0x000617c3) wait_bar_pane_cp01

0x106e,	// (0x0005a62b) cell_vorec_pane_ParamLimits

0x106e,	// (0x0005a62b) cell_vorec_pane

0x820e,	// (0x000617cb) cell_vorec_pane_g1

0x741e,	// (0x000609db) grid_highlight_pane_cp05

0x8224,	// (0x000617e1) cams_zoom_pane

0x8230,	// (0x000617ed) image_vga_pane

0x823d,	// (0x000617fa) main_camera_pane_g1

0x8249,	// (0x00061806) main_camera_pane_g2

0x8255,	// (0x00061812) main_camera_pane_g3

0x8261,	// (0x0006181e) main_camera_pane_g4

0x826d,	// (0x0006182a) main_camera_pane_g5

0x8279,	// (0x00061836) main_camera_pane_g6

0x8285,	// (0x00061842) main_camera_pane_g7

0x0007,

0xf23d,	// (0x000687fa) main_camera_pane_g

0x829d,	// (0x0006185a) main_camera_pane_t1

0x82af,	// (0x0006186c) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0006880b) main_camera_pane_t

0x82d3,	// (0x00061890) cams_zoom_pane_cp_ParamLimits

0x82d3,	// (0x00061890) cams_zoom_pane_cp

0x82f7,	// (0x000618b4) image_cif_pane_ParamLimits

0x82f7,	// (0x000618b4) image_cif_pane

0x8311,	// (0x000618ce) image_subqcif_pane

0x8319,	// (0x000618d6) main_video_pane_g1_ParamLimits

0x8319,	// (0x000618d6) main_video_pane_g1

0x8339,	// (0x000618f6) main_video_pane_g2_ParamLimits

0x8339,	// (0x000618f6) main_video_pane_g2

0x8367,	// (0x00061924) main_video_pane_g3_ParamLimits

0x8367,	// (0x00061924) main_video_pane_g3

0x8390,	// (0x0006194d) main_video_pane_g4_ParamLimits

0x8390,	// (0x0006194d) main_video_pane_g4

0x83b9,	// (0x00061976) main_video_pane_g5_ParamLimits

0x83b9,	// (0x00061976) main_video_pane_g5

0x83cf,	// (0x0006198c) main_video_pane_g6_ParamLimits

0x83cf,	// (0x0006198c) main_video_pane_g6

0x0006,

0xf253,	// (0x00068810) main_video_pane_g_ParamLimits

0xf253,	// (0x00068810) main_video_pane_g

0x83f5,	// (0x000619b2) main_video_pane_t1_ParamLimits

0x83f5,	// (0x000619b2) main_video_pane_t1

0x8433,	// (0x000619f0) cams_zoom_pane_g1

0x843c,	// (0x000619f9) cams_zoom_pane_g2

0x8445,	// (0x00061a02) cams_zoom_pane_g3

0x844e,	// (0x00061a0b) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0006881f) cams_zoom_pane_g

0x8463,	// (0x00061a20) grid_cams_pane

0x846f,	// (0x00061a2c) linegrid_cams_pane

0x847b,	// (0x00061a38) cell_cams_pane_ParamLimits

0x847b,	// (0x00061a38) cell_cams_pane

0x848e,	// (0x00061a4b) cams_burst_image_pane

0x8496,	// (0x00061a53) cell_cams_pane_g1

0x741e,	// (0x000609db) grid_highlight_pane_cp03

0x7aef,	// (0x000610ac) mp_bg_pane_g1

0x741e,	// (0x000609db) bg_list_pane_cp03

0x207a,	// (0x0005b637) bg_mp_pane

0x2082,	// (0x0005b63f) grid_mp_pane

0x208a,	// (0x0005b647) media_player_g1

0x2092,	// (0x0005b64f) media_player_t1

0x20a0,	// (0x0005b65d) media_player_t2

0x20ae,	// (0x0005b66b) media_player_t3

0x20bc,	// (0x0005b679) media_player_t4

0x20ca,	// (0x0005b687) media_player_t5

0x20d8,	// (0x0005b695) media_player_t6

0x20e6,	// (0x0005b6a3) media_player_t7

0x0006,

0xf611,	// (0x00068bce) media_player_t

0x20f4,	// (0x0005b6b1) wait_bar_pane_cp02

0xf5f6,	// (0x00068bb3) main_usb_pane_t

0xa33d,	// (0x000638fa) cell_mp_pane

0x7aef,	// (0x000610ac) cell_mp_pane_g1

0x741e,	// (0x000609db) grid_highlight_pane_cp06

0x849e,	// (0x00061a5b) grid_skin_colour_pane

0x84a6,	// (0x00061a63) list_highlight_pane_cp03

0x84ae,	// (0x00061a6b) skin_g1

0x84b6,	// (0x00061a73) skin_t1

0x84c5,	// (0x00061a82) skin_t2

0x0001,

0xf297,	// (0x00068854) skin_t

0x84d3,	// (0x00061a90) cell_skin_colour_pane_ParamLimits

0x84d3,	// (0x00061a90) cell_skin_colour_pane

0x84eb,	// (0x00061aa8) cell_skin_colour_pane_g1

0x8536,	// (0x00061af3) call_video_g1_ParamLimits

0x8536,	// (0x00061af3) call_video_g1

0x8542,	// (0x00061aff) call_video_g2_ParamLimits

0x8542,	// (0x00061aff) call_video_g2

0x0001,

0xf29c,	// (0x00068859) call_video_g_ParamLimits

0xf29c,	// (0x00068859) call_video_g

0x857a,	// (0x00061b37) call_video_uplink_pane_cp1_ParamLimits

0x857a,	// (0x00061b37) call_video_uplink_pane_cp1

0x85b7,	// (0x00061b74) call_video_uplink_pane_cp2

0x8611,	// (0x00061bce) video_down_crop_pane_ParamLimits

0x8611,	// (0x00061bce) video_down_crop_pane

0x86c7,	// (0x00061c84) video_down_pane_ParamLimits

0x86c7,	// (0x00061c84) video_down_pane

0x8765,	// (0x00061d22) video_down_subqcif_pane_ParamLimits

0x8765,	// (0x00061d22) video_down_subqcif_pane

0x877d,	// (0x00061d3a) video_down_subqcif_pane_cp_ParamLimits

0x877d,	// (0x00061d3a) video_down_subqcif_pane_cp

0x87a1,	// (0x00061d5e) im_reading_pane_ParamLimits

0x87a1,	// (0x00061d5e) im_reading_pane

0x87b3,	// (0x00061d70) im_writing_pane_ParamLimits

0x87b3,	// (0x00061d70) im_writing_pane

0x87d1,	// (0x00061d8e) im_reading_pane_t1

0x8809,	// (0x00061dc6) list_im_pane

0x881a,	// (0x00061dd7) scroll_pane_cp07

0x8833,	// (0x00061df0) im_writing_pane_t1_ParamLimits

0x8833,	// (0x00061df0) im_writing_pane_t1

0x8848,	// (0x00061e05) im_writing_pane_t2_ParamLimits

0x8848,	// (0x00061e05) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00068863) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00068863) im_writing_pane_t

0x741e,	// (0x000609db) input_focus_pane_cp04

0x741e,	// (0x000609db) input_focus_pane_cp05

0x8865,	// (0x00061e22) list_im_single_pane_ParamLimits

0x8865,	// (0x00061e22) list_im_single_pane

0x887d,	// (0x00061e3a) list_single_im_pane_t1

0xa303,	// (0x000638c0) blid_accuracy_pane

0xa30b,	// (0x000638c8) blid_compass_pane

0xa313,	// (0x000638d0) main_location_t1

0xa321,	// (0x000638de) main_location_t2

0xa32f,	// (0x000638ec) main_location_t3

0x0002,

0xf620,	// (0x00068bdd) main_location_t

0x741e,	// (0x000609db) aid_levels_location

0x7aef,	// (0x000610ac) blid_accuracy_pane_g1

0x7aef,	// (0x000610ac) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000688c5) blid_accuracy_pane_g

0x88b7,	// (0x00061e74) wml_content_pane

0x88f5,	// (0x00061eb2) wml_button_pane_ParamLimits

0x88f5,	// (0x00061eb2) wml_button_pane

0x8909,	// (0x00061ec6) wml_list_single_large_pane_ParamLimits

0x8909,	// (0x00061ec6) wml_list_single_large_pane

0x8920,	// (0x00061edd) wml_list_single_medium_pane_ParamLimits

0x8920,	// (0x00061edd) wml_list_single_medium_pane

0x8938,	// (0x00061ef5) wml_list_single_small_pane_ParamLimits

0x8938,	// (0x00061ef5) wml_list_single_small_pane

0x8953,	// (0x00061f10) wml_selection_box_pane_ParamLimits

0x8953,	// (0x00061f10) wml_selection_box_pane

0x8966,	// (0x00061f23) wml_list_single_pane_t1

0x8975,	// (0x00061f32) wml_list_single_medium_pane_t1

0x8984,	// (0x00061f41) wml_list_single_large_pane_t1

0x8993,	// (0x00061f50) input_focus_pane_cp02_ParamLimits

0x8993,	// (0x00061f50) input_focus_pane_cp02

0x89a6,	// (0x00061f63) wml_selection_box_pane_g1

0x89af,	// (0x00061f6c) wml_selection_box_pane_t1_ParamLimits

0x89af,	// (0x00061f6c) wml_selection_box_pane_t1

0x7679,	// (0x00060c36) bg_wml_button_pane_ParamLimits

0x7679,	// (0x00060c36) bg_wml_button_pane

0x89c7,	// (0x00061f84) wml_button_pane_g1

0x89cf,	// (0x00061f8c) wml_button_pane_t1

0x89c7,	// (0x00061f84) wml_button_bg_pane_g1

0x89df,	// (0x00061f9c) wml_button_bg_pane_g2

0x89e7,	// (0x00061fa4) wml_button_bg_pane_g3

0x89ef,	// (0x00061fac) wml_button_bg_pane_g4

0x89f7,	// (0x00061fb4) wml_button_bg_pane_g5

0x89ff,	// (0x00061fbc) wml_button_bg_pane_g6

0x8a07,	// (0x00061fc4) wml_button_bg_pane_g7

0x8a0f,	// (0x00061fcc) wml_button_bg_pane_g8

0x8a17,	// (0x00061fd4) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00068868) wml_button_bg_pane_g

0x8a1f,	// (0x00061fdc) bg_list_pane_cp02

0x8a28,	// (0x00061fe5) mce_header_pane_ParamLimits

0x8a28,	// (0x00061fe5) mce_header_pane

0x8a3c,	// (0x00061ff9) mce_icon_pane

0x8a3c,	// (0x00061ff9) mce_image_pane

0x8a45,	// (0x00062002) mce_text_pane_ParamLimits

0x8a45,	// (0x00062002) mce_text_pane

0x8a59,	// (0x00062016) scroll_pane_cp03

0x8a59,	// (0x00062016) scroll_pane_cp04

0x8a61,	// (0x0006201e) scroll_pane_cp05_ParamLimits

0x8a61,	// (0x0006201e) scroll_pane_cp05

0x8a6d,	// (0x0006202a) mce_header_field_pane_ParamLimits

0x8a6d,	// (0x0006202a) mce_header_field_pane

0x8a8d,	// (0x0006204a) mce_header_field_pane_2_ParamLimits

0x8a8d,	// (0x0006204a) mce_header_field_pane_2

0x8aa3,	// (0x00062060) mce_header_field_pane_3

0x8aab,	// (0x00062068) list_single_mce_message_pane_ParamLimits

0x8aab,	// (0x00062068) list_single_mce_message_pane

0x8ac2,	// (0x0006207f) list_single_mce_smart_pane_ParamLimits

0x8ac2,	// (0x0006207f) list_single_mce_smart_pane

0x8ae4,	// (0x000620a1) input_focus_pane_cp03

0x8aed,	// (0x000620aa) list_header_data_pane

0x8af5,	// (0x000620b2) mce_header_field_pane_t1

0x8b03,	// (0x000620c0) list_single_mce_header_pane_ParamLimits

0x8b03,	// (0x000620c0) list_single_mce_header_pane

0x8b1b,	// (0x000620d8) list_single_mce_header_pane_t1

0x8b2a,	// (0x000620e7) list_single_mce_message_pane_g1

0x8b33,	// (0x000620f0) list_single_mce_message_pane_t1

0x8b60,	// (0x0006211d) bg_cale_heading_pane_cp01_ParamLimits

0x8b60,	// (0x0006211d) bg_cale_heading_pane_cp01

0x8b83,	// (0x00062140) bg_cale_pane_cp02_ParamLimits

0x8b83,	// (0x00062140) bg_cale_pane_cp02

0x8ba6,	// (0x00062163) cale_month_corner_pane

0x8bbc,	// (0x00062179) cale_month_day_heading_pane_ParamLimits

0x8bbc,	// (0x00062179) cale_month_day_heading_pane

0x8bdf,	// (0x0006219c) cale_month_pane_g1_ParamLimits

0x8bdf,	// (0x0006219c) cale_month_pane_g1

0x8bfb,	// (0x000621b8) cale_month_pane_g2_ParamLimits

0x8bfb,	// (0x000621b8) cale_month_pane_g2

0x8c14,	// (0x000621d1) cale_month_pane_g3_ParamLimits

0x8c14,	// (0x000621d1) cale_month_pane_g3

0x8c40,	// (0x000621fd) cale_month_pane_g4_ParamLimits

0x8c40,	// (0x000621fd) cale_month_pane_g4

0x8c6c,	// (0x00062229) cale_month_pane_g5_ParamLimits

0x8c6c,	// (0x00062229) cale_month_pane_g5

0x8c98,	// (0x00062255) cale_month_pane_g6_ParamLimits

0x8c98,	// (0x00062255) cale_month_pane_g6

0x8cc4,	// (0x00062281) cale_month_pane_g7_ParamLimits

0x8cc4,	// (0x00062281) cale_month_pane_g7

0x8cf0,	// (0x000622ad) cale_month_pane_g8_ParamLimits

0x8cf0,	// (0x000622ad) cale_month_pane_g8

0x8d1c,	// (0x000622d9) cale_month_pane_g9_ParamLimits

0x8d1c,	// (0x000622d9) cale_month_pane_g9

0x8d46,	// (0x00062303) cale_month_pane_g10_ParamLimits

0x8d46,	// (0x00062303) cale_month_pane_g10

0x8d70,	// (0x0006232d) cale_month_pane_g11_ParamLimits

0x8d70,	// (0x0006232d) cale_month_pane_g11

0x8d9a,	// (0x00062357) cale_month_pane_g12_ParamLimits

0x8d9a,	// (0x00062357) cale_month_pane_g12

0x8dc4,	// (0x00062381) cale_month_pane_g13_ParamLimits

0x8dc4,	// (0x00062381) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0006887b) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0006887b) cale_month_pane_g

0x8e00,	// (0x000623bd) cale_month_week_pane

0x8e11,	// (0x000623ce) grid_cale_month_pane_ParamLimits

0x8e11,	// (0x000623ce) grid_cale_month_pane

0x8e2f,	// (0x000623ec) cale_month_day_heading_pane_t1

0x8e8d,	// (0x0006244a) cale_month_day_heading_pane_t2

0x8ef2,	// (0x000624af) cale_month_day_heading_pane_t3

0x8f57,	// (0x00062514) cale_month_day_heading_pane_t4

0x8fbc,	// (0x00062579) cale_month_day_heading_pane_t5

0x9021,	// (0x000625de) cale_month_day_heading_pane_t6

0x9086,	// (0x00062643) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00068896) cale_month_day_heading_pane_t

0x7f94,	// (0x00061551) bg_cale_side_pane_cp01

0x90eb,	// (0x000626a8) cale_month_week_pane_t1

0x9102,	// (0x000626bf) cale_month_week_pane_t2

0x9119,	// (0x000626d6) cale_month_week_pane_t3

0x9130,	// (0x000626ed) cale_month_week_pane_t4

0x9147,	// (0x00062704) cale_month_week_pane_t5

0x915e,	// (0x0006271b) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000688a5) cale_month_week_pane_t

0x9175,	// (0x00062732) cell_cale_month_pane_ParamLimits

0x9175,	// (0x00062732) cell_cale_month_pane

0x921b,	// (0x000627d8) cell_cale_month_pane_g1

0x9227,	// (0x000627e4) cell_cale_month_pane_t1_ParamLimits

0x9227,	// (0x000627e4) cell_cale_month_pane_t1

0x8136,	// (0x000616f3) grid_highlight_pane_cp08

0x7aef,	// (0x000610ac) main_smil_g1

0x9243,	// (0x00062800) smil_status_pane

0x924c,	// (0x00062809) smil_text_pane

0x1f5a,	// (0x0005b517) bg_popup_call3_rect_pane_g8

0x1f62,	// (0x0005b51f) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00068b5e) bg_popup_call3_rect_pane_g

0x222b,	// (0x0005b7e8) smil_status_volume_pane_g1

0x925e,	// (0x0006281b) smil_status_pane_t1

0xa644,	// (0x00063c01) volume_smil_pane

0x9275,	// (0x00062832) list_smil_text_pane

0x927f,	// (0x0006283c) scroll_pane_cp011

0x9288,	// (0x00062845) smil_text_list_pane_t1_ParamLimits

0x9288,	// (0x00062845) smil_text_list_pane_t1

0x92cd,	// (0x0006288a) aid_volume_smil_ParamLimits

0x92cd,	// (0x0006288a) aid_volume_smil

0x7aef,	// (0x000610ac) smil_volume_pane_g1

0x7aef,	// (0x000610ac) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000688c5) smil_volume_pane_g

0x79ba,	// (0x00060f77) listscroll_cale_day_pane

0x92ef,	// (0x000628ac) bg_cale_pane

0x9307,	// (0x000628c4) list_cale_pane

0x9318,	// (0x000628d5) scroll_pane_cp09

0x9329,	// (0x000628e6) cale_bg_pane_g1

0x9331,	// (0x000628ee) cale_bg_pane_g2

0x9339,	// (0x000628f6) cale_bg_pane_g3

0x9341,	// (0x000628fe) cale_bg_pane_g4

0x9349,	// (0x00062906) cale_bg_pane_g5

0x9351,	// (0x0006290e) cale_bg_pane_g6

0x9359,	// (0x00062916) cale_bg_pane_g7

0x9361,	// (0x0006291e) cale_bg_pane_g8

0x9369,	// (0x00062926) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000688ca) cale_bg_pane_g

0x9371,	// (0x0006292e) list_cale_time_pane_ParamLimits

0x9371,	// (0x0006292e) list_cale_time_pane

0x9388,	// (0x00062945) list_cale_time_pane_g1_ParamLimits

0x9388,	// (0x00062945) list_cale_time_pane_g1

0x9394,	// (0x00062951) list_cale_time_pane_g2_ParamLimits

0x9394,	// (0x00062951) list_cale_time_pane_g2

0x93a1,	// (0x0006295e) list_cale_time_pane_g3_ParamLimits

0x93a1,	// (0x0006295e) list_cale_time_pane_g3

0x93ad,	// (0x0006296a) list_cale_time_pane_g4_ParamLimits

0x93ad,	// (0x0006296a) list_cale_time_pane_g4

0x93b9,	// (0x00062976) list_cale_time_pane_g5_ParamLimits

0x93b9,	// (0x00062976) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x000688dd) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x000688dd) list_cale_time_pane_g

0x93d2,	// (0x0006298f) list_cale_time_pane_t1_ParamLimits

0x93d2,	// (0x0006298f) list_cale_time_pane_t1

0x93fa,	// (0x000629b7) list_cale_time_pane_t2_ParamLimits

0x93fa,	// (0x000629b7) list_cale_time_pane_t2

0x98d5,	// (0x00062e92) aid_blid_cardinal_pane

0x9913,	// (0x00062ed0) compass_pane_t4

0x9422,	// (0x000629df) list_cale_time_pane_t4_ParamLimits

0x9422,	// (0x000629df) list_cale_time_pane_t4

0x9921,	// (0x00062ede) compass_pane_t5

0x992f,	// (0x00062eec) compass_pane_t6

0x993d,	// (0x00062efa) compass_pane_t7

0x0bd7,	// (0x0005a194) navi_pane_cc_t1

0x0d8d,	// (0x0005a34a) aid_phob_thumbnail_center_pane

0x9eb0,	// (0x0006346d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x000688ea) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x000688ea) list_cale_time_pane_t

0x7053,	// (0x00060610) bg_popup_window_pane_cp02_ParamLimits

0x7053,	// (0x00060610) bg_popup_window_pane_cp02

0x944a,	// (0x00062a07) heading_pane_cp01_ParamLimits

0x944a,	// (0x00062a07) heading_pane_cp01

0x9456,	// (0x00062a13) loc_req_pane_ParamLimits

0x9456,	// (0x00062a13) loc_req_pane

0x9466,	// (0x00062a23) loc_type_pane_ParamLimits

0x9466,	// (0x00062a23) loc_type_pane

0x9478,	// (0x00062a35) loc_type_pane_t1_ParamLimits

0x9478,	// (0x00062a35) loc_type_pane_t1

0x948a,	// (0x00062a47) loc_type_pane_t2_ParamLimits

0x948a,	// (0x00062a47) loc_type_pane_t2

0x949c,	// (0x00062a59) loc_type_pane_t3_ParamLimits

0x949c,	// (0x00062a59) loc_type_pane_t3

0x0002,

0xf334,	// (0x000688f1) loc_type_pane_t_ParamLimits

0xf334,	// (0x000688f1) loc_type_pane_t

0x94ae,	// (0x00062a6b) list_loc_req_pane

0x94b8,	// (0x00062a75) scroll_pane_cp012

0x94c1,	// (0x00062a7e) list_single_loc_request_popup_menu_pane_ParamLimits

0x94c1,	// (0x00062a7e) list_single_loc_request_popup_menu_pane

0x94d3,	// (0x00062a90) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x94d3,	// (0x00062a90) list_single_loc_request_popup_menu_pane_g1

0x94df,	// (0x00062a9c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x94df,	// (0x00062a9c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x000688f8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x000688f8) list_single_loc_request_popup_menu_pane_g

0x94eb,	// (0x00062aa8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x94eb,	// (0x00062aa8) list_single_loc_request_popup_menu_pane_t1

0x9501,	// (0x00062abe) bg_popup_window_pane_cp03_ParamLimits

0x9501,	// (0x00062abe) bg_popup_window_pane_cp03

0x950f,	// (0x00062acc) heading_loc_req_pane_ParamLimits

0x950f,	// (0x00062acc) heading_loc_req_pane

0x951b,	// (0x00062ad8) popup_dyc_status_message_window_g1_ParamLimits

0x951b,	// (0x00062ad8) popup_dyc_status_message_window_g1

0x9527,	// (0x00062ae4) popup_dyc_status_message_window_t1_ParamLimits

0x9527,	// (0x00062ae4) popup_dyc_status_message_window_t1

0x9539,	// (0x00062af6) popup_dyc_status_message_window_t2_ParamLimits

0x9539,	// (0x00062af6) popup_dyc_status_message_window_t2

0x954b,	// (0x00062b08) popup_dyc_status_message_window_t3_ParamLimits

0x954b,	// (0x00062b08) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x000688fd) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x000688fd) popup_dyc_status_message_window_t

0x741e,	// (0x000609db) bg_heading_pane_cp01

0x955d,	// (0x00062b1a) heading_loc_req_pane_g1

0x9565,	// (0x00062b22) heading_loc_req_pane_g2

0x956d,	// (0x00062b2a) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00068904) heading_loc_req_pane_g

0x9575,	// (0x00062b32) heading_loc_req_pane_t1

0x959e,	// (0x00062b5b) bg_popup_sub_pane_cp01_ParamLimits

0x959e,	// (0x00062b5b) bg_popup_sub_pane_cp01

0x95ac,	// (0x00062b69) popup_cale_events_window_g1_ParamLimits

0x95ac,	// (0x00062b69) popup_cale_events_window_g1

0x95cc,	// (0x00062b89) popup_cale_events_window_g2_ParamLimits

0x95cc,	// (0x00062b89) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00068938) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00068938) popup_cale_events_window_g

0x95ec,	// (0x00062ba9) popup_cale_events_window_t1_ParamLimits

0x95ec,	// (0x00062ba9) popup_cale_events_window_t1

0x95fe,	// (0x00062bbb) popup_cale_events_window_t2_ParamLimits

0x95fe,	// (0x00062bbb) popup_cale_events_window_t2

0x963c,	// (0x00062bf9) popup_cale_events_window_t3_ParamLimits

0x963c,	// (0x00062bf9) popup_cale_events_window_t3

0x9676,	// (0x00062c33) popup_cale_events_window_t4_ParamLimits

0x9676,	// (0x00062c33) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0006893d) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0006893d) popup_cale_events_window_t

0x96ac,	// (0x00062c69) call_type_pane

0x0da5,	// (0x0005a362) popup_call_status_window_g1

0x96b8,	// (0x00062c75) popup_call_status_window_g2

0x96c4,	// (0x00062c81) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00068946) popup_call_status_window_g

0xeb54,	// (0x00068111) call_type_pane_g1

0xeb5d,	// (0x0006811a) call_type_pane_g2

0x0001,

0xf390,	// (0x0006894d) call_type_pane_g

0x741e,	// (0x000609db) bg_popup_sub_pane_cp02

0xeb66,	// (0x00068123) listscroll_popup_wml_pane

0xeb6e,	// (0x0006812b) list_wml_pane

0xeb78,	// (0x00068135) scroll_pane_cp013

0x96d0,	// (0x00062c8d) list_single_graphic_popup_wml_pane_ParamLimits

0x96d0,	// (0x00062c8d) list_single_graphic_popup_wml_pane

0x7aef,	// (0x000610ac) list_single_graphic_popup_wml_pane_g1

0xeb81,	// (0x0006813e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00068952) list_single_graphic_popup_wml_pane_g

0xeb89,	// (0x00068146) list_single_graphic_popup_wml_pane_t1

0xeb9f,	// (0x0006815c) aid_call_pane

0x7671,	// (0x00060c2e) popup_clock_analogue_window_g1

0x7671,	// (0x00060c2e) popup_clock_analogue_window_g2

0x96e4,	// (0x00062ca1) popup_clock_analogue_window_g3

0x96e4,	// (0x00062ca1) popup_clock_analogue_window_g4

0x7aef,	// (0x000610ac) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00068957) popup_clock_analogue_window_g

0x96ec,	// (0x00062ca9) popup_clock_analogue_window_t1

0x96fa,	// (0x00062cb7) clock_digital_number_pane_ParamLimits

0x96fa,	// (0x00062cb7) clock_digital_number_pane

0x9706,	// (0x00062cc3) clock_digital_number_pane_cp02_ParamLimits

0x9706,	// (0x00062cc3) clock_digital_number_pane_cp02

0x9712,	// (0x00062ccf) clock_digital_number_pane_cp03_ParamLimits

0x9712,	// (0x00062ccf) clock_digital_number_pane_cp03

0x971e,	// (0x00062cdb) clock_digital_number_pane_cp04_ParamLimits

0x971e,	// (0x00062cdb) clock_digital_number_pane_cp04

0x972a,	// (0x00062ce7) clock_digital_separator_pane_ParamLimits

0x972a,	// (0x00062ce7) clock_digital_separator_pane

0x9736,	// (0x00062cf3) popup_clock_digital_window_t1

0x7aef,	// (0x000610ac) clock_digital_number_pane_g1

0x7aef,	// (0x000610ac) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000688c5) clock_digital_number_pane_g

0x7aef,	// (0x000610ac) clock_digital_separator_pane_g1

0x7aef,	// (0x000610ac) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000688c5) clock_digital_separator_pane_g

0x741e,	// (0x000609db) bg_popup_window_pane_cp04

0xeba7,	// (0x00068164) heading_pane_cp03

0xebaf,	// (0x0006816c) listscroll_popup_gms_pane

0xebb7,	// (0x00068174) grid_large_graphic_popup_pane

0xebc1,	// (0x0006817e) listscroll_popup_gms_pane_g1

0xebc9,	// (0x00068186) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00068962) listscroll_popup_gms_pane_g

0x88ed,	// (0x00061eaa) scroll_pane_cp014

0x9753,	// (0x00062d10) cell_large_graphic_popup_pane_ParamLimits

0x9753,	// (0x00062d10) cell_large_graphic_popup_pane

0x976a,	// (0x00062d27) cell_large_graphic_popup_pane_g1_ParamLimits

0x976a,	// (0x00062d27) cell_large_graphic_popup_pane_g1

0xebd1,	// (0x0006818e) cell_large_graphic_popup_pane_g2_ParamLimits

0xebd1,	// (0x0006818e) cell_large_graphic_popup_pane_g2

0xebdd,	// (0x0006819a) cell_large_graphic_popup_pane_g3_ParamLimits

0xebdd,	// (0x0006819a) cell_large_graphic_popup_pane_g3

0xebea,	// (0x000681a7) cell_large_graphic_popup_pane_g4_ParamLimits

0xebea,	// (0x000681a7) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00068967) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00068967) cell_large_graphic_popup_pane_g

0xebfa,	// (0x000681b7) grid_highlight_pane_cp010

0x7aef,	// (0x000610ac) bg_popup_call_pane_g1

0xec04,	// (0x000681c1) list_single_graphic_popup_conf_pane_ParamLimits

0xec04,	// (0x000681c1) list_single_graphic_popup_conf_pane

0xec17,	// (0x000681d4) list_highlight_pane_cp01

0xec20,	// (0x000681dd) list_single_graphic_popup_conf_pane_g1

0xec28,	// (0x000681e5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00068970) list_single_graphic_popup_conf_pane_g

0xec30,	// (0x000681ed) list_single_graphic_popup_conf_pane_t1

0xec3e,	// (0x000681fb) linegrid_cams_pane_g1

0x9776,	// (0x00062d33) linegrid_cams_pane_g2

0x7cc1,	// (0x0006127e) linegrid_cams_pane_g3

0xec47,	// (0x00068204) linegrid_cams_pane_g4

0x977f,	// (0x00062d3c) linegrid_cams_pane_g5

0x9788,	// (0x00062d45) linegrid_cams_pane_g6

0x818b,	// (0x00061748) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00068975) linegrid_cams_pane_g

0xec50,	// (0x0006820d) popup_clock_analogue_window

0xec50,	// (0x0006820d) popup_clock_digital_window

0x741e,	// (0x000609db) popup_phob_thumbnail_window

0x7aef,	// (0x000610ac) call_video_uplink_pane_g1

0xec59,	// (0x00068216) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00068984) call_video_uplink_pane_g

0x8136,	// (0x000616f3) video_uplink_pane

0xec61,	// (0x0006821e) mce_image_pane_g1

0x9791,	// (0x00062d4e) mce_image_pane_g2

0x9799,	// (0x00062d56) mce_image_pane_g3

0x97a1,	// (0x00062d5e) mce_image_pane_g4

0x97a9,	// (0x00062d66) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00068989) mce_image_pane_g

0xec6b,	// (0x00068228) control_top_pane_stacon_cp01_ParamLimits

0xec6b,	// (0x00068228) control_top_pane_stacon_cp01

0xec7b,	// (0x00068238) uni_indicator_pane_stacon_cp01_ParamLimits

0xec7b,	// (0x00068238) uni_indicator_pane_stacon_cp01

0xec8c,	// (0x00068249) bg_popup_sub_pane_cp03

0xec96,	// (0x00068253) chi_dic_find_pane

0x97b1,	// (0x00062d6e) listscroll_chi_dic_pane

0xec9e,	// (0x0006825b) main_pane_chidic_g1

0xeca6,	// (0x00068263) chi_dic_find_pane_t1

0xecb4,	// (0x00068271) find_chidic_pane

0xecbd,	// (0x0006827a) chi_dic_list_pane_ParamLimits

0xecbd,	// (0x0006827a) chi_dic_list_pane

0xecce,	// (0x0006828b) scroll_pane_cp020

0xecd6,	// (0x00068293) find_chidic_pane_t1

0x741e,	// (0x000609db) input_focus_pane_cp06

0x97c3,	// (0x00062d80) list_chi_dic_pane_ParamLimits

0x97c3,	// (0x00062d80) list_chi_dic_pane

0x97d6,	// (0x00062d93) list_chi_dic_pane_t1_ParamLimits

0x97d6,	// (0x00062d93) list_chi_dic_pane_t1

0x741e,	// (0x000609db) list_highlight_pane_cp020

0xece5,	// (0x000682a2) bg_cale_heading_pane_g1

0x97e9,	// (0x00062da6) bg_cale_heading_pane_g2

0x97f1,	// (0x00062dae) bg_cale_heading_pane_g3

0x97f9,	// (0x00062db6) bg_cale_heading_pane_g4

0x9801,	// (0x00062dbe) bg_cale_heading_pane_g5

0x9809,	// (0x00062dc6) bg_cale_heading_pane_g6

0x9811,	// (0x00062dce) bg_cale_heading_pane_g7

0x9819,	// (0x00062dd6) bg_cale_heading_pane_g8

0x9821,	// (0x00062dde) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00068994) bg_cale_heading_pane_g

0xece5,	// (0x000682a2) bg_cale_side_pane_g1

0x9829,	// (0x00062de6) bg_cale_side_pane_g2

0x9831,	// (0x00062dee) bg_cale_side_pane_g3

0x9839,	// (0x00062df6) bg_cale_side_pane_g4

0x9841,	// (0x00062dfe) bg_cale_side_pane_g5

0x9849,	// (0x00062e06) bg_cale_side_pane_g6

0x9851,	// (0x00062e0e) bg_cale_side_pane_g7

0x9859,	// (0x00062e16) bg_cale_side_pane_g8

0x9861,	// (0x00062e1e) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000689a7) bg_cale_side_pane_g

0x9869,	// (0x00062e26) popup_call_status_window_ParamLimits

0x9869,	// (0x00062e26) popup_call_status_window

0xeced,	// (0x000682aa) stacon_top_pane

0xecf5,	// (0x000682b2) status_pane_ParamLimits

0xecf5,	// (0x000682b2) status_pane

0x0b56,	// (0x0005a113) status_small_pane

0x0b5e,	// (0x0005a11b) control_pane

0x741e,	// (0x000609db) stacon_bottom_pane

0x0b66,	// (0x0005a123) list_single_mce_smart_pane_t1_ParamLimits

0x0b66,	// (0x0005a123) list_single_mce_smart_pane_t1

0x0b79,	// (0x0005a136) list_single_mce_smart_pane_t2_ParamLimits

0x0b79,	// (0x0005a136) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000689ba) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000689ba) list_single_mce_smart_pane_t

0x9878,	// (0x00062e35) compass_pane

0x9881,	// (0x00062e3e) main_location2_pane_t1

0x9897,	// (0x00062e54) main_location2_pane_t2

0x98ad,	// (0x00062e6a) main_location2_pane_t3

0x0003,

0xf402,	// (0x000689bf) main_location2_pane_t

0x0ba1,	// (0x0005a15e) compass_pane_g1_ParamLimits

0x0ba1,	// (0x0005a15e) compass_pane_g1

0x98f5,	// (0x00062eb2) compass_pane_t1

0x9904,	// (0x00062ec1) compass_pane_t2

0x0005,

0xf40b,	// (0x000689c8) compass_pane_t

0x994b,	// (0x00062f08) text_secondary_cp61

0x0bce,	// (0x0005a18b) navi_pane_cams_g5

0x0c0f,	// (0x0005a1cc) navi_pane_im_t1

0x0c1d,	// (0x0005a1da) navi_pane_mp_g1_ParamLimits

0x0c1d,	// (0x0005a1da) navi_pane_mp_g1

0x0c31,	// (0x0005a1ee) navi_pane_mp_g2_ParamLimits

0x0c31,	// (0x0005a1ee) navi_pane_mp_g2

0x0c3d,	// (0x0005a1fa) navi_pane_mp_g3_ParamLimits

0x0c3d,	// (0x0005a1fa) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x000689dc) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x000689dc) navi_pane_mp_g

0x0c49,	// (0x0005a206) navi_pane_mp_t1

0x0c57,	// (0x0005a214) navi_pane_mp_t2

0x0002,

0xf426,	// (0x000689e3) navi_pane_mp_t

0x0cc4,	// (0x0005a281) navi_pane_vt_g1

0x0c49,	// (0x0005a206) navi_pane_vt_t1

0x0ccc,	// (0x0005a289) navi_slider_pane

0x0cd4,	// (0x0005a291) zooming_pane

0x0cdc,	// (0x0005a299) navi_slider_pane_g1

0x99c2,	// (0x00062f7f) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x000689ea) navi_slider_pane_g

0x0d12,	// (0x0005a2cf) aid_levels_zoom

0x0d1a,	// (0x0005a2d7) zooming_pane_g1

0x0d22,	// (0x0005a2df) zooming_pane_g2

0x0d22,	// (0x0005a2df) zooming_pane_g3

0x0002,

0xf43c,	// (0x000689f9) zooming_pane_g

0x0d2a,	// (0x0005a2e7) level_10_zoom

0x0d33,	// (0x0005a2f0) level_11_zoom

0x0d3c,	// (0x0005a2f9) level_1_zoom

0x0d45,	// (0x0005a302) level_2_zoom

0x0d4e,	// (0x0005a30b) level_3_zoom

0x0d57,	// (0x0005a314) level_4_zoom

0x0d60,	// (0x0005a31d) level_5_zoom

0x0d69,	// (0x0005a326) level_6_zoom

0x0d72,	// (0x0005a32f) level_7_zoom

0x0d7b,	// (0x0005a338) level_8_zoom

0x0d84,	// (0x0005a341) level_9_zoom

0x0d95,	// (0x0005a352) popup_phob_thumbnail_window_g1

0x0d9d,	// (0x0005a35a) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00068a00) popup_phob_thumbnail_window_g

0x20fc,	// (0x0005b6b9) level_1_location

0x2104,	// (0x0005b6c1) level_2_location

0x210c,	// (0x0005b6c9) level_3_location

0x2114,	// (0x0005b6d1) level_4_location

0x0cd4,	// (0x0005a291) level_5_location

0x99d4,	// (0x00062f91) mce_icon_pane_g1

0x99dc,	// (0x00062f99) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00068a05) mce_icon_pane_g

0x99e4,	// (0x00062fa1) main_mup_pane_g1_ParamLimits

0x99e4,	// (0x00062fa1) main_mup_pane_g1

0x99fc,	// (0x00062fb9) main_mup_pane_g2_ParamLimits

0x99fc,	// (0x00062fb9) main_mup_pane_g2

0x9a18,	// (0x00062fd5) main_mup_pane_g3_ParamLimits

0x9a18,	// (0x00062fd5) main_mup_pane_g3

0x9a34,	// (0x00062ff1) main_mup_pane_g4_ParamLimits

0x9a34,	// (0x00062ff1) main_mup_pane_g4

0x9a50,	// (0x0006300d) main_mup_pane_g5_ParamLimits

0x9a50,	// (0x0006300d) main_mup_pane_g5

0x9a6d,	// (0x0006302a) main_mup_pane_g6_ParamLimits

0x9a6d,	// (0x0006302a) main_mup_pane_g6

0x9a89,	// (0x00063046) main_mup_pane_g7_ParamLimits

0x9a89,	// (0x00063046) main_mup_pane_g7

0x9aa5,	// (0x00063062) main_mup_pane_g8_ParamLimits

0x9aa5,	// (0x00063062) main_mup_pane_g8

0x9ac1,	// (0x0006307e) main_mup_pane_g9_ParamLimits

0x9ac1,	// (0x0006307e) main_mup_pane_g9

0x9ad8,	// (0x00063095) main_mup_pane_g10_ParamLimits

0x9ad8,	// (0x00063095) main_mup_pane_g10

0x9aef,	// (0x000630ac) main_mup_pane_g11_ParamLimits

0x9aef,	// (0x000630ac) main_mup_pane_g11

0x9b03,	// (0x000630c0) main_mup_pane_g12_ParamLimits

0x9b03,	// (0x000630c0) main_mup_pane_g12

0x9b0f,	// (0x000630cc) main_mup_pane_g13_ParamLimits

0x9b0f,	// (0x000630cc) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00068a0a) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00068a0a) main_mup_pane_g

0x9b23,	// (0x000630e0) main_mup_pane_t1_ParamLimits

0x9b23,	// (0x000630e0) main_mup_pane_t1

0x9b40,	// (0x000630fd) main_mup_pane_t2_ParamLimits

0x9b40,	// (0x000630fd) main_mup_pane_t2

0x9b5a,	// (0x00063117) main_mup_pane_t3_ParamLimits

0x9b5a,	// (0x00063117) main_mup_pane_t3

0x9b74,	// (0x00063131) main_mup_pane_t4_ParamLimits

0x9b74,	// (0x00063131) main_mup_pane_t4

0x9b86,	// (0x00063143) main_mup_pane_t5_ParamLimits

0x9b86,	// (0x00063143) main_mup_pane_t5

0x9b98,	// (0x00063155) main_mup_pane_t6_ParamLimits

0x9b98,	// (0x00063155) main_mup_pane_t6

0x0005,

0xf468,	// (0x00068a25) main_mup_pane_t_ParamLimits

0xf468,	// (0x00068a25) main_mup_pane_t

0x9bae,	// (0x0006316b) mup_progress_pane_ParamLimits

0x9bae,	// (0x0006316b) mup_progress_pane

0x9bba,	// (0x00063177) mup_visualizer_pane_ParamLimits

0x9bba,	// (0x00063177) mup_visualizer_pane

0x9be8,	// (0x000631a5) mup_volume_pane_ParamLimits

0x9be8,	// (0x000631a5) mup_volume_pane

0x0da5,	// (0x0005a362) mup_visualizer_pane_g1_ParamLimits

0x0da5,	// (0x0005a362) mup_visualizer_pane_g1

0x0da5,	// (0x0005a362) mup_visualizer_pane_g2_ParamLimits

0x0da5,	// (0x0005a362) mup_visualizer_pane_g2

0x0ba1,	// (0x0005a15e) mup_visualizer_pane_g3_ParamLimits

0x0ba1,	// (0x0005a15e) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00068a32) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00068a32) mup_visualizer_pane_g

0x7aef,	// (0x000610ac) mup_volume_pane_g1

0x0dbb,	// (0x0005a378) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00068a39) mup_volume_pane_g

0x7aef,	// (0x000610ac) mup_progress_pane_g1

0x0dc4,	// (0x0005a381) mup_progress_pane_g2

0x0dcd,	// (0x0005a38a) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00068a3e) mup_progress_pane_g

0x741e,	// (0x000609db) bg_popup_window_pane_cp05

0x0dd6,	// (0x0005a393) heading_pane_cp02_ParamLimits

0x0dd6,	// (0x0005a393) heading_pane_cp02

0x0df0,	// (0x0005a3ad) list_popup_blid_pane

0x0df8,	// (0x0005a3b5) list_blid_sat_info_pane_ParamLimits

0x0df8,	// (0x0005a3b5) list_blid_sat_info_pane

0x0e0b,	// (0x0005a3c8) list_blid_sat_info_pane_g1

0x0e13,	// (0x0005a3d0) list_blid_sat_info_pane_t1

0x9cdb,	// (0x00063298) mup_equalizer_pane_ParamLimits

0x9cdb,	// (0x00063298) mup_equalizer_pane

0x9cf4,	// (0x000632b1) mup_equalizer_pane_cp1_ParamLimits

0x9cf4,	// (0x000632b1) mup_equalizer_pane_cp1

0x9d0d,	// (0x000632ca) mup_equalizer_pane_cp2_ParamLimits

0x9d0d,	// (0x000632ca) mup_equalizer_pane_cp2

0x9d26,	// (0x000632e3) mup_equalizer_pane_cp3_ParamLimits

0x9d26,	// (0x000632e3) mup_equalizer_pane_cp3

0x9d3f,	// (0x000632fc) mup_equalizer_pane_cp4_ParamLimits

0x9d3f,	// (0x000632fc) mup_equalizer_pane_cp4

0x9d58,	// (0x00063315) mup_equalizer_pane_cp5

0x9d6a,	// (0x00063327) mup_equalizer_pane_cp6

0x9d7c,	// (0x00063339) mup_equalizer_pane_cp7

0x1fda,	// (0x0005b597) bg_popup_call_poc_act_pane_g9

0x1fe2,	// (0x0005b59f) bg_popup_call_poc_act_pane_g10

0x1fea,	// (0x0005b5a7) bg_popup_call_poc_act_pane_g11

0x000a,

0x7679,	// (0x00060c36) mup_scale_pane

0x7aef,	// (0x000610ac) mup_scale_pane_g1

0x0e21,	// (0x0005a3de) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00068a5a) mup_scale_pane_g

0x0e45,	// (0x0005a402) msg_data_pane

0x0e4d,	// (0x0005a40a) scroll_pane_cp017

0x5f38,	// (0x0005f4f5) bg_list_pane_cp04_ParamLimits

0x5f38,	// (0x0005f4f5) bg_list_pane_cp04

0x0e55,	// (0x0005a412) msg_data_pane_g1

0x9791,	// (0x00062d4e) msg_data_pane_g2

0x9799,	// (0x00062d56) msg_data_pane_g3

0x9da0,	// (0x0006335d) msg_data_pane_g4

0x97a9,	// (0x00062d66) msg_data_pane_g5

0x99d4,	// (0x00062f91) msg_data_pane_g6

0x9da8,	// (0x00063365) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00068a69) msg_data_pane_g

0x5f58,	// (0x0005f515) msg_text_pane_ParamLimits

0x5f58,	// (0x0005f515) msg_text_pane

0x9db0,	// (0x0006336d) qrid_highlight_pane_cp011_ParamLimits

0x9db0,	// (0x0006336d) qrid_highlight_pane_cp011

0x741e,	// (0x000609db) msg_body_pane

0x741e,	// (0x000609db) msg_header_pane

0x0e66,	// (0x0005a423) input_focus_pane_cp07

0x5f8a,	// (0x0005f547) msg_header_pane_t1_ParamLimits

0x5f8a,	// (0x0005f547) msg_header_pane_t1

0x5f9c,	// (0x0005f559) msg_header_pane_t2_ParamLimits

0x5f9c,	// (0x0005f559) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00068a7d) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00068a7d) msg_header_pane_t

0x0e8d,	// (0x0005a44a) msg_body_pane_g1

0x5fae,	// (0x0005f56b) msg_body_pane_t1_ParamLimits

0x5fae,	// (0x0005f56b) msg_body_pane_t1

0x5fd9,	// (0x0005f596) msg_body_pane_t2_ParamLimits

0x5fd9,	// (0x0005f596) msg_body_pane_t2

0x5feb,	// (0x0005f5a8) msg_body_pane_t3_ParamLimits

0x5feb,	// (0x0005f5a8) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00068a82) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00068a82) msg_body_pane_t

0x9e14,	// (0x000633d1) main_viewer_pane_g1_ParamLimits

0x9e14,	// (0x000633d1) main_viewer_pane_g1

0x9e20,	// (0x000633dd) main_viewer_pane_g2_ParamLimits

0x9e20,	// (0x000633dd) main_viewer_pane_g2

0x9e2c,	// (0x000633e9) main_viewer_pane_g3_ParamLimits

0x9e2c,	// (0x000633e9) main_viewer_pane_g3

0x9e3b,	// (0x000633f8) main_viewer_pane_g4_ParamLimits

0x9e3b,	// (0x000633f8) main_viewer_pane_g4

0x9e4a,	// (0x00063407) main_viewer_pane_g5_ParamLimits

0x9e4a,	// (0x00063407) main_viewer_pane_g5

0x9e4a,	// (0x00063407) main_viewer_pane_g7_ParamLimits

0x9e4a,	// (0x00063407) main_viewer_pane_g7

0x9e5c,	// (0x00063419) main_viewer_pane_g8_ParamLimits

0x9e5c,	// (0x00063419) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00068a92) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00068a92) main_viewer_pane_g

0x0eb9,	// (0x0005a476) viewer_content_pane_ParamLimits

0x0eb9,	// (0x0005a476) viewer_content_pane

0x9e8c,	// (0x00063449) main_postcard_pane_g1_ParamLimits

0x9e8c,	// (0x00063449) main_postcard_pane_g1

0x9e98,	// (0x00063455) main_postcard_pane_g2_ParamLimits

0x9e98,	// (0x00063455) main_postcard_pane_g2

0x9ea4,	// (0x00063461) main_postcard_pane_g3_ParamLimits

0x9ea4,	// (0x00063461) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00068aa3) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00068aa3) main_postcard_pane_g

0x9eb0,	// (0x0006346d) main_postcard_pane_g4

0x2218,	// (0x0005b7d5) smil_status_volume_pane_g2

0x9ed4,	// (0x00063491) postcard_pane_ParamLimits

0x9ed4,	// (0x00063491) postcard_pane

0x0da5,	// (0x0005a362) postcard_pane_g1_ParamLimits

0x0da5,	// (0x0005a362) postcard_pane_g1

0x9f04,	// (0x000634c1) postcard_pane_g2_ParamLimits

0x9f04,	// (0x000634c1) postcard_pane_g2

0x9f10,	// (0x000634cd) postcard_pane_g3_ParamLimits

0x9f10,	// (0x000634cd) postcard_pane_g3

0x0ed5,	// (0x0005a492) postcard_pane_g4_ParamLimits

0x0ed5,	// (0x0005a492) postcard_pane_g4

0x9f1c,	// (0x000634d9) postcard_pane_g5_ParamLimits

0x9f1c,	// (0x000634d9) postcard_pane_g5

0x9f28,	// (0x000634e5) postcard_pane_g6_ParamLimits

0x9f28,	// (0x000634e5) postcard_pane_g6

0x0ec7,	// (0x0005a484) postcard_pane_g7_ParamLimits

0x0ec7,	// (0x0005a484) postcard_pane_g7

0x0006,

0xf4f3,	// (0x00068ab0) postcard_pane_g_ParamLimits

0xf4f3,	// (0x00068ab0) postcard_pane_g

0x9f34,	// (0x000634f1) main_mp2_pane_g1_ParamLimits

0x9f34,	// (0x000634f1) main_mp2_pane_g1

0x9f40,	// (0x000634fd) main_mp2_pane_g2_ParamLimits

0x9f40,	// (0x000634fd) main_mp2_pane_g2

0x9f4c,	// (0x00063509) main_mp2_pane_g3_ParamLimits

0x9f4c,	// (0x00063509) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00068abf) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00068abf) main_mp2_pane_g

0x9f58,	// (0x00063515) main_mp2_pane_t1_ParamLimits

0x9f58,	// (0x00063515) main_mp2_pane_t1

0x9f6d,	// (0x0006352a) main_mp2_pane_t2_ParamLimits

0x9f6d,	// (0x0006352a) main_mp2_pane_t2

0x9f7f,	// (0x0006353c) main_mp2_pane_t3_ParamLimits

0x9f7f,	// (0x0006353c) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00068ac6) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00068ac6) main_mp2_pane_t

0x0ee3,	// (0x0005a4a0) pec_content_pane_ParamLimits

0x0ee3,	// (0x0005a4a0) pec_content_pane

0x88ed,	// (0x00061eaa) scroll_pane_cp015

0x0ef5,	// (0x0005a4b2) pec_attribute_pane_ParamLimits

0x0ef5,	// (0x0005a4b2) pec_attribute_pane

0x9f91,	// (0x0006354e) pec_content_pane_g1_ParamLimits

0x9f91,	// (0x0006354e) pec_content_pane_g1

0x0f05,	// (0x0005a4c2) pec_content_pane_t1_ParamLimits

0x0f05,	// (0x0005a4c2) pec_content_pane_t1

0x0f17,	// (0x0005a4d4) pec_content_pane_t2_ParamLimits

0x0f17,	// (0x0005a4d4) pec_content_pane_t2

0x0001,

0xf510,	// (0x00068acd) pec_content_pane_t_ParamLimits

0xf510,	// (0x00068acd) pec_content_pane_t

0x9f9d,	// (0x0006355a) list_single_graphic_pane_cp01_ParamLimits

0x9f9d,	// (0x0006355a) list_single_graphic_pane_cp01

0x7679,	// (0x00060c36) bg_popup_sub_pane_cp04

0x0f29,	// (0x0005a4e6) popup_mup_playback_window_g1

0x0f35,	// (0x0005a4f2) popup_mup_playback_window_t1

0x0f4a,	// (0x0005a507) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00068ad2) popup_mup_playback_window_t

0x0f81,	// (0x0005a53e) main_image_pane_g1_ParamLimits

0x0f81,	// (0x0005a53e) main_image_pane_g1

0x0fc4,	// (0x0005a581) scroll_pane_cp018_ParamLimits

0x0fc4,	// (0x0005a581) scroll_pane_cp018

0x0fdc,	// (0x0005a599) scroll_pane_cp016_ParamLimits

0x0fdc,	// (0x0005a599) scroll_pane_cp016

0xa022,	// (0x000635df) smil2_image_pane_ParamLimits

0xa022,	// (0x000635df) smil2_image_pane

0xa04a,	// (0x00063607) smil2_root_pane_ParamLimits

0xa04a,	// (0x00063607) smil2_root_pane

0xa076,	// (0x00063633) smil2_text_pane_ParamLimits

0xa076,	// (0x00063633) smil2_text_pane

0x741e,	// (0x000609db) bg_list_pane_cp06

0x1018,	// (0x0005a5d5) grid_radio_pane

0x741e,	// (0x000609db) bg_popup_window_pane_cp06

0x1020,	// (0x0005a5dd) main_fmradio_pane_t1

0xeba7,	// (0x00068164) heading_pane_cp04

0x102e,	// (0x0005a5eb) main_fmradio_pane_t2

0x2032,	// (0x0005b5ef) popup_cale_lunar_info_window_g1

0x103c,	// (0x0005a5f9) main_fmradio_pane_t3

0x203a,	// (0x0005b5f7) popup_cale_lunar_info_window_g2

0x104a,	// (0x0005a607) main_fmradio_pane_t4

0x0001,

0x1058,	// (0x0005a615) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x00068bc0) popup_cale_lunar_info_window_g

0xf52a,	// (0x00068ae7) main_fmradio_pane_t

0x1066,	// (0x0005a623) wait_bar_pane_cp03

0x106e,	// (0x0005a62b) cell_fmradio_pane_ParamLimits

0x106e,	// (0x0005a62b) cell_fmradio_pane

0x0ec7,	// (0x0005a484) cell_fmradio_pane_g1_ParamLimits

0x0ec7,	// (0x0005a484) cell_fmradio_pane_g1

0x741e,	// (0x000609db) grid_highlight_pane_cp011

0x1081,	// (0x0005a63e) poc_content_pane_ParamLimits

0x1081,	// (0x0005a63e) poc_content_pane

0x1094,	// (0x0005a651) scroll_pane_cp019

0xa0aa,	// (0x00063667) popup_call_poc_act_window_ParamLimits

0xa0aa,	// (0x00063667) popup_call_poc_act_window

0xa0b7,	// (0x00063674) popup_call_poc_inact_window_ParamLimits

0xa0b7,	// (0x00063674) popup_call_poc_inact_window

0xf5c7,	// (0x00068b84) bg_popup_call_poc_act_pane_g

0x1ff2,	// (0x0005b5af) bg_popup_call_poc_inact_pane_g1

0x1ffa,	// (0x0005b5b7) bg_popup_call_poc_inact_pane_g2

0x109c,	// (0x0005a659) popup_call_poc_act_window_g2

0x2002,	// (0x0005b5bf) bg_popup_call_poc_inact_pane_g3

0x1f82,	// (0x0005b53f) bg_popup_call_poc_inact_pane_g4

0x200a,	// (0x0005b5c7) bg_popup_call_poc_inact_pane_g5

0x10a4,	// (0x0005a661) popup_call_poc_act_window_t1_ParamLimits

0x10a4,	// (0x0005a661) popup_call_poc_act_window_t1

0x10cc,	// (0x0005a689) popup_call_poc_act_window_t2_ParamLimits

0x10cc,	// (0x0005a689) popup_call_poc_act_window_t2

0x10f4,	// (0x0005a6b1) popup_call_poc_act_window_t3_ParamLimits

0x10f4,	// (0x0005a6b1) popup_call_poc_act_window_t3

0x111c,	// (0x0005a6d9) popup_call_poc_act_window_t4_ParamLimits

0x111c,	// (0x0005a6d9) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00068af2) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00068af2) popup_call_poc_act_window_t

0x2012,	// (0x0005b5cf) bg_popup_call_poc_inact_pane_g6

0x201a,	// (0x0005b5d7) bg_popup_call_poc_inact_pane_g7

0x2022,	// (0x0005b5df) bg_popup_call_poc_inact_pane_g8

0x112e,	// (0x0005a6eb) popup_call_poc_inact_window_g2

0x202a,	// (0x0005b5e7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x00068b9b) bg_popup_call_poc_inact_pane_g

0x1136,	// (0x0005a6f3) popup_call_poc_inact_window_t1_ParamLimits

0x1136,	// (0x0005a6f3) popup_call_poc_inact_window_t1

0x114b,	// (0x0005a708) popup_call_poc_inact_window_t2_ParamLimits

0x114b,	// (0x0005a708) popup_call_poc_inact_window_t2

0x1160,	// (0x0005a71d) popup_call_poc_inact_window_t3_ParamLimits

0x1160,	// (0x0005a71d) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00068afb) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00068afb) popup_call_poc_inact_window_t

0x219e,	// (0x0005b75b) context_pane_ParamLimits

0xa5b2,	// (0x00063b6f) signal_pane_ParamLimits

0x0cd4,	// (0x0005a291) main_call2_pane

0x218c,	// (0x0005b749) popup_phob_thumbnail2_window_ParamLimits

0x218c,	// (0x0005b749) popup_phob_thumbnail2_window

0x9dc6,	// (0x00063383) aid_hotspot_pointer_arrow_pane

0x9dce,	// (0x0006338b) aid_hotspot_pointer_hand_pane

0xa366,	// (0x00063923) phob_pre_status_pane_g5

0x8224,	// (0x000617e1) cams_zoom_pane_ParamLimits

0x8230,	// (0x000617ed) image_vga_pane_ParamLimits

0x823d,	// (0x000617fa) main_camera_pane_g1_ParamLimits

0x8249,	// (0x00061806) main_camera_pane_g2_ParamLimits

0x8255,	// (0x00061812) main_camera_pane_g3_ParamLimits

0x8261,	// (0x0006181e) main_camera_pane_g4_ParamLimits

0x826d,	// (0x0006182a) main_camera_pane_g5_ParamLimits

0x8279,	// (0x00061836) main_camera_pane_g6_ParamLimits

0x8285,	// (0x00061842) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x000687fa) main_camera_pane_g_ParamLimits

0x829d,	// (0x0006185a) main_camera_pane_t1_ParamLimits

0x82af,	// (0x0006186c) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0006880b) main_camera_pane_t_ParamLimits

0x7679,	// (0x00060c36) bg_popup_preview_window_pane_cp01_ParamLimits

0x7679,	// (0x00060c36) bg_popup_preview_window_pane_cp01

0x1175,	// (0x0005a732) popup_phob_thumbnail2_window_g1_ParamLimits

0x1175,	// (0x0005a732) popup_phob_thumbnail2_window_g1

0x741e,	// (0x000609db) call2_cli_visual_pane

0xa0d3,	// (0x00063690) popup_call2_audio_conf_window_ParamLimits

0xa0d3,	// (0x00063690) popup_call2_audio_conf_window

0xa0e6,	// (0x000636a3) popup_call2_audio_first_window_ParamLimits

0xa0e6,	// (0x000636a3) popup_call2_audio_first_window

0xa162,	// (0x0006371f) popup_call2_audio_in_window_ParamLimits

0xa162,	// (0x0006371f) popup_call2_audio_in_window

0xa192,	// (0x0006374f) popup_call2_audio_out_window_ParamLimits

0xa192,	// (0x0006374f) popup_call2_audio_out_window

0xa1de,	// (0x0006379b) popup_call2_audio_second_window_ParamLimits

0xa1de,	// (0x0006379b) popup_call2_audio_second_window

0xa22a,	// (0x000637e7) popup_call2_audio_wait_window_ParamLimits

0xa22a,	// (0x000637e7) popup_call2_audio_wait_window

0x741e,	// (0x000609db) bg_popup_call2_act_pane_cp03

0x765b,	// (0x00060c18) list_conf_pane_cp

0x1181,	// (0x0005a73e) popup_call2_audio_conf_window_t1

0xec04,	// (0x000681c1) list_single_graphic_popup_conf2_pane_ParamLimits

0xec04,	// (0x000681c1) list_single_graphic_popup_conf2_pane

0xec17,	// (0x000681d4) list_highlight_pane_cp04

0x118f,	// (0x0005a74c) list_single_graphic_popup_conf2_pane_g1

0xec28,	// (0x000681e5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00068b02) list_single_graphic_popup_conf2_pane_g

0x1197,	// (0x0005a754) list_single_graphic_popup_conf2_pane_t1

0x11a5,	// (0x0005a762) bg_popup_call2_act_pane_cp01_ParamLimits

0x11a5,	// (0x0005a762) bg_popup_call2_act_pane_cp01

0x122f,	// (0x0005a7ec) call_type_pane_cp05_ParamLimits

0x122f,	// (0x0005a7ec) call_type_pane_cp05

0x1283,	// (0x0005a840) popup_call2_audio_second_window_g1_ParamLimits

0x1283,	// (0x0005a840) popup_call2_audio_second_window_g1

0x12d7,	// (0x0005a894) popup_call2_audio_second_window_g2_ParamLimits

0x12d7,	// (0x0005a894) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00068b07) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00068b07) popup_call2_audio_second_window_g

0x133c,	// (0x0005a8f9) popup_call2_audio_second_window_t1_ParamLimits

0x133c,	// (0x0005a8f9) popup_call2_audio_second_window_t1

0x13f7,	// (0x0005a9b4) popup_call2_audio_second_window_t2_ParamLimits

0x13f7,	// (0x0005a9b4) popup_call2_audio_second_window_t2

0x144a,	// (0x0005aa07) popup_call2_audio_second_window_t3_ParamLimits

0x144a,	// (0x0005aa07) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00068b0e) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00068b0e) popup_call2_audio_second_window_t

0x741e,	// (0x000609db) bg_popup_call2_in_pane_cp02

0x7428,	// (0x000609e5) call_type_pane_cp04

0x7430,	// (0x000609ed) popup_call2_audio_wait_window_g1

0x7438,	// (0x000609f5) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000686e7) popup_call2_audio_wait_window_g

0x7440,	// (0x000609fd) popup_call2_audio_wait_window_t3

0x153d,	// (0x0005aafa) bg_popup_call2_act_pane_ParamLimits

0x153d,	// (0x0005aafa) bg_popup_call2_act_pane

0x15fd,	// (0x0005abba) call_type_pane_cp03_ParamLimits

0x15fd,	// (0x0005abba) call_type_pane_cp03

0x1661,	// (0x0005ac1e) popup_call2_audio_first_window_g1_ParamLimits

0x1661,	// (0x0005ac1e) popup_call2_audio_first_window_g1

0x16d1,	// (0x0005ac8e) popup_call2_audio_first_window_g2_ParamLimits

0x16d1,	// (0x0005ac8e) popup_call2_audio_first_window_g2

0x0da5,	// (0x0005a362) popup_call2_audio_first_window_g3_ParamLimits

0x0da5,	// (0x0005a362) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00068b17) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00068b17) popup_call2_audio_first_window_g

0x17af,	// (0x0005ad6c) popup_call2_audio_first_window_t1_ParamLimits

0x17af,	// (0x0005ad6c) popup_call2_audio_first_window_t1

0x18b2,	// (0x0005ae6f) popup_call2_audio_first_window_t4_ParamLimits

0x18b2,	// (0x0005ae6f) popup_call2_audio_first_window_t4

0x1995,	// (0x0005af52) popup_call2_audio_first_window_t5_ParamLimits

0x1995,	// (0x0005af52) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00068b22) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00068b22) popup_call2_audio_first_window_t

0x7671,	// (0x00060c2e) bg_popup_call2_act_pane_g1

0x2042,	// (0x0005b5ff) popup_cale_lunar_info_window_t1

0x2050,	// (0x0005b60d) popup_cale_lunar_info_window_t2

0x205e,	// (0x0005b61b) popup_cale_lunar_info_window_t3

0x741e,	// (0x000609db) bg_popup_call2_bubble_pane

0x1a96,	// (0x0005b053) bg_popup_call2_in_pane_cp01_ParamLimits

0x1a96,	// (0x0005b053) bg_popup_call2_in_pane_cp01

0x70d6,	// (0x00060693) call_type_pane_cp02

0x1ade,	// (0x0005b09b) popup_call2_audio_out_window_g1_ParamLimits

0x1ade,	// (0x0005b09b) popup_call2_audio_out_window_g1

0x1b0a,	// (0x0005b0c7) popup_call2_audio_out_window_g2_ParamLimits

0x1b0a,	// (0x0005b0c7) popup_call2_audio_out_window_g2

0x1b32,	// (0x0005b0ef) popup_call2_audio_out_window_g3_ParamLimits

0x1b32,	// (0x0005b0ef) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00068b2b) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00068b2b) popup_call2_audio_out_window_g

0x1b6d,	// (0x0005b12a) popup_call2_audio_out_window_t1_ParamLimits

0x1b6d,	// (0x0005b12a) popup_call2_audio_out_window_t1

0x1bcc,	// (0x0005b189) popup_call2_audio_out_window_t2_ParamLimits

0x1bcc,	// (0x0005b189) popup_call2_audio_out_window_t2

0x1c20,	// (0x0005b1dd) popup_call2_audio_out_window_t3_ParamLimits

0x1c20,	// (0x0005b1dd) popup_call2_audio_out_window_t3

0x1c36,	// (0x0005b1f3) popup_call2_audio_out_window_t4_ParamLimits

0x1c36,	// (0x0005b1f3) popup_call2_audio_out_window_t4

0x1c4c,	// (0x0005b209) popup_call2_audio_out_window_t5_ParamLimits

0x1c4c,	// (0x0005b209) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00068b34) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00068b34) popup_call2_audio_out_window_t

0x1cb0,	// (0x0005b26d) bg_popup_call2_in_pane_ParamLimits

0x1cb0,	// (0x0005b26d) bg_popup_call2_in_pane

0x1d0c,	// (0x0005b2c9) popup_call2_audio_in_window_g1_ParamLimits

0x1d0c,	// (0x0005b2c9) popup_call2_audio_in_window_g1

0x1d44,	// (0x0005b301) popup_call2_audio_in_window_g2_ParamLimits

0x1d44,	// (0x0005b301) popup_call2_audio_in_window_g2

0x1d7c,	// (0x0005b339) popup_call2_audio_in_window_g3_ParamLimits

0x1d7c,	// (0x0005b339) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00068b41) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00068b41) popup_call2_audio_in_window_g

0x1dd4,	// (0x0005b391) popup_call2_audio_in_window_t1_ParamLimits

0x1dd4,	// (0x0005b391) popup_call2_audio_in_window_t1

0x1e54,	// (0x0005b411) popup_call2_audio_in_window_t2_ParamLimits

0x1e54,	// (0x0005b411) popup_call2_audio_in_window_t2

0x1ed4,	// (0x0005b491) popup_call2_audio_in_window_t3_ParamLimits

0x1ed4,	// (0x0005b491) popup_call2_audio_in_window_t3

0x1eee,	// (0x0005b4ab) popup_call2_audio_in_window_t4_ParamLimits

0x1eee,	// (0x0005b4ab) popup_call2_audio_in_window_t4

0x1f00,	// (0x0005b4bd) popup_call2_audio_in_window_t5_ParamLimits

0x1f00,	// (0x0005b4bd) popup_call2_audio_in_window_t5

0x1f15,	// (0x0005b4d2) popup_call2_audio_in_window_t6_ParamLimits

0x1f15,	// (0x0005b4d2) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00068b4a) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00068b4a) popup_call2_audio_in_window_t

0x7671,	// (0x00060c2e) bg_popup_call2_in_pane_g1

0x206c,	// (0x0005b629) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x00068bc5) popup_cale_lunar_info_window_t

0x7679,	// (0x00060c36) bg_popup_call2_rect_pane_ParamLimits

0x7679,	// (0x00060c36) bg_popup_call2_rect_pane

0x741e,	// (0x000609db) call2_cli_visual_graphic_pane

0x741e,	// (0x000609db) call2_cli_visual_text_pane

0xa637,	// (0x00063bf4) smil_status_volume_pane_g3

0x0002,

0x7aef,	// (0x000610ac) call2_cli_visual_graphic_pane_g1

0x7aef,	// (0x000610ac) call2_cli_visual_graphic_pane_g2

0x7aef,	// (0x000610ac) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00068b57) call2_cli_visual_graphic_pane_g

0x1f2a,	// (0x0005b4e7) bg_popup_call2_rect_pane_g1

0x7c2a,	// (0x000611e7) bg_popup_call2_rect_pane_g2

0x1f32,	// (0x0005b4ef) bg_popup_call2_rect_pane_g3

0x1f3a,	// (0x0005b4f7) bg_popup_call2_rect_pane_g4

0x1f42,	// (0x0005b4ff) bg_popup_call2_rect_pane_g5

0x1f4a,	// (0x0005b507) bg_popup_call2_rect_pane_g6

0x1f52,	// (0x0005b50f) bg_popup_call2_rect_pane_g7

0x1f5a,	// (0x0005b517) bg_popup_call2_rect_pane_g8

0x1f62,	// (0x0005b51f) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00068b5e) bg_popup_call2_rect_pane_g

0x1f6a,	// (0x0005b527) bg_popup_call2_bubble_pane_g1

0x1f72,	// (0x0005b52f) bg_popup_call2_bubble_pane_g2

0x1f7a,	// (0x0005b537) bg_popup_call2_bubble_pane_g3

0x1f82,	// (0x0005b53f) bg_popup_call2_bubble_pane_g4

0x1f8a,	// (0x0005b547) bg_popup_call2_bubble_pane_g5

0x1f92,	// (0x0005b54f) bg_popup_call2_bubble_pane_g6

0x1f9a,	// (0x0005b557) bg_popup_call2_bubble_pane_g7

0x1fa2,	// (0x0005b55f) bg_popup_call2_bubble_pane_g8

0x1faa,	// (0x0005b567) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00068b71) bg_popup_call2_bubble_pane_g

0x7cf2,	// (0x000612af) aid_cale_week_size_cell_pane

0x82c1,	// (0x0006187e) aid_cams_cif_uncrop_pane_ParamLimits

0x82c1,	// (0x0006187e) aid_cams_cif_uncrop_pane

0x8457,	// (0x00061a14) aid_cams_size_cell_ParamLimits

0x8457,	// (0x00061a14) aid_cams_size_cell

0x8463,	// (0x00061a20) grid_cams_pane_ParamLimits

0x846f,	// (0x00061a2c) linegrid_cams_pane_ParamLimits

0x854e,	// (0x00061b0b) call_video_pane_t1

0x8564,	// (0x00061b21) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0006885e) call_video_pane_t

0x8b42,	// (0x000620ff) aid_cale_month_size_cell_pane_ParamLimits

0x8b42,	// (0x000620ff) aid_cale_month_size_cell_pane

0xf651,	// (0x00068c0e) smil_status_volume_pane_g

0xa644,	// (0x00063c01) volume_smil_pane_ParamLimits

0x6d17,	// (0x000602d4) aid_popup2_width_pane

0x7b8b,	// (0x00061148) cell_qdial_pane_g4_ParamLimits

0x7b8b,	// (0x00061148) cell_qdial_pane_g4

0x98d5,	// (0x00062e92) aid_blid_cardinal_pane_ParamLimits

0x98e1,	// (0x00062e9e) aid_blid_destination_pane_ParamLimits

0x98e1,	// (0x00062e9e) aid_blid_destination_pane

0x7679,	// (0x00060c36) bg_popup_call_poc_act_pane_ParamLimits

0x7679,	// (0x00060c36) bg_popup_call_poc_act_pane

0x7679,	// (0x00060c36) bg_popup_call_poc_inact_pane_ParamLimits

0x7679,	// (0x00060c36) bg_popup_call_poc_inact_pane

0x1fb2,	// (0x0005b56f) bg_popup_call_poc_act_pane_g1

0x1fba,	// (0x0005b577) bg_popup_call_poc_act_pane_g2

0x1fc2,	// (0x0005b57f) bg_popup_call_poc_act_pane_g3

0x1f82,	// (0x0005b53f) bg_popup_call_poc_act_pane_g4

0x1f8a,	// (0x0005b547) bg_popup_call_poc_act_pane_g5

0x1fca,	// (0x0005b587) bg_popup_call_poc_act_pane_g6

0x1f9a,	// (0x0005b557) bg_popup_call_poc_act_pane_g7

0x1fd2,	// (0x0005b58f) bg_popup_call_poc_act_pane_g8

0x741e,	// (0x000609db) main_usb_pane

0x216b,	// (0x0005b728) popup_cale_lunar_info_window

0x87d1,	// (0x00061d8e) im_reading_pane_t1_ParamLimits

0x8809,	// (0x00061dc6) list_im_pane_ParamLimits

0x881a,	// (0x00061dd7) scroll_pane_cp07_ParamLimits

0x741e,	// (0x000609db) grid_highlight_pane_cp012

0x7679,	// (0x00060c36) mup_scale_pane_ParamLimits

0x0da5,	// (0x0005a362) main_usb_pane_g1_ParamLimits

0x0da5,	// (0x0005a362) main_usb_pane_g1

0xa28b,	// (0x00063848) main_usb_pane_g2_ParamLimits

0xa28b,	// (0x00063848) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x00068bae) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x00068bae) main_usb_pane_g

0xa297,	// (0x00063854) main_usb_pane_t1_ParamLimits

0xa297,	// (0x00063854) main_usb_pane_t1

0xa2a9,	// (0x00063866) main_usb_pane_t2_ParamLimits

0xa2a9,	// (0x00063866) main_usb_pane_t2

0xa2bb,	// (0x00063878) main_usb_pane_t3_ParamLimits

0xa2bb,	// (0x00063878) main_usb_pane_t3

0xa2cd,	// (0x0006388a) main_usb_pane_t4_ParamLimits

0xa2cd,	// (0x0006388a) main_usb_pane_t4

0xa2df,	// (0x0006389c) main_usb_pane_t5_ParamLimits

0xa2df,	// (0x0006389c) main_usb_pane_t5

0xa2f1,	// (0x000638ae) main_usb_pane_t6_ParamLimits

0xa2f1,	// (0x000638ae) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x00068bb3) main_usb_pane_t_ParamLimits

0x0b98,	// (0x0005a155) aid_text_placing

0x9881,	// (0x00062e3e) main_location2_pane_t1_ParamLimits

0x9897,	// (0x00062e54) main_location2_pane_t2_ParamLimits

0x98ad,	// (0x00062e6a) main_location2_pane_t3_ParamLimits

0x98c3,	// (0x00062e80) main_location2_pane_t4_ParamLimits

0x98c3,	// (0x00062e80) main_location2_pane_t4

0xf402,	// (0x000689bf) main_location2_pane_t_ParamLimits

0x7745,	// (0x00060d02) find_pinb_pane_g2_ParamLimits

0x7745,	// (0x00060d02) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0006870d) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0006870d) find_pinb_pane_g

0x7751,	// (0x00060d0e) find_pinb_pane_t1_ParamLimits

0x7763,	// (0x00060d20) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00068712) find_pinb_pane_t_ParamLimits

0x741e,	// (0x000609db) main_call3_pane

0x8e2f,	// (0x000623ec) cale_month_day_heading_pane_t1_ParamLimits

0x8e8d,	// (0x0006244a) cale_month_day_heading_pane_t2_ParamLimits

0x8ef2,	// (0x000624af) cale_month_day_heading_pane_t3_ParamLimits

0x8f57,	// (0x00062514) cale_month_day_heading_pane_t4_ParamLimits

0x8fbc,	// (0x00062579) cale_month_day_heading_pane_t5_ParamLimits

0x9021,	// (0x000625de) cale_month_day_heading_pane_t6_ParamLimits

0x9086,	// (0x00062643) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00068896) cale_month_day_heading_pane_t_ParamLimits

0x926c,	// (0x00062829) smil_status_volume_pane

0x9eec,	// (0x000634a9) postcard_address_pane_ParamLimits

0x9eec,	// (0x000634a9) postcard_address_pane

0x9ef8,	// (0x000634b5) postcard_message_pane_ParamLimits

0x9ef8,	// (0x000634b5) postcard_message_pane

0xa267,	// (0x00063824) call2_cli_visual_pane_t1_ParamLimits

0xa267,	// (0x00063824) call2_cli_visual_pane_t1

0xa795,	// (0x00063d52) postcard_message_pane_t1_ParamLimits

0xa795,	// (0x00063d52) postcard_message_pane_t1

0xa77e,	// (0x00063d3b) postcard_address_pane_t1_ParamLimits

0xa77e,	// (0x00063d3b) postcard_address_pane_t1

0xa771,	// (0x00063d2e) popup_call3_audio_in_window_ParamLimits

0xa771,	// (0x00063d2e) popup_call3_audio_in_window

0xa659,	// (0x00063c16) bg_popup_call3_in_pane_ParamLimits

0xa659,	// (0x00063c16) bg_popup_call3_in_pane

0xa6b7,	// (0x00063c74) popup_call3_audio_in_window_g1_ParamLimits

0xa6b7,	// (0x00063c74) popup_call3_audio_in_window_g1

0xa6cf,	// (0x00063c8c) popup_call3_audio_in_window_g2_ParamLimits

0xa6cf,	// (0x00063c8c) popup_call3_audio_in_window_g2

0xa6e7,	// (0x00063ca4) popup_call3_audio_in_window_g3_ParamLimits

0xa6e7,	// (0x00063ca4) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x00068c15) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x00068c15) popup_call3_audio_in_window_g

0xa70f,	// (0x00063ccc) popup_call3_audio_in_window_t1_ParamLimits

0xa70f,	// (0x00063ccc) popup_call3_audio_in_window_t1

0xa737,	// (0x00063cf4) popup_call3_audio_in_window_t2_ParamLimits

0xa737,	// (0x00063cf4) popup_call3_audio_in_window_t2

0xa75f,	// (0x00063d1c) popup_call3_audio_in_window_t3_ParamLimits

0xa75f,	// (0x00063d1c) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x00068c1e) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x00068c1e) popup_call3_audio_in_window_t

0x0cd4,	// (0x0005a291) bg_popup_call3_rect_pane

0x1f2a,	// (0x0005b4e7) bg_popup_call3_rect_pane_g1

0x7c2a,	// (0x000611e7) bg_popup_call3_rect_pane_g2

0x1f32,	// (0x0005b4ef) bg_popup_call3_rect_pane_g3

0x1f3a,	// (0x0005b4f7) bg_popup_call3_rect_pane_g4

0x1f42,	// (0x0005b4ff) bg_popup_call3_rect_pane_g5

0x1f4a,	// (0x0005b507) bg_popup_call3_rect_pane_g6

0x1f52,	// (0x0005b50f) bg_popup_call3_rect_pane_g7

0x9c03,	// (0x000631c0) mup_visualizer_osc_pane

0x0db3,	// (0x0005a370) mup_visualizer_spec_pane

0xa679,	// (0x00063c36) call3_video_qcif_pane_ParamLimits

0xa679,	// (0x00063c36) call3_video_qcif_pane

0xa689,	// (0x00063c46) call3_video_qcif_uncrop_pane_ParamLimits

0xa689,	// (0x00063c46) call3_video_qcif_uncrop_pane

0xa695,	// (0x00063c52) call3_video_subqcif_pane_ParamLimits

0xa695,	// (0x00063c52) call3_video_subqcif_pane

0xa6a7,	// (0x00063c64) call3_video_subqcif_uncrop_pane_ParamLimits

0xa6a7,	// (0x00063c64) call3_video_subqcif_uncrop_pane

0xa6ff,	// (0x00063cbc) popup_call3_audio_in_window_g4_ParamLimits

0xa6ff,	// (0x00063cbc) popup_call3_audio_in_window_g4

0xa626,	// (0x00063be3) mup_spec_half_pane

0xa62f,	// (0x00063bec) mup_spec_half_pane_cp

0x21fe,	// (0x0005b7bb) mup_osc_middle_pane

0x2207,	// (0x0005b7c4) mup_visualizer_osc_pane_g1

0xa607,	// (0x00063bc4) mup_spec_bar_pane_ParamLimits

0xa607,	// (0x00063bc4) mup_spec_bar_pane

0x21eb,	// (0x0005b7a8) mup_spec_bar_pane_g1

0x21f5,	// (0x0005b7b2) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00068c09) mup_spec_bar_pane_g

0x7cf2,	// (0x000612af) aid_cale_week_size_cell_pane_ParamLimits

0x7d05,	// (0x000612c2) bg_cale_heading_pane_ParamLimits

0x7d19,	// (0x000612d6) bg_cale_pane_cp01_ParamLimits

0x7d32,	// (0x000612ef) cale_week_corner_pane_ParamLimits

0x7d48,	// (0x00061305) cale_week_day_heading_pane_ParamLimits

0x7d5c,	// (0x00061319) cale_week_scroll_pane_g1_ParamLimits

0x7d6d,	// (0x0006132a) cale_week_scroll_pane_g2_ParamLimits

0x7d7e,	// (0x0006133b) cale_week_scroll_pane_g3_ParamLimits

0x7d8f,	// (0x0006134c) cale_week_scroll_pane_g4_ParamLimits

0x7da0,	// (0x0006135d) cale_week_scroll_pane_g5_ParamLimits

0x7db1,	// (0x0006136e) cale_week_scroll_pane_g6_ParamLimits

0x7dc2,	// (0x0006137f) cale_week_scroll_pane_g7_ParamLimits

0x7dd3,	// (0x00061390) cale_week_scroll_pane_g8_ParamLimits

0x7de4,	// (0x000613a1) cale_week_scroll_pane_g9_ParamLimits

0x7df5,	// (0x000613b2) cale_week_scroll_pane_g10_ParamLimits

0x7e06,	// (0x000613c3) cale_week_scroll_pane_g11_ParamLimits

0x7e17,	// (0x000613d4) cale_week_scroll_pane_g12_ParamLimits

0x7e28,	// (0x000613e5) cale_week_scroll_pane_g13_ParamLimits

0x7e39,	// (0x000613f6) cale_week_scroll_pane_g14_ParamLimits

0x7e4a,	// (0x00061407) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0006879e) cale_week_scroll_pane_g_ParamLimits

0x7e5b,	// (0x00061418) cale_week_time_pane_ParamLimits

0x7e6c,	// (0x00061429) grid_cale_week_pane_ParamLimits

0x7e7f,	// (0x0006143c) listscroll_cale_week_pane_t1

0x7e91,	// (0x0006144e) scroll_pane_cp08_ParamLimits

0x8ba6,	// (0x00062163) cale_month_corner_pane_ParamLimits

0x8dee,	// (0x000623ab) cale_month_pane_t1

0x8e00,	// (0x000623bd) cale_month_week_pane_ParamLimits

0x0da5,	// (0x0005a362) popup_call_status_window_g1_ParamLimits

0x96b8,	// (0x00062c75) popup_call_status_window_g2_ParamLimits

0x96c4,	// (0x00062c81) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00068946) popup_call_status_window_g_ParamLimits

0xeb97,	// (0x00068154) aid_call2_pane

0x5f7e,	// (0x0005f53b) msg_header_pane_g1

0x9eec,	// (0x000634a9) postcard_address2_pane_ParamLimits

0x9eec,	// (0x000634a9) postcard_address2_pane

0x9ef8,	// (0x000634b5) postcard_message2_pane_ParamLimits

0x9ef8,	// (0x000634b5) postcard_message2_pane

0xa5be,	// (0x00063b7b) message2_row_pane_ParamLimits

0xa5be,	// (0x00063b7b) message2_row_pane

0xa5d6,	// (0x00063b93) address2_row_pane_ParamLimits

0xa5d6,	// (0x00063b93) address2_row_pane

0x21b9,	// (0x0005b776) postcard_message2_row_pane_g1

0x21c1,	// (0x0005b77e) postcard_message2_row_pane_t1

0x21b9,	// (0x0005b776) address2_row_pane_g1

0x21c1,	// (0x0005b77e) address2_row_pane_t1

0x1010,	// (0x0005a5cd) aid_size_cell_vorec

0x741e,	// (0x000609db) main_rss_pane

0xa5e9,	// (0x00063ba6) rss_list_single_pane_ParamLimits

0xa5e9,	// (0x00063ba6) rss_list_single_pane

0x21cf,	// (0x0005b78c) rss_list_single_pane_t1

0x21dd,	// (0x0005b79a) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x00068c04) rss_list_single_pane_t

0x741e,	// (0x000609db) main_camera2_pane

0x741e,	// (0x000609db) main_video2_pane

0xa7e5,	// (0x00063da2) cams_zoom_pane_cp2_ParamLimits

0xa7e5,	// (0x00063da2) cams_zoom_pane_cp2

0xa7f1,	// (0x00063dae) image2_vga_pane_ParamLimits

0xa7f1,	// (0x00063dae) image2_vga_pane

0xa800,	// (0x00063dbd) main_camera2_pane_g1_ParamLimits

0xa800,	// (0x00063dbd) main_camera2_pane_g1

0xa80c,	// (0x00063dc9) main_camera2_pane_g2_ParamLimits

0xa80c,	// (0x00063dc9) main_camera2_pane_g2

0xa818,	// (0x00063dd5) main_camera2_pane_g3_ParamLimits

0xa818,	// (0x00063dd5) main_camera2_pane_g3

0xa824,	// (0x00063de1) main_camera2_pane_g4_ParamLimits

0xa824,	// (0x00063de1) main_camera2_pane_g4

0xa830,	// (0x00063ded) main_camera2_pane_g5_ParamLimits

0xa830,	// (0x00063ded) main_camera2_pane_g5

0xa83c,	// (0x00063df9) main_camera2_pane_g6_ParamLimits

0xa83c,	// (0x00063df9) main_camera2_pane_g6

0xa848,	// (0x00063e05) main_camera2_pane_g7_ParamLimits

0xa848,	// (0x00063e05) main_camera2_pane_g7

0xa854,	// (0x00063e11) main_camera2_pane_g8_ParamLimits

0xa854,	// (0x00063e11) main_camera2_pane_g8

0x0008,

0xf668,	// (0x00068c25) main_camera2_pane_g_ParamLimits

0xf668,	// (0x00068c25) main_camera2_pane_g

0xa86c,	// (0x00063e29) main_camera2_pane_t1_ParamLimits

0xa86c,	// (0x00063e29) main_camera2_pane_t1

0xa87e,	// (0x00063e3b) main_camera2_pane_t2_ParamLimits

0xa87e,	// (0x00063e3b) main_camera2_pane_t2

0xa890,	// (0x00063e4d) main_camera2_pane_t3_ParamLimits

0xa890,	// (0x00063e4d) main_camera2_pane_t3

0xa8a2,	// (0x00063e5f) main_camera2_pane_t4_ParamLimits

0xa8a2,	// (0x00063e5f) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x00068c38) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x00068c38) main_camera2_pane_t

0xa8fd,	// (0x00063eba) cams_zoom_pane_cp4_ParamLimits

0xa8fd,	// (0x00063eba) cams_zoom_pane_cp4

0xa90d,	// (0x00063eca) image2_cif_pane_ParamLimits

0xa90d,	// (0x00063eca) image2_cif_pane

0xa91e,	// (0x00063edb) image2_subqcif_pane_ParamLimits

0xa91e,	// (0x00063edb) image2_subqcif_pane

0xa92b,	// (0x00063ee8) main_video2_pane_g1_ParamLimits

0xa92b,	// (0x00063ee8) main_video2_pane_g1

0xa93d,	// (0x00063efa) main_video2_pane_g2_ParamLimits

0xa93d,	// (0x00063efa) main_video2_pane_g2

0xa94d,	// (0x00063f0a) main_video2_pane_g3_ParamLimits

0xa94d,	// (0x00063f0a) main_video2_pane_g3

0xa95d,	// (0x00063f1a) main_video2_pane_g4_ParamLimits

0xa95d,	// (0x00063f1a) main_video2_pane_g4

0xa96d,	// (0x00063f2a) main_video2_pane_g5_ParamLimits

0xa96d,	// (0x00063f2a) main_video2_pane_g5

0xa97d,	// (0x00063f3a) main_video2_pane_g6_ParamLimits

0xa97d,	// (0x00063f3a) main_video2_pane_g6

0x0005,

0xf68a,	// (0x00068c47) main_video2_pane_g_ParamLimits

0xf68a,	// (0x00068c47) main_video2_pane_g

0xa98f,	// (0x00063f4c) main_video2_pane_t1_ParamLimits

0xa98f,	// (0x00063f4c) main_video2_pane_t1

0xa9a9,	// (0x00063f66) main_video2_pane_t2_ParamLimits

0xa9a9,	// (0x00063f66) main_video2_pane_t2

0xa9cf,	// (0x00063f8c) main_video2_pane_t3_ParamLimits

0xa9cf,	// (0x00063f8c) main_video2_pane_t3

0x0002,

0xf697,	// (0x00068c54) main_video2_pane_t_ParamLimits

0xf697,	// (0x00068c54) main_video2_pane_t

0xa3a0,	// (0x0006395d) call_muted_g2

0x0001,

0xf639,	// (0x00068bf6) call_muted_g

0x741e,	// (0x000609db) main_mup2_pane

0x226c,	// (0x0005b829) main_mup2_pane_g1_ParamLimits

0x226c,	// (0x0005b829) main_mup2_pane_g1

0xa9f5,	// (0x00063fb2) main_mup2_pane_g2_ParamLimits

0xa9f5,	// (0x00063fb2) main_mup2_pane_g2

0xac65,	// (0x00064222) main_mup_pane_g13_cp1

0xac6d,	// (0x0006422a) mup_volume_pane_cp1

0xaa15,	// (0x00063fd2) main_mup2_pane_g4_ParamLimits

0xaa15,	// (0x00063fd2) main_mup2_pane_g4

0xaa26,	// (0x00063fe3) main_mup2_pane_g5_ParamLimits

0xaa26,	// (0x00063fe3) main_mup2_pane_g5

0xaa37,	// (0x00063ff4) main_mup2_pane_g6_ParamLimits

0xaa37,	// (0x00063ff4) main_mup2_pane_g6

0xaa48,	// (0x00064005) main_mup2_pane_g7_ParamLimits

0xaa48,	// (0x00064005) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x00068c5b) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x00068c5b) main_mup2_pane_g

0xaa64,	// (0x00064021) main_mup2_pane_t1_ParamLimits

0xaa64,	// (0x00064021) main_mup2_pane_t1

0xaa7b,	// (0x00064038) main_mup2_pane_t2_ParamLimits

0xaa7b,	// (0x00064038) main_mup2_pane_t2

0xaa92,	// (0x0006404f) main_mup2_pane_t3_ParamLimits

0xaa92,	// (0x0006404f) main_mup2_pane_t3

0xaaa9,	// (0x00064066) main_mup2_pane_t4_ParamLimits

0xaaa9,	// (0x00064066) main_mup2_pane_t4

0xaac3,	// (0x00064080) main_mup2_pane_t5_ParamLimits

0xaac3,	// (0x00064080) main_mup2_pane_t5

0xaadd,	// (0x0006409a) main_mup2_pane_t6_ParamLimits

0xaadd,	// (0x0006409a) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x00068c6a) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x00068c6a) main_mup2_pane_t

0xab15,	// (0x000640d2) mup2_visualizer_pane_ParamLimits

0xab15,	// (0x000640d2) mup2_visualizer_pane

0xab47,	// (0x00064104) mup_progress_pane_cp_ParamLimits

0xab47,	// (0x00064104) mup_progress_pane_cp

0xac50,	// (0x0006420d) mup_volume_pane_cp_ParamLimits

0xac50,	// (0x0006420d) mup_volume_pane_cp

0xab5e,	// (0x0006411b) mup2_visualizer_pane_g1_ParamLimits

0xab5e,	// (0x0006411b) mup2_visualizer_pane_g1

0x223e,	// (0x0005b7fb) mup2_visualizer_pane_g2_ParamLimits

0x223e,	// (0x0005b7fb) mup2_visualizer_pane_g2

0xab73,	// (0x00064130) mup2_visualizer_pane_g3_ParamLimits

0xab73,	// (0x00064130) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x00068c77) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x00068c77) mup2_visualizer_pane_g

0x1010,	// (0x0005a5cd) aid_size_cell_fmradio

0xa482,	// (0x00063a3f) aid_height_parent_landcape

0x88d4,	// (0x00061e91) wml_content_pane_cp

0x88dc,	// (0x00061e99) wml_tabs_pane

0x88e5,	// (0x00061ea2) popup_wml_miniature_window

0x88ed,	// (0x00061eaa) scroll_pane_cp021

0x8901,	// (0x00061ebe) wml_content_pane_comp8

0x741e,	// (0x000609db) bg_popup_sub_pane_cp05

0x225c,	// (0x0005b819) popup_wml_miniature_window_g1

0x2264,	// (0x0005b821) wml_miniature_view_pane

0xab7f,	// (0x0006413c) aid_size_wml_view

0xab87,	// (0x00064144) wml_miniature_view_pane_g1

0xab90,	// (0x0006414d) wml_miniature_view_pane_g2

0xab99,	// (0x00064156) wml_miniature_view_pane_g3

0xaba1,	// (0x0006415e) wml_miniature_view_pane_g4

0xaba9,	// (0x00064166) wml_miniature_view_pane_g5

0xabb1,	// (0x0006416e) wml_miniature_view_pane_g6

0xabb9,	// (0x00064176) wml_miniature_view_pane_g7

0xabc1,	// (0x0006417e) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x00068c7e) wml_miniature_view_pane_g

0x226c,	// (0x0005b829) background_graphic_ParamLimits

0x226c,	// (0x0005b829) background_graphic

0x2278,	// (0x0005b835) wml_tabs_2_pane

0x2281,	// (0x0005b83e) wml_tabs_3_pane_ParamLimits

0x2281,	// (0x0005b83e) wml_tabs_3_pane

0x2293,	// (0x0005b850) wml_tabs_4_pane_ParamLimits

0x2293,	// (0x0005b850) wml_tabs_4_pane

0x22a9,	// (0x0005b866) wml_tabs_5_pane_ParamLimits

0x22a9,	// (0x0005b866) wml_tabs_5_pane

0x22c3,	// (0x0005b880) wml_tabs_pane_g2_ParamLimits

0x22c3,	// (0x0005b880) wml_tabs_pane_g2

0x22d7,	// (0x0005b894) wml_tabs_pane_g3_ParamLimits

0x22d7,	// (0x0005b894) wml_tabs_pane_g3

0xabc9,	// (0x00064186) wml_tabs_2_active_pane_ParamLimits

0xabc9,	// (0x00064186) wml_tabs_2_active_pane

0xabd9,	// (0x00064196) wml_tabs_2_passive_pane_ParamLimits

0xabd9,	// (0x00064196) wml_tabs_2_passive_pane

0xabe9,	// (0x000641a6) wml_tabs_3_active_pane_cp_ParamLimits

0xabe9,	// (0x000641a6) wml_tabs_3_active_pane_cp

0xabfa,	// (0x000641b7) wml_tabs_3_passive_pane_ParamLimits

0xabfa,	// (0x000641b7) wml_tabs_3_passive_pane

0xac0b,	// (0x000641c8) wml_tabs_3_passive_pane_cp_ParamLimits

0xac0b,	// (0x000641c8) wml_tabs_3_passive_pane_cp

0xac1c,	// (0x000641d9) tabs_4_active_pane

0xac24,	// (0x000641e1) tabs_4_passive_pane

0xac2c,	// (0x000641e9) tabs_4_passive_pane_cp

0xac34,	// (0x000641f1) tabs_4_passive_pane_cp2

0xa283,	// (0x00063840) aid_height_text

0x9bd0,	// (0x0006318d) mup_volume_cont_pane_ParamLimits

0x9bd0,	// (0x0006318d) mup_volume_cont_pane

0x7703,	// (0x00060cc0) aid_size_cell_pinb

0x770d,	// (0x00060cca) aid_size_list_pinb

0xab30,	// (0x000640ed) mup2_volume_cont_pane_ParamLimits

0xab30,	// (0x000640ed) mup2_volume_cont_pane

0xac3c,	// (0x000641f9) mup2_volume_cont_pane_g1_ParamLimits

0xac3c,	// (0x000641f9) mup2_volume_cont_pane_g1

0x6d1f,	// (0x000602dc) aid_size_cell_touch_ParamLimits

0x6d1f,	// (0x000602dc) aid_size_cell_touch

0x6f67,	// (0x00060524) touch_pane_ParamLimits

0x6f67,	// (0x00060524) touch_pane

0x6d05,	// (0x000602c2) main_rss2_pane

0x22f4,	// (0x0005b8b1) listscroll_rss2_pane

0x22fd,	// (0x0005b8ba) rss2_navigation_pane

0x2305,	// (0x0005b8c2) list_rss2_pane

0xecce,	// (0x0006828b) scroll_pane_cp22

0x230d,	// (0x0005b8ca) rss2_navigation_pane_g1

0x2316,	// (0x0005b8d3) rss2_navigation_pane_g2

0x231e,	// (0x0005b8db) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x00068c8f) rss2_navigation_pane_g

0x2326,	// (0x0005b8e3) rss2_navigation_pane_t1

0xac75,	// (0x00064232) rss2_list_single_pane_ParamLimits

0xac75,	// (0x00064232) rss2_list_single_pane

0x2334,	// (0x0005b8f1) rss2_list_single_pane_t2

0x2342,	// (0x0005b8ff) rss2_list_single_pane_t3_ParamLimits

0x2342,	// (0x0005b8ff) rss2_list_single_pane_t3

0x235f,	// (0x0005b91c) rss2_list_single_pane_t4

0x9256,	// (0x00062813) smil_status_pane_g1

0xed0f,	// (0x000682cc) main_image2_pane_ParamLimits

0xed0f,	// (0x000682cc) main_image2_pane

0xa860,	// (0x00063e1d) main_camera2_pane_g9_ParamLimits

0xa860,	// (0x00063e1d) main_camera2_pane_g9

0xa8b4,	// (0x00063e71) main_camera2_pane_t5_ParamLimits

0xa8b4,	// (0x00063e71) main_camera2_pane_t5

0xa8c6,	// (0x00063e83) main_camera2_pane_t6_ParamLimits

0xa8c6,	// (0x00063e83) main_camera2_pane_t6

0xac8c,	// (0x00064249) main_image2_pane_g1_ParamLimits

0xac8c,	// (0x00064249) main_image2_pane_g1

0xa098,	// (0x00063655) smil2_video_pane_ParamLimits

0xa098,	// (0x00063655) smil2_video_pane

0x6d47,	// (0x00060304) aid_zoom_text_primary_cp

0x6f12,	// (0x000604cf) popup_preview_fixed_window

0x87c9,	// (0x00061d86) im_reading_pane_g1

0xa7bc,	// (0x00063d79) cams2_bc_adjust_pane_cp_ParamLimits

0xa7bc,	// (0x00063d79) cams2_bc_adjust_pane_cp

0xa8f1,	// (0x00063eae) cams2_bc_adjust_pane_ParamLimits

0xa8f1,	// (0x00063eae) cams2_bc_adjust_pane

0xac98,	// (0x00064255) cams2_bc_adjust_pane_g1

0xaca0,	// (0x0006425d) cams2_slider_pane

0xaca9,	// (0x00064266) cams2_slider_pane_g1

0xacb2,	// (0x0006426f) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x00068c96) cams2_slider_pane_g

0x7843,	// (0x00060e00) calc_display_pane_ParamLimits

0x785b,	// (0x00060e18) calc_paper_pane_ParamLimits

0x7877,	// (0x00060e34) grid_calc_pane_ParamLimits

0x9736,	// (0x00062cf3) popup_clock_digital_window_t1_ParamLimits

0x0fad,	// (0x0005a56a) main_image_pane_t1

0x7829,	// (0x00060de6) aid_size_cell_calc_ParamLimits

0x7829,	// (0x00060de6) aid_size_cell_calc

0xa4a7,	// (0x00063a64) popup_blid_sat_info2_window_ParamLimits

0xa4a7,	// (0x00063a64) popup_blid_sat_info2_window

0x237d,	// (0x0005b93a) aid_size_cell_blid

0x2385,	// (0x0005b942) bg_popup_window_pane_cp07

0x23a8,	// (0x0005b965) grid_popup_blid_pane

0x23b0,	// (0x0005b96d) heading_pane_cp05_ParamLimits

0x23b0,	// (0x0005b96d) heading_pane_cp05

0x2478,	// (0x0005ba35) cell_popup_blid_pane_ParamLimits

0x2478,	// (0x0005ba35) cell_popup_blid_pane

0x2498,	// (0x0005ba55) cell_popup_blid_pane_g1

0x24a0,	// (0x0005ba5d) cell_popup_blid_pane_t1

0xaafa,	// (0x000640b7) mup2_indicator_pane_ParamLimits

0xaafa,	// (0x000640b7) mup2_indicator_pane

0x0cd4,	// (0x0005a291) mup2_visualizer_osc_pane

0x224a,	// (0x0005b807) mup2_visualizer_spec_pane_ParamLimits

0x224a,	// (0x0005b807) mup2_visualizer_spec_pane

0xaccc,	// (0x00064289) mup2_spec_half_pane

0xacd5,	// (0x00064292) mup2_spec_half_pane_cp

0xacdd,	// (0x0006429a) mup2_spec_bar_pane_ParamLimits

0xacdd,	// (0x0006429a) mup2_spec_bar_pane

0x21eb,	// (0x0005b7a8) mup2_spec_bar_pane_g1

0x21f5,	// (0x0005b7b2) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00068c09) mup2_spec_bar_pane_g

0xacfc,	// (0x000642b9) mup2_osc_middle_pane

0x2207,	// (0x0005b7c4) mup2_visualizer_osc_pane_g1

0x6fd4,	// (0x00060591) popup_number_entry_window_t1_ParamLimits

0x6fe7,	// (0x000605a4) popup_number_entry_window_t2_ParamLimits

0x6ff9,	// (0x000605b6) popup_number_entry_window_t3_ParamLimits

0x700b,	// (0x000605c8) popup_number_entry_window_t5_ParamLimits

0x700b,	// (0x000605c8) popup_number_entry_window_t5

0xf0fb,	// (0x000686b8) popup_number_entry_window_t_ParamLimits

0x7040,	// (0x000605fd) text_title_cp2_ParamLimits

0x9dd6,	// (0x00063393) aid_hotspot_pointer_text2_pane

0x9e68,	// (0x00063425) main_viewer_pane_g9_ParamLimits

0x9e68,	// (0x00063425) main_viewer_pane_g9

0x8dee,	// (0x000623ab) cale_month_pane_t1_ParamLimits

0x92ef,	// (0x000628ac) bg_cale_pane_ParamLimits

0x9307,	// (0x000628c4) list_cale_pane_ParamLimits

0x7e7f,	// (0x0006143c) listscroll_cale_day_pane_t1

0x9318,	// (0x000628d5) scroll_pane_cp09_ParamLimits

0x9c0b,	// (0x000631c8) main_mup_eq_pane_t1_ParamLimits

0x9c0b,	// (0x000631c8) main_mup_eq_pane_t1

0x9c21,	// (0x000631de) main_mup_eq_pane_t2_ParamLimits

0x9c21,	// (0x000631de) main_mup_eq_pane_t2

0x9c37,	// (0x000631f4) main_mup_eq_pane_t3_ParamLimits

0x9c37,	// (0x000631f4) main_mup_eq_pane_t3

0x9c4d,	// (0x0006320a) main_mup_eq_pane_t4_ParamLimits

0x9c4d,	// (0x0006320a) main_mup_eq_pane_t4

0x9c63,	// (0x00063220) main_mup_eq_pane_t5_ParamLimits

0x9c63,	// (0x00063220) main_mup_eq_pane_t5

0x9c79,	// (0x00063236) main_mup_eq_pane_t6_ParamLimits

0x9c79,	// (0x00063236) main_mup_eq_pane_t6

0x9c8b,	// (0x00063248) main_mup_eq_pane_t7_ParamLimits

0x9c8b,	// (0x00063248) main_mup_eq_pane_t7

0x9c9d,	// (0x0006325a) main_mup_eq_pane_t8_ParamLimits

0x9c9d,	// (0x0006325a) main_mup_eq_pane_t8

0x9caf,	// (0x0006326c) main_mup_eq_pane_t9_ParamLimits

0x9caf,	// (0x0006326c) main_mup_eq_pane_t9

0x9cc5,	// (0x00063282) main_mup_eq_pane_t10_ParamLimits

0x9cc5,	// (0x00063282) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00068a45) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00068a45) main_mup_eq_pane_t

0x9d58,	// (0x00063315) mup_equalizer_pane_cp5_ParamLimits

0x9d6a,	// (0x00063327) mup_equalizer_pane_cp6_ParamLimits

0x9d7c,	// (0x00063339) mup_equalizer_pane_cp7_ParamLimits

0x6d05,	// (0x000602c2) main_gallery_pane

0x2210,	// (0x0005b7cd) smil2_volume_pane

0x222b,	// (0x0005b7e8) smil_status_volume_pane_g1_ParamLimits

0x2218,	// (0x0005b7d5) smil_status_volume_pane_g2_ParamLimits

0xa637,	// (0x00063bf4) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x00068c0e) smil_status_volume_pane_g_ParamLimits

0x2385,	// (0x0005b942) bg_popup_window_pane_cp07_ParamLimits

0x2393,	// (0x0005b950) blid_firmament_pane

0xad05,	// (0x000642c2) aid_size_cell_gallery_ParamLimits

0xad05,	// (0x000642c2) aid_size_cell_gallery

0xad13,	// (0x000642d0) grid_gallery_pane_ParamLimits

0xad13,	// (0x000642d0) grid_gallery_pane

0xad1f,	// (0x000642dc) cell_gallery_pane_ParamLimits

0xad1f,	// (0x000642dc) cell_gallery_pane

0x24ae,	// (0x0005ba6b) bg_cell_gallery_focus_pane_ParamLimits

0x24ae,	// (0x0005ba6b) bg_cell_gallery_focus_pane

0x24c0,	// (0x0005ba7d) cell_gallery_pane_g1_ParamLimits

0x24c0,	// (0x0005ba7d) cell_gallery_pane_g1

0xad5e,	// (0x0006431b) cell_gallery_pane_g2_ParamLimits

0xad5e,	// (0x0006431b) cell_gallery_pane_g2

0xad6b,	// (0x00064328) cell_gallery_pane_g3_ParamLimits

0xad6b,	// (0x00064328) cell_gallery_pane_g3

0x24cc,	// (0x0005ba89) cell_gallery_pane_g4_ParamLimits

0x24cc,	// (0x0005ba89) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x00068cbc) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x00068cbc) cell_gallery_pane_g

0x24d8,	// (0x0005ba95) bg_cell_gallery_focus_pane_g1

0x24e0,	// (0x0005ba9d) bg_cell_gallery_focus_pane_g2

0x24e8,	// (0x0005baa5) bg_cell_gallery_focus_pane_g3

0x24f0,	// (0x0005baad) bg_cell_gallery_focus_pane_g4

0x24f8,	// (0x0005bab5) bg_cell_gallery_focus_pane_g5

0x2500,	// (0x0005babd) bg_cell_gallery_focus_pane_g6

0x2508,	// (0x0005bac5) bg_cell_gallery_focus_pane_g7

0x2510,	// (0x0005bacd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x00068cc5) bg_cell_gallery_focus_pane_g

0x2518,	// (0x0005bad5) aid_firma_cardinal

0x252c,	// (0x0005bae9) blid_firmament_pane_t1

0x2543,	// (0x0005bb00) blid_firmament_pane_t2

0x255a,	// (0x0005bb17) blid_firmament_pane_t3

0x2571,	// (0x0005bb2e) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x00068cd6) blid_firmament_pane_t

0x2588,	// (0x0005bb45) blid_sat_info_pane

0x2598,	// (0x0005bb55) blid_sat_info_pane_g1

0x2598,	// (0x0005bb55) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x00068cdf) blid_sat_info_pane_g

0x25a2,	// (0x0005bb5f) blid_sat_info_pane_t1

0x25b0,	// (0x0005bb6d) smil2_volume_content_pane

0x25b9,	// (0x0005bb76) smil2_volume_pane_g1

0x25c1,	// (0x0005bb7e) smil2_volume_content_pane_g1

0x25ca,	// (0x0005bb87) smil2_volume_content_pane_g2

0x25d3,	// (0x0005bb90) smil2_volume_content_pane_g3

0x25dc,	// (0x0005bb99) smil2_volume_content_pane_g4

0x25e5,	// (0x0005bba2) smil2_volume_content_pane_g5

0x25ee,	// (0x0005bbab) smil2_volume_content_pane_g6

0x25f7,	// (0x0005bbb4) smil2_volume_content_pane_g7

0x2600,	// (0x0005bbbd) smil2_volume_content_pane_g8

0x2609,	// (0x0005bbc6) smil2_volume_content_pane_g9

0x2612,	// (0x0005bbcf) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x00068ce4) smil2_volume_content_pane_g

0x7ee5,	// (0x000614a2) cale_week_day_heading_pane_t1_ParamLimits

0x7efe,	// (0x000614bb) cale_week_day_heading_pane_t2_ParamLimits

0x7f17,	// (0x000614d4) cale_week_day_heading_pane_t3_ParamLimits

0x7f30,	// (0x000614ed) cale_week_day_heading_pane_t4_ParamLimits

0x7f49,	// (0x00061506) cale_week_day_heading_pane_t5_ParamLimits

0x7f62,	// (0x0006151f) cale_week_day_heading_pane_t6_ParamLimits

0x7f7b,	// (0x00061538) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x000687bd) cale_week_day_heading_pane_t_ParamLimits

0x7f94,	// (0x00061551) bg_cale_side_pane_ParamLimits

0x7fa2,	// (0x0006155f) cale_week_time_pane_t1_ParamLimits

0x7fce,	// (0x0006158b) cale_week_time_pane_t2_ParamLimits

0x7ffa,	// (0x000615b7) cale_week_time_pane_t3_ParamLimits

0x8026,	// (0x000615e3) cale_week_time_pane_t4_ParamLimits

0x8052,	// (0x0006160f) cale_week_time_pane_t5_ParamLimits

0x807e,	// (0x0006163b) cale_week_time_pane_t6_ParamLimits

0x80aa,	// (0x00061667) cale_week_time_pane_t7_ParamLimits

0x80d6,	// (0x00061693) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000687cc) cale_week_time_pane_t_ParamLimits

0x8102,	// (0x000616bf) cell_cale_week_pane_g2_ParamLimits

0x7f94,	// (0x00061551) bg_cale_side_pane_cp01_ParamLimits

0x90eb,	// (0x000626a8) cale_month_week_pane_t1_ParamLimits

0x9102,	// (0x000626bf) cale_month_week_pane_t2_ParamLimits

0x9119,	// (0x000626d6) cale_month_week_pane_t3_ParamLimits

0x9130,	// (0x000626ed) cale_month_week_pane_t4_ParamLimits

0x9147,	// (0x00062704) cale_month_week_pane_t5_ParamLimits

0x915e,	// (0x0006271b) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000688a5) cale_month_week_pane_t_ParamLimits

0x921b,	// (0x000627d8) cell_cale_month_pane_g1_ParamLimits

0x6d05,	// (0x000602c2) main_cale_event_viewer_pane

0x6d05,	// (0x000602c2) listscroll_cale_event_viewer_pane

0x261b,	// (0x0005bbd8) list_cale_ev_pane

0x2623,	// (0x0005bbe0) scroll_pane_cp023

0xad78,	// (0x00064335) field_cale_ev_pane_ParamLimits

0xad78,	// (0x00064335) field_cale_ev_pane

0x262f,	// (0x0005bbec) field_cale_ev_content_pane_ParamLimits

0x262f,	// (0x0005bbec) field_cale_ev_content_pane

0x263b,	// (0x0005bbf8) field_cale_ev_pane_g1_ParamLimits

0x263b,	// (0x0005bbf8) field_cale_ev_pane_g1

0x2647,	// (0x0005bc04) field_cale_ev_pane_g2_ParamLimits

0x2647,	// (0x0005bc04) field_cale_ev_pane_g2

0x265f,	// (0x0005bc1c) field_cale_ev_pane_g3_ParamLimits

0x265f,	// (0x0005bc1c) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x00068cf9) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x00068cf9) field_cale_ev_pane_g

0x2677,	// (0x0005bc34) field_cale_ev_pane_t1_ParamLimits

0x2677,	// (0x0005bc34) field_cale_ev_pane_t1

0xad92,	// (0x0006434f) field_cale_ev_content_pane_t1_ParamLimits

0xad92,	// (0x0006434f) field_cale_ev_content_pane_t1

0x0e5d,	// (0x0005a41a) bg_button_pane_cp01

0x7cdb,	// (0x00061298) listscroll_cale_week_pane_ParamLimits

0x7cea,	// (0x000612a7) popup_toolbar_window_cp01

0x7e7f,	// (0x0006143c) listscroll_cale_week_pane_t1_ParamLimits

0x79ba,	// (0x00060f77) listscroll_cale_day_pane_ParamLimits

0x7cea,	// (0x000612a7) popup_toolbar_window_cp02

0x7e7f,	// (0x0006143c) listscroll_cale_day_pane_t1_ParamLimits

0x7cdb,	// (0x00061298) main_cale_month_pane_ParamLimits

0xa547,	// (0x00063b04) popup_toolbar_window_cp03_ParamLimits

0xa547,	// (0x00063b04) popup_toolbar_window_cp03

0x9fc0,	// (0x0006357d) main_image_pane_g2_ParamLimits

0x9fc0,	// (0x0006357d) main_image_pane_g2

0x9fcc,	// (0x00063589) main_image_pane_g3_ParamLimits

0x9fcc,	// (0x00063589) main_image_pane_g3

0x0002,

0xf51a,	// (0x00068ad7) main_image_pane_g_ParamLimits

0xf51a,	// (0x00068ad7) main_image_pane_g

0x0fad,	// (0x0005a56a) main_image_pane_t1_ParamLimits

0x9fd8,	// (0x00063595) main_image_pane_t2_ParamLimits

0x9fd8,	// (0x00063595) main_image_pane_t2

0x9fea,	// (0x000635a7) main_image_pane_t3_ParamLimits

0x9fea,	// (0x000635a7) main_image_pane_t3

0x9ffc,	// (0x000635b9) main_image_pane_t4_ParamLimits

0x9ffc,	// (0x000635b9) main_image_pane_t4

0x0003,

0xf521,	// (0x00068ade) main_image_pane_t_ParamLimits

0xf521,	// (0x00068ade) main_image_pane_t

0xa00e,	// (0x000635cb) popup_image_details_window_cp01

0xa016,	// (0x000635d3) popup_toobar_trans_pane_cp01_ParamLimits

0xa016,	// (0x000635d3) popup_toobar_trans_pane_cp01

0xa4e6,	// (0x00063aa3) popup_image_details_window_ParamLimits

0xa4e6,	// (0x00063aa3) popup_image_details_window

0x2173,	// (0x0005b730) popup_image_focus_window

0xa7b0,	// (0x00063d6d) camera2_autofocus_pane_ParamLimits

0xa7b0,	// (0x00063d6d) camera2_autofocus_pane

0x6d05,	// (0x000602c2) bg_popup_sub_pane_cp06

0x268e,	// (0x0005bc4b) popup_image_focus_window_g1

0x2696,	// (0x0005bc53) popup_image_focus_window_g2

0x269e,	// (0x0005bc5b) popup_image_focus_window_g3

0x26a6,	// (0x0005bc63) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x00068d00) popup_image_focus_window_g

0x26ae,	// (0x0005bc6b) popup_image_focus_window_t1

0x26bc,	// (0x0005bc79) popup_image_focus_window_t2

0x26cb,	// (0x0005bc88) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x00068d09) popup_image_focus_window_t

0x26d9,	// (0x0005bc96) camera2_autofocus_pane_g1

0xed0f,	// (0x000682cc) bg_tb_trans_pane_cp01

0x26e7,	// (0x0005bca4) popup_image_details_window_g1

0x26fa,	// (0x0005bcb7) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x00068d1b) popup_image_details_window_g

0x2723,	// (0x0005bce0) popup_image_details_window_t1

0x2735,	// (0x0005bcf2) popup_image_details_window_t2

0x274e,	// (0x0005bd0b) popup_image_details_window_t3

0x2762,	// (0x0005bd1f) popup_image_details_window_t4

0x277d,	// (0x0005bd3a) popup_image_details_window_t5

0x0004,

0xf765,	// (0x00068d22) popup_image_details_window_t

0x7988,	// (0x00060f45) bg_calc_paper_pane_ParamLimits

0x6d05,	// (0x000602c2) grid_highlight_pane_cp013

0x79a0,	// (0x00060f5d) list_calc_pane_ParamLimits

0x79b2,	// (0x00060f6f) scroll_pane_cp024

0x79ba,	// (0x00060f77) bg_calc_display_pane_ParamLimits

0x79c6,	// (0x00060f83) calc_display_pane_t1_ParamLimits

0x79db,	// (0x00060f98) calc_display_pane_t2_ParamLimits

0x79f0,	// (0x00060fad) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0006873f) calc_display_pane_t_ParamLimits

0x7af9,	// (0x000610b6) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0006875c) cell_calc_pane_g

0x7b02,	// (0x000610bf) cell_calc_pane_t1

0x7b11,	// (0x000610ce) grid_highlight_pane_cp02_ParamLimits

0x7b27,	// (0x000610e4) toolbar_button_pane_cp01_ParamLimits

0x7b27,	// (0x000610e4) toolbar_button_pane_cp01

0x0ff2,	// (0x0005a5af) temp_image_control_pane_ParamLimits

0x0ff2,	// (0x0005a5af) temp_image_control_pane

0xed0f,	// (0x000682cc) main_mp3_pane

0x2797,	// (0x0005bd54) temp_image_control_pane_g1_ParamLimits

0x2797,	// (0x0005bd54) temp_image_control_pane_g1

0x27a5,	// (0x0005bd62) temp_image_control_pane_g2_ParamLimits

0x27a5,	// (0x0005bd62) temp_image_control_pane_g2

0x27b7,	// (0x0005bd74) temp_image_control_pane_g3_ParamLimits

0x27b7,	// (0x0005bd74) temp_image_control_pane_g3

0xaddc,	// (0x00064399) temp_image_control_pane_g4_ParamLimits

0xaddc,	// (0x00064399) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x00068d2d) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x00068d2d) temp_image_control_pane_g

0x2797,	// (0x0005bd54) main_mp3_pane_g1

0xaded,	// (0x000643aa) main_mp3_pane_g2

0x0007,

0xf779,	// (0x00068d36) main_mp3_pane_g

0x27fa,	// (0x0005bdb7) main_mp3_pane_t1

0x8291,	// (0x0006184e) main_camera_pane_g8_ParamLimits

0x8291,	// (0x0006184e) main_camera_pane_g8

0x83e9,	// (0x000619a6) main_video_pane_g7_ParamLimits

0x83e9,	// (0x000619a6) main_video_pane_g7

0xa8df,	// (0x00063e9c) main_camera2_pane_t7_ParamLimits

0xa8df,	// (0x00063e9c) main_camera2_pane_t7

0x8894,	// (0x00061e51) scroll_pane_cp025_ParamLimits

0x8894,	// (0x00061e51) scroll_pane_cp025

0x88a8,	// (0x00061e65) scroll_pane_cp026_ParamLimits

0x88a8,	// (0x00061e65) scroll_pane_cp026

0x88b7,	// (0x00061e74) wml_content_pane_ParamLimits

0x6d05,	// (0x000602c2) main_touch_calib_pane

0xae84,	// (0x00064441) main_touch_calib_pane_g1

0xae90,	// (0x0006444d) main_touch_calib_pane_g2

0xae9c,	// (0x00064459) main_touch_calib_pane_g3

0xaea8,	// (0x00064465) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x00068d54) main_touch_calib_pane_g

0xaeb4,	// (0x00064471) main_touch_calib_pane_t1

0xaec9,	// (0x00064486) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x00068d5d) main_touch_calib_pane_t

0x0bc6,	// (0x0005a183) mup_progress_pane_cp02

0x0be5,	// (0x0005a1a2) navi_pane_g1

0x0c65,	// (0x0005a222) navi_pane_mp_t3

0xed0f,	// (0x000682cc) main_mp3_pane_ParamLimits

0xa581,	// (0x00063b3e) navi_pane_ParamLimits

0x2797,	// (0x0005bd54) main_mp3_pane_g1_ParamLimits

0xaded,	// (0x000643aa) main_mp3_pane_g2_ParamLimits

0xadf9,	// (0x000643b6) main_mp3_pane_g3_ParamLimits

0xadf9,	// (0x000643b6) main_mp3_pane_g3

0xae05,	// (0x000643c2) main_mp3_pane_g4_ParamLimits

0xae05,	// (0x000643c2) main_mp3_pane_g4

0x27c7,	// (0x0005bd84) main_mp3_pane_g5_ParamLimits

0x27c7,	// (0x0005bd84) main_mp3_pane_g5

0x27d5,	// (0x0005bd92) main_mp3_pane_g6_ParamLimits

0x27d5,	// (0x0005bd92) main_mp3_pane_g6

0x27e2,	// (0x0005bd9f) main_mp3_pane_g7_ParamLimits

0x27e2,	// (0x0005bd9f) main_mp3_pane_g7

0x27ee,	// (0x0005bdab) main_mp3_pane_g8_ParamLimits

0x27ee,	// (0x0005bdab) main_mp3_pane_g8

0xf779,	// (0x00068d36) main_mp3_pane_g_ParamLimits

0xae11,	// (0x000643ce) main_mp3_pane_t2

0xae1f,	// (0x000643dc) main_mp3_pane_t3

0x2808,	// (0x0005bdc5) main_mp3_pane_t4

0x2816,	// (0x0005bdd3) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x00068d47) main_mp3_pane_t

0x2824,	// (0x0005bde1) mup_progress_pane_cp01

0x6d47,	// (0x00060304) aid_zoom_text_secondary2

0x261b,	// (0x0005bbd8) list_cale_ev2_pane

0x2623,	// (0x0005bbe0) scroll_pane_cp023_ParamLimits

0xaf14,	// (0x000644d1) field_cale_ev2_pane_ParamLimits

0xaf14,	// (0x000644d1) field_cale_ev2_pane

0xaf2a,	// (0x000644e7) field_cale_ev2_pane_g1_ParamLimits

0xaf2a,	// (0x000644e7) field_cale_ev2_pane_g1

0xaf36,	// (0x000644f3) field_cale_ev2_pane_g2_ParamLimits

0xaf36,	// (0x000644f3) field_cale_ev2_pane_g2

0xaf4e,	// (0x0006450b) field_cale_ev2_pane_g3_ParamLimits

0xaf4e,	// (0x0006450b) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x00068d68) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x00068d68) field_cale_ev2_pane_g

0x5ffd,	// (0x0005f5ba) field_cale_ev2_pane_t1_ParamLimits

0x5ffd,	// (0x0005f5ba) field_cale_ev2_pane_t1

0x6014,	// (0x0005f5d1) field_cale_ev2_pane_t2_ParamLimits

0x6014,	// (0x0005f5d1) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x00068d71) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x00068d71) field_cale_ev2_pane_t

0x9ebc,	// (0x00063479) main_postcard_pane_g5_ParamLimits

0x9ebc,	// (0x00063479) main_postcard_pane_g5

0x9ec8,	// (0x00063485) main_postcard_pane_g6_ParamLimits

0x9ec8,	// (0x00063485) main_postcard_pane_g6

0x8218,	// (0x000617d5) camera2_autofocus_pane_cp_ParamLimits

0x8218,	// (0x000617d5) camera2_autofocus_pane_cp

0xed0f,	// (0x000682cc) main_mup3_pane

0xaf92,	// (0x0006454f) main_mup3_pane_g1_ParamLimits

0xaf92,	// (0x0006454f) main_mup3_pane_g1

0xafb3,	// (0x00064570) main_mup3_pane_g2_ParamLimits

0xafb3,	// (0x00064570) main_mup3_pane_g2

0xb016,	// (0x000645d3) main_mup3_pane_g3_ParamLimits

0xb016,	// (0x000645d3) main_mup3_pane_g3

0xb051,	// (0x0006460e) main_mup3_pane_g4_ParamLimits

0xb051,	// (0x0006460e) main_mup3_pane_g4

0xb08c,	// (0x00064649) main_mup3_pane_g5_ParamLimits

0xb08c,	// (0x00064649) main_mup3_pane_g5

0xb0c7,	// (0x00064684) main_mup3_pane_g6_ParamLimits

0xb0c7,	// (0x00064684) main_mup3_pane_g6

0x28a0,	// (0x0005be5d) main_mup3_pane_g7_ParamLimits

0x28a0,	// (0x0005be5d) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x00068d81) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x00068d81) main_mup3_pane_g

0xb135,	// (0x000646f2) main_mup3_pane_t1_ParamLimits

0xb135,	// (0x000646f2) main_mup3_pane_t1

0xb198,	// (0x00064755) main_mup3_pane_t2_ParamLimits

0xb198,	// (0x00064755) main_mup3_pane_t2

0xb255,	// (0x00064812) main_mup3_pane_t4_ParamLimits

0xb255,	// (0x00064812) main_mup3_pane_t4

0xb29b,	// (0x00064858) main_mup3_pane_t5_ParamLimits

0xb29b,	// (0x00064858) main_mup3_pane_t5

0xb33f,	// (0x000648fc) main_mup3_pane_t6_ParamLimits

0xb33f,	// (0x000648fc) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x00068d92) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x00068d92) main_mup3_pane_t

0xb3e7,	// (0x000649a4) mup3_progress_pane_ParamLimits

0xb3e7,	// (0x000649a4) mup3_progress_pane

0xb42d,	// (0x000649ea) popup_mup3_control_window_ParamLimits

0xb42d,	// (0x000649ea) popup_mup3_control_window

0x28ae,	// (0x0005be6b) popup_mup3_text_window

0xb446,	// (0x00064a03) mup3_progress_pane_t1

0xb45c,	// (0x00064a19) mup3_progress_pane_t2

0x28b6,	// (0x0005be73) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x00068d9f) mup3_progress_pane_t

0x28cd,	// (0x0005be8a) mup_progress_pane_cp03

0x6d05,	// (0x000602c2) bg_tb_trans_pane_cp04

0xb472,	// (0x00064a2f) mup3_volume_pane

0xb47a,	// (0x00064a37) popup_mup3_control_window_g1

0xb483,	// (0x00064a40) mup3_volume_pane_g1

0xb48c,	// (0x00064a49) mup3_volume_pane_g2

0xb495,	// (0x00064a52) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x00068da6) mup3_volume_pane_g

0x6d05,	// (0x000602c2) bg_tb_trans_pane_cp03

0x28dd,	// (0x0005be9a) popup_mup3_text_window_g1

0x28e5,	// (0x0005bea2) popup_mup3_text_window_t1

0x7aba,	// (0x00061077) list_calc_item_pane_g1_ParamLimits

0x22eb,	// (0x0005b8a8) mup_volume_pane_cp_g1

0xaede,	// (0x0006449b) main_touch_calib_pane_t3

0xaef0,	// (0x000644ad) main_touch_calib_pane_t4

0xaf02,	// (0x000644bf) main_touch_calib_pane_t5

0x6d0f,	// (0x000602cc) aid_cell_size_toolbar2

0x6d17,	// (0x000602d4) aid_popup3_width_pane

0x5d0c,	// (0x0005f2c9) aid_zoom_text_msg_primary

0x81f8,	// (0x000617b5) vorec_t7

0x7a29,	// (0x00060fe6) bg_calc_paper_pane_g1_ParamLimits

0x7a35,	// (0x00060ff2) bg_calc_paper_pane_g2_ParamLimits

0x7a41,	// (0x00060ffe) bg_calc_paper_pane_g3_ParamLimits

0x7a4d,	// (0x0006100a) bg_calc_paper_pane_g4_ParamLimits

0x7a59,	// (0x00061016) bg_calc_paper_pane_g5_ParamLimits

0x7a65,	// (0x00061022) bg_calc_paper_pane_g6_ParamLimits

0x7a74,	// (0x00061031) bg_calc_paper_pane_g7_ParamLimits

0x7a83,	// (0x00061040) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00068746) bg_calc_paper_pane_g_ParamLimits

0x7a92,	// (0x0006104f) calc_bg_paper_pane_g9_ParamLimits

0x8304,	// (0x000618c1) image_qvga_pane_ParamLimits

0x8304,	// (0x000618c1) image_qvga_pane

0x7679,	// (0x00060c36) bg_popup_sub_pane_cp04_ParamLimits

0x0f29,	// (0x0005a4e6) popup_mup_playback_window_g1_ParamLimits

0x0f35,	// (0x0005a4f2) popup_mup_playback_window_t1_ParamLimits

0x0f4a,	// (0x0005a507) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00068ad2) popup_mup_playback_window_t_ParamLimits

0xaa06,	// (0x00063fc3) main_mup2_pane_g3_ParamLimits

0xaa06,	// (0x00063fc3) main_mup2_pane_g3

0x85bf,	// (0x00061b7c) popup_toolbar_window_cp04

0x132b,	// (0x0005a8e8) popup_call2_audio_second_window_g3_ParamLimits

0x132b,	// (0x0005a8e8) popup_call2_audio_second_window_g3

0x1735,	// (0x0005acf2) popup_call2_audio_first_window_g4_ParamLimits

0x1735,	// (0x0005acf2) popup_call2_audio_first_window_g4

0x1db4,	// (0x0005b371) popup_call2_audio_in_window_g4_ParamLimits

0x1db4,	// (0x0005b371) popup_call2_audio_in_window_g4

0x9fb3,	// (0x00063570) aid_area_sk_bg_cut_ParamLimits

0x9fb3,	// (0x00063570) aid_area_sk_bg_cut

0x0f5f,	// (0x0005a51c) aid_area_sk_bg_cut_2_ParamLimits

0x0f5f,	// (0x0005a51c) aid_area_sk_bg_cut_2

0xad4e,	// (0x0006430b) aid_placing_details_win

0xad56,	// (0x00064313) aid_placing_details_win_2

0x26d9,	// (0x0005bc96) camera2_autofocus_pane_g1_ParamLimits

0x6f05,	// (0x000604c2) popup_fixed_preview_cale_window_ParamLimits

0x6f05,	// (0x000604c2) popup_fixed_preview_cale_window

0x0d00,	// (0x0005a2bd) navi_slider_pane_g3

0x0cf7,	// (0x0005a2b4) navi_slider_pane_g4

0x0cee,	// (0x0005a2ab) navi_slider_pane_g5

0x0d00,	// (0x0005a2bd) navi_slider_pane_g6

0x99cb,	// (0x00062f88) navi_slider_pane_g7

0x0e2a,	// (0x0005a3e7) mup_scale_pane_g3

0x0e33,	// (0x0005a3f0) mup_scale_pane_g4

0x0e3c,	// (0x0005a3f9) mup_scale_pane_g5

0x9d8e,	// (0x0006334b) mup_scale_pane_g6

0x9d97,	// (0x00063354) mup_scale_pane_g7

0x0d00,	// (0x0005a2bd) cams2_slider_pane_g3

0x2375,	// (0x0005b932) cams2_slider_pane_g4

0xacbb,	// (0x00064278) cams2_slider_pane_g5

0x0d00,	// (0x0005a2bd) cams2_slider_pane_g6

0xacc3,	// (0x00064280) cams2_slider_pane_g7

0x2598,	// (0x0005bb55) camera2_autofocus_pane_cp_g1

0x28f3,	// (0x0005beb0) bg_popup_preview_window_pane_cp02_ParamLimits

0x28f3,	// (0x0005beb0) bg_popup_preview_window_pane_cp02

0xb49e,	// (0x00064a5b) list_fp_cale_pane_ParamLimits

0xb49e,	// (0x00064a5b) list_fp_cale_pane

0x28ff,	// (0x0005bebc) popup_fixed_preview_cale_window_t1_ParamLimits

0x28ff,	// (0x0005bebc) popup_fixed_preview_cale_window_t1

0xb4ae,	// (0x00064a6b) popup_fixed_preview_cale_window_t2_ParamLimits

0xb4ae,	// (0x00064a6b) popup_fixed_preview_cale_window_t2

0xb4c3,	// (0x00064a80) popup_fixed_preview_cale_window_t3_ParamLimits

0xb4c3,	// (0x00064a80) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x00068dad) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x00068dad) popup_fixed_preview_cale_window_t

0xb4d5,	// (0x00064a92) list_single_fp_cale_pane_ParamLimits

0xb4d5,	// (0x00064a92) list_single_fp_cale_pane

0xb4e2,	// (0x00064a9f) list_single_fp_cale_pane_g1_ParamLimits

0xb4e2,	// (0x00064a9f) list_single_fp_cale_pane_g1

0x291d,	// (0x0005beda) list_single_fp_cale_pane_g2_ParamLimits

0x291d,	// (0x0005beda) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x00068db4) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x00068db4) list_single_fp_cale_pane_g

0xb4ee,	// (0x00064aab) list_single_fp_cale_pane_t1_ParamLimits

0xb4ee,	// (0x00064aab) list_single_fp_cale_pane_t1

0xb500,	// (0x00064abd) list_single_fp_cale_pane_t2_ParamLimits

0xb500,	// (0x00064abd) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x00068dbb) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x00068dbb) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6d05,	// (0x000602c2) main_dialer_pane

0xb533,	// (0x00064af0) aid_cell_size_keypad

0xb53d,	// (0x00064afa) dialer_ne_pane

0xb545,	// (0x00064b02) grid_dialer_command_1_pane

0xb54d,	// (0x00064b0a) grid_dialer_command_2_pane

0xb555,	// (0x00064b12) grid_dialer_keypad_pane

0xb565,	// (0x00064b22) bg_popup_call_pane_cp06_ParamLimits

0xb565,	// (0x00064b22) bg_popup_call_pane_cp06

0xb571,	// (0x00064b2e) dialer_ne_clear_pane_ParamLimits

0xb571,	// (0x00064b2e) dialer_ne_clear_pane

0x2936,	// (0x0005bef3) dialer_ne_pane_g1

0x293e,	// (0x0005befb) dialer_ne_pane_t1_ParamLimits

0x293e,	// (0x0005befb) dialer_ne_pane_t1

0xb57d,	// (0x00064b3a) dialer_ne_pane_t2_ParamLimits

0xb57d,	// (0x00064b3a) dialer_ne_pane_t2

0xb59a,	// (0x00064b57) dialer_ne_pane_t3_ParamLimits

0xb59a,	// (0x00064b57) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x00068dc0) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x00068dc0) dialer_ne_pane_t

0xb5be,	// (0x00064b7b) dialer_ne_pane_t3_copy1_ParamLimits

0xb5be,	// (0x00064b7b) dialer_ne_pane_t3_copy1

0xb5e2,	// (0x00064b9f) cell_dialer_keypad_pane_ParamLimits

0xb5e2,	// (0x00064b9f) cell_dialer_keypad_pane

0xb5f7,	// (0x00064bb4) cell_dialer_command_1_pane_ParamLimits

0xb5f7,	// (0x00064bb4) cell_dialer_command_1_pane

0xb60d,	// (0x00064bca) cell_dialer_command_2_pane_ParamLimits

0xb60d,	// (0x00064bca) cell_dialer_command_2_pane

0x2950,	// (0x0005bf0d) bg_button_pane_cp02_ParamLimits

0x2950,	// (0x0005bf0d) bg_button_pane_cp02

0xb61c,	// (0x00064bd9) cell_dialer_keypad_pane_g1_ParamLimits

0xb61c,	// (0x00064bd9) cell_dialer_keypad_pane_g1

0x2950,	// (0x0005bf0d) bg_button_pane_cp03_ParamLimits

0x2950,	// (0x0005bf0d) bg_button_pane_cp03

0xb631,	// (0x00064bee) cell_dialer_command_1_pane_g1_ParamLimits

0xb631,	// (0x00064bee) cell_dialer_command_1_pane_g1

0x295c,	// (0x0005bf19) bg_button_pane_cp04

0xb644,	// (0x00064c01) cell_dialer_command_2_pane_g1

0x0cd4,	// (0x0005a291) bg_button_pane_cp06

0x2964,	// (0x0005bf21) dialer_ne_clear_pane_g1

0x0bf1,	// (0x0005a1ae) navi_pane_g2

0x9973,	// (0x00062f30) navi_pane_g3

0x0002,

0xf418,	// (0x000689d5) navi_pane_g

0x0c73,	// (0x0005a230) navi_pane_mv_g2

0x0c9b,	// (0x0005a258) navi_pane_mv_g5

0x9998,	// (0x00062f55) navi_pane_mv_t1

0x79ba,	// (0x00060f77) main_clock2_pane

0xb673,	// (0x00064c30) main_clock2_list_pane_ParamLimits

0xb673,	// (0x00064c30) main_clock2_list_pane

0xb699,	// (0x00064c56) main_clock2_pane_t1_ParamLimits

0xb699,	// (0x00064c56) main_clock2_pane_t1

0xb6c3,	// (0x00064c80) main_clock2_pane_t2_ParamLimits

0xb6c3,	// (0x00064c80) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x00068dc7) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x00068dc7) main_clock2_pane_t

0xb726,	// (0x00064ce3) popup_clock_analogue_window_cp03_ParamLimits

0xb726,	// (0x00064ce3) popup_clock_analogue_window_cp03

0xb742,	// (0x00064cff) popup_clock_digital_window_cp02_ParamLimits

0xb742,	// (0x00064cff) popup_clock_digital_window_cp02

0xb790,	// (0x00064d4d) main_clock2_list_single_pane_ParamLimits

0xb790,	// (0x00064d4d) main_clock2_list_single_pane

0x0cd4,	// (0x0005a291) list_highlight_pane_cp05

0x296c,	// (0x0005bf29) main_clock2_list_single_pane_t1

0x85bf,	// (0x00061b7c) popup_toolbar_window_cp04_ParamLimits

0xadac,	// (0x00064369) camera2_autofocus_pane_g2_ParamLimits

0xadac,	// (0x00064369) camera2_autofocus_pane_g2

0xadb8,	// (0x00064375) camera2_autofocus_pane_g3_ParamLimits

0xadb8,	// (0x00064375) camera2_autofocus_pane_g3

0xadc4,	// (0x00064381) camera2_autofocus_pane_g4_ParamLimits

0xadc4,	// (0x00064381) camera2_autofocus_pane_g4

0xadd0,	// (0x0006438d) camera2_autofocus_pane_g5_ParamLimits

0xadd0,	// (0x0006438d) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x00068d10) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x00068d10) camera2_autofocus_pane_g

0xaf72,	// (0x0006452f) camera2_autofocus_pane_cp_g2

0xaf7a,	// (0x00064537) camera2_autofocus_pane_cp_g3

0xaf82,	// (0x0006453f) camera2_autofocus_pane_cp_g4

0xaf8a,	// (0x00064547) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x00068d76) camera2_autofocus_pane_cp_g

0xb55d,	// (0x00064b1a) popup_dialer_spcha_window

0x6d05,	// (0x000602c2) bg_popup_sub_pane_cp07

0x297a,	// (0x0005bf37) list_spcha_pane

0x2982,	// (0x0005bf3f) list_single_spcha_pane_ParamLimits

0x2982,	// (0x0005bf3f) list_single_spcha_pane

0x6d05,	// (0x000602c2) list_highlight_pane_cp06

0x2993,	// (0x0005bf50) list_single_spcha_pane_t1

0x1b5e,	// (0x0005b11b) popup_call2_audio_out_window_g4_ParamLimits

0x1b5e,	// (0x0005b11b) popup_call2_audio_out_window_g4

0x6d05,	// (0x000602c2) main_imed2_pane

0x217b,	// (0x0005b738) popup_imed_adjust2_window

0xa4f2,	// (0x00063aaf) popup_imed_trans_window_ParamLimits

0xa4f2,	// (0x00063aaf) popup_imed_trans_window

0x23dc,	// (0x0005b999) popup_blid_sat_info2_window_t1

0x23ea,	// (0x0005b9a7) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x00068ca5) popup_blid_sat_info2_window_t

0xb838,	// (0x00064df5) aid_size_cell_colour_35

0xb84f,	// (0x00064e0c) aid_size_cell_colour_112

0xb866,	// (0x00064e23) aid_size_cell_effect

0xed0f,	// (0x000682cc) bg_tb_trans_pane_cp02

0xed1d,	// (0x000682da) heading_imed_pane

0xb880,	// (0x00064e3d) listscroll_imed_pane

0x29a1,	// (0x0005bf5e) heading_imed_pane_g1

0x29a9,	// (0x0005bf66) heading_imed_pane_t1

0x29b7,	// (0x0005bf74) grid_imed_colour_35_pane_ParamLimits

0x29b7,	// (0x0005bf74) grid_imed_colour_35_pane

0xb88c,	// (0x00064e49) grid_imed_effect_pane

0x29ca,	// (0x0005bf87) list_imed_aspect_pane

0xb898,	// (0x00064e55) scroll_pane_cp027_ParamLimits

0xb898,	// (0x00064e55) scroll_pane_cp027

0xb8a4,	// (0x00064e61) cell_imed_effect_pane_ParamLimits

0xb8a4,	// (0x00064e61) cell_imed_effect_pane

0x29d2,	// (0x0005bf8f) cell_imed_colour_pane_ParamLimits

0x29d2,	// (0x0005bf8f) cell_imed_colour_pane

0x2a0c,	// (0x0005bfc9) cell_imed_colour_pane_g1_ParamLimits

0x2a0c,	// (0x0005bfc9) cell_imed_colour_pane_g1

0x2a1d,	// (0x0005bfda) hgihlgiht_grid_pane_cp016_ParamLimits

0x2a1d,	// (0x0005bfda) hgihlgiht_grid_pane_cp016

0xb8ba,	// (0x00064e77) cell_imed_effect_pane_g1

0xb8c2,	// (0x00064e7f) grid_highlight_pane_cp017

0x2a2e,	// (0x0005bfeb) list_imed_single_pane_ParamLimits

0x2a2e,	// (0x0005bfeb) list_imed_single_pane

0x6d05,	// (0x000602c2) list_highlight_pane_cp07

0x2a41,	// (0x0005bffe) list_imed_aspect_pane_comp1_t1

0x2155,	// (0x0005b712) bg_tb_trans_pane_cp05

0x2a61,	// (0x0005c01e) popup_imed_adjust2_window_g1

0x2a88,	// (0x0005c045) popup_imed_adjust2_window_t1

0x2aa0,	// (0x0005c05d) slider_imed_adjust_pane

0x2ab4,	// (0x0005c071) slider_imed_adjust_pane_g1

0x2ac4,	// (0x0005c081) slider_imed_adjust_pane_g2

0x2ad4,	// (0x0005c091) slider_imed_adjust_pane_g3

0x2ae5,	// (0x0005c0a2) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x00068de4) slider_imed_adjust_pane_g

0xb8cb,	// (0x00064e88) aid_size_cell_clipart2

0xb8d7,	// (0x00064e94) grid_imed_clipart_pane

0x2af6,	// (0x0005c0b3) scroll_pane_cp031

0xb8e1,	// (0x00064e9e) cell_imed_clipart_pane_ParamLimits

0xb8e1,	// (0x00064e9e) cell_imed_clipart_pane

0xb8f8,	// (0x00064eb5) cell_imed_clipart_pane_g1

0x6d05,	// (0x000602c2) grid_highlight_pane_cp014

0xb67f,	// (0x00064c3c) main_clock2_pane_g1_ParamLimits

0xb67f,	// (0x00064c3c) main_clock2_pane_g1

0xb75a,	// (0x00064d17) aid_call2_pane_cp10

0xb766,	// (0x00064d23) aid_call_pane_cp10

0x0ba1,	// (0x0005a15e) popup_clock_analogue_window_cp10_g1

0x0ba1,	// (0x0005a15e) popup_clock_analogue_window_cp10_g2

0xb772,	// (0x00064d2f) popup_clock_analogue_window_cp10_g3

0xb772,	// (0x00064d2f) popup_clock_analogue_window_cp10_g4

0x0ba1,	// (0x0005a15e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x00068dd2) popup_clock_analogue_window_cp10_g

0xb77e,	// (0x00064d3b) popup_clock_analogue_window_cp10_t1

0xb7a2,	// (0x00064d5f) clock_digital_number_pane_cp10_ParamLimits

0xb7a2,	// (0x00064d5f) clock_digital_number_pane_cp10

0xb7ba,	// (0x00064d77) clock_digital_number_pane_cp11_ParamLimits

0xb7ba,	// (0x00064d77) clock_digital_number_pane_cp11

0xb7d2,	// (0x00064d8f) clock_digital_number_pane_cp12_ParamLimits

0xb7d2,	// (0x00064d8f) clock_digital_number_pane_cp12

0xb7ea,	// (0x00064da7) clock_digital_number_pane_cp13_ParamLimits

0xb7ea,	// (0x00064da7) clock_digital_number_pane_cp13

0xb802,	// (0x00064dbf) clock_digital_separator_pane_cp10_ParamLimits

0xb802,	// (0x00064dbf) clock_digital_separator_pane_cp10

0xb81a,	// (0x00064dd7) popup_clock_digital_window_cp02_t1_ParamLimits

0xb81a,	// (0x00064dd7) popup_clock_digital_window_cp02_t1

0x7671,	// (0x00060c2e) clock_digital_number_pane_cp10_g1

0x7671,	// (0x00060c2e) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x00068ded) clock_digital_number_pane_cp10_g

0x7671,	// (0x00060c2e) clock_digital_separator_pane_cp10_g1

0x7671,	// (0x00060c2e) clock_digital_separator_pane_g2_cp10

0x0ca4,	// (0x0005a261) navi_pane_vded_g4

0x0cad,	// (0x0005a26a) navi_pane_vded_g5

0x0cb6,	// (0x0005a273) navi_pane_vded_t1

0x6d05,	// (0x000602c2) main_vded_pane

0xb901,	// (0x00064ebe) main_vded_pane_g1

0xb909,	// (0x00064ec6) main_vded_pane_g2

0xb911,	// (0x00064ece) main_vded_pane_g3

0x0002,

0xf835,	// (0x00068df2) main_vded_pane_g

0xb919,	// (0x00064ed6) main_vded_pane_t1

0xb927,	// (0x00064ee4) main_vded_pane_t2

0x0001,

0xf83c,	// (0x00068df9) main_vded_pane_t

0xb935,	// (0x00064ef2) vded_slider_pane

0xb93d,	// (0x00064efa) vded_video_pane

0x2afe,	// (0x0005c0bb) vded_video_pane_g1

0xb945,	// (0x00064f02) vded_video_pane_g2

0x2598,	// (0x0005bb55) vded_video_pane_g3

0x0002,

0xf841,	// (0x00068dfe) vded_video_pane_g

0x2b08,	// (0x0005c0c5) vded_slider_pane_g1

0x22eb,	// (0x0005b8a8) vded_slider_pane_g2

0x2b11,	// (0x0005c0ce) vded_slider_pane_g3

0x2b1a,	// (0x0005c0d7) vded_slider_pane_g4

0x2b23,	// (0x0005c0e0) vded_slider_pane_g5

0x0004,

0xf848,	// (0x00068e05) vded_slider_pane_g

0xb421,	// (0x000649de) mup3_rocker_pane_ParamLimits

0xb421,	// (0x000649de) mup3_rocker_pane

0xb94e,	// (0x00064f0b) mup3_control_keys_pane_g1

0xb956,	// (0x00064f13) mup3_control_keys_pane_g2

0xb95e,	// (0x00064f1b) mup3_control_keys_pane_g3

0xb966,	// (0x00064f23) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x00068e10) mup3_control_keys_pane_g

0x6f29,	// (0x000604e6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6f29,	// (0x000604e6) popup_toolbar2_fixed_window_cp01

0xb439,	// (0x000649f6) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb439,	// (0x000649f6) popup_toolbar2_fixed_window_cp02

0x149d,	// (0x0005aa5a) popup_call2_audio_second_window_t4_ParamLimits

0x149d,	// (0x0005aa5a) popup_call2_audio_second_window_t4

0x19cb,	// (0x0005af88) popup_call2_audio_first_window_t6_ParamLimits

0x19cb,	// (0x0005af88) popup_call2_audio_first_window_t6

0x1c61,	// (0x0005b21e) popup_call2_audio_out_window_t6_ParamLimits

0x1c61,	// (0x0005b21e) popup_call2_audio_out_window_t6

0x6d05,	// (0x000602c2) main_vitu_pane

0xb976,	// (0x00064f33) aid_size_cell_itu_ParamLimits

0xb976,	// (0x00064f33) aid_size_cell_itu

0x6f51,	// (0x0006050e) bg_popup_window_pane_cp08_ParamLimits

0x6f51,	// (0x0006050e) bg_popup_window_pane_cp08

0xb984,	// (0x00064f41) field_vitu_entry_pane_ParamLimits

0xb984,	// (0x00064f41) field_vitu_entry_pane

0xb991,	// (0x00064f4e) grid_vitu_function_pane_ParamLimits

0xb991,	// (0x00064f4e) grid_vitu_function_pane

0xb99d,	// (0x00064f5a) grid_vitu_itu_pane_ParamLimits

0xb99d,	// (0x00064f5a) grid_vitu_itu_pane

0xb9a9,	// (0x00064f66) cell_vitu_itu_pane_ParamLimits

0xb9a9,	// (0x00064f66) cell_vitu_itu_pane

0xb9be,	// (0x00064f7b) cell_vitu_function_pane_ParamLimits

0xb9be,	// (0x00064f7b) cell_vitu_function_pane

0xed0f,	// (0x000682cc) bg_popup_sub_pane_cp08_ParamLimits

0xed0f,	// (0x000682cc) bg_popup_sub_pane_cp08

0xb9d0,	// (0x00064f8d) field_vitu_entry_pane_t1_ParamLimits

0xb9d0,	// (0x00064f8d) field_vitu_entry_pane_t1

0x2b44,	// (0x0005c101) field_vitu_entry_pane_t2_ParamLimits

0x2b44,	// (0x0005c101) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x00068e1e) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x00068e1e) field_vitu_entry_pane_t

0x2b61,	// (0x0005c11e) bg_button_pane_cp05_ParamLimits

0x2b61,	// (0x0005c11e) bg_button_pane_cp05

0xb9e9,	// (0x00064fa6) cell_vitu_itu_pane_g1

0xba01,	// (0x00064fbe) cell_vitu_itu_pane_t1_ParamLimits

0xba01,	// (0x00064fbe) cell_vitu_itu_pane_t1

0xba13,	// (0x00064fd0) cell_vitu_itu_pane_t2_ParamLimits

0xba13,	// (0x00064fd0) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x00068e23) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x00068e23) cell_vitu_itu_pane_t

0x2b6f,	// (0x0005c12c) bg_button_pane_cp07

0xba48,	// (0x00065005) cell_vitu_function_pane_g1

0x788f,	// (0x00060e4c) main_calc_pane_g1

0x6d3f,	// (0x000602fc) aid_visual_content_pane

0x6d05,	// (0x000602c2) main_vradio_pane

0xba51,	// (0x0006500e) main_vradio_pane_g1_ParamLimits

0xba51,	// (0x0006500e) main_vradio_pane_g1

0x2b79,	// (0x0005c136) main_vradio_pane_g2_ParamLimits

0x2b79,	// (0x0005c136) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x00068e2a) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x00068e2a) main_vradio_pane_g

0xba5f,	// (0x0006501c) main_vradio_pane_t1_ParamLimits

0xba5f,	// (0x0006501c) main_vradio_pane_t1

0xba71,	// (0x0006502e) main_vradio_pane_t2_ParamLimits

0xba71,	// (0x0006502e) main_vradio_pane_t2

0x2b86,	// (0x0005c143) main_vradio_pane_t3_ParamLimits

0x2b86,	// (0x0005c143) main_vradio_pane_t3

0x0002,

0xf872,	// (0x00068e2f) main_vradio_pane_t_ParamLimits

0xf872,	// (0x00068e2f) main_vradio_pane_t

0xba83,	// (0x00065040) vradio_rocker_control_pane_ParamLimits

0xba83,	// (0x00065040) vradio_rocker_control_pane

0xba8f,	// (0x0006504c) vradio_station_info_pane_ParamLimits

0xba8f,	// (0x0006504c) vradio_station_info_pane

0x2b98,	// (0x0005c155) vradio_frequency_info_pane_ParamLimits

0x2b98,	// (0x0005c155) vradio_frequency_info_pane

0x2598,	// (0x0005bb55) vradio_station_info_pane_g1

0x2ba7,	// (0x0005c164) vradio_station_info_pane_t1_ParamLimits

0x2ba7,	// (0x0005c164) vradio_station_info_pane_t1

0x2bc9,	// (0x0005c186) vradio_station_info_pane_t2_ParamLimits

0x2bc9,	// (0x0005c186) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x00068e36) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x00068e36) vradio_station_info_pane_t

0x2bdb,	// (0x0005c198) vradio_tuning_pane

0x2be3,	// (0x0005c1a0) vradio_rocker_control_pane_g1

0x2beb,	// (0x0005c1a8) vradio_rocker_control_pane_g2

0x2bf3,	// (0x0005c1b0) vradio_rocker_control_pane_g3

0x2bfb,	// (0x0005c1b8) vradio_rocker_control_pane_g4

0x2c03,	// (0x0005c1c0) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x00068e3b) vradio_rocker_control_pane_g

0xba9c,	// (0x00065059) vradio_frequency_info_pane_g1

0x2c0b,	// (0x0005c1c8) vradio_frequency_info_pane_t1_ParamLimits

0x2c0b,	// (0x0005c1c8) vradio_frequency_info_pane_t1

0xbaa4,	// (0x00065061) vradio_tuning_pane_g1

0xbaad,	// (0x0006506a) vradio_tuning_pane_t1

0x6d7e,	// (0x0006033b) area_side_right_pane_ParamLimits

0x6d7e,	// (0x0006033b) area_side_right_pane

0x211c,	// (0x0005b6d9) status_small_pane_g1

0x2124,	// (0x0005b6e1) status_small_pane_g2

0x212d,	// (0x0005b6ea) status_small_pane_g3

0x2136,	// (0x0005b6f3) status_small_pane_g4

0x0003,

0xf63e,	// (0x00068bfb) status_small_pane_g

0x213f,	// (0x0005b6fc) status_small_pane_t1

0x6d05,	// (0x000602c2) main_video3_pane

0x2c1f,	// (0x0005c1dc) cams_zoom_vslider_pane

0x2c27,	// (0x0005c1e4) image3_wide_pane_ParamLimits

0x2c27,	// (0x0005c1e4) image3_wide_pane

0x2c41,	// (0x0005c1fe) image3_wide_small_pane

0x2c4b,	// (0x0005c208) main_video3_pane_g1_ParamLimits

0x2c4b,	// (0x0005c208) main_video3_pane_g1

0x2c67,	// (0x0005c224) main_video3_pane_g2_ParamLimits

0x2c67,	// (0x0005c224) main_video3_pane_g2

0x0001,

0xf889,	// (0x00068e46) main_video3_pane_g_ParamLimits

0xf889,	// (0x00068e46) main_video3_pane_g

0x2c83,	// (0x0005c240) main_video3_pane_t1_ParamLimits

0x2c83,	// (0x0005c240) main_video3_pane_t1

0x2cae,	// (0x0005c26b) main_video3_pane_t2_ParamLimits

0x2cae,	// (0x0005c26b) main_video3_pane_t2

0x2cd9,	// (0x0005c296) main_video3_pane_t3_ParamLimits

0x2cd9,	// (0x0005c296) main_video3_pane_t3

0x0002,

0xf88e,	// (0x00068e4b) main_video3_pane_t_ParamLimits

0xf88e,	// (0x00068e4b) main_video3_pane_t

0x2d04,	// (0x0005c2c1) cams_zoom_vslider_pane_g1

0x2d0d,	// (0x0005c2ca) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x00068e52) cams_zoom_vslider_pane_g

0x2d15,	// (0x0005c2d2) small_slider_vertical_pane

0x2598,	// (0x0005bb55) small_slider_vertical_pane_g1

0x2598,	// (0x0005bb55) small_slider_vertical_pane_g2

0x2d1d,	// (0x0005c2da) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x00068e57) small_slider_vertical_pane_g

0x6d05,	// (0x000602c2) main_hwr_training_pane

0x2d26,	// (0x0005c2e3) hwr_training_instruct_pane_ParamLimits

0x2d26,	// (0x0005c2e3) hwr_training_instruct_pane

0xbabc,	// (0x00065079) hwr_training_navi_pane_ParamLimits

0xbabc,	// (0x00065079) hwr_training_navi_pane

0xbad0,	// (0x0006508d) hwr_training_write_pane_ParamLimits

0xbad0,	// (0x0006508d) hwr_training_write_pane

0x6d05,	// (0x000602c2) bg_frame_shadow_pane

0x2d55,	// (0x0005c312) hwr_training_write_pane_g1

0x2d5d,	// (0x0005c31a) hwr_training_write_pane_g2

0x2d65,	// (0x0005c322) hwr_training_write_pane_g3

0x2d6d,	// (0x0005c32a) hwr_training_write_pane_g4

0x2d75,	// (0x0005c332) hwr_training_write_pane_g5

0x2d7d,	// (0x0005c33a) hwr_training_write_pane_g6

0x2d85,	// (0x0005c342) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x00068e5e) hwr_training_write_pane_g

0xbafe,	// (0x000650bb) hwr_training_navi_pane_g1_ParamLimits

0xbafe,	// (0x000650bb) hwr_training_navi_pane_g1

0xbb10,	// (0x000650cd) hwr_training_navi_pane_g2_ParamLimits

0xbb10,	// (0x000650cd) hwr_training_navi_pane_g2

0xbb22,	// (0x000650df) hwr_training_navi_pane_g3_ParamLimits

0xbb22,	// (0x000650df) hwr_training_navi_pane_g3

0xbb32,	// (0x000650ef) hwr_training_navi_pane_g4_ParamLimits

0xbb32,	// (0x000650ef) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x00068e6d) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x00068e6d) hwr_training_navi_pane_g

0xbb4c,	// (0x00065109) hwr_training_navi_pane_t1

0xbb5a,	// (0x00065117) list_single_hwr_training_instruct_pane_ParamLimits

0xbb5a,	// (0x00065117) list_single_hwr_training_instruct_pane

0x2d8d,	// (0x0005c34a) list_single_hwr_training_instruct_pane_t1

0x24d8,	// (0x0005ba95) bg_frame_shadow_pane_g1

0x2d9c,	// (0x0005c359) bg_frame_shadow_pane_g2

0x2da4,	// (0x0005c361) bg_frame_shadow_pane_g3

0x2dac,	// (0x0005c369) bg_frame_shadow_pane_g4

0x2db4,	// (0x0005c371) bg_frame_shadow_pane_g5

0x2dbc,	// (0x0005c379) bg_frame_shadow_pane_g6

0x2dc4,	// (0x0005c381) bg_frame_shadow_pane_g7

0x7c02,	// (0x000611bf) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x00068e78) bg_frame_shadow_pane_g

0x6d05,	// (0x000602c2) main_video_tele_dialer_pane

0xbb72,	// (0x0006512f) aid_size_cell_video_keypad_ParamLimits

0xbb72,	// (0x0006512f) aid_size_cell_video_keypad

0xbb82,	// (0x0006513f) grid_video_dialer_keypad_pane_ParamLimits

0xbb82,	// (0x0006513f) grid_video_dialer_keypad_pane

0xbbb2,	// (0x0006516f) video_down_pane_cp_ParamLimits

0xbbb2,	// (0x0006516f) video_down_pane_cp

0xbbda,	// (0x00065197) cell_video_dialer_keypad_pane_ParamLimits

0xbbda,	// (0x00065197) cell_video_dialer_keypad_pane

0x2dcc,	// (0x0005c389) bg_button_pane_cp08_ParamLimits

0x2dcc,	// (0x0005c389) bg_button_pane_cp08

0xbbef,	// (0x000651ac) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbbef,	// (0x000651ac) cell_video_dialer_keypad_pane_g1

0xb415,	// (0x000649d2) mup3_rocker2_pane_ParamLimits

0xb415,	// (0x000649d2) mup3_rocker2_pane

0x2598,	// (0x0005bb55) mup3_rocker2_pane_g1

0xa48c,	// (0x00063a49) main_dialer2_pane

0x6d05,	// (0x000602c2) main_mp4_pane

0xbc2e,	// (0x000651eb) main_mp4_pane_g1_ParamLimits

0xbc2e,	// (0x000651eb) main_mp4_pane_g1

0xbc3c,	// (0x000651f9) main_mp4_pane_g2_ParamLimits

0xbc3c,	// (0x000651f9) main_mp4_pane_g2

0xbc4a,	// (0x00065207) main_mp4_pane_g3_ParamLimits

0xbc4a,	// (0x00065207) main_mp4_pane_g3

0xbc7f,	// (0x0006523c) main_mp4_pane_g4_ParamLimits

0xbc7f,	// (0x0006523c) main_mp4_pane_g4

0xbcad,	// (0x0006526a) main_mp4_pane_g5_ParamLimits

0xbcad,	// (0x0006526a) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x00068e98) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x00068e98) main_mp4_pane_g

0xbd09,	// (0x000652c6) main_mp4_pane_t1_ParamLimits

0xbd09,	// (0x000652c6) main_mp4_pane_t1

0xbd61,	// (0x0006531e) main_mp4_pane_t2_ParamLimits

0xbd61,	// (0x0006531e) main_mp4_pane_t2

0x2dd8,	// (0x0005c395) main_mp4_pane_t3_ParamLimits

0x2dd8,	// (0x0005c395) main_mp4_pane_t3

0xbdb3,	// (0x00065370) main_mp4_pane_t4_ParamLimits

0xbdb3,	// (0x00065370) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x00068ea5) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x00068ea5) main_mp4_pane_t

0xbdf3,	// (0x000653b0) mp4_progress_pane_ParamLimits

0xbdf3,	// (0x000653b0) mp4_progress_pane

0xbe37,	// (0x000653f4) mp4_rocker_pane_ParamLimits

0xbe37,	// (0x000653f4) mp4_rocker_pane

0x2e06,	// (0x0005c3c3) mp4_progress_pane_t1

0x2e1d,	// (0x0005c3da) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x00068eae) mp4_progress_pane_t

0x2e34,	// (0x0005c3f1) mup_progress_pane_cp04

0x2598,	// (0x0005bb55) mp4_rocker_pane_g1

0xbe55,	// (0x00065412) aid_cell_size_keypad2_ParamLimits

0xbe55,	// (0x00065412) aid_cell_size_keypad2

0xbe65,	// (0x00065422) dialer2_ne_pane_ParamLimits

0xbe65,	// (0x00065422) dialer2_ne_pane

0xbe71,	// (0x0006542e) grid_dialer2_keypad_pane_ParamLimits

0xbe71,	// (0x0006542e) grid_dialer2_keypad_pane

0x369e,	// (0x0005cc5b) bg_popup_call_pane_cp07_ParamLimits

0x369e,	// (0x0005cc5b) bg_popup_call_pane_cp07

0xbe7d,	// (0x0006543a) dialer2_ne_pane_t1_ParamLimits

0xbe7d,	// (0x0006543a) dialer2_ne_pane_t1

0xbea2,	// (0x0006545f) cell_dialer2_keypad_pane_ParamLimits

0xbea2,	// (0x0006545f) cell_dialer2_keypad_pane

0x2e5c,	// (0x0005c419) bg_button_pane_pane_cp04_ParamLimits

0x2e5c,	// (0x0005c419) bg_button_pane_pane_cp04

0xbeb7,	// (0x00065474) cell_dialer2_keypad_pane_g1_ParamLimits

0xbeb7,	// (0x00065474) cell_dialer2_keypad_pane_g1

0x84f3,	// (0x00061ab0) aid_placing_vt_set_content_ParamLimits

0x84f3,	// (0x00061ab0) aid_placing_vt_set_content

0x850d,	// (0x00061aca) aid_placing_vt_set_title_ParamLimits

0x850d,	// (0x00061aca) aid_placing_vt_set_title

0x6d05,	// (0x000602c2) main_image3_pane

0xbf2b,	// (0x000654e8) area_side_right_pane_cp01_ParamLimits

0xbf2b,	// (0x000654e8) area_side_right_pane_cp01

0x3c78,	// (0x0005d235) main_image3_pane_g1_ParamLimits

0x3c78,	// (0x0005d235) main_image3_pane_g1

0xbf58,	// (0x00065515) main_image3_pane_g2_ParamLimits

0xbf58,	// (0x00065515) main_image3_pane_g2

0xbf6f,	// (0x0006552c) main_image3_pane_g3_ParamLimits

0xbf6f,	// (0x0006552c) main_image3_pane_g3

0xbf86,	// (0x00065543) main_image3_pane_g4_ParamLimits

0xbf86,	// (0x00065543) main_image3_pane_g4

0x0003,

0xf900,	// (0x00068ebd) main_image3_pane_g_ParamLimits

0xf900,	// (0x00068ebd) main_image3_pane_g

0xbf9d,	// (0x0006555a) main_image3_pane_t1_ParamLimits

0xbf9d,	// (0x0006555a) main_image3_pane_t1

0xbfc2,	// (0x0006557f) main_image3_pane_t2_ParamLimits

0xbfc2,	// (0x0006557f) main_image3_pane_t2

0xbfe1,	// (0x0006559e) main_image3_pane_t3_ParamLimits

0xbfe1,	// (0x0006559e) main_image3_pane_t3

0x0003,

0xf909,	// (0x00068ec6) main_image3_pane_t_ParamLimits

0xf909,	// (0x00068ec6) main_image3_pane_t

0x6f51,	// (0x0006050e) grid_sctrl_middle_pane_cp01_ParamLimits

0x6f51,	// (0x0006050e) grid_sctrl_middle_pane_cp01

0xc03c,	// (0x000655f9) cell_sctrl_middle_pane_cp01_ParamLimits

0xc03c,	// (0x000655f9) cell_sctrl_middle_pane_cp01

0xc04d,	// (0x0006560a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc04d,	// (0x0006560a) cell_sctrl_middle_pane_cp01_g1

0x6d05,	// (0x000602c2) main_call4_pane

0xc05a,	// (0x00065617) aid_size_button_call4_ParamLimits

0xc05a,	// (0x00065617) aid_size_button_call4

0xc084,	// (0x00065641) call4_windows_pane_ParamLimits

0xc084,	// (0x00065641) call4_windows_pane

0xc098,	// (0x00065655) grid_call4_button_pane_ParamLimits

0xc098,	// (0x00065655) grid_call4_button_pane

0x2e80,	// (0x0005c43d) call4_windows_conf_pane

0xc0b2,	// (0x0006566f) popup_call4_audio_first_window_ParamLimits

0xc0b2,	// (0x0006566f) popup_call4_audio_first_window

0xc0d2,	// (0x0006568f) popup_call4_audio_second_window_ParamLimits

0xc0d2,	// (0x0006568f) popup_call4_audio_second_window

0x2eb3,	// (0x0005c470) popup_call4_audio_wait_window_ParamLimits

0x2eb3,	// (0x0005c470) popup_call4_audio_wait_window

0xc0e4,	// (0x000656a1) cell_call4_button_pane_ParamLimits

0xc0e4,	// (0x000656a1) cell_call4_button_pane

0x7b27,	// (0x000610e4) bg_button_pane_cp09_ParamLimits

0x7b27,	// (0x000610e4) bg_button_pane_cp09

0xc107,	// (0x000656c4) cell_call4_button_pane_g1_ParamLimits

0xc107,	// (0x000656c4) cell_call4_button_pane_g1

0xc114,	// (0x000656d1) cell_call4_button_pane_t1_ParamLimits

0xc114,	// (0x000656d1) cell_call4_button_pane_t1

0x2ef9,	// (0x0005c4b6) popup_call4_audio_conf_window_ParamLimits

0x2ef9,	// (0x0005c4b6) popup_call4_audio_conf_window

0xb446,	// (0x00064a03) mup3_progress_pane_t1_ParamLimits

0xb45c,	// (0x00064a19) mup3_progress_pane_t2_ParamLimits

0x28b6,	// (0x0005be73) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x00068d9f) mup3_progress_pane_t_ParamLimits

0x28cd,	// (0x0005be8a) mup_progress_pane_cp03_ParamLimits

0xb96e,	// (0x00064f2b) mup3_control_keys_pane_g4_copy1

0xbe21,	// (0x000653de) mp4_rocker2_pane_ParamLimits

0xbe21,	// (0x000653de) mp4_rocker2_pane

0x2f15,	// (0x0005c4d2) mp4_rocker2_pane_g1

0x2f0d,	// (0x0005c4ca) mp4_rocker2_pane_g2

0xc126,	// (0x000656e3) mp4_rocker2_pane_g3

0xc12e,	// (0x000656eb) mp4_rocker2_pane_g4

0xc136,	// (0x000656f3) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x00068ecf) mp4_rocker2_pane_g

0x6d05,	// (0x000602c2) main_camera4_pane

0x6d05,	// (0x000602c2) main_video4_pane

0xbb8e,	// (0x0006514b) main_video_tele_dialer_pane_t1_ParamLimits

0xbb8e,	// (0x0006514b) main_video_tele_dialer_pane_t1

0xbba0,	// (0x0006515d) main_video_tele_dialer_pane_t2_ParamLimits

0xbba0,	// (0x0006515d) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x00068e89) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x00068e89) main_video_tele_dialer_pane_t

0xc154,	// (0x00065711) cam4_autofocus_pane_ParamLimits

0xc154,	// (0x00065711) cam4_autofocus_pane

0xc160,	// (0x0006571d) cam4_image_uncrop_pane_ParamLimits

0xc160,	// (0x0006571d) cam4_image_uncrop_pane

0xc175,	// (0x00065732) cam4_indicators_pane_ParamLimits

0xc175,	// (0x00065732) cam4_indicators_pane

0xc18f,	// (0x0006574c) main_camera4_pane_g1_ParamLimits

0xc18f,	// (0x0006574c) main_camera4_pane_g1

0xc19b,	// (0x00065758) main_camera4_pane_g2_ParamLimits

0xc19b,	// (0x00065758) main_camera4_pane_g2

0xc19b,	// (0x00065758) main_camera4_pane_g3_ParamLimits

0xc19b,	// (0x00065758) main_camera4_pane_g3

0xc1a7,	// (0x00065764) main_camera4_pane_g4_ParamLimits

0xc1a7,	// (0x00065764) main_camera4_pane_g4

0xc1b3,	// (0x00065770) main_camera4_pane_g5_ParamLimits

0xc1b3,	// (0x00065770) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x00068eda) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x00068eda) main_camera4_pane_g

0xc1cd,	// (0x0006578a) main_camera4_pane_t1_ParamLimits

0xc1cd,	// (0x0006578a) main_camera4_pane_t1

0x27c7,	// (0x0005bd84) bg_tb_trans_pane_cp06

0xc21d,	// (0x000657da) cam4_indicators_pane_g1

0xc22d,	// (0x000657ea) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x00068ef5) cam4_indicators_pane_g

0xc24d,	// (0x0006580a) cam4_indicators_pane_t1

0xc275,	// (0x00065832) main_video4_pane_g1_ParamLimits

0xc275,	// (0x00065832) main_video4_pane_g1

0xc19b,	// (0x00065758) main_video4_pane_g2_ParamLimits

0xc19b,	// (0x00065758) main_video4_pane_g2

0xc19b,	// (0x00065758) main_video4_pane_g3_ParamLimits

0xc19b,	// (0x00065758) main_video4_pane_g3

0xc1a7,	// (0x00065764) main_video4_pane_g4_ParamLimits

0xc1a7,	// (0x00065764) main_video4_pane_g4

0x0004,

0xf93f,	// (0x00068efc) main_video4_pane_g_ParamLimits

0xf93f,	// (0x00068efc) main_video4_pane_g

0xc289,	// (0x00065846) vid4_indicators_pane_ParamLimits

0xc289,	// (0x00065846) vid4_indicators_pane

0xc2a7,	// (0x00065864) video4_image_uncrop_cif_pane_ParamLimits

0xc2a7,	// (0x00065864) video4_image_uncrop_cif_pane

0xc2b4,	// (0x00065871) video4_image_uncrop_nhd_pane_ParamLimits

0xc2b4,	// (0x00065871) video4_image_uncrop_nhd_pane

0xc160,	// (0x0006571d) video4_image_uncrop_vga_pane_ParamLimits

0xc160,	// (0x0006571d) video4_image_uncrop_vga_pane

0xed0f,	// (0x000682cc) bg_tb_trans_pane_cp07

0xc21d,	// (0x000657da) vid4_indicators_pane_g1

0xc2c1,	// (0x0006587e) vid4_indicators_pane_g2

0xc2d1,	// (0x0006588e) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x00068f07) vid4_indicators_pane_g

0xc2fe,	// (0x000658bb) vid4_indicators_pane_t1

0xc318,	// (0x000658d5) cam4_autofocus_pane_g1

0xc320,	// (0x000658dd) cam4_autofocus_pane_g2

0xc328,	// (0x000658e5) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x00068f12) cam4_autofocus_pane_g

0xc330,	// (0x000658ed) cam4_autofocus_pane_g3_copy1

0xbbbe,	// (0x0006517b) video_down_pane_cp_t1

0xbbcc,	// (0x00065189) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x00068e8e) video_down_pane_cp_t

0x6f51,	// (0x0006050e) popup_vitu2_window_ParamLimits

0x6f51,	// (0x0006050e) popup_vitu2_window

0xc338,	// (0x000658f5) aid_size_cell2_itu2_ParamLimits

0xc338,	// (0x000658f5) aid_size_cell2_itu2

0xc35a,	// (0x00065917) aid_size_cell_itu2_ParamLimits

0xc35a,	// (0x00065917) aid_size_cell_itu2

0x369e,	// (0x0005cc5b) bg_popup_window_pane_cp09_ParamLimits

0x369e,	// (0x0005cc5b) bg_popup_window_pane_cp09

0xc398,	// (0x00065955) field_vitu2_entry_pane_ParamLimits

0xc398,	// (0x00065955) field_vitu2_entry_pane

0xc3ae,	// (0x0006596b) grid_vitu2_function_pane_ParamLimits

0xc3ae,	// (0x0006596b) grid_vitu2_function_pane

0xc3e0,	// (0x0006599d) grid_vitu2_itu_pane_ParamLimits

0xc3e0,	// (0x0006599d) grid_vitu2_itu_pane

0xc436,	// (0x000659f3) cell_vitu2_itu_pane_ParamLimits

0xc436,	// (0x000659f3) cell_vitu2_itu_pane

0xc44b,	// (0x00065a08) cell_vitu2_function_pane_ParamLimits

0xc44b,	// (0x00065a08) cell_vitu2_function_pane

0x2f1d,	// (0x0005c4da) bg_popup_call_pane_cp08_ParamLimits

0x2f1d,	// (0x0005c4da) bg_popup_call_pane_cp08

0x2f36,	// (0x0005c4f3) field_vitu2_entry_pane_g1

0x2f42,	// (0x0005c4ff) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x00068f19) field_vitu2_entry_pane_g

0x6029,	// (0x0005f5e6) field_vitu2_entry_pane_t1_ParamLimits

0x6029,	// (0x0005f5e6) field_vitu2_entry_pane_t1

0x6044,	// (0x0005f601) field_vitu2_entry_pane_t2_ParamLimits

0x6044,	// (0x0005f601) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x00068f20) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x00068f20) field_vitu2_entry_pane_t

0xc48a,	// (0x00065a47) bg_button_pane_cp010_ParamLimits

0xc48a,	// (0x00065a47) bg_button_pane_cp010

0xc498,	// (0x00065a55) cell_vitu2_itu_pane_g1

0xc4b6,	// (0x00065a73) cell_vitu2_itu_pane_t1_ParamLimits

0xc4b6,	// (0x00065a73) cell_vitu2_itu_pane_t1

0x6061,	// (0x0005f61e) cell_vitu2_itu_pane_t2_ParamLimits

0x6061,	// (0x0005f61e) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x00068f2a) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x00068f2a) cell_vitu2_itu_pane_t

0xed0f,	// (0x000682cc) bg_button_pane_cp011

0xc508,	// (0x00065ac5) cell_vitu2_function_pane_g1

0x6d05,	// (0x000602c2) main_myfav_hc_pane

0xc021,	// (0x000655de) popup_image3_note_pane_ParamLimits

0xc021,	// (0x000655de) popup_image3_note_pane

0xc02d,	// (0x000655ea) popup_image3_tool_bar_pane_ParamLimits

0xc02d,	// (0x000655ea) popup_image3_tool_bar_pane

0x60cf,	// (0x0005f68c) cell_vitu2_itu_pane_t3_ParamLimits

0x60cf,	// (0x0005f68c) cell_vitu2_itu_pane_t3

0x6d05,	// (0x000602c2) bg_popup_trans_pane

0x2f9d,	// (0x0005c55a) grid_image3_tool_bar_pane

0x2fa7,	// (0x0005c564) bg_popup_trans_pane_g1

0x89e7,	// (0x00061fa4) bg_popup_trans_pane_g2

0x2faf,	// (0x0005c56c) bg_popup_trans_pane_g3

0x2fb7,	// (0x0005c574) bg_popup_trans_pane_g4

0x2fbf,	// (0x0005c57c) bg_popup_trans_pane_g5

0x2fc7,	// (0x0005c584) bg_popup_trans_pane_g6

0x2fcf,	// (0x0005c58c) bg_popup_trans_pane_g7

0x2fd7,	// (0x0005c594) bg_popup_trans_pane_g8

0x89c7,	// (0x00061f84) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x00068f31) bg_popup_trans_pane_g

0xed29,	// (0x000682e6) cell_image3_tool_bar_pane_ParamLimits

0xed29,	// (0x000682e6) cell_image3_tool_bar_pane

0x2598,	// (0x0005bb55) cell_image3_tool_bar_pane_g1

0x6d05,	// (0x000602c2) bg_popup_trans_pane_cp1

0x2fdf,	// (0x0005c59c) popup_image3_note_pane_t1

0x2fed,	// (0x0005c5aa) popup_image3_note_pane_t2

0x2ffb,	// (0x0005c5b8) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x00068f44) popup_image3_note_pane_t

0x3009,	// (0x0005c5c6) popup_image3_note_pane_t3_copy1

0xc51c,	// (0x00065ad9) bg_myfav_hc_instruction_pane_ParamLimits

0xc51c,	// (0x00065ad9) bg_myfav_hc_instruction_pane

0xc52e,	// (0x00065aeb) cell_myfav_contact_pane_ParamLimits

0xc52e,	// (0x00065aeb) cell_myfav_contact_pane

0xc548,	// (0x00065b05) cell_myfav_contact_pane_cp1_ParamLimits

0xc548,	// (0x00065b05) cell_myfav_contact_pane_cp1

0xc55e,	// (0x00065b1b) cell_myfav_contact_pane_cp2_ParamLimits

0xc55e,	// (0x00065b1b) cell_myfav_contact_pane_cp2

0xc574,	// (0x00065b31) cell_myfav_contact_pane_cp3_ParamLimits

0xc574,	// (0x00065b31) cell_myfav_contact_pane_cp3

0xc589,	// (0x00065b46) cell_myfav_contact_pane_cp4_ParamLimits

0xc589,	// (0x00065b46) cell_myfav_contact_pane_cp4

0xc59d,	// (0x00065b5a) cell_myfav_contact_pane_cp5_ParamLimits

0xc59d,	// (0x00065b5a) cell_myfav_contact_pane_cp5

0xc5b1,	// (0x00065b6e) cell_myfav_contact_pane_cp6_ParamLimits

0xc5b1,	// (0x00065b6e) cell_myfav_contact_pane_cp6

0xc5c5,	// (0x00065b82) cell_myfav_contact_pane_cp7_ParamLimits

0xc5c5,	// (0x00065b82) cell_myfav_contact_pane_cp7

0x3017,	// (0x0005c5d4) listscroll_gen_pane_cp05

0xc5dd,	// (0x00065b9a) main_myfav_hc_pane_g1_ParamLimits

0xc5dd,	// (0x00065b9a) main_myfav_hc_pane_g1

0xc5f3,	// (0x00065bb0) main_myfav_hc_pane_g2_ParamLimits

0xc5f3,	// (0x00065bb0) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x00068f4b) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x00068f4b) main_myfav_hc_pane_g

0xc61d,	// (0x00065bda) main_myfav_hc_pane_t1_ParamLimits

0xc61d,	// (0x00065bda) main_myfav_hc_pane_t1

0x3020,	// (0x0005c5dd) main_myfav_hc_pane_t2_ParamLimits

0x3020,	// (0x0005c5dd) main_myfav_hc_pane_t2

0x3032,	// (0x0005c5ef) main_myfav_hc_pane_t3_ParamLimits

0x3032,	// (0x0005c5ef) main_myfav_hc_pane_t3

0xc632,	// (0x00065bef) main_myfav_hc_pane_t4_ParamLimits

0xc632,	// (0x00065bef) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x00068f52) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x00068f52) main_myfav_hc_pane_t

0x2598,	// (0x0005bb55) bg_myfav_hc_instruction_pane_g1

0x3044,	// (0x0005c601) cell_myfav_contact_pane_g1_ParamLimits

0x3044,	// (0x0005c601) cell_myfav_contact_pane_g1

0x3044,	// (0x0005c601) cell_myfav_contact_pane_g2_ParamLimits

0x3044,	// (0x0005c601) cell_myfav_contact_pane_g2

0x3050,	// (0x0005c60d) cell_myfav_contact_pane_g3_ParamLimits

0x3050,	// (0x0005c60d) cell_myfav_contact_pane_g3

0x28a0,	// (0x0005be5d) cell_myfav_contact_pane_g4_ParamLimits

0x28a0,	// (0x0005be5d) cell_myfav_contact_pane_g4

0x305d,	// (0x0005c61a) cell_myfav_contact_pane_g5_ParamLimits

0x305d,	// (0x0005c61a) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x00068f5d) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x00068f5d) cell_myfav_contact_pane_g

0xc609,	// (0x00065bc6) main_myfav_hc_pane_g3_ParamLimits

0xc609,	// (0x00065bc6) main_myfav_hc_pane_g3

0x6e9f,	// (0x0006045c) popup_adpt_find_window

0xc656,	// (0x00065c13) afind_page_pane_ParamLimits

0xc656,	// (0x00065c13) afind_page_pane

0xc663,	// (0x00065c20) aid_size_cell_afind_ParamLimits

0xc663,	// (0x00065c20) aid_size_cell_afind

0xc67d,	// (0x00065c3a) bg_popup_sub_pane_cp09_ParamLimits

0xc67d,	// (0x00065c3a) bg_popup_sub_pane_cp09

0xc68a,	// (0x00065c47) find_pane_cp01_ParamLimits

0xc68a,	// (0x00065c47) find_pane_cp01

0x3069,	// (0x0005c626) grid_afind_control_pane_ParamLimits

0x3069,	// (0x0005c626) grid_afind_control_pane

0xc697,	// (0x00065c54) grid_afind_pane_ParamLimits

0xc697,	// (0x00065c54) grid_afind_pane

0xc6ad,	// (0x00065c6a) cell_afind_pane_ParamLimits

0xc6ad,	// (0x00065c6a) cell_afind_pane

0x2598,	// (0x0005bb55) afind_page_pane_g1

0xc6e3,	// (0x00065ca0) afind_page_pane_g2

0xc6ec,	// (0x00065ca9) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x00068f68) afind_page_pane_g

0xc6f5,	// (0x00065cb2) afind_page_pane_t1

0x307d,	// (0x0005c63a) cell_afind_grid_control_pane_ParamLimits

0x307d,	// (0x0005c63a) cell_afind_grid_control_pane

0x2e5c,	// (0x0005c419) bg_button_pane_cp69_ParamLimits

0x2e5c,	// (0x0005c419) bg_button_pane_cp69

0xc715,	// (0x00065cd2) cell_afind_pane_g1_ParamLimits

0xc715,	// (0x00065cd2) cell_afind_pane_g1

0xc722,	// (0x00065cdf) cell_afind_pane_t1_ParamLimits

0xc722,	// (0x00065cdf) cell_afind_pane_t1

0x848e,	// (0x00061a4b) bg_button_pane_cp72

0x308c,	// (0x0005c649) cell_afind_grid_control_pane_g1

0xa0c4,	// (0x00063681) aid_image_placing_area_ParamLimits

0xa0c4,	// (0x00063681) aid_image_placing_area

0x2b2c,	// (0x0005c0e9) field_vitu_entry_pane_g1_ParamLimits

0x2b2c,	// (0x0005c0e9) field_vitu_entry_pane_g1

0x2b38,	// (0x0005c0f5) field_vitu_entry_pane_g2_ParamLimits

0x2b38,	// (0x0005c0f5) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x00068e19) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x00068e19) field_vitu_entry_pane_g

0xb9e9,	// (0x00064fa6) cell_vitu_itu_pane_g1_ParamLimits

0xba2b,	// (0x00064fe8) cell_vitu_itu_pane_t3_ParamLimits

0xba2b,	// (0x00064fe8) cell_vitu_itu_pane_t3

0x2e06,	// (0x0005c3c3) mp4_progress_pane_t1_ParamLimits

0x2e1d,	// (0x0005c3da) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x00068eae) mp4_progress_pane_t_ParamLimits

0x2e34,	// (0x0005c3f1) mup_progress_pane_cp04_ParamLimits

0xc644,	// (0x00065c01) main_myfav_hc_pane_t5_ParamLimits

0xc644,	// (0x00065c01) main_myfav_hc_pane_t5

0x5d14,	// (0x0005f2d1) aid_zoom_text_primary

0x6e9f,	// (0x0006045c) popup_adpt_find_window_ParamLimits

0xed0f,	// (0x000682cc) main_cam_set_pane

0xc183,	// (0x00065740) cam4_zoom_pane_ParamLimits

0xc183,	// (0x00065740) cam4_zoom_pane

0xc734,	// (0x00065cf1) main_cam_set_pane_g1_ParamLimits

0xc734,	// (0x00065cf1) main_cam_set_pane_g1

0xc742,	// (0x00065cff) main_cam_set_pane_g2_ParamLimits

0xc742,	// (0x00065cff) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x00068f6f) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x00068f6f) main_cam_set_pane_g

0xc74e,	// (0x00065d0b) main_cam_set_pane_t1_ParamLimits

0xc74e,	// (0x00065d0b) main_cam_set_pane_t1

0xc760,	// (0x00065d1d) main_cset_listscroll_pane_ParamLimits

0xc760,	// (0x00065d1d) main_cset_listscroll_pane

0xc789,	// (0x00065d46) main_cset_slider_pane_ParamLimits

0xc789,	// (0x00065d46) main_cset_slider_pane

0x309d,	// (0x0005c65a) main_cset_list_pane_ParamLimits

0x309d,	// (0x0005c65a) main_cset_list_pane

0x30ad,	// (0x0005c66a) scroll_pane_cp028

0xc7a8,	// (0x00065d65) aid_area_touch_slider

0xc7c4,	// (0x00065d81) cset_slider_pane

0xc7ee,	// (0x00065dab) main_cset_slider_pane_g1

0xc803,	// (0x00065dc0) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x00068f74) main_cset_slider_pane_g

0x30e6,	// (0x0005c6a3) main_cset_slider_pane_t1

0xc8bf,	// (0x00065e7c) main_cset_slider_pane_t2

0xc8d9,	// (0x00065e96) main_cset_slider_pane_t3

0xc8f3,	// (0x00065eb0) main_cset_slider_pane_t4

0xc90d,	// (0x00065eca) main_cset_slider_pane_t5

0xc927,	// (0x00065ee4) main_cset_slider_pane_t6

0xc93c,	// (0x00065ef9) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x00068f99) main_cset_slider_pane_t

0xca40,	// (0x00065ffd) cset_list_set_pane_ParamLimits

0xca40,	// (0x00065ffd) cset_list_set_pane

0xca50,	// (0x0006600d) aid_position_infowindow_above

0xca58,	// (0x00066015) aid_position_infowindow_below

0xca60,	// (0x0006601d) cset_list_set_pane_g1_ParamLimits

0xca60,	// (0x0006601d) cset_list_set_pane_g1

0x611c,	// (0x0005f6d9) cset_list_set_pane_g3_ParamLimits

0x611c,	// (0x0005f6d9) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x00068fb8) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x00068fb8) cset_list_set_pane_g

0x612b,	// (0x0005f6e8) cset_list_set_pane_t1_ParamLimits

0x612b,	// (0x0005f6e8) cset_list_set_pane_t1

0xed0f,	// (0x000682cc) list_highlight_pane_cp021_ParamLimits

0xed0f,	// (0x000682cc) list_highlight_pane_cp021

0x0e2a,	// (0x0005a3e7) cset_slider_pane_g1

0x0e3c,	// (0x0005a3f9) cset_slider_pane_g2

0x0e33,	// (0x0005a3f0) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x00068fbd) cset_slider_pane_g

0xca6c,	// (0x00066029) aid_area_touch_cam4_zoom

0xca74,	// (0x00066031) cam4_zoom_cont_pane

0xca7c,	// (0x00066039) cam4_zoom_pane_g1

0xca84,	// (0x00066041) cam4_zoom_pane_g2

0xca8c,	// (0x00066049) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x00068fc4) cam4_zoom_pane_g

0x3a1b,	// (0x0005cfd8) cam4_zoom_cont_pane_g1

0x3a24,	// (0x0005cfe1) cam4_zoom_cont_pane_g2

0x3a2d,	// (0x0005cfea) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x00068fcb) cam4_zoom_cont_pane_g

0xc074,	// (0x00065631) call4_image_pane_ParamLimits

0xc074,	// (0x00065631) call4_image_pane

0x2e80,	// (0x0005c43d) call4_windows_conf_pane_ParamLimits

0x2e93,	// (0x0005c450) popup_call4_audio_in_window_ParamLimits

0x2e93,	// (0x0005c450) popup_call4_audio_in_window

0x6d05,	// (0x000602c2) bg_popup_call2_act_pane_cp02

0x2ef1,	// (0x0005c4ae) call4_list_conf_pane

0x2598,	// (0x0005bb55) call4_image_pane_g1

0x2598,	// (0x0005bb55) call4_image_pane_g2

0x0001,

0xf722,	// (0x00068cdf) call4_image_pane_g

0x31a7,	// (0x0005c764) list_single_graphic_popup_conf4_pane_ParamLimits

0x31a7,	// (0x0005c764) list_single_graphic_popup_conf4_pane

0x6d05,	// (0x000602c2) list_highlight_pane_cp022

0x31ba,	// (0x0005c777) list_single_graphic_popup_conf4_pane_g1

0xec28,	// (0x000681e5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x00068fd2) list_single_graphic_popup_conf4_pane_g

0x31c2,	// (0x0005c77f) list_single_graphic_popup_conf4_pane_t1

0x8605,	// (0x00061bc2) popup_vtel_slider_window_ParamLimits

0x8605,	// (0x00061bc2) popup_vtel_slider_window

0x2e4a,	// (0x0005c407) dialer2_ne_pane_t2_ParamLimits

0x2e4a,	// (0x0005c407) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x00068eb3) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x00068eb3) dialer2_ne_pane_t

0xed0f,	// (0x000682cc) bg_popup_sub_pane_cp010_ParamLimits

0xed0f,	// (0x000682cc) bg_popup_sub_pane_cp010

0xca94,	// (0x00066051) popup_vtel_slider_window_g1_ParamLimits

0xca94,	// (0x00066051) popup_vtel_slider_window_g1

0xcaa0,	// (0x0006605d) popup_vtel_slider_window_g2_ParamLimits

0xcaa0,	// (0x0006605d) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x00068fd7) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x00068fd7) popup_vtel_slider_window_g

0xcae6,	// (0x000660a3) vtel_slider_pane_ParamLimits

0xcae6,	// (0x000660a3) vtel_slider_pane

0xcaf5,	// (0x000660b2) vtel_slider_pane_g1_ParamLimits

0xcaf5,	// (0x000660b2) vtel_slider_pane_g1

0xcb02,	// (0x000660bf) vtel_slider_pane_g2_ParamLimits

0xcb02,	// (0x000660bf) vtel_slider_pane_g2

0xcb0f,	// (0x000660cc) vtel_slider_pane_g3_ParamLimits

0xcb0f,	// (0x000660cc) vtel_slider_pane_g3

0xcaf5,	// (0x000660b2) vtel_slider_pane_g4_ParamLimits

0xcaf5,	// (0x000660b2) vtel_slider_pane_g4

0xcb1c,	// (0x000660d9) vtel_slider_pane_g5_ParamLimits

0xcb1c,	// (0x000660d9) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x00068fe0) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x00068fe0) vtel_slider_pane_g

0x6d05,	// (0x000602c2) main_gallery2_pane

0xc380,	// (0x0006593d) aid_size_row_itut2_dropdow_list_ParamLimits

0xc380,	// (0x0006593d) aid_size_row_itut2_dropdow_list

0xc3c6,	// (0x00065983) grid_vitu2_function_top_pane_ParamLimits

0xc3c6,	// (0x00065983) grid_vitu2_function_top_pane

0xc400,	// (0x000659bd) popup_vitu2_dropdown_list_window_ParamLimits

0xc400,	// (0x000659bd) popup_vitu2_dropdown_list_window

0xc41a,	// (0x000659d7) popup_vitu2_match_list_window

0xcb29,	// (0x000660e6) cell_vitu2_function_top_pane_ParamLimits

0xcb29,	// (0x000660e6) cell_vitu2_function_top_pane

0xcb49,	// (0x00066106) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcb49,	// (0x00066106) cell_vitu2_function_top_pane_cp01

0xcb69,	// (0x00066126) cell_vitu2_function_top_wide_pane_ParamLimits

0xcb69,	// (0x00066126) cell_vitu2_function_top_wide_pane

0xed0f,	// (0x000682cc) bg_button_pane_cp012

0xcb87,	// (0x00066144) cell_vitu2_function_top_pane_g1

0xcb96,	// (0x00066153) bg_button_pane_cp013_ParamLimits

0xcb96,	// (0x00066153) bg_button_pane_cp013

0xcbb2,	// (0x0006616f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcbb2,	// (0x0006616f) cell_vitu2_function_top_wide_pane_g1

0x6f51,	// (0x0006050e) bg_popup_sub_pane_cp20

0xcbca,	// (0x00066187) list_vitu2_match_list_pane

0x2fa7,	// (0x0005c564) bg_popup_sub_pane_cp20_g1

0x2faf,	// (0x0005c56c) bg_popup_sub_pane_cp20_g2

0x89e7,	// (0x00061fa4) bg_popup_sub_pane_cp20_g3

0x2fb7,	// (0x0005c574) bg_popup_sub_pane_cp20_g4

0x89c7,	// (0x00061f84) bg_popup_sub_pane_cp20_g5

0x31de,	// (0x0005c79b) bg_popup_sub_pane_cp20_g6

0x2fc7,	// (0x0005c584) bg_popup_sub_pane_cp20_g7

0x2fcf,	// (0x0005c58c) bg_popup_sub_pane_cp20_g8

0x2fd7,	// (0x0005c594) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x00068feb) bg_popup_sub_pane_cp20_g

0xcbe2,	// (0x0006619f) list_vitu2_match_list_item_pane_ParamLimits

0xcbe2,	// (0x0006619f) list_vitu2_match_list_item_pane

0xcbf4,	// (0x000661b1) list_vitu2_match_list_item_pane_t1

0x6d05,	// (0x000602c2) bg_popup_sub_pane_cp21

0xeb66,	// (0x00068123) grid_vitu2_dropdown_list_pane

0xcc02,	// (0x000661bf) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcc02,	// (0x000661bf) cell_vitu2_dropdown_list_char_pane

0xcc23,	// (0x000661e0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xcc23,	// (0x000661e0) cell_vitu2_dropdown_list_ctrl_pane

0x31f8,	// (0x0005c7b5) cell_vitu2_dropdown_list_char_pane_g1

0x31ef,	// (0x0005c7ac) cell_vitu2_dropdown_list_char_pane_g2

0x31e6,	// (0x0005c7a3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x00069008) cell_vitu2_dropdown_list_char_pane_g

0xcc4f,	// (0x0006620c) cell_vitu2_dropdown_list_char_pane_t1

0xcc5d,	// (0x0006621a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcc5d,	// (0x0006621a) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcc6d,	// (0x0006622a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcc6d,	// (0x0006622a) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcc7e,	// (0x0006623b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcc7e,	// (0x0006623b) cell_vitu2_dropdown_list_ctrl_pane_g3

0xcc8e,	// (0x0006624b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xcc8e,	// (0x0006624b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x27c7,	// (0x0005bd84) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x27c7,	// (0x0005bd84) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x0006900f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x0006900f) cell_vitu2_dropdown_list_ctrl_pane_g

0xcca7,	// (0x00066264) aid_size_cell_gallery2_ParamLimits

0xcca7,	// (0x00066264) aid_size_cell_gallery2

0xccb5,	// (0x00066272) grid_gallery2_pane_ParamLimits

0xccb5,	// (0x00066272) grid_gallery2_pane

0xccc2,	// (0x0006627f) scroll_pane_cp029_ParamLimits

0xccc2,	// (0x0006627f) scroll_pane_cp029

0xccce,	// (0x0006628b) cell_gallery2_pane_ParamLimits

0xccce,	// (0x0006628b) cell_gallery2_pane

0x3201,	// (0x0005c7be) cell_gallery2_pane_g2

0xccfa,	// (0x000662b7) cell_gallery2_pane_g3

0x320b,	// (0x0005c7c8) cell_gallery2_pane_g4

0x3213,	// (0x0005c7d0) cell_gallery2_pane_g5

0x0cd4,	// (0x0005a291) grid_highlight_pane_cp10

0xc41a,	// (0x000659d7) popup_vitu2_match_list_window_ParamLimits

0xc42a,	// (0x000659e7) popup_vitu2_query_window_ParamLimits

0xc42a,	// (0x000659e7) popup_vitu2_query_window

0x6d05,	// (0x000602c2) bg_vitu2_candi_button_pane

0x31f8,	// (0x0005c7b5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x31ef,	// (0x0005c7ac) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x31e6,	// (0x0005c7a3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x617a,	// (0x0005f737) bg_button_pane_cp015

0xcd02,	// (0x000662bf) bg_button_pane_cp016

0xcd0c,	// (0x000662c9) bg_button_pane_cp017

0xed0f,	// (0x000682cc) bg_popup_sub_pane_cp22

0x321b,	// (0x0005c7d8) popup_vitu2_query_window_g1

0x618f,	// (0x0005f74c) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x0006901a) popup_vitu2_query_window_g

0x619b,	// (0x0005f758) popup_vitu2_query_window_t1_ParamLimits

0x619b,	// (0x0005f758) popup_vitu2_query_window_t1

0x61c3,	// (0x0005f780) popup_vitu2_query_window_t2_ParamLimits

0x61c3,	// (0x0005f780) popup_vitu2_query_window_t2

0x61d5,	// (0x0005f792) popup_vitu2_query_window_t3_ParamLimits

0x61d5,	// (0x0005f792) popup_vitu2_query_window_t3

0xcd27,	// (0x000662e4) popup_vitu2_query_window_t4_ParamLimits

0xcd27,	// (0x000662e4) popup_vitu2_query_window_t4

0xcd39,	// (0x000662f6) popup_vitu2_query_window_t5_ParamLimits

0xcd39,	// (0x000662f6) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x0006901f) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x0006901f) popup_vitu2_query_window_t

0x3095,	// (0x0005c652) main_cset_text_pane

0xc7a8,	// (0x00065d65) aid_area_touch_slider_ParamLimits

0xc7c4,	// (0x00065d81) cset_slider_pane_ParamLimits

0xc7ee,	// (0x00065dab) main_cset_slider_pane_g1_ParamLimits

0xc803,	// (0x00065dc0) main_cset_slider_pane_g2_ParamLimits

0x30b6,	// (0x0005c673) main_cset_slider_pane_g3_ParamLimits

0x30b6,	// (0x0005c673) main_cset_slider_pane_g3

0xc818,	// (0x00065dd5) main_cset_slider_pane_g4_ParamLimits

0xc818,	// (0x00065dd5) main_cset_slider_pane_g4

0xc827,	// (0x00065de4) main_cset_slider_pane_g5_ParamLimits

0xc827,	// (0x00065de4) main_cset_slider_pane_g5

0xc833,	// (0x00065df0) main_cset_slider_pane_g6_ParamLimits

0xc833,	// (0x00065df0) main_cset_slider_pane_g6

0xf9b7,	// (0x00068f74) main_cset_slider_pane_g_ParamLimits

0x30e6,	// (0x0005c6a3) main_cset_slider_pane_t1_ParamLimits

0xc8bf,	// (0x00065e7c) main_cset_slider_pane_t2_ParamLimits

0xc8d9,	// (0x00065e96) main_cset_slider_pane_t3_ParamLimits

0xc8f3,	// (0x00065eb0) main_cset_slider_pane_t4_ParamLimits

0xc90d,	// (0x00065eca) main_cset_slider_pane_t5_ParamLimits

0xc927,	// (0x00065ee4) main_cset_slider_pane_t6_ParamLimits

0xc93c,	// (0x00065ef9) main_cset_slider_pane_t7_ParamLimits

0xc966,	// (0x00065f23) main_cset_slider_pane_t8_ParamLimits

0xc966,	// (0x00065f23) main_cset_slider_pane_t8

0xc98e,	// (0x00065f4b) main_cset_slider_pane_t9_ParamLimits

0xc98e,	// (0x00065f4b) main_cset_slider_pane_t9

0xc9b6,	// (0x00065f73) main_cset_slider_pane_t10_ParamLimits

0xc9b6,	// (0x00065f73) main_cset_slider_pane_t10

0xc9de,	// (0x00065f9b) main_cset_slider_pane_t11_ParamLimits

0xc9de,	// (0x00065f9b) main_cset_slider_pane_t11

0xca06,	// (0x00065fc3) main_cset_slider_pane_t12_ParamLimits

0xca06,	// (0x00065fc3) main_cset_slider_pane_t12

0xca23,	// (0x00065fe0) main_cset_slider_pane_t13_ParamLimits

0xca23,	// (0x00065fe0) main_cset_slider_pane_t13

0xf9dc,	// (0x00068f99) main_cset_slider_pane_t_ParamLimits

0x6d05,	// (0x000602c2) bg_popup_sub_pane_cp011

0x3227,	// (0x0005c7e4) main_cset_text_pane_g1

0x322f,	// (0x0005c7ec) main_cset_text_pane_t1

0x323d,	// (0x0005c7fa) main_cset_text_pane_t2

0x324b,	// (0x0005c808) main_cset_text_pane_t3

0x3259,	// (0x0005c816) main_cset_text_pane_t4

0x3267,	// (0x0005c824) main_cset_text_pane_t5

0x3275,	// (0x0005c832) main_cset_text_pane_t6

0x3283,	// (0x0005c840) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x0006902a) main_cset_text_pane_t

0x6d05,	// (0x000602c2) main_cam4_burst_pane

0x6d05,	// (0x000602c2) main_cam5_pane

0xc703,	// (0x00065cc0) bg_button_pane_cp019

0xc70c,	// (0x00065cc9) bg_button_pane_cp020

0x30c2,	// (0x0005c67f) main_cset_slider_pane_g7_ParamLimits

0x30c2,	// (0x0005c67f) main_cset_slider_pane_g7

0x30ce,	// (0x0005c68b) main_cset_slider_pane_g8_ParamLimits

0x30ce,	// (0x0005c68b) main_cset_slider_pane_g8

0xc847,	// (0x00065e04) main_cset_slider_pane_g9_ParamLimits

0xc847,	// (0x00065e04) main_cset_slider_pane_g9

0xc853,	// (0x00065e10) main_cset_slider_pane_g10_ParamLimits

0xc853,	// (0x00065e10) main_cset_slider_pane_g10

0xc85f,	// (0x00065e1c) main_cset_slider_pane_g11_ParamLimits

0xc85f,	// (0x00065e1c) main_cset_slider_pane_g11

0xc86b,	// (0x00065e28) main_cset_slider_pane_g12_ParamLimits

0xc86b,	// (0x00065e28) main_cset_slider_pane_g12

0xc877,	// (0x00065e34) main_cset_slider_pane_g13_ParamLimits

0xc877,	// (0x00065e34) main_cset_slider_pane_g13

0xc883,	// (0x00065e40) main_cset_slider_pane_g14_ParamLimits

0xc883,	// (0x00065e40) main_cset_slider_pane_g14

0xc88f,	// (0x00065e4c) main_cset_slider_pane_g15_ParamLimits

0xc88f,	// (0x00065e4c) main_cset_slider_pane_g15

0x3114,	// (0x0005c6d1) main_cset_slider_pane_t14_ParamLimits

0x3114,	// (0x0005c6d1) main_cset_slider_pane_t14

0x314d,	// (0x0005c70a) main_cset_slider_pane_t15_ParamLimits

0x314d,	// (0x0005c70a) main_cset_slider_pane_t15

0xcd4b,	// (0x00066308) aid_cam4_burst_size_cell_ParamLimits

0xcd4b,	// (0x00066308) aid_cam4_burst_size_cell

0xcd67,	// (0x00066324) grid_cam4_burst_pane_ParamLimits

0xcd67,	// (0x00066324) grid_cam4_burst_pane

0xcd89,	// (0x00066346) linegrid_cam4_burst_pane_ParamLimits

0xcd89,	// (0x00066346) linegrid_cam4_burst_pane

0xcda7,	// (0x00066364) scroll_pane_cp30_ParamLimits

0xcda7,	// (0x00066364) scroll_pane_cp30

0xcdb3,	// (0x00066370) cell_cam4_burst_pane_ParamLimits

0xcdb3,	// (0x00066370) cell_cam4_burst_pane

0x3291,	// (0x0005c84e) linegrid_cam4_burst_pane_g1_ParamLimits

0x3291,	// (0x0005c84e) linegrid_cam4_burst_pane_g1

0xcdeb,	// (0x000663a8) linegrid_cam4_burst_pane_g2_ParamLimits

0xcdeb,	// (0x000663a8) linegrid_cam4_burst_pane_g2

0x329e,	// (0x0005c85b) linegrid_cam4_burst_pane_g3_ParamLimits

0x329e,	// (0x0005c85b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x00069039) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x00069039) linegrid_cam4_burst_pane_g

0xcdfc,	// (0x000663b9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcdfc,	// (0x000663b9) linegrid_cam4_burst_pane_g3_copy1

0x32ab,	// (0x0005c868) linegrid_cam4_burst_pane_g4_ParamLimits

0x32ab,	// (0x0005c868) linegrid_cam4_burst_pane_g4

0xce16,	// (0x000663d3) linegrid_cam4_burst_pane_g5_ParamLimits

0xce16,	// (0x000663d3) linegrid_cam4_burst_pane_g5

0xce27,	// (0x000663e4) linegrid_cam4_burst_pane_g6_ParamLimits

0xce27,	// (0x000663e4) linegrid_cam4_burst_pane_g6

0x32b8,	// (0x0005c875) linegrid_cam4_burst_pane_g7_ParamLimits

0x32b8,	// (0x0005c875) linegrid_cam4_burst_pane_g7

0xce38,	// (0x000663f5) cell_cam4_burst_pane_g1

0x32d1,	// (0x0005c88e) main_cam5_pane_t1_ParamLimits

0x32d1,	// (0x0005c88e) main_cam5_pane_t1

0x32e3,	// (0x0005c8a0) main_cam5_pane_t2_ParamLimits

0x32e3,	// (0x0005c8a0) main_cam5_pane_t2

0x32f5,	// (0x0005c8b2) main_cam5_pane_t3_ParamLimits

0x32f5,	// (0x0005c8b2) main_cam5_pane_t3

0x3307,	// (0x0005c8c4) main_cam5_pane_t4_ParamLimits

0x3307,	// (0x0005c8c4) main_cam5_pane_t4

0x331d,	// (0x0005c8da) main_cam5_pane_t5_ParamLimits

0x331d,	// (0x0005c8da) main_cam5_pane_t5

0x332f,	// (0x0005c8ec) main_cam5_pane_t6_ParamLimits

0x332f,	// (0x0005c8ec) main_cam5_pane_t6

0x3341,	// (0x0005c8fe) main_cam5_pane_t7_ParamLimits

0x3341,	// (0x0005c8fe) main_cam5_pane_t7

0x3353,	// (0x0005c910) main_cam5_pane_t8_ParamLimits

0x3353,	// (0x0005c910) main_cam5_pane_t8

0x336f,	// (0x0005c92c) main_cam5_pane_t9_ParamLimits

0x336f,	// (0x0005c92c) main_cam5_pane_t9

0x3381,	// (0x0005c93e) main_cam5_pane_t10_ParamLimits

0x3381,	// (0x0005c93e) main_cam5_pane_t10

0x3393,	// (0x0005c950) main_cam5_pane_t11_ParamLimits

0x3393,	// (0x0005c950) main_cam5_pane_t11

0x33a5,	// (0x0005c962) main_cam5_pane_t12_ParamLimits

0x33a5,	// (0x0005c962) main_cam5_pane_t12

0x33ba,	// (0x0005c977) main_cam5_pane_t13_ParamLimits

0x33ba,	// (0x0005c977) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x00069045) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x00069045) main_cam5_pane_t

0x6f1a,	// (0x000604d7) popup_scut_keymap_window_ParamLimits

0x6f1a,	// (0x000604d7) popup_scut_keymap_window

0xce4b,	// (0x00066408) aid_size_cell_brow_shortcut

0x0cd4,	// (0x0005a291) bg_popup_window_pane_cp010

0xce57,	// (0x00066414) grid_scut_pane

0xce61,	// (0x0006641e) cell_scut_pane_ParamLimits

0xce61,	// (0x0006641e) cell_scut_pane

0xce76,	// (0x00066433) cell_scut_pane_g1

0x33d7,	// (0x0005c994) cell_scut_pane_t1

0x33e6,	// (0x0005c9a3) cell_scut_pane_t2

0xce7f,	// (0x0006643c) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x00069060) cell_scut_pane_t

0xb0d3,	// (0x00064690) main_mup3_pane_g8_ParamLimits

0xb0d3,	// (0x00064690) main_mup3_pane_g8

0xc38c,	// (0x00065949) area_vitu2_query_pane_ParamLimits

0xc38c,	// (0x00065949) area_vitu2_query_pane

0x6182,	// (0x0005f73f) input_focus_pane_cp08

0x33f5,	// (0x0005c9b2) area_vitu2_query_pane_g1

0x61fd,	// (0x0005f7ba) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x00069067) area_vitu2_query_pane_g

0xce8d,	// (0x0006644a) area_vitu2_query_pane_t1_ParamLimits

0xce8d,	// (0x0006644a) area_vitu2_query_pane_t1

0xce9f,	// (0x0006645c) area_vitu2_query_pane_t2_ParamLimits

0xce9f,	// (0x0006645c) area_vitu2_query_pane_t2

0x620c,	// (0x0005f7c9) area_vitu2_query_pane_t3_ParamLimits

0x620c,	// (0x0005f7c9) area_vitu2_query_pane_t3

0x6234,	// (0x0005f7f1) area_vitu2_query_pane_t4_ParamLimits

0x6234,	// (0x0005f7f1) area_vitu2_query_pane_t4

0x625c,	// (0x0005f819) area_vitu2_query_pane_t5_ParamLimits

0x625c,	// (0x0005f819) area_vitu2_query_pane_t5

0x6284,	// (0x0005f841) area_vitu2_query_pane_t6_ParamLimits

0x6284,	// (0x0005f841) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x0006906c) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x0006906c) area_vitu2_query_pane_t

0xceb1,	// (0x0006646e) bg_button_pane_cp018

0xcebe,	// (0x0006647b) bg_button_pane_cp021

0x62d0,	// (0x0005f88d) bg_button_pane_cp022

0x62df,	// (0x0005f89c) input_focus_pane_cp09

0x995a,	// (0x00062f17) aid_size_touch_mv_arrow_left

0x0bad,	// (0x0005a16a) aid_size_touch_mv_arrow_right

0xc8a7,	// (0x00065e64) main_cset_slider_pane_g16_ParamLimits

0xc8a7,	// (0x00065e64) main_cset_slider_pane_g16

0xc8b3,	// (0x00065e70) main_cset_slider_pane_g17_ParamLimits

0xc8b3,	// (0x00065e70) main_cset_slider_pane_g17

0xce38,	// (0x000663f5) cell_cam4_burst_pane_g1_ParamLimits

0x6d05,	// (0x000602c2) compa_mode_pane

0xcaac,	// (0x00066069) popup_vtel_slider_window_g3_ParamLimits

0xcaac,	// (0x00066069) popup_vtel_slider_window_g3

0xcac0,	// (0x0006607d) popup_vtel_slider_window_g4_ParamLimits

0xcac0,	// (0x0006607d) popup_vtel_slider_window_g4

0xcad4,	// (0x00066091) popup_vtel_slider_window_t1_ParamLimits

0xcad4,	// (0x00066091) popup_vtel_slider_window_t1

0x6d05,	// (0x000602c2) main_cl_pane

0x217b,	// (0x0005b738) popup_imed_adjust2_window_ParamLimits

0x2155,	// (0x0005b712) bg_tb_trans_pane_cp05_ParamLimits

0x2a61,	// (0x0005c01e) popup_imed_adjust2_window_g1_ParamLimits

0x2a70,	// (0x0005c02d) popup_imed_adjust2_window_g2_ParamLimits

0x2a70,	// (0x0005c02d) popup_imed_adjust2_window_g2

0x2a7c,	// (0x0005c039) popup_imed_adjust2_window_g3_ParamLimits

0x2a7c,	// (0x0005c039) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x00068ddd) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x00068ddd) popup_imed_adjust2_window_g

0x2a88,	// (0x0005c045) popup_imed_adjust2_window_t1_ParamLimits

0x2aa0,	// (0x0005c05d) slider_imed_adjust_pane_ParamLimits

0x2ab4,	// (0x0005c071) slider_imed_adjust_pane_g1_ParamLimits

0x2ac4,	// (0x0005c081) slider_imed_adjust_pane_g2_ParamLimits

0x2ad4,	// (0x0005c091) slider_imed_adjust_pane_g3_ParamLimits

0x2ae5,	// (0x0005c0a2) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x00068de4) slider_imed_adjust_pane_g_ParamLimits

0xc13e,	// (0x000656fb) aid_touch_area_cam4_ParamLimits

0xc13e,	// (0x000656fb) aid_touch_area_cam4

0xc14c,	// (0x00065709) battery_pane_cp01

0xc1c1,	// (0x0006577e) main_camera4_pane_g6_ParamLimits

0xc1c1,	// (0x0006577e) main_camera4_pane_g6

0xc1df,	// (0x0006579c) main_camera4_pane_t2_ParamLimits

0xc1df,	// (0x0006579c) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x00068ee7) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x00068ee7) main_camera4_pane_t

0xc267,	// (0x00065824) aid_touch_area_vid4_ParamLimits

0xc267,	// (0x00065824) aid_touch_area_vid4

0xc1c1,	// (0x0006577e) main_video4_pane_g5_ParamLimits

0xc1c1,	// (0x0006577e) main_video4_pane_g5

0xc297,	// (0x00065854) vid4_progress_pane_ParamLimits

0xc297,	// (0x00065854) vid4_progress_pane

0x30da,	// (0x0005c697) main_cset_slider_pane_g18_ParamLimits

0x30da,	// (0x0005c697) main_cset_slider_pane_g18

0x32c5,	// (0x0005c882) cell_cam4_burst_pane_g2_ParamLimits

0x32c5,	// (0x0005c882) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x00069040) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x00069040) cell_cam4_burst_pane_g

0xceca,	// (0x00066487) bg_cl_pane_ParamLimits

0xceca,	// (0x00066487) bg_cl_pane

0xced6,	// (0x00066493) cl_header_pane_ParamLimits

0xced6,	// (0x00066493) cl_header_pane

0xcee2,	// (0x0006649f) cl_listscroll_pane_ParamLimits

0xcee2,	// (0x0006649f) cl_listscroll_pane

0x349d,	// (0x0005ca5a) bg_cl_pane_g1

0x34a5,	// (0x0005ca62) bg_cl_pane_g2

0x34ad,	// (0x0005ca6a) bg_cl_pane_g3

0x34b5,	// (0x0005ca72) bg_cl_pane_g4

0x34bd,	// (0x0005ca7a) bg_cl_pane_g5

0x34c5,	// (0x0005ca82) bg_cl_pane_g6

0x34cd,	// (0x0005ca8a) bg_cl_pane_g7

0x34d5,	// (0x0005ca92) bg_cl_pane_g8

0x34dd,	// (0x0005ca9a) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x0006907b) bg_cl_pane_g

0xceee,	// (0x000664ab) aid_height_cl_leading_ParamLimits

0xceee,	// (0x000664ab) aid_height_cl_leading

0xcefa,	// (0x000664b7) aid_height_cl_text_ParamLimits

0xcefa,	// (0x000664b7) aid_height_cl_text

0x6f51,	// (0x0006050e) bg_cl_header_pane_ParamLimits

0x6f51,	// (0x0006050e) bg_cl_header_pane

0xcf12,	// (0x000664cf) cl_header_pane_g1_ParamLimits

0xcf12,	// (0x000664cf) cl_header_pane_g1

0xcf1f,	// (0x000664dc) cl_header_pane_t1_ParamLimits

0xcf1f,	// (0x000664dc) cl_header_pane_t1

0x34e5,	// (0x0005caa2) cl_list_pane

0x34ee,	// (0x0005caab) hc_scroll_pane_cp01

0x89c7,	// (0x00061f84) bg_cl_header_pane_g1

0x2fa7,	// (0x0005c564) bg_cl_header_pane_g2

0x89e7,	// (0x00061fa4) bg_cl_header_pane_g3

0x2fb7,	// (0x0005c574) bg_cl_header_pane_g4

0x2faf,	// (0x0005c56c) bg_cl_header_pane_g5

0x31de,	// (0x0005c79b) bg_cl_header_pane_g6

0x2fcf,	// (0x0005c58c) bg_cl_header_pane_g7

0x2fd7,	// (0x0005c594) bg_cl_header_pane_g8

0x2fc7,	// (0x0005c584) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x0006908e) bg_cl_header_pane_g

0xcf31,	// (0x000664ee) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcf31,	// (0x000664ee) hc_cl_list_double_graphic_heading_pane

0xcf41,	// (0x000664fe) hc_cl_list_single_graphic_pane_ParamLimits

0xcf41,	// (0x000664fe) hc_cl_list_single_graphic_pane

0xcf53,	// (0x00066510) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcf53,	// (0x00066510) hc_cl_list_single_graphic_pane_g1

0xcf5f,	// (0x0006651c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcf5f,	// (0x0006651c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x000690a1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x000690a1) hc_cl_list_single_graphic_pane_g

0xcf73,	// (0x00066530) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcf73,	// (0x00066530) hc_cl_list_single_graphic_pane_t1

0xcf53,	// (0x00066510) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcf53,	// (0x00066510) hc_cl_list_double_graphic_heading_pane_g1

0xcf88,	// (0x00066545) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcf88,	// (0x00066545) hc_cl_list_double_graphic_heading_pane_g2

0xcf9c,	// (0x00066559) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcf9c,	// (0x00066559) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x000690a6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x000690a6) hc_cl_list_double_graphic_heading_pane_g

0xcfb0,	// (0x0006656d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcfb0,	// (0x0006656d) hc_cl_list_double_graphic_heading_pane_t1

0xcfc5,	// (0x00066582) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcfc5,	// (0x00066582) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x000690ad) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x000690ad) hc_cl_list_double_graphic_heading_pane_t

0xcfda,	// (0x00066597) vid4_progress_pane_g1

0xcfe9,	// (0x000665a6) vid4_progress_pane_g2

0xcff8,	// (0x000665b5) vid4_progress_pane_g3

0xd007,	// (0x000665c4) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x000690b2) vid4_progress_pane_g

0xd013,	// (0x000665d0) vid4_progress_pane_t1

0xd029,	// (0x000665e6) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x000690bd) vid4_progress_pane_t

0xd053,	// (0x00066610) wait_bar_pane_cp07

0x2393,	// (0x0005b950) blid_firmament_pane_ParamLimits

0x23d4,	// (0x0005b991) popup_blid_sat_info2_window_g1

0x23f8,	// (0x0005b9b5) popup_blid_sat_info2_window_t3

0x2406,	// (0x0005b9c3) popup_blid_sat_info2_window_t4

0x2414,	// (0x0005b9d1) popup_blid_sat_info2_window_t5

0x2422,	// (0x0005b9df) popup_blid_sat_info2_window_t6

0x2432,	// (0x0005b9ef) popup_blid_sat_info2_window_t7

0x2440,	// (0x0005b9fd) popup_blid_sat_info2_window_t8

0x244e,	// (0x0005ba0b) popup_blid_sat_info2_window_t9

0x245c,	// (0x0005ba19) popup_blid_sat_info2_window_t10

0x2518,	// (0x0005bad5) aid_firma_cardinal_ParamLimits

0x252c,	// (0x0005bae9) blid_firmament_pane_t1_ParamLimits

0x2543,	// (0x0005bb00) blid_firmament_pane_t2_ParamLimits

0x255a,	// (0x0005bb17) blid_firmament_pane_t3_ParamLimits

0x2571,	// (0x0005bb2e) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x00068cd6) blid_firmament_pane_t_ParamLimits

0x2588,	// (0x0005bb45) blid_sat_info_pane_ParamLimits

0xed0f,	// (0x000682cc) main_cam_set_pane_ParamLimits

0xb838,	// (0x00064df5) aid_size_cell_colour_35_ParamLimits

0xb84f,	// (0x00064e0c) aid_size_cell_colour_112_ParamLimits

0xb866,	// (0x00064e23) aid_size_cell_effect_ParamLimits

0xed0f,	// (0x000682cc) bg_tb_trans_pane_cp02_ParamLimits

0xed1d,	// (0x000682da) heading_imed_pane_ParamLimits

0xb880,	// (0x00064e3d) listscroll_imed_pane_ParamLimits

0x1747,	// (0x0005ad04) popup_call2_audio_first_window_g5_ParamLimits

0x1747,	// (0x0005ad04) popup_call2_audio_first_window_g5

0xbf03,	// (0x000654c0) aid_size_touch_image3_arrow_left_ParamLimits

0xbf03,	// (0x000654c0) aid_size_touch_image3_arrow_left

0xbf17,	// (0x000654d4) aid_size_touch_image3_arrow_right_ParamLimits

0xbf17,	// (0x000654d4) aid_size_touch_image3_arrow_right

0xd03e,	// (0x000665fb) vid4_progress_pane_t3

0xbae4,	// (0x000650a1) main_hwr_training_symbol_option_pane_ParamLimits

0xbae4,	// (0x000650a1) main_hwr_training_symbol_option_pane

0x2d40,	// (0x0005c2fd) popup_hwr_training_preview_window_ParamLimits

0x2d40,	// (0x0005c2fd) popup_hwr_training_preview_window

0xbb3f,	// (0x000650fc) hwr_training_navi_pane_g5_ParamLimits

0xbb3f,	// (0x000650fc) hwr_training_navi_pane_g5

0x2f95,	// (0x0005c552) popup_char_count_window

0x6f51,	// (0x0006050e) bg_popup_sub_pane_cp20_ParamLimits

0xcbca,	// (0x00066187) list_vitu2_match_list_pane_ParamLimits

0xcbd6,	// (0x00066193) vitu2_page_scroll_pane_ParamLimits

0xcbd6,	// (0x00066193) vitu2_page_scroll_pane

0x3551,	// (0x0005cb0e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3551,	// (0x0005cb0e) list_single_hwr_training_symbol_option_pane

0x3564,	// (0x0005cb21) list_single_hwr_training_symbol_option_pane_g1

0x356c,	// (0x0005cb29) list_single_hwr_training_symbol_option_pane_t1

0x357a,	// (0x0005cb37) bg_button_pane_cp023

0x3583,	// (0x0005cb40) bg_button_pane_cp024

0xd074,	// (0x00066631) vitu2_page_scroll_pane_g1

0xd07c,	// (0x00066639) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x000690c4) vitu2_page_scroll_pane_g

0xd084,	// (0x00066641) vitu2_page_scroll_pane_t1

0x22eb,	// (0x0005b8a8) popup_char_count_window_g1

0x35b6,	// (0x0005cb73) popup_char_count_window_g2

0x35bf,	// (0x0005cb7c) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x000690c9) popup_char_count_window_g

0x35c8,	// (0x0005cb85) popup_char_count_window_t1

0x6d05,	// (0x000602c2) main_vded2_pane

0x2a4f,	// (0x0005c00c) aid_size_cell_imed_line

0x2a59,	// (0x0005c016) grid_imed_line_width_pane

0xc2e2,	// (0x0006589f) vid4_indicators_pane_g4

0x35d6,	// (0x0005cb93) cell_imed_line_width_pane_ParamLimits

0x35d6,	// (0x0005cb93) cell_imed_line_width_pane

0x35e8,	// (0x0005cba5) cell_imed_line_width_pane_g1

0x236d,	// (0x0005b92a) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x000690d0) cell_imed_line_width_pane_g

0xd093,	// (0x00066650) main_vded2_pane_g1_ParamLimits

0xd093,	// (0x00066650) main_vded2_pane_g1

0xd0a0,	// (0x0006665d) main_vded2_pane_g2_ParamLimits

0xd0a0,	// (0x0006665d) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x000690d5) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x000690d5) main_vded2_pane_g

0xd0ac,	// (0x00066669) vded2_slider_pane_ParamLimits

0xd0ac,	// (0x00066669) vded2_slider_pane

0xd0b9,	// (0x00066676) aid_size_touch_vded2_end

0xd0c1,	// (0x0006667e) aid_size_touch_vded2_playhead

0xd0c9,	// (0x00066686) aid_size_touch_vded2_start

0xd0d1,	// (0x0006668e) vded2_slider_bg_pane

0xd0da,	// (0x00066697) vded2_slider_pane_g1

0xd0e3,	// (0x000666a0) vded2_slider_pane_g2

0xd0eb,	// (0x000666a8) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x000690da) vded2_slider_pane_g

0xd0f4,	// (0x000666b1) vded2_slider_bg_pane_g1

0xd0fd,	// (0x000666ba) vded2_slider_bg_pane_g2

0xd106,	// (0x000666c3) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x000690e1) vded2_slider_bg_pane_g

0x9e74,	// (0x00063431) aid_postcard_touch_down_pane_ParamLimits

0x9e74,	// (0x00063431) aid_postcard_touch_down_pane

0x9e80,	// (0x0006343d) aid_postcard_touch_up_pane_ParamLimits

0x9e80,	// (0x0006343d) aid_postcard_touch_up_pane

0x6d05,	// (0x000602c2) main_blid2_pane

0x2163,	// (0x0005b720) popup_blid2_search_window

0x6d05,	// (0x000602c2) blid2_gps_pane

0x6d05,	// (0x000602c2) blid2_navig_pane

0x6d05,	// (0x000602c2) blid2_search_pane

0x6d05,	// (0x000602c2) blid2_tripm_pane

0xd10f,	// (0x000666cc) blid2_search_pane_g1_ParamLimits

0xd10f,	// (0x000666cc) blid2_search_pane_g1

0xd11b,	// (0x000666d8) blid2_search_pane_t1_ParamLimits

0xd11b,	// (0x000666d8) blid2_search_pane_t1

0xd12d,	// (0x000666ea) aid_size_cell_blid2_gps_ParamLimits

0xd12d,	// (0x000666ea) aid_size_cell_blid2_gps

0xd13d,	// (0x000666fa) blid2_gps_pane_g1_ParamLimits

0xd13d,	// (0x000666fa) blid2_gps_pane_g1

0xd149,	// (0x00066706) grid_blid2_satellite_pane_ParamLimits

0xd149,	// (0x00066706) grid_blid2_satellite_pane

0xd155,	// (0x00066712) blid2_navig_pane_g1_ParamLimits

0xd155,	// (0x00066712) blid2_navig_pane_g1

0xd161,	// (0x0006671e) blid2_navig_pane_t1_ParamLimits

0xd161,	// (0x0006671e) blid2_navig_pane_t1

0xd173,	// (0x00066730) blid2_navig_pane_t2_ParamLimits

0xd173,	// (0x00066730) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x000690e8) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x000690e8) blid2_navig_pane_t

0xd185,	// (0x00066742) blid2_navig_ring_pane_ParamLimits

0xd185,	// (0x00066742) blid2_navig_ring_pane

0xd191,	// (0x0006674e) blid2_speed_pane_ParamLimits

0xd191,	// (0x0006674e) blid2_speed_pane

0xd19d,	// (0x0006675a) blid2_tripm_pane_g1_ParamLimits

0xd19d,	// (0x0006675a) blid2_tripm_pane_g1

0xd1a9,	// (0x00066766) blid2_tripm_pane_g2_ParamLimits

0xd1a9,	// (0x00066766) blid2_tripm_pane_g2

0xd1b5,	// (0x00066772) blid2_tripm_pane_g3_ParamLimits

0xd1b5,	// (0x00066772) blid2_tripm_pane_g3

0xd1c1,	// (0x0006677e) blid2_tripm_pane_g4_ParamLimits

0xd1c1,	// (0x0006677e) blid2_tripm_pane_g4

0xd1cd,	// (0x0006678a) blid2_tripm_pane_g5_ParamLimits

0xd1cd,	// (0x0006678a) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x000690ed) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x000690ed) blid2_tripm_pane_g

0xd1e5,	// (0x000667a2) blid2_tripm_pane_t1_ParamLimits

0xd1e5,	// (0x000667a2) blid2_tripm_pane_t1

0xd1f7,	// (0x000667b4) blid2_tripm_pane_t2_ParamLimits

0xd1f7,	// (0x000667b4) blid2_tripm_pane_t2

0xd209,	// (0x000667c6) blid2_tripm_pane_t3_ParamLimits

0xd209,	// (0x000667c6) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x000690fa) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x000690fa) blid2_tripm_pane_t

0xd239,	// (0x000667f6) cell_blid2_satellite_pane_ParamLimits

0xd239,	// (0x000667f6) cell_blid2_satellite_pane

0xd251,	// (0x0006680e) cell_blid2_satellite_pane_g1

0x35f1,	// (0x0005cbae) cell_blid2_satellite_pane_t1

0x2598,	// (0x0005bb55) blid2_speed_pane_g1

0x35ff,	// (0x0005cbbc) blid2_speed_pane_t1

0x360d,	// (0x0005cbca) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x00069103) blid2_speed_pane_t

0x2598,	// (0x0005bb55) blid2_navig_ring_pane_g1

0xd25a,	// (0x00066817) blid2_navig_ring_pane_g2

0xd262,	// (0x0006681f) blid2_navig_ring_pane_g3

0xd26a,	// (0x00066827) blid2_navig_ring_pane_g4

0xd272,	// (0x0006682f) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x00069108) blid2_navig_ring_pane_g

0x6d05,	// (0x000602c2) bg_popup_window_pane_cp011

0x361b,	// (0x0005cbd8) popup_blid2_search_window_g1

0x3623,	// (0x0005cbe0) popup_blid2_search_window_t1

0x3631,	// (0x0005cbee) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x00069113) popup_blid2_search_window_t

0x888c,	// (0x00061e49) main_browser_pane_g1

0x79ba,	// (0x00060f77) main_browser_pane_ParamLimits

0xed0f,	// (0x000682cc) bg_button_pane_cp011_ParamLimits

0xc508,	// (0x00065ac5) cell_vitu2_function_pane_g1_ParamLimits

0xed0f,	// (0x000682cc) bg_popup_sub_pane_cp22_ParamLimits

0x6182,	// (0x0005f73f) input_focus_pane_cp08_ParamLimits

0xcd16,	// (0x000662d3) popup_vitu2_query_button_pane_ParamLimits

0xcd16,	// (0x000662d3) popup_vitu2_query_button_pane

0x617a,	// (0x0005f737) popup_vitu2_query_input_button_pane

0x321b,	// (0x0005c7d8) popup_vitu2_query_window_g1_ParamLimits

0x618f,	// (0x0005f74c) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x0006901a) popup_vitu2_query_window_g_ParamLimits

0x6d05,	// (0x000602c2) bg_button_pane_cp026

0xd27a,	// (0x00066837) popup_vitu2_query_input_button_pane_g1

0x6d05,	// (0x000602c2) bg_button_pane_cp025

0x363f,	// (0x0005cbfc) popup_vitu2_query_button_pane_t1

0xae2d,	// (0x000643ea) main_mp3_pane_t6

0xae3b,	// (0x000643f8) popup_slider_window_cp01

0xc215,	// (0x000657d2) cam4_battery_pane

0xc215,	// (0x000657d2) cam4_battery_pane_cp02

0xc215,	// (0x000657d2) cam4_battery_pane_cp01

0xc215,	// (0x000657d2) cam4_battery_pane_cp03

0x2598,	// (0x0005bb55) cam4_battery_pane_g1

0x2e40,	// (0x0005c3fd) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x00069118) cam4_battery_pane_g

0x246a,	// (0x0005ba27) popup_blid_sat_info2_window_t11

0x995a,	// (0x00062f17) aid_size_touch_mv_arrow_left_ParamLimits

0x0bad,	// (0x0005a16a) aid_size_touch_mv_arrow_right_ParamLimits

0x0be5,	// (0x0005a1a2) navi_pane_g1_ParamLimits

0x0bf1,	// (0x0005a1ae) navi_pane_g2_ParamLimits

0x9973,	// (0x00062f30) navi_pane_g3_ParamLimits

0xf418,	// (0x000689d5) navi_pane_g_ParamLimits

0x9998,	// (0x00062f55) navi_pane_mv_t1_ParamLimits

0xb88c,	// (0x00064e49) grid_imed_effect_pane_ParamLimits

0x8524,	// (0x00061ae1) aid_placing_vt_slider_lsc

0x852c,	// (0x00061ae9) aid_placing_vt_slider_prt

0xed0f,	// (0x000682cc) bg_tb_trans_pane_cp01_ParamLimits

0x26e7,	// (0x0005bca4) popup_image_details_window_g1_ParamLimits

0x26fa,	// (0x0005bcb7) popup_image_details_window_g2_ParamLimits

0x270f,	// (0x0005bccc) popup_image_details_window_g3_ParamLimits

0x270f,	// (0x0005bccc) popup_image_details_window_g3

0xf75e,	// (0x00068d1b) popup_image_details_window_g_ParamLimits

0x2723,	// (0x0005bce0) popup_image_details_window_t1_ParamLimits

0x2735,	// (0x0005bcf2) popup_image_details_window_t2_ParamLimits

0x274e,	// (0x0005bd0b) popup_image_details_window_t3_ParamLimits

0x2762,	// (0x0005bd1f) popup_image_details_window_t4_ParamLimits

0x277d,	// (0x0005bd3a) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x00068d22) popup_image_details_window_t_ParamLimits

0xcf06,	// (0x000664c3) cl_header_name_pane_ParamLimits

0xcf06,	// (0x000664c3) cl_header_name_pane

0xd282,	// (0x0006683f) cl_header_name_pane_t1_ParamLimits

0xd282,	// (0x0006683f) cl_header_name_pane_t1

0xd299,	// (0x00066856) cl_header_name_pane_t2_ParamLimits

0xd299,	// (0x00066856) cl_header_name_pane_t2

0xd2c3,	// (0x00066880) cl_header_name_pane_t3_ParamLimits

0xd2c3,	// (0x00066880) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x0006911d) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x0006911d) cl_header_name_pane_t

0x0c73,	// (0x0005a230) navi_pane_mv_g2_ParamLimits

0x2f36,	// (0x0005c4f3) field_vitu2_entry_pane_g1_ParamLimits

0x2f42,	// (0x0005c4ff) field_vitu2_entry_pane_g2_ParamLimits

0x2f4e,	// (0x0005c50b) field_vitu2_entry_pane_g3_ParamLimits

0x2f4e,	// (0x0005c50b) field_vitu2_entry_pane_g3

0xf95c,	// (0x00068f19) field_vitu2_entry_pane_g_ParamLimits

0xc498,	// (0x00065a55) cell_vitu2_itu_pane_g1_ParamLimits

0xc4a8,	// (0x00065a65) cell_vitu2_itu_pane_g2_ParamLimits

0xc4a8,	// (0x00065a65) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x00068f25) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x00068f25) cell_vitu2_itu_pane_g

0xed0f,	// (0x000682cc) bg_vkb2_func_pane_cp05_ParamLimits

0xed0f,	// (0x000682cc) bg_vkb2_func_pane_cp05

0xed0f,	// (0x000682cc) bg_vkb2_func_pane_cp03

0xed0f,	// (0x000682cc) bg_vkb2_func_pane_cp04

0xed0f,	// (0x000682cc) bg_vkb2_func_pane_cp10_ParamLimits

0xed0f,	// (0x000682cc) bg_vkb2_func_pane_cp10

0x62d0,	// (0x0005f88d) bg_vkb2_func_pane_cp08

0xceb1,	// (0x0006646e) bg_vkb2_func_pane_cp06

0xcebe,	// (0x0006647b) bg_vkb2_func_pane_cp07

0x358c,	// (0x0005cb49) bg_vkb2_func_pane_cp11_ParamLimits

0x358c,	// (0x0005cb49) bg_vkb2_func_pane_cp11

0x35a1,	// (0x0005cb5e) bg_vkb2_func_pane_cp12_ParamLimits

0x35a1,	// (0x0005cb5e) bg_vkb2_func_pane_cp12

0x6d05,	// (0x000602c2) bg_vkb2_func_pane_cp09

0x2fa7,	// (0x0005c564) bg_vkb2_func_pane_g1

0x89e7,	// (0x00061fa4) bg_vkb2_func_pane_g2

0x2faf,	// (0x0005c56c) bg_vkb2_func_pane_g3

0x2fb7,	// (0x0005c574) bg_vkb2_func_pane_g4

0x31de,	// (0x0005c79b) bg_vkb2_func_pane_g5

0x2fcf,	// (0x0005c58c) bg_vkb2_func_pane_g6

0x2fd7,	// (0x0005c594) bg_vkb2_func_pane_g7

0x2fc7,	// (0x0005c584) bg_vkb2_func_pane_g8

0x89c7,	// (0x00061f84) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x00069124) bg_vkb2_func_pane_g

0xd1d9,	// (0x00066796) blid2_tripm_pane_g6_ParamLimits

0xd1d9,	// (0x00066796) blid2_tripm_pane_g6

0x2dfe,	// (0x0005c3bb) mp4_progress_pane_g1

0xd22d,	// (0x000667ea) blid2_tripm_values_pane_ParamLimits

0xd22d,	// (0x000667ea) blid2_tripm_values_pane

0xd2e8,	// (0x000668a5) blid2_tripm_values_pane_t1

0xd2f6,	// (0x000668b3) blid2_tripm_values_pane_t2

0xd304,	// (0x000668c1) blid2_tripm_values_pane_t3

0xd312,	// (0x000668cf) blid2_tripm_values_pane_t4

0xd320,	// (0x000668dd) blid2_tripm_values_pane_t5

0xd32e,	// (0x000668eb) blid2_tripm_values_pane_t6

0xd33c,	// (0x000668f9) blid2_tripm_values_pane_t7

0xd34a,	// (0x00066907) blid2_tripm_values_pane_t8

0xd358,	// (0x00066915) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x00069137) blid2_tripm_values_pane_t

0x854e,	// (0x00061b0b) call_video_pane_t1_ParamLimits

0x8564,	// (0x00061b21) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0006885e) call_video_pane_t_ParamLimits

0x5f7e,	// (0x0005f53b) msg_header_pane_g1_ParamLimits

0x0e6f,	// (0x0005a42c) msg_header_pane_g2_ParamLimits

0x0e6f,	// (0x0005a42c) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00068a78) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00068a78) msg_header_pane_g

0x79ba,	// (0x00060f77) main_clock2_pane_ParamLimits

0xb64c,	// (0x00064c09) grid_clock2_toolbar_pane_ParamLimits

0xb64c,	// (0x00064c09) grid_clock2_toolbar_pane

0xb64c,	// (0x00064c09) listscroll_clock2_pane_ParamLimits

0xb64c,	// (0x00064c09) listscroll_clock2_pane

0xb6ef,	// (0x00064cac) main_clock2_pane_t3_ParamLimits

0xb6ef,	// (0x00064cac) main_clock2_pane_t3

0xb701,	// (0x00064cbe) main_clock2_pane_t4_ParamLimits

0xb701,	// (0x00064cbe) main_clock2_pane_t4

0x364d,	// (0x0005cc0a) cell_clock2_toolbar_pane

0x3655,	// (0x0005cc12) cell_clock2_toolbar_pane_cp01

0x3655,	// (0x0005cc12) cell_clock2_toolbar_pane_cp02

0x365d,	// (0x0005cc1a) cell_clock2_toolbar_pane_cp03

0x3665,	// (0x0005cc22) list_clock2_pane

0xecce,	// (0x0006828b) scroll_pane_cp10

0x366d,	// (0x0005cc2a) list_single_clock2_pane_ParamLimits

0x366d,	// (0x0005cc2a) list_single_clock2_pane

0x0cd4,	// (0x0005a291) list_highlight_pane_cp08

0x367a,	// (0x0005cc37) list_single_clock2_pane_t1

0x3688,	// (0x0005cc45) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x0006914a) list_single_clock2_pane_t

0x6d05,	// (0x000602c2) bg_button_pane_cp10

0x3696,	// (0x0005cc53) cell_clock2_toolbar_pane_g1

0x9dde,	// (0x0006339b) aid_main_viewer_pane_g1_ParamLimits

0x9dde,	// (0x0006339b) aid_main_viewer_pane_g1

0x9dea,	// (0x000633a7) aid_main_viewer_pane_g2_ParamLimits

0x9dea,	// (0x000633a7) aid_main_viewer_pane_g2

0x9df6,	// (0x000633b3) aid_main_viewer_pane_g3_ParamLimits

0x9df6,	// (0x000633b3) aid_main_viewer_pane_g3

0x9e05,	// (0x000633c2) aid_main_viewer_pane_g4_ParamLimits

0x9e05,	// (0x000633c2) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00068a89) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00068a89) aid_main_viewer_pane_g

0x6f51,	// (0x0006050e) main_calc_pane_ParamLimits

0xa48c,	// (0x00063a49) main_dialer2_pane_ParamLimits

0x6d05,	// (0x000602c2) main_cam6_pane

0x6d05,	// (0x000602c2) main_vid6_pane

0xb658,	// (0x00064c15) listscroll_gen_pane_cp06_ParamLimits

0xb658,	// (0x00064c15) listscroll_gen_pane_cp06

0xb713,	// (0x00064cd0) main_clock2_pane_t5_ParamLimits

0xb713,	// (0x00064cd0) main_clock2_pane_t5

0xb75a,	// (0x00064d17) aid_call2_pane_cp10_ParamLimits

0xb766,	// (0x00064d23) aid_call_pane_cp10_ParamLimits

0x0ba1,	// (0x0005a15e) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0ba1,	// (0x0005a15e) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb772,	// (0x00064d2f) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb772,	// (0x00064d2f) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0ba1,	// (0x0005a15e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x00068dd2) popup_clock_analogue_window_cp10_g_ParamLimits

0xb77e,	// (0x00064d3b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x2e68,	// (0x0005c425) cell_dialer2_keypad_pane_g2_ParamLimits

0x2e68,	// (0x0005c425) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x00068eb8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x00068eb8) cell_dialer2_keypad_pane_g

0xbecc,	// (0x00065489) cell_dialer2_keypad_pane_t1

0xc795,	// (0x00065d52) main_cset_text2_pane_ParamLimits

0xc795,	// (0x00065d52) main_cset_text2_pane

0x33f5,	// (0x0005c9b2) area_vitu2_query_pane_g1_ParamLimits

0x61fd,	// (0x0005f7ba) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x00069067) area_vitu2_query_pane_g_ParamLimits

0x62ac,	// (0x0005f869) area_vitu2_query_pane_t7_ParamLimits

0x62ac,	// (0x0005f869) area_vitu2_query_pane_t7

0xceb1,	// (0x0006646e) bg_button_pane_cp018_ParamLimits

0xcebe,	// (0x0006647b) bg_button_pane_cp021_ParamLimits

0x62d0,	// (0x0005f88d) bg_button_pane_cp022_ParamLimits

0x62d0,	// (0x0005f88d) bg_vkb2_func_pane_cp08_ParamLimits

0xceb1,	// (0x0006646e) bg_vkb2_func_pane_cp06_ParamLimits

0xcebe,	// (0x0006647b) bg_vkb2_func_pane_cp07_ParamLimits

0x62df,	// (0x0005f89c) input_focus_pane_cp09_ParamLimits

0xd366,	// (0x00066923) cam6_autofocus_pane_ParamLimits

0xd366,	// (0x00066923) cam6_autofocus_pane

0xd382,	// (0x0006693f) cam6_image_uncrop_pane_ParamLimits

0xd382,	// (0x0006693f) cam6_image_uncrop_pane

0xd3a5,	// (0x00066962) cam6_indi_pane_ParamLimits

0xd3a5,	// (0x00066962) cam6_indi_pane

0xd3bf,	// (0x0006697c) cam6_mode_pane_ParamLimits

0xd3bf,	// (0x0006697c) cam6_mode_pane

0xd3d3,	// (0x00066990) cam6_timer_pane_ParamLimits

0xd3d3,	// (0x00066990) cam6_timer_pane

0xd3df,	// (0x0006699c) cam6_zoom_pane_ParamLimits

0xd3df,	// (0x0006699c) cam6_zoom_pane

0xc275,	// (0x00065832) cam6_mode_pane_g1_ParamLimits

0xc275,	// (0x00065832) cam6_mode_pane_g1

0xd3f5,	// (0x000669b2) cam6_mode_pane_g2_ParamLimits

0xd3f5,	// (0x000669b2) cam6_mode_pane_g2

0xd401,	// (0x000669be) cam6_mode_pane_g3_ParamLimits

0xd401,	// (0x000669be) cam6_mode_pane_g3

0xd40d,	// (0x000669ca) cam6_mode_pane_g4_ParamLimits

0xd40d,	// (0x000669ca) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x0006914f) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x0006914f) cam6_mode_pane_g

0x369e,	// (0x0005cc5b) bg_tb_trans_pane_cp08_ParamLimits

0x369e,	// (0x0005cc5b) bg_tb_trans_pane_cp08

0x36ac,	// (0x0005cc69) cam6_battery_pane_ParamLimits

0x36ac,	// (0x0005cc69) cam6_battery_pane

0x36c2,	// (0x0005cc7f) cam6_indi_pane_g1_ParamLimits

0x36c2,	// (0x0005cc7f) cam6_indi_pane_g1

0x36d4,	// (0x0005cc91) cam6_indi_pane_g2_ParamLimits

0x36d4,	// (0x0005cc91) cam6_indi_pane_g2

0x36e6,	// (0x0005cca3) cam6_indi_pane_g3_ParamLimits

0x36e6,	// (0x0005cca3) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x00069158) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x00069158) cam6_indi_pane_g

0x36f8,	// (0x0005ccb5) cam6_indi_pane_t1_ParamLimits

0x36f8,	// (0x0005ccb5) cam6_indi_pane_t1

0xc318,	// (0x000658d5) cam6_autofocus_pane_g1

0xc320,	// (0x000658dd) cam6_autofocus_pane_g2

0xc328,	// (0x000658e5) cam6_autofocus_pane_g3

0xc330,	// (0x000658ed) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x0006915f) cam6_autofocus_pane_g

0x371e,	// (0x0005ccdb) cam6_timer_pane_g1

0x3726,	// (0x0005cce3) cam6_timer_pane_t1

0x3734,	// (0x0005ccf1) cam6_zoom_cont_pane

0x373c,	// (0x0005ccf9) cam6_zoom_pane_g1

0x3744,	// (0x0005cd01) cam6_zoom_pane_g2

0xd419,	// (0x000669d6) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x00069168) cam6_zoom_pane_g

0x2598,	// (0x0005bb55) cam6_battery_pane_g1

0x2598,	// (0x0005bb55) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x00068cdf) cam6_battery_pane_g

0x374c,	// (0x0005cd09) cam6_zoom_cont_pane_g1

0x3755,	// (0x0005cd12) cam6_zoom_cont_pane_g2

0x375e,	// (0x0005cd1b) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x0006916f) cam6_zoom_cont_pane_g

0xd436,	// (0x000669f3) cam6_mode_pane_cp_ParamLimits

0xd436,	// (0x000669f3) cam6_mode_pane_cp

0xd3df,	// (0x0006699c) cam6_zoom_pane_cp_ParamLimits

0xd3df,	// (0x0006699c) cam6_zoom_pane_cp

0xd44a,	// (0x00066a07) vid6_image_uncrop_cif_pane_ParamLimits

0xd44a,	// (0x00066a07) vid6_image_uncrop_cif_pane

0xd46c,	// (0x00066a29) vid6_image_uncrop_nhd_pane_ParamLimits

0xd46c,	// (0x00066a29) vid6_image_uncrop_nhd_pane

0xd382,	// (0x0006693f) vid6_image_uncrop_vga_pane_ParamLimits

0xd382,	// (0x0006693f) vid6_image_uncrop_vga_pane

0xd483,	// (0x00066a40) vid6_image_uncrop_wvga_pane_ParamLimits

0xd483,	// (0x00066a40) vid6_image_uncrop_wvga_pane

0xd49a,	// (0x00066a57) vid6_indi_pane_ParamLimits

0xd49a,	// (0x00066a57) vid6_indi_pane

0x369e,	// (0x0005cc5b) bg_tb_trans_pane_cp09_ParamLimits

0x369e,	// (0x0005cc5b) bg_tb_trans_pane_cp09

0x3772,	// (0x0005cd2f) cam6_battery_pane_cp_ParamLimits

0x3772,	// (0x0005cd2f) cam6_battery_pane_cp

0x377e,	// (0x0005cd3b) vid6_indi_pane_g1_ParamLimits

0x377e,	// (0x0005cd3b) vid6_indi_pane_g1

0x3790,	// (0x0005cd4d) vid6_indi_pane_g2_ParamLimits

0x3790,	// (0x0005cd4d) vid6_indi_pane_g2

0x37a2,	// (0x0005cd5f) vid6_indi_pane_g3_ParamLimits

0x37a2,	// (0x0005cd5f) vid6_indi_pane_g3

0x37b7,	// (0x0005cd74) vid6_indi_pane_g4_ParamLimits

0x37b7,	// (0x0005cd74) vid6_indi_pane_g4

0x37cc,	// (0x0005cd89) vid6_indi_pane_g5_ParamLimits

0x37cc,	// (0x0005cd89) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x00069176) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x00069176) vid6_indi_pane_g

0x37e6,	// (0x0005cda3) vid6_indi_pane_t1_ParamLimits

0x37e6,	// (0x0005cda3) vid6_indi_pane_t1

0x37fc,	// (0x0005cdb9) vid6_indi_pane_t2_ParamLimits

0x37fc,	// (0x0005cdb9) vid6_indi_pane_t2

0x3824,	// (0x0005cde1) vid6_indi_pane_t3_ParamLimits

0x3824,	// (0x0005cde1) vid6_indi_pane_t3

0x384c,	// (0x0005ce09) vid6_indi_pane_t4_ParamLimits

0x384c,	// (0x0005ce09) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x00069181) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x00069181) vid6_indi_pane_t

0x3870,	// (0x0005ce2d) wait_bar_pane_cp08

0xd4ba,	// (0x00066a77) main_cset_text2_pane_t1_ParamLimits

0xd4ba,	// (0x00066a77) main_cset_text2_pane_t1

0xd421,	// (0x000669de) listscroll_gen_pane_cp06_t1_ParamLimits

0xd421,	// (0x000669de) listscroll_gen_pane_cp06_t1

0x6d05,	// (0x000602c2) main_cam6_set_pane

0x27c7,	// (0x0005bd84) bg_tb_trans_pane_cp06_ParamLimits

0xc21d,	// (0x000657da) cam4_indicators_pane_g1_ParamLimits

0xc22d,	// (0x000657ea) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x00068ef5) cam4_indicators_pane_g_ParamLimits

0xc24d,	// (0x0006580a) cam4_indicators_pane_t1_ParamLimits

0xed0f,	// (0x000682cc) bg_tb_trans_pane_cp07_ParamLimits

0xc21d,	// (0x000657da) vid4_indicators_pane_g1_ParamLimits

0xc2c1,	// (0x0006587e) vid4_indicators_pane_g2_ParamLimits

0xc2d1,	// (0x0006588e) vid4_indicators_pane_g3_ParamLimits

0xc2e2,	// (0x0006589f) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x00068f07) vid4_indicators_pane_g_ParamLimits

0xc2fe,	// (0x000658bb) vid4_indicators_pane_t1_ParamLimits

0xcfda,	// (0x00066597) vid4_progress_pane_g1_ParamLimits

0xcfe9,	// (0x000665a6) vid4_progress_pane_g2_ParamLimits

0xcff8,	// (0x000665b5) vid4_progress_pane_g3_ParamLimits

0xd007,	// (0x000665c4) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x000690b2) vid4_progress_pane_g_ParamLimits

0xd013,	// (0x000665d0) vid4_progress_pane_t1_ParamLimits

0xd029,	// (0x000665e6) vid4_progress_pane_t2_ParamLimits

0xd03e,	// (0x000665fb) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x000690bd) vid4_progress_pane_t_ParamLimits

0xd053,	// (0x00066610) wait_bar_pane_cp07_ParamLimits

0xd4d6,	// (0x00066a93) main_cam6_set_pane_g2_ParamLimits

0xd4d6,	// (0x00066a93) main_cam6_set_pane_g2

0xd4e2,	// (0x00066a9f) main_cset6_listscroll_pane_ParamLimits

0xd4e2,	// (0x00066a9f) main_cset6_listscroll_pane

0xd50b,	// (0x00066ac8) main_cset6_slider_pane_ParamLimits

0xd50b,	// (0x00066ac8) main_cset6_slider_pane

0xd517,	// (0x00066ad4) main_cset6_text2_pane_ParamLimits

0xd517,	// (0x00066ad4) main_cset6_text2_pane

0x3880,	// (0x0005ce3d) main_cset6_text_pane

0x309d,	// (0x0005c65a) main_cset_list_pane_copy1_ParamLimits

0x309d,	// (0x0005c65a) main_cset_list_pane_copy1

0x30ad,	// (0x0005c66a) scroll_pane_cp028_copy1

0xd52a,	// (0x00066ae7) cset_list_set_pane_copy1

0xca50,	// (0x0006600d) aid_position_infowindow_above_copy1

0xca58,	// (0x00066015) aid_position_infowindow_below_copy1

0xd539,	// (0x00066af6) cset_list_set_pane_g1_copy1

0x632e,	// (0x0005f8eb) cset_list_set_pane_g3_copy1_ParamLimits

0x632e,	// (0x0005f8eb) cset_list_set_pane_g3_copy1

0x633d,	// (0x0005f8fa) cset_list_set_pane_t1_copy1_ParamLimits

0x633d,	// (0x0005f8fa) cset_list_set_pane_t1_copy1

0xed0f,	// (0x000682cc) list_highlight_pane_cp021_copy1_ParamLimits

0xed0f,	// (0x000682cc) list_highlight_pane_cp021_copy1

0x3888,	// (0x0005ce45) cset6_slider_pane_ParamLimits

0x3888,	// (0x0005ce45) cset6_slider_pane

0x38b4,	// (0x0005ce71) main_cset6_slider_pane_g1_ParamLimits

0x38b4,	// (0x0005ce71) main_cset6_slider_pane_g1

0xd541,	// (0x00066afe) main_cset6_slider_pane_g2_ParamLimits

0xd541,	// (0x00066afe) main_cset6_slider_pane_g2

0x30c2,	// (0x0005c67f) main_cset6_slider_pane_g3_ParamLimits

0x30c2,	// (0x0005c67f) main_cset6_slider_pane_g3

0xd569,	// (0x00066b26) main_cset6_slider_pane_g4_ParamLimits

0xd569,	// (0x00066b26) main_cset6_slider_pane_g4

0xd575,	// (0x00066b32) main_cset6_slider_pane_g5_ParamLimits

0xd575,	// (0x00066b32) main_cset6_slider_pane_g5

0x30c2,	// (0x0005c67f) main_cset6_slider_pane_g7_ParamLimits

0x30c2,	// (0x0005c67f) main_cset6_slider_pane_g7

0x30ce,	// (0x0005c68b) main_cset6_slider_pane_g8_ParamLimits

0x30ce,	// (0x0005c68b) main_cset6_slider_pane_g8

0xd581,	// (0x00066b3e) main_cset6_slider_pane_g9_ParamLimits

0xd581,	// (0x00066b3e) main_cset6_slider_pane_g9

0xd58d,	// (0x00066b4a) main_cset6_slider_pane_g10_ParamLimits

0xd58d,	// (0x00066b4a) main_cset6_slider_pane_g10

0xd569,	// (0x00066b26) main_cset6_slider_pane_g11_ParamLimits

0xd569,	// (0x00066b26) main_cset6_slider_pane_g11

0xd599,	// (0x00066b56) main_cset6_slider_pane_g12_ParamLimits

0xd599,	// (0x00066b56) main_cset6_slider_pane_g12

0xd5a5,	// (0x00066b62) main_cset6_slider_pane_g13_ParamLimits

0xd5a5,	// (0x00066b62) main_cset6_slider_pane_g13

0xd5b1,	// (0x00066b6e) main_cset6_slider_pane_g14_ParamLimits

0xd5b1,	// (0x00066b6e) main_cset6_slider_pane_g14

0xd5bd,	// (0x00066b7a) main_cset6_slider_pane_g15_ParamLimits

0xd5bd,	// (0x00066b7a) main_cset6_slider_pane_g15

0xd575,	// (0x00066b32) main_cset6_slider_pane_g16_ParamLimits

0xd575,	// (0x00066b32) main_cset6_slider_pane_g16

0xd5d5,	// (0x00066b92) main_cset6_slider_pane_g17_ParamLimits

0xd5d5,	// (0x00066b92) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x0006918a) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x0006918a) main_cset6_slider_pane_g

0x38dc,	// (0x0005ce99) main_cset6_slider_pane_t1_ParamLimits

0x38dc,	// (0x0005ce99) main_cset6_slider_pane_t1

0xd5e1,	// (0x00066b9e) main_cset6_slider_pane_t2_ParamLimits

0xd5e1,	// (0x00066b9e) main_cset6_slider_pane_t2

0x391d,	// (0x0005ceda) main_cset6_slider_pane_t3_ParamLimits

0x391d,	// (0x0005ceda) main_cset6_slider_pane_t3

0xd60c,	// (0x00066bc9) main_cset6_slider_pane_t4_ParamLimits

0xd60c,	// (0x00066bc9) main_cset6_slider_pane_t4

0x3948,	// (0x0005cf05) main_cset6_slider_pane_t5_ParamLimits

0x3948,	// (0x0005cf05) main_cset6_slider_pane_t5

0x3973,	// (0x0005cf30) main_cset6_slider_pane_t7_ParamLimits

0x3973,	// (0x0005cf30) main_cset6_slider_pane_t7

0xd637,	// (0x00066bf4) main_cset6_slider_pane_t8_ParamLimits

0xd637,	// (0x00066bf4) main_cset6_slider_pane_t8

0xd65b,	// (0x00066c18) main_cset6_slider_pane_t9_ParamLimits

0xd65b,	// (0x00066c18) main_cset6_slider_pane_t9

0xd67f,	// (0x00066c3c) main_cset6_slider_pane_t10_ParamLimits

0xd67f,	// (0x00066c3c) main_cset6_slider_pane_t10

0xd6a3,	// (0x00066c60) main_cset6_slider_pane_t11_ParamLimits

0xd6a3,	// (0x00066c60) main_cset6_slider_pane_t11

0x39a9,	// (0x0005cf66) main_cset6_slider_pane_t14_ParamLimits

0x39a9,	// (0x0005cf66) main_cset6_slider_pane_t14

0x39e2,	// (0x0005cf9f) main_cset6_slider_pane_t15_ParamLimits

0x39e2,	// (0x0005cf9f) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x000691af) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x000691af) main_cset6_slider_pane_t

0x3a1b,	// (0x0005cfd8) cset_slider_pane_g1_copy1

0x3a24,	// (0x0005cfe1) cset_slider_pane_g2_copy1

0x3a2d,	// (0x0005cfea) cset_slider_pane_g3_copy1

0x6d05,	// (0x000602c2) bg_popup_sub_pane_cp011_copy1

0x3227,	// (0x0005c7e4) main_cset_text_pane_g1_copy1

0x322f,	// (0x0005c7ec) main_cset_text_pane_t1_copy1

0x323d,	// (0x0005c7fa) main_cset_text_pane_t2_copy1

0x324b,	// (0x0005c808) main_cset_text_pane_t3_copy1

0x3259,	// (0x0005c816) main_cset_text_pane_t4_copy1

0x3267,	// (0x0005c824) main_cset_text_pane_t5_copy1

0x3275,	// (0x0005c832) main_cset_text_pane_t6_copy1

0x3283,	// (0x0005c840) main_cset_text_pane_t7_copy1

0xd6c7,	// (0x00066c84) main_cset_text2_pane_t1_copy1

0x6d05,	// (0x000602c2) main_ncimui_pane

0xa4c7,	// (0x00063a84) popup_query_ncimui_window_ParamLimits

0xa4c7,	// (0x00063a84) popup_query_ncimui_window

0xaf66,	// (0x00064523) field_cale_ev2_pane_g4_ParamLimits

0xaf66,	// (0x00064523) field_cale_ev2_pane_g4

0xbc00,	// (0x000651bd) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbc00,	// (0x000651bd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x00068e93) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x00068e93) cell_video_dialer_keypad_pane_g

0xbc18,	// (0x000651d5) cell_video_dialer_keypad_pane_t1

0x6d05,	// (0x000602c2) bg_popup_window_pane_cp012

0xeba7,	// (0x00068164) heading_pane_cp06

0x3b1f,	// (0x0005d0dc) ncim_query_content_pane

0x6d05,	// (0x000602c2) bg_popup_heading_pane_cp01

0x3b27,	// (0x0005d0e4) ncim_heading_pane_t1

0x3b35,	// (0x0005d0f2) ncim_indicator_popup_pane

0x3b47,	// (0x0005d104) ncim_query_button_pane

0x3b5b,	// (0x0005d118) ncim_query_content_pane_t1

0x3b6d,	// (0x0005d12a) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x000691ee) ncim_query_content_pane_t

0x3ba7,	// (0x0005d164) ncim_query_list_pane

0x3bb9,	// (0x0005d176) ncim_query_popup_pane

0x3b35,	// (0x0005d0f2) ncim_indicator_popup_pane_ParamLimits

0xd7a8,	// (0x00066d65) ncim_query_content_pane_g1_ParamLimits

0xd7a8,	// (0x00066d65) ncim_query_content_pane_g1

0x3b5b,	// (0x0005d118) ncim_query_content_pane_t1_ParamLimits

0x3b6d,	// (0x0005d12a) ncim_query_content_pane_t2_ParamLimits

0xd7b4,	// (0x00066d71) ncim_query_content_pane_t3_ParamLimits

0xd7b4,	// (0x00066d71) ncim_query_content_pane_t3

0xd7d1,	// (0x00066d8e) ncim_query_content_pane_t4_ParamLimits

0xd7d1,	// (0x00066d8e) ncim_query_content_pane_t4

0xd7ee,	// (0x00066dab) ncim_query_content_pane_t5_ParamLimits

0xd7ee,	// (0x00066dab) ncim_query_content_pane_t5

0x3b7f,	// (0x0005d13c) ncim_query_content_pane_t6_ParamLimits

0x3b7f,	// (0x0005d13c) ncim_query_content_pane_t6

0xfc31,	// (0x000691ee) ncim_query_content_pane_t_ParamLimits

0x3ba7,	// (0x0005d164) ncim_query_list_pane_ParamLimits

0x3bb9,	// (0x0005d176) ncim_query_popup_pane_ParamLimits

0x3bcd,	// (0x0005d18a) wait_bar_pane_cp04

0x6d05,	// (0x000602c2) input_focus_pane_cp011

0x3bd5,	// (0x0005d192) ncim_query_popup_pane_t1

0x3be3,	// (0x0005d1a0) ncim_list_query_list_pane_ParamLimits

0x3be3,	// (0x0005d1a0) ncim_list_query_list_pane

0x6d05,	// (0x000602c2) bg_button_pane_cp027

0x3bf6,	// (0x0005d1b3) ncim_query_button_pane_g1

0x6d05,	// (0x000602c2) list_highlight_pane_cp012

0x3c00,	// (0x0005d1bd) ncim_list_query_list_pane_g1

0x3c08,	// (0x0005d1c5) ncim_list_query_list_pane_t1

0xc23d,	// (0x000657fa) cam4_indicators_pane_g3_ParamLimits

0xc23d,	// (0x000657fa) cam4_indicators_pane_g3

0xc2ee,	// (0x000658ab) vid4_indicators_pane_g5_ParamLimits

0xc2ee,	// (0x000658ab) vid4_indicators_pane_g5

0x94d3,	// (0x00062a90) vid4_progress_pane_g5_ParamLimits

0x94d3,	// (0x00062a90) vid4_progress_pane_g5

0xd6f2,	// (0x00066caf) main_ncimui_pane_g1

0xd738,	// (0x00066cf5) ncimui_group_query_pane_ParamLimits

0xd738,	// (0x00066cf5) ncimui_group_query_pane

0xd76c,	// (0x00066d29) ncimui_list_pane_ParamLimits

0xd76c,	// (0x00066d29) ncimui_list_pane

0xd784,	// (0x00066d41) ncimui_text_pane_ParamLimits

0xd784,	// (0x00066d41) ncimui_text_pane

0xd80b,	// (0x00066dc8) ncimui_text_pane_t1_ParamLimits

0xd80b,	// (0x00066dc8) ncimui_text_pane_t1

0x3c1f,	// (0x0005d1dc) ncimui_list_single_graphic_pane_ParamLimits

0x3c1f,	// (0x0005d1dc) ncimui_list_single_graphic_pane

0xd829,	// (0x00066de6) ncimui_query_pane_ParamLimits

0xd829,	// (0x00066de6) ncimui_query_pane

0x6d05,	// (0x000602c2) list_highlight_pane_cp013

0x3c2c,	// (0x0005d1e9) ncim_list_query_list_pane_t1_copy1

0x3c3a,	// (0x0005d1f7) ncim_list_single_graphic_pane_g1

0x3c42,	// (0x0005d1ff) ncim_query_button_pane_cp01

0x3c4a,	// (0x0005d207) ncim_query_entry_pane_ParamLimits

0x3c4a,	// (0x0005d207) ncim_query_entry_pane

0x3c5a,	// (0x0005d217) ncimui_query_pane_g1

0x3c62,	// (0x0005d21f) ncimui_query_pane_t1_ParamLimits

0x3c62,	// (0x0005d21f) ncimui_query_pane_t1

0x6d05,	// (0x000602c2) input_focus_pane_cp012

0x3bd5,	// (0x0005d192) ncim_query_entry_pane_t1

0x79ba,	// (0x00060f77) main_im_pane_ParamLimits

0xed0f,	// (0x000682cc) main_mobtv_pane_ParamLimits

0xed0f,	// (0x000682cc) main_mobtv_pane

0xd581,	// (0x00066b3e) main_cset6_slider_pane_g18_ParamLimits

0xd581,	// (0x00066b3e) main_cset6_slider_pane_g18

0xd5a5,	// (0x00066b62) main_cset6_slider_pane_g19_ParamLimits

0xd5a5,	// (0x00066b62) main_cset6_slider_pane_g19

0x2f4e,	// (0x0005c50b) bg_main_mobtv_pane_ParamLimits

0x2f4e,	// (0x0005c50b) bg_main_mobtv_pane

0xd839,	// (0x00066df6) main_mobtv_info_pane

0xd842,	// (0x00066dff) main_mobtv_loading_pane_ParamLimits

0xd842,	// (0x00066dff) main_mobtv_loading_pane

0x3c86,	// (0x0005d243) main_mobtv_pg_channel_list_pane

0x3c90,	// (0x0005d24d) main_mobtv_pg_hdr_pane

0xd84f,	// (0x00066e0c) main_mobtv_programe_curr_pane_ParamLimits

0xd84f,	// (0x00066e0c) main_mobtv_programe_curr_pane

0xd85c,	// (0x00066e19) main_mobtv_programe_next_pane_ParamLimits

0xd85c,	// (0x00066e19) main_mobtv_programe_next_pane

0x3c99,	// (0x0005d256) popup_mobtv_noti_window

0x2598,	// (0x0005bb55) main_tv_pg_hdr_pane_g1

0x3ca1,	// (0x0005d25e) main_tv_pg_hdr_pane_g2

0x3ca9,	// (0x0005d266) main_tv_pg_hdr_pane_g3

0x3cb1,	// (0x0005d26e) main_tv_pg_hdr_pane_g4

0x3cb9,	// (0x0005d276) main_tv_pg_hdr_pane_g5

0x3cc1,	// (0x0005d27e) main_tv_pg_hdr_pane_g6

0x3cc9,	// (0x0005d286) main_tv_pg_hdr_pane_g7

0x3cd1,	// (0x0005d28e) main_tv_pg_hdr_pane_g8

0x3cd9,	// (0x0005d296) main_tv_pg_hdr_pane_g9

0x3ce1,	// (0x0005d29e) main_tv_pg_hdr_pane_g10

0x3ceb,	// (0x0005d2a8) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x000691fb) main_tv_pg_hdr_pane_g

0x3cf5,	// (0x0005d2b2) main_tv_pg_hdr_pane_t1

0x3d03,	// (0x0005d2c0) main_tv_pg_hdr_pane_t2

0x3d11,	// (0x0005d2ce) main_tv_pg_hdr_pane_t3

0x3d1f,	// (0x0005d2dc) main_tv_pg_hdr_pane_t4

0x3d2d,	// (0x0005d2ea) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x00069212) main_tv_pg_hdr_pane_t

0x3d3b,	// (0x0005d2f8) single_mobtv_pg_channel_pane_ParamLimits

0x3d3b,	// (0x0005d2f8) single_mobtv_pg_channel_pane

0x3d4d,	// (0x0005d30a) single_mobtv_pg_channel_table_pane

0x3d56,	// (0x0005d313) single_mobtv_pg_channel_thumb_pane

0x3d5f,	// (0x0005d31c) single_tv_pg_channel_pane_g1

0x3d68,	// (0x0005d325) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x0006921d) single_tv_pg_channel_pane_g

0x27c7,	// (0x0005bd84) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x27c7,	// (0x0005bd84) bg_single_mobtv_pg_channel_thumb_pane

0x3d71,	// (0x0005d32e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3d71,	// (0x0005d32e) single_mobtv_pg_channel_thumb_pane_g1

0x3d7f,	// (0x0005d33c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3d7f,	// (0x0005d33c) single_mobtv_pg_channel_thumb_pane_g2

0x3d8b,	// (0x0005d348) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3d8b,	// (0x0005d348) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x00069222) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x00069222) single_mobtv_pg_channel_thumb_pane_g

0x3d97,	// (0x0005d354) single_mobtv_pg_channel_thumb_pane_t1

0x3da5,	// (0x0005d362) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x00069229) single_mobtv_pg_channel_thumb_pane_t

0x2598,	// (0x0005bb55) bg_single_mobtv_pg_channel_table_pane_g1

0x2598,	// (0x0005bb55) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x00068cdf) bg_single_mobtv_pg_channel_table_pane_g

0x3db3,	// (0x0005d370) single_mobtv_pg_channel_table_pane_t1

0x3dc1,	// (0x0005d37e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x0006922e) single_mobtv_pg_channel_table_pane_t

0xd871,	// (0x00066e2e) main_mobtv_info_pane_g1_ParamLimits

0xd871,	// (0x00066e2e) main_mobtv_info_pane_g1

0xd88d,	// (0x00066e4a) main_mobtv_info_pane_t1_ParamLimits

0xd88d,	// (0x00066e4a) main_mobtv_info_pane_t1

0xd8f3,	// (0x00066eb0) main_mobtv_info_pane_t2_ParamLimits

0xd8f3,	// (0x00066eb0) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x00069238) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x00069238) main_mobtv_info_pane_t

0xd976,	// (0x00066f33) wait_bar_pane_cp05

0xd986,	// (0x00066f43) main_mobtv_loading_pane_g1_ParamLimits

0xd986,	// (0x00066f43) main_mobtv_loading_pane_g1

0xd992,	// (0x00066f4f) main_mobtv_loading_pane_g2_ParamLimits

0xd992,	// (0x00066f4f) main_mobtv_loading_pane_g2

0xd99e,	// (0x00066f5b) main_mobtv_loading_pane_g3_ParamLimits

0xd99e,	// (0x00066f5b) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x0006923f) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x0006923f) main_mobtv_loading_pane_g

0x3dcf,	// (0x0005d38c) main_mobtv_loading_pane_t1_ParamLimits

0x3dcf,	// (0x0005d38c) main_mobtv_loading_pane_t1

0x3de7,	// (0x0005d3a4) main_mobtv_loading_pane_t2_ParamLimits

0x3de7,	// (0x0005d3a4) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x00069246) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x00069246) main_mobtv_loading_pane_t

0xd9aa,	// (0x00066f67) wait_bar_pane_cp06_ParamLimits

0xd9aa,	// (0x00066f67) wait_bar_pane_cp06

0x3e0b,	// (0x0005d3c8) main_mobtv_programe_curr_pane_t1

0x3e19,	// (0x0005d3d6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x0006924b) main_mobtv_programe_curr_pane_t

0x3e27,	// (0x0005d3e4) main_mobtv_programe_next_pane_t1

0x3e35,	// (0x0005d3f2) main_mobtv_programe_next_pane_t2

0x3e43,	// (0x0005d400) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x00069250) main_mobtv_programe_next_pane_t

0x6d05,	// (0x000602c2) bg_popup_mobtv_noti_window_pane

0x3e51,	// (0x0005d40e) popup_mobtv_noti_window_g1

0x3e59,	// (0x0005d416) popup_mobtv_noti_window_t1

0x3e67,	// (0x0005d424) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x00069257) popup_mobtv_noti_window_t

0x2598,	// (0x0005bb55) bg_popup_mobtv_noti_window_pane_g1

0x6d05,	// (0x000602c2) sc_clock_pane

0x6d05,	// (0x000602c2) main_fs_bigclock_pane

0xd21b,	// (0x000667d8) blid2_tripm_pane_t4_ParamLimits

0xd21b,	// (0x000667d8) blid2_tripm_pane_t4

0xd9b6,	// (0x00066f73) sc_clock_pane_g1_ParamLimits

0xd9b6,	// (0x00066f73) sc_clock_pane_g1

0xd9c4,	// (0x00066f81) sc_clock_pane_t1_ParamLimits

0xd9c4,	// (0x00066f81) sc_clock_pane_t1

0xd9d7,	// (0x00066f94) sc_clock_pane_t2_ParamLimits

0xd9d7,	// (0x00066f94) sc_clock_pane_t2

0xd9e9,	// (0x00066fa6) sc_clock_pane_t3_ParamLimits

0xd9e9,	// (0x00066fa6) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x0006925c) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x0006925c) sc_clock_pane_t

0xe4f3,	// (0x00067ab0) main_fs_bigclock_indicator_pane_ParamLimits

0xe4f3,	// (0x00067ab0) main_fs_bigclock_indicator_pane

0xda61,	// (0x0006701e) main_fs_bigclock_pane_g1_ParamLimits

0xda61,	// (0x0006701e) main_fs_bigclock_pane_g1

0xe4ff,	// (0x00067abc) main_fs_bigclock_pane_t1_ParamLimits

0xe4ff,	// (0x00067abc) main_fs_bigclock_pane_t1

0xe511,	// (0x00067ace) main_fs_bigclock_pane_t2_ParamLimits

0xe511,	// (0x00067ace) main_fs_bigclock_pane_t2

0xe523,	// (0x00067ae0) main_fs_bigclock_pane_t3_ParamLimits

0xe523,	// (0x00067ae0) main_fs_bigclock_pane_t3

0x0002,

0xfe99,	// (0x00069456) main_fs_bigclock_pane_t_ParamLimits

0xfe99,	// (0x00069456) main_fs_bigclock_pane_t

0xe535,	// (0x00067af2) main_fs_bigclock_indicator_pane_g1

0x3b4f,	// (0x0005d10c) ncim_query_content_pane_g2_ParamLimits

0x3b4f,	// (0x0005d10c) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x000691e9) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x000691e9) ncim_query_content_pane_g

0xd9fb,	// (0x00066fb8) sc_clock_pane_t4_ParamLimits

0xd9fb,	// (0x00066fb8) sc_clock_pane_t4

0xed0f,	// (0x000682cc) main_radioblah_pane

0x2ebf,	// (0x0005c47c) cell_call4_button_pane_t1_copy1_ParamLimits

0x2ebf,	// (0x0005c47c) cell_call4_button_pane_t1_copy1

0xd6fa,	// (0x00066cb7) main_ncimui_pane_t1_ParamLimits

0xd6fa,	// (0x00066cb7) main_ncimui_pane_t1

0xd70c,	// (0x00066cc9) main_ncimui_pane_t2_ParamLimits

0xd70c,	// (0x00066cc9) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x000691e2) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x000691e2) main_ncimui_pane_t

0x3f91,	// (0x0005d54e) main_radioblah_anim_pane_ParamLimits

0x3f91,	// (0x0005d54e) main_radioblah_anim_pane

0x3fa2,	// (0x0005d55f) main_radioblah_info_pane_ParamLimits

0x3fa2,	// (0x0005d55f) main_radioblah_info_pane

0x3fb6,	// (0x0005d573) main_radioblah_pane_t1_ParamLimits

0x3fb6,	// (0x0005d573) main_radioblah_pane_t1

0x3fd2,	// (0x0005d58f) main_radioblah_pane_t2_ParamLimits

0x3fd2,	// (0x0005d58f) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x0006927d) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x0006927d) main_radioblah_pane_t

0xdaa9,	// (0x00067066) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdaa9,	// (0x00067066) main_radioblah_rocker_ctrl_pane

0x401a,	// (0x0005d5d7) main_radioblah_info_pane_t1_ParamLimits

0x401a,	// (0x0005d5d7) main_radioblah_info_pane_t1

0xdaee,	// (0x000670ab) main_radioblah_info_pane_t2_ParamLimits

0xdaee,	// (0x000670ab) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x00069286) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x00069286) main_radioblah_info_pane_t

0x2598,	// (0x0005bb55) main_radioblah_rocker_ctrl_pane_g1

0xdb96,	// (0x00067153) main_radioblah_rocker_ctrl_pane_g2

0xdb9e,	// (0x0006715b) main_radioblah_rocker_ctrl_pane_g3

0xdba6,	// (0x00067163) main_radioblah_rocker_ctrl_pane_g4

0xdbae,	// (0x0006716b) main_radioblah_rocker_ctrl_pane_g5

0xdbb6,	// (0x00067173) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x0006928f) main_radioblah_rocker_ctrl_pane_g

0xd6c7,	// (0x00066c84) main_cset_text2_pane_t1_copy1_ParamLimits

0xc16d,	// (0x0006572a) cam4_image_uncrop_qvga_pane

0xc281,	// (0x0006583e) vid4_image_uncrop_qcif_pane

0xd399,	// (0x00066956) cam6_image_uncrop_qvga_pane_ParamLimits

0xd399,	// (0x00066956) cam6_image_uncrop_qvga_pane

0x3766,	// (0x0005cd23) vid6_image_uncrop_qcif_pane_ParamLimits

0x3766,	// (0x0005cd23) vid6_image_uncrop_qcif_pane

0x6d05,	// (0x000602c2) bg_popup_preview_window_pane_cp03

0x3b01,	// (0x0005d0be) list_cset_text2_pane

0x3b09,	// (0x0005d0c6) main_cset6_text2_pane_g1

0x3b11,	// (0x0005d0ce) main_cset6_text2_pane_t1

0xdbbe,	// (0x0006717b) list_cset_text2_pane_t1_ParamLimits

0xdbbe,	// (0x0006717b) list_cset_text2_pane_t1

0xed0f,	// (0x000682cc) main_radioblah_pane_ParamLimits

0xd964,	// (0x00066f21) main_mobtv_info_pane_t3_ParamLimits

0xd964,	// (0x00066f21) main_mobtv_info_pane_t3

0xda97,	// (0x00067054) main_radioblah_pane_g1

0xdac2,	// (0x0006707f) main_radioblah_info_pane_g1

0xdb3d,	// (0x000670fa) main_radioblah_info_pane_t3_ParamLimits

0xdb3d,	// (0x000670fa) main_radioblah_info_pane_t3

0x91fd,	// (0x000627ba) highlight_cell_cale_month_pane_ParamLimits

0x91fd,	// (0x000627ba) highlight_cell_cale_month_pane

0x6d05,	// (0x000602c2) main_phob_fisheye_pane

0x2911,	// (0x0005bece) scroll_pane_cp0031_ParamLimits

0x2911,	// (0x0005bece) scroll_pane_cp0031

0x3870,	// (0x0005ce2d) wait_bar_pane_cp08_ParamLimits

0xd52a,	// (0x00066ae7) cset_list_set_pane_copy1_ParamLimits

0x4054,	// (0x0005d611) highlight_cell_cale_month_pane_g1

0xdbd5,	// (0x00067192) highlight_cell_cale_month_pane_t1

0x405c,	// (0x0005d619) list_gen_pane_cp01

0x30ad,	// (0x0005c66a) scroll_pane_01

0xdbe3,	// (0x000671a0) list_single_double_fisheye_pane

0x641d,	// (0x0005f9da) list_double_fisheye_pane_g1_ParamLimits

0x641d,	// (0x0005f9da) list_double_fisheye_pane_g1

0xdbec,	// (0x000671a9) list_double_fisheye_pane_g2_ParamLimits

0xdbec,	// (0x000671a9) list_double_fisheye_pane_g2

0xdc00,	// (0x000671bd) list_double_fisheye_pane_g3_ParamLimits

0xdc00,	// (0x000671bd) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x0006929c) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x0006929c) list_double_fisheye_pane_g

0x6435,	// (0x0005f9f2) list_double_fisheye_pane_t1_ParamLimits

0x6435,	// (0x0005f9f2) list_double_fisheye_pane_t1

0x6450,	// (0x0005fa0d) list_double_fisheye_pane_t2_ParamLimits

0x6450,	// (0x0005fa0d) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x000692a7) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x000692a7) list_double_fisheye_pane_t

0x6d05,	// (0x000602c2) main_call5_pane

0xda21,	// (0x00066fde) sc_swipe_pane_ParamLimits

0xda21,	// (0x00066fde) sc_swipe_pane

0xdc29,	// (0x000671e6) call5_image_pane_ParamLimits

0xdc29,	// (0x000671e6) call5_image_pane

0xdc35,	// (0x000671f2) call5_swipe_1_pane_ParamLimits

0xdc35,	// (0x000671f2) call5_swipe_1_pane

0xdc41,	// (0x000671fe) call5_swipe_2_pane_ParamLimits

0xdc41,	// (0x000671fe) call5_swipe_2_pane

0xdc59,	// (0x00067216) popup_call5_audio_first_window_ParamLimits

0xdc59,	// (0x00067216) popup_call5_audio_first_window

0x27c7,	// (0x0005bd84) call5_swipe_1_pane_g1_ParamLimits

0x27c7,	// (0x0005bd84) call5_swipe_1_pane_g1

0x40df,	// (0x0005d69c) call5_swipe_1_pane_g2_ParamLimits

0x40df,	// (0x0005d69c) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x000692ac) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x000692ac) call5_swipe_1_pane_g

0x40eb,	// (0x0005d6a8) call5_swipe_1_pane_t1_ParamLimits

0x40eb,	// (0x0005d6a8) call5_swipe_1_pane_t1

0x27c7,	// (0x0005bd84) call5_swipe_2_pane_g1_ParamLimits

0x27c7,	// (0x0005bd84) call5_swipe_2_pane_g1

0x4100,	// (0x0005d6bd) call5_swipe_2_pane_g2_ParamLimits

0x4100,	// (0x0005d6bd) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x000692b1) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x000692b1) call5_swipe_2_pane_g

0x410c,	// (0x0005d6c9) call5_swipe_2_pane_t1_ParamLimits

0x410c,	// (0x0005d6c9) call5_swipe_2_pane_t1

0x4121,	// (0x0005d6de) sc_swipe_pane_g1_ParamLimits

0x4121,	// (0x0005d6de) sc_swipe_pane_g1

0x412e,	// (0x0005d6eb) sc_swipe_pane_g2_ParamLimits

0x412e,	// (0x0005d6eb) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x000692b6) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x000692b6) sc_swipe_pane_g

0x413a,	// (0x0005d6f7) sc_swipe_pane_t1_ParamLimits

0x413a,	// (0x0005d6f7) sc_swipe_pane_t1

0x6d05,	// (0x000602c2) main_cmail_launcher_pane

0xdc65,	// (0x00067222) aid_size_cell_cmail_l_ParamLimits

0xdc65,	// (0x00067222) aid_size_cell_cmail_l

0xdc75,	// (0x00067232) grid_cmail_l_pane_ParamLimits

0xdc75,	// (0x00067232) grid_cmail_l_pane

0xdc81,	// (0x0006723e) cell_cmail_l_pane_ParamLimits

0xdc81,	// (0x0006723e) cell_cmail_l_pane

0xdc93,	// (0x00067250) cell_cmail_l_pane_g1_ParamLimits

0xdc93,	// (0x00067250) cell_cmail_l_pane_g1

0xdca3,	// (0x00067260) cell_cmail_l_pane_t1_ParamLimits

0xdca3,	// (0x00067260) cell_cmail_l_pane_t1

0x414f,	// (0x0005d70c) cell_cmail_l_pane_t2_ParamLimits

0x414f,	// (0x0005d70c) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x000692bb) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x000692bb) cell_cmail_l_pane_t

0xed0f,	// (0x000682cc) grid_highlight_pane_cp018_ParamLimits

0xed0f,	// (0x000682cc) grid_highlight_pane_cp018

0x6dfb,	// (0x000603b8) main2_pane_ParamLimits

0x6dfb,	// (0x000603b8) main2_pane

0x7be2,	// (0x0006119f) popup_sp_fs_action_menu_bg_pane_g1

0x7bea,	// (0x000611a7) popup_sp_fs_action_menu_bg_pane_g2

0x7bf2,	// (0x000611af) popup_sp_fs_action_menu_bg_pane_g3

0x7bfa,	// (0x000611b7) popup_sp_fs_action_menu_bg_pane_g4

0x7c02,	// (0x000611bf) popup_sp_fs_action_menu_bg_pane_g5

0x7c0a,	// (0x000611c7) popup_sp_fs_action_menu_bg_pane_g6

0x7c12,	// (0x000611cf) popup_sp_fs_action_menu_bg_pane_g7

0x7c1a,	// (0x000611d7) popup_sp_fs_action_menu_bg_pane_g8

0x7c22,	// (0x000611df) popup_sp_fs_action_menu_bg_pane_g9

0x7c2a,	// (0x000611e7) popup_sp_fs_action_menu_bg_pane_g10

0x7c2a,	// (0x000611e7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00068778) popup_sp_fs_action_menu_bg_pane_g

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t3_g3_g1

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t3_g3_g2

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00068828) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00068828) list_medium_line_x2_t3_g3_g

0x5d4e,	// (0x0005f30b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5d4e,	// (0x0005f30b) list_medium_line_x2_t3_g3_t1

0x5d63,	// (0x0005f320) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5d63,	// (0x0005f320) list_medium_line_x2_t3_g3_t2

0x5d75,	// (0x0005f332) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5d75,	// (0x0005f332) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0006882f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0006882f) list_medium_line_x2_t3_g3_t

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t3_g2_g1

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00068836) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00068836) list_medium_line_x2_t3_g2_g

0x5d8a,	// (0x0005f347) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5d8a,	// (0x0005f347) list_medium_line_x2_t3_g2_t1

0x5da0,	// (0x0005f35d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5da0,	// (0x0005f35d) list_medium_line_x2_t3_g2_t2

0x5d75,	// (0x0005f332) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5d75,	// (0x0005f332) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0006883b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0006883b) list_medium_line_x2_t3_g2_t

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t4_g4_g1

0x5db2,	// (0x0005f36f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5db2,	// (0x0005f36f) list_medium_line_x2_t4_g4_g2

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t4_g4_g3

0x5dbe,	// (0x0005f37b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5dbe,	// (0x0005f37b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00068842) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00068842) list_medium_line_x2_t4_g4_g

0x5dca,	// (0x0005f387) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5dca,	// (0x0005f387) list_medium_line_x2_t4_g4_t1

0x5de1,	// (0x0005f39e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5de1,	// (0x0005f39e) list_medium_line_x2_t4_g4_t2

0x5df6,	// (0x0005f3b3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5df6,	// (0x0005f3b3) list_medium_line_x2_t4_g4_t3

0x5e08,	// (0x0005f3c5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5e08,	// (0x0005f3c5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0006884b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0006884b) list_medium_line_x2_t4_g4_t

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t2_g4_g1

0x5db2,	// (0x0005f36f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5db2,	// (0x0005f36f) list_medium_line_x2_t2_g4_g2

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t2_g4_g3

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000688b2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000688b2) list_medium_line_x2_t2_g4_g

0x5e1a,	// (0x0005f3d7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5e1a,	// (0x0005f3d7) list_medium_line_x2_t2_g4_t1

0x5d75,	// (0x0005f332) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5d75,	// (0x0005f332) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x000688bb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x000688bb) list_medium_line_x2_t2_g4_t

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t2_g3_g1

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t2_g3_g2

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00068828) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00068828) list_medium_line_x2_t2_g3_g

0x5e2f,	// (0x0005f3ec) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5e2f,	// (0x0005f3ec) list_medium_line_x2_t2_g3_t1

0x5d75,	// (0x0005f332) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5d75,	// (0x0005f332) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000688c0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000688c0) list_medium_line_x2_t2_g3_t

0x9584,	// (0x00062b41) main_sp_fs_list_pane_ParamLimits

0x9584,	// (0x00062b41) main_sp_fs_list_pane

0x9591,	// (0x00062b4e) sp_fs_scroll_pane_ParamLimits

0x9591,	// (0x00062b4e) sp_fs_scroll_pane

0x5e44,	// (0x0005f401) list_medium_line_x2_t3_t1

0x5e54,	// (0x0005f411) list_medium_line_x2_t3_t2

0x5e62,	// (0x0005f41f) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0006890b) list_medium_line_x2_t3_t

0x5e70,	// (0x0005f42d) list_medium_line_x3_t4_t1

0x5e80,	// (0x0005f43d) list_medium_line_x3_t4_t2

0x5e8e,	// (0x0005f44b) list_medium_line_x3_t4_t3

0x5e9c,	// (0x0005f459) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00068912) list_medium_line_x3_t4_t

0x5eaa,	// (0x0005f467) list_medium_line_x4_t5_t1

0x5eba,	// (0x0005f477) list_medium_line_x4_t5_t2

0x5e8e,	// (0x0005f44b) list_medium_line_x4_t5_t3

0x5ec8,	// (0x0005f485) list_medium_line_x4_t5_t4

0x5e9c,	// (0x0005f459) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0006891b) list_medium_line_x4_t5_t

0x5d2a,	// (0x0005f2e7) list_medium_line_t4_g4_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_t4_g4_g1

0x5dbe,	// (0x0005f37b) list_medium_line_t4_g4_g2_ParamLimits

0x5dbe,	// (0x0005f37b) list_medium_line_t4_g4_g2

0x5ed6,	// (0x0005f493) list_medium_line_t4_g4_g3_ParamLimits

0x5ed6,	// (0x0005f493) list_medium_line_t4_g4_g3

0x5d42,	// (0x0005f2ff) list_medium_line_t4_g4_g4_ParamLimits

0x5d42,	// (0x0005f2ff) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00068926) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00068926) list_medium_line_t4_g4_g

0x5ee2,	// (0x0005f49f) list_medium_line_t4_g4_t1_ParamLimits

0x5ee2,	// (0x0005f49f) list_medium_line_t4_g4_t1

0x5ef7,	// (0x0005f4b4) list_medium_line_t4_g4_t2_ParamLimits

0x5ef7,	// (0x0005f4b4) list_medium_line_t4_g4_t2

0x5f0d,	// (0x0005f4ca) list_medium_line_t4_g4_t3_ParamLimits

0x5f0d,	// (0x0005f4ca) list_medium_line_t4_g4_t3

0x5f23,	// (0x0005f4e0) list_medium_line_t4_g4_t4_ParamLimits

0x5f23,	// (0x0005f4e0) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0006892f) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0006892f) list_medium_line_t4_g4_t

0x97ba,	// (0x00062d77) chi_dic_find_pane_g1

0xa49a,	// (0x00063a57) main_tport_pane

0x6140,	// (0x0005f6fd) list_medium_line_plain_t1

0x5d2a,	// (0x0005f2e7) list_medium_line_t2_g2_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_t2_g2_g1

0x5d36,	// (0x0005f2f3) list_medium_line_t2_g2_g2_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x00068ffe) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x00068ffe) list_medium_line_t2_g2_g

0x614e,	// (0x0005f70b) list_medium_line_t2_g2_t1_ParamLimits

0x614e,	// (0x0005f70b) list_medium_line_t2_g2_t1

0x6165,	// (0x0005f722) list_medium_line_t2_g2_t2_ParamLimits

0x6165,	// (0x0005f722) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x00069003) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x00069003) list_medium_line_t2_g2_t

0x62ee,	// (0x0005f8ab) aid_sp_fs_list_icon_a_sm

0xd063,	// (0x00066620) aid_sp_fs_list_icon_d

0x62f6,	// (0x0005f8b3) aid_sp_fs_text_primary

0x3507,	// (0x0005cac4) aid_sp_fs_text_secondary

0xd06b,	// (0x00066628) list_medium_line

0xd06b,	// (0x00066628) list_medium_line_g2

0xd06b,	// (0x00066628) list_medium_line_g3

0xd06b,	// (0x00066628) list_medium_line_plain

0xd06b,	// (0x00066628) list_medium_line_plain_t2

0xd06b,	// (0x00066628) list_medium_line_plain_t3

0xd06b,	// (0x00066628) list_medium_line_right_icon

0xd06b,	// (0x00066628) list_medium_line_right_iconx2

0xd06b,	// (0x00066628) list_medium_line_t2

0xd06b,	// (0x00066628) list_medium_line_t2_g2

0xd06b,	// (0x00066628) list_medium_line_t2_g3

0xd06b,	// (0x00066628) list_medium_line_t2_right_icon

0xd06b,	// (0x00066628) list_medium_line_t2_right_iconx2

0xd06b,	// (0x00066628) list_medium_line_t3

0xd06b,	// (0x00066628) list_medium_line_t3_g2

0xd06b,	// (0x00066628) list_medium_line_t3_g3

0xd06b,	// (0x00066628) list_medium_line_t3_right_iconx2

0x62ff,	// (0x0005f8bc) list_medium_line_t4_g4

0x6308,	// (0x0005f8c5) list_medium_line_x2

0x6308,	// (0x0005f8c5) list_medium_line_x2_t2_g2

0x6308,	// (0x0005f8c5) list_medium_line_x2_t2_g3

0x6308,	// (0x0005f8c5) list_medium_line_x2_t2_g4

0x6308,	// (0x0005f8c5) list_medium_line_x2_t3

0x6308,	// (0x0005f8c5) list_medium_line_x2_t3_g2

0x6308,	// (0x0005f8c5) list_medium_line_x2_t3_g3

0x6308,	// (0x0005f8c5) list_medium_line_x2_t3_g4

0x6308,	// (0x0005f8c5) list_medium_line_x2_t4_g2

0x6308,	// (0x0005f8c5) list_medium_line_x2_t4_g4

0x6311,	// (0x0005f8ce) list_medium_line_x3

0x6311,	// (0x0005f8ce) list_medium_line_x3_t4

0x6311,	// (0x0005f8ce) list_medium_line_x3_t4_g4

0x62ff,	// (0x0005f8bc) list_medium_line_x4_t4

0x62ff,	// (0x0005f8bc) list_medium_line_x4_t4_g7

0x62ff,	// (0x0005f8bc) list_medium_line_x4_t5

0x631a,	// (0x0005f8d7) list_single_fs_dyc_pane_ParamLimits

0x631a,	// (0x0005f8d7) list_single_fs_dyc_pane

0x5d2a,	// (0x0005f2e7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x4_t4_g7_g1

0x6352,	// (0x0005f90f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6352,	// (0x0005f90f) list_medium_line_x4_t4_g7_g2

0x635e,	// (0x0005f91b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x635e,	// (0x0005f91b) list_medium_line_x4_t4_g7_g3

0x636d,	// (0x0005f92a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x636d,	// (0x0005f92a) list_medium_line_x4_t4_g7_g4

0x6379,	// (0x0005f936) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6379,	// (0x0005f936) list_medium_line_x4_t4_g7_g5

0x6388,	// (0x0005f945) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6388,	// (0x0005f945) list_medium_line_x4_t4_g7_g6

0x6397,	// (0x0005f954) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6397,	// (0x0005f954) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x000691c8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x000691c8) list_medium_line_x4_t4_g7_g

0x63a3,	// (0x0005f960) list_medium_line_x4_t4_g7_t1_ParamLimits

0x63a3,	// (0x0005f960) list_medium_line_x4_t4_g7_t1

0x63b8,	// (0x0005f975) list_medium_line_x4_t4_g7_t2_ParamLimits

0x63b8,	// (0x0005f975) list_medium_line_x4_t4_g7_t2

0x63cd,	// (0x0005f98a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x63cd,	// (0x0005f98a) list_medium_line_x4_t4_g7_t3

0x63e2,	// (0x0005f99f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x63e2,	// (0x0005f99f) list_medium_line_x4_t4_g7_t4

0x63f4,	// (0x0005f9b1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x63f4,	// (0x0005f9b1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x000691d7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x000691d7) list_medium_line_x4_t4_g7_t

0x6406,	// (0x0005f9c3) list_single_dyc_row_pane_ParamLimits

0x6406,	// (0x0005f9c3) list_single_dyc_row_pane

0xdc1d,	// (0x000671da) call5_gesture_pane_ParamLimits

0xdc1d,	// (0x000671da) call5_gesture_pane

0xdc4d,	// (0x0006720a) call5_windows_pane_ParamLimits

0xdc4d,	// (0x0006720a) call5_windows_pane

0xdcb9,	// (0x00067276) call5_swipe_1_pane_cp_ParamLimits

0xdcb9,	// (0x00067276) call5_swipe_1_pane_cp

0xdcc5,	// (0x00067282) call5_swipe_2_pane_cp_ParamLimits

0xdcc5,	// (0x00067282) call5_swipe_2_pane_cp

0x0cd4,	// (0x0005a291) call5_image_pane_cp

0xdcd1,	// (0x0006728e) popup_call5_audio_first_window_cp_ParamLimits

0xdcd1,	// (0x0006728e) popup_call5_audio_first_window_cp

0x4121,	// (0x0005d6de) call5_swipe_1_pane_g1_cp_ParamLimits

0x4121,	// (0x0005d6de) call5_swipe_1_pane_g1_cp

0x4161,	// (0x0005d71e) call5_swipe_1_pane_g2_cp

0x413a,	// (0x0005d6f7) call5_swipe_1_pane_t1_cp_ParamLimits

0x413a,	// (0x0005d6f7) call5_swipe_1_pane_t1_cp

0x4121,	// (0x0005d6de) call5_swipe_2_pane_g1_cp_ParamLimits

0x4121,	// (0x0005d6de) call5_swipe_2_pane_g1_cp

0x4169,	// (0x0005d726) call5_swipe_2_pane_g2_cp

0x4171,	// (0x0005d72e) call5_swipe_2_pane_t1_cp_ParamLimits

0x4171,	// (0x0005d72e) call5_swipe_2_pane_t1_cp

0xed0f,	// (0x000682cc) main_sp_fs_email_pane

0x4186,	// (0x0005d743) main_sp_fs_listscroll_pane_te

0x6472,	// (0x0005fa2f) popup_sp_fs_action_menu_pane_ParamLimits

0x6472,	// (0x0005fa2f) popup_sp_fs_action_menu_pane

0x2598,	// (0x0005bb55) bg_sp_fs_ctrlbar_pane_g1

0x418f,	// (0x0005d74c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4198,	// (0x0005d755) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x41a1,	// (0x0005d75e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2598,	// (0x0005bb55) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x000692c0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2385,	// (0x0005b942) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2385,	// (0x0005b942) bg_sp_fs_ctrlbar_ddmenu_pane

0x41aa,	// (0x0005d767) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x41aa,	// (0x0005d767) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xed3d,	// (0x000682fa) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xed3d,	// (0x000682fa) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x000692c9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x000692c9) main_sp_fs_ctrlbar_ddmenu_pane_g

0x41b6,	// (0x0005d773) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x41b6,	// (0x0005d773) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x64a2,	// (0x0005fa5f) list_medium_line_t2_right_icon_g1

0x64aa,	// (0x0005fa67) list_medium_line_t2_right_icon_t1

0x64b9,	// (0x0005fa76) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x000692ce) list_medium_line_t2_right_icon_t

0x2155,	// (0x0005b712) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2155,	// (0x0005b712) bg_sp_fs_ctrlbar_pane

0xdd32,	// (0x000672ef) main_sp_fs_ctrlbar_button_pane_cp01

0xdd3a,	// (0x000672f7) main_sp_fs_ctrlbar_ddmenu_pane

0x4220,	// (0x0005d7dd) main_sp_fs_ctrlbar_pane_g1

0x422c,	// (0x0005d7e9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x000692d3) main_sp_fs_ctrlbar_pane_g

0x4238,	// (0x0005d7f5) main_sp_fs_ctrlbar_pane_t1

0x64c7,	// (0x0005fa84) main_sp_fs_ctrlbar_pane

0x64df,	// (0x0005fa9c) main_sp_fs_listscroll_pane_te_cp01

0x64f0,	// (0x0005faad) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x64f0,	// (0x0005faad) popup_sp_fs_action_menu_pane_cp01

0xed0f,	// (0x000682cc) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xed0f,	// (0x000682cc) bg_sp_fs_highlight_list_pane_cp01

0x6512,	// (0x0005facf) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6512,	// (0x0005facf) sp_fs_action_menu_list_gene_pane_g1

0x424d,	// (0x0005d80a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x424d,	// (0x0005d80a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x000692d8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x000692d8) sp_fs_action_menu_list_gene_pane_g

0x6521,	// (0x0005fade) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6521,	// (0x0005fade) sp_fs_action_menu_list_gene_pane_t1

0x6539,	// (0x0005faf6) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6539,	// (0x0005faf6) sp_fs_action_menu_list_gene_pane

0x4272,	// (0x0005d82f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4272,	// (0x0005d82f) popup_sp_fs_action_menu_bg_pane

0x6556,	// (0x0005fb13) sp_fs_action_menu_list_pane_ParamLimits

0x6556,	// (0x0005fb13) sp_fs_action_menu_list_pane

0x4280,	// (0x0005d83d) sp_fs_scroll_pane_cp01_ParamLimits

0x4280,	// (0x0005d83d) sp_fs_scroll_pane_cp01

0x6572,	// (0x0005fb2f) list_medium_line_plain_t2_t1

0x6581,	// (0x0005fb3e) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x000692dd) list_medium_line_plain_t2_t

0x658f,	// (0x0005fb4c) list_medium_line_plain_t3_t1

0x659f,	// (0x0005fb5c) list_medium_line_plain_t3_t2

0x65ad,	// (0x0005fb6a) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x000692e2) list_medium_line_plain_t3_t

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t2_g2_g1

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00068836) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00068836) list_medium_line_x2_t2_g2_g

0x5ee2,	// (0x0005f49f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5ee2,	// (0x0005f49f) list_medium_line_x2_t2_g2_t1

0x5d75,	// (0x0005f332) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5d75,	// (0x0005f332) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x000692e9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x000692e9) list_medium_line_x2_t2_g2_t

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t4_g2_g1

0x65bb,	// (0x0005fb78) list_medium_line_x2_t4_g2_g2_ParamLimits

0x65bb,	// (0x0005fb78) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd31,	// (0x000692ee) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd31,	// (0x000692ee) list_medium_line_x2_t4_g2_g

0x65cd,	// (0x0005fb8a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x65cd,	// (0x0005fb8a) list_medium_line_x2_t4_g2_t1

0x65e4,	// (0x0005fba1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x65e4,	// (0x0005fba1) list_medium_line_x2_t4_g2_t2

0x65f9,	// (0x0005fbb6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x65f9,	// (0x0005fbb6) list_medium_line_x2_t4_g2_t3

0x5d75,	// (0x0005f332) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5d75,	// (0x0005f332) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd36,	// (0x000692f3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd36,	// (0x000692f3) list_medium_line_x2_t4_g2_t

0x660b,	// (0x0005fbc8) list_medium_line_t3_right_iconx2_g1

0x64a2,	// (0x0005fa5f) list_medium_line_t3_right_iconx2_g2

0x6613,	// (0x0005fbd0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3f,	// (0x000692fc) list_medium_line_t3_right_iconx2_g

0x661b,	// (0x0005fbd8) list_medium_line_t3_right_iconx2_t1

0x662b,	// (0x0005fbe8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd46,	// (0x00069303) list_medium_line_t3_right_iconx2_t

0x5d2a,	// (0x0005f2e7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x3_t4_g4_g1

0x5d36,	// (0x0005f2f3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_x3_t4_g4_g2

0x5dbe,	// (0x0005f37b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5dbe,	// (0x0005f37b) list_medium_line_x3_t4_g4_g3

0x6639,	// (0x0005fbf6) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6639,	// (0x0005fbf6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd4b,	// (0x00069308) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd4b,	// (0x00069308) list_medium_line_x3_t4_g4_g

0x614e,	// (0x0005f70b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x614e,	// (0x0005f70b) list_medium_line_x3_t4_g4_t1

0x6165,	// (0x0005f722) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6165,	// (0x0005f722) list_medium_line_x3_t4_g4_t2

0x6645,	// (0x0005fc02) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6645,	// (0x0005fc02) list_medium_line_x3_t4_g4_t3

0x665a,	// (0x0005fc17) list_medium_line_x3_t4_g4_t4_ParamLimits

0x665a,	// (0x0005fc17) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd54,	// (0x00069311) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd54,	// (0x00069311) list_medium_line_x3_t4_g4_t

0x6677,	// (0x0005fc34) list_single_dyc_row_text_pane_t1_ParamLimits

0x6677,	// (0x0005fc34) list_single_dyc_row_text_pane_t1

0x66ae,	// (0x0005fc6b) list_single_dyc_row_text_pane_t2_ParamLimits

0x66ae,	// (0x0005fc6b) list_single_dyc_row_text_pane_t2

0x6705,	// (0x0005fcc2) list_single_dyc_row_text_pane_t3_ParamLimits

0x6705,	// (0x0005fcc2) list_single_dyc_row_text_pane_t3

0x0002,

0xfd5d,	// (0x0006931a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd5d,	// (0x0006931a) list_single_dyc_row_text_pane_t

0x6717,	// (0x0005fcd4) list_single_dyc_row_pane_g1_ParamLimits

0x6717,	// (0x0005fcd4) list_single_dyc_row_pane_g1

0x6723,	// (0x0005fce0) list_single_dyc_row_pane_g2_ParamLimits

0x6723,	// (0x0005fce0) list_single_dyc_row_pane_g2

0x672f,	// (0x0005fcec) list_single_dyc_row_pane_g3_ParamLimits

0x672f,	// (0x0005fcec) list_single_dyc_row_pane_g3

0x673b,	// (0x0005fcf8) list_single_dyc_row_pane_g4_ParamLimits

0x673b,	// (0x0005fcf8) list_single_dyc_row_pane_g4

0x0003,

0xfd64,	// (0x00069321) list_single_dyc_row_pane_g_ParamLimits

0xfd64,	// (0x00069321) list_single_dyc_row_pane_g

0x6747,	// (0x0005fd04) list_single_dyc_row_text_pane_ParamLimits

0x6747,	// (0x0005fd04) list_single_dyc_row_text_pane

0x6d05,	// (0x000602c2) bg_sp_fs_scroll_pane

0x435e,	// (0x0005d91b) thumb_sp_fs_scroll_pane

0x5d2a,	// (0x0005f2e7) list_medium_line_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_g1

0x5ee2,	// (0x0005f49f) list_medium_line_t1_ParamLimits

0x5ee2,	// (0x0005f49f) list_medium_line_t1

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_g1

0x5d36,	// (0x0005f2f3) list_medium_line_x2_g2_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x00068ffe) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x00068ffe) list_medium_line_x2_g

0x6766,	// (0x0005fd23) list_medium_line_x2_t1_ParamLimits

0x6766,	// (0x0005fd23) list_medium_line_x2_t1

0x5d2a,	// (0x0005f2e7) list_medium_line_x3_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x3_g1

0x5d36,	// (0x0005f2f3) list_medium_line_x3_g2_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x00068ffe) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x00068ffe) list_medium_line_x3_g

0x6766,	// (0x0005fd23) list_medium_line_x3_t1_ParamLimits

0x6766,	// (0x0005fd23) list_medium_line_x3_t1

0x437d,	// (0x0005d93a) thumb_sp_fs_scroll_pane_g1

0x4386,	// (0x0005d943) thumb_sp_fs_scroll_pane_g2

0x438f,	// (0x0005d94c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0006932a) thumb_sp_fs_scroll_pane_g

0x437d,	// (0x0005d93a) bg_sp_fs_scroll_pane_g1

0x4386,	// (0x0005d943) bg_sp_fs_scroll_pane_g2

0x438f,	// (0x0005d94c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0006932a) bg_sp_fs_scroll_pane_g

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_x2_t3_g4_g1

0x5db2,	// (0x0005f36f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5db2,	// (0x0005f36f) list_medium_line_x2_t3_g4_g2

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_x2_t3_g4_g3

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5d42,	// (0x0005f2ff) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000688b2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000688b2) list_medium_line_x2_t3_g4_g

0x677c,	// (0x0005fd39) list_medium_line_x2_t3_g4_t1_ParamLimits

0x677c,	// (0x0005fd39) list_medium_line_x2_t3_g4_t1

0x6792,	// (0x0005fd4f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6792,	// (0x0005fd4f) list_medium_line_x2_t3_g4_t2

0x5d75,	// (0x0005f332) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5d75,	// (0x0005f332) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd74,	// (0x00069331) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd74,	// (0x00069331) list_medium_line_x2_t3_g4_t

0x5d2a,	// (0x0005f2e7) list_medium_line_g2_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_g2_g1

0x5d36,	// (0x0005f2f3) list_medium_line_g2_g2_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x00068ffe) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x00068ffe) list_medium_line_g2_g

0x5e2f,	// (0x0005f3ec) list_medium_line_g2_t1_ParamLimits

0x5e2f,	// (0x0005f3ec) list_medium_line_g2_t1

0x5d2a,	// (0x0005f2e7) list_medium_line_t3_g2_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_t3_g2_g1

0x5d36,	// (0x0005f2f3) list_medium_line_t3_g2_g2_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x00068ffe) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x00068ffe) list_medium_line_t3_g2_g

0x67ab,	// (0x0005fd68) list_medium_line_t3_g2_t1_ParamLimits

0x67ab,	// (0x0005fd68) list_medium_line_t3_g2_t1

0x67c5,	// (0x0005fd82) list_medium_line_t3_g2_t2_ParamLimits

0x67c5,	// (0x0005fd82) list_medium_line_t3_g2_t2

0x67da,	// (0x0005fd97) list_medium_line_t3_g2_t3_ParamLimits

0x67da,	// (0x0005fd97) list_medium_line_t3_g2_t3

0x0002,

0xfd7b,	// (0x00069338) list_medium_line_t3_g2_t_ParamLimits

0xfd7b,	// (0x00069338) list_medium_line_t3_g2_t

0x64a2,	// (0x0005fa5f) list_medium_line_right_icon_g1

0x67f0,	// (0x0005fdad) list_medium_line_right_icon_t1

0x5d2a,	// (0x0005f2e7) list_medium_line_t2_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_t2_g1

0x67fe,	// (0x0005fdbb) list_medium_line_t2_t1_ParamLimits

0x67fe,	// (0x0005fdbb) list_medium_line_t2_t1

0x6818,	// (0x0005fdd5) list_medium_line_t2_t2_ParamLimits

0x6818,	// (0x0005fdd5) list_medium_line_t2_t2

0x0001,

0xfd82,	// (0x0006933f) list_medium_line_t2_t_ParamLimits

0xfd82,	// (0x0006933f) list_medium_line_t2_t

0x5d2a,	// (0x0005f2e7) list_medium_line_t3_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_t3_g1

0x65cd,	// (0x0005fb8a) list_medium_line_t3_t1_ParamLimits

0x65cd,	// (0x0005fb8a) list_medium_line_t3_t1

0x65e4,	// (0x0005fba1) list_medium_line_t3_t2_ParamLimits

0x65e4,	// (0x0005fba1) list_medium_line_t3_t2

0x65f9,	// (0x0005fbb6) list_medium_line_t3_t3_ParamLimits

0x65f9,	// (0x0005fbb6) list_medium_line_t3_t3

0x0002,

0xfd87,	// (0x00069344) list_medium_line_t3_t_ParamLimits

0xfd87,	// (0x00069344) list_medium_line_t3_t

0x5d2a,	// (0x0005f2e7) list_medium_line_g3_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_g3_g1

0x5db2,	// (0x0005f36f) list_medium_line_g3_g2_ParamLimits

0x5db2,	// (0x0005f36f) list_medium_line_g3_g2

0x5d36,	// (0x0005f2f3) list_medium_line_g3_g3_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_g3_g3

0x0002,

0xfd8e,	// (0x0006934b) list_medium_line_g3_g_ParamLimits

0xfd8e,	// (0x0006934b) list_medium_line_g3_g

0x5e1a,	// (0x0005f3d7) list_medium_line_g3_t1_ParamLimits

0x5e1a,	// (0x0005f3d7) list_medium_line_g3_t1

0x5d2a,	// (0x0005f2e7) list_medium_line_t2_g3_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_t2_g3_g1

0x5db2,	// (0x0005f36f) list_medium_line_t2_g3_g2_ParamLimits

0x5db2,	// (0x0005f36f) list_medium_line_t2_g3_g2

0x5d36,	// (0x0005f2f3) list_medium_line_t2_g3_g3_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_t2_g3_g3

0x0002,

0xfd8e,	// (0x0006934b) list_medium_line_t2_g3_g_ParamLimits

0xfd8e,	// (0x0006934b) list_medium_line_t2_g3_g

0x682d,	// (0x0005fdea) list_medium_line_t2_g3_t1_ParamLimits

0x682d,	// (0x0005fdea) list_medium_line_t2_g3_t1

0x6844,	// (0x0005fe01) list_medium_line_t2_g3_t2_ParamLimits

0x6844,	// (0x0005fe01) list_medium_line_t2_g3_t2

0x0001,

0xfd95,	// (0x00069352) list_medium_line_t2_g3_t_ParamLimits

0xfd95,	// (0x00069352) list_medium_line_t2_g3_t

0x5d2a,	// (0x0005f2e7) list_medium_line_t3_g3_g1_ParamLimits

0x5d2a,	// (0x0005f2e7) list_medium_line_t3_g3_g1

0x5db2,	// (0x0005f36f) list_medium_line_t3_g3_g2_ParamLimits

0x5db2,	// (0x0005f36f) list_medium_line_t3_g3_g2

0x5d36,	// (0x0005f2f3) list_medium_line_t3_g3_g3_ParamLimits

0x5d36,	// (0x0005f2f3) list_medium_line_t3_g3_g3

0x0002,

0xfd8e,	// (0x0006934b) list_medium_line_t3_g3_g_ParamLimits

0xfd8e,	// (0x0006934b) list_medium_line_t3_g3_g

0x6859,	// (0x0005fe16) list_medium_line_t3_g3_t1_ParamLimits

0x6859,	// (0x0005fe16) list_medium_line_t3_g3_t1

0x686d,	// (0x0005fe2a) list_medium_line_t3_g3_t2_ParamLimits

0x686d,	// (0x0005fe2a) list_medium_line_t3_g3_t2

0x687f,	// (0x0005fe3c) list_medium_line_t3_g3_t3_ParamLimits

0x687f,	// (0x0005fe3c) list_medium_line_t3_g3_t3

0x0002,

0xfd9a,	// (0x00069357) list_medium_line_t3_g3_t_ParamLimits

0xfd9a,	// (0x00069357) list_medium_line_t3_g3_t

0x660b,	// (0x0005fbc8) list_medium_line_right_iconx2_g1

0x64a2,	// (0x0005fa5f) list_medium_line_right_iconx2_g2

0x0001,

0xfda1,	// (0x0006935e) list_medium_line_right_iconx2_g

0x6891,	// (0x0005fe4e) list_medium_line_right_iconx2_t1

0x660b,	// (0x0005fbc8) list_medium_line_t2_right_iconx2_g1

0x64a2,	// (0x0005fa5f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfda1,	// (0x0006935e) list_medium_line_t2_right_iconx2_g

0x689f,	// (0x0005fe5c) list_medium_line_t2_right_iconx2_t1

0x68af,	// (0x0005fe6c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda6,	// (0x00069363) list_medium_line_t2_right_iconx2_t

0x6140,	// (0x0005f6fd) list_medium_line_x4_t4_t1

0x68bd,	// (0x0005fe7a) list_medium_line_x4_t4_t2

0x68cb,	// (0x0005fe88) list_medium_line_x4_t4_t3

0x68d9,	// (0x0005fe96) list_medium_line_x4_t4_t4

0x0003,

0xfdab,	// (0x00069368) list_medium_line_x4_t4_t

0xdd69,	// (0x00067326) tport_appsw_pane_ParamLimits

0xdd69,	// (0x00067326) tport_appsw_pane

0xdd75,	// (0x00067332) tport_contact_pane_ParamLimits

0xdd75,	// (0x00067332) tport_contact_pane

0xdd83,	// (0x00067340) tport_listscroll_pane_ParamLimits

0xdd83,	// (0x00067340) tport_listscroll_pane

0xdd91,	// (0x0006734e) cell_tport_appsw_pane_ParamLimits

0xdd91,	// (0x0006734e) cell_tport_appsw_pane

0x28a0,	// (0x0005be5d) tport_appsw_pane_g1_ParamLimits

0x28a0,	// (0x0005be5d) tport_appsw_pane_g1

0x43b4,	// (0x0005d971) tport_contact_pane_g1

0x43bd,	// (0x0005d97a) tport_contact_pane_t1

0x43cb,	// (0x0005d988) tport_contact_pane_t2

0x0001,

0xfdb4,	// (0x00069371) tport_contact_pane_t

0x43d9,	// (0x0005d996) list_tport_pane

0x7c3c,	// (0x000611f9) scroll_pane_cp_030

0x43ea,	// (0x0005d9a7) cell_tport_appsw_pane_g1

0x43fa,	// (0x0005d9b7) cell_tport_appsw_pane_t1

0x6d05,	// (0x000602c2) grid_highlight_pane_cp019

0xddb8,	// (0x00067375) list_tport_double_graphic_pane_ParamLimits

0xddb8,	// (0x00067375) list_tport_double_graphic_pane

0xed0f,	// (0x000682cc) list_highlight_pane_cp023_ParamLimits

0xed0f,	// (0x000682cc) list_highlight_pane_cp023

0xddc5,	// (0x00067382) list_tport_double_graphic_pane_g1_ParamLimits

0xddc5,	// (0x00067382) list_tport_double_graphic_pane_g1

0xddd2,	// (0x0006738f) list_tport_double_graphic_pane_t1_ParamLimits

0xddd2,	// (0x0006738f) list_tport_double_graphic_pane_t1

0xdde7,	// (0x000673a4) list_tport_double_graphic_pane_t2_ParamLimits

0xdde7,	// (0x000673a4) list_tport_double_graphic_pane_t2

0x0001,

0xfdc0,	// (0x0006937d) list_tport_double_graphic_pane_t_ParamLimits

0xfdc0,	// (0x0006937d) list_tport_double_graphic_pane_t

0x6d05,	// (0x000602c2) main_cale_note_pane

0xc470,	// (0x00065a2d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc470,	// (0x00065a2d) cell_vitu2_function_top_wide_pane_cp01

0xd976,	// (0x00066f33) wait_bar_pane_cp05_ParamLimits

0x6d05,	// (0x000602c2) listscroll_cmail_pane

0x4408,	// (0x0005d9c5) list_cmail_pane

0xddf9,	// (0x000673b6) list_cmail_body_pane

0xddf9,	// (0x000673b6) list_single_cmail_header_caption_pane

0xde11,	// (0x000673ce) list_single_cmail_header_detail_pane_ParamLimits

0xde11,	// (0x000673ce) list_single_cmail_header_detail_pane

0x4424,	// (0x0005d9e1) list_single_cmail_header_caption_pane_t1

0x68ef,	// (0x0005feac) list_single_cmail_header_detail_pane_g1_ParamLimits

0x68ef,	// (0x0005feac) list_single_cmail_header_detail_pane_g1

0xde3b,	// (0x000673f8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xde3b,	// (0x000673f8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc5,	// (0x00069382) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc5,	// (0x00069382) list_single_cmail_header_detail_pane_g

0x6905,	// (0x0005fec2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6905,	// (0x0005fec2) list_single_cmail_header_detail_pane_t1

0x695b,	// (0x0005ff18) list_single_cmail_header_editor_pane_bg_ParamLimits

0x695b,	// (0x0005ff18) list_single_cmail_header_editor_pane_bg

0x4481,	// (0x0005da3e) list_cmail_body_pane_g1

0x448a,	// (0x0005da47) list_cmail_body_pane_t1

0x2fa7,	// (0x0005c564) list_single_cmail_header_editor_pane_bg_g1

0x89e7,	// (0x00061fa4) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2fb7,	// (0x0005c574) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2faf,	// (0x0005c56c) list_single_cmail_header_editor_pane_bg_g1_copy3

0x31de,	// (0x0005c79b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2fd7,	// (0x0005c594) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2fc7,	// (0x0005c584) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2fcf,	// (0x0005c58c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x89c7,	// (0x00061f84) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xde47,	// (0x00067404) calenote_gesture_pane_ParamLimits

0xde47,	// (0x00067404) calenote_gesture_pane

0xde5f,	// (0x0006741c) calenote_window_pane_ParamLimits

0xde5f,	// (0x0006741c) calenote_window_pane

0xde77,	// (0x00067434) popup_note_window_cp01

0xde80,	// (0x0006743d) calenote_swipe_1_pane_ParamLimits

0xde80,	// (0x0006743d) calenote_swipe_1_pane

0xdcc5,	// (0x00067282) calenote_swipe_2_pane_ParamLimits

0xdcc5,	// (0x00067282) calenote_swipe_2_pane

0x4121,	// (0x0005d6de) calenote_swipe_1_pane_g1_ParamLimits

0x4121,	// (0x0005d6de) calenote_swipe_1_pane_g1

0x412e,	// (0x0005d6eb) calenote_swipe_1_pane_g2_ParamLimits

0x412e,	// (0x0005d6eb) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x000692b6) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x000692b6) calenote_swipe_1_pane_g

0xde9c,	// (0x00067459) calenote_swipe_1_pane_t1_ParamLimits

0xde9c,	// (0x00067459) calenote_swipe_1_pane_t1

0x4121,	// (0x0005d6de) calenote_swipe_2_pane_g1_ParamLimits

0x4121,	// (0x0005d6de) calenote_swipe_2_pane_g1

0xdebb,	// (0x00067478) calenote_swipe_2_pane_g2_ParamLimits

0xdebb,	// (0x00067478) calenote_swipe_2_pane_g2

0x0001,

0xfdd1,	// (0x0006938e) calenote_swipe_2_pane_g_ParamLimits

0xfdd1,	// (0x0006938e) calenote_swipe_2_pane_g

0xdec7,	// (0x00067484) calenote_swipe_2_pane_t1_ParamLimits

0xdec7,	// (0x00067484) calenote_swipe_2_pane_t1

0x6d05,	// (0x000602c2) main_mup_navstr_pane

0xb351,	// (0x0006490e) main_mup3_pane_t7_ParamLimits

0xb351,	// (0x0006490e) main_mup3_pane_t7

0xbcdb,	// (0x00065298) main_mp4_pane_g6_ParamLimits

0xbcdb,	// (0x00065298) main_mp4_pane_g6

0xc00f,	// (0x000655cc) main_image3_pane_t4_ParamLimits

0xc00f,	// (0x000655cc) main_image3_pane_t4

0xdeee,	// (0x000674ab) popup_navstr_preview_pane_ParamLimits

0xdeee,	// (0x000674ab) popup_navstr_preview_pane

0xdefa,	// (0x000674b7) scroll_navstr_pane_ParamLimits

0xdefa,	// (0x000674b7) scroll_navstr_pane

0x6d05,	// (0x000602c2) bg_popup_preview_window_pane_cp04

0xdf06,	// (0x000674c3) popup_navstr_preview_pane_t1

0xdf14,	// (0x000674d1) scroll_navstr_pane_g1_ParamLimits

0xdf14,	// (0x000674d1) scroll_navstr_pane_g1

0xdf21,	// (0x000674de) scroll_navstr_pane_t1_ParamLimits

0xdf21,	// (0x000674de) scroll_navstr_pane_t1

0xde93,	// (0x00067450) bg_button_pane_cp014

0xde93,	// (0x00067450) bg_button_pane_cp030

0x6429,	// (0x0005f9e6) list_double_fisheye_pane_g4_ParamLimits

0x6429,	// (0x0005f9e6) list_double_fisheye_pane_g4

0xdc0c,	// (0x000671c9) list_double_fisheye_pane_g5_ParamLimits

0xdc0c,	// (0x000671c9) list_double_fisheye_pane_g5

0x4418,	// (0x0005d9d5) sp_fs_scroll_pane_cp03

0x4220,	// (0x0005d7dd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x422c,	// (0x0005d7e9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x000692d3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x4238,	// (0x0005d7f5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4410,	// (0x0005d9cd) sp_fs_scroll_pane_cp02

0x7cca,	// (0x00061287) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x7cca,	// (0x00061287) popup_sp_fs_calendar_preview_list_single_pane

0x6d05,	// (0x000602c2) main_cam6_pano_pane

0xed0f,	// (0x000682cc) main_mup3_pane_ParamLimits

0x6d05,	// (0x000602c2) main_phacti_pane

0xd869,	// (0x00066e26) bg_button_pane_cp11

0xd881,	// (0x00066e3e) main_mobtv_info_pane_g2_ParamLimits

0xd881,	// (0x00066e3e) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x00069233) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x00069233) main_mobtv_info_pane_g

0xda0d,	// (0x00066fca) sc_clock_pane_t5_ParamLimits

0xda0d,	// (0x00066fca) sc_clock_pane_t5

0xda97,	// (0x00067054) main_radioblah_pane_g1_ParamLimits

0x3fea,	// (0x0005d5a7) main_radioblah_pane_t3_ParamLimits

0x3fea,	// (0x0005d5a7) main_radioblah_pane_t3

0x4002,	// (0x0005d5bf) main_radioblah_pane_t4_ParamLimits

0x4002,	// (0x0005d5bf) main_radioblah_pane_t4

0xdab5,	// (0x00067072) main_radioblah_text_pane_ParamLimits

0xdab5,	// (0x00067072) main_radioblah_text_pane

0xdac2,	// (0x0006707f) main_radioblah_info_pane_g1_ParamLimits

0xdb4f,	// (0x0006710c) main_radioblah_info_pane_t4_ParamLimits

0xdb4f,	// (0x0006710c) main_radioblah_info_pane_t4

0xed0f,	// (0x000682cc) main_sp_fs_calendar_pane

0xdf33,	// (0x000674f0) main_phacti_pane_g1

0xdf44,	// (0x00067501) phacti_note_pane_ParamLimits

0xdf44,	// (0x00067501) phacti_note_pane

0xdf58,	// (0x00067515) phacti_term_pane_ParamLimits

0xdf58,	// (0x00067515) phacti_term_pane

0xdf6d,	// (0x0006752a) phacti_note_pane_t1_ParamLimits

0xdf6d,	// (0x0006752a) phacti_note_pane_t1

0x696d,	// (0x0005ff2a) phacti_term_pane_g1

0x6975,	// (0x0005ff32) phacti_term_pane_t1_ParamLimits

0x6975,	// (0x0005ff32) phacti_term_pane_t1

0xdf84,	// (0x00067541) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdf8c,	// (0x00067549) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfddb,	// (0x00069398) popup_sp_fs_calendar_preview_list_single_pane_g

0xdf94,	// (0x00067551) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdf94,	// (0x00067551) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdfaa,	// (0x00067567) aid_popup_sp_fs_bg_corner_pane

0x2598,	// (0x0005bb55) popup_sp_fs_calendar_preview_bg_pane_g1

0x6d05,	// (0x000602c2) popup_sp_fs_calendar_preview_bg_pane

0xdfb2,	// (0x0006756f) popup_sp_fs_calendar_preview_list_pane

0xed0f,	// (0x000682cc) bg_main_sp_fs_cale_pane_ParamLimits

0xed0f,	// (0x000682cc) bg_main_sp_fs_cale_pane

0x699f,	// (0x0005ff5c) listscroll_cale_mrui_pane_ParamLimits

0x699f,	// (0x0005ff5c) listscroll_cale_mrui_pane

0x3017,	// (0x0005c5d4) listscroll_sp_fs_schedule_track_pane

0x69b3,	// (0x0005ff70) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x69b3,	// (0x0005ff70) main_sp_fs_ctrlbar_pane_cp01

0xdfe1,	// (0x0006759e) main_sp_fs_ribbon_pane

0x69c4,	// (0x0005ff81) popup_sp_fs_cale_preview_window

0xdfe9,	// (0x000675a6) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdfe9,	// (0x000675a6) list_single_sp_fs_schedule_track_pane

0x6f51,	// (0x0006050e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6f51,	// (0x0006050e) bg_sp_fs_highlight_list_pane_cp03

0xdffe,	// (0x000675bb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdffe,	// (0x000675bb) list_single_sp_fs_schedule_track_pane_g1

0xe00a,	// (0x000675c7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe00a,	// (0x000675c7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfde0,	// (0x0006939d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfde0,	// (0x0006939d) list_single_sp_fs_schedule_track_pane_g

0xe016,	// (0x000675d3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe016,	// (0x000675d3) list_single_sp_fs_schedule_track_pane_t1

0xe02e,	// (0x000675eb) sp_fs_schedule_track_pane_ParamLimits

0xe02e,	// (0x000675eb) sp_fs_schedule_track_pane

0xe03e,	// (0x000675fb) sp_fs_schedule_track_pane_g1

0xe046,	// (0x00067603) sp_fs_schedule_track_pane_g2

0xe04e,	// (0x0006760b) sp_fs_schedule_track_pane_g3

0xe056,	// (0x00067613) sp_fs_schedule_track_pane_g4

0xe05e,	// (0x0006761b) sp_fs_schedule_track_pane_g5

0x0004,

0xfde5,	// (0x000693a2) sp_fs_schedule_track_pane_g

0x2fa7,	// (0x0005c564) bg_sp_fs_schedule_viewer_highlight_g1

0x89e7,	// (0x00061fa4) bg_sp_fs_schedule_viewer_highlight_g2

0x2faf,	// (0x0005c56c) bg_sp_fs_schedule_viewer_highlight_g3

0x2fb7,	// (0x0005c574) bg_sp_fs_schedule_viewer_highlight_g4

0x31de,	// (0x0005c79b) bg_sp_fs_schedule_viewer_highlight_g5

0x2fc7,	// (0x0005c584) bg_sp_fs_schedule_viewer_highlight_g6

0x2fcf,	// (0x0005c58c) bg_sp_fs_schedule_viewer_highlight_g7

0x2fd7,	// (0x0005c594) bg_sp_fs_schedule_viewer_highlight_g8

0x89c7,	// (0x00061f84) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdf0,	// (0x000693ad) bg_sp_fs_schedule_viewer_highlight_g

0x6d05,	// (0x000602c2) bg_main_sp_fs_ribbon_pane

0xc1fa,	// (0x000657b7) main_sp_fs_ribbon_pane_g1

0xe066,	// (0x00067623) main_sp_fs_ribbon_pane_t1

0xe075,	// (0x00067632) main_sp_fs_ribbon_pane_t2

0xe084,	// (0x00067641) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe03,	// (0x000693c0) main_sp_fs_ribbon_pane_t

0xe093,	// (0x00067650) main_sp_fs_ribbon_scheduler_pane

0xe09b,	// (0x00067658) bg_main_sp_fs_ribbon_pane_g1

0xe0a4,	// (0x00067661) bg_main_sp_fs_ribbon_pane_g2

0xe0ad,	// (0x0006766a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe0a,	// (0x000693c7) bg_main_sp_fs_ribbon_pane_g

0xe0b5,	// (0x00067672) main_sp_fs_ribbon_scheduler_pane_g1

0xe0be,	// (0x0006767b) main_sp_fs_ribbon_scheduler_pane_g2

0xe0c7,	// (0x00067684) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe11,	// (0x000693ce) main_sp_fs_ribbon_scheduler_pane_g

0x405c,	// (0x0005d619) list_cale_mrui_pane

0xe0d0,	// (0x0006768d) sp_fs_scroll_pane_cp07_ParamLimits

0xe0d0,	// (0x0006768d) sp_fs_scroll_pane_cp07

0xe0e5,	// (0x000676a2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe0e5,	// (0x000676a2) bg_sp_fs_schedule_viewer_highlight

0xe0f2,	// (0x000676af) list_single_sp_fs_schedule_track_pane_cp01

0xe0fa,	// (0x000676b7) list_sp_fs_schedule_track_pane

0xe102,	// (0x000676bf) sp_fs_scroll_pane_cp06_ParamLimits

0xe102,	// (0x000676bf) sp_fs_scroll_pane_cp06

0x2598,	// (0x0005bb55) bgmain_sp_fs_calendar_pane_g1

0x69d6,	// (0x0005ff93) list_single_cale_mrui_pane_ParamLimits

0x69d6,	// (0x0005ff93) list_single_cale_mrui_pane

0x69fb,	// (0x0005ffb8) list_single_cale_mrui_row_pane_ParamLimits

0x69fb,	// (0x0005ffb8) list_single_cale_mrui_row_pane

0x6a08,	// (0x0005ffc5) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6a08,	// (0x0005ffc5) list_single_cale_mrui_row_pane_g1

0x6a40,	// (0x0005fffd) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6a40,	// (0x0005fffd) list_single_cale_mrui_row_pane_t1

0x6a52,	// (0x0006000f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6a52,	// (0x0006000f) list_single_cale_mrui_row_pane_t2

0x6ab8,	// (0x00060075) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6ab8,	// (0x00060075) list_single_cale_mrui_row_pane_t3

0x6ae7,	// (0x000600a4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6ae7,	// (0x000600a4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe1d,	// (0x000693da) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe1d,	// (0x000693da) list_single_cale_mrui_row_pane_t

0x6b16,	// (0x000600d3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6b16,	// (0x000600d3) list_single_cmail_header_editor_pane_bg_cp01

0x6b3a,	// (0x000600f7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6b3a,	// (0x000600f7) list_single_cmail_header_editor_pane_bg_cp02

0xe114,	// (0x000676d1) main_radioblah_text_pane_t1_ParamLimits

0xe114,	// (0x000676d1) main_radioblah_text_pane_t1

0xe12d,	// (0x000676ea) cam6_indi_pane_cp01

0xe135,	// (0x000676f2) cam6_mode_pane_cp01

0xe13d,	// (0x000676fa) cam6_pano_pane

0xe146,	// (0x00067703) cam6_zoom_pane_cp01

0xe14e,	// (0x0006770b) cam6_pano_image_pane

0xe157,	// (0x00067714) cam6_pano_pane_g1

0x3d68,	// (0x0005d325) cam6_pano_pane_g2

0xe160,	// (0x0006771d) cam6_pano_pane_g3

0xe169,	// (0x00067726) cam6_pano_pane_g4

0x2afe,	// (0x0005c0bb) cam6_pano_pane_g5

0xe172,	// (0x0006772f) cam6_pano_pane_g6

0xe17a,	// (0x00067737) cam6_pano_pane_g7

0xe182,	// (0x0006773f) cam6_pano_pane_g8

0xe18b,	// (0x00067748) cam6_pano_pane_g9

0x0008,

0xfe26,	// (0x000693e3) cam6_pano_pane_g

0x6d05,	// (0x000602c2) main_browser_tag_pane

0xdee6,	// (0x000674a3) grid_navstr_albumart_pane

0xe194,	// (0x00067751) cell_navstr_albumart_pane_ParamLimits

0xe194,	// (0x00067751) cell_navstr_albumart_pane

0x0e55,	// (0x0005a412) cell_navstr_albumart_pane_g1

0x1f32,	// (0x0005b4ef) cell_navstr_albumart_pane_g2

0x1f42,	// (0x0005b4ff) cell_navstr_albumart_pane_g3

0x1f3a,	// (0x0005b4f7) cell_navstr_albumart_pane_g4

0x0003,

0xfe39,	// (0x000693f6) cell_navstr_albumart_pane_g

0xe1ab,	// (0x00067768) bt_list_pane_ParamLimits

0xe1ab,	// (0x00067768) bt_list_pane

0xe1c0,	// (0x0006777d) bt_list_pane_t1

0xe1cf,	// (0x0006778c) bt_list_pane_t2

0x0001,

0xfe42,	// (0x000693ff) bt_list_pane_t

0x6d05,	// (0x000602c2) main_cale_prevew_pane

0xe1de,	// (0x0006779b) popup_cale_preview_window_ParamLimits

0xe1de,	// (0x0006779b) popup_cale_preview_window

0xed0f,	// (0x000682cc) bg_popup_preview_window_pane_cp05_ParamLimits

0xed0f,	// (0x000682cc) bg_popup_preview_window_pane_cp05

0xe1f3,	// (0x000677b0) list_cale_preview_pane_ParamLimits

0xe1f3,	// (0x000677b0) list_cale_preview_pane

0xe1ff,	// (0x000677bc) list_double_cale_preview_pane_ParamLimits

0xe1ff,	// (0x000677bc) list_double_cale_preview_pane

0xe210,	// (0x000677cd) list_single_cale_preview_pane_ParamLimits

0xe210,	// (0x000677cd) list_single_cale_preview_pane

0xe224,	// (0x000677e1) list_single_cale_preview_pane_g1

0xe22c,	// (0x000677e9) list_single_cale_preview_pane_t1_ParamLimits

0xe22c,	// (0x000677e9) list_single_cale_preview_pane_t1

0xe241,	// (0x000677fe) list_double_cale_preview_pane_g1

0xe249,	// (0x00067806) list_double_cale_preview_pane_t1_ParamLimits

0xe249,	// (0x00067806) list_double_cale_preview_pane_t1

0xe25e,	// (0x0006781b) list_double_cale_preview_pane_t2_ParamLimits

0xe25e,	// (0x0006781b) list_double_cale_preview_pane_t2

0x0001,

0xfe47,	// (0x00069404) list_double_cale_preview_pane_t_ParamLimits

0xfe47,	// (0x00069404) list_double_cale_preview_pane_t

0x6d05,	// (0x000602c2) main_ezdial_pane

0xed0f,	// (0x000682cc) main_sp_fs_email_pane_ParamLimits

0xdcdd,	// (0x0006729a) cmail_ddmenu_btn01_pane_ParamLimits

0xdcdd,	// (0x0006729a) cmail_ddmenu_btn01_pane

0xdcfa,	// (0x000672b7) cmail_ddmenu_btn02_pane_ParamLimits

0xdcfa,	// (0x000672b7) cmail_ddmenu_btn02_pane

0xdd18,	// (0x000672d5) cmail_ddmenu_btn03_pane_ParamLimits

0xdd18,	// (0x000672d5) cmail_ddmenu_btn03_pane

0x64c7,	// (0x0005fa84) main_sp_fs_ctrlbar_pane_ParamLimits

0x64df,	// (0x0005fa9c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xddf9,	// (0x000673b6) list_cmail_body_pane_ParamLimits

0x68e7,	// (0x0005fea4) bg_button_pane_cp12

0x443a,	// (0x0005d9f7) list_single_cmail_header_detail_pane_g3_ParamLimits

0x443a,	// (0x0005d9f7) list_single_cmail_header_detail_pane_g3

0x6937,	// (0x0005fef4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6937,	// (0x0005fef4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdcc,	// (0x00069389) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdcc,	// (0x00069389) list_single_cmail_header_detail_pane_t

0x698a,	// (0x0005ff47) phacti_term_pane_t2_ParamLimits

0x698a,	// (0x0005ff47) phacti_term_pane_t2

0x0001,

0xfdd6,	// (0x00069393) phacti_term_pane_t_ParamLimits

0xfdd6,	// (0x00069393) phacti_term_pane_t

0xe276,	// (0x00067833) aid_size_list_single_double

0xe282,	// (0x0006783f) popup_ezdial_listscroll_window

0xe29b,	// (0x00067858) popup_number_entry_window_cp01

0x0cd4,	// (0x0005a291) bg_popup_call_pane_cp09

0xe2a7,	// (0x00067864) ezdial_list_pane

0xe2af,	// (0x0006786c) scroll_pane_cp23

0x2385,	// (0x0005b942) bg_button_pane_cp028_ParamLimits

0x2385,	// (0x0005b942) bg_button_pane_cp028

0xe2b7,	// (0x00067874) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe2b7,	// (0x00067874) cmail_ddmenu_btn01_pane_g1

0xe2c9,	// (0x00067886) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe2c9,	// (0x00067886) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe4c,	// (0x00069409) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe4c,	// (0x00069409) cmail_ddmenu_btn01_pane_g

0xe2d5,	// (0x00067892) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe2d5,	// (0x00067892) cmail_ddmenu_btn01_pane_t1

0x2155,	// (0x0005b712) bg_button_pane_cp029_ParamLimits

0x2155,	// (0x0005b712) bg_button_pane_cp029

0xe2c9,	// (0x00067886) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe2c9,	// (0x00067886) cmail_ddmenu_btn02_pane_g1

0xe2f6,	// (0x000678b3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe2f6,	// (0x000678b3) cmail_ddmenu_btn02_pane_t1

0x6f51,	// (0x0006050e) bg_button_pane_cp031_ParamLimits

0x6f51,	// (0x0006050e) bg_button_pane_cp031

0xe2c9,	// (0x00067886) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe2c9,	// (0x00067886) cmail_ddmenu_btn03_pane_g1

0xe2f6,	// (0x000678b3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe2f6,	// (0x000678b3) cmail_ddmenu_btn03_pane_t1

0xbecc,	// (0x00065489) cell_dialer2_keypad_pane_t1_ParamLimits

0xbee6,	// (0x000654a3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbee6,	// (0x000654a3) cell_dialer2_keypad_pane_t1_copy1

0xd730,	// (0x00066ced) ncimui_group_button_pane

0xed0f,	// (0x000682cc) main_sp_fs_calendar_pane_ParamLimits

0xddf9,	// (0x000673b6) list_single_cmail_header_caption_pane_ParamLimits

0x3507,	// (0x0005cac4) aid_recal_txt_sm_pane

0x6d05,	// (0x000602c2) mian_recal_day_pane

0x69c4,	// (0x0005ff81) popup_sp_fs_cale_preview_window_ParamLimits

0x6d05,	// (0x000602c2) list_recal_day_pane

0x6b61,	// (0x0006011e) list_single_recal_day_pane_ParamLimits

0x6b61,	// (0x0006011e) list_single_recal_day_pane

0xe32a,	// (0x000678e7) list_single_recal_day_pane_g1_ParamLimits

0xe32a,	// (0x000678e7) list_single_recal_day_pane_g1

0x6b73,	// (0x00060130) list_single_recal_day_pane_g2_ParamLimits

0x6b73,	// (0x00060130) list_single_recal_day_pane_g2

0x6b7f,	// (0x0006013c) list_single_recal_day_pane_g3_ParamLimits

0x6b7f,	// (0x0006013c) list_single_recal_day_pane_g3

0x6b8b,	// (0x00060148) list_single_recal_day_pane_g4_ParamLimits

0x6b8b,	// (0x00060148) list_single_recal_day_pane_g4

0x6b97,	// (0x00060154) list_single_recal_day_pane_g5_ParamLimits

0x6b97,	// (0x00060154) list_single_recal_day_pane_g5

0x6ba3,	// (0x00060160) list_single_recal_day_pane_g6_ParamLimits

0x6ba3,	// (0x00060160) list_single_recal_day_pane_g6

0x0005,

0xfe5b,	// (0x00069418) list_single_recal_day_pane_g_ParamLimits

0xfe5b,	// (0x00069418) list_single_recal_day_pane_g

0x6baf,	// (0x0006016c) list_single_recal_day_pane_t1

0x6bbd,	// (0x0006017a) list_single_recal_day_pane_t2

0x0001,

0xfe68,	// (0x00069425) list_single_recal_day_pane_t

0xe336,	// (0x000678f3) ncimui_query_button_pane_ParamLimits

0xe336,	// (0x000678f3) ncimui_query_button_pane

0xe346,	// (0x00067903) ncimui_query_button_pane_t1_ParamLimits

0xe346,	// (0x00067903) ncimui_query_button_pane_t1

0xe359,	// (0x00067916) ncimui_query_button_pane_t2_ParamLimits

0xe359,	// (0x00067916) ncimui_query_button_pane_t2

0x0001,

0xfe6d,	// (0x0006942a) ncimui_query_button_pane_t_ParamLimits

0xfe6d,	// (0x0006942a) ncimui_query_button_pane_t

0xe36c,	// (0x00067929) query_button_pane_ParamLimits

0xe36c,	// (0x00067929) query_button_pane

0x6d05,	// (0x000602c2) bg_button_pane_cp0028

0xe379,	// (0x00067936) query_button_pane_t1

0xa49a,	// (0x00063a57) main_tport_pane_ParamLimits

0xdd44,	// (0x00067301) bg_popup_window_pane_cp01_ParamLimits

0xdd44,	// (0x00067301) bg_popup_window_pane_cp01

0xdd51,	// (0x0006730e) heading_pane_cp08_ParamLimits

0xdd51,	// (0x0006730e) heading_pane_cp08

0xdd5d,	// (0x0006731a) heading_pane_cp07_ParamLimits

0xdd5d,	// (0x0006731a) heading_pane_cp07

0x43ea,	// (0x0005d9a7) cell_tport_appsw_pane_g2

0x0002,

0xfdb9,	// (0x00069376) cell_tport_appsw_pane_g

0x5f50,	// (0x0005f50d) input_candi_list_open_g1

0x93c5,	// (0x00062982) list_cale_time_pane_g6_ParamLimits

0x93c5,	// (0x00062982) list_cale_time_pane_g6

0xae43,	// (0x00064400) aid_size_touch_calib_1_ParamLimits

0xae43,	// (0x00064400) aid_size_touch_calib_1

0xae4f,	// (0x0006440c) aid_size_touch_calib_2_ParamLimits

0xae4f,	// (0x0006440c) aid_size_touch_calib_2

0xae5b,	// (0x00064418) aid_size_touch_calib_3_ParamLimits

0xae5b,	// (0x00064418) aid_size_touch_calib_3

0xae69,	// (0x00064426) aid_size_touch_calib_4_ParamLimits

0xae69,	// (0x00064426) aid_size_touch_calib_4

0xae77,	// (0x00064434) main_touch_calib_button_group_pane_ParamLimits

0xae77,	// (0x00064434) main_touch_calib_button_group_pane

0xae84,	// (0x00064441) main_touch_calib_pane_g1_ParamLimits

0xae90,	// (0x0006444d) main_touch_calib_pane_g2_ParamLimits

0xae9c,	// (0x00064459) main_touch_calib_pane_g3_ParamLimits

0xaea8,	// (0x00064465) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x00068d54) main_touch_calib_pane_g_ParamLimits

0xaeb4,	// (0x00064471) main_touch_calib_pane_t1_ParamLimits

0xaec9,	// (0x00064486) main_touch_calib_pane_t2_ParamLimits

0xaede,	// (0x0006449b) main_touch_calib_pane_t3_ParamLimits

0xaef0,	// (0x000644ad) main_touch_calib_pane_t4_ParamLimits

0xaf02,	// (0x000644bf) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x00068d5d) main_touch_calib_pane_t_ParamLimits

0x2929,	// (0x0005bee6) list_single_fp_cale_pane_g3_ParamLimits

0x2929,	// (0x0005bee6) list_single_fp_cale_pane_g3

0xed0f,	// (0x000682cc) bg_button_pane_cp012_ParamLimits

0xed0f,	// (0x000682cc) bg_vkb2_func_pane_cp03_ParamLimits

0xcb87,	// (0x00066144) cell_vitu2_function_top_pane_g1_ParamLimits

0xed0f,	// (0x000682cc) bg_vkb2_func_pane_cp04_ParamLimits

0xd6e3,	// (0x00066ca0) main_ncimui_button_group_pane_ParamLimits

0xd6e3,	// (0x00066ca0) main_ncimui_button_group_pane

0xd71e,	// (0x00066cdb) main_ncimui_pane_t3_ParamLimits

0xd71e,	// (0x00066cdb) main_ncimui_pane_t3

0xdf3b,	// (0x000674f8) phacti_button_group_pane

0xe276,	// (0x00067833) aid_size_list_single_double_ParamLimits

0xe282,	// (0x0006783f) popup_ezdial_listscroll_window_ParamLimits

0xe29b,	// (0x00067858) popup_number_entry_window_cp01_ParamLimits

0xe387,	// (0x00067944) phacti_button_pane_ParamLimits

0xe387,	// (0x00067944) phacti_button_pane

0x6d05,	// (0x000602c2) bg_button_pane_cp14

0xe396,	// (0x00067953) phacti_button_pane_t1

0xe3a4,	// (0x00067961) main_touch_calib_button_pane_ParamLimits

0xe3a4,	// (0x00067961) main_touch_calib_button_pane

0x79ba,	// (0x00060f77) bg_button_pane_cp18_ParamLimits

0x79ba,	// (0x00060f77) bg_button_pane_cp18

0xe3b4,	// (0x00067971) main_touch_calib_button_pane_t1_ParamLimits

0xe3b4,	// (0x00067971) main_touch_calib_button_pane_t1

0xe3ca,	// (0x00067987) main_touch_calib_button_pane_t2_ParamLimits

0xe3ca,	// (0x00067987) main_touch_calib_button_pane_t2

0x0001,

0xfe72,	// (0x0006942f) main_touch_calib_button_pane_t_ParamLimits

0xfe72,	// (0x0006942f) main_touch_calib_button_pane_t

0x6d05,	// (0x000602c2) cell_ncimui_button_pane

0x6d05,	// (0x000602c2) bg_button_pane_cp032

0xe3e8,	// (0x000679a5) cell_ncimui_button_pane_t1

0xbf38,	// (0x000654f5) image3_infobar_pane_ParamLimits

0xbf38,	// (0x000654f5) image3_infobar_pane

0xda2d,	// (0x00066fea) fs_bigclock_status_pane_ParamLimits

0xda2d,	// (0x00066fea) fs_bigclock_status_pane

0xda3a,	// (0x00066ff7) main_fs_bigclock_clock_pane_ParamLimits

0xda3a,	// (0x00066ff7) main_fs_bigclock_clock_pane

0xda4a,	// (0x00067007) main_fs_bigclock_indi_pane_ParamLimits

0xda4a,	// (0x00067007) main_fs_bigclock_indi_pane

0xda6f,	// (0x0006702c) main_fs_bigclock_swipe_pane_ParamLimits

0xda6f,	// (0x0006702c) main_fs_bigclock_swipe_pane

0x6d05,	// (0x000602c2) main_fs_clock_dumped_data

0x3e75,	// (0x0005d432) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3e75,	// (0x0005d432) list_single_fs_bigclock_indicator_pane_g1

0x3e8f,	// (0x0005d44c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3e8f,	// (0x0005d44c) list_single_fs_bigclock_indicator_pane_g2

0x3ea9,	// (0x0005d466) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3ea9,	// (0x0005d466) list_single_fs_bigclock_indicator_pane_g3

0x3ec3,	// (0x0005d480) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3ec3,	// (0x0005d480) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x00069267) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x00069267) list_single_fs_bigclock_indicator_pane_g

0x3ee7,	// (0x0005d4a4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3ee7,	// (0x0005d4a4) list_single_fs_bigclock_indicator_pane_t1

0x3f0f,	// (0x0005d4cc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3f0f,	// (0x0005d4cc) list_single_fs_bigclock_indicator_pane_t2

0x3f37,	// (0x0005d4f4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3f37,	// (0x0005d4f4) list_single_fs_bigclock_indicator_pane_t3

0x3f5f,	// (0x0005d51c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3f5f,	// (0x0005d51c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x00069272) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x00069272) list_single_fs_bigclock_indicator_pane_t

0xe3f6,	// (0x000679b3) image3_infobar_fav_pane_ParamLimits

0xe3f6,	// (0x000679b3) image3_infobar_fav_pane

0xe406,	// (0x000679c3) image3_infobar_loc_pane_ParamLimits

0xe406,	// (0x000679c3) image3_infobar_loc_pane

0xe41a,	// (0x000679d7) image3_infobar_time_pane_ParamLimits

0xe41a,	// (0x000679d7) image3_infobar_time_pane

0x2598,	// (0x0005bb55) image3_infobar_time_pane_g1

0xe42a,	// (0x000679e7) image3_infobar_time_pane_t1

0x2598,	// (0x0005bb55) image3_infobar_loc_pane_g1

0xe438,	// (0x000679f5) image3_infobar_loc_pane_g2

0x0001,

0xfe77,	// (0x00069434) image3_infobar_loc_pane_g

0xe440,	// (0x000679fd) image3_infobar_loc_pane_t1

0x2598,	// (0x0005bb55) image3_infobar_fav_pane_g1

0xe44e,	// (0x00067a0b) image3_infobar_fav_pane_g2

0x0001,

0xfe7c,	// (0x00069439) image3_infobar_fav_pane_g

0xe456,	// (0x00067a13) fs_bigclock_status_battery_pane

0xe45f,	// (0x00067a1c) fs_bigclock_status_signal_pane

0xe468,	// (0x00067a25) fs_bigclock_status_title_pane

0xe471,	// (0x00067a2e) fs_bigclock_status_signal_pane_g1

0xe47a,	// (0x00067a37) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe81,	// (0x0006943e) fs_bigclock_status_signal_pane_g

0xe482,	// (0x00067a3f) fs_bigclock_status_battery_pane_g1

0xe48b,	// (0x00067a48) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe86,	// (0x00069443) fs_bigclock_status_battery_pane_g

0xe493,	// (0x00067a50) fs_bigclock_status_title_pane_t1

0x2598,	// (0x0005bb55) main_fs_bigclock_clock_pane_g1

0xe4a1,	// (0x00067a5e) main_fs_bigclock_clock_pane_g2

0xe4a1,	// (0x00067a5e) main_fs_bigclock_clock_pane_g3

0xe4a1,	// (0x00067a5e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe8b,	// (0x00069448) main_fs_bigclock_clock_pane_g

0xe4a9,	// (0x00067a66) main_fs_bigclock_clock_pane_t1

0xe4b7,	// (0x00067a74) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe94,	// (0x00069451) main_fs_bigclock_clock_pane_t

0xe4c6,	// (0x00067a83) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe4c6,	// (0x00067a83) list_single_fs_bigclock_indicator_pane

0xe4d7,	// (0x00067a94) list_single_fs_bigclock_pane_ParamLimits

0xe4d7,	// (0x00067a94) list_single_fs_bigclock_pane

0xe53e,	// (0x00067afb) main_fs_bigclock_indicator_pane_t1

0xe54d,	// (0x00067b0a) list_single_fs_bigclock_pane_g1

0xe555,	// (0x00067b12) list_single_fs_bigclock_pane_t1

0x2598,	// (0x0005bb55) main_fs_bigclock_swipe_pane_g1

0xe593,	// (0x00067b50) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea5,	// (0x00069462) main_fs_bigclock_swipe_pane_g

0xe59b,	// (0x00067b58) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe59b,	// (0x00067b58) main_fs_bigclock_swipe_pane_t1

0x96ac,	// (0x00062c69) call_type_pane_ParamLimits

0x6d05,	// (0x000602c2) main_btmg_pane

0x6a34,	// (0x0005fff1) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6a34,	// (0x0005fff1) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe18,	// (0x000693d5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe18,	// (0x000693d5) list_single_cale_mrui_row_pane_g

0xe31a,	// (0x000678d7) list_recal_vselct_arw_lo_pane

0xe322,	// (0x000678df) list_recal_vselct_arw_up_pane

0x6b58,	// (0x00060115) list_recal_vselct_pane

0xe5b8,	// (0x00067b75) btmg_button_pane

0xe5c0,	// (0x00067b7d) main_btmg_pane_g1

0x6d05,	// (0x000602c2) bg_button_pane_cp044

0xe5c8,	// (0x00067b85) btmg_button_pane_t1

0x214d,	// (0x0005b70a) aid_listscroll_gen

0xed0f,	// (0x000682cc) main_cntbar_detail_pane

0x4408,	// (0x0005d9c5) list_cmail_folder_pane

0x4418,	// (0x0005d9d5) sp_fs_scroll_pane_cp03_ParamLimits

0x6bcb,	// (0x00060188) list_single_fs_dyc_pane_cp01_ParamLimits

0x6bcb,	// (0x00060188) list_single_fs_dyc_pane_cp01

0xe5d6,	// (0x00067b93) aid_size_cmail_indent

0xd06b,	// (0x00066628) list_single_dyc_row_pane_cp01

0xe5f9,	// (0x00067bb6) cntbar_detail_list_pane_ParamLimits

0xe5f9,	// (0x00067bb6) cntbar_detail_list_pane

0xe62f,	// (0x00067bec) main_cntbar_detail_cont_pane_ParamLimits

0xe62f,	// (0x00067bec) main_cntbar_detail_cont_pane

0xe63b,	// (0x00067bf8) scroll_pane_cp032_ParamLimits

0xe63b,	// (0x00067bf8) scroll_pane_cp032

0xe647,	// (0x00067c04) cntbar_detail_list_event_pane_ParamLimits

0xe647,	// (0x00067c04) cntbar_detail_list_event_pane

0xe605,	// (0x00067bc2) cntbar_detail_list_shct_pane

0xe657,	// (0x00067c14) aid_list_gen

0x7c3c,	// (0x000611f9) aid_scroll

0x34ee,	// (0x0005caab) aid_size_touch_scroll_bar

0xe660,	// (0x00067c1d) aid_list_double

0x6be2,	// (0x0006019f) aid_list_single

0x4623,	// (0x0005dbe0) aid_list_single_lg

0x6beb,	// (0x000601a8) aid_list_z_g_a_sm

0x6bf3,	// (0x000601b0) aid_list_z_g_d

0x6bfb,	// (0x000601b8) aid_txt_z_prm

0x6c09,	// (0x000601c6) aid_txt_z_prm_cp01

0x6c17,	// (0x000601d4) aid_txt_z_sec

0xe669,	// (0x00067c26) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe669,	// (0x00067c26) main_cntbar_detail_cont_pane_g1

0xe676,	// (0x00067c33) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe676,	// (0x00067c33) main_cntbar_detail_cont_pane_g2

0x0001,

0xfeaa,	// (0x00069467) main_cntbar_detail_cont_pane_g_ParamLimits

0xfeaa,	// (0x00069467) main_cntbar_detail_cont_pane_g

0xe682,	// (0x00067c3f) main_cntbar_detail_cont_pane_t1

0xe690,	// (0x00067c4d) main_cntbar_detail_cont_pane_t2

0xe69e,	// (0x00067c5b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaf,	// (0x0006946c) main_cntbar_detail_cont_pane_t

0xe6ac,	// (0x00067c69) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe6ac,	// (0x00067c69) cell_cntbar_detail_list_shct_pane

0xe6be,	// (0x00067c7b) cntbar_detail_list_shct_pane_g1

0xe6c7,	// (0x00067c84) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb6,	// (0x00069473) cntbar_detail_list_shct_pane_g

0xe6d0,	// (0x00067c8d) cntbar_detail_list_event_pane_g1_ParamLimits

0xe6d0,	// (0x00067c8d) cntbar_detail_list_event_pane_g1

0xe6dc,	// (0x00067c99) cntbar_detail_list_event_pane_g2_ParamLimits

0xe6dc,	// (0x00067c99) cntbar_detail_list_event_pane_g2

0x0005,

0xfebb,	// (0x00069478) cntbar_detail_list_event_pane_g_ParamLimits

0xfebb,	// (0x00069478) cntbar_detail_list_event_pane_g

0xe748,	// (0x00067d05) cntbar_detail_list_event_pane_t1_ParamLimits

0xe748,	// (0x00067d05) cntbar_detail_list_event_pane_t1

0xe75d,	// (0x00067d1a) cntbar_detail_list_event_pane_t2_ParamLimits

0xe75d,	// (0x00067d1a) cntbar_detail_list_event_pane_t2

0x0002,

0xfec8,	// (0x00069485) cntbar_detail_list_event_pane_t_ParamLimits

0xfec8,	// (0x00069485) cntbar_detail_list_event_pane_t

0x2598,	// (0x0005bb55) cell_cntbar_detail_list_shct_pane_g1

0x0c93,	// (0x0005a250) navi_pane_mv_g3

0xed0f,	// (0x000682cc) main_cntbar_detail_pane_ParamLimits

0x6d05,	// (0x000602c2) main_notif_wgt_pane

0xbc26,	// (0x000651e3) aid_tch_main_mp4_pane_g4

0xbe4d,	// (0x0006540a) popup_slider_window_cp02

0x6b58,	// (0x00060115) list_recal_day_event_pane

0xe5df,	// (0x00067b9c) cntbar_detail_btn_pane_ParamLimits

0xe5df,	// (0x00067b9c) cntbar_detail_btn_pane

0xe5eb,	// (0x00067ba8) cntbar_detail_btn_pane_cp01_ParamLimits

0xe5eb,	// (0x00067ba8) cntbar_detail_btn_pane_cp01

0xe605,	// (0x00067bc2) cntbar_detail_list_shct_pane_ParamLimits

0xe611,	// (0x00067bce) cntbar_detail_pane_g1_ParamLimits

0xe611,	// (0x00067bce) cntbar_detail_pane_g1

0xe61d,	// (0x00067bda) cntbar_detail_pane_t1_ParamLimits

0xe61d,	// (0x00067bda) cntbar_detail_pane_t1

0xe6e8,	// (0x00067ca5) cntbar_detail_list_event_pane_g3_ParamLimits

0xe6e8,	// (0x00067ca5) cntbar_detail_list_event_pane_g3

0xe700,	// (0x00067cbd) cntbar_detail_list_event_pane_g4_ParamLimits

0xe700,	// (0x00067cbd) cntbar_detail_list_event_pane_g4

0xe718,	// (0x00067cd5) cntbar_detail_list_event_pane_g5_ParamLimits

0xe718,	// (0x00067cd5) cntbar_detail_list_event_pane_g5

0xe730,	// (0x00067ced) cntbar_detail_list_event_pane_g6_ParamLimits

0xe730,	// (0x00067ced) cntbar_detail_list_event_pane_g6

0xe772,	// (0x00067d2f) cntbar_detail_list_event_pane_t3_ParamLimits

0xe772,	// (0x00067d2f) cntbar_detail_list_event_pane_t3

0xe784,	// (0x00067d41) popup_notif_wgt_window_ParamLimits

0xe784,	// (0x00067d41) popup_notif_wgt_window

0xe792,	// (0x00067d4f) popup_submenu_window_cp01_ParamLimits

0xe792,	// (0x00067d4f) popup_submenu_window_cp01

0x0cd4,	// (0x0005a291) bg_popup_window_pane_cp10

0xe79e,	// (0x00067d5b) listscroll_notif_wgt_pane

0xe7a6,	// (0x00067d63) list_notif_wgt_window

0xe7af,	// (0x00067d6c) scroll_pane_cp033

0xe7b8,	// (0x00067d75) list_notif_wgt_row_pane_ParamLimits

0xe7b8,	// (0x00067d75) list_notif_wgt_row_pane

0xe7ca,	// (0x00067d87) aid_size_list_notif_wgt_del

0xe7d3,	// (0x00067d90) list_notif_wgt_row_pane_g1

0xe7db,	// (0x00067d98) list_notif_wgt_row_pane_g2

0xe7e3,	// (0x00067da0) list_notif_wgt_row_pane_g3

0x0002,

0xfecf,	// (0x0006948c) list_notif_wgt_row_pane_g

0xe7ec,	// (0x00067da9) list_notif_wgt_row_pane_t1

0xe7fa,	// (0x00067db7) list_notif_wgt_row_pane_t2

0xe808,	// (0x00067dc5) list_notif_wgt_row_pane_t3

0x0002,

0xfed6,	// (0x00069493) list_notif_wgt_row_pane_t

0x31f8,	// (0x0005c7b5) list_recal_day_event_pane_g1

0xe816,	// (0x00067dd3) list_recal_day_event_pane_t1

0x6d05,	// (0x000602c2) bg_button_pane_cp045

0xe825,	// (0x00067de2) cntbar_detail_btn_pane_t1

0x2155,	// (0x0005b712) main_callh_pane_ParamLimits

0x2155,	// (0x0005b712) main_callh_pane

0x6d05,	// (0x000602c2) main_coverflow0_pane

0x6d05,	// (0x000602c2) main_wgtman_pane

0xda81,	// (0x0006703e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xda81,	// (0x0006703e) main_fs_bigclock_unlock_btn_pane

0x43e2,	// (0x0005d99f) bg_button_pane_cp16

0x43f2,	// (0x0005d9af) cell_tport_appsw_pane_g3

0xe833,	// (0x00067df0) cf0_flow_pane_ParamLimits

0xe833,	// (0x00067df0) cf0_flow_pane

0xe842,	// (0x00067dff) listscroll_cf0_pane

0xe84b,	// (0x00067e08) main_cf0_pane_g1

0xe855,	// (0x00067e12) main_cf0_pane_t1_ParamLimits

0xe855,	// (0x00067e12) main_cf0_pane_t1

0xe867,	// (0x00067e24) main_cf0_pane_t2_ParamLimits

0xe867,	// (0x00067e24) main_cf0_pane_t2

0x0001,

0xfedd,	// (0x0006949a) main_cf0_pane_t_ParamLimits

0xfedd,	// (0x0006949a) main_cf0_pane_t

0xe879,	// (0x00067e36) scroll_pane_cp11

0xe882,	// (0x00067e3f) cf0_flow_pane_g1

0xe88a,	// (0x00067e47) cf0_flow_pane_g2

0x0001,

0xfee2,	// (0x0006949f) cf0_flow_pane_g

0xe892,	// (0x00067e4f) cf0_flow_pane_t1

0x6d05,	// (0x000602c2) main_call6_pane

0x6d05,	// (0x000602c2) main_calllock_pane

0xe8a0,	// (0x00067e5d) call6_btn_grp_pane_ParamLimits

0xe8a0,	// (0x00067e5d) call6_btn_grp_pane

0xe8ad,	// (0x00067e6a) call6_pane_g1_ParamLimits

0xe8ad,	// (0x00067e6a) call6_pane_g1

0xe8ba,	// (0x00067e77) popup_call6_1st_window_ParamLimits

0xe8ba,	// (0x00067e77) popup_call6_1st_window

0xe8c6,	// (0x00067e83) popup_call6_2nd_window_ParamLimits

0xe8c6,	// (0x00067e83) popup_call6_2nd_window

0xe8d2,	// (0x00067e8f) cell_call6_btn_pane_ParamLimits

0xe8d2,	// (0x00067e8f) cell_call6_btn_pane

0x0cd4,	// (0x0005a291) bg_popup_call2_in_pane_cp03

0xe8e1,	// (0x00067e9e) popup_call6_1st_window_g1

0xe8e9,	// (0x00067ea6) popup_call6_1st_window_g2

0xe8f1,	// (0x00067eae) popup_call6_1st_window_g3

0x0002,

0xfee7,	// (0x000694a4) popup_call6_1st_window_g

0xe8f9,	// (0x00067eb6) popup_call6_1st_window_t1

0xe908,	// (0x00067ec5) popup_call6_1st_window_t2

0xe916,	// (0x00067ed3) popup_call6_1st_window_t3

0x0002,

0xfeee,	// (0x000694ab) popup_call6_1st_window_t

0x0cd4,	// (0x0005a291) bg_popup_call2_in_pane_cp04

0xe8e1,	// (0x00067e9e) popup_call6_2nd_window_g1

0xe8e9,	// (0x00067ea6) popup_call6_2nd_window_g2

0xe8f1,	// (0x00067eae) popup_call6_2nd_window_g3

0x0002,

0xfee7,	// (0x000694a4) popup_call6_2nd_window_g

0xe8f9,	// (0x00067eb6) popup_call6_2nd_window_t1

0x6d05,	// (0x000602c2) bg_button_pane_cp15

0xe924,	// (0x00067ee1) cell_call6_btn_pane_g1

0xe92d,	// (0x00067eea) cell_call6_btn_pane_t1

0xe93c,	// (0x00067ef9) listscroll_wgtman_pane_ParamLimits

0xe93c,	// (0x00067ef9) listscroll_wgtman_pane

0xe956,	// (0x00067f13) wgtman_btn_pane_ParamLimits

0xe956,	// (0x00067f13) wgtman_btn_pane

0xecce,	// (0x0006828b) aid_scroll_copy1

0xe989,	// (0x00067f46) list_wgtman_pane

0xe993,	// (0x00067f50) wgtman_btn_pane_g1_ParamLimits

0xe993,	// (0x00067f50) wgtman_btn_pane_g1

0xe9bb,	// (0x00067f78) wgtman_btn_pane_t1_ParamLimits

0xe9bb,	// (0x00067f78) wgtman_btn_pane_t1

0xe9f2,	// (0x00067faf) wgtman_btn_pane_t2_ParamLimits

0xe9f2,	// (0x00067faf) wgtman_btn_pane_t2

0x0001,

0xfef5,	// (0x000694b2) wgtman_btn_pane_t_ParamLimits

0xfef5,	// (0x000694b2) wgtman_btn_pane_t

0xea09,	// (0x00067fc6) listrow_wgtman_pane_ParamLimits

0xea09,	// (0x00067fc6) listrow_wgtman_pane

0xea1a,	// (0x00067fd7) listrow_wgtman_pane_g1

0xea23,	// (0x00067fe0) listrow_wgtman_pane_g2

0x0001,

0xfefa,	// (0x000694b7) listrow_wgtman_pane_g

0x6c25,	// (0x000601e2) listrow_wgtman_pane_t1

0x6c33,	// (0x000601f0) listrow_wgtman_pane_t2

0x0001,

0xfeff,	// (0x000694bc) listrow_wgtman_pane_t

0x6c41,	// (0x000601fe) wait_bar_pane_cp09

0xea2b,	// (0x00067fe8) main_calllock_btn_pane

0xea33,	// (0x00067ff0) main_calllock_pane_g1

0x6d05,	// (0x000602c2) bg_button_pane_cp17

0xea3c,	// (0x00067ff9) main_calllock_btn_pane_g1

0xea45,	// (0x00068002) main_calllock_btn_pane_t1

0x6d05,	// (0x000602c2) main_dialer3_pane

0x6d05,	// (0x000602c2) main_fmrd2_pane

0x2598,	// (0x0005bb55) main_fs_bigclock_unlock_btn_pane_g1

0xea5c,	// (0x00068019) main_fs_bigclock_unlock_btn_pane_t1

0xea6a,	// (0x00068027) area_fmrd2_info_pane_ParamLimits

0xea6a,	// (0x00068027) area_fmrd2_info_pane

0xea76,	// (0x00068033) area_fmrd2_visual_pane_ParamLimits

0xea76,	// (0x00068033) area_fmrd2_visual_pane

0xea84,	// (0x00068041) fmrd2_indi_pane_ParamLimits

0xea84,	// (0x00068041) fmrd2_indi_pane

0xea91,	// (0x0006804e) area_fmrd2_visual_pane_g1

0xea99,	// (0x00068056) area_fmrd2_visual_pane_t1

0xeaa7,	// (0x00068064) area_fmrd2_visual_pane_t2

0xeab5,	// (0x00068072) area_fmrd2_visual_pane_t3

0x0002,

0xff09,	// (0x000694c6) area_fmrd2_visual_pane_t

0xeac3,	// (0x00068080) area_fmrd2_info_pane_g1

0xeacb,	// (0x00068088) area_fmrd2_info_pane_t1

0xead9,	// (0x00068096) area_fmrd2_info_pane_t2

0xeae7,	// (0x000680a4) area_fmrd2_info_pane_t3

0xeaf5,	// (0x000680b2) area_fmrd2_info_pane_t4

0x0003,

0xff10,	// (0x000694cd) area_fmrd2_info_pane_t

0xeb03,	// (0x000680c0) fmrd2_indi_pane_t1

0xeb11,	// (0x000680ce) fmrd2_indi_pane_t2

0xeb1f,	// (0x000680dc) fmrd2_indi_pane_t3

0x0002,

0xff19,	// (0x000694d6) fmrd2_indi_pane_t

0x3ed2,	// (0x0005d48f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3ed2,	// (0x0005d48f) list_single_fs_bigclock_indicator_pane_g5

0x3f74,	// (0x0005d531) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3f74,	// (0x0005d531) list_single_fs_bigclock_indicator_pane_t5

0xdfba,	// (0x00067577) aid_cell_bcale_month_pane_ParamLimits

0xdfba,	// (0x00067577) aid_cell_bcale_month_pane

0xdfc6,	// (0x00067583) bcale_month_pane_ParamLimits

0xdfc6,	// (0x00067583) bcale_month_pane

0xdfd2,	// (0x0006758f) bcale_preview_pane_ParamLimits

0xdfd2,	// (0x0006758f) bcale_preview_pane

0xe555,	// (0x00067b12) list_single_fs_bigclock_pane_t1_ParamLimits

0xe56f,	// (0x00067b2c) list_single_fs_bigclock_pane_t2_ParamLimits

0xe56f,	// (0x00067b2c) list_single_fs_bigclock_pane_t2

0x0001,

0xfea0,	// (0x0006945d) list_single_fs_bigclock_pane_t_ParamLimits

0xfea0,	// (0x0006945d) list_single_fs_bigclock_pane_t

0xea54,	// (0x00068011) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff04,	// (0x000694c1) main_fs_bigclock_unlock_btn_pane_g

0xeb2d,	// (0x000680ea) aid_dia3_key_size_ParamLimits

0xeb2d,	// (0x000680ea) aid_dia3_key_size

0xed49,	// (0x00068306) aid_dia3_listrow_size_ParamLimits

0xed49,	// (0x00068306) aid_dia3_listrow_size

0xed57,	// (0x00068314) dia3_keypad_fun_pane_ParamLimits

0xed57,	// (0x00068314) dia3_keypad_fun_pane

0xed63,	// (0x00068320) dia3_keypad_num_pane_ParamLimits

0xed63,	// (0x00068320) dia3_keypad_num_pane

0xed6f,	// (0x0006832c) dia3_listscroll_pane_ParamLimits

0xed6f,	// (0x0006832c) dia3_listscroll_pane

0xed7b,	// (0x00068338) dia3_numentry_pane_ParamLimits

0xed7b,	// (0x00068338) dia3_numentry_pane

0xed87,	// (0x00068344) dia3_list_pane

0xed90,	// (0x0006834d) scroll_pane_cp12

0x6d05,	// (0x000602c2) bg_dia3_numentry_pane

0xed99,	// (0x00068356) dia3_numentry_pane_t1

0xeda8,	// (0x00068365) cell_dia3_key_num_pane

0xedb0,	// (0x0006836d) cell_dia3_key0_fun_pane_ParamLimits

0xedb0,	// (0x0006836d) cell_dia3_key0_fun_pane

0xedbd,	// (0x0006837a) cell_dia3_key1_fun_pane_ParamLimits

0xedbd,	// (0x0006837a) cell_dia3_key1_fun_pane

0xedca,	// (0x00068387) dia3_listrow_pane

0x3bf6,	// (0x0005d1b3) bg_dia3_numentry_pane_g1

0x6d05,	// (0x000602c2) bg_button_pane_cp21

0xedd7,	// (0x00068394) cell_dia3_key_num_pane_t1

0xede5,	// (0x000683a2) cell_dia3_key_num_pane_t2

0xedf4,	// (0x000683b1) cell_dia3_key_num_pane_t3

0xee03,	// (0x000683c0) cell_dia3_key_num_pane_t4

0x0003,

0xff20,	// (0x000694dd) cell_dia3_key_num_pane_t

0x6d05,	// (0x000602c2) bg_button_pane_cp19

0xee12,	// (0x000683cf) cell_dia3_key0_fun_pane_g1

0x6d05,	// (0x000602c2) bg_button_pane_cp20

0xee1a,	// (0x000683d7) cell_dia3_key1_fun_pane_g1

0xee22,	// (0x000683df) area_left_week_number_pane

0xee2b,	// (0x000683e8) area_top_day_name_pane

0xee34,	// (0x000683f1) frame_month_view_pane

0xee3c,	// (0x000683f9) grid_month_view_pane

0xee46,	// (0x00068403) cell_top_day_name_pane_ParamLimits

0xee46,	// (0x00068403) cell_top_day_name_pane

0xee5c,	// (0x00068419) cell_area_left_week_number_pane_ParamLimits

0xee5c,	// (0x00068419) cell_area_left_week_number_pane

0xee70,	// (0x0006842d) cell_month_view_pane_ParamLimits

0xee70,	// (0x0006842d) cell_month_view_pane

0xee8b,	// (0x00068448) frm_month_g1

0xee94,	// (0x00068451) frm_month_g2

0xee9c,	// (0x00068459) frm_month_g3

0xeea4,	// (0x00068461) frm_month_g4

0xeeac,	// (0x00068469) frm_month_g5

0xeeb4,	// (0x00068471) frm_month_g6

0xeebc,	// (0x00068479) frm_month_g7

0xeec4,	// (0x00068481) frm_month_g8

0xeecd,	// (0x0006848a) frm_month_g9

0xeed6,	// (0x00068493) frm_month_g10

0xc203,	// (0x000657c0) frm_month_g11

0xeedf,	// (0x0006849c) frm_month_g12

0xeee8,	// (0x000684a5) frm_month_g13

0xeef1,	// (0x000684ae) frm_month_g14

0xeefa,	// (0x000684b7) frm_month_g15

0xef03,	// (0x000684c0) frm_month_g16

0x000f,

0xff29,	// (0x000694e6) frm_month_g

0xef0c,	// (0x000684c9) cell_top_day_name_pane_t1

0xef1b,	// (0x000684d8) cell_area_left_week_number_pane_g1

0xef0c,	// (0x000684c9) cell_area_left_week_number_pane_t1

0x2598,	// (0x0005bb55) cell_month_view_pane_g1

0xef23,	// (0x000684e0) cell_month_view_pane_t1

0x6d05,	// (0x000602c2) main_fps_pane

0x41e8,	// (0x0005d7a5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x41e8,	// (0x0005d7a5) cmail_ddmenu_btn02_pane_cp1

0x4204,	// (0x0005d7c1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4204,	// (0x0005d7c1) cmail_ddmenu_btn02_pane_cp2

0xe2ea,	// (0x000678a7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe2ea,	// (0x000678a7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe51,	// (0x0006940e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe51,	// (0x0006940e) cmail_ddmenu_btn02_pane_g

0xe308,	// (0x000678c5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe308,	// (0x000678c5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe56,	// (0x00069413) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe56,	// (0x00069413) cmail_ddmenu_btn02_pane_t

0xef32,	// (0x000684ef) fps_text_pane_ParamLimits

0xef32,	// (0x000684ef) fps_text_pane

0xef3f,	// (0x000684fc) main_fps_pane_g1_ParamLimits

0xef3f,	// (0x000684fc) main_fps_pane_g1

0xef4b,	// (0x00068508) wait_bar_pane_cp010_ParamLimits

0xef4b,	// (0x00068508) wait_bar_pane_cp010

0xef57,	// (0x00068514) fps_text_pane_t1_ParamLimits

0xef57,	// (0x00068514) fps_text_pane_t1

0xc1f1,	// (0x000657ae) cam4_image_uncrop_pane_g1

0xc1fa,	// (0x000657b7) cam4_image_uncrop_pane_g2

0xc203,	// (0x000657c0) cam4_image_uncrop_pane_g3

0xc20c,	// (0x000657c9) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x00068eec) cam4_image_uncrop_pane_g

0xedca,	// (0x00068387) dia3_listrow_pane_ParamLimits

0x6d05,	// (0x000602c2) main_phob2_pane

0xdd9e,	// (0x0006735b) cell_tport_appsw_pane_cp02_ParamLimits

0xdd9e,	// (0x0006735b) cell_tport_appsw_pane_cp02

0xddab,	// (0x00067368) cell_tport_appsw_pane_cp03_ParamLimits

0xddab,	// (0x00067368) cell_tport_appsw_pane_cp03

0x6d05,	// (0x000602c2) phob2_contact_card_pane

0x6d05,	// (0x000602c2) phob2_listscroll_pane

0xef70,	// (0x0006852d) phob2_list_pane

0xef78,	// (0x00068535) scroll_pane_cp034

0xef80,	// (0x0006853d) phob2_cc_data_pane_ParamLimits

0xef80,	// (0x0006853d) phob2_cc_data_pane

0xef98,	// (0x00068555) phob2_cc_listscroll_pane_ParamLimits

0xef98,	// (0x00068555) phob2_cc_listscroll_pane

0xefb0,	// (0x0006856d) list_double_large_graphic_phob2_pane_ParamLimits

0xefb0,	// (0x0006856d) list_double_large_graphic_phob2_pane

0xefc3,	// (0x00068580) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xefc3,	// (0x00068580) list_double_large_graphic_phob2_pane_g1

0xeb39,	// (0x000680f6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xeb39,	// (0x000680f6) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff4a,	// (0x00069507) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff4a,	// (0x00069507) list_double_large_graphic_phob2_pane_g

0x6c49,	// (0x00060206) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6c49,	// (0x00060206) list_double_large_graphic_phob2_pane_t1

0x6c5e,	// (0x0006021b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6c5e,	// (0x0006021b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4f,	// (0x0006950c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4f,	// (0x0006950c) list_double_large_graphic_phob2_pane_t

0x6d05,	// (0x000602c2) list_highlight_pane_cp024

0xefd0,	// (0x0006858d) phob2_cc_button_pane

0xefd8,	// (0x00068595) phob2_cc_data_pane_g1_ParamLimits

0xefd8,	// (0x00068595) phob2_cc_data_pane_g1

0xefe4,	// (0x000685a1) phob2_cc_data_pane_g2_ParamLimits

0xefe4,	// (0x000685a1) phob2_cc_data_pane_g2

0x0001,

0xff54,	// (0x00069511) phob2_cc_data_pane_g_ParamLimits

0xff54,	// (0x00069511) phob2_cc_data_pane_g

0xeff0,	// (0x000685ad) phob2_cc_data_pane_t1_ParamLimits

0xeff0,	// (0x000685ad) phob2_cc_data_pane_t1

0xf002,	// (0x000685bf) phob2_cc_data_pane_t2_ParamLimits

0xf002,	// (0x000685bf) phob2_cc_data_pane_t2

0xf014,	// (0x000685d1) phob2_cc_data_pane_t3_ParamLimits

0xf014,	// (0x000685d1) phob2_cc_data_pane_t3

0x0002,

0xff59,	// (0x00069516) phob2_cc_data_pane_t_ParamLimits

0xff59,	// (0x00069516) phob2_cc_data_pane_t

0xf026,	// (0x000685e3) phob2_cc_list_pane_ParamLimits

0xf026,	// (0x000685e3) phob2_cc_list_pane

0xf032,	// (0x000685ef) scroll_pane_cp035_ParamLimits

0xf032,	// (0x000685ef) scroll_pane_cp035

0xed0f,	// (0x000682cc) bg_button_pane_cp033

0xf03e,	// (0x000685fb) phob2_cc_button_pane_g1

0xf04a,	// (0x00068607) phob2_cc_button_pane_t1

0xf05f,	// (0x0006861c) phob2_cc_button_pane_t2

0x0001,

0xff60,	// (0x0006951d) phob2_cc_button_pane_t

0xf071,	// (0x0006862e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf071,	// (0x0006862e) list_double_large_graphic_phob2_cc_pane

0xf08c,	// (0x00068649) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf08c,	// (0x00068649) list_double_large_graphic_phob2_cc_pane_g1

0xeb45,	// (0x00068102) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xeb45,	// (0x00068102) list_double_large_graphic_phob2_cc_pane_g2

0x6c70,	// (0x0006022d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6c70,	// (0x0006022d) list_double_large_graphic_phob2_cc_pane_g3

0x6c7f,	// (0x0006023c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6c7f,	// (0x0006023c) list_double_large_graphic_phob2_cc_pane_g4

0x6c90,	// (0x0006024d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6c90,	// (0x0006024d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff65,	// (0x00069522) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff65,	// (0x00069522) list_double_large_graphic_phob2_cc_pane_g

0x6c9f,	// (0x0006025c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6c9f,	// (0x0006025c) list_double_large_graphic_phob2_cc_pane_t1

0x6cc8,	// (0x00060285) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6cc8,	// (0x00060285) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff70,	// (0x0006952d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff70,	// (0x0006952d) list_double_large_graphic_phob2_cc_pane_t

0xf09d,	// (0x0006865a) list_highlight_pane_cp025_ParamLimits

0xf09d,	// (0x0006865a) list_highlight_pane_cp025

0xed0f,	// (0x000682cc) bg_button_pane_cp033_ParamLimits

0xf03e,	// (0x000685fb) phob2_cc_button_pane_g1_ParamLimits

0xf04a,	// (0x00068607) phob2_cc_button_pane_t1_ParamLimits

0xf05f,	// (0x0006861c) phob2_cc_button_pane_t2_ParamLimits

0xff60,	// (0x0006951d) phob2_cc_button_pane_t_ParamLimits

0x6f5f,	// (0x0006051c) popup_wgtman_window

0x3c16,	// (0x0005d1d3) scroll_pane_cp038

0xe971,	// (0x00067f2e) wgtman_btn_pane_cp_01_ParamLimits

0xe971,	// (0x00067f2e) wgtman_btn_pane_cp_01

0xf0ab,	// (0x00068668) wgtman_content_pane

0xf0b4,	// (0x00068671) wgtman_heading_pane

0x6d05,	// (0x000602c2) bg_heading_pane_cp02

0xf0bd,	// (0x0006867a) wgtman_heading_pane_g1

0xf0c5,	// (0x00068682) wgtman_heading_pane_t1

0xf0d3,	// (0x00068690) scroll_pane_cp036

0xf0db,	// (0x00068698) wgtman_list_pane

0xf0e3,	// (0x000686a0) wgtman_list_pane_t1_ParamLimits

0xf0e3,	// (0x000686a0) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
