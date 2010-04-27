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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005c817 };

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
0x0cfa,	// (0x0005d511) Screen

0x0d06,	// (0x0005d51d) application_window

0x0d62,	// (0x0005d579) area_bottom_pane_ParamLimits

0x0d62,	// (0x0005d579) area_bottom_pane

0x0dbb,	// (0x0005d5d2) area_top_pane_ParamLimits

0x0dbb,	// (0x0005d5d2) area_top_pane

0x0e1f,	// (0x0005d636) call_video_uplink_pane_ParamLimits

0x0e1f,	// (0x0005d636) call_video_uplink_pane

0x0e5e,	// (0x0005d675) main_pane_ParamLimits

0x0e5e,	// (0x0005d675) main_pane

0xc7b3,	// (0x00068fca) context_pane

0x4339,	// (0x00060b50) navi_pane

0x435f,	// (0x00060b76) popup_cale_events_window_ParamLimits

0x435f,	// (0x00060b76) popup_cale_events_window

0xc7c6,	// (0x00068fdd) popup_mup_playback_window

0x4377,	// (0x00060b8e) signal_pane

0xa735,	// (0x00066f4c) main_browser_pane

0xa903,	// (0x0006711a) main_burst_pane

0x41c1,	// (0x000609d8) main_calc_pane

0xc799,	// (0x00068fb0) main_cale_day_pane

0x15a9,	// (0x0005ddc0) main_cale_month_pane

0xc799,	// (0x00068fb0) main_cale_week_pane

0xa903,	// (0x0006711a) main_call_pane

0xa156,	// (0x0006696d) main_call_poc_pane

0xa903,	// (0x0006711a) main_camera_pane

0xa903,	// (0x0006711a) main_chi_dic_pane

0xb10c,	// (0x00067923) main_clock_pane

0xa156,	// (0x0006696d) main_fmradio_pane

0xa903,	// (0x0006711a) main_graph_messa_pane

0xa156,	// (0x0006696d) main_help_pane

0xa735,	// (0x00066f4c) main_im_pane

0xa5a5,	// (0x00066dbc) main_image_pane_ParamLimits

0xa5a5,	// (0x00066dbc) main_image_pane

0xa156,	// (0x0006696d) main_location2_pane

0xa903,	// (0x0006711a) main_location_pane

0xa5a5,	// (0x00066dbc) main_messa_pane

0xa156,	// (0x0006696d) main_mp2_pane

0xa903,	// (0x0006711a) main_mp_pane

0xa156,	// (0x0006696d) main_msg_pane

0xa156,	// (0x0006696d) main_mup_eq_pane

0xa156,	// (0x0006696d) main_mup_pane

0xa735,	// (0x00066f4c) main_notes_pane

0xa156,	// (0x0006696d) main_pec_pane

0xa156,	// (0x0006696d) main_phob_pane

0xa156,	// (0x0006696d) main_pinb_pane

0xa156,	// (0x0006696d) main_postcard_pane

0xa156,	// (0x0006696d) main_qdial_pane

0xa903,	// (0x0006711a) main_skin_pane

0xa156,	// (0x0006696d) main_smil2_pane

0xa903,	// (0x0006711a) main_smil_pane

0xa903,	// (0x0006711a) main_video_pane

0xa903,	// (0x0006711a) main_video_tele_pane

0xa5a5,	// (0x00066dbc) main_viewer_pane_ParamLimits

0xa5a5,	// (0x00066dbc) main_viewer_pane

0xa903,	// (0x0006711a) main_vorec_pane

0x420d,	// (0x00060a24) popup_blid_sat_info_window_ParamLimits

0x420d,	// (0x00060a24) popup_blid_sat_info_window

0x422d,	// (0x00060a44) popup_dyc_status_message_window_ParamLimits

0x422d,	// (0x00060a44) popup_dyc_status_message_window

0x423b,	// (0x00060a52) popup_grid_large_graphic_window_ParamLimits

0x423b,	// (0x00060a52) popup_grid_large_graphic_window

0x42ca,	// (0x00060ae1) popup_loc_request_window_ParamLimits

0x42ca,	// (0x00060ae1) popup_loc_request_window

0x4311,	// (0x00060b28) popup_wml_address_window_ParamLimits

0x4311,	// (0x00060b28) popup_wml_address_window

0x4099,	// (0x000608b0) call_muted_g1

0x3d57,	// (0x0006056e) popup_call_audio_conf_window_ParamLimits

0x3d57,	// (0x0006056e) popup_call_audio_conf_window

0x40a9,	// (0x000608c0) popup_call_audio_first_window_ParamLimits

0x40a9,	// (0x000608c0) popup_call_audio_first_window

0x40e9,	// (0x00060900) popup_call_audio_in_window_ParamLimits

0x40e9,	// (0x00060900) popup_call_audio_in_window

0x410d,	// (0x00060924) popup_call_audio_out_window_ParamLimits

0x410d,	// (0x00060924) popup_call_audio_out_window

0x412f,	// (0x00060946) popup_call_audio_second_window_ParamLimits

0x412f,	// (0x00060946) popup_call_audio_second_window

0x415f,	// (0x00060976) popup_call_audio_wait_window_ParamLimits

0x415f,	// (0x00060976) popup_call_audio_wait_window

0x4180,	// (0x00060997) popup_number_entry_window_ParamLimits

0x4180,	// (0x00060997) popup_number_entry_window

0x97cb,	// (0x00065fe2) bg_popup_call_pane_cp05_ParamLimits

0x97cb,	// (0x00065fe2) bg_popup_call_pane_cp05

0x97eb,	// (0x00066002) popup_number_entry_window_t1

0x97fe,	// (0x00066015) popup_number_entry_window_t2

0x9810,	// (0x00066027) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0006b8e1) popup_number_entry_window_t

0x9822,	// (0x00066039) text_title_cp2

0x9835,	// (0x0006604c) bg_popup_call_pane_cp_ParamLimits

0x9835,	// (0x0006604c) bg_popup_call_pane_cp

0x9843,	// (0x0006605a) call_thumbnail_pane

0x984b,	// (0x00066062) popup_call_audio_in_window_g1_ParamLimits

0x984b,	// (0x00066062) popup_call_audio_in_window_g1

0x9857,	// (0x0006606e) popup_call_audio_in_window_g2_ParamLimits

0x9857,	// (0x0006606e) popup_call_audio_in_window_g2

0x9863,	// (0x0006607a) popup_call_audio_in_window_g3_ParamLimits

0x9863,	// (0x0006607a) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0006b8ea) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0006b8ea) popup_call_audio_in_window_g

0x986f,	// (0x00066086) popup_call_audio_in_window_t1_ParamLimits

0x986f,	// (0x00066086) popup_call_audio_in_window_t1

0x988b,	// (0x000660a2) popup_call_audio_in_window_t2_ParamLimits

0x988b,	// (0x000660a2) popup_call_audio_in_window_t2

0x98a7,	// (0x000660be) popup_call_audio_in_window_t3_ParamLimits

0x98a7,	// (0x000660be) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0006b8f1) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0006b8f1) popup_call_audio_in_window_t

0x9835,	// (0x0006604c) bg_popup_call_pane_cp01_ParamLimits

0x9835,	// (0x0006604c) bg_popup_call_pane_cp01

0x9843,	// (0x0006605a) call_thumbnail_pane_cp02

0x98ba,	// (0x000660d1) call_type_pane_cp022

0x98c2,	// (0x000660d9) popup_call_audio_out_window_g1_ParamLimits

0x98c2,	// (0x000660d9) popup_call_audio_out_window_g1

0x98d4,	// (0x000660eb) popup_call_audio_out_window_g2_ParamLimits

0x98d4,	// (0x000660eb) popup_call_audio_out_window_g2

0x98e0,	// (0x000660f7) popup_call_audio_out_window_g3_ParamLimits

0x98e0,	// (0x000660f7) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0006b8f8) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0006b8f8) popup_call_audio_out_window_g

0x98f2,	// (0x00066109) popup_call_audio_out_window_t1_ParamLimits

0x98f2,	// (0x00066109) popup_call_audio_out_window_t1

0x990a,	// (0x00066121) popup_call_audio_out_window_t2_ParamLimits

0x990a,	// (0x00066121) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0006b8ff) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0006b8ff) popup_call_audio_out_window_t

0x991f,	// (0x00066136) bg_popup_call_pane_ParamLimits

0x991f,	// (0x00066136) bg_popup_call_pane

0x107a,	// (0x0005d891) call_thumbnail_pane_cp_ParamLimits

0x107a,	// (0x0005d891) call_thumbnail_pane_cp

0x99a3,	// (0x000661ba) call_type_pane_cp01_ParamLimits

0x99a3,	// (0x000661ba) call_type_pane_cp01

0x99e7,	// (0x000661fe) popup_call_audio_first_window_g1_ParamLimits

0x99e7,	// (0x000661fe) popup_call_audio_first_window_g1

0x9a33,	// (0x0006624a) popup_call_audio_first_window_g2_ParamLimits

0x9a33,	// (0x0006624a) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0006b904) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0006b904) popup_call_audio_first_window_g

0x9a77,	// (0x0006628e) popup_call_audio_first_window_t1_ParamLimits

0x9a77,	// (0x0006628e) popup_call_audio_first_window_t1

0x9b23,	// (0x0006633a) popup_call_audio_first_window_t4_ParamLimits

0x9b23,	// (0x0006633a) popup_call_audio_first_window_t4

0x9baf,	// (0x000663c6) popup_call_audio_first_window_t5_ParamLimits

0x9baf,	// (0x000663c6) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0006b909) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0006b909) popup_call_audio_first_window_t

0xa156,	// (0x0006696d) bg_popup_call_pane_cp02

0xa160,	// (0x00066977) call_type_pane_cp023

0xa168,	// (0x0006697f) popup_call_audio_wait_window_g1

0xa170,	// (0x00066987) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006b910) popup_call_audio_wait_window_g

0xa178,	// (0x0006698f) popup_call_audio_wait_window_t3

0xa186,	// (0x0006699d) bg_popup_call_pane_cp03_ParamLimits

0xa186,	// (0x0006699d) bg_popup_call_pane_cp03

0xa3da,	// (0x00066bf1) call_thumbnail_pane_cp011_ParamLimits

0xa3da,	// (0x00066bf1) call_thumbnail_pane_cp011

0xa3e6,	// (0x00066bfd) call_type_pane_cp034_ParamLimits

0xa3e6,	// (0x00066bfd) call_type_pane_cp034

0xa422,	// (0x00066c39) popup_call_audio_second_window_g1_ParamLimits

0xa422,	// (0x00066c39) popup_call_audio_second_window_g1

0xa45e,	// (0x00066c75) popup_call_audio_second_window_g2_ParamLimits

0xa45e,	// (0x00066c75) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0006b915) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0006b915) popup_call_audio_second_window_g

0xa49a,	// (0x00066cb1) popup_call_audio_second_window_t1_ParamLimits

0xa49a,	// (0x00066cb1) popup_call_audio_second_window_t1

0xa51b,	// (0x00066d32) popup_call_audio_second_window_t2_ParamLimits

0xa51b,	// (0x00066d32) popup_call_audio_second_window_t2

0xa551,	// (0x00066d68) popup_call_audio_second_window_t3_ParamLimits

0xa551,	// (0x00066d68) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0006b91a) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0006b91a) popup_call_audio_second_window_t

0xa156,	// (0x0006696d) bg_popup_call_pane_cp04

0xa587,	// (0x00066d9e) list_conf_pane

0xa58f,	// (0x00066da6) popup_call_audio_conf_window_t1

0xa59d,	// (0x00066db4) call_thumbnail_pane_g1

0xa5a5,	// (0x00066dbc) bg_pinb_pane_ParamLimits

0xa5a5,	// (0x00066dbc) bg_pinb_pane

0xa65f,	// (0x00066e76) find_pinb_pane

0xa668,	// (0x00066e7f) listscroll_pinb_pane_ParamLimits

0xa668,	// (0x00066e7f) listscroll_pinb_pane

0xa677,	// (0x00066e8e) pinb_bg_pane_g1

0x109e,	// (0x0005d8b5) pinb_bg_pane_g2

0x10aa,	// (0x0005d8c1) pinb_bg_pane_g3

0x10b6,	// (0x0005d8cd) pinb_bg_pane_g4

0x10c2,	// (0x0005d8d9) pinb_bg_pane_g5

0x10ce,	// (0x0005d8e5) pinb_bg_pane_g6

0x10d9,	// (0x0005d8f0) pinb_bg_pane_g7

0x10e4,	// (0x0005d8fb) pinb_bg_pane_g8

0x10ef,	// (0x0005d906) pinb_bg_pane_g9

0x10f9,	// (0x0005d910) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0006b921) pinb_bg_pane_g

0x1116,	// (0x0005d92d) grid_pinb_pane

0x1121,	// (0x0005d938) list_pinb_pane

0x112c,	// (0x0005d943) scroll_pane_cp01_ParamLimits

0x112c,	// (0x0005d943) scroll_pane_cp01

0xa681,	// (0x00066e98) find_pinb_pane_g1_ParamLimits

0xa681,	// (0x00066e98) find_pinb_pane_g1

0xa699,	// (0x00066eb0) find_pinb_pane_t1

0xa6ab,	// (0x00066ec2) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0006b93b) find_pinb_pane_t

0xa6c0,	// (0x00066ed7) input_focus_pane_cp01_ParamLimits

0xa6c0,	// (0x00066ed7) input_focus_pane_cp01

0x113e,	// (0x0005d955) cell_pinb_pane_ParamLimits

0x113e,	// (0x0005d955) cell_pinb_pane

0xa6cc,	// (0x00066ee3) cell_pinb_pane_g1_ParamLimits

0xa6cc,	// (0x00066ee3) cell_pinb_pane_g1

0xa6df,	// (0x00066ef6) cell_pinb_pane_g2_ParamLimits

0xa6df,	// (0x00066ef6) cell_pinb_pane_g2

0xa6eb,	// (0x00066f02) cell_pinb_pane_g3_ParamLimits

0xa6eb,	// (0x00066f02) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0006b940) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0006b940) cell_pinb_pane_g

0xa156,	// (0x0006696d) grid_highlight_pane_cp01

0x116d,	// (0x0005d984) list_pinb_item_pane_ParamLimits

0x116d,	// (0x0005d984) list_pinb_item_pane

0xa156,	// (0x0006696d) list_highlight_pane_cp02

0x1197,	// (0x0005d9ae) list_pinb_item_pane_g1_ParamLimits

0x1197,	// (0x0005d9ae) list_pinb_item_pane_g1

0x11a4,	// (0x0005d9bb) list_pinb_item_pane_g2_ParamLimits

0x11a4,	// (0x0005d9bb) list_pinb_item_pane_g2

0x11b0,	// (0x0005d9c7) list_pinb_item_pane_g3_ParamLimits

0x11b0,	// (0x0005d9c7) list_pinb_item_pane_g3

0x11c1,	// (0x0005d9d8) list_pinb_item_pane_g4_ParamLimits

0x11c1,	// (0x0005d9d8) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0006b947) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0006b947) list_pinb_item_pane_g

0x11cd,	// (0x0005d9e4) list_pinb_item_pane_t1_ParamLimits

0x11cd,	// (0x0005d9e4) list_pinb_item_pane_t1

0x11fe,	// (0x0005da15) calc_display_pane

0x121c,	// (0x0005da33) calc_paper_pane

0x1238,	// (0x0005da4f) grid_calc_pane

0xa156,	// (0x0006696d) bg_list_pane_cp01

0x1264,	// (0x0005da7b) clock_g1

0x126c,	// (0x0005da83) clock_g2

0x0001,

0xf139,	// (0x0006b950) clock_g

0x1276,	// (0x0005da8d) clock_t1_ParamLimits

0x1276,	// (0x0005da8d) clock_t1

0x128b,	// (0x0005daa2) clock_t2_ParamLimits

0x128b,	// (0x0005daa2) clock_t2

0x129d,	// (0x0005dab4) clock_t3_ParamLimits

0x129d,	// (0x0005dab4) clock_t3

0x12af,	// (0x0005dac6) clock_t4_ParamLimits

0x12af,	// (0x0005dac6) clock_t4

0x12c1,	// (0x0005dad8) clock_t5_ParamLimits

0x12c1,	// (0x0005dad8) clock_t5

0x12d6,	// (0x0005daed) clock_t6_ParamLimits

0x12d6,	// (0x0005daed) clock_t6

0x12e8,	// (0x0005daff) clock_t7_ParamLimits

0x12e8,	// (0x0005daff) clock_t7

0x12fa,	// (0x0005db11) clock_t8_ParamLimits

0x12fa,	// (0x0005db11) clock_t8

0x1310,	// (0x0005db27) clock_t9_ParamLimits

0x1310,	// (0x0005db27) clock_t9

0x0008,

0xf13e,	// (0x0006b955) clock_t_ParamLimits

0xf13e,	// (0x0006b955) clock_t

0xa6f7,	// (0x00066f0e) popup_clock_analogue_window_cp02

0xa6f7,	// (0x00066f0e) popup_clock_digital_window_cp01

0xa6ff,	// (0x00066f16) listscroll_help_pane

0xa156,	// (0x0006696d) phob_pre_status_pane

0xa709,	// (0x00066f20) grid_qdial_pane

0xa5a5,	// (0x00066dbc) listscroll_mce_pane

0xa5a5,	// (0x00066dbc) bg_notes_pane

0xa713,	// (0x00066f2a) list_notes_pane

0x1326,	// (0x0005db3d) scroll_pane_cp06

0xa721,	// (0x00066f38) bg_calc_paper_pane

0x1335,	// (0x0005db4c) list_calc_pane

0xa735,	// (0x00066f4c) bg_calc_display_pane

0x134f,	// (0x0005db66) calc_display_pane_t1

0x1364,	// (0x0005db7b) calc_display_pane_t2

0x1379,	// (0x0005db90) calc_display_pane_t3

0x0002,

0xf151,	// (0x0006b968) calc_display_pane_t

0x138b,	// (0x0005dba2) cell_calc_pane_ParamLimits

0x138b,	// (0x0005dba2) cell_calc_pane

0xa741,	// (0x00066f58) bg_calc_paper_pane_g1

0xa74d,	// (0x00066f64) bg_calc_paper_pane_g2

0xa759,	// (0x00066f70) bg_calc_paper_pane_g3

0xa765,	// (0x00066f7c) bg_calc_paper_pane_g4

0xa771,	// (0x00066f88) bg_calc_paper_pane_g5

0x13b8,	// (0x0005dbcf) bg_calc_paper_pane_g6

0x13c9,	// (0x0005dbe0) bg_calc_paper_pane_g7

0x13da,	// (0x0005dbf1) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0006b96f) bg_calc_paper_pane_g

0x13eb,	// (0x0005dc02) calc_bg_paper_pane_g9

0x13fc,	// (0x0005dc13) list_calc_item_pane_ParamLimits

0x13fc,	// (0x0005dc13) list_calc_item_pane

0xa77d,	// (0x00066f94) list_calc_item_pane_g1

0x1430,	// (0x0005dc47) list_calc_item_pane_t1_ParamLimits

0x1430,	// (0x0005dc47) list_calc_item_pane_t1

0x1442,	// (0x0005dc59) list_calc_item_pane_t2_ParamLimits

0x1442,	// (0x0005dc59) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0006b980) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0006b980) list_calc_item_pane_t

0xa78a,	// (0x00066fa1) cell_calc_pane_g1

0xa794,	// (0x00066fab) grid_highlight_pane_cp02

0xa7b6,	// (0x00066fcd) bg_calc_display_pane_g1

0x1472,	// (0x0005dc89) bg_calc_display_pane_g2

0xa7bf,	// (0x00066fd6) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0006b98a) bg_calc_display_pane_g

0x147c,	// (0x0005dc93) cell_qdial_pane_ParamLimits

0x147c,	// (0x0005dc93) cell_qdial_pane

0x1490,	// (0x0005dca7) cell_qdial_pane_g1_ParamLimits

0x1490,	// (0x0005dca7) cell_qdial_pane_g1

0x149d,	// (0x0005dcb4) cell_qdial_pane_g2_ParamLimits

0x149d,	// (0x0005dcb4) cell_qdial_pane_g2

0xa7c8,	// (0x00066fdf) cell_qdial_pane_g3_ParamLimits

0xa7c8,	// (0x00066fdf) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0006b991) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0006b991) cell_qdial_pane_g

0x14ba,	// (0x0005dcd1) cell_qdial_pane_t1_ParamLimits

0x14ba,	// (0x0005dcd1) cell_qdial_pane_t1

0x14d2,	// (0x0005dce9) cell_qdial_pane_t2_ParamLimits

0x14d2,	// (0x0005dce9) cell_qdial_pane_t2

0x14e5,	// (0x0005dcfc) cell_qdial_pane_t3_ParamLimits

0x14e5,	// (0x0005dcfc) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0006b99a) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0006b99a) cell_qdial_pane_t

0xa156,	// (0x0006696d) grid_highlight_pane_cp04

0xa7d4,	// (0x00066feb) thumbnail_qdial_pane_ParamLimits

0xa7d4,	// (0x00066feb) thumbnail_qdial_pane

0xa830,	// (0x00067047) list_help_pane

0xa839,	// (0x00067050) scroll_pane_cp02

0x14f8,	// (0x0005dd0f) help_list_pane_t1_ParamLimits

0x14f8,	// (0x0005dd0f) help_list_pane_t1

0x1532,	// (0x0005dd49) bg_notes_pane_g2

0x153a,	// (0x0005dd51) bg_notes_pane_g3

0x1542,	// (0x0005dd59) notes_bg_pane_g1

0x154a,	// (0x0005dd61) notes_bg_pane_g4

0x1552,	// (0x0005dd69) notes_bg_pane_g5

0x155a,	// (0x0005dd71) notes_bg_pane_g6

0x1562,	// (0x0005dd79) notes_bg_pane_g7

0x156a,	// (0x0005dd81) notes_bg_pane_g8

0x1572,	// (0x0005dd89) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0006b9b8) notes_bg_pane_g

0x157a,	// (0x0005dd91) list_notes_text_pane_ParamLimits

0x157a,	// (0x0005dd91) list_notes_text_pane

0xa842,	// (0x00067059) list_notes_text_pane_g1

0x9bde,	// (0x000663f5) list_notes_text_pane_t1

0x15a9,	// (0x0005ddc0) listscroll_cale_week_pane

0x15ce,	// (0x0005dde5) bg_cale_heading_pane

0xa865,	// (0x0006707c) bg_cale_pane_cp01

0x15f0,	// (0x0005de07) cale_week_corner_pane

0x160a,	// (0x0005de21) cale_week_day_heading_pane

0x162c,	// (0x0005de43) cale_week_scroll_pane_g1

0x1649,	// (0x0005de60) cale_week_scroll_pane_g2

0x165c,	// (0x0005de73) cale_week_scroll_pane_g3

0x166f,	// (0x0005de86) cale_week_scroll_pane_g4

0x1682,	// (0x0005de99) cale_week_scroll_pane_g5

0x1695,	// (0x0005deac) cale_week_scroll_pane_g6

0x16a8,	// (0x0005debf) cale_week_scroll_pane_g7

0x16bb,	// (0x0005ded2) cale_week_scroll_pane_g8

0x16d0,	// (0x0005dee7) cale_week_scroll_pane_g9

0x16e3,	// (0x0005defa) cale_week_scroll_pane_g10

0x16f6,	// (0x0005df0d) cale_week_scroll_pane_g11

0x1709,	// (0x0005df20) cale_week_scroll_pane_g12

0x1720,	// (0x0005df37) cale_week_scroll_pane_g13

0x173b,	// (0x0005df52) cale_week_scroll_pane_g14

0x1756,	// (0x0005df6d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0006b9c7) cale_week_scroll_pane_g

0x1786,	// (0x0005df9d) cale_week_time_pane

0x179b,	// (0x0005dfb2) grid_cale_week_pane

0xa894,	// (0x000670ab) scroll_pane_cp08

0x17bc,	// (0x0005dfd3) cell_cale_week_pane_ParamLimits

0x17bc,	// (0x0005dfd3) cell_cale_week_pane

0x1820,	// (0x0005e037) cale_week_day_heading_pane_t1

0x185b,	// (0x0005e072) cale_week_day_heading_pane_t2

0x1896,	// (0x0005e0ad) cale_week_day_heading_pane_t3

0x18d1,	// (0x0005e0e8) cale_week_day_heading_pane_t4

0x190c,	// (0x0005e123) cale_week_day_heading_pane_t5

0x1947,	// (0x0005e15e) cale_week_day_heading_pane_t6

0x1982,	// (0x0005e199) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0006b9e8) cale_week_day_heading_pane_t

0xa8b1,	// (0x000670c8) bg_cale_side_pane

0x19bd,	// (0x0005e1d4) cale_week_time_pane_t1

0x19d7,	// (0x0005e1ee) cale_week_time_pane_t2

0x19f1,	// (0x0005e208) cale_week_time_pane_t3

0x1a0b,	// (0x0005e222) cale_week_time_pane_t4

0x1a25,	// (0x0005e23c) cale_week_time_pane_t5

0x1a41,	// (0x0005e258) cale_week_time_pane_t6

0x1a63,	// (0x0005e27a) cale_week_time_pane_t7

0x1a87,	// (0x0005e29e) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0006b9f7) cale_week_time_pane_t

0x1aad,	// (0x0005e2c4) cell_cale_week_pane_g2

0x1ad1,	// (0x0005e2e8) cell_cale_week_pane_g3_ParamLimits

0x1ad1,	// (0x0005e2e8) cell_cale_week_pane_g3

0xa8bf,	// (0x000670d6) grid_highlight_pane_cp07

0xa8c7,	// (0x000670de) listscroll_gms_pane

0xa8d1,	// (0x000670e8) grid_gms_pane

0xa8da,	// (0x000670f1) listscroll_gms_pane_g1

0xa8e2,	// (0x000670f9) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0006ba08) listscroll_gms_pane_g

0x1ae9,	// (0x0005e300) scroll_pane_cp010

0x1af4,	// (0x0005e30b) cell_gms_pane_ParamLimits

0x1af4,	// (0x0005e30b) cell_gms_pane

0x1b04,	// (0x0005e31b) cell_gms_pane_g1

0xa8ea,	// (0x00067101) cell_gms_pane_g2

0xa842,	// (0x00067059) cell_gms_pane_g3

0xa8f2,	// (0x00067109) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0006ba0d) cell_gms_pane_g

0xa8fb,	// (0x00067112) grid_highlight_pane_cp09

0x4041,	// (0x00060858) phob_pre_status_pane_g1

0x4049,	// (0x00060860) phob_pre_status_pane_g2

0x4051,	// (0x00060868) phob_pre_status_pane_g3

0x4059,	// (0x00060870) phob_pre_status_pane_g4

0x0004,

0xf51d,	// (0x0006bd34) phob_pre_status_pane_g

0x4069,	// (0x00060880) phob_pre_status_pane_t1

0x4079,	// (0x00060890) phob_pre_status_pane_t2

0x4089,	// (0x000608a0) phob_pre_status_pane_t3

0x0002,

0xf528,	// (0x0006bd3f) phob_pre_status_pane_t

0xa903,	// (0x0006711a) bg_list_pane_cp05

0x1b14,	// (0x0005e32b) grid_vorec_pane

0x1b1e,	// (0x0005e335) vorec_t1

0x1b2c,	// (0x0005e343) vorec_t2

0x1b3a,	// (0x0005e351) vorec_t3

0x1b48,	// (0x0005e35f) vorec_t4

0x979b,	// (0x00065fb2) vorec_t5

0x97a9,	// (0x00065fc0) vorec_t6

0x0004,

0xf1ff,	// (0x0006ba16) vorec_t

0x97b7,	// (0x00065fce) wait_bar_pane_cp01

0x1b64,	// (0x0005e37b) cell_vorec_pane_ParamLimits

0x1b64,	// (0x0005e37b) cell_vorec_pane

0x1b77,	// (0x0005e38e) cell_vorec_pane_g1

0xa156,	// (0x0006696d) grid_highlight_pane_cp05

0x1b91,	// (0x0005e3a8) cams_zoom_pane

0x1b9d,	// (0x0005e3b4) image_vga_pane

0x1bac,	// (0x0005e3c3) main_camera_pane_g1

0x1bba,	// (0x0005e3d1) main_camera_pane_g2

0x1bc6,	// (0x0005e3dd) main_camera_pane_g3

0x1bd2,	// (0x0005e3e9) main_camera_pane_g4

0x1bde,	// (0x0005e3f5) main_camera_pane_g5

0x1bea,	// (0x0005e401) main_camera_pane_g6

0x1bf6,	// (0x0005e40d) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006ba21) main_camera_pane_g

0x1c02,	// (0x0005e419) main_camera_pane_t1

0x1c14,	// (0x0005e42b) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006ba32) main_camera_pane_t

0x1c35,	// (0x0005e44c) cams_zoom_pane_cp_ParamLimits

0x1c35,	// (0x0005e44c) cams_zoom_pane_cp

0x1c59,	// (0x0005e470) image_cif_pane_ParamLimits

0x1c59,	// (0x0005e470) image_cif_pane

0x1c77,	// (0x0005e48e) image_subqcif_pane

0x1c7f,	// (0x0005e496) main_video_pane_g1_ParamLimits

0x1c7f,	// (0x0005e496) main_video_pane_g1

0x1c9f,	// (0x0005e4b6) main_video_pane_g2_ParamLimits

0x1c9f,	// (0x0005e4b6) main_video_pane_g2

0x1ccf,	// (0x0005e4e6) main_video_pane_g3_ParamLimits

0x1ccf,	// (0x0005e4e6) main_video_pane_g3

0x1cf8,	// (0x0005e50f) main_video_pane_g4_ParamLimits

0x1cf8,	// (0x0005e50f) main_video_pane_g4

0x1d21,	// (0x0005e538) main_video_pane_g5_ParamLimits

0x1d21,	// (0x0005e538) main_video_pane_g5

0xa917,	// (0x0006712e) main_video_pane_g6_ParamLimits

0xa917,	// (0x0006712e) main_video_pane_g6

0x0006,

0xf220,	// (0x0006ba37) main_video_pane_g_ParamLimits

0xf220,	// (0x0006ba37) main_video_pane_g

0x1d43,	// (0x0005e55a) main_video_pane_t1_ParamLimits

0x1d43,	// (0x0005e55a) main_video_pane_t1

0xa931,	// (0x00067148) cams_zoom_pane_g1

0xa93a,	// (0x00067151) cams_zoom_pane_g2

0xa943,	// (0x0006715a) cams_zoom_pane_g3

0xa94c,	// (0x00067163) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006ba46) cams_zoom_pane_g

0x1d8d,	// (0x0005e5a4) grid_cams_pane

0x1d9b,	// (0x0005e5b2) linegrid_cams_pane

0x1da9,	// (0x0005e5c0) cell_cams_pane_ParamLimits

0x1da9,	// (0x0005e5c0) cell_cams_pane

0xa955,	// (0x0006716c) cams_burst_image_pane

0xa95d,	// (0x00067174) cell_cams_pane_g1

0xa156,	// (0x0006696d) grid_highlight_pane_cp03

0xa78a,	// (0x00066fa1) mp_bg_pane_g1

0xa156,	// (0x0006696d) bg_list_pane_cp03

0xc6be,	// (0x00068ed5) bg_mp_pane

0xc6c6,	// (0x00068edd) grid_mp_pane

0xc6ce,	// (0x00068ee5) media_player_g1

0xc6d6,	// (0x00068eed) media_player_t1

0xc6e4,	// (0x00068efb) media_player_t2

0xc6f2,	// (0x00068f09) media_player_t3

0xc700,	// (0x00068f17) media_player_t4

0xc70e,	// (0x00068f25) media_player_t5

0xc71c,	// (0x00068f33) media_player_t6

0xc72a,	// (0x00068f41) media_player_t7

0x0006,

0x028b,	// (0x0005caa2) media_player_t

0xc738,	// (0x00068f4f) wait_bar_pane_cp02

0xf509,	// (0x0006bd20) main_usb_pane_t

0x4038,	// (0x0006084f) cell_mp_pane

0xa78a,	// (0x00066fa1) cell_mp_pane_g1

0xa156,	// (0x0006696d) grid_highlight_pane_cp06

0xa965,	// (0x0006717c) grid_skin_colour_pane

0xa96d,	// (0x00067184) list_highlight_pane_cp03

0x1e26,	// (0x0005e63d) skin_g1

0xa975,	// (0x0006718c) skin_t1

0xa984,	// (0x0006719b) skin_t2

0x0001,

0xf264,	// (0x0006ba7b) skin_t

0x1e30,	// (0x0005e647) cell_skin_colour_pane_ParamLimits

0x1e30,	// (0x0005e647) cell_skin_colour_pane

0xa992,	// (0x000671a9) cell_skin_colour_pane_g1

0x1eb4,	// (0x0005e6cb) call_video_g1_ParamLimits

0x1eb4,	// (0x0005e6cb) call_video_g1

0x1ec4,	// (0x0005e6db) call_video_g2_ParamLimits

0x1ec4,	// (0x0005e6db) call_video_g2

0x0001,

0xf269,	// (0x0006ba80) call_video_g_ParamLimits

0xf269,	// (0x0006ba80) call_video_g

0x1f1e,	// (0x0005e735) call_video_uplink_pane_cp1_ParamLimits

0x1f1e,	// (0x0005e735) call_video_uplink_pane_cp1

0xa9a4,	// (0x000671bb) call_video_uplink_pane_cp2

0x1fea,	// (0x0005e801) video_down_crop_pane_ParamLimits

0x1fea,	// (0x0005e801) video_down_crop_pane

0x20dc,	// (0x0005e8f3) video_down_pane_ParamLimits

0x20dc,	// (0x0005e8f3) video_down_pane

0xa9ac,	// (0x000671c3) video_down_subqcif_pane_ParamLimits

0xa9ac,	// (0x000671c3) video_down_subqcif_pane

0xa9c4,	// (0x000671db) video_down_subqcif_pane_cp_ParamLimits

0xa9c4,	// (0x000671db) video_down_subqcif_pane_cp

0xa9ea,	// (0x00067201) im_reading_pane_ParamLimits

0xa9ea,	// (0x00067201) im_reading_pane

0x21fe,	// (0x0005ea15) im_writing_pane_ParamLimits

0x21fe,	// (0x0005ea15) im_writing_pane

0x221c,	// (0x0005ea33) im_reading_pane_t1

0xaa04,	// (0x0006721b) list_im_pane

0xaa15,	// (0x0006722c) scroll_pane_cp07

0x2277,	// (0x0005ea8e) im_writing_pane_t1_ParamLimits

0x2277,	// (0x0005ea8e) im_writing_pane_t1

0xaa2e,	// (0x00067245) im_writing_pane_t2_ParamLimits

0xaa2e,	// (0x00067245) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006ba8a) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006ba8a) im_writing_pane_t

0xa156,	// (0x0006696d) input_focus_pane_cp04

0xa156,	// (0x0006696d) input_focus_pane_cp05

0x2289,	// (0x0005eaa0) list_im_single_pane_ParamLimits

0x2289,	// (0x0005eaa0) list_im_single_pane

0x22b1,	// (0x0005eac8) list_single_im_pane_t1

0x3ffc,	// (0x00060813) blid_accuracy_pane

0x4004,	// (0x0006081b) blid_compass_pane

0x400e,	// (0x00060825) main_location_t1

0x401c,	// (0x00060833) main_location_t2

0x402a,	// (0x00060841) main_location_t3

0x0002,

0xf516,	// (0x0006bd2d) main_location_t

0xa156,	// (0x0006696d) aid_levels_location

0xa78a,	// (0x00066fa1) blid_accuracy_pane_g1

0xa78a,	// (0x00066fa1) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006baec) blid_accuracy_pane_g

0xaa76,	// (0x0006728d) wml_content_pane

0xaab4,	// (0x000672cb) wml_button_pane_ParamLimits

0xaab4,	// (0x000672cb) wml_button_pane

0x22c0,	// (0x0005ead7) wml_list_single_large_pane_ParamLimits

0x22c0,	// (0x0005ead7) wml_list_single_large_pane

0x22f1,	// (0x0005eb08) wml_list_single_medium_pane_ParamLimits

0x22f1,	// (0x0005eb08) wml_list_single_medium_pane

0x2329,	// (0x0005eb40) wml_list_single_small_pane_ParamLimits

0x2329,	// (0x0005eb40) wml_list_single_small_pane

0xaac8,	// (0x000672df) wml_selection_box_pane_ParamLimits

0xaac8,	// (0x000672df) wml_selection_box_pane

0xaadb,	// (0x000672f2) wml_list_single_pane_t1

0xaaea,	// (0x00067301) wml_list_single_medium_pane_t1

0xaaf9,	// (0x00067310) wml_list_single_large_pane_t1

0xab08,	// (0x0006731f) input_focus_pane_cp02_ParamLimits

0xab08,	// (0x0006731f) input_focus_pane_cp02

0xab1b,	// (0x00067332) wml_selection_box_pane_g1

0xab24,	// (0x0006733b) wml_selection_box_pane_t1_ParamLimits

0xab24,	// (0x0006733b) wml_selection_box_pane_t1

0xa5a5,	// (0x00066dbc) bg_wml_button_pane_ParamLimits

0xa5a5,	// (0x00066dbc) bg_wml_button_pane

0xab3c,	// (0x00067353) wml_button_pane_g1

0xab44,	// (0x0006735b) wml_button_pane_t1

0xab3c,	// (0x00067353) wml_button_bg_pane_g1

0xab54,	// (0x0006736b) wml_button_bg_pane_g2

0xab5c,	// (0x00067373) wml_button_bg_pane_g3

0xab64,	// (0x0006737b) wml_button_bg_pane_g4

0xab6c,	// (0x00067383) wml_button_bg_pane_g5

0xab74,	// (0x0006738b) wml_button_bg_pane_g6

0xab7c,	// (0x00067393) wml_button_bg_pane_g7

0xab84,	// (0x0006739b) wml_button_bg_pane_g8

0xab8c,	// (0x000673a3) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006ba8f) wml_button_bg_pane_g

0x236a,	// (0x0005eb81) bg_list_pane_cp02

0xab94,	// (0x000673ab) mce_header_pane_ParamLimits

0xab94,	// (0x000673ab) mce_header_pane

0xabaa,	// (0x000673c1) mce_icon_pane

0xabaa,	// (0x000673c1) mce_image_pane

0xabb3,	// (0x000673ca) mce_text_pane_ParamLimits

0xabb3,	// (0x000673ca) mce_text_pane

0x2374,	// (0x0005eb8b) scroll_pane_cp03

0xaaac,	// (0x000672c3) scroll_pane_cp04

0xabc6,	// (0x000673dd) scroll_pane_cp05_ParamLimits

0xabc6,	// (0x000673dd) scroll_pane_cp05

0x237e,	// (0x0005eb95) mce_header_field_pane_ParamLimits

0x237e,	// (0x0005eb95) mce_header_field_pane

0x239e,	// (0x0005ebb5) mce_header_field_pane_2_ParamLimits

0x239e,	// (0x0005ebb5) mce_header_field_pane_2

0x23b4,	// (0x0005ebcb) mce_header_field_pane_3

0x23bc,	// (0x0005ebd3) list_single_mce_message_pane_ParamLimits

0x23bc,	// (0x0005ebd3) list_single_mce_message_pane

0x23ee,	// (0x0005ec05) list_single_mce_smart_pane_ParamLimits

0x23ee,	// (0x0005ec05) list_single_mce_smart_pane

0xabd2,	// (0x000673e9) input_focus_pane_cp03

0xabdb,	// (0x000673f2) list_header_data_pane

0x242b,	// (0x0005ec42) mce_header_field_pane_t1

0x243b,	// (0x0005ec52) list_single_mce_header_pane_ParamLimits

0x243b,	// (0x0005ec52) list_single_mce_header_pane

0xabe3,	// (0x000673fa) list_single_mce_header_pane_t1

0xabf2,	// (0x00067409) list_single_mce_message_pane_g1

0xabfa,	// (0x00067411) list_single_mce_message_pane_t1

0x2492,	// (0x0005eca9) bg_cale_heading_pane_cp01_ParamLimits

0x2492,	// (0x0005eca9) bg_cale_heading_pane_cp01

0xac08,	// (0x0006741f) bg_cale_pane_cp02_ParamLimits

0xac08,	// (0x0006741f) bg_cale_pane_cp02

0x24d5,	// (0x0005ecec) cale_month_corner_pane

0x24ef,	// (0x0005ed06) cale_month_day_heading_pane_ParamLimits

0x24ef,	// (0x0005ed06) cale_month_day_heading_pane

0x254a,	// (0x0005ed61) cale_month_pane_g1_ParamLimits

0x254a,	// (0x0005ed61) cale_month_pane_g1

0x2582,	// (0x0005ed99) cale_month_pane_g2_ParamLimits

0x2582,	// (0x0005ed99) cale_month_pane_g2

0x25ad,	// (0x0005edc4) cale_month_pane_g3_ParamLimits

0x25ad,	// (0x0005edc4) cale_month_pane_g3

0x25fd,	// (0x0005ee14) cale_month_pane_g4_ParamLimits

0x25fd,	// (0x0005ee14) cale_month_pane_g4

0x264d,	// (0x0005ee64) cale_month_pane_g5_ParamLimits

0x264d,	// (0x0005ee64) cale_month_pane_g5

0x269d,	// (0x0005eeb4) cale_month_pane_g6_ParamLimits

0x269d,	// (0x0005eeb4) cale_month_pane_g6

0x26ed,	// (0x0005ef04) cale_month_pane_g7_ParamLimits

0x26ed,	// (0x0005ef04) cale_month_pane_g7

0x2755,	// (0x0005ef6c) cale_month_pane_g8_ParamLimits

0x2755,	// (0x0005ef6c) cale_month_pane_g8

0x27bd,	// (0x0005efd4) cale_month_pane_g9_ParamLimits

0x27bd,	// (0x0005efd4) cale_month_pane_g9

0x281b,	// (0x0005f032) cale_month_pane_g10_ParamLimits

0x281b,	// (0x0005f032) cale_month_pane_g10

0x2879,	// (0x0005f090) cale_month_pane_g11_ParamLimits

0x2879,	// (0x0005f090) cale_month_pane_g11

0x28cd,	// (0x0005f0e4) cale_month_pane_g12_ParamLimits

0x28cd,	// (0x0005f0e4) cale_month_pane_g12

0x2923,	// (0x0005f13a) cale_month_pane_g13_ParamLimits

0x2923,	// (0x0005f13a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006baa2) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006baa2) cale_month_pane_g

0x2979,	// (0x0005f190) cale_month_week_pane

0x298e,	// (0x0005f1a5) grid_cale_month_pane_ParamLimits

0x298e,	// (0x0005f1a5) grid_cale_month_pane

0x29e0,	// (0x0005f1f7) cale_month_day_heading_pane_t1

0x2a66,	// (0x0005f27d) cale_month_day_heading_pane_t2

0x2af7,	// (0x0005f30e) cale_month_day_heading_pane_t3

0x2b88,	// (0x0005f39f) cale_month_day_heading_pane_t4

0x2c19,	// (0x0005f430) cale_month_day_heading_pane_t5

0x2caa,	// (0x0005f4c1) cale_month_day_heading_pane_t6

0x2d47,	// (0x0005f55e) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006babd) cale_month_day_heading_pane_t

0xa8b1,	// (0x000670c8) bg_cale_side_pane_cp01

0x2df0,	// (0x0005f607) cale_month_week_pane_t1

0x2e09,	// (0x0005f620) cale_month_week_pane_t2

0x2e22,	// (0x0005f639) cale_month_week_pane_t3

0x2e3b,	// (0x0005f652) cale_month_week_pane_t4

0x2e58,	// (0x0005f66f) cale_month_week_pane_t5

0x2e79,	// (0x0005f690) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006bacc) cale_month_week_pane_t

0x2e9a,	// (0x0005f6b1) cell_cale_month_pane_ParamLimits

0x2e9a,	// (0x0005f6b1) cell_cale_month_pane

0x2fc0,	// (0x0005f7d7) cell_cale_month_pane_g1

0x2fcc,	// (0x0005f7e3) cell_cale_month_pane_t1_ParamLimits

0x2fcc,	// (0x0005f7e3) cell_cale_month_pane_t1

0xa8bf,	// (0x000670d6) grid_highlight_pane_cp08

0xa78a,	// (0x00066fa1) main_smil_g1

0x2fec,	// (0x0005f803) smil_status_pane

0xac47,	// (0x0006745e) smil_text_pane

0xc5de,	// (0x00068df5) bg_popup_call3_rect_pane_g8

0xc5e6,	// (0x00068dfd) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f1,	// (0x0006bd08) bg_popup_call3_rect_pane_g

0xc82d,	// (0x00069044) smil_status_volume_pane_g1

0xac51,	// (0x00067468) smil_status_pane_t1

0x4432,	// (0x00060c49) volume_smil_pane

0xac68,	// (0x0006747f) list_smil_text_pane

0x2fff,	// (0x0005f816) scroll_pane_cp011

0x300a,	// (0x0005f821) smil_text_list_pane_t1_ParamLimits

0x300a,	// (0x0005f821) smil_text_list_pane_t1

0x309e,	// (0x0005f8b5) aid_volume_smil_ParamLimits

0x309e,	// (0x0005f8b5) aid_volume_smil

0xa78a,	// (0x00066fa1) smil_volume_pane_g1

0xa78a,	// (0x00066fa1) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006baec) smil_volume_pane_g

0x15a9,	// (0x0005ddc0) listscroll_cale_day_pane

0xac72,	// (0x00067489) bg_cale_pane

0xac8a,	// (0x000674a1) list_cale_pane

0xacad,	// (0x000674c4) scroll_pane_cp09

0xacbe,	// (0x000674d5) cale_bg_pane_g1

0xacc6,	// (0x000674dd) cale_bg_pane_g2

0xacce,	// (0x000674e5) cale_bg_pane_g3

0xacd6,	// (0x000674ed) cale_bg_pane_g4

0xacde,	// (0x000674f5) cale_bg_pane_g5

0xace6,	// (0x000674fd) cale_bg_pane_g6

0xacee,	// (0x00067505) cale_bg_pane_g7

0xacf6,	// (0x0006750d) cale_bg_pane_g8

0xacfe,	// (0x00067515) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0006baf1) cale_bg_pane_g

0x30c0,	// (0x0005f8d7) list_cale_time_pane_ParamLimits

0x30c0,	// (0x0005f8d7) list_cale_time_pane

0xad0e,	// (0x00067525) list_cale_time_pane_g1_ParamLimits

0xad0e,	// (0x00067525) list_cale_time_pane_g1

0xad1a,	// (0x00067531) list_cale_time_pane_g2_ParamLimits

0xad1a,	// (0x00067531) list_cale_time_pane_g2

0x30ec,	// (0x0005f903) list_cale_time_pane_g3_ParamLimits

0x30ec,	// (0x0005f903) list_cale_time_pane_g3

0x30fa,	// (0x0005f911) list_cale_time_pane_g4_ParamLimits

0x30fa,	// (0x0005f911) list_cale_time_pane_g4

0x3108,	// (0x0005f91f) list_cale_time_pane_g5_ParamLimits

0x3108,	// (0x0005f91f) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0006bb04) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0006bb04) list_cale_time_pane_g

0xad34,	// (0x0006754b) list_cale_time_pane_t1_ParamLimits

0xad34,	// (0x0006754b) list_cale_time_pane_t1

0xad5c,	// (0x00067573) list_cale_time_pane_t2_ParamLimits

0xad5c,	// (0x00067573) list_cale_time_pane_t2

0x344d,	// (0x0005fc64) aid_blid_cardinal_pane

0x348f,	// (0x0005fca6) compass_pane_t4

0xad84,	// (0x0006759b) list_cale_time_pane_t4_ParamLimits

0xad84,	// (0x0006759b) list_cale_time_pane_t4

0x349d,	// (0x0005fcb4) compass_pane_t5

0x34ad,	// (0x0005fcc4) compass_pane_t6

0x34bb,	// (0x0005fcd2) compass_pane_t7

0xb243,	// (0x00067a5a) navi_pane_cc_t1

0xb441,	// (0x00067c58) aid_phob_thumbnail_center_pane

0x3af5,	// (0x0006030c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0006bb11) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0006bb11) list_cale_time_pane_t

0x9835,	// (0x0006604c) bg_popup_window_pane_cp02_ParamLimits

0x9835,	// (0x0006604c) bg_popup_window_pane_cp02

0xadac,	// (0x000675c3) heading_pane_cp01_ParamLimits

0xadac,	// (0x000675c3) heading_pane_cp01

0xadb8,	// (0x000675cf) loc_req_pane_ParamLimits

0xadb8,	// (0x000675cf) loc_req_pane

0xadc8,	// (0x000675df) loc_type_pane_ParamLimits

0xadc8,	// (0x000675df) loc_type_pane

0xadda,	// (0x000675f1) loc_type_pane_t1_ParamLimits

0xadda,	// (0x000675f1) loc_type_pane_t1

0xadec,	// (0x00067603) loc_type_pane_t2_ParamLimits

0xadec,	// (0x00067603) loc_type_pane_t2

0xadfe,	// (0x00067615) loc_type_pane_t3_ParamLimits

0xadfe,	// (0x00067615) loc_type_pane_t3

0x0002,

0xf301,	// (0x0006bb18) loc_type_pane_t_ParamLimits

0xf301,	// (0x0006bb18) loc_type_pane_t

0xae10,	// (0x00067627) list_loc_req_pane

0xae1a,	// (0x00067631) scroll_pane_cp012

0x3116,	// (0x0005f92d) list_single_loc_request_popup_menu_pane_ParamLimits

0x3116,	// (0x0005f92d) list_single_loc_request_popup_menu_pane

0xae25,	// (0x0006763c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae25,	// (0x0006763c) list_single_loc_request_popup_menu_pane_g1

0xae31,	// (0x00067648) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae31,	// (0x00067648) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0006bb1f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0006bb1f) list_single_loc_request_popup_menu_pane_g

0xae3d,	// (0x00067654) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae3d,	// (0x00067654) list_single_loc_request_popup_menu_pane_t1

0x312f,	// (0x0005f946) bg_popup_window_pane_cp03_ParamLimits

0x312f,	// (0x0005f946) bg_popup_window_pane_cp03

0x313d,	// (0x0005f954) heading_loc_req_pane_ParamLimits

0x313d,	// (0x0005f954) heading_loc_req_pane

0x3149,	// (0x0005f960) popup_dyc_status_message_window_g1_ParamLimits

0x3149,	// (0x0005f960) popup_dyc_status_message_window_g1

0x3155,	// (0x0005f96c) popup_dyc_status_message_window_t1_ParamLimits

0x3155,	// (0x0005f96c) popup_dyc_status_message_window_t1

0x3167,	// (0x0005f97e) popup_dyc_status_message_window_t2_ParamLimits

0x3167,	// (0x0005f97e) popup_dyc_status_message_window_t2

0x3179,	// (0x0005f990) popup_dyc_status_message_window_t3_ParamLimits

0x3179,	// (0x0005f990) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0006bb24) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0006bb24) popup_dyc_status_message_window_t

0xa156,	// (0x0006696d) bg_heading_pane_cp01

0xae53,	// (0x0006766a) heading_loc_req_pane_g1

0xae5b,	// (0x00067672) heading_loc_req_pane_g2

0xae63,	// (0x0006767a) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006bb2b) heading_loc_req_pane_g

0xae6b,	// (0x00067682) heading_loc_req_pane_t1

0xae7a,	// (0x00067691) bg_popup_sub_pane_cp01_ParamLimits

0xae7a,	// (0x00067691) bg_popup_sub_pane_cp01

0xae88,	// (0x0006769f) popup_cale_events_window_g1_ParamLimits

0xae88,	// (0x0006769f) popup_cale_events_window_g1

0xaea8,	// (0x000676bf) popup_cale_events_window_g2_ParamLimits

0xaea8,	// (0x000676bf) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006bb5f) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006bb5f) popup_cale_events_window_g

0xaec8,	// (0x000676df) popup_cale_events_window_t1_ParamLimits

0xaec8,	// (0x000676df) popup_cale_events_window_t1

0xaeda,	// (0x000676f1) popup_cale_events_window_t2_ParamLimits

0xaeda,	// (0x000676f1) popup_cale_events_window_t2

0xaf18,	// (0x0006772f) popup_cale_events_window_t3_ParamLimits

0xaf18,	// (0x0006772f) popup_cale_events_window_t3

0xaf52,	// (0x00067769) popup_cale_events_window_t4_ParamLimits

0xaf52,	// (0x00067769) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0006bb64) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0006bb64) popup_cale_events_window_t

0x322d,	// (0x0005fa44) call_type_pane

0xb085,	// (0x0006789c) popup_call_status_window_g1

0x3239,	// (0x0005fa50) popup_call_status_window_g2

0x3245,	// (0x0005fa5c) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006bb6d) popup_call_status_window_g

0xaf88,	// (0x0006779f) call_type_pane_g1

0xaf91,	// (0x000677a8) call_type_pane_g2

0x0001,

0xf35d,	// (0x0006bb74) call_type_pane_g

0xa156,	// (0x0006696d) bg_popup_sub_pane_cp02

0xaf9a,	// (0x000677b1) listscroll_popup_wml_pane

0xafa2,	// (0x000677b9) list_wml_pane

0xafac,	// (0x000677c3) scroll_pane_cp013

0xafb7,	// (0x000677ce) list_single_graphic_popup_wml_pane_ParamLimits

0xafb7,	// (0x000677ce) list_single_graphic_popup_wml_pane

0xa78a,	// (0x00066fa1) list_single_graphic_popup_wml_pane_g1

0xafcb,	// (0x000677e2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006bb79) list_single_graphic_popup_wml_pane_g

0xafd3,	// (0x000677ea) list_single_graphic_popup_wml_pane_t1

0xafe9,	// (0x00067800) aid_call_pane

0xa59d,	// (0x00066db4) popup_clock_analogue_window_g1

0xa59d,	// (0x00066db4) popup_clock_analogue_window_g2

0x3251,	// (0x0005fa68) popup_clock_analogue_window_g3

0x3251,	// (0x0005fa68) popup_clock_analogue_window_g4

0xa78a,	// (0x00066fa1) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006bb7e) popup_clock_analogue_window_g

0x3259,	// (0x0005fa70) popup_clock_analogue_window_t1

0x3267,	// (0x0005fa7e) clock_digital_number_pane_ParamLimits

0x3267,	// (0x0005fa7e) clock_digital_number_pane

0x3273,	// (0x0005fa8a) clock_digital_number_pane_cp02_ParamLimits

0x3273,	// (0x0005fa8a) clock_digital_number_pane_cp02

0x327f,	// (0x0005fa96) clock_digital_number_pane_cp03_ParamLimits

0x327f,	// (0x0005fa96) clock_digital_number_pane_cp03

0x328b,	// (0x0005faa2) clock_digital_number_pane_cp04_ParamLimits

0x328b,	// (0x0005faa2) clock_digital_number_pane_cp04

0x329b,	// (0x0005fab2) clock_digital_separator_pane_ParamLimits

0x329b,	// (0x0005fab2) clock_digital_separator_pane

0x32a7,	// (0x0005fabe) popup_clock_digital_window_t1

0xa78a,	// (0x00066fa1) clock_digital_number_pane_g1

0xa78a,	// (0x00066fa1) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006baec) clock_digital_number_pane_g

0xa78a,	// (0x00066fa1) clock_digital_separator_pane_g1

0xa78a,	// (0x00066fa1) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006baec) clock_digital_separator_pane_g

0xa156,	// (0x0006696d) bg_popup_window_pane_cp04

0xaff1,	// (0x00067808) heading_pane_cp03

0xaff9,	// (0x00067810) listscroll_popup_gms_pane

0xb001,	// (0x00067818) grid_large_graphic_popup_pane

0xb00b,	// (0x00067822) listscroll_popup_gms_pane_g1

0xb013,	// (0x0006782a) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0006bb89) listscroll_popup_gms_pane_g

0xaaac,	// (0x000672c3) scroll_pane_cp014

0xb01b,	// (0x00067832) cell_large_graphic_popup_pane_ParamLimits

0xb01b,	// (0x00067832) cell_large_graphic_popup_pane

0xb033,	// (0x0006784a) cell_large_graphic_popup_pane_g1_ParamLimits

0xb033,	// (0x0006784a) cell_large_graphic_popup_pane_g1

0xb03f,	// (0x00067856) cell_large_graphic_popup_pane_g2_ParamLimits

0xb03f,	// (0x00067856) cell_large_graphic_popup_pane_g2

0xb04b,	// (0x00067862) cell_large_graphic_popup_pane_g3_ParamLimits

0xb04b,	// (0x00067862) cell_large_graphic_popup_pane_g3

0xb058,	// (0x0006786f) cell_large_graphic_popup_pane_g4_ParamLimits

0xb058,	// (0x0006786f) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006bb8e) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006bb8e) cell_large_graphic_popup_pane_g

0xb068,	// (0x0006787f) grid_highlight_pane_cp010

0xa78a,	// (0x00066fa1) bg_popup_call_pane_g1

0xb072,	// (0x00067889) list_single_graphic_popup_conf_pane_ParamLimits

0xb072,	// (0x00067889) list_single_graphic_popup_conf_pane

0xb093,	// (0x000678aa) list_highlight_pane_cp01

0xb09c,	// (0x000678b3) list_single_graphic_popup_conf_pane_g1

0xb0a4,	// (0x000678bb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0006bb97) list_single_graphic_popup_conf_pane_g

0xb0ac,	// (0x000678c3) list_single_graphic_popup_conf_pane_t1

0xb0ba,	// (0x000678d1) linegrid_cams_pane_g1

0x32c4,	// (0x0005fadb) linegrid_cams_pane_g2

0xa842,	// (0x00067059) linegrid_cams_pane_g3

0xb0c3,	// (0x000678da) linegrid_cams_pane_g4

0x32cd,	// (0x0005fae4) linegrid_cams_pane_g5

0x32d6,	// (0x0005faed) linegrid_cams_pane_g6

0xa8f2,	// (0x00067109) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006bb9c) linegrid_cams_pane_g

0xb0cc,	// (0x000678e3) popup_clock_analogue_window

0xb0cc,	// (0x000678e3) popup_clock_digital_window

0xa156,	// (0x0006696d) popup_phob_thumbnail_window

0xa78a,	// (0x00066fa1) call_video_uplink_pane_g1

0xb0d5,	// (0x000678ec) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006bbab) call_video_uplink_pane_g

0xa8bf,	// (0x000670d6) video_uplink_pane

0xb0dd,	// (0x000678f4) mce_image_pane_g1

0x32df,	// (0x0005faf6) mce_image_pane_g2

0x32e7,	// (0x0005fafe) mce_image_pane_g3

0x32ef,	// (0x0005fb06) mce_image_pane_g4

0x32f7,	// (0x0005fb0e) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006bbb0) mce_image_pane_g

0xb0e7,	// (0x000678fe) control_top_pane_stacon_cp01_ParamLimits

0xb0e7,	// (0x000678fe) control_top_pane_stacon_cp01

0xb0fb,	// (0x00067912) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0fb,	// (0x00067912) uni_indicator_pane_stacon_cp01

0xb10c,	// (0x00067923) bg_popup_sub_pane_cp03

0x32ff,	// (0x0005fb16) chi_dic_find_pane

0x3307,	// (0x0005fb1e) listscroll_chi_dic_pane

0x3310,	// (0x0005fb27) main_pane_chidic_g1

0xb116,	// (0x0006792d) chi_dic_find_pane_t1

0xb124,	// (0x0006793b) find_chidic_pane

0xb12d,	// (0x00067944) chi_dic_list_pane_ParamLimits

0xb12d,	// (0x00067944) chi_dic_list_pane

0xb13e,	// (0x00067955) scroll_pane_cp020

0xb146,	// (0x0006795d) find_chidic_pane_t1

0xa156,	// (0x0006696d) input_focus_pane_cp06

0x3323,	// (0x0005fb3a) list_chi_dic_pane_ParamLimits

0x3323,	// (0x0005fb3a) list_chi_dic_pane

0x3340,	// (0x0005fb57) list_chi_dic_pane_t1_ParamLimits

0x3340,	// (0x0005fb57) list_chi_dic_pane_t1

0xa156,	// (0x0006696d) list_highlight_pane_cp020

0xb155,	// (0x0006796c) bg_cale_heading_pane_g1

0x3353,	// (0x0005fb6a) bg_cale_heading_pane_g2

0x335b,	// (0x0005fb72) bg_cale_heading_pane_g3

0x3363,	// (0x0005fb7a) bg_cale_heading_pane_g4

0x336d,	// (0x0005fb84) bg_cale_heading_pane_g5

0x3377,	// (0x0005fb8e) bg_cale_heading_pane_g6

0x337f,	// (0x0005fb96) bg_cale_heading_pane_g7

0x3387,	// (0x0005fb9e) bg_cale_heading_pane_g8

0x3391,	// (0x0005fba8) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006bbbb) bg_cale_heading_pane_g

0xb155,	// (0x0006796c) bg_cale_side_pane_g1

0x339b,	// (0x0005fbb2) bg_cale_side_pane_g2

0x33a5,	// (0x0005fbbc) bg_cale_side_pane_g3

0x33af,	// (0x0005fbc6) bg_cale_side_pane_g4

0x33b9,	// (0x0005fbd0) bg_cale_side_pane_g5

0x33c3,	// (0x0005fbda) bg_cale_side_pane_g6

0x33cd,	// (0x0005fbe4) bg_cale_side_pane_g7

0x33d7,	// (0x0005fbee) bg_cale_side_pane_g8

0x33df,	// (0x0005fbf6) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0006bbce) bg_cale_side_pane_g

0x33e7,	// (0x0005fbfe) popup_call_status_window_ParamLimits

0x33e7,	// (0x0005fbfe) popup_call_status_window

0xb15d,	// (0x00067974) stacon_top_pane

0xb165,	// (0x0006797c) status_pane_ParamLimits

0xb165,	// (0x0006797c) status_pane

0xb17a,	// (0x00067991) status_small_pane

0xb182,	// (0x00067999) control_pane

0xa156,	// (0x0006696d) stacon_bottom_pane

0xb18a,	// (0x000679a1) list_single_mce_smart_pane_t1_ParamLimits

0xb18a,	// (0x000679a1) list_single_mce_smart_pane_t1

0xb19d,	// (0x000679b4) list_single_mce_smart_pane_t2_ParamLimits

0xb19d,	// (0x000679b4) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0006bbe1) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0006bbe1) list_single_mce_smart_pane_t

0x33f3,	// (0x0005fc0a) compass_pane

0x33ff,	// (0x0005fc16) main_location2_pane_t1

0x3413,	// (0x0005fc2a) main_location2_pane_t2

0x3427,	// (0x0005fc3e) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0006bbe6) main_location2_pane_t

0xb1bc,	// (0x000679d3) compass_pane_g1_ParamLimits

0xb1bc,	// (0x000679d3) compass_pane_g1

0x3471,	// (0x0005fc88) compass_pane_t1

0x3480,	// (0x0005fc97) compass_pane_t2

0x0005,

0xf3d8,	// (0x0006bbef) compass_pane_t

0x34cb,	// (0x0005fce2) text_secondary_cp61

0xb23a,	// (0x00067a51) navi_pane_cams_g5

0xb2b6,	// (0x00067acd) navi_pane_im_t1

0xb2c4,	// (0x00067adb) navi_pane_mp_g1_ParamLimits

0xb2c4,	// (0x00067adb) navi_pane_mp_g1

0xb2d8,	// (0x00067aef) navi_pane_mp_g2_ParamLimits

0xb2d8,	// (0x00067aef) navi_pane_mp_g2

0xb305,	// (0x00067b1c) navi_pane_mp_g3_ParamLimits

0xb305,	// (0x00067b1c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0006bc03) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0006bc03) navi_pane_mp_g

0xb311,	// (0x00067b28) navi_pane_mp_t1

0xb31f,	// (0x00067b36) navi_pane_mp_t2

0x0002,

0x00b3,	// (0x0005c8ca) navi_pane_mp_t

0xb38a,	// (0x00067ba1) navi_pane_vt_g1

0xb311,	// (0x00067b28) navi_pane_vt_t1

0xb392,	// (0x00067ba9) navi_slider_pane

0xa903,	// (0x0006711a) zooming_pane

0xb3a2,	// (0x00067bb9) navi_slider_pane_g1

0x3506,	// (0x0005fd1d) navi_slider_pane_g2

0x0006,

0xf3f3,	// (0x0006bc0a) navi_slider_pane_g

0xb3c6,	// (0x00067bdd) aid_levels_zoom

0xb3ce,	// (0x00067be5) zooming_pane_g1

0xb3d6,	// (0x00067bed) zooming_pane_g2

0xb3d6,	// (0x00067bed) zooming_pane_g3

0x0002,

0x00c9,	// (0x0005c8e0) zooming_pane_g

0xb3de,	// (0x00067bf5) level_10_zoom

0xb3e7,	// (0x00067bfe) level_11_zoom

0xb3f0,	// (0x00067c07) level_1_zoom

0xb3f9,	// (0x00067c10) level_2_zoom

0xb402,	// (0x00067c19) level_3_zoom

0xb40b,	// (0x00067c22) level_4_zoom

0xb414,	// (0x00067c2b) level_5_zoom

0xb41d,	// (0x00067c34) level_6_zoom

0xb426,	// (0x00067c3d) level_7_zoom

0xb42f,	// (0x00067c46) level_8_zoom

0xb438,	// (0x00067c4f) level_9_zoom

0xb449,	// (0x00067c60) popup_phob_thumbnail_window_g1

0xb451,	// (0x00067c68) popup_phob_thumbnail_window_g2

0x0001,

0x00d0,	// (0x0005c8e7) popup_phob_thumbnail_window_g

0xc740,	// (0x00068f57) level_1_location

0xc748,	// (0x00068f5f) level_2_location

0xc750,	// (0x00068f67) level_3_location

0xc758,	// (0x00068f6f) level_4_location

0xa903,	// (0x0006711a) level_5_location

0x3518,	// (0x0005fd2f) mce_icon_pane_g1

0x3520,	// (0x0005fd37) mce_icon_pane_g2

0x0001,

0xf402,	// (0x0006bc19) mce_icon_pane_g

0x3528,	// (0x0005fd3f) main_mup_pane_g1_ParamLimits

0x3528,	// (0x0005fd3f) main_mup_pane_g1

0x3540,	// (0x0005fd57) main_mup_pane_g2_ParamLimits

0x3540,	// (0x0005fd57) main_mup_pane_g2

0x355c,	// (0x0005fd73) main_mup_pane_g3_ParamLimits

0x355c,	// (0x0005fd73) main_mup_pane_g3

0x3578,	// (0x0005fd8f) main_mup_pane_g4_ParamLimits

0x3578,	// (0x0005fd8f) main_mup_pane_g4

0x3594,	// (0x0005fdab) main_mup_pane_g5_ParamLimits

0x3594,	// (0x0005fdab) main_mup_pane_g5

0x35b5,	// (0x0005fdcc) main_mup_pane_g6_ParamLimits

0x35b5,	// (0x0005fdcc) main_mup_pane_g6

0x35d1,	// (0x0005fde8) main_mup_pane_g7_ParamLimits

0x35d1,	// (0x0005fde8) main_mup_pane_g7

0x35ed,	// (0x0005fe04) main_mup_pane_g8_ParamLimits

0x35ed,	// (0x0005fe04) main_mup_pane_g8

0x3609,	// (0x0005fe20) main_mup_pane_g9_ParamLimits

0x3609,	// (0x0005fe20) main_mup_pane_g9

0x3628,	// (0x0005fe3f) main_mup_pane_g10_ParamLimits

0x3628,	// (0x0005fe3f) main_mup_pane_g10

0x3647,	// (0x0005fe5e) main_mup_pane_g11_ParamLimits

0x3647,	// (0x0005fe5e) main_mup_pane_g11

0x365f,	// (0x0005fe76) main_mup_pane_g12_ParamLimits

0x365f,	// (0x0005fe76) main_mup_pane_g12

0x366d,	// (0x0005fe84) main_mup_pane_g13_ParamLimits

0x366d,	// (0x0005fe84) main_mup_pane_g13

0x000c,

0xf407,	// (0x0006bc1e) main_mup_pane_g_ParamLimits

0xf407,	// (0x0006bc1e) main_mup_pane_g

0x3683,	// (0x0005fe9a) main_mup_pane_t1_ParamLimits

0x3683,	// (0x0005fe9a) main_mup_pane_t1

0x36a0,	// (0x0005feb7) main_mup_pane_t2_ParamLimits

0x36a0,	// (0x0005feb7) main_mup_pane_t2

0x36ba,	// (0x0005fed1) main_mup_pane_t3_ParamLimits

0x36ba,	// (0x0005fed1) main_mup_pane_t3

0x36d4,	// (0x0005feeb) main_mup_pane_t4_ParamLimits

0x36d4,	// (0x0005feeb) main_mup_pane_t4

0x36e6,	// (0x0005fefd) main_mup_pane_t5_ParamLimits

0x36e6,	// (0x0005fefd) main_mup_pane_t5

0x36f8,	// (0x0005ff0f) main_mup_pane_t6_ParamLimits

0x36f8,	// (0x0005ff0f) main_mup_pane_t6

0x0005,

0xf422,	// (0x0006bc39) main_mup_pane_t_ParamLimits

0xf422,	// (0x0006bc39) main_mup_pane_t

0x370e,	// (0x0005ff25) mup_progress_pane_ParamLimits

0x370e,	// (0x0005ff25) mup_progress_pane

0x371a,	// (0x0005ff31) mup_visualizer_pane_ParamLimits

0x371a,	// (0x0005ff31) mup_visualizer_pane

0x3758,	// (0x0005ff6f) mup_volume_pane_ParamLimits

0x3758,	// (0x0005ff6f) mup_volume_pane

0xb085,	// (0x0006789c) mup_visualizer_pane_g1_ParamLimits

0xb085,	// (0x0006789c) mup_visualizer_pane_g1

0xb085,	// (0x0006789c) mup_visualizer_pane_g2_ParamLimits

0xb085,	// (0x0006789c) mup_visualizer_pane_g2

0xb1bc,	// (0x000679d3) mup_visualizer_pane_g3_ParamLimits

0xb1bc,	// (0x000679d3) mup_visualizer_pane_g3

0x0002,

0xf42f,	// (0x0006bc46) mup_visualizer_pane_g_ParamLimits

0xf42f,	// (0x0006bc46) mup_visualizer_pane_g

0xa78a,	// (0x00066fa1) mup_volume_pane_g1

0xb461,	// (0x00067c78) mup_volume_pane_g2

0x0001,

0xf436,	// (0x0006bc4d) mup_volume_pane_g

0xa78a,	// (0x00066fa1) mup_progress_pane_g1

0xb46a,	// (0x00067c81) mup_progress_pane_g2

0xb473,	// (0x00067c8a) mup_progress_pane_g3

0x0002,

0xf43b,	// (0x0006bc52) mup_progress_pane_g

0xa156,	// (0x0006696d) bg_popup_window_pane_cp05

0xb47c,	// (0x00067c93) heading_pane_cp02_ParamLimits

0xb47c,	// (0x00067c93) heading_pane_cp02

0xb496,	// (0x00067cad) list_popup_blid_pane

0xb49e,	// (0x00067cb5) list_blid_sat_info_pane_ParamLimits

0xb49e,	// (0x00067cb5) list_blid_sat_info_pane

0xb4b1,	// (0x00067cc8) list_blid_sat_info_pane_g1

0xb4b9,	// (0x00067cd0) list_blid_sat_info_pane_t1

0x3863,	// (0x0006007a) mup_equalizer_pane_ParamLimits

0x3863,	// (0x0006007a) mup_equalizer_pane

0x3884,	// (0x0006009b) mup_equalizer_pane_cp1_ParamLimits

0x3884,	// (0x0006009b) mup_equalizer_pane_cp1

0x38a5,	// (0x000600bc) mup_equalizer_pane_cp2_ParamLimits

0x38a5,	// (0x000600bc) mup_equalizer_pane_cp2

0x38c6,	// (0x000600dd) mup_equalizer_pane_cp3_ParamLimits

0x38c6,	// (0x000600dd) mup_equalizer_pane_cp3

0x38e7,	// (0x000600fe) mup_equalizer_pane_cp4_ParamLimits

0x38e7,	// (0x000600fe) mup_equalizer_pane_cp4

0x3908,	// (0x0006011f) mup_equalizer_pane_cp5

0x391e,	// (0x00060135) mup_equalizer_pane_cp6

0x3936,	// (0x0006014d) mup_equalizer_pane_cp7

0xc65e,	// (0x00068e75) bg_popup_call_poc_act_pane_g9

0xc666,	// (0x00068e7d) bg_popup_call_poc_act_pane_g10

0xc66e,	// (0x00068e85) bg_popup_call_poc_act_pane_g11

0x000a,

0xa5a5,	// (0x00066dbc) mup_scale_pane

0xa78a,	// (0x00066fa1) mup_scale_pane_g1

0xb4c7,	// (0x00067cde) mup_scale_pane_g2

0x0006,

0xf457,	// (0x0006bc6e) mup_scale_pane_g

0xb4eb,	// (0x00067d02) msg_data_pane

0xb4f3,	// (0x00067d0a) scroll_pane_cp017

0x9d03,	// (0x0006651a) bg_list_pane_cp04_ParamLimits

0x9d03,	// (0x0006651a) bg_list_pane_cp04

0xb4fb,	// (0x00067d12) msg_data_pane_g1

0x3960,	// (0x00060177) msg_data_pane_g2

0x32e7,	// (0x0005fafe) msg_data_pane_g3

0x3968,	// (0x0006017f) msg_data_pane_g4

0x3970,	// (0x00060187) msg_data_pane_g5

0x3978,	// (0x0006018f) msg_data_pane_g6

0x3980,	// (0x00060197) msg_data_pane_g7

0x0006,

0xf466,	// (0x0006bc7d) msg_data_pane_g

0x3988,	// (0x0006019f) msg_text_pane_ParamLimits

0x3988,	// (0x0006019f) msg_text_pane

0x39d5,	// (0x000601ec) qrid_highlight_pane_cp011_ParamLimits

0x39d5,	// (0x000601ec) qrid_highlight_pane_cp011

0xa156,	// (0x0006696d) msg_body_pane

0xa156,	// (0x0006696d) msg_header_pane

0xb50c,	// (0x00067d23) input_focus_pane_cp07

0x9d23,	// (0x0006653a) msg_header_pane_t1_ParamLimits

0x9d23,	// (0x0006653a) msg_header_pane_t1

0x9d35,	// (0x0006654c) msg_header_pane_t2_ParamLimits

0x9d35,	// (0x0006654c) msg_header_pane_t2

0x0001,

0xf47a,	// (0x0006bc91) msg_header_pane_t_ParamLimits

0xf47a,	// (0x0006bc91) msg_header_pane_t

0xb521,	// (0x00067d38) msg_body_pane_g1

0x9d47,	// (0x0006655e) msg_body_pane_t1_ParamLimits

0x9d47,	// (0x0006655e) msg_body_pane_t1

0x9d78,	// (0x0006658f) msg_body_pane_t2_ParamLimits

0x9d78,	// (0x0006658f) msg_body_pane_t2

0x9d8a,	// (0x000665a1) msg_body_pane_t3_ParamLimits

0x9d8a,	// (0x000665a1) msg_body_pane_t3

0x0002,

0xf47f,	// (0x0006bc96) msg_body_pane_t_ParamLimits

0xf47f,	// (0x0006bc96) msg_body_pane_t

0x3a51,	// (0x00060268) main_viewer_pane_g1_ParamLimits

0x3a51,	// (0x00060268) main_viewer_pane_g1

0x3a5d,	// (0x00060274) main_viewer_pane_g2_ParamLimits

0x3a5d,	// (0x00060274) main_viewer_pane_g2

0x3a69,	// (0x00060280) main_viewer_pane_g3_ParamLimits

0x3a69,	// (0x00060280) main_viewer_pane_g3

0x3a7a,	// (0x00060291) main_viewer_pane_g4_ParamLimits

0x3a7a,	// (0x00060291) main_viewer_pane_g4

0x3a8b,	// (0x000602a2) main_viewer_pane_g5_ParamLimits

0x3a8b,	// (0x000602a2) main_viewer_pane_g5

0x3a8b,	// (0x000602a2) main_viewer_pane_g7_ParamLimits

0x3a8b,	// (0x000602a2) main_viewer_pane_g7

0xae25,	// (0x0006763c) main_viewer_pane_g8_ParamLimits

0xae25,	// (0x0006763c) main_viewer_pane_g8

0x0007,

0xf48f,	// (0x0006bca6) main_viewer_pane_g_ParamLimits

0xf48f,	// (0x0006bca6) main_viewer_pane_g

0xb529,	// (0x00067d40) viewer_content_pane_ParamLimits

0xb529,	// (0x00067d40) viewer_content_pane

0x3ac9,	// (0x000602e0) main_postcard_pane_g1_ParamLimits

0x3ac9,	// (0x000602e0) main_postcard_pane_g1

0x3ad7,	// (0x000602ee) main_postcard_pane_g2_ParamLimits

0x3ad7,	// (0x000602ee) main_postcard_pane_g2

0x3ae5,	// (0x000602fc) main_postcard_pane_g3_ParamLimits

0x3ae5,	// (0x000602fc) main_postcard_pane_g3

0x0005,

0xf4a0,	// (0x0006bcb7) main_postcard_pane_g_ParamLimits

0xf4a0,	// (0x0006bcb7) main_postcard_pane_g

0x3af5,	// (0x0006030c) main_postcard_pane_g4

0xc840,	// (0x00069057) smil_status_volume_pane_g2

0x3b21,	// (0x00060338) postcard_pane_ParamLimits

0x3b21,	// (0x00060338) postcard_pane

0xb085,	// (0x0006789c) postcard_pane_g1_ParamLimits

0xb085,	// (0x0006789c) postcard_pane_g1

0x3b53,	// (0x0006036a) postcard_pane_g2_ParamLimits

0x3b53,	// (0x0006036a) postcard_pane_g2

0x3b5f,	// (0x00060376) postcard_pane_g3_ParamLimits

0x3b5f,	// (0x00060376) postcard_pane_g3

0xb537,	// (0x00067d4e) postcard_pane_g4_ParamLimits

0xb537,	// (0x00067d4e) postcard_pane_g4

0x3b6b,	// (0x00060382) postcard_pane_g5_ParamLimits

0x3b6b,	// (0x00060382) postcard_pane_g5

0x3b77,	// (0x0006038e) postcard_pane_g6_ParamLimits

0x3b77,	// (0x0006038e) postcard_pane_g6

0xb545,	// (0x00067d5c) postcard_pane_g7_ParamLimits

0xb545,	// (0x00067d5c) postcard_pane_g7

0x0006,

0xf4ad,	// (0x0006bcc4) postcard_pane_g_ParamLimits

0xf4ad,	// (0x0006bcc4) postcard_pane_g

0x3b83,	// (0x0006039a) main_mp2_pane_g1_ParamLimits

0x3b83,	// (0x0006039a) main_mp2_pane_g1

0x3b8f,	// (0x000603a6) main_mp2_pane_g2_ParamLimits

0x3b8f,	// (0x000603a6) main_mp2_pane_g2

0x3b9b,	// (0x000603b2) main_mp2_pane_g3_ParamLimits

0x3b9b,	// (0x000603b2) main_mp2_pane_g3

0x0002,

0xf4bc,	// (0x0006bcd3) main_mp2_pane_g_ParamLimits

0xf4bc,	// (0x0006bcd3) main_mp2_pane_g

0x3ba7,	// (0x000603be) main_mp2_pane_t1_ParamLimits

0x3ba7,	// (0x000603be) main_mp2_pane_t1

0x3bbe,	// (0x000603d5) main_mp2_pane_t2_ParamLimits

0x3bbe,	// (0x000603d5) main_mp2_pane_t2

0x3bd0,	// (0x000603e7) main_mp2_pane_t3_ParamLimits

0x3bd0,	// (0x000603e7) main_mp2_pane_t3

0x0002,

0xf4c3,	// (0x0006bcda) main_mp2_pane_t_ParamLimits

0xf4c3,	// (0x0006bcda) main_mp2_pane_t

0xb553,	// (0x00067d6a) pec_content_pane_ParamLimits

0xb553,	// (0x00067d6a) pec_content_pane

0xaaac,	// (0x000672c3) scroll_pane_cp015

0xb565,	// (0x00067d7c) pec_attribute_pane_ParamLimits

0xb565,	// (0x00067d7c) pec_attribute_pane

0x3be2,	// (0x000603f9) pec_content_pane_g1_ParamLimits

0x3be2,	// (0x000603f9) pec_content_pane_g1

0xb575,	// (0x00067d8c) pec_content_pane_t1_ParamLimits

0xb575,	// (0x00067d8c) pec_content_pane_t1

0xb587,	// (0x00067d9e) pec_content_pane_t2_ParamLimits

0xb587,	// (0x00067d9e) pec_content_pane_t2

0x0001,

0x019d,	// (0x0005c9b4) pec_content_pane_t_ParamLimits

0x019d,	// (0x0005c9b4) pec_content_pane_t

0x3bee,	// (0x00060405) list_single_graphic_pane_cp01_ParamLimits

0x3bee,	// (0x00060405) list_single_graphic_pane_cp01

0xa5a5,	// (0x00066dbc) bg_popup_sub_pane_cp04

0xb599,	// (0x00067db0) popup_mup_playback_window_g1

0xb5a5,	// (0x00067dbc) popup_mup_playback_window_t1

0xb5ba,	// (0x00067dd1) popup_mup_playback_window_t2

0x0001,

0x01a2,	// (0x0005c9b9) popup_mup_playback_window_t

0xb5f1,	// (0x00067e08) main_image_pane_g1_ParamLimits

0xb5f1,	// (0x00067e08) main_image_pane_g1

0xb634,	// (0x00067e4b) scroll_pane_cp018_ParamLimits

0xb634,	// (0x00067e4b) scroll_pane_cp018

0xb64c,	// (0x00067e63) scroll_pane_cp016_ParamLimits

0xb64c,	// (0x00067e63) scroll_pane_cp016

0x3c8e,	// (0x000604a5) smil2_image_pane_ParamLimits

0x3c8e,	// (0x000604a5) smil2_image_pane

0x3cc2,	// (0x000604d9) smil2_root_pane_ParamLimits

0x3cc2,	// (0x000604d9) smil2_root_pane

0x3cee,	// (0x00060505) smil2_text_pane_ParamLimits

0x3cee,	// (0x00060505) smil2_text_pane

0xa156,	// (0x0006696d) bg_list_pane_cp06

0xb688,	// (0x00067e9f) grid_radio_pane

0xa156,	// (0x0006696d) bg_popup_window_pane_cp06

0xb690,	// (0x00067ea7) main_fmradio_pane_t1

0xaff1,	// (0x00067808) heading_pane_cp04

0xb69e,	// (0x00067eb5) main_fmradio_pane_t2

0xc676,	// (0x00068e8d) popup_cale_lunar_info_window_g1

0xb6ac,	// (0x00067ec3) main_fmradio_pane_t3

0xc67e,	// (0x00068e95) popup_cale_lunar_info_window_g2

0xb6ba,	// (0x00067ed1) main_fmradio_pane_t4

0x0001,

0xb6c8,	// (0x00067edf) main_fmradio_pane_t5

0x0004,

0x027d,	// (0x0005ca94) popup_cale_lunar_info_window_g

0x01b7,	// (0x0005c9ce) main_fmradio_pane_t

0xb6d6,	// (0x00067eed) wait_bar_pane_cp03

0xb6de,	// (0x00067ef5) cell_fmradio_pane_ParamLimits

0xb6de,	// (0x00067ef5) cell_fmradio_pane

0xb545,	// (0x00067d5c) cell_fmradio_pane_g1_ParamLimits

0xb545,	// (0x00067d5c) cell_fmradio_pane_g1

0xa156,	// (0x0006696d) grid_highlight_pane_cp011

0xb6f1,	// (0x00067f08) poc_content_pane_ParamLimits

0xb6f1,	// (0x00067f08) poc_content_pane

0xb703,	// (0x00067f1a) scroll_pane_cp019

0x3d2e,	// (0x00060545) popup_call_poc_act_window_ParamLimits

0x3d2e,	// (0x00060545) popup_call_poc_act_window

0x3d3b,	// (0x00060552) popup_call_poc_inact_window_ParamLimits

0x3d3b,	// (0x00060552) popup_call_poc_inact_window

0x0254,	// (0x0005ca6b) bg_popup_call_poc_act_pane_g

0xc5ee,	// (0x00068e05) bg_popup_call_poc_inact_pane_g1

0xc5f6,	// (0x00068e0d) bg_popup_call_poc_inact_pane_g2

0xb70b,	// (0x00067f22) popup_call_poc_act_window_g2

0xc5fe,	// (0x00068e15) bg_popup_call_poc_inact_pane_g3

0xc606,	// (0x00068e1d) bg_popup_call_poc_inact_pane_g4

0xc60e,	// (0x00068e25) bg_popup_call_poc_inact_pane_g5

0xb713,	// (0x00067f2a) popup_call_poc_act_window_t1_ParamLimits

0xb713,	// (0x00067f2a) popup_call_poc_act_window_t1

0xb73b,	// (0x00067f52) popup_call_poc_act_window_t2_ParamLimits

0xb73b,	// (0x00067f52) popup_call_poc_act_window_t2

0xb763,	// (0x00067f7a) popup_call_poc_act_window_t3_ParamLimits

0xb763,	// (0x00067f7a) popup_call_poc_act_window_t3

0xb78b,	// (0x00067fa2) popup_call_poc_act_window_t4_ParamLimits

0xb78b,	// (0x00067fa2) popup_call_poc_act_window_t4

0x0003,

0x01c2,	// (0x0005c9d9) popup_call_poc_act_window_t_ParamLimits

0x01c2,	// (0x0005c9d9) popup_call_poc_act_window_t

0xc616,	// (0x00068e2d) bg_popup_call_poc_inact_pane_g6

0xc61e,	// (0x00068e35) bg_popup_call_poc_inact_pane_g7

0xc626,	// (0x00068e3d) bg_popup_call_poc_inact_pane_g8

0xb79d,	// (0x00067fb4) popup_call_poc_inact_window_g2

0xc62e,	// (0x00068e45) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0241,	// (0x0005ca58) bg_popup_call_poc_inact_pane_g

0xb7a5,	// (0x00067fbc) popup_call_poc_inact_window_t1_ParamLimits

0xb7a5,	// (0x00067fbc) popup_call_poc_inact_window_t1

0xb7ba,	// (0x00067fd1) popup_call_poc_inact_window_t2_ParamLimits

0xb7ba,	// (0x00067fd1) popup_call_poc_inact_window_t2

0xb7cf,	// (0x00067fe6) popup_call_poc_inact_window_t3_ParamLimits

0xb7cf,	// (0x00067fe6) popup_call_poc_inact_window_t3

0x0002,

0x01cb,	// (0x0005c9e2) popup_call_poc_inact_window_t_ParamLimits

0x01cb,	// (0x0005c9e2) popup_call_poc_inact_window_t

0xc7b3,	// (0x00068fca) context_pane_ParamLimits

0x4377,	// (0x00060b8e) signal_pane_ParamLimits

0xa903,	// (0x0006711a) main_call2_pane

0x42ea,	// (0x00060b01) popup_phob_thumbnail2_window_ParamLimits

0x42ea,	// (0x00060b01) popup_phob_thumbnail2_window

0x39ff,	// (0x00060216) aid_hotspot_pointer_arrow_pane

0x3a07,	// (0x0006021e) aid_hotspot_pointer_hand_pane

0x4061,	// (0x00060878) phob_pre_status_pane_g5

0x1b91,	// (0x0005e3a8) cams_zoom_pane_ParamLimits

0x1b9d,	// (0x0005e3b4) image_vga_pane_ParamLimits

0x1bac,	// (0x0005e3c3) main_camera_pane_g1_ParamLimits

0x1bba,	// (0x0005e3d1) main_camera_pane_g2_ParamLimits

0x1bc6,	// (0x0005e3dd) main_camera_pane_g3_ParamLimits

0x1bd2,	// (0x0005e3e9) main_camera_pane_g4_ParamLimits

0x1bde,	// (0x0005e3f5) main_camera_pane_g5_ParamLimits

0x1bea,	// (0x0005e401) main_camera_pane_g6_ParamLimits

0x1bf6,	// (0x0005e40d) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006ba21) main_camera_pane_g_ParamLimits

0x1c02,	// (0x0005e419) main_camera_pane_t1_ParamLimits

0x1c14,	// (0x0005e42b) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006ba32) main_camera_pane_t_ParamLimits

0xa5a5,	// (0x00066dbc) bg_popup_preview_window_pane_cp01_ParamLimits

0xa5a5,	// (0x00066dbc) bg_popup_preview_window_pane_cp01

0xb7e4,	// (0x00067ffb) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e4,	// (0x00067ffb) popup_phob_thumbnail2_window_g1

0xa156,	// (0x0006696d) call2_cli_visual_pane

0x3d57,	// (0x0006056e) popup_call2_audio_conf_window_ParamLimits

0x3d57,	// (0x0006056e) popup_call2_audio_conf_window

0x3d6c,	// (0x00060583) popup_call2_audio_first_window_ParamLimits

0x3d6c,	// (0x00060583) popup_call2_audio_first_window

0x3e0a,	// (0x00060621) popup_call2_audio_in_window_ParamLimits

0x3e0a,	// (0x00060621) popup_call2_audio_in_window

0x3e4c,	// (0x00060663) popup_call2_audio_out_window_ParamLimits

0x3e4c,	// (0x00060663) popup_call2_audio_out_window

0x3eae,	// (0x000606c5) popup_call2_audio_second_window_ParamLimits

0x3eae,	// (0x000606c5) popup_call2_audio_second_window

0x3f0c,	// (0x00060723) popup_call2_audio_wait_window_ParamLimits

0x3f0c,	// (0x00060723) popup_call2_audio_wait_window

0xa156,	// (0x0006696d) bg_popup_call2_act_pane_cp03

0xa587,	// (0x00066d9e) list_conf_pane_cp

0xb7f0,	// (0x00068007) popup_call2_audio_conf_window_t1

0xb7fe,	// (0x00068015) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fe,	// (0x00068015) list_single_graphic_popup_conf2_pane

0xb093,	// (0x000678aa) list_highlight_pane_cp04

0xb811,	// (0x00068028) list_single_graphic_popup_conf2_pane_g1

0xb0a4,	// (0x000678bb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4da,	// (0x0006bcf1) list_single_graphic_popup_conf2_pane_g

0xb81b,	// (0x00068032) list_single_graphic_popup_conf2_pane_t1

0xb829,	// (0x00068040) bg_popup_call2_act_pane_cp01_ParamLimits

0xb829,	// (0x00068040) bg_popup_call2_act_pane_cp01

0xb8b3,	// (0x000680ca) call_type_pane_cp05_ParamLimits

0xb8b3,	// (0x000680ca) call_type_pane_cp05

0xb907,	// (0x0006811e) popup_call2_audio_second_window_g1_ParamLimits

0xb907,	// (0x0006811e) popup_call2_audio_second_window_g1

0xb95b,	// (0x00068172) popup_call2_audio_second_window_g2_ParamLimits

0xb95b,	// (0x00068172) popup_call2_audio_second_window_g2

0x0002,

0x01d7,	// (0x0005c9ee) popup_call2_audio_second_window_g_ParamLimits

0x01d7,	// (0x0005c9ee) popup_call2_audio_second_window_g

0xb9c0,	// (0x000681d7) popup_call2_audio_second_window_t1_ParamLimits

0xb9c0,	// (0x000681d7) popup_call2_audio_second_window_t1

0xba7b,	// (0x00068292) popup_call2_audio_second_window_t2_ParamLimits

0xba7b,	// (0x00068292) popup_call2_audio_second_window_t2

0xbace,	// (0x000682e5) popup_call2_audio_second_window_t3_ParamLimits

0xbace,	// (0x000682e5) popup_call2_audio_second_window_t3

0x0003,

0x01de,	// (0x0005c9f5) popup_call2_audio_second_window_t_ParamLimits

0x01de,	// (0x0005c9f5) popup_call2_audio_second_window_t

0xa156,	// (0x0006696d) bg_popup_call2_in_pane_cp02

0xa160,	// (0x00066977) call_type_pane_cp04

0xa168,	// (0x0006697f) popup_call2_audio_wait_window_g1

0xa170,	// (0x00066987) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006b910) popup_call2_audio_wait_window_g

0xa178,	// (0x0006698f) popup_call2_audio_wait_window_t3

0xbbc1,	// (0x000683d8) bg_popup_call2_act_pane_ParamLimits

0xbbc1,	// (0x000683d8) bg_popup_call2_act_pane

0xbc81,	// (0x00068498) call_type_pane_cp03_ParamLimits

0xbc81,	// (0x00068498) call_type_pane_cp03

0xbce5,	// (0x000684fc) popup_call2_audio_first_window_g1_ParamLimits

0xbce5,	// (0x000684fc) popup_call2_audio_first_window_g1

0xbd55,	// (0x0006856c) popup_call2_audio_first_window_g2_ParamLimits

0xbd55,	// (0x0006856c) popup_call2_audio_first_window_g2

0xb085,	// (0x0006789c) popup_call2_audio_first_window_g3_ParamLimits

0xb085,	// (0x0006789c) popup_call2_audio_first_window_g3

0x0004,

0xf4df,	// (0x0006bcf6) popup_call2_audio_first_window_g_ParamLimits

0xf4df,	// (0x0006bcf6) popup_call2_audio_first_window_g

0xbe33,	// (0x0006864a) popup_call2_audio_first_window_t1_ParamLimits

0xbe33,	// (0x0006864a) popup_call2_audio_first_window_t1

0xbf36,	// (0x0006874d) popup_call2_audio_first_window_t4_ParamLimits

0xbf36,	// (0x0006874d) popup_call2_audio_first_window_t4

0xc019,	// (0x00068830) popup_call2_audio_first_window_t5_ParamLimits

0xc019,	// (0x00068830) popup_call2_audio_first_window_t5

0x0003,

0x01f2,	// (0x0005ca09) popup_call2_audio_first_window_t_ParamLimits

0x01f2,	// (0x0005ca09) popup_call2_audio_first_window_t

0xa59d,	// (0x00066db4) bg_popup_call2_act_pane_g1

0xc686,	// (0x00068e9d) popup_cale_lunar_info_window_t1

0xc694,	// (0x00068eab) popup_cale_lunar_info_window_t2

0xc6a2,	// (0x00068eb9) popup_cale_lunar_info_window_t3

0xa156,	// (0x0006696d) bg_popup_call2_bubble_pane

0xc11a,	// (0x00068931) bg_popup_call2_in_pane_cp01_ParamLimits

0xc11a,	// (0x00068931) bg_popup_call2_in_pane_cp01

0x98ba,	// (0x000660d1) call_type_pane_cp02

0xc162,	// (0x00068979) popup_call2_audio_out_window_g1_ParamLimits

0xc162,	// (0x00068979) popup_call2_audio_out_window_g1

0xc18e,	// (0x000689a5) popup_call2_audio_out_window_g2_ParamLimits

0xc18e,	// (0x000689a5) popup_call2_audio_out_window_g2

0xc1b6,	// (0x000689cd) popup_call2_audio_out_window_g3_ParamLimits

0xc1b6,	// (0x000689cd) popup_call2_audio_out_window_g3

0x0003,

0x01fb,	// (0x0005ca12) popup_call2_audio_out_window_g_ParamLimits

0x01fb,	// (0x0005ca12) popup_call2_audio_out_window_g

0xc1f1,	// (0x00068a08) popup_call2_audio_out_window_t1_ParamLimits

0xc1f1,	// (0x00068a08) popup_call2_audio_out_window_t1

0xc250,	// (0x00068a67) popup_call2_audio_out_window_t2_ParamLimits

0xc250,	// (0x00068a67) popup_call2_audio_out_window_t2

0xc2a4,	// (0x00068abb) popup_call2_audio_out_window_t3_ParamLimits

0xc2a4,	// (0x00068abb) popup_call2_audio_out_window_t3

0xc2ba,	// (0x00068ad1) popup_call2_audio_out_window_t4_ParamLimits

0xc2ba,	// (0x00068ad1) popup_call2_audio_out_window_t4

0xc2d0,	// (0x00068ae7) popup_call2_audio_out_window_t5_ParamLimits

0xc2d0,	// (0x00068ae7) popup_call2_audio_out_window_t5

0x0005,

0x0204,	// (0x0005ca1b) popup_call2_audio_out_window_t_ParamLimits

0x0204,	// (0x0005ca1b) popup_call2_audio_out_window_t

0xc334,	// (0x00068b4b) bg_popup_call2_in_pane_ParamLimits

0xc334,	// (0x00068b4b) bg_popup_call2_in_pane

0xc390,	// (0x00068ba7) popup_call2_audio_in_window_g1_ParamLimits

0xc390,	// (0x00068ba7) popup_call2_audio_in_window_g1

0xc3c8,	// (0x00068bdf) popup_call2_audio_in_window_g2_ParamLimits

0xc3c8,	// (0x00068bdf) popup_call2_audio_in_window_g2

0xc400,	// (0x00068c17) popup_call2_audio_in_window_g3_ParamLimits

0xc400,	// (0x00068c17) popup_call2_audio_in_window_g3

0x0003,

0x0211,	// (0x0005ca28) popup_call2_audio_in_window_g_ParamLimits

0x0211,	// (0x0005ca28) popup_call2_audio_in_window_g

0xc458,	// (0x00068c6f) popup_call2_audio_in_window_t1_ParamLimits

0xc458,	// (0x00068c6f) popup_call2_audio_in_window_t1

0xc4d8,	// (0x00068cef) popup_call2_audio_in_window_t2_ParamLimits

0xc4d8,	// (0x00068cef) popup_call2_audio_in_window_t2

0xc558,	// (0x00068d6f) popup_call2_audio_in_window_t3_ParamLimits

0xc558,	// (0x00068d6f) popup_call2_audio_in_window_t3

0xc572,	// (0x00068d89) popup_call2_audio_in_window_t4_ParamLimits

0xc572,	// (0x00068d89) popup_call2_audio_in_window_t4

0xc584,	// (0x00068d9b) popup_call2_audio_in_window_t5_ParamLimits

0xc584,	// (0x00068d9b) popup_call2_audio_in_window_t5

0xc599,	// (0x00068db0) popup_call2_audio_in_window_t6_ParamLimits

0xc599,	// (0x00068db0) popup_call2_audio_in_window_t6

0x0005,

0x021a,	// (0x0005ca31) popup_call2_audio_in_window_t_ParamLimits

0x021a,	// (0x0005ca31) popup_call2_audio_in_window_t

0xa59d,	// (0x00066db4) bg_popup_call2_in_pane_g1

0xc6b0,	// (0x00068ec7) popup_cale_lunar_info_window_t4

0x0003,

0x0282,	// (0x0005ca99) popup_cale_lunar_info_window_t

0xa5a5,	// (0x00066dbc) bg_popup_call2_rect_pane_ParamLimits

0xa5a5,	// (0x00066dbc) bg_popup_call2_rect_pane

0xa156,	// (0x0006696d) call2_cli_visual_graphic_pane

0xa156,	// (0x0006696d) call2_cli_visual_text_pane

0x4425,	// (0x00060c3c) smil_status_volume_pane_g3

0x0002,

0xa78a,	// (0x00066fa1) call2_cli_visual_graphic_pane_g1

0xa78a,	// (0x00066fa1) call2_cli_visual_graphic_pane_g2

0xa78a,	// (0x00066fa1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ea,	// (0x0006bd01) call2_cli_visual_graphic_pane_g

0xc5ae,	// (0x00068dc5) bg_popup_call2_rect_pane_g1

0xa828,	// (0x0006703f) bg_popup_call2_rect_pane_g2

0xc5b6,	// (0x00068dcd) bg_popup_call2_rect_pane_g3

0xc5be,	// (0x00068dd5) bg_popup_call2_rect_pane_g4

0xc5c6,	// (0x00068ddd) bg_popup_call2_rect_pane_g5

0xc5ce,	// (0x00068de5) bg_popup_call2_rect_pane_g6

0xc5d6,	// (0x00068ded) bg_popup_call2_rect_pane_g7

0xc5de,	// (0x00068df5) bg_popup_call2_rect_pane_g8

0xc5e6,	// (0x00068dfd) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f1,	// (0x0006bd08) bg_popup_call2_rect_pane_g

0xc5ee,	// (0x00068e05) bg_popup_call2_bubble_pane_g1

0xc5f6,	// (0x00068e0d) bg_popup_call2_bubble_pane_g2

0xc5fe,	// (0x00068e15) bg_popup_call2_bubble_pane_g3

0xc606,	// (0x00068e1d) bg_popup_call2_bubble_pane_g4

0xc60e,	// (0x00068e25) bg_popup_call2_bubble_pane_g5

0xc616,	// (0x00068e2d) bg_popup_call2_bubble_pane_g6

0xc61e,	// (0x00068e35) bg_popup_call2_bubble_pane_g7

0xc626,	// (0x00068e3d) bg_popup_call2_bubble_pane_g8

0xc62e,	// (0x00068e45) bg_popup_call2_bubble_pane_g9

0x0008,

0x0241,	// (0x0005ca58) bg_popup_call2_bubble_pane_g

0x15b9,	// (0x0005ddd0) aid_cale_week_size_cell_pane

0x1c26,	// (0x0005e43d) aid_cams_cif_uncrop_pane_ParamLimits

0x1c26,	// (0x0005e43d) aid_cams_cif_uncrop_pane

0x1d81,	// (0x0005e598) aid_cams_size_cell_ParamLimits

0x1d81,	// (0x0005e598) aid_cams_size_cell

0x1d8d,	// (0x0005e5a4) grid_cams_pane_ParamLimits

0x1d9b,	// (0x0005e5b2) linegrid_cams_pane_ParamLimits

0x1edc,	// (0x0005e6f3) call_video_pane_t1

0x1efd,	// (0x0005e714) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006ba85) call_video_pane_t

0x246c,	// (0x0005ec83) aid_cale_month_size_cell_pane_ParamLimits

0x246c,	// (0x0005ec83) aid_cale_month_size_cell_pane

0xf534,	// (0x0006bd4b) smil_status_volume_pane_g

0x4432,	// (0x00060c49) volume_smil_pane_ParamLimits

0x0d1a,	// (0x0005d531) aid_popup2_width_pane

0x14ad,	// (0x0005dcc4) cell_qdial_pane_g4_ParamLimits

0x14ad,	// (0x0005dcc4) cell_qdial_pane_g4

0x344d,	// (0x0005fc64) aid_blid_cardinal_pane_ParamLimits

0x345d,	// (0x0005fc74) aid_blid_destination_pane_ParamLimits

0x345d,	// (0x0005fc74) aid_blid_destination_pane

0xa5a5,	// (0x00066dbc) bg_popup_call_poc_act_pane_ParamLimits

0xa5a5,	// (0x00066dbc) bg_popup_call_poc_act_pane

0xa5a5,	// (0x00066dbc) bg_popup_call_poc_inact_pane_ParamLimits

0xa5a5,	// (0x00066dbc) bg_popup_call_poc_inact_pane

0xc636,	// (0x00068e4d) bg_popup_call_poc_act_pane_g1

0xc63e,	// (0x00068e55) bg_popup_call_poc_act_pane_g2

0xc646,	// (0x00068e5d) bg_popup_call_poc_act_pane_g3

0xc606,	// (0x00068e1d) bg_popup_call_poc_act_pane_g4

0xc60e,	// (0x00068e25) bg_popup_call_poc_act_pane_g5

0xc64e,	// (0x00068e65) bg_popup_call_poc_act_pane_g6

0xc61e,	// (0x00068e35) bg_popup_call_poc_act_pane_g7

0xc656,	// (0x00068e6d) bg_popup_call_poc_act_pane_g8

0xa156,	// (0x0006696d) main_usb_pane

0x4223,	// (0x00060a3a) popup_cale_lunar_info_window

0x221c,	// (0x0005ea33) im_reading_pane_t1_ParamLimits

0xaa04,	// (0x0006721b) list_im_pane_ParamLimits

0xaa15,	// (0x0006722c) scroll_pane_cp07_ParamLimits

0xa156,	// (0x0006696d) grid_highlight_pane_cp012

0xa5a5,	// (0x00066dbc) mup_scale_pane_ParamLimits

0xb085,	// (0x0006789c) main_usb_pane_g1_ParamLimits

0xb085,	// (0x0006789c) main_usb_pane_g1

0x3f84,	// (0x0006079b) main_usb_pane_g2_ParamLimits

0x3f84,	// (0x0006079b) main_usb_pane_g2

0x0001,

0xf504,	// (0x0006bd1b) main_usb_pane_g_ParamLimits

0xf504,	// (0x0006bd1b) main_usb_pane_g

0x3f90,	// (0x000607a7) main_usb_pane_t1_ParamLimits

0x3f90,	// (0x000607a7) main_usb_pane_t1

0x3fa2,	// (0x000607b9) main_usb_pane_t2_ParamLimits

0x3fa2,	// (0x000607b9) main_usb_pane_t2

0x3fb4,	// (0x000607cb) main_usb_pane_t3_ParamLimits

0x3fb4,	// (0x000607cb) main_usb_pane_t3

0x3fc6,	// (0x000607dd) main_usb_pane_t4_ParamLimits

0x3fc6,	// (0x000607dd) main_usb_pane_t4

0x3fd8,	// (0x000607ef) main_usb_pane_t5_ParamLimits

0x3fd8,	// (0x000607ef) main_usb_pane_t5

0x3fea,	// (0x00060801) main_usb_pane_t6_ParamLimits

0x3fea,	// (0x00060801) main_usb_pane_t6

0x0005,

0xf509,	// (0x0006bd20) main_usb_pane_t_ParamLimits

0x33f3,	// (0x0005fc0a) aid_text_placing

0x33ff,	// (0x0005fc16) main_location2_pane_t1_ParamLimits

0x3413,	// (0x0005fc2a) main_location2_pane_t2_ParamLimits

0x3427,	// (0x0005fc3e) main_location2_pane_t3_ParamLimits

0x343b,	// (0x0005fc52) main_location2_pane_t4_ParamLimits

0x343b,	// (0x0005fc52) main_location2_pane_t4

0xf3cf,	// (0x0006bbe6) main_location2_pane_t_ParamLimits

0xa68d,	// (0x00066ea4) find_pinb_pane_g2_ParamLimits

0xa68d,	// (0x00066ea4) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0006b936) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0006b936) find_pinb_pane_g

0xa699,	// (0x00066eb0) find_pinb_pane_t1_ParamLimits

0xa6ab,	// (0x00066ec2) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0006b93b) find_pinb_pane_t_ParamLimits

0xa156,	// (0x0006696d) main_call3_pane

0x29e0,	// (0x0005f1f7) cale_month_day_heading_pane_t1_ParamLimits

0x2a66,	// (0x0005f27d) cale_month_day_heading_pane_t2_ParamLimits

0x2af7,	// (0x0005f30e) cale_month_day_heading_pane_t3_ParamLimits

0x2b88,	// (0x0005f39f) cale_month_day_heading_pane_t4_ParamLimits

0x2c19,	// (0x0005f430) cale_month_day_heading_pane_t5_ParamLimits

0x2caa,	// (0x0005f4c1) cale_month_day_heading_pane_t6_ParamLimits

0x2d47,	// (0x0005f55e) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006babd) cale_month_day_heading_pane_t_ParamLimits

0xac5f,	// (0x00067476) smil_status_volume_pane

0x3b3b,	// (0x00060352) postcard_address_pane_ParamLimits

0x3b3b,	// (0x00060352) postcard_address_pane

0x3b47,	// (0x0006035e) postcard_message_pane_ParamLimits

0x3b47,	// (0x0006035e) postcard_message_pane

0x3f4b,	// (0x00060762) call2_cli_visual_pane_t1_ParamLimits

0x3f4b,	// (0x00060762) call2_cli_visual_pane_t1

0x4587,	// (0x00060d9e) postcard_message_pane_t1_ParamLimits

0x4587,	// (0x00060d9e) postcard_message_pane_t1

0x4570,	// (0x00060d87) postcard_address_pane_t1_ParamLimits

0x4570,	// (0x00060d87) postcard_address_pane_t1

0x4561,	// (0x00060d78) popup_call3_audio_in_window_ParamLimits

0x4561,	// (0x00060d78) popup_call3_audio_in_window

0x4447,	// (0x00060c5e) bg_popup_call3_in_pane_ParamLimits

0x4447,	// (0x00060c5e) bg_popup_call3_in_pane

0x44a7,	// (0x00060cbe) popup_call3_audio_in_window_g1_ParamLimits

0x44a7,	// (0x00060cbe) popup_call3_audio_in_window_g1

0x44bf,	// (0x00060cd6) popup_call3_audio_in_window_g2_ParamLimits

0x44bf,	// (0x00060cd6) popup_call3_audio_in_window_g2

0x44d7,	// (0x00060cee) popup_call3_audio_in_window_g3_ParamLimits

0x44d7,	// (0x00060cee) popup_call3_audio_in_window_g3

0x0003,

0xf53b,	// (0x0006bd52) popup_call3_audio_in_window_g_ParamLimits

0xf53b,	// (0x0006bd52) popup_call3_audio_in_window_g

0x44ff,	// (0x00060d16) popup_call3_audio_in_window_t1_ParamLimits

0x44ff,	// (0x00060d16) popup_call3_audio_in_window_t1

0x4527,	// (0x00060d3e) popup_call3_audio_in_window_t2_ParamLimits

0x4527,	// (0x00060d3e) popup_call3_audio_in_window_t2

0x454f,	// (0x00060d66) popup_call3_audio_in_window_t3_ParamLimits

0x454f,	// (0x00060d66) popup_call3_audio_in_window_t3

0x0002,

0xf544,	// (0x0006bd5b) popup_call3_audio_in_window_t_ParamLimits

0xf544,	// (0x0006bd5b) popup_call3_audio_in_window_t

0xa903,	// (0x0006711a) bg_popup_call3_rect_pane

0xc5ae,	// (0x00068dc5) bg_popup_call3_rect_pane_g1

0xa828,	// (0x0006703f) bg_popup_call3_rect_pane_g2

0xc5b6,	// (0x00068dcd) bg_popup_call3_rect_pane_g3

0xc5be,	// (0x00068dd5) bg_popup_call3_rect_pane_g4

0xc5c6,	// (0x00068ddd) bg_popup_call3_rect_pane_g5

0xc5ce,	// (0x00068de5) bg_popup_call3_rect_pane_g6

0xc5d6,	// (0x00068ded) bg_popup_call3_rect_pane_g7

0x3773,	// (0x0005ff8a) mup_visualizer_osc_pane

0xb459,	// (0x00067c70) mup_visualizer_spec_pane

0x4467,	// (0x00060c7e) call3_video_qcif_pane_ParamLimits

0x4467,	// (0x00060c7e) call3_video_qcif_pane

0x4477,	// (0x00060c8e) call3_video_qcif_uncrop_pane_ParamLimits

0x4477,	// (0x00060c8e) call3_video_qcif_uncrop_pane

0x4485,	// (0x00060c9c) call3_video_subqcif_pane_ParamLimits

0x4485,	// (0x00060c9c) call3_video_subqcif_pane

0x4497,	// (0x00060cae) call3_video_subqcif_uncrop_pane_ParamLimits

0x4497,	// (0x00060cae) call3_video_subqcif_uncrop_pane

0x44ef,	// (0x00060d06) popup_call3_audio_in_window_g4_ParamLimits

0x44ef,	// (0x00060d06) popup_call3_audio_in_window_g4

0x4412,	// (0x00060c29) mup_spec_half_pane

0x441b,	// (0x00060c32) mup_spec_half_pane_cp

0xc813,	// (0x0006902a) mup_osc_middle_pane

0xc81c,	// (0x00069033) mup_visualizer_osc_pane_g1

0x43f3,	// (0x00060c0a) mup_spec_bar_pane_ParamLimits

0x43f3,	// (0x00060c0a) mup_spec_bar_pane

0xc800,	// (0x00069017) mup_spec_bar_pane_g1

0xc80a,	// (0x00069021) mup_spec_bar_pane_g2

0x0001,

0x02c6,	// (0x0005cadd) mup_spec_bar_pane_g

0x15b9,	// (0x0005ddd0) aid_cale_week_size_cell_pane_ParamLimits

0x15ce,	// (0x0005dde5) bg_cale_heading_pane_ParamLimits

0xa865,	// (0x0006707c) bg_cale_pane_cp01_ParamLimits

0x15f0,	// (0x0005de07) cale_week_corner_pane_ParamLimits

0x160a,	// (0x0005de21) cale_week_day_heading_pane_ParamLimits

0x162c,	// (0x0005de43) cale_week_scroll_pane_g1_ParamLimits

0x1649,	// (0x0005de60) cale_week_scroll_pane_g2_ParamLimits

0x165c,	// (0x0005de73) cale_week_scroll_pane_g3_ParamLimits

0x166f,	// (0x0005de86) cale_week_scroll_pane_g4_ParamLimits

0x1682,	// (0x0005de99) cale_week_scroll_pane_g5_ParamLimits

0x1695,	// (0x0005deac) cale_week_scroll_pane_g6_ParamLimits

0x16a8,	// (0x0005debf) cale_week_scroll_pane_g7_ParamLimits

0x16bb,	// (0x0005ded2) cale_week_scroll_pane_g8_ParamLimits

0x16d0,	// (0x0005dee7) cale_week_scroll_pane_g9_ParamLimits

0x16e3,	// (0x0005defa) cale_week_scroll_pane_g10_ParamLimits

0x16f6,	// (0x0005df0d) cale_week_scroll_pane_g11_ParamLimits

0x1709,	// (0x0005df20) cale_week_scroll_pane_g12_ParamLimits

0x1720,	// (0x0005df37) cale_week_scroll_pane_g13_ParamLimits

0x173b,	// (0x0005df52) cale_week_scroll_pane_g14_ParamLimits

0x1756,	// (0x0005df6d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0006b9c7) cale_week_scroll_pane_g_ParamLimits

0x1786,	// (0x0005df9d) cale_week_time_pane_ParamLimits

0x179b,	// (0x0005dfb2) grid_cale_week_pane_ParamLimits

0xa882,	// (0x00067099) listscroll_cale_week_pane_t1

0xa894,	// (0x000670ab) scroll_pane_cp08_ParamLimits

0x24d5,	// (0x0005ecec) cale_month_corner_pane_ParamLimits

0xac35,	// (0x0006744c) cale_month_pane_t1

0x2979,	// (0x0005f190) cale_month_week_pane_ParamLimits

0xb085,	// (0x0006789c) popup_call_status_window_g1_ParamLimits

0x3239,	// (0x0005fa50) popup_call_status_window_g2_ParamLimits

0x3245,	// (0x0005fa5c) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006bb6d) popup_call_status_window_g_ParamLimits

0xafe1,	// (0x000677f8) aid_call2_pane

0x39f1,	// (0x00060208) msg_header_pane_g1

0x3b3b,	// (0x00060352) postcard_address2_pane_ParamLimits

0x3b3b,	// (0x00060352) postcard_address2_pane

0x3b47,	// (0x0006035e) postcard_message2_pane_ParamLimits

0x3b47,	// (0x0006035e) postcard_message2_pane

0x4385,	// (0x00060b9c) message2_row_pane_ParamLimits

0x4385,	// (0x00060b9c) message2_row_pane

0x43a2,	// (0x00060bb9) address2_row_pane_ParamLimits

0x43a2,	// (0x00060bb9) address2_row_pane

0xc7ce,	// (0x00068fe5) postcard_message2_row_pane_g1

0xc7d6,	// (0x00068fed) postcard_message2_row_pane_t1

0xc7ce,	// (0x00068fe5) address2_row_pane_g1

0xc7d6,	// (0x00068fed) address2_row_pane_t1

0x1b0c,	// (0x0005e323) aid_size_cell_vorec

0xa156,	// (0x0006696d) main_rss_pane

0x43b5,	// (0x00060bcc) rss_list_single_pane_ParamLimits

0x43b5,	// (0x00060bcc) rss_list_single_pane

0xc7e4,	// (0x00068ffb) rss_list_single_pane_t1

0xc7f2,	// (0x00069009) rss_list_single_pane_t2

0x0001,

0x02c1,	// (0x0005cad8) rss_list_single_pane_t

0xa156,	// (0x0006696d) main_camera2_pane

0xa156,	// (0x0006696d) main_video2_pane

0x45eb,	// (0x00060e02) cams_zoom_pane_cp2_ParamLimits

0x45eb,	// (0x00060e02) cams_zoom_pane_cp2

0x45f7,	// (0x00060e0e) image2_vga_pane_ParamLimits

0x45f7,	// (0x00060e0e) image2_vga_pane

0x4606,	// (0x00060e1d) main_camera2_pane_g1_ParamLimits

0x4606,	// (0x00060e1d) main_camera2_pane_g1

0x4612,	// (0x00060e29) main_camera2_pane_g2_ParamLimits

0x4612,	// (0x00060e29) main_camera2_pane_g2

0x461e,	// (0x00060e35) main_camera2_pane_g3_ParamLimits

0x461e,	// (0x00060e35) main_camera2_pane_g3

0x462a,	// (0x00060e41) main_camera2_pane_g4_ParamLimits

0x462a,	// (0x00060e41) main_camera2_pane_g4

0x4636,	// (0x00060e4d) main_camera2_pane_g5_ParamLimits

0x4636,	// (0x00060e4d) main_camera2_pane_g5

0x4642,	// (0x00060e59) main_camera2_pane_g6_ParamLimits

0x4642,	// (0x00060e59) main_camera2_pane_g6

0x464e,	// (0x00060e65) main_camera2_pane_g7_ParamLimits

0x464e,	// (0x00060e65) main_camera2_pane_g7

0x465a,	// (0x00060e71) main_camera2_pane_g8_ParamLimits

0x465a,	// (0x00060e71) main_camera2_pane_g8

0x0008,

0xf54b,	// (0x0006bd62) main_camera2_pane_g_ParamLimits

0xf54b,	// (0x0006bd62) main_camera2_pane_g

0x4672,	// (0x00060e89) main_camera2_pane_t1_ParamLimits

0x4672,	// (0x00060e89) main_camera2_pane_t1

0x4684,	// (0x00060e9b) main_camera2_pane_t2_ParamLimits

0x4684,	// (0x00060e9b) main_camera2_pane_t2

0x4696,	// (0x00060ead) main_camera2_pane_t3_ParamLimits

0x4696,	// (0x00060ead) main_camera2_pane_t3

0x46a8,	// (0x00060ebf) main_camera2_pane_t4_ParamLimits

0x46a8,	// (0x00060ebf) main_camera2_pane_t4

0x0006,

0xf55e,	// (0x0006bd75) main_camera2_pane_t_ParamLimits

0xf55e,	// (0x0006bd75) main_camera2_pane_t

0x470a,	// (0x00060f21) cams_zoom_pane_cp4_ParamLimits

0x470a,	// (0x00060f21) cams_zoom_pane_cp4

0x471a,	// (0x00060f31) image2_cif_pane_ParamLimits

0x471a,	// (0x00060f31) image2_cif_pane

0x472f,	// (0x00060f46) image2_subqcif_pane_ParamLimits

0x472f,	// (0x00060f46) image2_subqcif_pane

0x473e,	// (0x00060f55) main_video2_pane_g1_ParamLimits

0x473e,	// (0x00060f55) main_video2_pane_g1

0x4750,	// (0x00060f67) main_video2_pane_g2_ParamLimits

0x4750,	// (0x00060f67) main_video2_pane_g2

0x4760,	// (0x00060f77) main_video2_pane_g3_ParamLimits

0x4760,	// (0x00060f77) main_video2_pane_g3

0x4770,	// (0x00060f87) main_video2_pane_g4_ParamLimits

0x4770,	// (0x00060f87) main_video2_pane_g4

0x4780,	// (0x00060f97) main_video2_pane_g5_ParamLimits

0x4780,	// (0x00060f97) main_video2_pane_g5

0x4790,	// (0x00060fa7) main_video2_pane_g6_ParamLimits

0x4790,	// (0x00060fa7) main_video2_pane_g6

0x0005,

0xf56d,	// (0x0006bd84) main_video2_pane_g_ParamLimits

0xf56d,	// (0x0006bd84) main_video2_pane_g

0x47a2,	// (0x00060fb9) main_video2_pane_t1_ParamLimits

0x47a2,	// (0x00060fb9) main_video2_pane_t1

0x47bc,	// (0x00060fd3) main_video2_pane_t2_ParamLimits

0x47bc,	// (0x00060fd3) main_video2_pane_t2

0x47e2,	// (0x00060ff9) main_video2_pane_t3_ParamLimits

0x47e2,	// (0x00060ff9) main_video2_pane_t3

0x0002,

0xf57a,	// (0x0006bd91) main_video2_pane_t_ParamLimits

0xf57a,	// (0x0006bd91) main_video2_pane_t

0x40a1,	// (0x000608b8) call_muted_g2

0x0001,

0xf52f,	// (0x0006bd46) call_muted_g

0xa156,	// (0x0006696d) main_mup2_pane

0xc853,	// (0x0006906a) main_mup2_pane_g1_ParamLimits

0xc853,	// (0x0006906a) main_mup2_pane_g1

0x4808,	// (0x0006101f) main_mup2_pane_g2_ParamLimits

0x4808,	// (0x0006101f) main_mup2_pane_g2

0x4a8a,	// (0x000612a1) main_mup_pane_g13_cp1

0x4a92,	// (0x000612a9) mup_volume_pane_cp1

0x4828,	// (0x0006103f) main_mup2_pane_g4_ParamLimits

0x4828,	// (0x0006103f) main_mup2_pane_g4

0x483d,	// (0x00061054) main_mup2_pane_g5_ParamLimits

0x483d,	// (0x00061054) main_mup2_pane_g5

0x4852,	// (0x00061069) main_mup2_pane_g6_ParamLimits

0x4852,	// (0x00061069) main_mup2_pane_g6

0x4867,	// (0x0006107e) main_mup2_pane_g7_ParamLimits

0x4867,	// (0x0006107e) main_mup2_pane_g7

0x0006,

0xf581,	// (0x0006bd98) main_mup2_pane_g_ParamLimits

0xf581,	// (0x0006bd98) main_mup2_pane_g

0x4883,	// (0x0006109a) main_mup2_pane_t1_ParamLimits

0x4883,	// (0x0006109a) main_mup2_pane_t1

0x489a,	// (0x000610b1) main_mup2_pane_t2_ParamLimits

0x489a,	// (0x000610b1) main_mup2_pane_t2

0x48b1,	// (0x000610c8) main_mup2_pane_t3_ParamLimits

0x48b1,	// (0x000610c8) main_mup2_pane_t3

0x48c8,	// (0x000610df) main_mup2_pane_t4_ParamLimits

0x48c8,	// (0x000610df) main_mup2_pane_t4

0x48e2,	// (0x000610f9) main_mup2_pane_t5_ParamLimits

0x48e2,	// (0x000610f9) main_mup2_pane_t5

0x48fc,	// (0x00061113) main_mup2_pane_t6_ParamLimits

0x48fc,	// (0x00061113) main_mup2_pane_t6

0x0005,

0xf590,	// (0x0006bda7) main_mup2_pane_t_ParamLimits

0xf590,	// (0x0006bda7) main_mup2_pane_t

0x4934,	// (0x0006114b) mup2_visualizer_pane_ParamLimits

0x4934,	// (0x0006114b) mup2_visualizer_pane

0x496a,	// (0x00061181) mup_progress_pane_cp_ParamLimits

0x496a,	// (0x00061181) mup_progress_pane_cp

0x4a75,	// (0x0006128c) mup_volume_pane_cp_ParamLimits

0x4a75,	// (0x0006128c) mup_volume_pane_cp

0x4981,	// (0x00061198) mup2_visualizer_pane_g1_ParamLimits

0x4981,	// (0x00061198) mup2_visualizer_pane_g1

0xc85f,	// (0x00069076) mup2_visualizer_pane_g2_ParamLimits

0xc85f,	// (0x00069076) mup2_visualizer_pane_g2

0x4996,	// (0x000611ad) mup2_visualizer_pane_g3_ParamLimits

0x4996,	// (0x000611ad) mup2_visualizer_pane_g3

0x0002,

0xf59d,	// (0x0006bdb4) mup2_visualizer_pane_g_ParamLimits

0xf59d,	// (0x0006bdb4) mup2_visualizer_pane_g

0xb680,	// (0x00067e97) aid_size_cell_fmradio

0x41b7,	// (0x000609ce) aid_height_parent_landcape

0xaa93,	// (0x000672aa) wml_content_pane_cp

0xaa9b,	// (0x000672b2) wml_tabs_pane

0xaaa4,	// (0x000672bb) popup_wml_miniature_window

0xaaac,	// (0x000672c3) scroll_pane_cp021

0xaac0,	// (0x000672d7) wml_content_pane_comp8

0xa156,	// (0x0006696d) bg_popup_sub_pane_cp05

0xc87d,	// (0x00069094) popup_wml_miniature_window_g1

0xc885,	// (0x0006909c) wml_miniature_view_pane

0x49a4,	// (0x000611bb) aid_size_wml_view

0x49ac,	// (0x000611c3) wml_miniature_view_pane_g1

0x49b5,	// (0x000611cc) wml_miniature_view_pane_g2

0x49be,	// (0x000611d5) wml_miniature_view_pane_g3

0x49c6,	// (0x000611dd) wml_miniature_view_pane_g4

0x49ce,	// (0x000611e5) wml_miniature_view_pane_g5

0x49d6,	// (0x000611ed) wml_miniature_view_pane_g6

0x49de,	// (0x000611f5) wml_miniature_view_pane_g7

0x49e6,	// (0x000611fd) wml_miniature_view_pane_g8

0x0007,

0xf5a4,	// (0x0006bdbb) wml_miniature_view_pane_g

0xc853,	// (0x0006906a) background_graphic_ParamLimits

0xc853,	// (0x0006906a) background_graphic

0xc88d,	// (0x000690a4) wml_tabs_2_pane

0xc896,	// (0x000690ad) wml_tabs_3_pane_ParamLimits

0xc896,	// (0x000690ad) wml_tabs_3_pane

0xc8a8,	// (0x000690bf) wml_tabs_4_pane_ParamLimits

0xc8a8,	// (0x000690bf) wml_tabs_4_pane

0xc8be,	// (0x000690d5) wml_tabs_5_pane_ParamLimits

0xc8be,	// (0x000690d5) wml_tabs_5_pane

0xc8d8,	// (0x000690ef) wml_tabs_pane_g2_ParamLimits

0xc8d8,	// (0x000690ef) wml_tabs_pane_g2

0xc8ec,	// (0x00069103) wml_tabs_pane_g3_ParamLimits

0xc8ec,	// (0x00069103) wml_tabs_pane_g3

0x49ee,	// (0x00061205) wml_tabs_2_active_pane_ParamLimits

0x49ee,	// (0x00061205) wml_tabs_2_active_pane

0x49fe,	// (0x00061215) wml_tabs_2_passive_pane_ParamLimits

0x49fe,	// (0x00061215) wml_tabs_2_passive_pane

0x4a0e,	// (0x00061225) wml_tabs_3_active_pane_cp_ParamLimits

0x4a0e,	// (0x00061225) wml_tabs_3_active_pane_cp

0x4a1f,	// (0x00061236) wml_tabs_3_passive_pane_ParamLimits

0x4a1f,	// (0x00061236) wml_tabs_3_passive_pane

0x4a30,	// (0x00061247) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a30,	// (0x00061247) wml_tabs_3_passive_pane_cp

0x4a41,	// (0x00061258) tabs_4_active_pane

0x4a49,	// (0x00061260) tabs_4_passive_pane

0x4a51,	// (0x00061268) tabs_4_passive_pane_cp

0x4a59,	// (0x00061270) tabs_4_passive_pane_cp2

0x3f7c,	// (0x00060793) aid_height_text

0x373c,	// (0x0005ff53) mup_volume_cont_pane_ParamLimits

0x373c,	// (0x0005ff53) mup_volume_cont_pane

0x1104,	// (0x0005d91b) aid_size_cell_pinb

0x110e,	// (0x0005d925) aid_size_list_pinb

0x4953,	// (0x0006116a) mup2_volume_cont_pane_ParamLimits

0x4953,	// (0x0006116a) mup2_volume_cont_pane

0x4a61,	// (0x00061278) mup2_volume_cont_pane_g1_ParamLimits

0x4a61,	// (0x00061278) mup2_volume_cont_pane_g1

0x0d26,	// (0x0005d53d) aid_size_cell_touch_ParamLimits

0x0d26,	// (0x0005d53d) aid_size_cell_touch

0x0fe7,	// (0x0005d7fe) touch_pane_ParamLimits

0x0fe7,	// (0x0005d7fe) touch_pane

0x0fdd,	// (0x0005d7f4) main_rss2_pane

0xc909,	// (0x00069120) listscroll_rss2_pane

0xc912,	// (0x00069129) rss2_navigation_pane

0xc91a,	// (0x00069131) list_rss2_pane

0xb13e,	// (0x00067955) scroll_pane_cp22

0xc922,	// (0x00069139) rss2_navigation_pane_g1

0xc92b,	// (0x00069142) rss2_navigation_pane_g2

0xc933,	// (0x0006914a) rss2_navigation_pane_g3

0x0002,

0x034c,	// (0x0005cb63) rss2_navigation_pane_g

0xc93b,	// (0x00069152) rss2_navigation_pane_t1

0x4a9a,	// (0x000612b1) rss2_list_single_pane_ParamLimits

0x4a9a,	// (0x000612b1) rss2_list_single_pane

0xc949,	// (0x00069160) rss2_list_single_pane_t2

0xc957,	// (0x0006916e) rss2_list_single_pane_t3_ParamLimits

0xc957,	// (0x0006916e) rss2_list_single_pane_t3

0xc974,	// (0x0006918b) rss2_list_single_pane_t4

0x2ff7,	// (0x0005f80e) smil_status_pane_g1

0x41ce,	// (0x000609e5) main_image2_pane_ParamLimits

0x41ce,	// (0x000609e5) main_image2_pane

0x4666,	// (0x00060e7d) main_camera2_pane_g9_ParamLimits

0x4666,	// (0x00060e7d) main_camera2_pane_g9

0x46ba,	// (0x00060ed1) main_camera2_pane_t5_ParamLimits

0x46ba,	// (0x00060ed1) main_camera2_pane_t5

0x46cc,	// (0x00060ee3) main_camera2_pane_t6_ParamLimits

0x46cc,	// (0x00060ee3) main_camera2_pane_t6

0x4ad2,	// (0x000612e9) main_image2_pane_g1_ParamLimits

0x4ad2,	// (0x000612e9) main_image2_pane_g1

0x3d18,	// (0x0006052f) smil2_video_pane_ParamLimits

0x3d18,	// (0x0006052f) smil2_video_pane

0x0c2a,	// (0x0005d441) aid_zoom_text_primary_cp

0x0f78,	// (0x0005d78f) popup_preview_fixed_window

0xa9fc,	// (0x00067213) im_reading_pane_g1

0x45b0,	// (0x00060dc7) cams2_bc_adjust_pane_cp_ParamLimits

0x45b0,	// (0x00060dc7) cams2_bc_adjust_pane_cp

0x46fc,	// (0x00060f13) cams2_bc_adjust_pane_ParamLimits

0x46fc,	// (0x00060f13) cams2_bc_adjust_pane

0xd95a,	// (0x0006a171) cams2_bc_adjust_pane_g1

0x4ade,	// (0x000612f5) cams2_slider_pane

0x4ae7,	// (0x000612fe) cams2_slider_pane_g1

0x4af0,	// (0x00061307) cams2_slider_pane_g2

0x0006,

0xf5b5,	// (0x0006bdcc) cams2_slider_pane_g

0x11fe,	// (0x0005da15) calc_display_pane_ParamLimits

0x121c,	// (0x0005da33) calc_paper_pane_ParamLimits

0x1238,	// (0x0005da4f) grid_calc_pane_ParamLimits

0x32a7,	// (0x0005fabe) popup_clock_digital_window_t1_ParamLimits

0xb61d,	// (0x00067e34) main_image_pane_t1

0x11e4,	// (0x0005d9fb) aid_size_cell_calc_ParamLimits

0x11e4,	// (0x0005d9fb) aid_size_cell_calc

0x41ff,	// (0x00060a16) popup_blid_sat_info2_window_ParamLimits

0x41ff,	// (0x00060a16) popup_blid_sat_info2_window

0xc98a,	// (0x000691a1) aid_size_cell_blid

0xc992,	// (0x000691a9) bg_popup_window_pane_cp07

0xc9b5,	// (0x000691cc) grid_popup_blid_pane

0xc9bf,	// (0x000691d6) heading_pane_cp05_ParamLimits

0xc9bf,	// (0x000691d6) heading_pane_cp05

0xca89,	// (0x000692a0) cell_popup_blid_pane_ParamLimits

0xca89,	// (0x000692a0) cell_popup_blid_pane

0xcaaf,	// (0x000692c6) cell_popup_blid_pane_g1

0xcab7,	// (0x000692ce) cell_popup_blid_pane_t1

0x4919,	// (0x00061130) mup2_indicator_pane_ParamLimits

0x4919,	// (0x00061130) mup2_indicator_pane

0xa903,	// (0x0006711a) mup2_visualizer_osc_pane

0xc86b,	// (0x00069082) mup2_visualizer_spec_pane_ParamLimits

0xc86b,	// (0x00069082) mup2_visualizer_spec_pane

0x4b0a,	// (0x00061321) mup2_spec_half_pane

0x4b13,	// (0x0006132a) mup2_spec_half_pane_cp

0x4b1d,	// (0x00061334) mup2_spec_bar_pane_ParamLimits

0x4b1d,	// (0x00061334) mup2_spec_bar_pane

0xc800,	// (0x00069017) mup2_spec_bar_pane_g1

0xc80a,	// (0x00069021) mup2_spec_bar_pane_g2

0x0001,

0x02c6,	// (0x0005cadd) mup2_spec_bar_pane_g

0x4b3c,	// (0x00061353) mup2_osc_middle_pane

0xc81c,	// (0x00069033) mup2_visualizer_osc_pane_g1

0x97eb,	// (0x00066002) popup_number_entry_window_t1_ParamLimits

0x97fe,	// (0x00066015) popup_number_entry_window_t2_ParamLimits

0x9810,	// (0x00066027) popup_number_entry_window_t3_ParamLimits

0x103e,	// (0x0005d855) popup_number_entry_window_t5_ParamLimits

0x103e,	// (0x0005d855) popup_number_entry_window_t5

0xf0ca,	// (0x0006b8e1) popup_number_entry_window_t_ParamLimits

0x9822,	// (0x00066039) text_title_cp2_ParamLimits

0x3a0f,	// (0x00060226) aid_hotspot_pointer_text2_pane

0x3a9d,	// (0x000602b4) main_viewer_pane_g9_ParamLimits

0x3a9d,	// (0x000602b4) main_viewer_pane_g9

0xac35,	// (0x0006744c) cale_month_pane_t1_ParamLimits

0xac72,	// (0x00067489) bg_cale_pane_ParamLimits

0xac8a,	// (0x000674a1) list_cale_pane_ParamLimits

0xac9b,	// (0x000674b2) listscroll_cale_day_pane_t1

0xacad,	// (0x000674c4) scroll_pane_cp09_ParamLimits

0x377b,	// (0x0005ff92) main_mup_eq_pane_t1_ParamLimits

0x377b,	// (0x0005ff92) main_mup_eq_pane_t1

0x3795,	// (0x0005ffac) main_mup_eq_pane_t2_ParamLimits

0x3795,	// (0x0005ffac) main_mup_eq_pane_t2

0x37ad,	// (0x0005ffc4) main_mup_eq_pane_t3_ParamLimits

0x37ad,	// (0x0005ffc4) main_mup_eq_pane_t3

0x37c5,	// (0x0005ffdc) main_mup_eq_pane_t4_ParamLimits

0x37c5,	// (0x0005ffdc) main_mup_eq_pane_t4

0x37dd,	// (0x0005fff4) main_mup_eq_pane_t5_ParamLimits

0x37dd,	// (0x0005fff4) main_mup_eq_pane_t5

0x37f5,	// (0x0006000c) main_mup_eq_pane_t6_ParamLimits

0x37f5,	// (0x0006000c) main_mup_eq_pane_t6

0x3809,	// (0x00060020) main_mup_eq_pane_t7_ParamLimits

0x3809,	// (0x00060020) main_mup_eq_pane_t7

0x381d,	// (0x00060034) main_mup_eq_pane_t8_ParamLimits

0x381d,	// (0x00060034) main_mup_eq_pane_t8

0x3833,	// (0x0006004a) main_mup_eq_pane_t9_ParamLimits

0x3833,	// (0x0006004a) main_mup_eq_pane_t9

0x384b,	// (0x00060062) main_mup_eq_pane_t10_ParamLimits

0x384b,	// (0x00060062) main_mup_eq_pane_t10

0x0009,

0xf442,	// (0x0006bc59) main_mup_eq_pane_t_ParamLimits

0xf442,	// (0x0006bc59) main_mup_eq_pane_t

0x3908,	// (0x0006011f) mup_equalizer_pane_cp5_ParamLimits

0x391e,	// (0x00060135) mup_equalizer_pane_cp6_ParamLimits

0x3936,	// (0x0006014d) mup_equalizer_pane_cp7_ParamLimits

0x0fdd,	// (0x0005d7f4) main_gallery_pane

0xc825,	// (0x0006903c) smil2_volume_pane

0xc82d,	// (0x00069044) smil_status_volume_pane_g1_ParamLimits

0xc840,	// (0x00069057) smil_status_volume_pane_g2_ParamLimits

0x4425,	// (0x00060c3c) smil_status_volume_pane_g3_ParamLimits

0xf534,	// (0x0006bd4b) smil_status_volume_pane_g_ParamLimits

0xc992,	// (0x000691a9) bg_popup_window_pane_cp07_ParamLimits

0xc9a0,	// (0x000691b7) blid_firmament_pane

0x4b45,	// (0x0006135c) aid_size_cell_gallery_ParamLimits

0x4b45,	// (0x0006135c) aid_size_cell_gallery

0x4b53,	// (0x0006136a) grid_gallery_pane_ParamLimits

0x4b53,	// (0x0006136a) grid_gallery_pane

0x4b63,	// (0x0006137a) cell_gallery_pane_ParamLimits

0x4b63,	// (0x0006137a) cell_gallery_pane

0xcac5,	// (0x000692dc) bg_cell_gallery_focus_pane_ParamLimits

0xcac5,	// (0x000692dc) bg_cell_gallery_focus_pane

0xcad7,	// (0x000692ee) cell_gallery_pane_g1_ParamLimits

0xcad7,	// (0x000692ee) cell_gallery_pane_g1

0x4bb1,	// (0x000613c8) cell_gallery_pane_g2_ParamLimits

0x4bb1,	// (0x000613c8) cell_gallery_pane_g2

0x4bbe,	// (0x000613d5) cell_gallery_pane_g3_ParamLimits

0x4bbe,	// (0x000613d5) cell_gallery_pane_g3

0xcae3,	// (0x000692fa) cell_gallery_pane_g4_ParamLimits

0xcae3,	// (0x000692fa) cell_gallery_pane_g4

0x0003,

0xf5c4,	// (0x0006bddb) cell_gallery_pane_g_ParamLimits

0xf5c4,	// (0x0006bddb) cell_gallery_pane_g

0xcaef,	// (0x00069306) bg_cell_gallery_focus_pane_g1

0xcaf7,	// (0x0006930e) bg_cell_gallery_focus_pane_g2

0xcaff,	// (0x00069316) bg_cell_gallery_focus_pane_g3

0xcb07,	// (0x0006931e) bg_cell_gallery_focus_pane_g4

0xcb0f,	// (0x00069326) bg_cell_gallery_focus_pane_g5

0xcb17,	// (0x0006932e) bg_cell_gallery_focus_pane_g6

0xcb1f,	// (0x00069336) bg_cell_gallery_focus_pane_g7

0xcb27,	// (0x0006933e) bg_cell_gallery_focus_pane_g8

0x0007,

0x0382,	// (0x0005cb99) bg_cell_gallery_focus_pane_g

0xcb2f,	// (0x00069346) aid_firma_cardinal

0xcb43,	// (0x0006935a) blid_firmament_pane_t1

0xcb5a,	// (0x00069371) blid_firmament_pane_t2

0xcb71,	// (0x00069388) blid_firmament_pane_t3

0xcb88,	// (0x0006939f) blid_firmament_pane_t4

0x0003,

0x0393,	// (0x0005cbaa) blid_firmament_pane_t

0xcb9f,	// (0x000693b6) blid_sat_info_pane

0xcbaf,	// (0x000693c6) blid_sat_info_pane_g1

0xcbaf,	// (0x000693c6) blid_sat_info_pane_g2

0x0001,

0x039c,	// (0x0005cbb3) blid_sat_info_pane_g

0xcbb9,	// (0x000693d0) blid_sat_info_pane_t1

0xcbc7,	// (0x000693de) smil2_volume_content_pane

0xcbd0,	// (0x000693e7) smil2_volume_pane_g1

0xa7bf,	// (0x00066fd6) smil2_volume_content_pane_g1

0xcbd8,	// (0x000693ef) smil2_volume_content_pane_g2

0xcbe1,	// (0x000693f8) smil2_volume_content_pane_g3

0xcbea,	// (0x00069401) smil2_volume_content_pane_g4

0xcbf3,	// (0x0006940a) smil2_volume_content_pane_g5

0xcbfc,	// (0x00069413) smil2_volume_content_pane_g6

0xcc05,	// (0x0006941c) smil2_volume_content_pane_g7

0xcc0e,	// (0x00069425) smil2_volume_content_pane_g8

0xcc17,	// (0x0006942e) smil2_volume_content_pane_g9

0xcc20,	// (0x00069437) smil2_volume_content_pane_g10

0x0009,

0xf5cd,	// (0x0006bde4) smil2_volume_content_pane_g

0x1820,	// (0x0005e037) cale_week_day_heading_pane_t1_ParamLimits

0x185b,	// (0x0005e072) cale_week_day_heading_pane_t2_ParamLimits

0x1896,	// (0x0005e0ad) cale_week_day_heading_pane_t3_ParamLimits

0x18d1,	// (0x0005e0e8) cale_week_day_heading_pane_t4_ParamLimits

0x190c,	// (0x0005e123) cale_week_day_heading_pane_t5_ParamLimits

0x1947,	// (0x0005e15e) cale_week_day_heading_pane_t6_ParamLimits

0x1982,	// (0x0005e199) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0006b9e8) cale_week_day_heading_pane_t_ParamLimits

0xa8b1,	// (0x000670c8) bg_cale_side_pane_ParamLimits

0x19bd,	// (0x0005e1d4) cale_week_time_pane_t1_ParamLimits

0x19d7,	// (0x0005e1ee) cale_week_time_pane_t2_ParamLimits

0x19f1,	// (0x0005e208) cale_week_time_pane_t3_ParamLimits

0x1a0b,	// (0x0005e222) cale_week_time_pane_t4_ParamLimits

0x1a25,	// (0x0005e23c) cale_week_time_pane_t5_ParamLimits

0x1a41,	// (0x0005e258) cale_week_time_pane_t6_ParamLimits

0x1a63,	// (0x0005e27a) cale_week_time_pane_t7_ParamLimits

0x1a87,	// (0x0005e29e) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0006b9f7) cale_week_time_pane_t_ParamLimits

0x1aad,	// (0x0005e2c4) cell_cale_week_pane_g2_ParamLimits

0xa8b1,	// (0x000670c8) bg_cale_side_pane_cp01_ParamLimits

0x2df0,	// (0x0005f607) cale_month_week_pane_t1_ParamLimits

0x2e09,	// (0x0005f620) cale_month_week_pane_t2_ParamLimits

0x2e22,	// (0x0005f639) cale_month_week_pane_t3_ParamLimits

0x2e3b,	// (0x0005f652) cale_month_week_pane_t4_ParamLimits

0x2e58,	// (0x0005f66f) cale_month_week_pane_t5_ParamLimits

0x2e79,	// (0x0005f690) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006bacc) cale_month_week_pane_t_ParamLimits

0x2fc0,	// (0x0005f7d7) cell_cale_month_pane_g1_ParamLimits

0x0fdd,	// (0x0005d7f4) main_cale_event_viewer_pane

0x97c1,	// (0x00065fd8) listscroll_cale_event_viewer_pane

0xcc29,	// (0x00069440) list_cale_ev_pane

0xcc31,	// (0x00069448) scroll_pane_cp023

0xcc3d,	// (0x00069454) field_cale_ev_pane_ParamLimits

0xcc3d,	// (0x00069454) field_cale_ev_pane

0xcc59,	// (0x00069470) field_cale_ev_content_pane_ParamLimits

0xcc59,	// (0x00069470) field_cale_ev_content_pane

0xcc65,	// (0x0006947c) field_cale_ev_pane_g1_ParamLimits

0xcc65,	// (0x0006947c) field_cale_ev_pane_g1

0xcc71,	// (0x00069488) field_cale_ev_pane_g2_ParamLimits

0xcc71,	// (0x00069488) field_cale_ev_pane_g2

0xcc89,	// (0x000694a0) field_cale_ev_pane_g3_ParamLimits

0xcc89,	// (0x000694a0) field_cale_ev_pane_g3

0x0002,

0x03b6,	// (0x0005cbcd) field_cale_ev_pane_g_ParamLimits

0x03b6,	// (0x0005cbcd) field_cale_ev_pane_g

0xcca1,	// (0x000694b8) field_cale_ev_pane_t1_ParamLimits

0xcca1,	// (0x000694b8) field_cale_ev_pane_t1

0xccb8,	// (0x000694cf) field_cale_ev_content_pane_t1_ParamLimits

0xccb8,	// (0x000694cf) field_cale_ev_content_pane_t1

0xb503,	// (0x00067d1a) bg_button_pane_cp01

0x15a9,	// (0x0005ddc0) listscroll_cale_week_pane_ParamLimits

0xa85c,	// (0x00067073) popup_toolbar_window_cp01

0xa882,	// (0x00067099) listscroll_cale_week_pane_t1_ParamLimits

0x15a9,	// (0x0005ddc0) listscroll_cale_day_pane_ParamLimits

0xa85c,	// (0x00067073) popup_toolbar_window_cp02

0xac9b,	// (0x000674b2) listscroll_cale_day_pane_t1_ParamLimits

0x15a9,	// (0x0005ddc0) main_cale_month_pane_ParamLimits

0x42fc,	// (0x00060b13) popup_toolbar_window_cp03_ParamLimits

0x42fc,	// (0x00060b13) popup_toolbar_window_cp03

0x3c2a,	// (0x00060441) main_image_pane_g2_ParamLimits

0x3c2a,	// (0x00060441) main_image_pane_g2

0x3c36,	// (0x0006044d) main_image_pane_g3_ParamLimits

0x3c36,	// (0x0006044d) main_image_pane_g3

0x0002,

0xf4ca,	// (0x0006bce1) main_image_pane_g_ParamLimits

0xf4ca,	// (0x0006bce1) main_image_pane_g

0xb61d,	// (0x00067e34) main_image_pane_t1_ParamLimits

0x3c42,	// (0x00060459) main_image_pane_t2_ParamLimits

0x3c42,	// (0x00060459) main_image_pane_t2

0x3c54,	// (0x0006046b) main_image_pane_t3_ParamLimits

0x3c54,	// (0x0006046b) main_image_pane_t3

0x3c66,	// (0x0006047d) main_image_pane_t4_ParamLimits

0x3c66,	// (0x0006047d) main_image_pane_t4

0x0003,

0xf4d1,	// (0x0006bce8) main_image_pane_t_ParamLimits

0xf4d1,	// (0x0006bce8) main_image_pane_t

0x3c78,	// (0x0006048f) popup_image_details_window_cp01

0x3c82,	// (0x00060499) popup_toobar_trans_pane_cp01_ParamLimits

0x3c82,	// (0x00060499) popup_toobar_trans_pane_cp01

0x4252,	// (0x00060a69) popup_image_details_window_ParamLimits

0x4252,	// (0x00060a69) popup_image_details_window

0x4260,	// (0x00060a77) popup_image_focus_window

0x45a2,	// (0x00060db9) camera2_autofocus_pane_ParamLimits

0x45a2,	// (0x00060db9) camera2_autofocus_pane

0x97c1,	// (0x00065fd8) bg_popup_sub_pane_cp06

0xccd5,	// (0x000694ec) popup_image_focus_window_g1

0xccdd,	// (0x000694f4) popup_image_focus_window_g2

0xcce5,	// (0x000694fc) popup_image_focus_window_g3

0xcced,	// (0x00069504) popup_image_focus_window_g4

0x0003,

0x03bd,	// (0x0005cbd4) popup_image_focus_window_g

0xccf5,	// (0x0006950c) popup_image_focus_window_t1

0xcd03,	// (0x0006951a) popup_image_focus_window_t2

0xcd13,	// (0x0006952a) popup_image_focus_window_t3

0x0002,

0x03c6,	// (0x0005cbdd) popup_image_focus_window_t

0xcd21,	// (0x00069538) camera2_autofocus_pane_g1

0xa5b3,	// (0x00066dca) bg_tb_trans_pane_cp01

0xcd2f,	// (0x00069546) popup_image_details_window_g1

0xcd42,	// (0x00069559) popup_image_details_window_g2

0x0002,

0x03d8,	// (0x0005cbef) popup_image_details_window_g

0xcd6b,	// (0x00069582) popup_image_details_window_t1

0xcd7d,	// (0x00069594) popup_image_details_window_t2

0xcd96,	// (0x000695ad) popup_image_details_window_t3

0xcdaa,	// (0x000695c1) popup_image_details_window_t4

0xcdc5,	// (0x000695dc) popup_image_details_window_t5

0x0004,

0x03df,	// (0x0005cbf6) popup_image_details_window_t

0xa721,	// (0x00066f38) bg_calc_paper_pane_ParamLimits

0x0fdd,	// (0x0005d7f4) grid_highlight_pane_cp013

0x1335,	// (0x0005db4c) list_calc_pane_ParamLimits

0x1347,	// (0x0005db5e) scroll_pane_cp024

0xa735,	// (0x00066f4c) bg_calc_display_pane_ParamLimits

0x134f,	// (0x0005db66) calc_display_pane_t1_ParamLimits

0x1364,	// (0x0005db7b) calc_display_pane_t2_ParamLimits

0x1379,	// (0x0005db90) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0006b968) calc_display_pane_t_ParamLimits

0x145a,	// (0x0005dc71) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0006b985) cell_calc_pane_g

0x1463,	// (0x0005dc7a) cell_calc_pane_t1

0xa794,	// (0x00066fab) grid_highlight_pane_cp02_ParamLimits

0xa7aa,	// (0x00066fc1) toolbar_button_pane_cp01_ParamLimits

0xa7aa,	// (0x00066fc1) toolbar_button_pane_cp01

0xb662,	// (0x00067e79) temp_image_control_pane_ParamLimits

0xb662,	// (0x00067e79) temp_image_control_pane

0x41ce,	// (0x000609e5) main_mp3_pane

0xcddf,	// (0x000695f6) temp_image_control_pane_g1_ParamLimits

0xcddf,	// (0x000695f6) temp_image_control_pane_g1

0xcded,	// (0x00069604) temp_image_control_pane_g2_ParamLimits

0xcded,	// (0x00069604) temp_image_control_pane_g2

0xcdff,	// (0x00069616) temp_image_control_pane_g3_ParamLimits

0xcdff,	// (0x00069616) temp_image_control_pane_g3

0x4bfb,	// (0x00061412) temp_image_control_pane_g4_ParamLimits

0x4bfb,	// (0x00061412) temp_image_control_pane_g4

0x0003,

0xf5ed,	// (0x0006be04) temp_image_control_pane_g_ParamLimits

0xf5ed,	// (0x0006be04) temp_image_control_pane_g

0xcddf,	// (0x000695f6) main_mp3_pane_g1

0x4c0c,	// (0x00061423) main_mp3_pane_g2

0x0007,

0xf5f6,	// (0x0006be0d) main_mp3_pane_g

0xce42,	// (0x00069659) main_mp3_pane_t1

0xa90b,	// (0x00067122) main_camera_pane_g8_ParamLimits

0xa90b,	// (0x00067122) main_camera_pane_g8

0x1d37,	// (0x0005e54e) main_video_pane_g7_ParamLimits

0x1d37,	// (0x0005e54e) main_video_pane_g7

0x46ea,	// (0x00060f01) main_camera2_pane_t7_ParamLimits

0x46ea,	// (0x00060f01) main_camera2_pane_t7

0xaa53,	// (0x0006726a) scroll_pane_cp025_ParamLimits

0xaa53,	// (0x0006726a) scroll_pane_cp025

0xaa67,	// (0x0006727e) scroll_pane_cp026_ParamLimits

0xaa67,	// (0x0006727e) scroll_pane_cp026

0xaa76,	// (0x0006728d) wml_content_pane_ParamLimits

0x0fdd,	// (0x0005d7f4) main_touch_calib_pane

0x4cb0,	// (0x000614c7) main_touch_calib_pane_g1

0x4cbc,	// (0x000614d3) main_touch_calib_pane_g2

0x4cc8,	// (0x000614df) main_touch_calib_pane_g3

0x4cd4,	// (0x000614eb) main_touch_calib_pane_g4

0x0003,

0xf614,	// (0x0006be2b) main_touch_calib_pane_g

0x4ce0,	// (0x000614f7) main_touch_calib_pane_t1

0x4cf9,	// (0x00061510) main_touch_calib_pane_t2

0x0004,

0xf61d,	// (0x0006be34) main_touch_calib_pane_t

0xb21c,	// (0x00067a33) mup_progress_pane_cp02

0xb251,	// (0x00067a68) navi_pane_g1

0xb32d,	// (0x00067b44) navi_pane_mp_t3

0x41ce,	// (0x000609e5) main_mp3_pane_ParamLimits

0x4339,	// (0x00060b50) navi_pane_ParamLimits

0xcddf,	// (0x000695f6) main_mp3_pane_g1_ParamLimits

0x4c0c,	// (0x00061423) main_mp3_pane_g2_ParamLimits

0x4c18,	// (0x0006142f) main_mp3_pane_g3_ParamLimits

0x4c18,	// (0x0006142f) main_mp3_pane_g3

0x4c24,	// (0x0006143b) main_mp3_pane_g4_ParamLimits

0x4c24,	// (0x0006143b) main_mp3_pane_g4

0xce0f,	// (0x00069626) main_mp3_pane_g5_ParamLimits

0xce0f,	// (0x00069626) main_mp3_pane_g5

0xce1d,	// (0x00069634) main_mp3_pane_g6_ParamLimits

0xce1d,	// (0x00069634) main_mp3_pane_g6

0xce2a,	// (0x00069641) main_mp3_pane_g7_ParamLimits

0xce2a,	// (0x00069641) main_mp3_pane_g7

0xce36,	// (0x0006964d) main_mp3_pane_g8_ParamLimits

0xce36,	// (0x0006964d) main_mp3_pane_g8

0xf5f6,	// (0x0006be0d) main_mp3_pane_g_ParamLimits

0x4c30,	// (0x00061447) main_mp3_pane_t2

0x4c40,	// (0x00061457) main_mp3_pane_t3

0xce50,	// (0x00069667) main_mp3_pane_t4

0xce5e,	// (0x00069675) main_mp3_pane_t5

0x0005,

0xf607,	// (0x0006be1e) main_mp3_pane_t

0xce6c,	// (0x00069683) mup_progress_pane_cp01

0x0c2a,	// (0x0005d441) aid_zoom_text_secondary2

0xcc29,	// (0x00069440) list_cale_ev2_pane

0xcc31,	// (0x00069448) scroll_pane_cp023_ParamLimits

0x4d54,	// (0x0006156b) field_cale_ev2_pane_ParamLimits

0x4d54,	// (0x0006156b) field_cale_ev2_pane

0x9d9c,	// (0x000665b3) field_cale_ev2_pane_g1_ParamLimits

0x9d9c,	// (0x000665b3) field_cale_ev2_pane_g1

0x9da8,	// (0x000665bf) field_cale_ev2_pane_g2_ParamLimits

0x9da8,	// (0x000665bf) field_cale_ev2_pane_g2

0x9dc0,	// (0x000665d7) field_cale_ev2_pane_g3_ParamLimits

0x9dc0,	// (0x000665d7) field_cale_ev2_pane_g3

0x0003,

0xf628,	// (0x0006be3f) field_cale_ev2_pane_g_ParamLimits

0xf628,	// (0x0006be3f) field_cale_ev2_pane_g

0x9de4,	// (0x000665fb) field_cale_ev2_pane_t1_ParamLimits

0x9de4,	// (0x000665fb) field_cale_ev2_pane_t1

0x9dfb,	// (0x00066612) field_cale_ev2_pane_t2_ParamLimits

0x9dfb,	// (0x00066612) field_cale_ev2_pane_t2

0x0001,

0xf631,	// (0x0006be48) field_cale_ev2_pane_t_ParamLimits

0xf631,	// (0x0006be48) field_cale_ev2_pane_t

0x3b05,	// (0x0006031c) main_postcard_pane_g5_ParamLimits

0x3b05,	// (0x0006031c) main_postcard_pane_g5

0x3b13,	// (0x0006032a) main_postcard_pane_g6_ParamLimits

0x3b13,	// (0x0006032a) main_postcard_pane_g6

0x1b81,	// (0x0005e398) camera2_autofocus_pane_cp_ParamLimits

0x1b81,	// (0x0005e398) camera2_autofocus_pane_cp

0x41ce,	// (0x000609e5) main_mup3_pane

0x4da2,	// (0x000615b9) main_mup3_pane_g1_ParamLimits

0x4da2,	// (0x000615b9) main_mup3_pane_g1

0x4dc3,	// (0x000615da) main_mup3_pane_g2_ParamLimits

0x4dc3,	// (0x000615da) main_mup3_pane_g2

0x4e3f,	// (0x00061656) main_mup3_pane_g3_ParamLimits

0x4e3f,	// (0x00061656) main_mup3_pane_g3

0x4e82,	// (0x00061699) main_mup3_pane_g4_ParamLimits

0x4e82,	// (0x00061699) main_mup3_pane_g4

0x4ec5,	// (0x000616dc) main_mup3_pane_g5_ParamLimits

0x4ec5,	// (0x000616dc) main_mup3_pane_g5

0x4f0a,	// (0x00061721) main_mup3_pane_g6_ParamLimits

0x4f0a,	// (0x00061721) main_mup3_pane_g6

0xce74,	// (0x0006968b) main_mup3_pane_g7_ParamLimits

0xce74,	// (0x0006968b) main_mup3_pane_g7

0x0007,

0xf641,	// (0x0006be58) main_mup3_pane_g_ParamLimits

0xf641,	// (0x0006be58) main_mup3_pane_g

0x4f80,	// (0x00061797) main_mup3_pane_t1_ParamLimits

0x4f80,	// (0x00061797) main_mup3_pane_t1

0x4fef,	// (0x00061806) main_mup3_pane_t2_ParamLimits

0x4fef,	// (0x00061806) main_mup3_pane_t2

0x50b8,	// (0x000618cf) main_mup3_pane_t4_ParamLimits

0x50b8,	// (0x000618cf) main_mup3_pane_t4

0x5106,	// (0x0006191d) main_mup3_pane_t5_ParamLimits

0x5106,	// (0x0006191d) main_mup3_pane_t5

0x51b6,	// (0x000619cd) main_mup3_pane_t6_ParamLimits

0x51b6,	// (0x000619cd) main_mup3_pane_t6

0x0005,

0xf652,	// (0x0006be69) main_mup3_pane_t_ParamLimits

0xf652,	// (0x0006be69) main_mup3_pane_t

0x5262,	// (0x00061a79) mup3_progress_pane_ParamLimits

0x5262,	// (0x00061a79) mup3_progress_pane

0x52d6,	// (0x00061aed) popup_mup3_control_window_ParamLimits

0x52d6,	// (0x00061aed) popup_mup3_control_window

0xce82,	// (0x00069699) popup_mup3_text_window

0x52ef,	// (0x00061b06) mup3_progress_pane_t1

0x530e,	// (0x00061b25) mup3_progress_pane_t2

0xce8a,	// (0x000696a1) mup3_progress_pane_t3

0x0002,

0xf65f,	// (0x0006be76) mup3_progress_pane_t

0xcea7,	// (0x000696be) mup_progress_pane_cp03

0x97c1,	// (0x00065fd8) bg_tb_trans_pane_cp04

0x532d,	// (0x00061b44) mup3_volume_pane

0x5335,	// (0x00061b4c) popup_mup3_control_window_g1

0x533e,	// (0x00061b55) mup3_volume_pane_g1

0x5347,	// (0x00061b5e) mup3_volume_pane_g2

0x5350,	// (0x00061b67) mup3_volume_pane_g3

0x0002,

0xf666,	// (0x0006be7d) mup3_volume_pane_g

0x97c1,	// (0x00065fd8) bg_tb_trans_pane_cp03

0xceb7,	// (0x000696ce) popup_mup3_text_window_g1

0xcebf,	// (0x000696d6) popup_mup3_text_window_t1

0xa77d,	// (0x00066f94) list_calc_item_pane_g1_ParamLimits

0xc900,	// (0x00069117) mup_volume_pane_cp_g1

0x4d12,	// (0x00061529) main_touch_calib_pane_t3

0x4d28,	// (0x0006153f) main_touch_calib_pane_t4

0x4d3e,	// (0x00061555) main_touch_calib_pane_t5

0x0d12,	// (0x0005d529) aid_cell_size_toolbar2

0x0d1a,	// (0x0005d531) aid_popup3_width_pane

0x0c22,	// (0x0005d439) aid_zoom_text_msg_primary

0x1b56,	// (0x0005e36d) vorec_t7

0xa741,	// (0x00066f58) bg_calc_paper_pane_g1_ParamLimits

0xa74d,	// (0x00066f64) bg_calc_paper_pane_g2_ParamLimits

0xa759,	// (0x00066f70) bg_calc_paper_pane_g3_ParamLimits

0xa765,	// (0x00066f7c) bg_calc_paper_pane_g4_ParamLimits

0xa771,	// (0x00066f88) bg_calc_paper_pane_g5_ParamLimits

0x13b8,	// (0x0005dbcf) bg_calc_paper_pane_g6_ParamLimits

0x13c9,	// (0x0005dbe0) bg_calc_paper_pane_g7_ParamLimits

0x13da,	// (0x0005dbf1) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0006b96f) bg_calc_paper_pane_g_ParamLimits

0x13eb,	// (0x0005dc02) calc_bg_paper_pane_g9_ParamLimits

0x1c68,	// (0x0005e47f) image_qvga_pane_ParamLimits

0x1c68,	// (0x0005e47f) image_qvga_pane

0xa5a5,	// (0x00066dbc) bg_popup_sub_pane_cp04_ParamLimits

0xb599,	// (0x00067db0) popup_mup_playback_window_g1_ParamLimits

0xb5a5,	// (0x00067dbc) popup_mup_playback_window_t1_ParamLimits

0xb5ba,	// (0x00067dd1) popup_mup_playback_window_t2_ParamLimits

0x01a2,	// (0x0005c9b9) popup_mup_playback_window_t_ParamLimits

0x4819,	// (0x00061030) main_mup2_pane_g3_ParamLimits

0x4819,	// (0x00061030) main_mup2_pane_g3

0x1f8a,	// (0x0005e7a1) popup_toolbar_window_cp04

0xb9af,	// (0x000681c6) popup_call2_audio_second_window_g3_ParamLimits

0xb9af,	// (0x000681c6) popup_call2_audio_second_window_g3

0xbdb9,	// (0x000685d0) popup_call2_audio_first_window_g4_ParamLimits

0xbdb9,	// (0x000685d0) popup_call2_audio_first_window_g4

0xc438,	// (0x00068c4f) popup_call2_audio_in_window_g4_ParamLimits

0xc438,	// (0x00068c4f) popup_call2_audio_in_window_g4

0x3c1d,	// (0x00060434) aid_area_sk_bg_cut_ParamLimits

0x3c1d,	// (0x00060434) aid_area_sk_bg_cut

0xb5cf,	// (0x00067de6) aid_area_sk_bg_cut_2_ParamLimits

0xb5cf,	// (0x00067de6) aid_area_sk_bg_cut_2

0x4ba1,	// (0x000613b8) aid_placing_details_win

0x4ba9,	// (0x000613c0) aid_placing_details_win_2

0xcd21,	// (0x00069538) camera2_autofocus_pane_g1_ParamLimits

0x0f69,	// (0x0005d780) popup_fixed_preview_cale_window_ParamLimits

0x0f69,	// (0x0005d780) popup_fixed_preview_cale_window

0xb3ab,	// (0x00067bc2) navi_slider_pane_g3

0xb3b4,	// (0x00067bcb) navi_slider_pane_g4

0xb3bd,	// (0x00067bd4) navi_slider_pane_g5

0xb3ab,	// (0x00067bc2) navi_slider_pane_g6

0x350f,	// (0x0005fd26) navi_slider_pane_g7

0xb4d0,	// (0x00067ce7) mup_scale_pane_g3

0xb4d9,	// (0x00067cf0) mup_scale_pane_g4

0xb4e2,	// (0x00067cf9) mup_scale_pane_g5

0x394e,	// (0x00060165) mup_scale_pane_g6

0x3957,	// (0x0006016e) mup_scale_pane_g7

0xb3ab,	// (0x00067bc2) cams2_slider_pane_g3

0xc982,	// (0x00069199) cams2_slider_pane_g4

0x4af9,	// (0x00061310) cams2_slider_pane_g5

0xb3ab,	// (0x00067bc2) cams2_slider_pane_g6

0x4b01,	// (0x00061318) cams2_slider_pane_g7

0xcbaf,	// (0x000693c6) camera2_autofocus_pane_cp_g1

0xc799,	// (0x00068fb0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc799,	// (0x00068fb0) bg_popup_preview_window_pane_cp02

0xcecd,	// (0x000696e4) list_fp_cale_pane_ParamLimits

0xcecd,	// (0x000696e4) list_fp_cale_pane

0xced9,	// (0x000696f0) popup_fixed_preview_cale_window_t1_ParamLimits

0xced9,	// (0x000696f0) popup_fixed_preview_cale_window_t1

0x5359,	// (0x00061b70) popup_fixed_preview_cale_window_t2_ParamLimits

0x5359,	// (0x00061b70) popup_fixed_preview_cale_window_t2

0x536e,	// (0x00061b85) popup_fixed_preview_cale_window_t3_ParamLimits

0x536e,	// (0x00061b85) popup_fixed_preview_cale_window_t3

0x0002,

0xf66d,	// (0x0006be84) popup_fixed_preview_cale_window_t_ParamLimits

0xf66d,	// (0x0006be84) popup_fixed_preview_cale_window_t

0x5383,	// (0x00061b9a) list_single_fp_cale_pane_ParamLimits

0x5383,	// (0x00061b9a) list_single_fp_cale_pane

0xcef7,	// (0x0006970e) list_single_fp_cale_pane_g1_ParamLimits

0xcef7,	// (0x0006970e) list_single_fp_cale_pane_g1

0xcf03,	// (0x0006971a) list_single_fp_cale_pane_g2_ParamLimits

0xcf03,	// (0x0006971a) list_single_fp_cale_pane_g2

0x0002,

0x0471,	// (0x0005cc88) list_single_fp_cale_pane_g_ParamLimits

0x0471,	// (0x0005cc88) list_single_fp_cale_pane_g

0xcf1c,	// (0x00069733) list_single_fp_cale_pane_t1_ParamLimits

0xcf1c,	// (0x00069733) list_single_fp_cale_pane_t1

0xcf2e,	// (0x00069745) list_single_fp_cale_pane_t2_ParamLimits

0xcf2e,	// (0x00069745) list_single_fp_cale_pane_t2

0x0001,

0x0478,	// (0x0005cc8f) list_single_fp_cale_pane_t_ParamLimits

0x0478,	// (0x0005cc8f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0fdd,	// (0x0005d7f4) main_dialer_pane

0x5397,	// (0x00061bae) aid_cell_size_keypad

0x53a1,	// (0x00061bb8) dialer_ne_pane

0x53ab,	// (0x00061bc2) grid_dialer_command_1_pane

0x53b3,	// (0x00061bca) grid_dialer_command_2_pane

0x53bb,	// (0x00061bd2) grid_dialer_keypad_pane

0x53cf,	// (0x00061be6) bg_popup_call_pane_cp06_ParamLimits

0x53cf,	// (0x00061be6) bg_popup_call_pane_cp06

0x53db,	// (0x00061bf2) dialer_ne_clear_pane_ParamLimits

0x53db,	// (0x00061bf2) dialer_ne_clear_pane

0xcf61,	// (0x00069778) dialer_ne_pane_g1

0xcf69,	// (0x00069780) dialer_ne_pane_t1_ParamLimits

0xcf69,	// (0x00069780) dialer_ne_pane_t1

0x53e7,	// (0x00061bfe) dialer_ne_pane_t2_ParamLimits

0x53e7,	// (0x00061bfe) dialer_ne_pane_t2

0x5404,	// (0x00061c1b) dialer_ne_pane_t3_ParamLimits

0x5404,	// (0x00061c1b) dialer_ne_pane_t3

0x0002,

0xf674,	// (0x0006be8b) dialer_ne_pane_t_ParamLimits

0xf674,	// (0x0006be8b) dialer_ne_pane_t

0x5428,	// (0x00061c3f) dialer_ne_pane_t3_copy1_ParamLimits

0x5428,	// (0x00061c3f) dialer_ne_pane_t3_copy1

0x544c,	// (0x00061c63) cell_dialer_keypad_pane_ParamLimits

0x544c,	// (0x00061c63) cell_dialer_keypad_pane

0x5463,	// (0x00061c7a) cell_dialer_command_1_pane_ParamLimits

0x5463,	// (0x00061c7a) cell_dialer_command_1_pane

0x5479,	// (0x00061c90) cell_dialer_command_2_pane_ParamLimits

0x5479,	// (0x00061c90) cell_dialer_command_2_pane

0xcf7b,	// (0x00069792) bg_button_pane_cp02_ParamLimits

0xcf7b,	// (0x00069792) bg_button_pane_cp02

0x5488,	// (0x00061c9f) cell_dialer_keypad_pane_g1_ParamLimits

0x5488,	// (0x00061c9f) cell_dialer_keypad_pane_g1

0xcf7b,	// (0x00069792) bg_button_pane_cp03_ParamLimits

0xcf7b,	// (0x00069792) bg_button_pane_cp03

0x549d,	// (0x00061cb4) cell_dialer_command_1_pane_g1_ParamLimits

0x549d,	// (0x00061cb4) cell_dialer_command_1_pane_g1

0xcf87,	// (0x0006979e) bg_button_pane_cp04

0x54b1,	// (0x00061cc8) cell_dialer_command_2_pane_g1

0xa903,	// (0x0006711a) bg_button_pane_cp06

0xcf8f,	// (0x000697a6) dialer_ne_clear_pane_g1

0xb25d,	// (0x00067a74) navi_pane_g2

0xb28b,	// (0x00067aa2) navi_pane_g3

0x0002,

0xf3e5,	// (0x0006bbfc) navi_pane_g

0xb33b,	// (0x00067b52) navi_pane_mv_g2

0xb362,	// (0x00067b79) navi_pane_mv_g5

0x34da,	// (0x0005fcf1) navi_pane_mv_t1

0xa735,	// (0x00066f4c) main_clock2_pane

0x54f1,	// (0x00061d08) main_clock2_list_pane_ParamLimits

0x54f1,	// (0x00061d08) main_clock2_list_pane

0x551b,	// (0x00061d32) main_clock2_pane_t1_ParamLimits

0x551b,	// (0x00061d32) main_clock2_pane_t1

0x553f,	// (0x00061d56) main_clock2_pane_t2_ParamLimits

0x553f,	// (0x00061d56) main_clock2_pane_t2

0x0004,

0xf67b,	// (0x0006be92) main_clock2_pane_t_ParamLimits

0xf67b,	// (0x0006be92) main_clock2_pane_t

0x559a,	// (0x00061db1) popup_clock_analogue_window_cp03_ParamLimits

0x559a,	// (0x00061db1) popup_clock_analogue_window_cp03

0x55b8,	// (0x00061dcf) popup_clock_digital_window_cp02_ParamLimits

0x55b8,	// (0x00061dcf) popup_clock_digital_window_cp02

0x5627,	// (0x00061e3e) main_clock2_list_single_pane_ParamLimits

0x5627,	// (0x00061e3e) main_clock2_list_single_pane

0xa903,	// (0x0006711a) list_highlight_pane_cp05

0xcfc9,	// (0x000697e0) main_clock2_list_single_pane_t1

0x1f8a,	// (0x0005e7a1) popup_toolbar_window_cp04_ParamLimits

0x4bcb,	// (0x000613e2) camera2_autofocus_pane_g2_ParamLimits

0x4bcb,	// (0x000613e2) camera2_autofocus_pane_g2

0x4bd7,	// (0x000613ee) camera2_autofocus_pane_g3_ParamLimits

0x4bd7,	// (0x000613ee) camera2_autofocus_pane_g3

0x4be3,	// (0x000613fa) camera2_autofocus_pane_g4_ParamLimits

0x4be3,	// (0x000613fa) camera2_autofocus_pane_g4

0x4bef,	// (0x00061406) camera2_autofocus_pane_g5_ParamLimits

0x4bef,	// (0x00061406) camera2_autofocus_pane_g5

0x0004,

0xf5e2,	// (0x0006bdf9) camera2_autofocus_pane_g_ParamLimits

0xf5e2,	// (0x0006bdf9) camera2_autofocus_pane_g

0x4d82,	// (0x00061599) camera2_autofocus_pane_cp_g2

0x4d8a,	// (0x000615a1) camera2_autofocus_pane_cp_g3

0x4d92,	// (0x000615a9) camera2_autofocus_pane_cp_g4

0x4d9a,	// (0x000615b1) camera2_autofocus_pane_cp_g5

0x0004,

0xf636,	// (0x0006be4d) camera2_autofocus_pane_cp_g

0x53c7,	// (0x00061bde) popup_dialer_spcha_window

0x97c1,	// (0x00065fd8) bg_popup_sub_pane_cp07

0xcfd7,	// (0x000697ee) list_spcha_pane

0xcfdf,	// (0x000697f6) list_single_spcha_pane_ParamLimits

0xcfdf,	// (0x000697f6) list_single_spcha_pane

0x97c1,	// (0x00065fd8) list_highlight_pane_cp06

0xcff0,	// (0x00069807) list_single_spcha_pane_t1

0xc1e2,	// (0x000689f9) popup_call2_audio_out_window_g4_ParamLimits

0xc1e2,	// (0x000689f9) popup_call2_audio_out_window_g4

0x0fdd,	// (0x0005d7f4) main_imed2_pane

0x4268,	// (0x00060a7f) popup_imed_adjust2_window

0x427b,	// (0x00060a92) popup_imed_trans_window_ParamLimits

0x427b,	// (0x00060a92) popup_imed_trans_window

0xc9eb,	// (0x00069202) popup_blid_sat_info2_window_t1

0xc9f9,	// (0x00069210) popup_blid_sat_info2_window_t2

0x000a,

0x0362,	// (0x0005cb79) popup_blid_sat_info2_window_t

0x56d1,	// (0x00061ee8) aid_size_cell_colour_35

0x56eb,	// (0x00061f02) aid_size_cell_colour_112

0x5702,	// (0x00061f19) aid_size_cell_effect

0xa5b3,	// (0x00066dca) bg_tb_trans_pane_cp02

0xb2e4,	// (0x00067afb) heading_imed_pane

0x571c,	// (0x00061f33) listscroll_imed_pane

0xcffe,	// (0x00069815) heading_imed_pane_g1

0xd006,	// (0x0006981d) heading_imed_pane_t1

0xd014,	// (0x0006982b) grid_imed_colour_35_pane_ParamLimits

0xd014,	// (0x0006982b) grid_imed_colour_35_pane

0x5728,	// (0x00061f3f) grid_imed_effect_pane

0xd02c,	// (0x00069843) list_imed_aspect_pane

0x5738,	// (0x00061f4f) scroll_pane_cp027_ParamLimits

0x5738,	// (0x00061f4f) scroll_pane_cp027

0x5744,	// (0x00061f5b) cell_imed_effect_pane_ParamLimits

0x5744,	// (0x00061f5b) cell_imed_effect_pane

0xd034,	// (0x0006984b) cell_imed_colour_pane_ParamLimits

0xd034,	// (0x0006984b) cell_imed_colour_pane

0xd076,	// (0x0006988d) cell_imed_colour_pane_g1_ParamLimits

0xd076,	// (0x0006988d) cell_imed_colour_pane_g1

0xd087,	// (0x0006989e) hgihlgiht_grid_pane_cp016_ParamLimits

0xd087,	// (0x0006989e) hgihlgiht_grid_pane_cp016

0x575c,	// (0x00061f73) cell_imed_effect_pane_g1

0x5764,	// (0x00061f7b) grid_highlight_pane_cp017

0xd098,	// (0x000698af) list_imed_single_pane_ParamLimits

0xd098,	// (0x000698af) list_imed_single_pane

0x97c1,	// (0x00065fd8) list_highlight_pane_cp07

0xd0ae,	// (0x000698c5) list_imed_aspect_pane_comp1_t1

0xc7a5,	// (0x00068fbc) bg_tb_trans_pane_cp05

0xd0d0,	// (0x000698e7) popup_imed_adjust2_window_g1

0xd0f7,	// (0x0006990e) popup_imed_adjust2_window_t1

0xd10f,	// (0x00069926) slider_imed_adjust_pane

0xd123,	// (0x0006993a) slider_imed_adjust_pane_g1

0xd133,	// (0x0006994a) slider_imed_adjust_pane_g2

0xd143,	// (0x0006995a) slider_imed_adjust_pane_g3

0xd154,	// (0x0006996b) slider_imed_adjust_pane_g4

0x0003,

0xf698,	// (0x0006beaf) slider_imed_adjust_pane_g

0x576d,	// (0x00061f84) aid_size_cell_clipart2

0x5779,	// (0x00061f90) grid_imed_clipart_pane

0xd165,	// (0x0006997c) scroll_pane_cp031

0x5783,	// (0x00061f9a) cell_imed_clipart_pane_ParamLimits

0x5783,	// (0x00061f9a) cell_imed_clipart_pane

0x57aa,	// (0x00061fc1) cell_imed_clipart_pane_g1

0x97c1,	// (0x00065fd8) grid_highlight_pane_cp014

0x54fd,	// (0x00061d14) main_clock2_pane_g1_ParamLimits

0x54fd,	// (0x00061d14) main_clock2_pane_g1

0x55d2,	// (0x00061de9) aid_call2_pane_cp10

0x55e4,	// (0x00061dfb) aid_call_pane_cp10

0xb1bc,	// (0x000679d3) popup_clock_analogue_window_cp10_g1

0xb1bc,	// (0x000679d3) popup_clock_analogue_window_cp10_g2

0x55f6,	// (0x00061e0d) popup_clock_analogue_window_cp10_g3

0x55f6,	// (0x00061e0d) popup_clock_analogue_window_cp10_g4

0xb1bc,	// (0x000679d3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf686,	// (0x0006be9d) popup_clock_analogue_window_cp10_g

0x5608,	// (0x00061e1f) popup_clock_analogue_window_cp10_t1

0x5639,	// (0x00061e50) clock_digital_number_pane_cp10_ParamLimits

0x5639,	// (0x00061e50) clock_digital_number_pane_cp10

0x5651,	// (0x00061e68) clock_digital_number_pane_cp11_ParamLimits

0x5651,	// (0x00061e68) clock_digital_number_pane_cp11

0x5669,	// (0x00061e80) clock_digital_number_pane_cp12_ParamLimits

0x5669,	// (0x00061e80) clock_digital_number_pane_cp12

0x5681,	// (0x00061e98) clock_digital_number_pane_cp13_ParamLimits

0x5681,	// (0x00061e98) clock_digital_number_pane_cp13

0x5699,	// (0x00061eb0) clock_digital_separator_pane_cp10_ParamLimits

0x5699,	// (0x00061eb0) clock_digital_separator_pane_cp10

0x56b1,	// (0x00061ec8) popup_clock_digital_window_cp02_t1_ParamLimits

0x56b1,	// (0x00061ec8) popup_clock_digital_window_cp02_t1

0xa59d,	// (0x00066db4) clock_digital_number_pane_cp10_g1

0xa59d,	// (0x00066db4) clock_digital_number_pane_cp10_g2

0x0001,

0xf6a1,	// (0x0006beb8) clock_digital_number_pane_cp10_g

0xa59d,	// (0x00066db4) clock_digital_separator_pane_cp10_g1

0xa59d,	// (0x00066db4) clock_digital_separator_pane_g2_cp10

0xb36a,	// (0x00067b81) navi_pane_vded_g4

0xb373,	// (0x00067b8a) navi_pane_vded_g5

0xb37c,	// (0x00067b93) navi_pane_vded_t1

0x0fdd,	// (0x0005d7f4) main_vded_pane

0x57b3,	// (0x00061fca) main_vded_pane_g1

0x57bf,	// (0x00061fd6) main_vded_pane_g2

0x57c9,	// (0x00061fe0) main_vded_pane_g3

0x0002,

0xf6a6,	// (0x0006bebd) main_vded_pane_g

0x57d3,	// (0x00061fea) main_vded_pane_t1

0x57e1,	// (0x00061ff8) main_vded_pane_t2

0x0001,

0xf6ad,	// (0x0006bec4) main_vded_pane_t

0x57ef,	// (0x00062006) vded_slider_pane

0x57f9,	// (0x00062010) vded_video_pane

0xd16d,	// (0x00069984) vded_video_pane_g1

0x5803,	// (0x0006201a) vded_video_pane_g2

0xcbaf,	// (0x000693c6) vded_video_pane_g3

0x0002,

0xf6b2,	// (0x0006bec9) vded_video_pane_g

0xd177,	// (0x0006998e) vded_slider_pane_g1

0xd180,	// (0x00069997) vded_slider_pane_g2

0xd189,	// (0x000699a0) vded_slider_pane_g3

0xd192,	// (0x000699a9) vded_slider_pane_g4

0xd19b,	// (0x000699b2) vded_slider_pane_g5

0x0004,

0xf6b9,	// (0x0006bed0) vded_slider_pane_g

0x52c8,	// (0x00061adf) mup3_rocker_pane_ParamLimits

0x52c8,	// (0x00061adf) mup3_rocker_pane

0x580c,	// (0x00062023) mup3_control_keys_pane_g1

0x5814,	// (0x0006202b) mup3_control_keys_pane_g2

0x581c,	// (0x00062033) mup3_control_keys_pane_g3

0x5824,	// (0x0006203b) mup3_control_keys_pane_g4

0x0003,

0xf6c4,	// (0x0006bedb) mup3_control_keys_pane_g

0x0f91,	// (0x0005d7a8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f91,	// (0x0005d7a8) popup_toolbar2_fixed_window_cp01

0x52e2,	// (0x00061af9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x52e2,	// (0x00061af9) popup_toolbar2_fixed_window_cp02

0xbb21,	// (0x00068338) popup_call2_audio_second_window_t4_ParamLimits

0xbb21,	// (0x00068338) popup_call2_audio_second_window_t4

0xc04f,	// (0x00068866) popup_call2_audio_first_window_t6_ParamLimits

0xc04f,	// (0x00068866) popup_call2_audio_first_window_t6

0xc2e5,	// (0x00068afc) popup_call2_audio_out_window_t6_ParamLimits

0xc2e5,	// (0x00068afc) popup_call2_audio_out_window_t6

0x0fdd,	// (0x0005d7f4) main_vitu_pane

0x5834,	// (0x0006204b) aid_size_cell_itu_ParamLimits

0x5834,	// (0x0006204b) aid_size_cell_itu

0xdbd6,	// (0x0006a3ed) bg_popup_window_pane_cp08_ParamLimits

0xdbd6,	// (0x0006a3ed) bg_popup_window_pane_cp08

0x5842,	// (0x00062059) field_vitu_entry_pane_ParamLimits

0x5842,	// (0x00062059) field_vitu_entry_pane

0x5851,	// (0x00062068) grid_vitu_function_pane_ParamLimits

0x5851,	// (0x00062068) grid_vitu_function_pane

0x5861,	// (0x00062078) grid_vitu_itu_pane_ParamLimits

0x5861,	// (0x00062078) grid_vitu_itu_pane

0x5871,	// (0x00062088) cell_vitu_itu_pane_ParamLimits

0x5871,	// (0x00062088) cell_vitu_itu_pane

0x5886,	// (0x0006209d) cell_vitu_function_pane_ParamLimits

0x5886,	// (0x0006209d) cell_vitu_function_pane

0xa5b3,	// (0x00066dca) bg_popup_sub_pane_cp08_ParamLimits

0xa5b3,	// (0x00066dca) bg_popup_sub_pane_cp08

0x589a,	// (0x000620b1) field_vitu_entry_pane_t1_ParamLimits

0x589a,	// (0x000620b1) field_vitu_entry_pane_t1

0xd1bc,	// (0x000699d3) field_vitu_entry_pane_t2_ParamLimits

0xd1bc,	// (0x000699d3) field_vitu_entry_pane_t2

0x0001,

0xf6d2,	// (0x0006bee9) field_vitu_entry_pane_t_ParamLimits

0xf6d2,	// (0x0006bee9) field_vitu_entry_pane_t

0xd1e5,	// (0x000699fc) bg_button_pane_cp05_ParamLimits

0xd1e5,	// (0x000699fc) bg_button_pane_cp05

0x58b7,	// (0x000620ce) cell_vitu_itu_pane_g1

0x58cf,	// (0x000620e6) cell_vitu_itu_pane_t1_ParamLimits

0x58cf,	// (0x000620e6) cell_vitu_itu_pane_t1

0x58e1,	// (0x000620f8) cell_vitu_itu_pane_t2_ParamLimits

0x58e1,	// (0x000620f8) cell_vitu_itu_pane_t2

0x0002,

0xf6d7,	// (0x0006beee) cell_vitu_itu_pane_t_ParamLimits

0xf6d7,	// (0x0006beee) cell_vitu_itu_pane_t

0xd1f3,	// (0x00069a0a) bg_button_pane_cp07

0x5924,	// (0x0006213b) cell_vitu_function_pane_g1

0x125c,	// (0x0005da73) main_calc_pane_g1

0x0d4e,	// (0x0005d565) aid_visual_content_pane

0x0fdd,	// (0x0005d7f4) main_vradio_pane

0x592d,	// (0x00062144) main_vradio_pane_g1_ParamLimits

0x592d,	// (0x00062144) main_vradio_pane_g1

0xd1fd,	// (0x00069a14) main_vradio_pane_g2_ParamLimits

0xd1fd,	// (0x00069a14) main_vradio_pane_g2

0x0001,

0xf6de,	// (0x0006bef5) main_vradio_pane_g_ParamLimits

0xf6de,	// (0x0006bef5) main_vradio_pane_g

0x593d,	// (0x00062154) main_vradio_pane_t1_ParamLimits

0x593d,	// (0x00062154) main_vradio_pane_t1

0x594f,	// (0x00062166) main_vradio_pane_t2_ParamLimits

0x594f,	// (0x00062166) main_vradio_pane_t2

0xd20a,	// (0x00069a21) main_vradio_pane_t3_ParamLimits

0xd20a,	// (0x00069a21) main_vradio_pane_t3

0x0002,

0xf6e3,	// (0x0006befa) main_vradio_pane_t_ParamLimits

0xf6e3,	// (0x0006befa) main_vradio_pane_t

0x5961,	// (0x00062178) vradio_rocker_control_pane_ParamLimits

0x5961,	// (0x00062178) vradio_rocker_control_pane

0x596d,	// (0x00062184) vradio_station_info_pane_ParamLimits

0x596d,	// (0x00062184) vradio_station_info_pane

0xd21e,	// (0x00069a35) vradio_frequency_info_pane_ParamLimits

0xd21e,	// (0x00069a35) vradio_frequency_info_pane

0xcbaf,	// (0x000693c6) vradio_station_info_pane_g1

0xd22d,	// (0x00069a44) vradio_station_info_pane_t1_ParamLimits

0xd22d,	// (0x00069a44) vradio_station_info_pane_t1

0xd24f,	// (0x00069a66) vradio_station_info_pane_t2_ParamLimits

0xd24f,	// (0x00069a66) vradio_station_info_pane_t2

0x0001,

0x04f8,	// (0x0005cd0f) vradio_station_info_pane_t_ParamLimits

0x04f8,	// (0x0005cd0f) vradio_station_info_pane_t

0xd261,	// (0x00069a78) vradio_tuning_pane

0xd269,	// (0x00069a80) vradio_rocker_control_pane_g1

0xd271,	// (0x00069a88) vradio_rocker_control_pane_g2

0xd279,	// (0x00069a90) vradio_rocker_control_pane_g3

0xd281,	// (0x00069a98) vradio_rocker_control_pane_g4

0xd289,	// (0x00069aa0) vradio_rocker_control_pane_g5

0x0004,

0x04fd,	// (0x0005cd14) vradio_rocker_control_pane_g

0x597c,	// (0x00062193) vradio_frequency_info_pane_g1

0xd291,	// (0x00069aa8) vradio_frequency_info_pane_t1_ParamLimits

0xd291,	// (0x00069aa8) vradio_frequency_info_pane_t1

0x5986,	// (0x0006219d) vradio_tuning_pane_g1

0x598f,	// (0x000621a6) vradio_tuning_pane_t1

0x0d97,	// (0x0005d5ae) area_side_right_pane_ParamLimits

0x0d97,	// (0x0005d5ae) area_side_right_pane

0xc760,	// (0x00068f77) status_small_pane_g1

0xc768,	// (0x00068f7f) status_small_pane_g2

0xc771,	// (0x00068f88) status_small_pane_g3

0xc77a,	// (0x00068f91) status_small_pane_g4

0x0003,

0x02b8,	// (0x0005cacf) status_small_pane_g

0xc783,	// (0x00068f9a) status_small_pane_t1

0x0fdd,	// (0x0005d7f4) main_video3_pane

0xd2a5,	// (0x00069abc) cams_zoom_vslider_pane

0xd2ad,	// (0x00069ac4) image3_wide_pane_ParamLimits

0xd2ad,	// (0x00069ac4) image3_wide_pane

0xd2c7,	// (0x00069ade) image3_wide_small_pane

0xd2d3,	// (0x00069aea) main_video3_pane_g1_ParamLimits

0xd2d3,	// (0x00069aea) main_video3_pane_g1

0xd2ef,	// (0x00069b06) main_video3_pane_g2_ParamLimits

0xd2ef,	// (0x00069b06) main_video3_pane_g2

0x0001,

0x0508,	// (0x0005cd1f) main_video3_pane_g_ParamLimits

0x0508,	// (0x0005cd1f) main_video3_pane_g

0xd30b,	// (0x00069b22) main_video3_pane_t1_ParamLimits

0xd30b,	// (0x00069b22) main_video3_pane_t1

0xd336,	// (0x00069b4d) main_video3_pane_t2_ParamLimits

0xd336,	// (0x00069b4d) main_video3_pane_t2

0xd361,	// (0x00069b78) main_video3_pane_t3_ParamLimits

0xd361,	// (0x00069b78) main_video3_pane_t3

0x0002,

0x050d,	// (0x0005cd24) main_video3_pane_t_ParamLimits

0x050d,	// (0x0005cd24) main_video3_pane_t

0xd38e,	// (0x00069ba5) cams_zoom_vslider_pane_g1

0xd397,	// (0x00069bae) cams_zoom_vslider_pane_g2

0x0001,

0x0514,	// (0x0005cd2b) cams_zoom_vslider_pane_g

0xd39f,	// (0x00069bb6) small_slider_vertical_pane

0xcbaf,	// (0x000693c6) small_slider_vertical_pane_g1

0xcbaf,	// (0x000693c6) small_slider_vertical_pane_g2

0xd3a7,	// (0x00069bbe) small_slider_vertical_pane_g3

0x0002,

0x0519,	// (0x0005cd30) small_slider_vertical_pane_g

0x0fdd,	// (0x0005d7f4) main_hwr_training_pane

0xd3b0,	// (0x00069bc7) hwr_training_instruct_pane_ParamLimits

0xd3b0,	// (0x00069bc7) hwr_training_instruct_pane

0x599e,	// (0x000621b5) hwr_training_navi_pane_ParamLimits

0x599e,	// (0x000621b5) hwr_training_navi_pane

0x59b8,	// (0x000621cf) hwr_training_write_pane_ParamLimits

0x59b8,	// (0x000621cf) hwr_training_write_pane

0x97c1,	// (0x00065fd8) bg_frame_shadow_pane

0xd3e7,	// (0x00069bfe) hwr_training_write_pane_g1

0xd3ef,	// (0x00069c06) hwr_training_write_pane_g2

0xd3f7,	// (0x00069c0e) hwr_training_write_pane_g3

0xd3ff,	// (0x00069c16) hwr_training_write_pane_g4

0xd407,	// (0x00069c1e) hwr_training_write_pane_g5

0xd40f,	// (0x00069c26) hwr_training_write_pane_g6

0xd417,	// (0x00069c2e) hwr_training_write_pane_g7

0x0006,

0x0520,	// (0x0005cd37) hwr_training_write_pane_g

0x59f0,	// (0x00062207) hwr_training_navi_pane_g1_ParamLimits

0x59f0,	// (0x00062207) hwr_training_navi_pane_g1

0x5a02,	// (0x00062219) hwr_training_navi_pane_g2_ParamLimits

0x5a02,	// (0x00062219) hwr_training_navi_pane_g2

0x5a14,	// (0x0006222b) hwr_training_navi_pane_g3_ParamLimits

0x5a14,	// (0x0006222b) hwr_training_navi_pane_g3

0x5a24,	// (0x0006223b) hwr_training_navi_pane_g4_ParamLimits

0x5a24,	// (0x0006223b) hwr_training_navi_pane_g4

0x0004,

0xf6ea,	// (0x0006bf01) hwr_training_navi_pane_g_ParamLimits

0xf6ea,	// (0x0006bf01) hwr_training_navi_pane_g

0x5a3e,	// (0x00062255) hwr_training_navi_pane_t1

0x5a4c,	// (0x00062263) list_single_hwr_training_instruct_pane_ParamLimits

0x5a4c,	// (0x00062263) list_single_hwr_training_instruct_pane

0xd41f,	// (0x00069c36) list_single_hwr_training_instruct_pane_t1

0xcaef,	// (0x00069306) bg_frame_shadow_pane_g1

0xd42e,	// (0x00069c45) bg_frame_shadow_pane_g2

0xd436,	// (0x00069c4d) bg_frame_shadow_pane_g3

0xd43e,	// (0x00069c55) bg_frame_shadow_pane_g4

0xd446,	// (0x00069c5d) bg_frame_shadow_pane_g5

0xd44e,	// (0x00069c65) bg_frame_shadow_pane_g6

0xd456,	// (0x00069c6d) bg_frame_shadow_pane_g7

0xa800,	// (0x00067017) bg_frame_shadow_pane_g8

0x0007,

0xf6f5,	// (0x0006bf0c) bg_frame_shadow_pane_g

0x0fdd,	// (0x0005d7f4) main_video_tele_dialer_pane

0x5a7b,	// (0x00062292) aid_size_cell_video_keypad_ParamLimits

0x5a7b,	// (0x00062292) aid_size_cell_video_keypad

0x5a8b,	// (0x000622a2) grid_video_dialer_keypad_pane_ParamLimits

0x5a8b,	// (0x000622a2) grid_video_dialer_keypad_pane

0x5abf,	// (0x000622d6) video_down_pane_cp_ParamLimits

0x5abf,	// (0x000622d6) video_down_pane_cp

0x5ae9,	// (0x00062300) cell_video_dialer_keypad_pane_ParamLimits

0x5ae9,	// (0x00062300) cell_video_dialer_keypad_pane

0xd45e,	// (0x00069c75) bg_button_pane_cp08_ParamLimits

0xd45e,	// (0x00069c75) bg_button_pane_cp08

0x5afe,	// (0x00062315) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5afe,	// (0x00062315) cell_video_dialer_keypad_pane_g1

0x52bc,	// (0x00061ad3) mup3_rocker2_pane_ParamLimits

0x52bc,	// (0x00061ad3) mup3_rocker2_pane

0xcbaf,	// (0x000693c6) mup3_rocker2_pane_g1

0x41dc,	// (0x000609f3) main_dialer2_pane

0x0fdd,	// (0x0005d7f4) main_mp4_pane

0x5b41,	// (0x00062358) main_mp4_pane_g1_ParamLimits

0x5b41,	// (0x00062358) main_mp4_pane_g1

0x5b4f,	// (0x00062366) main_mp4_pane_g2_ParamLimits

0x5b4f,	// (0x00062366) main_mp4_pane_g2

0x5b5d,	// (0x00062374) main_mp4_pane_g3_ParamLimits

0x5b5d,	// (0x00062374) main_mp4_pane_g3

0x5ba2,	// (0x000623b9) main_mp4_pane_g4_ParamLimits

0x5ba2,	// (0x000623b9) main_mp4_pane_g4

0x5bca,	// (0x000623e1) main_mp4_pane_g5_ParamLimits

0x5bca,	// (0x000623e1) main_mp4_pane_g5

0x0005,

0xf715,	// (0x0006bf2c) main_mp4_pane_g_ParamLimits

0xf715,	// (0x0006bf2c) main_mp4_pane_g

0x5c1a,	// (0x00062431) main_mp4_pane_t1_ParamLimits

0x5c1a,	// (0x00062431) main_mp4_pane_t1

0x5c76,	// (0x0006248d) main_mp4_pane_t2_ParamLimits

0x5c76,	// (0x0006248d) main_mp4_pane_t2

0xd46a,	// (0x00069c81) main_mp4_pane_t3_ParamLimits

0xd46a,	// (0x00069c81) main_mp4_pane_t3

0x5cc8,	// (0x000624df) main_mp4_pane_t4_ParamLimits

0x5cc8,	// (0x000624df) main_mp4_pane_t4

0x0003,

0xf722,	// (0x0006bf39) main_mp4_pane_t_ParamLimits

0xf722,	// (0x0006bf39) main_mp4_pane_t

0x5d0c,	// (0x00062523) mp4_progress_pane_ParamLimits

0x5d0c,	// (0x00062523) mp4_progress_pane

0x5d56,	// (0x0006256d) mp4_rocker_pane_ParamLimits

0x5d56,	// (0x0006256d) mp4_rocker_pane

0xd492,	// (0x00069ca9) mp4_progress_pane_t1

0xd4ab,	// (0x00069cc2) mp4_progress_pane_t2

0x0001,

0x0570,	// (0x0005cd87) mp4_progress_pane_t

0xd4c4,	// (0x00069cdb) mup_progress_pane_cp04

0xdbe4,	// (0x0006a3fb) mp4_rocker_pane_g1

0x5d76,	// (0x0006258d) aid_cell_size_keypad2_ParamLimits

0x5d76,	// (0x0006258d) aid_cell_size_keypad2

0x5d86,	// (0x0006259d) dialer2_ne_pane_ParamLimits

0x5d86,	// (0x0006259d) dialer2_ne_pane

0x5d94,	// (0x000625ab) grid_dialer2_keypad_pane_ParamLimits

0x5d94,	// (0x000625ab) grid_dialer2_keypad_pane

0xdbee,	// (0x0006a405) bg_popup_call_pane_cp07_ParamLimits

0xdbee,	// (0x0006a405) bg_popup_call_pane_cp07

0x5da4,	// (0x000625bb) dialer2_ne_pane_t1_ParamLimits

0x5da4,	// (0x000625bb) dialer2_ne_pane_t1

0x5dc9,	// (0x000625e0) cell_dialer2_keypad_pane_ParamLimits

0x5dc9,	// (0x000625e0) cell_dialer2_keypad_pane

0xd4e2,	// (0x00069cf9) bg_button_pane_pane_cp04_ParamLimits

0xd4e2,	// (0x00069cf9) bg_button_pane_pane_cp04

0x5dde,	// (0x000625f5) cell_dialer2_keypad_pane_g1_ParamLimits

0x5dde,	// (0x000625f5) cell_dialer2_keypad_pane_g1

0x1e4c,	// (0x0005e663) aid_placing_vt_set_content_ParamLimits

0x1e4c,	// (0x0005e663) aid_placing_vt_set_content

0x1e78,	// (0x0005e68f) aid_placing_vt_set_title_ParamLimits

0x1e78,	// (0x0005e68f) aid_placing_vt_set_title

0x0fdd,	// (0x0005d7f4) main_image3_pane

0x5e78,	// (0x0006268f) area_side_right_pane_cp01_ParamLimits

0x5e78,	// (0x0006268f) area_side_right_pane_cp01

0x5ea5,	// (0x000626bc) main_image3_pane_g1_ParamLimits

0x5ea5,	// (0x000626bc) main_image3_pane_g1

0x5eb3,	// (0x000626ca) main_image3_pane_g2_ParamLimits

0x5eb3,	// (0x000626ca) main_image3_pane_g2

0x5ecc,	// (0x000626e3) main_image3_pane_g3_ParamLimits

0x5ecc,	// (0x000626e3) main_image3_pane_g3

0x5ee5,	// (0x000626fc) main_image3_pane_g4_ParamLimits

0x5ee5,	// (0x000626fc) main_image3_pane_g4

0x0003,

0xf735,	// (0x0006bf4c) main_image3_pane_g_ParamLimits

0xf735,	// (0x0006bf4c) main_image3_pane_g

0x5efe,	// (0x00062715) main_image3_pane_t1_ParamLimits

0x5efe,	// (0x00062715) main_image3_pane_t1

0x5f23,	// (0x0006273a) main_image3_pane_t2_ParamLimits

0x5f23,	// (0x0006273a) main_image3_pane_t2

0x5f42,	// (0x00062759) main_image3_pane_t3_ParamLimits

0x5f42,	// (0x00062759) main_image3_pane_t3

0x0003,

0xf73e,	// (0x0006bf55) main_image3_pane_t_ParamLimits

0xf73e,	// (0x0006bf55) main_image3_pane_t

0xdbd6,	// (0x0006a3ed) grid_sctrl_middle_pane_cp01_ParamLimits

0xdbd6,	// (0x0006a3ed) grid_sctrl_middle_pane_cp01

0x5fa3,	// (0x000627ba) cell_sctrl_middle_pane_cp01_ParamLimits

0x5fa3,	// (0x000627ba) cell_sctrl_middle_pane_cp01

0x5fb4,	// (0x000627cb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5fb4,	// (0x000627cb) cell_sctrl_middle_pane_cp01_g1

0x0fdd,	// (0x0005d7f4) main_call4_pane

0x5fc1,	// (0x000627d8) aid_size_button_call4_ParamLimits

0x5fc1,	// (0x000627d8) aid_size_button_call4

0x5ff1,	// (0x00062808) call4_windows_pane_ParamLimits

0x5ff1,	// (0x00062808) call4_windows_pane

0x600b,	// (0x00062822) grid_call4_button_pane_ParamLimits

0x600b,	// (0x00062822) grid_call4_button_pane

0xd4ee,	// (0x00069d05) call4_windows_conf_pane

0xd503,	// (0x00069d1a) popup_call4_audio_first_window_ParamLimits

0xd503,	// (0x00069d1a) popup_call4_audio_first_window

0xd54f,	// (0x00069d66) popup_call4_audio_second_window_ParamLimits

0xd54f,	// (0x00069d66) popup_call4_audio_second_window

0xd563,	// (0x00069d7a) popup_call4_audio_wait_window_ParamLimits

0xd563,	// (0x00069d7a) popup_call4_audio_wait_window

0x602f,	// (0x00062846) cell_call4_button_pane_ParamLimits

0x602f,	// (0x00062846) cell_call4_button_pane

0x6054,	// (0x0006286b) bg_button_pane_cp09_ParamLimits

0x6054,	// (0x0006286b) bg_button_pane_cp09

0x6060,	// (0x00062877) cell_call4_button_pane_g1_ParamLimits

0x6060,	// (0x00062877) cell_call4_button_pane_g1

0x606d,	// (0x00062884) cell_call4_button_pane_t1_ParamLimits

0x606d,	// (0x00062884) cell_call4_button_pane_t1

0xd5ab,	// (0x00069dc2) popup_call4_audio_conf_window_ParamLimits

0xd5ab,	// (0x00069dc2) popup_call4_audio_conf_window

0x52ef,	// (0x00061b06) mup3_progress_pane_t1_ParamLimits

0x530e,	// (0x00061b25) mup3_progress_pane_t2_ParamLimits

0xce8a,	// (0x000696a1) mup3_progress_pane_t3_ParamLimits

0xf65f,	// (0x0006be76) mup3_progress_pane_t_ParamLimits

0xcea7,	// (0x000696be) mup_progress_pane_cp03_ParamLimits

0x582c,	// (0x00062043) mup3_control_keys_pane_g4_copy1

0x5d3a,	// (0x00062551) mp4_rocker2_pane_ParamLimits

0x5d3a,	// (0x00062551) mp4_rocker2_pane

0xd5bf,	// (0x00069dd6) mp4_rocker2_pane_g1

0xd5c7,	// (0x00069dde) mp4_rocker2_pane_g2

0x607f,	// (0x00062896) mp4_rocker2_pane_g3

0x6087,	// (0x0006289e) mp4_rocker2_pane_g4

0x608f,	// (0x000628a6) mp4_rocker2_pane_g5

0x0004,

0xf747,	// (0x0006bf5e) mp4_rocker2_pane_g

0x0fdd,	// (0x0005d7f4) main_camera4_pane

0x0fdd,	// (0x0005d7f4) main_video4_pane

0x5a9b,	// (0x000622b2) main_video_tele_dialer_pane_t1_ParamLimits

0x5a9b,	// (0x000622b2) main_video_tele_dialer_pane_t1

0x5aad,	// (0x000622c4) main_video_tele_dialer_pane_t2_ParamLimits

0x5aad,	// (0x000622c4) main_video_tele_dialer_pane_t2

0x0001,

0xf706,	// (0x0006bf1d) main_video_tele_dialer_pane_t_ParamLimits

0xf706,	// (0x0006bf1d) main_video_tele_dialer_pane_t

0x60af,	// (0x000628c6) cam4_autofocus_pane_ParamLimits

0x60af,	// (0x000628c6) cam4_autofocus_pane

0x60c9,	// (0x000628e0) cam4_image_uncrop_pane_ParamLimits

0x60c9,	// (0x000628e0) cam4_image_uncrop_pane

0x60e0,	// (0x000628f7) cam4_indicators_pane_ParamLimits

0x60e0,	// (0x000628f7) cam4_indicators_pane

0x60fc,	// (0x00062913) main_camera4_pane_g1_ParamLimits

0x60fc,	// (0x00062913) main_camera4_pane_g1

0x6108,	// (0x0006291f) main_camera4_pane_g2_ParamLimits

0x6108,	// (0x0006291f) main_camera4_pane_g2

0x6108,	// (0x0006291f) main_camera4_pane_g3_ParamLimits

0x6108,	// (0x0006291f) main_camera4_pane_g3

0x6114,	// (0x0006292b) main_camera4_pane_g4_ParamLimits

0x6114,	// (0x0006292b) main_camera4_pane_g4

0x6120,	// (0x00062937) main_camera4_pane_g5_ParamLimits

0x6120,	// (0x00062937) main_camera4_pane_g5

0x0005,

0xf752,	// (0x0006bf69) main_camera4_pane_g_ParamLimits

0xf752,	// (0x0006bf69) main_camera4_pane_g

0x613a,	// (0x00062951) main_camera4_pane_t1_ParamLimits

0x613a,	// (0x00062951) main_camera4_pane_t1

0x6182,	// (0x00062999) bg_tb_trans_pane_cp06

0x6198,	// (0x000629af) cam4_indicators_pane_g1

0x61a9,	// (0x000629c0) cam4_indicators_pane_g2

0x0002,

0xf76d,	// (0x0006bf84) cam4_indicators_pane_g

0x61c7,	// (0x000629de) cam4_indicators_pane_t1

0x61f1,	// (0x00062a08) main_video4_pane_g1_ParamLimits

0x61f1,	// (0x00062a08) main_video4_pane_g1

0x61fd,	// (0x00062a14) main_video4_pane_g2_ParamLimits

0x61fd,	// (0x00062a14) main_video4_pane_g2

0x6209,	// (0x00062a20) main_video4_pane_g3_ParamLimits

0x6209,	// (0x00062a20) main_video4_pane_g3

0x6215,	// (0x00062a2c) main_video4_pane_g4_ParamLimits

0x6215,	// (0x00062a2c) main_video4_pane_g4

0x0004,

0xf774,	// (0x0006bf8b) main_video4_pane_g_ParamLimits

0xf774,	// (0x0006bf8b) main_video4_pane_g

0x6235,	// (0x00062a4c) vid4_indicators_pane_ParamLimits

0x6235,	// (0x00062a4c) vid4_indicators_pane

0x6254,	// (0x00062a6b) video4_image_uncrop_cif_pane_ParamLimits

0x6254,	// (0x00062a6b) video4_image_uncrop_cif_pane

0x6263,	// (0x00062a7a) video4_image_uncrop_nhd_pane_ParamLimits

0x6263,	// (0x00062a7a) video4_image_uncrop_nhd_pane

0x60c9,	// (0x000628e0) video4_image_uncrop_vga_pane_ParamLimits

0x60c9,	// (0x000628e0) video4_image_uncrop_vga_pane

0x41ce,	// (0x000609e5) bg_tb_trans_pane_cp07

0x6278,	// (0x00062a8f) vid4_indicators_pane_g1

0x628c,	// (0x00062aa3) vid4_indicators_pane_g2

0x62a0,	// (0x00062ab7) vid4_indicators_pane_g3

0x0004,

0xf77f,	// (0x0006bf96) vid4_indicators_pane_g

0x62cd,	// (0x00062ae4) vid4_indicators_pane_t1

0x62e4,	// (0x00062afb) cam4_autofocus_pane_g1

0x62ec,	// (0x00062b03) cam4_autofocus_pane_g2

0x62f4,	// (0x00062b0b) cam4_autofocus_pane_g3

0x0002,

0xf78a,	// (0x0006bfa1) cam4_autofocus_pane_g

0x62fc,	// (0x00062b13) cam4_autofocus_pane_g3_copy1

0x5acd,	// (0x000622e4) video_down_pane_cp_t1

0x5adb,	// (0x000622f2) video_down_pane_cp_t2

0x0001,

0xf70b,	// (0x0006bf22) video_down_pane_cp_t

0x0fc3,	// (0x0005d7da) popup_vitu2_window_ParamLimits

0x0fc3,	// (0x0005d7da) popup_vitu2_window

0x6304,	// (0x00062b1b) aid_size_cell2_itu2_ParamLimits

0x6304,	// (0x00062b1b) aid_size_cell2_itu2

0x6326,	// (0x00062b3d) aid_size_cell_itu2_ParamLimits

0x6326,	// (0x00062b3d) aid_size_cell_itu2

0x636a,	// (0x00062b81) bg_popup_window_pane_cp09_ParamLimits

0x636a,	// (0x00062b81) bg_popup_window_pane_cp09

0x6378,	// (0x00062b8f) field_vitu2_entry_pane_ParamLimits

0x6378,	// (0x00062b8f) field_vitu2_entry_pane

0x6396,	// (0x00062bad) grid_vitu2_function_pane_ParamLimits

0x6396,	// (0x00062bad) grid_vitu2_function_pane

0x63d6,	// (0x00062bed) grid_vitu2_itu_pane_ParamLimits

0x63d6,	// (0x00062bed) grid_vitu2_itu_pane

0x644e,	// (0x00062c65) cell_vitu2_itu_pane_ParamLimits

0x644e,	// (0x00062c65) cell_vitu2_itu_pane

0x6467,	// (0x00062c7e) cell_vitu2_function_pane_ParamLimits

0x6467,	// (0x00062c7e) cell_vitu2_function_pane

0xd5cf,	// (0x00069de6) bg_popup_call_pane_cp08_ParamLimits

0xd5cf,	// (0x00069de6) bg_popup_call_pane_cp08

0xd5e6,	// (0x00069dfd) field_vitu2_entry_pane_g1

0xd5f2,	// (0x00069e09) field_vitu2_entry_pane_g2

0x0002,

0x05db,	// (0x0005cdf2) field_vitu2_entry_pane_g

0x64a8,	// (0x00062cbf) field_vitu2_entry_pane_t1_ParamLimits

0x64a8,	// (0x00062cbf) field_vitu2_entry_pane_t1

0x9e10,	// (0x00066627) field_vitu2_entry_pane_t2_ParamLimits

0x9e10,	// (0x00066627) field_vitu2_entry_pane_t2

0x0001,

0xf791,	// (0x0006bfa8) field_vitu2_entry_pane_t_ParamLimits

0xf791,	// (0x0006bfa8) field_vitu2_entry_pane_t

0x64db,	// (0x00062cf2) bg_button_pane_cp010_ParamLimits

0x64db,	// (0x00062cf2) bg_button_pane_cp010

0x64e9,	// (0x00062d00) cell_vitu2_itu_pane_g1

0x6509,	// (0x00062d20) cell_vitu2_itu_pane_t1_ParamLimits

0x6509,	// (0x00062d20) cell_vitu2_itu_pane_t1

0x0c32,	// (0x0005d449) cell_vitu2_itu_pane_t2_ParamLimits

0x0c32,	// (0x0005d449) cell_vitu2_itu_pane_t2

0x0002,

0xf79b,	// (0x0006bfb2) cell_vitu2_itu_pane_t_ParamLimits

0xf79b,	// (0x0006bfb2) cell_vitu2_itu_pane_t

0x41ce,	// (0x000609e5) bg_button_pane_cp011

0x6555,	// (0x00062d6c) cell_vitu2_function_pane_g1

0x0fdd,	// (0x0005d7f4) main_myfav_hc_pane

0x5f84,	// (0x0006279b) popup_image3_note_pane_ParamLimits

0x5f84,	// (0x0006279b) popup_image3_note_pane

0x5f92,	// (0x000627a9) popup_image3_tool_bar_pane_ParamLimits

0x5f92,	// (0x000627a9) popup_image3_tool_bar_pane

0x0ca8,	// (0x0005d4bf) cell_vitu2_itu_pane_t3_ParamLimits

0x0ca8,	// (0x0005d4bf) cell_vitu2_itu_pane_t3

0x97c1,	// (0x00065fd8) bg_popup_trans_pane

0xd614,	// (0x00069e2b) grid_image3_tool_bar_pane

0xd61e,	// (0x00069e35) bg_popup_trans_pane_g1

0xab5c,	// (0x00067373) bg_popup_trans_pane_g2

0xd626,	// (0x00069e3d) bg_popup_trans_pane_g3

0xd62e,	// (0x00069e45) bg_popup_trans_pane_g4

0xd636,	// (0x00069e4d) bg_popup_trans_pane_g5

0xd63e,	// (0x00069e55) bg_popup_trans_pane_g6

0xd646,	// (0x00069e5d) bg_popup_trans_pane_g7

0xd64e,	// (0x00069e65) bg_popup_trans_pane_g8

0xab3c,	// (0x00067353) bg_popup_trans_pane_g9

0x0008,

0xf7a2,	// (0x0006bfb9) bg_popup_trans_pane_g

0xd656,	// (0x00069e6d) cell_image3_tool_bar_pane_ParamLimits

0xd656,	// (0x00069e6d) cell_image3_tool_bar_pane

0xcbaf,	// (0x000693c6) cell_image3_tool_bar_pane_g1

0x97c1,	// (0x00065fd8) bg_popup_trans_pane_cp1

0xd66a,	// (0x00069e81) popup_image3_note_pane_t1

0xd678,	// (0x00069e8f) popup_image3_note_pane_t2

0xd686,	// (0x00069e9d) popup_image3_note_pane_t3

0x0002,

0x0606,	// (0x0005ce1d) popup_image3_note_pane_t

0xd694,	// (0x00069eab) popup_image3_note_pane_t3_copy1

0x6569,	// (0x00062d80) bg_myfav_hc_instruction_pane_ParamLimits

0x6569,	// (0x00062d80) bg_myfav_hc_instruction_pane

0x6581,	// (0x00062d98) cell_myfav_contact_pane_ParamLimits

0x6581,	// (0x00062d98) cell_myfav_contact_pane

0x659b,	// (0x00062db2) cell_myfav_contact_pane_cp1_ParamLimits

0x659b,	// (0x00062db2) cell_myfav_contact_pane_cp1

0x65b3,	// (0x00062dca) cell_myfav_contact_pane_cp2_ParamLimits

0x65b3,	// (0x00062dca) cell_myfav_contact_pane_cp2

0x65cb,	// (0x00062de2) cell_myfav_contact_pane_cp3_ParamLimits

0x65cb,	// (0x00062de2) cell_myfav_contact_pane_cp3

0x65e2,	// (0x00062df9) cell_myfav_contact_pane_cp4_ParamLimits

0x65e2,	// (0x00062df9) cell_myfav_contact_pane_cp4

0x65f8,	// (0x00062e0f) cell_myfav_contact_pane_cp5_ParamLimits

0x65f8,	// (0x00062e0f) cell_myfav_contact_pane_cp5

0x660c,	// (0x00062e23) cell_myfav_contact_pane_cp6_ParamLimits

0x660c,	// (0x00062e23) cell_myfav_contact_pane_cp6

0x6620,	// (0x00062e37) cell_myfav_contact_pane_cp7_ParamLimits

0x6620,	// (0x00062e37) cell_myfav_contact_pane_cp7

0xd6a2,	// (0x00069eb9) listscroll_gen_pane_cp05

0x6638,	// (0x00062e4f) main_myfav_hc_pane_g1_ParamLimits

0x6638,	// (0x00062e4f) main_myfav_hc_pane_g1

0x6650,	// (0x00062e67) main_myfav_hc_pane_g2_ParamLimits

0x6650,	// (0x00062e67) main_myfav_hc_pane_g2

0x0002,

0xf7b5,	// (0x0006bfcc) main_myfav_hc_pane_g_ParamLimits

0xf7b5,	// (0x0006bfcc) main_myfav_hc_pane_g

0x6680,	// (0x00062e97) main_myfav_hc_pane_t1_ParamLimits

0x6680,	// (0x00062e97) main_myfav_hc_pane_t1

0xd6ab,	// (0x00069ec2) main_myfav_hc_pane_t2_ParamLimits

0xd6ab,	// (0x00069ec2) main_myfav_hc_pane_t2

0xd6bd,	// (0x00069ed4) main_myfav_hc_pane_t3_ParamLimits

0xd6bd,	// (0x00069ed4) main_myfav_hc_pane_t3

0x6697,	// (0x00062eae) main_myfav_hc_pane_t4_ParamLimits

0x6697,	// (0x00062eae) main_myfav_hc_pane_t4

0x0004,

0xf7bc,	// (0x0006bfd3) main_myfav_hc_pane_t_ParamLimits

0xf7bc,	// (0x0006bfd3) main_myfav_hc_pane_t

0xcbaf,	// (0x000693c6) bg_myfav_hc_instruction_pane_g1

0xd6cf,	// (0x00069ee6) cell_myfav_contact_pane_g1_ParamLimits

0xd6cf,	// (0x00069ee6) cell_myfav_contact_pane_g1

0xd6cf,	// (0x00069ee6) cell_myfav_contact_pane_g2_ParamLimits

0xd6cf,	// (0x00069ee6) cell_myfav_contact_pane_g2

0xd6db,	// (0x00069ef2) cell_myfav_contact_pane_g3_ParamLimits

0xd6db,	// (0x00069ef2) cell_myfav_contact_pane_g3

0xce74,	// (0x0006968b) cell_myfav_contact_pane_g4_ParamLimits

0xce74,	// (0x0006968b) cell_myfav_contact_pane_g4

0xd6e8,	// (0x00069eff) cell_myfav_contact_pane_g5_ParamLimits

0xd6e8,	// (0x00069eff) cell_myfav_contact_pane_g5

0x0004,

0x061f,	// (0x0005ce36) cell_myfav_contact_pane_g_ParamLimits

0x061f,	// (0x0005ce36) cell_myfav_contact_pane_g

0x6668,	// (0x00062e7f) main_myfav_hc_pane_g3_ParamLimits

0x6668,	// (0x00062e7f) main_myfav_hc_pane_g3

0x0ecc,	// (0x0005d6e3) popup_adpt_find_window

0x66c1,	// (0x00062ed8) afind_page_pane_ParamLimits

0x66c1,	// (0x00062ed8) afind_page_pane

0x66ce,	// (0x00062ee5) aid_size_cell_afind_ParamLimits

0x66ce,	// (0x00062ee5) aid_size_cell_afind

0x66e8,	// (0x00062eff) bg_popup_sub_pane_cp09_ParamLimits

0x66e8,	// (0x00062eff) bg_popup_sub_pane_cp09

0x66f5,	// (0x00062f0c) find_pane_cp01_ParamLimits

0x66f5,	// (0x00062f0c) find_pane_cp01

0xd6f4,	// (0x00069f0b) grid_afind_control_pane_ParamLimits

0xd6f4,	// (0x00069f0b) grid_afind_control_pane

0x6702,	// (0x00062f19) grid_afind_pane_ParamLimits

0x6702,	// (0x00062f19) grid_afind_pane

0x671c,	// (0x00062f33) cell_afind_pane_ParamLimits

0x671c,	// (0x00062f33) cell_afind_pane

0xcbaf,	// (0x000693c6) afind_page_pane_g1

0x6764,	// (0x00062f7b) afind_page_pane_g2

0x676d,	// (0x00062f84) afind_page_pane_g3

0x0002,

0xf7c7,	// (0x0006bfde) afind_page_pane_g

0x6776,	// (0x00062f8d) afind_page_pane_t1

0xd708,	// (0x00069f1f) cell_afind_grid_control_pane_ParamLimits

0xd708,	// (0x00069f1f) cell_afind_grid_control_pane

0xd4e2,	// (0x00069cf9) bg_button_pane_cp69_ParamLimits

0xd4e2,	// (0x00069cf9) bg_button_pane_cp69

0x6796,	// (0x00062fad) cell_afind_pane_g1_ParamLimits

0x6796,	// (0x00062fad) cell_afind_pane_g1

0x67a3,	// (0x00062fba) cell_afind_pane_t1_ParamLimits

0x67a3,	// (0x00062fba) cell_afind_pane_t1

0xa955,	// (0x0006716c) bg_button_pane_cp72

0xd717,	// (0x00069f2e) cell_afind_grid_control_pane_g1

0x3d48,	// (0x0006055f) aid_image_placing_area_ParamLimits

0x3d48,	// (0x0006055f) aid_image_placing_area

0xd1a4,	// (0x000699bb) field_vitu_entry_pane_g1_ParamLimits

0xd1a4,	// (0x000699bb) field_vitu_entry_pane_g1

0xd1b0,	// (0x000699c7) field_vitu_entry_pane_g2_ParamLimits

0xd1b0,	// (0x000699c7) field_vitu_entry_pane_g2

0x0001,

0xf6cd,	// (0x0006bee4) field_vitu_entry_pane_g_ParamLimits

0xf6cd,	// (0x0006bee4) field_vitu_entry_pane_g

0x58b7,	// (0x000620ce) cell_vitu_itu_pane_g1_ParamLimits

0x5907,	// (0x0006211e) cell_vitu_itu_pane_t3_ParamLimits

0x5907,	// (0x0006211e) cell_vitu_itu_pane_t3

0xd492,	// (0x00069ca9) mp4_progress_pane_t1_ParamLimits

0xd4ab,	// (0x00069cc2) mp4_progress_pane_t2_ParamLimits

0x0570,	// (0x0005cd87) mp4_progress_pane_t_ParamLimits

0xd4c4,	// (0x00069cdb) mup_progress_pane_cp04_ParamLimits

0x66ab,	// (0x00062ec2) main_myfav_hc_pane_t5_ParamLimits

0x66ab,	// (0x00062ec2) main_myfav_hc_pane_t5

0x0d5a,	// (0x0005d571) aid_zoom_text_primary

0x0ecc,	// (0x0005d6e3) popup_adpt_find_window_ParamLimits

0x41ce,	// (0x000609e5) main_cam_set_pane

0x60ee,	// (0x00062905) cam4_zoom_pane_ParamLimits

0x60ee,	// (0x00062905) cam4_zoom_pane

0x67b5,	// (0x00062fcc) main_cam_set_pane_g1_ParamLimits

0x67b5,	// (0x00062fcc) main_cam_set_pane_g1

0x67c3,	// (0x00062fda) main_cam_set_pane_g2_ParamLimits

0x67c3,	// (0x00062fda) main_cam_set_pane_g2

0x0001,

0xf7ce,	// (0x0006bfe5) main_cam_set_pane_g_ParamLimits

0xf7ce,	// (0x0006bfe5) main_cam_set_pane_g

0x67cf,	// (0x00062fe6) main_cam_set_pane_t1_ParamLimits

0x67cf,	// (0x00062fe6) main_cam_set_pane_t1

0x67eb,	// (0x00063002) main_cset_listscroll_pane_ParamLimits

0x67eb,	// (0x00063002) main_cset_listscroll_pane

0x6816,	// (0x0006302d) main_cset_slider_pane_ParamLimits

0x6816,	// (0x0006302d) main_cset_slider_pane

0xd728,	// (0x00069f3f) main_cset_list_pane_ParamLimits

0xd728,	// (0x00069f3f) main_cset_list_pane

0xd738,	// (0x00069f4f) scroll_pane_cp028

0x6835,	// (0x0006304c) aid_area_touch_slider

0x6851,	// (0x00063068) cset_slider_pane

0x687b,	// (0x00063092) main_cset_slider_pane_g1

0x6890,	// (0x000630a7) main_cset_slider_pane_g2

0x0011,

0xf7d3,	// (0x0006bfea) main_cset_slider_pane_g

0xd771,	// (0x00069f88) main_cset_slider_pane_t1

0x6956,	// (0x0006316d) main_cset_slider_pane_t2

0x6970,	// (0x00063187) main_cset_slider_pane_t3

0x698a,	// (0x000631a1) main_cset_slider_pane_t4

0x69a8,	// (0x000631bf) main_cset_slider_pane_t5

0x69c6,	// (0x000631dd) main_cset_slider_pane_t6

0x69dd,	// (0x000631f4) main_cset_slider_pane_t7

0x000e,

0xf7f8,	// (0x0006c00f) main_cset_slider_pane_t

0x6aeb,	// (0x00063302) cset_list_set_pane_ParamLimits

0x6aeb,	// (0x00063302) cset_list_set_pane

0x6b07,	// (0x0006331e) aid_position_infowindow_above

0x6b0f,	// (0x00063326) aid_position_infowindow_below

0x9e2d,	// (0x00066644) cset_list_set_pane_g1_ParamLimits

0x9e2d,	// (0x00066644) cset_list_set_pane_g1

0x6b17,	// (0x0006332e) cset_list_set_pane_g3_ParamLimits

0x6b17,	// (0x0006332e) cset_list_set_pane_g3

0x0001,

0xf817,	// (0x0006c02e) cset_list_set_pane_g_ParamLimits

0xf817,	// (0x0006c02e) cset_list_set_pane_g

0x9e39,	// (0x00066650) cset_list_set_pane_t1_ParamLimits

0x9e39,	// (0x00066650) cset_list_set_pane_t1

0xa5b3,	// (0x00066dca) list_highlight_pane_cp021_ParamLimits

0xa5b3,	// (0x00066dca) list_highlight_pane_cp021

0xb4d0,	// (0x00067ce7) cset_slider_pane_g1

0xb4e2,	// (0x00067cf9) cset_slider_pane_g2

0xb4d9,	// (0x00067cf0) cset_slider_pane_g3

0x0002,

0x067f,	// (0x0005ce96) cset_slider_pane_g

0x6b26,	// (0x0006333d) aid_area_touch_cam4_zoom

0x6b2e,	// (0x00063345) cam4_zoom_cont_pane

0x6b36,	// (0x0006334d) cam4_zoom_pane_g1

0x6b3e,	// (0x00063355) cam4_zoom_pane_g2

0x6b46,	// (0x0006335d) cam4_zoom_pane_g3

0x0002,

0xf81c,	// (0x0006c033) cam4_zoom_pane_g

0x6b4e,	// (0x00063365) cam4_zoom_cont_pane_g1

0x6b57,	// (0x0006336e) cam4_zoom_cont_pane_g2

0x6b60,	// (0x00063377) cam4_zoom_cont_pane_g3

0x0002,

0xf823,	// (0x0006c03a) cam4_zoom_cont_pane_g

0x5fdb,	// (0x000627f2) call4_image_pane_ParamLimits

0x5fdb,	// (0x000627f2) call4_image_pane

0xd4ee,	// (0x00069d05) call4_windows_conf_pane_ParamLimits

0xd52d,	// (0x00069d44) popup_call4_audio_in_window_ParamLimits

0xd52d,	// (0x00069d44) popup_call4_audio_in_window

0x97c1,	// (0x00065fd8) bg_popup_call2_act_pane_cp02

0xd5a3,	// (0x00069dba) call4_list_conf_pane

0xcbaf,	// (0x000693c6) call4_image_pane_g1

0xcbaf,	// (0x000693c6) call4_image_pane_g2

0x0001,

0x039c,	// (0x0005cbb3) call4_image_pane_g

0xd811,	// (0x0006a028) list_single_graphic_popup_conf4_pane_ParamLimits

0xd811,	// (0x0006a028) list_single_graphic_popup_conf4_pane

0x97c1,	// (0x00065fd8) list_highlight_pane_cp022

0xd824,	// (0x0006a03b) list_single_graphic_popup_conf4_pane_g1

0xb0a4,	// (0x000678bb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf82a,	// (0x0006c041) list_single_graphic_popup_conf4_pane_g

0xd82c,	// (0x0006a043) list_single_graphic_popup_conf4_pane_t1

0x1fdc,	// (0x0005e7f3) popup_vtel_slider_window_ParamLimits

0x1fdc,	// (0x0005e7f3) popup_vtel_slider_window

0xd4d0,	// (0x00069ce7) dialer2_ne_pane_t2_ParamLimits

0xd4d0,	// (0x00069ce7) dialer2_ne_pane_t2

0x0001,

0xf72b,	// (0x0006bf42) dialer2_ne_pane_t_ParamLimits

0xf72b,	// (0x0006bf42) dialer2_ne_pane_t

0xa5b3,	// (0x00066dca) bg_popup_sub_pane_cp010_ParamLimits

0xa5b3,	// (0x00066dca) bg_popup_sub_pane_cp010

0x6b69,	// (0x00063380) popup_vtel_slider_window_g1_ParamLimits

0x6b69,	// (0x00063380) popup_vtel_slider_window_g1

0x6b75,	// (0x0006338c) popup_vtel_slider_window_g2_ParamLimits

0x6b75,	// (0x0006338c) popup_vtel_slider_window_g2

0x0003,

0xf82f,	// (0x0006c046) popup_vtel_slider_window_g_ParamLimits

0xf82f,	// (0x0006c046) popup_vtel_slider_window_g

0x6bbd,	// (0x000633d4) vtel_slider_pane_ParamLimits

0x6bbd,	// (0x000633d4) vtel_slider_pane

0x6bcc,	// (0x000633e3) vtel_slider_pane_g1_ParamLimits

0x6bcc,	// (0x000633e3) vtel_slider_pane_g1

0x6bd9,	// (0x000633f0) vtel_slider_pane_g2_ParamLimits

0x6bd9,	// (0x000633f0) vtel_slider_pane_g2

0x6be6,	// (0x000633fd) vtel_slider_pane_g3_ParamLimits

0x6be6,	// (0x000633fd) vtel_slider_pane_g3

0x6bcc,	// (0x000633e3) vtel_slider_pane_g4_ParamLimits

0x6bcc,	// (0x000633e3) vtel_slider_pane_g4

0x6bf3,	// (0x0006340a) vtel_slider_pane_g5_ParamLimits

0x6bf3,	// (0x0006340a) vtel_slider_pane_g5

0x0004,

0xf838,	// (0x0006c04f) vtel_slider_pane_g_ParamLimits

0xf838,	// (0x0006c04f) vtel_slider_pane_g

0x41ce,	// (0x000609e5) main_gallery2_pane

0x634c,	// (0x00062b63) aid_size_row_itut2_dropdow_list_ParamLimits

0x634c,	// (0x00062b63) aid_size_row_itut2_dropdow_list

0x63b6,	// (0x00062bcd) grid_vitu2_function_top_pane_ParamLimits

0x63b6,	// (0x00062bcd) grid_vitu2_function_top_pane

0x640e,	// (0x00062c25) popup_vitu2_dropdown_list_window_ParamLimits

0x640e,	// (0x00062c25) popup_vitu2_dropdown_list_window

0x642c,	// (0x00062c43) popup_vitu2_match_list_window

0x6c00,	// (0x00063417) cell_vitu2_function_top_pane_ParamLimits

0x6c00,	// (0x00063417) cell_vitu2_function_top_pane

0x6c22,	// (0x00063439) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6c22,	// (0x00063439) cell_vitu2_function_top_pane_cp01

0x6c3e,	// (0x00063455) cell_vitu2_function_top_wide_pane_ParamLimits

0x6c3e,	// (0x00063455) cell_vitu2_function_top_wide_pane

0x41ce,	// (0x000609e5) bg_button_pane_cp012

0x6c5a,	// (0x00063471) cell_vitu2_function_top_pane_g1

0x6c6e,	// (0x00063485) bg_button_pane_cp013_ParamLimits

0x6c6e,	// (0x00063485) bg_button_pane_cp013

0x6c8a,	// (0x000634a1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6c8a,	// (0x000634a1) cell_vitu2_function_top_wide_pane_g1

0x0fc3,	// (0x0005d7da) bg_popup_sub_pane_cp20

0x6ca2,	// (0x000634b9) list_vitu2_match_list_pane

0xd61e,	// (0x00069e35) bg_popup_sub_pane_cp20_g1

0xd626,	// (0x00069e3d) bg_popup_sub_pane_cp20_g2

0xab5c,	// (0x00067373) bg_popup_sub_pane_cp20_g3

0xd62e,	// (0x00069e45) bg_popup_sub_pane_cp20_g4

0xab3c,	// (0x00067353) bg_popup_sub_pane_cp20_g5

0xd842,	// (0x0006a059) bg_popup_sub_pane_cp20_g6

0xd63e,	// (0x00069e55) bg_popup_sub_pane_cp20_g7

0xd646,	// (0x00069e5d) bg_popup_sub_pane_cp20_g8

0xd64e,	// (0x00069e65) bg_popup_sub_pane_cp20_g9

0x0008,

0xf843,	// (0x0006c05a) bg_popup_sub_pane_cp20_g

0x6cba,	// (0x000634d1) list_vitu2_match_list_item_pane_ParamLimits

0x6cba,	// (0x000634d1) list_vitu2_match_list_item_pane

0x6ccc,	// (0x000634e3) list_vitu2_match_list_item_pane_t1

0x0fdd,	// (0x0005d7f4) bg_popup_sub_pane_cp21

0x6d09,	// (0x00063520) grid_vitu2_dropdown_list_pane

0x6d11,	// (0x00063528) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6d11,	// (0x00063528) cell_vitu2_dropdown_list_char_pane

0x6d32,	// (0x00063549) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6d32,	// (0x00063549) cell_vitu2_dropdown_list_ctrl_pane

0xd84a,	// (0x0006a061) cell_vitu2_dropdown_list_char_pane_g1

0xd853,	// (0x0006a06a) cell_vitu2_dropdown_list_char_pane_g2

0xd85c,	// (0x0006a073) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf860,	// (0x0006c077) cell_vitu2_dropdown_list_char_pane_g

0x6d5e,	// (0x00063575) cell_vitu2_dropdown_list_char_pane_t1

0x6d6c,	// (0x00063583) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6d6c,	// (0x00063583) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6d7c,	// (0x00063593) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6d7c,	// (0x00063593) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6d8d,	// (0x000635a4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6d8d,	// (0x000635a4) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6d9d,	// (0x000635b4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6d9d,	// (0x000635b4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6182,	// (0x00062999) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6182,	// (0x00062999) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf867,	// (0x0006c07e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf867,	// (0x0006c07e) cell_vitu2_dropdown_list_ctrl_pane_g

0x6db9,	// (0x000635d0) aid_size_cell_gallery2_ParamLimits

0x6db9,	// (0x000635d0) aid_size_cell_gallery2

0x6dd3,	// (0x000635ea) grid_gallery2_pane_ParamLimits

0x6dd3,	// (0x000635ea) grid_gallery2_pane

0x5738,	// (0x00061f4f) scroll_pane_cp029_ParamLimits

0x5738,	// (0x00061f4f) scroll_pane_cp029

0x6dea,	// (0x00063601) cell_gallery2_pane_ParamLimits

0x6dea,	// (0x00063601) cell_gallery2_pane

0xd865,	// (0x0006a07c) cell_gallery2_pane_g2

0x6e3f,	// (0x00063656) cell_gallery2_pane_g3

0xd86d,	// (0x0006a084) cell_gallery2_pane_g4

0xd875,	// (0x0006a08c) cell_gallery2_pane_g5

0xa903,	// (0x0006711a) grid_highlight_pane_cp10

0x642c,	// (0x00062c43) popup_vitu2_match_list_window_ParamLimits

0x643e,	// (0x00062c55) popup_vitu2_query_window_ParamLimits

0x643e,	// (0x00062c55) popup_vitu2_query_window

0x0fdd,	// (0x0005d7f4) bg_vitu2_candi_button_pane

0xd84a,	// (0x0006a061) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd853,	// (0x0006a06a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd85c,	// (0x0006a073) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6e47,	// (0x0006365e) bg_button_pane_cp015

0x6e59,	// (0x00063670) bg_button_pane_cp016

0x6e6c,	// (0x00063683) bg_button_pane_cp017

0xc7a5,	// (0x00068fbc) bg_popup_sub_pane_cp22

0xd87d,	// (0x0006a094) popup_vitu2_query_window_g1

0x6eb1,	// (0x000636c8) popup_vitu2_query_window_g2

0x0002,

0xf872,	// (0x0006c089) popup_vitu2_query_window_g

0x6ece,	// (0x000636e5) popup_vitu2_query_window_t1_ParamLimits

0x6ece,	// (0x000636e5) popup_vitu2_query_window_t1

0x6f01,	// (0x00063718) popup_vitu2_query_window_t2_ParamLimits

0x6f01,	// (0x00063718) popup_vitu2_query_window_t2

0x6f13,	// (0x0006372a) popup_vitu2_query_window_t3_ParamLimits

0x6f13,	// (0x0006372a) popup_vitu2_query_window_t3

0x6f3b,	// (0x00063752) popup_vitu2_query_window_t4_ParamLimits

0x6f3b,	// (0x00063752) popup_vitu2_query_window_t4

0x6f5c,	// (0x00063773) popup_vitu2_query_window_t5_ParamLimits

0x6f5c,	// (0x00063773) popup_vitu2_query_window_t5

0x0006,

0xf879,	// (0x0006c090) popup_vitu2_query_window_t_ParamLimits

0xf879,	// (0x0006c090) popup_vitu2_query_window_t

0xd720,	// (0x00069f37) main_cset_text_pane

0x6835,	// (0x0006304c) aid_area_touch_slider_ParamLimits

0x6851,	// (0x00063068) cset_slider_pane_ParamLimits

0x687b,	// (0x00063092) main_cset_slider_pane_g1_ParamLimits

0x6890,	// (0x000630a7) main_cset_slider_pane_g2_ParamLimits

0xd741,	// (0x00069f58) main_cset_slider_pane_g3_ParamLimits

0xd741,	// (0x00069f58) main_cset_slider_pane_g3

0x68a5,	// (0x000630bc) main_cset_slider_pane_g4_ParamLimits

0x68a5,	// (0x000630bc) main_cset_slider_pane_g4

0x68b4,	// (0x000630cb) main_cset_slider_pane_g5_ParamLimits

0x68b4,	// (0x000630cb) main_cset_slider_pane_g5

0x68c2,	// (0x000630d9) main_cset_slider_pane_g6_ParamLimits

0x68c2,	// (0x000630d9) main_cset_slider_pane_g6

0xf7d3,	// (0x0006bfea) main_cset_slider_pane_g_ParamLimits

0xd771,	// (0x00069f88) main_cset_slider_pane_t1_ParamLimits

0x6956,	// (0x0006316d) main_cset_slider_pane_t2_ParamLimits

0x6970,	// (0x00063187) main_cset_slider_pane_t3_ParamLimits

0x698a,	// (0x000631a1) main_cset_slider_pane_t4_ParamLimits

0x69a8,	// (0x000631bf) main_cset_slider_pane_t5_ParamLimits

0x69c6,	// (0x000631dd) main_cset_slider_pane_t6_ParamLimits

0x69dd,	// (0x000631f4) main_cset_slider_pane_t7_ParamLimits

0x6a0b,	// (0x00063222) main_cset_slider_pane_t8_ParamLimits

0x6a0b,	// (0x00063222) main_cset_slider_pane_t8

0x6a33,	// (0x0006324a) main_cset_slider_pane_t9_ParamLimits

0x6a33,	// (0x0006324a) main_cset_slider_pane_t9

0x6a5b,	// (0x00063272) main_cset_slider_pane_t10_ParamLimits

0x6a5b,	// (0x00063272) main_cset_slider_pane_t10

0x6a83,	// (0x0006329a) main_cset_slider_pane_t11_ParamLimits

0x6a83,	// (0x0006329a) main_cset_slider_pane_t11

0x6aad,	// (0x000632c4) main_cset_slider_pane_t12_ParamLimits

0x6aad,	// (0x000632c4) main_cset_slider_pane_t12

0x6acc,	// (0x000632e3) main_cset_slider_pane_t13_ParamLimits

0x6acc,	// (0x000632e3) main_cset_slider_pane_t13

0xf7f8,	// (0x0006c00f) main_cset_slider_pane_t_ParamLimits

0x97c1,	// (0x00065fd8) bg_popup_sub_pane_cp011

0xd889,	// (0x0006a0a0) main_cset_text_pane_g1

0xd891,	// (0x0006a0a8) main_cset_text_pane_t1

0xd89f,	// (0x0006a0b6) main_cset_text_pane_t2

0xd8ad,	// (0x0006a0c4) main_cset_text_pane_t3

0xd8bb,	// (0x0006a0d2) main_cset_text_pane_t4

0xd8c9,	// (0x0006a0e0) main_cset_text_pane_t5

0xd8d7,	// (0x0006a0ee) main_cset_text_pane_t6

0xd8e5,	// (0x0006a0fc) main_cset_text_pane_t7

0x0006,

0xf888,	// (0x0006c09f) main_cset_text_pane_t

0x0fdd,	// (0x0005d7f4) main_cam4_burst_pane

0x0fdd,	// (0x0005d7f4) main_cam5_pane

0x6784,	// (0x00062f9b) bg_button_pane_cp019

0x678d,	// (0x00062fa4) bg_button_pane_cp020

0xd74d,	// (0x00069f64) main_cset_slider_pane_g7_ParamLimits

0xd74d,	// (0x00069f64) main_cset_slider_pane_g7

0xd759,	// (0x00069f70) main_cset_slider_pane_g8_ParamLimits

0xd759,	// (0x00069f70) main_cset_slider_pane_g8

0x68d6,	// (0x000630ed) main_cset_slider_pane_g9_ParamLimits

0x68d6,	// (0x000630ed) main_cset_slider_pane_g9

0x68e2,	// (0x000630f9) main_cset_slider_pane_g10_ParamLimits

0x68e2,	// (0x000630f9) main_cset_slider_pane_g10

0x68ee,	// (0x00063105) main_cset_slider_pane_g11_ParamLimits

0x68ee,	// (0x00063105) main_cset_slider_pane_g11

0x68fa,	// (0x00063111) main_cset_slider_pane_g12_ParamLimits

0x68fa,	// (0x00063111) main_cset_slider_pane_g12

0x6906,	// (0x0006311d) main_cset_slider_pane_g13_ParamLimits

0x6906,	// (0x0006311d) main_cset_slider_pane_g13

0x6914,	// (0x0006312b) main_cset_slider_pane_g14_ParamLimits

0x6914,	// (0x0006312b) main_cset_slider_pane_g14

0x6922,	// (0x00063139) main_cset_slider_pane_g15_ParamLimits

0x6922,	// (0x00063139) main_cset_slider_pane_g15

0xd79f,	// (0x00069fb6) main_cset_slider_pane_t14_ParamLimits

0xd79f,	// (0x00069fb6) main_cset_slider_pane_t14

0xd7d8,	// (0x00069fef) main_cset_slider_pane_t15_ParamLimits

0xd7d8,	// (0x00069fef) main_cset_slider_pane_t15

0x6fd3,	// (0x000637ea) aid_cam4_burst_size_cell_ParamLimits

0x6fd3,	// (0x000637ea) aid_cam4_burst_size_cell

0x6fef,	// (0x00063806) grid_cam4_burst_pane_ParamLimits

0x6fef,	// (0x00063806) grid_cam4_burst_pane

0x701f,	// (0x00063836) linegrid_cam4_burst_pane_ParamLimits

0x701f,	// (0x00063836) linegrid_cam4_burst_pane

0x7041,	// (0x00063858) scroll_pane_cp30_ParamLimits

0x7041,	// (0x00063858) scroll_pane_cp30

0x704d,	// (0x00063864) cell_cam4_burst_pane_ParamLimits

0x704d,	// (0x00063864) cell_cam4_burst_pane

0xd8f3,	// (0x0006a10a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd8f3,	// (0x0006a10a) linegrid_cam4_burst_pane_g1

0x7089,	// (0x000638a0) linegrid_cam4_burst_pane_g2_ParamLimits

0x7089,	// (0x000638a0) linegrid_cam4_burst_pane_g2

0xd900,	// (0x0006a117) linegrid_cam4_burst_pane_g3_ParamLimits

0xd900,	// (0x0006a117) linegrid_cam4_burst_pane_g3

0x0002,

0xf897,	// (0x0006c0ae) linegrid_cam4_burst_pane_g_ParamLimits

0xf897,	// (0x0006c0ae) linegrid_cam4_burst_pane_g

0x709a,	// (0x000638b1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x709a,	// (0x000638b1) linegrid_cam4_burst_pane_g3_copy1

0xd90d,	// (0x0006a124) linegrid_cam4_burst_pane_g4_ParamLimits

0xd90d,	// (0x0006a124) linegrid_cam4_burst_pane_g4

0x70b4,	// (0x000638cb) linegrid_cam4_burst_pane_g5_ParamLimits

0x70b4,	// (0x000638cb) linegrid_cam4_burst_pane_g5

0x70c5,	// (0x000638dc) linegrid_cam4_burst_pane_g6_ParamLimits

0x70c5,	// (0x000638dc) linegrid_cam4_burst_pane_g6

0xd91a,	// (0x0006a131) linegrid_cam4_burst_pane_g7_ParamLimits

0xd91a,	// (0x0006a131) linegrid_cam4_burst_pane_g7

0x70d6,	// (0x000638ed) cell_cam4_burst_pane_g1

0xd962,	// (0x0006a179) main_cam5_pane_t1_ParamLimits

0xd962,	// (0x0006a179) main_cam5_pane_t1

0xd974,	// (0x0006a18b) main_cam5_pane_t2_ParamLimits

0xd974,	// (0x0006a18b) main_cam5_pane_t2

0xd986,	// (0x0006a19d) main_cam5_pane_t3_ParamLimits

0xd986,	// (0x0006a19d) main_cam5_pane_t3

0xd998,	// (0x0006a1af) main_cam5_pane_t4_ParamLimits

0xd998,	// (0x0006a1af) main_cam5_pane_t4

0xd9b0,	// (0x0006a1c7) main_cam5_pane_t5_ParamLimits

0xd9b0,	// (0x0006a1c7) main_cam5_pane_t5

0xd9c4,	// (0x0006a1db) main_cam5_pane_t6_ParamLimits

0xd9c4,	// (0x0006a1db) main_cam5_pane_t6

0xd9d8,	// (0x0006a1ef) main_cam5_pane_t7_ParamLimits

0xd9d8,	// (0x0006a1ef) main_cam5_pane_t7

0xd9ea,	// (0x0006a201) main_cam5_pane_t8_ParamLimits

0xd9ea,	// (0x0006a201) main_cam5_pane_t8

0xda06,	// (0x0006a21d) main_cam5_pane_t9_ParamLimits

0xda06,	// (0x0006a21d) main_cam5_pane_t9

0xda18,	// (0x0006a22f) main_cam5_pane_t10_ParamLimits

0xda18,	// (0x0006a22f) main_cam5_pane_t10

0xda2a,	// (0x0006a241) main_cam5_pane_t11_ParamLimits

0xda2a,	// (0x0006a241) main_cam5_pane_t11

0xda3c,	// (0x0006a253) main_cam5_pane_t12_ParamLimits

0xda3c,	// (0x0006a253) main_cam5_pane_t12

0xda51,	// (0x0006a268) main_cam5_pane_t13_ParamLimits

0xda51,	// (0x0006a268) main_cam5_pane_t13

0x000c,

0xf8a3,	// (0x0006c0ba) main_cam5_pane_t_ParamLimits

0xf8a3,	// (0x0006c0ba) main_cam5_pane_t

0x0f82,	// (0x0005d799) popup_scut_keymap_window_ParamLimits

0x0f82,	// (0x0005d799) popup_scut_keymap_window

0x70eb,	// (0x00063902) aid_size_cell_brow_shortcut

0xa903,	// (0x0006711a) bg_popup_window_pane_cp010

0x70f7,	// (0x0006390e) grid_scut_pane

0x7103,	// (0x0006391a) cell_scut_pane_ParamLimits

0x7103,	// (0x0006391a) cell_scut_pane

0x711a,	// (0x00063931) cell_scut_pane_g1

0xda6e,	// (0x0006a285) cell_scut_pane_t1

0xda7d,	// (0x0006a294) cell_scut_pane_t2

0x7123,	// (0x0006393a) cell_scut_pane_t3

0x0002,

0xf8be,	// (0x0006c0d5) cell_scut_pane_t

0x4f18,	// (0x0006172f) main_mup3_pane_g8_ParamLimits

0x4f18,	// (0x0006172f) main_mup3_pane_g8

0x635a,	// (0x00062b71) area_vitu2_query_pane_ParamLimits

0x635a,	// (0x00062b71) area_vitu2_query_pane

0x6e7f,	// (0x00063696) input_focus_pane_cp08

0xda8c,	// (0x0006a2a3) area_vitu2_query_pane_g1

0x7131,	// (0x00063948) area_vitu2_query_pane_g2

0x0001,

0xf8c5,	// (0x0006c0dc) area_vitu2_query_pane_g

0x7142,	// (0x00063959) area_vitu2_query_pane_t1_ParamLimits

0x7142,	// (0x00063959) area_vitu2_query_pane_t1

0x7156,	// (0x0006396d) area_vitu2_query_pane_t2_ParamLimits

0x7156,	// (0x0006396d) area_vitu2_query_pane_t2

0x716a,	// (0x00063981) area_vitu2_query_pane_t3_ParamLimits

0x716a,	// (0x00063981) area_vitu2_query_pane_t3

0x9e74,	// (0x0006668b) area_vitu2_query_pane_t4_ParamLimits

0x9e74,	// (0x0006668b) area_vitu2_query_pane_t4

0x9e9c,	// (0x000666b3) area_vitu2_query_pane_t5_ParamLimits

0x9e9c,	// (0x000666b3) area_vitu2_query_pane_t5

0x9ec4,	// (0x000666db) area_vitu2_query_pane_t6_ParamLimits

0x9ec4,	// (0x000666db) area_vitu2_query_pane_t6

0x0006,

0xf8ca,	// (0x0006c0e1) area_vitu2_query_pane_t_ParamLimits

0xf8ca,	// (0x0006c0e1) area_vitu2_query_pane_t

0x7192,	// (0x000639a9) bg_button_pane_cp018

0x71a0,	// (0x000639b7) bg_button_pane_cp021

0x71ac,	// (0x000639c3) bg_button_pane_cp022

0x71bd,	// (0x000639d4) input_focus_pane_cp09

0xb1c8,	// (0x000679df) aid_size_touch_mv_arrow_left

0xb1f3,	// (0x00067a0a) aid_size_touch_mv_arrow_right

0x693a,	// (0x00063151) main_cset_slider_pane_g16_ParamLimits

0x693a,	// (0x00063151) main_cset_slider_pane_g16

0x6948,	// (0x0006315f) main_cset_slider_pane_g17_ParamLimits

0x6948,	// (0x0006315f) main_cset_slider_pane_g17

0x70d6,	// (0x000638ed) cell_cam4_burst_pane_g1_ParamLimits

0x97c1,	// (0x00065fd8) compa_mode_pane

0x6b81,	// (0x00063398) popup_vtel_slider_window_g3_ParamLimits

0x6b81,	// (0x00063398) popup_vtel_slider_window_g3

0x6b95,	// (0x000633ac) popup_vtel_slider_window_g4_ParamLimits

0x6b95,	// (0x000633ac) popup_vtel_slider_window_g4

0x6ba9,	// (0x000633c0) popup_vtel_slider_window_t1_ParamLimits

0x6ba9,	// (0x000633c0) popup_vtel_slider_window_t1

0x0fdd,	// (0x0005d7f4) main_cl_pane

0x4268,	// (0x00060a7f) popup_imed_adjust2_window_ParamLimits

0xc7a5,	// (0x00068fbc) bg_tb_trans_pane_cp05_ParamLimits

0xd0d0,	// (0x000698e7) popup_imed_adjust2_window_g1_ParamLimits

0xd0df,	// (0x000698f6) popup_imed_adjust2_window_g2_ParamLimits

0xd0df,	// (0x000698f6) popup_imed_adjust2_window_g2

0xd0eb,	// (0x00069902) popup_imed_adjust2_window_g3_ParamLimits

0xd0eb,	// (0x00069902) popup_imed_adjust2_window_g3

0x0002,

0xf691,	// (0x0006bea8) popup_imed_adjust2_window_g_ParamLimits

0xf691,	// (0x0006bea8) popup_imed_adjust2_window_g

0xd0f7,	// (0x0006990e) popup_imed_adjust2_window_t1_ParamLimits

0xd10f,	// (0x00069926) slider_imed_adjust_pane_ParamLimits

0xd123,	// (0x0006993a) slider_imed_adjust_pane_g1_ParamLimits

0xd133,	// (0x0006994a) slider_imed_adjust_pane_g2_ParamLimits

0xd143,	// (0x0006995a) slider_imed_adjust_pane_g3_ParamLimits

0xd154,	// (0x0006996b) slider_imed_adjust_pane_g4_ParamLimits

0xf698,	// (0x0006beaf) slider_imed_adjust_pane_g_ParamLimits

0x6097,	// (0x000628ae) aid_touch_area_cam4_ParamLimits

0x6097,	// (0x000628ae) aid_touch_area_cam4

0x60a7,	// (0x000628be) battery_pane_cp01

0x612e,	// (0x00062945) main_camera4_pane_g6_ParamLimits

0x612e,	// (0x00062945) main_camera4_pane_g6

0x614c,	// (0x00062963) main_camera4_pane_t2_ParamLimits

0x614c,	// (0x00062963) main_camera4_pane_t2

0x0001,

0xf75f,	// (0x0006bf76) main_camera4_pane_t_ParamLimits

0xf75f,	// (0x0006bf76) main_camera4_pane_t

0x61e1,	// (0x000629f8) aid_touch_area_vid4_ParamLimits

0x61e1,	// (0x000629f8) aid_touch_area_vid4

0x6221,	// (0x00062a38) main_video4_pane_g5_ParamLimits

0x6221,	// (0x00062a38) main_video4_pane_g5

0x6245,	// (0x00062a5c) vid4_progress_pane_ParamLimits

0x6245,	// (0x00062a5c) vid4_progress_pane

0xd765,	// (0x00069f7c) main_cset_slider_pane_g18_ParamLimits

0xd765,	// (0x00069f7c) main_cset_slider_pane_g18

0xd927,	// (0x0006a13e) cell_cam4_burst_pane_g2_ParamLimits

0xd927,	// (0x0006a13e) cell_cam4_burst_pane_g2

0x0001,

0xf89e,	// (0x0006c0b5) cell_cam4_burst_pane_g_ParamLimits

0xf89e,	// (0x0006c0b5) cell_cam4_burst_pane_g

0x71ce,	// (0x000639e5) bg_cl_pane_ParamLimits

0x71ce,	// (0x000639e5) bg_cl_pane

0x71da,	// (0x000639f1) cl_header_pane_ParamLimits

0x71da,	// (0x000639f1) cl_header_pane

0x71e6,	// (0x000639fd) cl_listscroll_pane_ParamLimits

0x71e6,	// (0x000639fd) cl_listscroll_pane

0xda98,	// (0x0006a2af) bg_cl_pane_g1

0xdaa0,	// (0x0006a2b7) bg_cl_pane_g2

0xdaa8,	// (0x0006a2bf) bg_cl_pane_g3

0xdab0,	// (0x0006a2c7) bg_cl_pane_g4

0xdab8,	// (0x0006a2cf) bg_cl_pane_g5

0xdac0,	// (0x0006a2d7) bg_cl_pane_g6

0xdac8,	// (0x0006a2df) bg_cl_pane_g7

0xdad0,	// (0x0006a2e7) bg_cl_pane_g8

0xdad8,	// (0x0006a2ef) bg_cl_pane_g9

0x0008,

0xf8d9,	// (0x0006c0f0) bg_cl_pane_g

0x71f2,	// (0x00063a09) aid_height_cl_leading_ParamLimits

0x71f2,	// (0x00063a09) aid_height_cl_leading

0x71fe,	// (0x00063a15) aid_height_cl_text_ParamLimits

0x71fe,	// (0x00063a15) aid_height_cl_text

0xdbd6,	// (0x0006a3ed) bg_cl_header_pane_ParamLimits

0xdbd6,	// (0x0006a3ed) bg_cl_header_pane

0x7216,	// (0x00063a2d) cl_header_pane_g1_ParamLimits

0x7216,	// (0x00063a2d) cl_header_pane_g1

0x7223,	// (0x00063a3a) cl_header_pane_t1_ParamLimits

0x7223,	// (0x00063a3a) cl_header_pane_t1

0xdae0,	// (0x0006a2f7) cl_list_pane

0xd738,	// (0x00069f4f) hc_scroll_pane_cp01

0xab3c,	// (0x00067353) bg_cl_header_pane_g1

0xd61e,	// (0x00069e35) bg_cl_header_pane_g2

0xab5c,	// (0x00067373) bg_cl_header_pane_g3

0xd62e,	// (0x00069e45) bg_cl_header_pane_g4

0xd626,	// (0x00069e3d) bg_cl_header_pane_g5

0xd842,	// (0x0006a059) bg_cl_header_pane_g6

0xd646,	// (0x00069e5d) bg_cl_header_pane_g7

0xd64e,	// (0x00069e65) bg_cl_header_pane_g8

0xd63e,	// (0x00069e55) bg_cl_header_pane_g9

0x0008,

0xf8ec,	// (0x0006c103) bg_cl_header_pane_g

0x7235,	// (0x00063a4c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7235,	// (0x00063a4c) hc_cl_list_double_graphic_heading_pane

0x7249,	// (0x00063a60) hc_cl_list_single_graphic_pane_ParamLimits

0x7249,	// (0x00063a60) hc_cl_list_single_graphic_pane

0x7263,	// (0x00063a7a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7263,	// (0x00063a7a) hc_cl_list_single_graphic_pane_g1

0x726f,	// (0x00063a86) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x726f,	// (0x00063a86) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8ff,	// (0x0006c116) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8ff,	// (0x0006c116) hc_cl_list_single_graphic_pane_g

0x7283,	// (0x00063a9a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7283,	// (0x00063a9a) hc_cl_list_single_graphic_pane_t1

0x7263,	// (0x00063a7a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7263,	// (0x00063a7a) hc_cl_list_double_graphic_heading_pane_g1

0x7298,	// (0x00063aaf) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7298,	// (0x00063aaf) hc_cl_list_double_graphic_heading_pane_g2

0x72ac,	// (0x00063ac3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x72ac,	// (0x00063ac3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf904,	// (0x0006c11b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf904,	// (0x0006c11b) hc_cl_list_double_graphic_heading_pane_g

0x72c0,	// (0x00063ad7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x72c0,	// (0x00063ad7) hc_cl_list_double_graphic_heading_pane_t1

0x72d5,	// (0x00063aec) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x72d5,	// (0x00063aec) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf90b,	// (0x0006c122) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf90b,	// (0x0006c122) hc_cl_list_double_graphic_heading_pane_t

0x72f2,	// (0x00063b09) vid4_progress_pane_g1

0x7302,	// (0x00063b19) vid4_progress_pane_g2

0x7312,	// (0x00063b29) vid4_progress_pane_g3

0x7324,	// (0x00063b3b) vid4_progress_pane_g4

0x0004,

0xf910,	// (0x0006c127) vid4_progress_pane_g

0x7342,	// (0x00063b59) vid4_progress_pane_t1

0x7358,	// (0x00063b6f) vid4_progress_pane_t2

0x0002,

0xf91b,	// (0x0006c132) vid4_progress_pane_t

0x7383,	// (0x00063b9a) wait_bar_pane_cp07

0xc9a0,	// (0x000691b7) blid_firmament_pane_ParamLimits

0xc9e3,	// (0x000691fa) popup_blid_sat_info2_window_g1

0xca07,	// (0x0006921e) popup_blid_sat_info2_window_t3

0xca15,	// (0x0006922c) popup_blid_sat_info2_window_t4

0xca23,	// (0x0006923a) popup_blid_sat_info2_window_t5

0xca31,	// (0x00069248) popup_blid_sat_info2_window_t6

0xca41,	// (0x00069258) popup_blid_sat_info2_window_t7

0xca4f,	// (0x00069266) popup_blid_sat_info2_window_t8

0xca5d,	// (0x00069274) popup_blid_sat_info2_window_t9

0xca6b,	// (0x00069282) popup_blid_sat_info2_window_t10

0xcb2f,	// (0x00069346) aid_firma_cardinal_ParamLimits

0xcb43,	// (0x0006935a) blid_firmament_pane_t1_ParamLimits

0xcb5a,	// (0x00069371) blid_firmament_pane_t2_ParamLimits

0xcb71,	// (0x00069388) blid_firmament_pane_t3_ParamLimits

0xcb88,	// (0x0006939f) blid_firmament_pane_t4_ParamLimits

0x0393,	// (0x0005cbaa) blid_firmament_pane_t_ParamLimits

0xcb9f,	// (0x000693b6) blid_sat_info_pane_ParamLimits

0x41ce,	// (0x000609e5) main_cam_set_pane_ParamLimits

0x56d1,	// (0x00061ee8) aid_size_cell_colour_35_ParamLimits

0x56eb,	// (0x00061f02) aid_size_cell_colour_112_ParamLimits

0x5702,	// (0x00061f19) aid_size_cell_effect_ParamLimits

0xa5b3,	// (0x00066dca) bg_tb_trans_pane_cp02_ParamLimits

0xb2e4,	// (0x00067afb) heading_imed_pane_ParamLimits

0x571c,	// (0x00061f33) listscroll_imed_pane_ParamLimits

0xbdcb,	// (0x000685e2) popup_call2_audio_first_window_g5_ParamLimits

0xbdcb,	// (0x000685e2) popup_call2_audio_first_window_g5

0x5e46,	// (0x0006265d) aid_size_touch_image3_arrow_left_ParamLimits

0x5e46,	// (0x0006265d) aid_size_touch_image3_arrow_left

0x5e5c,	// (0x00062673) aid_size_touch_image3_arrow_right_ParamLimits

0x5e5c,	// (0x00062673) aid_size_touch_image3_arrow_right

0x736d,	// (0x00063b84) vid4_progress_pane_t3

0x59d0,	// (0x000621e7) main_hwr_training_symbol_option_pane_ParamLimits

0x59d0,	// (0x000621e7) main_hwr_training_symbol_option_pane

0xd3d2,	// (0x00069be9) popup_hwr_training_preview_window_ParamLimits

0xd3d2,	// (0x00069be9) popup_hwr_training_preview_window

0x5a31,	// (0x00062248) hwr_training_navi_pane_g5_ParamLimits

0x5a31,	// (0x00062248) hwr_training_navi_pane_g5

0xd60c,	// (0x00069e23) popup_char_count_window

0x0fc3,	// (0x0005d7da) bg_popup_sub_pane_cp20_ParamLimits

0x6ca2,	// (0x000634b9) list_vitu2_match_list_pane_ParamLimits

0x6cae,	// (0x000634c5) vitu2_page_scroll_pane_ParamLimits

0x6cae,	// (0x000634c5) vitu2_page_scroll_pane

0xdae9,	// (0x0006a300) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdae9,	// (0x0006a300) list_single_hwr_training_symbol_option_pane

0xdafc,	// (0x0006a313) list_single_hwr_training_symbol_option_pane_g1

0xdb04,	// (0x0006a31b) list_single_hwr_training_symbol_option_pane_t1

0xdb12,	// (0x0006a329) bg_button_pane_cp023

0xdb1b,	// (0x0006a332) bg_button_pane_cp024

0x73c3,	// (0x00063bda) vitu2_page_scroll_pane_g1

0x73cb,	// (0x00063be2) vitu2_page_scroll_pane_g2

0x0001,

0xf922,	// (0x0006c139) vitu2_page_scroll_pane_g

0x73d3,	// (0x00063bea) vitu2_page_scroll_pane_t1

0xc900,	// (0x00069117) popup_char_count_window_g1

0xdb4e,	// (0x0006a365) popup_char_count_window_g2

0xdb57,	// (0x0006a36e) popup_char_count_window_g3

0x0002,

0xf927,	// (0x0006c13e) popup_char_count_window_g

0xdb60,	// (0x0006a377) popup_char_count_window_t1

0x0fdd,	// (0x0005d7f4) main_vded2_pane

0xd0bc,	// (0x000698d3) aid_size_cell_imed_line

0xd0c6,	// (0x000698dd) grid_imed_line_width_pane

0x62b1,	// (0x00062ac8) vid4_indicators_pane_g4

0xdb6e,	// (0x0006a385) cell_imed_line_width_pane_ParamLimits

0xdb6e,	// (0x0006a385) cell_imed_line_width_pane

0xdb82,	// (0x0006a399) cell_imed_line_width_pane_g1

0xd95a,	// (0x0006a171) cell_imed_line_width_pane_g2

0x0001,

0xf92e,	// (0x0006c145) cell_imed_line_width_pane_g

0x73e2,	// (0x00063bf9) main_vded2_pane_g1_ParamLimits

0x73e2,	// (0x00063bf9) main_vded2_pane_g1

0x73ef,	// (0x00063c06) main_vded2_pane_g2_ParamLimits

0x73ef,	// (0x00063c06) main_vded2_pane_g2

0x0001,

0xf933,	// (0x0006c14a) main_vded2_pane_g_ParamLimits

0xf933,	// (0x0006c14a) main_vded2_pane_g

0x73fd,	// (0x00063c14) vded2_slider_pane_ParamLimits

0x73fd,	// (0x00063c14) vded2_slider_pane

0x740a,	// (0x00063c21) aid_size_touch_vded2_end

0x7414,	// (0x00063c2b) aid_size_touch_vded2_playhead

0xdb8b,	// (0x0006a3a2) aid_size_touch_vded2_start

0xdb93,	// (0x0006a3aa) vded2_slider_bg_pane

0xdb9c,	// (0x0006a3b3) vded2_slider_pane_g1

0xdba5,	// (0x0006a3bc) vded2_slider_pane_g2

0x741c,	// (0x00063c33) vded2_slider_pane_g3

0x0002,

0xf938,	// (0x0006c14f) vded2_slider_pane_g

0xdbad,	// (0x0006a3c4) vded2_slider_bg_pane_g1

0xdbb6,	// (0x0006a3cd) vded2_slider_bg_pane_g2

0xdbbf,	// (0x0006a3d6) vded2_slider_bg_pane_g3

0x0002,

0x07a9,	// (0x0005cfc0) vded2_slider_bg_pane_g

0x3aa9,	// (0x000602c0) aid_postcard_touch_down_pane_ParamLimits

0x3aa9,	// (0x000602c0) aid_postcard_touch_down_pane

0x3ab9,	// (0x000602d0) aid_postcard_touch_up_pane_ParamLimits

0x3ab9,	// (0x000602d0) aid_postcard_touch_up_pane

0x0fdd,	// (0x0005d7f4) main_blid2_pane

0x41f7,	// (0x00060a0e) popup_blid2_search_window

0x97c1,	// (0x00065fd8) blid2_gps_pane

0x97c1,	// (0x00065fd8) blid2_navig_pane

0x97c1,	// (0x00065fd8) blid2_search_pane

0x97c1,	// (0x00065fd8) blid2_tripm_pane

0x7425,	// (0x00063c3c) blid2_search_pane_g1_ParamLimits

0x7425,	// (0x00063c3c) blid2_search_pane_g1

0x7435,	// (0x00063c4c) blid2_search_pane_t1_ParamLimits

0x7435,	// (0x00063c4c) blid2_search_pane_t1

0x7447,	// (0x00063c5e) aid_size_cell_blid2_gps_ParamLimits

0x7447,	// (0x00063c5e) aid_size_cell_blid2_gps

0x7457,	// (0x00063c6e) blid2_gps_pane_g1_ParamLimits

0x7457,	// (0x00063c6e) blid2_gps_pane_g1

0x7463,	// (0x00063c7a) grid_blid2_satellite_pane_ParamLimits

0x7463,	// (0x00063c7a) grid_blid2_satellite_pane

0x7473,	// (0x00063c8a) blid2_navig_pane_g1_ParamLimits

0x7473,	// (0x00063c8a) blid2_navig_pane_g1

0x747f,	// (0x00063c96) blid2_navig_pane_t1_ParamLimits

0x747f,	// (0x00063c96) blid2_navig_pane_t1

0x7491,	// (0x00063ca8) blid2_navig_pane_t2_ParamLimits

0x7491,	// (0x00063ca8) blid2_navig_pane_t2

0x0001,

0xf93f,	// (0x0006c156) blid2_navig_pane_t_ParamLimits

0xf93f,	// (0x0006c156) blid2_navig_pane_t

0x74a3,	// (0x00063cba) blid2_navig_ring_pane_ParamLimits

0x74a3,	// (0x00063cba) blid2_navig_ring_pane

0x74b3,	// (0x00063cca) blid2_speed_pane_ParamLimits

0x74b3,	// (0x00063cca) blid2_speed_pane

0x74bf,	// (0x00063cd6) blid2_tripm_pane_g1_ParamLimits

0x74bf,	// (0x00063cd6) blid2_tripm_pane_g1

0x74cf,	// (0x00063ce6) blid2_tripm_pane_g2_ParamLimits

0x74cf,	// (0x00063ce6) blid2_tripm_pane_g2

0x74db,	// (0x00063cf2) blid2_tripm_pane_g3_ParamLimits

0x74db,	// (0x00063cf2) blid2_tripm_pane_g3

0x74e7,	// (0x00063cfe) blid2_tripm_pane_g4_ParamLimits

0x74e7,	// (0x00063cfe) blid2_tripm_pane_g4

0x74f3,	// (0x00063d0a) blid2_tripm_pane_g5_ParamLimits

0x74f3,	// (0x00063d0a) blid2_tripm_pane_g5

0x0005,

0xf944,	// (0x0006c15b) blid2_tripm_pane_g_ParamLimits

0xf944,	// (0x0006c15b) blid2_tripm_pane_g

0x750f,	// (0x00063d26) blid2_tripm_pane_t1_ParamLimits

0x750f,	// (0x00063d26) blid2_tripm_pane_t1

0x7523,	// (0x00063d3a) blid2_tripm_pane_t2_ParamLimits

0x7523,	// (0x00063d3a) blid2_tripm_pane_t2

0x7535,	// (0x00063d4c) blid2_tripm_pane_t3_ParamLimits

0x7535,	// (0x00063d4c) blid2_tripm_pane_t3

0x0003,

0xf951,	// (0x0006c168) blid2_tripm_pane_t_ParamLimits

0xf951,	// (0x0006c168) blid2_tripm_pane_t

0x7567,	// (0x00063d7e) cell_blid2_satellite_pane_ParamLimits

0x7567,	// (0x00063d7e) cell_blid2_satellite_pane

0x7581,	// (0x00063d98) cell_blid2_satellite_pane_g1

0xdbc8,	// (0x0006a3df) cell_blid2_satellite_pane_t1

0xcbaf,	// (0x000693c6) blid2_speed_pane_g1

0xdbfc,	// (0x0006a413) blid2_speed_pane_t1

0xdc0a,	// (0x0006a421) blid2_speed_pane_t2

0x0001,

0xf95a,	// (0x0006c171) blid2_speed_pane_t

0xcbaf,	// (0x000693c6) blid2_navig_ring_pane_g1

0x758a,	// (0x00063da1) blid2_navig_ring_pane_g2

0x7592,	// (0x00063da9) blid2_navig_ring_pane_g3

0x759a,	// (0x00063db1) blid2_navig_ring_pane_g4

0x75a2,	// (0x00063db9) blid2_navig_ring_pane_g5

0x0004,

0xf95f,	// (0x0006c176) blid2_navig_ring_pane_g

0x97c1,	// (0x00065fd8) bg_popup_window_pane_cp011

0xdc18,	// (0x0006a42f) popup_blid2_search_window_g1

0xdc20,	// (0x0006a437) popup_blid2_search_window_t1

0xdc2e,	// (0x0006a445) popup_blid2_search_window_t2

0x0001,

0xf96a,	// (0x0006c181) popup_blid2_search_window_t

0xaa4b,	// (0x00067262) main_browser_pane_g1

0xa735,	// (0x00066f4c) main_browser_pane_ParamLimits

0x41ce,	// (0x000609e5) bg_button_pane_cp011_ParamLimits

0x6555,	// (0x00062d6c) cell_vitu2_function_pane_g1_ParamLimits

0xc7a5,	// (0x00068fbc) bg_popup_sub_pane_cp22_ParamLimits

0x6e7f,	// (0x00063696) input_focus_pane_cp08_ParamLimits

0x6e96,	// (0x000636ad) popup_vitu2_query_button_pane_ParamLimits

0x6e96,	// (0x000636ad) popup_vitu2_query_button_pane

0x6ea7,	// (0x000636be) popup_vitu2_query_input_button_pane

0xd87d,	// (0x0006a094) popup_vitu2_query_window_g1_ParamLimits

0x6eb1,	// (0x000636c8) popup_vitu2_query_window_g2_ParamLimits

0xf872,	// (0x0006c089) popup_vitu2_query_window_g_ParamLimits

0x97c1,	// (0x00065fd8) bg_button_pane_cp026

0x75aa,	// (0x00063dc1) popup_vitu2_query_input_button_pane_g1

0x97c1,	// (0x00065fd8) bg_button_pane_cp025

0xdc3c,	// (0x0006a453) popup_vitu2_query_button_pane_t1

0x4c50,	// (0x00061467) main_mp3_pane_t6

0x4c60,	// (0x00061477) popup_slider_window_cp01

0x6190,	// (0x000629a7) cam4_battery_pane

0x6270,	// (0x00062a87) cam4_battery_pane_cp02

0x72ea,	// (0x00063b01) cam4_battery_pane_cp01

0x72ea,	// (0x00063b01) cam4_battery_pane_cp03

0xdbe4,	// (0x0006a3fb) cam4_battery_pane_g1

0xcbaf,	// (0x000693c6) cam4_battery_pane_g2

0x0001,

0xf96f,	// (0x0006c186) cam4_battery_pane_g

0xca79,	// (0x00069290) popup_blid_sat_info2_window_t11

0xb1c8,	// (0x000679df) aid_size_touch_mv_arrow_left_ParamLimits

0xb1f3,	// (0x00067a0a) aid_size_touch_mv_arrow_right_ParamLimits

0xb251,	// (0x00067a68) navi_pane_g1_ParamLimits

0xb25d,	// (0x00067a74) navi_pane_g2_ParamLimits

0xb28b,	// (0x00067aa2) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0006bbfc) navi_pane_g_ParamLimits

0x34da,	// (0x0005fcf1) navi_pane_mv_t1_ParamLimits

0x5728,	// (0x00061f3f) grid_imed_effect_pane_ParamLimits

0x1e9c,	// (0x0005e6b3) aid_placing_vt_slider_lsc

0xa99a,	// (0x000671b1) aid_placing_vt_slider_prt

0xa5b3,	// (0x00066dca) bg_tb_trans_pane_cp01_ParamLimits

0xcd2f,	// (0x00069546) popup_image_details_window_g1_ParamLimits

0xcd42,	// (0x00069559) popup_image_details_window_g2_ParamLimits

0xcd57,	// (0x0006956e) popup_image_details_window_g3_ParamLimits

0xcd57,	// (0x0006956e) popup_image_details_window_g3

0x03d8,	// (0x0005cbef) popup_image_details_window_g_ParamLimits

0xcd6b,	// (0x00069582) popup_image_details_window_t1_ParamLimits

0xcd7d,	// (0x00069594) popup_image_details_window_t2_ParamLimits

0xcd96,	// (0x000695ad) popup_image_details_window_t3_ParamLimits

0xcdaa,	// (0x000695c1) popup_image_details_window_t4_ParamLimits

0xcdc5,	// (0x000695dc) popup_image_details_window_t5_ParamLimits

0x03df,	// (0x0005cbf6) popup_image_details_window_t_ParamLimits

0x720a,	// (0x00063a21) cl_header_name_pane_ParamLimits

0x720a,	// (0x00063a21) cl_header_name_pane

0x75b2,	// (0x00063dc9) cl_header_name_pane_t1_ParamLimits

0x75b2,	// (0x00063dc9) cl_header_name_pane_t1

0x75c9,	// (0x00063de0) cl_header_name_pane_t2_ParamLimits

0x75c9,	// (0x00063de0) cl_header_name_pane_t2

0x75f3,	// (0x00063e0a) cl_header_name_pane_t3_ParamLimits

0x75f3,	// (0x00063e0a) cl_header_name_pane_t3

0x0002,

0xf974,	// (0x0006c18b) cl_header_name_pane_t_ParamLimits

0xf974,	// (0x0006c18b) cl_header_name_pane_t

0xb33b,	// (0x00067b52) navi_pane_mv_g2_ParamLimits

0xd5e6,	// (0x00069dfd) field_vitu2_entry_pane_g1_ParamLimits

0xd5f2,	// (0x00069e09) field_vitu2_entry_pane_g2_ParamLimits

0xd5fe,	// (0x00069e15) field_vitu2_entry_pane_g3_ParamLimits

0xd5fe,	// (0x00069e15) field_vitu2_entry_pane_g3

0x05db,	// (0x0005cdf2) field_vitu2_entry_pane_g_ParamLimits

0x64e9,	// (0x00062d00) cell_vitu2_itu_pane_g1_ParamLimits

0x64fb,	// (0x00062d12) cell_vitu2_itu_pane_g2_ParamLimits

0x64fb,	// (0x00062d12) cell_vitu2_itu_pane_g2

0x0001,

0xf796,	// (0x0006bfad) cell_vitu2_itu_pane_g_ParamLimits

0xf796,	// (0x0006bfad) cell_vitu2_itu_pane_g

0x41ce,	// (0x000609e5) bg_vkb2_func_pane_cp05_ParamLimits

0x41ce,	// (0x000609e5) bg_vkb2_func_pane_cp05

0x41ce,	// (0x000609e5) bg_vkb2_func_pane_cp03

0x41ce,	// (0x000609e5) bg_vkb2_func_pane_cp04

0x41ce,	// (0x000609e5) bg_vkb2_func_pane_cp10_ParamLimits

0x41ce,	// (0x000609e5) bg_vkb2_func_pane_cp10

0x71ac,	// (0x000639c3) bg_vkb2_func_pane_cp08

0x7192,	// (0x000639a9) bg_vkb2_func_pane_cp06

0x71a0,	// (0x000639b7) bg_vkb2_func_pane_cp07

0xdb24,	// (0x0006a33b) bg_vkb2_func_pane_cp11_ParamLimits

0xdb24,	// (0x0006a33b) bg_vkb2_func_pane_cp11

0xdb39,	// (0x0006a350) bg_vkb2_func_pane_cp12_ParamLimits

0xdb39,	// (0x0006a350) bg_vkb2_func_pane_cp12

0x97c1,	// (0x00065fd8) bg_vkb2_func_pane_cp09

0xd61e,	// (0x00069e35) bg_vkb2_func_pane_g1

0xab5c,	// (0x00067373) bg_vkb2_func_pane_g2

0xd626,	// (0x00069e3d) bg_vkb2_func_pane_g3

0xd62e,	// (0x00069e45) bg_vkb2_func_pane_g4

0xd842,	// (0x0006a059) bg_vkb2_func_pane_g5

0xd646,	// (0x00069e5d) bg_vkb2_func_pane_g6

0xd64e,	// (0x00069e65) bg_vkb2_func_pane_g7

0xd63e,	// (0x00069e55) bg_vkb2_func_pane_g8

0xab3c,	// (0x00067353) bg_vkb2_func_pane_g9

0x0008,

0xf97b,	// (0x0006c192) bg_vkb2_func_pane_g

0x7501,	// (0x00063d18) blid2_tripm_pane_g6_ParamLimits

0x7501,	// (0x00063d18) blid2_tripm_pane_g6

0xd48a,	// (0x00069ca1) mp4_progress_pane_g1

0x755b,	// (0x00063d72) blid2_tripm_values_pane_ParamLimits

0x755b,	// (0x00063d72) blid2_tripm_values_pane

0x7618,	// (0x00063e2f) blid2_tripm_values_pane_t1

0x7626,	// (0x00063e3d) blid2_tripm_values_pane_t2

0x7634,	// (0x00063e4b) blid2_tripm_values_pane_t3

0x7642,	// (0x00063e59) blid2_tripm_values_pane_t4

0x7650,	// (0x00063e67) blid2_tripm_values_pane_t5

0x765e,	// (0x00063e75) blid2_tripm_values_pane_t6

0x766c,	// (0x00063e83) blid2_tripm_values_pane_t7

0x767a,	// (0x00063e91) blid2_tripm_values_pane_t8

0x7688,	// (0x00063e9f) blid2_tripm_values_pane_t9

0x0008,

0xf98e,	// (0x0006c1a5) blid2_tripm_values_pane_t

0x1edc,	// (0x0005e6f3) call_video_pane_t1_ParamLimits

0x1efd,	// (0x0005e714) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006ba85) call_video_pane_t_ParamLimits

0x39f1,	// (0x00060208) msg_header_pane_g1_ParamLimits

0xb515,	// (0x00067d2c) msg_header_pane_g2_ParamLimits

0xb515,	// (0x00067d2c) msg_header_pane_g2

0x0001,

0xf475,	// (0x0006bc8c) msg_header_pane_g_ParamLimits

0xf475,	// (0x0006bc8c) msg_header_pane_g

0xa735,	// (0x00066f4c) main_clock2_pane_ParamLimits

0x54b9,	// (0x00061cd0) grid_clock2_toolbar_pane_ParamLimits

0x54b9,	// (0x00061cd0) grid_clock2_toolbar_pane

0x54b9,	// (0x00061cd0) listscroll_clock2_pane_ParamLimits

0x54b9,	// (0x00061cd0) listscroll_clock2_pane

0x5563,	// (0x00061d7a) main_clock2_pane_t3_ParamLimits

0x5563,	// (0x00061d7a) main_clock2_pane_t3

0x5575,	// (0x00061d8c) main_clock2_pane_t4_ParamLimits

0x5575,	// (0x00061d8c) main_clock2_pane_t4

0xdc4a,	// (0x0006a461) cell_clock2_toolbar_pane

0xdc52,	// (0x0006a469) cell_clock2_toolbar_pane_cp01

0xdc52,	// (0x0006a469) cell_clock2_toolbar_pane_cp02

0xdc5a,	// (0x0006a471) cell_clock2_toolbar_pane_cp03

0xdc62,	// (0x0006a479) list_clock2_pane

0xb13e,	// (0x00067955) scroll_pane_cp10

0xdc6a,	// (0x0006a481) list_single_clock2_pane_ParamLimits

0xdc6a,	// (0x0006a481) list_single_clock2_pane

0xa903,	// (0x0006711a) list_highlight_pane_cp08

0xdc77,	// (0x0006a48e) list_single_clock2_pane_t1

0xdc85,	// (0x0006a49c) list_single_clock2_pane_t2

0x0001,

0xf9a1,	// (0x0006c1b8) list_single_clock2_pane_t

0x97c1,	// (0x00065fd8) bg_button_pane_cp10

0xdc93,	// (0x0006a4aa) cell_clock2_toolbar_pane_g1

0x3a17,	// (0x0006022e) aid_main_viewer_pane_g1_ParamLimits

0x3a17,	// (0x0006022e) aid_main_viewer_pane_g1

0x3a23,	// (0x0006023a) aid_main_viewer_pane_g2_ParamLimits

0x3a23,	// (0x0006023a) aid_main_viewer_pane_g2

0x3a2f,	// (0x00060246) aid_main_viewer_pane_g3_ParamLimits

0x3a2f,	// (0x00060246) aid_main_viewer_pane_g3

0x3a40,	// (0x00060257) aid_main_viewer_pane_g4_ParamLimits

0x3a40,	// (0x00060257) aid_main_viewer_pane_g4

0x0003,

0xf486,	// (0x0006bc9d) aid_main_viewer_pane_g_ParamLimits

0xf486,	// (0x0006bc9d) aid_main_viewer_pane_g

0x41c1,	// (0x000609d8) main_calc_pane_ParamLimits

0x41dc,	// (0x000609f3) main_dialer2_pane_ParamLimits

0x0fdd,	// (0x0005d7f4) main_cam6_pane

0x0fdd,	// (0x0005d7f4) main_vid6_pane

0x54c5,	// (0x00061cdc) listscroll_gen_pane_cp06_ParamLimits

0x54c5,	// (0x00061cdc) listscroll_gen_pane_cp06

0x5587,	// (0x00061d9e) main_clock2_pane_t5_ParamLimits

0x5587,	// (0x00061d9e) main_clock2_pane_t5

0x55d2,	// (0x00061de9) aid_call2_pane_cp10_ParamLimits

0x55e4,	// (0x00061dfb) aid_call_pane_cp10_ParamLimits

0xb1bc,	// (0x000679d3) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1bc,	// (0x000679d3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x55f6,	// (0x00061e0d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x55f6,	// (0x00061e0d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1bc,	// (0x000679d3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf686,	// (0x0006be9d) popup_clock_analogue_window_cp10_g_ParamLimits

0x5608,	// (0x00061e1f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5df3,	// (0x0006260a) cell_dialer2_keypad_pane_g2_ParamLimits

0x5df3,	// (0x0006260a) cell_dialer2_keypad_pane_g2

0x0001,

0xf730,	// (0x0006bf47) cell_dialer2_keypad_pane_g_ParamLimits

0xf730,	// (0x0006bf47) cell_dialer2_keypad_pane_g

0x5e0f,	// (0x00062626) cell_dialer2_keypad_pane_t1

0x6822,	// (0x00063039) main_cset_text2_pane_ParamLimits

0x6822,	// (0x00063039) main_cset_text2_pane

0xda8c,	// (0x0006a2a3) area_vitu2_query_pane_g1_ParamLimits

0x7131,	// (0x00063948) area_vitu2_query_pane_g2_ParamLimits

0xf8c5,	// (0x0006c0dc) area_vitu2_query_pane_g_ParamLimits

0x9eec,	// (0x00066703) area_vitu2_query_pane_t7_ParamLimits

0x9eec,	// (0x00066703) area_vitu2_query_pane_t7

0x7192,	// (0x000639a9) bg_button_pane_cp018_ParamLimits

0x71a0,	// (0x000639b7) bg_button_pane_cp021_ParamLimits

0x71ac,	// (0x000639c3) bg_button_pane_cp022_ParamLimits

0x71ac,	// (0x000639c3) bg_vkb2_func_pane_cp08_ParamLimits

0x7192,	// (0x000639a9) bg_vkb2_func_pane_cp06_ParamLimits

0x71a0,	// (0x000639b7) bg_vkb2_func_pane_cp07_ParamLimits

0x71bd,	// (0x000639d4) input_focus_pane_cp09_ParamLimits

0x7696,	// (0x00063ead) cam6_autofocus_pane_ParamLimits

0x7696,	// (0x00063ead) cam6_autofocus_pane

0x76b8,	// (0x00063ecf) cam6_image_uncrop_pane_ParamLimits

0x76b8,	// (0x00063ecf) cam6_image_uncrop_pane

0x76e5,	// (0x00063efc) cam6_indi_pane_ParamLimits

0x76e5,	// (0x00063efc) cam6_indi_pane

0x76ff,	// (0x00063f16) cam6_mode_pane_ParamLimits

0x76ff,	// (0x00063f16) cam6_mode_pane

0x7713,	// (0x00063f2a) cam6_timer_pane_ParamLimits

0x7713,	// (0x00063f2a) cam6_timer_pane

0x771f,	// (0x00063f36) cam6_zoom_pane_ParamLimits

0x771f,	// (0x00063f36) cam6_zoom_pane

0x7737,	// (0x00063f4e) cam6_mode_pane_g1_ParamLimits

0x7737,	// (0x00063f4e) cam6_mode_pane_g1

0x7743,	// (0x00063f5a) cam6_mode_pane_g2_ParamLimits

0x7743,	// (0x00063f5a) cam6_mode_pane_g2

0x774f,	// (0x00063f66) cam6_mode_pane_g3_ParamLimits

0x774f,	// (0x00063f66) cam6_mode_pane_g3

0x775b,	// (0x00063f72) cam6_mode_pane_g4_ParamLimits

0x775b,	// (0x00063f72) cam6_mode_pane_g4

0x0003,

0xf9a6,	// (0x0006c1bd) cam6_mode_pane_g_ParamLimits

0xf9a6,	// (0x0006c1bd) cam6_mode_pane_g

0xdbee,	// (0x0006a405) bg_tb_trans_pane_cp08_ParamLimits

0xdbee,	// (0x0006a405) bg_tb_trans_pane_cp08

0xdc9b,	// (0x0006a4b2) cam6_battery_pane_ParamLimits

0xdc9b,	// (0x0006a4b2) cam6_battery_pane

0xdcb1,	// (0x0006a4c8) cam6_indi_pane_g1_ParamLimits

0xdcb1,	// (0x0006a4c8) cam6_indi_pane_g1

0xdcc3,	// (0x0006a4da) cam6_indi_pane_g2_ParamLimits

0xdcc3,	// (0x0006a4da) cam6_indi_pane_g2

0xdcd5,	// (0x0006a4ec) cam6_indi_pane_g3_ParamLimits

0xdcd5,	// (0x0006a4ec) cam6_indi_pane_g3

0x0002,

0xf9af,	// (0x0006c1c6) cam6_indi_pane_g_ParamLimits

0xf9af,	// (0x0006c1c6) cam6_indi_pane_g

0xdce7,	// (0x0006a4fe) cam6_indi_pane_t1_ParamLimits

0xdce7,	// (0x0006a4fe) cam6_indi_pane_t1

0x62ec,	// (0x00062b03) cam6_autofocus_pane_g1

0x62e4,	// (0x00062afb) cam6_autofocus_pane_g2

0x62fc,	// (0x00062b13) cam6_autofocus_pane_g3

0x62f4,	// (0x00062b0b) cam6_autofocus_pane_g4

0x0003,

0xf9b6,	// (0x0006c1cd) cam6_autofocus_pane_g

0xdd0d,	// (0x0006a524) cam6_timer_pane_g1

0xdd15,	// (0x0006a52c) cam6_timer_pane_t1

0xdd23,	// (0x0006a53a) cam6_zoom_cont_pane

0xdd2b,	// (0x0006a542) cam6_zoom_pane_g1

0xdd33,	// (0x0006a54a) cam6_zoom_pane_g2

0x7767,	// (0x00063f7e) cam6_zoom_pane_g3

0x0002,

0xf9bf,	// (0x0006c1d6) cam6_zoom_pane_g

0xcbaf,	// (0x000693c6) cam6_battery_pane_g1

0xcbaf,	// (0x000693c6) cam6_battery_pane_g2

0x0001,

0x039c,	// (0x0005cbb3) cam6_battery_pane_g

0xdd3b,	// (0x0006a552) cam6_zoom_cont_pane_g1

0xdd44,	// (0x0006a55b) cam6_zoom_cont_pane_g2

0xdd4d,	// (0x0006a564) cam6_zoom_cont_pane_g3

0x0002,

0xf9c6,	// (0x0006c1dd) cam6_zoom_cont_pane_g

0x7784,	// (0x00063f9b) cam6_mode_pane_cp_ParamLimits

0x7784,	// (0x00063f9b) cam6_mode_pane_cp

0x7798,	// (0x00063faf) cam6_zoom_pane_cp_ParamLimits

0x7798,	// (0x00063faf) cam6_zoom_pane_cp

0x77b0,	// (0x00063fc7) vid6_image_uncrop_cif_pane_ParamLimits

0x77b0,	// (0x00063fc7) vid6_image_uncrop_cif_pane

0x77dc,	// (0x00063ff3) vid6_image_uncrop_nhd_pane_ParamLimits

0x77dc,	// (0x00063ff3) vid6_image_uncrop_nhd_pane

0x77f9,	// (0x00064010) vid6_image_uncrop_vga_pane_ParamLimits

0x77f9,	// (0x00064010) vid6_image_uncrop_vga_pane

0x7818,	// (0x0006402f) vid6_image_uncrop_wvga_pane_ParamLimits

0x7818,	// (0x0006402f) vid6_image_uncrop_wvga_pane

0x7835,	// (0x0006404c) vid6_indi_pane_ParamLimits

0x7835,	// (0x0006404c) vid6_indi_pane

0xdbee,	// (0x0006a405) bg_tb_trans_pane_cp09_ParamLimits

0xdbee,	// (0x0006a405) bg_tb_trans_pane_cp09

0xdd65,	// (0x0006a57c) cam6_battery_pane_cp_ParamLimits

0xdd65,	// (0x0006a57c) cam6_battery_pane_cp

0xdd71,	// (0x0006a588) vid6_indi_pane_g1_ParamLimits

0xdd71,	// (0x0006a588) vid6_indi_pane_g1

0xdd83,	// (0x0006a59a) vid6_indi_pane_g2_ParamLimits

0xdd83,	// (0x0006a59a) vid6_indi_pane_g2

0xdd95,	// (0x0006a5ac) vid6_indi_pane_g3_ParamLimits

0xdd95,	// (0x0006a5ac) vid6_indi_pane_g3

0xddaa,	// (0x0006a5c1) vid6_indi_pane_g4_ParamLimits

0xddaa,	// (0x0006a5c1) vid6_indi_pane_g4

0xddbf,	// (0x0006a5d6) vid6_indi_pane_g5_ParamLimits

0xddbf,	// (0x0006a5d6) vid6_indi_pane_g5

0x0004,

0xf9cd,	// (0x0006c1e4) vid6_indi_pane_g_ParamLimits

0xf9cd,	// (0x0006c1e4) vid6_indi_pane_g

0xddd9,	// (0x0006a5f0) vid6_indi_pane_t1_ParamLimits

0xddd9,	// (0x0006a5f0) vid6_indi_pane_t1

0xddef,	// (0x0006a606) vid6_indi_pane_t2_ParamLimits

0xddef,	// (0x0006a606) vid6_indi_pane_t2

0xde17,	// (0x0006a62e) vid6_indi_pane_t3_ParamLimits

0xde17,	// (0x0006a62e) vid6_indi_pane_t3

0xde5a,	// (0x0006a671) vid6_indi_pane_t4_ParamLimits

0xde5a,	// (0x0006a671) vid6_indi_pane_t4

0x0003,

0xf9d8,	// (0x0006c1ef) vid6_indi_pane_t_ParamLimits

0xf9d8,	// (0x0006c1ef) vid6_indi_pane_t

0xde7e,	// (0x0006a695) wait_bar_pane_cp08

0x7858,	// (0x0006406f) main_cset_text2_pane_t1_ParamLimits

0x7858,	// (0x0006406f) main_cset_text2_pane_t1

0x776f,	// (0x00063f86) listscroll_gen_pane_cp06_t1_ParamLimits

0x776f,	// (0x00063f86) listscroll_gen_pane_cp06_t1

0x0fdd,	// (0x0005d7f4) main_cam6_set_pane

0x6182,	// (0x00062999) bg_tb_trans_pane_cp06_ParamLimits

0x6198,	// (0x000629af) cam4_indicators_pane_g1_ParamLimits

0x61a9,	// (0x000629c0) cam4_indicators_pane_g2_ParamLimits

0xf76d,	// (0x0006bf84) cam4_indicators_pane_g_ParamLimits

0x61c7,	// (0x000629de) cam4_indicators_pane_t1_ParamLimits

0x41ce,	// (0x000609e5) bg_tb_trans_pane_cp07_ParamLimits

0x6278,	// (0x00062a8f) vid4_indicators_pane_g1_ParamLimits

0x628c,	// (0x00062aa3) vid4_indicators_pane_g2_ParamLimits

0x62a0,	// (0x00062ab7) vid4_indicators_pane_g3_ParamLimits

0x62b1,	// (0x00062ac8) vid4_indicators_pane_g4_ParamLimits

0xf77f,	// (0x0006bf96) vid4_indicators_pane_g_ParamLimits

0x62cd,	// (0x00062ae4) vid4_indicators_pane_t1_ParamLimits

0x72f2,	// (0x00063b09) vid4_progress_pane_g1_ParamLimits

0x7302,	// (0x00063b19) vid4_progress_pane_g2_ParamLimits

0x7312,	// (0x00063b29) vid4_progress_pane_g3_ParamLimits

0x7324,	// (0x00063b3b) vid4_progress_pane_g4_ParamLimits

0xf910,	// (0x0006c127) vid4_progress_pane_g_ParamLimits

0x7342,	// (0x00063b59) vid4_progress_pane_t1_ParamLimits

0x7358,	// (0x00063b6f) vid4_progress_pane_t2_ParamLimits

0x736d,	// (0x00063b84) vid4_progress_pane_t3_ParamLimits

0xf91b,	// (0x0006c132) vid4_progress_pane_t_ParamLimits

0x7383,	// (0x00063b9a) wait_bar_pane_cp07_ParamLimits

0x7892,	// (0x000640a9) main_cam6_set_pane_g2_ParamLimits

0x7892,	// (0x000640a9) main_cam6_set_pane_g2

0x789e,	// (0x000640b5) main_cset6_listscroll_pane_ParamLimits

0x789e,	// (0x000640b5) main_cset6_listscroll_pane

0x78c9,	// (0x000640e0) main_cset6_slider_pane_ParamLimits

0x78c9,	// (0x000640e0) main_cset6_slider_pane

0x78d5,	// (0x000640ec) main_cset6_text2_pane_ParamLimits

0x78d5,	// (0x000640ec) main_cset6_text2_pane

0xde8d,	// (0x0006a6a4) main_cset6_text_pane

0xde95,	// (0x0006a6ac) main_cset_list_pane_copy1_ParamLimits

0xde95,	// (0x0006a6ac) main_cset_list_pane_copy1

0xdea5,	// (0x0006a6bc) scroll_pane_cp028_copy1

0x78e8,	// (0x000640ff) cset_list_set_pane_copy1

0x7901,	// (0x00064118) aid_position_infowindow_above_copy1

0x7909,	// (0x00064120) aid_position_infowindow_below_copy1

0x7911,	// (0x00064128) cset_list_set_pane_g1_copy1

0x6b17,	// (0x0006332e) cset_list_set_pane_g3_copy1_ParamLimits

0x6b17,	// (0x0006332e) cset_list_set_pane_g3_copy1

0x9e39,	// (0x00066650) cset_list_set_pane_t1_copy1_ParamLimits

0x9e39,	// (0x00066650) cset_list_set_pane_t1_copy1

0xa5b3,	// (0x00066dca) list_highlight_pane_cp021_copy1_ParamLimits

0xa5b3,	// (0x00066dca) list_highlight_pane_cp021_copy1

0xdeae,	// (0x0006a6c5) cset6_slider_pane_ParamLimits

0xdeae,	// (0x0006a6c5) cset6_slider_pane

0xdeda,	// (0x0006a6f1) main_cset6_slider_pane_g1_ParamLimits

0xdeda,	// (0x0006a6f1) main_cset6_slider_pane_g1

0x7919,	// (0x00064130) main_cset6_slider_pane_g2_ParamLimits

0x7919,	// (0x00064130) main_cset6_slider_pane_g2

0xdf02,	// (0x0006a719) main_cset6_slider_pane_g3_ParamLimits

0xdf02,	// (0x0006a719) main_cset6_slider_pane_g3

0x7941,	// (0x00064158) main_cset6_slider_pane_g4_ParamLimits

0x7941,	// (0x00064158) main_cset6_slider_pane_g4

0x794d,	// (0x00064164) main_cset6_slider_pane_g5_ParamLimits

0x794d,	// (0x00064164) main_cset6_slider_pane_g5

0xd74d,	// (0x00069f64) main_cset6_slider_pane_g7_ParamLimits

0xd74d,	// (0x00069f64) main_cset6_slider_pane_g7

0xd759,	// (0x00069f70) main_cset6_slider_pane_g8_ParamLimits

0xd759,	// (0x00069f70) main_cset6_slider_pane_g8

0x795b,	// (0x00064172) main_cset6_slider_pane_g9_ParamLimits

0x795b,	// (0x00064172) main_cset6_slider_pane_g9

0x7967,	// (0x0006417e) main_cset6_slider_pane_g10_ParamLimits

0x7967,	// (0x0006417e) main_cset6_slider_pane_g10

0x7973,	// (0x0006418a) main_cset6_slider_pane_g11_ParamLimits

0x7973,	// (0x0006418a) main_cset6_slider_pane_g11

0x797f,	// (0x00064196) main_cset6_slider_pane_g12_ParamLimits

0x797f,	// (0x00064196) main_cset6_slider_pane_g12

0x798b,	// (0x000641a2) main_cset6_slider_pane_g13_ParamLimits

0x798b,	// (0x000641a2) main_cset6_slider_pane_g13

0x7997,	// (0x000641ae) main_cset6_slider_pane_g14_ParamLimits

0x7997,	// (0x000641ae) main_cset6_slider_pane_g14

0x79a3,	// (0x000641ba) main_cset6_slider_pane_g15_ParamLimits

0x79a3,	// (0x000641ba) main_cset6_slider_pane_g15

0x79bb,	// (0x000641d2) main_cset6_slider_pane_g16_ParamLimits

0x79bb,	// (0x000641d2) main_cset6_slider_pane_g16

0x79c9,	// (0x000641e0) main_cset6_slider_pane_g17_ParamLimits

0x79c9,	// (0x000641e0) main_cset6_slider_pane_g17

0x0011,

0xf9e1,	// (0x0006c1f8) main_cset6_slider_pane_g_ParamLimits

0xf9e1,	// (0x0006c1f8) main_cset6_slider_pane_g

0xdf0e,	// (0x0006a725) main_cset6_slider_pane_t1_ParamLimits

0xdf0e,	// (0x0006a725) main_cset6_slider_pane_t1

0x79ef,	// (0x00064206) main_cset6_slider_pane_t2_ParamLimits

0x79ef,	// (0x00064206) main_cset6_slider_pane_t2

0x7a1a,	// (0x00064231) main_cset6_slider_pane_t3_ParamLimits

0x7a1a,	// (0x00064231) main_cset6_slider_pane_t3

0x7a45,	// (0x0006425c) main_cset6_slider_pane_t4_ParamLimits

0x7a45,	// (0x0006425c) main_cset6_slider_pane_t4

0x7a70,	// (0x00064287) main_cset6_slider_pane_t5_ParamLimits

0x7a70,	// (0x00064287) main_cset6_slider_pane_t5

0xdf4f,	// (0x0006a766) main_cset6_slider_pane_t7_ParamLimits

0xdf4f,	// (0x0006a766) main_cset6_slider_pane_t7

0x7a9d,	// (0x000642b4) main_cset6_slider_pane_t8_ParamLimits

0x7a9d,	// (0x000642b4) main_cset6_slider_pane_t8

0x7ac1,	// (0x000642d8) main_cset6_slider_pane_t9_ParamLimits

0x7ac1,	// (0x000642d8) main_cset6_slider_pane_t9

0x7ae5,	// (0x000642fc) main_cset6_slider_pane_t10_ParamLimits

0x7ae5,	// (0x000642fc) main_cset6_slider_pane_t10

0x7b09,	// (0x00064320) main_cset6_slider_pane_t11_ParamLimits

0x7b09,	// (0x00064320) main_cset6_slider_pane_t11

0xdf85,	// (0x0006a79c) main_cset6_slider_pane_t14_ParamLimits

0xdf85,	// (0x0006a79c) main_cset6_slider_pane_t14

0xdfbe,	// (0x0006a7d5) main_cset6_slider_pane_t15_ParamLimits

0xdfbe,	// (0x0006a7d5) main_cset6_slider_pane_t15

0x000b,

0xfa06,	// (0x0006c21d) main_cset6_slider_pane_t_ParamLimits

0xfa06,	// (0x0006c21d) main_cset6_slider_pane_t

0xd933,	// (0x0006a14a) cset_slider_pane_g1_copy1

0xd93c,	// (0x0006a153) cset_slider_pane_g2_copy1

0xd945,	// (0x0006a15c) cset_slider_pane_g3_copy1

0x97c1,	// (0x00065fd8) bg_popup_sub_pane_cp011_copy1

0xdff7,	// (0x0006a80e) main_cset_text_pane_g1_copy1

0xd891,	// (0x0006a0a8) main_cset_text_pane_t1_copy1

0xd89f,	// (0x0006a0b6) main_cset_text_pane_t2_copy1

0xd8ad,	// (0x0006a0c4) main_cset_text_pane_t3_copy1

0xd8bb,	// (0x0006a0d2) main_cset_text_pane_t4_copy1

0xd8c9,	// (0x0006a0e0) main_cset_text_pane_t5_copy1

0xdfff,	// (0x0006a816) main_cset_text_pane_t6_copy1

0xe00d,	// (0x0006a824) main_cset_text_pane_t7_copy1

0x7ba4,	// (0x000643bb) main_cset_text2_pane_t1_copy1

0x41ce,	// (0x000609e5) main_ncimui_pane

0x422d,	// (0x00060a44) popup_query_ncimui_window_ParamLimits

0x422d,	// (0x00060a44) popup_query_ncimui_window

0x9dd8,	// (0x000665ef) field_cale_ev2_pane_g4_ParamLimits

0x9dd8,	// (0x000665ef) field_cale_ev2_pane_g4

0x5b13,	// (0x0006232a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5b13,	// (0x0006232a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf710,	// (0x0006bf27) cell_video_dialer_keypad_pane_g_ParamLimits

0xf710,	// (0x0006bf27) cell_video_dialer_keypad_pane_g

0x5b2b,	// (0x00062342) cell_video_dialer_keypad_pane_t1

0x97c1,	// (0x00065fd8) bg_popup_window_pane_cp012

0xaff1,	// (0x00067808) heading_pane_cp06

0xe039,	// (0x0006a850) ncim_query_content_pane

0x97c1,	// (0x00065fd8) bg_popup_heading_pane_cp01

0xe041,	// (0x0006a858) ncim_heading_pane_t1

0xe04f,	// (0x0006a866) ncim_indicator_popup_pane

0xe061,	// (0x0006a878) ncim_query_button_pane

0xe075,	// (0x0006a88c) ncim_query_content_pane_t1

0xe087,	// (0x0006a89e) ncim_query_content_pane_t2

0x0005,

0xfa4a,	// (0x0006c261) ncim_query_content_pane_t

0xe0ca,	// (0x0006a8e1) ncim_query_list_pane

0xe0dc,	// (0x0006a8f3) ncim_query_popup_pane

0xe04f,	// (0x0006a866) ncim_indicator_popup_pane_ParamLimits

0x7cfe,	// (0x00064515) ncim_query_content_pane_g1_ParamLimits

0x7cfe,	// (0x00064515) ncim_query_content_pane_g1

0xe075,	// (0x0006a88c) ncim_query_content_pane_t1_ParamLimits

0xe087,	// (0x0006a89e) ncim_query_content_pane_t2_ParamLimits

0x7d0a,	// (0x00064521) ncim_query_content_pane_t3_ParamLimits

0x7d0a,	// (0x00064521) ncim_query_content_pane_t3

0x7d27,	// (0x0006453e) ncim_query_content_pane_t4_ParamLimits

0x7d27,	// (0x0006453e) ncim_query_content_pane_t4

0x7d44,	// (0x0006455b) ncim_query_content_pane_t5_ParamLimits

0x7d44,	// (0x0006455b) ncim_query_content_pane_t5

0xe099,	// (0x0006a8b0) ncim_query_content_pane_t6_ParamLimits

0xe099,	// (0x0006a8b0) ncim_query_content_pane_t6

0xfa4a,	// (0x0006c261) ncim_query_content_pane_t_ParamLimits

0xe0ca,	// (0x0006a8e1) ncim_query_list_pane_ParamLimits

0xe0dc,	// (0x0006a8f3) ncim_query_popup_pane_ParamLimits

0xe0f0,	// (0x0006a907) wait_bar_pane_cp04

0x97c1,	// (0x00065fd8) input_focus_pane_cp011

0xe0f8,	// (0x0006a90f) ncim_query_popup_pane_t1

0xe106,	// (0x0006a91d) ncim_list_query_list_pane_ParamLimits

0xe106,	// (0x0006a91d) ncim_list_query_list_pane

0x97c1,	// (0x00065fd8) bg_button_pane_cp027

0xe119,	// (0x0006a930) ncim_query_button_pane_g1

0x97c1,	// (0x00065fd8) list_highlight_pane_cp012

0xe123,	// (0x0006a93a) ncim_list_query_list_pane_g1

0xe12b,	// (0x0006a942) ncim_list_query_list_pane_t1

0x61b8,	// (0x000629cf) cam4_indicators_pane_g3_ParamLimits

0x61b8,	// (0x000629cf) cam4_indicators_pane_g3

0x62bd,	// (0x00062ad4) vid4_indicators_pane_g5_ParamLimits

0x62bd,	// (0x00062ad4) vid4_indicators_pane_g5

0x7333,	// (0x00063b4a) vid4_progress_pane_g5_ParamLimits

0x7333,	// (0x00063b4a) vid4_progress_pane_g5

0x7bea,	// (0x00064401) main_ncimui_pane_g1

0x7c52,	// (0x00064469) ncimui_group_query_pane_ParamLimits

0x7c52,	// (0x00064469) ncimui_group_query_pane

0x7c9a,	// (0x000644b1) ncimui_list_pane_ParamLimits

0x7c9a,	// (0x000644b1) ncimui_list_pane

0x7cc1,	// (0x000644d8) ncimui_text_pane_ParamLimits

0x7cc1,	// (0x000644d8) ncimui_text_pane

0x7d61,	// (0x00064578) ncimui_text_pane_t1_ParamLimits

0x7d61,	// (0x00064578) ncimui_text_pane_t1

0xe139,	// (0x0006a950) ncimui_list_single_graphic_pane_ParamLimits

0xe139,	// (0x0006a950) ncimui_list_single_graphic_pane

0x7d80,	// (0x00064597) ncimui_query_pane_ParamLimits

0x7d80,	// (0x00064597) ncimui_query_pane

0x97c1,	// (0x00065fd8) list_highlight_pane_cp013

0xe149,	// (0x0006a960) ncim_list_query_list_pane_t1_copy1

0xe123,	// (0x0006a93a) ncim_list_single_graphic_pane_g1

0xe157,	// (0x0006a96e) ncim_query_button_pane_cp01

0xe163,	// (0x0006a97a) ncim_query_entry_pane_ParamLimits

0xe163,	// (0x0006a97a) ncim_query_entry_pane

0xe176,	// (0x0006a98d) ncimui_query_pane_g1

0xe182,	// (0x0006a999) ncimui_query_pane_t1_ParamLimits

0xe182,	// (0x0006a999) ncimui_query_pane_t1

0xa5b3,	// (0x00066dca) input_focus_pane_cp012

0xe19b,	// (0x0006a9b2) ncim_query_entry_pane_t1

0xa735,	// (0x00066f4c) main_im_pane_ParamLimits

0x41ce,	// (0x000609e5) main_mobtv_pane_ParamLimits

0x41ce,	// (0x000609e5) main_mobtv_pane

0x79d7,	// (0x000641ee) main_cset6_slider_pane_g18_ParamLimits

0x79d7,	// (0x000641ee) main_cset6_slider_pane_g18

0x79e3,	// (0x000641fa) main_cset6_slider_pane_g19_ParamLimits

0x79e3,	// (0x000641fa) main_cset6_slider_pane_g19

0xd5fe,	// (0x00069e15) bg_main_mobtv_pane_ParamLimits

0xd5fe,	// (0x00069e15) bg_main_mobtv_pane

0x7d93,	// (0x000645aa) main_mobtv_info_pane

0x7d9e,	// (0x000645b5) main_mobtv_loading_pane_ParamLimits

0x7d9e,	// (0x000645b5) main_mobtv_loading_pane

0xe1ad,	// (0x0006a9c4) main_mobtv_pg_channel_list_pane

0xe1b7,	// (0x0006a9ce) main_mobtv_pg_hdr_pane

0x7dab,	// (0x000645c2) main_mobtv_programe_curr_pane_ParamLimits

0x7dab,	// (0x000645c2) main_mobtv_programe_curr_pane

0x7db8,	// (0x000645cf) main_mobtv_programe_next_pane_ParamLimits

0x7db8,	// (0x000645cf) main_mobtv_programe_next_pane

0xe1c0,	// (0x0006a9d7) popup_mobtv_noti_window

0xcbaf,	// (0x000693c6) main_tv_pg_hdr_pane_g1

0xe1c8,	// (0x0006a9df) main_tv_pg_hdr_pane_g2

0xe1d0,	// (0x0006a9e7) main_tv_pg_hdr_pane_g3

0xe1d8,	// (0x0006a9ef) main_tv_pg_hdr_pane_g4

0xe1e0,	// (0x0006a9f7) main_tv_pg_hdr_pane_g5

0xe1ea,	// (0x0006aa01) main_tv_pg_hdr_pane_g6

0xe1f4,	// (0x0006aa0b) main_tv_pg_hdr_pane_g7

0xe1fe,	// (0x0006aa15) main_tv_pg_hdr_pane_g8

0xe208,	// (0x0006aa1f) main_tv_pg_hdr_pane_g9

0xe212,	// (0x0006aa29) main_tv_pg_hdr_pane_g10

0xe21c,	// (0x0006aa33) main_tv_pg_hdr_pane_g11

0x000a,

0x08c8,	// (0x0005d0df) main_tv_pg_hdr_pane_g

0xe226,	// (0x0006aa3d) main_tv_pg_hdr_pane_t1

0xe234,	// (0x0006aa4b) main_tv_pg_hdr_pane_t2

0xe242,	// (0x0006aa59) main_tv_pg_hdr_pane_t3

0xe252,	// (0x0006aa69) main_tv_pg_hdr_pane_t4

0xe262,	// (0x0006aa79) main_tv_pg_hdr_pane_t5

0x0004,

0x08df,	// (0x0005d0f6) main_tv_pg_hdr_pane_t

0xe272,	// (0x0006aa89) single_mobtv_pg_channel_pane_ParamLimits

0xe272,	// (0x0006aa89) single_mobtv_pg_channel_pane

0xe284,	// (0x0006aa9b) single_mobtv_pg_channel_table_pane

0xe28d,	// (0x0006aaa4) single_mobtv_pg_channel_thumb_pane

0xe296,	// (0x0006aaad) single_tv_pg_channel_pane_g1

0xe29f,	// (0x0006aab6) single_tv_pg_channel_pane_g2

0x0001,

0x08ea,	// (0x0005d101) single_tv_pg_channel_pane_g

0xce0f,	// (0x00069626) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce0f,	// (0x00069626) bg_single_mobtv_pg_channel_thumb_pane

0xe2a8,	// (0x0006aabf) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2a8,	// (0x0006aabf) single_mobtv_pg_channel_thumb_pane_g1

0xe2b6,	// (0x0006aacd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2b6,	// (0x0006aacd) single_mobtv_pg_channel_thumb_pane_g2

0xe2c2,	// (0x0006aad9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2c2,	// (0x0006aad9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x08ef,	// (0x0005d106) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x08ef,	// (0x0005d106) single_mobtv_pg_channel_thumb_pane_g

0xe2ce,	// (0x0006aae5) single_mobtv_pg_channel_thumb_pane_t1

0xe2dc,	// (0x0006aaf3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x08f6,	// (0x0005d10d) single_mobtv_pg_channel_thumb_pane_t

0xcbaf,	// (0x000693c6) bg_single_mobtv_pg_channel_table_pane_g1

0xcbaf,	// (0x000693c6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x039c,	// (0x0005cbb3) bg_single_mobtv_pg_channel_table_pane_g

0xe2ea,	// (0x0006ab01) single_mobtv_pg_channel_table_pane_t1

0xe2f8,	// (0x0006ab0f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x08fb,	// (0x0005d112) single_mobtv_pg_channel_table_pane_t

0x7dcd,	// (0x000645e4) main_mobtv_info_pane_g1_ParamLimits

0x7dcd,	// (0x000645e4) main_mobtv_info_pane_g1

0x7de9,	// (0x00064600) main_mobtv_info_pane_t1_ParamLimits

0x7de9,	// (0x00064600) main_mobtv_info_pane_t1

0x7e61,	// (0x00064678) main_mobtv_info_pane_t2_ParamLimits

0x7e61,	// (0x00064678) main_mobtv_info_pane_t2

0x0002,

0xfa5c,	// (0x0006c273) main_mobtv_info_pane_t_ParamLimits

0xfa5c,	// (0x0006c273) main_mobtv_info_pane_t

0x7ef0,	// (0x00064707) wait_bar_pane_cp05

0x7f02,	// (0x00064719) main_mobtv_loading_pane_g1_ParamLimits

0x7f02,	// (0x00064719) main_mobtv_loading_pane_g1

0x7f10,	// (0x00064727) main_mobtv_loading_pane_g2_ParamLimits

0x7f10,	// (0x00064727) main_mobtv_loading_pane_g2

0x7f1c,	// (0x00064733) main_mobtv_loading_pane_g3_ParamLimits

0x7f1c,	// (0x00064733) main_mobtv_loading_pane_g3

0x0002,

0xfa63,	// (0x0006c27a) main_mobtv_loading_pane_g_ParamLimits

0xfa63,	// (0x0006c27a) main_mobtv_loading_pane_g

0xe306,	// (0x0006ab1d) main_mobtv_loading_pane_t1_ParamLimits

0xe306,	// (0x0006ab1d) main_mobtv_loading_pane_t1

0xe31e,	// (0x0006ab35) main_mobtv_loading_pane_t2_ParamLimits

0xe31e,	// (0x0006ab35) main_mobtv_loading_pane_t2

0x0001,

0x0913,	// (0x0005d12a) main_mobtv_loading_pane_t_ParamLimits

0x0913,	// (0x0005d12a) main_mobtv_loading_pane_t

0x7f2a,	// (0x00064741) wait_bar_pane_cp06_ParamLimits

0x7f2a,	// (0x00064741) wait_bar_pane_cp06

0xe342,	// (0x0006ab59) main_mobtv_programe_curr_pane_t1

0xe350,	// (0x0006ab67) main_mobtv_programe_curr_pane_t2

0x0001,

0x0918,	// (0x0005d12f) main_mobtv_programe_curr_pane_t

0xe35e,	// (0x0006ab75) main_mobtv_programe_next_pane_t1

0xe36c,	// (0x0006ab83) main_mobtv_programe_next_pane_t2

0xe37a,	// (0x0006ab91) main_mobtv_programe_next_pane_t3

0x0002,

0x091d,	// (0x0005d134) main_mobtv_programe_next_pane_t

0x97c1,	// (0x00065fd8) bg_popup_mobtv_noti_window_pane

0xe388,	// (0x0006ab9f) popup_mobtv_noti_window_g1

0xe390,	// (0x0006aba7) popup_mobtv_noti_window_t1

0xe39e,	// (0x0006abb5) popup_mobtv_noti_window_t2

0x0001,

0x0924,	// (0x0005d13b) popup_mobtv_noti_window_t

0xcbaf,	// (0x000693c6) bg_popup_mobtv_noti_window_pane_g1

0x0fdd,	// (0x0005d7f4) sc_clock_pane

0x0fdd,	// (0x0005d7f4) main_fs_bigclock_pane

0x7549,	// (0x00063d60) blid2_tripm_pane_t4_ParamLimits

0x7549,	// (0x00063d60) blid2_tripm_pane_t4

0x7f36,	// (0x0006474d) sc_clock_pane_g1_ParamLimits

0x7f36,	// (0x0006474d) sc_clock_pane_g1

0x7f44,	// (0x0006475b) sc_clock_pane_t1_ParamLimits

0x7f44,	// (0x0006475b) sc_clock_pane_t1

0x7f57,	// (0x0006476e) sc_clock_pane_t2_ParamLimits

0x7f57,	// (0x0006476e) sc_clock_pane_t2

0x7f69,	// (0x00064780) sc_clock_pane_t3_ParamLimits

0x7f69,	// (0x00064780) sc_clock_pane_t3

0x0004,

0xfa6a,	// (0x0006c281) sc_clock_pane_t_ParamLimits

0xfa6a,	// (0x0006c281) sc_clock_pane_t

0x8d26,	// (0x0006553d) main_fs_bigclock_indicator_pane_ParamLimits

0x8d26,	// (0x0006553d) main_fs_bigclock_indicator_pane

0x7ff2,	// (0x00064809) main_fs_bigclock_pane_g1_ParamLimits

0x7ff2,	// (0x00064809) main_fs_bigclock_pane_g1

0x8d32,	// (0x00065549) main_fs_bigclock_pane_t1_ParamLimits

0x8d32,	// (0x00065549) main_fs_bigclock_pane_t1

0x8d44,	// (0x0006555b) main_fs_bigclock_pane_t2_ParamLimits

0x8d44,	// (0x0006555b) main_fs_bigclock_pane_t2

0x8d56,	// (0x0006556d) main_fs_bigclock_pane_t3_ParamLimits

0x8d56,	// (0x0006556d) main_fs_bigclock_pane_t3

0x0002,

0xfbca,	// (0x0006c3e1) main_fs_bigclock_pane_t_ParamLimits

0xfbca,	// (0x0006c3e1) main_fs_bigclock_pane_t

0xec93,	// (0x0006b4aa) main_fs_bigclock_indicator_pane_g1

0xe069,	// (0x0006a880) ncim_query_content_pane_g2_ParamLimits

0xe069,	// (0x0006a880) ncim_query_content_pane_g2

0x0001,

0xfa45,	// (0x0006c25c) ncim_query_content_pane_g_ParamLimits

0xfa45,	// (0x0006c25c) ncim_query_content_pane_g

0x7f7d,	// (0x00064794) sc_clock_pane_t4_ParamLimits

0x7f7d,	// (0x00064794) sc_clock_pane_t4

0x41ce,	// (0x000609e5) main_radioblah_pane

0xd571,	// (0x00069d88) cell_call4_button_pane_t1_copy1_ParamLimits

0xd571,	// (0x00069d88) cell_call4_button_pane_t1_copy1

0x7c04,	// (0x0006441b) main_ncimui_pane_t1_ParamLimits

0x7c04,	// (0x0006441b) main_ncimui_pane_t1

0x7c1e,	// (0x00064435) main_ncimui_pane_t2_ParamLimits

0x7c1e,	// (0x00064435) main_ncimui_pane_t2

0x0002,

0xfa3e,	// (0x0006c255) main_ncimui_pane_t_ParamLimits

0xfa3e,	// (0x0006c255) main_ncimui_pane_t

0xe4e3,	// (0x0006acfa) main_radioblah_anim_pane_ParamLimits

0xe4e3,	// (0x0006acfa) main_radioblah_anim_pane

0xe4f4,	// (0x0006ad0b) main_radioblah_info_pane_ParamLimits

0xe4f4,	// (0x0006ad0b) main_radioblah_info_pane

0xe508,	// (0x0006ad1f) main_radioblah_pane_t1_ParamLimits

0xe508,	// (0x0006ad1f) main_radioblah_pane_t1

0xe524,	// (0x0006ad3b) main_radioblah_pane_t2_ParamLimits

0xe524,	// (0x0006ad3b) main_radioblah_pane_t2

0x0003,

0x094a,	// (0x0005d161) main_radioblah_pane_t_ParamLimits

0x094a,	// (0x0005d161) main_radioblah_pane_t

0x8044,	// (0x0006485b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8044,	// (0x0006485b) main_radioblah_rocker_ctrl_pane

0xe56c,	// (0x0006ad83) main_radioblah_info_pane_t1_ParamLimits

0xe56c,	// (0x0006ad83) main_radioblah_info_pane_t1

0x8089,	// (0x000648a0) main_radioblah_info_pane_t2_ParamLimits

0x8089,	// (0x000648a0) main_radioblah_info_pane_t2

0x0003,

0xfa75,	// (0x0006c28c) main_radioblah_info_pane_t_ParamLimits

0xfa75,	// (0x0006c28c) main_radioblah_info_pane_t

0xcbaf,	// (0x000693c6) main_radioblah_rocker_ctrl_pane_g1

0x8139,	// (0x00064950) main_radioblah_rocker_ctrl_pane_g2

0x8141,	// (0x00064958) main_radioblah_rocker_ctrl_pane_g3

0x8149,	// (0x00064960) main_radioblah_rocker_ctrl_pane_g4

0x8151,	// (0x00064968) main_radioblah_rocker_ctrl_pane_g5

0x8159,	// (0x00064970) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa7e,	// (0x0006c295) main_radioblah_rocker_ctrl_pane_g

0x7ba4,	// (0x000643bb) main_cset_text2_pane_t1_copy1_ParamLimits

0x60d8,	// (0x000628ef) cam4_image_uncrop_qvga_pane

0x622d,	// (0x00062a44) vid4_image_uncrop_qcif_pane

0x76d7,	// (0x00063eee) cam6_image_uncrop_qvga_pane_ParamLimits

0x76d7,	// (0x00063eee) cam6_image_uncrop_qvga_pane

0xdd55,	// (0x0006a56c) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd55,	// (0x0006a56c) vid6_image_uncrop_qcif_pane

0x97c1,	// (0x00065fd8) bg_popup_preview_window_pane_cp03

0xe01b,	// (0x0006a832) list_cset_text2_pane

0xe023,	// (0x0006a83a) main_cset6_text2_pane_g1

0xe02b,	// (0x0006a842) main_cset6_text2_pane_t1

0x8161,	// (0x00064978) list_cset_text2_pane_t1_ParamLimits

0x8161,	// (0x00064978) list_cset_text2_pane_t1

0x41ce,	// (0x000609e5) main_radioblah_pane_ParamLimits

0x7edc,	// (0x000646f3) main_mobtv_info_pane_t3_ParamLimits

0x7edc,	// (0x000646f3) main_mobtv_info_pane_t3

0x8032,	// (0x00064849) main_radioblah_pane_g1

0x805d,	// (0x00064874) main_radioblah_info_pane_g1

0x80de,	// (0x000648f5) main_radioblah_info_pane_t3_ParamLimits

0x80de,	// (0x000648f5) main_radioblah_info_pane_t3

0x2f9a,	// (0x0005f7b1) highlight_cell_cale_month_pane_ParamLimits

0x2f9a,	// (0x0005f7b1) highlight_cell_cale_month_pane

0x0fdd,	// (0x0005d7f4) main_phob_fisheye_pane

0xceeb,	// (0x00069702) scroll_pane_cp0031_ParamLimits

0xceeb,	// (0x00069702) scroll_pane_cp0031

0xde7e,	// (0x0006a695) wait_bar_pane_cp08_ParamLimits

0x78e8,	// (0x000640ff) cset_list_set_pane_copy1_ParamLimits

0xe5c1,	// (0x0006add8) highlight_cell_cale_month_pane_g1

0x8188,	// (0x0006499f) highlight_cell_cale_month_pane_t1

0xdae0,	// (0x0006a2f7) list_gen_pane_cp01

0xd738,	// (0x00069f4f) scroll_pane_01

0xb2f0,	// (0x00067b07) list_single_double_fisheye_pane

0x9f8c,	// (0x000667a3) list_double_fisheye_pane_g1_ParamLimits

0x9f8c,	// (0x000667a3) list_double_fisheye_pane_g1

0x9f98,	// (0x000667af) list_double_fisheye_pane_g2_ParamLimits

0x9f98,	// (0x000667af) list_double_fisheye_pane_g2

0xb2f9,	// (0x00067b10) list_double_fisheye_pane_g3_ParamLimits

0xb2f9,	// (0x00067b10) list_double_fisheye_pane_g3

0x0004,

0xfa8b,	// (0x0006c2a2) list_double_fisheye_pane_g_ParamLimits

0xfa8b,	// (0x0006c2a2) list_double_fisheye_pane_g

0x9fc9,	// (0x000667e0) list_double_fisheye_pane_t1_ParamLimits

0x9fc9,	// (0x000667e0) list_double_fisheye_pane_t1

0x9fe4,	// (0x000667fb) list_double_fisheye_pane_t2_ParamLimits

0x9fe4,	// (0x000667fb) list_double_fisheye_pane_t2

0x0001,

0xfa96,	// (0x0006c2ad) list_double_fisheye_pane_t_ParamLimits

0xfa96,	// (0x0006c2ad) list_double_fisheye_pane_t

0x0fdd,	// (0x0005d7f4) main_call5_pane

0x7fa3,	// (0x000647ba) sc_swipe_pane_ParamLimits

0x7fa3,	// (0x000647ba) sc_swipe_pane

0x81a2,	// (0x000649b9) call5_image_pane_ParamLimits

0x81a2,	// (0x000649b9) call5_image_pane

0x81b2,	// (0x000649c9) call5_swipe_1_pane_ParamLimits

0x81b2,	// (0x000649c9) call5_swipe_1_pane

0x81be,	// (0x000649d5) call5_swipe_2_pane_ParamLimits

0x81be,	// (0x000649d5) call5_swipe_2_pane

0x81d8,	// (0x000649ef) popup_call5_audio_first_window_ParamLimits

0x81d8,	// (0x000649ef) popup_call5_audio_first_window

0xce0f,	// (0x00069626) call5_swipe_1_pane_g1_ParamLimits

0xce0f,	// (0x00069626) call5_swipe_1_pane_g1

0xe5c9,	// (0x0006ade0) call5_swipe_1_pane_g2_ParamLimits

0xe5c9,	// (0x0006ade0) call5_swipe_1_pane_g2

0x0001,

0x0979,	// (0x0005d190) call5_swipe_1_pane_g_ParamLimits

0x0979,	// (0x0005d190) call5_swipe_1_pane_g

0xe5d5,	// (0x0006adec) call5_swipe_1_pane_t1_ParamLimits

0xe5d5,	// (0x0006adec) call5_swipe_1_pane_t1

0xce0f,	// (0x00069626) call5_swipe_2_pane_g1_ParamLimits

0xce0f,	// (0x00069626) call5_swipe_2_pane_g1

0xe5ea,	// (0x0006ae01) call5_swipe_2_pane_g2_ParamLimits

0xe5ea,	// (0x0006ae01) call5_swipe_2_pane_g2

0x0001,

0x097e,	// (0x0005d195) call5_swipe_2_pane_g_ParamLimits

0x097e,	// (0x0005d195) call5_swipe_2_pane_g

0xe5f6,	// (0x0006ae0d) call5_swipe_2_pane_t1_ParamLimits

0xe5f6,	// (0x0006ae0d) call5_swipe_2_pane_t1

0xe60b,	// (0x0006ae22) sc_swipe_pane_g1_ParamLimits

0xe60b,	// (0x0006ae22) sc_swipe_pane_g1

0xe618,	// (0x0006ae2f) sc_swipe_pane_g2_ParamLimits

0xe618,	// (0x0006ae2f) sc_swipe_pane_g2

0x0001,

0x0983,	// (0x0005d19a) sc_swipe_pane_g_ParamLimits

0x0983,	// (0x0005d19a) sc_swipe_pane_g

0xe624,	// (0x0006ae3b) sc_swipe_pane_t1_ParamLimits

0xe624,	// (0x0006ae3b) sc_swipe_pane_t1

0x0fdd,	// (0x0005d7f4) main_cmail_launcher_pane

0x81e6,	// (0x000649fd) aid_size_cell_cmail_l_ParamLimits

0x81e6,	// (0x000649fd) aid_size_cell_cmail_l

0x81f6,	// (0x00064a0d) grid_cmail_l_pane_ParamLimits

0x81f6,	// (0x00064a0d) grid_cmail_l_pane

0x8206,	// (0x00064a1d) cell_cmail_l_pane_ParamLimits

0x8206,	// (0x00064a1d) cell_cmail_l_pane

0x821a,	// (0x00064a31) cell_cmail_l_pane_g1_ParamLimits

0x821a,	// (0x00064a31) cell_cmail_l_pane_g1

0x822b,	// (0x00064a42) cell_cmail_l_pane_t1_ParamLimits

0x822b,	// (0x00064a42) cell_cmail_l_pane_t1

0xe639,	// (0x0006ae50) cell_cmail_l_pane_t2_ParamLimits

0xe639,	// (0x0006ae50) cell_cmail_l_pane_t2

0x0001,

0xfa9b,	// (0x0006c2b2) cell_cmail_l_pane_t_ParamLimits

0xfa9b,	// (0x0006c2b2) cell_cmail_l_pane_t

0xa5b3,	// (0x00066dca) grid_highlight_pane_cp018_ParamLimits

0xa5b3,	// (0x00066dca) grid_highlight_pane_cp018

0x0e33,	// (0x0005d64a) main2_pane_ParamLimits

0x0e33,	// (0x0005d64a) main2_pane

0xa7e0,	// (0x00066ff7) popup_sp_fs_action_menu_bg_pane_g1

0xa7e8,	// (0x00066fff) popup_sp_fs_action_menu_bg_pane_g2

0xa7f0,	// (0x00067007) popup_sp_fs_action_menu_bg_pane_g3

0xa7f8,	// (0x0006700f) popup_sp_fs_action_menu_bg_pane_g4

0xa800,	// (0x00067017) popup_sp_fs_action_menu_bg_pane_g5

0xa808,	// (0x0006701f) popup_sp_fs_action_menu_bg_pane_g6

0xa810,	// (0x00067027) popup_sp_fs_action_menu_bg_pane_g7

0xa818,	// (0x0006702f) popup_sp_fs_action_menu_bg_pane_g8

0xa820,	// (0x00067037) popup_sp_fs_action_menu_bg_pane_g9

0xa828,	// (0x0006703f) popup_sp_fs_action_menu_bg_pane_g10

0xa828,	// (0x0006703f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0006b9a1) popup_sp_fs_action_menu_bg_pane_g

0x9bec,	// (0x00066403) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x2_t3_g3_g1

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t3_g3_g2

0x9bf8,	// (0x0006640f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9bf8,	// (0x0006640f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006ba4f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006ba4f) list_medium_line_x2_t3_g3_g

0x9c04,	// (0x0006641b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9c04,	// (0x0006641b) list_medium_line_x2_t3_g3_t1

0x1dc8,	// (0x0005e5df) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1dc8,	// (0x0005e5df) list_medium_line_x2_t3_g3_t2

0x9c19,	// (0x00066430) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9c19,	// (0x00066430) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006ba56) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006ba56) list_medium_line_x2_t3_g3_t

0x9bec,	// (0x00066403) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x2_t3_g2_g1

0x9bf8,	// (0x0006640f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9bf8,	// (0x0006640f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006ba5d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006ba5d) list_medium_line_x2_t3_g2_g

0x9c2e,	// (0x00066445) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9c2e,	// (0x00066445) list_medium_line_x2_t3_g2_t1

0x9c44,	// (0x0006645b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9c44,	// (0x0006645b) list_medium_line_x2_t3_g2_t2

0x9c56,	// (0x0006646d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9c56,	// (0x0006646d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006ba62) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006ba62) list_medium_line_x2_t3_g2_t

0x9bec,	// (0x00066403) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x2_t4_g4_g1

0x1ddc,	// (0x0005e5f3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ddc,	// (0x0005e5f3) list_medium_line_x2_t4_g4_g2

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t4_g4_g3

0x9c74,	// (0x0006648b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9c74,	// (0x0006648b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006ba69) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006ba69) list_medium_line_x2_t4_g4_g

0x1de8,	// (0x0005e5ff) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1de8,	// (0x0005e5ff) list_medium_line_x2_t4_g4_t1

0x1dff,	// (0x0005e616) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1dff,	// (0x0005e616) list_medium_line_x2_t4_g4_t2

0x1e14,	// (0x0005e62b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e14,	// (0x0005e62b) list_medium_line_x2_t4_g4_t3

0x9c80,	// (0x00066497) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9c80,	// (0x00066497) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006ba72) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006ba72) list_medium_line_x2_t4_g4_t

0x9bec,	// (0x00066403) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x2_t2_g4_g1

0x1ddc,	// (0x0005e5f3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ddc,	// (0x0005e5f3) list_medium_line_x2_t2_g4_g2

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t2_g4_g3

0x9bf8,	// (0x0006640f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9bf8,	// (0x0006640f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006bad9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006bad9) list_medium_line_x2_t2_g4_g

0x9c92,	// (0x000664a9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9c92,	// (0x000664a9) list_medium_line_x2_t2_g4_t1

0x9c19,	// (0x00066430) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9c19,	// (0x00066430) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006bae2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006bae2) list_medium_line_x2_t2_g4_t

0x9bec,	// (0x00066403) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x2_t2_g3_g1

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t2_g3_g2

0x9bf8,	// (0x0006640f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9bf8,	// (0x0006640f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006ba4f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006ba4f) list_medium_line_x2_t2_g3_g

0x9ca7,	// (0x000664be) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9ca7,	// (0x000664be) list_medium_line_x2_t2_g3_t1

0x9c19,	// (0x00066430) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9c19,	// (0x00066430) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006bae7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006bae7) list_medium_line_x2_t2_g3_t

0x318b,	// (0x0005f9a2) main_sp_fs_list_pane_ParamLimits

0x318b,	// (0x0005f9a2) main_sp_fs_list_pane

0x3197,	// (0x0005f9ae) sp_fs_scroll_pane_ParamLimits

0x3197,	// (0x0005f9ae) sp_fs_scroll_pane

0x31a3,	// (0x0005f9ba) list_medium_line_x2_t3_t1

0x31b3,	// (0x0005f9ca) list_medium_line_x2_t3_t2

0x9cbc,	// (0x000664d3) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0006bb32) list_medium_line_x2_t3_t

0x31c1,	// (0x0005f9d8) list_medium_line_x3_t4_t1

0x31d1,	// (0x0005f9e8) list_medium_line_x3_t4_t2

0x9cca,	// (0x000664e1) list_medium_line_x3_t4_t3

0x9cbc,	// (0x000664d3) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0006bb39) list_medium_line_x3_t4_t

0x31df,	// (0x0005f9f6) list_medium_line_x4_t5_t1

0x31ef,	// (0x0005fa06) list_medium_line_x4_t5_t2

0x9cca,	// (0x000664e1) list_medium_line_x4_t5_t3

0x31fd,	// (0x0005fa14) list_medium_line_x4_t5_t4

0x9cbc,	// (0x000664d3) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0006bb42) list_medium_line_x4_t5_t

0x9bec,	// (0x00066403) list_medium_line_t4_g4_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_t4_g4_g1

0x9c74,	// (0x0006648b) list_medium_line_t4_g4_g2_ParamLimits

0x9c74,	// (0x0006648b) list_medium_line_t4_g4_g2

0x320b,	// (0x0005fa22) list_medium_line_t4_g4_g3_ParamLimits

0x320b,	// (0x0005fa22) list_medium_line_t4_g4_g3

0x9bf8,	// (0x0006640f) list_medium_line_t4_g4_g4_ParamLimits

0x9bf8,	// (0x0006640f) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006bb4d) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006bb4d) list_medium_line_t4_g4_g

0x9cd8,	// (0x000664ef) list_medium_line_t4_g4_t1_ParamLimits

0x9cd8,	// (0x000664ef) list_medium_line_t4_g4_t1

0x9ced,	// (0x00066504) list_medium_line_t4_g4_t2_ParamLimits

0x9ced,	// (0x00066504) list_medium_line_t4_g4_t2

0x3217,	// (0x0005fa2e) list_medium_line_t4_g4_t3_ParamLimits

0x3217,	// (0x0005fa2e) list_medium_line_t4_g4_t3

0x9c19,	// (0x00066430) list_medium_line_t4_g4_t4_ParamLimits

0x9c19,	// (0x00066430) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0006bb56) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0006bb56) list_medium_line_t4_g4_t

0x3318,	// (0x0005fb2f) chi_dic_find_pane_g1

0x41ea,	// (0x00060a01) main_tport_pane

0x9e4e,	// (0x00066665) list_medium_line_plain_t1

0x9e5c,	// (0x00066673) list_medium_line_t2_g2_g1_ParamLimits

0x9e5c,	// (0x00066673) list_medium_line_t2_g2_g1

0x9e68,	// (0x0006667f) list_medium_line_t2_g2_g2_ParamLimits

0x9e68,	// (0x0006667f) list_medium_line_t2_g2_g2

0x0001,

0xf856,	// (0x0006c06d) list_medium_line_t2_g2_g_ParamLimits

0xf856,	// (0x0006c06d) list_medium_line_t2_g2_g

0x6cda,	// (0x000634f1) list_medium_line_t2_g2_t1_ParamLimits

0x6cda,	// (0x000634f1) list_medium_line_t2_g2_t1

0x6cf4,	// (0x0006350b) list_medium_line_t2_g2_t2_ParamLimits

0x6cf4,	// (0x0006350b) list_medium_line_t2_g2_t2

0x0001,

0xf85b,	// (0x0006c072) list_medium_line_t2_g2_t_ParamLimits

0xf85b,	// (0x0006c072) list_medium_line_t2_g2_t

0x9f10,	// (0x00066727) aid_sp_fs_list_icon_a_sm

0x9f18,	// (0x0006672f) aid_sp_fs_list_icon_d

0x9f20,	// (0x00066737) aid_sp_fs_text_primary

0x9f29,	// (0x00066740) aid_sp_fs_text_secondary

0xde51,	// (0x0006a668) list_medium_line

0xde51,	// (0x0006a668) list_medium_line_g2

0xde51,	// (0x0006a668) list_medium_line_g3

0xde51,	// (0x0006a668) list_medium_line_plain

0xde51,	// (0x0006a668) list_medium_line_plain_t2

0xde51,	// (0x0006a668) list_medium_line_plain_t3

0xde51,	// (0x0006a668) list_medium_line_right_icon

0xde51,	// (0x0006a668) list_medium_line_right_iconx2

0xde51,	// (0x0006a668) list_medium_line_t2

0xde51,	// (0x0006a668) list_medium_line_t2_g2

0xde51,	// (0x0006a668) list_medium_line_t2_g3

0xde51,	// (0x0006a668) list_medium_line_t2_right_icon

0xde51,	// (0x0006a668) list_medium_line_t2_right_iconx2

0xde51,	// (0x0006a668) list_medium_line_t3

0xde51,	// (0x0006a668) list_medium_line_t3_g2

0xde51,	// (0x0006a668) list_medium_line_t3_g3

0xde51,	// (0x0006a668) list_medium_line_t3_right_iconx2

0x7394,	// (0x00063bab) list_medium_line_t4_g4

0x739d,	// (0x00063bb4) list_medium_line_x2

0x739d,	// (0x00063bb4) list_medium_line_x2_t2_g2

0x739d,	// (0x00063bb4) list_medium_line_x2_t2_g3

0x739d,	// (0x00063bb4) list_medium_line_x2_t2_g4

0x739d,	// (0x00063bb4) list_medium_line_x2_t3

0x739d,	// (0x00063bb4) list_medium_line_x2_t3_g2

0x739d,	// (0x00063bb4) list_medium_line_x2_t3_g3

0x739d,	// (0x00063bb4) list_medium_line_x2_t3_g4

0x739d,	// (0x00063bb4) list_medium_line_x2_t4_g2

0x739d,	// (0x00063bb4) list_medium_line_x2_t4_g4

0x73a6,	// (0x00063bbd) list_medium_line_x3

0x73a6,	// (0x00063bbd) list_medium_line_x3_t4

0x73a6,	// (0x00063bbd) list_medium_line_x3_t4_g4

0x7394,	// (0x00063bab) list_medium_line_x4_t4

0x7394,	// (0x00063bab) list_medium_line_x4_t4_g7

0x7394,	// (0x00063bab) list_medium_line_x4_t5

0x73af,	// (0x00063bc6) list_single_fs_dyc_pane_ParamLimits

0x73af,	// (0x00063bc6) list_single_fs_dyc_pane

0x9bec,	// (0x00066403) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x4_t4_g7_g1

0x9f32,	// (0x00066749) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9f32,	// (0x00066749) list_medium_line_x4_t4_g7_g2

0x7b2f,	// (0x00064346) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b2f,	// (0x00064346) list_medium_line_x4_t4_g7_g3

0x7b3e,	// (0x00064355) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b3e,	// (0x00064355) list_medium_line_x4_t4_g7_g4

0x7b4a,	// (0x00064361) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7b4a,	// (0x00064361) list_medium_line_x4_t4_g7_g5

0x7b59,	// (0x00064370) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7b59,	// (0x00064370) list_medium_line_x4_t4_g7_g6

0x9f3e,	// (0x00066755) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9f3e,	// (0x00066755) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa1f,	// (0x0006c236) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa1f,	// (0x0006c236) list_medium_line_x4_t4_g7_g

0x9f4a,	// (0x00066761) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9f4a,	// (0x00066761) list_medium_line_x4_t4_g7_t1

0x7b68,	// (0x0006437f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7b68,	// (0x0006437f) list_medium_line_x4_t4_g7_t2

0x7b7d,	// (0x00064394) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7b7d,	// (0x00064394) list_medium_line_x4_t4_g7_t3

0x7b92,	// (0x000643a9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7b92,	// (0x000643a9) list_medium_line_x4_t4_g7_t4

0x9f5f,	// (0x00066776) list_medium_line_x4_t4_g7_t5_ParamLimits

0x9f5f,	// (0x00066776) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa2e,	// (0x0006c245) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa2e,	// (0x0006c245) list_medium_line_x4_t4_g7_t

0x9f71,	// (0x00066788) list_single_dyc_row_pane_ParamLimits

0x9f71,	// (0x00066788) list_single_dyc_row_pane

0x8196,	// (0x000649ad) call5_gesture_pane_ParamLimits

0x8196,	// (0x000649ad) call5_gesture_pane

0x81ca,	// (0x000649e1) call5_windows_pane_ParamLimits

0x81ca,	// (0x000649e1) call5_windows_pane

0x8241,	// (0x00064a58) call5_swipe_1_pane_cp_ParamLimits

0x8241,	// (0x00064a58) call5_swipe_1_pane_cp

0x824d,	// (0x00064a64) call5_swipe_2_pane_cp_ParamLimits

0x824d,	// (0x00064a64) call5_swipe_2_pane_cp

0xa903,	// (0x0006711a) call5_image_pane_cp

0x8259,	// (0x00064a70) popup_call5_audio_first_window_cp_ParamLimits

0x8259,	// (0x00064a70) popup_call5_audio_first_window_cp

0xe60b,	// (0x0006ae22) call5_swipe_1_pane_g1_cp_ParamLimits

0xe60b,	// (0x0006ae22) call5_swipe_1_pane_g1_cp

0xe64b,	// (0x0006ae62) call5_swipe_1_pane_g2_cp

0xe624,	// (0x0006ae3b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe624,	// (0x0006ae3b) call5_swipe_1_pane_t1_cp

0xe60b,	// (0x0006ae22) call5_swipe_2_pane_g1_cp_ParamLimits

0xe60b,	// (0x0006ae22) call5_swipe_2_pane_g1_cp

0xe653,	// (0x0006ae6a) call5_swipe_2_pane_g2_cp

0xe65b,	// (0x0006ae72) call5_swipe_2_pane_t1_cp_ParamLimits

0xe65b,	// (0x0006ae72) call5_swipe_2_pane_t1_cp

0xa5b3,	// (0x00066dca) main_sp_fs_email_pane

0xe670,	// (0x0006ae87) main_sp_fs_listscroll_pane_te

0x8267,	// (0x00064a7e) popup_sp_fs_action_menu_pane_ParamLimits

0x8267,	// (0x00064a7e) popup_sp_fs_action_menu_pane

0xcbaf,	// (0x000693c6) bg_sp_fs_ctrlbar_pane_g1

0xe679,	// (0x0006ae90) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe682,	// (0x0006ae99) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe68b,	// (0x0006aea2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbaf,	// (0x000693c6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x098d,	// (0x0005d1a4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc992,	// (0x000691a9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc992,	// (0x000691a9) bg_sp_fs_ctrlbar_ddmenu_pane

0xe694,	// (0x0006aeab) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe694,	// (0x0006aeab) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6a0,	// (0x0006aeb7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6a0,	// (0x0006aeb7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0996,	// (0x0005d1ad) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0996,	// (0x0005d1ad) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ac,	// (0x0006aec3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ac,	// (0x0006aec3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa006,	// (0x0006681d) list_medium_line_t2_right_icon_g1

0x82a9,	// (0x00064ac0) list_medium_line_t2_right_icon_t1

0x82b9,	// (0x00064ad0) list_medium_line_t2_right_icon_t2

0x0001,

0xfaa0,	// (0x0006c2b7) list_medium_line_t2_right_icon_t

0xc7a5,	// (0x00068fbc) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a5,	// (0x00068fbc) bg_sp_fs_ctrlbar_pane

0x831e,	// (0x00064b35) main_sp_fs_ctrlbar_button_pane_cp01

0x8326,	// (0x00064b3d) main_sp_fs_ctrlbar_ddmenu_pane

0xe6fe,	// (0x0006af15) main_sp_fs_ctrlbar_pane_g1

0xe70a,	// (0x0006af21) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x09a0,	// (0x0005d1b7) main_sp_fs_ctrlbar_pane_g

0xe716,	// (0x0006af2d) main_sp_fs_ctrlbar_pane_t1

0x8330,	// (0x00064b47) main_sp_fs_ctrlbar_pane

0x8346,	// (0x00064b5d) main_sp_fs_listscroll_pane_te_cp01

0x8357,	// (0x00064b6e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8357,	// (0x00064b6e) popup_sp_fs_action_menu_pane_cp01

0xa5b3,	// (0x00066dca) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa5b3,	// (0x00066dca) bg_sp_fs_highlight_list_pane_cp01

0xa00e,	// (0x00066825) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa00e,	// (0x00066825) sp_fs_action_menu_list_gene_pane_g1

0xe746,	// (0x0006af5d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe746,	// (0x0006af5d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfaa5,	// (0x0006c2bc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfaa5,	// (0x0006c2bc) sp_fs_action_menu_list_gene_pane_g

0xa01d,	// (0x00066834) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa01d,	// (0x00066834) sp_fs_action_menu_list_gene_pane_t1

0xa035,	// (0x0006684c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa035,	// (0x0006684c) sp_fs_action_menu_list_gene_pane

0xe753,	// (0x0006af6a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe753,	// (0x0006af6a) popup_sp_fs_action_menu_bg_pane

0xa052,	// (0x00066869) sp_fs_action_menu_list_pane_ParamLimits

0xa052,	// (0x00066869) sp_fs_action_menu_list_pane

0x8381,	// (0x00064b98) sp_fs_scroll_pane_cp01_ParamLimits

0x8381,	// (0x00064b98) sp_fs_scroll_pane_cp01

0x83a7,	// (0x00064bbe) list_medium_line_plain_t2_t1

0x83b7,	// (0x00064bce) list_medium_line_plain_t2_t2

0x0001,

0xfaaa,	// (0x0006c2c1) list_medium_line_plain_t2_t

0x83c5,	// (0x00064bdc) list_medium_line_plain_t3_t1

0x83d5,	// (0x00064bec) list_medium_line_plain_t3_t2

0x83e3,	// (0x00064bfa) list_medium_line_plain_t3_t3

0x0002,

0xfaaf,	// (0x0006c2c6) list_medium_line_plain_t3_t

0x9bec,	// (0x00066403) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x2_t2_g2_g1

0x9bf8,	// (0x0006640f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9bf8,	// (0x0006640f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006ba5d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006ba5d) list_medium_line_x2_t2_g2_g

0x9cd8,	// (0x000664ef) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9cd8,	// (0x000664ef) list_medium_line_x2_t2_g2_t1

0x9c19,	// (0x00066430) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9c19,	// (0x00066430) list_medium_line_x2_t2_g2_t2

0x0001,

0xfab6,	// (0x0006c2cd) list_medium_line_x2_t2_g2_t_ParamLimits

0xfab6,	// (0x0006c2cd) list_medium_line_x2_t2_g2_t

0x9bec,	// (0x00066403) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x2_t4_g2_g1

0x83f1,	// (0x00064c08) list_medium_line_x2_t4_g2_g2_ParamLimits

0x83f1,	// (0x00064c08) list_medium_line_x2_t4_g2_g2

0x0001,

0xfabb,	// (0x0006c2d2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfabb,	// (0x0006c2d2) list_medium_line_x2_t4_g2_g

0x8403,	// (0x00064c1a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8403,	// (0x00064c1a) list_medium_line_x2_t4_g2_t1

0x841d,	// (0x00064c34) list_medium_line_x2_t4_g2_t2_ParamLimits

0x841d,	// (0x00064c34) list_medium_line_x2_t4_g2_t2

0x8432,	// (0x00064c49) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8432,	// (0x00064c49) list_medium_line_x2_t4_g2_t3

0x9c19,	// (0x00066430) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9c19,	// (0x00066430) list_medium_line_x2_t4_g2_t4

0x0003,

0xfac0,	// (0x0006c2d7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfac0,	// (0x0006c2d7) list_medium_line_x2_t4_g2_t

0xa070,	// (0x00066887) list_medium_line_t3_right_iconx2_g1

0xa006,	// (0x0006681d) list_medium_line_t3_right_iconx2_g2

0x8447,	// (0x00064c5e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfac9,	// (0x0006c2e0) list_medium_line_t3_right_iconx2_g

0x844f,	// (0x00064c66) list_medium_line_t3_right_iconx2_t1

0x845f,	// (0x00064c76) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfad0,	// (0x0006c2e7) list_medium_line_t3_right_iconx2_t

0x9bec,	// (0x00066403) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x3_t4_g4_g1

0x1dbc,	// (0x0005e5d3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1dbc,	// (0x0005e5d3) list_medium_line_x3_t4_g4_g2

0x9c74,	// (0x0006648b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9c74,	// (0x0006648b) list_medium_line_x3_t4_g4_g3

0x846d,	// (0x00064c84) list_medium_line_x3_t4_g4_g4_ParamLimits

0x846d,	// (0x00064c84) list_medium_line_x3_t4_g4_g4

0x0003,

0xfad5,	// (0x0006c2ec) list_medium_line_x3_t4_g4_g_ParamLimits

0xfad5,	// (0x0006c2ec) list_medium_line_x3_t4_g4_g

0x8479,	// (0x00064c90) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8479,	// (0x00064c90) list_medium_line_x3_t4_g4_t1

0x8490,	// (0x00064ca7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8490,	// (0x00064ca7) list_medium_line_x3_t4_g4_t2

0xa078,	// (0x0006688f) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa078,	// (0x0006688f) list_medium_line_x3_t4_g4_t3

0x84a5,	// (0x00064cbc) list_medium_line_x3_t4_g4_t4_ParamLimits

0x84a5,	// (0x00064cbc) list_medium_line_x3_t4_g4_t4

0x0003,

0xfade,	// (0x0006c2f5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfade,	// (0x0006c2f5) list_medium_line_x3_t4_g4_t

0x84c2,	// (0x00064cd9) list_single_dyc_row_text_pane_t1_ParamLimits

0x84c2,	// (0x00064cd9) list_single_dyc_row_text_pane_t1

0x84f9,	// (0x00064d10) list_single_dyc_row_text_pane_t2_ParamLimits

0x84f9,	// (0x00064d10) list_single_dyc_row_text_pane_t2

0xa08d,	// (0x000668a4) list_single_dyc_row_text_pane_t3_ParamLimits

0xa08d,	// (0x000668a4) list_single_dyc_row_text_pane_t3

0x0005,

0xfae7,	// (0x0006c2fe) list_single_dyc_row_text_pane_t_ParamLimits

0xfae7,	// (0x0006c2fe) list_single_dyc_row_text_pane_t

0xa0b1,	// (0x000668c8) list_single_dyc_row_pane_g1_ParamLimits

0xa0b1,	// (0x000668c8) list_single_dyc_row_pane_g1

0xa0bd,	// (0x000668d4) list_single_dyc_row_pane_g2_ParamLimits

0xa0bd,	// (0x000668d4) list_single_dyc_row_pane_g2

0xa0c9,	// (0x000668e0) list_single_dyc_row_pane_g3_ParamLimits

0xa0c9,	// (0x000668e0) list_single_dyc_row_pane_g3

0xa0d5,	// (0x000668ec) list_single_dyc_row_pane_g4_ParamLimits

0xa0d5,	// (0x000668ec) list_single_dyc_row_pane_g4

0x0003,

0xfaf4,	// (0x0006c30b) list_single_dyc_row_pane_g_ParamLimits

0xfaf4,	// (0x0006c30b) list_single_dyc_row_pane_g

0xa0e1,	// (0x000668f8) list_single_dyc_row_text_pane_ParamLimits

0xa0e1,	// (0x000668f8) list_single_dyc_row_text_pane

0x97c1,	// (0x00065fd8) bg_sp_fs_scroll_pane

0xe761,	// (0x0006af78) thumb_sp_fs_scroll_pane

0x9e5c,	// (0x00066673) list_medium_line_g1_ParamLimits

0x9e5c,	// (0x00066673) list_medium_line_g1

0xa100,	// (0x00066917) list_medium_line_t1_ParamLimits

0xa100,	// (0x00066917) list_medium_line_t1

0x9bec,	// (0x00066403) list_medium_line_x2_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x2_g1

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_g2_ParamLimits

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_g2

0x0001,

0xfafd,	// (0x0006c314) list_medium_line_x2_g_ParamLimits

0xfafd,	// (0x0006c314) list_medium_line_x2_g

0xa115,	// (0x0006692c) list_medium_line_x2_t1_ParamLimits

0xa115,	// (0x0006692c) list_medium_line_x2_t1

0x9bec,	// (0x00066403) list_medium_line_x3_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x3_g1

0x1dbc,	// (0x0005e5d3) list_medium_line_x3_g2_ParamLimits

0x1dbc,	// (0x0005e5d3) list_medium_line_x3_g2

0x0001,

0xfafd,	// (0x0006c314) list_medium_line_x3_g_ParamLimits

0xfafd,	// (0x0006c314) list_medium_line_x3_g

0xa115,	// (0x0006692c) list_medium_line_x3_t1_ParamLimits

0xa115,	// (0x0006692c) list_medium_line_x3_t1

0xe76a,	// (0x0006af81) thumb_sp_fs_scroll_pane_g1

0xe773,	// (0x0006af8a) thumb_sp_fs_scroll_pane_g2

0xe77c,	// (0x0006af93) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a07,	// (0x0005d21e) thumb_sp_fs_scroll_pane_g

0xe76a,	// (0x0006af81) bg_sp_fs_scroll_pane_g1

0xe773,	// (0x0006af8a) bg_sp_fs_scroll_pane_g2

0xe77c,	// (0x0006af93) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a07,	// (0x0005d21e) bg_sp_fs_scroll_pane_g

0x9bec,	// (0x00066403) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9bec,	// (0x00066403) list_medium_line_x2_t3_g4_g1

0x1ddc,	// (0x0005e5f3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ddc,	// (0x0005e5f3) list_medium_line_x2_t3_g4_g2

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1dbc,	// (0x0005e5d3) list_medium_line_x2_t3_g4_g3

0x9bf8,	// (0x0006640f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9bf8,	// (0x0006640f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006bad9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006bad9) list_medium_line_x2_t3_g4_g

0x861c,	// (0x00064e33) list_medium_line_x2_t3_g4_t1_ParamLimits

0x861c,	// (0x00064e33) list_medium_line_x2_t3_g4_t1

0x8632,	// (0x00064e49) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8632,	// (0x00064e49) list_medium_line_x2_t3_g4_t2

0x9c19,	// (0x00066430) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9c19,	// (0x00066430) list_medium_line_x2_t3_g4_t3

0x0002,

0xfb02,	// (0x0006c319) list_medium_line_x2_t3_g4_t_ParamLimits

0xfb02,	// (0x0006c319) list_medium_line_x2_t3_g4_t

0x9e5c,	// (0x00066673) list_medium_line_g2_g1_ParamLimits

0x9e5c,	// (0x00066673) list_medium_line_g2_g1

0x9e68,	// (0x0006667f) list_medium_line_g2_g2_ParamLimits

0x9e68,	// (0x0006667f) list_medium_line_g2_g2

0x0001,

0xf856,	// (0x0006c06d) list_medium_line_g2_g_ParamLimits

0xf856,	// (0x0006c06d) list_medium_line_g2_g

0xa12b,	// (0x00066942) list_medium_line_g2_t1_ParamLimits

0xa12b,	// (0x00066942) list_medium_line_g2_t1

0x9e5c,	// (0x00066673) list_medium_line_t3_g2_g1_ParamLimits

0x9e5c,	// (0x00066673) list_medium_line_t3_g2_g1

0x9e68,	// (0x0006667f) list_medium_line_t3_g2_g2_ParamLimits

0x9e68,	// (0x0006667f) list_medium_line_t3_g2_g2

0x0001,

0xf856,	// (0x0006c06d) list_medium_line_t3_g2_g_ParamLimits

0xf856,	// (0x0006c06d) list_medium_line_t3_g2_g

0x864b,	// (0x00064e62) list_medium_line_t3_g2_t1_ParamLimits

0x864b,	// (0x00064e62) list_medium_line_t3_g2_t1

0x8662,	// (0x00064e79) list_medium_line_t3_g2_t2_ParamLimits

0x8662,	// (0x00064e79) list_medium_line_t3_g2_t2

0x8677,	// (0x00064e8e) list_medium_line_t3_g2_t3_ParamLimits

0x8677,	// (0x00064e8e) list_medium_line_t3_g2_t3

0x0002,

0xfb09,	// (0x0006c320) list_medium_line_t3_g2_t_ParamLimits

0xfb09,	// (0x0006c320) list_medium_line_t3_g2_t

0xa006,	// (0x0006681d) list_medium_line_right_icon_g1

0xa140,	// (0x00066957) list_medium_line_right_icon_t1

0x9e5c,	// (0x00066673) list_medium_line_t2_g1_ParamLimits

0x9e5c,	// (0x00066673) list_medium_line_t2_g1

0x868c,	// (0x00064ea3) list_medium_line_t2_t1_ParamLimits

0x868c,	// (0x00064ea3) list_medium_line_t2_t1

0x86a6,	// (0x00064ebd) list_medium_line_t2_t2_ParamLimits

0x86a6,	// (0x00064ebd) list_medium_line_t2_t2

0x0001,

0xfb10,	// (0x0006c327) list_medium_line_t2_t_ParamLimits

0xfb10,	// (0x0006c327) list_medium_line_t2_t

0x9e5c,	// (0x00066673) list_medium_line_t3_g1_ParamLimits

0x9e5c,	// (0x00066673) list_medium_line_t3_g1

0x86bb,	// (0x00064ed2) list_medium_line_t3_t1_ParamLimits

0x86bb,	// (0x00064ed2) list_medium_line_t3_t1

0x86d5,	// (0x00064eec) list_medium_line_t3_t2_ParamLimits

0x86d5,	// (0x00064eec) list_medium_line_t3_t2

0x86ea,	// (0x00064f01) list_medium_line_t3_t3_ParamLimits

0x86ea,	// (0x00064f01) list_medium_line_t3_t3

0x0002,

0xfb15,	// (0x0006c32c) list_medium_line_t3_t_ParamLimits

0xfb15,	// (0x0006c32c) list_medium_line_t3_t

0x9e5c,	// (0x00066673) list_medium_line_g3_g1_ParamLimits

0x9e5c,	// (0x00066673) list_medium_line_g3_g1

0xa1e6,	// (0x000669fd) list_medium_line_g3_g2_ParamLimits

0xa1e6,	// (0x000669fd) list_medium_line_g3_g2

0x9e68,	// (0x0006667f) list_medium_line_g3_g3_ParamLimits

0x9e68,	// (0x0006667f) list_medium_line_g3_g3

0x0002,

0xfb1c,	// (0x0006c333) list_medium_line_g3_g_ParamLimits

0xfb1c,	// (0x0006c333) list_medium_line_g3_g

0xa1f2,	// (0x00066a09) list_medium_line_g3_t1_ParamLimits

0xa1f2,	// (0x00066a09) list_medium_line_g3_t1

0x9e5c,	// (0x00066673) list_medium_line_t2_g3_g1_ParamLimits

0x9e5c,	// (0x00066673) list_medium_line_t2_g3_g1

0xa1e6,	// (0x000669fd) list_medium_line_t2_g3_g2_ParamLimits

0xa1e6,	// (0x000669fd) list_medium_line_t2_g3_g2

0x9e68,	// (0x0006667f) list_medium_line_t2_g3_g3_ParamLimits

0x9e68,	// (0x0006667f) list_medium_line_t2_g3_g3

0x0002,

0xfb1c,	// (0x0006c333) list_medium_line_t2_g3_g_ParamLimits

0xfb1c,	// (0x0006c333) list_medium_line_t2_g3_g

0x86ff,	// (0x00064f16) list_medium_line_t2_g3_t1_ParamLimits

0x86ff,	// (0x00064f16) list_medium_line_t2_g3_t1

0x8719,	// (0x00064f30) list_medium_line_t2_g3_t2_ParamLimits

0x8719,	// (0x00064f30) list_medium_line_t2_g3_t2

0x0001,

0xfb23,	// (0x0006c33a) list_medium_line_t2_g3_t_ParamLimits

0xfb23,	// (0x0006c33a) list_medium_line_t2_g3_t

0x9e5c,	// (0x00066673) list_medium_line_t3_g3_g1_ParamLimits

0x9e5c,	// (0x00066673) list_medium_line_t3_g3_g1

0xa1e6,	// (0x000669fd) list_medium_line_t3_g3_g2_ParamLimits

0xa1e6,	// (0x000669fd) list_medium_line_t3_g3_g2

0x9e68,	// (0x0006667f) list_medium_line_t3_g3_g3_ParamLimits

0x9e68,	// (0x0006667f) list_medium_line_t3_g3_g3

0x0002,

0xfb1c,	// (0x0006c333) list_medium_line_t3_g3_g_ParamLimits

0xfb1c,	// (0x0006c333) list_medium_line_t3_g3_g

0x872e,	// (0x00064f45) list_medium_line_t3_g3_t1_ParamLimits

0x872e,	// (0x00064f45) list_medium_line_t3_g3_t1

0x8742,	// (0x00064f59) list_medium_line_t3_g3_t2_ParamLimits

0x8742,	// (0x00064f59) list_medium_line_t3_g3_t2

0x8754,	// (0x00064f6b) list_medium_line_t3_g3_t3_ParamLimits

0x8754,	// (0x00064f6b) list_medium_line_t3_g3_t3

0x0002,

0xfb28,	// (0x0006c33f) list_medium_line_t3_g3_t_ParamLimits

0xfb28,	// (0x0006c33f) list_medium_line_t3_g3_t

0xa070,	// (0x00066887) list_medium_line_right_iconx2_g1

0xa006,	// (0x0006681d) list_medium_line_right_iconx2_g2

0x0001,

0xfb2f,	// (0x0006c346) list_medium_line_right_iconx2_g

0xa207,	// (0x00066a1e) list_medium_line_right_iconx2_t1

0xa070,	// (0x00066887) list_medium_line_t2_right_iconx2_g1

0xa006,	// (0x0006681d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb2f,	// (0x0006c346) list_medium_line_t2_right_iconx2_g

0x8766,	// (0x00064f7d) list_medium_line_t2_right_iconx2_t1

0x8776,	// (0x00064f8d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb34,	// (0x0006c34b) list_medium_line_t2_right_iconx2_t

0xa215,	// (0x00066a2c) list_medium_line_x4_t4_t1

0x8784,	// (0x00064f9b) list_medium_line_x4_t4_t2

0x8794,	// (0x00064fab) list_medium_line_x4_t4_t3

0x87a4,	// (0x00064fbb) list_medium_line_x4_t4_t4

0x0003,

0xfb39,	// (0x0006c350) list_medium_line_x4_t4_t

0x87de,	// (0x00064ff5) tport_appsw_pane_ParamLimits

0x87de,	// (0x00064ff5) tport_appsw_pane

0x87ec,	// (0x00065003) tport_contact_pane_ParamLimits

0x87ec,	// (0x00065003) tport_contact_pane

0x87fc,	// (0x00065013) tport_listscroll_pane_ParamLimits

0x87fc,	// (0x00065013) tport_listscroll_pane

0x880c,	// (0x00065023) cell_tport_appsw_pane_ParamLimits

0x880c,	// (0x00065023) cell_tport_appsw_pane

0xce74,	// (0x0006968b) tport_appsw_pane_g1_ParamLimits

0xce74,	// (0x0006968b) tport_appsw_pane_g1

0xe785,	// (0x0006af9c) tport_contact_pane_g1

0xe0f8,	// (0x0006a90f) tport_contact_pane_t1

0xe78e,	// (0x0006afa5) tport_contact_pane_t2

0x0001,

0x0a4e,	// (0x0005d265) tport_contact_pane_t

0xe79c,	// (0x0006afb3) list_tport_pane

0xe7a5,	// (0x0006afbc) scroll_pane_cp_030

0x883f,	// (0x00065056) cell_tport_appsw_pane_g1

0x884f,	// (0x00065066) cell_tport_appsw_pane_t1

0x885d,	// (0x00065074) grid_highlight_pane_cp019

0x8865,	// (0x0006507c) list_tport_double_graphic_pane_ParamLimits

0x8865,	// (0x0006507c) list_tport_double_graphic_pane

0xa5b3,	// (0x00066dca) list_highlight_pane_cp023_ParamLimits

0xa5b3,	// (0x00066dca) list_highlight_pane_cp023

0x8877,	// (0x0006508e) list_tport_double_graphic_pane_g1_ParamLimits

0x8877,	// (0x0006508e) list_tport_double_graphic_pane_g1

0x8884,	// (0x0006509b) list_tport_double_graphic_pane_t1_ParamLimits

0x8884,	// (0x0006509b) list_tport_double_graphic_pane_t1

0x8899,	// (0x000650b0) list_tport_double_graphic_pane_t2_ParamLimits

0x8899,	// (0x000650b0) list_tport_double_graphic_pane_t2

0x0001,

0xfb49,	// (0x0006c360) list_tport_double_graphic_pane_t_ParamLimits

0xfb49,	// (0x0006c360) list_tport_double_graphic_pane_t

0x97c1,	// (0x00065fd8) main_cale_note_pane

0x648e,	// (0x00062ca5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x648e,	// (0x00062ca5) cell_vitu2_function_top_wide_pane_cp01

0x7ef0,	// (0x00064707) wait_bar_pane_cp05_ParamLimits

0xa5b3,	// (0x00066dca) listscroll_cmail_pane

0xe7ae,	// (0x0006afc5) list_cmail_pane

0x88ab,	// (0x000650c2) list_cmail_body_pane

0x88d2,	// (0x000650e9) list_single_cmail_header_caption_pane

0x8906,	// (0x0006511d) list_single_cmail_header_detail_pane_ParamLimits

0x8906,	// (0x0006511d) list_single_cmail_header_detail_pane

0xe7be,	// (0x0006afd5) list_single_cmail_header_caption_pane_t1

0x8941,	// (0x00065158) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8941,	// (0x00065158) list_single_cmail_header_detail_pane_g1

0xa223,	// (0x00066a3a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa223,	// (0x00066a3a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb4e,	// (0x0006c365) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb4e,	// (0x0006c365) list_single_cmail_header_detail_pane_g

0xa22f,	// (0x00066a46) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa22f,	// (0x00066a46) list_single_cmail_header_detail_pane_t1

0xa28f,	// (0x00066aa6) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa28f,	// (0x00066aa6) list_single_cmail_header_editor_pane_bg

0xe7e2,	// (0x0006aff9) list_cmail_body_pane_g1

0xe7eb,	// (0x0006b002) list_cmail_body_pane_t1

0xd61e,	// (0x00069e35) list_single_cmail_header_editor_pane_bg_g1

0xab5c,	// (0x00067373) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd62e,	// (0x00069e45) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd626,	// (0x00069e3d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd842,	// (0x0006a059) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd64e,	// (0x00069e65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd63e,	// (0x00069e55) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd646,	// (0x00069e5d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab3c,	// (0x00067353) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8957,	// (0x0006516e) calenote_gesture_pane_ParamLimits

0x8957,	// (0x0006516e) calenote_gesture_pane

0x8971,	// (0x00065188) calenote_window_pane_ParamLimits

0x8971,	// (0x00065188) calenote_window_pane

0xe7f9,	// (0x0006b010) popup_note_window_cp01

0x8989,	// (0x000651a0) calenote_swipe_1_pane_ParamLimits

0x8989,	// (0x000651a0) calenote_swipe_1_pane

0x824d,	// (0x00064a64) calenote_swipe_2_pane_ParamLimits

0x824d,	// (0x00064a64) calenote_swipe_2_pane

0xe60b,	// (0x0006ae22) calenote_swipe_1_pane_g1_ParamLimits

0xe60b,	// (0x0006ae22) calenote_swipe_1_pane_g1

0xe618,	// (0x0006ae2f) calenote_swipe_1_pane_g2_ParamLimits

0xe618,	// (0x0006ae2f) calenote_swipe_1_pane_g2

0x0001,

0x0983,	// (0x0005d19a) calenote_swipe_1_pane_g_ParamLimits

0x0983,	// (0x0005d19a) calenote_swipe_1_pane_g

0xe80b,	// (0x0006b022) calenote_swipe_1_pane_t1_ParamLimits

0xe80b,	// (0x0006b022) calenote_swipe_1_pane_t1

0xe60b,	// (0x0006ae22) calenote_swipe_2_pane_g1_ParamLimits

0xe60b,	// (0x0006ae22) calenote_swipe_2_pane_g1

0xe82a,	// (0x0006b041) calenote_swipe_2_pane_g2_ParamLimits

0xe82a,	// (0x0006b041) calenote_swipe_2_pane_g2

0x0001,

0x0a6b,	// (0x0005d282) calenote_swipe_2_pane_g_ParamLimits

0x0a6b,	// (0x0005d282) calenote_swipe_2_pane_g

0xe836,	// (0x0006b04d) calenote_swipe_2_pane_t1_ParamLimits

0xe836,	// (0x0006b04d) calenote_swipe_2_pane_t1

0x97c1,	// (0x00065fd8) main_mup_navstr_pane

0x51c8,	// (0x000619df) main_mup3_pane_t7_ParamLimits

0x51c8,	// (0x000619df) main_mup3_pane_t7

0x5bf2,	// (0x00062409) main_mp4_pane_g6_ParamLimits

0x5bf2,	// (0x00062409) main_mp4_pane_g6

0x5f72,	// (0x00062789) main_image3_pane_t4_ParamLimits

0x5f72,	// (0x00062789) main_image3_pane_t4

0x899c,	// (0x000651b3) popup_navstr_preview_pane_ParamLimits

0x899c,	// (0x000651b3) popup_navstr_preview_pane

0x89a8,	// (0x000651bf) scroll_navstr_pane_ParamLimits

0x89a8,	// (0x000651bf) scroll_navstr_pane

0x97c1,	// (0x00065fd8) bg_popup_preview_window_pane_cp04

0xe85d,	// (0x0006b074) popup_navstr_preview_pane_t1

0x89b4,	// (0x000651cb) scroll_navstr_pane_g1_ParamLimits

0x89b4,	// (0x000651cb) scroll_navstr_pane_g1

0x89c1,	// (0x000651d8) scroll_navstr_pane_t1_ParamLimits

0x89c1,	// (0x000651d8) scroll_navstr_pane_t1

0xe802,	// (0x0006b019) bg_button_pane_cp014

0xe802,	// (0x0006b019) bg_button_pane_cp030

0x9fac,	// (0x000667c3) list_double_fisheye_pane_g4_ParamLimits

0x9fac,	// (0x000667c3) list_double_fisheye_pane_g4

0x9fb8,	// (0x000667cf) list_double_fisheye_pane_g5_ParamLimits

0x9fb8,	// (0x000667cf) list_double_fisheye_pane_g5

0xd1d9,	// (0x000699f0) sp_fs_scroll_pane_cp03

0xe6fe,	// (0x0006af15) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe70a,	// (0x0006af21) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x09a0,	// (0x0005d1b7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe716,	// (0x0006af2d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7b6,	// (0x0006afcd) sp_fs_scroll_pane_cp02

0xa84b,	// (0x00067062) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa84b,	// (0x00067062) popup_sp_fs_calendar_preview_list_single_pane

0x97c1,	// (0x00065fd8) main_cam6_pano_pane

0x41ce,	// (0x000609e5) main_mup3_pane_ParamLimits

0x97c1,	// (0x00065fd8) main_phacti_pane

0x7dc5,	// (0x000645dc) bg_button_pane_cp11

0x7ddd,	// (0x000645f4) main_mobtv_info_pane_g2_ParamLimits

0x7ddd,	// (0x000645f4) main_mobtv_info_pane_g2

0x0001,

0xfa57,	// (0x0006c26e) main_mobtv_info_pane_g_ParamLimits

0xfa57,	// (0x0006c26e) main_mobtv_info_pane_g

0x7f8f,	// (0x000647a6) sc_clock_pane_t5_ParamLimits

0x7f8f,	// (0x000647a6) sc_clock_pane_t5

0x8032,	// (0x00064849) main_radioblah_pane_g1_ParamLimits

0xe53c,	// (0x0006ad53) main_radioblah_pane_t3_ParamLimits

0xe53c,	// (0x0006ad53) main_radioblah_pane_t3

0xe554,	// (0x0006ad6b) main_radioblah_pane_t4_ParamLimits

0xe554,	// (0x0006ad6b) main_radioblah_pane_t4

0x8050,	// (0x00064867) main_radioblah_text_pane_ParamLimits

0x8050,	// (0x00064867) main_radioblah_text_pane

0x805d,	// (0x00064874) main_radioblah_info_pane_g1_ParamLimits

0x80f2,	// (0x00064909) main_radioblah_info_pane_t4_ParamLimits

0x80f2,	// (0x00064909) main_radioblah_info_pane_t4

0xa5b3,	// (0x00066dca) main_sp_fs_calendar_pane

0x89d3,	// (0x000651ea) main_phacti_pane_g1

0x89db,	// (0x000651f2) phacti_note_pane_ParamLimits

0x89db,	// (0x000651f2) phacti_note_pane

0xe874,	// (0x0006b08b) phacti_term_pane_ParamLimits

0xe874,	// (0x0006b08b) phacti_term_pane

0xe889,	// (0x0006b0a0) phacti_note_pane_t1_ParamLimits

0xe889,	// (0x0006b0a0) phacti_note_pane_t1

0xa2a6,	// (0x00066abd) phacti_term_pane_g1

0xa2ae,	// (0x00066ac5) phacti_term_pane_t1_ParamLimits

0xa2ae,	// (0x00066ac5) phacti_term_pane_t1

0xe8a0,	// (0x0006b0b7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a8,	// (0x0006b0bf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0a75,	// (0x0005d28c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b0,	// (0x0006b0c7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b0,	// (0x0006b0c7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c6,	// (0x0006b0dd) aid_popup_sp_fs_bg_corner_pane

0xcbaf,	// (0x000693c6) popup_sp_fs_calendar_preview_bg_pane_g1

0x97c1,	// (0x00065fd8) popup_sp_fs_calendar_preview_bg_pane

0xa14e,	// (0x00066965) popup_sp_fs_calendar_preview_list_pane

0xc7a5,	// (0x00068fbc) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a5,	// (0x00068fbc) bg_main_sp_fs_cale_pane

0xa2d8,	// (0x00066aef) listscroll_cale_mrui_pane_ParamLimits

0xa2d8,	// (0x00066aef) listscroll_cale_mrui_pane

0xa2ed,	// (0x00066b04) listscroll_sp_fs_schedule_track_pane

0xa2f6,	// (0x00066b0d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2f6,	// (0x00066b0d) main_sp_fs_ctrlbar_pane_cp01

0xe8ce,	// (0x0006b0e5) main_sp_fs_ribbon_pane

0xa309,	// (0x00066b20) popup_sp_fs_cale_preview_window

0x8a3e,	// (0x00065255) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a3e,	// (0x00065255) list_single_sp_fs_schedule_track_pane

0xdbd6,	// (0x0006a3ed) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdbd6,	// (0x0006a3ed) bg_sp_fs_highlight_list_pane_cp03

0x8a6c,	// (0x00065283) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a6c,	// (0x00065283) list_single_sp_fs_schedule_track_pane_g1

0x8a78,	// (0x0006528f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a78,	// (0x0006528f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb5f,	// (0x0006c376) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb5f,	// (0x0006c376) list_single_sp_fs_schedule_track_pane_g

0x8a84,	// (0x0006529b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a84,	// (0x0006529b) list_single_sp_fs_schedule_track_pane_t1

0x8a9c,	// (0x000652b3) sp_fs_schedule_track_pane_ParamLimits

0x8a9c,	// (0x000652b3) sp_fs_schedule_track_pane

0xe8d6,	// (0x0006b0ed) sp_fs_schedule_track_pane_g1

0xe8de,	// (0x0006b0f5) sp_fs_schedule_track_pane_g2

0xe8e6,	// (0x0006b0fd) sp_fs_schedule_track_pane_g3

0xe8ee,	// (0x0006b105) sp_fs_schedule_track_pane_g4

0xe8f6,	// (0x0006b10d) sp_fs_schedule_track_pane_g5

0x0004,

0x0a7f,	// (0x0005d296) sp_fs_schedule_track_pane_g

0xd61e,	// (0x00069e35) bg_sp_fs_schedule_viewer_highlight_g1

0xab5c,	// (0x00067373) bg_sp_fs_schedule_viewer_highlight_g2

0xd626,	// (0x00069e3d) bg_sp_fs_schedule_viewer_highlight_g3

0xd62e,	// (0x00069e45) bg_sp_fs_schedule_viewer_highlight_g4

0xd842,	// (0x0006a059) bg_sp_fs_schedule_viewer_highlight_g5

0xd63e,	// (0x00069e55) bg_sp_fs_schedule_viewer_highlight_g6

0xd646,	// (0x00069e5d) bg_sp_fs_schedule_viewer_highlight_g7

0xd64e,	// (0x00069e65) bg_sp_fs_schedule_viewer_highlight_g8

0xab3c,	// (0x00067353) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb64,	// (0x0006c37b) bg_sp_fs_schedule_viewer_highlight_g

0x97c1,	// (0x00065fd8) bg_main_sp_fs_ribbon_pane

0x8aac,	// (0x000652c3) main_sp_fs_ribbon_pane_g1

0xe8fe,	// (0x0006b115) main_sp_fs_ribbon_pane_t1

0x8ab5,	// (0x000652cc) main_sp_fs_ribbon_pane_t2

0xe90d,	// (0x0006b124) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb77,	// (0x0006c38e) main_sp_fs_ribbon_pane_t

0xe91c,	// (0x0006b133) main_sp_fs_ribbon_scheduler_pane

0xe924,	// (0x0006b13b) bg_main_sp_fs_ribbon_pane_g1

0xe92d,	// (0x0006b144) bg_main_sp_fs_ribbon_pane_g2

0xe936,	// (0x0006b14d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0aa4,	// (0x0005d2bb) bg_main_sp_fs_ribbon_pane_g

0xe93e,	// (0x0006b155) main_sp_fs_ribbon_scheduler_pane_g1

0xe947,	// (0x0006b15e) main_sp_fs_ribbon_scheduler_pane_g2

0xe950,	// (0x0006b167) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0aab,	// (0x0005d2c2) main_sp_fs_ribbon_scheduler_pane_g

0xe959,	// (0x0006b170) list_cale_mrui_pane

0x8ac6,	// (0x000652dd) sp_fs_scroll_pane_cp07_ParamLimits

0x8ac6,	// (0x000652dd) sp_fs_scroll_pane_cp07

0x8ae2,	// (0x000652f9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ae2,	// (0x000652f9) bg_sp_fs_schedule_viewer_highlight

0xe966,	// (0x0006b17d) list_single_sp_fs_schedule_track_pane_cp01

0xe96e,	// (0x0006b185) list_sp_fs_schedule_track_pane

0xe976,	// (0x0006b18d) sp_fs_scroll_pane_cp06_ParamLimits

0xe976,	// (0x0006b18d) sp_fs_scroll_pane_cp06

0xcbaf,	// (0x000693c6) bgmain_sp_fs_calendar_pane_g1

0x8aef,	// (0x00065306) list_single_cale_mrui_pane_ParamLimits

0x8aef,	// (0x00065306) list_single_cale_mrui_pane

0xa31b,	// (0x00066b32) list_single_cale_mrui_row_pane_ParamLimits

0xa31b,	// (0x00066b32) list_single_cale_mrui_row_pane

0xa328,	// (0x00066b3f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa328,	// (0x00066b3f) list_single_cale_mrui_row_pane_g1

0xa360,	// (0x00066b77) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa360,	// (0x00066b77) list_single_cale_mrui_row_pane_t1

0x8b21,	// (0x00065338) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8b21,	// (0x00065338) list_single_cale_mrui_row_pane_t2

0xa372,	// (0x00066b89) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa372,	// (0x00066b89) list_single_cale_mrui_row_pane_t3

0xa3a1,	// (0x00066bb8) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa3a1,	// (0x00066bb8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb85,	// (0x0006c39c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb85,	// (0x0006c39c) list_single_cale_mrui_row_pane_t

0x8b87,	// (0x0006539e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8b87,	// (0x0006539e) list_single_cmail_header_editor_pane_bg_cp01

0x8ba9,	// (0x000653c0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ba9,	// (0x000653c0) list_single_cmail_header_editor_pane_bg_cp02

0x8bc5,	// (0x000653dc) main_radioblah_text_pane_t1_ParamLimits

0x8bc5,	// (0x000653dc) main_radioblah_text_pane_t1

0xe995,	// (0x0006b1ac) cam6_indi_pane_cp01

0xe99d,	// (0x0006b1b4) cam6_mode_pane_cp01

0xe9a5,	// (0x0006b1bc) cam6_pano_pane

0xe9ae,	// (0x0006b1c5) cam6_zoom_pane_cp01

0xe9b6,	// (0x0006b1cd) cam6_pano_image_pane

0xe9c1,	// (0x0006b1d8) cam6_pano_pane_g1

0xe29f,	// (0x0006aab6) cam6_pano_pane_g2

0xe9ca,	// (0x0006b1e1) cam6_pano_pane_g3

0xe9d3,	// (0x0006b1ea) cam6_pano_pane_g4

0xd16d,	// (0x00069984) cam6_pano_pane_g5

0xe9dc,	// (0x0006b1f3) cam6_pano_pane_g6

0xe9e6,	// (0x0006b1fd) cam6_pano_pane_g7

0xe9ee,	// (0x0006b205) cam6_pano_pane_g8

0xe9f7,	// (0x0006b20e) cam6_pano_pane_g9

0x0008,

0xfb8e,	// (0x0006c3a5) cam6_pano_pane_g

0x97c1,	// (0x00065fd8) main_browser_tag_pane

0xe855,	// (0x0006b06c) grid_navstr_albumart_pane

0xea02,	// (0x0006b219) cell_navstr_albumart_pane_ParamLimits

0xea02,	// (0x0006b219) cell_navstr_albumart_pane

0xb4fb,	// (0x00067d12) cell_navstr_albumart_pane_g1

0xc5b6,	// (0x00068dcd) cell_navstr_albumart_pane_g2

0xc5c6,	// (0x00068ddd) cell_navstr_albumart_pane_g3

0xc5be,	// (0x00068dd5) cell_navstr_albumart_pane_g4

0x0003,

0x0ad5,	// (0x0005d2ec) cell_navstr_albumart_pane_g

0x8be0,	// (0x000653f7) bt_list_pane_ParamLimits

0x8be0,	// (0x000653f7) bt_list_pane

0xea24,	// (0x0006b23b) bt_list_pane_t1

0xea33,	// (0x0006b24a) bt_list_pane_t2

0x0001,

0x0ade,	// (0x0005d2f5) bt_list_pane_t

0x97c1,	// (0x00065fd8) main_cale_prevew_pane

0x8c04,	// (0x0006541b) popup_cale_preview_window_ParamLimits

0x8c04,	// (0x0006541b) popup_cale_preview_window

0xa5b3,	// (0x00066dca) bg_popup_preview_window_pane_cp05_ParamLimits

0xa5b3,	// (0x00066dca) bg_popup_preview_window_pane_cp05

0xea42,	// (0x0006b259) list_cale_preview_pane_ParamLimits

0xea42,	// (0x0006b259) list_cale_preview_pane

0xea4e,	// (0x0006b265) list_double_cale_preview_pane_ParamLimits

0xea4e,	// (0x0006b265) list_double_cale_preview_pane

0xea60,	// (0x0006b277) list_single_cale_preview_pane_ParamLimits

0xea60,	// (0x0006b277) list_single_cale_preview_pane

0xea74,	// (0x0006b28b) list_single_cale_preview_pane_g1

0xea7c,	// (0x0006b293) list_single_cale_preview_pane_t1_ParamLimits

0xea7c,	// (0x0006b293) list_single_cale_preview_pane_t1

0xea91,	// (0x0006b2a8) list_double_cale_preview_pane_g1

0xea99,	// (0x0006b2b0) list_double_cale_preview_pane_t1_ParamLimits

0xea99,	// (0x0006b2b0) list_double_cale_preview_pane_t1

0xeaae,	// (0x0006b2c5) list_double_cale_preview_pane_t2_ParamLimits

0xeaae,	// (0x0006b2c5) list_double_cale_preview_pane_t2

0x0001,

0x0ae3,	// (0x0005d2fa) list_double_cale_preview_pane_t_ParamLimits

0x0ae3,	// (0x0005d2fa) list_double_cale_preview_pane_t

0x97c1,	// (0x00065fd8) main_ezdial_pane

0xa5b3,	// (0x00066dca) main_sp_fs_email_pane_ParamLimits

0x82c7,	// (0x00064ade) cmail_ddmenu_btn01_pane_ParamLimits

0x82c7,	// (0x00064ade) cmail_ddmenu_btn01_pane

0x82e4,	// (0x00064afb) cmail_ddmenu_btn02_pane_ParamLimits

0x82e4,	// (0x00064afb) cmail_ddmenu_btn02_pane

0x8302,	// (0x00064b19) cmail_ddmenu_btn03_pane_ParamLimits

0x8302,	// (0x00064b19) cmail_ddmenu_btn03_pane

0x8330,	// (0x00064b47) main_sp_fs_ctrlbar_pane_ParamLimits

0x8346,	// (0x00064b5d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x88ab,	// (0x000650c2) list_cmail_body_pane_ParamLimits

0xe7cc,	// (0x0006afe3) bg_button_pane_cp12

0xe7d5,	// (0x0006afec) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d5,	// (0x0006afec) list_single_cmail_header_detail_pane_g3

0xa26b,	// (0x00066a82) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa26b,	// (0x00066a82) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb55,	// (0x0006c36c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb55,	// (0x0006c36c) list_single_cmail_header_detail_pane_t

0xa2c3,	// (0x00066ada) phacti_term_pane_t2_ParamLimits

0xa2c3,	// (0x00066ada) phacti_term_pane_t2

0x0001,

0xfb5a,	// (0x0006c371) phacti_term_pane_t_ParamLimits

0xfb5a,	// (0x0006c371) phacti_term_pane_t

0xeac6,	// (0x0006b2dd) aid_size_list_single_double

0x8c1b,	// (0x00065432) popup_ezdial_listscroll_window

0x8c3e,	// (0x00065455) popup_number_entry_window_cp01

0xa903,	// (0x0006711a) bg_popup_call_pane_cp09

0xead2,	// (0x0006b2e9) ezdial_list_pane

0xeada,	// (0x0006b2f1) scroll_pane_cp23

0xc992,	// (0x000691a9) bg_button_pane_cp028_ParamLimits

0xc992,	// (0x000691a9) bg_button_pane_cp028

0x8c4c,	// (0x00065463) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c4c,	// (0x00065463) cmail_ddmenu_btn01_pane_g1

0x8c5e,	// (0x00065475) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c5e,	// (0x00065475) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfba1,	// (0x0006c3b8) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfba1,	// (0x0006c3b8) cmail_ddmenu_btn01_pane_g

0xeae2,	// (0x0006b2f9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae2,	// (0x0006b2f9) cmail_ddmenu_btn01_pane_t1

0xc7a5,	// (0x00068fbc) bg_button_pane_cp029_ParamLimits

0xc7a5,	// (0x00068fbc) bg_button_pane_cp029

0x8c6a,	// (0x00065481) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c6a,	// (0x00065481) cmail_ddmenu_btn02_pane_g1

0x8c82,	// (0x00065499) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c82,	// (0x00065499) cmail_ddmenu_btn02_pane_t1

0xdbd6,	// (0x0006a3ed) bg_button_pane_cp031_ParamLimits

0xdbd6,	// (0x0006a3ed) bg_button_pane_cp031

0x8c6a,	// (0x00065481) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c6a,	// (0x00065481) cmail_ddmenu_btn03_pane_g1

0x8c82,	// (0x00065499) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c82,	// (0x00065499) cmail_ddmenu_btn03_pane_t1

0x5e0f,	// (0x00062626) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e29,	// (0x00062640) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e29,	// (0x00062640) cell_dialer2_keypad_pane_t1_copy1

0x7c4a,	// (0x00064461) ncimui_group_button_pane

0xa5b3,	// (0x00066dca) main_sp_fs_calendar_pane_ParamLimits

0x88d2,	// (0x000650e9) list_single_cmail_header_caption_pane_ParamLimits

0xde3f,	// (0x0006a656) aid_recal_txt_sm_pane

0x97c1,	// (0x00065fd8) mian_recal_day_pane

0xa309,	// (0x00066b20) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf7,	// (0x0006b30e) list_recal_day_pane

0xa5d2,	// (0x00066de9) list_single_recal_day_pane_ParamLimits

0xa5d2,	// (0x00066de9) list_single_recal_day_pane

0xeb1e,	// (0x0006b335) list_single_recal_day_pane_g1_ParamLimits

0xeb1e,	// (0x0006b335) list_single_recal_day_pane_g1

0xa5e4,	// (0x00066dfb) list_single_recal_day_pane_g2_ParamLimits

0xa5e4,	// (0x00066dfb) list_single_recal_day_pane_g2

0xa5f4,	// (0x00066e0b) list_single_recal_day_pane_g3_ParamLimits

0xa5f4,	// (0x00066e0b) list_single_recal_day_pane_g3

0x8ca6,	// (0x000654bd) list_single_recal_day_pane_g4_ParamLimits

0x8ca6,	// (0x000654bd) list_single_recal_day_pane_g4

0xa600,	// (0x00066e17) list_single_recal_day_pane_g5_ParamLimits

0xa600,	// (0x00066e17) list_single_recal_day_pane_g5

0xa610,	// (0x00066e27) list_single_recal_day_pane_g6_ParamLimits

0xa610,	// (0x00066e27) list_single_recal_day_pane_g6

0x0004,

0xfbb0,	// (0x0006c3c7) list_single_recal_day_pane_g_ParamLimits

0xfbb0,	// (0x0006c3c7) list_single_recal_day_pane_g

0xa624,	// (0x00066e3b) list_single_recal_day_pane_t1

0xa636,	// (0x00066e4d) list_single_recal_day_pane_t2

0x0001,

0xfbbb,	// (0x0006c3d2) list_single_recal_day_pane_t

0x8cc6,	// (0x000654dd) ncimui_query_button_pane_ParamLimits

0x8cc6,	// (0x000654dd) ncimui_query_button_pane

0x8cd6,	// (0x000654ed) ncimui_query_button_pane_t1_ParamLimits

0x8cd6,	// (0x000654ed) ncimui_query_button_pane_t1

0xeb2a,	// (0x0006b341) ncimui_query_button_pane_t2_ParamLimits

0xeb2a,	// (0x0006b341) ncimui_query_button_pane_t2

0x0001,

0xfbc0,	// (0x0006c3d7) ncimui_query_button_pane_t_ParamLimits

0xfbc0,	// (0x0006c3d7) ncimui_query_button_pane_t

0x8ce9,	// (0x00065500) query_button_pane_ParamLimits

0x8ce9,	// (0x00065500) query_button_pane

0x97c1,	// (0x00065fd8) bg_button_pane_cp0028

0xeb3d,	// (0x0006b354) query_button_pane_t1

0x41ea,	// (0x00060a01) main_tport_pane_ParamLimits

0x87b4,	// (0x00064fcb) bg_popup_window_pane_cp01_ParamLimits

0x87b4,	// (0x00064fcb) bg_popup_window_pane_cp01

0x87c2,	// (0x00064fd9) heading_pane_cp08_ParamLimits

0x87c2,	// (0x00064fd9) heading_pane_cp08

0x87d0,	// (0x00064fe7) heading_pane_cp07_ParamLimits

0x87d0,	// (0x00064fe7) heading_pane_cp07

0x883f,	// (0x00065056) cell_tport_appsw_pane_g2

0x0002,

0xfb42,	// (0x0006c359) cell_tport_appsw_pane_g

0x9d1b,	// (0x00066532) input_candi_list_open_g1

0xad27,	// (0x0006753e) list_cale_time_pane_g6_ParamLimits

0xad27,	// (0x0006753e) list_cale_time_pane_g6

0x4c6a,	// (0x00061481) aid_size_touch_calib_1_ParamLimits

0x4c6a,	// (0x00061481) aid_size_touch_calib_1

0x4c76,	// (0x0006148d) aid_size_touch_calib_2_ParamLimits

0x4c76,	// (0x0006148d) aid_size_touch_calib_2

0x4c84,	// (0x0006149b) aid_size_touch_calib_3_ParamLimits

0x4c84,	// (0x0006149b) aid_size_touch_calib_3

0x4c94,	// (0x000614ab) aid_size_touch_calib_4_ParamLimits

0x4c94,	// (0x000614ab) aid_size_touch_calib_4

0x4ca2,	// (0x000614b9) main_touch_calib_button_group_pane_ParamLimits

0x4ca2,	// (0x000614b9) main_touch_calib_button_group_pane

0x4cb0,	// (0x000614c7) main_touch_calib_pane_g1_ParamLimits

0x4cbc,	// (0x000614d3) main_touch_calib_pane_g2_ParamLimits

0x4cc8,	// (0x000614df) main_touch_calib_pane_g3_ParamLimits

0x4cd4,	// (0x000614eb) main_touch_calib_pane_g4_ParamLimits

0xf614,	// (0x0006be2b) main_touch_calib_pane_g_ParamLimits

0x4ce0,	// (0x000614f7) main_touch_calib_pane_t1_ParamLimits

0x4cf9,	// (0x00061510) main_touch_calib_pane_t2_ParamLimits

0x4d12,	// (0x00061529) main_touch_calib_pane_t3_ParamLimits

0x4d28,	// (0x0006153f) main_touch_calib_pane_t4_ParamLimits

0x4d3e,	// (0x00061555) main_touch_calib_pane_t5_ParamLimits

0xf61d,	// (0x0006be34) main_touch_calib_pane_t_ParamLimits

0xcf0f,	// (0x00069726) list_single_fp_cale_pane_g3_ParamLimits

0xcf0f,	// (0x00069726) list_single_fp_cale_pane_g3

0x41ce,	// (0x000609e5) bg_button_pane_cp012_ParamLimits

0x41ce,	// (0x000609e5) bg_vkb2_func_pane_cp03_ParamLimits

0x6c5a,	// (0x00063471) cell_vitu2_function_top_pane_g1_ParamLimits

0x41ce,	// (0x000609e5) bg_vkb2_func_pane_cp04_ParamLimits

0x7bd2,	// (0x000643e9) main_ncimui_button_group_pane_ParamLimits

0x7bd2,	// (0x000643e9) main_ncimui_button_group_pane

0x7c38,	// (0x0006444f) main_ncimui_pane_t3_ParamLimits

0x7c38,	// (0x0006444f) main_ncimui_pane_t3

0xe86b,	// (0x0006b082) phacti_button_group_pane

0xeac6,	// (0x0006b2dd) aid_size_list_single_double_ParamLimits

0x8c1b,	// (0x00065432) popup_ezdial_listscroll_window_ParamLimits

0x8c3e,	// (0x00065455) popup_number_entry_window_cp01_ParamLimits

0x8cf6,	// (0x0006550d) phacti_button_pane_ParamLimits

0x8cf6,	// (0x0006550d) phacti_button_pane

0x97c1,	// (0x00065fd8) bg_button_pane_cp14

0xeb4b,	// (0x0006b362) phacti_button_pane_t1

0x8d07,	// (0x0006551e) main_touch_calib_button_pane_ParamLimits

0x8d07,	// (0x0006551e) main_touch_calib_button_pane

0xa735,	// (0x00066f4c) bg_button_pane_cp18_ParamLimits

0xa735,	// (0x00066f4c) bg_button_pane_cp18

0xeb59,	// (0x0006b370) main_touch_calib_button_pane_t1_ParamLimits

0xeb59,	// (0x0006b370) main_touch_calib_button_pane_t1

0xeb6f,	// (0x0006b386) main_touch_calib_button_pane_t2_ParamLimits

0xeb6f,	// (0x0006b386) main_touch_calib_button_pane_t2

0x0001,

0x0b0c,	// (0x0005d323) main_touch_calib_button_pane_t_ParamLimits

0x0b0c,	// (0x0005d323) main_touch_calib_button_pane_t

0x97c1,	// (0x00065fd8) cell_ncimui_button_pane

0x97c1,	// (0x00065fd8) bg_button_pane_cp032

0xeb8d,	// (0x0006b3a4) cell_ncimui_button_pane_t1

0x5e85,	// (0x0006269c) image3_infobar_pane_ParamLimits

0x5e85,	// (0x0006269c) image3_infobar_pane

0x7fb1,	// (0x000647c8) fs_bigclock_status_pane_ParamLimits

0x7fb1,	// (0x000647c8) fs_bigclock_status_pane

0x7fbe,	// (0x000647d5) main_fs_bigclock_clock_pane_ParamLimits

0x7fbe,	// (0x000647d5) main_fs_bigclock_clock_pane

0x7fd8,	// (0x000647ef) main_fs_bigclock_indi_pane_ParamLimits

0x7fd8,	// (0x000647ef) main_fs_bigclock_indi_pane

0x8000,	// (0x00064817) main_fs_bigclock_swipe_pane_ParamLimits

0x8000,	// (0x00064817) main_fs_bigclock_swipe_pane

0x97c1,	// (0x00065fd8) main_fs_clock_dumped_data

0xe3ac,	// (0x0006abc3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3ac,	// (0x0006abc3) list_single_fs_bigclock_indicator_pane_g1

0xe3c8,	// (0x0006abdf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3c8,	// (0x0006abdf) list_single_fs_bigclock_indicator_pane_g2

0xe3e2,	// (0x0006abf9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3e2,	// (0x0006abf9) list_single_fs_bigclock_indicator_pane_g3

0xe3fc,	// (0x0006ac13) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3fc,	// (0x0006ac13) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0934,	// (0x0005d14b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0934,	// (0x0005d14b) list_single_fs_bigclock_indicator_pane_g

0xe427,	// (0x0006ac3e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe427,	// (0x0006ac3e) list_single_fs_bigclock_indicator_pane_t1

0xe44f,	// (0x0006ac66) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe44f,	// (0x0006ac66) list_single_fs_bigclock_indicator_pane_t2

0xe477,	// (0x0006ac8e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe477,	// (0x0006ac8e) list_single_fs_bigclock_indicator_pane_t3

0xe49f,	// (0x0006acb6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe49f,	// (0x0006acb6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x093f,	// (0x0005d156) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x093f,	// (0x0005d156) list_single_fs_bigclock_indicator_pane_t

0xeb9b,	// (0x0006b3b2) image3_infobar_fav_pane_ParamLimits

0xeb9b,	// (0x0006b3b2) image3_infobar_fav_pane

0xebab,	// (0x0006b3c2) image3_infobar_loc_pane_ParamLimits

0xebab,	// (0x0006b3c2) image3_infobar_loc_pane

0xebbf,	// (0x0006b3d6) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x0006b3d6) image3_infobar_time_pane

0xcbaf,	// (0x000693c6) image3_infobar_time_pane_g1

0xebcf,	// (0x0006b3e6) image3_infobar_time_pane_t1

0xcbaf,	// (0x000693c6) image3_infobar_loc_pane_g1

0xebdd,	// (0x0006b3f4) image3_infobar_loc_pane_g2

0x0001,

0x0b11,	// (0x0005d328) image3_infobar_loc_pane_g

0xebe5,	// (0x0006b3fc) image3_infobar_loc_pane_t1

0xcbaf,	// (0x000693c6) image3_infobar_fav_pane_g1

0xebf3,	// (0x0006b40a) image3_infobar_fav_pane_g2

0x0001,

0x0b16,	// (0x0005d32d) image3_infobar_fav_pane_g

0xebfb,	// (0x0006b412) fs_bigclock_status_battery_pane

0xec04,	// (0x0006b41b) fs_bigclock_status_signal_pane

0xec0d,	// (0x0006b424) fs_bigclock_status_title_pane

0xec16,	// (0x0006b42d) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x0006b436) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b1b,	// (0x0005d332) fs_bigclock_status_signal_pane_g

0xec27,	// (0x0006b43e) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x0006b447) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b20,	// (0x0005d337) fs_bigclock_status_battery_pane_g

0xec38,	// (0x0006b44f) fs_bigclock_status_title_pane_t1

0xcbaf,	// (0x000693c6) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x0006b45d) main_fs_bigclock_clock_pane_g2

0xec4f,	// (0x0006b466) main_fs_bigclock_clock_pane_g3

0xec4f,	// (0x0006b466) main_fs_bigclock_clock_pane_g4

0x0003,

0x0b25,	// (0x0005d33c) main_fs_bigclock_clock_pane_g

0xec57,	// (0x0006b46e) main_fs_bigclock_clock_pane_t1

0x8d17,	// (0x0006552e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbc5,	// (0x0006c3dc) main_fs_bigclock_clock_pane_t

0xec65,	// (0x0006b47c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec65,	// (0x0006b47c) list_single_fs_bigclock_indicator_pane

0xec76,	// (0x0006b48d) list_single_fs_bigclock_pane_ParamLimits

0xec76,	// (0x0006b48d) list_single_fs_bigclock_pane

0xec9c,	// (0x0006b4b3) main_fs_bigclock_indicator_pane_t1

0xecab,	// (0x0006b4c2) list_single_fs_bigclock_pane_g1

0xecb3,	// (0x0006b4ca) list_single_fs_bigclock_pane_t1

0xcbaf,	// (0x000693c6) main_fs_bigclock_swipe_pane_g1

0xecf6,	// (0x0006b50d) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0b3f,	// (0x0005d356) main_fs_bigclock_swipe_pane_g

0xecfe,	// (0x0006b515) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfe,	// (0x0006b515) main_fs_bigclock_swipe_pane_t1

0x322d,	// (0x0005fa44) call_type_pane_ParamLimits

0x97c1,	// (0x00065fd8) main_btmg_pane

0xa354,	// (0x00066b6b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa354,	// (0x00066b6b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb7e,	// (0x0006c395) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb7e,	// (0x0006c395) list_single_cale_mrui_row_pane_g

0xa5c1,	// (0x00066dd8) list_recal_vselct_arw_lo_pane

0xeb16,	// (0x0006b32d) list_recal_vselct_arw_up_pane

0xa5c9,	// (0x00066de0) list_recal_vselct_pane

0x8d68,	// (0x0006557f) btmg_button_pane

0x8d74,	// (0x0006558b) main_btmg_pane_g1

0x97c1,	// (0x00065fd8) bg_button_pane_cp044

0xed1b,	// (0x0006b532) btmg_button_pane_t1

0xc791,	// (0x00068fa8) aid_listscroll_gen

0xa5b3,	// (0x00066dca) main_cntbar_detail_pane

0xe7ae,	// (0x0006afc5) list_cmail_folder_pane

0xd1d9,	// (0x000699f0) sp_fs_scroll_pane_cp03_ParamLimits

0x8d7c,	// (0x00065593) list_single_fs_dyc_pane_cp01_ParamLimits

0x8d7c,	// (0x00065593) list_single_fs_dyc_pane_cp01

0xed29,	// (0x0006b540) aid_size_cmail_indent

0xa648,	// (0x00066e5f) list_single_dyc_row_pane_cp01

0x8dd3,	// (0x000655ea) cntbar_detail_list_pane_ParamLimits

0x8dd3,	// (0x000655ea) cntbar_detail_list_pane

0x8e0d,	// (0x00065624) main_cntbar_detail_cont_pane_ParamLimits

0x8e0d,	// (0x00065624) main_cntbar_detail_cont_pane

0x3197,	// (0x0005f9ae) scroll_pane_cp032_ParamLimits

0x3197,	// (0x0005f9ae) scroll_pane_cp032

0x8e19,	// (0x00065630) cntbar_detail_list_event_pane_ParamLimits

0x8e19,	// (0x00065630) cntbar_detail_list_event_pane

0x8ddf,	// (0x000655f6) cntbar_detail_list_shct_pane

0xabaa,	// (0x000673c1) aid_list_gen

0xed32,	// (0x0006b549) aid_scroll

0xed3b,	// (0x0006b552) aid_size_touch_scroll_bar

0x739d,	// (0x00063bb4) aid_list_double

0x8e2d,	// (0x00065644) aid_list_single

0xde51,	// (0x0006a668) aid_list_single_lg

0x8e36,	// (0x0006564d) aid_list_z_g_a_sm

0x8e3e,	// (0x00065655) aid_list_z_g_d

0x8e46,	// (0x0006565d) aid_txt_z_prm

0x8e54,	// (0x0006566b) aid_txt_z_prm_cp01

0x8e62,	// (0x00065679) aid_txt_z_sec

0x8e70,	// (0x00065687) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e70,	// (0x00065687) main_cntbar_detail_cont_pane_g1

0x8e7d,	// (0x00065694) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e7d,	// (0x00065694) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbd1,	// (0x0006c3e8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbd1,	// (0x0006c3e8) main_cntbar_detail_cont_pane_g

0xed44,	// (0x0006b55b) main_cntbar_detail_cont_pane_t1

0xed52,	// (0x0006b569) main_cntbar_detail_cont_pane_t2

0xed60,	// (0x0006b577) main_cntbar_detail_cont_pane_t3

0x0002,

0x0b49,	// (0x0005d360) main_cntbar_detail_cont_pane_t

0x8e89,	// (0x000656a0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e89,	// (0x000656a0) cell_cntbar_detail_list_shct_pane

0xed6e,	// (0x0006b585) cntbar_detail_list_shct_pane_g1

0xed77,	// (0x0006b58e) cntbar_detail_list_shct_pane_g2

0x0001,

0x0b50,	// (0x0005d367) cntbar_detail_list_shct_pane_g

0x8e9d,	// (0x000656b4) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e9d,	// (0x000656b4) cntbar_detail_list_event_pane_g1

0x8ea9,	// (0x000656c0) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ea9,	// (0x000656c0) cntbar_detail_list_event_pane_g2

0x0005,

0xfbd6,	// (0x0006c3ed) cntbar_detail_list_event_pane_g_ParamLimits

0xfbd6,	// (0x0006c3ed) cntbar_detail_list_event_pane_g

0x8f15,	// (0x0006572c) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f15,	// (0x0006572c) cntbar_detail_list_event_pane_t1

0x8f2a,	// (0x00065741) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f2a,	// (0x00065741) cntbar_detail_list_event_pane_t2

0x0002,

0xfbe3,	// (0x0006c3fa) cntbar_detail_list_event_pane_t_ParamLimits

0xfbe3,	// (0x0006c3fa) cntbar_detail_list_event_pane_t

0xcbaf,	// (0x000693c6) cell_cntbar_detail_list_shct_pane_g1

0xb35a,	// (0x00067b71) navi_pane_mv_g3

0xa5b3,	// (0x00066dca) main_cntbar_detail_pane_ParamLimits

0x97c1,	// (0x00065fd8) main_notif_wgt_pane

0x5b39,	// (0x00062350) aid_tch_main_mp4_pane_g4

0x5d6e,	// (0x00062585) popup_slider_window_cp02

0xa3d0,	// (0x00066be7) list_recal_day_event_pane

0x8db3,	// (0x000655ca) cntbar_detail_btn_pane_ParamLimits

0x8db3,	// (0x000655ca) cntbar_detail_btn_pane

0x8dc3,	// (0x000655da) cntbar_detail_btn_pane_cp01_ParamLimits

0x8dc3,	// (0x000655da) cntbar_detail_btn_pane_cp01

0x8ddf,	// (0x000655f6) cntbar_detail_list_shct_pane_ParamLimits

0x8deb,	// (0x00065602) cntbar_detail_pane_g1_ParamLimits

0x8deb,	// (0x00065602) cntbar_detail_pane_g1

0x8df7,	// (0x0006560e) cntbar_detail_pane_t1_ParamLimits

0x8df7,	// (0x0006560e) cntbar_detail_pane_t1

0x8eb5,	// (0x000656cc) cntbar_detail_list_event_pane_g3_ParamLimits

0x8eb5,	// (0x000656cc) cntbar_detail_list_event_pane_g3

0x8ecd,	// (0x000656e4) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ecd,	// (0x000656e4) cntbar_detail_list_event_pane_g4

0x8ee5,	// (0x000656fc) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ee5,	// (0x000656fc) cntbar_detail_list_event_pane_g5

0x8efd,	// (0x00065714) cntbar_detail_list_event_pane_g6_ParamLimits

0x8efd,	// (0x00065714) cntbar_detail_list_event_pane_g6

0x8f3f,	// (0x00065756) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f3f,	// (0x00065756) cntbar_detail_list_event_pane_t3

0x8f51,	// (0x00065768) popup_notif_wgt_window_ParamLimits

0x8f51,	// (0x00065768) popup_notif_wgt_window

0x8f61,	// (0x00065778) popup_submenu_window_cp01_ParamLimits

0x8f61,	// (0x00065778) popup_submenu_window_cp01

0xa903,	// (0x0006711a) bg_popup_window_pane_cp10

0xed80,	// (0x0006b597) listscroll_notif_wgt_pane

0xed91,	// (0x0006b5a8) list_notif_wgt_window

0xed9a,	// (0x0006b5b1) scroll_pane_cp033

0x8f6f,	// (0x00065786) list_notif_wgt_row_pane_ParamLimits

0x8f6f,	// (0x00065786) list_notif_wgt_row_pane

0xeda3,	// (0x0006b5ba) aid_size_list_notif_wgt_del

0xedb0,	// (0x0006b5c7) list_notif_wgt_row_pane_g1

0xedbc,	// (0x0006b5d3) list_notif_wgt_row_pane_g2

0xedd0,	// (0x0006b5e7) list_notif_wgt_row_pane_g3

0x0002,

0x0b69,	// (0x0005d380) list_notif_wgt_row_pane_g

0xeddd,	// (0x0006b5f4) list_notif_wgt_row_pane_t1

0xedf3,	// (0x0006b60a) list_notif_wgt_row_pane_t2

0xee05,	// (0x0006b61c) list_notif_wgt_row_pane_t3

0x0002,

0x0b70,	// (0x0005d387) list_notif_wgt_row_pane_t

0xd85c,	// (0x0006a073) list_recal_day_event_pane_g1

0xee17,	// (0x0006b62e) list_recal_day_event_pane_t1

0x97c1,	// (0x00065fd8) bg_button_pane_cp045

0xee26,	// (0x0006b63d) cntbar_detail_btn_pane_t1

0xc7a5,	// (0x00068fbc) main_callh_pane_ParamLimits

0xc7a5,	// (0x00068fbc) main_callh_pane

0x97c1,	// (0x00065fd8) main_coverflow0_pane

0x97c1,	// (0x00065fd8) main_wgtman_pane

0x8018,	// (0x0006482f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8018,	// (0x0006482f) main_fs_bigclock_unlock_btn_pane

0x8837,	// (0x0006504e) bg_button_pane_cp16

0x8847,	// (0x0006505e) cell_tport_appsw_pane_g3

0x8f81,	// (0x00065798) cf0_flow_pane_ParamLimits

0x8f81,	// (0x00065798) cf0_flow_pane

0xee34,	// (0x0006b64b) listscroll_cf0_pane

0xee3f,	// (0x0006b656) main_cf0_pane_g1

0x8f90,	// (0x000657a7) main_cf0_pane_t1_ParamLimits

0x8f90,	// (0x000657a7) main_cf0_pane_t1

0x8fa4,	// (0x000657bb) main_cf0_pane_t2_ParamLimits

0x8fa4,	// (0x000657bb) main_cf0_pane_t2

0x0001,

0xfbea,	// (0x0006c401) main_cf0_pane_t_ParamLimits

0xfbea,	// (0x0006c401) main_cf0_pane_t

0xee51,	// (0x0006b668) scroll_pane_cp11

0x8fb8,	// (0x000657cf) cf0_flow_pane_g1

0x8fc0,	// (0x000657d7) cf0_flow_pane_g2

0x0001,

0xfbef,	// (0x0006c406) cf0_flow_pane_g

0x8fc8,	// (0x000657df) cf0_flow_pane_t1

0x97c1,	// (0x00065fd8) main_call6_pane

0x97c1,	// (0x00065fd8) main_calllock_pane

0x8fd6,	// (0x000657ed) call6_btn_grp_pane_ParamLimits

0x8fd6,	// (0x000657ed) call6_btn_grp_pane

0x8fe5,	// (0x000657fc) call6_pane_g1_ParamLimits

0x8fe5,	// (0x000657fc) call6_pane_g1

0x8ff4,	// (0x0006580b) popup_call6_1st_window_ParamLimits

0x8ff4,	// (0x0006580b) popup_call6_1st_window

0x9002,	// (0x00065819) popup_call6_2nd_window_ParamLimits

0x9002,	// (0x00065819) popup_call6_2nd_window

0x9010,	// (0x00065827) cell_call6_btn_pane_ParamLimits

0x9010,	// (0x00065827) cell_call6_btn_pane

0xa903,	// (0x0006711a) bg_popup_call2_in_pane_cp03

0xee5c,	// (0x0006b673) popup_call6_1st_window_g1

0xee64,	// (0x0006b67b) popup_call6_1st_window_g2

0xee6c,	// (0x0006b683) popup_call6_1st_window_g3

0x0002,

0x0b86,	// (0x0005d39d) popup_call6_1st_window_g

0xee74,	// (0x0006b68b) popup_call6_1st_window_t1

0xee83,	// (0x0006b69a) popup_call6_1st_window_t2

0xee93,	// (0x0006b6aa) popup_call6_1st_window_t3

0x0002,

0x0b8d,	// (0x0005d3a4) popup_call6_1st_window_t

0xa903,	// (0x0006711a) bg_popup_call2_in_pane_cp04

0xee5c,	// (0x0006b673) popup_call6_2nd_window_g1

0xee64,	// (0x0006b67b) popup_call6_2nd_window_g2

0xee6c,	// (0x0006b683) popup_call6_2nd_window_g3

0x0002,

0x0b86,	// (0x0005d39d) popup_call6_2nd_window_g

0xee74,	// (0x0006b68b) popup_call6_2nd_window_t1

0x97c1,	// (0x00065fd8) bg_button_pane_cp15

0xeea3,	// (0x0006b6ba) cell_call6_btn_pane_g1

0xeeac,	// (0x0006b6c3) cell_call6_btn_pane_t1

0x901f,	// (0x00065836) listscroll_wgtman_pane_ParamLimits

0x901f,	// (0x00065836) listscroll_wgtman_pane

0x903b,	// (0x00065852) wgtman_btn_pane_ParamLimits

0x903b,	// (0x00065852) wgtman_btn_pane

0xb13e,	// (0x00067955) aid_scroll_copy1

0xeebb,	// (0x0006b6d2) list_wgtman_pane

0x9070,	// (0x00065887) wgtman_btn_pane_g1_ParamLimits

0x9070,	// (0x00065887) wgtman_btn_pane_g1

0x9098,	// (0x000658af) wgtman_btn_pane_t1_ParamLimits

0x9098,	// (0x000658af) wgtman_btn_pane_t1

0xeec5,	// (0x0006b6dc) wgtman_btn_pane_t2_ParamLimits

0xeec5,	// (0x0006b6dc) wgtman_btn_pane_t2

0x0001,

0xfbf4,	// (0x0006c40b) wgtman_btn_pane_t_ParamLimits

0xfbf4,	// (0x0006c40b) wgtman_btn_pane_t

0x90cf,	// (0x000658e6) listrow_wgtman_pane_ParamLimits

0x90cf,	// (0x000658e6) listrow_wgtman_pane

0x90eb,	// (0x00065902) listrow_wgtman_pane_g1

0x90f8,	// (0x0006590f) listrow_wgtman_pane_g2

0x0001,

0xfbf9,	// (0x0006c410) listrow_wgtman_pane_g

0x9116,	// (0x0006592d) listrow_wgtman_pane_t1

0x912e,	// (0x00065945) listrow_wgtman_pane_t2

0x0001,

0xfbfe,	// (0x0006c415) listrow_wgtman_pane_t

0x9154,	// (0x0006596b) wait_bar_pane_cp09

0xeedc,	// (0x0006b6f3) main_calllock_btn_pane

0xeee6,	// (0x0006b6fd) main_calllock_pane_g1

0x97c1,	// (0x00065fd8) bg_button_pane_cp17

0xeef1,	// (0x0006b708) main_calllock_btn_pane_g1

0xeefa,	// (0x0006b711) main_calllock_btn_pane_t1

0x97c1,	// (0x00065fd8) main_dialer3_pane

0x97c1,	// (0x00065fd8) main_fmrd2_pane

0xcbaf,	// (0x000693c6) main_fs_bigclock_unlock_btn_pane_g1

0xef11,	// (0x0006b728) main_fs_bigclock_unlock_btn_pane_t1

0x9166,	// (0x0006597d) area_fmrd2_info_pane_ParamLimits

0x9166,	// (0x0006597d) area_fmrd2_info_pane

0x9174,	// (0x0006598b) area_fmrd2_visual_pane_ParamLimits

0x9174,	// (0x0006598b) area_fmrd2_visual_pane

0x9182,	// (0x00065999) fmrd2_indi_pane_ParamLimits

0x9182,	// (0x00065999) fmrd2_indi_pane

0x918f,	// (0x000659a6) area_fmrd2_visual_pane_g1

0x9197,	// (0x000659ae) area_fmrd2_visual_pane_t1

0x91a7,	// (0x000659be) area_fmrd2_visual_pane_t2

0x91b7,	// (0x000659ce) area_fmrd2_visual_pane_t3

0x0002,

0xfc03,	// (0x0006c41a) area_fmrd2_visual_pane_t

0x91c7,	// (0x000659de) area_fmrd2_info_pane_g1

0x91cf,	// (0x000659e6) area_fmrd2_info_pane_t1

0x91df,	// (0x000659f6) area_fmrd2_info_pane_t2

0x91ef,	// (0x00065a06) area_fmrd2_info_pane_t3

0x91ff,	// (0x00065a16) area_fmrd2_info_pane_t4

0x0003,

0xfc0a,	// (0x0006c421) area_fmrd2_info_pane_t

0x920d,	// (0x00065a24) fmrd2_indi_pane_t1

0x921d,	// (0x00065a34) fmrd2_indi_pane_t2

0x922d,	// (0x00065a44) fmrd2_indi_pane_t3

0x0002,

0xfc13,	// (0x0006c42a) fmrd2_indi_pane_t

0xe40b,	// (0x0006ac22) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe40b,	// (0x0006ac22) list_single_fs_bigclock_indicator_pane_g5

0xe4bb,	// (0x0006acd2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4bb,	// (0x0006acd2) list_single_fs_bigclock_indicator_pane_t5

0x89f1,	// (0x00065208) aid_cell_bcale_month_pane_ParamLimits

0x89f1,	// (0x00065208) aid_cell_bcale_month_pane

0x8a0f,	// (0x00065226) bcale_month_pane_ParamLimits

0x8a0f,	// (0x00065226) bcale_month_pane

0x8a2d,	// (0x00065244) bcale_preview_pane_ParamLimits

0x8a2d,	// (0x00065244) bcale_preview_pane

0xecb3,	// (0x0006b4ca) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd2,	// (0x0006b4e9) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd2,	// (0x0006b4e9) list_single_fs_bigclock_pane_t2

0x0001,

0x0b3a,	// (0x0005d351) list_single_fs_bigclock_pane_t_ParamLimits

0x0b3a,	// (0x0005d351) list_single_fs_bigclock_pane_t

0xef09,	// (0x0006b720) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x0ba3,	// (0x0005d3ba) main_fs_bigclock_unlock_btn_pane_g

0x923b,	// (0x00065a52) aid_dia3_key_size_ParamLimits

0x923b,	// (0x00065a52) aid_dia3_key_size

0x9247,	// (0x00065a5e) aid_dia3_listrow_size_ParamLimits

0x9247,	// (0x00065a5e) aid_dia3_listrow_size

0x9257,	// (0x00065a6e) dia3_keypad_fun_pane_ParamLimits

0x9257,	// (0x00065a6e) dia3_keypad_fun_pane

0x9269,	// (0x00065a80) dia3_keypad_num_pane_ParamLimits

0x9269,	// (0x00065a80) dia3_keypad_num_pane

0x927b,	// (0x00065a92) dia3_listscroll_pane_ParamLimits

0x927b,	// (0x00065a92) dia3_listscroll_pane

0x9289,	// (0x00065aa0) dia3_numentry_pane_ParamLimits

0x9289,	// (0x00065aa0) dia3_numentry_pane

0xef1f,	// (0x0006b736) dia3_list_pane

0xef2a,	// (0x0006b741) scroll_pane_cp12

0x97c1,	// (0x00065fd8) bg_dia3_numentry_pane

0x9297,	// (0x00065aae) dia3_numentry_pane_t1

0x92a6,	// (0x00065abd) cell_dia3_key_num_pane

0x92ae,	// (0x00065ac5) cell_dia3_key0_fun_pane_ParamLimits

0x92ae,	// (0x00065ac5) cell_dia3_key0_fun_pane

0x92bb,	// (0x00065ad2) cell_dia3_key1_fun_pane_ParamLimits

0x92bb,	// (0x00065ad2) cell_dia3_key1_fun_pane

0x92c8,	// (0x00065adf) dia3_listrow_pane

0xe119,	// (0x0006a930) bg_dia3_numentry_pane_g1

0x97c1,	// (0x00065fd8) bg_button_pane_cp21

0xef35,	// (0x0006b74c) cell_dia3_key_num_pane_t1

0xef43,	// (0x0006b75a) cell_dia3_key_num_pane_t2

0xef52,	// (0x0006b769) cell_dia3_key_num_pane_t3

0xef61,	// (0x0006b778) cell_dia3_key_num_pane_t4

0x0003,

0x0bbf,	// (0x0005d3d6) cell_dia3_key_num_pane_t

0x97c1,	// (0x00065fd8) bg_button_pane_cp19

0x92d5,	// (0x00065aec) cell_dia3_key0_fun_pane_g1

0x97c1,	// (0x00065fd8) bg_button_pane_cp20

0x92dd,	// (0x00065af4) cell_dia3_key1_fun_pane_g1

0x92e5,	// (0x00065afc) area_left_week_number_pane

0x92f8,	// (0x00065b0f) area_top_day_name_pane

0x9306,	// (0x00065b1d) frame_month_view_pane

0xef70,	// (0x0006b787) grid_month_view_pane

0x931b,	// (0x00065b32) cell_top_day_name_pane_ParamLimits

0x931b,	// (0x00065b32) cell_top_day_name_pane

0x9335,	// (0x00065b4c) cell_area_left_week_number_pane_ParamLimits

0x9335,	// (0x00065b4c) cell_area_left_week_number_pane

0x9358,	// (0x00065b6f) cell_month_view_pane_ParamLimits

0x9358,	// (0x00065b6f) cell_month_view_pane

0xef7e,	// (0x0006b795) frm_month_g1

0x9384,	// (0x00065b9b) frm_month_g2

0x9395,	// (0x00065bac) frm_month_g3

0x93a6,	// (0x00065bbd) frm_month_g4

0x93b7,	// (0x00065bce) frm_month_g5

0x93ca,	// (0x00065be1) frm_month_g6

0x93dd,	// (0x00065bf4) frm_month_g7

0xef8b,	// (0x0006b7a2) frm_month_g8

0x93f0,	// (0x00065c07) frm_month_g9

0x93fd,	// (0x00065c14) frm_month_g10

0x940a,	// (0x00065c21) frm_month_g11

0x9417,	// (0x00065c2e) frm_month_g12

0x9424,	// (0x00065c3b) frm_month_g13

0x9431,	// (0x00065c48) frm_month_g14

0x9440,	// (0x00065c57) frm_month_g15

0x944f,	// (0x00065c66) frm_month_g16

0x000f,

0xfc1a,	// (0x0006c431) frm_month_g

0xef98,	// (0x0006b7af) cell_top_day_name_pane_t1

0x945e,	// (0x00065c75) cell_area_left_week_number_pane_g1

0x946d,	// (0x00065c84) cell_area_left_week_number_pane_t1

0xce0f,	// (0x00069626) cell_month_view_pane_g1

0x9483,	// (0x00065c9a) cell_month_view_pane_t1

0x97c1,	// (0x00065fd8) main_fps_pane

0xe6c6,	// (0x0006aedd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6c6,	// (0x0006aedd) cmail_ddmenu_btn02_pane_cp1

0xe6e2,	// (0x0006aef9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6e2,	// (0x0006aef9) cmail_ddmenu_btn02_pane_cp2

0x8c76,	// (0x0006548d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c76,	// (0x0006548d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfba6,	// (0x0006c3bd) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfba6,	// (0x0006c3bd) cmail_ddmenu_btn02_pane_g

0x8c94,	// (0x000654ab) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c94,	// (0x000654ab) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfbab,	// (0x0006c3c2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfbab,	// (0x0006c3c2) cmail_ddmenu_btn02_pane_t

0x9499,	// (0x00065cb0) fps_text_pane_ParamLimits

0x9499,	// (0x00065cb0) fps_text_pane

0x94a6,	// (0x00065cbd) main_fps_pane_g1_ParamLimits

0x94a6,	// (0x00065cbd) main_fps_pane_g1

0x94b4,	// (0x00065ccb) wait_bar_pane_cp010_ParamLimits

0x94b4,	// (0x00065ccb) wait_bar_pane_cp010

0x94c0,	// (0x00065cd7) fps_text_pane_t1_ParamLimits

0x94c0,	// (0x00065cd7) fps_text_pane_t1

0x615e,	// (0x00062975) cam4_image_uncrop_pane_g1

0x6167,	// (0x0006297e) cam4_image_uncrop_pane_g2

0x6170,	// (0x00062987) cam4_image_uncrop_pane_g3

0x6179,	// (0x00062990) cam4_image_uncrop_pane_g4

0x0003,

0xf764,	// (0x0006bf7b) cam4_image_uncrop_pane_g

0x92c8,	// (0x00065adf) dia3_listrow_pane_ParamLimits

0x97c1,	// (0x00065fd8) main_phob2_pane

0x8819,	// (0x00065030) cell_tport_appsw_pane_cp02_ParamLimits

0x8819,	// (0x00065030) cell_tport_appsw_pane_cp02

0x8828,	// (0x0006503f) cell_tport_appsw_pane_cp03_ParamLimits

0x8828,	// (0x0006503f) cell_tport_appsw_pane_cp03

0x97c1,	// (0x00065fd8) phob2_contact_card_pane

0x97c1,	// (0x00065fd8) phob2_listscroll_pane

0xefab,	// (0x0006b7c2) phob2_list_pane

0xefb3,	// (0x0006b7ca) scroll_pane_cp034

0x94d9,	// (0x00065cf0) phob2_cc_data_pane_ParamLimits

0x94d9,	// (0x00065cf0) phob2_cc_data_pane

0x94f3,	// (0x00065d0a) phob2_cc_listscroll_pane_ParamLimits

0x94f3,	// (0x00065d0a) phob2_cc_listscroll_pane

0x950d,	// (0x00065d24) list_double_large_graphic_phob2_pane_ParamLimits

0x950d,	// (0x00065d24) list_double_large_graphic_phob2_pane

0x952f,	// (0x00065d46) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x952f,	// (0x00065d46) list_double_large_graphic_phob2_pane_g1

0x9545,	// (0x00065d5c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9545,	// (0x00065d5c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc3b,	// (0x0006c452) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc3b,	// (0x0006c452) list_double_large_graphic_phob2_pane_g

0x9551,	// (0x00065d68) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9551,	// (0x00065d68) list_double_large_graphic_phob2_pane_t1

0x9567,	// (0x00065d7e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9567,	// (0x00065d7e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc40,	// (0x0006c457) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc40,	// (0x0006c457) list_double_large_graphic_phob2_pane_t

0x97c1,	// (0x00065fd8) list_highlight_pane_cp024

0x957c,	// (0x00065d93) phob2_cc_button_pane

0x9584,	// (0x00065d9b) phob2_cc_data_pane_g1_ParamLimits

0x9584,	// (0x00065d9b) phob2_cc_data_pane_g1

0x9590,	// (0x00065da7) phob2_cc_data_pane_g2_ParamLimits

0x9590,	// (0x00065da7) phob2_cc_data_pane_g2

0x0001,

0xfc45,	// (0x0006c45c) phob2_cc_data_pane_g_ParamLimits

0xfc45,	// (0x0006c45c) phob2_cc_data_pane_g

0x959c,	// (0x00065db3) phob2_cc_data_pane_t1_ParamLimits

0x959c,	// (0x00065db3) phob2_cc_data_pane_t1

0x95ae,	// (0x00065dc5) phob2_cc_data_pane_t2_ParamLimits

0x95ae,	// (0x00065dc5) phob2_cc_data_pane_t2

0x95c0,	// (0x00065dd7) phob2_cc_data_pane_t3_ParamLimits

0x95c0,	// (0x00065dd7) phob2_cc_data_pane_t3

0x0002,

0xfc4a,	// (0x0006c461) phob2_cc_data_pane_t_ParamLimits

0xfc4a,	// (0x0006c461) phob2_cc_data_pane_t

0xefbb,	// (0x0006b7d2) phob2_cc_list_pane_ParamLimits

0xefbb,	// (0x0006b7d2) phob2_cc_list_pane

0xd94e,	// (0x0006a165) scroll_pane_cp035_ParamLimits

0xd94e,	// (0x0006a165) scroll_pane_cp035

0xa5b3,	// (0x00066dca) bg_button_pane_cp033

0xefc7,	// (0x0006b7de) phob2_cc_button_pane_g1

0xefd3,	// (0x0006b7ea) phob2_cc_button_pane_t1

0xefe8,	// (0x0006b7ff) phob2_cc_button_pane_t2

0x0001,

0xfc51,	// (0x0006c468) phob2_cc_button_pane_t

0x95d2,	// (0x00065de9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x95d2,	// (0x00065de9) list_double_large_graphic_phob2_cc_pane

0x9601,	// (0x00065e18) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9601,	// (0x00065e18) list_double_large_graphic_phob2_cc_pane_g1

0x9612,	// (0x00065e29) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9612,	// (0x00065e29) list_double_large_graphic_phob2_cc_pane_g2

0x9621,	// (0x00065e38) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9621,	// (0x00065e38) list_double_large_graphic_phob2_cc_pane_g3

0x9630,	// (0x00065e47) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9630,	// (0x00065e47) list_double_large_graphic_phob2_cc_pane_g4

0x9641,	// (0x00065e58) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9641,	// (0x00065e58) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc56,	// (0x0006c46d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc56,	// (0x0006c46d) list_double_large_graphic_phob2_cc_pane_g

0x9650,	// (0x00065e67) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9650,	// (0x00065e67) list_double_large_graphic_phob2_cc_pane_t1

0x9679,	// (0x00065e90) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9679,	// (0x00065e90) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc61,	// (0x0006c478) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc61,	// (0x0006c478) list_double_large_graphic_phob2_cc_pane_t

0xeffa,	// (0x0006b811) list_highlight_pane_cp025_ParamLimits

0xeffa,	// (0x0006b811) list_highlight_pane_cp025

0xa5b3,	// (0x00066dca) bg_button_pane_cp033_ParamLimits

0xefc7,	// (0x0006b7de) phob2_cc_button_pane_g1_ParamLimits

0xefd3,	// (0x0006b7ea) phob2_cc_button_pane_t1_ParamLimits

0xefe8,	// (0x0006b7ff) phob2_cc_button_pane_t2_ParamLimits

0xfc51,	// (0x0006c468) phob2_cc_button_pane_t_ParamLimits

0x0fd1,	// (0x0005d7e8) popup_wgtman_window

0xd738,	// (0x00069f4f) scroll_pane_cp038

0x9058,	// (0x0006586f) wgtman_btn_pane_cp_01_ParamLimits

0x9058,	// (0x0006586f) wgtman_btn_pane_cp_01

0xf008,	// (0x0006b81f) wgtman_content_pane

0xf011,	// (0x0006b828) wgtman_heading_pane

0x97c1,	// (0x00065fd8) bg_heading_pane_cp02

0xf01a,	// (0x0006b831) wgtman_heading_pane_g1

0xf022,	// (0x0006b839) wgtman_heading_pane_t1

0xf030,	// (0x0006b847) scroll_pane_cp036

0xf038,	// (0x0006b84f) wgtman_list_pane

0xe5a6,	// (0x0006adbd) wgtman_list_pane_t1_ParamLimits

0xe5a6,	// (0x0006adbd) wgtman_list_pane_t1

0x60bd,	// (0x000628d4) cam4_grid_pane

0x6e47,	// (0x0006365e) bg_button_pane_cp015_ParamLimits

0x6e59,	// (0x00063670) bg_button_pane_cp016_ParamLimits

0x6e6c,	// (0x00063683) bg_button_pane_cp017_ParamLimits

0x6ec2,	// (0x000636d9) popup_vitu2_query_window_g3_ParamLimits

0x6ec2,	// (0x000636d9) popup_vitu2_query_window_g3

0x6f7d,	// (0x00063794) popup_vitu2_query_window_t6_ParamLimits

0x6f7d,	// (0x00063794) popup_vitu2_query_window_t6

0x6fa8,	// (0x000637bf) popup_vitu2_query_window_t7_ParamLimits

0x6fa8,	// (0x000637bf) popup_vitu2_query_window_t7

0xde48,	// (0x0006a65f) cam4_grid_pane_g1

0xe0c1,	// (0x0006a8d8) cam4_grid_pane_g2

0xf040,	// (0x0006b857) cam4_grid_pane_g3

0xf049,	// (0x0006b860) cam4_grid_pane_g4

0x0003,

0xfc66,	// (0x0006c47d) cam4_grid_pane_g

0x1e9c,	// (0x0005e6b3) aid_placing_vt_slider_lsc_ParamLimits

0x21dc,	// (0x0005e9f3) vidtel_button_pane_ParamLimits

0x21dc,	// (0x0005e9f3) vidtel_button_pane

0xf054,	// (0x0006b86b) bg_button_pane_cp034

0x96a2,	// (0x00065eb9) vidtel_button_pane_g1

0xf05e,	// (0x0006b875) vidtel_button_pane_t1

0xd83a,	// (0x0006a051) aid_size_vtel_slider_touch

0xd94e,	// (0x0006a165) scroll_pane_cp039

0xe157,	// (0x0006a96e) ncim_query_button_pane_cp01_ParamLimits

0xe176,	// (0x0006a98d) ncimui_query_pane_g1_ParamLimits

0xa5b3,	// (0x00066dca) input_focus_pane_cp012_ParamLimits

0xe19b,	// (0x0006a9b2) ncim_query_entry_pane_t1_ParamLimits

0xd94e,	// (0x0006a165) scroll_pane_cp039_ParamLimits

0xb224,	// (0x00067a3b) navi_pane_bcale_mc_g1

0xb22c,	// (0x00067a43) navi_pane_bcale_mc_t1

0xe72b,	// (0x0006af42) main_sp_fs_email_pane_g1

0xe737,	// (0x0006af4e) main_sp_fs_email_pane_g2

0x0001,

0x09a5,	// (0x0005d1bc) main_sp_fs_email_pane_g

0xe988,	// (0x0006b19f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe988,	// (0x0006b19f) list_single_cale_mrui_row_pane_g3

0x8cbc,	// (0x000654d3) list_single_recal_day_pane_g5_event_pane

0xa61c,	// (0x00066e33) list_single_recal_day_pane_g7

0xf06c,	// (0x0006b883) list_recal_day_event_pane_cp01

0xf075,	// (0x0006b88c) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0006b894) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0006b89c) list_recal_vselct_pane_cp01

0xd85c,	// (0x0006a073) list_recal_day_event_pane_cp01_g1

0xa651,	// (0x00066e68) list_recal_day_event_pane_cp01_t1

0xa624,	// (0x00066e3b) list_single_recal_day_pane_t1_ParamLimits

0xa636,	// (0x00066e4d) list_single_recal_day_pane_t2_ParamLimits

0xfbbb,	// (0x0006c3d2) list_single_recal_day_pane_t_ParamLimits

0xa5a5,	// (0x00066dbc) bg_notes_pane_ParamLimits

0xa713,	// (0x00066f2a) list_notes_pane_ParamLimits

0x1326,	// (0x0005db3d) scroll_pane_cp06_ParamLimits

0xa735,	// (0x00066f4c) main_notes_pane_ParamLimits

0x97c1,	// (0x00065fd8) main_welc_pane

0x96aa,	// (0x00065ec1) main_welc_body_pane_ParamLimits

0x96aa,	// (0x00065ec1) main_welc_body_pane

0x96c3,	// (0x00065eda) main_welc_opti_pane_ParamLimits

0x96c3,	// (0x00065eda) main_welc_opti_pane

0x96f8,	// (0x00065f0f) main_welc_pane_t1_ParamLimits

0x96f8,	// (0x00065f0f) main_welc_pane_t1

0x9716,	// (0x00065f2d) main_welc_body_row_pane_ParamLimits

0x9716,	// (0x00065f2d) main_welc_body_row_pane

0xdbd6,	// (0x0006a3ed) main_welc_opti_row_pane_ParamLimits

0xdbd6,	// (0x0006a3ed) main_welc_opti_row_pane

0xf08f,	// (0x0006b8a6) main_welc_opti_row_pane_g1

0x9742,	// (0x00065f59) main_welc_opti_row_pane_t1

0xf097,	// (0x0006b8ae) main_welc_body_row_pane_t1

0xed89,	// (0x0006b5a0) popup_notif_wgt_heading_pane

0xeda3,	// (0x0006b5ba) aid_size_list_notif_wgt_del_ParamLimits

0xedb0,	// (0x0006b5c7) list_notif_wgt_row_pane_g1_ParamLimits

0xedbc,	// (0x0006b5d3) list_notif_wgt_row_pane_g2_ParamLimits

0xedd0,	// (0x0006b5e7) list_notif_wgt_row_pane_g3_ParamLimits

0x0b69,	// (0x0005d380) list_notif_wgt_row_pane_g_ParamLimits

0xeddd,	// (0x0006b5f4) list_notif_wgt_row_pane_t1_ParamLimits

0xedf3,	// (0x0006b60a) list_notif_wgt_row_pane_t2_ParamLimits

0xee05,	// (0x0006b61c) list_notif_wgt_row_pane_t3_ParamLimits

0x0b70,	// (0x0005d387) list_notif_wgt_row_pane_t_ParamLimits

0x90eb,	// (0x00065902) listrow_wgtman_pane_g1_ParamLimits

0x90f8,	// (0x0006590f) listrow_wgtman_pane_g2_ParamLimits

0xfbf9,	// (0x0006c410) listrow_wgtman_pane_g_ParamLimits

0x9116,	// (0x0006592d) listrow_wgtman_pane_t1_ParamLimits

0x912e,	// (0x00065945) listrow_wgtman_pane_t2_ParamLimits

0xfbfe,	// (0x0006c415) listrow_wgtman_pane_t_ParamLimits

0x9154,	// (0x0006596b) wait_bar_pane_cp09_ParamLimits

0x97c1,	// (0x00065fd8) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0006b8bd) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0006b8c5) popup_notif_wgt_heading_pane_t1

0x97c1,	// (0x00065fd8) main_vids_pane

0x97c1,	// (0x00065fd8) vids_listscroll_pane

0x9751,	// (0x00065f68) scroll_pane_cp040

0x97c1,	// (0x00065fd8) vids_list_pane

0x975c,	// (0x00065f73) vids_list_double_pane_ParamLimits

0x975c,	// (0x00065f73) vids_list_double_pane

0x9774,	// (0x00065f8b) vids_list_double_pane_g1

0x977d,	// (0x00065f94) vids_list_double_pane_t1

0x978d,	// (0x00065fa4) vids_list_double_pane_t2

0x0001,

0xfc74,	// (0x0006c48b) vids_list_double_pane_t

0x41ce,	// (0x000609e5) main_ncimui_pane_ParamLimits

0x7bea,	// (0x00064401) main_ncimui_pane_g1_ParamLimits

0x7bf6,	// (0x0006440d) main_ncimui_pane_g2_ParamLimits

0x7bf6,	// (0x0006440d) main_ncimui_pane_g2

0x0001,

0xfa39,	// (0x0006c250) main_ncimui_pane_g_ParamLimits

0xfa39,	// (0x0006c250) main_ncimui_pane_g

0x96de,	// (0x00065ef5) main_welc_pane_g1_ParamLimits

0x96de,	// (0x00065ef5) main_welc_pane_g1

0x96ea,	// (0x00065f01) main_welc_pane_g2_ParamLimits

0x96ea,	// (0x00065f01) main_welc_pane_g2

0x0001,

0xfc6f,	// (0x0006c486) main_welc_pane_g_ParamLimits

0xfc6f,	// (0x0006c486) main_welc_pane_g

0xa5a5,	// (0x00066dbc) listscroll_mce_pane_ParamLimits

0xb39a,	// (0x00067bb1) wait_bar_pane_cp10

0xc799,	// (0x00068fb0) main_cale_day_pane_ParamLimits

0xc799,	// (0x00068fb0) main_cale_week_pane_ParamLimits

0xa5a5,	// (0x00066dbc) main_messa_pane_ParamLimits

0x54e3,	// (0x00061cfa) main_clock2_btn_pane_ParamLimits

0x54e3,	// (0x00061cfa) main_clock2_btn_pane

0xcf97,	// (0x000697ae) main_clock2_btn_pane_cp01_ParamLimits

0xcf97,	// (0x000697ae) main_clock2_btn_pane_cp01

0xe959,	// (0x0006b170) list_cale_mrui_pane_ParamLimits

0xee49,	// (0x0006b660) main_cf0_pane_g2

0x0001,

0x0b77,	// (0x0005d38e) main_cf0_pane_g

0x92e5,	// (0x00065afc) area_left_week_number_pane_ParamLimits

0x92f8,	// (0x00065b0f) area_top_day_name_pane_ParamLimits

0x9306,	// (0x00065b1d) frame_month_view_pane_ParamLimits

0xef70,	// (0x0006b787) grid_month_view_pane_ParamLimits

0xef7e,	// (0x0006b795) frm_month_g1_ParamLimits

0x9384,	// (0x00065b9b) frm_month_g2_ParamLimits

0x9395,	// (0x00065bac) frm_month_g3_ParamLimits

0x93a6,	// (0x00065bbd) frm_month_g4_ParamLimits

0x93b7,	// (0x00065bce) frm_month_g5_ParamLimits

0x93ca,	// (0x00065be1) frm_month_g6_ParamLimits

0x93dd,	// (0x00065bf4) frm_month_g7_ParamLimits

0xef8b,	// (0x0006b7a2) frm_month_g8_ParamLimits

0x93f0,	// (0x00065c07) frm_month_g9_ParamLimits

0x93fd,	// (0x00065c14) frm_month_g10_ParamLimits

0x940a,	// (0x00065c21) frm_month_g11_ParamLimits

0x9417,	// (0x00065c2e) frm_month_g12_ParamLimits

0x9424,	// (0x00065c3b) frm_month_g13_ParamLimits

0x9431,	// (0x00065c48) frm_month_g14_ParamLimits

0x9440,	// (0x00065c57) frm_month_g15_ParamLimits

0x944f,	// (0x00065c66) frm_month_g16_ParamLimits

0xfc1a,	// (0x0006c431) frm_month_g_ParamLimits

0xef98,	// (0x0006b7af) cell_top_day_name_pane_t1_ParamLimits

0x945e,	// (0x00065c75) cell_area_left_week_number_pane_g1_ParamLimits

0x946d,	// (0x00065c84) cell_area_left_week_number_pane_t1_ParamLimits

0xce0f,	// (0x00069626) cell_month_view_pane_g1_ParamLimits

0x9483,	// (0x00065c9a) cell_month_view_pane_t1_ParamLimits

0xa59d,	// (0x00066db4) main_clock2_btn_pane_g1

0xf0bc,	// (0x0006b8d3) main_clock2_btn_pane_t1

0xa5b3,	// (0x00066dca) listscroll_cmail_pane_ParamLimits

0xe72b,	// (0x0006af42) main_sp_fs_email_pane_g1_ParamLimits

0xe737,	// (0x0006af4e) main_sp_fs_email_pane_g2_ParamLimits

0x09a5,	// (0x0005d1bc) main_sp_fs_email_pane_g_ParamLimits

0xeaf7,	// (0x0006b30e) list_recal_day_pane_ParamLimits

0xeb08,	// (0x0006b31f) mian_recal_day_pane_t1

0x856f,	// (0x00064d86) list_single_dyc_row_text_pane_t4_ParamLimits

0x856f,	// (0x00064d86) list_single_dyc_row_text_pane_t4

0x85a6,	// (0x00064dbd) list_single_dyc_row_text_pane_t5_ParamLimits

0x85a6,	// (0x00064dbd) list_single_dyc_row_text_pane_t5

0xa09f,	// (0x000668b6) list_single_dyc_row_text_pane_t6_ParamLimits

0xa09f,	// (0x000668b6) list_single_dyc_row_text_pane_t6

0xad06,	// (0x0006751d) aid_mgn_list_cale_time_pane

0x41ce,	// (0x000609e5) main_gallery2_pane_ParamLimits

0xcfad,	// (0x000697c4) main_clock2_pane_cp01_t1

0xcfbb,	// (0x000697d2) main_clock2_pane_cp01_t3

0x0001,

0x0484,	// (0x0005cc9b) main_clock2_pane_cp01_t

0x1771,	// (0x0005df88) cale_week_scroll_pane_g16_ParamLimits

0x1771,	// (0x0005df88) cale_week_scroll_pane_g16

0xa903,	// (0x0006711a) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
