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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00083d1e };

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
0x10b5,	// (0x00084dd3) Screen

0x10c1,	// (0x00084ddf) application_window

0x1107,	// (0x00084e25) area_bottom_pane_ParamLimits

0x1107,	// (0x00084e25) area_bottom_pane

0x1140,	// (0x00084e5e) area_top_pane_ParamLimits

0x1140,	// (0x00084e5e) area_top_pane

0xb1e8,	// (0x0008ef06) call_video_uplink_pane_ParamLimits

0xb1e8,	// (0x0008ef06) call_video_uplink_pane

0x11ce,	// (0x00084eec) main_pane_ParamLimits

0x11ce,	// (0x00084eec) main_pane

0xd014,	// (0x00090d32) context_pane

0x4fa8,	// (0x00088cc6) navi_pane

0x4fda,	// (0x00088cf8) popup_cale_events_window_ParamLimits

0x4fda,	// (0x00088cf8) popup_cale_events_window

0xd027,	// (0x00090d45) popup_mup_playback_window

0x4ff2,	// (0x00088d10) signal_pane

0x1d96,	// (0x00085ab4) main_browser_pane

0x2673,	// (0x00086391) main_burst_pane

0x4d08,	// (0x00088a26) main_calc_pane

0xcfa6,	// (0x00090cc4) main_cale_day_pane

0x206c,	// (0x00085d8a) main_cale_month_pane

0xcfa6,	// (0x00090cc4) main_cale_week_pane

0x2673,	// (0x00086391) main_call_pane

0x17cf,	// (0x000854ed) main_call_poc_pane

0x2673,	// (0x00086391) main_camera_pane

0x2673,	// (0x00086391) main_chi_dic_pane

0xb8dd,	// (0x0008f5fb) main_clock_pane

0x17cf,	// (0x000854ed) main_fmradio_pane

0x2673,	// (0x00086391) main_graph_messa_pane

0x17cf,	// (0x000854ed) main_help_pane

0x1d96,	// (0x00085ab4) main_im_pane

0x1a2a,	// (0x00085748) main_image_pane_ParamLimits

0x1a2a,	// (0x00085748) main_image_pane

0x17cf,	// (0x000854ed) main_location2_pane

0x2673,	// (0x00086391) main_location_pane

0x1a2a,	// (0x00085748) main_messa_pane

0x17cf,	// (0x000854ed) main_mp2_pane

0x2673,	// (0x00086391) main_mp_pane

0x17cf,	// (0x000854ed) main_msg_pane

0x17cf,	// (0x000854ed) main_mup_eq_pane

0x17cf,	// (0x000854ed) main_mup_pane

0x1d96,	// (0x00085ab4) main_notes_pane

0x17cf,	// (0x000854ed) main_pec_pane

0x17cf,	// (0x000854ed) main_phob_pane

0x17cf,	// (0x000854ed) main_pinb_pane

0x17cf,	// (0x000854ed) main_postcard_pane

0x17cf,	// (0x000854ed) main_qdial_pane

0x2673,	// (0x00086391) main_skin_pane

0x17cf,	// (0x000854ed) main_smil2_pane

0x2673,	// (0x00086391) main_smil_pane

0x2673,	// (0x00086391) main_video_pane

0x2673,	// (0x00086391) main_video_tele_pane

0x1a2a,	// (0x00085748) main_viewer_pane_ParamLimits

0x1a2a,	// (0x00085748) main_viewer_pane

0x2673,	// (0x00086391) main_vorec_pane

0x4d5c,	// (0x00088a7a) popup_blid_sat_info_window_ParamLimits

0x4d5c,	// (0x00088a7a) popup_blid_sat_info_window

0x4db4,	// (0x00088ad2) popup_dyc_status_message_window_ParamLimits

0x4db4,	// (0x00088ad2) popup_dyc_status_message_window

0x4dce,	// (0x00088aec) popup_grid_large_graphic_window_ParamLimits

0x4dce,	// (0x00088aec) popup_grid_large_graphic_window

0x4e8a,	// (0x00088ba8) popup_loc_request_window_ParamLimits

0x4e8a,	// (0x00088ba8) popup_loc_request_window

0x4f80,	// (0x00088c9e) popup_wml_address_window_ParamLimits

0x4f80,	// (0x00088c9e) popup_wml_address_window

0x4b42,	// (0x00088860) call_muted_g1

0x47f7,	// (0x00088515) popup_call_audio_conf_window_ParamLimits

0x47f7,	// (0x00088515) popup_call_audio_conf_window

0x4b56,	// (0x00088874) popup_call_audio_first_window_ParamLimits

0x4b56,	// (0x00088874) popup_call_audio_first_window

0x4bcc,	// (0x000888ea) popup_call_audio_in_window_ParamLimits

0x4bcc,	// (0x000888ea) popup_call_audio_in_window

0x4c08,	// (0x00088926) popup_call_audio_out_window_ParamLimits

0x4c08,	// (0x00088926) popup_call_audio_out_window

0x4c42,	// (0x00088960) popup_call_audio_second_window_ParamLimits

0x4c42,	// (0x00088960) popup_call_audio_second_window

0x4c98,	// (0x000889b6) popup_call_audio_wait_window_ParamLimits

0x4c98,	// (0x000889b6) popup_call_audio_wait_window

0x4ccd,	// (0x000889eb) popup_number_entry_window_ParamLimits

0x4ccd,	// (0x000889eb) popup_number_entry_window

0x1364,	// (0x00085082) bg_popup_call_pane_cp05_ParamLimits

0x1364,	// (0x00085082) bg_popup_call_pane_cp05

0x1384,	// (0x000850a2) popup_number_entry_window_t1

0x1397,	// (0x000850b5) popup_number_entry_window_t2

0x13a9,	// (0x000850c7) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00092de8) popup_number_entry_window_t

0x13ef,	// (0x0008510d) text_title_cp2

0x1402,	// (0x00085120) bg_popup_call_pane_cp_ParamLimits

0x1402,	// (0x00085120) bg_popup_call_pane_cp

0x1410,	// (0x0008512e) call_thumbnail_pane

0x1418,	// (0x00085136) popup_call_audio_in_window_g1_ParamLimits

0x1418,	// (0x00085136) popup_call_audio_in_window_g1

0x1424,	// (0x00085142) popup_call_audio_in_window_g2_ParamLimits

0x1424,	// (0x00085142) popup_call_audio_in_window_g2

0x1430,	// (0x0008514e) popup_call_audio_in_window_g3_ParamLimits

0x1430,	// (0x0008514e) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00092df1) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00092df1) popup_call_audio_in_window_g

0x143c,	// (0x0008515a) popup_call_audio_in_window_t1_ParamLimits

0x143c,	// (0x0008515a) popup_call_audio_in_window_t1

0x1458,	// (0x00085176) popup_call_audio_in_window_t2_ParamLimits

0x1458,	// (0x00085176) popup_call_audio_in_window_t2

0x1474,	// (0x00085192) popup_call_audio_in_window_t3_ParamLimits

0x1474,	// (0x00085192) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00092df8) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00092df8) popup_call_audio_in_window_t

0x1402,	// (0x00085120) bg_popup_call_pane_cp01_ParamLimits

0x1402,	// (0x00085120) bg_popup_call_pane_cp01

0x1410,	// (0x0008512e) call_thumbnail_pane_cp02

0x1487,	// (0x000851a5) call_type_pane_cp022

0x148f,	// (0x000851ad) popup_call_audio_out_window_g1_ParamLimits

0x148f,	// (0x000851ad) popup_call_audio_out_window_g1

0x14a1,	// (0x000851bf) popup_call_audio_out_window_g2_ParamLimits

0x14a1,	// (0x000851bf) popup_call_audio_out_window_g2

0x14ad,	// (0x000851cb) popup_call_audio_out_window_g3_ParamLimits

0x14ad,	// (0x000851cb) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00092dff) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00092dff) popup_call_audio_out_window_g

0x14bf,	// (0x000851dd) popup_call_audio_out_window_t1_ParamLimits

0x14bf,	// (0x000851dd) popup_call_audio_out_window_t1

0x14d7,	// (0x000851f5) popup_call_audio_out_window_t2_ParamLimits

0x14d7,	// (0x000851f5) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00092e06) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00092e06) popup_call_audio_out_window_t

0x14ec,	// (0x0008520a) bg_popup_call_pane_ParamLimits

0x14ec,	// (0x0008520a) bg_popup_call_pane

0x1570,	// (0x0008528e) call_thumbnail_pane_cp_ParamLimits

0x1570,	// (0x0008528e) call_thumbnail_pane_cp

0x1594,	// (0x000852b2) call_type_pane_cp01_ParamLimits

0x1594,	// (0x000852b2) call_type_pane_cp01

0x15d8,	// (0x000852f6) popup_call_audio_first_window_g1_ParamLimits

0x15d8,	// (0x000852f6) popup_call_audio_first_window_g1

0x1624,	// (0x00085342) popup_call_audio_first_window_g2_ParamLimits

0x1624,	// (0x00085342) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00092e0b) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00092e0b) popup_call_audio_first_window_g

0x1668,	// (0x00085386) popup_call_audio_first_window_t1_ParamLimits

0x1668,	// (0x00085386) popup_call_audio_first_window_t1

0x1714,	// (0x00085432) popup_call_audio_first_window_t4_ParamLimits

0x1714,	// (0x00085432) popup_call_audio_first_window_t4

0x17a0,	// (0x000854be) popup_call_audio_first_window_t5_ParamLimits

0x17a0,	// (0x000854be) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00092e10) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00092e10) popup_call_audio_first_window_t

0x17cf,	// (0x000854ed) bg_popup_call_pane_cp02

0x17d9,	// (0x000854f7) call_type_pane_cp023

0x17e1,	// (0x000854ff) popup_call_audio_wait_window_g1

0x17e9,	// (0x00085507) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00092e17) popup_call_audio_wait_window_g

0x17f1,	// (0x0008550f) popup_call_audio_wait_window_t3

0x17ff,	// (0x0008551d) bg_popup_call_pane_cp03_ParamLimits

0x17ff,	// (0x0008551d) bg_popup_call_pane_cp03

0x185f,	// (0x0008557d) call_thumbnail_pane_cp011_ParamLimits

0x185f,	// (0x0008557d) call_thumbnail_pane_cp011

0x186b,	// (0x00085589) call_type_pane_cp034_ParamLimits

0x186b,	// (0x00085589) call_type_pane_cp034

0x18a7,	// (0x000855c5) popup_call_audio_second_window_g1_ParamLimits

0x18a7,	// (0x000855c5) popup_call_audio_second_window_g1

0x18e3,	// (0x00085601) popup_call_audio_second_window_g2_ParamLimits

0x18e3,	// (0x00085601) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00092e1c) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00092e1c) popup_call_audio_second_window_g

0x191f,	// (0x0008563d) popup_call_audio_second_window_t1_ParamLimits

0x191f,	// (0x0008563d) popup_call_audio_second_window_t1

0x19a0,	// (0x000856be) popup_call_audio_second_window_t2_ParamLimits

0x19a0,	// (0x000856be) popup_call_audio_second_window_t2

0x19d6,	// (0x000856f4) popup_call_audio_second_window_t3_ParamLimits

0x19d6,	// (0x000856f4) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00092e21) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00092e21) popup_call_audio_second_window_t

0x17cf,	// (0x000854ed) bg_popup_call_pane_cp04

0x1a0c,	// (0x0008572a) list_conf_pane

0x1a14,	// (0x00085732) popup_call_audio_conf_window_t1

0x1a22,	// (0x00085740) call_thumbnail_pane_g1

0x1a2a,	// (0x00085748) bg_pinb_pane_ParamLimits

0x1a2a,	// (0x00085748) bg_pinb_pane

0x1a38,	// (0x00085756) find_pinb_pane

0x1a41,	// (0x0008575f) listscroll_pinb_pane_ParamLimits

0x1a41,	// (0x0008575f) listscroll_pinb_pane

0x1a50,	// (0x0008576e) pinb_bg_pane_g1

0x1a5a,	// (0x00085778) pinb_bg_pane_g2

0x1a66,	// (0x00085784) pinb_bg_pane_g3

0x1a72,	// (0x00085790) pinb_bg_pane_g4

0x1a7e,	// (0x0008579c) pinb_bg_pane_g5

0x1a8a,	// (0x000857a8) pinb_bg_pane_g6

0x1a95,	// (0x000857b3) pinb_bg_pane_g7

0x1aa0,	// (0x000857be) pinb_bg_pane_g8

0x1aab,	// (0x000857c9) pinb_bg_pane_g9

0x1ab5,	// (0x000857d3) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00092e28) pinb_bg_pane_g

0x1ad2,	// (0x000857f0) grid_pinb_pane

0x1adb,	// (0x000857f9) list_pinb_pane

0x1ae4,	// (0x00085802) scroll_pane_cp01_ParamLimits

0x1ae4,	// (0x00085802) scroll_pane_cp01

0x1af6,	// (0x00085814) find_pinb_pane_g1_ParamLimits

0x1af6,	// (0x00085814) find_pinb_pane_g1

0x1b0e,	// (0x0008582c) find_pinb_pane_t1

0x1b20,	// (0x0008583e) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00092e42) find_pinb_pane_t

0x1b35,	// (0x00085853) input_focus_pane_cp01_ParamLimits

0x1b35,	// (0x00085853) input_focus_pane_cp01

0x1b41,	// (0x0008585f) cell_pinb_pane_ParamLimits

0x1b41,	// (0x0008585f) cell_pinb_pane

0x1b6a,	// (0x00085888) cell_pinb_pane_g1_ParamLimits

0x1b6a,	// (0x00085888) cell_pinb_pane_g1

0x1b7a,	// (0x00085898) cell_pinb_pane_g2_ParamLimits

0x1b7a,	// (0x00085898) cell_pinb_pane_g2

0x1b86,	// (0x000858a4) cell_pinb_pane_g3_ParamLimits

0x1b86,	// (0x000858a4) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00092e47) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00092e47) cell_pinb_pane_g

0x17cf,	// (0x000854ed) grid_highlight_pane_cp01

0x1b92,	// (0x000858b0) list_pinb_item_pane_ParamLimits

0x1b92,	// (0x000858b0) list_pinb_item_pane

0x17cf,	// (0x000854ed) list_highlight_pane_cp02

0x1ba4,	// (0x000858c2) list_pinb_item_pane_g1_ParamLimits

0x1ba4,	// (0x000858c2) list_pinb_item_pane_g1

0x1bb1,	// (0x000858cf) list_pinb_item_pane_g2_ParamLimits

0x1bb1,	// (0x000858cf) list_pinb_item_pane_g2

0x1bbd,	// (0x000858db) list_pinb_item_pane_g3_ParamLimits

0x1bbd,	// (0x000858db) list_pinb_item_pane_g3

0x1bce,	// (0x000858ec) list_pinb_item_pane_g4_ParamLimits

0x1bce,	// (0x000858ec) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00092e4e) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00092e4e) list_pinb_item_pane_g

0x1bda,	// (0x000858f8) list_pinb_item_pane_t1_ParamLimits

0x1bda,	// (0x000858f8) list_pinb_item_pane_t1

0x1c0f,	// (0x0008592d) calc_display_pane

0x1c37,	// (0x00085955) calc_paper_pane

0x1c5a,	// (0x00085978) grid_calc_pane

0x17cf,	// (0x000854ed) bg_list_pane_cp01

0x1c88,	// (0x000859a6) clock_g1

0x1c90,	// (0x000859ae) clock_g2

0x0001,

0xf139,	// (0x00092e57) clock_g

0x1c98,	// (0x000859b6) clock_t1_ParamLimits

0x1c98,	// (0x000859b6) clock_t1

0x1cad,	// (0x000859cb) clock_t2_ParamLimits

0x1cad,	// (0x000859cb) clock_t2

0x1cbf,	// (0x000859dd) clock_t3_ParamLimits

0x1cbf,	// (0x000859dd) clock_t3

0x1cd1,	// (0x000859ef) clock_t4_ParamLimits

0x1cd1,	// (0x000859ef) clock_t4

0x1ce3,	// (0x00085a01) clock_t5_ParamLimits

0x1ce3,	// (0x00085a01) clock_t5

0x1cf8,	// (0x00085a16) clock_t6_ParamLimits

0x1cf8,	// (0x00085a16) clock_t6

0x1d0a,	// (0x00085a28) clock_t7_ParamLimits

0x1d0a,	// (0x00085a28) clock_t7

0x1d1c,	// (0x00085a3a) clock_t8_ParamLimits

0x1d1c,	// (0x00085a3a) clock_t8

0x1d30,	// (0x00085a4e) clock_t9_ParamLimits

0x1d30,	// (0x00085a4e) clock_t9

0x0008,

0xf13e,	// (0x00092e5c) clock_t_ParamLimits

0xf13e,	// (0x00092e5c) clock_t

0x1d44,	// (0x00085a62) popup_clock_analogue_window_cp02

0x1d44,	// (0x00085a62) popup_clock_digital_window_cp01

0x1d4c,	// (0x00085a6a) listscroll_help_pane

0x17cf,	// (0x000854ed) phob_pre_status_pane

0x1d56,	// (0x00085a74) grid_qdial_pane

0x1a2a,	// (0x00085748) listscroll_mce_pane

0x1a2a,	// (0x00085748) bg_notes_pane

0x1d60,	// (0x00085a7e) list_notes_pane

0x1d6e,	// (0x00085a8c) scroll_pane_cp06

0x1d82,	// (0x00085aa0) bg_calc_paper_pane

0xb20e,	// (0x0008ef2c) list_calc_pane

0x1d96,	// (0x00085ab4) bg_calc_display_pane

0x1da2,	// (0x00085ac0) calc_display_pane_t1

0x1db4,	// (0x00085ad2) calc_display_pane_t2

0xb228,	// (0x0008ef46) calc_display_pane_t3

0x0002,

0xf151,	// (0x00092e6f) calc_display_pane_t

0x1dc6,	// (0x00085ae4) cell_calc_pane_ParamLimits

0x1dc6,	// (0x00085ae4) cell_calc_pane

0x1dfb,	// (0x00085b19) bg_calc_paper_pane_g1

0x1e07,	// (0x00085b25) bg_calc_paper_pane_g2

0x1e13,	// (0x00085b31) bg_calc_paper_pane_g3

0x1e1f,	// (0x00085b3d) bg_calc_paper_pane_g4

0x1e2b,	// (0x00085b49) bg_calc_paper_pane_g5

0x1e37,	// (0x00085b55) bg_calc_paper_pane_g6

0x1e46,	// (0x00085b64) bg_calc_paper_pane_g7

0x1e55,	// (0x00085b73) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00092e76) bg_calc_paper_pane_g

0x1e68,	// (0x00085b86) calc_bg_paper_pane_g9

0x1e7b,	// (0x00085b99) list_calc_item_pane_ParamLimits

0x1e7b,	// (0x00085b99) list_calc_item_pane

0x1e90,	// (0x00085bae) list_calc_item_pane_g1

0xb23a,	// (0x0008ef58) list_calc_item_pane_t1_ParamLimits

0xb23a,	// (0x0008ef58) list_calc_item_pane_t1

0x1e9d,	// (0x00085bbb) list_calc_item_pane_t2_ParamLimits

0x1e9d,	// (0x00085bbb) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00092e87) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00092e87) list_calc_item_pane_t

0x1eb7,	// (0x00085bd5) cell_calc_pane_g1

0x1ed9,	// (0x00085bf7) grid_highlight_pane_cp02

0x1efb,	// (0x00085c19) bg_calc_display_pane_g1

0x1f04,	// (0x00085c22) bg_calc_display_pane_g2

0x1f0e,	// (0x00085c2c) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00092e91) bg_calc_display_pane_g

0x1f17,	// (0x00085c35) cell_qdial_pane_ParamLimits

0x1f17,	// (0x00085c35) cell_qdial_pane

0x1f2b,	// (0x00085c49) cell_qdial_pane_g1_ParamLimits

0x1f2b,	// (0x00085c49) cell_qdial_pane_g1

0x1f41,	// (0x00085c5f) cell_qdial_pane_g2_ParamLimits

0x1f41,	// (0x00085c5f) cell_qdial_pane_g2

0x1f52,	// (0x00085c70) cell_qdial_pane_g3_ParamLimits

0x1f52,	// (0x00085c70) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00092e98) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00092e98) cell_qdial_pane_g

0x1f74,	// (0x00085c92) cell_qdial_pane_t1_ParamLimits

0x1f74,	// (0x00085c92) cell_qdial_pane_t1

0x1f8c,	// (0x00085caa) cell_qdial_pane_t2_ParamLimits

0x1f8c,	// (0x00085caa) cell_qdial_pane_t2

0x1f9f,	// (0x00085cbd) cell_qdial_pane_t3_ParamLimits

0x1f9f,	// (0x00085cbd) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00092ea1) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00092ea1) cell_qdial_pane_t

0x17cf,	// (0x000854ed) grid_highlight_pane_cp04

0x1fb2,	// (0x00085cd0) thumbnail_qdial_pane_ParamLimits

0x1fb2,	// (0x00085cd0) thumbnail_qdial_pane

0x200e,	// (0x00085d2c) list_help_pane

0x2017,	// (0x00085d35) scroll_pane_cp02

0x2020,	// (0x00085d3e) help_list_pane_t1_ParamLimits

0x2020,	// (0x00085d3e) help_list_pane_t1

0xb24c,	// (0x0008ef6a) bg_notes_pane_g2

0xb254,	// (0x0008ef72) bg_notes_pane_g3

0xb25c,	// (0x0008ef7a) notes_bg_pane_g1

0xb264,	// (0x0008ef82) notes_bg_pane_g4

0xb26c,	// (0x0008ef8a) notes_bg_pane_g5

0xb274,	// (0x0008ef92) notes_bg_pane_g6

0xb27c,	// (0x0008ef9a) notes_bg_pane_g7

0xb284,	// (0x0008efa2) notes_bg_pane_g8

0xb28c,	// (0x0008efaa) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00092ebf) notes_bg_pane_g

0x203d,	// (0x00085d5b) list_notes_text_pane_ParamLimits

0x203d,	// (0x00085d5b) list_notes_text_pane

0x2052,	// (0x00085d70) list_notes_text_pane_g1

0x021d,	// (0x00083f3b) list_notes_text_pane_t1

0x206c,	// (0x00085d8a) listscroll_cale_week_pane

0x20a1,	// (0x00085dbf) bg_cale_heading_pane

0x20b9,	// (0x00085dd7) bg_cale_pane_cp01

0x20d6,	// (0x00085df4) cale_week_corner_pane

0x20f5,	// (0x00085e13) cale_week_day_heading_pane

0x2112,	// (0x00085e30) cale_week_scroll_pane_g1

0x2125,	// (0x00085e43) cale_week_scroll_pane_g2

0x213d,	// (0x00085e5b) cale_week_scroll_pane_g3

0x2155,	// (0x00085e73) cale_week_scroll_pane_g4

0x216d,	// (0x00085e8b) cale_week_scroll_pane_g5

0x218d,	// (0x00085eab) cale_week_scroll_pane_g6

0x21ad,	// (0x00085ecb) cale_week_scroll_pane_g7

0x21cd,	// (0x00085eeb) cale_week_scroll_pane_g8

0x21f1,	// (0x00085f0f) cale_week_scroll_pane_g9

0x2209,	// (0x00085f27) cale_week_scroll_pane_g10

0x2221,	// (0x00085f3f) cale_week_scroll_pane_g11

0x2239,	// (0x00085f57) cale_week_scroll_pane_g12

0x2251,	// (0x00085f6f) cale_week_scroll_pane_g13

0x2251,	// (0x00085f6f) cale_week_scroll_pane_g14

0x2251,	// (0x00085f6f) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00092ece) cale_week_scroll_pane_g

0x228d,	// (0x00085fab) cale_week_time_pane

0x22b1,	// (0x00085fcf) grid_cale_week_pane

0x22e9,	// (0x00086007) scroll_pane_cp08

0x2306,	// (0x00086024) cell_cale_week_pane_ParamLimits

0x2306,	// (0x00086024) cell_cale_week_pane

0x2394,	// (0x000860b2) cale_week_day_heading_pane_t1

0x23be,	// (0x000860dc) cale_week_day_heading_pane_t2

0x23ed,	// (0x0008610b) cale_week_day_heading_pane_t3

0x241c,	// (0x0008613a) cale_week_day_heading_pane_t4

0x244b,	// (0x00086169) cale_week_day_heading_pane_t5

0x2482,	// (0x000861a0) cale_week_day_heading_pane_t6

0x24b9,	// (0x000861d7) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00092eef) cale_week_day_heading_pane_t

0x24e3,	// (0x00086201) bg_cale_side_pane

0x24f1,	// (0x0008620f) cale_week_time_pane_t1

0x250b,	// (0x00086229) cale_week_time_pane_t2

0x2525,	// (0x00086243) cale_week_time_pane_t3

0x253f,	// (0x0008625d) cale_week_time_pane_t4

0x2559,	// (0x00086277) cale_week_time_pane_t5

0x2573,	// (0x00086291) cale_week_time_pane_t6

0x258d,	// (0x000862ab) cale_week_time_pane_t7

0x25a7,	// (0x000862c5) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00092efe) cale_week_time_pane_t

0x25c1,	// (0x000862df) cell_cale_week_pane_g2

0x25e0,	// (0x000862fe) cell_cale_week_pane_g3_ParamLimits

0x25e0,	// (0x000862fe) cell_cale_week_pane_g3

0x25f8,	// (0x00086316) grid_highlight_pane_cp07

0x2600,	// (0x0008631e) listscroll_gms_pane

0x260a,	// (0x00086328) grid_gms_pane

0x2613,	// (0x00086331) listscroll_gms_pane_g1

0x261b,	// (0x00086339) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00092f0f) listscroll_gms_pane_g

0x2623,	// (0x00086341) scroll_pane_cp010

0x262e,	// (0x0008634c) cell_gms_pane_ParamLimits

0x262e,	// (0x0008634c) cell_gms_pane

0x2641,	// (0x0008635f) cell_gms_pane_g1

0x2649,	// (0x00086367) cell_gms_pane_g2

0x2651,	// (0x0008636f) cell_gms_pane_g3

0x265a,	// (0x00086378) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x00092f14) cell_gms_pane_g

0x2663,	// (0x00086381) grid_highlight_pane_cp09

0x4aec,	// (0x0008880a) phob_pre_status_pane_g1

0x4af4,	// (0x00088812) phob_pre_status_pane_g2

0x4afc,	// (0x0008881a) phob_pre_status_pane_g3

0x4b04,	// (0x00088822) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000932ff) phob_pre_status_pane_g

0x4b14,	// (0x00088832) phob_pre_status_pane_t1

0x4b22,	// (0x00088840) phob_pre_status_pane_t2

0x4b32,	// (0x00088850) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0009330a) phob_pre_status_pane_t

0x2673,	// (0x00086391) bg_list_pane_cp05

0x267b,	// (0x00086399) grid_vorec_pane

0x2683,	// (0x000863a1) vorec_t1

0x2691,	// (0x000863af) vorec_t2

0x269f,	// (0x000863bd) vorec_t3

0x26ad,	// (0x000863cb) vorec_t4

0xb156,	// (0x0008ee74) vorec_t5

0xb164,	// (0x0008ee82) vorec_t6

0x0004,

0xf1ff,	// (0x00092f1d) vorec_t

0xb172,	// (0x0008ee90) wait_bar_pane_cp01

0x26c9,	// (0x000863e7) cell_vorec_pane_ParamLimits

0x26c9,	// (0x000863e7) cell_vorec_pane

0xb294,	// (0x0008efb2) cell_vorec_pane_g1

0x17cf,	// (0x000854ed) grid_highlight_pane_cp05

0x26f1,	// (0x0008640f) cams_zoom_pane

0x2700,	// (0x0008641e) image_vga_pane

0x271a,	// (0x00086438) main_camera_pane_g1

0x272c,	// (0x0008644a) main_camera_pane_g2

0x273c,	// (0x0008645a) main_camera_pane_g3

0x274c,	// (0x0008646a) main_camera_pane_g4

0x275c,	// (0x0008647a) main_camera_pane_g5

0x276c,	// (0x0008648a) main_camera_pane_g6

0x277e,	// (0x0008649c) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00092f28) main_camera_pane_g

0x279a,	// (0x000864b8) main_camera_pane_t1

0x27b0,	// (0x000864ce) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00092f39) main_camera_pane_t

0x27ea,	// (0x00086508) cams_zoom_pane_cp_ParamLimits

0x27ea,	// (0x00086508) cams_zoom_pane_cp

0x2812,	// (0x00086530) image_cif_pane_ParamLimits

0x2812,	// (0x00086530) image_cif_pane

0x2848,	// (0x00086566) image_subqcif_pane

0x2850,	// (0x0008656e) main_video_pane_g1_ParamLimits

0x2850,	// (0x0008656e) main_video_pane_g1

0x2874,	// (0x00086592) main_video_pane_g2_ParamLimits

0x2874,	// (0x00086592) main_video_pane_g2

0x28a8,	// (0x000865c6) main_video_pane_g3_ParamLimits

0x28a8,	// (0x000865c6) main_video_pane_g3

0x28d6,	// (0x000865f4) main_video_pane_g4_ParamLimits

0x28d6,	// (0x000865f4) main_video_pane_g4

0x2904,	// (0x00086622) main_video_pane_g5_ParamLimits

0x2904,	// (0x00086622) main_video_pane_g5

0x291c,	// (0x0008663a) main_video_pane_g6_ParamLimits

0x291c,	// (0x0008663a) main_video_pane_g6

0x0006,

0xf220,	// (0x00092f3e) main_video_pane_g_ParamLimits

0xf220,	// (0x00092f3e) main_video_pane_g

0x2947,	// (0x00086665) main_video_pane_t1_ParamLimits

0x2947,	// (0x00086665) main_video_pane_t1

0x2990,	// (0x000866ae) cams_zoom_pane_g1

0x2999,	// (0x000866b7) cams_zoom_pane_g2

0x29a2,	// (0x000866c0) cams_zoom_pane_g3

0x29ab,	// (0x000866c9) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00092f4d) cams_zoom_pane_g

0x29c8,	// (0x000866e6) grid_cams_pane

0x29e2,	// (0x00086700) linegrid_cams_pane

0x29f6,	// (0x00086714) cell_cams_pane_ParamLimits

0x29f6,	// (0x00086714) cell_cams_pane

0x2a16,	// (0x00086734) cams_burst_image_pane

0x2a1e,	// (0x0008673c) cell_cams_pane_g1

0x17cf,	// (0x000854ed) grid_highlight_pane_cp03

0x1eb7,	// (0x00085bd5) mp_bg_pane_g1

0x17cf,	// (0x000854ed) bg_list_pane_cp03

0xcecb,	// (0x00090be9) bg_mp_pane

0xced3,	// (0x00090bf1) grid_mp_pane

0xcedb,	// (0x00090bf9) media_player_g1

0xcee3,	// (0x00090c01) media_player_t1

0xcef1,	// (0x00090c0f) media_player_t2

0xceff,	// (0x00090c1d) media_player_t3

0xcf0d,	// (0x00090c2b) media_player_t4

0xcf1b,	// (0x00090c39) media_player_t5

0xcf29,	// (0x00090c47) media_player_t6

0xcf37,	// (0x00090c55) media_player_t7

0x0006,

0xf5cb,	// (0x000932e9) media_player_t

0xcf45,	// (0x00090c63) wait_bar_pane_cp02

0xf5b0,	// (0x000932ce) main_usb_pane_t

0x4ae3,	// (0x00088801) cell_mp_pane

0x1eb7,	// (0x00085bd5) cell_mp_pane_g1

0x17cf,	// (0x000854ed) grid_highlight_pane_cp06

0x2a3e,	// (0x0008675c) grid_skin_colour_pane

0x2a46,	// (0x00086764) list_highlight_pane_cp03

0x2a4e,	// (0x0008676c) skin_g1

0x2a56,	// (0x00086774) skin_t1

0x2a65,	// (0x00086783) skin_t2

0x0001,

0xf264,	// (0x00092f82) skin_t

0x2a73,	// (0x00086791) cell_skin_colour_pane_ParamLimits

0x2a73,	// (0x00086791) cell_skin_colour_pane

0x2a93,	// (0x000867b1) cell_skin_colour_pane_g1

0x2afe,	// (0x0008681c) call_video_g1_ParamLimits

0x2afe,	// (0x0008681c) call_video_g1

0x2b1a,	// (0x00086838) call_video_g2_ParamLimits

0x2b1a,	// (0x00086838) call_video_g2

0x0001,

0xf269,	// (0x00092f87) call_video_g_ParamLimits

0xf269,	// (0x00092f87) call_video_g

0x2b6c,	// (0x0008688a) call_video_uplink_pane_cp1_ParamLimits

0x2b6c,	// (0x0008688a) call_video_uplink_pane_cp1

0x2bd1,	// (0x000868ef) call_video_uplink_pane_cp2

0x2c13,	// (0x00086931) video_down_crop_pane_ParamLimits

0x2c13,	// (0x00086931) video_down_crop_pane

0x2d0a,	// (0x00086a28) video_down_pane_ParamLimits

0x2d0a,	// (0x00086a28) video_down_pane

0x2e01,	// (0x00086b1f) video_down_subqcif_pane_ParamLimits

0x2e01,	// (0x00086b1f) video_down_subqcif_pane

0x2e19,	// (0x00086b37) video_down_subqcif_pane_cp_ParamLimits

0x2e19,	// (0x00086b37) video_down_subqcif_pane_cp

0x2e58,	// (0x00086b76) im_reading_pane_ParamLimits

0x2e58,	// (0x00086b76) im_reading_pane

0x2e6a,	// (0x00086b88) im_writing_pane_ParamLimits

0x2e6a,	// (0x00086b88) im_writing_pane

0x2e88,	// (0x00086ba6) im_reading_pane_t1

0x2ec1,	// (0x00086bdf) list_im_pane

0x2ed2,	// (0x00086bf0) scroll_pane_cp07

0x2eeb,	// (0x00086c09) im_writing_pane_t1_ParamLimits

0x2eeb,	// (0x00086c09) im_writing_pane_t1

0x2f00,	// (0x00086c1e) im_writing_pane_t2_ParamLimits

0x2f00,	// (0x00086c1e) im_writing_pane_t2

0x0001,

0xf273,	// (0x00092f91) im_writing_pane_t_ParamLimits

0xf273,	// (0x00092f91) im_writing_pane_t

0x17cf,	// (0x000854ed) input_focus_pane_cp04

0x17cf,	// (0x000854ed) input_focus_pane_cp05

0x2f1d,	// (0x00086c3b) list_im_single_pane_ParamLimits

0x2f1d,	// (0x00086c3b) list_im_single_pane

0x2f31,	// (0x00086c4f) list_single_im_pane_t1

0x4aa3,	// (0x000887c1) blid_accuracy_pane

0x4aab,	// (0x000887c9) blid_compass_pane

0x4ab5,	// (0x000887d3) main_location_t1

0x4ac5,	// (0x000887e3) main_location_t2

0x4ad5,	// (0x000887f3) main_location_t3

0x0002,

0xf5da,	// (0x000932f8) main_location_t

0x17cf,	// (0x000854ed) aid_levels_location

0x1eb7,	// (0x00085bd5) blid_accuracy_pane_g1

0x1eb7,	// (0x00085bd5) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00092ff3) blid_accuracy_pane_g

0x2f6b,	// (0x00086c89) wml_content_pane

0x2fa9,	// (0x00086cc7) wml_button_pane_ParamLimits

0x2fa9,	// (0x00086cc7) wml_button_pane

0x2fbd,	// (0x00086cdb) wml_list_single_large_pane_ParamLimits

0x2fbd,	// (0x00086cdb) wml_list_single_large_pane

0x2fd2,	// (0x00086cf0) wml_list_single_medium_pane_ParamLimits

0x2fd2,	// (0x00086cf0) wml_list_single_medium_pane

0x2fe8,	// (0x00086d06) wml_list_single_small_pane_ParamLimits

0x2fe8,	// (0x00086d06) wml_list_single_small_pane

0x3000,	// (0x00086d1e) wml_selection_box_pane_ParamLimits

0x3000,	// (0x00086d1e) wml_selection_box_pane

0x3013,	// (0x00086d31) wml_list_single_pane_t1

0x3022,	// (0x00086d40) wml_list_single_medium_pane_t1

0x3031,	// (0x00086d4f) wml_list_single_large_pane_t1

0x3040,	// (0x00086d5e) input_focus_pane_cp02_ParamLimits

0x3040,	// (0x00086d5e) input_focus_pane_cp02

0x3053,	// (0x00086d71) wml_selection_box_pane_g1

0x305c,	// (0x00086d7a) wml_selection_box_pane_t1_ParamLimits

0x305c,	// (0x00086d7a) wml_selection_box_pane_t1

0x1a2a,	// (0x00085748) bg_wml_button_pane_ParamLimits

0x1a2a,	// (0x00085748) bg_wml_button_pane

0x3074,	// (0x00086d92) wml_button_pane_g1

0x307c,	// (0x00086d9a) wml_button_pane_t1

0x3074,	// (0x00086d92) wml_button_bg_pane_g1

0xb29e,	// (0x0008efbc) wml_button_bg_pane_g2

0xb2a6,	// (0x0008efc4) wml_button_bg_pane_g3

0xb2ae,	// (0x0008efcc) wml_button_bg_pane_g4

0xb2b6,	// (0x0008efd4) wml_button_bg_pane_g5

0xb2be,	// (0x0008efdc) wml_button_bg_pane_g6

0xb2c6,	// (0x0008efe4) wml_button_bg_pane_g7

0xb2ce,	// (0x0008efec) wml_button_bg_pane_g8

0xb2d6,	// (0x0008eff4) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00092f96) wml_button_bg_pane_g

0x308c,	// (0x00086daa) bg_list_pane_cp02

0xb2de,	// (0x0008effc) mce_header_pane_ParamLimits

0xb2de,	// (0x0008effc) mce_header_pane

0xb2f4,	// (0x0008f012) mce_icon_pane

0xb2f4,	// (0x0008f012) mce_image_pane

0xb2fd,	// (0x0008f01b) mce_text_pane_ParamLimits

0xb2fd,	// (0x0008f01b) mce_text_pane

0x3094,	// (0x00086db2) scroll_pane_cp03

0x2fa1,	// (0x00086cbf) scroll_pane_cp04

0xb310,	// (0x0008f02e) scroll_pane_cp05_ParamLimits

0xb310,	// (0x0008f02e) scroll_pane_cp05

0x309e,	// (0x00086dbc) mce_header_field_pane_ParamLimits

0x309e,	// (0x00086dbc) mce_header_field_pane

0x30b5,	// (0x00086dd3) mce_header_field_pane_2_ParamLimits

0x30b5,	// (0x00086dd3) mce_header_field_pane_2

0x30cb,	// (0x00086de9) mce_header_field_pane_3

0x30d3,	// (0x00086df1) list_single_mce_message_pane_ParamLimits

0x30d3,	// (0x00086df1) list_single_mce_message_pane

0x30e8,	// (0x00086e06) list_single_mce_smart_pane_ParamLimits

0x30e8,	// (0x00086e06) list_single_mce_smart_pane

0xb31c,	// (0x0008f03a) input_focus_pane_cp03

0xb325,	// (0x0008f043) list_header_data_pane

0x3108,	// (0x00086e26) mce_header_field_pane_t1

0x3118,	// (0x00086e36) list_single_mce_header_pane_ParamLimits

0x3118,	// (0x00086e36) list_single_mce_header_pane

0xb32d,	// (0x0008f04b) list_single_mce_header_pane_t1

0xb33c,	// (0x0008f05a) list_single_mce_message_pane_g1

0xb344,	// (0x0008f062) list_single_mce_message_pane_t1

0x3152,	// (0x00086e70) bg_cale_heading_pane_cp01_ParamLimits

0x3152,	// (0x00086e70) bg_cale_heading_pane_cp01

0xb352,	// (0x0008f070) bg_cale_pane_cp02_ParamLimits

0xb352,	// (0x0008f070) bg_cale_pane_cp02

0x318c,	// (0x00086eaa) cale_month_corner_pane

0x31ab,	// (0x00086ec9) cale_month_day_heading_pane_ParamLimits

0x31ab,	// (0x00086ec9) cale_month_day_heading_pane

0x31fd,	// (0x00086f1b) cale_month_pane_g1_ParamLimits

0x31fd,	// (0x00086f1b) cale_month_pane_g1

0x322c,	// (0x00086f4a) cale_month_pane_g2_ParamLimits

0x322c,	// (0x00086f4a) cale_month_pane_g2

0x325c,	// (0x00086f7a) cale_month_pane_g3_ParamLimits

0x325c,	// (0x00086f7a) cale_month_pane_g3

0x3298,	// (0x00086fb6) cale_month_pane_g4_ParamLimits

0x3298,	// (0x00086fb6) cale_month_pane_g4

0x32d4,	// (0x00086ff2) cale_month_pane_g5_ParamLimits

0x32d4,	// (0x00086ff2) cale_month_pane_g5

0x331c,	// (0x0008703a) cale_month_pane_g6_ParamLimits

0x331c,	// (0x0008703a) cale_month_pane_g6

0x3368,	// (0x00087086) cale_month_pane_g7_ParamLimits

0x3368,	// (0x00087086) cale_month_pane_g7

0x33bc,	// (0x000870da) cale_month_pane_g8_ParamLimits

0x33bc,	// (0x000870da) cale_month_pane_g8

0x3410,	// (0x0008712e) cale_month_pane_g9_ParamLimits

0x3410,	// (0x0008712e) cale_month_pane_g9

0x3462,	// (0x00087180) cale_month_pane_g10_ParamLimits

0x3462,	// (0x00087180) cale_month_pane_g10

0x34b4,	// (0x000871d2) cale_month_pane_g11_ParamLimits

0x34b4,	// (0x000871d2) cale_month_pane_g11

0x3506,	// (0x00087224) cale_month_pane_g12_ParamLimits

0x3506,	// (0x00087224) cale_month_pane_g12

0x3558,	// (0x00087276) cale_month_pane_g13_ParamLimits

0x3558,	// (0x00087276) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00092fa9) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00092fa9) cale_month_pane_g

0x35aa,	// (0x000872c8) cale_month_week_pane

0x35ce,	// (0x000872ec) grid_cale_month_pane_ParamLimits

0x35ce,	// (0x000872ec) grid_cale_month_pane

0x3617,	// (0x00087335) cale_month_day_heading_pane_t1

0x369d,	// (0x000873bb) cale_month_day_heading_pane_t2

0x3716,	// (0x00087434) cale_month_day_heading_pane_t3

0x378f,	// (0x000874ad) cale_month_day_heading_pane_t4

0x3810,	// (0x0008752e) cale_month_day_heading_pane_t5

0x3899,	// (0x000875b7) cale_month_day_heading_pane_t6

0x3922,	// (0x00087640) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x00092fc4) cale_month_day_heading_pane_t

0x24e3,	// (0x00086201) bg_cale_side_pane_cp01

0x39b3,	// (0x000876d1) cale_month_week_pane_t1

0x39cc,	// (0x000876ea) cale_month_week_pane_t2

0x39e5,	// (0x00087703) cale_month_week_pane_t3

0x39fe,	// (0x0008771c) cale_month_week_pane_t4

0x3a17,	// (0x00087735) cale_month_week_pane_t5

0x3a30,	// (0x0008774e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00092fd3) cale_month_week_pane_t

0x3a49,	// (0x00087767) cell_cale_month_pane_ParamLimits

0x3a49,	// (0x00087767) cell_cale_month_pane

0xb391,	// (0x0008f0af) cell_cale_month_pane_g1

0x3b77,	// (0x00087895) cell_cale_month_pane_t1_ParamLimits

0x3b77,	// (0x00087895) cell_cale_month_pane_t1

0x25f8,	// (0x00086316) grid_highlight_pane_cp08

0x1eb7,	// (0x00085bd5) main_smil_g1

0x3ba3,	// (0x000878c1) smil_status_pane

0xb39d,	// (0x0008f0bb) smil_text_pane

0xcdeb,	// (0x00090b09) bg_popup_call3_rect_pane_g8

0xcdf3,	// (0x00090b11) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0009328c) bg_popup_call3_rect_pane_g

0xd08e,	// (0x00090dac) smil_status_volume_pane_g1

0xb3a7,	// (0x0008f0c5) smil_status_pane_t1

0xd0c1,	// (0x00090ddf) volume_smil_pane

0xb3be,	// (0x0008f0dc) list_smil_text_pane

0x3bb6,	// (0x000878d4) scroll_pane_cp011

0x3bc1,	// (0x000878df) smil_text_list_pane_t1_ParamLimits

0x3bc1,	// (0x000878df) smil_text_list_pane_t1

0xb3c8,	// (0x0008f0e6) aid_volume_smil_ParamLimits

0xb3c8,	// (0x0008f0e6) aid_volume_smil

0x1eb7,	// (0x00085bd5) smil_volume_pane_g1

0x1eb7,	// (0x00085bd5) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00092ff3) smil_volume_pane_g

0x206c,	// (0x00085d8a) listscroll_cale_day_pane

0xb3ea,	// (0x0008f108) bg_cale_pane

0xb402,	// (0x0008f120) list_cale_pane

0xb425,	// (0x0008f143) scroll_pane_cp09

0xb436,	// (0x0008f154) cale_bg_pane_g1

0xb43e,	// (0x0008f15c) cale_bg_pane_g2

0xb446,	// (0x0008f164) cale_bg_pane_g3

0xb44e,	// (0x0008f16c) cale_bg_pane_g4

0xb456,	// (0x0008f174) cale_bg_pane_g5

0xb45e,	// (0x0008f17c) cale_bg_pane_g6

0xb466,	// (0x0008f184) cale_bg_pane_g7

0xb46e,	// (0x0008f18c) cale_bg_pane_g8

0xb476,	// (0x0008f194) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00092ff8) cale_bg_pane_g

0x3c05,	// (0x00087923) list_cale_time_pane_ParamLimits

0x3c05,	// (0x00087923) list_cale_time_pane

0xb47e,	// (0x0008f19c) list_cale_time_pane_g1_ParamLimits

0xb47e,	// (0x0008f19c) list_cale_time_pane_g1

0xb48a,	// (0x0008f1a8) list_cale_time_pane_g2_ParamLimits

0xb48a,	// (0x0008f1a8) list_cale_time_pane_g2

0x3c1a,	// (0x00087938) list_cale_time_pane_g3_ParamLimits

0x3c1a,	// (0x00087938) list_cale_time_pane_g3

0x3c28,	// (0x00087946) list_cale_time_pane_g4_ParamLimits

0x3c28,	// (0x00087946) list_cale_time_pane_g4

0x3c36,	// (0x00087954) list_cale_time_pane_g5_ParamLimits

0x3c36,	// (0x00087954) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0009300b) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0009300b) list_cale_time_pane_g

0xb4a4,	// (0x0008f1c2) list_cale_time_pane_t1_ParamLimits

0xb4a4,	// (0x0008f1c2) list_cale_time_pane_t1

0xb4cc,	// (0x0008f1ea) list_cale_time_pane_t2_ParamLimits

0xb4cc,	// (0x0008f1ea) list_cale_time_pane_t2

0x3ebc,	// (0x00087bda) aid_blid_cardinal_pane

0x3efa,	// (0x00087c18) compass_pane_t4

0xb4f4,	// (0x0008f212) list_cale_time_pane_t4_ParamLimits

0xb4f4,	// (0x0008f212) list_cale_time_pane_t4

0x3f08,	// (0x00087c26) compass_pane_t5

0x3f16,	// (0x00087c34) compass_pane_t6

0x3f24,	// (0x00087c42) compass_pane_t7

0xba22,	// (0x0008f740) navi_pane_cc_t1

0xbc11,	// (0x0008f92f) aid_phob_thumbnail_center_pane

0x44bb,	// (0x000881d9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00093018) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00093018) list_cale_time_pane_t

0x1402,	// (0x00085120) bg_popup_window_pane_cp02_ParamLimits

0x1402,	// (0x00085120) bg_popup_window_pane_cp02

0xb51c,	// (0x0008f23a) heading_pane_cp01_ParamLimits

0xb51c,	// (0x0008f23a) heading_pane_cp01

0xb528,	// (0x0008f246) loc_req_pane_ParamLimits

0xb528,	// (0x0008f246) loc_req_pane

0xb538,	// (0x0008f256) loc_type_pane_ParamLimits

0xb538,	// (0x0008f256) loc_type_pane

0xb54a,	// (0x0008f268) loc_type_pane_t1_ParamLimits

0xb54a,	// (0x0008f268) loc_type_pane_t1

0xb55c,	// (0x0008f27a) loc_type_pane_t2_ParamLimits

0xb55c,	// (0x0008f27a) loc_type_pane_t2

0xb56e,	// (0x0008f28c) loc_type_pane_t3_ParamLimits

0xb56e,	// (0x0008f28c) loc_type_pane_t3

0x0002,

0xf301,	// (0x0009301f) loc_type_pane_t_ParamLimits

0xf301,	// (0x0009301f) loc_type_pane_t

0xb580,	// (0x0008f29e) list_loc_req_pane

0xb58a,	// (0x0008f2a8) scroll_pane_cp012

0x3c44,	// (0x00087962) list_single_loc_request_popup_menu_pane_ParamLimits

0x3c44,	// (0x00087962) list_single_loc_request_popup_menu_pane

0xb595,	// (0x0008f2b3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb595,	// (0x0008f2b3) list_single_loc_request_popup_menu_pane_g1

0xb5a1,	// (0x0008f2bf) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb5a1,	// (0x0008f2bf) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00093026) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00093026) list_single_loc_request_popup_menu_pane_g

0xb5ad,	// (0x0008f2cb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb5ad,	// (0x0008f2cb) list_single_loc_request_popup_menu_pane_t1

0x1a2a,	// (0x00085748) bg_popup_window_pane_cp03_ParamLimits

0x1a2a,	// (0x00085748) bg_popup_window_pane_cp03

0xb5c3,	// (0x0008f2e1) heading_loc_req_pane_ParamLimits

0xb5c3,	// (0x0008f2e1) heading_loc_req_pane

0x3c51,	// (0x0008796f) popup_dyc_status_message_window_g1_ParamLimits

0x3c51,	// (0x0008796f) popup_dyc_status_message_window_g1

0x3c65,	// (0x00087983) popup_dyc_status_message_window_t1_ParamLimits

0x3c65,	// (0x00087983) popup_dyc_status_message_window_t1

0x3c7a,	// (0x00087998) popup_dyc_status_message_window_t2_ParamLimits

0x3c7a,	// (0x00087998) popup_dyc_status_message_window_t2

0x3c8f,	// (0x000879ad) popup_dyc_status_message_window_t3_ParamLimits

0x3c8f,	// (0x000879ad) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0009302b) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0009302b) popup_dyc_status_message_window_t

0x17cf,	// (0x000854ed) bg_heading_pane_cp01

0xb5cf,	// (0x0008f2ed) heading_loc_req_pane_g1

0xb5d7,	// (0x0008f2f5) heading_loc_req_pane_g2

0xb5df,	// (0x0008f2fd) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00093032) heading_loc_req_pane_g

0xb5e7,	// (0x0008f305) heading_loc_req_pane_t1

0xb602,	// (0x0008f320) bg_popup_sub_pane_cp01_ParamLimits

0xb602,	// (0x0008f320) bg_popup_sub_pane_cp01

0xb610,	// (0x0008f32e) popup_cale_events_window_g1_ParamLimits

0xb610,	// (0x0008f32e) popup_cale_events_window_g1

0xb630,	// (0x0008f34e) popup_cale_events_window_g2_ParamLimits

0xb630,	// (0x0008f34e) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00093066) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00093066) popup_cale_events_window_g

0xb650,	// (0x0008f36e) popup_cale_events_window_t1_ParamLimits

0xb650,	// (0x0008f36e) popup_cale_events_window_t1

0xb662,	// (0x0008f380) popup_cale_events_window_t2_ParamLimits

0xb662,	// (0x0008f380) popup_cale_events_window_t2

0xb6a0,	// (0x0008f3be) popup_cale_events_window_t3_ParamLimits

0xb6a0,	// (0x0008f3be) popup_cale_events_window_t3

0xb6da,	// (0x0008f3f8) popup_cale_events_window_t4_ParamLimits

0xb6da,	// (0x0008f3f8) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0009306b) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0009306b) popup_cale_events_window_t

0x3cb7,	// (0x000879d5) call_type_pane

0x3cc7,	// (0x000879e5) popup_call_status_window_g1

0x3cdb,	// (0x000879f9) popup_call_status_window_g2

0x3cef,	// (0x00087a0d) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00093074) popup_call_status_window_g

0xb710,	// (0x0008f42e) call_type_pane_g1

0xb719,	// (0x0008f437) call_type_pane_g2

0x0001,

0xf35d,	// (0x0009307b) call_type_pane_g

0x17cf,	// (0x000854ed) bg_popup_sub_pane_cp02

0xb722,	// (0x0008f440) listscroll_popup_wml_pane

0xb72a,	// (0x0008f448) list_wml_pane

0xb734,	// (0x0008f452) scroll_pane_cp013

0xb73f,	// (0x0008f45d) list_single_graphic_popup_wml_pane_ParamLimits

0xb73f,	// (0x0008f45d) list_single_graphic_popup_wml_pane

0x1eb7,	// (0x00085bd5) list_single_graphic_popup_wml_pane_g1

0xb753,	// (0x0008f471) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00093080) list_single_graphic_popup_wml_pane_g

0xb75b,	// (0x0008f479) list_single_graphic_popup_wml_pane_t1

0xb771,	// (0x0008f48f) aid_call_pane

0x1a22,	// (0x00085740) popup_clock_analogue_window_g1

0x1a22,	// (0x00085740) popup_clock_analogue_window_g2

0xb779,	// (0x0008f497) popup_clock_analogue_window_g3

0xb779,	// (0x0008f497) popup_clock_analogue_window_g4

0x1eb7,	// (0x00085bd5) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00093085) popup_clock_analogue_window_g

0xb781,	// (0x0008f49f) popup_clock_analogue_window_t1

0xb78f,	// (0x0008f4ad) clock_digital_number_pane_ParamLimits

0xb78f,	// (0x0008f4ad) clock_digital_number_pane

0xb79b,	// (0x0008f4b9) clock_digital_number_pane_cp02_ParamLimits

0xb79b,	// (0x0008f4b9) clock_digital_number_pane_cp02

0xb7a7,	// (0x0008f4c5) clock_digital_number_pane_cp03_ParamLimits

0xb7a7,	// (0x0008f4c5) clock_digital_number_pane_cp03

0xb7b3,	// (0x0008f4d1) clock_digital_number_pane_cp04_ParamLimits

0xb7b3,	// (0x0008f4d1) clock_digital_number_pane_cp04

0xb7c3,	// (0x0008f4e1) clock_digital_separator_pane_ParamLimits

0xb7c3,	// (0x0008f4e1) clock_digital_separator_pane

0xb7cf,	// (0x0008f4ed) popup_clock_digital_window_t1

0x1eb7,	// (0x00085bd5) clock_digital_number_pane_g1

0x1eb7,	// (0x00085bd5) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00092ff3) clock_digital_number_pane_g

0x1eb7,	// (0x00085bd5) clock_digital_separator_pane_g1

0x1eb7,	// (0x00085bd5) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00092ff3) clock_digital_separator_pane_g

0x17cf,	// (0x000854ed) bg_popup_window_pane_cp04

0xb7ec,	// (0x0008f50a) heading_pane_cp03

0xb7f4,	// (0x0008f512) listscroll_popup_gms_pane

0xb7fc,	// (0x0008f51a) grid_large_graphic_popup_pane

0xb806,	// (0x0008f524) listscroll_popup_gms_pane_g1

0xb80e,	// (0x0008f52c) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00093090) listscroll_popup_gms_pane_g

0x2fa1,	// (0x00086cbf) scroll_pane_cp014

0x3cfe,	// (0x00087a1c) cell_large_graphic_popup_pane_ParamLimits

0x3cfe,	// (0x00087a1c) cell_large_graphic_popup_pane

0x3d16,	// (0x00087a34) cell_large_graphic_popup_pane_g1_ParamLimits

0x3d16,	// (0x00087a34) cell_large_graphic_popup_pane_g1

0xb816,	// (0x0008f534) cell_large_graphic_popup_pane_g2_ParamLimits

0xb816,	// (0x0008f534) cell_large_graphic_popup_pane_g2

0xb822,	// (0x0008f540) cell_large_graphic_popup_pane_g3_ParamLimits

0xb822,	// (0x0008f540) cell_large_graphic_popup_pane_g3

0xb82f,	// (0x0008f54d) cell_large_graphic_popup_pane_g4_ParamLimits

0xb82f,	// (0x0008f54d) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00093095) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00093095) cell_large_graphic_popup_pane_g

0xb83f,	// (0x0008f55d) grid_highlight_pane_cp010

0x1eb7,	// (0x00085bd5) bg_popup_call_pane_g1

0xb849,	// (0x0008f567) list_single_graphic_popup_conf_pane_ParamLimits

0xb849,	// (0x0008f567) list_single_graphic_popup_conf_pane

0xb85c,	// (0x0008f57a) list_highlight_pane_cp01

0xb865,	// (0x0008f583) list_single_graphic_popup_conf_pane_g1

0xb86d,	// (0x0008f58b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0009309e) list_single_graphic_popup_conf_pane_g

0xb875,	// (0x0008f593) list_single_graphic_popup_conf_pane_t1

0xb883,	// (0x0008f5a1) linegrid_cams_pane_g1

0x3d22,	// (0x00087a40) linegrid_cams_pane_g2

0x2651,	// (0x0008636f) linegrid_cams_pane_g3

0xb88c,	// (0x0008f5aa) linegrid_cams_pane_g4

0x3d2b,	// (0x00087a49) linegrid_cams_pane_g5

0x3d34,	// (0x00087a52) linegrid_cams_pane_g6

0x265a,	// (0x00086378) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000930a3) linegrid_cams_pane_g

0xb895,	// (0x0008f5b3) popup_clock_analogue_window

0xb895,	// (0x0008f5b3) popup_clock_digital_window

0x17cf,	// (0x000854ed) popup_phob_thumbnail_window

0x1eb7,	// (0x00085bd5) call_video_uplink_pane_g1

0xb89e,	// (0x0008f5bc) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000930b2) call_video_uplink_pane_g

0xb8a6,	// (0x0008f5c4) video_uplink_pane

0xb8ae,	// (0x0008f5cc) mce_image_pane_g1

0x3d3f,	// (0x00087a5d) mce_image_pane_g2

0x3d49,	// (0x00087a67) mce_image_pane_g3

0x3d51,	// (0x00087a6f) mce_image_pane_g4

0x3d59,	// (0x00087a77) mce_image_pane_g5

0x0004,

0xf399,	// (0x000930b7) mce_image_pane_g

0xb8b8,	// (0x0008f5d6) control_top_pane_stacon_cp01_ParamLimits

0xb8b8,	// (0x0008f5d6) control_top_pane_stacon_cp01

0xb8cc,	// (0x0008f5ea) uni_indicator_pane_stacon_cp01_ParamLimits

0xb8cc,	// (0x0008f5ea) uni_indicator_pane_stacon_cp01

0xb8dd,	// (0x0008f5fb) bg_popup_sub_pane_cp03

0xb8e7,	// (0x0008f605) chi_dic_find_pane

0x3d61,	// (0x00087a7f) listscroll_chi_dic_pane

0xb8ef,	// (0x0008f60d) main_pane_chidic_g1

0xb8f7,	// (0x0008f615) chi_dic_find_pane_t1

0xb905,	// (0x0008f623) find_chidic_pane

0xb90e,	// (0x0008f62c) chi_dic_list_pane_ParamLimits

0xb90e,	// (0x0008f62c) chi_dic_list_pane

0xb91f,	// (0x0008f63d) scroll_pane_cp020

0xb927,	// (0x0008f645) find_chidic_pane_t1

0x17cf,	// (0x000854ed) input_focus_pane_cp06

0x3d75,	// (0x00087a93) list_chi_dic_pane_ParamLimits

0x3d75,	// (0x00087a93) list_chi_dic_pane

0x3d87,	// (0x00087aa5) list_chi_dic_pane_t1_ParamLimits

0x3d87,	// (0x00087aa5) list_chi_dic_pane_t1

0x17cf,	// (0x000854ed) list_highlight_pane_cp020

0xb936,	// (0x0008f654) bg_cale_heading_pane_g1

0x3d9a,	// (0x00087ab8) bg_cale_heading_pane_g2

0x3da2,	// (0x00087ac0) bg_cale_heading_pane_g3

0x3daa,	// (0x00087ac8) bg_cale_heading_pane_g4

0x3db4,	// (0x00087ad2) bg_cale_heading_pane_g5

0x3dbe,	// (0x00087adc) bg_cale_heading_pane_g6

0x3dc6,	// (0x00087ae4) bg_cale_heading_pane_g7

0x3dce,	// (0x00087aec) bg_cale_heading_pane_g8

0x3dd8,	// (0x00087af6) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000930c2) bg_cale_heading_pane_g

0xb936,	// (0x0008f654) bg_cale_side_pane_g1

0x3de2,	// (0x00087b00) bg_cale_side_pane_g2

0x3dea,	// (0x00087b08) bg_cale_side_pane_g3

0x3df2,	// (0x00087b10) bg_cale_side_pane_g4

0x3dfa,	// (0x00087b18) bg_cale_side_pane_g5

0x3e02,	// (0x00087b20) bg_cale_side_pane_g6

0x3e0a,	// (0x00087b28) bg_cale_side_pane_g7

0x3e12,	// (0x00087b30) bg_cale_side_pane_g8

0x3e1a,	// (0x00087b38) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000930d5) bg_cale_side_pane_g

0x3e22,	// (0x00087b40) popup_call_status_window_ParamLimits

0x3e22,	// (0x00087b40) popup_call_status_window

0xb93e,	// (0x0008f65c) stacon_top_pane

0xb946,	// (0x0008f664) status_pane_ParamLimits

0xb946,	// (0x0008f664) status_pane

0xb95b,	// (0x0008f679) status_small_pane

0xb963,	// (0x0008f681) control_pane

0x17cf,	// (0x000854ed) stacon_bottom_pane

0xb96b,	// (0x0008f689) list_single_mce_smart_pane_t1_ParamLimits

0xb96b,	// (0x0008f689) list_single_mce_smart_pane_t1

0xb97e,	// (0x0008f69c) list_single_mce_smart_pane_t2_ParamLimits

0xb97e,	// (0x0008f69c) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000930e8) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000930e8) list_single_mce_smart_pane_t

0x3e6b,	// (0x00087b89) compass_pane

0x3e74,	// (0x00087b92) main_location2_pane_t1

0x3e86,	// (0x00087ba4) main_location2_pane_t2

0x3e98,	// (0x00087bb6) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000930ed) main_location2_pane_t

0xb99d,	// (0x0008f6bb) compass_pane_g1_ParamLimits

0xb99d,	// (0x0008f6bb) compass_pane_g1

0x3edc,	// (0x00087bfa) compass_pane_t1

0x3eeb,	// (0x00087c09) compass_pane_t2

0x0005,

0xf3d8,	// (0x000930f6) compass_pane_t

0x3f32,	// (0x00087c50) text_secondary_cp61

0xba19,	// (0x0008f737) navi_pane_cams_g5

0xba95,	// (0x0008f7b3) navi_pane_im_t1

0xbaa3,	// (0x0008f7c1) navi_pane_mp_g1_ParamLimits

0xbaa3,	// (0x0008f7c1) navi_pane_mp_g1

0xbab7,	// (0x0008f7d5) navi_pane_mp_g2_ParamLimits

0xbab7,	// (0x0008f7d5) navi_pane_mp_g2

0xbac3,	// (0x0008f7e1) navi_pane_mp_g3_ParamLimits

0xbac3,	// (0x0008f7e1) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0009310a) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0009310a) navi_pane_mp_g

0xbacf,	// (0x0008f7ed) navi_pane_mp_t1

0xbadd,	// (0x0008f7fb) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00093111) navi_pane_mp_t

0xbb48,	// (0x0008f866) navi_pane_vt_g1

0xbacf,	// (0x0008f7ed) navi_pane_vt_t1

0xbb50,	// (0x0008f86e) navi_slider_pane

0x2673,	// (0x00086391) zooming_pane

0xbb60,	// (0x0008f87e) navi_slider_pane_g1

0xbb69,	// (0x0008f887) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00093118) navi_slider_pane_g

0xbb96,	// (0x0008f8b4) aid_levels_zoom

0xbb9e,	// (0x0008f8bc) zooming_pane_g1

0xbba6,	// (0x0008f8c4) zooming_pane_g2

0xbba6,	// (0x0008f8c4) zooming_pane_g3

0x0002,

0xf409,	// (0x00093127) zooming_pane_g

0xbbae,	// (0x0008f8cc) level_10_zoom

0xbbb7,	// (0x0008f8d5) level_11_zoom

0xbbc0,	// (0x0008f8de) level_1_zoom

0xbbc9,	// (0x0008f8e7) level_2_zoom

0xbbd2,	// (0x0008f8f0) level_3_zoom

0xbbdb,	// (0x0008f8f9) level_4_zoom

0xbbe4,	// (0x0008f902) level_5_zoom

0xbbed,	// (0x0008f90b) level_6_zoom

0xbbf6,	// (0x0008f914) level_7_zoom

0xbbff,	// (0x0008f91d) level_8_zoom

0xbc08,	// (0x0008f926) level_9_zoom

0xbc19,	// (0x0008f937) popup_phob_thumbnail_window_g1

0xbc21,	// (0x0008f93f) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0009312e) popup_phob_thumbnail_window_g

0xcf4d,	// (0x00090c6b) level_1_location

0xcf55,	// (0x00090c73) level_2_location

0xcf5d,	// (0x00090c7b) level_3_location

0xcf65,	// (0x00090c83) level_4_location

0x2673,	// (0x00086391) level_5_location

0x3f83,	// (0x00087ca1) mce_icon_pane_g1

0x3f8d,	// (0x00087cab) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00093133) mce_icon_pane_g

0x3f95,	// (0x00087cb3) main_mup_pane_g1_ParamLimits

0x3f95,	// (0x00087cb3) main_mup_pane_g1

0x3fab,	// (0x00087cc9) main_mup_pane_g2_ParamLimits

0x3fab,	// (0x00087cc9) main_mup_pane_g2

0x3fc3,	// (0x00087ce1) main_mup_pane_g3_ParamLimits

0x3fc3,	// (0x00087ce1) main_mup_pane_g3

0x3fdb,	// (0x00087cf9) main_mup_pane_g4_ParamLimits

0x3fdb,	// (0x00087cf9) main_mup_pane_g4

0x3ff3,	// (0x00087d11) main_mup_pane_g5_ParamLimits

0x3ff3,	// (0x00087d11) main_mup_pane_g5

0x400f,	// (0x00087d2d) main_mup_pane_g6_ParamLimits

0x400f,	// (0x00087d2d) main_mup_pane_g6

0x4027,	// (0x00087d45) main_mup_pane_g7_ParamLimits

0x4027,	// (0x00087d45) main_mup_pane_g7

0x403f,	// (0x00087d5d) main_mup_pane_g8_ParamLimits

0x403f,	// (0x00087d5d) main_mup_pane_g8

0x4059,	// (0x00087d77) main_mup_pane_g9_ParamLimits

0x4059,	// (0x00087d77) main_mup_pane_g9

0x4073,	// (0x00087d91) main_mup_pane_g10_ParamLimits

0x4073,	// (0x00087d91) main_mup_pane_g10

0x408d,	// (0x00087dab) main_mup_pane_g11_ParamLimits

0x408d,	// (0x00087dab) main_mup_pane_g11

0x40a1,	// (0x00087dbf) main_mup_pane_g12_ParamLimits

0x40a1,	// (0x00087dbf) main_mup_pane_g12

0x40b7,	// (0x00087dd5) main_mup_pane_g13_ParamLimits

0x40b7,	// (0x00087dd5) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00093138) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00093138) main_mup_pane_g

0x40cb,	// (0x00087de9) main_mup_pane_t1_ParamLimits

0x40cb,	// (0x00087de9) main_mup_pane_t1

0x40e5,	// (0x00087e03) main_mup_pane_t2_ParamLimits

0x40e5,	// (0x00087e03) main_mup_pane_t2

0x40fd,	// (0x00087e1b) main_mup_pane_t3_ParamLimits

0x40fd,	// (0x00087e1b) main_mup_pane_t3

0x4115,	// (0x00087e33) main_mup_pane_t4_ParamLimits

0x4115,	// (0x00087e33) main_mup_pane_t4

0x4133,	// (0x00087e51) main_mup_pane_t5_ParamLimits

0x4133,	// (0x00087e51) main_mup_pane_t5

0x4148,	// (0x00087e66) main_mup_pane_t6_ParamLimits

0x4148,	// (0x00087e66) main_mup_pane_t6

0x0005,

0xf435,	// (0x00093153) main_mup_pane_t_ParamLimits

0xf435,	// (0x00093153) main_mup_pane_t

0x415a,	// (0x00087e78) mup_progress_pane_ParamLimits

0x415a,	// (0x00087e78) mup_progress_pane

0x4166,	// (0x00087e84) mup_visualizer_pane_ParamLimits

0x4166,	// (0x00087e84) mup_visualizer_pane

0x4196,	// (0x00087eb4) mup_volume_pane_ParamLimits

0x4196,	// (0x00087eb4) mup_volume_pane

0xbc29,	// (0x0008f947) mup_visualizer_pane_g1_ParamLimits

0xbc29,	// (0x0008f947) mup_visualizer_pane_g1

0xbc29,	// (0x0008f947) mup_visualizer_pane_g2_ParamLimits

0xbc29,	// (0x0008f947) mup_visualizer_pane_g2

0xb99d,	// (0x0008f6bb) mup_visualizer_pane_g3_ParamLimits

0xb99d,	// (0x0008f6bb) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00093160) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00093160) mup_visualizer_pane_g

0x1eb7,	// (0x00085bd5) mup_volume_pane_g1

0xbc3f,	// (0x0008f95d) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00093167) mup_volume_pane_g

0x1eb7,	// (0x00085bd5) mup_progress_pane_g1

0xbc48,	// (0x0008f966) mup_progress_pane_g2

0xbc51,	// (0x0008f96f) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0009316c) mup_progress_pane_g

0x17cf,	// (0x000854ed) bg_popup_window_pane_cp05

0xbc5a,	// (0x0008f978) heading_pane_cp02_ParamLimits

0xbc5a,	// (0x0008f978) heading_pane_cp02

0xbc74,	// (0x0008f992) list_popup_blid_pane

0xbc7c,	// (0x0008f99a) list_blid_sat_info_pane_ParamLimits

0xbc7c,	// (0x0008f99a) list_blid_sat_info_pane

0xbc8f,	// (0x0008f9ad) list_blid_sat_info_pane_g1

0xbc97,	// (0x0008f9b5) list_blid_sat_info_pane_t1

0x42ac,	// (0x00087fca) mup_equalizer_pane_ParamLimits

0x42ac,	// (0x00087fca) mup_equalizer_pane

0x42c5,	// (0x00087fe3) mup_equalizer_pane_cp1_ParamLimits

0x42c5,	// (0x00087fe3) mup_equalizer_pane_cp1

0x42e2,	// (0x00088000) mup_equalizer_pane_cp2_ParamLimits

0x42e2,	// (0x00088000) mup_equalizer_pane_cp2

0x42ff,	// (0x0008801d) mup_equalizer_pane_cp3_ParamLimits

0x42ff,	// (0x0008801d) mup_equalizer_pane_cp3

0x4320,	// (0x0008803e) mup_equalizer_pane_cp4_ParamLimits

0x4320,	// (0x0008803e) mup_equalizer_pane_cp4

0x4341,	// (0x0008805f) mup_equalizer_pane_cp5

0x4355,	// (0x00088073) mup_equalizer_pane_cp6

0x4369,	// (0x00088087) mup_equalizer_pane_cp7

0xce6b,	// (0x00090b89) bg_popup_call_poc_act_pane_g9

0xce73,	// (0x00090b91) bg_popup_call_poc_act_pane_g10

0xce7b,	// (0x00090b99) bg_popup_call_poc_act_pane_g11

0x000a,

0x1a2a,	// (0x00085748) mup_scale_pane

0x1eb7,	// (0x00085bd5) mup_scale_pane_g1

0xbca5,	// (0x0008f9c3) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00093188) mup_scale_pane_g

0xbcc9,	// (0x0008f9e7) msg_data_pane

0xbcd1,	// (0x0008f9ef) scroll_pane_cp017

0x0411,	// (0x0008412f) bg_list_pane_cp04_ParamLimits

0x0411,	// (0x0008412f) bg_list_pane_cp04

0xbcd9,	// (0x0008f9f7) msg_data_pane_g1

0x438f,	// (0x000880ad) msg_data_pane_g2

0x4399,	// (0x000880b7) msg_data_pane_g3

0x43a1,	// (0x000880bf) msg_data_pane_g4

0x43a9,	// (0x000880c7) msg_data_pane_g5

0x43b1,	// (0x000880cf) msg_data_pane_g6

0x43b9,	// (0x000880d7) msg_data_pane_g7

0x0006,

0xf479,	// (0x00093197) msg_data_pane_g

0x0431,	// (0x0008414f) msg_text_pane_ParamLimits

0x0431,	// (0x0008414f) msg_text_pane

0x43c1,	// (0x000880df) qrid_highlight_pane_cp011_ParamLimits

0x43c1,	// (0x000880df) qrid_highlight_pane_cp011

0x17cf,	// (0x000854ed) msg_body_pane

0x17cf,	// (0x000854ed) msg_header_pane

0xbcea,	// (0x0008fa08) input_focus_pane_cp07

0x0468,	// (0x00084186) msg_header_pane_t1_ParamLimits

0x0468,	// (0x00084186) msg_header_pane_t1

0x047a,	// (0x00084198) msg_header_pane_t2_ParamLimits

0x047a,	// (0x00084198) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000931ab) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000931ab) msg_header_pane_t

0xbcff,	// (0x0008fa1d) msg_body_pane_g1

0x048c,	// (0x000841aa) msg_body_pane_t1_ParamLimits

0x048c,	// (0x000841aa) msg_body_pane_t1

0x04bd,	// (0x000841db) msg_body_pane_t2_ParamLimits

0x04bd,	// (0x000841db) msg_body_pane_t2

0x04cf,	// (0x000841ed) msg_body_pane_t3_ParamLimits

0x04cf,	// (0x000841ed) msg_body_pane_t3

0x0002,

0xf492,	// (0x000931b0) msg_body_pane_t_ParamLimits

0xf492,	// (0x000931b0) msg_body_pane_t

0x4411,	// (0x0008812f) main_viewer_pane_g1_ParamLimits

0x4411,	// (0x0008812f) main_viewer_pane_g1

0x441f,	// (0x0008813d) main_viewer_pane_g2_ParamLimits

0x441f,	// (0x0008813d) main_viewer_pane_g2

0x442d,	// (0x0008814b) main_viewer_pane_g3_ParamLimits

0x442d,	// (0x0008814b) main_viewer_pane_g3

0x443c,	// (0x0008815a) main_viewer_pane_g4_ParamLimits

0x443c,	// (0x0008815a) main_viewer_pane_g4

0xbd1f,	// (0x0008fa3d) main_viewer_pane_g5_ParamLimits

0xbd1f,	// (0x0008fa3d) main_viewer_pane_g5

0xbd1f,	// (0x0008fa3d) main_viewer_pane_g7_ParamLimits

0xbd1f,	// (0x0008fa3d) main_viewer_pane_g7

0xbd31,	// (0x0008fa4f) main_viewer_pane_g8_ParamLimits

0xbd31,	// (0x0008fa4f) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000931c0) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000931c0) main_viewer_pane_g

0xbd49,	// (0x0008fa67) viewer_content_pane_ParamLimits

0xbd49,	// (0x0008fa67) viewer_content_pane

0x4478,	// (0x00088196) main_postcard_pane_g1_ParamLimits

0x4478,	// (0x00088196) main_postcard_pane_g1

0x448e,	// (0x000881ac) main_postcard_pane_g2_ParamLimits

0x448e,	// (0x000881ac) main_postcard_pane_g2

0x44a4,	// (0x000881c2) main_postcard_pane_g3_ParamLimits

0x44a4,	// (0x000881c2) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000931d1) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000931d1) main_postcard_pane_g

0x44bb,	// (0x000881d9) main_postcard_pane_g4

0xd0a1,	// (0x00090dbf) smil_status_volume_pane_g2

0x44fe,	// (0x0008821c) postcard_pane_ParamLimits

0x44fe,	// (0x0008821c) postcard_pane

0xbd57,	// (0x0008fa75) postcard_pane_g1_ParamLimits

0xbd57,	// (0x0008fa75) postcard_pane_g1

0x4540,	// (0x0008825e) postcard_pane_g2_ParamLimits

0x4540,	// (0x0008825e) postcard_pane_g2

0x454c,	// (0x0008826a) postcard_pane_g3_ParamLimits

0x454c,	// (0x0008826a) postcard_pane_g3

0xbd65,	// (0x0008fa83) postcard_pane_g4_ParamLimits

0xbd65,	// (0x0008fa83) postcard_pane_g4

0x4558,	// (0x00088276) postcard_pane_g5_ParamLimits

0x4558,	// (0x00088276) postcard_pane_g5

0x456d,	// (0x0008828b) postcard_pane_g6_ParamLimits

0x456d,	// (0x0008828b) postcard_pane_g6

0xbd57,	// (0x0008fa75) postcard_pane_g7_ParamLimits

0xbd57,	// (0x0008fa75) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000931de) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000931de) postcard_pane_g

0x4581,	// (0x0008829f) main_mp2_pane_g1_ParamLimits

0x4581,	// (0x0008829f) main_mp2_pane_g1

0x458d,	// (0x000882ab) main_mp2_pane_g2_ParamLimits

0x458d,	// (0x000882ab) main_mp2_pane_g2

0x4599,	// (0x000882b7) main_mp2_pane_g3_ParamLimits

0x4599,	// (0x000882b7) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000931ed) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000931ed) main_mp2_pane_g

0x45a5,	// (0x000882c3) main_mp2_pane_t1_ParamLimits

0x45a5,	// (0x000882c3) main_mp2_pane_t1

0x45ba,	// (0x000882d8) main_mp2_pane_t2_ParamLimits

0x45ba,	// (0x000882d8) main_mp2_pane_t2

0x45cc,	// (0x000882ea) main_mp2_pane_t3_ParamLimits

0x45cc,	// (0x000882ea) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000931f4) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000931f4) main_mp2_pane_t

0xbd73,	// (0x0008fa91) pec_content_pane_ParamLimits

0xbd73,	// (0x0008fa91) pec_content_pane

0x2fa1,	// (0x00086cbf) scroll_pane_cp015

0xbd85,	// (0x0008faa3) pec_attribute_pane_ParamLimits

0xbd85,	// (0x0008faa3) pec_attribute_pane

0x45de,	// (0x000882fc) pec_content_pane_g1_ParamLimits

0x45de,	// (0x000882fc) pec_content_pane_g1

0xbd95,	// (0x0008fab3) pec_content_pane_t1_ParamLimits

0xbd95,	// (0x0008fab3) pec_content_pane_t1

0xbda7,	// (0x0008fac5) pec_content_pane_t2_ParamLimits

0xbda7,	// (0x0008fac5) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000931fb) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000931fb) pec_content_pane_t

0x45ea,	// (0x00088308) list_single_graphic_pane_cp01_ParamLimits

0x45ea,	// (0x00088308) list_single_graphic_pane_cp01

0x1a2a,	// (0x00085748) bg_popup_sub_pane_cp04

0xbdb9,	// (0x0008fad7) popup_mup_playback_window_g1

0xbdc5,	// (0x0008fae3) popup_mup_playback_window_t1

0xbdda,	// (0x0008faf8) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00093200) popup_mup_playback_window_t

0xbe11,	// (0x0008fb2f) main_image_pane_g1_ParamLimits

0xbe11,	// (0x0008fb2f) main_image_pane_g1

0xbe54,	// (0x0008fb72) scroll_pane_cp018_ParamLimits

0xbe54,	// (0x0008fb72) scroll_pane_cp018

0xbe6c,	// (0x0008fb8a) scroll_pane_cp016_ParamLimits

0xbe6c,	// (0x0008fb8a) scroll_pane_cp016

0x46b7,	// (0x000883d5) smil2_image_pane_ParamLimits

0x46b7,	// (0x000883d5) smil2_image_pane

0x46e7,	// (0x00088405) smil2_root_pane_ParamLimits

0x46e7,	// (0x00088405) smil2_root_pane

0x471f,	// (0x0008843d) smil2_text_pane_ParamLimits

0x471f,	// (0x0008843d) smil2_text_pane

0x17cf,	// (0x000854ed) bg_list_pane_cp06

0xbea8,	// (0x0008fbc6) grid_radio_pane

0x17cf,	// (0x000854ed) bg_popup_window_pane_cp06

0xbeb0,	// (0x0008fbce) main_fmradio_pane_t1

0xb7ec,	// (0x0008f50a) heading_pane_cp04

0xbebe,	// (0x0008fbdc) main_fmradio_pane_t2

0xce83,	// (0x00090ba1) popup_cale_lunar_info_window_g1

0xbecc,	// (0x0008fbea) main_fmradio_pane_t3

0xce8b,	// (0x00090ba9) popup_cale_lunar_info_window_g2

0xbeda,	// (0x0008fbf8) main_fmradio_pane_t4

0x0001,

0xbee8,	// (0x0008fc06) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000932db) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00093215) main_fmradio_pane_t

0xbef6,	// (0x0008fc14) wait_bar_pane_cp03

0xbefe,	// (0x0008fc1c) cell_fmradio_pane_ParamLimits

0xbefe,	// (0x0008fc1c) cell_fmradio_pane

0xbd57,	// (0x0008fa75) cell_fmradio_pane_g1_ParamLimits

0xbd57,	// (0x0008fa75) cell_fmradio_pane_g1

0x17cf,	// (0x000854ed) grid_highlight_pane_cp011

0xbf11,	// (0x0008fc2f) poc_content_pane_ParamLimits

0xbf11,	// (0x0008fc2f) poc_content_pane

0xbf23,	// (0x0008fc41) scroll_pane_cp019

0x479f,	// (0x000884bd) popup_call_poc_act_window_ParamLimits

0x479f,	// (0x000884bd) popup_call_poc_act_window

0x47c3,	// (0x000884e1) popup_call_poc_inact_window_ParamLimits

0x47c3,	// (0x000884e1) popup_call_poc_inact_window

0xf594,	// (0x000932b2) bg_popup_call_poc_act_pane_g

0xcdfb,	// (0x00090b19) bg_popup_call_poc_inact_pane_g1

0xce03,	// (0x00090b21) bg_popup_call_poc_inact_pane_g2

0xbf2b,	// (0x0008fc49) popup_call_poc_act_window_g2

0xce0b,	// (0x00090b29) bg_popup_call_poc_inact_pane_g3

0xce13,	// (0x00090b31) bg_popup_call_poc_inact_pane_g4

0xce1b,	// (0x00090b39) bg_popup_call_poc_inact_pane_g5

0xbf33,	// (0x0008fc51) popup_call_poc_act_window_t1_ParamLimits

0xbf33,	// (0x0008fc51) popup_call_poc_act_window_t1

0xbf5b,	// (0x0008fc79) popup_call_poc_act_window_t2_ParamLimits

0xbf5b,	// (0x0008fc79) popup_call_poc_act_window_t2

0xbf83,	// (0x0008fca1) popup_call_poc_act_window_t3_ParamLimits

0xbf83,	// (0x0008fca1) popup_call_poc_act_window_t3

0xbfab,	// (0x0008fcc9) popup_call_poc_act_window_t4_ParamLimits

0xbfab,	// (0x0008fcc9) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00093220) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00093220) popup_call_poc_act_window_t

0xce23,	// (0x00090b41) bg_popup_call_poc_inact_pane_g6

0xce2b,	// (0x00090b49) bg_popup_call_poc_inact_pane_g7

0xce33,	// (0x00090b51) bg_popup_call_poc_inact_pane_g8

0xbfbd,	// (0x0008fcdb) popup_call_poc_inact_window_g2

0xce3b,	// (0x00090b59) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0009329f) bg_popup_call_poc_inact_pane_g

0xbfc5,	// (0x0008fce3) popup_call_poc_inact_window_t1_ParamLimits

0xbfc5,	// (0x0008fce3) popup_call_poc_inact_window_t1

0xbfda,	// (0x0008fcf8) popup_call_poc_inact_window_t2_ParamLimits

0xbfda,	// (0x0008fcf8) popup_call_poc_inact_window_t2

0xbfef,	// (0x0008fd0d) popup_call_poc_inact_window_t3_ParamLimits

0xbfef,	// (0x0008fd0d) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00093229) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00093229) popup_call_poc_inact_window_t

0xd014,	// (0x00090d32) context_pane_ParamLimits

0x4ff2,	// (0x00088d10) signal_pane_ParamLimits

0x2673,	// (0x00086391) main_call2_pane

0xcfed,	// (0x00090d0b) popup_phob_thumbnail2_window_ParamLimits

0xcfed,	// (0x00090d0b) popup_phob_thumbnail2_window

0xbd07,	// (0x0008fa25) aid_hotspot_pointer_arrow_pane

0xbd0f,	// (0x0008fa2d) aid_hotspot_pointer_hand_pane

0x4b0c,	// (0x0008882a) phob_pre_status_pane_g5

0x26f1,	// (0x0008640f) cams_zoom_pane_ParamLimits

0x2700,	// (0x0008641e) image_vga_pane_ParamLimits

0x271a,	// (0x00086438) main_camera_pane_g1_ParamLimits

0x272c,	// (0x0008644a) main_camera_pane_g2_ParamLimits

0x273c,	// (0x0008645a) main_camera_pane_g3_ParamLimits

0x274c,	// (0x0008646a) main_camera_pane_g4_ParamLimits

0x275c,	// (0x0008647a) main_camera_pane_g5_ParamLimits

0x276c,	// (0x0008648a) main_camera_pane_g6_ParamLimits

0x277e,	// (0x0008649c) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00092f28) main_camera_pane_g_ParamLimits

0x279a,	// (0x000864b8) main_camera_pane_t1_ParamLimits

0x27b0,	// (0x000864ce) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00092f39) main_camera_pane_t_ParamLimits

0x1a2a,	// (0x00085748) bg_popup_preview_window_pane_cp01_ParamLimits

0x1a2a,	// (0x00085748) bg_popup_preview_window_pane_cp01

0xc004,	// (0x0008fd22) popup_phob_thumbnail2_window_g1_ParamLimits

0xc004,	// (0x0008fd22) popup_phob_thumbnail2_window_g1

0x17cf,	// (0x000854ed) call2_cli_visual_pane

0x47f7,	// (0x00088515) popup_call2_audio_conf_window_ParamLimits

0x47f7,	// (0x00088515) popup_call2_audio_conf_window

0x4817,	// (0x00088535) popup_call2_audio_first_window_ParamLimits

0x4817,	// (0x00088535) popup_call2_audio_first_window

0x48ad,	// (0x000885cb) popup_call2_audio_in_window_ParamLimits

0x48ad,	// (0x000885cb) popup_call2_audio_in_window

0x48f5,	// (0x00088613) popup_call2_audio_out_window_ParamLimits

0x48f5,	// (0x00088613) popup_call2_audio_out_window

0x495f,	// (0x0008867d) popup_call2_audio_second_window_ParamLimits

0x495f,	// (0x0008867d) popup_call2_audio_second_window

0x49c5,	// (0x000886e3) popup_call2_audio_wait_window_ParamLimits

0x49c5,	// (0x000886e3) popup_call2_audio_wait_window

0x17cf,	// (0x000854ed) bg_popup_call2_act_pane_cp03

0x1a0c,	// (0x0008572a) list_conf_pane_cp

0xc010,	// (0x0008fd2e) popup_call2_audio_conf_window_t1

0xb849,	// (0x0008f567) list_single_graphic_popup_conf2_pane_ParamLimits

0xb849,	// (0x0008f567) list_single_graphic_popup_conf2_pane

0xb85c,	// (0x0008f57a) list_highlight_pane_cp04

0xc01e,	// (0x0008fd3c) list_single_graphic_popup_conf2_pane_g1

0xb86d,	// (0x0008f58b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00093230) list_single_graphic_popup_conf2_pane_g

0xc028,	// (0x0008fd46) list_single_graphic_popup_conf2_pane_t1

0xc036,	// (0x0008fd54) bg_popup_call2_act_pane_cp01_ParamLimits

0xc036,	// (0x0008fd54) bg_popup_call2_act_pane_cp01

0xc0c0,	// (0x0008fdde) call_type_pane_cp05_ParamLimits

0xc0c0,	// (0x0008fdde) call_type_pane_cp05

0xc114,	// (0x0008fe32) popup_call2_audio_second_window_g1_ParamLimits

0xc114,	// (0x0008fe32) popup_call2_audio_second_window_g1

0xc168,	// (0x0008fe86) popup_call2_audio_second_window_g2_ParamLimits

0xc168,	// (0x0008fe86) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00093235) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00093235) popup_call2_audio_second_window_g

0xc1cd,	// (0x0008feeb) popup_call2_audio_second_window_t1_ParamLimits

0xc1cd,	// (0x0008feeb) popup_call2_audio_second_window_t1

0xc288,	// (0x0008ffa6) popup_call2_audio_second_window_t2_ParamLimits

0xc288,	// (0x0008ffa6) popup_call2_audio_second_window_t2

0xc2db,	// (0x0008fff9) popup_call2_audio_second_window_t3_ParamLimits

0xc2db,	// (0x0008fff9) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0009323c) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0009323c) popup_call2_audio_second_window_t

0x17cf,	// (0x000854ed) bg_popup_call2_in_pane_cp02

0x17d9,	// (0x000854f7) call_type_pane_cp04

0x17e1,	// (0x000854ff) popup_call2_audio_wait_window_g1

0x17e9,	// (0x00085507) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00092e17) popup_call2_audio_wait_window_g

0x17f1,	// (0x0008550f) popup_call2_audio_wait_window_t3

0xc3ce,	// (0x000900ec) bg_popup_call2_act_pane_ParamLimits

0xc3ce,	// (0x000900ec) bg_popup_call2_act_pane

0xc48e,	// (0x000901ac) call_type_pane_cp03_ParamLimits

0xc48e,	// (0x000901ac) call_type_pane_cp03

0xc4f2,	// (0x00090210) popup_call2_audio_first_window_g1_ParamLimits

0xc4f2,	// (0x00090210) popup_call2_audio_first_window_g1

0xc562,	// (0x00090280) popup_call2_audio_first_window_g2_ParamLimits

0xc562,	// (0x00090280) popup_call2_audio_first_window_g2

0xbc29,	// (0x0008f947) popup_call2_audio_first_window_g3_ParamLimits

0xbc29,	// (0x0008f947) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00093245) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00093245) popup_call2_audio_first_window_g

0xc640,	// (0x0009035e) popup_call2_audio_first_window_t1_ParamLimits

0xc640,	// (0x0009035e) popup_call2_audio_first_window_t1

0xc743,	// (0x00090461) popup_call2_audio_first_window_t4_ParamLimits

0xc743,	// (0x00090461) popup_call2_audio_first_window_t4

0xc826,	// (0x00090544) popup_call2_audio_first_window_t5_ParamLimits

0xc826,	// (0x00090544) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00093250) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00093250) popup_call2_audio_first_window_t

0x1a22,	// (0x00085740) bg_popup_call2_act_pane_g1

0xce93,	// (0x00090bb1) popup_cale_lunar_info_window_t1

0xcea1,	// (0x00090bbf) popup_cale_lunar_info_window_t2

0xceaf,	// (0x00090bcd) popup_cale_lunar_info_window_t3

0x17cf,	// (0x000854ed) bg_popup_call2_bubble_pane

0xc927,	// (0x00090645) bg_popup_call2_in_pane_cp01_ParamLimits

0xc927,	// (0x00090645) bg_popup_call2_in_pane_cp01

0x1487,	// (0x000851a5) call_type_pane_cp02

0xc96f,	// (0x0009068d) popup_call2_audio_out_window_g1_ParamLimits

0xc96f,	// (0x0009068d) popup_call2_audio_out_window_g1

0xc99b,	// (0x000906b9) popup_call2_audio_out_window_g2_ParamLimits

0xc99b,	// (0x000906b9) popup_call2_audio_out_window_g2

0xc9c3,	// (0x000906e1) popup_call2_audio_out_window_g3_ParamLimits

0xc9c3,	// (0x000906e1) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00093259) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00093259) popup_call2_audio_out_window_g

0xc9fe,	// (0x0009071c) popup_call2_audio_out_window_t1_ParamLimits

0xc9fe,	// (0x0009071c) popup_call2_audio_out_window_t1

0xca5d,	// (0x0009077b) popup_call2_audio_out_window_t2_ParamLimits

0xca5d,	// (0x0009077b) popup_call2_audio_out_window_t2

0xcab1,	// (0x000907cf) popup_call2_audio_out_window_t3_ParamLimits

0xcab1,	// (0x000907cf) popup_call2_audio_out_window_t3

0xcac7,	// (0x000907e5) popup_call2_audio_out_window_t4_ParamLimits

0xcac7,	// (0x000907e5) popup_call2_audio_out_window_t4

0xcadd,	// (0x000907fb) popup_call2_audio_out_window_t5_ParamLimits

0xcadd,	// (0x000907fb) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00093262) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00093262) popup_call2_audio_out_window_t

0xcb41,	// (0x0009085f) bg_popup_call2_in_pane_ParamLimits

0xcb41,	// (0x0009085f) bg_popup_call2_in_pane

0xcb9d,	// (0x000908bb) popup_call2_audio_in_window_g1_ParamLimits

0xcb9d,	// (0x000908bb) popup_call2_audio_in_window_g1

0xcbd5,	// (0x000908f3) popup_call2_audio_in_window_g2_ParamLimits

0xcbd5,	// (0x000908f3) popup_call2_audio_in_window_g2

0xcc0d,	// (0x0009092b) popup_call2_audio_in_window_g3_ParamLimits

0xcc0d,	// (0x0009092b) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0009326f) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0009326f) popup_call2_audio_in_window_g

0xcc65,	// (0x00090983) popup_call2_audio_in_window_t1_ParamLimits

0xcc65,	// (0x00090983) popup_call2_audio_in_window_t1

0xcce5,	// (0x00090a03) popup_call2_audio_in_window_t2_ParamLimits

0xcce5,	// (0x00090a03) popup_call2_audio_in_window_t2

0xcd65,	// (0x00090a83) popup_call2_audio_in_window_t3_ParamLimits

0xcd65,	// (0x00090a83) popup_call2_audio_in_window_t3

0xcd7f,	// (0x00090a9d) popup_call2_audio_in_window_t4_ParamLimits

0xcd7f,	// (0x00090a9d) popup_call2_audio_in_window_t4

0xcd91,	// (0x00090aaf) popup_call2_audio_in_window_t5_ParamLimits

0xcd91,	// (0x00090aaf) popup_call2_audio_in_window_t5

0xcda6,	// (0x00090ac4) popup_call2_audio_in_window_t6_ParamLimits

0xcda6,	// (0x00090ac4) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00093278) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00093278) popup_call2_audio_in_window_t

0x1a22,	// (0x00085740) bg_popup_call2_in_pane_g1

0xcebd,	// (0x00090bdb) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000932e0) popup_cale_lunar_info_window_t

0x1a2a,	// (0x00085748) bg_popup_call2_rect_pane_ParamLimits

0x1a2a,	// (0x00085748) bg_popup_call2_rect_pane

0x17cf,	// (0x000854ed) call2_cli_visual_graphic_pane

0x17cf,	// (0x000854ed) call2_cli_visual_text_pane

0xd0b4,	// (0x00090dd2) smil_status_volume_pane_g3

0x0002,

0x1eb7,	// (0x00085bd5) call2_cli_visual_graphic_pane_g1

0x1eb7,	// (0x00085bd5) call2_cli_visual_graphic_pane_g2

0x1eb7,	// (0x00085bd5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00093285) call2_cli_visual_graphic_pane_g

0xcdbb,	// (0x00090ad9) bg_popup_call2_rect_pane_g1

0x2006,	// (0x00085d24) bg_popup_call2_rect_pane_g2

0xcdc3,	// (0x00090ae1) bg_popup_call2_rect_pane_g3

0xcdcb,	// (0x00090ae9) bg_popup_call2_rect_pane_g4

0xcdd3,	// (0x00090af1) bg_popup_call2_rect_pane_g5

0xcddb,	// (0x00090af9) bg_popup_call2_rect_pane_g6

0xcde3,	// (0x00090b01) bg_popup_call2_rect_pane_g7

0xcdeb,	// (0x00090b09) bg_popup_call2_rect_pane_g8

0xcdf3,	// (0x00090b11) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0009328c) bg_popup_call2_rect_pane_g

0xcdfb,	// (0x00090b19) bg_popup_call2_bubble_pane_g1

0xce03,	// (0x00090b21) bg_popup_call2_bubble_pane_g2

0xce0b,	// (0x00090b29) bg_popup_call2_bubble_pane_g3

0xce13,	// (0x00090b31) bg_popup_call2_bubble_pane_g4

0xce1b,	// (0x00090b39) bg_popup_call2_bubble_pane_g5

0xce23,	// (0x00090b41) bg_popup_call2_bubble_pane_g6

0xce2b,	// (0x00090b49) bg_popup_call2_bubble_pane_g7

0xce33,	// (0x00090b51) bg_popup_call2_bubble_pane_g8

0xce3b,	// (0x00090b59) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0009329f) bg_popup_call2_bubble_pane_g

0x2087,	// (0x00085da5) aid_cale_week_size_cell_pane

0x27c6,	// (0x000864e4) aid_cams_cif_uncrop_pane_ParamLimits

0x27c6,	// (0x000864e4) aid_cams_cif_uncrop_pane

0x29b4,	// (0x000866d2) aid_cams_size_cell_ParamLimits

0x29b4,	// (0x000866d2) aid_cams_size_cell

0x29c8,	// (0x000866e6) grid_cams_pane_ParamLimits

0x29e2,	// (0x00086700) linegrid_cams_pane_ParamLimits

0x2b30,	// (0x0008684e) call_video_pane_t1

0x2b4e,	// (0x0008686c) call_video_pane_t2

0x0001,

0xf26e,	// (0x00092f8c) call_video_pane_t

0x312c,	// (0x00086e4a) aid_cale_month_size_cell_pane_ParamLimits

0x312c,	// (0x00086e4a) aid_cale_month_size_cell_pane

0xf60b,	// (0x00093329) smil_status_volume_pane_g

0xd0c1,	// (0x00090ddf) volume_smil_pane_ParamLimits

0xb1a0,	// (0x0008eebe) aid_popup2_width_pane

0x1f5e,	// (0x00085c7c) cell_qdial_pane_g4_ParamLimits

0x1f5e,	// (0x00085c7c) cell_qdial_pane_g4

0x3ebc,	// (0x00087bda) aid_blid_cardinal_pane_ParamLimits

0x3ec8,	// (0x00087be6) aid_blid_destination_pane_ParamLimits

0x3ec8,	// (0x00087be6) aid_blid_destination_pane

0x1a2a,	// (0x00085748) bg_popup_call_poc_act_pane_ParamLimits

0x1a2a,	// (0x00085748) bg_popup_call_poc_act_pane

0x1a2a,	// (0x00085748) bg_popup_call_poc_inact_pane_ParamLimits

0x1a2a,	// (0x00085748) bg_popup_call_poc_inact_pane

0xce43,	// (0x00090b61) bg_popup_call_poc_act_pane_g1

0xce4b,	// (0x00090b69) bg_popup_call_poc_act_pane_g2

0xce53,	// (0x00090b71) bg_popup_call_poc_act_pane_g3

0xce13,	// (0x00090b31) bg_popup_call_poc_act_pane_g4

0xce1b,	// (0x00090b39) bg_popup_call_poc_act_pane_g5

0xce5b,	// (0x00090b79) bg_popup_call_poc_act_pane_g6

0xce2b,	// (0x00090b49) bg_popup_call_poc_act_pane_g7

0xce63,	// (0x00090b81) bg_popup_call_poc_act_pane_g8

0x17cf,	// (0x000854ed) main_usb_pane

0xcfc8,	// (0x00090ce6) popup_cale_lunar_info_window

0x2e88,	// (0x00086ba6) im_reading_pane_t1_ParamLimits

0x2ec1,	// (0x00086bdf) list_im_pane_ParamLimits

0x2ed2,	// (0x00086bf0) scroll_pane_cp07_ParamLimits

0x17cf,	// (0x000854ed) grid_highlight_pane_cp012

0x1a2a,	// (0x00085748) mup_scale_pane_ParamLimits

0xbd57,	// (0x0008fa75) main_usb_pane_g1_ParamLimits

0xbd57,	// (0x0008fa75) main_usb_pane_g1

0x4a21,	// (0x0008873f) main_usb_pane_g2_ParamLimits

0x4a21,	// (0x0008873f) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000932c9) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000932c9) main_usb_pane_g

0x4a37,	// (0x00088755) main_usb_pane_t1_ParamLimits

0x4a37,	// (0x00088755) main_usb_pane_t1

0x4a49,	// (0x00088767) main_usb_pane_t2_ParamLimits

0x4a49,	// (0x00088767) main_usb_pane_t2

0x4a5b,	// (0x00088779) main_usb_pane_t3_ParamLimits

0x4a5b,	// (0x00088779) main_usb_pane_t3

0x4a6d,	// (0x0008878b) main_usb_pane_t4_ParamLimits

0x4a6d,	// (0x0008878b) main_usb_pane_t4

0x4a7f,	// (0x0008879d) main_usb_pane_t5_ParamLimits

0x4a7f,	// (0x0008879d) main_usb_pane_t5

0x4a91,	// (0x000887af) main_usb_pane_t6_ParamLimits

0x4a91,	// (0x000887af) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000932ce) main_usb_pane_t_ParamLimits

0x3e6b,	// (0x00087b89) aid_text_placing

0x3e74,	// (0x00087b92) main_location2_pane_t1_ParamLimits

0x3e86,	// (0x00087ba4) main_location2_pane_t2_ParamLimits

0x3e98,	// (0x00087bb6) main_location2_pane_t3_ParamLimits

0x3eaa,	// (0x00087bc8) main_location2_pane_t4_ParamLimits

0x3eaa,	// (0x00087bc8) main_location2_pane_t4

0xf3cf,	// (0x000930ed) main_location2_pane_t_ParamLimits

0x1b02,	// (0x00085820) find_pinb_pane_g2_ParamLimits

0x1b02,	// (0x00085820) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00092e3d) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00092e3d) find_pinb_pane_g

0x1b0e,	// (0x0008582c) find_pinb_pane_t1_ParamLimits

0x1b20,	// (0x0008583e) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00092e42) find_pinb_pane_t_ParamLimits

0x17cf,	// (0x000854ed) main_call3_pane

0x3617,	// (0x00087335) cale_month_day_heading_pane_t1_ParamLimits

0x369d,	// (0x000873bb) cale_month_day_heading_pane_t2_ParamLimits

0x3716,	// (0x00087434) cale_month_day_heading_pane_t3_ParamLimits

0x378f,	// (0x000874ad) cale_month_day_heading_pane_t4_ParamLimits

0x3810,	// (0x0008752e) cale_month_day_heading_pane_t5_ParamLimits

0x3899,	// (0x000875b7) cale_month_day_heading_pane_t6_ParamLimits

0x3922,	// (0x00087640) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x00092fc4) cale_month_day_heading_pane_t_ParamLimits

0xb3b5,	// (0x0008f0d3) smil_status_volume_pane

0x451c,	// (0x0008823a) postcard_address_pane_ParamLimits

0x451c,	// (0x0008823a) postcard_address_pane

0x452e,	// (0x0008824c) postcard_message_pane_ParamLimits

0x452e,	// (0x0008824c) postcard_message_pane

0x49ff,	// (0x0008871d) call2_cli_visual_pane_t1_ParamLimits

0x49ff,	// (0x0008871d) call2_cli_visual_pane_t1

0x521f,	// (0x00088f3d) postcard_message_pane_t1_ParamLimits

0x521f,	// (0x00088f3d) postcard_message_pane_t1

0x5208,	// (0x00088f26) postcard_address_pane_t1_ParamLimits

0x5208,	// (0x00088f26) postcard_address_pane_t1

0x51f4,	// (0x00088f12) popup_call3_audio_in_window_ParamLimits

0x51f4,	// (0x00088f12) popup_call3_audio_in_window

0x507f,	// (0x00088d9d) bg_popup_call3_in_pane_ParamLimits

0x507f,	// (0x00088d9d) bg_popup_call3_in_pane

0x50f5,	// (0x00088e13) popup_call3_audio_in_window_g1_ParamLimits

0x50f5,	// (0x00088e13) popup_call3_audio_in_window_g1

0x5115,	// (0x00088e33) popup_call3_audio_in_window_g2_ParamLimits

0x5115,	// (0x00088e33) popup_call3_audio_in_window_g2

0x5135,	// (0x00088e53) popup_call3_audio_in_window_g3_ParamLimits

0x5135,	// (0x00088e53) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x00093330) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x00093330) popup_call3_audio_in_window_g

0x5166,	// (0x00088e84) popup_call3_audio_in_window_t1_ParamLimits

0x5166,	// (0x00088e84) popup_call3_audio_in_window_t1

0x51a4,	// (0x00088ec2) popup_call3_audio_in_window_t2_ParamLimits

0x51a4,	// (0x00088ec2) popup_call3_audio_in_window_t2

0x51e2,	// (0x00088f00) popup_call3_audio_in_window_t3_ParamLimits

0x51e2,	// (0x00088f00) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00093339) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00093339) popup_call3_audio_in_window_t

0x2673,	// (0x00086391) bg_popup_call3_rect_pane

0xcdbb,	// (0x00090ad9) bg_popup_call3_rect_pane_g1

0x2006,	// (0x00085d24) bg_popup_call3_rect_pane_g2

0xcdc3,	// (0x00090ae1) bg_popup_call3_rect_pane_g3

0xcdcb,	// (0x00090ae9) bg_popup_call3_rect_pane_g4

0xcdd3,	// (0x00090af1) bg_popup_call3_rect_pane_g5

0xcddb,	// (0x00090af9) bg_popup_call3_rect_pane_g6

0xcde3,	// (0x00090b01) bg_popup_call3_rect_pane_g7

0x41ac,	// (0x00087eca) mup_visualizer_osc_pane

0xbc37,	// (0x0008f955) mup_visualizer_spec_pane

0x50af,	// (0x00088dcd) call3_video_qcif_pane_ParamLimits

0x50af,	// (0x00088dcd) call3_video_qcif_pane

0x50c2,	// (0x00088de0) call3_video_qcif_uncrop_pane_ParamLimits

0x50c2,	// (0x00088de0) call3_video_qcif_uncrop_pane

0x50d0,	// (0x00088dee) call3_video_subqcif_pane_ParamLimits

0x50d0,	// (0x00088dee) call3_video_subqcif_pane

0x50e4,	// (0x00088e02) call3_video_subqcif_uncrop_pane_ParamLimits

0x50e4,	// (0x00088e02) call3_video_subqcif_uncrop_pane

0x5155,	// (0x00088e73) popup_call3_audio_in_window_g4_ParamLimits

0x5155,	// (0x00088e73) popup_call3_audio_in_window_g4

0x506e,	// (0x00088d8c) mup_spec_half_pane

0x5077,	// (0x00088d95) mup_spec_half_pane_cp

0xd074,	// (0x00090d92) mup_osc_middle_pane

0xd07d,	// (0x00090d9b) mup_visualizer_osc_pane_g1

0x504e,	// (0x00088d6c) mup_spec_bar_pane_ParamLimits

0x504e,	// (0x00088d6c) mup_spec_bar_pane

0xd061,	// (0x00090d7f) mup_spec_bar_pane_g1

0xd06b,	// (0x00090d89) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00093324) mup_spec_bar_pane_g

0x2087,	// (0x00085da5) aid_cale_week_size_cell_pane_ParamLimits

0x20a1,	// (0x00085dbf) bg_cale_heading_pane_ParamLimits

0x20b9,	// (0x00085dd7) bg_cale_pane_cp01_ParamLimits

0x20d6,	// (0x00085df4) cale_week_corner_pane_ParamLimits

0x20f5,	// (0x00085e13) cale_week_day_heading_pane_ParamLimits

0x2112,	// (0x00085e30) cale_week_scroll_pane_g1_ParamLimits

0x2125,	// (0x00085e43) cale_week_scroll_pane_g2_ParamLimits

0x213d,	// (0x00085e5b) cale_week_scroll_pane_g3_ParamLimits

0x2155,	// (0x00085e73) cale_week_scroll_pane_g4_ParamLimits

0x216d,	// (0x00085e8b) cale_week_scroll_pane_g5_ParamLimits

0x218d,	// (0x00085eab) cale_week_scroll_pane_g6_ParamLimits

0x21ad,	// (0x00085ecb) cale_week_scroll_pane_g7_ParamLimits

0x21cd,	// (0x00085eeb) cale_week_scroll_pane_g8_ParamLimits

0x21f1,	// (0x00085f0f) cale_week_scroll_pane_g9_ParamLimits

0x2209,	// (0x00085f27) cale_week_scroll_pane_g10_ParamLimits

0x2221,	// (0x00085f3f) cale_week_scroll_pane_g11_ParamLimits

0x2239,	// (0x00085f57) cale_week_scroll_pane_g12_ParamLimits

0x2251,	// (0x00085f6f) cale_week_scroll_pane_g13_ParamLimits

0x2251,	// (0x00085f6f) cale_week_scroll_pane_g14_ParamLimits

0x2251,	// (0x00085f6f) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00092ece) cale_week_scroll_pane_g_ParamLimits

0x228d,	// (0x00085fab) cale_week_time_pane_ParamLimits

0x22b1,	// (0x00085fcf) grid_cale_week_pane_ParamLimits

0x22d7,	// (0x00085ff5) listscroll_cale_week_pane_t1

0x22e9,	// (0x00086007) scroll_pane_cp08_ParamLimits

0x318c,	// (0x00086eaa) cale_month_corner_pane_ParamLimits

0xb37f,	// (0x0008f09d) cale_month_pane_t1

0x35aa,	// (0x000872c8) cale_month_week_pane_ParamLimits

0x3cc7,	// (0x000879e5) popup_call_status_window_g1_ParamLimits

0x3cdb,	// (0x000879f9) popup_call_status_window_g2_ParamLimits

0x3cef,	// (0x00087a0d) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00093074) popup_call_status_window_g_ParamLimits

0xb769,	// (0x0008f487) aid_call2_pane

0x045a,	// (0x00084178) msg_header_pane_g1

0x451c,	// (0x0008823a) postcard_address2_pane_ParamLimits

0x451c,	// (0x0008823a) postcard_address2_pane

0x452e,	// (0x0008824c) postcard_message2_pane_ParamLimits

0x452e,	// (0x0008824c) postcard_message2_pane

0x5000,	// (0x00088d1e) message2_row_pane_ParamLimits

0x5000,	// (0x00088d1e) message2_row_pane

0x501c,	// (0x00088d3a) address2_row_pane_ParamLimits

0x501c,	// (0x00088d3a) address2_row_pane

0xd02f,	// (0x00090d4d) postcard_message2_row_pane_g1

0xd037,	// (0x00090d55) postcard_message2_row_pane_t1

0xd02f,	// (0x00090d4d) address2_row_pane_g1

0xd037,	// (0x00090d55) address2_row_pane_t1

0x266b,	// (0x00086389) aid_size_cell_vorec

0x17cf,	// (0x000854ed) main_rss_pane

0x502f,	// (0x00088d4d) rss_list_single_pane_ParamLimits

0x502f,	// (0x00088d4d) rss_list_single_pane

0xd045,	// (0x00090d63) rss_list_single_pane_t1

0xd053,	// (0x00090d71) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0009331f) rss_list_single_pane_t

0x17cf,	// (0x000854ed) main_camera2_pane

0x17cf,	// (0x000854ed) main_video2_pane

0x5298,	// (0x00088fb6) cams_zoom_pane_cp2_ParamLimits

0x5298,	// (0x00088fb6) cams_zoom_pane_cp2

0x52b8,	// (0x00088fd6) image2_vga_pane_ParamLimits

0x52b8,	// (0x00088fd6) image2_vga_pane

0x5309,	// (0x00089027) main_camera2_pane_g1_ParamLimits

0x5309,	// (0x00089027) main_camera2_pane_g1

0x5329,	// (0x00089047) main_camera2_pane_g2_ParamLimits

0x5329,	// (0x00089047) main_camera2_pane_g2

0x5349,	// (0x00089067) main_camera2_pane_g3_ParamLimits

0x5349,	// (0x00089067) main_camera2_pane_g3

0x5369,	// (0x00089087) main_camera2_pane_g4_ParamLimits

0x5369,	// (0x00089087) main_camera2_pane_g4

0x5389,	// (0x000890a7) main_camera2_pane_g5_ParamLimits

0x5389,	// (0x000890a7) main_camera2_pane_g5

0x53a9,	// (0x000890c7) main_camera2_pane_g6_ParamLimits

0x53a9,	// (0x000890c7) main_camera2_pane_g6

0x53c9,	// (0x000890e7) main_camera2_pane_g7_ParamLimits

0x53c9,	// (0x000890e7) main_camera2_pane_g7

0x53e9,	// (0x00089107) main_camera2_pane_g8_ParamLimits

0x53e9,	// (0x00089107) main_camera2_pane_g8

0x0008,

0xf622,	// (0x00093340) main_camera2_pane_g_ParamLimits

0xf622,	// (0x00093340) main_camera2_pane_g

0x5429,	// (0x00089147) main_camera2_pane_t1_ParamLimits

0x5429,	// (0x00089147) main_camera2_pane_t1

0x545e,	// (0x0008917c) main_camera2_pane_t2_ParamLimits

0x545e,	// (0x0008917c) main_camera2_pane_t2

0x5484,	// (0x000891a2) main_camera2_pane_t3_ParamLimits

0x5484,	// (0x000891a2) main_camera2_pane_t3

0x54e2,	// (0x00089200) main_camera2_pane_t4_ParamLimits

0x54e2,	// (0x00089200) main_camera2_pane_t4

0x0006,

0xf635,	// (0x00093353) main_camera2_pane_t_ParamLimits

0xf635,	// (0x00093353) main_camera2_pane_t

0x5574,	// (0x00089292) cams_zoom_pane_cp4_ParamLimits

0x5574,	// (0x00089292) cams_zoom_pane_cp4

0x558a,	// (0x000892a8) image2_cif_pane_ParamLimits

0x558a,	// (0x000892a8) image2_cif_pane

0x55b5,	// (0x000892d3) image2_subqcif_pane_ParamLimits

0x55b5,	// (0x000892d3) image2_subqcif_pane

0x55cf,	// (0x000892ed) main_video2_pane_g1_ParamLimits

0x55cf,	// (0x000892ed) main_video2_pane_g1

0x55e9,	// (0x00089307) main_video2_pane_g2_ParamLimits

0x55e9,	// (0x00089307) main_video2_pane_g2

0x55ff,	// (0x0008931d) main_video2_pane_g3_ParamLimits

0x55ff,	// (0x0008931d) main_video2_pane_g3

0x5615,	// (0x00089333) main_video2_pane_g4_ParamLimits

0x5615,	// (0x00089333) main_video2_pane_g4

0x562b,	// (0x00089349) main_video2_pane_g5_ParamLimits

0x562b,	// (0x00089349) main_video2_pane_g5

0x5641,	// (0x0008935f) main_video2_pane_g6_ParamLimits

0x5641,	// (0x0008935f) main_video2_pane_g6

0x0005,

0xf644,	// (0x00093362) main_video2_pane_g_ParamLimits

0xf644,	// (0x00093362) main_video2_pane_g

0x565b,	// (0x00089379) main_video2_pane_t1_ParamLimits

0x565b,	// (0x00089379) main_video2_pane_t1

0x567f,	// (0x0008939d) main_video2_pane_t2_ParamLimits

0x567f,	// (0x0008939d) main_video2_pane_t2

0x56cd,	// (0x000893eb) main_video2_pane_t3_ParamLimits

0x56cd,	// (0x000893eb) main_video2_pane_t3

0x0002,

0xf651,	// (0x0009336f) main_video2_pane_t_ParamLimits

0xf651,	// (0x0009336f) main_video2_pane_t

0x4b4c,	// (0x0008886a) call_muted_g2

0x0001,

0xf5f3,	// (0x00093311) call_muted_g

0x17cf,	// (0x000854ed) main_mup2_pane

0x5711,	// (0x0008942f) main_mup2_pane_g1_ParamLimits

0x5711,	// (0x0008942f) main_mup2_pane_g1

0x571d,	// (0x0008943b) main_mup2_pane_g2_ParamLimits

0x571d,	// (0x0008943b) main_mup2_pane_g2

0xd1e5,	// (0x00090f03) main_mup_pane_g13_cp1

0xd1ed,	// (0x00090f0b) mup_volume_pane_cp1

0x5739,	// (0x00089457) main_mup2_pane_g4_ParamLimits

0x5739,	// (0x00089457) main_mup2_pane_g4

0x574b,	// (0x00089469) main_mup2_pane_g5_ParamLimits

0x574b,	// (0x00089469) main_mup2_pane_g5

0x575d,	// (0x0008947b) main_mup2_pane_g6_ParamLimits

0x575d,	// (0x0008947b) main_mup2_pane_g6

0x576f,	// (0x0008948d) main_mup2_pane_g7_ParamLimits

0x576f,	// (0x0008948d) main_mup2_pane_g7

0x0006,

0xf658,	// (0x00093376) main_mup2_pane_g_ParamLimits

0xf658,	// (0x00093376) main_mup2_pane_g

0x5787,	// (0x000894a5) main_mup2_pane_t1_ParamLimits

0x5787,	// (0x000894a5) main_mup2_pane_t1

0x579d,	// (0x000894bb) main_mup2_pane_t2_ParamLimits

0x579d,	// (0x000894bb) main_mup2_pane_t2

0x57b3,	// (0x000894d1) main_mup2_pane_t3_ParamLimits

0x57b3,	// (0x000894d1) main_mup2_pane_t3

0x57c9,	// (0x000894e7) main_mup2_pane_t4_ParamLimits

0x57c9,	// (0x000894e7) main_mup2_pane_t4

0x57e1,	// (0x000894ff) main_mup2_pane_t5_ParamLimits

0x57e1,	// (0x000894ff) main_mup2_pane_t5

0x57f9,	// (0x00089517) main_mup2_pane_t6_ParamLimits

0x57f9,	// (0x00089517) main_mup2_pane_t6

0x0005,

0xf667,	// (0x00093385) main_mup2_pane_t_ParamLimits

0xf667,	// (0x00093385) main_mup2_pane_t

0x5829,	// (0x00089547) mup2_visualizer_pane_ParamLimits

0x5829,	// (0x00089547) mup2_visualizer_pane

0x5857,	// (0x00089575) mup_progress_pane_cp_ParamLimits

0x5857,	// (0x00089575) mup_progress_pane_cp

0xd1c7,	// (0x00090ee5) mup_volume_pane_cp_ParamLimits

0xd1c7,	// (0x00090ee5) mup_volume_pane_cp

0x586b,	// (0x00089589) mup2_visualizer_pane_g1_ParamLimits

0x586b,	// (0x00089589) mup2_visualizer_pane_g1

0xd106,	// (0x00090e24) mup2_visualizer_pane_g2_ParamLimits

0xd106,	// (0x00090e24) mup2_visualizer_pane_g2

0x5882,	// (0x000895a0) mup2_visualizer_pane_g3_ParamLimits

0x5882,	// (0x000895a0) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x00093392) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x00093392) mup2_visualizer_pane_g

0xbea0,	// (0x0008fbbe) aid_size_cell_fmradio

0x4cfe,	// (0x00088a1c) aid_height_parent_landcape

0x2f88,	// (0x00086ca6) wml_content_pane_cp

0x2f90,	// (0x00086cae) wml_tabs_pane

0x2f99,	// (0x00086cb7) popup_wml_miniature_window

0x2fa1,	// (0x00086cbf) scroll_pane_cp021

0x2fb5,	// (0x00086cd3) wml_content_pane_comp8

0x17cf,	// (0x000854ed) bg_popup_sub_pane_cp05

0xd124,	// (0x00090e42) popup_wml_miniature_window_g1

0xd12c,	// (0x00090e4a) wml_miniature_view_pane

0x588e,	// (0x000895ac) aid_size_wml_view

0x5896,	// (0x000895b4) wml_miniature_view_pane_g1

0x589f,	// (0x000895bd) wml_miniature_view_pane_g2

0x58a8,	// (0x000895c6) wml_miniature_view_pane_g3

0x58b0,	// (0x000895ce) wml_miniature_view_pane_g4

0x58b8,	// (0x000895d6) wml_miniature_view_pane_g5

0x58c0,	// (0x000895de) wml_miniature_view_pane_g6

0x58c8,	// (0x000895e6) wml_miniature_view_pane_g7

0x58d0,	// (0x000895ee) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x00093399) wml_miniature_view_pane_g

0xd134,	// (0x00090e52) background_graphic_ParamLimits

0xd134,	// (0x00090e52) background_graphic

0xd140,	// (0x00090e5e) wml_tabs_2_pane

0xd149,	// (0x00090e67) wml_tabs_3_pane_ParamLimits

0xd149,	// (0x00090e67) wml_tabs_3_pane

0xd15b,	// (0x00090e79) wml_tabs_4_pane_ParamLimits

0xd15b,	// (0x00090e79) wml_tabs_4_pane

0xd171,	// (0x00090e8f) wml_tabs_5_pane_ParamLimits

0xd171,	// (0x00090e8f) wml_tabs_5_pane

0xd18b,	// (0x00090ea9) wml_tabs_pane_g2_ParamLimits

0xd18b,	// (0x00090ea9) wml_tabs_pane_g2

0xd19f,	// (0x00090ebd) wml_tabs_pane_g3_ParamLimits

0xd19f,	// (0x00090ebd) wml_tabs_pane_g3

0x58d8,	// (0x000895f6) wml_tabs_2_active_pane_ParamLimits

0x58d8,	// (0x000895f6) wml_tabs_2_active_pane

0x58ec,	// (0x0008960a) wml_tabs_2_passive_pane_ParamLimits

0x58ec,	// (0x0008960a) wml_tabs_2_passive_pane

0x5900,	// (0x0008961e) wml_tabs_3_active_pane_cp_ParamLimits

0x5900,	// (0x0008961e) wml_tabs_3_active_pane_cp

0x5915,	// (0x00089633) wml_tabs_3_passive_pane_ParamLimits

0x5915,	// (0x00089633) wml_tabs_3_passive_pane

0x5928,	// (0x00089646) wml_tabs_3_passive_pane_cp_ParamLimits

0x5928,	// (0x00089646) wml_tabs_3_passive_pane_cp

0x593f,	// (0x0008965d) tabs_4_active_pane

0x5947,	// (0x00089665) tabs_4_passive_pane

0x5951,	// (0x0008966f) tabs_4_passive_pane_cp

0x5959,	// (0x00089677) tabs_4_passive_pane_cp2

0x4a19,	// (0x00088737) aid_height_text

0x4182,	// (0x00087ea0) mup_volume_cont_pane_ParamLimits

0x4182,	// (0x00087ea0) mup_volume_cont_pane

0x1ac0,	// (0x000857de) aid_size_cell_pinb

0x1aca,	// (0x000857e8) aid_size_list_pinb

0x5843,	// (0x00089561) mup2_volume_cont_pane_ParamLimits

0x5843,	// (0x00089561) mup2_volume_cont_pane

0xd1b3,	// (0x00090ed1) mup2_volume_cont_pane_g1_ParamLimits

0xd1b3,	// (0x00090ed1) mup2_volume_cont_pane_g1

0x10d7,	// (0x00084df5) aid_size_cell_touch_ParamLimits

0x10d7,	// (0x00084df5) aid_size_cell_touch

0x1312,	// (0x00085030) touch_pane_ParamLimits

0x1312,	// (0x00085030) touch_pane

0x10cd,	// (0x00084deb) main_rss2_pane

0xd1f5,	// (0x00090f13) listscroll_rss2_pane

0xd1fe,	// (0x00090f1c) rss2_navigation_pane

0xd206,	// (0x00090f24) list_rss2_pane

0xb91f,	// (0x0008f63d) scroll_pane_cp22

0xd20e,	// (0x00090f2c) rss2_navigation_pane_g1

0xd217,	// (0x00090f35) rss2_navigation_pane_g2

0xd21f,	// (0x00090f3d) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000933aa) rss2_navigation_pane_g

0xd227,	// (0x00090f45) rss2_navigation_pane_t1

0x5963,	// (0x00089681) rss2_list_single_pane_ParamLimits

0x5963,	// (0x00089681) rss2_list_single_pane

0xd235,	// (0x00090f53) rss2_list_single_pane_t2

0xd243,	// (0x00090f61) rss2_list_single_pane_t3_ParamLimits

0xd243,	// (0x00090f61) rss2_list_single_pane_t3

0xd260,	// (0x00090f7e) rss2_list_single_pane_t4

0x3bac,	// (0x000878ca) smil_status_pane_g1

0x12f8,	// (0x00085016) main_image2_pane_ParamLimits

0x12f8,	// (0x00085016) main_image2_pane

0x5409,	// (0x00089127) main_camera2_pane_g9_ParamLimits

0x5409,	// (0x00089127) main_camera2_pane_g9

0x5537,	// (0x00089255) main_camera2_pane_t5_ParamLimits

0x5537,	// (0x00089255) main_camera2_pane_t5

0xd0d6,	// (0x00090df4) main_camera2_pane_t6_ParamLimits

0xd0d6,	// (0x00090df4) main_camera2_pane_t6

0x5978,	// (0x00089696) main_image2_pane_g1_ParamLimits

0x5978,	// (0x00089696) main_image2_pane_g1

0x4755,	// (0x00088473) smil2_video_pane_ParamLimits

0x4755,	// (0x00088473) smil2_video_pane

0xb1bc,	// (0x0008eeda) aid_zoom_text_primary_cp

0xb1fc,	// (0x0008ef1a) popup_preview_fixed_window

0x2e80,	// (0x00086b9e) im_reading_pane_g1

0x5280,	// (0x00088f9e) cams2_bc_adjust_pane_cp_ParamLimits

0x5280,	// (0x00088f9e) cams2_bc_adjust_pane_cp

0x5566,	// (0x00089284) cams2_bc_adjust_pane_ParamLimits

0x5566,	// (0x00089284) cams2_bc_adjust_pane

0xd26e,	// (0x00090f8c) cams2_bc_adjust_pane_g1

0xd276,	// (0x00090f94) cams2_slider_pane

0xd27f,	// (0x00090f9d) cams2_slider_pane_g1

0xd288,	// (0x00090fa6) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000933b1) cams2_slider_pane_g

0x1c0f,	// (0x0008592d) calc_display_pane_ParamLimits

0x1c37,	// (0x00085955) calc_paper_pane_ParamLimits

0x1c5a,	// (0x00085978) grid_calc_pane_ParamLimits

0xb7cf,	// (0x0008f4ed) popup_clock_digital_window_t1_ParamLimits

0xbe3d,	// (0x0008fb5b) main_image_pane_t1

0x1bf1,	// (0x0008590f) aid_size_cell_calc_ParamLimits

0x1bf1,	// (0x0008590f) aid_size_cell_calc

0x4d44,	// (0x00088a62) popup_blid_sat_info2_window_ParamLimits

0x4d44,	// (0x00088a62) popup_blid_sat_info2_window

0xd2aa,	// (0x00090fc8) aid_size_cell_blid

0xd2b2,	// (0x00090fd0) bg_popup_window_pane_cp07

0xd2d5,	// (0x00090ff3) grid_popup_blid_pane

0xd2df,	// (0x00090ffd) heading_pane_cp05_ParamLimits

0xd2df,	// (0x00090ffd) heading_pane_cp05

0xd3a9,	// (0x000910c7) cell_popup_blid_pane_ParamLimits

0xd3a9,	// (0x000910c7) cell_popup_blid_pane

0xd3cd,	// (0x000910eb) cell_popup_blid_pane_g1

0xd3d5,	// (0x000910f3) cell_popup_blid_pane_t1

0x5813,	// (0x00089531) mup2_indicator_pane_ParamLimits

0x5813,	// (0x00089531) mup2_indicator_pane

0x2673,	// (0x00086391) mup2_visualizer_osc_pane

0xd112,	// (0x00090e30) mup2_visualizer_spec_pane_ParamLimits

0xd112,	// (0x00090e30) mup2_visualizer_spec_pane

0x598e,	// (0x000896ac) mup2_spec_half_pane

0x5997,	// (0x000896b5) mup2_spec_half_pane_cp

0x599f,	// (0x000896bd) mup2_spec_bar_pane_ParamLimits

0x599f,	// (0x000896bd) mup2_spec_bar_pane

0xd061,	// (0x00090d7f) mup2_spec_bar_pane_g1

0xd06b,	// (0x00090d89) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00093324) mup2_spec_bar_pane_g

0x59bf,	// (0x000896dd) mup2_osc_middle_pane

0xd07d,	// (0x00090d9b) mup2_visualizer_osc_pane_g1

0x1384,	// (0x000850a2) popup_number_entry_window_t1_ParamLimits

0x1397,	// (0x000850b5) popup_number_entry_window_t2_ParamLimits

0x13a9,	// (0x000850c7) popup_number_entry_window_t3_ParamLimits

0x13bb,	// (0x000850d9) popup_number_entry_window_t5_ParamLimits

0x13bb,	// (0x000850d9) popup_number_entry_window_t5

0xf0ca,	// (0x00092de8) popup_number_entry_window_t_ParamLimits

0x13ef,	// (0x0008510d) text_title_cp2_ParamLimits

0xbd17,	// (0x0008fa35) aid_hotspot_pointer_text2_pane

0xbd3d,	// (0x0008fa5b) main_viewer_pane_g9_ParamLimits

0xbd3d,	// (0x0008fa5b) main_viewer_pane_g9

0xb37f,	// (0x0008f09d) cale_month_pane_t1_ParamLimits

0xb3ea,	// (0x0008f108) bg_cale_pane_ParamLimits

0xb402,	// (0x0008f120) list_cale_pane_ParamLimits

0xb413,	// (0x0008f131) listscroll_cale_day_pane_t1

0xb425,	// (0x0008f143) scroll_pane_cp09_ParamLimits

0x41b4,	// (0x00087ed2) main_mup_eq_pane_t1_ParamLimits

0x41b4,	// (0x00087ed2) main_mup_eq_pane_t1

0x41ce,	// (0x00087eec) main_mup_eq_pane_t2_ParamLimits

0x41ce,	// (0x00087eec) main_mup_eq_pane_t2

0x41e8,	// (0x00087f06) main_mup_eq_pane_t3_ParamLimits

0x41e8,	// (0x00087f06) main_mup_eq_pane_t3

0x4204,	// (0x00087f22) main_mup_eq_pane_t4_ParamLimits

0x4204,	// (0x00087f22) main_mup_eq_pane_t4

0x4220,	// (0x00087f3e) main_mup_eq_pane_t5_ParamLimits

0x4220,	// (0x00087f3e) main_mup_eq_pane_t5

0x423c,	// (0x00087f5a) main_mup_eq_pane_t6_ParamLimits

0x423c,	// (0x00087f5a) main_mup_eq_pane_t6

0x4250,	// (0x00087f6e) main_mup_eq_pane_t7_ParamLimits

0x4250,	// (0x00087f6e) main_mup_eq_pane_t7

0x4264,	// (0x00087f82) main_mup_eq_pane_t8_ParamLimits

0x4264,	// (0x00087f82) main_mup_eq_pane_t8

0x4278,	// (0x00087f96) main_mup_eq_pane_t9_ParamLimits

0x4278,	// (0x00087f96) main_mup_eq_pane_t9

0x4292,	// (0x00087fb0) main_mup_eq_pane_t10_ParamLimits

0x4292,	// (0x00087fb0) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00093173) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00093173) main_mup_eq_pane_t

0x4341,	// (0x0008805f) mup_equalizer_pane_cp5_ParamLimits

0x4355,	// (0x00088073) mup_equalizer_pane_cp6_ParamLimits

0x4369,	// (0x00088087) mup_equalizer_pane_cp7_ParamLimits

0x10cd,	// (0x00084deb) main_gallery_pane

0xd086,	// (0x00090da4) smil2_volume_pane

0xd08e,	// (0x00090dac) smil_status_volume_pane_g1_ParamLimits

0xd0a1,	// (0x00090dbf) smil_status_volume_pane_g2_ParamLimits

0xd0b4,	// (0x00090dd2) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x00093329) smil_status_volume_pane_g_ParamLimits

0xd2b2,	// (0x00090fd0) bg_popup_window_pane_cp07_ParamLimits

0xd2c0,	// (0x00090fde) blid_firmament_pane

0x59c8,	// (0x000896e6) aid_size_cell_gallery_ParamLimits

0x59c8,	// (0x000896e6) aid_size_cell_gallery

0x59de,	// (0x000896fc) grid_gallery_pane_ParamLimits

0x59de,	// (0x000896fc) grid_gallery_pane

0x59f7,	// (0x00089715) cell_gallery_pane_ParamLimits

0x59f7,	// (0x00089715) cell_gallery_pane

0xd3e3,	// (0x00091101) bg_cell_gallery_focus_pane_ParamLimits

0xd3e3,	// (0x00091101) bg_cell_gallery_focus_pane

0xd3f5,	// (0x00091113) cell_gallery_pane_g1_ParamLimits

0xd3f5,	// (0x00091113) cell_gallery_pane_g1

0x5a40,	// (0x0008975e) cell_gallery_pane_g2_ParamLimits

0x5a40,	// (0x0008975e) cell_gallery_pane_g2

0x5a4d,	// (0x0008976b) cell_gallery_pane_g3_ParamLimits

0x5a4d,	// (0x0008976b) cell_gallery_pane_g3

0xd401,	// (0x0009111f) cell_gallery_pane_g4_ParamLimits

0xd401,	// (0x0009111f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000933d7) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000933d7) cell_gallery_pane_g

0xd40d,	// (0x0009112b) bg_cell_gallery_focus_pane_g1

0xd415,	// (0x00091133) bg_cell_gallery_focus_pane_g2

0xd41d,	// (0x0009113b) bg_cell_gallery_focus_pane_g3

0xd425,	// (0x00091143) bg_cell_gallery_focus_pane_g4

0xd42d,	// (0x0009114b) bg_cell_gallery_focus_pane_g5

0xd435,	// (0x00091153) bg_cell_gallery_focus_pane_g6

0xd43d,	// (0x0009115b) bg_cell_gallery_focus_pane_g7

0xd445,	// (0x00091163) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000933e0) bg_cell_gallery_focus_pane_g

0xd44d,	// (0x0009116b) aid_firma_cardinal

0xd461,	// (0x0009117f) blid_firmament_pane_t1

0xd478,	// (0x00091196) blid_firmament_pane_t2

0xd48f,	// (0x000911ad) blid_firmament_pane_t3

0xd4a6,	// (0x000911c4) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000933f1) blid_firmament_pane_t

0xd4bd,	// (0x000911db) blid_sat_info_pane

0xd4cd,	// (0x000911eb) blid_sat_info_pane_g1

0xd4cd,	// (0x000911eb) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000933fa) blid_sat_info_pane_g

0xd4d7,	// (0x000911f5) blid_sat_info_pane_t1

0xd4e5,	// (0x00091203) smil2_volume_content_pane

0xd4ee,	// (0x0009120c) smil2_volume_pane_g1

0xd4f6,	// (0x00091214) smil2_volume_content_pane_g1

0xd4ff,	// (0x0009121d) smil2_volume_content_pane_g2

0xd508,	// (0x00091226) smil2_volume_content_pane_g3

0xd511,	// (0x0009122f) smil2_volume_content_pane_g4

0xd51a,	// (0x00091238) smil2_volume_content_pane_g5

0xd523,	// (0x00091241) smil2_volume_content_pane_g6

0xd52c,	// (0x0009124a) smil2_volume_content_pane_g7

0xd535,	// (0x00091253) smil2_volume_content_pane_g8

0xd53e,	// (0x0009125c) smil2_volume_content_pane_g9

0xd547,	// (0x00091265) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000933ff) smil2_volume_content_pane_g

0x2394,	// (0x000860b2) cale_week_day_heading_pane_t1_ParamLimits

0x23be,	// (0x000860dc) cale_week_day_heading_pane_t2_ParamLimits

0x23ed,	// (0x0008610b) cale_week_day_heading_pane_t3_ParamLimits

0x241c,	// (0x0008613a) cale_week_day_heading_pane_t4_ParamLimits

0x244b,	// (0x00086169) cale_week_day_heading_pane_t5_ParamLimits

0x2482,	// (0x000861a0) cale_week_day_heading_pane_t6_ParamLimits

0x24b9,	// (0x000861d7) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00092eef) cale_week_day_heading_pane_t_ParamLimits

0x24e3,	// (0x00086201) bg_cale_side_pane_ParamLimits

0x24f1,	// (0x0008620f) cale_week_time_pane_t1_ParamLimits

0x250b,	// (0x00086229) cale_week_time_pane_t2_ParamLimits

0x2525,	// (0x00086243) cale_week_time_pane_t3_ParamLimits

0x253f,	// (0x0008625d) cale_week_time_pane_t4_ParamLimits

0x2559,	// (0x00086277) cale_week_time_pane_t5_ParamLimits

0x2573,	// (0x00086291) cale_week_time_pane_t6_ParamLimits

0x258d,	// (0x000862ab) cale_week_time_pane_t7_ParamLimits

0x25a7,	// (0x000862c5) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00092efe) cale_week_time_pane_t_ParamLimits

0x25c1,	// (0x000862df) cell_cale_week_pane_g2_ParamLimits

0x24e3,	// (0x00086201) bg_cale_side_pane_cp01_ParamLimits

0x39b3,	// (0x000876d1) cale_month_week_pane_t1_ParamLimits

0x39cc,	// (0x000876ea) cale_month_week_pane_t2_ParamLimits

0x39e5,	// (0x00087703) cale_month_week_pane_t3_ParamLimits

0x39fe,	// (0x0008771c) cale_month_week_pane_t4_ParamLimits

0x3a17,	// (0x00087735) cale_month_week_pane_t5_ParamLimits

0x3a30,	// (0x0008774e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00092fd3) cale_month_week_pane_t_ParamLimits

0xb391,	// (0x0008f0af) cell_cale_month_pane_g1_ParamLimits

0x10cd,	// (0x00084deb) main_cale_event_viewer_pane

0x10cd,	// (0x00084deb) listscroll_cale_event_viewer_pane

0xd550,	// (0x0009126e) list_cale_ev_pane

0xd558,	// (0x00091276) scroll_pane_cp023

0xd564,	// (0x00091282) field_cale_ev_pane_ParamLimits

0xd564,	// (0x00091282) field_cale_ev_pane

0xd582,	// (0x000912a0) field_cale_ev_content_pane_ParamLimits

0xd582,	// (0x000912a0) field_cale_ev_content_pane

0xd58e,	// (0x000912ac) field_cale_ev_pane_g1_ParamLimits

0xd58e,	// (0x000912ac) field_cale_ev_pane_g1

0xd59a,	// (0x000912b8) field_cale_ev_pane_g2_ParamLimits

0xd59a,	// (0x000912b8) field_cale_ev_pane_g2

0xd5b2,	// (0x000912d0) field_cale_ev_pane_g3_ParamLimits

0xd5b2,	// (0x000912d0) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x00093414) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x00093414) field_cale_ev_pane_g

0xd5ca,	// (0x000912e8) field_cale_ev_pane_t1_ParamLimits

0xd5ca,	// (0x000912e8) field_cale_ev_pane_t1

0xd5e1,	// (0x000912ff) field_cale_ev_content_pane_t1_ParamLimits

0xd5e1,	// (0x000912ff) field_cale_ev_content_pane_t1

0xbce1,	// (0x0008f9ff) bg_button_pane_cp01

0x206c,	// (0x00085d8a) listscroll_cale_week_pane_ParamLimits

0x207e,	// (0x00085d9c) popup_toolbar_window_cp01

0x22d7,	// (0x00085ff5) listscroll_cale_week_pane_t1_ParamLimits

0x206c,	// (0x00085d8a) listscroll_cale_day_pane_ParamLimits

0x207e,	// (0x00085d9c) popup_toolbar_window_cp02

0xb413,	// (0x0008f131) listscroll_cale_day_pane_t1_ParamLimits

0x206c,	// (0x00085d8a) main_cale_month_pane_ParamLimits

0xcfff,	// (0x00090d1d) popup_toolbar_window_cp03_ParamLimits

0xcfff,	// (0x00090d1d) popup_toolbar_window_cp03

0x461d,	// (0x0008833b) main_image_pane_g2_ParamLimits

0x461d,	// (0x0008833b) main_image_pane_g2

0x462e,	// (0x0008834c) main_image_pane_g3_ParamLimits

0x462e,	// (0x0008834c) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00093205) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00093205) main_image_pane_g

0xbe3d,	// (0x0008fb5b) main_image_pane_t1_ParamLimits

0x463f,	// (0x0008835d) main_image_pane_t2_ParamLimits

0x463f,	// (0x0008835d) main_image_pane_t2

0x4651,	// (0x0008836f) main_image_pane_t3_ParamLimits

0x4651,	// (0x0008836f) main_image_pane_t3

0x4679,	// (0x00088397) main_image_pane_t4_ParamLimits

0x4679,	// (0x00088397) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0009320c) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0009320c) main_image_pane_t

0x4699,	// (0x000883b7) popup_image_details_window_cp01

0x46a3,	// (0x000883c1) popup_toobar_trans_pane_cp01_ParamLimits

0x46a3,	// (0x000883c1) popup_toobar_trans_pane_cp01

0x4e23,	// (0x00088b41) popup_image_details_window_ParamLimits

0x4e23,	// (0x00088b41) popup_image_details_window

0xcfd2,	// (0x00090cf0) popup_image_focus_window

0x523a,	// (0x00088f58) camera2_autofocus_pane_ParamLimits

0x523a,	// (0x00088f58) camera2_autofocus_pane

0x10cd,	// (0x00084deb) bg_popup_sub_pane_cp06

0xd5ff,	// (0x0009131d) popup_image_focus_window_g1

0xd607,	// (0x00091325) popup_image_focus_window_g2

0xd60f,	// (0x0009132d) popup_image_focus_window_g3

0xd617,	// (0x00091335) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0009341b) popup_image_focus_window_g

0xd61f,	// (0x0009133d) popup_image_focus_window_t1

0xd62d,	// (0x0009134b) popup_image_focus_window_t2

0xd63d,	// (0x0009135b) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x00093424) popup_image_focus_window_t

0xd64b,	// (0x00091369) camera2_autofocus_pane_g1

0x12f8,	// (0x00085016) bg_tb_trans_pane_cp01

0xd659,	// (0x00091377) popup_image_details_window_g1

0xd66c,	// (0x0009138a) popup_image_details_window_g2

0x0002,

0xf718,	// (0x00093436) popup_image_details_window_g

0xd695,	// (0x000913b3) popup_image_details_window_t1

0xd6a7,	// (0x000913c5) popup_image_details_window_t2

0xd6c0,	// (0x000913de) popup_image_details_window_t3

0xd6d4,	// (0x000913f2) popup_image_details_window_t4

0xd6ef,	// (0x0009140d) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0009343d) popup_image_details_window_t

0x1d82,	// (0x00085aa0) bg_calc_paper_pane_ParamLimits

0x10cd,	// (0x00084deb) grid_highlight_pane_cp013

0xb20e,	// (0x0008ef2c) list_calc_pane_ParamLimits

0xb220,	// (0x0008ef3e) scroll_pane_cp024

0x1d96,	// (0x00085ab4) bg_calc_display_pane_ParamLimits

0x1da2,	// (0x00085ac0) calc_display_pane_t1_ParamLimits

0x1db4,	// (0x00085ad2) calc_display_pane_t2_ParamLimits

0xb228,	// (0x0008ef46) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00092e6f) calc_display_pane_t_ParamLimits

0x1ec1,	// (0x00085bdf) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00092e8c) cell_calc_pane_g

0x1eca,	// (0x00085be8) cell_calc_pane_t1

0x1ed9,	// (0x00085bf7) grid_highlight_pane_cp02_ParamLimits

0x1eef,	// (0x00085c0d) toolbar_button_pane_cp01_ParamLimits

0x1eef,	// (0x00085c0d) toolbar_button_pane_cp01

0xbe82,	// (0x0008fba0) temp_image_control_pane_ParamLimits

0xbe82,	// (0x0008fba0) temp_image_control_pane

0x12f8,	// (0x00085016) main_mp3_pane

0xd709,	// (0x00091427) temp_image_control_pane_g1_ParamLimits

0xd709,	// (0x00091427) temp_image_control_pane_g1

0xd717,	// (0x00091435) temp_image_control_pane_g2_ParamLimits

0xd717,	// (0x00091435) temp_image_control_pane_g2

0xd729,	// (0x00091447) temp_image_control_pane_g3_ParamLimits

0xd729,	// (0x00091447) temp_image_control_pane_g3

0x5a8a,	// (0x000897a8) temp_image_control_pane_g4_ParamLimits

0x5a8a,	// (0x000897a8) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00093448) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00093448) temp_image_control_pane_g

0xd709,	// (0x00091427) main_mp3_pane_g1

0x5a9d,	// (0x000897bb) main_mp3_pane_g2

0x0007,

0xf733,	// (0x00093451) main_mp3_pane_g

0xd76c,	// (0x0009148a) main_mp3_pane_t1

0x278e,	// (0x000864ac) main_camera_pane_g8_ParamLimits

0x278e,	// (0x000864ac) main_camera_pane_g8

0x2936,	// (0x00086654) main_video_pane_g7_ParamLimits

0x2936,	// (0x00086654) main_video_pane_g7

0xd0f4,	// (0x00090e12) main_camera2_pane_t7_ParamLimits

0xd0f4,	// (0x00090e12) main_camera2_pane_t7

0x2f48,	// (0x00086c66) scroll_pane_cp025_ParamLimits

0x2f48,	// (0x00086c66) scroll_pane_cp025

0x2f5c,	// (0x00086c7a) scroll_pane_cp026_ParamLimits

0x2f5c,	// (0x00086c7a) scroll_pane_cp026

0x2f6b,	// (0x00086c89) wml_content_pane_ParamLimits

0x10cd,	// (0x00084deb) main_touch_calib_pane

0x5b71,	// (0x0008988f) main_touch_calib_pane_g1

0x5b83,	// (0x000898a1) main_touch_calib_pane_g2

0x5b95,	// (0x000898b3) main_touch_calib_pane_g3

0x5ba7,	// (0x000898c5) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0009346f) main_touch_calib_pane_g

0x5bb9,	// (0x000898d7) main_touch_calib_pane_t1

0x5bd3,	// (0x000898f1) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x00093478) main_touch_calib_pane_t

0xb9fb,	// (0x0008f719) mup_progress_pane_cp02

0xba30,	// (0x0008f74e) navi_pane_g1

0xbaeb,	// (0x0008f809) navi_pane_mp_t3

0x12f8,	// (0x00085016) main_mp3_pane_ParamLimits

0x4fa8,	// (0x00088cc6) navi_pane_ParamLimits

0xd709,	// (0x00091427) main_mp3_pane_g1_ParamLimits

0x5a9d,	// (0x000897bb) main_mp3_pane_g2_ParamLimits

0x5aab,	// (0x000897c9) main_mp3_pane_g3_ParamLimits

0x5aab,	// (0x000897c9) main_mp3_pane_g3

0x5ab9,	// (0x000897d7) main_mp3_pane_g4_ParamLimits

0x5ab9,	// (0x000897d7) main_mp3_pane_g4

0xd739,	// (0x00091457) main_mp3_pane_g5_ParamLimits

0xd739,	// (0x00091457) main_mp3_pane_g5

0xd747,	// (0x00091465) main_mp3_pane_g6_ParamLimits

0xd747,	// (0x00091465) main_mp3_pane_g6

0xd754,	// (0x00091472) main_mp3_pane_g7_ParamLimits

0xd754,	// (0x00091472) main_mp3_pane_g7

0xd760,	// (0x0009147e) main_mp3_pane_g8_ParamLimits

0xd760,	// (0x0009147e) main_mp3_pane_g8

0xf733,	// (0x00093451) main_mp3_pane_g_ParamLimits

0x5ac5,	// (0x000897e3) main_mp3_pane_t2

0x5ad3,	// (0x000897f1) main_mp3_pane_t3

0xd77a,	// (0x00091498) main_mp3_pane_t4

0xd788,	// (0x000914a6) main_mp3_pane_t5

0x0005,

0xf744,	// (0x00093462) main_mp3_pane_t

0xd796,	// (0x000914b4) mup_progress_pane_cp01

0xb1bc,	// (0x0008eeda) aid_zoom_text_secondary2

0xd550,	// (0x0009126e) list_cale_ev2_pane

0xd558,	// (0x00091276) scroll_pane_cp023_ParamLimits

0x5c29,	// (0x00089947) field_cale_ev2_pane_ParamLimits

0x5c29,	// (0x00089947) field_cale_ev2_pane

0x5c49,	// (0x00089967) field_cale_ev2_pane_g1_ParamLimits

0x5c49,	// (0x00089967) field_cale_ev2_pane_g1

0x5c55,	// (0x00089973) field_cale_ev2_pane_g2_ParamLimits

0x5c55,	// (0x00089973) field_cale_ev2_pane_g2

0x5c6d,	// (0x0008998b) field_cale_ev2_pane_g3_ParamLimits

0x5c6d,	// (0x0008998b) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x00093483) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x00093483) field_cale_ev2_pane_g

0xd7aa,	// (0x000914c8) field_cale_ev2_pane_t1_ParamLimits

0xd7aa,	// (0x000914c8) field_cale_ev2_pane_t1

0xd7c1,	// (0x000914df) field_cale_ev2_pane_t2_ParamLimits

0xd7c1,	// (0x000914df) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0009348c) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0009348c) field_cale_ev2_pane_t

0x44d2,	// (0x000881f0) main_postcard_pane_g5_ParamLimits

0x44d2,	// (0x000881f0) main_postcard_pane_g5

0x44e8,	// (0x00088206) main_postcard_pane_g6_ParamLimits

0x44e8,	// (0x00088206) main_postcard_pane_g6

0x26dc,	// (0x000863fa) camera2_autofocus_pane_cp_ParamLimits

0x26dc,	// (0x000863fa) camera2_autofocus_pane_cp

0x12f8,	// (0x00085016) main_mup3_pane

0x5ca9,	// (0x000899c7) main_mup3_pane_g1_ParamLimits

0x5ca9,	// (0x000899c7) main_mup3_pane_g1

0x5ccb,	// (0x000899e9) main_mup3_pane_g2_ParamLimits

0x5ccb,	// (0x000899e9) main_mup3_pane_g2

0x5d49,	// (0x00089a67) main_mup3_pane_g3_ParamLimits

0x5d49,	// (0x00089a67) main_mup3_pane_g3

0x5d8f,	// (0x00089aad) main_mup3_pane_g4_ParamLimits

0x5d8f,	// (0x00089aad) main_mup3_pane_g4

0x5dd5,	// (0x00089af3) main_mup3_pane_g5_ParamLimits

0x5dd5,	// (0x00089af3) main_mup3_pane_g5

0x5e1b,	// (0x00089b39) main_mup3_pane_g6_ParamLimits

0x5e1b,	// (0x00089b39) main_mup3_pane_g6

0xd7f6,	// (0x00091514) main_mup3_pane_g7_ParamLimits

0xd7f6,	// (0x00091514) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0009349c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0009349c) main_mup3_pane_g

0x5e99,	// (0x00089bb7) main_mup3_pane_t1_ParamLimits

0x5e99,	// (0x00089bb7) main_mup3_pane_t1

0x5f0d,	// (0x00089c2b) main_mup3_pane_t2_ParamLimits

0x5f0d,	// (0x00089c2b) main_mup3_pane_t2

0x5fe1,	// (0x00089cff) main_mup3_pane_t4_ParamLimits

0x5fe1,	// (0x00089cff) main_mup3_pane_t4

0x6037,	// (0x00089d55) main_mup3_pane_t5_ParamLimits

0x6037,	// (0x00089d55) main_mup3_pane_t5

0x60f3,	// (0x00089e11) main_mup3_pane_t6_ParamLimits

0x60f3,	// (0x00089e11) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000934ad) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000934ad) main_mup3_pane_t

0x61ab,	// (0x00089ec9) mup3_progress_pane_ParamLimits

0x61ab,	// (0x00089ec9) mup3_progress_pane

0x6241,	// (0x00089f5f) popup_mup3_control_window_ParamLimits

0x6241,	// (0x00089f5f) popup_mup3_control_window

0xd804,	// (0x00091522) popup_mup3_text_window

0x6273,	// (0x00089f91) mup3_progress_pane_t1

0x6292,	// (0x00089fb0) mup3_progress_pane_t2

0xd80c,	// (0x0009152a) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000934ba) mup3_progress_pane_t

0xd829,	// (0x00091547) mup_progress_pane_cp03

0x10cd,	// (0x00084deb) bg_tb_trans_pane_cp04

0x62b1,	// (0x00089fcf) mup3_volume_pane

0x62b9,	// (0x00089fd7) popup_mup3_control_window_g1

0x62c2,	// (0x00089fe0) mup3_volume_pane_g1

0x62cb,	// (0x00089fe9) mup3_volume_pane_g2

0x62d4,	// (0x00089ff2) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000934c1) mup3_volume_pane_g

0x10cd,	// (0x00084deb) bg_tb_trans_pane_cp03

0xd839,	// (0x00091557) popup_mup3_text_window_g1

0xd841,	// (0x0009155f) popup_mup3_text_window_t1

0x1e90,	// (0x00085bae) list_calc_item_pane_g1_ParamLimits

0xd1dc,	// (0x00090efa) mup_volume_pane_cp_g1

0x5bed,	// (0x0008990b) main_touch_calib_pane_t3

0x5c01,	// (0x0008991f) main_touch_calib_pane_t4

0x5c15,	// (0x00089933) main_touch_calib_pane_t5

0xb198,	// (0x0008eeb6) aid_cell_size_toolbar2

0xb1a0,	// (0x0008eebe) aid_popup3_width_pane

0xb1ac,	// (0x0008eeca) aid_zoom_text_msg_primary

0x26bb,	// (0x000863d9) vorec_t7

0x1dfb,	// (0x00085b19) bg_calc_paper_pane_g1_ParamLimits

0x1e07,	// (0x00085b25) bg_calc_paper_pane_g2_ParamLimits

0x1e13,	// (0x00085b31) bg_calc_paper_pane_g3_ParamLimits

0x1e1f,	// (0x00085b3d) bg_calc_paper_pane_g4_ParamLimits

0x1e2b,	// (0x00085b49) bg_calc_paper_pane_g5_ParamLimits

0x1e37,	// (0x00085b55) bg_calc_paper_pane_g6_ParamLimits

0x1e46,	// (0x00085b64) bg_calc_paper_pane_g7_ParamLimits

0x1e55,	// (0x00085b73) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00092e76) bg_calc_paper_pane_g_ParamLimits

0x1e68,	// (0x00085b86) calc_bg_paper_pane_g9_ParamLimits

0x2833,	// (0x00086551) image_qvga_pane_ParamLimits

0x2833,	// (0x00086551) image_qvga_pane

0x1a2a,	// (0x00085748) bg_popup_sub_pane_cp04_ParamLimits

0xbdb9,	// (0x0008fad7) popup_mup_playback_window_g1_ParamLimits

0xbdc5,	// (0x0008fae3) popup_mup_playback_window_t1_ParamLimits

0xbdda,	// (0x0008faf8) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00093200) popup_mup_playback_window_t_ParamLimits

0x572d,	// (0x0008944b) main_mup2_pane_g3_ParamLimits

0x572d,	// (0x0008944b) main_mup2_pane_g3

0x2bd9,	// (0x000868f7) popup_toolbar_window_cp04

0xc1bc,	// (0x0008feda) popup_call2_audio_second_window_g3_ParamLimits

0xc1bc,	// (0x0008feda) popup_call2_audio_second_window_g3

0xc5c6,	// (0x000902e4) popup_call2_audio_first_window_g4_ParamLimits

0xc5c6,	// (0x000902e4) popup_call2_audio_first_window_g4

0xcc45,	// (0x00090963) popup_call2_audio_in_window_g4_ParamLimits

0xcc45,	// (0x00090963) popup_call2_audio_in_window_g4

0x45ff,	// (0x0008831d) aid_area_sk_bg_cut_ParamLimits

0x45ff,	// (0x0008831d) aid_area_sk_bg_cut

0xbdef,	// (0x0008fb0d) aid_area_sk_bg_cut_2_ParamLimits

0xbdef,	// (0x0008fb0d) aid_area_sk_bg_cut_2

0x5a30,	// (0x0008974e) aid_placing_details_win

0x5a38,	// (0x00089756) aid_placing_details_win_2

0xd64b,	// (0x00091369) camera2_autofocus_pane_g1_ParamLimits

0x129d,	// (0x00084fbb) popup_fixed_preview_cale_window_ParamLimits

0x129d,	// (0x00084fbb) popup_fixed_preview_cale_window

0xbb72,	// (0x0008f890) navi_slider_pane_g3

0xbb7b,	// (0x0008f899) navi_slider_pane_g4

0xbb84,	// (0x0008f8a2) navi_slider_pane_g5

0xbb72,	// (0x0008f890) navi_slider_pane_g6

0xbb8d,	// (0x0008f8ab) navi_slider_pane_g7

0xbcae,	// (0x0008f9cc) mup_scale_pane_g3

0xbcb7,	// (0x0008f9d5) mup_scale_pane_g4

0xbcc0,	// (0x0008f9de) mup_scale_pane_g5

0x437d,	// (0x0008809b) mup_scale_pane_g6

0x4386,	// (0x000880a4) mup_scale_pane_g7

0xbb72,	// (0x0008f890) cams2_slider_pane_g3

0xd291,	// (0x00090faf) cams2_slider_pane_g4

0xd299,	// (0x00090fb7) cams2_slider_pane_g5

0xbb72,	// (0x0008f890) cams2_slider_pane_g6

0xd2a1,	// (0x00090fbf) cams2_slider_pane_g7

0xd4cd,	// (0x000911eb) camera2_autofocus_pane_cp_g1

0xcfa6,	// (0x00090cc4) bg_popup_preview_window_pane_cp02_ParamLimits

0xcfa6,	// (0x00090cc4) bg_popup_preview_window_pane_cp02

0xd84f,	// (0x0009156d) list_fp_cale_pane_ParamLimits

0xd84f,	// (0x0009156d) list_fp_cale_pane

0xd85b,	// (0x00091579) popup_fixed_preview_cale_window_t1_ParamLimits

0xd85b,	// (0x00091579) popup_fixed_preview_cale_window_t1

0x62dd,	// (0x00089ffb) popup_fixed_preview_cale_window_t2_ParamLimits

0x62dd,	// (0x00089ffb) popup_fixed_preview_cale_window_t2

0x62f2,	// (0x0008a010) popup_fixed_preview_cale_window_t3_ParamLimits

0x62f2,	// (0x0008a010) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000934c8) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000934c8) popup_fixed_preview_cale_window_t

0x6307,	// (0x0008a025) list_single_fp_cale_pane_ParamLimits

0x6307,	// (0x0008a025) list_single_fp_cale_pane

0xd879,	// (0x00091597) list_single_fp_cale_pane_g1_ParamLimits

0xd879,	// (0x00091597) list_single_fp_cale_pane_g1

0xd885,	// (0x000915a3) list_single_fp_cale_pane_g2_ParamLimits

0xd885,	// (0x000915a3) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000934cf) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000934cf) list_single_fp_cale_pane_g

0xd89e,	// (0x000915bc) list_single_fp_cale_pane_t1_ParamLimits

0xd89e,	// (0x000915bc) list_single_fp_cale_pane_t1

0xd8b0,	// (0x000915ce) list_single_fp_cale_pane_t2_ParamLimits

0xd8b0,	// (0x000915ce) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000934d6) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000934d6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x10cd,	// (0x00084deb) main_dialer_pane

0x631c,	// (0x0008a03a) aid_cell_size_keypad

0x6326,	// (0x0008a044) dialer_ne_pane

0x632e,	// (0x0008a04c) grid_dialer_command_1_pane

0x6336,	// (0x0008a054) grid_dialer_command_2_pane

0x633e,	// (0x0008a05c) grid_dialer_keypad_pane

0x6350,	// (0x0008a06e) bg_popup_call_pane_cp06_ParamLimits

0x6350,	// (0x0008a06e) bg_popup_call_pane_cp06

0x635c,	// (0x0008a07a) dialer_ne_clear_pane_ParamLimits

0x635c,	// (0x0008a07a) dialer_ne_clear_pane

0xd8e3,	// (0x00091601) dialer_ne_pane_g1

0xd8eb,	// (0x00091609) dialer_ne_pane_t1_ParamLimits

0xd8eb,	// (0x00091609) dialer_ne_pane_t1

0x6368,	// (0x0008a086) dialer_ne_pane_t2_ParamLimits

0x6368,	// (0x0008a086) dialer_ne_pane_t2

0x6392,	// (0x0008a0b0) dialer_ne_pane_t3_ParamLimits

0x6392,	// (0x0008a0b0) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000934db) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000934db) dialer_ne_pane_t

0x63c2,	// (0x0008a0e0) dialer_ne_pane_t3_copy1_ParamLimits

0x63c2,	// (0x0008a0e0) dialer_ne_pane_t3_copy1

0x63f1,	// (0x0008a10f) cell_dialer_keypad_pane_ParamLimits

0x63f1,	// (0x0008a10f) cell_dialer_keypad_pane

0x6408,	// (0x0008a126) cell_dialer_command_1_pane_ParamLimits

0x6408,	// (0x0008a126) cell_dialer_command_1_pane

0x641e,	// (0x0008a13c) cell_dialer_command_2_pane_ParamLimits

0x641e,	// (0x0008a13c) cell_dialer_command_2_pane

0xd8fd,	// (0x0009161b) bg_button_pane_cp02_ParamLimits

0xd8fd,	// (0x0009161b) bg_button_pane_cp02

0x642d,	// (0x0008a14b) cell_dialer_keypad_pane_g1_ParamLimits

0x642d,	// (0x0008a14b) cell_dialer_keypad_pane_g1

0xd8fd,	// (0x0009161b) bg_button_pane_cp03_ParamLimits

0xd8fd,	// (0x0009161b) bg_button_pane_cp03

0x6441,	// (0x0008a15f) cell_dialer_command_1_pane_g1_ParamLimits

0x6441,	// (0x0008a15f) cell_dialer_command_1_pane_g1

0xd909,	// (0x00091627) bg_button_pane_cp04

0x6455,	// (0x0008a173) cell_dialer_command_2_pane_g1

0x2673,	// (0x00086391) bg_button_pane_cp06

0xd911,	// (0x0009162f) dialer_ne_clear_pane_g1

0xba3c,	// (0x0008f75a) navi_pane_g2

0xba6a,	// (0x0008f788) navi_pane_g3

0x0002,

0xf3e5,	// (0x00093103) navi_pane_g

0xbaf9,	// (0x0008f817) navi_pane_mv_g2

0xbb20,	// (0x0008f83e) navi_pane_mv_g5

0x3f41,	// (0x00087c5f) navi_pane_mv_t1

0x1d96,	// (0x00085ab4) main_clock2_pane

0x64a2,	// (0x0008a1c0) main_clock2_list_pane_ParamLimits

0x64a2,	// (0x0008a1c0) main_clock2_list_pane

0x64da,	// (0x0008a1f8) main_clock2_pane_t1_ParamLimits

0x64da,	// (0x0008a1f8) main_clock2_pane_t1

0x6516,	// (0x0008a234) main_clock2_pane_t2_ParamLimits

0x6516,	// (0x0008a234) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000934e7) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000934e7) main_clock2_pane_t

0x65b4,	// (0x0008a2d2) popup_clock_analogue_window_cp03_ParamLimits

0x65b4,	// (0x0008a2d2) popup_clock_analogue_window_cp03

0x65d9,	// (0x0008a2f7) popup_clock_digital_window_cp02_ParamLimits

0x65d9,	// (0x0008a2f7) popup_clock_digital_window_cp02

0x664a,	// (0x0008a368) main_clock2_list_single_pane_ParamLimits

0x664a,	// (0x0008a368) main_clock2_list_single_pane

0x2673,	// (0x00086391) list_highlight_pane_cp05

0xd94f,	// (0x0009166d) main_clock2_list_single_pane_t1

0x2bd9,	// (0x000868f7) popup_toolbar_window_cp04_ParamLimits

0x5a5a,	// (0x00089778) camera2_autofocus_pane_g2_ParamLimits

0x5a5a,	// (0x00089778) camera2_autofocus_pane_g2

0x5a66,	// (0x00089784) camera2_autofocus_pane_g3_ParamLimits

0x5a66,	// (0x00089784) camera2_autofocus_pane_g3

0x5a72,	// (0x00089790) camera2_autofocus_pane_g4_ParamLimits

0x5a72,	// (0x00089790) camera2_autofocus_pane_g4

0x5a7e,	// (0x0008979c) camera2_autofocus_pane_g5_ParamLimits

0x5a7e,	// (0x0008979c) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0009342b) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0009342b) camera2_autofocus_pane_g

0xd7d6,	// (0x000914f4) camera2_autofocus_pane_cp_g2

0xd7de,	// (0x000914fc) camera2_autofocus_pane_cp_g3

0xd7e6,	// (0x00091504) camera2_autofocus_pane_cp_g4

0xd7ee,	// (0x0009150c) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x00093491) camera2_autofocus_pane_cp_g

0x6348,	// (0x0008a066) popup_dialer_spcha_window

0x10cd,	// (0x00084deb) bg_popup_sub_pane_cp07

0xd95d,	// (0x0009167b) list_spcha_pane

0xd965,	// (0x00091683) list_single_spcha_pane_ParamLimits

0xd965,	// (0x00091683) list_single_spcha_pane

0x10cd,	// (0x00084deb) list_highlight_pane_cp06

0xd976,	// (0x00091694) list_single_spcha_pane_t1

0xc9ef,	// (0x0009070d) popup_call2_audio_out_window_g4_ParamLimits

0xc9ef,	// (0x0009070d) popup_call2_audio_out_window_g4

0x10cd,	// (0x00084deb) main_imed2_pane

0xcfda,	// (0x00090cf8) popup_imed_adjust2_window

0x4e3b,	// (0x00088b59) popup_imed_trans_window_ParamLimits

0x4e3b,	// (0x00088b59) popup_imed_trans_window

0xd30b,	// (0x00091029) popup_blid_sat_info2_window_t1

0xd319,	// (0x00091037) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000933c0) popup_blid_sat_info2_window_t

0x66f3,	// (0x0008a411) aid_size_cell_colour_35

0x6713,	// (0x0008a431) aid_size_cell_colour_112

0x6733,	// (0x0008a451) aid_size_cell_effect

0xcfb2,	// (0x00090cd0) bg_tb_trans_pane_cp02

0xb51c,	// (0x0008f23a) heading_imed_pane

0x6753,	// (0x0008a471) listscroll_imed_pane

0xd984,	// (0x000916a2) heading_imed_pane_g1

0xd98c,	// (0x000916aa) heading_imed_pane_t1

0xd99a,	// (0x000916b8) grid_imed_colour_35_pane_ParamLimits

0xd99a,	// (0x000916b8) grid_imed_colour_35_pane

0x675f,	// (0x0008a47d) grid_imed_effect_pane

0xd9b1,	// (0x000916cf) list_imed_aspect_pane

0x6775,	// (0x0008a493) scroll_pane_cp027_ParamLimits

0x6775,	// (0x0008a493) scroll_pane_cp027

0x6786,	// (0x0008a4a4) cell_imed_effect_pane_ParamLimits

0x6786,	// (0x0008a4a4) cell_imed_effect_pane

0xd9b9,	// (0x000916d7) cell_imed_colour_pane_ParamLimits

0xd9b9,	// (0x000916d7) cell_imed_colour_pane

0xd9fb,	// (0x00091719) cell_imed_colour_pane_g1_ParamLimits

0xd9fb,	// (0x00091719) cell_imed_colour_pane_g1

0xda0c,	// (0x0009172a) hgihlgiht_grid_pane_cp016_ParamLimits

0xda0c,	// (0x0009172a) hgihlgiht_grid_pane_cp016

0x67ad,	// (0x0008a4cb) cell_imed_effect_pane_g1

0x67b5,	// (0x0008a4d3) grid_highlight_pane_cp017

0xda1d,	// (0x0009173b) list_imed_single_pane_ParamLimits

0xda1d,	// (0x0009173b) list_imed_single_pane

0x10cd,	// (0x00084deb) list_highlight_pane_cp07

0xda32,	// (0x00091750) list_imed_aspect_pane_comp1_t1

0xcfb2,	// (0x00090cd0) bg_tb_trans_pane_cp05

0xda54,	// (0x00091772) popup_imed_adjust2_window_g1

0xda7b,	// (0x00091799) popup_imed_adjust2_window_t1

0xda93,	// (0x000917b1) slider_imed_adjust_pane

0xdaa7,	// (0x000917c5) slider_imed_adjust_pane_g1

0xdab7,	// (0x000917d5) slider_imed_adjust_pane_g2

0xdac7,	// (0x000917e5) slider_imed_adjust_pane_g3

0xdad8,	// (0x000917f6) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x00093504) slider_imed_adjust_pane_g

0x67be,	// (0x0008a4dc) aid_size_cell_clipart2

0x67ca,	// (0x0008a4e8) grid_imed_clipart_pane

0xdae9,	// (0x00091807) scroll_pane_cp031

0x67d4,	// (0x0008a4f2) cell_imed_clipart_pane_ParamLimits

0x67d4,	// (0x0008a4f2) cell_imed_clipart_pane

0x67f6,	// (0x0008a514) cell_imed_clipart_pane_g1

0x10cd,	// (0x00084deb) grid_highlight_pane_cp014

0x64b7,	// (0x0008a1d5) main_clock2_pane_g1_ParamLimits

0x64b7,	// (0x0008a1d5) main_clock2_pane_g1

0x65f5,	// (0x0008a313) aid_call2_pane_cp10

0x6607,	// (0x0008a325) aid_call_pane_cp10

0xb99d,	// (0x0008f6bb) popup_clock_analogue_window_cp10_g1

0xb99d,	// (0x0008f6bb) popup_clock_analogue_window_cp10_g2

0x6619,	// (0x0008a337) popup_clock_analogue_window_cp10_g3

0x6619,	// (0x0008a337) popup_clock_analogue_window_cp10_g4

0xb99d,	// (0x0008f6bb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000934f2) popup_clock_analogue_window_cp10_g

0x662b,	// (0x0008a349) popup_clock_analogue_window_cp10_t1

0x665c,	// (0x0008a37a) clock_digital_number_pane_cp10_ParamLimits

0x665c,	// (0x0008a37a) clock_digital_number_pane_cp10

0x6674,	// (0x0008a392) clock_digital_number_pane_cp11_ParamLimits

0x6674,	// (0x0008a392) clock_digital_number_pane_cp11

0x668c,	// (0x0008a3aa) clock_digital_number_pane_cp12_ParamLimits

0x668c,	// (0x0008a3aa) clock_digital_number_pane_cp12

0x66a4,	// (0x0008a3c2) clock_digital_number_pane_cp13_ParamLimits

0x66a4,	// (0x0008a3c2) clock_digital_number_pane_cp13

0x66bc,	// (0x0008a3da) clock_digital_separator_pane_cp10_ParamLimits

0x66bc,	// (0x0008a3da) clock_digital_separator_pane_cp10

0x66d4,	// (0x0008a3f2) popup_clock_digital_window_cp02_t1_ParamLimits

0x66d4,	// (0x0008a3f2) popup_clock_digital_window_cp02_t1

0x1a22,	// (0x00085740) clock_digital_number_pane_cp10_g1

0x1a22,	// (0x00085740) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0009350d) clock_digital_number_pane_cp10_g

0x1a22,	// (0x00085740) clock_digital_separator_pane_cp10_g1

0x1a22,	// (0x00085740) clock_digital_separator_pane_g2_cp10

0xbb28,	// (0x0008f846) navi_pane_vded_g4

0xbb31,	// (0x0008f84f) navi_pane_vded_g5

0xbb3a,	// (0x0008f858) navi_pane_vded_t1

0x10cd,	// (0x00084deb) main_vded_pane

0x67ff,	// (0x0008a51d) main_vded_pane_g1

0x6809,	// (0x0008a527) main_vded_pane_g2

0x6813,	// (0x0008a531) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x00093512) main_vded_pane_g

0x681d,	// (0x0008a53b) main_vded_pane_t1

0x682b,	// (0x0008a549) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00093519) main_vded_pane_t

0x6839,	// (0x0008a557) vded_slider_pane

0x6841,	// (0x0008a55f) vded_video_pane

0xdaf1,	// (0x0009180f) vded_video_pane_g1

0x6849,	// (0x0008a567) vded_video_pane_g2

0xd4cd,	// (0x000911eb) vded_video_pane_g3

0x0002,

0xf800,	// (0x0009351e) vded_video_pane_g

0xdafb,	// (0x00091819) vded_slider_pane_g1

0xd1dc,	// (0x00090efa) vded_slider_pane_g2

0xdb04,	// (0x00091822) vded_slider_pane_g3

0xdb0d,	// (0x0009182b) vded_slider_pane_g4

0xdb16,	// (0x00091834) vded_slider_pane_g5

0x0004,

0xf807,	// (0x00093525) vded_slider_pane_g

0x6229,	// (0x00089f47) mup3_rocker_pane_ParamLimits

0x6229,	// (0x00089f47) mup3_rocker_pane

0x6852,	// (0x0008a570) mup3_control_keys_pane_g1

0x685a,	// (0x0008a578) mup3_control_keys_pane_g2

0x6862,	// (0x0008a580) mup3_control_keys_pane_g3

0x686a,	// (0x0008a588) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x00093530) mup3_control_keys_pane_g

0x12d4,	// (0x00084ff2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x12d4,	// (0x00084ff2) popup_toolbar2_fixed_window_cp01

0x625d,	// (0x00089f7b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x625d,	// (0x00089f7b) popup_toolbar2_fixed_window_cp02

0xc32e,	// (0x0009004c) popup_call2_audio_second_window_t4_ParamLimits

0xc32e,	// (0x0009004c) popup_call2_audio_second_window_t4

0xc85c,	// (0x0009057a) popup_call2_audio_first_window_t6_ParamLimits

0xc85c,	// (0x0009057a) popup_call2_audio_first_window_t6

0xcaf2,	// (0x00090810) popup_call2_audio_out_window_t6_ParamLimits

0xcaf2,	// (0x00090810) popup_call2_audio_out_window_t6

0x10cd,	// (0x00084deb) main_vitu_pane

0x687a,	// (0x0008a598) aid_size_cell_itu_ParamLimits

0x687a,	// (0x0008a598) aid_size_cell_itu

0x12f8,	// (0x00085016) bg_popup_window_pane_cp08_ParamLimits

0x12f8,	// (0x00085016) bg_popup_window_pane_cp08

0x6890,	// (0x0008a5ae) field_vitu_entry_pane_ParamLimits

0x6890,	// (0x0008a5ae) field_vitu_entry_pane

0x68a7,	// (0x0008a5c5) grid_vitu_function_pane_ParamLimits

0x68a7,	// (0x0008a5c5) grid_vitu_function_pane

0x68c2,	// (0x0008a5e0) grid_vitu_itu_pane_ParamLimits

0x68c2,	// (0x0008a5e0) grid_vitu_itu_pane

0x68e0,	// (0x0008a5fe) cell_vitu_itu_pane_ParamLimits

0x68e0,	// (0x0008a5fe) cell_vitu_itu_pane

0x6902,	// (0x0008a620) cell_vitu_function_pane_ParamLimits

0x6902,	// (0x0008a620) cell_vitu_function_pane

0x12f8,	// (0x00085016) bg_popup_sub_pane_cp08_ParamLimits

0x12f8,	// (0x00085016) bg_popup_sub_pane_cp08

0x691b,	// (0x0008a639) field_vitu_entry_pane_t1_ParamLimits

0x691b,	// (0x0008a639) field_vitu_entry_pane_t1

0xdb37,	// (0x00091855) field_vitu_entry_pane_t2_ParamLimits

0xdb37,	// (0x00091855) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0009353e) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0009353e) field_vitu_entry_pane_t

0xdb54,	// (0x00091872) bg_button_pane_cp05_ParamLimits

0xdb54,	// (0x00091872) bg_button_pane_cp05

0x6939,	// (0x0008a657) cell_vitu_itu_pane_g1

0x6951,	// (0x0008a66f) cell_vitu_itu_pane_t1_ParamLimits

0x6951,	// (0x0008a66f) cell_vitu_itu_pane_t1

0x6963,	// (0x0008a681) cell_vitu_itu_pane_t2_ParamLimits

0x6963,	// (0x0008a681) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x00093543) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x00093543) cell_vitu_itu_pane_t

0xdb62,	// (0x00091880) bg_button_pane_cp07

0x6998,	// (0x0008a6b6) cell_vitu_function_pane_g1

0xb206,	// (0x0008ef24) main_calc_pane_g1

0x10fb,	// (0x00084e19) aid_visual_content_pane

0x10cd,	// (0x00084deb) main_vradio_pane

0x69a1,	// (0x0008a6bf) main_vradio_pane_g1_ParamLimits

0x69a1,	// (0x0008a6bf) main_vradio_pane_g1

0xdb6c,	// (0x0009188a) main_vradio_pane_g2_ParamLimits

0xdb6c,	// (0x0009188a) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0009354a) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0009354a) main_vradio_pane_g

0x69ba,	// (0x0008a6d8) main_vradio_pane_t1_ParamLimits

0x69ba,	// (0x0008a6d8) main_vradio_pane_t1

0x69cf,	// (0x0008a6ed) main_vradio_pane_t2_ParamLimits

0x69cf,	// (0x0008a6ed) main_vradio_pane_t2

0xdb79,	// (0x00091897) main_vradio_pane_t3_ParamLimits

0xdb79,	// (0x00091897) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0009354f) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0009354f) main_vradio_pane_t

0x69e4,	// (0x0008a702) vradio_rocker_control_pane_ParamLimits

0x69e4,	// (0x0008a702) vradio_rocker_control_pane

0x69f6,	// (0x0008a714) vradio_station_info_pane_ParamLimits

0x69f6,	// (0x0008a714) vradio_station_info_pane

0xdb8d,	// (0x000918ab) vradio_frequency_info_pane_ParamLimits

0xdb8d,	// (0x000918ab) vradio_frequency_info_pane

0xd4cd,	// (0x000911eb) vradio_station_info_pane_g1

0xdb9c,	// (0x000918ba) vradio_station_info_pane_t1_ParamLimits

0xdb9c,	// (0x000918ba) vradio_station_info_pane_t1

0xdbbe,	// (0x000918dc) vradio_station_info_pane_t2_ParamLimits

0xdbbe,	// (0x000918dc) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x00093556) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x00093556) vradio_station_info_pane_t

0xdbd0,	// (0x000918ee) vradio_tuning_pane

0xdbd8,	// (0x000918f6) vradio_rocker_control_pane_g1

0xdbe0,	// (0x000918fe) vradio_rocker_control_pane_g2

0xdbe8,	// (0x00091906) vradio_rocker_control_pane_g3

0xdbf0,	// (0x0009190e) vradio_rocker_control_pane_g4

0xdbf8,	// (0x00091916) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0009355b) vradio_rocker_control_pane_g

0x6a08,	// (0x0008a726) vradio_frequency_info_pane_g1

0xdc00,	// (0x0009191e) vradio_frequency_info_pane_t1_ParamLimits

0xdc00,	// (0x0009191e) vradio_frequency_info_pane_t1

0x6a12,	// (0x0008a730) vradio_tuning_pane_g1

0x6a1d,	// (0x0008a73b) vradio_tuning_pane_t1

0xb1c4,	// (0x0008eee2) area_side_right_pane_ParamLimits

0xb1c4,	// (0x0008eee2) area_side_right_pane

0xcf6d,	// (0x00090c8b) status_small_pane_g1

0xcf75,	// (0x00090c93) status_small_pane_g2

0xcf7e,	// (0x00090c9c) status_small_pane_g3

0xcf87,	// (0x00090ca5) status_small_pane_g4

0x0003,

0xf5f8,	// (0x00093316) status_small_pane_g

0xcf90,	// (0x00090cae) status_small_pane_t1

0x10cd,	// (0x00084deb) main_video3_pane

0xdc14,	// (0x00091932) cams_zoom_vslider_pane

0xdc1c,	// (0x0009193a) image3_wide_pane_ParamLimits

0xdc1c,	// (0x0009193a) image3_wide_pane

0xdc36,	// (0x00091954) image3_wide_small_pane

0xdc42,	// (0x00091960) main_video3_pane_g1_ParamLimits

0xdc42,	// (0x00091960) main_video3_pane_g1

0xdc5e,	// (0x0009197c) main_video3_pane_g2_ParamLimits

0xdc5e,	// (0x0009197c) main_video3_pane_g2

0x0001,

0xf848,	// (0x00093566) main_video3_pane_g_ParamLimits

0xf848,	// (0x00093566) main_video3_pane_g

0xdc7a,	// (0x00091998) main_video3_pane_t1_ParamLimits

0xdc7a,	// (0x00091998) main_video3_pane_t1

0xdca5,	// (0x000919c3) main_video3_pane_t2_ParamLimits

0xdca5,	// (0x000919c3) main_video3_pane_t2

0xdcd0,	// (0x000919ee) main_video3_pane_t3_ParamLimits

0xdcd0,	// (0x000919ee) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0009356b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0009356b) main_video3_pane_t

0xdcfd,	// (0x00091a1b) cams_zoom_vslider_pane_g1

0xdd06,	// (0x00091a24) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x00093572) cams_zoom_vslider_pane_g

0xdd0e,	// (0x00091a2c) small_slider_vertical_pane

0xd4cd,	// (0x000911eb) small_slider_vertical_pane_g1

0xd4cd,	// (0x000911eb) small_slider_vertical_pane_g2

0xdd16,	// (0x00091a34) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x00093577) small_slider_vertical_pane_g

0x10cd,	// (0x00084deb) main_hwr_training_pane

0xdd1f,	// (0x00091a3d) hwr_training_instruct_pane_ParamLimits

0xdd1f,	// (0x00091a3d) hwr_training_instruct_pane

0x6a2c,	// (0x0008a74a) hwr_training_navi_pane_ParamLimits

0x6a2c,	// (0x0008a74a) hwr_training_navi_pane

0x6a4b,	// (0x0008a769) hwr_training_write_pane_ParamLimits

0x6a4b,	// (0x0008a769) hwr_training_write_pane

0x10cd,	// (0x00084deb) bg_frame_shadow_pane

0xdd56,	// (0x00091a74) hwr_training_write_pane_g1

0xdd5e,	// (0x00091a7c) hwr_training_write_pane_g2

0xdd66,	// (0x00091a84) hwr_training_write_pane_g3

0xdd6e,	// (0x00091a8c) hwr_training_write_pane_g4

0xdd76,	// (0x00091a94) hwr_training_write_pane_g5

0xdd7e,	// (0x00091a9c) hwr_training_write_pane_g6

0xdd86,	// (0x00091aa4) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0009357e) hwr_training_write_pane_g

0xdd8e,	// (0x00091aac) hwr_training_navi_pane_g1_ParamLimits

0xdd8e,	// (0x00091aac) hwr_training_navi_pane_g1

0xdda0,	// (0x00091abe) hwr_training_navi_pane_g2_ParamLimits

0xdda0,	// (0x00091abe) hwr_training_navi_pane_g2

0xddb2,	// (0x00091ad0) hwr_training_navi_pane_g3_ParamLimits

0xddb2,	// (0x00091ad0) hwr_training_navi_pane_g3

0xddc2,	// (0x00091ae0) hwr_training_navi_pane_g4_ParamLimits

0xddc2,	// (0x00091ae0) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0009358d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0009358d) hwr_training_navi_pane_g

0xddcf,	// (0x00091aed) hwr_training_navi_pane_t1

0x6a93,	// (0x0008a7b1) list_single_hwr_training_instruct_pane_ParamLimits

0x6a93,	// (0x0008a7b1) list_single_hwr_training_instruct_pane

0xdddd,	// (0x00091afb) list_single_hwr_training_instruct_pane_t1

0xd40d,	// (0x0009112b) bg_frame_shadow_pane_g1

0xddec,	// (0x00091b0a) bg_frame_shadow_pane_g2

0xddf4,	// (0x00091b12) bg_frame_shadow_pane_g3

0xddfc,	// (0x00091b1a) bg_frame_shadow_pane_g4

0xde04,	// (0x00091b22) bg_frame_shadow_pane_g5

0xde0c,	// (0x00091b2a) bg_frame_shadow_pane_g6

0xde14,	// (0x00091b32) bg_frame_shadow_pane_g7

0x1fde,	// (0x00085cfc) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x00093598) bg_frame_shadow_pane_g

0x10cd,	// (0x00084deb) main_video_tele_dialer_pane

0x6aa8,	// (0x0008a7c6) aid_size_cell_video_keypad_ParamLimits

0x6aa8,	// (0x0008a7c6) aid_size_cell_video_keypad

0x6ac2,	// (0x0008a7e0) grid_video_dialer_keypad_pane_ParamLimits

0x6ac2,	// (0x0008a7e0) grid_video_dialer_keypad_pane

0x6b0e,	// (0x0008a82c) video_down_pane_cp_ParamLimits

0x6b0e,	// (0x0008a82c) video_down_pane_cp

0x6b40,	// (0x0008a85e) cell_video_dialer_keypad_pane_ParamLimits

0x6b40,	// (0x0008a85e) cell_video_dialer_keypad_pane

0xde1c,	// (0x00091b3a) bg_button_pane_cp08_ParamLimits

0xde1c,	// (0x00091b3a) bg_button_pane_cp08

0x6b62,	// (0x0008a880) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6b62,	// (0x0008a880) cell_video_dialer_keypad_pane_g1

0x6213,	// (0x00089f31) mup3_rocker2_pane_ParamLimits

0x6213,	// (0x00089f31) mup3_rocker2_pane

0xd4cd,	// (0x000911eb) mup3_rocker2_pane_g1

0x4d1c,	// (0x00088a3a) main_dialer2_pane

0x10cd,	// (0x00084deb) main_mp4_pane

0xde30,	// (0x00091b4e) main_mp4_pane_g1_ParamLimits

0xde30,	// (0x00091b4e) main_mp4_pane_g1

0xde30,	// (0x00091b4e) main_mp4_pane_g2_ParamLimits

0xde30,	// (0x00091b4e) main_mp4_pane_g2

0x6b99,	// (0x0008a8b7) main_mp4_pane_g3_ParamLimits

0x6b99,	// (0x0008a8b7) main_mp4_pane_g3

0xde3e,	// (0x00091b5c) main_mp4_pane_g4_ParamLimits

0xde3e,	// (0x00091b5c) main_mp4_pane_g4

0xde66,	// (0x00091b84) main_mp4_pane_g5_ParamLimits

0xde66,	// (0x00091b84) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000935b8) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000935b8) main_mp4_pane_g

0xdeb6,	// (0x00091bd4) main_mp4_pane_t1_ParamLimits

0xdeb6,	// (0x00091bd4) main_mp4_pane_t1

0xdf12,	// (0x00091c30) main_mp4_pane_t2_ParamLimits

0xdf12,	// (0x00091c30) main_mp4_pane_t2

0xdf64,	// (0x00091c82) main_mp4_pane_t3_ParamLimits

0xdf64,	// (0x00091c82) main_mp4_pane_t3

0xdf84,	// (0x00091ca2) main_mp4_pane_t4_ParamLimits

0xdf84,	// (0x00091ca2) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000935c5) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000935c5) main_mp4_pane_t

0xdfc8,	// (0x00091ce6) mp4_progress_pane_ParamLimits

0xdfc8,	// (0x00091ce6) mp4_progress_pane

0xe012,	// (0x00091d30) mp4_rocker_pane_ParamLimits

0xe012,	// (0x00091d30) mp4_rocker_pane

0xe03a,	// (0x00091d58) mp4_progress_pane_t1

0xe053,	// (0x00091d71) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000935ce) mp4_progress_pane_t

0xe06c,	// (0x00091d8a) mup_progress_pane_cp04

0xd4cd,	// (0x000911eb) mp4_rocker_pane_g1

0x6bd5,	// (0x0008a8f3) aid_cell_size_keypad2_ParamLimits

0x6bd5,	// (0x0008a8f3) aid_cell_size_keypad2

0x6beb,	// (0x0008a909) dialer2_ne_pane_ParamLimits

0x6beb,	// (0x0008a909) dialer2_ne_pane

0x6c05,	// (0x0008a923) grid_dialer2_keypad_pane_ParamLimits

0x6c05,	// (0x0008a923) grid_dialer2_keypad_pane

0xd2b2,	// (0x00090fd0) bg_popup_call_pane_cp07_ParamLimits

0xd2b2,	// (0x00090fd0) bg_popup_call_pane_cp07

0x6c21,	// (0x0008a93f) dialer2_ne_pane_t1_ParamLimits

0x6c21,	// (0x0008a93f) dialer2_ne_pane_t1

0x6c5c,	// (0x0008a97a) cell_dialer2_keypad_pane_ParamLimits

0x6c5c,	// (0x0008a97a) cell_dialer2_keypad_pane

0xe08a,	// (0x00091da8) bg_button_pane_pane_cp04_ParamLimits

0xe08a,	// (0x00091da8) bg_button_pane_pane_cp04

0x6c7e,	// (0x0008a99c) cell_dialer2_keypad_pane_g1_ParamLimits

0x6c7e,	// (0x0008a99c) cell_dialer2_keypad_pane_g1

0x2a9b,	// (0x000867b9) aid_placing_vt_set_content_ParamLimits

0x2a9b,	// (0x000867b9) aid_placing_vt_set_content

0x2ac3,	// (0x000867e1) aid_placing_vt_set_title_ParamLimits

0x2ac3,	// (0x000867e1) aid_placing_vt_set_title

0x10cd,	// (0x00084deb) main_image3_pane

0x6d44,	// (0x0008aa62) area_side_right_pane_cp01_ParamLimits

0x6d44,	// (0x0008aa62) area_side_right_pane_cp01

0xde30,	// (0x00091b4e) main_image3_pane_g1_ParamLimits

0xde30,	// (0x00091b4e) main_image3_pane_g1

0x6d5b,	// (0x0008aa79) main_image3_pane_g2_ParamLimits

0x6d5b,	// (0x0008aa79) main_image3_pane_g2

0x6d83,	// (0x0008aaa1) main_image3_pane_g3_ParamLimits

0x6d83,	// (0x0008aaa1) main_image3_pane_g3

0x6dad,	// (0x0008aacb) main_image3_pane_g4_ParamLimits

0x6dad,	// (0x0008aacb) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000935dd) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000935dd) main_image3_pane_g

0x6dd7,	// (0x0008aaf5) main_image3_pane_t1_ParamLimits

0x6dd7,	// (0x0008aaf5) main_image3_pane_t1

0x6e2f,	// (0x0008ab4d) main_image3_pane_t2_ParamLimits

0x6e2f,	// (0x0008ab4d) main_image3_pane_t2

0x6e81,	// (0x0008ab9f) main_image3_pane_t3_ParamLimits

0x6e81,	// (0x0008ab9f) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000935e6) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000935e6) main_image3_pane_t

0x12f8,	// (0x00085016) grid_sctrl_middle_pane_cp01_ParamLimits

0x12f8,	// (0x00085016) grid_sctrl_middle_pane_cp01

0x6f09,	// (0x0008ac27) cell_sctrl_middle_pane_cp01_ParamLimits

0x6f09,	// (0x0008ac27) cell_sctrl_middle_pane_cp01

0x6f26,	// (0x0008ac44) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6f26,	// (0x0008ac44) cell_sctrl_middle_pane_cp01_g1

0x10cd,	// (0x00084deb) main_call4_pane

0x6f3c,	// (0x0008ac5a) aid_size_button_call4_ParamLimits

0x6f3c,	// (0x0008ac5a) aid_size_button_call4

0x6f6d,	// (0x0008ac8b) call4_windows_pane_ParamLimits

0x6f6d,	// (0x0008ac8b) call4_windows_pane

0x6f8d,	// (0x0008acab) grid_call4_button_pane_ParamLimits

0x6f8d,	// (0x0008acab) grid_call4_button_pane

0xe0c8,	// (0x00091de6) call4_windows_conf_pane

0xe0df,	// (0x00091dfd) popup_call4_audio_first_window_ParamLimits

0xe0df,	// (0x00091dfd) popup_call4_audio_first_window

0xe127,	// (0x00091e45) popup_call4_audio_second_window_ParamLimits

0xe127,	// (0x00091e45) popup_call4_audio_second_window

0xe140,	// (0x00091e5e) popup_call4_audio_wait_window_ParamLimits

0xe140,	// (0x00091e5e) popup_call4_audio_wait_window

0x6fba,	// (0x0008acd8) cell_call4_button_pane_ParamLimits

0x6fba,	// (0x0008acd8) cell_call4_button_pane

0x6fe3,	// (0x0008ad01) bg_button_pane_cp09_ParamLimits

0x6fe3,	// (0x0008ad01) bg_button_pane_cp09

0x6fef,	// (0x0008ad0d) cell_call4_button_pane_g1_ParamLimits

0x6fef,	// (0x0008ad0d) cell_call4_button_pane_g1

0x7015,	// (0x0008ad33) cell_call4_button_pane_t1_ParamLimits

0x7015,	// (0x0008ad33) cell_call4_button_pane_t1

0xe188,	// (0x00091ea6) popup_call4_audio_conf_window_ParamLimits

0xe188,	// (0x00091ea6) popup_call4_audio_conf_window

0x6273,	// (0x00089f91) mup3_progress_pane_t1_ParamLimits

0x6292,	// (0x00089fb0) mup3_progress_pane_t2_ParamLimits

0xd80c,	// (0x0009152a) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000934ba) mup3_progress_pane_t_ParamLimits

0xd829,	// (0x00091547) mup_progress_pane_cp03_ParamLimits

0x6872,	// (0x0008a590) mup3_control_keys_pane_g4_copy1

0xdff6,	// (0x00091d14) mp4_rocker2_pane_ParamLimits

0xdff6,	// (0x00091d14) mp4_rocker2_pane

0xe19c,	// (0x00091eba) mp4_rocker2_pane_g1

0xe1a4,	// (0x00091ec2) mp4_rocker2_pane_g2

0xeaab,	// (0x000927c9) mp4_rocker2_pane_g3

0xeab3,	// (0x000927d1) mp4_rocker2_pane_g4

0xeabb,	// (0x000927d9) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000935ef) mp4_rocker2_pane_g

0x10cd,	// (0x00084deb) main_camera4_pane

0x10cd,	// (0x00084deb) main_video4_pane

0x6adc,	// (0x0008a7fa) main_video_tele_dialer_pane_t1_ParamLimits

0x6adc,	// (0x0008a7fa) main_video_tele_dialer_pane_t1

0x6af5,	// (0x0008a813) main_video_tele_dialer_pane_t2_ParamLimits

0x6af5,	// (0x0008a813) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000935a9) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000935a9) main_video_tele_dialer_pane_t

0x7053,	// (0x0008ad71) cam4_autofocus_pane_ParamLimits

0x7053,	// (0x0008ad71) cam4_autofocus_pane

0x7069,	// (0x0008ad87) cam4_image_uncrop_pane_ParamLimits

0x7069,	// (0x0008ad87) cam4_image_uncrop_pane

0x7083,	// (0x0008ada1) cam4_indicators_pane_ParamLimits

0x7083,	// (0x0008ada1) cam4_indicators_pane

0x70ae,	// (0x0008adcc) main_camera4_pane_g1_ParamLimits

0x70ae,	// (0x0008adcc) main_camera4_pane_g1

0x70c0,	// (0x0008adde) main_camera4_pane_g2_ParamLimits

0x70c0,	// (0x0008adde) main_camera4_pane_g2

0x70d3,	// (0x0008adf1) main_camera4_pane_g3_ParamLimits

0x70d3,	// (0x0008adf1) main_camera4_pane_g3

0x70e6,	// (0x0008ae04) main_camera4_pane_g4_ParamLimits

0x70e6,	// (0x0008ae04) main_camera4_pane_g4

0x70f9,	// (0x0008ae17) main_camera4_pane_g5_ParamLimits

0x70f9,	// (0x0008ae17) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000935fa) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000935fa) main_camera4_pane_g

0x711d,	// (0x0008ae3b) main_camera4_pane_t1_ParamLimits

0x711d,	// (0x0008ae3b) main_camera4_pane_t1

0xd739,	// (0x00091457) bg_tb_trans_pane_cp06

0xeae7,	// (0x00092805) cam4_indicators_pane_g1

0xeaf8,	// (0x00092816) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00093615) cam4_indicators_pane_g

0xeb16,	// (0x00092834) cam4_indicators_pane_t1

0x7193,	// (0x0008aeb1) main_video4_pane_g1_ParamLimits

0x7193,	// (0x0008aeb1) main_video4_pane_g1

0x71a2,	// (0x0008aec0) main_video4_pane_g2_ParamLimits

0x71a2,	// (0x0008aec0) main_video4_pane_g2

0x71b1,	// (0x0008aecf) main_video4_pane_g3_ParamLimits

0x71b1,	// (0x0008aecf) main_video4_pane_g3

0x71c0,	// (0x0008aede) main_video4_pane_g4_ParamLimits

0x71c0,	// (0x0008aede) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0009361c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0009361c) main_video4_pane_g

0x71de,	// (0x0008aefc) vid4_indicators_pane_ParamLimits

0x71de,	// (0x0008aefc) vid4_indicators_pane

0x720c,	// (0x0008af2a) video4_image_uncrop_cif_pane_ParamLimits

0x720c,	// (0x0008af2a) video4_image_uncrop_cif_pane

0x7226,	// (0x0008af44) video4_image_uncrop_nhd_pane_ParamLimits

0x7226,	// (0x0008af44) video4_image_uncrop_nhd_pane

0x7069,	// (0x0008ad87) video4_image_uncrop_vga_pane_ParamLimits

0x7069,	// (0x0008ad87) video4_image_uncrop_vga_pane

0x12f8,	// (0x00085016) bg_tb_trans_pane_cp07

0xeb42,	// (0x00092860) vid4_indicators_pane_g1

0xeb56,	// (0x00092874) vid4_indicators_pane_g2

0xeb6a,	// (0x00092888) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00093627) vid4_indicators_pane_g

0xeb99,	// (0x000928b7) vid4_indicators_pane_t1

0x723a,	// (0x0008af58) cam4_autofocus_pane_g1

0x7242,	// (0x0008af60) cam4_autofocus_pane_g2

0x724a,	// (0x0008af68) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00093632) cam4_autofocus_pane_g

0x7252,	// (0x0008af70) cam4_autofocus_pane_g3_copy1

0x6b24,	// (0x0008a842) video_down_pane_cp_t1

0x6b32,	// (0x0008a850) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000935ae) video_down_pane_cp_t

0x12f8,	// (0x00085016) popup_vitu2_window_ParamLimits

0x12f8,	// (0x00085016) popup_vitu2_window

0x725a,	// (0x0008af78) aid_size_cell2_itu2_ParamLimits

0x725a,	// (0x0008af78) aid_size_cell2_itu2

0x7280,	// (0x0008af9e) aid_size_cell_itu2_ParamLimits

0x7280,	// (0x0008af9e) aid_size_cell_itu2

0x72dc,	// (0x0008affa) bg_popup_window_pane_cp09_ParamLimits

0x72dc,	// (0x0008affa) bg_popup_window_pane_cp09

0x72ea,	// (0x0008b008) field_vitu2_entry_pane_ParamLimits

0x72ea,	// (0x0008b008) field_vitu2_entry_pane

0x7310,	// (0x0008b02e) grid_vitu2_function_pane_ParamLimits

0x7310,	// (0x0008b02e) grid_vitu2_function_pane

0x7361,	// (0x0008b07f) grid_vitu2_itu_pane_ParamLimits

0x7361,	// (0x0008b07f) grid_vitu2_itu_pane

0x73f9,	// (0x0008b117) cell_vitu2_itu_pane_ParamLimits

0x73f9,	// (0x0008b117) cell_vitu2_itu_pane

0x7425,	// (0x0008b143) cell_vitu2_function_pane_ParamLimits

0x7425,	// (0x0008b143) cell_vitu2_function_pane

0xe1ac,	// (0x00091eca) bg_popup_call_pane_cp08_ParamLimits

0xe1ac,	// (0x00091eca) bg_popup_call_pane_cp08

0xe1c3,	// (0x00091ee1) field_vitu2_entry_pane_g1

0xe1cf,	// (0x00091eed) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00093639) field_vitu2_entry_pane_g

0x04e1,	// (0x000841ff) field_vitu2_entry_pane_t1_ParamLimits

0x04e1,	// (0x000841ff) field_vitu2_entry_pane_t1

0xe1e9,	// (0x00091f07) field_vitu2_entry_pane_t2_ParamLimits

0xe1e9,	// (0x00091f07) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00093640) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00093640) field_vitu2_entry_pane_t

0x7464,	// (0x0008b182) bg_button_pane_cp010_ParamLimits

0x7464,	// (0x0008b182) bg_button_pane_cp010

0xebb0,	// (0x000928ce) cell_vitu2_itu_pane_g1

0x7480,	// (0x0008b19e) cell_vitu2_itu_pane_t1_ParamLimits

0x7480,	// (0x0008b19e) cell_vitu2_itu_pane_t1

0x050f,	// (0x0008422d) cell_vitu2_itu_pane_t2_ParamLimits

0x050f,	// (0x0008422d) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0009364a) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0009364a) cell_vitu2_itu_pane_t

0x12f8,	// (0x00085016) bg_button_pane_cp011

0x74de,	// (0x0008b1fc) cell_vitu2_function_pane_g1

0x10cd,	// (0x00084deb) main_myfav_hc_pane

0x6ed1,	// (0x0008abef) popup_image3_note_pane_ParamLimits

0x6ed1,	// (0x0008abef) popup_image3_note_pane

0x6eed,	// (0x0008ac0b) popup_image3_tool_bar_pane_ParamLimits

0x6eed,	// (0x0008ac0b) popup_image3_tool_bar_pane

0x059d,	// (0x000842bb) cell_vitu2_itu_pane_t3_ParamLimits

0x059d,	// (0x000842bb) cell_vitu2_itu_pane_t3

0x10cd,	// (0x00084deb) bg_popup_trans_pane

0xe20e,	// (0x00091f2c) grid_image3_tool_bar_pane

0xe218,	// (0x00091f36) bg_popup_trans_pane_g1

0xb2a6,	// (0x0008efc4) bg_popup_trans_pane_g2

0xe220,	// (0x00091f3e) bg_popup_trans_pane_g3

0xe228,	// (0x00091f46) bg_popup_trans_pane_g4

0xe230,	// (0x00091f4e) bg_popup_trans_pane_g5

0xe238,	// (0x00091f56) bg_popup_trans_pane_g6

0xe240,	// (0x00091f5e) bg_popup_trans_pane_g7

0xe248,	// (0x00091f66) bg_popup_trans_pane_g8

0x3074,	// (0x00086d92) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00093651) bg_popup_trans_pane_g

0xe250,	// (0x00091f6e) cell_image3_tool_bar_pane_ParamLimits

0xe250,	// (0x00091f6e) cell_image3_tool_bar_pane

0xd4cd,	// (0x000911eb) cell_image3_tool_bar_pane_g1

0x10cd,	// (0x00084deb) bg_popup_trans_pane_cp1

0xe264,	// (0x00091f82) popup_image3_note_pane_t1

0xe272,	// (0x00091f90) popup_image3_note_pane_t2

0xe280,	// (0x00091f9e) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x00093664) popup_image3_note_pane_t

0xe28e,	// (0x00091fac) popup_image3_note_pane_t3_copy1

0x74f2,	// (0x0008b210) bg_myfav_hc_instruction_pane_ParamLimits

0x74f2,	// (0x0008b210) bg_myfav_hc_instruction_pane

0x7506,	// (0x0008b224) cell_myfav_contact_pane_ParamLimits

0x7506,	// (0x0008b224) cell_myfav_contact_pane

0x7524,	// (0x0008b242) cell_myfav_contact_pane_cp1_ParamLimits

0x7524,	// (0x0008b242) cell_myfav_contact_pane_cp1

0x753c,	// (0x0008b25a) cell_myfav_contact_pane_cp2_ParamLimits

0x753c,	// (0x0008b25a) cell_myfav_contact_pane_cp2

0x7554,	// (0x0008b272) cell_myfav_contact_pane_cp3_ParamLimits

0x7554,	// (0x0008b272) cell_myfav_contact_pane_cp3

0x756b,	// (0x0008b289) cell_myfav_contact_pane_cp4_ParamLimits

0x756b,	// (0x0008b289) cell_myfav_contact_pane_cp4

0x7583,	// (0x0008b2a1) cell_myfav_contact_pane_cp5_ParamLimits

0x7583,	// (0x0008b2a1) cell_myfav_contact_pane_cp5

0x7597,	// (0x0008b2b5) cell_myfav_contact_pane_cp6_ParamLimits

0x7597,	// (0x0008b2b5) cell_myfav_contact_pane_cp6

0x75ad,	// (0x0008b2cb) cell_myfav_contact_pane_cp7_ParamLimits

0x75ad,	// (0x0008b2cb) cell_myfav_contact_pane_cp7

0xe29c,	// (0x00091fba) listscroll_gen_pane_cp05

0x75c7,	// (0x0008b2e5) main_myfav_hc_pane_g1_ParamLimits

0x75c7,	// (0x0008b2e5) main_myfav_hc_pane_g1

0x75e1,	// (0x0008b2ff) main_myfav_hc_pane_g2_ParamLimits

0x75e1,	// (0x0008b2ff) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0009366b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0009366b) main_myfav_hc_pane_g

0x7613,	// (0x0008b331) main_myfav_hc_pane_t1_ParamLimits

0x7613,	// (0x0008b331) main_myfav_hc_pane_t1

0xe2a5,	// (0x00091fc3) main_myfav_hc_pane_t2_ParamLimits

0xe2a5,	// (0x00091fc3) main_myfav_hc_pane_t2

0xe2b7,	// (0x00091fd5) main_myfav_hc_pane_t3_ParamLimits

0xe2b7,	// (0x00091fd5) main_myfav_hc_pane_t3

0x762a,	// (0x0008b348) main_myfav_hc_pane_t4_ParamLimits

0x762a,	// (0x0008b348) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00093672) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00093672) main_myfav_hc_pane_t

0xd4cd,	// (0x000911eb) bg_myfav_hc_instruction_pane_g1

0xe2c9,	// (0x00091fe7) cell_myfav_contact_pane_g1_ParamLimits

0xe2c9,	// (0x00091fe7) cell_myfav_contact_pane_g1

0xe2c9,	// (0x00091fe7) cell_myfav_contact_pane_g2_ParamLimits

0xe2c9,	// (0x00091fe7) cell_myfav_contact_pane_g2

0xe2d5,	// (0x00091ff3) cell_myfav_contact_pane_g3_ParamLimits

0xe2d5,	// (0x00091ff3) cell_myfav_contact_pane_g3

0xd7f6,	// (0x00091514) cell_myfav_contact_pane_g4_ParamLimits

0xd7f6,	// (0x00091514) cell_myfav_contact_pane_g4

0xe2e2,	// (0x00092000) cell_myfav_contact_pane_g5_ParamLimits

0xe2e2,	// (0x00092000) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0009367d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0009367d) cell_myfav_contact_pane_g

0x75fb,	// (0x0008b319) main_myfav_hc_pane_g3_ParamLimits

0x75fb,	// (0x0008b319) main_myfav_hc_pane_g3

0x1236,	// (0x00084f54) popup_adpt_find_window

0x7652,	// (0x0008b370) afind_page_pane_ParamLimits

0x7652,	// (0x0008b370) afind_page_pane

0x7667,	// (0x0008b385) aid_size_cell_afind_ParamLimits

0x7667,	// (0x0008b385) aid_size_cell_afind

0x7685,	// (0x0008b3a3) bg_popup_sub_pane_cp09_ParamLimits

0x7685,	// (0x0008b3a3) bg_popup_sub_pane_cp09

0x7692,	// (0x0008b3b0) find_pane_cp01_ParamLimits

0x7692,	// (0x0008b3b0) find_pane_cp01

0xe2ee,	// (0x0009200c) grid_afind_control_pane_ParamLimits

0xe2ee,	// (0x0009200c) grid_afind_control_pane

0x769f,	// (0x0008b3bd) grid_afind_pane_ParamLimits

0x769f,	// (0x0008b3bd) grid_afind_pane

0x76c1,	// (0x0008b3df) cell_afind_pane_ParamLimits

0x76c1,	// (0x0008b3df) cell_afind_pane

0xd4cd,	// (0x000911eb) afind_page_pane_g1

0x7728,	// (0x0008b446) afind_page_pane_g2

0x7731,	// (0x0008b44f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x00093688) afind_page_pane_g

0x773a,	// (0x0008b458) afind_page_pane_t1

0xe302,	// (0x00092020) cell_afind_grid_control_pane_ParamLimits

0xe302,	// (0x00092020) cell_afind_grid_control_pane

0xe08a,	// (0x00091da8) bg_button_pane_cp69_ParamLimits

0xe08a,	// (0x00091da8) bg_button_pane_cp69

0x775a,	// (0x0008b478) cell_afind_pane_g1_ParamLimits

0x775a,	// (0x0008b478) cell_afind_pane_g1

0x7767,	// (0x0008b485) cell_afind_pane_t1_ParamLimits

0x7767,	// (0x0008b485) cell_afind_pane_t1

0x2a16,	// (0x00086734) bg_button_pane_cp72

0xe311,	// (0x0009202f) cell_afind_grid_control_pane_g1

0x47dc,	// (0x000884fa) aid_image_placing_area_ParamLimits

0x47dc,	// (0x000884fa) aid_image_placing_area

0xdb1f,	// (0x0009183d) field_vitu_entry_pane_g1_ParamLimits

0xdb1f,	// (0x0009183d) field_vitu_entry_pane_g1

0xdb2b,	// (0x00091849) field_vitu_entry_pane_g2_ParamLimits

0xdb2b,	// (0x00091849) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00093539) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00093539) field_vitu_entry_pane_g

0x6939,	// (0x0008a657) cell_vitu_itu_pane_g1_ParamLimits

0x697b,	// (0x0008a699) cell_vitu_itu_pane_t3_ParamLimits

0x697b,	// (0x0008a699) cell_vitu_itu_pane_t3

0xe03a,	// (0x00091d58) mp4_progress_pane_t1_ParamLimits

0xe053,	// (0x00091d71) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000935ce) mp4_progress_pane_t_ParamLimits

0xe06c,	// (0x00091d8a) mup_progress_pane_cp04_ParamLimits

0x763e,	// (0x0008b35c) main_myfav_hc_pane_t5_ParamLimits

0x763e,	// (0x0008b35c) main_myfav_hc_pane_t5

0xb1b4,	// (0x0008eed2) aid_zoom_text_primary

0x1236,	// (0x00084f54) popup_adpt_find_window_ParamLimits

0x12f8,	// (0x00085016) main_cam_set_pane

0x709a,	// (0x0008adb8) cam4_zoom_pane_ParamLimits

0x709a,	// (0x0008adb8) cam4_zoom_pane

0x7779,	// (0x0008b497) main_cam_set_pane_g1_ParamLimits

0x7779,	// (0x0008b497) main_cam_set_pane_g1

0x7787,	// (0x0008b4a5) main_cam_set_pane_g2_ParamLimits

0x7787,	// (0x0008b4a5) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0009368f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0009368f) main_cam_set_pane_g

0x77a8,	// (0x0008b4c6) main_cam_set_pane_t1_ParamLimits

0x77a8,	// (0x0008b4c6) main_cam_set_pane_t1

0x77c3,	// (0x0008b4e1) main_cset_listscroll_pane_ParamLimits

0x77c3,	// (0x0008b4e1) main_cset_listscroll_pane

0x77e3,	// (0x0008b501) main_cset_slider_pane_ParamLimits

0x77e3,	// (0x0008b501) main_cset_slider_pane

0xe322,	// (0x00092040) main_cset_list_pane_ParamLimits

0xe322,	// (0x00092040) main_cset_list_pane

0xe332,	// (0x00092050) scroll_pane_cp028

0x7809,	// (0x0008b527) aid_area_touch_slider

0x7825,	// (0x0008b543) cset_slider_pane

0x784f,	// (0x0008b56d) main_cset_slider_pane_g1

0x7864,	// (0x0008b582) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x00093694) main_cset_slider_pane_g

0xe36b,	// (0x00092089) main_cset_slider_pane_t1

0x7920,	// (0x0008b63e) main_cset_slider_pane_t2

0x793a,	// (0x0008b658) main_cset_slider_pane_t3

0x7954,	// (0x0008b672) main_cset_slider_pane_t4

0x796e,	// (0x0008b68c) main_cset_slider_pane_t5

0x7988,	// (0x0008b6a6) main_cset_slider_pane_t6

0x799d,	// (0x0008b6bb) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000936b9) main_cset_slider_pane_t

0x7aa1,	// (0x0008b7bf) cset_list_set_pane_ParamLimits

0x7aa1,	// (0x0008b7bf) cset_list_set_pane

0x7ab3,	// (0x0008b7d1) aid_position_infowindow_above

0x7abb,	// (0x0008b7d9) aid_position_infowindow_below

0xebc2,	// (0x000928e0) cset_list_set_pane_g1_ParamLimits

0xebc2,	// (0x000928e0) cset_list_set_pane_g1

0xe40b,	// (0x00092129) cset_list_set_pane_g3_ParamLimits

0xe40b,	// (0x00092129) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000936d8) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000936d8) cset_list_set_pane_g

0xe41a,	// (0x00092138) cset_list_set_pane_t1_ParamLimits

0xe41a,	// (0x00092138) cset_list_set_pane_t1

0x12f8,	// (0x00085016) list_highlight_pane_cp021_ParamLimits

0x12f8,	// (0x00085016) list_highlight_pane_cp021

0xbcae,	// (0x0008f9cc) cset_slider_pane_g1

0xbcc0,	// (0x0008f9de) cset_slider_pane_g2

0xbcb7,	// (0x0008f9d5) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000936dd) cset_slider_pane_g

0xebce,	// (0x000928ec) aid_area_touch_cam4_zoom

0xebd6,	// (0x000928f4) cam4_zoom_cont_pane

0xebde,	// (0x000928fc) cam4_zoom_pane_g1

0xebe6,	// (0x00092904) cam4_zoom_pane_g2

0x7ac3,	// (0x0008b7e1) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000936e4) cam4_zoom_pane_g

0xe42f,	// (0x0009214d) cam4_zoom_cont_pane_g1

0xe438,	// (0x00092156) cam4_zoom_cont_pane_g2

0xe441,	// (0x0009215f) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000936eb) cam4_zoom_cont_pane_g

0x6f5a,	// (0x0008ac78) call4_image_pane_ParamLimits

0x6f5a,	// (0x0008ac78) call4_image_pane

0xe0c8,	// (0x00091de6) call4_windows_conf_pane_ParamLimits

0xe105,	// (0x00091e23) popup_call4_audio_in_window_ParamLimits

0xe105,	// (0x00091e23) popup_call4_audio_in_window

0x10cd,	// (0x00084deb) bg_popup_call2_act_pane_cp02

0xe180,	// (0x00091e9e) call4_list_conf_pane

0xd4cd,	// (0x000911eb) call4_image_pane_g1

0xd4cd,	// (0x000911eb) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000933fa) call4_image_pane_g

0xe44a,	// (0x00092168) list_single_graphic_popup_conf4_pane_ParamLimits

0xe44a,	// (0x00092168) list_single_graphic_popup_conf4_pane

0x10cd,	// (0x00084deb) list_highlight_pane_cp022

0xe45d,	// (0x0009217b) list_single_graphic_popup_conf4_pane_g1

0xb86d,	// (0x0008f58b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000936f2) list_single_graphic_popup_conf4_pane_g

0xe465,	// (0x00092183) list_single_graphic_popup_conf4_pane_t1

0x2bf9,	// (0x00086917) popup_vtel_slider_window_ParamLimits

0x2bf9,	// (0x00086917) popup_vtel_slider_window

0xe078,	// (0x00091d96) dialer2_ne_pane_t2_ParamLimits

0xe078,	// (0x00091d96) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000935d3) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000935d3) dialer2_ne_pane_t

0xd2b2,	// (0x00090fd0) bg_popup_sub_pane_cp010_ParamLimits

0xd2b2,	// (0x00090fd0) bg_popup_sub_pane_cp010

0x7acb,	// (0x0008b7e9) popup_vtel_slider_window_g1_ParamLimits

0x7acb,	// (0x0008b7e9) popup_vtel_slider_window_g1

0x7ade,	// (0x0008b7fc) popup_vtel_slider_window_g2_ParamLimits

0x7ade,	// (0x0008b7fc) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000936f7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000936f7) popup_vtel_slider_window_g

0x7b34,	// (0x0008b852) vtel_slider_pane_ParamLimits

0x7b34,	// (0x0008b852) vtel_slider_pane

0x7b56,	// (0x0008b874) vtel_slider_pane_g1_ParamLimits

0x7b56,	// (0x0008b874) vtel_slider_pane_g1

0x7b6a,	// (0x0008b888) vtel_slider_pane_g2_ParamLimits

0x7b6a,	// (0x0008b888) vtel_slider_pane_g2

0x7b82,	// (0x0008b8a0) vtel_slider_pane_g3_ParamLimits

0x7b82,	// (0x0008b8a0) vtel_slider_pane_g3

0x7b56,	// (0x0008b874) vtel_slider_pane_g4_ParamLimits

0x7b56,	// (0x0008b874) vtel_slider_pane_g4

0x7b98,	// (0x0008b8b6) vtel_slider_pane_g5_ParamLimits

0x7b98,	// (0x0008b8b6) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00093700) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00093700) vtel_slider_pane_g

0x12f8,	// (0x00085016) main_gallery2_pane

0x72ac,	// (0x0008afca) aid_size_row_itut2_dropdow_list_ParamLimits

0x72ac,	// (0x0008afca) aid_size_row_itut2_dropdow_list

0x7338,	// (0x0008b056) grid_vitu2_function_top_pane_ParamLimits

0x7338,	// (0x0008b056) grid_vitu2_function_top_pane

0x73a2,	// (0x0008b0c0) popup_vitu2_dropdown_list_window_ParamLimits

0x73a2,	// (0x0008b0c0) popup_vitu2_dropdown_list_window

0x73cb,	// (0x0008b0e9) popup_vitu2_match_list_window

0x7bae,	// (0x0008b8cc) cell_vitu2_function_top_pane_ParamLimits

0x7bae,	// (0x0008b8cc) cell_vitu2_function_top_pane

0x7bc6,	// (0x0008b8e4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7bc6,	// (0x0008b8e4) cell_vitu2_function_top_pane_cp01

0x7be2,	// (0x0008b900) cell_vitu2_function_top_wide_pane_ParamLimits

0x7be2,	// (0x0008b900) cell_vitu2_function_top_wide_pane

0x12f8,	// (0x00085016) bg_button_pane_cp012

0x7bfe,	// (0x0008b91c) cell_vitu2_function_top_pane_g1

0xebee,	// (0x0009290c) bg_button_pane_cp013_ParamLimits

0xebee,	// (0x0009290c) bg_button_pane_cp013

0x7c12,	// (0x0008b930) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7c12,	// (0x0008b930) cell_vitu2_function_top_wide_pane_g1

0x12f8,	// (0x00085016) bg_popup_sub_pane_cp20

0x7c2a,	// (0x0008b948) list_vitu2_match_list_pane

0xe218,	// (0x00091f36) bg_popup_sub_pane_cp20_g1

0xe220,	// (0x00091f3e) bg_popup_sub_pane_cp20_g2

0xb2a6,	// (0x0008efc4) bg_popup_sub_pane_cp20_g3

0xe228,	// (0x00091f46) bg_popup_sub_pane_cp20_g4

0x3074,	// (0x00086d92) bg_popup_sub_pane_cp20_g5

0xe47b,	// (0x00092199) bg_popup_sub_pane_cp20_g6

0xe238,	// (0x00091f56) bg_popup_sub_pane_cp20_g7

0xe240,	// (0x00091f5e) bg_popup_sub_pane_cp20_g8

0xe248,	// (0x00091f66) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0009370b) bg_popup_sub_pane_cp20_g

0xec0a,	// (0x00092928) list_vitu2_match_list_item_pane_ParamLimits

0xec0a,	// (0x00092928) list_vitu2_match_list_item_pane

0xec1c,	// (0x0009293a) list_vitu2_match_list_item_pane_t1

0x10cd,	// (0x00084deb) bg_popup_sub_pane_cp21

0xb722,	// (0x0008f440) grid_vitu2_dropdown_list_pane

0x7c48,	// (0x0008b966) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7c48,	// (0x0008b966) cell_vitu2_dropdown_list_char_pane

0x7c69,	// (0x0008b987) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7c69,	// (0x0008b987) cell_vitu2_dropdown_list_ctrl_pane

0xe483,	// (0x000921a1) cell_vitu2_dropdown_list_char_pane_g1

0xe48c,	// (0x000921aa) cell_vitu2_dropdown_list_char_pane_g2

0xe495,	// (0x000921b3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00093728) cell_vitu2_dropdown_list_char_pane_g

0x7c95,	// (0x0008b9b3) cell_vitu2_dropdown_list_char_pane_t1

0x7ca3,	// (0x0008b9c1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7ca3,	// (0x0008b9c1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7cb0,	// (0x0008b9ce) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7cb0,	// (0x0008b9ce) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7cbd,	// (0x0008b9db) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7cbd,	// (0x0008b9db) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7cca,	// (0x0008b9e8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7cca,	// (0x0008b9e8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd739,	// (0x00091457) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd739,	// (0x00091457) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0009372f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0009372f) cell_vitu2_dropdown_list_ctrl_pane_g

0x7ce6,	// (0x0008ba04) aid_size_cell_gallery2_ParamLimits

0x7ce6,	// (0x0008ba04) aid_size_cell_gallery2

0x7d04,	// (0x0008ba22) grid_gallery2_pane_ParamLimits

0x7d04,	// (0x0008ba22) grid_gallery2_pane

0x7d1e,	// (0x0008ba3c) scroll_pane_cp029_ParamLimits

0x7d1e,	// (0x0008ba3c) scroll_pane_cp029

0x7d2f,	// (0x0008ba4d) cell_gallery2_pane_ParamLimits

0x7d2f,	// (0x0008ba4d) cell_gallery2_pane

0xe49e,	// (0x000921bc) cell_gallery2_pane_g2

0x7d8e,	// (0x0008baac) cell_gallery2_pane_g3

0xe4a6,	// (0x000921c4) cell_gallery2_pane_g4

0xe4ae,	// (0x000921cc) cell_gallery2_pane_g5

0x2673,	// (0x00086391) grid_highlight_pane_cp10

0x73cb,	// (0x0008b0e9) popup_vitu2_match_list_window_ParamLimits

0x73e2,	// (0x0008b100) popup_vitu2_query_window_ParamLimits

0x73e2,	// (0x0008b100) popup_vitu2_query_window

0x10cd,	// (0x00084deb) bg_vitu2_candi_button_pane

0xe483,	// (0x000921a1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe48c,	// (0x000921aa) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe495,	// (0x000921b3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0659,	// (0x00084377) bg_button_pane_cp015

0x7d96,	// (0x0008bab4) bg_button_pane_cp016

0x7da9,	// (0x0008bac7) bg_button_pane_cp017

0xcfb2,	// (0x00090cd0) bg_popup_sub_pane_cp22

0xe4b6,	// (0x000921d4) popup_vitu2_query_window_g1

0x068c,	// (0x000843aa) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0009373a) popup_vitu2_query_window_g

0x06ab,	// (0x000843c9) popup_vitu2_query_window_t1_ParamLimits

0x06ab,	// (0x000843c9) popup_vitu2_query_window_t1

0x06e0,	// (0x000843fe) popup_vitu2_query_window_t2_ParamLimits

0x06e0,	// (0x000843fe) popup_vitu2_query_window_t2

0x06f2,	// (0x00084410) popup_vitu2_query_window_t3_ParamLimits

0x06f2,	// (0x00084410) popup_vitu2_query_window_t3

0x7dcd,	// (0x0008baeb) popup_vitu2_query_window_t4_ParamLimits

0x7dcd,	// (0x0008baeb) popup_vitu2_query_window_t4

0x7dee,	// (0x0008bb0c) popup_vitu2_query_window_t5_ParamLimits

0x7dee,	// (0x0008bb0c) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00093741) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00093741) popup_vitu2_query_window_t

0xe31a,	// (0x00092038) main_cset_text_pane

0x7809,	// (0x0008b527) aid_area_touch_slider_ParamLimits

0x7825,	// (0x0008b543) cset_slider_pane_ParamLimits

0x784f,	// (0x0008b56d) main_cset_slider_pane_g1_ParamLimits

0x7864,	// (0x0008b582) main_cset_slider_pane_g2_ParamLimits

0xe33b,	// (0x00092059) main_cset_slider_pane_g3_ParamLimits

0xe33b,	// (0x00092059) main_cset_slider_pane_g3

0x7879,	// (0x0008b597) main_cset_slider_pane_g4_ParamLimits

0x7879,	// (0x0008b597) main_cset_slider_pane_g4

0x7888,	// (0x0008b5a6) main_cset_slider_pane_g5_ParamLimits

0x7888,	// (0x0008b5a6) main_cset_slider_pane_g5

0x7894,	// (0x0008b5b2) main_cset_slider_pane_g6_ParamLimits

0x7894,	// (0x0008b5b2) main_cset_slider_pane_g6

0xf976,	// (0x00093694) main_cset_slider_pane_g_ParamLimits

0xe36b,	// (0x00092089) main_cset_slider_pane_t1_ParamLimits

0x7920,	// (0x0008b63e) main_cset_slider_pane_t2_ParamLimits

0x793a,	// (0x0008b658) main_cset_slider_pane_t3_ParamLimits

0x7954,	// (0x0008b672) main_cset_slider_pane_t4_ParamLimits

0x796e,	// (0x0008b68c) main_cset_slider_pane_t5_ParamLimits

0x7988,	// (0x0008b6a6) main_cset_slider_pane_t6_ParamLimits

0x799d,	// (0x0008b6bb) main_cset_slider_pane_t7_ParamLimits

0x79c7,	// (0x0008b6e5) main_cset_slider_pane_t8_ParamLimits

0x79c7,	// (0x0008b6e5) main_cset_slider_pane_t8

0x79ef,	// (0x0008b70d) main_cset_slider_pane_t9_ParamLimits

0x79ef,	// (0x0008b70d) main_cset_slider_pane_t9

0x7a17,	// (0x0008b735) main_cset_slider_pane_t10_ParamLimits

0x7a17,	// (0x0008b735) main_cset_slider_pane_t10

0x7a3f,	// (0x0008b75d) main_cset_slider_pane_t11_ParamLimits

0x7a3f,	// (0x0008b75d) main_cset_slider_pane_t11

0x7a67,	// (0x0008b785) main_cset_slider_pane_t12_ParamLimits

0x7a67,	// (0x0008b785) main_cset_slider_pane_t12

0x7a84,	// (0x0008b7a2) main_cset_slider_pane_t13_ParamLimits

0x7a84,	// (0x0008b7a2) main_cset_slider_pane_t13

0xf99b,	// (0x000936b9) main_cset_slider_pane_t_ParamLimits

0x10cd,	// (0x00084deb) bg_popup_sub_pane_cp011

0xe4c2,	// (0x000921e0) main_cset_text_pane_g1

0xe4ca,	// (0x000921e8) main_cset_text_pane_t1

0xe4d8,	// (0x000921f6) main_cset_text_pane_t2

0xe4e6,	// (0x00092204) main_cset_text_pane_t3

0xe4f4,	// (0x00092212) main_cset_text_pane_t4

0xe502,	// (0x00092220) main_cset_text_pane_t5

0xe510,	// (0x0009222e) main_cset_text_pane_t6

0xe51e,	// (0x0009223c) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00093750) main_cset_text_pane_t

0x10cd,	// (0x00084deb) main_cam4_burst_pane

0x10cd,	// (0x00084deb) main_cam5_pane

0x7748,	// (0x0008b466) bg_button_pane_cp019

0x7751,	// (0x0008b46f) bg_button_pane_cp020

0xe347,	// (0x00092065) main_cset_slider_pane_g7_ParamLimits

0xe347,	// (0x00092065) main_cset_slider_pane_g7

0xe353,	// (0x00092071) main_cset_slider_pane_g8_ParamLimits

0xe353,	// (0x00092071) main_cset_slider_pane_g8

0x78a8,	// (0x0008b5c6) main_cset_slider_pane_g9_ParamLimits

0x78a8,	// (0x0008b5c6) main_cset_slider_pane_g9

0x78b4,	// (0x0008b5d2) main_cset_slider_pane_g10_ParamLimits

0x78b4,	// (0x0008b5d2) main_cset_slider_pane_g10

0x78c0,	// (0x0008b5de) main_cset_slider_pane_g11_ParamLimits

0x78c0,	// (0x0008b5de) main_cset_slider_pane_g11

0x78cc,	// (0x0008b5ea) main_cset_slider_pane_g12_ParamLimits

0x78cc,	// (0x0008b5ea) main_cset_slider_pane_g12

0x78d8,	// (0x0008b5f6) main_cset_slider_pane_g13_ParamLimits

0x78d8,	// (0x0008b5f6) main_cset_slider_pane_g13

0x78e4,	// (0x0008b602) main_cset_slider_pane_g14_ParamLimits

0x78e4,	// (0x0008b602) main_cset_slider_pane_g14

0x78f0,	// (0x0008b60e) main_cset_slider_pane_g15_ParamLimits

0x78f0,	// (0x0008b60e) main_cset_slider_pane_g15

0xe399,	// (0x000920b7) main_cset_slider_pane_t14_ParamLimits

0xe399,	// (0x000920b7) main_cset_slider_pane_t14

0xe3d2,	// (0x000920f0) main_cset_slider_pane_t15_ParamLimits

0xe3d2,	// (0x000920f0) main_cset_slider_pane_t15

0x7e0f,	// (0x0008bb2d) aid_cam4_burst_size_cell_ParamLimits

0x7e0f,	// (0x0008bb2d) aid_cam4_burst_size_cell

0x7e2f,	// (0x0008bb4d) grid_cam4_burst_pane_ParamLimits

0x7e2f,	// (0x0008bb4d) grid_cam4_burst_pane

0x7e67,	// (0x0008bb85) linegrid_cam4_burst_pane_ParamLimits

0x7e67,	// (0x0008bb85) linegrid_cam4_burst_pane

0xe52c,	// (0x0009224a) scroll_pane_cp30_ParamLimits

0xe52c,	// (0x0009224a) scroll_pane_cp30

0x7e8b,	// (0x0008bba9) cell_cam4_burst_pane_ParamLimits

0x7e8b,	// (0x0008bba9) cell_cam4_burst_pane

0xe538,	// (0x00092256) linegrid_cam4_burst_pane_g1_ParamLimits

0xe538,	// (0x00092256) linegrid_cam4_burst_pane_g1

0x7ed8,	// (0x0008bbf6) linegrid_cam4_burst_pane_g2_ParamLimits

0x7ed8,	// (0x0008bbf6) linegrid_cam4_burst_pane_g2

0xe545,	// (0x00092263) linegrid_cam4_burst_pane_g3_ParamLimits

0xe545,	// (0x00092263) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0009375f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0009375f) linegrid_cam4_burst_pane_g

0x7ee9,	// (0x0008bc07) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7ee9,	// (0x0008bc07) linegrid_cam4_burst_pane_g3_copy1

0xe552,	// (0x00092270) linegrid_cam4_burst_pane_g4_ParamLimits

0xe552,	// (0x00092270) linegrid_cam4_burst_pane_g4

0x7f03,	// (0x0008bc21) linegrid_cam4_burst_pane_g5_ParamLimits

0x7f03,	// (0x0008bc21) linegrid_cam4_burst_pane_g5

0x7f14,	// (0x0008bc32) linegrid_cam4_burst_pane_g6_ParamLimits

0x7f14,	// (0x0008bc32) linegrid_cam4_burst_pane_g6

0xe55f,	// (0x0009227d) linegrid_cam4_burst_pane_g7_ParamLimits

0xe55f,	// (0x0009227d) linegrid_cam4_burst_pane_g7

0x7f2b,	// (0x0008bc49) cell_cam4_burst_pane_g1

0xe578,	// (0x00092296) main_cam5_pane_t1_ParamLimits

0xe578,	// (0x00092296) main_cam5_pane_t1

0xe58a,	// (0x000922a8) main_cam5_pane_t2_ParamLimits

0xe58a,	// (0x000922a8) main_cam5_pane_t2

0xe59c,	// (0x000922ba) main_cam5_pane_t3_ParamLimits

0xe59c,	// (0x000922ba) main_cam5_pane_t3

0xe5ae,	// (0x000922cc) main_cam5_pane_t4_ParamLimits

0xe5ae,	// (0x000922cc) main_cam5_pane_t4

0xe5c6,	// (0x000922e4) main_cam5_pane_t5_ParamLimits

0xe5c6,	// (0x000922e4) main_cam5_pane_t5

0xe5da,	// (0x000922f8) main_cam5_pane_t6_ParamLimits

0xe5da,	// (0x000922f8) main_cam5_pane_t6

0xe5ee,	// (0x0009230c) main_cam5_pane_t7_ParamLimits

0xe5ee,	// (0x0009230c) main_cam5_pane_t7

0xe600,	// (0x0009231e) main_cam5_pane_t8_ParamLimits

0xe600,	// (0x0009231e) main_cam5_pane_t8

0xe61c,	// (0x0009233a) main_cam5_pane_t9_ParamLimits

0xe61c,	// (0x0009233a) main_cam5_pane_t9

0xe62e,	// (0x0009234c) main_cam5_pane_t10_ParamLimits

0xe62e,	// (0x0009234c) main_cam5_pane_t10

0xe640,	// (0x0009235e) main_cam5_pane_t11_ParamLimits

0xe640,	// (0x0009235e) main_cam5_pane_t11

0xe652,	// (0x00092370) main_cam5_pane_t12_ParamLimits

0xe652,	// (0x00092370) main_cam5_pane_t12

0xe667,	// (0x00092385) main_cam5_pane_t13_ParamLimits

0xe667,	// (0x00092385) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0009376b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0009376b) main_cam5_pane_t

0x12b8,	// (0x00084fd6) popup_scut_keymap_window_ParamLimits

0x12b8,	// (0x00084fd6) popup_scut_keymap_window

0x7f3e,	// (0x0008bc5c) aid_size_cell_brow_shortcut

0x2673,	// (0x00086391) bg_popup_window_pane_cp010

0x7f4a,	// (0x0008bc68) grid_scut_pane

0x7f56,	// (0x0008bc74) cell_scut_pane_ParamLimits

0x7f56,	// (0x0008bc74) cell_scut_pane

0x7f6d,	// (0x0008bc8b) cell_scut_pane_g1

0xe684,	// (0x000923a2) cell_scut_pane_t1

0xe693,	// (0x000923b1) cell_scut_pane_t2

0x7f76,	// (0x0008bc94) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00093786) cell_scut_pane_t

0x5e2c,	// (0x00089b4a) main_mup3_pane_g8_ParamLimits

0x5e2c,	// (0x00089b4a) main_mup3_pane_g8

0x72c4,	// (0x0008afe2) area_vitu2_query_pane_ParamLimits

0x72c4,	// (0x0008afe2) area_vitu2_query_pane

0x066b,	// (0x00084389) input_focus_pane_cp08

0xe6a2,	// (0x000923c0) area_vitu2_query_pane_g1

0x0770,	// (0x0008448e) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0009378d) area_vitu2_query_pane_g

0x7f84,	// (0x0008bca2) area_vitu2_query_pane_t1_ParamLimits

0x7f84,	// (0x0008bca2) area_vitu2_query_pane_t1

0x7f98,	// (0x0008bcb6) area_vitu2_query_pane_t2_ParamLimits

0x7f98,	// (0x0008bcb6) area_vitu2_query_pane_t2

0x0781,	// (0x0008449f) area_vitu2_query_pane_t3_ParamLimits

0x0781,	// (0x0008449f) area_vitu2_query_pane_t3

0xe6ae,	// (0x000923cc) area_vitu2_query_pane_t4_ParamLimits

0xe6ae,	// (0x000923cc) area_vitu2_query_pane_t4

0xe6d6,	// (0x000923f4) area_vitu2_query_pane_t5_ParamLimits

0xe6d6,	// (0x000923f4) area_vitu2_query_pane_t5

0xe6fe,	// (0x0009241c) area_vitu2_query_pane_t6_ParamLimits

0xe6fe,	// (0x0009241c) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00093792) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00093792) area_vitu2_query_pane_t

0x7fac,	// (0x0008bcca) bg_button_pane_cp018

0x7fba,	// (0x0008bcd8) bg_button_pane_cp021

0x07a9,	// (0x000844c7) bg_button_pane_cp022

0x07b8,	// (0x000844d6) input_focus_pane_cp09

0xb9a9,	// (0x0008f6c7) aid_size_touch_mv_arrow_left

0xb9d2,	// (0x0008f6f0) aid_size_touch_mv_arrow_right

0x7908,	// (0x0008b626) main_cset_slider_pane_g16_ParamLimits

0x7908,	// (0x0008b626) main_cset_slider_pane_g16

0x7914,	// (0x0008b632) main_cset_slider_pane_g17_ParamLimits

0x7914,	// (0x0008b632) main_cset_slider_pane_g17

0x7f2b,	// (0x0008bc49) cell_cam4_burst_pane_g1_ParamLimits

0x10cd,	// (0x00084deb) compa_mode_pane

0x7aee,	// (0x0008b80c) popup_vtel_slider_window_g3_ParamLimits

0x7aee,	// (0x0008b80c) popup_vtel_slider_window_g3

0x7b05,	// (0x0008b823) popup_vtel_slider_window_g4_ParamLimits

0x7b05,	// (0x0008b823) popup_vtel_slider_window_g4

0x7b1c,	// (0x0008b83a) popup_vtel_slider_window_t1_ParamLimits

0x7b1c,	// (0x0008b83a) popup_vtel_slider_window_t1

0x10cd,	// (0x00084deb) main_cl_pane

0xcfda,	// (0x00090cf8) popup_imed_adjust2_window_ParamLimits

0xcfb2,	// (0x00090cd0) bg_tb_trans_pane_cp05_ParamLimits

0xda54,	// (0x00091772) popup_imed_adjust2_window_g1_ParamLimits

0xda63,	// (0x00091781) popup_imed_adjust2_window_g2_ParamLimits

0xda63,	// (0x00091781) popup_imed_adjust2_window_g2

0xda6f,	// (0x0009178d) popup_imed_adjust2_window_g3_ParamLimits

0xda6f,	// (0x0009178d) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000934fd) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000934fd) popup_imed_adjust2_window_g

0xda7b,	// (0x00091799) popup_imed_adjust2_window_t1_ParamLimits

0xda93,	// (0x000917b1) slider_imed_adjust_pane_ParamLimits

0xdaa7,	// (0x000917c5) slider_imed_adjust_pane_g1_ParamLimits

0xdab7,	// (0x000917d5) slider_imed_adjust_pane_g2_ParamLimits

0xdac7,	// (0x000917e5) slider_imed_adjust_pane_g3_ParamLimits

0xdad8,	// (0x000917f6) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x00093504) slider_imed_adjust_pane_g_ParamLimits

0x703b,	// (0x0008ad59) aid_touch_area_cam4_ParamLimits

0x703b,	// (0x0008ad59) aid_touch_area_cam4

0xeac3,	// (0x000927e1) battery_pane_cp01

0x710a,	// (0x0008ae28) main_camera4_pane_g6_ParamLimits

0x710a,	// (0x0008ae28) main_camera4_pane_g6

0x7134,	// (0x0008ae52) main_camera4_pane_t2_ParamLimits

0x7134,	// (0x0008ae52) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00093607) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00093607) main_camera4_pane_t

0x717b,	// (0x0008ae99) aid_touch_area_vid4_ParamLimits

0x717b,	// (0x0008ae99) aid_touch_area_vid4

0x71cf,	// (0x0008aeed) main_video4_pane_g5_ParamLimits

0x71cf,	// (0x0008aeed) main_video4_pane_g5

0x71f4,	// (0x0008af12) vid4_progress_pane_ParamLimits

0x71f4,	// (0x0008af12) vid4_progress_pane

0xe35f,	// (0x0009207d) main_cset_slider_pane_g18_ParamLimits

0xe35f,	// (0x0009207d) main_cset_slider_pane_g18

0xe56c,	// (0x0009228a) cell_cam4_burst_pane_g2_ParamLimits

0xe56c,	// (0x0009228a) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00093766) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00093766) cell_cam4_burst_pane_g

0x1d96,	// (0x00085ab4) bg_cl_pane_ParamLimits

0x1d96,	// (0x00085ab4) bg_cl_pane

0x7fc6,	// (0x0008bce4) cl_header_pane_ParamLimits

0x7fc6,	// (0x0008bce4) cl_header_pane

0x7fda,	// (0x0008bcf8) cl_listscroll_pane_ParamLimits

0x7fda,	// (0x0008bcf8) cl_listscroll_pane

0xec2a,	// (0x00092948) bg_cl_pane_g1

0xec32,	// (0x00092950) bg_cl_pane_g2

0xec3a,	// (0x00092958) bg_cl_pane_g3

0xec42,	// (0x00092960) bg_cl_pane_g4

0xec4a,	// (0x00092968) bg_cl_pane_g5

0xec52,	// (0x00092970) bg_cl_pane_g6

0xec5a,	// (0x00092978) bg_cl_pane_g7

0xec62,	// (0x00092980) bg_cl_pane_g8

0xec6a,	// (0x00092988) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000937a1) bg_cl_pane_g

0x7fea,	// (0x0008bd08) aid_height_cl_leading_ParamLimits

0x7fea,	// (0x0008bd08) aid_height_cl_leading

0x7ff6,	// (0x0008bd14) aid_height_cl_text_ParamLimits

0x7ff6,	// (0x0008bd14) aid_height_cl_text

0x12f8,	// (0x00085016) bg_cl_header_pane_ParamLimits

0x12f8,	// (0x00085016) bg_cl_header_pane

0x8015,	// (0x0008bd33) cl_header_pane_g1_ParamLimits

0x8015,	// (0x0008bd33) cl_header_pane_g1

0x802b,	// (0x0008bd49) cl_header_pane_t1_ParamLimits

0x802b,	// (0x0008bd49) cl_header_pane_t1

0xec72,	// (0x00092990) cl_list_pane

0xe332,	// (0x00092050) hc_scroll_pane_cp01

0x3074,	// (0x00086d92) bg_cl_header_pane_g1

0xe218,	// (0x00091f36) bg_cl_header_pane_g2

0xb2a6,	// (0x0008efc4) bg_cl_header_pane_g3

0xe228,	// (0x00091f46) bg_cl_header_pane_g4

0xe220,	// (0x00091f3e) bg_cl_header_pane_g5

0xe47b,	// (0x00092199) bg_cl_header_pane_g6

0xe240,	// (0x00091f5e) bg_cl_header_pane_g7

0xe248,	// (0x00091f66) bg_cl_header_pane_g8

0xe238,	// (0x00091f56) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000937b4) bg_cl_header_pane_g

0x8044,	// (0x0008bd62) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8044,	// (0x0008bd62) hc_cl_list_double_graphic_heading_pane

0x8055,	// (0x0008bd73) hc_cl_list_single_graphic_pane_ParamLimits

0x8055,	// (0x0008bd73) hc_cl_list_single_graphic_pane

0x806b,	// (0x0008bd89) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x806b,	// (0x0008bd89) hc_cl_list_single_graphic_pane_g1

0x8077,	// (0x0008bd95) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8077,	// (0x0008bd95) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000937c7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000937c7) hc_cl_list_single_graphic_pane_g

0x808b,	// (0x0008bda9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x808b,	// (0x0008bda9) hc_cl_list_single_graphic_pane_t1

0x806b,	// (0x0008bd89) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x806b,	// (0x0008bd89) hc_cl_list_double_graphic_heading_pane_g1

0x80a0,	// (0x0008bdbe) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x80a0,	// (0x0008bdbe) hc_cl_list_double_graphic_heading_pane_g2

0x80b4,	// (0x0008bdd2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x80b4,	// (0x0008bdd2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000937cc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000937cc) hc_cl_list_double_graphic_heading_pane_g

0x80c8,	// (0x0008bde6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x80c8,	// (0x0008bde6) hc_cl_list_double_graphic_heading_pane_t1

0x80dd,	// (0x0008bdfb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x80dd,	// (0x0008bdfb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000937d3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000937d3) hc_cl_list_double_graphic_heading_pane_t

0xec83,	// (0x000929a1) vid4_progress_pane_g1

0xec93,	// (0x000929b1) vid4_progress_pane_g2

0x80f2,	// (0x0008be10) vid4_progress_pane_g3

0xeca3,	// (0x000929c1) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000937d8) vid4_progress_pane_g

0x8104,	// (0x0008be22) vid4_progress_pane_t1

0xecbb,	// (0x000929d9) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000937e3) vid4_progress_pane_t

0x811c,	// (0x0008be3a) wait_bar_pane_cp07

0xd2c0,	// (0x00090fde) blid_firmament_pane_ParamLimits

0xd303,	// (0x00091021) popup_blid_sat_info2_window_g1

0xd327,	// (0x00091045) popup_blid_sat_info2_window_t3

0xd335,	// (0x00091053) popup_blid_sat_info2_window_t4

0xd343,	// (0x00091061) popup_blid_sat_info2_window_t5

0xd351,	// (0x0009106f) popup_blid_sat_info2_window_t6

0xd361,	// (0x0009107f) popup_blid_sat_info2_window_t7

0xd36f,	// (0x0009108d) popup_blid_sat_info2_window_t8

0xd37d,	// (0x0009109b) popup_blid_sat_info2_window_t9

0xd38b,	// (0x000910a9) popup_blid_sat_info2_window_t10

0xd44d,	// (0x0009116b) aid_firma_cardinal_ParamLimits

0xd461,	// (0x0009117f) blid_firmament_pane_t1_ParamLimits

0xd478,	// (0x00091196) blid_firmament_pane_t2_ParamLimits

0xd48f,	// (0x000911ad) blid_firmament_pane_t3_ParamLimits

0xd4a6,	// (0x000911c4) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000933f1) blid_firmament_pane_t_ParamLimits

0xd4bd,	// (0x000911db) blid_sat_info_pane_ParamLimits

0x12f8,	// (0x00085016) main_cam_set_pane_ParamLimits

0x66f3,	// (0x0008a411) aid_size_cell_colour_35_ParamLimits

0x6713,	// (0x0008a431) aid_size_cell_colour_112_ParamLimits

0x6733,	// (0x0008a451) aid_size_cell_effect_ParamLimits

0xcfb2,	// (0x00090cd0) bg_tb_trans_pane_cp02_ParamLimits

0xb51c,	// (0x0008f23a) heading_imed_pane_ParamLimits

0x6753,	// (0x0008a471) listscroll_imed_pane_ParamLimits

0xc5d8,	// (0x000902f6) popup_call2_audio_first_window_g5_ParamLimits

0xc5d8,	// (0x000902f6) popup_call2_audio_first_window_g5

0x6ce6,	// (0x0008aa04) aid_size_touch_image3_arrow_left_ParamLimits

0x6ce6,	// (0x0008aa04) aid_size_touch_image3_arrow_left

0x6d12,	// (0x0008aa30) aid_size_touch_image3_arrow_right_ParamLimits

0x6d12,	// (0x0008aa30) aid_size_touch_image3_arrow_right

0xecd0,	// (0x000929ee) vid4_progress_pane_t3

0x6a66,	// (0x0008a784) main_hwr_training_symbol_option_pane_ParamLimits

0x6a66,	// (0x0008a784) main_hwr_training_symbol_option_pane

0xdd41,	// (0x00091a5f) popup_hwr_training_preview_window_ParamLimits

0xdd41,	// (0x00091a5f) popup_hwr_training_preview_window

0x6a86,	// (0x0008a7a4) hwr_training_navi_pane_g5_ParamLimits

0x6a86,	// (0x0008a7a4) hwr_training_navi_pane_g5

0xe206,	// (0x00091f24) popup_char_count_window

0x12f8,	// (0x00085016) bg_popup_sub_pane_cp20_ParamLimits

0x7c2a,	// (0x0008b948) list_vitu2_match_list_pane_ParamLimits

0x7c39,	// (0x0008b957) vitu2_page_scroll_pane_ParamLimits

0x7c39,	// (0x0008b957) vitu2_page_scroll_pane

0xeced,	// (0x00092a0b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xeced,	// (0x00092a0b) list_single_hwr_training_symbol_option_pane

0xed00,	// (0x00092a1e) list_single_hwr_training_symbol_option_pane_g1

0xed08,	// (0x00092a26) list_single_hwr_training_symbol_option_pane_t1

0xed16,	// (0x00092a34) bg_button_pane_cp023

0xed1f,	// (0x00092a3d) bg_button_pane_cp024

0x8153,	// (0x0008be71) vitu2_page_scroll_pane_g1

0x815b,	// (0x0008be79) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000937ea) vitu2_page_scroll_pane_g

0x8163,	// (0x0008be81) vitu2_page_scroll_pane_t1

0xd1dc,	// (0x00090efa) popup_char_count_window_g1

0xed52,	// (0x00092a70) popup_char_count_window_g2

0xed5b,	// (0x00092a79) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000937ef) popup_char_count_window_g

0xed64,	// (0x00092a82) popup_char_count_window_t1

0x10cd,	// (0x00084deb) main_vded2_pane

0xda40,	// (0x0009175e) aid_size_cell_imed_line

0xda4a,	// (0x00091768) grid_imed_line_width_pane

0xeb7b,	// (0x00092899) vid4_indicators_pane_g4

0xed72,	// (0x00092a90) cell_imed_line_width_pane_ParamLimits

0xed72,	// (0x00092a90) cell_imed_line_width_pane

0xed86,	// (0x00092aa4) cell_imed_line_width_pane_g1

0xed8f,	// (0x00092aad) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000937f6) cell_imed_line_width_pane_g

0x8172,	// (0x0008be90) main_vded2_pane_g1_ParamLimits

0x8172,	// (0x0008be90) main_vded2_pane_g1

0x8188,	// (0x0008bea6) main_vded2_pane_g2_ParamLimits

0x8188,	// (0x0008bea6) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000937fb) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000937fb) main_vded2_pane_g

0x819a,	// (0x0008beb8) vded2_slider_pane_ParamLimits

0x819a,	// (0x0008beb8) vded2_slider_pane

0x81aa,	// (0x0008bec8) aid_size_touch_vded2_end

0x81b4,	// (0x0008bed2) aid_size_touch_vded2_playhead

0xed97,	// (0x00092ab5) aid_size_touch_vded2_start

0xed9f,	// (0x00092abd) vded2_slider_bg_pane

0xeda8,	// (0x00092ac6) vded2_slider_pane_g1

0xedb1,	// (0x00092acf) vded2_slider_pane_g2

0x81be,	// (0x0008bedc) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00093800) vded2_slider_pane_g

0xedb9,	// (0x00092ad7) vded2_slider_bg_pane_g1

0xedc2,	// (0x00092ae0) vded2_slider_bg_pane_g2

0xedcb,	// (0x00092ae9) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00093807) vded2_slider_bg_pane_g

0x444b,	// (0x00088169) aid_postcard_touch_down_pane_ParamLimits

0x444b,	// (0x00088169) aid_postcard_touch_down_pane

0x4461,	// (0x0008817f) aid_postcard_touch_up_pane_ParamLimits

0x4461,	// (0x0008817f) aid_postcard_touch_up_pane

0x10cd,	// (0x00084deb) main_blid2_pane

0xcfc0,	// (0x00090cde) popup_blid2_search_window

0x10cd,	// (0x00084deb) blid2_gps_pane

0x10cd,	// (0x00084deb) blid2_navig_pane

0x10cd,	// (0x00084deb) blid2_search_pane

0x10cd,	// (0x00084deb) blid2_tripm_pane

0x81c9,	// (0x0008bee7) blid2_search_pane_g1_ParamLimits

0x81c9,	// (0x0008bee7) blid2_search_pane_g1

0x81e3,	// (0x0008bf01) blid2_search_pane_t1_ParamLimits

0x81e3,	// (0x0008bf01) blid2_search_pane_t1

0x81f5,	// (0x0008bf13) aid_size_cell_blid2_gps_ParamLimits

0x81f5,	// (0x0008bf13) aid_size_cell_blid2_gps

0x820d,	// (0x0008bf2b) blid2_gps_pane_g1_ParamLimits

0x820d,	// (0x0008bf2b) blid2_gps_pane_g1

0x8221,	// (0x0008bf3f) grid_blid2_satellite_pane_ParamLimits

0x8221,	// (0x0008bf3f) grid_blid2_satellite_pane

0x823b,	// (0x0008bf59) blid2_navig_pane_g1_ParamLimits

0x823b,	// (0x0008bf59) blid2_navig_pane_g1

0x8247,	// (0x0008bf65) blid2_navig_pane_t1_ParamLimits

0x8247,	// (0x0008bf65) blid2_navig_pane_t1

0x8262,	// (0x0008bf80) blid2_navig_pane_t2_ParamLimits

0x8262,	// (0x0008bf80) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0009380e) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0009380e) blid2_navig_pane_t

0x827d,	// (0x0008bf9b) blid2_navig_ring_pane_ParamLimits

0x827d,	// (0x0008bf9b) blid2_navig_ring_pane

0x8296,	// (0x0008bfb4) blid2_speed_pane_ParamLimits

0x8296,	// (0x0008bfb4) blid2_speed_pane

0x82a2,	// (0x0008bfc0) blid2_tripm_pane_g1_ParamLimits

0x82a2,	// (0x0008bfc0) blid2_tripm_pane_g1

0x82bb,	// (0x0008bfd9) blid2_tripm_pane_g2_ParamLimits

0x82bb,	// (0x0008bfd9) blid2_tripm_pane_g2

0x82cf,	// (0x0008bfed) blid2_tripm_pane_g3_ParamLimits

0x82cf,	// (0x0008bfed) blid2_tripm_pane_g3

0x82e3,	// (0x0008c001) blid2_tripm_pane_g4_ParamLimits

0x82e3,	// (0x0008c001) blid2_tripm_pane_g4

0x82f7,	// (0x0008c015) blid2_tripm_pane_g5_ParamLimits

0x82f7,	// (0x0008c015) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00093813) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00093813) blid2_tripm_pane_g

0x831d,	// (0x0008c03b) blid2_tripm_pane_t1_ParamLimits

0x831d,	// (0x0008c03b) blid2_tripm_pane_t1

0x8338,	// (0x0008c056) blid2_tripm_pane_t2_ParamLimits

0x8338,	// (0x0008c056) blid2_tripm_pane_t2

0x8351,	// (0x0008c06f) blid2_tripm_pane_t3_ParamLimits

0x8351,	// (0x0008c06f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00093820) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00093820) blid2_tripm_pane_t

0x8398,	// (0x0008c0b6) cell_blid2_satellite_pane_ParamLimits

0x8398,	// (0x0008c0b6) cell_blid2_satellite_pane

0x83b6,	// (0x0008c0d4) cell_blid2_satellite_pane_g1

0xedd4,	// (0x00092af2) cell_blid2_satellite_pane_t1

0xd4cd,	// (0x000911eb) blid2_speed_pane_g1

0xede2,	// (0x00092b00) blid2_speed_pane_t1

0xedf0,	// (0x00092b0e) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00093829) blid2_speed_pane_t

0xd4cd,	// (0x000911eb) blid2_navig_ring_pane_g1

0x83bf,	// (0x0008c0dd) blid2_navig_ring_pane_g2

0x83c7,	// (0x0008c0e5) blid2_navig_ring_pane_g3

0x83cf,	// (0x0008c0ed) blid2_navig_ring_pane_g4

0x83d7,	// (0x0008c0f5) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0009382e) blid2_navig_ring_pane_g

0x10cd,	// (0x00084deb) bg_popup_window_pane_cp011

0xedfe,	// (0x00092b1c) popup_blid2_search_window_g1

0xee06,	// (0x00092b24) popup_blid2_search_window_t1

0xee14,	// (0x00092b32) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00093839) popup_blid2_search_window_t

0x2f40,	// (0x00086c5e) main_browser_pane_g1

0x1d96,	// (0x00085ab4) main_browser_pane_ParamLimits

0x12f8,	// (0x00085016) bg_button_pane_cp011_ParamLimits

0x74de,	// (0x0008b1fc) cell_vitu2_function_pane_g1_ParamLimits

0xcfb2,	// (0x00090cd0) bg_popup_sub_pane_cp22_ParamLimits

0x066b,	// (0x00084389) input_focus_pane_cp08_ParamLimits

0x7dbc,	// (0x0008bada) popup_vitu2_query_button_pane_ParamLimits

0x7dbc,	// (0x0008bada) popup_vitu2_query_button_pane

0x0682,	// (0x000843a0) popup_vitu2_query_input_button_pane

0xe4b6,	// (0x000921d4) popup_vitu2_query_window_g1_ParamLimits

0x068c,	// (0x000843aa) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0009373a) popup_vitu2_query_window_g_ParamLimits

0x10cd,	// (0x00084deb) bg_button_pane_cp026

0x83df,	// (0x0008c0fd) popup_vitu2_query_input_button_pane_g1

0x10cd,	// (0x00084deb) bg_button_pane_cp025

0xee22,	// (0x00092b40) popup_vitu2_query_button_pane_t1

0x5ae1,	// (0x000897ff) main_mp3_pane_t6

0x5aef,	// (0x0008980d) popup_slider_window_cp01

0xeadf,	// (0x000927fd) cam4_battery_pane

0xeb38,	// (0x00092856) cam4_battery_pane_cp02

0xec7b,	// (0x00092999) cam4_battery_pane_cp01

0xec7b,	// (0x00092999) cam4_battery_pane_cp03

0xd4cd,	// (0x000911eb) cam4_battery_pane_g1

0xee30,	// (0x00092b4e) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0009383e) cam4_battery_pane_g

0xd399,	// (0x000910b7) popup_blid_sat_info2_window_t11

0xb9a9,	// (0x0008f6c7) aid_size_touch_mv_arrow_left_ParamLimits

0xb9d2,	// (0x0008f6f0) aid_size_touch_mv_arrow_right_ParamLimits

0xba30,	// (0x0008f74e) navi_pane_g1_ParamLimits

0xba3c,	// (0x0008f75a) navi_pane_g2_ParamLimits

0xba6a,	// (0x0008f788) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00093103) navi_pane_g_ParamLimits

0x3f41,	// (0x00087c5f) navi_pane_mv_t1_ParamLimits

0x675f,	// (0x0008a47d) grid_imed_effect_pane_ParamLimits

0x2ae4,	// (0x00086802) aid_placing_vt_slider_lsc

0x2af4,	// (0x00086812) aid_placing_vt_slider_prt

0x12f8,	// (0x00085016) bg_tb_trans_pane_cp01_ParamLimits

0xd659,	// (0x00091377) popup_image_details_window_g1_ParamLimits

0xd66c,	// (0x0009138a) popup_image_details_window_g2_ParamLimits

0xd681,	// (0x0009139f) popup_image_details_window_g3_ParamLimits

0xd681,	// (0x0009139f) popup_image_details_window_g3

0xf718,	// (0x00093436) popup_image_details_window_g_ParamLimits

0xd695,	// (0x000913b3) popup_image_details_window_t1_ParamLimits

0xd6a7,	// (0x000913c5) popup_image_details_window_t2_ParamLimits

0xd6c0,	// (0x000913de) popup_image_details_window_t3_ParamLimits

0xd6d4,	// (0x000913f2) popup_image_details_window_t4_ParamLimits

0xd6ef,	// (0x0009140d) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0009343d) popup_image_details_window_t_ParamLimits

0x8002,	// (0x0008bd20) cl_header_name_pane_ParamLimits

0x8002,	// (0x0008bd20) cl_header_name_pane

0x83e7,	// (0x0008c105) cl_header_name_pane_t1_ParamLimits

0x83e7,	// (0x0008c105) cl_header_name_pane_t1

0x8408,	// (0x0008c126) cl_header_name_pane_t2_ParamLimits

0x8408,	// (0x0008c126) cl_header_name_pane_t2

0x844a,	// (0x0008c168) cl_header_name_pane_t3_ParamLimits

0x844a,	// (0x0008c168) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00093843) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00093843) cl_header_name_pane_t

0xbaf9,	// (0x0008f817) navi_pane_mv_g2_ParamLimits

0xe1c3,	// (0x00091ee1) field_vitu2_entry_pane_g1_ParamLimits

0xe1cf,	// (0x00091eed) field_vitu2_entry_pane_g2_ParamLimits

0xe1db,	// (0x00091ef9) field_vitu2_entry_pane_g3_ParamLimits

0xe1db,	// (0x00091ef9) field_vitu2_entry_pane_g3

0xf91b,	// (0x00093639) field_vitu2_entry_pane_g_ParamLimits

0xebb0,	// (0x000928ce) cell_vitu2_itu_pane_g1_ParamLimits

0x7472,	// (0x0008b190) cell_vitu2_itu_pane_g2_ParamLimits

0x7472,	// (0x0008b190) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00093645) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00093645) cell_vitu2_itu_pane_g

0x12f8,	// (0x00085016) bg_vkb2_func_pane_cp05_ParamLimits

0x12f8,	// (0x00085016) bg_vkb2_func_pane_cp05

0x12f8,	// (0x00085016) bg_vkb2_func_pane_cp03

0x12f8,	// (0x00085016) bg_vkb2_func_pane_cp04

0x12f8,	// (0x00085016) bg_vkb2_func_pane_cp10_ParamLimits

0x12f8,	// (0x00085016) bg_vkb2_func_pane_cp10

0x07a9,	// (0x000844c7) bg_vkb2_func_pane_cp08

0x7fac,	// (0x0008bcca) bg_vkb2_func_pane_cp06

0x7fba,	// (0x0008bcd8) bg_vkb2_func_pane_cp07

0xed28,	// (0x00092a46) bg_vkb2_func_pane_cp11_ParamLimits

0xed28,	// (0x00092a46) bg_vkb2_func_pane_cp11

0xed3d,	// (0x00092a5b) bg_vkb2_func_pane_cp12_ParamLimits

0xed3d,	// (0x00092a5b) bg_vkb2_func_pane_cp12

0x10cd,	// (0x00084deb) bg_vkb2_func_pane_cp09

0xe218,	// (0x00091f36) bg_vkb2_func_pane_g1

0xb2a6,	// (0x0008efc4) bg_vkb2_func_pane_g2

0xe220,	// (0x00091f3e) bg_vkb2_func_pane_g3

0xe228,	// (0x00091f46) bg_vkb2_func_pane_g4

0xe47b,	// (0x00092199) bg_vkb2_func_pane_g5

0xe240,	// (0x00091f5e) bg_vkb2_func_pane_g6

0xe248,	// (0x00091f66) bg_vkb2_func_pane_g7

0xe238,	// (0x00091f56) bg_vkb2_func_pane_g8

0x3074,	// (0x00086d92) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0009384a) bg_vkb2_func_pane_g

0x830b,	// (0x0008c029) blid2_tripm_pane_g6_ParamLimits

0x830b,	// (0x0008c029) blid2_tripm_pane_g6

0xe032,	// (0x00091d50) mp4_progress_pane_g1

0x8384,	// (0x0008c0a2) blid2_tripm_values_pane_ParamLimits

0x8384,	// (0x0008c0a2) blid2_tripm_values_pane

0x847b,	// (0x0008c199) blid2_tripm_values_pane_t1

0x8489,	// (0x0008c1a7) blid2_tripm_values_pane_t2

0x8497,	// (0x0008c1b5) blid2_tripm_values_pane_t3

0x84a5,	// (0x0008c1c3) blid2_tripm_values_pane_t4

0x84b3,	// (0x0008c1d1) blid2_tripm_values_pane_t5

0x84c1,	// (0x0008c1df) blid2_tripm_values_pane_t6

0x84cf,	// (0x0008c1ed) blid2_tripm_values_pane_t7

0x84dd,	// (0x0008c1fb) blid2_tripm_values_pane_t8

0x84eb,	// (0x0008c209) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0009385d) blid2_tripm_values_pane_t

0x2b30,	// (0x0008684e) call_video_pane_t1_ParamLimits

0x2b4e,	// (0x0008686c) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00092f8c) call_video_pane_t_ParamLimits

0x045a,	// (0x00084178) msg_header_pane_g1_ParamLimits

0xbcf3,	// (0x0008fa11) msg_header_pane_g2_ParamLimits

0xbcf3,	// (0x0008fa11) msg_header_pane_g2

0x0001,

0xf488,	// (0x000931a6) msg_header_pane_g_ParamLimits

0xf488,	// (0x000931a6) msg_header_pane_g

0x1d96,	// (0x00085ab4) main_clock2_pane_ParamLimits

0x645d,	// (0x0008a17b) grid_clock2_toolbar_pane_ParamLimits

0x645d,	// (0x0008a17b) grid_clock2_toolbar_pane

0x645d,	// (0x0008a17b) listscroll_clock2_pane_ParamLimits

0x645d,	// (0x0008a17b) listscroll_clock2_pane

0x6554,	// (0x0008a272) main_clock2_pane_t3_ParamLimits

0x6554,	// (0x0008a272) main_clock2_pane_t3

0x6578,	// (0x0008a296) main_clock2_pane_t4_ParamLimits

0x6578,	// (0x0008a296) main_clock2_pane_t4

0xee3a,	// (0x00092b58) cell_clock2_toolbar_pane

0xee42,	// (0x00092b60) cell_clock2_toolbar_pane_cp01

0xee42,	// (0x00092b60) cell_clock2_toolbar_pane_cp02

0xee4a,	// (0x00092b68) cell_clock2_toolbar_pane_cp03

0xee52,	// (0x00092b70) list_clock2_pane

0xb91f,	// (0x0008f63d) scroll_pane_cp10

0xee5a,	// (0x00092b78) list_single_clock2_pane_ParamLimits

0xee5a,	// (0x00092b78) list_single_clock2_pane

0x2673,	// (0x00086391) list_highlight_pane_cp08

0xee67,	// (0x00092b85) list_single_clock2_pane_t1

0xee75,	// (0x00092b93) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00093870) list_single_clock2_pane_t

0x10cd,	// (0x00084deb) bg_button_pane_cp10

0xee83,	// (0x00092ba1) cell_clock2_toolbar_pane_g1

0x43d7,	// (0x000880f5) aid_main_viewer_pane_g1_ParamLimits

0x43d7,	// (0x000880f5) aid_main_viewer_pane_g1

0x43e5,	// (0x00088103) aid_main_viewer_pane_g2_ParamLimits

0x43e5,	// (0x00088103) aid_main_viewer_pane_g2

0x43f3,	// (0x00088111) aid_main_viewer_pane_g3_ParamLimits

0x43f3,	// (0x00088111) aid_main_viewer_pane_g3

0x4402,	// (0x00088120) aid_main_viewer_pane_g4_ParamLimits

0x4402,	// (0x00088120) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000931b7) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000931b7) aid_main_viewer_pane_g

0x4d08,	// (0x00088a26) main_calc_pane_ParamLimits

0x4d1c,	// (0x00088a3a) main_dialer2_pane_ParamLimits

0x10cd,	// (0x00084deb) main_cam6_pane

0x10cd,	// (0x00084deb) main_vid6_pane

0x6469,	// (0x0008a187) listscroll_gen_pane_cp06_ParamLimits

0x6469,	// (0x0008a187) listscroll_gen_pane_cp06

0x659b,	// (0x0008a2b9) main_clock2_pane_t5_ParamLimits

0x659b,	// (0x0008a2b9) main_clock2_pane_t5

0x65f5,	// (0x0008a313) aid_call2_pane_cp10_ParamLimits

0x6607,	// (0x0008a325) aid_call_pane_cp10_ParamLimits

0xb99d,	// (0x0008f6bb) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb99d,	// (0x0008f6bb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6619,	// (0x0008a337) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6619,	// (0x0008a337) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb99d,	// (0x0008f6bb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000934f2) popup_clock_analogue_window_cp10_g_ParamLimits

0x662b,	// (0x0008a349) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6c93,	// (0x0008a9b1) cell_dialer2_keypad_pane_g2_ParamLimits

0x6c93,	// (0x0008a9b1) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000935d8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000935d8) cell_dialer2_keypad_pane_g

0x6caf,	// (0x0008a9cd) cell_dialer2_keypad_pane_t1

0x77fb,	// (0x0008b519) main_cset_text2_pane_ParamLimits

0x77fb,	// (0x0008b519) main_cset_text2_pane

0xe6a2,	// (0x000923c0) area_vitu2_query_pane_g1_ParamLimits

0x0770,	// (0x0008448e) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0009378d) area_vitu2_query_pane_g_ParamLimits

0xe726,	// (0x00092444) area_vitu2_query_pane_t7_ParamLimits

0xe726,	// (0x00092444) area_vitu2_query_pane_t7

0x7fac,	// (0x0008bcca) bg_button_pane_cp018_ParamLimits

0x7fba,	// (0x0008bcd8) bg_button_pane_cp021_ParamLimits

0x07a9,	// (0x000844c7) bg_button_pane_cp022_ParamLimits

0x07a9,	// (0x000844c7) bg_vkb2_func_pane_cp08_ParamLimits

0x7fac,	// (0x0008bcca) bg_vkb2_func_pane_cp06_ParamLimits

0x7fba,	// (0x0008bcd8) bg_vkb2_func_pane_cp07_ParamLimits

0x07b8,	// (0x000844d6) input_focus_pane_cp09_ParamLimits

0xee8b,	// (0x00092ba9) cam6_autofocus_pane_ParamLimits

0xee8b,	// (0x00092ba9) cam6_autofocus_pane

0x84f9,	// (0x0008c217) cam6_image_uncrop_pane_ParamLimits

0x84f9,	// (0x0008c217) cam6_image_uncrop_pane

0x8508,	// (0x0008c226) cam6_indi_pane_ParamLimits

0x8508,	// (0x0008c226) cam6_indi_pane

0x851e,	// (0x0008c23c) cam6_mode_pane_ParamLimits

0x851e,	// (0x0008c23c) cam6_mode_pane

0x8530,	// (0x0008c24e) cam6_timer_pane_ParamLimits

0x8530,	// (0x0008c24e) cam6_timer_pane

0x853c,	// (0x0008c25a) cam6_zoom_pane_ParamLimits

0x853c,	// (0x0008c25a) cam6_zoom_pane

0x8548,	// (0x0008c266) cam6_mode_pane_g1_ParamLimits

0x8548,	// (0x0008c266) cam6_mode_pane_g1

0x8558,	// (0x0008c276) cam6_mode_pane_g2_ParamLimits

0x8558,	// (0x0008c276) cam6_mode_pane_g2

0x8568,	// (0x0008c286) cam6_mode_pane_g3_ParamLimits

0x8568,	// (0x0008c286) cam6_mode_pane_g3

0x8578,	// (0x0008c296) cam6_mode_pane_g4_ParamLimits

0x8578,	// (0x0008c296) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00093875) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00093875) cam6_mode_pane_g

0xe75b,	// (0x00092479) bg_tb_trans_pane_cp08_ParamLimits

0xe75b,	// (0x00092479) bg_tb_trans_pane_cp08

0xee99,	// (0x00092bb7) cam6_battery_pane_ParamLimits

0xee99,	// (0x00092bb7) cam6_battery_pane

0xeeaf,	// (0x00092bcd) cam6_indi_pane_g1_ParamLimits

0xeeaf,	// (0x00092bcd) cam6_indi_pane_g1

0xeec1,	// (0x00092bdf) cam6_indi_pane_g2_ParamLimits

0xeec1,	// (0x00092bdf) cam6_indi_pane_g2

0xeed3,	// (0x00092bf1) cam6_indi_pane_g3_ParamLimits

0xeed3,	// (0x00092bf1) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0009387e) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0009387e) cam6_indi_pane_g

0xeee5,	// (0x00092c03) cam6_indi_pane_t1_ParamLimits

0xeee5,	// (0x00092c03) cam6_indi_pane_t1

0x8588,	// (0x0008c2a6) cam6_autofocus_pane_g1

0x8590,	// (0x0008c2ae) cam6_autofocus_pane_g2

0x8598,	// (0x0008c2b6) cam6_autofocus_pane_g3

0x85a0,	// (0x0008c2be) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00093885) cam6_autofocus_pane_g

0xef0b,	// (0x00092c29) cam6_timer_pane_g1

0xef13,	// (0x00092c31) cam6_timer_pane_t1

0xef21,	// (0x00092c3f) cam6_zoom_cont_pane

0xef29,	// (0x00092c47) cam6_zoom_pane_g1

0xef31,	// (0x00092c4f) cam6_zoom_pane_g2

0x85a8,	// (0x0008c2c6) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0009388e) cam6_zoom_pane_g

0xd4cd,	// (0x000911eb) cam6_battery_pane_g1

0xd4cd,	// (0x000911eb) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000933fa) cam6_battery_pane_g

0xef39,	// (0x00092c57) cam6_zoom_cont_pane_g1

0xef42,	// (0x00092c60) cam6_zoom_cont_pane_g2

0xef4b,	// (0x00092c69) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00093895) cam6_zoom_cont_pane_g

0x85c5,	// (0x0008c2e3) cam6_mode_pane_cp_ParamLimits

0x85c5,	// (0x0008c2e3) cam6_mode_pane_cp

0x853c,	// (0x0008c25a) cam6_zoom_pane_cp_ParamLimits

0x853c,	// (0x0008c25a) cam6_zoom_pane_cp

0x85d7,	// (0x0008c2f5) vid6_image_uncrop_cif_pane_ParamLimits

0x85d7,	// (0x0008c2f5) vid6_image_uncrop_cif_pane

0x85e7,	// (0x0008c305) vid6_image_uncrop_nhd_pane_ParamLimits

0x85e7,	// (0x0008c305) vid6_image_uncrop_nhd_pane

0x84f9,	// (0x0008c217) vid6_image_uncrop_vga_pane_ParamLimits

0x84f9,	// (0x0008c217) vid6_image_uncrop_vga_pane

0x85f6,	// (0x0008c314) vid6_image_uncrop_wvga_pane_ParamLimits

0x85f6,	// (0x0008c314) vid6_image_uncrop_wvga_pane

0x8605,	// (0x0008c323) vid6_indi_pane_ParamLimits

0x8605,	// (0x0008c323) vid6_indi_pane

0xe75b,	// (0x00092479) bg_tb_trans_pane_cp09_ParamLimits

0xe75b,	// (0x00092479) bg_tb_trans_pane_cp09

0xef63,	// (0x00092c81) cam6_battery_pane_cp_ParamLimits

0xef63,	// (0x00092c81) cam6_battery_pane_cp

0xef6f,	// (0x00092c8d) vid6_indi_pane_g1_ParamLimits

0xef6f,	// (0x00092c8d) vid6_indi_pane_g1

0xef81,	// (0x00092c9f) vid6_indi_pane_g2_ParamLimits

0xef81,	// (0x00092c9f) vid6_indi_pane_g2

0xef93,	// (0x00092cb1) vid6_indi_pane_g3_ParamLimits

0xef93,	// (0x00092cb1) vid6_indi_pane_g3

0xefa8,	// (0x00092cc6) vid6_indi_pane_g4_ParamLimits

0xefa8,	// (0x00092cc6) vid6_indi_pane_g4

0xefbd,	// (0x00092cdb) vid6_indi_pane_g5_ParamLimits

0xefbd,	// (0x00092cdb) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0009389c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0009389c) vid6_indi_pane_g

0xefd7,	// (0x00092cf5) vid6_indi_pane_t1_ParamLimits

0xefd7,	// (0x00092cf5) vid6_indi_pane_t1

0xefed,	// (0x00092d0b) vid6_indi_pane_t2_ParamLimits

0xefed,	// (0x00092d0b) vid6_indi_pane_t2

0xf015,	// (0x00092d33) vid6_indi_pane_t3_ParamLimits

0xf015,	// (0x00092d33) vid6_indi_pane_t3

0xf03d,	// (0x00092d5b) vid6_indi_pane_t4_ParamLimits

0xf03d,	// (0x00092d5b) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000938a7) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000938a7) vid6_indi_pane_t

0x861d,	// (0x0008c33b) wait_bar_pane_cp08

0x862c,	// (0x0008c34a) main_cset_text2_pane_t1_ParamLimits

0x862c,	// (0x0008c34a) main_cset_text2_pane_t1

0x85b0,	// (0x0008c2ce) listscroll_gen_pane_cp06_t1_ParamLimits

0x85b0,	// (0x0008c2ce) listscroll_gen_pane_cp06_t1

0x10cd,	// (0x00084deb) main_cam6_set_pane

0xd739,	// (0x00091457) bg_tb_trans_pane_cp06_ParamLimits

0xeae7,	// (0x00092805) cam4_indicators_pane_g1_ParamLimits

0xeaf8,	// (0x00092816) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00093615) cam4_indicators_pane_g_ParamLimits

0xeb16,	// (0x00092834) cam4_indicators_pane_t1_ParamLimits

0x12f8,	// (0x00085016) bg_tb_trans_pane_cp07_ParamLimits

0xeb42,	// (0x00092860) vid4_indicators_pane_g1_ParamLimits

0xeb56,	// (0x00092874) vid4_indicators_pane_g2_ParamLimits

0xeb6a,	// (0x00092888) vid4_indicators_pane_g3_ParamLimits

0xeb7b,	// (0x00092899) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00093627) vid4_indicators_pane_g_ParamLimits

0xeb99,	// (0x000928b7) vid4_indicators_pane_t1_ParamLimits

0xec83,	// (0x000929a1) vid4_progress_pane_g1_ParamLimits

0xec93,	// (0x000929b1) vid4_progress_pane_g2_ParamLimits

0x80f2,	// (0x0008be10) vid4_progress_pane_g3_ParamLimits

0xeca3,	// (0x000929c1) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000937d8) vid4_progress_pane_g_ParamLimits

0x8104,	// (0x0008be22) vid4_progress_pane_t1_ParamLimits

0xecbb,	// (0x000929d9) vid4_progress_pane_t2_ParamLimits

0xecd0,	// (0x000929ee) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000937e3) vid4_progress_pane_t_ParamLimits

0x811c,	// (0x0008be3a) wait_bar_pane_cp07_ParamLimits

0x8649,	// (0x0008c367) main_cam6_set_pane_g2_ParamLimits

0x8649,	// (0x0008c367) main_cam6_set_pane_g2

0x866d,	// (0x0008c38b) main_cset6_listscroll_pane_ParamLimits

0x866d,	// (0x0008c38b) main_cset6_listscroll_pane

0x868d,	// (0x0008c3ab) main_cset6_slider_pane_ParamLimits

0x868d,	// (0x0008c3ab) main_cset6_slider_pane

0x86a3,	// (0x0008c3c1) main_cset6_text2_pane_ParamLimits

0x86a3,	// (0x0008c3c1) main_cset6_text2_pane

0x86b1,	// (0x0008c3cf) main_cset6_text_pane

0x86b9,	// (0x0008c3d7) main_cset_list_pane_copy1_ParamLimits

0x86b9,	// (0x0008c3d7) main_cset_list_pane_copy1

0x86c9,	// (0x0008c3e7) scroll_pane_cp028_copy1

0x86d2,	// (0x0008c3f0) cset_list_set_pane_copy1

0x86e3,	// (0x0008c401) aid_position_infowindow_above_copy1

0x86eb,	// (0x0008c409) aid_position_infowindow_below_copy1

0x86f3,	// (0x0008c411) cset_list_set_pane_g1_copy1

0x07db,	// (0x000844f9) cset_list_set_pane_g3_copy1_ParamLimits

0x07db,	// (0x000844f9) cset_list_set_pane_g3_copy1

0x07ea,	// (0x00084508) cset_list_set_pane_t1_copy1_ParamLimits

0x07ea,	// (0x00084508) cset_list_set_pane_t1_copy1

0x12f8,	// (0x00085016) list_highlight_pane_cp021_copy1_ParamLimits

0x12f8,	// (0x00085016) list_highlight_pane_cp021_copy1

0x86fb,	// (0x0008c419) cset6_slider_pane_ParamLimits

0x86fb,	// (0x0008c419) cset6_slider_pane

0x8727,	// (0x0008c445) main_cset6_slider_pane_g1_ParamLimits

0x8727,	// (0x0008c445) main_cset6_slider_pane_g1

0x874f,	// (0x0008c46d) main_cset6_slider_pane_g2_ParamLimits

0x874f,	// (0x0008c46d) main_cset6_slider_pane_g2

0x8777,	// (0x0008c495) main_cset6_slider_pane_g3_ParamLimits

0x8777,	// (0x0008c495) main_cset6_slider_pane_g3

0x8783,	// (0x0008c4a1) main_cset6_slider_pane_g4_ParamLimits

0x8783,	// (0x0008c4a1) main_cset6_slider_pane_g4

0x878f,	// (0x0008c4ad) main_cset6_slider_pane_g5_ParamLimits

0x878f,	// (0x0008c4ad) main_cset6_slider_pane_g5

0xe347,	// (0x00092065) main_cset6_slider_pane_g7_ParamLimits

0xe347,	// (0x00092065) main_cset6_slider_pane_g7

0xe353,	// (0x00092071) main_cset6_slider_pane_g8_ParamLimits

0xe353,	// (0x00092071) main_cset6_slider_pane_g8

0x78a8,	// (0x0008b5c6) main_cset6_slider_pane_g9_ParamLimits

0x78a8,	// (0x0008b5c6) main_cset6_slider_pane_g9

0x78b4,	// (0x0008b5d2) main_cset6_slider_pane_g10_ParamLimits

0x78b4,	// (0x0008b5d2) main_cset6_slider_pane_g10

0x78c0,	// (0x0008b5de) main_cset6_slider_pane_g11_ParamLimits

0x78c0,	// (0x0008b5de) main_cset6_slider_pane_g11

0x78cc,	// (0x0008b5ea) main_cset6_slider_pane_g12_ParamLimits

0x78cc,	// (0x0008b5ea) main_cset6_slider_pane_g12

0x78d8,	// (0x0008b5f6) main_cset6_slider_pane_g13_ParamLimits

0x78d8,	// (0x0008b5f6) main_cset6_slider_pane_g13

0x78e4,	// (0x0008b602) main_cset6_slider_pane_g14_ParamLimits

0x78e4,	// (0x0008b602) main_cset6_slider_pane_g14

0x879b,	// (0x0008c4b9) main_cset6_slider_pane_g15_ParamLimits

0x879b,	// (0x0008c4b9) main_cset6_slider_pane_g15

0x7908,	// (0x0008b626) main_cset6_slider_pane_g16_ParamLimits

0x7908,	// (0x0008b626) main_cset6_slider_pane_g16

0x7914,	// (0x0008b632) main_cset6_slider_pane_g17_ParamLimits

0x7914,	// (0x0008b632) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000938b0) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000938b0) main_cset6_slider_pane_g

0x87cb,	// (0x0008c4e9) main_cset6_slider_pane_t1_ParamLimits

0x87cb,	// (0x0008c4e9) main_cset6_slider_pane_t1

0x880c,	// (0x0008c52a) main_cset6_slider_pane_t2_ParamLimits

0x880c,	// (0x0008c52a) main_cset6_slider_pane_t2

0x8837,	// (0x0008c555) main_cset6_slider_pane_t3_ParamLimits

0x8837,	// (0x0008c555) main_cset6_slider_pane_t3

0x8862,	// (0x0008c580) main_cset6_slider_pane_t4_ParamLimits

0x8862,	// (0x0008c580) main_cset6_slider_pane_t4

0x888d,	// (0x0008c5ab) main_cset6_slider_pane_t5_ParamLimits

0x888d,	// (0x0008c5ab) main_cset6_slider_pane_t5

0x88b8,	// (0x0008c5d6) main_cset6_slider_pane_t7_ParamLimits

0x88b8,	// (0x0008c5d6) main_cset6_slider_pane_t7

0x88ee,	// (0x0008c60c) main_cset6_slider_pane_t8_ParamLimits

0x88ee,	// (0x0008c60c) main_cset6_slider_pane_t8

0x8912,	// (0x0008c630) main_cset6_slider_pane_t9_ParamLimits

0x8912,	// (0x0008c630) main_cset6_slider_pane_t9

0x8936,	// (0x0008c654) main_cset6_slider_pane_t10_ParamLimits

0x8936,	// (0x0008c654) main_cset6_slider_pane_t10

0x895a,	// (0x0008c678) main_cset6_slider_pane_t11_ParamLimits

0x895a,	// (0x0008c678) main_cset6_slider_pane_t11

0x897e,	// (0x0008c69c) main_cset6_slider_pane_t14_ParamLimits

0x897e,	// (0x0008c69c) main_cset6_slider_pane_t14

0x89b7,	// (0x0008c6d5) main_cset6_slider_pane_t15_ParamLimits

0x89b7,	// (0x0008c6d5) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000938d5) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000938d5) main_cset6_slider_pane_t

0xe42f,	// (0x0009214d) cset_slider_pane_g1_copy1

0xe438,	// (0x00092156) cset_slider_pane_g2_copy1

0xe441,	// (0x0009215f) cset_slider_pane_g3_copy1

0x10cd,	// (0x00084deb) bg_popup_sub_pane_cp011_copy1

0x8a0b,	// (0x0008c729) main_cset_text_pane_g1_copy1

0xe4ca,	// (0x000921e8) main_cset_text_pane_t1_copy1

0xe4d8,	// (0x000921f6) main_cset_text_pane_t2_copy1

0xe4e6,	// (0x00092204) main_cset_text_pane_t3_copy1

0xe4f4,	// (0x00092212) main_cset_text_pane_t4_copy1

0xe502,	// (0x00092220) main_cset_text_pane_t5_copy1

0x8a13,	// (0x0008c731) main_cset_text_pane_t6_copy1

0x8a21,	// (0x0008c73f) main_cset_text_pane_t7_copy1

0x862c,	// (0x0008c34a) main_cset_text2_pane_t1_copy1

0x12f8,	// (0x00085016) main_ncimui_pane

0x4f66,	// (0x00088c84) popup_query_ncimui_window_ParamLimits

0x4f66,	// (0x00088c84) popup_query_ncimui_window

0xd79e,	// (0x000914bc) field_cale_ev2_pane_g4_ParamLimits

0xd79e,	// (0x000914bc) field_cale_ev2_pane_g4

0x6b73,	// (0x0008a891) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6b73,	// (0x0008a891) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000935b3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000935b3) cell_video_dialer_keypad_pane_g

0x6b8b,	// (0x0008a8a9) cell_video_dialer_keypad_pane_t1

0x10cd,	// (0x00084deb) bg_popup_window_pane_cp012

0xb7ec,	// (0x0008f50a) heading_pane_cp06

0x8b76,	// (0x0008c894) ncim_query_content_pane

0x10cd,	// (0x00084deb) bg_popup_heading_pane_cp01

0x8b7e,	// (0x0008c89c) ncim_heading_pane_t1

0x8b8c,	// (0x0008c8aa) ncim_indicator_popup_pane

0x8b9e,	// (0x0008c8bc) ncim_query_button_pane

0x8bbe,	// (0x0008c8dc) ncim_query_content_pane_t1

0x8bd0,	// (0x0008c8ee) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00093919) ncim_query_content_pane_t

0x8c82,	// (0x0008c9a0) ncim_query_list_pane

0x8c94,	// (0x0008c9b2) ncim_query_popup_pane

0x8b8c,	// (0x0008c8aa) ncim_indicator_popup_pane_ParamLimits

0x8ba6,	// (0x0008c8c4) ncim_query_content_pane_g1_ParamLimits

0x8ba6,	// (0x0008c8c4) ncim_query_content_pane_g1

0x8bbe,	// (0x0008c8dc) ncim_query_content_pane_t1_ParamLimits

0x8bd0,	// (0x0008c8ee) ncim_query_content_pane_t2_ParamLimits

0x8be2,	// (0x0008c900) ncim_query_content_pane_t3_ParamLimits

0x8be2,	// (0x0008c900) ncim_query_content_pane_t3

0x8c0a,	// (0x0008c928) ncim_query_content_pane_t4_ParamLimits

0x8c0a,	// (0x0008c928) ncim_query_content_pane_t4

0x8c32,	// (0x0008c950) ncim_query_content_pane_t5_ParamLimits

0x8c32,	// (0x0008c950) ncim_query_content_pane_t5

0x8c5a,	// (0x0008c978) ncim_query_content_pane_t6_ParamLimits

0x8c5a,	// (0x0008c978) ncim_query_content_pane_t6

0xfbfb,	// (0x00093919) ncim_query_content_pane_t_ParamLimits

0x8c82,	// (0x0008c9a0) ncim_query_list_pane_ParamLimits

0x8c94,	// (0x0008c9b2) ncim_query_popup_pane_ParamLimits

0x8ca8,	// (0x0008c9c6) wait_bar_pane_cp04

0x10cd,	// (0x00084deb) input_focus_pane_cp011

0x8cb0,	// (0x0008c9ce) ncim_query_popup_pane_t1

0x8cbe,	// (0x0008c9dc) ncim_list_query_list_pane_ParamLimits

0x8cbe,	// (0x0008c9dc) ncim_list_query_list_pane

0x10cd,	// (0x00084deb) bg_button_pane_cp027

0x8ccb,	// (0x0008c9e9) ncim_query_button_pane_g1

0x10cd,	// (0x00084deb) list_highlight_pane_cp012

0x8cd5,	// (0x0008c9f3) ncim_list_query_list_pane_g1

0x8cdd,	// (0x0008c9fb) ncim_list_query_list_pane_t1

0xeb07,	// (0x00092825) cam4_indicators_pane_g3_ParamLimits

0xeb07,	// (0x00092825) cam4_indicators_pane_g3

0xeb87,	// (0x000928a5) vid4_indicators_pane_g5_ParamLimits

0xeb87,	// (0x000928a5) vid4_indicators_pane_g5

0xecaf,	// (0x000929cd) vid4_progress_pane_g5_ParamLimits

0xecaf,	// (0x000929cd) vid4_progress_pane_g5

0x8a61,	// (0x0008c77f) main_ncimui_pane_g1

0x8aca,	// (0x0008c7e8) ncimui_group_query_pane_ParamLimits

0x8aca,	// (0x0008c7e8) ncimui_group_query_pane

0x8b12,	// (0x0008c830) ncimui_list_pane_ParamLimits

0x8b12,	// (0x0008c830) ncimui_list_pane

0x8b39,	// (0x0008c857) ncimui_text_pane_ParamLimits

0x8b39,	// (0x0008c857) ncimui_text_pane

0x8ceb,	// (0x0008ca09) ncimui_text_pane_t1_ParamLimits

0x8ceb,	// (0x0008ca09) ncimui_text_pane_t1

0x8d09,	// (0x0008ca27) ncimui_list_single_graphic_pane_ParamLimits

0x8d09,	// (0x0008ca27) ncimui_list_single_graphic_pane

0x8d19,	// (0x0008ca37) ncimui_query_pane_ParamLimits

0x8d19,	// (0x0008ca37) ncimui_query_pane

0x10cd,	// (0x00084deb) list_highlight_pane_cp013

0x8d2c,	// (0x0008ca4a) ncim_list_query_list_pane_t1_copy1

0x8cd5,	// (0x0008c9f3) ncim_list_single_graphic_pane_g1

0x8d3a,	// (0x0008ca58) ncim_query_button_pane_cp01

0x8d46,	// (0x0008ca64) ncim_query_entry_pane_ParamLimits

0x8d46,	// (0x0008ca64) ncim_query_entry_pane

0x8d59,	// (0x0008ca77) ncimui_query_pane_g1

0x8d65,	// (0x0008ca83) ncimui_query_pane_t1_ParamLimits

0x8d65,	// (0x0008ca83) ncimui_query_pane_t1

0x12f8,	// (0x00085016) input_focus_pane_cp012

0x8d7e,	// (0x0008ca9c) ncim_query_entry_pane_t1

0x1d96,	// (0x00085ab4) main_im_pane_ParamLimits

0x12f8,	// (0x00085016) main_mobtv_pane_ParamLimits

0x12f8,	// (0x00085016) main_mobtv_pane

0x87b3,	// (0x0008c4d1) main_cset6_slider_pane_g18_ParamLimits

0x87b3,	// (0x0008c4d1) main_cset6_slider_pane_g18

0x87bf,	// (0x0008c4dd) main_cset6_slider_pane_g19_ParamLimits

0x87bf,	// (0x0008c4dd) main_cset6_slider_pane_g19

0xf061,	// (0x00092d7f) bg_main_mobtv_pane_ParamLimits

0xf061,	// (0x00092d7f) bg_main_mobtv_pane

0x8d90,	// (0x0008caae) main_mobtv_info_pane

0x8d99,	// (0x0008cab7) main_mobtv_loading_pane_ParamLimits

0x8d99,	// (0x0008cab7) main_mobtv_loading_pane

0x8da6,	// (0x0008cac4) main_mobtv_pg_channel_list_pane

0x8db0,	// (0x0008cace) main_mobtv_pg_hdr_pane

0x8db9,	// (0x0008cad7) main_mobtv_programe_curr_pane_ParamLimits

0x8db9,	// (0x0008cad7) main_mobtv_programe_curr_pane

0x8dc6,	// (0x0008cae4) main_mobtv_programe_next_pane_ParamLimits

0x8dc6,	// (0x0008cae4) main_mobtv_programe_next_pane

0x8dd3,	// (0x0008caf1) popup_mobtv_noti_window

0xd4cd,	// (0x000911eb) main_tv_pg_hdr_pane_g1

0x8ddb,	// (0x0008caf9) main_tv_pg_hdr_pane_g2

0x8de3,	// (0x0008cb01) main_tv_pg_hdr_pane_g3

0x8deb,	// (0x0008cb09) main_tv_pg_hdr_pane_g4

0x8df3,	// (0x0008cb11) main_tv_pg_hdr_pane_g5

0x8dfd,	// (0x0008cb1b) main_tv_pg_hdr_pane_g6

0x8e07,	// (0x0008cb25) main_tv_pg_hdr_pane_g7

0x8e11,	// (0x0008cb2f) main_tv_pg_hdr_pane_g8

0x8e1b,	// (0x0008cb39) main_tv_pg_hdr_pane_g9

0x8e25,	// (0x0008cb43) main_tv_pg_hdr_pane_g10

0x8e2f,	// (0x0008cb4d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00093926) main_tv_pg_hdr_pane_g

0x8e39,	// (0x0008cb57) main_tv_pg_hdr_pane_t1

0x8e47,	// (0x0008cb65) main_tv_pg_hdr_pane_t2

0x8e55,	// (0x0008cb73) main_tv_pg_hdr_pane_t3

0x8e65,	// (0x0008cb83) main_tv_pg_hdr_pane_t4

0x8e75,	// (0x0008cb93) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0009393d) main_tv_pg_hdr_pane_t

0x8e85,	// (0x0008cba3) single_mobtv_pg_channel_pane_ParamLimits

0x8e85,	// (0x0008cba3) single_mobtv_pg_channel_pane

0x8e97,	// (0x0008cbb5) single_mobtv_pg_channel_table_pane

0x8ea0,	// (0x0008cbbe) single_mobtv_pg_channel_thumb_pane

0x8ea9,	// (0x0008cbc7) single_tv_pg_channel_pane_g1

0x8eb2,	// (0x0008cbd0) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00093948) single_tv_pg_channel_pane_g

0xd739,	// (0x00091457) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd739,	// (0x00091457) bg_single_mobtv_pg_channel_thumb_pane

0x8ebb,	// (0x0008cbd9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8ebb,	// (0x0008cbd9) single_mobtv_pg_channel_thumb_pane_g1

0x8ec9,	// (0x0008cbe7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8ec9,	// (0x0008cbe7) single_mobtv_pg_channel_thumb_pane_g2

0x8ed5,	// (0x0008cbf3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8ed5,	// (0x0008cbf3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0009394d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0009394d) single_mobtv_pg_channel_thumb_pane_g

0x8ee1,	// (0x0008cbff) single_mobtv_pg_channel_thumb_pane_t1

0x8eef,	// (0x0008cc0d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00093954) single_mobtv_pg_channel_thumb_pane_t

0xd4cd,	// (0x000911eb) bg_single_mobtv_pg_channel_table_pane_g1

0xd4cd,	// (0x000911eb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000933fa) bg_single_mobtv_pg_channel_table_pane_g

0x8efd,	// (0x0008cc1b) single_mobtv_pg_channel_table_pane_t1

0x8f0b,	// (0x0008cc29) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00093959) single_mobtv_pg_channel_table_pane_t

0x8f21,	// (0x0008cc3f) main_mobtv_info_pane_g1_ParamLimits

0x8f21,	// (0x0008cc3f) main_mobtv_info_pane_g1

0x8f3f,	// (0x0008cc5d) main_mobtv_info_pane_t1_ParamLimits

0x8f3f,	// (0x0008cc5d) main_mobtv_info_pane_t1

0x8fb7,	// (0x0008ccd5) main_mobtv_info_pane_t2_ParamLimits

0x8fb7,	// (0x0008ccd5) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00093963) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00093963) main_mobtv_info_pane_t

0x9046,	// (0x0008cd64) wait_bar_pane_cp05

0x9058,	// (0x0008cd76) main_mobtv_loading_pane_g1_ParamLimits

0x9058,	// (0x0008cd76) main_mobtv_loading_pane_g1

0x906b,	// (0x0008cd89) main_mobtv_loading_pane_g2_ParamLimits

0x906b,	// (0x0008cd89) main_mobtv_loading_pane_g2

0x9077,	// (0x0008cd95) main_mobtv_loading_pane_g3_ParamLimits

0x9077,	// (0x0008cd95) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0009396a) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0009396a) main_mobtv_loading_pane_g

0x908a,	// (0x0008cda8) main_mobtv_loading_pane_t1_ParamLimits

0x908a,	// (0x0008cda8) main_mobtv_loading_pane_t1

0x90a2,	// (0x0008cdc0) main_mobtv_loading_pane_t2_ParamLimits

0x90a2,	// (0x0008cdc0) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00093971) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00093971) main_mobtv_loading_pane_t

0x90c6,	// (0x0008cde4) wait_bar_pane_cp06_ParamLimits

0x90c6,	// (0x0008cde4) wait_bar_pane_cp06

0x90d5,	// (0x0008cdf3) main_mobtv_programe_curr_pane_t1

0x90e3,	// (0x0008ce01) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00093976) main_mobtv_programe_curr_pane_t

0x90f1,	// (0x0008ce0f) main_mobtv_programe_next_pane_t1

0x90ff,	// (0x0008ce1d) main_mobtv_programe_next_pane_t2

0x910d,	// (0x0008ce2b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0009397b) main_mobtv_programe_next_pane_t

0x10cd,	// (0x00084deb) bg_popup_mobtv_noti_window_pane

0x911b,	// (0x0008ce39) popup_mobtv_noti_window_g1

0x9123,	// (0x0008ce41) popup_mobtv_noti_window_t1

0x9131,	// (0x0008ce4f) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00093982) popup_mobtv_noti_window_t

0xd4cd,	// (0x000911eb) bg_popup_mobtv_noti_window_pane_g1

0x10cd,	// (0x00084deb) sc_clock_pane

0x10cd,	// (0x00084deb) main_fs_bigclock_pane

0x836e,	// (0x0008c08c) blid2_tripm_pane_t4_ParamLimits

0x836e,	// (0x0008c08c) blid2_tripm_pane_t4

0x913f,	// (0x0008ce5d) sc_clock_pane_g1_ParamLimits

0x913f,	// (0x0008ce5d) sc_clock_pane_g1

0x9151,	// (0x0008ce6f) sc_clock_pane_t1_ParamLimits

0x9151,	// (0x0008ce6f) sc_clock_pane_t1

0x9173,	// (0x0008ce91) sc_clock_pane_t2_ParamLimits

0x9173,	// (0x0008ce91) sc_clock_pane_t2

0x918b,	// (0x0008cea9) sc_clock_pane_t3_ParamLimits

0x918b,	// (0x0008cea9) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00093987) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00093987) sc_clock_pane_t

0xa35a,	// (0x0008e078) main_fs_bigclock_indicator_pane_ParamLimits

0xa35a,	// (0x0008e078) main_fs_bigclock_indicator_pane

0x9231,	// (0x0008cf4f) main_fs_bigclock_pane_g1_ParamLimits

0x9231,	// (0x0008cf4f) main_fs_bigclock_pane_g1

0xa366,	// (0x0008e084) main_fs_bigclock_pane_t1_ParamLimits

0xa366,	// (0x0008e084) main_fs_bigclock_pane_t1

0xa378,	// (0x0008e096) main_fs_bigclock_pane_t2_ParamLimits

0xa378,	// (0x0008e096) main_fs_bigclock_pane_t2

0xa38c,	// (0x0008e0aa) main_fs_bigclock_pane_t3_ParamLimits

0xa38c,	// (0x0008e0aa) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00093b91) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00093b91) main_fs_bigclock_pane_t

0xa39e,	// (0x0008e0bc) main_fs_bigclock_indicator_pane_g1

0x8bb2,	// (0x0008c8d0) ncim_query_content_pane_g2_ParamLimits

0x8bb2,	// (0x0008c8d0) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00093914) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00093914) ncim_query_content_pane_g

0x91a4,	// (0x0008cec2) sc_clock_pane_t4_ParamLimits

0x91a4,	// (0x0008cec2) sc_clock_pane_t4

0x12f8,	// (0x00085016) main_radioblah_pane

0xe14e,	// (0x00091e6c) cell_call4_button_pane_t1_copy1_ParamLimits

0xe14e,	// (0x00091e6c) cell_call4_button_pane_t1_copy1

0x8a79,	// (0x0008c797) main_ncimui_pane_t1_ParamLimits

0x8a79,	// (0x0008c797) main_ncimui_pane_t1

0x8a93,	// (0x0008c7b1) main_ncimui_pane_t2_ParamLimits

0x8a93,	// (0x0008c7b1) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0009390d) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0009390d) main_ncimui_pane_t

0x93b5,	// (0x0008d0d3) main_radioblah_anim_pane_ParamLimits

0x93b5,	// (0x0008d0d3) main_radioblah_anim_pane

0x93c6,	// (0x0008d0e4) main_radioblah_info_pane_ParamLimits

0x93c6,	// (0x0008d0e4) main_radioblah_info_pane

0x93ec,	// (0x0008d10a) main_radioblah_pane_t1_ParamLimits

0x93ec,	// (0x0008d10a) main_radioblah_pane_t1

0x9408,	// (0x0008d126) main_radioblah_pane_t2_ParamLimits

0x9408,	// (0x0008d126) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000939a8) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000939a8) main_radioblah_pane_t

0x9450,	// (0x0008d16e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9450,	// (0x0008d16e) main_radioblah_rocker_ctrl_pane

0x94a8,	// (0x0008d1c6) main_radioblah_info_pane_t1_ParamLimits

0x94a8,	// (0x0008d1c6) main_radioblah_info_pane_t1

0x94e2,	// (0x0008d200) main_radioblah_info_pane_t2_ParamLimits

0x94e2,	// (0x0008d200) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000939b1) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000939b1) main_radioblah_info_pane_t

0xd4cd,	// (0x000911eb) main_radioblah_rocker_ctrl_pane_g1

0x9592,	// (0x0008d2b0) main_radioblah_rocker_ctrl_pane_g2

0x959a,	// (0x0008d2b8) main_radioblah_rocker_ctrl_pane_g3

0x95a2,	// (0x0008d2c0) main_radioblah_rocker_ctrl_pane_g4

0x95aa,	// (0x0008d2c8) main_radioblah_rocker_ctrl_pane_g5

0x95b2,	// (0x0008d2d0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000939ba) main_radioblah_rocker_ctrl_pane_g

0x862c,	// (0x0008c34a) main_cset_text2_pane_t1_copy1_ParamLimits

0xead7,	// (0x000927f5) cam4_image_uncrop_qvga_pane

0xeb30,	// (0x0009284e) vid4_image_uncrop_qcif_pane

0xee8b,	// (0x00092ba9) cam6_image_uncrop_qvga_pane_ParamLimits

0xee8b,	// (0x00092ba9) cam6_image_uncrop_qvga_pane

0xef53,	// (0x00092c71) vid6_image_uncrop_qcif_pane_ParamLimits

0xef53,	// (0x00092c71) vid6_image_uncrop_qcif_pane

0x10cd,	// (0x00084deb) bg_popup_preview_window_pane_cp03

0x8a2f,	// (0x0008c74d) list_cset_text2_pane

0x8a37,	// (0x0008c755) main_cset6_text2_pane_g1

0x8a3f,	// (0x0008c75d) main_cset6_text2_pane_t1

0x95ba,	// (0x0008d2d8) list_cset_text2_pane_t1_ParamLimits

0x95ba,	// (0x0008d2d8) list_cset_text2_pane_t1

0x12f8,	// (0x00085016) main_radioblah_pane_ParamLimits

0x9032,	// (0x0008cd50) main_mobtv_info_pane_t3_ParamLimits

0x9032,	// (0x0008cd50) main_mobtv_info_pane_t3

0x93da,	// (0x0008d0f8) main_radioblah_pane_g1

0x9478,	// (0x0008d196) main_radioblah_info_pane_g1

0x9537,	// (0x0008d255) main_radioblah_info_pane_t3_ParamLimits

0x9537,	// (0x0008d255) main_radioblah_info_pane_t3

0x3b51,	// (0x0008786f) highlight_cell_cale_month_pane_ParamLimits

0x3b51,	// (0x0008786f) highlight_cell_cale_month_pane

0x10cd,	// (0x00084deb) main_phob_fisheye_pane

0xd86d,	// (0x0009158b) scroll_pane_cp0031_ParamLimits

0xd86d,	// (0x0009158b) scroll_pane_cp0031

0x861d,	// (0x0008c33b) wait_bar_pane_cp08_ParamLimits

0x86d2,	// (0x0008c3f0) cset_list_set_pane_copy1_ParamLimits

0x95d3,	// (0x0008d2f1) highlight_cell_cale_month_pane_g1

0x95db,	// (0x0008d2f9) highlight_cell_cale_month_pane_t1

0xec72,	// (0x00092990) list_gen_pane_cp01

0xe332,	// (0x00092050) scroll_pane_01

0xf06f,	// (0x00092d8d) list_single_double_fisheye_pane

0x08bc,	// (0x000845da) list_double_fisheye_pane_g1_ParamLimits

0x08bc,	// (0x000845da) list_double_fisheye_pane_g1

0x08c8,	// (0x000845e6) list_double_fisheye_pane_g2_ParamLimits

0x08c8,	// (0x000845e6) list_double_fisheye_pane_g2

0x95e9,	// (0x0008d307) list_double_fisheye_pane_g3_ParamLimits

0x95e9,	// (0x0008d307) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000939c7) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000939c7) list_double_fisheye_pane_g

0x08f9,	// (0x00084617) list_double_fisheye_pane_t1_ParamLimits

0x08f9,	// (0x00084617) list_double_fisheye_pane_t1

0x0914,	// (0x00084632) list_double_fisheye_pane_t2_ParamLimits

0x0914,	// (0x00084632) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000939d2) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000939d2) list_double_fisheye_pane_t

0x10cd,	// (0x00084deb) main_call5_pane

0x91cf,	// (0x0008ceed) sc_swipe_pane_ParamLimits

0x91cf,	// (0x0008ceed) sc_swipe_pane

0x9608,	// (0x0008d326) call5_image_pane_ParamLimits

0x9608,	// (0x0008d326) call5_image_pane

0x9625,	// (0x0008d343) call5_swipe_1_pane_ParamLimits

0x9625,	// (0x0008d343) call5_swipe_1_pane

0x9638,	// (0x0008d356) call5_swipe_2_pane_ParamLimits

0x9638,	// (0x0008d356) call5_swipe_2_pane

0x9663,	// (0x0008d381) popup_call5_audio_first_window_ParamLimits

0x9663,	// (0x0008d381) popup_call5_audio_first_window

0xd739,	// (0x00091457) call5_swipe_1_pane_g1_ParamLimits

0xd739,	// (0x00091457) call5_swipe_1_pane_g1

0x9674,	// (0x0008d392) call5_swipe_1_pane_g2_ParamLimits

0x9674,	// (0x0008d392) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000939d7) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000939d7) call5_swipe_1_pane_g

0x9680,	// (0x0008d39e) call5_swipe_1_pane_t1_ParamLimits

0x9680,	// (0x0008d39e) call5_swipe_1_pane_t1

0xd739,	// (0x00091457) call5_swipe_2_pane_g1_ParamLimits

0xd739,	// (0x00091457) call5_swipe_2_pane_g1

0x9695,	// (0x0008d3b3) call5_swipe_2_pane_g2_ParamLimits

0x9695,	// (0x0008d3b3) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000939dc) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000939dc) call5_swipe_2_pane_g

0x96a1,	// (0x0008d3bf) call5_swipe_2_pane_t1_ParamLimits

0x96a1,	// (0x0008d3bf) call5_swipe_2_pane_t1

0x96b6,	// (0x0008d3d4) sc_swipe_pane_g1_ParamLimits

0x96b6,	// (0x0008d3d4) sc_swipe_pane_g1

0x96c3,	// (0x0008d3e1) sc_swipe_pane_g2_ParamLimits

0x96c3,	// (0x0008d3e1) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000939e1) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000939e1) sc_swipe_pane_g

0x96cf,	// (0x0008d3ed) sc_swipe_pane_t1_ParamLimits

0x96cf,	// (0x0008d3ed) sc_swipe_pane_t1

0x10cd,	// (0x00084deb) main_cmail_launcher_pane

0x96e4,	// (0x0008d402) aid_size_cell_cmail_l_ParamLimits

0x96e4,	// (0x0008d402) aid_size_cell_cmail_l

0x96f2,	// (0x0008d410) grid_cmail_l_pane_ParamLimits

0x96f2,	// (0x0008d410) grid_cmail_l_pane

0x970c,	// (0x0008d42a) cell_cmail_l_pane_ParamLimits

0x970c,	// (0x0008d42a) cell_cmail_l_pane

0x9726,	// (0x0008d444) cell_cmail_l_pane_g1_ParamLimits

0x9726,	// (0x0008d444) cell_cmail_l_pane_g1

0x9732,	// (0x0008d450) cell_cmail_l_pane_t1_ParamLimits

0x9732,	// (0x0008d450) cell_cmail_l_pane_t1

0x9748,	// (0x0008d466) cell_cmail_l_pane_t2_ParamLimits

0x9748,	// (0x0008d466) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000939e6) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000939e6) cell_cmail_l_pane_t

0x12f8,	// (0x00085016) grid_highlight_pane_cp018_ParamLimits

0x12f8,	// (0x00085016) grid_highlight_pane_cp018

0x119d,	// (0x00084ebb) main2_pane_ParamLimits

0x119d,	// (0x00084ebb) main2_pane

0x1fbe,	// (0x00085cdc) popup_sp_fs_action_menu_bg_pane_g1

0x1fc6,	// (0x00085ce4) popup_sp_fs_action_menu_bg_pane_g2

0x1fce,	// (0x00085cec) popup_sp_fs_action_menu_bg_pane_g3

0x1fd6,	// (0x00085cf4) popup_sp_fs_action_menu_bg_pane_g4

0x1fde,	// (0x00085cfc) popup_sp_fs_action_menu_bg_pane_g5

0x1fe6,	// (0x00085d04) popup_sp_fs_action_menu_bg_pane_g6

0x1fee,	// (0x00085d0c) popup_sp_fs_action_menu_bg_pane_g7

0x1ff6,	// (0x00085d14) popup_sp_fs_action_menu_bg_pane_g8

0x1ffe,	// (0x00085d1c) popup_sp_fs_action_menu_bg_pane_g9

0x2006,	// (0x00085d24) popup_sp_fs_action_menu_bg_pane_g10

0x2006,	// (0x00085d24) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00092ea8) popup_sp_fs_action_menu_bg_pane_g

0x022b,	// (0x00083f49) list_medium_line_x2_t3_g3_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x2_t3_g3_g1

0x2a26,	// (0x00086744) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2a26,	// (0x00086744) list_medium_line_x2_t3_g3_g2

0x0237,	// (0x00083f55) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0237,	// (0x00083f55) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00092f56) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00092f56) list_medium_line_x2_t3_g3_g

0x0243,	// (0x00083f61) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0243,	// (0x00083f61) list_medium_line_x2_t3_g3_t1

0x0258,	// (0x00083f76) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0258,	// (0x00083f76) list_medium_line_x2_t3_g3_t2

0x026c,	// (0x00083f8a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x026c,	// (0x00083f8a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00092f5d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00092f5d) list_medium_line_x2_t3_g3_t

0x022b,	// (0x00083f49) list_medium_line_x2_t3_g2_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x2_t3_g2_g1

0x0237,	// (0x00083f55) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0237,	// (0x00083f55) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00092f64) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00092f64) list_medium_line_x2_t3_g2_g

0x0281,	// (0x00083f9f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0281,	// (0x00083f9f) list_medium_line_x2_t3_g2_t1

0x0297,	// (0x00083fb5) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0297,	// (0x00083fb5) list_medium_line_x2_t3_g2_t2

0x026c,	// (0x00083f8a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x026c,	// (0x00083f8a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00092f69) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00092f69) list_medium_line_x2_t3_g2_t

0x022b,	// (0x00083f49) list_medium_line_x2_t4_g4_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x2_t4_g4_g1

0x2a32,	// (0x00086750) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2a32,	// (0x00086750) list_medium_line_x2_t4_g4_g2

0x2a26,	// (0x00086744) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2a26,	// (0x00086744) list_medium_line_x2_t4_g4_g3

0x02a9,	// (0x00083fc7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02a9,	// (0x00083fc7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00092f70) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00092f70) list_medium_line_x2_t4_g4_g

0x02b5,	// (0x00083fd3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02b5,	// (0x00083fd3) list_medium_line_x2_t4_g4_t1

0x02cf,	// (0x00083fed) list_medium_line_x2_t4_g4_t2_ParamLimits

0x02cf,	// (0x00083fed) list_medium_line_x2_t4_g4_t2

0x02e5,	// (0x00084003) list_medium_line_x2_t4_g4_t3_ParamLimits

0x02e5,	// (0x00084003) list_medium_line_x2_t4_g4_t3

0x02fa,	// (0x00084018) list_medium_line_x2_t4_g4_t4_ParamLimits

0x02fa,	// (0x00084018) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00092f79) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00092f79) list_medium_line_x2_t4_g4_t

0x022b,	// (0x00083f49) list_medium_line_x2_t2_g4_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x2_t2_g4_g1

0x2a32,	// (0x00086750) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2a32,	// (0x00086750) list_medium_line_x2_t2_g4_g2

0x2a26,	// (0x00086744) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2a26,	// (0x00086744) list_medium_line_x2_t2_g4_g3

0x0237,	// (0x00083f55) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0237,	// (0x00083f55) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00092fe0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00092fe0) list_medium_line_x2_t2_g4_g

0x030c,	// (0x0008402a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x030c,	// (0x0008402a) list_medium_line_x2_t2_g4_t1

0x026c,	// (0x00083f8a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x026c,	// (0x00083f8a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00092fe9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00092fe9) list_medium_line_x2_t2_g4_t

0x022b,	// (0x00083f49) list_medium_line_x2_t2_g3_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x2_t2_g3_g1

0x2a26,	// (0x00086744) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2a26,	// (0x00086744) list_medium_line_x2_t2_g3_g2

0x0237,	// (0x00083f55) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0237,	// (0x00083f55) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00092f56) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00092f56) list_medium_line_x2_t2_g3_g

0x0321,	// (0x0008403f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0321,	// (0x0008403f) list_medium_line_x2_t2_g3_t1

0x026c,	// (0x00083f8a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x026c,	// (0x00083f8a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00092fee) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00092fee) list_medium_line_x2_t2_g3_t

0x3cab,	// (0x000879c9) main_sp_fs_list_pane_ParamLimits

0x3cab,	// (0x000879c9) main_sp_fs_list_pane

0xb5f6,	// (0x0008f314) sp_fs_scroll_pane_ParamLimits

0xb5f6,	// (0x0008f314) sp_fs_scroll_pane

0x0336,	// (0x00084054) list_medium_line_x2_t3_t1

0x0346,	// (0x00084064) list_medium_line_x2_t3_t2

0x0354,	// (0x00084072) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00093039) list_medium_line_x2_t3_t

0x0362,	// (0x00084080) list_medium_line_x3_t4_t1

0x0372,	// (0x00084090) list_medium_line_x3_t4_t2

0x0380,	// (0x0008409e) list_medium_line_x3_t4_t3

0x0354,	// (0x00084072) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00093040) list_medium_line_x3_t4_t

0x038e,	// (0x000840ac) list_medium_line_x4_t5_t1

0x039e,	// (0x000840bc) list_medium_line_x4_t5_t2

0x0380,	// (0x0008409e) list_medium_line_x4_t5_t3

0x03ac,	// (0x000840ca) list_medium_line_x4_t5_t4

0x0354,	// (0x00084072) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00093049) list_medium_line_x4_t5_t

0x022b,	// (0x00083f49) list_medium_line_t4_g4_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_t4_g4_g1

0x03ba,	// (0x000840d8) list_medium_line_t4_g4_g2_ParamLimits

0x03ba,	// (0x000840d8) list_medium_line_t4_g4_g2

0x03c6,	// (0x000840e4) list_medium_line_t4_g4_g3_ParamLimits

0x03c6,	// (0x000840e4) list_medium_line_t4_g4_g3

0x0237,	// (0x00083f55) list_medium_line_t4_g4_g4_ParamLimits

0x0237,	// (0x00083f55) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00093054) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00093054) list_medium_line_t4_g4_g

0x03d2,	// (0x000840f0) list_medium_line_t4_g4_t1_ParamLimits

0x03d2,	// (0x000840f0) list_medium_line_t4_g4_t1

0x03e7,	// (0x00084105) list_medium_line_t4_g4_t2_ParamLimits

0x03e7,	// (0x00084105) list_medium_line_t4_g4_t2

0x03fc,	// (0x0008411a) list_medium_line_t4_g4_t3_ParamLimits

0x03fc,	// (0x0008411a) list_medium_line_t4_g4_t3

0x026c,	// (0x00083f8a) list_medium_line_t4_g4_t4_ParamLimits

0x026c,	// (0x00083f8a) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0009305d) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0009305d) list_medium_line_t4_g4_t

0x3d6a,	// (0x00087a88) chi_dic_find_pane_g1

0x4d30,	// (0x00088a4e) main_tport_pane

0x05fb,	// (0x00084319) list_medium_line_plain_t1

0x0609,	// (0x00084327) list_medium_line_t2_g2_g1_ParamLimits

0x0609,	// (0x00084327) list_medium_line_t2_g2_g1

0x0615,	// (0x00084333) list_medium_line_t2_g2_g2_ParamLimits

0x0615,	// (0x00084333) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0009371e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0009371e) list_medium_line_t2_g2_g

0x0621,	// (0x0008433f) list_medium_line_t2_g2_t1_ParamLimits

0x0621,	// (0x0008433f) list_medium_line_t2_g2_t1

0x063b,	// (0x00084359) list_medium_line_t2_g2_t2_ParamLimits

0x063b,	// (0x00084359) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00093723) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00093723) list_medium_line_t2_g2_t

0xe74a,	// (0x00092468) aid_sp_fs_list_icon_a_sm

0xece5,	// (0x00092a03) aid_sp_fs_list_icon_d

0x812f,	// (0x0008be4d) aid_sp_fs_text_primary

0xe752,	// (0x00092470) aid_sp_fs_text_secondary

0x8138,	// (0x0008be56) list_medium_line

0x8138,	// (0x0008be56) list_medium_line_g2

0x8138,	// (0x0008be56) list_medium_line_g3

0x8138,	// (0x0008be56) list_medium_line_plain

0x8138,	// (0x0008be56) list_medium_line_plain_t2

0x8138,	// (0x0008be56) list_medium_line_plain_t3

0x8138,	// (0x0008be56) list_medium_line_right_icon

0x8138,	// (0x0008be56) list_medium_line_right_iconx2

0x8138,	// (0x0008be56) list_medium_line_t2

0x8138,	// (0x0008be56) list_medium_line_t2_g2

0x8138,	// (0x0008be56) list_medium_line_t2_g3

0x8138,	// (0x0008be56) list_medium_line_t2_right_icon

0x8138,	// (0x0008be56) list_medium_line_t2_right_iconx2

0x8138,	// (0x0008be56) list_medium_line_t3

0x8138,	// (0x0008be56) list_medium_line_t3_g2

0x8138,	// (0x0008be56) list_medium_line_t3_g3

0x8138,	// (0x0008be56) list_medium_line_t3_right_iconx2

0x8141,	// (0x0008be5f) list_medium_line_t4_g4

0x8138,	// (0x0008be56) list_medium_line_x2

0x8138,	// (0x0008be56) list_medium_line_x2_t2_g2

0x8138,	// (0x0008be56) list_medium_line_x2_t2_g3

0x8138,	// (0x0008be56) list_medium_line_x2_t2_g4

0x8138,	// (0x0008be56) list_medium_line_x2_t3

0x8138,	// (0x0008be56) list_medium_line_x2_t3_g2

0x8138,	// (0x0008be56) list_medium_line_x2_t3_g3

0x8138,	// (0x0008be56) list_medium_line_x2_t3_g4

0x8138,	// (0x0008be56) list_medium_line_x2_t4_g2

0x8138,	// (0x0008be56) list_medium_line_x2_t4_g4

0x814a,	// (0x0008be68) list_medium_line_x3

0x814a,	// (0x0008be68) list_medium_line_x3_t4

0x814a,	// (0x0008be68) list_medium_line_x3_t4_g4

0x8141,	// (0x0008be5f) list_medium_line_x4_t4

0x8141,	// (0x0008be5f) list_medium_line_x4_t4_g7

0x8141,	// (0x0008be5f) list_medium_line_x4_t5

0x07c7,	// (0x000844e5) list_single_fs_dyc_pane_ParamLimits

0x07c7,	// (0x000844e5) list_single_fs_dyc_pane

0x022b,	// (0x00083f49) list_medium_line_x4_t4_g7_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x4_t4_g7_g1

0x07ff,	// (0x0008451d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x07ff,	// (0x0008451d) list_medium_line_x4_t4_g7_g2

0x89f0,	// (0x0008c70e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x89f0,	// (0x0008c70e) list_medium_line_x4_t4_g7_g3

0x89ff,	// (0x0008c71d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x89ff,	// (0x0008c71d) list_medium_line_x4_t4_g7_g4

0x080b,	// (0x00084529) list_medium_line_x4_t4_g7_g5_ParamLimits

0x080b,	// (0x00084529) list_medium_line_x4_t4_g7_g5

0x081a,	// (0x00084538) list_medium_line_x4_t4_g7_g6_ParamLimits

0x081a,	// (0x00084538) list_medium_line_x4_t4_g7_g6

0x0829,	// (0x00084547) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0829,	// (0x00084547) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000938ee) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000938ee) list_medium_line_x4_t4_g7_g

0x0835,	// (0x00084553) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0835,	// (0x00084553) list_medium_line_x4_t4_g7_t1

0x084a,	// (0x00084568) list_medium_line_x4_t4_g7_t2_ParamLimits

0x084a,	// (0x00084568) list_medium_line_x4_t4_g7_t2

0x085f,	// (0x0008457d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x085f,	// (0x0008457d) list_medium_line_x4_t4_g7_t3

0x0874,	// (0x00084592) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0874,	// (0x00084592) list_medium_line_x4_t4_g7_t4

0x0886,	// (0x000845a4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0886,	// (0x000845a4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000938fd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000938fd) list_medium_line_x4_t4_g7_t

0x0898,	// (0x000845b6) list_single_dyc_row_pane_ParamLimits

0x0898,	// (0x000845b6) list_single_dyc_row_pane

0x95f5,	// (0x0008d313) call5_gesture_pane_ParamLimits

0x95f5,	// (0x0008d313) call5_gesture_pane

0x964b,	// (0x0008d369) call5_windows_pane_ParamLimits

0x964b,	// (0x0008d369) call5_windows_pane

0x9765,	// (0x0008d483) call5_swipe_1_pane_cp_ParamLimits

0x9765,	// (0x0008d483) call5_swipe_1_pane_cp

0x9771,	// (0x0008d48f) call5_swipe_2_pane_cp_ParamLimits

0x9771,	// (0x0008d48f) call5_swipe_2_pane_cp

0x2673,	// (0x00086391) call5_image_pane_cp

0x977d,	// (0x0008d49b) popup_call5_audio_first_window_cp_ParamLimits

0x977d,	// (0x0008d49b) popup_call5_audio_first_window_cp

0x96b6,	// (0x0008d3d4) call5_swipe_1_pane_g1_cp_ParamLimits

0x96b6,	// (0x0008d3d4) call5_swipe_1_pane_g1_cp

0x978b,	// (0x0008d4a9) call5_swipe_1_pane_g2_cp

0x96cf,	// (0x0008d3ed) call5_swipe_1_pane_t1_cp_ParamLimits

0x96cf,	// (0x0008d3ed) call5_swipe_1_pane_t1_cp

0x96b6,	// (0x0008d3d4) call5_swipe_2_pane_g1_cp_ParamLimits

0x96b6,	// (0x0008d3d4) call5_swipe_2_pane_g1_cp

0x9793,	// (0x0008d4b1) call5_swipe_2_pane_g2_cp

0x979b,	// (0x0008d4b9) call5_swipe_2_pane_t1_cp_ParamLimits

0x979b,	// (0x0008d4b9) call5_swipe_2_pane_t1_cp

0x12f8,	// (0x00085016) main_sp_fs_email_pane

0x97b0,	// (0x0008d4ce) main_sp_fs_listscroll_pane_te

0x97b9,	// (0x0008d4d7) popup_sp_fs_action_menu_pane_ParamLimits

0x97b9,	// (0x0008d4d7) popup_sp_fs_action_menu_pane

0xd4cd,	// (0x000911eb) bg_sp_fs_ctrlbar_pane_g1

0x97fd,	// (0x0008d51b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x9806,	// (0x0008d524) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x980f,	// (0x0008d52d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd4cd,	// (0x000911eb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000939eb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd2b2,	// (0x00090fd0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd2b2,	// (0x00090fd0) bg_sp_fs_ctrlbar_ddmenu_pane

0x9818,	// (0x0008d536) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x9818,	// (0x0008d536) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x9824,	// (0x0008d542) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x9824,	// (0x0008d542) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000939f4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000939f4) main_sp_fs_ctrlbar_ddmenu_pane_g

0x9830,	// (0x0008d54e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x9830,	// (0x0008d54e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0936,	// (0x00084654) list_medium_line_t2_right_icon_g1

0x093e,	// (0x0008465c) list_medium_line_t2_right_icon_t1

0x094e,	// (0x0008466c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000939f9) list_medium_line_t2_right_icon_t

0xcfb2,	// (0x00090cd0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcfb2,	// (0x00090cd0) bg_sp_fs_ctrlbar_pane

0x98ca,	// (0x0008d5e8) main_sp_fs_ctrlbar_button_pane_cp01

0x98d4,	// (0x0008d5f2) main_sp_fs_ctrlbar_ddmenu_pane

0x98de,	// (0x0008d5fc) main_sp_fs_ctrlbar_pane_g1

0x98ea,	// (0x0008d608) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000939fe) main_sp_fs_ctrlbar_pane_g

0x98f6,	// (0x0008d614) main_sp_fs_ctrlbar_pane_t1

0x990b,	// (0x0008d629) main_sp_fs_ctrlbar_pane

0x994a,	// (0x0008d668) main_sp_fs_listscroll_pane_te_cp01

0x0960,	// (0x0008467e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0960,	// (0x0008467e) popup_sp_fs_action_menu_pane_cp01

0x12f8,	// (0x00085016) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x12f8,	// (0x00085016) bg_sp_fs_highlight_list_pane_cp01

0xe769,	// (0x00092487) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe769,	// (0x00092487) sp_fs_action_menu_list_gene_pane_g1

0x996a,	// (0x0008d688) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x996a,	// (0x0008d688) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00093a08) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00093a08) sp_fs_action_menu_list_gene_pane_g

0xe778,	// (0x00092496) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe778,	// (0x00092496) sp_fs_action_menu_list_gene_pane_t1

0xe790,	// (0x000924ae) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe790,	// (0x000924ae) sp_fs_action_menu_list_gene_pane

0x9977,	// (0x0008d695) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x9977,	// (0x0008d695) popup_sp_fs_action_menu_bg_pane

0xe7b1,	// (0x000924cf) sp_fs_action_menu_list_pane_ParamLimits

0xe7b1,	// (0x000924cf) sp_fs_action_menu_list_pane

0xf078,	// (0x00092d96) sp_fs_scroll_pane_cp01_ParamLimits

0xf078,	// (0x00092d96) sp_fs_scroll_pane_cp01

0x0990,	// (0x000846ae) list_medium_line_plain_t2_t1

0x09a0,	// (0x000846be) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00093a0d) list_medium_line_plain_t2_t

0x09b0,	// (0x000846ce) list_medium_line_plain_t3_t1

0x09c0,	// (0x000846de) list_medium_line_plain_t3_t2

0x09ce,	// (0x000846ec) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00093a12) list_medium_line_plain_t3_t

0x022b,	// (0x00083f49) list_medium_line_x2_t2_g2_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x2_t2_g2_g1

0x0237,	// (0x00083f55) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0237,	// (0x00083f55) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00092f64) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00092f64) list_medium_line_x2_t2_g2_g

0x03d2,	// (0x000840f0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x03d2,	// (0x000840f0) list_medium_line_x2_t2_g2_t1

0x026c,	// (0x00083f8a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x026c,	// (0x00083f8a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00093a19) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00093a19) list_medium_line_x2_t2_g2_t

0x022b,	// (0x00083f49) list_medium_line_x2_t4_g2_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x2_t4_g2_g1

0x09dc,	// (0x000846fa) list_medium_line_x2_t4_g2_g2_ParamLimits

0x09dc,	// (0x000846fa) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00093a1e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00093a1e) list_medium_line_x2_t4_g2_g

0x09ee,	// (0x0008470c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x09ee,	// (0x0008470c) list_medium_line_x2_t4_g2_t1

0x0a08,	// (0x00084726) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0a08,	// (0x00084726) list_medium_line_x2_t4_g2_t2

0x0a1e,	// (0x0008473c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0a1e,	// (0x0008473c) list_medium_line_x2_t4_g2_t3

0x026c,	// (0x00083f8a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x026c,	// (0x00083f8a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00093a23) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00093a23) list_medium_line_x2_t4_g2_t

0x0a33,	// (0x00084751) list_medium_line_t3_right_iconx2_g1

0x0936,	// (0x00084654) list_medium_line_t3_right_iconx2_g2

0x0a3b,	// (0x00084759) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00093a2c) list_medium_line_t3_right_iconx2_g

0x0a45,	// (0x00084763) list_medium_line_t3_right_iconx2_t1

0x0a55,	// (0x00084773) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00093a33) list_medium_line_t3_right_iconx2_t

0x022b,	// (0x00083f49) list_medium_line_x3_t4_g4_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x3_t4_g4_g1

0x2a26,	// (0x00086744) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2a26,	// (0x00086744) list_medium_line_x3_t4_g4_g2

0x03ba,	// (0x000840d8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x03ba,	// (0x000840d8) list_medium_line_x3_t4_g4_g3

0x9985,	// (0x0008d6a3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9985,	// (0x0008d6a3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00093a38) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00093a38) list_medium_line_x3_t4_g4_g

0x0a63,	// (0x00084781) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a63,	// (0x00084781) list_medium_line_x3_t4_g4_t1

0x0a7a,	// (0x00084798) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a7a,	// (0x00084798) list_medium_line_x3_t4_g4_t2

0x03e7,	// (0x00084105) list_medium_line_x3_t4_g4_t3_ParamLimits

0x03e7,	// (0x00084105) list_medium_line_x3_t4_g4_t3

0x0a95,	// (0x000847b3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a95,	// (0x000847b3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00093a41) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00093a41) list_medium_line_x3_t4_g4_t

0x0ab2,	// (0x000847d0) list_single_dyc_row_text_pane_t1_ParamLimits

0x0ab2,	// (0x000847d0) list_single_dyc_row_text_pane_t1

0x0afb,	// (0x00084819) list_single_dyc_row_text_pane_t2_ParamLimits

0x0afb,	// (0x00084819) list_single_dyc_row_text_pane_t2

0xe7d3,	// (0x000924f1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe7d3,	// (0x000924f1) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00093a4a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00093a4a) list_single_dyc_row_text_pane_t

0xe7f7,	// (0x00092515) list_single_dyc_row_pane_g1_ParamLimits

0xe7f7,	// (0x00092515) list_single_dyc_row_pane_g1

0xe803,	// (0x00092521) list_single_dyc_row_pane_g2_ParamLimits

0xe803,	// (0x00092521) list_single_dyc_row_pane_g2

0xe80f,	// (0x0009252d) list_single_dyc_row_pane_g3_ParamLimits

0xe80f,	// (0x0009252d) list_single_dyc_row_pane_g3

0xe81b,	// (0x00092539) list_single_dyc_row_pane_g4_ParamLimits

0xe81b,	// (0x00092539) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00093a57) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00093a57) list_single_dyc_row_pane_g

0xe827,	// (0x00092545) list_single_dyc_row_text_pane_ParamLimits

0xe827,	// (0x00092545) list_single_dyc_row_text_pane

0x10cd,	// (0x00084deb) bg_sp_fs_scroll_pane

0x9991,	// (0x0008d6af) thumb_sp_fs_scroll_pane

0x0609,	// (0x00084327) list_medium_line_g1_ParamLimits

0x0609,	// (0x00084327) list_medium_line_g1

0x0c30,	// (0x0008494e) list_medium_line_t1_ParamLimits

0x0c30,	// (0x0008494e) list_medium_line_t1

0x022b,	// (0x00083f49) list_medium_line_x2_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x2_g1

0x2a26,	// (0x00086744) list_medium_line_x2_g2_ParamLimits

0x2a26,	// (0x00086744) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00093a60) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00093a60) list_medium_line_x2_g

0xe846,	// (0x00092564) list_medium_line_x2_t1_ParamLimits

0xe846,	// (0x00092564) list_medium_line_x2_t1

0x022b,	// (0x00083f49) list_medium_line_x3_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x3_g1

0x2a26,	// (0x00086744) list_medium_line_x3_g2_ParamLimits

0x2a26,	// (0x00086744) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00093a60) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00093a60) list_medium_line_x3_g

0xe846,	// (0x00092564) list_medium_line_x3_t1_ParamLimits

0xe846,	// (0x00092564) list_medium_line_x3_t1

0x999a,	// (0x0008d6b8) thumb_sp_fs_scroll_pane_g1

0x99a3,	// (0x0008d6c1) thumb_sp_fs_scroll_pane_g2

0x99ac,	// (0x0008d6ca) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00093a65) thumb_sp_fs_scroll_pane_g

0x999a,	// (0x0008d6b8) bg_sp_fs_scroll_pane_g1

0x99a3,	// (0x0008d6c1) bg_sp_fs_scroll_pane_g2

0x99ac,	// (0x0008d6ca) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00093a65) bg_sp_fs_scroll_pane_g

0x022b,	// (0x00083f49) list_medium_line_x2_t3_g4_g1_ParamLimits

0x022b,	// (0x00083f49) list_medium_line_x2_t3_g4_g1

0x2a32,	// (0x00086750) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2a32,	// (0x00086750) list_medium_line_x2_t3_g4_g2

0x2a26,	// (0x00086744) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2a26,	// (0x00086744) list_medium_line_x2_t3_g4_g3

0x0237,	// (0x00083f55) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0237,	// (0x00083f55) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00092fe0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00092fe0) list_medium_line_x2_t3_g4_g

0x0c45,	// (0x00084963) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c45,	// (0x00084963) list_medium_line_x2_t3_g4_t1

0x0c5d,	// (0x0008497b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0c5d,	// (0x0008497b) list_medium_line_x2_t3_g4_t2

0x026c,	// (0x00083f8a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x026c,	// (0x00083f8a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00093a6c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00093a6c) list_medium_line_x2_t3_g4_t

0x0609,	// (0x00084327) list_medium_line_g2_g1_ParamLimits

0x0609,	// (0x00084327) list_medium_line_g2_g1

0x0615,	// (0x00084333) list_medium_line_g2_g2_ParamLimits

0x0615,	// (0x00084333) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0009371e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0009371e) list_medium_line_g2_g

0x0c77,	// (0x00084995) list_medium_line_g2_t1_ParamLimits

0x0c77,	// (0x00084995) list_medium_line_g2_t1

0x0609,	// (0x00084327) list_medium_line_t3_g2_g1_ParamLimits

0x0609,	// (0x00084327) list_medium_line_t3_g2_g1

0x0615,	// (0x00084333) list_medium_line_t3_g2_g2_ParamLimits

0x0615,	// (0x00084333) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0009371e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0009371e) list_medium_line_t3_g2_g

0x0c8c,	// (0x000849aa) list_medium_line_t3_g2_t1_ParamLimits

0x0c8c,	// (0x000849aa) list_medium_line_t3_g2_t1

0x0ca6,	// (0x000849c4) list_medium_line_t3_g2_t2_ParamLimits

0x0ca6,	// (0x000849c4) list_medium_line_t3_g2_t2

0x0cbc,	// (0x000849da) list_medium_line_t3_g2_t3_ParamLimits

0x0cbc,	// (0x000849da) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00093a73) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00093a73) list_medium_line_t3_g2_t

0x0936,	// (0x00084654) list_medium_line_right_icon_g1

0x0cd6,	// (0x000849f4) list_medium_line_right_icon_t1

0x0609,	// (0x00084327) list_medium_line_t2_g1_ParamLimits

0x0609,	// (0x00084327) list_medium_line_t2_g1

0x0ce4,	// (0x00084a02) list_medium_line_t2_t1_ParamLimits

0x0ce4,	// (0x00084a02) list_medium_line_t2_t1

0x0cfe,	// (0x00084a1c) list_medium_line_t2_t2_ParamLimits

0x0cfe,	// (0x00084a1c) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00093a7a) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00093a7a) list_medium_line_t2_t

0x0609,	// (0x00084327) list_medium_line_t3_g1_ParamLimits

0x0609,	// (0x00084327) list_medium_line_t3_g1

0x0d17,	// (0x00084a35) list_medium_line_t3_t1_ParamLimits

0x0d17,	// (0x00084a35) list_medium_line_t3_t1

0x0d31,	// (0x00084a4f) list_medium_line_t3_t2_ParamLimits

0x0d31,	// (0x00084a4f) list_medium_line_t3_t2

0x0d47,	// (0x00084a65) list_medium_line_t3_t3_ParamLimits

0x0d47,	// (0x00084a65) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00093a7f) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00093a7f) list_medium_line_t3_t

0x0609,	// (0x00084327) list_medium_line_g3_g1_ParamLimits

0x0609,	// (0x00084327) list_medium_line_g3_g1

0x0d5c,	// (0x00084a7a) list_medium_line_g3_g2_ParamLimits

0x0d5c,	// (0x00084a7a) list_medium_line_g3_g2

0x0615,	// (0x00084333) list_medium_line_g3_g3_ParamLimits

0x0615,	// (0x00084333) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00093a86) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00093a86) list_medium_line_g3_g

0x0d68,	// (0x00084a86) list_medium_line_g3_t1_ParamLimits

0x0d68,	// (0x00084a86) list_medium_line_g3_t1

0x0609,	// (0x00084327) list_medium_line_t2_g3_g1_ParamLimits

0x0609,	// (0x00084327) list_medium_line_t2_g3_g1

0x0d5c,	// (0x00084a7a) list_medium_line_t2_g3_g2_ParamLimits

0x0d5c,	// (0x00084a7a) list_medium_line_t2_g3_g2

0x0615,	// (0x00084333) list_medium_line_t2_g3_g3_ParamLimits

0x0615,	// (0x00084333) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00093a86) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00093a86) list_medium_line_t2_g3_g

0x0d7d,	// (0x00084a9b) list_medium_line_t2_g3_t1_ParamLimits

0x0d7d,	// (0x00084a9b) list_medium_line_t2_g3_t1

0x0d97,	// (0x00084ab5) list_medium_line_t2_g3_t2_ParamLimits

0x0d97,	// (0x00084ab5) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00093a8d) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00093a8d) list_medium_line_t2_g3_t

0x0609,	// (0x00084327) list_medium_line_t3_g3_g1_ParamLimits

0x0609,	// (0x00084327) list_medium_line_t3_g3_g1

0x0d5c,	// (0x00084a7a) list_medium_line_t3_g3_g2_ParamLimits

0x0d5c,	// (0x00084a7a) list_medium_line_t3_g3_g2

0x0615,	// (0x00084333) list_medium_line_t3_g3_g3_ParamLimits

0x0615,	// (0x00084333) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00093a86) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00093a86) list_medium_line_t3_g3_g

0x0db3,	// (0x00084ad1) list_medium_line_t3_g3_t1_ParamLimits

0x0db3,	// (0x00084ad1) list_medium_line_t3_g3_t1

0x0dcc,	// (0x00084aea) list_medium_line_t3_g3_t2_ParamLimits

0x0dcc,	// (0x00084aea) list_medium_line_t3_g3_t2

0x0de2,	// (0x00084b00) list_medium_line_t3_g3_t3_ParamLimits

0x0de2,	// (0x00084b00) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00093a92) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00093a92) list_medium_line_t3_g3_t

0x0a33,	// (0x00084751) list_medium_line_right_iconx2_g1

0x0936,	// (0x00084654) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00093a99) list_medium_line_right_iconx2_g

0x0dfc,	// (0x00084b1a) list_medium_line_right_iconx2_t1

0x0a33,	// (0x00084751) list_medium_line_t2_right_iconx2_g1

0x0936,	// (0x00084654) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00093a99) list_medium_line_t2_right_iconx2_g

0x0e0a,	// (0x00084b28) list_medium_line_t2_right_iconx2_t1

0x0e1a,	// (0x00084b38) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00093a9e) list_medium_line_t2_right_iconx2_t

0x0e2c,	// (0x00084b4a) list_medium_line_x4_t4_t1

0x0e3a,	// (0x00084b58) list_medium_line_x4_t4_t2

0x0e4a,	// (0x00084b68) list_medium_line_x4_t4_t3

0x0e5a,	// (0x00084b78) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00093aa3) list_medium_line_x4_t4_t

0x99f8,	// (0x0008d716) tport_appsw_pane_ParamLimits

0x99f8,	// (0x0008d716) tport_appsw_pane

0x9a10,	// (0x0008d72e) tport_contact_pane_ParamLimits

0x9a10,	// (0x0008d72e) tport_contact_pane

0x9a28,	// (0x0008d746) tport_listscroll_pane_ParamLimits

0x9a28,	// (0x0008d746) tport_listscroll_pane

0x9a42,	// (0x0008d760) cell_tport_appsw_pane_ParamLimits

0x9a42,	// (0x0008d760) cell_tport_appsw_pane

0xe1db,	// (0x00091ef9) tport_appsw_pane_g1_ParamLimits

0xe1db,	// (0x00091ef9) tport_appsw_pane_g1

0x9a82,	// (0x0008d7a0) tport_contact_pane_g1

0x8cb0,	// (0x0008c9ce) tport_contact_pane_t1

0x9a8b,	// (0x0008d7a9) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00093aac) tport_contact_pane_t

0x9a99,	// (0x0008d7b7) list_tport_pane

0x9aa2,	// (0x0008d7c0) scroll_pane_cp_030

0x9ab3,	// (0x0008d7d1) cell_tport_appsw_pane_g1

0x9ac3,	// (0x0008d7e1) cell_tport_appsw_pane_t1

0x9ad1,	// (0x0008d7ef) grid_highlight_pane_cp019

0x9ad9,	// (0x0008d7f7) list_tport_double_graphic_pane_ParamLimits

0x9ad9,	// (0x0008d7f7) list_tport_double_graphic_pane

0x12f8,	// (0x00085016) list_highlight_pane_cp023_ParamLimits

0x12f8,	// (0x00085016) list_highlight_pane_cp023

0x9ae6,	// (0x0008d804) list_tport_double_graphic_pane_g1_ParamLimits

0x9ae6,	// (0x0008d804) list_tport_double_graphic_pane_g1

0x9af3,	// (0x0008d811) list_tport_double_graphic_pane_t1_ParamLimits

0x9af3,	// (0x0008d811) list_tport_double_graphic_pane_t1

0x9b08,	// (0x0008d826) list_tport_double_graphic_pane_t2_ParamLimits

0x9b08,	// (0x0008d826) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00093ab8) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00093ab8) list_tport_double_graphic_pane_t

0x10cd,	// (0x00084deb) main_cale_note_pane

0x744a,	// (0x0008b168) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x744a,	// (0x0008b168) cell_vitu2_function_top_wide_pane_cp01

0x9046,	// (0x0008cd64) wait_bar_pane_cp05_ParamLimits

0x12f8,	// (0x00085016) listscroll_cmail_pane

0x9b1a,	// (0x0008d838) list_cmail_pane

0x9b2a,	// (0x0008d848) list_cmail_body_pane

0x9b3f,	// (0x0008d85d) list_single_cmail_header_caption_pane

0x9b55,	// (0x0008d873) list_single_cmail_header_detail_pane_ParamLimits

0x9b55,	// (0x0008d873) list_single_cmail_header_detail_pane

0x9b7e,	// (0x0008d89c) list_single_cmail_header_caption_pane_t1

0x0e6a,	// (0x00084b88) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e6a,	// (0x00084b88) list_single_cmail_header_detail_pane_g1

0xf09e,	// (0x00092dbc) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf09e,	// (0x00092dbc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00093abd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00093abd) list_single_cmail_header_detail_pane_g

0xe85c,	// (0x0009257a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe85c,	// (0x0009257a) list_single_cmail_header_detail_pane_t1

0xe8bc,	// (0x000925da) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe8bc,	// (0x000925da) list_single_cmail_header_editor_pane_bg

0x8eb2,	// (0x0008cbd0) list_cmail_body_pane_g1

0x9ba2,	// (0x0008d8c0) list_cmail_body_pane_t1

0xe218,	// (0x00091f36) list_single_cmail_header_editor_pane_bg_g1

0xb2a6,	// (0x0008efc4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe228,	// (0x00091f46) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe220,	// (0x00091f3e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe47b,	// (0x00092199) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe248,	// (0x00091f66) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe238,	// (0x00091f56) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe240,	// (0x00091f5e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3074,	// (0x00086d92) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9bb0,	// (0x0008d8ce) calenote_gesture_pane_ParamLimits

0x9bb0,	// (0x0008d8ce) calenote_gesture_pane

0x9bd0,	// (0x0008d8ee) calenote_window_pane_ParamLimits

0x9bd0,	// (0x0008d8ee) calenote_window_pane

0x9bec,	// (0x0008d90a) popup_note_window_cp01

0x9bf5,	// (0x0008d913) calenote_swipe_1_pane_ParamLimits

0x9bf5,	// (0x0008d913) calenote_swipe_1_pane

0x9771,	// (0x0008d48f) calenote_swipe_2_pane_ParamLimits

0x9771,	// (0x0008d48f) calenote_swipe_2_pane

0x96b6,	// (0x0008d3d4) calenote_swipe_1_pane_g1_ParamLimits

0x96b6,	// (0x0008d3d4) calenote_swipe_1_pane_g1

0x96c3,	// (0x0008d3e1) calenote_swipe_1_pane_g2_ParamLimits

0x96c3,	// (0x0008d3e1) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000939e1) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000939e1) calenote_swipe_1_pane_g

0x9c13,	// (0x0008d931) calenote_swipe_1_pane_t1_ParamLimits

0x9c13,	// (0x0008d931) calenote_swipe_1_pane_t1

0x96b6,	// (0x0008d3d4) calenote_swipe_2_pane_g1_ParamLimits

0x96b6,	// (0x0008d3d4) calenote_swipe_2_pane_g1

0x9c32,	// (0x0008d950) calenote_swipe_2_pane_g2_ParamLimits

0x9c32,	// (0x0008d950) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00093ac9) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00093ac9) calenote_swipe_2_pane_g

0x9c3e,	// (0x0008d95c) calenote_swipe_2_pane_t1_ParamLimits

0x9c3e,	// (0x0008d95c) calenote_swipe_2_pane_t1

0x10cd,	// (0x00084deb) main_mup_navstr_pane

0x6105,	// (0x00089e23) main_mup3_pane_t7_ParamLimits

0x6105,	// (0x00089e23) main_mup3_pane_t7

0xde8e,	// (0x00091bac) main_mp4_pane_g6_ParamLimits

0xde8e,	// (0x00091bac) main_mp4_pane_g6

0xe0b6,	// (0x00091dd4) main_image3_pane_t4_ParamLimits

0xe0b6,	// (0x00091dd4) main_image3_pane_t4

0x9c65,	// (0x0008d983) popup_navstr_preview_pane_ParamLimits

0x9c65,	// (0x0008d983) popup_navstr_preview_pane

0x9c79,	// (0x0008d997) scroll_navstr_pane_ParamLimits

0x9c79,	// (0x0008d997) scroll_navstr_pane

0x10cd,	// (0x00084deb) bg_popup_preview_window_pane_cp04

0x9c8d,	// (0x0008d9ab) popup_navstr_preview_pane_t1

0x9c9b,	// (0x0008d9b9) scroll_navstr_pane_g1_ParamLimits

0x9c9b,	// (0x0008d9b9) scroll_navstr_pane_g1

0x9caf,	// (0x0008d9cd) scroll_navstr_pane_t1_ParamLimits

0x9caf,	// (0x0008d9cd) scroll_navstr_pane_t1

0x9c0a,	// (0x0008d928) bg_button_pane_cp014

0x9c0a,	// (0x0008d928) bg_button_pane_cp030

0x08dc,	// (0x000845fa) list_double_fisheye_pane_g4_ParamLimits

0x08dc,	// (0x000845fa) list_double_fisheye_pane_g4

0x08e8,	// (0x00084606) list_double_fisheye_pane_g5_ParamLimits

0x08e8,	// (0x00084606) list_double_fisheye_pane_g5

0xb5f6,	// (0x0008f314) sp_fs_scroll_pane_cp03

0x98de,	// (0x0008d5fc) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x98ea,	// (0x0008d608) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000939fe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x98f6,	// (0x0008d614) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9b22,	// (0x0008d840) sp_fs_scroll_pane_cp02

0x205b,	// (0x00085d79) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x205b,	// (0x00085d79) popup_sp_fs_calendar_preview_list_single_pane

0x10cd,	// (0x00084deb) main_cam6_pano_pane

0x12f8,	// (0x00085016) main_mup3_pane_ParamLimits

0x10cd,	// (0x00084deb) main_phacti_pane

0x8f19,	// (0x0008cc37) bg_button_pane_cp11

0x8f33,	// (0x0008cc51) main_mobtv_info_pane_g2_ParamLimits

0x8f33,	// (0x0008cc51) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0009395e) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0009395e) main_mobtv_info_pane_g

0x91b6,	// (0x0008ced4) sc_clock_pane_t5_ParamLimits

0x91b6,	// (0x0008ced4) sc_clock_pane_t5

0x93da,	// (0x0008d0f8) main_radioblah_pane_g1_ParamLimits

0x9420,	// (0x0008d13e) main_radioblah_pane_t3_ParamLimits

0x9420,	// (0x0008d13e) main_radioblah_pane_t3

0x9438,	// (0x0008d156) main_radioblah_pane_t4_ParamLimits

0x9438,	// (0x0008d156) main_radioblah_pane_t4

0x9466,	// (0x0008d184) main_radioblah_text_pane_ParamLimits

0x9466,	// (0x0008d184) main_radioblah_text_pane

0x9478,	// (0x0008d196) main_radioblah_info_pane_g1_ParamLimits

0x954b,	// (0x0008d269) main_radioblah_info_pane_t4_ParamLimits

0x954b,	// (0x0008d269) main_radioblah_info_pane_t4

0x12f8,	// (0x00085016) main_sp_fs_calendar_pane

0x9cc6,	// (0x0008d9e4) main_phacti_pane_g1

0x9cd7,	// (0x0008d9f5) phacti_note_pane_ParamLimits

0x9cd7,	// (0x0008d9f5) phacti_note_pane

0x9ceb,	// (0x0008da09) phacti_term_pane_ParamLimits

0x9ceb,	// (0x0008da09) phacti_term_pane

0x9d00,	// (0x0008da1e) phacti_note_pane_t1_ParamLimits

0x9d00,	// (0x0008da1e) phacti_note_pane_t1

0xe8d3,	// (0x000925f1) phacti_term_pane_g1

0xe8db,	// (0x000925f9) phacti_term_pane_t1_ParamLimits

0xe8db,	// (0x000925f9) phacti_term_pane_t1

0x9d17,	// (0x0008da35) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2649,	// (0x00086367) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00093ad3) popup_sp_fs_calendar_preview_list_single_pane_g

0x9d1f,	// (0x0008da3d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x9d1f,	// (0x0008da3d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x9d35,	// (0x0008da53) aid_popup_sp_fs_bg_corner_pane

0xd4cd,	// (0x000911eb) popup_sp_fs_calendar_preview_bg_pane_g1

0x10cd,	// (0x00084deb) popup_sp_fs_calendar_preview_bg_pane

0x9d3d,	// (0x0008da5b) popup_sp_fs_calendar_preview_list_pane

0xcfb2,	// (0x00090cd0) bg_main_sp_fs_cale_pane_ParamLimits

0xcfb2,	// (0x00090cd0) bg_main_sp_fs_cale_pane

0xe905,	// (0x00092623) listscroll_cale_mrui_pane_ParamLimits

0xe905,	// (0x00092623) listscroll_cale_mrui_pane

0xe91a,	// (0x00092638) listscroll_sp_fs_schedule_track_pane

0xe923,	// (0x00092641) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe923,	// (0x00092641) main_sp_fs_ctrlbar_pane_cp01

0x9da6,	// (0x0008dac4) main_sp_fs_ribbon_pane

0xe936,	// (0x00092654) popup_sp_fs_cale_preview_window

0x9dae,	// (0x0008dacc) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9dae,	// (0x0008dacc) list_single_sp_fs_schedule_track_pane

0x12f8,	// (0x00085016) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x12f8,	// (0x00085016) bg_sp_fs_highlight_list_pane_cp03

0x9dc1,	// (0x0008dadf) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9dc1,	// (0x0008dadf) list_single_sp_fs_schedule_track_pane_g1

0x9dcd,	// (0x0008daeb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9dcd,	// (0x0008daeb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00093ad8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00093ad8) list_single_sp_fs_schedule_track_pane_g

0x9dd9,	// (0x0008daf7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9dd9,	// (0x0008daf7) list_single_sp_fs_schedule_track_pane_t1

0x9df3,	// (0x0008db11) sp_fs_schedule_track_pane_ParamLimits

0x9df3,	// (0x0008db11) sp_fs_schedule_track_pane

0x9e04,	// (0x0008db22) sp_fs_schedule_track_pane_g1

0x9e0c,	// (0x0008db2a) sp_fs_schedule_track_pane_g2

0x9e14,	// (0x0008db32) sp_fs_schedule_track_pane_g3

0x9e1c,	// (0x0008db3a) sp_fs_schedule_track_pane_g4

0x9e24,	// (0x0008db42) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00093add) sp_fs_schedule_track_pane_g

0xe218,	// (0x00091f36) bg_sp_fs_schedule_viewer_highlight_g1

0xb2a6,	// (0x0008efc4) bg_sp_fs_schedule_viewer_highlight_g2

0xe220,	// (0x00091f3e) bg_sp_fs_schedule_viewer_highlight_g3

0xe228,	// (0x00091f46) bg_sp_fs_schedule_viewer_highlight_g4

0xe47b,	// (0x00092199) bg_sp_fs_schedule_viewer_highlight_g5

0xe238,	// (0x00091f56) bg_sp_fs_schedule_viewer_highlight_g6

0xe240,	// (0x00091f5e) bg_sp_fs_schedule_viewer_highlight_g7

0xe248,	// (0x00091f66) bg_sp_fs_schedule_viewer_highlight_g8

0x3074,	// (0x00086d92) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00093ae8) bg_sp_fs_schedule_viewer_highlight_g

0x10cd,	// (0x00084deb) bg_main_sp_fs_ribbon_pane

0x9e2c,	// (0x0008db4a) main_sp_fs_ribbon_pane_g1

0x9e35,	// (0x0008db53) main_sp_fs_ribbon_pane_t1

0x9e44,	// (0x0008db62) main_sp_fs_ribbon_pane_t2

0x9e53,	// (0x0008db71) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00093afb) main_sp_fs_ribbon_pane_t

0x9e62,	// (0x0008db80) main_sp_fs_ribbon_scheduler_pane

0x9e6a,	// (0x0008db88) bg_main_sp_fs_ribbon_pane_g1

0x9e73,	// (0x0008db91) bg_main_sp_fs_ribbon_pane_g2

0x9e7c,	// (0x0008db9a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00093b02) bg_main_sp_fs_ribbon_pane_g

0x9e84,	// (0x0008dba2) main_sp_fs_ribbon_scheduler_pane_g1

0x9e8d,	// (0x0008dbab) main_sp_fs_ribbon_scheduler_pane_g2

0x9e96,	// (0x0008dbb4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00093b09) main_sp_fs_ribbon_scheduler_pane_g

0x9e9f,	// (0x0008dbbd) list_cale_mrui_pane

0x9eac,	// (0x0008dbca) sp_fs_scroll_pane_cp07_ParamLimits

0x9eac,	// (0x0008dbca) sp_fs_scroll_pane_cp07

0x9ec8,	// (0x0008dbe6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9ec8,	// (0x0008dbe6) bg_sp_fs_schedule_viewer_highlight

0x9ed8,	// (0x0008dbf6) list_single_sp_fs_schedule_track_pane_cp01

0x9ee0,	// (0x0008dbfe) list_sp_fs_schedule_track_pane

0x9ee8,	// (0x0008dc06) sp_fs_scroll_pane_cp06_ParamLimits

0x9ee8,	// (0x0008dc06) sp_fs_scroll_pane_cp06

0xd4cd,	// (0x000911eb) bgmain_sp_fs_calendar_pane_g1

0x0e82,	// (0x00084ba0) list_single_cale_mrui_pane_ParamLimits

0x0e82,	// (0x00084ba0) list_single_cale_mrui_pane

0xe948,	// (0x00092666) list_single_cale_mrui_row_pane_ParamLimits

0xe948,	// (0x00092666) list_single_cale_mrui_row_pane

0xe955,	// (0x00092673) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe955,	// (0x00092673) list_single_cale_mrui_row_pane_g1

0xe98d,	// (0x000926ab) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe98d,	// (0x000926ab) list_single_cale_mrui_row_pane_t1

0x0ea3,	// (0x00084bc1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ea3,	// (0x00084bc1) list_single_cale_mrui_row_pane_t2

0xe99f,	// (0x000926bd) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe99f,	// (0x000926bd) list_single_cale_mrui_row_pane_t3

0xe9ce,	// (0x000926ec) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9ce,	// (0x000926ec) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00093b17) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00093b17) list_single_cale_mrui_row_pane_t

0x0f0b,	// (0x00084c29) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f0b,	// (0x00084c29) list_single_cmail_header_editor_pane_bg_cp01

0x0f31,	// (0x00084c4f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f31,	// (0x00084c4f) list_single_cmail_header_editor_pane_bg_cp02

0x9f07,	// (0x0008dc25) main_radioblah_text_pane_t1_ParamLimits

0x9f07,	// (0x0008dc25) main_radioblah_text_pane_t1

0x9f21,	// (0x0008dc3f) cam6_indi_pane_cp01

0x9f29,	// (0x0008dc47) cam6_mode_pane_cp01

0x9f31,	// (0x0008dc4f) cam6_pano_pane

0x9f3a,	// (0x0008dc58) cam6_zoom_pane_cp01

0x9f42,	// (0x0008dc60) cam6_pano_image_pane

0x9f4d,	// (0x0008dc6b) cam6_pano_pane_g1

0x8eb2,	// (0x0008cbd0) cam6_pano_pane_g2

0x9f56,	// (0x0008dc74) cam6_pano_pane_g3

0x9f5f,	// (0x0008dc7d) cam6_pano_pane_g4

0xdaf1,	// (0x0009180f) cam6_pano_pane_g5

0x9f68,	// (0x0008dc86) cam6_pano_pane_g6

0xf0b3,	// (0x00092dd1) cam6_pano_pane_g7

0x9f72,	// (0x0008dc90) cam6_pano_pane_g8

0x9f7b,	// (0x0008dc99) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00093b20) cam6_pano_pane_g

0x10cd,	// (0x00084deb) main_browser_tag_pane

0x9c5d,	// (0x0008d97b) grid_navstr_albumart_pane

0x9f86,	// (0x0008dca4) cell_navstr_albumart_pane_ParamLimits

0x9f86,	// (0x0008dca4) cell_navstr_albumart_pane

0x9fa6,	// (0x0008dcc4) cell_navstr_albumart_pane_g1

0xcdc3,	// (0x00090ae1) cell_navstr_albumart_pane_g2

0xcdd3,	// (0x00090af1) cell_navstr_albumart_pane_g3

0xcdcb,	// (0x00090ae9) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00093b33) cell_navstr_albumart_pane_g

0x9fae,	// (0x0008dccc) bt_list_pane_ParamLimits

0x9fae,	// (0x0008dccc) bt_list_pane

0x9fc2,	// (0x0008dce0) bt_list_pane_t1

0x9fd1,	// (0x0008dcef) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00093b3c) bt_list_pane_t

0x10cd,	// (0x00084deb) main_cale_prevew_pane

0x9fe0,	// (0x0008dcfe) popup_cale_preview_window_ParamLimits

0x9fe0,	// (0x0008dcfe) popup_cale_preview_window

0x12f8,	// (0x00085016) bg_popup_preview_window_pane_cp05_ParamLimits

0x12f8,	// (0x00085016) bg_popup_preview_window_pane_cp05

0x9ffb,	// (0x0008dd19) list_cale_preview_pane_ParamLimits

0x9ffb,	// (0x0008dd19) list_cale_preview_pane

0xa007,	// (0x0008dd25) list_double_cale_preview_pane_ParamLimits

0xa007,	// (0x0008dd25) list_double_cale_preview_pane

0xa019,	// (0x0008dd37) list_single_cale_preview_pane_ParamLimits

0xa019,	// (0x0008dd37) list_single_cale_preview_pane

0xa02f,	// (0x0008dd4d) list_single_cale_preview_pane_g1

0xa037,	// (0x0008dd55) list_single_cale_preview_pane_t1_ParamLimits

0xa037,	// (0x0008dd55) list_single_cale_preview_pane_t1

0xa04c,	// (0x0008dd6a) list_double_cale_preview_pane_g1

0xa054,	// (0x0008dd72) list_double_cale_preview_pane_t1_ParamLimits

0xa054,	// (0x0008dd72) list_double_cale_preview_pane_t1

0xa069,	// (0x0008dd87) list_double_cale_preview_pane_t2_ParamLimits

0xa069,	// (0x0008dd87) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00093b41) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00093b41) list_double_cale_preview_pane_t

0x10cd,	// (0x00084deb) main_ezdial_pane

0x12f8,	// (0x00085016) main_sp_fs_email_pane_ParamLimits

0x984a,	// (0x0008d568) cmail_ddmenu_btn01_pane_ParamLimits

0x984a,	// (0x0008d568) cmail_ddmenu_btn01_pane

0x985d,	// (0x0008d57b) cmail_ddmenu_btn02_pane_ParamLimits

0x985d,	// (0x0008d57b) cmail_ddmenu_btn02_pane

0x98b8,	// (0x0008d5d6) cmail_ddmenu_btn03_pane_ParamLimits

0x98b8,	// (0x0008d5d6) cmail_ddmenu_btn03_pane

0x990b,	// (0x0008d629) main_sp_fs_ctrlbar_pane_ParamLimits

0x994a,	// (0x0008d668) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9b2a,	// (0x0008d848) list_cmail_body_pane_ParamLimits

0x9b8c,	// (0x0008d8aa) bg_button_pane_cp12

0x9b95,	// (0x0008d8b3) list_single_cmail_header_detail_pane_g3_ParamLimits

0x9b95,	// (0x0008d8b3) list_single_cmail_header_detail_pane_g3

0xe898,	// (0x000925b6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe898,	// (0x000925b6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00093ac4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00093ac4) list_single_cmail_header_detail_pane_t

0xe8f0,	// (0x0009260e) phacti_term_pane_t2_ParamLimits

0xe8f0,	// (0x0009260e) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00093ace) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00093ace) phacti_term_pane_t

0xa081,	// (0x0008dd9f) aid_size_list_single_double

0xa08d,	// (0x0008ddab) popup_ezdial_listscroll_window

0xa0a9,	// (0x0008ddc7) popup_number_entry_window_cp01

0x2673,	// (0x00086391) bg_popup_call_pane_cp09

0xa0b7,	// (0x0008ddd5) ezdial_list_pane

0xa0bf,	// (0x0008dddd) scroll_pane_cp23

0xcfb2,	// (0x00090cd0) bg_button_pane_cp028_ParamLimits

0xcfb2,	// (0x00090cd0) bg_button_pane_cp028

0xa0c7,	// (0x0008dde5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa0c7,	// (0x0008dde5) cmail_ddmenu_btn01_pane_g1

0xa0d3,	// (0x0008ddf1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa0d3,	// (0x0008ddf1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00093b46) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00093b46) cmail_ddmenu_btn01_pane_g

0xa0df,	// (0x0008ddfd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xa0df,	// (0x0008ddfd) cmail_ddmenu_btn01_pane_t1

0xcfb2,	// (0x00090cd0) bg_button_pane_cp029_ParamLimits

0xcfb2,	// (0x00090cd0) bg_button_pane_cp029

0xa0f4,	// (0x0008de12) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa0f4,	// (0x0008de12) cmail_ddmenu_btn02_pane_g1

0xa10d,	// (0x0008de2b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa10d,	// (0x0008de2b) cmail_ddmenu_btn02_pane_t1

0x12f8,	// (0x00085016) bg_button_pane_cp031_ParamLimits

0x12f8,	// (0x00085016) bg_button_pane_cp031

0xa0f4,	// (0x0008de12) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa0f4,	// (0x0008de12) cmail_ddmenu_btn03_pane_g1

0xa10d,	// (0x0008de2b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa10d,	// (0x0008de2b) cmail_ddmenu_btn03_pane_t1

0x6caf,	// (0x0008a9cd) cell_dialer2_keypad_pane_t1_ParamLimits

0x6cc9,	// (0x0008a9e7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6cc9,	// (0x0008a9e7) cell_dialer2_keypad_pane_t1_copy1

0x8ac2,	// (0x0008c7e0) ncimui_group_button_pane

0x12f8,	// (0x00085016) main_sp_fs_calendar_pane_ParamLimits

0x9b3f,	// (0x0008d85d) list_single_cmail_header_caption_pane_ParamLimits

0xf0aa,	// (0x00092dc8) aid_recal_txt_sm_pane

0x10cd,	// (0x00084deb) mian_recal_day_pane

0xe936,	// (0x00092654) popup_sp_fs_cale_preview_window_ParamLimits

0xa131,	// (0x0008de4f) list_recal_day_pane

0xea18,	// (0x00092736) list_single_recal_day_pane_ParamLimits

0xea18,	// (0x00092736) list_single_recal_day_pane

0xa158,	// (0x0008de76) list_single_recal_day_pane_g1_ParamLimits

0xa158,	// (0x0008de76) list_single_recal_day_pane_g1

0xea2a,	// (0x00092748) list_single_recal_day_pane_g2_ParamLimits

0xea2a,	// (0x00092748) list_single_recal_day_pane_g2

0xea36,	// (0x00092754) list_single_recal_day_pane_g3_ParamLimits

0xea36,	// (0x00092754) list_single_recal_day_pane_g3

0x0f51,	// (0x00084c6f) list_single_recal_day_pane_g4_ParamLimits

0x0f51,	// (0x00084c6f) list_single_recal_day_pane_g4

0xea42,	// (0x00092760) list_single_recal_day_pane_g5_ParamLimits

0xea42,	// (0x00092760) list_single_recal_day_pane_g5

0xea4e,	// (0x0009276c) list_single_recal_day_pane_g6_ParamLimits

0xea4e,	// (0x0009276c) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00093b55) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00093b55) list_single_recal_day_pane_g

0xea62,	// (0x00092780) list_single_recal_day_pane_t1

0xea74,	// (0x00092792) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00093b60) list_single_recal_day_pane_t

0xa164,	// (0x0008de82) ncimui_query_button_pane_ParamLimits

0xa164,	// (0x0008de82) ncimui_query_button_pane

0xa174,	// (0x0008de92) ncimui_query_button_pane_t1_ParamLimits

0xa174,	// (0x0008de92) ncimui_query_button_pane_t1

0xa187,	// (0x0008dea5) ncimui_query_button_pane_t2_ParamLimits

0xa187,	// (0x0008dea5) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00093b65) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00093b65) ncimui_query_button_pane_t

0xa19a,	// (0x0008deb8) query_button_pane_ParamLimits

0xa19a,	// (0x0008deb8) query_button_pane

0x10cd,	// (0x00084deb) bg_button_pane_cp0028

0xa1ad,	// (0x0008decb) query_button_pane_t1

0x4d30,	// (0x00088a4e) main_tport_pane_ParamLimits

0x99b5,	// (0x0008d6d3) bg_popup_window_pane_cp01_ParamLimits

0x99b5,	// (0x0008d6d3) bg_popup_window_pane_cp01

0x99d0,	// (0x0008d6ee) heading_pane_cp08_ParamLimits

0x99d0,	// (0x0008d6ee) heading_pane_cp08

0x99e3,	// (0x0008d701) heading_pane_cp07_ParamLimits

0x99e3,	// (0x0008d701) heading_pane_cp07

0x9ab3,	// (0x0008d7d1) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00093ab1) cell_tport_appsw_pane_g

0x0429,	// (0x00084147) input_candi_list_open_g1

0xb497,	// (0x0008f1b5) list_cale_time_pane_g6_ParamLimits

0xb497,	// (0x0008f1b5) list_cale_time_pane_g6

0x5af9,	// (0x00089817) aid_size_touch_calib_1_ParamLimits

0x5af9,	// (0x00089817) aid_size_touch_calib_1

0x5b0b,	// (0x00089829) aid_size_touch_calib_2_ParamLimits

0x5b0b,	// (0x00089829) aid_size_touch_calib_2

0x5b23,	// (0x00089841) aid_size_touch_calib_3_ParamLimits

0x5b23,	// (0x00089841) aid_size_touch_calib_3

0x5b41,	// (0x0008985f) aid_size_touch_calib_4_ParamLimits

0x5b41,	// (0x0008985f) aid_size_touch_calib_4

0x5b59,	// (0x00089877) main_touch_calib_button_group_pane_ParamLimits

0x5b59,	// (0x00089877) main_touch_calib_button_group_pane

0x5b71,	// (0x0008988f) main_touch_calib_pane_g1_ParamLimits

0x5b83,	// (0x000898a1) main_touch_calib_pane_g2_ParamLimits

0x5b95,	// (0x000898b3) main_touch_calib_pane_g3_ParamLimits

0x5ba7,	// (0x000898c5) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0009346f) main_touch_calib_pane_g_ParamLimits

0x5bb9,	// (0x000898d7) main_touch_calib_pane_t1_ParamLimits

0x5bd3,	// (0x000898f1) main_touch_calib_pane_t2_ParamLimits

0x5bed,	// (0x0008990b) main_touch_calib_pane_t3_ParamLimits

0x5c01,	// (0x0008991f) main_touch_calib_pane_t4_ParamLimits

0x5c15,	// (0x00089933) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x00093478) main_touch_calib_pane_t_ParamLimits

0xd891,	// (0x000915af) list_single_fp_cale_pane_g3_ParamLimits

0xd891,	// (0x000915af) list_single_fp_cale_pane_g3

0x12f8,	// (0x00085016) bg_button_pane_cp012_ParamLimits

0x12f8,	// (0x00085016) bg_vkb2_func_pane_cp03_ParamLimits

0x7bfe,	// (0x0008b91c) cell_vitu2_function_top_pane_g1_ParamLimits

0x12f8,	// (0x00085016) bg_vkb2_func_pane_cp04_ParamLimits

0x8a4d,	// (0x0008c76b) main_ncimui_button_group_pane_ParamLimits

0x8a4d,	// (0x0008c76b) main_ncimui_button_group_pane

0x8aad,	// (0x0008c7cb) main_ncimui_pane_t3_ParamLimits

0x8aad,	// (0x0008c7cb) main_ncimui_pane_t3

0x9cce,	// (0x0008d9ec) phacti_button_group_pane

0xa081,	// (0x0008dd9f) aid_size_list_single_double_ParamLimits

0xa08d,	// (0x0008ddab) popup_ezdial_listscroll_window_ParamLimits

0xa0a9,	// (0x0008ddc7) popup_number_entry_window_cp01_ParamLimits

0xa1bb,	// (0x0008ded9) phacti_button_pane_ParamLimits

0xa1bb,	// (0x0008ded9) phacti_button_pane

0x10cd,	// (0x00084deb) bg_button_pane_cp14

0xa1cc,	// (0x0008deea) phacti_button_pane_t1

0xa1da,	// (0x0008def8) main_touch_calib_button_pane_ParamLimits

0xa1da,	// (0x0008def8) main_touch_calib_button_pane

0x1d96,	// (0x00085ab4) bg_button_pane_cp18_ParamLimits

0x1d96,	// (0x00085ab4) bg_button_pane_cp18

0xa1ef,	// (0x0008df0d) main_touch_calib_button_pane_t1_ParamLimits

0xa1ef,	// (0x0008df0d) main_touch_calib_button_pane_t1

0xa205,	// (0x0008df23) main_touch_calib_button_pane_t2_ParamLimits

0xa205,	// (0x0008df23) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00093b6a) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00093b6a) main_touch_calib_button_pane_t

0x10cd,	// (0x00084deb) cell_ncimui_button_pane

0x10cd,	// (0x00084deb) bg_button_pane_cp032

0xa223,	// (0x0008df41) cell_ncimui_button_pane_t1

0xe096,	// (0x00091db4) image3_infobar_pane_ParamLimits

0xe096,	// (0x00091db4) image3_infobar_pane

0x91e2,	// (0x0008cf00) fs_bigclock_status_pane_ParamLimits

0x91e2,	// (0x0008cf00) fs_bigclock_status_pane

0x91ef,	// (0x0008cf0d) main_fs_bigclock_clock_pane_ParamLimits

0x91ef,	// (0x0008cf0d) main_fs_bigclock_clock_pane

0x920d,	// (0x0008cf2b) main_fs_bigclock_indi_pane_ParamLimits

0x920d,	// (0x0008cf2b) main_fs_bigclock_indi_pane

0x923f,	// (0x0008cf5d) main_fs_bigclock_swipe_pane_ParamLimits

0x923f,	// (0x0008cf5d) main_fs_bigclock_swipe_pane

0x10cd,	// (0x00084deb) main_fs_clock_dumped_data

0x927e,	// (0x0008cf9c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x927e,	// (0x0008cf9c) list_single_fs_bigclock_indicator_pane_g1

0x9299,	// (0x0008cfb7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9299,	// (0x0008cfb7) list_single_fs_bigclock_indicator_pane_g2

0x92b3,	// (0x0008cfd1) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x92b3,	// (0x0008cfd1) list_single_fs_bigclock_indicator_pane_g3

0x92cd,	// (0x0008cfeb) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x92cd,	// (0x0008cfeb) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00093992) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00093992) list_single_fs_bigclock_indicator_pane_g

0x92f8,	// (0x0008d016) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x92f8,	// (0x0008d016) list_single_fs_bigclock_indicator_pane_t1

0x9320,	// (0x0008d03e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9320,	// (0x0008d03e) list_single_fs_bigclock_indicator_pane_t2

0x9348,	// (0x0008d066) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9348,	// (0x0008d066) list_single_fs_bigclock_indicator_pane_t3

0x9370,	// (0x0008d08e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9370,	// (0x0008d08e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0009399d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0009399d) list_single_fs_bigclock_indicator_pane_t

0xa231,	// (0x0008df4f) image3_infobar_fav_pane_ParamLimits

0xa231,	// (0x0008df4f) image3_infobar_fav_pane

0xa241,	// (0x0008df5f) image3_infobar_loc_pane_ParamLimits

0xa241,	// (0x0008df5f) image3_infobar_loc_pane

0xa255,	// (0x0008df73) image3_infobar_time_pane_ParamLimits

0xa255,	// (0x0008df73) image3_infobar_time_pane

0xd4cd,	// (0x000911eb) image3_infobar_time_pane_g1

0xa265,	// (0x0008df83) image3_infobar_time_pane_t1

0xd4cd,	// (0x000911eb) image3_infobar_loc_pane_g1

0xa273,	// (0x0008df91) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00093b6f) image3_infobar_loc_pane_g

0xa27b,	// (0x0008df99) image3_infobar_loc_pane_t1

0xd4cd,	// (0x000911eb) image3_infobar_fav_pane_g1

0xa289,	// (0x0008dfa7) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00093b74) image3_infobar_fav_pane_g

0xa291,	// (0x0008dfaf) fs_bigclock_status_battery_pane

0xa29a,	// (0x0008dfb8) fs_bigclock_status_signal_pane

0xa2a3,	// (0x0008dfc1) fs_bigclock_status_title_pane

0xa2ac,	// (0x0008dfca) fs_bigclock_status_signal_pane_g1

0xa2b5,	// (0x0008dfd3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00093b79) fs_bigclock_status_signal_pane_g

0xa2bd,	// (0x0008dfdb) fs_bigclock_status_battery_pane_g1

0xa2c6,	// (0x0008dfe4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00093b7e) fs_bigclock_status_battery_pane_g

0xa2ce,	// (0x0008dfec) fs_bigclock_status_title_pane_t1

0xa2dc,	// (0x0008dffa) main_fs_bigclock_clock_pane_g1

0xa2dc,	// (0x0008dffa) main_fs_bigclock_clock_pane_g2

0xa2ed,	// (0x0008e00b) main_fs_bigclock_clock_pane_g3

0xa2ed,	// (0x0008e00b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00093b83) main_fs_bigclock_clock_pane_g

0xa300,	// (0x0008e01e) main_fs_bigclock_clock_pane_t1

0xa316,	// (0x0008e034) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00093b8c) main_fs_bigclock_clock_pane_t

0xa32c,	// (0x0008e04a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa32c,	// (0x0008e04a) list_single_fs_bigclock_indicator_pane

0xa33d,	// (0x0008e05b) list_single_fs_bigclock_pane_ParamLimits

0xa33d,	// (0x0008e05b) list_single_fs_bigclock_pane

0xa3a7,	// (0x0008e0c5) main_fs_bigclock_indicator_pane_t1

0xa3b6,	// (0x0008e0d4) list_single_fs_bigclock_pane_g1

0xa3be,	// (0x0008e0dc) list_single_fs_bigclock_pane_t1

0xd4cd,	// (0x000911eb) main_fs_bigclock_swipe_pane_g1

0xa401,	// (0x0008e11f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00093b9d) main_fs_bigclock_swipe_pane_g

0xa409,	// (0x0008e127) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xa409,	// (0x0008e127) main_fs_bigclock_swipe_pane_t1

0x3cb7,	// (0x000879d5) call_type_pane_ParamLimits

0x10cd,	// (0x00084deb) main_btmg_pane

0xe981,	// (0x0009269f) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe981,	// (0x0009269f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00093b10) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00093b10) list_single_cale_mrui_row_pane_g

0xea07,	// (0x00092725) list_recal_vselct_arw_lo_pane

0xa150,	// (0x0008de6e) list_recal_vselct_arw_up_pane

0xea0f,	// (0x0009272d) list_recal_vselct_pane

0xa426,	// (0x0008e144) btmg_button_pane

0xa430,	// (0x0008e14e) main_btmg_pane_g1

0x10cd,	// (0x00084deb) bg_button_pane_cp044

0xa43a,	// (0x0008e158) btmg_button_pane_t1

0xcf9e,	// (0x00090cbc) aid_listscroll_gen

0x12f8,	// (0x00085016) main_cntbar_detail_pane

0x9b1a,	// (0x0008d838) list_cmail_folder_pane

0xb5f6,	// (0x0008f314) sp_fs_scroll_pane_cp03_ParamLimits

0x0f69,	// (0x00084c87) list_single_fs_dyc_pane_cp01_ParamLimits

0x0f69,	// (0x00084c87) list_single_fs_dyc_pane_cp01

0xa448,	// (0x0008e166) aid_size_cmail_indent

0xea86,	// (0x000927a4) list_single_dyc_row_pane_cp01

0xa483,	// (0x0008e1a1) cntbar_detail_list_pane_ParamLimits

0xa483,	// (0x0008e1a1) cntbar_detail_list_pane

0xa4cf,	// (0x0008e1ed) main_cntbar_detail_cont_pane_ParamLimits

0xa4cf,	// (0x0008e1ed) main_cntbar_detail_cont_pane

0xb5f6,	// (0x0008f314) scroll_pane_cp032_ParamLimits

0xb5f6,	// (0x0008f314) scroll_pane_cp032

0xa4e3,	// (0x0008e201) cntbar_detail_list_event_pane_ParamLimits

0xa4e3,	// (0x0008e201) cntbar_detail_list_event_pane

0xa493,	// (0x0008e1b1) cntbar_detail_list_shct_pane

0xb2f4,	// (0x0008f012) aid_list_gen

0xa4f3,	// (0x0008e211) aid_scroll

0xa4fc,	// (0x0008e21a) aid_size_touch_scroll_bar

0x8138,	// (0x0008be56) aid_list_double

0xa505,	// (0x0008e223) aid_list_single

0x8138,	// (0x0008be56) aid_list_single_lg

0x0f7e,	// (0x00084c9c) aid_list_z_g_a_sm

0xa50e,	// (0x0008e22c) aid_list_z_g_d

0x0f86,	// (0x00084ca4) aid_txt_z_prm

0x0f94,	// (0x00084cb2) aid_txt_z_prm_cp01

0x0fa2,	// (0x00084cc0) aid_txt_z_sec

0xa516,	// (0x0008e234) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa516,	// (0x0008e234) main_cntbar_detail_cont_pane_g1

0xa52a,	// (0x0008e248) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa52a,	// (0x0008e248) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00093ba2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00093ba2) main_cntbar_detail_cont_pane_g

0xa53a,	// (0x0008e258) main_cntbar_detail_cont_pane_t1

0xa548,	// (0x0008e266) main_cntbar_detail_cont_pane_t2

0xa556,	// (0x0008e274) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00093ba7) main_cntbar_detail_cont_pane_t

0xa564,	// (0x0008e282) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa564,	// (0x0008e282) cell_cntbar_detail_list_shct_pane

0xa578,	// (0x0008e296) cntbar_detail_list_shct_pane_g1

0xa581,	// (0x0008e29f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00093bae) cntbar_detail_list_shct_pane_g

0xa58a,	// (0x0008e2a8) cntbar_detail_list_event_pane_g1_ParamLimits

0xa58a,	// (0x0008e2a8) cntbar_detail_list_event_pane_g1

0xa596,	// (0x0008e2b4) cntbar_detail_list_event_pane_g2_ParamLimits

0xa596,	// (0x0008e2b4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00093bb3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00093bb3) cntbar_detail_list_event_pane_g

0xa602,	// (0x0008e320) cntbar_detail_list_event_pane_t1_ParamLimits

0xa602,	// (0x0008e320) cntbar_detail_list_event_pane_t1

0xa617,	// (0x0008e335) cntbar_detail_list_event_pane_t2_ParamLimits

0xa617,	// (0x0008e335) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00093bc0) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00093bc0) cntbar_detail_list_event_pane_t

0xd4cd,	// (0x000911eb) cell_cntbar_detail_list_shct_pane_g1

0xbb18,	// (0x0008f836) navi_pane_mv_g3

0x12f8,	// (0x00085016) main_cntbar_detail_pane_ParamLimits

0x10cd,	// (0x00084deb) main_notif_wgt_pane

0xde28,	// (0x00091b46) aid_tch_main_mp4_pane_g4

0xe02a,	// (0x00091d48) popup_slider_window_cp02

0xe9fd,	// (0x0009271b) list_recal_day_event_pane

0xa451,	// (0x0008e16f) cntbar_detail_btn_pane_ParamLimits

0xa451,	// (0x0008e16f) cntbar_detail_btn_pane

0xa46a,	// (0x0008e188) cntbar_detail_btn_pane_cp01_ParamLimits

0xa46a,	// (0x0008e188) cntbar_detail_btn_pane_cp01

0xa493,	// (0x0008e1b1) cntbar_detail_list_shct_pane_ParamLimits

0xa4a3,	// (0x0008e1c1) cntbar_detail_pane_g1_ParamLimits

0xa4a3,	// (0x0008e1c1) cntbar_detail_pane_g1

0xa4b3,	// (0x0008e1d1) cntbar_detail_pane_t1_ParamLimits

0xa4b3,	// (0x0008e1d1) cntbar_detail_pane_t1

0xa5a2,	// (0x0008e2c0) cntbar_detail_list_event_pane_g3_ParamLimits

0xa5a2,	// (0x0008e2c0) cntbar_detail_list_event_pane_g3

0xa5ba,	// (0x0008e2d8) cntbar_detail_list_event_pane_g4_ParamLimits

0xa5ba,	// (0x0008e2d8) cntbar_detail_list_event_pane_g4

0xa5d2,	// (0x0008e2f0) cntbar_detail_list_event_pane_g5_ParamLimits

0xa5d2,	// (0x0008e2f0) cntbar_detail_list_event_pane_g5

0xa5ea,	// (0x0008e308) cntbar_detail_list_event_pane_g6_ParamLimits

0xa5ea,	// (0x0008e308) cntbar_detail_list_event_pane_g6

0xa62c,	// (0x0008e34a) cntbar_detail_list_event_pane_t3_ParamLimits

0xa62c,	// (0x0008e34a) cntbar_detail_list_event_pane_t3

0xa63e,	// (0x0008e35c) popup_notif_wgt_window_ParamLimits

0xa63e,	// (0x0008e35c) popup_notif_wgt_window

0xa657,	// (0x0008e375) popup_submenu_window_cp01_ParamLimits

0xa657,	// (0x0008e375) popup_submenu_window_cp01

0x2673,	// (0x00086391) bg_popup_window_pane_cp10

0xa66d,	// (0x0008e38b) listscroll_notif_wgt_pane

0xa67f,	// (0x0008e39d) list_notif_wgt_window

0xa688,	// (0x0008e3a6) scroll_pane_cp033

0xa691,	// (0x0008e3af) list_notif_wgt_row_pane_ParamLimits

0xa691,	// (0x0008e3af) list_notif_wgt_row_pane

0xa6a1,	// (0x0008e3bf) aid_size_list_notif_wgt_del

0xa6ae,	// (0x0008e3cc) list_notif_wgt_row_pane_g1

0xa6ba,	// (0x0008e3d8) list_notif_wgt_row_pane_g2

0xa6c9,	// (0x0008e3e7) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00093bc7) list_notif_wgt_row_pane_g

0xa6d6,	// (0x0008e3f4) list_notif_wgt_row_pane_t1

0xa6ec,	// (0x0008e40a) list_notif_wgt_row_pane_t2

0xa6fe,	// (0x0008e41c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00093bce) list_notif_wgt_row_pane_t

0xe483,	// (0x000921a1) list_recal_day_event_pane_g1

0xa710,	// (0x0008e42e) list_recal_day_event_pane_t1

0x10cd,	// (0x00084deb) bg_button_pane_cp045

0xa71f,	// (0x0008e43d) cntbar_detail_btn_pane_t1

0xcfb2,	// (0x00090cd0) main_callh_pane_ParamLimits

0xcfb2,	// (0x00090cd0) main_callh_pane

0x10cd,	// (0x00084deb) main_coverflow0_pane

0x10cd,	// (0x00084deb) main_wgtman_pane

0x9257,	// (0x0008cf75) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9257,	// (0x0008cf75) main_fs_bigclock_unlock_btn_pane

0x9aab,	// (0x0008d7c9) bg_button_pane_cp16

0x9abb,	// (0x0008d7d9) cell_tport_appsw_pane_g3

0xa72d,	// (0x0008e44b) cf0_flow_pane_ParamLimits

0xa72d,	// (0x0008e44b) cf0_flow_pane

0xa742,	// (0x0008e460) listscroll_cf0_pane

0xa74d,	// (0x0008e46b) main_cf0_pane_g1

0xa75f,	// (0x0008e47d) main_cf0_pane_t1_ParamLimits

0xa75f,	// (0x0008e47d) main_cf0_pane_t1

0xa776,	// (0x0008e494) main_cf0_pane_t2_ParamLimits

0xa776,	// (0x0008e494) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00093bda) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00093bda) main_cf0_pane_t

0xa78d,	// (0x0008e4ab) scroll_pane_cp11

0xa798,	// (0x0008e4b6) cf0_flow_pane_g1

0xa7a0,	// (0x0008e4be) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00093bdf) cf0_flow_pane_g

0xa7a8,	// (0x0008e4c6) cf0_flow_pane_t1

0x10cd,	// (0x00084deb) main_call6_pane

0x10cd,	// (0x00084deb) main_calllock_pane

0xa7b6,	// (0x0008e4d4) call6_btn_grp_pane_ParamLimits

0xa7b6,	// (0x0008e4d4) call6_btn_grp_pane

0xa7d0,	// (0x0008e4ee) call6_pane_g1_ParamLimits

0xa7d0,	// (0x0008e4ee) call6_pane_g1

0xa7e6,	// (0x0008e504) popup_call6_1st_window_ParamLimits

0xa7e6,	// (0x0008e504) popup_call6_1st_window

0xa7f7,	// (0x0008e515) popup_call6_2nd_window_ParamLimits

0xa7f7,	// (0x0008e515) popup_call6_2nd_window

0xa808,	// (0x0008e526) cell_call6_btn_pane_ParamLimits

0xa808,	// (0x0008e526) cell_call6_btn_pane

0x2673,	// (0x00086391) bg_popup_call2_in_pane_cp03

0xa81b,	// (0x0008e539) popup_call6_1st_window_g1

0xa823,	// (0x0008e541) popup_call6_1st_window_g2

0xa82b,	// (0x0008e549) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00093be4) popup_call6_1st_window_g

0xa833,	// (0x0008e551) popup_call6_1st_window_t1

0xa842,	// (0x0008e560) popup_call6_1st_window_t2

0xa850,	// (0x0008e56e) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00093beb) popup_call6_1st_window_t

0x2673,	// (0x00086391) bg_popup_call2_in_pane_cp04

0xa81b,	// (0x0008e539) popup_call6_2nd_window_g1

0xa823,	// (0x0008e541) popup_call6_2nd_window_g2

0xa82b,	// (0x0008e549) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00093be4) popup_call6_2nd_window_g

0xa833,	// (0x0008e551) popup_call6_2nd_window_t1

0x10cd,	// (0x00084deb) bg_button_pane_cp15

0xa85e,	// (0x0008e57c) cell_call6_btn_pane_g1

0xf0bb,	// (0x00092dd9) cell_call6_btn_pane_t1

0xa867,	// (0x0008e585) listscroll_wgtman_pane_ParamLimits

0xa867,	// (0x0008e585) listscroll_wgtman_pane

0xa888,	// (0x0008e5a6) wgtman_btn_pane_ParamLimits

0xa888,	// (0x0008e5a6) wgtman_btn_pane

0xb91f,	// (0x0008f63d) aid_scroll_copy1

0xa8cb,	// (0x0008e5e9) list_wgtman_pane

0xa8d5,	// (0x0008e5f3) wgtman_btn_pane_g1_ParamLimits

0xa8d5,	// (0x0008e5f3) wgtman_btn_pane_g1

0xa901,	// (0x0008e61f) wgtman_btn_pane_t1_ParamLimits

0xa901,	// (0x0008e61f) wgtman_btn_pane_t1

0xa93e,	// (0x0008e65c) wgtman_btn_pane_t2_ParamLimits

0xa93e,	// (0x0008e65c) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00093bf2) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00093bf2) wgtman_btn_pane_t

0xa955,	// (0x0008e673) listrow_wgtman_pane_ParamLimits

0xa955,	// (0x0008e673) listrow_wgtman_pane

0xa967,	// (0x0008e685) listrow_wgtman_pane_g1

0xa974,	// (0x0008e692) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00093bf7) listrow_wgtman_pane_g

0x0fb0,	// (0x00084cce) listrow_wgtman_pane_t1

0x0fc8,	// (0x00084ce6) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00093bfc) listrow_wgtman_pane_t

0x0fee,	// (0x00084d0c) wait_bar_pane_cp09

0xa992,	// (0x0008e6b0) main_calllock_btn_pane

0xa99c,	// (0x0008e6ba) main_calllock_pane_g1

0x10cd,	// (0x00084deb) bg_button_pane_cp17

0xa85e,	// (0x0008e57c) main_calllock_btn_pane_g1

0xa9a8,	// (0x0008e6c6) main_calllock_btn_pane_t1

0x10cd,	// (0x00084deb) main_dialer3_pane

0x10cd,	// (0x00084deb) main_fmrd2_pane

0xd4cd,	// (0x000911eb) main_fs_bigclock_unlock_btn_pane_g1

0xa9bf,	// (0x0008e6dd) main_fs_bigclock_unlock_btn_pane_t1

0xa9cd,	// (0x0008e6eb) area_fmrd2_info_pane_ParamLimits

0xa9cd,	// (0x0008e6eb) area_fmrd2_info_pane

0xa9de,	// (0x0008e6fc) area_fmrd2_visual_pane_ParamLimits

0xa9de,	// (0x0008e6fc) area_fmrd2_visual_pane

0xa9ec,	// (0x0008e70a) fmrd2_indi_pane_ParamLimits

0xa9ec,	// (0x0008e70a) fmrd2_indi_pane

0xa9f9,	// (0x0008e717) area_fmrd2_visual_pane_g1

0xaa01,	// (0x0008e71f) area_fmrd2_visual_pane_t1

0xaa11,	// (0x0008e72f) area_fmrd2_visual_pane_t2

0xaa21,	// (0x0008e73f) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00093c06) area_fmrd2_visual_pane_t

0xaa31,	// (0x0008e74f) area_fmrd2_info_pane_g1

0xaa39,	// (0x0008e757) area_fmrd2_info_pane_t1

0xaa49,	// (0x0008e767) area_fmrd2_info_pane_t2

0xaa59,	// (0x0008e777) area_fmrd2_info_pane_t3

0xaa69,	// (0x0008e787) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00093c0d) area_fmrd2_info_pane_t

0xaa77,	// (0x0008e795) fmrd2_indi_pane_t1

0xaa87,	// (0x0008e7a5) fmrd2_indi_pane_t2

0xaa97,	// (0x0008e7b5) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00093c16) fmrd2_indi_pane_t

0x92dc,	// (0x0008cffa) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x92dc,	// (0x0008cffa) list_single_fs_bigclock_indicator_pane_g5

0x938d,	// (0x0008d0ab) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x938d,	// (0x0008d0ab) list_single_fs_bigclock_indicator_pane_t5

0x9d45,	// (0x0008da63) aid_cell_bcale_month_pane_ParamLimits

0x9d45,	// (0x0008da63) aid_cell_bcale_month_pane

0x9d63,	// (0x0008da81) bcale_month_pane_ParamLimits

0x9d63,	// (0x0008da81) bcale_month_pane

0x9d87,	// (0x0008daa5) bcale_preview_pane_ParamLimits

0x9d87,	// (0x0008daa5) bcale_preview_pane

0xa3be,	// (0x0008e0dc) list_single_fs_bigclock_pane_t1_ParamLimits

0xa3dd,	// (0x0008e0fb) list_single_fs_bigclock_pane_t2_ParamLimits

0xa3dd,	// (0x0008e0fb) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00093b98) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00093b98) list_single_fs_bigclock_pane_t

0xa9b7,	// (0x0008e6d5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00093c01) main_fs_bigclock_unlock_btn_pane_g

0xaaa7,	// (0x0008e7c5) aid_dia3_key_size_ParamLimits

0xaaa7,	// (0x0008e7c5) aid_dia3_key_size

0xaab6,	// (0x0008e7d4) aid_dia3_listrow_size_ParamLimits

0xaab6,	// (0x0008e7d4) aid_dia3_listrow_size

0xaacb,	// (0x0008e7e9) dia3_keypad_fun_pane_ParamLimits

0xaacb,	// (0x0008e7e9) dia3_keypad_fun_pane

0xaae7,	// (0x0008e805) dia3_keypad_num_pane_ParamLimits

0xaae7,	// (0x0008e805) dia3_keypad_num_pane

0xab02,	// (0x0008e820) dia3_listscroll_pane_ParamLimits

0xab02,	// (0x0008e820) dia3_listscroll_pane

0xab15,	// (0x0008e833) dia3_numentry_pane_ParamLimits

0xab15,	// (0x0008e833) dia3_numentry_pane

0xab29,	// (0x0008e847) dia3_list_pane

0xab34,	// (0x0008e852) scroll_pane_cp12

0x10cd,	// (0x00084deb) bg_dia3_numentry_pane

0xab3f,	// (0x0008e85d) dia3_numentry_pane_t1

0xab4e,	// (0x0008e86c) cell_dia3_key_num_pane

0xab56,	// (0x0008e874) cell_dia3_key0_fun_pane_ParamLimits

0xab56,	// (0x0008e874) cell_dia3_key0_fun_pane

0xab6a,	// (0x0008e888) cell_dia3_key1_fun_pane_ParamLimits

0xab6a,	// (0x0008e888) cell_dia3_key1_fun_pane

0xab82,	// (0x0008e8a0) dia3_listrow_pane

0x8ccb,	// (0x0008c9e9) bg_dia3_numentry_pane_g1

0x10cd,	// (0x00084deb) bg_button_pane_cp21

0xab94,	// (0x0008e8b2) cell_dia3_key_num_pane_t1

0xaba2,	// (0x0008e8c0) cell_dia3_key_num_pane_t2

0xabb1,	// (0x0008e8cf) cell_dia3_key_num_pane_t3

0xabc0,	// (0x0008e8de) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00093c1d) cell_dia3_key_num_pane_t

0x10cd,	// (0x00084deb) bg_button_pane_cp19

0xabcf,	// (0x0008e8ed) cell_dia3_key0_fun_pane_g1

0x10cd,	// (0x00084deb) bg_button_pane_cp20

0xabd7,	// (0x0008e8f5) cell_dia3_key1_fun_pane_g1

0xabdf,	// (0x0008e8fd) area_left_week_number_pane

0xabeb,	// (0x0008e909) area_top_day_name_pane

0xabfe,	// (0x0008e91c) frame_month_view_pane

0xac11,	// (0x0008e92f) grid_month_view_pane

0xac1f,	// (0x0008e93d) cell_top_day_name_pane_ParamLimits

0xac1f,	// (0x0008e93d) cell_top_day_name_pane

0xac4c,	// (0x0008e96a) cell_area_left_week_number_pane_ParamLimits

0xac4c,	// (0x0008e96a) cell_area_left_week_number_pane

0xac60,	// (0x0008e97e) cell_month_view_pane_ParamLimits

0xac60,	// (0x0008e97e) cell_month_view_pane

0xac8d,	// (0x0008e9ab) frm_month_g1

0xac9a,	// (0x0008e9b8) frm_month_g2

0xacad,	// (0x0008e9cb) frm_month_g3

0xacc0,	// (0x0008e9de) frm_month_g4

0xacd3,	// (0x0008e9f1) frm_month_g5

0xace6,	// (0x0008ea04) frm_month_g6

0xacf9,	// (0x0008ea17) frm_month_g7

0xad0c,	// (0x0008ea2a) frm_month_g8

0xad19,	// (0x0008ea37) frm_month_g9

0xad29,	// (0x0008ea47) frm_month_g10

0xad39,	// (0x0008ea57) frm_month_g11

0xad49,	// (0x0008ea67) frm_month_g12

0xad5b,	// (0x0008ea79) frm_month_g13

0xad6d,	// (0x0008ea8b) frm_month_g14

0xad81,	// (0x0008ea9f) frm_month_g15

0xad95,	// (0x0008eab3) frm_month_g16

0x000f,

0xff08,	// (0x00093c26) frm_month_g

0xada9,	// (0x0008eac7) cell_top_day_name_pane_t1

0xadbc,	// (0x0008eada) cell_area_left_week_number_pane_g1

0xadc8,	// (0x0008eae6) cell_area_left_week_number_pane_t1

0xd739,	// (0x00091457) cell_month_view_pane_g1

0xaddb,	// (0x0008eaf9) cell_month_view_pane_t1

0x10cd,	// (0x00084deb) main_fps_pane

0x9880,	// (0x0008d59e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x9880,	// (0x0008d59e) cmail_ddmenu_btn02_pane_cp1

0x989c,	// (0x0008d5ba) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x989c,	// (0x0008d5ba) cmail_ddmenu_btn02_pane_cp2

0xa100,	// (0x0008de1e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa100,	// (0x0008de1e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00093b4b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00093b4b) cmail_ddmenu_btn02_pane_g

0xa11f,	// (0x0008de3d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa11f,	// (0x0008de3d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00093b50) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00093b50) cmail_ddmenu_btn02_pane_t

0xadee,	// (0x0008eb0c) fps_text_pane_ParamLimits

0xadee,	// (0x0008eb0c) fps_text_pane

0xae05,	// (0x0008eb23) main_fps_pane_g1_ParamLimits

0xae05,	// (0x0008eb23) main_fps_pane_g1

0xae1f,	// (0x0008eb3d) wait_bar_pane_cp010_ParamLimits

0xae1f,	// (0x0008eb3d) wait_bar_pane_cp010

0xae30,	// (0x0008eb4e) fps_text_pane_t1_ParamLimits

0xae30,	// (0x0008eb4e) fps_text_pane_t1

0x7155,	// (0x0008ae73) cam4_image_uncrop_pane_g1

0x715e,	// (0x0008ae7c) cam4_image_uncrop_pane_g2

0x7167,	// (0x0008ae85) cam4_image_uncrop_pane_g3

0x7170,	// (0x0008ae8e) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0009360c) cam4_image_uncrop_pane_g

0xab82,	// (0x0008e8a0) dia3_listrow_pane_ParamLimits

0x10cd,	// (0x00084deb) main_phob2_pane

0x9a53,	// (0x0008d771) cell_tport_appsw_pane_cp02_ParamLimits

0x9a53,	// (0x0008d771) cell_tport_appsw_pane_cp02

0x9a67,	// (0x0008d785) cell_tport_appsw_pane_cp03_ParamLimits

0x9a67,	// (0x0008d785) cell_tport_appsw_pane_cp03

0x10cd,	// (0x00084deb) phob2_contact_card_pane

0x10cd,	// (0x00084deb) phob2_listscroll_pane

0xae48,	// (0x0008eb66) phob2_list_pane

0xae50,	// (0x0008eb6e) scroll_pane_cp034

0xae58,	// (0x0008eb76) phob2_cc_data_pane_ParamLimits

0xae58,	// (0x0008eb76) phob2_cc_data_pane

0xae77,	// (0x0008eb95) phob2_cc_listscroll_pane_ParamLimits

0xae77,	// (0x0008eb95) phob2_cc_listscroll_pane

0xa955,	// (0x0008e673) list_double_large_graphic_phob2_pane_ParamLimits

0xa955,	// (0x0008e673) list_double_large_graphic_phob2_pane

0xae95,	// (0x0008ebb3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xae95,	// (0x0008ebb3) list_double_large_graphic_phob2_pane_g1

0x1000,	// (0x00084d1e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1000,	// (0x00084d1e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00093c47) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00093c47) list_double_large_graphic_phob2_pane_g

0x100c,	// (0x00084d2a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x100c,	// (0x00084d2a) list_double_large_graphic_phob2_pane_t1

0x1021,	// (0x00084d3f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1021,	// (0x00084d3f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00093c4c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00093c4c) list_double_large_graphic_phob2_pane_t

0x10cd,	// (0x00084deb) list_highlight_pane_cp024

0xaeab,	// (0x0008ebc9) phob2_cc_button_pane

0xaeb3,	// (0x0008ebd1) phob2_cc_data_pane_g1_ParamLimits

0xaeb3,	// (0x0008ebd1) phob2_cc_data_pane_g1

0xaec8,	// (0x0008ebe6) phob2_cc_data_pane_g2_ParamLimits

0xaec8,	// (0x0008ebe6) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00093c51) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00093c51) phob2_cc_data_pane_g

0xaed8,	// (0x0008ebf6) phob2_cc_data_pane_t1_ParamLimits

0xaed8,	// (0x0008ebf6) phob2_cc_data_pane_t1

0xaef0,	// (0x0008ec0e) phob2_cc_data_pane_t2_ParamLimits

0xaef0,	// (0x0008ec0e) phob2_cc_data_pane_t2

0xaf08,	// (0x0008ec26) phob2_cc_data_pane_t3_ParamLimits

0xaf08,	// (0x0008ec26) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00093c56) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00093c56) phob2_cc_data_pane_t

0xaf20,	// (0x0008ec3e) phob2_cc_list_pane_ParamLimits

0xaf20,	// (0x0008ec3e) phob2_cc_list_pane

0xe52c,	// (0x0009224a) scroll_pane_cp035_ParamLimits

0xe52c,	// (0x0009224a) scroll_pane_cp035

0x12f8,	// (0x00085016) bg_button_pane_cp033

0xaf2c,	// (0x0008ec4a) phob2_cc_button_pane_g1

0xaf38,	// (0x0008ec56) phob2_cc_button_pane_t1

0xaf4d,	// (0x0008ec6b) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00093c5d) phob2_cc_button_pane_t

0xaf5f,	// (0x0008ec7d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaf5f,	// (0x0008ec7d) list_double_large_graphic_phob2_cc_pane

0xaf71,	// (0x0008ec8f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaf71,	// (0x0008ec8f) list_double_large_graphic_phob2_cc_pane_g1

0x1033,	// (0x00084d51) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1033,	// (0x00084d51) list_double_large_graphic_phob2_cc_pane_g2

0x103f,	// (0x00084d5d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x103f,	// (0x00084d5d) list_double_large_graphic_phob2_cc_pane_g3

0x104b,	// (0x00084d69) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x104b,	// (0x00084d69) list_double_large_graphic_phob2_cc_pane_g4

0x1057,	// (0x00084d75) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1057,	// (0x00084d75) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00093c62) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00093c62) list_double_large_graphic_phob2_cc_pane_g

0x1063,	// (0x00084d81) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1063,	// (0x00084d81) list_double_large_graphic_phob2_cc_pane_t1

0x108c,	// (0x00084daa) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x108c,	// (0x00084daa) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00093c6d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00093c6d) list_double_large_graphic_phob2_cc_pane_t

0xaf7d,	// (0x0008ec9b) list_highlight_pane_cp025_ParamLimits

0xaf7d,	// (0x0008ec9b) list_highlight_pane_cp025

0x12f8,	// (0x00085016) bg_button_pane_cp033_ParamLimits

0xaf2c,	// (0x0008ec4a) phob2_cc_button_pane_g1_ParamLimits

0xaf38,	// (0x0008ec56) phob2_cc_button_pane_t1_ParamLimits

0xaf4d,	// (0x0008ec6b) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00093c5d) phob2_cc_button_pane_t_ParamLimits

0x1306,	// (0x00085024) popup_wgtman_window

0xe332,	// (0x00092050) scroll_pane_cp038

0xa8ad,	// (0x0008e5cb) wgtman_btn_pane_cp_01_ParamLimits

0xa8ad,	// (0x0008e5cb) wgtman_btn_pane_cp_01

0xaf8b,	// (0x0008eca9) wgtman_content_pane

0xaf94,	// (0x0008ecb2) wgtman_heading_pane

0x10cd,	// (0x00084deb) bg_heading_pane_cp02

0xaf9d,	// (0x0008ecbb) wgtman_heading_pane_g1

0xafa5,	// (0x0008ecc3) wgtman_heading_pane_t1

0xafb3,	// (0x0008ecd1) scroll_pane_cp036

0xafbb,	// (0x0008ecd9) wgtman_list_pane

0xafc3,	// (0x0008ece1) wgtman_list_pane_t1_ParamLimits

0xafc3,	// (0x0008ece1) wgtman_list_pane_t1

0xeacb,	// (0x000927e9) cam4_grid_pane

0x0659,	// (0x00084377) bg_button_pane_cp015_ParamLimits

0x7d96,	// (0x0008bab4) bg_button_pane_cp016_ParamLimits

0x7da9,	// (0x0008bac7) bg_button_pane_cp017_ParamLimits

0x069f,	// (0x000843bd) popup_vitu2_query_window_g3_ParamLimits

0x069f,	// (0x000843bd) popup_vitu2_query_window_g3

0x071a,	// (0x00084438) popup_vitu2_query_window_t6_ParamLimits

0x071a,	// (0x00084438) popup_vitu2_query_window_t6

0x0745,	// (0x00084463) popup_vitu2_query_window_t7_ParamLimits

0x0745,	// (0x00084463) popup_vitu2_query_window_t7

0x7155,	// (0x0008ae73) cam4_grid_pane_g1

0x715e,	// (0x0008ae7c) cam4_grid_pane_g2

0xafdd,	// (0x0008ecfb) cam4_grid_pane_g3

0xafe6,	// (0x0008ed04) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00093c72) cam4_grid_pane_g

0x2ae4,	// (0x00086802) aid_placing_vt_slider_lsc_ParamLimits

0x2e3f,	// (0x00086b5d) vidtel_button_pane_ParamLimits

0x2e3f,	// (0x00086b5d) vidtel_button_pane

0x10cd,	// (0x00084deb) bg_button_pane_cp034

0xaff1,	// (0x0008ed0f) vidtel_button_pane_g1

0xaff9,	// (0x0008ed17) vidtel_button_pane_t1

0xe473,	// (0x00092191) aid_size_vtel_slider_touch

0xe52c,	// (0x0009224a) scroll_pane_cp039

0x8d3a,	// (0x0008ca58) ncim_query_button_pane_cp01_ParamLimits

0x8d59,	// (0x0008ca77) ncimui_query_pane_g1_ParamLimits

0x12f8,	// (0x00085016) input_focus_pane_cp012_ParamLimits

0x8d7e,	// (0x0008ca9c) ncim_query_entry_pane_t1_ParamLimits

0xe52c,	// (0x0009224a) scroll_pane_cp039_ParamLimits

0xba03,	// (0x0008f721) navi_pane_bcale_mc_g1

0xba0b,	// (0x0008f729) navi_pane_bcale_mc_t1

0x992f,	// (0x0008d64d) main_sp_fs_email_pane_g1

0x993b,	// (0x0008d659) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00093a03) main_sp_fs_email_pane_g

0x9efa,	// (0x0008dc18) list_single_cale_mrui_row_pane_g3_ParamLimits

0x9efa,	// (0x0008dc18) list_single_cale_mrui_row_pane_g3

0x0f5f,	// (0x00084c7d) list_single_recal_day_pane_g5_event_pane

0xea5a,	// (0x00092778) list_single_recal_day_pane_g7

0xb00f,	// (0x0008ed2d) list_recal_day_event_pane_cp01

0xb018,	// (0x0008ed36) list_recal_vselct_arw_lo_pane_cp01

0xb020,	// (0x0008ed3e) list_recal_vselct_arw_up_pane_cp01

0xb028,	// (0x0008ed46) list_recal_vselct_pane_cp01

0xe483,	// (0x000921a1) list_recal_day_event_pane_cp01_g1

0xea8f,	// (0x000927ad) list_recal_day_event_pane_cp01_t1

0xea62,	// (0x00092780) list_single_recal_day_pane_t1_ParamLimits

0xea74,	// (0x00092792) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00093b60) list_single_recal_day_pane_t_ParamLimits

0x1a2a,	// (0x00085748) bg_notes_pane_ParamLimits

0x1d60,	// (0x00085a7e) list_notes_pane_ParamLimits

0x1d6e,	// (0x00085a8c) scroll_pane_cp06_ParamLimits

0x1d96,	// (0x00085ab4) main_notes_pane_ParamLimits

0x10cd,	// (0x00084deb) main_welc_pane

0xb032,	// (0x0008ed50) main_welc_body_pane_ParamLimits

0xb032,	// (0x0008ed50) main_welc_body_pane

0xb050,	// (0x0008ed6e) main_welc_opti_pane_ParamLimits

0xb050,	// (0x0008ed6e) main_welc_opti_pane

0xb095,	// (0x0008edb3) main_welc_pane_t1_ParamLimits

0xb095,	// (0x0008edb3) main_welc_pane_t1

0xb0b3,	// (0x0008edd1) main_welc_body_row_pane_ParamLimits

0xb0b3,	// (0x0008edd1) main_welc_body_row_pane

0xea9d,	// (0x000927bb) main_welc_opti_row_pane_ParamLimits

0xea9d,	// (0x000927bb) main_welc_opti_row_pane

0xb0c7,	// (0x0008ede5) main_welc_opti_row_pane_g1

0xb0cf,	// (0x0008eded) main_welc_opti_row_pane_t1

0xb0de,	// (0x0008edfc) main_welc_body_row_pane_t1

0xa677,	// (0x0008e395) popup_notif_wgt_heading_pane

0xa6a1,	// (0x0008e3bf) aid_size_list_notif_wgt_del_ParamLimits

0xa6ae,	// (0x0008e3cc) list_notif_wgt_row_pane_g1_ParamLimits

0xa6ba,	// (0x0008e3d8) list_notif_wgt_row_pane_g2_ParamLimits

0xa6c9,	// (0x0008e3e7) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00093bc7) list_notif_wgt_row_pane_g_ParamLimits

0xa6d6,	// (0x0008e3f4) list_notif_wgt_row_pane_t1_ParamLimits

0xa6ec,	// (0x0008e40a) list_notif_wgt_row_pane_t2_ParamLimits

0xa6fe,	// (0x0008e41c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00093bce) list_notif_wgt_row_pane_t_ParamLimits

0xa967,	// (0x0008e685) listrow_wgtman_pane_g1_ParamLimits

0xa974,	// (0x0008e692) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00093bf7) listrow_wgtman_pane_g_ParamLimits

0x0fb0,	// (0x00084cce) listrow_wgtman_pane_t1_ParamLimits

0x0fc8,	// (0x00084ce6) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00093bfc) listrow_wgtman_pane_t_ParamLimits

0x0fee,	// (0x00084d0c) wait_bar_pane_cp09_ParamLimits

0x10cd,	// (0x00084deb) bg_popup_heading_pane_cp02

0xb0ed,	// (0x0008ee0b) popup_notif_wgt_heading_pane_g1

0xb0f5,	// (0x0008ee13) popup_notif_wgt_heading_pane_t1

0x10cd,	// (0x00084deb) main_vids_pane

0x10cd,	// (0x00084deb) vids_listscroll_pane

0xb103,	// (0x0008ee21) scroll_pane_cp040

0x10cd,	// (0x00084deb) vids_list_pane

0xb10e,	// (0x0008ee2c) vids_list_double_pane_ParamLimits

0xb10e,	// (0x0008ee2c) vids_list_double_pane

0xb11f,	// (0x0008ee3d) vids_list_double_pane_g1

0xb128,	// (0x0008ee46) vids_list_double_pane_t1

0xb138,	// (0x0008ee56) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00093c80) vids_list_double_pane_t

0x12f8,	// (0x00085016) main_ncimui_pane_ParamLimits

0x8a61,	// (0x0008c77f) main_ncimui_pane_g1_ParamLimits

0x8a6d,	// (0x0008c78b) main_ncimui_pane_g2_ParamLimits

0x8a6d,	// (0x0008c78b) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00093908) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00093908) main_ncimui_pane_g

0xb06b,	// (0x0008ed89) main_welc_pane_g1_ParamLimits

0xb06b,	// (0x0008ed89) main_welc_pane_g1

0xb080,	// (0x0008ed9e) main_welc_pane_g2_ParamLimits

0xb080,	// (0x0008ed9e) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00093c7b) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00093c7b) main_welc_pane_g

0x1a2a,	// (0x00085748) listscroll_mce_pane_ParamLimits

0xbb58,	// (0x0008f876) wait_bar_pane_cp10

0xcfa6,	// (0x00090cc4) main_cale_day_pane_ParamLimits

0xcfa6,	// (0x00090cc4) main_cale_week_pane_ParamLimits

0x1a2a,	// (0x00085748) main_messa_pane_ParamLimits

0x6491,	// (0x0008a1af) main_clock2_btn_pane_ParamLimits

0x6491,	// (0x0008a1af) main_clock2_btn_pane

0xd919,	// (0x00091637) main_clock2_btn_pane_cp01_ParamLimits

0xd919,	// (0x00091637) main_clock2_btn_pane_cp01

0x9e9f,	// (0x0008dbbd) list_cale_mrui_pane_ParamLimits

0xa757,	// (0x0008e475) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00093bd5) main_cf0_pane_g

0xabdf,	// (0x0008e8fd) area_left_week_number_pane_ParamLimits

0xabeb,	// (0x0008e909) area_top_day_name_pane_ParamLimits

0xabfe,	// (0x0008e91c) frame_month_view_pane_ParamLimits

0xac11,	// (0x0008e92f) grid_month_view_pane_ParamLimits

0xac8d,	// (0x0008e9ab) frm_month_g1_ParamLimits

0xac9a,	// (0x0008e9b8) frm_month_g2_ParamLimits

0xacad,	// (0x0008e9cb) frm_month_g3_ParamLimits

0xacc0,	// (0x0008e9de) frm_month_g4_ParamLimits

0xacd3,	// (0x0008e9f1) frm_month_g5_ParamLimits

0xace6,	// (0x0008ea04) frm_month_g6_ParamLimits

0xacf9,	// (0x0008ea17) frm_month_g7_ParamLimits

0xad0c,	// (0x0008ea2a) frm_month_g8_ParamLimits

0xad19,	// (0x0008ea37) frm_month_g9_ParamLimits

0xad29,	// (0x0008ea47) frm_month_g10_ParamLimits

0xad39,	// (0x0008ea57) frm_month_g11_ParamLimits

0xad49,	// (0x0008ea67) frm_month_g12_ParamLimits

0xad5b,	// (0x0008ea79) frm_month_g13_ParamLimits

0xad6d,	// (0x0008ea8b) frm_month_g14_ParamLimits

0xad81,	// (0x0008ea9f) frm_month_g15_ParamLimits

0xad95,	// (0x0008eab3) frm_month_g16_ParamLimits

0xff08,	// (0x00093c26) frm_month_g_ParamLimits

0xada9,	// (0x0008eac7) cell_top_day_name_pane_t1_ParamLimits

0xadbc,	// (0x0008eada) cell_area_left_week_number_pane_g1_ParamLimits

0xadc8,	// (0x0008eae6) cell_area_left_week_number_pane_t1_ParamLimits

0xd739,	// (0x00091457) cell_month_view_pane_g1_ParamLimits

0xaddb,	// (0x0008eaf9) cell_month_view_pane_t1_ParamLimits

0x1a22,	// (0x00085740) main_clock2_btn_pane_g1

0xb148,	// (0x0008ee66) main_clock2_btn_pane_t1

0x12f8,	// (0x00085016) listscroll_cmail_pane_ParamLimits

0x992f,	// (0x0008d64d) main_sp_fs_email_pane_g1_ParamLimits

0x993b,	// (0x0008d659) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00093a03) main_sp_fs_email_pane_g_ParamLimits

0xa131,	// (0x0008de4f) list_recal_day_pane_ParamLimits

0xa142,	// (0x0008de60) mian_recal_day_pane_t1

0x0b71,	// (0x0008488f) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b71,	// (0x0008488f) list_single_dyc_row_text_pane_t4

0x0bba,	// (0x000848d8) list_single_dyc_row_text_pane_t5_ParamLimits

0x0bba,	// (0x000848d8) list_single_dyc_row_text_pane_t5

0xe7e5,	// (0x00092503) list_single_dyc_row_text_pane_t6_ParamLimits

0xe7e5,	// (0x00092503) list_single_dyc_row_text_pane_t6

0x3bfd,	// (0x0008791b) aid_mgn_list_cale_time_pane

0x12f8,	// (0x00085016) main_gallery2_pane_ParamLimits

0xd92f,	// (0x0009164d) main_clock2_pane_cp01_t1

0xd93f,	// (0x0009165d) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000934e2) main_clock2_pane_cp01_t

0x2269,	// (0x00085f87) cale_week_scroll_pane_g16_ParamLimits

0x2269,	// (0x00085f87) cale_week_scroll_pane_g16

0x2673,	// (0x00086391) vorec_slider_pane

0xaff9,	// (0x0008ed17) vidtel_button_pane_t1_ParamLimits

0xa2dc,	// (0x0008dffa) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa2dc,	// (0x0008dffa) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa2ed,	// (0x0008e00b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa2ed,	// (0x0008e00b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x00093b83) main_fs_bigclock_clock_pane_g_ParamLimits

0xa300,	// (0x0008e01e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa316,	// (0x0008e034) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x00093b8c) main_fs_bigclock_clock_pane_t_ParamLimits

0x5c85,	// (0x000899a3) main_mup3_lyrics_pane_ParamLimits

0x5c85,	// (0x000899a3) main_mup3_lyrics_pane

0xb17c,	// (0x0008ee9a) main_mup3_lyrics_pane_t1_ParamLimits

0xb17c,	// (0x0008ee9a) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
