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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00076218 };

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
0x5f74,	// (0x0007c18c) Screen

0x5f80,	// (0x0007c198) application_window

0x5fdc,	// (0x0007c1f4) area_bottom_pane_ParamLimits

0x5fdc,	// (0x0007c1f4) area_bottom_pane

0x6035,	// (0x0007c24d) area_top_pane_ParamLimits

0x6035,	// (0x0007c24d) area_top_pane

0x6099,	// (0x0007c2b1) call_video_uplink_pane_ParamLimits

0x6099,	// (0x0007c2b1) call_video_uplink_pane

0x60d8,	// (0x0007c2f0) main_pane_ParamLimits

0x60d8,	// (0x0007c2f0) main_pane

0x1b1e,	// (0x00077d36) context_pane

0x95ba,	// (0x0007f7d2) navi_pane

0x95da,	// (0x0007f7f2) popup_cale_events_window_ParamLimits

0x95da,	// (0x0007f7f2) popup_cale_events_window

0x1b31,	// (0x00077d49) popup_mup_playback_window

0x95f2,	// (0x0007f80a) signal_pane

0xecd3,	// (0x00084eeb) main_browser_pane

0x06df,	// (0x000768f7) main_burst_pane

0x9450,	// (0x0007f668) main_calc_pane

0x1b04,	// (0x00077d1c) main_cale_day_pane

0x680b,	// (0x0007ca23) main_cale_month_pane

0x1b04,	// (0x00077d1c) main_cale_week_pane

0x06df,	// (0x000768f7) main_call_pane

0xe994,	// (0x00084bac) main_call_poc_pane

0x06df,	// (0x000768f7) main_camera_pane

0x06df,	// (0x000768f7) main_chi_dic_pane

0x0564,	// (0x0007677c) main_clock_pane

0xe994,	// (0x00084bac) main_fmradio_pane

0x06df,	// (0x000768f7) main_graph_messa_pane

0xe994,	// (0x00084bac) main_help_pane

0xecd3,	// (0x00084eeb) main_im_pane

0xebef,	// (0x00084e07) main_image_pane_ParamLimits

0xebef,	// (0x00084e07) main_image_pane

0xe994,	// (0x00084bac) main_location2_pane

0x06df,	// (0x000768f7) main_location_pane

0xebef,	// (0x00084e07) main_messa_pane

0xe994,	// (0x00084bac) main_mp2_pane

0x06df,	// (0x000768f7) main_mp_pane

0xe994,	// (0x00084bac) main_msg_pane

0xe994,	// (0x00084bac) main_mup_eq_pane

0xe994,	// (0x00084bac) main_mup_pane

0xecd3,	// (0x00084eeb) main_notes_pane

0xe994,	// (0x00084bac) main_pec_pane

0xe994,	// (0x00084bac) main_phob_pane

0xe994,	// (0x00084bac) main_pinb_pane

0xe994,	// (0x00084bac) main_postcard_pane

0xe994,	// (0x00084bac) main_qdial_pane

0x06df,	// (0x000768f7) main_skin_pane

0xe994,	// (0x00084bac) main_smil2_pane

0x06df,	// (0x000768f7) main_smil_pane

0x06df,	// (0x000768f7) main_video_pane

0x06df,	// (0x000768f7) main_video_tele_pane

0xebef,	// (0x00084e07) main_viewer_pane_ParamLimits

0xebef,	// (0x00084e07) main_viewer_pane

0x06df,	// (0x000768f7) main_vorec_pane

0x948e,	// (0x0007f6a6) popup_blid_sat_info_window_ParamLimits

0x948e,	// (0x0007f6a6) popup_blid_sat_info_window

0x94ae,	// (0x0007f6c6) popup_dyc_status_message_window_ParamLimits

0x94ae,	// (0x0007f6c6) popup_dyc_status_message_window

0x94bc,	// (0x0007f6d4) popup_grid_large_graphic_window_ParamLimits

0x94bc,	// (0x0007f6d4) popup_grid_large_graphic_window

0x954b,	// (0x0007f763) popup_loc_request_window_ParamLimits

0x954b,	// (0x0007f763) popup_loc_request_window

0x9592,	// (0x0007f7aa) popup_wml_address_window_ParamLimits

0x9592,	// (0x0007f7aa) popup_wml_address_window

0x9328,	// (0x0007f540) call_muted_g1

0x8fe6,	// (0x0007f1fe) popup_call_audio_conf_window_ParamLimits

0x8fe6,	// (0x0007f1fe) popup_call_audio_conf_window

0x9338,	// (0x0007f550) popup_call_audio_first_window_ParamLimits

0x9338,	// (0x0007f550) popup_call_audio_first_window

0x9378,	// (0x0007f590) popup_call_audio_in_window_ParamLimits

0x9378,	// (0x0007f590) popup_call_audio_in_window

0x939c,	// (0x0007f5b4) popup_call_audio_out_window_ParamLimits

0x939c,	// (0x0007f5b4) popup_call_audio_out_window

0x93be,	// (0x0007f5d6) popup_call_audio_second_window_ParamLimits

0x93be,	// (0x0007f5d6) popup_call_audio_second_window

0x93ee,	// (0x0007f606) popup_call_audio_wait_window_ParamLimits

0x93ee,	// (0x0007f606) popup_call_audio_wait_window

0x940f,	// (0x0007f627) popup_number_entry_window_ParamLimits

0x940f,	// (0x0007f627) popup_number_entry_window

0xe165,	// (0x0008437d) bg_popup_call_pane_cp05_ParamLimits

0xe165,	// (0x0008437d) bg_popup_call_pane_cp05

0xe185,	// (0x0008439d) popup_number_entry_window_t1

0xe198,	// (0x000843b0) popup_number_entry_window_t2

0xe1aa,	// (0x000843c2) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x000852eb) popup_number_entry_window_t

0xe1bc,	// (0x000843d4) text_title_cp2

0xe1cf,	// (0x000843e7) bg_popup_call_pane_cp_ParamLimits

0xe1cf,	// (0x000843e7) bg_popup_call_pane_cp

0xe1dd,	// (0x000843f5) call_thumbnail_pane

0xe1e5,	// (0x000843fd) popup_call_audio_in_window_g1_ParamLimits

0xe1e5,	// (0x000843fd) popup_call_audio_in_window_g1

0xe1f1,	// (0x00084409) popup_call_audio_in_window_g2_ParamLimits

0xe1f1,	// (0x00084409) popup_call_audio_in_window_g2

0xe1fd,	// (0x00084415) popup_call_audio_in_window_g3_ParamLimits

0xe1fd,	// (0x00084415) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x000852f4) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x000852f4) popup_call_audio_in_window_g

0xe209,	// (0x00084421) popup_call_audio_in_window_t1_ParamLimits

0xe209,	// (0x00084421) popup_call_audio_in_window_t1

0xe225,	// (0x0008443d) popup_call_audio_in_window_t2_ParamLimits

0xe225,	// (0x0008443d) popup_call_audio_in_window_t2

0xe241,	// (0x00084459) popup_call_audio_in_window_t3_ParamLimits

0xe241,	// (0x00084459) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x000852fb) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x000852fb) popup_call_audio_in_window_t

0xe1cf,	// (0x000843e7) bg_popup_call_pane_cp01_ParamLimits

0xe1cf,	// (0x000843e7) bg_popup_call_pane_cp01

0xe1dd,	// (0x000843f5) call_thumbnail_pane_cp02

0xe254,	// (0x0008446c) call_type_pane_cp022

0xe25c,	// (0x00084474) popup_call_audio_out_window_g1_ParamLimits

0xe25c,	// (0x00084474) popup_call_audio_out_window_g1

0xe26e,	// (0x00084486) popup_call_audio_out_window_g2_ParamLimits

0xe26e,	// (0x00084486) popup_call_audio_out_window_g2

0xe27a,	// (0x00084492) popup_call_audio_out_window_g3_ParamLimits

0xe27a,	// (0x00084492) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x00085302) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x00085302) popup_call_audio_out_window_g

0xe28c,	// (0x000844a4) popup_call_audio_out_window_t1_ParamLimits

0xe28c,	// (0x000844a4) popup_call_audio_out_window_t1

0xe2a4,	// (0x000844bc) popup_call_audio_out_window_t2_ParamLimits

0xe2a4,	// (0x000844bc) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x00085309) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x00085309) popup_call_audio_out_window_t

0xe2b9,	// (0x000844d1) bg_popup_call_pane_ParamLimits

0xe2b9,	// (0x000844d1) bg_popup_call_pane

0x62dc,	// (0x0007c4f4) call_thumbnail_pane_cp_ParamLimits

0x62dc,	// (0x0007c4f4) call_thumbnail_pane_cp

0xe735,	// (0x0008494d) call_type_pane_cp01_ParamLimits

0xe735,	// (0x0008494d) call_type_pane_cp01

0xe79d,	// (0x000849b5) popup_call_audio_first_window_g1_ParamLimits

0xe79d,	// (0x000849b5) popup_call_audio_first_window_g1

0xe7e9,	// (0x00084a01) popup_call_audio_first_window_g2_ParamLimits

0xe7e9,	// (0x00084a01) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0008530e) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0008530e) popup_call_audio_first_window_g

0xe82d,	// (0x00084a45) popup_call_audio_first_window_t1_ParamLimits

0xe82d,	// (0x00084a45) popup_call_audio_first_window_t1

0xe8d9,	// (0x00084af1) popup_call_audio_first_window_t4_ParamLimits

0xe8d9,	// (0x00084af1) popup_call_audio_first_window_t4

0xe965,	// (0x00084b7d) popup_call_audio_first_window_t5_ParamLimits

0xe965,	// (0x00084b7d) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x00085313) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x00085313) popup_call_audio_first_window_t

0xe994,	// (0x00084bac) bg_popup_call_pane_cp02

0xe99e,	// (0x00084bb6) call_type_pane_cp023

0xe9a6,	// (0x00084bbe) popup_call_audio_wait_window_g1

0xe9ae,	// (0x00084bc6) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0008531a) popup_call_audio_wait_window_g

0xe9b6,	// (0x00084bce) popup_call_audio_wait_window_t3

0xe9c4,	// (0x00084bdc) bg_popup_call_pane_cp03_ParamLimits

0xe9c4,	// (0x00084bdc) bg_popup_call_pane_cp03

0xea24,	// (0x00084c3c) call_thumbnail_pane_cp011_ParamLimits

0xea24,	// (0x00084c3c) call_thumbnail_pane_cp011

0xea30,	// (0x00084c48) call_type_pane_cp034_ParamLimits

0xea30,	// (0x00084c48) call_type_pane_cp034

0xea6c,	// (0x00084c84) popup_call_audio_second_window_g1_ParamLimits

0xea6c,	// (0x00084c84) popup_call_audio_second_window_g1

0xeaa8,	// (0x00084cc0) popup_call_audio_second_window_g2_ParamLimits

0xeaa8,	// (0x00084cc0) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0008531f) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0008531f) popup_call_audio_second_window_g

0xeae4,	// (0x00084cfc) popup_call_audio_second_window_t1_ParamLimits

0xeae4,	// (0x00084cfc) popup_call_audio_second_window_t1

0xeb65,	// (0x00084d7d) popup_call_audio_second_window_t2_ParamLimits

0xeb65,	// (0x00084d7d) popup_call_audio_second_window_t2

0xeb9b,	// (0x00084db3) popup_call_audio_second_window_t3_ParamLimits

0xeb9b,	// (0x00084db3) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x00085324) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x00085324) popup_call_audio_second_window_t

0xe994,	// (0x00084bac) bg_popup_call_pane_cp04

0xebd1,	// (0x00084de9) list_conf_pane

0xebd9,	// (0x00084df1) popup_call_audio_conf_window_t1

0xebe7,	// (0x00084dff) call_thumbnail_pane_g1

0xebef,	// (0x00084e07) bg_pinb_pane_ParamLimits

0xebef,	// (0x00084e07) bg_pinb_pane

0xebfd,	// (0x00084e15) find_pinb_pane

0xec06,	// (0x00084e1e) listscroll_pinb_pane_ParamLimits

0xec06,	// (0x00084e1e) listscroll_pinb_pane

0xec15,	// (0x00084e2d) pinb_bg_pane_g1

0x6300,	// (0x0007c518) pinb_bg_pane_g2

0x630c,	// (0x0007c524) pinb_bg_pane_g3

0x6318,	// (0x0007c530) pinb_bg_pane_g4

0x6324,	// (0x0007c53c) pinb_bg_pane_g5

0x6330,	// (0x0007c548) pinb_bg_pane_g6

0x633b,	// (0x0007c553) pinb_bg_pane_g7

0x6346,	// (0x0007c55e) pinb_bg_pane_g8

0x6351,	// (0x0007c569) pinb_bg_pane_g9

0x635b,	// (0x0007c573) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0008532b) pinb_bg_pane_g

0x6378,	// (0x0007c590) grid_pinb_pane

0x6383,	// (0x0007c59b) list_pinb_pane

0x638e,	// (0x0007c5a6) scroll_pane_cp01_ParamLimits

0x638e,	// (0x0007c5a6) scroll_pane_cp01

0xec1f,	// (0x00084e37) find_pinb_pane_g1_ParamLimits

0xec1f,	// (0x00084e37) find_pinb_pane_g1

0xec37,	// (0x00084e4f) find_pinb_pane_t1

0xec49,	// (0x00084e61) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x00085345) find_pinb_pane_t

0xec5e,	// (0x00084e76) input_focus_pane_cp01_ParamLimits

0xec5e,	// (0x00084e76) input_focus_pane_cp01

0x63a0,	// (0x0007c5b8) cell_pinb_pane_ParamLimits

0x63a0,	// (0x0007c5b8) cell_pinb_pane

0xec6a,	// (0x00084e82) cell_pinb_pane_g1_ParamLimits

0xec6a,	// (0x00084e82) cell_pinb_pane_g1

0xec7d,	// (0x00084e95) cell_pinb_pane_g2_ParamLimits

0xec7d,	// (0x00084e95) cell_pinb_pane_g2

0xec89,	// (0x00084ea1) cell_pinb_pane_g3_ParamLimits

0xec89,	// (0x00084ea1) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0008534a) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0008534a) cell_pinb_pane_g

0xe994,	// (0x00084bac) grid_highlight_pane_cp01

0x63cf,	// (0x0007c5e7) list_pinb_item_pane_ParamLimits

0x63cf,	// (0x0007c5e7) list_pinb_item_pane

0xe994,	// (0x00084bac) list_highlight_pane_cp02

0x63f9,	// (0x0007c611) list_pinb_item_pane_g1_ParamLimits

0x63f9,	// (0x0007c611) list_pinb_item_pane_g1

0x6406,	// (0x0007c61e) list_pinb_item_pane_g2_ParamLimits

0x6406,	// (0x0007c61e) list_pinb_item_pane_g2

0x6412,	// (0x0007c62a) list_pinb_item_pane_g3_ParamLimits

0x6412,	// (0x0007c62a) list_pinb_item_pane_g3

0x6423,	// (0x0007c63b) list_pinb_item_pane_g4_ParamLimits

0x6423,	// (0x0007c63b) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x00085351) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x00085351) list_pinb_item_pane_g

0x642f,	// (0x0007c647) list_pinb_item_pane_t1_ParamLimits

0x642f,	// (0x0007c647) list_pinb_item_pane_t1

0x6460,	// (0x0007c678) calc_display_pane

0x647e,	// (0x0007c696) calc_paper_pane

0x649a,	// (0x0007c6b2) grid_calc_pane

0xe994,	// (0x00084bac) bg_list_pane_cp01

0x64c6,	// (0x0007c6de) clock_g1

0x64ce,	// (0x0007c6e6) clock_g2

0x0001,

0xf142,	// (0x0008535a) clock_g

0x64d8,	// (0x0007c6f0) clock_t1_ParamLimits

0x64d8,	// (0x0007c6f0) clock_t1

0x64ed,	// (0x0007c705) clock_t2_ParamLimits

0x64ed,	// (0x0007c705) clock_t2

0x64ff,	// (0x0007c717) clock_t3_ParamLimits

0x64ff,	// (0x0007c717) clock_t3

0x6511,	// (0x0007c729) clock_t4_ParamLimits

0x6511,	// (0x0007c729) clock_t4

0x6523,	// (0x0007c73b) clock_t5_ParamLimits

0x6523,	// (0x0007c73b) clock_t5

0x6538,	// (0x0007c750) clock_t6_ParamLimits

0x6538,	// (0x0007c750) clock_t6

0x654a,	// (0x0007c762) clock_t7_ParamLimits

0x654a,	// (0x0007c762) clock_t7

0x655c,	// (0x0007c774) clock_t8_ParamLimits

0x655c,	// (0x0007c774) clock_t8

0x6572,	// (0x0007c78a) clock_t9_ParamLimits

0x6572,	// (0x0007c78a) clock_t9

0x0008,

0xf147,	// (0x0008535f) clock_t_ParamLimits

0xf147,	// (0x0008535f) clock_t

0xec95,	// (0x00084ead) popup_clock_analogue_window_cp02

0xec95,	// (0x00084ead) popup_clock_digital_window_cp01

0xec9d,	// (0x00084eb5) listscroll_help_pane

0xe994,	// (0x00084bac) phob_pre_status_pane

0xeca7,	// (0x00084ebf) grid_qdial_pane

0xebef,	// (0x00084e07) listscroll_mce_pane

0xebef,	// (0x00084e07) bg_notes_pane

0xecb1,	// (0x00084ec9) list_notes_pane

0x6588,	// (0x0007c7a0) scroll_pane_cp06

0xecbf,	// (0x00084ed7) bg_calc_paper_pane

0x6597,	// (0x0007c7af) list_calc_pane

0xecd3,	// (0x00084eeb) bg_calc_display_pane

0x65b1,	// (0x0007c7c9) calc_display_pane_t1

0x65c6,	// (0x0007c7de) calc_display_pane_t2

0x65db,	// (0x0007c7f3) calc_display_pane_t3

0x0002,

0xf15a,	// (0x00085372) calc_display_pane_t

0x65ed,	// (0x0007c805) cell_calc_pane_ParamLimits

0x65ed,	// (0x0007c805) cell_calc_pane

0xecdf,	// (0x00084ef7) bg_calc_paper_pane_g1

0xeceb,	// (0x00084f03) bg_calc_paper_pane_g2

0xecf7,	// (0x00084f0f) bg_calc_paper_pane_g3

0xed03,	// (0x00084f1b) bg_calc_paper_pane_g4

0xed0f,	// (0x00084f27) bg_calc_paper_pane_g5

0x661a,	// (0x0007c832) bg_calc_paper_pane_g6

0x662b,	// (0x0007c843) bg_calc_paper_pane_g7

0x663c,	// (0x0007c854) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x00085379) bg_calc_paper_pane_g

0x664d,	// (0x0007c865) calc_bg_paper_pane_g9

0x665e,	// (0x0007c876) list_calc_item_pane_ParamLimits

0x665e,	// (0x0007c876) list_calc_item_pane

0xed1b,	// (0x00084f33) list_calc_item_pane_g1

0x6692,	// (0x0007c8aa) list_calc_item_pane_t1_ParamLimits

0x6692,	// (0x0007c8aa) list_calc_item_pane_t1

0x66a4,	// (0x0007c8bc) list_calc_item_pane_t2_ParamLimits

0x66a4,	// (0x0007c8bc) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0008538a) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0008538a) list_calc_item_pane_t

0xed28,	// (0x00084f40) cell_calc_pane_g1

0xed32,	// (0x00084f4a) grid_highlight_pane_cp02

0xed54,	// (0x00084f6c) bg_calc_display_pane_g1

0x66d4,	// (0x0007c8ec) bg_calc_display_pane_g2

0xed5d,	// (0x00084f75) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x00085394) bg_calc_display_pane_g

0x66de,	// (0x0007c8f6) cell_qdial_pane_ParamLimits

0x66de,	// (0x0007c8f6) cell_qdial_pane

0x66f2,	// (0x0007c90a) cell_qdial_pane_g1_ParamLimits

0x66f2,	// (0x0007c90a) cell_qdial_pane_g1

0x66ff,	// (0x0007c917) cell_qdial_pane_g2_ParamLimits

0x66ff,	// (0x0007c917) cell_qdial_pane_g2

0xed66,	// (0x00084f7e) cell_qdial_pane_g3_ParamLimits

0xed66,	// (0x00084f7e) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0008539b) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0008539b) cell_qdial_pane_g

0x671c,	// (0x0007c934) cell_qdial_pane_t1_ParamLimits

0x671c,	// (0x0007c934) cell_qdial_pane_t1

0x6734,	// (0x0007c94c) cell_qdial_pane_t2_ParamLimits

0x6734,	// (0x0007c94c) cell_qdial_pane_t2

0x6747,	// (0x0007c95f) cell_qdial_pane_t3_ParamLimits

0x6747,	// (0x0007c95f) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x000853a4) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x000853a4) cell_qdial_pane_t

0xe994,	// (0x00084bac) grid_highlight_pane_cp04

0xed72,	// (0x00084f8a) thumbnail_qdial_pane_ParamLimits

0xed72,	// (0x00084f8a) thumbnail_qdial_pane

0xedce,	// (0x00084fe6) list_help_pane

0xedd7,	// (0x00084fef) scroll_pane_cp02

0x675a,	// (0x0007c972) help_list_pane_t1_ParamLimits

0x675a,	// (0x0007c972) help_list_pane_t1

0x6794,	// (0x0007c9ac) bg_notes_pane_g2

0x679c,	// (0x0007c9b4) bg_notes_pane_g3

0x67a4,	// (0x0007c9bc) notes_bg_pane_g1

0x67ac,	// (0x0007c9c4) notes_bg_pane_g4

0x67b4,	// (0x0007c9cc) notes_bg_pane_g5

0x67bc,	// (0x0007c9d4) notes_bg_pane_g6

0x67c4,	// (0x0007c9dc) notes_bg_pane_g7

0x67cc,	// (0x0007c9e4) notes_bg_pane_g8

0x67d4,	// (0x0007c9ec) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x000853c2) notes_bg_pane_g

0x67dc,	// (0x0007c9f4) list_notes_text_pane_ParamLimits

0x67dc,	// (0x0007c9f4) list_notes_text_pane

0xede0,	// (0x00084ff8) list_notes_text_pane_g1

0x4e6f,	// (0x0007b087) list_notes_text_pane_t1

0x680b,	// (0x0007ca23) listscroll_cale_week_pane

0x6830,	// (0x0007ca48) bg_cale_heading_pane

0xee03,	// (0x0008501b) bg_cale_pane_cp01

0x6852,	// (0x0007ca6a) cale_week_corner_pane

0x686c,	// (0x0007ca84) cale_week_day_heading_pane

0x688e,	// (0x0007caa6) cale_week_scroll_pane_g1

0x68ab,	// (0x0007cac3) cale_week_scroll_pane_g2

0x68be,	// (0x0007cad6) cale_week_scroll_pane_g3

0x68d1,	// (0x0007cae9) cale_week_scroll_pane_g4

0x68e4,	// (0x0007cafc) cale_week_scroll_pane_g5

0x68f7,	// (0x0007cb0f) cale_week_scroll_pane_g6

0x690a,	// (0x0007cb22) cale_week_scroll_pane_g7

0x691d,	// (0x0007cb35) cale_week_scroll_pane_g8

0x6932,	// (0x0007cb4a) cale_week_scroll_pane_g9

0x6945,	// (0x0007cb5d) cale_week_scroll_pane_g10

0x6958,	// (0x0007cb70) cale_week_scroll_pane_g11

0x696b,	// (0x0007cb83) cale_week_scroll_pane_g12

0x6982,	// (0x0007cb9a) cale_week_scroll_pane_g13

0x699d,	// (0x0007cbb5) cale_week_scroll_pane_g14

0x69b8,	// (0x0007cbd0) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x000853d1) cale_week_scroll_pane_g

0x69d3,	// (0x0007cbeb) cale_week_time_pane

0x69e8,	// (0x0007cc00) grid_cale_week_pane

0xee33,	// (0x0008504b) scroll_pane_cp08

0x6a09,	// (0x0007cc21) cell_cale_week_pane_ParamLimits

0x6a09,	// (0x0007cc21) cell_cale_week_pane

0x6a6d,	// (0x0007cc85) cale_week_day_heading_pane_t1

0x6aa8,	// (0x0007ccc0) cale_week_day_heading_pane_t2

0x6ae3,	// (0x0007ccfb) cale_week_day_heading_pane_t3

0x6b1e,	// (0x0007cd36) cale_week_day_heading_pane_t4

0x6b59,	// (0x0007cd71) cale_week_day_heading_pane_t5

0x6b94,	// (0x0007cdac) cale_week_day_heading_pane_t6

0x6bcf,	// (0x0007cde7) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x000853f0) cale_week_day_heading_pane_t

0xee50,	// (0x00085068) bg_cale_side_pane

0x6c0a,	// (0x0007ce22) cale_week_time_pane_t1

0x6c24,	// (0x0007ce3c) cale_week_time_pane_t2

0x6c3e,	// (0x0007ce56) cale_week_time_pane_t3

0x6c58,	// (0x0007ce70) cale_week_time_pane_t4

0x6c72,	// (0x0007ce8a) cale_week_time_pane_t5

0x6c8e,	// (0x0007cea6) cale_week_time_pane_t6

0x6cb0,	// (0x0007cec8) cale_week_time_pane_t7

0x6cd4,	// (0x0007ceec) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x000853ff) cale_week_time_pane_t

0x6cfa,	// (0x0007cf12) cell_cale_week_pane_g2

0x6d0d,	// (0x0007cf25) cell_cale_week_pane_g3_ParamLimits

0x6d0d,	// (0x0007cf25) cell_cale_week_pane_g3

0xee5e,	// (0x00085076) grid_highlight_pane_cp07

0xee66,	// (0x0008507e) listscroll_gms_pane

0xee70,	// (0x00085088) grid_gms_pane

0xee79,	// (0x00085091) listscroll_gms_pane_g1

0xee81,	// (0x00085099) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x00085410) listscroll_gms_pane_g

0x6d25,	// (0x0007cf3d) scroll_pane_cp010

0x6d30,	// (0x0007cf48) cell_gms_pane_ParamLimits

0x6d30,	// (0x0007cf48) cell_gms_pane

0x6d40,	// (0x0007cf58) cell_gms_pane_g1

0xee89,	// (0x000850a1) cell_gms_pane_g2

0xede0,	// (0x00084ff8) cell_gms_pane_g3

0xee91,	// (0x000850a9) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x00085415) cell_gms_pane_g

0xee9a,	// (0x000850b2) grid_highlight_pane_cp09

0x92d0,	// (0x0007f4e8) phob_pre_status_pane_g1

0x92d8,	// (0x0007f4f0) phob_pre_status_pane_g2

0x92e0,	// (0x0007f4f8) phob_pre_status_pane_g3

0x92e8,	// (0x0007f500) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x00085804) phob_pre_status_pane_g

0x92f8,	// (0x0007f510) phob_pre_status_pane_t1

0x9308,	// (0x0007f520) phob_pre_status_pane_t2

0x9318,	// (0x0007f530) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0008580f) phob_pre_status_pane_t

0xe994,	// (0x00084bac) bg_list_pane_cp05

0x6d50,	// (0x0007cf68) grid_vorec_pane

0x6d5c,	// (0x0007cf74) vorec_t1

0x6d6a,	// (0x0007cf82) vorec_t2

0x6d78,	// (0x0007cf90) vorec_t3

0x6d86,	// (0x0007cf9e) vorec_t4

0x6d94,	// (0x0007cfac) vorec_t5

0x6da2,	// (0x0007cfba) vorec_t6

0x0006,

0xf206,	// (0x0008541e) vorec_t

0x6dbe,	// (0x0007cfd6) wait_bar_pane_cp01

0x6dc6,	// (0x0007cfde) cell_vorec_pane_ParamLimits

0x6dc6,	// (0x0007cfde) cell_vorec_pane

0xeea2,	// (0x000850ba) cell_vorec_pane_g1

0xe994,	// (0x00084bac) grid_highlight_pane_cp05

0x6de9,	// (0x0007d001) cams_zoom_pane

0x6df5,	// (0x0007d00d) image_vga_pane

0x6e04,	// (0x0007d01c) main_camera_pane_g1

0x6e12,	// (0x0007d02a) main_camera_pane_g2

0x6e1e,	// (0x0007d036) main_camera_pane_g3

0x6e2a,	// (0x0007d042) main_camera_pane_g4

0x6e36,	// (0x0007d04e) main_camera_pane_g5

0x6e42,	// (0x0007d05a) main_camera_pane_g6

0x6e4e,	// (0x0007d066) main_camera_pane_g7

0x0007,

0xf215,	// (0x0008542d) main_camera_pane_g

0x6e5a,	// (0x0007d072) main_camera_pane_t1

0x6e6c,	// (0x0007d084) main_camera_pane_t2

0x0001,

0xf226,	// (0x0008543e) main_camera_pane_t

0x6e8d,	// (0x0007d0a5) cams_zoom_pane_cp_ParamLimits

0x6e8d,	// (0x0007d0a5) cams_zoom_pane_cp

0x6eb1,	// (0x0007d0c9) image_cif_pane_ParamLimits

0x6eb1,	// (0x0007d0c9) image_cif_pane

0x6ecf,	// (0x0007d0e7) image_subqcif_pane

0x6ed7,	// (0x0007d0ef) main_video_pane_g1_ParamLimits

0x6ed7,	// (0x0007d0ef) main_video_pane_g1

0x6ef7,	// (0x0007d10f) main_video_pane_g2_ParamLimits

0x6ef7,	// (0x0007d10f) main_video_pane_g2

0x6f27,	// (0x0007d13f) main_video_pane_g3_ParamLimits

0x6f27,	// (0x0007d13f) main_video_pane_g3

0x6f50,	// (0x0007d168) main_video_pane_g4_ParamLimits

0x6f50,	// (0x0007d168) main_video_pane_g4

0x6f79,	// (0x0007d191) main_video_pane_g5_ParamLimits

0x6f79,	// (0x0007d191) main_video_pane_g5

0xeeb8,	// (0x000850d0) main_video_pane_g6_ParamLimits

0xeeb8,	// (0x000850d0) main_video_pane_g6

0x0006,

0xf22b,	// (0x00085443) main_video_pane_g_ParamLimits

0xf22b,	// (0x00085443) main_video_pane_g

0x6f9b,	// (0x0007d1b3) main_video_pane_t1_ParamLimits

0x6f9b,	// (0x0007d1b3) main_video_pane_t1

0xeed2,	// (0x000850ea) cams_zoom_pane_g1

0xeedb,	// (0x000850f3) cams_zoom_pane_g2

0xeee4,	// (0x000850fc) cams_zoom_pane_g3

0xeeed,	// (0x00085105) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x00085452) cams_zoom_pane_g

0x6fe5,	// (0x0007d1fd) grid_cams_pane

0x6ff3,	// (0x0007d20b) linegrid_cams_pane

0x7001,	// (0x0007d219) cell_cams_pane_ParamLimits

0x7001,	// (0x0007d219) cell_cams_pane

0xeef6,	// (0x0008510e) cams_burst_image_pane

0xeefe,	// (0x00085116) cell_cams_pane_g1

0xe994,	// (0x00084bac) grid_highlight_pane_cp03

0xed28,	// (0x00084f40) mp_bg_pane_g1

0xe994,	// (0x00084bac) bg_list_pane_cp03

0x1a29,	// (0x00077c41) bg_mp_pane

0x1a31,	// (0x00077c49) grid_mp_pane

0x1a39,	// (0x00077c51) media_player_g1

0x1a41,	// (0x00077c59) media_player_t1

0x1a4f,	// (0x00077c67) media_player_t2

0x1a5d,	// (0x00077c75) media_player_t3

0x1a6b,	// (0x00077c83) media_player_t4

0x1a79,	// (0x00077c91) media_player_t5

0x1a87,	// (0x00077c9f) media_player_t6

0x1a95,	// (0x00077cad) media_player_t7

0x0006,

0xf5d6,	// (0x000857ee) media_player_t

0x1aa3,	// (0x00077cbb) wait_bar_pane_cp02

0xf5bb,	// (0x000857d3) main_usb_pane_t

0x92c7,	// (0x0007f4df) cell_mp_pane

0xed28,	// (0x00084f40) cell_mp_pane_g1

0xe994,	// (0x00084bac) grid_highlight_pane_cp06

0xef06,	// (0x0008511e) grid_skin_colour_pane

0xef0e,	// (0x00085126) list_highlight_pane_cp03

0x702c,	// (0x0007d244) skin_g1

0xef16,	// (0x0008512e) skin_t1

0xef25,	// (0x0008513d) skin_t2

0x0001,

0xf26f,	// (0x00085487) skin_t

0x7036,	// (0x0007d24e) cell_skin_colour_pane_ParamLimits

0x7036,	// (0x0007d24e) cell_skin_colour_pane

0xef33,	// (0x0008514b) cell_skin_colour_pane_g1

0x70ba,	// (0x0007d2d2) call_video_g1_ParamLimits

0x70ba,	// (0x0007d2d2) call_video_g1

0x70ca,	// (0x0007d2e2) call_video_g2_ParamLimits

0x70ca,	// (0x0007d2e2) call_video_g2

0x0001,

0xf274,	// (0x0008548c) call_video_g_ParamLimits

0xf274,	// (0x0008548c) call_video_g

0x7124,	// (0x0007d33c) call_video_uplink_pane_cp1_ParamLimits

0x7124,	// (0x0007d33c) call_video_uplink_pane_cp1

0xef45,	// (0x0008515d) call_video_uplink_pane_cp2

0x71f0,	// (0x0007d408) video_down_crop_pane_ParamLimits

0x71f0,	// (0x0007d408) video_down_crop_pane

0x72e2,	// (0x0007d4fa) video_down_pane_ParamLimits

0x72e2,	// (0x0007d4fa) video_down_pane

0xef4d,	// (0x00085165) video_down_subqcif_pane_ParamLimits

0xef4d,	// (0x00085165) video_down_subqcif_pane

0xef65,	// (0x0008517d) video_down_subqcif_pane_cp_ParamLimits

0xef65,	// (0x0008517d) video_down_subqcif_pane_cp

0xef8b,	// (0x000851a3) im_reading_pane_ParamLimits

0xef8b,	// (0x000851a3) im_reading_pane

0x7404,	// (0x0007d61c) im_writing_pane_ParamLimits

0x7404,	// (0x0007d61c) im_writing_pane

0x7422,	// (0x0007d63a) im_reading_pane_t1

0xefa5,	// (0x000851bd) list_im_pane

0xefb6,	// (0x000851ce) scroll_pane_cp07

0x747d,	// (0x0007d695) im_writing_pane_t1_ParamLimits

0x747d,	// (0x0007d695) im_writing_pane_t1

0xefcf,	// (0x000851e7) im_writing_pane_t2_ParamLimits

0xefcf,	// (0x000851e7) im_writing_pane_t2

0x0001,

0xf27e,	// (0x00085496) im_writing_pane_t_ParamLimits

0xf27e,	// (0x00085496) im_writing_pane_t

0xe994,	// (0x00084bac) input_focus_pane_cp04

0xe994,	// (0x00084bac) input_focus_pane_cp05

0x748f,	// (0x0007d6a7) list_im_single_pane_ParamLimits

0x748f,	// (0x0007d6a7) list_im_single_pane

0x74b7,	// (0x0007d6cf) list_single_im_pane_t1

0x928b,	// (0x0007f4a3) blid_accuracy_pane

0x9293,	// (0x0007f4ab) blid_compass_pane

0x929d,	// (0x0007f4b5) main_location_t1

0x92ab,	// (0x0007f4c3) main_location_t2

0x92b9,	// (0x0007f4d1) main_location_t3

0x0002,

0xf5e5,	// (0x000857fd) main_location_t

0xe994,	// (0x00084bac) aid_levels_location

0xed28,	// (0x00084f40) blid_accuracy_pane_g1

0xed28,	// (0x00084f40) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x000854f8) blid_accuracy_pane_g

0xf017,	// (0x0008522f) wml_content_pane

0xf055,	// (0x0008526d) wml_button_pane_ParamLimits

0xf055,	// (0x0008526d) wml_button_pane

0x74c6,	// (0x0007d6de) wml_list_single_large_pane_ParamLimits

0x74c6,	// (0x0007d6de) wml_list_single_large_pane

0x74f7,	// (0x0007d70f) wml_list_single_medium_pane_ParamLimits

0x74f7,	// (0x0007d70f) wml_list_single_medium_pane

0x752f,	// (0x0007d747) wml_list_single_small_pane_ParamLimits

0x752f,	// (0x0007d747) wml_list_single_small_pane

0xf069,	// (0x00085281) wml_selection_box_pane_ParamLimits

0xf069,	// (0x00085281) wml_selection_box_pane

0xf07c,	// (0x00085294) wml_list_single_pane_t1

0xf08b,	// (0x000852a3) wml_list_single_medium_pane_t1

0xf09a,	// (0x000852b2) wml_list_single_large_pane_t1

0xf0a9,	// (0x000852c1) input_focus_pane_cp02_ParamLimits

0xf0a9,	// (0x000852c1) input_focus_pane_cp02

0x0001,	// (0x00076219) wml_selection_box_pane_g1

0x000a,	// (0x00076222) wml_selection_box_pane_t1_ParamLimits

0x000a,	// (0x00076222) wml_selection_box_pane_t1

0xebef,	// (0x00084e07) bg_wml_button_pane_ParamLimits

0xebef,	// (0x00084e07) bg_wml_button_pane

0x0022,	// (0x0007623a) wml_button_pane_g1

0x002a,	// (0x00076242) wml_button_pane_t1

0x0022,	// (0x0007623a) wml_button_bg_pane_g1

0x003a,	// (0x00076252) wml_button_bg_pane_g2

0x0042,	// (0x0007625a) wml_button_bg_pane_g3

0x004a,	// (0x00076262) wml_button_bg_pane_g4

0x0052,	// (0x0007626a) wml_button_bg_pane_g5

0x005a,	// (0x00076272) wml_button_bg_pane_g6

0x0062,	// (0x0007627a) wml_button_bg_pane_g7

0x006a,	// (0x00076282) wml_button_bg_pane_g8

0x0072,	// (0x0007628a) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0008549b) wml_button_bg_pane_g

0x7570,	// (0x0007d788) bg_list_pane_cp02

0x007a,	// (0x00076292) mce_header_pane_ParamLimits

0x007a,	// (0x00076292) mce_header_pane

0x0090,	// (0x000762a8) mce_icon_pane

0x0090,	// (0x000762a8) mce_image_pane

0x0099,	// (0x000762b1) mce_text_pane_ParamLimits

0x0099,	// (0x000762b1) mce_text_pane

0x757a,	// (0x0007d792) scroll_pane_cp03

0xf04d,	// (0x00085265) scroll_pane_cp04

0x00ac,	// (0x000762c4) scroll_pane_cp05_ParamLimits

0x00ac,	// (0x000762c4) scroll_pane_cp05

0x7584,	// (0x0007d79c) mce_header_field_pane_ParamLimits

0x7584,	// (0x0007d79c) mce_header_field_pane

0x75a4,	// (0x0007d7bc) mce_header_field_pane_2_ParamLimits

0x75a4,	// (0x0007d7bc) mce_header_field_pane_2

0x75ba,	// (0x0007d7d2) mce_header_field_pane_3

0x75c2,	// (0x0007d7da) list_single_mce_message_pane_ParamLimits

0x75c2,	// (0x0007d7da) list_single_mce_message_pane

0x75f4,	// (0x0007d80c) list_single_mce_smart_pane_ParamLimits

0x75f4,	// (0x0007d80c) list_single_mce_smart_pane

0x00b8,	// (0x000762d0) input_focus_pane_cp03

0x00c1,	// (0x000762d9) list_header_data_pane

0x7631,	// (0x0007d849) mce_header_field_pane_t1

0x7641,	// (0x0007d859) list_single_mce_header_pane_ParamLimits

0x7641,	// (0x0007d859) list_single_mce_header_pane

0x00c9,	// (0x000762e1) list_single_mce_header_pane_t1

0x00d8,	// (0x000762f0) list_single_mce_message_pane_g1

0x00e0,	// (0x000762f8) list_single_mce_message_pane_t1

0x7698,	// (0x0007d8b0) bg_cale_heading_pane_cp01_ParamLimits

0x7698,	// (0x0007d8b0) bg_cale_heading_pane_cp01

0x00ee,	// (0x00076306) bg_cale_pane_cp02_ParamLimits

0x00ee,	// (0x00076306) bg_cale_pane_cp02

0x76db,	// (0x0007d8f3) cale_month_corner_pane

0x76f5,	// (0x0007d90d) cale_month_day_heading_pane_ParamLimits

0x76f5,	// (0x0007d90d) cale_month_day_heading_pane

0x7750,	// (0x0007d968) cale_month_pane_g1_ParamLimits

0x7750,	// (0x0007d968) cale_month_pane_g1

0x7788,	// (0x0007d9a0) cale_month_pane_g2_ParamLimits

0x7788,	// (0x0007d9a0) cale_month_pane_g2

0x77b3,	// (0x0007d9cb) cale_month_pane_g3_ParamLimits

0x77b3,	// (0x0007d9cb) cale_month_pane_g3

0x7803,	// (0x0007da1b) cale_month_pane_g4_ParamLimits

0x7803,	// (0x0007da1b) cale_month_pane_g4

0x7853,	// (0x0007da6b) cale_month_pane_g5_ParamLimits

0x7853,	// (0x0007da6b) cale_month_pane_g5

0x78a3,	// (0x0007dabb) cale_month_pane_g6_ParamLimits

0x78a3,	// (0x0007dabb) cale_month_pane_g6

0x78f3,	// (0x0007db0b) cale_month_pane_g7_ParamLimits

0x78f3,	// (0x0007db0b) cale_month_pane_g7

0x795b,	// (0x0007db73) cale_month_pane_g8_ParamLimits

0x795b,	// (0x0007db73) cale_month_pane_g8

0x79c3,	// (0x0007dbdb) cale_month_pane_g9_ParamLimits

0x79c3,	// (0x0007dbdb) cale_month_pane_g9

0x7a21,	// (0x0007dc39) cale_month_pane_g10_ParamLimits

0x7a21,	// (0x0007dc39) cale_month_pane_g10

0x7a7f,	// (0x0007dc97) cale_month_pane_g11_ParamLimits

0x7a7f,	// (0x0007dc97) cale_month_pane_g11

0x7ad3,	// (0x0007dceb) cale_month_pane_g12_ParamLimits

0x7ad3,	// (0x0007dceb) cale_month_pane_g12

0x7b29,	// (0x0007dd41) cale_month_pane_g13_ParamLimits

0x7b29,	// (0x0007dd41) cale_month_pane_g13

0x000c,

0xf296,	// (0x000854ae) cale_month_pane_g_ParamLimits

0xf296,	// (0x000854ae) cale_month_pane_g

0x7b7f,	// (0x0007dd97) cale_month_week_pane

0x7b94,	// (0x0007ddac) grid_cale_month_pane_ParamLimits

0x7b94,	// (0x0007ddac) grid_cale_month_pane

0x7be6,	// (0x0007ddfe) cale_month_day_heading_pane_t1

0x7c6c,	// (0x0007de84) cale_month_day_heading_pane_t2

0x7cfd,	// (0x0007df15) cale_month_day_heading_pane_t3

0x7d8e,	// (0x0007dfa6) cale_month_day_heading_pane_t4

0x7e1f,	// (0x0007e037) cale_month_day_heading_pane_t5

0x7eb0,	// (0x0007e0c8) cale_month_day_heading_pane_t6

0x7f4d,	// (0x0007e165) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x000854c9) cale_month_day_heading_pane_t

0xee50,	// (0x00085068) bg_cale_side_pane_cp01

0x7ff6,	// (0x0007e20e) cale_month_week_pane_t1

0x800f,	// (0x0007e227) cale_month_week_pane_t2

0x8028,	// (0x0007e240) cale_month_week_pane_t3

0x8041,	// (0x0007e259) cale_month_week_pane_t4

0x805e,	// (0x0007e276) cale_month_week_pane_t5

0x807f,	// (0x0007e297) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x000854d8) cale_month_week_pane_t

0x80a0,	// (0x0007e2b8) cell_cale_month_pane_ParamLimits

0x80a0,	// (0x0007e2b8) cell_cale_month_pane

0x81c6,	// (0x0007e3de) cell_cale_month_pane_g1

0x81d2,	// (0x0007e3ea) cell_cale_month_pane_t1_ParamLimits

0x81d2,	// (0x0007e3ea) cell_cale_month_pane_t1

0xee5e,	// (0x00085076) grid_highlight_pane_cp08

0xed28,	// (0x00084f40) main_smil_g1

0x81f2,	// (0x0007e40a) smil_status_pane

0x012d,	// (0x00076345) smil_text_pane

0x1949,	// (0x00077b61) bg_popup_call3_rect_pane_g8

0x1951,	// (0x00077b69) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x00085791) bg_popup_call3_rect_pane_g

0x1bab,	// (0x00077dc3) smil_status_volume_pane_g1

0x0137,	// (0x0007634f) smil_status_pane_t1

0x96ad,	// (0x0007f8c5) volume_smil_pane

0x014e,	// (0x00076366) list_smil_text_pane

0x8205,	// (0x0007e41d) scroll_pane_cp011

0x8210,	// (0x0007e428) smil_text_list_pane_t1_ParamLimits

0x8210,	// (0x0007e428) smil_text_list_pane_t1

0x82a4,	// (0x0007e4bc) aid_volume_smil_ParamLimits

0x82a4,	// (0x0007e4bc) aid_volume_smil

0xed28,	// (0x00084f40) smil_volume_pane_g1

0xed28,	// (0x00084f40) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x000854f8) smil_volume_pane_g

0x680b,	// (0x0007ca23) listscroll_cale_day_pane

0x0158,	// (0x00076370) bg_cale_pane

0x0170,	// (0x00076388) list_cale_pane

0x0193,	// (0x000763ab) scroll_pane_cp09

0x01a4,	// (0x000763bc) cale_bg_pane_g1

0x01ac,	// (0x000763c4) cale_bg_pane_g2

0x01b4,	// (0x000763cc) cale_bg_pane_g3

0x01bc,	// (0x000763d4) cale_bg_pane_g4

0x01c4,	// (0x000763dc) cale_bg_pane_g5

0x01cc,	// (0x000763e4) cale_bg_pane_g6

0x01d4,	// (0x000763ec) cale_bg_pane_g7

0x01dc,	// (0x000763f4) cale_bg_pane_g8

0x01e4,	// (0x000763fc) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x000854fd) cale_bg_pane_g

0x82c6,	// (0x0007e4de) list_cale_time_pane_ParamLimits

0x82c6,	// (0x0007e4de) list_cale_time_pane

0x82e6,	// (0x0007e4fe) list_cale_time_pane_g1_ParamLimits

0x82e6,	// (0x0007e4fe) list_cale_time_pane_g1

0x01ec,	// (0x00076404) list_cale_time_pane_g2_ParamLimits

0x01ec,	// (0x00076404) list_cale_time_pane_g2

0x82f2,	// (0x0007e50a) list_cale_time_pane_g3_ParamLimits

0x82f2,	// (0x0007e50a) list_cale_time_pane_g3

0x8300,	// (0x0007e518) list_cale_time_pane_g4_ParamLimits

0x8300,	// (0x0007e518) list_cale_time_pane_g4

0x830e,	// (0x0007e526) list_cale_time_pane_g5_ParamLimits

0x830e,	// (0x0007e526) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x00085510) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x00085510) list_cale_time_pane_g

0x831c,	// (0x0007e534) list_cale_time_pane_t1_ParamLimits

0x831c,	// (0x0007e534) list_cale_time_pane_t1

0x8344,	// (0x0007e55c) list_cale_time_pane_t2_ParamLimits

0x8344,	// (0x0007e55c) list_cale_time_pane_t2

0x8628,	// (0x0007e840) aid_blid_cardinal_pane

0x866a,	// (0x0007e882) compass_pane_t4

0x836c,	// (0x0007e584) list_cale_time_pane_t4_ParamLimits

0x836c,	// (0x0007e584) list_cale_time_pane_t4

0x8678,	// (0x0007e890) compass_pane_t5

0x8688,	// (0x0007e8a0) compass_pane_t6

0x8696,	// (0x0007e8ae) compass_pane_t7

0x0631,	// (0x00076849) navi_pane_cc_t1

0x0786,	// (0x0007699e) aid_phob_thumbnail_center_pane

0x8d84,	// (0x0007ef9c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0008551d) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0008551d) list_cale_time_pane_t

0xe1cf,	// (0x000843e7) bg_popup_window_pane_cp02_ParamLimits

0xe1cf,	// (0x000843e7) bg_popup_window_pane_cp02

0x0206,	// (0x0007641e) heading_pane_cp01_ParamLimits

0x0206,	// (0x0007641e) heading_pane_cp01

0x0212,	// (0x0007642a) loc_req_pane_ParamLimits

0x0212,	// (0x0007642a) loc_req_pane

0x0222,	// (0x0007643a) loc_type_pane_ParamLimits

0x0222,	// (0x0007643a) loc_type_pane

0x0234,	// (0x0007644c) loc_type_pane_t1_ParamLimits

0x0234,	// (0x0007644c) loc_type_pane_t1

0x0246,	// (0x0007645e) loc_type_pane_t2_ParamLimits

0x0246,	// (0x0007645e) loc_type_pane_t2

0x0258,	// (0x00076470) loc_type_pane_t3_ParamLimits

0x0258,	// (0x00076470) loc_type_pane_t3

0x0002,

0xf30c,	// (0x00085524) loc_type_pane_t_ParamLimits

0xf30c,	// (0x00085524) loc_type_pane_t

0x026a,	// (0x00076482) list_loc_req_pane

0x0274,	// (0x0007648c) scroll_pane_cp012

0x4fa3,	// (0x0007b1bb) list_single_loc_request_popup_menu_pane_ParamLimits

0x4fa3,	// (0x0007b1bb) list_single_loc_request_popup_menu_pane

0x027f,	// (0x00076497) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x027f,	// (0x00076497) list_single_loc_request_popup_menu_pane_g1

0x028b,	// (0x000764a3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x028b,	// (0x000764a3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0008552b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0008552b) list_single_loc_request_popup_menu_pane_g

0x0297,	// (0x000764af) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0297,	// (0x000764af) list_single_loc_request_popup_menu_pane_t1

0x8394,	// (0x0007e5ac) bg_popup_window_pane_cp03_ParamLimits

0x8394,	// (0x0007e5ac) bg_popup_window_pane_cp03

0x83a2,	// (0x0007e5ba) heading_loc_req_pane_ParamLimits

0x83a2,	// (0x0007e5ba) heading_loc_req_pane

0x83ae,	// (0x0007e5c6) popup_dyc_status_message_window_g1_ParamLimits

0x83ae,	// (0x0007e5c6) popup_dyc_status_message_window_g1

0x83ba,	// (0x0007e5d2) popup_dyc_status_message_window_t1_ParamLimits

0x83ba,	// (0x0007e5d2) popup_dyc_status_message_window_t1

0x83cc,	// (0x0007e5e4) popup_dyc_status_message_window_t2_ParamLimits

0x83cc,	// (0x0007e5e4) popup_dyc_status_message_window_t2

0x83de,	// (0x0007e5f6) popup_dyc_status_message_window_t3_ParamLimits

0x83de,	// (0x0007e5f6) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x00085530) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x00085530) popup_dyc_status_message_window_t

0xe994,	// (0x00084bac) bg_heading_pane_cp01

0x02b9,	// (0x000764d1) heading_loc_req_pane_g1

0x02c1,	// (0x000764d9) heading_loc_req_pane_g2

0x02c9,	// (0x000764e1) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x00085537) heading_loc_req_pane_g

0x02d1,	// (0x000764e9) heading_loc_req_pane_t1

0x02e0,	// (0x000764f8) bg_popup_sub_pane_cp01_ParamLimits

0x02e0,	// (0x000764f8) bg_popup_sub_pane_cp01

0x02ee,	// (0x00076506) popup_cale_events_window_g1_ParamLimits

0x02ee,	// (0x00076506) popup_cale_events_window_g1

0x030e,	// (0x00076526) popup_cale_events_window_g2_ParamLimits

0x030e,	// (0x00076526) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0008556b) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0008556b) popup_cale_events_window_g

0x032e,	// (0x00076546) popup_cale_events_window_t1_ParamLimits

0x032e,	// (0x00076546) popup_cale_events_window_t1

0x0340,	// (0x00076558) popup_cale_events_window_t2_ParamLimits

0x0340,	// (0x00076558) popup_cale_events_window_t2

0x037e,	// (0x00076596) popup_cale_events_window_t3_ParamLimits

0x037e,	// (0x00076596) popup_cale_events_window_t3

0x03b8,	// (0x000765d0) popup_cale_events_window_t4_ParamLimits

0x03b8,	// (0x000765d0) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x00085570) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x00085570) popup_cale_events_window_t

0x8408,	// (0x0007e620) call_type_pane

0x079e,	// (0x000769b6) popup_call_status_window_g1

0x8414,	// (0x0007e62c) popup_call_status_window_g2

0x8420,	// (0x0007e638) popup_call_status_window_g3

0x0002,

0xf361,	// (0x00085579) popup_call_status_window_g

0x03ee,	// (0x00076606) call_type_pane_g1

0x03f7,	// (0x0007660f) call_type_pane_g2

0x0001,

0xf368,	// (0x00085580) call_type_pane_g

0xe994,	// (0x00084bac) bg_popup_sub_pane_cp02

0x0400,	// (0x00076618) listscroll_popup_wml_pane

0x0408,	// (0x00076620) list_wml_pane

0x0412,	// (0x0007662a) scroll_pane_cp013

0x041d,	// (0x00076635) list_single_graphic_popup_wml_pane_ParamLimits

0x041d,	// (0x00076635) list_single_graphic_popup_wml_pane

0xed28,	// (0x00084f40) list_single_graphic_popup_wml_pane_g1

0x0431,	// (0x00076649) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x00085585) list_single_graphic_popup_wml_pane_g

0x0439,	// (0x00076651) list_single_graphic_popup_wml_pane_t1

0x0447,	// (0x0007665f) aid_call_pane

0xebe7,	// (0x00084dff) popup_clock_analogue_window_g1

0xebe7,	// (0x00084dff) popup_clock_analogue_window_g2

0x842c,	// (0x0007e644) popup_clock_analogue_window_g3

0x842c,	// (0x0007e644) popup_clock_analogue_window_g4

0xed28,	// (0x00084f40) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0008558a) popup_clock_analogue_window_g

0x8434,	// (0x0007e64c) popup_clock_analogue_window_t1

0x8442,	// (0x0007e65a) clock_digital_number_pane_ParamLimits

0x8442,	// (0x0007e65a) clock_digital_number_pane

0x844e,	// (0x0007e666) clock_digital_number_pane_cp02_ParamLimits

0x844e,	// (0x0007e666) clock_digital_number_pane_cp02

0x845a,	// (0x0007e672) clock_digital_number_pane_cp03_ParamLimits

0x845a,	// (0x0007e672) clock_digital_number_pane_cp03

0x8466,	// (0x0007e67e) clock_digital_number_pane_cp04_ParamLimits

0x8466,	// (0x0007e67e) clock_digital_number_pane_cp04

0x8476,	// (0x0007e68e) clock_digital_separator_pane_ParamLimits

0x8476,	// (0x0007e68e) clock_digital_separator_pane

0x8482,	// (0x0007e69a) popup_clock_digital_window_t1

0xed28,	// (0x00084f40) clock_digital_number_pane_g1

0xed28,	// (0x00084f40) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x000854f8) clock_digital_number_pane_g

0xed28,	// (0x00084f40) clock_digital_separator_pane_g1

0xed28,	// (0x00084f40) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x000854f8) clock_digital_separator_pane_g

0xe994,	// (0x00084bac) bg_popup_window_pane_cp04

0x0457,	// (0x0007666f) heading_pane_cp03

0x045f,	// (0x00076677) listscroll_popup_gms_pane

0x0467,	// (0x0007667f) grid_large_graphic_popup_pane

0x0471,	// (0x00076689) listscroll_popup_gms_pane_g1

0x0479,	// (0x00076691) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x00085595) listscroll_popup_gms_pane_g

0xf04d,	// (0x00085265) scroll_pane_cp014

0x0481,	// (0x00076699) cell_large_graphic_popup_pane_ParamLimits

0x0481,	// (0x00076699) cell_large_graphic_popup_pane

0x0499,	// (0x000766b1) cell_large_graphic_popup_pane_g1_ParamLimits

0x0499,	// (0x000766b1) cell_large_graphic_popup_pane_g1

0x04a5,	// (0x000766bd) cell_large_graphic_popup_pane_g2_ParamLimits

0x04a5,	// (0x000766bd) cell_large_graphic_popup_pane_g2

0x04b1,	// (0x000766c9) cell_large_graphic_popup_pane_g3_ParamLimits

0x04b1,	// (0x000766c9) cell_large_graphic_popup_pane_g3

0x04be,	// (0x000766d6) cell_large_graphic_popup_pane_g4_ParamLimits

0x04be,	// (0x000766d6) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0008559a) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0008559a) cell_large_graphic_popup_pane_g

0x04ce,	// (0x000766e6) grid_highlight_pane_cp010

0xed28,	// (0x00084f40) bg_popup_call_pane_g1

0x04d8,	// (0x000766f0) list_single_graphic_popup_conf_pane_ParamLimits

0x04d8,	// (0x000766f0) list_single_graphic_popup_conf_pane

0x04eb,	// (0x00076703) list_highlight_pane_cp01

0x04f4,	// (0x0007670c) list_single_graphic_popup_conf_pane_g1

0x04fc,	// (0x00076714) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x000855a3) list_single_graphic_popup_conf_pane_g

0x0504,	// (0x0007671c) list_single_graphic_popup_conf_pane_t1

0x0512,	// (0x0007672a) linegrid_cams_pane_g1

0x849f,	// (0x0007e6b7) linegrid_cams_pane_g2

0xede0,	// (0x00084ff8) linegrid_cams_pane_g3

0x051b,	// (0x00076733) linegrid_cams_pane_g4

0x84a8,	// (0x0007e6c0) linegrid_cams_pane_g5

0x84b1,	// (0x0007e6c9) linegrid_cams_pane_g6

0xee91,	// (0x000850a9) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x000855a8) linegrid_cams_pane_g

0x0524,	// (0x0007673c) popup_clock_analogue_window

0x0524,	// (0x0007673c) popup_clock_digital_window

0xe994,	// (0x00084bac) popup_phob_thumbnail_window

0xed28,	// (0x00084f40) call_video_uplink_pane_g1

0x052d,	// (0x00076745) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x000855b7) call_video_uplink_pane_g

0xee5e,	// (0x00085076) video_uplink_pane

0x0535,	// (0x0007674d) mce_image_pane_g1

0x84ba,	// (0x0007e6d2) mce_image_pane_g2

0x84c2,	// (0x0007e6da) mce_image_pane_g3

0x84ca,	// (0x0007e6e2) mce_image_pane_g4

0x84d2,	// (0x0007e6ea) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x000855bc) mce_image_pane_g

0x053f,	// (0x00076757) control_top_pane_stacon_cp01_ParamLimits

0x053f,	// (0x00076757) control_top_pane_stacon_cp01

0x0553,	// (0x0007676b) uni_indicator_pane_stacon_cp01_ParamLimits

0x0553,	// (0x0007676b) uni_indicator_pane_stacon_cp01

0x0564,	// (0x0007677c) bg_popup_sub_pane_cp03

0x84da,	// (0x0007e6f2) chi_dic_find_pane

0x84e2,	// (0x0007e6fa) listscroll_chi_dic_pane

0x84eb,	// (0x0007e703) main_pane_chidic_g1

0x056e,	// (0x00076786) chi_dic_find_pane_t1

0x057c,	// (0x00076794) find_chidic_pane

0x0585,	// (0x0007679d) chi_dic_list_pane_ParamLimits

0x0585,	// (0x0007679d) chi_dic_list_pane

0x0596,	// (0x000767ae) scroll_pane_cp020

0x059e,	// (0x000767b6) find_chidic_pane_t1

0xe994,	// (0x00084bac) input_focus_pane_cp06

0x84fe,	// (0x0007e716) list_chi_dic_pane_ParamLimits

0x84fe,	// (0x0007e716) list_chi_dic_pane

0x851b,	// (0x0007e733) list_chi_dic_pane_t1_ParamLimits

0x851b,	// (0x0007e733) list_chi_dic_pane_t1

0xe994,	// (0x00084bac) list_highlight_pane_cp020

0x05ad,	// (0x000767c5) bg_cale_heading_pane_g1

0x852e,	// (0x0007e746) bg_cale_heading_pane_g2

0x8536,	// (0x0007e74e) bg_cale_heading_pane_g3

0x853e,	// (0x0007e756) bg_cale_heading_pane_g4

0x8548,	// (0x0007e760) bg_cale_heading_pane_g5

0x8552,	// (0x0007e76a) bg_cale_heading_pane_g6

0x855a,	// (0x0007e772) bg_cale_heading_pane_g7

0x8562,	// (0x0007e77a) bg_cale_heading_pane_g8

0x856c,	// (0x0007e784) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x000855c7) bg_cale_heading_pane_g

0x05ad,	// (0x000767c5) bg_cale_side_pane_g1

0x8576,	// (0x0007e78e) bg_cale_side_pane_g2

0x8580,	// (0x0007e798) bg_cale_side_pane_g3

0x858a,	// (0x0007e7a2) bg_cale_side_pane_g4

0x8594,	// (0x0007e7ac) bg_cale_side_pane_g5

0x859e,	// (0x0007e7b6) bg_cale_side_pane_g6

0x85a8,	// (0x0007e7c0) bg_cale_side_pane_g7

0x85b2,	// (0x0007e7ca) bg_cale_side_pane_g8

0x85ba,	// (0x0007e7d2) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x000855da) bg_cale_side_pane_g

0x85c2,	// (0x0007e7da) popup_call_status_window_ParamLimits

0x85c2,	// (0x0007e7da) popup_call_status_window

0x05b5,	// (0x000767cd) stacon_top_pane

0x05bd,	// (0x000767d5) status_pane_ParamLimits

0x05bd,	// (0x000767d5) status_pane

0x05d2,	// (0x000767ea) status_small_pane

0x05da,	// (0x000767f2) control_pane

0xe994,	// (0x00084bac) stacon_bottom_pane

0x05e2,	// (0x000767fa) list_single_mce_smart_pane_t1_ParamLimits

0x05e2,	// (0x000767fa) list_single_mce_smart_pane_t1

0x05f5,	// (0x0007680d) list_single_mce_smart_pane_t2_ParamLimits

0x05f5,	// (0x0007680d) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x000855ed) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x000855ed) list_single_mce_smart_pane_t

0x85ce,	// (0x0007e7e6) compass_pane

0x85da,	// (0x0007e7f2) main_location2_pane_t1

0x85ee,	// (0x0007e806) main_location2_pane_t2

0x8602,	// (0x0007e81a) main_location2_pane_t3

0x0003,

0xf3da,	// (0x000855f2) main_location2_pane_t

0x0614,	// (0x0007682c) compass_pane_g1_ParamLimits

0x0614,	// (0x0007682c) compass_pane_g1

0x864c,	// (0x0007e864) compass_pane_t1

0x865b,	// (0x0007e873) compass_pane_t2

0x0005,

0xf3e3,	// (0x000855fb) compass_pane_t

0x86a6,	// (0x0007e8be) text_secondary_cp61

0x0628,	// (0x00076840) navi_pane_cams_g5

0x064b,	// (0x00076863) navi_pane_im_t1

0x0659,	// (0x00076871) navi_pane_mp_g1_ParamLimits

0x0659,	// (0x00076871) navi_pane_mp_g1

0x066d,	// (0x00076885) navi_pane_mp_g2_ParamLimits

0x066d,	// (0x00076885) navi_pane_mp_g2

0x0679,	// (0x00076891) navi_pane_mp_g3_ParamLimits

0x0679,	// (0x00076891) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0008560f) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0008560f) navi_pane_mp_g

0x0685,	// (0x0007689d) navi_pane_mp_t1

0x0693,	// (0x000768ab) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x00085616) navi_pane_mp_t

0x06cf,	// (0x000768e7) navi_pane_vt_g1

0x0685,	// (0x0007689d) navi_pane_vt_t1

0x06d7,	// (0x000768ef) navi_slider_pane

0x06df,	// (0x000768f7) zooming_pane

0x06e7,	// (0x000768ff) navi_slider_pane_g1

0x87db,	// (0x0007e9f3) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0008561d) navi_slider_pane_g

0x070b,	// (0x00076923) aid_levels_zoom

0x0713,	// (0x0007692b) zooming_pane_g1

0x071b,	// (0x00076933) zooming_pane_g2

0x071b,	// (0x00076933) zooming_pane_g3

0x0002,

0xf414,	// (0x0008562c) zooming_pane_g

0x0723,	// (0x0007693b) level_10_zoom

0x072c,	// (0x00076944) level_11_zoom

0x0735,	// (0x0007694d) level_1_zoom

0x073e,	// (0x00076956) level_2_zoom

0x0747,	// (0x0007695f) level_3_zoom

0x0750,	// (0x00076968) level_4_zoom

0x0759,	// (0x00076971) level_5_zoom

0x0762,	// (0x0007697a) level_6_zoom

0x076b,	// (0x00076983) level_7_zoom

0x0774,	// (0x0007698c) level_8_zoom

0x077d,	// (0x00076995) level_9_zoom

0x078e,	// (0x000769a6) popup_phob_thumbnail_window_g1

0x0796,	// (0x000769ae) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x00085633) popup_phob_thumbnail_window_g

0x1aab,	// (0x00077cc3) level_1_location

0x1ab3,	// (0x00077ccb) level_2_location

0x1abb,	// (0x00077cd3) level_3_location

0x1ac3,	// (0x00077cdb) level_4_location

0x06df,	// (0x000768f7) level_5_location

0x87ed,	// (0x0007ea05) mce_icon_pane_g1

0x87f5,	// (0x0007ea0d) mce_icon_pane_g2

0x0001,

0xf420,	// (0x00085638) mce_icon_pane_g

0x87fd,	// (0x0007ea15) main_mup_pane_g1_ParamLimits

0x87fd,	// (0x0007ea15) main_mup_pane_g1

0x8815,	// (0x0007ea2d) main_mup_pane_g2_ParamLimits

0x8815,	// (0x0007ea2d) main_mup_pane_g2

0x8831,	// (0x0007ea49) main_mup_pane_g3_ParamLimits

0x8831,	// (0x0007ea49) main_mup_pane_g3

0x884d,	// (0x0007ea65) main_mup_pane_g4_ParamLimits

0x884d,	// (0x0007ea65) main_mup_pane_g4

0x8869,	// (0x0007ea81) main_mup_pane_g5_ParamLimits

0x8869,	// (0x0007ea81) main_mup_pane_g5

0x888a,	// (0x0007eaa2) main_mup_pane_g6_ParamLimits

0x888a,	// (0x0007eaa2) main_mup_pane_g6

0x88a6,	// (0x0007eabe) main_mup_pane_g7_ParamLimits

0x88a6,	// (0x0007eabe) main_mup_pane_g7

0x88c2,	// (0x0007eada) main_mup_pane_g8_ParamLimits

0x88c2,	// (0x0007eada) main_mup_pane_g8

0x88de,	// (0x0007eaf6) main_mup_pane_g9_ParamLimits

0x88de,	// (0x0007eaf6) main_mup_pane_g9

0x88fd,	// (0x0007eb15) main_mup_pane_g10_ParamLimits

0x88fd,	// (0x0007eb15) main_mup_pane_g10

0x891c,	// (0x0007eb34) main_mup_pane_g11_ParamLimits

0x891c,	// (0x0007eb34) main_mup_pane_g11

0x8934,	// (0x0007eb4c) main_mup_pane_g12_ParamLimits

0x8934,	// (0x0007eb4c) main_mup_pane_g12

0x8942,	// (0x0007eb5a) main_mup_pane_g13_ParamLimits

0x8942,	// (0x0007eb5a) main_mup_pane_g13

0x000c,

0xf425,	// (0x0008563d) main_mup_pane_g_ParamLimits

0xf425,	// (0x0008563d) main_mup_pane_g

0x8958,	// (0x0007eb70) main_mup_pane_t1_ParamLimits

0x8958,	// (0x0007eb70) main_mup_pane_t1

0x8975,	// (0x0007eb8d) main_mup_pane_t2_ParamLimits

0x8975,	// (0x0007eb8d) main_mup_pane_t2

0x898f,	// (0x0007eba7) main_mup_pane_t3_ParamLimits

0x898f,	// (0x0007eba7) main_mup_pane_t3

0x89a9,	// (0x0007ebc1) main_mup_pane_t4_ParamLimits

0x89a9,	// (0x0007ebc1) main_mup_pane_t4

0x89bb,	// (0x0007ebd3) main_mup_pane_t5_ParamLimits

0x89bb,	// (0x0007ebd3) main_mup_pane_t5

0x89cd,	// (0x0007ebe5) main_mup_pane_t6_ParamLimits

0x89cd,	// (0x0007ebe5) main_mup_pane_t6

0x0005,

0xf440,	// (0x00085658) main_mup_pane_t_ParamLimits

0xf440,	// (0x00085658) main_mup_pane_t

0x89e3,	// (0x0007ebfb) mup_progress_pane_ParamLimits

0x89e3,	// (0x0007ebfb) mup_progress_pane

0x89ef,	// (0x0007ec07) mup_visualizer_pane_ParamLimits

0x89ef,	// (0x0007ec07) mup_visualizer_pane

0x8a2d,	// (0x0007ec45) mup_volume_pane_ParamLimits

0x8a2d,	// (0x0007ec45) mup_volume_pane

0x079e,	// (0x000769b6) mup_visualizer_pane_g1_ParamLimits

0x079e,	// (0x000769b6) mup_visualizer_pane_g1

0x079e,	// (0x000769b6) mup_visualizer_pane_g2_ParamLimits

0x079e,	// (0x000769b6) mup_visualizer_pane_g2

0x0614,	// (0x0007682c) mup_visualizer_pane_g3_ParamLimits

0x0614,	// (0x0007682c) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x00085665) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x00085665) mup_visualizer_pane_g

0xed28,	// (0x00084f40) mup_volume_pane_g1

0x07b4,	// (0x000769cc) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0008566c) mup_volume_pane_g

0xed28,	// (0x00084f40) mup_progress_pane_g1

0x07bd,	// (0x000769d5) mup_progress_pane_g2

0x07c6,	// (0x000769de) mup_progress_pane_g3

0x0002,

0xf459,	// (0x00085671) mup_progress_pane_g

0xe994,	// (0x00084bac) bg_popup_window_pane_cp05

0x07cf,	// (0x000769e7) heading_pane_cp02_ParamLimits

0x07cf,	// (0x000769e7) heading_pane_cp02

0x07e9,	// (0x00076a01) list_popup_blid_pane

0x07f1,	// (0x00076a09) list_blid_sat_info_pane_ParamLimits

0x07f1,	// (0x00076a09) list_blid_sat_info_pane

0x0804,	// (0x00076a1c) list_blid_sat_info_pane_g1

0x080c,	// (0x00076a24) list_blid_sat_info_pane_t1

0x8b38,	// (0x0007ed50) mup_equalizer_pane_ParamLimits

0x8b38,	// (0x0007ed50) mup_equalizer_pane

0x8b59,	// (0x0007ed71) mup_equalizer_pane_cp1_ParamLimits

0x8b59,	// (0x0007ed71) mup_equalizer_pane_cp1

0x8b7a,	// (0x0007ed92) mup_equalizer_pane_cp2_ParamLimits

0x8b7a,	// (0x0007ed92) mup_equalizer_pane_cp2

0x8b9b,	// (0x0007edb3) mup_equalizer_pane_cp3_ParamLimits

0x8b9b,	// (0x0007edb3) mup_equalizer_pane_cp3

0x8bbc,	// (0x0007edd4) mup_equalizer_pane_cp4_ParamLimits

0x8bbc,	// (0x0007edd4) mup_equalizer_pane_cp4

0x8bdd,	// (0x0007edf5) mup_equalizer_pane_cp5

0x8bf3,	// (0x0007ee0b) mup_equalizer_pane_cp6

0x8c0b,	// (0x0007ee23) mup_equalizer_pane_cp7

0x19c9,	// (0x00077be1) bg_popup_call_poc_act_pane_g9

0x19d1,	// (0x00077be9) bg_popup_call_poc_act_pane_g10

0x19d9,	// (0x00077bf1) bg_popup_call_poc_act_pane_g11

0x000a,

0xebef,	// (0x00084e07) mup_scale_pane

0xed28,	// (0x00084f40) mup_scale_pane_g1

0x081a,	// (0x00076a32) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0008568d) mup_scale_pane_g

0x083e,	// (0x00076a56) msg_data_pane

0x0846,	// (0x00076a5e) scroll_pane_cp017

0x509a,	// (0x0007b2b2) bg_list_pane_cp04_ParamLimits

0x509a,	// (0x0007b2b2) bg_list_pane_cp04

0x084e,	// (0x00076a66) msg_data_pane_g1

0x8c35,	// (0x0007ee4d) msg_data_pane_g2

0x84c2,	// (0x0007e6da) msg_data_pane_g3

0x8c3d,	// (0x0007ee55) msg_data_pane_g4

0x8c45,	// (0x0007ee5d) msg_data_pane_g5

0x8c4d,	// (0x0007ee65) msg_data_pane_g6

0x8c55,	// (0x0007ee6d) msg_data_pane_g7

0x0006,

0xf484,	// (0x0008569c) msg_data_pane_g

0x50be,	// (0x0007b2d6) msg_text_pane_ParamLimits

0x50be,	// (0x0007b2d6) msg_text_pane

0x8c5d,	// (0x0007ee75) qrid_highlight_pane_cp011_ParamLimits

0x8c5d,	// (0x0007ee75) qrid_highlight_pane_cp011

0xe994,	// (0x00084bac) msg_body_pane

0xe994,	// (0x00084bac) msg_header_pane

0x0856,	// (0x00076a6e) input_focus_pane_cp07

0x510e,	// (0x0007b326) msg_header_pane_t1_ParamLimits

0x510e,	// (0x0007b326) msg_header_pane_t1

0x5120,	// (0x0007b338) msg_header_pane_t2_ParamLimits

0x5120,	// (0x0007b338) msg_header_pane_t2

0x0001,

0xf498,	// (0x000856b0) msg_header_pane_t_ParamLimits

0xf498,	// (0x000856b0) msg_header_pane_t

0x086b,	// (0x00076a83) msg_body_pane_g1

0x5132,	// (0x0007b34a) msg_body_pane_t1_ParamLimits

0x5132,	// (0x0007b34a) msg_body_pane_t1

0x5163,	// (0x0007b37b) msg_body_pane_t2_ParamLimits

0x5163,	// (0x0007b37b) msg_body_pane_t2

0x5175,	// (0x0007b38d) msg_body_pane_t3_ParamLimits

0x5175,	// (0x0007b38d) msg_body_pane_t3

0x0002,

0xf49d,	// (0x000856b5) msg_body_pane_t_ParamLimits

0xf49d,	// (0x000856b5) msg_body_pane_t

0x8cd4,	// (0x0007eeec) main_viewer_pane_g1_ParamLimits

0x8cd4,	// (0x0007eeec) main_viewer_pane_g1

0x8ce0,	// (0x0007eef8) main_viewer_pane_g2_ParamLimits

0x8ce0,	// (0x0007eef8) main_viewer_pane_g2

0x8cec,	// (0x0007ef04) main_viewer_pane_g3_ParamLimits

0x8cec,	// (0x0007ef04) main_viewer_pane_g3

0x8cfd,	// (0x0007ef15) main_viewer_pane_g4_ParamLimits

0x8cfd,	// (0x0007ef15) main_viewer_pane_g4

0x8d0e,	// (0x0007ef26) main_viewer_pane_g5_ParamLimits

0x8d0e,	// (0x0007ef26) main_viewer_pane_g5

0x8d0e,	// (0x0007ef26) main_viewer_pane_g7_ParamLimits

0x8d0e,	// (0x0007ef26) main_viewer_pane_g7

0x8d20,	// (0x0007ef38) main_viewer_pane_g8_ParamLimits

0x8d20,	// (0x0007ef38) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x000856c5) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x000856c5) main_viewer_pane_g

0x0873,	// (0x00076a8b) viewer_content_pane_ParamLimits

0x0873,	// (0x00076a8b) viewer_content_pane

0x8d58,	// (0x0007ef70) main_postcard_pane_g1_ParamLimits

0x8d58,	// (0x0007ef70) main_postcard_pane_g1

0x8d66,	// (0x0007ef7e) main_postcard_pane_g2_ParamLimits

0x8d66,	// (0x0007ef7e) main_postcard_pane_g2

0x8d74,	// (0x0007ef8c) main_postcard_pane_g3_ParamLimits

0x8d74,	// (0x0007ef8c) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x000856d6) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x000856d6) main_postcard_pane_g

0x8d84,	// (0x0007ef9c) main_postcard_pane_g4

0x1b98,	// (0x00077db0) smil_status_volume_pane_g2

0x8db0,	// (0x0007efc8) postcard_pane_ParamLimits

0x8db0,	// (0x0007efc8) postcard_pane

0x079e,	// (0x000769b6) postcard_pane_g1_ParamLimits

0x079e,	// (0x000769b6) postcard_pane_g1

0x8de2,	// (0x0007effa) postcard_pane_g2_ParamLimits

0x8de2,	// (0x0007effa) postcard_pane_g2

0x8dee,	// (0x0007f006) postcard_pane_g3_ParamLimits

0x8dee,	// (0x0007f006) postcard_pane_g3

0x088f,	// (0x00076aa7) postcard_pane_g4_ParamLimits

0x088f,	// (0x00076aa7) postcard_pane_g4

0x8dfa,	// (0x0007f012) postcard_pane_g5_ParamLimits

0x8dfa,	// (0x0007f012) postcard_pane_g5

0x8e06,	// (0x0007f01e) postcard_pane_g6_ParamLimits

0x8e06,	// (0x0007f01e) postcard_pane_g6

0x0881,	// (0x00076a99) postcard_pane_g7_ParamLimits

0x0881,	// (0x00076a99) postcard_pane_g7

0x0006,

0xf4cb,	// (0x000856e3) postcard_pane_g_ParamLimits

0xf4cb,	// (0x000856e3) postcard_pane_g

0x8e12,	// (0x0007f02a) main_mp2_pane_g1_ParamLimits

0x8e12,	// (0x0007f02a) main_mp2_pane_g1

0x8e1e,	// (0x0007f036) main_mp2_pane_g2_ParamLimits

0x8e1e,	// (0x0007f036) main_mp2_pane_g2

0x8e2a,	// (0x0007f042) main_mp2_pane_g3_ParamLimits

0x8e2a,	// (0x0007f042) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x000856f2) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x000856f2) main_mp2_pane_g

0x8e36,	// (0x0007f04e) main_mp2_pane_t1_ParamLimits

0x8e36,	// (0x0007f04e) main_mp2_pane_t1

0x8e4d,	// (0x0007f065) main_mp2_pane_t2_ParamLimits

0x8e4d,	// (0x0007f065) main_mp2_pane_t2

0x8e5f,	// (0x0007f077) main_mp2_pane_t3_ParamLimits

0x8e5f,	// (0x0007f077) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x000856f9) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x000856f9) main_mp2_pane_t

0x089d,	// (0x00076ab5) pec_content_pane_ParamLimits

0x089d,	// (0x00076ab5) pec_content_pane

0xf04d,	// (0x00085265) scroll_pane_cp015

0x08af,	// (0x00076ac7) pec_attribute_pane_ParamLimits

0x08af,	// (0x00076ac7) pec_attribute_pane

0x8e71,	// (0x0007f089) pec_content_pane_g1_ParamLimits

0x8e71,	// (0x0007f089) pec_content_pane_g1

0x08bf,	// (0x00076ad7) pec_content_pane_t1_ParamLimits

0x08bf,	// (0x00076ad7) pec_content_pane_t1

0x08d1,	// (0x00076ae9) pec_content_pane_t2_ParamLimits

0x08d1,	// (0x00076ae9) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x00085700) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x00085700) pec_content_pane_t

0x8e7d,	// (0x0007f095) list_single_graphic_pane_cp01_ParamLimits

0x8e7d,	// (0x0007f095) list_single_graphic_pane_cp01

0xebef,	// (0x00084e07) bg_popup_sub_pane_cp04

0x08e3,	// (0x00076afb) popup_mup_playback_window_g1

0x08ef,	// (0x00076b07) popup_mup_playback_window_t1

0x0904,	// (0x00076b1c) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x00085705) popup_mup_playback_window_t

0x093b,	// (0x00076b53) main_image_pane_g1_ParamLimits

0x093b,	// (0x00076b53) main_image_pane_g1

0x097e,	// (0x00076b96) scroll_pane_cp018_ParamLimits

0x097e,	// (0x00076b96) scroll_pane_cp018

0x0996,	// (0x00076bae) scroll_pane_cp016_ParamLimits

0x0996,	// (0x00076bae) scroll_pane_cp016

0x8f1d,	// (0x0007f135) smil2_image_pane_ParamLimits

0x8f1d,	// (0x0007f135) smil2_image_pane

0x8f51,	// (0x0007f169) smil2_root_pane_ParamLimits

0x8f51,	// (0x0007f169) smil2_root_pane

0x8f7d,	// (0x0007f195) smil2_text_pane_ParamLimits

0x8f7d,	// (0x0007f195) smil2_text_pane

0xe994,	// (0x00084bac) bg_list_pane_cp06

0x09e7,	// (0x00076bff) grid_radio_pane

0xe994,	// (0x00084bac) bg_popup_window_pane_cp06

0x09ef,	// (0x00076c07) main_fmradio_pane_t1

0x0457,	// (0x0007666f) heading_pane_cp04

0x09fd,	// (0x00076c15) main_fmradio_pane_t2

0x19e1,	// (0x00077bf9) popup_cale_lunar_info_window_g1

0x0a0b,	// (0x00076c23) main_fmradio_pane_t3

0x19e9,	// (0x00077c01) popup_cale_lunar_info_window_g2

0x0a19,	// (0x00076c31) main_fmradio_pane_t4

0x0001,

0x0a27,	// (0x00076c3f) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x000857e0) popup_cale_lunar_info_window_g

0xf502,	// (0x0008571a) main_fmradio_pane_t

0x0a35,	// (0x00076c4d) wait_bar_pane_cp03

0x0a3d,	// (0x00076c55) cell_fmradio_pane_ParamLimits

0x0a3d,	// (0x00076c55) cell_fmradio_pane

0x0881,	// (0x00076a99) cell_fmradio_pane_g1_ParamLimits

0x0881,	// (0x00076a99) cell_fmradio_pane_g1

0xe994,	// (0x00084bac) grid_highlight_pane_cp011

0x0a50,	// (0x00076c68) poc_content_pane_ParamLimits

0x0a50,	// (0x00076c68) poc_content_pane

0x0a62,	// (0x00076c7a) scroll_pane_cp019

0x8fbd,	// (0x0007f1d5) popup_call_poc_act_window_ParamLimits

0x8fbd,	// (0x0007f1d5) popup_call_poc_act_window

0x8fca,	// (0x0007f1e2) popup_call_poc_inact_window_ParamLimits

0x8fca,	// (0x0007f1e2) popup_call_poc_inact_window

0xf59f,	// (0x000857b7) bg_popup_call_poc_act_pane_g

0x1959,	// (0x00077b71) bg_popup_call_poc_inact_pane_g1

0x1961,	// (0x00077b79) bg_popup_call_poc_inact_pane_g2

0x0a6a,	// (0x00076c82) popup_call_poc_act_window_g2

0x1969,	// (0x00077b81) bg_popup_call_poc_inact_pane_g3

0x1971,	// (0x00077b89) bg_popup_call_poc_inact_pane_g4

0x1979,	// (0x00077b91) bg_popup_call_poc_inact_pane_g5

0x0a72,	// (0x00076c8a) popup_call_poc_act_window_t1_ParamLimits

0x0a72,	// (0x00076c8a) popup_call_poc_act_window_t1

0x0a9a,	// (0x00076cb2) popup_call_poc_act_window_t2_ParamLimits

0x0a9a,	// (0x00076cb2) popup_call_poc_act_window_t2

0x0ac2,	// (0x00076cda) popup_call_poc_act_window_t3_ParamLimits

0x0ac2,	// (0x00076cda) popup_call_poc_act_window_t3

0x0aea,	// (0x00076d02) popup_call_poc_act_window_t4_ParamLimits

0x0aea,	// (0x00076d02) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x00085725) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x00085725) popup_call_poc_act_window_t

0x1981,	// (0x00077b99) bg_popup_call_poc_inact_pane_g6

0x1989,	// (0x00077ba1) bg_popup_call_poc_inact_pane_g7

0x1991,	// (0x00077ba9) bg_popup_call_poc_inact_pane_g8

0x0afc,	// (0x00076d14) popup_call_poc_inact_window_g2

0x1999,	// (0x00077bb1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x000857a4) bg_popup_call_poc_inact_pane_g

0x0b04,	// (0x00076d1c) popup_call_poc_inact_window_t1_ParamLimits

0x0b04,	// (0x00076d1c) popup_call_poc_inact_window_t1

0x0b19,	// (0x00076d31) popup_call_poc_inact_window_t2_ParamLimits

0x0b19,	// (0x00076d31) popup_call_poc_inact_window_t2

0x0b2e,	// (0x00076d46) popup_call_poc_inact_window_t3_ParamLimits

0x0b2e,	// (0x00076d46) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0008572e) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0008572e) popup_call_poc_inact_window_t

0x1b1e,	// (0x00077d36) context_pane_ParamLimits

0x95f2,	// (0x0007f80a) signal_pane_ParamLimits

0x06df,	// (0x000768f7) main_call2_pane

0x956b,	// (0x0007f783) popup_phob_thumbnail2_window_ParamLimits

0x956b,	// (0x0007f783) popup_phob_thumbnail2_window

0x8c82,	// (0x0007ee9a) aid_hotspot_pointer_arrow_pane

0x8c8a,	// (0x0007eea2) aid_hotspot_pointer_hand_pane

0x92f0,	// (0x0007f508) phob_pre_status_pane_g5

0x6de9,	// (0x0007d001) cams_zoom_pane_ParamLimits

0x6df5,	// (0x0007d00d) image_vga_pane_ParamLimits

0x6e04,	// (0x0007d01c) main_camera_pane_g1_ParamLimits

0x6e12,	// (0x0007d02a) main_camera_pane_g2_ParamLimits

0x6e1e,	// (0x0007d036) main_camera_pane_g3_ParamLimits

0x6e2a,	// (0x0007d042) main_camera_pane_g4_ParamLimits

0x6e36,	// (0x0007d04e) main_camera_pane_g5_ParamLimits

0x6e42,	// (0x0007d05a) main_camera_pane_g6_ParamLimits

0x6e4e,	// (0x0007d066) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0008542d) main_camera_pane_g_ParamLimits

0x6e5a,	// (0x0007d072) main_camera_pane_t1_ParamLimits

0x6e6c,	// (0x0007d084) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0008543e) main_camera_pane_t_ParamLimits

0xebef,	// (0x00084e07) bg_popup_preview_window_pane_cp01_ParamLimits

0xebef,	// (0x00084e07) bg_popup_preview_window_pane_cp01

0x0b43,	// (0x00076d5b) popup_phob_thumbnail2_window_g1_ParamLimits

0x0b43,	// (0x00076d5b) popup_phob_thumbnail2_window_g1

0xe994,	// (0x00084bac) call2_cli_visual_pane

0x8fe6,	// (0x0007f1fe) popup_call2_audio_conf_window_ParamLimits

0x8fe6,	// (0x0007f1fe) popup_call2_audio_conf_window

0x8ffb,	// (0x0007f213) popup_call2_audio_first_window_ParamLimits

0x8ffb,	// (0x0007f213) popup_call2_audio_first_window

0x9099,	// (0x0007f2b1) popup_call2_audio_in_window_ParamLimits

0x9099,	// (0x0007f2b1) popup_call2_audio_in_window

0x90db,	// (0x0007f2f3) popup_call2_audio_out_window_ParamLimits

0x90db,	// (0x0007f2f3) popup_call2_audio_out_window

0x913d,	// (0x0007f355) popup_call2_audio_second_window_ParamLimits

0x913d,	// (0x0007f355) popup_call2_audio_second_window

0x919b,	// (0x0007f3b3) popup_call2_audio_wait_window_ParamLimits

0x919b,	// (0x0007f3b3) popup_call2_audio_wait_window

0xe994,	// (0x00084bac) bg_popup_call2_act_pane_cp03

0xebd1,	// (0x00084de9) list_conf_pane_cp

0x0b4f,	// (0x00076d67) popup_call2_audio_conf_window_t1

0x0b5d,	// (0x00076d75) list_single_graphic_popup_conf2_pane_ParamLimits

0x0b5d,	// (0x00076d75) list_single_graphic_popup_conf2_pane

0x04eb,	// (0x00076703) list_highlight_pane_cp04

0x0b70,	// (0x00076d88) list_single_graphic_popup_conf2_pane_g1

0x04fc,	// (0x00076714) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x00085735) list_single_graphic_popup_conf2_pane_g

0x0b7a,	// (0x00076d92) list_single_graphic_popup_conf2_pane_t1

0x0b88,	// (0x00076da0) bg_popup_call2_act_pane_cp01_ParamLimits

0x0b88,	// (0x00076da0) bg_popup_call2_act_pane_cp01

0x0c12,	// (0x00076e2a) call_type_pane_cp05_ParamLimits

0x0c12,	// (0x00076e2a) call_type_pane_cp05

0x0c66,	// (0x00076e7e) popup_call2_audio_second_window_g1_ParamLimits

0x0c66,	// (0x00076e7e) popup_call2_audio_second_window_g1

0x0cba,	// (0x00076ed2) popup_call2_audio_second_window_g2_ParamLimits

0x0cba,	// (0x00076ed2) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0008573a) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0008573a) popup_call2_audio_second_window_g

0x0d1f,	// (0x00076f37) popup_call2_audio_second_window_t1_ParamLimits

0x0d1f,	// (0x00076f37) popup_call2_audio_second_window_t1

0x0dda,	// (0x00076ff2) popup_call2_audio_second_window_t2_ParamLimits

0x0dda,	// (0x00076ff2) popup_call2_audio_second_window_t2

0x0e2d,	// (0x00077045) popup_call2_audio_second_window_t3_ParamLimits

0x0e2d,	// (0x00077045) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x00085741) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x00085741) popup_call2_audio_second_window_t

0xe994,	// (0x00084bac) bg_popup_call2_in_pane_cp02

0xe99e,	// (0x00084bb6) call_type_pane_cp04

0xe9a6,	// (0x00084bbe) popup_call2_audio_wait_window_g1

0xe9ae,	// (0x00084bc6) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0008531a) popup_call2_audio_wait_window_g

0xe9b6,	// (0x00084bce) popup_call2_audio_wait_window_t3

0x0f20,	// (0x00077138) bg_popup_call2_act_pane_ParamLimits

0x0f20,	// (0x00077138) bg_popup_call2_act_pane

0x0fe0,	// (0x000771f8) call_type_pane_cp03_ParamLimits

0x0fe0,	// (0x000771f8) call_type_pane_cp03

0x1044,	// (0x0007725c) popup_call2_audio_first_window_g1_ParamLimits

0x1044,	// (0x0007725c) popup_call2_audio_first_window_g1

0x10b4,	// (0x000772cc) popup_call2_audio_first_window_g2_ParamLimits

0x10b4,	// (0x000772cc) popup_call2_audio_first_window_g2

0x079e,	// (0x000769b6) popup_call2_audio_first_window_g3_ParamLimits

0x079e,	// (0x000769b6) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0008574a) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0008574a) popup_call2_audio_first_window_g

0x1192,	// (0x000773aa) popup_call2_audio_first_window_t1_ParamLimits

0x1192,	// (0x000773aa) popup_call2_audio_first_window_t1

0x1295,	// (0x000774ad) popup_call2_audio_first_window_t4_ParamLimits

0x1295,	// (0x000774ad) popup_call2_audio_first_window_t4

0x1384,	// (0x0007759c) popup_call2_audio_first_window_t5_ParamLimits

0x1384,	// (0x0007759c) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x00085755) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x00085755) popup_call2_audio_first_window_t

0xebe7,	// (0x00084dff) bg_popup_call2_act_pane_g1

0x19f1,	// (0x00077c09) popup_cale_lunar_info_window_t1

0x19ff,	// (0x00077c17) popup_cale_lunar_info_window_t2

0x1a0d,	// (0x00077c25) popup_cale_lunar_info_window_t3

0xe994,	// (0x00084bac) bg_popup_call2_bubble_pane

0x1485,	// (0x0007769d) bg_popup_call2_in_pane_cp01_ParamLimits

0x1485,	// (0x0007769d) bg_popup_call2_in_pane_cp01

0xe254,	// (0x0008446c) call_type_pane_cp02

0x14cd,	// (0x000776e5) popup_call2_audio_out_window_g1_ParamLimits

0x14cd,	// (0x000776e5) popup_call2_audio_out_window_g1

0x14f9,	// (0x00077711) popup_call2_audio_out_window_g2_ParamLimits

0x14f9,	// (0x00077711) popup_call2_audio_out_window_g2

0x1521,	// (0x00077739) popup_call2_audio_out_window_g3_ParamLimits

0x1521,	// (0x00077739) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0008575e) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0008575e) popup_call2_audio_out_window_g

0x155c,	// (0x00077774) popup_call2_audio_out_window_t1_ParamLimits

0x155c,	// (0x00077774) popup_call2_audio_out_window_t1

0x15bb,	// (0x000777d3) popup_call2_audio_out_window_t2_ParamLimits

0x15bb,	// (0x000777d3) popup_call2_audio_out_window_t2

0x160f,	// (0x00077827) popup_call2_audio_out_window_t3_ParamLimits

0x160f,	// (0x00077827) popup_call2_audio_out_window_t3

0x1625,	// (0x0007783d) popup_call2_audio_out_window_t4_ParamLimits

0x1625,	// (0x0007783d) popup_call2_audio_out_window_t4

0x163b,	// (0x00077853) popup_call2_audio_out_window_t5_ParamLimits

0x163b,	// (0x00077853) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x00085767) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x00085767) popup_call2_audio_out_window_t

0x169f,	// (0x000778b7) bg_popup_call2_in_pane_ParamLimits

0x169f,	// (0x000778b7) bg_popup_call2_in_pane

0x16fb,	// (0x00077913) popup_call2_audio_in_window_g1_ParamLimits

0x16fb,	// (0x00077913) popup_call2_audio_in_window_g1

0x1733,	// (0x0007794b) popup_call2_audio_in_window_g2_ParamLimits

0x1733,	// (0x0007794b) popup_call2_audio_in_window_g2

0x176b,	// (0x00077983) popup_call2_audio_in_window_g3_ParamLimits

0x176b,	// (0x00077983) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x00085774) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x00085774) popup_call2_audio_in_window_g

0x17c3,	// (0x000779db) popup_call2_audio_in_window_t1_ParamLimits

0x17c3,	// (0x000779db) popup_call2_audio_in_window_t1

0x1843,	// (0x00077a5b) popup_call2_audio_in_window_t2_ParamLimits

0x1843,	// (0x00077a5b) popup_call2_audio_in_window_t2

0x18c3,	// (0x00077adb) popup_call2_audio_in_window_t3_ParamLimits

0x18c3,	// (0x00077adb) popup_call2_audio_in_window_t3

0x18dd,	// (0x00077af5) popup_call2_audio_in_window_t4_ParamLimits

0x18dd,	// (0x00077af5) popup_call2_audio_in_window_t4

0x18ef,	// (0x00077b07) popup_call2_audio_in_window_t5_ParamLimits

0x18ef,	// (0x00077b07) popup_call2_audio_in_window_t5

0x1904,	// (0x00077b1c) popup_call2_audio_in_window_t6_ParamLimits

0x1904,	// (0x00077b1c) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0008577d) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0008577d) popup_call2_audio_in_window_t

0xebe7,	// (0x00084dff) bg_popup_call2_in_pane_g1

0x1a1b,	// (0x00077c33) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x000857e5) popup_cale_lunar_info_window_t

0xebef,	// (0x00084e07) bg_popup_call2_rect_pane_ParamLimits

0xebef,	// (0x00084e07) bg_popup_call2_rect_pane

0xe994,	// (0x00084bac) call2_cli_visual_graphic_pane

0xe994,	// (0x00084bac) call2_cli_visual_text_pane

0x96a0,	// (0x0007f8b8) smil_status_volume_pane_g3

0x0002,

0xed28,	// (0x00084f40) call2_cli_visual_graphic_pane_g1

0xed28,	// (0x00084f40) call2_cli_visual_graphic_pane_g2

0xed28,	// (0x00084f40) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0008578a) call2_cli_visual_graphic_pane_g

0x1919,	// (0x00077b31) bg_popup_call2_rect_pane_g1

0xedc6,	// (0x00084fde) bg_popup_call2_rect_pane_g2

0x1921,	// (0x00077b39) bg_popup_call2_rect_pane_g3

0x1929,	// (0x00077b41) bg_popup_call2_rect_pane_g4

0x1931,	// (0x00077b49) bg_popup_call2_rect_pane_g5

0x1939,	// (0x00077b51) bg_popup_call2_rect_pane_g6

0x1941,	// (0x00077b59) bg_popup_call2_rect_pane_g7

0x1949,	// (0x00077b61) bg_popup_call2_rect_pane_g8

0x1951,	// (0x00077b69) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x00085791) bg_popup_call2_rect_pane_g

0x1959,	// (0x00077b71) bg_popup_call2_bubble_pane_g1

0x1961,	// (0x00077b79) bg_popup_call2_bubble_pane_g2

0x1969,	// (0x00077b81) bg_popup_call2_bubble_pane_g3

0x1971,	// (0x00077b89) bg_popup_call2_bubble_pane_g4

0x1979,	// (0x00077b91) bg_popup_call2_bubble_pane_g5

0x1981,	// (0x00077b99) bg_popup_call2_bubble_pane_g6

0x1989,	// (0x00077ba1) bg_popup_call2_bubble_pane_g7

0x1991,	// (0x00077ba9) bg_popup_call2_bubble_pane_g8

0x1999,	// (0x00077bb1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x000857a4) bg_popup_call2_bubble_pane_g

0x681b,	// (0x0007ca33) aid_cale_week_size_cell_pane

0x6e7e,	// (0x0007d096) aid_cams_cif_uncrop_pane_ParamLimits

0x6e7e,	// (0x0007d096) aid_cams_cif_uncrop_pane

0x6fd9,	// (0x0007d1f1) aid_cams_size_cell_ParamLimits

0x6fd9,	// (0x0007d1f1) aid_cams_size_cell

0x6fe5,	// (0x0007d1fd) grid_cams_pane_ParamLimits

0x6ff3,	// (0x0007d20b) linegrid_cams_pane_ParamLimits

0x70e2,	// (0x0007d2fa) call_video_pane_t1

0x7103,	// (0x0007d31b) call_video_pane_t2

0x0001,

0xf279,	// (0x00085491) call_video_pane_t

0x7672,	// (0x0007d88a) aid_cale_month_size_cell_pane_ParamLimits

0x7672,	// (0x0007d88a) aid_cale_month_size_cell_pane

0xf616,	// (0x0008582e) smil_status_volume_pane_g

0x96ad,	// (0x0007f8c5) volume_smil_pane_ParamLimits

0x5f94,	// (0x0007c1ac) aid_popup2_width_pane

0x670f,	// (0x0007c927) cell_qdial_pane_g4_ParamLimits

0x670f,	// (0x0007c927) cell_qdial_pane_g4

0x8628,	// (0x0007e840) aid_blid_cardinal_pane_ParamLimits

0x8638,	// (0x0007e850) aid_blid_destination_pane_ParamLimits

0x8638,	// (0x0007e850) aid_blid_destination_pane

0xebef,	// (0x00084e07) bg_popup_call_poc_act_pane_ParamLimits

0xebef,	// (0x00084e07) bg_popup_call_poc_act_pane

0xebef,	// (0x00084e07) bg_popup_call_poc_inact_pane_ParamLimits

0xebef,	// (0x00084e07) bg_popup_call_poc_inact_pane

0x19a1,	// (0x00077bb9) bg_popup_call_poc_act_pane_g1

0x19a9,	// (0x00077bc1) bg_popup_call_poc_act_pane_g2

0x19b1,	// (0x00077bc9) bg_popup_call_poc_act_pane_g3

0x1971,	// (0x00077b89) bg_popup_call_poc_act_pane_g4

0x1979,	// (0x00077b91) bg_popup_call_poc_act_pane_g5

0x19b9,	// (0x00077bd1) bg_popup_call_poc_act_pane_g6

0x1989,	// (0x00077ba1) bg_popup_call_poc_act_pane_g7

0x19c1,	// (0x00077bd9) bg_popup_call_poc_act_pane_g8

0xe994,	// (0x00084bac) main_usb_pane

0x94a4,	// (0x0007f6bc) popup_cale_lunar_info_window

0x7422,	// (0x0007d63a) im_reading_pane_t1_ParamLimits

0xefa5,	// (0x000851bd) list_im_pane_ParamLimits

0xefb6,	// (0x000851ce) scroll_pane_cp07_ParamLimits

0xe994,	// (0x00084bac) grid_highlight_pane_cp012

0xebef,	// (0x00084e07) mup_scale_pane_ParamLimits

0x079e,	// (0x000769b6) main_usb_pane_g1_ParamLimits

0x079e,	// (0x000769b6) main_usb_pane_g1

0x9213,	// (0x0007f42b) main_usb_pane_g2_ParamLimits

0x9213,	// (0x0007f42b) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x000857ce) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x000857ce) main_usb_pane_g

0x921f,	// (0x0007f437) main_usb_pane_t1_ParamLimits

0x921f,	// (0x0007f437) main_usb_pane_t1

0x9231,	// (0x0007f449) main_usb_pane_t2_ParamLimits

0x9231,	// (0x0007f449) main_usb_pane_t2

0x9243,	// (0x0007f45b) main_usb_pane_t3_ParamLimits

0x9243,	// (0x0007f45b) main_usb_pane_t3

0x9255,	// (0x0007f46d) main_usb_pane_t4_ParamLimits

0x9255,	// (0x0007f46d) main_usb_pane_t4

0x9267,	// (0x0007f47f) main_usb_pane_t5_ParamLimits

0x9267,	// (0x0007f47f) main_usb_pane_t5

0x9279,	// (0x0007f491) main_usb_pane_t6_ParamLimits

0x9279,	// (0x0007f491) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x000857d3) main_usb_pane_t_ParamLimits

0x85ce,	// (0x0007e7e6) aid_text_placing

0x85da,	// (0x0007e7f2) main_location2_pane_t1_ParamLimits

0x85ee,	// (0x0007e806) main_location2_pane_t2_ParamLimits

0x8602,	// (0x0007e81a) main_location2_pane_t3_ParamLimits

0x8616,	// (0x0007e82e) main_location2_pane_t4_ParamLimits

0x8616,	// (0x0007e82e) main_location2_pane_t4

0xf3da,	// (0x000855f2) main_location2_pane_t_ParamLimits

0xec2b,	// (0x00084e43) find_pinb_pane_g2_ParamLimits

0xec2b,	// (0x00084e43) find_pinb_pane_g2

0x0001,

0xf128,	// (0x00085340) find_pinb_pane_g_ParamLimits

0xf128,	// (0x00085340) find_pinb_pane_g

0xec37,	// (0x00084e4f) find_pinb_pane_t1_ParamLimits

0xec49,	// (0x00084e61) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x00085345) find_pinb_pane_t_ParamLimits

0xe994,	// (0x00084bac) main_call3_pane

0x7be6,	// (0x0007ddfe) cale_month_day_heading_pane_t1_ParamLimits

0x7c6c,	// (0x0007de84) cale_month_day_heading_pane_t2_ParamLimits

0x7cfd,	// (0x0007df15) cale_month_day_heading_pane_t3_ParamLimits

0x7d8e,	// (0x0007dfa6) cale_month_day_heading_pane_t4_ParamLimits

0x7e1f,	// (0x0007e037) cale_month_day_heading_pane_t5_ParamLimits

0x7eb0,	// (0x0007e0c8) cale_month_day_heading_pane_t6_ParamLimits

0x7f4d,	// (0x0007e165) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x000854c9) cale_month_day_heading_pane_t_ParamLimits

0x0145,	// (0x0007635d) smil_status_volume_pane

0x8dca,	// (0x0007efe2) postcard_address_pane_ParamLimits

0x8dca,	// (0x0007efe2) postcard_address_pane

0x8dd6,	// (0x0007efee) postcard_message_pane_ParamLimits

0x8dd6,	// (0x0007efee) postcard_message_pane

0x91da,	// (0x0007f3f2) call2_cli_visual_pane_t1_ParamLimits

0x91da,	// (0x0007f3f2) call2_cli_visual_pane_t1

0x9802,	// (0x0007fa1a) postcard_message_pane_t1_ParamLimits

0x9802,	// (0x0007fa1a) postcard_message_pane_t1

0x97eb,	// (0x0007fa03) postcard_address_pane_t1_ParamLimits

0x97eb,	// (0x0007fa03) postcard_address_pane_t1

0x97dc,	// (0x0007f9f4) popup_call3_audio_in_window_ParamLimits

0x97dc,	// (0x0007f9f4) popup_call3_audio_in_window

0x96c2,	// (0x0007f8da) bg_popup_call3_in_pane_ParamLimits

0x96c2,	// (0x0007f8da) bg_popup_call3_in_pane

0x9722,	// (0x0007f93a) popup_call3_audio_in_window_g1_ParamLimits

0x9722,	// (0x0007f93a) popup_call3_audio_in_window_g1

0x973a,	// (0x0007f952) popup_call3_audio_in_window_g2_ParamLimits

0x973a,	// (0x0007f952) popup_call3_audio_in_window_g2

0x9752,	// (0x0007f96a) popup_call3_audio_in_window_g3_ParamLimits

0x9752,	// (0x0007f96a) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x00085835) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x00085835) popup_call3_audio_in_window_g

0x977a,	// (0x0007f992) popup_call3_audio_in_window_t1_ParamLimits

0x977a,	// (0x0007f992) popup_call3_audio_in_window_t1

0x97a2,	// (0x0007f9ba) popup_call3_audio_in_window_t2_ParamLimits

0x97a2,	// (0x0007f9ba) popup_call3_audio_in_window_t2

0x97ca,	// (0x0007f9e2) popup_call3_audio_in_window_t3_ParamLimits

0x97ca,	// (0x0007f9e2) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0008583e) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0008583e) popup_call3_audio_in_window_t

0x06df,	// (0x000768f7) bg_popup_call3_rect_pane

0x1919,	// (0x00077b31) bg_popup_call3_rect_pane_g1

0xedc6,	// (0x00084fde) bg_popup_call3_rect_pane_g2

0x1921,	// (0x00077b39) bg_popup_call3_rect_pane_g3

0x1929,	// (0x00077b41) bg_popup_call3_rect_pane_g4

0x1931,	// (0x00077b49) bg_popup_call3_rect_pane_g5

0x1939,	// (0x00077b51) bg_popup_call3_rect_pane_g6

0x1941,	// (0x00077b59) bg_popup_call3_rect_pane_g7

0x8a48,	// (0x0007ec60) mup_visualizer_osc_pane

0x07ac,	// (0x000769c4) mup_visualizer_spec_pane

0x96e2,	// (0x0007f8fa) call3_video_qcif_pane_ParamLimits

0x96e2,	// (0x0007f8fa) call3_video_qcif_pane

0x96f2,	// (0x0007f90a) call3_video_qcif_uncrop_pane_ParamLimits

0x96f2,	// (0x0007f90a) call3_video_qcif_uncrop_pane

0x9700,	// (0x0007f918) call3_video_subqcif_pane_ParamLimits

0x9700,	// (0x0007f918) call3_video_subqcif_pane

0x9712,	// (0x0007f92a) call3_video_subqcif_uncrop_pane_ParamLimits

0x9712,	// (0x0007f92a) call3_video_subqcif_uncrop_pane

0x976a,	// (0x0007f982) popup_call3_audio_in_window_g4_ParamLimits

0x976a,	// (0x0007f982) popup_call3_audio_in_window_g4

0x968d,	// (0x0007f8a5) mup_spec_half_pane

0x9696,	// (0x0007f8ae) mup_spec_half_pane_cp

0x1b7e,	// (0x00077d96) mup_osc_middle_pane

0x1b87,	// (0x00077d9f) mup_visualizer_osc_pane_g1

0x966e,	// (0x0007f886) mup_spec_bar_pane_ParamLimits

0x966e,	// (0x0007f886) mup_spec_bar_pane

0x1b6b,	// (0x00077d83) mup_spec_bar_pane_g1

0x1b75,	// (0x00077d8d) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00085829) mup_spec_bar_pane_g

0x681b,	// (0x0007ca33) aid_cale_week_size_cell_pane_ParamLimits

0x6830,	// (0x0007ca48) bg_cale_heading_pane_ParamLimits

0xee03,	// (0x0008501b) bg_cale_pane_cp01_ParamLimits

0x6852,	// (0x0007ca6a) cale_week_corner_pane_ParamLimits

0x686c,	// (0x0007ca84) cale_week_day_heading_pane_ParamLimits

0x688e,	// (0x0007caa6) cale_week_scroll_pane_g1_ParamLimits

0x68ab,	// (0x0007cac3) cale_week_scroll_pane_g2_ParamLimits

0x68be,	// (0x0007cad6) cale_week_scroll_pane_g3_ParamLimits

0x68d1,	// (0x0007cae9) cale_week_scroll_pane_g4_ParamLimits

0x68e4,	// (0x0007cafc) cale_week_scroll_pane_g5_ParamLimits

0x68f7,	// (0x0007cb0f) cale_week_scroll_pane_g6_ParamLimits

0x690a,	// (0x0007cb22) cale_week_scroll_pane_g7_ParamLimits

0x691d,	// (0x0007cb35) cale_week_scroll_pane_g8_ParamLimits

0x6932,	// (0x0007cb4a) cale_week_scroll_pane_g9_ParamLimits

0x6945,	// (0x0007cb5d) cale_week_scroll_pane_g10_ParamLimits

0x6958,	// (0x0007cb70) cale_week_scroll_pane_g11_ParamLimits

0x696b,	// (0x0007cb83) cale_week_scroll_pane_g12_ParamLimits

0x6982,	// (0x0007cb9a) cale_week_scroll_pane_g13_ParamLimits

0x699d,	// (0x0007cbb5) cale_week_scroll_pane_g14_ParamLimits

0x69b8,	// (0x0007cbd0) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x000853d1) cale_week_scroll_pane_g_ParamLimits

0x69d3,	// (0x0007cbeb) cale_week_time_pane_ParamLimits

0x69e8,	// (0x0007cc00) grid_cale_week_pane_ParamLimits

0xee21,	// (0x00085039) listscroll_cale_week_pane_t1

0xee33,	// (0x0008504b) scroll_pane_cp08_ParamLimits

0x76db,	// (0x0007d8f3) cale_month_corner_pane_ParamLimits

0x011b,	// (0x00076333) cale_month_pane_t1

0x7b7f,	// (0x0007dd97) cale_month_week_pane_ParamLimits

0x079e,	// (0x000769b6) popup_call_status_window_g1_ParamLimits

0x8414,	// (0x0007e62c) popup_call_status_window_g2_ParamLimits

0x8420,	// (0x0007e638) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x00085579) popup_call_status_window_g_ParamLimits

0x044f,	// (0x00076667) aid_call2_pane

0x5100,	// (0x0007b318) msg_header_pane_g1

0x8dca,	// (0x0007efe2) postcard_address2_pane_ParamLimits

0x8dca,	// (0x0007efe2) postcard_address2_pane

0x8dd6,	// (0x0007efee) postcard_message2_pane_ParamLimits

0x8dd6,	// (0x0007efee) postcard_message2_pane

0x9600,	// (0x0007f818) message2_row_pane_ParamLimits

0x9600,	// (0x0007f818) message2_row_pane

0x961d,	// (0x0007f835) address2_row_pane_ParamLimits

0x961d,	// (0x0007f835) address2_row_pane

0x1b39,	// (0x00077d51) postcard_message2_row_pane_g1

0x1b41,	// (0x00077d59) postcard_message2_row_pane_t1

0x1b39,	// (0x00077d51) address2_row_pane_g1

0x1b41,	// (0x00077d59) address2_row_pane_t1

0x6d48,	// (0x0007cf60) aid_size_cell_vorec

0xe994,	// (0x00084bac) main_rss_pane

0x9630,	// (0x0007f848) rss_list_single_pane_ParamLimits

0x9630,	// (0x0007f848) rss_list_single_pane

0x1b4f,	// (0x00077d67) rss_list_single_pane_t1

0x1b5d,	// (0x00077d75) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x00085824) rss_list_single_pane_t

0xe994,	// (0x00084bac) main_camera2_pane

0xe994,	// (0x00084bac) main_video2_pane

0x9866,	// (0x0007fa7e) cams_zoom_pane_cp2_ParamLimits

0x9866,	// (0x0007fa7e) cams_zoom_pane_cp2

0x9872,	// (0x0007fa8a) image2_vga_pane_ParamLimits

0x9872,	// (0x0007fa8a) image2_vga_pane

0x9881,	// (0x0007fa99) main_camera2_pane_g1_ParamLimits

0x9881,	// (0x0007fa99) main_camera2_pane_g1

0x988d,	// (0x0007faa5) main_camera2_pane_g2_ParamLimits

0x988d,	// (0x0007faa5) main_camera2_pane_g2

0x9899,	// (0x0007fab1) main_camera2_pane_g3_ParamLimits

0x9899,	// (0x0007fab1) main_camera2_pane_g3

0x98a5,	// (0x0007fabd) main_camera2_pane_g4_ParamLimits

0x98a5,	// (0x0007fabd) main_camera2_pane_g4

0x98b1,	// (0x0007fac9) main_camera2_pane_g5_ParamLimits

0x98b1,	// (0x0007fac9) main_camera2_pane_g5

0x98bd,	// (0x0007fad5) main_camera2_pane_g6_ParamLimits

0x98bd,	// (0x0007fad5) main_camera2_pane_g6

0x98c9,	// (0x0007fae1) main_camera2_pane_g7_ParamLimits

0x98c9,	// (0x0007fae1) main_camera2_pane_g7

0x98d5,	// (0x0007faed) main_camera2_pane_g8_ParamLimits

0x98d5,	// (0x0007faed) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x00085845) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x00085845) main_camera2_pane_g

0x98ed,	// (0x0007fb05) main_camera2_pane_t1_ParamLimits

0x98ed,	// (0x0007fb05) main_camera2_pane_t1

0x98ff,	// (0x0007fb17) main_camera2_pane_t2_ParamLimits

0x98ff,	// (0x0007fb17) main_camera2_pane_t2

0x9911,	// (0x0007fb29) main_camera2_pane_t3_ParamLimits

0x9911,	// (0x0007fb29) main_camera2_pane_t3

0x9923,	// (0x0007fb3b) main_camera2_pane_t4_ParamLimits

0x9923,	// (0x0007fb3b) main_camera2_pane_t4

0x0006,

0xf640,	// (0x00085858) main_camera2_pane_t_ParamLimits

0xf640,	// (0x00085858) main_camera2_pane_t

0x9985,	// (0x0007fb9d) cams_zoom_pane_cp4_ParamLimits

0x9985,	// (0x0007fb9d) cams_zoom_pane_cp4

0x9995,	// (0x0007fbad) image2_cif_pane_ParamLimits

0x9995,	// (0x0007fbad) image2_cif_pane

0x99aa,	// (0x0007fbc2) image2_subqcif_pane_ParamLimits

0x99aa,	// (0x0007fbc2) image2_subqcif_pane

0x99b9,	// (0x0007fbd1) main_video2_pane_g1_ParamLimits

0x99b9,	// (0x0007fbd1) main_video2_pane_g1

0x99cb,	// (0x0007fbe3) main_video2_pane_g2_ParamLimits

0x99cb,	// (0x0007fbe3) main_video2_pane_g2

0x99db,	// (0x0007fbf3) main_video2_pane_g3_ParamLimits

0x99db,	// (0x0007fbf3) main_video2_pane_g3

0x99eb,	// (0x0007fc03) main_video2_pane_g4_ParamLimits

0x99eb,	// (0x0007fc03) main_video2_pane_g4

0x99fb,	// (0x0007fc13) main_video2_pane_g5_ParamLimits

0x99fb,	// (0x0007fc13) main_video2_pane_g5

0x9a0b,	// (0x0007fc23) main_video2_pane_g6_ParamLimits

0x9a0b,	// (0x0007fc23) main_video2_pane_g6

0x0005,

0xf64f,	// (0x00085867) main_video2_pane_g_ParamLimits

0xf64f,	// (0x00085867) main_video2_pane_g

0x9a1d,	// (0x0007fc35) main_video2_pane_t1_ParamLimits

0x9a1d,	// (0x0007fc35) main_video2_pane_t1

0x9a37,	// (0x0007fc4f) main_video2_pane_t2_ParamLimits

0x9a37,	// (0x0007fc4f) main_video2_pane_t2

0x9a5d,	// (0x0007fc75) main_video2_pane_t3_ParamLimits

0x9a5d,	// (0x0007fc75) main_video2_pane_t3

0x0002,

0xf65c,	// (0x00085874) main_video2_pane_t_ParamLimits

0xf65c,	// (0x00085874) main_video2_pane_t

0x9330,	// (0x0007f548) call_muted_g2

0x0001,

0xf5fe,	// (0x00085816) call_muted_g

0xe994,	// (0x00084bac) main_mup2_pane

0x1bec,	// (0x00077e04) main_mup2_pane_g1_ParamLimits

0x1bec,	// (0x00077e04) main_mup2_pane_g1

0x9a83,	// (0x0007fc9b) main_mup2_pane_g2_ParamLimits

0x9a83,	// (0x0007fc9b) main_mup2_pane_g2

0x9d05,	// (0x0007ff1d) main_mup_pane_g13_cp1

0x9d0d,	// (0x0007ff25) mup_volume_pane_cp1

0x9aa3,	// (0x0007fcbb) main_mup2_pane_g4_ParamLimits

0x9aa3,	// (0x0007fcbb) main_mup2_pane_g4

0x9ab8,	// (0x0007fcd0) main_mup2_pane_g5_ParamLimits

0x9ab8,	// (0x0007fcd0) main_mup2_pane_g5

0x9acd,	// (0x0007fce5) main_mup2_pane_g6_ParamLimits

0x9acd,	// (0x0007fce5) main_mup2_pane_g6

0x9ae2,	// (0x0007fcfa) main_mup2_pane_g7_ParamLimits

0x9ae2,	// (0x0007fcfa) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0008587b) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0008587b) main_mup2_pane_g

0x9afe,	// (0x0007fd16) main_mup2_pane_t1_ParamLimits

0x9afe,	// (0x0007fd16) main_mup2_pane_t1

0x9b15,	// (0x0007fd2d) main_mup2_pane_t2_ParamLimits

0x9b15,	// (0x0007fd2d) main_mup2_pane_t2

0x9b2c,	// (0x0007fd44) main_mup2_pane_t3_ParamLimits

0x9b2c,	// (0x0007fd44) main_mup2_pane_t3

0x9b43,	// (0x0007fd5b) main_mup2_pane_t4_ParamLimits

0x9b43,	// (0x0007fd5b) main_mup2_pane_t4

0x9b5d,	// (0x0007fd75) main_mup2_pane_t5_ParamLimits

0x9b5d,	// (0x0007fd75) main_mup2_pane_t5

0x9b77,	// (0x0007fd8f) main_mup2_pane_t6_ParamLimits

0x9b77,	// (0x0007fd8f) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0008588a) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0008588a) main_mup2_pane_t

0x9baf,	// (0x0007fdc7) mup2_visualizer_pane_ParamLimits

0x9baf,	// (0x0007fdc7) mup2_visualizer_pane

0x9be5,	// (0x0007fdfd) mup_progress_pane_cp_ParamLimits

0x9be5,	// (0x0007fdfd) mup_progress_pane_cp

0x9cf0,	// (0x0007ff08) mup_volume_pane_cp_ParamLimits

0x9cf0,	// (0x0007ff08) mup_volume_pane_cp

0x9bfc,	// (0x0007fe14) mup2_visualizer_pane_g1_ParamLimits

0x9bfc,	// (0x0007fe14) mup2_visualizer_pane_g1

0x1bbe,	// (0x00077dd6) mup2_visualizer_pane_g2_ParamLimits

0x1bbe,	// (0x00077dd6) mup2_visualizer_pane_g2

0x9c11,	// (0x0007fe29) mup2_visualizer_pane_g3_ParamLimits

0x9c11,	// (0x0007fe29) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x00085897) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x00085897) mup2_visualizer_pane_g

0x09df,	// (0x00076bf7) aid_size_cell_fmradio

0x9446,	// (0x0007f65e) aid_height_parent_landcape

0xf034,	// (0x0008524c) wml_content_pane_cp

0xf03c,	// (0x00085254) wml_tabs_pane

0xf045,	// (0x0008525d) popup_wml_miniature_window

0xf04d,	// (0x00085265) scroll_pane_cp021

0xf061,	// (0x00085279) wml_content_pane_comp8

0xe994,	// (0x00084bac) bg_popup_sub_pane_cp05

0x1bdc,	// (0x00077df4) popup_wml_miniature_window_g1

0x1be4,	// (0x00077dfc) wml_miniature_view_pane

0x9c1f,	// (0x0007fe37) aid_size_wml_view

0x9c27,	// (0x0007fe3f) wml_miniature_view_pane_g1

0x9c30,	// (0x0007fe48) wml_miniature_view_pane_g2

0x9c39,	// (0x0007fe51) wml_miniature_view_pane_g3

0x9c41,	// (0x0007fe59) wml_miniature_view_pane_g4

0x9c49,	// (0x0007fe61) wml_miniature_view_pane_g5

0x9c51,	// (0x0007fe69) wml_miniature_view_pane_g6

0x9c59,	// (0x0007fe71) wml_miniature_view_pane_g7

0x9c61,	// (0x0007fe79) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0008589e) wml_miniature_view_pane_g

0x1bec,	// (0x00077e04) background_graphic_ParamLimits

0x1bec,	// (0x00077e04) background_graphic

0x1bf8,	// (0x00077e10) wml_tabs_2_pane

0x1c01,	// (0x00077e19) wml_tabs_3_pane_ParamLimits

0x1c01,	// (0x00077e19) wml_tabs_3_pane

0x1c13,	// (0x00077e2b) wml_tabs_4_pane_ParamLimits

0x1c13,	// (0x00077e2b) wml_tabs_4_pane

0x1c29,	// (0x00077e41) wml_tabs_5_pane_ParamLimits

0x1c29,	// (0x00077e41) wml_tabs_5_pane

0x1c43,	// (0x00077e5b) wml_tabs_pane_g2_ParamLimits

0x1c43,	// (0x00077e5b) wml_tabs_pane_g2

0x1c57,	// (0x00077e6f) wml_tabs_pane_g3_ParamLimits

0x1c57,	// (0x00077e6f) wml_tabs_pane_g3

0x9c69,	// (0x0007fe81) wml_tabs_2_active_pane_ParamLimits

0x9c69,	// (0x0007fe81) wml_tabs_2_active_pane

0x9c79,	// (0x0007fe91) wml_tabs_2_passive_pane_ParamLimits

0x9c79,	// (0x0007fe91) wml_tabs_2_passive_pane

0x9c89,	// (0x0007fea1) wml_tabs_3_active_pane_cp_ParamLimits

0x9c89,	// (0x0007fea1) wml_tabs_3_active_pane_cp

0x9c9a,	// (0x0007feb2) wml_tabs_3_passive_pane_ParamLimits

0x9c9a,	// (0x0007feb2) wml_tabs_3_passive_pane

0x9cab,	// (0x0007fec3) wml_tabs_3_passive_pane_cp_ParamLimits

0x9cab,	// (0x0007fec3) wml_tabs_3_passive_pane_cp

0x9cbc,	// (0x0007fed4) tabs_4_active_pane

0x9cc4,	// (0x0007fedc) tabs_4_passive_pane

0x9ccc,	// (0x0007fee4) tabs_4_passive_pane_cp

0x9cd4,	// (0x0007feec) tabs_4_passive_pane_cp2

0x920b,	// (0x0007f423) aid_height_text

0x8a11,	// (0x0007ec29) mup_volume_cont_pane_ParamLimits

0x8a11,	// (0x0007ec29) mup_volume_cont_pane

0x6366,	// (0x0007c57e) aid_size_cell_pinb

0x6370,	// (0x0007c588) aid_size_list_pinb

0x9bce,	// (0x0007fde6) mup2_volume_cont_pane_ParamLimits

0x9bce,	// (0x0007fde6) mup2_volume_cont_pane

0x9cdc,	// (0x0007fef4) mup2_volume_cont_pane_g1_ParamLimits

0x9cdc,	// (0x0007fef4) mup2_volume_cont_pane_g1

0x5fa0,	// (0x0007c1b8) aid_size_cell_touch_ParamLimits

0x5fa0,	// (0x0007c1b8) aid_size_cell_touch

0x6249,	// (0x0007c461) touch_pane_ParamLimits

0x6249,	// (0x0007c461) touch_pane

0xe15b,	// (0x00084373) main_rss2_pane

0x1c74,	// (0x00077e8c) listscroll_rss2_pane

0x1c7d,	// (0x00077e95) rss2_navigation_pane

0x1c85,	// (0x00077e9d) list_rss2_pane

0x0596,	// (0x000767ae) scroll_pane_cp22

0x1c8d,	// (0x00077ea5) rss2_navigation_pane_g1

0x1c96,	// (0x00077eae) rss2_navigation_pane_g2

0x1c9e,	// (0x00077eb6) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x000858af) rss2_navigation_pane_g

0x1ca6,	// (0x00077ebe) rss2_navigation_pane_t1

0x9d15,	// (0x0007ff2d) rss2_list_single_pane_ParamLimits

0x9d15,	// (0x0007ff2d) rss2_list_single_pane

0x1cb4,	// (0x00077ecc) rss2_list_single_pane_t2

0x1cc2,	// (0x00077eda) rss2_list_single_pane_t3_ParamLimits

0x1cc2,	// (0x00077eda) rss2_list_single_pane_t3

0x1cdf,	// (0x00077ef7) rss2_list_single_pane_t4

0x81fd,	// (0x0007e415) smil_status_pane_g1

0xf0bc,	// (0x000852d4) main_image2_pane_ParamLimits

0xf0bc,	// (0x000852d4) main_image2_pane

0x98e1,	// (0x0007faf9) main_camera2_pane_g9_ParamLimits

0x98e1,	// (0x0007faf9) main_camera2_pane_g9

0x9935,	// (0x0007fb4d) main_camera2_pane_t5_ParamLimits

0x9935,	// (0x0007fb4d) main_camera2_pane_t5

0x9947,	// (0x0007fb5f) main_camera2_pane_t6_ParamLimits

0x9947,	// (0x0007fb5f) main_camera2_pane_t6

0x9d4d,	// (0x0007ff65) main_image2_pane_g1_ParamLimits

0x9d4d,	// (0x0007ff65) main_image2_pane_g1

0x8fa7,	// (0x0007f1bf) smil2_video_pane_ParamLimits

0x8fa7,	// (0x0007f1bf) smil2_video_pane

0x4e67,	// (0x0007b07f) aid_zoom_text_primary_cp

0x61f2,	// (0x0007c40a) popup_preview_fixed_window

0xef9d,	// (0x000851b5) im_reading_pane_g1

0x982b,	// (0x0007fa43) cams2_bc_adjust_pane_cp_ParamLimits

0x982b,	// (0x0007fa43) cams2_bc_adjust_pane_cp

0x9977,	// (0x0007fb8f) cams2_bc_adjust_pane_ParamLimits

0x9977,	// (0x0007fb8f) cams2_bc_adjust_pane

0x9d59,	// (0x0007ff71) cams2_bc_adjust_pane_g1

0x9d61,	// (0x0007ff79) cams2_slider_pane

0x9d6a,	// (0x0007ff82) cams2_slider_pane_g1

0x9d73,	// (0x0007ff8b) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x000858b6) cams2_slider_pane_g

0x6460,	// (0x0007c678) calc_display_pane_ParamLimits

0x647e,	// (0x0007c696) calc_paper_pane_ParamLimits

0x649a,	// (0x0007c6b2) grid_calc_pane_ParamLimits

0x8482,	// (0x0007e69a) popup_clock_digital_window_t1_ParamLimits

0x0967,	// (0x00076b7f) main_image_pane_t1

0x6446,	// (0x0007c65e) aid_size_cell_calc_ParamLimits

0x6446,	// (0x0007c65e) aid_size_cell_calc

0x9480,	// (0x0007f698) popup_blid_sat_info2_window_ParamLimits

0x9480,	// (0x0007f698) popup_blid_sat_info2_window

0x1cf5,	// (0x00077f0d) aid_size_cell_blid

0x1cfd,	// (0x00077f15) bg_popup_window_pane_cp07

0x1d20,	// (0x00077f38) grid_popup_blid_pane

0x1d2a,	// (0x00077f42) heading_pane_cp05_ParamLimits

0x1d2a,	// (0x00077f42) heading_pane_cp05

0x1df4,	// (0x0007800c) cell_popup_blid_pane_ParamLimits

0x1df4,	// (0x0007800c) cell_popup_blid_pane

0x1e1a,	// (0x00078032) cell_popup_blid_pane_g1

0x1e22,	// (0x0007803a) cell_popup_blid_pane_t1

0x9b94,	// (0x0007fdac) mup2_indicator_pane_ParamLimits

0x9b94,	// (0x0007fdac) mup2_indicator_pane

0x06df,	// (0x000768f7) mup2_visualizer_osc_pane

0x1bca,	// (0x00077de2) mup2_visualizer_spec_pane_ParamLimits

0x1bca,	// (0x00077de2) mup2_visualizer_spec_pane

0x9d8d,	// (0x0007ffa5) mup2_spec_half_pane

0x9d96,	// (0x0007ffae) mup2_spec_half_pane_cp

0x9da0,	// (0x0007ffb8) mup2_spec_bar_pane_ParamLimits

0x9da0,	// (0x0007ffb8) mup2_spec_bar_pane

0x1b6b,	// (0x00077d83) mup2_spec_bar_pane_g1

0x1b75,	// (0x00077d8d) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00085829) mup2_spec_bar_pane_g

0x9dbf,	// (0x0007ffd7) mup2_osc_middle_pane

0x1b87,	// (0x00077d9f) mup2_visualizer_osc_pane_g1

0xe185,	// (0x0008439d) popup_number_entry_window_t1_ParamLimits

0xe198,	// (0x000843b0) popup_number_entry_window_t2_ParamLimits

0xe1aa,	// (0x000843c2) popup_number_entry_window_t3_ParamLimits

0x62a0,	// (0x0007c4b8) popup_number_entry_window_t5_ParamLimits

0x62a0,	// (0x0007c4b8) popup_number_entry_window_t5

0xf0d3,	// (0x000852eb) popup_number_entry_window_t_ParamLimits

0xe1bc,	// (0x000843d4) text_title_cp2_ParamLimits

0x8c92,	// (0x0007eeaa) aid_hotspot_pointer_text2_pane

0x8d2c,	// (0x0007ef44) main_viewer_pane_g9_ParamLimits

0x8d2c,	// (0x0007ef44) main_viewer_pane_g9

0x011b,	// (0x00076333) cale_month_pane_t1_ParamLimits

0x0158,	// (0x00076370) bg_cale_pane_ParamLimits

0x0170,	// (0x00076388) list_cale_pane_ParamLimits

0x0181,	// (0x00076399) listscroll_cale_day_pane_t1

0x0193,	// (0x000763ab) scroll_pane_cp09_ParamLimits

0x8a50,	// (0x0007ec68) main_mup_eq_pane_t1_ParamLimits

0x8a50,	// (0x0007ec68) main_mup_eq_pane_t1

0x8a6a,	// (0x0007ec82) main_mup_eq_pane_t2_ParamLimits

0x8a6a,	// (0x0007ec82) main_mup_eq_pane_t2

0x8a82,	// (0x0007ec9a) main_mup_eq_pane_t3_ParamLimits

0x8a82,	// (0x0007ec9a) main_mup_eq_pane_t3

0x8a9a,	// (0x0007ecb2) main_mup_eq_pane_t4_ParamLimits

0x8a9a,	// (0x0007ecb2) main_mup_eq_pane_t4

0x8ab2,	// (0x0007ecca) main_mup_eq_pane_t5_ParamLimits

0x8ab2,	// (0x0007ecca) main_mup_eq_pane_t5

0x8aca,	// (0x0007ece2) main_mup_eq_pane_t6_ParamLimits

0x8aca,	// (0x0007ece2) main_mup_eq_pane_t6

0x8ade,	// (0x0007ecf6) main_mup_eq_pane_t7_ParamLimits

0x8ade,	// (0x0007ecf6) main_mup_eq_pane_t7

0x8af2,	// (0x0007ed0a) main_mup_eq_pane_t8_ParamLimits

0x8af2,	// (0x0007ed0a) main_mup_eq_pane_t8

0x8b08,	// (0x0007ed20) main_mup_eq_pane_t9_ParamLimits

0x8b08,	// (0x0007ed20) main_mup_eq_pane_t9

0x8b20,	// (0x0007ed38) main_mup_eq_pane_t10_ParamLimits

0x8b20,	// (0x0007ed38) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x00085678) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x00085678) main_mup_eq_pane_t

0x8bdd,	// (0x0007edf5) mup_equalizer_pane_cp5_ParamLimits

0x8bf3,	// (0x0007ee0b) mup_equalizer_pane_cp6_ParamLimits

0x8c0b,	// (0x0007ee23) mup_equalizer_pane_cp7_ParamLimits

0xe15b,	// (0x00084373) main_gallery_pane

0x1b90,	// (0x00077da8) smil2_volume_pane

0x1bab,	// (0x00077dc3) smil_status_volume_pane_g1_ParamLimits

0x1b98,	// (0x00077db0) smil_status_volume_pane_g2_ParamLimits

0x96a0,	// (0x0007f8b8) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0008582e) smil_status_volume_pane_g_ParamLimits

0x1cfd,	// (0x00077f15) bg_popup_window_pane_cp07_ParamLimits

0x1d0b,	// (0x00077f23) blid_firmament_pane

0x9dc8,	// (0x0007ffe0) aid_size_cell_gallery_ParamLimits

0x9dc8,	// (0x0007ffe0) aid_size_cell_gallery

0x9dd6,	// (0x0007ffee) grid_gallery_pane_ParamLimits

0x9dd6,	// (0x0007ffee) grid_gallery_pane

0x9de6,	// (0x0007fffe) cell_gallery_pane_ParamLimits

0x9de6,	// (0x0007fffe) cell_gallery_pane

0x1e30,	// (0x00078048) bg_cell_gallery_focus_pane_ParamLimits

0x1e30,	// (0x00078048) bg_cell_gallery_focus_pane

0x1e42,	// (0x0007805a) cell_gallery_pane_g1_ParamLimits

0x1e42,	// (0x0007805a) cell_gallery_pane_g1

0x9e34,	// (0x0008004c) cell_gallery_pane_g2_ParamLimits

0x9e34,	// (0x0008004c) cell_gallery_pane_g2

0x9e41,	// (0x00080059) cell_gallery_pane_g3_ParamLimits

0x9e41,	// (0x00080059) cell_gallery_pane_g3

0x1e4e,	// (0x00078066) cell_gallery_pane_g4_ParamLimits

0x1e4e,	// (0x00078066) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x000858dc) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x000858dc) cell_gallery_pane_g

0x1e5a,	// (0x00078072) bg_cell_gallery_focus_pane_g1

0x1e62,	// (0x0007807a) bg_cell_gallery_focus_pane_g2

0x1e6a,	// (0x00078082) bg_cell_gallery_focus_pane_g3

0x1e72,	// (0x0007808a) bg_cell_gallery_focus_pane_g4

0x1e7a,	// (0x00078092) bg_cell_gallery_focus_pane_g5

0x1e82,	// (0x0007809a) bg_cell_gallery_focus_pane_g6

0x1e8a,	// (0x000780a2) bg_cell_gallery_focus_pane_g7

0x1e92,	// (0x000780aa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x000858e5) bg_cell_gallery_focus_pane_g

0x1e9a,	// (0x000780b2) aid_firma_cardinal

0x1eae,	// (0x000780c6) blid_firmament_pane_t1

0x1ec5,	// (0x000780dd) blid_firmament_pane_t2

0x1edc,	// (0x000780f4) blid_firmament_pane_t3

0x1ef3,	// (0x0007810b) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x000858f6) blid_firmament_pane_t

0x1f0a,	// (0x00078122) blid_sat_info_pane

0x1f1a,	// (0x00078132) blid_sat_info_pane_g1

0x1f1a,	// (0x00078132) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x000858ff) blid_sat_info_pane_g

0x1f24,	// (0x0007813c) blid_sat_info_pane_t1

0x1f32,	// (0x0007814a) smil2_volume_content_pane

0x1f3b,	// (0x00078153) smil2_volume_pane_g1

0xed54,	// (0x00084f6c) smil2_volume_content_pane_g1

0x1f43,	// (0x0007815b) smil2_volume_content_pane_g2

0x1f4c,	// (0x00078164) smil2_volume_content_pane_g3

0x1f55,	// (0x0007816d) smil2_volume_content_pane_g4

0x1f5e,	// (0x00078176) smil2_volume_content_pane_g5

0x1f67,	// (0x0007817f) smil2_volume_content_pane_g6

0x1f70,	// (0x00078188) smil2_volume_content_pane_g7

0x1f79,	// (0x00078191) smil2_volume_content_pane_g8

0x1f82,	// (0x0007819a) smil2_volume_content_pane_g9

0x1f8b,	// (0x000781a3) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x00085904) smil2_volume_content_pane_g

0x6a6d,	// (0x0007cc85) cale_week_day_heading_pane_t1_ParamLimits

0x6aa8,	// (0x0007ccc0) cale_week_day_heading_pane_t2_ParamLimits

0x6ae3,	// (0x0007ccfb) cale_week_day_heading_pane_t3_ParamLimits

0x6b1e,	// (0x0007cd36) cale_week_day_heading_pane_t4_ParamLimits

0x6b59,	// (0x0007cd71) cale_week_day_heading_pane_t5_ParamLimits

0x6b94,	// (0x0007cdac) cale_week_day_heading_pane_t6_ParamLimits

0x6bcf,	// (0x0007cde7) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x000853f0) cale_week_day_heading_pane_t_ParamLimits

0xee50,	// (0x00085068) bg_cale_side_pane_ParamLimits

0x6c0a,	// (0x0007ce22) cale_week_time_pane_t1_ParamLimits

0x6c24,	// (0x0007ce3c) cale_week_time_pane_t2_ParamLimits

0x6c3e,	// (0x0007ce56) cale_week_time_pane_t3_ParamLimits

0x6c58,	// (0x0007ce70) cale_week_time_pane_t4_ParamLimits

0x6c72,	// (0x0007ce8a) cale_week_time_pane_t5_ParamLimits

0x6c8e,	// (0x0007cea6) cale_week_time_pane_t6_ParamLimits

0x6cb0,	// (0x0007cec8) cale_week_time_pane_t7_ParamLimits

0x6cd4,	// (0x0007ceec) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x000853ff) cale_week_time_pane_t_ParamLimits

0x6cfa,	// (0x0007cf12) cell_cale_week_pane_g2_ParamLimits

0xee50,	// (0x00085068) bg_cale_side_pane_cp01_ParamLimits

0x7ff6,	// (0x0007e20e) cale_month_week_pane_t1_ParamLimits

0x800f,	// (0x0007e227) cale_month_week_pane_t2_ParamLimits

0x8028,	// (0x0007e240) cale_month_week_pane_t3_ParamLimits

0x8041,	// (0x0007e259) cale_month_week_pane_t4_ParamLimits

0x805e,	// (0x0007e276) cale_month_week_pane_t5_ParamLimits

0x807f,	// (0x0007e297) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x000854d8) cale_month_week_pane_t_ParamLimits

0x81c6,	// (0x0007e3de) cell_cale_month_pane_g1_ParamLimits

0xe15b,	// (0x00084373) main_cale_event_viewer_pane

0xe15b,	// (0x00084373) listscroll_cale_event_viewer_pane

0x1f94,	// (0x000781ac) list_cale_ev_pane

0x1f9c,	// (0x000781b4) scroll_pane_cp023

0x1fa8,	// (0x000781c0) field_cale_ev_pane_ParamLimits

0x1fa8,	// (0x000781c0) field_cale_ev_pane

0x1fc4,	// (0x000781dc) field_cale_ev_content_pane_ParamLimits

0x1fc4,	// (0x000781dc) field_cale_ev_content_pane

0x1fd0,	// (0x000781e8) field_cale_ev_pane_g1_ParamLimits

0x1fd0,	// (0x000781e8) field_cale_ev_pane_g1

0x1fdc,	// (0x000781f4) field_cale_ev_pane_g2_ParamLimits

0x1fdc,	// (0x000781f4) field_cale_ev_pane_g2

0x1ff4,	// (0x0007820c) field_cale_ev_pane_g3_ParamLimits

0x1ff4,	// (0x0007820c) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x00085919) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x00085919) field_cale_ev_pane_g

0x200c,	// (0x00078224) field_cale_ev_pane_t1_ParamLimits

0x200c,	// (0x00078224) field_cale_ev_pane_t1

0x2023,	// (0x0007823b) field_cale_ev_content_pane_t1_ParamLimits

0x2023,	// (0x0007823b) field_cale_ev_content_pane_t1

0x8c79,	// (0x0007ee91) bg_button_pane_cp01

0x680b,	// (0x0007ca23) listscroll_cale_week_pane_ParamLimits

0xedfa,	// (0x00085012) popup_toolbar_window_cp01

0xee21,	// (0x00085039) listscroll_cale_week_pane_t1_ParamLimits

0x680b,	// (0x0007ca23) listscroll_cale_day_pane_ParamLimits

0xedfa,	// (0x00085012) popup_toolbar_window_cp02

0x0181,	// (0x00076399) listscroll_cale_day_pane_t1_ParamLimits

0x680b,	// (0x0007ca23) main_cale_month_pane_ParamLimits

0x957d,	// (0x0007f795) popup_toolbar_window_cp03_ParamLimits

0x957d,	// (0x0007f795) popup_toolbar_window_cp03

0x8eb9,	// (0x0007f0d1) main_image_pane_g2_ParamLimits

0x8eb9,	// (0x0007f0d1) main_image_pane_g2

0x8ec5,	// (0x0007f0dd) main_image_pane_g3_ParamLimits

0x8ec5,	// (0x0007f0dd) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0008570a) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0008570a) main_image_pane_g

0x0967,	// (0x00076b7f) main_image_pane_t1_ParamLimits

0x8ed1,	// (0x0007f0e9) main_image_pane_t2_ParamLimits

0x8ed1,	// (0x0007f0e9) main_image_pane_t2

0x8ee3,	// (0x0007f0fb) main_image_pane_t3_ParamLimits

0x8ee3,	// (0x0007f0fb) main_image_pane_t3

0x8ef5,	// (0x0007f10d) main_image_pane_t4_ParamLimits

0x8ef5,	// (0x0007f10d) main_image_pane_t4

0x0003,

0xf4f9,	// (0x00085711) main_image_pane_t_ParamLimits

0xf4f9,	// (0x00085711) main_image_pane_t

0x8f07,	// (0x0007f11f) popup_image_details_window_cp01

0x8f11,	// (0x0007f129) popup_toobar_trans_pane_cp01_ParamLimits

0x8f11,	// (0x0007f129) popup_toobar_trans_pane_cp01

0x94d3,	// (0x0007f6eb) popup_image_details_window_ParamLimits

0x94d3,	// (0x0007f6eb) popup_image_details_window

0x94e1,	// (0x0007f6f9) popup_image_focus_window

0x981d,	// (0x0007fa35) camera2_autofocus_pane_ParamLimits

0x981d,	// (0x0007fa35) camera2_autofocus_pane

0xe15b,	// (0x00084373) bg_popup_sub_pane_cp06

0x2040,	// (0x00078258) popup_image_focus_window_g1

0x2048,	// (0x00078260) popup_image_focus_window_g2

0x2050,	// (0x00078268) popup_image_focus_window_g3

0x2058,	// (0x00078270) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x00085920) popup_image_focus_window_g

0x2060,	// (0x00078278) popup_image_focus_window_t1

0x206e,	// (0x00078286) popup_image_focus_window_t2

0x207e,	// (0x00078296) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x00085929) popup_image_focus_window_t

0x208c,	// (0x000782a4) camera2_autofocus_pane_g1

0xf0bc,	// (0x000852d4) bg_tb_trans_pane_cp01

0x209a,	// (0x000782b2) popup_image_details_window_g1

0x20ad,	// (0x000782c5) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0008593b) popup_image_details_window_g

0x20d6,	// (0x000782ee) popup_image_details_window_t1

0x20e8,	// (0x00078300) popup_image_details_window_t2

0x2101,	// (0x00078319) popup_image_details_window_t3

0x2115,	// (0x0007832d) popup_image_details_window_t4

0x2130,	// (0x00078348) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x00085942) popup_image_details_window_t

0xecbf,	// (0x00084ed7) bg_calc_paper_pane_ParamLimits

0xe15b,	// (0x00084373) grid_highlight_pane_cp013

0x6597,	// (0x0007c7af) list_calc_pane_ParamLimits

0x65a9,	// (0x0007c7c1) scroll_pane_cp024

0xecd3,	// (0x00084eeb) bg_calc_display_pane_ParamLimits

0x65b1,	// (0x0007c7c9) calc_display_pane_t1_ParamLimits

0x65c6,	// (0x0007c7de) calc_display_pane_t2_ParamLimits

0x65db,	// (0x0007c7f3) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x00085372) calc_display_pane_t_ParamLimits

0x66bc,	// (0x0007c8d4) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0008538f) cell_calc_pane_g

0x66c5,	// (0x0007c8dd) cell_calc_pane_t1

0xed32,	// (0x00084f4a) grid_highlight_pane_cp02_ParamLimits

0xed48,	// (0x00084f60) toolbar_button_pane_cp01_ParamLimits

0xed48,	// (0x00084f60) toolbar_button_pane_cp01

0x09c1,	// (0x00076bd9) temp_image_control_pane_ParamLimits

0x09c1,	// (0x00076bd9) temp_image_control_pane

0xf0bc,	// (0x000852d4) main_mp3_pane

0x214a,	// (0x00078362) temp_image_control_pane_g1_ParamLimits

0x214a,	// (0x00078362) temp_image_control_pane_g1

0x2158,	// (0x00078370) temp_image_control_pane_g2_ParamLimits

0x2158,	// (0x00078370) temp_image_control_pane_g2

0x216a,	// (0x00078382) temp_image_control_pane_g3_ParamLimits

0x216a,	// (0x00078382) temp_image_control_pane_g3

0x9e7e,	// (0x00080096) temp_image_control_pane_g4_ParamLimits

0x9e7e,	// (0x00080096) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0008594d) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0008594d) temp_image_control_pane_g

0x214a,	// (0x00078362) main_mp3_pane_g1

0x9e8f,	// (0x000800a7) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x00085956) main_mp3_pane_g

0x21ad,	// (0x000783c5) main_mp3_pane_t1

0xeeac,	// (0x000850c4) main_camera_pane_g8_ParamLimits

0xeeac,	// (0x000850c4) main_camera_pane_g8

0x6f8f,	// (0x0007d1a7) main_video_pane_g7_ParamLimits

0x6f8f,	// (0x0007d1a7) main_video_pane_g7

0x9965,	// (0x0007fb7d) main_camera2_pane_t7_ParamLimits

0x9965,	// (0x0007fb7d) main_camera2_pane_t7

0xeff4,	// (0x0008520c) scroll_pane_cp025_ParamLimits

0xeff4,	// (0x0008520c) scroll_pane_cp025

0xf008,	// (0x00085220) scroll_pane_cp026_ParamLimits

0xf008,	// (0x00085220) scroll_pane_cp026

0xf017,	// (0x0008522f) wml_content_pane_ParamLimits

0xe15b,	// (0x00084373) main_touch_calib_pane

0x9f33,	// (0x0008014b) main_touch_calib_pane_g1

0x9f3f,	// (0x00080157) main_touch_calib_pane_g2

0x9f4b,	// (0x00080163) main_touch_calib_pane_g3

0x9f57,	// (0x0008016f) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x00085974) main_touch_calib_pane_g

0x9f63,	// (0x0008017b) main_touch_calib_pane_t1

0x9f7c,	// (0x00080194) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0008597d) main_touch_calib_pane_t

0x0620,	// (0x00076838) mup_progress_pane_cp02

0x063f,	// (0x00076857) navi_pane_g1

0x06a1,	// (0x000768b9) navi_pane_mp_t3

0xf0bc,	// (0x000852d4) main_mp3_pane_ParamLimits

0x95ba,	// (0x0007f7d2) navi_pane_ParamLimits

0x214a,	// (0x00078362) main_mp3_pane_g1_ParamLimits

0x9e8f,	// (0x000800a7) main_mp3_pane_g2_ParamLimits

0x9e9b,	// (0x000800b3) main_mp3_pane_g3_ParamLimits

0x9e9b,	// (0x000800b3) main_mp3_pane_g3

0x9ea7,	// (0x000800bf) main_mp3_pane_g4_ParamLimits

0x9ea7,	// (0x000800bf) main_mp3_pane_g4

0x217a,	// (0x00078392) main_mp3_pane_g5_ParamLimits

0x217a,	// (0x00078392) main_mp3_pane_g5

0x2188,	// (0x000783a0) main_mp3_pane_g6_ParamLimits

0x2188,	// (0x000783a0) main_mp3_pane_g6

0x2195,	// (0x000783ad) main_mp3_pane_g7_ParamLimits

0x2195,	// (0x000783ad) main_mp3_pane_g7

0x21a1,	// (0x000783b9) main_mp3_pane_g8_ParamLimits

0x21a1,	// (0x000783b9) main_mp3_pane_g8

0xf73e,	// (0x00085956) main_mp3_pane_g_ParamLimits

0x9eb3,	// (0x000800cb) main_mp3_pane_t2

0x9ec3,	// (0x000800db) main_mp3_pane_t3

0x21bb,	// (0x000783d3) main_mp3_pane_t4

0x21c9,	// (0x000783e1) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x00085967) main_mp3_pane_t

0x21d7,	// (0x000783ef) mup_progress_pane_cp01

0x4e67,	// (0x0007b07f) aid_zoom_text_secondary2

0x1f94,	// (0x000781ac) list_cale_ev2_pane

0x1f9c,	// (0x000781b4) scroll_pane_cp023_ParamLimits

0x9fd7,	// (0x000801ef) field_cale_ev2_pane_ParamLimits

0x9fd7,	// (0x000801ef) field_cale_ev2_pane

0xa005,	// (0x0008021d) field_cale_ev2_pane_g1_ParamLimits

0xa005,	// (0x0008021d) field_cale_ev2_pane_g1

0xa011,	// (0x00080229) field_cale_ev2_pane_g2_ParamLimits

0xa011,	// (0x00080229) field_cale_ev2_pane_g2

0xa029,	// (0x00080241) field_cale_ev2_pane_g3_ParamLimits

0xa029,	// (0x00080241) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x00085988) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x00085988) field_cale_ev2_pane_g

0x5187,	// (0x0007b39f) field_cale_ev2_pane_t1_ParamLimits

0x5187,	// (0x0007b39f) field_cale_ev2_pane_t1

0x519e,	// (0x0007b3b6) field_cale_ev2_pane_t2_ParamLimits

0x519e,	// (0x0007b3b6) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x00085991) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x00085991) field_cale_ev2_pane_t

0x8d94,	// (0x0007efac) main_postcard_pane_g5_ParamLimits

0x8d94,	// (0x0007efac) main_postcard_pane_g5

0x8da2,	// (0x0007efba) main_postcard_pane_g6_ParamLimits

0x8da2,	// (0x0007efba) main_postcard_pane_g6

0x6dd9,	// (0x0007cff1) camera2_autofocus_pane_cp_ParamLimits

0x6dd9,	// (0x0007cff1) camera2_autofocus_pane_cp

0xf0bc,	// (0x000852d4) main_mup3_pane

0xa06d,	// (0x00080285) main_mup3_pane_g1_ParamLimits

0xa06d,	// (0x00080285) main_mup3_pane_g1

0xa08e,	// (0x000802a6) main_mup3_pane_g2_ParamLimits

0xa08e,	// (0x000802a6) main_mup3_pane_g2

0xa10a,	// (0x00080322) main_mup3_pane_g3_ParamLimits

0xa10a,	// (0x00080322) main_mup3_pane_g3

0xa14d,	// (0x00080365) main_mup3_pane_g4_ParamLimits

0xa14d,	// (0x00080365) main_mup3_pane_g4

0xa190,	// (0x000803a8) main_mup3_pane_g5_ParamLimits

0xa190,	// (0x000803a8) main_mup3_pane_g5

0xa1d5,	// (0x000803ed) main_mup3_pane_g6_ParamLimits

0xa1d5,	// (0x000803ed) main_mup3_pane_g6

0x21df,	// (0x000783f7) main_mup3_pane_g7_ParamLimits

0x21df,	// (0x000783f7) main_mup3_pane_g7

0x0007,

0xf789,	// (0x000859a1) main_mup3_pane_g_ParamLimits

0xf789,	// (0x000859a1) main_mup3_pane_g

0xa24b,	// (0x00080463) main_mup3_pane_t1_ParamLimits

0xa24b,	// (0x00080463) main_mup3_pane_t1

0xa2ba,	// (0x000804d2) main_mup3_pane_t2_ParamLimits

0xa2ba,	// (0x000804d2) main_mup3_pane_t2

0xa383,	// (0x0008059b) main_mup3_pane_t4_ParamLimits

0xa383,	// (0x0008059b) main_mup3_pane_t4

0xa3d1,	// (0x000805e9) main_mup3_pane_t5_ParamLimits

0xa3d1,	// (0x000805e9) main_mup3_pane_t5

0xa481,	// (0x00080699) main_mup3_pane_t6_ParamLimits

0xa481,	// (0x00080699) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x000859b2) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x000859b2) main_mup3_pane_t

0xa52d,	// (0x00080745) mup3_progress_pane_ParamLimits

0xa52d,	// (0x00080745) mup3_progress_pane

0xa5a1,	// (0x000807b9) popup_mup3_control_window_ParamLimits

0xa5a1,	// (0x000807b9) popup_mup3_control_window

0x21ed,	// (0x00078405) popup_mup3_text_window

0xa5ba,	// (0x000807d2) mup3_progress_pane_t1

0xa5d9,	// (0x000807f1) mup3_progress_pane_t2

0x21f5,	// (0x0007840d) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x000859bf) mup3_progress_pane_t

0x2212,	// (0x0007842a) mup_progress_pane_cp03

0xe15b,	// (0x00084373) bg_tb_trans_pane_cp04

0xa5f8,	// (0x00080810) mup3_volume_pane

0xa600,	// (0x00080818) popup_mup3_control_window_g1

0xa609,	// (0x00080821) mup3_volume_pane_g1

0xa612,	// (0x0008082a) mup3_volume_pane_g2

0xa61b,	// (0x00080833) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x000859c6) mup3_volume_pane_g

0xe15b,	// (0x00084373) bg_tb_trans_pane_cp03

0x2222,	// (0x0007843a) popup_mup3_text_window_g1

0x222a,	// (0x00078442) popup_mup3_text_window_t1

0xed1b,	// (0x00084f33) list_calc_item_pane_g1_ParamLimits

0x1c6b,	// (0x00077e83) mup_volume_pane_cp_g1

0x9f95,	// (0x000801ad) main_touch_calib_pane_t3

0x9fab,	// (0x000801c3) main_touch_calib_pane_t4

0x9fc1,	// (0x000801d9) main_touch_calib_pane_t5

0x5f8c,	// (0x0007c1a4) aid_cell_size_toolbar2

0x5f94,	// (0x0007c1ac) aid_popup3_width_pane

0x5fd4,	// (0x0007c1ec) aid_zoom_text_msg_primary

0x6db0,	// (0x0007cfc8) vorec_t7

0xecdf,	// (0x00084ef7) bg_calc_paper_pane_g1_ParamLimits

0xeceb,	// (0x00084f03) bg_calc_paper_pane_g2_ParamLimits

0xecf7,	// (0x00084f0f) bg_calc_paper_pane_g3_ParamLimits

0xed03,	// (0x00084f1b) bg_calc_paper_pane_g4_ParamLimits

0xed0f,	// (0x00084f27) bg_calc_paper_pane_g5_ParamLimits

0x661a,	// (0x0007c832) bg_calc_paper_pane_g6_ParamLimits

0x662b,	// (0x0007c843) bg_calc_paper_pane_g7_ParamLimits

0x663c,	// (0x0007c854) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x00085379) bg_calc_paper_pane_g_ParamLimits

0x664d,	// (0x0007c865) calc_bg_paper_pane_g9_ParamLimits

0x6ec0,	// (0x0007d0d8) image_qvga_pane_ParamLimits

0x6ec0,	// (0x0007d0d8) image_qvga_pane

0xebef,	// (0x00084e07) bg_popup_sub_pane_cp04_ParamLimits

0x08e3,	// (0x00076afb) popup_mup_playback_window_g1_ParamLimits

0x08ef,	// (0x00076b07) popup_mup_playback_window_t1_ParamLimits

0x0904,	// (0x00076b1c) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x00085705) popup_mup_playback_window_t_ParamLimits

0x9a94,	// (0x0007fcac) main_mup2_pane_g3_ParamLimits

0x9a94,	// (0x0007fcac) main_mup2_pane_g3

0x7190,	// (0x0007d3a8) popup_toolbar_window_cp04

0x0d0e,	// (0x00076f26) popup_call2_audio_second_window_g3_ParamLimits

0x0d0e,	// (0x00076f26) popup_call2_audio_second_window_g3

0x1118,	// (0x00077330) popup_call2_audio_first_window_g4_ParamLimits

0x1118,	// (0x00077330) popup_call2_audio_first_window_g4

0x17a3,	// (0x000779bb) popup_call2_audio_in_window_g4_ParamLimits

0x17a3,	// (0x000779bb) popup_call2_audio_in_window_g4

0x8eac,	// (0x0007f0c4) aid_area_sk_bg_cut_ParamLimits

0x8eac,	// (0x0007f0c4) aid_area_sk_bg_cut

0x0919,	// (0x00076b31) aid_area_sk_bg_cut_2_ParamLimits

0x0919,	// (0x00076b31) aid_area_sk_bg_cut_2

0x9e24,	// (0x0008003c) aid_placing_details_win

0x9e2c,	// (0x00080044) aid_placing_details_win_2

0x208c,	// (0x000782a4) camera2_autofocus_pane_g1_ParamLimits

0x61e3,	// (0x0007c3fb) popup_fixed_preview_cale_window_ParamLimits

0x61e3,	// (0x0007c3fb) popup_fixed_preview_cale_window

0x0702,	// (0x0007691a) navi_slider_pane_g3

0x06f9,	// (0x00076911) navi_slider_pane_g4

0x06f0,	// (0x00076908) navi_slider_pane_g5

0x0702,	// (0x0007691a) navi_slider_pane_g6

0x87e4,	// (0x0007e9fc) navi_slider_pane_g7

0x0823,	// (0x00076a3b) mup_scale_pane_g3

0x082c,	// (0x00076a44) mup_scale_pane_g4

0x0835,	// (0x00076a4d) mup_scale_pane_g5

0x8c23,	// (0x0007ee3b) mup_scale_pane_g6

0x8c2c,	// (0x0007ee44) mup_scale_pane_g7

0x0702,	// (0x0007691a) cams2_slider_pane_g3

0x1ced,	// (0x00077f05) cams2_slider_pane_g4

0x9d7c,	// (0x0007ff94) cams2_slider_pane_g5

0x0702,	// (0x0007691a) cams2_slider_pane_g6

0x9d84,	// (0x0007ff9c) cams2_slider_pane_g7

0x1f1a,	// (0x00078132) camera2_autofocus_pane_cp_g1

0x1b04,	// (0x00077d1c) bg_popup_preview_window_pane_cp02_ParamLimits

0x1b04,	// (0x00077d1c) bg_popup_preview_window_pane_cp02

0x2238,	// (0x00078450) list_fp_cale_pane_ParamLimits

0x2238,	// (0x00078450) list_fp_cale_pane

0x2244,	// (0x0007845c) popup_fixed_preview_cale_window_t1_ParamLimits

0x2244,	// (0x0007845c) popup_fixed_preview_cale_window_t1

0xa624,	// (0x0008083c) popup_fixed_preview_cale_window_t2_ParamLimits

0xa624,	// (0x0008083c) popup_fixed_preview_cale_window_t2

0xa639,	// (0x00080851) popup_fixed_preview_cale_window_t3_ParamLimits

0xa639,	// (0x00080851) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x000859cd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x000859cd) popup_fixed_preview_cale_window_t

0xa64e,	// (0x00080866) list_single_fp_cale_pane_ParamLimits

0xa64e,	// (0x00080866) list_single_fp_cale_pane

0x2262,	// (0x0007847a) list_single_fp_cale_pane_g1_ParamLimits

0x2262,	// (0x0007847a) list_single_fp_cale_pane_g1

0x226e,	// (0x00078486) list_single_fp_cale_pane_g2_ParamLimits

0x226e,	// (0x00078486) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x000859d4) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x000859d4) list_single_fp_cale_pane_g

0x2287,	// (0x0007849f) list_single_fp_cale_pane_t1_ParamLimits

0x2287,	// (0x0007849f) list_single_fp_cale_pane_t1

0x2299,	// (0x000784b1) list_single_fp_cale_pane_t2_ParamLimits

0x2299,	// (0x000784b1) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x000859db) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x000859db) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe15b,	// (0x00084373) main_dialer_pane

0xa662,	// (0x0008087a) aid_cell_size_keypad

0xa66c,	// (0x00080884) dialer_ne_pane

0xa676,	// (0x0008088e) grid_dialer_command_1_pane

0xa67e,	// (0x00080896) grid_dialer_command_2_pane

0xa686,	// (0x0008089e) grid_dialer_keypad_pane

0xa69a,	// (0x000808b2) bg_popup_call_pane_cp06_ParamLimits

0xa69a,	// (0x000808b2) bg_popup_call_pane_cp06

0xa6a6,	// (0x000808be) dialer_ne_clear_pane_ParamLimits

0xa6a6,	// (0x000808be) dialer_ne_clear_pane

0x22cc,	// (0x000784e4) dialer_ne_pane_g1

0x22d4,	// (0x000784ec) dialer_ne_pane_t1_ParamLimits

0x22d4,	// (0x000784ec) dialer_ne_pane_t1

0xa6b2,	// (0x000808ca) dialer_ne_pane_t2_ParamLimits

0xa6b2,	// (0x000808ca) dialer_ne_pane_t2

0xa6cf,	// (0x000808e7) dialer_ne_pane_t3_ParamLimits

0xa6cf,	// (0x000808e7) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x000859e0) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x000859e0) dialer_ne_pane_t

0xa6f3,	// (0x0008090b) dialer_ne_pane_t3_copy1_ParamLimits

0xa6f3,	// (0x0008090b) dialer_ne_pane_t3_copy1

0xa717,	// (0x0008092f) cell_dialer_keypad_pane_ParamLimits

0xa717,	// (0x0008092f) cell_dialer_keypad_pane

0xa72e,	// (0x00080946) cell_dialer_command_1_pane_ParamLimits

0xa72e,	// (0x00080946) cell_dialer_command_1_pane

0xa744,	// (0x0008095c) cell_dialer_command_2_pane_ParamLimits

0xa744,	// (0x0008095c) cell_dialer_command_2_pane

0x22e6,	// (0x000784fe) bg_button_pane_cp02_ParamLimits

0x22e6,	// (0x000784fe) bg_button_pane_cp02

0xa753,	// (0x0008096b) cell_dialer_keypad_pane_g1_ParamLimits

0xa753,	// (0x0008096b) cell_dialer_keypad_pane_g1

0x22e6,	// (0x000784fe) bg_button_pane_cp03_ParamLimits

0x22e6,	// (0x000784fe) bg_button_pane_cp03

0xa768,	// (0x00080980) cell_dialer_command_1_pane_g1_ParamLimits

0xa768,	// (0x00080980) cell_dialer_command_1_pane_g1

0x22f2,	// (0x0007850a) bg_button_pane_cp04

0xa77c,	// (0x00080994) cell_dialer_command_2_pane_g1

0x06df,	// (0x000768f7) bg_button_pane_cp06

0x22fa,	// (0x00078512) dialer_ne_clear_pane_g1

0x871f,	// (0x0007e937) navi_pane_g2

0x874d,	// (0x0007e965) navi_pane_g3

0x0002,

0xf3f0,	// (0x00085608) navi_pane_g

0x8778,	// (0x0007e990) navi_pane_mv_g2

0x879f,	// (0x0007e9b7) navi_pane_mv_g5

0x87a7,	// (0x0007e9bf) navi_pane_mv_t1

0xecd3,	// (0x00084eeb) main_clock2_pane

0xa7bc,	// (0x000809d4) main_clock2_list_pane_ParamLimits

0xa7bc,	// (0x000809d4) main_clock2_list_pane

0xa7e6,	// (0x000809fe) main_clock2_pane_t1_ParamLimits

0xa7e6,	// (0x000809fe) main_clock2_pane_t1

0xa80a,	// (0x00080a22) main_clock2_pane_t2_ParamLimits

0xa80a,	// (0x00080a22) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x000859e7) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x000859e7) main_clock2_pane_t

0xa865,	// (0x00080a7d) popup_clock_analogue_window_cp03_ParamLimits

0xa865,	// (0x00080a7d) popup_clock_analogue_window_cp03

0xa883,	// (0x00080a9b) popup_clock_digital_window_cp02_ParamLimits

0xa883,	// (0x00080a9b) popup_clock_digital_window_cp02

0xa8f2,	// (0x00080b0a) main_clock2_list_single_pane_ParamLimits

0xa8f2,	// (0x00080b0a) main_clock2_list_single_pane

0x06df,	// (0x000768f7) list_highlight_pane_cp05

0x2318,	// (0x00078530) main_clock2_list_single_pane_t1

0x7190,	// (0x0007d3a8) popup_toolbar_window_cp04_ParamLimits

0x9e4e,	// (0x00080066) camera2_autofocus_pane_g2_ParamLimits

0x9e4e,	// (0x00080066) camera2_autofocus_pane_g2

0x9e5a,	// (0x00080072) camera2_autofocus_pane_g3_ParamLimits

0x9e5a,	// (0x00080072) camera2_autofocus_pane_g3

0x9e66,	// (0x0008007e) camera2_autofocus_pane_g4_ParamLimits

0x9e66,	// (0x0008007e) camera2_autofocus_pane_g4

0x9e72,	// (0x0008008a) camera2_autofocus_pane_g5_ParamLimits

0x9e72,	// (0x0008008a) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x00085930) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x00085930) camera2_autofocus_pane_g

0xa04d,	// (0x00080265) camera2_autofocus_pane_cp_g2

0xa055,	// (0x0008026d) camera2_autofocus_pane_cp_g3

0xa05d,	// (0x00080275) camera2_autofocus_pane_cp_g4

0xa065,	// (0x0008027d) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x00085996) camera2_autofocus_pane_cp_g

0xa692,	// (0x000808aa) popup_dialer_spcha_window

0xe15b,	// (0x00084373) bg_popup_sub_pane_cp07

0x2326,	// (0x0007853e) list_spcha_pane

0x232e,	// (0x00078546) list_single_spcha_pane_ParamLimits

0x232e,	// (0x00078546) list_single_spcha_pane

0xe15b,	// (0x00084373) list_highlight_pane_cp06

0x233f,	// (0x00078557) list_single_spcha_pane_t1

0x154d,	// (0x00077765) popup_call2_audio_out_window_g4_ParamLimits

0x154d,	// (0x00077765) popup_call2_audio_out_window_g4

0xe15b,	// (0x00084373) main_imed2_pane

0x94e9,	// (0x0007f701) popup_imed_adjust2_window

0x94fc,	// (0x0007f714) popup_imed_trans_window_ParamLimits

0x94fc,	// (0x0007f714) popup_imed_trans_window

0x1d56,	// (0x00077f6e) popup_blid_sat_info2_window_t1

0x1d64,	// (0x00077f7c) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x000858c5) popup_blid_sat_info2_window_t

0xa99c,	// (0x00080bb4) aid_size_cell_colour_35

0xa9b6,	// (0x00080bce) aid_size_cell_colour_112

0xa9cd,	// (0x00080be5) aid_size_cell_effect

0xf0bc,	// (0x000852d4) bg_tb_trans_pane_cp02

0x02ad,	// (0x000764c5) heading_imed_pane

0xa9e7,	// (0x00080bff) listscroll_imed_pane

0x234d,	// (0x00078565) heading_imed_pane_g1

0x2355,	// (0x0007856d) heading_imed_pane_t1

0x2363,	// (0x0007857b) grid_imed_colour_35_pane_ParamLimits

0x2363,	// (0x0007857b) grid_imed_colour_35_pane

0xa9f3,	// (0x00080c0b) grid_imed_effect_pane

0x237b,	// (0x00078593) list_imed_aspect_pane

0xaa03,	// (0x00080c1b) scroll_pane_cp027_ParamLimits

0xaa03,	// (0x00080c1b) scroll_pane_cp027

0xaa0f,	// (0x00080c27) cell_imed_effect_pane_ParamLimits

0xaa0f,	// (0x00080c27) cell_imed_effect_pane

0x2383,	// (0x0007859b) cell_imed_colour_pane_ParamLimits

0x2383,	// (0x0007859b) cell_imed_colour_pane

0x23c5,	// (0x000785dd) cell_imed_colour_pane_g1_ParamLimits

0x23c5,	// (0x000785dd) cell_imed_colour_pane_g1

0x23d6,	// (0x000785ee) hgihlgiht_grid_pane_cp016_ParamLimits

0x23d6,	// (0x000785ee) hgihlgiht_grid_pane_cp016

0xaa27,	// (0x00080c3f) cell_imed_effect_pane_g1

0xaa2f,	// (0x00080c47) grid_highlight_pane_cp017

0x23e7,	// (0x000785ff) list_imed_single_pane_ParamLimits

0x23e7,	// (0x000785ff) list_imed_single_pane

0xe15b,	// (0x00084373) list_highlight_pane_cp07

0x23fd,	// (0x00078615) list_imed_aspect_pane_comp1_t1

0x1b10,	// (0x00077d28) bg_tb_trans_pane_cp05

0x241f,	// (0x00078637) popup_imed_adjust2_window_g1

0x2446,	// (0x0007865e) popup_imed_adjust2_window_t1

0x245e,	// (0x00078676) slider_imed_adjust_pane

0x2472,	// (0x0007868a) slider_imed_adjust_pane_g1

0x2482,	// (0x0007869a) slider_imed_adjust_pane_g2

0x2492,	// (0x000786aa) slider_imed_adjust_pane_g3

0x24a3,	// (0x000786bb) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x00085a04) slider_imed_adjust_pane_g

0xaa38,	// (0x00080c50) aid_size_cell_clipart2

0xaa44,	// (0x00080c5c) grid_imed_clipart_pane

0x24b4,	// (0x000786cc) scroll_pane_cp031

0xaa4e,	// (0x00080c66) cell_imed_clipart_pane_ParamLimits

0xaa4e,	// (0x00080c66) cell_imed_clipart_pane

0xaa75,	// (0x00080c8d) cell_imed_clipart_pane_g1

0xe15b,	// (0x00084373) grid_highlight_pane_cp014

0xa7c8,	// (0x000809e0) main_clock2_pane_g1_ParamLimits

0xa7c8,	// (0x000809e0) main_clock2_pane_g1

0xa89d,	// (0x00080ab5) aid_call2_pane_cp10

0xa8af,	// (0x00080ac7) aid_call_pane_cp10

0x0614,	// (0x0007682c) popup_clock_analogue_window_cp10_g1

0x0614,	// (0x0007682c) popup_clock_analogue_window_cp10_g2

0xa8c1,	// (0x00080ad9) popup_clock_analogue_window_cp10_g3

0xa8c1,	// (0x00080ad9) popup_clock_analogue_window_cp10_g4

0x0614,	// (0x0007682c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x000859f2) popup_clock_analogue_window_cp10_g

0xa8d3,	// (0x00080aeb) popup_clock_analogue_window_cp10_t1

0xa904,	// (0x00080b1c) clock_digital_number_pane_cp10_ParamLimits

0xa904,	// (0x00080b1c) clock_digital_number_pane_cp10

0xa91c,	// (0x00080b34) clock_digital_number_pane_cp11_ParamLimits

0xa91c,	// (0x00080b34) clock_digital_number_pane_cp11

0xa934,	// (0x00080b4c) clock_digital_number_pane_cp12_ParamLimits

0xa934,	// (0x00080b4c) clock_digital_number_pane_cp12

0xa94c,	// (0x00080b64) clock_digital_number_pane_cp13_ParamLimits

0xa94c,	// (0x00080b64) clock_digital_number_pane_cp13

0xa964,	// (0x00080b7c) clock_digital_separator_pane_cp10_ParamLimits

0xa964,	// (0x00080b7c) clock_digital_separator_pane_cp10

0xa97c,	// (0x00080b94) popup_clock_digital_window_cp02_t1_ParamLimits

0xa97c,	// (0x00080b94) popup_clock_digital_window_cp02_t1

0xebe7,	// (0x00084dff) clock_digital_number_pane_cp10_g1

0xebe7,	// (0x00084dff) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x00085a0d) clock_digital_number_pane_cp10_g

0xebe7,	// (0x00084dff) clock_digital_separator_pane_cp10_g1

0xebe7,	// (0x00084dff) clock_digital_separator_pane_g2_cp10

0x06af,	// (0x000768c7) navi_pane_vded_g4

0x06b8,	// (0x000768d0) navi_pane_vded_g5

0x06c1,	// (0x000768d9) navi_pane_vded_t1

0xe15b,	// (0x00084373) main_vded_pane

0xaa7e,	// (0x00080c96) main_vded_pane_g1

0xaa8a,	// (0x00080ca2) main_vded_pane_g2

0xaa94,	// (0x00080cac) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x00085a12) main_vded_pane_g

0xaa9e,	// (0x00080cb6) main_vded_pane_t1

0xaaac,	// (0x00080cc4) main_vded_pane_t2

0x0001,

0xf801,	// (0x00085a19) main_vded_pane_t

0xaaba,	// (0x00080cd2) vded_slider_pane

0xaac4,	// (0x00080cdc) vded_video_pane

0x24bc,	// (0x000786d4) vded_video_pane_g1

0xaace,	// (0x00080ce6) vded_video_pane_g2

0x1f1a,	// (0x00078132) vded_video_pane_g3

0x0002,

0xf806,	// (0x00085a1e) vded_video_pane_g

0x24c6,	// (0x000786de) vded_slider_pane_g1

0x24cf,	// (0x000786e7) vded_slider_pane_g2

0x24d8,	// (0x000786f0) vded_slider_pane_g3

0x24e1,	// (0x000786f9) vded_slider_pane_g4

0x24ea,	// (0x00078702) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x00085a25) vded_slider_pane_g

0xa593,	// (0x000807ab) mup3_rocker_pane_ParamLimits

0xa593,	// (0x000807ab) mup3_rocker_pane

0xaad7,	// (0x00080cef) mup3_control_keys_pane_g1

0xaadf,	// (0x00080cf7) mup3_control_keys_pane_g2

0xaae7,	// (0x00080cff) mup3_control_keys_pane_g3

0xaaef,	// (0x00080d07) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x00085a30) mup3_control_keys_pane_g

0x620b,	// (0x0007c423) popup_toolbar2_fixed_window_cp01_ParamLimits

0x620b,	// (0x0007c423) popup_toolbar2_fixed_window_cp01

0xa5ad,	// (0x000807c5) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa5ad,	// (0x000807c5) popup_toolbar2_fixed_window_cp02

0x0e80,	// (0x00077098) popup_call2_audio_second_window_t4_ParamLimits

0x0e80,	// (0x00077098) popup_call2_audio_second_window_t4

0x13ba,	// (0x000775d2) popup_call2_audio_first_window_t6_ParamLimits

0x13ba,	// (0x000775d2) popup_call2_audio_first_window_t6

0x1650,	// (0x00077868) popup_call2_audio_out_window_t6_ParamLimits

0x1650,	// (0x00077868) popup_call2_audio_out_window_t6

0xe15b,	// (0x00084373) main_vitu_pane

0xaaff,	// (0x00080d17) aid_size_cell_itu_ParamLimits

0xaaff,	// (0x00080d17) aid_size_cell_itu

0x3a36,	// (0x00079c4e) bg_popup_window_pane_cp08_ParamLimits

0x3a36,	// (0x00079c4e) bg_popup_window_pane_cp08

0xab0d,	// (0x00080d25) field_vitu_entry_pane_ParamLimits

0xab0d,	// (0x00080d25) field_vitu_entry_pane

0xab1c,	// (0x00080d34) grid_vitu_function_pane_ParamLimits

0xab1c,	// (0x00080d34) grid_vitu_function_pane

0xab2c,	// (0x00080d44) grid_vitu_itu_pane_ParamLimits

0xab2c,	// (0x00080d44) grid_vitu_itu_pane

0xab3c,	// (0x00080d54) cell_vitu_itu_pane_ParamLimits

0xab3c,	// (0x00080d54) cell_vitu_itu_pane

0xab51,	// (0x00080d69) cell_vitu_function_pane_ParamLimits

0xab51,	// (0x00080d69) cell_vitu_function_pane

0xf0bc,	// (0x000852d4) bg_popup_sub_pane_cp08_ParamLimits

0xf0bc,	// (0x000852d4) bg_popup_sub_pane_cp08

0xab65,	// (0x00080d7d) field_vitu_entry_pane_t1_ParamLimits

0xab65,	// (0x00080d7d) field_vitu_entry_pane_t1

0x250b,	// (0x00078723) field_vitu_entry_pane_t2_ParamLimits

0x250b,	// (0x00078723) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x00085a3e) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x00085a3e) field_vitu_entry_pane_t

0x2528,	// (0x00078740) bg_button_pane_cp05_ParamLimits

0x2528,	// (0x00078740) bg_button_pane_cp05

0xab82,	// (0x00080d9a) cell_vitu_itu_pane_g1

0xab9a,	// (0x00080db2) cell_vitu_itu_pane_t1_ParamLimits

0xab9a,	// (0x00080db2) cell_vitu_itu_pane_t1

0xabac,	// (0x00080dc4) cell_vitu_itu_pane_t2_ParamLimits

0xabac,	// (0x00080dc4) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x00085a43) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x00085a43) cell_vitu_itu_pane_t

0x2536,	// (0x0007874e) bg_button_pane_cp07

0xabef,	// (0x00080e07) cell_vitu_function_pane_g1

0x64be,	// (0x0007c6d6) main_calc_pane_g1

0x5fc8,	// (0x0007c1e0) aid_visual_content_pane

0xe15b,	// (0x00084373) main_vradio_pane

0xabf8,	// (0x00080e10) main_vradio_pane_g1_ParamLimits

0xabf8,	// (0x00080e10) main_vradio_pane_g1

0x2540,	// (0x00078758) main_vradio_pane_g2_ParamLimits

0x2540,	// (0x00078758) main_vradio_pane_g2

0x0001,

0xf832,	// (0x00085a4a) main_vradio_pane_g_ParamLimits

0xf832,	// (0x00085a4a) main_vradio_pane_g

0xac08,	// (0x00080e20) main_vradio_pane_t1_ParamLimits

0xac08,	// (0x00080e20) main_vradio_pane_t1

0xac1a,	// (0x00080e32) main_vradio_pane_t2_ParamLimits

0xac1a,	// (0x00080e32) main_vradio_pane_t2

0x254d,	// (0x00078765) main_vradio_pane_t3_ParamLimits

0x254d,	// (0x00078765) main_vradio_pane_t3

0x0002,

0xf837,	// (0x00085a4f) main_vradio_pane_t_ParamLimits

0xf837,	// (0x00085a4f) main_vradio_pane_t

0xac2c,	// (0x00080e44) vradio_rocker_control_pane_ParamLimits

0xac2c,	// (0x00080e44) vradio_rocker_control_pane

0xac38,	// (0x00080e50) vradio_station_info_pane_ParamLimits

0xac38,	// (0x00080e50) vradio_station_info_pane

0x2561,	// (0x00078779) vradio_frequency_info_pane_ParamLimits

0x2561,	// (0x00078779) vradio_frequency_info_pane

0x1f1a,	// (0x00078132) vradio_station_info_pane_g1

0x2570,	// (0x00078788) vradio_station_info_pane_t1_ParamLimits

0x2570,	// (0x00078788) vradio_station_info_pane_t1

0x2592,	// (0x000787aa) vradio_station_info_pane_t2_ParamLimits

0x2592,	// (0x000787aa) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x00085a56) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x00085a56) vradio_station_info_pane_t

0x25a4,	// (0x000787bc) vradio_tuning_pane

0x25ac,	// (0x000787c4) vradio_rocker_control_pane_g1

0x25b4,	// (0x000787cc) vradio_rocker_control_pane_g2

0x25bc,	// (0x000787d4) vradio_rocker_control_pane_g3

0x25c4,	// (0x000787dc) vradio_rocker_control_pane_g4

0x25cc,	// (0x000787e4) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x00085a5b) vradio_rocker_control_pane_g

0xac47,	// (0x00080e5f) vradio_frequency_info_pane_g1

0x25d4,	// (0x000787ec) vradio_frequency_info_pane_t1_ParamLimits

0x25d4,	// (0x000787ec) vradio_frequency_info_pane_t1

0xac51,	// (0x00080e69) vradio_tuning_pane_g1

0xac5a,	// (0x00080e72) vradio_tuning_pane_t1

0x6011,	// (0x0007c229) area_side_right_pane_ParamLimits

0x6011,	// (0x0007c229) area_side_right_pane

0x1acb,	// (0x00077ce3) status_small_pane_g1

0x1ad3,	// (0x00077ceb) status_small_pane_g2

0x1adc,	// (0x00077cf4) status_small_pane_g3

0x1ae5,	// (0x00077cfd) status_small_pane_g4

0x0003,

0xf603,	// (0x0008581b) status_small_pane_g

0x1aee,	// (0x00077d06) status_small_pane_t1

0xe15b,	// (0x00084373) main_video3_pane

0x25e8,	// (0x00078800) cams_zoom_vslider_pane

0x25f0,	// (0x00078808) image3_wide_pane_ParamLimits

0x25f0,	// (0x00078808) image3_wide_pane

0x260a,	// (0x00078822) image3_wide_small_pane

0x2616,	// (0x0007882e) main_video3_pane_g1_ParamLimits

0x2616,	// (0x0007882e) main_video3_pane_g1

0x2632,	// (0x0007884a) main_video3_pane_g2_ParamLimits

0x2632,	// (0x0007884a) main_video3_pane_g2

0x0001,

0xf84e,	// (0x00085a66) main_video3_pane_g_ParamLimits

0xf84e,	// (0x00085a66) main_video3_pane_g

0x264e,	// (0x00078866) main_video3_pane_t1_ParamLimits

0x264e,	// (0x00078866) main_video3_pane_t1

0x2679,	// (0x00078891) main_video3_pane_t2_ParamLimits

0x2679,	// (0x00078891) main_video3_pane_t2

0x26a4,	// (0x000788bc) main_video3_pane_t3_ParamLimits

0x26a4,	// (0x000788bc) main_video3_pane_t3

0x0002,

0xf853,	// (0x00085a6b) main_video3_pane_t_ParamLimits

0xf853,	// (0x00085a6b) main_video3_pane_t

0x26d1,	// (0x000788e9) cams_zoom_vslider_pane_g1

0x26e2,	// (0x000788fa) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x00085a72) cams_zoom_vslider_pane_g

0x26ea,	// (0x00078902) small_slider_vertical_pane

0x1f1a,	// (0x00078132) small_slider_vertical_pane_g1

0x1f1a,	// (0x00078132) small_slider_vertical_pane_g2

0x26f2,	// (0x0007890a) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x00085a77) small_slider_vertical_pane_g

0xe15b,	// (0x00084373) main_hwr_training_pane

0x26fb,	// (0x00078913) hwr_training_instruct_pane_ParamLimits

0x26fb,	// (0x00078913) hwr_training_instruct_pane

0xac69,	// (0x00080e81) hwr_training_navi_pane_ParamLimits

0xac69,	// (0x00080e81) hwr_training_navi_pane

0xac83,	// (0x00080e9b) hwr_training_write_pane_ParamLimits

0xac83,	// (0x00080e9b) hwr_training_write_pane

0xe15b,	// (0x00084373) bg_frame_shadow_pane

0x2732,	// (0x0007894a) hwr_training_write_pane_g1

0x273a,	// (0x00078952) hwr_training_write_pane_g2

0x2742,	// (0x0007895a) hwr_training_write_pane_g3

0x274a,	// (0x00078962) hwr_training_write_pane_g4

0x2752,	// (0x0007896a) hwr_training_write_pane_g5

0x275a,	// (0x00078972) hwr_training_write_pane_g6

0x2762,	// (0x0007897a) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x00085a7e) hwr_training_write_pane_g

0xacbb,	// (0x00080ed3) hwr_training_navi_pane_g1_ParamLimits

0xacbb,	// (0x00080ed3) hwr_training_navi_pane_g1

0xaccd,	// (0x00080ee5) hwr_training_navi_pane_g2_ParamLimits

0xaccd,	// (0x00080ee5) hwr_training_navi_pane_g2

0xacdf,	// (0x00080ef7) hwr_training_navi_pane_g3_ParamLimits

0xacdf,	// (0x00080ef7) hwr_training_navi_pane_g3

0xacef,	// (0x00080f07) hwr_training_navi_pane_g4_ParamLimits

0xacef,	// (0x00080f07) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x00085a8d) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x00085a8d) hwr_training_navi_pane_g

0xad09,	// (0x00080f21) hwr_training_navi_pane_t1

0xad17,	// (0x00080f2f) list_single_hwr_training_instruct_pane_ParamLimits

0xad17,	// (0x00080f2f) list_single_hwr_training_instruct_pane

0x276a,	// (0x00078982) list_single_hwr_training_instruct_pane_t1

0x1e5a,	// (0x00078072) bg_frame_shadow_pane_g1

0x2779,	// (0x00078991) bg_frame_shadow_pane_g2

0x2781,	// (0x00078999) bg_frame_shadow_pane_g3

0x2789,	// (0x000789a1) bg_frame_shadow_pane_g4

0x2791,	// (0x000789a9) bg_frame_shadow_pane_g5

0x2799,	// (0x000789b1) bg_frame_shadow_pane_g6

0x27a1,	// (0x000789b9) bg_frame_shadow_pane_g7

0xed9e,	// (0x00084fb6) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x00085a98) bg_frame_shadow_pane_g

0xe15b,	// (0x00084373) main_video_tele_dialer_pane

0xad46,	// (0x00080f5e) aid_size_cell_video_keypad_ParamLimits

0xad46,	// (0x00080f5e) aid_size_cell_video_keypad

0xad56,	// (0x00080f6e) grid_video_dialer_keypad_pane_ParamLimits

0xad56,	// (0x00080f6e) grid_video_dialer_keypad_pane

0xad8a,	// (0x00080fa2) video_down_pane_cp_ParamLimits

0xad8a,	// (0x00080fa2) video_down_pane_cp

0xadb4,	// (0x00080fcc) cell_video_dialer_keypad_pane_ParamLimits

0xadb4,	// (0x00080fcc) cell_video_dialer_keypad_pane

0x27a9,	// (0x000789c1) bg_button_pane_cp08_ParamLimits

0x27a9,	// (0x000789c1) bg_button_pane_cp08

0xadc9,	// (0x00080fe1) cell_video_dialer_keypad_pane_g1_ParamLimits

0xadc9,	// (0x00080fe1) cell_video_dialer_keypad_pane_g1

0xa587,	// (0x0008079f) mup3_rocker2_pane_ParamLimits

0xa587,	// (0x0008079f) mup3_rocker2_pane

0x1f1a,	// (0x00078132) mup3_rocker2_pane_g1

0x945d,	// (0x0007f675) main_dialer2_pane

0xe15b,	// (0x00084373) main_mp4_pane

0xae0c,	// (0x00081024) main_mp4_pane_g1_ParamLimits

0xae0c,	// (0x00081024) main_mp4_pane_g1

0xae1a,	// (0x00081032) main_mp4_pane_g2_ParamLimits

0xae1a,	// (0x00081032) main_mp4_pane_g2

0xae28,	// (0x00081040) main_mp4_pane_g3_ParamLimits

0xae28,	// (0x00081040) main_mp4_pane_g3

0xae6d,	// (0x00081085) main_mp4_pane_g4_ParamLimits

0xae6d,	// (0x00081085) main_mp4_pane_g4

0xae95,	// (0x000810ad) main_mp4_pane_g5_ParamLimits

0xae95,	// (0x000810ad) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x00085ab8) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x00085ab8) main_mp4_pane_g

0xaee5,	// (0x000810fd) main_mp4_pane_t1_ParamLimits

0xaee5,	// (0x000810fd) main_mp4_pane_t1

0xaf41,	// (0x00081159) main_mp4_pane_t2_ParamLimits

0xaf41,	// (0x00081159) main_mp4_pane_t2

0x27b5,	// (0x000789cd) main_mp4_pane_t3_ParamLimits

0x27b5,	// (0x000789cd) main_mp4_pane_t3

0xaf93,	// (0x000811ab) main_mp4_pane_t4_ParamLimits

0xaf93,	// (0x000811ab) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x00085ac5) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x00085ac5) main_mp4_pane_t

0xafd7,	// (0x000811ef) mp4_progress_pane_ParamLimits

0xafd7,	// (0x000811ef) mp4_progress_pane

0xb021,	// (0x00081239) mp4_rocker_pane_ParamLimits

0xb021,	// (0x00081239) mp4_rocker_pane

0x27dd,	// (0x000789f5) mp4_progress_pane_t1

0x27f6,	// (0x00078a0e) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x00085ace) mp4_progress_pane_t

0x280f,	// (0x00078a27) mup_progress_pane_cp04

0x1f1a,	// (0x00078132) mp4_rocker_pane_g1

0xb041,	// (0x00081259) aid_cell_size_keypad2_ParamLimits

0xb041,	// (0x00081259) aid_cell_size_keypad2

0xb051,	// (0x00081269) dialer2_ne_pane_ParamLimits

0xb051,	// (0x00081269) dialer2_ne_pane

0xb05f,	// (0x00081277) grid_dialer2_keypad_pane_ParamLimits

0xb05f,	// (0x00081277) grid_dialer2_keypad_pane

0x2fab,	// (0x000791c3) bg_popup_call_pane_cp07_ParamLimits

0x2fab,	// (0x000791c3) bg_popup_call_pane_cp07

0xb06f,	// (0x00081287) dialer2_ne_pane_t1_ParamLimits

0xb06f,	// (0x00081287) dialer2_ne_pane_t1

0xb094,	// (0x000812ac) cell_dialer2_keypad_pane_ParamLimits

0xb094,	// (0x000812ac) cell_dialer2_keypad_pane

0x2837,	// (0x00078a4f) bg_button_pane_pane_cp04_ParamLimits

0x2837,	// (0x00078a4f) bg_button_pane_pane_cp04

0xb0a9,	// (0x000812c1) cell_dialer2_keypad_pane_g1_ParamLimits

0xb0a9,	// (0x000812c1) cell_dialer2_keypad_pane_g1

0x7052,	// (0x0007d26a) aid_placing_vt_set_content_ParamLimits

0x7052,	// (0x0007d26a) aid_placing_vt_set_content

0x707e,	// (0x0007d296) aid_placing_vt_set_title_ParamLimits

0x707e,	// (0x0007d296) aid_placing_vt_set_title

0xe15b,	// (0x00084373) main_image3_pane

0xb143,	// (0x0008135b) area_side_right_pane_cp01_ParamLimits

0xb143,	// (0x0008135b) area_side_right_pane_cp01

0xe33d,	// (0x00084555) main_image3_pane_g1_ParamLimits

0xe33d,	// (0x00084555) main_image3_pane_g1

0xb170,	// (0x00081388) main_image3_pane_g2_ParamLimits

0xb170,	// (0x00081388) main_image3_pane_g2

0xb189,	// (0x000813a1) main_image3_pane_g3_ParamLimits

0xb189,	// (0x000813a1) main_image3_pane_g3

0xb1a2,	// (0x000813ba) main_image3_pane_g4_ParamLimits

0xb1a2,	// (0x000813ba) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x00085add) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x00085add) main_image3_pane_g

0xb1bb,	// (0x000813d3) main_image3_pane_t1_ParamLimits

0xb1bb,	// (0x000813d3) main_image3_pane_t1

0xb1e0,	// (0x000813f8) main_image3_pane_t2_ParamLimits

0xb1e0,	// (0x000813f8) main_image3_pane_t2

0xb1ff,	// (0x00081417) main_image3_pane_t3_ParamLimits

0xb1ff,	// (0x00081417) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x00085ae6) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x00085ae6) main_image3_pane_t

0x3a36,	// (0x00079c4e) grid_sctrl_middle_pane_cp01_ParamLimits

0x3a36,	// (0x00079c4e) grid_sctrl_middle_pane_cp01

0xb260,	// (0x00081478) cell_sctrl_middle_pane_cp01_ParamLimits

0xb260,	// (0x00081478) cell_sctrl_middle_pane_cp01

0xb271,	// (0x00081489) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb271,	// (0x00081489) cell_sctrl_middle_pane_cp01_g1

0xe15b,	// (0x00084373) main_call4_pane

0xb27e,	// (0x00081496) aid_size_button_call4_ParamLimits

0xb27e,	// (0x00081496) aid_size_button_call4

0xb2ae,	// (0x000814c6) call4_windows_pane_ParamLimits

0xb2ae,	// (0x000814c6) call4_windows_pane

0xb2c8,	// (0x000814e0) grid_call4_button_pane_ParamLimits

0xb2c8,	// (0x000814e0) grid_call4_button_pane

0x2843,	// (0x00078a5b) call4_windows_conf_pane

0x2858,	// (0x00078a70) popup_call4_audio_first_window_ParamLimits

0x2858,	// (0x00078a70) popup_call4_audio_first_window

0x28a4,	// (0x00078abc) popup_call4_audio_second_window_ParamLimits

0x28a4,	// (0x00078abc) popup_call4_audio_second_window

0x28b8,	// (0x00078ad0) popup_call4_audio_wait_window_ParamLimits

0x28b8,	// (0x00078ad0) popup_call4_audio_wait_window

0xb2ec,	// (0x00081504) cell_call4_button_pane_ParamLimits

0xb2ec,	// (0x00081504) cell_call4_button_pane

0xb311,	// (0x00081529) bg_button_pane_cp09_ParamLimits

0xb311,	// (0x00081529) bg_button_pane_cp09

0xb31d,	// (0x00081535) cell_call4_button_pane_g1_ParamLimits

0xb31d,	// (0x00081535) cell_call4_button_pane_g1

0xb32a,	// (0x00081542) cell_call4_button_pane_t1_ParamLimits

0xb32a,	// (0x00081542) cell_call4_button_pane_t1

0x2900,	// (0x00078b18) popup_call4_audio_conf_window_ParamLimits

0x2900,	// (0x00078b18) popup_call4_audio_conf_window

0xa5ba,	// (0x000807d2) mup3_progress_pane_t1_ParamLimits

0xa5d9,	// (0x000807f1) mup3_progress_pane_t2_ParamLimits

0x21f5,	// (0x0007840d) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x000859bf) mup3_progress_pane_t_ParamLimits

0x2212,	// (0x0007842a) mup_progress_pane_cp03_ParamLimits

0xaaf7,	// (0x00080d0f) mup3_control_keys_pane_g4_copy1

0xb005,	// (0x0008121d) mp4_rocker2_pane_ParamLimits

0xb005,	// (0x0008121d) mp4_rocker2_pane

0x291c,	// (0x00078b34) mp4_rocker2_pane_g1

0x2914,	// (0x00078b2c) mp4_rocker2_pane_g2

0xb33c,	// (0x00081554) mp4_rocker2_pane_g3

0xb344,	// (0x0008155c) mp4_rocker2_pane_g4

0xb34c,	// (0x00081564) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x00085aef) mp4_rocker2_pane_g

0xe15b,	// (0x00084373) main_camera4_pane

0xe15b,	// (0x00084373) main_video4_pane

0xad66,	// (0x00080f7e) main_video_tele_dialer_pane_t1_ParamLimits

0xad66,	// (0x00080f7e) main_video_tele_dialer_pane_t1

0xad78,	// (0x00080f90) main_video_tele_dialer_pane_t2_ParamLimits

0xad78,	// (0x00080f90) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x00085aa9) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x00085aa9) main_video_tele_dialer_pane_t

0xb36c,	// (0x00081584) cam4_autofocus_pane_ParamLimits

0xb36c,	// (0x00081584) cam4_autofocus_pane

0xb386,	// (0x0008159e) cam4_image_uncrop_pane_ParamLimits

0xb386,	// (0x0008159e) cam4_image_uncrop_pane

0xb39d,	// (0x000815b5) cam4_indicators_pane_ParamLimits

0xb39d,	// (0x000815b5) cam4_indicators_pane

0xb3b9,	// (0x000815d1) main_camera4_pane_g1_ParamLimits

0xb3b9,	// (0x000815d1) main_camera4_pane_g1

0xb3c5,	// (0x000815dd) main_camera4_pane_g2_ParamLimits

0xb3c5,	// (0x000815dd) main_camera4_pane_g2

0xb3c5,	// (0x000815dd) main_camera4_pane_g3_ParamLimits

0xb3c5,	// (0x000815dd) main_camera4_pane_g3

0xb3d1,	// (0x000815e9) main_camera4_pane_g4_ParamLimits

0xb3d1,	// (0x000815e9) main_camera4_pane_g4

0xb3dd,	// (0x000815f5) main_camera4_pane_g5_ParamLimits

0xb3dd,	// (0x000815f5) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x00085afa) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x00085afa) main_camera4_pane_g

0xb3f7,	// (0x0008160f) main_camera4_pane_t1_ParamLimits

0xb3f7,	// (0x0008160f) main_camera4_pane_t1

0x217a,	// (0x00078392) bg_tb_trans_pane_cp06

0xb447,	// (0x0008165f) cam4_indicators_pane_g1

0xb458,	// (0x00081670) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x00085b15) cam4_indicators_pane_g

0xb476,	// (0x0008168e) cam4_indicators_pane_t1

0xb4a0,	// (0x000816b8) main_video4_pane_g1_ParamLimits

0xb4a0,	// (0x000816b8) main_video4_pane_g1

0xb4ac,	// (0x000816c4) main_video4_pane_g2_ParamLimits

0xb4ac,	// (0x000816c4) main_video4_pane_g2

0xb4b8,	// (0x000816d0) main_video4_pane_g3_ParamLimits

0xb4b8,	// (0x000816d0) main_video4_pane_g3

0xb4c4,	// (0x000816dc) main_video4_pane_g4_ParamLimits

0xb4c4,	// (0x000816dc) main_video4_pane_g4

0x0004,

0xf904,	// (0x00085b1c) main_video4_pane_g_ParamLimits

0xf904,	// (0x00085b1c) main_video4_pane_g

0xb4e4,	// (0x000816fc) vid4_indicators_pane_ParamLimits

0xb4e4,	// (0x000816fc) vid4_indicators_pane

0xb503,	// (0x0008171b) video4_image_uncrop_cif_pane_ParamLimits

0xb503,	// (0x0008171b) video4_image_uncrop_cif_pane

0xb512,	// (0x0008172a) video4_image_uncrop_nhd_pane_ParamLimits

0xb512,	// (0x0008172a) video4_image_uncrop_nhd_pane

0xb386,	// (0x0008159e) video4_image_uncrop_vga_pane_ParamLimits

0xb386,	// (0x0008159e) video4_image_uncrop_vga_pane

0xf0bc,	// (0x000852d4) bg_tb_trans_pane_cp07

0xb527,	// (0x0008173f) vid4_indicators_pane_g1

0xb53b,	// (0x00081753) vid4_indicators_pane_g2

0xb54f,	// (0x00081767) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x00085b27) vid4_indicators_pane_g

0xb57c,	// (0x00081794) vid4_indicators_pane_t1

0xb593,	// (0x000817ab) cam4_autofocus_pane_g1

0xb59b,	// (0x000817b3) cam4_autofocus_pane_g2

0xb5a3,	// (0x000817bb) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x00085b32) cam4_autofocus_pane_g

0xb5ab,	// (0x000817c3) cam4_autofocus_pane_g3_copy1

0xad98,	// (0x00080fb0) video_down_pane_cp_t1

0xada6,	// (0x00080fbe) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x00085aae) video_down_pane_cp_t

0x3a36,	// (0x00079c4e) popup_vitu2_window_ParamLimits

0x3a36,	// (0x00079c4e) popup_vitu2_window

0xb5b3,	// (0x000817cb) aid_size_cell2_itu2_ParamLimits

0xb5b3,	// (0x000817cb) aid_size_cell2_itu2

0xb5d5,	// (0x000817ed) aid_size_cell_itu2_ParamLimits

0xb5d5,	// (0x000817ed) aid_size_cell_itu2

0x2fab,	// (0x000791c3) bg_popup_window_pane_cp09_ParamLimits

0x2fab,	// (0x000791c3) bg_popup_window_pane_cp09

0xb619,	// (0x00081831) field_vitu2_entry_pane_ParamLimits

0xb619,	// (0x00081831) field_vitu2_entry_pane

0xb639,	// (0x00081851) grid_vitu2_function_pane_ParamLimits

0xb639,	// (0x00081851) grid_vitu2_function_pane

0xb67d,	// (0x00081895) grid_vitu2_itu_pane_ParamLimits

0xb67d,	// (0x00081895) grid_vitu2_itu_pane

0xb6f3,	// (0x0008190b) cell_vitu2_itu_pane_ParamLimits

0xb6f3,	// (0x0008190b) cell_vitu2_itu_pane

0xb708,	// (0x00081920) cell_vitu2_function_pane_ParamLimits

0xb708,	// (0x00081920) cell_vitu2_function_pane

0x2924,	// (0x00078b3c) bg_popup_call_pane_cp08_ParamLimits

0x2924,	// (0x00078b3c) bg_popup_call_pane_cp08

0x293d,	// (0x00078b55) field_vitu2_entry_pane_g1

0x2949,	// (0x00078b61) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x00085b39) field_vitu2_entry_pane_g

0x51b3,	// (0x0007b3cb) field_vitu2_entry_pane_t1_ParamLimits

0x51b3,	// (0x0007b3cb) field_vitu2_entry_pane_t1

0x51e3,	// (0x0007b3fb) field_vitu2_entry_pane_t2_ParamLimits

0x51e3,	// (0x0007b3fb) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x00085b40) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x00085b40) field_vitu2_entry_pane_t

0xb749,	// (0x00081961) bg_button_pane_cp010_ParamLimits

0xb749,	// (0x00081961) bg_button_pane_cp010

0xb757,	// (0x0008196f) cell_vitu2_itu_pane_g1

0xb775,	// (0x0008198d) cell_vitu2_itu_pane_t1_ParamLimits

0xb775,	// (0x0008198d) cell_vitu2_itu_pane_t1

0x5200,	// (0x0007b418) cell_vitu2_itu_pane_t2_ParamLimits

0x5200,	// (0x0007b418) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x00085b4a) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x00085b4a) cell_vitu2_itu_pane_t

0xf0bc,	// (0x000852d4) bg_button_pane_cp011

0xb7c7,	// (0x000819df) cell_vitu2_function_pane_g1

0xe15b,	// (0x00084373) main_myfav_hc_pane

0xb241,	// (0x00081459) popup_image3_note_pane_ParamLimits

0xb241,	// (0x00081459) popup_image3_note_pane

0xb24f,	// (0x00081467) popup_image3_tool_bar_pane_ParamLimits

0xb24f,	// (0x00081467) popup_image3_tool_bar_pane

0x526e,	// (0x0007b486) cell_vitu2_itu_pane_t3_ParamLimits

0x526e,	// (0x0007b486) cell_vitu2_itu_pane_t3

0xe15b,	// (0x00084373) bg_popup_trans_pane

0x296b,	// (0x00078b83) grid_image3_tool_bar_pane

0x2975,	// (0x00078b8d) bg_popup_trans_pane_g1

0x0042,	// (0x0007625a) bg_popup_trans_pane_g2

0x297d,	// (0x00078b95) bg_popup_trans_pane_g3

0x2985,	// (0x00078b9d) bg_popup_trans_pane_g4

0x298d,	// (0x00078ba5) bg_popup_trans_pane_g5

0x2995,	// (0x00078bad) bg_popup_trans_pane_g6

0x299d,	// (0x00078bb5) bg_popup_trans_pane_g7

0x29a5,	// (0x00078bbd) bg_popup_trans_pane_g8

0x0022,	// (0x0007623a) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x00085b51) bg_popup_trans_pane_g

0x29ad,	// (0x00078bc5) cell_image3_tool_bar_pane_ParamLimits

0x29ad,	// (0x00078bc5) cell_image3_tool_bar_pane

0x1f1a,	// (0x00078132) cell_image3_tool_bar_pane_g1

0xe15b,	// (0x00084373) bg_popup_trans_pane_cp1

0x29c1,	// (0x00078bd9) popup_image3_note_pane_t1

0x29cf,	// (0x00078be7) popup_image3_note_pane_t2

0x29dd,	// (0x00078bf5) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x00085b64) popup_image3_note_pane_t

0x29eb,	// (0x00078c03) popup_image3_note_pane_t3_copy1

0xb7db,	// (0x000819f3) bg_myfav_hc_instruction_pane_ParamLimits

0xb7db,	// (0x000819f3) bg_myfav_hc_instruction_pane

0xb7f3,	// (0x00081a0b) cell_myfav_contact_pane_ParamLimits

0xb7f3,	// (0x00081a0b) cell_myfav_contact_pane

0xb80d,	// (0x00081a25) cell_myfav_contact_pane_cp1_ParamLimits

0xb80d,	// (0x00081a25) cell_myfav_contact_pane_cp1

0xb825,	// (0x00081a3d) cell_myfav_contact_pane_cp2_ParamLimits

0xb825,	// (0x00081a3d) cell_myfav_contact_pane_cp2

0xb83d,	// (0x00081a55) cell_myfav_contact_pane_cp3_ParamLimits

0xb83d,	// (0x00081a55) cell_myfav_contact_pane_cp3

0xb854,	// (0x00081a6c) cell_myfav_contact_pane_cp4_ParamLimits

0xb854,	// (0x00081a6c) cell_myfav_contact_pane_cp4

0xb86a,	// (0x00081a82) cell_myfav_contact_pane_cp5_ParamLimits

0xb86a,	// (0x00081a82) cell_myfav_contact_pane_cp5

0xb87e,	// (0x00081a96) cell_myfav_contact_pane_cp6_ParamLimits

0xb87e,	// (0x00081a96) cell_myfav_contact_pane_cp6

0xb892,	// (0x00081aaa) cell_myfav_contact_pane_cp7_ParamLimits

0xb892,	// (0x00081aaa) cell_myfav_contact_pane_cp7

0x29f9,	// (0x00078c11) listscroll_gen_pane_cp05

0xb8aa,	// (0x00081ac2) main_myfav_hc_pane_g1_ParamLimits

0xb8aa,	// (0x00081ac2) main_myfav_hc_pane_g1

0xb8c2,	// (0x00081ada) main_myfav_hc_pane_g2_ParamLimits

0xb8c2,	// (0x00081ada) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x00085b6b) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x00085b6b) main_myfav_hc_pane_g

0xb8f2,	// (0x00081b0a) main_myfav_hc_pane_t1_ParamLimits

0xb8f2,	// (0x00081b0a) main_myfav_hc_pane_t1

0x2a02,	// (0x00078c1a) main_myfav_hc_pane_t2_ParamLimits

0x2a02,	// (0x00078c1a) main_myfav_hc_pane_t2

0x2a14,	// (0x00078c2c) main_myfav_hc_pane_t3_ParamLimits

0x2a14,	// (0x00078c2c) main_myfav_hc_pane_t3

0xb909,	// (0x00081b21) main_myfav_hc_pane_t4_ParamLimits

0xb909,	// (0x00081b21) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x00085b72) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x00085b72) main_myfav_hc_pane_t

0x1f1a,	// (0x00078132) bg_myfav_hc_instruction_pane_g1

0x2a26,	// (0x00078c3e) cell_myfav_contact_pane_g1_ParamLimits

0x2a26,	// (0x00078c3e) cell_myfav_contact_pane_g1

0x2a26,	// (0x00078c3e) cell_myfav_contact_pane_g2_ParamLimits

0x2a26,	// (0x00078c3e) cell_myfav_contact_pane_g2

0x2a32,	// (0x00078c4a) cell_myfav_contact_pane_g3_ParamLimits

0x2a32,	// (0x00078c4a) cell_myfav_contact_pane_g3

0x21df,	// (0x000783f7) cell_myfav_contact_pane_g4_ParamLimits

0x21df,	// (0x000783f7) cell_myfav_contact_pane_g4

0x2a3f,	// (0x00078c57) cell_myfav_contact_pane_g5_ParamLimits

0x2a3f,	// (0x00078c57) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x00085b7d) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x00085b7d) cell_myfav_contact_pane_g

0xb8da,	// (0x00081af2) main_myfav_hc_pane_g3_ParamLimits

0xb8da,	// (0x00081af2) main_myfav_hc_pane_g3

0x6146,	// (0x0007c35e) popup_adpt_find_window

0xb933,	// (0x00081b4b) afind_page_pane_ParamLimits

0xb933,	// (0x00081b4b) afind_page_pane

0xb940,	// (0x00081b58) aid_size_cell_afind_ParamLimits

0xb940,	// (0x00081b58) aid_size_cell_afind

0xb95a,	// (0x00081b72) bg_popup_sub_pane_cp09_ParamLimits

0xb95a,	// (0x00081b72) bg_popup_sub_pane_cp09

0xb967,	// (0x00081b7f) find_pane_cp01_ParamLimits

0xb967,	// (0x00081b7f) find_pane_cp01

0x2a4b,	// (0x00078c63) grid_afind_control_pane_ParamLimits

0x2a4b,	// (0x00078c63) grid_afind_control_pane

0xb974,	// (0x00081b8c) grid_afind_pane_ParamLimits

0xb974,	// (0x00081b8c) grid_afind_pane

0xb98e,	// (0x00081ba6) cell_afind_pane_ParamLimits

0xb98e,	// (0x00081ba6) cell_afind_pane

0x1f1a,	// (0x00078132) afind_page_pane_g1

0xb9d6,	// (0x00081bee) afind_page_pane_g2

0xb9df,	// (0x00081bf7) afind_page_pane_g3

0x0002,

0xf970,	// (0x00085b88) afind_page_pane_g

0xb9e8,	// (0x00081c00) afind_page_pane_t1

0x2a5f,	// (0x00078c77) cell_afind_grid_control_pane_ParamLimits

0x2a5f,	// (0x00078c77) cell_afind_grid_control_pane

0x2837,	// (0x00078a4f) bg_button_pane_cp69_ParamLimits

0x2837,	// (0x00078a4f) bg_button_pane_cp69

0xba08,	// (0x00081c20) cell_afind_pane_g1_ParamLimits

0xba08,	// (0x00081c20) cell_afind_pane_g1

0xba15,	// (0x00081c2d) cell_afind_pane_t1_ParamLimits

0xba15,	// (0x00081c2d) cell_afind_pane_t1

0xeef6,	// (0x0008510e) bg_button_pane_cp72

0x2a6e,	// (0x00078c86) cell_afind_grid_control_pane_g1

0x8fd7,	// (0x0007f1ef) aid_image_placing_area_ParamLimits

0x8fd7,	// (0x0007f1ef) aid_image_placing_area

0x24f3,	// (0x0007870b) field_vitu_entry_pane_g1_ParamLimits

0x24f3,	// (0x0007870b) field_vitu_entry_pane_g1

0x24ff,	// (0x00078717) field_vitu_entry_pane_g2_ParamLimits

0x24ff,	// (0x00078717) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x00085a39) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x00085a39) field_vitu_entry_pane_g

0xab82,	// (0x00080d9a) cell_vitu_itu_pane_g1_ParamLimits

0xabd2,	// (0x00080dea) cell_vitu_itu_pane_t3_ParamLimits

0xabd2,	// (0x00080dea) cell_vitu_itu_pane_t3

0x27dd,	// (0x000789f5) mp4_progress_pane_t1_ParamLimits

0x27f6,	// (0x00078a0e) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x00085ace) mp4_progress_pane_t_ParamLimits

0x280f,	// (0x00078a27) mup_progress_pane_cp04_ParamLimits

0xb91d,	// (0x00081b35) main_myfav_hc_pane_t5_ParamLimits

0xb91d,	// (0x00081b35) main_myfav_hc_pane_t5

0x4e5f,	// (0x0007b077) aid_zoom_text_primary

0x6146,	// (0x0007c35e) popup_adpt_find_window_ParamLimits

0xf0bc,	// (0x000852d4) main_cam_set_pane

0xb3ab,	// (0x000815c3) cam4_zoom_pane_ParamLimits

0xb3ab,	// (0x000815c3) cam4_zoom_pane

0xba27,	// (0x00081c3f) main_cam_set_pane_g1_ParamLimits

0xba27,	// (0x00081c3f) main_cam_set_pane_g1

0xba35,	// (0x00081c4d) main_cam_set_pane_g2_ParamLimits

0xba35,	// (0x00081c4d) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x00085b8f) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x00085b8f) main_cam_set_pane_g

0xba41,	// (0x00081c59) main_cam_set_pane_t1_ParamLimits

0xba41,	// (0x00081c59) main_cam_set_pane_t1

0xba5d,	// (0x00081c75) main_cset_listscroll_pane_ParamLimits

0xba5d,	// (0x00081c75) main_cset_listscroll_pane

0xba88,	// (0x00081ca0) main_cset_slider_pane_ParamLimits

0xba88,	// (0x00081ca0) main_cset_slider_pane

0x2a7f,	// (0x00078c97) main_cset_list_pane_ParamLimits

0x2a7f,	// (0x00078c97) main_cset_list_pane

0x2a8f,	// (0x00078ca7) scroll_pane_cp028

0xbaa7,	// (0x00081cbf) aid_area_touch_slider

0xbac3,	// (0x00081cdb) cset_slider_pane

0xbaed,	// (0x00081d05) main_cset_slider_pane_g1

0xbb02,	// (0x00081d1a) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x00085b94) main_cset_slider_pane_g

0x2ac8,	// (0x00078ce0) main_cset_slider_pane_t1

0xbbc8,	// (0x00081de0) main_cset_slider_pane_t2

0xbbe2,	// (0x00081dfa) main_cset_slider_pane_t3

0xbbfc,	// (0x00081e14) main_cset_slider_pane_t4

0xbc1a,	// (0x00081e32) main_cset_slider_pane_t5

0xbc38,	// (0x00081e50) main_cset_slider_pane_t6

0xbc4f,	// (0x00081e67) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x00085bb9) main_cset_slider_pane_t

0xbd5d,	// (0x00081f75) cset_list_set_pane_ParamLimits

0xbd5d,	// (0x00081f75) cset_list_set_pane

0xbd79,	// (0x00081f91) aid_position_infowindow_above

0xbd81,	// (0x00081f99) aid_position_infowindow_below

0xbd89,	// (0x00081fa1) cset_list_set_pane_g1_ParamLimits

0xbd89,	// (0x00081fa1) cset_list_set_pane_g1

0x52bb,	// (0x0007b4d3) cset_list_set_pane_g3_ParamLimits

0x52bb,	// (0x0007b4d3) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x00085bd8) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x00085bd8) cset_list_set_pane_g

0x52ca,	// (0x0007b4e2) cset_list_set_pane_t1_ParamLimits

0x52ca,	// (0x0007b4e2) cset_list_set_pane_t1

0xf0bc,	// (0x000852d4) list_highlight_pane_cp021_ParamLimits

0xf0bc,	// (0x000852d4) list_highlight_pane_cp021

0x0823,	// (0x00076a3b) cset_slider_pane_g1

0x0835,	// (0x00076a4d) cset_slider_pane_g2

0x082c,	// (0x00076a44) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x00085bdd) cset_slider_pane_g

0xbd95,	// (0x00081fad) aid_area_touch_cam4_zoom

0xbd9d,	// (0x00081fb5) cam4_zoom_cont_pane

0xbda5,	// (0x00081fbd) cam4_zoom_pane_g1

0xbdad,	// (0x00081fc5) cam4_zoom_pane_g2

0xbdb5,	// (0x00081fcd) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x00085be4) cam4_zoom_pane_g

0x306b,	// (0x00079283) cam4_zoom_cont_pane_g1

0x3074,	// (0x0007928c) cam4_zoom_cont_pane_g2

0x307d,	// (0x00079295) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x00085beb) cam4_zoom_cont_pane_g

0xb298,	// (0x000814b0) call4_image_pane_ParamLimits

0xb298,	// (0x000814b0) call4_image_pane

0x2843,	// (0x00078a5b) call4_windows_conf_pane_ParamLimits

0x2882,	// (0x00078a9a) popup_call4_audio_in_window_ParamLimits

0x2882,	// (0x00078a9a) popup_call4_audio_in_window

0xe15b,	// (0x00084373) bg_popup_call2_act_pane_cp02

0x28f8,	// (0x00078b10) call4_list_conf_pane

0x1f1a,	// (0x00078132) call4_image_pane_g1

0x1f1a,	// (0x00078132) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x000858ff) call4_image_pane_g

0x2b68,	// (0x00078d80) list_single_graphic_popup_conf4_pane_ParamLimits

0x2b68,	// (0x00078d80) list_single_graphic_popup_conf4_pane

0xe15b,	// (0x00084373) list_highlight_pane_cp022

0x2b7b,	// (0x00078d93) list_single_graphic_popup_conf4_pane_g1

0x04fc,	// (0x00076714) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x00085bf2) list_single_graphic_popup_conf4_pane_g

0x2b83,	// (0x00078d9b) list_single_graphic_popup_conf4_pane_t1

0x71e2,	// (0x0007d3fa) popup_vtel_slider_window_ParamLimits

0x71e2,	// (0x0007d3fa) popup_vtel_slider_window

0x2825,	// (0x00078a3d) dialer2_ne_pane_t2_ParamLimits

0x2825,	// (0x00078a3d) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x00085ad3) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x00085ad3) dialer2_ne_pane_t

0xf0bc,	// (0x000852d4) bg_popup_sub_pane_cp010_ParamLimits

0xf0bc,	// (0x000852d4) bg_popup_sub_pane_cp010

0xbdbd,	// (0x00081fd5) popup_vtel_slider_window_g1_ParamLimits

0xbdbd,	// (0x00081fd5) popup_vtel_slider_window_g1

0xbdc9,	// (0x00081fe1) popup_vtel_slider_window_g2_ParamLimits

0xbdc9,	// (0x00081fe1) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x00085bf7) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x00085bf7) popup_vtel_slider_window_g

0xbe11,	// (0x00082029) vtel_slider_pane_ParamLimits

0xbe11,	// (0x00082029) vtel_slider_pane

0xbe20,	// (0x00082038) vtel_slider_pane_g1_ParamLimits

0xbe20,	// (0x00082038) vtel_slider_pane_g1

0xbe2d,	// (0x00082045) vtel_slider_pane_g2_ParamLimits

0xbe2d,	// (0x00082045) vtel_slider_pane_g2

0xbe3a,	// (0x00082052) vtel_slider_pane_g3_ParamLimits

0xbe3a,	// (0x00082052) vtel_slider_pane_g3

0xbe20,	// (0x00082038) vtel_slider_pane_g4_ParamLimits

0xbe20,	// (0x00082038) vtel_slider_pane_g4

0xbe47,	// (0x0008205f) vtel_slider_pane_g5_ParamLimits

0xbe47,	// (0x0008205f) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x00085c00) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x00085c00) vtel_slider_pane_g

0xe15b,	// (0x00084373) main_gallery2_pane

0xb5fb,	// (0x00081813) aid_size_row_itut2_dropdow_list_ParamLimits

0xb5fb,	// (0x00081813) aid_size_row_itut2_dropdow_list

0xb65b,	// (0x00081873) grid_vitu2_function_top_pane_ParamLimits

0xb65b,	// (0x00081873) grid_vitu2_function_top_pane

0xb6b1,	// (0x000818c9) popup_vitu2_dropdown_list_window_ParamLimits

0xb6b1,	// (0x000818c9) popup_vitu2_dropdown_list_window

0xb6d1,	// (0x000818e9) popup_vitu2_match_list_window

0xbe54,	// (0x0008206c) cell_vitu2_function_top_pane_ParamLimits

0xbe54,	// (0x0008206c) cell_vitu2_function_top_pane

0xbe74,	// (0x0008208c) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbe74,	// (0x0008208c) cell_vitu2_function_top_pane_cp01

0xbe92,	// (0x000820aa) cell_vitu2_function_top_wide_pane_ParamLimits

0xbe92,	// (0x000820aa) cell_vitu2_function_top_wide_pane

0xf0bc,	// (0x000852d4) bg_button_pane_cp012

0xbeb0,	// (0x000820c8) cell_vitu2_function_top_pane_g1

0xbebf,	// (0x000820d7) bg_button_pane_cp013_ParamLimits

0xbebf,	// (0x000820d7) bg_button_pane_cp013

0xbedb,	// (0x000820f3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbedb,	// (0x000820f3) cell_vitu2_function_top_wide_pane_g1

0x3a36,	// (0x00079c4e) bg_popup_sub_pane_cp20

0xbef3,	// (0x0008210b) list_vitu2_match_list_pane

0x2975,	// (0x00078b8d) bg_popup_sub_pane_cp20_g1

0x297d,	// (0x00078b95) bg_popup_sub_pane_cp20_g2

0x0042,	// (0x0007625a) bg_popup_sub_pane_cp20_g3

0x2985,	// (0x00078b9d) bg_popup_sub_pane_cp20_g4

0x0022,	// (0x0007623a) bg_popup_sub_pane_cp20_g5

0x2b99,	// (0x00078db1) bg_popup_sub_pane_cp20_g6

0x2995,	// (0x00078bad) bg_popup_sub_pane_cp20_g7

0x299d,	// (0x00078bb5) bg_popup_sub_pane_cp20_g8

0x29a5,	// (0x00078bbd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x00085c0b) bg_popup_sub_pane_cp20_g

0xbf0b,	// (0x00082123) list_vitu2_match_list_item_pane_ParamLimits

0xbf0b,	// (0x00082123) list_vitu2_match_list_item_pane

0xbf1d,	// (0x00082135) list_vitu2_match_list_item_pane_t1

0xe15b,	// (0x00084373) bg_popup_sub_pane_cp21

0x0400,	// (0x00076618) grid_vitu2_dropdown_list_pane

0xbf37,	// (0x0008214f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbf37,	// (0x0008214f) cell_vitu2_dropdown_list_char_pane

0xbf58,	// (0x00082170) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbf58,	// (0x00082170) cell_vitu2_dropdown_list_ctrl_pane

0x2bb3,	// (0x00078dcb) cell_vitu2_dropdown_list_char_pane_g1

0x2baa,	// (0x00078dc2) cell_vitu2_dropdown_list_char_pane_g2

0x2ba1,	// (0x00078db9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x00085c28) cell_vitu2_dropdown_list_char_pane_g

0xbf84,	// (0x0008219c) cell_vitu2_dropdown_list_char_pane_t1

0xbf92,	// (0x000821aa) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbf92,	// (0x000821aa) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbf9f,	// (0x000821b7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbf9f,	// (0x000821b7) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbfac,	// (0x000821c4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbfac,	// (0x000821c4) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbfb9,	// (0x000821d1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbfb9,	// (0x000821d1) cell_vitu2_dropdown_list_ctrl_pane_g4

0x217a,	// (0x00078392) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x217a,	// (0x00078392) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x00085c2f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x00085c2f) cell_vitu2_dropdown_list_ctrl_pane_g

0xbfd5,	// (0x000821ed) aid_size_cell_gallery2_ParamLimits

0xbfd5,	// (0x000821ed) aid_size_cell_gallery2

0xbfe3,	// (0x000821fb) grid_gallery2_pane_ParamLimits

0xbfe3,	// (0x000821fb) grid_gallery2_pane

0xbff2,	// (0x0008220a) scroll_pane_cp029_ParamLimits

0xbff2,	// (0x0008220a) scroll_pane_cp029

0xbffe,	// (0x00082216) cell_gallery2_pane_ParamLimits

0xbffe,	// (0x00082216) cell_gallery2_pane

0x2bbc,	// (0x00078dd4) cell_gallery2_pane_g2

0xc02c,	// (0x00082244) cell_gallery2_pane_g3

0x2bc6,	// (0x00078dde) cell_gallery2_pane_g4

0x2bce,	// (0x00078de6) cell_gallery2_pane_g5

0x06df,	// (0x000768f7) grid_highlight_pane_cp10

0xb6d1,	// (0x000818e9) popup_vitu2_match_list_window_ParamLimits

0xb6e3,	// (0x000818fb) popup_vitu2_query_window_ParamLimits

0xb6e3,	// (0x000818fb) popup_vitu2_query_window

0xe15b,	// (0x00084373) bg_vitu2_candi_button_pane

0x2bb3,	// (0x00078dcb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2baa,	// (0x00078dc2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2ba1,	// (0x00078db9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5328,	// (0x0007b540) bg_button_pane_cp015

0xc034,	// (0x0008224c) bg_button_pane_cp016

0xc047,	// (0x0008225f) bg_button_pane_cp017

0x1b10,	// (0x00077d28) bg_popup_sub_pane_cp22

0x2bd6,	// (0x00078dee) popup_vitu2_query_window_g1

0xc06b,	// (0x00082283) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x00085c3a) popup_vitu2_query_window_g

0x535b,	// (0x0007b573) popup_vitu2_query_window_t1_ParamLimits

0x535b,	// (0x0007b573) popup_vitu2_query_window_t1

0x538e,	// (0x0007b5a6) popup_vitu2_query_window_t2_ParamLimits

0x538e,	// (0x0007b5a6) popup_vitu2_query_window_t2

0x53a0,	// (0x0007b5b8) popup_vitu2_query_window_t3_ParamLimits

0x53a0,	// (0x0007b5b8) popup_vitu2_query_window_t3

0xc088,	// (0x000822a0) popup_vitu2_query_window_t4_ParamLimits

0xc088,	// (0x000822a0) popup_vitu2_query_window_t4

0xc0a9,	// (0x000822c1) popup_vitu2_query_window_t5_ParamLimits

0xc0a9,	// (0x000822c1) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x00085c41) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x00085c41) popup_vitu2_query_window_t

0x2a77,	// (0x00078c8f) main_cset_text_pane

0xbaa7,	// (0x00081cbf) aid_area_touch_slider_ParamLimits

0xbac3,	// (0x00081cdb) cset_slider_pane_ParamLimits

0xbaed,	// (0x00081d05) main_cset_slider_pane_g1_ParamLimits

0xbb02,	// (0x00081d1a) main_cset_slider_pane_g2_ParamLimits

0x2a98,	// (0x00078cb0) main_cset_slider_pane_g3_ParamLimits

0x2a98,	// (0x00078cb0) main_cset_slider_pane_g3

0xbb17,	// (0x00081d2f) main_cset_slider_pane_g4_ParamLimits

0xbb17,	// (0x00081d2f) main_cset_slider_pane_g4

0xbb26,	// (0x00081d3e) main_cset_slider_pane_g5_ParamLimits

0xbb26,	// (0x00081d3e) main_cset_slider_pane_g5

0xbb34,	// (0x00081d4c) main_cset_slider_pane_g6_ParamLimits

0xbb34,	// (0x00081d4c) main_cset_slider_pane_g6

0xf97c,	// (0x00085b94) main_cset_slider_pane_g_ParamLimits

0x2ac8,	// (0x00078ce0) main_cset_slider_pane_t1_ParamLimits

0xbbc8,	// (0x00081de0) main_cset_slider_pane_t2_ParamLimits

0xbbe2,	// (0x00081dfa) main_cset_slider_pane_t3_ParamLimits

0xbbfc,	// (0x00081e14) main_cset_slider_pane_t4_ParamLimits

0xbc1a,	// (0x00081e32) main_cset_slider_pane_t5_ParamLimits

0xbc38,	// (0x00081e50) main_cset_slider_pane_t6_ParamLimits

0xbc4f,	// (0x00081e67) main_cset_slider_pane_t7_ParamLimits

0xbc7d,	// (0x00081e95) main_cset_slider_pane_t8_ParamLimits

0xbc7d,	// (0x00081e95) main_cset_slider_pane_t8

0xbca5,	// (0x00081ebd) main_cset_slider_pane_t9_ParamLimits

0xbca5,	// (0x00081ebd) main_cset_slider_pane_t9

0xbccd,	// (0x00081ee5) main_cset_slider_pane_t10_ParamLimits

0xbccd,	// (0x00081ee5) main_cset_slider_pane_t10

0xbcf5,	// (0x00081f0d) main_cset_slider_pane_t11_ParamLimits

0xbcf5,	// (0x00081f0d) main_cset_slider_pane_t11

0xbd1f,	// (0x00081f37) main_cset_slider_pane_t12_ParamLimits

0xbd1f,	// (0x00081f37) main_cset_slider_pane_t12

0xbd3e,	// (0x00081f56) main_cset_slider_pane_t13_ParamLimits

0xbd3e,	// (0x00081f56) main_cset_slider_pane_t13

0xf9a1,	// (0x00085bb9) main_cset_slider_pane_t_ParamLimits

0xe15b,	// (0x00084373) bg_popup_sub_pane_cp011

0x2be2,	// (0x00078dfa) main_cset_text_pane_g1

0x2bea,	// (0x00078e02) main_cset_text_pane_t1

0x2bf8,	// (0x00078e10) main_cset_text_pane_t2

0x2c06,	// (0x00078e1e) main_cset_text_pane_t3

0x2c14,	// (0x00078e2c) main_cset_text_pane_t4

0x2c22,	// (0x00078e3a) main_cset_text_pane_t5

0x2c30,	// (0x00078e48) main_cset_text_pane_t6

0x2c3e,	// (0x00078e56) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x00085c50) main_cset_text_pane_t

0xe15b,	// (0x00084373) main_cam4_burst_pane

0xe15b,	// (0x00084373) main_cam5_pane

0xb9f6,	// (0x00081c0e) bg_button_pane_cp019

0xb9ff,	// (0x00081c17) bg_button_pane_cp020

0x2aa4,	// (0x00078cbc) main_cset_slider_pane_g7_ParamLimits

0x2aa4,	// (0x00078cbc) main_cset_slider_pane_g7

0x2ab0,	// (0x00078cc8) main_cset_slider_pane_g8_ParamLimits

0x2ab0,	// (0x00078cc8) main_cset_slider_pane_g8

0xbb48,	// (0x00081d60) main_cset_slider_pane_g9_ParamLimits

0xbb48,	// (0x00081d60) main_cset_slider_pane_g9

0xbb54,	// (0x00081d6c) main_cset_slider_pane_g10_ParamLimits

0xbb54,	// (0x00081d6c) main_cset_slider_pane_g10

0xbb60,	// (0x00081d78) main_cset_slider_pane_g11_ParamLimits

0xbb60,	// (0x00081d78) main_cset_slider_pane_g11

0xbb6c,	// (0x00081d84) main_cset_slider_pane_g12_ParamLimits

0xbb6c,	// (0x00081d84) main_cset_slider_pane_g12

0xbb78,	// (0x00081d90) main_cset_slider_pane_g13_ParamLimits

0xbb78,	// (0x00081d90) main_cset_slider_pane_g13

0xbb86,	// (0x00081d9e) main_cset_slider_pane_g14_ParamLimits

0xbb86,	// (0x00081d9e) main_cset_slider_pane_g14

0xbb94,	// (0x00081dac) main_cset_slider_pane_g15_ParamLimits

0xbb94,	// (0x00081dac) main_cset_slider_pane_g15

0x2af6,	// (0x00078d0e) main_cset_slider_pane_t14_ParamLimits

0x2af6,	// (0x00078d0e) main_cset_slider_pane_t14

0x2b2f,	// (0x00078d47) main_cset_slider_pane_t15_ParamLimits

0x2b2f,	// (0x00078d47) main_cset_slider_pane_t15

0xc120,	// (0x00082338) aid_cam4_burst_size_cell_ParamLimits

0xc120,	// (0x00082338) aid_cam4_burst_size_cell

0xc13c,	// (0x00082354) grid_cam4_burst_pane_ParamLimits

0xc13c,	// (0x00082354) grid_cam4_burst_pane

0xc16c,	// (0x00082384) linegrid_cam4_burst_pane_ParamLimits

0xc16c,	// (0x00082384) linegrid_cam4_burst_pane

0xc18e,	// (0x000823a6) scroll_pane_cp30_ParamLimits

0xc18e,	// (0x000823a6) scroll_pane_cp30

0xc19a,	// (0x000823b2) cell_cam4_burst_pane_ParamLimits

0xc19a,	// (0x000823b2) cell_cam4_burst_pane

0x2c58,	// (0x00078e70) linegrid_cam4_burst_pane_g1_ParamLimits

0x2c58,	// (0x00078e70) linegrid_cam4_burst_pane_g1

0xc1d6,	// (0x000823ee) linegrid_cam4_burst_pane_g2_ParamLimits

0xc1d6,	// (0x000823ee) linegrid_cam4_burst_pane_g2

0x2c65,	// (0x00078e7d) linegrid_cam4_burst_pane_g3_ParamLimits

0x2c65,	// (0x00078e7d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x00085c5f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x00085c5f) linegrid_cam4_burst_pane_g

0xc1e7,	// (0x000823ff) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc1e7,	// (0x000823ff) linegrid_cam4_burst_pane_g3_copy1

0x2c72,	// (0x00078e8a) linegrid_cam4_burst_pane_g4_ParamLimits

0x2c72,	// (0x00078e8a) linegrid_cam4_burst_pane_g4

0xc201,	// (0x00082419) linegrid_cam4_burst_pane_g5_ParamLimits

0xc201,	// (0x00082419) linegrid_cam4_burst_pane_g5

0xc212,	// (0x0008242a) linegrid_cam4_burst_pane_g6_ParamLimits

0xc212,	// (0x0008242a) linegrid_cam4_burst_pane_g6

0x2c7f,	// (0x00078e97) linegrid_cam4_burst_pane_g7_ParamLimits

0x2c7f,	// (0x00078e97) linegrid_cam4_burst_pane_g7

0xc223,	// (0x0008243b) cell_cam4_burst_pane_g1

0x2c98,	// (0x00078eb0) main_cam5_pane_t1_ParamLimits

0x2c98,	// (0x00078eb0) main_cam5_pane_t1

0x2caa,	// (0x00078ec2) main_cam5_pane_t2_ParamLimits

0x2caa,	// (0x00078ec2) main_cam5_pane_t2

0x2cbc,	// (0x00078ed4) main_cam5_pane_t3_ParamLimits

0x2cbc,	// (0x00078ed4) main_cam5_pane_t3

0x2cce,	// (0x00078ee6) main_cam5_pane_t4_ParamLimits

0x2cce,	// (0x00078ee6) main_cam5_pane_t4

0x2ce6,	// (0x00078efe) main_cam5_pane_t5_ParamLimits

0x2ce6,	// (0x00078efe) main_cam5_pane_t5

0x2cfa,	// (0x00078f12) main_cam5_pane_t6_ParamLimits

0x2cfa,	// (0x00078f12) main_cam5_pane_t6

0x2d0e,	// (0x00078f26) main_cam5_pane_t7_ParamLimits

0x2d0e,	// (0x00078f26) main_cam5_pane_t7

0x2d20,	// (0x00078f38) main_cam5_pane_t8_ParamLimits

0x2d20,	// (0x00078f38) main_cam5_pane_t8

0x2d3c,	// (0x00078f54) main_cam5_pane_t9_ParamLimits

0x2d3c,	// (0x00078f54) main_cam5_pane_t9

0x2d4e,	// (0x00078f66) main_cam5_pane_t10_ParamLimits

0x2d4e,	// (0x00078f66) main_cam5_pane_t10

0x2d60,	// (0x00078f78) main_cam5_pane_t11_ParamLimits

0x2d60,	// (0x00078f78) main_cam5_pane_t11

0x2d72,	// (0x00078f8a) main_cam5_pane_t12_ParamLimits

0x2d72,	// (0x00078f8a) main_cam5_pane_t12

0x2d87,	// (0x00078f9f) main_cam5_pane_t13_ParamLimits

0x2d87,	// (0x00078f9f) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x00085c6b) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x00085c6b) main_cam5_pane_t

0x61fc,	// (0x0007c414) popup_scut_keymap_window_ParamLimits

0x61fc,	// (0x0007c414) popup_scut_keymap_window

0xc238,	// (0x00082450) aid_size_cell_brow_shortcut

0x06df,	// (0x000768f7) bg_popup_window_pane_cp010

0xc244,	// (0x0008245c) grid_scut_pane

0xc250,	// (0x00082468) cell_scut_pane_ParamLimits

0xc250,	// (0x00082468) cell_scut_pane

0xc267,	// (0x0008247f) cell_scut_pane_g1

0x2da4,	// (0x00078fbc) cell_scut_pane_t1

0x2db3,	// (0x00078fcb) cell_scut_pane_t2

0xc270,	// (0x00082488) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x00085c86) cell_scut_pane_t

0xa1e3,	// (0x000803fb) main_mup3_pane_g8_ParamLimits

0xa1e3,	// (0x000803fb) main_mup3_pane_g8

0xb609,	// (0x00081821) area_vitu2_query_pane_ParamLimits

0xb609,	// (0x00081821) area_vitu2_query_pane

0x533a,	// (0x0007b552) input_focus_pane_cp08

0x2dc2,	// (0x00078fda) area_vitu2_query_pane_g1

0x53c8,	// (0x0007b5e0) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x00085c8d) area_vitu2_query_pane_g

0xc27e,	// (0x00082496) area_vitu2_query_pane_t1_ParamLimits

0xc27e,	// (0x00082496) area_vitu2_query_pane_t1

0xc292,	// (0x000824aa) area_vitu2_query_pane_t2_ParamLimits

0xc292,	// (0x000824aa) area_vitu2_query_pane_t2

0x53d9,	// (0x0007b5f1) area_vitu2_query_pane_t3_ParamLimits

0x53d9,	// (0x0007b5f1) area_vitu2_query_pane_t3

0x5401,	// (0x0007b619) area_vitu2_query_pane_t4_ParamLimits

0x5401,	// (0x0007b619) area_vitu2_query_pane_t4

0x5429,	// (0x0007b641) area_vitu2_query_pane_t5_ParamLimits

0x5429,	// (0x0007b641) area_vitu2_query_pane_t5

0x5451,	// (0x0007b669) area_vitu2_query_pane_t6_ParamLimits

0x5451,	// (0x0007b669) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x00085c92) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x00085c92) area_vitu2_query_pane_t

0xc2a6,	// (0x000824be) bg_button_pane_cp018

0xc2b4,	// (0x000824cc) bg_button_pane_cp021

0x549d,	// (0x0007b6b5) bg_button_pane_cp022

0x54ae,	// (0x0007b6c6) input_focus_pane_cp09

0x86b5,	// (0x0007e8cd) aid_size_touch_mv_arrow_left

0x86e0,	// (0x0007e8f8) aid_size_touch_mv_arrow_right

0xbbac,	// (0x00081dc4) main_cset_slider_pane_g16_ParamLimits

0xbbac,	// (0x00081dc4) main_cset_slider_pane_g16

0xbbba,	// (0x00081dd2) main_cset_slider_pane_g17_ParamLimits

0xbbba,	// (0x00081dd2) main_cset_slider_pane_g17

0xc223,	// (0x0008243b) cell_cam4_burst_pane_g1_ParamLimits

0xe15b,	// (0x00084373) compa_mode_pane

0xbdd5,	// (0x00081fed) popup_vtel_slider_window_g3_ParamLimits

0xbdd5,	// (0x00081fed) popup_vtel_slider_window_g3

0xbde9,	// (0x00082001) popup_vtel_slider_window_g4_ParamLimits

0xbde9,	// (0x00082001) popup_vtel_slider_window_g4

0xbdfd,	// (0x00082015) popup_vtel_slider_window_t1_ParamLimits

0xbdfd,	// (0x00082015) popup_vtel_slider_window_t1

0xe15b,	// (0x00084373) main_cl_pane

0x94e9,	// (0x0007f701) popup_imed_adjust2_window_ParamLimits

0x1b10,	// (0x00077d28) bg_tb_trans_pane_cp05_ParamLimits

0x241f,	// (0x00078637) popup_imed_adjust2_window_g1_ParamLimits

0x242e,	// (0x00078646) popup_imed_adjust2_window_g2_ParamLimits

0x242e,	// (0x00078646) popup_imed_adjust2_window_g2

0x243a,	// (0x00078652) popup_imed_adjust2_window_g3_ParamLimits

0x243a,	// (0x00078652) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x000859fd) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x000859fd) popup_imed_adjust2_window_g

0x2446,	// (0x0007865e) popup_imed_adjust2_window_t1_ParamLimits

0x245e,	// (0x00078676) slider_imed_adjust_pane_ParamLimits

0x2472,	// (0x0007868a) slider_imed_adjust_pane_g1_ParamLimits

0x2482,	// (0x0007869a) slider_imed_adjust_pane_g2_ParamLimits

0x2492,	// (0x000786aa) slider_imed_adjust_pane_g3_ParamLimits

0x24a3,	// (0x000786bb) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x00085a04) slider_imed_adjust_pane_g_ParamLimits

0xb354,	// (0x0008156c) aid_touch_area_cam4_ParamLimits

0xb354,	// (0x0008156c) aid_touch_area_cam4

0xb364,	// (0x0008157c) battery_pane_cp01

0xb3eb,	// (0x00081603) main_camera4_pane_g6_ParamLimits

0xb3eb,	// (0x00081603) main_camera4_pane_g6

0xb409,	// (0x00081621) main_camera4_pane_t2_ParamLimits

0xb409,	// (0x00081621) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x00085b07) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x00085b07) main_camera4_pane_t

0xb490,	// (0x000816a8) aid_touch_area_vid4_ParamLimits

0xb490,	// (0x000816a8) aid_touch_area_vid4

0xb4d0,	// (0x000816e8) main_video4_pane_g5_ParamLimits

0xb4d0,	// (0x000816e8) main_video4_pane_g5

0xb4f4,	// (0x0008170c) vid4_progress_pane_ParamLimits

0xb4f4,	// (0x0008170c) vid4_progress_pane

0x2abc,	// (0x00078cd4) main_cset_slider_pane_g18_ParamLimits

0x2abc,	// (0x00078cd4) main_cset_slider_pane_g18

0x2c8c,	// (0x00078ea4) cell_cam4_burst_pane_g2_ParamLimits

0x2c8c,	// (0x00078ea4) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x00085c66) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x00085c66) cell_cam4_burst_pane_g

0xc2c0,	// (0x000824d8) bg_cl_pane_ParamLimits

0xc2c0,	// (0x000824d8) bg_cl_pane

0xc2cc,	// (0x000824e4) cl_header_pane_ParamLimits

0xc2cc,	// (0x000824e4) cl_header_pane

0xc2d8,	// (0x000824f0) cl_listscroll_pane_ParamLimits

0xc2d8,	// (0x000824f0) cl_listscroll_pane

0x2dce,	// (0x00078fe6) bg_cl_pane_g1

0x2dd6,	// (0x00078fee) bg_cl_pane_g2

0x2dde,	// (0x00078ff6) bg_cl_pane_g3

0x2de6,	// (0x00078ffe) bg_cl_pane_g4

0x2dee,	// (0x00079006) bg_cl_pane_g5

0x2df6,	// (0x0007900e) bg_cl_pane_g6

0x2dfe,	// (0x00079016) bg_cl_pane_g7

0x2e06,	// (0x0007901e) bg_cl_pane_g8

0x2e0e,	// (0x00079026) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x00085ca1) bg_cl_pane_g

0xc2e4,	// (0x000824fc) aid_height_cl_leading_ParamLimits

0xc2e4,	// (0x000824fc) aid_height_cl_leading

0xc2f0,	// (0x00082508) aid_height_cl_text_ParamLimits

0xc2f0,	// (0x00082508) aid_height_cl_text

0x3a36,	// (0x00079c4e) bg_cl_header_pane_ParamLimits

0x3a36,	// (0x00079c4e) bg_cl_header_pane

0xc308,	// (0x00082520) cl_header_pane_g1_ParamLimits

0xc308,	// (0x00082520) cl_header_pane_g1

0xc315,	// (0x0008252d) cl_header_pane_t1_ParamLimits

0xc315,	// (0x0008252d) cl_header_pane_t1

0x2e16,	// (0x0007902e) cl_list_pane

0x2a8f,	// (0x00078ca7) hc_scroll_pane_cp01

0x0022,	// (0x0007623a) bg_cl_header_pane_g1

0x2975,	// (0x00078b8d) bg_cl_header_pane_g2

0x0042,	// (0x0007625a) bg_cl_header_pane_g3

0x2985,	// (0x00078b9d) bg_cl_header_pane_g4

0x297d,	// (0x00078b95) bg_cl_header_pane_g5

0x2b99,	// (0x00078db1) bg_cl_header_pane_g6

0x299d,	// (0x00078bb5) bg_cl_header_pane_g7

0x29a5,	// (0x00078bbd) bg_cl_header_pane_g8

0x2995,	// (0x00078bad) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x00085cb4) bg_cl_header_pane_g

0xc327,	// (0x0008253f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc327,	// (0x0008253f) hc_cl_list_double_graphic_heading_pane

0xc33b,	// (0x00082553) hc_cl_list_single_graphic_pane_ParamLimits

0xc33b,	// (0x00082553) hc_cl_list_single_graphic_pane

0xc355,	// (0x0008256d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc355,	// (0x0008256d) hc_cl_list_single_graphic_pane_g1

0xc361,	// (0x00082579) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc361,	// (0x00082579) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x00085cc7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x00085cc7) hc_cl_list_single_graphic_pane_g

0xc375,	// (0x0008258d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc375,	// (0x0008258d) hc_cl_list_single_graphic_pane_t1

0xc355,	// (0x0008256d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc355,	// (0x0008256d) hc_cl_list_double_graphic_heading_pane_g1

0xc38a,	// (0x000825a2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc38a,	// (0x000825a2) hc_cl_list_double_graphic_heading_pane_g2

0xc39e,	// (0x000825b6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc39e,	// (0x000825b6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x00085ccc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x00085ccc) hc_cl_list_double_graphic_heading_pane_g

0xc3b2,	// (0x000825ca) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc3b2,	// (0x000825ca) hc_cl_list_double_graphic_heading_pane_t1

0xc3c7,	// (0x000825df) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc3c7,	// (0x000825df) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x00085cd3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x00085cd3) hc_cl_list_double_graphic_heading_pane_t

0xc3e4,	// (0x000825fc) vid4_progress_pane_g1

0xc3f6,	// (0x0008260e) vid4_progress_pane_g2

0x8d20,	// (0x0007ef38) vid4_progress_pane_g3

0xc406,	// (0x0008261e) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x00085cd8) vid4_progress_pane_g

0xc424,	// (0x0008263c) vid4_progress_pane_t1

0xc439,	// (0x00082651) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x00085ce3) vid4_progress_pane_t

0xc465,	// (0x0008267d) wait_bar_pane_cp07

0x1d0b,	// (0x00077f23) blid_firmament_pane_ParamLimits

0x1d4e,	// (0x00077f66) popup_blid_sat_info2_window_g1

0x1d72,	// (0x00077f8a) popup_blid_sat_info2_window_t3

0x1d80,	// (0x00077f98) popup_blid_sat_info2_window_t4

0x1d8e,	// (0x00077fa6) popup_blid_sat_info2_window_t5

0x1d9c,	// (0x00077fb4) popup_blid_sat_info2_window_t6

0x1dac,	// (0x00077fc4) popup_blid_sat_info2_window_t7

0x1dba,	// (0x00077fd2) popup_blid_sat_info2_window_t8

0x1dc8,	// (0x00077fe0) popup_blid_sat_info2_window_t9

0x1dd6,	// (0x00077fee) popup_blid_sat_info2_window_t10

0x1e9a,	// (0x000780b2) aid_firma_cardinal_ParamLimits

0x1eae,	// (0x000780c6) blid_firmament_pane_t1_ParamLimits

0x1ec5,	// (0x000780dd) blid_firmament_pane_t2_ParamLimits

0x1edc,	// (0x000780f4) blid_firmament_pane_t3_ParamLimits

0x1ef3,	// (0x0007810b) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x000858f6) blid_firmament_pane_t_ParamLimits

0x1f0a,	// (0x00078122) blid_sat_info_pane_ParamLimits

0xf0bc,	// (0x000852d4) main_cam_set_pane_ParamLimits

0xa99c,	// (0x00080bb4) aid_size_cell_colour_35_ParamLimits

0xa9b6,	// (0x00080bce) aid_size_cell_colour_112_ParamLimits

0xa9cd,	// (0x00080be5) aid_size_cell_effect_ParamLimits

0xf0bc,	// (0x000852d4) bg_tb_trans_pane_cp02_ParamLimits

0x02ad,	// (0x000764c5) heading_imed_pane_ParamLimits

0xa9e7,	// (0x00080bff) listscroll_imed_pane_ParamLimits

0x112a,	// (0x00077342) popup_call2_audio_first_window_g5_ParamLimits

0x112a,	// (0x00077342) popup_call2_audio_first_window_g5

0xb111,	// (0x00081329) aid_size_touch_image3_arrow_left_ParamLimits

0xb111,	// (0x00081329) aid_size_touch_image3_arrow_left

0xb127,	// (0x0008133f) aid_size_touch_image3_arrow_right_ParamLimits

0xb127,	// (0x0008133f) aid_size_touch_image3_arrow_right

0xc44f,	// (0x00082667) vid4_progress_pane_t3

0xac9b,	// (0x00080eb3) main_hwr_training_symbol_option_pane_ParamLimits

0xac9b,	// (0x00080eb3) main_hwr_training_symbol_option_pane

0x271d,	// (0x00078935) popup_hwr_training_preview_window_ParamLimits

0x271d,	// (0x00078935) popup_hwr_training_preview_window

0xacfc,	// (0x00080f14) hwr_training_navi_pane_g5_ParamLimits

0xacfc,	// (0x00080f14) hwr_training_navi_pane_g5

0x2963,	// (0x00078b7b) popup_char_count_window

0x3a36,	// (0x00079c4e) bg_popup_sub_pane_cp20_ParamLimits

0xbef3,	// (0x0008210b) list_vitu2_match_list_pane_ParamLimits

0xbeff,	// (0x00082117) vitu2_page_scroll_pane_ParamLimits

0xbeff,	// (0x00082117) vitu2_page_scroll_pane

0x2e1f,	// (0x00079037) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2e1f,	// (0x00079037) list_single_hwr_training_symbol_option_pane

0x2e32,	// (0x0007904a) list_single_hwr_training_symbol_option_pane_g1

0x2e3a,	// (0x00079052) list_single_hwr_training_symbol_option_pane_t1

0x2e48,	// (0x00079060) bg_button_pane_cp023

0x2e51,	// (0x00079069) bg_button_pane_cp024

0xc4a1,	// (0x000826b9) vitu2_page_scroll_pane_g1

0xc4a9,	// (0x000826c1) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x00085cea) vitu2_page_scroll_pane_g

0xc4b1,	// (0x000826c9) vitu2_page_scroll_pane_t1

0x24cf,	// (0x000786e7) popup_char_count_window_g1

0x2e84,	// (0x0007909c) popup_char_count_window_g2

0x2e8d,	// (0x000790a5) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x00085cef) popup_char_count_window_g

0x2e96,	// (0x000790ae) popup_char_count_window_t1

0xe15b,	// (0x00084373) main_vded2_pane

0x240b,	// (0x00078623) aid_size_cell_imed_line

0x2415,	// (0x0007862d) grid_imed_line_width_pane

0xb560,	// (0x00081778) vid4_indicators_pane_g4

0x2ea4,	// (0x000790bc) cell_imed_line_width_pane_ParamLimits

0x2ea4,	// (0x000790bc) cell_imed_line_width_pane

0x2eb8,	// (0x000790d0) cell_imed_line_width_pane_g1

0x26da,	// (0x000788f2) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x00085cf6) cell_imed_line_width_pane_g

0xc4c0,	// (0x000826d8) main_vded2_pane_g1_ParamLimits

0xc4c0,	// (0x000826d8) main_vded2_pane_g1

0xc4cd,	// (0x000826e5) main_vded2_pane_g2_ParamLimits

0xc4cd,	// (0x000826e5) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x00085cfb) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x00085cfb) main_vded2_pane_g

0xc4db,	// (0x000826f3) vded2_slider_pane_ParamLimits

0xc4db,	// (0x000826f3) vded2_slider_pane

0xc4e8,	// (0x00082700) aid_size_touch_vded2_end

0xc4f2,	// (0x0008270a) aid_size_touch_vded2_playhead

0x2ec1,	// (0x000790d9) aid_size_touch_vded2_start

0x2ec9,	// (0x000790e1) vded2_slider_bg_pane

0x2ed2,	// (0x000790ea) vded2_slider_pane_g1

0x2edb,	// (0x000790f3) vded2_slider_pane_g2

0xc4fa,	// (0x00082712) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x00085d00) vded2_slider_pane_g

0x2ee3,	// (0x000790fb) vded2_slider_bg_pane_g1

0x2eec,	// (0x00079104) vded2_slider_bg_pane_g2

0x2ef5,	// (0x0007910d) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x00085d07) vded2_slider_bg_pane_g

0x8d38,	// (0x0007ef50) aid_postcard_touch_down_pane_ParamLimits

0x8d38,	// (0x0007ef50) aid_postcard_touch_down_pane

0x8d48,	// (0x0007ef60) aid_postcard_touch_up_pane_ParamLimits

0x8d48,	// (0x0007ef60) aid_postcard_touch_up_pane

0xe15b,	// (0x00084373) main_blid2_pane

0x9478,	// (0x0007f690) popup_blid2_search_window

0xe15b,	// (0x00084373) blid2_gps_pane

0xe15b,	// (0x00084373) blid2_navig_pane

0xe15b,	// (0x00084373) blid2_search_pane

0xe15b,	// (0x00084373) blid2_tripm_pane

0xc503,	// (0x0008271b) blid2_search_pane_g1_ParamLimits

0xc503,	// (0x0008271b) blid2_search_pane_g1

0xc513,	// (0x0008272b) blid2_search_pane_t1_ParamLimits

0xc513,	// (0x0008272b) blid2_search_pane_t1

0xc525,	// (0x0008273d) aid_size_cell_blid2_gps_ParamLimits

0xc525,	// (0x0008273d) aid_size_cell_blid2_gps

0xc535,	// (0x0008274d) blid2_gps_pane_g1_ParamLimits

0xc535,	// (0x0008274d) blid2_gps_pane_g1

0xc541,	// (0x00082759) grid_blid2_satellite_pane_ParamLimits

0xc541,	// (0x00082759) grid_blid2_satellite_pane

0xc551,	// (0x00082769) blid2_navig_pane_g1_ParamLimits

0xc551,	// (0x00082769) blid2_navig_pane_g1

0xc55d,	// (0x00082775) blid2_navig_pane_t1_ParamLimits

0xc55d,	// (0x00082775) blid2_navig_pane_t1

0xc56f,	// (0x00082787) blid2_navig_pane_t2_ParamLimits

0xc56f,	// (0x00082787) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x00085d0e) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x00085d0e) blid2_navig_pane_t

0xc581,	// (0x00082799) blid2_navig_ring_pane_ParamLimits

0xc581,	// (0x00082799) blid2_navig_ring_pane

0xc591,	// (0x000827a9) blid2_speed_pane_ParamLimits

0xc591,	// (0x000827a9) blid2_speed_pane

0xc59d,	// (0x000827b5) blid2_tripm_pane_g1_ParamLimits

0xc59d,	// (0x000827b5) blid2_tripm_pane_g1

0xc5ad,	// (0x000827c5) blid2_tripm_pane_g2_ParamLimits

0xc5ad,	// (0x000827c5) blid2_tripm_pane_g2

0xc5b9,	// (0x000827d1) blid2_tripm_pane_g3_ParamLimits

0xc5b9,	// (0x000827d1) blid2_tripm_pane_g3

0xc5c5,	// (0x000827dd) blid2_tripm_pane_g4_ParamLimits

0xc5c5,	// (0x000827dd) blid2_tripm_pane_g4

0xc5d1,	// (0x000827e9) blid2_tripm_pane_g5_ParamLimits

0xc5d1,	// (0x000827e9) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x00085d13) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x00085d13) blid2_tripm_pane_g

0xc5ed,	// (0x00082805) blid2_tripm_pane_t1_ParamLimits

0xc5ed,	// (0x00082805) blid2_tripm_pane_t1

0xc601,	// (0x00082819) blid2_tripm_pane_t2_ParamLimits

0xc601,	// (0x00082819) blid2_tripm_pane_t2

0xc613,	// (0x0008282b) blid2_tripm_pane_t3_ParamLimits

0xc613,	// (0x0008282b) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x00085d20) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x00085d20) blid2_tripm_pane_t

0xc645,	// (0x0008285d) cell_blid2_satellite_pane_ParamLimits

0xc645,	// (0x0008285d) cell_blid2_satellite_pane

0xc65f,	// (0x00082877) cell_blid2_satellite_pane_g1

0x2efe,	// (0x00079116) cell_blid2_satellite_pane_t1

0x1f1a,	// (0x00078132) blid2_speed_pane_g1

0x2f0c,	// (0x00079124) blid2_speed_pane_t1

0x2f1a,	// (0x00079132) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x00085d29) blid2_speed_pane_t

0x1f1a,	// (0x00078132) blid2_navig_ring_pane_g1

0xc668,	// (0x00082880) blid2_navig_ring_pane_g2

0xc670,	// (0x00082888) blid2_navig_ring_pane_g3

0xc678,	// (0x00082890) blid2_navig_ring_pane_g4

0xc680,	// (0x00082898) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x00085d2e) blid2_navig_ring_pane_g

0xe15b,	// (0x00084373) bg_popup_window_pane_cp011

0x2f28,	// (0x00079140) popup_blid2_search_window_g1

0x2f30,	// (0x00079148) popup_blid2_search_window_t1

0x2f3e,	// (0x00079156) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x00085d39) popup_blid2_search_window_t

0xefec,	// (0x00085204) main_browser_pane_g1

0xecd3,	// (0x00084eeb) main_browser_pane_ParamLimits

0xf0bc,	// (0x000852d4) bg_button_pane_cp011_ParamLimits

0xb7c7,	// (0x000819df) cell_vitu2_function_pane_g1_ParamLimits

0x1b10,	// (0x00077d28) bg_popup_sub_pane_cp22_ParamLimits

0x533a,	// (0x0007b552) input_focus_pane_cp08_ParamLimits

0xc05a,	// (0x00082272) popup_vitu2_query_button_pane_ParamLimits

0xc05a,	// (0x00082272) popup_vitu2_query_button_pane

0x5351,	// (0x0007b569) popup_vitu2_query_input_button_pane

0x2bd6,	// (0x00078dee) popup_vitu2_query_window_g1_ParamLimits

0xc06b,	// (0x00082283) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x00085c3a) popup_vitu2_query_window_g_ParamLimits

0xe15b,	// (0x00084373) bg_button_pane_cp026

0xc688,	// (0x000828a0) popup_vitu2_query_input_button_pane_g1

0xe15b,	// (0x00084373) bg_button_pane_cp025

0x2f4c,	// (0x00079164) popup_vitu2_query_button_pane_t1

0x9ed3,	// (0x000800eb) main_mp3_pane_t6

0x9ee3,	// (0x000800fb) popup_slider_window_cp01

0xb43f,	// (0x00081657) cam4_battery_pane

0xb51f,	// (0x00081737) cam4_battery_pane_cp02

0xc3dc,	// (0x000825f4) cam4_battery_pane_cp01

0xc3dc,	// (0x000825f4) cam4_battery_pane_cp03

0x1f1a,	// (0x00078132) cam4_battery_pane_g1

0x281b,	// (0x00078a33) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x00085d3e) cam4_battery_pane_g

0x1de4,	// (0x00077ffc) popup_blid_sat_info2_window_t11

0x86b5,	// (0x0007e8cd) aid_size_touch_mv_arrow_left_ParamLimits

0x86e0,	// (0x0007e8f8) aid_size_touch_mv_arrow_right_ParamLimits

0x063f,	// (0x00076857) navi_pane_g1_ParamLimits

0x871f,	// (0x0007e937) navi_pane_g2_ParamLimits

0x874d,	// (0x0007e965) navi_pane_g3_ParamLimits

0xf3f0,	// (0x00085608) navi_pane_g_ParamLimits

0x87a7,	// (0x0007e9bf) navi_pane_mv_t1_ParamLimits

0xa9f3,	// (0x00080c0b) grid_imed_effect_pane_ParamLimits

0x70a2,	// (0x0007d2ba) aid_placing_vt_slider_lsc

0xef3b,	// (0x00085153) aid_placing_vt_slider_prt

0xf0bc,	// (0x000852d4) bg_tb_trans_pane_cp01_ParamLimits

0x209a,	// (0x000782b2) popup_image_details_window_g1_ParamLimits

0x20ad,	// (0x000782c5) popup_image_details_window_g2_ParamLimits

0x20c2,	// (0x000782da) popup_image_details_window_g3_ParamLimits

0x20c2,	// (0x000782da) popup_image_details_window_g3

0xf723,	// (0x0008593b) popup_image_details_window_g_ParamLimits

0x20d6,	// (0x000782ee) popup_image_details_window_t1_ParamLimits

0x20e8,	// (0x00078300) popup_image_details_window_t2_ParamLimits

0x2101,	// (0x00078319) popup_image_details_window_t3_ParamLimits

0x2115,	// (0x0007832d) popup_image_details_window_t4_ParamLimits

0x2130,	// (0x00078348) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x00085942) popup_image_details_window_t_ParamLimits

0xc2fc,	// (0x00082514) cl_header_name_pane_ParamLimits

0xc2fc,	// (0x00082514) cl_header_name_pane

0xc690,	// (0x000828a8) cl_header_name_pane_t1_ParamLimits

0xc690,	// (0x000828a8) cl_header_name_pane_t1

0xc6a7,	// (0x000828bf) cl_header_name_pane_t2_ParamLimits

0xc6a7,	// (0x000828bf) cl_header_name_pane_t2

0xc6d1,	// (0x000828e9) cl_header_name_pane_t3_ParamLimits

0xc6d1,	// (0x000828e9) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x00085d43) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x00085d43) cl_header_name_pane_t

0x8778,	// (0x0007e990) navi_pane_mv_g2_ParamLimits

0x293d,	// (0x00078b55) field_vitu2_entry_pane_g1_ParamLimits

0x2949,	// (0x00078b61) field_vitu2_entry_pane_g2_ParamLimits

0x2955,	// (0x00078b6d) field_vitu2_entry_pane_g3_ParamLimits

0x2955,	// (0x00078b6d) field_vitu2_entry_pane_g3

0xf921,	// (0x00085b39) field_vitu2_entry_pane_g_ParamLimits

0xb757,	// (0x0008196f) cell_vitu2_itu_pane_g1_ParamLimits

0xb767,	// (0x0008197f) cell_vitu2_itu_pane_g2_ParamLimits

0xb767,	// (0x0008197f) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x00085b45) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x00085b45) cell_vitu2_itu_pane_g

0xf0bc,	// (0x000852d4) bg_vkb2_func_pane_cp05_ParamLimits

0xf0bc,	// (0x000852d4) bg_vkb2_func_pane_cp05

0xf0bc,	// (0x000852d4) bg_vkb2_func_pane_cp03

0xf0bc,	// (0x000852d4) bg_vkb2_func_pane_cp04

0xf0bc,	// (0x000852d4) bg_vkb2_func_pane_cp10_ParamLimits

0xf0bc,	// (0x000852d4) bg_vkb2_func_pane_cp10

0x549d,	// (0x0007b6b5) bg_vkb2_func_pane_cp08

0xc2a6,	// (0x000824be) bg_vkb2_func_pane_cp06

0xc2b4,	// (0x000824cc) bg_vkb2_func_pane_cp07

0x2e5a,	// (0x00079072) bg_vkb2_func_pane_cp11_ParamLimits

0x2e5a,	// (0x00079072) bg_vkb2_func_pane_cp11

0x2e6f,	// (0x00079087) bg_vkb2_func_pane_cp12_ParamLimits

0x2e6f,	// (0x00079087) bg_vkb2_func_pane_cp12

0xe15b,	// (0x00084373) bg_vkb2_func_pane_cp09

0x2975,	// (0x00078b8d) bg_vkb2_func_pane_g1

0x0042,	// (0x0007625a) bg_vkb2_func_pane_g2

0x297d,	// (0x00078b95) bg_vkb2_func_pane_g3

0x2985,	// (0x00078b9d) bg_vkb2_func_pane_g4

0x2b99,	// (0x00078db1) bg_vkb2_func_pane_g5

0x299d,	// (0x00078bb5) bg_vkb2_func_pane_g6

0x29a5,	// (0x00078bbd) bg_vkb2_func_pane_g7

0x2995,	// (0x00078bad) bg_vkb2_func_pane_g8

0x0022,	// (0x0007623a) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x00085d4a) bg_vkb2_func_pane_g

0xc5df,	// (0x000827f7) blid2_tripm_pane_g6_ParamLimits

0xc5df,	// (0x000827f7) blid2_tripm_pane_g6

0x27d5,	// (0x000789ed) mp4_progress_pane_g1

0xc639,	// (0x00082851) blid2_tripm_values_pane_ParamLimits

0xc639,	// (0x00082851) blid2_tripm_values_pane

0xc6f6,	// (0x0008290e) blid2_tripm_values_pane_t1

0xc704,	// (0x0008291c) blid2_tripm_values_pane_t2

0xc712,	// (0x0008292a) blid2_tripm_values_pane_t3

0xc720,	// (0x00082938) blid2_tripm_values_pane_t4

0xc72e,	// (0x00082946) blid2_tripm_values_pane_t5

0xc73c,	// (0x00082954) blid2_tripm_values_pane_t6

0xc74a,	// (0x00082962) blid2_tripm_values_pane_t7

0xc758,	// (0x00082970) blid2_tripm_values_pane_t8

0xc766,	// (0x0008297e) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x00085d5d) blid2_tripm_values_pane_t

0x70e2,	// (0x0007d2fa) call_video_pane_t1_ParamLimits

0x7103,	// (0x0007d31b) call_video_pane_t2_ParamLimits

0xf279,	// (0x00085491) call_video_pane_t_ParamLimits

0x5100,	// (0x0007b318) msg_header_pane_g1_ParamLimits

0x085f,	// (0x00076a77) msg_header_pane_g2_ParamLimits

0x085f,	// (0x00076a77) msg_header_pane_g2

0x0001,

0xf493,	// (0x000856ab) msg_header_pane_g_ParamLimits

0xf493,	// (0x000856ab) msg_header_pane_g

0xecd3,	// (0x00084eeb) main_clock2_pane_ParamLimits

0xa784,	// (0x0008099c) grid_clock2_toolbar_pane_ParamLimits

0xa784,	// (0x0008099c) grid_clock2_toolbar_pane

0xa784,	// (0x0008099c) listscroll_clock2_pane_ParamLimits

0xa784,	// (0x0008099c) listscroll_clock2_pane

0xa82e,	// (0x00080a46) main_clock2_pane_t3_ParamLimits

0xa82e,	// (0x00080a46) main_clock2_pane_t3

0xa840,	// (0x00080a58) main_clock2_pane_t4_ParamLimits

0xa840,	// (0x00080a58) main_clock2_pane_t4

0x2f5a,	// (0x00079172) cell_clock2_toolbar_pane

0x2f62,	// (0x0007917a) cell_clock2_toolbar_pane_cp01

0x2f62,	// (0x0007917a) cell_clock2_toolbar_pane_cp02

0x2f6a,	// (0x00079182) cell_clock2_toolbar_pane_cp03

0x2f72,	// (0x0007918a) list_clock2_pane

0x0596,	// (0x000767ae) scroll_pane_cp10

0x2f7a,	// (0x00079192) list_single_clock2_pane_ParamLimits

0x2f7a,	// (0x00079192) list_single_clock2_pane

0x06df,	// (0x000768f7) list_highlight_pane_cp08

0x2f87,	// (0x0007919f) list_single_clock2_pane_t1

0x2f95,	// (0x000791ad) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x00085d70) list_single_clock2_pane_t

0xe15b,	// (0x00084373) bg_button_pane_cp10

0x2fa3,	// (0x000791bb) cell_clock2_toolbar_pane_g1

0x8c9a,	// (0x0007eeb2) aid_main_viewer_pane_g1_ParamLimits

0x8c9a,	// (0x0007eeb2) aid_main_viewer_pane_g1

0x8ca6,	// (0x0007eebe) aid_main_viewer_pane_g2_ParamLimits

0x8ca6,	// (0x0007eebe) aid_main_viewer_pane_g2

0x8cb2,	// (0x0007eeca) aid_main_viewer_pane_g3_ParamLimits

0x8cb2,	// (0x0007eeca) aid_main_viewer_pane_g3

0x8cc3,	// (0x0007eedb) aid_main_viewer_pane_g4_ParamLimits

0x8cc3,	// (0x0007eedb) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x000856bc) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x000856bc) aid_main_viewer_pane_g

0x9450,	// (0x0007f668) main_calc_pane_ParamLimits

0x945d,	// (0x0007f675) main_dialer2_pane_ParamLimits

0xe15b,	// (0x00084373) main_cam6_pane

0xe15b,	// (0x00084373) main_vid6_pane

0xa790,	// (0x000809a8) listscroll_gen_pane_cp06_ParamLimits

0xa790,	// (0x000809a8) listscroll_gen_pane_cp06

0xa852,	// (0x00080a6a) main_clock2_pane_t5_ParamLimits

0xa852,	// (0x00080a6a) main_clock2_pane_t5

0xa89d,	// (0x00080ab5) aid_call2_pane_cp10_ParamLimits

0xa8af,	// (0x00080ac7) aid_call_pane_cp10_ParamLimits

0x0614,	// (0x0007682c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0614,	// (0x0007682c) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa8c1,	// (0x00080ad9) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa8c1,	// (0x00080ad9) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0614,	// (0x0007682c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x000859f2) popup_clock_analogue_window_cp10_g_ParamLimits

0xa8d3,	// (0x00080aeb) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb0be,	// (0x000812d6) cell_dialer2_keypad_pane_g2_ParamLimits

0xb0be,	// (0x000812d6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x00085ad8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x00085ad8) cell_dialer2_keypad_pane_g

0xb0da,	// (0x000812f2) cell_dialer2_keypad_pane_t1

0xba94,	// (0x00081cac) main_cset_text2_pane_ParamLimits

0xba94,	// (0x00081cac) main_cset_text2_pane

0x2dc2,	// (0x00078fda) area_vitu2_query_pane_g1_ParamLimits

0x53c8,	// (0x0007b5e0) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x00085c8d) area_vitu2_query_pane_g_ParamLimits

0x5479,	// (0x0007b691) area_vitu2_query_pane_t7_ParamLimits

0x5479,	// (0x0007b691) area_vitu2_query_pane_t7

0xc2a6,	// (0x000824be) bg_button_pane_cp018_ParamLimits

0xc2b4,	// (0x000824cc) bg_button_pane_cp021_ParamLimits

0x549d,	// (0x0007b6b5) bg_button_pane_cp022_ParamLimits

0x549d,	// (0x0007b6b5) bg_vkb2_func_pane_cp08_ParamLimits

0xc2a6,	// (0x000824be) bg_vkb2_func_pane_cp06_ParamLimits

0xc2b4,	// (0x000824cc) bg_vkb2_func_pane_cp07_ParamLimits

0x54ae,	// (0x0007b6c6) input_focus_pane_cp09_ParamLimits

0xc774,	// (0x0008298c) cam6_autofocus_pane_ParamLimits

0xc774,	// (0x0008298c) cam6_autofocus_pane

0xc796,	// (0x000829ae) cam6_image_uncrop_pane_ParamLimits

0xc796,	// (0x000829ae) cam6_image_uncrop_pane

0xc7c3,	// (0x000829db) cam6_indi_pane_ParamLimits

0xc7c3,	// (0x000829db) cam6_indi_pane

0xc7dd,	// (0x000829f5) cam6_mode_pane_ParamLimits

0xc7dd,	// (0x000829f5) cam6_mode_pane

0xc7f1,	// (0x00082a09) cam6_timer_pane_ParamLimits

0xc7f1,	// (0x00082a09) cam6_timer_pane

0xc7fd,	// (0x00082a15) cam6_zoom_pane_ParamLimits

0xc7fd,	// (0x00082a15) cam6_zoom_pane

0xc815,	// (0x00082a2d) cam6_mode_pane_g1_ParamLimits

0xc815,	// (0x00082a2d) cam6_mode_pane_g1

0xc821,	// (0x00082a39) cam6_mode_pane_g2_ParamLimits

0xc821,	// (0x00082a39) cam6_mode_pane_g2

0xc82d,	// (0x00082a45) cam6_mode_pane_g3_ParamLimits

0xc82d,	// (0x00082a45) cam6_mode_pane_g3

0xc839,	// (0x00082a51) cam6_mode_pane_g4_ParamLimits

0xc839,	// (0x00082a51) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x00085d75) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x00085d75) cam6_mode_pane_g

0x2fab,	// (0x000791c3) bg_tb_trans_pane_cp08_ParamLimits

0x2fab,	// (0x000791c3) bg_tb_trans_pane_cp08

0x2fb9,	// (0x000791d1) cam6_battery_pane_ParamLimits

0x2fb9,	// (0x000791d1) cam6_battery_pane

0x2fcf,	// (0x000791e7) cam6_indi_pane_g1_ParamLimits

0x2fcf,	// (0x000791e7) cam6_indi_pane_g1

0x2fe1,	// (0x000791f9) cam6_indi_pane_g2_ParamLimits

0x2fe1,	// (0x000791f9) cam6_indi_pane_g2

0x2ff3,	// (0x0007920b) cam6_indi_pane_g3_ParamLimits

0x2ff3,	// (0x0007920b) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x00085d7e) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x00085d7e) cam6_indi_pane_g

0x3005,	// (0x0007921d) cam6_indi_pane_t1_ParamLimits

0x3005,	// (0x0007921d) cam6_indi_pane_t1

0xb593,	// (0x000817ab) cam6_autofocus_pane_g1

0xb59b,	// (0x000817b3) cam6_autofocus_pane_g2

0xb5a3,	// (0x000817bb) cam6_autofocus_pane_g3

0xb5ab,	// (0x000817c3) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x00085d85) cam6_autofocus_pane_g

0x302b,	// (0x00079243) cam6_timer_pane_g1

0x3033,	// (0x0007924b) cam6_timer_pane_t1

0x3041,	// (0x00079259) cam6_zoom_cont_pane

0x3049,	// (0x00079261) cam6_zoom_pane_g1

0x3051,	// (0x00079269) cam6_zoom_pane_g2

0xc845,	// (0x00082a5d) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x00085d8e) cam6_zoom_pane_g

0x1f1a,	// (0x00078132) cam6_battery_pane_g1

0x1f1a,	// (0x00078132) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x000858ff) cam6_battery_pane_g

0x3059,	// (0x00079271) cam6_zoom_cont_pane_g1

0x3062,	// (0x0007927a) cam6_zoom_cont_pane_g2

0x30a1,	// (0x000792b9) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x00085d95) cam6_zoom_cont_pane_g

0xc862,	// (0x00082a7a) cam6_mode_pane_cp_ParamLimits

0xc862,	// (0x00082a7a) cam6_mode_pane_cp

0xc7fd,	// (0x00082a15) cam6_zoom_pane_cp_ParamLimits

0xc7fd,	// (0x00082a15) cam6_zoom_pane_cp

0xc876,	// (0x00082a8e) vid6_image_uncrop_cif_pane_ParamLimits

0xc876,	// (0x00082a8e) vid6_image_uncrop_cif_pane

0xc8a2,	// (0x00082aba) vid6_image_uncrop_nhd_pane_ParamLimits

0xc8a2,	// (0x00082aba) vid6_image_uncrop_nhd_pane

0xc796,	// (0x000829ae) vid6_image_uncrop_vga_pane_ParamLimits

0xc796,	// (0x000829ae) vid6_image_uncrop_vga_pane

0xc8bf,	// (0x00082ad7) vid6_image_uncrop_wvga_pane_ParamLimits

0xc8bf,	// (0x00082ad7) vid6_image_uncrop_wvga_pane

0xc8dc,	// (0x00082af4) vid6_indi_pane_ParamLimits

0xc8dc,	// (0x00082af4) vid6_indi_pane

0x2fab,	// (0x000791c3) bg_tb_trans_pane_cp09_ParamLimits

0x2fab,	// (0x000791c3) bg_tb_trans_pane_cp09

0x30b9,	// (0x000792d1) cam6_battery_pane_cp_ParamLimits

0x30b9,	// (0x000792d1) cam6_battery_pane_cp

0x30c5,	// (0x000792dd) vid6_indi_pane_g1_ParamLimits

0x30c5,	// (0x000792dd) vid6_indi_pane_g1

0x30d7,	// (0x000792ef) vid6_indi_pane_g2_ParamLimits

0x30d7,	// (0x000792ef) vid6_indi_pane_g2

0x30e9,	// (0x00079301) vid6_indi_pane_g3_ParamLimits

0x30e9,	// (0x00079301) vid6_indi_pane_g3

0x30fe,	// (0x00079316) vid6_indi_pane_g4_ParamLimits

0x30fe,	// (0x00079316) vid6_indi_pane_g4

0x3113,	// (0x0007932b) vid6_indi_pane_g5_ParamLimits

0x3113,	// (0x0007932b) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x00085d9c) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x00085d9c) vid6_indi_pane_g

0x312d,	// (0x00079345) vid6_indi_pane_t1_ParamLimits

0x312d,	// (0x00079345) vid6_indi_pane_t1

0x3143,	// (0x0007935b) vid6_indi_pane_t2_ParamLimits

0x3143,	// (0x0007935b) vid6_indi_pane_t2

0x316b,	// (0x00079383) vid6_indi_pane_t3_ParamLimits

0x316b,	// (0x00079383) vid6_indi_pane_t3

0x3193,	// (0x000793ab) vid6_indi_pane_t4_ParamLimits

0x3193,	// (0x000793ab) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x00085da7) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x00085da7) vid6_indi_pane_t

0x31b7,	// (0x000793cf) wait_bar_pane_cp08

0xc8ff,	// (0x00082b17) main_cset_text2_pane_t1_ParamLimits

0xc8ff,	// (0x00082b17) main_cset_text2_pane_t1

0xc84d,	// (0x00082a65) listscroll_gen_pane_cp06_t1_ParamLimits

0xc84d,	// (0x00082a65) listscroll_gen_pane_cp06_t1

0xe15b,	// (0x00084373) main_cam6_set_pane

0x217a,	// (0x00078392) bg_tb_trans_pane_cp06_ParamLimits

0xb447,	// (0x0008165f) cam4_indicators_pane_g1_ParamLimits

0xb458,	// (0x00081670) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x00085b15) cam4_indicators_pane_g_ParamLimits

0xb476,	// (0x0008168e) cam4_indicators_pane_t1_ParamLimits

0xf0bc,	// (0x000852d4) bg_tb_trans_pane_cp07_ParamLimits

0xb527,	// (0x0008173f) vid4_indicators_pane_g1_ParamLimits

0xb53b,	// (0x00081753) vid4_indicators_pane_g2_ParamLimits

0xb54f,	// (0x00081767) vid4_indicators_pane_g3_ParamLimits

0xb560,	// (0x00081778) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x00085b27) vid4_indicators_pane_g_ParamLimits

0xb57c,	// (0x00081794) vid4_indicators_pane_t1_ParamLimits

0xc3e4,	// (0x000825fc) vid4_progress_pane_g1_ParamLimits

0xc3f6,	// (0x0008260e) vid4_progress_pane_g2_ParamLimits

0x8d20,	// (0x0007ef38) vid4_progress_pane_g3_ParamLimits

0xc406,	// (0x0008261e) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x00085cd8) vid4_progress_pane_g_ParamLimits

0xc424,	// (0x0008263c) vid4_progress_pane_t1_ParamLimits

0xc439,	// (0x00082651) vid4_progress_pane_t2_ParamLimits

0xc44f,	// (0x00082667) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x00085ce3) vid4_progress_pane_t_ParamLimits

0xc465,	// (0x0008267d) wait_bar_pane_cp07_ParamLimits

0xc939,	// (0x00082b51) main_cam6_set_pane_g2_ParamLimits

0xc939,	// (0x00082b51) main_cam6_set_pane_g2

0xc945,	// (0x00082b5d) main_cset6_listscroll_pane_ParamLimits

0xc945,	// (0x00082b5d) main_cset6_listscroll_pane

0xc970,	// (0x00082b88) main_cset6_slider_pane_ParamLimits

0xc970,	// (0x00082b88) main_cset6_slider_pane

0xc97c,	// (0x00082b94) main_cset6_text2_pane_ParamLimits

0xc97c,	// (0x00082b94) main_cset6_text2_pane

0x31c6,	// (0x000793de) main_cset6_text_pane

0x31ce,	// (0x000793e6) main_cset_list_pane_copy1_ParamLimits

0x31ce,	// (0x000793e6) main_cset_list_pane_copy1

0x31de,	// (0x000793f6) scroll_pane_cp028_copy1

0xc98f,	// (0x00082ba7) cset_list_set_pane_copy1

0xc9a8,	// (0x00082bc0) aid_position_infowindow_above_copy1

0xc9b0,	// (0x00082bc8) aid_position_infowindow_below_copy1

0xc9b8,	// (0x00082bd0) cset_list_set_pane_g1_copy1

0x52bb,	// (0x0007b4d3) cset_list_set_pane_g3_copy1_ParamLimits

0x52bb,	// (0x0007b4d3) cset_list_set_pane_g3_copy1

0x52ca,	// (0x0007b4e2) cset_list_set_pane_t1_copy1_ParamLimits

0x52ca,	// (0x0007b4e2) cset_list_set_pane_t1_copy1

0xf0bc,	// (0x000852d4) list_highlight_pane_cp021_copy1_ParamLimits

0xf0bc,	// (0x000852d4) list_highlight_pane_cp021_copy1

0x31e7,	// (0x000793ff) cset6_slider_pane_ParamLimits

0x31e7,	// (0x000793ff) cset6_slider_pane

0x3213,	// (0x0007942b) main_cset6_slider_pane_g1_ParamLimits

0x3213,	// (0x0007942b) main_cset6_slider_pane_g1

0xc9c0,	// (0x00082bd8) main_cset6_slider_pane_g2_ParamLimits

0xc9c0,	// (0x00082bd8) main_cset6_slider_pane_g2

0x323b,	// (0x00079453) main_cset6_slider_pane_g3_ParamLimits

0x323b,	// (0x00079453) main_cset6_slider_pane_g3

0xc9e8,	// (0x00082c00) main_cset6_slider_pane_g4_ParamLimits

0xc9e8,	// (0x00082c00) main_cset6_slider_pane_g4

0xc9f4,	// (0x00082c0c) main_cset6_slider_pane_g5_ParamLimits

0xc9f4,	// (0x00082c0c) main_cset6_slider_pane_g5

0x2aa4,	// (0x00078cbc) main_cset6_slider_pane_g7_ParamLimits

0x2aa4,	// (0x00078cbc) main_cset6_slider_pane_g7

0x2ab0,	// (0x00078cc8) main_cset6_slider_pane_g8_ParamLimits

0x2ab0,	// (0x00078cc8) main_cset6_slider_pane_g8

0xca02,	// (0x00082c1a) main_cset6_slider_pane_g9_ParamLimits

0xca02,	// (0x00082c1a) main_cset6_slider_pane_g9

0xca0e,	// (0x00082c26) main_cset6_slider_pane_g10_ParamLimits

0xca0e,	// (0x00082c26) main_cset6_slider_pane_g10

0xca1a,	// (0x00082c32) main_cset6_slider_pane_g11_ParamLimits

0xca1a,	// (0x00082c32) main_cset6_slider_pane_g11

0xca26,	// (0x00082c3e) main_cset6_slider_pane_g12_ParamLimits

0xca26,	// (0x00082c3e) main_cset6_slider_pane_g12

0xca32,	// (0x00082c4a) main_cset6_slider_pane_g13_ParamLimits

0xca32,	// (0x00082c4a) main_cset6_slider_pane_g13

0xca3e,	// (0x00082c56) main_cset6_slider_pane_g14_ParamLimits

0xca3e,	// (0x00082c56) main_cset6_slider_pane_g14

0xca4a,	// (0x00082c62) main_cset6_slider_pane_g15_ParamLimits

0xca4a,	// (0x00082c62) main_cset6_slider_pane_g15

0xca62,	// (0x00082c7a) main_cset6_slider_pane_g16_ParamLimits

0xca62,	// (0x00082c7a) main_cset6_slider_pane_g16

0xca70,	// (0x00082c88) main_cset6_slider_pane_g17_ParamLimits

0xca70,	// (0x00082c88) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x00085db0) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x00085db0) main_cset6_slider_pane_g

0x3247,	// (0x0007945f) main_cset6_slider_pane_t1_ParamLimits

0x3247,	// (0x0007945f) main_cset6_slider_pane_t1

0xca96,	// (0x00082cae) main_cset6_slider_pane_t2_ParamLimits

0xca96,	// (0x00082cae) main_cset6_slider_pane_t2

0xcac1,	// (0x00082cd9) main_cset6_slider_pane_t3_ParamLimits

0xcac1,	// (0x00082cd9) main_cset6_slider_pane_t3

0xcaec,	// (0x00082d04) main_cset6_slider_pane_t4_ParamLimits

0xcaec,	// (0x00082d04) main_cset6_slider_pane_t4

0xcb17,	// (0x00082d2f) main_cset6_slider_pane_t5_ParamLimits

0xcb17,	// (0x00082d2f) main_cset6_slider_pane_t5

0x3288,	// (0x000794a0) main_cset6_slider_pane_t7_ParamLimits

0x3288,	// (0x000794a0) main_cset6_slider_pane_t7

0xcb44,	// (0x00082d5c) main_cset6_slider_pane_t8_ParamLimits

0xcb44,	// (0x00082d5c) main_cset6_slider_pane_t8

0xcb68,	// (0x00082d80) main_cset6_slider_pane_t9_ParamLimits

0xcb68,	// (0x00082d80) main_cset6_slider_pane_t9

0xcb8c,	// (0x00082da4) main_cset6_slider_pane_t10_ParamLimits

0xcb8c,	// (0x00082da4) main_cset6_slider_pane_t10

0xcbb0,	// (0x00082dc8) main_cset6_slider_pane_t11_ParamLimits

0xcbb0,	// (0x00082dc8) main_cset6_slider_pane_t11

0x32be,	// (0x000794d6) main_cset6_slider_pane_t14_ParamLimits

0x32be,	// (0x000794d6) main_cset6_slider_pane_t14

0x32f7,	// (0x0007950f) main_cset6_slider_pane_t15_ParamLimits

0x32f7,	// (0x0007950f) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x00085dd5) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x00085dd5) main_cset6_slider_pane_t

0x306b,	// (0x00079283) cset_slider_pane_g1_copy1

0x3074,	// (0x0007928c) cset_slider_pane_g2_copy1

0x307d,	// (0x00079295) cset_slider_pane_g3_copy1

0xe15b,	// (0x00084373) bg_popup_sub_pane_cp011_copy1

0x3330,	// (0x00079548) main_cset_text_pane_g1_copy1

0x2bea,	// (0x00078e02) main_cset_text_pane_t1_copy1

0x2bf8,	// (0x00078e10) main_cset_text_pane_t2_copy1

0x2c06,	// (0x00078e1e) main_cset_text_pane_t3_copy1

0x2c14,	// (0x00078e2c) main_cset_text_pane_t4_copy1

0x2c22,	// (0x00078e3a) main_cset_text_pane_t5_copy1

0x3338,	// (0x00079550) main_cset_text_pane_t6_copy1

0x3346,	// (0x0007955e) main_cset_text_pane_t7_copy1

0xcbf1,	// (0x00082e09) main_cset_text2_pane_t1_copy1

0xf0bc,	// (0x000852d4) main_ncimui_pane

0x94ae,	// (0x0007f6c6) popup_query_ncimui_window_ParamLimits

0x94ae,	// (0x0007f6c6) popup_query_ncimui_window

0xa041,	// (0x00080259) field_cale_ev2_pane_g4_ParamLimits

0xa041,	// (0x00080259) field_cale_ev2_pane_g4

0xadde,	// (0x00080ff6) cell_video_dialer_keypad_pane_g2_ParamLimits

0xadde,	// (0x00080ff6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x00085ab3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x00085ab3) cell_video_dialer_keypad_pane_g

0xadf6,	// (0x0008100e) cell_video_dialer_keypad_pane_t1

0xe15b,	// (0x00084373) bg_popup_window_pane_cp012

0x0457,	// (0x0007666f) heading_pane_cp06

0x3372,	// (0x0007958a) ncim_query_content_pane

0xe15b,	// (0x00084373) bg_popup_heading_pane_cp01

0x337a,	// (0x00079592) ncim_heading_pane_t1

0x3388,	// (0x000795a0) ncim_indicator_popup_pane

0x339a,	// (0x000795b2) ncim_query_button_pane

0x33ae,	// (0x000795c6) ncim_query_content_pane_t1

0x33c0,	// (0x000795d8) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x00085e19) ncim_query_content_pane_t

0x33fa,	// (0x00079612) ncim_query_list_pane

0x340c,	// (0x00079624) ncim_query_popup_pane

0x3388,	// (0x000795a0) ncim_indicator_popup_pane_ParamLimits

0xcd4b,	// (0x00082f63) ncim_query_content_pane_g1_ParamLimits

0xcd4b,	// (0x00082f63) ncim_query_content_pane_g1

0x33ae,	// (0x000795c6) ncim_query_content_pane_t1_ParamLimits

0x33c0,	// (0x000795d8) ncim_query_content_pane_t2_ParamLimits

0xcd57,	// (0x00082f6f) ncim_query_content_pane_t3_ParamLimits

0xcd57,	// (0x00082f6f) ncim_query_content_pane_t3

0xcd74,	// (0x00082f8c) ncim_query_content_pane_t4_ParamLimits

0xcd74,	// (0x00082f8c) ncim_query_content_pane_t4

0xcd91,	// (0x00082fa9) ncim_query_content_pane_t5_ParamLimits

0xcd91,	// (0x00082fa9) ncim_query_content_pane_t5

0x33d2,	// (0x000795ea) ncim_query_content_pane_t6_ParamLimits

0x33d2,	// (0x000795ea) ncim_query_content_pane_t6

0xfc01,	// (0x00085e19) ncim_query_content_pane_t_ParamLimits

0x33fa,	// (0x00079612) ncim_query_list_pane_ParamLimits

0x340c,	// (0x00079624) ncim_query_popup_pane_ParamLimits

0x3420,	// (0x00079638) wait_bar_pane_cp04

0xe15b,	// (0x00084373) input_focus_pane_cp011

0x3428,	// (0x00079640) ncim_query_popup_pane_t1

0x3436,	// (0x0007964e) ncim_list_query_list_pane_ParamLimits

0x3436,	// (0x0007964e) ncim_list_query_list_pane

0xe15b,	// (0x00084373) bg_button_pane_cp027

0x3449,	// (0x00079661) ncim_query_button_pane_g1

0xe15b,	// (0x00084373) list_highlight_pane_cp012

0x3453,	// (0x0007966b) ncim_list_query_list_pane_g1

0x345b,	// (0x00079673) ncim_list_query_list_pane_t1

0xb467,	// (0x0008167f) cam4_indicators_pane_g3_ParamLimits

0xb467,	// (0x0008167f) cam4_indicators_pane_g3

0xb56c,	// (0x00081784) vid4_indicators_pane_g5_ParamLimits

0xb56c,	// (0x00081784) vid4_indicators_pane_g5

0xc415,	// (0x0008262d) vid4_progress_pane_g5_ParamLimits

0xc415,	// (0x0008262d) vid4_progress_pane_g5

0xcc37,	// (0x00082e4f) main_ncimui_pane_g1

0xcc9f,	// (0x00082eb7) ncimui_group_query_pane_ParamLimits

0xcc9f,	// (0x00082eb7) ncimui_group_query_pane

0xcce7,	// (0x00082eff) ncimui_list_pane_ParamLimits

0xcce7,	// (0x00082eff) ncimui_list_pane

0xcd0e,	// (0x00082f26) ncimui_text_pane_ParamLimits

0xcd0e,	// (0x00082f26) ncimui_text_pane

0xcdae,	// (0x00082fc6) ncimui_text_pane_t1_ParamLimits

0xcdae,	// (0x00082fc6) ncimui_text_pane_t1

0x3469,	// (0x00079681) ncimui_list_single_graphic_pane_ParamLimits

0x3469,	// (0x00079681) ncimui_list_single_graphic_pane

0xcdcd,	// (0x00082fe5) ncimui_query_pane_ParamLimits

0xcdcd,	// (0x00082fe5) ncimui_query_pane

0xe15b,	// (0x00084373) list_highlight_pane_cp013

0x3479,	// (0x00079691) ncim_list_query_list_pane_t1_copy1

0x3453,	// (0x0007966b) ncim_list_single_graphic_pane_g1

0x3487,	// (0x0007969f) ncim_query_button_pane_cp01

0x3493,	// (0x000796ab) ncim_query_entry_pane_ParamLimits

0x3493,	// (0x000796ab) ncim_query_entry_pane

0x34a6,	// (0x000796be) ncimui_query_pane_g1

0x34b2,	// (0x000796ca) ncimui_query_pane_t1_ParamLimits

0x34b2,	// (0x000796ca) ncimui_query_pane_t1

0xf0bc,	// (0x000852d4) input_focus_pane_cp012

0x34cb,	// (0x000796e3) ncim_query_entry_pane_t1

0xecd3,	// (0x00084eeb) main_im_pane_ParamLimits

0xf0bc,	// (0x000852d4) main_mobtv_pane_ParamLimits

0xf0bc,	// (0x000852d4) main_mobtv_pane

0xca7e,	// (0x00082c96) main_cset6_slider_pane_g18_ParamLimits

0xca7e,	// (0x00082c96) main_cset6_slider_pane_g18

0xca8a,	// (0x00082ca2) main_cset6_slider_pane_g19_ParamLimits

0xca8a,	// (0x00082ca2) main_cset6_slider_pane_g19

0x2955,	// (0x00078b6d) bg_main_mobtv_pane_ParamLimits

0x2955,	// (0x00078b6d) bg_main_mobtv_pane

0xcde0,	// (0x00082ff8) main_mobtv_info_pane

0xcdeb,	// (0x00083003) main_mobtv_loading_pane_ParamLimits

0xcdeb,	// (0x00083003) main_mobtv_loading_pane

0x34dd,	// (0x000796f5) main_mobtv_pg_channel_list_pane

0x34e7,	// (0x000796ff) main_mobtv_pg_hdr_pane

0xcdf8,	// (0x00083010) main_mobtv_programe_curr_pane_ParamLimits

0xcdf8,	// (0x00083010) main_mobtv_programe_curr_pane

0xce05,	// (0x0008301d) main_mobtv_programe_next_pane_ParamLimits

0xce05,	// (0x0008301d) main_mobtv_programe_next_pane

0x34f0,	// (0x00079708) popup_mobtv_noti_window

0x1f1a,	// (0x00078132) main_tv_pg_hdr_pane_g1

0x34f8,	// (0x00079710) main_tv_pg_hdr_pane_g2

0x3500,	// (0x00079718) main_tv_pg_hdr_pane_g3

0x3508,	// (0x00079720) main_tv_pg_hdr_pane_g4

0x3510,	// (0x00079728) main_tv_pg_hdr_pane_g5

0x351a,	// (0x00079732) main_tv_pg_hdr_pane_g6

0x3524,	// (0x0007973c) main_tv_pg_hdr_pane_g7

0x352e,	// (0x00079746) main_tv_pg_hdr_pane_g8

0x3538,	// (0x00079750) main_tv_pg_hdr_pane_g9

0x3542,	// (0x0007975a) main_tv_pg_hdr_pane_g10

0x354c,	// (0x00079764) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x00085e26) main_tv_pg_hdr_pane_g

0x3556,	// (0x0007976e) main_tv_pg_hdr_pane_t1

0x3564,	// (0x0007977c) main_tv_pg_hdr_pane_t2

0x3572,	// (0x0007978a) main_tv_pg_hdr_pane_t3

0x3582,	// (0x0007979a) main_tv_pg_hdr_pane_t4

0x3592,	// (0x000797aa) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x00085e3d) main_tv_pg_hdr_pane_t

0x35a2,	// (0x000797ba) single_mobtv_pg_channel_pane_ParamLimits

0x35a2,	// (0x000797ba) single_mobtv_pg_channel_pane

0x35b4,	// (0x000797cc) single_mobtv_pg_channel_table_pane

0x35bd,	// (0x000797d5) single_mobtv_pg_channel_thumb_pane

0x35c6,	// (0x000797de) single_tv_pg_channel_pane_g1

0x35cf,	// (0x000797e7) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x00085e48) single_tv_pg_channel_pane_g

0x217a,	// (0x00078392) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x217a,	// (0x00078392) bg_single_mobtv_pg_channel_thumb_pane

0x35d8,	// (0x000797f0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x35d8,	// (0x000797f0) single_mobtv_pg_channel_thumb_pane_g1

0x35e6,	// (0x000797fe) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x35e6,	// (0x000797fe) single_mobtv_pg_channel_thumb_pane_g2

0x35f2,	// (0x0007980a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x35f2,	// (0x0007980a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x00085e4d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x00085e4d) single_mobtv_pg_channel_thumb_pane_g

0x35fe,	// (0x00079816) single_mobtv_pg_channel_thumb_pane_t1

0x360c,	// (0x00079824) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x00085e54) single_mobtv_pg_channel_thumb_pane_t

0x1f1a,	// (0x00078132) bg_single_mobtv_pg_channel_table_pane_g1

0x1f1a,	// (0x00078132) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x000858ff) bg_single_mobtv_pg_channel_table_pane_g

0x361a,	// (0x00079832) single_mobtv_pg_channel_table_pane_t1

0x3628,	// (0x00079840) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x00085e59) single_mobtv_pg_channel_table_pane_t

0xce1a,	// (0x00083032) main_mobtv_info_pane_g1_ParamLimits

0xce1a,	// (0x00083032) main_mobtv_info_pane_g1

0xce36,	// (0x0008304e) main_mobtv_info_pane_t1_ParamLimits

0xce36,	// (0x0008304e) main_mobtv_info_pane_t1

0xceae,	// (0x000830c6) main_mobtv_info_pane_t2_ParamLimits

0xceae,	// (0x000830c6) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x00085e63) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x00085e63) main_mobtv_info_pane_t

0xcf3d,	// (0x00083155) wait_bar_pane_cp05

0xcf4f,	// (0x00083167) main_mobtv_loading_pane_g1_ParamLimits

0xcf4f,	// (0x00083167) main_mobtv_loading_pane_g1

0xcf5d,	// (0x00083175) main_mobtv_loading_pane_g2_ParamLimits

0xcf5d,	// (0x00083175) main_mobtv_loading_pane_g2

0xcf69,	// (0x00083181) main_mobtv_loading_pane_g3_ParamLimits

0xcf69,	// (0x00083181) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x00085e6a) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x00085e6a) main_mobtv_loading_pane_g

0x3636,	// (0x0007984e) main_mobtv_loading_pane_t1_ParamLimits

0x3636,	// (0x0007984e) main_mobtv_loading_pane_t1

0x364e,	// (0x00079866) main_mobtv_loading_pane_t2_ParamLimits

0x364e,	// (0x00079866) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x00085e71) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x00085e71) main_mobtv_loading_pane_t

0xcf77,	// (0x0008318f) wait_bar_pane_cp06_ParamLimits

0xcf77,	// (0x0008318f) wait_bar_pane_cp06

0x3672,	// (0x0007988a) main_mobtv_programe_curr_pane_t1

0x3680,	// (0x00079898) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x00085e76) main_mobtv_programe_curr_pane_t

0x368e,	// (0x000798a6) main_mobtv_programe_next_pane_t1

0x369c,	// (0x000798b4) main_mobtv_programe_next_pane_t2

0x36aa,	// (0x000798c2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x00085e7b) main_mobtv_programe_next_pane_t

0xe15b,	// (0x00084373) bg_popup_mobtv_noti_window_pane

0x36b8,	// (0x000798d0) popup_mobtv_noti_window_g1

0x36c0,	// (0x000798d8) popup_mobtv_noti_window_t1

0x36ce,	// (0x000798e6) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x00085e82) popup_mobtv_noti_window_t

0x1f1a,	// (0x00078132) bg_popup_mobtv_noti_window_pane_g1

0xe15b,	// (0x00084373) sc_clock_pane

0xe15b,	// (0x00084373) main_fs_bigclock_pane

0xc627,	// (0x0008283f) blid2_tripm_pane_t4_ParamLimits

0xc627,	// (0x0008283f) blid2_tripm_pane_t4

0xcf83,	// (0x0008319b) sc_clock_pane_g1_ParamLimits

0xcf83,	// (0x0008319b) sc_clock_pane_g1

0xcf91,	// (0x000831a9) sc_clock_pane_t1_ParamLimits

0xcf91,	// (0x000831a9) sc_clock_pane_t1

0xcfa4,	// (0x000831bc) sc_clock_pane_t2_ParamLimits

0xcfa4,	// (0x000831bc) sc_clock_pane_t2

0xcfb6,	// (0x000831ce) sc_clock_pane_t3_ParamLimits

0xcfb6,	// (0x000831ce) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x00085e87) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x00085e87) sc_clock_pane_t

0xd888,	// (0x00083aa0) main_fs_bigclock_indicator_pane_ParamLimits

0xd888,	// (0x00083aa0) main_fs_bigclock_indicator_pane

0xd051,	// (0x00083269) main_fs_bigclock_pane_g1_ParamLimits

0xd051,	// (0x00083269) main_fs_bigclock_pane_g1

0xd894,	// (0x00083aac) main_fs_bigclock_pane_t1_ParamLimits

0xd894,	// (0x00083aac) main_fs_bigclock_pane_t1

0xd8a6,	// (0x00083abe) main_fs_bigclock_pane_t2_ParamLimits

0xd8a6,	// (0x00083abe) main_fs_bigclock_pane_t2

0xd8b8,	// (0x00083ad0) main_fs_bigclock_pane_t3_ParamLimits

0xd8b8,	// (0x00083ad0) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0008608b) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0008608b) main_fs_bigclock_pane_t

0x3f68,	// (0x0007a180) main_fs_bigclock_indicator_pane_g1

0x33a2,	// (0x000795ba) ncim_query_content_pane_g2_ParamLimits

0x33a2,	// (0x000795ba) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x00085e14) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x00085e14) ncim_query_content_pane_g

0xcfca,	// (0x000831e2) sc_clock_pane_t4_ParamLimits

0xcfca,	// (0x000831e2) sc_clock_pane_t4

0xf0bc,	// (0x000852d4) main_radioblah_pane

0x28c6,	// (0x00078ade) cell_call4_button_pane_t1_copy1_ParamLimits

0x28c6,	// (0x00078ade) cell_call4_button_pane_t1_copy1

0xcc51,	// (0x00082e69) main_ncimui_pane_t1_ParamLimits

0xcc51,	// (0x00082e69) main_ncimui_pane_t1

0xcc6b,	// (0x00082e83) main_ncimui_pane_t2_ParamLimits

0xcc6b,	// (0x00082e83) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x00085e0d) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x00085e0d) main_ncimui_pane_t

0x3809,	// (0x00079a21) main_radioblah_anim_pane_ParamLimits

0x3809,	// (0x00079a21) main_radioblah_anim_pane

0x381a,	// (0x00079a32) main_radioblah_info_pane_ParamLimits

0x381a,	// (0x00079a32) main_radioblah_info_pane

0x382e,	// (0x00079a46) main_radioblah_pane_t1_ParamLimits

0x382e,	// (0x00079a46) main_radioblah_pane_t1

0x384a,	// (0x00079a62) main_radioblah_pane_t2_ParamLimits

0x384a,	// (0x00079a62) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x00085ea8) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x00085ea8) main_radioblah_pane_t

0xd0a3,	// (0x000832bb) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd0a3,	// (0x000832bb) main_radioblah_rocker_ctrl_pane

0x3892,	// (0x00079aaa) main_radioblah_info_pane_t1_ParamLimits

0x3892,	// (0x00079aaa) main_radioblah_info_pane_t1

0xd0e8,	// (0x00083300) main_radioblah_info_pane_t2_ParamLimits

0xd0e8,	// (0x00083300) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x00085eb1) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x00085eb1) main_radioblah_info_pane_t

0x1f1a,	// (0x00078132) main_radioblah_rocker_ctrl_pane_g1

0xd198,	// (0x000833b0) main_radioblah_rocker_ctrl_pane_g2

0xd1a0,	// (0x000833b8) main_radioblah_rocker_ctrl_pane_g3

0xd1a8,	// (0x000833c0) main_radioblah_rocker_ctrl_pane_g4

0xd1b0,	// (0x000833c8) main_radioblah_rocker_ctrl_pane_g5

0xd1b8,	// (0x000833d0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x00085eba) main_radioblah_rocker_ctrl_pane_g

0xcbf1,	// (0x00082e09) main_cset_text2_pane_t1_copy1_ParamLimits

0xb395,	// (0x000815ad) cam4_image_uncrop_qvga_pane

0xb4dc,	// (0x000816f4) vid4_image_uncrop_qcif_pane

0xc7b5,	// (0x000829cd) cam6_image_uncrop_qvga_pane_ParamLimits

0xc7b5,	// (0x000829cd) cam6_image_uncrop_qvga_pane

0x30a9,	// (0x000792c1) vid6_image_uncrop_qcif_pane_ParamLimits

0x30a9,	// (0x000792c1) vid6_image_uncrop_qcif_pane

0xe15b,	// (0x00084373) bg_popup_preview_window_pane_cp03

0x3354,	// (0x0007956c) list_cset_text2_pane

0x335c,	// (0x00079574) main_cset6_text2_pane_g1

0x3364,	// (0x0007957c) main_cset6_text2_pane_t1

0xd1c0,	// (0x000833d8) list_cset_text2_pane_t1_ParamLimits

0xd1c0,	// (0x000833d8) list_cset_text2_pane_t1

0xf0bc,	// (0x000852d4) main_radioblah_pane_ParamLimits

0xcf29,	// (0x00083141) main_mobtv_info_pane_t3_ParamLimits

0xcf29,	// (0x00083141) main_mobtv_info_pane_t3

0xd091,	// (0x000832a9) main_radioblah_pane_g1

0xd0bc,	// (0x000832d4) main_radioblah_info_pane_g1

0xd13d,	// (0x00083355) main_radioblah_info_pane_t3_ParamLimits

0xd13d,	// (0x00083355) main_radioblah_info_pane_t3

0x81a0,	// (0x0007e3b8) highlight_cell_cale_month_pane_ParamLimits

0x81a0,	// (0x0007e3b8) highlight_cell_cale_month_pane

0xe15b,	// (0x00084373) main_phob_fisheye_pane

0x2256,	// (0x0007846e) scroll_pane_cp0031_ParamLimits

0x2256,	// (0x0007846e) scroll_pane_cp0031

0x31b7,	// (0x000793cf) wait_bar_pane_cp08_ParamLimits

0xc98f,	// (0x00082ba7) cset_list_set_pane_copy1_ParamLimits

0x38cc,	// (0x00079ae4) highlight_cell_cale_month_pane_g1

0xd1e7,	// (0x000833ff) highlight_cell_cale_month_pane_t1

0x2e16,	// (0x0007902e) list_gen_pane_cp01

0x2a8f,	// (0x00078ca7) scroll_pane_01

0xd1f5,	// (0x0008340d) list_single_double_fisheye_pane

0x559a,	// (0x0007b7b2) list_double_fisheye_pane_g1_ParamLimits

0x559a,	// (0x0007b7b2) list_double_fisheye_pane_g1

0xd1fe,	// (0x00083416) list_double_fisheye_pane_g2_ParamLimits

0xd1fe,	// (0x00083416) list_double_fisheye_pane_g2

0xd212,	// (0x0008342a) list_double_fisheye_pane_g3_ParamLimits

0xd212,	// (0x0008342a) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x00085ec7) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x00085ec7) list_double_fisheye_pane_g

0x55b2,	// (0x0007b7ca) list_double_fisheye_pane_t1_ParamLimits

0x55b2,	// (0x0007b7ca) list_double_fisheye_pane_t1

0x55cd,	// (0x0007b7e5) list_double_fisheye_pane_t2_ParamLimits

0x55cd,	// (0x0007b7e5) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x00085ed2) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x00085ed2) list_double_fisheye_pane_t

0xe15b,	// (0x00084373) main_call5_pane

0xcff0,	// (0x00083208) sc_swipe_pane_ParamLimits

0xcff0,	// (0x00083208) sc_swipe_pane

0xd23b,	// (0x00083453) call5_image_pane_ParamLimits

0xd23b,	// (0x00083453) call5_image_pane

0xd24b,	// (0x00083463) call5_swipe_1_pane_ParamLimits

0xd24b,	// (0x00083463) call5_swipe_1_pane

0xd257,	// (0x0008346f) call5_swipe_2_pane_ParamLimits

0xd257,	// (0x0008346f) call5_swipe_2_pane

0xd271,	// (0x00083489) popup_call5_audio_first_window_ParamLimits

0xd271,	// (0x00083489) popup_call5_audio_first_window

0x217a,	// (0x00078392) call5_swipe_1_pane_g1_ParamLimits

0x217a,	// (0x00078392) call5_swipe_1_pane_g1

0x38d4,	// (0x00079aec) call5_swipe_1_pane_g2_ParamLimits

0x38d4,	// (0x00079aec) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x00085ed7) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x00085ed7) call5_swipe_1_pane_g

0x38e0,	// (0x00079af8) call5_swipe_1_pane_t1_ParamLimits

0x38e0,	// (0x00079af8) call5_swipe_1_pane_t1

0x217a,	// (0x00078392) call5_swipe_2_pane_g1_ParamLimits

0x217a,	// (0x00078392) call5_swipe_2_pane_g1

0x38f5,	// (0x00079b0d) call5_swipe_2_pane_g2_ParamLimits

0x38f5,	// (0x00079b0d) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x00085edc) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x00085edc) call5_swipe_2_pane_g

0x3901,	// (0x00079b19) call5_swipe_2_pane_t1_ParamLimits

0x3901,	// (0x00079b19) call5_swipe_2_pane_t1

0x3916,	// (0x00079b2e) sc_swipe_pane_g1_ParamLimits

0x3916,	// (0x00079b2e) sc_swipe_pane_g1

0x3923,	// (0x00079b3b) sc_swipe_pane_g2_ParamLimits

0x3923,	// (0x00079b3b) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x00085ee1) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x00085ee1) sc_swipe_pane_g

0x392f,	// (0x00079b47) sc_swipe_pane_t1_ParamLimits

0x392f,	// (0x00079b47) sc_swipe_pane_t1

0xe15b,	// (0x00084373) main_cmail_launcher_pane

0xd27f,	// (0x00083497) aid_size_cell_cmail_l_ParamLimits

0xd27f,	// (0x00083497) aid_size_cell_cmail_l

0xd28f,	// (0x000834a7) grid_cmail_l_pane_ParamLimits

0xd28f,	// (0x000834a7) grid_cmail_l_pane

0xd29f,	// (0x000834b7) cell_cmail_l_pane_ParamLimits

0xd29f,	// (0x000834b7) cell_cmail_l_pane

0xd2b3,	// (0x000834cb) cell_cmail_l_pane_g1_ParamLimits

0xd2b3,	// (0x000834cb) cell_cmail_l_pane_g1

0xd2c4,	// (0x000834dc) cell_cmail_l_pane_t1_ParamLimits

0xd2c4,	// (0x000834dc) cell_cmail_l_pane_t1

0x3944,	// (0x00079b5c) cell_cmail_l_pane_t2_ParamLimits

0x3944,	// (0x00079b5c) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x00085ee6) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x00085ee6) cell_cmail_l_pane_t

0xf0bc,	// (0x000852d4) grid_highlight_pane_cp018_ParamLimits

0xf0bc,	// (0x000852d4) grid_highlight_pane_cp018

0x60ad,	// (0x0007c2c5) main2_pane_ParamLimits

0x60ad,	// (0x0007c2c5) main2_pane

0xed7e,	// (0x00084f96) popup_sp_fs_action_menu_bg_pane_g1

0xed86,	// (0x00084f9e) popup_sp_fs_action_menu_bg_pane_g2

0xed8e,	// (0x00084fa6) popup_sp_fs_action_menu_bg_pane_g3

0xed96,	// (0x00084fae) popup_sp_fs_action_menu_bg_pane_g4

0xed9e,	// (0x00084fb6) popup_sp_fs_action_menu_bg_pane_g5

0xeda6,	// (0x00084fbe) popup_sp_fs_action_menu_bg_pane_g6

0xedae,	// (0x00084fc6) popup_sp_fs_action_menu_bg_pane_g7

0xedb6,	// (0x00084fce) popup_sp_fs_action_menu_bg_pane_g8

0xedbe,	// (0x00084fd6) popup_sp_fs_action_menu_bg_pane_g9

0xedc6,	// (0x00084fde) popup_sp_fs_action_menu_bg_pane_g10

0xedc6,	// (0x00084fde) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x000853ab) popup_sp_fs_action_menu_bg_pane_g

0x4e7d,	// (0x0007b095) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x2_t3_g3_g1

0x7014,	// (0x0007d22c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x7014,	// (0x0007d22c) list_medium_line_x2_t3_g3_g2

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0008545b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0008545b) list_medium_line_x2_t3_g3_g

0x4e95,	// (0x0007b0ad) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4e95,	// (0x0007b0ad) list_medium_line_x2_t3_g3_t1

0x4eaa,	// (0x0007b0c2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4eaa,	// (0x0007b0c2) list_medium_line_x2_t3_g3_t2

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x00085462) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x00085462) list_medium_line_x2_t3_g3_t

0x4e7d,	// (0x0007b095) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x2_t3_g2_g1

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x00085469) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x00085469) list_medium_line_x2_t3_g2_g

0x4ed1,	// (0x0007b0e9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4ed1,	// (0x0007b0e9) list_medium_line_x2_t3_g2_t1

0x4ee7,	// (0x0007b0ff) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4ee7,	// (0x0007b0ff) list_medium_line_x2_t3_g2_t2

0x4ef9,	// (0x0007b111) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4ef9,	// (0x0007b111) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0008546e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0008546e) list_medium_line_x2_t3_g2_t

0x4e7d,	// (0x0007b095) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x2_t4_g4_g1

0x7020,	// (0x0007d238) list_medium_line_x2_t4_g4_g2_ParamLimits

0x7020,	// (0x0007d238) list_medium_line_x2_t4_g4_g2

0x7014,	// (0x0007d22c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x7014,	// (0x0007d22c) list_medium_line_x2_t4_g4_g3

0x4f17,	// (0x0007b12f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4f17,	// (0x0007b12f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x00085475) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x00085475) list_medium_line_x2_t4_g4_g

0x4f23,	// (0x0007b13b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4f23,	// (0x0007b13b) list_medium_line_x2_t4_g4_t1

0x4f3d,	// (0x0007b155) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4f3d,	// (0x0007b155) list_medium_line_x2_t4_g4_t2

0x4f52,	// (0x0007b16a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4f52,	// (0x0007b16a) list_medium_line_x2_t4_g4_t3

0x4f67,	// (0x0007b17f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4f67,	// (0x0007b17f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0008547e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0008547e) list_medium_line_x2_t4_g4_t

0x4e7d,	// (0x0007b095) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x2_t2_g4_g1

0x7020,	// (0x0007d238) list_medium_line_x2_t2_g4_g2_ParamLimits

0x7020,	// (0x0007d238) list_medium_line_x2_t2_g4_g2

0x7014,	// (0x0007d22c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x7014,	// (0x0007d22c) list_medium_line_x2_t2_g4_g3

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x000854e5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x000854e5) list_medium_line_x2_t2_g4_g

0x4f79,	// (0x0007b191) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4f79,	// (0x0007b191) list_medium_line_x2_t2_g4_t1

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x000854ee) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x000854ee) list_medium_line_x2_t2_g4_t

0x4e7d,	// (0x0007b095) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x2_t2_g3_g1

0x7014,	// (0x0007d22c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x7014,	// (0x0007d22c) list_medium_line_x2_t2_g3_g2

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0008545b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0008545b) list_medium_line_x2_t2_g3_g

0x4f8e,	// (0x0007b1a6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4f8e,	// (0x0007b1a6) list_medium_line_x2_t2_g3_t1

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x000854f3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x000854f3) list_medium_line_x2_t2_g3_t

0x83f0,	// (0x0007e608) main_sp_fs_list_pane_ParamLimits

0x83f0,	// (0x0007e608) main_sp_fs_list_pane

0x83fc,	// (0x0007e614) sp_fs_scroll_pane_ParamLimits

0x83fc,	// (0x0007e614) sp_fs_scroll_pane

0x4fbd,	// (0x0007b1d5) list_medium_line_x2_t3_t1

0x4fcd,	// (0x0007b1e5) list_medium_line_x2_t3_t2

0x4fdb,	// (0x0007b1f3) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0008553e) list_medium_line_x2_t3_t

0x4fe9,	// (0x0007b201) list_medium_line_x3_t4_t1

0x4ff9,	// (0x0007b211) list_medium_line_x3_t4_t2

0x5007,	// (0x0007b21f) list_medium_line_x3_t4_t3

0x4fdb,	// (0x0007b1f3) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x00085545) list_medium_line_x3_t4_t

0x5015,	// (0x0007b22d) list_medium_line_x4_t5_t1

0x5025,	// (0x0007b23d) list_medium_line_x4_t5_t2

0x5007,	// (0x0007b21f) list_medium_line_x4_t5_t3

0x5033,	// (0x0007b24b) list_medium_line_x4_t5_t4

0x4fdb,	// (0x0007b1f3) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0008554e) list_medium_line_x4_t5_t

0x4e7d,	// (0x0007b095) list_medium_line_t4_g4_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_t4_g4_g1

0x5041,	// (0x0007b259) list_medium_line_t4_g4_g2_ParamLimits

0x5041,	// (0x0007b259) list_medium_line_t4_g4_g2

0x504d,	// (0x0007b265) list_medium_line_t4_g4_g3_ParamLimits

0x504d,	// (0x0007b265) list_medium_line_t4_g4_g3

0x4e89,	// (0x0007b0a1) list_medium_line_t4_g4_g4_ParamLimits

0x4e89,	// (0x0007b0a1) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x00085559) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x00085559) list_medium_line_t4_g4_g

0x5059,	// (0x0007b271) list_medium_line_t4_g4_t1_ParamLimits

0x5059,	// (0x0007b271) list_medium_line_t4_g4_t1

0x506e,	// (0x0007b286) list_medium_line_t4_g4_t2_ParamLimits

0x506e,	// (0x0007b286) list_medium_line_t4_g4_t2

0x5084,	// (0x0007b29c) list_medium_line_t4_g4_t3_ParamLimits

0x5084,	// (0x0007b29c) list_medium_line_t4_g4_t3

0x4ebc,	// (0x0007b0d4) list_medium_line_t4_g4_t4_ParamLimits

0x4ebc,	// (0x0007b0d4) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x00085562) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x00085562) list_medium_line_t4_g4_t

0x84f3,	// (0x0007e70b) chi_dic_find_pane_g1

0x946b,	// (0x0007f683) main_tport_pane

0x52df,	// (0x0007b4f7) list_medium_line_plain_t1

0x52ed,	// (0x0007b505) list_medium_line_t2_g2_g1_ParamLimits

0x52ed,	// (0x0007b505) list_medium_line_t2_g2_g1

0xbf2b,	// (0x00082143) list_medium_line_t2_g2_g2_ParamLimits

0xbf2b,	// (0x00082143) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x00085c1e) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x00085c1e) list_medium_line_t2_g2_g

0x52f9,	// (0x0007b511) list_medium_line_t2_g2_t1_ParamLimits

0x52f9,	// (0x0007b511) list_medium_line_t2_g2_t1

0x5313,	// (0x0007b52b) list_medium_line_t2_g2_t2_ParamLimits

0x5313,	// (0x0007b52b) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x00085c23) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x00085c23) list_medium_line_t2_g2_t

0x54bf,	// (0x0007b6d7) aid_sp_fs_list_icon_a_sm

0xc475,	// (0x0008268d) aid_sp_fs_list_icon_d

0xf0ca,	// (0x000852e2) aid_sp_fs_text_primary

0x54c7,	// (0x0007b6df) aid_sp_fs_text_secondary

0xc47d,	// (0x00082695) list_medium_line

0xc47d,	// (0x00082695) list_medium_line_g2

0xc47d,	// (0x00082695) list_medium_line_g3

0xc47d,	// (0x00082695) list_medium_line_plain

0xc47d,	// (0x00082695) list_medium_line_plain_t2

0xc47d,	// (0x00082695) list_medium_line_plain_t3

0xc47d,	// (0x00082695) list_medium_line_right_icon

0xc47d,	// (0x00082695) list_medium_line_right_iconx2

0xc47d,	// (0x00082695) list_medium_line_t2

0xc47d,	// (0x00082695) list_medium_line_t2_g2

0xc47d,	// (0x00082695) list_medium_line_t2_g3

0xc47d,	// (0x00082695) list_medium_line_t2_right_icon

0xc47d,	// (0x00082695) list_medium_line_t2_right_iconx2

0xc47d,	// (0x00082695) list_medium_line_t3

0xc47d,	// (0x00082695) list_medium_line_t3_g2

0xc47d,	// (0x00082695) list_medium_line_t3_g3

0xc47d,	// (0x00082695) list_medium_line_t3_right_iconx2

0xc486,	// (0x0008269e) list_medium_line_t4_g4

0xc48f,	// (0x000826a7) list_medium_line_x2

0xc48f,	// (0x000826a7) list_medium_line_x2_t2_g2

0xc48f,	// (0x000826a7) list_medium_line_x2_t2_g3

0xc48f,	// (0x000826a7) list_medium_line_x2_t2_g4

0xc48f,	// (0x000826a7) list_medium_line_x2_t3

0xc48f,	// (0x000826a7) list_medium_line_x2_t3_g2

0xc48f,	// (0x000826a7) list_medium_line_x2_t3_g3

0xc48f,	// (0x000826a7) list_medium_line_x2_t3_g4

0xc48f,	// (0x000826a7) list_medium_line_x2_t4_g2

0xc48f,	// (0x000826a7) list_medium_line_x2_t4_g4

0xc498,	// (0x000826b0) list_medium_line_x3

0xc498,	// (0x000826b0) list_medium_line_x3_t4

0xc498,	// (0x000826b0) list_medium_line_x3_t4_g4

0xc486,	// (0x0008269e) list_medium_line_x4_t4

0xc486,	// (0x0008269e) list_medium_line_x4_t4_g7

0xc486,	// (0x0008269e) list_medium_line_x4_t5

0x54d0,	// (0x0007b6e8) list_single_fs_dyc_pane_ParamLimits

0x54d0,	// (0x0007b6e8) list_single_fs_dyc_pane

0x4e7d,	// (0x0007b095) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x4_t4_g7_g1

0x54e4,	// (0x0007b6fc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x54e4,	// (0x0007b6fc) list_medium_line_x4_t4_g7_g2

0xcbd6,	// (0x00082dee) list_medium_line_x4_t4_g7_g3_ParamLimits

0xcbd6,	// (0x00082dee) list_medium_line_x4_t4_g7_g3

0xcbe5,	// (0x00082dfd) list_medium_line_x4_t4_g7_g4_ParamLimits

0xcbe5,	// (0x00082dfd) list_medium_line_x4_t4_g7_g4

0x54f0,	// (0x0007b708) list_medium_line_x4_t4_g7_g5_ParamLimits

0x54f0,	// (0x0007b708) list_medium_line_x4_t4_g7_g5

0x54ff,	// (0x0007b717) list_medium_line_x4_t4_g7_g6_ParamLimits

0x54ff,	// (0x0007b717) list_medium_line_x4_t4_g7_g6

0x550e,	// (0x0007b726) list_medium_line_x4_t4_g7_g7_ParamLimits

0x550e,	// (0x0007b726) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x00085dee) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x00085dee) list_medium_line_x4_t4_g7_g

0x551a,	// (0x0007b732) list_medium_line_x4_t4_g7_t1_ParamLimits

0x551a,	// (0x0007b732) list_medium_line_x4_t4_g7_t1

0x552f,	// (0x0007b747) list_medium_line_x4_t4_g7_t2_ParamLimits

0x552f,	// (0x0007b747) list_medium_line_x4_t4_g7_t2

0x5544,	// (0x0007b75c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5544,	// (0x0007b75c) list_medium_line_x4_t4_g7_t3

0x5559,	// (0x0007b771) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5559,	// (0x0007b771) list_medium_line_x4_t4_g7_t4

0x556b,	// (0x0007b783) list_medium_line_x4_t4_g7_t5_ParamLimits

0x556b,	// (0x0007b783) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x00085dfd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x00085dfd) list_medium_line_x4_t4_g7_t

0x557d,	// (0x0007b795) list_single_dyc_row_pane_ParamLimits

0x557d,	// (0x0007b795) list_single_dyc_row_pane

0xd22f,	// (0x00083447) call5_gesture_pane_ParamLimits

0xd22f,	// (0x00083447) call5_gesture_pane

0xd263,	// (0x0008347b) call5_windows_pane_ParamLimits

0xd263,	// (0x0008347b) call5_windows_pane

0xd2da,	// (0x000834f2) call5_swipe_1_pane_cp_ParamLimits

0xd2da,	// (0x000834f2) call5_swipe_1_pane_cp

0xd2e6,	// (0x000834fe) call5_swipe_2_pane_cp_ParamLimits

0xd2e6,	// (0x000834fe) call5_swipe_2_pane_cp

0x06df,	// (0x000768f7) call5_image_pane_cp

0xd2f2,	// (0x0008350a) popup_call5_audio_first_window_cp_ParamLimits

0xd2f2,	// (0x0008350a) popup_call5_audio_first_window_cp

0x3916,	// (0x00079b2e) call5_swipe_1_pane_g1_cp_ParamLimits

0x3916,	// (0x00079b2e) call5_swipe_1_pane_g1_cp

0x3956,	// (0x00079b6e) call5_swipe_1_pane_g2_cp

0x392f,	// (0x00079b47) call5_swipe_1_pane_t1_cp_ParamLimits

0x392f,	// (0x00079b47) call5_swipe_1_pane_t1_cp

0x3916,	// (0x00079b2e) call5_swipe_2_pane_g1_cp_ParamLimits

0x3916,	// (0x00079b2e) call5_swipe_2_pane_g1_cp

0x395e,	// (0x00079b76) call5_swipe_2_pane_g2_cp

0x3966,	// (0x00079b7e) call5_swipe_2_pane_t1_cp_ParamLimits

0x3966,	// (0x00079b7e) call5_swipe_2_pane_t1_cp

0xf0bc,	// (0x000852d4) main_sp_fs_email_pane

0x397b,	// (0x00079b93) main_sp_fs_listscroll_pane_te

0xe34b,	// (0x00084563) popup_sp_fs_action_menu_pane_ParamLimits

0xe34b,	// (0x00084563) popup_sp_fs_action_menu_pane

0x1f1a,	// (0x00078132) bg_sp_fs_ctrlbar_pane_g1

0x3984,	// (0x00079b9c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x398d,	// (0x00079ba5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3996,	// (0x00079bae) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1f1a,	// (0x00078132) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x00085eeb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1cfd,	// (0x00077f15) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1cfd,	// (0x00077f15) bg_sp_fs_ctrlbar_ddmenu_pane

0x399f,	// (0x00079bb7) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x399f,	// (0x00079bb7) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x39ab,	// (0x00079bc3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x39ab,	// (0x00079bc3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x00085ef4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x00085ef4) main_sp_fs_ctrlbar_ddmenu_pane_g

0x39b7,	// (0x00079bcf) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x39b7,	// (0x00079bcf) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd300,	// (0x00083518) list_medium_line_t2_right_icon_g1

0x55ef,	// (0x0007b807) list_medium_line_t2_right_icon_t1

0x55ff,	// (0x0007b817) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x00085ef9) list_medium_line_t2_right_icon_t

0x1b10,	// (0x00077d28) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1b10,	// (0x00077d28) bg_sp_fs_ctrlbar_pane

0xd35f,	// (0x00083577) main_sp_fs_ctrlbar_button_pane_cp01

0xd367,	// (0x0008357f) main_sp_fs_ctrlbar_ddmenu_pane

0x3a09,	// (0x00079c21) main_sp_fs_ctrlbar_pane_g1

0x3a15,	// (0x00079c2d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x00085efe) main_sp_fs_ctrlbar_pane_g

0x3a21,	// (0x00079c39) main_sp_fs_ctrlbar_pane_t1

0xd371,	// (0x00083589) main_sp_fs_ctrlbar_pane

0xd387,	// (0x0008359f) main_sp_fs_listscroll_pane_te_cp01

0x560d,	// (0x0007b825) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x560d,	// (0x0007b825) popup_sp_fs_action_menu_pane_cp01

0xf0bc,	// (0x000852d4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0bc,	// (0x000852d4) bg_sp_fs_highlight_list_pane_cp01

0x5637,	// (0x0007b84f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5637,	// (0x0007b84f) sp_fs_action_menu_list_gene_pane_g1

0x3a5f,	// (0x00079c77) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3a5f,	// (0x00079c77) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x00085f08) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x00085f08) sp_fs_action_menu_list_gene_pane_g

0x5646,	// (0x0007b85e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5646,	// (0x0007b85e) sp_fs_action_menu_list_gene_pane_t1

0x565e,	// (0x0007b876) sp_fs_action_menu_list_gene_pane_ParamLimits

0x565e,	// (0x0007b876) sp_fs_action_menu_list_gene_pane

0x3a6c,	// (0x00079c84) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3a6c,	// (0x00079c84) popup_sp_fs_action_menu_bg_pane

0x567d,	// (0x0007b895) sp_fs_action_menu_list_pane_ParamLimits

0x567d,	// (0x0007b895) sp_fs_action_menu_list_pane

0xd398,	// (0x000835b0) sp_fs_scroll_pane_cp01_ParamLimits

0xd398,	// (0x000835b0) sp_fs_scroll_pane_cp01

0x569d,	// (0x0007b8b5) list_medium_line_plain_t2_t1

0x56ad,	// (0x0007b8c5) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x00085f0d) list_medium_line_plain_t2_t

0x56bb,	// (0x0007b8d3) list_medium_line_plain_t3_t1

0x56cb,	// (0x0007b8e3) list_medium_line_plain_t3_t2

0x56d9,	// (0x0007b8f1) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x00085f12) list_medium_line_plain_t3_t

0x4e7d,	// (0x0007b095) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x2_t2_g2_g1

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x00085469) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x00085469) list_medium_line_x2_t2_g2_g

0x5059,	// (0x0007b271) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5059,	// (0x0007b271) list_medium_line_x2_t2_g2_t1

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x00085f19) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x00085f19) list_medium_line_x2_t2_g2_t

0x4e7d,	// (0x0007b095) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x2_t4_g2_g1

0x56e7,	// (0x0007b8ff) list_medium_line_x2_t4_g2_g2_ParamLimits

0x56e7,	// (0x0007b8ff) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x00085f1e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x00085f1e) list_medium_line_x2_t4_g2_g

0x56f9,	// (0x0007b911) list_medium_line_x2_t4_g2_t1_ParamLimits

0x56f9,	// (0x0007b911) list_medium_line_x2_t4_g2_t1

0x5710,	// (0x0007b928) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5710,	// (0x0007b928) list_medium_line_x2_t4_g2_t2

0x5725,	// (0x0007b93d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5725,	// (0x0007b93d) list_medium_line_x2_t4_g2_t3

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x00085f23) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x00085f23) list_medium_line_x2_t4_g2_t

0xd3be,	// (0x000835d6) list_medium_line_t3_right_iconx2_g1

0xd300,	// (0x00083518) list_medium_line_t3_right_iconx2_g2

0x5737,	// (0x0007b94f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x00085f2c) list_medium_line_t3_right_iconx2_g

0x573f,	// (0x0007b957) list_medium_line_t3_right_iconx2_t1

0x574f,	// (0x0007b967) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x00085f33) list_medium_line_t3_right_iconx2_t

0x4e7d,	// (0x0007b095) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x3_t4_g4_g1

0x7014,	// (0x0007d22c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x7014,	// (0x0007d22c) list_medium_line_x3_t4_g4_g2

0x5041,	// (0x0007b259) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5041,	// (0x0007b259) list_medium_line_x3_t4_g4_g3

0xd3c6,	// (0x000835de) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd3c6,	// (0x000835de) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x00085f38) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x00085f38) list_medium_line_x3_t4_g4_g

0x575d,	// (0x0007b975) list_medium_line_x3_t4_g4_t1_ParamLimits

0x575d,	// (0x0007b975) list_medium_line_x3_t4_g4_t1

0x5774,	// (0x0007b98c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5774,	// (0x0007b98c) list_medium_line_x3_t4_g4_t2

0x5789,	// (0x0007b9a1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5789,	// (0x0007b9a1) list_medium_line_x3_t4_g4_t3

0x579e,	// (0x0007b9b6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x579e,	// (0x0007b9b6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x00085f41) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x00085f41) list_medium_line_x3_t4_g4_t

0x57bb,	// (0x0007b9d3) list_single_dyc_row_text_pane_t1_ParamLimits

0x57bb,	// (0x0007b9d3) list_single_dyc_row_text_pane_t1

0x57f2,	// (0x0007ba0a) list_single_dyc_row_text_pane_t2_ParamLimits

0x57f2,	// (0x0007ba0a) list_single_dyc_row_text_pane_t2

0x584c,	// (0x0007ba64) list_single_dyc_row_text_pane_t3_ParamLimits

0x584c,	// (0x0007ba64) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x00085f4a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x00085f4a) list_single_dyc_row_text_pane_t

0x585e,	// (0x0007ba76) list_single_dyc_row_pane_g1_ParamLimits

0x585e,	// (0x0007ba76) list_single_dyc_row_pane_g1

0x586a,	// (0x0007ba82) list_single_dyc_row_pane_g2_ParamLimits

0x586a,	// (0x0007ba82) list_single_dyc_row_pane_g2

0x5876,	// (0x0007ba8e) list_single_dyc_row_pane_g3_ParamLimits

0x5876,	// (0x0007ba8e) list_single_dyc_row_pane_g3

0x5882,	// (0x0007ba9a) list_single_dyc_row_pane_g4_ParamLimits

0x5882,	// (0x0007ba9a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00085f51) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00085f51) list_single_dyc_row_pane_g

0x588e,	// (0x0007baa6) list_single_dyc_row_text_pane_ParamLimits

0x588e,	// (0x0007baa6) list_single_dyc_row_text_pane

0xe15b,	// (0x00084373) bg_sp_fs_scroll_pane

0x3a7a,	// (0x00079c92) thumb_sp_fs_scroll_pane

0x52ed,	// (0x0007b505) list_medium_line_g1_ParamLimits

0x52ed,	// (0x0007b505) list_medium_line_g1

0x58ad,	// (0x0007bac5) list_medium_line_t1_ParamLimits

0x58ad,	// (0x0007bac5) list_medium_line_t1

0x4e7d,	// (0x0007b095) list_medium_line_x2_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x2_g1

0x7014,	// (0x0007d22c) list_medium_line_x2_g2_ParamLimits

0x7014,	// (0x0007d22c) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00085f5a) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00085f5a) list_medium_line_x2_g

0x58c2,	// (0x0007bada) list_medium_line_x2_t1_ParamLimits

0x58c2,	// (0x0007bada) list_medium_line_x2_t1

0x4e7d,	// (0x0007b095) list_medium_line_x3_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x3_g1

0x7014,	// (0x0007d22c) list_medium_line_x3_g2_ParamLimits

0x7014,	// (0x0007d22c) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00085f5a) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00085f5a) list_medium_line_x3_g

0x58c2,	// (0x0007bada) list_medium_line_x3_t1_ParamLimits

0x58c2,	// (0x0007bada) list_medium_line_x3_t1

0x3a83,	// (0x00079c9b) thumb_sp_fs_scroll_pane_g1

0x3a8c,	// (0x00079ca4) thumb_sp_fs_scroll_pane_g2

0x3a95,	// (0x00079cad) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00085f5f) thumb_sp_fs_scroll_pane_g

0x3a83,	// (0x00079c9b) bg_sp_fs_scroll_pane_g1

0x3a8c,	// (0x00079ca4) bg_sp_fs_scroll_pane_g2

0x3a95,	// (0x00079cad) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00085f5f) bg_sp_fs_scroll_pane_g

0x4e7d,	// (0x0007b095) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4e7d,	// (0x0007b095) list_medium_line_x2_t3_g4_g1

0x7020,	// (0x0007d238) list_medium_line_x2_t3_g4_g2_ParamLimits

0x7020,	// (0x0007d238) list_medium_line_x2_t3_g4_g2

0x7014,	// (0x0007d22c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x7014,	// (0x0007d22c) list_medium_line_x2_t3_g4_g3

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4e89,	// (0x0007b0a1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x000854e5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x000854e5) list_medium_line_x2_t3_g4_g

0x58d8,	// (0x0007baf0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x58d8,	// (0x0007baf0) list_medium_line_x2_t3_g4_t1

0x58ee,	// (0x0007bb06) list_medium_line_x2_t3_g4_t2_ParamLimits

0x58ee,	// (0x0007bb06) list_medium_line_x2_t3_g4_t2

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4ebc,	// (0x0007b0d4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00085f66) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00085f66) list_medium_line_x2_t3_g4_t

0x52ed,	// (0x0007b505) list_medium_line_g2_g1_ParamLimits

0x52ed,	// (0x0007b505) list_medium_line_g2_g1

0xbf2b,	// (0x00082143) list_medium_line_g2_g2_ParamLimits

0xbf2b,	// (0x00082143) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x00085c1e) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x00085c1e) list_medium_line_g2_g

0x5907,	// (0x0007bb1f) list_medium_line_g2_t1_ParamLimits

0x5907,	// (0x0007bb1f) list_medium_line_g2_t1

0x52ed,	// (0x0007b505) list_medium_line_t3_g2_g1_ParamLimits

0x52ed,	// (0x0007b505) list_medium_line_t3_g2_g1

0xbf2b,	// (0x00082143) list_medium_line_t3_g2_g2_ParamLimits

0xbf2b,	// (0x00082143) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x00085c1e) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x00085c1e) list_medium_line_t3_g2_g

0x591c,	// (0x0007bb34) list_medium_line_t3_g2_t1_ParamLimits

0x591c,	// (0x0007bb34) list_medium_line_t3_g2_t1

0x5933,	// (0x0007bb4b) list_medium_line_t3_g2_t2_ParamLimits

0x5933,	// (0x0007bb4b) list_medium_line_t3_g2_t2

0x5948,	// (0x0007bb60) list_medium_line_t3_g2_t3_ParamLimits

0x5948,	// (0x0007bb60) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00085f6d) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00085f6d) list_medium_line_t3_g2_t

0xd300,	// (0x00083518) list_medium_line_right_icon_g1

0x595d,	// (0x0007bb75) list_medium_line_right_icon_t1

0x52ed,	// (0x0007b505) list_medium_line_t2_g1_ParamLimits

0x52ed,	// (0x0007b505) list_medium_line_t2_g1

0x596b,	// (0x0007bb83) list_medium_line_t2_t1_ParamLimits

0x596b,	// (0x0007bb83) list_medium_line_t2_t1

0x5985,	// (0x0007bb9d) list_medium_line_t2_t2_ParamLimits

0x5985,	// (0x0007bb9d) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00085f74) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00085f74) list_medium_line_t2_t

0x52ed,	// (0x0007b505) list_medium_line_t3_g1_ParamLimits

0x52ed,	// (0x0007b505) list_medium_line_t3_g1

0x599a,	// (0x0007bbb2) list_medium_line_t3_t1_ParamLimits

0x599a,	// (0x0007bbb2) list_medium_line_t3_t1

0x59b1,	// (0x0007bbc9) list_medium_line_t3_t2_ParamLimits

0x59b1,	// (0x0007bbc9) list_medium_line_t3_t2

0x59c6,	// (0x0007bbde) list_medium_line_t3_t3_ParamLimits

0x59c6,	// (0x0007bbde) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00085f79) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00085f79) list_medium_line_t3_t

0x52ed,	// (0x0007b505) list_medium_line_g3_g1_ParamLimits

0x52ed,	// (0x0007b505) list_medium_line_g3_g1

0xd3d2,	// (0x000835ea) list_medium_line_g3_g2_ParamLimits

0xd3d2,	// (0x000835ea) list_medium_line_g3_g2

0xbf2b,	// (0x00082143) list_medium_line_g3_g3_ParamLimits

0xbf2b,	// (0x00082143) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00085f80) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00085f80) list_medium_line_g3_g

0x59d8,	// (0x0007bbf0) list_medium_line_g3_t1_ParamLimits

0x59d8,	// (0x0007bbf0) list_medium_line_g3_t1

0x52ed,	// (0x0007b505) list_medium_line_t2_g3_g1_ParamLimits

0x52ed,	// (0x0007b505) list_medium_line_t2_g3_g1

0xd3d2,	// (0x000835ea) list_medium_line_t2_g3_g2_ParamLimits

0xd3d2,	// (0x000835ea) list_medium_line_t2_g3_g2

0xbf2b,	// (0x00082143) list_medium_line_t2_g3_g3_ParamLimits

0xbf2b,	// (0x00082143) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00085f80) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00085f80) list_medium_line_t2_g3_g

0x59ed,	// (0x0007bc05) list_medium_line_t2_g3_t1_ParamLimits

0x59ed,	// (0x0007bc05) list_medium_line_t2_g3_t1

0x5a04,	// (0x0007bc1c) list_medium_line_t2_g3_t2_ParamLimits

0x5a04,	// (0x0007bc1c) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00085f87) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00085f87) list_medium_line_t2_g3_t

0x52ed,	// (0x0007b505) list_medium_line_t3_g3_g1_ParamLimits

0x52ed,	// (0x0007b505) list_medium_line_t3_g3_g1

0xd3d2,	// (0x000835ea) list_medium_line_t3_g3_g2_ParamLimits

0xd3d2,	// (0x000835ea) list_medium_line_t3_g3_g2

0xbf2b,	// (0x00082143) list_medium_line_t3_g3_g3_ParamLimits

0xbf2b,	// (0x00082143) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00085f80) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00085f80) list_medium_line_t3_g3_g

0x5a19,	// (0x0007bc31) list_medium_line_t3_g3_t1_ParamLimits

0x5a19,	// (0x0007bc31) list_medium_line_t3_g3_t1

0x5a2d,	// (0x0007bc45) list_medium_line_t3_g3_t2_ParamLimits

0x5a2d,	// (0x0007bc45) list_medium_line_t3_g3_t2

0x5a3f,	// (0x0007bc57) list_medium_line_t3_g3_t3_ParamLimits

0x5a3f,	// (0x0007bc57) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00085f8c) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00085f8c) list_medium_line_t3_g3_t

0xd3be,	// (0x000835d6) list_medium_line_right_iconx2_g1

0xd300,	// (0x00083518) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00085f93) list_medium_line_right_iconx2_g

0xd3de,	// (0x000835f6) list_medium_line_right_iconx2_t1

0xd3be,	// (0x000835d6) list_medium_line_t2_right_iconx2_g1

0xd300,	// (0x00083518) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00085f93) list_medium_line_t2_right_iconx2_g

0x5a51,	// (0x0007bc69) list_medium_line_t2_right_iconx2_t1

0x5a61,	// (0x0007bc79) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00085f98) list_medium_line_t2_right_iconx2_t

0x5a6f,	// (0x0007bc87) list_medium_line_x4_t4_t1

0x5a7d,	// (0x0007bc95) list_medium_line_x4_t4_t2

0x5a8d,	// (0x0007bca5) list_medium_line_x4_t4_t3

0x5a9d,	// (0x0007bcb5) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00085f9d) list_medium_line_x4_t4_t

0xd416,	// (0x0008362e) tport_appsw_pane_ParamLimits

0xd416,	// (0x0008362e) tport_appsw_pane

0xd424,	// (0x0008363c) tport_contact_pane_ParamLimits

0xd424,	// (0x0008363c) tport_contact_pane

0xd434,	// (0x0008364c) tport_listscroll_pane_ParamLimits

0xd434,	// (0x0008364c) tport_listscroll_pane

0xd444,	// (0x0008365c) cell_tport_appsw_pane_ParamLimits

0xd444,	// (0x0008365c) cell_tport_appsw_pane

0x21df,	// (0x000783f7) tport_appsw_pane_g1_ParamLimits

0x21df,	// (0x000783f7) tport_appsw_pane_g1

0x3a9e,	// (0x00079cb6) tport_contact_pane_g1

0x3428,	// (0x00079640) tport_contact_pane_t1

0x3aa7,	// (0x00079cbf) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00085fa6) tport_contact_pane_t

0x3ab5,	// (0x00079ccd) list_tport_pane

0x3abe,	// (0x00079cd6) scroll_pane_cp_030

0xd477,	// (0x0008368f) cell_tport_appsw_pane_g1

0xd487,	// (0x0008369f) cell_tport_appsw_pane_t1

0xe15b,	// (0x00084373) grid_highlight_pane_cp019

0xd495,	// (0x000836ad) list_tport_double_graphic_pane_ParamLimits

0xd495,	// (0x000836ad) list_tport_double_graphic_pane

0xf0bc,	// (0x000852d4) list_highlight_pane_cp023_ParamLimits

0xf0bc,	// (0x000852d4) list_highlight_pane_cp023

0xd4a7,	// (0x000836bf) list_tport_double_graphic_pane_g1_ParamLimits

0xd4a7,	// (0x000836bf) list_tport_double_graphic_pane_g1

0xd4b4,	// (0x000836cc) list_tport_double_graphic_pane_t1_ParamLimits

0xd4b4,	// (0x000836cc) list_tport_double_graphic_pane_t1

0xd4c9,	// (0x000836e1) list_tport_double_graphic_pane_t2_ParamLimits

0xd4c9,	// (0x000836e1) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00085fb2) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00085fb2) list_tport_double_graphic_pane_t

0xe15b,	// (0x00084373) main_cale_note_pane

0xb72f,	// (0x00081947) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb72f,	// (0x00081947) cell_vitu2_function_top_wide_pane_cp01

0xcf3d,	// (0x00083155) wait_bar_pane_cp05_ParamLimits

0xf0bc,	// (0x000852d4) listscroll_cmail_pane

0x3ac7,	// (0x00079cdf) list_cmail_pane

0xd4db,	// (0x000836f3) list_cmail_body_pane

0xd4ff,	// (0x00083717) list_single_cmail_header_caption_pane

0xd52f,	// (0x00083747) list_single_cmail_header_detail_pane_ParamLimits

0xd52f,	// (0x00083747) list_single_cmail_header_detail_pane

0x3ad7,	// (0x00079cef) list_single_cmail_header_caption_pane_t1

0x5aad,	// (0x0007bcc5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5aad,	// (0x0007bcc5) list_single_cmail_header_detail_pane_g1

0xd570,	// (0x00083788) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd570,	// (0x00083788) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00085fb7) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00085fb7) list_single_cmail_header_detail_pane_g

0x5ac3,	// (0x0007bcdb) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5ac3,	// (0x0007bcdb) list_single_cmail_header_detail_pane_t1

0x5b23,	// (0x0007bd3b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5b23,	// (0x0007bd3b) list_single_cmail_header_editor_pane_bg

0x3af2,	// (0x00079d0a) list_cmail_body_pane_g1

0x3afb,	// (0x00079d13) list_cmail_body_pane_t1

0x2975,	// (0x00078b8d) list_single_cmail_header_editor_pane_bg_g1

0x0042,	// (0x0007625a) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2985,	// (0x00078b9d) list_single_cmail_header_editor_pane_bg_g1_copy2

0x297d,	// (0x00078b95) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2b99,	// (0x00078db1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x29a5,	// (0x00078bbd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2995,	// (0x00078bad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x299d,	// (0x00078bb5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0022,	// (0x0007623a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd57c,	// (0x00083794) calenote_gesture_pane_ParamLimits

0xd57c,	// (0x00083794) calenote_gesture_pane

0xd596,	// (0x000837ae) calenote_window_pane_ParamLimits

0xd596,	// (0x000837ae) calenote_window_pane

0x3b09,	// (0x00079d21) popup_note_window_cp01

0xd5ae,	// (0x000837c6) calenote_swipe_1_pane_ParamLimits

0xd5ae,	// (0x000837c6) calenote_swipe_1_pane

0xd2e6,	// (0x000834fe) calenote_swipe_2_pane_ParamLimits

0xd2e6,	// (0x000834fe) calenote_swipe_2_pane

0x3916,	// (0x00079b2e) calenote_swipe_1_pane_g1_ParamLimits

0x3916,	// (0x00079b2e) calenote_swipe_1_pane_g1

0x3923,	// (0x00079b3b) calenote_swipe_1_pane_g2_ParamLimits

0x3923,	// (0x00079b3b) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x00085ee1) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x00085ee1) calenote_swipe_1_pane_g

0x3b1b,	// (0x00079d33) calenote_swipe_1_pane_t1_ParamLimits

0x3b1b,	// (0x00079d33) calenote_swipe_1_pane_t1

0x3916,	// (0x00079b2e) calenote_swipe_2_pane_g1_ParamLimits

0x3916,	// (0x00079b2e) calenote_swipe_2_pane_g1

0x3b3a,	// (0x00079d52) calenote_swipe_2_pane_g2_ParamLimits

0x3b3a,	// (0x00079d52) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00085fc3) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00085fc3) calenote_swipe_2_pane_g

0x3b46,	// (0x00079d5e) calenote_swipe_2_pane_t1_ParamLimits

0x3b46,	// (0x00079d5e) calenote_swipe_2_pane_t1

0xe15b,	// (0x00084373) main_mup_navstr_pane

0xa493,	// (0x000806ab) main_mup3_pane_t7_ParamLimits

0xa493,	// (0x000806ab) main_mup3_pane_t7

0xaebd,	// (0x000810d5) main_mp4_pane_g6_ParamLimits

0xaebd,	// (0x000810d5) main_mp4_pane_g6

0xb22f,	// (0x00081447) main_image3_pane_t4_ParamLimits

0xb22f,	// (0x00081447) main_image3_pane_t4

0xd5c1,	// (0x000837d9) popup_navstr_preview_pane_ParamLimits

0xd5c1,	// (0x000837d9) popup_navstr_preview_pane

0xd5cd,	// (0x000837e5) scroll_navstr_pane_ParamLimits

0xd5cd,	// (0x000837e5) scroll_navstr_pane

0xe15b,	// (0x00084373) bg_popup_preview_window_pane_cp04

0x3b6d,	// (0x00079d85) popup_navstr_preview_pane_t1

0xd5d9,	// (0x000837f1) scroll_navstr_pane_g1_ParamLimits

0xd5d9,	// (0x000837f1) scroll_navstr_pane_g1

0xd5e6,	// (0x000837fe) scroll_navstr_pane_t1_ParamLimits

0xd5e6,	// (0x000837fe) scroll_navstr_pane_t1

0x3b12,	// (0x00079d2a) bg_button_pane_cp014

0x3b12,	// (0x00079d2a) bg_button_pane_cp030

0x55a6,	// (0x0007b7be) list_double_fisheye_pane_g4_ParamLimits

0x55a6,	// (0x0007b7be) list_double_fisheye_pane_g4

0xd21e,	// (0x00083436) list_double_fisheye_pane_g5_ParamLimits

0xd21e,	// (0x00083436) list_double_fisheye_pane_g5

0x1378,	// (0x00077590) sp_fs_scroll_pane_cp03

0x3a09,	// (0x00079c21) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3a15,	// (0x00079c2d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x00085efe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3a21,	// (0x00079c39) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3acf,	// (0x00079ce7) sp_fs_scroll_pane_cp02

0xede9,	// (0x00085001) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xede9,	// (0x00085001) popup_sp_fs_calendar_preview_list_single_pane

0xe15b,	// (0x00084373) main_cam6_pano_pane

0xf0bc,	// (0x000852d4) main_mup3_pane_ParamLimits

0xe15b,	// (0x00084373) main_phacti_pane

0xce12,	// (0x0008302a) bg_button_pane_cp11

0xce2a,	// (0x00083042) main_mobtv_info_pane_g2_ParamLimits

0xce2a,	// (0x00083042) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x00085e5e) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x00085e5e) main_mobtv_info_pane_g

0xcfdc,	// (0x000831f4) sc_clock_pane_t5_ParamLimits

0xcfdc,	// (0x000831f4) sc_clock_pane_t5

0xd091,	// (0x000832a9) main_radioblah_pane_g1_ParamLimits

0x3862,	// (0x00079a7a) main_radioblah_pane_t3_ParamLimits

0x3862,	// (0x00079a7a) main_radioblah_pane_t3

0x387a,	// (0x00079a92) main_radioblah_pane_t4_ParamLimits

0x387a,	// (0x00079a92) main_radioblah_pane_t4

0xd0af,	// (0x000832c7) main_radioblah_text_pane_ParamLimits

0xd0af,	// (0x000832c7) main_radioblah_text_pane

0xd0bc,	// (0x000832d4) main_radioblah_info_pane_g1_ParamLimits

0xd151,	// (0x00083369) main_radioblah_info_pane_t4_ParamLimits

0xd151,	// (0x00083369) main_radioblah_info_pane_t4

0xf0bc,	// (0x000852d4) main_sp_fs_calendar_pane

0xd5f8,	// (0x00083810) main_phacti_pane_g1

0xd600,	// (0x00083818) phacti_note_pane_ParamLimits

0xd600,	// (0x00083818) phacti_note_pane

0x3b84,	// (0x00079d9c) phacti_term_pane_ParamLimits

0x3b84,	// (0x00079d9c) phacti_term_pane

0x3b99,	// (0x00079db1) phacti_note_pane_t1_ParamLimits

0x3b99,	// (0x00079db1) phacti_note_pane_t1

0x5b3a,	// (0x0007bd52) phacti_term_pane_g1

0x5b42,	// (0x0007bd5a) phacti_term_pane_t1_ParamLimits

0x5b42,	// (0x0007bd5a) phacti_term_pane_t1

0x3bb0,	// (0x00079dc8) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3bb8,	// (0x00079dd0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00085fcd) popup_sp_fs_calendar_preview_list_single_pane_g

0x3bc0,	// (0x00079dd8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3bc0,	// (0x00079dd8) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3bd6,	// (0x00079dee) aid_popup_sp_fs_bg_corner_pane

0x1f1a,	// (0x00078132) popup_sp_fs_calendar_preview_bg_pane_g1

0xe15b,	// (0x00084373) popup_sp_fs_calendar_preview_bg_pane

0xd616,	// (0x0008382e) popup_sp_fs_calendar_preview_list_pane

0x1b10,	// (0x00077d28) bg_main_sp_fs_cale_pane_ParamLimits

0x1b10,	// (0x00077d28) bg_main_sp_fs_cale_pane

0x5b6c,	// (0x0007bd84) listscroll_cale_mrui_pane_ParamLimits

0x5b6c,	// (0x0007bd84) listscroll_cale_mrui_pane

0x5b81,	// (0x0007bd99) listscroll_sp_fs_schedule_track_pane

0x5b8a,	// (0x0007bda2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5b8a,	// (0x0007bda2) main_sp_fs_ctrlbar_pane_cp01

0x3bde,	// (0x00079df6) main_sp_fs_ribbon_pane

0x5b9d,	// (0x0007bdb5) popup_sp_fs_cale_preview_window

0xd674,	// (0x0008388c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd674,	// (0x0008388c) list_single_sp_fs_schedule_track_pane

0x3a36,	// (0x00079c4e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3a36,	// (0x00079c4e) bg_sp_fs_highlight_list_pane_cp03

0xd69b,	// (0x000838b3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd69b,	// (0x000838b3) list_single_sp_fs_schedule_track_pane_g1

0xd6a7,	// (0x000838bf) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd6a7,	// (0x000838bf) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00085fd2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00085fd2) list_single_sp_fs_schedule_track_pane_g

0xd6b3,	// (0x000838cb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd6b3,	// (0x000838cb) list_single_sp_fs_schedule_track_pane_t1

0xd6cb,	// (0x000838e3) sp_fs_schedule_track_pane_ParamLimits

0xd6cb,	// (0x000838e3) sp_fs_schedule_track_pane

0x3be6,	// (0x00079dfe) sp_fs_schedule_track_pane_g1

0x3bee,	// (0x00079e06) sp_fs_schedule_track_pane_g2

0x3bf6,	// (0x00079e0e) sp_fs_schedule_track_pane_g3

0x3bfe,	// (0x00079e16) sp_fs_schedule_track_pane_g4

0x3c06,	// (0x00079e1e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00085fd7) sp_fs_schedule_track_pane_g

0x2975,	// (0x00078b8d) bg_sp_fs_schedule_viewer_highlight_g1

0x0042,	// (0x0007625a) bg_sp_fs_schedule_viewer_highlight_g2

0x297d,	// (0x00078b95) bg_sp_fs_schedule_viewer_highlight_g3

0x2985,	// (0x00078b9d) bg_sp_fs_schedule_viewer_highlight_g4

0x2b99,	// (0x00078db1) bg_sp_fs_schedule_viewer_highlight_g5

0x2995,	// (0x00078bad) bg_sp_fs_schedule_viewer_highlight_g6

0x299d,	// (0x00078bb5) bg_sp_fs_schedule_viewer_highlight_g7

0x29a5,	// (0x00078bbd) bg_sp_fs_schedule_viewer_highlight_g8

0x0022,	// (0x0007623a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00085fe2) bg_sp_fs_schedule_viewer_highlight_g

0xe15b,	// (0x00084373) bg_main_sp_fs_ribbon_pane

0xd6db,	// (0x000838f3) main_sp_fs_ribbon_pane_g1

0x3c0e,	// (0x00079e26) main_sp_fs_ribbon_pane_t1

0xd6e4,	// (0x000838fc) main_sp_fs_ribbon_pane_t2

0x3c1d,	// (0x00079e35) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00085ff5) main_sp_fs_ribbon_pane_t

0x3c2c,	// (0x00079e44) main_sp_fs_ribbon_scheduler_pane

0x3c34,	// (0x00079e4c) bg_main_sp_fs_ribbon_pane_g1

0x3c3d,	// (0x00079e55) bg_main_sp_fs_ribbon_pane_g2

0x3c46,	// (0x00079e5e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00085ffc) bg_main_sp_fs_ribbon_pane_g

0x3c4e,	// (0x00079e66) main_sp_fs_ribbon_scheduler_pane_g1

0x3c57,	// (0x00079e6f) main_sp_fs_ribbon_scheduler_pane_g2

0x3c60,	// (0x00079e78) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00086003) main_sp_fs_ribbon_scheduler_pane_g

0x3c69,	// (0x00079e81) list_cale_mrui_pane

0xd6f5,	// (0x0008390d) sp_fs_scroll_pane_cp07_ParamLimits

0xd6f5,	// (0x0008390d) sp_fs_scroll_pane_cp07

0xd711,	// (0x00083929) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd711,	// (0x00083929) bg_sp_fs_schedule_viewer_highlight

0x3c76,	// (0x00079e8e) list_single_sp_fs_schedule_track_pane_cp01

0x3c7e,	// (0x00079e96) list_sp_fs_schedule_track_pane

0x3c86,	// (0x00079e9e) sp_fs_scroll_pane_cp06_ParamLimits

0x3c86,	// (0x00079e9e) sp_fs_scroll_pane_cp06

0x1f1a,	// (0x00078132) bgmain_sp_fs_calendar_pane_g1

0x5baf,	// (0x0007bdc7) list_single_cale_mrui_pane_ParamLimits

0x5baf,	// (0x0007bdc7) list_single_cale_mrui_pane

0x5be0,	// (0x0007bdf8) list_single_cale_mrui_row_pane_ParamLimits

0x5be0,	// (0x0007bdf8) list_single_cale_mrui_row_pane

0x5bed,	// (0x0007be05) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5bed,	// (0x0007be05) list_single_cale_mrui_row_pane_g1

0x5c25,	// (0x0007be3d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5c25,	// (0x0007be3d) list_single_cale_mrui_row_pane_t1

0x5c37,	// (0x0007be4f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5c37,	// (0x0007be4f) list_single_cale_mrui_row_pane_t2

0x5c9d,	// (0x0007beb5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5c9d,	// (0x0007beb5) list_single_cale_mrui_row_pane_t3

0x5ccc,	// (0x0007bee4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5ccc,	// (0x0007bee4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00086011) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00086011) list_single_cale_mrui_row_pane_t

0x5cfb,	// (0x0007bf13) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5cfb,	// (0x0007bf13) list_single_cmail_header_editor_pane_bg_cp01

0x5d1b,	// (0x0007bf33) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5d1b,	// (0x0007bf33) list_single_cmail_header_editor_pane_bg_cp02

0xd71e,	// (0x00083936) main_radioblah_text_pane_t1_ParamLimits

0xd71e,	// (0x00083936) main_radioblah_text_pane_t1

0x3ca5,	// (0x00079ebd) cam6_indi_pane_cp01

0x3cad,	// (0x00079ec5) cam6_mode_pane_cp01

0x3cb5,	// (0x00079ecd) cam6_pano_pane

0x3cbe,	// (0x00079ed6) cam6_zoom_pane_cp01

0x3cc6,	// (0x00079ede) cam6_pano_image_pane

0x3cd1,	// (0x00079ee9) cam6_pano_pane_g1

0x35cf,	// (0x000797e7) cam6_pano_pane_g2

0x3cda,	// (0x00079ef2) cam6_pano_pane_g3

0x3ce3,	// (0x00079efb) cam6_pano_pane_g4

0x24bc,	// (0x000786d4) cam6_pano_pane_g5

0x3cec,	// (0x00079f04) cam6_pano_pane_g6

0x3cf6,	// (0x00079f0e) cam6_pano_pane_g7

0x3cfe,	// (0x00079f16) cam6_pano_pane_g8

0x3d07,	// (0x00079f1f) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0008601a) cam6_pano_pane_g

0xe15b,	// (0x00084373) main_browser_tag_pane

0x3b65,	// (0x00079d7d) grid_navstr_albumart_pane

0x3d12,	// (0x00079f2a) cell_navstr_albumart_pane_ParamLimits

0x3d12,	// (0x00079f2a) cell_navstr_albumart_pane

0x084e,	// (0x00076a66) cell_navstr_albumart_pane_g1

0x1921,	// (0x00077b39) cell_navstr_albumart_pane_g2

0x1931,	// (0x00077b49) cell_navstr_albumart_pane_g3

0x1929,	// (0x00077b41) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0008602d) cell_navstr_albumart_pane_g

0xd739,	// (0x00083951) bt_list_pane_ParamLimits

0xd739,	// (0x00083951) bt_list_pane

0x3d34,	// (0x00079f4c) bt_list_pane_t1

0x3d43,	// (0x00079f5b) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00086036) bt_list_pane_t

0xe15b,	// (0x00084373) main_cale_prevew_pane

0xd75d,	// (0x00083975) popup_cale_preview_window_ParamLimits

0xd75d,	// (0x00083975) popup_cale_preview_window

0xf0bc,	// (0x000852d4) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0bc,	// (0x000852d4) bg_popup_preview_window_pane_cp05

0x3d52,	// (0x00079f6a) list_cale_preview_pane_ParamLimits

0x3d52,	// (0x00079f6a) list_cale_preview_pane

0x3d5e,	// (0x00079f76) list_double_cale_preview_pane_ParamLimits

0x3d5e,	// (0x00079f76) list_double_cale_preview_pane

0x3d70,	// (0x00079f88) list_single_cale_preview_pane_ParamLimits

0x3d70,	// (0x00079f88) list_single_cale_preview_pane

0x3d84,	// (0x00079f9c) list_single_cale_preview_pane_g1

0x3d8c,	// (0x00079fa4) list_single_cale_preview_pane_t1_ParamLimits

0x3d8c,	// (0x00079fa4) list_single_cale_preview_pane_t1

0x3da1,	// (0x00079fb9) list_double_cale_preview_pane_g1

0x3da9,	// (0x00079fc1) list_double_cale_preview_pane_t1_ParamLimits

0x3da9,	// (0x00079fc1) list_double_cale_preview_pane_t1

0x3dbe,	// (0x00079fd6) list_double_cale_preview_pane_t2_ParamLimits

0x3dbe,	// (0x00079fd6) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0008603b) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0008603b) list_double_cale_preview_pane_t

0xe15b,	// (0x00084373) main_ezdial_pane

0xf0bc,	// (0x000852d4) main_sp_fs_email_pane_ParamLimits

0xd308,	// (0x00083520) cmail_ddmenu_btn01_pane_ParamLimits

0xd308,	// (0x00083520) cmail_ddmenu_btn01_pane

0xd325,	// (0x0008353d) cmail_ddmenu_btn02_pane_ParamLimits

0xd325,	// (0x0008353d) cmail_ddmenu_btn02_pane

0xd343,	// (0x0008355b) cmail_ddmenu_btn03_pane_ParamLimits

0xd343,	// (0x0008355b) cmail_ddmenu_btn03_pane

0xd371,	// (0x00083589) main_sp_fs_ctrlbar_pane_ParamLimits

0xd387,	// (0x0008359f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd4db,	// (0x000836f3) list_cmail_body_pane_ParamLimits

0xd567,	// (0x0008377f) bg_button_pane_cp12

0x3ae5,	// (0x00079cfd) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3ae5,	// (0x00079cfd) list_single_cmail_header_detail_pane_g3

0x5aff,	// (0x0007bd17) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5aff,	// (0x0007bd17) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00085fbe) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00085fbe) list_single_cmail_header_detail_pane_t

0x5b57,	// (0x0007bd6f) phacti_term_pane_t2_ParamLimits

0x5b57,	// (0x0007bd6f) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00085fc8) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00085fc8) phacti_term_pane_t

0x3dd6,	// (0x00079fee) aid_size_list_single_double

0xd774,	// (0x0008398c) popup_ezdial_listscroll_window

0xd797,	// (0x000839af) popup_number_entry_window_cp01

0x06df,	// (0x000768f7) bg_popup_call_pane_cp09

0x3de2,	// (0x00079ffa) ezdial_list_pane

0x3dea,	// (0x0007a002) scroll_pane_cp23

0x1cfd,	// (0x00077f15) bg_button_pane_cp028_ParamLimits

0x1cfd,	// (0x00077f15) bg_button_pane_cp028

0xd7a5,	// (0x000839bd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd7a5,	// (0x000839bd) cmail_ddmenu_btn01_pane_g1

0xd7b7,	// (0x000839cf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd7b7,	// (0x000839cf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00086040) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00086040) cmail_ddmenu_btn01_pane_g

0x3df2,	// (0x0007a00a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3df2,	// (0x0007a00a) cmail_ddmenu_btn01_pane_t1

0x1b10,	// (0x00077d28) bg_button_pane_cp029_ParamLimits

0x1b10,	// (0x00077d28) bg_button_pane_cp029

0xd7b7,	// (0x000839cf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd7b7,	// (0x000839cf) cmail_ddmenu_btn02_pane_g1

0xd7cf,	// (0x000839e7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd7cf,	// (0x000839e7) cmail_ddmenu_btn02_pane_t1

0x3a36,	// (0x00079c4e) bg_button_pane_cp031_ParamLimits

0x3a36,	// (0x00079c4e) bg_button_pane_cp031

0xd7b7,	// (0x000839cf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd7b7,	// (0x000839cf) cmail_ddmenu_btn03_pane_g1

0xd7cf,	// (0x000839e7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd7cf,	// (0x000839e7) cmail_ddmenu_btn03_pane_t1

0xb0da,	// (0x000812f2) cell_dialer2_keypad_pane_t1_ParamLimits

0xb0f4,	// (0x0008130c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb0f4,	// (0x0008130c) cell_dialer2_keypad_pane_t1_copy1

0xcc97,	// (0x00082eaf) ncimui_group_button_pane

0xf0bc,	// (0x000852d4) main_sp_fs_calendar_pane_ParamLimits

0xd4ff,	// (0x00083717) list_single_cmail_header_caption_pane_ParamLimits

0xd63c,	// (0x00083854) aid_recal_txt_sm_pane

0xe15b,	// (0x00084373) mian_recal_day_pane

0x5b9d,	// (0x0007bdb5) popup_sp_fs_cale_preview_window_ParamLimits

0x3e08,	// (0x0007a020) list_recal_day_pane

0x5d52,	// (0x0007bf6a) list_single_recal_day_pane_ParamLimits

0x5d52,	// (0x0007bf6a) list_single_recal_day_pane

0x3e2f,	// (0x0007a047) list_single_recal_day_pane_g1_ParamLimits

0x3e2f,	// (0x0007a047) list_single_recal_day_pane_g1

0x5d64,	// (0x0007bf7c) list_single_recal_day_pane_g2_ParamLimits

0x5d64,	// (0x0007bf7c) list_single_recal_day_pane_g2

0x5d74,	// (0x0007bf8c) list_single_recal_day_pane_g3_ParamLimits

0x5d74,	// (0x0007bf8c) list_single_recal_day_pane_g3

0x5d80,	// (0x0007bf98) list_single_recal_day_pane_g4_ParamLimits

0x5d80,	// (0x0007bf98) list_single_recal_day_pane_g4

0x5d96,	// (0x0007bfae) list_single_recal_day_pane_g5_ParamLimits

0x5d96,	// (0x0007bfae) list_single_recal_day_pane_g5

0x5db0,	// (0x0007bfc8) list_single_recal_day_pane_g6_ParamLimits

0x5db0,	// (0x0007bfc8) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0008604f) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0008604f) list_single_recal_day_pane_g

0x5dc4,	// (0x0007bfdc) list_single_recal_day_pane_t1

0x5dd6,	// (0x0007bfee) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0008605a) list_single_recal_day_pane_t

0xd7f3,	// (0x00083a0b) ncimui_query_button_pane_ParamLimits

0xd7f3,	// (0x00083a0b) ncimui_query_button_pane

0xd803,	// (0x00083a1b) ncimui_query_button_pane_t1_ParamLimits

0xd803,	// (0x00083a1b) ncimui_query_button_pane_t1

0x3e3b,	// (0x0007a053) ncimui_query_button_pane_t2_ParamLimits

0x3e3b,	// (0x0007a053) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0008605f) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0008605f) ncimui_query_button_pane_t

0xd816,	// (0x00083a2e) query_button_pane_ParamLimits

0xd816,	// (0x00083a2e) query_button_pane

0xe15b,	// (0x00084373) bg_button_pane_cp0028

0x3e4e,	// (0x0007a066) query_button_pane_t1

0x946b,	// (0x0007f683) main_tport_pane_ParamLimits

0xd3ec,	// (0x00083604) bg_popup_window_pane_cp01_ParamLimits

0xd3ec,	// (0x00083604) bg_popup_window_pane_cp01

0xd3fa,	// (0x00083612) heading_pane_cp08_ParamLimits

0xd3fa,	// (0x00083612) heading_pane_cp08

0xd408,	// (0x00083620) heading_pane_cp07_ParamLimits

0xd408,	// (0x00083620) heading_pane_cp07

0xd477,	// (0x0008368f) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00085fab) cell_tport_appsw_pane_g

0x50b6,	// (0x0007b2ce) input_candi_list_open_g1

0x01f9,	// (0x00076411) list_cale_time_pane_g6_ParamLimits

0x01f9,	// (0x00076411) list_cale_time_pane_g6

0x9eed,	// (0x00080105) aid_size_touch_calib_1_ParamLimits

0x9eed,	// (0x00080105) aid_size_touch_calib_1

0x9ef9,	// (0x00080111) aid_size_touch_calib_2_ParamLimits

0x9ef9,	// (0x00080111) aid_size_touch_calib_2

0x9f07,	// (0x0008011f) aid_size_touch_calib_3_ParamLimits

0x9f07,	// (0x0008011f) aid_size_touch_calib_3

0x9f17,	// (0x0008012f) aid_size_touch_calib_4_ParamLimits

0x9f17,	// (0x0008012f) aid_size_touch_calib_4

0x9f25,	// (0x0008013d) main_touch_calib_button_group_pane_ParamLimits

0x9f25,	// (0x0008013d) main_touch_calib_button_group_pane

0x9f33,	// (0x0008014b) main_touch_calib_pane_g1_ParamLimits

0x9f3f,	// (0x00080157) main_touch_calib_pane_g2_ParamLimits

0x9f4b,	// (0x00080163) main_touch_calib_pane_g3_ParamLimits

0x9f57,	// (0x0008016f) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x00085974) main_touch_calib_pane_g_ParamLimits

0x9f63,	// (0x0008017b) main_touch_calib_pane_t1_ParamLimits

0x9f7c,	// (0x00080194) main_touch_calib_pane_t2_ParamLimits

0x9f95,	// (0x000801ad) main_touch_calib_pane_t3_ParamLimits

0x9fab,	// (0x000801c3) main_touch_calib_pane_t4_ParamLimits

0x9fc1,	// (0x000801d9) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0008597d) main_touch_calib_pane_t_ParamLimits

0x227a,	// (0x00078492) list_single_fp_cale_pane_g3_ParamLimits

0x227a,	// (0x00078492) list_single_fp_cale_pane_g3

0xf0bc,	// (0x000852d4) bg_button_pane_cp012_ParamLimits

0xf0bc,	// (0x000852d4) bg_vkb2_func_pane_cp03_ParamLimits

0xbeb0,	// (0x000820c8) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0bc,	// (0x000852d4) bg_vkb2_func_pane_cp04_ParamLimits

0xcc1f,	// (0x00082e37) main_ncimui_button_group_pane_ParamLimits

0xcc1f,	// (0x00082e37) main_ncimui_button_group_pane

0xcc85,	// (0x00082e9d) main_ncimui_pane_t3_ParamLimits

0xcc85,	// (0x00082e9d) main_ncimui_pane_t3

0x3b7b,	// (0x00079d93) phacti_button_group_pane

0x3dd6,	// (0x00079fee) aid_size_list_single_double_ParamLimits

0xd774,	// (0x0008398c) popup_ezdial_listscroll_window_ParamLimits

0xd797,	// (0x000839af) popup_number_entry_window_cp01_ParamLimits

0xd823,	// (0x00083a3b) phacti_button_pane_ParamLimits

0xd823,	// (0x00083a3b) phacti_button_pane

0xe15b,	// (0x00084373) bg_button_pane_cp14

0x3e5c,	// (0x0007a074) phacti_button_pane_t1

0xd834,	// (0x00083a4c) main_touch_calib_button_pane_ParamLimits

0xd834,	// (0x00083a4c) main_touch_calib_button_pane

0xecd3,	// (0x00084eeb) bg_button_pane_cp18_ParamLimits

0xecd3,	// (0x00084eeb) bg_button_pane_cp18

0x3e6a,	// (0x0007a082) main_touch_calib_button_pane_t1_ParamLimits

0x3e6a,	// (0x0007a082) main_touch_calib_button_pane_t1

0x3e80,	// (0x0007a098) main_touch_calib_button_pane_t2_ParamLimits

0x3e80,	// (0x0007a098) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00086064) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00086064) main_touch_calib_button_pane_t

0xe15b,	// (0x00084373) cell_ncimui_button_pane

0xe15b,	// (0x00084373) bg_button_pane_cp032

0x3e9e,	// (0x0007a0b6) cell_ncimui_button_pane_t1

0xb150,	// (0x00081368) image3_infobar_pane_ParamLimits

0xb150,	// (0x00081368) image3_infobar_pane

0xcffe,	// (0x00083216) fs_bigclock_status_pane_ParamLimits

0xcffe,	// (0x00083216) fs_bigclock_status_pane

0xd00b,	// (0x00083223) main_fs_bigclock_clock_pane_ParamLimits

0xd00b,	// (0x00083223) main_fs_bigclock_clock_pane

0xd02f,	// (0x00083247) main_fs_bigclock_indi_pane_ParamLimits

0xd02f,	// (0x00083247) main_fs_bigclock_indi_pane

0xd05f,	// (0x00083277) main_fs_bigclock_swipe_pane_ParamLimits

0xd05f,	// (0x00083277) main_fs_bigclock_swipe_pane

0xe15b,	// (0x00084373) main_fs_clock_dumped_data

0x36dc,	// (0x000798f4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x36dc,	// (0x000798f4) list_single_fs_bigclock_indicator_pane_g1

0x36f7,	// (0x0007990f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x36f7,	// (0x0007990f) list_single_fs_bigclock_indicator_pane_g2

0x3711,	// (0x00079929) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3711,	// (0x00079929) list_single_fs_bigclock_indicator_pane_g3

0x372b,	// (0x00079943) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x372b,	// (0x00079943) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x00085e92) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x00085e92) list_single_fs_bigclock_indicator_pane_g

0x3754,	// (0x0007996c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3754,	// (0x0007996c) list_single_fs_bigclock_indicator_pane_t1

0x377c,	// (0x00079994) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x377c,	// (0x00079994) list_single_fs_bigclock_indicator_pane_t2

0x37a4,	// (0x000799bc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x37a4,	// (0x000799bc) list_single_fs_bigclock_indicator_pane_t3

0x37cc,	// (0x000799e4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x37cc,	// (0x000799e4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x00085e9d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x00085e9d) list_single_fs_bigclock_indicator_pane_t

0x3eac,	// (0x0007a0c4) image3_infobar_fav_pane_ParamLimits

0x3eac,	// (0x0007a0c4) image3_infobar_fav_pane

0x3ebc,	// (0x0007a0d4) image3_infobar_loc_pane_ParamLimits

0x3ebc,	// (0x0007a0d4) image3_infobar_loc_pane

0x3ed0,	// (0x0007a0e8) image3_infobar_time_pane_ParamLimits

0x3ed0,	// (0x0007a0e8) image3_infobar_time_pane

0x1f1a,	// (0x00078132) image3_infobar_time_pane_g1

0x3ee0,	// (0x0007a0f8) image3_infobar_time_pane_t1

0x1f1a,	// (0x00078132) image3_infobar_loc_pane_g1

0x3eee,	// (0x0007a106) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00086069) image3_infobar_loc_pane_g

0x3ef6,	// (0x0007a10e) image3_infobar_loc_pane_t1

0x1f1a,	// (0x00078132) image3_infobar_fav_pane_g1

0x3f04,	// (0x0007a11c) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0008606e) image3_infobar_fav_pane_g

0x3f0c,	// (0x0007a124) fs_bigclock_status_battery_pane

0x3f15,	// (0x0007a12d) fs_bigclock_status_signal_pane

0x3f1e,	// (0x0007a136) fs_bigclock_status_title_pane

0x3f27,	// (0x0007a13f) fs_bigclock_status_signal_pane_g1

0x3f30,	// (0x0007a148) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00086073) fs_bigclock_status_signal_pane_g

0x3f38,	// (0x0007a150) fs_bigclock_status_battery_pane_g1

0x3f41,	// (0x0007a159) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00086078) fs_bigclock_status_battery_pane_g

0x3f49,	// (0x0007a161) fs_bigclock_status_title_pane_t1

0x1f1a,	// (0x00078132) main_fs_bigclock_clock_pane_g1

0xd844,	// (0x00083a5c) main_fs_bigclock_clock_pane_g2

0xd844,	// (0x00083a5c) main_fs_bigclock_clock_pane_g3

0xd844,	// (0x00083a5c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0008607d) main_fs_bigclock_clock_pane_g

0xd84c,	// (0x00083a64) main_fs_bigclock_clock_pane_t1

0xd85a,	// (0x00083a72) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00086086) main_fs_bigclock_clock_pane_t

0x3f57,	// (0x0007a16f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3f57,	// (0x0007a16f) list_single_fs_bigclock_indicator_pane

0xd869,	// (0x00083a81) list_single_fs_bigclock_pane_ParamLimits

0xd869,	// (0x00083a81) list_single_fs_bigclock_pane

0x3f71,	// (0x0007a189) main_fs_bigclock_indicator_pane_t1

0x3f80,	// (0x0007a198) list_single_fs_bigclock_pane_g1

0x3f88,	// (0x0007a1a0) list_single_fs_bigclock_pane_t1

0x1f1a,	// (0x00078132) main_fs_bigclock_swipe_pane_g1

0x3fcb,	// (0x0007a1e3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00086097) main_fs_bigclock_swipe_pane_g

0x3fd3,	// (0x0007a1eb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3fd3,	// (0x0007a1eb) main_fs_bigclock_swipe_pane_t1

0x8408,	// (0x0007e620) call_type_pane_ParamLimits

0xe15b,	// (0x00084373) main_btmg_pane

0x5c19,	// (0x0007be31) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5c19,	// (0x0007be31) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0008600a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0008600a) list_single_cale_mrui_row_pane_g

0x5d41,	// (0x0007bf59) list_recal_vselct_arw_lo_pane

0x3e27,	// (0x0007a03f) list_recal_vselct_arw_up_pane

0x5d49,	// (0x0007bf61) list_recal_vselct_pane

0xd8ca,	// (0x00083ae2) btmg_button_pane

0xd8d6,	// (0x00083aee) main_btmg_pane_g1

0xe15b,	// (0x00084373) bg_button_pane_cp044

0x3ff0,	// (0x0007a208) btmg_button_pane_t1

0x1afc,	// (0x00077d14) aid_listscroll_gen

0xf0bc,	// (0x000852d4) main_cntbar_detail_pane

0x3ac7,	// (0x00079cdf) list_cmail_folder_pane

0x1378,	// (0x00077590) sp_fs_scroll_pane_cp03_ParamLimits

0x5de8,	// (0x0007c000) list_single_fs_dyc_pane_cp01_ParamLimits

0x5de8,	// (0x0007c000) list_single_fs_dyc_pane_cp01

0x3ffe,	// (0x0007a216) aid_size_cmail_indent

0x5e14,	// (0x0007c02c) list_single_dyc_row_pane_cp01

0xd8fe,	// (0x00083b16) cntbar_detail_list_pane_ParamLimits

0xd8fe,	// (0x00083b16) cntbar_detail_list_pane

0xd938,	// (0x00083b50) main_cntbar_detail_cont_pane_ParamLimits

0xd938,	// (0x00083b50) main_cntbar_detail_cont_pane

0x83fc,	// (0x0007e614) scroll_pane_cp032_ParamLimits

0x83fc,	// (0x0007e614) scroll_pane_cp032

0xd944,	// (0x00083b5c) cntbar_detail_list_event_pane_ParamLimits

0xd944,	// (0x00083b5c) cntbar_detail_list_event_pane

0xd90a,	// (0x00083b22) cntbar_detail_list_shct_pane

0x0090,	// (0x000762a8) aid_list_gen

0xe396,	// (0x000845ae) aid_scroll

0xe39f,	// (0x000845b7) aid_size_touch_scroll_bar

0xc48f,	// (0x000826a7) aid_list_double

0xe38d,	// (0x000845a5) aid_list_single

0xc47d,	// (0x00082695) aid_list_single_lg

0x5e1d,	// (0x0007c035) aid_list_z_g_a_sm

0xd958,	// (0x00083b70) aid_list_z_g_d

0x5e25,	// (0x0007c03d) aid_txt_z_prm

0x5e33,	// (0x0007c04b) aid_txt_z_prm_cp01

0x5e41,	// (0x0007c059) aid_txt_z_sec

0xd960,	// (0x00083b78) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd960,	// (0x00083b78) main_cntbar_detail_cont_pane_g1

0xd96d,	// (0x00083b85) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd96d,	// (0x00083b85) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0008609c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0008609c) main_cntbar_detail_cont_pane_g

0xe3a8,	// (0x000845c0) main_cntbar_detail_cont_pane_t1

0xe3b6,	// (0x000845ce) main_cntbar_detail_cont_pane_t2

0xe3c4,	// (0x000845dc) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000860a1) main_cntbar_detail_cont_pane_t

0xd979,	// (0x00083b91) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd979,	// (0x00083b91) cell_cntbar_detail_list_shct_pane

0xe3d2,	// (0x000845ea) cntbar_detail_list_shct_pane_g1

0xe3db,	// (0x000845f3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000860a8) cntbar_detail_list_shct_pane_g

0xd98d,	// (0x00083ba5) cntbar_detail_list_event_pane_g1_ParamLimits

0xd98d,	// (0x00083ba5) cntbar_detail_list_event_pane_g1

0xd999,	// (0x00083bb1) cntbar_detail_list_event_pane_g2_ParamLimits

0xd999,	// (0x00083bb1) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000860ad) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000860ad) cntbar_detail_list_event_pane_g

0xda05,	// (0x00083c1d) cntbar_detail_list_event_pane_t1_ParamLimits

0xda05,	// (0x00083c1d) cntbar_detail_list_event_pane_t1

0xda1a,	// (0x00083c32) cntbar_detail_list_event_pane_t2_ParamLimits

0xda1a,	// (0x00083c32) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000860ba) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000860ba) cntbar_detail_list_event_pane_t

0x1f1a,	// (0x00078132) cell_cntbar_detail_list_shct_pane_g1

0x8797,	// (0x0007e9af) navi_pane_mv_g3

0xf0bc,	// (0x000852d4) main_cntbar_detail_pane_ParamLimits

0xe15b,	// (0x00084373) main_notif_wgt_pane

0xae04,	// (0x0008101c) aid_tch_main_mp4_pane_g4

0xb039,	// (0x00081251) popup_slider_window_cp02

0x5d37,	// (0x0007bf4f) list_recal_day_event_pane

0xd8de,	// (0x00083af6) cntbar_detail_btn_pane_ParamLimits

0xd8de,	// (0x00083af6) cntbar_detail_btn_pane

0xd8ee,	// (0x00083b06) cntbar_detail_btn_pane_cp01_ParamLimits

0xd8ee,	// (0x00083b06) cntbar_detail_btn_pane_cp01

0xd90a,	// (0x00083b22) cntbar_detail_list_shct_pane_ParamLimits

0xd916,	// (0x00083b2e) cntbar_detail_pane_g1_ParamLimits

0xd916,	// (0x00083b2e) cntbar_detail_pane_g1

0xd922,	// (0x00083b3a) cntbar_detail_pane_t1_ParamLimits

0xd922,	// (0x00083b3a) cntbar_detail_pane_t1

0xd9a5,	// (0x00083bbd) cntbar_detail_list_event_pane_g3_ParamLimits

0xd9a5,	// (0x00083bbd) cntbar_detail_list_event_pane_g3

0xd9bd,	// (0x00083bd5) cntbar_detail_list_event_pane_g4_ParamLimits

0xd9bd,	// (0x00083bd5) cntbar_detail_list_event_pane_g4

0xd9d5,	// (0x00083bed) cntbar_detail_list_event_pane_g5_ParamLimits

0xd9d5,	// (0x00083bed) cntbar_detail_list_event_pane_g5

0xd9ed,	// (0x00083c05) cntbar_detail_list_event_pane_g6_ParamLimits

0xd9ed,	// (0x00083c05) cntbar_detail_list_event_pane_g6

0xda2f,	// (0x00083c47) cntbar_detail_list_event_pane_t3_ParamLimits

0xda2f,	// (0x00083c47) cntbar_detail_list_event_pane_t3

0xda41,	// (0x00083c59) popup_notif_wgt_window_ParamLimits

0xda41,	// (0x00083c59) popup_notif_wgt_window

0xda51,	// (0x00083c69) popup_submenu_window_cp01_ParamLimits

0xda51,	// (0x00083c69) popup_submenu_window_cp01

0x06df,	// (0x000768f7) bg_popup_window_pane_cp10

0xe3e4,	// (0x000845fc) listscroll_notif_wgt_pane

0xe3f5,	// (0x0008460d) list_notif_wgt_window

0xe3fe,	// (0x00084616) scroll_pane_cp033

0xda5f,	// (0x00083c77) list_notif_wgt_row_pane_ParamLimits

0xda5f,	// (0x00083c77) list_notif_wgt_row_pane

0xe407,	// (0x0008461f) aid_size_list_notif_wgt_del

0xe414,	// (0x0008462c) list_notif_wgt_row_pane_g1

0xe420,	// (0x00084638) list_notif_wgt_row_pane_g2

0xe42c,	// (0x00084644) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000860c1) list_notif_wgt_row_pane_g

0xe439,	// (0x00084651) list_notif_wgt_row_pane_t1

0xe44e,	// (0x00084666) list_notif_wgt_row_pane_t2

0xe460,	// (0x00084678) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000860c8) list_notif_wgt_row_pane_t

0x2bb3,	// (0x00078dcb) list_recal_day_event_pane_g1

0xe472,	// (0x0008468a) list_recal_day_event_pane_t1

0xe15b,	// (0x00084373) bg_button_pane_cp045

0xe481,	// (0x00084699) cntbar_detail_btn_pane_t1

0x1b10,	// (0x00077d28) main_callh_pane_ParamLimits

0x1b10,	// (0x00077d28) main_callh_pane

0xe15b,	// (0x00084373) main_coverflow0_pane

0xe15b,	// (0x00084373) main_wgtman_pane

0xd077,	// (0x0008328f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd077,	// (0x0008328f) main_fs_bigclock_unlock_btn_pane

0xd46f,	// (0x00083687) bg_button_pane_cp16

0xd47f,	// (0x00083697) cell_tport_appsw_pane_g3

0xda70,	// (0x00083c88) cf0_flow_pane_ParamLimits

0xda70,	// (0x00083c88) cf0_flow_pane

0xe48f,	// (0x000846a7) listscroll_cf0_pane

0xe49a,	// (0x000846b2) main_cf0_pane_g1

0xda7f,	// (0x00083c97) main_cf0_pane_t1_ParamLimits

0xda7f,	// (0x00083c97) main_cf0_pane_t1

0xda93,	// (0x00083cab) main_cf0_pane_t2_ParamLimits

0xda93,	// (0x00083cab) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000860d4) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000860d4) main_cf0_pane_t

0xe4ac,	// (0x000846c4) scroll_pane_cp11

0xdaa7,	// (0x00083cbf) cf0_flow_pane_g1

0xdaaf,	// (0x00083cc7) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000860d9) cf0_flow_pane_g

0xdab7,	// (0x00083ccf) cf0_flow_pane_t1

0xe15b,	// (0x00084373) main_call6_pane

0xe15b,	// (0x00084373) main_calllock_pane

0xdac5,	// (0x00083cdd) call6_btn_grp_pane_ParamLimits

0xdac5,	// (0x00083cdd) call6_btn_grp_pane

0xdad4,	// (0x00083cec) call6_pane_g1_ParamLimits

0xdad4,	// (0x00083cec) call6_pane_g1

0xdae3,	// (0x00083cfb) popup_call6_1st_window_ParamLimits

0xdae3,	// (0x00083cfb) popup_call6_1st_window

0xdaf1,	// (0x00083d09) popup_call6_2nd_window_ParamLimits

0xdaf1,	// (0x00083d09) popup_call6_2nd_window

0xdaff,	// (0x00083d17) cell_call6_btn_pane_ParamLimits

0xdaff,	// (0x00083d17) cell_call6_btn_pane

0x06df,	// (0x000768f7) bg_popup_call2_in_pane_cp03

0xe4b7,	// (0x000846cf) popup_call6_1st_window_g1

0xe4bf,	// (0x000846d7) popup_call6_1st_window_g2

0xe4c7,	// (0x000846df) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000860de) popup_call6_1st_window_g

0xe4cf,	// (0x000846e7) popup_call6_1st_window_t1

0xe4de,	// (0x000846f6) popup_call6_1st_window_t2

0xe4ee,	// (0x00084706) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000860e5) popup_call6_1st_window_t

0x06df,	// (0x000768f7) bg_popup_call2_in_pane_cp04

0xe4b7,	// (0x000846cf) popup_call6_2nd_window_g1

0xe4bf,	// (0x000846d7) popup_call6_2nd_window_g2

0xe4c7,	// (0x000846df) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000860de) popup_call6_2nd_window_g

0xe4cf,	// (0x000846e7) popup_call6_2nd_window_t1

0xe15b,	// (0x00084373) bg_button_pane_cp15

0xe4fe,	// (0x00084716) cell_call6_btn_pane_g1

0xe507,	// (0x0008471f) cell_call6_btn_pane_t1

0xdb0e,	// (0x00083d26) listscroll_wgtman_pane_ParamLimits

0xdb0e,	// (0x00083d26) listscroll_wgtman_pane

0xdb2c,	// (0x00083d44) wgtman_btn_pane_ParamLimits

0xdb2c,	// (0x00083d44) wgtman_btn_pane

0x0596,	// (0x000767ae) aid_scroll_copy1

0xe516,	// (0x0008472e) list_wgtman_pane

0xdb61,	// (0x00083d79) wgtman_btn_pane_g1_ParamLimits

0xdb61,	// (0x00083d79) wgtman_btn_pane_g1

0xdb89,	// (0x00083da1) wgtman_btn_pane_t1_ParamLimits

0xdb89,	// (0x00083da1) wgtman_btn_pane_t1

0xe520,	// (0x00084738) wgtman_btn_pane_t2_ParamLimits

0xe520,	// (0x00084738) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000860ec) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000860ec) wgtman_btn_pane_t

0xdbc0,	// (0x00083dd8) listrow_wgtman_pane_ParamLimits

0xdbc0,	// (0x00083dd8) listrow_wgtman_pane

0xdbd9,	// (0x00083df1) listrow_wgtman_pane_g1

0xdbe6,	// (0x00083dfe) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000860f1) listrow_wgtman_pane_g

0x5e4f,	// (0x0007c067) listrow_wgtman_pane_t1

0x5e67,	// (0x0007c07f) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000860f6) listrow_wgtman_pane_t

0x5e8d,	// (0x0007c0a5) wait_bar_pane_cp09

0xe537,	// (0x0008474f) main_calllock_btn_pane

0xe541,	// (0x00084759) main_calllock_pane_g1

0xe15b,	// (0x00084373) bg_button_pane_cp17

0xe54c,	// (0x00084764) main_calllock_btn_pane_g1

0xe555,	// (0x0008476d) main_calllock_btn_pane_t1

0xe15b,	// (0x00084373) main_dialer3_pane

0xe15b,	// (0x00084373) main_fmrd2_pane

0x1f1a,	// (0x00078132) main_fs_bigclock_unlock_btn_pane_g1

0xe56c,	// (0x00084784) main_fs_bigclock_unlock_btn_pane_t1

0xdc04,	// (0x00083e1c) area_fmrd2_info_pane_ParamLimits

0xdc04,	// (0x00083e1c) area_fmrd2_info_pane

0xdc12,	// (0x00083e2a) area_fmrd2_visual_pane_ParamLimits

0xdc12,	// (0x00083e2a) area_fmrd2_visual_pane

0xdc20,	// (0x00083e38) fmrd2_indi_pane_ParamLimits

0xdc20,	// (0x00083e38) fmrd2_indi_pane

0xdc2d,	// (0x00083e45) area_fmrd2_visual_pane_g1

0xdc35,	// (0x00083e4d) area_fmrd2_visual_pane_t1

0xdc45,	// (0x00083e5d) area_fmrd2_visual_pane_t2

0xdc55,	// (0x00083e6d) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00086100) area_fmrd2_visual_pane_t

0xdc65,	// (0x00083e7d) area_fmrd2_info_pane_g1

0xdc6d,	// (0x00083e85) area_fmrd2_info_pane_t1

0xdc7d,	// (0x00083e95) area_fmrd2_info_pane_t2

0xdc8d,	// (0x00083ea5) area_fmrd2_info_pane_t3

0xdc9d,	// (0x00083eb5) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00086107) area_fmrd2_info_pane_t

0xdcab,	// (0x00083ec3) fmrd2_indi_pane_t1

0xdcbb,	// (0x00083ed3) fmrd2_indi_pane_t2

0xdccb,	// (0x00083ee3) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00086110) fmrd2_indi_pane_t

0x373a,	// (0x00079952) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x373a,	// (0x00079952) list_single_fs_bigclock_indicator_pane_g5

0x37e1,	// (0x000799f9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x37e1,	// (0x000799f9) list_single_fs_bigclock_indicator_pane_t5

0xd61e,	// (0x00083836) aid_cell_bcale_month_pane_ParamLimits

0xd61e,	// (0x00083836) aid_cell_bcale_month_pane

0xd645,	// (0x0008385d) bcale_month_pane_ParamLimits

0xd645,	// (0x0008385d) bcale_month_pane

0xd663,	// (0x0008387b) bcale_preview_pane_ParamLimits

0xd663,	// (0x0008387b) bcale_preview_pane

0x3f88,	// (0x0007a1a0) list_single_fs_bigclock_pane_t1_ParamLimits

0x3fa7,	// (0x0007a1bf) list_single_fs_bigclock_pane_t2_ParamLimits

0x3fa7,	// (0x0007a1bf) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00086092) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00086092) list_single_fs_bigclock_pane_t

0xe564,	// (0x0008477c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000860fb) main_fs_bigclock_unlock_btn_pane_g

0xdcd9,	// (0x00083ef1) aid_dia3_key_size_ParamLimits

0xdcd9,	// (0x00083ef1) aid_dia3_key_size

0xdce5,	// (0x00083efd) aid_dia3_listrow_size_ParamLimits

0xdce5,	// (0x00083efd) aid_dia3_listrow_size

0xdcf5,	// (0x00083f0d) dia3_keypad_fun_pane_ParamLimits

0xdcf5,	// (0x00083f0d) dia3_keypad_fun_pane

0xdd07,	// (0x00083f1f) dia3_keypad_num_pane_ParamLimits

0xdd07,	// (0x00083f1f) dia3_keypad_num_pane

0xdd19,	// (0x00083f31) dia3_listscroll_pane_ParamLimits

0xdd19,	// (0x00083f31) dia3_listscroll_pane

0xdd27,	// (0x00083f3f) dia3_numentry_pane_ParamLimits

0xdd27,	// (0x00083f3f) dia3_numentry_pane

0xe57a,	// (0x00084792) dia3_list_pane

0xe585,	// (0x0008479d) scroll_pane_cp12

0xe15b,	// (0x00084373) bg_dia3_numentry_pane

0xdd35,	// (0x00083f4d) dia3_numentry_pane_t1

0xdd44,	// (0x00083f5c) cell_dia3_key_num_pane

0xdd4c,	// (0x00083f64) cell_dia3_key0_fun_pane_ParamLimits

0xdd4c,	// (0x00083f64) cell_dia3_key0_fun_pane

0xdd59,	// (0x00083f71) cell_dia3_key1_fun_pane_ParamLimits

0xdd59,	// (0x00083f71) cell_dia3_key1_fun_pane

0xdd66,	// (0x00083f7e) dia3_listrow_pane

0x3449,	// (0x00079661) bg_dia3_numentry_pane_g1

0xe15b,	// (0x00084373) bg_button_pane_cp21

0xe590,	// (0x000847a8) cell_dia3_key_num_pane_t1

0xe59e,	// (0x000847b6) cell_dia3_key_num_pane_t2

0xe5ad,	// (0x000847c5) cell_dia3_key_num_pane_t3

0xe5bc,	// (0x000847d4) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00086117) cell_dia3_key_num_pane_t

0xe15b,	// (0x00084373) bg_button_pane_cp19

0xdd73,	// (0x00083f8b) cell_dia3_key0_fun_pane_g1

0xe15b,	// (0x00084373) bg_button_pane_cp20

0xdd7b,	// (0x00083f93) cell_dia3_key1_fun_pane_g1

0xdd83,	// (0x00083f9b) area_left_week_number_pane

0xdd96,	// (0x00083fae) area_top_day_name_pane

0xdda4,	// (0x00083fbc) frame_month_view_pane

0xe5cb,	// (0x000847e3) grid_month_view_pane

0xddb9,	// (0x00083fd1) cell_top_day_name_pane_ParamLimits

0xddb9,	// (0x00083fd1) cell_top_day_name_pane

0xddd3,	// (0x00083feb) cell_area_left_week_number_pane_ParamLimits

0xddd3,	// (0x00083feb) cell_area_left_week_number_pane

0xddf6,	// (0x0008400e) cell_month_view_pane_ParamLimits

0xddf6,	// (0x0008400e) cell_month_view_pane

0xe5d9,	// (0x000847f1) frm_month_g1

0xde22,	// (0x0008403a) frm_month_g2

0xde33,	// (0x0008404b) frm_month_g3

0xde44,	// (0x0008405c) frm_month_g4

0xde55,	// (0x0008406d) frm_month_g5

0xde68,	// (0x00084080) frm_month_g6

0xde7b,	// (0x00084093) frm_month_g7

0xe5e6,	// (0x000847fe) frm_month_g8

0xde8e,	// (0x000840a6) frm_month_g9

0xde9b,	// (0x000840b3) frm_month_g10

0xdea8,	// (0x000840c0) frm_month_g11

0xdeb5,	// (0x000840cd) frm_month_g12

0xdec2,	// (0x000840da) frm_month_g13

0xdecf,	// (0x000840e7) frm_month_g14

0xdede,	// (0x000840f6) frm_month_g15

0xdeed,	// (0x00084105) frm_month_g16

0x000f,

0xff08,	// (0x00086120) frm_month_g

0xe5f3,	// (0x0008480b) cell_top_day_name_pane_t1

0xdefc,	// (0x00084114) cell_area_left_week_number_pane_g1

0xdf0b,	// (0x00084123) cell_area_left_week_number_pane_t1

0x217a,	// (0x00078392) cell_month_view_pane_g1

0xdf21,	// (0x00084139) cell_month_view_pane_t1

0xe15b,	// (0x00084373) main_fps_pane

0x39d1,	// (0x00079be9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x39d1,	// (0x00079be9) cmail_ddmenu_btn02_pane_cp1

0x39ed,	// (0x00079c05) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x39ed,	// (0x00079c05) cmail_ddmenu_btn02_pane_cp2

0xd7c3,	// (0x000839db) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd7c3,	// (0x000839db) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00086045) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00086045) cmail_ddmenu_btn02_pane_g

0xd7e1,	// (0x000839f9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd7e1,	// (0x000839f9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0008604a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0008604a) cmail_ddmenu_btn02_pane_t

0xdf37,	// (0x0008414f) fps_text_pane_ParamLimits

0xdf37,	// (0x0008414f) fps_text_pane

0xdf44,	// (0x0008415c) main_fps_pane_g1_ParamLimits

0xdf44,	// (0x0008415c) main_fps_pane_g1

0xdf52,	// (0x0008416a) wait_bar_pane_cp010_ParamLimits

0xdf52,	// (0x0008416a) wait_bar_pane_cp010

0xdf5e,	// (0x00084176) fps_text_pane_t1_ParamLimits

0xdf5e,	// (0x00084176) fps_text_pane_t1

0xb41b,	// (0x00081633) cam4_image_uncrop_pane_g1

0xb424,	// (0x0008163c) cam4_image_uncrop_pane_g2

0xb42d,	// (0x00081645) cam4_image_uncrop_pane_g3

0xb436,	// (0x0008164e) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x00085b0c) cam4_image_uncrop_pane_g

0xdd66,	// (0x00083f7e) dia3_listrow_pane_ParamLimits

0xe15b,	// (0x00084373) main_phob2_pane

0xd451,	// (0x00083669) cell_tport_appsw_pane_cp02_ParamLimits

0xd451,	// (0x00083669) cell_tport_appsw_pane_cp02

0xd460,	// (0x00083678) cell_tport_appsw_pane_cp03_ParamLimits

0xd460,	// (0x00083678) cell_tport_appsw_pane_cp03

0xe15b,	// (0x00084373) phob2_contact_card_pane

0xe15b,	// (0x00084373) phob2_listscroll_pane

0xe606,	// (0x0008481e) phob2_list_pane

0xe60e,	// (0x00084826) scroll_pane_cp034

0xdf77,	// (0x0008418f) phob2_cc_data_pane_ParamLimits

0xdf77,	// (0x0008418f) phob2_cc_data_pane

0xdf91,	// (0x000841a9) phob2_cc_listscroll_pane_ParamLimits

0xdf91,	// (0x000841a9) phob2_cc_listscroll_pane

0xdfab,	// (0x000841c3) list_double_large_graphic_phob2_pane_ParamLimits

0xdfab,	// (0x000841c3) list_double_large_graphic_phob2_pane

0xdfcd,	// (0x000841e5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdfcd,	// (0x000841e5) list_double_large_graphic_phob2_pane_g1

0x5e9f,	// (0x0007c0b7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5e9f,	// (0x0007c0b7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00086141) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00086141) list_double_large_graphic_phob2_pane_g

0x5eab,	// (0x0007c0c3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5eab,	// (0x0007c0c3) list_double_large_graphic_phob2_pane_t1

0x5ec1,	// (0x0007c0d9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5ec1,	// (0x0007c0d9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00086146) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00086146) list_double_large_graphic_phob2_pane_t

0xe15b,	// (0x00084373) list_highlight_pane_cp024

0xe616,	// (0x0008482e) phob2_cc_button_pane

0xdfe3,	// (0x000841fb) phob2_cc_data_pane_g1_ParamLimits

0xdfe3,	// (0x000841fb) phob2_cc_data_pane_g1

0xdfef,	// (0x00084207) phob2_cc_data_pane_g2_ParamLimits

0xdfef,	// (0x00084207) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0008614b) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0008614b) phob2_cc_data_pane_g

0xdffb,	// (0x00084213) phob2_cc_data_pane_t1_ParamLimits

0xdffb,	// (0x00084213) phob2_cc_data_pane_t1

0xe00d,	// (0x00084225) phob2_cc_data_pane_t2_ParamLimits

0xe00d,	// (0x00084225) phob2_cc_data_pane_t2

0xe01f,	// (0x00084237) phob2_cc_data_pane_t3_ParamLimits

0xe01f,	// (0x00084237) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00086150) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00086150) phob2_cc_data_pane_t

0xe61e,	// (0x00084836) phob2_cc_list_pane_ParamLimits

0xe61e,	// (0x00084836) phob2_cc_list_pane

0x2c4c,	// (0x00078e64) scroll_pane_cp035_ParamLimits

0x2c4c,	// (0x00078e64) scroll_pane_cp035

0xf0bc,	// (0x000852d4) bg_button_pane_cp033

0xe62a,	// (0x00084842) phob2_cc_button_pane_g1

0xe636,	// (0x0008484e) phob2_cc_button_pane_t1

0xe64b,	// (0x00084863) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00086157) phob2_cc_button_pane_t

0xe031,	// (0x00084249) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe031,	// (0x00084249) list_double_large_graphic_phob2_cc_pane

0xe060,	// (0x00084278) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe060,	// (0x00084278) list_double_large_graphic_phob2_cc_pane_g1

0x5ed6,	// (0x0007c0ee) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5ed6,	// (0x0007c0ee) list_double_large_graphic_phob2_cc_pane_g2

0x5ee5,	// (0x0007c0fd) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5ee5,	// (0x0007c0fd) list_double_large_graphic_phob2_cc_pane_g3

0x5ef4,	// (0x0007c10c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5ef4,	// (0x0007c10c) list_double_large_graphic_phob2_cc_pane_g4

0x5f05,	// (0x0007c11d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5f05,	// (0x0007c11d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0008615c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0008615c) list_double_large_graphic_phob2_cc_pane_g

0x5f14,	// (0x0007c12c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5f14,	// (0x0007c12c) list_double_large_graphic_phob2_cc_pane_t1

0x5f3d,	// (0x0007c155) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5f3d,	// (0x0007c155) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00086167) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00086167) list_double_large_graphic_phob2_cc_pane_t

0xe65d,	// (0x00084875) list_highlight_pane_cp025_ParamLimits

0xe65d,	// (0x00084875) list_highlight_pane_cp025

0xf0bc,	// (0x000852d4) bg_button_pane_cp033_ParamLimits

0xe62a,	// (0x00084842) phob2_cc_button_pane_g1_ParamLimits

0xe636,	// (0x0008484e) phob2_cc_button_pane_t1_ParamLimits

0xe64b,	// (0x00084863) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00086157) phob2_cc_button_pane_t_ParamLimits

0x623d,	// (0x0007c455) popup_wgtman_window

0x2a8f,	// (0x00078ca7) scroll_pane_cp038

0xdb49,	// (0x00083d61) wgtman_btn_pane_cp_01_ParamLimits

0xdb49,	// (0x00083d61) wgtman_btn_pane_cp_01

0xe66b,	// (0x00084883) wgtman_content_pane

0xe674,	// (0x0008488c) wgtman_heading_pane

0xe15b,	// (0x00084373) bg_heading_pane_cp02

0xe67d,	// (0x00084895) wgtman_heading_pane_g1

0xe685,	// (0x0008489d) wgtman_heading_pane_t1

0xe693,	// (0x000848ab) scroll_pane_cp036

0xe69b,	// (0x000848b3) wgtman_list_pane

0xe6a3,	// (0x000848bb) wgtman_list_pane_t1_ParamLimits

0xe6a3,	// (0x000848bb) wgtman_list_pane_t1

0xb37a,	// (0x00081592) cam4_grid_pane

0x5328,	// (0x0007b540) bg_button_pane_cp015_ParamLimits

0xc034,	// (0x0008224c) bg_button_pane_cp016_ParamLimits

0xc047,	// (0x0008225f) bg_button_pane_cp017_ParamLimits

0xc07c,	// (0x00082294) popup_vitu2_query_window_g3_ParamLimits

0xc07c,	// (0x00082294) popup_vitu2_query_window_g3

0xc0ca,	// (0x000822e2) popup_vitu2_query_window_t6_ParamLimits

0xc0ca,	// (0x000822e2) popup_vitu2_query_window_t6

0xc0f5,	// (0x0008230d) popup_vitu2_query_window_t7_ParamLimits

0xc0f5,	// (0x0008230d) popup_vitu2_query_window_t7

0x3086,	// (0x0007929e) cam4_grid_pane_g1

0x308f,	// (0x000792a7) cam4_grid_pane_g2

0xe6bf,	// (0x000848d7) cam4_grid_pane_g3

0xe6c8,	// (0x000848e0) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0008616c) cam4_grid_pane_g

0x70a2,	// (0x0007d2ba) aid_placing_vt_slider_lsc_ParamLimits

0x73e2,	// (0x0007d5fa) vidtel_button_pane_ParamLimits

0x73e2,	// (0x0007d5fa) vidtel_button_pane

0xe6d3,	// (0x000848eb) bg_button_pane_cp034

0xe071,	// (0x00084289) vidtel_button_pane_g1

0xe6dd,	// (0x000848f5) vidtel_button_pane_t1

0x2b91,	// (0x00078da9) aid_size_vtel_slider_touch

0x2c4c,	// (0x00078e64) scroll_pane_cp039

0x3487,	// (0x0007969f) ncim_query_button_pane_cp01_ParamLimits

0x34a6,	// (0x000796be) ncimui_query_pane_g1_ParamLimits

0xf0bc,	// (0x000852d4) input_focus_pane_cp012_ParamLimits

0x34cb,	// (0x000796e3) ncim_query_entry_pane_t1_ParamLimits

0x2c4c,	// (0x00078e64) scroll_pane_cp039_ParamLimits

0x8709,	// (0x0007e921) navi_pane_bcale_mc_g1

0x8711,	// (0x0007e929) navi_pane_bcale_mc_t1

0x3a44,	// (0x00079c5c) main_sp_fs_email_pane_g1

0x3a50,	// (0x00079c68) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x00085f03) main_sp_fs_email_pane_g

0x3c98,	// (0x00079eb0) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3c98,	// (0x00079eb0) list_single_cale_mrui_row_pane_g3

0x5da6,	// (0x0007bfbe) list_single_recal_day_pane_g5_event_pane

0x5dbc,	// (0x0007bfd4) list_single_recal_day_pane_g7

0xe6eb,	// (0x00084903) list_recal_day_event_pane_cp01

0xe6f4,	// (0x0008490c) list_recal_vselct_arw_lo_pane_cp01

0xe6fc,	// (0x00084914) list_recal_vselct_arw_up_pane_cp01

0xe704,	// (0x0008491c) list_recal_vselct_pane_cp01

0x2bb3,	// (0x00078dcb) list_recal_day_event_pane_cp01_g1

0x5f66,	// (0x0007c17e) list_recal_day_event_pane_cp01_t1

0x5dc4,	// (0x0007bfdc) list_single_recal_day_pane_t1_ParamLimits

0x5dd6,	// (0x0007bfee) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0008605a) list_single_recal_day_pane_t_ParamLimits

0xebef,	// (0x00084e07) bg_notes_pane_ParamLimits

0xecb1,	// (0x00084ec9) list_notes_pane_ParamLimits

0x6588,	// (0x0007c7a0) scroll_pane_cp06_ParamLimits

0xecd3,	// (0x00084eeb) main_notes_pane_ParamLimits

0xe15b,	// (0x00084373) main_welc_pane

0xe079,	// (0x00084291) main_welc_body_pane_ParamLimits

0xe079,	// (0x00084291) main_welc_body_pane

0xe092,	// (0x000842aa) main_welc_opti_pane_ParamLimits

0xe092,	// (0x000842aa) main_welc_opti_pane

0xe0c7,	// (0x000842df) main_welc_pane_t1_ParamLimits

0xe0c7,	// (0x000842df) main_welc_pane_t1

0xe0e5,	// (0x000842fd) main_welc_body_row_pane_ParamLimits

0xe0e5,	// (0x000842fd) main_welc_body_row_pane

0x3a36,	// (0x00079c4e) main_welc_opti_row_pane_ParamLimits

0x3a36,	// (0x00079c4e) main_welc_opti_row_pane

0xe70e,	// (0x00084926) main_welc_opti_row_pane_g1

0xe716,	// (0x0008492e) main_welc_opti_row_pane_t1

0xe726,	// (0x0008493e) main_welc_body_row_pane_t1

0xe3ed,	// (0x00084605) popup_notif_wgt_heading_pane

0xe407,	// (0x0008461f) aid_size_list_notif_wgt_del_ParamLimits

0xe414,	// (0x0008462c) list_notif_wgt_row_pane_g1_ParamLimits

0xe420,	// (0x00084638) list_notif_wgt_row_pane_g2_ParamLimits

0xe42c,	// (0x00084644) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000860c1) list_notif_wgt_row_pane_g_ParamLimits

0xe439,	// (0x00084651) list_notif_wgt_row_pane_t1_ParamLimits

0xe44e,	// (0x00084666) list_notif_wgt_row_pane_t2_ParamLimits

0xe460,	// (0x00084678) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000860c8) list_notif_wgt_row_pane_t_ParamLimits

0xdbd9,	// (0x00083df1) listrow_wgtman_pane_g1_ParamLimits

0xdbe6,	// (0x00083dfe) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000860f1) listrow_wgtman_pane_g_ParamLimits

0x5e4f,	// (0x0007c067) listrow_wgtman_pane_t1_ParamLimits

0x5e67,	// (0x0007c07f) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000860f6) listrow_wgtman_pane_t_ParamLimits

0x5e8d,	// (0x0007c0a5) wait_bar_pane_cp09_ParamLimits

0xe15b,	// (0x00084373) bg_popup_heading_pane_cp02

0xe779,	// (0x00084991) popup_notif_wgt_heading_pane_g1

0xe781,	// (0x00084999) popup_notif_wgt_heading_pane_t1

0xe15b,	// (0x00084373) main_vids_pane

0xe15b,	// (0x00084373) vids_listscroll_pane

0xe111,	// (0x00084329) scroll_pane_cp040

0xe15b,	// (0x00084373) vids_list_pane

0xe11c,	// (0x00084334) vids_list_double_pane_ParamLimits

0xe11c,	// (0x00084334) vids_list_double_pane

0xe134,	// (0x0008434c) vids_list_double_pane_g1

0xe13d,	// (0x00084355) vids_list_double_pane_t1

0xe14d,	// (0x00084365) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0008617a) vids_list_double_pane_t

0xf0bc,	// (0x000852d4) main_ncimui_pane_ParamLimits

0xcc37,	// (0x00082e4f) main_ncimui_pane_g1_ParamLimits

0xcc43,	// (0x00082e5b) main_ncimui_pane_g2_ParamLimits

0xcc43,	// (0x00082e5b) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x00085e08) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x00085e08) main_ncimui_pane_g

0xe0ad,	// (0x000842c5) main_welc_pane_g1_ParamLimits

0xe0ad,	// (0x000842c5) main_welc_pane_g1

0xe0b9,	// (0x000842d1) main_welc_pane_g2_ParamLimits

0xe0b9,	// (0x000842d1) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00086175) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00086175) main_welc_pane_g

0xebef,	// (0x00084e07) listscroll_mce_pane_ParamLimits

0x87d3,	// (0x0007e9eb) wait_bar_pane_cp10

0x1b04,	// (0x00077d1c) main_cale_day_pane_ParamLimits

0x1b04,	// (0x00077d1c) main_cale_week_pane_ParamLimits

0xebef,	// (0x00084e07) main_messa_pane_ParamLimits

0xa7ae,	// (0x000809c6) main_clock2_btn_pane_ParamLimits

0xa7ae,	// (0x000809c6) main_clock2_btn_pane

0x2302,	// (0x0007851a) main_clock2_btn_pane_cp01_ParamLimits

0x2302,	// (0x0007851a) main_clock2_btn_pane_cp01

0x3c69,	// (0x00079e81) list_cale_mrui_pane_ParamLimits

0xe4a4,	// (0x000846bc) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000860cf) main_cf0_pane_g

0xdd83,	// (0x00083f9b) area_left_week_number_pane_ParamLimits

0xdd96,	// (0x00083fae) area_top_day_name_pane_ParamLimits

0xdda4,	// (0x00083fbc) frame_month_view_pane_ParamLimits

0xe5cb,	// (0x000847e3) grid_month_view_pane_ParamLimits

0xe5d9,	// (0x000847f1) frm_month_g1_ParamLimits

0xde22,	// (0x0008403a) frm_month_g2_ParamLimits

0xde33,	// (0x0008404b) frm_month_g3_ParamLimits

0xde44,	// (0x0008405c) frm_month_g4_ParamLimits

0xde55,	// (0x0008406d) frm_month_g5_ParamLimits

0xde68,	// (0x00084080) frm_month_g6_ParamLimits

0xde7b,	// (0x00084093) frm_month_g7_ParamLimits

0xe5e6,	// (0x000847fe) frm_month_g8_ParamLimits

0xde8e,	// (0x000840a6) frm_month_g9_ParamLimits

0xde9b,	// (0x000840b3) frm_month_g10_ParamLimits

0xdea8,	// (0x000840c0) frm_month_g11_ParamLimits

0xdeb5,	// (0x000840cd) frm_month_g12_ParamLimits

0xdec2,	// (0x000840da) frm_month_g13_ParamLimits

0xdecf,	// (0x000840e7) frm_month_g14_ParamLimits

0xdede,	// (0x000840f6) frm_month_g15_ParamLimits

0xdeed,	// (0x00084105) frm_month_g16_ParamLimits

0xff08,	// (0x00086120) frm_month_g_ParamLimits

0xe5f3,	// (0x0008480b) cell_top_day_name_pane_t1_ParamLimits

0xdefc,	// (0x00084114) cell_area_left_week_number_pane_g1_ParamLimits

0xdf0b,	// (0x00084123) cell_area_left_week_number_pane_t1_ParamLimits

0x217a,	// (0x00078392) cell_month_view_pane_g1_ParamLimits

0xdf21,	// (0x00084139) cell_month_view_pane_t1_ParamLimits

0xebe7,	// (0x00084dff) main_clock2_btn_pane_g1

0xe78f,	// (0x000849a7) main_clock2_btn_pane_t1

0xf0bc,	// (0x000852d4) listscroll_cmail_pane_ParamLimits

0x3a44,	// (0x00079c5c) main_sp_fs_email_pane_g1_ParamLimits

0x3a50,	// (0x00079c68) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x00085f03) main_sp_fs_email_pane_g_ParamLimits

0x3e08,	// (0x0007a020) list_recal_day_pane_ParamLimits

0x3e19,	// (0x0007a031) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
