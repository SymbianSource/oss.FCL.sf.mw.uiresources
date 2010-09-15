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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000815be };

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
0x0cbe,	// (0x0008227c) Screen

0x0cca,	// (0x00082288) application_window

0x0d06,	// (0x000822c4) area_bottom_pane_ParamLimits

0x0d06,	// (0x000822c4) area_bottom_pane

0x0d3f,	// (0x000822fd) area_top_pane_ParamLimits

0x0d3f,	// (0x000822fd) area_top_pane

0x9c67,	// (0x0008b225) call_video_uplink_pane_ParamLimits

0x9c67,	// (0x0008b225) call_video_uplink_pane

0x0dcd,	// (0x0008238b) main_pane_ParamLimits

0x0dcd,	// (0x0008238b) main_pane

0xe9a7,	// (0x0008ff65) context_pane

0x3b95,	// (0x00085153) navi_pane

0x3bc7,	// (0x00085185) popup_cale_events_window_ParamLimits

0x3bc7,	// (0x00085185) popup_cale_events_window

0xe9ba,	// (0x0008ff78) popup_mup_playback_window

0x3bdf,	// (0x0008519d) signal_pane

0xba1e,	// (0x0008cfdc) main_browser_pane

0xbe1e,	// (0x0008d3dc) main_burst_pane

0x38f5,	// (0x00084eb3) main_calc_pane

0xe99b,	// (0x0008ff59) main_cale_day_pane

0x12b4,	// (0x00082872) main_cale_month_pane

0xe99b,	// (0x0008ff59) main_cale_week_pane

0xbe1e,	// (0x0008d3dc) main_call_pane

0xb6d6,	// (0x0008cc94) main_call_poc_pane

0xbe1e,	// (0x0008d3dc) main_camera_pane

0xbe1e,	// (0x0008d3dc) main_chi_dic_pane

0xc5ef,	// (0x0008dbad) main_clock_pane

0xb6d6,	// (0x0008cc94) main_fmradio_pane

0xbe1e,	// (0x0008d3dc) main_graph_messa_pane

0xb6d6,	// (0x0008cc94) main_help_pane

0xba1e,	// (0x0008cfdc) main_im_pane

0xb931,	// (0x0008ceef) main_image_pane_ParamLimits

0xb931,	// (0x0008ceef) main_image_pane

0xb6d6,	// (0x0008cc94) main_location2_pane

0xbe1e,	// (0x0008d3dc) main_location_pane

0xb931,	// (0x0008ceef) main_messa_pane

0xb6d6,	// (0x0008cc94) main_mp2_pane

0xbe1e,	// (0x0008d3dc) main_mp_pane

0xb6d6,	// (0x0008cc94) main_msg_pane

0xb6d6,	// (0x0008cc94) main_mup_eq_pane

0xb6d6,	// (0x0008cc94) main_mup_pane

0xba1e,	// (0x0008cfdc) main_notes_pane

0xb6d6,	// (0x0008cc94) main_pec_pane

0xb6d6,	// (0x0008cc94) main_phob_pane

0xb6d6,	// (0x0008cc94) main_pinb_pane

0xb6d6,	// (0x0008cc94) main_postcard_pane

0xb6d6,	// (0x0008cc94) main_qdial_pane

0xbe1e,	// (0x0008d3dc) main_skin_pane

0xb6d6,	// (0x0008cc94) main_smil2_pane

0xbe1e,	// (0x0008d3dc) main_smil_pane

0xbe1e,	// (0x0008d3dc) main_video_pane

0xbe1e,	// (0x0008d3dc) main_video_tele_pane

0xb931,	// (0x0008ceef) main_viewer_pane_ParamLimits

0xb931,	// (0x0008ceef) main_viewer_pane

0xbe1e,	// (0x0008d3dc) main_vorec_pane

0x3949,	// (0x00084f07) popup_blid_sat_info_window_ParamLimits

0x3949,	// (0x00084f07) popup_blid_sat_info_window

0x39a1,	// (0x00084f5f) popup_dyc_status_message_window_ParamLimits

0x39a1,	// (0x00084f5f) popup_dyc_status_message_window

0x39bb,	// (0x00084f79) popup_grid_large_graphic_window_ParamLimits

0x39bb,	// (0x00084f79) popup_grid_large_graphic_window

0x3a77,	// (0x00085035) popup_loc_request_window_ParamLimits

0x3a77,	// (0x00085035) popup_loc_request_window

0x3b6d,	// (0x0008512b) popup_wml_address_window_ParamLimits

0x3b6d,	// (0x0008512b) popup_wml_address_window

0x372f,	// (0x00084ced) call_muted_g1

0x33a3,	// (0x00084961) popup_call_audio_conf_window_ParamLimits

0x33a3,	// (0x00084961) popup_call_audio_conf_window

0x3743,	// (0x00084d01) popup_call_audio_first_window_ParamLimits

0x3743,	// (0x00084d01) popup_call_audio_first_window

0x37b9,	// (0x00084d77) popup_call_audio_in_window_ParamLimits

0x37b9,	// (0x00084d77) popup_call_audio_in_window

0x37f5,	// (0x00084db3) popup_call_audio_out_window_ParamLimits

0x37f5,	// (0x00084db3) popup_call_audio_out_window

0x382f,	// (0x00084ded) popup_call_audio_second_window_ParamLimits

0x382f,	// (0x00084ded) popup_call_audio_second_window

0x3885,	// (0x00084e43) popup_call_audio_wait_window_ParamLimits

0x3885,	// (0x00084e43) popup_call_audio_wait_window

0x38ba,	// (0x00084e78) popup_number_entry_window_ParamLimits

0x38ba,	// (0x00084e78) popup_number_entry_window

0xb2c3,	// (0x0008c881) bg_popup_call_pane_cp05_ParamLimits

0xb2c3,	// (0x0008c881) bg_popup_call_pane_cp05

0xb2e3,	// (0x0008c8a1) popup_number_entry_window_t1

0xb2f6,	// (0x0008c8b4) popup_number_entry_window_t2

0xb308,	// (0x0008c8c6) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x00090603) popup_number_entry_window_t

0xb31a,	// (0x0008c8d8) text_title_cp2

0xb32d,	// (0x0008c8eb) bg_popup_call_pane_cp_ParamLimits

0xb32d,	// (0x0008c8eb) bg_popup_call_pane_cp

0xb33b,	// (0x0008c8f9) call_thumbnail_pane

0xb343,	// (0x0008c901) popup_call_audio_in_window_g1_ParamLimits

0xb343,	// (0x0008c901) popup_call_audio_in_window_g1

0xb34f,	// (0x0008c90d) popup_call_audio_in_window_g2_ParamLimits

0xb34f,	// (0x0008c90d) popup_call_audio_in_window_g2

0xb35b,	// (0x0008c919) popup_call_audio_in_window_g3_ParamLimits

0xb35b,	// (0x0008c919) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0009060c) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0009060c) popup_call_audio_in_window_g

0xb367,	// (0x0008c925) popup_call_audio_in_window_t1_ParamLimits

0xb367,	// (0x0008c925) popup_call_audio_in_window_t1

0xb383,	// (0x0008c941) popup_call_audio_in_window_t2_ParamLimits

0xb383,	// (0x0008c941) popup_call_audio_in_window_t2

0xb39f,	// (0x0008c95d) popup_call_audio_in_window_t3_ParamLimits

0xb39f,	// (0x0008c95d) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x00090613) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x00090613) popup_call_audio_in_window_t

0xb32d,	// (0x0008c8eb) bg_popup_call_pane_cp01_ParamLimits

0xb32d,	// (0x0008c8eb) bg_popup_call_pane_cp01

0xb33b,	// (0x0008c8f9) call_thumbnail_pane_cp02

0xb3b2,	// (0x0008c970) call_type_pane_cp022

0xb3ba,	// (0x0008c978) popup_call_audio_out_window_g1_ParamLimits

0xb3ba,	// (0x0008c978) popup_call_audio_out_window_g1

0xb3cc,	// (0x0008c98a) popup_call_audio_out_window_g2_ParamLimits

0xb3cc,	// (0x0008c98a) popup_call_audio_out_window_g2

0xb3d8,	// (0x0008c996) popup_call_audio_out_window_g3_ParamLimits

0xb3d8,	// (0x0008c996) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0009061a) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0009061a) popup_call_audio_out_window_g

0xb3ea,	// (0x0008c9a8) popup_call_audio_out_window_t1_ParamLimits

0xb3ea,	// (0x0008c9a8) popup_call_audio_out_window_t1

0xb402,	// (0x0008c9c0) popup_call_audio_out_window_t2_ParamLimits

0xb402,	// (0x0008c9c0) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x00090621) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x00090621) popup_call_audio_out_window_t

0xb417,	// (0x0008c9d5) bg_popup_call_pane_ParamLimits

0xb417,	// (0x0008c9d5) bg_popup_call_pane

0x0f88,	// (0x00082546) call_thumbnail_pane_cp_ParamLimits

0x0f88,	// (0x00082546) call_thumbnail_pane_cp

0xb49b,	// (0x0008ca59) call_type_pane_cp01_ParamLimits

0xb49b,	// (0x0008ca59) call_type_pane_cp01

0xb4df,	// (0x0008ca9d) popup_call_audio_first_window_g1_ParamLimits

0xb4df,	// (0x0008ca9d) popup_call_audio_first_window_g1

0xb52b,	// (0x0008cae9) popup_call_audio_first_window_g2_ParamLimits

0xb52b,	// (0x0008cae9) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x00090626) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x00090626) popup_call_audio_first_window_g

0xb56f,	// (0x0008cb2d) popup_call_audio_first_window_t1_ParamLimits

0xb56f,	// (0x0008cb2d) popup_call_audio_first_window_t1

0xb61b,	// (0x0008cbd9) popup_call_audio_first_window_t4_ParamLimits

0xb61b,	// (0x0008cbd9) popup_call_audio_first_window_t4

0xb6a7,	// (0x0008cc65) popup_call_audio_first_window_t5_ParamLimits

0xb6a7,	// (0x0008cc65) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0009062b) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0009062b) popup_call_audio_first_window_t

0xb6d6,	// (0x0008cc94) bg_popup_call_pane_cp02

0xb6e0,	// (0x0008cc9e) call_type_pane_cp023

0xb6e8,	// (0x0008cca6) popup_call_audio_wait_window_g1

0xb6f0,	// (0x0008ccae) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x00090632) popup_call_audio_wait_window_g

0xb6f8,	// (0x0008ccb6) popup_call_audio_wait_window_t3

0xb706,	// (0x0008ccc4) bg_popup_call_pane_cp03_ParamLimits

0xb706,	// (0x0008ccc4) bg_popup_call_pane_cp03

0xb766,	// (0x0008cd24) call_thumbnail_pane_cp011_ParamLimits

0xb766,	// (0x0008cd24) call_thumbnail_pane_cp011

0xb772,	// (0x0008cd30) call_type_pane_cp034_ParamLimits

0xb772,	// (0x0008cd30) call_type_pane_cp034

0xb7ae,	// (0x0008cd6c) popup_call_audio_second_window_g1_ParamLimits

0xb7ae,	// (0x0008cd6c) popup_call_audio_second_window_g1

0xb7ea,	// (0x0008cda8) popup_call_audio_second_window_g2_ParamLimits

0xb7ea,	// (0x0008cda8) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x00090637) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x00090637) popup_call_audio_second_window_g

0xb826,	// (0x0008cde4) popup_call_audio_second_window_t1_ParamLimits

0xb826,	// (0x0008cde4) popup_call_audio_second_window_t1

0xb8a7,	// (0x0008ce65) popup_call_audio_second_window_t2_ParamLimits

0xb8a7,	// (0x0008ce65) popup_call_audio_second_window_t2

0xb8dd,	// (0x0008ce9b) popup_call_audio_second_window_t3_ParamLimits

0xb8dd,	// (0x0008ce9b) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0009063c) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0009063c) popup_call_audio_second_window_t

0xb6d6,	// (0x0008cc94) bg_popup_call_pane_cp04

0xb913,	// (0x0008ced1) list_conf_pane

0xb91b,	// (0x0008ced9) popup_call_audio_conf_window_t1

0xb929,	// (0x0008cee7) call_thumbnail_pane_g1

0xb931,	// (0x0008ceef) bg_pinb_pane_ParamLimits

0xb931,	// (0x0008ceef) bg_pinb_pane

0xb93f,	// (0x0008cefd) find_pinb_pane

0xb931,	// (0x0008ceef) listscroll_pinb_pane_ParamLimits

0xb931,	// (0x0008ceef) listscroll_pinb_pane

0xb949,	// (0x0008cf07) pinb_bg_pane_g1

0xb949,	// (0x0008cf07) pinb_bg_pane_g2

0xb949,	// (0x0008cf07) pinb_bg_pane_g3

0xb949,	// (0x0008cf07) pinb_bg_pane_g4

0xb949,	// (0x0008cf07) pinb_bg_pane_g5

0xb949,	// (0x0008cf07) pinb_bg_pane_g6

0xb949,	// (0x0008cf07) pinb_bg_pane_g7

0xb949,	// (0x0008cf07) pinb_bg_pane_g8

0xb949,	// (0x0008cf07) pinb_bg_pane_g9

0xb949,	// (0x0008cf07) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x00090643) pinb_bg_pane_g

0xb2ab,	// (0x0008c869) grid_pinb_pane

0xb2ab,	// (0x0008c869) list_pinb_pane

0xb2b5,	// (0x0008c873) scroll_pane_cp01_ParamLimits

0xb2b5,	// (0x0008c873) scroll_pane_cp01

0xb953,	// (0x0008cf11) find_pinb_pane_g1_ParamLimits

0xb953,	// (0x0008cf11) find_pinb_pane_g1

0xb96b,	// (0x0008cf29) find_pinb_pane_t1

0xb97d,	// (0x0008cf3b) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0009065d) find_pinb_pane_t

0xb992,	// (0x0008cf50) input_focus_pane_cp01_ParamLimits

0xb992,	// (0x0008cf50) input_focus_pane_cp01

0xb99e,	// (0x0008cf5c) cell_pinb_pane_ParamLimits

0xb99e,	// (0x0008cf5c) cell_pinb_pane

0xb9ac,	// (0x0008cf6a) cell_pinb_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) cell_pinb_pane_g1

0xb9ba,	// (0x0008cf78) cell_pinb_pane_g2_ParamLimits

0xb9ba,	// (0x0008cf78) cell_pinb_pane_g2

0xb9ba,	// (0x0008cf78) cell_pinb_pane_g3_ParamLimits

0xb9ba,	// (0x0008cf78) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x00090662) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x00090662) cell_pinb_pane_g

0xb6d6,	// (0x0008cc94) grid_highlight_pane_cp01

0xb99e,	// (0x0008cf5c) list_pinb_item_pane_ParamLimits

0xb99e,	// (0x0008cf5c) list_pinb_item_pane

0xb2ab,	// (0x0008c869) list_highlight_pane_cp02

0xb9c8,	// (0x0008cf86) list_pinb_item_pane_g1_ParamLimits

0xb9c8,	// (0x0008cf86) list_pinb_item_pane_g1

0xb9ba,	// (0x0008cf78) list_pinb_item_pane_g2_ParamLimits

0xb9ba,	// (0x0008cf78) list_pinb_item_pane_g2

0xb9ac,	// (0x0008cf6a) list_pinb_item_pane_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_pinb_item_pane_g3

0xb9ba,	// (0x0008cf78) list_pinb_item_pane_g4_ParamLimits

0xb9ba,	// (0x0008cf78) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x00090669) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x00090669) list_pinb_item_pane_g

0xb9d6,	// (0x0008cf94) list_pinb_item_pane_t1_ParamLimits

0xb9d6,	// (0x0008cf94) list_pinb_item_pane_t1

0x0fca,	// (0x00082588) calc_display_pane

0x0fef,	// (0x000825ad) calc_paper_pane

0x1012,	// (0x000825d0) grid_calc_pane

0xb6d6,	// (0x0008cc94) bg_list_pane_cp01

0x1040,	// (0x000825fe) clock_g1

0x1048,	// (0x00082606) clock_g2

0x0001,

0xf0b4,	// (0x00090672) clock_g

0x1050,	// (0x0008260e) clock_t1_ParamLimits

0x1050,	// (0x0008260e) clock_t1

0x1065,	// (0x00082623) clock_t2_ParamLimits

0x1065,	// (0x00082623) clock_t2

0x1077,	// (0x00082635) clock_t3_ParamLimits

0x1077,	// (0x00082635) clock_t3

0x1089,	// (0x00082647) clock_t4_ParamLimits

0x1089,	// (0x00082647) clock_t4

0x109b,	// (0x00082659) clock_t5_ParamLimits

0x109b,	// (0x00082659) clock_t5

0x10b0,	// (0x0008266e) clock_t6_ParamLimits

0x10b0,	// (0x0008266e) clock_t6

0x10c2,	// (0x00082680) clock_t7_ParamLimits

0x10c2,	// (0x00082680) clock_t7

0x10d4,	// (0x00082692) clock_t8_ParamLimits

0x10d4,	// (0x00082692) clock_t8

0x10e8,	// (0x000826a6) clock_t9_ParamLimits

0x10e8,	// (0x000826a6) clock_t9

0x0008,

0xf0b9,	// (0x00090677) clock_t_ParamLimits

0xf0b9,	// (0x00090677) clock_t

0xb9ea,	// (0x0008cfa8) popup_clock_analogue_window_cp02

0xb9ea,	// (0x0008cfa8) popup_clock_digital_window_cp01

0xb6d6,	// (0x0008cc94) listscroll_help_pane

0xb6d6,	// (0x0008cc94) phob_pre_status_pane

0xb9f2,	// (0x0008cfb0) grid_qdial_pane

0xb931,	// (0x0008ceef) listscroll_mce_pane

0xb931,	// (0x0008ceef) bg_notes_pane

0xb9fc,	// (0x0008cfba) list_notes_pane

0x10fc,	// (0x000826ba) scroll_pane_cp06

0xba0a,	// (0x0008cfc8) bg_calc_paper_pane

0x9c8d,	// (0x0008b24b) list_calc_pane

0xba1e,	// (0x0008cfdc) bg_calc_display_pane

0x1110,	// (0x000826ce) calc_display_pane_t1

0x1125,	// (0x000826e3) calc_display_pane_t2

0x9ca7,	// (0x0008b265) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0009068a) calc_display_pane_t

0x113a,	// (0x000826f8) cell_calc_pane_ParamLimits

0x113a,	// (0x000826f8) cell_calc_pane

0xba2a,	// (0x0008cfe8) bg_calc_paper_pane_g1

0xba36,	// (0x0008cff4) bg_calc_paper_pane_g2

0xba42,	// (0x0008d000) bg_calc_paper_pane_g3

0xba4e,	// (0x0008d00c) bg_calc_paper_pane_g4

0xba5a,	// (0x0008d018) bg_calc_paper_pane_g5

0x116f,	// (0x0008272d) bg_calc_paper_pane_g6

0x117e,	// (0x0008273c) bg_calc_paper_pane_g7

0x118d,	// (0x0008274b) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x00090691) bg_calc_paper_pane_g

0x11a0,	// (0x0008275e) calc_bg_paper_pane_g9

0x11b3,	// (0x00082771) list_calc_item_pane_ParamLimits

0x11b3,	// (0x00082771) list_calc_item_pane

0xba66,	// (0x0008d024) list_calc_item_pane_g1

0x9cb9,	// (0x0008b277) list_calc_item_pane_t1_ParamLimits

0x9cb9,	// (0x0008b277) list_calc_item_pane_t1

0x11cb,	// (0x00082789) list_calc_item_pane_t2_ParamLimits

0x11cb,	// (0x00082789) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x000906a2) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x000906a2) list_calc_item_pane_t

0xb949,	// (0x0008cf07) cell_calc_pane_g1

0xba73,	// (0x0008d031) grid_highlight_pane_cp02

0xbcec,	// (0x0008d2aa) bg_calc_display_pane_g1

0x11fd,	// (0x000827bb) bg_calc_display_pane_g2

0x1207,	// (0x000827c5) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x000906ac) bg_calc_display_pane_g

0x1210,	// (0x000827ce) cell_qdial_pane_ParamLimits

0x1210,	// (0x000827ce) cell_qdial_pane

0x1224,	// (0x000827e2) cell_qdial_pane_g1_ParamLimits

0x1224,	// (0x000827e2) cell_qdial_pane_g1

0x123a,	// (0x000827f8) cell_qdial_pane_g2_ParamLimits

0x123a,	// (0x000827f8) cell_qdial_pane_g2

0xba95,	// (0x0008d053) cell_qdial_pane_g3_ParamLimits

0xba95,	// (0x0008d053) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x000906b3) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x000906b3) cell_qdial_pane_g

0x1261,	// (0x0008281f) cell_qdial_pane_t1_ParamLimits

0x1261,	// (0x0008281f) cell_qdial_pane_t1

0x1279,	// (0x00082837) cell_qdial_pane_t2_ParamLimits

0x1279,	// (0x00082837) cell_qdial_pane_t2

0x128c,	// (0x0008284a) cell_qdial_pane_t3_ParamLimits

0x128c,	// (0x0008284a) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x000906bc) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x000906bc) cell_qdial_pane_t

0xb6d6,	// (0x0008cc94) grid_highlight_pane_cp04

0xbaa1,	// (0x0008d05f) thumbnail_qdial_pane_ParamLimits

0xbaa1,	// (0x0008d05f) thumbnail_qdial_pane

0xbd2d,	// (0x0008d2eb) list_help_pane

0xbd36,	// (0x0008d2f4) scroll_pane_cp02

0xbd3f,	// (0x0008d2fd) help_list_pane_t1_ParamLimits

0xbd3f,	// (0x0008d2fd) help_list_pane_t1

0x9ccb,	// (0x0008b289) bg_notes_pane_g2

0x9cd3,	// (0x0008b291) bg_notes_pane_g3

0x9cdb,	// (0x0008b299) notes_bg_pane_g1

0x9ce3,	// (0x0008b2a1) notes_bg_pane_g4

0x9ceb,	// (0x0008b2a9) notes_bg_pane_g5

0x9cf3,	// (0x0008b2b1) notes_bg_pane_g6

0x9cfb,	// (0x0008b2b9) notes_bg_pane_g7

0x9d03,	// (0x0008b2c1) notes_bg_pane_g8

0x9d0b,	// (0x0008b2c9) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x000906da) notes_bg_pane_g

0x129f,	// (0x0008285d) list_notes_text_pane_ParamLimits

0x129f,	// (0x0008285d) list_notes_text_pane

0xbd5d,	// (0x0008d31b) list_notes_text_pane_g1

0x0435,	// (0x000819f3) list_notes_text_pane_t1

0x12b4,	// (0x00082872) listscroll_cale_week_pane

0x12e0,	// (0x0008289e) bg_cale_heading_pane

0xbd80,	// (0x0008d33e) bg_cale_pane_cp01

0x12f8,	// (0x000828b6) cale_week_corner_pane

0x1317,	// (0x000828d5) cale_week_day_heading_pane

0x1334,	// (0x000828f2) cale_week_scroll_pane_g1

0x1347,	// (0x00082905) cale_week_scroll_pane_g2

0x135f,	// (0x0008291d) cale_week_scroll_pane_g3

0x1377,	// (0x00082935) cale_week_scroll_pane_g4

0x138f,	// (0x0008294d) cale_week_scroll_pane_g5

0x13af,	// (0x0008296d) cale_week_scroll_pane_g6

0x13cf,	// (0x0008298d) cale_week_scroll_pane_g7

0x13ef,	// (0x000829ad) cale_week_scroll_pane_g8

0x1413,	// (0x000829d1) cale_week_scroll_pane_g9

0x142b,	// (0x000829e9) cale_week_scroll_pane_g10

0x1443,	// (0x00082a01) cale_week_scroll_pane_g11

0x145b,	// (0x00082a19) cale_week_scroll_pane_g12

0x1473,	// (0x00082a31) cale_week_scroll_pane_g13

0x1473,	// (0x00082a31) cale_week_scroll_pane_g14

0x1473,	// (0x00082a31) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x000906e9) cale_week_scroll_pane_g

0x14af,	// (0x00082a6d) cale_week_time_pane

0x14d3,	// (0x00082a91) grid_cale_week_pane

0xbdaf,	// (0x0008d36d) scroll_pane_cp08

0x14f9,	// (0x00082ab7) cell_cale_week_pane_ParamLimits

0x14f9,	// (0x00082ab7) cell_cale_week_pane

0x1587,	// (0x00082b45) cale_week_day_heading_pane_t1

0x15b1,	// (0x00082b6f) cale_week_day_heading_pane_t2

0x15e0,	// (0x00082b9e) cale_week_day_heading_pane_t3

0x160f,	// (0x00082bcd) cale_week_day_heading_pane_t4

0x163e,	// (0x00082bfc) cale_week_day_heading_pane_t5

0x1675,	// (0x00082c33) cale_week_day_heading_pane_t6

0x16ac,	// (0x00082c6a) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0009070a) cale_week_day_heading_pane_t

0xbdcc,	// (0x0008d38a) bg_cale_side_pane

0x16d6,	// (0x00082c94) cale_week_time_pane_t1

0x16f0,	// (0x00082cae) cale_week_time_pane_t2

0x170a,	// (0x00082cc8) cale_week_time_pane_t3

0x1724,	// (0x00082ce2) cale_week_time_pane_t4

0x173e,	// (0x00082cfc) cale_week_time_pane_t5

0x1758,	// (0x00082d16) cale_week_time_pane_t6

0x1772,	// (0x00082d30) cale_week_time_pane_t7

0x178c,	// (0x00082d4a) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x00090719) cale_week_time_pane_t

0x17a6,	// (0x00082d64) cell_cale_week_pane_g2

0x17c5,	// (0x00082d83) cell_cale_week_pane_g3_ParamLimits

0x17c5,	// (0x00082d83) cell_cale_week_pane_g3

0xbdda,	// (0x0008d398) grid_highlight_pane_cp07

0xbde2,	// (0x0008d3a0) listscroll_gms_pane

0xbdec,	// (0x0008d3aa) grid_gms_pane

0xbdf5,	// (0x0008d3b3) listscroll_gms_pane_g1

0xbdfd,	// (0x0008d3bb) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0009072a) listscroll_gms_pane_g

0x17dd,	// (0x00082d9b) scroll_pane_cp010

0x17e8,	// (0x00082da6) cell_gms_pane_ParamLimits

0x17e8,	// (0x00082da6) cell_gms_pane

0x17fb,	// (0x00082db9) cell_gms_pane_g1

0xbe05,	// (0x0008d3c3) cell_gms_pane_g2

0xbd5d,	// (0x0008d31b) cell_gms_pane_g3

0xbe0d,	// (0x0008d3cb) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0009072f) cell_gms_pane_g

0xbe16,	// (0x0008d3d4) grid_highlight_pane_cp09

0x36b7,	// (0x00084c75) phob_pre_status_pane_g1

0x36bf,	// (0x00084c7d) phob_pre_status_pane_g2

0x36c7,	// (0x00084c85) phob_pre_status_pane_g3

0x36cf,	// (0x00084c8d) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x00090af3) phob_pre_status_pane_g

0x36df,	// (0x00084c9d) phob_pre_status_pane_t1

0x36ed,	// (0x00084cab) phob_pre_status_pane_t2

0x36fd,	// (0x00084cbb) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x00090afe) phob_pre_status_pane_t

0xbe1e,	// (0x0008d3dc) bg_list_pane_cp05

0x180b,	// (0x00082dc9) grid_vorec_pane

0x1813,	// (0x00082dd1) vorec_t1

0x1821,	// (0x00082ddf) vorec_t2

0x182f,	// (0x00082ded) vorec_t3

0x183d,	// (0x00082dfb) vorec_t4

0xa826,	// (0x0008bde4) vorec_t5

0x8f74,	// (0x0008a532) vorec_t6

0x0004,

0xf17a,	// (0x00090738) vorec_t

0x8f82,	// (0x0008a540) wait_bar_pane_cp01

0x1859,	// (0x00082e17) cell_vorec_pane_ParamLimits

0x1859,	// (0x00082e17) cell_vorec_pane

0x9d13,	// (0x0008b2d1) cell_vorec_pane_g1

0xb6d6,	// (0x0008cc94) grid_highlight_pane_cp05

0xb2b5,	// (0x0008c873) cams_zoom_pane

0xb2b5,	// (0x0008c873) image_vga_pane

0xb9ac,	// (0x0008cf6a) main_camera_pane_g1

0xb9ac,	// (0x0008cf6a) main_camera_pane_g2

0xb9ac,	// (0x0008cf6a) main_camera_pane_g3

0xb9ac,	// (0x0008cf6a) main_camera_pane_g4

0xb9ac,	// (0x0008cf6a) main_camera_pane_g5

0xb9ac,	// (0x0008cf6a) main_camera_pane_g6

0xb9ac,	// (0x0008cf6a) main_camera_pane_g7

0x0007,

0xf185,	// (0x00090743) main_camera_pane_g

0xbe26,	// (0x0008d3e4) main_camera_pane_t1

0xbe26,	// (0x0008d3e4) main_camera_pane_t2

0x0001,

0xf196,	// (0x00090754) main_camera_pane_t

0x1880,	// (0x00082e3e) cams_zoom_pane_cp_ParamLimits

0x1880,	// (0x00082e3e) cams_zoom_pane_cp

0x18b4,	// (0x00082e72) image_cif_pane_ParamLimits

0x18b4,	// (0x00082e72) image_cif_pane

0xb2ab,	// (0x0008c869) image_subqcif_pane

0x18c6,	// (0x00082e84) main_video_pane_g1_ParamLimits

0x18c6,	// (0x00082e84) main_video_pane_g1

0x18f4,	// (0x00082eb2) main_video_pane_g2_ParamLimits

0x18f4,	// (0x00082eb2) main_video_pane_g2

0x192e,	// (0x00082eec) main_video_pane_g3_ParamLimits

0x192e,	// (0x00082eec) main_video_pane_g3

0x192e,	// (0x00082eec) main_video_pane_g4_ParamLimits

0x192e,	// (0x00082eec) main_video_pane_g4

0x1962,	// (0x00082f20) main_video_pane_g5_ParamLimits

0x1962,	// (0x00082f20) main_video_pane_g5

0xbe3a,	// (0x0008d3f8) main_video_pane_g6_ParamLimits

0xbe3a,	// (0x0008d3f8) main_video_pane_g6

0x0006,

0xf19b,	// (0x00090759) main_video_pane_g_ParamLimits

0xf19b,	// (0x00090759) main_video_pane_g

0x197e,	// (0x00082f3c) main_video_pane_t1_ParamLimits

0x197e,	// (0x00082f3c) main_video_pane_t1

0xbe54,	// (0x0008d412) cams_zoom_pane_g1

0xbe54,	// (0x0008d412) cams_zoom_pane_g2

0xbe54,	// (0x0008d412) cams_zoom_pane_g3

0xbe54,	// (0x0008d412) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x00090768) cams_zoom_pane_g

0x19d6,	// (0x00082f94) grid_cams_pane

0x19f0,	// (0x00082fae) linegrid_cams_pane

0x1a04,	// (0x00082fc2) cell_cams_pane_ParamLimits

0x1a04,	// (0x00082fc2) cell_cams_pane

0xbe5e,	// (0x0008d41c) cams_burst_image_pane

0xbe66,	// (0x0008d424) cell_cams_pane_g1

0xb6d6,	// (0x0008cc94) grid_highlight_pane_cp03

0xb949,	// (0x0008cf07) mp_bg_pane_g1

0xb2ab,	// (0x0008c869) bg_list_pane_cp03

0xb2ab,	// (0x0008c869) bg_mp_pane

0xb2ab,	// (0x0008c869) grid_mp_pane

0xbe54,	// (0x0008d412) media_player_g1

0xc383,	// (0x0008d941) media_player_t1

0xc383,	// (0x0008d941) media_player_t2

0xc383,	// (0x0008d941) media_player_t3

0xc383,	// (0x0008d941) media_player_t4

0xc383,	// (0x0008d941) media_player_t5

0xc383,	// (0x0008d941) media_player_t6

0xc383,	// (0x0008d941) media_player_t7

0x0006,

0xf51f,	// (0x00090add) media_player_t

0xb2ab,	// (0x0008c869) wait_bar_pane_cp02

0xf504,	// (0x00090ac2) main_usb_pane_t

0xc5ef,	// (0x0008dbad) cell_mp_pane

0xb949,	// (0x0008cf07) cell_mp_pane_g1

0xb6d6,	// (0x0008cc94) grid_highlight_pane_cp06

0xbe6e,	// (0x0008d42c) grid_skin_colour_pane

0xbe76,	// (0x0008d434) list_highlight_pane_cp03

0x1a24,	// (0x00082fe2) skin_g1

0xbe7e,	// (0x0008d43c) skin_t1

0xbe8d,	// (0x0008d44b) skin_t2

0x0001,

0xf1d8,	// (0x00090796) skin_t

0x1a2c,	// (0x00082fea) cell_skin_colour_pane_ParamLimits

0x1a2c,	// (0x00082fea) cell_skin_colour_pane

0xbe9b,	// (0x0008d459) cell_skin_colour_pane_g1

0x1aa5,	// (0x00083063) call_video_g1_ParamLimits

0x1aa5,	// (0x00083063) call_video_g1

0x1ac1,	// (0x0008307f) call_video_g2_ParamLimits

0x1ac1,	// (0x0008307f) call_video_g2

0x0001,

0xf1dd,	// (0x0009079b) call_video_g_ParamLimits

0xf1dd,	// (0x0009079b) call_video_g

0x1b13,	// (0x000830d1) call_video_uplink_pane_cp1_ParamLimits

0x1b13,	// (0x000830d1) call_video_uplink_pane_cp1

0xbead,	// (0x0008d46b) call_video_uplink_pane_cp2

0x1bb2,	// (0x00083170) video_down_crop_pane_ParamLimits

0x1bb2,	// (0x00083170) video_down_crop_pane

0x1ca9,	// (0x00083267) video_down_pane_ParamLimits

0x1ca9,	// (0x00083267) video_down_pane

0xbeb5,	// (0x0008d473) video_down_subqcif_pane_ParamLimits

0xbeb5,	// (0x0008d473) video_down_subqcif_pane

0xbecd,	// (0x0008d48b) video_down_subqcif_pane_cp_ParamLimits

0xbecd,	// (0x0008d48b) video_down_subqcif_pane_cp

0xbef3,	// (0x0008d4b1) im_reading_pane_ParamLimits

0xbef3,	// (0x0008d4b1) im_reading_pane

0x1db9,	// (0x00083377) im_writing_pane_ParamLimits

0x1db9,	// (0x00083377) im_writing_pane

0x1dcf,	// (0x0008338d) im_reading_pane_t1

0xbf0d,	// (0x0008d4cb) list_im_pane

0xbf1e,	// (0x0008d4dc) scroll_pane_cp07

0x1e08,	// (0x000833c6) im_writing_pane_t1_ParamLimits

0x1e08,	// (0x000833c6) im_writing_pane_t1

0xbf37,	// (0x0008d4f5) im_writing_pane_t2_ParamLimits

0xbf37,	// (0x0008d4f5) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x000907a5) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x000907a5) im_writing_pane_t

0xb6d6,	// (0x0008cc94) input_focus_pane_cp04

0xb6d6,	// (0x0008cc94) input_focus_pane_cp05

0x1e1d,	// (0x000833db) list_im_single_pane_ParamLimits

0x1e1d,	// (0x000833db) list_im_single_pane

0x1e31,	// (0x000833ef) list_single_im_pane_t1

0xbe1e,	// (0x0008d3dc) blid_accuracy_pane

0xbe1e,	// (0x0008d3dc) blid_compass_pane

0xe953,	// (0x0008ff11) main_location_t1

0xe953,	// (0x0008ff11) main_location_t2

0xe953,	// (0x0008ff11) main_location_t3

0x0002,

0xf52e,	// (0x00090aec) main_location_t

0xb6d6,	// (0x0008cc94) aid_levels_location

0xb949,	// (0x0008cf07) blid_accuracy_pane_g1

0xb949,	// (0x0008cf07) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x000907f4) blid_accuracy_pane_g

0xbf7f,	// (0x0008d53d) wml_content_pane

0xbfbd,	// (0x0008d57b) wml_button_pane_ParamLimits

0xbfbd,	// (0x0008d57b) wml_button_pane

0x1e40,	// (0x000833fe) wml_list_single_large_pane_ParamLimits

0x1e40,	// (0x000833fe) wml_list_single_large_pane

0x1e55,	// (0x00083413) wml_list_single_medium_pane_ParamLimits

0x1e55,	// (0x00083413) wml_list_single_medium_pane

0x1e6b,	// (0x00083429) wml_list_single_small_pane_ParamLimits

0x1e6b,	// (0x00083429) wml_list_single_small_pane

0xbfd1,	// (0x0008d58f) wml_selection_box_pane_ParamLimits

0xbfd1,	// (0x0008d58f) wml_selection_box_pane

0xbfe4,	// (0x0008d5a2) wml_list_single_pane_t1

0xbff3,	// (0x0008d5b1) wml_list_single_medium_pane_t1

0xc002,	// (0x0008d5c0) wml_list_single_large_pane_t1

0xc011,	// (0x0008d5cf) input_focus_pane_cp02_ParamLimits

0xc011,	// (0x0008d5cf) input_focus_pane_cp02

0xc024,	// (0x0008d5e2) wml_selection_box_pane_g1

0xc02d,	// (0x0008d5eb) wml_selection_box_pane_t1_ParamLimits

0xc02d,	// (0x0008d5eb) wml_selection_box_pane_t1

0xb931,	// (0x0008ceef) bg_wml_button_pane_ParamLimits

0xb931,	// (0x0008ceef) bg_wml_button_pane

0xc045,	// (0x0008d603) wml_button_pane_g1

0xc04d,	// (0x0008d60b) wml_button_pane_t1

0xc045,	// (0x0008d603) wml_button_bg_pane_g1

0xc05d,	// (0x0008d61b) wml_button_bg_pane_g2

0xc065,	// (0x0008d623) wml_button_bg_pane_g3

0xc06d,	// (0x0008d62b) wml_button_bg_pane_g4

0xc075,	// (0x0008d633) wml_button_bg_pane_g5

0xc07d,	// (0x0008d63b) wml_button_bg_pane_g6

0xc085,	// (0x0008d643) wml_button_bg_pane_g7

0xc08d,	// (0x0008d64b) wml_button_bg_pane_g8

0xc095,	// (0x0008d653) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x000907aa) wml_button_bg_pane_g

0x1e83,	// (0x00083441) bg_list_pane_cp02

0xc09d,	// (0x0008d65b) mce_header_pane_ParamLimits

0xc09d,	// (0x0008d65b) mce_header_pane

0xc0b3,	// (0x0008d671) mce_icon_pane

0xc0b3,	// (0x0008d671) mce_image_pane

0xc0bc,	// (0x0008d67a) mce_text_pane_ParamLimits

0xc0bc,	// (0x0008d67a) mce_text_pane

0x1e8b,	// (0x00083449) scroll_pane_cp03

0xbfb5,	// (0x0008d573) scroll_pane_cp04

0xc0cf,	// (0x0008d68d) scroll_pane_cp05_ParamLimits

0xc0cf,	// (0x0008d68d) scroll_pane_cp05

0x1e95,	// (0x00083453) mce_header_field_pane_ParamLimits

0x1e95,	// (0x00083453) mce_header_field_pane

0x1eac,	// (0x0008346a) mce_header_field_pane_2_ParamLimits

0x1eac,	// (0x0008346a) mce_header_field_pane_2

0x1ec2,	// (0x00083480) mce_header_field_pane_3

0x1eca,	// (0x00083488) list_single_mce_message_pane_ParamLimits

0x1eca,	// (0x00083488) list_single_mce_message_pane

0x1edf,	// (0x0008349d) list_single_mce_smart_pane_ParamLimits

0x1edf,	// (0x0008349d) list_single_mce_smart_pane

0xc0db,	// (0x0008d699) input_focus_pane_cp03

0xc0e4,	// (0x0008d6a2) list_header_data_pane

0x1eff,	// (0x000834bd) mce_header_field_pane_t1

0x1f0f,	// (0x000834cd) list_single_mce_header_pane_ParamLimits

0x1f0f,	// (0x000834cd) list_single_mce_header_pane

0xc0ec,	// (0x0008d6aa) list_single_mce_header_pane_t1

0xc0fb,	// (0x0008d6b9) list_single_mce_message_pane_g1

0xc103,	// (0x0008d6c1) list_single_mce_message_pane_t1

0x1f49,	// (0x00083507) bg_cale_heading_pane_cp01_ParamLimits

0x1f49,	// (0x00083507) bg_cale_heading_pane_cp01

0xc111,	// (0x0008d6cf) bg_cale_pane_cp02_ParamLimits

0xc111,	// (0x0008d6cf) bg_cale_pane_cp02

0x1f83,	// (0x00083541) cale_month_corner_pane

0x1fa2,	// (0x00083560) cale_month_day_heading_pane_ParamLimits

0x1fa2,	// (0x00083560) cale_month_day_heading_pane

0x1ff4,	// (0x000835b2) cale_month_pane_g1_ParamLimits

0x1ff4,	// (0x000835b2) cale_month_pane_g1

0x2023,	// (0x000835e1) cale_month_pane_g2_ParamLimits

0x2023,	// (0x000835e1) cale_month_pane_g2

0x2053,	// (0x00083611) cale_month_pane_g3_ParamLimits

0x2053,	// (0x00083611) cale_month_pane_g3

0x208f,	// (0x0008364d) cale_month_pane_g4_ParamLimits

0x208f,	// (0x0008364d) cale_month_pane_g4

0x20cb,	// (0x00083689) cale_month_pane_g5_ParamLimits

0x20cb,	// (0x00083689) cale_month_pane_g5

0x2113,	// (0x000836d1) cale_month_pane_g6_ParamLimits

0x2113,	// (0x000836d1) cale_month_pane_g6

0x215f,	// (0x0008371d) cale_month_pane_g7_ParamLimits

0x215f,	// (0x0008371d) cale_month_pane_g7

0x21b3,	// (0x00083771) cale_month_pane_g8_ParamLimits

0x21b3,	// (0x00083771) cale_month_pane_g8

0x2207,	// (0x000837c5) cale_month_pane_g9_ParamLimits

0x2207,	// (0x000837c5) cale_month_pane_g9

0x2259,	// (0x00083817) cale_month_pane_g10_ParamLimits

0x2259,	// (0x00083817) cale_month_pane_g10

0x22ab,	// (0x00083869) cale_month_pane_g11_ParamLimits

0x22ab,	// (0x00083869) cale_month_pane_g11

0x22fd,	// (0x000838bb) cale_month_pane_g12_ParamLimits

0x22fd,	// (0x000838bb) cale_month_pane_g12

0x234f,	// (0x0008390d) cale_month_pane_g13_ParamLimits

0x234f,	// (0x0008390d) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x000907bd) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x000907bd) cale_month_pane_g

0x23a1,	// (0x0008395f) cale_month_week_pane

0x23c5,	// (0x00083983) grid_cale_month_pane_ParamLimits

0x23c5,	// (0x00083983) grid_cale_month_pane

0x240e,	// (0x000839cc) cale_month_day_heading_pane_t1

0x2494,	// (0x00083a52) cale_month_day_heading_pane_t2

0x250d,	// (0x00083acb) cale_month_day_heading_pane_t3

0x2586,	// (0x00083b44) cale_month_day_heading_pane_t4

0x2607,	// (0x00083bc5) cale_month_day_heading_pane_t5

0x2690,	// (0x00083c4e) cale_month_day_heading_pane_t6

0x2719,	// (0x00083cd7) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x000907d8) cale_month_day_heading_pane_t

0xbdcc,	// (0x0008d38a) bg_cale_side_pane_cp01

0x27aa,	// (0x00083d68) cale_month_week_pane_t1

0x27c3,	// (0x00083d81) cale_month_week_pane_t2

0x27dc,	// (0x00083d9a) cale_month_week_pane_t3

0x27f5,	// (0x00083db3) cale_month_week_pane_t4

0x280e,	// (0x00083dcc) cale_month_week_pane_t5

0x2827,	// (0x00083de5) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x000907e7) cale_month_week_pane_t

0x2840,	// (0x00083dfe) cell_cale_month_pane_ParamLimits

0x2840,	// (0x00083dfe) cell_cale_month_pane

0x9d1d,	// (0x0008b2db) cell_cale_month_pane_g1

0x296e,	// (0x00083f2c) cell_cale_month_pane_t1_ParamLimits

0x296e,	// (0x00083f2c) cell_cale_month_pane_t1

0xbdda,	// (0x0008d398) grid_highlight_pane_cp08

0xb949,	// (0x0008cf07) main_smil_g1

0x299a,	// (0x00083f58) smil_status_pane

0xc150,	// (0x0008d70e) smil_text_pane

0xe86b,	// (0x0008fe29) bg_popup_call3_rect_pane_g8

0xe873,	// (0x0008fe31) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x00090a80) bg_popup_call3_rect_pane_g

0xea1c,	// (0x0008ffda) smil_status_volume_pane_g1

0xc15a,	// (0x0008d718) smil_status_pane_t1

0x9e73,	// (0x0008b431) volume_smil_pane

0xc171,	// (0x0008d72f) list_smil_text_pane

0x29ad,	// (0x00083f6b) scroll_pane_cp011

0x29b8,	// (0x00083f76) smil_text_list_pane_t1_ParamLimits

0x29b8,	// (0x00083f76) smil_text_list_pane_t1

0x9d29,	// (0x0008b2e7) aid_volume_smil_ParamLimits

0x9d29,	// (0x0008b2e7) aid_volume_smil

0xb949,	// (0x0008cf07) smil_volume_pane_g1

0xb949,	// (0x0008cf07) smil_volume_pane_g2

0x0001,

0xf236,	// (0x000907f4) smil_volume_pane_g

0x12b4,	// (0x00082872) listscroll_cale_day_pane

0xc17b,	// (0x0008d739) bg_cale_pane

0xc193,	// (0x0008d751) list_cale_pane

0xc1b6,	// (0x0008d774) scroll_pane_cp09

0xc1c7,	// (0x0008d785) cale_bg_pane_g1

0xc1cf,	// (0x0008d78d) cale_bg_pane_g2

0xc1d7,	// (0x0008d795) cale_bg_pane_g3

0xc1df,	// (0x0008d79d) cale_bg_pane_g4

0xc1e7,	// (0x0008d7a5) cale_bg_pane_g5

0xc1ef,	// (0x0008d7ad) cale_bg_pane_g6

0xc1f7,	// (0x0008d7b5) cale_bg_pane_g7

0xc1ff,	// (0x0008d7bd) cale_bg_pane_g8

0xc207,	// (0x0008d7c5) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x000907f9) cale_bg_pane_g

0x29f4,	// (0x00083fb2) list_cale_time_pane_ParamLimits

0x29f4,	// (0x00083fb2) list_cale_time_pane

0xc217,	// (0x0008d7d5) list_cale_time_pane_g1_ParamLimits

0xc217,	// (0x0008d7d5) list_cale_time_pane_g1

0xc223,	// (0x0008d7e1) list_cale_time_pane_g2_ParamLimits

0xc223,	// (0x0008d7e1) list_cale_time_pane_g2

0x2a09,	// (0x00083fc7) list_cale_time_pane_g3_ParamLimits

0x2a09,	// (0x00083fc7) list_cale_time_pane_g3

0x2a17,	// (0x00083fd5) list_cale_time_pane_g4_ParamLimits

0x2a17,	// (0x00083fd5) list_cale_time_pane_g4

0x2a25,	// (0x00083fe3) list_cale_time_pane_g5_ParamLimits

0x2a25,	// (0x00083fe3) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0009080c) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0009080c) list_cale_time_pane_g

0xc23d,	// (0x0008d7fb) list_cale_time_pane_t1_ParamLimits

0xc23d,	// (0x0008d7fb) list_cale_time_pane_t1

0xc265,	// (0x0008d823) list_cale_time_pane_t2_ParamLimits

0xc265,	// (0x0008d823) list_cale_time_pane_t2

0x2c87,	// (0x00084245) aid_blid_cardinal_pane

0x2cc5,	// (0x00084283) compass_pane_t4

0xc28d,	// (0x0008d84b) list_cale_time_pane_t4_ParamLimits

0xc28d,	// (0x0008d84b) list_cale_time_pane_t4

0x2cd3,	// (0x00084291) compass_pane_t5

0x2ce1,	// (0x0008429f) compass_pane_t6

0x2cef,	// (0x000842ad) compass_pane_t7

0xc754,	// (0x0008dd12) navi_pane_cc_t1

0xc931,	// (0x0008deef) aid_phob_thumbnail_center_pane

0x3067,	// (0x00084625) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00090819) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00090819) list_cale_time_pane_t

0xb32d,	// (0x0008c8eb) bg_popup_window_pane_cp02_ParamLimits

0xb32d,	// (0x0008c8eb) bg_popup_window_pane_cp02

0xc2b5,	// (0x0008d873) heading_pane_cp01_ParamLimits

0xc2b5,	// (0x0008d873) heading_pane_cp01

0xc2c1,	// (0x0008d87f) loc_req_pane_ParamLimits

0xc2c1,	// (0x0008d87f) loc_req_pane

0xc2d1,	// (0x0008d88f) loc_type_pane_ParamLimits

0xc2d1,	// (0x0008d88f) loc_type_pane

0xc2e3,	// (0x0008d8a1) loc_type_pane_t1_ParamLimits

0xc2e3,	// (0x0008d8a1) loc_type_pane_t1

0xc2f5,	// (0x0008d8b3) loc_type_pane_t2_ParamLimits

0xc2f5,	// (0x0008d8b3) loc_type_pane_t2

0xc307,	// (0x0008d8c5) loc_type_pane_t3_ParamLimits

0xc307,	// (0x0008d8c5) loc_type_pane_t3

0x0002,

0xf262,	// (0x00090820) loc_type_pane_t_ParamLimits

0xf262,	// (0x00090820) loc_type_pane_t

0xc319,	// (0x0008d8d7) list_loc_req_pane

0xc323,	// (0x0008d8e1) scroll_pane_cp012

0x2a33,	// (0x00083ff1) list_single_loc_request_popup_menu_pane_ParamLimits

0x2a33,	// (0x00083ff1) list_single_loc_request_popup_menu_pane

0xc32e,	// (0x0008d8ec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc32e,	// (0x0008d8ec) list_single_loc_request_popup_menu_pane_g1

0xc33a,	// (0x0008d8f8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc33a,	// (0x0008d8f8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00090827) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00090827) list_single_loc_request_popup_menu_pane_g

0xc346,	// (0x0008d904) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc346,	// (0x0008d904) list_single_loc_request_popup_menu_pane_t1

0xb931,	// (0x0008ceef) bg_popup_window_pane_cp03_ParamLimits

0xb931,	// (0x0008ceef) bg_popup_window_pane_cp03

0xc729,	// (0x0008dce7) heading_loc_req_pane_ParamLimits

0xc729,	// (0x0008dce7) heading_loc_req_pane

0x2a40,	// (0x00083ffe) popup_dyc_status_message_window_g1_ParamLimits

0x2a40,	// (0x00083ffe) popup_dyc_status_message_window_g1

0x2a54,	// (0x00084012) popup_dyc_status_message_window_t1_ParamLimits

0x2a54,	// (0x00084012) popup_dyc_status_message_window_t1

0x2a69,	// (0x00084027) popup_dyc_status_message_window_t2_ParamLimits

0x2a69,	// (0x00084027) popup_dyc_status_message_window_t2

0x2a7e,	// (0x0008403c) popup_dyc_status_message_window_t3_ParamLimits

0x2a7e,	// (0x0008403c) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0009082c) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0009082c) popup_dyc_status_message_window_t

0xb6d6,	// (0x0008cc94) bg_heading_pane_cp01

0xc35c,	// (0x0008d91a) heading_loc_req_pane_g1

0xc364,	// (0x0008d922) heading_loc_req_pane_g2

0xc36c,	// (0x0008d92a) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00090833) heading_loc_req_pane_g

0xc374,	// (0x0008d932) heading_loc_req_pane_t1

0xc393,	// (0x0008d951) bg_popup_sub_pane_cp01_ParamLimits

0xc393,	// (0x0008d951) bg_popup_sub_pane_cp01

0xc3a1,	// (0x0008d95f) popup_cale_events_window_g1_ParamLimits

0xc3a1,	// (0x0008d95f) popup_cale_events_window_g1

0xc3c1,	// (0x0008d97f) popup_cale_events_window_g2_ParamLimits

0xc3c1,	// (0x0008d97f) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00090855) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00090855) popup_cale_events_window_g

0xc3e1,	// (0x0008d99f) popup_cale_events_window_t1_ParamLimits

0xc3e1,	// (0x0008d99f) popup_cale_events_window_t1

0xc3f3,	// (0x0008d9b1) popup_cale_events_window_t2_ParamLimits

0xc3f3,	// (0x0008d9b1) popup_cale_events_window_t2

0xc431,	// (0x0008d9ef) popup_cale_events_window_t3_ParamLimits

0xc431,	// (0x0008d9ef) popup_cale_events_window_t3

0xc46b,	// (0x0008da29) popup_cale_events_window_t4_ParamLimits

0xc46b,	// (0x0008da29) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0009085a) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0009085a) popup_cale_events_window_t

0x2aa6,	// (0x00084064) call_type_pane

0x2ab6,	// (0x00084074) popup_call_status_window_g1

0x2aca,	// (0x00084088) popup_call_status_window_g2

0x2ade,	// (0x0008409c) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00090863) popup_call_status_window_g

0xc4a1,	// (0x0008da5f) call_type_pane_g1

0xc4aa,	// (0x0008da68) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0009086a) call_type_pane_g

0xb6d6,	// (0x0008cc94) bg_popup_sub_pane_cp02

0xc4b3,	// (0x0008da71) listscroll_popup_wml_pane

0xc4bb,	// (0x0008da79) list_wml_pane

0xc4c5,	// (0x0008da83) scroll_pane_cp013

0xc4d0,	// (0x0008da8e) list_single_graphic_popup_wml_pane_ParamLimits

0xc4d0,	// (0x0008da8e) list_single_graphic_popup_wml_pane

0xb949,	// (0x0008cf07) list_single_graphic_popup_wml_pane_g1

0xc4e4,	// (0x0008daa2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0009086f) list_single_graphic_popup_wml_pane_g

0xc4ec,	// (0x0008daaa) list_single_graphic_popup_wml_pane_t1

0xc502,	// (0x0008dac0) aid_call_pane

0xb929,	// (0x0008cee7) popup_clock_analogue_window_g1

0xb929,	// (0x0008cee7) popup_clock_analogue_window_g2

0x9d4b,	// (0x0008b309) popup_clock_analogue_window_g3

0x9d4b,	// (0x0008b309) popup_clock_analogue_window_g4

0xb949,	// (0x0008cf07) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00090874) popup_clock_analogue_window_g

0x9d53,	// (0x0008b311) popup_clock_analogue_window_t1

0x9d61,	// (0x0008b31f) clock_digital_number_pane_ParamLimits

0x9d61,	// (0x0008b31f) clock_digital_number_pane

0x9d6d,	// (0x0008b32b) clock_digital_number_pane_cp02_ParamLimits

0x9d6d,	// (0x0008b32b) clock_digital_number_pane_cp02

0x9d79,	// (0x0008b337) clock_digital_number_pane_cp03_ParamLimits

0x9d79,	// (0x0008b337) clock_digital_number_pane_cp03

0x9d85,	// (0x0008b343) clock_digital_number_pane_cp04_ParamLimits

0x9d85,	// (0x0008b343) clock_digital_number_pane_cp04

0x9d95,	// (0x0008b353) clock_digital_separator_pane_ParamLimits

0x9d95,	// (0x0008b353) clock_digital_separator_pane

0x9da1,	// (0x0008b35f) popup_clock_digital_window_t1

0xb949,	// (0x0008cf07) clock_digital_number_pane_g1

0xb949,	// (0x0008cf07) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x000907f4) clock_digital_number_pane_g

0xb949,	// (0x0008cf07) clock_digital_separator_pane_g1

0xb949,	// (0x0008cf07) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x000907f4) clock_digital_separator_pane_g

0xb6d6,	// (0x0008cc94) bg_popup_window_pane_cp04

0xc50a,	// (0x0008dac8) heading_pane_cp03

0xbe1e,	// (0x0008d3dc) listscroll_popup_gms_pane

0xb6d6,	// (0x0008cc94) grid_large_graphic_popup_pane

0xc513,	// (0x0008dad1) listscroll_popup_gms_pane_g1

0xc51c,	// (0x0008dada) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0009087f) listscroll_popup_gms_pane_g

0xc525,	// (0x0008dae3) scroll_pane_cp014

0xb99e,	// (0x0008cf5c) cell_large_graphic_popup_pane_ParamLimits

0xb99e,	// (0x0008cf5c) cell_large_graphic_popup_pane

0xb9ac,	// (0x0008cf6a) cell_large_graphic_popup_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) cell_large_graphic_popup_pane_g1

0xc52e,	// (0x0008daec) cell_large_graphic_popup_pane_g2_ParamLimits

0xc52e,	// (0x0008daec) cell_large_graphic_popup_pane_g2

0xc53c,	// (0x0008dafa) cell_large_graphic_popup_pane_g3_ParamLimits

0xc53c,	// (0x0008dafa) cell_large_graphic_popup_pane_g3

0xc54a,	// (0x0008db08) cell_large_graphic_popup_pane_g4_ParamLimits

0xc54a,	// (0x0008db08) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00090884) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00090884) cell_large_graphic_popup_pane_g

0xb6d6,	// (0x0008cc94) grid_highlight_pane_cp010

0xb949,	// (0x0008cf07) bg_popup_call_pane_g1

0xc55b,	// (0x0008db19) list_single_graphic_popup_conf_pane_ParamLimits

0xc55b,	// (0x0008db19) list_single_graphic_popup_conf_pane

0xc56e,	// (0x0008db2c) list_highlight_pane_cp01

0xc577,	// (0x0008db35) list_single_graphic_popup_conf_pane_g1

0xc57f,	// (0x0008db3d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0009088d) list_single_graphic_popup_conf_pane_g

0xc587,	// (0x0008db45) list_single_graphic_popup_conf_pane_t1

0xc595,	// (0x0008db53) linegrid_cams_pane_g1

0x2aed,	// (0x000840ab) linegrid_cams_pane_g2

0xbd5d,	// (0x0008d31b) linegrid_cams_pane_g3

0xc59e,	// (0x0008db5c) linegrid_cams_pane_g4

0x2af6,	// (0x000840b4) linegrid_cams_pane_g5

0x2aff,	// (0x000840bd) linegrid_cams_pane_g6

0xbe0d,	// (0x0008d3cb) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00090892) linegrid_cams_pane_g

0xc5a7,	// (0x0008db65) popup_clock_analogue_window

0xc5a7,	// (0x0008db65) popup_clock_digital_window

0xb6d6,	// (0x0008cc94) popup_phob_thumbnail_window

0xb949,	// (0x0008cf07) call_video_uplink_pane_g1

0xc5b0,	// (0x0008db6e) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x000908a1) call_video_uplink_pane_g

0xc5b8,	// (0x0008db76) video_uplink_pane

0xc5c0,	// (0x0008db7e) mce_image_pane_g1

0x2b0a,	// (0x000840c8) mce_image_pane_g2

0x2b14,	// (0x000840d2) mce_image_pane_g3

0x2b1c,	// (0x000840da) mce_image_pane_g4

0x2b24,	// (0x000840e2) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x000908a6) mce_image_pane_g

0xc5ca,	// (0x0008db88) control_top_pane_stacon_cp01_ParamLimits

0xc5ca,	// (0x0008db88) control_top_pane_stacon_cp01

0xc5de,	// (0x0008db9c) uni_indicator_pane_stacon_cp01_ParamLimits

0xc5de,	// (0x0008db9c) uni_indicator_pane_stacon_cp01

0xc5ef,	// (0x0008dbad) bg_popup_sub_pane_cp03

0xc5f9,	// (0x0008dbb7) chi_dic_find_pane

0x2b2c,	// (0x000840ea) listscroll_chi_dic_pane

0xc601,	// (0x0008dbbf) main_pane_chidic_g1

0xc609,	// (0x0008dbc7) chi_dic_find_pane_t1

0xc617,	// (0x0008dbd5) find_chidic_pane

0xc620,	// (0x0008dbde) chi_dic_list_pane_ParamLimits

0xc620,	// (0x0008dbde) chi_dic_list_pane

0xc631,	// (0x0008dbef) scroll_pane_cp020

0xc639,	// (0x0008dbf7) find_chidic_pane_t1

0xb6d6,	// (0x0008cc94) input_focus_pane_cp06

0x2b40,	// (0x000840fe) list_chi_dic_pane_ParamLimits

0x2b40,	// (0x000840fe) list_chi_dic_pane

0x2b52,	// (0x00084110) list_chi_dic_pane_t1_ParamLimits

0x2b52,	// (0x00084110) list_chi_dic_pane_t1

0xb6d6,	// (0x0008cc94) list_highlight_pane_cp020

0xc648,	// (0x0008dc06) bg_cale_heading_pane_g1

0x2b65,	// (0x00084123) bg_cale_heading_pane_g2

0x2b6d,	// (0x0008412b) bg_cale_heading_pane_g3

0x2b75,	// (0x00084133) bg_cale_heading_pane_g4

0x2b7f,	// (0x0008413d) bg_cale_heading_pane_g5

0x2b89,	// (0x00084147) bg_cale_heading_pane_g6

0x2b91,	// (0x0008414f) bg_cale_heading_pane_g7

0x2b99,	// (0x00084157) bg_cale_heading_pane_g8

0x2ba3,	// (0x00084161) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x000908b1) bg_cale_heading_pane_g

0xc648,	// (0x0008dc06) bg_cale_side_pane_g1

0x2bad,	// (0x0008416b) bg_cale_side_pane_g2

0x2bb5,	// (0x00084173) bg_cale_side_pane_g3

0x2bbd,	// (0x0008417b) bg_cale_side_pane_g4

0x2bc5,	// (0x00084183) bg_cale_side_pane_g5

0x2bcd,	// (0x0008418b) bg_cale_side_pane_g6

0x2bd5,	// (0x00084193) bg_cale_side_pane_g7

0x2bdd,	// (0x0008419b) bg_cale_side_pane_g8

0x2be5,	// (0x000841a3) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x000908c4) bg_cale_side_pane_g

0x2bed,	// (0x000841ab) popup_call_status_window_ParamLimits

0x2bed,	// (0x000841ab) popup_call_status_window

0xc650,	// (0x0008dc0e) stacon_top_pane

0xc658,	// (0x0008dc16) status_pane_ParamLimits

0xc658,	// (0x0008dc16) status_pane

0xc66d,	// (0x0008dc2b) status_small_pane

0xc675,	// (0x0008dc33) control_pane

0xb6d6,	// (0x0008cc94) stacon_bottom_pane

0xc67d,	// (0x0008dc3b) list_single_mce_smart_pane_t1_ParamLimits

0xc67d,	// (0x0008dc3b) list_single_mce_smart_pane_t1

0xc690,	// (0x0008dc4e) list_single_mce_smart_pane_t2_ParamLimits

0xc690,	// (0x0008dc4e) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x000908d7) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x000908d7) list_single_mce_smart_pane_t

0x2c36,	// (0x000841f4) compass_pane

0x2c3f,	// (0x000841fd) main_location2_pane_t1

0x2c51,	// (0x0008420f) main_location2_pane_t2

0x2c63,	// (0x00084221) main_location2_pane_t3

0x0003,

0xf31e,	// (0x000908dc) main_location2_pane_t

0xc6af,	// (0x0008dc6d) compass_pane_g1_ParamLimits

0xc6af,	// (0x0008dc6d) compass_pane_g1

0x2ca7,	// (0x00084265) compass_pane_t1

0x2cb6,	// (0x00084274) compass_pane_t2

0x0005,

0xf327,	// (0x000908e5) compass_pane_t

0x2cfd,	// (0x000842bb) text_secondary_cp61

0xc74b,	// (0x0008dd09) navi_pane_cams_g5

0xc7c7,	// (0x0008dd85) navi_pane_im_t1

0xc7d5,	// (0x0008dd93) navi_pane_mp_g1_ParamLimits

0xc7d5,	// (0x0008dd93) navi_pane_mp_g1

0xc7e9,	// (0x0008dda7) navi_pane_mp_g2_ParamLimits

0xc7e9,	// (0x0008dda7) navi_pane_mp_g2

0xc7f5,	// (0x0008ddb3) navi_pane_mp_g3_ParamLimits

0xc7f5,	// (0x0008ddb3) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x000908f9) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x000908f9) navi_pane_mp_g

0xc801,	// (0x0008ddbf) navi_pane_mp_t1

0xc80f,	// (0x0008ddcd) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00090900) navi_pane_mp_t

0xc87a,	// (0x0008de38) navi_pane_vt_g1

0xc801,	// (0x0008ddbf) navi_pane_vt_t1

0xc882,	// (0x0008de40) navi_slider_pane

0xbe1e,	// (0x0008d3dc) zooming_pane

0xc892,	// (0x0008de50) navi_slider_pane_g1

0x9dbe,	// (0x0008b37c) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00090907) navi_slider_pane_g

0xc8b6,	// (0x0008de74) aid_levels_zoom

0xc8be,	// (0x0008de7c) zooming_pane_g1

0xc8c6,	// (0x0008de84) zooming_pane_g2

0xc8c6,	// (0x0008de84) zooming_pane_g3

0x0002,

0xf358,	// (0x00090916) zooming_pane_g

0xc8ce,	// (0x0008de8c) level_10_zoom

0xc8d7,	// (0x0008de95) level_11_zoom

0xc8e0,	// (0x0008de9e) level_1_zoom

0xc8e9,	// (0x0008dea7) level_2_zoom

0xc8f2,	// (0x0008deb0) level_3_zoom

0xc8fb,	// (0x0008deb9) level_4_zoom

0xc904,	// (0x0008dec2) level_5_zoom

0xc90d,	// (0x0008decb) level_6_zoom

0xc916,	// (0x0008ded4) level_7_zoom

0xc91f,	// (0x0008dedd) level_8_zoom

0xc928,	// (0x0008dee6) level_9_zoom

0xc939,	// (0x0008def7) popup_phob_thumbnail_window_g1

0xc941,	// (0x0008deff) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0009091d) popup_phob_thumbnail_window_g

0x370d,	// (0x00084ccb) level_1_location

0x3715,	// (0x00084cd3) level_2_location

0x371d,	// (0x00084cdb) level_3_location

0x3725,	// (0x00084ce3) level_4_location

0xbe1e,	// (0x0008d3dc) level_5_location

0x2d4e,	// (0x0008430c) mce_icon_pane_g1

0x2d58,	// (0x00084316) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00090922) mce_icon_pane_g

0xc949,	// (0x0008df07) main_mup_pane_g1_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g1

0xc949,	// (0x0008df07) main_mup_pane_g2_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g2

0xc949,	// (0x0008df07) main_mup_pane_g3_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g3

0xc949,	// (0x0008df07) main_mup_pane_g4_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g4

0xc949,	// (0x0008df07) main_mup_pane_g5_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g5

0xc949,	// (0x0008df07) main_mup_pane_g6_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g6

0xc949,	// (0x0008df07) main_mup_pane_g7_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g7

0xc949,	// (0x0008df07) main_mup_pane_g8_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g8

0xc949,	// (0x0008df07) main_mup_pane_g9_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g9

0xc949,	// (0x0008df07) main_mup_pane_g10_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g10

0xc949,	// (0x0008df07) main_mup_pane_g11_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g11

0xb9ac,	// (0x0008cf6a) main_mup_pane_g12_ParamLimits

0xb9ac,	// (0x0008cf6a) main_mup_pane_g12

0xc949,	// (0x0008df07) main_mup_pane_g13_ParamLimits

0xc949,	// (0x0008df07) main_mup_pane_g13

0x000c,

0xf369,	// (0x00090927) main_mup_pane_g_ParamLimits

0xf369,	// (0x00090927) main_mup_pane_g

0xc957,	// (0x0008df15) main_mup_pane_t1_ParamLimits

0xc957,	// (0x0008df15) main_mup_pane_t1

0xc957,	// (0x0008df15) main_mup_pane_t2_ParamLimits

0xc957,	// (0x0008df15) main_mup_pane_t2

0xc957,	// (0x0008df15) main_mup_pane_t3_ParamLimits

0xc957,	// (0x0008df15) main_mup_pane_t3

0xbe26,	// (0x0008d3e4) main_mup_pane_t4_ParamLimits

0xbe26,	// (0x0008d3e4) main_mup_pane_t4

0xbe26,	// (0x0008d3e4) main_mup_pane_t5_ParamLimits

0xbe26,	// (0x0008d3e4) main_mup_pane_t5

0xc715,	// (0x0008dcd3) main_mup_pane_t6_ParamLimits

0xc715,	// (0x0008dcd3) main_mup_pane_t6

0x0005,

0xf384,	// (0x00090942) main_mup_pane_t_ParamLimits

0xf384,	// (0x00090942) main_mup_pane_t

0xb99e,	// (0x0008cf5c) mup_progress_pane_ParamLimits

0xb99e,	// (0x0008cf5c) mup_progress_pane

0xc96b,	// (0x0008df29) mup_visualizer_pane_ParamLimits

0xc96b,	// (0x0008df29) mup_visualizer_pane

0xc96b,	// (0x0008df29) mup_volume_pane_ParamLimits

0xc96b,	// (0x0008df29) mup_volume_pane

0xb9ba,	// (0x0008cf78) mup_visualizer_pane_g1_ParamLimits

0xb9ba,	// (0x0008cf78) mup_visualizer_pane_g1

0xc979,	// (0x0008df37) mup_visualizer_pane_g2_ParamLimits

0xc979,	// (0x0008df37) mup_visualizer_pane_g2

0xb9ac,	// (0x0008cf6a) mup_visualizer_pane_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0009094f) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0009094f) mup_visualizer_pane_g

0xbe54,	// (0x0008d412) mup_volume_pane_g1

0xbe54,	// (0x0008d412) mup_volume_pane_g2

0x0001,

0xf398,	// (0x00090956) mup_volume_pane_g

0xbe54,	// (0x0008d412) mup_progress_pane_g1

0xbe54,	// (0x0008d412) mup_progress_pane_g2

0xbe54,	// (0x0008d412) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0009095b) mup_progress_pane_g

0xb6d6,	// (0x0008cc94) bg_popup_window_pane_cp05

0xc987,	// (0x0008df45) heading_pane_cp02_ParamLimits

0xc987,	// (0x0008df45) heading_pane_cp02

0xc9a1,	// (0x0008df5f) list_popup_blid_pane

0xc9a9,	// (0x0008df67) list_blid_sat_info_pane_ParamLimits

0xc9a9,	// (0x0008df67) list_blid_sat_info_pane

0xc9bc,	// (0x0008df7a) list_blid_sat_info_pane_g1

0xc9c4,	// (0x0008df82) list_blid_sat_info_pane_t1

0x2e58,	// (0x00084416) mup_equalizer_pane_ParamLimits

0x2e58,	// (0x00084416) mup_equalizer_pane

0x2e71,	// (0x0008442f) mup_equalizer_pane_cp1_ParamLimits

0x2e71,	// (0x0008442f) mup_equalizer_pane_cp1

0x2e8e,	// (0x0008444c) mup_equalizer_pane_cp2_ParamLimits

0x2e8e,	// (0x0008444c) mup_equalizer_pane_cp2

0x2eab,	// (0x00084469) mup_equalizer_pane_cp3_ParamLimits

0x2eab,	// (0x00084469) mup_equalizer_pane_cp3

0x2ecc,	// (0x0008448a) mup_equalizer_pane_cp4_ParamLimits

0x2ecc,	// (0x0008448a) mup_equalizer_pane_cp4

0x2eed,	// (0x000844ab) mup_equalizer_pane_cp5

0x2f01,	// (0x000844bf) mup_equalizer_pane_cp6

0x2f15,	// (0x000844d3) mup_equalizer_pane_cp7

0xe8eb,	// (0x0008fea9) bg_popup_call_poc_act_pane_g9

0xe8f3,	// (0x0008feb1) bg_popup_call_poc_act_pane_g10

0xe8fb,	// (0x0008feb9) bg_popup_call_poc_act_pane_g11

0x000a,

0xb931,	// (0x0008ceef) mup_scale_pane

0xb949,	// (0x0008cf07) mup_scale_pane_g1

0xc9d2,	// (0x0008df90) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x00090977) mup_scale_pane_g

0xc9f6,	// (0x0008dfb4) msg_data_pane

0xc9fe,	// (0x0008dfbc) scroll_pane_cp017

0x0443,	// (0x00081a01) bg_list_pane_cp04_ParamLimits

0x0443,	// (0x00081a01) bg_list_pane_cp04

0xca06,	// (0x0008dfc4) msg_data_pane_g1

0x2f3b,	// (0x000844f9) msg_data_pane_g2

0x2f45,	// (0x00084503) msg_data_pane_g3

0x2f4d,	// (0x0008450b) msg_data_pane_g4

0x2f55,	// (0x00084513) msg_data_pane_g5

0x2f5d,	// (0x0008451b) msg_data_pane_g6

0x2f65,	// (0x00084523) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x00090986) msg_data_pane_g

0x0463,	// (0x00081a21) msg_text_pane_ParamLimits

0x0463,	// (0x00081a21) msg_text_pane

0x2f6d,	// (0x0008452b) qrid_highlight_pane_cp011_ParamLimits

0x2f6d,	// (0x0008452b) qrid_highlight_pane_cp011

0xb6d6,	// (0x0008cc94) msg_body_pane

0xb6d6,	// (0x0008cc94) msg_header_pane

0xca17,	// (0x0008dfd5) input_focus_pane_cp07

0x049a,	// (0x00081a58) msg_header_pane_t1_ParamLimits

0x049a,	// (0x00081a58) msg_header_pane_t1

0x04b0,	// (0x00081a6e) msg_header_pane_t2_ParamLimits

0x04b0,	// (0x00081a6e) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0009099a) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0009099a) msg_header_pane_t

0xca2c,	// (0x0008dfea) msg_body_pane_g1

0x04c7,	// (0x00081a85) msg_body_pane_t1_ParamLimits

0x04c7,	// (0x00081a85) msg_body_pane_t1

0x04f8,	// (0x00081ab6) msg_body_pane_t2_ParamLimits

0x04f8,	// (0x00081ab6) msg_body_pane_t2

0x050a,	// (0x00081ac8) msg_body_pane_t3_ParamLimits

0x050a,	// (0x00081ac8) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0009099f) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0009099f) msg_body_pane_t

0x2fbd,	// (0x0008457b) main_viewer_pane_g1_ParamLimits

0x2fbd,	// (0x0008457b) main_viewer_pane_g1

0x2fcb,	// (0x00084589) main_viewer_pane_g2_ParamLimits

0x2fcb,	// (0x00084589) main_viewer_pane_g2

0x2fd9,	// (0x00084597) main_viewer_pane_g3_ParamLimits

0x2fd9,	// (0x00084597) main_viewer_pane_g3

0x2fe8,	// (0x000845a6) main_viewer_pane_g4_ParamLimits

0x2fe8,	// (0x000845a6) main_viewer_pane_g4

0x9de8,	// (0x0008b3a6) main_viewer_pane_g5_ParamLimits

0x9de8,	// (0x0008b3a6) main_viewer_pane_g5

0x9de8,	// (0x0008b3a6) main_viewer_pane_g7_ParamLimits

0x9de8,	// (0x0008b3a6) main_viewer_pane_g7

0x9dfa,	// (0x0008b3b8) main_viewer_pane_g8_ParamLimits

0x9dfa,	// (0x0008b3b8) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x000909af) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x000909af) main_viewer_pane_g

0xd16a,	// (0x0008e728) viewer_content_pane_ParamLimits

0xd16a,	// (0x0008e728) viewer_content_pane

0x3024,	// (0x000845e2) main_postcard_pane_g1_ParamLimits

0x3024,	// (0x000845e2) main_postcard_pane_g1

0x303a,	// (0x000845f8) main_postcard_pane_g2_ParamLimits

0x303a,	// (0x000845f8) main_postcard_pane_g2

0x3050,	// (0x0008460e) main_postcard_pane_g3_ParamLimits

0x3050,	// (0x0008460e) main_postcard_pane_g3

0x0005,

0xf402,	// (0x000909c0) main_postcard_pane_g_ParamLimits

0xf402,	// (0x000909c0) main_postcard_pane_g

0x3067,	// (0x00084625) main_postcard_pane_g4

0xea2f,	// (0x0008ffed) smil_status_volume_pane_g2

0x30aa,	// (0x00084668) postcard_pane_ParamLimits

0x30aa,	// (0x00084668) postcard_pane

0xd178,	// (0x0008e736) postcard_pane_g1_ParamLimits

0xd178,	// (0x0008e736) postcard_pane_g1

0x30ec,	// (0x000846aa) postcard_pane_g2_ParamLimits

0x30ec,	// (0x000846aa) postcard_pane_g2

0x30f8,	// (0x000846b6) postcard_pane_g3_ParamLimits

0x30f8,	// (0x000846b6) postcard_pane_g3

0xd186,	// (0x0008e744) postcard_pane_g4_ParamLimits

0xd186,	// (0x0008e744) postcard_pane_g4

0x3104,	// (0x000846c2) postcard_pane_g5_ParamLimits

0x3104,	// (0x000846c2) postcard_pane_g5

0x3119,	// (0x000846d7) postcard_pane_g6_ParamLimits

0x3119,	// (0x000846d7) postcard_pane_g6

0xd178,	// (0x0008e736) postcard_pane_g7_ParamLimits

0xd178,	// (0x0008e736) postcard_pane_g7

0x0006,

0xf40f,	// (0x000909cd) postcard_pane_g_ParamLimits

0xf40f,	// (0x000909cd) postcard_pane_g

0x312d,	// (0x000846eb) main_mp2_pane_g1_ParamLimits

0x312d,	// (0x000846eb) main_mp2_pane_g1

0x3139,	// (0x000846f7) main_mp2_pane_g2_ParamLimits

0x3139,	// (0x000846f7) main_mp2_pane_g2

0x3145,	// (0x00084703) main_mp2_pane_g3_ParamLimits

0x3145,	// (0x00084703) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x000909dc) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x000909dc) main_mp2_pane_g

0x3151,	// (0x0008470f) main_mp2_pane_t1_ParamLimits

0x3151,	// (0x0008470f) main_mp2_pane_t1

0x3166,	// (0x00084724) main_mp2_pane_t2_ParamLimits

0x3166,	// (0x00084724) main_mp2_pane_t2

0x3178,	// (0x00084736) main_mp2_pane_t3_ParamLimits

0x3178,	// (0x00084736) main_mp2_pane_t3

0x0002,

0xf425,	// (0x000909e3) main_mp2_pane_t_ParamLimits

0xf425,	// (0x000909e3) main_mp2_pane_t

0xd194,	// (0x0008e752) pec_content_pane_ParamLimits

0xd194,	// (0x0008e752) pec_content_pane

0xbfb5,	// (0x0008d573) scroll_pane_cp015

0xd1a6,	// (0x0008e764) pec_attribute_pane_ParamLimits

0xd1a6,	// (0x0008e764) pec_attribute_pane

0x318a,	// (0x00084748) pec_content_pane_g1_ParamLimits

0x318a,	// (0x00084748) pec_content_pane_g1

0xd1b6,	// (0x0008e774) pec_content_pane_t1_ParamLimits

0xd1b6,	// (0x0008e774) pec_content_pane_t1

0xd1c8,	// (0x0008e786) pec_content_pane_t2_ParamLimits

0xd1c8,	// (0x0008e786) pec_content_pane_t2

0x0001,

0xf42c,	// (0x000909ea) pec_content_pane_t_ParamLimits

0xf42c,	// (0x000909ea) pec_content_pane_t

0x3196,	// (0x00084754) list_single_graphic_pane_cp01_ParamLimits

0x3196,	// (0x00084754) list_single_graphic_pane_cp01

0xb931,	// (0x0008ceef) bg_popup_sub_pane_cp04

0xd1da,	// (0x0008e798) popup_mup_playback_window_g1

0xd1e6,	// (0x0008e7a4) popup_mup_playback_window_t1

0xd1fb,	// (0x0008e7b9) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x000909ef) popup_mup_playback_window_t

0xd232,	// (0x0008e7f0) main_image_pane_g1_ParamLimits

0xd232,	// (0x0008e7f0) main_image_pane_g1

0xd275,	// (0x0008e833) scroll_pane_cp018_ParamLimits

0xd275,	// (0x0008e833) scroll_pane_cp018

0xd28d,	// (0x0008e84b) scroll_pane_cp016_ParamLimits

0xd28d,	// (0x0008e84b) scroll_pane_cp016

0x3263,	// (0x00084821) smil2_image_pane_ParamLimits

0x3263,	// (0x00084821) smil2_image_pane

0x3293,	// (0x00084851) smil2_root_pane_ParamLimits

0x3293,	// (0x00084851) smil2_root_pane

0x32cb,	// (0x00084889) smil2_text_pane_ParamLimits

0x32cb,	// (0x00084889) smil2_text_pane

0xb6d6,	// (0x0008cc94) bg_list_pane_cp06

0xd2c9,	// (0x0008e887) grid_radio_pane

0xb6d6,	// (0x0008cc94) bg_popup_window_pane_cp06

0xd2d1,	// (0x0008e88f) main_fmradio_pane_t1

0xe903,	// (0x0008fec1) heading_pane_cp04

0xd2df,	// (0x0008e89d) main_fmradio_pane_t2

0xe90b,	// (0x0008fec9) popup_cale_lunar_info_window_g1

0xd2ed,	// (0x0008e8ab) main_fmradio_pane_t3

0xe913,	// (0x0008fed1) popup_cale_lunar_info_window_g2

0xd2fb,	// (0x0008e8b9) main_fmradio_pane_t4

0x0001,

0xd309,	// (0x0008e8c7) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x00090acf) popup_cale_lunar_info_window_g

0xf446,	// (0x00090a04) main_fmradio_pane_t

0xd317,	// (0x0008e8d5) wait_bar_pane_cp03

0xd31f,	// (0x0008e8dd) cell_fmradio_pane_ParamLimits

0xd31f,	// (0x0008e8dd) cell_fmradio_pane

0xd178,	// (0x0008e736) cell_fmradio_pane_g1_ParamLimits

0xd178,	// (0x0008e736) cell_fmradio_pane_g1

0xb6d6,	// (0x0008cc94) grid_highlight_pane_cp011

0xd332,	// (0x0008e8f0) poc_content_pane_ParamLimits

0xd332,	// (0x0008e8f0) poc_content_pane

0xd344,	// (0x0008e902) scroll_pane_cp019

0x334b,	// (0x00084909) popup_call_poc_act_window_ParamLimits

0x334b,	// (0x00084909) popup_call_poc_act_window

0x336f,	// (0x0008492d) popup_call_poc_inact_window_ParamLimits

0x336f,	// (0x0008492d) popup_call_poc_inact_window

0xf4e8,	// (0x00090aa6) bg_popup_call_poc_act_pane_g

0xe87b,	// (0x0008fe39) bg_popup_call_poc_inact_pane_g1

0xe883,	// (0x0008fe41) bg_popup_call_poc_inact_pane_g2

0xd34c,	// (0x0008e90a) popup_call_poc_act_window_g2

0xe88b,	// (0x0008fe49) bg_popup_call_poc_inact_pane_g3

0xe893,	// (0x0008fe51) bg_popup_call_poc_inact_pane_g4

0xe89b,	// (0x0008fe59) bg_popup_call_poc_inact_pane_g5

0xd354,	// (0x0008e912) popup_call_poc_act_window_t1_ParamLimits

0xd354,	// (0x0008e912) popup_call_poc_act_window_t1

0xd37c,	// (0x0008e93a) popup_call_poc_act_window_t2_ParamLimits

0xd37c,	// (0x0008e93a) popup_call_poc_act_window_t2

0xd3a4,	// (0x0008e962) popup_call_poc_act_window_t3_ParamLimits

0xd3a4,	// (0x0008e962) popup_call_poc_act_window_t3

0xd3cc,	// (0x0008e98a) popup_call_poc_act_window_t4_ParamLimits

0xd3cc,	// (0x0008e98a) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x00090a0f) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x00090a0f) popup_call_poc_act_window_t

0xe8a3,	// (0x0008fe61) bg_popup_call_poc_inact_pane_g6

0xe8ab,	// (0x0008fe69) bg_popup_call_poc_inact_pane_g7

0xe8b3,	// (0x0008fe71) bg_popup_call_poc_inact_pane_g8

0xd3de,	// (0x0008e99c) popup_call_poc_inact_window_g2

0xe8bb,	// (0x0008fe79) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x00090a93) bg_popup_call_poc_inact_pane_g

0xd3e6,	// (0x0008e9a4) popup_call_poc_inact_window_t1_ParamLimits

0xd3e6,	// (0x0008e9a4) popup_call_poc_inact_window_t1

0xd3fb,	// (0x0008e9b9) popup_call_poc_inact_window_t2_ParamLimits

0xd3fb,	// (0x0008e9b9) popup_call_poc_inact_window_t2

0xd410,	// (0x0008e9ce) popup_call_poc_inact_window_t3_ParamLimits

0xd410,	// (0x0008e9ce) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x00090a18) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x00090a18) popup_call_poc_inact_window_t

0xe9a7,	// (0x0008ff65) context_pane_ParamLimits

0x3bdf,	// (0x0008519d) signal_pane_ParamLimits

0xbe1e,	// (0x0008d3dc) main_call2_pane

0x9e3f,	// (0x0008b3fd) popup_phob_thumbnail2_window_ParamLimits

0x9e3f,	// (0x0008b3fd) popup_phob_thumbnail2_window

0x9dd0,	// (0x0008b38e) aid_hotspot_pointer_arrow_pane

0x9dd8,	// (0x0008b396) aid_hotspot_pointer_hand_pane

0x36d7,	// (0x00084c95) phob_pre_status_pane_g5

0xb2b5,	// (0x0008c873) cams_zoom_pane_ParamLimits

0xb2b5,	// (0x0008c873) image_vga_pane_ParamLimits

0xb9ac,	// (0x0008cf6a) main_camera_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) main_camera_pane_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) main_camera_pane_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) main_camera_pane_g4_ParamLimits

0xb9ac,	// (0x0008cf6a) main_camera_pane_g5_ParamLimits

0xb9ac,	// (0x0008cf6a) main_camera_pane_g6_ParamLimits

0xb9ac,	// (0x0008cf6a) main_camera_pane_g7_ParamLimits

0xf185,	// (0x00090743) main_camera_pane_g_ParamLimits

0xbe26,	// (0x0008d3e4) main_camera_pane_t1_ParamLimits

0xbe26,	// (0x0008d3e4) main_camera_pane_t2_ParamLimits

0xf196,	// (0x00090754) main_camera_pane_t_ParamLimits

0xb931,	// (0x0008ceef) bg_popup_preview_window_pane_cp01_ParamLimits

0xb931,	// (0x0008ceef) bg_popup_preview_window_pane_cp01

0xd425,	// (0x0008e9e3) popup_phob_thumbnail2_window_g1_ParamLimits

0xd425,	// (0x0008e9e3) popup_phob_thumbnail2_window_g1

0xb6d6,	// (0x0008cc94) call2_cli_visual_pane

0x33a3,	// (0x00084961) popup_call2_audio_conf_window_ParamLimits

0x33a3,	// (0x00084961) popup_call2_audio_conf_window

0x33c3,	// (0x00084981) popup_call2_audio_first_window_ParamLimits

0x33c3,	// (0x00084981) popup_call2_audio_first_window

0x3459,	// (0x00084a17) popup_call2_audio_in_window_ParamLimits

0x3459,	// (0x00084a17) popup_call2_audio_in_window

0x34a1,	// (0x00084a5f) popup_call2_audio_out_window_ParamLimits

0x34a1,	// (0x00084a5f) popup_call2_audio_out_window

0x350b,	// (0x00084ac9) popup_call2_audio_second_window_ParamLimits

0x350b,	// (0x00084ac9) popup_call2_audio_second_window

0x3571,	// (0x00084b2f) popup_call2_audio_wait_window_ParamLimits

0x3571,	// (0x00084b2f) popup_call2_audio_wait_window

0xb6d6,	// (0x0008cc94) bg_popup_call2_act_pane_cp03

0xb913,	// (0x0008ced1) list_conf_pane_cp

0xd431,	// (0x0008e9ef) popup_call2_audio_conf_window_t1

0xc55b,	// (0x0008db19) list_single_graphic_popup_conf2_pane_ParamLimits

0xc55b,	// (0x0008db19) list_single_graphic_popup_conf2_pane

0xc56e,	// (0x0008db2c) list_highlight_pane_cp04

0xd43f,	// (0x0008e9fd) list_single_graphic_popup_conf2_pane_g1

0xc57f,	// (0x0008db3d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x00090a1f) list_single_graphic_popup_conf2_pane_g

0xd449,	// (0x0008ea07) list_single_graphic_popup_conf2_pane_t1

0xd457,	// (0x0008ea15) bg_popup_call2_act_pane_cp01_ParamLimits

0xd457,	// (0x0008ea15) bg_popup_call2_act_pane_cp01

0xd4e1,	// (0x0008ea9f) call_type_pane_cp05_ParamLimits

0xd4e1,	// (0x0008ea9f) call_type_pane_cp05

0xdbc4,	// (0x0008f182) popup_call2_audio_second_window_g1_ParamLimits

0xdbc4,	// (0x0008f182) popup_call2_audio_second_window_g1

0xdc18,	// (0x0008f1d6) popup_call2_audio_second_window_g2_ParamLimits

0xdc18,	// (0x0008f1d6) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x00090a24) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x00090a24) popup_call2_audio_second_window_g

0xdc7d,	// (0x0008f23b) popup_call2_audio_second_window_t1_ParamLimits

0xdc7d,	// (0x0008f23b) popup_call2_audio_second_window_t1

0xdd38,	// (0x0008f2f6) popup_call2_audio_second_window_t2_ParamLimits

0xdd38,	// (0x0008f2f6) popup_call2_audio_second_window_t2

0xdd8b,	// (0x0008f349) popup_call2_audio_second_window_t3_ParamLimits

0xdd8b,	// (0x0008f349) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x00090a2b) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x00090a2b) popup_call2_audio_second_window_t

0xb6d6,	// (0x0008cc94) bg_popup_call2_in_pane_cp02

0xb6e0,	// (0x0008cc9e) call_type_pane_cp04

0x35ab,	// (0x00084b69) popup_call2_audio_wait_window_g1

0x35b3,	// (0x00084b71) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x00090a34) popup_call2_audio_wait_window_g

0xb6f8,	// (0x0008ccb6) popup_call2_audio_wait_window_t3

0xde7e,	// (0x0008f43c) bg_popup_call2_act_pane_ParamLimits

0xde7e,	// (0x0008f43c) bg_popup_call2_act_pane

0xdf3e,	// (0x0008f4fc) call_type_pane_cp03_ParamLimits

0xdf3e,	// (0x0008f4fc) call_type_pane_cp03

0xdfa2,	// (0x0008f560) popup_call2_audio_first_window_g1_ParamLimits

0xdfa2,	// (0x0008f560) popup_call2_audio_first_window_g1

0xe012,	// (0x0008f5d0) popup_call2_audio_first_window_g2_ParamLimits

0xe012,	// (0x0008f5d0) popup_call2_audio_first_window_g2

0xe076,	// (0x0008f634) popup_call2_audio_first_window_g3_ParamLimits

0xe076,	// (0x0008f634) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x00090a39) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x00090a39) popup_call2_audio_first_window_g

0xe0fe,	// (0x0008f6bc) popup_call2_audio_first_window_t1_ParamLimits

0xe0fe,	// (0x0008f6bc) popup_call2_audio_first_window_t1

0xe201,	// (0x0008f7bf) popup_call2_audio_first_window_t4_ParamLimits

0xe201,	// (0x0008f7bf) popup_call2_audio_first_window_t4

0xe2e4,	// (0x0008f8a2) popup_call2_audio_first_window_t5_ParamLimits

0xe2e4,	// (0x0008f8a2) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x00090a44) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x00090a44) popup_call2_audio_first_window_t

0xb929,	// (0x0008cee7) bg_popup_call2_act_pane_g1

0xe91b,	// (0x0008fed9) popup_cale_lunar_info_window_t1

0xe929,	// (0x0008fee7) popup_cale_lunar_info_window_t2

0xe937,	// (0x0008fef5) popup_cale_lunar_info_window_t3

0xb6d6,	// (0x0008cc94) bg_popup_call2_bubble_pane

0xe3e5,	// (0x0008f9a3) bg_popup_call2_in_pane_cp01_ParamLimits

0xe3e5,	// (0x0008f9a3) bg_popup_call2_in_pane_cp01

0xb3b2,	// (0x0008c970) call_type_pane_cp02

0x35bb,	// (0x00084b79) popup_call2_audio_out_window_g1_ParamLimits

0x35bb,	// (0x00084b79) popup_call2_audio_out_window_g1

0xe42d,	// (0x0008f9eb) popup_call2_audio_out_window_g2_ParamLimits

0xe42d,	// (0x0008f9eb) popup_call2_audio_out_window_g2

0x35e7,	// (0x00084ba5) popup_call2_audio_out_window_g3_ParamLimits

0x35e7,	// (0x00084ba5) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x00090a4d) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x00090a4d) popup_call2_audio_out_window_g

0xe464,	// (0x0008fa22) popup_call2_audio_out_window_t1_ParamLimits

0xe464,	// (0x0008fa22) popup_call2_audio_out_window_t1

0xe4c3,	// (0x0008fa81) popup_call2_audio_out_window_t2_ParamLimits

0xe4c3,	// (0x0008fa81) popup_call2_audio_out_window_t2

0xe517,	// (0x0008fad5) popup_call2_audio_out_window_t3_ParamLimits

0xe517,	// (0x0008fad5) popup_call2_audio_out_window_t3

0xe52d,	// (0x0008faeb) popup_call2_audio_out_window_t4_ParamLimits

0xe52d,	// (0x0008faeb) popup_call2_audio_out_window_t4

0xe543,	// (0x0008fb01) popup_call2_audio_out_window_t5_ParamLimits

0xe543,	// (0x0008fb01) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x00090a56) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x00090a56) popup_call2_audio_out_window_t

0xe5a7,	// (0x0008fb65) bg_popup_call2_in_pane_ParamLimits

0xe5a7,	// (0x0008fb65) bg_popup_call2_in_pane

0xe61d,	// (0x0008fbdb) popup_call2_audio_in_window_g1_ParamLimits

0xe61d,	// (0x0008fbdb) popup_call2_audio_in_window_g1

0xe655,	// (0x0008fc13) popup_call2_audio_in_window_g2_ParamLimits

0xe655,	// (0x0008fc13) popup_call2_audio_in_window_g2

0xe68d,	// (0x0008fc4b) popup_call2_audio_in_window_g3_ParamLimits

0xe68d,	// (0x0008fc4b) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x00090a63) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x00090a63) popup_call2_audio_in_window_g

0xe6e5,	// (0x0008fca3) popup_call2_audio_in_window_t1_ParamLimits

0xe6e5,	// (0x0008fca3) popup_call2_audio_in_window_t1

0xe765,	// (0x0008fd23) popup_call2_audio_in_window_t2_ParamLimits

0xe765,	// (0x0008fd23) popup_call2_audio_in_window_t2

0xe7e5,	// (0x0008fda3) popup_call2_audio_in_window_t3_ParamLimits

0xe7e5,	// (0x0008fda3) popup_call2_audio_in_window_t3

0xe7ff,	// (0x0008fdbd) popup_call2_audio_in_window_t4_ParamLimits

0xe7ff,	// (0x0008fdbd) popup_call2_audio_in_window_t4

0xe811,	// (0x0008fdcf) popup_call2_audio_in_window_t5_ParamLimits

0xe811,	// (0x0008fdcf) popup_call2_audio_in_window_t5

0xe826,	// (0x0008fde4) popup_call2_audio_in_window_t6_ParamLimits

0xe826,	// (0x0008fde4) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x00090a6c) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x00090a6c) popup_call2_audio_in_window_t

0xb929,	// (0x0008cee7) bg_popup_call2_in_pane_g1

0xe945,	// (0x0008ff03) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x00090ad4) popup_cale_lunar_info_window_t

0xb931,	// (0x0008ceef) bg_popup_call2_rect_pane_ParamLimits

0xb931,	// (0x0008ceef) bg_popup_call2_rect_pane

0xb6d6,	// (0x0008cc94) call2_cli_visual_graphic_pane

0xb6d6,	// (0x0008cc94) call2_cli_visual_text_pane

0x9e66,	// (0x0008b424) smil_status_volume_pane_g3

0x0002,

0xb949,	// (0x0008cf07) call2_cli_visual_graphic_pane_g1

0xb949,	// (0x0008cf07) call2_cli_visual_graphic_pane_g2

0xb949,	// (0x0008cf07) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x00090a79) call2_cli_visual_graphic_pane_g

0xe83b,	// (0x0008fdf9) bg_popup_call2_rect_pane_g1

0xbd25,	// (0x0008d2e3) bg_popup_call2_rect_pane_g2

0xe843,	// (0x0008fe01) bg_popup_call2_rect_pane_g3

0xe84b,	// (0x0008fe09) bg_popup_call2_rect_pane_g4

0xe853,	// (0x0008fe11) bg_popup_call2_rect_pane_g5

0xe85b,	// (0x0008fe19) bg_popup_call2_rect_pane_g6

0xe863,	// (0x0008fe21) bg_popup_call2_rect_pane_g7

0xe86b,	// (0x0008fe29) bg_popup_call2_rect_pane_g8

0xe873,	// (0x0008fe31) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x00090a80) bg_popup_call2_rect_pane_g

0xe87b,	// (0x0008fe39) bg_popup_call2_bubble_pane_g1

0xe883,	// (0x0008fe41) bg_popup_call2_bubble_pane_g2

0xe88b,	// (0x0008fe49) bg_popup_call2_bubble_pane_g3

0xe893,	// (0x0008fe51) bg_popup_call2_bubble_pane_g4

0xe89b,	// (0x0008fe59) bg_popup_call2_bubble_pane_g5

0xe8a3,	// (0x0008fe61) bg_popup_call2_bubble_pane_g6

0xe8ab,	// (0x0008fe69) bg_popup_call2_bubble_pane_g7

0xe8b3,	// (0x0008fe71) bg_popup_call2_bubble_pane_g8

0xe8bb,	// (0x0008fe79) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x00090a93) bg_popup_call2_bubble_pane_g

0x12c6,	// (0x00082884) aid_cale_week_size_cell_pane

0x186c,	// (0x00082e2a) aid_cams_cif_uncrop_pane_ParamLimits

0x186c,	// (0x00082e2a) aid_cams_cif_uncrop_pane

0x19c2,	// (0x00082f80) aid_cams_size_cell_ParamLimits

0x19c2,	// (0x00082f80) aid_cams_size_cell

0x19d6,	// (0x00082f94) grid_cams_pane_ParamLimits

0x19f0,	// (0x00082fae) linegrid_cams_pane_ParamLimits

0x1ad7,	// (0x00083095) call_video_pane_t1

0x1af5,	// (0x000830b3) call_video_pane_t2

0x0001,

0xf1e2,	// (0x000907a0) call_video_pane_t

0x1f23,	// (0x000834e1) aid_cale_month_size_cell_pane_ParamLimits

0x1f23,	// (0x000834e1) aid_cale_month_size_cell_pane

0xf55a,	// (0x00090b18) smil_status_volume_pane_g

0x9e73,	// (0x0008b431) volume_smil_pane_ParamLimits

0x9c20,	// (0x0008b1de) aid_popup2_width_pane

0x124b,	// (0x00082809) cell_qdial_pane_g4_ParamLimits

0x124b,	// (0x00082809) cell_qdial_pane_g4

0x2c87,	// (0x00084245) aid_blid_cardinal_pane_ParamLimits

0x2c93,	// (0x00084251) aid_blid_destination_pane_ParamLimits

0x2c93,	// (0x00084251) aid_blid_destination_pane

0xb931,	// (0x0008ceef) bg_popup_call_poc_act_pane_ParamLimits

0xb931,	// (0x0008ceef) bg_popup_call_poc_act_pane

0xb931,	// (0x0008ceef) bg_popup_call_poc_inact_pane_ParamLimits

0xb931,	// (0x0008ceef) bg_popup_call_poc_inact_pane

0xe8c3,	// (0x0008fe81) bg_popup_call_poc_act_pane_g1

0xe8cb,	// (0x0008fe89) bg_popup_call_poc_act_pane_g2

0xe8d3,	// (0x0008fe91) bg_popup_call_poc_act_pane_g3

0xe893,	// (0x0008fe51) bg_popup_call_poc_act_pane_g4

0xe89b,	// (0x0008fe59) bg_popup_call_poc_act_pane_g5

0xe8db,	// (0x0008fe99) bg_popup_call_poc_act_pane_g6

0xe8ab,	// (0x0008fe69) bg_popup_call_poc_act_pane_g7

0xe8e3,	// (0x0008fea1) bg_popup_call_poc_act_pane_g8

0xb6d6,	// (0x0008cc94) main_usb_pane

0x9e1a,	// (0x0008b3d8) popup_cale_lunar_info_window

0x1dcf,	// (0x0008338d) im_reading_pane_t1_ParamLimits

0xbf0d,	// (0x0008d4cb) list_im_pane_ParamLimits

0xbf1e,	// (0x0008d4dc) scroll_pane_cp07_ParamLimits

0xb6d6,	// (0x0008cc94) grid_highlight_pane_cp012

0xb931,	// (0x0008ceef) mup_scale_pane_ParamLimits

0xd178,	// (0x0008e736) main_usb_pane_g1_ParamLimits

0xd178,	// (0x0008e736) main_usb_pane_g1

0x3635,	// (0x00084bf3) main_usb_pane_g2_ParamLimits

0x3635,	// (0x00084bf3) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x00090abd) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x00090abd) main_usb_pane_g

0x364b,	// (0x00084c09) main_usb_pane_t1_ParamLimits

0x364b,	// (0x00084c09) main_usb_pane_t1

0x365d,	// (0x00084c1b) main_usb_pane_t2_ParamLimits

0x365d,	// (0x00084c1b) main_usb_pane_t2

0x366f,	// (0x00084c2d) main_usb_pane_t3_ParamLimits

0x366f,	// (0x00084c2d) main_usb_pane_t3

0x3681,	// (0x00084c3f) main_usb_pane_t4_ParamLimits

0x3681,	// (0x00084c3f) main_usb_pane_t4

0x3693,	// (0x00084c51) main_usb_pane_t5_ParamLimits

0x3693,	// (0x00084c51) main_usb_pane_t5

0x36a5,	// (0x00084c63) main_usb_pane_t6_ParamLimits

0x36a5,	// (0x00084c63) main_usb_pane_t6

0x0005,

0xf504,	// (0x00090ac2) main_usb_pane_t_ParamLimits

0x2c36,	// (0x000841f4) aid_text_placing

0x2c3f,	// (0x000841fd) main_location2_pane_t1_ParamLimits

0x2c51,	// (0x0008420f) main_location2_pane_t2_ParamLimits

0x2c63,	// (0x00084221) main_location2_pane_t3_ParamLimits

0x2c75,	// (0x00084233) main_location2_pane_t4_ParamLimits

0x2c75,	// (0x00084233) main_location2_pane_t4

0xf31e,	// (0x000908dc) main_location2_pane_t_ParamLimits

0xb95f,	// (0x0008cf1d) find_pinb_pane_g2_ParamLimits

0xb95f,	// (0x0008cf1d) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x00090658) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x00090658) find_pinb_pane_g

0xb96b,	// (0x0008cf29) find_pinb_pane_t1_ParamLimits

0xb97d,	// (0x0008cf3b) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0009065d) find_pinb_pane_t_ParamLimits

0xb6d6,	// (0x0008cc94) main_call3_pane

0x240e,	// (0x000839cc) cale_month_day_heading_pane_t1_ParamLimits

0x2494,	// (0x00083a52) cale_month_day_heading_pane_t2_ParamLimits

0x250d,	// (0x00083acb) cale_month_day_heading_pane_t3_ParamLimits

0x2586,	// (0x00083b44) cale_month_day_heading_pane_t4_ParamLimits

0x2607,	// (0x00083bc5) cale_month_day_heading_pane_t5_ParamLimits

0x2690,	// (0x00083c4e) cale_month_day_heading_pane_t6_ParamLimits

0x2719,	// (0x00083cd7) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x000907d8) cale_month_day_heading_pane_t_ParamLimits

0xc168,	// (0x0008d726) smil_status_volume_pane

0x30c8,	// (0x00084686) postcard_address_pane_ParamLimits

0x30c8,	// (0x00084686) postcard_address_pane

0x30da,	// (0x00084698) postcard_message_pane_ParamLimits

0x30da,	// (0x00084698) postcard_message_pane

0x3613,	// (0x00084bd1) call2_cli_visual_pane_t1_ParamLimits

0x3613,	// (0x00084bd1) call2_cli_visual_pane_t1

0xea5a,	// (0x00090018) postcard_message_pane_t1_ParamLimits

0xea5a,	// (0x00090018) postcard_message_pane_t1

0xea42,	// (0x00090000) postcard_address_pane_t1_ParamLimits

0xea42,	// (0x00090000) postcard_address_pane_t1

0x3d91,	// (0x0008534f) popup_call3_audio_in_window_ParamLimits

0x3d91,	// (0x0008534f) popup_call3_audio_in_window

0x3c1c,	// (0x000851da) bg_popup_call3_in_pane_ParamLimits

0x3c1c,	// (0x000851da) bg_popup_call3_in_pane

0x3c92,	// (0x00085250) popup_call3_audio_in_window_g1_ParamLimits

0x3c92,	// (0x00085250) popup_call3_audio_in_window_g1

0x3cb2,	// (0x00085270) popup_call3_audio_in_window_g2_ParamLimits

0x3cb2,	// (0x00085270) popup_call3_audio_in_window_g2

0x3cd2,	// (0x00085290) popup_call3_audio_in_window_g3_ParamLimits

0x3cd2,	// (0x00085290) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x00090b1f) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x00090b1f) popup_call3_audio_in_window_g

0x3d03,	// (0x000852c1) popup_call3_audio_in_window_t1_ParamLimits

0x3d03,	// (0x000852c1) popup_call3_audio_in_window_t1

0x3d41,	// (0x000852ff) popup_call3_audio_in_window_t2_ParamLimits

0x3d41,	// (0x000852ff) popup_call3_audio_in_window_t2

0x3d7f,	// (0x0008533d) popup_call3_audio_in_window_t3_ParamLimits

0x3d7f,	// (0x0008533d) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x00090b28) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x00090b28) popup_call3_audio_in_window_t

0xbe1e,	// (0x0008d3dc) bg_popup_call3_rect_pane

0xe83b,	// (0x0008fdf9) bg_popup_call3_rect_pane_g1

0xbd25,	// (0x0008d2e3) bg_popup_call3_rect_pane_g2

0xe843,	// (0x0008fe01) bg_popup_call3_rect_pane_g3

0xe84b,	// (0x0008fe09) bg_popup_call3_rect_pane_g4

0xe853,	// (0x0008fe11) bg_popup_call3_rect_pane_g5

0xe85b,	// (0x0008fe19) bg_popup_call3_rect_pane_g6

0xe863,	// (0x0008fe21) bg_popup_call3_rect_pane_g7

0xb2ab,	// (0x0008c869) mup_visualizer_osc_pane

0xb2ab,	// (0x0008c869) mup_visualizer_spec_pane

0x3c4c,	// (0x0008520a) call3_video_qcif_pane_ParamLimits

0x3c4c,	// (0x0008520a) call3_video_qcif_pane

0x3c5f,	// (0x0008521d) call3_video_qcif_uncrop_pane_ParamLimits

0x3c5f,	// (0x0008521d) call3_video_qcif_uncrop_pane

0x3c6d,	// (0x0008522b) call3_video_subqcif_pane_ParamLimits

0x3c6d,	// (0x0008522b) call3_video_subqcif_pane

0x3c81,	// (0x0008523f) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c81,	// (0x0008523f) call3_video_subqcif_uncrop_pane

0x3cf2,	// (0x000852b0) popup_call3_audio_in_window_g4_ParamLimits

0x3cf2,	// (0x000852b0) popup_call3_audio_in_window_g4

0xb2ab,	// (0x0008c869) mup_spec_half_pane

0xb2ab,	// (0x0008c869) mup_spec_half_pane_cp

0xb2ab,	// (0x0008c869) mup_osc_middle_pane

0xbe54,	// (0x0008d412) mup_visualizer_osc_pane_g1

0xe9f5,	// (0x0008ffb3) mup_spec_bar_pane_ParamLimits

0xe9f5,	// (0x0008ffb3) mup_spec_bar_pane

0xbe54,	// (0x0008d412) mup_spec_bar_pane_g1

0xbe54,	// (0x0008d412) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x00090956) mup_spec_bar_pane_g

0x12c6,	// (0x00082884) aid_cale_week_size_cell_pane_ParamLimits

0x12e0,	// (0x0008289e) bg_cale_heading_pane_ParamLimits

0xbd80,	// (0x0008d33e) bg_cale_pane_cp01_ParamLimits

0x12f8,	// (0x000828b6) cale_week_corner_pane_ParamLimits

0x1317,	// (0x000828d5) cale_week_day_heading_pane_ParamLimits

0x1334,	// (0x000828f2) cale_week_scroll_pane_g1_ParamLimits

0x1347,	// (0x00082905) cale_week_scroll_pane_g2_ParamLimits

0x135f,	// (0x0008291d) cale_week_scroll_pane_g3_ParamLimits

0x1377,	// (0x00082935) cale_week_scroll_pane_g4_ParamLimits

0x138f,	// (0x0008294d) cale_week_scroll_pane_g5_ParamLimits

0x13af,	// (0x0008296d) cale_week_scroll_pane_g6_ParamLimits

0x13cf,	// (0x0008298d) cale_week_scroll_pane_g7_ParamLimits

0x13ef,	// (0x000829ad) cale_week_scroll_pane_g8_ParamLimits

0x1413,	// (0x000829d1) cale_week_scroll_pane_g9_ParamLimits

0x142b,	// (0x000829e9) cale_week_scroll_pane_g10_ParamLimits

0x1443,	// (0x00082a01) cale_week_scroll_pane_g11_ParamLimits

0x145b,	// (0x00082a19) cale_week_scroll_pane_g12_ParamLimits

0x1473,	// (0x00082a31) cale_week_scroll_pane_g13_ParamLimits

0x1473,	// (0x00082a31) cale_week_scroll_pane_g14_ParamLimits

0x1473,	// (0x00082a31) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x000906e9) cale_week_scroll_pane_g_ParamLimits

0x14af,	// (0x00082a6d) cale_week_time_pane_ParamLimits

0x14d3,	// (0x00082a91) grid_cale_week_pane_ParamLimits

0xbd9d,	// (0x0008d35b) listscroll_cale_week_pane_t1

0xbdaf,	// (0x0008d36d) scroll_pane_cp08_ParamLimits

0x1f83,	// (0x00083541) cale_month_corner_pane_ParamLimits

0xc13e,	// (0x0008d6fc) cale_month_pane_t1

0x23a1,	// (0x0008395f) cale_month_week_pane_ParamLimits

0x2ab6,	// (0x00084074) popup_call_status_window_g1_ParamLimits

0x2aca,	// (0x00084088) popup_call_status_window_g2_ParamLimits

0x2ade,	// (0x0008409c) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00090863) popup_call_status_window_g_ParamLimits

0xc4fa,	// (0x0008dab8) aid_call2_pane

0x048c,	// (0x00081a4a) msg_header_pane_g1

0x30c8,	// (0x00084686) postcard_address2_pane_ParamLimits

0x30c8,	// (0x00084686) postcard_address2_pane

0x30da,	// (0x00084698) postcard_message2_pane_ParamLimits

0x30da,	// (0x00084698) postcard_message2_pane

0x3bed,	// (0x000851ab) message2_row_pane_ParamLimits

0x3bed,	// (0x000851ab) message2_row_pane

0x3c09,	// (0x000851c7) address2_row_pane_ParamLimits

0x3c09,	// (0x000851c7) address2_row_pane

0xe9c2,	// (0x0008ff80) postcard_message2_row_pane_g1

0xe9ca,	// (0x0008ff88) postcard_message2_row_pane_t1

0xe9c2,	// (0x0008ff80) address2_row_pane_g1

0xe9ca,	// (0x0008ff88) address2_row_pane_t1

0x1803,	// (0x00082dc1) aid_size_cell_vorec

0xb6d6,	// (0x0008cc94) main_rss_pane

0xe9d8,	// (0x0008ff96) rss_list_single_pane_ParamLimits

0xe9d8,	// (0x0008ff96) rss_list_single_pane

0xe9e6,	// (0x0008ffa4) rss_list_single_pane_t1

0xe9e6,	// (0x0008ffa4) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x00090b13) rss_list_single_pane_t

0xb6d6,	// (0x0008cc94) main_camera2_pane

0xb6d6,	// (0x0008cc94) main_video2_pane

0x9e88,	// (0x0008b446) cams_zoom_pane_cp2_ParamLimits

0x9e88,	// (0x0008b446) cams_zoom_pane_cp2

0x9e88,	// (0x0008b446) image2_vga_pane_ParamLimits

0x9e88,	// (0x0008b446) image2_vga_pane

0x9e96,	// (0x0008b454) main_camera2_pane_g1_ParamLimits

0x9e96,	// (0x0008b454) main_camera2_pane_g1

0x9e96,	// (0x0008b454) main_camera2_pane_g2_ParamLimits

0x9e96,	// (0x0008b454) main_camera2_pane_g2

0x9e96,	// (0x0008b454) main_camera2_pane_g3_ParamLimits

0x9e96,	// (0x0008b454) main_camera2_pane_g3

0x9e96,	// (0x0008b454) main_camera2_pane_g4_ParamLimits

0x9e96,	// (0x0008b454) main_camera2_pane_g4

0x9e96,	// (0x0008b454) main_camera2_pane_g5_ParamLimits

0x9e96,	// (0x0008b454) main_camera2_pane_g5

0x9e96,	// (0x0008b454) main_camera2_pane_g6_ParamLimits

0x9e96,	// (0x0008b454) main_camera2_pane_g6

0x9e96,	// (0x0008b454) main_camera2_pane_g7_ParamLimits

0x9e96,	// (0x0008b454) main_camera2_pane_g7

0x9e96,	// (0x0008b454) main_camera2_pane_g8_ParamLimits

0x9e96,	// (0x0008b454) main_camera2_pane_g8

0x0008,

0xf571,	// (0x00090b2f) main_camera2_pane_g_ParamLimits

0xf571,	// (0x00090b2f) main_camera2_pane_g

0x3db3,	// (0x00085371) main_camera2_pane_t1_ParamLimits

0x3db3,	// (0x00085371) main_camera2_pane_t1

0x3db3,	// (0x00085371) main_camera2_pane_t2_ParamLimits

0x3db3,	// (0x00085371) main_camera2_pane_t2

0x3db3,	// (0x00085371) main_camera2_pane_t3_ParamLimits

0x3db3,	// (0x00085371) main_camera2_pane_t3

0x3db3,	// (0x00085371) main_camera2_pane_t4_ParamLimits

0x3db3,	// (0x00085371) main_camera2_pane_t4

0x0006,

0xf584,	// (0x00090b42) main_camera2_pane_t_ParamLimits

0xf584,	// (0x00090b42) main_camera2_pane_t

0x3dc7,	// (0x00085385) cams_zoom_pane_cp4_ParamLimits

0x3dc7,	// (0x00085385) cams_zoom_pane_cp4

0xe603,	// (0x0008fbc1) image2_cif_pane_ParamLimits

0xe603,	// (0x0008fbc1) image2_cif_pane

0xb2b5,	// (0x0008c873) image2_subqcif_pane_ParamLimits

0xb2b5,	// (0x0008c873) image2_subqcif_pane

0x3dd5,	// (0x00085393) main_video2_pane_g1_ParamLimits

0x3dd5,	// (0x00085393) main_video2_pane_g1

0x3dd5,	// (0x00085393) main_video2_pane_g2_ParamLimits

0x3dd5,	// (0x00085393) main_video2_pane_g2

0x3dd5,	// (0x00085393) main_video2_pane_g3_ParamLimits

0x3dd5,	// (0x00085393) main_video2_pane_g3

0x3dd5,	// (0x00085393) main_video2_pane_g4_ParamLimits

0x3dd5,	// (0x00085393) main_video2_pane_g4

0x3dd5,	// (0x00085393) main_video2_pane_g5_ParamLimits

0x3dd5,	// (0x00085393) main_video2_pane_g5

0x3dd5,	// (0x00085393) main_video2_pane_g6_ParamLimits

0x3dd5,	// (0x00085393) main_video2_pane_g6

0x0005,

0xf593,	// (0x00090b51) main_video2_pane_g_ParamLimits

0xf593,	// (0x00090b51) main_video2_pane_g

0x3de3,	// (0x000853a1) main_video2_pane_t1_ParamLimits

0x3de3,	// (0x000853a1) main_video2_pane_t1

0x3de3,	// (0x000853a1) main_video2_pane_t2_ParamLimits

0x3de3,	// (0x000853a1) main_video2_pane_t2

0x3de3,	// (0x000853a1) main_video2_pane_t3_ParamLimits

0x3de3,	// (0x000853a1) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x00090b5e) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x00090b5e) main_video2_pane_t

0x3739,	// (0x00084cf7) call_muted_g2

0x0001,

0xf547,	// (0x00090b05) call_muted_g

0xb6d6,	// (0x0008cc94) main_mup2_pane

0xc949,	// (0x0008df07) main_mup2_pane_g1_ParamLimits

0xc949,	// (0x0008df07) main_mup2_pane_g1

0xc949,	// (0x0008df07) main_mup2_pane_g2_ParamLimits

0xc949,	// (0x0008df07) main_mup2_pane_g2

0xbe54,	// (0x0008d412) main_mup_pane_g13_cp1

0xb2ab,	// (0x0008c869) mup_volume_pane_cp1

0xc949,	// (0x0008df07) main_mup2_pane_g4_ParamLimits

0xc949,	// (0x0008df07) main_mup2_pane_g4

0xc949,	// (0x0008df07) main_mup2_pane_g5_ParamLimits

0xc949,	// (0x0008df07) main_mup2_pane_g5

0xc949,	// (0x0008df07) main_mup2_pane_g6_ParamLimits

0xc949,	// (0x0008df07) main_mup2_pane_g6

0xc949,	// (0x0008df07) main_mup2_pane_g7_ParamLimits

0xc949,	// (0x0008df07) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x00090b65) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x00090b65) main_mup2_pane_g

0xc957,	// (0x0008df15) main_mup2_pane_t1_ParamLimits

0xc957,	// (0x0008df15) main_mup2_pane_t1

0xc957,	// (0x0008df15) main_mup2_pane_t2_ParamLimits

0xc957,	// (0x0008df15) main_mup2_pane_t2

0xc957,	// (0x0008df15) main_mup2_pane_t3_ParamLimits

0xc957,	// (0x0008df15) main_mup2_pane_t3

0xc957,	// (0x0008df15) main_mup2_pane_t4_ParamLimits

0xc957,	// (0x0008df15) main_mup2_pane_t4

0xc957,	// (0x0008df15) main_mup2_pane_t5_ParamLimits

0xc957,	// (0x0008df15) main_mup2_pane_t5

0xc957,	// (0x0008df15) main_mup2_pane_t6_ParamLimits

0xc957,	// (0x0008df15) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x00090b74) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x00090b74) main_mup2_pane_t

0xc96b,	// (0x0008df29) mup2_visualizer_pane_ParamLimits

0xc96b,	// (0x0008df29) mup2_visualizer_pane

0xc96b,	// (0x0008df29) mup_progress_pane_cp_ParamLimits

0xc96b,	// (0x0008df29) mup_progress_pane_cp

0xea76,	// (0x00090034) mup_volume_pane_cp_ParamLimits

0xea76,	// (0x00090034) mup_volume_pane_cp

0xb9ac,	// (0x0008cf6a) mup2_visualizer_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) mup2_visualizer_pane_g1

0xb9ba,	// (0x0008cf78) mup2_visualizer_pane_g2_ParamLimits

0xb9ba,	// (0x0008cf78) mup2_visualizer_pane_g2

0xb9ba,	// (0x0008cf78) mup2_visualizer_pane_g3_ParamLimits

0xb9ba,	// (0x0008cf78) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x00090662) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x00090662) mup2_visualizer_pane_g

0xd2c1,	// (0x0008e87f) aid_size_cell_fmradio

0x38eb,	// (0x00084ea9) aid_height_parent_landcape

0xbf9c,	// (0x0008d55a) wml_content_pane_cp

0xbfa4,	// (0x0008d562) wml_tabs_pane

0xbfad,	// (0x0008d56b) popup_wml_miniature_window

0xbfb5,	// (0x0008d573) scroll_pane_cp021

0xbfc9,	// (0x0008d587) wml_content_pane_comp8

0xb6d6,	// (0x0008cc94) bg_popup_sub_pane_cp05

0xea8c,	// (0x0009004a) popup_wml_miniature_window_g1

0xea94,	// (0x00090052) wml_miniature_view_pane

0x3df7,	// (0x000853b5) aid_size_wml_view

0x3dff,	// (0x000853bd) wml_miniature_view_pane_g1

0x3e08,	// (0x000853c6) wml_miniature_view_pane_g2

0x3e11,	// (0x000853cf) wml_miniature_view_pane_g3

0x3e19,	// (0x000853d7) wml_miniature_view_pane_g4

0x3e21,	// (0x000853df) wml_miniature_view_pane_g5

0x3e29,	// (0x000853e7) wml_miniature_view_pane_g6

0x3e31,	// (0x000853ef) wml_miniature_view_pane_g7

0x3e39,	// (0x000853f7) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x00090b81) wml_miniature_view_pane_g

0xea9c,	// (0x0009005a) background_graphic_ParamLimits

0xea9c,	// (0x0009005a) background_graphic

0xeaa8,	// (0x00090066) wml_tabs_2_pane

0xeab1,	// (0x0009006f) wml_tabs_3_pane_ParamLimits

0xeab1,	// (0x0009006f) wml_tabs_3_pane

0xeac3,	// (0x00090081) wml_tabs_4_pane_ParamLimits

0xeac3,	// (0x00090081) wml_tabs_4_pane

0xead9,	// (0x00090097) wml_tabs_5_pane_ParamLimits

0xead9,	// (0x00090097) wml_tabs_5_pane

0xeaf3,	// (0x000900b1) wml_tabs_pane_g2_ParamLimits

0xeaf3,	// (0x000900b1) wml_tabs_pane_g2

0xeb08,	// (0x000900c6) wml_tabs_pane_g3_ParamLimits

0xeb08,	// (0x000900c6) wml_tabs_pane_g3

0xeb1d,	// (0x000900db) wml_tabs_2_active_pane_ParamLimits

0xeb1d,	// (0x000900db) wml_tabs_2_active_pane

0xeb1d,	// (0x000900db) wml_tabs_2_passive_pane_ParamLimits

0xeb1d,	// (0x000900db) wml_tabs_2_passive_pane

0x3e41,	// (0x000853ff) wml_tabs_3_active_pane_cp_ParamLimits

0x3e41,	// (0x000853ff) wml_tabs_3_active_pane_cp

0x3e56,	// (0x00085414) wml_tabs_3_passive_pane_ParamLimits

0x3e56,	// (0x00085414) wml_tabs_3_passive_pane

0x3e69,	// (0x00085427) wml_tabs_3_passive_pane_cp_ParamLimits

0x3e69,	// (0x00085427) wml_tabs_3_passive_pane_cp

0x3e80,	// (0x0008543e) tabs_4_active_pane

0x3e88,	// (0x00085446) tabs_4_passive_pane

0x3e92,	// (0x00085450) tabs_4_passive_pane_cp

0x3e9a,	// (0x00085458) tabs_4_passive_pane_cp2

0x362d,	// (0x00084beb) aid_height_text

0xc96b,	// (0x0008df29) mup_volume_cont_pane_ParamLimits

0xc96b,	// (0x0008df29) mup_volume_cont_pane

0xb2ab,	// (0x0008c869) aid_size_cell_pinb

0xb2ab,	// (0x0008c869) aid_size_list_pinb

0xc96b,	// (0x0008df29) mup2_volume_cont_pane_ParamLimits

0xc96b,	// (0x0008df29) mup2_volume_cont_pane

0x9eb8,	// (0x0008b476) mup2_volume_cont_pane_g1_ParamLimits

0x9eb8,	// (0x0008b476) mup2_volume_cont_pane_g1

0x0cd6,	// (0x00082294) aid_size_cell_touch_ParamLimits

0x0cd6,	// (0x00082294) aid_size_cell_touch

0x0f02,	// (0x000824c0) touch_pane_ParamLimits

0x0f02,	// (0x000824c0) touch_pane

0xb2ab,	// (0x0008c869) main_rss2_pane

0xeb34,	// (0x000900f2) listscroll_rss2_pane

0xeb3d,	// (0x000900fb) rss2_navigation_pane

0xeb45,	// (0x00090103) list_rss2_pane

0xc631,	// (0x0008dbef) scroll_pane_cp22

0xeb4d,	// (0x0009010b) rss2_navigation_pane_g1

0xeb56,	// (0x00090114) rss2_navigation_pane_g2

0xeb5e,	// (0x0009011c) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x00090b92) rss2_navigation_pane_g

0xeb66,	// (0x00090124) rss2_navigation_pane_t1

0x3ea4,	// (0x00085462) rss2_list_single_pane_ParamLimits

0x3ea4,	// (0x00085462) rss2_list_single_pane

0xeb74,	// (0x00090132) rss2_list_single_pane_t2

0xeb82,	// (0x00090140) rss2_list_single_pane_t3_ParamLimits

0xeb82,	// (0x00090140) rss2_list_single_pane_t3

0xeb9f,	// (0x0009015d) rss2_list_single_pane_t4

0x29a3,	// (0x00083f61) smil_status_pane_g1

0xb2b5,	// (0x0008c873) main_image2_pane_ParamLimits

0xb2b5,	// (0x0008c873) main_image2_pane

0x9e96,	// (0x0008b454) main_camera2_pane_g9_ParamLimits

0x9e96,	// (0x0008b454) main_camera2_pane_g9

0x3db3,	// (0x00085371) main_camera2_pane_t5_ParamLimits

0x3db3,	// (0x00085371) main_camera2_pane_t5

0x9ea4,	// (0x0008b462) main_camera2_pane_t6_ParamLimits

0x9ea4,	// (0x0008b462) main_camera2_pane_t6

0x3eb9,	// (0x00085477) main_image2_pane_g1_ParamLimits

0x3eb9,	// (0x00085477) main_image2_pane_g1

0x3301,	// (0x000848bf) smil2_video_pane_ParamLimits

0x3301,	// (0x000848bf) smil2_video_pane

0x9c3c,	// (0x0008b1fa) aid_zoom_text_primary_cp

0x9c7b,	// (0x0008b239) popup_preview_fixed_window

0xbf05,	// (0x0008d4c3) im_reading_pane_g1

0x3da5,	// (0x00085363) cams2_bc_adjust_pane_cp_ParamLimits

0x3da5,	// (0x00085363) cams2_bc_adjust_pane_cp

0xc96b,	// (0x0008df29) cams2_bc_adjust_pane_ParamLimits

0xc96b,	// (0x0008df29) cams2_bc_adjust_pane

0xbe54,	// (0x0008d412) cams2_bc_adjust_pane_g1

0xb2ab,	// (0x0008c869) cams2_slider_pane

0xbe54,	// (0x0008d412) cams2_slider_pane_g1

0xbe54,	// (0x0008d412) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x00090b99) cams2_slider_pane_g

0x0fca,	// (0x00082588) calc_display_pane_ParamLimits

0x0fef,	// (0x000825ad) calc_paper_pane_ParamLimits

0x1012,	// (0x000825d0) grid_calc_pane_ParamLimits

0x9da1,	// (0x0008b35f) popup_clock_digital_window_t1_ParamLimits

0xd25e,	// (0x0008e81c) main_image_pane_t1

0x0fac,	// (0x0008256a) aid_size_cell_calc_ParamLimits

0x0fac,	// (0x0008256a) aid_size_cell_calc

0x3931,	// (0x00084eef) popup_blid_sat_info2_window_ParamLimits

0x3931,	// (0x00084eef) popup_blid_sat_info2_window

0xebad,	// (0x0009016b) aid_size_cell_blid

0xe603,	// (0x0008fbc1) bg_popup_window_pane_cp07

0xebca,	// (0x00090188) grid_popup_blid_pane

0xebd4,	// (0x00090192) heading_pane_cp05_ParamLimits

0xebd4,	// (0x00090192) heading_pane_cp05

0xec9e,	// (0x0009025c) cell_popup_blid_pane_ParamLimits

0xec9e,	// (0x0009025c) cell_popup_blid_pane

0xecc2,	// (0x00090280) cell_popup_blid_pane_g1

0xecca,	// (0x00090288) cell_popup_blid_pane_t1

0xc96b,	// (0x0008df29) mup2_indicator_pane_ParamLimits

0xc96b,	// (0x0008df29) mup2_indicator_pane

0xb2ab,	// (0x0008c869) mup2_visualizer_osc_pane

0xea76,	// (0x00090034) mup2_visualizer_spec_pane_ParamLimits

0xea76,	// (0x00090034) mup2_visualizer_spec_pane

0xb2ab,	// (0x0008c869) mup2_spec_half_pane

0xb2ab,	// (0x0008c869) mup2_spec_half_pane_cp

0xecd8,	// (0x00090296) mup2_spec_bar_pane_ParamLimits

0xecd8,	// (0x00090296) mup2_spec_bar_pane

0xbe54,	// (0x0008d412) mup2_spec_bar_pane_g1

0xecf7,	// (0x000902b5) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x00090bbf) mup2_spec_bar_pane_g

0xb2ab,	// (0x0008c869) mup2_osc_middle_pane

0xbe54,	// (0x0008d412) mup2_visualizer_osc_pane_g1

0xb2e3,	// (0x0008c8a1) popup_number_entry_window_t1_ParamLimits

0xb2f6,	// (0x0008c8b4) popup_number_entry_window_t2_ParamLimits

0xb308,	// (0x0008c8c6) popup_number_entry_window_t3_ParamLimits

0x0f54,	// (0x00082512) popup_number_entry_window_t5_ParamLimits

0x0f54,	// (0x00082512) popup_number_entry_window_t5

0xf045,	// (0x00090603) popup_number_entry_window_t_ParamLimits

0xb31a,	// (0x0008c8d8) text_title_cp2_ParamLimits

0x9de0,	// (0x0008b39e) aid_hotspot_pointer_text2_pane

0x9e06,	// (0x0008b3c4) main_viewer_pane_g9_ParamLimits

0x9e06,	// (0x0008b3c4) main_viewer_pane_g9

0xc13e,	// (0x0008d6fc) cale_month_pane_t1_ParamLimits

0xc17b,	// (0x0008d739) bg_cale_pane_ParamLimits

0xc193,	// (0x0008d751) list_cale_pane_ParamLimits

0xc1a4,	// (0x0008d762) listscroll_cale_day_pane_t1

0xc1b6,	// (0x0008d774) scroll_pane_cp09_ParamLimits

0x2d60,	// (0x0008431e) main_mup_eq_pane_t1_ParamLimits

0x2d60,	// (0x0008431e) main_mup_eq_pane_t1

0x2d7a,	// (0x00084338) main_mup_eq_pane_t2_ParamLimits

0x2d7a,	// (0x00084338) main_mup_eq_pane_t2

0x2d94,	// (0x00084352) main_mup_eq_pane_t3_ParamLimits

0x2d94,	// (0x00084352) main_mup_eq_pane_t3

0x2db0,	// (0x0008436e) main_mup_eq_pane_t4_ParamLimits

0x2db0,	// (0x0008436e) main_mup_eq_pane_t4

0x2dcc,	// (0x0008438a) main_mup_eq_pane_t5_ParamLimits

0x2dcc,	// (0x0008438a) main_mup_eq_pane_t5

0x2de8,	// (0x000843a6) main_mup_eq_pane_t6_ParamLimits

0x2de8,	// (0x000843a6) main_mup_eq_pane_t6

0x2dfc,	// (0x000843ba) main_mup_eq_pane_t7_ParamLimits

0x2dfc,	// (0x000843ba) main_mup_eq_pane_t7

0x2e10,	// (0x000843ce) main_mup_eq_pane_t8_ParamLimits

0x2e10,	// (0x000843ce) main_mup_eq_pane_t8

0x2e24,	// (0x000843e2) main_mup_eq_pane_t9_ParamLimits

0x2e24,	// (0x000843e2) main_mup_eq_pane_t9

0x2e3e,	// (0x000843fc) main_mup_eq_pane_t10_ParamLimits

0x2e3e,	// (0x000843fc) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x00090962) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x00090962) main_mup_eq_pane_t

0x2eed,	// (0x000844ab) mup_equalizer_pane_cp5_ParamLimits

0x2f01,	// (0x000844bf) mup_equalizer_pane_cp6_ParamLimits

0x2f15,	// (0x000844d3) mup_equalizer_pane_cp7_ParamLimits

0xb2ab,	// (0x0008c869) main_gallery_pane

0xea14,	// (0x0008ffd2) smil2_volume_pane

0xea1c,	// (0x0008ffda) smil_status_volume_pane_g1_ParamLimits

0xea2f,	// (0x0008ffed) smil_status_volume_pane_g2_ParamLimits

0x9e66,	// (0x0008b424) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x00090b18) smil_status_volume_pane_g_ParamLimits

0xe603,	// (0x0008fbc1) bg_popup_window_pane_cp07_ParamLimits

0xebb5,	// (0x00090173) blid_firmament_pane

0xb2b5,	// (0x0008c873) aid_size_cell_gallery_ParamLimits

0xb2b5,	// (0x0008c873) aid_size_cell_gallery

0xb2b5,	// (0x0008c873) grid_gallery_pane_ParamLimits

0xb2b5,	// (0x0008c873) grid_gallery_pane

0xe603,	// (0x0008fbc1) cell_gallery_pane_ParamLimits

0xe603,	// (0x0008fbc1) cell_gallery_pane

0xb2b5,	// (0x0008c873) bg_cell_gallery_focus_pane_ParamLimits

0xb2b5,	// (0x0008c873) bg_cell_gallery_focus_pane

0xb9ac,	// (0x0008cf6a) cell_gallery_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) cell_gallery_pane_g1

0xb9ac,	// (0x0008cf6a) cell_gallery_pane_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) cell_gallery_pane_g2

0xb9ac,	// (0x0008cf6a) cell_gallery_pane_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) cell_gallery_pane_g3

0xb9ba,	// (0x0008cf78) cell_gallery_pane_g4_ParamLimits

0xb9ba,	// (0x0008cf78) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x00090bc4) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x00090bc4) cell_gallery_pane_g

0xed01,	// (0x000902bf) bg_cell_gallery_focus_pane_g1

0xed09,	// (0x000902c7) bg_cell_gallery_focus_pane_g2

0xed11,	// (0x000902cf) bg_cell_gallery_focus_pane_g3

0xed19,	// (0x000902d7) bg_cell_gallery_focus_pane_g4

0xed21,	// (0x000902df) bg_cell_gallery_focus_pane_g5

0xed29,	// (0x000902e7) bg_cell_gallery_focus_pane_g6

0xed31,	// (0x000902ef) bg_cell_gallery_focus_pane_g7

0xed39,	// (0x000902f7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x00090bcd) bg_cell_gallery_focus_pane_g

0xed41,	// (0x000902ff) aid_firma_cardinal

0xed55,	// (0x00090313) blid_firmament_pane_t1

0xed6c,	// (0x0009032a) blid_firmament_pane_t2

0xed83,	// (0x00090341) blid_firmament_pane_t3

0xed9a,	// (0x00090358) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x00090bde) blid_firmament_pane_t

0xedb1,	// (0x0009036f) blid_sat_info_pane

0xbe54,	// (0x0008d412) blid_sat_info_pane_g1

0xbe54,	// (0x0008d412) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x00090956) blid_sat_info_pane_g

0xedc1,	// (0x0009037f) blid_sat_info_pane_t1

0xedcf,	// (0x0009038d) smil2_volume_content_pane

0xedd8,	// (0x00090396) smil2_volume_pane_g1

0xbcec,	// (0x0008d2aa) smil2_volume_content_pane_g1

0xede0,	// (0x0009039e) smil2_volume_content_pane_g2

0xede9,	// (0x000903a7) smil2_volume_content_pane_g3

0xedf2,	// (0x000903b0) smil2_volume_content_pane_g4

0xedfb,	// (0x000903b9) smil2_volume_content_pane_g5

0xee04,	// (0x000903c2) smil2_volume_content_pane_g6

0xee0d,	// (0x000903cb) smil2_volume_content_pane_g7

0xee16,	// (0x000903d4) smil2_volume_content_pane_g8

0xee1f,	// (0x000903dd) smil2_volume_content_pane_g9

0xee28,	// (0x000903e6) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x00090be7) smil2_volume_content_pane_g

0x1587,	// (0x00082b45) cale_week_day_heading_pane_t1_ParamLimits

0x15b1,	// (0x00082b6f) cale_week_day_heading_pane_t2_ParamLimits

0x15e0,	// (0x00082b9e) cale_week_day_heading_pane_t3_ParamLimits

0x160f,	// (0x00082bcd) cale_week_day_heading_pane_t4_ParamLimits

0x163e,	// (0x00082bfc) cale_week_day_heading_pane_t5_ParamLimits

0x1675,	// (0x00082c33) cale_week_day_heading_pane_t6_ParamLimits

0x16ac,	// (0x00082c6a) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0009070a) cale_week_day_heading_pane_t_ParamLimits

0xbdcc,	// (0x0008d38a) bg_cale_side_pane_ParamLimits

0x16d6,	// (0x00082c94) cale_week_time_pane_t1_ParamLimits

0x16f0,	// (0x00082cae) cale_week_time_pane_t2_ParamLimits

0x170a,	// (0x00082cc8) cale_week_time_pane_t3_ParamLimits

0x1724,	// (0x00082ce2) cale_week_time_pane_t4_ParamLimits

0x173e,	// (0x00082cfc) cale_week_time_pane_t5_ParamLimits

0x1758,	// (0x00082d16) cale_week_time_pane_t6_ParamLimits

0x1772,	// (0x00082d30) cale_week_time_pane_t7_ParamLimits

0x178c,	// (0x00082d4a) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x00090719) cale_week_time_pane_t_ParamLimits

0x17a6,	// (0x00082d64) cell_cale_week_pane_g2_ParamLimits

0xbdcc,	// (0x0008d38a) bg_cale_side_pane_cp01_ParamLimits

0x27aa,	// (0x00083d68) cale_month_week_pane_t1_ParamLimits

0x27c3,	// (0x00083d81) cale_month_week_pane_t2_ParamLimits

0x27dc,	// (0x00083d9a) cale_month_week_pane_t3_ParamLimits

0x27f5,	// (0x00083db3) cale_month_week_pane_t4_ParamLimits

0x280e,	// (0x00083dcc) cale_month_week_pane_t5_ParamLimits

0x2827,	// (0x00083de5) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x000907e7) cale_month_week_pane_t_ParamLimits

0x9d1d,	// (0x0008b2db) cell_cale_month_pane_g1_ParamLimits

0xb2ab,	// (0x0008c869) main_cale_event_viewer_pane

0xb2ab,	// (0x0008c869) listscroll_cale_event_viewer_pane

0xee31,	// (0x000903ef) list_cale_ev_pane

0xee39,	// (0x000903f7) scroll_pane_cp023

0xee45,	// (0x00090403) field_cale_ev_pane_ParamLimits

0xee45,	// (0x00090403) field_cale_ev_pane

0xee63,	// (0x00090421) field_cale_ev_content_pane_ParamLimits

0xee63,	// (0x00090421) field_cale_ev_content_pane

0xee6f,	// (0x0009042d) field_cale_ev_pane_g1_ParamLimits

0xee6f,	// (0x0009042d) field_cale_ev_pane_g1

0xee7b,	// (0x00090439) field_cale_ev_pane_g2_ParamLimits

0xee7b,	// (0x00090439) field_cale_ev_pane_g2

0xee93,	// (0x00090451) field_cale_ev_pane_g3_ParamLimits

0xee93,	// (0x00090451) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x00090bfc) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x00090bfc) field_cale_ev_pane_g

0xeeab,	// (0x00090469) field_cale_ev_pane_t1_ParamLimits

0xeeab,	// (0x00090469) field_cale_ev_pane_t1

0xbd3f,	// (0x0008d2fd) field_cale_ev_content_pane_t1_ParamLimits

0xbd3f,	// (0x0008d2fd) field_cale_ev_content_pane_t1

0xca0e,	// (0x0008dfcc) bg_button_pane_cp01

0x12b4,	// (0x00082872) listscroll_cale_week_pane_ParamLimits

0xbd77,	// (0x0008d335) popup_toolbar_window_cp01

0xbd9d,	// (0x0008d35b) listscroll_cale_week_pane_t1_ParamLimits

0x12b4,	// (0x00082872) listscroll_cale_day_pane_ParamLimits

0xbd77,	// (0x0008d335) popup_toolbar_window_cp02

0xc1a4,	// (0x0008d762) listscroll_cale_day_pane_t1_ParamLimits

0x12b4,	// (0x00082872) main_cale_month_pane_ParamLimits

0x9e51,	// (0x0008b40f) popup_toolbar_window_cp03_ParamLimits

0x9e51,	// (0x0008b40f) popup_toolbar_window_cp03

0x31c9,	// (0x00084787) main_image_pane_g2_ParamLimits

0x31c9,	// (0x00084787) main_image_pane_g2

0x31da,	// (0x00084798) main_image_pane_g3_ParamLimits

0x31da,	// (0x00084798) main_image_pane_g3

0x0002,

0xf436,	// (0x000909f4) main_image_pane_g_ParamLimits

0xf436,	// (0x000909f4) main_image_pane_g

0xd25e,	// (0x0008e81c) main_image_pane_t1_ParamLimits

0x31eb,	// (0x000847a9) main_image_pane_t2_ParamLimits

0x31eb,	// (0x000847a9) main_image_pane_t2

0x31fd,	// (0x000847bb) main_image_pane_t3_ParamLimits

0x31fd,	// (0x000847bb) main_image_pane_t3

0x3225,	// (0x000847e3) main_image_pane_t4_ParamLimits

0x3225,	// (0x000847e3) main_image_pane_t4

0x0003,

0xf43d,	// (0x000909fb) main_image_pane_t_ParamLimits

0xf43d,	// (0x000909fb) main_image_pane_t

0x3245,	// (0x00084803) popup_image_details_window_cp01

0x324f,	// (0x0008480d) popup_toobar_trans_pane_cp01_ParamLimits

0x324f,	// (0x0008480d) popup_toobar_trans_pane_cp01

0x3a10,	// (0x00084fce) popup_image_details_window_ParamLimits

0x3a10,	// (0x00084fce) popup_image_details_window

0x9e24,	// (0x0008b3e2) popup_image_focus_window

0x9e88,	// (0x0008b446) camera2_autofocus_pane_ParamLimits

0x9e88,	// (0x0008b446) camera2_autofocus_pane

0xb2ab,	// (0x0008c869) bg_popup_sub_pane_cp06

0xeec2,	// (0x00090480) popup_image_focus_window_g1

0xeeca,	// (0x00090488) popup_image_focus_window_g2

0xeed2,	// (0x00090490) popup_image_focus_window_g3

0xeeda,	// (0x00090498) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x00090c03) popup_image_focus_window_g

0xeee2,	// (0x000904a0) popup_image_focus_window_t1

0xeef0,	// (0x000904ae) popup_image_focus_window_t2

0xef00,	// (0x000904be) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x00090c0c) popup_image_focus_window_t

0xb9ac,	// (0x0008cf6a) camera2_autofocus_pane_g1

0xb2b5,	// (0x0008c873) bg_tb_trans_pane_cp01

0xef0e,	// (0x000904cc) popup_image_details_window_g1

0xef21,	// (0x000904df) popup_image_details_window_g2

0x0002,

0xf660,	// (0x00090c1e) popup_image_details_window_g

0xef4a,	// (0x00090508) popup_image_details_window_t1

0xef5c,	// (0x0009051a) popup_image_details_window_t2

0xef75,	// (0x00090533) popup_image_details_window_t3

0xef89,	// (0x00090547) popup_image_details_window_t4

0xefa4,	// (0x00090562) popup_image_details_window_t5

0x0004,

0xf667,	// (0x00090c25) popup_image_details_window_t

0xba0a,	// (0x0008cfc8) bg_calc_paper_pane_ParamLimits

0xb2ab,	// (0x0008c869) grid_highlight_pane_cp013

0x9c8d,	// (0x0008b24b) list_calc_pane_ParamLimits

0x9c9f,	// (0x0008b25d) scroll_pane_cp024

0xba1e,	// (0x0008cfdc) bg_calc_display_pane_ParamLimits

0x1110,	// (0x000826ce) calc_display_pane_t1_ParamLimits

0x1125,	// (0x000826e3) calc_display_pane_t2_ParamLimits

0x9ca7,	// (0x0008b265) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0009068a) calc_display_pane_t_ParamLimits

0x11e5,	// (0x000827a3) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x000906a7) cell_calc_pane_g

0x11ee,	// (0x000827ac) cell_calc_pane_t1

0xba73,	// (0x0008d031) grid_highlight_pane_cp02_ParamLimits

0xba89,	// (0x0008d047) toolbar_button_pane_cp01_ParamLimits

0xba89,	// (0x0008d047) toolbar_button_pane_cp01

0xd2a3,	// (0x0008e861) temp_image_control_pane_ParamLimits

0xd2a3,	// (0x0008e861) temp_image_control_pane

0xb2b5,	// (0x0008c873) main_mp3_pane

0xefbe,	// (0x0009057c) temp_image_control_pane_g1_ParamLimits

0xefbe,	// (0x0009057c) temp_image_control_pane_g1

0xefcc,	// (0x0009058a) temp_image_control_pane_g2_ParamLimits

0xefcc,	// (0x0009058a) temp_image_control_pane_g2

0xefde,	// (0x0009059c) temp_image_control_pane_g3_ParamLimits

0xefde,	// (0x0009059c) temp_image_control_pane_g3

0x3ecf,	// (0x0008548d) temp_image_control_pane_g4_ParamLimits

0x3ecf,	// (0x0008548d) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x00090c30) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x00090c30) temp_image_control_pane_g

0xefbe,	// (0x0009057c) main_mp3_pane_g1

0x3ee2,	// (0x000854a0) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x00090c39) main_mp3_pane_g

0xf013,	// (0x000905d1) main_mp3_pane_t1

0xb9ba,	// (0x0008cf78) main_camera_pane_g8_ParamLimits

0xb9ba,	// (0x0008cf78) main_camera_pane_g8

0x1970,	// (0x00082f2e) main_video_pane_g7_ParamLimits

0x1970,	// (0x00082f2e) main_video_pane_g7

0xc715,	// (0x0008dcd3) main_camera2_pane_t7_ParamLimits

0xc715,	// (0x0008dcd3) main_camera2_pane_t7

0xbf5c,	// (0x0008d51a) scroll_pane_cp025_ParamLimits

0xbf5c,	// (0x0008d51a) scroll_pane_cp025

0xbf70,	// (0x0008d52e) scroll_pane_cp026_ParamLimits

0xbf70,	// (0x0008d52e) scroll_pane_cp026

0xbf7f,	// (0x0008d53d) wml_content_pane_ParamLimits

0xb2ab,	// (0x0008c869) main_touch_calib_pane

0x3fb6,	// (0x00085574) main_touch_calib_pane_g1

0x3fc8,	// (0x00085586) main_touch_calib_pane_g2

0x3fda,	// (0x00085598) main_touch_calib_pane_g3

0x3fec,	// (0x000855aa) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x00090c57) main_touch_calib_pane_g

0x3ffe,	// (0x000855bc) main_touch_calib_pane_t1

0x4018,	// (0x000855d6) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x00090c60) main_touch_calib_pane_t

0xc70d,	// (0x0008dccb) mup_progress_pane_cp02

0xc762,	// (0x0008dd20) navi_pane_g1

0xc81d,	// (0x0008dddb) navi_pane_mp_t3

0xb2b5,	// (0x0008c873) main_mp3_pane_ParamLimits

0x3b95,	// (0x00085153) navi_pane_ParamLimits

0xefbe,	// (0x0009057c) main_mp3_pane_g1_ParamLimits

0x3ee2,	// (0x000854a0) main_mp3_pane_g2_ParamLimits

0x3ef0,	// (0x000854ae) main_mp3_pane_g3_ParamLimits

0x3ef0,	// (0x000854ae) main_mp3_pane_g3

0x3efe,	// (0x000854bc) main_mp3_pane_g4_ParamLimits

0x3efe,	// (0x000854bc) main_mp3_pane_g4

0xb9ac,	// (0x0008cf6a) main_mp3_pane_g5_ParamLimits

0xb9ac,	// (0x0008cf6a) main_mp3_pane_g5

0xefee,	// (0x000905ac) main_mp3_pane_g6_ParamLimits

0xefee,	// (0x000905ac) main_mp3_pane_g6

0xeffb,	// (0x000905b9) main_mp3_pane_g7_ParamLimits

0xeffb,	// (0x000905b9) main_mp3_pane_g7

0xf007,	// (0x000905c5) main_mp3_pane_g8_ParamLimits

0xf007,	// (0x000905c5) main_mp3_pane_g8

0xf67b,	// (0x00090c39) main_mp3_pane_g_ParamLimits

0x3f0a,	// (0x000854c8) main_mp3_pane_t2

0x3f18,	// (0x000854d6) main_mp3_pane_t3

0xf021,	// (0x000905df) main_mp3_pane_t4

0xf02f,	// (0x000905ed) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x00090c4a) main_mp3_pane_t

0xf03d,	// (0x000905fb) mup_progress_pane_cp01

0x9c3c,	// (0x0008b1fa) aid_zoom_text_secondary2

0xee31,	// (0x000903ef) list_cale_ev2_pane

0xee39,	// (0x000903f7) scroll_pane_cp023_ParamLimits

0x406e,	// (0x0008562c) field_cale_ev2_pane_ParamLimits

0x406e,	// (0x0008562c) field_cale_ev2_pane

0x408e,	// (0x0008564c) field_cale_ev2_pane_g1_ParamLimits

0x408e,	// (0x0008564c) field_cale_ev2_pane_g1

0x409a,	// (0x00085658) field_cale_ev2_pane_g2_ParamLimits

0x409a,	// (0x00085658) field_cale_ev2_pane_g2

0x40b2,	// (0x00085670) field_cale_ev2_pane_g3_ParamLimits

0x40b2,	// (0x00085670) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x00090c6b) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x00090c6b) field_cale_ev2_pane_g

0x9eda,	// (0x0008b498) field_cale_ev2_pane_t1_ParamLimits

0x9eda,	// (0x0008b498) field_cale_ev2_pane_t1

0x9ef1,	// (0x0008b4af) field_cale_ev2_pane_t2_ParamLimits

0x9ef1,	// (0x0008b4af) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x00090c74) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x00090c74) field_cale_ev2_pane_t

0x307e,	// (0x0008463c) main_postcard_pane_g5_ParamLimits

0x307e,	// (0x0008463c) main_postcard_pane_g5

0x3094,	// (0x00084652) main_postcard_pane_g6_ParamLimits

0x3094,	// (0x00084652) main_postcard_pane_g6

0xb2b5,	// (0x0008c873) camera2_autofocus_pane_cp_ParamLimits

0xb2b5,	// (0x0008c873) camera2_autofocus_pane_cp

0xb2b5,	// (0x0008c873) main_mup3_pane

0x410e,	// (0x000856cc) main_mup3_pane_g1_ParamLimits

0x410e,	// (0x000856cc) main_mup3_pane_g1

0x4130,	// (0x000856ee) main_mup3_pane_g2_ParamLimits

0x4130,	// (0x000856ee) main_mup3_pane_g2

0x41ae,	// (0x0008576c) main_mup3_pane_g3_ParamLimits

0x41ae,	// (0x0008576c) main_mup3_pane_g3

0x41f4,	// (0x000857b2) main_mup3_pane_g4_ParamLimits

0x41f4,	// (0x000857b2) main_mup3_pane_g4

0x423a,	// (0x000857f8) main_mup3_pane_g5_ParamLimits

0x423a,	// (0x000857f8) main_mup3_pane_g5

0x4280,	// (0x0008583e) main_mup3_pane_g6_ParamLimits

0x4280,	// (0x0008583e) main_mup3_pane_g6

0xb9ba,	// (0x0008cf78) main_mup3_pane_g7_ParamLimits

0xb9ba,	// (0x0008cf78) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x00090c84) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x00090c84) main_mup3_pane_g

0x42fe,	// (0x000858bc) main_mup3_pane_t1_ParamLimits

0x42fe,	// (0x000858bc) main_mup3_pane_t1

0x4372,	// (0x00085930) main_mup3_pane_t2_ParamLimits

0x4372,	// (0x00085930) main_mup3_pane_t2

0x4446,	// (0x00085a04) main_mup3_pane_t4_ParamLimits

0x4446,	// (0x00085a04) main_mup3_pane_t4

0x449c,	// (0x00085a5a) main_mup3_pane_t5_ParamLimits

0x449c,	// (0x00085a5a) main_mup3_pane_t5

0x4558,	// (0x00085b16) main_mup3_pane_t6_ParamLimits

0x4558,	// (0x00085b16) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x00090c95) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x00090c95) main_mup3_pane_t

0x4610,	// (0x00085bce) mup3_progress_pane_ParamLimits

0x4610,	// (0x00085bce) mup3_progress_pane

0x46a6,	// (0x00085c64) popup_mup3_control_window_ParamLimits

0x46a6,	// (0x00085c64) popup_mup3_control_window

0x46c2,	// (0x00085c80) popup_mup3_text_window

0x46e0,	// (0x00085c9e) mup3_progress_pane_t1

0x46ff,	// (0x00085cbd) mup3_progress_pane_t2

0x471e,	// (0x00085cdc) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x00090ca2) mup3_progress_pane_t

0x473b,	// (0x00085cf9) mup_progress_pane_cp03

0xb2ab,	// (0x0008c869) bg_tb_trans_pane_cp04

0x474b,	// (0x00085d09) mup3_volume_pane

0x4753,	// (0x00085d11) popup_mup3_control_window_g1

0x475c,	// (0x00085d1a) mup3_volume_pane_g1

0x4765,	// (0x00085d23) mup3_volume_pane_g2

0x476e,	// (0x00085d2c) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x00090ca9) mup3_volume_pane_g

0xb2ab,	// (0x0008c869) bg_tb_trans_pane_cp03

0x4777,	// (0x00085d35) popup_mup3_text_window_g1

0x477f,	// (0x00085d3d) popup_mup3_text_window_t1

0xba66,	// (0x0008d024) list_calc_item_pane_g1_ParamLimits

0xeb2b,	// (0x000900e9) mup_volume_pane_cp_g1

0x4032,	// (0x000855f0) main_touch_calib_pane_t3

0x4046,	// (0x00085604) main_touch_calib_pane_t4

0x405a,	// (0x00085618) main_touch_calib_pane_t5

0x9c18,	// (0x0008b1d6) aid_cell_size_toolbar2

0x9c20,	// (0x0008b1de) aid_popup3_width_pane

0x9c2c,	// (0x0008b1ea) aid_zoom_text_msg_primary

0x184b,	// (0x00082e09) vorec_t7

0xba2a,	// (0x0008cfe8) bg_calc_paper_pane_g1_ParamLimits

0xba36,	// (0x0008cff4) bg_calc_paper_pane_g2_ParamLimits

0xba42,	// (0x0008d000) bg_calc_paper_pane_g3_ParamLimits

0xba4e,	// (0x0008d00c) bg_calc_paper_pane_g4_ParamLimits

0xba5a,	// (0x0008d018) bg_calc_paper_pane_g5_ParamLimits

0x116f,	// (0x0008272d) bg_calc_paper_pane_g6_ParamLimits

0x117e,	// (0x0008273c) bg_calc_paper_pane_g7_ParamLimits

0x118d,	// (0x0008274b) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x00090691) bg_calc_paper_pane_g_ParamLimits

0x11a0,	// (0x0008275e) calc_bg_paper_pane_g9_ParamLimits

0xb2b5,	// (0x0008c873) image_qvga_pane_ParamLimits

0xb2b5,	// (0x0008c873) image_qvga_pane

0xb931,	// (0x0008ceef) bg_popup_sub_pane_cp04_ParamLimits

0xd1da,	// (0x0008e798) popup_mup_playback_window_g1_ParamLimits

0xd1e6,	// (0x0008e7a4) popup_mup_playback_window_t1_ParamLimits

0xd1fb,	// (0x0008e7b9) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x000909ef) popup_mup_playback_window_t_ParamLimits

0xb9ba,	// (0x0008cf78) main_mup2_pane_g3_ParamLimits

0xb9ba,	// (0x0008cf78) main_mup2_pane_g3

0x1b78,	// (0x00083136) popup_toolbar_window_cp04

0xdc6c,	// (0x0008f22a) popup_call2_audio_second_window_g3_ParamLimits

0xdc6c,	// (0x0008f22a) popup_call2_audio_second_window_g3

0xe084,	// (0x0008f642) popup_call2_audio_first_window_g4_ParamLimits

0xe084,	// (0x0008f642) popup_call2_audio_first_window_g4

0xe6c5,	// (0x0008fc83) popup_call2_audio_in_window_g4_ParamLimits

0xe6c5,	// (0x0008fc83) popup_call2_audio_in_window_g4

0x31ab,	// (0x00084769) aid_area_sk_bg_cut_ParamLimits

0x31ab,	// (0x00084769) aid_area_sk_bg_cut

0xd210,	// (0x0008e7ce) aid_area_sk_bg_cut_2_ParamLimits

0xd210,	// (0x0008e7ce) aid_area_sk_bg_cut_2

0xb2ab,	// (0x0008c869) aid_placing_details_win

0xb2ab,	// (0x0008c869) aid_placing_details_win_2

0xb9ac,	// (0x0008cf6a) camera2_autofocus_pane_g1_ParamLimits

0x0e9b,	// (0x00082459) popup_fixed_preview_cale_window_ParamLimits

0x0e9b,	// (0x00082459) popup_fixed_preview_cale_window

0xc89b,	// (0x0008de59) navi_slider_pane_g3

0xc8a4,	// (0x0008de62) navi_slider_pane_g4

0xc8ad,	// (0x0008de6b) navi_slider_pane_g5

0xc89b,	// (0x0008de59) navi_slider_pane_g6

0x9dc7,	// (0x0008b385) navi_slider_pane_g7

0xc9db,	// (0x0008df99) mup_scale_pane_g3

0xc9e4,	// (0x0008dfa2) mup_scale_pane_g4

0xc9ed,	// (0x0008dfab) mup_scale_pane_g5

0x2f29,	// (0x000844e7) mup_scale_pane_g6

0x2f32,	// (0x000844f0) mup_scale_pane_g7

0xbe54,	// (0x0008d412) cams2_slider_pane_g3

0xbe54,	// (0x0008d412) cams2_slider_pane_g4

0xbe54,	// (0x0008d412) cams2_slider_pane_g5

0xbe54,	// (0x0008d412) cams2_slider_pane_g6

0xbe54,	// (0x0008d412) cams2_slider_pane_g7

0xbe54,	// (0x0008d412) camera2_autofocus_pane_cp_g1

0xe99b,	// (0x0008ff59) bg_popup_preview_window_pane_cp02_ParamLimits

0xe99b,	// (0x0008ff59) bg_popup_preview_window_pane_cp02

0x478d,	// (0x00085d4b) list_fp_cale_pane_ParamLimits

0x478d,	// (0x00085d4b) list_fp_cale_pane

0x4799,	// (0x00085d57) popup_fixed_preview_cale_window_t1_ParamLimits

0x4799,	// (0x00085d57) popup_fixed_preview_cale_window_t1

0x47ab,	// (0x00085d69) popup_fixed_preview_cale_window_t2_ParamLimits

0x47ab,	// (0x00085d69) popup_fixed_preview_cale_window_t2

0x47c0,	// (0x00085d7e) popup_fixed_preview_cale_window_t3_ParamLimits

0x47c0,	// (0x00085d7e) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x00090cb0) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x00090cb0) popup_fixed_preview_cale_window_t

0x47e1,	// (0x00085d9f) list_single_fp_cale_pane_ParamLimits

0x47e1,	// (0x00085d9f) list_single_fp_cale_pane

0x47f6,	// (0x00085db4) list_single_fp_cale_pane_g1_ParamLimits

0x47f6,	// (0x00085db4) list_single_fp_cale_pane_g1

0x4802,	// (0x00085dc0) list_single_fp_cale_pane_g2_ParamLimits

0x4802,	// (0x00085dc0) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x00090cb7) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x00090cb7) list_single_fp_cale_pane_g

0x481b,	// (0x00085dd9) list_single_fp_cale_pane_t1_ParamLimits

0x481b,	// (0x00085dd9) list_single_fp_cale_pane_t1

0x482d,	// (0x00085deb) list_single_fp_cale_pane_t2_ParamLimits

0x482d,	// (0x00085deb) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x00090cbe) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x00090cbe) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb2ab,	// (0x0008c869) main_dialer_pane

0xb2ab,	// (0x0008c869) aid_cell_size_keypad

0xb2ab,	// (0x0008c869) dialer_ne_pane

0xb2ab,	// (0x0008c869) grid_dialer_command_1_pane

0xb2ab,	// (0x0008c869) grid_dialer_command_2_pane

0xb2ab,	// (0x0008c869) grid_dialer_keypad_pane

0x4860,	// (0x00085e1e) bg_popup_call_pane_cp06_ParamLimits

0x4860,	// (0x00085e1e) bg_popup_call_pane_cp06

0x4860,	// (0x00085e1e) dialer_ne_clear_pane_ParamLimits

0x4860,	// (0x00085e1e) dialer_ne_clear_pane

0xbe54,	// (0x0008d412) dialer_ne_pane_g1

0xc715,	// (0x0008dcd3) dialer_ne_pane_t1_ParamLimits

0xc715,	// (0x0008dcd3) dialer_ne_pane_t1

0x486e,	// (0x00085e2c) dialer_ne_pane_t2_ParamLimits

0x486e,	// (0x00085e2c) dialer_ne_pane_t2

0x4896,	// (0x00085e54) dialer_ne_pane_t3_ParamLimits

0x4896,	// (0x00085e54) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x00090cc3) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x00090cc3) dialer_ne_pane_t

0x4896,	// (0x00085e54) dialer_ne_pane_t3_copy1_ParamLimits

0x4896,	// (0x00085e54) dialer_ne_pane_t3_copy1

0x48c3,	// (0x00085e81) cell_dialer_keypad_pane_ParamLimits

0x48c3,	// (0x00085e81) cell_dialer_keypad_pane

0xb2b5,	// (0x0008c873) cell_dialer_command_1_pane_ParamLimits

0xb2b5,	// (0x0008c873) cell_dialer_command_1_pane

0x48da,	// (0x00085e98) cell_dialer_command_2_pane_ParamLimits

0x48da,	// (0x00085e98) cell_dialer_command_2_pane

0xb2b5,	// (0x0008c873) bg_button_pane_cp02_ParamLimits

0xb2b5,	// (0x0008c873) bg_button_pane_cp02

0xb9ac,	// (0x0008cf6a) cell_dialer_keypad_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) cell_dialer_keypad_pane_g1

0xb2b5,	// (0x0008c873) bg_button_pane_cp03_ParamLimits

0xb2b5,	// (0x0008c873) bg_button_pane_cp03

0xb9ac,	// (0x0008cf6a) cell_dialer_command_1_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) cell_dialer_command_1_pane_g1

0xb2ab,	// (0x0008c869) bg_button_pane_cp04

0xbe54,	// (0x0008d412) cell_dialer_command_2_pane_g1

0xb2ab,	// (0x0008c869) bg_button_pane_cp06

0xbe54,	// (0x0008d412) dialer_ne_clear_pane_g1

0xc76e,	// (0x0008dd2c) navi_pane_g2

0xc79c,	// (0x0008dd5a) navi_pane_g3

0x0002,

0xf334,	// (0x000908f2) navi_pane_g

0xc82b,	// (0x0008dde9) navi_pane_mv_g2

0xc852,	// (0x0008de10) navi_pane_mv_g5

0x2d0c,	// (0x000842ca) navi_pane_mv_t1

0xba1e,	// (0x0008cfdc) main_clock2_pane

0xb2b5,	// (0x0008c873) main_clock2_list_pane_ParamLimits

0xb2b5,	// (0x0008c873) main_clock2_list_pane

0x498a,	// (0x00085f48) main_clock2_pane_t1_ParamLimits

0x498a,	// (0x00085f48) main_clock2_pane_t1

0x49c5,	// (0x00085f83) main_clock2_pane_t2_ParamLimits

0x49c5,	// (0x00085f83) main_clock2_pane_t2

0x0004,

0xf711,	// (0x00090ccf) main_clock2_pane_t_ParamLimits

0xf711,	// (0x00090ccf) main_clock2_pane_t

0x4a65,	// (0x00086023) popup_clock_analogue_window_cp03_ParamLimits

0x4a65,	// (0x00086023) popup_clock_analogue_window_cp03

0x4a8a,	// (0x00086048) popup_clock_digital_window_cp02_ParamLimits

0x4a8a,	// (0x00086048) popup_clock_digital_window_cp02

0x4b03,	// (0x000860c1) main_clock2_list_single_pane_ParamLimits

0x4b03,	// (0x000860c1) main_clock2_list_single_pane

0xbe1e,	// (0x0008d3dc) list_highlight_pane_cp05

0x4b15,	// (0x000860d3) main_clock2_list_single_pane_t1

0x1b78,	// (0x00083136) popup_toolbar_window_cp04_ParamLimits

0xb9ba,	// (0x0008cf78) camera2_autofocus_pane_g2_ParamLimits

0xb9ba,	// (0x0008cf78) camera2_autofocus_pane_g2

0xb9ba,	// (0x0008cf78) camera2_autofocus_pane_g3_ParamLimits

0xb9ba,	// (0x0008cf78) camera2_autofocus_pane_g3

0xb9ba,	// (0x0008cf78) camera2_autofocus_pane_g4_ParamLimits

0xb9ba,	// (0x0008cf78) camera2_autofocus_pane_g4

0xb9ba,	// (0x0008cf78) camera2_autofocus_pane_g5_ParamLimits

0xb9ba,	// (0x0008cf78) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x00090c13) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x00090c13) camera2_autofocus_pane_g

0x40ca,	// (0x00085688) camera2_autofocus_pane_cp_g2

0x40d2,	// (0x00085690) camera2_autofocus_pane_cp_g3

0x40da,	// (0x00085698) camera2_autofocus_pane_cp_g4

0x40e2,	// (0x000856a0) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x00090c79) camera2_autofocus_pane_cp_g

0xb2ab,	// (0x0008c869) popup_dialer_spcha_window

0xb2ab,	// (0x0008c869) bg_popup_sub_pane_cp07

0xb2ab,	// (0x0008c869) list_spcha_pane

0x4bc2,	// (0x00086180) list_single_spcha_pane_ParamLimits

0x4bc2,	// (0x00086180) list_single_spcha_pane

0xb2ab,	// (0x0008c869) list_highlight_pane_cp06

0xc383,	// (0x0008d941) list_single_spcha_pane_t1

0xe455,	// (0x0008fa13) popup_call2_audio_out_window_g4_ParamLimits

0xe455,	// (0x0008fa13) popup_call2_audio_out_window_g4

0xb2ab,	// (0x0008c869) main_imed2_pane

0x9e2c,	// (0x0008b3ea) popup_imed_adjust2_window

0x3a28,	// (0x00084fe6) popup_imed_trans_window_ParamLimits

0x3a28,	// (0x00084fe6) popup_imed_trans_window

0xec00,	// (0x000901be) popup_blid_sat_info2_window_t1

0xec0e,	// (0x000901cc) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x00090ba8) popup_blid_sat_info2_window_t

0x4bd4,	// (0x00086192) aid_size_cell_colour_35

0x4bf4,	// (0x000861b2) aid_size_cell_colour_112

0x4c14,	// (0x000861d2) aid_size_cell_effect

0xc96b,	// (0x0008df29) bg_tb_trans_pane_cp02

0xc2b5,	// (0x0008d873) heading_imed_pane

0x4c34,	// (0x000861f2) listscroll_imed_pane

0x4c40,	// (0x000861fe) heading_imed_pane_g1

0x4c48,	// (0x00086206) heading_imed_pane_t1

0x4c56,	// (0x00086214) grid_imed_colour_35_pane_ParamLimits

0x4c56,	// (0x00086214) grid_imed_colour_35_pane

0x4c6d,	// (0x0008622b) grid_imed_effect_pane

0x4c83,	// (0x00086241) list_imed_aspect_pane

0x4c8b,	// (0x00086249) scroll_pane_cp027_ParamLimits

0x4c8b,	// (0x00086249) scroll_pane_cp027

0x4c9c,	// (0x0008625a) cell_imed_effect_pane_ParamLimits

0x4c9c,	// (0x0008625a) cell_imed_effect_pane

0x4cc3,	// (0x00086281) cell_imed_colour_pane_ParamLimits

0x4cc3,	// (0x00086281) cell_imed_colour_pane

0x4d05,	// (0x000862c3) cell_imed_colour_pane_g1_ParamLimits

0x4d05,	// (0x000862c3) cell_imed_colour_pane_g1

0x4d16,	// (0x000862d4) hgihlgiht_grid_pane_cp016_ParamLimits

0x4d16,	// (0x000862d4) hgihlgiht_grid_pane_cp016

0x4d27,	// (0x000862e5) cell_imed_effect_pane_g1

0x4d2f,	// (0x000862ed) grid_highlight_pane_cp017

0x4d38,	// (0x000862f6) list_imed_single_pane_ParamLimits

0x4d38,	// (0x000862f6) list_imed_single_pane

0xb2ab,	// (0x0008c869) list_highlight_pane_cp07

0x4d4d,	// (0x0008630b) list_imed_aspect_pane_comp1_t1

0xc96b,	// (0x0008df29) bg_tb_trans_pane_cp05

0x4d6f,	// (0x0008632d) popup_imed_adjust2_window_g1

0x4d96,	// (0x00086354) popup_imed_adjust2_window_t1

0x4dae,	// (0x0008636c) slider_imed_adjust_pane

0x4dc2,	// (0x00086380) slider_imed_adjust_pane_g1

0x4dd2,	// (0x00086390) slider_imed_adjust_pane_g2

0x4de2,	// (0x000863a0) slider_imed_adjust_pane_g3

0x4df3,	// (0x000863b1) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x00090cec) slider_imed_adjust_pane_g

0x4e04,	// (0x000863c2) aid_size_cell_clipart2

0x4e10,	// (0x000863ce) grid_imed_clipart_pane

0x4e1a,	// (0x000863d8) scroll_pane_cp031

0x4e22,	// (0x000863e0) cell_imed_clipart_pane_ParamLimits

0x4e22,	// (0x000863e0) cell_imed_clipart_pane

0x4e44,	// (0x00086402) cell_imed_clipart_pane_g1

0xb2ab,	// (0x0008c869) grid_highlight_pane_cp014

0x4966,	// (0x00085f24) main_clock2_pane_g1_ParamLimits

0x4966,	// (0x00085f24) main_clock2_pane_g1

0x4aaa,	// (0x00086068) aid_call2_pane_cp10

0x4abc,	// (0x0008607a) aid_call_pane_cp10

0xc6af,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g1

0xc6af,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g2

0x4ace,	// (0x0008608c) popup_clock_analogue_window_cp10_g3

0x4ace,	// (0x0008608c) popup_clock_analogue_window_cp10_g4

0xc6af,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x00090cda) popup_clock_analogue_window_cp10_g

0x4ae4,	// (0x000860a2) popup_clock_analogue_window_cp10_t1

0x4b23,	// (0x000860e1) clock_digital_number_pane_cp10_ParamLimits

0x4b23,	// (0x000860e1) clock_digital_number_pane_cp10

0x4b3b,	// (0x000860f9) clock_digital_number_pane_cp11_ParamLimits

0x4b3b,	// (0x000860f9) clock_digital_number_pane_cp11

0x4b53,	// (0x00086111) clock_digital_number_pane_cp12_ParamLimits

0x4b53,	// (0x00086111) clock_digital_number_pane_cp12

0x4b6d,	// (0x0008612b) clock_digital_number_pane_cp13_ParamLimits

0x4b6d,	// (0x0008612b) clock_digital_number_pane_cp13

0x4b87,	// (0x00086145) clock_digital_separator_pane_cp10_ParamLimits

0x4b87,	// (0x00086145) clock_digital_separator_pane_cp10

0x4ba1,	// (0x0008615f) popup_clock_digital_window_cp02_t1_ParamLimits

0x4ba1,	// (0x0008615f) popup_clock_digital_window_cp02_t1

0xb929,	// (0x0008cee7) clock_digital_number_pane_cp10_g1

0xb929,	// (0x0008cee7) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x00090cf5) clock_digital_number_pane_cp10_g

0xb929,	// (0x0008cee7) clock_digital_separator_pane_cp10_g1

0xb929,	// (0x0008cee7) clock_digital_separator_pane_g2_cp10

0xc85a,	// (0x0008de18) navi_pane_vded_g4

0xc863,	// (0x0008de21) navi_pane_vded_g5

0xc86c,	// (0x0008de2a) navi_pane_vded_t1

0xb2ab,	// (0x0008c869) main_vded_pane

0x4e4d,	// (0x0008640b) main_vded_pane_g1

0x4e57,	// (0x00086415) main_vded_pane_g2

0x4e61,	// (0x0008641f) main_vded_pane_g3

0x0002,

0xf73c,	// (0x00090cfa) main_vded_pane_g

0x4e6b,	// (0x00086429) main_vded_pane_t1

0x4e79,	// (0x00086437) main_vded_pane_t2

0x0001,

0xf743,	// (0x00090d01) main_vded_pane_t

0x4e87,	// (0x00086445) vded_slider_pane

0x4e8f,	// (0x0008644d) vded_video_pane

0x4e97,	// (0x00086455) vded_video_pane_g1

0x4ea1,	// (0x0008645f) vded_video_pane_g2

0xbe54,	// (0x0008d412) vded_video_pane_g3

0x0002,

0xf748,	// (0x00090d06) vded_video_pane_g

0x4eaa,	// (0x00086468) vded_slider_pane_g1

0xeb2b,	// (0x000900e9) vded_slider_pane_g2

0x4eb3,	// (0x00086471) vded_slider_pane_g3

0x4ebc,	// (0x0008647a) vded_slider_pane_g4

0x4ec5,	// (0x00086483) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x00090d0d) vded_slider_pane_g

0x468e,	// (0x00085c4c) mup3_rocker_pane_ParamLimits

0x468e,	// (0x00085c4c) mup3_rocker_pane

0x4ece,	// (0x0008648c) mup3_control_keys_pane_g1

0x4ed6,	// (0x00086494) mup3_control_keys_pane_g2

0x4ede,	// (0x0008649c) mup3_control_keys_pane_g3

0x4ee6,	// (0x000864a4) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x00090d18) mup3_control_keys_pane_g

0x0ed2,	// (0x00082490) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ed2,	// (0x00082490) popup_toolbar2_fixed_window_cp01

0x46ca,	// (0x00085c88) popup_toolbar2_fixed_window_cp02_ParamLimits

0x46ca,	// (0x00085c88) popup_toolbar2_fixed_window_cp02

0xddde,	// (0x0008f39c) popup_call2_audio_second_window_t4_ParamLimits

0xddde,	// (0x0008f39c) popup_call2_audio_second_window_t4

0xe31a,	// (0x0008f8d8) popup_call2_audio_first_window_t6_ParamLimits

0xe31a,	// (0x0008f8d8) popup_call2_audio_first_window_t6

0xe558,	// (0x0008fb16) popup_call2_audio_out_window_t6_ParamLimits

0xe558,	// (0x0008fb16) popup_call2_audio_out_window_t6

0xb2ab,	// (0x0008c869) main_vitu_pane

0xb2b5,	// (0x0008c873) aid_size_cell_itu_ParamLimits

0xb2b5,	// (0x0008c873) aid_size_cell_itu

0xb2b5,	// (0x0008c873) bg_popup_window_pane_cp08_ParamLimits

0xb2b5,	// (0x0008c873) bg_popup_window_pane_cp08

0xb2b5,	// (0x0008c873) field_vitu_entry_pane_ParamLimits

0xb2b5,	// (0x0008c873) field_vitu_entry_pane

0xb2b5,	// (0x0008c873) grid_vitu_function_pane_ParamLimits

0xb2b5,	// (0x0008c873) grid_vitu_function_pane

0xb2b5,	// (0x0008c873) grid_vitu_itu_pane_ParamLimits

0xb2b5,	// (0x0008c873) grid_vitu_itu_pane

0xb2b5,	// (0x0008c873) cell_vitu_itu_pane_ParamLimits

0xb2b5,	// (0x0008c873) cell_vitu_itu_pane

0xb2b5,	// (0x0008c873) cell_vitu_function_pane_ParamLimits

0xb2b5,	// (0x0008c873) cell_vitu_function_pane

0xb2b5,	// (0x0008c873) bg_popup_sub_pane_cp08_ParamLimits

0xb2b5,	// (0x0008c873) bg_popup_sub_pane_cp08

0xbe26,	// (0x0008d3e4) field_vitu_entry_pane_t1_ParamLimits

0xbe26,	// (0x0008d3e4) field_vitu_entry_pane_t1

0x4ef6,	// (0x000864b4) field_vitu_entry_pane_t2_ParamLimits

0x4ef6,	// (0x000864b4) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x00090d21) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x00090d21) field_vitu_entry_pane_t

0xe603,	// (0x0008fbc1) bg_button_pane_cp05_ParamLimits

0xe603,	// (0x0008fbc1) bg_button_pane_cp05

0x4f13,	// (0x000864d1) cell_vitu_itu_pane_g1

0xc957,	// (0x0008df15) cell_vitu_itu_pane_t1_ParamLimits

0xc957,	// (0x0008df15) cell_vitu_itu_pane_t1

0xc957,	// (0x0008df15) cell_vitu_itu_pane_t2_ParamLimits

0xc957,	// (0x0008df15) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x00090d26) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x00090d26) cell_vitu_itu_pane_t

0xb2ab,	// (0x0008c869) bg_button_pane_cp07

0xbe54,	// (0x0008d412) cell_vitu_function_pane_g1

0x9c85,	// (0x0008b243) main_calc_pane_g1

0x0cfa,	// (0x000822b8) aid_visual_content_pane

0xb2ab,	// (0x0008c869) main_vradio_pane

0xb9ac,	// (0x0008cf6a) main_vradio_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) main_vradio_pane_g1

0xb9ba,	// (0x0008cf78) main_vradio_pane_g2_ParamLimits

0xb9ba,	// (0x0008cf78) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x00090d2d) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x00090d2d) main_vradio_pane_g

0xbe26,	// (0x0008d3e4) main_vradio_pane_t1_ParamLimits

0xbe26,	// (0x0008d3e4) main_vradio_pane_t1

0xbe26,	// (0x0008d3e4) main_vradio_pane_t2_ParamLimits

0xbe26,	// (0x0008d3e4) main_vradio_pane_t2

0xc715,	// (0x0008dcd3) main_vradio_pane_t3_ParamLimits

0xc715,	// (0x0008dcd3) main_vradio_pane_t3

0x0002,

0xf774,	// (0x00090d32) main_vradio_pane_t_ParamLimits

0xf774,	// (0x00090d32) main_vradio_pane_t

0xb2b5,	// (0x0008c873) vradio_rocker_control_pane_ParamLimits

0xb2b5,	// (0x0008c873) vradio_rocker_control_pane

0xb2b5,	// (0x0008c873) vradio_station_info_pane_ParamLimits

0xb2b5,	// (0x0008c873) vradio_station_info_pane

0xb2b5,	// (0x0008c873) vradio_frequency_info_pane_ParamLimits

0xb2b5,	// (0x0008c873) vradio_frequency_info_pane

0xbe54,	// (0x0008d412) vradio_station_info_pane_g1

0xc957,	// (0x0008df15) vradio_station_info_pane_t1_ParamLimits

0xc957,	// (0x0008df15) vradio_station_info_pane_t1

0xc715,	// (0x0008dcd3) vradio_station_info_pane_t2_ParamLimits

0xc715,	// (0x0008dcd3) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x00090d39) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x00090d39) vradio_station_info_pane_t

0xb2ab,	// (0x0008c869) vradio_tuning_pane

0x4f2f,	// (0x000864ed) vradio_rocker_control_pane_g1

0x4f39,	// (0x000864f7) vradio_rocker_control_pane_g2

0x4f41,	// (0x000864ff) vradio_rocker_control_pane_g3

0x4f4b,	// (0x00086509) vradio_rocker_control_pane_g4

0x4f55,	// (0x00086513) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x00090d3e) vradio_rocker_control_pane_g

0xbe54,	// (0x0008d412) vradio_frequency_info_pane_g1

0xbe26,	// (0x0008d3e4) vradio_frequency_info_pane_t1_ParamLimits

0xbe26,	// (0x0008d3e4) vradio_frequency_info_pane_t1

0x4f5f,	// (0x0008651d) vradio_tuning_pane_g1

0x4f6c,	// (0x0008652a) vradio_tuning_pane_t1

0x9c44,	// (0x0008b202) area_side_right_pane_ParamLimits

0x9c44,	// (0x0008b202) area_side_right_pane

0xe962,	// (0x0008ff20) status_small_pane_g1

0xe96a,	// (0x0008ff28) status_small_pane_g2

0xe973,	// (0x0008ff31) status_small_pane_g3

0xe97c,	// (0x0008ff3a) status_small_pane_g4

0x0003,

0xf54c,	// (0x00090b0a) status_small_pane_g

0xe985,	// (0x0008ff43) status_small_pane_t1

0xb2ab,	// (0x0008c869) main_video3_pane

0x4f7b,	// (0x00086539) cams_zoom_vslider_pane

0x4f83,	// (0x00086541) image3_wide_pane_ParamLimits

0x4f83,	// (0x00086541) image3_wide_pane

0x4f9d,	// (0x0008655b) image3_wide_small_pane

0x4fa9,	// (0x00086567) main_video3_pane_g1_ParamLimits

0x4fa9,	// (0x00086567) main_video3_pane_g1

0x4fc5,	// (0x00086583) main_video3_pane_g2_ParamLimits

0x4fc5,	// (0x00086583) main_video3_pane_g2

0x0001,

0xf78b,	// (0x00090d49) main_video3_pane_g_ParamLimits

0xf78b,	// (0x00090d49) main_video3_pane_g

0x4fe1,	// (0x0008659f) main_video3_pane_t1_ParamLimits

0x4fe1,	// (0x0008659f) main_video3_pane_t1

0x500c,	// (0x000865ca) main_video3_pane_t2_ParamLimits

0x500c,	// (0x000865ca) main_video3_pane_t2

0x5037,	// (0x000865f5) main_video3_pane_t3_ParamLimits

0x5037,	// (0x000865f5) main_video3_pane_t3

0x0002,

0xf790,	// (0x00090d4e) main_video3_pane_t_ParamLimits

0xf790,	// (0x00090d4e) main_video3_pane_t

0x5064,	// (0x00086622) cams_zoom_vslider_pane_g1

0x506d,	// (0x0008662b) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x00090d55) cams_zoom_vslider_pane_g

0x5075,	// (0x00086633) small_slider_vertical_pane

0xbe54,	// (0x0008d412) small_slider_vertical_pane_g1

0xbe54,	// (0x0008d412) small_slider_vertical_pane_g2

0x507d,	// (0x0008663b) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x00090d5a) small_slider_vertical_pane_g

0xb2ab,	// (0x0008c869) main_hwr_training_pane

0x5086,	// (0x00086644) hwr_training_instruct_pane_ParamLimits

0x5086,	// (0x00086644) hwr_training_instruct_pane

0x50a8,	// (0x00086666) hwr_training_navi_pane_ParamLimits

0x50a8,	// (0x00086666) hwr_training_navi_pane

0x50c7,	// (0x00086685) hwr_training_write_pane_ParamLimits

0x50c7,	// (0x00086685) hwr_training_write_pane

0xb2ab,	// (0x0008c869) bg_frame_shadow_pane

0x5117,	// (0x000866d5) hwr_training_write_pane_g1

0x511f,	// (0x000866dd) hwr_training_write_pane_g2

0x5127,	// (0x000866e5) hwr_training_write_pane_g3

0x512f,	// (0x000866ed) hwr_training_write_pane_g4

0x5137,	// (0x000866f5) hwr_training_write_pane_g5

0x513f,	// (0x000866fd) hwr_training_write_pane_g6

0x5147,	// (0x00086705) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x00090d61) hwr_training_write_pane_g

0x9f06,	// (0x0008b4c4) hwr_training_navi_pane_g1_ParamLimits

0x9f06,	// (0x0008b4c4) hwr_training_navi_pane_g1

0x9f18,	// (0x0008b4d6) hwr_training_navi_pane_g2_ParamLimits

0x9f18,	// (0x0008b4d6) hwr_training_navi_pane_g2

0x9f2a,	// (0x0008b4e8) hwr_training_navi_pane_g3_ParamLimits

0x9f2a,	// (0x0008b4e8) hwr_training_navi_pane_g3

0x9f3a,	// (0x0008b4f8) hwr_training_navi_pane_g4_ParamLimits

0x9f3a,	// (0x0008b4f8) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x00090d70) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x00090d70) hwr_training_navi_pane_g

0x9f47,	// (0x0008b505) hwr_training_navi_pane_t1

0x515c,	// (0x0008671a) list_single_hwr_training_instruct_pane_ParamLimits

0x515c,	// (0x0008671a) list_single_hwr_training_instruct_pane

0x5171,	// (0x0008672f) list_single_hwr_training_instruct_pane_t1

0xed01,	// (0x000902bf) bg_frame_shadow_pane_g1

0x5180,	// (0x0008673e) bg_frame_shadow_pane_g2

0x5188,	// (0x00086746) bg_frame_shadow_pane_g3

0x5190,	// (0x0008674e) bg_frame_shadow_pane_g4

0x5198,	// (0x00086756) bg_frame_shadow_pane_g5

0x51a0,	// (0x0008675e) bg_frame_shadow_pane_g6

0x51a8,	// (0x00086766) bg_frame_shadow_pane_g7

0xbcfd,	// (0x0008d2bb) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x00090d7b) bg_frame_shadow_pane_g

0xb2ab,	// (0x0008c869) main_video_tele_dialer_pane

0x51b0,	// (0x0008676e) aid_size_cell_video_keypad_ParamLimits

0x51b0,	// (0x0008676e) aid_size_cell_video_keypad

0x51ca,	// (0x00086788) grid_video_dialer_keypad_pane_ParamLimits

0x51ca,	// (0x00086788) grid_video_dialer_keypad_pane

0x5216,	// (0x000867d4) video_down_pane_cp_ParamLimits

0x5216,	// (0x000867d4) video_down_pane_cp

0x5248,	// (0x00086806) cell_video_dialer_keypad_pane_ParamLimits

0x5248,	// (0x00086806) cell_video_dialer_keypad_pane

0x526a,	// (0x00086828) bg_button_pane_cp08_ParamLimits

0x526a,	// (0x00086828) bg_button_pane_cp08

0x5276,	// (0x00086834) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5276,	// (0x00086834) cell_video_dialer_keypad_pane_g1

0x4678,	// (0x00085c36) mup3_rocker2_pane_ParamLimits

0x4678,	// (0x00085c36) mup3_rocker2_pane

0xbe54,	// (0x0008d412) mup3_rocker2_pane_g1

0x3909,	// (0x00084ec7) main_dialer2_pane

0xb2ab,	// (0x0008c869) main_mp4_pane

0x9f73,	// (0x0008b531) main_mp4_pane_g1_ParamLimits

0x9f73,	// (0x0008b531) main_mp4_pane_g1

0x9f73,	// (0x0008b531) main_mp4_pane_g2_ParamLimits

0x9f73,	// (0x0008b531) main_mp4_pane_g2

0x52ad,	// (0x0008686b) main_mp4_pane_g3_ParamLimits

0x52ad,	// (0x0008686b) main_mp4_pane_g3

0x9f81,	// (0x0008b53f) main_mp4_pane_g4_ParamLimits

0x9f81,	// (0x0008b53f) main_mp4_pane_g4

0x9faf,	// (0x0008b56d) main_mp4_pane_g5_ParamLimits

0x9faf,	// (0x0008b56d) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x00090d9b) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x00090d9b) main_mp4_pane_g

0xa023,	// (0x0008b5e1) main_mp4_pane_t1_ParamLimits

0xa023,	// (0x0008b5e1) main_mp4_pane_t1

0xa07f,	// (0x0008b63d) main_mp4_pane_t2_ParamLimits

0xa07f,	// (0x0008b63d) main_mp4_pane_t2

0x52e9,	// (0x000868a7) main_mp4_pane_t3_ParamLimits

0x52e9,	// (0x000868a7) main_mp4_pane_t3

0xa0d1,	// (0x0008b68f) main_mp4_pane_t4_ParamLimits

0xa0d1,	// (0x0008b68f) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x00090dac) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x00090dac) main_mp4_pane_t

0xa115,	// (0x0008b6d3) mp4_progress_pane_ParamLimits

0xa115,	// (0x0008b6d3) mp4_progress_pane

0xa15f,	// (0x0008b71d) mp4_rocker_pane_ParamLimits

0xa15f,	// (0x0008b71d) mp4_rocker_pane

0x5317,	// (0x000868d5) mp4_progress_pane_t1

0x5330,	// (0x000868ee) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x00090db5) mp4_progress_pane_t

0x5349,	// (0x00086907) mup_progress_pane_cp04

0xbe54,	// (0x0008d412) mp4_rocker_pane_g1

0x535c,	// (0x0008691a) aid_cell_size_keypad2_ParamLimits

0x535c,	// (0x0008691a) aid_cell_size_keypad2

0x5372,	// (0x00086930) dialer2_ne_pane_ParamLimits

0x5372,	// (0x00086930) dialer2_ne_pane

0x538c,	// (0x0008694a) grid_dialer2_keypad_pane_ParamLimits

0x538c,	// (0x0008694a) grid_dialer2_keypad_pane

0xe603,	// (0x0008fbc1) bg_popup_call_pane_cp07_ParamLimits

0xe603,	// (0x0008fbc1) bg_popup_call_pane_cp07

0x53a8,	// (0x00086966) dialer2_ne_pane_t1_ParamLimits

0x53a8,	// (0x00086966) dialer2_ne_pane_t1

0x53f5,	// (0x000869b3) cell_dialer2_keypad_pane_ParamLimits

0x53f5,	// (0x000869b3) cell_dialer2_keypad_pane

0x5417,	// (0x000869d5) bg_button_pane_pane_cp04_ParamLimits

0x5417,	// (0x000869d5) bg_button_pane_pane_cp04

0x5423,	// (0x000869e1) cell_dialer2_keypad_pane_g1_ParamLimits

0x5423,	// (0x000869e1) cell_dialer2_keypad_pane_g1

0x1a4c,	// (0x0008300a) aid_placing_vt_set_content_ParamLimits

0x1a4c,	// (0x0008300a) aid_placing_vt_set_content

0x1a74,	// (0x00083032) aid_placing_vt_set_title_ParamLimits

0x1a74,	// (0x00083032) aid_placing_vt_set_title

0xb2ab,	// (0x0008c869) main_image3_pane

0x54e9,	// (0x00086aa7) area_side_right_pane_cp01_ParamLimits

0x54e9,	// (0x00086aa7) area_side_right_pane_cp01

0x9f73,	// (0x0008b531) main_image3_pane_g1_ParamLimits

0x9f73,	// (0x0008b531) main_image3_pane_g1

0x5500,	// (0x00086abe) main_image3_pane_g2_ParamLimits

0x5500,	// (0x00086abe) main_image3_pane_g2

0x5528,	// (0x00086ae6) main_image3_pane_g3_ParamLimits

0x5528,	// (0x00086ae6) main_image3_pane_g3

0x5552,	// (0x00086b10) main_image3_pane_g4_ParamLimits

0x5552,	// (0x00086b10) main_image3_pane_g4

0x0003,

0xf806,	// (0x00090dc4) main_image3_pane_g_ParamLimits

0xf806,	// (0x00090dc4) main_image3_pane_g

0x557c,	// (0x00086b3a) main_image3_pane_t1_ParamLimits

0x557c,	// (0x00086b3a) main_image3_pane_t1

0x55d4,	// (0x00086b92) main_image3_pane_t2_ParamLimits

0x55d4,	// (0x00086b92) main_image3_pane_t2

0x5626,	// (0x00086be4) main_image3_pane_t3_ParamLimits

0x5626,	// (0x00086be4) main_image3_pane_t3

0x0003,

0xf80f,	// (0x00090dcd) main_image3_pane_t_ParamLimits

0xf80f,	// (0x00090dcd) main_image3_pane_t

0xb2b5,	// (0x0008c873) grid_sctrl_middle_pane_cp01_ParamLimits

0xb2b5,	// (0x0008c873) grid_sctrl_middle_pane_cp01

0x56ae,	// (0x00086c6c) cell_sctrl_middle_pane_cp01_ParamLimits

0x56ae,	// (0x00086c6c) cell_sctrl_middle_pane_cp01

0x56cb,	// (0x00086c89) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x56cb,	// (0x00086c89) cell_sctrl_middle_pane_cp01_g1

0xb2ab,	// (0x0008c869) main_call4_pane

0x56e1,	// (0x00086c9f) aid_size_button_call4_ParamLimits

0x56e1,	// (0x00086c9f) aid_size_button_call4

0x5714,	// (0x00086cd2) call4_windows_pane_ParamLimits

0x5714,	// (0x00086cd2) call4_windows_pane

0x5733,	// (0x00086cf1) grid_call4_button_pane_ParamLimits

0x5733,	// (0x00086cf1) grid_call4_button_pane

0x5766,	// (0x00086d24) call4_windows_conf_pane

0x577d,	// (0x00086d3b) popup_call4_audio_first_window_ParamLimits

0x577d,	// (0x00086d3b) popup_call4_audio_first_window

0x57cd,	// (0x00086d8b) popup_call4_audio_second_window_ParamLimits

0x57cd,	// (0x00086d8b) popup_call4_audio_second_window

0x57e4,	// (0x00086da2) popup_call4_audio_wait_window_ParamLimits

0x57e4,	// (0x00086da2) popup_call4_audio_wait_window

0x57f2,	// (0x00086db0) cell_call4_button_pane_ParamLimits

0x57f2,	// (0x00086db0) cell_call4_button_pane

0x5817,	// (0x00086dd5) bg_button_pane_cp09_ParamLimits

0x5817,	// (0x00086dd5) bg_button_pane_cp09

0x5823,	// (0x00086de1) cell_call4_button_pane_g1_ParamLimits

0x5823,	// (0x00086de1) cell_call4_button_pane_g1

0x5849,	// (0x00086e07) cell_call4_button_pane_t1_ParamLimits

0x5849,	// (0x00086e07) cell_call4_button_pane_t1

0x5877,	// (0x00086e35) popup_call4_audio_conf_window_ParamLimits

0x5877,	// (0x00086e35) popup_call4_audio_conf_window

0x46e0,	// (0x00085c9e) mup3_progress_pane_t1_ParamLimits

0x46ff,	// (0x00085cbd) mup3_progress_pane_t2_ParamLimits

0x471e,	// (0x00085cdc) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x00090ca2) mup3_progress_pane_t_ParamLimits

0x473b,	// (0x00085cf9) mup_progress_pane_cp03_ParamLimits

0x4eee,	// (0x000864ac) mup3_control_keys_pane_g4_copy1

0xa143,	// (0x0008b701) mp4_rocker2_pane_ParamLimits

0xa143,	// (0x0008b701) mp4_rocker2_pane

0x588b,	// (0x00086e49) mp4_rocker2_pane_g1

0x5893,	// (0x00086e51) mp4_rocker2_pane_g2

0xa1e3,	// (0x0008b7a1) mp4_rocker2_pane_g3

0xa1eb,	// (0x0008b7a9) mp4_rocker2_pane_g4

0xa1f3,	// (0x0008b7b1) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x00090dd6) mp4_rocker2_pane_g

0xb2ab,	// (0x0008c869) main_camera4_pane

0xb2ab,	// (0x0008c869) main_video4_pane

0x51e4,	// (0x000867a2) main_video_tele_dialer_pane_t1_ParamLimits

0x51e4,	// (0x000867a2) main_video_tele_dialer_pane_t1

0x51fd,	// (0x000867bb) main_video_tele_dialer_pane_t2_ParamLimits

0x51fd,	// (0x000867bb) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x00090d8c) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x00090d8c) main_video_tele_dialer_pane_t

0x58b3,	// (0x00086e71) cam4_autofocus_pane_ParamLimits

0x58b3,	// (0x00086e71) cam4_autofocus_pane

0x58c9,	// (0x00086e87) cam4_image_uncrop_pane_ParamLimits

0x58c9,	// (0x00086e87) cam4_image_uncrop_pane

0x58e3,	// (0x00086ea1) cam4_indicators_pane_ParamLimits

0x58e3,	// (0x00086ea1) cam4_indicators_pane

0x590e,	// (0x00086ecc) main_camera4_pane_g1_ParamLimits

0x590e,	// (0x00086ecc) main_camera4_pane_g1

0x5920,	// (0x00086ede) main_camera4_pane_g2_ParamLimits

0x5920,	// (0x00086ede) main_camera4_pane_g2

0x5933,	// (0x00086ef1) main_camera4_pane_g3_ParamLimits

0x5933,	// (0x00086ef1) main_camera4_pane_g3

0x5946,	// (0x00086f04) main_camera4_pane_g4_ParamLimits

0x5946,	// (0x00086f04) main_camera4_pane_g4

0x5959,	// (0x00086f17) main_camera4_pane_g5_ParamLimits

0x5959,	// (0x00086f17) main_camera4_pane_g5

0x0005,

0xf823,	// (0x00090de1) main_camera4_pane_g_ParamLimits

0xf823,	// (0x00090de1) main_camera4_pane_g

0x597d,	// (0x00086f3b) main_camera4_pane_t1_ParamLimits

0x597d,	// (0x00086f3b) main_camera4_pane_t1

0xb9ac,	// (0x0008cf6a) bg_tb_trans_pane_cp06

0xa21f,	// (0x0008b7dd) cam4_indicators_pane_g1

0xa230,	// (0x0008b7ee) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x00090dfc) cam4_indicators_pane_g

0xa24e,	// (0x0008b80c) cam4_indicators_pane_t1

0x59e1,	// (0x00086f9f) main_video4_pane_g1_ParamLimits

0x59e1,	// (0x00086f9f) main_video4_pane_g1

0x59f0,	// (0x00086fae) main_video4_pane_g2_ParamLimits

0x59f0,	// (0x00086fae) main_video4_pane_g2

0x59ff,	// (0x00086fbd) main_video4_pane_g3_ParamLimits

0x59ff,	// (0x00086fbd) main_video4_pane_g3

0x5a0e,	// (0x00086fcc) main_video4_pane_g4_ParamLimits

0x5a0e,	// (0x00086fcc) main_video4_pane_g4

0x0004,

0xf845,	// (0x00090e03) main_video4_pane_g_ParamLimits

0xf845,	// (0x00090e03) main_video4_pane_g

0x5a2c,	// (0x00086fea) vid4_indicators_pane_ParamLimits

0x5a2c,	// (0x00086fea) vid4_indicators_pane

0x5a5a,	// (0x00087018) video4_image_uncrop_cif_pane_ParamLimits

0x5a5a,	// (0x00087018) video4_image_uncrop_cif_pane

0x5a74,	// (0x00087032) video4_image_uncrop_nhd_pane_ParamLimits

0x5a74,	// (0x00087032) video4_image_uncrop_nhd_pane

0x58c9,	// (0x00086e87) video4_image_uncrop_vga_pane_ParamLimits

0x58c9,	// (0x00086e87) video4_image_uncrop_vga_pane

0xb2b5,	// (0x0008c873) bg_tb_trans_pane_cp07

0xa27a,	// (0x0008b838) vid4_indicators_pane_g1

0xa28e,	// (0x0008b84c) vid4_indicators_pane_g2

0xa2a2,	// (0x0008b860) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x00090e0e) vid4_indicators_pane_g

0xa2d1,	// (0x0008b88f) vid4_indicators_pane_t1

0x5a88,	// (0x00087046) cam4_autofocus_pane_g1

0x5a90,	// (0x0008704e) cam4_autofocus_pane_g2

0x5a98,	// (0x00087056) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x00090e19) cam4_autofocus_pane_g

0x5aa0,	// (0x0008705e) cam4_autofocus_pane_g3_copy1

0x522c,	// (0x000867ea) video_down_pane_cp_t1

0x523a,	// (0x000867f8) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x00090d91) video_down_pane_cp_t

0xb2b5,	// (0x0008c873) popup_vitu2_window_ParamLimits

0xb2b5,	// (0x0008c873) popup_vitu2_window

0x5aa8,	// (0x00087066) aid_size_cell2_itu2_ParamLimits

0x5aa8,	// (0x00087066) aid_size_cell2_itu2

0x5ace,	// (0x0008708c) aid_size_cell_itu2_ParamLimits

0x5ace,	// (0x0008708c) aid_size_cell_itu2

0x4860,	// (0x00085e1e) bg_popup_window_pane_cp09_ParamLimits

0x4860,	// (0x00085e1e) bg_popup_window_pane_cp09

0x5b2a,	// (0x000870e8) field_vitu2_entry_pane_ParamLimits

0x5b2a,	// (0x000870e8) field_vitu2_entry_pane

0x5b50,	// (0x0008710e) grid_vitu2_function_pane_ParamLimits

0x5b50,	// (0x0008710e) grid_vitu2_function_pane

0x5ba1,	// (0x0008715f) grid_vitu2_itu_pane_ParamLimits

0x5ba1,	// (0x0008715f) grid_vitu2_itu_pane

0x5c37,	// (0x000871f5) cell_vitu2_itu_pane_ParamLimits

0x5c37,	// (0x000871f5) cell_vitu2_itu_pane

0x5c63,	// (0x00087221) cell_vitu2_function_pane_ParamLimits

0x5c63,	// (0x00087221) cell_vitu2_function_pane

0x5ca2,	// (0x00087260) bg_popup_call_pane_cp08_ParamLimits

0x5ca2,	// (0x00087260) bg_popup_call_pane_cp08

0x5cb9,	// (0x00087277) field_vitu2_entry_pane_g1

0x5cc5,	// (0x00087283) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x00090e20) field_vitu2_entry_pane_g

0x051c,	// (0x00081ada) field_vitu2_entry_pane_t1_ParamLimits

0x051c,	// (0x00081ada) field_vitu2_entry_pane_t1

0xa2e8,	// (0x0008b8a6) field_vitu2_entry_pane_t2_ParamLimits

0xa2e8,	// (0x0008b8a6) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x00090e27) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x00090e27) field_vitu2_entry_pane_t

0x5cd9,	// (0x00087297) bg_button_pane_cp010_ParamLimits

0x5cd9,	// (0x00087297) bg_button_pane_cp010

0x5ce7,	// (0x000872a5) cell_vitu2_itu_pane_g1

0x5d0d,	// (0x000872cb) cell_vitu2_itu_pane_t1_ParamLimits

0x5d0d,	// (0x000872cb) cell_vitu2_itu_pane_t1

0x054b,	// (0x00081b09) cell_vitu2_itu_pane_t2_ParamLimits

0x054b,	// (0x00081b09) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x00090e31) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x00090e31) cell_vitu2_itu_pane_t

0xb2b5,	// (0x0008c873) bg_button_pane_cp011

0x5d6b,	// (0x00087329) cell_vitu2_function_pane_g1

0xb2ab,	// (0x0008c869) main_myfav_hc_pane

0x5676,	// (0x00086c34) popup_image3_note_pane_ParamLimits

0x5676,	// (0x00086c34) popup_image3_note_pane

0x5692,	// (0x00086c50) popup_image3_tool_bar_pane_ParamLimits

0x5692,	// (0x00086c50) popup_image3_tool_bar_pane

0x05d9,	// (0x00081b97) cell_vitu2_itu_pane_t3_ParamLimits

0x05d9,	// (0x00081b97) cell_vitu2_itu_pane_t3

0xb2ab,	// (0x0008c869) bg_popup_trans_pane

0x5d7f,	// (0x0008733d) grid_image3_tool_bar_pane

0x5d89,	// (0x00087347) bg_popup_trans_pane_g1

0xc065,	// (0x0008d623) bg_popup_trans_pane_g2

0x5d91,	// (0x0008734f) bg_popup_trans_pane_g3

0x5d99,	// (0x00087357) bg_popup_trans_pane_g4

0x5da1,	// (0x0008735f) bg_popup_trans_pane_g5

0x5da9,	// (0x00087367) bg_popup_trans_pane_g6

0x5db1,	// (0x0008736f) bg_popup_trans_pane_g7

0x5db9,	// (0x00087377) bg_popup_trans_pane_g8

0xc045,	// (0x0008d603) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x00090e38) bg_popup_trans_pane_g

0x5dc1,	// (0x0008737f) cell_image3_tool_bar_pane_ParamLimits

0x5dc1,	// (0x0008737f) cell_image3_tool_bar_pane

0xbe54,	// (0x0008d412) cell_image3_tool_bar_pane_g1

0xb2ab,	// (0x0008c869) bg_popup_trans_pane_cp1

0x5dd5,	// (0x00087393) popup_image3_note_pane_t1

0x5de3,	// (0x000873a1) popup_image3_note_pane_t2

0x5df1,	// (0x000873af) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x00090e4b) popup_image3_note_pane_t

0x5dff,	// (0x000873bd) popup_image3_note_pane_t3_copy1

0x5e0d,	// (0x000873cb) bg_myfav_hc_instruction_pane_ParamLimits

0x5e0d,	// (0x000873cb) bg_myfav_hc_instruction_pane

0x5e21,	// (0x000873df) cell_myfav_contact_pane_ParamLimits

0x5e21,	// (0x000873df) cell_myfav_contact_pane

0x5e3f,	// (0x000873fd) cell_myfav_contact_pane_cp1_ParamLimits

0x5e3f,	// (0x000873fd) cell_myfav_contact_pane_cp1

0x5e57,	// (0x00087415) cell_myfav_contact_pane_cp2_ParamLimits

0x5e57,	// (0x00087415) cell_myfav_contact_pane_cp2

0x5e6f,	// (0x0008742d) cell_myfav_contact_pane_cp3_ParamLimits

0x5e6f,	// (0x0008742d) cell_myfav_contact_pane_cp3

0x5e86,	// (0x00087444) cell_myfav_contact_pane_cp4_ParamLimits

0x5e86,	// (0x00087444) cell_myfav_contact_pane_cp4

0x5e9e,	// (0x0008745c) cell_myfav_contact_pane_cp5_ParamLimits

0x5e9e,	// (0x0008745c) cell_myfav_contact_pane_cp5

0x5eb2,	// (0x00087470) cell_myfav_contact_pane_cp6_ParamLimits

0x5eb2,	// (0x00087470) cell_myfav_contact_pane_cp6

0x5ec8,	// (0x00087486) cell_myfav_contact_pane_cp7_ParamLimits

0x5ec8,	// (0x00087486) cell_myfav_contact_pane_cp7

0x5ee2,	// (0x000874a0) listscroll_gen_pane_cp05

0x5eeb,	// (0x000874a9) main_myfav_hc_pane_g1_ParamLimits

0x5eeb,	// (0x000874a9) main_myfav_hc_pane_g1

0x5f05,	// (0x000874c3) main_myfav_hc_pane_g2_ParamLimits

0x5f05,	// (0x000874c3) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x00090e52) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x00090e52) main_myfav_hc_pane_g

0x5f37,	// (0x000874f5) main_myfav_hc_pane_t1_ParamLimits

0x5f37,	// (0x000874f5) main_myfav_hc_pane_t1

0x5f4e,	// (0x0008750c) main_myfav_hc_pane_t2_ParamLimits

0x5f4e,	// (0x0008750c) main_myfav_hc_pane_t2

0x5f60,	// (0x0008751e) main_myfav_hc_pane_t3_ParamLimits

0x5f60,	// (0x0008751e) main_myfav_hc_pane_t3

0x5f72,	// (0x00087530) main_myfav_hc_pane_t4_ParamLimits

0x5f72,	// (0x00087530) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x00090e59) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x00090e59) main_myfav_hc_pane_t

0xbe54,	// (0x0008d412) bg_myfav_hc_instruction_pane_g1

0x5f9a,	// (0x00087558) cell_myfav_contact_pane_g1_ParamLimits

0x5f9a,	// (0x00087558) cell_myfav_contact_pane_g1

0x5f9a,	// (0x00087558) cell_myfav_contact_pane_g2_ParamLimits

0x5f9a,	// (0x00087558) cell_myfav_contact_pane_g2

0x5fa6,	// (0x00087564) cell_myfav_contact_pane_g3_ParamLimits

0x5fa6,	// (0x00087564) cell_myfav_contact_pane_g3

0xb9ba,	// (0x0008cf78) cell_myfav_contact_pane_g4_ParamLimits

0xb9ba,	// (0x0008cf78) cell_myfav_contact_pane_g4

0x5fb3,	// (0x00087571) cell_myfav_contact_pane_g5_ParamLimits

0x5fb3,	// (0x00087571) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x00090e64) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x00090e64) cell_myfav_contact_pane_g

0x5f1f,	// (0x000874dd) main_myfav_hc_pane_g3_ParamLimits

0x5f1f,	// (0x000874dd) main_myfav_hc_pane_g3

0x0e35,	// (0x000823f3) popup_adpt_find_window

0x5fbf,	// (0x0008757d) afind_page_pane_ParamLimits

0x5fbf,	// (0x0008757d) afind_page_pane

0x5fd4,	// (0x00087592) aid_size_cell_afind_ParamLimits

0x5fd4,	// (0x00087592) aid_size_cell_afind

0x5ff2,	// (0x000875b0) bg_popup_sub_pane_cp09_ParamLimits

0x5ff2,	// (0x000875b0) bg_popup_sub_pane_cp09

0x5fff,	// (0x000875bd) find_pane_cp01_ParamLimits

0x5fff,	// (0x000875bd) find_pane_cp01

0x600c,	// (0x000875ca) grid_afind_control_pane_ParamLimits

0x600c,	// (0x000875ca) grid_afind_control_pane

0x6020,	// (0x000875de) grid_afind_pane_ParamLimits

0x6020,	// (0x000875de) grid_afind_pane

0x6042,	// (0x00087600) cell_afind_pane_ParamLimits

0x6042,	// (0x00087600) cell_afind_pane

0xbe54,	// (0x0008d412) afind_page_pane_g1

0x60a9,	// (0x00087667) afind_page_pane_g2

0x60b1,	// (0x0008766f) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x00090e6f) afind_page_pane_g

0x60b9,	// (0x00087677) afind_page_pane_t1

0x60d9,	// (0x00087697) cell_afind_grid_control_pane_ParamLimits

0x60d9,	// (0x00087697) cell_afind_grid_control_pane

0x5417,	// (0x000869d5) bg_button_pane_cp69_ParamLimits

0x5417,	// (0x000869d5) bg_button_pane_cp69

0x60e8,	// (0x000876a6) cell_afind_pane_g1_ParamLimits

0x60e8,	// (0x000876a6) cell_afind_pane_g1

0x60f5,	// (0x000876b3) cell_afind_pane_t1_ParamLimits

0x60f5,	// (0x000876b3) cell_afind_pane_t1

0xbe5e,	// (0x0008d41c) bg_button_pane_cp72

0x6107,	// (0x000876c5) cell_afind_grid_control_pane_g1

0x3388,	// (0x00084946) aid_image_placing_area_ParamLimits

0x3388,	// (0x00084946) aid_image_placing_area

0xb9ac,	// (0x0008cf6a) field_vitu_entry_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) field_vitu_entry_pane_g1

0xb9ac,	// (0x0008cf6a) field_vitu_entry_pane_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0009077f) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0009077f) field_vitu_entry_pane_g

0x4f13,	// (0x000864d1) cell_vitu_itu_pane_g1_ParamLimits

0x4ef6,	// (0x000864b4) cell_vitu_itu_pane_t3_ParamLimits

0x4ef6,	// (0x000864b4) cell_vitu_itu_pane_t3

0x5317,	// (0x000868d5) mp4_progress_pane_t1_ParamLimits

0x5330,	// (0x000868ee) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x00090db5) mp4_progress_pane_t_ParamLimits

0x5349,	// (0x00086907) mup_progress_pane_cp04_ParamLimits

0x5f86,	// (0x00087544) main_myfav_hc_pane_t5_ParamLimits

0x5f86,	// (0x00087544) main_myfav_hc_pane_t5

0x9c34,	// (0x0008b1f2) aid_zoom_text_primary

0x0e35,	// (0x000823f3) popup_adpt_find_window_ParamLimits

0xb2b5,	// (0x0008c873) main_cam_set_pane

0x58fa,	// (0x00086eb8) cam4_zoom_pane_ParamLimits

0x58fa,	// (0x00086eb8) cam4_zoom_pane

0x6110,	// (0x000876ce) main_cam_set_pane_g1_ParamLimits

0x6110,	// (0x000876ce) main_cam_set_pane_g1

0x611e,	// (0x000876dc) main_cam_set_pane_g2_ParamLimits

0x611e,	// (0x000876dc) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x00090e76) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x00090e76) main_cam_set_pane_g

0x613f,	// (0x000876fd) main_cam_set_pane_t1_ParamLimits

0x613f,	// (0x000876fd) main_cam_set_pane_t1

0x615a,	// (0x00087718) main_cset_listscroll_pane_ParamLimits

0x615a,	// (0x00087718) main_cset_listscroll_pane

0x6180,	// (0x0008773e) main_cset_slider_pane_ParamLimits

0x6180,	// (0x0008773e) main_cset_slider_pane

0x61ae,	// (0x0008776c) main_cset_list_pane_ParamLimits

0x61ae,	// (0x0008776c) main_cset_list_pane

0x61be,	// (0x0008777c) scroll_pane_cp028

0x61c7,	// (0x00087785) aid_area_touch_slider

0x61e3,	// (0x000877a1) cset_slider_pane

0x6206,	// (0x000877c4) main_cset_slider_pane_g1

0x621b,	// (0x000877d9) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x00090e7b) main_cset_slider_pane_g

0x6307,	// (0x000878c5) main_cset_slider_pane_t1

0x632f,	// (0x000878ed) main_cset_slider_pane_t2

0x6349,	// (0x00087907) main_cset_slider_pane_t3

0x6363,	// (0x00087921) main_cset_slider_pane_t4

0x637d,	// (0x0008793b) main_cset_slider_pane_t5

0x6397,	// (0x00087955) main_cset_slider_pane_t6

0x63ac,	// (0x0008796a) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x00090ea0) main_cset_slider_pane_t

0x6522,	// (0x00087ae0) cset_list_set_pane_ParamLimits

0x6522,	// (0x00087ae0) cset_list_set_pane

0x6534,	// (0x00087af2) aid_position_infowindow_above

0x653c,	// (0x00087afa) aid_position_infowindow_below

0xa305,	// (0x0008b8c3) cset_list_set_pane_g1_ParamLimits

0xa305,	// (0x0008b8c3) cset_list_set_pane_g1

0xa311,	// (0x0008b8cf) cset_list_set_pane_g3_ParamLimits

0xa311,	// (0x0008b8cf) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x00090ebf) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x00090ebf) cset_list_set_pane_g

0xa320,	// (0x0008b8de) cset_list_set_pane_t1_ParamLimits

0xa320,	// (0x0008b8de) cset_list_set_pane_t1

0xb2b5,	// (0x0008c873) list_highlight_pane_cp021_ParamLimits

0xb2b5,	// (0x0008c873) list_highlight_pane_cp021

0xc9db,	// (0x0008df99) cset_slider_pane_g1

0xc9ed,	// (0x0008dfab) cset_slider_pane_g2

0xc9e4,	// (0x0008dfa2) cset_slider_pane_g3

0x0002,

0xf906,	// (0x00090ec4) cset_slider_pane_g

0xa335,	// (0x0008b8f3) aid_area_touch_cam4_zoom

0xa33d,	// (0x0008b8fb) cam4_zoom_cont_pane

0xa345,	// (0x0008b903) cam4_zoom_pane_g1

0xa34d,	// (0x0008b90b) cam4_zoom_pane_g2

0x6544,	// (0x00087b02) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x00090ecb) cam4_zoom_pane_g

0x654c,	// (0x00087b0a) cam4_zoom_cont_pane_g1

0x6555,	// (0x00087b13) cam4_zoom_cont_pane_g2

0x655e,	// (0x00087b1c) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x00090ed2) cam4_zoom_cont_pane_g

0x56ff,	// (0x00086cbd) call4_image_pane_ParamLimits

0x56ff,	// (0x00086cbd) call4_image_pane

0x5766,	// (0x00086d24) call4_windows_conf_pane_ParamLimits

0x57ab,	// (0x00086d69) popup_call4_audio_in_window_ParamLimits

0x57ab,	// (0x00086d69) popup_call4_audio_in_window

0xb2ab,	// (0x0008c869) bg_popup_call2_act_pane_cp02

0x586f,	// (0x00086e2d) call4_list_conf_pane

0xbe54,	// (0x0008d412) call4_image_pane_g1

0xbe54,	// (0x0008d412) call4_image_pane_g2

0x0001,

0xf398,	// (0x00090956) call4_image_pane_g

0x6567,	// (0x00087b25) list_single_graphic_popup_conf4_pane_ParamLimits

0x6567,	// (0x00087b25) list_single_graphic_popup_conf4_pane

0xb2ab,	// (0x0008c869) list_highlight_pane_cp022

0x657a,	// (0x00087b38) list_single_graphic_popup_conf4_pane_g1

0xc57f,	// (0x0008db3d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x00090ed9) list_single_graphic_popup_conf4_pane_g

0x6582,	// (0x00087b40) list_single_graphic_popup_conf4_pane_t1

0x1b98,	// (0x00083156) popup_vtel_slider_window_ParamLimits

0x1b98,	// (0x00083156) popup_vtel_slider_window

0x53e3,	// (0x000869a1) dialer2_ne_pane_t2_ParamLimits

0x53e3,	// (0x000869a1) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x00090dba) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x00090dba) dialer2_ne_pane_t

0xe603,	// (0x0008fbc1) bg_popup_sub_pane_cp010_ParamLimits

0xe603,	// (0x0008fbc1) bg_popup_sub_pane_cp010

0x6598,	// (0x00087b56) popup_vtel_slider_window_g1_ParamLimits

0x6598,	// (0x00087b56) popup_vtel_slider_window_g1

0x65ab,	// (0x00087b69) popup_vtel_slider_window_g2_ParamLimits

0x65ab,	// (0x00087b69) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x00090ede) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x00090ede) popup_vtel_slider_window_g

0x6601,	// (0x00087bbf) vtel_slider_pane_ParamLimits

0x6601,	// (0x00087bbf) vtel_slider_pane

0x6623,	// (0x00087be1) vtel_slider_pane_g1_ParamLimits

0x6623,	// (0x00087be1) vtel_slider_pane_g1

0x6637,	// (0x00087bf5) vtel_slider_pane_g2_ParamLimits

0x6637,	// (0x00087bf5) vtel_slider_pane_g2

0x664f,	// (0x00087c0d) vtel_slider_pane_g3_ParamLimits

0x664f,	// (0x00087c0d) vtel_slider_pane_g3

0x6623,	// (0x00087be1) vtel_slider_pane_g4_ParamLimits

0x6623,	// (0x00087be1) vtel_slider_pane_g4

0x6665,	// (0x00087c23) vtel_slider_pane_g5_ParamLimits

0x6665,	// (0x00087c23) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x00090ee7) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x00090ee7) vtel_slider_pane_g

0xb2b5,	// (0x0008c873) main_gallery2_pane

0x5afa,	// (0x000870b8) aid_size_row_itut2_dropdow_list_ParamLimits

0x5afa,	// (0x000870b8) aid_size_row_itut2_dropdow_list

0x5b78,	// (0x00087136) grid_vitu2_function_top_pane_ParamLimits

0x5b78,	// (0x00087136) grid_vitu2_function_top_pane

0x5be2,	// (0x000871a0) popup_vitu2_dropdown_list_window_ParamLimits

0x5be2,	// (0x000871a0) popup_vitu2_dropdown_list_window

0x5c09,	// (0x000871c7) popup_vitu2_match_list_window

0x667b,	// (0x00087c39) cell_vitu2_function_top_pane_ParamLimits

0x667b,	// (0x00087c39) cell_vitu2_function_top_pane

0x6693,	// (0x00087c51) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6693,	// (0x00087c51) cell_vitu2_function_top_pane_cp01

0x66af,	// (0x00087c6d) cell_vitu2_function_top_wide_pane_ParamLimits

0x66af,	// (0x00087c6d) cell_vitu2_function_top_wide_pane

0xb2b5,	// (0x0008c873) bg_button_pane_cp012

0x66cd,	// (0x00087c8b) cell_vitu2_function_top_pane_g1

0xa355,	// (0x0008b913) bg_button_pane_cp013_ParamLimits

0xa355,	// (0x0008b913) bg_button_pane_cp013

0x66e1,	// (0x00087c9f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x66e1,	// (0x00087c9f) cell_vitu2_function_top_wide_pane_g1

0xb2b5,	// (0x0008c873) bg_popup_sub_pane_cp20

0x66f9,	// (0x00087cb7) list_vitu2_match_list_pane

0x5d89,	// (0x00087347) bg_popup_sub_pane_cp20_g1

0x5d91,	// (0x0008734f) bg_popup_sub_pane_cp20_g2

0xc065,	// (0x0008d623) bg_popup_sub_pane_cp20_g3

0x5d99,	// (0x00087357) bg_popup_sub_pane_cp20_g4

0xc045,	// (0x0008d603) bg_popup_sub_pane_cp20_g5

0x6711,	// (0x00087ccf) bg_popup_sub_pane_cp20_g6

0x5da9,	// (0x00087367) bg_popup_sub_pane_cp20_g7

0x5db1,	// (0x0008736f) bg_popup_sub_pane_cp20_g8

0x5db9,	// (0x00087377) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x00090ef2) bg_popup_sub_pane_cp20_g

0xa371,	// (0x0008b92f) list_vitu2_match_list_item_pane_ParamLimits

0xa371,	// (0x0008b92f) list_vitu2_match_list_item_pane

0xa383,	// (0x0008b941) list_vitu2_match_list_item_pane_t1

0xb2ab,	// (0x0008c869) bg_popup_sub_pane_cp21

0xbe1e,	// (0x0008d3dc) grid_vitu2_dropdown_list_pane

0x6719,	// (0x00087cd7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6719,	// (0x00087cd7) cell_vitu2_dropdown_list_char_pane

0x6739,	// (0x00087cf7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6739,	// (0x00087cf7) cell_vitu2_dropdown_list_ctrl_pane

0x6761,	// (0x00087d1f) cell_vitu2_dropdown_list_char_pane_g1

0x676a,	// (0x00087d28) cell_vitu2_dropdown_list_char_pane_g2

0x6773,	// (0x00087d31) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x00090f05) cell_vitu2_dropdown_list_char_pane_g

0x677c,	// (0x00087d3a) cell_vitu2_dropdown_list_char_pane_t1

0x678a,	// (0x00087d48) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x678a,	// (0x00087d48) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6797,	// (0x00087d55) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6797,	// (0x00087d55) cell_vitu2_dropdown_list_ctrl_pane_g2

0x67a4,	// (0x00087d62) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x67a4,	// (0x00087d62) cell_vitu2_dropdown_list_ctrl_pane_g3

0x67b1,	// (0x00087d6f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x67b1,	// (0x00087d6f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb9ac,	// (0x0008cf6a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb9ac,	// (0x0008cf6a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x00090f0c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x00090f0c) cell_vitu2_dropdown_list_ctrl_pane_g

0x67cd,	// (0x00087d8b) aid_size_cell_gallery2_ParamLimits

0x67cd,	// (0x00087d8b) aid_size_cell_gallery2

0x67eb,	// (0x00087da9) grid_gallery2_pane_ParamLimits

0x67eb,	// (0x00087da9) grid_gallery2_pane

0x6805,	// (0x00087dc3) scroll_pane_cp029_ParamLimits

0x6805,	// (0x00087dc3) scroll_pane_cp029

0x6816,	// (0x00087dd4) cell_gallery2_pane_ParamLimits

0x6816,	// (0x00087dd4) cell_gallery2_pane

0x6875,	// (0x00087e33) cell_gallery2_pane_g2

0x687d,	// (0x00087e3b) cell_gallery2_pane_g3

0x6885,	// (0x00087e43) cell_gallery2_pane_g4

0x688d,	// (0x00087e4b) cell_gallery2_pane_g5

0xbe1e,	// (0x0008d3dc) grid_highlight_pane_cp10

0x5c09,	// (0x000871c7) popup_vitu2_match_list_window_ParamLimits

0x5c1e,	// (0x000871dc) popup_vitu2_query_window_ParamLimits

0x5c1e,	// (0x000871dc) popup_vitu2_query_window

0xb2ab,	// (0x0008c869) bg_vitu2_candi_button_pane

0x6761,	// (0x00087d1f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x676a,	// (0x00087d28) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x6773,	// (0x00087d31) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0637,	// (0x00081bf5) bg_button_pane_cp015

0x6895,	// (0x00087e53) bg_button_pane_cp016

0x68a1,	// (0x00087e5f) bg_button_pane_cp017

0xc96b,	// (0x0008df29) bg_popup_sub_pane_cp22

0x68bc,	// (0x00087e7a) popup_vitu2_query_window_g1

0x066b,	// (0x00081c29) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x00090f17) popup_vitu2_query_window_g

0x0681,	// (0x00081c3f) popup_vitu2_query_window_t1_ParamLimits

0x0681,	// (0x00081c3f) popup_vitu2_query_window_t1

0x06b4,	// (0x00081c72) popup_vitu2_query_window_t2_ParamLimits

0x06b4,	// (0x00081c72) popup_vitu2_query_window_t2

0x06c6,	// (0x00081c84) popup_vitu2_query_window_t3_ParamLimits

0x06c6,	// (0x00081c84) popup_vitu2_query_window_t3

0x68d4,	// (0x00087e92) popup_vitu2_query_window_t4_ParamLimits

0x68d4,	// (0x00087e92) popup_vitu2_query_window_t4

0x68e8,	// (0x00087ea6) popup_vitu2_query_window_t5_ParamLimits

0x68e8,	// (0x00087ea6) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x00090f1e) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x00090f1e) popup_vitu2_query_window_t

0x61a6,	// (0x00087764) main_cset_text_pane

0x61c7,	// (0x00087785) aid_area_touch_slider_ParamLimits

0x61e3,	// (0x000877a1) cset_slider_pane_ParamLimits

0x6206,	// (0x000877c4) main_cset_slider_pane_g1_ParamLimits

0x621b,	// (0x000877d9) main_cset_slider_pane_g2_ParamLimits

0x6230,	// (0x000877ee) main_cset_slider_pane_g3_ParamLimits

0x6230,	// (0x000877ee) main_cset_slider_pane_g3

0x623c,	// (0x000877fa) main_cset_slider_pane_g4_ParamLimits

0x623c,	// (0x000877fa) main_cset_slider_pane_g4

0x624b,	// (0x00087809) main_cset_slider_pane_g5_ParamLimits

0x624b,	// (0x00087809) main_cset_slider_pane_g5

0x6257,	// (0x00087815) main_cset_slider_pane_g6_ParamLimits

0x6257,	// (0x00087815) main_cset_slider_pane_g6

0xf8bd,	// (0x00090e7b) main_cset_slider_pane_g_ParamLimits

0x6307,	// (0x000878c5) main_cset_slider_pane_t1_ParamLimits

0x632f,	// (0x000878ed) main_cset_slider_pane_t2_ParamLimits

0x6349,	// (0x00087907) main_cset_slider_pane_t3_ParamLimits

0x6363,	// (0x00087921) main_cset_slider_pane_t4_ParamLimits

0x637d,	// (0x0008793b) main_cset_slider_pane_t5_ParamLimits

0x6397,	// (0x00087955) main_cset_slider_pane_t6_ParamLimits

0x63ac,	// (0x0008796a) main_cset_slider_pane_t7_ParamLimits

0x63d6,	// (0x00087994) main_cset_slider_pane_t8_ParamLimits

0x63d6,	// (0x00087994) main_cset_slider_pane_t8

0x63fe,	// (0x000879bc) main_cset_slider_pane_t9_ParamLimits

0x63fe,	// (0x000879bc) main_cset_slider_pane_t9

0x6426,	// (0x000879e4) main_cset_slider_pane_t10_ParamLimits

0x6426,	// (0x000879e4) main_cset_slider_pane_t10

0x644e,	// (0x00087a0c) main_cset_slider_pane_t11_ParamLimits

0x644e,	// (0x00087a0c) main_cset_slider_pane_t11

0x6476,	// (0x00087a34) main_cset_slider_pane_t12_ParamLimits

0x6476,	// (0x00087a34) main_cset_slider_pane_t12

0x6493,	// (0x00087a51) main_cset_slider_pane_t13_ParamLimits

0x6493,	// (0x00087a51) main_cset_slider_pane_t13

0xf8e2,	// (0x00090ea0) main_cset_slider_pane_t_ParamLimits

0xb2ab,	// (0x0008c869) bg_popup_sub_pane_cp011

0x68fc,	// (0x00087eba) main_cset_text_pane_g1

0x6904,	// (0x00087ec2) main_cset_text_pane_t1

0x6912,	// (0x00087ed0) main_cset_text_pane_t2

0x6920,	// (0x00087ede) main_cset_text_pane_t3

0x692e,	// (0x00087eec) main_cset_text_pane_t4

0x693c,	// (0x00087efa) main_cset_text_pane_t5

0x694a,	// (0x00087f08) main_cset_text_pane_t6

0x6958,	// (0x00087f16) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x00090f2d) main_cset_text_pane_t

0xb2ab,	// (0x0008c869) main_cam4_burst_pane

0xb2ab,	// (0x0008c869) main_cam5_pane

0x60c7,	// (0x00087685) bg_button_pane_cp019

0x60d0,	// (0x0008768e) bg_button_pane_cp020

0x626b,	// (0x00087829) main_cset_slider_pane_g7_ParamLimits

0x626b,	// (0x00087829) main_cset_slider_pane_g7

0x6277,	// (0x00087835) main_cset_slider_pane_g8_ParamLimits

0x6277,	// (0x00087835) main_cset_slider_pane_g8

0x6283,	// (0x00087841) main_cset_slider_pane_g9_ParamLimits

0x6283,	// (0x00087841) main_cset_slider_pane_g9

0x628f,	// (0x0008784d) main_cset_slider_pane_g10_ParamLimits

0x628f,	// (0x0008784d) main_cset_slider_pane_g10

0x629b,	// (0x00087859) main_cset_slider_pane_g11_ParamLimits

0x629b,	// (0x00087859) main_cset_slider_pane_g11

0x62a7,	// (0x00087865) main_cset_slider_pane_g12_ParamLimits

0x62a7,	// (0x00087865) main_cset_slider_pane_g12

0x62b3,	// (0x00087871) main_cset_slider_pane_g13_ParamLimits

0x62b3,	// (0x00087871) main_cset_slider_pane_g13

0x62bf,	// (0x0008787d) main_cset_slider_pane_g14_ParamLimits

0x62bf,	// (0x0008787d) main_cset_slider_pane_g14

0x62cb,	// (0x00087889) main_cset_slider_pane_g15_ParamLimits

0x62cb,	// (0x00087889) main_cset_slider_pane_g15

0x64b0,	// (0x00087a6e) main_cset_slider_pane_t14_ParamLimits

0x64b0,	// (0x00087a6e) main_cset_slider_pane_t14

0x64e9,	// (0x00087aa7) main_cset_slider_pane_t15_ParamLimits

0x64e9,	// (0x00087aa7) main_cset_slider_pane_t15

0x6966,	// (0x00087f24) aid_cam4_burst_size_cell_ParamLimits

0x6966,	// (0x00087f24) aid_cam4_burst_size_cell

0x6986,	// (0x00087f44) grid_cam4_burst_pane_ParamLimits

0x6986,	// (0x00087f44) grid_cam4_burst_pane

0x69be,	// (0x00087f7c) linegrid_cam4_burst_pane_ParamLimits

0x69be,	// (0x00087f7c) linegrid_cam4_burst_pane

0x69e2,	// (0x00087fa0) scroll_pane_cp30_ParamLimits

0x69e2,	// (0x00087fa0) scroll_pane_cp30

0x69ee,	// (0x00087fac) cell_cam4_burst_pane_ParamLimits

0x69ee,	// (0x00087fac) cell_cam4_burst_pane

0x6a3b,	// (0x00087ff9) linegrid_cam4_burst_pane_g1_ParamLimits

0x6a3b,	// (0x00087ff9) linegrid_cam4_burst_pane_g1

0x6a48,	// (0x00088006) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a48,	// (0x00088006) linegrid_cam4_burst_pane_g2

0x6a59,	// (0x00088017) linegrid_cam4_burst_pane_g3_ParamLimits

0x6a59,	// (0x00088017) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x00090f3c) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x00090f3c) linegrid_cam4_burst_pane_g

0x6a66,	// (0x00088024) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a66,	// (0x00088024) linegrid_cam4_burst_pane_g3_copy1

0x6a80,	// (0x0008803e) linegrid_cam4_burst_pane_g4_ParamLimits

0x6a80,	// (0x0008803e) linegrid_cam4_burst_pane_g4

0x6a8d,	// (0x0008804b) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a8d,	// (0x0008804b) linegrid_cam4_burst_pane_g5

0x6a9e,	// (0x0008805c) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a9e,	// (0x0008805c) linegrid_cam4_burst_pane_g6

0x6ab5,	// (0x00088073) linegrid_cam4_burst_pane_g7_ParamLimits

0x6ab5,	// (0x00088073) linegrid_cam4_burst_pane_g7

0x6ac2,	// (0x00088080) cell_cam4_burst_pane_g1

0x6ae1,	// (0x0008809f) main_cam5_pane_t1_ParamLimits

0x6ae1,	// (0x0008809f) main_cam5_pane_t1

0x6af3,	// (0x000880b1) main_cam5_pane_t2_ParamLimits

0x6af3,	// (0x000880b1) main_cam5_pane_t2

0x6b05,	// (0x000880c3) main_cam5_pane_t3_ParamLimits

0x6b05,	// (0x000880c3) main_cam5_pane_t3

0x6b17,	// (0x000880d5) main_cam5_pane_t4_ParamLimits

0x6b17,	// (0x000880d5) main_cam5_pane_t4

0x6b2f,	// (0x000880ed) main_cam5_pane_t5_ParamLimits

0x6b2f,	// (0x000880ed) main_cam5_pane_t5

0x6b43,	// (0x00088101) main_cam5_pane_t6_ParamLimits

0x6b43,	// (0x00088101) main_cam5_pane_t6

0x6b57,	// (0x00088115) main_cam5_pane_t7_ParamLimits

0x6b57,	// (0x00088115) main_cam5_pane_t7

0x6b69,	// (0x00088127) main_cam5_pane_t8_ParamLimits

0x6b69,	// (0x00088127) main_cam5_pane_t8

0x6b85,	// (0x00088143) main_cam5_pane_t9_ParamLimits

0x6b85,	// (0x00088143) main_cam5_pane_t9

0x6b97,	// (0x00088155) main_cam5_pane_t10_ParamLimits

0x6b97,	// (0x00088155) main_cam5_pane_t10

0x6ba9,	// (0x00088167) main_cam5_pane_t11_ParamLimits

0x6ba9,	// (0x00088167) main_cam5_pane_t11

0x6bbb,	// (0x00088179) main_cam5_pane_t12_ParamLimits

0x6bbb,	// (0x00088179) main_cam5_pane_t12

0x6bd0,	// (0x0008818e) main_cam5_pane_t13_ParamLimits

0x6bd0,	// (0x0008818e) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x00090f48) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x00090f48) main_cam5_pane_t

0x0eb6,	// (0x00082474) popup_scut_keymap_window_ParamLimits

0x0eb6,	// (0x00082474) popup_scut_keymap_window

0x6bed,	// (0x000881ab) aid_size_cell_brow_shortcut

0xbe1e,	// (0x0008d3dc) bg_popup_window_pane_cp010

0x6bf9,	// (0x000881b7) grid_scut_pane

0x6c05,	// (0x000881c3) cell_scut_pane_ParamLimits

0x6c05,	// (0x000881c3) cell_scut_pane

0x6c1c,	// (0x000881da) cell_scut_pane_g1

0x6c25,	// (0x000881e3) cell_scut_pane_t1

0x6c34,	// (0x000881f2) cell_scut_pane_t2

0x6c43,	// (0x00088201) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x00090f63) cell_scut_pane_t

0x4291,	// (0x0008584f) main_mup3_pane_g8_ParamLimits

0x4291,	// (0x0008584f) main_mup3_pane_g8

0x5b12,	// (0x000870d0) area_vitu2_query_pane_ParamLimits

0x5b12,	// (0x000870d0) area_vitu2_query_pane

0x0648,	// (0x00081c06) input_focus_pane_cp08

0x6c51,	// (0x0008820f) area_vitu2_query_pane_g1

0x0744,	// (0x00081d02) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x00090f6a) area_vitu2_query_pane_g

0x6c5d,	// (0x0008821b) area_vitu2_query_pane_t1_ParamLimits

0x6c5d,	// (0x0008821b) area_vitu2_query_pane_t1

0x6c71,	// (0x0008822f) area_vitu2_query_pane_t2_ParamLimits

0x6c71,	// (0x0008822f) area_vitu2_query_pane_t2

0x0753,	// (0x00081d11) area_vitu2_query_pane_t3_ParamLimits

0x0753,	// (0x00081d11) area_vitu2_query_pane_t3

0xa391,	// (0x0008b94f) area_vitu2_query_pane_t4_ParamLimits

0xa391,	// (0x0008b94f) area_vitu2_query_pane_t4

0xa3b9,	// (0x0008b977) area_vitu2_query_pane_t5_ParamLimits

0xa3b9,	// (0x0008b977) area_vitu2_query_pane_t5

0xa3e1,	// (0x0008b99f) area_vitu2_query_pane_t6_ParamLimits

0xa3e1,	// (0x0008b99f) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x00090f6f) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x00090f6f) area_vitu2_query_pane_t

0x6c85,	// (0x00088243) bg_button_pane_cp018

0x6c91,	// (0x0008824f) bg_button_pane_cp021

0x077b,	// (0x00081d39) bg_button_pane_cp022

0x079a,	// (0x00081d58) input_focus_pane_cp09

0xc6bb,	// (0x0008dc79) aid_size_touch_mv_arrow_left

0xc6e4,	// (0x0008dca2) aid_size_touch_mv_arrow_right

0x62e3,	// (0x000878a1) main_cset_slider_pane_g16_ParamLimits

0x62e3,	// (0x000878a1) main_cset_slider_pane_g16

0x62ef,	// (0x000878ad) main_cset_slider_pane_g17_ParamLimits

0x62ef,	// (0x000878ad) main_cset_slider_pane_g17

0x6ac2,	// (0x00088080) cell_cam4_burst_pane_g1_ParamLimits

0xb2ab,	// (0x0008c869) compa_mode_pane

0x65bb,	// (0x00087b79) popup_vtel_slider_window_g3_ParamLimits

0x65bb,	// (0x00087b79) popup_vtel_slider_window_g3

0x65d2,	// (0x00087b90) popup_vtel_slider_window_g4_ParamLimits

0x65d2,	// (0x00087b90) popup_vtel_slider_window_g4

0x65e9,	// (0x00087ba7) popup_vtel_slider_window_t1_ParamLimits

0x65e9,	// (0x00087ba7) popup_vtel_slider_window_t1

0xb2ab,	// (0x0008c869) main_cl_pane

0x9e2c,	// (0x0008b3ea) popup_imed_adjust2_window_ParamLimits

0xc96b,	// (0x0008df29) bg_tb_trans_pane_cp05_ParamLimits

0x4d6f,	// (0x0008632d) popup_imed_adjust2_window_g1_ParamLimits

0x4d7e,	// (0x0008633c) popup_imed_adjust2_window_g2_ParamLimits

0x4d7e,	// (0x0008633c) popup_imed_adjust2_window_g2

0x4d8a,	// (0x00086348) popup_imed_adjust2_window_g3_ParamLimits

0x4d8a,	// (0x00086348) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x00090ce5) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x00090ce5) popup_imed_adjust2_window_g

0x4d96,	// (0x00086354) popup_imed_adjust2_window_t1_ParamLimits

0x4dae,	// (0x0008636c) slider_imed_adjust_pane_ParamLimits

0x4dc2,	// (0x00086380) slider_imed_adjust_pane_g1_ParamLimits

0x4dd2,	// (0x00086390) slider_imed_adjust_pane_g2_ParamLimits

0x4de2,	// (0x000863a0) slider_imed_adjust_pane_g3_ParamLimits

0x4df3,	// (0x000863b1) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x00090cec) slider_imed_adjust_pane_g_ParamLimits

0x589b,	// (0x00086e59) aid_touch_area_cam4_ParamLimits

0x589b,	// (0x00086e59) aid_touch_area_cam4

0xa1fb,	// (0x0008b7b9) battery_pane_cp01

0x596a,	// (0x00086f28) main_camera4_pane_g6_ParamLimits

0x596a,	// (0x00086f28) main_camera4_pane_g6

0x5994,	// (0x00086f52) main_camera4_pane_t2_ParamLimits

0x5994,	// (0x00086f52) main_camera4_pane_t2

0x0001,

0xf830,	// (0x00090dee) main_camera4_pane_t_ParamLimits

0xf830,	// (0x00090dee) main_camera4_pane_t

0x59c9,	// (0x00086f87) aid_touch_area_vid4_ParamLimits

0x59c9,	// (0x00086f87) aid_touch_area_vid4

0x5a1d,	// (0x00086fdb) main_video4_pane_g5_ParamLimits

0x5a1d,	// (0x00086fdb) main_video4_pane_g5

0x5a42,	// (0x00087000) vid4_progress_pane_ParamLimits

0x5a42,	// (0x00087000) vid4_progress_pane

0x62fb,	// (0x000878b9) main_cset_slider_pane_g18_ParamLimits

0x62fb,	// (0x000878b9) main_cset_slider_pane_g18

0x6ad5,	// (0x00088093) cell_cam4_burst_pane_g2_ParamLimits

0x6ad5,	// (0x00088093) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x00090f43) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x00090f43) cell_cam4_burst_pane_g

0xba1e,	// (0x0008cfdc) bg_cl_pane_ParamLimits

0xba1e,	// (0x0008cfdc) bg_cl_pane

0x6c9d,	// (0x0008825b) cl_header_pane_ParamLimits

0x6c9d,	// (0x0008825b) cl_header_pane

0x6cb1,	// (0x0008826f) cl_listscroll_pane_ParamLimits

0x6cb1,	// (0x0008826f) cl_listscroll_pane

0x6cc1,	// (0x0008827f) bg_cl_pane_g1

0x6cc9,	// (0x00088287) bg_cl_pane_g2

0x6cd1,	// (0x0008828f) bg_cl_pane_g3

0x6cd9,	// (0x00088297) bg_cl_pane_g4

0x6ce1,	// (0x0008829f) bg_cl_pane_g5

0x6ce9,	// (0x000882a7) bg_cl_pane_g6

0x6cf1,	// (0x000882af) bg_cl_pane_g7

0x6cf9,	// (0x000882b7) bg_cl_pane_g8

0x6d01,	// (0x000882bf) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x00090f7e) bg_cl_pane_g

0x6d09,	// (0x000882c7) aid_height_cl_leading_ParamLimits

0x6d09,	// (0x000882c7) aid_height_cl_leading

0x6d15,	// (0x000882d3) aid_height_cl_text_ParamLimits

0x6d15,	// (0x000882d3) aid_height_cl_text

0xb2b5,	// (0x0008c873) bg_cl_header_pane_ParamLimits

0xb2b5,	// (0x0008c873) bg_cl_header_pane

0x6d34,	// (0x000882f2) cl_header_pane_g1_ParamLimits

0x6d34,	// (0x000882f2) cl_header_pane_g1

0x6d4a,	// (0x00088308) cl_header_pane_t1_ParamLimits

0x6d4a,	// (0x00088308) cl_header_pane_t1

0x6d63,	// (0x00088321) cl_list_pane

0x61be,	// (0x0008777c) hc_scroll_pane_cp01

0xc045,	// (0x0008d603) bg_cl_header_pane_g1

0x5d89,	// (0x00087347) bg_cl_header_pane_g2

0xc065,	// (0x0008d623) bg_cl_header_pane_g3

0x5d99,	// (0x00087357) bg_cl_header_pane_g4

0x5d91,	// (0x0008734f) bg_cl_header_pane_g5

0x6711,	// (0x00087ccf) bg_cl_header_pane_g6

0x5db1,	// (0x0008736f) bg_cl_header_pane_g7

0x5db9,	// (0x00087377) bg_cl_header_pane_g8

0x5da9,	// (0x00087367) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x00090f91) bg_cl_header_pane_g

0x6d6c,	// (0x0008832a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6d6c,	// (0x0008832a) hc_cl_list_double_graphic_heading_pane

0x6d7d,	// (0x0008833b) hc_cl_list_single_graphic_pane_ParamLimits

0x6d7d,	// (0x0008833b) hc_cl_list_single_graphic_pane

0x6d93,	// (0x00088351) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d93,	// (0x00088351) hc_cl_list_single_graphic_pane_g1

0x6d9f,	// (0x0008835d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d9f,	// (0x0008835d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x00090fa4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x00090fa4) hc_cl_list_single_graphic_pane_g

0x6db3,	// (0x00088371) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6db3,	// (0x00088371) hc_cl_list_single_graphic_pane_t1

0x6d93,	// (0x00088351) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d93,	// (0x00088351) hc_cl_list_double_graphic_heading_pane_g1

0x6dc8,	// (0x00088386) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6dc8,	// (0x00088386) hc_cl_list_double_graphic_heading_pane_g2

0x6ddc,	// (0x0008839a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ddc,	// (0x0008839a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x00090fa9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x00090fa9) hc_cl_list_double_graphic_heading_pane_g

0x6df0,	// (0x000883ae) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6df0,	// (0x000883ae) hc_cl_list_double_graphic_heading_pane_t1

0x6e05,	// (0x000883c3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6e05,	// (0x000883c3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x00090fb0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x00090fb0) hc_cl_list_double_graphic_heading_pane_t

0xa435,	// (0x0008b9f3) vid4_progress_pane_g1

0xa445,	// (0x0008ba03) vid4_progress_pane_g2

0x6e1a,	// (0x000883d8) vid4_progress_pane_g3

0xa455,	// (0x0008ba13) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x00090fb5) vid4_progress_pane_g

0x6e2c,	// (0x000883ea) vid4_progress_pane_t1

0xa46d,	// (0x0008ba2b) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x00090fc0) vid4_progress_pane_t

0x6e44,	// (0x00088402) wait_bar_pane_cp07

0xebb5,	// (0x00090173) blid_firmament_pane_ParamLimits

0xebf8,	// (0x000901b6) popup_blid_sat_info2_window_g1

0xec1c,	// (0x000901da) popup_blid_sat_info2_window_t3

0xec2a,	// (0x000901e8) popup_blid_sat_info2_window_t4

0xec38,	// (0x000901f6) popup_blid_sat_info2_window_t5

0xec46,	// (0x00090204) popup_blid_sat_info2_window_t6

0xec56,	// (0x00090214) popup_blid_sat_info2_window_t7

0xec64,	// (0x00090222) popup_blid_sat_info2_window_t8

0xec72,	// (0x00090230) popup_blid_sat_info2_window_t9

0xec80,	// (0x0009023e) popup_blid_sat_info2_window_t10

0xed41,	// (0x000902ff) aid_firma_cardinal_ParamLimits

0xed55,	// (0x00090313) blid_firmament_pane_t1_ParamLimits

0xed6c,	// (0x0009032a) blid_firmament_pane_t2_ParamLimits

0xed83,	// (0x00090341) blid_firmament_pane_t3_ParamLimits

0xed9a,	// (0x00090358) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x00090bde) blid_firmament_pane_t_ParamLimits

0xedb1,	// (0x0009036f) blid_sat_info_pane_ParamLimits

0xb2b5,	// (0x0008c873) main_cam_set_pane_ParamLimits

0x4bd4,	// (0x00086192) aid_size_cell_colour_35_ParamLimits

0x4bf4,	// (0x000861b2) aid_size_cell_colour_112_ParamLimits

0x4c14,	// (0x000861d2) aid_size_cell_effect_ParamLimits

0xc96b,	// (0x0008df29) bg_tb_trans_pane_cp02_ParamLimits

0xc2b5,	// (0x0008d873) heading_imed_pane_ParamLimits

0x4c34,	// (0x000861f2) listscroll_imed_pane_ParamLimits

0xe096,	// (0x0008f654) popup_call2_audio_first_window_g5_ParamLimits

0xe096,	// (0x0008f654) popup_call2_audio_first_window_g5

0x548b,	// (0x00086a49) aid_size_touch_image3_arrow_left_ParamLimits

0x548b,	// (0x00086a49) aid_size_touch_image3_arrow_left

0x54b7,	// (0x00086a75) aid_size_touch_image3_arrow_right_ParamLimits

0x54b7,	// (0x00086a75) aid_size_touch_image3_arrow_right

0xa482,	// (0x0008ba40) vid4_progress_pane_t3

0x50e2,	// (0x000866a0) main_hwr_training_symbol_option_pane_ParamLimits

0x50e2,	// (0x000866a0) main_hwr_training_symbol_option_pane

0x5102,	// (0x000866c0) popup_hwr_training_preview_window_ParamLimits

0x5102,	// (0x000866c0) popup_hwr_training_preview_window

0x514f,	// (0x0008670d) hwr_training_navi_pane_g5_ParamLimits

0x514f,	// (0x0008670d) hwr_training_navi_pane_g5

0x5cd1,	// (0x0008728f) popup_char_count_window

0xb2b5,	// (0x0008c873) bg_popup_sub_pane_cp20_ParamLimits

0x66f9,	// (0x00087cb7) list_vitu2_match_list_pane_ParamLimits

0x6705,	// (0x00087cc3) vitu2_page_scroll_pane_ParamLimits

0x6705,	// (0x00087cc3) vitu2_page_scroll_pane

0xa859,	// (0x0008be17) list_single_hwr_training_symbol_option_pane_ParamLimits

0xa859,	// (0x0008be17) list_single_hwr_training_symbol_option_pane

0xa86c,	// (0x0008be2a) list_single_hwr_training_symbol_option_pane_g1

0xa874,	// (0x0008be32) list_single_hwr_training_symbol_option_pane_t1

0xa882,	// (0x0008be40) bg_button_pane_cp023

0xa88b,	// (0x0008be49) bg_button_pane_cp024

0xa8be,	// (0x0008be7c) vitu2_page_scroll_pane_g1

0xa8c6,	// (0x0008be84) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x00090fc7) vitu2_page_scroll_pane_g

0xa8ce,	// (0x0008be8c) vitu2_page_scroll_pane_t1

0xeb2b,	// (0x000900e9) popup_char_count_window_g1

0xa8dd,	// (0x0008be9b) popup_char_count_window_g2

0xa8e6,	// (0x0008bea4) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x00090fcc) popup_char_count_window_g

0xa8ef,	// (0x0008bead) popup_char_count_window_t1

0xb2ab,	// (0x0008c869) main_vded2_pane

0x4d5b,	// (0x00086319) aid_size_cell_imed_line

0x4d65,	// (0x00086323) grid_imed_line_width_pane

0xa2b3,	// (0x0008b871) vid4_indicators_pane_g4

0xa8fd,	// (0x0008bebb) cell_imed_line_width_pane_ParamLimits

0xa8fd,	// (0x0008bebb) cell_imed_line_width_pane

0xa911,	// (0x0008becf) cell_imed_line_width_pane_g1

0xa91a,	// (0x0008bed8) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x00090fd3) cell_imed_line_width_pane_g

0x6e57,	// (0x00088415) main_vded2_pane_g1_ParamLimits

0x6e57,	// (0x00088415) main_vded2_pane_g1

0x6e6d,	// (0x0008842b) main_vded2_pane_g2_ParamLimits

0x6e6d,	// (0x0008842b) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x00090fd8) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x00090fd8) main_vded2_pane_g

0x6e7f,	// (0x0008843d) vded2_slider_pane_ParamLimits

0x6e7f,	// (0x0008843d) vded2_slider_pane

0x6e8f,	// (0x0008844d) aid_size_touch_vded2_end

0x6e99,	// (0x00088457) aid_size_touch_vded2_playhead

0xa922,	// (0x0008bee0) aid_size_touch_vded2_start

0xa92a,	// (0x0008bee8) vded2_slider_bg_pane

0xa933,	// (0x0008bef1) vded2_slider_pane_g1

0xa93c,	// (0x0008befa) vded2_slider_pane_g2

0x6ea3,	// (0x00088461) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x00090fdd) vded2_slider_pane_g

0xa944,	// (0x0008bf02) vded2_slider_bg_pane_g1

0xa94d,	// (0x0008bf0b) vded2_slider_bg_pane_g2

0xa956,	// (0x0008bf14) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x00090fe4) vded2_slider_bg_pane_g

0x2ff7,	// (0x000845b5) aid_postcard_touch_down_pane_ParamLimits

0x2ff7,	// (0x000845b5) aid_postcard_touch_down_pane

0x300d,	// (0x000845cb) aid_postcard_touch_up_pane_ParamLimits

0x300d,	// (0x000845cb) aid_postcard_touch_up_pane

0xb2ab,	// (0x0008c869) main_blid2_pane

0x9e12,	// (0x0008b3d0) popup_blid2_search_window

0xb2ab,	// (0x0008c869) blid2_gps_pane

0xb2ab,	// (0x0008c869) blid2_navig_pane

0xb2ab,	// (0x0008c869) blid2_search_pane

0xb2ab,	// (0x0008c869) blid2_tripm_pane

0x6eae,	// (0x0008846c) blid2_search_pane_g1_ParamLimits

0x6eae,	// (0x0008846c) blid2_search_pane_g1

0x6ec8,	// (0x00088486) blid2_search_pane_t1_ParamLimits

0x6ec8,	// (0x00088486) blid2_search_pane_t1

0x6eda,	// (0x00088498) aid_size_cell_blid2_gps_ParamLimits

0x6eda,	// (0x00088498) aid_size_cell_blid2_gps

0x6ef2,	// (0x000884b0) blid2_gps_pane_g1_ParamLimits

0x6ef2,	// (0x000884b0) blid2_gps_pane_g1

0x6f06,	// (0x000884c4) grid_blid2_satellite_pane_ParamLimits

0x6f06,	// (0x000884c4) grid_blid2_satellite_pane

0x6f20,	// (0x000884de) blid2_navig_pane_g1_ParamLimits

0x6f20,	// (0x000884de) blid2_navig_pane_g1

0x6f2c,	// (0x000884ea) blid2_navig_pane_t1_ParamLimits

0x6f2c,	// (0x000884ea) blid2_navig_pane_t1

0x6f47,	// (0x00088505) blid2_navig_pane_t2_ParamLimits

0x6f47,	// (0x00088505) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x00090feb) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x00090feb) blid2_navig_pane_t

0x6f62,	// (0x00088520) blid2_navig_ring_pane_ParamLimits

0x6f62,	// (0x00088520) blid2_navig_ring_pane

0x6f7b,	// (0x00088539) blid2_speed_pane_ParamLimits

0x6f7b,	// (0x00088539) blid2_speed_pane

0x6f87,	// (0x00088545) blid2_tripm_pane_g1_ParamLimits

0x6f87,	// (0x00088545) blid2_tripm_pane_g1

0x6fa0,	// (0x0008855e) blid2_tripm_pane_g2_ParamLimits

0x6fa0,	// (0x0008855e) blid2_tripm_pane_g2

0x6fb4,	// (0x00088572) blid2_tripm_pane_g3_ParamLimits

0x6fb4,	// (0x00088572) blid2_tripm_pane_g3

0x6fc8,	// (0x00088586) blid2_tripm_pane_g4_ParamLimits

0x6fc8,	// (0x00088586) blid2_tripm_pane_g4

0x6fdc,	// (0x0008859a) blid2_tripm_pane_g5_ParamLimits

0x6fdc,	// (0x0008859a) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x00090ff0) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x00090ff0) blid2_tripm_pane_g

0x7002,	// (0x000885c0) blid2_tripm_pane_t1_ParamLimits

0x7002,	// (0x000885c0) blid2_tripm_pane_t1

0x701d,	// (0x000885db) blid2_tripm_pane_t2_ParamLimits

0x701d,	// (0x000885db) blid2_tripm_pane_t2

0x7036,	// (0x000885f4) blid2_tripm_pane_t3_ParamLimits

0x7036,	// (0x000885f4) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x00090ffd) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x00090ffd) blid2_tripm_pane_t

0x707d,	// (0x0008863b) cell_blid2_satellite_pane_ParamLimits

0x707d,	// (0x0008863b) cell_blid2_satellite_pane

0x709b,	// (0x00088659) cell_blid2_satellite_pane_g1

0xa95f,	// (0x0008bf1d) cell_blid2_satellite_pane_t1

0xbe54,	// (0x0008d412) blid2_speed_pane_g1

0xa96d,	// (0x0008bf2b) blid2_speed_pane_t1

0xa97b,	// (0x0008bf39) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x00091006) blid2_speed_pane_t

0xbe54,	// (0x0008d412) blid2_navig_ring_pane_g1

0x70a4,	// (0x00088662) blid2_navig_ring_pane_g2

0x70ac,	// (0x0008866a) blid2_navig_ring_pane_g3

0x70b4,	// (0x00088672) blid2_navig_ring_pane_g4

0x70bc,	// (0x0008867a) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x0009100b) blid2_navig_ring_pane_g

0xb2ab,	// (0x0008c869) bg_popup_window_pane_cp011

0xa989,	// (0x0008bf47) popup_blid2_search_window_g1

0xa991,	// (0x0008bf4f) popup_blid2_search_window_t1

0xa99f,	// (0x0008bf5d) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x00091016) popup_blid2_search_window_t

0xbf54,	// (0x0008d512) main_browser_pane_g1

0xba1e,	// (0x0008cfdc) main_browser_pane_ParamLimits

0xb2b5,	// (0x0008c873) bg_button_pane_cp011_ParamLimits

0x5d6b,	// (0x00087329) cell_vitu2_function_pane_g1_ParamLimits

0xc96b,	// (0x0008df29) bg_popup_sub_pane_cp22_ParamLimits

0x0648,	// (0x00081c06) input_focus_pane_cp08_ParamLimits

0x68ad,	// (0x00087e6b) popup_vitu2_query_button_pane_ParamLimits

0x68ad,	// (0x00087e6b) popup_vitu2_query_button_pane

0x0663,	// (0x00081c21) popup_vitu2_query_input_button_pane

0x68bc,	// (0x00087e7a) popup_vitu2_query_window_g1_ParamLimits

0x066b,	// (0x00081c29) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x00090f17) popup_vitu2_query_window_g_ParamLimits

0xb2ab,	// (0x0008c869) bg_button_pane_cp026

0x70c4,	// (0x00088682) popup_vitu2_query_input_button_pane_g1

0xb2ab,	// (0x0008c869) bg_button_pane_cp025

0xa9ad,	// (0x0008bf6b) popup_vitu2_query_button_pane_t1

0x3f26,	// (0x000854e4) main_mp3_pane_t6

0x3f34,	// (0x000854f2) popup_slider_window_cp01

0xa217,	// (0x0008b7d5) cam4_battery_pane

0xa270,	// (0x0008b82e) cam4_battery_pane_cp02

0xa42d,	// (0x0008b9eb) cam4_battery_pane_cp01

0xa42d,	// (0x0008b9eb) cam4_battery_pane_cp03

0xbe54,	// (0x0008d412) cam4_battery_pane_g1

0xa9bb,	// (0x0008bf79) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x0009101b) cam4_battery_pane_g

0xec8e,	// (0x0009024c) popup_blid_sat_info2_window_t11

0xc6bb,	// (0x0008dc79) aid_size_touch_mv_arrow_left_ParamLimits

0xc6e4,	// (0x0008dca2) aid_size_touch_mv_arrow_right_ParamLimits

0xc762,	// (0x0008dd20) navi_pane_g1_ParamLimits

0xc76e,	// (0x0008dd2c) navi_pane_g2_ParamLimits

0xc79c,	// (0x0008dd5a) navi_pane_g3_ParamLimits

0xf334,	// (0x000908f2) navi_pane_g_ParamLimits

0x2d0c,	// (0x000842ca) navi_pane_mv_t1_ParamLimits

0x4c6d,	// (0x0008622b) grid_imed_effect_pane_ParamLimits

0x1a95,	// (0x00083053) aid_placing_vt_slider_lsc

0xbea3,	// (0x0008d461) aid_placing_vt_slider_prt

0xb2b5,	// (0x0008c873) bg_tb_trans_pane_cp01_ParamLimits

0xef0e,	// (0x000904cc) popup_image_details_window_g1_ParamLimits

0xef21,	// (0x000904df) popup_image_details_window_g2_ParamLimits

0xef36,	// (0x000904f4) popup_image_details_window_g3_ParamLimits

0xef36,	// (0x000904f4) popup_image_details_window_g3

0xf660,	// (0x00090c1e) popup_image_details_window_g_ParamLimits

0xef4a,	// (0x00090508) popup_image_details_window_t1_ParamLimits

0xef5c,	// (0x0009051a) popup_image_details_window_t2_ParamLimits

0xef75,	// (0x00090533) popup_image_details_window_t3_ParamLimits

0xef89,	// (0x00090547) popup_image_details_window_t4_ParamLimits

0xefa4,	// (0x00090562) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x00090c25) popup_image_details_window_t_ParamLimits

0x6d21,	// (0x000882df) cl_header_name_pane_ParamLimits

0x6d21,	// (0x000882df) cl_header_name_pane

0x70cc,	// (0x0008868a) cl_header_name_pane_t1_ParamLimits

0x70cc,	// (0x0008868a) cl_header_name_pane_t1

0x70ed,	// (0x000886ab) cl_header_name_pane_t2_ParamLimits

0x70ed,	// (0x000886ab) cl_header_name_pane_t2

0x712f,	// (0x000886ed) cl_header_name_pane_t3_ParamLimits

0x712f,	// (0x000886ed) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x00091020) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x00091020) cl_header_name_pane_t

0xc82b,	// (0x0008dde9) navi_pane_mv_g2_ParamLimits

0x5cb9,	// (0x00087277) field_vitu2_entry_pane_g1_ParamLimits

0x5cc5,	// (0x00087283) field_vitu2_entry_pane_g2_ParamLimits

0xc949,	// (0x0008df07) field_vitu2_entry_pane_g3_ParamLimits

0xc949,	// (0x0008df07) field_vitu2_entry_pane_g3

0xf862,	// (0x00090e20) field_vitu2_entry_pane_g_ParamLimits

0x5ce7,	// (0x000872a5) cell_vitu2_itu_pane_g1_ParamLimits

0x5cff,	// (0x000872bd) cell_vitu2_itu_pane_g2_ParamLimits

0x5cff,	// (0x000872bd) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x00090e2c) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x00090e2c) cell_vitu2_itu_pane_g

0xb2b5,	// (0x0008c873) bg_vkb2_func_pane_cp05_ParamLimits

0xb2b5,	// (0x0008c873) bg_vkb2_func_pane_cp05

0xb2b5,	// (0x0008c873) bg_vkb2_func_pane_cp03

0xb2b5,	// (0x0008c873) bg_vkb2_func_pane_cp04

0xb2b5,	// (0x0008c873) bg_vkb2_func_pane_cp10_ParamLimits

0xb2b5,	// (0x0008c873) bg_vkb2_func_pane_cp10

0x078a,	// (0x00081d48) bg_vkb2_func_pane_cp08

0x6c85,	// (0x00088243) bg_vkb2_func_pane_cp06

0x6c91,	// (0x0008824f) bg_vkb2_func_pane_cp07

0xa894,	// (0x0008be52) bg_vkb2_func_pane_cp11_ParamLimits

0xa894,	// (0x0008be52) bg_vkb2_func_pane_cp11

0xa8a9,	// (0x0008be67) bg_vkb2_func_pane_cp12_ParamLimits

0xa8a9,	// (0x0008be67) bg_vkb2_func_pane_cp12

0xb2ab,	// (0x0008c869) bg_vkb2_func_pane_cp09

0x5d89,	// (0x00087347) bg_vkb2_func_pane_g1

0xc065,	// (0x0008d623) bg_vkb2_func_pane_g2

0x5d91,	// (0x0008734f) bg_vkb2_func_pane_g3

0x5d99,	// (0x00087357) bg_vkb2_func_pane_g4

0x6711,	// (0x00087ccf) bg_vkb2_func_pane_g5

0x5db1,	// (0x0008736f) bg_vkb2_func_pane_g6

0x5db9,	// (0x00087377) bg_vkb2_func_pane_g7

0x5da9,	// (0x00087367) bg_vkb2_func_pane_g8

0xc045,	// (0x0008d603) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x00091027) bg_vkb2_func_pane_g

0x6ff0,	// (0x000885ae) blid2_tripm_pane_g6_ParamLimits

0x6ff0,	// (0x000885ae) blid2_tripm_pane_g6

0x530f,	// (0x000868cd) mp4_progress_pane_g1

0x7069,	// (0x00088627) blid2_tripm_values_pane_ParamLimits

0x7069,	// (0x00088627) blid2_tripm_values_pane

0x7160,	// (0x0008871e) blid2_tripm_values_pane_t1

0x716e,	// (0x0008872c) blid2_tripm_values_pane_t2

0x717c,	// (0x0008873a) blid2_tripm_values_pane_t3

0x718a,	// (0x00088748) blid2_tripm_values_pane_t4

0x7198,	// (0x00088756) blid2_tripm_values_pane_t5

0x71a6,	// (0x00088764) blid2_tripm_values_pane_t6

0x71b4,	// (0x00088772) blid2_tripm_values_pane_t7

0x71c2,	// (0x00088780) blid2_tripm_values_pane_t8

0x71d0,	// (0x0008878e) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x0009103a) blid2_tripm_values_pane_t

0x1ad7,	// (0x00083095) call_video_pane_t1_ParamLimits

0x1af5,	// (0x000830b3) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x000907a0) call_video_pane_t_ParamLimits

0x048c,	// (0x00081a4a) msg_header_pane_g1_ParamLimits

0xca20,	// (0x0008dfde) msg_header_pane_g2_ParamLimits

0xca20,	// (0x0008dfde) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x00090995) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x00090995) msg_header_pane_g

0xba1e,	// (0x0008cfdc) main_clock2_pane_ParamLimits

0x48eb,	// (0x00085ea9) grid_clock2_toolbar_pane_ParamLimits

0x48eb,	// (0x00085ea9) grid_clock2_toolbar_pane

0x48eb,	// (0x00085ea9) listscroll_clock2_pane_ParamLimits

0x48eb,	// (0x00085ea9) listscroll_clock2_pane

0x4a05,	// (0x00085fc3) main_clock2_pane_t3_ParamLimits

0x4a05,	// (0x00085fc3) main_clock2_pane_t3

0x4a29,	// (0x00085fe7) main_clock2_pane_t4_ParamLimits

0x4a29,	// (0x00085fe7) main_clock2_pane_t4

0xa9c5,	// (0x0008bf83) cell_clock2_toolbar_pane

0xa9cd,	// (0x0008bf8b) cell_clock2_toolbar_pane_cp01

0xa9cd,	// (0x0008bf8b) cell_clock2_toolbar_pane_cp02

0xa9d5,	// (0x0008bf93) cell_clock2_toolbar_pane_cp03

0xa9dd,	// (0x0008bf9b) list_clock2_pane

0xc631,	// (0x0008dbef) scroll_pane_cp10

0xa9e5,	// (0x0008bfa3) list_single_clock2_pane_ParamLimits

0xa9e5,	// (0x0008bfa3) list_single_clock2_pane

0xbe1e,	// (0x0008d3dc) list_highlight_pane_cp08

0xa9f2,	// (0x0008bfb0) list_single_clock2_pane_t1

0xaa00,	// (0x0008bfbe) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x0009104d) list_single_clock2_pane_t

0xb2ab,	// (0x0008c869) bg_button_pane_cp10

0xaa0e,	// (0x0008bfcc) cell_clock2_toolbar_pane_g1

0x2f83,	// (0x00084541) aid_main_viewer_pane_g1_ParamLimits

0x2f83,	// (0x00084541) aid_main_viewer_pane_g1

0x2f91,	// (0x0008454f) aid_main_viewer_pane_g2_ParamLimits

0x2f91,	// (0x0008454f) aid_main_viewer_pane_g2

0x2f9f,	// (0x0008455d) aid_main_viewer_pane_g3_ParamLimits

0x2f9f,	// (0x0008455d) aid_main_viewer_pane_g3

0x2fae,	// (0x0008456c) aid_main_viewer_pane_g4_ParamLimits

0x2fae,	// (0x0008456c) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x000909a6) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x000909a6) aid_main_viewer_pane_g

0x38f5,	// (0x00084eb3) main_calc_pane_ParamLimits

0x3909,	// (0x00084ec7) main_dialer2_pane_ParamLimits

0xb2ab,	// (0x0008c869) main_cam6_pane

0xb2ab,	// (0x0008c869) main_vid6_pane

0x48f7,	// (0x00085eb5) listscroll_gen_pane_cp06_ParamLimits

0x48f7,	// (0x00085eb5) listscroll_gen_pane_cp06

0x4a4c,	// (0x0008600a) main_clock2_pane_t5_ParamLimits

0x4a4c,	// (0x0008600a) main_clock2_pane_t5

0x4aaa,	// (0x00086068) aid_call2_pane_cp10_ParamLimits

0x4abc,	// (0x0008607a) aid_call_pane_cp10_ParamLimits

0xc6af,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc6af,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ace,	// (0x0008608c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ace,	// (0x0008608c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc6af,	// (0x0008dc6d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x00090cda) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ae4,	// (0x000860a2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5438,	// (0x000869f6) cell_dialer2_keypad_pane_g2_ParamLimits

0x5438,	// (0x000869f6) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x00090dbf) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x00090dbf) cell_dialer2_keypad_pane_g

0x5454,	// (0x00086a12) cell_dialer2_keypad_pane_t1

0x6198,	// (0x00087756) main_cset_text2_pane_ParamLimits

0x6198,	// (0x00087756) main_cset_text2_pane

0x6c51,	// (0x0008820f) area_vitu2_query_pane_g1_ParamLimits

0x0744,	// (0x00081d02) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x00090f6a) area_vitu2_query_pane_g_ParamLimits

0xa409,	// (0x0008b9c7) area_vitu2_query_pane_t7_ParamLimits

0xa409,	// (0x0008b9c7) area_vitu2_query_pane_t7

0x6c85,	// (0x00088243) bg_button_pane_cp018_ParamLimits

0x6c91,	// (0x0008824f) bg_button_pane_cp021_ParamLimits

0x077b,	// (0x00081d39) bg_button_pane_cp022_ParamLimits

0x078a,	// (0x00081d48) bg_vkb2_func_pane_cp08_ParamLimits

0x6c85,	// (0x00088243) bg_vkb2_func_pane_cp06_ParamLimits

0x6c91,	// (0x0008824f) bg_vkb2_func_pane_cp07_ParamLimits

0x079a,	// (0x00081d58) input_focus_pane_cp09_ParamLimits

0x71de,	// (0x0008879c) cam6_autofocus_pane_ParamLimits

0x71de,	// (0x0008879c) cam6_autofocus_pane

0x71ea,	// (0x000887a8) cam6_image_uncrop_pane_ParamLimits

0x71ea,	// (0x000887a8) cam6_image_uncrop_pane

0x71fa,	// (0x000887b8) cam6_indi_pane_ParamLimits

0x71fa,	// (0x000887b8) cam6_indi_pane

0x7210,	// (0x000887ce) cam6_mode_pane_ParamLimits

0x7210,	// (0x000887ce) cam6_mode_pane

0x7222,	// (0x000887e0) cam6_timer_pane_ParamLimits

0x7222,	// (0x000887e0) cam6_timer_pane

0x722e,	// (0x000887ec) cam6_zoom_pane_ParamLimits

0x722e,	// (0x000887ec) cam6_zoom_pane

0x723b,	// (0x000887f9) cam6_mode_pane_g1_ParamLimits

0x723b,	// (0x000887f9) cam6_mode_pane_g1

0x724b,	// (0x00088809) cam6_mode_pane_g2_ParamLimits

0x724b,	// (0x00088809) cam6_mode_pane_g2

0x725b,	// (0x00088819) cam6_mode_pane_g3_ParamLimits

0x725b,	// (0x00088819) cam6_mode_pane_g3

0x726b,	// (0x00088829) cam6_mode_pane_g4_ParamLimits

0x726b,	// (0x00088829) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x00091052) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x00091052) cam6_mode_pane_g

0x3dc7,	// (0x00085385) bg_tb_trans_pane_cp08_ParamLimits

0x3dc7,	// (0x00085385) bg_tb_trans_pane_cp08

0xaa16,	// (0x0008bfd4) cam6_battery_pane_ParamLimits

0xaa16,	// (0x0008bfd4) cam6_battery_pane

0xaa2c,	// (0x0008bfea) cam6_indi_pane_g1_ParamLimits

0xaa2c,	// (0x0008bfea) cam6_indi_pane_g1

0xaa3e,	// (0x0008bffc) cam6_indi_pane_g2_ParamLimits

0xaa3e,	// (0x0008bffc) cam6_indi_pane_g2

0xaa50,	// (0x0008c00e) cam6_indi_pane_g3_ParamLimits

0xaa50,	// (0x0008c00e) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x0009105b) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x0009105b) cam6_indi_pane_g

0xaa62,	// (0x0008c020) cam6_indi_pane_t1_ParamLimits

0xaa62,	// (0x0008c020) cam6_indi_pane_t1

0x5a88,	// (0x00087046) cam6_autofocus_pane_g1

0x5a90,	// (0x0008704e) cam6_autofocus_pane_g2

0x5a98,	// (0x00087056) cam6_autofocus_pane_g3

0x5aa0,	// (0x0008705e) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x00091062) cam6_autofocus_pane_g

0xaa88,	// (0x0008c046) cam6_timer_pane_g1

0xaa90,	// (0x0008c04e) cam6_timer_pane_t1

0xaa9e,	// (0x0008c05c) cam6_zoom_cont_pane

0xaaa6,	// (0x0008c064) cam6_zoom_pane_g1

0xaaaf,	// (0x0008c06d) cam6_zoom_pane_g2

0x727b,	// (0x00088839) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x0009106b) cam6_zoom_pane_g

0xbe54,	// (0x0008d412) cam6_battery_pane_g1

0xbe54,	// (0x0008d412) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x00090956) cam6_battery_pane_g

0xaaa6,	// (0x0008c064) cam6_zoom_cont_pane_g1

0xaaaf,	// (0x0008c06d) cam6_zoom_cont_pane_g2

0xaab8,	// (0x0008c076) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x00091072) cam6_zoom_cont_pane_g

0x7296,	// (0x00088854) cam6_mode_pane_cp_ParamLimits

0x7296,	// (0x00088854) cam6_mode_pane_cp

0x72a8,	// (0x00088866) cam6_zoom_pane_cp_ParamLimits

0x72a8,	// (0x00088866) cam6_zoom_pane_cp

0x72b4,	// (0x00088872) vid6_image_uncrop_cif_pane_ParamLimits

0x72b4,	// (0x00088872) vid6_image_uncrop_cif_pane

0x72c4,	// (0x00088882) vid6_image_uncrop_nhd_pane_ParamLimits

0x72c4,	// (0x00088882) vid6_image_uncrop_nhd_pane

0x72d3,	// (0x00088891) vid6_image_uncrop_vga_pane_ParamLimits

0x72d3,	// (0x00088891) vid6_image_uncrop_vga_pane

0x72e2,	// (0x000888a0) vid6_image_uncrop_wvga_pane_ParamLimits

0x72e2,	// (0x000888a0) vid6_image_uncrop_wvga_pane

0x72f1,	// (0x000888af) vid6_indi_pane_ParamLimits

0x72f1,	// (0x000888af) vid6_indi_pane

0x3dc7,	// (0x00085385) bg_tb_trans_pane_cp09_ParamLimits

0x3dc7,	// (0x00085385) bg_tb_trans_pane_cp09

0xaad0,	// (0x0008c08e) cam6_battery_pane_cp_ParamLimits

0xaad0,	// (0x0008c08e) cam6_battery_pane_cp

0xaadc,	// (0x0008c09a) vid6_indi_pane_g1_ParamLimits

0xaadc,	// (0x0008c09a) vid6_indi_pane_g1

0xaaee,	// (0x0008c0ac) vid6_indi_pane_g2_ParamLimits

0xaaee,	// (0x0008c0ac) vid6_indi_pane_g2

0xab00,	// (0x0008c0be) vid6_indi_pane_g3_ParamLimits

0xab00,	// (0x0008c0be) vid6_indi_pane_g3

0xab15,	// (0x0008c0d3) vid6_indi_pane_g4_ParamLimits

0xab15,	// (0x0008c0d3) vid6_indi_pane_g4

0xab2a,	// (0x0008c0e8) vid6_indi_pane_g5_ParamLimits

0xab2a,	// (0x0008c0e8) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x00091079) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x00091079) vid6_indi_pane_g

0xab44,	// (0x0008c102) vid6_indi_pane_t1_ParamLimits

0xab44,	// (0x0008c102) vid6_indi_pane_t1

0xab5a,	// (0x0008c118) vid6_indi_pane_t2_ParamLimits

0xab5a,	// (0x0008c118) vid6_indi_pane_t2

0xab82,	// (0x0008c140) vid6_indi_pane_t3_ParamLimits

0xab82,	// (0x0008c140) vid6_indi_pane_t3

0xabaa,	// (0x0008c168) vid6_indi_pane_t4_ParamLimits

0xabaa,	// (0x0008c168) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x00091084) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x00091084) vid6_indi_pane_t

0xabce,	// (0x0008c18c) wait_bar_pane_cp08

0x7309,	// (0x000888c7) main_cset_text2_pane_t1_ParamLimits

0x7309,	// (0x000888c7) main_cset_text2_pane_t1

0x7284,	// (0x00088842) listscroll_gen_pane_cp06_t1_ParamLimits

0x7284,	// (0x00088842) listscroll_gen_pane_cp06_t1

0xb2ab,	// (0x0008c869) main_cam6_set_pane

0xb9ac,	// (0x0008cf6a) bg_tb_trans_pane_cp06_ParamLimits

0xa21f,	// (0x0008b7dd) cam4_indicators_pane_g1_ParamLimits

0xa230,	// (0x0008b7ee) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x00090dfc) cam4_indicators_pane_g_ParamLimits

0xa24e,	// (0x0008b80c) cam4_indicators_pane_t1_ParamLimits

0xb2b5,	// (0x0008c873) bg_tb_trans_pane_cp07_ParamLimits

0xa27a,	// (0x0008b838) vid4_indicators_pane_g1_ParamLimits

0xa28e,	// (0x0008b84c) vid4_indicators_pane_g2_ParamLimits

0xa2a2,	// (0x0008b860) vid4_indicators_pane_g3_ParamLimits

0xa2b3,	// (0x0008b871) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x00090e0e) vid4_indicators_pane_g_ParamLimits

0xa2d1,	// (0x0008b88f) vid4_indicators_pane_t1_ParamLimits

0xa435,	// (0x0008b9f3) vid4_progress_pane_g1_ParamLimits

0xa445,	// (0x0008ba03) vid4_progress_pane_g2_ParamLimits

0x6e1a,	// (0x000883d8) vid4_progress_pane_g3_ParamLimits

0xa455,	// (0x0008ba13) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x00090fb5) vid4_progress_pane_g_ParamLimits

0x6e2c,	// (0x000883ea) vid4_progress_pane_t1_ParamLimits

0xa46d,	// (0x0008ba2b) vid4_progress_pane_t2_ParamLimits

0xa482,	// (0x0008ba40) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x00090fc0) vid4_progress_pane_t_ParamLimits

0x6e44,	// (0x00088402) wait_bar_pane_cp07_ParamLimits

0x7326,	// (0x000888e4) main_cam6_set_pane_g2_ParamLimits

0x7326,	// (0x000888e4) main_cam6_set_pane_g2

0x734a,	// (0x00088908) main_cset6_listscroll_pane_ParamLimits

0x734a,	// (0x00088908) main_cset6_listscroll_pane

0x736a,	// (0x00088928) main_cset6_slider_pane_ParamLimits

0x736a,	// (0x00088928) main_cset6_slider_pane

0x7380,	// (0x0008893e) main_cset6_text2_pane_ParamLimits

0x7380,	// (0x0008893e) main_cset6_text2_pane

0xabdd,	// (0x0008c19b) main_cset6_text_pane

0xabe5,	// (0x0008c1a3) main_cset_list_pane_copy1_ParamLimits

0xabe5,	// (0x0008c1a3) main_cset_list_pane_copy1

0xabf5,	// (0x0008c1b3) scroll_pane_cp028_copy1

0x738e,	// (0x0008894c) cset_list_set_pane_copy1

0x739f,	// (0x0008895d) aid_position_infowindow_above_copy1

0x73a7,	// (0x00088965) aid_position_infowindow_below_copy1

0x73af,	// (0x0008896d) cset_list_set_pane_g1_copy1

0x07be,	// (0x00081d7c) cset_list_set_pane_g3_copy1_ParamLimits

0x07be,	// (0x00081d7c) cset_list_set_pane_g3_copy1

0x07cd,	// (0x00081d8b) cset_list_set_pane_t1_copy1_ParamLimits

0x07cd,	// (0x00081d8b) cset_list_set_pane_t1_copy1

0xb2b5,	// (0x0008c873) list_highlight_pane_cp021_copy1_ParamLimits

0xb2b5,	// (0x0008c873) list_highlight_pane_cp021_copy1

0xabfe,	// (0x0008c1bc) cset6_slider_pane_ParamLimits

0xabfe,	// (0x0008c1bc) cset6_slider_pane

0xac2a,	// (0x0008c1e8) main_cset6_slider_pane_g1_ParamLimits

0xac2a,	// (0x0008c1e8) main_cset6_slider_pane_g1

0x73b7,	// (0x00088975) main_cset6_slider_pane_g2_ParamLimits

0x73b7,	// (0x00088975) main_cset6_slider_pane_g2

0xac52,	// (0x0008c210) main_cset6_slider_pane_g3_ParamLimits

0xac52,	// (0x0008c210) main_cset6_slider_pane_g3

0x73df,	// (0x0008899d) main_cset6_slider_pane_g4_ParamLimits

0x73df,	// (0x0008899d) main_cset6_slider_pane_g4

0x73eb,	// (0x000889a9) main_cset6_slider_pane_g5_ParamLimits

0x73eb,	// (0x000889a9) main_cset6_slider_pane_g5

0x626b,	// (0x00087829) main_cset6_slider_pane_g7_ParamLimits

0x626b,	// (0x00087829) main_cset6_slider_pane_g7

0x6277,	// (0x00087835) main_cset6_slider_pane_g8_ParamLimits

0x6277,	// (0x00087835) main_cset6_slider_pane_g8

0x6283,	// (0x00087841) main_cset6_slider_pane_g9_ParamLimits

0x6283,	// (0x00087841) main_cset6_slider_pane_g9

0x628f,	// (0x0008784d) main_cset6_slider_pane_g10_ParamLimits

0x628f,	// (0x0008784d) main_cset6_slider_pane_g10

0x629b,	// (0x00087859) main_cset6_slider_pane_g11_ParamLimits

0x629b,	// (0x00087859) main_cset6_slider_pane_g11

0x62a7,	// (0x00087865) main_cset6_slider_pane_g12_ParamLimits

0x62a7,	// (0x00087865) main_cset6_slider_pane_g12

0x62b3,	// (0x00087871) main_cset6_slider_pane_g13_ParamLimits

0x62b3,	// (0x00087871) main_cset6_slider_pane_g13

0x62bf,	// (0x0008787d) main_cset6_slider_pane_g14_ParamLimits

0x62bf,	// (0x0008787d) main_cset6_slider_pane_g14

0x73f7,	// (0x000889b5) main_cset6_slider_pane_g15_ParamLimits

0x73f7,	// (0x000889b5) main_cset6_slider_pane_g15

0x62e3,	// (0x000878a1) main_cset6_slider_pane_g16_ParamLimits

0x62e3,	// (0x000878a1) main_cset6_slider_pane_g16

0x62ef,	// (0x000878ad) main_cset6_slider_pane_g17_ParamLimits

0x62ef,	// (0x000878ad) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x0009108d) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x0009108d) main_cset6_slider_pane_g

0xac5e,	// (0x0008c21c) main_cset6_slider_pane_t1_ParamLimits

0xac5e,	// (0x0008c21c) main_cset6_slider_pane_t1

0x7427,	// (0x000889e5) main_cset6_slider_pane_t2_ParamLimits

0x7427,	// (0x000889e5) main_cset6_slider_pane_t2

0x7452,	// (0x00088a10) main_cset6_slider_pane_t3_ParamLimits

0x7452,	// (0x00088a10) main_cset6_slider_pane_t3

0x747d,	// (0x00088a3b) main_cset6_slider_pane_t4_ParamLimits

0x747d,	// (0x00088a3b) main_cset6_slider_pane_t4

0x74a8,	// (0x00088a66) main_cset6_slider_pane_t5_ParamLimits

0x74a8,	// (0x00088a66) main_cset6_slider_pane_t5

0xac9f,	// (0x0008c25d) main_cset6_slider_pane_t7_ParamLimits

0xac9f,	// (0x0008c25d) main_cset6_slider_pane_t7

0x74d3,	// (0x00088a91) main_cset6_slider_pane_t8_ParamLimits

0x74d3,	// (0x00088a91) main_cset6_slider_pane_t8

0x74f7,	// (0x00088ab5) main_cset6_slider_pane_t9_ParamLimits

0x74f7,	// (0x00088ab5) main_cset6_slider_pane_t9

0x751b,	// (0x00088ad9) main_cset6_slider_pane_t10_ParamLimits

0x751b,	// (0x00088ad9) main_cset6_slider_pane_t10

0x753f,	// (0x00088afd) main_cset6_slider_pane_t11_ParamLimits

0x753f,	// (0x00088afd) main_cset6_slider_pane_t11

0xacd5,	// (0x0008c293) main_cset6_slider_pane_t14_ParamLimits

0xacd5,	// (0x0008c293) main_cset6_slider_pane_t14

0xad0e,	// (0x0008c2cc) main_cset6_slider_pane_t15_ParamLimits

0xad0e,	// (0x0008c2cc) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x000910b2) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x000910b2) main_cset6_slider_pane_t

0x654c,	// (0x00087b0a) cset_slider_pane_g1_copy1

0x6555,	// (0x00087b13) cset_slider_pane_g2_copy1

0x655e,	// (0x00087b1c) cset_slider_pane_g3_copy1

0xb2ab,	// (0x0008c869) bg_popup_sub_pane_cp011_copy1

0xad47,	// (0x0008c305) main_cset_text_pane_g1_copy1

0x6904,	// (0x00087ec2) main_cset_text_pane_t1_copy1

0x6912,	// (0x00087ed0) main_cset_text_pane_t2_copy1

0x6920,	// (0x00087ede) main_cset_text_pane_t3_copy1

0x692e,	// (0x00087eec) main_cset_text_pane_t4_copy1

0x693c,	// (0x00087efa) main_cset_text_pane_t5_copy1

0xad4f,	// (0x0008c30d) main_cset_text_pane_t6_copy1

0xad5d,	// (0x0008c31b) main_cset_text_pane_t7_copy1

0x7309,	// (0x000888c7) main_cset_text2_pane_t1_copy1

0xb2b5,	// (0x0008c873) main_ncimui_pane

0x3b53,	// (0x00085111) popup_query_ncimui_window_ParamLimits

0x3b53,	// (0x00085111) popup_query_ncimui_window

0x9ece,	// (0x0008b48c) field_cale_ev2_pane_g4_ParamLimits

0x9ece,	// (0x0008b48c) field_cale_ev2_pane_g4

0x5287,	// (0x00086845) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5287,	// (0x00086845) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x00090d96) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x00090d96) cell_video_dialer_keypad_pane_g

0x529f,	// (0x0008685d) cell_video_dialer_keypad_pane_t1

0xb2ab,	// (0x0008c869) bg_popup_window_pane_cp012

0xe903,	// (0x0008fec1) heading_pane_cp06

0xad89,	// (0x0008c347) ncim_query_content_pane

0xb2ab,	// (0x0008c869) bg_popup_heading_pane_cp01

0xad91,	// (0x0008c34f) ncim_heading_pane_t1

0xad9f,	// (0x0008c35d) ncim_indicator_popup_pane

0xadb1,	// (0x0008c36f) ncim_query_button_pane

0xadc5,	// (0x0008c383) ncim_query_content_pane_t1

0xadd7,	// (0x0008c395) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x000910f6) ncim_query_content_pane_t

0xae11,	// (0x0008c3cf) ncim_query_list_pane

0xae23,	// (0x0008c3e1) ncim_query_popup_pane

0xad9f,	// (0x0008c35d) ncim_indicator_popup_pane_ParamLimits

0x768c,	// (0x00088c4a) ncim_query_content_pane_g1_ParamLimits

0x768c,	// (0x00088c4a) ncim_query_content_pane_g1

0xadc5,	// (0x0008c383) ncim_query_content_pane_t1_ParamLimits

0xadd7,	// (0x0008c395) ncim_query_content_pane_t2_ParamLimits

0x7698,	// (0x00088c56) ncim_query_content_pane_t3_ParamLimits

0x7698,	// (0x00088c56) ncim_query_content_pane_t3

0x76c0,	// (0x00088c7e) ncim_query_content_pane_t4_ParamLimits

0x76c0,	// (0x00088c7e) ncim_query_content_pane_t4

0x76e8,	// (0x00088ca6) ncim_query_content_pane_t5_ParamLimits

0x76e8,	// (0x00088ca6) ncim_query_content_pane_t5

0xade9,	// (0x0008c3a7) ncim_query_content_pane_t6_ParamLimits

0xade9,	// (0x0008c3a7) ncim_query_content_pane_t6

0xfb38,	// (0x000910f6) ncim_query_content_pane_t_ParamLimits

0xae11,	// (0x0008c3cf) ncim_query_list_pane_ParamLimits

0xae23,	// (0x0008c3e1) ncim_query_popup_pane_ParamLimits

0xae37,	// (0x0008c3f5) wait_bar_pane_cp04

0xb2ab,	// (0x0008c869) input_focus_pane_cp011

0xae3f,	// (0x0008c3fd) ncim_query_popup_pane_t1

0xae4d,	// (0x0008c40b) ncim_list_query_list_pane_ParamLimits

0xae4d,	// (0x0008c40b) ncim_list_query_list_pane

0xb2ab,	// (0x0008c869) bg_button_pane_cp027

0xae5a,	// (0x0008c418) ncim_query_button_pane_g1

0xb2ab,	// (0x0008c869) list_highlight_pane_cp012

0xae64,	// (0x0008c422) ncim_list_query_list_pane_g1

0xae6c,	// (0x0008c42a) ncim_list_query_list_pane_t1

0xa23f,	// (0x0008b7fd) cam4_indicators_pane_g3_ParamLimits

0xa23f,	// (0x0008b7fd) cam4_indicators_pane_g3

0xa2bf,	// (0x0008b87d) vid4_indicators_pane_g5_ParamLimits

0xa2bf,	// (0x0008b87d) vid4_indicators_pane_g5

0xa461,	// (0x0008ba1f) vid4_progress_pane_g5_ParamLimits

0xa461,	// (0x0008ba1f) vid4_progress_pane_g5

0x7577,	// (0x00088b35) main_ncimui_pane_g1

0x75e0,	// (0x00088b9e) ncimui_group_query_pane_ParamLimits

0x75e0,	// (0x00088b9e) ncimui_group_query_pane

0x7628,	// (0x00088be6) ncimui_list_pane_ParamLimits

0x7628,	// (0x00088be6) ncimui_list_pane

0x764f,	// (0x00088c0d) ncimui_text_pane_ParamLimits

0x764f,	// (0x00088c0d) ncimui_text_pane

0x7710,	// (0x00088cce) ncimui_text_pane_t1_ParamLimits

0x7710,	// (0x00088cce) ncimui_text_pane_t1

0xae7a,	// (0x0008c438) ncimui_list_single_graphic_pane_ParamLimits

0xae7a,	// (0x0008c438) ncimui_list_single_graphic_pane

0x772e,	// (0x00088cec) ncimui_query_pane_ParamLimits

0x772e,	// (0x00088cec) ncimui_query_pane

0xb2ab,	// (0x0008c869) list_highlight_pane_cp013

0xae8a,	// (0x0008c448) ncim_list_query_list_pane_t1_copy1

0xae64,	// (0x0008c422) ncim_list_single_graphic_pane_g1

0x7741,	// (0x00088cff) ncim_query_button_pane_cp01

0x774d,	// (0x00088d0b) ncim_query_entry_pane_ParamLimits

0x774d,	// (0x00088d0b) ncim_query_entry_pane

0x7760,	// (0x00088d1e) ncimui_query_pane_g1

0x776c,	// (0x00088d2a) ncimui_query_pane_t1_ParamLimits

0x776c,	// (0x00088d2a) ncimui_query_pane_t1

0xb2b5,	// (0x0008c873) input_focus_pane_cp012

0xae98,	// (0x0008c456) ncim_query_entry_pane_t1

0xba1e,	// (0x0008cfdc) main_im_pane_ParamLimits

0xb2b5,	// (0x0008c873) main_mobtv_pane_ParamLimits

0xb2b5,	// (0x0008c873) main_mobtv_pane

0x740f,	// (0x000889cd) main_cset6_slider_pane_g18_ParamLimits

0x740f,	// (0x000889cd) main_cset6_slider_pane_g18

0x741b,	// (0x000889d9) main_cset6_slider_pane_g19_ParamLimits

0x741b,	// (0x000889d9) main_cset6_slider_pane_g19

0xb9c8,	// (0x0008cf86) bg_main_mobtv_pane_ParamLimits

0xb9c8,	// (0x0008cf86) bg_main_mobtv_pane

0x7785,	// (0x00088d43) main_mobtv_info_pane

0x778e,	// (0x00088d4c) main_mobtv_loading_pane_ParamLimits

0x778e,	// (0x00088d4c) main_mobtv_loading_pane

0xaeaa,	// (0x0008c468) main_mobtv_pg_channel_list_pane

0xaeb4,	// (0x0008c472) main_mobtv_pg_hdr_pane

0x779b,	// (0x00088d59) main_mobtv_programe_curr_pane_ParamLimits

0x779b,	// (0x00088d59) main_mobtv_programe_curr_pane

0x77a8,	// (0x00088d66) main_mobtv_programe_next_pane_ParamLimits

0x77a8,	// (0x00088d66) main_mobtv_programe_next_pane

0xaebd,	// (0x0008c47b) popup_mobtv_noti_window

0xbe54,	// (0x0008d412) main_tv_pg_hdr_pane_g1

0xaec5,	// (0x0008c483) main_tv_pg_hdr_pane_g2

0xaecd,	// (0x0008c48b) main_tv_pg_hdr_pane_g3

0xaed5,	// (0x0008c493) main_tv_pg_hdr_pane_g4

0xaedd,	// (0x0008c49b) main_tv_pg_hdr_pane_g5

0xaee7,	// (0x0008c4a5) main_tv_pg_hdr_pane_g6

0xaef1,	// (0x0008c4af) main_tv_pg_hdr_pane_g7

0xaefb,	// (0x0008c4b9) main_tv_pg_hdr_pane_g8

0xaf05,	// (0x0008c4c3) main_tv_pg_hdr_pane_g9

0xaf0f,	// (0x0008c4cd) main_tv_pg_hdr_pane_g10

0xaf19,	// (0x0008c4d7) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x00091103) main_tv_pg_hdr_pane_g

0xaf23,	// (0x0008c4e1) main_tv_pg_hdr_pane_t1

0xaf31,	// (0x0008c4ef) main_tv_pg_hdr_pane_t2

0xaf3f,	// (0x0008c4fd) main_tv_pg_hdr_pane_t3

0xaf4f,	// (0x0008c50d) main_tv_pg_hdr_pane_t4

0xaf5f,	// (0x0008c51d) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x0009111a) main_tv_pg_hdr_pane_t

0xaf6f,	// (0x0008c52d) single_mobtv_pg_channel_pane_ParamLimits

0xaf6f,	// (0x0008c52d) single_mobtv_pg_channel_pane

0xaf81,	// (0x0008c53f) single_mobtv_pg_channel_table_pane

0xaf8a,	// (0x0008c548) single_mobtv_pg_channel_thumb_pane

0xaf93,	// (0x0008c551) single_tv_pg_channel_pane_g1

0xaf9c,	// (0x0008c55a) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x00091125) single_tv_pg_channel_pane_g

0xb9ac,	// (0x0008cf6a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb9ac,	// (0x0008cf6a) bg_single_mobtv_pg_channel_thumb_pane

0xafa5,	// (0x0008c563) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xafa5,	// (0x0008c563) single_mobtv_pg_channel_thumb_pane_g1

0xafb3,	// (0x0008c571) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xafb3,	// (0x0008c571) single_mobtv_pg_channel_thumb_pane_g2

0xafbf,	// (0x0008c57d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xafbf,	// (0x0008c57d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x0009112a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x0009112a) single_mobtv_pg_channel_thumb_pane_g

0xafcb,	// (0x0008c589) single_mobtv_pg_channel_thumb_pane_t1

0xafd9,	// (0x0008c597) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x00091131) single_mobtv_pg_channel_thumb_pane_t

0xbe54,	// (0x0008d412) bg_single_mobtv_pg_channel_table_pane_g1

0xbe54,	// (0x0008d412) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x00090956) bg_single_mobtv_pg_channel_table_pane_g

0xafe7,	// (0x0008c5a5) single_mobtv_pg_channel_table_pane_t1

0xaff5,	// (0x0008c5b3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x00091136) single_mobtv_pg_channel_table_pane_t

0x77bd,	// (0x00088d7b) main_mobtv_info_pane_g1_ParamLimits

0x77bd,	// (0x00088d7b) main_mobtv_info_pane_g1

0x77db,	// (0x00088d99) main_mobtv_info_pane_t1_ParamLimits

0x77db,	// (0x00088d99) main_mobtv_info_pane_t1

0x7853,	// (0x00088e11) main_mobtv_info_pane_t2_ParamLimits

0x7853,	// (0x00088e11) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x00091140) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x00091140) main_mobtv_info_pane_t

0x78e2,	// (0x00088ea0) wait_bar_pane_cp05

0x78f4,	// (0x00088eb2) main_mobtv_loading_pane_g1_ParamLimits

0x78f4,	// (0x00088eb2) main_mobtv_loading_pane_g1

0x7907,	// (0x00088ec5) main_mobtv_loading_pane_g2_ParamLimits

0x7907,	// (0x00088ec5) main_mobtv_loading_pane_g2

0x7913,	// (0x00088ed1) main_mobtv_loading_pane_g3_ParamLimits

0x7913,	// (0x00088ed1) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x00091147) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x00091147) main_mobtv_loading_pane_g

0xb003,	// (0x0008c5c1) main_mobtv_loading_pane_t1_ParamLimits

0xb003,	// (0x0008c5c1) main_mobtv_loading_pane_t1

0xb01b,	// (0x0008c5d9) main_mobtv_loading_pane_t2_ParamLimits

0xb01b,	// (0x0008c5d9) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x0009114e) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x0009114e) main_mobtv_loading_pane_t

0x7926,	// (0x00088ee4) wait_bar_pane_cp06_ParamLimits

0x7926,	// (0x00088ee4) wait_bar_pane_cp06

0xb03f,	// (0x0008c5fd) main_mobtv_programe_curr_pane_t1

0xb04d,	// (0x0008c60b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x00091153) main_mobtv_programe_curr_pane_t

0xb05b,	// (0x0008c619) main_mobtv_programe_next_pane_t1

0xb069,	// (0x0008c627) main_mobtv_programe_next_pane_t2

0xb077,	// (0x0008c635) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x00091158) main_mobtv_programe_next_pane_t

0xb2ab,	// (0x0008c869) bg_popup_mobtv_noti_window_pane

0xb085,	// (0x0008c643) popup_mobtv_noti_window_g1

0xb08d,	// (0x0008c64b) popup_mobtv_noti_window_t1

0xb09b,	// (0x0008c659) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x0009115f) popup_mobtv_noti_window_t

0xbe54,	// (0x0008d412) bg_popup_mobtv_noti_window_pane_g1

0xb2ab,	// (0x0008c869) sc_clock_pane

0xb2ab,	// (0x0008c869) main_fs_bigclock_pane

0x7053,	// (0x00088611) blid2_tripm_pane_t4_ParamLimits

0x7053,	// (0x00088611) blid2_tripm_pane_t4

0x7935,	// (0x00088ef3) sc_clock_pane_g1_ParamLimits

0x7935,	// (0x00088ef3) sc_clock_pane_g1

0x7947,	// (0x00088f05) sc_clock_pane_t1_ParamLimits

0x7947,	// (0x00088f05) sc_clock_pane_t1

0x7969,	// (0x00088f27) sc_clock_pane_t2_ParamLimits

0x7969,	// (0x00088f27) sc_clock_pane_t2

0x7981,	// (0x00088f3f) sc_clock_pane_t3_ParamLimits

0x7981,	// (0x00088f3f) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x00091164) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x00091164) sc_clock_pane_t

0x834e,	// (0x0008990c) main_fs_bigclock_indicator_pane_ParamLimits

0x834e,	// (0x0008990c) main_fs_bigclock_indicator_pane

0x7a27,	// (0x00088fe5) main_fs_bigclock_pane_g1_ParamLimits

0x7a27,	// (0x00088fe5) main_fs_bigclock_pane_g1

0x835a,	// (0x00089918) main_fs_bigclock_pane_t1_ParamLimits

0x835a,	// (0x00089918) main_fs_bigclock_pane_t1

0x836c,	// (0x0008992a) main_fs_bigclock_pane_t2_ParamLimits

0x836c,	// (0x0008992a) main_fs_bigclock_pane_t2

0x8380,	// (0x0008993e) main_fs_bigclock_pane_t3_ParamLimits

0x8380,	// (0x0008993e) main_fs_bigclock_pane_t3

0x0002,

0xfd0f,	// (0x000912cd) main_fs_bigclock_pane_t_ParamLimits

0xfd0f,	// (0x000912cd) main_fs_bigclock_pane_t

0xce7b,	// (0x0008e439) main_fs_bigclock_indicator_pane_g1

0xadb9,	// (0x0008c377) ncim_query_content_pane_g2_ParamLimits

0xadb9,	// (0x0008c377) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x000910f1) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x000910f1) ncim_query_content_pane_g

0x799a,	// (0x00088f58) sc_clock_pane_t4_ParamLimits

0x799a,	// (0x00088f58) sc_clock_pane_t4

0xb2b5,	// (0x0008c873) main_radioblah_pane

0xa1b1,	// (0x0008b76f) cell_call4_button_pane_t1_copy1_ParamLimits

0xa1b1,	// (0x0008b76f) cell_call4_button_pane_t1_copy1

0x758f,	// (0x00088b4d) main_ncimui_pane_t1_ParamLimits

0x758f,	// (0x00088b4d) main_ncimui_pane_t1

0x75a9,	// (0x00088b67) main_ncimui_pane_t2_ParamLimits

0x75a9,	// (0x00088b67) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x000910ea) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x000910ea) main_ncimui_pane_t

0xb1e0,	// (0x0008c79e) main_radioblah_anim_pane_ParamLimits

0xb1e0,	// (0x0008c79e) main_radioblah_anim_pane

0xb1f1,	// (0x0008c7af) main_radioblah_info_pane_ParamLimits

0xb1f1,	// (0x0008c7af) main_radioblah_info_pane

0xb205,	// (0x0008c7c3) main_radioblah_pane_t1_ParamLimits

0xb205,	// (0x0008c7c3) main_radioblah_pane_t1

0xb221,	// (0x0008c7df) main_radioblah_pane_t2_ParamLimits

0xb221,	// (0x0008c7df) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x00091185) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x00091185) main_radioblah_pane_t

0x7a86,	// (0x00089044) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a86,	// (0x00089044) main_radioblah_rocker_ctrl_pane

0xb269,	// (0x0008c827) main_radioblah_info_pane_t1_ParamLimits

0xb269,	// (0x0008c827) main_radioblah_info_pane_t1

0x7ade,	// (0x0008909c) main_radioblah_info_pane_t2_ParamLimits

0x7ade,	// (0x0008909c) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x0009118e) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x0009118e) main_radioblah_info_pane_t

0xbe54,	// (0x0008d412) main_radioblah_rocker_ctrl_pane_g1

0x7b8e,	// (0x0008914c) main_radioblah_rocker_ctrl_pane_g2

0x7b96,	// (0x00089154) main_radioblah_rocker_ctrl_pane_g3

0x7b9e,	// (0x0008915c) main_radioblah_rocker_ctrl_pane_g4

0x7ba6,	// (0x00089164) main_radioblah_rocker_ctrl_pane_g5

0x7bae,	// (0x0008916c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x00091197) main_radioblah_rocker_ctrl_pane_g

0x7309,	// (0x000888c7) main_cset_text2_pane_t1_copy1_ParamLimits

0xa20f,	// (0x0008b7cd) cam4_image_uncrop_qvga_pane

0xa268,	// (0x0008b826) vid4_image_uncrop_qcif_pane

0xa4b0,	// (0x0008ba6e) cam6_image_uncrop_qvga_pane_ParamLimits

0xa4b0,	// (0x0008ba6e) cam6_image_uncrop_qvga_pane

0xaac0,	// (0x0008c07e) vid6_image_uncrop_qcif_pane_ParamLimits

0xaac0,	// (0x0008c07e) vid6_image_uncrop_qcif_pane

0xb2ab,	// (0x0008c869) bg_popup_preview_window_pane_cp03

0xad6b,	// (0x0008c329) list_cset_text2_pane

0xad73,	// (0x0008c331) main_cset6_text2_pane_g1

0xad7b,	// (0x0008c339) main_cset6_text2_pane_t1

0x7bb6,	// (0x00089174) list_cset_text2_pane_t1_ParamLimits

0x7bb6,	// (0x00089174) list_cset_text2_pane_t1

0xb2b5,	// (0x0008c873) main_radioblah_pane_ParamLimits

0x78ce,	// (0x00088e8c) main_mobtv_info_pane_t3_ParamLimits

0x78ce,	// (0x00088e8c) main_mobtv_info_pane_t3

0x7a74,	// (0x00089032) main_radioblah_pane_g1

0x7aae,	// (0x0008906c) main_radioblah_info_pane_g1

0x7b33,	// (0x000890f1) main_radioblah_info_pane_t3_ParamLimits

0x7b33,	// (0x000890f1) main_radioblah_info_pane_t3

0x2948,	// (0x00083f06) highlight_cell_cale_month_pane_ParamLimits

0x2948,	// (0x00083f06) highlight_cell_cale_month_pane

0xb2ab,	// (0x0008c869) main_phob_fisheye_pane

0x47d5,	// (0x00085d93) scroll_pane_cp0031_ParamLimits

0x47d5,	// (0x00085d93) scroll_pane_cp0031

0xabce,	// (0x0008c18c) wait_bar_pane_cp08_ParamLimits

0x738e,	// (0x0008894c) cset_list_set_pane_copy1_ParamLimits

0xbad7,	// (0x0008d095) highlight_cell_cale_month_pane_g1

0x7bcf,	// (0x0008918d) highlight_cell_cale_month_pane_t1

0x6d63,	// (0x00088321) list_gen_pane_cp01

0x61be,	// (0x0008777c) scroll_pane_01

0x7bdd,	// (0x0008919b) list_single_double_fisheye_pane

0x07ff,	// (0x00081dbd) list_double_fisheye_pane_g1_ParamLimits

0x07ff,	// (0x00081dbd) list_double_fisheye_pane_g1

0x080b,	// (0x00081dc9) list_double_fisheye_pane_g2_ParamLimits

0x080b,	// (0x00081dc9) list_double_fisheye_pane_g2

0x7be6,	// (0x000891a4) list_double_fisheye_pane_g3_ParamLimits

0x7be6,	// (0x000891a4) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x000911a4) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x000911a4) list_double_fisheye_pane_g

0x083c,	// (0x00081dfa) list_double_fisheye_pane_t1_ParamLimits

0x083c,	// (0x00081dfa) list_double_fisheye_pane_t1

0x0857,	// (0x00081e15) list_double_fisheye_pane_t2_ParamLimits

0x0857,	// (0x00081e15) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x000911af) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x000911af) list_double_fisheye_pane_t

0xb2ab,	// (0x0008c869) main_call5_pane

0x79c5,	// (0x00088f83) sc_swipe_pane_ParamLimits

0x79c5,	// (0x00088f83) sc_swipe_pane

0x7c05,	// (0x000891c3) call5_image_pane_ParamLimits

0x7c05,	// (0x000891c3) call5_image_pane

0x7c22,	// (0x000891e0) call5_swipe_1_pane_ParamLimits

0x7c22,	// (0x000891e0) call5_swipe_1_pane

0x7c35,	// (0x000891f3) call5_swipe_2_pane_ParamLimits

0x7c35,	// (0x000891f3) call5_swipe_2_pane

0x7c60,	// (0x0008921e) popup_call5_audio_first_window_ParamLimits

0x7c60,	// (0x0008921e) popup_call5_audio_first_window

0xb9ac,	// (0x0008cf6a) call5_swipe_1_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) call5_swipe_1_pane_g1

0xbadf,	// (0x0008d09d) call5_swipe_1_pane_g2_ParamLimits

0xbadf,	// (0x0008d09d) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x000911b4) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x000911b4) call5_swipe_1_pane_g

0xbaeb,	// (0x0008d0a9) call5_swipe_1_pane_t1_ParamLimits

0xbaeb,	// (0x0008d0a9) call5_swipe_1_pane_t1

0xb9ac,	// (0x0008cf6a) call5_swipe_2_pane_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) call5_swipe_2_pane_g1

0xbb00,	// (0x0008d0be) call5_swipe_2_pane_g2_ParamLimits

0xbb00,	// (0x0008d0be) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x000911b9) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x000911b9) call5_swipe_2_pane_g

0xbb0c,	// (0x0008d0ca) call5_swipe_2_pane_t1_ParamLimits

0xbb0c,	// (0x0008d0ca) call5_swipe_2_pane_t1

0xbb21,	// (0x0008d0df) sc_swipe_pane_g1_ParamLimits

0xbb21,	// (0x0008d0df) sc_swipe_pane_g1

0xbb2e,	// (0x0008d0ec) sc_swipe_pane_g2_ParamLimits

0xbb2e,	// (0x0008d0ec) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x000911be) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x000911be) sc_swipe_pane_g

0xbb3a,	// (0x0008d0f8) sc_swipe_pane_t1_ParamLimits

0xbb3a,	// (0x0008d0f8) sc_swipe_pane_t1

0xb2ab,	// (0x0008c869) main_cmail_launcher_pane

0x7c71,	// (0x0008922f) aid_size_cell_cmail_l_ParamLimits

0x7c71,	// (0x0008922f) aid_size_cell_cmail_l

0x7c7f,	// (0x0008923d) grid_cmail_l_pane_ParamLimits

0x7c7f,	// (0x0008923d) grid_cmail_l_pane

0x7c99,	// (0x00089257) cell_cmail_l_pane_ParamLimits

0x7c99,	// (0x00089257) cell_cmail_l_pane

0xbb4f,	// (0x0008d10d) cell_cmail_l_pane_g1_ParamLimits

0xbb4f,	// (0x0008d10d) cell_cmail_l_pane_g1

0xbb5b,	// (0x0008d119) cell_cmail_l_pane_t1_ParamLimits

0xbb5b,	// (0x0008d119) cell_cmail_l_pane_t1

0xbb71,	// (0x0008d12f) cell_cmail_l_pane_t2_ParamLimits

0xbb71,	// (0x0008d12f) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x000911c3) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x000911c3) cell_cmail_l_pane_t

0xb2b5,	// (0x0008c873) grid_highlight_pane_cp018_ParamLimits

0xb2b5,	// (0x0008c873) grid_highlight_pane_cp018

0x0d9c,	// (0x0008235a) main2_pane_ParamLimits

0x0d9c,	// (0x0008235a) main2_pane

0xbaad,	// (0x0008d06b) popup_sp_fs_action_menu_bg_pane_g1

0xbab5,	// (0x0008d073) popup_sp_fs_action_menu_bg_pane_g2

0xbabd,	// (0x0008d07b) popup_sp_fs_action_menu_bg_pane_g3

0xbcf5,	// (0x0008d2b3) popup_sp_fs_action_menu_bg_pane_g4

0xbcfd,	// (0x0008d2bb) popup_sp_fs_action_menu_bg_pane_g5

0xbd05,	// (0x0008d2c3) popup_sp_fs_action_menu_bg_pane_g6

0xbd0d,	// (0x0008d2cb) popup_sp_fs_action_menu_bg_pane_g7

0xbd15,	// (0x0008d2d3) popup_sp_fs_action_menu_bg_pane_g8

0xbd1d,	// (0x0008d2db) popup_sp_fs_action_menu_bg_pane_g9

0xbd25,	// (0x0008d2e3) popup_sp_fs_action_menu_bg_pane_g10

0xbd25,	// (0x0008d2e3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x000906c3) popup_sp_fs_action_menu_bg_pane_g

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x00090771) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x00090771) list_medium_line_x2_t3_g3_g

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t2

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x00090778) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x00090778) list_medium_line_x2_t3_g3_t

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g2_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0009077f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0009077f) list_medium_line_x2_t3_g2_g

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t2

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x00090778) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x00090778) list_medium_line_x2_t3_g2_t

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g3

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x00090784) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x00090784) list_medium_line_x2_t4_g4_g

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t2

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t3

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0009078d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0009078d) list_medium_line_x2_t4_g4_t

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g3

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x00090784) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x00090784) list_medium_line_x2_t2_g4_g

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g4_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x00090754) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x00090754) list_medium_line_x2_t2_g4_t

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x00090771) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x00090771) list_medium_line_x2_t2_g3_g

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g3_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x00090754) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x00090754) list_medium_line_x2_t2_g3_t

0x2a9a,	// (0x00084058) main_sp_fs_list_pane_ParamLimits

0x2a9a,	// (0x00084058) main_sp_fs_list_pane

0xe611,	// (0x0008fbcf) sp_fs_scroll_pane_ParamLimits

0xe611,	// (0x0008fbcf) sp_fs_scroll_pane

0xc383,	// (0x0008d941) list_medium_line_x2_t3_t1

0xc383,	// (0x0008d941) list_medium_line_x2_t3_t2

0xc383,	// (0x0008d941) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0009083a) list_medium_line_x2_t3_t

0xc383,	// (0x0008d941) list_medium_line_x3_t4_t1

0xc383,	// (0x0008d941) list_medium_line_x3_t4_t2

0xc383,	// (0x0008d941) list_medium_line_x3_t4_t3

0xc383,	// (0x0008d941) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00090841) list_medium_line_x3_t4_t

0xc383,	// (0x0008d941) list_medium_line_x4_t5_t1

0xc383,	// (0x0008d941) list_medium_line_x4_t5_t2

0xc383,	// (0x0008d941) list_medium_line_x4_t5_t3

0xc383,	// (0x0008d941) list_medium_line_x4_t5_t4

0xc383,	// (0x0008d941) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0009084a) list_medium_line_x4_t5_t

0xb9ac,	// (0x0008cf6a) list_medium_line_t4_g4_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t4_g4_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_t4_g4_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t4_g4_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_t4_g4_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t4_g4_g3

0xb9ac,	// (0x0008cf6a) list_medium_line_t4_g4_g4_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x00090784) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x00090784) list_medium_line_t4_g4_g

0xbe26,	// (0x0008d3e4) list_medium_line_t4_g4_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t4_g4_t1

0xbe26,	// (0x0008d3e4) list_medium_line_t4_g4_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t4_g4_t2

0xbe26,	// (0x0008d3e4) list_medium_line_t4_g4_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t4_g4_t3

0xbe26,	// (0x0008d3e4) list_medium_line_t4_g4_t4_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0009078d) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0009078d) list_medium_line_t4_g4_t

0x2b35,	// (0x000840f3) chi_dic_find_pane_g1

0x391d,	// (0x00084edb) main_tport_pane

0xc383,	// (0x0008d941) list_medium_line_plain_t1

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g2_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g2_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g2_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0009077f) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0009077f) list_medium_line_t2_g2_g

0xbe26,	// (0x0008d3e4) list_medium_line_t2_g2_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t2_g2_t1

0xbe26,	// (0x0008d3e4) list_medium_line_t2_g2_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x00090754) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x00090754) list_medium_line_t2_g2_t

0xa497,	// (0x0008ba55) aid_sp_fs_list_icon_a_sm

0xa49f,	// (0x0008ba5d) aid_sp_fs_list_icon_d

0xa850,	// (0x0008be0e) aid_sp_fs_text_primary

0xa4a7,	// (0x0008ba65) aid_sp_fs_text_secondary

0xb2ab,	// (0x0008c869) list_medium_line

0xb2ab,	// (0x0008c869) list_medium_line_g2

0xb2ab,	// (0x0008c869) list_medium_line_g3

0xb2ab,	// (0x0008c869) list_medium_line_plain

0xb2ab,	// (0x0008c869) list_medium_line_plain_t2

0xb2ab,	// (0x0008c869) list_medium_line_plain_t3

0xb2ab,	// (0x0008c869) list_medium_line_right_icon

0xb2ab,	// (0x0008c869) list_medium_line_right_iconx2

0xb2ab,	// (0x0008c869) list_medium_line_t2

0xb2ab,	// (0x0008c869) list_medium_line_t2_g2

0xb2ab,	// (0x0008c869) list_medium_line_t2_g3

0xb2ab,	// (0x0008c869) list_medium_line_t2_right_icon

0xb2ab,	// (0x0008c869) list_medium_line_t2_right_iconx2

0xb2ab,	// (0x0008c869) list_medium_line_t3

0xb2ab,	// (0x0008c869) list_medium_line_t3_g2

0xb2ab,	// (0x0008c869) list_medium_line_t3_g3

0xb2ab,	// (0x0008c869) list_medium_line_t3_right_iconx2

0xb2ab,	// (0x0008c869) list_medium_line_t4_g4

0xb2ab,	// (0x0008c869) list_medium_line_x2

0xb2ab,	// (0x0008c869) list_medium_line_x2_t2_g2

0xb2ab,	// (0x0008c869) list_medium_line_x2_t2_g3

0xb2ab,	// (0x0008c869) list_medium_line_x2_t2_g4

0xb2ab,	// (0x0008c869) list_medium_line_x2_t3

0xb2ab,	// (0x0008c869) list_medium_line_x2_t3_g2

0xb2ab,	// (0x0008c869) list_medium_line_x2_t3_g3

0xb2ab,	// (0x0008c869) list_medium_line_x2_t3_g4

0xb2ab,	// (0x0008c869) list_medium_line_x2_t4_g2

0xb2ab,	// (0x0008c869) list_medium_line_x2_t4_g4

0xb2ab,	// (0x0008c869) list_medium_line_x3

0xb2ab,	// (0x0008c869) list_medium_line_x3_t4

0xb2ab,	// (0x0008c869) list_medium_line_x3_t4_g4

0xb2ab,	// (0x0008c869) list_medium_line_x4_t4

0xb2ab,	// (0x0008c869) list_medium_line_x4_t4_g7

0xb2ab,	// (0x0008c869) list_medium_line_x4_t5

0x07aa,	// (0x00081d68) list_single_fs_dyc_pane_ParamLimits

0x07aa,	// (0x00081d68) list_single_fs_dyc_pane

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g3

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g4

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g5

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x4_t4_g7_g6

0xb9ba,	// (0x0008cf78) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb9ba,	// (0x0008cf78) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x000910cb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x000910cb) list_medium_line_x4_t4_g7_g

0xbe26,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t2

0xbe26,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x4_t4_g7_t3

0xc715,	// (0x0008dcd3) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc715,	// (0x0008dcd3) list_medium_line_x4_t4_g7_t4

0xc715,	// (0x0008dcd3) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc715,	// (0x0008dcd3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x000910da) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x000910da) list_medium_line_x4_t4_g7_t

0x07e2,	// (0x00081da0) list_single_dyc_row_pane_ParamLimits

0x07e2,	// (0x00081da0) list_single_dyc_row_pane

0x7bf2,	// (0x000891b0) call5_gesture_pane_ParamLimits

0x7bf2,	// (0x000891b0) call5_gesture_pane

0x7c48,	// (0x00089206) call5_windows_pane_ParamLimits

0x7c48,	// (0x00089206) call5_windows_pane

0x7cb3,	// (0x00089271) call5_swipe_1_pane_cp_ParamLimits

0x7cb3,	// (0x00089271) call5_swipe_1_pane_cp

0x7cbf,	// (0x0008927d) call5_swipe_2_pane_cp_ParamLimits

0x7cbf,	// (0x0008927d) call5_swipe_2_pane_cp

0xbe1e,	// (0x0008d3dc) call5_image_pane_cp

0x7ccb,	// (0x00089289) popup_call5_audio_first_window_cp_ParamLimits

0x7ccb,	// (0x00089289) popup_call5_audio_first_window_cp

0xbb21,	// (0x0008d0df) call5_swipe_1_pane_g1_cp_ParamLimits

0xbb21,	// (0x0008d0df) call5_swipe_1_pane_g1_cp

0xbb8e,	// (0x0008d14c) call5_swipe_1_pane_g2_cp

0xbb3a,	// (0x0008d0f8) call5_swipe_1_pane_t1_cp_ParamLimits

0xbb3a,	// (0x0008d0f8) call5_swipe_1_pane_t1_cp

0xbb21,	// (0x0008d0df) call5_swipe_2_pane_g1_cp_ParamLimits

0xbb21,	// (0x0008d0df) call5_swipe_2_pane_g1_cp

0xbb96,	// (0x0008d154) call5_swipe_2_pane_g2_cp

0xbb9e,	// (0x0008d15c) call5_swipe_2_pane_t1_cp_ParamLimits

0xbb9e,	// (0x0008d15c) call5_swipe_2_pane_t1_cp

0xb2b5,	// (0x0008c873) main_sp_fs_email_pane

0xbbb3,	// (0x0008d171) main_sp_fs_listscroll_pane_te

0xa4be,	// (0x0008ba7c) popup_sp_fs_action_menu_pane_ParamLimits

0xa4be,	// (0x0008ba7c) popup_sp_fs_action_menu_pane

0xbe54,	// (0x0008d412) bg_sp_fs_ctrlbar_pane_g1

0xbbbc,	// (0x0008d17a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xbbc5,	// (0x0008d183) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbbce,	// (0x0008d18c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbe54,	// (0x0008d412) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x000911c8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe603,	// (0x0008fbc1) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe603,	// (0x0008fbc1) bg_sp_fs_ctrlbar_ddmenu_pane

0xbbd7,	// (0x0008d195) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xbbd7,	// (0x0008d195) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xbbe3,	// (0x0008d1a1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xbbe3,	// (0x0008d1a1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x000911d1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x000911d1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xbbef,	// (0x0008d1ad) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xbbef,	// (0x0008d1ad) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbe54,	// (0x0008d412) list_medium_line_t2_right_icon_g1

0xc383,	// (0x0008d941) list_medium_line_t2_right_icon_t1

0xc383,	// (0x0008d941) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x000911d6) list_medium_line_t2_right_icon_t

0xc96b,	// (0x0008df29) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc96b,	// (0x0008df29) bg_sp_fs_ctrlbar_pane

0x7d21,	// (0x000892df) main_sp_fs_ctrlbar_button_pane_cp01

0x7d2b,	// (0x000892e9) main_sp_fs_ctrlbar_ddmenu_pane

0xbc41,	// (0x0008d1ff) main_sp_fs_ctrlbar_pane_g1

0xbc4d,	// (0x0008d20b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x000911db) main_sp_fs_ctrlbar_pane_g

0x7d69,	// (0x00089327) main_sp_fs_ctrlbar_pane_t1

0x7da8,	// (0x00089366) main_sp_fs_ctrlbar_pane

0x7dcc,	// (0x0008938a) main_sp_fs_listscroll_pane_te_cp01

0x0879,	// (0x00081e37) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0879,	// (0x00081e37) popup_sp_fs_action_menu_pane_cp01

0xb2b5,	// (0x0008c873) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb2b5,	// (0x0008c873) bg_sp_fs_highlight_list_pane_cp01

0xa502,	// (0x0008bac0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa502,	// (0x0008bac0) sp_fs_action_menu_list_gene_pane_g1

0xbc74,	// (0x0008d232) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xbc74,	// (0x0008d232) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x000911e9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x000911e9) sp_fs_action_menu_list_gene_pane_g

0xa511,	// (0x0008bacf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa511,	// (0x0008bacf) sp_fs_action_menu_list_gene_pane_t1

0xa529,	// (0x0008bae7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa529,	// (0x0008bae7) sp_fs_action_menu_list_gene_pane

0xbc81,	// (0x0008d23f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xbc81,	// (0x0008d23f) popup_sp_fs_action_menu_bg_pane

0xa54a,	// (0x0008bb08) sp_fs_action_menu_list_pane_ParamLimits

0xa54a,	// (0x0008bb08) sp_fs_action_menu_list_pane

0xa56c,	// (0x0008bb2a) sp_fs_scroll_pane_cp01_ParamLimits

0xa56c,	// (0x0008bb2a) sp_fs_scroll_pane_cp01

0xc383,	// (0x0008d941) list_medium_line_plain_t2_t1

0xc383,	// (0x0008d941) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x000911d6) list_medium_line_plain_t2_t

0xc383,	// (0x0008d941) list_medium_line_plain_t3_t1

0xc383,	// (0x0008d941) list_medium_line_plain_t3_t2

0xc383,	// (0x0008d941) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0009083a) list_medium_line_plain_t3_t

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g2_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0009077f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0009077f) list_medium_line_x2_t2_g2_g

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g2_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x00090754) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x00090754) list_medium_line_x2_t2_g2_t

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g2_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0009077f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0009077f) list_medium_line_x2_t4_g2_g

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t2

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t3

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0009078d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0009078d) list_medium_line_x2_t4_g2_t

0xbe54,	// (0x0008d412) list_medium_line_t3_right_iconx2_g1

0xbe54,	// (0x0008d412) list_medium_line_t3_right_iconx2_g2

0xbe54,	// (0x0008d412) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0009095b) list_medium_line_t3_right_iconx2_g

0xc383,	// (0x0008d941) list_medium_line_t3_right_iconx2_t1

0xc383,	// (0x0008d941) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x000911d6) list_medium_line_t3_right_iconx2_t

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g3

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x00090784) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x00090784) list_medium_line_x3_t4_g4_g

0xbe26,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t2

0xbe26,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t3

0xbe26,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0009078d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0009078d) list_medium_line_x3_t4_g4_t

0x089e,	// (0x00081e5c) list_single_dyc_row_text_pane_t1_ParamLimits

0x089e,	// (0x00081e5c) list_single_dyc_row_text_pane_t1

0x08e7,	// (0x00081ea5) list_single_dyc_row_text_pane_t2_ParamLimits

0x08e7,	// (0x00081ea5) list_single_dyc_row_text_pane_t2

0xa592,	// (0x0008bb50) list_single_dyc_row_text_pane_t3_ParamLimits

0xa592,	// (0x0008bb50) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x000911ee) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x000911ee) list_single_dyc_row_text_pane_t

0xa5b6,	// (0x0008bb74) list_single_dyc_row_pane_g1_ParamLimits

0xa5b6,	// (0x0008bb74) list_single_dyc_row_pane_g1

0xa5c2,	// (0x0008bb80) list_single_dyc_row_pane_g2_ParamLimits

0xa5c2,	// (0x0008bb80) list_single_dyc_row_pane_g2

0xa5ce,	// (0x0008bb8c) list_single_dyc_row_pane_g3_ParamLimits

0xa5ce,	// (0x0008bb8c) list_single_dyc_row_pane_g3

0xa5da,	// (0x0008bb98) list_single_dyc_row_pane_g4_ParamLimits

0xa5da,	// (0x0008bb98) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x000911fb) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x000911fb) list_single_dyc_row_pane_g

0xa5e6,	// (0x0008bba4) list_single_dyc_row_text_pane_ParamLimits

0xa5e6,	// (0x0008bba4) list_single_dyc_row_text_pane

0xb2ab,	// (0x0008c869) bg_sp_fs_scroll_pane

0xbc8f,	// (0x0008d24d) thumb_sp_fs_scroll_pane

0xb9ac,	// (0x0008cf6a) list_medium_line_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_g1

0xbe26,	// (0x0008d3e4) list_medium_line_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0009077f) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0009077f) list_medium_line_x2_g

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t1

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x3_g1

0xbc98,	// (0x0008d256) list_medium_line_x3_g2_ParamLimits

0xbc98,	// (0x0008d256) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x00091204) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x00091204) list_medium_line_x3_g

0xbca6,	// (0x0008d264) list_medium_line_x3_t1_ParamLimits

0xbca6,	// (0x0008d264) list_medium_line_x3_t1

0xbcba,	// (0x0008d278) thumb_sp_fs_scroll_pane_g1

0xbcc3,	// (0x0008d281) thumb_sp_fs_scroll_pane_g2

0xbccc,	// (0x0008d28a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x00091209) thumb_sp_fs_scroll_pane_g

0xbcba,	// (0x0008d278) bg_sp_fs_scroll_pane_g1

0xbcc3,	// (0x0008d281) bg_sp_fs_scroll_pane_g2

0xbccc,	// (0x0008d28a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x00091209) bg_sp_fs_scroll_pane_g

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g3

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x00090784) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x00090784) list_medium_line_x2_t3_g4_g

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t1

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t2

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x00090778) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x00090778) list_medium_line_x2_t3_g4_t

0xb9ac,	// (0x0008cf6a) list_medium_line_g2_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_g2_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_g2_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0009077f) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0009077f) list_medium_line_g2_g

0xbe26,	// (0x0008d3e4) list_medium_line_g2_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_g2_t1

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g2_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g2_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g2_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0009077f) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0009077f) list_medium_line_t3_g2_g

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g2_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g2_t1

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g2_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g2_t2

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g2_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x00090778) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x00090778) list_medium_line_t3_g2_t

0xbe54,	// (0x0008d412) list_medium_line_right_icon_g1

0xc383,	// (0x0008d941) list_medium_line_right_icon_t1

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g1

0xbe26,	// (0x0008d3e4) list_medium_line_t2_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t2_t1

0xbe26,	// (0x0008d3e4) list_medium_line_t2_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x00090754) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x00090754) list_medium_line_t2_t

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g1

0xbe26,	// (0x0008d3e4) list_medium_line_t3_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t3_t1

0xbe26,	// (0x0008d3e4) list_medium_line_t3_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t3_t2

0xbe26,	// (0x0008d3e4) list_medium_line_t3_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x00090778) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x00090778) list_medium_line_t3_t

0xb9ac,	// (0x0008cf6a) list_medium_line_g3_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_g3_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_g3_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_g3_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_g3_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x00090771) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x00090771) list_medium_line_g3_g

0xbe26,	// (0x0008d3e4) list_medium_line_g3_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_g3_t1

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g3_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g3_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g3_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g3_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g3_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x00090771) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x00090771) list_medium_line_t2_g3_g

0xbe26,	// (0x0008d3e4) list_medium_line_t2_g3_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t2_g3_t1

0xbe26,	// (0x0008d3e4) list_medium_line_t2_g3_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x00090754) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x00090754) list_medium_line_t2_g3_t

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g3_g1_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g3_g1

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g3_g2_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g3_g2

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g3_g3_ParamLimits

0xb9ac,	// (0x0008cf6a) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x00090771) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x00090771) list_medium_line_t3_g3_g

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g3_t1_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g3_t1

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g3_t2_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g3_t2

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g3_t3_ParamLimits

0xbe26,	// (0x0008d3e4) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x00090778) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x00090778) list_medium_line_t3_g3_t

0xbe54,	// (0x0008d412) list_medium_line_right_iconx2_g1

0xbe54,	// (0x0008d412) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x00090956) list_medium_line_right_iconx2_g

0xc383,	// (0x0008d941) list_medium_line_right_iconx2_t1

0xbe54,	// (0x0008d412) list_medium_line_t2_right_iconx2_g1

0xbe54,	// (0x0008d412) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x00090956) list_medium_line_t2_right_iconx2_g

0xc383,	// (0x0008d941) list_medium_line_t2_right_iconx2_t1

0xc383,	// (0x0008d941) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x000911d6) list_medium_line_t2_right_iconx2_t

0xc383,	// (0x0008d941) list_medium_line_x4_t4_t1

0xc383,	// (0x0008d941) list_medium_line_x4_t4_t2

0xc383,	// (0x0008d941) list_medium_line_x4_t4_t3

0xc383,	// (0x0008d941) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00090841) list_medium_line_x4_t4_t

0x7e2f,	// (0x000893ed) tport_appsw_pane_ParamLimits

0x7e2f,	// (0x000893ed) tport_appsw_pane

0x7e47,	// (0x00089405) tport_contact_pane_ParamLimits

0x7e47,	// (0x00089405) tport_contact_pane

0x7e5f,	// (0x0008941d) tport_listscroll_pane_ParamLimits

0x7e5f,	// (0x0008941d) tport_listscroll_pane

0x7e79,	// (0x00089437) cell_tport_appsw_pane_ParamLimits

0x7e79,	// (0x00089437) cell_tport_appsw_pane

0xc949,	// (0x0008df07) tport_appsw_pane_g1_ParamLimits

0xc949,	// (0x0008df07) tport_appsw_pane_g1

0xbcd5,	// (0x0008d293) tport_contact_pane_g1

0xae3f,	// (0x0008c3fd) tport_contact_pane_t1

0xbcde,	// (0x0008d29c) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x00091210) tport_contact_pane_t

0xca34,	// (0x0008dff2) list_tport_pane

0xca3d,	// (0x0008dffb) scroll_pane_cp_030

0x7ec1,	// (0x0008947f) cell_tport_appsw_pane_g1

0x7ed1,	// (0x0008948f) cell_tport_appsw_pane_t1

0x7edf,	// (0x0008949d) grid_highlight_pane_cp019

0x7ee7,	// (0x000894a5) list_tport_double_graphic_pane_ParamLimits

0x7ee7,	// (0x000894a5) list_tport_double_graphic_pane

0xb2b5,	// (0x0008c873) list_highlight_pane_cp023_ParamLimits

0xb2b5,	// (0x0008c873) list_highlight_pane_cp023

0x7ef4,	// (0x000894b2) list_tport_double_graphic_pane_g1_ParamLimits

0x7ef4,	// (0x000894b2) list_tport_double_graphic_pane_g1

0x7f01,	// (0x000894bf) list_tport_double_graphic_pane_t1_ParamLimits

0x7f01,	// (0x000894bf) list_tport_double_graphic_pane_t1

0x7f16,	// (0x000894d4) list_tport_double_graphic_pane_t2_ParamLimits

0x7f16,	// (0x000894d4) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x0009121c) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x0009121c) list_tport_double_graphic_pane_t

0xb2ab,	// (0x0008c869) main_cale_note_pane

0x5c88,	// (0x00087246) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5c88,	// (0x00087246) cell_vitu2_function_top_wide_pane_cp01

0x78e2,	// (0x00088ea0) wait_bar_pane_cp05_ParamLimits

0xb2b5,	// (0x0008c873) listscroll_cmail_pane

0xca4e,	// (0x0008e00c) list_cmail_pane

0x7f28,	// (0x000894e6) list_cmail_body_pane

0x7f3d,	// (0x000894fb) list_single_cmail_header_caption_pane

0x7f53,	// (0x00089511) list_single_cmail_header_detail_pane_ParamLimits

0x7f53,	// (0x00089511) list_single_cmail_header_detail_pane

0xca65,	// (0x0008e023) list_single_cmail_header_caption_pane_t1

0x0a1c,	// (0x00081fda) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0a1c,	// (0x00081fda) list_single_cmail_header_detail_pane_g1

0xa605,	// (0x0008bbc3) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa605,	// (0x0008bbc3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x00091221) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x00091221) list_single_cmail_header_detail_pane_g

0x0a34,	// (0x00081ff2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0a34,	// (0x00081ff2) list_single_cmail_header_detail_pane_t1

0x0a72,	// (0x00082030) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0a72,	// (0x00082030) list_single_cmail_header_editor_pane_bg

0xaf9c,	// (0x0008c55a) list_cmail_body_pane_g1

0xca89,	// (0x0008e047) list_cmail_body_pane_t1

0x5d89,	// (0x00087347) list_single_cmail_header_editor_pane_bg_g1

0xc065,	// (0x0008d623) list_single_cmail_header_editor_pane_bg_g1_copy1

0x5d99,	// (0x00087357) list_single_cmail_header_editor_pane_bg_g1_copy2

0x5d91,	// (0x0008734f) list_single_cmail_header_editor_pane_bg_g1_copy3

0x6711,	// (0x00087ccf) list_single_cmail_header_editor_pane_bg_g1_copy4

0x5db9,	// (0x00087377) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5da9,	// (0x00087367) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x5db1,	// (0x0008736f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc045,	// (0x0008d603) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7f80,	// (0x0008953e) calenote_gesture_pane_ParamLimits

0x7f80,	// (0x0008953e) calenote_gesture_pane

0x7fa0,	// (0x0008955e) calenote_window_pane_ParamLimits

0x7fa0,	// (0x0008955e) calenote_window_pane

0xca97,	// (0x0008e055) popup_note_window_cp01

0x7fbc,	// (0x0008957a) calenote_swipe_1_pane_ParamLimits

0x7fbc,	// (0x0008957a) calenote_swipe_1_pane

0x7cbf,	// (0x0008927d) calenote_swipe_2_pane_ParamLimits

0x7cbf,	// (0x0008927d) calenote_swipe_2_pane

0xbb21,	// (0x0008d0df) calenote_swipe_1_pane_g1_ParamLimits

0xbb21,	// (0x0008d0df) calenote_swipe_1_pane_g1

0xbb2e,	// (0x0008d0ec) calenote_swipe_1_pane_g2_ParamLimits

0xbb2e,	// (0x0008d0ec) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x000911be) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x000911be) calenote_swipe_1_pane_g

0xcaa9,	// (0x0008e067) calenote_swipe_1_pane_t1_ParamLimits

0xcaa9,	// (0x0008e067) calenote_swipe_1_pane_t1

0xbb21,	// (0x0008d0df) calenote_swipe_2_pane_g1_ParamLimits

0xbb21,	// (0x0008d0df) calenote_swipe_2_pane_g1

0xcac8,	// (0x0008e086) calenote_swipe_2_pane_g2_ParamLimits

0xcac8,	// (0x0008e086) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x0009122d) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x0009122d) calenote_swipe_2_pane_g

0xcad4,	// (0x0008e092) calenote_swipe_2_pane_t1_ParamLimits

0xcad4,	// (0x0008e092) calenote_swipe_2_pane_t1

0xb2ab,	// (0x0008c869) main_mup_navstr_pane

0x456a,	// (0x00085b28) main_mup3_pane_t7_ParamLimits

0x456a,	// (0x00085b28) main_mup3_pane_t7

0x9fdd,	// (0x0008b59b) main_mp4_pane_g6_ParamLimits

0x9fdd,	// (0x0008b59b) main_mp4_pane_g6

0xa19f,	// (0x0008b75d) main_image3_pane_t4_ParamLimits

0xa19f,	// (0x0008b75d) main_image3_pane_t4

0x7fd1,	// (0x0008958f) popup_navstr_preview_pane_ParamLimits

0x7fd1,	// (0x0008958f) popup_navstr_preview_pane

0x7fe5,	// (0x000895a3) scroll_navstr_pane_ParamLimits

0x7fe5,	// (0x000895a3) scroll_navstr_pane

0xb2ab,	// (0x0008c869) bg_popup_preview_window_pane_cp04

0xcafb,	// (0x0008e0b9) popup_navstr_preview_pane_t1

0x7ff9,	// (0x000895b7) scroll_navstr_pane_g1_ParamLimits

0x7ff9,	// (0x000895b7) scroll_navstr_pane_g1

0x800d,	// (0x000895cb) scroll_navstr_pane_t1_ParamLimits

0x800d,	// (0x000895cb) scroll_navstr_pane_t1

0xcaa0,	// (0x0008e05e) bg_button_pane_cp014

0xcaa0,	// (0x0008e05e) bg_button_pane_cp030

0x081f,	// (0x00081ddd) list_double_fisheye_pane_g4_ParamLimits

0x081f,	// (0x00081ddd) list_double_fisheye_pane_g4

0x082b,	// (0x00081de9) list_double_fisheye_pane_g5_ParamLimits

0x082b,	// (0x00081de9) list_double_fisheye_pane_g5

0xe611,	// (0x0008fbcf) sp_fs_scroll_pane_cp03

0xbc41,	// (0x0008d1ff) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbc4d,	// (0x0008d20b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x000911db) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7d69,	// (0x00089327) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xca5d,	// (0x0008e01b) sp_fs_scroll_pane_cp02

0xbd66,	// (0x0008d324) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbd66,	// (0x0008d324) popup_sp_fs_calendar_preview_list_single_pane

0xb2ab,	// (0x0008c869) main_cam6_pano_pane

0xb2b5,	// (0x0008c873) main_mup3_pane_ParamLimits

0xb2ab,	// (0x0008c869) main_phacti_pane

0x77b5,	// (0x00088d73) bg_button_pane_cp11

0x77cf,	// (0x00088d8d) main_mobtv_info_pane_g2_ParamLimits

0x77cf,	// (0x00088d8d) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x0009113b) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x0009113b) main_mobtv_info_pane_g

0x79ac,	// (0x00088f6a) sc_clock_pane_t5_ParamLimits

0x79ac,	// (0x00088f6a) sc_clock_pane_t5

0x7a74,	// (0x00089032) main_radioblah_pane_g1_ParamLimits

0xb239,	// (0x0008c7f7) main_radioblah_pane_t3_ParamLimits

0xb239,	// (0x0008c7f7) main_radioblah_pane_t3

0xb251,	// (0x0008c80f) main_radioblah_pane_t4_ParamLimits

0xb251,	// (0x0008c80f) main_radioblah_pane_t4

0x7a9c,	// (0x0008905a) main_radioblah_text_pane_ParamLimits

0x7a9c,	// (0x0008905a) main_radioblah_text_pane

0x7aae,	// (0x0008906c) main_radioblah_info_pane_g1_ParamLimits

0x7b47,	// (0x00089105) main_radioblah_info_pane_t4_ParamLimits

0x7b47,	// (0x00089105) main_radioblah_info_pane_t4

0xb2b5,	// (0x0008c873) main_sp_fs_calendar_pane

0x8024,	// (0x000895e2) main_phacti_pane_g1

0x802c,	// (0x000895ea) phacti_note_pane_ParamLimits

0x802c,	// (0x000895ea) phacti_note_pane

0xcb12,	// (0x0008e0d0) phacti_term_pane_ParamLimits

0xcb12,	// (0x0008e0d0) phacti_term_pane

0xcb27,	// (0x0008e0e5) phacti_note_pane_t1_ParamLimits

0xcb27,	// (0x0008e0e5) phacti_note_pane_t1

0xa635,	// (0x0008bbf3) phacti_term_pane_g1

0xa63d,	// (0x0008bbfb) phacti_term_pane_t1_ParamLimits

0xa63d,	// (0x0008bbfb) phacti_term_pane_t1

0xcb3e,	// (0x0008e0fc) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbe05,	// (0x0008d3c3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x00091237) popup_sp_fs_calendar_preview_list_single_pane_g

0xcb46,	// (0x0008e104) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcb46,	// (0x0008e104) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcb5c,	// (0x0008e11a) aid_popup_sp_fs_bg_corner_pane

0xbe54,	// (0x0008d412) popup_sp_fs_calendar_preview_bg_pane_g1

0xb2ab,	// (0x0008c869) popup_sp_fs_calendar_preview_bg_pane

0xcb64,	// (0x0008e122) popup_sp_fs_calendar_preview_list_pane

0xc96b,	// (0x0008df29) bg_main_sp_fs_cale_pane_ParamLimits

0xc96b,	// (0x0008df29) bg_main_sp_fs_cale_pane

0xa670,	// (0x0008bc2e) listscroll_cale_mrui_pane_ParamLimits

0xa670,	// (0x0008bc2e) listscroll_cale_mrui_pane

0xa685,	// (0x0008bc43) listscroll_sp_fs_schedule_track_pane

0xa68e,	// (0x0008bc4c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa68e,	// (0x0008bc4c) main_sp_fs_ctrlbar_pane_cp01

0xcb6c,	// (0x0008e12a) main_sp_fs_ribbon_pane

0xa6a1,	// (0x0008bc5f) popup_sp_fs_cale_preview_window

0x80a1,	// (0x0008965f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x80a1,	// (0x0008965f) list_single_sp_fs_schedule_track_pane

0xb2b5,	// (0x0008c873) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb2b5,	// (0x0008c873) bg_sp_fs_highlight_list_pane_cp03

0x80b4,	// (0x00089672) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x80b4,	// (0x00089672) list_single_sp_fs_schedule_track_pane_g1

0x80c0,	// (0x0008967e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x80c0,	// (0x0008967e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x0009123c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x0009123c) list_single_sp_fs_schedule_track_pane_g

0x80cc,	// (0x0008968a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x80cc,	// (0x0008968a) list_single_sp_fs_schedule_track_pane_t1

0x80e6,	// (0x000896a4) sp_fs_schedule_track_pane_ParamLimits

0x80e6,	// (0x000896a4) sp_fs_schedule_track_pane

0xcb74,	// (0x0008e132) sp_fs_schedule_track_pane_g1

0xcb7c,	// (0x0008e13a) sp_fs_schedule_track_pane_g2

0xcb84,	// (0x0008e142) sp_fs_schedule_track_pane_g3

0xcb8c,	// (0x0008e14a) sp_fs_schedule_track_pane_g4

0xcb94,	// (0x0008e152) sp_fs_schedule_track_pane_g5

0x0004,

0x0209,	// (0x000817c7) sp_fs_schedule_track_pane_g

0x5d89,	// (0x00087347) bg_sp_fs_schedule_viewer_highlight_g1

0xc065,	// (0x0008d623) bg_sp_fs_schedule_viewer_highlight_g2

0x5d91,	// (0x0008734f) bg_sp_fs_schedule_viewer_highlight_g3

0x5d99,	// (0x00087357) bg_sp_fs_schedule_viewer_highlight_g4

0x6711,	// (0x00087ccf) bg_sp_fs_schedule_viewer_highlight_g5

0x5da9,	// (0x00087367) bg_sp_fs_schedule_viewer_highlight_g6

0x5db1,	// (0x0008736f) bg_sp_fs_schedule_viewer_highlight_g7

0x5db9,	// (0x00087377) bg_sp_fs_schedule_viewer_highlight_g8

0xc045,	// (0x0008d603) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc83,	// (0x00091241) bg_sp_fs_schedule_viewer_highlight_g

0xb2ab,	// (0x0008c869) bg_main_sp_fs_ribbon_pane

0x80f7,	// (0x000896b5) main_sp_fs_ribbon_pane_g1

0xcb9c,	// (0x0008e15a) main_sp_fs_ribbon_pane_t1

0x8100,	// (0x000896be) main_sp_fs_ribbon_pane_t2

0xcbab,	// (0x0008e169) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc96,	// (0x00091254) main_sp_fs_ribbon_pane_t

0xcbba,	// (0x0008e178) main_sp_fs_ribbon_scheduler_pane

0xcbc2,	// (0x0008e180) bg_main_sp_fs_ribbon_pane_g1

0xcbcb,	// (0x0008e189) bg_main_sp_fs_ribbon_pane_g2

0xcbd4,	// (0x0008e192) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x022e,	// (0x000817ec) bg_main_sp_fs_ribbon_pane_g

0xcbdc,	// (0x0008e19a) main_sp_fs_ribbon_scheduler_pane_g1

0xcbe5,	// (0x0008e1a3) main_sp_fs_ribbon_scheduler_pane_g2

0xcbee,	// (0x0008e1ac) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0235,	// (0x000817f3) main_sp_fs_ribbon_scheduler_pane_g

0xcbf7,	// (0x0008e1b5) list_cale_mrui_pane

0x810f,	// (0x000896cd) sp_fs_scroll_pane_cp07_ParamLimits

0x810f,	// (0x000896cd) sp_fs_scroll_pane_cp07

0x812b,	// (0x000896e9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x812b,	// (0x000896e9) bg_sp_fs_schedule_viewer_highlight

0xcc04,	// (0x0008e1c2) list_single_sp_fs_schedule_track_pane_cp01

0xcc0c,	// (0x0008e1ca) list_sp_fs_schedule_track_pane

0xcc14,	// (0x0008e1d2) sp_fs_scroll_pane_cp06_ParamLimits

0xcc14,	// (0x0008e1d2) sp_fs_scroll_pane_cp06

0xbe54,	// (0x0008d412) bgmain_sp_fs_calendar_pane_g1

0x0a8b,	// (0x00082049) list_single_cale_mrui_pane_ParamLimits

0x0a8b,	// (0x00082049) list_single_cale_mrui_pane

0xa6b3,	// (0x0008bc71) list_single_cale_mrui_row_pane_ParamLimits

0xa6b3,	// (0x0008bc71) list_single_cale_mrui_row_pane

0xa6c0,	// (0x0008bc7e) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa6c0,	// (0x0008bc7e) list_single_cale_mrui_row_pane_g1

0xa6f8,	// (0x0008bcb6) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa6f8,	// (0x0008bcb6) list_single_cale_mrui_row_pane_t1

0x0aab,	// (0x00082069) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0aab,	// (0x00082069) list_single_cale_mrui_row_pane_t2

0xa70a,	// (0x0008bcc8) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa70a,	// (0x0008bcc8) list_single_cale_mrui_row_pane_t3

0xa739,	// (0x0008bcf7) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa739,	// (0x0008bcf7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca4,	// (0x00091262) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca4,	// (0x00091262) list_single_cale_mrui_row_pane_t

0x0b13,	// (0x000820d1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0b13,	// (0x000820d1) list_single_cmail_header_editor_pane_bg_cp01

0x0b41,	// (0x000820ff) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0b41,	// (0x000820ff) list_single_cmail_header_editor_pane_bg_cp02

0x813b,	// (0x000896f9) main_radioblah_text_pane_t1_ParamLimits

0x813b,	// (0x000896f9) main_radioblah_text_pane_t1

0xcc33,	// (0x0008e1f1) cam6_indi_pane_cp01

0xcc3b,	// (0x0008e1f9) cam6_mode_pane_cp01

0xcc43,	// (0x0008e201) cam6_pano_pane

0xcc4c,	// (0x0008e20a) cam6_zoom_pane_cp01

0xcc54,	// (0x0008e212) cam6_pano_image_pane

0xcc5f,	// (0x0008e21d) cam6_pano_pane_g1

0xaf9c,	// (0x0008c55a) cam6_pano_pane_g2

0xcc68,	// (0x0008e226) cam6_pano_pane_g3

0xcc71,	// (0x0008e22f) cam6_pano_pane_g4

0x4e97,	// (0x00086455) cam6_pano_pane_g5

0xcc7a,	// (0x0008e238) cam6_pano_pane_g6

0xb2a3,	// (0x0008c861) cam6_pano_pane_g7

0xcc84,	// (0x0008e242) cam6_pano_pane_g8

0xcc8d,	// (0x0008e24b) cam6_pano_pane_g9

0x0008,

0xfcad,	// (0x0009126b) cam6_pano_pane_g

0xb2ab,	// (0x0008c869) main_browser_tag_pane

0xcaf3,	// (0x0008e0b1) grid_navstr_albumart_pane

0xcc98,	// (0x0008e256) cell_navstr_albumart_pane_ParamLimits

0xcc98,	// (0x0008e256) cell_navstr_albumart_pane

0xccb8,	// (0x0008e276) cell_navstr_albumart_pane_g1

0xe843,	// (0x0008fe01) cell_navstr_albumart_pane_g2

0xe853,	// (0x0008fe11) cell_navstr_albumart_pane_g3

0xe84b,	// (0x0008fe09) cell_navstr_albumart_pane_g4

0x0003,

0xfcc0,	// (0x0009127e) cell_navstr_albumart_pane_g

0x8155,	// (0x00089713) bt_list_pane_ParamLimits

0x8155,	// (0x00089713) bt_list_pane

0x8169,	// (0x00089727) bt_list_pane_t1

0x8178,	// (0x00089736) bt_list_pane_t2

0x0001,

0xfcc9,	// (0x00091287) bt_list_pane_t

0xb2ab,	// (0x0008c869) main_cale_prevew_pane

0x8187,	// (0x00089745) popup_cale_preview_window_ParamLimits

0x8187,	// (0x00089745) popup_cale_preview_window

0xb2b5,	// (0x0008c873) bg_popup_preview_window_pane_cp05_ParamLimits

0xb2b5,	// (0x0008c873) bg_popup_preview_window_pane_cp05

0xccc0,	// (0x0008e27e) list_cale_preview_pane_ParamLimits

0xccc0,	// (0x0008e27e) list_cale_preview_pane

0x81a2,	// (0x00089760) list_double_cale_preview_pane_ParamLimits

0x81a2,	// (0x00089760) list_double_cale_preview_pane

0x81b4,	// (0x00089772) list_single_cale_preview_pane_ParamLimits

0x81b4,	// (0x00089772) list_single_cale_preview_pane

0x81ca,	// (0x00089788) list_single_cale_preview_pane_g1

0x81d2,	// (0x00089790) list_single_cale_preview_pane_t1_ParamLimits

0x81d2,	// (0x00089790) list_single_cale_preview_pane_t1

0x81e7,	// (0x000897a5) list_double_cale_preview_pane_g1

0x81ef,	// (0x000897ad) list_double_cale_preview_pane_t1_ParamLimits

0x81ef,	// (0x000897ad) list_double_cale_preview_pane_t1

0x8204,	// (0x000897c2) list_double_cale_preview_pane_t2_ParamLimits

0x8204,	// (0x000897c2) list_double_cale_preview_pane_t2

0x0001,

0xfcce,	// (0x0009128c) list_double_cale_preview_pane_t_ParamLimits

0xfcce,	// (0x0009128c) list_double_cale_preview_pane_t

0xb2ab,	// (0x0008c869) main_ezdial_pane

0xb2b5,	// (0x0008c873) main_sp_fs_email_pane_ParamLimits

0x7cd9,	// (0x00089297) cmail_ddmenu_btn01_pane_ParamLimits

0x7cd9,	// (0x00089297) cmail_ddmenu_btn01_pane

0x7cec,	// (0x000892aa) cmail_ddmenu_btn02_pane_ParamLimits

0x7cec,	// (0x000892aa) cmail_ddmenu_btn02_pane

0x7d0f,	// (0x000892cd) cmail_ddmenu_btn03_pane_ParamLimits

0x7d0f,	// (0x000892cd) cmail_ddmenu_btn03_pane

0x7da8,	// (0x00089366) main_sp_fs_ctrlbar_pane_ParamLimits

0x7dcc,	// (0x0008938a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7f28,	// (0x000894e6) list_cmail_body_pane_ParamLimits

0xca73,	// (0x0008e031) bg_button_pane_cp12

0xca7c,	// (0x0008e03a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xca7c,	// (0x0008e03a) list_single_cmail_header_detail_pane_g3

0xa611,	// (0x0008bbcf) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa611,	// (0x0008bbcf) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x00091228) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x00091228) list_single_cmail_header_detail_pane_t

0xa652,	// (0x0008bc10) phacti_term_pane_t2_ParamLimits

0xa652,	// (0x0008bc10) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x00091232) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x00091232) phacti_term_pane_t

0xcccc,	// (0x0008e28a) aid_size_list_single_double

0x821c,	// (0x000897da) popup_ezdial_listscroll_window

0x8238,	// (0x000897f6) popup_number_entry_window_cp01

0xbe1e,	// (0x0008d3dc) bg_popup_call_pane_cp09

0xccd8,	// (0x0008e296) ezdial_list_pane

0xcce0,	// (0x0008e29e) scroll_pane_cp23

0xc96b,	// (0x0008df29) bg_button_pane_cp028_ParamLimits

0xc96b,	// (0x0008df29) bg_button_pane_cp028

0x8246,	// (0x00089804) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8246,	// (0x00089804) cmail_ddmenu_btn01_pane_g1

0x8252,	// (0x00089810) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8252,	// (0x00089810) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd3,	// (0x00091291) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd3,	// (0x00091291) cmail_ddmenu_btn01_pane_g

0xcce8,	// (0x0008e2a6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcce8,	// (0x0008e2a6) cmail_ddmenu_btn01_pane_t1

0xc96b,	// (0x0008df29) bg_button_pane_cp029_ParamLimits

0xc96b,	// (0x0008df29) bg_button_pane_cp029

0x8266,	// (0x00089824) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8266,	// (0x00089824) cmail_ddmenu_btn02_pane_g1

0x827e,	// (0x0008983c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x827e,	// (0x0008983c) cmail_ddmenu_btn02_pane_t1

0xb2b5,	// (0x0008c873) bg_button_pane_cp031_ParamLimits

0xb2b5,	// (0x0008c873) bg_button_pane_cp031

0x8266,	// (0x00089824) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8266,	// (0x00089824) cmail_ddmenu_btn03_pane_g1

0x827e,	// (0x0008983c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x827e,	// (0x0008983c) cmail_ddmenu_btn03_pane_t1

0x5454,	// (0x00086a12) cell_dialer2_keypad_pane_t1_ParamLimits

0x546e,	// (0x00086a2c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x546e,	// (0x00086a2c) cell_dialer2_keypad_pane_t1_copy1

0x75d8,	// (0x00088b96) ncimui_group_button_pane

0xb2b5,	// (0x0008c873) main_sp_fs_calendar_pane_ParamLimits

0x7f3d,	// (0x000894fb) list_single_cmail_header_caption_pane_ParamLimits

0xa667,	// (0x0008bc25) aid_recal_txt_sm_pane

0xb2ab,	// (0x0008c869) mian_recal_day_pane

0xa6a1,	// (0x0008bc5f) popup_sp_fs_cale_preview_window_ParamLimits

0xccfe,	// (0x0008e2bc) list_recal_day_pane

0xa783,	// (0x0008bd41) list_single_recal_day_pane_ParamLimits

0xa783,	// (0x0008bd41) list_single_recal_day_pane

0xcd25,	// (0x0008e2e3) list_single_recal_day_pane_g1_ParamLimits

0xcd25,	// (0x0008e2e3) list_single_recal_day_pane_g1

0xa795,	// (0x0008bd53) list_single_recal_day_pane_g2_ParamLimits

0xa795,	// (0x0008bd53) list_single_recal_day_pane_g2

0xa7a1,	// (0x0008bd5f) list_single_recal_day_pane_g3_ParamLimits

0xa7a1,	// (0x0008bd5f) list_single_recal_day_pane_g3

0x0b61,	// (0x0008211f) list_single_recal_day_pane_g4_ParamLimits

0x0b61,	// (0x0008211f) list_single_recal_day_pane_g4

0xa7ad,	// (0x0008bd6b) list_single_recal_day_pane_g5_ParamLimits

0xa7ad,	// (0x0008bd6b) list_single_recal_day_pane_g5

0xa7b9,	// (0x0008bd77) list_single_recal_day_pane_g6_ParamLimits

0xa7b9,	// (0x0008bd77) list_single_recal_day_pane_g6

0x0004,

0xfce2,	// (0x000912a0) list_single_recal_day_pane_g_ParamLimits

0xfce2,	// (0x000912a0) list_single_recal_day_pane_g

0xa7cd,	// (0x0008bd8b) list_single_recal_day_pane_t1

0xa7df,	// (0x0008bd9d) list_single_recal_day_pane_t2

0x0001,

0xfced,	// (0x000912ab) list_single_recal_day_pane_t

0x82a2,	// (0x00089860) ncimui_query_button_pane_ParamLimits

0x82a2,	// (0x00089860) ncimui_query_button_pane

0x82b2,	// (0x00089870) ncimui_query_button_pane_t1_ParamLimits

0x82b2,	// (0x00089870) ncimui_query_button_pane_t1

0xcd31,	// (0x0008e2ef) ncimui_query_button_pane_t2_ParamLimits

0xcd31,	// (0x0008e2ef) ncimui_query_button_pane_t2

0x0001,

0xfcf2,	// (0x000912b0) ncimui_query_button_pane_t_ParamLimits

0xfcf2,	// (0x000912b0) ncimui_query_button_pane_t

0x82c5,	// (0x00089883) query_button_pane_ParamLimits

0x82c5,	// (0x00089883) query_button_pane

0xb2ab,	// (0x0008c869) bg_button_pane_cp0028

0xcd44,	// (0x0008e302) query_button_pane_t1

0x391d,	// (0x00084edb) main_tport_pane_ParamLimits

0x7dec,	// (0x000893aa) bg_popup_window_pane_cp01_ParamLimits

0x7dec,	// (0x000893aa) bg_popup_window_pane_cp01

0x7e07,	// (0x000893c5) heading_pane_cp08_ParamLimits

0x7e07,	// (0x000893c5) heading_pane_cp08

0x7e1a,	// (0x000893d8) heading_pane_cp07_ParamLimits

0x7e1a,	// (0x000893d8) heading_pane_cp07

0x7ec1,	// (0x0008947f) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x00091215) cell_tport_appsw_pane_g

0x045b,	// (0x00081a19) input_candi_list_open_g1

0xc230,	// (0x0008d7ee) list_cale_time_pane_g6_ParamLimits

0xc230,	// (0x0008d7ee) list_cale_time_pane_g6

0x3f3e,	// (0x000854fc) aid_size_touch_calib_1_ParamLimits

0x3f3e,	// (0x000854fc) aid_size_touch_calib_1

0x3f50,	// (0x0008550e) aid_size_touch_calib_2_ParamLimits

0x3f50,	// (0x0008550e) aid_size_touch_calib_2

0x3f68,	// (0x00085526) aid_size_touch_calib_3_ParamLimits

0x3f68,	// (0x00085526) aid_size_touch_calib_3

0x3f86,	// (0x00085544) aid_size_touch_calib_4_ParamLimits

0x3f86,	// (0x00085544) aid_size_touch_calib_4

0x3f9e,	// (0x0008555c) main_touch_calib_button_group_pane_ParamLimits

0x3f9e,	// (0x0008555c) main_touch_calib_button_group_pane

0x3fb6,	// (0x00085574) main_touch_calib_pane_g1_ParamLimits

0x3fc8,	// (0x00085586) main_touch_calib_pane_g2_ParamLimits

0x3fda,	// (0x00085598) main_touch_calib_pane_g3_ParamLimits

0x3fec,	// (0x000855aa) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x00090c57) main_touch_calib_pane_g_ParamLimits

0x3ffe,	// (0x000855bc) main_touch_calib_pane_t1_ParamLimits

0x4018,	// (0x000855d6) main_touch_calib_pane_t2_ParamLimits

0x4032,	// (0x000855f0) main_touch_calib_pane_t3_ParamLimits

0x4046,	// (0x00085604) main_touch_calib_pane_t4_ParamLimits

0x405a,	// (0x00085618) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x00090c60) main_touch_calib_pane_t_ParamLimits

0x480e,	// (0x00085dcc) list_single_fp_cale_pane_g3_ParamLimits

0x480e,	// (0x00085dcc) list_single_fp_cale_pane_g3

0xb2b5,	// (0x0008c873) bg_button_pane_cp012_ParamLimits

0xb2b5,	// (0x0008c873) bg_vkb2_func_pane_cp03_ParamLimits

0x66cd,	// (0x00087c8b) cell_vitu2_function_top_pane_g1_ParamLimits

0xb2b5,	// (0x0008c873) bg_vkb2_func_pane_cp04_ParamLimits

0x7563,	// (0x00088b21) main_ncimui_button_group_pane_ParamLimits

0x7563,	// (0x00088b21) main_ncimui_button_group_pane

0x75c3,	// (0x00088b81) main_ncimui_pane_t3_ParamLimits

0x75c3,	// (0x00088b81) main_ncimui_pane_t3

0xcb09,	// (0x0008e0c7) phacti_button_group_pane

0xcccc,	// (0x0008e28a) aid_size_list_single_double_ParamLimits

0x821c,	// (0x000897da) popup_ezdial_listscroll_window_ParamLimits

0x8238,	// (0x000897f6) popup_number_entry_window_cp01_ParamLimits

0x82d8,	// (0x00089896) phacti_button_pane_ParamLimits

0x82d8,	// (0x00089896) phacti_button_pane

0xb2ab,	// (0x0008c869) bg_button_pane_cp14

0xcd52,	// (0x0008e310) phacti_button_pane_t1

0x82e9,	// (0x000898a7) main_touch_calib_button_pane_ParamLimits

0x82e9,	// (0x000898a7) main_touch_calib_button_pane

0xba1e,	// (0x0008cfdc) bg_button_pane_cp18_ParamLimits

0xba1e,	// (0x0008cfdc) bg_button_pane_cp18

0xcd60,	// (0x0008e31e) main_touch_calib_button_pane_t1_ParamLimits

0xcd60,	// (0x0008e31e) main_touch_calib_button_pane_t1

0xcd76,	// (0x0008e334) main_touch_calib_button_pane_t2_ParamLimits

0xcd76,	// (0x0008e334) main_touch_calib_button_pane_t2

0x0001,

0x0296,	// (0x00081854) main_touch_calib_button_pane_t_ParamLimits

0x0296,	// (0x00081854) main_touch_calib_button_pane_t

0xb2ab,	// (0x0008c869) cell_ncimui_button_pane

0xb2ab,	// (0x0008c869) bg_button_pane_cp032

0xcd94,	// (0x0008e352) cell_ncimui_button_pane_t1

0xa17f,	// (0x0008b73d) image3_infobar_pane_ParamLimits

0xa17f,	// (0x0008b73d) image3_infobar_pane

0x79d8,	// (0x00088f96) fs_bigclock_status_pane_ParamLimits

0x79d8,	// (0x00088f96) fs_bigclock_status_pane

0x79e5,	// (0x00088fa3) main_fs_bigclock_clock_pane_ParamLimits

0x79e5,	// (0x00088fa3) main_fs_bigclock_clock_pane

0x7a03,	// (0x00088fc1) main_fs_bigclock_indi_pane_ParamLimits

0x7a03,	// (0x00088fc1) main_fs_bigclock_indi_pane

0x7a35,	// (0x00088ff3) main_fs_bigclock_swipe_pane_ParamLimits

0x7a35,	// (0x00088ff3) main_fs_bigclock_swipe_pane

0xb2ab,	// (0x0008c869) main_fs_clock_dumped_data

0xb0a9,	// (0x0008c667) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb0a9,	// (0x0008c667) list_single_fs_bigclock_indicator_pane_g1

0xb0c4,	// (0x0008c682) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb0c4,	// (0x0008c682) list_single_fs_bigclock_indicator_pane_g2

0xb0de,	// (0x0008c69c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb0de,	// (0x0008c69c) list_single_fs_bigclock_indicator_pane_g3

0xb0f8,	// (0x0008c6b6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb0f8,	// (0x0008c6b6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x0009116f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x0009116f) list_single_fs_bigclock_indicator_pane_g

0xb123,	// (0x0008c6e1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb123,	// (0x0008c6e1) list_single_fs_bigclock_indicator_pane_t1

0xb14b,	// (0x0008c709) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb14b,	// (0x0008c709) list_single_fs_bigclock_indicator_pane_t2

0xb173,	// (0x0008c731) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb173,	// (0x0008c731) list_single_fs_bigclock_indicator_pane_t3

0xb19b,	// (0x0008c759) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb19b,	// (0x0008c759) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x0009117a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x0009117a) list_single_fs_bigclock_indicator_pane_t

0xcda2,	// (0x0008e360) image3_infobar_fav_pane_ParamLimits

0xcda2,	// (0x0008e360) image3_infobar_fav_pane

0xcdb2,	// (0x0008e370) image3_infobar_loc_pane_ParamLimits

0xcdb2,	// (0x0008e370) image3_infobar_loc_pane

0xcdc6,	// (0x0008e384) image3_infobar_time_pane_ParamLimits

0xcdc6,	// (0x0008e384) image3_infobar_time_pane

0xbe54,	// (0x0008d412) image3_infobar_time_pane_g1

0xcdd6,	// (0x0008e394) image3_infobar_time_pane_t1

0xbe54,	// (0x0008d412) image3_infobar_loc_pane_g1

0xcde4,	// (0x0008e3a2) image3_infobar_loc_pane_g2

0x0001,

0xfcf7,	// (0x000912b5) image3_infobar_loc_pane_g

0xcdec,	// (0x0008e3aa) image3_infobar_loc_pane_t1

0xbe54,	// (0x0008d412) image3_infobar_fav_pane_g1

0xcdfa,	// (0x0008e3b8) image3_infobar_fav_pane_g2

0x0001,

0xfcfc,	// (0x000912ba) image3_infobar_fav_pane_g

0xce02,	// (0x0008e3c0) fs_bigclock_status_battery_pane

0xce0b,	// (0x0008e3c9) fs_bigclock_status_signal_pane

0xce14,	// (0x0008e3d2) fs_bigclock_status_title_pane

0xce1d,	// (0x0008e3db) fs_bigclock_status_signal_pane_g1

0xce26,	// (0x0008e3e4) fs_bigclock_status_signal_pane_g2

0x0001,

0x02a5,	// (0x00081863) fs_bigclock_status_signal_pane_g

0xce2e,	// (0x0008e3ec) fs_bigclock_status_battery_pane_g1

0xce37,	// (0x0008e3f5) fs_bigclock_status_battery_pane_g2

0x0001,

0x02aa,	// (0x00081868) fs_bigclock_status_battery_pane_g

0xce3f,	// (0x0008e3fd) fs_bigclock_status_title_pane_t1

0x82fe,	// (0x000898bc) main_fs_bigclock_clock_pane_g1

0x82fe,	// (0x000898bc) main_fs_bigclock_clock_pane_g2

0x830f,	// (0x000898cd) main_fs_bigclock_clock_pane_g3

0x830f,	// (0x000898cd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd01,	// (0x000912bf) main_fs_bigclock_clock_pane_g

0x8322,	// (0x000898e0) main_fs_bigclock_clock_pane_t1

0x8338,	// (0x000898f6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd0a,	// (0x000912c8) main_fs_bigclock_clock_pane_t

0xce4d,	// (0x0008e40b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xce4d,	// (0x0008e40b) list_single_fs_bigclock_indicator_pane

0xce5e,	// (0x0008e41c) list_single_fs_bigclock_pane_ParamLimits

0xce5e,	// (0x0008e41c) list_single_fs_bigclock_pane

0xce84,	// (0x0008e442) main_fs_bigclock_indicator_pane_t1

0xce93,	// (0x0008e451) list_single_fs_bigclock_pane_g1

0xce9b,	// (0x0008e459) list_single_fs_bigclock_pane_t1

0xbe54,	// (0x0008d412) main_fs_bigclock_swipe_pane_g1

0xcede,	// (0x0008e49c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd16,	// (0x000912d4) main_fs_bigclock_swipe_pane_g

0xcee6,	// (0x0008e4a4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcee6,	// (0x0008e4a4) main_fs_bigclock_swipe_pane_t1

0x2aa6,	// (0x00084064) call_type_pane_ParamLimits

0xb2ab,	// (0x0008c869) main_btmg_pane

0xa6ec,	// (0x0008bcaa) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa6ec,	// (0x0008bcaa) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc9d,	// (0x0009125b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc9d,	// (0x0009125b) list_single_cale_mrui_row_pane_g

0xa772,	// (0x0008bd30) list_recal_vselct_arw_lo_pane

0xcd1d,	// (0x0008e2db) list_recal_vselct_arw_up_pane

0xa77a,	// (0x0008bd38) list_recal_vselct_pane

0x8392,	// (0x00089950) btmg_button_pane

0x839c,	// (0x0008995a) main_btmg_pane_g1

0xb2ab,	// (0x0008c869) bg_button_pane_cp044

0xcf03,	// (0x0008e4c1) btmg_button_pane_t1

0xe993,	// (0x0008ff51) aid_listscroll_gen

0xb2b5,	// (0x0008c873) main_cntbar_detail_pane

0xca46,	// (0x0008e004) list_cmail_folder_pane

0xe611,	// (0x0008fbcf) sp_fs_scroll_pane_cp03_ParamLimits

0x0b79,	// (0x00082137) list_single_fs_dyc_pane_cp01_ParamLimits

0x0b79,	// (0x00082137) list_single_fs_dyc_pane_cp01

0xcf11,	// (0x0008e4cf) aid_size_cmail_indent

0xa7f1,	// (0x0008bdaf) list_single_dyc_row_pane_cp01

0x83d2,	// (0x00089990) cntbar_detail_list_pane_ParamLimits

0x83d2,	// (0x00089990) cntbar_detail_list_pane

0x841e,	// (0x000899dc) main_cntbar_detail_cont_pane_ParamLimits

0x841e,	// (0x000899dc) main_cntbar_detail_cont_pane

0xe611,	// (0x0008fbcf) scroll_pane_cp032_ParamLimits

0xe611,	// (0x0008fbcf) scroll_pane_cp032

0x8432,	// (0x000899f0) cntbar_detail_list_event_pane_ParamLimits

0x8432,	// (0x000899f0) cntbar_detail_list_event_pane

0x83e2,	// (0x000899a0) cntbar_detail_list_shct_pane

0xc0b3,	// (0x0008d671) aid_list_gen

0xcf1a,	// (0x0008e4d8) aid_scroll

0xcf23,	// (0x0008e4e1) aid_size_touch_scroll_bar

0x7bdd,	// (0x0008919b) aid_list_double

0xcf2c,	// (0x0008e4ea) aid_list_single

0xcf2c,	// (0x0008e4ea) aid_list_single_lg

0xa7fa,	// (0x0008bdb8) aid_list_z_g_a_sm

0xa802,	// (0x0008bdc0) aid_list_z_g_d

0xa80a,	// (0x0008bdc8) aid_txt_z_prm

0x0b8e,	// (0x0008214c) aid_txt_z_prm_cp01

0x0b9c,	// (0x0008215a) aid_txt_z_sec

0x8442,	// (0x00089a00) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8442,	// (0x00089a00) main_cntbar_detail_cont_pane_g1

0x8456,	// (0x00089a14) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8456,	// (0x00089a14) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd1b,	// (0x000912d9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd1b,	// (0x000912d9) main_cntbar_detail_cont_pane_g

0xcf35,	// (0x0008e4f3) main_cntbar_detail_cont_pane_t1

0xcf43,	// (0x0008e501) main_cntbar_detail_cont_pane_t2

0xcf51,	// (0x0008e50f) main_cntbar_detail_cont_pane_t3

0x0002,

0x02d3,	// (0x00081891) main_cntbar_detail_cont_pane_t

0x8466,	// (0x00089a24) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8466,	// (0x00089a24) cell_cntbar_detail_list_shct_pane

0xcf5f,	// (0x0008e51d) cntbar_detail_list_shct_pane_g1

0xcf68,	// (0x0008e526) cntbar_detail_list_shct_pane_g2

0x0001,

0x02da,	// (0x00081898) cntbar_detail_list_shct_pane_g

0x847a,	// (0x00089a38) cntbar_detail_list_event_pane_g1_ParamLimits

0x847a,	// (0x00089a38) cntbar_detail_list_event_pane_g1

0x8486,	// (0x00089a44) cntbar_detail_list_event_pane_g2_ParamLimits

0x8486,	// (0x00089a44) cntbar_detail_list_event_pane_g2

0x0005,

0xfd20,	// (0x000912de) cntbar_detail_list_event_pane_g_ParamLimits

0xfd20,	// (0x000912de) cntbar_detail_list_event_pane_g

0x84f2,	// (0x00089ab0) cntbar_detail_list_event_pane_t1_ParamLimits

0x84f2,	// (0x00089ab0) cntbar_detail_list_event_pane_t1

0x8507,	// (0x00089ac5) cntbar_detail_list_event_pane_t2_ParamLimits

0x8507,	// (0x00089ac5) cntbar_detail_list_event_pane_t2

0x0002,

0xfd2d,	// (0x000912eb) cntbar_detail_list_event_pane_t_ParamLimits

0xfd2d,	// (0x000912eb) cntbar_detail_list_event_pane_t

0xbe54,	// (0x0008d412) cell_cntbar_detail_list_shct_pane_g1

0xc84a,	// (0x0008de08) navi_pane_mv_g3

0xb2b5,	// (0x0008c873) main_cntbar_detail_pane_ParamLimits

0xb2ab,	// (0x0008c869) main_notif_wgt_pane

0x9f6b,	// (0x0008b529) aid_tch_main_mp4_pane_g4

0xa177,	// (0x0008b735) popup_slider_window_cp02

0xa768,	// (0x0008bd26) list_recal_day_event_pane

0x83a6,	// (0x00089964) cntbar_detail_btn_pane_ParamLimits

0x83a6,	// (0x00089964) cntbar_detail_btn_pane

0x83bc,	// (0x0008997a) cntbar_detail_btn_pane_cp01_ParamLimits

0x83bc,	// (0x0008997a) cntbar_detail_btn_pane_cp01

0x83e2,	// (0x000899a0) cntbar_detail_list_shct_pane_ParamLimits

0x83f2,	// (0x000899b0) cntbar_detail_pane_g1_ParamLimits

0x83f2,	// (0x000899b0) cntbar_detail_pane_g1

0x8402,	// (0x000899c0) cntbar_detail_pane_t1_ParamLimits

0x8402,	// (0x000899c0) cntbar_detail_pane_t1

0x8492,	// (0x00089a50) cntbar_detail_list_event_pane_g3_ParamLimits

0x8492,	// (0x00089a50) cntbar_detail_list_event_pane_g3

0x84aa,	// (0x00089a68) cntbar_detail_list_event_pane_g4_ParamLimits

0x84aa,	// (0x00089a68) cntbar_detail_list_event_pane_g4

0x84c2,	// (0x00089a80) cntbar_detail_list_event_pane_g5_ParamLimits

0x84c2,	// (0x00089a80) cntbar_detail_list_event_pane_g5

0x84da,	// (0x00089a98) cntbar_detail_list_event_pane_g6_ParamLimits

0x84da,	// (0x00089a98) cntbar_detail_list_event_pane_g6

0x851c,	// (0x00089ada) cntbar_detail_list_event_pane_t3_ParamLimits

0x851c,	// (0x00089ada) cntbar_detail_list_event_pane_t3

0x852e,	// (0x00089aec) popup_notif_wgt_window_ParamLimits

0x852e,	// (0x00089aec) popup_notif_wgt_window

0x8547,	// (0x00089b05) popup_submenu_window_cp01_ParamLimits

0x8547,	// (0x00089b05) popup_submenu_window_cp01

0xbe1e,	// (0x0008d3dc) bg_popup_window_pane_cp10

0xcf71,	// (0x0008e52f) listscroll_notif_wgt_pane

0xcf83,	// (0x0008e541) list_notif_wgt_window

0xcf8c,	// (0x0008e54a) scroll_pane_cp033

0x855d,	// (0x00089b1b) list_notif_wgt_row_pane_ParamLimits

0x855d,	// (0x00089b1b) list_notif_wgt_row_pane

0xcf95,	// (0x0008e553) aid_size_list_notif_wgt_del

0xcfa2,	// (0x0008e560) list_notif_wgt_row_pane_g1

0xcfae,	// (0x0008e56c) list_notif_wgt_row_pane_g2

0xcfbd,	// (0x0008e57b) list_notif_wgt_row_pane_g3

0x0002,

0x02f3,	// (0x000818b1) list_notif_wgt_row_pane_g

0xcfca,	// (0x0008e588) list_notif_wgt_row_pane_t1

0xcfe0,	// (0x0008e59e) list_notif_wgt_row_pane_t2

0xcff2,	// (0x0008e5b0) list_notif_wgt_row_pane_t3

0x0002,

0x02fa,	// (0x000818b8) list_notif_wgt_row_pane_t

0x6761,	// (0x00087d1f) list_recal_day_event_pane_g1

0xd004,	// (0x0008e5c2) list_recal_day_event_pane_t1

0xb2ab,	// (0x0008c869) bg_button_pane_cp045

0xd013,	// (0x0008e5d1) cntbar_detail_btn_pane_t1

0xc96b,	// (0x0008df29) main_callh_pane_ParamLimits

0xc96b,	// (0x0008df29) main_callh_pane

0xb2ab,	// (0x0008c869) main_coverflow0_pane

0xb2ab,	// (0x0008c869) main_wgtman_pane

0x7a4d,	// (0x0008900b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a4d,	// (0x0008900b) main_fs_bigclock_unlock_btn_pane

0x7eb9,	// (0x00089477) bg_button_pane_cp16

0x7ec9,	// (0x00089487) cell_tport_appsw_pane_g3

0x856d,	// (0x00089b2b) cf0_flow_pane_ParamLimits

0x856d,	// (0x00089b2b) cf0_flow_pane

0xd021,	// (0x0008e5df) listscroll_cf0_pane

0xd02c,	// (0x0008e5ea) main_cf0_pane_g1

0x8582,	// (0x00089b40) main_cf0_pane_t1_ParamLimits

0x8582,	// (0x00089b40) main_cf0_pane_t1

0x8599,	// (0x00089b57) main_cf0_pane_t2_ParamLimits

0x8599,	// (0x00089b57) main_cf0_pane_t2

0x0001,

0xfd34,	// (0x000912f2) main_cf0_pane_t_ParamLimits

0xfd34,	// (0x000912f2) main_cf0_pane_t

0xd03e,	// (0x0008e5fc) scroll_pane_cp11

0x85b0,	// (0x00089b6e) cf0_flow_pane_g1

0x85b8,	// (0x00089b76) cf0_flow_pane_g2

0x0001,

0xfd39,	// (0x000912f7) cf0_flow_pane_g

0x85c0,	// (0x00089b7e) cf0_flow_pane_t1

0xb2ab,	// (0x0008c869) main_call6_pane

0xb2ab,	// (0x0008c869) main_calllock_pane

0x85ce,	// (0x00089b8c) call6_btn_grp_pane_ParamLimits

0x85ce,	// (0x00089b8c) call6_btn_grp_pane

0x85e8,	// (0x00089ba6) call6_pane_g1_ParamLimits

0x85e8,	// (0x00089ba6) call6_pane_g1

0x85fe,	// (0x00089bbc) popup_call6_1st_window_ParamLimits

0x85fe,	// (0x00089bbc) popup_call6_1st_window

0x860f,	// (0x00089bcd) popup_call6_2nd_window_ParamLimits

0x860f,	// (0x00089bcd) popup_call6_2nd_window

0x8620,	// (0x00089bde) cell_call6_btn_pane_ParamLimits

0x8620,	// (0x00089bde) cell_call6_btn_pane

0xbe1e,	// (0x0008d3dc) bg_popup_call2_in_pane_cp03

0xd049,	// (0x0008e607) popup_call6_1st_window_g1

0xd051,	// (0x0008e60f) popup_call6_1st_window_g2

0xd059,	// (0x0008e617) popup_call6_1st_window_g3

0x0002,

0x0310,	// (0x000818ce) popup_call6_1st_window_g

0xd061,	// (0x0008e61f) popup_call6_1st_window_t1

0xd070,	// (0x0008e62e) popup_call6_1st_window_t2

0xd07e,	// (0x0008e63c) popup_call6_1st_window_t3

0x0002,

0x0317,	// (0x000818d5) popup_call6_1st_window_t

0xbe1e,	// (0x0008d3dc) bg_popup_call2_in_pane_cp04

0xd08c,	// (0x0008e64a) popup_call6_2nd_window_g1

0xd094,	// (0x0008e652) popup_call6_2nd_window_g2

0xd09c,	// (0x0008e65a) popup_call6_2nd_window_g3

0x0002,

0x031e,	// (0x000818dc) popup_call6_2nd_window_g

0xd0a4,	// (0x0008e662) popup_call6_2nd_window_t1

0xb2ab,	// (0x0008c869) bg_button_pane_cp15

0xd0b3,	// (0x0008e671) cell_call6_btn_pane_g1

0xd535,	// (0x0008eaf3) cell_call6_btn_pane_t1

0x8633,	// (0x00089bf1) listscroll_wgtman_pane_ParamLimits

0x8633,	// (0x00089bf1) listscroll_wgtman_pane

0x8654,	// (0x00089c12) wgtman_btn_pane_ParamLimits

0x8654,	// (0x00089c12) wgtman_btn_pane

0xc631,	// (0x0008dbef) aid_scroll_copy1

0xd0bc,	// (0x0008e67a) list_wgtman_pane

0x8697,	// (0x00089c55) wgtman_btn_pane_g1_ParamLimits

0x8697,	// (0x00089c55) wgtman_btn_pane_g1

0x86c3,	// (0x00089c81) wgtman_btn_pane_t1_ParamLimits

0x86c3,	// (0x00089c81) wgtman_btn_pane_t1

0xd0c6,	// (0x0008e684) wgtman_btn_pane_t2_ParamLimits

0xd0c6,	// (0x0008e684) wgtman_btn_pane_t2

0x0001,

0xfd3e,	// (0x000912fc) wgtman_btn_pane_t_ParamLimits

0xfd3e,	// (0x000912fc) wgtman_btn_pane_t

0x8700,	// (0x00089cbe) listrow_wgtman_pane_ParamLimits

0x8700,	// (0x00089cbe) listrow_wgtman_pane

0x8712,	// (0x00089cd0) listrow_wgtman_pane_g1

0x871f,	// (0x00089cdd) listrow_wgtman_pane_g2

0x0001,

0xfd43,	// (0x00091301) listrow_wgtman_pane_g

0x0baa,	// (0x00082168) listrow_wgtman_pane_t1

0x0bc2,	// (0x00082180) listrow_wgtman_pane_t2

0x0001,

0xfd48,	// (0x00091306) listrow_wgtman_pane_t

0x0be8,	// (0x000821a6) wait_bar_pane_cp09

0xd0dd,	// (0x0008e69b) main_calllock_btn_pane

0xd0e7,	// (0x0008e6a5) main_calllock_pane_g1

0xb2ab,	// (0x0008c869) bg_button_pane_cp17

0xd0b3,	// (0x0008e671) main_calllock_btn_pane_g1

0xd0ef,	// (0x0008e6ad) main_calllock_btn_pane_t1

0xb2ab,	// (0x0008c869) main_dialer3_pane

0xb2ab,	// (0x0008c869) main_fmrd2_pane

0xbe54,	// (0x0008d412) main_fs_bigclock_unlock_btn_pane_g1

0x8745,	// (0x00089d03) main_fs_bigclock_unlock_btn_pane_t1

0x8753,	// (0x00089d11) area_fmrd2_info_pane_ParamLimits

0x8753,	// (0x00089d11) area_fmrd2_info_pane

0x8764,	// (0x00089d22) area_fmrd2_visual_pane_ParamLimits

0x8764,	// (0x00089d22) area_fmrd2_visual_pane

0x8772,	// (0x00089d30) fmrd2_indi_pane_ParamLimits

0x8772,	// (0x00089d30) fmrd2_indi_pane

0x877f,	// (0x00089d3d) area_fmrd2_visual_pane_g1

0x8787,	// (0x00089d45) area_fmrd2_visual_pane_t1

0x8797,	// (0x00089d55) area_fmrd2_visual_pane_t2

0x87a7,	// (0x00089d65) area_fmrd2_visual_pane_t3

0x0002,

0xfd52,	// (0x00091310) area_fmrd2_visual_pane_t

0x87b7,	// (0x00089d75) area_fmrd2_info_pane_g1

0x87bf,	// (0x00089d7d) area_fmrd2_info_pane_t1

0x87cf,	// (0x00089d8d) area_fmrd2_info_pane_t2

0x87df,	// (0x00089d9d) area_fmrd2_info_pane_t3

0x87ef,	// (0x00089dad) area_fmrd2_info_pane_t4

0x0003,

0xfd59,	// (0x00091317) area_fmrd2_info_pane_t

0x87fd,	// (0x00089dbb) fmrd2_indi_pane_t1

0x880d,	// (0x00089dcb) fmrd2_indi_pane_t2

0x881d,	// (0x00089ddb) fmrd2_indi_pane_t3

0x0002,

0xfd62,	// (0x00091320) fmrd2_indi_pane_t

0xb107,	// (0x0008c6c5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb107,	// (0x0008c6c5) list_single_fs_bigclock_indicator_pane_g5

0xb1b8,	// (0x0008c776) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb1b8,	// (0x0008c776) list_single_fs_bigclock_indicator_pane_t5

0x8040,	// (0x000895fe) aid_cell_bcale_month_pane_ParamLimits

0x8040,	// (0x000895fe) aid_cell_bcale_month_pane

0x805e,	// (0x0008961c) bcale_month_pane_ParamLimits

0x805e,	// (0x0008961c) bcale_month_pane

0x8082,	// (0x00089640) bcale_preview_pane_ParamLimits

0x8082,	// (0x00089640) bcale_preview_pane

0xce9b,	// (0x0008e459) list_single_fs_bigclock_pane_t1_ParamLimits

0xceba,	// (0x0008e478) list_single_fs_bigclock_pane_t2_ParamLimits

0xceba,	// (0x0008e478) list_single_fs_bigclock_pane_t2

0x0001,

0x02c4,	// (0x00081882) list_single_fs_bigclock_pane_t_ParamLimits

0x02c4,	// (0x00081882) list_single_fs_bigclock_pane_t

0x873d,	// (0x00089cfb) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd4d,	// (0x0009130b) main_fs_bigclock_unlock_btn_pane_g

0x882d,	// (0x00089deb) aid_dia3_key_size_ParamLimits

0x882d,	// (0x00089deb) aid_dia3_key_size

0x883c,	// (0x00089dfa) aid_dia3_listrow_size_ParamLimits

0x883c,	// (0x00089dfa) aid_dia3_listrow_size

0x8851,	// (0x00089e0f) dia3_keypad_fun_pane_ParamLimits

0x8851,	// (0x00089e0f) dia3_keypad_fun_pane

0x886d,	// (0x00089e2b) dia3_keypad_num_pane_ParamLimits

0x886d,	// (0x00089e2b) dia3_keypad_num_pane

0x8888,	// (0x00089e46) dia3_listscroll_pane_ParamLimits

0x8888,	// (0x00089e46) dia3_listscroll_pane

0x889b,	// (0x00089e59) dia3_numentry_pane_ParamLimits

0x889b,	// (0x00089e59) dia3_numentry_pane

0xd0fe,	// (0x0008e6bc) dia3_list_pane

0xd109,	// (0x0008e6c7) scroll_pane_cp12

0xb2ab,	// (0x0008c869) bg_dia3_numentry_pane

0x88b3,	// (0x00089e71) dia3_numentry_pane_t1

0x88c2,	// (0x00089e80) cell_dia3_key_num_pane

0x88ca,	// (0x00089e88) cell_dia3_key0_fun_pane_ParamLimits

0x88ca,	// (0x00089e88) cell_dia3_key0_fun_pane

0x88de,	// (0x00089e9c) cell_dia3_key1_fun_pane_ParamLimits

0x88de,	// (0x00089e9c) cell_dia3_key1_fun_pane

0x88f6,	// (0x00089eb4) dia3_listrow_pane

0xae5a,	// (0x0008c418) bg_dia3_numentry_pane_g1

0xb2ab,	// (0x0008c869) bg_button_pane_cp21

0xd114,	// (0x0008e6d2) cell_dia3_key_num_pane_t1

0xd122,	// (0x0008e6e0) cell_dia3_key_num_pane_t2

0xd131,	// (0x0008e6ef) cell_dia3_key_num_pane_t3

0xd140,	// (0x0008e6fe) cell_dia3_key_num_pane_t4

0x0003,

0x0350,	// (0x0008190e) cell_dia3_key_num_pane_t

0xb2ab,	// (0x0008c869) bg_button_pane_cp19

0x8908,	// (0x00089ec6) cell_dia3_key0_fun_pane_g1

0xb2ab,	// (0x0008c869) bg_button_pane_cp20

0x8910,	// (0x00089ece) cell_dia3_key1_fun_pane_g1

0x8918,	// (0x00089ed6) area_left_week_number_pane

0x8924,	// (0x00089ee2) area_top_day_name_pane

0x8937,	// (0x00089ef5) frame_month_view_pane

0xd14f,	// (0x0008e70d) grid_month_view_pane

0x894a,	// (0x00089f08) cell_top_day_name_pane_ParamLimits

0x894a,	// (0x00089f08) cell_top_day_name_pane

0x8977,	// (0x00089f35) cell_area_left_week_number_pane_ParamLimits

0x8977,	// (0x00089f35) cell_area_left_week_number_pane

0x898b,	// (0x00089f49) cell_month_view_pane_ParamLimits

0x898b,	// (0x00089f49) cell_month_view_pane

0xd15d,	// (0x0008e71b) frm_month_g1

0x89b8,	// (0x00089f76) frm_month_g2

0x89cb,	// (0x00089f89) frm_month_g3

0x89de,	// (0x00089f9c) frm_month_g4

0x89f1,	// (0x00089faf) frm_month_g5

0x8a04,	// (0x00089fc2) frm_month_g6

0x8a17,	// (0x00089fd5) frm_month_g7

0xd544,	// (0x0008eb02) frm_month_g8

0x8a2a,	// (0x00089fe8) frm_month_g9

0x8a3a,	// (0x00089ff8) frm_month_g10

0x8a4a,	// (0x0008a008) frm_month_g11

0x8a5a,	// (0x0008a018) frm_month_g12

0x8a6c,	// (0x0008a02a) frm_month_g13

0x8a7e,	// (0x0008a03c) frm_month_g14

0x8a92,	// (0x0008a050) frm_month_g15

0x8aa6,	// (0x0008a064) frm_month_g16

0x000f,

0xfd69,	// (0x00091327) frm_month_g

0xd551,	// (0x0008eb0f) cell_top_day_name_pane_t1

0x8aba,	// (0x0008a078) cell_area_left_week_number_pane_g1

0x8ac6,	// (0x0008a084) cell_area_left_week_number_pane_t1

0xb9ac,	// (0x0008cf6a) cell_month_view_pane_g1

0x8ad9,	// (0x0008a097) cell_month_view_pane_t1

0xb2ab,	// (0x0008c869) main_fps_pane

0xbc09,	// (0x0008d1c7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xbc09,	// (0x0008d1c7) cmail_ddmenu_btn02_pane_cp1

0xbc25,	// (0x0008d1e3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xbc25,	// (0x0008d1e3) cmail_ddmenu_btn02_pane_cp2

0x8272,	// (0x00089830) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8272,	// (0x00089830) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd8,	// (0x00091296) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd8,	// (0x00091296) cmail_ddmenu_btn02_pane_g

0x8290,	// (0x0008984e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8290,	// (0x0008984e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcdd,	// (0x0009129b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcdd,	// (0x0009129b) cmail_ddmenu_btn02_pane_t

0x8aec,	// (0x0008a0aa) fps_text_pane_ParamLimits

0x8aec,	// (0x0008a0aa) fps_text_pane

0x8b03,	// (0x0008a0c1) main_fps_pane_g1_ParamLimits

0x8b03,	// (0x0008a0c1) main_fps_pane_g1

0x8b1d,	// (0x0008a0db) wait_bar_pane_cp010_ParamLimits

0x8b1d,	// (0x0008a0db) wait_bar_pane_cp010

0x8b2e,	// (0x0008a0ec) fps_text_pane_t1_ParamLimits

0x8b2e,	// (0x0008a0ec) fps_text_pane_t1

0xbac5,	// (0x0008d083) cam4_image_uncrop_pane_g1

0xbace,	// (0x0008d08c) cam4_image_uncrop_pane_g2

0x59b5,	// (0x00086f73) cam4_image_uncrop_pane_g3

0x59be,	// (0x00086f7c) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x00090df3) cam4_image_uncrop_pane_g

0x88f6,	// (0x00089eb4) dia3_listrow_pane_ParamLimits

0xb2ab,	// (0x0008c869) main_phob2_pane

0x7e8a,	// (0x00089448) cell_tport_appsw_pane_cp02_ParamLimits

0x7e8a,	// (0x00089448) cell_tport_appsw_pane_cp02

0x7e9e,	// (0x0008945c) cell_tport_appsw_pane_cp03_ParamLimits

0x7e9e,	// (0x0008945c) cell_tport_appsw_pane_cp03

0xb2ab,	// (0x0008c869) phob2_contact_card_pane

0xb2ab,	// (0x0008c869) phob2_listscroll_pane

0xd564,	// (0x0008eb22) phob2_list_pane

0xd56c,	// (0x0008eb2a) scroll_pane_cp034

0x8b46,	// (0x0008a104) phob2_cc_data_pane_ParamLimits

0x8b46,	// (0x0008a104) phob2_cc_data_pane

0x8b65,	// (0x0008a123) phob2_cc_listscroll_pane_ParamLimits

0x8b65,	// (0x0008a123) phob2_cc_listscroll_pane

0x8700,	// (0x00089cbe) list_double_large_graphic_phob2_pane_ParamLimits

0x8700,	// (0x00089cbe) list_double_large_graphic_phob2_pane

0x8b83,	// (0x0008a141) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8b83,	// (0x0008a141) list_double_large_graphic_phob2_pane_g1

0x0bfa,	// (0x000821b8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0bfa,	// (0x000821b8) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd8a,	// (0x00091348) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd8a,	// (0x00091348) list_double_large_graphic_phob2_pane_g

0x0c12,	// (0x000821d0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0c12,	// (0x000821d0) list_double_large_graphic_phob2_pane_t1

0x0c27,	// (0x000821e5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0c27,	// (0x000821e5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd93,	// (0x00091351) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd93,	// (0x00091351) list_double_large_graphic_phob2_pane_t

0xb2ab,	// (0x0008c869) list_highlight_pane_cp024

0xd574,	// (0x0008eb32) phob2_cc_button_pane

0x8b9e,	// (0x0008a15c) phob2_cc_data_pane_g1_ParamLimits

0x8b9e,	// (0x0008a15c) phob2_cc_data_pane_g1

0x8bb5,	// (0x0008a173) phob2_cc_data_pane_g2_ParamLimits

0x8bb5,	// (0x0008a173) phob2_cc_data_pane_g2

0x0001,

0xfd98,	// (0x00091356) phob2_cc_data_pane_g_ParamLimits

0xfd98,	// (0x00091356) phob2_cc_data_pane_g

0x8bc7,	// (0x0008a185) phob2_cc_data_pane_t1_ParamLimits

0x8bc7,	// (0x0008a185) phob2_cc_data_pane_t1

0x8bdf,	// (0x0008a19d) phob2_cc_data_pane_t2_ParamLimits

0x8bdf,	// (0x0008a19d) phob2_cc_data_pane_t2

0x8bf7,	// (0x0008a1b5) phob2_cc_data_pane_t3_ParamLimits

0x8bf7,	// (0x0008a1b5) phob2_cc_data_pane_t3

0x0002,

0xfd9d,	// (0x0009135b) phob2_cc_data_pane_t_ParamLimits

0xfd9d,	// (0x0009135b) phob2_cc_data_pane_t

0xd57c,	// (0x0008eb3a) phob2_cc_list_pane_ParamLimits

0xd57c,	// (0x0008eb3a) phob2_cc_list_pane

0x69e2,	// (0x00087fa0) scroll_pane_cp035_ParamLimits

0x69e2,	// (0x00087fa0) scroll_pane_cp035

0xb2b5,	// (0x0008c873) bg_button_pane_cp033

0xd588,	// (0x0008eb46) phob2_cc_button_pane_g1

0xd594,	// (0x0008eb52) phob2_cc_button_pane_t1

0xd5a9,	// (0x0008eb67) phob2_cc_button_pane_t2

0x0001,

0xfda4,	// (0x00091362) phob2_cc_button_pane_t

0x8c0f,	// (0x0008a1cd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8c0f,	// (0x0008a1cd) list_double_large_graphic_phob2_cc_pane

0x8c3f,	// (0x0008a1fd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8c3f,	// (0x0008a1fd) list_double_large_graphic_phob2_cc_pane_g1

0x0c3c,	// (0x000821fa) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0c3c,	// (0x000821fa) list_double_large_graphic_phob2_cc_pane_g2

0x0c48,	// (0x00082206) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0c48,	// (0x00082206) list_double_large_graphic_phob2_cc_pane_g3

0x0c54,	// (0x00082212) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0c54,	// (0x00082212) list_double_large_graphic_phob2_cc_pane_g4

0x0c60,	// (0x0008221e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0c60,	// (0x0008221e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfda9,	// (0x00091367) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfda9,	// (0x00091367) list_double_large_graphic_phob2_cc_pane_g

0x0c6c,	// (0x0008222a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0c6c,	// (0x0008222a) list_double_large_graphic_phob2_cc_pane_t1

0x0c95,	// (0x00082253) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0c95,	// (0x00082253) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdb4,	// (0x00091372) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdb4,	// (0x00091372) list_double_large_graphic_phob2_cc_pane_t

0xd5bb,	// (0x0008eb79) list_highlight_pane_cp025_ParamLimits

0xd5bb,	// (0x0008eb79) list_highlight_pane_cp025

0xb2b5,	// (0x0008c873) bg_button_pane_cp033_ParamLimits

0xd588,	// (0x0008eb46) phob2_cc_button_pane_g1_ParamLimits

0xd594,	// (0x0008eb52) phob2_cc_button_pane_t1_ParamLimits

0xd5a9,	// (0x0008eb67) phob2_cc_button_pane_t2_ParamLimits

0xfda4,	// (0x00091362) phob2_cc_button_pane_t_ParamLimits

0x0ef6,	// (0x000824b4) popup_wgtman_window

0x61be,	// (0x0008777c) scroll_pane_cp038

0x8679,	// (0x00089c37) wgtman_btn_pane_cp_01_ParamLimits

0x8679,	// (0x00089c37) wgtman_btn_pane_cp_01

0xd5c9,	// (0x0008eb87) wgtman_content_pane

0xd5d2,	// (0x0008eb90) wgtman_heading_pane

0xb2ab,	// (0x0008c869) bg_heading_pane_cp02

0xd5db,	// (0x0008eb99) wgtman_heading_pane_g1

0xd5e3,	// (0x0008eba1) wgtman_heading_pane_t1

0xd5f1,	// (0x0008ebaf) scroll_pane_cp036

0xd5f9,	// (0x0008ebb7) wgtman_list_pane

0xd601,	// (0x0008ebbf) wgtman_list_pane_t1_ParamLimits

0xd601,	// (0x0008ebbf) wgtman_list_pane_t1

0xa203,	// (0x0008b7c1) cam4_grid_pane

0x0637,	// (0x00081bf5) bg_button_pane_cp015_ParamLimits

0x6895,	// (0x00087e53) bg_button_pane_cp016_ParamLimits

0x68a1,	// (0x00087e5f) bg_button_pane_cp017_ParamLimits

0x68c8,	// (0x00087e86) popup_vitu2_query_window_g3_ParamLimits

0x68c8,	// (0x00087e86) popup_vitu2_query_window_g3

0x06ee,	// (0x00081cac) popup_vitu2_query_window_t6_ParamLimits

0x06ee,	// (0x00081cac) popup_vitu2_query_window_t6

0x0719,	// (0x00081cd7) popup_vitu2_query_window_t7_ParamLimits

0x0719,	// (0x00081cd7) popup_vitu2_query_window_t7

0xbac5,	// (0x0008d083) cam4_grid_pane_g1

0xbace,	// (0x0008d08c) cam4_grid_pane_g2

0xd61b,	// (0x0008ebd9) cam4_grid_pane_g3

0xd624,	// (0x0008ebe2) cam4_grid_pane_g4

0x0003,

0xfdb9,	// (0x00091377) cam4_grid_pane_g

0x1a95,	// (0x00083053) aid_placing_vt_slider_lsc_ParamLimits

0x1da0,	// (0x0008335e) vidtel_button_pane_ParamLimits

0x1da0,	// (0x0008335e) vidtel_button_pane

0xb2ab,	// (0x0008c869) bg_button_pane_cp034

0xd62f,	// (0x0008ebed) vidtel_button_pane_g1

0xd637,	// (0x0008ebf5) vidtel_button_pane_t1

0x6590,	// (0x00087b4e) aid_size_vtel_slider_touch

0x69e2,	// (0x00087fa0) scroll_pane_cp039

0x7741,	// (0x00088cff) ncim_query_button_pane_cp01_ParamLimits

0x7760,	// (0x00088d1e) ncimui_query_pane_g1_ParamLimits

0xb2b5,	// (0x0008c873) input_focus_pane_cp012_ParamLimits

0xae98,	// (0x0008c456) ncim_query_entry_pane_t1_ParamLimits

0x69e2,	// (0x00087fa0) scroll_pane_cp039_ParamLimits

0xc735,	// (0x0008dcf3) navi_pane_bcale_mc_g1

0xc73d,	// (0x0008dcfb) navi_pane_bcale_mc_t1

0xbc59,	// (0x0008d217) main_sp_fs_email_pane_g1

0xbc65,	// (0x0008d223) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x000911e4) main_sp_fs_email_pane_g

0xcc26,	// (0x0008e1e4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcc26,	// (0x0008e1e4) list_single_cale_mrui_row_pane_g3

0x0b6f,	// (0x0008212d) list_single_recal_day_pane_g5_event_pane

0xa7c5,	// (0x0008bd83) list_single_recal_day_pane_g7

0xd64d,	// (0x0008ec0b) list_recal_day_event_pane_cp01

0xd656,	// (0x0008ec14) list_recal_vselct_arw_lo_pane_cp01

0xd65e,	// (0x0008ec1c) list_recal_vselct_arw_up_pane_cp01

0xd666,	// (0x0008ec24) list_recal_vselct_pane_cp01

0x6761,	// (0x00087d1f) list_recal_day_event_pane_cp01_g1

0xa818,	// (0x0008bdd6) list_recal_day_event_pane_cp01_t1

0xa7cd,	// (0x0008bd8b) list_single_recal_day_pane_t1_ParamLimits

0xa7df,	// (0x0008bd9d) list_single_recal_day_pane_t2_ParamLimits

0xfced,	// (0x000912ab) list_single_recal_day_pane_t_ParamLimits

0xb931,	// (0x0008ceef) bg_notes_pane_ParamLimits

0xb9fc,	// (0x0008cfba) list_notes_pane_ParamLimits

0x10fc,	// (0x000826ba) scroll_pane_cp06_ParamLimits

0xba1e,	// (0x0008cfdc) main_notes_pane_ParamLimits

0xb2b5,	// (0x0008c873) main_welc_pane

0x8c78,	// (0x0008a236) main_welc_body_pane_ParamLimits

0x8c78,	// (0x0008a236) main_welc_body_pane

0x8c96,	// (0x0008a254) main_welc_opti_pane_ParamLimits

0x8c96,	// (0x0008a254) main_welc_opti_pane

0x8d14,	// (0x0008a2d2) main_welc_pane_t1_ParamLimits

0x8d14,	// (0x0008a2d2) main_welc_pane_t1

0x8f0c,	// (0x0008a4ca) main_welc_body_row_pane_ParamLimits

0x8f0c,	// (0x0008a4ca) main_welc_body_row_pane

0xb99e,	// (0x0008cf5c) main_welc_opti_row_pane_ParamLimits

0xb99e,	// (0x0008cf5c) main_welc_opti_row_pane

0xd680,	// (0x0008ec3e) main_welc_opti_row_pane_g1

0x8f20,	// (0x0008a4de) main_welc_opti_row_pane_t1

0xd688,	// (0x0008ec46) main_welc_body_row_pane_t1

0xcf7b,	// (0x0008e539) popup_notif_wgt_heading_pane

0xcf95,	// (0x0008e553) aid_size_list_notif_wgt_del_ParamLimits

0xcfa2,	// (0x0008e560) list_notif_wgt_row_pane_g1_ParamLimits

0xcfae,	// (0x0008e56c) list_notif_wgt_row_pane_g2_ParamLimits

0xcfbd,	// (0x0008e57b) list_notif_wgt_row_pane_g3_ParamLimits

0x02f3,	// (0x000818b1) list_notif_wgt_row_pane_g_ParamLimits

0xcfca,	// (0x0008e588) list_notif_wgt_row_pane_t1_ParamLimits

0xcfe0,	// (0x0008e59e) list_notif_wgt_row_pane_t2_ParamLimits

0xcff2,	// (0x0008e5b0) list_notif_wgt_row_pane_t3_ParamLimits

0x02fa,	// (0x000818b8) list_notif_wgt_row_pane_t_ParamLimits

0x8712,	// (0x00089cd0) listrow_wgtman_pane_g1_ParamLimits

0x871f,	// (0x00089cdd) listrow_wgtman_pane_g2_ParamLimits

0xfd43,	// (0x00091301) listrow_wgtman_pane_g_ParamLimits

0x0baa,	// (0x00082168) listrow_wgtman_pane_t1_ParamLimits

0x0bc2,	// (0x00082180) listrow_wgtman_pane_t2_ParamLimits

0xfd48,	// (0x00091306) listrow_wgtman_pane_t_ParamLimits

0x0be8,	// (0x000821a6) wait_bar_pane_cp09_ParamLimits

0xb2ab,	// (0x0008c869) bg_popup_heading_pane_cp02

0xd697,	// (0x0008ec55) popup_notif_wgt_heading_pane_g1

0xd69f,	// (0x0008ec5d) popup_notif_wgt_heading_pane_t1

0xb2ab,	// (0x0008c869) main_vids_pane

0xb2ab,	// (0x0008c869) vids_listscroll_pane

0x8f2f,	// (0x0008a4ed) scroll_pane_cp040

0xb2ab,	// (0x0008c869) vids_list_pane

0x8f3a,	// (0x0008a4f8) vids_list_double_pane_ParamLimits

0x8f3a,	// (0x0008a4f8) vids_list_double_pane

0x8f4b,	// (0x0008a509) vids_list_double_pane_g1

0x8f54,	// (0x0008a512) vids_list_double_pane_t1

0x8f64,	// (0x0008a522) vids_list_double_pane_t2

0x0001,

0xfdd8,	// (0x00091396) vids_list_double_pane_t

0xb2b5,	// (0x0008c873) main_ncimui_pane_ParamLimits

0x7577,	// (0x00088b35) main_ncimui_pane_g1_ParamLimits

0x7583,	// (0x00088b41) main_ncimui_pane_g2_ParamLimits

0x7583,	// (0x00088b41) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x000910e5) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x000910e5) main_ncimui_pane_g

0x8cb1,	// (0x0008a26f) main_welc_pane_g1_ParamLimits

0x8cb1,	// (0x0008a26f) main_welc_pane_g1

0x8cc6,	// (0x0008a284) main_welc_pane_g2_ParamLimits

0x8cc6,	// (0x0008a284) main_welc_pane_g2

0x0003,

0xfdc2,	// (0x00091380) main_welc_pane_g_ParamLimits

0xfdc2,	// (0x00091380) main_welc_pane_g

0xb931,	// (0x0008ceef) listscroll_mce_pane_ParamLimits

0xc88a,	// (0x0008de48) wait_bar_pane_cp10

0xe99b,	// (0x0008ff59) main_cale_day_pane_ParamLimits

0xe99b,	// (0x0008ff59) main_cale_week_pane_ParamLimits

0xb931,	// (0x0008ceef) main_messa_pane_ParamLimits

0x491c,	// (0x00085eda) main_clock2_btn_pane_ParamLimits

0x491c,	// (0x00085eda) main_clock2_btn_pane

0x4930,	// (0x00085eee) main_clock2_btn_pane_cp01_ParamLimits

0x4930,	// (0x00085eee) main_clock2_btn_pane_cp01

0xcbf7,	// (0x0008e1b5) list_cale_mrui_pane_ParamLimits

0xd036,	// (0x0008e5f4) main_cf0_pane_g2

0x0001,

0x0301,	// (0x000818bf) main_cf0_pane_g

0x8918,	// (0x00089ed6) area_left_week_number_pane_ParamLimits

0x8924,	// (0x00089ee2) area_top_day_name_pane_ParamLimits

0x8937,	// (0x00089ef5) frame_month_view_pane_ParamLimits

0xd14f,	// (0x0008e70d) grid_month_view_pane_ParamLimits

0xd15d,	// (0x0008e71b) frm_month_g1_ParamLimits

0x89b8,	// (0x00089f76) frm_month_g2_ParamLimits

0x89cb,	// (0x00089f89) frm_month_g3_ParamLimits

0x89de,	// (0x00089f9c) frm_month_g4_ParamLimits

0x89f1,	// (0x00089faf) frm_month_g5_ParamLimits

0x8a04,	// (0x00089fc2) frm_month_g6_ParamLimits

0x8a17,	// (0x00089fd5) frm_month_g7_ParamLimits

0xd544,	// (0x0008eb02) frm_month_g8_ParamLimits

0x8a2a,	// (0x00089fe8) frm_month_g9_ParamLimits

0x8a3a,	// (0x00089ff8) frm_month_g10_ParamLimits

0x8a4a,	// (0x0008a008) frm_month_g11_ParamLimits

0x8a5a,	// (0x0008a018) frm_month_g12_ParamLimits

0x8a6c,	// (0x0008a02a) frm_month_g13_ParamLimits

0x8a7e,	// (0x0008a03c) frm_month_g14_ParamLimits

0x8a92,	// (0x0008a050) frm_month_g15_ParamLimits

0x8aa6,	// (0x0008a064) frm_month_g16_ParamLimits

0xfd69,	// (0x00091327) frm_month_g_ParamLimits

0xd551,	// (0x0008eb0f) cell_top_day_name_pane_t1_ParamLimits

0x8aba,	// (0x0008a078) cell_area_left_week_number_pane_g1_ParamLimits

0x8ac6,	// (0x0008a084) cell_area_left_week_number_pane_t1_ParamLimits

0xb9ac,	// (0x0008cf6a) cell_month_view_pane_g1_ParamLimits

0x8ad9,	// (0x0008a097) cell_month_view_pane_t1_ParamLimits

0xb929,	// (0x0008cee7) main_clock2_btn_pane_g1

0xd6ad,	// (0x0008ec6b) main_clock2_btn_pane_t1

0xb2b5,	// (0x0008c873) listscroll_cmail_pane_ParamLimits

0xbc59,	// (0x0008d217) main_sp_fs_email_pane_g1_ParamLimits

0xbc65,	// (0x0008d223) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x000911e4) main_sp_fs_email_pane_g_ParamLimits

0xccfe,	// (0x0008e2bc) list_recal_day_pane_ParamLimits

0xcd0f,	// (0x0008e2cd) mian_recal_day_pane_t1

0x095d,	// (0x00081f1b) list_single_dyc_row_text_pane_t4_ParamLimits

0x095d,	// (0x00081f1b) list_single_dyc_row_text_pane_t4

0x09a6,	// (0x00081f64) list_single_dyc_row_text_pane_t5_ParamLimits

0x09a6,	// (0x00081f64) list_single_dyc_row_text_pane_t5

0xa5a4,	// (0x0008bb62) list_single_dyc_row_text_pane_t6_ParamLimits

0xa5a4,	// (0x0008bb62) list_single_dyc_row_text_pane_t6

0xc20f,	// (0x0008d7cd) aid_mgn_list_cale_time_pane

0xb2b5,	// (0x0008c873) main_gallery2_pane_ParamLimits

0x4946,	// (0x00085f04) main_clock2_pane_cp01_t1

0x4956,	// (0x00085f14) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x00090cca) main_clock2_pane_cp01_t

0x148b,	// (0x00082a49) cale_week_scroll_pane_g16_ParamLimits

0x148b,	// (0x00082a49) cale_week_scroll_pane_g16

0xbe1e,	// (0x0008d3dc) vorec_slider_pane

0xd637,	// (0x0008ebf5) vidtel_button_pane_t1_ParamLimits

0x82fe,	// (0x000898bc) main_fs_bigclock_clock_pane_g1_ParamLimits

0x82fe,	// (0x000898bc) main_fs_bigclock_clock_pane_g2_ParamLimits

0x830f,	// (0x000898cd) main_fs_bigclock_clock_pane_g3_ParamLimits

0x830f,	// (0x000898cd) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd01,	// (0x000912bf) main_fs_bigclock_clock_pane_g_ParamLimits

0x8322,	// (0x000898e0) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8338,	// (0x000898f6) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd0a,	// (0x000912c8) main_fs_bigclock_clock_pane_t_ParamLimits

0x40ea,	// (0x000856a8) main_mup3_lyrics_pane_ParamLimits

0x40ea,	// (0x000856a8) main_mup3_lyrics_pane

0x8f8c,	// (0x0008a54a) main_mup3_lyrics_pane_t1_ParamLimits

0x8f8c,	// (0x0008a54a) main_mup3_lyrics_pane_t1

0x9f55,	// (0x0008b513) aid_main_mp4_pane_t1_area

0x9f5f,	// (0x0008b51d) aid_main_mp4_pane_t2_area

0xa00b,	// (0x0008b5c9) main_mp4_pane_g7_ParamLimits

0xa00b,	// (0x0008b5c9) main_mp4_pane_g7

0xa017,	// (0x0008b5d5) main_mp4_pane_g8_ParamLimits

0xa017,	// (0x0008b5d5) main_mp4_pane_g8

0x575c,	// (0x00086d1a) aid_call6_pane_g1_size

0x8c29,	// (0x0008a1e7) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8c29,	// (0x0008a1e7) list_double_large_graphic_phob2_other_pane

0xc1c7,	// (0x0008d785) list_double_large_graphic_phob2_other_pane_g1

0xb2ab,	// (0x0008c869) list_highlight_pane_cp026

0xb2b5,	// (0x0008c873) main_welc_pane_ParamLimits

0x7d35,	// (0x000892f3) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7d35,	// (0x000892f3) main_sp_fs_ctrlbar_pane_g3

0x7d4f,	// (0x0008930d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7d4f,	// (0x0008930d) main_sp_fs_ctrlbar_pane_g4

0x7d83,	// (0x00089341) toolbar2_fixed_button_pane_cp01

0x7d8e,	// (0x0008934c) toolbar2_fixed_button_pane_cp02

0x7d9b,	// (0x00089359) toolbar2_fixed_button_pane_cp03

0x8c5e,	// (0x0008a21c) list_welc_entry_pane_ParamLimits

0x8c5e,	// (0x0008a21c) list_welc_entry_pane

0x8cdb,	// (0x0008a299) main_welc_pane_g3_ParamLimits

0x8cdb,	// (0x0008a299) main_welc_pane_g3

0x8d32,	// (0x0008a2f0) main_welc_pane_t2_ParamLimits

0x8d32,	// (0x0008a2f0) main_welc_pane_t2

0x8d4d,	// (0x0008a30b) main_welc_pane_t3_ParamLimits

0x8d4d,	// (0x0008a30b) main_welc_pane_t3

0x0005,

0xfdcb,	// (0x00091389) main_welc_pane_t_ParamLimits

0xfdcb,	// (0x00091389) main_welc_pane_t

0x8e7d,	// (0x0008a43b) welc_button_pane_ParamLimits

0x8e7d,	// (0x0008a43b) welc_button_pane

0x8ef7,	// (0x0008a4b5) welc_service_logo_pane_ParamLimits

0x8ef7,	// (0x0008a4b5) welc_service_logo_pane

0x8fa8,	// (0x0008a566) list_single_welc_entry_pane_ParamLimits

0x8fa8,	// (0x0008a566) list_single_welc_entry_pane

0x8fb9,	// (0x0008a577) list_single_welc_entry_pane_g1

0x8fc1,	// (0x0008a57f) list_single_welc_entry_pane_t1

0x8fcf,	// (0x0008a58d) list_single_welc_entry_pane_t2

0x0001,

0xfddd,	// (0x0009139b) list_single_welc_entry_pane_t

0xb2ab,	// (0x0008c869) bg_button_pane_cp035

0x8fdd,	// (0x0008a59b) welc_button_pane_t1

0xd6bb,	// (0x0008ec79) welc_service_logo_pane_g1

0xd6c4,	// (0x0008ec82) welc_service_logo_pane_g2

0x0001,

0xfde2,	// (0x000913a0) welc_service_logo_pane_g

0xb2ab,	// (0x0008c869) main_int_radio_pane

0xbcec,	// (0x0008d2aa) list_single_fs_dyc_pane_g1

0x0c06,	// (0x000821c4) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0c06,	// (0x000821c4) list_double_large_graphic_phob2_pane_g3

0x8b90,	// (0x0008a14e) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8b90,	// (0x0008a14e) list_double_large_graphic_phob2_pane_g4

0x8feb,	// (0x0008a5a9) main_int_radio1_pane_ParamLimits

0x8feb,	// (0x0008a5a9) main_int_radio1_pane

0xd6cd,	// (0x0008ec8b) find_pane_cp02

0x9008,	// (0x0008a5c6) input_focus_pane_cp12_ParamLimits

0x9008,	// (0x0008a5c6) input_focus_pane_cp12

0x9018,	// (0x0008a5d6) input_focus_pane_cp13_ParamLimits

0x9018,	// (0x0008a5d6) input_focus_pane_cp13

0x902c,	// (0x0008a5ea) input_focus_pane_cp14_ParamLimits

0x902c,	// (0x0008a5ea) input_focus_pane_cp14

0xd6d6,	// (0x0008ec94) int_radio1_listscroll_pane

0x9040,	// (0x0008a5fe) main_int_radio1_pane_g1_ParamLimits

0x9040,	// (0x0008a5fe) main_int_radio1_pane_g1

0x9058,	// (0x0008a616) main_int_radio1_pane_t1_ParamLimits

0x9058,	// (0x0008a616) main_int_radio1_pane_t1

0x9073,	// (0x0008a631) main_int_radio1_pane_t2_ParamLimits

0x9073,	// (0x0008a631) main_int_radio1_pane_t2

0x908e,	// (0x0008a64c) main_int_radio1_pane_t3_ParamLimits

0x908e,	// (0x0008a64c) main_int_radio1_pane_t3

0x90a9,	// (0x0008a667) main_int_radio1_pane_t4_ParamLimits

0x90a9,	// (0x0008a667) main_int_radio1_pane_t4

0xd6e0,	// (0x0008ec9e) main_int_radio1_pane_t5_ParamLimits

0xd6e0,	// (0x0008ec9e) main_int_radio1_pane_t5

0x90bb,	// (0x0008a679) main_int_radio1_pane_t6_ParamLimits

0x90bb,	// (0x0008a679) main_int_radio1_pane_t6

0x90d0,	// (0x0008a68e) main_int_radio1_pane_t7_ParamLimits

0x90d0,	// (0x0008a68e) main_int_radio1_pane_t7

0x90e5,	// (0x0008a6a3) main_int_radio1_pane_t8_ParamLimits

0x90e5,	// (0x0008a6a3) main_int_radio1_pane_t8

0x9104,	// (0x0008a6c2) main_int_radio1_pane_t9_ParamLimits

0x9104,	// (0x0008a6c2) main_int_radio1_pane_t9

0x9116,	// (0x0008a6d4) main_int_radio1_pane_t10_ParamLimits

0x9116,	// (0x0008a6d4) main_int_radio1_pane_t10

0x913c,	// (0x0008a6fa) main_int_radio1_pane_t11_ParamLimits

0x913c,	// (0x0008a6fa) main_int_radio1_pane_t11

0x9162,	// (0x0008a720) main_int_radio1_pane_t12_ParamLimits

0x9162,	// (0x0008a720) main_int_radio1_pane_t12

0x000b,

0xfde7,	// (0x000913a5) main_int_radio1_pane_t_ParamLimits

0xfde7,	// (0x000913a5) main_int_radio1_pane_t

0xd6f2,	// (0x0008ecb0) int_radio_list_pane

0xd56c,	// (0x0008eb2a) scroll_pane_cp037

0xd6fa,	// (0x0008ecb8) list_double_large_graphic_int_radio_pane_ParamLimits

0xd6fa,	// (0x0008ecb8) list_double_large_graphic_int_radio_pane

0xd712,	// (0x0008ecd0) list_double_large_graphic_int_radio_pane_g1

0xa834,	// (0x0008bdf2) list_double_large_graphic_int_radio_pane_t1

0xa842,	// (0x0008be00) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe00,	// (0x000913be) list_double_large_graphic_int_radio_pane_t

0xb2ab,	// (0x0008c869) list_highlight_pane_cp027

0xd670,	// (0x0008ec2e) main_button_pane_4

0x8cee,	// (0x0008a2ac) main_welc_pane_g4_ParamLimits

0x8cee,	// (0x0008a2ac) main_welc_pane_g4

0x8d66,	// (0x0008a324) main_welc_pane_t4_ParamLimits

0x8d66,	// (0x0008a324) main_welc_pane_t4

0x8d7d,	// (0x0008a33b) main_welc_pane_t5_ParamLimits

0x8d7d,	// (0x0008a33b) main_welc_pane_t5

0x8dba,	// (0x0008a378) main_welc_pane_t6_ParamLimits

0x8dba,	// (0x0008a378) main_welc_pane_t6

0x8e94,	// (0x0008a452) welc_button_pane_2_ParamLimits

0x8e94,	// (0x0008a452) welc_button_pane_2

0x8eb0,	// (0x0008a46e) welc_button_pane_3_ParamLimits

0x8eb0,	// (0x0008a46e) welc_button_pane_3

0xd678,	// (0x0008ec36) welc_button_pane_4

0x8ecf,	// (0x0008a48d) welc_button_pane_5_ParamLimits

0x8ecf,	// (0x0008a48d) welc_button_pane_5

0x0cfa,	// (0x000822b8) main_popup_welc_pane

0xd72a,	// (0x0008ece8) main_welc_sk_g3

0xd734,	// (0x0008ecf2) main_welc_sk_g4

0xd73e,	// (0x0008ecfc) main_welc_sk_t3

0xd74e,	// (0x0008ed0c) main_welc_sk_t4

0xd75e,	// (0x0008ed1c) popup_welc_pane_t4

0xd76c,	// (0x0008ed2a) popup_welc_pane_t5

0xd77a,	// (0x0008ed38) popup_welc_pane_t6

0xb2ab,	// (0x0008c869) main_acti_pane

0xb2ab,	// (0x0008c869) main_sso_pane

0x9174,	// (0x0008a732) sso_body_pane_ParamLimits

0x9174,	// (0x0008a732) sso_body_pane

0x9188,	// (0x0008a746) sso_logo_pane_ParamLimits

0x9188,	// (0x0008a746) sso_logo_pane

0x91b8,	// (0x0008a776) sso_sk_pane_ParamLimits

0x91b8,	// (0x0008a776) sso_sk_pane

0xbe54,	// (0x0008d412) main_sso_logo_pane_g1

0x91ca,	// (0x0008a788) sso_sk_pane_t1_ParamLimits

0x91ca,	// (0x0008a788) sso_sk_pane_t1

0x91e4,	// (0x0008a7a2) sso_sk_pane_t2_ParamLimits

0x91e4,	// (0x0008a7a2) sso_sk_pane_t2

0x0001,

0xfe05,	// (0x000913c3) sso_sk_pane_t_ParamLimits

0xfe05,	// (0x000913c3) sso_sk_pane_t

0xd7b8,	// (0x0008ed76) aid_sso_gap

0xd7c1,	// (0x0008ed7f) aid_sso_txt1

0xd7cb,	// (0x0008ed89) aid_sso_txt2

0xd7d5,	// (0x0008ed93) aid_sso_txt3

0x0002,

0xfe0a,	// (0x000913c8) aid_sso_txt

0xd7df,	// (0x0008ed9d) aid_sso_widget

0x924e,	// (0x0008a80c) sso_btn_pane_ParamLimits

0x924e,	// (0x0008a80c) sso_btn_pane

0x92d6,	// (0x0008a894) sso_option_pane_ParamLimits

0x92d6,	// (0x0008a894) sso_option_pane

0x9356,	// (0x0008a914) sso_query_pane_ParamLimits

0x9356,	// (0x0008a914) sso_query_pane

0x93ac,	// (0x0008a96a) sso_query_pane_cp01_ParamLimits

0x93ac,	// (0x0008a96a) sso_query_pane_cp01

0x9406,	// (0x0008a9c4) sso_t_hdr_pane_ParamLimits

0x9406,	// (0x0008a9c4) sso_t_hdr_pane

0x9430,	// (0x0008a9ee) sso_t_nml_pane_ParamLimits

0x9430,	// (0x0008a9ee) sso_t_nml_pane

0xd7e9,	// (0x0008eda7) sso_t_sub_pane

0x9195,	// (0x0008a753) sso_popup_window_ParamLimits

0x9195,	// (0x0008a753) sso_popup_window

0x91fa,	// (0x0008a7b8) sso_apps_pane_ParamLimits

0x91fa,	// (0x0008a7b8) sso_apps_pane

0x9224,	// (0x0008a7e2) sso_body_pane_g1

0x922e,	// (0x0008a7ec) sso_body_pane_t1

0x923e,	// (0x0008a7fc) sso_body_pane_t2

0x0001,

0xfe11,	// (0x000913cf) sso_body_pane_t

0x92a0,	// (0x0008a85e) sso_btn_pane_cp01_ParamLimits

0x92a0,	// (0x0008a85e) sso_btn_pane_cp01

0x932a,	// (0x0008a8e8) sso_prog_pane_ParamLimits

0x932a,	// (0x0008a8e8) sso_prog_pane

0x9486,	// (0x0008aa44) sso_t_hdr_pane_t1_ParamLimits

0x9486,	// (0x0008aa44) sso_t_hdr_pane_t1

0xd7fe,	// (0x0008edbc) input_focus_pane_cp10_ParamLimits

0xd7fe,	// (0x0008edbc) input_focus_pane_cp10

0xd818,	// (0x0008edd6) sso_query_pane_t1_ParamLimits

0xd818,	// (0x0008edd6) sso_query_pane_t1

0xd82b,	// (0x0008ede9) sso_query_pane_t2_ParamLimits

0xd82b,	// (0x0008ede9) sso_query_pane_t2

0xd846,	// (0x0008ee04) sso_query_pane_t3_ParamLimits

0xd846,	// (0x0008ee04) sso_query_pane_t3

0xd870,	// (0x0008ee2e) sso_query_pane_t4_ParamLimits

0xd870,	// (0x0008ee2e) sso_query_pane_t4

0x0003,

0xfe16,	// (0x000913d4) sso_query_pane_t_ParamLimits

0xfe16,	// (0x000913d4) sso_query_pane_t

0xb2ab,	// (0x0008c869) bg_button_pane_cp22

0xd71b,	// (0x0008ecd9) sso_btn_pane_t1

0x9499,	// (0x0008aa57) sso_t_nml_pane_t1_ParamLimits

0x9499,	// (0x0008aa57) sso_t_nml_pane_t1

0xd894,	// (0x0008ee52) sso_option_row_pane_ParamLimits

0xd894,	// (0x0008ee52) sso_option_row_pane

0xd8a7,	// (0x0008ee65) sso_t_sub_pane_t1_ParamLimits

0xd8a7,	// (0x0008ee65) sso_t_sub_pane_t1

0xb2b5,	// (0x0008c873) bg_popup_window_pane_cp11_ParamLimits

0xb2b5,	// (0x0008c873) bg_popup_window_pane_cp11

0xd8c4,	// (0x0008ee82) popup_sk_window_cp01_ParamLimits

0xd8c4,	// (0x0008ee82) popup_sk_window_cp01

0xd8d1,	// (0x0008ee8f) sso_popup_body_pane_ParamLimits

0xd8d1,	// (0x0008ee8f) sso_popup_body_pane

0xd8de,	// (0x0008ee9c) scroll_pane_cp21_ParamLimits

0xd8de,	// (0x0008ee9c) scroll_pane_cp21

0xd8eb,	// (0x0008eea9) sso_popup_body_t_pane_ParamLimits

0xd8eb,	// (0x0008eea9) sso_popup_body_t_pane

0xd8f8,	// (0x0008eeb6) sso_popup_body_t_hdr_pane_ParamLimits

0xd8f8,	// (0x0008eeb6) sso_popup_body_t_hdr_pane

0xd90b,	// (0x0008eec9) sso_popup_body_t_nml_pane_ParamLimits

0xd90b,	// (0x0008eec9) sso_popup_body_t_nml_pane

0xd929,	// (0x0008eee7) sso_popup_body_t_sub_pane_ParamLimits

0xd929,	// (0x0008eee7) sso_popup_body_t_sub_pane

0xd94c,	// (0x0008ef0a) sso_popup_body_t_hdr_pane_t1

0x94b4,	// (0x0008aa72) sso_popup_body_t_nml_pane_t1_ParamLimits

0x94b4,	// (0x0008aa72) sso_popup_body_t_nml_pane_t1

0xd95c,	// (0x0008ef1a) sso_popup_body_t_sub_pane_t1_ParamLimits

0xd95c,	// (0x0008ef1a) sso_popup_body_t_sub_pane_t1

0xbe54,	// (0x0008d412) sso_prog_pane_g1

0x94ed,	// (0x0008aaab) sso_apps_pane_comp1_ParamLimits

0x94ed,	// (0x0008aaab) sso_apps_pane_comp1

0xd981,	// (0x0008ef3f) sso_apps_pane_comp1_g1

0xd989,	// (0x0008ef47) sso_apps_pane_comp1_t1

0xd9a5,	// (0x0008ef63) sso_option_row_pane_g1

0xd9ad,	// (0x0008ef6b) sso_option_row_pane_t1

0x8c4b,	// (0x0008a209) bg_welc_area_ParamLimits

0x8c4b,	// (0x0008a209) bg_welc_area

0x8df8,	// (0x0008a3b6) sso_t_hdr_pane_a_t1_ParamLimits

0x8df8,	// (0x0008a3b6) sso_t_hdr_pane_a_t1

0x8e13,	// (0x0008a3d1) sso_t_nml_pane_a_t1_ParamLimits

0x8e13,	// (0x0008a3d1) sso_t_nml_pane_a_t1

0x8e42,	// (0x0008a400) sso_t_sub_pane_a_t1_ParamLimits

0x8e42,	// (0x0008a400) sso_t_sub_pane_a_t1

0xd71b,	// (0x0008ecd9) sso_btn_pane_t1_copy1

0xb2ab,	// (0x0008c869) welc_button_pane_2_comp1

0xd788,	// (0x0008ed46) sso_t_hdr_pane_p_t1

0xd798,	// (0x0008ed56) sso_t_nml_pane_p_t1

0xd7a8,	// (0x0008ed66) sso_t_sub_pane_p_t1

0xca4e,	// (0x0008e00c) list_cmail_pane_ParamLimits

0x8ee5,	// (0x0008a4a3) welc_button_pane_cp01_ParamLimits

0x8ee5,	// (0x0008a4a3) welc_button_pane_cp01

0xb2ab,	// (0x0008c869) main_att_pane

0xd997,	// (0x0008ef55) input_focus_pane_cp10_t1

0xd9ad,	// (0x0008ef6b) sso_option_row_pane_t1_ParamLimits

0x9507,	// (0x0008aac5) main_att_body_pane_ParamLimits

0x9507,	// (0x0008aac5) main_att_body_pane

0x953c,	// (0x0008aafa) att_btn_pane_ParamLimits

0x953c,	// (0x0008aafa) att_btn_pane

0x9561,	// (0x0008ab1f) att_btn_pane_cp01_ParamLimits

0x9561,	// (0x0008ab1f) att_btn_pane_cp01

0x9581,	// (0x0008ab3f) att_li_srv_pane_ParamLimits

0x9581,	// (0x0008ab3f) att_li_srv_pane

0x959e,	// (0x0008ab5c) att_opt_pane_ParamLimits

0x959e,	// (0x0008ab5c) att_opt_pane

0x95ea,	// (0x0008aba8) att_query_pane_ParamLimits

0x95ea,	// (0x0008aba8) att_query_pane

0x9636,	// (0x0008abf4) att_query_pane_cp01_ParamLimits

0x9636,	// (0x0008abf4) att_query_pane_cp01

0x9682,	// (0x0008ac40) att_t_hdr_pane_ParamLimits

0x9682,	// (0x0008ac40) att_t_hdr_pane

0x96da,	// (0x0008ac98) att_t_nml_pane_ParamLimits

0x96da,	// (0x0008ac98) att_t_nml_pane

0x9713,	// (0x0008acd1) att_t_nml_pane_cp01_ParamLimits

0x9713,	// (0x0008acd1) att_t_nml_pane_cp01

0x973f,	// (0x0008acfd) att_t_nmlb_pane_ParamLimits

0x973f,	// (0x0008acfd) att_t_nmlb_pane

0x975c,	// (0x0008ad1a) att_term_pane_ParamLimits

0x975c,	// (0x0008ad1a) att_term_pane

0x97a8,	// (0x0008ad66) main_att_body_pane_g1_ParamLimits

0x97a8,	// (0x0008ad66) main_att_body_pane_g1

0xd9c3,	// (0x0008ef81) att_t_hdr_pane_t1_ParamLimits

0xd9c3,	// (0x0008ef81) att_t_hdr_pane_t1

0xd9dc,	// (0x0008ef9a) att_t_nml_pane_t1_ParamLimits

0xd9dc,	// (0x0008ef9a) att_t_nml_pane_t1

0xda01,	// (0x0008efbf) att_btn_pane_t1

0xb2ab,	// (0x0008c869) bg_button_pane_cp23

0x97df,	// (0x0008ad9d) att_li_srv_row_pane_ParamLimits

0x97df,	// (0x0008ad9d) att_li_srv_row_pane

0xda11,	// (0x0008efcf) att_t_nmlb_pane_t1_ParamLimits

0xda11,	// (0x0008efcf) att_t_nmlb_pane_t1

0xda2a,	// (0x0008efe8) att_query_pane_t1

0xda39,	// (0x0008eff7) att_query_pane_t2

0xda48,	// (0x0008f006) att_query_pane_t3

0x0002,

0xfe1f,	// (0x000913dd) att_query_pane_t

0xda57,	// (0x0008f015) input_focus_pane_cp11

0xda60,	// (0x0008f01e) att_term_pane_t1_ParamLimits

0xda60,	// (0x0008f01e) att_term_pane_t1

0xb2ab,	// (0x0008c869) att_opt_row_pane

0xda7d,	// (0x0008f03b) att_opt_row_pane_g1

0xda85,	// (0x0008f043) att_opt_row_pane_t1_ParamLimits

0xda85,	// (0x0008f043) att_opt_row_pane_t1

0x97ef,	// (0x0008adad) att_li_srv_row_pane_g1

0x97f7,	// (0x0008adb5) att_li_srv_row_pane_t1

0x980c,	// (0x0008adca) att_li_srv_row_pane_t2

0x0001,

0xfe26,	// (0x000913e4) att_li_srv_row_pane_t

0xb2ab,	// (0x0008c869) main_call7_pane

0xb2ab,	// (0x0008c869) main_vod_pane

0xd7e9,	// (0x0008eda7) sso_t_sub_pane_ParamLimits

0x951d,	// (0x0008aadb) att_btn_emg_pane_ParamLimits

0x951d,	// (0x0008aadb) att_btn_emg_pane

0x97f7,	// (0x0008adb5) att_li_srv_row_pane_t1_ParamLimits

0x980c,	// (0x0008adca) att_li_srv_row_pane_t2_ParamLimits

0xfe26,	// (0x000913e4) att_li_srv_row_pane_t_ParamLimits

0xda9e,	// (0x0008f05c) att_btn_close_pane_g1

0xb2ab,	// (0x0008c869) bg_button_pane_cp24

0x9821,	// (0x0008addf) main_vod_body_pane_ParamLimits

0x9821,	// (0x0008addf) main_vod_body_pane

0x9835,	// (0x0008adf3) main_vod_body_pane_g1_ParamLimits

0x9835,	// (0x0008adf3) main_vod_body_pane_g1

0x9869,	// (0x0008ae27) scroll_pane_cp24_ParamLimits

0x9869,	// (0x0008ae27) scroll_pane_cp24

0x98b7,	// (0x0008ae75) vod_btn_pane_ParamLimits

0x98b7,	// (0x0008ae75) vod_btn_pane

0x98fb,	// (0x0008aeb9) vod_det_pane_ParamLimits

0x98fb,	// (0x0008aeb9) vod_det_pane

0x992d,	// (0x0008aeeb) vod_logo_g1_ParamLimits

0x992d,	// (0x0008aeeb) vod_logo_g1

0x996b,	// (0x0008af29) vod_opt_pane_ParamLimits

0x996b,	// (0x0008af29) vod_opt_pane

0x999e,	// (0x0008af5c) vod_opt_pane_cp01_ParamLimits

0x999e,	// (0x0008af5c) vod_opt_pane_cp01

0x99ca,	// (0x0008af88) vod_query_pane_ParamLimits

0x99ca,	// (0x0008af88) vod_query_pane

0x99f7,	// (0x0008afb5) vod_query_pane_cp01_ParamLimits

0x99f7,	// (0x0008afb5) vod_query_pane_cp01

0x9a03,	// (0x0008afc1) vod_t_nml_pane_ParamLimits

0x9a03,	// (0x0008afc1) vod_t_nml_pane

0x9ab0,	// (0x0008b06e) vod_t_nml_pane_cp01_ParamLimits

0x9ab0,	// (0x0008b06e) vod_t_nml_pane_cp01

0x9aec,	// (0x0008b0aa) vod_t_sub_pane_ParamLimits

0x9aec,	// (0x0008b0aa) vod_t_sub_pane

0x9b21,	// (0x0008b0df) vod_t_sub_pane_cp01_ParamLimits

0x9b21,	// (0x0008b0df) vod_t_sub_pane_cp01

0xda57,	// (0x0008f015) vod_query_field_pane

0xda2a,	// (0x0008efe8) vod_query_pane_t1

0xb2ab,	// (0x0008c869) bg_button_pane_cp25

0xda01,	// (0x0008efbf) sso_btn_pane_t1_copy2

0x9b4d,	// (0x0008b10b) vod_t_nml_pane_t1_ParamLimits

0x9b4d,	// (0x0008b10b) vod_t_nml_pane_t1

0xdaa6,	// (0x0008f064) vod_opt_row_pane_ParamLimits

0xdaa6,	// (0x0008f064) vod_opt_row_pane

0xdab8,	// (0x0008f076) vod_t_sub_pane_t1_ParamLimits

0xdab8,	// (0x0008f076) vod_t_sub_pane_t1

0x9b7e,	// (0x0008b13c) vod_det_cell_pane_ParamLimits

0x9b7e,	// (0x0008b13c) vod_det_cell_pane

0xb2ab,	// (0x0008c869) input_focus_pane_cp15

0xdad1,	// (0x0008f08f) vod_query_field_pane_t1

0xdadf,	// (0x0008f09d) vod_opt_row_pane_g1_ParamLimits

0xdadf,	// (0x0008f09d) vod_opt_row_pane_g1

0xdaeb,	// (0x0008f0a9) vod_opt_row_pane_t1_ParamLimits

0xdaeb,	// (0x0008f0a9) vod_opt_row_pane_t1

0xdb10,	// (0x0008f0ce) vod_det_cell_field_pane

0xdb19,	// (0x0008f0d7) vod_det_cell_pane_g1

0xda2a,	// (0x0008efe8) vod_det_cell_pane_t1

0xb2ab,	// (0x0008c869) input_focus_pane_cp16

0xdad1,	// (0x0008f08f) vod_det_cell_field_pane_t1

0x85ce,	// (0x00089b8c) call7_btn_grp_pane_ParamLimits

0x85ce,	// (0x00089b8c) call7_btn_grp_pane

0x9b92,	// (0x0008b150) call7_bubble_pane_ParamLimits

0x9b92,	// (0x0008b150) call7_bubble_pane

0x9ba9,	// (0x0008b167) cell_call7_btn_pane_ParamLimits

0x9ba9,	// (0x0008b167) cell_call7_btn_pane

0x9bbc,	// (0x0008b17a) call7_pane_g1_ParamLimits

0x9bbc,	// (0x0008b17a) call7_pane_g1

0x9bcb,	// (0x0008b189) call7_windows_conf_pane_ParamLimits

0x9bcb,	// (0x0008b189) call7_windows_conf_pane

0x9be5,	// (0x0008b1a3) popup_call7_1st_window_ParamLimits

0x9be5,	// (0x0008b1a3) popup_call7_1st_window

0x9bf6,	// (0x0008b1b4) popup_call7_2nd_window_ParamLimits

0x9bf6,	// (0x0008b1b4) popup_call7_2nd_window

0x9c07,	// (0x0008b1c5) popup_call7_3rd_window_ParamLimits

0x9c07,	// (0x0008b1c5) popup_call7_3rd_window

0xb2ab,	// (0x0008c869) bg_button_pane_cp26

0xd0b3,	// (0x0008e671) cell_call7_btn_pane_g1

0xd535,	// (0x0008eaf3) cell_call7_btn_pane_t1

0xb2ab,	// (0x0008c869) bg_popup_window_pane_cp12

0xdb21,	// (0x0008f0df) popup_call7_1st_window_g1

0xdb29,	// (0x0008f0e7) popup_call7_1st_window_g2

0xdb31,	// (0x0008f0ef) popup_call7_1st_window_g3

0x0002,

0xfe2b,	// (0x000913e9) popup_call7_1st_window_g

0xdb39,	// (0x0008f0f7) popup_call7_1st_window_t1

0xdb48,	// (0x0008f106) popup_call7_1st_window_t2

0xdb56,	// (0x0008f114) popup_call7_1st_window_t3

0x0002,

0xfe32,	// (0x000913f0) popup_call7_1st_window_t

0xb2ab,	// (0x0008c869) bg_popup_window_pane_cp13

0xdb64,	// (0x0008f122) popup_call7_2nd_window_g1

0xdb6c,	// (0x0008f12a) popup_call7_2nd_window_g2

0xdb74,	// (0x0008f132) popup_call7_2nd_window_g3

0x0002,

0xfe39,	// (0x000913f7) popup_call7_2nd_window_g

0xdb7c,	// (0x0008f13a) popup_call7_2nd_window_t1

0xb2ab,	// (0x0008c869) bg_popup_window_pane_cp14

0xdb8b,	// (0x0008f149) call7_list_conf_pane

0xdb93,	// (0x0008f151) call7_list_conf_row_pane_ParamLimits

0xdb93,	// (0x0008f151) call7_list_conf_row_pane

0xdba6,	// (0x0008f164) call7_list_conf_row_pane_g1

0xdbae,	// (0x0008f16c) call7_list_conf_row_pane_g2

0x0001,

0xfe40,	// (0x000913fe) call7_list_conf_row_pane_g

0xdbb6,	// (0x0008f174) call7_list_conf_row_pane_t1

0xb2ab,	// (0x0008c869) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
