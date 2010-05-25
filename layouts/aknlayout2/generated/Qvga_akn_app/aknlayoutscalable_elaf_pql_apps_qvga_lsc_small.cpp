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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0003f98c };

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
0x1c2e,	// (0x000415ba) Screen

0x1c38,	// (0x000415c4) application_window

0x1c6e,	// (0x000415fa) area_bottom_pane_ParamLimits

0x1c6e,	// (0x000415fa) area_bottom_pane

0x1c9f,	// (0x0004162b) area_top_pane_ParamLimits

0x1c9f,	// (0x0004162b) area_top_pane

0xacce,	// (0x0004a65a) call_video_uplink_pane_ParamLimits

0xacce,	// (0x0004a65a) call_video_uplink_pane

0x1d19,	// (0x000416a5) main_pane_ParamLimits

0x1d19,	// (0x000416a5) main_pane

0x566a,	// (0x00044ff6) context_pane

0x567d,	// (0x00045009) navi_pane

0x56a5,	// (0x00045031) popup_cale_events_window_ParamLimits

0x56a5,	// (0x00045031) popup_cale_events_window

0x56bc,	// (0x00045048) popup_mup_playback_window

0x56c4,	// (0x00045050) signal_pane

0xdb75,	// (0x0004d501) main_browser_pane

0xdd26,	// (0x0004d6b2) main_burst_pane

0x53e6,	// (0x00044d72) main_calc_pane

0x53fa,	// (0x00044d86) main_cale_day_pane

0x22a3,	// (0x00041c2f) main_cale_month_pane

0x53fa,	// (0x00044d86) main_cale_week_pane

0xdd26,	// (0x0004d6b2) main_call_pane

0xd849,	// (0x0004d1d5) main_call_poc_pane

0xdd26,	// (0x0004d6b2) main_camera_pane

0xdd26,	// (0x0004d6b2) main_chi_dic_pane

0xe50e,	// (0x0004de9a) main_clock_pane

0xd849,	// (0x0004d1d5) main_fmradio_pane

0xdd26,	// (0x0004d6b2) main_graph_messa_pane

0xd849,	// (0x0004d1d5) main_help_pane

0xdb75,	// (0x0004d501) main_im_pane

0xdaa4,	// (0x0004d430) main_image_pane_ParamLimits

0xdaa4,	// (0x0004d430) main_image_pane

0xd849,	// (0x0004d1d5) main_location2_pane

0xdd26,	// (0x0004d6b2) main_location_pane

0xdaa4,	// (0x0004d430) main_messa_pane

0xd849,	// (0x0004d1d5) main_mp2_pane

0xdd26,	// (0x0004d6b2) main_mp_pane

0xd849,	// (0x0004d1d5) main_msg_pane

0xd849,	// (0x0004d1d5) main_mup_eq_pane

0xd849,	// (0x0004d1d5) main_mup_pane

0xdb75,	// (0x0004d501) main_notes_pane

0xd849,	// (0x0004d1d5) main_pec_pane

0xd849,	// (0x0004d1d5) main_phob_pane

0xd849,	// (0x0004d1d5) main_pinb_pane

0xd849,	// (0x0004d1d5) main_postcard_pane

0xd849,	// (0x0004d1d5) main_qdial_pane

0xdd26,	// (0x0004d6b2) main_skin_pane

0xd849,	// (0x0004d1d5) main_smil2_pane

0xdd26,	// (0x0004d6b2) main_smil_pane

0xdd26,	// (0x0004d6b2) main_video_pane

0xdd26,	// (0x0004d6b2) main_video_tele_pane

0xdaa4,	// (0x0004d430) main_viewer_pane_ParamLimits

0xdaa4,	// (0x0004d430) main_viewer_pane

0xdd26,	// (0x0004d6b2) main_vorec_pane

0x5452,	// (0x00044dde) popup_blid_sat_info_window_ParamLimits

0x5452,	// (0x00044dde) popup_blid_sat_info_window

0x54b0,	// (0x00044e3c) popup_dyc_status_message_window_ParamLimits

0x54b0,	// (0x00044e3c) popup_dyc_status_message_window

0x54c6,	// (0x00044e52) popup_grid_large_graphic_window_ParamLimits

0x54c6,	// (0x00044e52) popup_grid_large_graphic_window

0x5560,	// (0x00044eec) popup_loc_request_window_ParamLimits

0x5560,	// (0x00044eec) popup_loc_request_window

0x5644,	// (0x00044fd0) popup_wml_address_window_ParamLimits

0x5644,	// (0x00044fd0) popup_wml_address_window

0x5241,	// (0x00044bcd) call_muted_g1

0x451c,	// (0x00043ea8) popup_call_audio_conf_window_ParamLimits

0x451c,	// (0x00043ea8) popup_call_audio_conf_window

0x5251,	// (0x00044bdd) popup_call_audio_first_window_ParamLimits

0x5251,	// (0x00044bdd) popup_call_audio_first_window

0x52af,	// (0x00044c3b) popup_call_audio_in_window_ParamLimits

0x52af,	// (0x00044c3b) popup_call_audio_in_window

0x52db,	// (0x00044c67) popup_call_audio_out_window_ParamLimits

0x52db,	// (0x00044c67) popup_call_audio_out_window

0x5309,	// (0x00044c95) popup_call_audio_second_window_ParamLimits

0x5309,	// (0x00044c95) popup_call_audio_second_window

0x534f,	// (0x00044cdb) popup_call_audio_wait_window_ParamLimits

0x534f,	// (0x00044cdb) popup_call_audio_wait_window

0x5382,	// (0x00044d0e) popup_number_entry_window_ParamLimits

0x5382,	// (0x00044d0e) popup_number_entry_window

0xd319,	// (0x0004cca5) bg_popup_call_pane_cp05_ParamLimits

0xd319,	// (0x0004cca5) bg_popup_call_pane_cp05

0xd339,	// (0x0004ccc5) popup_number_entry_window_t1

0xd34c,	// (0x0004ccd8) popup_number_entry_window_t2

0xd35e,	// (0x0004ccea) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0004ea56) popup_number_entry_window_t

0xd48f,	// (0x0004ce1b) text_title_cp2

0xd4a2,	// (0x0004ce2e) bg_popup_call_pane_cp_ParamLimits

0xd4a2,	// (0x0004ce2e) bg_popup_call_pane_cp

0xd4b0,	// (0x0004ce3c) call_thumbnail_pane

0xd4b8,	// (0x0004ce44) popup_call_audio_in_window_g1_ParamLimits

0xd4b8,	// (0x0004ce44) popup_call_audio_in_window_g1

0xd4c4,	// (0x0004ce50) popup_call_audio_in_window_g2_ParamLimits

0xd4c4,	// (0x0004ce50) popup_call_audio_in_window_g2

0xd4d0,	// (0x0004ce5c) popup_call_audio_in_window_g3_ParamLimits

0xd4d0,	// (0x0004ce5c) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0004ea5f) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0004ea5f) popup_call_audio_in_window_g

0xd4dc,	// (0x0004ce68) popup_call_audio_in_window_t1_ParamLimits

0xd4dc,	// (0x0004ce68) popup_call_audio_in_window_t1

0xd4f7,	// (0x0004ce83) popup_call_audio_in_window_t2_ParamLimits

0xd4f7,	// (0x0004ce83) popup_call_audio_in_window_t2

0xd512,	// (0x0004ce9e) popup_call_audio_in_window_t3_ParamLimits

0xd512,	// (0x0004ce9e) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0004ea66) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0004ea66) popup_call_audio_in_window_t

0xd4a2,	// (0x0004ce2e) bg_popup_call_pane_cp01_ParamLimits

0xd4a2,	// (0x0004ce2e) bg_popup_call_pane_cp01

0xd4b0,	// (0x0004ce3c) call_thumbnail_pane_cp02

0xd525,	// (0x0004ceb1) call_type_pane_cp022

0xd52d,	// (0x0004ceb9) popup_call_audio_out_window_g1_ParamLimits

0xd52d,	// (0x0004ceb9) popup_call_audio_out_window_g1

0xd53f,	// (0x0004cecb) popup_call_audio_out_window_g2_ParamLimits

0xd53f,	// (0x0004cecb) popup_call_audio_out_window_g2

0xd54b,	// (0x0004ced7) popup_call_audio_out_window_g3_ParamLimits

0xd54b,	// (0x0004ced7) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0004ea6d) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0004ea6d) popup_call_audio_out_window_g

0xd55d,	// (0x0004cee9) popup_call_audio_out_window_t1_ParamLimits

0xd55d,	// (0x0004cee9) popup_call_audio_out_window_t1

0xd575,	// (0x0004cf01) popup_call_audio_out_window_t2_ParamLimits

0xd575,	// (0x0004cf01) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0004ea74) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0004ea74) popup_call_audio_out_window_t

0xd58a,	// (0x0004cf16) bg_popup_call_pane_ParamLimits

0xd58a,	// (0x0004cf16) bg_popup_call_pane

0x1e8f,	// (0x0004181b) call_thumbnail_pane_cp_ParamLimits

0x1e8f,	// (0x0004181b) call_thumbnail_pane_cp

0xd60e,	// (0x0004cf9a) call_type_pane_cp01_ParamLimits

0xd60e,	// (0x0004cf9a) call_type_pane_cp01

0xd652,	// (0x0004cfde) popup_call_audio_first_window_g1_ParamLimits

0xd652,	// (0x0004cfde) popup_call_audio_first_window_g1

0xd69e,	// (0x0004d02a) popup_call_audio_first_window_g2_ParamLimits

0xd69e,	// (0x0004d02a) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0004ea79) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0004ea79) popup_call_audio_first_window_g

0xd6e2,	// (0x0004d06e) popup_call_audio_first_window_t1_ParamLimits

0xd6e2,	// (0x0004d06e) popup_call_audio_first_window_t1

0xd78e,	// (0x0004d11a) popup_call_audio_first_window_t4_ParamLimits

0xd78e,	// (0x0004d11a) popup_call_audio_first_window_t4

0xd81a,	// (0x0004d1a6) popup_call_audio_first_window_t5_ParamLimits

0xd81a,	// (0x0004d1a6) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0004ea7e) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0004ea7e) popup_call_audio_first_window_t

0xd849,	// (0x0004d1d5) bg_popup_call_pane_cp02

0xd853,	// (0x0004d1df) call_type_pane_cp023

0xd85b,	// (0x0004d1e7) popup_call_audio_wait_window_g1

0xd863,	// (0x0004d1ef) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004ea85) popup_call_audio_wait_window_g

0xd86b,	// (0x0004d1f7) popup_call_audio_wait_window_t3

0xd879,	// (0x0004d205) bg_popup_call_pane_cp03_ParamLimits

0xd879,	// (0x0004d205) bg_popup_call_pane_cp03

0xd8d9,	// (0x0004d265) call_thumbnail_pane_cp011_ParamLimits

0xd8d9,	// (0x0004d265) call_thumbnail_pane_cp011

0xd8e5,	// (0x0004d271) call_type_pane_cp034_ParamLimits

0xd8e5,	// (0x0004d271) call_type_pane_cp034

0xd921,	// (0x0004d2ad) popup_call_audio_second_window_g1_ParamLimits

0xd921,	// (0x0004d2ad) popup_call_audio_second_window_g1

0xd95d,	// (0x0004d2e9) popup_call_audio_second_window_g2_ParamLimits

0xd95d,	// (0x0004d2e9) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0004ea8a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0004ea8a) popup_call_audio_second_window_g

0xd999,	// (0x0004d325) popup_call_audio_second_window_t1_ParamLimits

0xd999,	// (0x0004d325) popup_call_audio_second_window_t1

0xda1a,	// (0x0004d3a6) popup_call_audio_second_window_t2_ParamLimits

0xda1a,	// (0x0004d3a6) popup_call_audio_second_window_t2

0xda50,	// (0x0004d3dc) popup_call_audio_second_window_t3_ParamLimits

0xda50,	// (0x0004d3dc) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0004ea8f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0004ea8f) popup_call_audio_second_window_t

0xd849,	// (0x0004d1d5) bg_popup_call_pane_cp04

0xda86,	// (0x0004d412) list_conf_pane

0xda8e,	// (0x0004d41a) popup_call_audio_conf_window_t1

0xda9c,	// (0x0004d428) call_thumbnail_pane_g1

0xdaa4,	// (0x0004d430) bg_pinb_pane_ParamLimits

0xdaa4,	// (0x0004d430) bg_pinb_pane

0xdab2,	// (0x0004d43e) find_pinb_pane

0xdabb,	// (0x0004d447) listscroll_pinb_pane_ParamLimits

0xdabb,	// (0x0004d447) listscroll_pinb_pane

0xdaca,	// (0x0004d456) pinb_bg_pane_g1

0x1eb3,	// (0x0004183f) pinb_bg_pane_g2

0x1ebd,	// (0x00041849) pinb_bg_pane_g3

0x1ec7,	// (0x00041853) pinb_bg_pane_g4

0x1ed1,	// (0x0004185d) pinb_bg_pane_g5

0x1edb,	// (0x00041867) pinb_bg_pane_g6

0x1ee4,	// (0x00041870) pinb_bg_pane_g7

0x1eed,	// (0x00041879) pinb_bg_pane_g8

0x1ef8,	// (0x00041884) pinb_bg_pane_g9

0x1f02,	// (0x0004188e) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0004ea96) pinb_bg_pane_g

0x1f1d,	// (0x000418a9) grid_pinb_pane

0x1f26,	// (0x000418b2) list_pinb_pane

0x1f2f,	// (0x000418bb) scroll_pane_cp01_ParamLimits

0x1f2f,	// (0x000418bb) scroll_pane_cp01

0xdad4,	// (0x0004d460) find_pinb_pane_g1_ParamLimits

0xdad4,	// (0x0004d460) find_pinb_pane_g1

0xdaec,	// (0x0004d478) find_pinb_pane_t1

0xdafe,	// (0x0004d48a) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0004eab0) find_pinb_pane_t

0xdb13,	// (0x0004d49f) input_focus_pane_cp01_ParamLimits

0xdb13,	// (0x0004d49f) input_focus_pane_cp01

0x1f41,	// (0x000418cd) cell_pinb_pane_ParamLimits

0x1f41,	// (0x000418cd) cell_pinb_pane

0x1f59,	// (0x000418e5) cell_pinb_pane_g1_ParamLimits

0x1f59,	// (0x000418e5) cell_pinb_pane_g1

0x1f6d,	// (0x000418f9) cell_pinb_pane_g2_ParamLimits

0x1f6d,	// (0x000418f9) cell_pinb_pane_g2

0xdb1f,	// (0x0004d4ab) cell_pinb_pane_g3_ParamLimits

0xdb1f,	// (0x0004d4ab) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0004eab5) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0004eab5) cell_pinb_pane_g

0xd849,	// (0x0004d1d5) grid_highlight_pane_cp01

0x1f79,	// (0x00041905) list_pinb_item_pane_ParamLimits

0x1f79,	// (0x00041905) list_pinb_item_pane

0xd849,	// (0x0004d1d5) list_highlight_pane_cp02

0x1f8a,	// (0x00041916) list_pinb_item_pane_g1_ParamLimits

0x1f8a,	// (0x00041916) list_pinb_item_pane_g1

0xdb2b,	// (0x0004d4b7) list_pinb_item_pane_g2_ParamLimits

0xdb2b,	// (0x0004d4b7) list_pinb_item_pane_g2

0x1f97,	// (0x00041923) list_pinb_item_pane_g3_ParamLimits

0x1f97,	// (0x00041923) list_pinb_item_pane_g3

0x1fa8,	// (0x00041934) list_pinb_item_pane_g4_ParamLimits

0x1fa8,	// (0x00041934) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0004eabc) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0004eabc) list_pinb_item_pane_g

0x1fb4,	// (0x00041940) list_pinb_item_pane_t1_ParamLimits

0x1fb4,	// (0x00041940) list_pinb_item_pane_t1

0x1fe9,	// (0x00041975) calc_display_pane

0x200b,	// (0x00041997) calc_paper_pane

0x2028,	// (0x000419b4) grid_calc_pane

0xd849,	// (0x0004d1d5) bg_list_pane_cp01

0x204a,	// (0x000419d6) clock_g1

0x2052,	// (0x000419de) clock_g2

0x0001,

0xf139,	// (0x0004eac5) clock_g

0x205a,	// (0x000419e6) clock_t1_ParamLimits

0x205a,	// (0x000419e6) clock_t1

0x206f,	// (0x000419fb) clock_t2_ParamLimits

0x206f,	// (0x000419fb) clock_t2

0x2081,	// (0x00041a0d) clock_t3_ParamLimits

0x2081,	// (0x00041a0d) clock_t3

0x2093,	// (0x00041a1f) clock_t4_ParamLimits

0x2093,	// (0x00041a1f) clock_t4

0x20a5,	// (0x00041a31) clock_t5_ParamLimits

0x20a5,	// (0x00041a31) clock_t5

0x20ba,	// (0x00041a46) clock_t6_ParamLimits

0x20ba,	// (0x00041a46) clock_t6

0x20cc,	// (0x00041a58) clock_t7_ParamLimits

0x20cc,	// (0x00041a58) clock_t7

0x20de,	// (0x00041a6a) clock_t8_ParamLimits

0x20de,	// (0x00041a6a) clock_t8

0x20f0,	// (0x00041a7c) clock_t9_ParamLimits

0x20f0,	// (0x00041a7c) clock_t9

0x0008,

0xf13e,	// (0x0004eaca) clock_t_ParamLimits

0xf13e,	// (0x0004eaca) clock_t

0xdb37,	// (0x0004d4c3) popup_clock_analogue_window_cp02

0xdb37,	// (0x0004d4c3) popup_clock_digital_window_cp01

0xdb3f,	// (0x0004d4cb) listscroll_help_pane

0xd849,	// (0x0004d1d5) phob_pre_status_pane

0xdb49,	// (0x0004d4d5) grid_qdial_pane

0xdaa4,	// (0x0004d430) listscroll_mce_pane

0xdaa4,	// (0x0004d430) bg_notes_pane

0xdb53,	// (0x0004d4df) list_notes_pane

0x2102,	// (0x00041a8e) scroll_pane_cp06

0xdb61,	// (0x0004d4ed) bg_calc_paper_pane

0xacf2,	// (0x0004a67e) list_calc_pane

0xdb75,	// (0x0004d501) bg_calc_display_pane

0x2114,	// (0x00041aa0) calc_display_pane_t1

0x2126,	// (0x00041ab2) calc_display_pane_t2

0xad0c,	// (0x0004a698) calc_display_pane_t3

0x0002,

0xf151,	// (0x0004eadd) calc_display_pane_t

0x2138,	// (0x00041ac4) cell_calc_pane_ParamLimits

0x2138,	// (0x00041ac4) cell_calc_pane

0xdb81,	// (0x0004d50d) bg_calc_paper_pane_g1

0xdb8d,	// (0x0004d519) bg_calc_paper_pane_g2

0xdb99,	// (0x0004d525) bg_calc_paper_pane_g3

0xdba5,	// (0x0004d531) bg_calc_paper_pane_g4

0xdbb1,	// (0x0004d53d) bg_calc_paper_pane_g5

0x216b,	// (0x00041af7) bg_calc_paper_pane_g6

0x217a,	// (0x00041b06) bg_calc_paper_pane_g7

0x2189,	// (0x00041b15) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0004eae4) bg_calc_paper_pane_g

0x2198,	// (0x00041b24) calc_bg_paper_pane_g9

0x21a7,	// (0x00041b33) list_calc_item_pane_ParamLimits

0x21a7,	// (0x00041b33) list_calc_item_pane

0xdbbd,	// (0x0004d549) list_calc_item_pane_g1

0xad1e,	// (0x0004a6aa) list_calc_item_pane_t1_ParamLimits

0xad1e,	// (0x0004a6aa) list_calc_item_pane_t1

0x21ba,	// (0x00041b46) list_calc_item_pane_t2_ParamLimits

0x21ba,	// (0x00041b46) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0004eaf5) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0004eaf5) list_calc_item_pane_t

0xdbca,	// (0x0004d556) cell_calc_pane_g1

0xdbd4,	// (0x0004d560) grid_highlight_pane_cp02

0xdbf6,	// (0x0004d582) bg_calc_display_pane_g1

0xad30,	// (0x0004a6bc) bg_calc_display_pane_g2

0xdbff,	// (0x0004d58b) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0004eaff) bg_calc_display_pane_g

0x21e8,	// (0x00041b74) cell_qdial_pane_ParamLimits

0x21e8,	// (0x00041b74) cell_qdial_pane

0x21fa,	// (0x00041b86) cell_qdial_pane_g1_ParamLimits

0x21fa,	// (0x00041b86) cell_qdial_pane_g1

0x2210,	// (0x00041b9c) cell_qdial_pane_g2_ParamLimits

0x2210,	// (0x00041b9c) cell_qdial_pane_g2

0xdc08,	// (0x0004d594) cell_qdial_pane_g3_ParamLimits

0xdc08,	// (0x0004d594) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0004eb06) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0004eb06) cell_qdial_pane_g

0x2237,	// (0x00041bc3) cell_qdial_pane_t1_ParamLimits

0x2237,	// (0x00041bc3) cell_qdial_pane_t1

0x224f,	// (0x00041bdb) cell_qdial_pane_t2_ParamLimits

0x224f,	// (0x00041bdb) cell_qdial_pane_t2

0x2262,	// (0x00041bee) cell_qdial_pane_t3_ParamLimits

0x2262,	// (0x00041bee) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0004eb0f) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0004eb0f) cell_qdial_pane_t

0xd849,	// (0x0004d1d5) grid_highlight_pane_cp04

0xdc14,	// (0x0004d5a0) thumbnail_qdial_pane_ParamLimits

0xdc14,	// (0x0004d5a0) thumbnail_qdial_pane

0xdc70,	// (0x0004d5fc) list_help_pane

0xdc79,	// (0x0004d605) scroll_pane_cp02

0x2275,	// (0x00041c01) help_list_pane_t1_ParamLimits

0x2275,	// (0x00041c01) help_list_pane_t1

0xad3a,	// (0x0004a6c6) bg_notes_pane_g2

0xad42,	// (0x0004a6ce) bg_notes_pane_g3

0xad4a,	// (0x0004a6d6) notes_bg_pane_g1

0xad52,	// (0x0004a6de) notes_bg_pane_g4

0xad5a,	// (0x0004a6e6) notes_bg_pane_g5

0xad62,	// (0x0004a6ee) notes_bg_pane_g6

0xad6a,	// (0x0004a6f6) notes_bg_pane_g7

0xad72,	// (0x0004a6fe) notes_bg_pane_g8

0xad7a,	// (0x0004a706) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0004eb2d) notes_bg_pane_g

0x2290,	// (0x00041c1c) list_notes_text_pane_ParamLimits

0x2290,	// (0x00041c1c) list_notes_text_pane

0xdc82,	// (0x0004d60e) list_notes_text_pane_g1

0xad82,	// (0x0004a70e) list_notes_text_pane_t1

0x22a3,	// (0x00041c2f) listscroll_cale_week_pane

0x22cd,	// (0x00041c59) bg_cale_heading_pane

0x22e5,	// (0x00041c71) bg_cale_pane_cp01

0x2302,	// (0x00041c8e) cale_week_corner_pane

0x2321,	// (0x00041cad) cale_week_day_heading_pane

0x233e,	// (0x00041cca) cale_week_scroll_pane_g1

0x2351,	// (0x00041cdd) cale_week_scroll_pane_g2

0x2369,	// (0x00041cf5) cale_week_scroll_pane_g3

0x2381,	// (0x00041d0d) cale_week_scroll_pane_g4

0x2399,	// (0x00041d25) cale_week_scroll_pane_g5

0x23b1,	// (0x00041d3d) cale_week_scroll_pane_g6

0x23c9,	// (0x00041d55) cale_week_scroll_pane_g7

0x23e1,	// (0x00041d6d) cale_week_scroll_pane_g8

0x23fd,	// (0x00041d89) cale_week_scroll_pane_g9

0x2415,	// (0x00041da1) cale_week_scroll_pane_g10

0x242d,	// (0x00041db9) cale_week_scroll_pane_g11

0x2445,	// (0x00041dd1) cale_week_scroll_pane_g12

0x245d,	// (0x00041de9) cale_week_scroll_pane_g13

0x245d,	// (0x00041de9) cale_week_scroll_pane_g14

0x245d,	// (0x00041de9) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0004eb3c) cale_week_scroll_pane_g

0x2491,	// (0x00041e1d) cale_week_time_pane

0x24ad,	// (0x00041e39) grid_cale_week_pane

0xdcb7,	// (0x0004d643) scroll_pane_cp08

0x24c7,	// (0x00041e53) cell_cale_week_pane_ParamLimits

0x24c7,	// (0x00041e53) cell_cale_week_pane

0x253d,	// (0x00041ec9) cale_week_day_heading_pane_t1

0x2562,	// (0x00041eee) cale_week_day_heading_pane_t2

0x258c,	// (0x00041f18) cale_week_day_heading_pane_t3

0x25b6,	// (0x00041f42) cale_week_day_heading_pane_t4

0x25e0,	// (0x00041f6c) cale_week_day_heading_pane_t5

0x260a,	// (0x00041f96) cale_week_day_heading_pane_t6

0x2634,	// (0x00041fc0) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0004eb5d) cale_week_day_heading_pane_t

0xdcd4,	// (0x0004d660) bg_cale_side_pane

0x2659,	// (0x00041fe5) cale_week_time_pane_t1

0x2693,	// (0x0004201f) cale_week_time_pane_t2

0x26cd,	// (0x00042059) cale_week_time_pane_t3

0x2707,	// (0x00042093) cale_week_time_pane_t4

0x2741,	// (0x000420cd) cale_week_time_pane_t5

0x277b,	// (0x00042107) cale_week_time_pane_t6

0x27b5,	// (0x00042141) cale_week_time_pane_t7

0x27ef,	// (0x0004217b) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0004eb6c) cale_week_time_pane_t

0x2829,	// (0x000421b5) cell_cale_week_pane_g2

0x2848,	// (0x000421d4) cell_cale_week_pane_g3_ParamLimits

0x2848,	// (0x000421d4) cell_cale_week_pane_g3

0xdce2,	// (0x0004d66e) grid_highlight_pane_cp07

0xdcea,	// (0x0004d676) listscroll_gms_pane

0xdcf4,	// (0x0004d680) grid_gms_pane

0xdcfd,	// (0x0004d689) listscroll_gms_pane_g1

0xdd05,	// (0x0004d691) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0004eb7d) listscroll_gms_pane_g

0x2860,	// (0x000421ec) scroll_pane_cp010

0x286b,	// (0x000421f7) cell_gms_pane_ParamLimits

0x286b,	// (0x000421f7) cell_gms_pane

0x287c,	// (0x00042208) cell_gms_pane_g1

0xdd0d,	// (0x0004d699) cell_gms_pane_g2

0xdc82,	// (0x0004d60e) cell_gms_pane_g3

0xdd15,	// (0x0004d6a1) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0004eb82) cell_gms_pane_g

0xdd1e,	// (0x0004d6aa) grid_highlight_pane_cp09

0x51cf,	// (0x00044b5b) phob_pre_status_pane_g1

0x51d7,	// (0x00044b63) phob_pre_status_pane_g2

0x51df,	// (0x00044b6b) phob_pre_status_pane_g3

0x51e7,	// (0x00044b73) phob_pre_status_pane_g4

0x0004,

0xf527,	// (0x0004eeb3) phob_pre_status_pane_g

0x51f7,	// (0x00044b83) phob_pre_status_pane_t1

0x5205,	// (0x00044b91) phob_pre_status_pane_t2

0x5213,	// (0x00044b9f) phob_pre_status_pane_t3

0x0002,

0xf532,	// (0x0004eebe) phob_pre_status_pane_t

0xdd26,	// (0x0004d6b2) bg_list_pane_cp05

0x288c,	// (0x00042218) grid_vorec_pane

0x2894,	// (0x00042220) vorec_t1

0x28a2,	// (0x0004222e) vorec_t2

0x28b0,	// (0x0004223c) vorec_t3

0x28be,	// (0x0004224a) vorec_t4

0xac5e,	// (0x0004a5ea) vorec_t5

0xac6c,	// (0x0004a5f8) vorec_t6

0x0004,

0xf1ff,	// (0x0004eb8b) vorec_t

0xac7a,	// (0x0004a606) wait_bar_pane_cp01

0x28da,	// (0x00042266) cell_vorec_pane_ParamLimits

0x28da,	// (0x00042266) cell_vorec_pane

0xad90,	// (0x0004a71c) cell_vorec_pane_g1

0xd849,	// (0x0004d1d5) grid_highlight_pane_cp05

0x28ff,	// (0x0004228b) cams_zoom_pane

0x290e,	// (0x0004229a) image_vga_pane

0x2924,	// (0x000422b0) main_camera_pane_g1

0x2934,	// (0x000422c0) main_camera_pane_g2

0x2944,	// (0x000422d0) main_camera_pane_g3

0x2954,	// (0x000422e0) main_camera_pane_g4

0x2964,	// (0x000422f0) main_camera_pane_g5

0x2974,	// (0x00042300) main_camera_pane_g6

0x2984,	// (0x00042310) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004eb96) main_camera_pane_g

0x2994,	// (0x00042320) main_camera_pane_t1

0x29aa,	// (0x00042336) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004eba7) main_camera_pane_t

0x29dc,	// (0x00042368) cams_zoom_pane_cp_ParamLimits

0x29dc,	// (0x00042368) cams_zoom_pane_cp

0x2a04,	// (0x00042390) image_cif_pane_ParamLimits

0x2a04,	// (0x00042390) image_cif_pane

0x2a33,	// (0x000423bf) image_subqcif_pane

0x2a3b,	// (0x000423c7) main_video_pane_g1_ParamLimits

0x2a3b,	// (0x000423c7) main_video_pane_g1

0x2a5f,	// (0x000423eb) main_video_pane_g2_ParamLimits

0x2a5f,	// (0x000423eb) main_video_pane_g2

0x2a93,	// (0x0004241f) main_video_pane_g3_ParamLimits

0x2a93,	// (0x0004241f) main_video_pane_g3

0x2ac1,	// (0x0004244d) main_video_pane_g4_ParamLimits

0x2ac1,	// (0x0004244d) main_video_pane_g4

0x2aef,	// (0x0004247b) main_video_pane_g5_ParamLimits

0x2aef,	// (0x0004247b) main_video_pane_g5

0xdd3a,	// (0x0004d6c6) main_video_pane_g6_ParamLimits

0xdd3a,	// (0x0004d6c6) main_video_pane_g6

0x0006,

0xf220,	// (0x0004ebac) main_video_pane_g_ParamLimits

0xf220,	// (0x0004ebac) main_video_pane_g

0x2b16,	// (0x000424a2) main_video_pane_t1_ParamLimits

0x2b16,	// (0x000424a2) main_video_pane_t1

0xdd54,	// (0x0004d6e0) cams_zoom_pane_g1

0xdd5d,	// (0x0004d6e9) cams_zoom_pane_g2

0xdd66,	// (0x0004d6f2) cams_zoom_pane_g3

0xdd6f,	// (0x0004d6fb) cams_zoom_pane_g4

0x0003,

0x0009,	// (0x0003f995) cams_zoom_pane_g

0x2b73,	// (0x000424ff) grid_cams_pane

0x2b88,	// (0x00042514) linegrid_cams_pane

0x2b99,	// (0x00042525) cell_cams_pane_ParamLimits

0x2b99,	// (0x00042525) cell_cams_pane

0xdd78,	// (0x0004d704) cams_burst_image_pane

0xdd80,	// (0x0004d70c) cell_cams_pane_g1

0xd849,	// (0x0004d1d5) grid_highlight_pane_cp03

0xdbca,	// (0x0004d556) mp_bg_pane_g1

0xd849,	// (0x0004d1d5) bg_list_pane_cp03

0x510a,	// (0x00044a96) bg_mp_pane

0x5112,	// (0x00044a9e) grid_mp_pane

0x511a,	// (0x00044aa6) media_player_g1

0x5122,	// (0x00044aae) media_player_t1

0x5130,	// (0x00044abc) media_player_t2

0x513e,	// (0x00044aca) media_player_t3

0x514c,	// (0x00044ad8) media_player_t4

0x515a,	// (0x00044ae6) media_player_t5

0x5168,	// (0x00044af4) media_player_t6

0x5176,	// (0x00044b02) media_player_t7

0x0006,

0xf511,	// (0x0004ee9d) media_player_t

0x5184,	// (0x00044b10) wait_bar_pane_cp02

0xf4f6,	// (0x0004ee82) main_usb_pane_t

0x51c6,	// (0x00044b52) cell_mp_pane

0xdbca,	// (0x0004d556) cell_mp_pane_g1

0xd849,	// (0x0004d1d5) grid_highlight_pane_cp06

0xdd88,	// (0x0004d714) grid_skin_colour_pane

0xdd90,	// (0x0004d71c) list_highlight_pane_cp03

0x2bb7,	// (0x00042543) skin_g1

0xdd98,	// (0x0004d724) skin_t1

0xdda7,	// (0x0004d733) skin_t2

0x0001,

0x003e,	// (0x0003f9ca) skin_t

0x2bbf,	// (0x0004254b) cell_skin_colour_pane_ParamLimits

0x2bbf,	// (0x0004254b) cell_skin_colour_pane

0xddb5,	// (0x0004d741) cell_skin_colour_pane_g1

0x2c28,	// (0x000425b4) call_video_g1_ParamLimits

0x2c28,	// (0x000425b4) call_video_g1

0x2c3e,	// (0x000425ca) call_video_g2_ParamLimits

0x2c3e,	// (0x000425ca) call_video_g2

0x0001,

0xf25b,	// (0x0004ebe7) call_video_g_ParamLimits

0xf25b,	// (0x0004ebe7) call_video_g

0x2c83,	// (0x0004260f) call_video_uplink_pane_cp1_ParamLimits

0x2c83,	// (0x0004260f) call_video_uplink_pane_cp1

0xddc7,	// (0x0004d753) call_video_uplink_pane_cp2

0x2d18,	// (0x000426a4) video_down_crop_pane_ParamLimits

0x2d18,	// (0x000426a4) video_down_crop_pane

0x2ddb,	// (0x00042767) video_down_pane_ParamLimits

0x2ddb,	// (0x00042767) video_down_pane

0xddcf,	// (0x0004d75b) video_down_subqcif_pane_ParamLimits

0xddcf,	// (0x0004d75b) video_down_subqcif_pane

0xdde7,	// (0x0004d773) video_down_subqcif_pane_cp_ParamLimits

0xdde7,	// (0x0004d773) video_down_subqcif_pane_cp

0xde0b,	// (0x0004d797) im_reading_pane_ParamLimits

0xde0b,	// (0x0004d797) im_reading_pane

0x2e98,	// (0x00042824) im_writing_pane_ParamLimits

0x2e98,	// (0x00042824) im_writing_pane

0x2eae,	// (0x0004283a) im_reading_pane_t1

0xde25,	// (0x0004d7b1) list_im_pane

0xde36,	// (0x0004d7c2) scroll_pane_cp07

0x2ee4,	// (0x00042870) im_writing_pane_t1_ParamLimits

0x2ee4,	// (0x00042870) im_writing_pane_t1

0xde4f,	// (0x0004d7db) im_writing_pane_t2_ParamLimits

0xde4f,	// (0x0004d7db) im_writing_pane_t2

0x0001,

0xf265,	// (0x0004ebf1) im_writing_pane_t_ParamLimits

0xf265,	// (0x0004ebf1) im_writing_pane_t

0xd849,	// (0x0004d1d5) input_focus_pane_cp04

0xd849,	// (0x0004d1d5) input_focus_pane_cp05

0x2ef9,	// (0x00042885) list_im_single_pane_ParamLimits

0x2ef9,	// (0x00042885) list_im_single_pane

0xde6c,	// (0x0004d7f8) list_single_im_pane_t1

0x518c,	// (0x00044b18) blid_accuracy_pane

0x5194,	// (0x00044b20) blid_compass_pane

0x519c,	// (0x00044b28) main_location_t1

0x51aa,	// (0x00044b36) main_location_t2

0x51b8,	// (0x00044b44) main_location_t3

0x0002,

0xf520,	// (0x0004eeac) main_location_t

0xd849,	// (0x0004d1d5) aid_levels_location

0xdbca,	// (0x0004d556) blid_accuracy_pane_g1

0xdbca,	// (0x0004d556) blid_accuracy_pane_g2

0x0001,

0x00af,	// (0x0003fa3b) blid_accuracy_pane_g

0xdea6,	// (0x0004d832) wml_content_pane

0xdee4,	// (0x0004d870) wml_button_pane_ParamLimits

0xdee4,	// (0x0004d870) wml_button_pane

0x28da,	// (0x00042266) wml_list_single_large_pane_ParamLimits

0x28da,	// (0x00042266) wml_list_single_large_pane

0x2f0c,	// (0x00042898) wml_list_single_medium_pane_ParamLimits

0x2f0c,	// (0x00042898) wml_list_single_medium_pane

0x2f20,	// (0x000428ac) wml_list_single_small_pane_ParamLimits

0x2f20,	// (0x000428ac) wml_list_single_small_pane

0xdef8,	// (0x0004d884) wml_selection_box_pane_ParamLimits

0xdef8,	// (0x0004d884) wml_selection_box_pane

0xdf0b,	// (0x0004d897) wml_list_single_pane_t1

0xdf1a,	// (0x0004d8a6) wml_list_single_medium_pane_t1

0xdf29,	// (0x0004d8b5) wml_list_single_large_pane_t1

0xdf38,	// (0x0004d8c4) input_focus_pane_cp02_ParamLimits

0xdf38,	// (0x0004d8c4) input_focus_pane_cp02

0xdf4b,	// (0x0004d8d7) wml_selection_box_pane_g1

0xdf54,	// (0x0004d8e0) wml_selection_box_pane_t1_ParamLimits

0xdf54,	// (0x0004d8e0) wml_selection_box_pane_t1

0xdaa4,	// (0x0004d430) bg_wml_button_pane_ParamLimits

0xdaa4,	// (0x0004d430) bg_wml_button_pane

0xdf6c,	// (0x0004d8f8) wml_button_pane_g1

0xdf74,	// (0x0004d900) wml_button_pane_t1

0xdf6c,	// (0x0004d8f8) wml_button_bg_pane_g1

0xdf84,	// (0x0004d910) wml_button_bg_pane_g2

0xdf8c,	// (0x0004d918) wml_button_bg_pane_g3

0xdf94,	// (0x0004d920) wml_button_bg_pane_g4

0xdf9c,	// (0x0004d928) wml_button_bg_pane_g5

0xdfa4,	// (0x0004d930) wml_button_bg_pane_g6

0xdfac,	// (0x0004d938) wml_button_bg_pane_g7

0xdfb4,	// (0x0004d940) wml_button_bg_pane_g8

0xdfbc,	// (0x0004d948) wml_button_bg_pane_g9

0x0008,

0x0052,	// (0x0003f9de) wml_button_bg_pane_g

0x2f36,	// (0x000428c2) bg_list_pane_cp02

0xdfc4,	// (0x0004d950) mce_header_pane_ParamLimits

0xdfc4,	// (0x0004d950) mce_header_pane

0xdfda,	// (0x0004d966) mce_icon_pane

0xdfda,	// (0x0004d966) mce_image_pane

0xdfe3,	// (0x0004d96f) mce_text_pane_ParamLimits

0xdfe3,	// (0x0004d96f) mce_text_pane

0x2f3e,	// (0x000428ca) scroll_pane_cp03

0xdedc,	// (0x0004d868) scroll_pane_cp04

0xdff6,	// (0x0004d982) scroll_pane_cp05_ParamLimits

0xdff6,	// (0x0004d982) scroll_pane_cp05

0x2f48,	// (0x000428d4) mce_header_field_pane_ParamLimits

0x2f48,	// (0x000428d4) mce_header_field_pane

0x2f5f,	// (0x000428eb) mce_header_field_pane_2_ParamLimits

0x2f5f,	// (0x000428eb) mce_header_field_pane_2

0x2f75,	// (0x00042901) mce_header_field_pane_3

0x2f7d,	// (0x00042909) list_single_mce_message_pane_ParamLimits

0x2f7d,	// (0x00042909) list_single_mce_message_pane

0x2f90,	// (0x0004291c) list_single_mce_smart_pane_ParamLimits

0x2f90,	// (0x0004291c) list_single_mce_smart_pane

0xe002,	// (0x0004d98e) input_focus_pane_cp03

0xe00b,	// (0x0004d997) list_header_data_pane

0x2fae,	// (0x0004293a) mce_header_field_pane_t1

0x2fbc,	// (0x00042948) list_single_mce_header_pane_ParamLimits

0x2fbc,	// (0x00042948) list_single_mce_header_pane

0xe013,	// (0x0004d99f) list_single_mce_header_pane_t1

0xe022,	// (0x0004d9ae) list_single_mce_message_pane_g1

0xe02a,	// (0x0004d9b6) list_single_mce_message_pane_t1

0x2ff6,	// (0x00042982) bg_cale_heading_pane_cp01_ParamLimits

0x2ff6,	// (0x00042982) bg_cale_heading_pane_cp01

0xe038,	// (0x0004d9c4) bg_cale_pane_cp02_ParamLimits

0xe038,	// (0x0004d9c4) bg_cale_pane_cp02

0x3030,	// (0x000429bc) cale_month_corner_pane

0x304f,	// (0x000429db) cale_month_day_heading_pane_ParamLimits

0x304f,	// (0x000429db) cale_month_day_heading_pane

0x3095,	// (0x00042a21) cale_month_pane_g1_ParamLimits

0x3095,	// (0x00042a21) cale_month_pane_g1

0x30c4,	// (0x00042a50) cale_month_pane_g2_ParamLimits

0x30c4,	// (0x00042a50) cale_month_pane_g2

0x30ec,	// (0x00042a78) cale_month_pane_g3_ParamLimits

0x30ec,	// (0x00042a78) cale_month_pane_g3

0x3128,	// (0x00042ab4) cale_month_pane_g4_ParamLimits

0x3128,	// (0x00042ab4) cale_month_pane_g4

0x3164,	// (0x00042af0) cale_month_pane_g5_ParamLimits

0x3164,	// (0x00042af0) cale_month_pane_g5

0x31a0,	// (0x00042b2c) cale_month_pane_g6_ParamLimits

0x31a0,	// (0x00042b2c) cale_month_pane_g6

0x31dc,	// (0x00042b68) cale_month_pane_g7_ParamLimits

0x31dc,	// (0x00042b68) cale_month_pane_g7

0x3218,	// (0x00042ba4) cale_month_pane_g8_ParamLimits

0x3218,	// (0x00042ba4) cale_month_pane_g8

0x325c,	// (0x00042be8) cale_month_pane_g9_ParamLimits

0x325c,	// (0x00042be8) cale_month_pane_g9

0x32a2,	// (0x00042c2e) cale_month_pane_g10_ParamLimits

0x32a2,	// (0x00042c2e) cale_month_pane_g10

0x32e8,	// (0x00042c74) cale_month_pane_g11_ParamLimits

0x32e8,	// (0x00042c74) cale_month_pane_g11

0x332e,	// (0x00042cba) cale_month_pane_g12_ParamLimits

0x332e,	// (0x00042cba) cale_month_pane_g12

0x3374,	// (0x00042d00) cale_month_pane_g13_ParamLimits

0x3374,	// (0x00042d00) cale_month_pane_g13

0x000c,

0xf26a,	// (0x0004ebf6) cale_month_pane_g_ParamLimits

0xf26a,	// (0x0004ebf6) cale_month_pane_g

0x33ba,	// (0x00042d46) cale_month_week_pane

0x33d6,	// (0x00042d62) grid_cale_month_pane_ParamLimits

0x33d6,	// (0x00042d62) grid_cale_month_pane

0x3413,	// (0x00042d9f) cale_month_day_heading_pane_t1

0x3499,	// (0x00042e25) cale_month_day_heading_pane_t2

0x3512,	// (0x00042e9e) cale_month_day_heading_pane_t3

0x358b,	// (0x00042f17) cale_month_day_heading_pane_t4

0x3604,	// (0x00042f90) cale_month_day_heading_pane_t5

0x367d,	// (0x00043009) cale_month_day_heading_pane_t6

0x36f6,	// (0x00043082) cale_month_day_heading_pane_t7

0x0006,

0xf285,	// (0x0004ec11) cale_month_day_heading_pane_t

0xdcd4,	// (0x0004d660) bg_cale_side_pane_cp01

0x3773,	// (0x000430ff) cale_month_week_pane_t1

0x378c,	// (0x00043118) cale_month_week_pane_t2

0x37a5,	// (0x00043131) cale_month_week_pane_t3

0x37be,	// (0x0004314a) cale_month_week_pane_t4

0x37d7,	// (0x00043163) cale_month_week_pane_t5

0x37f0,	// (0x0004317c) cale_month_week_pane_t6

0x0005,

0xf294,	// (0x0004ec20) cale_month_week_pane_t

0x3809,	// (0x00043195) cell_cale_month_pane_ParamLimits

0x3809,	// (0x00043195) cell_cale_month_pane

0xad9a,	// (0x0004a726) cell_cale_month_pane_g1

0x38fb,	// (0x00043287) cell_cale_month_pane_t1_ParamLimits

0x38fb,	// (0x00043287) cell_cale_month_pane_t1

0xdce2,	// (0x0004d66e) grid_highlight_pane_cp08

0xdbca,	// (0x0004d556) main_smil_g1

0x3927,	// (0x000432b3) smil_status_pane

0xe077,	// (0x0004da03) smil_text_pane

0x4f62,	// (0x000448ee) bg_popup_call3_rect_pane_g8

0x4f6a,	// (0x000448f6) bg_popup_call3_rect_pane_g9

0x0008,

0xf4a1,	// (0x0004ee2d) bg_popup_call3_rect_pane_g

0x57a3,	// (0x0004512f) smil_status_volume_pane_g1

0xe081,	// (0x0004da0d) smil_status_pane_t1

0xaef2,	// (0x0004a87e) volume_smil_pane

0xe098,	// (0x0004da24) list_smil_text_pane

0x3938,	// (0x000432c4) scroll_pane_cp011

0x3943,	// (0x000432cf) smil_text_list_pane_t1_ParamLimits

0x3943,	// (0x000432cf) smil_text_list_pane_t1

0xada6,	// (0x0004a732) aid_volume_smil_ParamLimits

0xada6,	// (0x0004a732) aid_volume_smil

0xdbca,	// (0x0004d556) smil_volume_pane_g1

0xdbca,	// (0x0004d556) smil_volume_pane_g2

0x0001,

0x00af,	// (0x0003fa3b) smil_volume_pane_g

0x22a3,	// (0x00041c2f) listscroll_cale_day_pane

0xe0a2,	// (0x0004da2e) bg_cale_pane

0xe0ba,	// (0x0004da46) list_cale_pane

0xe0dd,	// (0x0004da69) scroll_pane_cp09

0xe0ee,	// (0x0004da7a) cale_bg_pane_g1

0xe0f6,	// (0x0004da82) cale_bg_pane_g2

0xe0fe,	// (0x0004da8a) cale_bg_pane_g3

0xe106,	// (0x0004da92) cale_bg_pane_g4

0xe10e,	// (0x0004da9a) cale_bg_pane_g5

0xe116,	// (0x0004daa2) cale_bg_pane_g6

0xe11e,	// (0x0004daaa) cale_bg_pane_g7

0xe126,	// (0x0004dab2) cale_bg_pane_g8

0xe12e,	// (0x0004daba) cale_bg_pane_g9

0x0008,

0x00b4,	// (0x0003fa40) cale_bg_pane_g

0x3979,	// (0x00043305) list_cale_time_pane_ParamLimits

0x3979,	// (0x00043305) list_cale_time_pane

0xe13e,	// (0x0004daca) list_cale_time_pane_g1_ParamLimits

0xe13e,	// (0x0004daca) list_cale_time_pane_g1

0xe14a,	// (0x0004dad6) list_cale_time_pane_g2_ParamLimits

0xe14a,	// (0x0004dad6) list_cale_time_pane_g2

0x398c,	// (0x00043318) list_cale_time_pane_g3_ParamLimits

0x398c,	// (0x00043318) list_cale_time_pane_g3

0x3998,	// (0x00043324) list_cale_time_pane_g4_ParamLimits

0x3998,	// (0x00043324) list_cale_time_pane_g4

0x39a4,	// (0x00043330) list_cale_time_pane_g5_ParamLimits

0x39a4,	// (0x00043330) list_cale_time_pane_g5

0x0005,

0xf2b4,	// (0x0004ec40) list_cale_time_pane_g_ParamLimits

0xf2b4,	// (0x0004ec40) list_cale_time_pane_g

0xe164,	// (0x0004daf0) list_cale_time_pane_t1_ParamLimits

0xe164,	// (0x0004daf0) list_cale_time_pane_t1

0xe18c,	// (0x0004db18) list_cale_time_pane_t2_ParamLimits

0xe18c,	// (0x0004db18) list_cale_time_pane_t2

0x3c62,	// (0x000435ee) aid_blid_cardinal_pane

0x3ca0,	// (0x0004362c) compass_pane_t4

0xe1b4,	// (0x0004db40) list_cale_time_pane_t4_ParamLimits

0xe1b4,	// (0x0004db40) list_cale_time_pane_t4

0x3cae,	// (0x0004363a) compass_pane_t5

0x3cbc,	// (0x00043648) compass_pane_t6

0x3cca,	// (0x00043656) compass_pane_t7

0xe626,	// (0x0004dfb2) navi_pane_cc_t1

0xe801,	// (0x0004e18d) aid_phob_thumbnail_center_pane

0x41ff,	// (0x00043b8b) main_postcard_pane_g4_ParamLimits

0x0002,

0x00d4,	// (0x0003fa60) list_cale_time_pane_t_ParamLimits

0x00d4,	// (0x0003fa60) list_cale_time_pane_t

0xd4a2,	// (0x0004ce2e) bg_popup_window_pane_cp02_ParamLimits

0xd4a2,	// (0x0004ce2e) bg_popup_window_pane_cp02

0xe1dc,	// (0x0004db68) heading_pane_cp01_ParamLimits

0xe1dc,	// (0x0004db68) heading_pane_cp01

0xe1e8,	// (0x0004db74) loc_req_pane_ParamLimits

0xe1e8,	// (0x0004db74) loc_req_pane

0xe1f8,	// (0x0004db84) loc_type_pane_ParamLimits

0xe1f8,	// (0x0004db84) loc_type_pane

0xe20a,	// (0x0004db96) loc_type_pane_t1_ParamLimits

0xe20a,	// (0x0004db96) loc_type_pane_t1

0xe21c,	// (0x0004dba8) loc_type_pane_t2_ParamLimits

0xe21c,	// (0x0004dba8) loc_type_pane_t2

0xe22e,	// (0x0004dbba) loc_type_pane_t3_ParamLimits

0xe22e,	// (0x0004dbba) loc_type_pane_t3

0x0002,

0x00db,	// (0x0003fa67) loc_type_pane_t_ParamLimits

0x00db,	// (0x0003fa67) loc_type_pane_t

0xe240,	// (0x0004dbcc) list_loc_req_pane

0xe24a,	// (0x0004dbd6) scroll_pane_cp012

0x39b0,	// (0x0004333c) list_single_loc_request_popup_menu_pane_ParamLimits

0x39b0,	// (0x0004333c) list_single_loc_request_popup_menu_pane

0xe253,	// (0x0004dbdf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe253,	// (0x0004dbdf) list_single_loc_request_popup_menu_pane_g1

0xe25f,	// (0x0004dbeb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe25f,	// (0x0004dbeb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2c1,	// (0x0004ec4d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2c1,	// (0x0004ec4d) list_single_loc_request_popup_menu_pane_g

0xe26b,	// (0x0004dbf7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe26b,	// (0x0004dbf7) list_single_loc_request_popup_menu_pane_t1

0xdaa4,	// (0x0004d430) bg_popup_window_pane_cp03_ParamLimits

0xdaa4,	// (0x0004d430) bg_popup_window_pane_cp03

0xefea,	// (0x0004e976) heading_loc_req_pane_ParamLimits

0xefea,	// (0x0004e976) heading_loc_req_pane

0x39bd,	// (0x00043349) popup_dyc_status_message_window_g1_ParamLimits

0x39bd,	// (0x00043349) popup_dyc_status_message_window_g1

0x39d1,	// (0x0004335d) popup_dyc_status_message_window_t1_ParamLimits

0x39d1,	// (0x0004335d) popup_dyc_status_message_window_t1

0x39e6,	// (0x00043372) popup_dyc_status_message_window_t2_ParamLimits

0x39e6,	// (0x00043372) popup_dyc_status_message_window_t2

0x39fb,	// (0x00043387) popup_dyc_status_message_window_t3_ParamLimits

0x39fb,	// (0x00043387) popup_dyc_status_message_window_t3

0x0002,

0xf2c6,	// (0x0004ec52) popup_dyc_status_message_window_t_ParamLimits

0xf2c6,	// (0x0004ec52) popup_dyc_status_message_window_t

0xd849,	// (0x0004d1d5) bg_heading_pane_cp01

0xe281,	// (0x0004dc0d) heading_loc_req_pane_g1

0xe289,	// (0x0004dc15) heading_loc_req_pane_g2

0xe291,	// (0x0004dc1d) heading_loc_req_pane_g3

0x0002,

0xf2cd,	// (0x0004ec59) heading_loc_req_pane_g

0xe299,	// (0x0004dc25) heading_loc_req_pane_t1

0xe2a8,	// (0x0004dc34) bg_popup_sub_pane_cp01_ParamLimits

0xe2a8,	// (0x0004dc34) bg_popup_sub_pane_cp01

0xe2b6,	// (0x0004dc42) popup_cale_events_window_g1_ParamLimits

0xe2b6,	// (0x0004dc42) popup_cale_events_window_g1

0xe2e8,	// (0x0004dc74) popup_cale_events_window_g2_ParamLimits

0xe2e8,	// (0x0004dc74) popup_cale_events_window_g2

0x0001,

0xf301,	// (0x0004ec8d) popup_cale_events_window_g_ParamLimits

0xf301,	// (0x0004ec8d) popup_cale_events_window_g

0xe308,	// (0x0004dc94) popup_cale_events_window_t1_ParamLimits

0xe308,	// (0x0004dc94) popup_cale_events_window_t1

0xe31a,	// (0x0004dca6) popup_cale_events_window_t2_ParamLimits

0xe31a,	// (0x0004dca6) popup_cale_events_window_t2

0xe358,	// (0x0004dce4) popup_cale_events_window_t3_ParamLimits

0xe358,	// (0x0004dce4) popup_cale_events_window_t3

0xe392,	// (0x0004dd1e) popup_cale_events_window_t4_ParamLimits

0xe392,	// (0x0004dd1e) popup_cale_events_window_t4

0x0003,

0x0127,	// (0x0003fab3) popup_cale_events_window_t_ParamLimits

0x0127,	// (0x0003fab3) popup_cale_events_window_t

0x3a2f,	// (0x000433bb) call_type_pane

0x3a3f,	// (0x000433cb) popup_call_status_window_g1

0x3a53,	// (0x000433df) popup_call_status_window_g2

0x3a67,	// (0x000433f3) popup_call_status_window_g3

0x0002,

0xf306,	// (0x0004ec92) popup_call_status_window_g

0xe3c8,	// (0x0004dd54) call_type_pane_g1

0xe3d1,	// (0x0004dd5d) call_type_pane_g2

0x0001,

0xf30d,	// (0x0004ec99) call_type_pane_g

0xd849,	// (0x0004d1d5) bg_popup_sub_pane_cp02

0xe3da,	// (0x0004dd66) listscroll_popup_wml_pane

0xe3e2,	// (0x0004dd6e) list_wml_pane

0xe3ec,	// (0x0004dd78) scroll_pane_cp013

0x3a76,	// (0x00043402) list_single_graphic_popup_wml_pane_ParamLimits

0x3a76,	// (0x00043402) list_single_graphic_popup_wml_pane

0xdbca,	// (0x0004d556) list_single_graphic_popup_wml_pane_g1

0xe3f5,	// (0x0004dd81) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf312,	// (0x0004ec9e) list_single_graphic_popup_wml_pane_g

0xe3fd,	// (0x0004dd89) list_single_graphic_popup_wml_pane_t1

0xe413,	// (0x0004dd9f) aid_call_pane

0xda9c,	// (0x0004d428) popup_clock_analogue_window_g1

0xda9c,	// (0x0004d428) popup_clock_analogue_window_g2

0xadc8,	// (0x0004a754) popup_clock_analogue_window_g3

0xadc8,	// (0x0004a754) popup_clock_analogue_window_g4

0xdbca,	// (0x0004d556) popup_clock_analogue_window_g5

0x0004,

0xf317,	// (0x0004eca3) popup_clock_analogue_window_g

0xadd0,	// (0x0004a75c) popup_clock_analogue_window_t1

0xadde,	// (0x0004a76a) clock_digital_number_pane_ParamLimits

0xadde,	// (0x0004a76a) clock_digital_number_pane

0xadea,	// (0x0004a776) clock_digital_number_pane_cp02_ParamLimits

0xadea,	// (0x0004a776) clock_digital_number_pane_cp02

0xadf6,	// (0x0004a782) clock_digital_number_pane_cp03_ParamLimits

0xadf6,	// (0x0004a782) clock_digital_number_pane_cp03

0xae02,	// (0x0004a78e) clock_digital_number_pane_cp04_ParamLimits

0xae02,	// (0x0004a78e) clock_digital_number_pane_cp04

0xae0e,	// (0x0004a79a) clock_digital_separator_pane_ParamLimits

0xae0e,	// (0x0004a79a) clock_digital_separator_pane

0xae1a,	// (0x0004a7a6) popup_clock_digital_window_t1

0xdbca,	// (0x0004d556) clock_digital_number_pane_g1

0xdbca,	// (0x0004d556) clock_digital_number_pane_g2

0x0001,

0x00af,	// (0x0003fa3b) clock_digital_number_pane_g

0xdbca,	// (0x0004d556) clock_digital_separator_pane_g1

0xdbca,	// (0x0004d556) clock_digital_separator_pane_g2

0x0001,

0x00af,	// (0x0003fa3b) clock_digital_separator_pane_g

0xd849,	// (0x0004d1d5) bg_popup_window_pane_cp04

0xe41b,	// (0x0004dda7) heading_pane_cp03

0xe423,	// (0x0004ddaf) listscroll_popup_gms_pane

0xe42b,	// (0x0004ddb7) grid_large_graphic_popup_pane

0xe435,	// (0x0004ddc1) listscroll_popup_gms_pane_g1

0xe44b,	// (0x0004ddd7) listscroll_popup_gms_pane_g2

0x0001,

0xf322,	// (0x0004ecae) listscroll_popup_gms_pane_g

0xdedc,	// (0x0004d868) scroll_pane_cp014

0x3a88,	// (0x00043414) cell_large_graphic_popup_pane_ParamLimits

0x3a88,	// (0x00043414) cell_large_graphic_popup_pane

0x3a9e,	// (0x0004342a) cell_large_graphic_popup_pane_g1_ParamLimits

0x3a9e,	// (0x0004342a) cell_large_graphic_popup_pane_g1

0xe453,	// (0x0004dddf) cell_large_graphic_popup_pane_g2_ParamLimits

0xe453,	// (0x0004dddf) cell_large_graphic_popup_pane_g2

0xe45f,	// (0x0004ddeb) cell_large_graphic_popup_pane_g3_ParamLimits

0xe45f,	// (0x0004ddeb) cell_large_graphic_popup_pane_g3

0xe46c,	// (0x0004ddf8) cell_large_graphic_popup_pane_g4_ParamLimits

0xe46c,	// (0x0004ddf8) cell_large_graphic_popup_pane_g4

0x0003,

0xf327,	// (0x0004ecb3) cell_large_graphic_popup_pane_g_ParamLimits

0xf327,	// (0x0004ecb3) cell_large_graphic_popup_pane_g

0xe47c,	// (0x0004de08) grid_highlight_pane_cp010

0xdbca,	// (0x0004d556) bg_popup_call_pane_g1

0xe486,	// (0x0004de12) list_single_graphic_popup_conf_pane_ParamLimits

0xe486,	// (0x0004de12) list_single_graphic_popup_conf_pane

0xe499,	// (0x0004de25) list_highlight_pane_cp01

0xe4a2,	// (0x0004de2e) list_single_graphic_popup_conf_pane_g1

0xe4aa,	// (0x0004de36) list_single_graphic_popup_conf_pane_g2

0x0001,

0x015a,	// (0x0003fae6) list_single_graphic_popup_conf_pane_g

0xe4b2,	// (0x0004de3e) list_single_graphic_popup_conf_pane_t1

0xe4c0,	// (0x0004de4c) linegrid_cams_pane_g1

0x3aaa,	// (0x00043436) linegrid_cams_pane_g2

0xdc82,	// (0x0004d60e) linegrid_cams_pane_g3

0xe4c9,	// (0x0004de55) linegrid_cams_pane_g4

0x3ab3,	// (0x0004343f) linegrid_cams_pane_g5

0x3abc,	// (0x00043448) linegrid_cams_pane_g6

0xdd15,	// (0x0004d6a1) linegrid_cams_pane_g7

0x0006,

0xf330,	// (0x0004ecbc) linegrid_cams_pane_g

0xe4d2,	// (0x0004de5e) popup_clock_analogue_window

0xe4d2,	// (0x0004de5e) popup_clock_digital_window

0xd849,	// (0x0004d1d5) popup_phob_thumbnail_window

0xdbca,	// (0x0004d556) call_video_uplink_pane_g1

0xe4db,	// (0x0004de67) call_video_uplink_pane_g2

0x0001,

0x016e,	// (0x0003fafa) call_video_uplink_pane_g

0xdce2,	// (0x0004d66e) video_uplink_pane

0xe4e3,	// (0x0004de6f) mce_image_pane_g1

0x3ac5,	// (0x00043451) mce_image_pane_g2

0x3acd,	// (0x00043459) mce_image_pane_g3

0x3ad5,	// (0x00043461) mce_image_pane_g4

0x3add,	// (0x00043469) mce_image_pane_g5

0x0004,

0xf33f,	// (0x0004eccb) mce_image_pane_g

0xe4ed,	// (0x0004de79) control_top_pane_stacon_cp01_ParamLimits

0xe4ed,	// (0x0004de79) control_top_pane_stacon_cp01

0xe4fd,	// (0x0004de89) uni_indicator_pane_stacon_cp01_ParamLimits

0xe4fd,	// (0x0004de89) uni_indicator_pane_stacon_cp01

0xe50e,	// (0x0004de9a) bg_popup_sub_pane_cp03

0x3ae5,	// (0x00043471) chi_dic_find_pane

0x3aed,	// (0x00043479) listscroll_chi_dic_pane

0x3af6,	// (0x00043482) main_pane_chidic_g1

0x3b09,	// (0x00043495) chi_dic_find_pane_t1

0xe518,	// (0x0004dea4) find_chidic_pane

0xe521,	// (0x0004dead) chi_dic_list_pane_ParamLimits

0xe521,	// (0x0004dead) chi_dic_list_pane

0xe532,	// (0x0004debe) scroll_pane_cp020

0x3b17,	// (0x000434a3) find_chidic_pane_t1

0xd849,	// (0x0004d1d5) input_focus_pane_cp06

0x3b26,	// (0x000434b2) list_chi_dic_pane_ParamLimits

0x3b26,	// (0x000434b2) list_chi_dic_pane

0x3b37,	// (0x000434c3) list_chi_dic_pane_t1_ParamLimits

0x3b37,	// (0x000434c3) list_chi_dic_pane_t1

0xd849,	// (0x0004d1d5) list_highlight_pane_cp020

0xe53a,	// (0x0004dec6) bg_cale_heading_pane_g1

0x3b4a,	// (0x000434d6) bg_cale_heading_pane_g2

0x3b52,	// (0x000434de) bg_cale_heading_pane_g3

0x3b5a,	// (0x000434e6) bg_cale_heading_pane_g4

0x3b62,	// (0x000434ee) bg_cale_heading_pane_g5

0x3b6a,	// (0x000434f6) bg_cale_heading_pane_g6

0x3b72,	// (0x000434fe) bg_cale_heading_pane_g7

0x3b7a,	// (0x00043506) bg_cale_heading_pane_g8

0x3b82,	// (0x0004350e) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x0004ecd6) bg_cale_heading_pane_g

0xe53a,	// (0x0004dec6) bg_cale_side_pane_g1

0x3b8a,	// (0x00043516) bg_cale_side_pane_g2

0x3b92,	// (0x0004351e) bg_cale_side_pane_g3

0x3b9a,	// (0x00043526) bg_cale_side_pane_g4

0x3ba2,	// (0x0004352e) bg_cale_side_pane_g5

0x3baa,	// (0x00043536) bg_cale_side_pane_g6

0x3bb2,	// (0x0004353e) bg_cale_side_pane_g7

0x3bba,	// (0x00043546) bg_cale_side_pane_g8

0x3bc2,	// (0x0004354e) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x0004ece9) bg_cale_side_pane_g

0x3bca,	// (0x00043556) popup_call_status_window_ParamLimits

0x3bca,	// (0x00043556) popup_call_status_window

0xe542,	// (0x0004dece) stacon_top_pane

0xe54a,	// (0x0004ded6) status_pane_ParamLimits

0xe54a,	// (0x0004ded6) status_pane

0xe55f,	// (0x0004deeb) status_small_pane

0xe567,	// (0x0004def3) control_pane

0xd849,	// (0x0004d1d5) stacon_bottom_pane

0xe56f,	// (0x0004defb) list_single_mce_smart_pane_t1_ParamLimits

0xe56f,	// (0x0004defb) list_single_mce_smart_pane_t1

0xe582,	// (0x0004df0e) list_single_mce_smart_pane_t2_ParamLimits

0xe582,	// (0x0004df0e) list_single_mce_smart_pane_t2

0x0001,

0x01a4,	// (0x0003fb30) list_single_mce_smart_pane_t_ParamLimits

0x01a4,	// (0x0003fb30) list_single_mce_smart_pane_t

0x3c11,	// (0x0004359d) compass_pane

0x3c1a,	// (0x000435a6) main_location2_pane_t1

0x3c2c,	// (0x000435b8) main_location2_pane_t2

0x3c3e,	// (0x000435ca) main_location2_pane_t3

0x0003,

0xf370,	// (0x0004ecfc) main_location2_pane_t

0xe5a1,	// (0x0004df2d) compass_pane_g1_ParamLimits

0xe5a1,	// (0x0004df2d) compass_pane_g1

0x3c82,	// (0x0004360e) compass_pane_t1

0x3c91,	// (0x0004361d) compass_pane_t2

0x0005,

0xf379,	// (0x0004ed05) compass_pane_t

0x3cd8,	// (0x00043664) text_secondary_cp61

0xe61d,	// (0x0004dfa9) navi_pane_cams_g5

0xe697,	// (0x0004e023) navi_pane_im_t1

0xe6a5,	// (0x0004e031) navi_pane_mp_g1_ParamLimits

0xe6a5,	// (0x0004e031) navi_pane_mp_g1

0xe6b9,	// (0x0004e045) navi_pane_mp_g2_ParamLimits

0xe6b9,	// (0x0004e045) navi_pane_mp_g2

0xe6c5,	// (0x0004e051) navi_pane_mp_g3_ParamLimits

0xe6c5,	// (0x0004e051) navi_pane_mp_g3

0x0002,

0x01c6,	// (0x0003fb52) navi_pane_mp_g_ParamLimits

0x01c6,	// (0x0003fb52) navi_pane_mp_g

0xe6d1,	// (0x0004e05d) navi_pane_mp_t1

0xe6df,	// (0x0004e06b) navi_pane_mp_t2

0x0002,

0x01cd,	// (0x0003fb59) navi_pane_mp_t

0xe74a,	// (0x0004e0d6) navi_pane_vt_g1

0xe6d1,	// (0x0004e05d) navi_pane_vt_t1

0xe752,	// (0x0004e0de) navi_slider_pane

0xdd26,	// (0x0004d6b2) zooming_pane

0xe762,	// (0x0004e0ee) navi_slider_pane_g1

0xae37,	// (0x0004a7c3) navi_slider_pane_g2

0x0006,

0xf386,	// (0x0004ed12) navi_slider_pane_g

0xe786,	// (0x0004e112) aid_levels_zoom

0xe78e,	// (0x0004e11a) zooming_pane_g1

0xe796,	// (0x0004e122) zooming_pane_g2

0xe796,	// (0x0004e122) zooming_pane_g3

0x0002,

0x01e3,	// (0x0003fb6f) zooming_pane_g

0xe79e,	// (0x0004e12a) level_10_zoom

0xe7a7,	// (0x0004e133) level_11_zoom

0xe7b0,	// (0x0004e13c) level_1_zoom

0xe7b9,	// (0x0004e145) level_2_zoom

0xe7c2,	// (0x0004e14e) level_3_zoom

0xe7cb,	// (0x0004e157) level_4_zoom

0xe7d4,	// (0x0004e160) level_5_zoom

0xe7dd,	// (0x0004e169) level_6_zoom

0xe7e6,	// (0x0004e172) level_7_zoom

0xe7ef,	// (0x0004e17b) level_8_zoom

0xe7f8,	// (0x0004e184) level_9_zoom

0xe809,	// (0x0004e195) popup_phob_thumbnail_window_g1

0xe811,	// (0x0004e19d) popup_phob_thumbnail_window_g2

0x0001,

0x01ea,	// (0x0003fb76) popup_phob_thumbnail_window_g

0x5221,	// (0x00044bad) level_1_location

0x5229,	// (0x00044bb5) level_2_location

0x5231,	// (0x00044bbd) level_3_location

0x5239,	// (0x00044bc5) level_4_location

0xdd26,	// (0x0004d6b2) level_5_location

0x3d29,	// (0x000436b5) mce_icon_pane_g1

0x3d31,	// (0x000436bd) mce_icon_pane_g2

0x0001,

0xf395,	// (0x0004ed21) mce_icon_pane_g

0x3d39,	// (0x000436c5) main_mup_pane_g1_ParamLimits

0x3d39,	// (0x000436c5) main_mup_pane_g1

0x3d4f,	// (0x000436db) main_mup_pane_g2_ParamLimits

0x3d4f,	// (0x000436db) main_mup_pane_g2

0x3d67,	// (0x000436f3) main_mup_pane_g3_ParamLimits

0x3d67,	// (0x000436f3) main_mup_pane_g3

0x3d7f,	// (0x0004370b) main_mup_pane_g4_ParamLimits

0x3d7f,	// (0x0004370b) main_mup_pane_g4

0x3d97,	// (0x00043723) main_mup_pane_g5_ParamLimits

0x3d97,	// (0x00043723) main_mup_pane_g5

0x3db1,	// (0x0004373d) main_mup_pane_g6_ParamLimits

0x3db1,	// (0x0004373d) main_mup_pane_g6

0x3dc9,	// (0x00043755) main_mup_pane_g7_ParamLimits

0x3dc9,	// (0x00043755) main_mup_pane_g7

0x3de1,	// (0x0004376d) main_mup_pane_g8_ParamLimits

0x3de1,	// (0x0004376d) main_mup_pane_g8

0x3df9,	// (0x00043785) main_mup_pane_g9_ParamLimits

0x3df9,	// (0x00043785) main_mup_pane_g9

0x3e0d,	// (0x00043799) main_mup_pane_g10_ParamLimits

0x3e0d,	// (0x00043799) main_mup_pane_g10

0x3e21,	// (0x000437ad) main_mup_pane_g11_ParamLimits

0x3e21,	// (0x000437ad) main_mup_pane_g11

0x3e33,	// (0x000437bf) main_mup_pane_g12_ParamLimits

0x3e33,	// (0x000437bf) main_mup_pane_g12

0x3e47,	// (0x000437d3) main_mup_pane_g13_ParamLimits

0x3e47,	// (0x000437d3) main_mup_pane_g13

0x000c,

0xf39a,	// (0x0004ed26) main_mup_pane_g_ParamLimits

0xf39a,	// (0x0004ed26) main_mup_pane_g

0x3e59,	// (0x000437e5) main_mup_pane_t1_ParamLimits

0x3e59,	// (0x000437e5) main_mup_pane_t1

0x3e73,	// (0x000437ff) main_mup_pane_t2_ParamLimits

0x3e73,	// (0x000437ff) main_mup_pane_t2

0x3e8b,	// (0x00043817) main_mup_pane_t3_ParamLimits

0x3e8b,	// (0x00043817) main_mup_pane_t3

0x3ea3,	// (0x0004382f) main_mup_pane_t4_ParamLimits

0x3ea3,	// (0x0004382f) main_mup_pane_t4

0x3ec1,	// (0x0004384d) main_mup_pane_t5_ParamLimits

0x3ec1,	// (0x0004384d) main_mup_pane_t5

0x3ed6,	// (0x00043862) main_mup_pane_t6_ParamLimits

0x3ed6,	// (0x00043862) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x0004ed41) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x0004ed41) main_mup_pane_t

0x3ee8,	// (0x00043874) mup_progress_pane_ParamLimits

0x3ee8,	// (0x00043874) mup_progress_pane

0x3ef4,	// (0x00043880) mup_visualizer_pane_ParamLimits

0x3ef4,	// (0x00043880) mup_visualizer_pane

0x3f1c,	// (0x000438a8) mup_volume_pane_ParamLimits

0x3f1c,	// (0x000438a8) mup_volume_pane

0xe43d,	// (0x0004ddc9) mup_visualizer_pane_g1_ParamLimits

0xe43d,	// (0x0004ddc9) mup_visualizer_pane_g1

0xe43d,	// (0x0004ddc9) mup_visualizer_pane_g2_ParamLimits

0xe43d,	// (0x0004ddc9) mup_visualizer_pane_g2

0xe5a1,	// (0x0004df2d) mup_visualizer_pane_g3_ParamLimits

0xe5a1,	// (0x0004df2d) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x0004ed4e) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x0004ed4e) mup_visualizer_pane_g

0xdbca,	// (0x0004d556) mup_volume_pane_g1

0xe821,	// (0x0004e1ad) mup_volume_pane_g2

0x0001,

0x0223,	// (0x0003fbaf) mup_volume_pane_g

0xdbca,	// (0x0004d556) mup_progress_pane_g1

0xe82a,	// (0x0004e1b6) mup_progress_pane_g2

0xe833,	// (0x0004e1bf) mup_progress_pane_g3

0x0002,

0x0228,	// (0x0003fbb4) mup_progress_pane_g

0xd849,	// (0x0004d1d5) bg_popup_window_pane_cp05

0x3f3a,	// (0x000438c6) heading_pane_cp02_ParamLimits

0x3f3a,	// (0x000438c6) heading_pane_cp02

0xe83c,	// (0x0004e1c8) list_popup_blid_pane

0xe2d6,	// (0x0004dc62) list_blid_sat_info_pane_ParamLimits

0xe2d6,	// (0x0004dc62) list_blid_sat_info_pane

0xe844,	// (0x0004e1d0) list_blid_sat_info_pane_g1

0xe84c,	// (0x0004e1d8) list_blid_sat_info_pane_t1

0x4026,	// (0x000439b2) mup_equalizer_pane_ParamLimits

0x4026,	// (0x000439b2) mup_equalizer_pane

0x403f,	// (0x000439cb) mup_equalizer_pane_cp1_ParamLimits

0x403f,	// (0x000439cb) mup_equalizer_pane_cp1

0x4058,	// (0x000439e4) mup_equalizer_pane_cp2_ParamLimits

0x4058,	// (0x000439e4) mup_equalizer_pane_cp2

0x4071,	// (0x000439fd) mup_equalizer_pane_cp3_ParamLimits

0x4071,	// (0x000439fd) mup_equalizer_pane_cp3

0x408a,	// (0x00043a16) mup_equalizer_pane_cp4_ParamLimits

0x408a,	// (0x00043a16) mup_equalizer_pane_cp4

0x40a3,	// (0x00043a2f) mup_equalizer_pane_cp5

0x40b5,	// (0x00043a41) mup_equalizer_pane_cp6

0x40c7,	// (0x00043a53) mup_equalizer_pane_cp7

0x4fea,	// (0x00044976) bg_popup_call_poc_act_pane_g9

0x4ff2,	// (0x0004497e) bg_popup_call_poc_act_pane_g10

0x4ffa,	// (0x00044986) bg_popup_call_poc_act_pane_g11

0x000a,

0xdaa4,	// (0x0004d430) mup_scale_pane

0xdbca,	// (0x0004d556) mup_scale_pane_g1

0xe85a,	// (0x0004e1e6) mup_scale_pane_g2

0x0006,

0xf3de,	// (0x0004ed6a) mup_scale_pane_g

0xe87e,	// (0x0004e20a) msg_data_pane

0xe886,	// (0x0004e212) scroll_pane_cp017

0x0f64,	// (0x000408f0) bg_list_pane_cp04_ParamLimits

0x0f64,	// (0x000408f0) bg_list_pane_cp04

0xe88e,	// (0x0004e21a) msg_data_pane_g1

0x40ed,	// (0x00043a79) msg_data_pane_g2

0x40f5,	// (0x00043a81) msg_data_pane_g3

0x40fd,	// (0x00043a89) msg_data_pane_g4

0x4105,	// (0x00043a91) msg_data_pane_g5

0x410d,	// (0x00043a99) msg_data_pane_g6

0x4115,	// (0x00043aa1) msg_data_pane_g7

0x0006,

0xf3ed,	// (0x0004ed79) msg_data_pane_g

0x0f84,	// (0x00040910) msg_text_pane_ParamLimits

0x0f84,	// (0x00040910) msg_text_pane

0x411d,	// (0x00043aa9) qrid_highlight_pane_cp011_ParamLimits

0x411d,	// (0x00043aa9) qrid_highlight_pane_cp011

0xd849,	// (0x0004d1d5) msg_body_pane

0xd849,	// (0x0004d1d5) msg_header_pane

0xe89f,	// (0x0004e22b) input_focus_pane_cp07

0xae49,	// (0x0004a7d5) msg_header_pane_t1_ParamLimits

0xae49,	// (0x0004a7d5) msg_header_pane_t1

0x0fb8,	// (0x00040944) msg_header_pane_t2_ParamLimits

0x0fb8,	// (0x00040944) msg_header_pane_t2

0x0001,

0xf401,	// (0x0004ed8d) msg_header_pane_t_ParamLimits

0xf401,	// (0x0004ed8d) msg_header_pane_t

0xe8b4,	// (0x0004e240) msg_body_pane_g1

0x0fca,	// (0x00040956) msg_body_pane_t1_ParamLimits

0x0fca,	// (0x00040956) msg_body_pane_t1

0x0ffb,	// (0x00040987) msg_body_pane_t2_ParamLimits

0x0ffb,	// (0x00040987) msg_body_pane_t2

0x100d,	// (0x00040999) msg_body_pane_t3_ParamLimits

0x100d,	// (0x00040999) msg_body_pane_t3

0x0002,

0xf406,	// (0x0004ed92) msg_body_pane_t_ParamLimits

0xf406,	// (0x0004ed92) msg_body_pane_t

0x4169,	// (0x00043af5) main_viewer_pane_g1_ParamLimits

0x4169,	// (0x00043af5) main_viewer_pane_g1

0x4175,	// (0x00043b01) main_viewer_pane_g2_ParamLimits

0x4175,	// (0x00043b01) main_viewer_pane_g2

0x4181,	// (0x00043b0d) main_viewer_pane_g3_ParamLimits

0x4181,	// (0x00043b0d) main_viewer_pane_g3

0x4190,	// (0x00043b1c) main_viewer_pane_g4_ParamLimits

0x4190,	// (0x00043b1c) main_viewer_pane_g4

0xae73,	// (0x0004a7ff) main_viewer_pane_g5_ParamLimits

0xae73,	// (0x0004a7ff) main_viewer_pane_g5

0xae73,	// (0x0004a7ff) main_viewer_pane_g7_ParamLimits

0xae73,	// (0x0004a7ff) main_viewer_pane_g7

0xae85,	// (0x0004a811) main_viewer_pane_g8_ParamLimits

0xae85,	// (0x0004a811) main_viewer_pane_g8

0x0007,

0xf416,	// (0x0004eda2) main_viewer_pane_g_ParamLimits

0xf416,	// (0x0004eda2) main_viewer_pane_g

0xe8bc,	// (0x0004e248) viewer_content_pane_ParamLimits

0xe8bc,	// (0x0004e248) viewer_content_pane

0x41c4,	// (0x00043b50) main_postcard_pane_g1_ParamLimits

0x41c4,	// (0x00043b50) main_postcard_pane_g1

0x41d8,	// (0x00043b64) main_postcard_pane_g2_ParamLimits

0x41d8,	// (0x00043b64) main_postcard_pane_g2

0x41ec,	// (0x00043b78) main_postcard_pane_g3_ParamLimits

0x41ec,	// (0x00043b78) main_postcard_pane_g3

0x0005,

0xf427,	// (0x0004edb3) main_postcard_pane_g_ParamLimits

0xf427,	// (0x0004edb3) main_postcard_pane_g

0x41ff,	// (0x00043b8b) main_postcard_pane_g4

0x57b6,	// (0x00045142) smil_status_volume_pane_g2

0x423a,	// (0x00043bc6) postcard_pane_ParamLimits

0x423a,	// (0x00043bc6) postcard_pane

0xe8ca,	// (0x0004e256) postcard_pane_g1_ParamLimits

0xe8ca,	// (0x0004e256) postcard_pane_g1

0x4276,	// (0x00043c02) postcard_pane_g2_ParamLimits

0x4276,	// (0x00043c02) postcard_pane_g2

0x4282,	// (0x00043c0e) postcard_pane_g3_ParamLimits

0x4282,	// (0x00043c0e) postcard_pane_g3

0xe8d8,	// (0x0004e264) postcard_pane_g4_ParamLimits

0xe8d8,	// (0x0004e264) postcard_pane_g4

0x428e,	// (0x00043c1a) postcard_pane_g5_ParamLimits

0x428e,	// (0x00043c1a) postcard_pane_g5

0x42a2,	// (0x00043c2e) postcard_pane_g6_ParamLimits

0x42a2,	// (0x00043c2e) postcard_pane_g6

0xe8ca,	// (0x0004e256) postcard_pane_g7_ParamLimits

0xe8ca,	// (0x0004e256) postcard_pane_g7

0x0006,

0xf434,	// (0x0004edc0) postcard_pane_g_ParamLimits

0xf434,	// (0x0004edc0) postcard_pane_g

0x42b4,	// (0x00043c40) main_mp2_pane_g1_ParamLimits

0x42b4,	// (0x00043c40) main_mp2_pane_g1

0x42c0,	// (0x00043c4c) main_mp2_pane_g2_ParamLimits

0x42c0,	// (0x00043c4c) main_mp2_pane_g2

0x42cc,	// (0x00043c58) main_mp2_pane_g3_ParamLimits

0x42cc,	// (0x00043c58) main_mp2_pane_g3

0x0002,

0xf443,	// (0x0004edcf) main_mp2_pane_g_ParamLimits

0xf443,	// (0x0004edcf) main_mp2_pane_g

0x42d8,	// (0x00043c64) main_mp2_pane_t1_ParamLimits

0x42d8,	// (0x00043c64) main_mp2_pane_t1

0x42ed,	// (0x00043c79) main_mp2_pane_t2_ParamLimits

0x42ed,	// (0x00043c79) main_mp2_pane_t2

0x42ff,	// (0x00043c8b) main_mp2_pane_t3_ParamLimits

0x42ff,	// (0x00043c8b) main_mp2_pane_t3

0x0002,

0xf44a,	// (0x0004edd6) main_mp2_pane_t_ParamLimits

0xf44a,	// (0x0004edd6) main_mp2_pane_t

0xe8e6,	// (0x0004e272) pec_content_pane_ParamLimits

0xe8e6,	// (0x0004e272) pec_content_pane

0xdedc,	// (0x0004d868) scroll_pane_cp015

0xe8f8,	// (0x0004e284) pec_attribute_pane_ParamLimits

0xe8f8,	// (0x0004e284) pec_attribute_pane

0x4311,	// (0x00043c9d) pec_content_pane_g1_ParamLimits

0x4311,	// (0x00043c9d) pec_content_pane_g1

0xe908,	// (0x0004e294) pec_content_pane_t1_ParamLimits

0xe908,	// (0x0004e294) pec_content_pane_t1

0xe91a,	// (0x0004e2a6) pec_content_pane_t2_ParamLimits

0xe91a,	// (0x0004e2a6) pec_content_pane_t2

0x0001,

0x02b7,	// (0x0003fc43) pec_content_pane_t_ParamLimits

0x02b7,	// (0x0003fc43) pec_content_pane_t

0x431d,	// (0x00043ca9) list_single_graphic_pane_cp01_ParamLimits

0x431d,	// (0x00043ca9) list_single_graphic_pane_cp01

0xdaa4,	// (0x0004d430) bg_popup_sub_pane_cp04

0xe92c,	// (0x0004e2b8) popup_mup_playback_window_g1

0xe938,	// (0x0004e2c4) popup_mup_playback_window_t1

0xe94d,	// (0x0004e2d9) popup_mup_playback_window_t2

0x0001,

0x02bc,	// (0x0003fc48) popup_mup_playback_window_t

0xe984,	// (0x0004e310) main_image_pane_g1_ParamLimits

0xe984,	// (0x0004e310) main_image_pane_g1

0xe9c7,	// (0x0004e353) scroll_pane_cp018_ParamLimits

0xe9c7,	// (0x0004e353) scroll_pane_cp018

0xe9df,	// (0x0004e36b) scroll_pane_cp016_ParamLimits

0xe9df,	// (0x0004e36b) scroll_pane_cp016

0x43e7,	// (0x00043d73) smil2_image_pane_ParamLimits

0x43e7,	// (0x00043d73) smil2_image_pane

0x440f,	// (0x00043d9b) smil2_root_pane_ParamLimits

0x440f,	// (0x00043d9b) smil2_root_pane

0x4447,	// (0x00043dd3) smil2_text_pane_ParamLimits

0x4447,	// (0x00043dd3) smil2_text_pane

0xd849,	// (0x0004d1d5) bg_list_pane_cp06

0x44b5,	// (0x00043e41) grid_radio_pane

0xd849,	// (0x0004d1d5) bg_popup_window_pane_cp06

0xea13,	// (0x0004e39f) main_fmradio_pane_t1

0xe41b,	// (0x0004dda7) heading_pane_cp04

0xea21,	// (0x0004e3ad) main_fmradio_pane_t2

0x50c2,	// (0x00044a4e) popup_cale_lunar_info_window_g1

0xea2f,	// (0x0004e3bb) main_fmradio_pane_t3

0x50ca,	// (0x00044a56) popup_cale_lunar_info_window_g2

0xea3d,	// (0x0004e3c9) main_fmradio_pane_t4

0x0001,

0xea4b,	// (0x0004e3d7) main_fmradio_pane_t5

0x0004,

0xf503,	// (0x0004ee8f) popup_cale_lunar_info_window_g

0x02d1,	// (0x0003fc5d) main_fmradio_pane_t

0xea59,	// (0x0004e3e5) wait_bar_pane_cp03

0x44bd,	// (0x00043e49) cell_fmradio_pane_ParamLimits

0x44bd,	// (0x00043e49) cell_fmradio_pane

0xe8ca,	// (0x0004e256) cell_fmradio_pane_g1_ParamLimits

0xe8ca,	// (0x0004e256) cell_fmradio_pane_g1

0xd849,	// (0x0004d1d5) grid_highlight_pane_cp011

0xea61,	// (0x0004e3ed) poc_content_pane_ParamLimits

0xea61,	// (0x0004e3ed) poc_content_pane

0xea73,	// (0x0004e3ff) scroll_pane_cp019

0x44d0,	// (0x00043e5c) popup_call_poc_act_window_ParamLimits

0x44d0,	// (0x00043e5c) popup_call_poc_act_window

0x44f0,	// (0x00043e7c) popup_call_poc_inact_window_ParamLimits

0x44f0,	// (0x00043e7c) popup_call_poc_inact_window

0xf4c7,	// (0x0004ee53) bg_popup_call_poc_act_pane_g

0x5002,	// (0x0004498e) bg_popup_call_poc_inact_pane_g1

0x500a,	// (0x00044996) bg_popup_call_poc_inact_pane_g2

0xea7b,	// (0x0004e407) popup_call_poc_act_window_g2

0x5012,	// (0x0004499e) bg_popup_call_poc_inact_pane_g3

0x4f8a,	// (0x00044916) bg_popup_call_poc_inact_pane_g4

0x501a,	// (0x000449a6) bg_popup_call_poc_inact_pane_g5

0xea83,	// (0x0004e40f) popup_call_poc_act_window_t1_ParamLimits

0xea83,	// (0x0004e40f) popup_call_poc_act_window_t1

0xeaab,	// (0x0004e437) popup_call_poc_act_window_t2_ParamLimits

0xeaab,	// (0x0004e437) popup_call_poc_act_window_t2

0xead3,	// (0x0004e45f) popup_call_poc_act_window_t3_ParamLimits

0xead3,	// (0x0004e45f) popup_call_poc_act_window_t3

0xeafb,	// (0x0004e487) popup_call_poc_act_window_t4_ParamLimits

0xeafb,	// (0x0004e487) popup_call_poc_act_window_t4

0x0003,

0x02dc,	// (0x0003fc68) popup_call_poc_act_window_t_ParamLimits

0x02dc,	// (0x0003fc68) popup_call_poc_act_window_t

0x5022,	// (0x000449ae) bg_popup_call_poc_inact_pane_g6

0x502a,	// (0x000449b6) bg_popup_call_poc_inact_pane_g7

0x5032,	// (0x000449be) bg_popup_call_poc_inact_pane_g8

0xeb0d,	// (0x0004e499) popup_call_poc_inact_window_g2

0x503a,	// (0x000449c6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4de,	// (0x0004ee6a) bg_popup_call_poc_inact_pane_g

0xeb15,	// (0x0004e4a1) popup_call_poc_inact_window_t1_ParamLimits

0xeb15,	// (0x0004e4a1) popup_call_poc_inact_window_t1

0xeb2a,	// (0x0004e4b6) popup_call_poc_inact_window_t2_ParamLimits

0xeb2a,	// (0x0004e4b6) popup_call_poc_inact_window_t2

0xeb3f,	// (0x0004e4cb) popup_call_poc_inact_window_t3_ParamLimits

0xeb3f,	// (0x0004e4cb) popup_call_poc_inact_window_t3

0x0002,

0x02e5,	// (0x0003fc71) popup_call_poc_inact_window_t_ParamLimits

0x02e5,	// (0x0003fc71) popup_call_poc_inact_window_t

0x566a,	// (0x00044ff6) context_pane_ParamLimits

0x56c4,	// (0x00045050) signal_pane_ParamLimits

0xdd26,	// (0x0004d6b2) main_call2_pane

0xaebe,	// (0x0004a84a) popup_phob_thumbnail2_window_ParamLimits

0xaebe,	// (0x0004a84a) popup_phob_thumbnail2_window

0xae5b,	// (0x0004a7e7) aid_hotspot_pointer_arrow_pane

0xae63,	// (0x0004a7ef) aid_hotspot_pointer_hand_pane

0x51ef,	// (0x00044b7b) phob_pre_status_pane_g5

0x28ff,	// (0x0004228b) cams_zoom_pane_ParamLimits

0x290e,	// (0x0004229a) image_vga_pane_ParamLimits

0x2924,	// (0x000422b0) main_camera_pane_g1_ParamLimits

0x2934,	// (0x000422c0) main_camera_pane_g2_ParamLimits

0x2944,	// (0x000422d0) main_camera_pane_g3_ParamLimits

0x2954,	// (0x000422e0) main_camera_pane_g4_ParamLimits

0x2964,	// (0x000422f0) main_camera_pane_g5_ParamLimits

0x2974,	// (0x00042300) main_camera_pane_g6_ParamLimits

0x2984,	// (0x00042310) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004eb96) main_camera_pane_g_ParamLimits

0x2994,	// (0x00042320) main_camera_pane_t1_ParamLimits

0x29aa,	// (0x00042336) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004eba7) main_camera_pane_t_ParamLimits

0xdaa4,	// (0x0004d430) bg_popup_preview_window_pane_cp01_ParamLimits

0xdaa4,	// (0x0004d430) bg_popup_preview_window_pane_cp01

0xeb54,	// (0x0004e4e0) popup_phob_thumbnail2_window_g1_ParamLimits

0xeb54,	// (0x0004e4e0) popup_phob_thumbnail2_window_g1

0xd849,	// (0x0004d1d5) call2_cli_visual_pane

0x451c,	// (0x00043ea8) popup_call2_audio_conf_window_ParamLimits

0x451c,	// (0x00043ea8) popup_call2_audio_conf_window

0x453a,	// (0x00043ec6) popup_call2_audio_first_window_ParamLimits

0x453a,	// (0x00043ec6) popup_call2_audio_first_window

0x45b0,	// (0x00043f3c) popup_call2_audio_in_window_ParamLimits

0x45b0,	// (0x00043f3c) popup_call2_audio_in_window

0x45e4,	// (0x00043f70) popup_call2_audio_out_window_ParamLimits

0x45e4,	// (0x00043f70) popup_call2_audio_out_window

0x4636,	// (0x00043fc2) popup_call2_audio_second_window_ParamLimits

0x4636,	// (0x00043fc2) popup_call2_audio_second_window

0x4688,	// (0x00044014) popup_call2_audio_wait_window_ParamLimits

0x4688,	// (0x00044014) popup_call2_audio_wait_window

0xd849,	// (0x0004d1d5) bg_popup_call2_act_pane_cp03

0xda86,	// (0x0004d412) list_conf_pane_cp

0xeb60,	// (0x0004e4ec) popup_call2_audio_conf_window_t1

0xe486,	// (0x0004de12) list_single_graphic_popup_conf2_pane_ParamLimits

0xe486,	// (0x0004de12) list_single_graphic_popup_conf2_pane

0xe499,	// (0x0004de25) list_highlight_pane_cp04

0xeb6e,	// (0x0004e4fa) list_single_graphic_popup_conf2_pane_g1

0xe4aa,	// (0x0004de36) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x02ec,	// (0x0003fc78) list_single_graphic_popup_conf2_pane_g

0xeb76,	// (0x0004e502) list_single_graphic_popup_conf2_pane_t1

0xeb84,	// (0x0004e510) bg_popup_call2_act_pane_cp01_ParamLimits

0xeb84,	// (0x0004e510) bg_popup_call2_act_pane_cp01

0xec0e,	// (0x0004e59a) call_type_pane_cp05_ParamLimits

0xec0e,	// (0x0004e59a) call_type_pane_cp05

0xec62,	// (0x0004e5ee) popup_call2_audio_second_window_g1_ParamLimits

0xec62,	// (0x0004e5ee) popup_call2_audio_second_window_g1

0xecb6,	// (0x0004e642) popup_call2_audio_second_window_g2_ParamLimits

0xecb6,	// (0x0004e642) popup_call2_audio_second_window_g2

0x0002,

0x02f1,	// (0x0003fc7d) popup_call2_audio_second_window_g_ParamLimits

0x02f1,	// (0x0003fc7d) popup_call2_audio_second_window_g

0xed1b,	// (0x0004e6a7) popup_call2_audio_second_window_t1_ParamLimits

0xed1b,	// (0x0004e6a7) popup_call2_audio_second_window_t1

0xedd6,	// (0x0004e762) popup_call2_audio_second_window_t2_ParamLimits

0xedd6,	// (0x0004e762) popup_call2_audio_second_window_t2

0xee29,	// (0x0004e7b5) popup_call2_audio_second_window_t3_ParamLimits

0xee29,	// (0x0004e7b5) popup_call2_audio_second_window_t3

0x0003,

0x02f8,	// (0x0003fc84) popup_call2_audio_second_window_t_ParamLimits

0x02f8,	// (0x0003fc84) popup_call2_audio_second_window_t

0xd849,	// (0x0004d1d5) bg_popup_call2_in_pane_cp02

0xd853,	// (0x0004d1df) call_type_pane_cp04

0xd85b,	// (0x0004d1e7) popup_call2_audio_wait_window_g1

0xd863,	// (0x0004d1ef) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004ea85) popup_call2_audio_wait_window_g

0xd86b,	// (0x0004d1f7) popup_call2_audio_wait_window_t3

0xef1c,	// (0x0004e8a8) bg_popup_call2_act_pane_ParamLimits

0xef1c,	// (0x0004e8a8) bg_popup_call2_act_pane

0xeff6,	// (0x0004e982) call_type_pane_cp03_ParamLimits

0xeff6,	// (0x0004e982) call_type_pane_cp03

0xf05a,	// (0x0004e9e6) popup_call2_audio_first_window_g1_ParamLimits

0xf05a,	// (0x0004e9e6) popup_call2_audio_first_window_g1

0x46c0,	// (0x0004404c) popup_call2_audio_first_window_g2_ParamLimits

0x46c0,	// (0x0004404c) popup_call2_audio_first_window_g2

0xe43d,	// (0x0004ddc9) popup_call2_audio_first_window_g3_ParamLimits

0xe43d,	// (0x0004ddc9) popup_call2_audio_first_window_g3

0x0004,

0xf461,	// (0x0004eded) popup_call2_audio_first_window_g_ParamLimits

0xf461,	// (0x0004eded) popup_call2_audio_first_window_g

0x479e,	// (0x0004412a) popup_call2_audio_first_window_t1_ParamLimits

0x479e,	// (0x0004412a) popup_call2_audio_first_window_t1

0x48a1,	// (0x0004422d) popup_call2_audio_first_window_t4_ParamLimits

0x48a1,	// (0x0004422d) popup_call2_audio_first_window_t4

0x4984,	// (0x00044310) popup_call2_audio_first_window_t5_ParamLimits

0x4984,	// (0x00044310) popup_call2_audio_first_window_t5

0x0003,

0xf46c,	// (0x0004edf8) popup_call2_audio_first_window_t_ParamLimits

0xf46c,	// (0x0004edf8) popup_call2_audio_first_window_t

0xda9c,	// (0x0004d428) bg_popup_call2_act_pane_g1

0x50d2,	// (0x00044a5e) popup_cale_lunar_info_window_t1

0x50e0,	// (0x00044a6c) popup_cale_lunar_info_window_t2

0x50ee,	// (0x00044a7a) popup_cale_lunar_info_window_t3

0xd849,	// (0x0004d1d5) bg_popup_call2_bubble_pane

0x4a85,	// (0x00044411) bg_popup_call2_in_pane_cp01_ParamLimits

0x4a85,	// (0x00044411) bg_popup_call2_in_pane_cp01

0xd525,	// (0x0004ceb1) call_type_pane_cp02

0x4acd,	// (0x00044459) popup_call2_audio_out_window_g1_ParamLimits

0x4acd,	// (0x00044459) popup_call2_audio_out_window_g1

0x4af9,	// (0x00044485) popup_call2_audio_out_window_g2_ParamLimits

0x4af9,	// (0x00044485) popup_call2_audio_out_window_g2

0x4b21,	// (0x000444ad) popup_call2_audio_out_window_g3_ParamLimits

0x4b21,	// (0x000444ad) popup_call2_audio_out_window_g3

0x0003,

0xf475,	// (0x0004ee01) popup_call2_audio_out_window_g_ParamLimits

0xf475,	// (0x0004ee01) popup_call2_audio_out_window_g

0x4b5c,	// (0x000444e8) popup_call2_audio_out_window_t1_ParamLimits

0x4b5c,	// (0x000444e8) popup_call2_audio_out_window_t1

0x4bbb,	// (0x00044547) popup_call2_audio_out_window_t2_ParamLimits

0x4bbb,	// (0x00044547) popup_call2_audio_out_window_t2

0x4c0f,	// (0x0004459b) popup_call2_audio_out_window_t3_ParamLimits

0x4c0f,	// (0x0004459b) popup_call2_audio_out_window_t3

0x4c25,	// (0x000445b1) popup_call2_audio_out_window_t4_ParamLimits

0x4c25,	// (0x000445b1) popup_call2_audio_out_window_t4

0x4c3b,	// (0x000445c7) popup_call2_audio_out_window_t5_ParamLimits

0x4c3b,	// (0x000445c7) popup_call2_audio_out_window_t5

0x0005,

0xf47e,	// (0x0004ee0a) popup_call2_audio_out_window_t_ParamLimits

0xf47e,	// (0x0004ee0a) popup_call2_audio_out_window_t

0x4c9f,	// (0x0004462b) bg_popup_call2_in_pane_ParamLimits

0x4c9f,	// (0x0004462b) bg_popup_call2_in_pane

0x4cfb,	// (0x00044687) popup_call2_audio_in_window_g1_ParamLimits

0x4cfb,	// (0x00044687) popup_call2_audio_in_window_g1

0x4d33,	// (0x000446bf) popup_call2_audio_in_window_g2_ParamLimits

0x4d33,	// (0x000446bf) popup_call2_audio_in_window_g2

0x4d6b,	// (0x000446f7) popup_call2_audio_in_window_g3_ParamLimits

0x4d6b,	// (0x000446f7) popup_call2_audio_in_window_g3

0x0003,

0xf48b,	// (0x0004ee17) popup_call2_audio_in_window_g_ParamLimits

0xf48b,	// (0x0004ee17) popup_call2_audio_in_window_g

0x4dc3,	// (0x0004474f) popup_call2_audio_in_window_t1_ParamLimits

0x4dc3,	// (0x0004474f) popup_call2_audio_in_window_t1

0x4e43,	// (0x000447cf) popup_call2_audio_in_window_t2_ParamLimits

0x4e43,	// (0x000447cf) popup_call2_audio_in_window_t2

0x4ec3,	// (0x0004484f) popup_call2_audio_in_window_t3_ParamLimits

0x4ec3,	// (0x0004484f) popup_call2_audio_in_window_t3

0x4edd,	// (0x00044869) popup_call2_audio_in_window_t4_ParamLimits

0x4edd,	// (0x00044869) popup_call2_audio_in_window_t4

0x4eef,	// (0x0004487b) popup_call2_audio_in_window_t5_ParamLimits

0x4eef,	// (0x0004487b) popup_call2_audio_in_window_t5

0x4f04,	// (0x00044890) popup_call2_audio_in_window_t6_ParamLimits

0x4f04,	// (0x00044890) popup_call2_audio_in_window_t6

0x0005,

0xf494,	// (0x0004ee20) popup_call2_audio_in_window_t_ParamLimits

0xf494,	// (0x0004ee20) popup_call2_audio_in_window_t

0xda9c,	// (0x0004d428) bg_popup_call2_in_pane_g1

0x50fc,	// (0x00044a88) popup_cale_lunar_info_window_t4

0x0003,

0xf508,	// (0x0004ee94) popup_cale_lunar_info_window_t

0xdaa4,	// (0x0004d430) bg_popup_call2_rect_pane_ParamLimits

0xdaa4,	// (0x0004d430) bg_popup_call2_rect_pane

0xd849,	// (0x0004d1d5) call2_cli_visual_graphic_pane

0xd849,	// (0x0004d1d5) call2_cli_visual_text_pane

0xaee5,	// (0x0004a871) smil_status_volume_pane_g3

0x0002,

0xdbca,	// (0x0004d556) call2_cli_visual_graphic_pane_g1

0xdbca,	// (0x0004d556) call2_cli_visual_graphic_pane_g2

0xdbca,	// (0x0004d556) call2_cli_visual_graphic_pane_g3

0x0002,

0x0341,	// (0x0003fccd) call2_cli_visual_graphic_pane_g

0x4f32,	// (0x000448be) bg_popup_call2_rect_pane_g1

0xdc68,	// (0x0004d5f4) bg_popup_call2_rect_pane_g2

0x4f3a,	// (0x000448c6) bg_popup_call2_rect_pane_g3

0x4f42,	// (0x000448ce) bg_popup_call2_rect_pane_g4

0x4f4a,	// (0x000448d6) bg_popup_call2_rect_pane_g5

0x4f52,	// (0x000448de) bg_popup_call2_rect_pane_g6

0x4f5a,	// (0x000448e6) bg_popup_call2_rect_pane_g7

0x4f62,	// (0x000448ee) bg_popup_call2_rect_pane_g8

0x4f6a,	// (0x000448f6) bg_popup_call2_rect_pane_g9

0x0008,

0xf4a1,	// (0x0004ee2d) bg_popup_call2_rect_pane_g

0x4f72,	// (0x000448fe) bg_popup_call2_bubble_pane_g1

0x4f7a,	// (0x00044906) bg_popup_call2_bubble_pane_g2

0x4f82,	// (0x0004490e) bg_popup_call2_bubble_pane_g3

0x4f8a,	// (0x00044916) bg_popup_call2_bubble_pane_g4

0x4f92,	// (0x0004491e) bg_popup_call2_bubble_pane_g5

0x4f9a,	// (0x00044926) bg_popup_call2_bubble_pane_g6

0x4fa2,	// (0x0004492e) bg_popup_call2_bubble_pane_g7

0x4faa,	// (0x00044936) bg_popup_call2_bubble_pane_g8

0x4fb2,	// (0x0004493e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4b4,	// (0x0004ee40) bg_popup_call2_bubble_pane_g

0x22b3,	// (0x00041c3f) aid_cale_week_size_cell_pane

0x29c0,	// (0x0004234c) aid_cams_cif_uncrop_pane_ParamLimits

0x29c0,	// (0x0004234c) aid_cams_cif_uncrop_pane

0x2b5f,	// (0x000424eb) aid_cams_size_cell_ParamLimits

0x2b5f,	// (0x000424eb) aid_cams_size_cell

0x2b73,	// (0x000424ff) grid_cams_pane_ParamLimits

0x2b88,	// (0x00042514) linegrid_cams_pane_ParamLimits

0x2c4f,	// (0x000425db) call_video_pane_t1

0x2c69,	// (0x000425f5) call_video_pane_t2

0x0001,

0xf260,	// (0x0004ebec) call_video_pane_t

0x2fd0,	// (0x0004295c) aid_cale_month_size_cell_pane_ParamLimits

0x2fd0,	// (0x0004295c) aid_cale_month_size_cell_pane

0xf551,	// (0x0004eedd) smil_status_volume_pane_g

0xaef2,	// (0x0004a87e) volume_smil_pane_ParamLimits

0xac8a,	// (0x0004a616) aid_popup2_width_pane

0x2221,	// (0x00041bad) cell_qdial_pane_g4_ParamLimits

0x2221,	// (0x00041bad) cell_qdial_pane_g4

0x3c62,	// (0x000435ee) aid_blid_cardinal_pane_ParamLimits

0x3c6e,	// (0x000435fa) aid_blid_destination_pane_ParamLimits

0x3c6e,	// (0x000435fa) aid_blid_destination_pane

0xdaa4,	// (0x0004d430) bg_popup_call_poc_act_pane_ParamLimits

0xdaa4,	// (0x0004d430) bg_popup_call_poc_act_pane

0xdaa4,	// (0x0004d430) bg_popup_call_poc_inact_pane_ParamLimits

0xdaa4,	// (0x0004d430) bg_popup_call_poc_inact_pane

0x4fc2,	// (0x0004494e) bg_popup_call_poc_act_pane_g1

0x4fca,	// (0x00044956) bg_popup_call_poc_act_pane_g2

0x4fd2,	// (0x0004495e) bg_popup_call_poc_act_pane_g3

0x4f8a,	// (0x00044916) bg_popup_call_poc_act_pane_g4

0x4f92,	// (0x0004491e) bg_popup_call_poc_act_pane_g5

0x4fda,	// (0x00044966) bg_popup_call_poc_act_pane_g6

0x4fa2,	// (0x0004492e) bg_popup_call_poc_act_pane_g7

0x4fe2,	// (0x0004496e) bg_popup_call_poc_act_pane_g8

0xd849,	// (0x0004d1d5) main_usb_pane

0x54a8,	// (0x00044e34) popup_cale_lunar_info_window

0x2eae,	// (0x0004283a) im_reading_pane_t1_ParamLimits

0xde25,	// (0x0004d7b1) list_im_pane_ParamLimits

0xde36,	// (0x0004d7c2) scroll_pane_cp07_ParamLimits

0xd849,	// (0x0004d1d5) grid_highlight_pane_cp012

0xdaa4,	// (0x0004d430) mup_scale_pane_ParamLimits

0xe8ca,	// (0x0004e256) main_usb_pane_g1_ParamLimits

0xe8ca,	// (0x0004e256) main_usb_pane_g1

0x5042,	// (0x000449ce) main_usb_pane_g2_ParamLimits

0x5042,	// (0x000449ce) main_usb_pane_g2

0x0001,

0xf4f1,	// (0x0004ee7d) main_usb_pane_g_ParamLimits

0xf4f1,	// (0x0004ee7d) main_usb_pane_g

0x5056,	// (0x000449e2) main_usb_pane_t1_ParamLimits

0x5056,	// (0x000449e2) main_usb_pane_t1

0x5068,	// (0x000449f4) main_usb_pane_t2_ParamLimits

0x5068,	// (0x000449f4) main_usb_pane_t2

0x507a,	// (0x00044a06) main_usb_pane_t3_ParamLimits

0x507a,	// (0x00044a06) main_usb_pane_t3

0x508c,	// (0x00044a18) main_usb_pane_t4_ParamLimits

0x508c,	// (0x00044a18) main_usb_pane_t4

0x509e,	// (0x00044a2a) main_usb_pane_t5_ParamLimits

0x509e,	// (0x00044a2a) main_usb_pane_t5

0x50b0,	// (0x00044a3c) main_usb_pane_t6_ParamLimits

0x50b0,	// (0x00044a3c) main_usb_pane_t6

0x0005,

0xf4f6,	// (0x0004ee82) main_usb_pane_t_ParamLimits

0x3c11,	// (0x0004359d) aid_text_placing

0x3c1a,	// (0x000435a6) main_location2_pane_t1_ParamLimits

0x3c2c,	// (0x000435b8) main_location2_pane_t2_ParamLimits

0x3c3e,	// (0x000435ca) main_location2_pane_t3_ParamLimits

0x3c50,	// (0x000435dc) main_location2_pane_t4_ParamLimits

0x3c50,	// (0x000435dc) main_location2_pane_t4

0xf370,	// (0x0004ecfc) main_location2_pane_t_ParamLimits

0xdae0,	// (0x0004d46c) find_pinb_pane_g2_ParamLimits

0xdae0,	// (0x0004d46c) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0004eaab) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0004eaab) find_pinb_pane_g

0xdaec,	// (0x0004d478) find_pinb_pane_t1_ParamLimits

0xdafe,	// (0x0004d48a) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0004eab0) find_pinb_pane_t_ParamLimits

0xd849,	// (0x0004d1d5) main_call3_pane

0x3413,	// (0x00042d9f) cale_month_day_heading_pane_t1_ParamLimits

0x3499,	// (0x00042e25) cale_month_day_heading_pane_t2_ParamLimits

0x3512,	// (0x00042e9e) cale_month_day_heading_pane_t3_ParamLimits

0x358b,	// (0x00042f17) cale_month_day_heading_pane_t4_ParamLimits

0x3604,	// (0x00042f90) cale_month_day_heading_pane_t5_ParamLimits

0x367d,	// (0x00043009) cale_month_day_heading_pane_t6_ParamLimits

0x36f6,	// (0x00043082) cale_month_day_heading_pane_t7_ParamLimits

0xf285,	// (0x0004ec11) cale_month_day_heading_pane_t_ParamLimits

0xe08f,	// (0x0004da1b) smil_status_volume_pane

0x4256,	// (0x00043be2) postcard_address_pane_ParamLimits

0x4256,	// (0x00043be2) postcard_address_pane

0x4266,	// (0x00043bf2) postcard_message_pane_ParamLimits

0x4266,	// (0x00043bf2) postcard_message_pane

0x4f19,	// (0x000448a5) call2_cli_visual_pane_t1_ParamLimits

0x4f19,	// (0x000448a5) call2_cli_visual_pane_t1

0x5963,	// (0x000452ef) postcard_message_pane_t1_ParamLimits

0x5963,	// (0x000452ef) postcard_message_pane_t1

0x594c,	// (0x000452d8) postcard_address_pane_t1_ParamLimits

0x594c,	// (0x000452d8) postcard_address_pane_t1

0x593a,	// (0x000452c6) popup_call3_audio_in_window_ParamLimits

0x593a,	// (0x000452c6) popup_call3_audio_in_window

0x57c9,	// (0x00045155) bg_popup_call3_in_pane_ParamLimits

0x57c9,	// (0x00045155) bg_popup_call3_in_pane

0x583b,	// (0x000451c7) popup_call3_audio_in_window_g1_ParamLimits

0x583b,	// (0x000451c7) popup_call3_audio_in_window_g1

0x585b,	// (0x000451e7) popup_call3_audio_in_window_g2_ParamLimits

0x585b,	// (0x000451e7) popup_call3_audio_in_window_g2

0x587b,	// (0x00045207) popup_call3_audio_in_window_g3_ParamLimits

0x587b,	// (0x00045207) popup_call3_audio_in_window_g3

0x0003,

0xf558,	// (0x0004eee4) popup_call3_audio_in_window_g_ParamLimits

0xf558,	// (0x0004eee4) popup_call3_audio_in_window_g

0x58ac,	// (0x00045238) popup_call3_audio_in_window_t1_ParamLimits

0x58ac,	// (0x00045238) popup_call3_audio_in_window_t1

0x58ea,	// (0x00045276) popup_call3_audio_in_window_t2_ParamLimits

0x58ea,	// (0x00045276) popup_call3_audio_in_window_t2

0x5928,	// (0x000452b4) popup_call3_audio_in_window_t3_ParamLimits

0x5928,	// (0x000452b4) popup_call3_audio_in_window_t3

0x0002,

0xf561,	// (0x0004eeed) popup_call3_audio_in_window_t_ParamLimits

0xf561,	// (0x0004eeed) popup_call3_audio_in_window_t

0xdd26,	// (0x0004d6b2) bg_popup_call3_rect_pane

0x4f32,	// (0x000448be) bg_popup_call3_rect_pane_g1

0xdc68,	// (0x0004d5f4) bg_popup_call3_rect_pane_g2

0x4f3a,	// (0x000448c6) bg_popup_call3_rect_pane_g3

0x4f42,	// (0x000448ce) bg_popup_call3_rect_pane_g4

0x4f4a,	// (0x000448d6) bg_popup_call3_rect_pane_g5

0x4f52,	// (0x000448de) bg_popup_call3_rect_pane_g6

0x4f5a,	// (0x000448e6) bg_popup_call3_rect_pane_g7

0x3f32,	// (0x000438be) mup_visualizer_osc_pane

0xe819,	// (0x0004e1a5) mup_visualizer_spec_pane

0x57f9,	// (0x00045185) call3_video_qcif_pane_ParamLimits

0x57f9,	// (0x00045185) call3_video_qcif_pane

0x580a,	// (0x00045196) call3_video_qcif_uncrop_pane_ParamLimits

0x580a,	// (0x00045196) call3_video_qcif_uncrop_pane

0x5816,	// (0x000451a2) call3_video_subqcif_pane_ParamLimits

0x5816,	// (0x000451a2) call3_video_subqcif_pane

0x582a,	// (0x000451b6) call3_video_subqcif_uncrop_pane_ParamLimits

0x582a,	// (0x000451b6) call3_video_subqcif_uncrop_pane

0x589b,	// (0x00045227) popup_call3_audio_in_window_g4_ParamLimits

0x589b,	// (0x00045227) popup_call3_audio_in_window_g4

0x578a,	// (0x00045116) mup_spec_half_pane

0x5793,	// (0x0004511f) mup_spec_half_pane_cp

0x5778,	// (0x00045104) mup_osc_middle_pane

0x5781,	// (0x0004510d) mup_visualizer_osc_pane_g1

0x5759,	// (0x000450e5) mup_spec_bar_pane_ParamLimits

0x5759,	// (0x000450e5) mup_spec_bar_pane

0x5746,	// (0x000450d2) mup_spec_bar_pane_g1

0x5750,	// (0x000450dc) mup_spec_bar_pane_g2

0x0001,

0xf54c,	// (0x0004eed8) mup_spec_bar_pane_g

0x22b3,	// (0x00041c3f) aid_cale_week_size_cell_pane_ParamLimits

0x22cd,	// (0x00041c59) bg_cale_heading_pane_ParamLimits

0x22e5,	// (0x00041c71) bg_cale_pane_cp01_ParamLimits

0x2302,	// (0x00041c8e) cale_week_corner_pane_ParamLimits

0x2321,	// (0x00041cad) cale_week_day_heading_pane_ParamLimits

0x233e,	// (0x00041cca) cale_week_scroll_pane_g1_ParamLimits

0x2351,	// (0x00041cdd) cale_week_scroll_pane_g2_ParamLimits

0x2369,	// (0x00041cf5) cale_week_scroll_pane_g3_ParamLimits

0x2381,	// (0x00041d0d) cale_week_scroll_pane_g4_ParamLimits

0x2399,	// (0x00041d25) cale_week_scroll_pane_g5_ParamLimits

0x23b1,	// (0x00041d3d) cale_week_scroll_pane_g6_ParamLimits

0x23c9,	// (0x00041d55) cale_week_scroll_pane_g7_ParamLimits

0x23e1,	// (0x00041d6d) cale_week_scroll_pane_g8_ParamLimits

0x23fd,	// (0x00041d89) cale_week_scroll_pane_g9_ParamLimits

0x2415,	// (0x00041da1) cale_week_scroll_pane_g10_ParamLimits

0x242d,	// (0x00041db9) cale_week_scroll_pane_g11_ParamLimits

0x2445,	// (0x00041dd1) cale_week_scroll_pane_g12_ParamLimits

0x245d,	// (0x00041de9) cale_week_scroll_pane_g13_ParamLimits

0x245d,	// (0x00041de9) cale_week_scroll_pane_g14_ParamLimits

0x245d,	// (0x00041de9) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0004eb3c) cale_week_scroll_pane_g_ParamLimits

0x2491,	// (0x00041e1d) cale_week_time_pane_ParamLimits

0x24ad,	// (0x00041e39) grid_cale_week_pane_ParamLimits

0xdca5,	// (0x0004d631) listscroll_cale_week_pane_t1

0xdcb7,	// (0x0004d643) scroll_pane_cp08_ParamLimits

0x3030,	// (0x000429bc) cale_month_corner_pane_ParamLimits

0xe065,	// (0x0004d9f1) cale_month_pane_t1

0x33ba,	// (0x00042d46) cale_month_week_pane_ParamLimits

0x3a3f,	// (0x000433cb) popup_call_status_window_g1_ParamLimits

0x3a53,	// (0x000433df) popup_call_status_window_g2_ParamLimits

0x3a67,	// (0x000433f3) popup_call_status_window_g3_ParamLimits

0xf306,	// (0x0004ec92) popup_call_status_window_g_ParamLimits

0xe40b,	// (0x0004dd97) aid_call2_pane

0x0fac,	// (0x00040938) msg_header_pane_g1

0x4256,	// (0x00043be2) postcard_address2_pane_ParamLimits

0x4256,	// (0x00043be2) postcard_address2_pane

0x4266,	// (0x00043bf2) postcard_message2_pane_ParamLimits

0x4266,	// (0x00043bf2) postcard_message2_pane

0x56d2,	// (0x0004505e) message2_row_pane_ParamLimits

0x56d2,	// (0x0004505e) message2_row_pane

0x56ea,	// (0x00045076) address2_row_pane_ParamLimits

0x56ea,	// (0x00045076) address2_row_pane

0x56fd,	// (0x00045089) postcard_message2_row_pane_g1

0x5705,	// (0x00045091) postcard_message2_row_pane_t1

0x56fd,	// (0x00045089) address2_row_pane_g1

0x5705,	// (0x00045091) address2_row_pane_t1

0x2884,	// (0x00042210) aid_size_cell_vorec

0xd849,	// (0x0004d1d5) main_rss_pane

0x5713,	// (0x0004509f) rss_list_single_pane_ParamLimits

0x5713,	// (0x0004509f) rss_list_single_pane

0x572a,	// (0x000450b6) rss_list_single_pane_t1

0x5738,	// (0x000450c4) rss_list_single_pane_t2

0x0001,

0xf547,	// (0x0004eed3) rss_list_single_pane_t

0xd849,	// (0x0004d1d5) main_camera2_pane

0xd849,	// (0x0004d1d5) main_video2_pane

0x59bc,	// (0x00045348) cams_zoom_pane_cp2_ParamLimits

0x59bc,	// (0x00045348) cams_zoom_pane_cp2

0x59d3,	// (0x0004535f) image2_vga_pane_ParamLimits

0x59d3,	// (0x0004535f) image2_vga_pane

0x5a09,	// (0x00045395) main_camera2_pane_g1_ParamLimits

0x5a09,	// (0x00045395) main_camera2_pane_g1

0x5a29,	// (0x000453b5) main_camera2_pane_g2_ParamLimits

0x5a29,	// (0x000453b5) main_camera2_pane_g2

0x5a40,	// (0x000453cc) main_camera2_pane_g3_ParamLimits

0x5a40,	// (0x000453cc) main_camera2_pane_g3

0x5a57,	// (0x000453e3) main_camera2_pane_g4_ParamLimits

0x5a57,	// (0x000453e3) main_camera2_pane_g4

0x5a6e,	// (0x000453fa) main_camera2_pane_g5_ParamLimits

0x5a6e,	// (0x000453fa) main_camera2_pane_g5

0x5a85,	// (0x00045411) main_camera2_pane_g6_ParamLimits

0x5a85,	// (0x00045411) main_camera2_pane_g6

0x5a9c,	// (0x00045428) main_camera2_pane_g7_ParamLimits

0x5a9c,	// (0x00045428) main_camera2_pane_g7

0x5ab3,	// (0x0004543f) main_camera2_pane_g8_ParamLimits

0x5ab3,	// (0x0004543f) main_camera2_pane_g8

0x0008,

0xf568,	// (0x0004eef4) main_camera2_pane_g_ParamLimits

0xf568,	// (0x0004eef4) main_camera2_pane_g

0x5ae1,	// (0x0004546d) main_camera2_pane_t1_ParamLimits

0x5ae1,	// (0x0004546d) main_camera2_pane_t1

0x5b10,	// (0x0004549c) main_camera2_pane_t2_ParamLimits

0x5b10,	// (0x0004549c) main_camera2_pane_t2

0x5b2d,	// (0x000454b9) main_camera2_pane_t3_ParamLimits

0x5b2d,	// (0x000454b9) main_camera2_pane_t3

0x5b79,	// (0x00045505) main_camera2_pane_t4_ParamLimits

0x5b79,	// (0x00045505) main_camera2_pane_t4

0x0006,

0xf57b,	// (0x0004ef07) main_camera2_pane_t_ParamLimits

0xf57b,	// (0x0004ef07) main_camera2_pane_t

0x5bee,	// (0x0004557a) cams_zoom_pane_cp4_ParamLimits

0x5bee,	// (0x0004557a) cams_zoom_pane_cp4

0x5c04,	// (0x00045590) image2_cif_pane_ParamLimits

0x5c04,	// (0x00045590) image2_cif_pane

0x5c27,	// (0x000455b3) image2_subqcif_pane_ParamLimits

0x5c27,	// (0x000455b3) image2_subqcif_pane

0x5c3d,	// (0x000455c9) main_video2_pane_g1_ParamLimits

0x5c3d,	// (0x000455c9) main_video2_pane_g1

0x5c57,	// (0x000455e3) main_video2_pane_g2_ParamLimits

0x5c57,	// (0x000455e3) main_video2_pane_g2

0x5c6d,	// (0x000455f9) main_video2_pane_g3_ParamLimits

0x5c6d,	// (0x000455f9) main_video2_pane_g3

0x5c83,	// (0x0004560f) main_video2_pane_g4_ParamLimits

0x5c83,	// (0x0004560f) main_video2_pane_g4

0x5c99,	// (0x00045625) main_video2_pane_g5_ParamLimits

0x5c99,	// (0x00045625) main_video2_pane_g5

0x5caf,	// (0x0004563b) main_video2_pane_g6_ParamLimits

0x5caf,	// (0x0004563b) main_video2_pane_g6

0x0005,

0xf58a,	// (0x0004ef16) main_video2_pane_g_ParamLimits

0xf58a,	// (0x0004ef16) main_video2_pane_g

0x5cc9,	// (0x00045655) main_video2_pane_t1_ParamLimits

0x5cc9,	// (0x00045655) main_video2_pane_t1

0x5ced,	// (0x00045679) main_video2_pane_t2_ParamLimits

0x5ced,	// (0x00045679) main_video2_pane_t2

0x5d37,	// (0x000456c3) main_video2_pane_t3_ParamLimits

0x5d37,	// (0x000456c3) main_video2_pane_t3

0x0002,

0xf597,	// (0x0004ef23) main_video2_pane_t_ParamLimits

0xf597,	// (0x0004ef23) main_video2_pane_t

0x5249,	// (0x00044bd5) call_muted_g2

0x0001,

0xf539,	// (0x0004eec5) call_muted_g

0xd849,	// (0x0004d1d5) main_mup2_pane

0x5d79,	// (0x00045705) main_mup2_pane_g1_ParamLimits

0x5d79,	// (0x00045705) main_mup2_pane_g1

0x5d85,	// (0x00045711) main_mup2_pane_g2_ParamLimits

0x5d85,	// (0x00045711) main_mup2_pane_g2

0xaf5b,	// (0x0004a8e7) main_mup_pane_g13_cp1

0xaf63,	// (0x0004a8ef) mup_volume_pane_cp1

0x5da1,	// (0x0004572d) main_mup2_pane_g4_ParamLimits

0x5da1,	// (0x0004572d) main_mup2_pane_g4

0x5db1,	// (0x0004573d) main_mup2_pane_g5_ParamLimits

0x5db1,	// (0x0004573d) main_mup2_pane_g5

0x5dc1,	// (0x0004574d) main_mup2_pane_g6_ParamLimits

0x5dc1,	// (0x0004574d) main_mup2_pane_g6

0x5dd1,	// (0x0004575d) main_mup2_pane_g7_ParamLimits

0x5dd1,	// (0x0004575d) main_mup2_pane_g7

0x0006,

0xf59e,	// (0x0004ef2a) main_mup2_pane_g_ParamLimits

0xf59e,	// (0x0004ef2a) main_mup2_pane_g

0x5de9,	// (0x00045775) main_mup2_pane_t1_ParamLimits

0x5de9,	// (0x00045775) main_mup2_pane_t1

0x5dff,	// (0x0004578b) main_mup2_pane_t2_ParamLimits

0x5dff,	// (0x0004578b) main_mup2_pane_t2

0x5e15,	// (0x000457a1) main_mup2_pane_t3_ParamLimits

0x5e15,	// (0x000457a1) main_mup2_pane_t3

0x5e2b,	// (0x000457b7) main_mup2_pane_t4_ParamLimits

0x5e2b,	// (0x000457b7) main_mup2_pane_t4

0x5e43,	// (0x000457cf) main_mup2_pane_t5_ParamLimits

0x5e43,	// (0x000457cf) main_mup2_pane_t5

0x5e5b,	// (0x000457e7) main_mup2_pane_t6_ParamLimits

0x5e5b,	// (0x000457e7) main_mup2_pane_t6

0x0005,

0xf5ad,	// (0x0004ef39) main_mup2_pane_t_ParamLimits

0xf5ad,	// (0x0004ef39) main_mup2_pane_t

0x5e89,	// (0x00045815) mup2_visualizer_pane_ParamLimits

0x5e89,	// (0x00045815) mup2_visualizer_pane

0x5eb4,	// (0x00045840) mup_progress_pane_cp_ParamLimits

0x5eb4,	// (0x00045840) mup_progress_pane_cp

0xaf46,	// (0x0004a8d2) mup_volume_pane_cp_ParamLimits

0xaf46,	// (0x0004a8d2) mup_volume_pane_cp

0x5ec8,	// (0x00045854) mup2_visualizer_pane_g1_ParamLimits

0x5ec8,	// (0x00045854) mup2_visualizer_pane_g1

0x5edd,	// (0x00045869) mup2_visualizer_pane_g2_ParamLimits

0x5edd,	// (0x00045869) mup2_visualizer_pane_g2

0x5ee9,	// (0x00045875) mup2_visualizer_pane_g3_ParamLimits

0x5ee9,	// (0x00045875) mup2_visualizer_pane_g3

0x0002,

0xf5ba,	// (0x0004ef46) mup2_visualizer_pane_g_ParamLimits

0xf5ba,	// (0x0004ef46) mup2_visualizer_pane_g

0x44ad,	// (0x00043e39) aid_size_cell_fmradio

0x53d6,	// (0x00044d62) aid_height_parent_landcape

0xdec3,	// (0x0004d84f) wml_content_pane_cp

0xdecb,	// (0x0004d857) wml_tabs_pane

0xded4,	// (0x0004d860) popup_wml_miniature_window

0xdedc,	// (0x0004d868) scroll_pane_cp021

0xdef0,	// (0x0004d87c) wml_content_pane_comp8

0xd849,	// (0x0004d1d5) bg_popup_sub_pane_cp05

0x5f07,	// (0x00045893) popup_wml_miniature_window_g1

0x5f0f,	// (0x0004589b) wml_miniature_view_pane

0x5f17,	// (0x000458a3) aid_size_wml_view

0x5f1f,	// (0x000458ab) wml_miniature_view_pane_g1

0x5f28,	// (0x000458b4) wml_miniature_view_pane_g2

0x5f31,	// (0x000458bd) wml_miniature_view_pane_g3

0x5f39,	// (0x000458c5) wml_miniature_view_pane_g4

0x5f41,	// (0x000458cd) wml_miniature_view_pane_g5

0x5f49,	// (0x000458d5) wml_miniature_view_pane_g6

0x5f51,	// (0x000458dd) wml_miniature_view_pane_g7

0x5f59,	// (0x000458e5) wml_miniature_view_pane_g8

0x0007,

0xf5c1,	// (0x0004ef4d) wml_miniature_view_pane_g

0x5f61,	// (0x000458ed) background_graphic_ParamLimits

0x5f61,	// (0x000458ed) background_graphic

0x5f6d,	// (0x000458f9) wml_tabs_2_pane

0x5f76,	// (0x00045902) wml_tabs_3_pane_ParamLimits

0x5f76,	// (0x00045902) wml_tabs_3_pane

0x5f88,	// (0x00045914) wml_tabs_4_pane_ParamLimits

0x5f88,	// (0x00045914) wml_tabs_4_pane

0x5f9e,	// (0x0004592a) wml_tabs_5_pane_ParamLimits

0x5f9e,	// (0x0004592a) wml_tabs_5_pane

0x5fb8,	// (0x00045944) wml_tabs_pane_g2_ParamLimits

0x5fb8,	// (0x00045944) wml_tabs_pane_g2

0x5fcc,	// (0x00045958) wml_tabs_pane_g3_ParamLimits

0x5fcc,	// (0x00045958) wml_tabs_pane_g3

0x5fe0,	// (0x0004596c) wml_tabs_2_active_pane_ParamLimits

0x5fe0,	// (0x0004596c) wml_tabs_2_active_pane

0x5ff0,	// (0x0004597c) wml_tabs_2_passive_pane_ParamLimits

0x5ff0,	// (0x0004597c) wml_tabs_2_passive_pane

0x6000,	// (0x0004598c) wml_tabs_3_active_pane_cp_ParamLimits

0x6000,	// (0x0004598c) wml_tabs_3_active_pane_cp

0x6011,	// (0x0004599d) wml_tabs_3_passive_pane_ParamLimits

0x6011,	// (0x0004599d) wml_tabs_3_passive_pane

0x6022,	// (0x000459ae) wml_tabs_3_passive_pane_cp_ParamLimits

0x6022,	// (0x000459ae) wml_tabs_3_passive_pane_cp

0x6033,	// (0x000459bf) tabs_4_active_pane

0x603b,	// (0x000459c7) tabs_4_passive_pane

0x6043,	// (0x000459cf) tabs_4_passive_pane_cp

0x604b,	// (0x000459d7) tabs_4_passive_pane_cp2

0x4fba,	// (0x00044946) aid_height_text

0x3f08,	// (0x00043894) mup_volume_cont_pane_ParamLimits

0x3f08,	// (0x00043894) mup_volume_cont_pane

0x1f0b,	// (0x00041897) aid_size_cell_pinb

0x1f15,	// (0x000418a1) aid_size_list_pinb

0x5ea0,	// (0x0004582c) mup2_volume_cont_pane_ParamLimits

0x5ea0,	// (0x0004582c) mup2_volume_cont_pane

0xaf32,	// (0x0004a8be) mup2_volume_cont_pane_g1_ParamLimits

0xaf32,	// (0x0004a8be) mup2_volume_cont_pane_g1

0x1c42,	// (0x000415ce) aid_size_cell_touch_ParamLimits

0x1c42,	// (0x000415ce) aid_size_cell_touch

0x1e47,	// (0x000417d3) touch_pane_ParamLimits

0x1e47,	// (0x000417d3) touch_pane

0xd30f,	// (0x0004cc9b) main_rss2_pane

0x605c,	// (0x000459e8) listscroll_rss2_pane

0x6065,	// (0x000459f1) rss2_navigation_pane

0x606d,	// (0x000459f9) list_rss2_pane

0xe532,	// (0x0004debe) scroll_pane_cp22

0x6075,	// (0x00045a01) rss2_navigation_pane_g1

0x607e,	// (0x00045a0a) rss2_navigation_pane_g2

0x6086,	// (0x00045a12) rss2_navigation_pane_g3

0x0002,

0xf5d2,	// (0x0004ef5e) rss2_navigation_pane_g

0x608e,	// (0x00045a1a) rss2_navigation_pane_t1

0x609c,	// (0x00045a28) rss2_list_single_pane_ParamLimits

0x609c,	// (0x00045a28) rss2_list_single_pane

0x60af,	// (0x00045a3b) rss2_list_single_pane_t2

0x60bd,	// (0x00045a49) rss2_list_single_pane_t3_ParamLimits

0x60bd,	// (0x00045a49) rss2_list_single_pane_t3

0x60da,	// (0x00045a66) rss2_list_single_pane_t4

0x3930,	// (0x000432bc) smil_status_pane_g1

0xefdc,	// (0x0004e968) main_image2_pane_ParamLimits

0xefdc,	// (0x0004e968) main_image2_pane

0x5aca,	// (0x00045456) main_camera2_pane_g9_ParamLimits

0x5aca,	// (0x00045456) main_camera2_pane_g9

0x5bbc,	// (0x00045548) main_camera2_pane_t5_ParamLimits

0x5bbc,	// (0x00045548) main_camera2_pane_t5

0xaf07,	// (0x0004a893) main_camera2_pane_t6_ParamLimits

0xaf07,	// (0x0004a893) main_camera2_pane_t6

0x60e8,	// (0x00045a74) main_image2_pane_g1_ParamLimits

0x60e8,	// (0x00045a74) main_image2_pane_g1

0x4475,	// (0x00043e01) smil2_video_pane_ParamLimits

0x4475,	// (0x00043e01) smil2_video_pane

0xaca2,	// (0x0004a62e) aid_zoom_text_primary_cp

0xace2,	// (0x0004a66e) popup_preview_fixed_window

0xde1d,	// (0x0004d7a9) im_reading_pane_g1

0x59b0,	// (0x0004533c) cams2_bc_adjust_pane_cp_ParamLimits

0x59b0,	// (0x0004533c) cams2_bc_adjust_pane_cp

0x5be2,	// (0x0004556e) cams2_bc_adjust_pane_ParamLimits

0x5be2,	// (0x0004556e) cams2_bc_adjust_pane

0xaf6b,	// (0x0004a8f7) cams2_bc_adjust_pane_g1

0xaf73,	// (0x0004a8ff) cams2_slider_pane

0xaf7c,	// (0x0004a908) cams2_slider_pane_g1

0xaf85,	// (0x0004a911) cams2_slider_pane_g2

0x0006,

0xf5d9,	// (0x0004ef65) cams2_slider_pane_g

0x1fe9,	// (0x00041975) calc_display_pane_ParamLimits

0x200b,	// (0x00041997) calc_paper_pane_ParamLimits

0x2028,	// (0x000419b4) grid_calc_pane_ParamLimits

0xae1a,	// (0x0004a7a6) popup_clock_digital_window_t1_ParamLimits

0xe9b0,	// (0x0004e33c) main_image_pane_t1

0x1fcb,	// (0x00041957) aid_size_cell_calc_ParamLimits

0x1fcb,	// (0x00041957) aid_size_cell_calc

0x543c,	// (0x00044dc8) popup_blid_sat_info2_window_ParamLimits

0x543c,	// (0x00044dc8) popup_blid_sat_info2_window

0x6104,	// (0x00045a90) aid_size_cell_blid

0x610c,	// (0x00045a98) bg_popup_window_pane_cp07

0x612f,	// (0x00045abb) grid_popup_blid_pane

0x6137,	// (0x00045ac3) heading_pane_cp05_ParamLimits

0x6137,	// (0x00045ac3) heading_pane_cp05

0x61ff,	// (0x00045b8b) cell_popup_blid_pane_ParamLimits

0x61ff,	// (0x00045b8b) cell_popup_blid_pane

0x621f,	// (0x00045bab) cell_popup_blid_pane_g1

0x6227,	// (0x00045bb3) cell_popup_blid_pane_t1

0x5e75,	// (0x00045801) mup2_indicator_pane_ParamLimits

0x5e75,	// (0x00045801) mup2_indicator_pane

0xdd26,	// (0x0004d6b2) mup2_visualizer_osc_pane

0x5ef5,	// (0x00045881) mup2_visualizer_spec_pane_ParamLimits

0x5ef5,	// (0x00045881) mup2_visualizer_spec_pane

0x6235,	// (0x00045bc1) mup2_spec_half_pane

0x623e,	// (0x00045bca) mup2_spec_half_pane_cp

0x6246,	// (0x00045bd2) mup2_spec_bar_pane_ParamLimits

0x6246,	// (0x00045bd2) mup2_spec_bar_pane

0x5746,	// (0x000450d2) mup2_spec_bar_pane_g1

0x5750,	// (0x000450dc) mup2_spec_bar_pane_g2

0x0001,

0xf54c,	// (0x0004eed8) mup2_spec_bar_pane_g

0x5778,	// (0x00045104) mup2_osc_middle_pane

0x5781,	// (0x0004510d) mup2_visualizer_osc_pane_g1

0xd339,	// (0x0004ccc5) popup_number_entry_window_t1_ParamLimits

0xd34c,	// (0x0004ccd8) popup_number_entry_window_t2_ParamLimits

0xd35e,	// (0x0004ccea) popup_number_entry_window_t3_ParamLimits

0xd370,	// (0x0004ccfc) popup_number_entry_window_t5_ParamLimits

0xd370,	// (0x0004ccfc) popup_number_entry_window_t5

0xf0ca,	// (0x0004ea56) popup_number_entry_window_t_ParamLimits

0xd48f,	// (0x0004ce1b) text_title_cp2_ParamLimits

0xae6b,	// (0x0004a7f7) aid_hotspot_pointer_text2_pane

0xae91,	// (0x0004a81d) main_viewer_pane_g9_ParamLimits

0xae91,	// (0x0004a81d) main_viewer_pane_g9

0xe065,	// (0x0004d9f1) cale_month_pane_t1_ParamLimits

0xe0a2,	// (0x0004da2e) bg_cale_pane_ParamLimits

0xe0ba,	// (0x0004da46) list_cale_pane_ParamLimits

0xe0cb,	// (0x0004da57) listscroll_cale_day_pane_t1

0xe0dd,	// (0x0004da69) scroll_pane_cp09_ParamLimits

0x3f54,	// (0x000438e0) main_mup_eq_pane_t1_ParamLimits

0x3f54,	// (0x000438e0) main_mup_eq_pane_t1

0x3f6c,	// (0x000438f8) main_mup_eq_pane_t2_ParamLimits

0x3f6c,	// (0x000438f8) main_mup_eq_pane_t2

0x3f82,	// (0x0004390e) main_mup_eq_pane_t3_ParamLimits

0x3f82,	// (0x0004390e) main_mup_eq_pane_t3

0x3f98,	// (0x00043924) main_mup_eq_pane_t4_ParamLimits

0x3f98,	// (0x00043924) main_mup_eq_pane_t4

0x3fae,	// (0x0004393a) main_mup_eq_pane_t5_ParamLimits

0x3fae,	// (0x0004393a) main_mup_eq_pane_t5

0x3fc4,	// (0x00043950) main_mup_eq_pane_t6_ParamLimits

0x3fc4,	// (0x00043950) main_mup_eq_pane_t6

0x3fd6,	// (0x00043962) main_mup_eq_pane_t7_ParamLimits

0x3fd6,	// (0x00043962) main_mup_eq_pane_t7

0x3fe8,	// (0x00043974) main_mup_eq_pane_t8_ParamLimits

0x3fe8,	// (0x00043974) main_mup_eq_pane_t8

0x3ffa,	// (0x00043986) main_mup_eq_pane_t9_ParamLimits

0x3ffa,	// (0x00043986) main_mup_eq_pane_t9

0x4010,	// (0x0004399c) main_mup_eq_pane_t10_ParamLimits

0x4010,	// (0x0004399c) main_mup_eq_pane_t10

0x0009,

0xf3c9,	// (0x0004ed55) main_mup_eq_pane_t_ParamLimits

0xf3c9,	// (0x0004ed55) main_mup_eq_pane_t

0x40a3,	// (0x00043a2f) mup_equalizer_pane_cp5_ParamLimits

0x40b5,	// (0x00043a41) mup_equalizer_pane_cp6_ParamLimits

0x40c7,	// (0x00043a53) mup_equalizer_pane_cp7_ParamLimits

0xd30f,	// (0x0004cc9b) main_gallery_pane

0x579b,	// (0x00045127) smil2_volume_pane

0x57a3,	// (0x0004512f) smil_status_volume_pane_g1_ParamLimits

0x57b6,	// (0x00045142) smil_status_volume_pane_g2_ParamLimits

0xaee5,	// (0x0004a871) smil_status_volume_pane_g3_ParamLimits

0xf551,	// (0x0004eedd) smil_status_volume_pane_g_ParamLimits

0x610c,	// (0x00045a98) bg_popup_window_pane_cp07_ParamLimits

0x611a,	// (0x00045aa6) blid_firmament_pane

0x6265,	// (0x00045bf1) aid_size_cell_gallery_ParamLimits

0x6265,	// (0x00045bf1) aid_size_cell_gallery

0x627b,	// (0x00045c07) grid_gallery_pane_ParamLimits

0x627b,	// (0x00045c07) grid_gallery_pane

0x6290,	// (0x00045c1c) cell_gallery_pane_ParamLimits

0x6290,	// (0x00045c1c) cell_gallery_pane

0x62d5,	// (0x00045c61) bg_cell_gallery_focus_pane_ParamLimits

0x62d5,	// (0x00045c61) bg_cell_gallery_focus_pane

0x62e7,	// (0x00045c73) cell_gallery_pane_g1_ParamLimits

0x62e7,	// (0x00045c73) cell_gallery_pane_g1

0x62f3,	// (0x00045c7f) cell_gallery_pane_g2_ParamLimits

0x62f3,	// (0x00045c7f) cell_gallery_pane_g2

0x6300,	// (0x00045c8c) cell_gallery_pane_g3_ParamLimits

0x6300,	// (0x00045c8c) cell_gallery_pane_g3

0x630d,	// (0x00045c99) cell_gallery_pane_g4_ParamLimits

0x630d,	// (0x00045c99) cell_gallery_pane_g4

0x0003,

0xf5ff,	// (0x0004ef8b) cell_gallery_pane_g_ParamLimits

0xf5ff,	// (0x0004ef8b) cell_gallery_pane_g

0x6319,	// (0x00045ca5) bg_cell_gallery_focus_pane_g1

0x6321,	// (0x00045cad) bg_cell_gallery_focus_pane_g2

0x6329,	// (0x00045cb5) bg_cell_gallery_focus_pane_g3

0x6331,	// (0x00045cbd) bg_cell_gallery_focus_pane_g4

0x6339,	// (0x00045cc5) bg_cell_gallery_focus_pane_g5

0x6341,	// (0x00045ccd) bg_cell_gallery_focus_pane_g6

0x6349,	// (0x00045cd5) bg_cell_gallery_focus_pane_g7

0x6351,	// (0x00045cdd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf608,	// (0x0004ef94) bg_cell_gallery_focus_pane_g

0x6359,	// (0x00045ce5) aid_firma_cardinal

0x636d,	// (0x00045cf9) blid_firmament_pane_t1

0x6384,	// (0x00045d10) blid_firmament_pane_t2

0x639b,	// (0x00045d27) blid_firmament_pane_t3

0x63b2,	// (0x00045d3e) blid_firmament_pane_t4

0x0003,

0xf619,	// (0x0004efa5) blid_firmament_pane_t

0x63c9,	// (0x00045d55) blid_sat_info_pane

0x63d9,	// (0x00045d65) blid_sat_info_pane_g1

0x63d9,	// (0x00045d65) blid_sat_info_pane_g2

0x0001,

0xf622,	// (0x0004efae) blid_sat_info_pane_g

0x63e3,	// (0x00045d6f) blid_sat_info_pane_t1

0x63f1,	// (0x00045d7d) smil2_volume_content_pane

0x63fa,	// (0x00045d86) smil2_volume_pane_g1

0x6402,	// (0x00045d8e) smil2_volume_content_pane_g1

0x640b,	// (0x00045d97) smil2_volume_content_pane_g2

0x6414,	// (0x00045da0) smil2_volume_content_pane_g3

0x641d,	// (0x00045da9) smil2_volume_content_pane_g4

0x6426,	// (0x00045db2) smil2_volume_content_pane_g5

0x642f,	// (0x00045dbb) smil2_volume_content_pane_g6

0x6438,	// (0x00045dc4) smil2_volume_content_pane_g7

0x6441,	// (0x00045dcd) smil2_volume_content_pane_g8

0x644a,	// (0x00045dd6) smil2_volume_content_pane_g9

0x6453,	// (0x00045ddf) smil2_volume_content_pane_g10

0x0009,

0xf627,	// (0x0004efb3) smil2_volume_content_pane_g

0x253d,	// (0x00041ec9) cale_week_day_heading_pane_t1_ParamLimits

0x2562,	// (0x00041eee) cale_week_day_heading_pane_t2_ParamLimits

0x258c,	// (0x00041f18) cale_week_day_heading_pane_t3_ParamLimits

0x25b6,	// (0x00041f42) cale_week_day_heading_pane_t4_ParamLimits

0x25e0,	// (0x00041f6c) cale_week_day_heading_pane_t5_ParamLimits

0x260a,	// (0x00041f96) cale_week_day_heading_pane_t6_ParamLimits

0x2634,	// (0x00041fc0) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0004eb5d) cale_week_day_heading_pane_t_ParamLimits

0xdcd4,	// (0x0004d660) bg_cale_side_pane_ParamLimits

0x2659,	// (0x00041fe5) cale_week_time_pane_t1_ParamLimits

0x2693,	// (0x0004201f) cale_week_time_pane_t2_ParamLimits

0x26cd,	// (0x00042059) cale_week_time_pane_t3_ParamLimits

0x2707,	// (0x00042093) cale_week_time_pane_t4_ParamLimits

0x2741,	// (0x000420cd) cale_week_time_pane_t5_ParamLimits

0x277b,	// (0x00042107) cale_week_time_pane_t6_ParamLimits

0x27b5,	// (0x00042141) cale_week_time_pane_t7_ParamLimits

0x27ef,	// (0x0004217b) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0004eb6c) cale_week_time_pane_t_ParamLimits

0x2829,	// (0x000421b5) cell_cale_week_pane_g2_ParamLimits

0xdcd4,	// (0x0004d660) bg_cale_side_pane_cp01_ParamLimits

0x3773,	// (0x000430ff) cale_month_week_pane_t1_ParamLimits

0x378c,	// (0x00043118) cale_month_week_pane_t2_ParamLimits

0x37a5,	// (0x00043131) cale_month_week_pane_t3_ParamLimits

0x37be,	// (0x0004314a) cale_month_week_pane_t4_ParamLimits

0x37d7,	// (0x00043163) cale_month_week_pane_t5_ParamLimits

0x37f0,	// (0x0004317c) cale_month_week_pane_t6_ParamLimits

0xf294,	// (0x0004ec20) cale_month_week_pane_t_ParamLimits

0xad9a,	// (0x0004a726) cell_cale_month_pane_g1_ParamLimits

0xd30f,	// (0x0004cc9b) main_cale_event_viewer_pane

0xd30f,	// (0x0004cc9b) listscroll_cale_event_viewer_pane

0x645c,	// (0x00045de8) list_cale_ev_pane

0x6464,	// (0x00045df0) scroll_pane_cp023

0x6470,	// (0x00045dfc) field_cale_ev_pane_ParamLimits

0x6470,	// (0x00045dfc) field_cale_ev_pane

0x648a,	// (0x00045e16) field_cale_ev_content_pane_ParamLimits

0x648a,	// (0x00045e16) field_cale_ev_content_pane

0x6496,	// (0x00045e22) field_cale_ev_pane_g1_ParamLimits

0x6496,	// (0x00045e22) field_cale_ev_pane_g1

0x64a2,	// (0x00045e2e) field_cale_ev_pane_g2_ParamLimits

0x64a2,	// (0x00045e2e) field_cale_ev_pane_g2

0x64ba,	// (0x00045e46) field_cale_ev_pane_g3_ParamLimits

0x64ba,	// (0x00045e46) field_cale_ev_pane_g3

0x0002,

0xf63c,	// (0x0004efc8) field_cale_ev_pane_g_ParamLimits

0xf63c,	// (0x0004efc8) field_cale_ev_pane_g

0x64d2,	// (0x00045e5e) field_cale_ev_pane_t1_ParamLimits

0x64d2,	// (0x00045e5e) field_cale_ev_pane_t1

0x64e9,	// (0x00045e75) field_cale_ev_content_pane_t1_ParamLimits

0x64e9,	// (0x00045e75) field_cale_ev_content_pane_t1

0xe896,	// (0x0004e222) bg_button_pane_cp01

0x22a3,	// (0x00041c2f) listscroll_cale_week_pane_ParamLimits

0xdc9c,	// (0x0004d628) popup_toolbar_window_cp01

0xdca5,	// (0x0004d631) listscroll_cale_week_pane_t1_ParamLimits

0x22a3,	// (0x00041c2f) listscroll_cale_day_pane_ParamLimits

0xdc9c,	// (0x0004d628) popup_toolbar_window_cp02

0xe0cb,	// (0x0004da57) listscroll_cale_day_pane_t1_ParamLimits

0x22a3,	// (0x00041c2f) main_cale_month_pane_ParamLimits

0xaed0,	// (0x0004a85c) popup_toolbar_window_cp03_ParamLimits

0xaed0,	// (0x0004a85c) popup_toolbar_window_cp03

0x434f,	// (0x00043cdb) main_image_pane_g2_ParamLimits

0x434f,	// (0x00043cdb) main_image_pane_g2

0x4360,	// (0x00043cec) main_image_pane_g3_ParamLimits

0x4360,	// (0x00043cec) main_image_pane_g3

0x0002,

0xf451,	// (0x0004eddd) main_image_pane_g_ParamLimits

0xf451,	// (0x0004eddd) main_image_pane_g

0xe9b0,	// (0x0004e33c) main_image_pane_t1_ParamLimits

0x4371,	// (0x00043cfd) main_image_pane_t2_ParamLimits

0x4371,	// (0x00043cfd) main_image_pane_t2

0x4383,	// (0x00043d0f) main_image_pane_t3_ParamLimits

0x4383,	// (0x00043d0f) main_image_pane_t3

0x43ab,	// (0x00043d37) main_image_pane_t4_ParamLimits

0x43ab,	// (0x00043d37) main_image_pane_t4

0x0003,

0xf458,	// (0x0004ede4) main_image_pane_t_ParamLimits

0xf458,	// (0x0004ede4) main_image_pane_t

0x43cb,	// (0x00043d57) popup_image_details_window_cp01

0x43d3,	// (0x00043d5f) popup_toobar_trans_pane_cp01_ParamLimits

0x43d3,	// (0x00043d5f) popup_toobar_trans_pane_cp01

0x550d,	// (0x00044e99) popup_image_details_window_ParamLimits

0x550d,	// (0x00044e99) popup_image_details_window

0xaea5,	// (0x0004a831) popup_image_focus_window

0x597e,	// (0x0004530a) camera2_autofocus_pane_ParamLimits

0x597e,	// (0x0004530a) camera2_autofocus_pane

0xd30f,	// (0x0004cc9b) bg_popup_sub_pane_cp06

0x6506,	// (0x00045e92) popup_image_focus_window_g1

0x650e,	// (0x00045e9a) popup_image_focus_window_g2

0x6516,	// (0x00045ea2) popup_image_focus_window_g3

0x651e,	// (0x00045eaa) popup_image_focus_window_g4

0x0003,

0xf643,	// (0x0004efcf) popup_image_focus_window_g

0x6526,	// (0x00045eb2) popup_image_focus_window_t1

0x6534,	// (0x00045ec0) popup_image_focus_window_t2

0x6543,	// (0x00045ecf) popup_image_focus_window_t3

0x0002,

0xf64c,	// (0x0004efd8) popup_image_focus_window_t

0x6551,	// (0x00045edd) camera2_autofocus_pane_g1

0xefdc,	// (0x0004e968) bg_tb_trans_pane_cp01

0x658f,	// (0x00045f1b) popup_image_details_window_g1

0x65a2,	// (0x00045f2e) popup_image_details_window_g2

0x0002,

0xf65e,	// (0x0004efea) popup_image_details_window_g

0x65cb,	// (0x00045f57) popup_image_details_window_t1

0x65dd,	// (0x00045f69) popup_image_details_window_t2

0x65f6,	// (0x00045f82) popup_image_details_window_t3

0x660a,	// (0x00045f96) popup_image_details_window_t4

0x6625,	// (0x00045fb1) popup_image_details_window_t5

0x0004,

0xf665,	// (0x0004eff1) popup_image_details_window_t

0xdb61,	// (0x0004d4ed) bg_calc_paper_pane_ParamLimits

0xd30f,	// (0x0004cc9b) grid_highlight_pane_cp013

0xacf2,	// (0x0004a67e) list_calc_pane_ParamLimits

0xad04,	// (0x0004a690) scroll_pane_cp024

0xdb75,	// (0x0004d501) bg_calc_display_pane_ParamLimits

0x2114,	// (0x00041aa0) calc_display_pane_t1_ParamLimits

0x2126,	// (0x00041ab2) calc_display_pane_t2_ParamLimits

0xad0c,	// (0x0004a698) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0004eadd) calc_display_pane_t_ParamLimits

0x21d0,	// (0x00041b5c) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0004eafa) cell_calc_pane_g

0x21d9,	// (0x00041b65) cell_calc_pane_t1

0xdbd4,	// (0x0004d560) grid_highlight_pane_cp02_ParamLimits

0xdbea,	// (0x0004d576) toolbar_button_pane_cp01_ParamLimits

0xdbea,	// (0x0004d576) toolbar_button_pane_cp01

0xe9f5,	// (0x0004e381) temp_image_control_pane_ParamLimits

0xe9f5,	// (0x0004e381) temp_image_control_pane

0xefdc,	// (0x0004e968) main_mp3_pane

0x663f,	// (0x00045fcb) temp_image_control_pane_g1_ParamLimits

0x663f,	// (0x00045fcb) temp_image_control_pane_g1

0x664d,	// (0x00045fd9) temp_image_control_pane_g2_ParamLimits

0x664d,	// (0x00045fd9) temp_image_control_pane_g2

0x665f,	// (0x00045feb) temp_image_control_pane_g3_ParamLimits

0x665f,	// (0x00045feb) temp_image_control_pane_g3

0x666f,	// (0x00045ffb) temp_image_control_pane_g4_ParamLimits

0x666f,	// (0x00045ffb) temp_image_control_pane_g4

0x0003,

0xf670,	// (0x0004effc) temp_image_control_pane_g_ParamLimits

0xf670,	// (0x0004effc) temp_image_control_pane_g

0x663f,	// (0x00045fcb) main_mp3_pane_g1

0x6680,	// (0x0004600c) main_mp3_pane_g2

0x0007,

0xf679,	// (0x0004f005) main_mp3_pane_g

0x66d7,	// (0x00046063) main_mp3_pane_t1

0xdd2e,	// (0x0004d6ba) main_camera_pane_g8_ParamLimits

0xdd2e,	// (0x0004d6ba) main_camera_pane_g8

0x2b07,	// (0x00042493) main_video_pane_g7_ParamLimits

0x2b07,	// (0x00042493) main_video_pane_g7

0xaf20,	// (0x0004a8ac) main_camera2_pane_t7_ParamLimits

0xaf20,	// (0x0004a8ac) main_camera2_pane_t7

0xde83,	// (0x0004d80f) scroll_pane_cp025_ParamLimits

0xde83,	// (0x0004d80f) scroll_pane_cp025

0xde97,	// (0x0004d823) scroll_pane_cp026_ParamLimits

0xde97,	// (0x0004d823) scroll_pane_cp026

0xdea6,	// (0x0004d832) wml_content_pane_ParamLimits

0xd30f,	// (0x0004cc9b) main_touch_calib_pane

0x67a7,	// (0x00046133) main_touch_calib_pane_g1

0x67b9,	// (0x00046145) main_touch_calib_pane_g2

0x67cb,	// (0x00046157) main_touch_calib_pane_g3

0x67dd,	// (0x00046169) main_touch_calib_pane_g4

0x0003,

0xf697,	// (0x0004f023) main_touch_calib_pane_g

0x67ef,	// (0x0004617b) main_touch_calib_pane_t1

0x6807,	// (0x00046193) main_touch_calib_pane_t2

0x0004,

0xf6a0,	// (0x0004f02c) main_touch_calib_pane_t

0xe5ff,	// (0x0004df8b) mup_progress_pane_cp02

0xe634,	// (0x0004dfc0) navi_pane_g1

0xe6ed,	// (0x0004e079) navi_pane_mp_t3

0xefdc,	// (0x0004e968) main_mp3_pane_ParamLimits

0x567d,	// (0x00045009) navi_pane_ParamLimits

0x663f,	// (0x00045fcb) main_mp3_pane_g1_ParamLimits

0x6680,	// (0x0004600c) main_mp3_pane_g2_ParamLimits

0x668c,	// (0x00046018) main_mp3_pane_g3_ParamLimits

0x668c,	// (0x00046018) main_mp3_pane_g3

0x6698,	// (0x00046024) main_mp3_pane_g4_ParamLimits

0x6698,	// (0x00046024) main_mp3_pane_g4

0x66a4,	// (0x00046030) main_mp3_pane_g5_ParamLimits

0x66a4,	// (0x00046030) main_mp3_pane_g5

0x66b2,	// (0x0004603e) main_mp3_pane_g6_ParamLimits

0x66b2,	// (0x0004603e) main_mp3_pane_g6

0x66bf,	// (0x0004604b) main_mp3_pane_g7_ParamLimits

0x66bf,	// (0x0004604b) main_mp3_pane_g7

0x66cb,	// (0x00046057) main_mp3_pane_g8_ParamLimits

0x66cb,	// (0x00046057) main_mp3_pane_g8

0xf679,	// (0x0004f005) main_mp3_pane_g_ParamLimits

0x66e5,	// (0x00046071) main_mp3_pane_t2

0x66f3,	// (0x0004607f) main_mp3_pane_t3

0x6701,	// (0x0004608d) main_mp3_pane_t4

0x670f,	// (0x0004609b) main_mp3_pane_t5

0x0005,

0xf68a,	// (0x0004f016) main_mp3_pane_t

0x672b,	// (0x000460b7) mup_progress_pane_cp01

0xaca2,	// (0x0004a62e) aid_zoom_text_secondary2

0x645c,	// (0x00045de8) list_cale_ev2_pane

0x6464,	// (0x00045df0) scroll_pane_cp023_ParamLimits

0x6855,	// (0x000461e1) field_cale_ev2_pane_ParamLimits

0x6855,	// (0x000461e1) field_cale_ev2_pane

0x101f,	// (0x000409ab) field_cale_ev2_pane_g1_ParamLimits

0x101f,	// (0x000409ab) field_cale_ev2_pane_g1

0x102b,	// (0x000409b7) field_cale_ev2_pane_g2_ParamLimits

0x102b,	// (0x000409b7) field_cale_ev2_pane_g2

0x1043,	// (0x000409cf) field_cale_ev2_pane_g3_ParamLimits

0x1043,	// (0x000409cf) field_cale_ev2_pane_g3

0x0003,

0xf6ab,	// (0x0004f037) field_cale_ev2_pane_g_ParamLimits

0xf6ab,	// (0x0004f037) field_cale_ev2_pane_g

0x105b,	// (0x000409e7) field_cale_ev2_pane_t1_ParamLimits

0x105b,	// (0x000409e7) field_cale_ev2_pane_t1

0x1072,	// (0x000409fe) field_cale_ev2_pane_t2_ParamLimits

0x1072,	// (0x000409fe) field_cale_ev2_pane_t2

0x0001,

0xf6b4,	// (0x0004f040) field_cale_ev2_pane_t_ParamLimits

0xf6b4,	// (0x0004f040) field_cale_ev2_pane_t

0x4212,	// (0x00043b9e) main_postcard_pane_g5_ParamLimits

0x4212,	// (0x00043b9e) main_postcard_pane_g5

0x4226,	// (0x00043bb2) main_postcard_pane_g6_ParamLimits

0x4226,	// (0x00043bb2) main_postcard_pane_g6

0x28ed,	// (0x00042279) camera2_autofocus_pane_cp_ParamLimits

0x28ed,	// (0x00042279) camera2_autofocus_pane_cp

0xefdc,	// (0x0004e968) main_mup3_pane

0x688d,	// (0x00046219) main_mup3_pane_g1_ParamLimits

0x688d,	// (0x00046219) main_mup3_pane_g1

0x68af,	// (0x0004623b) main_mup3_pane_g2_ParamLimits

0x68af,	// (0x0004623b) main_mup3_pane_g2

0x6922,	// (0x000462ae) main_mup3_pane_g3_ParamLimits

0x6922,	// (0x000462ae) main_mup3_pane_g3

0x6960,	// (0x000462ec) main_mup3_pane_g4_ParamLimits

0x6960,	// (0x000462ec) main_mup3_pane_g4

0x699e,	// (0x0004632a) main_mup3_pane_g5_ParamLimits

0x699e,	// (0x0004632a) main_mup3_pane_g5

0x69dc,	// (0x00046368) main_mup3_pane_g6_ParamLimits

0x69dc,	// (0x00046368) main_mup3_pane_g6

0x69eb,	// (0x00046377) main_mup3_pane_g7_ParamLimits

0x69eb,	// (0x00046377) main_mup3_pane_g7

0x0007,

0xf6c4,	// (0x0004f050) main_mup3_pane_g_ParamLimits

0xf6c4,	// (0x0004f050) main_mup3_pane_g

0x6a5e,	// (0x000463ea) main_mup3_pane_t1_ParamLimits

0x6a5e,	// (0x000463ea) main_mup3_pane_t1

0x6ac4,	// (0x00046450) main_mup3_pane_t2_ParamLimits

0x6ac4,	// (0x00046450) main_mup3_pane_t2

0x6b8a,	// (0x00046516) main_mup3_pane_t4_ParamLimits

0x6b8a,	// (0x00046516) main_mup3_pane_t4

0x6bd8,	// (0x00046564) main_mup3_pane_t5_ParamLimits

0x6bd8,	// (0x00046564) main_mup3_pane_t5

0x6c86,	// (0x00046612) main_mup3_pane_t6_ParamLimits

0x6c86,	// (0x00046612) main_mup3_pane_t6

0x0005,

0xf6d5,	// (0x0004f061) main_mup3_pane_t_ParamLimits

0xf6d5,	// (0x0004f061) main_mup3_pane_t

0x6d3a,	// (0x000466c6) mup3_progress_pane_ParamLimits

0x6d3a,	// (0x000466c6) mup3_progress_pane

0x6db6,	// (0x00046742) popup_mup3_control_window_ParamLimits

0x6db6,	// (0x00046742) popup_mup3_control_window

0x6dce,	// (0x0004675a) popup_mup3_text_window

0x6dec,	// (0x00046778) mup3_progress_pane_t1

0x6e0a,	// (0x00046796) mup3_progress_pane_t2

0x6e28,	// (0x000467b4) mup3_progress_pane_t3

0x0002,

0xf6e2,	// (0x0004f06e) mup3_progress_pane_t

0x6e45,	// (0x000467d1) mup_progress_pane_cp03

0xd30f,	// (0x0004cc9b) bg_tb_trans_pane_cp04

0x6e55,	// (0x000467e1) mup3_volume_pane

0x6e5d,	// (0x000467e9) popup_mup3_control_window_g1

0x6e66,	// (0x000467f2) mup3_volume_pane_g1

0x6e6f,	// (0x000467fb) mup3_volume_pane_g2

0x6e78,	// (0x00046804) mup3_volume_pane_g3

0x0002,

0xf6e9,	// (0x0004f075) mup3_volume_pane_g

0xd30f,	// (0x0004cc9b) bg_tb_trans_pane_cp03

0x6e81,	// (0x0004680d) popup_mup3_text_window_g1

0x6e89,	// (0x00046815) popup_mup3_text_window_t1

0xdbbd,	// (0x0004d549) list_calc_item_pane_g1_ParamLimits

0x6053,	// (0x000459df) mup_volume_pane_cp_g1

0x681f,	// (0x000461ab) main_touch_calib_pane_t3

0x6831,	// (0x000461bd) main_touch_calib_pane_t4

0x6843,	// (0x000461cf) main_touch_calib_pane_t5

0xac82,	// (0x0004a60e) aid_cell_size_toolbar2

0xac8a,	// (0x0004a616) aid_popup3_width_pane

0xac92,	// (0x0004a61e) aid_zoom_text_msg_primary

0x28cc,	// (0x00042258) vorec_t7

0xdb81,	// (0x0004d50d) bg_calc_paper_pane_g1_ParamLimits

0xdb8d,	// (0x0004d519) bg_calc_paper_pane_g2_ParamLimits

0xdb99,	// (0x0004d525) bg_calc_paper_pane_g3_ParamLimits

0xdba5,	// (0x0004d531) bg_calc_paper_pane_g4_ParamLimits

0xdbb1,	// (0x0004d53d) bg_calc_paper_pane_g5_ParamLimits

0x216b,	// (0x00041af7) bg_calc_paper_pane_g6_ParamLimits

0x217a,	// (0x00041b06) bg_calc_paper_pane_g7_ParamLimits

0x2189,	// (0x00041b15) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0004eae4) bg_calc_paper_pane_g_ParamLimits

0x2198,	// (0x00041b24) calc_bg_paper_pane_g9_ParamLimits

0x2a1f,	// (0x000423ab) image_qvga_pane_ParamLimits

0x2a1f,	// (0x000423ab) image_qvga_pane

0xdaa4,	// (0x0004d430) bg_popup_sub_pane_cp04_ParamLimits

0xe92c,	// (0x0004e2b8) popup_mup_playback_window_g1_ParamLimits

0xe938,	// (0x0004e2c4) popup_mup_playback_window_t1_ParamLimits

0xe94d,	// (0x0004e2d9) popup_mup_playback_window_t2_ParamLimits

0x02bc,	// (0x0003fc48) popup_mup_playback_window_t_ParamLimits

0x5d95,	// (0x00045721) main_mup2_pane_g3_ParamLimits

0x5d95,	// (0x00045721) main_mup2_pane_g3

0x2ce8,	// (0x00042674) popup_toolbar_window_cp04

0xed0a,	// (0x0004e696) popup_call2_audio_second_window_g3_ParamLimits

0xed0a,	// (0x0004e696) popup_call2_audio_second_window_g3

0x4724,	// (0x000440b0) popup_call2_audio_first_window_g4_ParamLimits

0x4724,	// (0x000440b0) popup_call2_audio_first_window_g4

0x4da3,	// (0x0004472f) popup_call2_audio_in_window_g4_ParamLimits

0x4da3,	// (0x0004472f) popup_call2_audio_in_window_g4

0x4331,	// (0x00043cbd) aid_area_sk_bg_cut_ParamLimits

0x4331,	// (0x00043cbd) aid_area_sk_bg_cut

0xe962,	// (0x0004e2ee) aid_area_sk_bg_cut_2_ParamLimits

0xe962,	// (0x0004e2ee) aid_area_sk_bg_cut_2

0x62c5,	// (0x00045c51) aid_placing_details_win

0x62cd,	// (0x00045c59) aid_placing_details_win_2

0x6551,	// (0x00045edd) camera2_autofocus_pane_g1_ParamLimits

0x1de4,	// (0x00041770) popup_fixed_preview_cale_window_ParamLimits

0x1de4,	// (0x00041770) popup_fixed_preview_cale_window

0xe76b,	// (0x0004e0f7) navi_slider_pane_g3

0xe774,	// (0x0004e100) navi_slider_pane_g4

0xe77d,	// (0x0004e109) navi_slider_pane_g5

0xe76b,	// (0x0004e0f7) navi_slider_pane_g6

0xae40,	// (0x0004a7cc) navi_slider_pane_g7

0xe863,	// (0x0004e1ef) mup_scale_pane_g3

0xe86c,	// (0x0004e1f8) mup_scale_pane_g4

0xe875,	// (0x0004e201) mup_scale_pane_g5

0x40db,	// (0x00043a67) mup_scale_pane_g6

0x40e4,	// (0x00043a70) mup_scale_pane_g7

0xe76b,	// (0x0004e0f7) cams2_slider_pane_g3

0x60fc,	// (0x00045a88) cams2_slider_pane_g4

0xaf8e,	// (0x0004a91a) cams2_slider_pane_g5

0xe76b,	// (0x0004e0f7) cams2_slider_pane_g6

0xaf96,	// (0x0004a922) cams2_slider_pane_g7

0x63d9,	// (0x00045d65) camera2_autofocus_pane_cp_g1

0x53fa,	// (0x00044d86) bg_popup_preview_window_pane_cp02_ParamLimits

0x53fa,	// (0x00044d86) bg_popup_preview_window_pane_cp02

0x6e97,	// (0x00046823) list_fp_cale_pane_ParamLimits

0x6e97,	// (0x00046823) list_fp_cale_pane

0x6ea3,	// (0x0004682f) popup_fixed_preview_cale_window_t1_ParamLimits

0x6ea3,	// (0x0004682f) popup_fixed_preview_cale_window_t1

0x6eb5,	// (0x00046841) popup_fixed_preview_cale_window_t2_ParamLimits

0x6eb5,	// (0x00046841) popup_fixed_preview_cale_window_t2

0x6eca,	// (0x00046856) popup_fixed_preview_cale_window_t3_ParamLimits

0x6eca,	// (0x00046856) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f0,	// (0x0004f07c) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f0,	// (0x0004f07c) popup_fixed_preview_cale_window_t

0x6eeb,	// (0x00046877) list_single_fp_cale_pane_ParamLimits

0x6eeb,	// (0x00046877) list_single_fp_cale_pane

0x6efe,	// (0x0004688a) list_single_fp_cale_pane_g1_ParamLimits

0x6efe,	// (0x0004688a) list_single_fp_cale_pane_g1

0x6f0a,	// (0x00046896) list_single_fp_cale_pane_g2_ParamLimits

0x6f0a,	// (0x00046896) list_single_fp_cale_pane_g2

0x0002,

0xf6f7,	// (0x0004f083) list_single_fp_cale_pane_g_ParamLimits

0xf6f7,	// (0x0004f083) list_single_fp_cale_pane_g

0x6f23,	// (0x000468af) list_single_fp_cale_pane_t1_ParamLimits

0x6f23,	// (0x000468af) list_single_fp_cale_pane_t1

0x6f35,	// (0x000468c1) list_single_fp_cale_pane_t2_ParamLimits

0x6f35,	// (0x000468c1) list_single_fp_cale_pane_t2

0x0001,

0xf6fe,	// (0x0004f08a) list_single_fp_cale_pane_t_ParamLimits

0xf6fe,	// (0x0004f08a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd30f,	// (0x0004cc9b) main_dialer_pane

0x6f68,	// (0x000468f4) aid_cell_size_keypad

0x6f72,	// (0x000468fe) dialer_ne_pane

0x6f7a,	// (0x00046906) grid_dialer_command_1_pane

0x6f82,	// (0x0004690e) grid_dialer_command_2_pane

0x6f8a,	// (0x00046916) grid_dialer_keypad_pane

0x6f9a,	// (0x00046926) bg_popup_call_pane_cp06_ParamLimits

0x6f9a,	// (0x00046926) bg_popup_call_pane_cp06

0x6fa6,	// (0x00046932) dialer_ne_clear_pane_ParamLimits

0x6fa6,	// (0x00046932) dialer_ne_clear_pane

0x6fb2,	// (0x0004693e) dialer_ne_pane_g1

0x6fba,	// (0x00046946) dialer_ne_pane_t1_ParamLimits

0x6fba,	// (0x00046946) dialer_ne_pane_t1

0x6fcc,	// (0x00046958) dialer_ne_pane_t2_ParamLimits

0x6fcc,	// (0x00046958) dialer_ne_pane_t2

0x6ff6,	// (0x00046982) dialer_ne_pane_t3_ParamLimits

0x6ff6,	// (0x00046982) dialer_ne_pane_t3

0x0002,

0xf703,	// (0x0004f08f) dialer_ne_pane_t_ParamLimits

0xf703,	// (0x0004f08f) dialer_ne_pane_t

0x7026,	// (0x000469b2) dialer_ne_pane_t3_copy1_ParamLimits

0x7026,	// (0x000469b2) dialer_ne_pane_t3_copy1

0x7055,	// (0x000469e1) cell_dialer_keypad_pane_ParamLimits

0x7055,	// (0x000469e1) cell_dialer_keypad_pane

0x706a,	// (0x000469f6) cell_dialer_command_1_pane_ParamLimits

0x706a,	// (0x000469f6) cell_dialer_command_1_pane

0x7080,	// (0x00046a0c) cell_dialer_command_2_pane_ParamLimits

0x7080,	// (0x00046a0c) cell_dialer_command_2_pane

0x708f,	// (0x00046a1b) bg_button_pane_cp02_ParamLimits

0x708f,	// (0x00046a1b) bg_button_pane_cp02

0x709b,	// (0x00046a27) cell_dialer_keypad_pane_g1_ParamLimits

0x709b,	// (0x00046a27) cell_dialer_keypad_pane_g1

0x708f,	// (0x00046a1b) bg_button_pane_cp03_ParamLimits

0x708f,	// (0x00046a1b) bg_button_pane_cp03

0x70b0,	// (0x00046a3c) cell_dialer_command_1_pane_g1_ParamLimits

0x70b0,	// (0x00046a3c) cell_dialer_command_1_pane_g1

0x70c3,	// (0x00046a4f) bg_button_pane_cp04

0x70cb,	// (0x00046a57) cell_dialer_command_2_pane_g1

0xdd26,	// (0x0004d6b2) bg_button_pane_cp06

0x70d3,	// (0x00046a5f) dialer_ne_clear_pane_g1

0xe640,	// (0x0004dfcc) navi_pane_g2

0xe66e,	// (0x0004dffa) navi_pane_g3

0x0002,

0x01bf,	// (0x0003fb4b) navi_pane_g

0xe6fb,	// (0x0004e087) navi_pane_mv_g2

0xe722,	// (0x0004e0ae) navi_pane_mv_g5

0x3ce7,	// (0x00043673) navi_pane_mv_t1

0xdb75,	// (0x0004d501) main_clock2_pane

0x712c,	// (0x00046ab8) main_clock2_list_pane_ParamLimits

0x712c,	// (0x00046ab8) main_clock2_list_pane

0x717a,	// (0x00046b06) main_clock2_pane_t1_ParamLimits

0x717a,	// (0x00046b06) main_clock2_pane_t1

0x71b4,	// (0x00046b40) main_clock2_pane_t2_ParamLimits

0x71b4,	// (0x00046b40) main_clock2_pane_t2

0x0004,

0xf70f,	// (0x0004f09b) main_clock2_pane_t_ParamLimits

0xf70f,	// (0x0004f09b) main_clock2_pane_t

0x7248,	// (0x00046bd4) popup_clock_analogue_window_cp03_ParamLimits

0x7248,	// (0x00046bd4) popup_clock_analogue_window_cp03

0x726c,	// (0x00046bf8) popup_clock_digital_window_cp02_ParamLimits

0x726c,	// (0x00046bf8) popup_clock_digital_window_cp02

0x72dd,	// (0x00046c69) main_clock2_list_single_pane_ParamLimits

0x72dd,	// (0x00046c69) main_clock2_list_single_pane

0xdd26,	// (0x0004d6b2) list_highlight_pane_cp05

0x72ef,	// (0x00046c7b) main_clock2_list_single_pane_t1

0x2ce8,	// (0x00042674) popup_toolbar_window_cp04_ParamLimits

0x655f,	// (0x00045eeb) camera2_autofocus_pane_g2_ParamLimits

0x655f,	// (0x00045eeb) camera2_autofocus_pane_g2

0x656b,	// (0x00045ef7) camera2_autofocus_pane_g3_ParamLimits

0x656b,	// (0x00045ef7) camera2_autofocus_pane_g3

0x6577,	// (0x00045f03) camera2_autofocus_pane_g4_ParamLimits

0x6577,	// (0x00045f03) camera2_autofocus_pane_g4

0x6583,	// (0x00045f0f) camera2_autofocus_pane_g5_ParamLimits

0x6583,	// (0x00045f0f) camera2_autofocus_pane_g5

0x0004,

0xf653,	// (0x0004efdf) camera2_autofocus_pane_g_ParamLimits

0xf653,	// (0x0004efdf) camera2_autofocus_pane_g

0x686d,	// (0x000461f9) camera2_autofocus_pane_cp_g2

0x6875,	// (0x00046201) camera2_autofocus_pane_cp_g3

0x687d,	// (0x00046209) camera2_autofocus_pane_cp_g4

0x6885,	// (0x00046211) camera2_autofocus_pane_cp_g5

0x0004,

0xf6b9,	// (0x0004f045) camera2_autofocus_pane_cp_g

0x6f92,	// (0x0004691e) popup_dialer_spcha_window

0xd30f,	// (0x0004cc9b) bg_popup_sub_pane_cp07

0x7395,	// (0x00046d21) list_spcha_pane

0x739d,	// (0x00046d29) list_single_spcha_pane_ParamLimits

0x739d,	// (0x00046d29) list_single_spcha_pane

0xd30f,	// (0x0004cc9b) list_highlight_pane_cp06

0x73ae,	// (0x00046d3a) list_single_spcha_pane_t1

0x4b4d,	// (0x000444d9) popup_call2_audio_out_window_g4_ParamLimits

0x4b4d,	// (0x000444d9) popup_call2_audio_out_window_g4

0xd30f,	// (0x0004cc9b) main_imed2_pane

0xaead,	// (0x0004a839) popup_imed_adjust2_window

0x5523,	// (0x00044eaf) popup_imed_trans_window_ParamLimits

0x5523,	// (0x00044eaf) popup_imed_trans_window

0x6163,	// (0x00045aef) popup_blid_sat_info2_window_t1

0x6171,	// (0x00045afd) popup_blid_sat_info2_window_t2

0x000a,

0xf5e8,	// (0x0004ef74) popup_blid_sat_info2_window_t

0x73bc,	// (0x00046d48) aid_size_cell_colour_35

0x73dc,	// (0x00046d68) aid_size_cell_colour_112

0x73fc,	// (0x00046d88) aid_size_cell_effect

0x5406,	// (0x00044d92) bg_tb_trans_pane_cp02

0xe1dc,	// (0x0004db68) heading_imed_pane

0x741b,	// (0x00046da7) listscroll_imed_pane

0x7427,	// (0x00046db3) heading_imed_pane_g1

0x742f,	// (0x00046dbb) heading_imed_pane_t1

0x743d,	// (0x00046dc9) grid_imed_colour_35_pane_ParamLimits

0x743d,	// (0x00046dc9) grid_imed_colour_35_pane

0x7450,	// (0x00046ddc) grid_imed_effect_pane

0x7465,	// (0x00046df1) list_imed_aspect_pane

0x746d,	// (0x00046df9) scroll_pane_cp027_ParamLimits

0x746d,	// (0x00046df9) scroll_pane_cp027

0x747e,	// (0x00046e0a) cell_imed_effect_pane_ParamLimits

0x747e,	// (0x00046e0a) cell_imed_effect_pane

0x74a3,	// (0x00046e2f) cell_imed_colour_pane_ParamLimits

0x74a3,	// (0x00046e2f) cell_imed_colour_pane

0x74dd,	// (0x00046e69) cell_imed_colour_pane_g1_ParamLimits

0x74dd,	// (0x00046e69) cell_imed_colour_pane_g1

0x74ee,	// (0x00046e7a) hgihlgiht_grid_pane_cp016_ParamLimits

0x74ee,	// (0x00046e7a) hgihlgiht_grid_pane_cp016

0x74fe,	// (0x00046e8a) cell_imed_effect_pane_g1

0x7506,	// (0x00046e92) grid_highlight_pane_cp017

0x750f,	// (0x00046e9b) list_imed_single_pane_ParamLimits

0x750f,	// (0x00046e9b) list_imed_single_pane

0xd30f,	// (0x0004cc9b) list_highlight_pane_cp07

0x7522,	// (0x00046eae) list_imed_aspect_pane_comp1_t1

0x5406,	// (0x00044d92) bg_tb_trans_pane_cp05

0x7542,	// (0x00046ece) popup_imed_adjust2_window_g1

0x7569,	// (0x00046ef5) popup_imed_adjust2_window_t1

0x7581,	// (0x00046f0d) slider_imed_adjust_pane

0x7595,	// (0x00046f21) slider_imed_adjust_pane_g1

0x75a5,	// (0x00046f31) slider_imed_adjust_pane_g2

0x75b5,	// (0x00046f41) slider_imed_adjust_pane_g3

0x75c6,	// (0x00046f52) slider_imed_adjust_pane_g4

0x0003,

0xf72c,	// (0x0004f0b8) slider_imed_adjust_pane_g

0x75d7,	// (0x00046f63) aid_size_cell_clipart2

0x75e2,	// (0x00046f6e) grid_imed_clipart_pane

0x75ec,	// (0x00046f78) scroll_pane_cp031

0x75f4,	// (0x00046f80) cell_imed_clipart_pane_ParamLimits

0x75f4,	// (0x00046f80) cell_imed_clipart_pane

0x7609,	// (0x00046f95) cell_imed_clipart_pane_g1

0xd30f,	// (0x0004cc9b) grid_highlight_pane_cp014

0x715b,	// (0x00046ae7) main_clock2_pane_g1_ParamLimits

0x715b,	// (0x00046ae7) main_clock2_pane_g1

0x7288,	// (0x00046c14) aid_call2_pane_cp10

0x729a,	// (0x00046c26) aid_call_pane_cp10

0xe5a1,	// (0x0004df2d) popup_clock_analogue_window_cp10_g1

0xe5a1,	// (0x0004df2d) popup_clock_analogue_window_cp10_g2

0x72ac,	// (0x00046c38) popup_clock_analogue_window_cp10_g3

0x72ac,	// (0x00046c38) popup_clock_analogue_window_cp10_g4

0xe5a1,	// (0x0004df2d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71a,	// (0x0004f0a6) popup_clock_analogue_window_cp10_g

0x72be,	// (0x00046c4a) popup_clock_analogue_window_cp10_t1

0x72fd,	// (0x00046c89) clock_digital_number_pane_cp10_ParamLimits

0x72fd,	// (0x00046c89) clock_digital_number_pane_cp10

0x7315,	// (0x00046ca1) clock_digital_number_pane_cp11_ParamLimits

0x7315,	// (0x00046ca1) clock_digital_number_pane_cp11

0x732d,	// (0x00046cb9) clock_digital_number_pane_cp12_ParamLimits

0x732d,	// (0x00046cb9) clock_digital_number_pane_cp12

0x7345,	// (0x00046cd1) clock_digital_number_pane_cp13_ParamLimits

0x7345,	// (0x00046cd1) clock_digital_number_pane_cp13

0x735d,	// (0x00046ce9) clock_digital_separator_pane_cp10_ParamLimits

0x735d,	// (0x00046ce9) clock_digital_separator_pane_cp10

0x7375,	// (0x00046d01) popup_clock_digital_window_cp02_t1_ParamLimits

0x7375,	// (0x00046d01) popup_clock_digital_window_cp02_t1

0xda9c,	// (0x0004d428) clock_digital_number_pane_cp10_g1

0xda9c,	// (0x0004d428) clock_digital_number_pane_cp10_g2

0x0001,

0x05dc,	// (0x0003ff68) clock_digital_number_pane_cp10_g

0xda9c,	// (0x0004d428) clock_digital_separator_pane_cp10_g1

0xda9c,	// (0x0004d428) clock_digital_separator_pane_g2_cp10

0xe72a,	// (0x0004e0b6) navi_pane_vded_g4

0xe733,	// (0x0004e0bf) navi_pane_vded_g5

0xe73c,	// (0x0004e0c8) navi_pane_vded_t1

0xd30f,	// (0x0004cc9b) main_vded_pane

0x7612,	// (0x00046f9e) main_vded_pane_g1

0x761a,	// (0x00046fa6) main_vded_pane_g2

0x7622,	// (0x00046fae) main_vded_pane_g3

0x0002,

0xf735,	// (0x0004f0c1) main_vded_pane_g

0x762a,	// (0x00046fb6) main_vded_pane_t1

0x7638,	// (0x00046fc4) main_vded_pane_t2

0x0001,

0xf73c,	// (0x0004f0c8) main_vded_pane_t

0x7646,	// (0x00046fd2) vded_slider_pane

0x764e,	// (0x00046fda) vded_video_pane

0x7656,	// (0x00046fe2) vded_video_pane_g1

0x7660,	// (0x00046fec) vded_video_pane_g2

0x63d9,	// (0x00045d65) vded_video_pane_g3

0x0002,

0xf741,	// (0x0004f0cd) vded_video_pane_g

0x7669,	// (0x00046ff5) vded_slider_pane_g1

0x6053,	// (0x000459df) vded_slider_pane_g2

0x7672,	// (0x00046ffe) vded_slider_pane_g3

0x767b,	// (0x00047007) vded_slider_pane_g4

0x7684,	// (0x00047010) vded_slider_pane_g5

0x0004,

0xf748,	// (0x0004f0d4) vded_slider_pane_g

0x6da0,	// (0x0004672c) mup3_rocker_pane_ParamLimits

0x6da0,	// (0x0004672c) mup3_rocker_pane

0x768d,	// (0x00047019) mup3_control_keys_pane_g1

0x7695,	// (0x00047021) mup3_control_keys_pane_g2

0x769d,	// (0x00047029) mup3_control_keys_pane_g3

0x76a5,	// (0x00047031) mup3_control_keys_pane_g4

0x0003,

0xf753,	// (0x0004f0df) mup3_control_keys_pane_g

0x1e1b,	// (0x000417a7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1e1b,	// (0x000417a7) popup_toolbar2_fixed_window_cp01

0x6dd6,	// (0x00046762) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6dd6,	// (0x00046762) popup_toolbar2_fixed_window_cp02

0xee7c,	// (0x0004e808) popup_call2_audio_second_window_t4_ParamLimits

0xee7c,	// (0x0004e808) popup_call2_audio_second_window_t4

0x49ba,	// (0x00044346) popup_call2_audio_first_window_t6_ParamLimits

0x49ba,	// (0x00044346) popup_call2_audio_first_window_t6

0x4c50,	// (0x000445dc) popup_call2_audio_out_window_t6_ParamLimits

0x4c50,	// (0x000445dc) popup_call2_audio_out_window_t6

0xd30f,	// (0x0004cc9b) main_vitu_pane

0x76b5,	// (0x00047041) aid_size_cell_itu_ParamLimits

0x76b5,	// (0x00047041) aid_size_cell_itu

0xefdc,	// (0x0004e968) bg_popup_window_pane_cp08_ParamLimits

0xefdc,	// (0x0004e968) bg_popup_window_pane_cp08

0x76cb,	// (0x00047057) field_vitu_entry_pane_ParamLimits

0x76cb,	// (0x00047057) field_vitu_entry_pane

0x76de,	// (0x0004706a) grid_vitu_function_pane_ParamLimits

0x76de,	// (0x0004706a) grid_vitu_function_pane

0x76f3,	// (0x0004707f) grid_vitu_itu_pane_ParamLimits

0x76f3,	// (0x0004707f) grid_vitu_itu_pane

0x7709,	// (0x00047095) cell_vitu_itu_pane_ParamLimits

0x7709,	// (0x00047095) cell_vitu_itu_pane

0x772b,	// (0x000470b7) cell_vitu_function_pane_ParamLimits

0x772b,	// (0x000470b7) cell_vitu_function_pane

0xefdc,	// (0x0004e968) bg_popup_sub_pane_cp08_ParamLimits

0xefdc,	// (0x0004e968) bg_popup_sub_pane_cp08

0x775c,	// (0x000470e8) field_vitu_entry_pane_t1_ParamLimits

0x775c,	// (0x000470e8) field_vitu_entry_pane_t1

0x7778,	// (0x00047104) field_vitu_entry_pane_t2_ParamLimits

0x7778,	// (0x00047104) field_vitu_entry_pane_t2

0x0001,

0xf761,	// (0x0004f0ed) field_vitu_entry_pane_t_ParamLimits

0xf761,	// (0x0004f0ed) field_vitu_entry_pane_t

0x7795,	// (0x00047121) bg_button_pane_cp05_ParamLimits

0x7795,	// (0x00047121) bg_button_pane_cp05

0x77a3,	// (0x0004712f) cell_vitu_itu_pane_g1

0x77bb,	// (0x00047147) cell_vitu_itu_pane_t1_ParamLimits

0x77bb,	// (0x00047147) cell_vitu_itu_pane_t1

0x77cd,	// (0x00047159) cell_vitu_itu_pane_t2_ParamLimits

0x77cd,	// (0x00047159) cell_vitu_itu_pane_t2

0x0002,

0xf766,	// (0x0004f0f2) cell_vitu_itu_pane_t_ParamLimits

0xf766,	// (0x0004f0f2) cell_vitu_itu_pane_t

0x7802,	// (0x0004718e) bg_button_pane_cp07

0x780c,	// (0x00047198) cell_vitu_function_pane_g1

0xacea,	// (0x0004a676) main_calc_pane_g1

0x1c66,	// (0x000415f2) aid_visual_content_pane

0xd30f,	// (0x0004cc9b) main_vradio_pane

0x7815,	// (0x000471a1) main_vradio_pane_g1_ParamLimits

0x7815,	// (0x000471a1) main_vradio_pane_g1

0x782b,	// (0x000471b7) main_vradio_pane_g2_ParamLimits

0x782b,	// (0x000471b7) main_vradio_pane_g2

0x0001,

0xf76d,	// (0x0004f0f9) main_vradio_pane_g_ParamLimits

0xf76d,	// (0x0004f0f9) main_vradio_pane_g

0x7838,	// (0x000471c4) main_vradio_pane_t1_ParamLimits

0x7838,	// (0x000471c4) main_vradio_pane_t1

0x784d,	// (0x000471d9) main_vradio_pane_t2_ParamLimits

0x784d,	// (0x000471d9) main_vradio_pane_t2

0x7862,	// (0x000471ee) main_vradio_pane_t3_ParamLimits

0x7862,	// (0x000471ee) main_vradio_pane_t3

0x0002,

0xf772,	// (0x0004f0fe) main_vradio_pane_t_ParamLimits

0xf772,	// (0x0004f0fe) main_vradio_pane_t

0x7874,	// (0x00047200) vradio_rocker_control_pane_ParamLimits

0x7874,	// (0x00047200) vradio_rocker_control_pane

0x7886,	// (0x00047212) vradio_station_info_pane_ParamLimits

0x7886,	// (0x00047212) vradio_station_info_pane

0x7896,	// (0x00047222) vradio_frequency_info_pane_ParamLimits

0x7896,	// (0x00047222) vradio_frequency_info_pane

0x63d9,	// (0x00045d65) vradio_station_info_pane_g1

0x78a5,	// (0x00047231) vradio_station_info_pane_t1_ParamLimits

0x78a5,	// (0x00047231) vradio_station_info_pane_t1

0x78c7,	// (0x00047253) vradio_station_info_pane_t2_ParamLimits

0x78c7,	// (0x00047253) vradio_station_info_pane_t2

0x0001,

0xf779,	// (0x0004f105) vradio_station_info_pane_t_ParamLimits

0xf779,	// (0x0004f105) vradio_station_info_pane_t

0x78d9,	// (0x00047265) vradio_tuning_pane

0x78e1,	// (0x0004726d) vradio_rocker_control_pane_g1

0x78e9,	// (0x00047275) vradio_rocker_control_pane_g2

0x78f1,	// (0x0004727d) vradio_rocker_control_pane_g3

0x78f9,	// (0x00047285) vradio_rocker_control_pane_g4

0x7901,	// (0x0004728d) vradio_rocker_control_pane_g5

0x0004,

0xf77e,	// (0x0004f10a) vradio_rocker_control_pane_g

0x7909,	// (0x00047295) vradio_frequency_info_pane_g1

0x7913,	// (0x0004729f) vradio_frequency_info_pane_t1_ParamLimits

0x7913,	// (0x0004729f) vradio_frequency_info_pane_t1

0x7927,	// (0x000472b3) vradio_tuning_pane_g1

0x7930,	// (0x000472bc) vradio_tuning_pane_t1

0xacaa,	// (0x0004a636) area_side_right_pane_ParamLimits

0xacaa,	// (0x0004a636) area_side_right_pane

0x53a5,	// (0x00044d31) status_small_pane_g1

0x53ad,	// (0x00044d39) status_small_pane_g2

0x53b6,	// (0x00044d42) status_small_pane_g3

0x53bf,	// (0x00044d4b) status_small_pane_g4

0x0003,

0xf53e,	// (0x0004eeca) status_small_pane_g

0x53c8,	// (0x00044d54) status_small_pane_t1

0xd30f,	// (0x0004cc9b) main_video3_pane

0x793f,	// (0x000472cb) cams_zoom_vslider_pane

0x7947,	// (0x000472d3) image3_wide_pane_ParamLimits

0x7947,	// (0x000472d3) image3_wide_pane

0x7961,	// (0x000472ed) image3_wide_small_pane

0x796b,	// (0x000472f7) main_video3_pane_g1_ParamLimits

0x796b,	// (0x000472f7) main_video3_pane_g1

0x7987,	// (0x00047313) main_video3_pane_g2_ParamLimits

0x7987,	// (0x00047313) main_video3_pane_g2

0x0001,

0xf789,	// (0x0004f115) main_video3_pane_g_ParamLimits

0xf789,	// (0x0004f115) main_video3_pane_g

0x79a3,	// (0x0004732f) main_video3_pane_t1_ParamLimits

0x79a3,	// (0x0004732f) main_video3_pane_t1

0x79ce,	// (0x0004735a) main_video3_pane_t2_ParamLimits

0x79ce,	// (0x0004735a) main_video3_pane_t2

0x79f9,	// (0x00047385) main_video3_pane_t3_ParamLimits

0x79f9,	// (0x00047385) main_video3_pane_t3

0x0002,

0xf78e,	// (0x0004f11a) main_video3_pane_t_ParamLimits

0xf78e,	// (0x0004f11a) main_video3_pane_t

0x7a24,	// (0x000473b0) cams_zoom_vslider_pane_g1

0x7a2d,	// (0x000473b9) cams_zoom_vslider_pane_g2

0x0001,

0xf795,	// (0x0004f121) cams_zoom_vslider_pane_g

0x7a35,	// (0x000473c1) small_slider_vertical_pane

0x63d9,	// (0x00045d65) small_slider_vertical_pane_g1

0x63d9,	// (0x00045d65) small_slider_vertical_pane_g2

0x7a3d,	// (0x000473c9) small_slider_vertical_pane_g3

0x0002,

0xf79a,	// (0x0004f126) small_slider_vertical_pane_g

0xd30f,	// (0x0004cc9b) main_hwr_training_pane

0x7a46,	// (0x000473d2) hwr_training_instruct_pane_ParamLimits

0x7a46,	// (0x000473d2) hwr_training_instruct_pane

0x7a60,	// (0x000473ec) hwr_training_navi_pane_ParamLimits

0x7a60,	// (0x000473ec) hwr_training_navi_pane

0x7a77,	// (0x00047403) hwr_training_write_pane_ParamLimits

0x7a77,	// (0x00047403) hwr_training_write_pane

0xd30f,	// (0x0004cc9b) bg_frame_shadow_pane

0x7abf,	// (0x0004744b) hwr_training_write_pane_g1

0x7ac7,	// (0x00047453) hwr_training_write_pane_g2

0x7acf,	// (0x0004745b) hwr_training_write_pane_g3

0x7ad7,	// (0x00047463) hwr_training_write_pane_g4

0x7adf,	// (0x0004746b) hwr_training_write_pane_g5

0x7ae7,	// (0x00047473) hwr_training_write_pane_g6

0x7aef,	// (0x0004747b) hwr_training_write_pane_g7

0x0006,

0xf7a1,	// (0x0004f12d) hwr_training_write_pane_g

0xafab,	// (0x0004a937) hwr_training_navi_pane_g1_ParamLimits

0xafab,	// (0x0004a937) hwr_training_navi_pane_g1

0xafbd,	// (0x0004a949) hwr_training_navi_pane_g2_ParamLimits

0xafbd,	// (0x0004a949) hwr_training_navi_pane_g2

0xafcf,	// (0x0004a95b) hwr_training_navi_pane_g3_ParamLimits

0xafcf,	// (0x0004a95b) hwr_training_navi_pane_g3

0xafdf,	// (0x0004a96b) hwr_training_navi_pane_g4_ParamLimits

0xafdf,	// (0x0004a96b) hwr_training_navi_pane_g4

0x0004,

0xf7b0,	// (0x0004f13c) hwr_training_navi_pane_g_ParamLimits

0xf7b0,	// (0x0004f13c) hwr_training_navi_pane_g

0xafec,	// (0x0004a978) hwr_training_navi_pane_t1

0x7b04,	// (0x00047490) list_single_hwr_training_instruct_pane_ParamLimits

0x7b04,	// (0x00047490) list_single_hwr_training_instruct_pane

0x7b17,	// (0x000474a3) list_single_hwr_training_instruct_pane_t1

0x6319,	// (0x00045ca5) bg_frame_shadow_pane_g1

0x7b26,	// (0x000474b2) bg_frame_shadow_pane_g2

0x7b2e,	// (0x000474ba) bg_frame_shadow_pane_g3

0x7b36,	// (0x000474c2) bg_frame_shadow_pane_g4

0x7b3e,	// (0x000474ca) bg_frame_shadow_pane_g5

0x7b46,	// (0x000474d2) bg_frame_shadow_pane_g6

0x7b4e,	// (0x000474da) bg_frame_shadow_pane_g7

0xdc40,	// (0x0004d5cc) bg_frame_shadow_pane_g8

0x0007,

0xf7bb,	// (0x0004f147) bg_frame_shadow_pane_g

0xd30f,	// (0x0004cc9b) main_video_tele_dialer_pane

0x7b56,	// (0x000474e2) aid_size_cell_video_keypad_ParamLimits

0x7b56,	// (0x000474e2) aid_size_cell_video_keypad

0x7b70,	// (0x000474fc) grid_video_dialer_keypad_pane_ParamLimits

0x7b70,	// (0x000474fc) grid_video_dialer_keypad_pane

0x7bb2,	// (0x0004753e) video_down_pane_cp_ParamLimits

0x7bb2,	// (0x0004753e) video_down_pane_cp

0x7be2,	// (0x0004756e) cell_video_dialer_keypad_pane_ParamLimits

0x7be2,	// (0x0004756e) cell_video_dialer_keypad_pane

0x7c04,	// (0x00047590) bg_button_pane_cp08_ParamLimits

0x7c04,	// (0x00047590) bg_button_pane_cp08

0x7c10,	// (0x0004759c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7c10,	// (0x0004759c) cell_video_dialer_keypad_pane_g1

0x6d8a,	// (0x00046716) mup3_rocker2_pane_ParamLimits

0x6d8a,	// (0x00046716) mup3_rocker2_pane

0x63d9,	// (0x00045d65) mup3_rocker2_pane_g1

0x5414,	// (0x00044da0) main_dialer2_pane

0xd30f,	// (0x0004cc9b) main_mp4_pane

0xb002,	// (0x0004a98e) main_mp4_pane_g1_ParamLimits

0xb002,	// (0x0004a98e) main_mp4_pane_g1

0xb002,	// (0x0004a98e) main_mp4_pane_g2_ParamLimits

0xb002,	// (0x0004a98e) main_mp4_pane_g2

0x7c4b,	// (0x000475d7) main_mp4_pane_g3_ParamLimits

0x7c4b,	// (0x000475d7) main_mp4_pane_g3

0xb010,	// (0x0004a99c) main_mp4_pane_g4_ParamLimits

0xb010,	// (0x0004a99c) main_mp4_pane_g4

0xb038,	// (0x0004a9c4) main_mp4_pane_g5_ParamLimits

0xb038,	// (0x0004a9c4) main_mp4_pane_g5

0x0005,

0xf7db,	// (0x0004f167) main_mp4_pane_g_ParamLimits

0xf7db,	// (0x0004f167) main_mp4_pane_g

0xb088,	// (0x0004aa14) main_mp4_pane_t1_ParamLimits

0xb088,	// (0x0004aa14) main_mp4_pane_t1

0xb0e0,	// (0x0004aa6c) main_mp4_pane_t2_ParamLimits

0xb0e0,	// (0x0004aa6c) main_mp4_pane_t2

0xb132,	// (0x0004aabe) main_mp4_pane_t3_ParamLimits

0xb132,	// (0x0004aabe) main_mp4_pane_t3

0xb152,	// (0x0004aade) main_mp4_pane_t4_ParamLimits

0xb152,	// (0x0004aade) main_mp4_pane_t4

0x0003,

0xf7e8,	// (0x0004f174) main_mp4_pane_t_ParamLimits

0xf7e8,	// (0x0004f174) main_mp4_pane_t

0xb192,	// (0x0004ab1e) mp4_progress_pane_ParamLimits

0xb192,	// (0x0004ab1e) mp4_progress_pane

0xb1dc,	// (0x0004ab68) mp4_rocker_pane_ParamLimits

0xb1dc,	// (0x0004ab68) mp4_rocker_pane

0xb202,	// (0x0004ab8e) mp4_progress_pane_t1

0xb219,	// (0x0004aba5) mp4_progress_pane_t2

0x0001,

0xf7f1,	// (0x0004f17d) mp4_progress_pane_t

0xb230,	// (0x0004abbc) mup_progress_pane_cp04

0x63d9,	// (0x00045d65) mp4_rocker_pane_g1

0x7c7b,	// (0x00047607) aid_cell_size_keypad2_ParamLimits

0x7c7b,	// (0x00047607) aid_cell_size_keypad2

0x7c91,	// (0x0004761d) dialer2_ne_pane_ParamLimits

0x7c91,	// (0x0004761d) dialer2_ne_pane

0x7ca5,	// (0x00047631) grid_dialer2_keypad_pane_ParamLimits

0x7ca5,	// (0x00047631) grid_dialer2_keypad_pane

0x610c,	// (0x00045a98) bg_popup_call_pane_cp07_ParamLimits

0x610c,	// (0x00045a98) bg_popup_call_pane_cp07

0x7cbb,	// (0x00047647) dialer2_ne_pane_t1_ParamLimits

0x7cbb,	// (0x00047647) dialer2_ne_pane_t1

0x7cf5,	// (0x00047681) cell_dialer2_keypad_pane_ParamLimits

0x7cf5,	// (0x00047681) cell_dialer2_keypad_pane

0xb24e,	// (0x0004abda) bg_button_pane_pane_cp04_ParamLimits

0xb24e,	// (0x0004abda) bg_button_pane_pane_cp04

0x7d17,	// (0x000476a3) cell_dialer2_keypad_pane_g1_ParamLimits

0x7d17,	// (0x000476a3) cell_dialer2_keypad_pane_g1

0x2bd9,	// (0x00042565) aid_placing_vt_set_content_ParamLimits

0x2bd9,	// (0x00042565) aid_placing_vt_set_content

0x2bfb,	// (0x00042587) aid_placing_vt_set_title_ParamLimits

0x2bfb,	// (0x00042587) aid_placing_vt_set_title

0xd30f,	// (0x0004cc9b) main_image3_pane

0x7dc3,	// (0x0004774f) area_side_right_pane_cp01_ParamLimits

0x7dc3,	// (0x0004774f) area_side_right_pane_cp01

0xb002,	// (0x0004a98e) main_image3_pane_g1_ParamLimits

0xb002,	// (0x0004a98e) main_image3_pane_g1

0x7dda,	// (0x00047766) main_image3_pane_g2_ParamLimits

0x7dda,	// (0x00047766) main_image3_pane_g2

0x7e00,	// (0x0004778c) main_image3_pane_g3_ParamLimits

0x7e00,	// (0x0004778c) main_image3_pane_g3

0x7e26,	// (0x000477b2) main_image3_pane_g4_ParamLimits

0x7e26,	// (0x000477b2) main_image3_pane_g4

0x0003,

0xf800,	// (0x0004f18c) main_image3_pane_g_ParamLimits

0xf800,	// (0x0004f18c) main_image3_pane_g

0x7e4c,	// (0x000477d8) main_image3_pane_t1_ParamLimits

0x7e4c,	// (0x000477d8) main_image3_pane_t1

0x7ea4,	// (0x00047830) main_image3_pane_t2_ParamLimits

0x7ea4,	// (0x00047830) main_image3_pane_t2

0x7ef6,	// (0x00047882) main_image3_pane_t3_ParamLimits

0x7ef6,	// (0x00047882) main_image3_pane_t3

0x0003,

0xf809,	// (0x0004f195) main_image3_pane_t_ParamLimits

0xf809,	// (0x0004f195) main_image3_pane_t

0xefdc,	// (0x0004e968) grid_sctrl_middle_pane_cp01_ParamLimits

0xefdc,	// (0x0004e968) grid_sctrl_middle_pane_cp01

0x7f76,	// (0x00047902) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f76,	// (0x00047902) cell_sctrl_middle_pane_cp01

0x7f93,	// (0x0004791f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7f93,	// (0x0004791f) cell_sctrl_middle_pane_cp01_g1

0xd30f,	// (0x0004cc9b) main_call4_pane

0x7fa9,	// (0x00047935) aid_size_button_call4_ParamLimits

0x7fa9,	// (0x00047935) aid_size_button_call4

0x7fd8,	// (0x00047964) call4_windows_pane_ParamLimits

0x7fd8,	// (0x00047964) call4_windows_pane

0x7ff4,	// (0x00047980) grid_call4_button_pane_ParamLimits

0x7ff4,	// (0x00047980) grid_call4_button_pane

0xb28c,	// (0x0004ac18) call4_windows_conf_pane

0x8013,	// (0x0004799f) popup_call4_audio_first_window_ParamLimits

0x8013,	// (0x0004799f) popup_call4_audio_first_window

0x8033,	// (0x000479bf) popup_call4_audio_second_window_ParamLimits

0x8033,	// (0x000479bf) popup_call4_audio_second_window

0xb2bf,	// (0x0004ac4b) popup_call4_audio_wait_window_ParamLimits

0xb2bf,	// (0x0004ac4b) popup_call4_audio_wait_window

0x8045,	// (0x000479d1) cell_call4_button_pane_ParamLimits

0x8045,	// (0x000479d1) cell_call4_button_pane

0x806a,	// (0x000479f6) bg_button_pane_cp09_ParamLimits

0x806a,	// (0x000479f6) bg_button_pane_cp09

0x8076,	// (0x00047a02) cell_call4_button_pane_g1_ParamLimits

0x8076,	// (0x00047a02) cell_call4_button_pane_g1

0x809c,	// (0x00047a28) cell_call4_button_pane_t1_ParamLimits

0x809c,	// (0x00047a28) cell_call4_button_pane_t1

0xb305,	// (0x0004ac91) popup_call4_audio_conf_window_ParamLimits

0xb305,	// (0x0004ac91) popup_call4_audio_conf_window

0x6dec,	// (0x00046778) mup3_progress_pane_t1_ParamLimits

0x6e0a,	// (0x00046796) mup3_progress_pane_t2_ParamLimits

0x6e28,	// (0x000467b4) mup3_progress_pane_t3_ParamLimits

0xf6e2,	// (0x0004f06e) mup3_progress_pane_t_ParamLimits

0x6e45,	// (0x000467d1) mup_progress_pane_cp03_ParamLimits

0x76ad,	// (0x00047039) mup3_control_keys_pane_g4_copy1

0xb1c0,	// (0x0004ab4c) mp4_rocker2_pane_ParamLimits

0xb1c0,	// (0x0004ab4c) mp4_rocker2_pane

0xb319,	// (0x0004aca5) mp4_rocker2_pane_g1

0xb321,	// (0x0004acad) mp4_rocker2_pane_g2

0xb329,	// (0x0004acb5) mp4_rocker2_pane_g3

0xb331,	// (0x0004acbd) mp4_rocker2_pane_g4

0xb339,	// (0x0004acc5) mp4_rocker2_pane_g5

0x0004,

0xf812,	// (0x0004f19e) mp4_rocker2_pane_g

0xd30f,	// (0x0004cc9b) main_camera4_pane

0xd30f,	// (0x0004cc9b) main_video4_pane

0x7b84,	// (0x00047510) main_video_tele_dialer_pane_t1_ParamLimits

0x7b84,	// (0x00047510) main_video_tele_dialer_pane_t1

0x7b9b,	// (0x00047527) main_video_tele_dialer_pane_t2_ParamLimits

0x7b9b,	// (0x00047527) main_video_tele_dialer_pane_t2

0x0001,

0xf7cc,	// (0x0004f158) main_video_tele_dialer_pane_t_ParamLimits

0xf7cc,	// (0x0004f158) main_video_tele_dialer_pane_t

0x80da,	// (0x00047a66) cam4_autofocus_pane_ParamLimits

0x80da,	// (0x00047a66) cam4_autofocus_pane

0x80ee,	// (0x00047a7a) cam4_image_uncrop_pane_ParamLimits

0x80ee,	// (0x00047a7a) cam4_image_uncrop_pane

0x8105,	// (0x00047a91) cam4_indicators_pane_ParamLimits

0x8105,	// (0x00047a91) cam4_indicators_pane

0x812a,	// (0x00047ab6) main_camera4_pane_g1_ParamLimits

0x812a,	// (0x00047ab6) main_camera4_pane_g1

0x813c,	// (0x00047ac8) main_camera4_pane_g2_ParamLimits

0x813c,	// (0x00047ac8) main_camera4_pane_g2

0x814f,	// (0x00047adb) main_camera4_pane_g3_ParamLimits

0x814f,	// (0x00047adb) main_camera4_pane_g3

0x8162,	// (0x00047aee) main_camera4_pane_g4_ParamLimits

0x8162,	// (0x00047aee) main_camera4_pane_g4

0x8175,	// (0x00047b01) main_camera4_pane_g5_ParamLimits

0x8175,	// (0x00047b01) main_camera4_pane_g5

0x0005,

0xf81d,	// (0x0004f1a9) main_camera4_pane_g_ParamLimits

0xf81d,	// (0x0004f1a9) main_camera4_pane_g

0x8199,	// (0x00047b25) main_camera4_pane_t1_ParamLimits

0x8199,	// (0x00047b25) main_camera4_pane_t1

0x66a4,	// (0x00046030) bg_tb_trans_pane_cp06

0xb375,	// (0x0004ad01) cam4_indicators_pane_g1

0xb386,	// (0x0004ad12) cam4_indicators_pane_g2

0x0002,

0xf838,	// (0x0004f1c4) cam4_indicators_pane_g

0xb39e,	// (0x0004ad2a) cam4_indicators_pane_t1

0x81f1,	// (0x00047b7d) main_video4_pane_g1_ParamLimits

0x81f1,	// (0x00047b7d) main_video4_pane_g1

0x8200,	// (0x00047b8c) main_video4_pane_g2_ParamLimits

0x8200,	// (0x00047b8c) main_video4_pane_g2

0x820f,	// (0x00047b9b) main_video4_pane_g3_ParamLimits

0x820f,	// (0x00047b9b) main_video4_pane_g3

0x821e,	// (0x00047baa) main_video4_pane_g4_ParamLimits

0x821e,	// (0x00047baa) main_video4_pane_g4

0x0004,

0xf83f,	// (0x0004f1cb) main_video4_pane_g_ParamLimits

0xf83f,	// (0x0004f1cb) main_video4_pane_g

0x823c,	// (0x00047bc8) vid4_indicators_pane_ParamLimits

0x823c,	// (0x00047bc8) vid4_indicators_pane

0x8264,	// (0x00047bf0) video4_image_uncrop_cif_pane_ParamLimits

0x8264,	// (0x00047bf0) video4_image_uncrop_cif_pane

0x827c,	// (0x00047c08) video4_image_uncrop_nhd_pane_ParamLimits

0x827c,	// (0x00047c08) video4_image_uncrop_nhd_pane

0x80ee,	// (0x00047a7a) video4_image_uncrop_vga_pane_ParamLimits

0x80ee,	// (0x00047a7a) video4_image_uncrop_vga_pane

0xefdc,	// (0x0004e968) bg_tb_trans_pane_cp07

0xb3c8,	// (0x0004ad54) vid4_indicators_pane_g1

0xb3dc,	// (0x0004ad68) vid4_indicators_pane_g2

0xb3f0,	// (0x0004ad7c) vid4_indicators_pane_g3

0x0004,

0xf84a,	// (0x0004f1d6) vid4_indicators_pane_g

0xb41d,	// (0x0004ada9) vid4_indicators_pane_t1

0x8290,	// (0x00047c1c) cam4_autofocus_pane_g1

0x8298,	// (0x00047c24) cam4_autofocus_pane_g2

0x82a0,	// (0x00047c2c) cam4_autofocus_pane_g3

0x0002,

0xf855,	// (0x0004f1e1) cam4_autofocus_pane_g

0x82a8,	// (0x00047c34) cam4_autofocus_pane_g3_copy1

0x7bc6,	// (0x00047552) video_down_pane_cp_t1

0x7bd4,	// (0x00047560) video_down_pane_cp_t2

0x0001,

0xf7d1,	// (0x0004f15d) video_down_pane_cp_t

0xefdc,	// (0x0004e968) popup_vitu2_window_ParamLimits

0xefdc,	// (0x0004e968) popup_vitu2_window

0x82b0,	// (0x00047c3c) aid_size_cell2_itu2_ParamLimits

0x82b0,	// (0x00047c3c) aid_size_cell2_itu2

0x82d6,	// (0x00047c62) aid_size_cell_itu2_ParamLimits

0x82d6,	// (0x00047c62) aid_size_cell_itu2

0x8327,	// (0x00047cb3) bg_popup_window_pane_cp09_ParamLimits

0x8327,	// (0x00047cb3) bg_popup_window_pane_cp09

0x8335,	// (0x00047cc1) field_vitu2_entry_pane_ParamLimits

0x8335,	// (0x00047cc1) field_vitu2_entry_pane

0x834c,	// (0x00047cd8) grid_vitu2_function_pane_ParamLimits

0x834c,	// (0x00047cd8) grid_vitu2_function_pane

0x8381,	// (0x00047d0d) grid_vitu2_itu_pane_ParamLimits

0x8381,	// (0x00047d0d) grid_vitu2_itu_pane

0x83e8,	// (0x00047d74) cell_vitu2_itu_pane_ParamLimits

0x83e8,	// (0x00047d74) cell_vitu2_itu_pane

0x8410,	// (0x00047d9c) cell_vitu2_function_pane_ParamLimits

0x8410,	// (0x00047d9c) cell_vitu2_function_pane

0xb434,	// (0x0004adc0) bg_popup_call_pane_cp08_ParamLimits

0xb434,	// (0x0004adc0) bg_popup_call_pane_cp08

0xb44b,	// (0x0004add7) field_vitu2_entry_pane_g1

0xb457,	// (0x0004ade3) field_vitu2_entry_pane_g2

0x0002,

0xf85c,	// (0x0004f1e8) field_vitu2_entry_pane_g

0x1087,	// (0x00040a13) field_vitu2_entry_pane_t1_ParamLimits

0x1087,	// (0x00040a13) field_vitu2_entry_pane_t1

0xb471,	// (0x0004adfd) field_vitu2_entry_pane_t2_ParamLimits

0xb471,	// (0x0004adfd) field_vitu2_entry_pane_t2

0x0001,

0xf863,	// (0x0004f1ef) field_vitu2_entry_pane_t_ParamLimits

0xf863,	// (0x0004f1ef) field_vitu2_entry_pane_t

0x844f,	// (0x00047ddb) bg_button_pane_cp010_ParamLimits

0x844f,	// (0x00047ddb) bg_button_pane_cp010

0xd3a4,	// (0x0004cd30) cell_vitu2_itu_pane_g1

0x846b,	// (0x00047df7) cell_vitu2_itu_pane_t1_ParamLimits

0x846b,	// (0x00047df7) cell_vitu2_itu_pane_t1

0x10b4,	// (0x00040a40) cell_vitu2_itu_pane_t2_ParamLimits

0x10b4,	// (0x00040a40) cell_vitu2_itu_pane_t2

0x0002,

0xf86d,	// (0x0004f1f9) cell_vitu2_itu_pane_t_ParamLimits

0xf86d,	// (0x0004f1f9) cell_vitu2_itu_pane_t

0xefdc,	// (0x0004e968) bg_button_pane_cp011

0x84c9,	// (0x00047e55) cell_vitu2_function_pane_g1

0xd30f,	// (0x0004cc9b) main_myfav_hc_pane

0x7f42,	// (0x000478ce) popup_image3_note_pane_ParamLimits

0x7f42,	// (0x000478ce) popup_image3_note_pane

0x7f5c,	// (0x000478e8) popup_image3_tool_bar_pane_ParamLimits

0x7f5c,	// (0x000478e8) popup_image3_tool_bar_pane

0x1142,	// (0x00040ace) cell_vitu2_itu_pane_t3_ParamLimits

0x1142,	// (0x00040ace) cell_vitu2_itu_pane_t3

0xd30f,	// (0x0004cc9b) bg_popup_trans_pane

0xb496,	// (0x0004ae22) grid_image3_tool_bar_pane

0xb4a0,	// (0x0004ae2c) bg_popup_trans_pane_g1

0xdf8c,	// (0x0004d918) bg_popup_trans_pane_g2

0xb4a8,	// (0x0004ae34) bg_popup_trans_pane_g3

0xb4b0,	// (0x0004ae3c) bg_popup_trans_pane_g4

0xb4b8,	// (0x0004ae44) bg_popup_trans_pane_g5

0xb4c0,	// (0x0004ae4c) bg_popup_trans_pane_g6

0xb4c8,	// (0x0004ae54) bg_popup_trans_pane_g7

0xb4d0,	// (0x0004ae5c) bg_popup_trans_pane_g8

0xdf6c,	// (0x0004d8f8) bg_popup_trans_pane_g9

0x0008,

0xf874,	// (0x0004f200) bg_popup_trans_pane_g

0xb4d8,	// (0x0004ae64) cell_image3_tool_bar_pane_ParamLimits

0xb4d8,	// (0x0004ae64) cell_image3_tool_bar_pane

0x63d9,	// (0x00045d65) cell_image3_tool_bar_pane_g1

0xd30f,	// (0x0004cc9b) bg_popup_trans_pane_cp1

0xb4ec,	// (0x0004ae78) popup_image3_note_pane_t1

0xb4fa,	// (0x0004ae86) popup_image3_note_pane_t2

0xb508,	// (0x0004ae94) popup_image3_note_pane_t3

0x0002,

0xf887,	// (0x0004f213) popup_image3_note_pane_t

0xb516,	// (0x0004aea2) popup_image3_note_pane_t3_copy1

0x84dc,	// (0x00047e68) bg_myfav_hc_instruction_pane_ParamLimits

0x84dc,	// (0x00047e68) bg_myfav_hc_instruction_pane

0x84ee,	// (0x00047e7a) cell_myfav_contact_pane_ParamLimits

0x84ee,	// (0x00047e7a) cell_myfav_contact_pane

0x8508,	// (0x00047e94) cell_myfav_contact_pane_cp1_ParamLimits

0x8508,	// (0x00047e94) cell_myfav_contact_pane_cp1

0x851e,	// (0x00047eaa) cell_myfav_contact_pane_cp2_ParamLimits

0x851e,	// (0x00047eaa) cell_myfav_contact_pane_cp2

0x8534,	// (0x00047ec0) cell_myfav_contact_pane_cp3_ParamLimits

0x8534,	// (0x00047ec0) cell_myfav_contact_pane_cp3

0x8549,	// (0x00047ed5) cell_myfav_contact_pane_cp4_ParamLimits

0x8549,	// (0x00047ed5) cell_myfav_contact_pane_cp4

0x855d,	// (0x00047ee9) cell_myfav_contact_pane_cp5_ParamLimits

0x855d,	// (0x00047ee9) cell_myfav_contact_pane_cp5

0x8571,	// (0x00047efd) cell_myfav_contact_pane_cp6_ParamLimits

0x8571,	// (0x00047efd) cell_myfav_contact_pane_cp6

0x8585,	// (0x00047f11) cell_myfav_contact_pane_cp7_ParamLimits

0x8585,	// (0x00047f11) cell_myfav_contact_pane_cp7

0xb524,	// (0x0004aeb0) listscroll_gen_pane_cp05

0x859d,	// (0x00047f29) main_myfav_hc_pane_g1_ParamLimits

0x859d,	// (0x00047f29) main_myfav_hc_pane_g1

0x85b3,	// (0x00047f3f) main_myfav_hc_pane_g2_ParamLimits

0x85b3,	// (0x00047f3f) main_myfav_hc_pane_g2

0x0002,

0xf88e,	// (0x0004f21a) main_myfav_hc_pane_g_ParamLimits

0xf88e,	// (0x0004f21a) main_myfav_hc_pane_g

0x85dd,	// (0x00047f69) main_myfav_hc_pane_t1_ParamLimits

0x85dd,	// (0x00047f69) main_myfav_hc_pane_t1

0xb52d,	// (0x0004aeb9) main_myfav_hc_pane_t2_ParamLimits

0xb52d,	// (0x0004aeb9) main_myfav_hc_pane_t2

0xb53f,	// (0x0004aecb) main_myfav_hc_pane_t3_ParamLimits

0xb53f,	// (0x0004aecb) main_myfav_hc_pane_t3

0x85f2,	// (0x00047f7e) main_myfav_hc_pane_t4_ParamLimits

0x85f2,	// (0x00047f7e) main_myfav_hc_pane_t4

0x0004,

0xf895,	// (0x0004f221) main_myfav_hc_pane_t_ParamLimits

0xf895,	// (0x0004f221) main_myfav_hc_pane_t

0x63d9,	// (0x00045d65) bg_myfav_hc_instruction_pane_g1

0xb551,	// (0x0004aedd) cell_myfav_contact_pane_g1_ParamLimits

0xb551,	// (0x0004aedd) cell_myfav_contact_pane_g1

0xb551,	// (0x0004aedd) cell_myfav_contact_pane_g2_ParamLimits

0xb551,	// (0x0004aedd) cell_myfav_contact_pane_g2

0xb55d,	// (0x0004aee9) cell_myfav_contact_pane_g3_ParamLimits

0xb55d,	// (0x0004aee9) cell_myfav_contact_pane_g3

0x69eb,	// (0x00046377) cell_myfav_contact_pane_g4_ParamLimits

0x69eb,	// (0x00046377) cell_myfav_contact_pane_g4

0xb56a,	// (0x0004aef6) cell_myfav_contact_pane_g5_ParamLimits

0xb56a,	// (0x0004aef6) cell_myfav_contact_pane_g5

0x0004,

0xf8a0,	// (0x0004f22c) cell_myfav_contact_pane_g_ParamLimits

0xf8a0,	// (0x0004f22c) cell_myfav_contact_pane_g

0x85c9,	// (0x00047f55) main_myfav_hc_pane_g3_ParamLimits

0x85c9,	// (0x00047f55) main_myfav_hc_pane_g3

0x1d81,	// (0x0004170d) popup_adpt_find_window

0x8616,	// (0x00047fa2) afind_page_pane_ParamLimits

0x8616,	// (0x00047fa2) afind_page_pane

0x862b,	// (0x00047fb7) aid_size_cell_afind_ParamLimits

0x862b,	// (0x00047fb7) aid_size_cell_afind

0x8649,	// (0x00047fd5) bg_popup_sub_pane_cp09_ParamLimits

0x8649,	// (0x00047fd5) bg_popup_sub_pane_cp09

0x8656,	// (0x00047fe2) find_pane_cp01_ParamLimits

0x8656,	// (0x00047fe2) find_pane_cp01

0xb576,	// (0x0004af02) grid_afind_control_pane_ParamLimits

0xb576,	// (0x0004af02) grid_afind_control_pane

0x8663,	// (0x00047fef) grid_afind_pane_ParamLimits

0x8663,	// (0x00047fef) grid_afind_pane

0x8681,	// (0x0004800d) cell_afind_pane_ParamLimits

0x8681,	// (0x0004800d) cell_afind_pane

0x63d9,	// (0x00045d65) afind_page_pane_g1

0x86d0,	// (0x0004805c) afind_page_pane_g2

0x86d9,	// (0x00048065) afind_page_pane_g3

0x0002,

0xf8ab,	// (0x0004f237) afind_page_pane_g

0x86e2,	// (0x0004806e) afind_page_pane_t1

0xb58a,	// (0x0004af16) cell_afind_grid_control_pane_ParamLimits

0xb58a,	// (0x0004af16) cell_afind_grid_control_pane

0xb24e,	// (0x0004abda) bg_button_pane_cp69_ParamLimits

0xb24e,	// (0x0004abda) bg_button_pane_cp69

0x8702,	// (0x0004808e) cell_afind_pane_g1_ParamLimits

0x8702,	// (0x0004808e) cell_afind_pane_g1

0x870f,	// (0x0004809b) cell_afind_pane_t1_ParamLimits

0x870f,	// (0x0004809b) cell_afind_pane_t1

0xdd78,	// (0x0004d704) bg_button_pane_cp72

0xb599,	// (0x0004af25) cell_afind_grid_control_pane_g1

0x4505,	// (0x00043e91) aid_image_placing_area_ParamLimits

0x4505,	// (0x00043e91) aid_image_placing_area

0x7744,	// (0x000470d0) field_vitu_entry_pane_g1_ParamLimits

0x7744,	// (0x000470d0) field_vitu_entry_pane_g1

0x7750,	// (0x000470dc) field_vitu_entry_pane_g2_ParamLimits

0x7750,	// (0x000470dc) field_vitu_entry_pane_g2

0x0001,

0xf75c,	// (0x0004f0e8) field_vitu_entry_pane_g_ParamLimits

0xf75c,	// (0x0004f0e8) field_vitu_entry_pane_g

0x77a3,	// (0x0004712f) cell_vitu_itu_pane_g1_ParamLimits

0x77e5,	// (0x00047171) cell_vitu_itu_pane_t3_ParamLimits

0x77e5,	// (0x00047171) cell_vitu_itu_pane_t3

0xb202,	// (0x0004ab8e) mp4_progress_pane_t1_ParamLimits

0xb219,	// (0x0004aba5) mp4_progress_pane_t2_ParamLimits

0xf7f1,	// (0x0004f17d) mp4_progress_pane_t_ParamLimits

0xb230,	// (0x0004abbc) mup_progress_pane_cp04_ParamLimits

0x8604,	// (0x00047f90) main_myfav_hc_pane_t5_ParamLimits

0x8604,	// (0x00047f90) main_myfav_hc_pane_t5

0xac9a,	// (0x0004a626) aid_zoom_text_primary

0x1d81,	// (0x0004170d) popup_adpt_find_window_ParamLimits

0xefdc,	// (0x0004e968) main_cam_set_pane

0x8118,	// (0x00047aa4) cam4_zoom_pane_ParamLimits

0x8118,	// (0x00047aa4) cam4_zoom_pane

0x8721,	// (0x000480ad) main_cam_set_pane_g1_ParamLimits

0x8721,	// (0x000480ad) main_cam_set_pane_g1

0x872f,	// (0x000480bb) main_cam_set_pane_g2_ParamLimits

0x872f,	// (0x000480bb) main_cam_set_pane_g2

0x0001,

0xf8b2,	// (0x0004f23e) main_cam_set_pane_g_ParamLimits

0xf8b2,	// (0x0004f23e) main_cam_set_pane_g

0x8750,	// (0x000480dc) main_cam_set_pane_t1_ParamLimits

0x8750,	// (0x000480dc) main_cam_set_pane_t1

0x876b,	// (0x000480f7) main_cset_listscroll_pane_ParamLimits

0x876b,	// (0x000480f7) main_cset_listscroll_pane

0x8789,	// (0x00048115) main_cset_slider_pane_ParamLimits

0x8789,	// (0x00048115) main_cset_slider_pane

0xb5aa,	// (0x0004af36) main_cset_list_pane_ParamLimits

0xb5aa,	// (0x0004af36) main_cset_list_pane

0xb5ba,	// (0x0004af46) scroll_pane_cp028

0x87ad,	// (0x00048139) aid_area_touch_slider

0xb5c3,	// (0x0004af4f) cset_slider_pane

0x87c9,	// (0x00048155) main_cset_slider_pane_g1

0x87de,	// (0x0004816a) main_cset_slider_pane_g2

0x0011,

0xf8b7,	// (0x0004f243) main_cset_slider_pane_g

0xb635,	// (0x0004afc1) main_cset_slider_pane_t1

0x8882,	// (0x0004820e) main_cset_slider_pane_t2

0x889c,	// (0x00048228) main_cset_slider_pane_t3

0x88b6,	// (0x00048242) main_cset_slider_pane_t4

0x88d0,	// (0x0004825c) main_cset_slider_pane_t5

0x88ea,	// (0x00048276) main_cset_slider_pane_t6

0x88ff,	// (0x0004828b) main_cset_slider_pane_t7

0x000e,

0xf8dc,	// (0x0004f268) main_cset_slider_pane_t

0x8a03,	// (0x0004838f) cset_list_set_pane_ParamLimits

0x8a03,	// (0x0004838f) cset_list_set_pane

0x8a14,	// (0x000483a0) aid_position_infowindow_above

0x8a1c,	// (0x000483a8) aid_position_infowindow_below

0x11a0,	// (0x00040b2c) cset_list_set_pane_g1_ParamLimits

0x11a0,	// (0x00040b2c) cset_list_set_pane_g1

0x11ac,	// (0x00040b38) cset_list_set_pane_g3_ParamLimits

0x11ac,	// (0x00040b38) cset_list_set_pane_g3

0x0001,

0xf8fb,	// (0x0004f287) cset_list_set_pane_g_ParamLimits

0xf8fb,	// (0x0004f287) cset_list_set_pane_g

0x11bb,	// (0x00040b47) cset_list_set_pane_t1_ParamLimits

0x11bb,	// (0x00040b47) cset_list_set_pane_t1

0xefdc,	// (0x0004e968) list_highlight_pane_cp021_ParamLimits

0xefdc,	// (0x0004e968) list_highlight_pane_cp021

0xe863,	// (0x0004e1ef) cset_slider_pane_g1

0xe875,	// (0x0004e201) cset_slider_pane_g2

0xe86c,	// (0x0004e1f8) cset_slider_pane_g3

0x0002,

0x07ac,	// (0x00040138) cset_slider_pane_g

0xd3b6,	// (0x0004cd42) aid_area_touch_cam4_zoom

0xd3be,	// (0x0004cd4a) cam4_zoom_cont_pane

0xd3c6,	// (0x0004cd52) cam4_zoom_pane_g1

0xd3ce,	// (0x0004cd5a) cam4_zoom_pane_g2

0x8a24,	// (0x000483b0) cam4_zoom_pane_g3

0x0002,

0xf900,	// (0x0004f28c) cam4_zoom_pane_g

0xb6d5,	// (0x0004b061) cam4_zoom_cont_pane_g1

0xb6de,	// (0x0004b06a) cam4_zoom_cont_pane_g2

0xb6e7,	// (0x0004b073) cam4_zoom_cont_pane_g3

0x0002,

0xf907,	// (0x0004f293) cam4_zoom_cont_pane_g

0x7fc7,	// (0x00047953) call4_image_pane_ParamLimits

0x7fc7,	// (0x00047953) call4_image_pane

0xb28c,	// (0x0004ac18) call4_windows_conf_pane_ParamLimits

0xb29f,	// (0x0004ac2b) popup_call4_audio_in_window_ParamLimits

0xb29f,	// (0x0004ac2b) popup_call4_audio_in_window

0xd30f,	// (0x0004cc9b) bg_popup_call2_act_pane_cp02

0xb2fd,	// (0x0004ac89) call4_list_conf_pane

0x63d9,	// (0x00045d65) call4_image_pane_g1

0x63d9,	// (0x00045d65) call4_image_pane_g2

0x0001,

0xf622,	// (0x0004efae) call4_image_pane_g

0xb6f0,	// (0x0004b07c) list_single_graphic_popup_conf4_pane_ParamLimits

0xb6f0,	// (0x0004b07c) list_single_graphic_popup_conf4_pane

0xd30f,	// (0x0004cc9b) list_highlight_pane_cp022

0xb703,	// (0x0004b08f) list_single_graphic_popup_conf4_pane_g1

0xe4aa,	// (0x0004de36) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf90e,	// (0x0004f29a) list_single_graphic_popup_conf4_pane_g

0xb70b,	// (0x0004b097) list_single_graphic_popup_conf4_pane_t1

0x2d02,	// (0x0004268e) popup_vtel_slider_window_ParamLimits

0x2d02,	// (0x0004268e) popup_vtel_slider_window

0xb23c,	// (0x0004abc8) dialer2_ne_pane_t2_ParamLimits

0xb23c,	// (0x0004abc8) dialer2_ne_pane_t2

0x0001,

0xf7f6,	// (0x0004f182) dialer2_ne_pane_t_ParamLimits

0xf7f6,	// (0x0004f182) dialer2_ne_pane_t

0x610c,	// (0x00045a98) bg_popup_sub_pane_cp010_ParamLimits

0x610c,	// (0x00045a98) bg_popup_sub_pane_cp010

0x8a2c,	// (0x000483b8) popup_vtel_slider_window_g1_ParamLimits

0x8a2c,	// (0x000483b8) popup_vtel_slider_window_g1

0x8a3f,	// (0x000483cb) popup_vtel_slider_window_g2_ParamLimits

0x8a3f,	// (0x000483cb) popup_vtel_slider_window_g2

0x0003,

0xf913,	// (0x0004f29f) popup_vtel_slider_window_g_ParamLimits

0xf913,	// (0x0004f29f) popup_vtel_slider_window_g

0x8a93,	// (0x0004841f) vtel_slider_pane_ParamLimits

0x8a93,	// (0x0004841f) vtel_slider_pane

0x8ab5,	// (0x00048441) vtel_slider_pane_g1_ParamLimits

0x8ab5,	// (0x00048441) vtel_slider_pane_g1

0x8ac9,	// (0x00048455) vtel_slider_pane_g2_ParamLimits

0x8ac9,	// (0x00048455) vtel_slider_pane_g2

0x8ae1,	// (0x0004846d) vtel_slider_pane_g3_ParamLimits

0x8ae1,	// (0x0004846d) vtel_slider_pane_g3

0x8ab5,	// (0x00048441) vtel_slider_pane_g4_ParamLimits

0x8ab5,	// (0x00048441) vtel_slider_pane_g4

0x8af7,	// (0x00048483) vtel_slider_pane_g5_ParamLimits

0x8af7,	// (0x00048483) vtel_slider_pane_g5

0x0004,

0xf91c,	// (0x0004f2a8) vtel_slider_pane_g_ParamLimits

0xf91c,	// (0x0004f2a8) vtel_slider_pane_g

0xefdc,	// (0x0004e968) main_gallery2_pane

0x8302,	// (0x00047c8e) aid_size_row_itut2_dropdow_list_ParamLimits

0x8302,	// (0x00047c8e) aid_size_row_itut2_dropdow_list

0x8365,	// (0x00047cf1) grid_vitu2_function_top_pane_ParamLimits

0x8365,	// (0x00047cf1) grid_vitu2_function_top_pane

0x83aa,	// (0x00047d36) popup_vitu2_dropdown_list_window_ParamLimits

0x83aa,	// (0x00047d36) popup_vitu2_dropdown_list_window

0x83c6,	// (0x00047d52) popup_vitu2_match_list_window

0x8b0d,	// (0x00048499) cell_vitu2_function_top_pane_ParamLimits

0x8b0d,	// (0x00048499) cell_vitu2_function_top_pane

0x8b25,	// (0x000484b1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8b25,	// (0x000484b1) cell_vitu2_function_top_pane_cp01

0x8b41,	// (0x000484cd) cell_vitu2_function_top_wide_pane_ParamLimits

0x8b41,	// (0x000484cd) cell_vitu2_function_top_wide_pane

0xefdc,	// (0x0004e968) bg_button_pane_cp012

0x8b5d,	// (0x000484e9) cell_vitu2_function_top_pane_g1

0xd3d6,	// (0x0004cd62) bg_button_pane_cp013_ParamLimits

0xd3d6,	// (0x0004cd62) bg_button_pane_cp013

0x8b71,	// (0x000484fd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8b71,	// (0x000484fd) cell_vitu2_function_top_wide_pane_g1

0xefdc,	// (0x0004e968) bg_popup_sub_pane_cp20

0x8b89,	// (0x00048515) list_vitu2_match_list_pane

0xb4a0,	// (0x0004ae2c) bg_popup_sub_pane_cp20_g1

0xb4a8,	// (0x0004ae34) bg_popup_sub_pane_cp20_g2

0xdf8c,	// (0x0004d918) bg_popup_sub_pane_cp20_g3

0xb4b0,	// (0x0004ae3c) bg_popup_sub_pane_cp20_g4

0xdf6c,	// (0x0004d8f8) bg_popup_sub_pane_cp20_g5

0xb721,	// (0x0004b0ad) bg_popup_sub_pane_cp20_g6

0xb4c0,	// (0x0004ae4c) bg_popup_sub_pane_cp20_g7

0xb4c8,	// (0x0004ae54) bg_popup_sub_pane_cp20_g8

0xb4d0,	// (0x0004ae5c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf927,	// (0x0004f2b3) bg_popup_sub_pane_cp20_g

0xd3f2,	// (0x0004cd7e) list_vitu2_match_list_item_pane_ParamLimits

0xd3f2,	// (0x0004cd7e) list_vitu2_match_list_item_pane

0xd404,	// (0x0004cd90) list_vitu2_match_list_item_pane_t1

0xd30f,	// (0x0004cc9b) bg_popup_sub_pane_cp21

0xe3da,	// (0x0004dd66) grid_vitu2_dropdown_list_pane

0x8ba7,	// (0x00048533) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8ba7,	// (0x00048533) cell_vitu2_dropdown_list_char_pane

0x8bc8,	// (0x00048554) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8bc8,	// (0x00048554) cell_vitu2_dropdown_list_ctrl_pane

0xb729,	// (0x0004b0b5) cell_vitu2_dropdown_list_char_pane_g1

0xb732,	// (0x0004b0be) cell_vitu2_dropdown_list_char_pane_g2

0xb73b,	// (0x0004b0c7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf944,	// (0x0004f2d0) cell_vitu2_dropdown_list_char_pane_g

0x8bf4,	// (0x00048580) cell_vitu2_dropdown_list_char_pane_t1

0x8c02,	// (0x0004858e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8c02,	// (0x0004858e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8c0f,	// (0x0004859b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8c0f,	// (0x0004859b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8c1c,	// (0x000485a8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8c1c,	// (0x000485a8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8c29,	// (0x000485b5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8c29,	// (0x000485b5) cell_vitu2_dropdown_list_ctrl_pane_g4

0x66a4,	// (0x00046030) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x66a4,	// (0x00046030) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94b,	// (0x0004f2d7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94b,	// (0x0004f2d7) cell_vitu2_dropdown_list_ctrl_pane_g

0x8c45,	// (0x000485d1) aid_size_cell_gallery2_ParamLimits

0x8c45,	// (0x000485d1) aid_size_cell_gallery2

0x8c63,	// (0x000485ef) grid_gallery2_pane_ParamLimits

0x8c63,	// (0x000485ef) grid_gallery2_pane

0x8c75,	// (0x00048601) scroll_pane_cp029_ParamLimits

0x8c75,	// (0x00048601) scroll_pane_cp029

0x8c81,	// (0x0004860d) cell_gallery2_pane_ParamLimits

0x8c81,	// (0x0004860d) cell_gallery2_pane

0xb744,	// (0x0004b0d0) cell_gallery2_pane_g2

0x8cd7,	// (0x00048663) cell_gallery2_pane_g3

0xb74c,	// (0x0004b0d8) cell_gallery2_pane_g4

0xb754,	// (0x0004b0e0) cell_gallery2_pane_g5

0xdd26,	// (0x0004d6b2) grid_highlight_pane_cp10

0x83c6,	// (0x00047d52) popup_vitu2_match_list_window_ParamLimits

0x83d7,	// (0x00047d63) popup_vitu2_query_window_ParamLimits

0x83d7,	// (0x00047d63) popup_vitu2_query_window

0xd30f,	// (0x0004cc9b) bg_vitu2_candi_button_pane

0xb729,	// (0x0004b0b5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb732,	// (0x0004b0be) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb73b,	// (0x0004b0c7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1226,	// (0x00040bb2) bg_button_pane_cp015

0x8cdf,	// (0x0004866b) bg_button_pane_cp016

0x8cf1,	// (0x0004867d) bg_button_pane_cp017

0x5406,	// (0x00044d92) bg_popup_sub_pane_cp22

0xb75c,	// (0x0004b0e8) popup_vitu2_query_window_g1

0x1255,	// (0x00040be1) popup_vitu2_query_window_g2

0x0002,

0xf956,	// (0x0004f2e2) popup_vitu2_query_window_g

0x1270,	// (0x00040bfc) popup_vitu2_query_window_t1_ParamLimits

0x1270,	// (0x00040bfc) popup_vitu2_query_window_t1

0x12a3,	// (0x00040c2f) popup_vitu2_query_window_t2_ParamLimits

0x12a3,	// (0x00040c2f) popup_vitu2_query_window_t2

0x12b5,	// (0x00040c41) popup_vitu2_query_window_t3_ParamLimits

0x12b5,	// (0x00040c41) popup_vitu2_query_window_t3

0x8d13,	// (0x0004869f) popup_vitu2_query_window_t4_ParamLimits

0x8d13,	// (0x0004869f) popup_vitu2_query_window_t4

0x8d30,	// (0x000486bc) popup_vitu2_query_window_t5_ParamLimits

0x8d30,	// (0x000486bc) popup_vitu2_query_window_t5

0x0006,

0xf95d,	// (0x0004f2e9) popup_vitu2_query_window_t_ParamLimits

0xf95d,	// (0x0004f2e9) popup_vitu2_query_window_t

0xb5a2,	// (0x0004af2e) main_cset_text_pane

0x87ad,	// (0x00048139) aid_area_touch_slider_ParamLimits

0xb5c3,	// (0x0004af4f) cset_slider_pane_ParamLimits

0x87c9,	// (0x00048155) main_cset_slider_pane_g1_ParamLimits

0x87de,	// (0x0004816a) main_cset_slider_pane_g2_ParamLimits

0xb5ed,	// (0x0004af79) main_cset_slider_pane_g3_ParamLimits

0xb5ed,	// (0x0004af79) main_cset_slider_pane_g3

0x87f3,	// (0x0004817f) main_cset_slider_pane_g4_ParamLimits

0x87f3,	// (0x0004817f) main_cset_slider_pane_g4

0x8802,	// (0x0004818e) main_cset_slider_pane_g5_ParamLimits

0x8802,	// (0x0004818e) main_cset_slider_pane_g5

0x880e,	// (0x0004819a) main_cset_slider_pane_g6_ParamLimits

0x880e,	// (0x0004819a) main_cset_slider_pane_g6

0xf8b7,	// (0x0004f243) main_cset_slider_pane_g_ParamLimits

0xb635,	// (0x0004afc1) main_cset_slider_pane_t1_ParamLimits

0x8882,	// (0x0004820e) main_cset_slider_pane_t2_ParamLimits

0x889c,	// (0x00048228) main_cset_slider_pane_t3_ParamLimits

0x88b6,	// (0x00048242) main_cset_slider_pane_t4_ParamLimits

0x88d0,	// (0x0004825c) main_cset_slider_pane_t5_ParamLimits

0x88ea,	// (0x00048276) main_cset_slider_pane_t6_ParamLimits

0x88ff,	// (0x0004828b) main_cset_slider_pane_t7_ParamLimits

0x8929,	// (0x000482b5) main_cset_slider_pane_t8_ParamLimits

0x8929,	// (0x000482b5) main_cset_slider_pane_t8

0x8951,	// (0x000482dd) main_cset_slider_pane_t9_ParamLimits

0x8951,	// (0x000482dd) main_cset_slider_pane_t9

0x8979,	// (0x00048305) main_cset_slider_pane_t10_ParamLimits

0x8979,	// (0x00048305) main_cset_slider_pane_t10

0x89a1,	// (0x0004832d) main_cset_slider_pane_t11_ParamLimits

0x89a1,	// (0x0004832d) main_cset_slider_pane_t11

0x89c9,	// (0x00048355) main_cset_slider_pane_t12_ParamLimits

0x89c9,	// (0x00048355) main_cset_slider_pane_t12

0x89e6,	// (0x00048372) main_cset_slider_pane_t13_ParamLimits

0x89e6,	// (0x00048372) main_cset_slider_pane_t13

0xf8dc,	// (0x0004f268) main_cset_slider_pane_t_ParamLimits

0xd30f,	// (0x0004cc9b) bg_popup_sub_pane_cp011

0xb768,	// (0x0004b0f4) main_cset_text_pane_g1

0xb770,	// (0x0004b0fc) main_cset_text_pane_t1

0xb77e,	// (0x0004b10a) main_cset_text_pane_t2

0xb78c,	// (0x0004b118) main_cset_text_pane_t3

0xb79a,	// (0x0004b126) main_cset_text_pane_t4

0xb7a8,	// (0x0004b134) main_cset_text_pane_t5

0xb7b6,	// (0x0004b142) main_cset_text_pane_t6

0xb7c4,	// (0x0004b150) main_cset_text_pane_t7

0x0006,

0xf96c,	// (0x0004f2f8) main_cset_text_pane_t

0xd30f,	// (0x0004cc9b) main_cam4_burst_pane

0xd30f,	// (0x0004cc9b) main_cam5_pane

0x86f0,	// (0x0004807c) bg_button_pane_cp019

0x86f9,	// (0x00048085) bg_button_pane_cp020

0xb5f9,	// (0x0004af85) main_cset_slider_pane_g7_ParamLimits

0xb5f9,	// (0x0004af85) main_cset_slider_pane_g7

0xb605,	// (0x0004af91) main_cset_slider_pane_g8_ParamLimits

0xb605,	// (0x0004af91) main_cset_slider_pane_g8

0x8822,	// (0x000481ae) main_cset_slider_pane_g9_ParamLimits

0x8822,	// (0x000481ae) main_cset_slider_pane_g9

0x882e,	// (0x000481ba) main_cset_slider_pane_g10_ParamLimits

0x882e,	// (0x000481ba) main_cset_slider_pane_g10

0xb611,	// (0x0004af9d) main_cset_slider_pane_g11_ParamLimits

0xb611,	// (0x0004af9d) main_cset_slider_pane_g11

0xb61d,	// (0x0004afa9) main_cset_slider_pane_g12_ParamLimits

0xb61d,	// (0x0004afa9) main_cset_slider_pane_g12

0x883a,	// (0x000481c6) main_cset_slider_pane_g13_ParamLimits

0x883a,	// (0x000481c6) main_cset_slider_pane_g13

0x8846,	// (0x000481d2) main_cset_slider_pane_g14_ParamLimits

0x8846,	// (0x000481d2) main_cset_slider_pane_g14

0x8852,	// (0x000481de) main_cset_slider_pane_g15_ParamLimits

0x8852,	// (0x000481de) main_cset_slider_pane_g15

0xb663,	// (0x0004afef) main_cset_slider_pane_t14_ParamLimits

0xb663,	// (0x0004afef) main_cset_slider_pane_t14

0xb69c,	// (0x0004b028) main_cset_slider_pane_t15_ParamLimits

0xb69c,	// (0x0004b028) main_cset_slider_pane_t15

0x8d4d,	// (0x000486d9) aid_cam4_burst_size_cell_ParamLimits

0x8d4d,	// (0x000486d9) aid_cam4_burst_size_cell

0x8d6d,	// (0x000486f9) grid_cam4_burst_pane_ParamLimits

0x8d6d,	// (0x000486f9) grid_cam4_burst_pane

0x8d97,	// (0x00048723) linegrid_cam4_burst_pane_ParamLimits

0x8d97,	// (0x00048723) linegrid_cam4_burst_pane

0xb7d2,	// (0x0004b15e) scroll_pane_cp30_ParamLimits

0xb7d2,	// (0x0004b15e) scroll_pane_cp30

0x8db9,	// (0x00048745) cell_cam4_burst_pane_ParamLimits

0x8db9,	// (0x00048745) cell_cam4_burst_pane

0xb7de,	// (0x0004b16a) linegrid_cam4_burst_pane_g1_ParamLimits

0xb7de,	// (0x0004b16a) linegrid_cam4_burst_pane_g1

0x8e00,	// (0x0004878c) linegrid_cam4_burst_pane_g2_ParamLimits

0x8e00,	// (0x0004878c) linegrid_cam4_burst_pane_g2

0xb7eb,	// (0x0004b177) linegrid_cam4_burst_pane_g3_ParamLimits

0xb7eb,	// (0x0004b177) linegrid_cam4_burst_pane_g3

0x0002,

0xf97b,	// (0x0004f307) linegrid_cam4_burst_pane_g_ParamLimits

0xf97b,	// (0x0004f307) linegrid_cam4_burst_pane_g

0x8e11,	// (0x0004879d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8e11,	// (0x0004879d) linegrid_cam4_burst_pane_g3_copy1

0xb7f8,	// (0x0004b184) linegrid_cam4_burst_pane_g4_ParamLimits

0xb7f8,	// (0x0004b184) linegrid_cam4_burst_pane_g4

0x8e2b,	// (0x000487b7) linegrid_cam4_burst_pane_g5_ParamLimits

0x8e2b,	// (0x000487b7) linegrid_cam4_burst_pane_g5

0x8e3c,	// (0x000487c8) linegrid_cam4_burst_pane_g6_ParamLimits

0x8e3c,	// (0x000487c8) linegrid_cam4_burst_pane_g6

0xb805,	// (0x0004b191) linegrid_cam4_burst_pane_g7_ParamLimits

0xb805,	// (0x0004b191) linegrid_cam4_burst_pane_g7

0x8e4d,	// (0x000487d9) cell_cam4_burst_pane_g1

0xb81e,	// (0x0004b1aa) main_cam5_pane_t1_ParamLimits

0xb81e,	// (0x0004b1aa) main_cam5_pane_t1

0xb830,	// (0x0004b1bc) main_cam5_pane_t2_ParamLimits

0xb830,	// (0x0004b1bc) main_cam5_pane_t2

0xb842,	// (0x0004b1ce) main_cam5_pane_t3_ParamLimits

0xb842,	// (0x0004b1ce) main_cam5_pane_t3

0xb854,	// (0x0004b1e0) main_cam5_pane_t4_ParamLimits

0xb854,	// (0x0004b1e0) main_cam5_pane_t4

0xb86a,	// (0x0004b1f6) main_cam5_pane_t5_ParamLimits

0xb86a,	// (0x0004b1f6) main_cam5_pane_t5

0xb87c,	// (0x0004b208) main_cam5_pane_t6_ParamLimits

0xb87c,	// (0x0004b208) main_cam5_pane_t6

0xb88e,	// (0x0004b21a) main_cam5_pane_t7_ParamLimits

0xb88e,	// (0x0004b21a) main_cam5_pane_t7

0xb8a0,	// (0x0004b22c) main_cam5_pane_t8_ParamLimits

0xb8a0,	// (0x0004b22c) main_cam5_pane_t8

0xb8bc,	// (0x0004b248) main_cam5_pane_t9_ParamLimits

0xb8bc,	// (0x0004b248) main_cam5_pane_t9

0xb8ce,	// (0x0004b25a) main_cam5_pane_t10_ParamLimits

0xb8ce,	// (0x0004b25a) main_cam5_pane_t10

0xb8e0,	// (0x0004b26c) main_cam5_pane_t11_ParamLimits

0xb8e0,	// (0x0004b26c) main_cam5_pane_t11

0xb8f2,	// (0x0004b27e) main_cam5_pane_t12_ParamLimits

0xb8f2,	// (0x0004b27e) main_cam5_pane_t12

0xb907,	// (0x0004b293) main_cam5_pane_t13_ParamLimits

0xb907,	// (0x0004b293) main_cam5_pane_t13

0x000c,

0xf987,	// (0x0004f313) main_cam5_pane_t_ParamLimits

0xf987,	// (0x0004f313) main_cam5_pane_t

0x1dff,	// (0x0004178b) popup_scut_keymap_window_ParamLimits

0x1dff,	// (0x0004178b) popup_scut_keymap_window

0x8e60,	// (0x000487ec) aid_size_cell_brow_shortcut

0xdd26,	// (0x0004d6b2) bg_popup_window_pane_cp010

0x8e6c,	// (0x000487f8) grid_scut_pane

0x8e76,	// (0x00048802) cell_scut_pane_ParamLimits

0x8e76,	// (0x00048802) cell_scut_pane

0x8e8b,	// (0x00048817) cell_scut_pane_g1

0xb924,	// (0x0004b2b0) cell_scut_pane_t1

0xb933,	// (0x0004b2bf) cell_scut_pane_t2

0x8e94,	// (0x00048820) cell_scut_pane_t3

0x0002,

0xf9a2,	// (0x0004f32e) cell_scut_pane_t

0x69f9,	// (0x00046385) main_mup3_pane_g8_ParamLimits

0x69f9,	// (0x00046385) main_mup3_pane_g8

0x8315,	// (0x00047ca1) area_vitu2_query_pane_ParamLimits

0x8315,	// (0x00047ca1) area_vitu2_query_pane

0x1236,	// (0x00040bc2) input_focus_pane_cp08

0xb942,	// (0x0004b2ce) area_vitu2_query_pane_g1

0x1333,	// (0x00040cbf) area_vitu2_query_pane_g2

0x0001,

0xf9a9,	// (0x0004f335) area_vitu2_query_pane_g

0x8ea2,	// (0x0004882e) area_vitu2_query_pane_t1_ParamLimits

0x8ea2,	// (0x0004882e) area_vitu2_query_pane_t1

0x8eb4,	// (0x00048840) area_vitu2_query_pane_t2_ParamLimits

0x8eb4,	// (0x00048840) area_vitu2_query_pane_t2

0x1342,	// (0x00040cce) area_vitu2_query_pane_t3_ParamLimits

0x1342,	// (0x00040cce) area_vitu2_query_pane_t3

0xb94e,	// (0x0004b2da) area_vitu2_query_pane_t4_ParamLimits

0xb94e,	// (0x0004b2da) area_vitu2_query_pane_t4

0xb976,	// (0x0004b302) area_vitu2_query_pane_t5_ParamLimits

0xb976,	// (0x0004b302) area_vitu2_query_pane_t5

0xb99e,	// (0x0004b32a) area_vitu2_query_pane_t6_ParamLimits

0xb99e,	// (0x0004b32a) area_vitu2_query_pane_t6

0x0006,

0xf9ae,	// (0x0004f33a) area_vitu2_query_pane_t_ParamLimits

0xf9ae,	// (0x0004f33a) area_vitu2_query_pane_t

0x8ec6,	// (0x00048852) bg_button_pane_cp018

0x8ed3,	// (0x0004885f) bg_button_pane_cp021

0x136a,	// (0x00040cf6) bg_button_pane_cp022

0x1379,	// (0x00040d05) input_focus_pane_cp09

0xe5ad,	// (0x0004df39) aid_size_touch_mv_arrow_left

0xe5d6,	// (0x0004df62) aid_size_touch_mv_arrow_right

0x886a,	// (0x000481f6) main_cset_slider_pane_g16_ParamLimits

0x886a,	// (0x000481f6) main_cset_slider_pane_g16

0x8876,	// (0x00048202) main_cset_slider_pane_g17_ParamLimits

0x8876,	// (0x00048202) main_cset_slider_pane_g17

0x8e4d,	// (0x000487d9) cell_cam4_burst_pane_g1_ParamLimits

0xd30f,	// (0x0004cc9b) compa_mode_pane

0x8a4f,	// (0x000483db) popup_vtel_slider_window_g3_ParamLimits

0x8a4f,	// (0x000483db) popup_vtel_slider_window_g3

0x8a66,	// (0x000483f2) popup_vtel_slider_window_g4_ParamLimits

0x8a66,	// (0x000483f2) popup_vtel_slider_window_g4

0x8a7d,	// (0x00048409) popup_vtel_slider_window_t1_ParamLimits

0x8a7d,	// (0x00048409) popup_vtel_slider_window_t1

0xd30f,	// (0x0004cc9b) main_cl_pane

0xaead,	// (0x0004a839) popup_imed_adjust2_window_ParamLimits

0x5406,	// (0x00044d92) bg_tb_trans_pane_cp05_ParamLimits

0x7542,	// (0x00046ece) popup_imed_adjust2_window_g1_ParamLimits

0x7551,	// (0x00046edd) popup_imed_adjust2_window_g2_ParamLimits

0x7551,	// (0x00046edd) popup_imed_adjust2_window_g2

0x755d,	// (0x00046ee9) popup_imed_adjust2_window_g3_ParamLimits

0x755d,	// (0x00046ee9) popup_imed_adjust2_window_g3

0x0002,

0xf725,	// (0x0004f0b1) popup_imed_adjust2_window_g_ParamLimits

0xf725,	// (0x0004f0b1) popup_imed_adjust2_window_g

0x7569,	// (0x00046ef5) popup_imed_adjust2_window_t1_ParamLimits

0x7581,	// (0x00046f0d) slider_imed_adjust_pane_ParamLimits

0x7595,	// (0x00046f21) slider_imed_adjust_pane_g1_ParamLimits

0x75a5,	// (0x00046f31) slider_imed_adjust_pane_g2_ParamLimits

0x75b5,	// (0x00046f41) slider_imed_adjust_pane_g3_ParamLimits

0x75c6,	// (0x00046f52) slider_imed_adjust_pane_g4_ParamLimits

0xf72c,	// (0x0004f0b8) slider_imed_adjust_pane_g_ParamLimits

0x80c6,	// (0x00047a52) aid_touch_area_cam4_ParamLimits

0x80c6,	// (0x00047a52) aid_touch_area_cam4

0xb341,	// (0x0004accd) battery_pane_cp01

0x8186,	// (0x00047b12) main_camera4_pane_g6_ParamLimits

0x8186,	// (0x00047b12) main_camera4_pane_g6

0x81ae,	// (0x00047b3a) main_camera4_pane_t2_ParamLimits

0x81ae,	// (0x00047b3a) main_camera4_pane_t2

0x0001,

0xf82a,	// (0x0004f1b6) main_camera4_pane_t_ParamLimits

0xf82a,	// (0x0004f1b6) main_camera4_pane_t

0x81dd,	// (0x00047b69) aid_touch_area_vid4_ParamLimits

0x81dd,	// (0x00047b69) aid_touch_area_vid4

0x822d,	// (0x00047bb9) main_video4_pane_g5_ParamLimits

0x822d,	// (0x00047bb9) main_video4_pane_g5

0x824e,	// (0x00047bda) vid4_progress_pane_ParamLimits

0x824e,	// (0x00047bda) vid4_progress_pane

0xb629,	// (0x0004afb5) main_cset_slider_pane_g18_ParamLimits

0xb629,	// (0x0004afb5) main_cset_slider_pane_g18

0xb812,	// (0x0004b19e) cell_cam4_burst_pane_g2_ParamLimits

0xb812,	// (0x0004b19e) cell_cam4_burst_pane_g2

0x0001,

0xf982,	// (0x0004f30e) cell_cam4_burst_pane_g_ParamLimits

0xf982,	// (0x0004f30e) cell_cam4_burst_pane_g

0xdb75,	// (0x0004d501) bg_cl_pane_ParamLimits

0xdb75,	// (0x0004d501) bg_cl_pane

0x8edf,	// (0x0004886b) cl_header_pane_ParamLimits

0x8edf,	// (0x0004886b) cl_header_pane

0x8ef3,	// (0x0004887f) cl_listscroll_pane_ParamLimits

0x8ef3,	// (0x0004887f) cl_listscroll_pane

0xb9ea,	// (0x0004b376) bg_cl_pane_g1

0xb9f2,	// (0x0004b37e) bg_cl_pane_g2

0xb9fa,	// (0x0004b386) bg_cl_pane_g3

0xba02,	// (0x0004b38e) bg_cl_pane_g4

0xba0a,	// (0x0004b396) bg_cl_pane_g5

0xba12,	// (0x0004b39e) bg_cl_pane_g6

0xba1a,	// (0x0004b3a6) bg_cl_pane_g7

0xba22,	// (0x0004b3ae) bg_cl_pane_g8

0xba2a,	// (0x0004b3b6) bg_cl_pane_g9

0x0008,

0xf9bd,	// (0x0004f349) bg_cl_pane_g

0x8f03,	// (0x0004888f) aid_height_cl_leading_ParamLimits

0x8f03,	// (0x0004888f) aid_height_cl_leading

0x8f0f,	// (0x0004889b) aid_height_cl_text_ParamLimits

0x8f0f,	// (0x0004889b) aid_height_cl_text

0xefdc,	// (0x0004e968) bg_cl_header_pane_ParamLimits

0xefdc,	// (0x0004e968) bg_cl_header_pane

0x8f2e,	// (0x000488ba) cl_header_pane_g1_ParamLimits

0x8f2e,	// (0x000488ba) cl_header_pane_g1

0x8f44,	// (0x000488d0) cl_header_pane_t1_ParamLimits

0x8f44,	// (0x000488d0) cl_header_pane_t1

0xba32,	// (0x0004b3be) cl_list_pane

0xb5ba,	// (0x0004af46) hc_scroll_pane_cp01

0xdf6c,	// (0x0004d8f8) bg_cl_header_pane_g1

0xb4a0,	// (0x0004ae2c) bg_cl_header_pane_g2

0xdf8c,	// (0x0004d918) bg_cl_header_pane_g3

0xb4b0,	// (0x0004ae3c) bg_cl_header_pane_g4

0xb4a8,	// (0x0004ae34) bg_cl_header_pane_g5

0xb721,	// (0x0004b0ad) bg_cl_header_pane_g6

0xb4c8,	// (0x0004ae54) bg_cl_header_pane_g7

0xb4d0,	// (0x0004ae5c) bg_cl_header_pane_g8

0xb4c0,	// (0x0004ae4c) bg_cl_header_pane_g9

0x0008,

0xf9d0,	// (0x0004f35c) bg_cl_header_pane_g

0x8f5d,	// (0x000488e9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f5d,	// (0x000488e9) hc_cl_list_double_graphic_heading_pane

0x8f6d,	// (0x000488f9) hc_cl_list_single_graphic_pane_ParamLimits

0x8f6d,	// (0x000488f9) hc_cl_list_single_graphic_pane

0x8f80,	// (0x0004890c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8f80,	// (0x0004890c) hc_cl_list_single_graphic_pane_g1

0x8f8c,	// (0x00048918) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8f8c,	// (0x00048918) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e3,	// (0x0004f36f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e3,	// (0x0004f36f) hc_cl_list_single_graphic_pane_g

0x8fa0,	// (0x0004892c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8fa0,	// (0x0004892c) hc_cl_list_single_graphic_pane_t1

0x8f80,	// (0x0004890c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8f80,	// (0x0004890c) hc_cl_list_double_graphic_heading_pane_g1

0x8fb5,	// (0x00048941) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8fb5,	// (0x00048941) hc_cl_list_double_graphic_heading_pane_g2

0x8fc9,	// (0x00048955) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8fc9,	// (0x00048955) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9e8,	// (0x0004f374) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9e8,	// (0x0004f374) hc_cl_list_double_graphic_heading_pane_g

0x8fdd,	// (0x00048969) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8fdd,	// (0x00048969) hc_cl_list_double_graphic_heading_pane_t1

0x8ff2,	// (0x0004897e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ff2,	// (0x0004897e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9ef,	// (0x0004f37b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9ef,	// (0x0004f37b) hc_cl_list_double_graphic_heading_pane_t

0xd41a,	// (0x0004cda6) vid4_progress_pane_g1

0xd42a,	// (0x0004cdb6) vid4_progress_pane_g2

0x9007,	// (0x00048993) vid4_progress_pane_g3

0xd43a,	// (0x0004cdc6) vid4_progress_pane_g4

0x0004,

0xf9f4,	// (0x0004f380) vid4_progress_pane_g

0x9019,	// (0x000489a5) vid4_progress_pane_t1

0xd458,	// (0x0004cde4) vid4_progress_pane_t2

0x0002,

0xf9ff,	// (0x0004f38b) vid4_progress_pane_t

0x902f,	// (0x000489bb) wait_bar_pane_cp07

0x611a,	// (0x00045aa6) blid_firmament_pane_ParamLimits

0x615b,	// (0x00045ae7) popup_blid_sat_info2_window_g1

0x617f,	// (0x00045b0b) popup_blid_sat_info2_window_t3

0x618d,	// (0x00045b19) popup_blid_sat_info2_window_t4

0x619b,	// (0x00045b27) popup_blid_sat_info2_window_t5

0x61a9,	// (0x00045b35) popup_blid_sat_info2_window_t6

0x61b9,	// (0x00045b45) popup_blid_sat_info2_window_t7

0x61c7,	// (0x00045b53) popup_blid_sat_info2_window_t8

0x61d5,	// (0x00045b61) popup_blid_sat_info2_window_t9

0x61e3,	// (0x00045b6f) popup_blid_sat_info2_window_t10

0x6359,	// (0x00045ce5) aid_firma_cardinal_ParamLimits

0x636d,	// (0x00045cf9) blid_firmament_pane_t1_ParamLimits

0x6384,	// (0x00045d10) blid_firmament_pane_t2_ParamLimits

0x639b,	// (0x00045d27) blid_firmament_pane_t3_ParamLimits

0x63b2,	// (0x00045d3e) blid_firmament_pane_t4_ParamLimits

0xf619,	// (0x0004efa5) blid_firmament_pane_t_ParamLimits

0x63c9,	// (0x00045d55) blid_sat_info_pane_ParamLimits

0xefdc,	// (0x0004e968) main_cam_set_pane_ParamLimits

0x73bc,	// (0x00046d48) aid_size_cell_colour_35_ParamLimits

0x73dc,	// (0x00046d68) aid_size_cell_colour_112_ParamLimits

0x73fc,	// (0x00046d88) aid_size_cell_effect_ParamLimits

0x5406,	// (0x00044d92) bg_tb_trans_pane_cp02_ParamLimits

0xe1dc,	// (0x0004db68) heading_imed_pane_ParamLimits

0x741b,	// (0x00046da7) listscroll_imed_pane_ParamLimits

0x4736,	// (0x000440c2) popup_call2_audio_first_window_g5_ParamLimits

0x4736,	// (0x000440c2) popup_call2_audio_first_window_g5

0x7d7f,	// (0x0004770b) aid_size_touch_image3_arrow_left_ParamLimits

0x7d7f,	// (0x0004770b) aid_size_touch_image3_arrow_left

0x7d9f,	// (0x0004772b) aid_size_touch_image3_arrow_right_ParamLimits

0x7d9f,	// (0x0004772b) aid_size_touch_image3_arrow_right

0xd46d,	// (0x0004cdf9) vid4_progress_pane_t3

0x7a8e,	// (0x0004741a) main_hwr_training_symbol_option_pane_ParamLimits

0x7a8e,	// (0x0004741a) main_hwr_training_symbol_option_pane

0x7aaa,	// (0x00047436) popup_hwr_training_preview_window_ParamLimits

0x7aaa,	// (0x00047436) popup_hwr_training_preview_window

0x7af7,	// (0x00047483) hwr_training_navi_pane_g5_ParamLimits

0x7af7,	// (0x00047483) hwr_training_navi_pane_g5

0xb48e,	// (0x0004ae1a) popup_char_count_window

0xefdc,	// (0x0004e968) bg_popup_sub_pane_cp20_ParamLimits

0x8b89,	// (0x00048515) list_vitu2_match_list_pane_ParamLimits

0x8b98,	// (0x00048524) vitu2_page_scroll_pane_ParamLimits

0x8b98,	// (0x00048524) vitu2_page_scroll_pane

0xba66,	// (0x0004b3f2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xba66,	// (0x0004b3f2) list_single_hwr_training_symbol_option_pane

0xba79,	// (0x0004b405) list_single_hwr_training_symbol_option_pane_g1

0xba81,	// (0x0004b40d) list_single_hwr_training_symbol_option_pane_t1

0xba5d,	// (0x0004b3e9) bg_button_pane_cp023

0xba8f,	// (0x0004b41b) bg_button_pane_cp024

0x905b,	// (0x000489e7) vitu2_page_scroll_pane_g1

0x9063,	// (0x000489ef) vitu2_page_scroll_pane_g2

0x0001,

0xfa06,	// (0x0004f392) vitu2_page_scroll_pane_g

0x906b,	// (0x000489f7) vitu2_page_scroll_pane_t1

0x6402,	// (0x00045d8e) popup_char_count_window_g1

0xbac2,	// (0x0004b44e) popup_char_count_window_g2

0xbacb,	// (0x0004b457) popup_char_count_window_g3

0x0002,

0xfa0b,	// (0x0004f397) popup_char_count_window_g

0xbad4,	// (0x0004b460) popup_char_count_window_t1

0xd30f,	// (0x0004cc9b) main_vded2_pane

0x7530,	// (0x00046ebc) aid_size_cell_imed_line

0x753a,	// (0x00046ec6) grid_imed_line_width_pane

0xb401,	// (0x0004ad8d) vid4_indicators_pane_g4

0xbae2,	// (0x0004b46e) cell_imed_line_width_pane_ParamLimits

0xbae2,	// (0x0004b46e) cell_imed_line_width_pane

0xbaf4,	// (0x0004b480) cell_imed_line_width_pane_g1

0x907a,	// (0x00048a06) cell_imed_line_width_pane_g2

0x0001,

0xfa12,	// (0x0004f39e) cell_imed_line_width_pane_g

0x9082,	// (0x00048a0e) main_vded2_pane_g1_ParamLimits

0x9082,	// (0x00048a0e) main_vded2_pane_g1

0x9098,	// (0x00048a24) main_vded2_pane_g2_ParamLimits

0x9098,	// (0x00048a24) main_vded2_pane_g2

0x0001,

0xfa17,	// (0x0004f3a3) main_vded2_pane_g_ParamLimits

0xfa17,	// (0x0004f3a3) main_vded2_pane_g

0x90a8,	// (0x00048a34) vded2_slider_pane_ParamLimits

0x90a8,	// (0x00048a34) vded2_slider_pane

0x90b8,	// (0x00048a44) aid_size_touch_vded2_end

0x90c0,	// (0x00048a4c) aid_size_touch_vded2_playhead

0xbafd,	// (0x0004b489) aid_size_touch_vded2_start

0xbb05,	// (0x0004b491) vded2_slider_bg_pane

0xbb0e,	// (0x0004b49a) vded2_slider_pane_g1

0xbb17,	// (0x0004b4a3) vded2_slider_pane_g2

0x90c8,	// (0x00048a54) vded2_slider_pane_g3

0x0002,

0xfa1c,	// (0x0004f3a8) vded2_slider_pane_g

0xbb1f,	// (0x0004b4ab) vded2_slider_bg_pane_g1

0xbb28,	// (0x0004b4b4) vded2_slider_bg_pane_g2

0xbb31,	// (0x0004b4bd) vded2_slider_bg_pane_g3

0x0002,

0xfa23,	// (0x0004f3af) vded2_slider_bg_pane_g

0x419f,	// (0x00043b2b) aid_postcard_touch_down_pane_ParamLimits

0x419f,	// (0x00043b2b) aid_postcard_touch_down_pane

0x41b1,	// (0x00043b3d) aid_postcard_touch_up_pane_ParamLimits

0x41b1,	// (0x00043b3d) aid_postcard_touch_up_pane

0xd30f,	// (0x0004cc9b) main_blid2_pane

0xae9d,	// (0x0004a829) popup_blid2_search_window

0xd30f,	// (0x0004cc9b) blid2_gps_pane

0xd30f,	// (0x0004cc9b) blid2_navig_pane

0xd30f,	// (0x0004cc9b) blid2_search_pane

0xd30f,	// (0x0004cc9b) blid2_tripm_pane

0x90d1,	// (0x00048a5d) blid2_search_pane_g1_ParamLimits

0x90d1,	// (0x00048a5d) blid2_search_pane_g1

0x90e4,	// (0x00048a70) blid2_search_pane_t1_ParamLimits

0x90e4,	// (0x00048a70) blid2_search_pane_t1

0x90f6,	// (0x00048a82) aid_size_cell_blid2_gps_ParamLimits

0x90f6,	// (0x00048a82) aid_size_cell_blid2_gps

0x910e,	// (0x00048a9a) blid2_gps_pane_g1_ParamLimits

0x910e,	// (0x00048a9a) blid2_gps_pane_g1

0x9122,	// (0x00048aae) grid_blid2_satellite_pane_ParamLimits

0x9122,	// (0x00048aae) grid_blid2_satellite_pane

0x9136,	// (0x00048ac2) blid2_navig_pane_g1_ParamLimits

0x9136,	// (0x00048ac2) blid2_navig_pane_g1

0x9142,	// (0x00048ace) blid2_navig_pane_t1_ParamLimits

0x9142,	// (0x00048ace) blid2_navig_pane_t1

0x915b,	// (0x00048ae7) blid2_navig_pane_t2_ParamLimits

0x915b,	// (0x00048ae7) blid2_navig_pane_t2

0x0001,

0xfa2a,	// (0x0004f3b6) blid2_navig_pane_t_ParamLimits

0xfa2a,	// (0x0004f3b6) blid2_navig_pane_t

0x9174,	// (0x00048b00) blid2_navig_ring_pane_ParamLimits

0x9174,	// (0x00048b00) blid2_navig_ring_pane

0x9189,	// (0x00048b15) blid2_speed_pane_ParamLimits

0x9189,	// (0x00048b15) blid2_speed_pane

0x9195,	// (0x00048b21) blid2_tripm_pane_g1_ParamLimits

0x9195,	// (0x00048b21) blid2_tripm_pane_g1

0x91aa,	// (0x00048b36) blid2_tripm_pane_g2_ParamLimits

0x91aa,	// (0x00048b36) blid2_tripm_pane_g2

0x91be,	// (0x00048b4a) blid2_tripm_pane_g3_ParamLimits

0x91be,	// (0x00048b4a) blid2_tripm_pane_g3

0x91d2,	// (0x00048b5e) blid2_tripm_pane_g4_ParamLimits

0x91d2,	// (0x00048b5e) blid2_tripm_pane_g4

0x91e6,	// (0x00048b72) blid2_tripm_pane_g5_ParamLimits

0x91e6,	// (0x00048b72) blid2_tripm_pane_g5

0x0005,

0xfa2f,	// (0x0004f3bb) blid2_tripm_pane_g_ParamLimits

0xfa2f,	// (0x0004f3bb) blid2_tripm_pane_g

0x9208,	// (0x00048b94) blid2_tripm_pane_t1_ParamLimits

0x9208,	// (0x00048b94) blid2_tripm_pane_t1

0x921f,	// (0x00048bab) blid2_tripm_pane_t2_ParamLimits

0x921f,	// (0x00048bab) blid2_tripm_pane_t2

0x9236,	// (0x00048bc2) blid2_tripm_pane_t3_ParamLimits

0x9236,	// (0x00048bc2) blid2_tripm_pane_t3

0x0003,

0xfa3c,	// (0x0004f3c8) blid2_tripm_pane_t_ParamLimits

0xfa3c,	// (0x0004f3c8) blid2_tripm_pane_t

0x9279,	// (0x00048c05) cell_blid2_satellite_pane_ParamLimits

0x9279,	// (0x00048c05) cell_blid2_satellite_pane

0x9291,	// (0x00048c1d) cell_blid2_satellite_pane_g1

0xbb3a,	// (0x0004b4c6) cell_blid2_satellite_pane_t1

0x63d9,	// (0x00045d65) blid2_speed_pane_g1

0xbb48,	// (0x0004b4d4) blid2_speed_pane_t1

0xbb56,	// (0x0004b4e2) blid2_speed_pane_t2

0x0001,

0xfa45,	// (0x0004f3d1) blid2_speed_pane_t

0x63d9,	// (0x00045d65) blid2_navig_ring_pane_g1

0x929a,	// (0x00048c26) blid2_navig_ring_pane_g2

0x92a2,	// (0x00048c2e) blid2_navig_ring_pane_g3

0x92aa,	// (0x00048c36) blid2_navig_ring_pane_g4

0x92b2,	// (0x00048c3e) blid2_navig_ring_pane_g5

0x0004,

0xfa4a,	// (0x0004f3d6) blid2_navig_ring_pane_g

0xd30f,	// (0x0004cc9b) bg_popup_window_pane_cp011

0xbb64,	// (0x0004b4f0) popup_blid2_search_window_g1

0xbb6c,	// (0x0004b4f8) popup_blid2_search_window_t1

0xbb7a,	// (0x0004b506) popup_blid2_search_window_t2

0x0001,

0xfa55,	// (0x0004f3e1) popup_blid2_search_window_t

0xde7b,	// (0x0004d807) main_browser_pane_g1

0xdb75,	// (0x0004d501) main_browser_pane_ParamLimits

0xefdc,	// (0x0004e968) bg_button_pane_cp011_ParamLimits

0x84c9,	// (0x00047e55) cell_vitu2_function_pane_g1_ParamLimits

0x5406,	// (0x00044d92) bg_popup_sub_pane_cp22_ParamLimits

0x1236,	// (0x00040bc2) input_focus_pane_cp08_ParamLimits

0x8d03,	// (0x0004868f) popup_vitu2_query_button_pane_ParamLimits

0x8d03,	// (0x0004868f) popup_vitu2_query_button_pane

0x124d,	// (0x00040bd9) popup_vitu2_query_input_button_pane

0xb75c,	// (0x0004b0e8) popup_vitu2_query_window_g1_ParamLimits

0x1255,	// (0x00040be1) popup_vitu2_query_window_g2_ParamLimits

0xf956,	// (0x0004f2e2) popup_vitu2_query_window_g_ParamLimits

0xd30f,	// (0x0004cc9b) bg_button_pane_cp026

0x92ba,	// (0x00048c46) popup_vitu2_query_input_button_pane_g1

0xd30f,	// (0x0004cc9b) bg_button_pane_cp025

0xbb88,	// (0x0004b514) popup_vitu2_query_button_pane_t1

0x671d,	// (0x000460a9) main_mp3_pane_t6

0x6733,	// (0x000460bf) popup_slider_window_cp01

0xb36d,	// (0x0004acf9) cam4_battery_pane

0xb3c0,	// (0x0004ad4c) cam4_battery_pane_cp02

0xd412,	// (0x0004cd9e) cam4_battery_pane_cp01

0xd412,	// (0x0004cd9e) cam4_battery_pane_cp03

0x63d9,	// (0x00045d65) cam4_battery_pane_g1

0xbb96,	// (0x0004b522) cam4_battery_pane_g2

0x0001,

0xfa5a,	// (0x0004f3e6) cam4_battery_pane_g

0x61f1,	// (0x00045b7d) popup_blid_sat_info2_window_t11

0xe5ad,	// (0x0004df39) aid_size_touch_mv_arrow_left_ParamLimits

0xe5d6,	// (0x0004df62) aid_size_touch_mv_arrow_right_ParamLimits

0xe634,	// (0x0004dfc0) navi_pane_g1_ParamLimits

0xe640,	// (0x0004dfcc) navi_pane_g2_ParamLimits

0xe66e,	// (0x0004dffa) navi_pane_g3_ParamLimits

0x01bf,	// (0x0003fb4b) navi_pane_g_ParamLimits

0x3ce7,	// (0x00043673) navi_pane_mv_t1_ParamLimits

0x7450,	// (0x00046ddc) grid_imed_effect_pane_ParamLimits

0x2c18,	// (0x000425a4) aid_placing_vt_slider_lsc

0xddbd,	// (0x0004d749) aid_placing_vt_slider_prt

0xefdc,	// (0x0004e968) bg_tb_trans_pane_cp01_ParamLimits

0x658f,	// (0x00045f1b) popup_image_details_window_g1_ParamLimits

0x65a2,	// (0x00045f2e) popup_image_details_window_g2_ParamLimits

0x65b7,	// (0x00045f43) popup_image_details_window_g3_ParamLimits

0x65b7,	// (0x00045f43) popup_image_details_window_g3

0xf65e,	// (0x0004efea) popup_image_details_window_g_ParamLimits

0x65cb,	// (0x00045f57) popup_image_details_window_t1_ParamLimits

0x65dd,	// (0x00045f69) popup_image_details_window_t2_ParamLimits

0x65f6,	// (0x00045f82) popup_image_details_window_t3_ParamLimits

0x660a,	// (0x00045f96) popup_image_details_window_t4_ParamLimits

0x6625,	// (0x00045fb1) popup_image_details_window_t5_ParamLimits

0xf665,	// (0x0004eff1) popup_image_details_window_t_ParamLimits

0x8f1b,	// (0x000488a7) cl_header_name_pane_ParamLimits

0x8f1b,	// (0x000488a7) cl_header_name_pane

0x92c2,	// (0x00048c4e) cl_header_name_pane_t1_ParamLimits

0x92c2,	// (0x00048c4e) cl_header_name_pane_t1

0x92e3,	// (0x00048c6f) cl_header_name_pane_t2_ParamLimits

0x92e3,	// (0x00048c6f) cl_header_name_pane_t2

0x9325,	// (0x00048cb1) cl_header_name_pane_t3_ParamLimits

0x9325,	// (0x00048cb1) cl_header_name_pane_t3

0x0002,

0xfa5f,	// (0x0004f3eb) cl_header_name_pane_t_ParamLimits

0xfa5f,	// (0x0004f3eb) cl_header_name_pane_t

0xe6fb,	// (0x0004e087) navi_pane_mv_g2_ParamLimits

0xb44b,	// (0x0004add7) field_vitu2_entry_pane_g1_ParamLimits

0xb457,	// (0x0004ade3) field_vitu2_entry_pane_g2_ParamLimits

0xb463,	// (0x0004adef) field_vitu2_entry_pane_g3_ParamLimits

0xb463,	// (0x0004adef) field_vitu2_entry_pane_g3

0xf85c,	// (0x0004f1e8) field_vitu2_entry_pane_g_ParamLimits

0xd3a4,	// (0x0004cd30) cell_vitu2_itu_pane_g1_ParamLimits

0x845d,	// (0x00047de9) cell_vitu2_itu_pane_g2_ParamLimits

0x845d,	// (0x00047de9) cell_vitu2_itu_pane_g2

0x0001,

0xf868,	// (0x0004f1f4) cell_vitu2_itu_pane_g_ParamLimits

0xf868,	// (0x0004f1f4) cell_vitu2_itu_pane_g

0xefdc,	// (0x0004e968) bg_vkb2_func_pane_cp05_ParamLimits

0xefdc,	// (0x0004e968) bg_vkb2_func_pane_cp05

0xefdc,	// (0x0004e968) bg_vkb2_func_pane_cp03

0xefdc,	// (0x0004e968) bg_vkb2_func_pane_cp04

0xefdc,	// (0x0004e968) bg_vkb2_func_pane_cp10_ParamLimits

0xefdc,	// (0x0004e968) bg_vkb2_func_pane_cp10

0x136a,	// (0x00040cf6) bg_vkb2_func_pane_cp08

0x8ec6,	// (0x00048852) bg_vkb2_func_pane_cp06

0x8ed3,	// (0x0004885f) bg_vkb2_func_pane_cp07

0xba98,	// (0x0004b424) bg_vkb2_func_pane_cp11_ParamLimits

0xba98,	// (0x0004b424) bg_vkb2_func_pane_cp11

0xbaad,	// (0x0004b439) bg_vkb2_func_pane_cp12_ParamLimits

0xbaad,	// (0x0004b439) bg_vkb2_func_pane_cp12

0xd30f,	// (0x0004cc9b) bg_vkb2_func_pane_cp09

0xb4a0,	// (0x0004ae2c) bg_vkb2_func_pane_g1

0xdf8c,	// (0x0004d918) bg_vkb2_func_pane_g2

0xb4a8,	// (0x0004ae34) bg_vkb2_func_pane_g3

0xb4b0,	// (0x0004ae3c) bg_vkb2_func_pane_g4

0xb721,	// (0x0004b0ad) bg_vkb2_func_pane_g5

0xb4c8,	// (0x0004ae54) bg_vkb2_func_pane_g6

0xb4d0,	// (0x0004ae5c) bg_vkb2_func_pane_g7

0xb4c0,	// (0x0004ae4c) bg_vkb2_func_pane_g8

0xdf6c,	// (0x0004d8f8) bg_vkb2_func_pane_g9

0x0008,

0xfa66,	// (0x0004f3f2) bg_vkb2_func_pane_g

0x91f8,	// (0x00048b84) blid2_tripm_pane_g6_ParamLimits

0x91f8,	// (0x00048b84) blid2_tripm_pane_g6

0xb1fa,	// (0x0004ab86) mp4_progress_pane_g1

0x9267,	// (0x00048bf3) blid2_tripm_values_pane_ParamLimits

0x9267,	// (0x00048bf3) blid2_tripm_values_pane

0x9356,	// (0x00048ce2) blid2_tripm_values_pane_t1

0x9364,	// (0x00048cf0) blid2_tripm_values_pane_t2

0x9372,	// (0x00048cfe) blid2_tripm_values_pane_t3

0x9380,	// (0x00048d0c) blid2_tripm_values_pane_t4

0x938e,	// (0x00048d1a) blid2_tripm_values_pane_t5

0x939c,	// (0x00048d28) blid2_tripm_values_pane_t6

0x93aa,	// (0x00048d36) blid2_tripm_values_pane_t7

0x93b8,	// (0x00048d44) blid2_tripm_values_pane_t8

0x93c6,	// (0x00048d52) blid2_tripm_values_pane_t9

0x0008,

0xfa79,	// (0x0004f405) blid2_tripm_values_pane_t

0x2c4f,	// (0x000425db) call_video_pane_t1_ParamLimits

0x2c69,	// (0x000425f5) call_video_pane_t2_ParamLimits

0xf260,	// (0x0004ebec) call_video_pane_t_ParamLimits

0x0fac,	// (0x00040938) msg_header_pane_g1_ParamLimits

0xe8a8,	// (0x0004e234) msg_header_pane_g2_ParamLimits

0xe8a8,	// (0x0004e234) msg_header_pane_g2

0x0001,

0xf3fc,	// (0x0004ed88) msg_header_pane_g_ParamLimits

0xf3fc,	// (0x0004ed88) msg_header_pane_g

0xdb75,	// (0x0004d501) main_clock2_pane_ParamLimits

0x70db,	// (0x00046a67) grid_clock2_toolbar_pane_ParamLimits

0x70db,	// (0x00046a67) grid_clock2_toolbar_pane

0x70db,	// (0x00046a67) listscroll_clock2_pane_ParamLimits

0x70db,	// (0x00046a67) listscroll_clock2_pane

0x71ee,	// (0x00046b7a) main_clock2_pane_t3_ParamLimits

0x71ee,	// (0x00046b7a) main_clock2_pane_t3

0x7210,	// (0x00046b9c) main_clock2_pane_t4_ParamLimits

0x7210,	// (0x00046b9c) main_clock2_pane_t4

0xbba0,	// (0x0004b52c) cell_clock2_toolbar_pane

0xbba8,	// (0x0004b534) cell_clock2_toolbar_pane_cp01

0xbba8,	// (0x0004b534) cell_clock2_toolbar_pane_cp02

0xbbb0,	// (0x0004b53c) cell_clock2_toolbar_pane_cp03

0xbbb8,	// (0x0004b544) list_clock2_pane

0xe532,	// (0x0004debe) scroll_pane_cp10

0xbbc0,	// (0x0004b54c) list_single_clock2_pane_ParamLimits

0xbbc0,	// (0x0004b54c) list_single_clock2_pane

0xdd26,	// (0x0004d6b2) list_highlight_pane_cp08

0xbbcd,	// (0x0004b559) list_single_clock2_pane_t1

0xbbdb,	// (0x0004b567) list_single_clock2_pane_t2

0x0001,

0xfa8c,	// (0x0004f418) list_single_clock2_pane_t

0xd30f,	// (0x0004cc9b) bg_button_pane_cp10

0xbbe9,	// (0x0004b575) cell_clock2_toolbar_pane_g1

0x4133,	// (0x00043abf) aid_main_viewer_pane_g1_ParamLimits

0x4133,	// (0x00043abf) aid_main_viewer_pane_g1

0x413f,	// (0x00043acb) aid_main_viewer_pane_g2_ParamLimits

0x413f,	// (0x00043acb) aid_main_viewer_pane_g2

0x414b,	// (0x00043ad7) aid_main_viewer_pane_g3_ParamLimits

0x414b,	// (0x00043ad7) aid_main_viewer_pane_g3

0x415a,	// (0x00043ae6) aid_main_viewer_pane_g4_ParamLimits

0x415a,	// (0x00043ae6) aid_main_viewer_pane_g4

0x0003,

0xf40d,	// (0x0004ed99) aid_main_viewer_pane_g_ParamLimits

0xf40d,	// (0x0004ed99) aid_main_viewer_pane_g

0x53e6,	// (0x00044d72) main_calc_pane_ParamLimits

0x5414,	// (0x00044da0) main_dialer2_pane_ParamLimits

0xd30f,	// (0x0004cc9b) main_cam6_pane

0xd30f,	// (0x0004cc9b) main_vid6_pane

0x70e7,	// (0x00046a73) listscroll_gen_pane_cp06_ParamLimits

0x70e7,	// (0x00046a73) listscroll_gen_pane_cp06

0x7231,	// (0x00046bbd) main_clock2_pane_t5_ParamLimits

0x7231,	// (0x00046bbd) main_clock2_pane_t5

0x7288,	// (0x00046c14) aid_call2_pane_cp10_ParamLimits

0x729a,	// (0x00046c26) aid_call_pane_cp10_ParamLimits

0xe5a1,	// (0x0004df2d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe5a1,	// (0x0004df2d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x72ac,	// (0x00046c38) popup_clock_analogue_window_cp10_g3_ParamLimits

0x72ac,	// (0x00046c38) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe5a1,	// (0x0004df2d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71a,	// (0x0004f0a6) popup_clock_analogue_window_cp10_g_ParamLimits

0x72be,	// (0x00046c4a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7d2c,	// (0x000476b8) cell_dialer2_keypad_pane_g2_ParamLimits

0x7d2c,	// (0x000476b8) cell_dialer2_keypad_pane_g2

0x0001,

0xf7fb,	// (0x0004f187) cell_dialer2_keypad_pane_g_ParamLimits

0xf7fb,	// (0x0004f187) cell_dialer2_keypad_pane_g

0x7d48,	// (0x000476d4) cell_dialer2_keypad_pane_t1

0x879f,	// (0x0004812b) main_cset_text2_pane_ParamLimits

0x879f,	// (0x0004812b) main_cset_text2_pane

0xb942,	// (0x0004b2ce) area_vitu2_query_pane_g1_ParamLimits

0x1333,	// (0x00040cbf) area_vitu2_query_pane_g2_ParamLimits

0xf9a9,	// (0x0004f335) area_vitu2_query_pane_g_ParamLimits

0xb9c6,	// (0x0004b352) area_vitu2_query_pane_t7_ParamLimits

0xb9c6,	// (0x0004b352) area_vitu2_query_pane_t7

0x8ec6,	// (0x00048852) bg_button_pane_cp018_ParamLimits

0x8ed3,	// (0x0004885f) bg_button_pane_cp021_ParamLimits

0x136a,	// (0x00040cf6) bg_button_pane_cp022_ParamLimits

0x136a,	// (0x00040cf6) bg_vkb2_func_pane_cp08_ParamLimits

0x8ec6,	// (0x00048852) bg_vkb2_func_pane_cp06_ParamLimits

0x8ed3,	// (0x0004885f) bg_vkb2_func_pane_cp07_ParamLimits

0x1379,	// (0x00040d05) input_focus_pane_cp09_ParamLimits

0xd483,	// (0x0004ce0f) cam6_autofocus_pane_ParamLimits

0xd483,	// (0x0004ce0f) cam6_autofocus_pane

0x93d4,	// (0x00048d60) cam6_image_uncrop_pane_ParamLimits

0x93d4,	// (0x00048d60) cam6_image_uncrop_pane

0x93e1,	// (0x00048d6d) cam6_indi_pane_ParamLimits

0x93e1,	// (0x00048d6d) cam6_indi_pane

0x93f7,	// (0x00048d83) cam6_mode_pane_ParamLimits

0x93f7,	// (0x00048d83) cam6_mode_pane

0x9409,	// (0x00048d95) cam6_timer_pane_ParamLimits

0x9409,	// (0x00048d95) cam6_timer_pane

0x9415,	// (0x00048da1) cam6_zoom_pane_ParamLimits

0x9415,	// (0x00048da1) cam6_zoom_pane

0x9421,	// (0x00048dad) cam6_mode_pane_g1_ParamLimits

0x9421,	// (0x00048dad) cam6_mode_pane_g1

0x9431,	// (0x00048dbd) cam6_mode_pane_g2_ParamLimits

0x9431,	// (0x00048dbd) cam6_mode_pane_g2

0x9441,	// (0x00048dcd) cam6_mode_pane_g3_ParamLimits

0x9441,	// (0x00048dcd) cam6_mode_pane_g3

0x9451,	// (0x00048ddd) cam6_mode_pane_g4_ParamLimits

0x9451,	// (0x00048ddd) cam6_mode_pane_g4

0x0003,

0xfa91,	// (0x0004f41d) cam6_mode_pane_g_ParamLimits

0xfa91,	// (0x0004f41d) cam6_mode_pane_g

0xbbf1,	// (0x0004b57d) bg_tb_trans_pane_cp08_ParamLimits

0xbbf1,	// (0x0004b57d) bg_tb_trans_pane_cp08

0xbbff,	// (0x0004b58b) cam6_battery_pane_ParamLimits

0xbbff,	// (0x0004b58b) cam6_battery_pane

0xbc15,	// (0x0004b5a1) cam6_indi_pane_g1_ParamLimits

0xbc15,	// (0x0004b5a1) cam6_indi_pane_g1

0xbc27,	// (0x0004b5b3) cam6_indi_pane_g2_ParamLimits

0xbc27,	// (0x0004b5b3) cam6_indi_pane_g2

0xbc39,	// (0x0004b5c5) cam6_indi_pane_g3_ParamLimits

0xbc39,	// (0x0004b5c5) cam6_indi_pane_g3

0x0002,

0xfa9a,	// (0x0004f426) cam6_indi_pane_g_ParamLimits

0xfa9a,	// (0x0004f426) cam6_indi_pane_g

0xbc4b,	// (0x0004b5d7) cam6_indi_pane_t1_ParamLimits

0xbc4b,	// (0x0004b5d7) cam6_indi_pane_t1

0x8290,	// (0x00047c1c) cam6_autofocus_pane_g1

0x8298,	// (0x00047c24) cam6_autofocus_pane_g2

0x82a0,	// (0x00047c2c) cam6_autofocus_pane_g3

0x82a8,	// (0x00047c34) cam6_autofocus_pane_g4

0x0003,

0xfaa1,	// (0x0004f42d) cam6_autofocus_pane_g

0xbc71,	// (0x0004b5fd) cam6_timer_pane_g1

0xbc79,	// (0x0004b605) cam6_timer_pane_t1

0xbc87,	// (0x0004b613) cam6_zoom_cont_pane

0xbc8f,	// (0x0004b61b) cam6_zoom_pane_g1

0xbc97,	// (0x0004b623) cam6_zoom_pane_g2

0x9461,	// (0x00048ded) cam6_zoom_pane_g3

0x0002,

0xfaaa,	// (0x0004f436) cam6_zoom_pane_g

0x63d9,	// (0x00045d65) cam6_battery_pane_g1

0x63d9,	// (0x00045d65) cam6_battery_pane_g2

0x0001,

0xf622,	// (0x0004efae) cam6_battery_pane_g

0xbc9f,	// (0x0004b62b) cam6_zoom_cont_pane_g1

0xbca8,	// (0x0004b634) cam6_zoom_cont_pane_g2

0xbcb1,	// (0x0004b63d) cam6_zoom_cont_pane_g3

0x0002,

0xfab1,	// (0x0004f43d) cam6_zoom_cont_pane_g

0x947e,	// (0x00048e0a) cam6_mode_pane_cp_ParamLimits

0x947e,	// (0x00048e0a) cam6_mode_pane_cp

0x9415,	// (0x00048da1) cam6_zoom_pane_cp_ParamLimits

0x9415,	// (0x00048da1) cam6_zoom_pane_cp

0x9490,	// (0x00048e1c) vid6_image_uncrop_cif_pane_ParamLimits

0x9490,	// (0x00048e1c) vid6_image_uncrop_cif_pane

0x949e,	// (0x00048e2a) vid6_image_uncrop_nhd_pane_ParamLimits

0x949e,	// (0x00048e2a) vid6_image_uncrop_nhd_pane

0x93d4,	// (0x00048d60) vid6_image_uncrop_vga_pane_ParamLimits

0x93d4,	// (0x00048d60) vid6_image_uncrop_vga_pane

0x94ab,	// (0x00048e37) vid6_image_uncrop_wvga_pane_ParamLimits

0x94ab,	// (0x00048e37) vid6_image_uncrop_wvga_pane

0x94b8,	// (0x00048e44) vid6_indi_pane_ParamLimits

0x94b8,	// (0x00048e44) vid6_indi_pane

0xbbf1,	// (0x0004b57d) bg_tb_trans_pane_cp09_ParamLimits

0xbbf1,	// (0x0004b57d) bg_tb_trans_pane_cp09

0xbcc5,	// (0x0004b651) cam6_battery_pane_cp_ParamLimits

0xbcc5,	// (0x0004b651) cam6_battery_pane_cp

0xbcd1,	// (0x0004b65d) vid6_indi_pane_g1_ParamLimits

0xbcd1,	// (0x0004b65d) vid6_indi_pane_g1

0xbce3,	// (0x0004b66f) vid6_indi_pane_g2_ParamLimits

0xbce3,	// (0x0004b66f) vid6_indi_pane_g2

0xbcf5,	// (0x0004b681) vid6_indi_pane_g3_ParamLimits

0xbcf5,	// (0x0004b681) vid6_indi_pane_g3

0xbd0a,	// (0x0004b696) vid6_indi_pane_g4_ParamLimits

0xbd0a,	// (0x0004b696) vid6_indi_pane_g4

0xbd1f,	// (0x0004b6ab) vid6_indi_pane_g5_ParamLimits

0xbd1f,	// (0x0004b6ab) vid6_indi_pane_g5

0x0004,

0xfab8,	// (0x0004f444) vid6_indi_pane_g_ParamLimits

0xfab8,	// (0x0004f444) vid6_indi_pane_g

0xbd39,	// (0x0004b6c5) vid6_indi_pane_t1_ParamLimits

0xbd39,	// (0x0004b6c5) vid6_indi_pane_t1

0xbd4f,	// (0x0004b6db) vid6_indi_pane_t2_ParamLimits

0xbd4f,	// (0x0004b6db) vid6_indi_pane_t2

0xbd77,	// (0x0004b703) vid6_indi_pane_t3_ParamLimits

0xbd77,	// (0x0004b703) vid6_indi_pane_t3

0xbd9f,	// (0x0004b72b) vid6_indi_pane_t4_ParamLimits

0xbd9f,	// (0x0004b72b) vid6_indi_pane_t4

0x0003,

0xfac3,	// (0x0004f44f) vid6_indi_pane_t_ParamLimits

0xfac3,	// (0x0004f44f) vid6_indi_pane_t

0xbdc3,	// (0x0004b74f) wait_bar_pane_cp08

0x94cf,	// (0x00048e5b) main_cset_text2_pane_t1_ParamLimits

0x94cf,	// (0x00048e5b) main_cset_text2_pane_t1

0x9469,	// (0x00048df5) listscroll_gen_pane_cp06_t1_ParamLimits

0x9469,	// (0x00048df5) listscroll_gen_pane_cp06_t1

0xd30f,	// (0x0004cc9b) main_cam6_set_pane

0x66a4,	// (0x00046030) bg_tb_trans_pane_cp06_ParamLimits

0xb375,	// (0x0004ad01) cam4_indicators_pane_g1_ParamLimits

0xb386,	// (0x0004ad12) cam4_indicators_pane_g2_ParamLimits

0xf838,	// (0x0004f1c4) cam4_indicators_pane_g_ParamLimits

0xb39e,	// (0x0004ad2a) cam4_indicators_pane_t1_ParamLimits

0xefdc,	// (0x0004e968) bg_tb_trans_pane_cp07_ParamLimits

0xb3c8,	// (0x0004ad54) vid4_indicators_pane_g1_ParamLimits

0xb3dc,	// (0x0004ad68) vid4_indicators_pane_g2_ParamLimits

0xb3f0,	// (0x0004ad7c) vid4_indicators_pane_g3_ParamLimits

0xb401,	// (0x0004ad8d) vid4_indicators_pane_g4_ParamLimits

0xf84a,	// (0x0004f1d6) vid4_indicators_pane_g_ParamLimits

0xb41d,	// (0x0004ada9) vid4_indicators_pane_t1_ParamLimits

0xd41a,	// (0x0004cda6) vid4_progress_pane_g1_ParamLimits

0xd42a,	// (0x0004cdb6) vid4_progress_pane_g2_ParamLimits

0x9007,	// (0x00048993) vid4_progress_pane_g3_ParamLimits

0xd43a,	// (0x0004cdc6) vid4_progress_pane_g4_ParamLimits

0xf9f4,	// (0x0004f380) vid4_progress_pane_g_ParamLimits

0x9019,	// (0x000489a5) vid4_progress_pane_t1_ParamLimits

0xd458,	// (0x0004cde4) vid4_progress_pane_t2_ParamLimits

0xd46d,	// (0x0004cdf9) vid4_progress_pane_t3_ParamLimits

0xf9ff,	// (0x0004f38b) vid4_progress_pane_t_ParamLimits

0x902f,	// (0x000489bb) wait_bar_pane_cp07_ParamLimits

0x94ea,	// (0x00048e76) main_cam6_set_pane_g2_ParamLimits

0x94ea,	// (0x00048e76) main_cam6_set_pane_g2

0x950c,	// (0x00048e98) main_cset6_listscroll_pane_ParamLimits

0x950c,	// (0x00048e98) main_cset6_listscroll_pane

0x9526,	// (0x00048eb2) main_cset6_slider_pane_ParamLimits

0x9526,	// (0x00048eb2) main_cset6_slider_pane

0x953c,	// (0x00048ec8) main_cset6_text2_pane_ParamLimits

0x953c,	// (0x00048ec8) main_cset6_text2_pane

0xbdd2,	// (0x0004b75e) main_cset6_text_pane

0xbdda,	// (0x0004b766) main_cset_list_pane_copy1_ParamLimits

0xbdda,	// (0x0004b766) main_cset_list_pane_copy1

0xbdea,	// (0x0004b776) scroll_pane_cp028_copy1

0x954a,	// (0x00048ed6) cset_list_set_pane_copy1

0x955b,	// (0x00048ee7) aid_position_infowindow_above_copy1

0x9563,	// (0x00048eef) aid_position_infowindow_below_copy1

0x139c,	// (0x00040d28) cset_list_set_pane_g1_copy1

0x11ac,	// (0x00040b38) cset_list_set_pane_g3_copy1_ParamLimits

0x11ac,	// (0x00040b38) cset_list_set_pane_g3_copy1

0x13a4,	// (0x00040d30) cset_list_set_pane_t1_copy1_ParamLimits

0x13a4,	// (0x00040d30) cset_list_set_pane_t1_copy1

0xefdc,	// (0x0004e968) list_highlight_pane_cp021_copy1_ParamLimits

0xefdc,	// (0x0004e968) list_highlight_pane_cp021_copy1

0xbdf3,	// (0x0004b77f) cset6_slider_pane_ParamLimits

0xbdf3,	// (0x0004b77f) cset6_slider_pane

0xbe1f,	// (0x0004b7ab) main_cset6_slider_pane_g1_ParamLimits

0xbe1f,	// (0x0004b7ab) main_cset6_slider_pane_g1

0x956b,	// (0x00048ef7) main_cset6_slider_pane_g2_ParamLimits

0x956b,	// (0x00048ef7) main_cset6_slider_pane_g2

0xb5f9,	// (0x0004af85) main_cset6_slider_pane_g3_ParamLimits

0xb5f9,	// (0x0004af85) main_cset6_slider_pane_g3

0x9593,	// (0x00048f1f) main_cset6_slider_pane_g4_ParamLimits

0x9593,	// (0x00048f1f) main_cset6_slider_pane_g4

0x886a,	// (0x000481f6) main_cset6_slider_pane_g5_ParamLimits

0x886a,	// (0x000481f6) main_cset6_slider_pane_g5

0xb5f9,	// (0x0004af85) main_cset6_slider_pane_g7_ParamLimits

0xb5f9,	// (0x0004af85) main_cset6_slider_pane_g7

0xb605,	// (0x0004af91) main_cset6_slider_pane_g8_ParamLimits

0xb605,	// (0x0004af91) main_cset6_slider_pane_g8

0x8822,	// (0x000481ae) main_cset6_slider_pane_g9_ParamLimits

0x8822,	// (0x000481ae) main_cset6_slider_pane_g9

0x882e,	// (0x000481ba) main_cset6_slider_pane_g10_ParamLimits

0x882e,	// (0x000481ba) main_cset6_slider_pane_g10

0xb611,	// (0x0004af9d) main_cset6_slider_pane_g11_ParamLimits

0xb611,	// (0x0004af9d) main_cset6_slider_pane_g11

0xb61d,	// (0x0004afa9) main_cset6_slider_pane_g12_ParamLimits

0xb61d,	// (0x0004afa9) main_cset6_slider_pane_g12

0x883a,	// (0x000481c6) main_cset6_slider_pane_g13_ParamLimits

0x883a,	// (0x000481c6) main_cset6_slider_pane_g13

0x8846,	// (0x000481d2) main_cset6_slider_pane_g14_ParamLimits

0x8846,	// (0x000481d2) main_cset6_slider_pane_g14

0x959f,	// (0x00048f2b) main_cset6_slider_pane_g15_ParamLimits

0x959f,	// (0x00048f2b) main_cset6_slider_pane_g15

0x886a,	// (0x000481f6) main_cset6_slider_pane_g16_ParamLimits

0x886a,	// (0x000481f6) main_cset6_slider_pane_g16

0x8876,	// (0x00048202) main_cset6_slider_pane_g17_ParamLimits

0x8876,	// (0x00048202) main_cset6_slider_pane_g17

0x0011,

0xfacc,	// (0x0004f458) main_cset6_slider_pane_g_ParamLimits

0xfacc,	// (0x0004f458) main_cset6_slider_pane_g

0xbe47,	// (0x0004b7d3) main_cset6_slider_pane_t1_ParamLimits

0xbe47,	// (0x0004b7d3) main_cset6_slider_pane_t1

0x95c3,	// (0x00048f4f) main_cset6_slider_pane_t2_ParamLimits

0x95c3,	// (0x00048f4f) main_cset6_slider_pane_t2

0x95ee,	// (0x00048f7a) main_cset6_slider_pane_t3_ParamLimits

0x95ee,	// (0x00048f7a) main_cset6_slider_pane_t3

0x9619,	// (0x00048fa5) main_cset6_slider_pane_t4_ParamLimits

0x9619,	// (0x00048fa5) main_cset6_slider_pane_t4

0x9644,	// (0x00048fd0) main_cset6_slider_pane_t5_ParamLimits

0x9644,	// (0x00048fd0) main_cset6_slider_pane_t5

0xbe88,	// (0x0004b814) main_cset6_slider_pane_t7_ParamLimits

0xbe88,	// (0x0004b814) main_cset6_slider_pane_t7

0x966f,	// (0x00048ffb) main_cset6_slider_pane_t8_ParamLimits

0x966f,	// (0x00048ffb) main_cset6_slider_pane_t8

0x9693,	// (0x0004901f) main_cset6_slider_pane_t9_ParamLimits

0x9693,	// (0x0004901f) main_cset6_slider_pane_t9

0x96b7,	// (0x00049043) main_cset6_slider_pane_t10_ParamLimits

0x96b7,	// (0x00049043) main_cset6_slider_pane_t10

0x96db,	// (0x00049067) main_cset6_slider_pane_t11_ParamLimits

0x96db,	// (0x00049067) main_cset6_slider_pane_t11

0xbebe,	// (0x0004b84a) main_cset6_slider_pane_t14_ParamLimits

0xbebe,	// (0x0004b84a) main_cset6_slider_pane_t14

0xbef7,	// (0x0004b883) main_cset6_slider_pane_t15_ParamLimits

0xbef7,	// (0x0004b883) main_cset6_slider_pane_t15

0x000b,

0xfaf1,	// (0x0004f47d) main_cset6_slider_pane_t_ParamLimits

0xfaf1,	// (0x0004f47d) main_cset6_slider_pane_t

0xb6d5,	// (0x0004b061) cset_slider_pane_g1_copy1

0xb6de,	// (0x0004b06a) cset_slider_pane_g2_copy1

0xb6e7,	// (0x0004b073) cset_slider_pane_g3_copy1

0xd30f,	// (0x0004cc9b) bg_popup_sub_pane_cp011_copy1

0xbf30,	// (0x0004b8bc) main_cset_text_pane_g1_copy1

0xb770,	// (0x0004b0fc) main_cset_text_pane_t1_copy1

0xb77e,	// (0x0004b10a) main_cset_text_pane_t2_copy1

0xb78c,	// (0x0004b118) main_cset_text_pane_t3_copy1

0xb79a,	// (0x0004b126) main_cset_text_pane_t4_copy1

0xbf38,	// (0x0004b8c4) main_cset_text_pane_t5_copy1

0xbf46,	// (0x0004b8d2) main_cset_text_pane_t6_copy1

0xbf54,	// (0x0004b8e0) main_cset_text_pane_t7_copy1

0x96ff,	// (0x0004908b) main_cset_text2_pane_t1_copy1

0xefdc,	// (0x0004e968) main_ncimui_pane

0x562e,	// (0x00044fba) popup_query_ncimui_window_ParamLimits

0x562e,	// (0x00044fba) popup_query_ncimui_window

0xaf9f,	// (0x0004a92b) field_cale_ev2_pane_g4_ParamLimits

0xaf9f,	// (0x0004a92b) field_cale_ev2_pane_g4

0x7c25,	// (0x000475b1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7c25,	// (0x000475b1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d6,	// (0x0004f162) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d6,	// (0x0004f162) cell_video_dialer_keypad_pane_g

0x7c3d,	// (0x000475c9) cell_video_dialer_keypad_pane_t1

0xd30f,	// (0x0004cc9b) bg_popup_window_pane_cp012

0xe41b,	// (0x0004dda7) heading_pane_cp06

0xbf80,	// (0x0004b90c) ncim_query_content_pane

0xd30f,	// (0x0004cc9b) bg_popup_heading_pane_cp01

0xbf88,	// (0x0004b914) ncim_heading_pane_t1

0xbf96,	// (0x0004b922) ncim_indicator_popup_pane

0xbfa8,	// (0x0004b934) ncim_query_button_pane

0xbfbc,	// (0x0004b948) ncim_query_content_pane_t1

0xbfce,	// (0x0004b95a) ncim_query_content_pane_t2

0x0005,

0xfb35,	// (0x0004f4c1) ncim_query_content_pane_t

0xc008,	// (0x0004b994) ncim_query_list_pane

0xc01a,	// (0x0004b9a6) ncim_query_popup_pane

0xbf96,	// (0x0004b922) ncim_indicator_popup_pane_ParamLimits

0x983f,	// (0x000491cb) ncim_query_content_pane_g1_ParamLimits

0x983f,	// (0x000491cb) ncim_query_content_pane_g1

0xbfbc,	// (0x0004b948) ncim_query_content_pane_t1_ParamLimits

0xbfce,	// (0x0004b95a) ncim_query_content_pane_t2_ParamLimits

0x984b,	// (0x000491d7) ncim_query_content_pane_t3_ParamLimits

0x984b,	// (0x000491d7) ncim_query_content_pane_t3

0x9873,	// (0x000491ff) ncim_query_content_pane_t4_ParamLimits

0x9873,	// (0x000491ff) ncim_query_content_pane_t4

0x989b,	// (0x00049227) ncim_query_content_pane_t5_ParamLimits

0x989b,	// (0x00049227) ncim_query_content_pane_t5

0xbfe0,	// (0x0004b96c) ncim_query_content_pane_t6_ParamLimits

0xbfe0,	// (0x0004b96c) ncim_query_content_pane_t6

0xfb35,	// (0x0004f4c1) ncim_query_content_pane_t_ParamLimits

0xc008,	// (0x0004b994) ncim_query_list_pane_ParamLimits

0xc01a,	// (0x0004b9a6) ncim_query_popup_pane_ParamLimits

0xc02e,	// (0x0004b9ba) wait_bar_pane_cp04

0xd30f,	// (0x0004cc9b) input_focus_pane_cp011

0xc036,	// (0x0004b9c2) ncim_query_popup_pane_t1

0xc044,	// (0x0004b9d0) ncim_list_query_list_pane_ParamLimits

0xc044,	// (0x0004b9d0) ncim_list_query_list_pane

0xd30f,	// (0x0004cc9b) bg_button_pane_cp027

0xc057,	// (0x0004b9e3) ncim_query_button_pane_g1

0xd30f,	// (0x0004cc9b) list_highlight_pane_cp012

0xc061,	// (0x0004b9ed) ncim_list_query_list_pane_g1

0xc069,	// (0x0004b9f5) ncim_list_query_list_pane_t1

0xb392,	// (0x0004ad1e) cam4_indicators_pane_g3_ParamLimits

0xb392,	// (0x0004ad1e) cam4_indicators_pane_g3

0xb40d,	// (0x0004ad99) vid4_indicators_pane_g5_ParamLimits

0xb40d,	// (0x0004ad99) vid4_indicators_pane_g5

0xd449,	// (0x0004cdd5) vid4_progress_pane_g5_ParamLimits

0xd449,	// (0x0004cdd5) vid4_progress_pane_g5

0x972b,	// (0x000490b7) main_ncimui_pane_g1

0x9794,	// (0x00049120) ncimui_group_query_pane_ParamLimits

0x9794,	// (0x00049120) ncimui_group_query_pane

0x97dc,	// (0x00049168) ncimui_list_pane_ParamLimits

0x97dc,	// (0x00049168) ncimui_list_pane

0x9802,	// (0x0004918e) ncimui_text_pane_ParamLimits

0x9802,	// (0x0004918e) ncimui_text_pane

0x98c3,	// (0x0004924f) ncimui_text_pane_t1_ParamLimits

0x98c3,	// (0x0004924f) ncimui_text_pane_t1

0xc077,	// (0x0004ba03) ncimui_list_single_graphic_pane_ParamLimits

0xc077,	// (0x0004ba03) ncimui_list_single_graphic_pane

0x98e0,	// (0x0004926c) ncimui_query_pane_ParamLimits

0x98e0,	// (0x0004926c) ncimui_query_pane

0xd30f,	// (0x0004cc9b) list_highlight_pane_cp013

0xc087,	// (0x0004ba13) ncim_list_query_list_pane_t1_copy1

0xc095,	// (0x0004ba21) ncim_list_single_graphic_pane_g1

0x98f3,	// (0x0004927f) ncim_query_button_pane_cp01

0x98ff,	// (0x0004928b) ncim_query_entry_pane_ParamLimits

0x98ff,	// (0x0004928b) ncim_query_entry_pane

0x9912,	// (0x0004929e) ncimui_query_pane_g1

0x991e,	// (0x000492aa) ncimui_query_pane_t1_ParamLimits

0x991e,	// (0x000492aa) ncimui_query_pane_t1

0xefdc,	// (0x0004e968) input_focus_pane_cp012

0xc09d,	// (0x0004ba29) ncim_query_entry_pane_t1

0xdb75,	// (0x0004d501) main_im_pane_ParamLimits

0xefdc,	// (0x0004e968) main_mobtv_pane_ParamLimits

0xefdc,	// (0x0004e968) main_mobtv_pane

0x8822,	// (0x000481ae) main_cset6_slider_pane_g18_ParamLimits

0x8822,	// (0x000481ae) main_cset6_slider_pane_g18

0x95b7,	// (0x00048f43) main_cset6_slider_pane_g19_ParamLimits

0x95b7,	// (0x00048f43) main_cset6_slider_pane_g19

0xc0af,	// (0x0004ba3b) bg_main_mobtv_pane_ParamLimits

0xc0af,	// (0x0004ba3b) bg_main_mobtv_pane

0x9937,	// (0x000492c3) main_mobtv_info_pane

0x9940,	// (0x000492cc) main_mobtv_loading_pane_ParamLimits

0x9940,	// (0x000492cc) main_mobtv_loading_pane

0xc0bd,	// (0x0004ba49) main_mobtv_pg_channel_list_pane

0xc0c7,	// (0x0004ba53) main_mobtv_pg_hdr_pane

0x994d,	// (0x000492d9) main_mobtv_programe_curr_pane_ParamLimits

0x994d,	// (0x000492d9) main_mobtv_programe_curr_pane

0x995a,	// (0x000492e6) main_mobtv_programe_next_pane_ParamLimits

0x995a,	// (0x000492e6) main_mobtv_programe_next_pane

0xc0d0,	// (0x0004ba5c) popup_mobtv_noti_window

0x63d9,	// (0x00045d65) main_tv_pg_hdr_pane_g1

0xc0d8,	// (0x0004ba64) main_tv_pg_hdr_pane_g2

0xc0e0,	// (0x0004ba6c) main_tv_pg_hdr_pane_g3

0xc0e8,	// (0x0004ba74) main_tv_pg_hdr_pane_g4

0xc0f0,	// (0x0004ba7c) main_tv_pg_hdr_pane_g5

0xc0f8,	// (0x0004ba84) main_tv_pg_hdr_pane_g6

0xc100,	// (0x0004ba8c) main_tv_pg_hdr_pane_g7

0xc108,	// (0x0004ba94) main_tv_pg_hdr_pane_g8

0xc110,	// (0x0004ba9c) main_tv_pg_hdr_pane_g9

0xc118,	// (0x0004baa4) main_tv_pg_hdr_pane_g10

0xc122,	// (0x0004baae) main_tv_pg_hdr_pane_g11

0x000a,

0xfb42,	// (0x0004f4ce) main_tv_pg_hdr_pane_g

0xc12c,	// (0x0004bab8) main_tv_pg_hdr_pane_t1

0xc13a,	// (0x0004bac6) main_tv_pg_hdr_pane_t2

0xc148,	// (0x0004bad4) main_tv_pg_hdr_pane_t3

0xc156,	// (0x0004bae2) main_tv_pg_hdr_pane_t4

0xc164,	// (0x0004baf0) main_tv_pg_hdr_pane_t5

0x0004,

0xfb59,	// (0x0004f4e5) main_tv_pg_hdr_pane_t

0xc172,	// (0x0004bafe) single_mobtv_pg_channel_pane_ParamLimits

0xc172,	// (0x0004bafe) single_mobtv_pg_channel_pane

0xc184,	// (0x0004bb10) single_mobtv_pg_channel_table_pane

0xc18d,	// (0x0004bb19) single_mobtv_pg_channel_thumb_pane

0xc196,	// (0x0004bb22) single_tv_pg_channel_pane_g1

0xc19f,	// (0x0004bb2b) single_tv_pg_channel_pane_g2

0x0001,

0xfb64,	// (0x0004f4f0) single_tv_pg_channel_pane_g

0x66a4,	// (0x00046030) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x66a4,	// (0x00046030) bg_single_mobtv_pg_channel_thumb_pane

0xc1a8,	// (0x0004bb34) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc1a8,	// (0x0004bb34) single_mobtv_pg_channel_thumb_pane_g1

0xc1b6,	// (0x0004bb42) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc1b6,	// (0x0004bb42) single_mobtv_pg_channel_thumb_pane_g2

0xc1c2,	// (0x0004bb4e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc1c2,	// (0x0004bb4e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb69,	// (0x0004f4f5) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb69,	// (0x0004f4f5) single_mobtv_pg_channel_thumb_pane_g

0xc1ce,	// (0x0004bb5a) single_mobtv_pg_channel_thumb_pane_t1

0xc1dc,	// (0x0004bb68) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb70,	// (0x0004f4fc) single_mobtv_pg_channel_thumb_pane_t

0x63d9,	// (0x00045d65) bg_single_mobtv_pg_channel_table_pane_g1

0x63d9,	// (0x00045d65) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf622,	// (0x0004efae) bg_single_mobtv_pg_channel_table_pane_g

0xc1ea,	// (0x0004bb76) single_mobtv_pg_channel_table_pane_t1

0xc1f8,	// (0x0004bb84) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb75,	// (0x0004f501) single_mobtv_pg_channel_table_pane_t

0x996f,	// (0x000492fb) main_mobtv_info_pane_g1_ParamLimits

0x996f,	// (0x000492fb) main_mobtv_info_pane_g1

0x998b,	// (0x00049317) main_mobtv_info_pane_t1_ParamLimits

0x998b,	// (0x00049317) main_mobtv_info_pane_t1

0x99f1,	// (0x0004937d) main_mobtv_info_pane_t2_ParamLimits

0x99f1,	// (0x0004937d) main_mobtv_info_pane_t2

0x0002,

0xfb7f,	// (0x0004f50b) main_mobtv_info_pane_t_ParamLimits

0xfb7f,	// (0x0004f50b) main_mobtv_info_pane_t

0x9a74,	// (0x00049400) wait_bar_pane_cp05

0x9a84,	// (0x00049410) main_mobtv_loading_pane_g1_ParamLimits

0x9a84,	// (0x00049410) main_mobtv_loading_pane_g1

0x9a95,	// (0x00049421) main_mobtv_loading_pane_g2_ParamLimits

0x9a95,	// (0x00049421) main_mobtv_loading_pane_g2

0x9aa1,	// (0x0004942d) main_mobtv_loading_pane_g3_ParamLimits

0x9aa1,	// (0x0004942d) main_mobtv_loading_pane_g3

0x0002,

0xfb86,	// (0x0004f512) main_mobtv_loading_pane_g_ParamLimits

0xfb86,	// (0x0004f512) main_mobtv_loading_pane_g

0xc206,	// (0x0004bb92) main_mobtv_loading_pane_t1_ParamLimits

0xc206,	// (0x0004bb92) main_mobtv_loading_pane_t1

0xc21e,	// (0x0004bbaa) main_mobtv_loading_pane_t2_ParamLimits

0xc21e,	// (0x0004bbaa) main_mobtv_loading_pane_t2

0x0001,

0xfb8d,	// (0x0004f519) main_mobtv_loading_pane_t_ParamLimits

0xfb8d,	// (0x0004f519) main_mobtv_loading_pane_t

0x9ab2,	// (0x0004943e) wait_bar_pane_cp06_ParamLimits

0x9ab2,	// (0x0004943e) wait_bar_pane_cp06

0xc242,	// (0x0004bbce) main_mobtv_programe_curr_pane_t1

0xc250,	// (0x0004bbdc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb92,	// (0x0004f51e) main_mobtv_programe_curr_pane_t

0xc25e,	// (0x0004bbea) main_mobtv_programe_next_pane_t1

0xc26c,	// (0x0004bbf8) main_mobtv_programe_next_pane_t2

0xc27a,	// (0x0004bc06) main_mobtv_programe_next_pane_t3

0x0002,

0xfb97,	// (0x0004f523) main_mobtv_programe_next_pane_t

0xd30f,	// (0x0004cc9b) bg_popup_mobtv_noti_window_pane

0xc288,	// (0x0004bc14) popup_mobtv_noti_window_g1

0xc290,	// (0x0004bc1c) popup_mobtv_noti_window_t1

0xc29e,	// (0x0004bc2a) popup_mobtv_noti_window_t2

0x0001,

0xfb9e,	// (0x0004f52a) popup_mobtv_noti_window_t

0x63d9,	// (0x00045d65) bg_popup_mobtv_noti_window_pane_g1

0xd30f,	// (0x0004cc9b) sc_clock_pane

0xd30f,	// (0x0004cc9b) main_fs_bigclock_pane

0x9251,	// (0x00048bdd) blid2_tripm_pane_t4_ParamLimits

0x9251,	// (0x00048bdd) blid2_tripm_pane_t4

0x9ac1,	// (0x0004944d) sc_clock_pane_g1_ParamLimits

0x9ac1,	// (0x0004944d) sc_clock_pane_g1

0x9ad3,	// (0x0004945f) sc_clock_pane_t1_ParamLimits

0x9ad3,	// (0x0004945f) sc_clock_pane_t1

0x9af5,	// (0x00049481) sc_clock_pane_t2_ParamLimits

0x9af5,	// (0x00049481) sc_clock_pane_t2

0x9b0b,	// (0x00049497) sc_clock_pane_t3_ParamLimits

0x9b0b,	// (0x00049497) sc_clock_pane_t3

0x0004,

0xfba3,	// (0x0004f52f) sc_clock_pane_t_ParamLimits

0xfba3,	// (0x0004f52f) sc_clock_pane_t

0xa365,	// (0x00049cf1) main_fs_bigclock_indicator_pane_ParamLimits

0xa365,	// (0x00049cf1) main_fs_bigclock_indicator_pane

0x9ba1,	// (0x0004952d) main_fs_bigclock_pane_g1_ParamLimits

0x9ba1,	// (0x0004952d) main_fs_bigclock_pane_g1

0xa371,	// (0x00049cfd) main_fs_bigclock_pane_t1_ParamLimits

0xa371,	// (0x00049cfd) main_fs_bigclock_pane_t1

0xa383,	// (0x00049d0f) main_fs_bigclock_pane_t2_ParamLimits

0xa383,	// (0x00049d0f) main_fs_bigclock_pane_t2

0xa395,	// (0x00049d21) main_fs_bigclock_pane_t3_ParamLimits

0xa395,	// (0x00049d21) main_fs_bigclock_pane_t3

0x0002,

0xfdad,	// (0x0004f739) main_fs_bigclock_pane_t_ParamLimits

0xfdad,	// (0x0004f739) main_fs_bigclock_pane_t

0xceb5,	// (0x0004c841) main_fs_bigclock_indicator_pane_g1

0xbfb0,	// (0x0004b93c) ncim_query_content_pane_g2_ParamLimits

0xbfb0,	// (0x0004b93c) ncim_query_content_pane_g2

0x0001,

0xfb30,	// (0x0004f4bc) ncim_query_content_pane_g_ParamLimits

0xfb30,	// (0x0004f4bc) ncim_query_content_pane_g

0x9b22,	// (0x000494ae) sc_clock_pane_t4_ParamLimits

0x9b22,	// (0x000494ae) sc_clock_pane_t4

0xefdc,	// (0x0004e968) main_radioblah_pane

0xb2cb,	// (0x0004ac57) cell_call4_button_pane_t1_copy1_ParamLimits

0xb2cb,	// (0x0004ac57) cell_call4_button_pane_t1_copy1

0x9743,	// (0x000490cf) main_ncimui_pane_t1_ParamLimits

0x9743,	// (0x000490cf) main_ncimui_pane_t1

0x975d,	// (0x000490e9) main_ncimui_pane_t2_ParamLimits

0x975d,	// (0x000490e9) main_ncimui_pane_t2

0x0002,

0xfb29,	// (0x0004f4b5) main_ncimui_pane_t_ParamLimits

0xfb29,	// (0x0004f4b5) main_ncimui_pane_t

0xc3df,	// (0x0004bd6b) main_radioblah_anim_pane_ParamLimits

0xc3df,	// (0x0004bd6b) main_radioblah_anim_pane

0xc3f0,	// (0x0004bd7c) main_radioblah_info_pane_ParamLimits

0xc3f0,	// (0x0004bd7c) main_radioblah_info_pane

0xc404,	// (0x0004bd90) main_radioblah_pane_t1_ParamLimits

0xc404,	// (0x0004bd90) main_radioblah_pane_t1

0xc420,	// (0x0004bdac) main_radioblah_pane_t2_ParamLimits

0xc420,	// (0x0004bdac) main_radioblah_pane_t2

0x0003,

0xfbc4,	// (0x0004f550) main_radioblah_pane_t_ParamLimits

0xfbc4,	// (0x0004f550) main_radioblah_pane_t

0x9bee,	// (0x0004957a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9bee,	// (0x0004957a) main_radioblah_rocker_ctrl_pane

0xc468,	// (0x0004bdf4) main_radioblah_info_pane_t1_ParamLimits

0xc468,	// (0x0004bdf4) main_radioblah_info_pane_t1

0x9c42,	// (0x000495ce) main_radioblah_info_pane_t2_ParamLimits

0x9c42,	// (0x000495ce) main_radioblah_info_pane_t2

0x0003,

0xfbcd,	// (0x0004f559) main_radioblah_info_pane_t_ParamLimits

0xfbcd,	// (0x0004f559) main_radioblah_info_pane_t

0x63d9,	// (0x00045d65) main_radioblah_rocker_ctrl_pane_g1

0x9cee,	// (0x0004967a) main_radioblah_rocker_ctrl_pane_g2

0x9cf6,	// (0x00049682) main_radioblah_rocker_ctrl_pane_g3

0x9cfe,	// (0x0004968a) main_radioblah_rocker_ctrl_pane_g4

0x9d06,	// (0x00049692) main_radioblah_rocker_ctrl_pane_g5

0x9d0e,	// (0x0004969a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd6,	// (0x0004f562) main_radioblah_rocker_ctrl_pane_g

0x96ff,	// (0x0004908b) main_cset_text2_pane_t1_copy1_ParamLimits

0xb353,	// (0x0004acdf) cam4_image_uncrop_qvga_pane

0xb3b8,	// (0x0004ad44) vid4_image_uncrop_qcif_pane

0xd483,	// (0x0004ce0f) cam6_image_uncrop_qvga_pane_ParamLimits

0xd483,	// (0x0004ce0f) cam6_image_uncrop_qvga_pane

0xbcb9,	// (0x0004b645) vid6_image_uncrop_qcif_pane_ParamLimits

0xbcb9,	// (0x0004b645) vid6_image_uncrop_qcif_pane

0xd30f,	// (0x0004cc9b) bg_popup_preview_window_pane_cp03

0xbf62,	// (0x0004b8ee) list_cset_text2_pane

0xbf6a,	// (0x0004b8f6) main_cset6_text2_pane_g1

0xbf72,	// (0x0004b8fe) main_cset6_text2_pane_t1

0xc4a2,	// (0x0004be2e) list_cset_text2_pane_t1_ParamLimits

0xc4a2,	// (0x0004be2e) list_cset_text2_pane_t1

0xefdc,	// (0x0004e968) main_radioblah_pane_ParamLimits

0x9a62,	// (0x000493ee) main_mobtv_info_pane_t3_ParamLimits

0x9a62,	// (0x000493ee) main_mobtv_info_pane_t3

0x9bdc,	// (0x00049568) main_radioblah_pane_g1

0x9c16,	// (0x000495a2) main_radioblah_info_pane_g1

0x9c93,	// (0x0004961f) main_radioblah_info_pane_t3_ParamLimits

0x9c93,	// (0x0004961f) main_radioblah_info_pane_t3

0x38d5,	// (0x00043261) highlight_cell_cale_month_pane_ParamLimits

0x38d5,	// (0x00043261) highlight_cell_cale_month_pane

0xd30f,	// (0x0004cc9b) main_phob_fisheye_pane

0x6edf,	// (0x0004686b) scroll_pane_cp0031_ParamLimits

0x6edf,	// (0x0004686b) scroll_pane_cp0031

0xbdc3,	// (0x0004b74f) wait_bar_pane_cp08_ParamLimits

0x954a,	// (0x00048ed6) cset_list_set_pane_copy1_ParamLimits

0xc4b9,	// (0x0004be45) highlight_cell_cale_month_pane_g1

0x9d16,	// (0x000496a2) highlight_cell_cale_month_pane_t1

0xba32,	// (0x0004b3be) list_gen_pane_cp01

0xb5ba,	// (0x0004af46) scroll_pane_01

0x9d24,	// (0x000496b0) list_single_double_fisheye_pane

0x148a,	// (0x00040e16) list_double_fisheye_pane_g1_ParamLimits

0x148a,	// (0x00040e16) list_double_fisheye_pane_g1

0x1496,	// (0x00040e22) list_double_fisheye_pane_g2_ParamLimits

0x1496,	// (0x00040e22) list_double_fisheye_pane_g2

0x9d2d,	// (0x000496b9) list_double_fisheye_pane_g3_ParamLimits

0x9d2d,	// (0x000496b9) list_double_fisheye_pane_g3

0x0004,

0xfbe3,	// (0x0004f56f) list_double_fisheye_pane_g_ParamLimits

0xfbe3,	// (0x0004f56f) list_double_fisheye_pane_g

0x14c7,	// (0x00040e53) list_double_fisheye_pane_t1_ParamLimits

0x14c7,	// (0x00040e53) list_double_fisheye_pane_t1

0x14e2,	// (0x00040e6e) list_double_fisheye_pane_t2_ParamLimits

0x14e2,	// (0x00040e6e) list_double_fisheye_pane_t2

0x0001,

0xfbee,	// (0x0004f57a) list_double_fisheye_pane_t_ParamLimits

0xfbee,	// (0x0004f57a) list_double_fisheye_pane_t

0xd30f,	// (0x0004cc9b) main_call5_pane

0x9b4b,	// (0x000494d7) sc_swipe_pane_ParamLimits

0x9b4b,	// (0x000494d7) sc_swipe_pane

0x9d4a,	// (0x000496d6) call5_image_pane_ParamLimits

0x9d4a,	// (0x000496d6) call5_image_pane

0x9d5f,	// (0x000496eb) call5_swipe_1_pane_ParamLimits

0x9d5f,	// (0x000496eb) call5_swipe_1_pane

0x9d70,	// (0x000496fc) call5_swipe_2_pane_ParamLimits

0x9d70,	// (0x000496fc) call5_swipe_2_pane

0x9d95,	// (0x00049721) popup_call5_audio_first_window_ParamLimits

0x9d95,	// (0x00049721) popup_call5_audio_first_window

0x66a4,	// (0x00046030) call5_swipe_1_pane_g1_ParamLimits

0x66a4,	// (0x00046030) call5_swipe_1_pane_g1

0xc4c1,	// (0x0004be4d) call5_swipe_1_pane_g2_ParamLimits

0xc4c1,	// (0x0004be4d) call5_swipe_1_pane_g2

0x0001,

0xfbf3,	// (0x0004f57f) call5_swipe_1_pane_g_ParamLimits

0xfbf3,	// (0x0004f57f) call5_swipe_1_pane_g

0xc4cd,	// (0x0004be59) call5_swipe_1_pane_t1_ParamLimits

0xc4cd,	// (0x0004be59) call5_swipe_1_pane_t1

0x66a4,	// (0x00046030) call5_swipe_2_pane_g1_ParamLimits

0x66a4,	// (0x00046030) call5_swipe_2_pane_g1

0xc4e2,	// (0x0004be6e) call5_swipe_2_pane_g2_ParamLimits

0xc4e2,	// (0x0004be6e) call5_swipe_2_pane_g2

0x0001,

0xfbf8,	// (0x0004f584) call5_swipe_2_pane_g_ParamLimits

0xfbf8,	// (0x0004f584) call5_swipe_2_pane_g

0xc4ee,	// (0x0004be7a) call5_swipe_2_pane_t1_ParamLimits

0xc4ee,	// (0x0004be7a) call5_swipe_2_pane_t1

0xc503,	// (0x0004be8f) sc_swipe_pane_g1_ParamLimits

0xc503,	// (0x0004be8f) sc_swipe_pane_g1

0xc510,	// (0x0004be9c) sc_swipe_pane_g2_ParamLimits

0xc510,	// (0x0004be9c) sc_swipe_pane_g2

0x0001,

0xfbfd,	// (0x0004f589) sc_swipe_pane_g_ParamLimits

0xfbfd,	// (0x0004f589) sc_swipe_pane_g

0xc51c,	// (0x0004bea8) sc_swipe_pane_t1_ParamLimits

0xc51c,	// (0x0004bea8) sc_swipe_pane_t1

0xd30f,	// (0x0004cc9b) main_cmail_launcher_pane

0x9da4,	// (0x00049730) aid_size_cell_cmail_l_ParamLimits

0x9da4,	// (0x00049730) aid_size_cell_cmail_l

0x9dbd,	// (0x00049749) grid_cmail_l_pane_ParamLimits

0x9dbd,	// (0x00049749) grid_cmail_l_pane

0x9dd1,	// (0x0004975d) cell_cmail_l_pane_ParamLimits

0x9dd1,	// (0x0004975d) cell_cmail_l_pane

0x9df3,	// (0x0004977f) cell_cmail_l_pane_g1_ParamLimits

0x9df3,	// (0x0004977f) cell_cmail_l_pane_g1

0x9e04,	// (0x00049790) cell_cmail_l_pane_t1_ParamLimits

0x9e04,	// (0x00049790) cell_cmail_l_pane_t1

0xc531,	// (0x0004bebd) cell_cmail_l_pane_t2_ParamLimits

0xc531,	// (0x0004bebd) cell_cmail_l_pane_t2

0x0001,

0xfc02,	// (0x0004f58e) cell_cmail_l_pane_t_ParamLimits

0xfc02,	// (0x0004f58e) cell_cmail_l_pane_t

0xefdc,	// (0x0004e968) grid_highlight_pane_cp018_ParamLimits

0xefdc,	// (0x0004e968) grid_highlight_pane_cp018

0x1cee,	// (0x0004167a) main2_pane_ParamLimits

0x1cee,	// (0x0004167a) main2_pane

0xdc20,	// (0x0004d5ac) popup_sp_fs_action_menu_bg_pane_g1

0xdc28,	// (0x0004d5b4) popup_sp_fs_action_menu_bg_pane_g2

0xdc30,	// (0x0004d5bc) popup_sp_fs_action_menu_bg_pane_g3

0xdc38,	// (0x0004d5c4) popup_sp_fs_action_menu_bg_pane_g4

0xdc40,	// (0x0004d5cc) popup_sp_fs_action_menu_bg_pane_g5

0xdc48,	// (0x0004d5d4) popup_sp_fs_action_menu_bg_pane_g6

0xdc50,	// (0x0004d5dc) popup_sp_fs_action_menu_bg_pane_g7

0xdc58,	// (0x0004d5e4) popup_sp_fs_action_menu_bg_pane_g8

0xdc60,	// (0x0004d5ec) popup_sp_fs_action_menu_bg_pane_g9

0xdc68,	// (0x0004d5f4) popup_sp_fs_action_menu_bg_pane_g10

0xdc68,	// (0x0004d5f4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0004eb16) popup_sp_fs_action_menu_bg_pane_g

0x0d54,	// (0x000406e0) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x2_t3_g3_g1

0x0d60,	// (0x000406ec) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d60,	// (0x000406ec) list_medium_line_x2_t3_g3_g2

0x0d6c,	// (0x000406f8) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d6c,	// (0x000406f8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf22f,	// (0x0004ebbb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf22f,	// (0x0004ebbb) list_medium_line_x2_t3_g3_g

0x0d78,	// (0x00040704) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d78,	// (0x00040704) list_medium_line_x2_t3_g3_t1

0x0d8d,	// (0x00040719) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d8d,	// (0x00040719) list_medium_line_x2_t3_g3_t2

0x0d9f,	// (0x0004072b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d9f,	// (0x0004072b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf236,	// (0x0004ebc2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf236,	// (0x0004ebc2) list_medium_line_x2_t3_g3_t

0x0d54,	// (0x000406e0) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x2_t3_g2_g1

0x0d6c,	// (0x000406f8) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d6c,	// (0x000406f8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf23d,	// (0x0004ebc9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf23d,	// (0x0004ebc9) list_medium_line_x2_t3_g2_g

0x0db4,	// (0x00040740) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0db4,	// (0x00040740) list_medium_line_x2_t3_g2_t1

0x0dca,	// (0x00040756) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0dca,	// (0x00040756) list_medium_line_x2_t3_g2_t2

0x0ddc,	// (0x00040768) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ddc,	// (0x00040768) list_medium_line_x2_t3_g2_t3

0x0002,

0xf242,	// (0x0004ebce) list_medium_line_x2_t3_g2_t_ParamLimits

0xf242,	// (0x0004ebce) list_medium_line_x2_t3_g2_t

0x0d54,	// (0x000406e0) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x2_t4_g4_g1

0x0dfa,	// (0x00040786) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0dfa,	// (0x00040786) list_medium_line_x2_t4_g4_g2

0x0d60,	// (0x000406ec) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d60,	// (0x000406ec) list_medium_line_x2_t4_g4_g3

0x0e06,	// (0x00040792) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0e06,	// (0x00040792) list_medium_line_x2_t4_g4_g4

0x0003,

0xf249,	// (0x0004ebd5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf249,	// (0x0004ebd5) list_medium_line_x2_t4_g4_g

0x0e12,	// (0x0004079e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0e12,	// (0x0004079e) list_medium_line_x2_t4_g4_t1

0x0e2c,	// (0x000407b8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e2c,	// (0x000407b8) list_medium_line_x2_t4_g4_t2

0x0e42,	// (0x000407ce) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e42,	// (0x000407ce) list_medium_line_x2_t4_g4_t3

0x0e57,	// (0x000407e3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e57,	// (0x000407e3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf252,	// (0x0004ebde) list_medium_line_x2_t4_g4_t_ParamLimits

0xf252,	// (0x0004ebde) list_medium_line_x2_t4_g4_t

0x0d54,	// (0x000406e0) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x2_t2_g4_g1

0x0dfa,	// (0x00040786) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0dfa,	// (0x00040786) list_medium_line_x2_t2_g4_g2

0x0d60,	// (0x000406ec) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d60,	// (0x000406ec) list_medium_line_x2_t2_g4_g3

0x0d6c,	// (0x000406f8) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d6c,	// (0x000406f8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a1,	// (0x0004ec2d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a1,	// (0x0004ec2d) list_medium_line_x2_t2_g4_g

0x0e69,	// (0x000407f5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e69,	// (0x000407f5) list_medium_line_x2_t2_g4_t1

0x0d9f,	// (0x0004072b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d9f,	// (0x0004072b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2aa,	// (0x0004ec36) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2aa,	// (0x0004ec36) list_medium_line_x2_t2_g4_t

0x0d54,	// (0x000406e0) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x2_t2_g3_g1

0x0d60,	// (0x000406ec) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d60,	// (0x000406ec) list_medium_line_x2_t2_g3_g2

0x0d6c,	// (0x000406f8) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d6c,	// (0x000406f8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf22f,	// (0x0004ebbb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf22f,	// (0x0004ebbb) list_medium_line_x2_t2_g3_g

0x0e7e,	// (0x0004080a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e7e,	// (0x0004080a) list_medium_line_x2_t2_g3_t1

0x0d9f,	// (0x0004072b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d9f,	// (0x0004072b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2af,	// (0x0004ec3b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2af,	// (0x0004ec3b) list_medium_line_x2_t2_g3_t

0x3a17,	// (0x000433a3) main_sp_fs_list_pane_ParamLimits

0x3a17,	// (0x000433a3) main_sp_fs_list_pane

0x3a23,	// (0x000433af) sp_fs_scroll_pane_ParamLimits

0x3a23,	// (0x000433af) sp_fs_scroll_pane

0x0e93,	// (0x0004081f) list_medium_line_x2_t3_t1

0x0ea3,	// (0x0004082f) list_medium_line_x2_t3_t2

0x0eb1,	// (0x0004083d) list_medium_line_x2_t3_t3

0x0002,

0xf2d4,	// (0x0004ec60) list_medium_line_x2_t3_t

0x0ebf,	// (0x0004084b) list_medium_line_x3_t4_t1

0x0ecf,	// (0x0004085b) list_medium_line_x3_t4_t2

0x0edd,	// (0x00040869) list_medium_line_x3_t4_t3

0x0eb1,	// (0x0004083d) list_medium_line_x3_t4_t4

0x0003,

0xf2db,	// (0x0004ec67) list_medium_line_x3_t4_t

0x0eeb,	// (0x00040877) list_medium_line_x4_t5_t1

0x0efb,	// (0x00040887) list_medium_line_x4_t5_t2

0x0edd,	// (0x00040869) list_medium_line_x4_t5_t3

0x0f09,	// (0x00040895) list_medium_line_x4_t5_t4

0x0eb1,	// (0x0004083d) list_medium_line_x4_t5_t5

0x0004,

0xf2e4,	// (0x0004ec70) list_medium_line_x4_t5_t

0x0d54,	// (0x000406e0) list_medium_line_t4_g4_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_t4_g4_g1

0x0e06,	// (0x00040792) list_medium_line_t4_g4_g2_ParamLimits

0x0e06,	// (0x00040792) list_medium_line_t4_g4_g2

0x0f17,	// (0x000408a3) list_medium_line_t4_g4_g3_ParamLimits

0x0f17,	// (0x000408a3) list_medium_line_t4_g4_g3

0x0d6c,	// (0x000406f8) list_medium_line_t4_g4_g4_ParamLimits

0x0d6c,	// (0x000406f8) list_medium_line_t4_g4_g4

0x0003,

0xf2ef,	// (0x0004ec7b) list_medium_line_t4_g4_g_ParamLimits

0xf2ef,	// (0x0004ec7b) list_medium_line_t4_g4_g

0x0f23,	// (0x000408af) list_medium_line_t4_g4_t1_ParamLimits

0x0f23,	// (0x000408af) list_medium_line_t4_g4_t1

0x0f38,	// (0x000408c4) list_medium_line_t4_g4_t2_ParamLimits

0x0f38,	// (0x000408c4) list_medium_line_t4_g4_t2

0x0f4e,	// (0x000408da) list_medium_line_t4_g4_t3_ParamLimits

0x0f4e,	// (0x000408da) list_medium_line_t4_g4_t3

0x0d9f,	// (0x0004072b) list_medium_line_t4_g4_t4_ParamLimits

0x0d9f,	// (0x0004072b) list_medium_line_t4_g4_t4

0x0003,

0xf2f8,	// (0x0004ec84) list_medium_line_t4_g4_t_ParamLimits

0xf2f8,	// (0x0004ec84) list_medium_line_t4_g4_t

0x3afe,	// (0x0004348a) chi_dic_find_pane_g1

0x5428,	// (0x00044db4) main_tport_pane

0x11d0,	// (0x00040b5c) list_medium_line_plain_t1

0x11de,	// (0x00040b6a) list_medium_line_t2_g2_g1_ParamLimits

0x11de,	// (0x00040b6a) list_medium_line_t2_g2_g1

0x11ea,	// (0x00040b76) list_medium_line_t2_g2_g2_ParamLimits

0x11ea,	// (0x00040b76) list_medium_line_t2_g2_g2

0x0001,

0xf93a,	// (0x0004f2c6) list_medium_line_t2_g2_g_ParamLimits

0xf93a,	// (0x0004f2c6) list_medium_line_t2_g2_g

0x11f6,	// (0x00040b82) list_medium_line_t2_g2_t1_ParamLimits

0x11f6,	// (0x00040b82) list_medium_line_t2_g2_t1

0x1210,	// (0x00040b9c) list_medium_line_t2_g2_t2_ParamLimits

0x1210,	// (0x00040b9c) list_medium_line_t2_g2_t2

0x0001,

0xf93f,	// (0x0004f2cb) list_medium_line_t2_g2_t_ParamLimits

0xf93f,	// (0x0004f2cb) list_medium_line_t2_g2_t

0xba3b,	// (0x0004b3c7) aid_sp_fs_list_icon_a_sm

0xba43,	// (0x0004b3cf) aid_sp_fs_list_icon_d

0xba4b,	// (0x0004b3d7) aid_sp_fs_text_primary

0xba54,	// (0x0004b3e0) aid_sp_fs_text_secondary

0xba5d,	// (0x0004b3e9) list_medium_line

0xba5d,	// (0x0004b3e9) list_medium_line_g2

0xba5d,	// (0x0004b3e9) list_medium_line_g3

0xba5d,	// (0x0004b3e9) list_medium_line_plain

0xba5d,	// (0x0004b3e9) list_medium_line_plain_t2

0xba5d,	// (0x0004b3e9) list_medium_line_plain_t3

0xba5d,	// (0x0004b3e9) list_medium_line_right_icon

0xba5d,	// (0x0004b3e9) list_medium_line_right_iconx2

0xba5d,	// (0x0004b3e9) list_medium_line_t2

0xba5d,	// (0x0004b3e9) list_medium_line_t2_g2

0xba5d,	// (0x0004b3e9) list_medium_line_t2_g3

0xba5d,	// (0x0004b3e9) list_medium_line_t2_right_icon

0xba5d,	// (0x0004b3e9) list_medium_line_t2_right_iconx2

0xba5d,	// (0x0004b3e9) list_medium_line_t3

0xba5d,	// (0x0004b3e9) list_medium_line_t3_g2

0xba5d,	// (0x0004b3e9) list_medium_line_t3_g3

0xba5d,	// (0x0004b3e9) list_medium_line_t3_right_iconx2

0x9040,	// (0x000489cc) list_medium_line_t4_g4

0x9049,	// (0x000489d5) list_medium_line_x2

0x9049,	// (0x000489d5) list_medium_line_x2_t2_g2

0x9049,	// (0x000489d5) list_medium_line_x2_t2_g3

0x9049,	// (0x000489d5) list_medium_line_x2_t2_g4

0x9049,	// (0x000489d5) list_medium_line_x2_t3

0x9049,	// (0x000489d5) list_medium_line_x2_t3_g2

0x9049,	// (0x000489d5) list_medium_line_x2_t3_g3

0x9049,	// (0x000489d5) list_medium_line_x2_t3_g4

0x9049,	// (0x000489d5) list_medium_line_x2_t4_g2

0x9049,	// (0x000489d5) list_medium_line_x2_t4_g4

0x9052,	// (0x000489de) list_medium_line_x3

0x9052,	// (0x000489de) list_medium_line_x3_t4

0x9052,	// (0x000489de) list_medium_line_x3_t4_g4

0x9040,	// (0x000489cc) list_medium_line_x4_t4

0x9040,	// (0x000489cc) list_medium_line_x4_t4_g7

0x9040,	// (0x000489cc) list_medium_line_x4_t5

0x1388,	// (0x00040d14) list_single_fs_dyc_pane_ParamLimits

0x1388,	// (0x00040d14) list_single_fs_dyc_pane

0x0d54,	// (0x000406e0) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x4_t4_g7_g1

0x13b9,	// (0x00040d45) list_medium_line_x4_t4_g7_g2_ParamLimits

0x13b9,	// (0x00040d45) list_medium_line_x4_t4_g7_g2

0x13c5,	// (0x00040d51) list_medium_line_x4_t4_g7_g3_ParamLimits

0x13c5,	// (0x00040d51) list_medium_line_x4_t4_g7_g3

0x13d4,	// (0x00040d60) list_medium_line_x4_t4_g7_g4_ParamLimits

0x13d4,	// (0x00040d60) list_medium_line_x4_t4_g7_g4

0x13e0,	// (0x00040d6c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x13e0,	// (0x00040d6c) list_medium_line_x4_t4_g7_g5

0x13ef,	// (0x00040d7b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x13ef,	// (0x00040d7b) list_medium_line_x4_t4_g7_g6

0x13fe,	// (0x00040d8a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x13fe,	// (0x00040d8a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0a,	// (0x0004f496) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0a,	// (0x0004f496) list_medium_line_x4_t4_g7_g

0x140a,	// (0x00040d96) list_medium_line_x4_t4_g7_t1_ParamLimits

0x140a,	// (0x00040d96) list_medium_line_x4_t4_g7_t1

0x141f,	// (0x00040dab) list_medium_line_x4_t4_g7_t2_ParamLimits

0x141f,	// (0x00040dab) list_medium_line_x4_t4_g7_t2

0x1434,	// (0x00040dc0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1434,	// (0x00040dc0) list_medium_line_x4_t4_g7_t3

0x1449,	// (0x00040dd5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1449,	// (0x00040dd5) list_medium_line_x4_t4_g7_t4

0x145b,	// (0x00040de7) list_medium_line_x4_t4_g7_t5_ParamLimits

0x145b,	// (0x00040de7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb19,	// (0x0004f4a5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb19,	// (0x0004f4a5) list_medium_line_x4_t4_g7_t

0x146d,	// (0x00040df9) list_single_dyc_row_pane_ParamLimits

0x146d,	// (0x00040df9) list_single_dyc_row_pane

0x9d39,	// (0x000496c5) call5_gesture_pane_ParamLimits

0x9d39,	// (0x000496c5) call5_gesture_pane

0x9d81,	// (0x0004970d) call5_windows_pane_ParamLimits

0x9d81,	// (0x0004970d) call5_windows_pane

0x9e1a,	// (0x000497a6) call5_swipe_1_pane_cp_ParamLimits

0x9e1a,	// (0x000497a6) call5_swipe_1_pane_cp

0x9e26,	// (0x000497b2) call5_swipe_2_pane_cp_ParamLimits

0x9e26,	// (0x000497b2) call5_swipe_2_pane_cp

0xdd26,	// (0x0004d6b2) call5_image_pane_cp

0x9e32,	// (0x000497be) popup_call5_audio_first_window_cp_ParamLimits

0x9e32,	// (0x000497be) popup_call5_audio_first_window_cp

0xc503,	// (0x0004be8f) call5_swipe_1_pane_g1_cp_ParamLimits

0xc503,	// (0x0004be8f) call5_swipe_1_pane_g1_cp

0xc543,	// (0x0004becf) call5_swipe_1_pane_g2_cp

0xc51c,	// (0x0004bea8) call5_swipe_1_pane_t1_cp_ParamLimits

0xc51c,	// (0x0004bea8) call5_swipe_1_pane_t1_cp

0xc503,	// (0x0004be8f) call5_swipe_2_pane_g1_cp_ParamLimits

0xc503,	// (0x0004be8f) call5_swipe_2_pane_g1_cp

0xc54b,	// (0x0004bed7) call5_swipe_2_pane_g2_cp

0xc553,	// (0x0004bedf) call5_swipe_2_pane_t1_cp_ParamLimits

0xc553,	// (0x0004bedf) call5_swipe_2_pane_t1_cp

0xefdc,	// (0x0004e968) main_sp_fs_email_pane

0xc568,	// (0x0004bef4) main_sp_fs_listscroll_pane_te

0x9e3e,	// (0x000497ca) popup_sp_fs_action_menu_pane_ParamLimits

0x9e3e,	// (0x000497ca) popup_sp_fs_action_menu_pane

0x63d9,	// (0x00045d65) bg_sp_fs_ctrlbar_pane_g1

0x6e66,	// (0x000467f2) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x6e78,	// (0x00046804) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x6e6f,	// (0x000467fb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x63d9,	// (0x00045d65) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc07,	// (0x0004f593) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x610c,	// (0x00045a98) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x610c,	// (0x00045a98) bg_sp_fs_ctrlbar_ddmenu_pane

0xc571,	// (0x0004befd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc571,	// (0x0004befd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc57d,	// (0x0004bf09) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc57d,	// (0x0004bf09) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc10,	// (0x0004f59c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc10,	// (0x0004f59c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc589,	// (0x0004bf15) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc589,	// (0x0004bf15) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1504,	// (0x00040e90) list_medium_line_t2_right_icon_g1

0x150c,	// (0x00040e98) list_medium_line_t2_right_icon_t1

0x151c,	// (0x00040ea8) list_medium_line_t2_right_icon_t2

0x0001,

0xfc15,	// (0x0004f5a1) list_medium_line_t2_right_icon_t

0x5406,	// (0x00044d92) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5406,	// (0x00044d92) bg_sp_fs_ctrlbar_pane

0x9eb6,	// (0x00049842) main_sp_fs_ctrlbar_button_pane_cp01

0x9ebe,	// (0x0004984a) main_sp_fs_ctrlbar_ddmenu_pane

0xc5db,	// (0x0004bf67) main_sp_fs_ctrlbar_pane_g1

0xc5e7,	// (0x0004bf73) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc1a,	// (0x0004f5a6) main_sp_fs_ctrlbar_pane_g

0xc5f3,	// (0x0004bf7f) main_sp_fs_ctrlbar_pane_t1

0x9ec8,	// (0x00049854) main_sp_fs_ctrlbar_pane

0x9eec,	// (0x00049878) main_sp_fs_listscroll_pane_te_cp01

0x152a,	// (0x00040eb6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x152a,	// (0x00040eb6) popup_sp_fs_action_menu_pane_cp01

0xefdc,	// (0x0004e968) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xefdc,	// (0x0004e968) bg_sp_fs_highlight_list_pane_cp01

0xc623,	// (0x0004bfaf) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc623,	// (0x0004bfaf) sp_fs_action_menu_list_gene_pane_g1

0xc632,	// (0x0004bfbe) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc632,	// (0x0004bfbe) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc24,	// (0x0004f5b0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc24,	// (0x0004f5b0) sp_fs_action_menu_list_gene_pane_g

0xc63f,	// (0x0004bfcb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc63f,	// (0x0004bfcb) sp_fs_action_menu_list_gene_pane_t1

0xc657,	// (0x0004bfe3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc657,	// (0x0004bfe3) sp_fs_action_menu_list_gene_pane

0xc674,	// (0x0004c000) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc674,	// (0x0004c000) popup_sp_fs_action_menu_bg_pane

0xc682,	// (0x0004c00e) sp_fs_action_menu_list_pane_ParamLimits

0xc682,	// (0x0004c00e) sp_fs_action_menu_list_pane

0xc6a0,	// (0x0004c02c) sp_fs_scroll_pane_cp01_ParamLimits

0xc6a0,	// (0x0004c02c) sp_fs_scroll_pane_cp01

0x154e,	// (0x00040eda) list_medium_line_plain_t2_t1

0x155e,	// (0x00040eea) list_medium_line_plain_t2_t2

0x0001,

0xfc29,	// (0x0004f5b5) list_medium_line_plain_t2_t

0x156c,	// (0x00040ef8) list_medium_line_plain_t3_t1

0x157c,	// (0x00040f08) list_medium_line_plain_t3_t2

0x158a,	// (0x00040f16) list_medium_line_plain_t3_t3

0x0002,

0xfc2e,	// (0x0004f5ba) list_medium_line_plain_t3_t

0x0d54,	// (0x000406e0) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x2_t2_g2_g1

0x0d6c,	// (0x000406f8) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d6c,	// (0x000406f8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf23d,	// (0x0004ebc9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf23d,	// (0x0004ebc9) list_medium_line_x2_t2_g2_g

0x0f23,	// (0x000408af) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f23,	// (0x000408af) list_medium_line_x2_t2_g2_t1

0x0d9f,	// (0x0004072b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d9f,	// (0x0004072b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc35,	// (0x0004f5c1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc35,	// (0x0004f5c1) list_medium_line_x2_t2_g2_t

0x0d54,	// (0x000406e0) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x2_t4_g2_g1

0x1598,	// (0x00040f24) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1598,	// (0x00040f24) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc3a,	// (0x0004f5c6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc3a,	// (0x0004f5c6) list_medium_line_x2_t4_g2_g

0x15aa,	// (0x00040f36) list_medium_line_x2_t4_g2_t1_ParamLimits

0x15aa,	// (0x00040f36) list_medium_line_x2_t4_g2_t1

0x15c4,	// (0x00040f50) list_medium_line_x2_t4_g2_t2_ParamLimits

0x15c4,	// (0x00040f50) list_medium_line_x2_t4_g2_t2

0x15da,	// (0x00040f66) list_medium_line_x2_t4_g2_t3_ParamLimits

0x15da,	// (0x00040f66) list_medium_line_x2_t4_g2_t3

0x0d9f,	// (0x0004072b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d9f,	// (0x0004072b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc3f,	// (0x0004f5cb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc3f,	// (0x0004f5cb) list_medium_line_x2_t4_g2_t

0x15ef,	// (0x00040f7b) list_medium_line_t3_right_iconx2_g1

0x1504,	// (0x00040e90) list_medium_line_t3_right_iconx2_g2

0x15f7,	// (0x00040f83) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc48,	// (0x0004f5d4) list_medium_line_t3_right_iconx2_g

0x15ff,	// (0x00040f8b) list_medium_line_t3_right_iconx2_t1

0x160f,	// (0x00040f9b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc4f,	// (0x0004f5db) list_medium_line_t3_right_iconx2_t

0x0d54,	// (0x000406e0) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x3_t4_g4_g1

0x0d60,	// (0x000406ec) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d60,	// (0x000406ec) list_medium_line_x3_t4_g4_g2

0x0e06,	// (0x00040792) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0e06,	// (0x00040792) list_medium_line_x3_t4_g4_g3

0x161d,	// (0x00040fa9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x161d,	// (0x00040fa9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc54,	// (0x0004f5e0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc54,	// (0x0004f5e0) list_medium_line_x3_t4_g4_g

0x1629,	// (0x00040fb5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1629,	// (0x00040fb5) list_medium_line_x3_t4_g4_t1

0x1640,	// (0x00040fcc) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1640,	// (0x00040fcc) list_medium_line_x3_t4_g4_t2

0x1655,	// (0x00040fe1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1655,	// (0x00040fe1) list_medium_line_x3_t4_g4_t3

0x166a,	// (0x00040ff6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x166a,	// (0x00040ff6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc5d,	// (0x0004f5e9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc5d,	// (0x0004f5e9) list_medium_line_x3_t4_g4_t

0x1687,	// (0x00041013) list_single_dyc_row_text_pane_t1_ParamLimits

0x1687,	// (0x00041013) list_single_dyc_row_text_pane_t1

0x16be,	// (0x0004104a) list_single_dyc_row_text_pane_t2_ParamLimits

0x16be,	// (0x0004104a) list_single_dyc_row_text_pane_t2

0xc6c6,	// (0x0004c052) list_single_dyc_row_text_pane_t3_ParamLimits

0xc6c6,	// (0x0004c052) list_single_dyc_row_text_pane_t3

0x0005,

0xfc66,	// (0x0004f5f2) list_single_dyc_row_text_pane_t_ParamLimits

0xfc66,	// (0x0004f5f2) list_single_dyc_row_text_pane_t

0xc6ea,	// (0x0004c076) list_single_dyc_row_pane_g1_ParamLimits

0xc6ea,	// (0x0004c076) list_single_dyc_row_pane_g1

0xc6f6,	// (0x0004c082) list_single_dyc_row_pane_g2_ParamLimits

0xc6f6,	// (0x0004c082) list_single_dyc_row_pane_g2

0xc702,	// (0x0004c08e) list_single_dyc_row_pane_g3_ParamLimits

0xc702,	// (0x0004c08e) list_single_dyc_row_pane_g3

0xc70e,	// (0x0004c09a) list_single_dyc_row_pane_g4_ParamLimits

0xc70e,	// (0x0004c09a) list_single_dyc_row_pane_g4

0x0003,

0xfc73,	// (0x0004f5ff) list_single_dyc_row_pane_g_ParamLimits

0xfc73,	// (0x0004f5ff) list_single_dyc_row_pane_g

0xc71a,	// (0x0004c0a6) list_single_dyc_row_text_pane_ParamLimits

0xc71a,	// (0x0004c0a6) list_single_dyc_row_text_pane

0xd30f,	// (0x0004cc9b) bg_sp_fs_scroll_pane

0xc739,	// (0x0004c0c5) thumb_sp_fs_scroll_pane

0x11de,	// (0x00040b6a) list_medium_line_g1_ParamLimits

0x11de,	// (0x00040b6a) list_medium_line_g1

0x17e1,	// (0x0004116d) list_medium_line_t1_ParamLimits

0x17e1,	// (0x0004116d) list_medium_line_t1

0x0d54,	// (0x000406e0) list_medium_line_x2_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x2_g1

0x0d60,	// (0x000406ec) list_medium_line_x2_g2_ParamLimits

0x0d60,	// (0x000406ec) list_medium_line_x2_g2

0x0001,

0xfc7c,	// (0x0004f608) list_medium_line_x2_g_ParamLimits

0xfc7c,	// (0x0004f608) list_medium_line_x2_g

0xc742,	// (0x0004c0ce) list_medium_line_x2_t1_ParamLimits

0xc742,	// (0x0004c0ce) list_medium_line_x2_t1

0x0d54,	// (0x000406e0) list_medium_line_x3_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x3_g1

0x0d60,	// (0x000406ec) list_medium_line_x3_g2_ParamLimits

0x0d60,	// (0x000406ec) list_medium_line_x3_g2

0x0001,

0xfc7c,	// (0x0004f608) list_medium_line_x3_g_ParamLimits

0xfc7c,	// (0x0004f608) list_medium_line_x3_g

0xc742,	// (0x0004c0ce) list_medium_line_x3_t1_ParamLimits

0xc742,	// (0x0004c0ce) list_medium_line_x3_t1

0xc758,	// (0x0004c0e4) thumb_sp_fs_scroll_pane_g1

0xc761,	// (0x0004c0ed) thumb_sp_fs_scroll_pane_g2

0xc76a,	// (0x0004c0f6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc81,	// (0x0004f60d) thumb_sp_fs_scroll_pane_g

0xc758,	// (0x0004c0e4) bg_sp_fs_scroll_pane_g1

0xc761,	// (0x0004c0ed) bg_sp_fs_scroll_pane_g2

0xc76a,	// (0x0004c0f6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc81,	// (0x0004f60d) bg_sp_fs_scroll_pane_g

0x0d54,	// (0x000406e0) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d54,	// (0x000406e0) list_medium_line_x2_t3_g4_g1

0x0dfa,	// (0x00040786) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0dfa,	// (0x00040786) list_medium_line_x2_t3_g4_g2

0x0d60,	// (0x000406ec) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d60,	// (0x000406ec) list_medium_line_x2_t3_g4_g3

0x0d6c,	// (0x000406f8) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d6c,	// (0x000406f8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a1,	// (0x0004ec2d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a1,	// (0x0004ec2d) list_medium_line_x2_t3_g4_g

0x17f6,	// (0x00041182) list_medium_line_x2_t3_g4_t1_ParamLimits

0x17f6,	// (0x00041182) list_medium_line_x2_t3_g4_t1

0x180c,	// (0x00041198) list_medium_line_x2_t3_g4_t2_ParamLimits

0x180c,	// (0x00041198) list_medium_line_x2_t3_g4_t2

0x0d9f,	// (0x0004072b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d9f,	// (0x0004072b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc88,	// (0x0004f614) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc88,	// (0x0004f614) list_medium_line_x2_t3_g4_t

0x11de,	// (0x00040b6a) list_medium_line_g2_g1_ParamLimits

0x11de,	// (0x00040b6a) list_medium_line_g2_g1

0x11ea,	// (0x00040b76) list_medium_line_g2_g2_ParamLimits

0x11ea,	// (0x00040b76) list_medium_line_g2_g2

0x0001,

0xf93a,	// (0x0004f2c6) list_medium_line_g2_g_ParamLimits

0xf93a,	// (0x0004f2c6) list_medium_line_g2_g

0x1826,	// (0x000411b2) list_medium_line_g2_t1_ParamLimits

0x1826,	// (0x000411b2) list_medium_line_g2_t1

0x11de,	// (0x00040b6a) list_medium_line_t3_g2_g1_ParamLimits

0x11de,	// (0x00040b6a) list_medium_line_t3_g2_g1

0x11ea,	// (0x00040b76) list_medium_line_t3_g2_g2_ParamLimits

0x11ea,	// (0x00040b76) list_medium_line_t3_g2_g2

0x0001,

0xf93a,	// (0x0004f2c6) list_medium_line_t3_g2_g_ParamLimits

0xf93a,	// (0x0004f2c6) list_medium_line_t3_g2_g

0x183b,	// (0x000411c7) list_medium_line_t3_g2_t1_ParamLimits

0x183b,	// (0x000411c7) list_medium_line_t3_g2_t1

0x1855,	// (0x000411e1) list_medium_line_t3_g2_t2_ParamLimits

0x1855,	// (0x000411e1) list_medium_line_t3_g2_t2

0x186b,	// (0x000411f7) list_medium_line_t3_g2_t3_ParamLimits

0x186b,	// (0x000411f7) list_medium_line_t3_g2_t3

0x0002,

0xfc8f,	// (0x0004f61b) list_medium_line_t3_g2_t_ParamLimits

0xfc8f,	// (0x0004f61b) list_medium_line_t3_g2_t

0x1504,	// (0x00040e90) list_medium_line_right_icon_g1

0x1881,	// (0x0004120d) list_medium_line_right_icon_t1

0x11de,	// (0x00040b6a) list_medium_line_t2_g1_ParamLimits

0x11de,	// (0x00040b6a) list_medium_line_t2_g1

0x188f,	// (0x0004121b) list_medium_line_t2_t1_ParamLimits

0x188f,	// (0x0004121b) list_medium_line_t2_t1

0x18a9,	// (0x00041235) list_medium_line_t2_t2_ParamLimits

0x18a9,	// (0x00041235) list_medium_line_t2_t2

0x0001,

0xfc96,	// (0x0004f622) list_medium_line_t2_t_ParamLimits

0xfc96,	// (0x0004f622) list_medium_line_t2_t

0x11de,	// (0x00040b6a) list_medium_line_t3_g1_ParamLimits

0x11de,	// (0x00040b6a) list_medium_line_t3_g1

0x18be,	// (0x0004124a) list_medium_line_t3_t1_ParamLimits

0x18be,	// (0x0004124a) list_medium_line_t3_t1

0x18d8,	// (0x00041264) list_medium_line_t3_t2_ParamLimits

0x18d8,	// (0x00041264) list_medium_line_t3_t2

0x18ee,	// (0x0004127a) list_medium_line_t3_t3_ParamLimits

0x18ee,	// (0x0004127a) list_medium_line_t3_t3

0x0002,

0xfc9b,	// (0x0004f627) list_medium_line_t3_t_ParamLimits

0xfc9b,	// (0x0004f627) list_medium_line_t3_t

0x11de,	// (0x00040b6a) list_medium_line_g3_g1_ParamLimits

0x11de,	// (0x00040b6a) list_medium_line_g3_g1

0x1903,	// (0x0004128f) list_medium_line_g3_g2_ParamLimits

0x1903,	// (0x0004128f) list_medium_line_g3_g2

0x11ea,	// (0x00040b76) list_medium_line_g3_g3_ParamLimits

0x11ea,	// (0x00040b76) list_medium_line_g3_g3

0x0002,

0xfca2,	// (0x0004f62e) list_medium_line_g3_g_ParamLimits

0xfca2,	// (0x0004f62e) list_medium_line_g3_g

0x190f,	// (0x0004129b) list_medium_line_g3_t1_ParamLimits

0x190f,	// (0x0004129b) list_medium_line_g3_t1

0x11de,	// (0x00040b6a) list_medium_line_t2_g3_g1_ParamLimits

0x11de,	// (0x00040b6a) list_medium_line_t2_g3_g1

0x1903,	// (0x0004128f) list_medium_line_t2_g3_g2_ParamLimits

0x1903,	// (0x0004128f) list_medium_line_t2_g3_g2

0x11ea,	// (0x00040b76) list_medium_line_t2_g3_g3_ParamLimits

0x11ea,	// (0x00040b76) list_medium_line_t2_g3_g3

0x0002,

0xfca2,	// (0x0004f62e) list_medium_line_t2_g3_g_ParamLimits

0xfca2,	// (0x0004f62e) list_medium_line_t2_g3_g

0x1924,	// (0x000412b0) list_medium_line_t2_g3_t1_ParamLimits

0x1924,	// (0x000412b0) list_medium_line_t2_g3_t1

0x193e,	// (0x000412ca) list_medium_line_t2_g3_t2_ParamLimits

0x193e,	// (0x000412ca) list_medium_line_t2_g3_t2

0x0001,

0xfca9,	// (0x0004f635) list_medium_line_t2_g3_t_ParamLimits

0xfca9,	// (0x0004f635) list_medium_line_t2_g3_t

0x11de,	// (0x00040b6a) list_medium_line_t3_g3_g1_ParamLimits

0x11de,	// (0x00040b6a) list_medium_line_t3_g3_g1

0x1903,	// (0x0004128f) list_medium_line_t3_g3_g2_ParamLimits

0x1903,	// (0x0004128f) list_medium_line_t3_g3_g2

0x11ea,	// (0x00040b76) list_medium_line_t3_g3_g3_ParamLimits

0x11ea,	// (0x00040b76) list_medium_line_t3_g3_g3

0x0002,

0xfca2,	// (0x0004f62e) list_medium_line_t3_g3_g_ParamLimits

0xfca2,	// (0x0004f62e) list_medium_line_t3_g3_g

0x1954,	// (0x000412e0) list_medium_line_t3_g3_t1_ParamLimits

0x1954,	// (0x000412e0) list_medium_line_t3_g3_t1

0x196d,	// (0x000412f9) list_medium_line_t3_g3_t2_ParamLimits

0x196d,	// (0x000412f9) list_medium_line_t3_g3_t2

0x1983,	// (0x0004130f) list_medium_line_t3_g3_t3_ParamLimits

0x1983,	// (0x0004130f) list_medium_line_t3_g3_t3

0x0002,

0xfcae,	// (0x0004f63a) list_medium_line_t3_g3_t_ParamLimits

0xfcae,	// (0x0004f63a) list_medium_line_t3_g3_t

0x15ef,	// (0x00040f7b) list_medium_line_right_iconx2_g1

0x1504,	// (0x00040e90) list_medium_line_right_iconx2_g2

0x0001,

0xfcb5,	// (0x0004f641) list_medium_line_right_iconx2_g

0x1999,	// (0x00041325) list_medium_line_right_iconx2_t1

0x15ef,	// (0x00040f7b) list_medium_line_t2_right_iconx2_g1

0x1504,	// (0x00040e90) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcb5,	// (0x0004f641) list_medium_line_t2_right_iconx2_g

0x19a7,	// (0x00041333) list_medium_line_t2_right_iconx2_t1

0x19b7,	// (0x00041343) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcba,	// (0x0004f646) list_medium_line_t2_right_iconx2_t

0x19c5,	// (0x00041351) list_medium_line_x4_t4_t1

0x19d3,	// (0x0004135f) list_medium_line_x4_t4_t2

0x19e3,	// (0x0004136f) list_medium_line_x4_t4_t3

0x19f3,	// (0x0004137f) list_medium_line_x4_t4_t4

0x0003,

0xfcbf,	// (0x0004f64b) list_medium_line_x4_t4_t

0x9f45,	// (0x000498d1) tport_appsw_pane_ParamLimits

0x9f45,	// (0x000498d1) tport_appsw_pane

0x9f56,	// (0x000498e2) tport_contact_pane_ParamLimits

0x9f56,	// (0x000498e2) tport_contact_pane

0x9f6a,	// (0x000498f6) tport_listscroll_pane_ParamLimits

0x9f6a,	// (0x000498f6) tport_listscroll_pane

0x9f82,	// (0x0004990e) cell_tport_appsw_pane_ParamLimits

0x9f82,	// (0x0004990e) cell_tport_appsw_pane

0xb463,	// (0x0004adef) tport_appsw_pane_g1_ParamLimits

0xb463,	// (0x0004adef) tport_appsw_pane_g1

0xc773,	// (0x0004c0ff) tport_contact_pane_g1

0xc77c,	// (0x0004c108) tport_contact_pane_t1

0xc78a,	// (0x0004c116) tport_contact_pane_t2

0x0001,

0xfcc8,	// (0x0004f654) tport_contact_pane_t

0xc798,	// (0x0004c124) list_tport_pane

0xc7a1,	// (0x0004c12d) scroll_pane_cp_030

0xc7b2,	// (0x0004c13e) cell_tport_appsw_pane_g1

0xc7c2,	// (0x0004c14e) cell_tport_appsw_pane_t1

0xc7d0,	// (0x0004c15c) grid_highlight_pane_cp019

0x9fb8,	// (0x00049944) list_tport_double_graphic_pane_ParamLimits

0x9fb8,	// (0x00049944) list_tport_double_graphic_pane

0xefdc,	// (0x0004e968) list_highlight_pane_cp023_ParamLimits

0xefdc,	// (0x0004e968) list_highlight_pane_cp023

0x9fc5,	// (0x00049951) list_tport_double_graphic_pane_g1_ParamLimits

0x9fc5,	// (0x00049951) list_tport_double_graphic_pane_g1

0x9fd2,	// (0x0004995e) list_tport_double_graphic_pane_t1_ParamLimits

0x9fd2,	// (0x0004995e) list_tport_double_graphic_pane_t1

0x9fe7,	// (0x00049973) list_tport_double_graphic_pane_t2_ParamLimits

0x9fe7,	// (0x00049973) list_tport_double_graphic_pane_t2

0x0001,

0xfcd4,	// (0x0004f660) list_tport_double_graphic_pane_t_ParamLimits

0xfcd4,	// (0x0004f660) list_tport_double_graphic_pane_t

0xd30f,	// (0x0004cc9b) main_cale_note_pane

0x8435,	// (0x00047dc1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8435,	// (0x00047dc1) cell_vitu2_function_top_wide_pane_cp01

0x9a74,	// (0x00049400) wait_bar_pane_cp05_ParamLimits

0xefdc,	// (0x0004e968) listscroll_cmail_pane

0xc7d8,	// (0x0004c164) list_cmail_pane

0x9ff9,	// (0x00049985) list_cmail_body_pane

0xa00c,	// (0x00049998) list_single_cmail_header_caption_pane

0xa020,	// (0x000499ac) list_single_cmail_header_detail_pane_ParamLimits

0xa020,	// (0x000499ac) list_single_cmail_header_detail_pane

0xc7e8,	// (0x0004c174) list_single_cmail_header_caption_pane_t1

0x1a03,	// (0x0004138f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1a03,	// (0x0004138f) list_single_cmail_header_detail_pane_g1

0xc7ff,	// (0x0004c18b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc7ff,	// (0x0004c18b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcd9,	// (0x0004f665) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcd9,	// (0x0004f665) list_single_cmail_header_detail_pane_g

0xc818,	// (0x0004c1a4) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc818,	// (0x0004c1a4) list_single_cmail_header_detail_pane_t1

0xc878,	// (0x0004c204) list_single_cmail_header_editor_pane_bg_ParamLimits

0xc878,	// (0x0004c204) list_single_cmail_header_editor_pane_bg

0xc88f,	// (0x0004c21b) list_cmail_body_pane_g1

0xc898,	// (0x0004c224) list_cmail_body_pane_t1

0xb4a0,	// (0x0004ae2c) list_single_cmail_header_editor_pane_bg_g1

0xdf8c,	// (0x0004d918) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb4b0,	// (0x0004ae3c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb4a8,	// (0x0004ae34) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb721,	// (0x0004b0ad) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb4d0,	// (0x0004ae5c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb4c0,	// (0x0004ae4c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb4c8,	// (0x0004ae54) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdf6c,	// (0x0004d8f8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa046,	// (0x000499d2) calenote_gesture_pane_ParamLimits

0xa046,	// (0x000499d2) calenote_gesture_pane

0xa062,	// (0x000499ee) calenote_window_pane_ParamLimits

0xa062,	// (0x000499ee) calenote_window_pane

0xc8a6,	// (0x0004c232) popup_note_window_cp01

0xa07e,	// (0x00049a0a) calenote_swipe_1_pane_ParamLimits

0xa07e,	// (0x00049a0a) calenote_swipe_1_pane

0x9e26,	// (0x000497b2) calenote_swipe_2_pane_ParamLimits

0x9e26,	// (0x000497b2) calenote_swipe_2_pane

0xc503,	// (0x0004be8f) calenote_swipe_1_pane_g1_ParamLimits

0xc503,	// (0x0004be8f) calenote_swipe_1_pane_g1

0xc510,	// (0x0004be9c) calenote_swipe_1_pane_g2_ParamLimits

0xc510,	// (0x0004be9c) calenote_swipe_1_pane_g2

0x0001,

0xfbfd,	// (0x0004f589) calenote_swipe_1_pane_g_ParamLimits

0xfbfd,	// (0x0004f589) calenote_swipe_1_pane_g

0xc8b8,	// (0x0004c244) calenote_swipe_1_pane_t1_ParamLimits

0xc8b8,	// (0x0004c244) calenote_swipe_1_pane_t1

0xc503,	// (0x0004be8f) calenote_swipe_2_pane_g1_ParamLimits

0xc503,	// (0x0004be8f) calenote_swipe_2_pane_g1

0xc8d7,	// (0x0004c263) calenote_swipe_2_pane_g2_ParamLimits

0xc8d7,	// (0x0004c263) calenote_swipe_2_pane_g2

0x0001,

0xfce5,	// (0x0004f671) calenote_swipe_2_pane_g_ParamLimits

0xfce5,	// (0x0004f671) calenote_swipe_2_pane_g

0xc8e3,	// (0x0004c26f) calenote_swipe_2_pane_t1_ParamLimits

0xc8e3,	// (0x0004c26f) calenote_swipe_2_pane_t1

0xd30f,	// (0x0004cc9b) main_mup_navstr_pane

0x6c98,	// (0x00046624) main_mup3_pane_t7_ParamLimits

0x6c98,	// (0x00046624) main_mup3_pane_t7

0xb060,	// (0x0004a9ec) main_mp4_pane_g6_ParamLimits

0xb060,	// (0x0004a9ec) main_mp4_pane_g6

0xb27a,	// (0x0004ac06) main_image3_pane_t4_ParamLimits

0xb27a,	// (0x0004ac06) main_image3_pane_t4

0xa093,	// (0x00049a1f) popup_navstr_preview_pane_ParamLimits

0xa093,	// (0x00049a1f) popup_navstr_preview_pane

0xa0a3,	// (0x00049a2f) scroll_navstr_pane_ParamLimits

0xa0a3,	// (0x00049a2f) scroll_navstr_pane

0xd30f,	// (0x0004cc9b) bg_popup_preview_window_pane_cp04

0xc90a,	// (0x0004c296) popup_navstr_preview_pane_t1

0xa0b7,	// (0x00049a43) scroll_navstr_pane_g1_ParamLimits

0xa0b7,	// (0x00049a43) scroll_navstr_pane_g1

0xa0cb,	// (0x00049a57) scroll_navstr_pane_t1_ParamLimits

0xa0cb,	// (0x00049a57) scroll_navstr_pane_t1

0xc8af,	// (0x0004c23b) bg_button_pane_cp014

0xc8af,	// (0x0004c23b) bg_button_pane_cp030

0x14aa,	// (0x00040e36) list_double_fisheye_pane_g4_ParamLimits

0x14aa,	// (0x00040e36) list_double_fisheye_pane_g4

0x14b6,	// (0x00040e42) list_double_fisheye_pane_g5_ParamLimits

0x14b6,	// (0x00040e42) list_double_fisheye_pane_g5

0x3a23,	// (0x000433af) sp_fs_scroll_pane_cp03

0xc5db,	// (0x0004bf67) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc5e7,	// (0x0004bf73) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1a,	// (0x0004f5a6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc5f3,	// (0x0004bf7f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc7e0,	// (0x0004c16c) sp_fs_scroll_pane_cp02

0xdc8b,	// (0x0004d617) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdc8b,	// (0x0004d617) popup_sp_fs_calendar_preview_list_single_pane

0xd30f,	// (0x0004cc9b) main_cam6_pano_pane

0xefdc,	// (0x0004e968) main_mup3_pane_ParamLimits

0xd30f,	// (0x0004cc9b) main_phacti_pane

0x9967,	// (0x000492f3) bg_button_pane_cp11

0x997f,	// (0x0004930b) main_mobtv_info_pane_g2_ParamLimits

0x997f,	// (0x0004930b) main_mobtv_info_pane_g2

0x0001,

0xfb7a,	// (0x0004f506) main_mobtv_info_pane_g_ParamLimits

0xfb7a,	// (0x0004f506) main_mobtv_info_pane_g

0x9b34,	// (0x000494c0) sc_clock_pane_t5_ParamLimits

0x9b34,	// (0x000494c0) sc_clock_pane_t5

0x9bdc,	// (0x00049568) main_radioblah_pane_g1_ParamLimits

0xc438,	// (0x0004bdc4) main_radioblah_pane_t3_ParamLimits

0xc438,	// (0x0004bdc4) main_radioblah_pane_t3

0xc450,	// (0x0004bddc) main_radioblah_pane_t4_ParamLimits

0xc450,	// (0x0004bddc) main_radioblah_pane_t4

0x9c04,	// (0x00049590) main_radioblah_text_pane_ParamLimits

0x9c04,	// (0x00049590) main_radioblah_text_pane

0x9c16,	// (0x000495a2) main_radioblah_info_pane_g1_ParamLimits

0x9ca7,	// (0x00049633) main_radioblah_info_pane_t4_ParamLimits

0x9ca7,	// (0x00049633) main_radioblah_info_pane_t4

0xefdc,	// (0x0004e968) main_sp_fs_calendar_pane

0xa0e1,	// (0x00049a6d) main_phacti_pane_g1

0xa0e9,	// (0x00049a75) phacti_note_pane_ParamLimits

0xa0e9,	// (0x00049a75) phacti_note_pane

0xc921,	// (0x0004c2ad) phacti_term_pane_ParamLimits

0xc921,	// (0x0004c2ad) phacti_term_pane

0xc936,	// (0x0004c2c2) phacti_note_pane_t1_ParamLimits

0xc936,	// (0x0004c2c2) phacti_note_pane_t1

0xc94d,	// (0x0004c2d9) phacti_term_pane_g1

0xc955,	// (0x0004c2e1) phacti_term_pane_t1_ParamLimits

0xc955,	// (0x0004c2e1) phacti_term_pane_t1

0xc97f,	// (0x0004c30b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc987,	// (0x0004c313) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcef,	// (0x0004f67b) popup_sp_fs_calendar_preview_list_single_pane_g

0xc98f,	// (0x0004c31b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc98f,	// (0x0004c31b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc9a5,	// (0x0004c331) aid_popup_sp_fs_bg_corner_pane

0x63d9,	// (0x00045d65) popup_sp_fs_calendar_preview_bg_pane_g1

0xd30f,	// (0x0004cc9b) popup_sp_fs_calendar_preview_bg_pane

0xc9ad,	// (0x0004c339) popup_sp_fs_calendar_preview_list_pane

0x5406,	// (0x00044d92) bg_main_sp_fs_cale_pane_ParamLimits

0x5406,	// (0x00044d92) bg_main_sp_fs_cale_pane

0xc9be,	// (0x0004c34a) listscroll_cale_mrui_pane_ParamLimits

0xc9be,	// (0x0004c34a) listscroll_cale_mrui_pane

0xc9d3,	// (0x0004c35f) listscroll_sp_fs_schedule_track_pane

0xc9dc,	// (0x0004c368) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc9dc,	// (0x0004c368) main_sp_fs_ctrlbar_pane_cp01

0xc9ef,	// (0x0004c37b) main_sp_fs_ribbon_pane

0xc9f7,	// (0x0004c383) popup_sp_fs_cale_preview_window

0xa14b,	// (0x00049ad7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa14b,	// (0x00049ad7) list_single_sp_fs_schedule_track_pane

0xefdc,	// (0x0004e968) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xefdc,	// (0x0004e968) bg_sp_fs_highlight_list_pane_cp03

0xa15c,	// (0x00049ae8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa15c,	// (0x00049ae8) list_single_sp_fs_schedule_track_pane_g1

0xa168,	// (0x00049af4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa168,	// (0x00049af4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcf4,	// (0x0004f680) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcf4,	// (0x0004f680) list_single_sp_fs_schedule_track_pane_g

0xa174,	// (0x00049b00) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa174,	// (0x00049b00) list_single_sp_fs_schedule_track_pane_t1

0xa18e,	// (0x00049b1a) sp_fs_schedule_track_pane_ParamLimits

0xa18e,	// (0x00049b1a) sp_fs_schedule_track_pane

0xca06,	// (0x0004c392) sp_fs_schedule_track_pane_g1

0xca0e,	// (0x0004c39a) sp_fs_schedule_track_pane_g2

0xca16,	// (0x0004c3a2) sp_fs_schedule_track_pane_g3

0xca1e,	// (0x0004c3aa) sp_fs_schedule_track_pane_g4

0xca26,	// (0x0004c3b2) sp_fs_schedule_track_pane_g5

0x0004,

0xfcf9,	// (0x0004f685) sp_fs_schedule_track_pane_g

0xb4a0,	// (0x0004ae2c) bg_sp_fs_schedule_viewer_highlight_g1

0xdf8c,	// (0x0004d918) bg_sp_fs_schedule_viewer_highlight_g2

0xb4a8,	// (0x0004ae34) bg_sp_fs_schedule_viewer_highlight_g3

0xb4b0,	// (0x0004ae3c) bg_sp_fs_schedule_viewer_highlight_g4

0xb721,	// (0x0004b0ad) bg_sp_fs_schedule_viewer_highlight_g5

0xb4c0,	// (0x0004ae4c) bg_sp_fs_schedule_viewer_highlight_g6

0xb4c8,	// (0x0004ae54) bg_sp_fs_schedule_viewer_highlight_g7

0xb4d0,	// (0x0004ae5c) bg_sp_fs_schedule_viewer_highlight_g8

0xdf6c,	// (0x0004d8f8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd04,	// (0x0004f690) bg_sp_fs_schedule_viewer_highlight_g

0xd30f,	// (0x0004cc9b) bg_main_sp_fs_ribbon_pane

0xa19f,	// (0x00049b2b) main_sp_fs_ribbon_pane_g1

0xca2e,	// (0x0004c3ba) main_sp_fs_ribbon_pane_t1

0xa1a8,	// (0x00049b34) main_sp_fs_ribbon_pane_t2

0xca3d,	// (0x0004c3c9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd17,	// (0x0004f6a3) main_sp_fs_ribbon_pane_t

0xca4c,	// (0x0004c3d8) main_sp_fs_ribbon_scheduler_pane

0xca54,	// (0x0004c3e0) bg_main_sp_fs_ribbon_pane_g1

0xca5d,	// (0x0004c3e9) bg_main_sp_fs_ribbon_pane_g2

0xca66,	// (0x0004c3f2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd1e,	// (0x0004f6aa) bg_main_sp_fs_ribbon_pane_g

0xca6e,	// (0x0004c3fa) main_sp_fs_ribbon_scheduler_pane_g1

0xca77,	// (0x0004c403) main_sp_fs_ribbon_scheduler_pane_g2

0xca80,	// (0x0004c40c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd25,	// (0x0004f6b1) main_sp_fs_ribbon_scheduler_pane_g

0xca89,	// (0x0004c415) list_cale_mrui_pane

0xa1b7,	// (0x00049b43) sp_fs_scroll_pane_cp07_ParamLimits

0xa1b7,	// (0x00049b43) sp_fs_scroll_pane_cp07

0xa1cf,	// (0x00049b5b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa1cf,	// (0x00049b5b) bg_sp_fs_schedule_viewer_highlight

0xca96,	// (0x0004c422) list_single_sp_fs_schedule_track_pane_cp01

0xca9e,	// (0x0004c42a) list_sp_fs_schedule_track_pane

0xcaa6,	// (0x0004c432) sp_fs_scroll_pane_cp06_ParamLimits

0xcaa6,	// (0x0004c432) sp_fs_scroll_pane_cp06

0x63d9,	// (0x00045d65) bgmain_sp_fs_calendar_pane_g1

0x1a19,	// (0x000413a5) list_single_cale_mrui_pane_ParamLimits

0x1a19,	// (0x000413a5) list_single_cale_mrui_pane

0xcab8,	// (0x0004c444) list_single_cale_mrui_row_pane_ParamLimits

0xcab8,	// (0x0004c444) list_single_cale_mrui_row_pane

0xcac5,	// (0x0004c451) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcac5,	// (0x0004c451) list_single_cale_mrui_row_pane_g1

0xcb0a,	// (0x0004c496) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcb0a,	// (0x0004c496) list_single_cale_mrui_row_pane_t1

0x1a39,	// (0x000413c5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1a39,	// (0x000413c5) list_single_cale_mrui_row_pane_t2

0xcb1c,	// (0x0004c4a8) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcb1c,	// (0x0004c4a8) list_single_cale_mrui_row_pane_t3

0xcb4b,	// (0x0004c4d7) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcb4b,	// (0x0004c4d7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd33,	// (0x0004f6bf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd33,	// (0x0004f6bf) list_single_cale_mrui_row_pane_t

0x1a9f,	// (0x0004142b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1a9f,	// (0x0004142b) list_single_cmail_header_editor_pane_bg_cp01

0x1abf,	// (0x0004144b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1abf,	// (0x0004144b) list_single_cmail_header_editor_pane_bg_cp02

0xa1df,	// (0x00049b6b) main_radioblah_text_pane_t1_ParamLimits

0xa1df,	// (0x00049b6b) main_radioblah_text_pane_t1

0xcb7a,	// (0x0004c506) cam6_indi_pane_cp01

0xcb82,	// (0x0004c50e) cam6_mode_pane_cp01

0xcb8a,	// (0x0004c516) cam6_pano_pane

0xcb93,	// (0x0004c51f) cam6_zoom_pane_cp01

0xcb9b,	// (0x0004c527) cam6_pano_image_pane

0xcba4,	// (0x0004c530) cam6_pano_pane_g1

0xc19f,	// (0x0004bb2b) cam6_pano_pane_g2

0xcbad,	// (0x0004c539) cam6_pano_pane_g3

0xcbb6,	// (0x0004c542) cam6_pano_pane_g4

0x7656,	// (0x00046fe2) cam6_pano_pane_g5

0xcbbf,	// (0x0004c54b) cam6_pano_pane_g6

0xcbc7,	// (0x0004c553) cam6_pano_pane_g7

0xcbcf,	// (0x0004c55b) cam6_pano_pane_g8

0xcbd8,	// (0x0004c564) cam6_pano_pane_g9

0x0008,

0xfd3c,	// (0x0004f6c8) cam6_pano_pane_g

0xd30f,	// (0x0004cc9b) main_browser_tag_pane

0xc902,	// (0x0004c28e) grid_navstr_albumart_pane

0xcbe1,	// (0x0004c56d) cell_navstr_albumart_pane_ParamLimits

0xcbe1,	// (0x0004c56d) cell_navstr_albumart_pane

0xe88e,	// (0x0004e21a) cell_navstr_albumart_pane_g1

0x4f3a,	// (0x000448c6) cell_navstr_albumart_pane_g2

0x4f4a,	// (0x000448d6) cell_navstr_albumart_pane_g3

0x4f42,	// (0x000448ce) cell_navstr_albumart_pane_g4

0x0003,

0xfd4f,	// (0x0004f6db) cell_navstr_albumart_pane_g

0xa1f9,	// (0x00049b85) bt_list_pane_ParamLimits

0xa1f9,	// (0x00049b85) bt_list_pane

0xa20c,	// (0x00049b98) bt_list_pane_t1

0xa21b,	// (0x00049ba7) bt_list_pane_t2

0x0001,

0xfd58,	// (0x0004f6e4) bt_list_pane_t

0xd30f,	// (0x0004cc9b) main_cale_prevew_pane

0xa22a,	// (0x00049bb6) popup_cale_preview_window_ParamLimits

0xa22a,	// (0x00049bb6) popup_cale_preview_window

0xefdc,	// (0x0004e968) bg_popup_preview_window_pane_cp05_ParamLimits

0xefdc,	// (0x0004e968) bg_popup_preview_window_pane_cp05

0xcbf9,	// (0x0004c585) list_cale_preview_pane_ParamLimits

0xcbf9,	// (0x0004c585) list_cale_preview_pane

0xcc05,	// (0x0004c591) list_double_cale_preview_pane_ParamLimits

0xcc05,	// (0x0004c591) list_double_cale_preview_pane

0xcc17,	// (0x0004c5a3) list_single_cale_preview_pane_ParamLimits

0xcc17,	// (0x0004c5a3) list_single_cale_preview_pane

0xcc2b,	// (0x0004c5b7) list_single_cale_preview_pane_g1

0xcc33,	// (0x0004c5bf) list_single_cale_preview_pane_t1_ParamLimits

0xcc33,	// (0x0004c5bf) list_single_cale_preview_pane_t1

0xcc48,	// (0x0004c5d4) list_double_cale_preview_pane_g1

0xcc50,	// (0x0004c5dc) list_double_cale_preview_pane_t1_ParamLimits

0xcc50,	// (0x0004c5dc) list_double_cale_preview_pane_t1

0xcc65,	// (0x0004c5f1) list_double_cale_preview_pane_t2_ParamLimits

0xcc65,	// (0x0004c5f1) list_double_cale_preview_pane_t2

0x0001,

0xfd5d,	// (0x0004f6e9) list_double_cale_preview_pane_t_ParamLimits

0xfd5d,	// (0x0004f6e9) list_double_cale_preview_pane_t

0xd30f,	// (0x0004cc9b) main_ezdial_pane

0xefdc,	// (0x0004e968) main_sp_fs_email_pane_ParamLimits

0x9e70,	// (0x000497fc) cmail_ddmenu_btn01_pane_ParamLimits

0x9e70,	// (0x000497fc) cmail_ddmenu_btn01_pane

0x9e83,	// (0x0004980f) cmail_ddmenu_btn02_pane_ParamLimits

0x9e83,	// (0x0004980f) cmail_ddmenu_btn02_pane

0x9ea6,	// (0x00049832) cmail_ddmenu_btn03_pane_ParamLimits

0x9ea6,	// (0x00049832) cmail_ddmenu_btn03_pane

0x9ec8,	// (0x00049854) main_sp_fs_ctrlbar_pane_ParamLimits

0x9eec,	// (0x00049878) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9ff9,	// (0x00049985) list_cmail_body_pane_ParamLimits

0xc7f6,	// (0x0004c182) bg_button_pane_cp12

0xc80b,	// (0x0004c197) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc80b,	// (0x0004c197) list_single_cmail_header_detail_pane_g3

0xc854,	// (0x0004c1e0) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc854,	// (0x0004c1e0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfce0,	// (0x0004f66c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfce0,	// (0x0004f66c) list_single_cmail_header_detail_pane_t

0xc96a,	// (0x0004c2f6) phacti_term_pane_t2_ParamLimits

0xc96a,	// (0x0004c2f6) phacti_term_pane_t2

0x0001,

0xfcea,	// (0x0004f676) phacti_term_pane_t_ParamLimits

0xfcea,	// (0x0004f676) phacti_term_pane_t

0xcc7d,	// (0x0004c609) aid_size_list_single_double

0xa23f,	// (0x00049bcb) popup_ezdial_listscroll_window

0xa255,	// (0x00049be1) popup_number_entry_window_cp01

0xdd26,	// (0x0004d6b2) bg_popup_call_pane_cp09

0xcc89,	// (0x0004c615) ezdial_list_pane

0xcc91,	// (0x0004c61d) scroll_pane_cp23

0x5406,	// (0x00044d92) bg_button_pane_cp028_ParamLimits

0x5406,	// (0x00044d92) bg_button_pane_cp028

0xa261,	// (0x00049bed) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa261,	// (0x00049bed) cmail_ddmenu_btn01_pane_g1

0xa26d,	// (0x00049bf9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa26d,	// (0x00049bf9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd62,	// (0x0004f6ee) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd62,	// (0x0004f6ee) cmail_ddmenu_btn01_pane_g

0xcc99,	// (0x0004c625) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcc99,	// (0x0004c625) cmail_ddmenu_btn01_pane_t1

0x5406,	// (0x00044d92) bg_button_pane_cp029_ParamLimits

0x5406,	// (0x00044d92) bg_button_pane_cp029

0xa281,	// (0x00049c0d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa281,	// (0x00049c0d) cmail_ddmenu_btn02_pane_g1

0xa29a,	// (0x00049c26) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa29a,	// (0x00049c26) cmail_ddmenu_btn02_pane_t1

0xefdc,	// (0x0004e968) bg_button_pane_cp031_ParamLimits

0xefdc,	// (0x0004e968) bg_button_pane_cp031

0xa281,	// (0x00049c0d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa281,	// (0x00049c0d) cmail_ddmenu_btn03_pane_g1

0xa29a,	// (0x00049c26) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa29a,	// (0x00049c26) cmail_ddmenu_btn03_pane_t1

0x7d48,	// (0x000476d4) cell_dialer2_keypad_pane_t1_ParamLimits

0x7d62,	// (0x000476ee) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7d62,	// (0x000476ee) cell_dialer2_keypad_pane_t1_copy1

0x978c,	// (0x00049118) ncimui_group_button_pane

0xefdc,	// (0x0004e968) main_sp_fs_calendar_pane_ParamLimits

0xa00c,	// (0x00049998) list_single_cmail_header_caption_pane_ParamLimits

0xc9b5,	// (0x0004c341) aid_recal_txt_sm_pane

0xd30f,	// (0x0004cc9b) mian_recal_day_pane

0xc9f7,	// (0x0004c383) popup_sp_fs_cale_preview_window_ParamLimits

0xccaf,	// (0x0004c63b) list_recal_day_pane

0xccf1,	// (0x0004c67d) list_single_recal_day_pane_ParamLimits

0xccf1,	// (0x0004c67d) list_single_recal_day_pane

0xcd03,	// (0x0004c68f) list_single_recal_day_pane_g1_ParamLimits

0xcd03,	// (0x0004c68f) list_single_recal_day_pane_g1

0xcd0f,	// (0x0004c69b) list_single_recal_day_pane_g2_ParamLimits

0xcd0f,	// (0x0004c69b) list_single_recal_day_pane_g2

0xcd1b,	// (0x0004c6a7) list_single_recal_day_pane_g3_ParamLimits

0xcd1b,	// (0x0004c6a7) list_single_recal_day_pane_g3

0x1adb,	// (0x00041467) list_single_recal_day_pane_g4_ParamLimits

0x1adb,	// (0x00041467) list_single_recal_day_pane_g4

0xcd27,	// (0x0004c6b3) list_single_recal_day_pane_g5_ParamLimits

0xcd27,	// (0x0004c6b3) list_single_recal_day_pane_g5

0xcd33,	// (0x0004c6bf) list_single_recal_day_pane_g6_ParamLimits

0xcd33,	// (0x0004c6bf) list_single_recal_day_pane_g6

0x0004,

0xfd71,	// (0x0004f6fd) list_single_recal_day_pane_g_ParamLimits

0xfd71,	// (0x0004f6fd) list_single_recal_day_pane_g

0xcd47,	// (0x0004c6d3) list_single_recal_day_pane_t1

0xcd59,	// (0x0004c6e5) list_single_recal_day_pane_t2

0x0001,

0xfd7c,	// (0x0004f708) list_single_recal_day_pane_t

0xa2be,	// (0x00049c4a) ncimui_query_button_pane_ParamLimits

0xa2be,	// (0x00049c4a) ncimui_query_button_pane

0xa2ce,	// (0x00049c5a) ncimui_query_button_pane_t1_ParamLimits

0xa2ce,	// (0x00049c5a) ncimui_query_button_pane_t1

0xcd6b,	// (0x0004c6f7) ncimui_query_button_pane_t2_ParamLimits

0xcd6b,	// (0x0004c6f7) ncimui_query_button_pane_t2

0x0001,

0xfd81,	// (0x0004f70d) ncimui_query_button_pane_t_ParamLimits

0xfd81,	// (0x0004f70d) ncimui_query_button_pane_t

0xa2e1,	// (0x00049c6d) query_button_pane_ParamLimits

0xa2e1,	// (0x00049c6d) query_button_pane

0xd30f,	// (0x0004cc9b) bg_button_pane_cp0028

0xcd7e,	// (0x0004c70a) query_button_pane_t1

0x5428,	// (0x00044db4) main_tport_pane_ParamLimits

0x9f0c,	// (0x00049898) bg_popup_window_pane_cp01_ParamLimits

0x9f0c,	// (0x00049898) bg_popup_window_pane_cp01

0x9f23,	// (0x000498af) heading_pane_cp08_ParamLimits

0x9f23,	// (0x000498af) heading_pane_cp08

0x9f34,	// (0x000498c0) heading_pane_cp07_ParamLimits

0x9f34,	// (0x000498c0) heading_pane_cp07

0xc7b2,	// (0x0004c13e) cell_tport_appsw_pane_g2

0x0002,

0xfccd,	// (0x0004f659) cell_tport_appsw_pane_g

0x0f7c,	// (0x00040908) input_candi_list_open_g1

0xe157,	// (0x0004dae3) list_cale_time_pane_g6_ParamLimits

0xe157,	// (0x0004dae3) list_cale_time_pane_g6

0x673b,	// (0x000460c7) aid_size_touch_calib_1_ParamLimits

0x673b,	// (0x000460c7) aid_size_touch_calib_1

0x674d,	// (0x000460d9) aid_size_touch_calib_2_ParamLimits

0x674d,	// (0x000460d9) aid_size_touch_calib_2

0x6763,	// (0x000460ef) aid_size_touch_calib_3_ParamLimits

0x6763,	// (0x000460ef) aid_size_touch_calib_3

0x677b,	// (0x00046107) aid_size_touch_calib_4_ParamLimits

0x677b,	// (0x00046107) aid_size_touch_calib_4

0x678f,	// (0x0004611b) main_touch_calib_button_group_pane_ParamLimits

0x678f,	// (0x0004611b) main_touch_calib_button_group_pane

0x67a7,	// (0x00046133) main_touch_calib_pane_g1_ParamLimits

0x67b9,	// (0x00046145) main_touch_calib_pane_g2_ParamLimits

0x67cb,	// (0x00046157) main_touch_calib_pane_g3_ParamLimits

0x67dd,	// (0x00046169) main_touch_calib_pane_g4_ParamLimits

0xf697,	// (0x0004f023) main_touch_calib_pane_g_ParamLimits

0x67ef,	// (0x0004617b) main_touch_calib_pane_t1_ParamLimits

0x6807,	// (0x00046193) main_touch_calib_pane_t2_ParamLimits

0x681f,	// (0x000461ab) main_touch_calib_pane_t3_ParamLimits

0x6831,	// (0x000461bd) main_touch_calib_pane_t4_ParamLimits

0x6843,	// (0x000461cf) main_touch_calib_pane_t5_ParamLimits

0xf6a0,	// (0x0004f02c) main_touch_calib_pane_t_ParamLimits

0x6f16,	// (0x000468a2) list_single_fp_cale_pane_g3_ParamLimits

0x6f16,	// (0x000468a2) list_single_fp_cale_pane_g3

0xefdc,	// (0x0004e968) bg_button_pane_cp012_ParamLimits

0xefdc,	// (0x0004e968) bg_vkb2_func_pane_cp03_ParamLimits

0x8b5d,	// (0x000484e9) cell_vitu2_function_top_pane_g1_ParamLimits

0xefdc,	// (0x0004e968) bg_vkb2_func_pane_cp04_ParamLimits

0x9719,	// (0x000490a5) main_ncimui_button_group_pane_ParamLimits

0x9719,	// (0x000490a5) main_ncimui_button_group_pane

0x9777,	// (0x00049103) main_ncimui_pane_t3_ParamLimits

0x9777,	// (0x00049103) main_ncimui_pane_t3

0xc918,	// (0x0004c2a4) phacti_button_group_pane

0xcc7d,	// (0x0004c609) aid_size_list_single_double_ParamLimits

0xa23f,	// (0x00049bcb) popup_ezdial_listscroll_window_ParamLimits

0xa255,	// (0x00049be1) popup_number_entry_window_cp01_ParamLimits

0xa2f3,	// (0x00049c7f) phacti_button_pane_ParamLimits

0xa2f3,	// (0x00049c7f) phacti_button_pane

0xd30f,	// (0x0004cc9b) bg_button_pane_cp14

0xcd8c,	// (0x0004c718) phacti_button_pane_t1

0xa302,	// (0x00049c8e) main_touch_calib_button_pane_ParamLimits

0xa302,	// (0x00049c8e) main_touch_calib_button_pane

0xdb75,	// (0x0004d501) bg_button_pane_cp18_ParamLimits

0xdb75,	// (0x0004d501) bg_button_pane_cp18

0xcd9a,	// (0x0004c726) main_touch_calib_button_pane_t1_ParamLimits

0xcd9a,	// (0x0004c726) main_touch_calib_button_pane_t1

0xcdb0,	// (0x0004c73c) main_touch_calib_button_pane_t2_ParamLimits

0xcdb0,	// (0x0004c73c) main_touch_calib_button_pane_t2

0x0001,

0xfd86,	// (0x0004f712) main_touch_calib_button_pane_t_ParamLimits

0xfd86,	// (0x0004f712) main_touch_calib_button_pane_t

0xd30f,	// (0x0004cc9b) cell_ncimui_button_pane

0xd30f,	// (0x0004cc9b) bg_button_pane_cp032

0xcdce,	// (0x0004c75a) cell_ncimui_button_pane_t1

0xb25a,	// (0x0004abe6) image3_infobar_pane_ParamLimits

0xb25a,	// (0x0004abe6) image3_infobar_pane

0x9b5c,	// (0x000494e8) fs_bigclock_status_pane_ParamLimits

0x9b5c,	// (0x000494e8) fs_bigclock_status_pane

0x9b69,	// (0x000494f5) main_fs_bigclock_clock_pane_ParamLimits

0x9b69,	// (0x000494f5) main_fs_bigclock_clock_pane

0x9b85,	// (0x00049511) main_fs_bigclock_indi_pane_ParamLimits

0x9b85,	// (0x00049511) main_fs_bigclock_indi_pane

0x9baf,	// (0x0004953b) main_fs_bigclock_swipe_pane_ParamLimits

0x9baf,	// (0x0004953b) main_fs_bigclock_swipe_pane

0xd30f,	// (0x0004cc9b) main_fs_clock_dumped_data

0xc2ac,	// (0x0004bc38) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc2ac,	// (0x0004bc38) list_single_fs_bigclock_indicator_pane_g1

0xc2c6,	// (0x0004bc52) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc2c6,	// (0x0004bc52) list_single_fs_bigclock_indicator_pane_g2

0xc2e0,	// (0x0004bc6c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc2e0,	// (0x0004bc6c) list_single_fs_bigclock_indicator_pane_g3

0xc2fa,	// (0x0004bc86) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc2fa,	// (0x0004bc86) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbae,	// (0x0004f53a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbae,	// (0x0004f53a) list_single_fs_bigclock_indicator_pane_g

0xc323,	// (0x0004bcaf) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc323,	// (0x0004bcaf) list_single_fs_bigclock_indicator_pane_t1

0xc34b,	// (0x0004bcd7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc34b,	// (0x0004bcd7) list_single_fs_bigclock_indicator_pane_t2

0xc373,	// (0x0004bcff) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc373,	// (0x0004bcff) list_single_fs_bigclock_indicator_pane_t3

0xc39b,	// (0x0004bd27) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc39b,	// (0x0004bd27) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb9,	// (0x0004f545) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb9,	// (0x0004f545) list_single_fs_bigclock_indicator_pane_t

0xcddc,	// (0x0004c768) image3_infobar_fav_pane_ParamLimits

0xcddc,	// (0x0004c768) image3_infobar_fav_pane

0xcdec,	// (0x0004c778) image3_infobar_loc_pane_ParamLimits

0xcdec,	// (0x0004c778) image3_infobar_loc_pane

0xce00,	// (0x0004c78c) image3_infobar_time_pane_ParamLimits

0xce00,	// (0x0004c78c) image3_infobar_time_pane

0x63d9,	// (0x00045d65) image3_infobar_time_pane_g1

0xce10,	// (0x0004c79c) image3_infobar_time_pane_t1

0x63d9,	// (0x00045d65) image3_infobar_loc_pane_g1

0xce1e,	// (0x0004c7aa) image3_infobar_loc_pane_g2

0x0001,

0xfd8b,	// (0x0004f717) image3_infobar_loc_pane_g

0xce26,	// (0x0004c7b2) image3_infobar_loc_pane_t1

0x63d9,	// (0x00045d65) image3_infobar_fav_pane_g1

0xce34,	// (0x0004c7c0) image3_infobar_fav_pane_g2

0x0001,

0xfd90,	// (0x0004f71c) image3_infobar_fav_pane_g

0xce3c,	// (0x0004c7c8) fs_bigclock_status_battery_pane

0xce45,	// (0x0004c7d1) fs_bigclock_status_signal_pane

0xce4e,	// (0x0004c7da) fs_bigclock_status_title_pane

0xce57,	// (0x0004c7e3) fs_bigclock_status_signal_pane_g1

0xce60,	// (0x0004c7ec) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd95,	// (0x0004f721) fs_bigclock_status_signal_pane_g

0xce68,	// (0x0004c7f4) fs_bigclock_status_battery_pane_g1

0xce71,	// (0x0004c7fd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd9a,	// (0x0004f726) fs_bigclock_status_battery_pane_g

0xce79,	// (0x0004c805) fs_bigclock_status_title_pane_t1

0xa315,	// (0x00049ca1) main_fs_bigclock_clock_pane_g1

0xa315,	// (0x00049ca1) main_fs_bigclock_clock_pane_g2

0xa326,	// (0x00049cb2) main_fs_bigclock_clock_pane_g3

0xa326,	// (0x00049cb2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd9f,	// (0x0004f72b) main_fs_bigclock_clock_pane_g

0xa339,	// (0x00049cc5) main_fs_bigclock_clock_pane_t1

0xa34f,	// (0x00049cdb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfda8,	// (0x0004f734) main_fs_bigclock_clock_pane_t

0xce87,	// (0x0004c813) list_single_fs_bigclock_indicator_pane_ParamLimits

0xce87,	// (0x0004c813) list_single_fs_bigclock_indicator_pane

0xce98,	// (0x0004c824) list_single_fs_bigclock_pane_ParamLimits

0xce98,	// (0x0004c824) list_single_fs_bigclock_pane

0xcebe,	// (0x0004c84a) main_fs_bigclock_indicator_pane_t1

0xcecd,	// (0x0004c859) list_single_fs_bigclock_pane_g1

0xced5,	// (0x0004c861) list_single_fs_bigclock_pane_t1

0x63d9,	// (0x00045d65) main_fs_bigclock_swipe_pane_g1

0xcf18,	// (0x0004c8a4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdb9,	// (0x0004f745) main_fs_bigclock_swipe_pane_g

0xcf20,	// (0x0004c8ac) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcf20,	// (0x0004c8ac) main_fs_bigclock_swipe_pane_t1

0x3a2f,	// (0x000433bb) call_type_pane_ParamLimits

0xd30f,	// (0x0004cc9b) main_btmg_pane

0xcaf1,	// (0x0004c47d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcaf1,	// (0x0004c47d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd2c,	// (0x0004f6b8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd2c,	// (0x0004f6b8) list_single_cale_mrui_row_pane_g

0xccd8,	// (0x0004c664) list_recal_vselct_arw_lo_pane

0xcce0,	// (0x0004c66c) list_recal_vselct_arw_up_pane

0xcce8,	// (0x0004c674) list_recal_vselct_pane

0xa3a7,	// (0x00049d33) btmg_button_pane

0xa3af,	// (0x00049d3b) main_btmg_pane_g1

0xd30f,	// (0x0004cc9b) bg_button_pane_cp044

0xcf3d,	// (0x0004c8c9) btmg_button_pane_t1

0x53de,	// (0x00044d6a) aid_listscroll_gen

0xefdc,	// (0x0004e968) main_cntbar_detail_pane

0xc7d8,	// (0x0004c164) list_cmail_folder_pane

0x3a23,	// (0x000433af) sp_fs_scroll_pane_cp03_ParamLimits

0xa00c,	// (0x00049998) list_single_fs_dyc_pane_cp01_ParamLimits

0xa00c,	// (0x00049998) list_single_fs_dyc_pane_cp01

0xcf4b,	// (0x0004c8d7) aid_size_cmail_indent

0xcf54,	// (0x0004c8e0) list_single_dyc_row_pane_cp01

0xa3df,	// (0x00049d6b) cntbar_detail_list_pane_ParamLimits

0xa3df,	// (0x00049d6b) cntbar_detail_list_pane

0xa425,	// (0x00049db1) main_cntbar_detail_cont_pane_ParamLimits

0xa425,	// (0x00049db1) main_cntbar_detail_cont_pane

0x3a23,	// (0x000433af) scroll_pane_cp032_ParamLimits

0x3a23,	// (0x000433af) scroll_pane_cp032

0xa439,	// (0x00049dc5) cntbar_detail_list_event_pane_ParamLimits

0xa439,	// (0x00049dc5) cntbar_detail_list_event_pane

0xa3ef,	// (0x00049d7b) cntbar_detail_list_shct_pane

0xdfda,	// (0x0004d966) aid_list_gen

0xcf5d,	// (0x0004c8e9) aid_scroll

0xcf66,	// (0x0004c8f2) aid_size_touch_scroll_bar

0x9049,	// (0x000489d5) aid_list_double

0xba5d,	// (0x0004b3e9) aid_list_single

0xba5d,	// (0x0004b3e9) aid_list_single_lg

0xcf6f,	// (0x0004c8fb) aid_list_z_g_a_sm

0x1af3,	// (0x0004147f) aid_list_z_g_d

0x1afb,	// (0x00041487) aid_txt_z_prm

0x1b09,	// (0x00041495) aid_txt_z_prm_cp01

0x1b17,	// (0x000414a3) aid_txt_z_sec

0xa449,	// (0x00049dd5) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa449,	// (0x00049dd5) main_cntbar_detail_cont_pane_g1

0xa45c,	// (0x00049de8) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa45c,	// (0x00049de8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdbe,	// (0x0004f74a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdbe,	// (0x0004f74a) main_cntbar_detail_cont_pane_g

0xcf77,	// (0x0004c903) main_cntbar_detail_cont_pane_t1

0xcf85,	// (0x0004c911) main_cntbar_detail_cont_pane_t2

0xcf93,	// (0x0004c91f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdc3,	// (0x0004f74f) main_cntbar_detail_cont_pane_t

0xa46c,	// (0x00049df8) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa46c,	// (0x00049df8) cell_cntbar_detail_list_shct_pane

0xcfa1,	// (0x0004c92d) cntbar_detail_list_shct_pane_g1

0xcfaa,	// (0x0004c936) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdca,	// (0x0004f756) cntbar_detail_list_shct_pane_g

0xa47e,	// (0x00049e0a) cntbar_detail_list_event_pane_g1_ParamLimits

0xa47e,	// (0x00049e0a) cntbar_detail_list_event_pane_g1

0xa48a,	// (0x00049e16) cntbar_detail_list_event_pane_g2_ParamLimits

0xa48a,	// (0x00049e16) cntbar_detail_list_event_pane_g2

0x0005,

0xfdcf,	// (0x0004f75b) cntbar_detail_list_event_pane_g_ParamLimits

0xfdcf,	// (0x0004f75b) cntbar_detail_list_event_pane_g

0xa4f6,	// (0x00049e82) cntbar_detail_list_event_pane_t1_ParamLimits

0xa4f6,	// (0x00049e82) cntbar_detail_list_event_pane_t1

0xa50b,	// (0x00049e97) cntbar_detail_list_event_pane_t2_ParamLimits

0xa50b,	// (0x00049e97) cntbar_detail_list_event_pane_t2

0x0002,

0xfddc,	// (0x0004f768) cntbar_detail_list_event_pane_t_ParamLimits

0xfddc,	// (0x0004f768) cntbar_detail_list_event_pane_t

0x63d9,	// (0x00045d65) cell_cntbar_detail_list_shct_pane_g1

0xe71a,	// (0x0004e0a6) navi_pane_mv_g3

0xefdc,	// (0x0004e968) main_cntbar_detail_pane_ParamLimits

0xd30f,	// (0x0004cc9b) main_notif_wgt_pane

0xaffa,	// (0x0004a986) aid_tch_main_mp4_pane_g4

0xb1f2,	// (0x0004ab7e) popup_slider_window_cp02

0xccce,	// (0x0004c65a) list_recal_day_event_pane

0xa3b7,	// (0x00049d43) cntbar_detail_btn_pane_ParamLimits

0xa3b7,	// (0x00049d43) cntbar_detail_btn_pane

0xa3ca,	// (0x00049d56) cntbar_detail_btn_pane_cp01_ParamLimits

0xa3ca,	// (0x00049d56) cntbar_detail_btn_pane_cp01

0xa3ef,	// (0x00049d7b) cntbar_detail_list_shct_pane_ParamLimits

0xa3ff,	// (0x00049d8b) cntbar_detail_pane_g1_ParamLimits

0xa3ff,	// (0x00049d8b) cntbar_detail_pane_g1

0xa40f,	// (0x00049d9b) cntbar_detail_pane_t1_ParamLimits

0xa40f,	// (0x00049d9b) cntbar_detail_pane_t1

0xa496,	// (0x00049e22) cntbar_detail_list_event_pane_g3_ParamLimits

0xa496,	// (0x00049e22) cntbar_detail_list_event_pane_g3

0xa4ae,	// (0x00049e3a) cntbar_detail_list_event_pane_g4_ParamLimits

0xa4ae,	// (0x00049e3a) cntbar_detail_list_event_pane_g4

0xa4c6,	// (0x00049e52) cntbar_detail_list_event_pane_g5_ParamLimits

0xa4c6,	// (0x00049e52) cntbar_detail_list_event_pane_g5

0xa4de,	// (0x00049e6a) cntbar_detail_list_event_pane_g6_ParamLimits

0xa4de,	// (0x00049e6a) cntbar_detail_list_event_pane_g6

0xa520,	// (0x00049eac) cntbar_detail_list_event_pane_t3_ParamLimits

0xa520,	// (0x00049eac) cntbar_detail_list_event_pane_t3

0xa532,	// (0x00049ebe) popup_notif_wgt_window_ParamLimits

0xa532,	// (0x00049ebe) popup_notif_wgt_window

0xa547,	// (0x00049ed3) popup_submenu_window_cp01_ParamLimits

0xa547,	// (0x00049ed3) popup_submenu_window_cp01

0xdd26,	// (0x0004d6b2) bg_popup_window_pane_cp10

0xcfb3,	// (0x0004c93f) listscroll_notif_wgt_pane

0xcfc4,	// (0x0004c950) list_notif_wgt_window

0xcfcd,	// (0x0004c959) scroll_pane_cp033

0xa557,	// (0x00049ee3) list_notif_wgt_row_pane_ParamLimits

0xa557,	// (0x00049ee3) list_notif_wgt_row_pane

0xcfd6,	// (0x0004c962) aid_size_list_notif_wgt_del

0xcfe3,	// (0x0004c96f) list_notif_wgt_row_pane_g1

0xcfef,	// (0x0004c97b) list_notif_wgt_row_pane_g2

0xcffe,	// (0x0004c98a) list_notif_wgt_row_pane_g3

0x0002,

0xfde3,	// (0x0004f76f) list_notif_wgt_row_pane_g

0xd00b,	// (0x0004c997) list_notif_wgt_row_pane_t1

0xd021,	// (0x0004c9ad) list_notif_wgt_row_pane_t2

0xd033,	// (0x0004c9bf) list_notif_wgt_row_pane_t3

0x0002,

0xfdea,	// (0x0004f776) list_notif_wgt_row_pane_t

0xb729,	// (0x0004b0b5) list_recal_day_event_pane_g1

0xd045,	// (0x0004c9d1) list_recal_day_event_pane_t1

0xd30f,	// (0x0004cc9b) bg_button_pane_cp045

0xa567,	// (0x00049ef3) cntbar_detail_btn_pane_t1

0x5406,	// (0x00044d92) main_callh_pane_ParamLimits

0x5406,	// (0x00044d92) main_callh_pane

0xd30f,	// (0x0004cc9b) main_coverflow0_pane

0xd30f,	// (0x0004cc9b) main_wgtman_pane

0x9bc3,	// (0x0004954f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9bc3,	// (0x0004954f) main_fs_bigclock_unlock_btn_pane

0xc7aa,	// (0x0004c136) bg_button_pane_cp16

0xc7ba,	// (0x0004c146) cell_tport_appsw_pane_g3

0xa575,	// (0x00049f01) cf0_flow_pane_ParamLimits

0xa575,	// (0x00049f01) cf0_flow_pane

0xd054,	// (0x0004c9e0) listscroll_cf0_pane

0xd05d,	// (0x0004c9e9) main_cf0_pane_g1

0xa58a,	// (0x00049f16) main_cf0_pane_t1_ParamLimits

0xa58a,	// (0x00049f16) main_cf0_pane_t1

0xa59f,	// (0x00049f2b) main_cf0_pane_t2_ParamLimits

0xa59f,	// (0x00049f2b) main_cf0_pane_t2

0x0001,

0xfdf6,	// (0x0004f782) main_cf0_pane_t_ParamLimits

0xfdf6,	// (0x0004f782) main_cf0_pane_t

0xd06f,	// (0x0004c9fb) scroll_pane_cp11

0xa5b4,	// (0x00049f40) cf0_flow_pane_g1

0xa5bc,	// (0x00049f48) cf0_flow_pane_g2

0x0001,

0xfdfb,	// (0x0004f787) cf0_flow_pane_g

0xa5c4,	// (0x00049f50) cf0_flow_pane_t1

0xd30f,	// (0x0004cc9b) main_call6_pane

0xd30f,	// (0x0004cc9b) main_calllock_pane

0xa5d2,	// (0x00049f5e) call6_btn_grp_pane_ParamLimits

0xa5d2,	// (0x00049f5e) call6_btn_grp_pane

0xa5e8,	// (0x00049f74) call6_pane_g1_ParamLimits

0xa5e8,	// (0x00049f74) call6_pane_g1

0xa5fb,	// (0x00049f87) popup_call6_1st_window_ParamLimits

0xa5fb,	// (0x00049f87) popup_call6_1st_window

0xa60a,	// (0x00049f96) popup_call6_2nd_window_ParamLimits

0xa60a,	// (0x00049f96) popup_call6_2nd_window

0xa619,	// (0x00049fa5) cell_call6_btn_pane_ParamLimits

0xa619,	// (0x00049fa5) cell_call6_btn_pane

0xdd26,	// (0x0004d6b2) bg_popup_call2_in_pane_cp03

0xd078,	// (0x0004ca04) popup_call6_1st_window_g1

0xd080,	// (0x0004ca0c) popup_call6_1st_window_g2

0xd088,	// (0x0004ca14) popup_call6_1st_window_g3

0x0002,

0xfe00,	// (0x0004f78c) popup_call6_1st_window_g

0xd090,	// (0x0004ca1c) popup_call6_1st_window_t1

0xd09f,	// (0x0004ca2b) popup_call6_1st_window_t2

0xd0ad,	// (0x0004ca39) popup_call6_1st_window_t3

0x0002,

0xfe07,	// (0x0004f793) popup_call6_1st_window_t

0xdd26,	// (0x0004d6b2) bg_popup_call2_in_pane_cp04

0xd078,	// (0x0004ca04) popup_call6_2nd_window_g1

0xd080,	// (0x0004ca0c) popup_call6_2nd_window_g2

0xd088,	// (0x0004ca14) popup_call6_2nd_window_g3

0x0002,

0xfe00,	// (0x0004f78c) popup_call6_2nd_window_g

0xd090,	// (0x0004ca1c) popup_call6_2nd_window_t1

0xd30f,	// (0x0004cc9b) bg_button_pane_cp15

0xd0bb,	// (0x0004ca47) cell_call6_btn_pane_g1

0xd0c4,	// (0x0004ca50) cell_call6_btn_pane_t1

0xa62d,	// (0x00049fb9) listscroll_wgtman_pane_ParamLimits

0xa62d,	// (0x00049fb9) listscroll_wgtman_pane

0xa64e,	// (0x00049fda) wgtman_btn_pane_ParamLimits

0xa64e,	// (0x00049fda) wgtman_btn_pane

0xe532,	// (0x0004debe) aid_scroll_copy1

0xd0d3,	// (0x0004ca5f) list_wgtman_pane

0xa68e,	// (0x0004a01a) wgtman_btn_pane_g1_ParamLimits

0xa68e,	// (0x0004a01a) wgtman_btn_pane_g1

0xa6ba,	// (0x0004a046) wgtman_btn_pane_t1_ParamLimits

0xa6ba,	// (0x0004a046) wgtman_btn_pane_t1

0xd0dd,	// (0x0004ca69) wgtman_btn_pane_t2_ParamLimits

0xd0dd,	// (0x0004ca69) wgtman_btn_pane_t2

0x0001,

0xfe0e,	// (0x0004f79a) wgtman_btn_pane_t_ParamLimits

0xfe0e,	// (0x0004f79a) wgtman_btn_pane_t

0xa6f7,	// (0x0004a083) listrow_wgtman_pane_ParamLimits

0xa6f7,	// (0x0004a083) listrow_wgtman_pane

0xa708,	// (0x0004a094) listrow_wgtman_pane_g1

0xa715,	// (0x0004a0a1) listrow_wgtman_pane_g2

0x0001,

0xfe13,	// (0x0004f79f) listrow_wgtman_pane_g

0x1b25,	// (0x000414b1) listrow_wgtman_pane_t1

0x1b3d,	// (0x000414c9) listrow_wgtman_pane_t2

0x0001,

0xfe18,	// (0x0004f7a4) listrow_wgtman_pane_t

0x1b63,	// (0x000414ef) wait_bar_pane_cp09

0xd0f4,	// (0x0004ca80) main_calllock_btn_pane

0xd0fc,	// (0x0004ca88) main_calllock_pane_g1

0xd30f,	// (0x0004cc9b) bg_button_pane_cp17

0xd105,	// (0x0004ca91) main_calllock_btn_pane_g1

0xd10e,	// (0x0004ca9a) main_calllock_btn_pane_t1

0xd30f,	// (0x0004cc9b) main_dialer3_pane

0xd30f,	// (0x0004cc9b) main_fmrd2_pane

0x63d9,	// (0x00045d65) main_fs_bigclock_unlock_btn_pane_g1

0xd125,	// (0x0004cab1) main_fs_bigclock_unlock_btn_pane_t1

0xa72d,	// (0x0004a0b9) area_fmrd2_info_pane_ParamLimits

0xa72d,	// (0x0004a0b9) area_fmrd2_info_pane

0xa73c,	// (0x0004a0c8) area_fmrd2_visual_pane_ParamLimits

0xa73c,	// (0x0004a0c8) area_fmrd2_visual_pane

0xa74a,	// (0x0004a0d6) fmrd2_indi_pane_ParamLimits

0xa74a,	// (0x0004a0d6) fmrd2_indi_pane

0xa757,	// (0x0004a0e3) area_fmrd2_visual_pane_g1

0xa75f,	// (0x0004a0eb) area_fmrd2_visual_pane_t1

0xa76d,	// (0x0004a0f9) area_fmrd2_visual_pane_t2

0xa77b,	// (0x0004a107) area_fmrd2_visual_pane_t3

0x0002,

0xfe22,	// (0x0004f7ae) area_fmrd2_visual_pane_t

0xa789,	// (0x0004a115) area_fmrd2_info_pane_g1

0xa791,	// (0x0004a11d) area_fmrd2_info_pane_t1

0xa79f,	// (0x0004a12b) area_fmrd2_info_pane_t2

0xa7ad,	// (0x0004a139) area_fmrd2_info_pane_t3

0xa7bb,	// (0x0004a147) area_fmrd2_info_pane_t4

0x0003,

0xfe29,	// (0x0004f7b5) area_fmrd2_info_pane_t

0xa7c9,	// (0x0004a155) fmrd2_indi_pane_t1

0xa7d7,	// (0x0004a163) fmrd2_indi_pane_t2

0xa7e5,	// (0x0004a171) fmrd2_indi_pane_t3

0x0002,

0xfe32,	// (0x0004f7be) fmrd2_indi_pane_t

0xc309,	// (0x0004bc95) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc309,	// (0x0004bc95) list_single_fs_bigclock_indicator_pane_g5

0xc3b7,	// (0x0004bd43) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc3b7,	// (0x0004bd43) list_single_fs_bigclock_indicator_pane_t5

0xa0fd,	// (0x00049a89) aid_cell_bcale_month_pane_ParamLimits

0xa0fd,	// (0x00049a89) aid_cell_bcale_month_pane

0xa11b,	// (0x00049aa7) bcale_month_pane_ParamLimits

0xa11b,	// (0x00049aa7) bcale_month_pane

0xa133,	// (0x00049abf) bcale_preview_pane_ParamLimits

0xa133,	// (0x00049abf) bcale_preview_pane

0xced5,	// (0x0004c861) list_single_fs_bigclock_pane_t1_ParamLimits

0xcef4,	// (0x0004c880) list_single_fs_bigclock_pane_t2_ParamLimits

0xcef4,	// (0x0004c880) list_single_fs_bigclock_pane_t2

0x0001,

0xfdb4,	// (0x0004f740) list_single_fs_bigclock_pane_t_ParamLimits

0xfdb4,	// (0x0004f740) list_single_fs_bigclock_pane_t

0xd11d,	// (0x0004caa9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe1d,	// (0x0004f7a9) main_fs_bigclock_unlock_btn_pane_g

0xa7f3,	// (0x0004a17f) aid_dia3_key_size_ParamLimits

0xa7f3,	// (0x0004a17f) aid_dia3_key_size

0xa802,	// (0x0004a18e) aid_dia3_listrow_size_ParamLimits

0xa802,	// (0x0004a18e) aid_dia3_listrow_size

0xa815,	// (0x0004a1a1) dia3_keypad_fun_pane_ParamLimits

0xa815,	// (0x0004a1a1) dia3_keypad_fun_pane

0xa829,	// (0x0004a1b5) dia3_keypad_num_pane_ParamLimits

0xa829,	// (0x0004a1b5) dia3_keypad_num_pane

0xa83a,	// (0x0004a1c6) dia3_listscroll_pane_ParamLimits

0xa83a,	// (0x0004a1c6) dia3_listscroll_pane

0xa84b,	// (0x0004a1d7) dia3_numentry_pane_ParamLimits

0xa84b,	// (0x0004a1d7) dia3_numentry_pane

0xd133,	// (0x0004cabf) dia3_list_pane

0xd13c,	// (0x0004cac8) scroll_pane_cp12

0xd30f,	// (0x0004cc9b) bg_dia3_numentry_pane

0xa85d,	// (0x0004a1e9) dia3_numentry_pane_t1

0xa86c,	// (0x0004a1f8) cell_dia3_key_num_pane

0xa874,	// (0x0004a200) cell_dia3_key0_fun_pane_ParamLimits

0xa874,	// (0x0004a200) cell_dia3_key0_fun_pane

0xa888,	// (0x0004a214) cell_dia3_key1_fun_pane_ParamLimits

0xa888,	// (0x0004a214) cell_dia3_key1_fun_pane

0xa89f,	// (0x0004a22b) dia3_listrow_pane

0xc057,	// (0x0004b9e3) bg_dia3_numentry_pane_g1

0xd30f,	// (0x0004cc9b) bg_button_pane_cp21

0xd145,	// (0x0004cad1) cell_dia3_key_num_pane_t1

0xd153,	// (0x0004cadf) cell_dia3_key_num_pane_t2

0xd162,	// (0x0004caee) cell_dia3_key_num_pane_t3

0xd171,	// (0x0004cafd) cell_dia3_key_num_pane_t4

0x0003,

0xfe39,	// (0x0004f7c5) cell_dia3_key_num_pane_t

0xd30f,	// (0x0004cc9b) bg_button_pane_cp19

0xd180,	// (0x0004cb0c) cell_dia3_key0_fun_pane_g1

0xd30f,	// (0x0004cc9b) bg_button_pane_cp20

0xa8b1,	// (0x0004a23d) cell_dia3_key1_fun_pane_g1

0xa8b9,	// (0x0004a245) area_left_week_number_pane

0xa8c5,	// (0x0004a251) area_top_day_name_pane

0xa8d6,	// (0x0004a262) frame_month_view_pane

0xd188,	// (0x0004cb14) grid_month_view_pane

0xa8e7,	// (0x0004a273) cell_top_day_name_pane_ParamLimits

0xa8e7,	// (0x0004a273) cell_top_day_name_pane

0xa90a,	// (0x0004a296) cell_area_left_week_number_pane_ParamLimits

0xa90a,	// (0x0004a296) cell_area_left_week_number_pane

0xa91e,	// (0x0004a2aa) cell_month_view_pane_ParamLimits

0xa91e,	// (0x0004a2aa) cell_month_view_pane

0xd196,	// (0x0004cb22) frm_month_g1

0xa943,	// (0x0004a2cf) frm_month_g2

0xa954,	// (0x0004a2e0) frm_month_g3

0xa965,	// (0x0004a2f1) frm_month_g4

0xa976,	// (0x0004a302) frm_month_g5

0xa987,	// (0x0004a313) frm_month_g6

0xa998,	// (0x0004a324) frm_month_g7

0xd1a3,	// (0x0004cb2f) frm_month_g8

0xa9a9,	// (0x0004a335) frm_month_g9

0xa9b9,	// (0x0004a345) frm_month_g10

0xa9c9,	// (0x0004a355) frm_month_g11

0xa9d9,	// (0x0004a365) frm_month_g12

0xa9e9,	// (0x0004a375) frm_month_g13

0xa9f9,	// (0x0004a385) frm_month_g14

0xaa09,	// (0x0004a395) frm_month_g15

0xaa1b,	// (0x0004a3a7) frm_month_g16

0x000f,

0xfe42,	// (0x0004f7ce) frm_month_g

0xd1b0,	// (0x0004cb3c) cell_top_day_name_pane_t1

0xaa2d,	// (0x0004a3b9) cell_area_left_week_number_pane_g1

0xaa39,	// (0x0004a3c5) cell_area_left_week_number_pane_t1

0x66a4,	// (0x00046030) cell_month_view_pane_g1

0xaa4c,	// (0x0004a3d8) cell_month_view_pane_t1

0xd30f,	// (0x0004cc9b) main_fps_pane

0xc5a3,	// (0x0004bf2f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc5a3,	// (0x0004bf2f) cmail_ddmenu_btn02_pane_cp1

0xc5bf,	// (0x0004bf4b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc5bf,	// (0x0004bf4b) cmail_ddmenu_btn02_pane_cp2

0xa28d,	// (0x00049c19) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa28d,	// (0x00049c19) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd67,	// (0x0004f6f3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd67,	// (0x0004f6f3) cmail_ddmenu_btn02_pane_g

0xa2ac,	// (0x00049c38) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa2ac,	// (0x00049c38) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd6c,	// (0x0004f6f8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd6c,	// (0x0004f6f8) cmail_ddmenu_btn02_pane_t

0xaa5f,	// (0x0004a3eb) fps_text_pane_ParamLimits

0xaa5f,	// (0x0004a3eb) fps_text_pane

0xaa75,	// (0x0004a401) main_fps_pane_g1_ParamLimits

0xaa75,	// (0x0004a401) main_fps_pane_g1

0xaa8b,	// (0x0004a417) wait_bar_pane_cp010_ParamLimits

0xaa8b,	// (0x0004a417) wait_bar_pane_cp010

0xd1c3,	// (0x0004cb4f) fps_text_pane_t1_ParamLimits

0xd1c3,	// (0x0004cb4f) fps_text_pane_t1

0xb35b,	// (0x0004ace7) cam4_image_uncrop_pane_g1

0xb364,	// (0x0004acf0) cam4_image_uncrop_pane_g2

0x81cb,	// (0x00047b57) cam4_image_uncrop_pane_g3

0x81d4,	// (0x00047b60) cam4_image_uncrop_pane_g4

0x0003,

0xf82f,	// (0x0004f1bb) cam4_image_uncrop_pane_g

0xa89f,	// (0x0004a22b) dia3_listrow_pane_ParamLimits

0xd30f,	// (0x0004cc9b) main_phob2_pane

0x9f93,	// (0x0004991f) cell_tport_appsw_pane_cp02_ParamLimits

0x9f93,	// (0x0004991f) cell_tport_appsw_pane_cp02

0x9fa3,	// (0x0004992f) cell_tport_appsw_pane_cp03_ParamLimits

0x9fa3,	// (0x0004992f) cell_tport_appsw_pane_cp03

0xd30f,	// (0x0004cc9b) phob2_contact_card_pane

0xd30f,	// (0x0004cc9b) phob2_listscroll_pane

0xd1db,	// (0x0004cb67) phob2_list_pane

0xd1e3,	// (0x0004cb6f) scroll_pane_cp034

0xaa9c,	// (0x0004a428) phob2_cc_data_pane_ParamLimits

0xaa9c,	// (0x0004a428) phob2_cc_data_pane

0xaab9,	// (0x0004a445) phob2_cc_listscroll_pane_ParamLimits

0xaab9,	// (0x0004a445) phob2_cc_listscroll_pane

0xa6f7,	// (0x0004a083) list_double_large_graphic_phob2_pane_ParamLimits

0xa6f7,	// (0x0004a083) list_double_large_graphic_phob2_pane

0xaad5,	// (0x0004a461) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaad5,	// (0x0004a461) list_double_large_graphic_phob2_pane_g1

0x1b75,	// (0x00041501) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1b75,	// (0x00041501) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe63,	// (0x0004f7ef) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe63,	// (0x0004f7ef) list_double_large_graphic_phob2_pane_g

0x1b81,	// (0x0004150d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1b81,	// (0x0004150d) list_double_large_graphic_phob2_pane_t1

0x1b97,	// (0x00041523) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1b97,	// (0x00041523) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe68,	// (0x0004f7f4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe68,	// (0x0004f7f4) list_double_large_graphic_phob2_pane_t

0xd30f,	// (0x0004cc9b) list_highlight_pane_cp024

0xaaeb,	// (0x0004a477) phob2_cc_button_pane

0xaaf3,	// (0x0004a47f) phob2_cc_data_pane_g1_ParamLimits

0xaaf3,	// (0x0004a47f) phob2_cc_data_pane_g1

0xab08,	// (0x0004a494) phob2_cc_data_pane_g2_ParamLimits

0xab08,	// (0x0004a494) phob2_cc_data_pane_g2

0x0001,

0xfe6d,	// (0x0004f7f9) phob2_cc_data_pane_g_ParamLimits

0xfe6d,	// (0x0004f7f9) phob2_cc_data_pane_g

0xab18,	// (0x0004a4a4) phob2_cc_data_pane_t1_ParamLimits

0xab18,	// (0x0004a4a4) phob2_cc_data_pane_t1

0xab30,	// (0x0004a4bc) phob2_cc_data_pane_t2_ParamLimits

0xab30,	// (0x0004a4bc) phob2_cc_data_pane_t2

0xab48,	// (0x0004a4d4) phob2_cc_data_pane_t3_ParamLimits

0xab48,	// (0x0004a4d4) phob2_cc_data_pane_t3

0x0002,

0xfe72,	// (0x0004f7fe) phob2_cc_data_pane_t_ParamLimits

0xfe72,	// (0x0004f7fe) phob2_cc_data_pane_t

0xd1eb,	// (0x0004cb77) phob2_cc_list_pane_ParamLimits

0xd1eb,	// (0x0004cb77) phob2_cc_list_pane

0xb7d2,	// (0x0004b15e) scroll_pane_cp035_ParamLimits

0xb7d2,	// (0x0004b15e) scroll_pane_cp035

0xefdc,	// (0x0004e968) bg_button_pane_cp033

0xd1f7,	// (0x0004cb83) phob2_cc_button_pane_g1

0xd203,	// (0x0004cb8f) phob2_cc_button_pane_t1

0xd218,	// (0x0004cba4) phob2_cc_button_pane_t2

0x0001,

0xfe79,	// (0x0004f805) phob2_cc_button_pane_t

0xab60,	// (0x0004a4ec) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xab60,	// (0x0004a4ec) list_double_large_graphic_phob2_cc_pane

0xab71,	// (0x0004a4fd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xab71,	// (0x0004a4fd) list_double_large_graphic_phob2_cc_pane_g1

0x1bac,	// (0x00041538) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1bac,	// (0x00041538) list_double_large_graphic_phob2_cc_pane_g2

0x1bb8,	// (0x00041544) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1bb8,	// (0x00041544) list_double_large_graphic_phob2_cc_pane_g3

0x1bc4,	// (0x00041550) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1bc4,	// (0x00041550) list_double_large_graphic_phob2_cc_pane_g4

0x1bd0,	// (0x0004155c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1bd0,	// (0x0004155c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe7e,	// (0x0004f80a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe7e,	// (0x0004f80a) list_double_large_graphic_phob2_cc_pane_g

0x1bdc,	// (0x00041568) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1bdc,	// (0x00041568) list_double_large_graphic_phob2_cc_pane_t1

0x1c05,	// (0x00041591) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1c05,	// (0x00041591) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe89,	// (0x0004f815) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe89,	// (0x0004f815) list_double_large_graphic_phob2_cc_pane_t

0xd22a,	// (0x0004cbb6) list_highlight_pane_cp025_ParamLimits

0xd22a,	// (0x0004cbb6) list_highlight_pane_cp025

0xefdc,	// (0x0004e968) bg_button_pane_cp033_ParamLimits

0xd1f7,	// (0x0004cb83) phob2_cc_button_pane_g1_ParamLimits

0xd203,	// (0x0004cb8f) phob2_cc_button_pane_t1_ParamLimits

0xd218,	// (0x0004cba4) phob2_cc_button_pane_t2_ParamLimits

0xfe79,	// (0x0004f805) phob2_cc_button_pane_t_ParamLimits

0x1e3f,	// (0x000417cb) popup_wgtman_window

0xb5ba,	// (0x0004af46) scroll_pane_cp038

0xa670,	// (0x00049ffc) wgtman_btn_pane_cp_01_ParamLimits

0xa670,	// (0x00049ffc) wgtman_btn_pane_cp_01

0xd238,	// (0x0004cbc4) wgtman_content_pane

0xd241,	// (0x0004cbcd) wgtman_heading_pane

0xd30f,	// (0x0004cc9b) bg_heading_pane_cp02

0xd24a,	// (0x0004cbd6) wgtman_heading_pane_g1

0xd252,	// (0x0004cbde) wgtman_heading_pane_t1

0xd260,	// (0x0004cbec) scroll_pane_cp036

0xd268,	// (0x0004cbf4) wgtman_list_pane

0xc4a2,	// (0x0004be2e) wgtman_list_pane_t1_ParamLimits

0xc4a2,	// (0x0004be2e) wgtman_list_pane_t1

0xb349,	// (0x0004acd5) cam4_grid_pane

0x1226,	// (0x00040bb2) bg_button_pane_cp015_ParamLimits

0x8cdf,	// (0x0004866b) bg_button_pane_cp016_ParamLimits

0x8cf1,	// (0x0004867d) bg_button_pane_cp017_ParamLimits

0x1264,	// (0x00040bf0) popup_vitu2_query_window_g3_ParamLimits

0x1264,	// (0x00040bf0) popup_vitu2_query_window_g3

0x12dd,	// (0x00040c69) popup_vitu2_query_window_t6_ParamLimits

0x12dd,	// (0x00040c69) popup_vitu2_query_window_t6

0x1308,	// (0x00040c94) popup_vitu2_query_window_t7_ParamLimits

0x1308,	// (0x00040c94) popup_vitu2_query_window_t7

0xb35b,	// (0x0004ace7) cam4_grid_pane_g1

0xb364,	// (0x0004acf0) cam4_grid_pane_g2

0xd270,	// (0x0004cbfc) cam4_grid_pane_g3

0xd279,	// (0x0004cc05) cam4_grid_pane_g4

0x0003,

0xfe8e,	// (0x0004f81a) cam4_grid_pane_g

0x2c18,	// (0x000425a4) aid_placing_vt_slider_lsc_ParamLimits

0x2e85,	// (0x00042811) vidtel_button_pane_ParamLimits

0x2e85,	// (0x00042811) vidtel_button_pane

0xd30f,	// (0x0004cc9b) bg_button_pane_cp034

0xab7d,	// (0x0004a509) vidtel_button_pane_g1

0xab85,	// (0x0004a511) vidtel_button_pane_t1

0xb719,	// (0x0004b0a5) aid_size_vtel_slider_touch

0xb7d2,	// (0x0004b15e) scroll_pane_cp039

0x98f3,	// (0x0004927f) ncim_query_button_pane_cp01_ParamLimits

0x9912,	// (0x0004929e) ncimui_query_pane_g1_ParamLimits

0xefdc,	// (0x0004e968) input_focus_pane_cp012_ParamLimits

0xc09d,	// (0x0004ba29) ncim_query_entry_pane_t1_ParamLimits

0xb7d2,	// (0x0004b15e) scroll_pane_cp039_ParamLimits

0xe607,	// (0x0004df93) navi_pane_bcale_mc_g1

0xe60f,	// (0x0004df9b) navi_pane_bcale_mc_t1

0xc608,	// (0x0004bf94) main_sp_fs_email_pane_g1

0xc614,	// (0x0004bfa0) main_sp_fs_email_pane_g2

0x0001,

0xfc1f,	// (0x0004f5ab) main_sp_fs_email_pane_g

0xcafd,	// (0x0004c489) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcafd,	// (0x0004c489) list_single_cale_mrui_row_pane_g3

0x1ae9,	// (0x00041475) list_single_recal_day_pane_g5_event_pane

0xcd3f,	// (0x0004c6cb) list_single_recal_day_pane_g7

0xd282,	// (0x0004cc0e) list_recal_day_event_pane_cp01

0xd28b,	// (0x0004cc17) list_recal_vselct_arw_lo_pane_cp01

0xd293,	// (0x0004cc1f) list_recal_vselct_arw_up_pane_cp01

0xd29b,	// (0x0004cc27) list_recal_vselct_pane_cp01

0xb729,	// (0x0004b0b5) list_recal_day_event_pane_cp01_g1

0xd2a5,	// (0x0004cc31) list_recal_day_event_pane_cp01_t1

0xcd47,	// (0x0004c6d3) list_single_recal_day_pane_t1_ParamLimits

0xcd59,	// (0x0004c6e5) list_single_recal_day_pane_t2_ParamLimits

0xfd7c,	// (0x0004f708) list_single_recal_day_pane_t_ParamLimits

0xdaa4,	// (0x0004d430) bg_notes_pane_ParamLimits

0xdb53,	// (0x0004d4df) list_notes_pane_ParamLimits

0x2102,	// (0x00041a8e) scroll_pane_cp06_ParamLimits

0xdb75,	// (0x0004d501) main_notes_pane_ParamLimits

0xd30f,	// (0x0004cc9b) main_welc_pane

0xab9b,	// (0x0004a527) main_welc_body_pane_ParamLimits

0xab9b,	// (0x0004a527) main_welc_body_pane

0xabb7,	// (0x0004a543) main_welc_opti_pane_ParamLimits

0xabb7,	// (0x0004a543) main_welc_opti_pane

0xabf4,	// (0x0004a580) main_welc_pane_t1_ParamLimits

0xabf4,	// (0x0004a580) main_welc_pane_t1

0xd2b3,	// (0x0004cc3f) main_welc_body_row_pane_ParamLimits

0xd2b3,	// (0x0004cc3f) main_welc_body_row_pane

0xd2c6,	// (0x0004cc52) main_welc_opti_row_pane_ParamLimits

0xd2c6,	// (0x0004cc52) main_welc_opti_row_pane

0xd2d4,	// (0x0004cc60) main_welc_opti_row_pane_g1

0xac0e,	// (0x0004a59a) main_welc_opti_row_pane_t1

0xd2dc,	// (0x0004cc68) main_welc_body_row_pane_t1

0xcfbc,	// (0x0004c948) popup_notif_wgt_heading_pane

0xcfd6,	// (0x0004c962) aid_size_list_notif_wgt_del_ParamLimits

0xcfe3,	// (0x0004c96f) list_notif_wgt_row_pane_g1_ParamLimits

0xcfef,	// (0x0004c97b) list_notif_wgt_row_pane_g2_ParamLimits

0xcffe,	// (0x0004c98a) list_notif_wgt_row_pane_g3_ParamLimits

0xfde3,	// (0x0004f76f) list_notif_wgt_row_pane_g_ParamLimits

0xd00b,	// (0x0004c997) list_notif_wgt_row_pane_t1_ParamLimits

0xd021,	// (0x0004c9ad) list_notif_wgt_row_pane_t2_ParamLimits

0xd033,	// (0x0004c9bf) list_notif_wgt_row_pane_t3_ParamLimits

0xfdea,	// (0x0004f776) list_notif_wgt_row_pane_t_ParamLimits

0xa708,	// (0x0004a094) listrow_wgtman_pane_g1_ParamLimits

0xa715,	// (0x0004a0a1) listrow_wgtman_pane_g2_ParamLimits

0xfe13,	// (0x0004f79f) listrow_wgtman_pane_g_ParamLimits

0x1b25,	// (0x000414b1) listrow_wgtman_pane_t1_ParamLimits

0x1b3d,	// (0x000414c9) listrow_wgtman_pane_t2_ParamLimits

0xfe18,	// (0x0004f7a4) listrow_wgtman_pane_t_ParamLimits

0x1b63,	// (0x000414ef) wait_bar_pane_cp09_ParamLimits

0xd30f,	// (0x0004cc9b) bg_popup_heading_pane_cp02

0xd2eb,	// (0x0004cc77) popup_notif_wgt_heading_pane_g1

0xd2f3,	// (0x0004cc7f) popup_notif_wgt_heading_pane_t1

0xd30f,	// (0x0004cc9b) main_vids_pane

0xd30f,	// (0x0004cc9b) vids_listscroll_pane

0xac1d,	// (0x0004a5a9) scroll_pane_cp040

0xd30f,	// (0x0004cc9b) vids_list_pane

0xac28,	// (0x0004a5b4) vids_list_double_pane_ParamLimits

0xac28,	// (0x0004a5b4) vids_list_double_pane

0xac38,	// (0x0004a5c4) vids_list_double_pane_g1

0xac41,	// (0x0004a5cd) vids_list_double_pane_t1

0xac50,	// (0x0004a5dc) vids_list_double_pane_t2

0x0001,

0xfe9c,	// (0x0004f828) vids_list_double_pane_t

0xefdc,	// (0x0004e968) main_ncimui_pane_ParamLimits

0x972b,	// (0x000490b7) main_ncimui_pane_g1_ParamLimits

0x9737,	// (0x000490c3) main_ncimui_pane_g2_ParamLimits

0x9737,	// (0x000490c3) main_ncimui_pane_g2

0x0001,

0xfb24,	// (0x0004f4b0) main_ncimui_pane_g_ParamLimits

0xfb24,	// (0x0004f4b0) main_ncimui_pane_g

0xabce,	// (0x0004a55a) main_welc_pane_g1_ParamLimits

0xabce,	// (0x0004a55a) main_welc_pane_g1

0xabe1,	// (0x0004a56d) main_welc_pane_g2_ParamLimits

0xabe1,	// (0x0004a56d) main_welc_pane_g2

0x0001,

0xfe97,	// (0x0004f823) main_welc_pane_g_ParamLimits

0xfe97,	// (0x0004f823) main_welc_pane_g

0xdaa4,	// (0x0004d430) listscroll_mce_pane_ParamLimits

0xe75a,	// (0x0004e0e6) wait_bar_pane_cp10

0x53fa,	// (0x00044d86) main_cale_day_pane_ParamLimits

0x53fa,	// (0x00044d86) main_cale_week_pane_ParamLimits

0xdaa4,	// (0x0004d430) main_messa_pane_ParamLimits

0x7108,	// (0x00046a94) main_clock2_btn_pane_ParamLimits

0x7108,	// (0x00046a94) main_clock2_btn_pane

0x7118,	// (0x00046aa4) main_clock2_btn_pane_cp01_ParamLimits

0x7118,	// (0x00046aa4) main_clock2_btn_pane_cp01

0xca89,	// (0x0004c415) list_cale_mrui_pane_ParamLimits

0xd067,	// (0x0004c9f3) main_cf0_pane_g2

0x0001,

0xfdf1,	// (0x0004f77d) main_cf0_pane_g

0xa8b9,	// (0x0004a245) area_left_week_number_pane_ParamLimits

0xa8c5,	// (0x0004a251) area_top_day_name_pane_ParamLimits

0xa8d6,	// (0x0004a262) frame_month_view_pane_ParamLimits

0xd188,	// (0x0004cb14) grid_month_view_pane_ParamLimits

0xd196,	// (0x0004cb22) frm_month_g1_ParamLimits

0xa943,	// (0x0004a2cf) frm_month_g2_ParamLimits

0xa954,	// (0x0004a2e0) frm_month_g3_ParamLimits

0xa965,	// (0x0004a2f1) frm_month_g4_ParamLimits

0xa976,	// (0x0004a302) frm_month_g5_ParamLimits

0xa987,	// (0x0004a313) frm_month_g6_ParamLimits

0xa998,	// (0x0004a324) frm_month_g7_ParamLimits

0xd1a3,	// (0x0004cb2f) frm_month_g8_ParamLimits

0xa9a9,	// (0x0004a335) frm_month_g9_ParamLimits

0xa9b9,	// (0x0004a345) frm_month_g10_ParamLimits

0xa9c9,	// (0x0004a355) frm_month_g11_ParamLimits

0xa9d9,	// (0x0004a365) frm_month_g12_ParamLimits

0xa9e9,	// (0x0004a375) frm_month_g13_ParamLimits

0xa9f9,	// (0x0004a385) frm_month_g14_ParamLimits

0xaa09,	// (0x0004a395) frm_month_g15_ParamLimits

0xaa1b,	// (0x0004a3a7) frm_month_g16_ParamLimits

0xfe42,	// (0x0004f7ce) frm_month_g_ParamLimits

0xd1b0,	// (0x0004cb3c) cell_top_day_name_pane_t1_ParamLimits

0xaa2d,	// (0x0004a3b9) cell_area_left_week_number_pane_g1_ParamLimits

0xaa39,	// (0x0004a3c5) cell_area_left_week_number_pane_t1_ParamLimits

0x66a4,	// (0x00046030) cell_month_view_pane_g1_ParamLimits

0xaa4c,	// (0x0004a3d8) cell_month_view_pane_t1_ParamLimits

0xda9c,	// (0x0004d428) main_clock2_btn_pane_g1

0xd301,	// (0x0004cc8d) main_clock2_btn_pane_t1

0xefdc,	// (0x0004e968) listscroll_cmail_pane_ParamLimits

0xc608,	// (0x0004bf94) main_sp_fs_email_pane_g1_ParamLimits

0xc614,	// (0x0004bfa0) main_sp_fs_email_pane_g2_ParamLimits

0xfc1f,	// (0x0004f5ab) main_sp_fs_email_pane_g_ParamLimits

0xccaf,	// (0x0004c63b) list_recal_day_pane_ParamLimits

0xccc0,	// (0x0004c64c) mian_recal_day_pane_t1

0x1734,	// (0x000410c0) list_single_dyc_row_text_pane_t4_ParamLimits

0x1734,	// (0x000410c0) list_single_dyc_row_text_pane_t4

0x176b,	// (0x000410f7) list_single_dyc_row_text_pane_t5_ParamLimits

0x176b,	// (0x000410f7) list_single_dyc_row_text_pane_t5

0xc6d8,	// (0x0004c064) list_single_dyc_row_text_pane_t6_ParamLimits

0xc6d8,	// (0x0004c064) list_single_dyc_row_text_pane_t6

0xe136,	// (0x0004dac2) aid_mgn_list_cale_time_pane

0xefdc,	// (0x0004e968) main_gallery2_pane_ParamLimits

0x713f,	// (0x00046acb) main_clock2_pane_cp01_t1

0x714d,	// (0x00046ad9) main_clock2_pane_cp01_t3

0x0001,

0xf70a,	// (0x0004f096) main_clock2_pane_cp01_t

0x2475,	// (0x00041e01) cale_week_scroll_pane_g16_ParamLimits

0x2475,	// (0x00041e01) cale_week_scroll_pane_g16

0xdd26,	// (0x0004d6b2) vorec_slider_pane

0xab85,	// (0x0004a511) vidtel_button_pane_t1_ParamLimits

0xa315,	// (0x00049ca1) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa315,	// (0x00049ca1) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa326,	// (0x00049cb2) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa326,	// (0x00049cb2) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd9f,	// (0x0004f72b) main_fs_bigclock_clock_pane_g_ParamLimits

0xa339,	// (0x00049cc5) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa34f,	// (0x00049cdb) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfda8,	// (0x0004f734) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
