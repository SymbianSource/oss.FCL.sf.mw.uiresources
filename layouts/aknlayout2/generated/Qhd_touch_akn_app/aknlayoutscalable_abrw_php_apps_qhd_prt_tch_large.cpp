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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007e9e0 };

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
0x5873,	// (0x00084253) Screen

0x587f,	// (0x0008425f) application_window

0x58bf,	// (0x0008429f) area_bottom_pane_ParamLimits

0x58bf,	// (0x0008429f) area_bottom_pane

0x58f4,	// (0x000842d4) area_top_pane_ParamLimits

0x58f4,	// (0x000842d4) area_top_pane

0x0223,	// (0x0007ec03) call_video_uplink_pane_ParamLimits

0x0223,	// (0x0007ec03) call_video_uplink_pane

0x5981,	// (0x00084361) main_pane_ParamLimits

0x5981,	// (0x00084361) main_pane

0x158e,	// (0x0007ff6e) context_pane

0x8a7e,	// (0x0008745e) navi_pane

0x8a9e,	// (0x0008747e) popup_cale_events_window_ParamLimits

0x8a9e,	// (0x0008747e) popup_cale_events_window

0x15a1,	// (0x0007ff81) popup_mup_playback_window

0x8ab6,	// (0x00087496) signal_pane

0xe1b7,	// (0x0008cb97) main_browser_pane

0xec98,	// (0x0008d678) main_burst_pane

0x8948,	// (0x00087328) main_calc_pane

0xec98,	// (0x0008d678) main_cale_day_pane

0xe1b7,	// (0x0008cb97) main_cale_month_pane

0xec98,	// (0x0008d678) main_cale_week_pane

0xec98,	// (0x0008d678) main_call_pane

0xde89,	// (0x0008c869) main_call_poc_pane

0xec98,	// (0x0008d678) main_camera_pane

0xec98,	// (0x0008d678) main_chi_dic_pane

0xeb1d,	// (0x0008d4fd) main_clock_pane

0xde89,	// (0x0008c869) main_fmradio_pane

0xec98,	// (0x0008d678) main_graph_messa_pane

0xde89,	// (0x0008c869) main_help_pane

0xe1b7,	// (0x0008cb97) main_im_pane

0xe0e4,	// (0x0008cac4) main_image_pane_ParamLimits

0xe0e4,	// (0x0008cac4) main_image_pane

0xde89,	// (0x0008c869) main_location2_pane

0xec98,	// (0x0008d678) main_location_pane

0xde89,	// (0x0008c869) main_messa_pane

0xde89,	// (0x0008c869) main_mp2_pane

0xec98,	// (0x0008d678) main_mp_pane

0xde89,	// (0x0008c869) main_msg_pane

0xde89,	// (0x0008c869) main_mup_eq_pane

0xde89,	// (0x0008c869) main_mup_pane

0xe1b7,	// (0x0008cb97) main_notes_pane

0xde89,	// (0x0008c869) main_pec_pane

0xde89,	// (0x0008c869) main_phob_pane

0xde89,	// (0x0008c869) main_pinb_pane

0xde89,	// (0x0008c869) main_postcard_pane

0xde89,	// (0x0008c869) main_qdial_pane

0xec98,	// (0x0008d678) main_skin_pane

0xde89,	// (0x0008c869) main_smil2_pane

0xec98,	// (0x0008d678) main_smil_pane

0xec98,	// (0x0008d678) main_video_pane

0xec98,	// (0x0008d678) main_video_tele_pane

0xe0e4,	// (0x0008cac4) main_viewer_pane_ParamLimits

0xe0e4,	// (0x0008cac4) main_viewer_pane

0xec98,	// (0x0008d678) main_vorec_pane

0x897e,	// (0x0008735e) popup_blid_sat_info_window_ParamLimits

0x897e,	// (0x0008735e) popup_blid_sat_info_window

0x8994,	// (0x00087374) popup_dyc_status_message_window_ParamLimits

0x8994,	// (0x00087374) popup_dyc_status_message_window

0x89a4,	// (0x00087384) popup_grid_large_graphic_window_ParamLimits

0x89a4,	// (0x00087384) popup_grid_large_graphic_window

0x8a1a,	// (0x000873fa) popup_loc_request_window_ParamLimits

0x8a1a,	// (0x000873fa) popup_loc_request_window

0x8a56,	// (0x00087436) popup_wml_address_window_ParamLimits

0x8a56,	// (0x00087436) popup_wml_address_window

0x8820,	// (0x00087200) call_muted_g1

0x84e2,	// (0x00086ec2) popup_call_audio_conf_window_ParamLimits

0x84e2,	// (0x00086ec2) popup_call_audio_conf_window

0x8830,	// (0x00087210) popup_call_audio_first_window_ParamLimits

0x8830,	// (0x00087210) popup_call_audio_first_window

0x8870,	// (0x00087250) popup_call_audio_in_window_ParamLimits

0x8870,	// (0x00087250) popup_call_audio_in_window

0x8894,	// (0x00087274) popup_call_audio_out_window_ParamLimits

0x8894,	// (0x00087274) popup_call_audio_out_window

0x88b6,	// (0x00087296) popup_call_audio_second_window_ParamLimits

0x88b6,	// (0x00087296) popup_call_audio_second_window

0x88e6,	// (0x000872c6) popup_call_audio_wait_window_ParamLimits

0x88e6,	// (0x000872c6) popup_call_audio_wait_window

0x8907,	// (0x000872e7) popup_number_entry_window_ParamLimits

0x8907,	// (0x000872e7) popup_number_entry_window

0xda76,	// (0x0008c456) bg_popup_call_pane_cp05_ParamLimits

0xda76,	// (0x0008c456) bg_popup_call_pane_cp05

0xda96,	// (0x0008c476) popup_number_entry_window_t1

0xdaa9,	// (0x0008c489) popup_number_entry_window_t2

0xdabb,	// (0x0008c49b) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0008dac7) popup_number_entry_window_t

0xdacd,	// (0x0008c4ad) text_title_cp2

0xdae0,	// (0x0008c4c0) bg_popup_call_pane_cp_ParamLimits

0xdae0,	// (0x0008c4c0) bg_popup_call_pane_cp

0xdaee,	// (0x0008c4ce) call_thumbnail_pane

0xdaf6,	// (0x0008c4d6) popup_call_audio_in_window_g1_ParamLimits

0xdaf6,	// (0x0008c4d6) popup_call_audio_in_window_g1

0xdb02,	// (0x0008c4e2) popup_call_audio_in_window_g2_ParamLimits

0xdb02,	// (0x0008c4e2) popup_call_audio_in_window_g2

0xdb0e,	// (0x0008c4ee) popup_call_audio_in_window_g3_ParamLimits

0xdb0e,	// (0x0008c4ee) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0008dad0) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0008dad0) popup_call_audio_in_window_g

0xdb1a,	// (0x0008c4fa) popup_call_audio_in_window_t1_ParamLimits

0xdb1a,	// (0x0008c4fa) popup_call_audio_in_window_t1

0xdb36,	// (0x0008c516) popup_call_audio_in_window_t2_ParamLimits

0xdb36,	// (0x0008c516) popup_call_audio_in_window_t2

0xdb52,	// (0x0008c532) popup_call_audio_in_window_t3_ParamLimits

0xdb52,	// (0x0008c532) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0008dad7) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0008dad7) popup_call_audio_in_window_t

0xdae0,	// (0x0008c4c0) bg_popup_call_pane_cp01_ParamLimits

0xdae0,	// (0x0008c4c0) bg_popup_call_pane_cp01

0xdaee,	// (0x0008c4ce) call_thumbnail_pane_cp02

0xdb65,	// (0x0008c545) call_type_pane_cp022

0xdb6d,	// (0x0008c54d) popup_call_audio_out_window_g1_ParamLimits

0xdb6d,	// (0x0008c54d) popup_call_audio_out_window_g1

0xdb7f,	// (0x0008c55f) popup_call_audio_out_window_g2_ParamLimits

0xdb7f,	// (0x0008c55f) popup_call_audio_out_window_g2

0xdb8b,	// (0x0008c56b) popup_call_audio_out_window_g3_ParamLimits

0xdb8b,	// (0x0008c56b) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0008dade) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0008dade) popup_call_audio_out_window_g

0xdb9d,	// (0x0008c57d) popup_call_audio_out_window_t1_ParamLimits

0xdb9d,	// (0x0008c57d) popup_call_audio_out_window_t1

0xdbb5,	// (0x0008c595) popup_call_audio_out_window_t2_ParamLimits

0xdbb5,	// (0x0008c595) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0008dae5) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0008dae5) popup_call_audio_out_window_t

0xdbca,	// (0x0008c5aa) bg_popup_call_pane_ParamLimits

0xdbca,	// (0x0008c5aa) bg_popup_call_pane

0x5b6e,	// (0x0008454e) call_thumbnail_pane_cp_ParamLimits

0x5b6e,	// (0x0008454e) call_thumbnail_pane_cp

0xdc4e,	// (0x0008c62e) call_type_pane_cp01_ParamLimits

0xdc4e,	// (0x0008c62e) call_type_pane_cp01

0xdc92,	// (0x0008c672) popup_call_audio_first_window_g1_ParamLimits

0xdc92,	// (0x0008c672) popup_call_audio_first_window_g1

0xdcde,	// (0x0008c6be) popup_call_audio_first_window_g2_ParamLimits

0xdcde,	// (0x0008c6be) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0008daea) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0008daea) popup_call_audio_first_window_g

0xdd22,	// (0x0008c702) popup_call_audio_first_window_t1_ParamLimits

0xdd22,	// (0x0008c702) popup_call_audio_first_window_t1

0xddce,	// (0x0008c7ae) popup_call_audio_first_window_t4_ParamLimits

0xddce,	// (0x0008c7ae) popup_call_audio_first_window_t4

0xde5a,	// (0x0008c83a) popup_call_audio_first_window_t5_ParamLimits

0xde5a,	// (0x0008c83a) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0008daef) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0008daef) popup_call_audio_first_window_t

0xde89,	// (0x0008c869) bg_popup_call_pane_cp02

0xde93,	// (0x0008c873) call_type_pane_cp023

0xde9b,	// (0x0008c87b) popup_call_audio_wait_window_g1

0xdea3,	// (0x0008c883) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0008daf6) popup_call_audio_wait_window_g

0xdeab,	// (0x0008c88b) popup_call_audio_wait_window_t3

0xdeb9,	// (0x0008c899) bg_popup_call_pane_cp03_ParamLimits

0xdeb9,	// (0x0008c899) bg_popup_call_pane_cp03

0xdf19,	// (0x0008c8f9) call_thumbnail_pane_cp011_ParamLimits

0xdf19,	// (0x0008c8f9) call_thumbnail_pane_cp011

0xdf25,	// (0x0008c905) call_type_pane_cp034_ParamLimits

0xdf25,	// (0x0008c905) call_type_pane_cp034

0xdf61,	// (0x0008c941) popup_call_audio_second_window_g1_ParamLimits

0xdf61,	// (0x0008c941) popup_call_audio_second_window_g1

0xdf9d,	// (0x0008c97d) popup_call_audio_second_window_g2_ParamLimits

0xdf9d,	// (0x0008c97d) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0008dafb) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0008dafb) popup_call_audio_second_window_g

0xdfd9,	// (0x0008c9b9) popup_call_audio_second_window_t1_ParamLimits

0xdfd9,	// (0x0008c9b9) popup_call_audio_second_window_t1

0xe05a,	// (0x0008ca3a) popup_call_audio_second_window_t2_ParamLimits

0xe05a,	// (0x0008ca3a) popup_call_audio_second_window_t2

0xe090,	// (0x0008ca70) popup_call_audio_second_window_t3_ParamLimits

0xe090,	// (0x0008ca70) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0008db00) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0008db00) popup_call_audio_second_window_t

0xde89,	// (0x0008c869) bg_popup_call_pane_cp04

0xe0c6,	// (0x0008caa6) list_conf_pane

0xe0ce,	// (0x0008caae) popup_call_audio_conf_window_t1

0xe0dc,	// (0x0008cabc) call_thumbnail_pane_g1

0xe0e4,	// (0x0008cac4) bg_pinb_pane_ParamLimits

0xe0e4,	// (0x0008cac4) bg_pinb_pane

0xe0f2,	// (0x0008cad2) find_pinb_pane

0xe0fb,	// (0x0008cadb) listscroll_pinb_pane_ParamLimits

0xe0fb,	// (0x0008cadb) listscroll_pinb_pane

0xe10a,	// (0x0008caea) pinb_bg_pane_g1

0x5b92,	// (0x00084572) pinb_bg_pane_g2

0x5b9e,	// (0x0008457e) pinb_bg_pane_g3

0x5baa,	// (0x0008458a) pinb_bg_pane_g4

0x5bb6,	// (0x00084596) pinb_bg_pane_g5

0x5bc2,	// (0x000845a2) pinb_bg_pane_g6

0x5bcd,	// (0x000845ad) pinb_bg_pane_g7

0x5bd8,	// (0x000845b8) pinb_bg_pane_g8

0x5be3,	// (0x000845c3) pinb_bg_pane_g9

0x5bed,	// (0x000845cd) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0008db07) pinb_bg_pane_g

0x5c0a,	// (0x000845ea) grid_pinb_pane

0x5c15,	// (0x000845f5) list_pinb_pane

0x5c20,	// (0x00084600) scroll_pane_cp01_ParamLimits

0x5c20,	// (0x00084600) scroll_pane_cp01

0xe114,	// (0x0008caf4) find_pinb_pane_g1_ParamLimits

0xe114,	// (0x0008caf4) find_pinb_pane_g1

0xe12c,	// (0x0008cb0c) find_pinb_pane_t1

0xe13e,	// (0x0008cb1e) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0008db21) find_pinb_pane_t

0xe153,	// (0x0008cb33) input_focus_pane_cp01_ParamLimits

0xe153,	// (0x0008cb33) input_focus_pane_cp01

0x5c32,	// (0x00084612) cell_pinb_pane_ParamLimits

0x5c32,	// (0x00084612) cell_pinb_pane

0x5c5a,	// (0x0008463a) cell_pinb_pane_g1_ParamLimits

0x5c5a,	// (0x0008463a) cell_pinb_pane_g1

0x5c6f,	// (0x0008464f) cell_pinb_pane_g2_ParamLimits

0x5c6f,	// (0x0008464f) cell_pinb_pane_g2

0xe15f,	// (0x0008cb3f) cell_pinb_pane_g3_ParamLimits

0xe15f,	// (0x0008cb3f) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0008db26) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0008db26) cell_pinb_pane_g

0xde89,	// (0x0008c869) grid_highlight_pane_cp01

0x5c7b,	// (0x0008465b) list_pinb_item_pane_ParamLimits

0x5c7b,	// (0x0008465b) list_pinb_item_pane

0xde89,	// (0x0008c869) list_highlight_pane_cp02

0x5ca1,	// (0x00084681) list_pinb_item_pane_g1_ParamLimits

0x5ca1,	// (0x00084681) list_pinb_item_pane_g1

0x5cae,	// (0x0008468e) list_pinb_item_pane_g2_ParamLimits

0x5cae,	// (0x0008468e) list_pinb_item_pane_g2

0x5cba,	// (0x0008469a) list_pinb_item_pane_g3_ParamLimits

0x5cba,	// (0x0008469a) list_pinb_item_pane_g3

0x5ccb,	// (0x000846ab) list_pinb_item_pane_g4_ParamLimits

0x5ccb,	// (0x000846ab) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0008db2d) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0008db2d) list_pinb_item_pane_g

0x5cd7,	// (0x000846b7) list_pinb_item_pane_t1_ParamLimits

0x5cd7,	// (0x000846b7) list_pinb_item_pane_t1

0x5d08,	// (0x000846e8) calc_display_pane

0x5d26,	// (0x00084706) calc_paper_pane

0x5d42,	// (0x00084722) grid_calc_pane

0xde89,	// (0x0008c869) bg_list_pane_cp01

0x5d6e,	// (0x0008474e) clock_g1

0x5d76,	// (0x00084756) clock_g2

0x0001,

0xf156,	// (0x0008db36) clock_g

0x5d80,	// (0x00084760) clock_t1_ParamLimits

0x5d80,	// (0x00084760) clock_t1

0x5d95,	// (0x00084775) clock_t2_ParamLimits

0x5d95,	// (0x00084775) clock_t2

0x5da7,	// (0x00084787) clock_t3_ParamLimits

0x5da7,	// (0x00084787) clock_t3

0x5db9,	// (0x00084799) clock_t4_ParamLimits

0x5db9,	// (0x00084799) clock_t4

0x5dcb,	// (0x000847ab) clock_t5_ParamLimits

0x5dcb,	// (0x000847ab) clock_t5

0x5de0,	// (0x000847c0) clock_t6_ParamLimits

0x5de0,	// (0x000847c0) clock_t6

0x5df2,	// (0x000847d2) clock_t7_ParamLimits

0x5df2,	// (0x000847d2) clock_t7

0x5e04,	// (0x000847e4) clock_t8_ParamLimits

0x5e04,	// (0x000847e4) clock_t8

0x5e1a,	// (0x000847fa) clock_t9_ParamLimits

0x5e1a,	// (0x000847fa) clock_t9

0x0008,

0xf15b,	// (0x0008db3b) clock_t_ParamLimits

0xf15b,	// (0x0008db3b) clock_t

0xe16b,	// (0x0008cb4b) popup_clock_analogue_window_cp02

0xe16b,	// (0x0008cb4b) popup_clock_digital_window_cp01

0xe173,	// (0x0008cb53) listscroll_help_pane

0xde89,	// (0x0008c869) phob_pre_status_pane

0xe17d,	// (0x0008cb5d) grid_qdial_pane

0xde89,	// (0x0008c869) listscroll_mce_pane

0xe187,	// (0x0008cb67) bg_notes_pane

0xe195,	// (0x0008cb75) list_notes_pane

0x5e30,	// (0x00084810) scroll_pane_cp06

0xe1a3,	// (0x0008cb83) bg_calc_paper_pane

0x5e49,	// (0x00084829) list_calc_pane

0xe1b7,	// (0x0008cb97) bg_calc_display_pane

0x5e63,	// (0x00084843) calc_display_pane_t1

0x5e78,	// (0x00084858) calc_display_pane_t2

0x5e8d,	// (0x0008486d) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0008db4e) calc_display_pane_t

0x5e9f,	// (0x0008487f) cell_calc_pane_ParamLimits

0x5e9f,	// (0x0008487f) cell_calc_pane

0xe1c3,	// (0x0008cba3) bg_calc_paper_pane_g1

0xe1cf,	// (0x0008cbaf) bg_calc_paper_pane_g2

0xe1db,	// (0x0008cbbb) bg_calc_paper_pane_g3

0xe1e7,	// (0x0008cbc7) bg_calc_paper_pane_g4

0xe1f3,	// (0x0008cbd3) bg_calc_paper_pane_g5

0x5ecc,	// (0x000848ac) bg_calc_paper_pane_g6

0x5edd,	// (0x000848bd) bg_calc_paper_pane_g7

0x5eee,	// (0x000848ce) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0008db55) bg_calc_paper_pane_g

0x5eff,	// (0x000848df) calc_bg_paper_pane_g9

0x5f10,	// (0x000848f0) list_calc_item_pane_ParamLimits

0x5f10,	// (0x000848f0) list_calc_item_pane

0xe1ff,	// (0x0008cbdf) list_calc_item_pane_g1

0x5f3f,	// (0x0008491f) list_calc_item_pane_t1_ParamLimits

0x5f3f,	// (0x0008491f) list_calc_item_pane_t1

0x5f51,	// (0x00084931) list_calc_item_pane_t2_ParamLimits

0x5f51,	// (0x00084931) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0008db66) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0008db66) list_calc_item_pane_t

0xe20c,	// (0x0008cbec) cell_calc_pane_g1

0xe216,	// (0x0008cbf6) grid_highlight_pane_cp02

0x5f81,	// (0x00084961) bg_calc_display_pane_g1

0x5f8a,	// (0x0008496a) bg_calc_display_pane_g2

0x19d3,	// (0x000803b3) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0008db70) bg_calc_display_pane_g

0x5f94,	// (0x00084974) cell_qdial_pane_ParamLimits

0x5f94,	// (0x00084974) cell_qdial_pane

0x5fa8,	// (0x00084988) cell_qdial_pane_g1_ParamLimits

0x5fa8,	// (0x00084988) cell_qdial_pane_g1

0x5fb5,	// (0x00084995) cell_qdial_pane_g2_ParamLimits

0x5fb5,	// (0x00084995) cell_qdial_pane_g2

0xe238,	// (0x0008cc18) cell_qdial_pane_g3_ParamLimits

0xe238,	// (0x0008cc18) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0008db77) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0008db77) cell_qdial_pane_g

0x5fd3,	// (0x000849b3) cell_qdial_pane_t1_ParamLimits

0x5fd3,	// (0x000849b3) cell_qdial_pane_t1

0x5feb,	// (0x000849cb) cell_qdial_pane_t2_ParamLimits

0x5feb,	// (0x000849cb) cell_qdial_pane_t2

0x5ffe,	// (0x000849de) cell_qdial_pane_t3_ParamLimits

0x5ffe,	// (0x000849de) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0008db80) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0008db80) cell_qdial_pane_t

0xde89,	// (0x0008c869) grid_highlight_pane_cp04

0xe244,	// (0x0008cc24) thumbnail_qdial_pane_ParamLimits

0xe244,	// (0x0008cc24) thumbnail_qdial_pane

0xe2a0,	// (0x0008cc80) list_help_pane

0xe2a9,	// (0x0008cc89) scroll_pane_cp02

0x6011,	// (0x000849f1) help_list_pane_t1_ParamLimits

0x6011,	// (0x000849f1) help_list_pane_t1

0x6044,	// (0x00084a24) bg_notes_pane_g2

0x604c,	// (0x00084a2c) bg_notes_pane_g3

0x6054,	// (0x00084a34) notes_bg_pane_g1

0x605c,	// (0x00084a3c) notes_bg_pane_g4

0x6064,	// (0x00084a44) notes_bg_pane_g5

0x606c,	// (0x00084a4c) notes_bg_pane_g6

0x6074,	// (0x00084a54) notes_bg_pane_g7

0x607c,	// (0x00084a5c) notes_bg_pane_g8

0x6084,	// (0x00084a64) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0008db9e) notes_bg_pane_g

0x608c,	// (0x00084a6c) list_notes_text_pane_ParamLimits

0x608c,	// (0x00084a6c) list_notes_text_pane

0xe2b2,	// (0x0008cc92) list_notes_text_pane_g1

0x60b4,	// (0x00084a94) list_notes_text_pane_t1

0xe1b7,	// (0x0008cb97) listscroll_cale_week_pane

0x60df,	// (0x00084abf) bg_cale_heading_pane

0xe2cc,	// (0x0008ccac) bg_cale_pane_cp01

0x60fb,	// (0x00084adb) cale_week_corner_pane

0x6111,	// (0x00084af1) cale_week_day_heading_pane

0x612d,	// (0x00084b0d) cale_week_scroll_pane_g1

0x6146,	// (0x00084b26) cale_week_scroll_pane_g2

0x6157,	// (0x00084b37) cale_week_scroll_pane_g3

0x6168,	// (0x00084b48) cale_week_scroll_pane_g4

0x6179,	// (0x00084b59) cale_week_scroll_pane_g5

0x618a,	// (0x00084b6a) cale_week_scroll_pane_g6

0x619b,	// (0x00084b7b) cale_week_scroll_pane_g7

0x61ae,	// (0x00084b8e) cale_week_scroll_pane_g8

0x61c1,	// (0x00084ba1) cale_week_scroll_pane_g9

0x61d2,	// (0x00084bb2) cale_week_scroll_pane_g10

0x61e3,	// (0x00084bc3) cale_week_scroll_pane_g11

0x61f4,	// (0x00084bd4) cale_week_scroll_pane_g12

0x6205,	// (0x00084be5) cale_week_scroll_pane_g13

0x621e,	// (0x00084bfe) cale_week_scroll_pane_g14

0x6237,	// (0x00084c17) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0008dbad) cale_week_scroll_pane_g

0x6250,	// (0x00084c30) cale_week_time_pane

0x6263,	// (0x00084c43) grid_cale_week_pane

0x6280,	// (0x00084c60) scroll_pane_cp08

0x629a,	// (0x00084c7a) cell_cale_week_pane_ParamLimits

0x629a,	// (0x00084c7a) cell_cale_week_pane

0x62e6,	// (0x00084cc6) cale_week_day_heading_pane_t1

0x62ff,	// (0x00084cdf) cale_week_day_heading_pane_t2

0x6318,	// (0x00084cf8) cale_week_day_heading_pane_t3

0x6331,	// (0x00084d11) cale_week_day_heading_pane_t4

0x634a,	// (0x00084d2a) cale_week_day_heading_pane_t5

0x6363,	// (0x00084d43) cale_week_day_heading_pane_t6

0x637c,	// (0x00084d5c) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0008dbcc) cale_week_day_heading_pane_t

0xe2f7,	// (0x0008ccd7) bg_cale_side_pane

0x6395,	// (0x00084d75) cale_week_time_pane_t1

0x63ad,	// (0x00084d8d) cale_week_time_pane_t2

0x63c5,	// (0x00084da5) cale_week_time_pane_t3

0x63dd,	// (0x00084dbd) cale_week_time_pane_t4

0x63f5,	// (0x00084dd5) cale_week_time_pane_t5

0x640d,	// (0x00084ded) cale_week_time_pane_t6

0x6425,	// (0x00084e05) cale_week_time_pane_t7

0x6445,	// (0x00084e25) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0008dbdb) cale_week_time_pane_t

0x6465,	// (0x00084e45) cell_cale_week_pane_g2

0x6476,	// (0x00084e56) cell_cale_week_pane_g3_ParamLimits

0x6476,	// (0x00084e56) cell_cale_week_pane_g3

0xe305,	// (0x0008cce5) grid_highlight_pane_cp07

0xe30d,	// (0x0008cced) listscroll_gms_pane

0xe317,	// (0x0008ccf7) grid_gms_pane

0xe320,	// (0x0008cd00) listscroll_gms_pane_g1

0xe328,	// (0x0008cd08) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0008dbec) listscroll_gms_pane_g

0x648e,	// (0x00084e6e) scroll_pane_cp010

0x6499,	// (0x00084e79) cell_gms_pane_ParamLimits

0x6499,	// (0x00084e79) cell_gms_pane

0x64ac,	// (0x00084e8c) cell_gms_pane_g1

0xe330,	// (0x0008cd10) cell_gms_pane_g2

0xe338,	// (0x0008cd18) cell_gms_pane_g3

0xe341,	// (0x0008cd21) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0008dbf1) cell_gms_pane_g

0xe34a,	// (0x0008cd2a) grid_highlight_pane_cp09

0x87c8,	// (0x000871a8) phob_pre_status_pane_g1

0x87d0,	// (0x000871b0) phob_pre_status_pane_g2

0x87d8,	// (0x000871b8) phob_pre_status_pane_g3

0x87e0,	// (0x000871c0) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0008dfe0) phob_pre_status_pane_g

0x87f0,	// (0x000871d0) phob_pre_status_pane_t1

0x8800,	// (0x000871e0) phob_pre_status_pane_t2

0x8810,	// (0x000871f0) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0008dfeb) phob_pre_status_pane_t

0xde89,	// (0x0008c869) bg_list_pane_cp05

0x64bc,	// (0x00084e9c) grid_vorec_pane

0x64c6,	// (0x00084ea6) vorec_t1

0x64d4,	// (0x00084eb4) vorec_t2

0x64e2,	// (0x00084ec2) vorec_t3

0x64f0,	// (0x00084ed0) vorec_t4

0x64fe,	// (0x00084ede) vorec_t5

0x650c,	// (0x00084eec) vorec_t6

0x0006,

0xf21a,	// (0x0008dbfa) vorec_t

0x6528,	// (0x00084f08) wait_bar_pane_cp01

0x6530,	// (0x00084f10) cell_vorec_pane_ParamLimits

0x6530,	// (0x00084f10) cell_vorec_pane

0xe352,	// (0x0008cd32) cell_vorec_pane_g1

0xde89,	// (0x0008c869) grid_highlight_pane_cp05

0x6553,	// (0x00084f33) cams_zoom_pane

0x655f,	// (0x00084f3f) image_vga_pane

0x656e,	// (0x00084f4e) main_camera_pane_g1

0x657c,	// (0x00084f5c) main_camera_pane_g2

0x6588,	// (0x00084f68) main_camera_pane_g3

0x6594,	// (0x00084f74) main_camera_pane_g4

0x65a0,	// (0x00084f80) main_camera_pane_g5

0x65ac,	// (0x00084f8c) main_camera_pane_g6

0x65b8,	// (0x00084f98) main_camera_pane_g7

0x0007,

0xf229,	// (0x0008dc09) main_camera_pane_g

0x65c4,	// (0x00084fa4) main_camera_pane_t1

0x65d6,	// (0x00084fb6) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0008dc1a) main_camera_pane_t

0x65f7,	// (0x00084fd7) cams_zoom_pane_cp_ParamLimits

0x65f7,	// (0x00084fd7) cams_zoom_pane_cp

0x661b,	// (0x00084ffb) image_cif_pane_ParamLimits

0x661b,	// (0x00084ffb) image_cif_pane

0x6639,	// (0x00085019) image_subqcif_pane

0x6641,	// (0x00085021) main_video_pane_g1_ParamLimits

0x6641,	// (0x00085021) main_video_pane_g1

0x6661,	// (0x00085041) main_video_pane_g2_ParamLimits

0x6661,	// (0x00085041) main_video_pane_g2

0x6691,	// (0x00085071) main_video_pane_g3_ParamLimits

0x6691,	// (0x00085071) main_video_pane_g3

0x66ba,	// (0x0008509a) main_video_pane_g4_ParamLimits

0x66ba,	// (0x0008509a) main_video_pane_g4

0x66e3,	// (0x000850c3) main_video_pane_g5_ParamLimits

0x66e3,	// (0x000850c3) main_video_pane_g5

0xe368,	// (0x0008cd48) main_video_pane_g6_ParamLimits

0xe368,	// (0x0008cd48) main_video_pane_g6

0x0006,

0xf23f,	// (0x0008dc1f) main_video_pane_g_ParamLimits

0xf23f,	// (0x0008dc1f) main_video_pane_g

0x6705,	// (0x000850e5) main_video_pane_t1_ParamLimits

0x6705,	// (0x000850e5) main_video_pane_t1

0xe382,	// (0x0008cd62) cams_zoom_pane_g1

0xe38b,	// (0x0008cd6b) cams_zoom_pane_g2

0xe394,	// (0x0008cd74) cams_zoom_pane_g3

0xe39d,	// (0x0008cd7d) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0008dc2e) cams_zoom_pane_g

0x674f,	// (0x0008512f) grid_cams_pane

0x675d,	// (0x0008513d) linegrid_cams_pane

0x676b,	// (0x0008514b) cell_cams_pane_ParamLimits

0x676b,	// (0x0008514b) cell_cams_pane

0xe3a6,	// (0x0008cd86) cams_burst_image_pane

0xe3ae,	// (0x0008cd8e) cell_cams_pane_g1

0xde89,	// (0x0008c869) grid_highlight_pane_cp03

0xe20c,	// (0x0008cbec) mp_bg_pane_g1

0xde89,	// (0x0008c869) bg_list_pane_cp03

0x1466,	// (0x0007fe46) bg_mp_pane

0x146e,	// (0x0007fe4e) grid_mp_pane

0x1476,	// (0x0007fe56) media_player_g1

0x147e,	// (0x0007fe5e) media_player_t1

0x148c,	// (0x0007fe6c) media_player_t2

0x149a,	// (0x0007fe7a) media_player_t3

0x14a8,	// (0x0007fe88) media_player_t4

0x14b6,	// (0x0007fe96) media_player_t5

0x14c4,	// (0x0007fea4) media_player_t6

0x14d2,	// (0x0007feb2) media_player_t7

0x0006,

0xf5ea,	// (0x0008dfca) media_player_t

0x14e0,	// (0x0007fec0) wait_bar_pane_cp02

0xf5cf,	// (0x0008dfaf) main_usb_pane_t

0x87bf,	// (0x0008719f) cell_mp_pane

0xe20c,	// (0x0008cbec) cell_mp_pane_g1

0xde89,	// (0x0008c869) grid_highlight_pane_cp06

0xe3b6,	// (0x0008cd96) grid_skin_colour_pane

0xe3be,	// (0x0008cd9e) list_highlight_pane_cp03

0x67d5,	// (0x000851b5) skin_g1

0xe3c6,	// (0x0008cda6) skin_t1

0xe3d5,	// (0x0008cdb5) skin_t2

0x0001,

0xf283,	// (0x0008dc63) skin_t

0x67df,	// (0x000851bf) cell_skin_colour_pane_ParamLimits

0x67df,	// (0x000851bf) cell_skin_colour_pane

0xe3e3,	// (0x0008cdc3) cell_skin_colour_pane_g1

0x6863,	// (0x00085243) call_video_g1_ParamLimits

0x6863,	// (0x00085243) call_video_g1

0x6873,	// (0x00085253) call_video_g2_ParamLimits

0x6873,	// (0x00085253) call_video_g2

0x0001,

0xf288,	// (0x0008dc68) call_video_g_ParamLimits

0xf288,	// (0x0008dc68) call_video_g

0x68cd,	// (0x000852ad) call_video_uplink_pane_cp1_ParamLimits

0x68cd,	// (0x000852ad) call_video_uplink_pane_cp1

0xe3f5,	// (0x0008cdd5) call_video_uplink_pane_cp2

0x6999,	// (0x00085379) video_down_crop_pane_ParamLimits

0x6999,	// (0x00085379) video_down_crop_pane

0x6a97,	// (0x00085477) video_down_pane_ParamLimits

0x6a97,	// (0x00085477) video_down_pane

0xe3fd,	// (0x0008cddd) video_down_subqcif_pane_ParamLimits

0xe3fd,	// (0x0008cddd) video_down_subqcif_pane

0xe415,	// (0x0008cdf5) video_down_subqcif_pane_cp_ParamLimits

0xe415,	// (0x0008cdf5) video_down_subqcif_pane_cp

0xe43b,	// (0x0008ce1b) im_reading_pane_ParamLimits

0xe43b,	// (0x0008ce1b) im_reading_pane

0x6bb9,	// (0x00085599) im_writing_pane_ParamLimits

0x6bb9,	// (0x00085599) im_writing_pane

0x6bd7,	// (0x000855b7) im_reading_pane_t1

0xe455,	// (0x0008ce35) list_im_pane

0xe466,	// (0x0008ce46) scroll_pane_cp07

0x6c2b,	// (0x0008560b) im_writing_pane_t1_ParamLimits

0x6c2b,	// (0x0008560b) im_writing_pane_t1

0xe47f,	// (0x0008ce5f) im_writing_pane_t2_ParamLimits

0xe47f,	// (0x0008ce5f) im_writing_pane_t2

0x0001,

0xf292,	// (0x0008dc72) im_writing_pane_t_ParamLimits

0xf292,	// (0x0008dc72) im_writing_pane_t

0xde89,	// (0x0008c869) input_focus_pane_cp04

0xde89,	// (0x0008c869) input_focus_pane_cp05

0x6c40,	// (0x00085620) list_im_single_pane_ParamLimits

0x6c40,	// (0x00085620) list_im_single_pane

0x6c64,	// (0x00085644) list_single_im_pane_t1

0x8783,	// (0x00087163) blid_accuracy_pane

0x878b,	// (0x0008716b) blid_compass_pane

0x8795,	// (0x00087175) main_location_t1

0x87a3,	// (0x00087183) main_location_t2

0x87b1,	// (0x00087191) main_location_t3

0x0002,

0xf5f9,	// (0x0008dfd9) main_location_t

0xde89,	// (0x0008c869) aid_levels_location

0xe20c,	// (0x0008cbec) blid_accuracy_pane_g1

0xe20c,	// (0x0008cbec) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0008dcd4) blid_accuracy_pane_g

0xe4c7,	// (0x0008cea7) wml_content_pane

0xe505,	// (0x0008cee5) wml_button_pane_ParamLimits

0xe505,	// (0x0008cee5) wml_button_pane

0x6c73,	// (0x00085653) wml_list_single_large_pane_ParamLimits

0x6c73,	// (0x00085653) wml_list_single_large_pane

0x6c9d,	// (0x0008567d) wml_list_single_medium_pane_ParamLimits

0x6c9d,	// (0x0008567d) wml_list_single_medium_pane

0x6cce,	// (0x000856ae) wml_list_single_small_pane_ParamLimits

0x6cce,	// (0x000856ae) wml_list_single_small_pane

0xe519,	// (0x0008cef9) wml_selection_box_pane_ParamLimits

0xe519,	// (0x0008cef9) wml_selection_box_pane

0xe52c,	// (0x0008cf0c) wml_list_single_pane_t1

0xe53b,	// (0x0008cf1b) wml_list_single_medium_pane_t1

0xe54a,	// (0x0008cf2a) wml_list_single_large_pane_t1

0xe559,	// (0x0008cf39) input_focus_pane_cp02_ParamLimits

0xe559,	// (0x0008cf39) input_focus_pane_cp02

0xe56c,	// (0x0008cf4c) wml_selection_box_pane_g1

0xe575,	// (0x0008cf55) wml_selection_box_pane_t1_ParamLimits

0xe575,	// (0x0008cf55) wml_selection_box_pane_t1

0xe0e4,	// (0x0008cac4) bg_wml_button_pane_ParamLimits

0xe0e4,	// (0x0008cac4) bg_wml_button_pane

0xe58d,	// (0x0008cf6d) wml_button_pane_g1

0xe595,	// (0x0008cf75) wml_button_pane_t1

0xe58d,	// (0x0008cf6d) wml_button_bg_pane_g1

0xe5a5,	// (0x0008cf85) wml_button_bg_pane_g2

0xe5ad,	// (0x0008cf8d) wml_button_bg_pane_g3

0xe5b5,	// (0x0008cf95) wml_button_bg_pane_g4

0xe5bd,	// (0x0008cf9d) wml_button_bg_pane_g5

0xe5c5,	// (0x0008cfa5) wml_button_bg_pane_g6

0xe5cd,	// (0x0008cfad) wml_button_bg_pane_g7

0xe5d5,	// (0x0008cfb5) wml_button_bg_pane_g8

0xe5dd,	// (0x0008cfbd) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0008dc77) wml_button_bg_pane_g

0x6d08,	// (0x000856e8) bg_list_pane_cp02

0xe5e5,	// (0x0008cfc5) mce_header_pane_ParamLimits

0xe5e5,	// (0x0008cfc5) mce_header_pane

0xe5fb,	// (0x0008cfdb) mce_icon_pane

0xe5fb,	// (0x0008cfdb) mce_image_pane

0xe604,	// (0x0008cfe4) mce_text_pane_ParamLimits

0xe604,	// (0x0008cfe4) mce_text_pane

0x6d12,	// (0x000856f2) scroll_pane_cp03

0xe4fd,	// (0x0008cedd) scroll_pane_cp04

0xe617,	// (0x0008cff7) scroll_pane_cp05_ParamLimits

0xe617,	// (0x0008cff7) scroll_pane_cp05

0x6d1c,	// (0x000856fc) mce_header_field_pane_ParamLimits

0x6d1c,	// (0x000856fc) mce_header_field_pane

0x6d3c,	// (0x0008571c) mce_header_field_pane_2_ParamLimits

0x6d3c,	// (0x0008571c) mce_header_field_pane_2

0x6d52,	// (0x00085732) mce_header_field_pane_3

0x6d5a,	// (0x0008573a) list_single_mce_message_pane_ParamLimits

0x6d5a,	// (0x0008573a) list_single_mce_message_pane

0x6d7f,	// (0x0008575f) list_single_mce_smart_pane_ParamLimits

0x6d7f,	// (0x0008575f) list_single_mce_smart_pane

0xe623,	// (0x0008d003) input_focus_pane_cp03

0xe62c,	// (0x0008d00c) list_header_data_pane

0x6daf,	// (0x0008578f) mce_header_field_pane_t1

0x6dbd,	// (0x0008579d) list_single_mce_header_pane_ParamLimits

0x6dbd,	// (0x0008579d) list_single_mce_header_pane

0xe634,	// (0x0008d014) list_single_mce_header_pane_t1

0xe643,	// (0x0008d023) list_single_mce_message_pane_g1

0xe64b,	// (0x0008d02b) list_single_mce_message_pane_t1

0x6e01,	// (0x000857e1) bg_cale_heading_pane_cp01_ParamLimits

0x6e01,	// (0x000857e1) bg_cale_heading_pane_cp01

0xe659,	// (0x0008d039) bg_cale_pane_cp02_ParamLimits

0xe659,	// (0x0008d039) bg_cale_pane_cp02

0x6e34,	// (0x00085814) cale_month_corner_pane

0x6e4a,	// (0x0008582a) cale_month_day_heading_pane_ParamLimits

0x6e4a,	// (0x0008582a) cale_month_day_heading_pane

0x6e8d,	// (0x0008586d) cale_month_pane_g1_ParamLimits

0x6e8d,	// (0x0008586d) cale_month_pane_g1

0x6eb9,	// (0x00085899) cale_month_pane_g2_ParamLimits

0x6eb9,	// (0x00085899) cale_month_pane_g2

0x6edc,	// (0x000858bc) cale_month_pane_g3_ParamLimits

0x6edc,	// (0x000858bc) cale_month_pane_g3

0x6f18,	// (0x000858f8) cale_month_pane_g4_ParamLimits

0x6f18,	// (0x000858f8) cale_month_pane_g4

0x6f54,	// (0x00085934) cale_month_pane_g5_ParamLimits

0x6f54,	// (0x00085934) cale_month_pane_g5

0x6f90,	// (0x00085970) cale_month_pane_g6_ParamLimits

0x6f90,	// (0x00085970) cale_month_pane_g6

0x6fcc,	// (0x000859ac) cale_month_pane_g7_ParamLimits

0x6fcc,	// (0x000859ac) cale_month_pane_g7

0x7018,	// (0x000859f8) cale_month_pane_g8_ParamLimits

0x7018,	// (0x000859f8) cale_month_pane_g8

0x7064,	// (0x00085a44) cale_month_pane_g9_ParamLimits

0x7064,	// (0x00085a44) cale_month_pane_g9

0x70aa,	// (0x00085a8a) cale_month_pane_g10_ParamLimits

0x70aa,	// (0x00085a8a) cale_month_pane_g10

0x70e4,	// (0x00085ac4) cale_month_pane_g11_ParamLimits

0x70e4,	// (0x00085ac4) cale_month_pane_g11

0x7122,	// (0x00085b02) cale_month_pane_g12_ParamLimits

0x7122,	// (0x00085b02) cale_month_pane_g12

0x7160,	// (0x00085b40) cale_month_pane_g13_ParamLimits

0x7160,	// (0x00085b40) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0008dc8a) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0008dc8a) cale_month_pane_g

0x719e,	// (0x00085b7e) cale_month_week_pane

0x71b1,	// (0x00085b91) grid_cale_month_pane_ParamLimits

0x71b1,	// (0x00085b91) grid_cale_month_pane

0x71ef,	// (0x00085bcf) cale_month_day_heading_pane_t1

0x724d,	// (0x00085c2d) cale_month_day_heading_pane_t2

0x72b2,	// (0x00085c92) cale_month_day_heading_pane_t3

0x7317,	// (0x00085cf7) cale_month_day_heading_pane_t4

0x737c,	// (0x00085d5c) cale_month_day_heading_pane_t5

0x73e1,	// (0x00085dc1) cale_month_day_heading_pane_t6

0x7446,	// (0x00085e26) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0008dca5) cale_month_day_heading_pane_t

0xe2f7,	// (0x0008ccd7) bg_cale_side_pane_cp01

0x74bb,	// (0x00085e9b) cale_month_week_pane_t1

0x74d2,	// (0x00085eb2) cale_month_week_pane_t2

0x74e9,	// (0x00085ec9) cale_month_week_pane_t3

0x7500,	// (0x00085ee0) cale_month_week_pane_t4

0x7517,	// (0x00085ef7) cale_month_week_pane_t5

0x7532,	// (0x00085f12) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0008dcb4) cale_month_week_pane_t

0x7551,	// (0x00085f31) cell_cale_month_pane_ParamLimits

0x7551,	// (0x00085f31) cell_cale_month_pane

0x7617,	// (0x00085ff7) cell_cale_month_pane_g1

0x7623,	// (0x00086003) cell_cale_month_pane_t1_ParamLimits

0x7623,	// (0x00086003) cell_cale_month_pane_t1

0xe305,	// (0x0008cce5) grid_highlight_pane_cp08

0xe20c,	// (0x0008cbec) main_smil_g1

0x763f,	// (0x0008601f) smil_status_pane

0xe68e,	// (0x0008d06e) smil_text_pane

0x1386,	// (0x0007fd66) bg_popup_call3_rect_pane_g8

0x138e,	// (0x0007fd6e) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0008df6d) bg_popup_call3_rect_pane_g

0x161b,	// (0x0007fffb) smil_status_volume_pane_g1

0xe698,	// (0x0008d078) smil_status_pane_t1

0x8b69,	// (0x00087549) volume_smil_pane

0xe6af,	// (0x0008d08f) list_smil_text_pane

0x7652,	// (0x00086032) scroll_pane_cp011

0x765d,	// (0x0008603d) smil_text_list_pane_t1_ParamLimits

0x765d,	// (0x0008603d) smil_text_list_pane_t1

0x76d5,	// (0x000860b5) aid_volume_smil_ParamLimits

0x76d5,	// (0x000860b5) aid_volume_smil

0xe20c,	// (0x0008cbec) smil_volume_pane_g1

0xe20c,	// (0x0008cbec) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0008dcd4) smil_volume_pane_g

0xe1b7,	// (0x0008cb97) listscroll_cale_day_pane

0xe6b9,	// (0x0008d099) bg_cale_pane

0xe6d1,	// (0x0008d0b1) list_cale_pane

0xe6e2,	// (0x0008d0c2) scroll_pane_cp09

0xe6f3,	// (0x0008d0d3) cale_bg_pane_g1

0xe6fb,	// (0x0008d0db) cale_bg_pane_g2

0xe703,	// (0x0008d0e3) cale_bg_pane_g3

0xe70b,	// (0x0008d0eb) cale_bg_pane_g4

0xe713,	// (0x0008d0f3) cale_bg_pane_g5

0xe71b,	// (0x0008d0fb) cale_bg_pane_g6

0xe723,	// (0x0008d103) cale_bg_pane_g7

0xe72b,	// (0x0008d10b) cale_bg_pane_g8

0xe733,	// (0x0008d113) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0008dcd9) cale_bg_pane_g

0x76f7,	// (0x000860d7) list_cale_time_pane_ParamLimits

0x76f7,	// (0x000860d7) list_cale_time_pane

0xe73b,	// (0x0008d11b) list_cale_time_pane_g1_ParamLimits

0xe73b,	// (0x0008d11b) list_cale_time_pane_g1

0xe747,	// (0x0008d127) list_cale_time_pane_g2_ParamLimits

0xe747,	// (0x0008d127) list_cale_time_pane_g2

0x7713,	// (0x000860f3) list_cale_time_pane_g3_ParamLimits

0x7713,	// (0x000860f3) list_cale_time_pane_g3

0x7721,	// (0x00086101) list_cale_time_pane_g4_ParamLimits

0x7721,	// (0x00086101) list_cale_time_pane_g4

0x772f,	// (0x0008610f) list_cale_time_pane_g5_ParamLimits

0x772f,	// (0x0008610f) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0008dcec) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0008dcec) list_cale_time_pane_g

0xe761,	// (0x0008d141) list_cale_time_pane_t1_ParamLimits

0xe761,	// (0x0008d141) list_cale_time_pane_t1

0xe789,	// (0x0008d169) list_cale_time_pane_t2_ParamLimits

0xe789,	// (0x0008d169) list_cale_time_pane_t2

0x7a60,	// (0x00086440) aid_blid_cardinal_pane

0x7aa2,	// (0x00086482) compass_pane_t4

0xe7b1,	// (0x0008d191) list_cale_time_pane_t4_ParamLimits

0xe7b1,	// (0x0008d191) list_cale_time_pane_t4

0x7ab0,	// (0x00086490) compass_pane_t5

0x7ac0,	// (0x000864a0) compass_pane_t6

0x7ace,	// (0x000864ae) compass_pane_t7

0xebea,	// (0x0008d5ca) navi_pane_cc_t1

0xed3f,	// (0x0008d71f) aid_phob_thumbnail_center_pane

0x8289,	// (0x00086c69) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0008dcf9) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0008dcf9) list_cale_time_pane_t

0xdae0,	// (0x0008c4c0) bg_popup_window_pane_cp02_ParamLimits

0xdae0,	// (0x0008c4c0) bg_popup_window_pane_cp02

0xe7d9,	// (0x0008d1b9) heading_pane_cp01_ParamLimits

0xe7d9,	// (0x0008d1b9) heading_pane_cp01

0xe7e5,	// (0x0008d1c5) loc_req_pane_ParamLimits

0xe7e5,	// (0x0008d1c5) loc_req_pane

0xe7f5,	// (0x0008d1d5) loc_type_pane_ParamLimits

0xe7f5,	// (0x0008d1d5) loc_type_pane

0xe807,	// (0x0008d1e7) loc_type_pane_t1_ParamLimits

0xe807,	// (0x0008d1e7) loc_type_pane_t1

0xe819,	// (0x0008d1f9) loc_type_pane_t2_ParamLimits

0xe819,	// (0x0008d1f9) loc_type_pane_t2

0xe82b,	// (0x0008d20b) loc_type_pane_t3_ParamLimits

0xe82b,	// (0x0008d20b) loc_type_pane_t3

0x0002,

0xf320,	// (0x0008dd00) loc_type_pane_t_ParamLimits

0xf320,	// (0x0008dd00) loc_type_pane_t

0xe83d,	// (0x0008d21d) list_loc_req_pane

0xe847,	// (0x0008d227) scroll_pane_cp012

0x773d,	// (0x0008611d) list_single_loc_request_popup_menu_pane_ParamLimits

0x773d,	// (0x0008611d) list_single_loc_request_popup_menu_pane

0xe852,	// (0x0008d232) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe852,	// (0x0008d232) list_single_loc_request_popup_menu_pane_g1

0xe85e,	// (0x0008d23e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe85e,	// (0x0008d23e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0008dd07) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0008dd07) list_single_loc_request_popup_menu_pane_g

0xe86a,	// (0x0008d24a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe86a,	// (0x0008d24a) list_single_loc_request_popup_menu_pane_t1

0x774f,	// (0x0008612f) bg_popup_window_pane_cp03_ParamLimits

0x774f,	// (0x0008612f) bg_popup_window_pane_cp03

0x775d,	// (0x0008613d) heading_loc_req_pane_ParamLimits

0x775d,	// (0x0008613d) heading_loc_req_pane

0x7769,	// (0x00086149) popup_dyc_status_message_window_g1_ParamLimits

0x7769,	// (0x00086149) popup_dyc_status_message_window_g1

0x7775,	// (0x00086155) popup_dyc_status_message_window_t1_ParamLimits

0x7775,	// (0x00086155) popup_dyc_status_message_window_t1

0x7787,	// (0x00086167) popup_dyc_status_message_window_t2_ParamLimits

0x7787,	// (0x00086167) popup_dyc_status_message_window_t2

0x7799,	// (0x00086179) popup_dyc_status_message_window_t3_ParamLimits

0x7799,	// (0x00086179) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0008dd0c) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0008dd0c) popup_dyc_status_message_window_t

0xde89,	// (0x0008c869) bg_heading_pane_cp01

0xe880,	// (0x0008d260) heading_loc_req_pane_g1

0xe888,	// (0x0008d268) heading_loc_req_pane_g2

0xe890,	// (0x0008d270) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0008dd13) heading_loc_req_pane_g

0xe898,	// (0x0008d278) heading_loc_req_pane_t1

0xe8a7,	// (0x0008d287) bg_popup_sub_pane_cp01_ParamLimits

0xe8a7,	// (0x0008d287) bg_popup_sub_pane_cp01

0xe8b5,	// (0x0008d295) popup_cale_events_window_g1_ParamLimits

0xe8b5,	// (0x0008d295) popup_cale_events_window_g1

0xe8d5,	// (0x0008d2b5) popup_cale_events_window_g2_ParamLimits

0xe8d5,	// (0x0008d2b5) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0008dd47) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0008dd47) popup_cale_events_window_g

0xe8f5,	// (0x0008d2d5) popup_cale_events_window_t1_ParamLimits

0xe8f5,	// (0x0008d2d5) popup_cale_events_window_t1

0xe907,	// (0x0008d2e7) popup_cale_events_window_t2_ParamLimits

0xe907,	// (0x0008d2e7) popup_cale_events_window_t2

0xe945,	// (0x0008d325) popup_cale_events_window_t3_ParamLimits

0xe945,	// (0x0008d325) popup_cale_events_window_t3

0xe97f,	// (0x0008d35f) popup_cale_events_window_t4_ParamLimits

0xe97f,	// (0x0008d35f) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0008dd4c) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0008dd4c) popup_cale_events_window_t

0x781d,	// (0x000861fd) call_type_pane

0xe9b5,	// (0x0008d395) popup_call_status_window_g1

0x7829,	// (0x00086209) popup_call_status_window_g2

0x7835,	// (0x00086215) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0008dd55) popup_call_status_window_g

0xe9c3,	// (0x0008d3a3) call_type_pane_g1

0xe9cc,	// (0x0008d3ac) call_type_pane_g2

0x0001,

0xf37c,	// (0x0008dd5c) call_type_pane_g

0xde89,	// (0x0008c869) bg_popup_sub_pane_cp02

0xe9d5,	// (0x0008d3b5) listscroll_popup_wml_pane

0xe9dd,	// (0x0008d3bd) list_wml_pane

0xe9e7,	// (0x0008d3c7) scroll_pane_cp013

0xe9f2,	// (0x0008d3d2) list_single_graphic_popup_wml_pane_ParamLimits

0xe9f2,	// (0x0008d3d2) list_single_graphic_popup_wml_pane

0xe20c,	// (0x0008cbec) list_single_graphic_popup_wml_pane_g1

0xea06,	// (0x0008d3e6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0008dd61) list_single_graphic_popup_wml_pane_g

0xea0e,	// (0x0008d3ee) list_single_graphic_popup_wml_pane_t1

0xea24,	// (0x0008d404) aid_call_pane

0xe0dc,	// (0x0008cabc) popup_clock_analogue_window_g1

0xe0dc,	// (0x0008cabc) popup_clock_analogue_window_g2

0x7841,	// (0x00086221) popup_clock_analogue_window_g3

0x7841,	// (0x00086221) popup_clock_analogue_window_g4

0xe20c,	// (0x0008cbec) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0008dd66) popup_clock_analogue_window_g

0x7849,	// (0x00086229) popup_clock_analogue_window_t1

0x7857,	// (0x00086237) clock_digital_number_pane_ParamLimits

0x7857,	// (0x00086237) clock_digital_number_pane

0x7863,	// (0x00086243) clock_digital_number_pane_cp02_ParamLimits

0x7863,	// (0x00086243) clock_digital_number_pane_cp02

0x786f,	// (0x0008624f) clock_digital_number_pane_cp03_ParamLimits

0x786f,	// (0x0008624f) clock_digital_number_pane_cp03

0x787b,	// (0x0008625b) clock_digital_number_pane_cp04_ParamLimits

0x787b,	// (0x0008625b) clock_digital_number_pane_cp04

0x788b,	// (0x0008626b) clock_digital_separator_pane_ParamLimits

0x788b,	// (0x0008626b) clock_digital_separator_pane

0x7897,	// (0x00086277) popup_clock_digital_window_t1

0xe20c,	// (0x0008cbec) clock_digital_number_pane_g1

0xe20c,	// (0x0008cbec) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0008dcd4) clock_digital_number_pane_g

0xe20c,	// (0x0008cbec) clock_digital_separator_pane_g1

0xe20c,	// (0x0008cbec) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0008dcd4) clock_digital_separator_pane_g

0xde89,	// (0x0008c869) bg_popup_window_pane_cp04

0xea2c,	// (0x0008d40c) heading_pane_cp03

0xea34,	// (0x0008d414) listscroll_popup_gms_pane

0xea3c,	// (0x0008d41c) grid_large_graphic_popup_pane

0xea46,	// (0x0008d426) listscroll_popup_gms_pane_g1

0xea4e,	// (0x0008d42e) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0008dd71) listscroll_popup_gms_pane_g

0xe4fd,	// (0x0008cedd) scroll_pane_cp014

0x78b4,	// (0x00086294) cell_large_graphic_popup_pane_ParamLimits

0x78b4,	// (0x00086294) cell_large_graphic_popup_pane

0x78cc,	// (0x000862ac) cell_large_graphic_popup_pane_g1_ParamLimits

0x78cc,	// (0x000862ac) cell_large_graphic_popup_pane_g1

0xea56,	// (0x0008d436) cell_large_graphic_popup_pane_g2_ParamLimits

0xea56,	// (0x0008d436) cell_large_graphic_popup_pane_g2

0xea62,	// (0x0008d442) cell_large_graphic_popup_pane_g3_ParamLimits

0xea62,	// (0x0008d442) cell_large_graphic_popup_pane_g3

0xea6f,	// (0x0008d44f) cell_large_graphic_popup_pane_g4_ParamLimits

0xea6f,	// (0x0008d44f) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0008dd76) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0008dd76) cell_large_graphic_popup_pane_g

0xea7f,	// (0x0008d45f) grid_highlight_pane_cp010

0xe20c,	// (0x0008cbec) bg_popup_call_pane_g1

0xea89,	// (0x0008d469) list_single_graphic_popup_conf_pane_ParamLimits

0xea89,	// (0x0008d469) list_single_graphic_popup_conf_pane

0xea9c,	// (0x0008d47c) list_highlight_pane_cp01

0xeaa5,	// (0x0008d485) list_single_graphic_popup_conf_pane_g1

0xeaad,	// (0x0008d48d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0008dd7f) list_single_graphic_popup_conf_pane_g

0xeab5,	// (0x0008d495) list_single_graphic_popup_conf_pane_t1

0xeac3,	// (0x0008d4a3) linegrid_cams_pane_g1

0x78d8,	// (0x000862b8) linegrid_cams_pane_g2

0xe338,	// (0x0008cd18) linegrid_cams_pane_g3

0xeacc,	// (0x0008d4ac) linegrid_cams_pane_g4

0x78e1,	// (0x000862c1) linegrid_cams_pane_g5

0x78ea,	// (0x000862ca) linegrid_cams_pane_g6

0xe341,	// (0x0008cd21) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0008dd84) linegrid_cams_pane_g

0xead5,	// (0x0008d4b5) popup_clock_analogue_window

0xead5,	// (0x0008d4b5) popup_clock_digital_window

0xde89,	// (0x0008c869) popup_phob_thumbnail_window

0xe20c,	// (0x0008cbec) call_video_uplink_pane_g1

0xeade,	// (0x0008d4be) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0008dd93) call_video_uplink_pane_g

0xeae6,	// (0x0008d4c6) video_uplink_pane

0xeaee,	// (0x0008d4ce) mce_image_pane_g1

0x78f3,	// (0x000862d3) mce_image_pane_g2

0x78fd,	// (0x000862dd) mce_image_pane_g3

0x7905,	// (0x000862e5) mce_image_pane_g4

0x790d,	// (0x000862ed) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0008dd98) mce_image_pane_g

0xeaf8,	// (0x0008d4d8) control_top_pane_stacon_cp01_ParamLimits

0xeaf8,	// (0x0008d4d8) control_top_pane_stacon_cp01

0xeb0c,	// (0x0008d4ec) uni_indicator_pane_stacon_cp01_ParamLimits

0xeb0c,	// (0x0008d4ec) uni_indicator_pane_stacon_cp01

0xeb1d,	// (0x0008d4fd) bg_popup_sub_pane_cp03

0x7915,	// (0x000862f5) chi_dic_find_pane

0x791d,	// (0x000862fd) listscroll_chi_dic_pane

0x7926,	// (0x00086306) main_pane_chidic_g1

0xeb27,	// (0x0008d507) chi_dic_find_pane_t1

0xeb35,	// (0x0008d515) find_chidic_pane

0xeb3e,	// (0x0008d51e) chi_dic_list_pane_ParamLimits

0xeb3e,	// (0x0008d51e) chi_dic_list_pane

0xeb4f,	// (0x0008d52f) scroll_pane_cp020

0xeb57,	// (0x0008d537) find_chidic_pane_t1

0xde89,	// (0x0008c869) input_focus_pane_cp06

0x7939,	// (0x00086319) list_chi_dic_pane_ParamLimits

0x7939,	// (0x00086319) list_chi_dic_pane

0x7953,	// (0x00086333) list_chi_dic_pane_t1_ParamLimits

0x7953,	// (0x00086333) list_chi_dic_pane_t1

0xde89,	// (0x0008c869) list_highlight_pane_cp020

0xeb66,	// (0x0008d546) bg_cale_heading_pane_g1

0x7966,	// (0x00086346) bg_cale_heading_pane_g2

0x796e,	// (0x0008634e) bg_cale_heading_pane_g3

0x7976,	// (0x00086356) bg_cale_heading_pane_g4

0x7980,	// (0x00086360) bg_cale_heading_pane_g5

0x798a,	// (0x0008636a) bg_cale_heading_pane_g6

0x7992,	// (0x00086372) bg_cale_heading_pane_g7

0x799a,	// (0x0008637a) bg_cale_heading_pane_g8

0x79a4,	// (0x00086384) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0008dda3) bg_cale_heading_pane_g

0xeb66,	// (0x0008d546) bg_cale_side_pane_g1

0x79ae,	// (0x0008638e) bg_cale_side_pane_g2

0x79b8,	// (0x00086398) bg_cale_side_pane_g3

0x79c2,	// (0x000863a2) bg_cale_side_pane_g4

0x79cc,	// (0x000863ac) bg_cale_side_pane_g5

0x79d6,	// (0x000863b6) bg_cale_side_pane_g6

0x79e0,	// (0x000863c0) bg_cale_side_pane_g7

0x79ea,	// (0x000863ca) bg_cale_side_pane_g8

0x79f2,	// (0x000863d2) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0008ddb6) bg_cale_side_pane_g

0x79fa,	// (0x000863da) popup_call_status_window_ParamLimits

0x79fa,	// (0x000863da) popup_call_status_window

0xeb6e,	// (0x0008d54e) stacon_top_pane

0xeb76,	// (0x0008d556) status_pane_ParamLimits

0xeb76,	// (0x0008d556) status_pane

0xeb8b,	// (0x0008d56b) status_small_pane

0xeb93,	// (0x0008d573) control_pane

0xde89,	// (0x0008c869) stacon_bottom_pane

0xeb9b,	// (0x0008d57b) list_single_mce_smart_pane_t1_ParamLimits

0xeb9b,	// (0x0008d57b) list_single_mce_smart_pane_t1

0xebae,	// (0x0008d58e) list_single_mce_smart_pane_t2_ParamLimits

0xebae,	// (0x0008d58e) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0008ddc9) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0008ddc9) list_single_mce_smart_pane_t

0x7a06,	// (0x000863e6) compass_pane

0x7a12,	// (0x000863f2) main_location2_pane_t1

0x7a26,	// (0x00086406) main_location2_pane_t2

0x7a3a,	// (0x0008641a) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0008ddce) main_location2_pane_t

0xebcd,	// (0x0008d5ad) compass_pane_g1_ParamLimits

0xebcd,	// (0x0008d5ad) compass_pane_g1

0x7a84,	// (0x00086464) compass_pane_t1

0x7a93,	// (0x00086473) compass_pane_t2

0x0005,

0xf3f7,	// (0x0008ddd7) compass_pane_t

0x7ade,	// (0x000864be) text_secondary_cp61

0xebe1,	// (0x0008d5c1) navi_pane_cams_g5

0xec04,	// (0x0008d5e4) navi_pane_im_t1

0xec12,	// (0x0008d5f2) navi_pane_mp_g1_ParamLimits

0xec12,	// (0x0008d5f2) navi_pane_mp_g1

0xec26,	// (0x0008d606) navi_pane_mp_g2_ParamLimits

0xec26,	// (0x0008d606) navi_pane_mp_g2

0xec32,	// (0x0008d612) navi_pane_mp_g3_ParamLimits

0xec32,	// (0x0008d612) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0008ddeb) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0008ddeb) navi_pane_mp_g

0xec3e,	// (0x0008d61e) navi_pane_mp_t1

0xec4c,	// (0x0008d62c) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0008ddf2) navi_pane_mp_t

0xec88,	// (0x0008d668) navi_pane_vt_g1

0xec3e,	// (0x0008d61e) navi_pane_vt_t1

0xec90,	// (0x0008d670) navi_slider_pane

0xec98,	// (0x0008d678) zooming_pane

0xeca0,	// (0x0008d680) navi_slider_pane_g1

0x7c09,	// (0x000865e9) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0008ddf9) navi_slider_pane_g

0xecc4,	// (0x0008d6a4) aid_levels_zoom

0xeccc,	// (0x0008d6ac) zooming_pane_g1

0xecd4,	// (0x0008d6b4) zooming_pane_g2

0xecd4,	// (0x0008d6b4) zooming_pane_g3

0x0002,

0xf428,	// (0x0008de08) zooming_pane_g

0xecdc,	// (0x0008d6bc) level_10_zoom

0xece5,	// (0x0008d6c5) level_11_zoom

0xecee,	// (0x0008d6ce) level_1_zoom

0xecf7,	// (0x0008d6d7) level_2_zoom

0xed00,	// (0x0008d6e0) level_3_zoom

0xed09,	// (0x0008d6e9) level_4_zoom

0xed12,	// (0x0008d6f2) level_5_zoom

0xed1b,	// (0x0008d6fb) level_6_zoom

0xed24,	// (0x0008d704) level_7_zoom

0xed2d,	// (0x0008d70d) level_8_zoom

0xed36,	// (0x0008d716) level_9_zoom

0xed47,	// (0x0008d727) popup_phob_thumbnail_window_g1

0xed4f,	// (0x0008d72f) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0008de0f) popup_phob_thumbnail_window_g

0x14e8,	// (0x0007fec8) level_1_location

0x14f0,	// (0x0007fed0) level_2_location

0x14f8,	// (0x0007fed8) level_3_location

0x1500,	// (0x0007fee0) level_4_location

0xec98,	// (0x0008d678) level_5_location

0x7c1b,	// (0x000865fb) mce_icon_pane_g1

0x7c23,	// (0x00086603) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0008de14) mce_icon_pane_g

0x7c2b,	// (0x0008660b) main_mup_pane_g1_ParamLimits

0x7c2b,	// (0x0008660b) main_mup_pane_g1

0x7c43,	// (0x00086623) main_mup_pane_g2_ParamLimits

0x7c43,	// (0x00086623) main_mup_pane_g2

0x7c5f,	// (0x0008663f) main_mup_pane_g3_ParamLimits

0x7c5f,	// (0x0008663f) main_mup_pane_g3

0x7c7b,	// (0x0008665b) main_mup_pane_g4_ParamLimits

0x7c7b,	// (0x0008665b) main_mup_pane_g4

0x7c97,	// (0x00086677) main_mup_pane_g5_ParamLimits

0x7c97,	// (0x00086677) main_mup_pane_g5

0x7cb8,	// (0x00086698) main_mup_pane_g6_ParamLimits

0x7cb8,	// (0x00086698) main_mup_pane_g6

0x7cd4,	// (0x000866b4) main_mup_pane_g7_ParamLimits

0x7cd4,	// (0x000866b4) main_mup_pane_g7

0x7cf0,	// (0x000866d0) main_mup_pane_g8_ParamLimits

0x7cf0,	// (0x000866d0) main_mup_pane_g8

0x7d10,	// (0x000866f0) main_mup_pane_g9_ParamLimits

0x7d10,	// (0x000866f0) main_mup_pane_g9

0x7d2f,	// (0x0008670f) main_mup_pane_g10_ParamLimits

0x7d2f,	// (0x0008670f) main_mup_pane_g10

0x7d4e,	// (0x0008672e) main_mup_pane_g11_ParamLimits

0x7d4e,	// (0x0008672e) main_mup_pane_g11

0x7d66,	// (0x00086746) main_mup_pane_g12_ParamLimits

0x7d66,	// (0x00086746) main_mup_pane_g12

0x7d74,	// (0x00086754) main_mup_pane_g13_ParamLimits

0x7d74,	// (0x00086754) main_mup_pane_g13

0x000c,

0xf439,	// (0x0008de19) main_mup_pane_g_ParamLimits

0xf439,	// (0x0008de19) main_mup_pane_g

0x7d8a,	// (0x0008676a) main_mup_pane_t1_ParamLimits

0x7d8a,	// (0x0008676a) main_mup_pane_t1

0x7da7,	// (0x00086787) main_mup_pane_t2_ParamLimits

0x7da7,	// (0x00086787) main_mup_pane_t2

0x7dc1,	// (0x000867a1) main_mup_pane_t3_ParamLimits

0x7dc1,	// (0x000867a1) main_mup_pane_t3

0x7ddb,	// (0x000867bb) main_mup_pane_t4_ParamLimits

0x7ddb,	// (0x000867bb) main_mup_pane_t4

0x7ded,	// (0x000867cd) main_mup_pane_t5_ParamLimits

0x7ded,	// (0x000867cd) main_mup_pane_t5

0x7dff,	// (0x000867df) main_mup_pane_t6_ParamLimits

0x7dff,	// (0x000867df) main_mup_pane_t6

0x0005,

0xf454,	// (0x0008de34) main_mup_pane_t_ParamLimits

0xf454,	// (0x0008de34) main_mup_pane_t

0x7e15,	// (0x000867f5) mup_progress_pane_ParamLimits

0x7e15,	// (0x000867f5) mup_progress_pane

0x7e21,	// (0x00086801) mup_visualizer_pane_ParamLimits

0x7e21,	// (0x00086801) mup_visualizer_pane

0x7e5b,	// (0x0008683b) mup_volume_pane_ParamLimits

0x7e5b,	// (0x0008683b) mup_volume_pane

0xe9b5,	// (0x0008d395) mup_visualizer_pane_g1_ParamLimits

0xe9b5,	// (0x0008d395) mup_visualizer_pane_g1

0xe9b5,	// (0x0008d395) mup_visualizer_pane_g2_ParamLimits

0xe9b5,	// (0x0008d395) mup_visualizer_pane_g2

0xebcd,	// (0x0008d5ad) mup_visualizer_pane_g3_ParamLimits

0xebcd,	// (0x0008d5ad) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0008de41) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0008de41) mup_visualizer_pane_g

0xe20c,	// (0x0008cbec) mup_volume_pane_g1

0xed5f,	// (0x0008d73f) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0008de48) mup_volume_pane_g

0xe20c,	// (0x0008cbec) mup_progress_pane_g1

0xed68,	// (0x0008d748) mup_progress_pane_g2

0xed71,	// (0x0008d751) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0008de4d) mup_progress_pane_g

0xde89,	// (0x0008c869) bg_popup_window_pane_cp05

0xed7a,	// (0x0008d75a) heading_pane_cp02_ParamLimits

0xed7a,	// (0x0008d75a) heading_pane_cp02

0xed94,	// (0x0008d774) list_popup_blid_pane

0xed9c,	// (0x0008d77c) list_blid_sat_info_pane_ParamLimits

0xed9c,	// (0x0008d77c) list_blid_sat_info_pane

0xedaf,	// (0x0008d78f) list_blid_sat_info_pane_g1

0xedb7,	// (0x0008d797) list_blid_sat_info_pane_t1

0x7f68,	// (0x00086948) mup_equalizer_pane_ParamLimits

0x7f68,	// (0x00086948) mup_equalizer_pane

0x7f89,	// (0x00086969) mup_equalizer_pane_cp1_ParamLimits

0x7f89,	// (0x00086969) mup_equalizer_pane_cp1

0x7faa,	// (0x0008698a) mup_equalizer_pane_cp2_ParamLimits

0x7faa,	// (0x0008698a) mup_equalizer_pane_cp2

0x7fcb,	// (0x000869ab) mup_equalizer_pane_cp3_ParamLimits

0x7fcb,	// (0x000869ab) mup_equalizer_pane_cp3

0x7fec,	// (0x000869cc) mup_equalizer_pane_cp4_ParamLimits

0x7fec,	// (0x000869cc) mup_equalizer_pane_cp4

0x800d,	// (0x000869ed) mup_equalizer_pane_cp5

0x8023,	// (0x00086a03) mup_equalizer_pane_cp6

0x803b,	// (0x00086a1b) mup_equalizer_pane_cp7

0x1406,	// (0x0007fde6) bg_popup_call_poc_act_pane_g9

0x140e,	// (0x0007fdee) bg_popup_call_poc_act_pane_g10

0x1416,	// (0x0007fdf6) bg_popup_call_poc_act_pane_g11

0x000a,

0xe0e4,	// (0x0008cac4) mup_scale_pane

0xe20c,	// (0x0008cbec) mup_scale_pane_g1

0xedc5,	// (0x0008d7a5) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0008de69) mup_scale_pane_g

0xede9,	// (0x0008d7c9) msg_data_pane

0xedf1,	// (0x0008d7d1) scroll_pane_cp017

0x8065,	// (0x00086a45) bg_list_pane_cp04_ParamLimits

0x8065,	// (0x00086a45) bg_list_pane_cp04

0xedf9,	// (0x0008d7d9) msg_data_pane_g1

0x808b,	// (0x00086a6b) msg_data_pane_g2

0x8095,	// (0x00086a75) msg_data_pane_g3

0x809d,	// (0x00086a7d) msg_data_pane_g4

0x80a5,	// (0x00086a85) msg_data_pane_g5

0x80ad,	// (0x00086a8d) msg_data_pane_g6

0x80b5,	// (0x00086a95) msg_data_pane_g7

0x0006,

0xf498,	// (0x0008de78) msg_data_pane_g

0x80bd,	// (0x00086a9d) msg_text_pane_ParamLimits

0x80bd,	// (0x00086a9d) msg_text_pane

0x80f4,	// (0x00086ad4) qrid_highlight_pane_cp011_ParamLimits

0x80f4,	// (0x00086ad4) qrid_highlight_pane_cp011

0xde89,	// (0x0008c869) msg_body_pane

0xde89,	// (0x0008c869) msg_header_pane

0xee0a,	// (0x0008d7ea) input_focus_pane_cp07

0x811a,	// (0x00086afa) msg_header_pane_t1_ParamLimits

0x811a,	// (0x00086afa) msg_header_pane_t1

0x812c,	// (0x00086b0c) msg_header_pane_t2_ParamLimits

0x812c,	// (0x00086b0c) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0008de8c) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0008de8c) msg_header_pane_t

0xee1f,	// (0x0008d7ff) msg_body_pane_g1

0x813e,	// (0x00086b1e) msg_body_pane_t1_ParamLimits

0x813e,	// (0x00086b1e) msg_body_pane_t1

0x816f,	// (0x00086b4f) msg_body_pane_t2_ParamLimits

0x816f,	// (0x00086b4f) msg_body_pane_t2

0x8181,	// (0x00086b61) msg_body_pane_t3_ParamLimits

0x8181,	// (0x00086b61) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0008de91) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0008de91) msg_body_pane_t

0x81e5,	// (0x00086bc5) main_viewer_pane_g1_ParamLimits

0x81e5,	// (0x00086bc5) main_viewer_pane_g1

0x81f1,	// (0x00086bd1) main_viewer_pane_g2_ParamLimits

0x81f1,	// (0x00086bd1) main_viewer_pane_g2

0x81fd,	// (0x00086bdd) main_viewer_pane_g3_ParamLimits

0x81fd,	// (0x00086bdd) main_viewer_pane_g3

0x820e,	// (0x00086bee) main_viewer_pane_g4_ParamLimits

0x820e,	// (0x00086bee) main_viewer_pane_g4

0x821f,	// (0x00086bff) main_viewer_pane_g5_ParamLimits

0x821f,	// (0x00086bff) main_viewer_pane_g5

0x821f,	// (0x00086bff) main_viewer_pane_g7_ParamLimits

0x821f,	// (0x00086bff) main_viewer_pane_g7

0xe852,	// (0x0008d232) main_viewer_pane_g8_ParamLimits

0xe852,	// (0x0008d232) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0008dea1) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0008dea1) main_viewer_pane_g

0xee27,	// (0x0008d807) viewer_content_pane_ParamLimits

0xee27,	// (0x0008d807) viewer_content_pane

0x825d,	// (0x00086c3d) main_postcard_pane_g1_ParamLimits

0x825d,	// (0x00086c3d) main_postcard_pane_g1

0x826b,	// (0x00086c4b) main_postcard_pane_g2_ParamLimits

0x826b,	// (0x00086c4b) main_postcard_pane_g2

0x8279,	// (0x00086c59) main_postcard_pane_g3_ParamLimits

0x8279,	// (0x00086c59) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0008deb2) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0008deb2) main_postcard_pane_g

0x8289,	// (0x00086c69) main_postcard_pane_g4

0x1608,	// (0x0007ffe8) smil_status_volume_pane_g2

0x82b5,	// (0x00086c95) postcard_pane_ParamLimits

0x82b5,	// (0x00086c95) postcard_pane

0xe9b5,	// (0x0008d395) postcard_pane_g1_ParamLimits

0xe9b5,	// (0x0008d395) postcard_pane_g1

0x82e7,	// (0x00086cc7) postcard_pane_g2_ParamLimits

0x82e7,	// (0x00086cc7) postcard_pane_g2

0x82f3,	// (0x00086cd3) postcard_pane_g3_ParamLimits

0x82f3,	// (0x00086cd3) postcard_pane_g3

0xee35,	// (0x0008d815) postcard_pane_g4_ParamLimits

0xee35,	// (0x0008d815) postcard_pane_g4

0x82ff,	// (0x00086cdf) postcard_pane_g5_ParamLimits

0x82ff,	// (0x00086cdf) postcard_pane_g5

0x830b,	// (0x00086ceb) postcard_pane_g6_ParamLimits

0x830b,	// (0x00086ceb) postcard_pane_g6

0xee43,	// (0x0008d823) postcard_pane_g7_ParamLimits

0xee43,	// (0x0008d823) postcard_pane_g7

0x0006,

0xf4df,	// (0x0008debf) postcard_pane_g_ParamLimits

0xf4df,	// (0x0008debf) postcard_pane_g

0x8317,	// (0x00086cf7) main_mp2_pane_g1_ParamLimits

0x8317,	// (0x00086cf7) main_mp2_pane_g1

0x8323,	// (0x00086d03) main_mp2_pane_g2_ParamLimits

0x8323,	// (0x00086d03) main_mp2_pane_g2

0x832f,	// (0x00086d0f) main_mp2_pane_g3_ParamLimits

0x832f,	// (0x00086d0f) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0008dece) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0008dece) main_mp2_pane_g

0x833b,	// (0x00086d1b) main_mp2_pane_t1_ParamLimits

0x833b,	// (0x00086d1b) main_mp2_pane_t1

0x8352,	// (0x00086d32) main_mp2_pane_t2_ParamLimits

0x8352,	// (0x00086d32) main_mp2_pane_t2

0x8366,	// (0x00086d46) main_mp2_pane_t3_ParamLimits

0x8366,	// (0x00086d46) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0008ded5) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0008ded5) main_mp2_pane_t

0xee51,	// (0x0008d831) pec_content_pane_ParamLimits

0xee51,	// (0x0008d831) pec_content_pane

0xe4fd,	// (0x0008cedd) scroll_pane_cp015

0xee63,	// (0x0008d843) pec_attribute_pane_ParamLimits

0xee63,	// (0x0008d843) pec_attribute_pane

0x8378,	// (0x00086d58) pec_content_pane_g1_ParamLimits

0x8378,	// (0x00086d58) pec_content_pane_g1

0xee73,	// (0x0008d853) pec_content_pane_t1_ParamLimits

0xee73,	// (0x0008d853) pec_content_pane_t1

0xee85,	// (0x0008d865) pec_content_pane_t2_ParamLimits

0xee85,	// (0x0008d865) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0008dedc) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0008dedc) pec_content_pane_t

0x8384,	// (0x00086d64) list_single_graphic_pane_cp01_ParamLimits

0x8384,	// (0x00086d64) list_single_graphic_pane_cp01

0xe0e4,	// (0x0008cac4) bg_popup_sub_pane_cp04

0xee97,	// (0x0008d877) popup_mup_playback_window_g1

0xeea3,	// (0x0008d883) popup_mup_playback_window_t1

0xeeb8,	// (0x0008d898) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0008dee1) popup_mup_playback_window_t

0xeeef,	// (0x0008d8cf) main_image_pane_g1_ParamLimits

0xeeef,	// (0x0008d8cf) main_image_pane_g1

0xef32,	// (0x0008d912) scroll_pane_cp018_ParamLimits

0xef32,	// (0x0008d912) scroll_pane_cp018

0xef4a,	// (0x0008d92a) scroll_pane_cp016_ParamLimits

0xef4a,	// (0x0008d92a) scroll_pane_cp016

0x841d,	// (0x00086dfd) smil2_image_pane_ParamLimits

0x841d,	// (0x00086dfd) smil2_image_pane

0x844d,	// (0x00086e2d) smil2_root_pane_ParamLimits

0x844d,	// (0x00086e2d) smil2_root_pane

0x8479,	// (0x00086e59) smil2_text_pane_ParamLimits

0x8479,	// (0x00086e59) smil2_text_pane

0xde89,	// (0x0008c869) bg_list_pane_cp06

0xef86,	// (0x0008d966) grid_radio_pane

0xde89,	// (0x0008c869) bg_popup_window_pane_cp06

0xef8e,	// (0x0008d96e) main_fmradio_pane_t1

0xea2c,	// (0x0008d40c) heading_pane_cp04

0xef9c,	// (0x0008d97c) main_fmradio_pane_t2

0x141e,	// (0x0007fdfe) popup_cale_lunar_info_window_g1

0xefaa,	// (0x0008d98a) main_fmradio_pane_t3

0x1426,	// (0x0007fe06) popup_cale_lunar_info_window_g2

0xefb8,	// (0x0008d998) main_fmradio_pane_t4

0x0001,

0xefc6,	// (0x0008d9a6) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0008dfbc) popup_cale_lunar_info_window_g

0xf516,	// (0x0008def6) main_fmradio_pane_t

0xefd4,	// (0x0008d9b4) wait_bar_pane_cp03

0xefdc,	// (0x0008d9bc) cell_fmradio_pane_ParamLimits

0xefdc,	// (0x0008d9bc) cell_fmradio_pane

0xee43,	// (0x0008d823) cell_fmradio_pane_g1_ParamLimits

0xee43,	// (0x0008d823) cell_fmradio_pane_g1

0xde89,	// (0x0008c869) grid_highlight_pane_cp011

0xefef,	// (0x0008d9cf) poc_content_pane_ParamLimits

0xefef,	// (0x0008d9cf) poc_content_pane

0xf001,	// (0x0008d9e1) scroll_pane_cp019

0x84b9,	// (0x00086e99) popup_call_poc_act_window_ParamLimits

0x84b9,	// (0x00086e99) popup_call_poc_act_window

0x84c6,	// (0x00086ea6) popup_call_poc_inact_window_ParamLimits

0x84c6,	// (0x00086ea6) popup_call_poc_inact_window

0xf5b3,	// (0x0008df93) bg_popup_call_poc_act_pane_g

0x1396,	// (0x0007fd76) bg_popup_call_poc_inact_pane_g1

0x139e,	// (0x0007fd7e) bg_popup_call_poc_inact_pane_g2

0xf009,	// (0x0008d9e9) popup_call_poc_act_window_g2

0x13a6,	// (0x0007fd86) bg_popup_call_poc_inact_pane_g3

0x13ae,	// (0x0007fd8e) bg_popup_call_poc_inact_pane_g4

0x13b6,	// (0x0007fd96) bg_popup_call_poc_inact_pane_g5

0xf011,	// (0x0008d9f1) popup_call_poc_act_window_t1_ParamLimits

0xf011,	// (0x0008d9f1) popup_call_poc_act_window_t1

0xf039,	// (0x0008da19) popup_call_poc_act_window_t2_ParamLimits

0xf039,	// (0x0008da19) popup_call_poc_act_window_t2

0xf061,	// (0x0008da41) popup_call_poc_act_window_t3_ParamLimits

0xf061,	// (0x0008da41) popup_call_poc_act_window_t3

0xf089,	// (0x0008da69) popup_call_poc_act_window_t4_ParamLimits

0xf089,	// (0x0008da69) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0008df01) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0008df01) popup_call_poc_act_window_t

0x13be,	// (0x0007fd9e) bg_popup_call_poc_inact_pane_g6

0x13c6,	// (0x0007fda6) bg_popup_call_poc_inact_pane_g7

0x13ce,	// (0x0007fdae) bg_popup_call_poc_inact_pane_g8

0xf09b,	// (0x0008da7b) popup_call_poc_inact_window_g2

0x13d6,	// (0x0007fdb6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0008df80) bg_popup_call_poc_inact_pane_g

0xf0a3,	// (0x0008da83) popup_call_poc_inact_window_t1_ParamLimits

0xf0a3,	// (0x0008da83) popup_call_poc_inact_window_t1

0xf0b8,	// (0x0008da98) popup_call_poc_inact_window_t2_ParamLimits

0xf0b8,	// (0x0008da98) popup_call_poc_inact_window_t2

0x058a,	// (0x0007ef6a) popup_call_poc_inact_window_t3_ParamLimits

0x058a,	// (0x0007ef6a) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0008df0a) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0008df0a) popup_call_poc_inact_window_t

0x158e,	// (0x0007ff6e) context_pane_ParamLimits

0x8ab6,	// (0x00087496) signal_pane_ParamLimits

0xec98,	// (0x0008d678) main_call2_pane

0x157c,	// (0x0007ff5c) popup_phob_thumbnail2_window_ParamLimits

0x157c,	// (0x0007ff5c) popup_phob_thumbnail2_window

0x8193,	// (0x00086b73) aid_hotspot_pointer_arrow_pane

0x819b,	// (0x00086b7b) aid_hotspot_pointer_hand_pane

0x87e8,	// (0x000871c8) phob_pre_status_pane_g5

0x6553,	// (0x00084f33) cams_zoom_pane_ParamLimits

0x655f,	// (0x00084f3f) image_vga_pane_ParamLimits

0x656e,	// (0x00084f4e) main_camera_pane_g1_ParamLimits

0x657c,	// (0x00084f5c) main_camera_pane_g2_ParamLimits

0x6588,	// (0x00084f68) main_camera_pane_g3_ParamLimits

0x6594,	// (0x00084f74) main_camera_pane_g4_ParamLimits

0x65a0,	// (0x00084f80) main_camera_pane_g5_ParamLimits

0x65ac,	// (0x00084f8c) main_camera_pane_g6_ParamLimits

0x65b8,	// (0x00084f98) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0008dc09) main_camera_pane_g_ParamLimits

0x65c4,	// (0x00084fa4) main_camera_pane_t1_ParamLimits

0x65d6,	// (0x00084fb6) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0008dc1a) main_camera_pane_t_ParamLimits

0xe0e4,	// (0x0008cac4) bg_popup_preview_window_pane_cp01_ParamLimits

0xe0e4,	// (0x0008cac4) bg_popup_preview_window_pane_cp01

0x059f,	// (0x0007ef7f) popup_phob_thumbnail2_window_g1_ParamLimits

0x059f,	// (0x0007ef7f) popup_phob_thumbnail2_window_g1

0xde89,	// (0x0008c869) call2_cli_visual_pane

0x84e2,	// (0x00086ec2) popup_call2_audio_conf_window_ParamLimits

0x84e2,	// (0x00086ec2) popup_call2_audio_conf_window

0x84f7,	// (0x00086ed7) popup_call2_audio_first_window_ParamLimits

0x84f7,	// (0x00086ed7) popup_call2_audio_first_window

0x8595,	// (0x00086f75) popup_call2_audio_in_window_ParamLimits

0x8595,	// (0x00086f75) popup_call2_audio_in_window

0x85d7,	// (0x00086fb7) popup_call2_audio_out_window_ParamLimits

0x85d7,	// (0x00086fb7) popup_call2_audio_out_window

0x8639,	// (0x00087019) popup_call2_audio_second_window_ParamLimits

0x8639,	// (0x00087019) popup_call2_audio_second_window

0x8697,	// (0x00087077) popup_call2_audio_wait_window_ParamLimits

0x8697,	// (0x00087077) popup_call2_audio_wait_window

0xde89,	// (0x0008c869) bg_popup_call2_act_pane_cp03

0xe0c6,	// (0x0008caa6) list_conf_pane_cp

0x05ab,	// (0x0007ef8b) popup_call2_audio_conf_window_t1

0xea89,	// (0x0008d469) list_single_graphic_popup_conf2_pane_ParamLimits

0xea89,	// (0x0008d469) list_single_graphic_popup_conf2_pane

0xea9c,	// (0x0008d47c) list_highlight_pane_cp04

0x05b9,	// (0x0007ef99) list_single_graphic_popup_conf2_pane_g1

0xeaad,	// (0x0008d48d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0008df11) list_single_graphic_popup_conf2_pane_g

0x05c3,	// (0x0007efa3) list_single_graphic_popup_conf2_pane_t1

0x05d1,	// (0x0007efb1) bg_popup_call2_act_pane_cp01_ParamLimits

0x05d1,	// (0x0007efb1) bg_popup_call2_act_pane_cp01

0x065b,	// (0x0007f03b) call_type_pane_cp05_ParamLimits

0x065b,	// (0x0007f03b) call_type_pane_cp05

0x06af,	// (0x0007f08f) popup_call2_audio_second_window_g1_ParamLimits

0x06af,	// (0x0007f08f) popup_call2_audio_second_window_g1

0x0703,	// (0x0007f0e3) popup_call2_audio_second_window_g2_ParamLimits

0x0703,	// (0x0007f0e3) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0008df16) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0008df16) popup_call2_audio_second_window_g

0x0768,	// (0x0007f148) popup_call2_audio_second_window_t1_ParamLimits

0x0768,	// (0x0007f148) popup_call2_audio_second_window_t1

0x0823,	// (0x0007f203) popup_call2_audio_second_window_t2_ParamLimits

0x0823,	// (0x0007f203) popup_call2_audio_second_window_t2

0x0876,	// (0x0007f256) popup_call2_audio_second_window_t3_ParamLimits

0x0876,	// (0x0007f256) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0008df1d) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0008df1d) popup_call2_audio_second_window_t

0xde89,	// (0x0008c869) bg_popup_call2_in_pane_cp02

0xde93,	// (0x0008c873) call_type_pane_cp04

0xde9b,	// (0x0008c87b) popup_call2_audio_wait_window_g1

0xdea3,	// (0x0008c883) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0008daf6) popup_call2_audio_wait_window_g

0xdeab,	// (0x0008c88b) popup_call2_audio_wait_window_t3

0x0969,	// (0x0007f349) bg_popup_call2_act_pane_ParamLimits

0x0969,	// (0x0007f349) bg_popup_call2_act_pane

0x0a29,	// (0x0007f409) call_type_pane_cp03_ParamLimits

0x0a29,	// (0x0007f409) call_type_pane_cp03

0x0a8d,	// (0x0007f46d) popup_call2_audio_first_window_g1_ParamLimits

0x0a8d,	// (0x0007f46d) popup_call2_audio_first_window_g1

0x0afd,	// (0x0007f4dd) popup_call2_audio_first_window_g2_ParamLimits

0x0afd,	// (0x0007f4dd) popup_call2_audio_first_window_g2

0xe9b5,	// (0x0008d395) popup_call2_audio_first_window_g3_ParamLimits

0xe9b5,	// (0x0008d395) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0008df26) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0008df26) popup_call2_audio_first_window_g

0x0bdb,	// (0x0007f5bb) popup_call2_audio_first_window_t1_ParamLimits

0x0bdb,	// (0x0007f5bb) popup_call2_audio_first_window_t1

0x0cde,	// (0x0007f6be) popup_call2_audio_first_window_t4_ParamLimits

0x0cde,	// (0x0007f6be) popup_call2_audio_first_window_t4

0x0dc1,	// (0x0007f7a1) popup_call2_audio_first_window_t5_ParamLimits

0x0dc1,	// (0x0007f7a1) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0008df31) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0008df31) popup_call2_audio_first_window_t

0xe0dc,	// (0x0008cabc) bg_popup_call2_act_pane_g1

0x142e,	// (0x0007fe0e) popup_cale_lunar_info_window_t1

0x143c,	// (0x0007fe1c) popup_cale_lunar_info_window_t2

0x144a,	// (0x0007fe2a) popup_cale_lunar_info_window_t3

0xde89,	// (0x0008c869) bg_popup_call2_bubble_pane

0x0ec2,	// (0x0007f8a2) bg_popup_call2_in_pane_cp01_ParamLimits

0x0ec2,	// (0x0007f8a2) bg_popup_call2_in_pane_cp01

0xdb65,	// (0x0008c545) call_type_pane_cp02

0x0f0a,	// (0x0007f8ea) popup_call2_audio_out_window_g1_ParamLimits

0x0f0a,	// (0x0007f8ea) popup_call2_audio_out_window_g1

0x0f36,	// (0x0007f916) popup_call2_audio_out_window_g2_ParamLimits

0x0f36,	// (0x0007f916) popup_call2_audio_out_window_g2

0x0f5e,	// (0x0007f93e) popup_call2_audio_out_window_g3_ParamLimits

0x0f5e,	// (0x0007f93e) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0008df3a) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0008df3a) popup_call2_audio_out_window_g

0x0f99,	// (0x0007f979) popup_call2_audio_out_window_t1_ParamLimits

0x0f99,	// (0x0007f979) popup_call2_audio_out_window_t1

0x0ff8,	// (0x0007f9d8) popup_call2_audio_out_window_t2_ParamLimits

0x0ff8,	// (0x0007f9d8) popup_call2_audio_out_window_t2

0x104c,	// (0x0007fa2c) popup_call2_audio_out_window_t3_ParamLimits

0x104c,	// (0x0007fa2c) popup_call2_audio_out_window_t3

0x1062,	// (0x0007fa42) popup_call2_audio_out_window_t4_ParamLimits

0x1062,	// (0x0007fa42) popup_call2_audio_out_window_t4

0x1078,	// (0x0007fa58) popup_call2_audio_out_window_t5_ParamLimits

0x1078,	// (0x0007fa58) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0008df43) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0008df43) popup_call2_audio_out_window_t

0x10dc,	// (0x0007fabc) bg_popup_call2_in_pane_ParamLimits

0x10dc,	// (0x0007fabc) bg_popup_call2_in_pane

0x1138,	// (0x0007fb18) popup_call2_audio_in_window_g1_ParamLimits

0x1138,	// (0x0007fb18) popup_call2_audio_in_window_g1

0x1170,	// (0x0007fb50) popup_call2_audio_in_window_g2_ParamLimits

0x1170,	// (0x0007fb50) popup_call2_audio_in_window_g2

0x11a8,	// (0x0007fb88) popup_call2_audio_in_window_g3_ParamLimits

0x11a8,	// (0x0007fb88) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0008df50) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0008df50) popup_call2_audio_in_window_g

0x1200,	// (0x0007fbe0) popup_call2_audio_in_window_t1_ParamLimits

0x1200,	// (0x0007fbe0) popup_call2_audio_in_window_t1

0x1280,	// (0x0007fc60) popup_call2_audio_in_window_t2_ParamLimits

0x1280,	// (0x0007fc60) popup_call2_audio_in_window_t2

0x1300,	// (0x0007fce0) popup_call2_audio_in_window_t3_ParamLimits

0x1300,	// (0x0007fce0) popup_call2_audio_in_window_t3

0x131a,	// (0x0007fcfa) popup_call2_audio_in_window_t4_ParamLimits

0x131a,	// (0x0007fcfa) popup_call2_audio_in_window_t4

0x132c,	// (0x0007fd0c) popup_call2_audio_in_window_t5_ParamLimits

0x132c,	// (0x0007fd0c) popup_call2_audio_in_window_t5

0x1341,	// (0x0007fd21) popup_call2_audio_in_window_t6_ParamLimits

0x1341,	// (0x0007fd21) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0008df59) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0008df59) popup_call2_audio_in_window_t

0xe0dc,	// (0x0008cabc) bg_popup_call2_in_pane_g1

0x1458,	// (0x0007fe38) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0008dfc1) popup_cale_lunar_info_window_t

0xe0e4,	// (0x0008cac4) bg_popup_call2_rect_pane_ParamLimits

0xe0e4,	// (0x0008cac4) bg_popup_call2_rect_pane

0xde89,	// (0x0008c869) call2_cli_visual_graphic_pane

0xde89,	// (0x0008c869) call2_cli_visual_text_pane

0x8b5c,	// (0x0008753c) smil_status_volume_pane_g3

0x0002,

0xe20c,	// (0x0008cbec) call2_cli_visual_graphic_pane_g1

0xe20c,	// (0x0008cbec) call2_cli_visual_graphic_pane_g2

0xe20c,	// (0x0008cbec) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0008df66) call2_cli_visual_graphic_pane_g

0x1356,	// (0x0007fd36) bg_popup_call2_rect_pane_g1

0xe298,	// (0x0008cc78) bg_popup_call2_rect_pane_g2

0x135e,	// (0x0007fd3e) bg_popup_call2_rect_pane_g3

0x1366,	// (0x0007fd46) bg_popup_call2_rect_pane_g4

0x136e,	// (0x0007fd4e) bg_popup_call2_rect_pane_g5

0x1376,	// (0x0007fd56) bg_popup_call2_rect_pane_g6

0x137e,	// (0x0007fd5e) bg_popup_call2_rect_pane_g7

0x1386,	// (0x0007fd66) bg_popup_call2_rect_pane_g8

0x138e,	// (0x0007fd6e) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0008df6d) bg_popup_call2_rect_pane_g

0x1396,	// (0x0007fd76) bg_popup_call2_bubble_pane_g1

0x139e,	// (0x0007fd7e) bg_popup_call2_bubble_pane_g2

0x13a6,	// (0x0007fd86) bg_popup_call2_bubble_pane_g3

0x13ae,	// (0x0007fd8e) bg_popup_call2_bubble_pane_g4

0x13b6,	// (0x0007fd96) bg_popup_call2_bubble_pane_g5

0x13be,	// (0x0007fd9e) bg_popup_call2_bubble_pane_g6

0x13c6,	// (0x0007fda6) bg_popup_call2_bubble_pane_g7

0x13ce,	// (0x0007fdae) bg_popup_call2_bubble_pane_g8

0x13d6,	// (0x0007fdb6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0008df80) bg_popup_call2_bubble_pane_g

0x60cc,	// (0x00084aac) aid_cale_week_size_cell_pane

0x65e8,	// (0x00084fc8) aid_cams_cif_uncrop_pane_ParamLimits

0x65e8,	// (0x00084fc8) aid_cams_cif_uncrop_pane

0x6743,	// (0x00085123) aid_cams_size_cell_ParamLimits

0x6743,	// (0x00085123) aid_cams_size_cell

0x674f,	// (0x0008512f) grid_cams_pane_ParamLimits

0x675d,	// (0x0008513d) linegrid_cams_pane_ParamLimits

0x688b,	// (0x0008526b) call_video_pane_t1

0x68ac,	// (0x0008528c) call_video_pane_t2

0x0001,

0xf28d,	// (0x0008dc6d) call_video_pane_t

0x6de3,	// (0x000857c3) aid_cale_month_size_cell_pane_ParamLimits

0x6de3,	// (0x000857c3) aid_cale_month_size_cell_pane

0xf62a,	// (0x0008e00a) smil_status_volume_pane_g

0x8b69,	// (0x00087549) volume_smil_pane_ParamLimits

0x01db,	// (0x0007ebbb) aid_popup2_width_pane

0x5fc6,	// (0x000849a6) cell_qdial_pane_g4_ParamLimits

0x5fc6,	// (0x000849a6) cell_qdial_pane_g4

0x7a60,	// (0x00086440) aid_blid_cardinal_pane_ParamLimits

0x7a70,	// (0x00086450) aid_blid_destination_pane_ParamLimits

0x7a70,	// (0x00086450) aid_blid_destination_pane

0xe0e4,	// (0x0008cac4) bg_popup_call_poc_act_pane_ParamLimits

0xe0e4,	// (0x0008cac4) bg_popup_call_poc_act_pane

0xe0e4,	// (0x0008cac4) bg_popup_call_poc_inact_pane_ParamLimits

0xe0e4,	// (0x0008cac4) bg_popup_call_poc_inact_pane

0x13de,	// (0x0007fdbe) bg_popup_call_poc_act_pane_g1

0x13e6,	// (0x0007fdc6) bg_popup_call_poc_act_pane_g2

0x13ee,	// (0x0007fdce) bg_popup_call_poc_act_pane_g3

0x13ae,	// (0x0007fd8e) bg_popup_call_poc_act_pane_g4

0x13b6,	// (0x0007fd96) bg_popup_call_poc_act_pane_g5

0x13f6,	// (0x0007fdd6) bg_popup_call_poc_act_pane_g6

0x13c6,	// (0x0007fda6) bg_popup_call_poc_act_pane_g7

0x13fe,	// (0x0007fdde) bg_popup_call_poc_act_pane_g8

0xde89,	// (0x0008c869) main_usb_pane

0x1557,	// (0x0007ff37) popup_cale_lunar_info_window

0x6bd7,	// (0x000855b7) im_reading_pane_t1_ParamLimits

0xe455,	// (0x0008ce35) list_im_pane_ParamLimits

0xe466,	// (0x0008ce46) scroll_pane_cp07_ParamLimits

0xde89,	// (0x0008c869) grid_highlight_pane_cp012

0xe0e4,	// (0x0008cac4) mup_scale_pane_ParamLimits

0xe9b5,	// (0x0008d395) main_usb_pane_g1_ParamLimits

0xe9b5,	// (0x0008d395) main_usb_pane_g1

0x870b,	// (0x000870eb) main_usb_pane_g2_ParamLimits

0x870b,	// (0x000870eb) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0008dfaa) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0008dfaa) main_usb_pane_g

0x8717,	// (0x000870f7) main_usb_pane_t1_ParamLimits

0x8717,	// (0x000870f7) main_usb_pane_t1

0x8729,	// (0x00087109) main_usb_pane_t2_ParamLimits

0x8729,	// (0x00087109) main_usb_pane_t2

0x873b,	// (0x0008711b) main_usb_pane_t3_ParamLimits

0x873b,	// (0x0008711b) main_usb_pane_t3

0x874d,	// (0x0008712d) main_usb_pane_t4_ParamLimits

0x874d,	// (0x0008712d) main_usb_pane_t4

0x875f,	// (0x0008713f) main_usb_pane_t5_ParamLimits

0x875f,	// (0x0008713f) main_usb_pane_t5

0x8771,	// (0x00087151) main_usb_pane_t6_ParamLimits

0x8771,	// (0x00087151) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0008dfaf) main_usb_pane_t_ParamLimits

0x7a06,	// (0x000863e6) aid_text_placing

0x7a12,	// (0x000863f2) main_location2_pane_t1_ParamLimits

0x7a26,	// (0x00086406) main_location2_pane_t2_ParamLimits

0x7a3a,	// (0x0008641a) main_location2_pane_t3_ParamLimits

0x7a4e,	// (0x0008642e) main_location2_pane_t4_ParamLimits

0x7a4e,	// (0x0008642e) main_location2_pane_t4

0xf3ee,	// (0x0008ddce) main_location2_pane_t_ParamLimits

0xe120,	// (0x0008cb00) find_pinb_pane_g2_ParamLimits

0xe120,	// (0x0008cb00) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0008db1c) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0008db1c) find_pinb_pane_g

0xe12c,	// (0x0008cb0c) find_pinb_pane_t1_ParamLimits

0xe13e,	// (0x0008cb1e) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0008db21) find_pinb_pane_t_ParamLimits

0xde89,	// (0x0008c869) main_call3_pane

0x71ef,	// (0x00085bcf) cale_month_day_heading_pane_t1_ParamLimits

0x724d,	// (0x00085c2d) cale_month_day_heading_pane_t2_ParamLimits

0x72b2,	// (0x00085c92) cale_month_day_heading_pane_t3_ParamLimits

0x7317,	// (0x00085cf7) cale_month_day_heading_pane_t4_ParamLimits

0x737c,	// (0x00085d5c) cale_month_day_heading_pane_t5_ParamLimits

0x73e1,	// (0x00085dc1) cale_month_day_heading_pane_t6_ParamLimits

0x7446,	// (0x00085e26) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0008dca5) cale_month_day_heading_pane_t_ParamLimits

0xe6a6,	// (0x0008d086) smil_status_volume_pane

0x82cf,	// (0x00086caf) postcard_address_pane_ParamLimits

0x82cf,	// (0x00086caf) postcard_address_pane

0x82db,	// (0x00086cbb) postcard_message_pane_ParamLimits

0x82db,	// (0x00086cbb) postcard_message_pane

0x86d6,	// (0x000870b6) call2_cli_visual_pane_t1_ParamLimits

0x86d6,	// (0x000870b6) call2_cli_visual_pane_t1

0x8cc0,	// (0x000876a0) postcard_message_pane_t1_ParamLimits

0x8cc0,	// (0x000876a0) postcard_message_pane_t1

0x8ca9,	// (0x00087689) postcard_address_pane_t1_ParamLimits

0x8ca9,	// (0x00087689) postcard_address_pane_t1

0x8c9a,	// (0x0008767a) popup_call3_audio_in_window_ParamLimits

0x8c9a,	// (0x0008767a) popup_call3_audio_in_window

0x8b7e,	// (0x0008755e) bg_popup_call3_in_pane_ParamLimits

0x8b7e,	// (0x0008755e) bg_popup_call3_in_pane

0x8be0,	// (0x000875c0) popup_call3_audio_in_window_g1_ParamLimits

0x8be0,	// (0x000875c0) popup_call3_audio_in_window_g1

0x8bf8,	// (0x000875d8) popup_call3_audio_in_window_g2_ParamLimits

0x8bf8,	// (0x000875d8) popup_call3_audio_in_window_g2

0x8c10,	// (0x000875f0) popup_call3_audio_in_window_g3_ParamLimits

0x8c10,	// (0x000875f0) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0008e011) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0008e011) popup_call3_audio_in_window_g

0x8c38,	// (0x00087618) popup_call3_audio_in_window_t1_ParamLimits

0x8c38,	// (0x00087618) popup_call3_audio_in_window_t1

0x8c60,	// (0x00087640) popup_call3_audio_in_window_t2_ParamLimits

0x8c60,	// (0x00087640) popup_call3_audio_in_window_t2

0x8c88,	// (0x00087668) popup_call3_audio_in_window_t3_ParamLimits

0x8c88,	// (0x00087668) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0008e01a) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0008e01a) popup_call3_audio_in_window_t

0xec98,	// (0x0008d678) bg_popup_call3_rect_pane

0x1356,	// (0x0007fd36) bg_popup_call3_rect_pane_g1

0xe298,	// (0x0008cc78) bg_popup_call3_rect_pane_g2

0x135e,	// (0x0007fd3e) bg_popup_call3_rect_pane_g3

0x1366,	// (0x0007fd46) bg_popup_call3_rect_pane_g4

0x136e,	// (0x0007fd4e) bg_popup_call3_rect_pane_g5

0x1376,	// (0x0007fd56) bg_popup_call3_rect_pane_g6

0x137e,	// (0x0007fd5e) bg_popup_call3_rect_pane_g7

0x7e76,	// (0x00086856) mup_visualizer_osc_pane

0xed57,	// (0x0008d737) mup_visualizer_spec_pane

0x8b9e,	// (0x0008757e) call3_video_qcif_pane_ParamLimits

0x8b9e,	// (0x0008757e) call3_video_qcif_pane

0x8bb0,	// (0x00087590) call3_video_qcif_uncrop_pane_ParamLimits

0x8bb0,	// (0x00087590) call3_video_qcif_uncrop_pane

0x8bbe,	// (0x0008759e) call3_video_subqcif_pane_ParamLimits

0x8bbe,	// (0x0008759e) call3_video_subqcif_pane

0x8bd0,	// (0x000875b0) call3_video_subqcif_uncrop_pane_ParamLimits

0x8bd0,	// (0x000875b0) call3_video_subqcif_uncrop_pane

0x8c28,	// (0x00087608) popup_call3_audio_in_window_g4_ParamLimits

0x8c28,	// (0x00087608) popup_call3_audio_in_window_g4

0x8b4b,	// (0x0008752b) mup_spec_half_pane

0x8b54,	// (0x00087534) mup_spec_half_pane_cp

0x15ee,	// (0x0007ffce) mup_osc_middle_pane

0x15f7,	// (0x0007ffd7) mup_visualizer_osc_pane_g1

0x8b2c,	// (0x0008750c) mup_spec_bar_pane_ParamLimits

0x8b2c,	// (0x0008750c) mup_spec_bar_pane

0x15db,	// (0x0007ffbb) mup_spec_bar_pane_g1

0x15e5,	// (0x0007ffc5) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0008e005) mup_spec_bar_pane_g

0x60cc,	// (0x00084aac) aid_cale_week_size_cell_pane_ParamLimits

0x60df,	// (0x00084abf) bg_cale_heading_pane_ParamLimits

0xe2cc,	// (0x0008ccac) bg_cale_pane_cp01_ParamLimits

0x60fb,	// (0x00084adb) cale_week_corner_pane_ParamLimits

0x6111,	// (0x00084af1) cale_week_day_heading_pane_ParamLimits

0x612d,	// (0x00084b0d) cale_week_scroll_pane_g1_ParamLimits

0x6146,	// (0x00084b26) cale_week_scroll_pane_g2_ParamLimits

0x6157,	// (0x00084b37) cale_week_scroll_pane_g3_ParamLimits

0x6168,	// (0x00084b48) cale_week_scroll_pane_g4_ParamLimits

0x6179,	// (0x00084b59) cale_week_scroll_pane_g5_ParamLimits

0x618a,	// (0x00084b6a) cale_week_scroll_pane_g6_ParamLimits

0x619b,	// (0x00084b7b) cale_week_scroll_pane_g7_ParamLimits

0x61ae,	// (0x00084b8e) cale_week_scroll_pane_g8_ParamLimits

0x61c1,	// (0x00084ba1) cale_week_scroll_pane_g9_ParamLimits

0x61d2,	// (0x00084bb2) cale_week_scroll_pane_g10_ParamLimits

0x61e3,	// (0x00084bc3) cale_week_scroll_pane_g11_ParamLimits

0x61f4,	// (0x00084bd4) cale_week_scroll_pane_g12_ParamLimits

0x6205,	// (0x00084be5) cale_week_scroll_pane_g13_ParamLimits

0x621e,	// (0x00084bfe) cale_week_scroll_pane_g14_ParamLimits

0x6237,	// (0x00084c17) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0008dbad) cale_week_scroll_pane_g_ParamLimits

0x6250,	// (0x00084c30) cale_week_time_pane_ParamLimits

0x6263,	// (0x00084c43) grid_cale_week_pane_ParamLimits

0xe2e5,	// (0x0008ccc5) listscroll_cale_week_pane_t1

0x6280,	// (0x00084c60) scroll_pane_cp08_ParamLimits

0x6e34,	// (0x00085814) cale_month_corner_pane_ParamLimits

0xe67c,	// (0x0008d05c) cale_month_pane_t1

0x719e,	// (0x00085b7e) cale_month_week_pane_ParamLimits

0xe9b5,	// (0x0008d395) popup_call_status_window_g1_ParamLimits

0x7829,	// (0x00086209) popup_call_status_window_g2_ParamLimits

0x7835,	// (0x00086215) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0008dd55) popup_call_status_window_g_ParamLimits

0xea1c,	// (0x0008d3fc) aid_call2_pane

0x810e,	// (0x00086aee) msg_header_pane_g1

0x82cf,	// (0x00086caf) postcard_address2_pane_ParamLimits

0x82cf,	// (0x00086caf) postcard_address2_pane

0x82db,	// (0x00086cbb) postcard_message2_pane_ParamLimits

0x82db,	// (0x00086cbb) postcard_message2_pane

0x8ac4,	// (0x000874a4) message2_row_pane_ParamLimits

0x8ac4,	// (0x000874a4) message2_row_pane

0x8adf,	// (0x000874bf) address2_row_pane_ParamLimits

0x8adf,	// (0x000874bf) address2_row_pane

0x15a9,	// (0x0007ff89) postcard_message2_row_pane_g1

0x15b1,	// (0x0007ff91) postcard_message2_row_pane_t1

0x15a9,	// (0x0007ff89) address2_row_pane_g1

0x15b1,	// (0x0007ff91) address2_row_pane_t1

0x64b4,	// (0x00084e94) aid_size_cell_vorec

0xde89,	// (0x0008c869) main_rss_pane

0x8af2,	// (0x000874d2) rss_list_single_pane_ParamLimits

0x8af2,	// (0x000874d2) rss_list_single_pane

0x15bf,	// (0x0007ff9f) rss_list_single_pane_t1

0x15cd,	// (0x0007ffad) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0008e000) rss_list_single_pane_t

0xde89,	// (0x0008c869) main_camera2_pane

0xde89,	// (0x0008c869) main_video2_pane

0x8d24,	// (0x00087704) cams_zoom_pane_cp2_ParamLimits

0x8d24,	// (0x00087704) cams_zoom_pane_cp2

0x8d30,	// (0x00087710) image2_vga_pane_ParamLimits

0x8d30,	// (0x00087710) image2_vga_pane

0x8d3f,	// (0x0008771f) main_camera2_pane_g1_ParamLimits

0x8d3f,	// (0x0008771f) main_camera2_pane_g1

0x8d4b,	// (0x0008772b) main_camera2_pane_g2_ParamLimits

0x8d4b,	// (0x0008772b) main_camera2_pane_g2

0x8d57,	// (0x00087737) main_camera2_pane_g3_ParamLimits

0x8d57,	// (0x00087737) main_camera2_pane_g3

0x8d63,	// (0x00087743) main_camera2_pane_g4_ParamLimits

0x8d63,	// (0x00087743) main_camera2_pane_g4

0x8d6f,	// (0x0008774f) main_camera2_pane_g5_ParamLimits

0x8d6f,	// (0x0008774f) main_camera2_pane_g5

0x8d7b,	// (0x0008775b) main_camera2_pane_g6_ParamLimits

0x8d7b,	// (0x0008775b) main_camera2_pane_g6

0x8d87,	// (0x00087767) main_camera2_pane_g7_ParamLimits

0x8d87,	// (0x00087767) main_camera2_pane_g7

0x8d93,	// (0x00087773) main_camera2_pane_g8_ParamLimits

0x8d93,	// (0x00087773) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0008e021) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0008e021) main_camera2_pane_g

0x8dab,	// (0x0008778b) main_camera2_pane_t1_ParamLimits

0x8dab,	// (0x0008778b) main_camera2_pane_t1

0x8dbd,	// (0x0008779d) main_camera2_pane_t2_ParamLimits

0x8dbd,	// (0x0008779d) main_camera2_pane_t2

0x8dcf,	// (0x000877af) main_camera2_pane_t3_ParamLimits

0x8dcf,	// (0x000877af) main_camera2_pane_t3

0x8de1,	// (0x000877c1) main_camera2_pane_t4_ParamLimits

0x8de1,	// (0x000877c1) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0008e034) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0008e034) main_camera2_pane_t

0x8e43,	// (0x00087823) cams_zoom_pane_cp4_ParamLimits

0x8e43,	// (0x00087823) cams_zoom_pane_cp4

0x8e53,	// (0x00087833) image2_cif_pane_ParamLimits

0x8e53,	// (0x00087833) image2_cif_pane

0x8e68,	// (0x00087848) image2_subqcif_pane_ParamLimits

0x8e68,	// (0x00087848) image2_subqcif_pane

0x8e77,	// (0x00087857) main_video2_pane_g1_ParamLimits

0x8e77,	// (0x00087857) main_video2_pane_g1

0x8e89,	// (0x00087869) main_video2_pane_g2_ParamLimits

0x8e89,	// (0x00087869) main_video2_pane_g2

0x8e99,	// (0x00087879) main_video2_pane_g3_ParamLimits

0x8e99,	// (0x00087879) main_video2_pane_g3

0x8ea9,	// (0x00087889) main_video2_pane_g4_ParamLimits

0x8ea9,	// (0x00087889) main_video2_pane_g4

0x8eb9,	// (0x00087899) main_video2_pane_g5_ParamLimits

0x8eb9,	// (0x00087899) main_video2_pane_g5

0x8ec9,	// (0x000878a9) main_video2_pane_g6_ParamLimits

0x8ec9,	// (0x000878a9) main_video2_pane_g6

0x0005,

0xf663,	// (0x0008e043) main_video2_pane_g_ParamLimits

0xf663,	// (0x0008e043) main_video2_pane_g

0x8edb,	// (0x000878bb) main_video2_pane_t1_ParamLimits

0x8edb,	// (0x000878bb) main_video2_pane_t1

0x8ef5,	// (0x000878d5) main_video2_pane_t2_ParamLimits

0x8ef5,	// (0x000878d5) main_video2_pane_t2

0x8f1b,	// (0x000878fb) main_video2_pane_t3_ParamLimits

0x8f1b,	// (0x000878fb) main_video2_pane_t3

0x0002,

0xf670,	// (0x0008e050) main_video2_pane_t_ParamLimits

0xf670,	// (0x0008e050) main_video2_pane_t

0x8828,	// (0x00087208) call_muted_g2

0x0001,

0xf612,	// (0x0008dff2) call_muted_g

0xde89,	// (0x0008c869) main_mup2_pane

0x167e,	// (0x0008005e) main_mup2_pane_g1_ParamLimits

0x167e,	// (0x0008005e) main_mup2_pane_g1

0x8f41,	// (0x00087921) main_mup2_pane_g2_ParamLimits

0x8f41,	// (0x00087921) main_mup2_pane_g2

0x91c3,	// (0x00087ba3) main_mup_pane_g13_cp1

0x91cb,	// (0x00087bab) mup_volume_pane_cp1

0x8f61,	// (0x00087941) main_mup2_pane_g4_ParamLimits

0x8f61,	// (0x00087941) main_mup2_pane_g4

0x8f76,	// (0x00087956) main_mup2_pane_g5_ParamLimits

0x8f76,	// (0x00087956) main_mup2_pane_g5

0x8f8b,	// (0x0008796b) main_mup2_pane_g6_ParamLimits

0x8f8b,	// (0x0008796b) main_mup2_pane_g6

0x8fa0,	// (0x00087980) main_mup2_pane_g7_ParamLimits

0x8fa0,	// (0x00087980) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0008e057) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0008e057) main_mup2_pane_g

0x8fbc,	// (0x0008799c) main_mup2_pane_t1_ParamLimits

0x8fbc,	// (0x0008799c) main_mup2_pane_t1

0x8fd3,	// (0x000879b3) main_mup2_pane_t2_ParamLimits

0x8fd3,	// (0x000879b3) main_mup2_pane_t2

0x8fea,	// (0x000879ca) main_mup2_pane_t3_ParamLimits

0x8fea,	// (0x000879ca) main_mup2_pane_t3

0x9001,	// (0x000879e1) main_mup2_pane_t4_ParamLimits

0x9001,	// (0x000879e1) main_mup2_pane_t4

0x901b,	// (0x000879fb) main_mup2_pane_t5_ParamLimits

0x901b,	// (0x000879fb) main_mup2_pane_t5

0x9035,	// (0x00087a15) main_mup2_pane_t6_ParamLimits

0x9035,	// (0x00087a15) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0008e066) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0008e066) main_mup2_pane_t

0x906d,	// (0x00087a4d) mup2_visualizer_pane_ParamLimits

0x906d,	// (0x00087a4d) mup2_visualizer_pane

0x90a3,	// (0x00087a83) mup_progress_pane_cp_ParamLimits

0x90a3,	// (0x00087a83) mup_progress_pane_cp

0x91ae,	// (0x00087b8e) mup_volume_pane_cp_ParamLimits

0x91ae,	// (0x00087b8e) mup_volume_pane_cp

0x90ba,	// (0x00087a9a) mup2_visualizer_pane_g1_ParamLimits

0x90ba,	// (0x00087a9a) mup2_visualizer_pane_g1

0x1650,	// (0x00080030) mup2_visualizer_pane_g2_ParamLimits

0x1650,	// (0x00080030) mup2_visualizer_pane_g2

0x90cf,	// (0x00087aaf) mup2_visualizer_pane_g3_ParamLimits

0x90cf,	// (0x00087aaf) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0008e073) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0008e073) mup2_visualizer_pane_g

0xef7e,	// (0x0008d95e) aid_size_cell_fmradio

0x893e,	// (0x0008731e) aid_height_parent_landcape

0xe4e4,	// (0x0008cec4) wml_content_pane_cp

0xe4ec,	// (0x0008cecc) wml_tabs_pane

0xe4f5,	// (0x0008ced5) popup_wml_miniature_window

0xe4fd,	// (0x0008cedd) scroll_pane_cp021

0xe511,	// (0x0008cef1) wml_content_pane_comp8

0xde89,	// (0x0008c869) bg_popup_sub_pane_cp05

0x166e,	// (0x0008004e) popup_wml_miniature_window_g1

0x1676,	// (0x00080056) wml_miniature_view_pane

0x90dd,	// (0x00087abd) aid_size_wml_view

0x90e5,	// (0x00087ac5) wml_miniature_view_pane_g1

0x90ee,	// (0x00087ace) wml_miniature_view_pane_g2

0x90f7,	// (0x00087ad7) wml_miniature_view_pane_g3

0x90ff,	// (0x00087adf) wml_miniature_view_pane_g4

0x9107,	// (0x00087ae7) wml_miniature_view_pane_g5

0x910f,	// (0x00087aef) wml_miniature_view_pane_g6

0x9117,	// (0x00087af7) wml_miniature_view_pane_g7

0x911f,	// (0x00087aff) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0008e07a) wml_miniature_view_pane_g

0x167e,	// (0x0008005e) background_graphic_ParamLimits

0x167e,	// (0x0008005e) background_graphic

0x168a,	// (0x0008006a) wml_tabs_2_pane

0x1693,	// (0x00080073) wml_tabs_3_pane_ParamLimits

0x1693,	// (0x00080073) wml_tabs_3_pane

0x16a5,	// (0x00080085) wml_tabs_4_pane_ParamLimits

0x16a5,	// (0x00080085) wml_tabs_4_pane

0x16bb,	// (0x0008009b) wml_tabs_5_pane_ParamLimits

0x16bb,	// (0x0008009b) wml_tabs_5_pane

0x16d5,	// (0x000800b5) wml_tabs_pane_g2_ParamLimits

0x16d5,	// (0x000800b5) wml_tabs_pane_g2

0x16e9,	// (0x000800c9) wml_tabs_pane_g3_ParamLimits

0x16e9,	// (0x000800c9) wml_tabs_pane_g3

0x9127,	// (0x00087b07) wml_tabs_2_active_pane_ParamLimits

0x9127,	// (0x00087b07) wml_tabs_2_active_pane

0x9137,	// (0x00087b17) wml_tabs_2_passive_pane_ParamLimits

0x9137,	// (0x00087b17) wml_tabs_2_passive_pane

0x9147,	// (0x00087b27) wml_tabs_3_active_pane_cp_ParamLimits

0x9147,	// (0x00087b27) wml_tabs_3_active_pane_cp

0x9158,	// (0x00087b38) wml_tabs_3_passive_pane_ParamLimits

0x9158,	// (0x00087b38) wml_tabs_3_passive_pane

0x9169,	// (0x00087b49) wml_tabs_3_passive_pane_cp_ParamLimits

0x9169,	// (0x00087b49) wml_tabs_3_passive_pane_cp

0x917a,	// (0x00087b5a) tabs_4_active_pane

0x9182,	// (0x00087b62) tabs_4_passive_pane

0x918a,	// (0x00087b6a) tabs_4_passive_pane_cp

0x9192,	// (0x00087b72) tabs_4_passive_pane_cp2

0x8703,	// (0x000870e3) aid_height_text

0x7e43,	// (0x00086823) mup_volume_cont_pane_ParamLimits

0x7e43,	// (0x00086823) mup_volume_cont_pane

0x5bf8,	// (0x000845d8) aid_size_cell_pinb

0x5c02,	// (0x000845e2) aid_size_list_pinb

0x908c,	// (0x00087a6c) mup2_volume_cont_pane_ParamLimits

0x908c,	// (0x00087a6c) mup2_volume_cont_pane

0x919a,	// (0x00087b7a) mup2_volume_cont_pane_g1_ParamLimits

0x919a,	// (0x00087b7a) mup2_volume_cont_pane_g1

0x588b,	// (0x0008426b) aid_size_cell_touch_ParamLimits

0x588b,	// (0x0008426b) aid_size_cell_touch

0x5ade,	// (0x000844be) touch_pane_ParamLimits

0x5ade,	// (0x000844be) touch_pane

0x01c9,	// (0x0007eba9) main_rss2_pane

0x1706,	// (0x000800e6) listscroll_rss2_pane

0x170f,	// (0x000800ef) rss2_navigation_pane

0x1717,	// (0x000800f7) list_rss2_pane

0xeb4f,	// (0x0008d52f) scroll_pane_cp22

0x171f,	// (0x000800ff) rss2_navigation_pane_g1

0x1728,	// (0x00080108) rss2_navigation_pane_g2

0x1730,	// (0x00080110) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0008e08b) rss2_navigation_pane_g

0x1738,	// (0x00080118) rss2_navigation_pane_t1

0x91d3,	// (0x00087bb3) rss2_list_single_pane_ParamLimits

0x91d3,	// (0x00087bb3) rss2_list_single_pane

0x1746,	// (0x00080126) rss2_list_single_pane_t2

0x1754,	// (0x00080134) rss2_list_single_pane_t3_ParamLimits

0x1754,	// (0x00080134) rss2_list_single_pane_t3

0x1771,	// (0x00080151) rss2_list_single_pane_t4

0x764a,	// (0x0008602a) smil_status_pane_g1

0xf0cd,	// (0x0008daad) main_image2_pane_ParamLimits

0xf0cd,	// (0x0008daad) main_image2_pane

0x8d9f,	// (0x0008777f) main_camera2_pane_g9_ParamLimits

0x8d9f,	// (0x0008777f) main_camera2_pane_g9

0x8df3,	// (0x000877d3) main_camera2_pane_t5_ParamLimits

0x8df3,	// (0x000877d3) main_camera2_pane_t5

0x8e05,	// (0x000877e5) main_camera2_pane_t6_ParamLimits

0x8e05,	// (0x000877e5) main_camera2_pane_t6

0x9204,	// (0x00087be4) main_image2_pane_g1_ParamLimits

0x9204,	// (0x00087be4) main_image2_pane_g1

0x84a3,	// (0x00086e83) smil2_video_pane_ParamLimits

0x84a3,	// (0x00086e83) smil2_video_pane

0x01f7,	// (0x0007ebd7) aid_zoom_text_primary_cp

0x0237,	// (0x0007ec17) popup_preview_fixed_window

0xe44d,	// (0x0008ce2d) im_reading_pane_g1

0x8ce9,	// (0x000876c9) cams2_bc_adjust_pane_cp_ParamLimits

0x8ce9,	// (0x000876c9) cams2_bc_adjust_pane_cp

0x8e35,	// (0x00087815) cams2_bc_adjust_pane_ParamLimits

0x8e35,	// (0x00087815) cams2_bc_adjust_pane

0x2b48,	// (0x00081528) cams2_bc_adjust_pane_g1

0x9210,	// (0x00087bf0) cams2_slider_pane

0x9219,	// (0x00087bf9) cams2_slider_pane_g1

0x9222,	// (0x00087c02) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0008e092) cams2_slider_pane_g

0x5d08,	// (0x000846e8) calc_display_pane_ParamLimits

0x5d26,	// (0x00084706) calc_paper_pane_ParamLimits

0x5d42,	// (0x00084722) grid_calc_pane_ParamLimits

0x7897,	// (0x00086277) popup_clock_digital_window_t1_ParamLimits

0xef1b,	// (0x0008d8fb) main_image_pane_t1

0x5cee,	// (0x000846ce) aid_size_cell_calc_ParamLimits

0x5cee,	// (0x000846ce) aid_size_cell_calc

0x8970,	// (0x00087350) popup_blid_sat_info2_window_ParamLimits

0x8970,	// (0x00087350) popup_blid_sat_info2_window

0x1787,	// (0x00080167) aid_size_cell_blid

0x178f,	// (0x0008016f) bg_popup_window_pane_cp07

0x17b2,	// (0x00080192) grid_popup_blid_pane

0x17bc,	// (0x0008019c) heading_pane_cp05_ParamLimits

0x17bc,	// (0x0008019c) heading_pane_cp05

0x1886,	// (0x00080266) cell_popup_blid_pane_ParamLimits

0x1886,	// (0x00080266) cell_popup_blid_pane

0x18aa,	// (0x0008028a) cell_popup_blid_pane_g1

0x18b2,	// (0x00080292) cell_popup_blid_pane_t1

0x9052,	// (0x00087a32) mup2_indicator_pane_ParamLimits

0x9052,	// (0x00087a32) mup2_indicator_pane

0xec98,	// (0x0008d678) mup2_visualizer_osc_pane

0x165c,	// (0x0008003c) mup2_visualizer_spec_pane_ParamLimits

0x165c,	// (0x0008003c) mup2_visualizer_spec_pane

0x923c,	// (0x00087c1c) mup2_spec_half_pane

0x9245,	// (0x00087c25) mup2_spec_half_pane_cp

0x924f,	// (0x00087c2f) mup2_spec_bar_pane_ParamLimits

0x924f,	// (0x00087c2f) mup2_spec_bar_pane

0x15db,	// (0x0007ffbb) mup2_spec_bar_pane_g1

0x15e5,	// (0x0007ffc5) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0008e005) mup2_spec_bar_pane_g

0x926e,	// (0x00087c4e) mup2_osc_middle_pane

0x15f7,	// (0x0007ffd7) mup2_visualizer_osc_pane_g1

0xda96,	// (0x0008c476) popup_number_entry_window_t1_ParamLimits

0xdaa9,	// (0x0008c489) popup_number_entry_window_t2_ParamLimits

0xdabb,	// (0x0008c49b) popup_number_entry_window_t3_ParamLimits

0x5b35,	// (0x00084515) popup_number_entry_window_t5_ParamLimits

0x5b35,	// (0x00084515) popup_number_entry_window_t5

0xf0e7,	// (0x0008dac7) popup_number_entry_window_t_ParamLimits

0xdacd,	// (0x0008c4ad) text_title_cp2_ParamLimits

0x81a3,	// (0x00086b83) aid_hotspot_pointer_text2_pane

0x8231,	// (0x00086c11) main_viewer_pane_g9_ParamLimits

0x8231,	// (0x00086c11) main_viewer_pane_g9

0xe67c,	// (0x0008d05c) cale_month_pane_t1_ParamLimits

0xe6b9,	// (0x0008d099) bg_cale_pane_ParamLimits

0xe6d1,	// (0x0008d0b1) list_cale_pane_ParamLimits

0xe2e5,	// (0x0008ccc5) listscroll_cale_day_pane_t1

0xe6e2,	// (0x0008d0c2) scroll_pane_cp09_ParamLimits

0x7e7e,	// (0x0008685e) main_mup_eq_pane_t1_ParamLimits

0x7e7e,	// (0x0008685e) main_mup_eq_pane_t1

0x7e98,	// (0x00086878) main_mup_eq_pane_t2_ParamLimits

0x7e98,	// (0x00086878) main_mup_eq_pane_t2

0x7eb2,	// (0x00086892) main_mup_eq_pane_t3_ParamLimits

0x7eb2,	// (0x00086892) main_mup_eq_pane_t3

0x7eca,	// (0x000868aa) main_mup_eq_pane_t4_ParamLimits

0x7eca,	// (0x000868aa) main_mup_eq_pane_t4

0x7ee2,	// (0x000868c2) main_mup_eq_pane_t5_ParamLimits

0x7ee2,	// (0x000868c2) main_mup_eq_pane_t5

0x7efa,	// (0x000868da) main_mup_eq_pane_t6_ParamLimits

0x7efa,	// (0x000868da) main_mup_eq_pane_t6

0x7f0e,	// (0x000868ee) main_mup_eq_pane_t7_ParamLimits

0x7f0e,	// (0x000868ee) main_mup_eq_pane_t7

0x7f22,	// (0x00086902) main_mup_eq_pane_t8_ParamLimits

0x7f22,	// (0x00086902) main_mup_eq_pane_t8

0x7f38,	// (0x00086918) main_mup_eq_pane_t9_ParamLimits

0x7f38,	// (0x00086918) main_mup_eq_pane_t9

0x7f50,	// (0x00086930) main_mup_eq_pane_t10_ParamLimits

0x7f50,	// (0x00086930) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0008de54) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0008de54) main_mup_eq_pane_t

0x800d,	// (0x000869ed) mup_equalizer_pane_cp5_ParamLimits

0x8023,	// (0x00086a03) mup_equalizer_pane_cp6_ParamLimits

0x803b,	// (0x00086a1b) mup_equalizer_pane_cp7_ParamLimits

0x01c9,	// (0x0007eba9) main_gallery_pane

0x1600,	// (0x0007ffe0) smil2_volume_pane

0x161b,	// (0x0007fffb) smil_status_volume_pane_g1_ParamLimits

0x1608,	// (0x0007ffe8) smil_status_volume_pane_g2_ParamLimits

0x8b5c,	// (0x0008753c) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0008e00a) smil_status_volume_pane_g_ParamLimits

0x178f,	// (0x0008016f) bg_popup_window_pane_cp07_ParamLimits

0x179d,	// (0x0008017d) blid_firmament_pane

0x9277,	// (0x00087c57) aid_size_cell_gallery_ParamLimits

0x9277,	// (0x00087c57) aid_size_cell_gallery

0x9285,	// (0x00087c65) grid_gallery_pane_ParamLimits

0x9285,	// (0x00087c65) grid_gallery_pane

0x9295,	// (0x00087c75) cell_gallery_pane_ParamLimits

0x9295,	// (0x00087c75) cell_gallery_pane

0x18c0,	// (0x000802a0) bg_cell_gallery_focus_pane_ParamLimits

0x18c0,	// (0x000802a0) bg_cell_gallery_focus_pane

0x18d2,	// (0x000802b2) cell_gallery_pane_g1_ParamLimits

0x18d2,	// (0x000802b2) cell_gallery_pane_g1

0x92e3,	// (0x00087cc3) cell_gallery_pane_g2_ParamLimits

0x92e3,	// (0x00087cc3) cell_gallery_pane_g2

0x92f0,	// (0x00087cd0) cell_gallery_pane_g3_ParamLimits

0x92f0,	// (0x00087cd0) cell_gallery_pane_g3

0x18de,	// (0x000802be) cell_gallery_pane_g4_ParamLimits

0x18de,	// (0x000802be) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0008e0b8) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0008e0b8) cell_gallery_pane_g

0x18ea,	// (0x000802ca) bg_cell_gallery_focus_pane_g1

0x18f2,	// (0x000802d2) bg_cell_gallery_focus_pane_g2

0x18fa,	// (0x000802da) bg_cell_gallery_focus_pane_g3

0x1902,	// (0x000802e2) bg_cell_gallery_focus_pane_g4

0x190a,	// (0x000802ea) bg_cell_gallery_focus_pane_g5

0x1912,	// (0x000802f2) bg_cell_gallery_focus_pane_g6

0x191a,	// (0x000802fa) bg_cell_gallery_focus_pane_g7

0x1922,	// (0x00080302) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0008e0c1) bg_cell_gallery_focus_pane_g

0x192a,	// (0x0008030a) aid_firma_cardinal

0x193e,	// (0x0008031e) blid_firmament_pane_t1

0x1955,	// (0x00080335) blid_firmament_pane_t2

0x196c,	// (0x0008034c) blid_firmament_pane_t3

0x1983,	// (0x00080363) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0008e0d2) blid_firmament_pane_t

0x199a,	// (0x0008037a) blid_sat_info_pane

0x19aa,	// (0x0008038a) blid_sat_info_pane_g1

0x19aa,	// (0x0008038a) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0008e0db) blid_sat_info_pane_g

0x19b4,	// (0x00080394) blid_sat_info_pane_t1

0x19c2,	// (0x000803a2) smil2_volume_content_pane

0x19cb,	// (0x000803ab) smil2_volume_pane_g1

0x19d3,	// (0x000803b3) smil2_volume_content_pane_g1

0x19dc,	// (0x000803bc) smil2_volume_content_pane_g2

0x19e5,	// (0x000803c5) smil2_volume_content_pane_g3

0x19ee,	// (0x000803ce) smil2_volume_content_pane_g4

0x19f7,	// (0x000803d7) smil2_volume_content_pane_g5

0x1a00,	// (0x000803e0) smil2_volume_content_pane_g6

0x1a09,	// (0x000803e9) smil2_volume_content_pane_g7

0x1a12,	// (0x000803f2) smil2_volume_content_pane_g8

0x1a1b,	// (0x000803fb) smil2_volume_content_pane_g9

0x1a24,	// (0x00080404) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0008e0e0) smil2_volume_content_pane_g

0x62e6,	// (0x00084cc6) cale_week_day_heading_pane_t1_ParamLimits

0x62ff,	// (0x00084cdf) cale_week_day_heading_pane_t2_ParamLimits

0x6318,	// (0x00084cf8) cale_week_day_heading_pane_t3_ParamLimits

0x6331,	// (0x00084d11) cale_week_day_heading_pane_t4_ParamLimits

0x634a,	// (0x00084d2a) cale_week_day_heading_pane_t5_ParamLimits

0x6363,	// (0x00084d43) cale_week_day_heading_pane_t6_ParamLimits

0x637c,	// (0x00084d5c) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0008dbcc) cale_week_day_heading_pane_t_ParamLimits

0xe2f7,	// (0x0008ccd7) bg_cale_side_pane_ParamLimits

0x6395,	// (0x00084d75) cale_week_time_pane_t1_ParamLimits

0x63ad,	// (0x00084d8d) cale_week_time_pane_t2_ParamLimits

0x63c5,	// (0x00084da5) cale_week_time_pane_t3_ParamLimits

0x63dd,	// (0x00084dbd) cale_week_time_pane_t4_ParamLimits

0x63f5,	// (0x00084dd5) cale_week_time_pane_t5_ParamLimits

0x640d,	// (0x00084ded) cale_week_time_pane_t6_ParamLimits

0x6425,	// (0x00084e05) cale_week_time_pane_t7_ParamLimits

0x6445,	// (0x00084e25) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0008dbdb) cale_week_time_pane_t_ParamLimits

0x6465,	// (0x00084e45) cell_cale_week_pane_g2_ParamLimits

0xe2f7,	// (0x0008ccd7) bg_cale_side_pane_cp01_ParamLimits

0x74bb,	// (0x00085e9b) cale_month_week_pane_t1_ParamLimits

0x74d2,	// (0x00085eb2) cale_month_week_pane_t2_ParamLimits

0x74e9,	// (0x00085ec9) cale_month_week_pane_t3_ParamLimits

0x7500,	// (0x00085ee0) cale_month_week_pane_t4_ParamLimits

0x7517,	// (0x00085ef7) cale_month_week_pane_t5_ParamLimits

0x7532,	// (0x00085f12) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0008dcb4) cale_month_week_pane_t_ParamLimits

0x7617,	// (0x00085ff7) cell_cale_month_pane_g1_ParamLimits

0x01c9,	// (0x0007eba9) main_cale_event_viewer_pane

0x01c9,	// (0x0007eba9) listscroll_cale_event_viewer_pane

0x1a2d,	// (0x0008040d) list_cale_ev_pane

0x1a35,	// (0x00080415) scroll_pane_cp023

0x1a41,	// (0x00080421) field_cale_ev_pane_ParamLimits

0x1a41,	// (0x00080421) field_cale_ev_pane

0x1a5f,	// (0x0008043f) field_cale_ev_content_pane_ParamLimits

0x1a5f,	// (0x0008043f) field_cale_ev_content_pane

0x1a6b,	// (0x0008044b) field_cale_ev_pane_g1_ParamLimits

0x1a6b,	// (0x0008044b) field_cale_ev_pane_g1

0x1a77,	// (0x00080457) field_cale_ev_pane_g2_ParamLimits

0x1a77,	// (0x00080457) field_cale_ev_pane_g2

0x1a8f,	// (0x0008046f) field_cale_ev_pane_g3_ParamLimits

0x1a8f,	// (0x0008046f) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0008e0f5) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0008e0f5) field_cale_ev_pane_g

0x1aa7,	// (0x00080487) field_cale_ev_pane_t1_ParamLimits

0x1aa7,	// (0x00080487) field_cale_ev_pane_t1

0x1abe,	// (0x0008049e) field_cale_ev_content_pane_t1_ParamLimits

0x1abe,	// (0x0008049e) field_cale_ev_content_pane_t1

0xee01,	// (0x0008d7e1) bg_button_pane_cp01

0xe1b7,	// (0x0008cb97) listscroll_cale_week_pane_ParamLimits

0x60c2,	// (0x00084aa2) popup_toolbar_window_cp01

0xe2e5,	// (0x0008ccc5) listscroll_cale_week_pane_t1_ParamLimits

0xe1b7,	// (0x0008cb97) listscroll_cale_day_pane_ParamLimits

0x60c2,	// (0x00084aa2) popup_toolbar_window_cp02

0xe2e5,	// (0x0008ccc5) listscroll_cale_day_pane_t1_ParamLimits

0xe1b7,	// (0x0008cb97) main_cale_month_pane_ParamLimits

0x8a40,	// (0x00087420) popup_toolbar_window_cp03_ParamLimits

0x8a40,	// (0x00087420) popup_toolbar_window_cp03

0x83b9,	// (0x00086d99) main_image_pane_g2_ParamLimits

0x83b9,	// (0x00086d99) main_image_pane_g2

0x83c5,	// (0x00086da5) main_image_pane_g3_ParamLimits

0x83c5,	// (0x00086da5) main_image_pane_g3

0x0002,

0xf506,	// (0x0008dee6) main_image_pane_g_ParamLimits

0xf506,	// (0x0008dee6) main_image_pane_g

0xef1b,	// (0x0008d8fb) main_image_pane_t1_ParamLimits

0x83d1,	// (0x00086db1) main_image_pane_t2_ParamLimits

0x83d1,	// (0x00086db1) main_image_pane_t2

0x83e3,	// (0x00086dc3) main_image_pane_t3_ParamLimits

0x83e3,	// (0x00086dc3) main_image_pane_t3

0x83f5,	// (0x00086dd5) main_image_pane_t4_ParamLimits

0x83f5,	// (0x00086dd5) main_image_pane_t4

0x0003,

0xf50d,	// (0x0008deed) main_image_pane_t_ParamLimits

0xf50d,	// (0x0008deed) main_image_pane_t

0x8407,	// (0x00086de7) popup_image_details_window_cp01

0x8411,	// (0x00086df1) popup_toobar_trans_pane_cp01_ParamLimits

0x8411,	// (0x00086df1) popup_toobar_trans_pane_cp01

0x89bd,	// (0x0008739d) popup_image_details_window_ParamLimits

0x89bd,	// (0x0008739d) popup_image_details_window

0x1561,	// (0x0007ff41) popup_image_focus_window

0x8cdb,	// (0x000876bb) camera2_autofocus_pane_ParamLimits

0x8cdb,	// (0x000876bb) camera2_autofocus_pane

0x01c9,	// (0x0007eba9) bg_popup_sub_pane_cp06

0x1adc,	// (0x000804bc) popup_image_focus_window_g1

0x1ae4,	// (0x000804c4) popup_image_focus_window_g2

0x1aec,	// (0x000804cc) popup_image_focus_window_g3

0x1af4,	// (0x000804d4) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0008e0fc) popup_image_focus_window_g

0x1afc,	// (0x000804dc) popup_image_focus_window_t1

0x1b0a,	// (0x000804ea) popup_image_focus_window_t2

0x1b1a,	// (0x000804fa) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0008e105) popup_image_focus_window_t

0x1b28,	// (0x00080508) camera2_autofocus_pane_g1

0xf0cd,	// (0x0008daad) bg_tb_trans_pane_cp01

0x1b36,	// (0x00080516) popup_image_details_window_g1

0x1b49,	// (0x00080529) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0008e117) popup_image_details_window_g

0x1b72,	// (0x00080552) popup_image_details_window_t1

0x1b84,	// (0x00080564) popup_image_details_window_t2

0x1b9d,	// (0x0008057d) popup_image_details_window_t3

0x1bb1,	// (0x00080591) popup_image_details_window_t4

0x1bcc,	// (0x000805ac) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0008e11e) popup_image_details_window_t

0xe1a3,	// (0x0008cb83) bg_calc_paper_pane_ParamLimits

0x5e3f,	// (0x0008481f) grid_highlight_pane_cp013

0x5e49,	// (0x00084829) list_calc_pane_ParamLimits

0x5e5b,	// (0x0008483b) scroll_pane_cp024

0xe1b7,	// (0x0008cb97) bg_calc_display_pane_ParamLimits

0x5e63,	// (0x00084843) calc_display_pane_t1_ParamLimits

0x5e78,	// (0x00084858) calc_display_pane_t2_ParamLimits

0x5e8d,	// (0x0008486d) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0008db4e) calc_display_pane_t_ParamLimits

0x5f69,	// (0x00084949) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0008db6b) cell_calc_pane_g

0x5f72,	// (0x00084952) cell_calc_pane_t1

0xe216,	// (0x0008cbf6) grid_highlight_pane_cp02_ParamLimits

0xe22c,	// (0x0008cc0c) toolbar_button_pane_cp01_ParamLimits

0xe22c,	// (0x0008cc0c) toolbar_button_pane_cp01

0xef60,	// (0x0008d940) temp_image_control_pane_ParamLimits

0xef60,	// (0x0008d940) temp_image_control_pane

0xf0cd,	// (0x0008daad) main_mp3_pane

0x1be6,	// (0x000805c6) temp_image_control_pane_g1_ParamLimits

0x1be6,	// (0x000805c6) temp_image_control_pane_g1

0x1bf4,	// (0x000805d4) temp_image_control_pane_g2_ParamLimits

0x1bf4,	// (0x000805d4) temp_image_control_pane_g2

0x1c06,	// (0x000805e6) temp_image_control_pane_g3_ParamLimits

0x1c06,	// (0x000805e6) temp_image_control_pane_g3

0x932d,	// (0x00087d0d) temp_image_control_pane_g4_ParamLimits

0x932d,	// (0x00087d0d) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0008e129) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0008e129) temp_image_control_pane_g

0x1be6,	// (0x000805c6) main_mp3_pane_g1

0x933e,	// (0x00087d1e) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0008e132) main_mp3_pane_g

0x1c49,	// (0x00080629) main_mp3_pane_t1

0xe35c,	// (0x0008cd3c) main_camera_pane_g8_ParamLimits

0xe35c,	// (0x0008cd3c) main_camera_pane_g8

0x66f9,	// (0x000850d9) main_video_pane_g7_ParamLimits

0x66f9,	// (0x000850d9) main_video_pane_g7

0x8e23,	// (0x00087803) main_camera2_pane_t7_ParamLimits

0x8e23,	// (0x00087803) main_camera2_pane_t7

0xe4a4,	// (0x0008ce84) scroll_pane_cp025_ParamLimits

0xe4a4,	// (0x0008ce84) scroll_pane_cp025

0xe4b8,	// (0x0008ce98) scroll_pane_cp026_ParamLimits

0xe4b8,	// (0x0008ce98) scroll_pane_cp026

0xe4c7,	// (0x0008cea7) wml_content_pane_ParamLimits

0x01c9,	// (0x0007eba9) main_touch_calib_pane

0x93e2,	// (0x00087dc2) main_touch_calib_pane_g1

0x93ee,	// (0x00087dce) main_touch_calib_pane_g2

0x93fa,	// (0x00087dda) main_touch_calib_pane_g3

0x9406,	// (0x00087de6) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0008e150) main_touch_calib_pane_g

0x9412,	// (0x00087df2) main_touch_calib_pane_t1

0x9429,	// (0x00087e09) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0008e159) main_touch_calib_pane_t

0xebd9,	// (0x0008d5b9) mup_progress_pane_cp02

0xebf8,	// (0x0008d5d8) navi_pane_g1

0xec5a,	// (0x0008d63a) navi_pane_mp_t3

0xf0cd,	// (0x0008daad) main_mp3_pane_ParamLimits

0x8a7e,	// (0x0008745e) navi_pane_ParamLimits

0x1be6,	// (0x000805c6) main_mp3_pane_g1_ParamLimits

0x933e,	// (0x00087d1e) main_mp3_pane_g2_ParamLimits

0x934a,	// (0x00087d2a) main_mp3_pane_g3_ParamLimits

0x934a,	// (0x00087d2a) main_mp3_pane_g3

0x9356,	// (0x00087d36) main_mp3_pane_g4_ParamLimits

0x9356,	// (0x00087d36) main_mp3_pane_g4

0x1c16,	// (0x000805f6) main_mp3_pane_g5_ParamLimits

0x1c16,	// (0x000805f6) main_mp3_pane_g5

0x1c24,	// (0x00080604) main_mp3_pane_g6_ParamLimits

0x1c24,	// (0x00080604) main_mp3_pane_g6

0x1c31,	// (0x00080611) main_mp3_pane_g7_ParamLimits

0x1c31,	// (0x00080611) main_mp3_pane_g7

0x1c3d,	// (0x0008061d) main_mp3_pane_g8_ParamLimits

0x1c3d,	// (0x0008061d) main_mp3_pane_g8

0xf752,	// (0x0008e132) main_mp3_pane_g_ParamLimits

0x9362,	// (0x00087d42) main_mp3_pane_t2

0x9372,	// (0x00087d52) main_mp3_pane_t3

0x1c57,	// (0x00080637) main_mp3_pane_t4

0x1c65,	// (0x00080645) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0008e143) main_mp3_pane_t

0x1c73,	// (0x00080653) mup_progress_pane_cp01

0x01f7,	// (0x0007ebd7) aid_zoom_text_secondary2

0x1a2d,	// (0x0008040d) list_cale_ev2_pane

0x1a35,	// (0x00080415) scroll_pane_cp023_ParamLimits

0x947e,	// (0x00087e5e) field_cale_ev2_pane_ParamLimits

0x947e,	// (0x00087e5e) field_cale_ev2_pane

0x94a7,	// (0x00087e87) field_cale_ev2_pane_g1_ParamLimits

0x94a7,	// (0x00087e87) field_cale_ev2_pane_g1

0x94b3,	// (0x00087e93) field_cale_ev2_pane_g2_ParamLimits

0x94b3,	// (0x00087e93) field_cale_ev2_pane_g2

0x94cb,	// (0x00087eab) field_cale_ev2_pane_g3_ParamLimits

0x94cb,	// (0x00087eab) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0008e164) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0008e164) field_cale_ev2_pane_g

0x1c7b,	// (0x0008065b) field_cale_ev2_pane_t1_ParamLimits

0x1c7b,	// (0x0008065b) field_cale_ev2_pane_t1

0x1c92,	// (0x00080672) field_cale_ev2_pane_t2_ParamLimits

0x1c92,	// (0x00080672) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0008e16d) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0008e16d) field_cale_ev2_pane_t

0x8299,	// (0x00086c79) main_postcard_pane_g5_ParamLimits

0x8299,	// (0x00086c79) main_postcard_pane_g5

0x82a7,	// (0x00086c87) main_postcard_pane_g6_ParamLimits

0x82a7,	// (0x00086c87) main_postcard_pane_g6

0x6543,	// (0x00084f23) camera2_autofocus_pane_cp_ParamLimits

0x6543,	// (0x00084f23) camera2_autofocus_pane_cp

0xf0cd,	// (0x0008daad) main_mup3_pane

0x9503,	// (0x00087ee3) main_mup3_pane_g1_ParamLimits

0x9503,	// (0x00087ee3) main_mup3_pane_g1

0x9524,	// (0x00087f04) main_mup3_pane_g2_ParamLimits

0x9524,	// (0x00087f04) main_mup3_pane_g2

0x959c,	// (0x00087f7c) main_mup3_pane_g3_ParamLimits

0x959c,	// (0x00087f7c) main_mup3_pane_g3

0x95df,	// (0x00087fbf) main_mup3_pane_g4_ParamLimits

0x95df,	// (0x00087fbf) main_mup3_pane_g4

0x9622,	// (0x00088002) main_mup3_pane_g5_ParamLimits

0x9622,	// (0x00088002) main_mup3_pane_g5

0x9665,	// (0x00088045) main_mup3_pane_g6_ParamLimits

0x9665,	// (0x00088045) main_mup3_pane_g6

0x1ca7,	// (0x00080687) main_mup3_pane_g7_ParamLimits

0x1ca7,	// (0x00080687) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0008e17d) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0008e17d) main_mup3_pane_g

0x96db,	// (0x000880bb) main_mup3_pane_t1_ParamLimits

0x96db,	// (0x000880bb) main_mup3_pane_t1

0x974a,	// (0x0008812a) main_mup3_pane_t2_ParamLimits

0x974a,	// (0x0008812a) main_mup3_pane_t2

0x9813,	// (0x000881f3) main_mup3_pane_t4_ParamLimits

0x9813,	// (0x000881f3) main_mup3_pane_t4

0x9861,	// (0x00088241) main_mup3_pane_t5_ParamLimits

0x9861,	// (0x00088241) main_mup3_pane_t5

0x9911,	// (0x000882f1) main_mup3_pane_t6_ParamLimits

0x9911,	// (0x000882f1) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0008e18e) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0008e18e) main_mup3_pane_t

0x99bd,	// (0x0008839d) mup3_progress_pane_ParamLimits

0x99bd,	// (0x0008839d) mup3_progress_pane

0x9a3b,	// (0x0008841b) popup_mup3_control_window_ParamLimits

0x9a3b,	// (0x0008841b) popup_mup3_control_window

0x1cb5,	// (0x00080695) popup_mup3_text_window

0x9a54,	// (0x00088434) mup3_progress_pane_t1

0x9a73,	// (0x00088453) mup3_progress_pane_t2

0x1cbd,	// (0x0008069d) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0008e19b) mup3_progress_pane_t

0x1cda,	// (0x000806ba) mup_progress_pane_cp03

0x01c9,	// (0x0007eba9) bg_tb_trans_pane_cp04

0x9a92,	// (0x00088472) mup3_volume_pane

0x9a9a,	// (0x0008847a) popup_mup3_control_window_g1

0x9aa3,	// (0x00088483) mup3_volume_pane_g1

0x9aac,	// (0x0008848c) mup3_volume_pane_g2

0x9ab5,	// (0x00088495) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0008e1a2) mup3_volume_pane_g

0x01c9,	// (0x0007eba9) bg_tb_trans_pane_cp03

0x1cea,	// (0x000806ca) popup_mup3_text_window_g1

0x1cf2,	// (0x000806d2) popup_mup3_text_window_t1

0xe1ff,	// (0x0008cbdf) list_calc_item_pane_g1_ParamLimits

0x16fd,	// (0x000800dd) mup_volume_pane_cp_g1

0x9440,	// (0x00087e20) main_touch_calib_pane_t3

0x9454,	// (0x00087e34) main_touch_calib_pane_t4

0x9468,	// (0x00087e48) main_touch_calib_pane_t5

0x01d3,	// (0x0007ebb3) aid_cell_size_toolbar2

0x01db,	// (0x0007ebbb) aid_popup3_width_pane

0x01e7,	// (0x0007ebc7) aid_zoom_text_msg_primary

0x651a,	// (0x00084efa) vorec_t7

0xe1c3,	// (0x0008cba3) bg_calc_paper_pane_g1_ParamLimits

0xe1cf,	// (0x0008cbaf) bg_calc_paper_pane_g2_ParamLimits

0xe1db,	// (0x0008cbbb) bg_calc_paper_pane_g3_ParamLimits

0xe1e7,	// (0x0008cbc7) bg_calc_paper_pane_g4_ParamLimits

0xe1f3,	// (0x0008cbd3) bg_calc_paper_pane_g5_ParamLimits

0x5ecc,	// (0x000848ac) bg_calc_paper_pane_g6_ParamLimits

0x5edd,	// (0x000848bd) bg_calc_paper_pane_g7_ParamLimits

0x5eee,	// (0x000848ce) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0008db55) bg_calc_paper_pane_g_ParamLimits

0x5eff,	// (0x000848df) calc_bg_paper_pane_g9_ParamLimits

0x662a,	// (0x0008500a) image_qvga_pane_ParamLimits

0x662a,	// (0x0008500a) image_qvga_pane

0xe0e4,	// (0x0008cac4) bg_popup_sub_pane_cp04_ParamLimits

0xee97,	// (0x0008d877) popup_mup_playback_window_g1_ParamLimits

0xeea3,	// (0x0008d883) popup_mup_playback_window_t1_ParamLimits

0xeeb8,	// (0x0008d898) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0008dee1) popup_mup_playback_window_t_ParamLimits

0x8f52,	// (0x00087932) main_mup2_pane_g3_ParamLimits

0x8f52,	// (0x00087932) main_mup2_pane_g3

0x6939,	// (0x00085319) popup_toolbar_window_cp04

0x0757,	// (0x0007f137) popup_call2_audio_second_window_g3_ParamLimits

0x0757,	// (0x0007f137) popup_call2_audio_second_window_g3

0x0b61,	// (0x0007f541) popup_call2_audio_first_window_g4_ParamLimits

0x0b61,	// (0x0007f541) popup_call2_audio_first_window_g4

0x11e0,	// (0x0007fbc0) popup_call2_audio_in_window_g4_ParamLimits

0x11e0,	// (0x0007fbc0) popup_call2_audio_in_window_g4

0x83ac,	// (0x00086d8c) aid_area_sk_bg_cut_ParamLimits

0x83ac,	// (0x00086d8c) aid_area_sk_bg_cut

0xeecd,	// (0x0008d8ad) aid_area_sk_bg_cut_2_ParamLimits

0xeecd,	// (0x0008d8ad) aid_area_sk_bg_cut_2

0x92d3,	// (0x00087cb3) aid_placing_details_win

0x92db,	// (0x00087cbb) aid_placing_details_win_2

0x1b28,	// (0x00080508) camera2_autofocus_pane_g1_ParamLimits

0x5a8c,	// (0x0008446c) popup_fixed_preview_cale_window_ParamLimits

0x5a8c,	// (0x0008446c) popup_fixed_preview_cale_window

0xeca9,	// (0x0008d689) navi_slider_pane_g3

0xecb2,	// (0x0008d692) navi_slider_pane_g4

0xecbb,	// (0x0008d69b) navi_slider_pane_g5

0xeca9,	// (0x0008d689) navi_slider_pane_g6

0x7c12,	// (0x000865f2) navi_slider_pane_g7

0xedce,	// (0x0008d7ae) mup_scale_pane_g3

0xedd7,	// (0x0008d7b7) mup_scale_pane_g4

0xede0,	// (0x0008d7c0) mup_scale_pane_g5

0x8053,	// (0x00086a33) mup_scale_pane_g6

0x805c,	// (0x00086a3c) mup_scale_pane_g7

0xeca9,	// (0x0008d689) cams2_slider_pane_g3

0x177f,	// (0x0008015f) cams2_slider_pane_g4

0x922b,	// (0x00087c0b) cams2_slider_pane_g5

0xeca9,	// (0x0008d689) cams2_slider_pane_g6

0x9233,	// (0x00087c13) cams2_slider_pane_g7

0x19aa,	// (0x0008038a) camera2_autofocus_pane_cp_g1

0x1d00,	// (0x000806e0) bg_popup_preview_window_pane_cp02_ParamLimits

0x1d00,	// (0x000806e0) bg_popup_preview_window_pane_cp02

0x1d0c,	// (0x000806ec) list_fp_cale_pane_ParamLimits

0x1d0c,	// (0x000806ec) list_fp_cale_pane

0x1d18,	// (0x000806f8) popup_fixed_preview_cale_window_t1_ParamLimits

0x1d18,	// (0x000806f8) popup_fixed_preview_cale_window_t1

0x9abe,	// (0x0008849e) popup_fixed_preview_cale_window_t2_ParamLimits

0x9abe,	// (0x0008849e) popup_fixed_preview_cale_window_t2

0x9ad3,	// (0x000884b3) popup_fixed_preview_cale_window_t3_ParamLimits

0x9ad3,	// (0x000884b3) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0008e1a9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0008e1a9) popup_fixed_preview_cale_window_t

0x9ae8,	// (0x000884c8) list_single_fp_cale_pane_ParamLimits

0x9ae8,	// (0x000884c8) list_single_fp_cale_pane

0x1d36,	// (0x00080716) list_single_fp_cale_pane_g1_ParamLimits

0x1d36,	// (0x00080716) list_single_fp_cale_pane_g1

0x1d42,	// (0x00080722) list_single_fp_cale_pane_g2_ParamLimits

0x1d42,	// (0x00080722) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0008e1b0) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0008e1b0) list_single_fp_cale_pane_g

0x1d5b,	// (0x0008073b) list_single_fp_cale_pane_t1_ParamLimits

0x1d5b,	// (0x0008073b) list_single_fp_cale_pane_t1

0x1d6d,	// (0x0008074d) list_single_fp_cale_pane_t2_ParamLimits

0x1d6d,	// (0x0008074d) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0008e1b7) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0008e1b7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x01c9,	// (0x0007eba9) main_dialer_pane

0x9afa,	// (0x000884da) aid_cell_size_keypad

0x9b04,	// (0x000884e4) dialer_ne_pane

0x9b0e,	// (0x000884ee) grid_dialer_command_1_pane

0x9b16,	// (0x000884f6) grid_dialer_command_2_pane

0x9b1e,	// (0x000884fe) grid_dialer_keypad_pane

0x9b30,	// (0x00088510) bg_popup_call_pane_cp06_ParamLimits

0x9b30,	// (0x00088510) bg_popup_call_pane_cp06

0x9b3c,	// (0x0008851c) dialer_ne_clear_pane_ParamLimits

0x9b3c,	// (0x0008851c) dialer_ne_clear_pane

0x1da0,	// (0x00080780) dialer_ne_pane_g1

0x1da8,	// (0x00080788) dialer_ne_pane_t1_ParamLimits

0x1da8,	// (0x00080788) dialer_ne_pane_t1

0x9b48,	// (0x00088528) dialer_ne_pane_t2_ParamLimits

0x9b48,	// (0x00088528) dialer_ne_pane_t2

0x9b65,	// (0x00088545) dialer_ne_pane_t3_ParamLimits

0x9b65,	// (0x00088545) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0008e1bc) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0008e1bc) dialer_ne_pane_t

0x9b89,	// (0x00088569) dialer_ne_pane_t3_copy1_ParamLimits

0x9b89,	// (0x00088569) dialer_ne_pane_t3_copy1

0x9bad,	// (0x0008858d) cell_dialer_keypad_pane_ParamLimits

0x9bad,	// (0x0008858d) cell_dialer_keypad_pane

0x9bc4,	// (0x000885a4) cell_dialer_command_1_pane_ParamLimits

0x9bc4,	// (0x000885a4) cell_dialer_command_1_pane

0x9bda,	// (0x000885ba) cell_dialer_command_2_pane_ParamLimits

0x9bda,	// (0x000885ba) cell_dialer_command_2_pane

0x1dba,	// (0x0008079a) bg_button_pane_cp02_ParamLimits

0x1dba,	// (0x0008079a) bg_button_pane_cp02

0x9be9,	// (0x000885c9) cell_dialer_keypad_pane_g1_ParamLimits

0x9be9,	// (0x000885c9) cell_dialer_keypad_pane_g1

0x1dba,	// (0x0008079a) bg_button_pane_cp03_ParamLimits

0x1dba,	// (0x0008079a) bg_button_pane_cp03

0x9bfe,	// (0x000885de) cell_dialer_command_1_pane_g1_ParamLimits

0x9bfe,	// (0x000885de) cell_dialer_command_1_pane_g1

0x1dc6,	// (0x000807a6) bg_button_pane_cp04

0x9c12,	// (0x000885f2) cell_dialer_command_2_pane_g1

0xec98,	// (0x0008d678) bg_button_pane_cp06

0x1dce,	// (0x000807ae) dialer_ne_clear_pane_g1

0x7b55,	// (0x00086535) navi_pane_g2

0x7b83,	// (0x00086563) navi_pane_g3

0x0002,

0xf404,	// (0x0008dde4) navi_pane_g

0x7bae,	// (0x0008658e) navi_pane_mv_g2

0x7bd5,	// (0x000865b5) navi_pane_mv_g5

0x7bdd,	// (0x000865bd) navi_pane_mv_t1

0xe1b7,	// (0x0008cb97) main_clock2_pane

0x9c43,	// (0x00088623) main_clock2_list_pane_ParamLimits

0x9c43,	// (0x00088623) main_clock2_list_pane

0x9c6b,	// (0x0008864b) main_clock2_pane_t1_ParamLimits

0x9c6b,	// (0x0008864b) main_clock2_pane_t1

0x9c8d,	// (0x0008866d) main_clock2_pane_t2_ParamLimits

0x9c8d,	// (0x0008866d) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0008e1c3) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0008e1c3) main_clock2_pane_t

0x9ce8,	// (0x000886c8) popup_clock_analogue_window_cp03_ParamLimits

0x9ce8,	// (0x000886c8) popup_clock_analogue_window_cp03

0x9d06,	// (0x000886e6) popup_clock_digital_window_cp02_ParamLimits

0x9d06,	// (0x000886e6) popup_clock_digital_window_cp02

0x9d73,	// (0x00088753) main_clock2_list_single_pane_ParamLimits

0x9d73,	// (0x00088753) main_clock2_list_single_pane

0xec98,	// (0x0008d678) list_highlight_pane_cp05

0x1dd6,	// (0x000807b6) main_clock2_list_single_pane_t1

0x6939,	// (0x00085319) popup_toolbar_window_cp04_ParamLimits

0x92fd,	// (0x00087cdd) camera2_autofocus_pane_g2_ParamLimits

0x92fd,	// (0x00087cdd) camera2_autofocus_pane_g2

0x9309,	// (0x00087ce9) camera2_autofocus_pane_g3_ParamLimits

0x9309,	// (0x00087ce9) camera2_autofocus_pane_g3

0x9315,	// (0x00087cf5) camera2_autofocus_pane_g4_ParamLimits

0x9315,	// (0x00087cf5) camera2_autofocus_pane_g4

0x9321,	// (0x00087d01) camera2_autofocus_pane_g5_ParamLimits

0x9321,	// (0x00087d01) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0008e10c) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0008e10c) camera2_autofocus_pane_g

0x94e3,	// (0x00087ec3) camera2_autofocus_pane_cp_g2

0x94eb,	// (0x00087ecb) camera2_autofocus_pane_cp_g3

0x94f3,	// (0x00087ed3) camera2_autofocus_pane_cp_g4

0x94fb,	// (0x00087edb) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0008e172) camera2_autofocus_pane_cp_g

0x9b28,	// (0x00088508) popup_dialer_spcha_window

0x01c9,	// (0x0007eba9) bg_popup_sub_pane_cp07

0x1de4,	// (0x000807c4) list_spcha_pane

0x1dec,	// (0x000807cc) list_single_spcha_pane_ParamLimits

0x1dec,	// (0x000807cc) list_single_spcha_pane

0x01c9,	// (0x0007eba9) list_highlight_pane_cp06

0x1dfd,	// (0x000807dd) list_single_spcha_pane_t1

0x0f8a,	// (0x0007f96a) popup_call2_audio_out_window_g4_ParamLimits

0x0f8a,	// (0x0007f96a) popup_call2_audio_out_window_g4

0x01c9,	// (0x0007eba9) main_imed2_pane

0x1569,	// (0x0007ff49) popup_imed_adjust2_window

0x89cb,	// (0x000873ab) popup_imed_trans_window_ParamLimits

0x89cb,	// (0x000873ab) popup_imed_trans_window

0x17e8,	// (0x000801c8) popup_blid_sat_info2_window_t1

0x17f6,	// (0x000801d6) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0008e0a1) popup_blid_sat_info2_window_t

0x9e1d,	// (0x000887fd) aid_size_cell_colour_35

0x9e37,	// (0x00088817) aid_size_cell_colour_112

0x9e4e,	// (0x0008882e) aid_size_cell_effect

0xf0cd,	// (0x0008daad) bg_tb_trans_pane_cp02

0xf0db,	// (0x0008dabb) heading_imed_pane

0x9e68,	// (0x00088848) listscroll_imed_pane

0x1e0b,	// (0x000807eb) heading_imed_pane_g1

0x1e13,	// (0x000807f3) heading_imed_pane_t1

0x1e21,	// (0x00080801) grid_imed_colour_35_pane_ParamLimits

0x1e21,	// (0x00080801) grid_imed_colour_35_pane

0x9e74,	// (0x00088854) grid_imed_effect_pane

0x1e38,	// (0x00080818) list_imed_aspect_pane

0x9e84,	// (0x00088864) scroll_pane_cp027_ParamLimits

0x9e84,	// (0x00088864) scroll_pane_cp027

0x9e90,	// (0x00088870) cell_imed_effect_pane_ParamLimits

0x9e90,	// (0x00088870) cell_imed_effect_pane

0x1e40,	// (0x00080820) cell_imed_colour_pane_ParamLimits

0x1e40,	// (0x00080820) cell_imed_colour_pane

0x1e82,	// (0x00080862) cell_imed_colour_pane_g1_ParamLimits

0x1e82,	// (0x00080862) cell_imed_colour_pane_g1

0x1e93,	// (0x00080873) hgihlgiht_grid_pane_cp016_ParamLimits

0x1e93,	// (0x00080873) hgihlgiht_grid_pane_cp016

0x9ea8,	// (0x00088888) cell_imed_effect_pane_g1

0x9eb0,	// (0x00088890) grid_highlight_pane_cp017

0x1ea4,	// (0x00080884) list_imed_single_pane_ParamLimits

0x1ea4,	// (0x00080884) list_imed_single_pane

0x01c9,	// (0x0007eba9) list_highlight_pane_cp07

0x1eb9,	// (0x00080899) list_imed_aspect_pane_comp1_t1

0x1541,	// (0x0007ff21) bg_tb_trans_pane_cp05

0x1edb,	// (0x000808bb) popup_imed_adjust2_window_g1

0x1f02,	// (0x000808e2) popup_imed_adjust2_window_t1

0x1f1a,	// (0x000808fa) slider_imed_adjust_pane

0x1f2e,	// (0x0008090e) slider_imed_adjust_pane_g1

0x1f3e,	// (0x0008091e) slider_imed_adjust_pane_g2

0x1f4e,	// (0x0008092e) slider_imed_adjust_pane_g3

0x1f5f,	// (0x0008093f) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0008e1e0) slider_imed_adjust_pane_g

0x9eb9,	// (0x00088899) aid_size_cell_clipart2

0x9ec5,	// (0x000888a5) grid_imed_clipart_pane

0x1f70,	// (0x00080950) scroll_pane_cp031

0x9ecf,	// (0x000888af) cell_imed_clipart_pane_ParamLimits

0x9ecf,	// (0x000888af) cell_imed_clipart_pane

0x9ef1,	// (0x000888d1) cell_imed_clipart_pane_g1

0x01c9,	// (0x0007eba9) grid_highlight_pane_cp014

0x9c4f,	// (0x0008862f) main_clock2_pane_g1_ParamLimits

0x9c4f,	// (0x0008862f) main_clock2_pane_g1

0x9d1e,	// (0x000886fe) aid_call2_pane_cp10

0x9d30,	// (0x00088710) aid_call_pane_cp10

0xebcd,	// (0x0008d5ad) popup_clock_analogue_window_cp10_g1

0xebcd,	// (0x0008d5ad) popup_clock_analogue_window_cp10_g2

0x9d42,	// (0x00088722) popup_clock_analogue_window_cp10_g3

0x9d42,	// (0x00088722) popup_clock_analogue_window_cp10_g4

0xebcd,	// (0x0008d5ad) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0008e1ce) popup_clock_analogue_window_cp10_g

0x9d54,	// (0x00088734) popup_clock_analogue_window_cp10_t1

0x9d85,	// (0x00088765) clock_digital_number_pane_cp10_ParamLimits

0x9d85,	// (0x00088765) clock_digital_number_pane_cp10

0x9d9d,	// (0x0008877d) clock_digital_number_pane_cp11_ParamLimits

0x9d9d,	// (0x0008877d) clock_digital_number_pane_cp11

0x9db5,	// (0x00088795) clock_digital_number_pane_cp12_ParamLimits

0x9db5,	// (0x00088795) clock_digital_number_pane_cp12

0x9dcd,	// (0x000887ad) clock_digital_number_pane_cp13_ParamLimits

0x9dcd,	// (0x000887ad) clock_digital_number_pane_cp13

0x9de5,	// (0x000887c5) clock_digital_separator_pane_cp10_ParamLimits

0x9de5,	// (0x000887c5) clock_digital_separator_pane_cp10

0x9dfd,	// (0x000887dd) popup_clock_digital_window_cp02_t1_ParamLimits

0x9dfd,	// (0x000887dd) popup_clock_digital_window_cp02_t1

0xe0dc,	// (0x0008cabc) clock_digital_number_pane_cp10_g1

0xe0dc,	// (0x0008cabc) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0008e1e9) clock_digital_number_pane_cp10_g

0xe0dc,	// (0x0008cabc) clock_digital_separator_pane_cp10_g1

0xe0dc,	// (0x0008cabc) clock_digital_separator_pane_g2_cp10

0xec68,	// (0x0008d648) navi_pane_vded_g4

0xec71,	// (0x0008d651) navi_pane_vded_g5

0xec7a,	// (0x0008d65a) navi_pane_vded_t1

0x01c9,	// (0x0007eba9) main_vded_pane

0x9efa,	// (0x000888da) main_vded_pane_g1

0x9f06,	// (0x000888e6) main_vded_pane_g2

0x9f10,	// (0x000888f0) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0008e1ee) main_vded_pane_g

0x9f1a,	// (0x000888fa) main_vded_pane_t1

0x9f28,	// (0x00088908) main_vded_pane_t2

0x0001,

0xf815,	// (0x0008e1f5) main_vded_pane_t

0x9f36,	// (0x00088916) vded_slider_pane

0x9f40,	// (0x00088920) vded_video_pane

0x1f78,	// (0x00080958) vded_video_pane_g1

0x9f4a,	// (0x0008892a) vded_video_pane_g2

0x19aa,	// (0x0008038a) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0008e1fa) vded_video_pane_g

0x1f82,	// (0x00080962) vded_slider_pane_g1

0x16fd,	// (0x000800dd) vded_slider_pane_g2

0x1f8b,	// (0x0008096b) vded_slider_pane_g3

0x1f94,	// (0x00080974) vded_slider_pane_g4

0x1f9d,	// (0x0008097d) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0008e201) vded_slider_pane_g

0x9a2d,	// (0x0008840d) mup3_rocker_pane_ParamLimits

0x9a2d,	// (0x0008840d) mup3_rocker_pane

0x9f53,	// (0x00088933) mup3_control_keys_pane_g1

0x9f5b,	// (0x0008893b) mup3_control_keys_pane_g2

0x9f63,	// (0x00088943) mup3_control_keys_pane_g3

0x9f6b,	// (0x0008894b) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0008e20c) mup3_control_keys_pane_g

0x5aaa,	// (0x0008448a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5aaa,	// (0x0008448a) popup_toolbar2_fixed_window_cp01

0x9a47,	// (0x00088427) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9a47,	// (0x00088427) popup_toolbar2_fixed_window_cp02

0x08c9,	// (0x0007f2a9) popup_call2_audio_second_window_t4_ParamLimits

0x08c9,	// (0x0007f2a9) popup_call2_audio_second_window_t4

0x0df7,	// (0x0007f7d7) popup_call2_audio_first_window_t6_ParamLimits

0x0df7,	// (0x0007f7d7) popup_call2_audio_first_window_t6

0x108d,	// (0x0007fa6d) popup_call2_audio_out_window_t6_ParamLimits

0x108d,	// (0x0007fa6d) popup_call2_audio_out_window_t6

0x01c9,	// (0x0007eba9) main_vitu_pane

0x9f7b,	// (0x0008895b) aid_size_cell_itu_ParamLimits

0x9f7b,	// (0x0008895b) aid_size_cell_itu

0x23f5,	// (0x00080dd5) bg_popup_window_pane_cp08_ParamLimits

0x23f5,	// (0x00080dd5) bg_popup_window_pane_cp08

0x9f89,	// (0x00088969) field_vitu_entry_pane_ParamLimits

0x9f89,	// (0x00088969) field_vitu_entry_pane

0x9f98,	// (0x00088978) grid_vitu_function_pane_ParamLimits

0x9f98,	// (0x00088978) grid_vitu_function_pane

0x9fa8,	// (0x00088988) grid_vitu_itu_pane_ParamLimits

0x9fa8,	// (0x00088988) grid_vitu_itu_pane

0x9fb8,	// (0x00088998) cell_vitu_itu_pane_ParamLimits

0x9fb8,	// (0x00088998) cell_vitu_itu_pane

0x9fcd,	// (0x000889ad) cell_vitu_function_pane_ParamLimits

0x9fcd,	// (0x000889ad) cell_vitu_function_pane

0xf0cd,	// (0x0008daad) bg_popup_sub_pane_cp08_ParamLimits

0xf0cd,	// (0x0008daad) bg_popup_sub_pane_cp08

0x9fdf,	// (0x000889bf) field_vitu_entry_pane_t1_ParamLimits

0x9fdf,	// (0x000889bf) field_vitu_entry_pane_t1

0x1fbe,	// (0x0008099e) field_vitu_entry_pane_t2_ParamLimits

0x1fbe,	// (0x0008099e) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0008e21a) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0008e21a) field_vitu_entry_pane_t

0x1fdb,	// (0x000809bb) bg_button_pane_cp05_ParamLimits

0x1fdb,	// (0x000809bb) bg_button_pane_cp05

0x9ffb,	// (0x000889db) cell_vitu_itu_pane_g1

0xa013,	// (0x000889f3) cell_vitu_itu_pane_t1_ParamLimits

0xa013,	// (0x000889f3) cell_vitu_itu_pane_t1

0xa025,	// (0x00088a05) cell_vitu_itu_pane_t2_ParamLimits

0xa025,	// (0x00088a05) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0008e21f) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0008e21f) cell_vitu_itu_pane_t

0x1fe9,	// (0x000809c9) bg_button_pane_cp07

0xa05a,	// (0x00088a3a) cell_vitu_function_pane_g1

0x5d66,	// (0x00084746) main_calc_pane_g1

0x58b3,	// (0x00084293) aid_visual_content_pane

0x01c9,	// (0x0007eba9) main_vradio_pane

0xa063,	// (0x00088a43) main_vradio_pane_g1_ParamLimits

0xa063,	// (0x00088a43) main_vradio_pane_g1

0x1ff3,	// (0x000809d3) main_vradio_pane_g2_ParamLimits

0x1ff3,	// (0x000809d3) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0008e226) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0008e226) main_vradio_pane_g

0xa073,	// (0x00088a53) main_vradio_pane_t1_ParamLimits

0xa073,	// (0x00088a53) main_vradio_pane_t1

0xa085,	// (0x00088a65) main_vradio_pane_t2_ParamLimits

0xa085,	// (0x00088a65) main_vradio_pane_t2

0x2000,	// (0x000809e0) main_vradio_pane_t3_ParamLimits

0x2000,	// (0x000809e0) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0008e22b) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0008e22b) main_vradio_pane_t

0xa097,	// (0x00088a77) vradio_rocker_control_pane_ParamLimits

0xa097,	// (0x00088a77) vradio_rocker_control_pane

0xa0a3,	// (0x00088a83) vradio_station_info_pane_ParamLimits

0xa0a3,	// (0x00088a83) vradio_station_info_pane

0x2014,	// (0x000809f4) vradio_frequency_info_pane_ParamLimits

0x2014,	// (0x000809f4) vradio_frequency_info_pane

0x19aa,	// (0x0008038a) vradio_station_info_pane_g1

0x2023,	// (0x00080a03) vradio_station_info_pane_t1_ParamLimits

0x2023,	// (0x00080a03) vradio_station_info_pane_t1

0x2045,	// (0x00080a25) vradio_station_info_pane_t2_ParamLimits

0x2045,	// (0x00080a25) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0008e232) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0008e232) vradio_station_info_pane_t

0x2057,	// (0x00080a37) vradio_tuning_pane

0x205f,	// (0x00080a3f) vradio_rocker_control_pane_g1

0x2067,	// (0x00080a47) vradio_rocker_control_pane_g2

0x206f,	// (0x00080a4f) vradio_rocker_control_pane_g3

0x2077,	// (0x00080a57) vradio_rocker_control_pane_g4

0x207f,	// (0x00080a5f) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0008e237) vradio_rocker_control_pane_g

0xa0b2,	// (0x00088a92) vradio_frequency_info_pane_g1

0x2087,	// (0x00080a67) vradio_frequency_info_pane_t1_ParamLimits

0x2087,	// (0x00080a67) vradio_frequency_info_pane_t1

0xa0bc,	// (0x00088a9c) vradio_tuning_pane_g1

0xa0c5,	// (0x00088aa5) vradio_tuning_pane_t1

0x01ff,	// (0x0007ebdf) area_side_right_pane_ParamLimits

0x01ff,	// (0x0007ebdf) area_side_right_pane

0x1508,	// (0x0007fee8) status_small_pane_g1

0x1510,	// (0x0007fef0) status_small_pane_g2

0x1519,	// (0x0007fef9) status_small_pane_g3

0x1522,	// (0x0007ff02) status_small_pane_g4

0x0003,

0xf617,	// (0x0008dff7) status_small_pane_g

0x152b,	// (0x0007ff0b) status_small_pane_t1

0x01c9,	// (0x0007eba9) main_video3_pane

0x209b,	// (0x00080a7b) cams_zoom_vslider_pane

0x20a3,	// (0x00080a83) image3_wide_pane_ParamLimits

0x20a3,	// (0x00080a83) image3_wide_pane

0x20bd,	// (0x00080a9d) image3_wide_small_pane

0x20c9,	// (0x00080aa9) main_video3_pane_g1_ParamLimits

0x20c9,	// (0x00080aa9) main_video3_pane_g1

0x20e5,	// (0x00080ac5) main_video3_pane_g2_ParamLimits

0x20e5,	// (0x00080ac5) main_video3_pane_g2

0x0001,

0xf862,	// (0x0008e242) main_video3_pane_g_ParamLimits

0xf862,	// (0x0008e242) main_video3_pane_g

0x2101,	// (0x00080ae1) main_video3_pane_t1_ParamLimits

0x2101,	// (0x00080ae1) main_video3_pane_t1

0x212c,	// (0x00080b0c) main_video3_pane_t2_ParamLimits

0x212c,	// (0x00080b0c) main_video3_pane_t2

0x2157,	// (0x00080b37) main_video3_pane_t3_ParamLimits

0x2157,	// (0x00080b37) main_video3_pane_t3

0x0002,

0xf867,	// (0x0008e247) main_video3_pane_t_ParamLimits

0xf867,	// (0x0008e247) main_video3_pane_t

0x2184,	// (0x00080b64) cams_zoom_vslider_pane_g1

0x218d,	// (0x00080b6d) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0008e24e) cams_zoom_vslider_pane_g

0x2195,	// (0x00080b75) small_slider_vertical_pane

0x19aa,	// (0x0008038a) small_slider_vertical_pane_g1

0x19aa,	// (0x0008038a) small_slider_vertical_pane_g2

0x219d,	// (0x00080b7d) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0008e253) small_slider_vertical_pane_g

0x01c9,	// (0x0007eba9) main_hwr_training_pane

0x21a6,	// (0x00080b86) hwr_training_instruct_pane_ParamLimits

0x21a6,	// (0x00080b86) hwr_training_instruct_pane

0xa0d4,	// (0x00088ab4) hwr_training_navi_pane_ParamLimits

0xa0d4,	// (0x00088ab4) hwr_training_navi_pane

0xa0ee,	// (0x00088ace) hwr_training_write_pane_ParamLimits

0xa0ee,	// (0x00088ace) hwr_training_write_pane

0x01c9,	// (0x0007eba9) bg_frame_shadow_pane

0x21dd,	// (0x00080bbd) hwr_training_write_pane_g1

0x21e5,	// (0x00080bc5) hwr_training_write_pane_g2

0x21ed,	// (0x00080bcd) hwr_training_write_pane_g3

0x21f5,	// (0x00080bd5) hwr_training_write_pane_g4

0x21fd,	// (0x00080bdd) hwr_training_write_pane_g5

0x2205,	// (0x00080be5) hwr_training_write_pane_g6

0x220d,	// (0x00080bed) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0008e25a) hwr_training_write_pane_g

0xa126,	// (0x00088b06) hwr_training_navi_pane_g1_ParamLimits

0xa126,	// (0x00088b06) hwr_training_navi_pane_g1

0xa138,	// (0x00088b18) hwr_training_navi_pane_g2_ParamLimits

0xa138,	// (0x00088b18) hwr_training_navi_pane_g2

0xa14a,	// (0x00088b2a) hwr_training_navi_pane_g3_ParamLimits

0xa14a,	// (0x00088b2a) hwr_training_navi_pane_g3

0xa15a,	// (0x00088b3a) hwr_training_navi_pane_g4_ParamLimits

0xa15a,	// (0x00088b3a) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0008e269) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0008e269) hwr_training_navi_pane_g

0xa174,	// (0x00088b54) hwr_training_navi_pane_t1

0xa182,	// (0x00088b62) list_single_hwr_training_instruct_pane_ParamLimits

0xa182,	// (0x00088b62) list_single_hwr_training_instruct_pane

0x2215,	// (0x00080bf5) list_single_hwr_training_instruct_pane_t1

0x18ea,	// (0x000802ca) bg_frame_shadow_pane_g1

0x2224,	// (0x00080c04) bg_frame_shadow_pane_g2

0x222c,	// (0x00080c0c) bg_frame_shadow_pane_g3

0x2234,	// (0x00080c14) bg_frame_shadow_pane_g4

0x223c,	// (0x00080c1c) bg_frame_shadow_pane_g5

0x2244,	// (0x00080c24) bg_frame_shadow_pane_g6

0x224c,	// (0x00080c2c) bg_frame_shadow_pane_g7

0xe270,	// (0x0008cc50) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0008e274) bg_frame_shadow_pane_g

0x01c9,	// (0x0007eba9) main_video_tele_dialer_pane

0xa1a7,	// (0x00088b87) aid_size_cell_video_keypad_ParamLimits

0xa1a7,	// (0x00088b87) aid_size_cell_video_keypad

0xa1b7,	// (0x00088b97) grid_video_dialer_keypad_pane_ParamLimits

0xa1b7,	// (0x00088b97) grid_video_dialer_keypad_pane

0xa1e9,	// (0x00088bc9) video_down_pane_cp_ParamLimits

0xa1e9,	// (0x00088bc9) video_down_pane_cp

0xa1f5,	// (0x00088bd5) cell_video_dialer_keypad_pane_ParamLimits

0xa1f5,	// (0x00088bd5) cell_video_dialer_keypad_pane

0x2270,	// (0x00080c50) bg_button_pane_cp08_ParamLimits

0x2270,	// (0x00080c50) bg_button_pane_cp08

0xa20a,	// (0x00088bea) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa20a,	// (0x00088bea) cell_video_dialer_keypad_pane_g1

0x9a21,	// (0x00088401) mup3_rocker2_pane_ParamLimits

0x9a21,	// (0x00088401) mup3_rocker2_pane

0x19aa,	// (0x0008038a) mup3_rocker2_pane_g1

0x8955,	// (0x00087335) main_dialer2_pane

0x01c9,	// (0x0007eba9) main_mp4_pane

0xa24c,	// (0x00088c2c) main_mp4_pane_g1_ParamLimits

0xa24c,	// (0x00088c2c) main_mp4_pane_g1

0xa25a,	// (0x00088c3a) main_mp4_pane_g2_ParamLimits

0xa25a,	// (0x00088c3a) main_mp4_pane_g2

0xa268,	// (0x00088c48) main_mp4_pane_g3_ParamLimits

0xa268,	// (0x00088c48) main_mp4_pane_g3

0xa2ad,	// (0x00088c8d) main_mp4_pane_g4_ParamLimits

0xa2ad,	// (0x00088c8d) main_mp4_pane_g4

0xa2d5,	// (0x00088cb5) main_mp4_pane_g5_ParamLimits

0xa2d5,	// (0x00088cb5) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0008e294) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0008e294) main_mp4_pane_g

0xa325,	// (0x00088d05) main_mp4_pane_t1_ParamLimits

0xa325,	// (0x00088d05) main_mp4_pane_t1

0xa381,	// (0x00088d61) main_mp4_pane_t2_ParamLimits

0xa381,	// (0x00088d61) main_mp4_pane_t2

0x227c,	// (0x00080c5c) main_mp4_pane_t3_ParamLimits

0x227c,	// (0x00080c5c) main_mp4_pane_t3

0xa3d3,	// (0x00088db3) main_mp4_pane_t4_ParamLimits

0xa3d3,	// (0x00088db3) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0008e2a1) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0008e2a1) main_mp4_pane_t

0xa417,	// (0x00088df7) mp4_progress_pane_ParamLimits

0xa417,	// (0x00088df7) mp4_progress_pane

0xa461,	// (0x00088e41) mp4_rocker_pane_ParamLimits

0xa461,	// (0x00088e41) mp4_rocker_pane

0x22a4,	// (0x00080c84) mp4_progress_pane_t1

0x22bd,	// (0x00080c9d) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0008e2aa) mp4_progress_pane_t

0x22d6,	// (0x00080cb6) mup_progress_pane_cp04

0x2be9,	// (0x000815c9) mp4_rocker_pane_g1

0xa481,	// (0x00088e61) aid_cell_size_keypad2_ParamLimits

0xa481,	// (0x00088e61) aid_cell_size_keypad2

0xa491,	// (0x00088e71) dialer2_ne_pane_ParamLimits

0xa491,	// (0x00088e71) dialer2_ne_pane

0xa49f,	// (0x00088e7f) grid_dialer2_keypad_pane_ParamLimits

0xa49f,	// (0x00088e7f) grid_dialer2_keypad_pane

0x2c44,	// (0x00081624) bg_popup_call_pane_cp07_ParamLimits

0x2c44,	// (0x00081624) bg_popup_call_pane_cp07

0xa4af,	// (0x00088e8f) dialer2_ne_pane_t1_ParamLimits

0xa4af,	// (0x00088e8f) dialer2_ne_pane_t1

0xa4d4,	// (0x00088eb4) cell_dialer2_keypad_pane_ParamLimits

0xa4d4,	// (0x00088eb4) cell_dialer2_keypad_pane

0x22f4,	// (0x00080cd4) bg_button_pane_pane_cp04_ParamLimits

0x22f4,	// (0x00080cd4) bg_button_pane_pane_cp04

0xa4e9,	// (0x00088ec9) cell_dialer2_keypad_pane_g1_ParamLimits

0xa4e9,	// (0x00088ec9) cell_dialer2_keypad_pane_g1

0x67fb,	// (0x000851db) aid_placing_vt_set_content_ParamLimits

0x67fb,	// (0x000851db) aid_placing_vt_set_content

0x6827,	// (0x00085207) aid_placing_vt_set_title_ParamLimits

0x6827,	// (0x00085207) aid_placing_vt_set_title

0x01c9,	// (0x0007eba9) main_image3_pane

0xa583,	// (0x00088f63) area_side_right_pane_cp01_ParamLimits

0xa583,	// (0x00088f63) area_side_right_pane_cp01

0xa5b0,	// (0x00088f90) main_image3_pane_g1_ParamLimits

0xa5b0,	// (0x00088f90) main_image3_pane_g1

0xa5be,	// (0x00088f9e) main_image3_pane_g2_ParamLimits

0xa5be,	// (0x00088f9e) main_image3_pane_g2

0xa5d7,	// (0x00088fb7) main_image3_pane_g3_ParamLimits

0xa5d7,	// (0x00088fb7) main_image3_pane_g3

0xa5f0,	// (0x00088fd0) main_image3_pane_g4_ParamLimits

0xa5f0,	// (0x00088fd0) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0008e2b9) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0008e2b9) main_image3_pane_g

0xa609,	// (0x00088fe9) main_image3_pane_t1_ParamLimits

0xa609,	// (0x00088fe9) main_image3_pane_t1

0xa62e,	// (0x0008900e) main_image3_pane_t2_ParamLimits

0xa62e,	// (0x0008900e) main_image3_pane_t2

0xa64d,	// (0x0008902d) main_image3_pane_t3_ParamLimits

0xa64d,	// (0x0008902d) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0008e2c2) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0008e2c2) main_image3_pane_t

0x23f5,	// (0x00080dd5) grid_sctrl_middle_pane_cp01_ParamLimits

0x23f5,	// (0x00080dd5) grid_sctrl_middle_pane_cp01

0xa6ae,	// (0x0008908e) cell_sctrl_middle_pane_cp01_ParamLimits

0xa6ae,	// (0x0008908e) cell_sctrl_middle_pane_cp01

0xa6bf,	// (0x0008909f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa6bf,	// (0x0008909f) cell_sctrl_middle_pane_cp01_g1

0x01c9,	// (0x0007eba9) main_call4_pane

0xa6cc,	// (0x000890ac) aid_size_button_call4_ParamLimits

0xa6cc,	// (0x000890ac) aid_size_button_call4

0xa6fc,	// (0x000890dc) call4_windows_pane_ParamLimits

0xa6fc,	// (0x000890dc) call4_windows_pane

0xa716,	// (0x000890f6) grid_call4_button_pane_ParamLimits

0xa716,	// (0x000890f6) grid_call4_button_pane

0x2300,	// (0x00080ce0) call4_windows_conf_pane

0x2317,	// (0x00080cf7) popup_call4_audio_first_window_ParamLimits

0x2317,	// (0x00080cf7) popup_call4_audio_first_window

0x2363,	// (0x00080d43) popup_call4_audio_second_window_ParamLimits

0x2363,	// (0x00080d43) popup_call4_audio_second_window

0x2377,	// (0x00080d57) popup_call4_audio_wait_window_ParamLimits

0x2377,	// (0x00080d57) popup_call4_audio_wait_window

0xa73a,	// (0x0008911a) cell_call4_button_pane_ParamLimits

0xa73a,	// (0x0008911a) cell_call4_button_pane

0xa75f,	// (0x0008913f) bg_button_pane_cp09_ParamLimits

0xa75f,	// (0x0008913f) bg_button_pane_cp09

0xa76b,	// (0x0008914b) cell_call4_button_pane_g1_ParamLimits

0xa76b,	// (0x0008914b) cell_call4_button_pane_g1

0xa778,	// (0x00089158) cell_call4_button_pane_t1_ParamLimits

0xa778,	// (0x00089158) cell_call4_button_pane_t1

0x23bf,	// (0x00080d9f) popup_call4_audio_conf_window_ParamLimits

0x23bf,	// (0x00080d9f) popup_call4_audio_conf_window

0x9a54,	// (0x00088434) mup3_progress_pane_t1_ParamLimits

0x9a73,	// (0x00088453) mup3_progress_pane_t2_ParamLimits

0x1cbd,	// (0x0008069d) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0008e19b) mup3_progress_pane_t_ParamLimits

0x1cda,	// (0x000806ba) mup_progress_pane_cp03_ParamLimits

0x9f73,	// (0x00088953) mup3_control_keys_pane_g4_copy1

0xa445,	// (0x00088e25) mp4_rocker2_pane_ParamLimits

0xa445,	// (0x00088e25) mp4_rocker2_pane

0x23db,	// (0x00080dbb) mp4_rocker2_pane_g1

0x23d3,	// (0x00080db3) mp4_rocker2_pane_g2

0xa78a,	// (0x0008916a) mp4_rocker2_pane_g3

0xa792,	// (0x00089172) mp4_rocker2_pane_g4

0xa79a,	// (0x0008917a) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0008e2cb) mp4_rocker2_pane_g

0x01c9,	// (0x0007eba9) main_camera4_pane

0x01c9,	// (0x0007eba9) main_video4_pane

0xa1c5,	// (0x00088ba5) main_video_tele_dialer_pane_t1_ParamLimits

0xa1c5,	// (0x00088ba5) main_video_tele_dialer_pane_t1

0xa1d7,	// (0x00088bb7) main_video_tele_dialer_pane_t2_ParamLimits

0xa1d7,	// (0x00088bb7) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0008e285) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0008e285) main_video_tele_dialer_pane_t

0xa7ba,	// (0x0008919a) cam4_autofocus_pane_ParamLimits

0xa7ba,	// (0x0008919a) cam4_autofocus_pane

0xa7d4,	// (0x000891b4) cam4_image_uncrop_pane_ParamLimits

0xa7d4,	// (0x000891b4) cam4_image_uncrop_pane

0xa7eb,	// (0x000891cb) cam4_indicators_pane_ParamLimits

0xa7eb,	// (0x000891cb) cam4_indicators_pane

0xa807,	// (0x000891e7) main_camera4_pane_g1_ParamLimits

0xa807,	// (0x000891e7) main_camera4_pane_g1

0xa813,	// (0x000891f3) main_camera4_pane_g2_ParamLimits

0xa813,	// (0x000891f3) main_camera4_pane_g2

0xa813,	// (0x000891f3) main_camera4_pane_g3_ParamLimits

0xa813,	// (0x000891f3) main_camera4_pane_g3

0xa81f,	// (0x000891ff) main_camera4_pane_g4_ParamLimits

0xa81f,	// (0x000891ff) main_camera4_pane_g4

0xa82b,	// (0x0008920b) main_camera4_pane_g5_ParamLimits

0xa82b,	// (0x0008920b) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0008e2d6) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0008e2d6) main_camera4_pane_g

0xa845,	// (0x00089225) main_camera4_pane_t1_ParamLimits

0xa845,	// (0x00089225) main_camera4_pane_t1

0xa88d,	// (0x0008926d) bg_tb_trans_pane_cp06

0xa8a3,	// (0x00089283) cam4_indicators_pane_g1

0xa8b4,	// (0x00089294) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0008e2f1) cam4_indicators_pane_g

0xa8d2,	// (0x000892b2) cam4_indicators_pane_t1

0xa8fc,	// (0x000892dc) main_video4_pane_g1_ParamLimits

0xa8fc,	// (0x000892dc) main_video4_pane_g1

0xa908,	// (0x000892e8) main_video4_pane_g2_ParamLimits

0xa908,	// (0x000892e8) main_video4_pane_g2

0xa914,	// (0x000892f4) main_video4_pane_g3_ParamLimits

0xa914,	// (0x000892f4) main_video4_pane_g3

0xa920,	// (0x00089300) main_video4_pane_g4_ParamLimits

0xa920,	// (0x00089300) main_video4_pane_g4

0x0004,

0xf918,	// (0x0008e2f8) main_video4_pane_g_ParamLimits

0xf918,	// (0x0008e2f8) main_video4_pane_g

0xa940,	// (0x00089320) vid4_indicators_pane_ParamLimits

0xa940,	// (0x00089320) vid4_indicators_pane

0xa95e,	// (0x0008933e) video4_image_uncrop_cif_pane_ParamLimits

0xa95e,	// (0x0008933e) video4_image_uncrop_cif_pane

0xa96d,	// (0x0008934d) video4_image_uncrop_nhd_pane_ParamLimits

0xa96d,	// (0x0008934d) video4_image_uncrop_nhd_pane

0xa7d4,	// (0x000891b4) video4_image_uncrop_vga_pane_ParamLimits

0xa7d4,	// (0x000891b4) video4_image_uncrop_vga_pane

0xa97a,	// (0x0008935a) bg_tb_trans_pane_cp07

0xa992,	// (0x00089372) vid4_indicators_pane_g1

0xa9a3,	// (0x00089383) vid4_indicators_pane_g2

0xa9b4,	// (0x00089394) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0008e303) vid4_indicators_pane_g

0xa9e1,	// (0x000893c1) vid4_indicators_pane_t1

0xa9fa,	// (0x000893da) cam4_autofocus_pane_g1

0xaa02,	// (0x000893e2) cam4_autofocus_pane_g2

0xaa0a,	// (0x000893ea) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0008e30e) cam4_autofocus_pane_g

0xaa12,	// (0x000893f2) cam4_autofocus_pane_g3_copy1

0x2254,	// (0x00080c34) video_down_pane_cp_t1

0x2262,	// (0x00080c42) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0008e28a) video_down_pane_cp_t

0x23f5,	// (0x00080dd5) popup_vitu2_window_ParamLimits

0x23f5,	// (0x00080dd5) popup_vitu2_window

0xaa1a,	// (0x000893fa) aid_size_cell2_itu2_ParamLimits

0xaa1a,	// (0x000893fa) aid_size_cell2_itu2

0xaa3c,	// (0x0008941c) aid_size_cell_itu2_ParamLimits

0xaa3c,	// (0x0008941c) aid_size_cell_itu2

0xaa80,	// (0x00089460) bg_popup_window_pane_cp09_ParamLimits

0xaa80,	// (0x00089460) bg_popup_window_pane_cp09

0xaa8e,	// (0x0008946e) field_vitu2_entry_pane_ParamLimits

0xaa8e,	// (0x0008946e) field_vitu2_entry_pane

0xaaae,	// (0x0008948e) grid_vitu2_function_pane_ParamLimits

0xaaae,	// (0x0008948e) grid_vitu2_function_pane

0xaaf2,	// (0x000894d2) grid_vitu2_itu_pane_ParamLimits

0xaaf2,	// (0x000894d2) grid_vitu2_itu_pane

0xab6a,	// (0x0008954a) cell_vitu2_itu_pane_ParamLimits

0xab6a,	// (0x0008954a) cell_vitu2_itu_pane

0xab7f,	// (0x0008955f) cell_vitu2_function_pane_ParamLimits

0xab7f,	// (0x0008955f) cell_vitu2_function_pane

0x2403,	// (0x00080de3) bg_popup_call_pane_cp08_ParamLimits

0x2403,	// (0x00080de3) bg_popup_call_pane_cp08

0x241c,	// (0x00080dfc) field_vitu2_entry_pane_g1

0x2428,	// (0x00080e08) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0008e315) field_vitu2_entry_pane_g

0x2442,	// (0x00080e22) field_vitu2_entry_pane_t1_ParamLimits

0x2442,	// (0x00080e22) field_vitu2_entry_pane_t1

0x2471,	// (0x00080e51) field_vitu2_entry_pane_t2_ParamLimits

0x2471,	// (0x00080e51) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0008e31c) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0008e31c) field_vitu2_entry_pane_t

0xabbe,	// (0x0008959e) bg_button_pane_cp010_ParamLimits

0xabbe,	// (0x0008959e) bg_button_pane_cp010

0xabcc,	// (0x000895ac) cell_vitu2_itu_pane_g1

0xabea,	// (0x000895ca) cell_vitu2_itu_pane_t1_ParamLimits

0xabea,	// (0x000895ca) cell_vitu2_itu_pane_t1

0x57b8,	// (0x00084198) cell_vitu2_itu_pane_t2_ParamLimits

0x57b8,	// (0x00084198) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0008e326) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0008e326) cell_vitu2_itu_pane_t

0xa97a,	// (0x0008935a) bg_button_pane_cp011

0xac3c,	// (0x0008961c) cell_vitu2_function_pane_g1

0x01c9,	// (0x0007eba9) main_myfav_hc_pane

0xa68f,	// (0x0008906f) popup_image3_note_pane_ParamLimits

0xa68f,	// (0x0008906f) popup_image3_note_pane

0xa69d,	// (0x0008907d) popup_image3_tool_bar_pane_ParamLimits

0xa69d,	// (0x0008907d) popup_image3_tool_bar_pane

0x5826,	// (0x00084206) cell_vitu2_itu_pane_t3_ParamLimits

0x5826,	// (0x00084206) cell_vitu2_itu_pane_t3

0x01c9,	// (0x0007eba9) bg_popup_trans_pane

0x2496,	// (0x00080e76) grid_image3_tool_bar_pane

0x24a0,	// (0x00080e80) bg_popup_trans_pane_g1

0xe5ad,	// (0x0008cf8d) bg_popup_trans_pane_g2

0x24a8,	// (0x00080e88) bg_popup_trans_pane_g3

0x24b0,	// (0x00080e90) bg_popup_trans_pane_g4

0x24b8,	// (0x00080e98) bg_popup_trans_pane_g5

0x24c0,	// (0x00080ea0) bg_popup_trans_pane_g6

0x24c8,	// (0x00080ea8) bg_popup_trans_pane_g7

0x24d0,	// (0x00080eb0) bg_popup_trans_pane_g8

0xe58d,	// (0x0008cf6d) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0008e32d) bg_popup_trans_pane_g

0x24d8,	// (0x00080eb8) cell_image3_tool_bar_pane_ParamLimits

0x24d8,	// (0x00080eb8) cell_image3_tool_bar_pane

0x19aa,	// (0x0008038a) cell_image3_tool_bar_pane_g1

0x01c9,	// (0x0007eba9) bg_popup_trans_pane_cp1

0x24ec,	// (0x00080ecc) popup_image3_note_pane_t1

0x24fa,	// (0x00080eda) popup_image3_note_pane_t2

0x2508,	// (0x00080ee8) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0008e340) popup_image3_note_pane_t

0x2516,	// (0x00080ef6) popup_image3_note_pane_t3_copy1

0xac50,	// (0x00089630) bg_myfav_hc_instruction_pane_ParamLimits

0xac50,	// (0x00089630) bg_myfav_hc_instruction_pane

0xac68,	// (0x00089648) cell_myfav_contact_pane_ParamLimits

0xac68,	// (0x00089648) cell_myfav_contact_pane

0xac82,	// (0x00089662) cell_myfav_contact_pane_cp1_ParamLimits

0xac82,	// (0x00089662) cell_myfav_contact_pane_cp1

0xac9a,	// (0x0008967a) cell_myfav_contact_pane_cp2_ParamLimits

0xac9a,	// (0x0008967a) cell_myfav_contact_pane_cp2

0xacb2,	// (0x00089692) cell_myfav_contact_pane_cp3_ParamLimits

0xacb2,	// (0x00089692) cell_myfav_contact_pane_cp3

0xacc9,	// (0x000896a9) cell_myfav_contact_pane_cp4_ParamLimits

0xacc9,	// (0x000896a9) cell_myfav_contact_pane_cp4

0xacdf,	// (0x000896bf) cell_myfav_contact_pane_cp5_ParamLimits

0xacdf,	// (0x000896bf) cell_myfav_contact_pane_cp5

0xacf3,	// (0x000896d3) cell_myfav_contact_pane_cp6_ParamLimits

0xacf3,	// (0x000896d3) cell_myfav_contact_pane_cp6

0xad07,	// (0x000896e7) cell_myfav_contact_pane_cp7_ParamLimits

0xad07,	// (0x000896e7) cell_myfav_contact_pane_cp7

0x2524,	// (0x00080f04) listscroll_gen_pane_cp05

0xad1f,	// (0x000896ff) main_myfav_hc_pane_g1_ParamLimits

0xad1f,	// (0x000896ff) main_myfav_hc_pane_g1

0xad35,	// (0x00089715) main_myfav_hc_pane_g2_ParamLimits

0xad35,	// (0x00089715) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0008e347) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0008e347) main_myfav_hc_pane_g

0xad63,	// (0x00089743) main_myfav_hc_pane_t1_ParamLimits

0xad63,	// (0x00089743) main_myfav_hc_pane_t1

0x252d,	// (0x00080f0d) main_myfav_hc_pane_t2_ParamLimits

0x252d,	// (0x00080f0d) main_myfav_hc_pane_t2

0x253f,	// (0x00080f1f) main_myfav_hc_pane_t3_ParamLimits

0x253f,	// (0x00080f1f) main_myfav_hc_pane_t3

0xad7a,	// (0x0008975a) main_myfav_hc_pane_t4_ParamLimits

0xad7a,	// (0x0008975a) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0008e34e) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0008e34e) main_myfav_hc_pane_t

0x19aa,	// (0x0008038a) bg_myfav_hc_instruction_pane_g1

0x2551,	// (0x00080f31) cell_myfav_contact_pane_g1_ParamLimits

0x2551,	// (0x00080f31) cell_myfav_contact_pane_g1

0x2551,	// (0x00080f31) cell_myfav_contact_pane_g2_ParamLimits

0x2551,	// (0x00080f31) cell_myfav_contact_pane_g2

0x255d,	// (0x00080f3d) cell_myfav_contact_pane_g3_ParamLimits

0x255d,	// (0x00080f3d) cell_myfav_contact_pane_g3

0x1ca7,	// (0x00080687) cell_myfav_contact_pane_g4_ParamLimits

0x1ca7,	// (0x00080687) cell_myfav_contact_pane_g4

0x256a,	// (0x00080f4a) cell_myfav_contact_pane_g5_ParamLimits

0x256a,	// (0x00080f4a) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0008e359) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0008e359) cell_myfav_contact_pane_g

0xad4b,	// (0x0008972b) main_myfav_hc_pane_g3_ParamLimits

0xad4b,	// (0x0008972b) main_myfav_hc_pane_g3

0x59ef,	// (0x000843cf) popup_adpt_find_window

0xada4,	// (0x00089784) afind_page_pane_ParamLimits

0xada4,	// (0x00089784) afind_page_pane

0xadb1,	// (0x00089791) aid_size_cell_afind_ParamLimits

0xadb1,	// (0x00089791) aid_size_cell_afind

0xadcb,	// (0x000897ab) bg_popup_sub_pane_cp09_ParamLimits

0xadcb,	// (0x000897ab) bg_popup_sub_pane_cp09

0xadd8,	// (0x000897b8) find_pane_cp01_ParamLimits

0xadd8,	// (0x000897b8) find_pane_cp01

0x2576,	// (0x00080f56) grid_afind_control_pane_ParamLimits

0x2576,	// (0x00080f56) grid_afind_control_pane

0xade5,	// (0x000897c5) grid_afind_pane_ParamLimits

0xade5,	// (0x000897c5) grid_afind_pane

0xae01,	// (0x000897e1) cell_afind_pane_ParamLimits

0xae01,	// (0x000897e1) cell_afind_pane

0x19aa,	// (0x0008038a) afind_page_pane_g1

0xae49,	// (0x00089829) afind_page_pane_g2

0xae52,	// (0x00089832) afind_page_pane_g3

0x0002,

0xf984,	// (0x0008e364) afind_page_pane_g

0xae5b,	// (0x0008983b) afind_page_pane_t1

0x258a,	// (0x00080f6a) cell_afind_grid_control_pane_ParamLimits

0x258a,	// (0x00080f6a) cell_afind_grid_control_pane

0x22f4,	// (0x00080cd4) bg_button_pane_cp69_ParamLimits

0x22f4,	// (0x00080cd4) bg_button_pane_cp69

0xae7b,	// (0x0008985b) cell_afind_pane_g1_ParamLimits

0xae7b,	// (0x0008985b) cell_afind_pane_g1

0xae88,	// (0x00089868) cell_afind_pane_t1_ParamLimits

0xae88,	// (0x00089868) cell_afind_pane_t1

0xe3a6,	// (0x0008cd86) bg_button_pane_cp72

0x2599,	// (0x00080f79) cell_afind_grid_control_pane_g1

0x84d3,	// (0x00086eb3) aid_image_placing_area_ParamLimits

0x84d3,	// (0x00086eb3) aid_image_placing_area

0x1fa6,	// (0x00080986) field_vitu_entry_pane_g1_ParamLimits

0x1fa6,	// (0x00080986) field_vitu_entry_pane_g1

0x1fb2,	// (0x00080992) field_vitu_entry_pane_g2_ParamLimits

0x1fb2,	// (0x00080992) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0008e215) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0008e215) field_vitu_entry_pane_g

0x9ffb,	// (0x000889db) cell_vitu_itu_pane_g1_ParamLimits

0xa03d,	// (0x00088a1d) cell_vitu_itu_pane_t3_ParamLimits

0xa03d,	// (0x00088a1d) cell_vitu_itu_pane_t3

0x22a4,	// (0x00080c84) mp4_progress_pane_t1_ParamLimits

0x22bd,	// (0x00080c9d) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0008e2aa) mp4_progress_pane_t_ParamLimits

0x22d6,	// (0x00080cb6) mup_progress_pane_cp04_ParamLimits

0xad8e,	// (0x0008976e) main_myfav_hc_pane_t5_ParamLimits

0xad8e,	// (0x0008976e) main_myfav_hc_pane_t5

0x01ef,	// (0x0007ebcf) aid_zoom_text_primary

0x59ef,	// (0x000843cf) popup_adpt_find_window_ParamLimits

0xf0cd,	// (0x0008daad) main_cam_set_pane

0xa7f9,	// (0x000891d9) cam4_zoom_pane_ParamLimits

0xa7f9,	// (0x000891d9) cam4_zoom_pane

0xae9a,	// (0x0008987a) main_cam_set_pane_g1_ParamLimits

0xae9a,	// (0x0008987a) main_cam_set_pane_g1

0xaea8,	// (0x00089888) main_cam_set_pane_g2_ParamLimits

0xaea8,	// (0x00089888) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0008e36b) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0008e36b) main_cam_set_pane_g

0xaeb4,	// (0x00089894) main_cam_set_pane_t1_ParamLimits

0xaeb4,	// (0x00089894) main_cam_set_pane_t1

0xaed0,	// (0x000898b0) main_cset_listscroll_pane_ParamLimits

0xaed0,	// (0x000898b0) main_cset_listscroll_pane

0xaefb,	// (0x000898db) main_cset_slider_pane_ParamLimits

0xaefb,	// (0x000898db) main_cset_slider_pane

0x25aa,	// (0x00080f8a) main_cset_list_pane_ParamLimits

0x25aa,	// (0x00080f8a) main_cset_list_pane

0x25ba,	// (0x00080f9a) scroll_pane_cp028

0xaf1a,	// (0x000898fa) aid_area_touch_slider

0xaf36,	// (0x00089916) cset_slider_pane

0xaf60,	// (0x00089940) main_cset_slider_pane_g1

0xaf75,	// (0x00089955) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0008e370) main_cset_slider_pane_g

0x25f3,	// (0x00080fd3) main_cset_slider_pane_t1

0xb037,	// (0x00089a17) main_cset_slider_pane_t2

0xb051,	// (0x00089a31) main_cset_slider_pane_t3

0xb06b,	// (0x00089a4b) main_cset_slider_pane_t4

0xb085,	// (0x00089a65) main_cset_slider_pane_t5

0xb0a3,	// (0x00089a83) main_cset_slider_pane_t6

0xb0ba,	// (0x00089a9a) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0008e395) main_cset_slider_pane_t

0xb1c6,	// (0x00089ba6) cset_list_set_pane_ParamLimits

0xb1c6,	// (0x00089ba6) cset_list_set_pane

0xb1dc,	// (0x00089bbc) aid_position_infowindow_above

0xb1e4,	// (0x00089bc4) aid_position_infowindow_below

0x47ee,	// (0x000831ce) cset_list_set_pane_g1_ParamLimits

0x47ee,	// (0x000831ce) cset_list_set_pane_g1

0x2693,	// (0x00081073) cset_list_set_pane_g3_ParamLimits

0x2693,	// (0x00081073) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0008e3b4) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0008e3b4) cset_list_set_pane_g

0x26a2,	// (0x00081082) cset_list_set_pane_t1_ParamLimits

0x26a2,	// (0x00081082) cset_list_set_pane_t1

0xf0cd,	// (0x0008daad) list_highlight_pane_cp021_ParamLimits

0xf0cd,	// (0x0008daad) list_highlight_pane_cp021

0xedce,	// (0x0008d7ae) cset_slider_pane_g1

0xede0,	// (0x0008d7c0) cset_slider_pane_g2

0xedd7,	// (0x0008d7b7) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0008e3b9) cset_slider_pane_g

0xb1ec,	// (0x00089bcc) aid_area_touch_cam4_zoom

0xb1f4,	// (0x00089bd4) cam4_zoom_cont_pane

0xb1fc,	// (0x00089bdc) cam4_zoom_pane_g1

0xb204,	// (0x00089be4) cam4_zoom_pane_g2

0xb20c,	// (0x00089bec) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0008e3c0) cam4_zoom_pane_g

0xb214,	// (0x00089bf4) cam4_zoom_cont_pane_g1

0xb21d,	// (0x00089bfd) cam4_zoom_cont_pane_g2

0xb226,	// (0x00089c06) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0008e3c7) cam4_zoom_cont_pane_g

0xa6e6,	// (0x000890c6) call4_image_pane_ParamLimits

0xa6e6,	// (0x000890c6) call4_image_pane

0x2300,	// (0x00080ce0) call4_windows_conf_pane_ParamLimits

0x2341,	// (0x00080d21) popup_call4_audio_in_window_ParamLimits

0x2341,	// (0x00080d21) popup_call4_audio_in_window

0x01c9,	// (0x0007eba9) bg_popup_call2_act_pane_cp02

0x23b7,	// (0x00080d97) call4_list_conf_pane

0x19aa,	// (0x0008038a) call4_image_pane_g1

0x19aa,	// (0x0008038a) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0008e0db) call4_image_pane_g

0x26d2,	// (0x000810b2) list_single_graphic_popup_conf4_pane_ParamLimits

0x26d2,	// (0x000810b2) list_single_graphic_popup_conf4_pane

0x01c9,	// (0x0007eba9) list_highlight_pane_cp022

0x26e5,	// (0x000810c5) list_single_graphic_popup_conf4_pane_g1

0xeaad,	// (0x0008d48d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0008e3ce) list_single_graphic_popup_conf4_pane_g

0x26ed,	// (0x000810cd) list_single_graphic_popup_conf4_pane_t1

0x698b,	// (0x0008536b) popup_vtel_slider_window_ParamLimits

0x698b,	// (0x0008536b) popup_vtel_slider_window

0x22e2,	// (0x00080cc2) dialer2_ne_pane_t2_ParamLimits

0x22e2,	// (0x00080cc2) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0008e2af) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0008e2af) dialer2_ne_pane_t

0xf0cd,	// (0x0008daad) bg_popup_sub_pane_cp010_ParamLimits

0xf0cd,	// (0x0008daad) bg_popup_sub_pane_cp010

0xb22f,	// (0x00089c0f) popup_vtel_slider_window_g1_ParamLimits

0xb22f,	// (0x00089c0f) popup_vtel_slider_window_g1

0xb23b,	// (0x00089c1b) popup_vtel_slider_window_g2_ParamLimits

0xb23b,	// (0x00089c1b) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0008e3d3) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0008e3d3) popup_vtel_slider_window_g

0xb283,	// (0x00089c63) vtel_slider_pane_ParamLimits

0xb283,	// (0x00089c63) vtel_slider_pane

0xb292,	// (0x00089c72) vtel_slider_pane_g1_ParamLimits

0xb292,	// (0x00089c72) vtel_slider_pane_g1

0xb29f,	// (0x00089c7f) vtel_slider_pane_g2_ParamLimits

0xb29f,	// (0x00089c7f) vtel_slider_pane_g2

0xb2ac,	// (0x00089c8c) vtel_slider_pane_g3_ParamLimits

0xb2ac,	// (0x00089c8c) vtel_slider_pane_g3

0xb292,	// (0x00089c72) vtel_slider_pane_g4_ParamLimits

0xb292,	// (0x00089c72) vtel_slider_pane_g4

0xb2b9,	// (0x00089c99) vtel_slider_pane_g5_ParamLimits

0xb2b9,	// (0x00089c99) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0008e3dc) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0008e3dc) vtel_slider_pane_g

0x01c9,	// (0x0007eba9) main_gallery2_pane

0xaa62,	// (0x00089442) aid_size_row_itut2_dropdow_list_ParamLimits

0xaa62,	// (0x00089442) aid_size_row_itut2_dropdow_list

0xaad0,	// (0x000894b0) grid_vitu2_function_top_pane_ParamLimits

0xaad0,	// (0x000894b0) grid_vitu2_function_top_pane

0xab26,	// (0x00089506) popup_vitu2_dropdown_list_window_ParamLimits

0xab26,	// (0x00089506) popup_vitu2_dropdown_list_window

0xab46,	// (0x00089526) popup_vitu2_match_list_window

0xb2c6,	// (0x00089ca6) cell_vitu2_function_top_pane_ParamLimits

0xb2c6,	// (0x00089ca6) cell_vitu2_function_top_pane

0xb2e6,	// (0x00089cc6) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb2e6,	// (0x00089cc6) cell_vitu2_function_top_pane_cp01

0xb304,	// (0x00089ce4) cell_vitu2_function_top_wide_pane_ParamLimits

0xb304,	// (0x00089ce4) cell_vitu2_function_top_wide_pane

0xa97a,	// (0x0008935a) bg_button_pane_cp012

0xb322,	// (0x00089d02) cell_vitu2_function_top_pane_g1

0xb331,	// (0x00089d11) bg_button_pane_cp013_ParamLimits

0xb331,	// (0x00089d11) bg_button_pane_cp013

0xb34d,	// (0x00089d2d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb34d,	// (0x00089d2d) cell_vitu2_function_top_wide_pane_g1

0xb365,	// (0x00089d45) bg_popup_sub_pane_cp20

0xb373,	// (0x00089d53) list_vitu2_match_list_pane

0x24a0,	// (0x00080e80) bg_popup_sub_pane_cp20_g1

0x24a8,	// (0x00080e88) bg_popup_sub_pane_cp20_g2

0xe5ad,	// (0x0008cf8d) bg_popup_sub_pane_cp20_g3

0x24b0,	// (0x00080e90) bg_popup_sub_pane_cp20_g4

0xe58d,	// (0x0008cf6d) bg_popup_sub_pane_cp20_g5

0x2711,	// (0x000810f1) bg_popup_sub_pane_cp20_g6

0x24c0,	// (0x00080ea0) bg_popup_sub_pane_cp20_g7

0x24c8,	// (0x00080ea8) bg_popup_sub_pane_cp20_g8

0x24d0,	// (0x00080eb0) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0008e3e7) bg_popup_sub_pane_cp20_g

0xb38b,	// (0x00089d6b) list_vitu2_match_list_item_pane_ParamLimits

0xb38b,	// (0x00089d6b) list_vitu2_match_list_item_pane

0xb39d,	// (0x00089d7d) list_vitu2_match_list_item_pane_t1

0x5e3f,	// (0x0008481f) bg_popup_sub_pane_cp21

0xb3da,	// (0x00089dba) grid_vitu2_dropdown_list_pane

0xb3e2,	// (0x00089dc2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb3e2,	// (0x00089dc2) cell_vitu2_dropdown_list_char_pane

0xb403,	// (0x00089de3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb403,	// (0x00089de3) cell_vitu2_dropdown_list_ctrl_pane

0x2743,	// (0x00081123) cell_vitu2_dropdown_list_char_pane_g1

0x273a,	// (0x0008111a) cell_vitu2_dropdown_list_char_pane_g2

0x2731,	// (0x00081111) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0008e404) cell_vitu2_dropdown_list_char_pane_g

0xb42f,	// (0x00089e0f) cell_vitu2_dropdown_list_char_pane_t1

0xb43d,	// (0x00089e1d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb43d,	// (0x00089e1d) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb44d,	// (0x00089e2d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb44d,	// (0x00089e2d) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb45e,	// (0x00089e3e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb45e,	// (0x00089e3e) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb46e,	// (0x00089e4e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb46e,	// (0x00089e4e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa88d,	// (0x0008926d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa88d,	// (0x0008926d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0008e40b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0008e40b) cell_vitu2_dropdown_list_ctrl_pane_g

0xb48a,	// (0x00089e6a) aid_size_cell_gallery2_ParamLimits

0xb48a,	// (0x00089e6a) aid_size_cell_gallery2

0xb498,	// (0x00089e78) grid_gallery2_pane_ParamLimits

0xb498,	// (0x00089e78) grid_gallery2_pane

0xb4a7,	// (0x00089e87) scroll_pane_cp029_ParamLimits

0xb4a7,	// (0x00089e87) scroll_pane_cp029

0xb4b3,	// (0x00089e93) cell_gallery2_pane_ParamLimits

0xb4b3,	// (0x00089e93) cell_gallery2_pane

0x274c,	// (0x0008112c) cell_gallery2_pane_g2

0x3d93,	// (0x00082773) cell_gallery2_pane_g3

0x2756,	// (0x00081136) cell_gallery2_pane_g4

0x275e,	// (0x0008113e) cell_gallery2_pane_g5

0xec98,	// (0x0008d678) grid_highlight_pane_cp10

0xab46,	// (0x00089526) popup_vitu2_match_list_window_ParamLimits

0xab5a,	// (0x0008953a) popup_vitu2_query_window_ParamLimits

0xab5a,	// (0x0008953a) popup_vitu2_query_window

0x5e3f,	// (0x0008481f) bg_vitu2_candi_button_pane

0x2743,	// (0x00081123) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x273a,	// (0x0008111a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2731,	// (0x00081111) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb4e1,	// (0x00089ec1) bg_button_pane_cp015

0xb4f3,	// (0x00089ed3) bg_button_pane_cp016

0xb506,	// (0x00089ee6) bg_button_pane_cp017

0x1541,	// (0x0007ff21) bg_popup_sub_pane_cp22

0x2766,	// (0x00081146) popup_vitu2_query_window_g1

0xb54b,	// (0x00089f2b) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0008e416) popup_vitu2_query_window_g

0xb568,	// (0x00089f48) popup_vitu2_query_window_t1_ParamLimits

0xb568,	// (0x00089f48) popup_vitu2_query_window_t1

0xb59b,	// (0x00089f7b) popup_vitu2_query_window_t2_ParamLimits

0xb59b,	// (0x00089f7b) popup_vitu2_query_window_t2

0xb5ad,	// (0x00089f8d) popup_vitu2_query_window_t3_ParamLimits

0xb5ad,	// (0x00089f8d) popup_vitu2_query_window_t3

0xb5d5,	// (0x00089fb5) popup_vitu2_query_window_t4_ParamLimits

0xb5d5,	// (0x00089fb5) popup_vitu2_query_window_t4

0xb5f6,	// (0x00089fd6) popup_vitu2_query_window_t5_ParamLimits

0xb5f6,	// (0x00089fd6) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0008e41d) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0008e41d) popup_vitu2_query_window_t

0x25a2,	// (0x00080f82) main_cset_text_pane

0xaf1a,	// (0x000898fa) aid_area_touch_slider_ParamLimits

0xaf36,	// (0x00089916) cset_slider_pane_ParamLimits

0xaf60,	// (0x00089940) main_cset_slider_pane_g1_ParamLimits

0xaf75,	// (0x00089955) main_cset_slider_pane_g2_ParamLimits

0x25c3,	// (0x00080fa3) main_cset_slider_pane_g3_ParamLimits

0x25c3,	// (0x00080fa3) main_cset_slider_pane_g3

0xaf8a,	// (0x0008996a) main_cset_slider_pane_g4_ParamLimits

0xaf8a,	// (0x0008996a) main_cset_slider_pane_g4

0xaf99,	// (0x00089979) main_cset_slider_pane_g5_ParamLimits

0xaf99,	// (0x00089979) main_cset_slider_pane_g5

0xafa7,	// (0x00089987) main_cset_slider_pane_g6_ParamLimits

0xafa7,	// (0x00089987) main_cset_slider_pane_g6

0xf990,	// (0x0008e370) main_cset_slider_pane_g_ParamLimits

0x25f3,	// (0x00080fd3) main_cset_slider_pane_t1_ParamLimits

0xb037,	// (0x00089a17) main_cset_slider_pane_t2_ParamLimits

0xb051,	// (0x00089a31) main_cset_slider_pane_t3_ParamLimits

0xb06b,	// (0x00089a4b) main_cset_slider_pane_t4_ParamLimits

0xb085,	// (0x00089a65) main_cset_slider_pane_t5_ParamLimits

0xb0a3,	// (0x00089a83) main_cset_slider_pane_t6_ParamLimits

0xb0ba,	// (0x00089a9a) main_cset_slider_pane_t7_ParamLimits

0xb0e8,	// (0x00089ac8) main_cset_slider_pane_t8_ParamLimits

0xb0e8,	// (0x00089ac8) main_cset_slider_pane_t8

0xb110,	// (0x00089af0) main_cset_slider_pane_t9_ParamLimits

0xb110,	// (0x00089af0) main_cset_slider_pane_t9

0xb138,	// (0x00089b18) main_cset_slider_pane_t10_ParamLimits

0xb138,	// (0x00089b18) main_cset_slider_pane_t10

0xb160,	// (0x00089b40) main_cset_slider_pane_t11_ParamLimits

0xb160,	// (0x00089b40) main_cset_slider_pane_t11

0xb18a,	// (0x00089b6a) main_cset_slider_pane_t12_ParamLimits

0xb18a,	// (0x00089b6a) main_cset_slider_pane_t12

0xb1a7,	// (0x00089b87) main_cset_slider_pane_t13_ParamLimits

0xb1a7,	// (0x00089b87) main_cset_slider_pane_t13

0xf9b5,	// (0x0008e395) main_cset_slider_pane_t_ParamLimits

0x01c9,	// (0x0007eba9) bg_popup_sub_pane_cp011

0x2772,	// (0x00081152) main_cset_text_pane_g1

0x277a,	// (0x0008115a) main_cset_text_pane_t1

0x2788,	// (0x00081168) main_cset_text_pane_t2

0x2796,	// (0x00081176) main_cset_text_pane_t3

0x27a4,	// (0x00081184) main_cset_text_pane_t4

0x27b2,	// (0x00081192) main_cset_text_pane_t5

0x27c0,	// (0x000811a0) main_cset_text_pane_t6

0x27ce,	// (0x000811ae) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0008e42c) main_cset_text_pane_t

0x01c9,	// (0x0007eba9) main_cam4_burst_pane

0x01c9,	// (0x0007eba9) main_cam5_pane

0xae69,	// (0x00089849) bg_button_pane_cp019

0xae72,	// (0x00089852) bg_button_pane_cp020

0x25cf,	// (0x00080faf) main_cset_slider_pane_g7_ParamLimits

0x25cf,	// (0x00080faf) main_cset_slider_pane_g7

0x25db,	// (0x00080fbb) main_cset_slider_pane_g8_ParamLimits

0x25db,	// (0x00080fbb) main_cset_slider_pane_g8

0xafbb,	// (0x0008999b) main_cset_slider_pane_g9_ParamLimits

0xafbb,	// (0x0008999b) main_cset_slider_pane_g9

0xafc7,	// (0x000899a7) main_cset_slider_pane_g10_ParamLimits

0xafc7,	// (0x000899a7) main_cset_slider_pane_g10

0xafd3,	// (0x000899b3) main_cset_slider_pane_g11_ParamLimits

0xafd3,	// (0x000899b3) main_cset_slider_pane_g11

0xafdf,	// (0x000899bf) main_cset_slider_pane_g12_ParamLimits

0xafdf,	// (0x000899bf) main_cset_slider_pane_g12

0xafeb,	// (0x000899cb) main_cset_slider_pane_g13_ParamLimits

0xafeb,	// (0x000899cb) main_cset_slider_pane_g13

0xaff7,	// (0x000899d7) main_cset_slider_pane_g14_ParamLimits

0xaff7,	// (0x000899d7) main_cset_slider_pane_g14

0xb003,	// (0x000899e3) main_cset_slider_pane_g15_ParamLimits

0xb003,	// (0x000899e3) main_cset_slider_pane_g15

0x2621,	// (0x00081001) main_cset_slider_pane_t14_ParamLimits

0x2621,	// (0x00081001) main_cset_slider_pane_t14

0x265a,	// (0x0008103a) main_cset_slider_pane_t15_ParamLimits

0x265a,	// (0x0008103a) main_cset_slider_pane_t15

0xb66d,	// (0x0008a04d) aid_cam4_burst_size_cell_ParamLimits

0xb66d,	// (0x0008a04d) aid_cam4_burst_size_cell

0xb689,	// (0x0008a069) grid_cam4_burst_pane_ParamLimits

0xb689,	// (0x0008a069) grid_cam4_burst_pane

0xb6b9,	// (0x0008a099) linegrid_cam4_burst_pane_ParamLimits

0xb6b9,	// (0x0008a099) linegrid_cam4_burst_pane

0xb6d9,	// (0x0008a0b9) scroll_pane_cp30_ParamLimits

0xb6d9,	// (0x0008a0b9) scroll_pane_cp30

0xb6e5,	// (0x0008a0c5) cell_cam4_burst_pane_ParamLimits

0xb6e5,	// (0x0008a0c5) cell_cam4_burst_pane

0x27e8,	// (0x000811c8) linegrid_cam4_burst_pane_g1_ParamLimits

0x27e8,	// (0x000811c8) linegrid_cam4_burst_pane_g1

0xb721,	// (0x0008a101) linegrid_cam4_burst_pane_g2_ParamLimits

0xb721,	// (0x0008a101) linegrid_cam4_burst_pane_g2

0x27f5,	// (0x000811d5) linegrid_cam4_burst_pane_g3_ParamLimits

0x27f5,	// (0x000811d5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0008e43b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0008e43b) linegrid_cam4_burst_pane_g

0xb732,	// (0x0008a112) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb732,	// (0x0008a112) linegrid_cam4_burst_pane_g3_copy1

0x2802,	// (0x000811e2) linegrid_cam4_burst_pane_g4_ParamLimits

0x2802,	// (0x000811e2) linegrid_cam4_burst_pane_g4

0xb74c,	// (0x0008a12c) linegrid_cam4_burst_pane_g5_ParamLimits

0xb74c,	// (0x0008a12c) linegrid_cam4_burst_pane_g5

0xb75d,	// (0x0008a13d) linegrid_cam4_burst_pane_g6_ParamLimits

0xb75d,	// (0x0008a13d) linegrid_cam4_burst_pane_g6

0x280f,	// (0x000811ef) linegrid_cam4_burst_pane_g7_ParamLimits

0x280f,	// (0x000811ef) linegrid_cam4_burst_pane_g7

0xb76e,	// (0x0008a14e) cell_cam4_burst_pane_g1

0x2828,	// (0x00081208) main_cam5_pane_t1_ParamLimits

0x2828,	// (0x00081208) main_cam5_pane_t1

0x283a,	// (0x0008121a) main_cam5_pane_t2_ParamLimits

0x283a,	// (0x0008121a) main_cam5_pane_t2

0x284c,	// (0x0008122c) main_cam5_pane_t3_ParamLimits

0x284c,	// (0x0008122c) main_cam5_pane_t3

0x285e,	// (0x0008123e) main_cam5_pane_t4_ParamLimits

0x285e,	// (0x0008123e) main_cam5_pane_t4

0x2876,	// (0x00081256) main_cam5_pane_t5_ParamLimits

0x2876,	// (0x00081256) main_cam5_pane_t5

0x288a,	// (0x0008126a) main_cam5_pane_t6_ParamLimits

0x288a,	// (0x0008126a) main_cam5_pane_t6

0x289e,	// (0x0008127e) main_cam5_pane_t7_ParamLimits

0x289e,	// (0x0008127e) main_cam5_pane_t7

0x28b0,	// (0x00081290) main_cam5_pane_t8_ParamLimits

0x28b0,	// (0x00081290) main_cam5_pane_t8

0x28cc,	// (0x000812ac) main_cam5_pane_t9_ParamLimits

0x28cc,	// (0x000812ac) main_cam5_pane_t9

0x28de,	// (0x000812be) main_cam5_pane_t10_ParamLimits

0x28de,	// (0x000812be) main_cam5_pane_t10

0x28f0,	// (0x000812d0) main_cam5_pane_t11_ParamLimits

0x28f0,	// (0x000812d0) main_cam5_pane_t11

0x2902,	// (0x000812e2) main_cam5_pane_t12_ParamLimits

0x2902,	// (0x000812e2) main_cam5_pane_t12

0x2917,	// (0x000812f7) main_cam5_pane_t13_ParamLimits

0x2917,	// (0x000812f7) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x0008e447) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x0008e447) main_cam5_pane_t

0x5a9b,	// (0x0008447b) popup_scut_keymap_window_ParamLimits

0x5a9b,	// (0x0008447b) popup_scut_keymap_window

0xb781,	// (0x0008a161) aid_size_cell_brow_shortcut

0xec98,	// (0x0008d678) bg_popup_window_pane_cp010

0xb78d,	// (0x0008a16d) grid_scut_pane

0xb799,	// (0x0008a179) cell_scut_pane_ParamLimits

0xb799,	// (0x0008a179) cell_scut_pane

0xb7b0,	// (0x0008a190) cell_scut_pane_g1

0x2934,	// (0x00081314) cell_scut_pane_t1

0x2943,	// (0x00081323) cell_scut_pane_t2

0xb7b9,	// (0x0008a199) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x0008e462) cell_scut_pane_t

0x9673,	// (0x00088053) main_mup3_pane_g8_ParamLimits

0x9673,	// (0x00088053) main_mup3_pane_g8

0xaa70,	// (0x00089450) area_vitu2_query_pane_ParamLimits

0xaa70,	// (0x00089450) area_vitu2_query_pane

0xb519,	// (0x00089ef9) input_focus_pane_cp08

0x2952,	// (0x00081332) area_vitu2_query_pane_g1

0xb7c7,	// (0x0008a1a7) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x0008e469) area_vitu2_query_pane_g

0xb7d8,	// (0x0008a1b8) area_vitu2_query_pane_t1_ParamLimits

0xb7d8,	// (0x0008a1b8) area_vitu2_query_pane_t1

0xb7ec,	// (0x0008a1cc) area_vitu2_query_pane_t2_ParamLimits

0xb7ec,	// (0x0008a1cc) area_vitu2_query_pane_t2

0xb800,	// (0x0008a1e0) area_vitu2_query_pane_t3_ParamLimits

0xb800,	// (0x0008a1e0) area_vitu2_query_pane_t3

0x295e,	// (0x0008133e) area_vitu2_query_pane_t4_ParamLimits

0x295e,	// (0x0008133e) area_vitu2_query_pane_t4

0x2986,	// (0x00081366) area_vitu2_query_pane_t5_ParamLimits

0x2986,	// (0x00081366) area_vitu2_query_pane_t5

0x29ae,	// (0x0008138e) area_vitu2_query_pane_t6_ParamLimits

0x29ae,	// (0x0008138e) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0008e46e) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0008e46e) area_vitu2_query_pane_t

0xb828,	// (0x0008a208) bg_button_pane_cp018

0xb836,	// (0x0008a216) bg_button_pane_cp021

0xb842,	// (0x0008a222) bg_button_pane_cp022

0xb853,	// (0x0008a233) input_focus_pane_cp09

0x7aed,	// (0x000864cd) aid_size_touch_mv_arrow_left

0x7b16,	// (0x000864f6) aid_size_touch_mv_arrow_right

0xb01b,	// (0x000899fb) main_cset_slider_pane_g16_ParamLimits

0xb01b,	// (0x000899fb) main_cset_slider_pane_g16

0xb029,	// (0x00089a09) main_cset_slider_pane_g17_ParamLimits

0xb029,	// (0x00089a09) main_cset_slider_pane_g17

0xb76e,	// (0x0008a14e) cell_cam4_burst_pane_g1_ParamLimits

0x01c9,	// (0x0007eba9) compa_mode_pane

0xb247,	// (0x00089c27) popup_vtel_slider_window_g3_ParamLimits

0xb247,	// (0x00089c27) popup_vtel_slider_window_g3

0xb25b,	// (0x00089c3b) popup_vtel_slider_window_g4_ParamLimits

0xb25b,	// (0x00089c3b) popup_vtel_slider_window_g4

0xb26f,	// (0x00089c4f) popup_vtel_slider_window_t1_ParamLimits

0xb26f,	// (0x00089c4f) popup_vtel_slider_window_t1

0x01c9,	// (0x0007eba9) main_cl_pane

0x1569,	// (0x0007ff49) popup_imed_adjust2_window_ParamLimits

0x1541,	// (0x0007ff21) bg_tb_trans_pane_cp05_ParamLimits

0x1edb,	// (0x000808bb) popup_imed_adjust2_window_g1_ParamLimits

0x1eea,	// (0x000808ca) popup_imed_adjust2_window_g2_ParamLimits

0x1eea,	// (0x000808ca) popup_imed_adjust2_window_g2

0x1ef6,	// (0x000808d6) popup_imed_adjust2_window_g3_ParamLimits

0x1ef6,	// (0x000808d6) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0008e1d9) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0008e1d9) popup_imed_adjust2_window_g

0x1f02,	// (0x000808e2) popup_imed_adjust2_window_t1_ParamLimits

0x1f1a,	// (0x000808fa) slider_imed_adjust_pane_ParamLimits

0x1f2e,	// (0x0008090e) slider_imed_adjust_pane_g1_ParamLimits

0x1f3e,	// (0x0008091e) slider_imed_adjust_pane_g2_ParamLimits

0x1f4e,	// (0x0008092e) slider_imed_adjust_pane_g3_ParamLimits

0x1f5f,	// (0x0008093f) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0008e1e0) slider_imed_adjust_pane_g_ParamLimits

0xa7a2,	// (0x00089182) aid_touch_area_cam4_ParamLimits

0xa7a2,	// (0x00089182) aid_touch_area_cam4

0xa7b2,	// (0x00089192) battery_pane_cp01

0xa839,	// (0x00089219) main_camera4_pane_g6_ParamLimits

0xa839,	// (0x00089219) main_camera4_pane_g6

0xa857,	// (0x00089237) main_camera4_pane_t2_ParamLimits

0xa857,	// (0x00089237) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0008e2e3) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0008e2e3) main_camera4_pane_t

0xa8ec,	// (0x000892cc) aid_touch_area_vid4_ParamLimits

0xa8ec,	// (0x000892cc) aid_touch_area_vid4

0xa92c,	// (0x0008930c) main_video4_pane_g5_ParamLimits

0xa92c,	// (0x0008930c) main_video4_pane_g5

0xa94e,	// (0x0008932e) vid4_progress_pane_ParamLimits

0xa94e,	// (0x0008932e) vid4_progress_pane

0x25e7,	// (0x00080fc7) main_cset_slider_pane_g18_ParamLimits

0x25e7,	// (0x00080fc7) main_cset_slider_pane_g18

0x281c,	// (0x000811fc) cell_cam4_burst_pane_g2_ParamLimits

0x281c,	// (0x000811fc) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0008e442) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0008e442) cell_cam4_burst_pane_g

0xb864,	// (0x0008a244) bg_cl_pane_ParamLimits

0xb864,	// (0x0008a244) bg_cl_pane

0xb870,	// (0x0008a250) cl_header_pane_ParamLimits

0xb870,	// (0x0008a250) cl_header_pane

0xb87c,	// (0x0008a25c) cl_listscroll_pane_ParamLimits

0xb87c,	// (0x0008a25c) cl_listscroll_pane

0x29fa,	// (0x000813da) bg_cl_pane_g1

0x2a02,	// (0x000813e2) bg_cl_pane_g2

0x2a0a,	// (0x000813ea) bg_cl_pane_g3

0x2a12,	// (0x000813f2) bg_cl_pane_g4

0x2a1a,	// (0x000813fa) bg_cl_pane_g5

0x2a22,	// (0x00081402) bg_cl_pane_g6

0x2a2a,	// (0x0008140a) bg_cl_pane_g7

0x2a32,	// (0x00081412) bg_cl_pane_g8

0x2a3a,	// (0x0008141a) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0008e47d) bg_cl_pane_g

0xb888,	// (0x0008a268) aid_height_cl_leading_ParamLimits

0xb888,	// (0x0008a268) aid_height_cl_leading

0xb894,	// (0x0008a274) aid_height_cl_text_ParamLimits

0xb894,	// (0x0008a274) aid_height_cl_text

0x23f5,	// (0x00080dd5) bg_cl_header_pane_ParamLimits

0x23f5,	// (0x00080dd5) bg_cl_header_pane

0xb8ac,	// (0x0008a28c) cl_header_pane_g1_ParamLimits

0xb8ac,	// (0x0008a28c) cl_header_pane_g1

0xb8b9,	// (0x0008a299) cl_header_pane_t1_ParamLimits

0xb8b9,	// (0x0008a299) cl_header_pane_t1

0x2a42,	// (0x00081422) cl_list_pane

0x25ba,	// (0x00080f9a) hc_scroll_pane_cp01

0xe58d,	// (0x0008cf6d) bg_cl_header_pane_g1

0x24a0,	// (0x00080e80) bg_cl_header_pane_g2

0xe5ad,	// (0x0008cf8d) bg_cl_header_pane_g3

0x24b0,	// (0x00080e90) bg_cl_header_pane_g4

0x24a8,	// (0x00080e88) bg_cl_header_pane_g5

0x2711,	// (0x000810f1) bg_cl_header_pane_g6

0x24c8,	// (0x00080ea8) bg_cl_header_pane_g7

0x24d0,	// (0x00080eb0) bg_cl_header_pane_g8

0x24c0,	// (0x00080ea0) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0008e490) bg_cl_header_pane_g

0xb8cb,	// (0x0008a2ab) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb8cb,	// (0x0008a2ab) hc_cl_list_double_graphic_heading_pane

0xb8dc,	// (0x0008a2bc) hc_cl_list_single_graphic_pane_ParamLimits

0xb8dc,	// (0x0008a2bc) hc_cl_list_single_graphic_pane

0xb8f5,	// (0x0008a2d5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb8f5,	// (0x0008a2d5) hc_cl_list_single_graphic_pane_g1

0xb901,	// (0x0008a2e1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb901,	// (0x0008a2e1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0008e4a3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0008e4a3) hc_cl_list_single_graphic_pane_g

0xb915,	// (0x0008a2f5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb915,	// (0x0008a2f5) hc_cl_list_single_graphic_pane_t1

0xb8f5,	// (0x0008a2d5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb8f5,	// (0x0008a2d5) hc_cl_list_double_graphic_heading_pane_g1

0xb92a,	// (0x0008a30a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb92a,	// (0x0008a30a) hc_cl_list_double_graphic_heading_pane_g2

0xb93e,	// (0x0008a31e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb93e,	// (0x0008a31e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x0008e4a8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x0008e4a8) hc_cl_list_double_graphic_heading_pane_g

0xb952,	// (0x0008a332) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb952,	// (0x0008a332) hc_cl_list_double_graphic_heading_pane_t1

0xb967,	// (0x0008a347) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb967,	// (0x0008a347) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0008e4af) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0008e4af) hc_cl_list_double_graphic_heading_pane_t

0xb984,	// (0x0008a364) vid4_progress_pane_g1

0xb994,	// (0x0008a374) vid4_progress_pane_g2

0xe852,	// (0x0008d232) vid4_progress_pane_g3

0xb9a4,	// (0x0008a384) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0008e4b4) vid4_progress_pane_g

0xb9c2,	// (0x0008a3a2) vid4_progress_pane_t1

0xb9d7,	// (0x0008a3b7) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x0008e4bf) vid4_progress_pane_t

0xba02,	// (0x0008a3e2) wait_bar_pane_cp07

0x179d,	// (0x0008017d) blid_firmament_pane_ParamLimits

0x17e0,	// (0x000801c0) popup_blid_sat_info2_window_g1

0x1804,	// (0x000801e4) popup_blid_sat_info2_window_t3

0x1812,	// (0x000801f2) popup_blid_sat_info2_window_t4

0x1820,	// (0x00080200) popup_blid_sat_info2_window_t5

0x182e,	// (0x0008020e) popup_blid_sat_info2_window_t6

0x183e,	// (0x0008021e) popup_blid_sat_info2_window_t7

0x184c,	// (0x0008022c) popup_blid_sat_info2_window_t8

0x185a,	// (0x0008023a) popup_blid_sat_info2_window_t9

0x1868,	// (0x00080248) popup_blid_sat_info2_window_t10

0x192a,	// (0x0008030a) aid_firma_cardinal_ParamLimits

0x193e,	// (0x0008031e) blid_firmament_pane_t1_ParamLimits

0x1955,	// (0x00080335) blid_firmament_pane_t2_ParamLimits

0x196c,	// (0x0008034c) blid_firmament_pane_t3_ParamLimits

0x1983,	// (0x00080363) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0008e0d2) blid_firmament_pane_t_ParamLimits

0x199a,	// (0x0008037a) blid_sat_info_pane_ParamLimits

0xf0cd,	// (0x0008daad) main_cam_set_pane_ParamLimits

0x9e1d,	// (0x000887fd) aid_size_cell_colour_35_ParamLimits

0x9e37,	// (0x00088817) aid_size_cell_colour_112_ParamLimits

0x9e4e,	// (0x0008882e) aid_size_cell_effect_ParamLimits

0xf0cd,	// (0x0008daad) bg_tb_trans_pane_cp02_ParamLimits

0xf0db,	// (0x0008dabb) heading_imed_pane_ParamLimits

0x9e68,	// (0x00088848) listscroll_imed_pane_ParamLimits

0x0b73,	// (0x0007f553) popup_call2_audio_first_window_g5_ParamLimits

0x0b73,	// (0x0007f553) popup_call2_audio_first_window_g5

0xa551,	// (0x00088f31) aid_size_touch_image3_arrow_left_ParamLimits

0xa551,	// (0x00088f31) aid_size_touch_image3_arrow_left

0xa567,	// (0x00088f47) aid_size_touch_image3_arrow_right_ParamLimits

0xa567,	// (0x00088f47) aid_size_touch_image3_arrow_right

0xb9ed,	// (0x0008a3cd) vid4_progress_pane_t3

0xa106,	// (0x00088ae6) main_hwr_training_symbol_option_pane_ParamLimits

0xa106,	// (0x00088ae6) main_hwr_training_symbol_option_pane

0x21c8,	// (0x00080ba8) popup_hwr_training_preview_window_ParamLimits

0x21c8,	// (0x00080ba8) popup_hwr_training_preview_window

0xa167,	// (0x00088b47) hwr_training_navi_pane_g5_ParamLimits

0xa167,	// (0x00088b47) hwr_training_navi_pane_g5

0x248e,	// (0x00080e6e) popup_char_count_window

0xb365,	// (0x00089d45) bg_popup_sub_pane_cp20_ParamLimits

0xb373,	// (0x00089d53) list_vitu2_match_list_pane_ParamLimits

0xb37f,	// (0x00089d5f) vitu2_page_scroll_pane_ParamLimits

0xb37f,	// (0x00089d5f) vitu2_page_scroll_pane

0x2a9d,	// (0x0008147d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2a9d,	// (0x0008147d) list_single_hwr_training_symbol_option_pane

0x2ab0,	// (0x00081490) list_single_hwr_training_symbol_option_pane_g1

0x2ab8,	// (0x00081498) list_single_hwr_training_symbol_option_pane_t1

0x2ac6,	// (0x000814a6) bg_button_pane_cp023

0x2acf,	// (0x000814af) bg_button_pane_cp024

0xba14,	// (0x0008a3f4) vitu2_page_scroll_pane_g1

0xba1c,	// (0x0008a3fc) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0008e4c6) vitu2_page_scroll_pane_g

0xba24,	// (0x0008a404) vitu2_page_scroll_pane_t1

0x2b02,	// (0x000814e2) popup_char_count_window_g1

0x2b0b,	// (0x000814eb) popup_char_count_window_g2

0x2b14,	// (0x000814f4) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0008e4cb) popup_char_count_window_g

0x2b1d,	// (0x000814fd) popup_char_count_window_t1

0x01c9,	// (0x0007eba9) main_vded2_pane

0x1ec7,	// (0x000808a7) aid_size_cell_imed_line

0x1ed1,	// (0x000808b1) grid_imed_line_width_pane

0xa9c5,	// (0x000893a5) vid4_indicators_pane_g4

0x2b2b,	// (0x0008150b) cell_imed_line_width_pane_ParamLimits

0x2b2b,	// (0x0008150b) cell_imed_line_width_pane

0x2b3f,	// (0x0008151f) cell_imed_line_width_pane_g1

0x2b48,	// (0x00081528) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0008e4d2) cell_imed_line_width_pane_g

0xba33,	// (0x0008a413) main_vded2_pane_g1_ParamLimits

0xba33,	// (0x0008a413) main_vded2_pane_g1

0xba40,	// (0x0008a420) main_vded2_pane_g2_ParamLimits

0xba40,	// (0x0008a420) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0008e4d7) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0008e4d7) main_vded2_pane_g

0xba4e,	// (0x0008a42e) vded2_slider_pane_ParamLimits

0xba4e,	// (0x0008a42e) vded2_slider_pane

0xba5b,	// (0x0008a43b) aid_size_touch_vded2_end

0xba65,	// (0x0008a445) aid_size_touch_vded2_playhead

0x2b50,	// (0x00081530) aid_size_touch_vded2_start

0x2b58,	// (0x00081538) vded2_slider_bg_pane

0x2b61,	// (0x00081541) vded2_slider_pane_g1

0x2b6a,	// (0x0008154a) vded2_slider_pane_g2

0xba6d,	// (0x0008a44d) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x0008e4dc) vded2_slider_pane_g

0x2b72,	// (0x00081552) vded2_slider_bg_pane_g1

0x2b7b,	// (0x0008155b) vded2_slider_bg_pane_g2

0x2b84,	// (0x00081564) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0008e4e3) vded2_slider_bg_pane_g

0x823d,	// (0x00086c1d) aid_postcard_touch_down_pane_ParamLimits

0x823d,	// (0x00086c1d) aid_postcard_touch_down_pane

0x824d,	// (0x00086c2d) aid_postcard_touch_up_pane_ParamLimits

0x824d,	// (0x00086c2d) aid_postcard_touch_up_pane

0x01c9,	// (0x0007eba9) main_blid2_pane

0x154f,	// (0x0007ff2f) popup_blid2_search_window

0x01c9,	// (0x0007eba9) blid2_gps_pane

0x01c9,	// (0x0007eba9) blid2_navig_pane

0x01c9,	// (0x0007eba9) blid2_search_pane

0x01c9,	// (0x0007eba9) blid2_tripm_pane

0xba76,	// (0x0008a456) blid2_search_pane_g1_ParamLimits

0xba76,	// (0x0008a456) blid2_search_pane_g1

0xba86,	// (0x0008a466) blid2_search_pane_t1_ParamLimits

0xba86,	// (0x0008a466) blid2_search_pane_t1

0xba98,	// (0x0008a478) aid_size_cell_blid2_gps_ParamLimits

0xba98,	// (0x0008a478) aid_size_cell_blid2_gps

0xbaa8,	// (0x0008a488) blid2_gps_pane_g1_ParamLimits

0xbaa8,	// (0x0008a488) blid2_gps_pane_g1

0xbab4,	// (0x0008a494) grid_blid2_satellite_pane_ParamLimits

0xbab4,	// (0x0008a494) grid_blid2_satellite_pane

0xbac4,	// (0x0008a4a4) blid2_navig_pane_g1_ParamLimits

0xbac4,	// (0x0008a4a4) blid2_navig_pane_g1

0xbad0,	// (0x0008a4b0) blid2_navig_pane_t1_ParamLimits

0xbad0,	// (0x0008a4b0) blid2_navig_pane_t1

0xbae2,	// (0x0008a4c2) blid2_navig_pane_t2_ParamLimits

0xbae2,	// (0x0008a4c2) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x0008e4ea) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x0008e4ea) blid2_navig_pane_t

0xbaf4,	// (0x0008a4d4) blid2_navig_ring_pane_ParamLimits

0xbaf4,	// (0x0008a4d4) blid2_navig_ring_pane

0xbb04,	// (0x0008a4e4) blid2_speed_pane_ParamLimits

0xbb04,	// (0x0008a4e4) blid2_speed_pane

0xbb10,	// (0x0008a4f0) blid2_tripm_pane_g1_ParamLimits

0xbb10,	// (0x0008a4f0) blid2_tripm_pane_g1

0xbb20,	// (0x0008a500) blid2_tripm_pane_g2_ParamLimits

0xbb20,	// (0x0008a500) blid2_tripm_pane_g2

0xbb2c,	// (0x0008a50c) blid2_tripm_pane_g3_ParamLimits

0xbb2c,	// (0x0008a50c) blid2_tripm_pane_g3

0xbb38,	// (0x0008a518) blid2_tripm_pane_g4_ParamLimits

0xbb38,	// (0x0008a518) blid2_tripm_pane_g4

0xbb44,	// (0x0008a524) blid2_tripm_pane_g5_ParamLimits

0xbb44,	// (0x0008a524) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x0008e4ef) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x0008e4ef) blid2_tripm_pane_g

0xbb60,	// (0x0008a540) blid2_tripm_pane_t1_ParamLimits

0xbb60,	// (0x0008a540) blid2_tripm_pane_t1

0xbb74,	// (0x0008a554) blid2_tripm_pane_t2_ParamLimits

0xbb74,	// (0x0008a554) blid2_tripm_pane_t2

0xbb86,	// (0x0008a566) blid2_tripm_pane_t3_ParamLimits

0xbb86,	// (0x0008a566) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x0008e4fc) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x0008e4fc) blid2_tripm_pane_t

0xbbb8,	// (0x0008a598) cell_blid2_satellite_pane_ParamLimits

0xbbb8,	// (0x0008a598) cell_blid2_satellite_pane

0xbbd2,	// (0x0008a5b2) cell_blid2_satellite_pane_g1

0x2b8d,	// (0x0008156d) cell_blid2_satellite_pane_t1

0x19aa,	// (0x0008038a) blid2_speed_pane_g1

0x2b9b,	// (0x0008157b) blid2_speed_pane_t1

0x2ba9,	// (0x00081589) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0008e505) blid2_speed_pane_t

0x19aa,	// (0x0008038a) blid2_navig_ring_pane_g1

0xbbdb,	// (0x0008a5bb) blid2_navig_ring_pane_g2

0xbbe3,	// (0x0008a5c3) blid2_navig_ring_pane_g3

0xbbeb,	// (0x0008a5cb) blid2_navig_ring_pane_g4

0xbbf3,	// (0x0008a5d3) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x0008e50a) blid2_navig_ring_pane_g

0x01c9,	// (0x0007eba9) bg_popup_window_pane_cp011

0x2bb7,	// (0x00081597) popup_blid2_search_window_g1

0x2bbf,	// (0x0008159f) popup_blid2_search_window_t1

0x2bcd,	// (0x000815ad) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0008e515) popup_blid2_search_window_t

0xe49c,	// (0x0008ce7c) main_browser_pane_g1

0xe1b7,	// (0x0008cb97) main_browser_pane_ParamLimits

0xa97a,	// (0x0008935a) bg_button_pane_cp011_ParamLimits

0xac3c,	// (0x0008961c) cell_vitu2_function_pane_g1_ParamLimits

0x1541,	// (0x0007ff21) bg_popup_sub_pane_cp22_ParamLimits

0xb519,	// (0x00089ef9) input_focus_pane_cp08_ParamLimits

0xb530,	// (0x00089f10) popup_vitu2_query_button_pane_ParamLimits

0xb530,	// (0x00089f10) popup_vitu2_query_button_pane

0xb541,	// (0x00089f21) popup_vitu2_query_input_button_pane

0x2766,	// (0x00081146) popup_vitu2_query_window_g1_ParamLimits

0xb54b,	// (0x00089f2b) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0008e416) popup_vitu2_query_window_g_ParamLimits

0x01c9,	// (0x0007eba9) bg_button_pane_cp026

0xbbfb,	// (0x0008a5db) popup_vitu2_query_input_button_pane_g1

0x01c9,	// (0x0007eba9) bg_button_pane_cp025

0x2bdb,	// (0x000815bb) popup_vitu2_query_button_pane_t1

0x9382,	// (0x00087d62) main_mp3_pane_t6

0x9392,	// (0x00087d72) popup_slider_window_cp01

0xa89b,	// (0x0008927b) cam4_battery_pane

0xa988,	// (0x00089368) cam4_battery_pane_cp02

0xb97c,	// (0x0008a35c) cam4_battery_pane_cp01

0xb97c,	// (0x0008a35c) cam4_battery_pane_cp03

0x2be9,	// (0x000815c9) cam4_battery_pane_g1

0x19aa,	// (0x0008038a) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x0008e51a) cam4_battery_pane_g

0x1876,	// (0x00080256) popup_blid_sat_info2_window_t11

0x7aed,	// (0x000864cd) aid_size_touch_mv_arrow_left_ParamLimits

0x7b16,	// (0x000864f6) aid_size_touch_mv_arrow_right_ParamLimits

0xebf8,	// (0x0008d5d8) navi_pane_g1_ParamLimits

0x7b55,	// (0x00086535) navi_pane_g2_ParamLimits

0x7b83,	// (0x00086563) navi_pane_g3_ParamLimits

0xf404,	// (0x0008dde4) navi_pane_g_ParamLimits

0x7bdd,	// (0x000865bd) navi_pane_mv_t1_ParamLimits

0x9e74,	// (0x00088854) grid_imed_effect_pane_ParamLimits

0x684b,	// (0x0008522b) aid_placing_vt_slider_lsc

0xe3eb,	// (0x0008cdcb) aid_placing_vt_slider_prt

0xf0cd,	// (0x0008daad) bg_tb_trans_pane_cp01_ParamLimits

0x1b36,	// (0x00080516) popup_image_details_window_g1_ParamLimits

0x1b49,	// (0x00080529) popup_image_details_window_g2_ParamLimits

0x1b5e,	// (0x0008053e) popup_image_details_window_g3_ParamLimits

0x1b5e,	// (0x0008053e) popup_image_details_window_g3

0xf737,	// (0x0008e117) popup_image_details_window_g_ParamLimits

0x1b72,	// (0x00080552) popup_image_details_window_t1_ParamLimits

0x1b84,	// (0x00080564) popup_image_details_window_t2_ParamLimits

0x1b9d,	// (0x0008057d) popup_image_details_window_t3_ParamLimits

0x1bb1,	// (0x00080591) popup_image_details_window_t4_ParamLimits

0x1bcc,	// (0x000805ac) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0008e11e) popup_image_details_window_t_ParamLimits

0xb8a0,	// (0x0008a280) cl_header_name_pane_ParamLimits

0xb8a0,	// (0x0008a280) cl_header_name_pane

0xbc03,	// (0x0008a5e3) cl_header_name_pane_t1_ParamLimits

0xbc03,	// (0x0008a5e3) cl_header_name_pane_t1

0xbc1a,	// (0x0008a5fa) cl_header_name_pane_t2_ParamLimits

0xbc1a,	// (0x0008a5fa) cl_header_name_pane_t2

0xbc44,	// (0x0008a624) cl_header_name_pane_t3_ParamLimits

0xbc44,	// (0x0008a624) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x0008e51f) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x0008e51f) cl_header_name_pane_t

0x7bae,	// (0x0008658e) navi_pane_mv_g2_ParamLimits

0x241c,	// (0x00080dfc) field_vitu2_entry_pane_g1_ParamLimits

0x2428,	// (0x00080e08) field_vitu2_entry_pane_g2_ParamLimits

0x2434,	// (0x00080e14) field_vitu2_entry_pane_g3_ParamLimits

0x2434,	// (0x00080e14) field_vitu2_entry_pane_g3

0xf935,	// (0x0008e315) field_vitu2_entry_pane_g_ParamLimits

0xabcc,	// (0x000895ac) cell_vitu2_itu_pane_g1_ParamLimits

0xabdc,	// (0x000895bc) cell_vitu2_itu_pane_g2_ParamLimits

0xabdc,	// (0x000895bc) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0008e321) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0008e321) cell_vitu2_itu_pane_g

0xa97a,	// (0x0008935a) bg_vkb2_func_pane_cp05_ParamLimits

0xa97a,	// (0x0008935a) bg_vkb2_func_pane_cp05

0xa97a,	// (0x0008935a) bg_vkb2_func_pane_cp03

0xa97a,	// (0x0008935a) bg_vkb2_func_pane_cp04

0xa97a,	// (0x0008935a) bg_vkb2_func_pane_cp10_ParamLimits

0xa97a,	// (0x0008935a) bg_vkb2_func_pane_cp10

0xb842,	// (0x0008a222) bg_vkb2_func_pane_cp08

0xb828,	// (0x0008a208) bg_vkb2_func_pane_cp06

0xb836,	// (0x0008a216) bg_vkb2_func_pane_cp07

0x2ad8,	// (0x000814b8) bg_vkb2_func_pane_cp11_ParamLimits

0x2ad8,	// (0x000814b8) bg_vkb2_func_pane_cp11

0x2aed,	// (0x000814cd) bg_vkb2_func_pane_cp12_ParamLimits

0x2aed,	// (0x000814cd) bg_vkb2_func_pane_cp12

0x01c9,	// (0x0007eba9) bg_vkb2_func_pane_cp09

0x24a0,	// (0x00080e80) bg_vkb2_func_pane_g1

0xe5ad,	// (0x0008cf8d) bg_vkb2_func_pane_g2

0x24a8,	// (0x00080e88) bg_vkb2_func_pane_g3

0x24b0,	// (0x00080e90) bg_vkb2_func_pane_g4

0x2711,	// (0x000810f1) bg_vkb2_func_pane_g5

0x24c8,	// (0x00080ea8) bg_vkb2_func_pane_g6

0x24d0,	// (0x00080eb0) bg_vkb2_func_pane_g7

0x24c0,	// (0x00080ea0) bg_vkb2_func_pane_g8

0xe58d,	// (0x0008cf6d) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x0008e526) bg_vkb2_func_pane_g

0xbb52,	// (0x0008a532) blid2_tripm_pane_g6_ParamLimits

0xbb52,	// (0x0008a532) blid2_tripm_pane_g6

0x229c,	// (0x00080c7c) mp4_progress_pane_g1

0xbbac,	// (0x0008a58c) blid2_tripm_values_pane_ParamLimits

0xbbac,	// (0x0008a58c) blid2_tripm_values_pane

0xbc69,	// (0x0008a649) blid2_tripm_values_pane_t1

0xbc77,	// (0x0008a657) blid2_tripm_values_pane_t2

0xbc85,	// (0x0008a665) blid2_tripm_values_pane_t3

0xbc93,	// (0x0008a673) blid2_tripm_values_pane_t4

0xbca1,	// (0x0008a681) blid2_tripm_values_pane_t5

0xbcaf,	// (0x0008a68f) blid2_tripm_values_pane_t6

0xbcbd,	// (0x0008a69d) blid2_tripm_values_pane_t7

0xbccb,	// (0x0008a6ab) blid2_tripm_values_pane_t8

0xbcd9,	// (0x0008a6b9) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x0008e539) blid2_tripm_values_pane_t

0x688b,	// (0x0008526b) call_video_pane_t1_ParamLimits

0x68ac,	// (0x0008528c) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0008dc6d) call_video_pane_t_ParamLimits

0x810e,	// (0x00086aee) msg_header_pane_g1_ParamLimits

0xee13,	// (0x0008d7f3) msg_header_pane_g2_ParamLimits

0xee13,	// (0x0008d7f3) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0008de87) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0008de87) msg_header_pane_g

0xe1b7,	// (0x0008cb97) main_clock2_pane_ParamLimits

0x9c1a,	// (0x000885fa) grid_clock2_toolbar_pane_ParamLimits

0x9c1a,	// (0x000885fa) grid_clock2_toolbar_pane

0x9c1a,	// (0x000885fa) listscroll_clock2_pane_ParamLimits

0x9c1a,	// (0x000885fa) listscroll_clock2_pane

0x9cb1,	// (0x00088691) main_clock2_pane_t3_ParamLimits

0x9cb1,	// (0x00088691) main_clock2_pane_t3

0x9cc3,	// (0x000886a3) main_clock2_pane_t4_ParamLimits

0x9cc3,	// (0x000886a3) main_clock2_pane_t4

0x2bf3,	// (0x000815d3) cell_clock2_toolbar_pane

0x2bfb,	// (0x000815db) cell_clock2_toolbar_pane_cp01

0x2bfb,	// (0x000815db) cell_clock2_toolbar_pane_cp02

0x2c03,	// (0x000815e3) cell_clock2_toolbar_pane_cp03

0x2c0b,	// (0x000815eb) list_clock2_pane

0xeb4f,	// (0x0008d52f) scroll_pane_cp10

0x2c13,	// (0x000815f3) list_single_clock2_pane_ParamLimits

0x2c13,	// (0x000815f3) list_single_clock2_pane

0xec98,	// (0x0008d678) list_highlight_pane_cp08

0x2c20,	// (0x00081600) list_single_clock2_pane_t1

0x2c2e,	// (0x0008160e) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x0008e54c) list_single_clock2_pane_t

0x01c9,	// (0x0007eba9) bg_button_pane_cp10

0x2c3c,	// (0x0008161c) cell_clock2_toolbar_pane_g1

0x81ab,	// (0x00086b8b) aid_main_viewer_pane_g1_ParamLimits

0x81ab,	// (0x00086b8b) aid_main_viewer_pane_g1

0x81b7,	// (0x00086b97) aid_main_viewer_pane_g2_ParamLimits

0x81b7,	// (0x00086b97) aid_main_viewer_pane_g2

0x81c3,	// (0x00086ba3) aid_main_viewer_pane_g3_ParamLimits

0x81c3,	// (0x00086ba3) aid_main_viewer_pane_g3

0x81d4,	// (0x00086bb4) aid_main_viewer_pane_g4_ParamLimits

0x81d4,	// (0x00086bb4) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0008de98) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0008de98) aid_main_viewer_pane_g

0x8948,	// (0x00087328) main_calc_pane_ParamLimits

0x8955,	// (0x00087335) main_dialer2_pane_ParamLimits

0x01c9,	// (0x0007eba9) main_cam6_pane

0x01c9,	// (0x0007eba9) main_vid6_pane

0x9c26,	// (0x00088606) listscroll_gen_pane_cp06_ParamLimits

0x9c26,	// (0x00088606) listscroll_gen_pane_cp06

0x9cd5,	// (0x000886b5) main_clock2_pane_t5_ParamLimits

0x9cd5,	// (0x000886b5) main_clock2_pane_t5

0x9d1e,	// (0x000886fe) aid_call2_pane_cp10_ParamLimits

0x9d30,	// (0x00088710) aid_call_pane_cp10_ParamLimits

0xebcd,	// (0x0008d5ad) popup_clock_analogue_window_cp10_g1_ParamLimits

0xebcd,	// (0x0008d5ad) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9d42,	// (0x00088722) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9d42,	// (0x00088722) popup_clock_analogue_window_cp10_g4_ParamLimits

0xebcd,	// (0x0008d5ad) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0008e1ce) popup_clock_analogue_window_cp10_g_ParamLimits

0x9d54,	// (0x00088734) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa4fe,	// (0x00088ede) cell_dialer2_keypad_pane_g2_ParamLimits

0xa4fe,	// (0x00088ede) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0008e2b4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0008e2b4) cell_dialer2_keypad_pane_g

0xa51a,	// (0x00088efa) cell_dialer2_keypad_pane_t1

0xaf07,	// (0x000898e7) main_cset_text2_pane_ParamLimits

0xaf07,	// (0x000898e7) main_cset_text2_pane

0x2952,	// (0x00081332) area_vitu2_query_pane_g1_ParamLimits

0xb7c7,	// (0x0008a1a7) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x0008e469) area_vitu2_query_pane_g_ParamLimits

0x29d6,	// (0x000813b6) area_vitu2_query_pane_t7_ParamLimits

0x29d6,	// (0x000813b6) area_vitu2_query_pane_t7

0xb828,	// (0x0008a208) bg_button_pane_cp018_ParamLimits

0xb836,	// (0x0008a216) bg_button_pane_cp021_ParamLimits

0xb842,	// (0x0008a222) bg_button_pane_cp022_ParamLimits

0xb842,	// (0x0008a222) bg_vkb2_func_pane_cp08_ParamLimits

0xb828,	// (0x0008a208) bg_vkb2_func_pane_cp06_ParamLimits

0xb836,	// (0x0008a216) bg_vkb2_func_pane_cp07_ParamLimits

0xb853,	// (0x0008a233) input_focus_pane_cp09_ParamLimits

0xbce7,	// (0x0008a6c7) cam6_autofocus_pane_ParamLimits

0xbce7,	// (0x0008a6c7) cam6_autofocus_pane

0xbd09,	// (0x0008a6e9) cam6_image_uncrop_pane_ParamLimits

0xbd09,	// (0x0008a6e9) cam6_image_uncrop_pane

0xbd36,	// (0x0008a716) cam6_indi_pane_ParamLimits

0xbd36,	// (0x0008a716) cam6_indi_pane

0xbd50,	// (0x0008a730) cam6_mode_pane_ParamLimits

0xbd50,	// (0x0008a730) cam6_mode_pane

0xbd64,	// (0x0008a744) cam6_timer_pane_ParamLimits

0xbd64,	// (0x0008a744) cam6_timer_pane

0xbd70,	// (0x0008a750) cam6_zoom_pane_ParamLimits

0xbd70,	// (0x0008a750) cam6_zoom_pane

0xbd88,	// (0x0008a768) cam6_mode_pane_g1_ParamLimits

0xbd88,	// (0x0008a768) cam6_mode_pane_g1

0xbd94,	// (0x0008a774) cam6_mode_pane_g2_ParamLimits

0xbd94,	// (0x0008a774) cam6_mode_pane_g2

0xbda0,	// (0x0008a780) cam6_mode_pane_g3_ParamLimits

0xbda0,	// (0x0008a780) cam6_mode_pane_g3

0xbdac,	// (0x0008a78c) cam6_mode_pane_g4_ParamLimits

0xbdac,	// (0x0008a78c) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x0008e551) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x0008e551) cam6_mode_pane_g

0x2c44,	// (0x00081624) bg_tb_trans_pane_cp08_ParamLimits

0x2c44,	// (0x00081624) bg_tb_trans_pane_cp08

0x2c52,	// (0x00081632) cam6_battery_pane_ParamLimits

0x2c52,	// (0x00081632) cam6_battery_pane

0x2c68,	// (0x00081648) cam6_indi_pane_g1_ParamLimits

0x2c68,	// (0x00081648) cam6_indi_pane_g1

0x2c7a,	// (0x0008165a) cam6_indi_pane_g2_ParamLimits

0x2c7a,	// (0x0008165a) cam6_indi_pane_g2

0x2c8c,	// (0x0008166c) cam6_indi_pane_g3_ParamLimits

0x2c8c,	// (0x0008166c) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x0008e55a) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0008e55a) cam6_indi_pane_g

0x2c9e,	// (0x0008167e) cam6_indi_pane_t1_ParamLimits

0x2c9e,	// (0x0008167e) cam6_indi_pane_t1

0xaa02,	// (0x000893e2) cam6_autofocus_pane_g1

0xa9fa,	// (0x000893da) cam6_autofocus_pane_g2

0xaa12,	// (0x000893f2) cam6_autofocus_pane_g3

0xaa0a,	// (0x000893ea) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x0008e561) cam6_autofocus_pane_g

0x2cc4,	// (0x000816a4) cam6_timer_pane_g1

0x2ccc,	// (0x000816ac) cam6_timer_pane_t1

0x2cda,	// (0x000816ba) cam6_zoom_cont_pane

0x2ce2,	// (0x000816c2) cam6_zoom_pane_g1

0x2cea,	// (0x000816ca) cam6_zoom_pane_g2

0xbdb8,	// (0x0008a798) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x0008e56a) cam6_zoom_pane_g

0x19aa,	// (0x0008038a) cam6_battery_pane_g1

0x19aa,	// (0x0008038a) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0008e0db) cam6_battery_pane_g

0x2cf2,	// (0x000816d2) cam6_zoom_cont_pane_g1

0x2cfb,	// (0x000816db) cam6_zoom_cont_pane_g2

0x2d04,	// (0x000816e4) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x0008e571) cam6_zoom_cont_pane_g

0xbdd5,	// (0x0008a7b5) cam6_mode_pane_cp_ParamLimits

0xbdd5,	// (0x0008a7b5) cam6_mode_pane_cp

0xbde9,	// (0x0008a7c9) cam6_zoom_pane_cp_ParamLimits

0xbde9,	// (0x0008a7c9) cam6_zoom_pane_cp

0xbe01,	// (0x0008a7e1) vid6_image_uncrop_cif_pane_ParamLimits

0xbe01,	// (0x0008a7e1) vid6_image_uncrop_cif_pane

0xbe2d,	// (0x0008a80d) vid6_image_uncrop_nhd_pane_ParamLimits

0xbe2d,	// (0x0008a80d) vid6_image_uncrop_nhd_pane

0xbe4a,	// (0x0008a82a) vid6_image_uncrop_vga_pane_ParamLimits

0xbe4a,	// (0x0008a82a) vid6_image_uncrop_vga_pane

0xbe69,	// (0x0008a849) vid6_image_uncrop_wvga_pane_ParamLimits

0xbe69,	// (0x0008a849) vid6_image_uncrop_wvga_pane

0xbe86,	// (0x0008a866) vid6_indi_pane_ParamLimits

0xbe86,	// (0x0008a866) vid6_indi_pane

0x2c44,	// (0x00081624) bg_tb_trans_pane_cp09_ParamLimits

0x2c44,	// (0x00081624) bg_tb_trans_pane_cp09

0x2d1c,	// (0x000816fc) cam6_battery_pane_cp_ParamLimits

0x2d1c,	// (0x000816fc) cam6_battery_pane_cp

0x2d28,	// (0x00081708) vid6_indi_pane_g1_ParamLimits

0x2d28,	// (0x00081708) vid6_indi_pane_g1

0x2d3a,	// (0x0008171a) vid6_indi_pane_g2_ParamLimits

0x2d3a,	// (0x0008171a) vid6_indi_pane_g2

0x2d4c,	// (0x0008172c) vid6_indi_pane_g3_ParamLimits

0x2d4c,	// (0x0008172c) vid6_indi_pane_g3

0x2d61,	// (0x00081741) vid6_indi_pane_g4_ParamLimits

0x2d61,	// (0x00081741) vid6_indi_pane_g4

0x2d76,	// (0x00081756) vid6_indi_pane_g5_ParamLimits

0x2d76,	// (0x00081756) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x0008e578) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x0008e578) vid6_indi_pane_g

0x2d90,	// (0x00081770) vid6_indi_pane_t1_ParamLimits

0x2d90,	// (0x00081770) vid6_indi_pane_t1

0x2da6,	// (0x00081786) vid6_indi_pane_t2_ParamLimits

0x2da6,	// (0x00081786) vid6_indi_pane_t2

0x2dce,	// (0x000817ae) vid6_indi_pane_t3_ParamLimits

0x2dce,	// (0x000817ae) vid6_indi_pane_t3

0x2df6,	// (0x000817d6) vid6_indi_pane_t4_ParamLimits

0x2df6,	// (0x000817d6) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x0008e583) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x0008e583) vid6_indi_pane_t

0x2e1a,	// (0x000817fa) wait_bar_pane_cp08

0xbeab,	// (0x0008a88b) main_cset_text2_pane_t1_ParamLimits

0xbeab,	// (0x0008a88b) main_cset_text2_pane_t1

0xbdc0,	// (0x0008a7a0) listscroll_gen_pane_cp06_t1_ParamLimits

0xbdc0,	// (0x0008a7a0) listscroll_gen_pane_cp06_t1

0x01c9,	// (0x0007eba9) main_cam6_set_pane

0xa88d,	// (0x0008926d) bg_tb_trans_pane_cp06_ParamLimits

0xa8a3,	// (0x00089283) cam4_indicators_pane_g1_ParamLimits

0xa8b4,	// (0x00089294) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0008e2f1) cam4_indicators_pane_g_ParamLimits

0xa8d2,	// (0x000892b2) cam4_indicators_pane_t1_ParamLimits

0xa97a,	// (0x0008935a) bg_tb_trans_pane_cp07_ParamLimits

0xa992,	// (0x00089372) vid4_indicators_pane_g1_ParamLimits

0xa9a3,	// (0x00089383) vid4_indicators_pane_g2_ParamLimits

0xa9b4,	// (0x00089394) vid4_indicators_pane_g3_ParamLimits

0xa9c5,	// (0x000893a5) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0008e303) vid4_indicators_pane_g_ParamLimits

0xa9e1,	// (0x000893c1) vid4_indicators_pane_t1_ParamLimits

0xb984,	// (0x0008a364) vid4_progress_pane_g1_ParamLimits

0xb994,	// (0x0008a374) vid4_progress_pane_g2_ParamLimits

0xe852,	// (0x0008d232) vid4_progress_pane_g3_ParamLimits

0xb9a4,	// (0x0008a384) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0008e4b4) vid4_progress_pane_g_ParamLimits

0xb9c2,	// (0x0008a3a2) vid4_progress_pane_t1_ParamLimits

0xb9d7,	// (0x0008a3b7) vid4_progress_pane_t2_ParamLimits

0xb9ed,	// (0x0008a3cd) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x0008e4bf) vid4_progress_pane_t_ParamLimits

0xba02,	// (0x0008a3e2) wait_bar_pane_cp07_ParamLimits

0xbede,	// (0x0008a8be) main_cam6_set_pane_g2_ParamLimits

0xbede,	// (0x0008a8be) main_cam6_set_pane_g2

0xbeea,	// (0x0008a8ca) main_cset6_listscroll_pane_ParamLimits

0xbeea,	// (0x0008a8ca) main_cset6_listscroll_pane

0xbf15,	// (0x0008a8f5) main_cset6_slider_pane_ParamLimits

0xbf15,	// (0x0008a8f5) main_cset6_slider_pane

0xbf21,	// (0x0008a901) main_cset6_text2_pane_ParamLimits

0xbf21,	// (0x0008a901) main_cset6_text2_pane

0x2e29,	// (0x00081809) main_cset6_text_pane

0x2e31,	// (0x00081811) main_cset_list_pane_copy1_ParamLimits

0x2e31,	// (0x00081811) main_cset_list_pane_copy1

0x2e41,	// (0x00081821) scroll_pane_cp028_copy1

0xbf34,	// (0x0008a914) cset_list_set_pane_copy1

0xbf47,	// (0x0008a927) aid_position_infowindow_above_copy1

0xbf4f,	// (0x0008a92f) aid_position_infowindow_below_copy1

0xbf57,	// (0x0008a937) cset_list_set_pane_g1_copy1

0x2693,	// (0x00081073) cset_list_set_pane_g3_copy1_ParamLimits

0x2693,	// (0x00081073) cset_list_set_pane_g3_copy1

0x26a2,	// (0x00081082) cset_list_set_pane_t1_copy1_ParamLimits

0x26a2,	// (0x00081082) cset_list_set_pane_t1_copy1

0xf0cd,	// (0x0008daad) list_highlight_pane_cp021_copy1_ParamLimits

0xf0cd,	// (0x0008daad) list_highlight_pane_cp021_copy1

0x2e4a,	// (0x0008182a) cset6_slider_pane_ParamLimits

0x2e4a,	// (0x0008182a) cset6_slider_pane

0x2e76,	// (0x00081856) main_cset6_slider_pane_g1_ParamLimits

0x2e76,	// (0x00081856) main_cset6_slider_pane_g1

0xbf5f,	// (0x0008a93f) main_cset6_slider_pane_g2_ParamLimits

0xbf5f,	// (0x0008a93f) main_cset6_slider_pane_g2

0x2e9e,	// (0x0008187e) main_cset6_slider_pane_g3_ParamLimits

0x2e9e,	// (0x0008187e) main_cset6_slider_pane_g3

0xbf87,	// (0x0008a967) main_cset6_slider_pane_g4_ParamLimits

0xbf87,	// (0x0008a967) main_cset6_slider_pane_g4

0xbf93,	// (0x0008a973) main_cset6_slider_pane_g5_ParamLimits

0xbf93,	// (0x0008a973) main_cset6_slider_pane_g5

0x25cf,	// (0x00080faf) main_cset6_slider_pane_g7_ParamLimits

0x25cf,	// (0x00080faf) main_cset6_slider_pane_g7

0x25db,	// (0x00080fbb) main_cset6_slider_pane_g8_ParamLimits

0x25db,	// (0x00080fbb) main_cset6_slider_pane_g8

0xbfa1,	// (0x0008a981) main_cset6_slider_pane_g9_ParamLimits

0xbfa1,	// (0x0008a981) main_cset6_slider_pane_g9

0xbfad,	// (0x0008a98d) main_cset6_slider_pane_g10_ParamLimits

0xbfad,	// (0x0008a98d) main_cset6_slider_pane_g10

0xbfb9,	// (0x0008a999) main_cset6_slider_pane_g11_ParamLimits

0xbfb9,	// (0x0008a999) main_cset6_slider_pane_g11

0xbfc5,	// (0x0008a9a5) main_cset6_slider_pane_g12_ParamLimits

0xbfc5,	// (0x0008a9a5) main_cset6_slider_pane_g12

0xbfd1,	// (0x0008a9b1) main_cset6_slider_pane_g13_ParamLimits

0xbfd1,	// (0x0008a9b1) main_cset6_slider_pane_g13

0xbfdd,	// (0x0008a9bd) main_cset6_slider_pane_g14_ParamLimits

0xbfdd,	// (0x0008a9bd) main_cset6_slider_pane_g14

0xbfe9,	// (0x0008a9c9) main_cset6_slider_pane_g15_ParamLimits

0xbfe9,	// (0x0008a9c9) main_cset6_slider_pane_g15

0xc001,	// (0x0008a9e1) main_cset6_slider_pane_g16_ParamLimits

0xc001,	// (0x0008a9e1) main_cset6_slider_pane_g16

0xc00f,	// (0x0008a9ef) main_cset6_slider_pane_g17_ParamLimits

0xc00f,	// (0x0008a9ef) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x0008e58c) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x0008e58c) main_cset6_slider_pane_g

0x2eaa,	// (0x0008188a) main_cset6_slider_pane_t1_ParamLimits

0x2eaa,	// (0x0008188a) main_cset6_slider_pane_t1

0xc035,	// (0x0008aa15) main_cset6_slider_pane_t2_ParamLimits

0xc035,	// (0x0008aa15) main_cset6_slider_pane_t2

0xc060,	// (0x0008aa40) main_cset6_slider_pane_t3_ParamLimits

0xc060,	// (0x0008aa40) main_cset6_slider_pane_t3

0xc08b,	// (0x0008aa6b) main_cset6_slider_pane_t4_ParamLimits

0xc08b,	// (0x0008aa6b) main_cset6_slider_pane_t4

0xc0b6,	// (0x0008aa96) main_cset6_slider_pane_t5_ParamLimits

0xc0b6,	// (0x0008aa96) main_cset6_slider_pane_t5

0x2eeb,	// (0x000818cb) main_cset6_slider_pane_t7_ParamLimits

0x2eeb,	// (0x000818cb) main_cset6_slider_pane_t7

0xc0e3,	// (0x0008aac3) main_cset6_slider_pane_t8_ParamLimits

0xc0e3,	// (0x0008aac3) main_cset6_slider_pane_t8

0xc107,	// (0x0008aae7) main_cset6_slider_pane_t9_ParamLimits

0xc107,	// (0x0008aae7) main_cset6_slider_pane_t9

0xc12b,	// (0x0008ab0b) main_cset6_slider_pane_t10_ParamLimits

0xc12b,	// (0x0008ab0b) main_cset6_slider_pane_t10

0xc14f,	// (0x0008ab2f) main_cset6_slider_pane_t11_ParamLimits

0xc14f,	// (0x0008ab2f) main_cset6_slider_pane_t11

0x2f21,	// (0x00081901) main_cset6_slider_pane_t14_ParamLimits

0x2f21,	// (0x00081901) main_cset6_slider_pane_t14

0x2f5a,	// (0x0008193a) main_cset6_slider_pane_t15_ParamLimits

0x2f5a,	// (0x0008193a) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x0008e5b1) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x0008e5b1) main_cset6_slider_pane_t

0x26b7,	// (0x00081097) cset_slider_pane_g1_copy1

0x26c0,	// (0x000810a0) cset_slider_pane_g2_copy1

0x26c9,	// (0x000810a9) cset_slider_pane_g3_copy1

0x01c9,	// (0x0007eba9) bg_popup_sub_pane_cp011_copy1

0x2772,	// (0x00081152) main_cset_text_pane_g1_copy1

0x277a,	// (0x0008115a) main_cset_text_pane_t1_copy1

0x2788,	// (0x00081168) main_cset_text_pane_t2_copy1

0x2796,	// (0x00081176) main_cset_text_pane_t3_copy1

0x27a4,	// (0x00081184) main_cset_text_pane_t4_copy1

0x27b2,	// (0x00081192) main_cset_text_pane_t5_copy1

0x27c0,	// (0x000811a0) main_cset_text_pane_t6_copy1

0x27ce,	// (0x000811ae) main_cset_text_pane_t7_copy1

0xc173,	// (0x0008ab53) main_cset_text2_pane_t1_copy1

0x01c9,	// (0x0007eba9) main_ncimui_pane

0x8994,	// (0x00087374) popup_query_ncimui_window_ParamLimits

0x8994,	// (0x00087374) popup_query_ncimui_window

0x44e0,	// (0x00082ec0) field_cale_ev2_pane_g4_ParamLimits

0x44e0,	// (0x00082ec0) field_cale_ev2_pane_g4

0xa21e,	// (0x00088bfe) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa21e,	// (0x00088bfe) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0008e28f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0008e28f) cell_video_dialer_keypad_pane_g

0xa236,	// (0x00088c16) cell_video_dialer_keypad_pane_t1

0x01c9,	// (0x0007eba9) bg_popup_window_pane_cp012

0xea2c,	// (0x0008d40c) heading_pane_cp06

0x3082,	// (0x00081a62) ncim_query_content_pane

0x01c9,	// (0x0007eba9) bg_popup_heading_pane_cp01

0x308a,	// (0x00081a6a) ncim_heading_pane_t1

0x3098,	// (0x00081a78) ncim_indicator_popup_pane

0x30aa,	// (0x00081a8a) ncim_query_button_pane

0x30be,	// (0x00081a9e) ncim_query_content_pane_t1

0x30d0,	// (0x00081ab0) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0008e5f0) ncim_query_content_pane_t

0x310a,	// (0x00081aea) ncim_query_list_pane

0x311c,	// (0x00081afc) ncim_query_popup_pane

0x3098,	// (0x00081a78) ncim_indicator_popup_pane_ParamLimits

0xc295,	// (0x0008ac75) ncim_query_content_pane_g1_ParamLimits

0xc295,	// (0x0008ac75) ncim_query_content_pane_g1

0x30be,	// (0x00081a9e) ncim_query_content_pane_t1_ParamLimits

0x30d0,	// (0x00081ab0) ncim_query_content_pane_t2_ParamLimits

0xc2a1,	// (0x0008ac81) ncim_query_content_pane_t3_ParamLimits

0xc2a1,	// (0x0008ac81) ncim_query_content_pane_t3

0xc2be,	// (0x0008ac9e) ncim_query_content_pane_t4_ParamLimits

0xc2be,	// (0x0008ac9e) ncim_query_content_pane_t4

0xc2db,	// (0x0008acbb) ncim_query_content_pane_t5_ParamLimits

0xc2db,	// (0x0008acbb) ncim_query_content_pane_t5

0x30e2,	// (0x00081ac2) ncim_query_content_pane_t6_ParamLimits

0x30e2,	// (0x00081ac2) ncim_query_content_pane_t6

0xfc10,	// (0x0008e5f0) ncim_query_content_pane_t_ParamLimits

0x310a,	// (0x00081aea) ncim_query_list_pane_ParamLimits

0x311c,	// (0x00081afc) ncim_query_popup_pane_ParamLimits

0x3130,	// (0x00081b10) wait_bar_pane_cp04

0x01c9,	// (0x0007eba9) input_focus_pane_cp011

0x3138,	// (0x00081b18) ncim_query_popup_pane_t1

0x3146,	// (0x00081b26) ncim_list_query_list_pane_ParamLimits

0x3146,	// (0x00081b26) ncim_list_query_list_pane

0x01c9,	// (0x0007eba9) bg_button_pane_cp027

0x3153,	// (0x00081b33) ncim_query_button_pane_g1

0x01c9,	// (0x0007eba9) list_highlight_pane_cp012

0x315d,	// (0x00081b3d) ncim_list_query_list_pane_g1

0x3165,	// (0x00081b45) ncim_list_query_list_pane_t1

0xa8c3,	// (0x000892a3) cam4_indicators_pane_g3_ParamLimits

0xa8c3,	// (0x000892a3) cam4_indicators_pane_g3

0xa9d1,	// (0x000893b1) vid4_indicators_pane_g5_ParamLimits

0xa9d1,	// (0x000893b1) vid4_indicators_pane_g5

0xb9b3,	// (0x0008a393) vid4_progress_pane_g5_ParamLimits

0xb9b3,	// (0x0008a393) vid4_progress_pane_g5

0xc1ae,	// (0x0008ab8e) main_ncimui_pane_g1

0xc204,	// (0x0008abe4) ncimui_group_query_pane_ParamLimits

0xc204,	// (0x0008abe4) ncimui_group_query_pane

0xc240,	// (0x0008ac20) ncimui_list_pane_ParamLimits

0xc240,	// (0x0008ac20) ncimui_list_pane

0xc261,	// (0x0008ac41) ncimui_text_pane_ParamLimits

0xc261,	// (0x0008ac41) ncimui_text_pane

0xc2f8,	// (0x0008acd8) ncimui_text_pane_t1_ParamLimits

0xc2f8,	// (0x0008acd8) ncimui_text_pane_t1

0x3173,	// (0x00081b53) ncimui_list_single_graphic_pane_ParamLimits

0x3173,	// (0x00081b53) ncimui_list_single_graphic_pane

0xc317,	// (0x0008acf7) ncimui_query_pane_ParamLimits

0xc317,	// (0x0008acf7) ncimui_query_pane

0x01c9,	// (0x0007eba9) list_highlight_pane_cp013

0x3183,	// (0x00081b63) ncim_list_query_list_pane_t1_copy1

0x315d,	// (0x00081b3d) ncim_list_single_graphic_pane_g1

0x3191,	// (0x00081b71) ncim_query_button_pane_cp01

0x319d,	// (0x00081b7d) ncim_query_entry_pane_ParamLimits

0x319d,	// (0x00081b7d) ncim_query_entry_pane

0x31b0,	// (0x00081b90) ncimui_query_pane_g1

0x31bc,	// (0x00081b9c) ncimui_query_pane_t1_ParamLimits

0x31bc,	// (0x00081b9c) ncimui_query_pane_t1

0xf0cd,	// (0x0008daad) input_focus_pane_cp012

0x31d5,	// (0x00081bb5) ncim_query_entry_pane_t1

0xe1b7,	// (0x0008cb97) main_im_pane_ParamLimits

0xf0cd,	// (0x0008daad) main_mobtv_pane_ParamLimits

0xf0cd,	// (0x0008daad) main_mobtv_pane

0xc01d,	// (0x0008a9fd) main_cset6_slider_pane_g18_ParamLimits

0xc01d,	// (0x0008a9fd) main_cset6_slider_pane_g18

0xc029,	// (0x0008aa09) main_cset6_slider_pane_g19_ParamLimits

0xc029,	// (0x0008aa09) main_cset6_slider_pane_g19

0x2434,	// (0x00080e14) bg_main_mobtv_pane_ParamLimits

0x2434,	// (0x00080e14) bg_main_mobtv_pane

0xc32a,	// (0x0008ad0a) main_mobtv_info_pane

0xc335,	// (0x0008ad15) main_mobtv_loading_pane_ParamLimits

0xc335,	// (0x0008ad15) main_mobtv_loading_pane

0x31e7,	// (0x00081bc7) main_mobtv_pg_channel_list_pane

0x31f1,	// (0x00081bd1) main_mobtv_pg_hdr_pane

0xc342,	// (0x0008ad22) main_mobtv_programe_curr_pane_ParamLimits

0xc342,	// (0x0008ad22) main_mobtv_programe_curr_pane

0xc34f,	// (0x0008ad2f) main_mobtv_programe_next_pane_ParamLimits

0xc34f,	// (0x0008ad2f) main_mobtv_programe_next_pane

0x31fa,	// (0x00081bda) popup_mobtv_noti_window

0x19aa,	// (0x0008038a) main_tv_pg_hdr_pane_g1

0x3202,	// (0x00081be2) main_tv_pg_hdr_pane_g2

0x320a,	// (0x00081bea) main_tv_pg_hdr_pane_g3

0x3212,	// (0x00081bf2) main_tv_pg_hdr_pane_g4

0x321a,	// (0x00081bfa) main_tv_pg_hdr_pane_g5

0x3224,	// (0x00081c04) main_tv_pg_hdr_pane_g6

0x322e,	// (0x00081c0e) main_tv_pg_hdr_pane_g7

0x3238,	// (0x00081c18) main_tv_pg_hdr_pane_g8

0x3242,	// (0x00081c22) main_tv_pg_hdr_pane_g9

0x324c,	// (0x00081c2c) main_tv_pg_hdr_pane_g10

0x3256,	// (0x00081c36) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x0008e5fd) main_tv_pg_hdr_pane_g

0x3260,	// (0x00081c40) main_tv_pg_hdr_pane_t1

0x326e,	// (0x00081c4e) main_tv_pg_hdr_pane_t2

0x327c,	// (0x00081c5c) main_tv_pg_hdr_pane_t3

0x328c,	// (0x00081c6c) main_tv_pg_hdr_pane_t4

0x329c,	// (0x00081c7c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0008e614) main_tv_pg_hdr_pane_t

0x32ac,	// (0x00081c8c) single_mobtv_pg_channel_pane_ParamLimits

0x32ac,	// (0x00081c8c) single_mobtv_pg_channel_pane

0x32be,	// (0x00081c9e) single_mobtv_pg_channel_table_pane

0x32c7,	// (0x00081ca7) single_mobtv_pg_channel_thumb_pane

0x32d0,	// (0x00081cb0) single_tv_pg_channel_pane_g1

0x32d9,	// (0x00081cb9) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x0008e61f) single_tv_pg_channel_pane_g

0x1c16,	// (0x000805f6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1c16,	// (0x000805f6) bg_single_mobtv_pg_channel_thumb_pane

0x32e2,	// (0x00081cc2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x32e2,	// (0x00081cc2) single_mobtv_pg_channel_thumb_pane_g1

0x32f0,	// (0x00081cd0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x32f0,	// (0x00081cd0) single_mobtv_pg_channel_thumb_pane_g2

0x32fc,	// (0x00081cdc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x32fc,	// (0x00081cdc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x0008e624) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x0008e624) single_mobtv_pg_channel_thumb_pane_g

0x3308,	// (0x00081ce8) single_mobtv_pg_channel_thumb_pane_t1

0x3316,	// (0x00081cf6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x0008e62b) single_mobtv_pg_channel_thumb_pane_t

0x19aa,	// (0x0008038a) bg_single_mobtv_pg_channel_table_pane_g1

0x19aa,	// (0x0008038a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0008e0db) bg_single_mobtv_pg_channel_table_pane_g

0x3324,	// (0x00081d04) single_mobtv_pg_channel_table_pane_t1

0x3332,	// (0x00081d12) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0008e630) single_mobtv_pg_channel_table_pane_t

0xc364,	// (0x0008ad44) main_mobtv_info_pane_g1_ParamLimits

0xc364,	// (0x0008ad44) main_mobtv_info_pane_g1

0xc380,	// (0x0008ad60) main_mobtv_info_pane_t1_ParamLimits

0xc380,	// (0x0008ad60) main_mobtv_info_pane_t1

0xc3f8,	// (0x0008add8) main_mobtv_info_pane_t2_ParamLimits

0xc3f8,	// (0x0008add8) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x0008e63a) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x0008e63a) main_mobtv_info_pane_t

0xc487,	// (0x0008ae67) wait_bar_pane_cp05

0xc499,	// (0x0008ae79) main_mobtv_loading_pane_g1_ParamLimits

0xc499,	// (0x0008ae79) main_mobtv_loading_pane_g1

0xc4a7,	// (0x0008ae87) main_mobtv_loading_pane_g2_ParamLimits

0xc4a7,	// (0x0008ae87) main_mobtv_loading_pane_g2

0xc4b3,	// (0x0008ae93) main_mobtv_loading_pane_g3_ParamLimits

0xc4b3,	// (0x0008ae93) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0008e641) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0008e641) main_mobtv_loading_pane_g

0x3340,	// (0x00081d20) main_mobtv_loading_pane_t1_ParamLimits

0x3340,	// (0x00081d20) main_mobtv_loading_pane_t1

0x3358,	// (0x00081d38) main_mobtv_loading_pane_t2_ParamLimits

0x3358,	// (0x00081d38) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x0008e648) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x0008e648) main_mobtv_loading_pane_t

0xc4c1,	// (0x0008aea1) wait_bar_pane_cp06_ParamLimits

0xc4c1,	// (0x0008aea1) wait_bar_pane_cp06

0x337c,	// (0x00081d5c) main_mobtv_programe_curr_pane_t1

0x338a,	// (0x00081d6a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x0008e64d) main_mobtv_programe_curr_pane_t

0x3398,	// (0x00081d78) main_mobtv_programe_next_pane_t1

0x33a6,	// (0x00081d86) main_mobtv_programe_next_pane_t2

0x33b4,	// (0x00081d94) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x0008e652) main_mobtv_programe_next_pane_t

0x01c9,	// (0x0007eba9) bg_popup_mobtv_noti_window_pane

0x33c2,	// (0x00081da2) popup_mobtv_noti_window_g1

0x33ca,	// (0x00081daa) popup_mobtv_noti_window_t1

0x33d8,	// (0x00081db8) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x0008e659) popup_mobtv_noti_window_t

0x19aa,	// (0x0008038a) bg_popup_mobtv_noti_window_pane_g1

0x01c9,	// (0x0007eba9) sc_clock_pane

0x01c9,	// (0x0007eba9) main_fs_bigclock_pane

0xbb9a,	// (0x0008a57a) blid2_tripm_pane_t4_ParamLimits

0xbb9a,	// (0x0008a57a) blid2_tripm_pane_t4

0xc4cd,	// (0x0008aead) sc_clock_pane_g1_ParamLimits

0xc4cd,	// (0x0008aead) sc_clock_pane_g1

0xc4db,	// (0x0008aebb) sc_clock_pane_t1_ParamLimits

0xc4db,	// (0x0008aebb) sc_clock_pane_t1

0xc4ee,	// (0x0008aece) sc_clock_pane_t2_ParamLimits

0xc4ee,	// (0x0008aece) sc_clock_pane_t2

0xc500,	// (0x0008aee0) sc_clock_pane_t3_ParamLimits

0xc500,	// (0x0008aee0) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x0008e65e) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x0008e65e) sc_clock_pane_t

0xd1c8,	// (0x0008bba8) main_fs_bigclock_indicator_pane_ParamLimits

0xd1c8,	// (0x0008bba8) main_fs_bigclock_indicator_pane

0xc58d,	// (0x0008af6d) main_fs_bigclock_pane_g1_ParamLimits

0xc58d,	// (0x0008af6d) main_fs_bigclock_pane_g1

0xd1d4,	// (0x0008bbb4) main_fs_bigclock_pane_t1_ParamLimits

0xd1d4,	// (0x0008bbb4) main_fs_bigclock_pane_t1

0xd1e6,	// (0x0008bbc6) main_fs_bigclock_pane_t2_ParamLimits

0xd1e6,	// (0x0008bbc6) main_fs_bigclock_pane_t2

0xd1fa,	// (0x0008bbda) main_fs_bigclock_pane_t3_ParamLimits

0xd1fa,	// (0x0008bbda) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0008e862) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0008e862) main_fs_bigclock_pane_t

0x400b,	// (0x000829eb) main_fs_bigclock_indicator_pane_g1

0x30b2,	// (0x00081a92) ncim_query_content_pane_g2_ParamLimits

0x30b2,	// (0x00081a92) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x0008e5eb) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x0008e5eb) ncim_query_content_pane_g

0xc514,	// (0x0008aef4) sc_clock_pane_t4_ParamLimits

0xc514,	// (0x0008aef4) sc_clock_pane_t4

0xf0cd,	// (0x0008daad) main_radioblah_pane

0x2385,	// (0x00080d65) cell_call4_button_pane_t1_copy1_ParamLimits

0x2385,	// (0x00080d65) cell_call4_button_pane_t1_copy1

0xc1b6,	// (0x0008ab96) main_ncimui_pane_t1_ParamLimits

0xc1b6,	// (0x0008ab96) main_ncimui_pane_t1

0xc1d0,	// (0x0008abb0) main_ncimui_pane_t2_ParamLimits

0xc1d0,	// (0x0008abb0) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0008e5e4) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0008e5e4) main_ncimui_pane_t

0x351e,	// (0x00081efe) main_radioblah_anim_pane_ParamLimits

0x351e,	// (0x00081efe) main_radioblah_anim_pane

0x352f,	// (0x00081f0f) main_radioblah_info_pane_ParamLimits

0x352f,	// (0x00081f0f) main_radioblah_info_pane

0x3543,	// (0x00081f23) main_radioblah_pane_t1_ParamLimits

0x3543,	// (0x00081f23) main_radioblah_pane_t1

0x355f,	// (0x00081f3f) main_radioblah_pane_t2_ParamLimits

0x355f,	// (0x00081f3f) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x0008e67f) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x0008e67f) main_radioblah_pane_t

0xc5df,	// (0x0008afbf) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc5df,	// (0x0008afbf) main_radioblah_rocker_ctrl_pane

0x35a7,	// (0x00081f87) main_radioblah_info_pane_t1_ParamLimits

0x35a7,	// (0x00081f87) main_radioblah_info_pane_t1

0xc624,	// (0x0008b004) main_radioblah_info_pane_t2_ParamLimits

0xc624,	// (0x0008b004) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x0008e688) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x0008e688) main_radioblah_info_pane_t

0x19aa,	// (0x0008038a) main_radioblah_rocker_ctrl_pane_g1

0xc6d4,	// (0x0008b0b4) main_radioblah_rocker_ctrl_pane_g2

0xc6dc,	// (0x0008b0bc) main_radioblah_rocker_ctrl_pane_g3

0xc6e4,	// (0x0008b0c4) main_radioblah_rocker_ctrl_pane_g4

0xc6ec,	// (0x0008b0cc) main_radioblah_rocker_ctrl_pane_g5

0xc6f4,	// (0x0008b0d4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x0008e691) main_radioblah_rocker_ctrl_pane_g

0xc173,	// (0x0008ab53) main_cset_text2_pane_t1_copy1_ParamLimits

0xa7e3,	// (0x000891c3) cam4_image_uncrop_qvga_pane

0xa938,	// (0x00089318) vid4_image_uncrop_qcif_pane

0xbd28,	// (0x0008a708) cam6_image_uncrop_qvga_pane_ParamLimits

0xbd28,	// (0x0008a708) cam6_image_uncrop_qvga_pane

0x2d0c,	// (0x000816ec) vid6_image_uncrop_qcif_pane_ParamLimits

0x2d0c,	// (0x000816ec) vid6_image_uncrop_qcif_pane

0x01c9,	// (0x0007eba9) bg_popup_preview_window_pane_cp03

0x3064,	// (0x00081a44) list_cset_text2_pane

0x306c,	// (0x00081a4c) main_cset6_text2_pane_g1

0x3074,	// (0x00081a54) main_cset6_text2_pane_t1

0x43a3,	// (0x00082d83) list_cset_text2_pane_t1_ParamLimits

0x43a3,	// (0x00082d83) list_cset_text2_pane_t1

0xf0cd,	// (0x0008daad) main_radioblah_pane_ParamLimits

0xc473,	// (0x0008ae53) main_mobtv_info_pane_t3_ParamLimits

0xc473,	// (0x0008ae53) main_mobtv_info_pane_t3

0xc5cd,	// (0x0008afad) main_radioblah_pane_g1

0xc5f8,	// (0x0008afd8) main_radioblah_info_pane_g1

0xc679,	// (0x0008b059) main_radioblah_info_pane_t3_ParamLimits

0xc679,	// (0x0008b059) main_radioblah_info_pane_t3

0x75f9,	// (0x00085fd9) highlight_cell_cale_month_pane_ParamLimits

0x75f9,	// (0x00085fd9) highlight_cell_cale_month_pane

0x01c9,	// (0x0007eba9) main_phob_fisheye_pane

0x1d2a,	// (0x0008070a) scroll_pane_cp0031_ParamLimits

0x1d2a,	// (0x0008070a) scroll_pane_cp0031

0x2e1a,	// (0x000817fa) wait_bar_pane_cp08_ParamLimits

0xbf34,	// (0x0008a914) cset_list_set_pane_copy1_ParamLimits

0x35e1,	// (0x00081fc1) highlight_cell_cale_month_pane_g1

0xc6fc,	// (0x0008b0dc) highlight_cell_cale_month_pane_t1

0x2a42,	// (0x00081422) list_gen_pane_cp01

0x25ba,	// (0x00080f9a) scroll_pane_01

0xc70a,	// (0x0008b0ea) list_single_double_fisheye_pane

0xc713,	// (0x0008b0f3) list_double_fisheye_pane_g1_ParamLimits

0xc713,	// (0x0008b0f3) list_double_fisheye_pane_g1

0xc71f,	// (0x0008b0ff) list_double_fisheye_pane_g2_ParamLimits

0xc71f,	// (0x0008b0ff) list_double_fisheye_pane_g2

0xc733,	// (0x0008b113) list_double_fisheye_pane_g3_ParamLimits

0xc733,	// (0x0008b113) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x0008e69e) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x0008e69e) list_double_fisheye_pane_g

0xc75c,	// (0x0008b13c) list_double_fisheye_pane_t1_ParamLimits

0xc75c,	// (0x0008b13c) list_double_fisheye_pane_t1

0xc777,	// (0x0008b157) list_double_fisheye_pane_t2_ParamLimits

0xc777,	// (0x0008b157) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x0008e6a9) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x0008e6a9) list_double_fisheye_pane_t

0x01c9,	// (0x0007eba9) main_call5_pane

0xc53a,	// (0x0008af1a) sc_swipe_pane_ParamLimits

0xc53a,	// (0x0008af1a) sc_swipe_pane

0xc7a5,	// (0x0008b185) call5_image_pane_ParamLimits

0xc7a5,	// (0x0008b185) call5_image_pane

0xc7b5,	// (0x0008b195) call5_swipe_1_pane_ParamLimits

0xc7b5,	// (0x0008b195) call5_swipe_1_pane

0xc7c1,	// (0x0008b1a1) call5_swipe_2_pane_ParamLimits

0xc7c1,	// (0x0008b1a1) call5_swipe_2_pane

0xc7db,	// (0x0008b1bb) popup_call5_audio_first_window_ParamLimits

0xc7db,	// (0x0008b1bb) popup_call5_audio_first_window

0x1c16,	// (0x000805f6) call5_swipe_1_pane_g1_ParamLimits

0x1c16,	// (0x000805f6) call5_swipe_1_pane_g1

0x35e9,	// (0x00081fc9) call5_swipe_1_pane_g2_ParamLimits

0x35e9,	// (0x00081fc9) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0008e6ae) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0008e6ae) call5_swipe_1_pane_g

0x35f5,	// (0x00081fd5) call5_swipe_1_pane_t1_ParamLimits

0x35f5,	// (0x00081fd5) call5_swipe_1_pane_t1

0x1c16,	// (0x000805f6) call5_swipe_2_pane_g1_ParamLimits

0x1c16,	// (0x000805f6) call5_swipe_2_pane_g1

0x360a,	// (0x00081fea) call5_swipe_2_pane_g2_ParamLimits

0x360a,	// (0x00081fea) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x0008e6b3) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x0008e6b3) call5_swipe_2_pane_g

0x3616,	// (0x00081ff6) call5_swipe_2_pane_t1_ParamLimits

0x3616,	// (0x00081ff6) call5_swipe_2_pane_t1

0x362b,	// (0x0008200b) sc_swipe_pane_g1_ParamLimits

0x362b,	// (0x0008200b) sc_swipe_pane_g1

0x3638,	// (0x00082018) sc_swipe_pane_g2_ParamLimits

0x3638,	// (0x00082018) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x0008e6b8) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x0008e6b8) sc_swipe_pane_g

0x3644,	// (0x00082024) sc_swipe_pane_t1_ParamLimits

0x3644,	// (0x00082024) sc_swipe_pane_t1

0x01c9,	// (0x0007eba9) main_cmail_launcher_pane

0xc7e9,	// (0x0008b1c9) aid_size_cell_cmail_l_ParamLimits

0xc7e9,	// (0x0008b1c9) aid_size_cell_cmail_l

0xc7f9,	// (0x0008b1d9) grid_cmail_l_pane_ParamLimits

0xc7f9,	// (0x0008b1d9) grid_cmail_l_pane

0xc809,	// (0x0008b1e9) cell_cmail_l_pane_ParamLimits

0xc809,	// (0x0008b1e9) cell_cmail_l_pane

0xc81d,	// (0x0008b1fd) cell_cmail_l_pane_g1_ParamLimits

0xc81d,	// (0x0008b1fd) cell_cmail_l_pane_g1

0xc829,	// (0x0008b209) cell_cmail_l_pane_t1_ParamLimits

0xc829,	// (0x0008b209) cell_cmail_l_pane_t1

0x3659,	// (0x00082039) cell_cmail_l_pane_t2_ParamLimits

0x3659,	// (0x00082039) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x0008e6bd) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x0008e6bd) cell_cmail_l_pane_t

0xf0cd,	// (0x0008daad) grid_highlight_pane_cp018_ParamLimits

0xf0cd,	// (0x0008daad) grid_highlight_pane_cp018

0x5958,	// (0x00084338) main2_pane_ParamLimits

0x5958,	// (0x00084338) main2_pane

0xe250,	// (0x0008cc30) popup_sp_fs_action_menu_bg_pane_g1

0xe258,	// (0x0008cc38) popup_sp_fs_action_menu_bg_pane_g2

0xe260,	// (0x0008cc40) popup_sp_fs_action_menu_bg_pane_g3

0xe268,	// (0x0008cc48) popup_sp_fs_action_menu_bg_pane_g4

0xe270,	// (0x0008cc50) popup_sp_fs_action_menu_bg_pane_g5

0xe278,	// (0x0008cc58) popup_sp_fs_action_menu_bg_pane_g6

0xe280,	// (0x0008cc60) popup_sp_fs_action_menu_bg_pane_g7

0xe288,	// (0x0008cc68) popup_sp_fs_action_menu_bg_pane_g8

0xe290,	// (0x0008cc70) popup_sp_fs_action_menu_bg_pane_g9

0xe298,	// (0x0008cc78) popup_sp_fs_action_menu_bg_pane_g10

0xe298,	// (0x0008cc78) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0008db87) popup_sp_fs_action_menu_bg_pane_g

0x0339,	// (0x0007ed19) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x2_t3_g3_g1

0x0345,	// (0x0007ed25) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0345,	// (0x0007ed25) list_medium_line_x2_t3_g3_g2

0x0351,	// (0x0007ed31) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0351,	// (0x0007ed31) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0008dc37) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0008dc37) list_medium_line_x2_t3_g3_g

0x035d,	// (0x0007ed3d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x035d,	// (0x0007ed3d) list_medium_line_x2_t3_g3_t1

0x677e,	// (0x0008515e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x677e,	// (0x0008515e) list_medium_line_x2_t3_g3_t2

0x0372,	// (0x0007ed52) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0372,	// (0x0007ed52) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0008dc3e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0008dc3e) list_medium_line_x2_t3_g3_t

0x0339,	// (0x0007ed19) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x2_t3_g2_g1

0x0351,	// (0x0007ed31) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0351,	// (0x0007ed31) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0008dc45) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0008dc45) list_medium_line_x2_t3_g2_g

0x0387,	// (0x0007ed67) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0387,	// (0x0007ed67) list_medium_line_x2_t3_g2_t1

0x039d,	// (0x0007ed7d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x039d,	// (0x0007ed7d) list_medium_line_x2_t3_g2_t2

0x03af,	// (0x0007ed8f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x03af,	// (0x0007ed8f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0008dc4a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0008dc4a) list_medium_line_x2_t3_g2_t

0x0339,	// (0x0007ed19) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x2_t4_g4_g1

0x03cc,	// (0x0007edac) list_medium_line_x2_t4_g4_g2_ParamLimits

0x03cc,	// (0x0007edac) list_medium_line_x2_t4_g4_g2

0x0345,	// (0x0007ed25) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0345,	// (0x0007ed25) list_medium_line_x2_t4_g4_g3

0x03d8,	// (0x0007edb8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x03d8,	// (0x0007edb8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0008dc51) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0008dc51) list_medium_line_x2_t4_g4_g

0x6790,	// (0x00085170) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6790,	// (0x00085170) list_medium_line_x2_t4_g4_t1

0x67aa,	// (0x0008518a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x67aa,	// (0x0008518a) list_medium_line_x2_t4_g4_t2

0x67c0,	// (0x000851a0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x67c0,	// (0x000851a0) list_medium_line_x2_t4_g4_t3

0x03e4,	// (0x0007edc4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x03e4,	// (0x0007edc4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0008dc5a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0008dc5a) list_medium_line_x2_t4_g4_t

0x0339,	// (0x0007ed19) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x2_t2_g4_g1

0x03cc,	// (0x0007edac) list_medium_line_x2_t2_g4_g2_ParamLimits

0x03cc,	// (0x0007edac) list_medium_line_x2_t2_g4_g2

0x0345,	// (0x0007ed25) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0345,	// (0x0007ed25) list_medium_line_x2_t2_g4_g3

0x0351,	// (0x0007ed31) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0351,	// (0x0007ed31) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0008dcc1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0008dcc1) list_medium_line_x2_t2_g4_g

0x03f6,	// (0x0007edd6) list_medium_line_x2_t2_g4_t1_ParamLimits

0x03f6,	// (0x0007edd6) list_medium_line_x2_t2_g4_t1

0x0372,	// (0x0007ed52) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0372,	// (0x0007ed52) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0008dcca) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0008dcca) list_medium_line_x2_t2_g4_t

0x0339,	// (0x0007ed19) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x2_t2_g3_g1

0x0345,	// (0x0007ed25) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0345,	// (0x0007ed25) list_medium_line_x2_t2_g3_g2

0x0351,	// (0x0007ed31) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0351,	// (0x0007ed31) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0008dc37) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0008dc37) list_medium_line_x2_t2_g3_g

0x040b,	// (0x0007edeb) list_medium_line_x2_t2_g3_t1_ParamLimits

0x040b,	// (0x0007edeb) list_medium_line_x2_t2_g3_t1

0x0372,	// (0x0007ed52) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0372,	// (0x0007ed52) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0008dccf) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0008dccf) list_medium_line_x2_t2_g3_t

0x77ab,	// (0x0008618b) main_sp_fs_list_pane_ParamLimits

0x77ab,	// (0x0008618b) main_sp_fs_list_pane

0x77b7,	// (0x00086197) sp_fs_scroll_pane_ParamLimits

0x77b7,	// (0x00086197) sp_fs_scroll_pane

0x77c3,	// (0x000861a3) list_medium_line_x2_t3_t1

0x77d3,	// (0x000861b3) list_medium_line_x2_t3_t2

0x044e,	// (0x0007ee2e) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0008dd1a) list_medium_line_x2_t3_t

0x77e1,	// (0x000861c1) list_medium_line_x3_t4_t1

0x77f1,	// (0x000861d1) list_medium_line_x3_t4_t2

0x045c,	// (0x0007ee3c) list_medium_line_x3_t4_t3

0x044e,	// (0x0007ee2e) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0008dd21) list_medium_line_x3_t4_t

0x77ff,	// (0x000861df) list_medium_line_x4_t5_t1

0x780f,	// (0x000861ef) list_medium_line_x4_t5_t2

0x045c,	// (0x0007ee3c) list_medium_line_x4_t5_t3

0x046a,	// (0x0007ee4a) list_medium_line_x4_t5_t4

0x044e,	// (0x0007ee2e) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0008dd2a) list_medium_line_x4_t5_t

0x0339,	// (0x0007ed19) list_medium_line_t4_g4_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_t4_g4_g1

0x03d8,	// (0x0007edb8) list_medium_line_t4_g4_g2_ParamLimits

0x03d8,	// (0x0007edb8) list_medium_line_t4_g4_g2

0x0478,	// (0x0007ee58) list_medium_line_t4_g4_g3_ParamLimits

0x0478,	// (0x0007ee58) list_medium_line_t4_g4_g3

0x0351,	// (0x0007ed31) list_medium_line_t4_g4_g4_ParamLimits

0x0351,	// (0x0007ed31) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0008dd35) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0008dd35) list_medium_line_t4_g4_g

0x0484,	// (0x0007ee64) list_medium_line_t4_g4_t1_ParamLimits

0x0484,	// (0x0007ee64) list_medium_line_t4_g4_t1

0x0499,	// (0x0007ee79) list_medium_line_t4_g4_t2_ParamLimits

0x0499,	// (0x0007ee79) list_medium_line_t4_g4_t2

0x04ae,	// (0x0007ee8e) list_medium_line_t4_g4_t3_ParamLimits

0x04ae,	// (0x0007ee8e) list_medium_line_t4_g4_t3

0x0372,	// (0x0007ed52) list_medium_line_t4_g4_t4_ParamLimits

0x0372,	// (0x0007ed52) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0008dd3e) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0008dd3e) list_medium_line_t4_g4_t

0x792e,	// (0x0008630e) chi_dic_find_pane_g1

0x8963,	// (0x00087343) main_tport_pane

0x2703,	// (0x000810e3) list_medium_line_plain_t1

0x2719,	// (0x000810f9) list_medium_line_t2_g2_g1_ParamLimits

0x2719,	// (0x000810f9) list_medium_line_t2_g2_g1

0x2725,	// (0x00081105) list_medium_line_t2_g2_g2_ParamLimits

0x2725,	// (0x00081105) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0008e3fa) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0008e3fa) list_medium_line_t2_g2_g

0xb3ab,	// (0x00089d8b) list_medium_line_t2_g2_t1_ParamLimits

0xb3ab,	// (0x00089d8b) list_medium_line_t2_g2_t1

0xb3c5,	// (0x00089da5) list_medium_line_t2_g2_t2_ParamLimits

0xb3c5,	// (0x00089da5) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0008e3ff) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0008e3ff) list_medium_line_t2_g2_t

0x2a4b,	// (0x0008142b) aid_sp_fs_list_icon_a_sm

0x48ee,	// (0x000832ce) aid_sp_fs_list_icon_d

0x2a53,	// (0x00081433) aid_sp_fs_text_primary

0x2a5c,	// (0x0008143c) aid_sp_fs_text_secondary

0x2a65,	// (0x00081445) list_medium_line

0x2a65,	// (0x00081445) list_medium_line_g2

0x2a65,	// (0x00081445) list_medium_line_g3

0x2a65,	// (0x00081445) list_medium_line_plain

0x2a65,	// (0x00081445) list_medium_line_plain_t2

0x2a65,	// (0x00081445) list_medium_line_plain_t3

0x2a65,	// (0x00081445) list_medium_line_right_icon

0x2a65,	// (0x00081445) list_medium_line_right_iconx2

0x2a65,	// (0x00081445) list_medium_line_t2

0x2a65,	// (0x00081445) list_medium_line_t2_g2

0x2a65,	// (0x00081445) list_medium_line_t2_g3

0x2a65,	// (0x00081445) list_medium_line_t2_right_icon

0x2a65,	// (0x00081445) list_medium_line_t2_right_iconx2

0x2a65,	// (0x00081445) list_medium_line_t3

0x2a65,	// (0x00081445) list_medium_line_t3_g2

0x2a65,	// (0x00081445) list_medium_line_t3_g3

0x2a65,	// (0x00081445) list_medium_line_t3_right_iconx2

0x2a6e,	// (0x0008144e) list_medium_line_t4_g4

0x2a77,	// (0x00081457) list_medium_line_x2

0x2a77,	// (0x00081457) list_medium_line_x2_t2_g2

0x2a77,	// (0x00081457) list_medium_line_x2_t2_g3

0x2a77,	// (0x00081457) list_medium_line_x2_t2_g4

0x2a77,	// (0x00081457) list_medium_line_x2_t3

0x2a77,	// (0x00081457) list_medium_line_x2_t3_g2

0x2a77,	// (0x00081457) list_medium_line_x2_t3_g3

0x2a77,	// (0x00081457) list_medium_line_x2_t3_g4

0x2a77,	// (0x00081457) list_medium_line_x2_t4_g2

0x2a77,	// (0x00081457) list_medium_line_x2_t4_g4

0x2a80,	// (0x00081460) list_medium_line_x3

0x2a80,	// (0x00081460) list_medium_line_x3_t4

0x2a80,	// (0x00081460) list_medium_line_x3_t4_g4

0x2a6e,	// (0x0008144e) list_medium_line_x4_t4

0x2a6e,	// (0x0008144e) list_medium_line_x4_t4_g7

0x2a6e,	// (0x0008144e) list_medium_line_x4_t5

0x2a89,	// (0x00081469) list_single_fs_dyc_pane_ParamLimits

0x2a89,	// (0x00081469) list_single_fs_dyc_pane

0x0339,	// (0x0007ed19) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x4_t4_g7_g1

0x2f93,	// (0x00081973) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2f93,	// (0x00081973) list_medium_line_x4_t4_g7_g2

0x2f9f,	// (0x0008197f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2f9f,	// (0x0008197f) list_medium_line_x4_t4_g7_g3

0x2fae,	// (0x0008198e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2fae,	// (0x0008198e) list_medium_line_x4_t4_g7_g4

0x2fba,	// (0x0008199a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2fba,	// (0x0008199a) list_medium_line_x4_t4_g7_g5

0x2fc9,	// (0x000819a9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2fc9,	// (0x000819a9) list_medium_line_x4_t4_g7_g6

0x2fd8,	// (0x000819b8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2fd8,	// (0x000819b8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x0008e5ca) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x0008e5ca) list_medium_line_x4_t4_g7_g

0x2fe4,	// (0x000819c4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2fe4,	// (0x000819c4) list_medium_line_x4_t4_g7_t1

0x2ff9,	// (0x000819d9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2ff9,	// (0x000819d9) list_medium_line_x4_t4_g7_t2

0x300e,	// (0x000819ee) list_medium_line_x4_t4_g7_t3_ParamLimits

0x300e,	// (0x000819ee) list_medium_line_x4_t4_g7_t3

0x3023,	// (0x00081a03) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3023,	// (0x00081a03) list_medium_line_x4_t4_g7_t4

0x3035,	// (0x00081a15) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3035,	// (0x00081a15) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x0008e5d9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x0008e5d9) list_medium_line_x4_t4_g7_t

0x3047,	// (0x00081a27) list_single_dyc_row_pane_ParamLimits

0x3047,	// (0x00081a27) list_single_dyc_row_pane

0xc799,	// (0x0008b179) call5_gesture_pane_ParamLimits

0xc799,	// (0x0008b179) call5_gesture_pane

0xc7cd,	// (0x0008b1ad) call5_windows_pane_ParamLimits

0xc7cd,	// (0x0008b1ad) call5_windows_pane

0xc83f,	// (0x0008b21f) call5_swipe_1_pane_cp_ParamLimits

0xc83f,	// (0x0008b21f) call5_swipe_1_pane_cp

0xc84b,	// (0x0008b22b) call5_swipe_2_pane_cp_ParamLimits

0xc84b,	// (0x0008b22b) call5_swipe_2_pane_cp

0xec98,	// (0x0008d678) call5_image_pane_cp

0xc857,	// (0x0008b237) popup_call5_audio_first_window_cp_ParamLimits

0xc857,	// (0x0008b237) popup_call5_audio_first_window_cp

0x362b,	// (0x0008200b) call5_swipe_1_pane_g1_cp_ParamLimits

0x362b,	// (0x0008200b) call5_swipe_1_pane_g1_cp

0x366b,	// (0x0008204b) call5_swipe_1_pane_g2_cp

0x3644,	// (0x00082024) call5_swipe_1_pane_t1_cp_ParamLimits

0x3644,	// (0x00082024) call5_swipe_1_pane_t1_cp

0x362b,	// (0x0008200b) call5_swipe_2_pane_g1_cp_ParamLimits

0x362b,	// (0x0008200b) call5_swipe_2_pane_g1_cp

0x3673,	// (0x00082053) call5_swipe_2_pane_g2_cp

0x367b,	// (0x0008205b) call5_swipe_2_pane_t1_cp_ParamLimits

0x367b,	// (0x0008205b) call5_swipe_2_pane_t1_cp

0xf0cd,	// (0x0008daad) main_sp_fs_email_pane

0x3690,	// (0x00082070) main_sp_fs_listscroll_pane_te

0x3699,	// (0x00082079) popup_sp_fs_action_menu_pane_ParamLimits

0x3699,	// (0x00082079) popup_sp_fs_action_menu_pane

0x19aa,	// (0x0008038a) bg_sp_fs_ctrlbar_pane_g1

0x36dd,	// (0x000820bd) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x36e6,	// (0x000820c6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x36ef,	// (0x000820cf) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x19aa,	// (0x0008038a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x0008e6c2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x178f,	// (0x0008016f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x178f,	// (0x0008016f) bg_sp_fs_ctrlbar_ddmenu_pane

0x36f8,	// (0x000820d8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x36f8,	// (0x000820d8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3704,	// (0x000820e4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3704,	// (0x000820e4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x0008e6cb) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x0008e6cb) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3710,	// (0x000820f0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3710,	// (0x000820f0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x372a,	// (0x0008210a) list_medium_line_t2_right_icon_g1

0xc865,	// (0x0008b245) list_medium_line_t2_right_icon_t1

0xc875,	// (0x0008b255) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x0008e6d0) list_medium_line_t2_right_icon_t

0x1541,	// (0x0007ff21) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1541,	// (0x0007ff21) bg_sp_fs_ctrlbar_pane

0xc8da,	// (0x0008b2ba) main_sp_fs_ctrlbar_button_pane_cp01

0xc8e2,	// (0x0008b2c2) main_sp_fs_ctrlbar_ddmenu_pane

0x376a,	// (0x0008214a) main_sp_fs_ctrlbar_pane_g1

0x3776,	// (0x00082156) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0008e6d5) main_sp_fs_ctrlbar_pane_g

0x3782,	// (0x00082162) main_sp_fs_ctrlbar_pane_t1

0xc8ec,	// (0x0008b2cc) main_sp_fs_ctrlbar_pane

0xc906,	// (0x0008b2e6) main_sp_fs_listscroll_pane_te_cp01

0xc917,	// (0x0008b2f7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc917,	// (0x0008b2f7) popup_sp_fs_action_menu_pane_cp01

0xf0cd,	// (0x0008daad) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0cd,	// (0x0008daad) bg_sp_fs_highlight_list_pane_cp01

0x37a7,	// (0x00082187) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x37a7,	// (0x00082187) sp_fs_action_menu_list_gene_pane_g1

0x37b6,	// (0x00082196) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x37b6,	// (0x00082196) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0008e6df) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0008e6df) sp_fs_action_menu_list_gene_pane_g

0x37c3,	// (0x000821a3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x37c3,	// (0x000821a3) sp_fs_action_menu_list_gene_pane_t1

0x37db,	// (0x000821bb) sp_fs_action_menu_list_gene_pane_ParamLimits

0x37db,	// (0x000821bb) sp_fs_action_menu_list_gene_pane

0x37fc,	// (0x000821dc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x37fc,	// (0x000821dc) popup_sp_fs_action_menu_bg_pane

0x380a,	// (0x000821ea) sp_fs_action_menu_list_pane_ParamLimits

0x380a,	// (0x000821ea) sp_fs_action_menu_list_pane

0x382c,	// (0x0008220c) sp_fs_scroll_pane_cp01_ParamLimits

0x382c,	// (0x0008220c) sp_fs_scroll_pane_cp01

0xc931,	// (0x0008b311) list_medium_line_plain_t2_t1

0xc941,	// (0x0008b321) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0008e6e4) list_medium_line_plain_t2_t

0xc94f,	// (0x0008b32f) list_medium_line_plain_t3_t1

0xc95f,	// (0x0008b33f) list_medium_line_plain_t3_t2

0xc96d,	// (0x0008b34d) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0008e6e9) list_medium_line_plain_t3_t

0x0339,	// (0x0007ed19) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x2_t2_g2_g1

0x0351,	// (0x0007ed31) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0351,	// (0x0007ed31) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0008dc45) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0008dc45) list_medium_line_x2_t2_g2_g

0x0484,	// (0x0007ee64) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0484,	// (0x0007ee64) list_medium_line_x2_t2_g2_t1

0x0372,	// (0x0007ed52) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0372,	// (0x0007ed52) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0008e6f0) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0008e6f0) list_medium_line_x2_t2_g2_t

0x0339,	// (0x0007ed19) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x2_t4_g2_g1

0x3852,	// (0x00082232) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3852,	// (0x00082232) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0008e6f5) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0008e6f5) list_medium_line_x2_t4_g2_g

0xc97b,	// (0x0008b35b) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc97b,	// (0x0008b35b) list_medium_line_x2_t4_g2_t1

0xc992,	// (0x0008b372) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc992,	// (0x0008b372) list_medium_line_x2_t4_g2_t2

0xc9a7,	// (0x0008b387) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc9a7,	// (0x0008b387) list_medium_line_x2_t4_g2_t3

0x0372,	// (0x0007ed52) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0372,	// (0x0007ed52) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0008e6fa) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0008e6fa) list_medium_line_x2_t4_g2_t

0x3864,	// (0x00082244) list_medium_line_t3_right_iconx2_g1

0x372a,	// (0x0008210a) list_medium_line_t3_right_iconx2_g2

0xc9b9,	// (0x0008b399) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0008e703) list_medium_line_t3_right_iconx2_g

0xc9c1,	// (0x0008b3a1) list_medium_line_t3_right_iconx2_t1

0xc9d1,	// (0x0008b3b1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0008e70a) list_medium_line_t3_right_iconx2_t

0x0339,	// (0x0007ed19) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x3_t4_g4_g1

0x0345,	// (0x0007ed25) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0345,	// (0x0007ed25) list_medium_line_x3_t4_g4_g2

0x03d8,	// (0x0007edb8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x03d8,	// (0x0007edb8) list_medium_line_x3_t4_g4_g3

0x386c,	// (0x0008224c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x386c,	// (0x0008224c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0008e70f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0008e70f) list_medium_line_x3_t4_g4_g

0xc9df,	// (0x0008b3bf) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc9df,	// (0x0008b3bf) list_medium_line_x3_t4_g4_t1

0xc9f6,	// (0x0008b3d6) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc9f6,	// (0x0008b3d6) list_medium_line_x3_t4_g4_t2

0x0499,	// (0x0007ee79) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0499,	// (0x0007ee79) list_medium_line_x3_t4_g4_t3

0x3878,	// (0x00082258) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3878,	// (0x00082258) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0008e718) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0008e718) list_medium_line_x3_t4_g4_t

0xca0b,	// (0x0008b3eb) list_single_dyc_row_text_pane_t1_ParamLimits

0xca0b,	// (0x0008b3eb) list_single_dyc_row_text_pane_t1

0xca42,	// (0x0008b422) list_single_dyc_row_text_pane_t2_ParamLimits

0xca42,	// (0x0008b422) list_single_dyc_row_text_pane_t2

0x3895,	// (0x00082275) list_single_dyc_row_text_pane_t3_ParamLimits

0x3895,	// (0x00082275) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0008e721) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0008e721) list_single_dyc_row_text_pane_t

0x38a7,	// (0x00082287) list_single_dyc_row_pane_g1_ParamLimits

0x38a7,	// (0x00082287) list_single_dyc_row_pane_g1

0x38b3,	// (0x00082293) list_single_dyc_row_pane_g2_ParamLimits

0x38b3,	// (0x00082293) list_single_dyc_row_pane_g2

0x38bf,	// (0x0008229f) list_single_dyc_row_pane_g3_ParamLimits

0x38bf,	// (0x0008229f) list_single_dyc_row_pane_g3

0x38cb,	// (0x000822ab) list_single_dyc_row_pane_g4_ParamLimits

0x38cb,	// (0x000822ab) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0008e728) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0008e728) list_single_dyc_row_pane_g

0x38d7,	// (0x000822b7) list_single_dyc_row_text_pane_ParamLimits

0x38d7,	// (0x000822b7) list_single_dyc_row_text_pane

0x01c9,	// (0x0007eba9) bg_sp_fs_scroll_pane

0x38f6,	// (0x000822d6) thumb_sp_fs_scroll_pane

0x2719,	// (0x000810f9) list_medium_line_g1_ParamLimits

0x2719,	// (0x000810f9) list_medium_line_g1

0x38ff,	// (0x000822df) list_medium_line_t1_ParamLimits

0x38ff,	// (0x000822df) list_medium_line_t1

0x0339,	// (0x0007ed19) list_medium_line_x2_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x2_g1

0x0345,	// (0x0007ed25) list_medium_line_x2_g2_ParamLimits

0x0345,	// (0x0007ed25) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0008e731) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0008e731) list_medium_line_x2_g

0x3914,	// (0x000822f4) list_medium_line_x2_t1_ParamLimits

0x3914,	// (0x000822f4) list_medium_line_x2_t1

0x0339,	// (0x0007ed19) list_medium_line_x3_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x3_g1

0x0345,	// (0x0007ed25) list_medium_line_x3_g2_ParamLimits

0x0345,	// (0x0007ed25) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0008e731) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0008e731) list_medium_line_x3_g

0x3914,	// (0x000822f4) list_medium_line_x3_t1_ParamLimits

0x3914,	// (0x000822f4) list_medium_line_x3_t1

0x392a,	// (0x0008230a) thumb_sp_fs_scroll_pane_g1

0x3933,	// (0x00082313) thumb_sp_fs_scroll_pane_g2

0x393c,	// (0x0008231c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008e736) thumb_sp_fs_scroll_pane_g

0x392a,	// (0x0008230a) bg_sp_fs_scroll_pane_g1

0x3933,	// (0x00082313) bg_sp_fs_scroll_pane_g2

0x393c,	// (0x0008231c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008e736) bg_sp_fs_scroll_pane_g

0x0339,	// (0x0007ed19) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0339,	// (0x0007ed19) list_medium_line_x2_t3_g4_g1

0x03cc,	// (0x0007edac) list_medium_line_x2_t3_g4_g2_ParamLimits

0x03cc,	// (0x0007edac) list_medium_line_x2_t3_g4_g2

0x0345,	// (0x0007ed25) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0345,	// (0x0007ed25) list_medium_line_x2_t3_g4_g3

0x0351,	// (0x0007ed31) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0351,	// (0x0007ed31) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0008dcc1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0008dcc1) list_medium_line_x2_t3_g4_g

0xca9c,	// (0x0008b47c) list_medium_line_x2_t3_g4_t1_ParamLimits

0xca9c,	// (0x0008b47c) list_medium_line_x2_t3_g4_t1

0xcab2,	// (0x0008b492) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcab2,	// (0x0008b492) list_medium_line_x2_t3_g4_t2

0x0372,	// (0x0007ed52) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0372,	// (0x0007ed52) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0008e73d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0008e73d) list_medium_line_x2_t3_g4_t

0x2719,	// (0x000810f9) list_medium_line_g2_g1_ParamLimits

0x2719,	// (0x000810f9) list_medium_line_g2_g1

0x2725,	// (0x00081105) list_medium_line_g2_g2_ParamLimits

0x2725,	// (0x00081105) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0008e3fa) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0008e3fa) list_medium_line_g2_g

0x3945,	// (0x00082325) list_medium_line_g2_t1_ParamLimits

0x3945,	// (0x00082325) list_medium_line_g2_t1

0x2719,	// (0x000810f9) list_medium_line_t3_g2_g1_ParamLimits

0x2719,	// (0x000810f9) list_medium_line_t3_g2_g1

0x2725,	// (0x00081105) list_medium_line_t3_g2_g2_ParamLimits

0x2725,	// (0x00081105) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0008e3fa) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0008e3fa) list_medium_line_t3_g2_g

0xcacc,	// (0x0008b4ac) list_medium_line_t3_g2_t1_ParamLimits

0xcacc,	// (0x0008b4ac) list_medium_line_t3_g2_t1

0xcae3,	// (0x0008b4c3) list_medium_line_t3_g2_t2_ParamLimits

0xcae3,	// (0x0008b4c3) list_medium_line_t3_g2_t2

0xcaf8,	// (0x0008b4d8) list_medium_line_t3_g2_t3_ParamLimits

0xcaf8,	// (0x0008b4d8) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0008e744) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0008e744) list_medium_line_t3_g2_t

0x372a,	// (0x0008210a) list_medium_line_right_icon_g1

0x395a,	// (0x0008233a) list_medium_line_right_icon_t1

0x2719,	// (0x000810f9) list_medium_line_t2_g1_ParamLimits

0x2719,	// (0x000810f9) list_medium_line_t2_g1

0xcb0d,	// (0x0008b4ed) list_medium_line_t2_t1_ParamLimits

0xcb0d,	// (0x0008b4ed) list_medium_line_t2_t1

0xcb27,	// (0x0008b507) list_medium_line_t2_t2_ParamLimits

0xcb27,	// (0x0008b507) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0008e74b) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0008e74b) list_medium_line_t2_t

0x2719,	// (0x000810f9) list_medium_line_t3_g1_ParamLimits

0x2719,	// (0x000810f9) list_medium_line_t3_g1

0xcb3c,	// (0x0008b51c) list_medium_line_t3_t1_ParamLimits

0xcb3c,	// (0x0008b51c) list_medium_line_t3_t1

0xcb53,	// (0x0008b533) list_medium_line_t3_t2_ParamLimits

0xcb53,	// (0x0008b533) list_medium_line_t3_t2

0xcb68,	// (0x0008b548) list_medium_line_t3_t3_ParamLimits

0xcb68,	// (0x0008b548) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0008e750) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0008e750) list_medium_line_t3_t

0x2719,	// (0x000810f9) list_medium_line_g3_g1_ParamLimits

0x2719,	// (0x000810f9) list_medium_line_g3_g1

0x3968,	// (0x00082348) list_medium_line_g3_g2_ParamLimits

0x3968,	// (0x00082348) list_medium_line_g3_g2

0x2725,	// (0x00081105) list_medium_line_g3_g3_ParamLimits

0x2725,	// (0x00081105) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0008e757) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0008e757) list_medium_line_g3_g

0x3974,	// (0x00082354) list_medium_line_g3_t1_ParamLimits

0x3974,	// (0x00082354) list_medium_line_g3_t1

0x2719,	// (0x000810f9) list_medium_line_t2_g3_g1_ParamLimits

0x2719,	// (0x000810f9) list_medium_line_t2_g3_g1

0x3968,	// (0x00082348) list_medium_line_t2_g3_g2_ParamLimits

0x3968,	// (0x00082348) list_medium_line_t2_g3_g2

0x2725,	// (0x00081105) list_medium_line_t2_g3_g3_ParamLimits

0x2725,	// (0x00081105) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0008e757) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0008e757) list_medium_line_t2_g3_g

0xcb7a,	// (0x0008b55a) list_medium_line_t2_g3_t1_ParamLimits

0xcb7a,	// (0x0008b55a) list_medium_line_t2_g3_t1

0xcb94,	// (0x0008b574) list_medium_line_t2_g3_t2_ParamLimits

0xcb94,	// (0x0008b574) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0008e75e) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0008e75e) list_medium_line_t2_g3_t

0x2719,	// (0x000810f9) list_medium_line_t3_g3_g1_ParamLimits

0x2719,	// (0x000810f9) list_medium_line_t3_g3_g1

0x3968,	// (0x00082348) list_medium_line_t3_g3_g2_ParamLimits

0x3968,	// (0x00082348) list_medium_line_t3_g3_g2

0x2725,	// (0x00081105) list_medium_line_t3_g3_g3_ParamLimits

0x2725,	// (0x00081105) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0008e757) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0008e757) list_medium_line_t3_g3_g

0xcba9,	// (0x0008b589) list_medium_line_t3_g3_t1_ParamLimits

0xcba9,	// (0x0008b589) list_medium_line_t3_g3_t1

0xcbbd,	// (0x0008b59d) list_medium_line_t3_g3_t2_ParamLimits

0xcbbd,	// (0x0008b59d) list_medium_line_t3_g3_t2

0xcbcf,	// (0x0008b5af) list_medium_line_t3_g3_t3_ParamLimits

0xcbcf,	// (0x0008b5af) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0008e763) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0008e763) list_medium_line_t3_g3_t

0x3864,	// (0x00082244) list_medium_line_right_iconx2_g1

0x372a,	// (0x0008210a) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008e76a) list_medium_line_right_iconx2_g

0x3989,	// (0x00082369) list_medium_line_right_iconx2_t1

0x3864,	// (0x00082244) list_medium_line_t2_right_iconx2_g1

0x372a,	// (0x0008210a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008e76a) list_medium_line_t2_right_iconx2_g

0xcbe1,	// (0x0008b5c1) list_medium_line_t2_right_iconx2_t1

0xcbf1,	// (0x0008b5d1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0008e76f) list_medium_line_t2_right_iconx2_t

0x3997,	// (0x00082377) list_medium_line_x4_t4_t1

0xcbff,	// (0x0008b5df) list_medium_line_x4_t4_t2

0xcc0f,	// (0x0008b5ef) list_medium_line_x4_t4_t3

0xcc1f,	// (0x0008b5ff) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0008e774) list_medium_line_x4_t4_t

0xcc58,	// (0x0008b638) tport_appsw_pane_ParamLimits

0xcc58,	// (0x0008b638) tport_appsw_pane

0xcc64,	// (0x0008b644) tport_contact_pane_ParamLimits

0xcc64,	// (0x0008b644) tport_contact_pane

0xcc74,	// (0x0008b654) tport_listscroll_pane_ParamLimits

0xcc74,	// (0x0008b654) tport_listscroll_pane

0xcc84,	// (0x0008b664) cell_tport_appsw_pane_ParamLimits

0xcc84,	// (0x0008b664) cell_tport_appsw_pane

0x1ca7,	// (0x00080687) tport_appsw_pane_g1_ParamLimits

0x1ca7,	// (0x00080687) tport_appsw_pane_g1

0x39a5,	// (0x00082385) tport_contact_pane_g1

0x3138,	// (0x00081b18) tport_contact_pane_t1

0x39ae,	// (0x0008238e) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0008e77d) tport_contact_pane_t

0x39bc,	// (0x0008239c) list_tport_pane

0x39c5,	// (0x000823a5) scroll_pane_cp_030

0x39d6,	// (0x000823b6) cell_tport_appsw_pane_g1

0x39e6,	// (0x000823c6) cell_tport_appsw_pane_t1

0x01c9,	// (0x0007eba9) grid_highlight_pane_cp019

0xccaf,	// (0x0008b68f) list_tport_double_graphic_pane_ParamLimits

0xccaf,	// (0x0008b68f) list_tport_double_graphic_pane

0xf0cd,	// (0x0008daad) list_highlight_pane_cp023_ParamLimits

0xf0cd,	// (0x0008daad) list_highlight_pane_cp023

0xccc1,	// (0x0008b6a1) list_tport_double_graphic_pane_g1_ParamLimits

0xccc1,	// (0x0008b6a1) list_tport_double_graphic_pane_g1

0xccce,	// (0x0008b6ae) list_tport_double_graphic_pane_t1_ParamLimits

0xccce,	// (0x0008b6ae) list_tport_double_graphic_pane_t1

0xcce3,	// (0x0008b6c3) list_tport_double_graphic_pane_t2_ParamLimits

0xcce3,	// (0x0008b6c3) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0008e789) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0008e789) list_tport_double_graphic_pane_t

0x01c9,	// (0x0007eba9) main_cale_note_pane

0xaba4,	// (0x00089584) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaba4,	// (0x00089584) cell_vitu2_function_top_wide_pane_cp01

0xc487,	// (0x0008ae67) wait_bar_pane_cp05_ParamLimits

0x01c9,	// (0x0007eba9) listscroll_cmail_pane

0x39fc,	// (0x000823dc) list_cmail_pane

0xccff,	// (0x0008b6df) list_cmail_body_pane

0xcd19,	// (0x0008b6f9) list_single_cmail_header_caption_pane

0xcd3e,	// (0x0008b71e) list_single_cmail_header_detail_pane_ParamLimits

0xcd3e,	// (0x0008b71e) list_single_cmail_header_detail_pane

0xcd6e,	// (0x0008b74e) list_single_cmail_header_caption_pane_t1

0xcd7c,	// (0x0008b75c) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcd7c,	// (0x0008b75c) list_single_cmail_header_detail_pane_g1

0x4904,	// (0x000832e4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4904,	// (0x000832e4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0008e78e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0008e78e) list_single_cmail_header_detail_pane_g

0x3a2a,	// (0x0008240a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3a2a,	// (0x0008240a) list_single_cmail_header_detail_pane_t1

0x3a64,	// (0x00082444) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3a64,	// (0x00082444) list_single_cmail_header_editor_pane_bg

0x32d9,	// (0x00081cb9) list_cmail_body_pane_g1

0x3a76,	// (0x00082456) list_cmail_body_pane_t1

0x24a0,	// (0x00080e80) list_single_cmail_header_editor_pane_bg_g1

0xe5ad,	// (0x0008cf8d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x24b0,	// (0x00080e90) list_single_cmail_header_editor_pane_bg_g1_copy2

0x24a8,	// (0x00080e88) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2711,	// (0x000810f1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x24d0,	// (0x00080eb0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x24c0,	// (0x00080ea0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x24c8,	// (0x00080ea8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe58d,	// (0x0008cf6d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcdb6,	// (0x0008b796) calenote_gesture_pane_ParamLimits

0xcdb6,	// (0x0008b796) calenote_gesture_pane

0xcdd0,	// (0x0008b7b0) calenote_window_pane_ParamLimits

0xcdd0,	// (0x0008b7b0) calenote_window_pane

0x3a84,	// (0x00082464) popup_note_window_cp01

0xcde8,	// (0x0008b7c8) calenote_swipe_1_pane_ParamLimits

0xcde8,	// (0x0008b7c8) calenote_swipe_1_pane

0xc84b,	// (0x0008b22b) calenote_swipe_2_pane_ParamLimits

0xc84b,	// (0x0008b22b) calenote_swipe_2_pane

0x362b,	// (0x0008200b) calenote_swipe_1_pane_g1_ParamLimits

0x362b,	// (0x0008200b) calenote_swipe_1_pane_g1

0x3638,	// (0x00082018) calenote_swipe_1_pane_g2_ParamLimits

0x3638,	// (0x00082018) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x0008e6b8) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x0008e6b8) calenote_swipe_1_pane_g

0x3a96,	// (0x00082476) calenote_swipe_1_pane_t1_ParamLimits

0x3a96,	// (0x00082476) calenote_swipe_1_pane_t1

0x362b,	// (0x0008200b) calenote_swipe_2_pane_g1_ParamLimits

0x362b,	// (0x0008200b) calenote_swipe_2_pane_g1

0x3ab5,	// (0x00082495) calenote_swipe_2_pane_g2_ParamLimits

0x3ab5,	// (0x00082495) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0008e79a) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0008e79a) calenote_swipe_2_pane_g

0x3ac1,	// (0x000824a1) calenote_swipe_2_pane_t1_ParamLimits

0x3ac1,	// (0x000824a1) calenote_swipe_2_pane_t1

0x01c9,	// (0x0007eba9) main_mup_navstr_pane

0x9923,	// (0x00088303) main_mup3_pane_t7_ParamLimits

0x9923,	// (0x00088303) main_mup3_pane_t7

0xa2fd,	// (0x00088cdd) main_mp4_pane_g6_ParamLimits

0xa2fd,	// (0x00088cdd) main_mp4_pane_g6

0xa67d,	// (0x0008905d) main_image3_pane_t4_ParamLimits

0xa67d,	// (0x0008905d) main_image3_pane_t4

0xcdfb,	// (0x0008b7db) popup_navstr_preview_pane_ParamLimits

0xcdfb,	// (0x0008b7db) popup_navstr_preview_pane

0xce07,	// (0x0008b7e7) scroll_navstr_pane_ParamLimits

0xce07,	// (0x0008b7e7) scroll_navstr_pane

0x01c9,	// (0x0007eba9) bg_popup_preview_window_pane_cp04

0x3ae8,	// (0x000824c8) popup_navstr_preview_pane_t1

0xce13,	// (0x0008b7f3) scroll_navstr_pane_g1_ParamLimits

0xce13,	// (0x0008b7f3) scroll_navstr_pane_g1

0xce20,	// (0x0008b800) scroll_navstr_pane_t1_ParamLimits

0xce20,	// (0x0008b800) scroll_navstr_pane_t1

0x3a8d,	// (0x0008246d) bg_button_pane_cp014

0x3a8d,	// (0x0008246d) bg_button_pane_cp030

0xc73f,	// (0x0008b11f) list_double_fisheye_pane_g4_ParamLimits

0xc73f,	// (0x0008b11f) list_double_fisheye_pane_g4

0xc74b,	// (0x0008b12b) list_double_fisheye_pane_g5_ParamLimits

0xc74b,	// (0x0008b12b) list_double_fisheye_pane_g5

0x3a04,	// (0x000823e4) sp_fs_scroll_pane_cp03

0x376a,	// (0x0008214a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3776,	// (0x00082156) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0008e6d5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3782,	// (0x00082162) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xccf5,	// (0x0008b6d5) sp_fs_scroll_pane_cp02

0xe2bb,	// (0x0008cc9b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe2bb,	// (0x0008cc9b) popup_sp_fs_calendar_preview_list_single_pane

0x01c9,	// (0x0007eba9) main_cam6_pano_pane

0xf0cd,	// (0x0008daad) main_mup3_pane_ParamLimits

0x01c9,	// (0x0007eba9) main_phacti_pane

0xc35c,	// (0x0008ad3c) bg_button_pane_cp11

0xc374,	// (0x0008ad54) main_mobtv_info_pane_g2_ParamLimits

0xc374,	// (0x0008ad54) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0008e635) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0008e635) main_mobtv_info_pane_g

0xc526,	// (0x0008af06) sc_clock_pane_t5_ParamLimits

0xc526,	// (0x0008af06) sc_clock_pane_t5

0xc5cd,	// (0x0008afad) main_radioblah_pane_g1_ParamLimits

0x3577,	// (0x00081f57) main_radioblah_pane_t3_ParamLimits

0x3577,	// (0x00081f57) main_radioblah_pane_t3

0x358f,	// (0x00081f6f) main_radioblah_pane_t4_ParamLimits

0x358f,	// (0x00081f6f) main_radioblah_pane_t4

0xc5eb,	// (0x0008afcb) main_radioblah_text_pane_ParamLimits

0xc5eb,	// (0x0008afcb) main_radioblah_text_pane

0xc5f8,	// (0x0008afd8) main_radioblah_info_pane_g1_ParamLimits

0xc68d,	// (0x0008b06d) main_radioblah_info_pane_t4_ParamLimits

0xc68d,	// (0x0008b06d) main_radioblah_info_pane_t4

0xf0cd,	// (0x0008daad) main_sp_fs_calendar_pane

0xce32,	// (0x0008b812) main_phacti_pane_g1

0xce3a,	// (0x0008b81a) phacti_note_pane_ParamLimits

0xce3a,	// (0x0008b81a) phacti_note_pane

0x3aff,	// (0x000824df) phacti_term_pane_ParamLimits

0x3aff,	// (0x000824df) phacti_term_pane

0x3b14,	// (0x000824f4) phacti_note_pane_t1_ParamLimits

0x3b14,	// (0x000824f4) phacti_note_pane_t1

0x3b2b,	// (0x0008250b) phacti_term_pane_g1

0x3b33,	// (0x00082513) phacti_term_pane_t1_ParamLimits

0x3b33,	// (0x00082513) phacti_term_pane_t1

0x3b5d,	// (0x0008253d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3ae,	// (0x0008cd8e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0008e7a4) popup_sp_fs_calendar_preview_list_single_pane_g

0x3b65,	// (0x00082545) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3b65,	// (0x00082545) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3b7a,	// (0x0008255a) aid_popup_sp_fs_bg_corner_pane

0x19aa,	// (0x0008038a) popup_sp_fs_calendar_preview_bg_pane_g1

0x01c9,	// (0x0007eba9) popup_sp_fs_calendar_preview_bg_pane

0x3b82,	// (0x00082562) popup_sp_fs_calendar_preview_list_pane

0xf0cd,	// (0x0008daad) bg_main_sp_fs_cale_pane_ParamLimits

0xf0cd,	// (0x0008daad) bg_main_sp_fs_cale_pane

0x3b8a,	// (0x0008256a) listscroll_cale_mrui_pane_ParamLimits

0x3b8a,	// (0x0008256a) listscroll_cale_mrui_pane

0x3b9e,	// (0x0008257e) listscroll_sp_fs_schedule_track_pane

0x3ba7,	// (0x00082587) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3ba7,	// (0x00082587) main_sp_fs_ctrlbar_pane_cp01

0x3bb8,	// (0x00082598) main_sp_fs_ribbon_pane

0x3bc0,	// (0x000825a0) popup_sp_fs_cale_preview_window

0xce7d,	// (0x0008b85d) list_single_sp_fs_schedule_track_pane_ParamLimits

0xce7d,	// (0x0008b85d) list_single_sp_fs_schedule_track_pane

0x23f5,	// (0x00080dd5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x23f5,	// (0x00080dd5) bg_sp_fs_highlight_list_pane_cp03

0xce9c,	// (0x0008b87c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xce9c,	// (0x0008b87c) list_single_sp_fs_schedule_track_pane_g1

0xcea8,	// (0x0008b888) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcea8,	// (0x0008b888) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0008e7a9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0008e7a9) list_single_sp_fs_schedule_track_pane_g

0xceb4,	// (0x0008b894) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xceb4,	// (0x0008b894) list_single_sp_fs_schedule_track_pane_t1

0xcecc,	// (0x0008b8ac) sp_fs_schedule_track_pane_ParamLimits

0xcecc,	// (0x0008b8ac) sp_fs_schedule_track_pane

0x3bd2,	// (0x000825b2) sp_fs_schedule_track_pane_g1

0x3bda,	// (0x000825ba) sp_fs_schedule_track_pane_g2

0x3be2,	// (0x000825c2) sp_fs_schedule_track_pane_g3

0x3bea,	// (0x000825ca) sp_fs_schedule_track_pane_g4

0x3bf2,	// (0x000825d2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0008e7ae) sp_fs_schedule_track_pane_g

0x24a0,	// (0x00080e80) bg_sp_fs_schedule_viewer_highlight_g1

0xe5ad,	// (0x0008cf8d) bg_sp_fs_schedule_viewer_highlight_g2

0x24a8,	// (0x00080e88) bg_sp_fs_schedule_viewer_highlight_g3

0x24b0,	// (0x00080e90) bg_sp_fs_schedule_viewer_highlight_g4

0x2711,	// (0x000810f1) bg_sp_fs_schedule_viewer_highlight_g5

0x24c0,	// (0x00080ea0) bg_sp_fs_schedule_viewer_highlight_g6

0x24c8,	// (0x00080ea8) bg_sp_fs_schedule_viewer_highlight_g7

0x24d0,	// (0x00080eb0) bg_sp_fs_schedule_viewer_highlight_g8

0xe58d,	// (0x0008cf6d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0008e7b9) bg_sp_fs_schedule_viewer_highlight_g

0x01c9,	// (0x0007eba9) bg_main_sp_fs_ribbon_pane

0xcedc,	// (0x0008b8bc) main_sp_fs_ribbon_pane_g1

0x3bfa,	// (0x000825da) main_sp_fs_ribbon_pane_t1

0xcee5,	// (0x0008b8c5) main_sp_fs_ribbon_pane_t2

0x3c09,	// (0x000825e9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0008e7cc) main_sp_fs_ribbon_pane_t

0x3c18,	// (0x000825f8) main_sp_fs_ribbon_scheduler_pane

0x3c20,	// (0x00082600) bg_main_sp_fs_ribbon_pane_g1

0x3c29,	// (0x00082609) bg_main_sp_fs_ribbon_pane_g2

0x3c32,	// (0x00082612) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0008e7d3) bg_main_sp_fs_ribbon_pane_g

0x3c3a,	// (0x0008261a) main_sp_fs_ribbon_scheduler_pane_g1

0x3c43,	// (0x00082623) main_sp_fs_ribbon_scheduler_pane_g2

0x3c4c,	// (0x0008262c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0008e7da) main_sp_fs_ribbon_scheduler_pane_g

0x3c55,	// (0x00082635) list_cale_mrui_pane

0xcef4,	// (0x0008b8d4) sp_fs_scroll_pane_cp07_ParamLimits

0xcef4,	// (0x0008b8d4) sp_fs_scroll_pane_cp07

0xcf0a,	// (0x0008b8ea) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcf0a,	// (0x0008b8ea) bg_sp_fs_schedule_viewer_highlight

0x3c5e,	// (0x0008263e) list_single_sp_fs_schedule_track_pane_cp01

0x3c66,	// (0x00082646) list_sp_fs_schedule_track_pane

0x3c6e,	// (0x0008264e) sp_fs_scroll_pane_cp06_ParamLimits

0x3c6e,	// (0x0008264e) sp_fs_scroll_pane_cp06

0x19aa,	// (0x0008038a) bgmain_sp_fs_calendar_pane_g1

0xcf17,	// (0x0008b8f7) list_single_cale_mrui_pane_ParamLimits

0xcf17,	// (0x0008b8f7) list_single_cale_mrui_pane

0x3c80,	// (0x00082660) list_single_cale_mrui_row_pane_ParamLimits

0x3c80,	// (0x00082660) list_single_cale_mrui_row_pane

0x3c8d,	// (0x0008266d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3c8d,	// (0x0008266d) list_single_cale_mrui_row_pane_g1

0x3cd2,	// (0x000826b2) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3cd2,	// (0x000826b2) list_single_cale_mrui_row_pane_t1

0xcf3f,	// (0x0008b91f) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcf3f,	// (0x0008b91f) list_single_cale_mrui_row_pane_t2

0x3ce4,	// (0x000826c4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3ce4,	// (0x000826c4) list_single_cale_mrui_row_pane_t3

0x3d13,	// (0x000826f3) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3d13,	// (0x000826f3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x0008e7e8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x0008e7e8) list_single_cale_mrui_row_pane_t

0xcfa5,	// (0x0008b985) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcfa5,	// (0x0008b985) list_single_cmail_header_editor_pane_bg_cp01

0xcfc5,	// (0x0008b9a5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcfc5,	// (0x0008b9a5) list_single_cmail_header_editor_pane_bg_cp02

0xcfe1,	// (0x0008b9c1) main_radioblah_text_pane_t1_ParamLimits

0xcfe1,	// (0x0008b9c1) main_radioblah_text_pane_t1

0x3d42,	// (0x00082722) cam6_indi_pane_cp01

0x3d4a,	// (0x0008272a) cam6_mode_pane_cp01

0x3d52,	// (0x00082732) cam6_pano_pane

0x3d5b,	// (0x0008273b) cam6_zoom_pane_cp01

0x3d63,	// (0x00082743) cam6_pano_image_pane

0x3d6e,	// (0x0008274e) cam6_pano_pane_g1

0x32d9,	// (0x00081cb9) cam6_pano_pane_g2

0x3d77,	// (0x00082757) cam6_pano_pane_g3

0x3d80,	// (0x00082760) cam6_pano_pane_g4

0x1f78,	// (0x00080958) cam6_pano_pane_g5

0x3d89,	// (0x00082769) cam6_pano_pane_g6

0x3d93,	// (0x00082773) cam6_pano_pane_g7

0x3d9b,	// (0x0008277b) cam6_pano_pane_g8

0x3da4,	// (0x00082784) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x0008e7f1) cam6_pano_pane_g

0x01c9,	// (0x0007eba9) main_browser_tag_pane

0x3ae0,	// (0x000824c0) grid_navstr_albumart_pane

0x3daf,	// (0x0008278f) cell_navstr_albumart_pane_ParamLimits

0x3daf,	// (0x0008278f) cell_navstr_albumart_pane

0x3dd2,	// (0x000827b2) cell_navstr_albumart_pane_g1

0x135e,	// (0x0007fd3e) cell_navstr_albumart_pane_g2

0x136e,	// (0x0007fd4e) cell_navstr_albumart_pane_g3

0x1366,	// (0x0007fd46) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x0008e804) cell_navstr_albumart_pane_g

0xcffc,	// (0x0008b9dc) bt_list_pane_ParamLimits

0xcffc,	// (0x0008b9dc) bt_list_pane

0xd01c,	// (0x0008b9fc) bt_list_pane_t1

0xd02b,	// (0x0008ba0b) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x0008e80d) bt_list_pane_t

0x01c9,	// (0x0007eba9) main_cale_prevew_pane

0xd03a,	// (0x0008ba1a) popup_cale_preview_window_ParamLimits

0xd03a,	// (0x0008ba1a) popup_cale_preview_window

0xf0cd,	// (0x0008daad) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0cd,	// (0x0008daad) bg_popup_preview_window_pane_cp05

0x3dda,	// (0x000827ba) list_cale_preview_pane_ParamLimits

0x3dda,	// (0x000827ba) list_cale_preview_pane

0x4146,	// (0x00082b26) list_double_cale_preview_pane_ParamLimits

0x4146,	// (0x00082b26) list_double_cale_preview_pane

0xd053,	// (0x0008ba33) list_single_cale_preview_pane_ParamLimits

0xd053,	// (0x0008ba33) list_single_cale_preview_pane

0xd069,	// (0x0008ba49) list_single_cale_preview_pane_g1

0xd071,	// (0x0008ba51) list_single_cale_preview_pane_t1_ParamLimits

0xd071,	// (0x0008ba51) list_single_cale_preview_pane_t1

0xd086,	// (0x0008ba66) list_double_cale_preview_pane_g1

0xd08e,	// (0x0008ba6e) list_double_cale_preview_pane_t1_ParamLimits

0xd08e,	// (0x0008ba6e) list_double_cale_preview_pane_t1

0xd0a3,	// (0x0008ba83) list_double_cale_preview_pane_t2_ParamLimits

0xd0a3,	// (0x0008ba83) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x0008e812) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x0008e812) list_double_cale_preview_pane_t

0x01c9,	// (0x0007eba9) main_ezdial_pane

0xf0cd,	// (0x0008daad) main_sp_fs_email_pane_ParamLimits

0xc883,	// (0x0008b263) cmail_ddmenu_btn01_pane_ParamLimits

0xc883,	// (0x0008b263) cmail_ddmenu_btn01_pane

0xc8a0,	// (0x0008b280) cmail_ddmenu_btn02_pane_ParamLimits

0xc8a0,	// (0x0008b280) cmail_ddmenu_btn02_pane

0xc8be,	// (0x0008b29e) cmail_ddmenu_btn03_pane_ParamLimits

0xc8be,	// (0x0008b29e) cmail_ddmenu_btn03_pane

0xc8ec,	// (0x0008b2cc) main_sp_fs_ctrlbar_pane_ParamLimits

0xc906,	// (0x0008b2e6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xccff,	// (0x0008b6df) list_cmail_body_pane_ParamLimits

0x3a14,	// (0x000823f4) bg_button_pane_cp12

0x3a1d,	// (0x000823fd) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3a1d,	// (0x000823fd) list_single_cmail_header_detail_pane_g3

0xcd92,	// (0x0008b772) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcd92,	// (0x0008b772) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0008e795) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0008e795) list_single_cmail_header_detail_pane_t

0x3b48,	// (0x00082528) phacti_term_pane_t2_ParamLimits

0x3b48,	// (0x00082528) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0008e79f) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0008e79f) phacti_term_pane_t

0x3de6,	// (0x000827c6) aid_size_list_single_double

0xd0bb,	// (0x0008ba9b) popup_ezdial_listscroll_window

0xd0dc,	// (0x0008babc) popup_number_entry_window_cp01

0xec98,	// (0x0008d678) bg_popup_call_pane_cp09

0x3df2,	// (0x000827d2) ezdial_list_pane

0x3dfa,	// (0x000827da) scroll_pane_cp23

0x178f,	// (0x0008016f) bg_button_pane_cp028_ParamLimits

0x178f,	// (0x0008016f) bg_button_pane_cp028

0xd0ea,	// (0x0008baca) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd0ea,	// (0x0008baca) cmail_ddmenu_btn01_pane_g1

0xd0fc,	// (0x0008badc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd0fc,	// (0x0008badc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x0008e817) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x0008e817) cmail_ddmenu_btn01_pane_g

0x3e02,	// (0x000827e2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3e02,	// (0x000827e2) cmail_ddmenu_btn01_pane_t1

0x1541,	// (0x0007ff21) bg_button_pane_cp029_ParamLimits

0x1541,	// (0x0007ff21) bg_button_pane_cp029

0xd0fc,	// (0x0008badc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd0fc,	// (0x0008badc) cmail_ddmenu_btn02_pane_g1

0xd114,	// (0x0008baf4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd114,	// (0x0008baf4) cmail_ddmenu_btn02_pane_t1

0x23f5,	// (0x00080dd5) bg_button_pane_cp031_ParamLimits

0x23f5,	// (0x00080dd5) bg_button_pane_cp031

0xd0fc,	// (0x0008badc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd0fc,	// (0x0008badc) cmail_ddmenu_btn03_pane_g1

0xd114,	// (0x0008baf4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd114,	// (0x0008baf4) cmail_ddmenu_btn03_pane_t1

0xa51a,	// (0x00088efa) cell_dialer2_keypad_pane_t1_ParamLimits

0xa534,	// (0x00088f14) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa534,	// (0x00088f14) cell_dialer2_keypad_pane_t1_copy1

0xc1fc,	// (0x0008abdc) ncimui_group_button_pane

0xf0cd,	// (0x0008daad) main_sp_fs_calendar_pane_ParamLimits

0xcd19,	// (0x0008b6f9) list_single_cmail_header_caption_pane_ParamLimits

0x4926,	// (0x00083306) aid_recal_txt_sm_pane

0x01c9,	// (0x0007eba9) mian_recal_day_pane

0x3bc0,	// (0x000825a0) popup_sp_fs_cale_preview_window_ParamLimits

0x01c9,	// (0x0007eba9) list_recal_day_pane

0x3e31,	// (0x00082811) list_single_recal_day_pane_ParamLimits

0x3e31,	// (0x00082811) list_single_recal_day_pane

0x3e43,	// (0x00082823) list_single_recal_day_pane_g1_ParamLimits

0x3e43,	// (0x00082823) list_single_recal_day_pane_g1

0x3e4f,	// (0x0008282f) list_single_recal_day_pane_g2_ParamLimits

0x3e4f,	// (0x0008282f) list_single_recal_day_pane_g2

0x3e5f,	// (0x0008283f) list_single_recal_day_pane_g3_ParamLimits

0x3e5f,	// (0x0008283f) list_single_recal_day_pane_g3

0xd138,	// (0x0008bb18) list_single_recal_day_pane_g4_ParamLimits

0xd138,	// (0x0008bb18) list_single_recal_day_pane_g4

0x3e6b,	// (0x0008284b) list_single_recal_day_pane_g5_ParamLimits

0x3e6b,	// (0x0008284b) list_single_recal_day_pane_g5

0x3e7b,	// (0x0008285b) list_single_recal_day_pane_g6_ParamLimits

0x3e7b,	// (0x0008285b) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x0008e826) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x0008e826) list_single_recal_day_pane_g

0x3e92,	// (0x00082872) list_single_recal_day_pane_t1

0x3ea4,	// (0x00082884) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0008e831) list_single_recal_day_pane_t

0xd158,	// (0x0008bb38) ncimui_query_button_pane_ParamLimits

0xd158,	// (0x0008bb38) ncimui_query_button_pane

0xd168,	// (0x0008bb48) ncimui_query_button_pane_t1_ParamLimits

0xd168,	// (0x0008bb48) ncimui_query_button_pane_t1

0x3eb9,	// (0x00082899) ncimui_query_button_pane_t2_ParamLimits

0x3eb9,	// (0x00082899) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0008e836) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0008e836) ncimui_query_button_pane_t

0xd17b,	// (0x0008bb5b) query_button_pane_ParamLimits

0xd17b,	// (0x0008bb5b) query_button_pane

0x01c9,	// (0x0007eba9) bg_button_pane_cp0028

0x3ecc,	// (0x000828ac) query_button_pane_t1

0x8963,	// (0x00087343) main_tport_pane_ParamLimits

0xcc2f,	// (0x0008b60f) bg_popup_window_pane_cp01_ParamLimits

0xcc2f,	// (0x0008b60f) bg_popup_window_pane_cp01

0xcc3c,	// (0x0008b61c) heading_pane_cp08_ParamLimits

0xcc3c,	// (0x0008b61c) heading_pane_cp08

0xcc4a,	// (0x0008b62a) heading_pane_cp07_ParamLimits

0xcc4a,	// (0x0008b62a) heading_pane_cp07

0x39d6,	// (0x000823b6) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0008e782) cell_tport_appsw_pane_g

0x8083,	// (0x00086a63) input_candi_list_open_g1

0xe754,	// (0x0008d134) list_cale_time_pane_g6_ParamLimits

0xe754,	// (0x0008d134) list_cale_time_pane_g6

0x939c,	// (0x00087d7c) aid_size_touch_calib_1_ParamLimits

0x939c,	// (0x00087d7c) aid_size_touch_calib_1

0x93a8,	// (0x00087d88) aid_size_touch_calib_2_ParamLimits

0x93a8,	// (0x00087d88) aid_size_touch_calib_2

0x93b6,	// (0x00087d96) aid_size_touch_calib_3_ParamLimits

0x93b6,	// (0x00087d96) aid_size_touch_calib_3

0x93c6,	// (0x00087da6) aid_size_touch_calib_4_ParamLimits

0x93c6,	// (0x00087da6) aid_size_touch_calib_4

0x93d4,	// (0x00087db4) main_touch_calib_button_group_pane_ParamLimits

0x93d4,	// (0x00087db4) main_touch_calib_button_group_pane

0x93e2,	// (0x00087dc2) main_touch_calib_pane_g1_ParamLimits

0x93ee,	// (0x00087dce) main_touch_calib_pane_g2_ParamLimits

0x93fa,	// (0x00087dda) main_touch_calib_pane_g3_ParamLimits

0x9406,	// (0x00087de6) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0008e150) main_touch_calib_pane_g_ParamLimits

0x9412,	// (0x00087df2) main_touch_calib_pane_t1_ParamLimits

0x9429,	// (0x00087e09) main_touch_calib_pane_t2_ParamLimits

0x9440,	// (0x00087e20) main_touch_calib_pane_t3_ParamLimits

0x9454,	// (0x00087e34) main_touch_calib_pane_t4_ParamLimits

0x9468,	// (0x00087e48) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0008e159) main_touch_calib_pane_t_ParamLimits

0x1d4e,	// (0x0008072e) list_single_fp_cale_pane_g3_ParamLimits

0x1d4e,	// (0x0008072e) list_single_fp_cale_pane_g3

0xa97a,	// (0x0008935a) bg_button_pane_cp012_ParamLimits

0xa97a,	// (0x0008935a) bg_vkb2_func_pane_cp03_ParamLimits

0xb322,	// (0x00089d02) cell_vitu2_function_top_pane_g1_ParamLimits

0xa97a,	// (0x0008935a) bg_vkb2_func_pane_cp04_ParamLimits

0xc19a,	// (0x0008ab7a) main_ncimui_button_group_pane_ParamLimits

0xc19a,	// (0x0008ab7a) main_ncimui_button_group_pane

0xc1ea,	// (0x0008abca) main_ncimui_pane_t3_ParamLimits

0xc1ea,	// (0x0008abca) main_ncimui_pane_t3

0x3af6,	// (0x000824d6) phacti_button_group_pane

0x3de6,	// (0x000827c6) aid_size_list_single_double_ParamLimits

0xd0bb,	// (0x0008ba9b) popup_ezdial_listscroll_window_ParamLimits

0xd0dc,	// (0x0008babc) popup_number_entry_window_cp01_ParamLimits

0xd188,	// (0x0008bb68) phacti_button_pane_ParamLimits

0xd188,	// (0x0008bb68) phacti_button_pane

0x01c9,	// (0x0007eba9) bg_button_pane_cp14

0x3eda,	// (0x000828ba) phacti_button_pane_t1

0xd199,	// (0x0008bb79) main_touch_calib_button_pane_ParamLimits

0xd199,	// (0x0008bb79) main_touch_calib_button_pane

0xe1b7,	// (0x0008cb97) bg_button_pane_cp18_ParamLimits

0xe1b7,	// (0x0008cb97) bg_button_pane_cp18

0x3ee8,	// (0x000828c8) main_touch_calib_button_pane_t1_ParamLimits

0x3ee8,	// (0x000828c8) main_touch_calib_button_pane_t1

0x3efe,	// (0x000828de) main_touch_calib_button_pane_t2_ParamLimits

0x3efe,	// (0x000828de) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0008e83b) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0008e83b) main_touch_calib_button_pane_t

0x01c9,	// (0x0007eba9) cell_ncimui_button_pane

0x01c9,	// (0x0007eba9) bg_button_pane_cp032

0x3f1c,	// (0x000828fc) cell_ncimui_button_pane_t1

0xa590,	// (0x00088f70) image3_infobar_pane_ParamLimits

0xa590,	// (0x00088f70) image3_infobar_pane

0xc548,	// (0x0008af28) fs_bigclock_status_pane_ParamLimits

0xc548,	// (0x0008af28) fs_bigclock_status_pane

0xc555,	// (0x0008af35) main_fs_bigclock_clock_pane_ParamLimits

0xc555,	// (0x0008af35) main_fs_bigclock_clock_pane

0xc56b,	// (0x0008af4b) main_fs_bigclock_indi_pane_ParamLimits

0xc56b,	// (0x0008af4b) main_fs_bigclock_indi_pane

0xc59b,	// (0x0008af7b) main_fs_bigclock_swipe_pane_ParamLimits

0xc59b,	// (0x0008af7b) main_fs_bigclock_swipe_pane

0x01c9,	// (0x0007eba9) main_fs_clock_dumped_data

0x33e6,	// (0x00081dc6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x33e6,	// (0x00081dc6) list_single_fs_bigclock_indicator_pane_g1

0x340c,	// (0x00081dec) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x340c,	// (0x00081dec) list_single_fs_bigclock_indicator_pane_g2

0x3426,	// (0x00081e06) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3426,	// (0x00081e06) list_single_fs_bigclock_indicator_pane_g3

0x3440,	// (0x00081e20) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3440,	// (0x00081e20) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x0008e669) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x0008e669) list_single_fs_bigclock_indicator_pane_g

0x3469,	// (0x00081e49) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3469,	// (0x00081e49) list_single_fs_bigclock_indicator_pane_t1

0x3491,	// (0x00081e71) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3491,	// (0x00081e71) list_single_fs_bigclock_indicator_pane_t2

0x34b9,	// (0x00081e99) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x34b9,	// (0x00081e99) list_single_fs_bigclock_indicator_pane_t3

0x34e1,	// (0x00081ec1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x34e1,	// (0x00081ec1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x0008e674) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x0008e674) list_single_fs_bigclock_indicator_pane_t

0x3f2a,	// (0x0008290a) image3_infobar_fav_pane_ParamLimits

0x3f2a,	// (0x0008290a) image3_infobar_fav_pane

0x3f3a,	// (0x0008291a) image3_infobar_loc_pane_ParamLimits

0x3f3a,	// (0x0008291a) image3_infobar_loc_pane

0x3f4e,	// (0x0008292e) image3_infobar_time_pane_ParamLimits

0x3f4e,	// (0x0008292e) image3_infobar_time_pane

0x19aa,	// (0x0008038a) image3_infobar_time_pane_g1

0x3f5e,	// (0x0008293e) image3_infobar_time_pane_t1

0x19aa,	// (0x0008038a) image3_infobar_loc_pane_g1

0x3f6c,	// (0x0008294c) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0008e840) image3_infobar_loc_pane_g

0x3f74,	// (0x00082954) image3_infobar_loc_pane_t1

0x19aa,	// (0x0008038a) image3_infobar_fav_pane_g1

0x3f82,	// (0x00082962) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0008e845) image3_infobar_fav_pane_g

0x3f8a,	// (0x0008296a) fs_bigclock_status_battery_pane

0x3f93,	// (0x00082973) fs_bigclock_status_signal_pane

0x3f9c,	// (0x0008297c) fs_bigclock_status_title_pane

0x3fa5,	// (0x00082985) fs_bigclock_status_signal_pane_g1

0x3fae,	// (0x0008298e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0008e84a) fs_bigclock_status_signal_pane_g

0x3fb6,	// (0x00082996) fs_bigclock_status_battery_pane_g1

0x3fbf,	// (0x0008299f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0008e84f) fs_bigclock_status_battery_pane_g

0x3fc7,	// (0x000829a7) fs_bigclock_status_title_pane_t1

0x19aa,	// (0x0008038a) main_fs_bigclock_clock_pane_g1

0x3fd5,	// (0x000829b5) main_fs_bigclock_clock_pane_g2

0x3fd5,	// (0x000829b5) main_fs_bigclock_clock_pane_g3

0x3fd5,	// (0x000829b5) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0008e854) main_fs_bigclock_clock_pane_g

0x3fdd,	// (0x000829bd) main_fs_bigclock_clock_pane_t1

0x3feb,	// (0x000829cb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0008e85d) main_fs_bigclock_clock_pane_t

0x3ffa,	// (0x000829da) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3ffa,	// (0x000829da) list_single_fs_bigclock_indicator_pane

0xd1ab,	// (0x0008bb8b) list_single_fs_bigclock_pane_ParamLimits

0xd1ab,	// (0x0008bb8b) list_single_fs_bigclock_pane

0x4014,	// (0x000829f4) main_fs_bigclock_indicator_pane_t1

0x4023,	// (0x00082a03) list_single_fs_bigclock_pane_g1

0x402b,	// (0x00082a0b) list_single_fs_bigclock_pane_t1

0x19aa,	// (0x0008038a) main_fs_bigclock_swipe_pane_g1

0x406e,	// (0x00082a4e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0008e86e) main_fs_bigclock_swipe_pane_g

0x4076,	// (0x00082a56) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4076,	// (0x00082a56) main_fs_bigclock_swipe_pane_t1

0x781d,	// (0x000861fd) call_type_pane_ParamLimits

0x01c9,	// (0x0007eba9) main_btmg_pane

0x3cb9,	// (0x00082699) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3cb9,	// (0x00082699) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x0008e7e1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0008e7e1) list_single_cale_mrui_row_pane_g

0x3e21,	// (0x00082801) list_recal_vselct_arw_lo_pane

0x3e29,	// (0x00082809) list_recal_vselct_arw_up_pane

0x492f,	// (0x0008330f) list_recal_vselct_pane

0x4093,	// (0x00082a73) btmg_button_pane

0xd20c,	// (0x0008bbec) main_btmg_pane_g1

0x01c9,	// (0x0007eba9) bg_button_pane_cp044

0x409d,	// (0x00082a7d) btmg_button_pane_t1

0x1539,	// (0x0007ff19) aid_listscroll_gen

0xf0cd,	// (0x0008daad) main_cntbar_detail_pane

0x39f4,	// (0x000823d4) list_cmail_folder_pane

0x3a04,	// (0x000823e4) sp_fs_scroll_pane_cp03_ParamLimits

0xd214,	// (0x0008bbf4) list_single_fs_dyc_pane_cp01_ParamLimits

0xd214,	// (0x0008bbf4) list_single_fs_dyc_pane_cp01

0x40ab,	// (0x00082a8b) aid_size_cmail_indent

0x40b4,	// (0x00082a94) list_single_dyc_row_pane_cp01

0xd256,	// (0x0008bc36) cntbar_detail_list_pane_ParamLimits

0xd256,	// (0x0008bc36) cntbar_detail_list_pane

0xd290,	// (0x0008bc70) main_cntbar_detail_cont_pane_ParamLimits

0xd290,	// (0x0008bc70) main_cntbar_detail_cont_pane

0x77b7,	// (0x00086197) scroll_pane_cp032_ParamLimits

0x77b7,	// (0x00086197) scroll_pane_cp032

0xd29c,	// (0x0008bc7c) cntbar_detail_list_event_pane_ParamLimits

0xd29c,	// (0x0008bc7c) cntbar_detail_list_event_pane

0xd262,	// (0x0008bc42) cntbar_detail_list_shct_pane

0xe5fb,	// (0x0008cfdb) aid_list_gen

0x40bd,	// (0x00082a9d) aid_scroll

0x40c6,	// (0x00082aa6) aid_size_touch_scroll_bar

0xd2b0,	// (0x0008bc90) aid_list_double

0x40cf,	// (0x00082aaf) aid_list_single

0xd2b9,	// (0x0008bc99) aid_list_single_lg

0x40d8,	// (0x00082ab8) aid_list_z_g_a_sm

0x4910,	// (0x000832f0) aid_list_z_g_d

0x40e0,	// (0x00082ac0) aid_txt_z_prm

0xd2c2,	// (0x0008bca2) aid_txt_z_prm_cp01

0xd2d0,	// (0x0008bcb0) aid_txt_z_sec

0xd2de,	// (0x0008bcbe) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd2de,	// (0x0008bcbe) main_cntbar_detail_cont_pane_g1

0xd2eb,	// (0x0008bccb) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd2eb,	// (0x0008bccb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0008e873) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0008e873) main_cntbar_detail_cont_pane_g

0x40ee,	// (0x00082ace) main_cntbar_detail_cont_pane_t1

0x40fc,	// (0x00082adc) main_cntbar_detail_cont_pane_t2

0x410a,	// (0x00082aea) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0008e878) main_cntbar_detail_cont_pane_t

0xd2f7,	// (0x0008bcd7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd2f7,	// (0x0008bcd7) cell_cntbar_detail_list_shct_pane

0x4118,	// (0x00082af8) cntbar_detail_list_shct_pane_g1

0x4121,	// (0x00082b01) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0008e87f) cntbar_detail_list_shct_pane_g

0xd30b,	// (0x0008bceb) cntbar_detail_list_event_pane_g1_ParamLimits

0xd30b,	// (0x0008bceb) cntbar_detail_list_event_pane_g1

0xd317,	// (0x0008bcf7) cntbar_detail_list_event_pane_g2_ParamLimits

0xd317,	// (0x0008bcf7) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0008e884) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0008e884) cntbar_detail_list_event_pane_g

0xd383,	// (0x0008bd63) cntbar_detail_list_event_pane_t1_ParamLimits

0xd383,	// (0x0008bd63) cntbar_detail_list_event_pane_t1

0xd398,	// (0x0008bd78) cntbar_detail_list_event_pane_t2_ParamLimits

0xd398,	// (0x0008bd78) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0008e891) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0008e891) cntbar_detail_list_event_pane_t

0x19aa,	// (0x0008038a) cell_cntbar_detail_list_shct_pane_g1

0x7bcd,	// (0x000865ad) navi_pane_mv_g3

0xf0cd,	// (0x0008daad) main_cntbar_detail_pane_ParamLimits

0x01c9,	// (0x0007eba9) main_notif_wgt_pane

0xa244,	// (0x00088c24) aid_tch_main_mp4_pane_g4

0xa479,	// (0x00088e59) popup_slider_window_cp02

0x3e17,	// (0x000827f7) list_recal_day_event_pane

0xd236,	// (0x0008bc16) cntbar_detail_btn_pane_ParamLimits

0xd236,	// (0x0008bc16) cntbar_detail_btn_pane

0xd246,	// (0x0008bc26) cntbar_detail_btn_pane_cp01_ParamLimits

0xd246,	// (0x0008bc26) cntbar_detail_btn_pane_cp01

0xd262,	// (0x0008bc42) cntbar_detail_list_shct_pane_ParamLimits

0xd26e,	// (0x0008bc4e) cntbar_detail_pane_g1_ParamLimits

0xd26e,	// (0x0008bc4e) cntbar_detail_pane_g1

0xd27a,	// (0x0008bc5a) cntbar_detail_pane_t1_ParamLimits

0xd27a,	// (0x0008bc5a) cntbar_detail_pane_t1

0xd323,	// (0x0008bd03) cntbar_detail_list_event_pane_g3_ParamLimits

0xd323,	// (0x0008bd03) cntbar_detail_list_event_pane_g3

0xd33b,	// (0x0008bd1b) cntbar_detail_list_event_pane_g4_ParamLimits

0xd33b,	// (0x0008bd1b) cntbar_detail_list_event_pane_g4

0xd353,	// (0x0008bd33) cntbar_detail_list_event_pane_g5_ParamLimits

0xd353,	// (0x0008bd33) cntbar_detail_list_event_pane_g5

0xd36b,	// (0x0008bd4b) cntbar_detail_list_event_pane_g6_ParamLimits

0xd36b,	// (0x0008bd4b) cntbar_detail_list_event_pane_g6

0xd3ad,	// (0x0008bd8d) cntbar_detail_list_event_pane_t3_ParamLimits

0xd3ad,	// (0x0008bd8d) cntbar_detail_list_event_pane_t3

0xd3bf,	// (0x0008bd9f) popup_notif_wgt_window_ParamLimits

0xd3bf,	// (0x0008bd9f) popup_notif_wgt_window

0xd3cf,	// (0x0008bdaf) popup_submenu_window_cp01_ParamLimits

0xd3cf,	// (0x0008bdaf) popup_submenu_window_cp01

0xec98,	// (0x0008d678) bg_popup_window_pane_cp10

0x412a,	// (0x00082b0a) listscroll_notif_wgt_pane

0x4134,	// (0x00082b14) list_notif_wgt_window

0x413d,	// (0x00082b1d) scroll_pane_cp033

0x4146,	// (0x00082b26) list_notif_wgt_row_pane_ParamLimits

0x4146,	// (0x00082b26) list_notif_wgt_row_pane

0x4158,	// (0x00082b38) aid_size_list_notif_wgt_del

0x4161,	// (0x00082b41) list_notif_wgt_row_pane_g1

0x4169,	// (0x00082b49) list_notif_wgt_row_pane_g2

0x4171,	// (0x00082b51) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0008e898) list_notif_wgt_row_pane_g

0x417a,	// (0x00082b5a) list_notif_wgt_row_pane_t1

0x4188,	// (0x00082b68) list_notif_wgt_row_pane_t2

0x4196,	// (0x00082b76) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0008e89f) list_notif_wgt_row_pane_t

0x2731,	// (0x00081111) list_recal_day_event_pane_g1

0x41a4,	// (0x00082b84) list_recal_day_event_pane_t1

0x01c9,	// (0x0007eba9) bg_button_pane_cp045

0x41b3,	// (0x00082b93) cntbar_detail_btn_pane_t1

0x1541,	// (0x0007ff21) main_callh_pane_ParamLimits

0x1541,	// (0x0007ff21) main_callh_pane

0x01c9,	// (0x0007eba9) main_coverflow0_pane

0x01c9,	// (0x0007eba9) main_wgtman_pane

0xc5b3,	// (0x0008af93) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc5b3,	// (0x0008af93) main_fs_bigclock_unlock_btn_pane

0x39ce,	// (0x000823ae) bg_button_pane_cp16

0x39de,	// (0x000823be) cell_tport_appsw_pane_g3

0xd3dd,	// (0x0008bdbd) cf0_flow_pane_ParamLimits

0xd3dd,	// (0x0008bdbd) cf0_flow_pane

0x41c1,	// (0x00082ba1) listscroll_cf0_pane

0x41ca,	// (0x00082baa) main_cf0_pane_g1

0xd3ec,	// (0x0008bdcc) main_cf0_pane_t1_ParamLimits

0xd3ec,	// (0x0008bdcc) main_cf0_pane_t1

0xd400,	// (0x0008bde0) main_cf0_pane_t2_ParamLimits

0xd400,	// (0x0008bde0) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0008e8a6) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0008e8a6) main_cf0_pane_t

0x41d4,	// (0x00082bb4) scroll_pane_cp11

0xd414,	// (0x0008bdf4) cf0_flow_pane_g1

0xd41c,	// (0x0008bdfc) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0008e8ab) cf0_flow_pane_g

0xd424,	// (0x0008be04) cf0_flow_pane_t1

0x01c9,	// (0x0007eba9) main_call6_pane

0x01c9,	// (0x0007eba9) main_calllock_pane

0xd432,	// (0x0008be12) call6_btn_grp_pane_ParamLimits

0xd432,	// (0x0008be12) call6_btn_grp_pane

0xd441,	// (0x0008be21) call6_pane_g1_ParamLimits

0xd441,	// (0x0008be21) call6_pane_g1

0xd450,	// (0x0008be30) popup_call6_1st_window_ParamLimits

0xd450,	// (0x0008be30) popup_call6_1st_window

0xd45e,	// (0x0008be3e) popup_call6_2nd_window_ParamLimits

0xd45e,	// (0x0008be3e) popup_call6_2nd_window

0xd46c,	// (0x0008be4c) cell_call6_btn_pane_ParamLimits

0xd46c,	// (0x0008be4c) cell_call6_btn_pane

0xec98,	// (0x0008d678) bg_popup_call2_in_pane_cp03

0x41df,	// (0x00082bbf) popup_call6_1st_window_g1

0x41e7,	// (0x00082bc7) popup_call6_1st_window_g2

0x41ef,	// (0x00082bcf) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0008e8b0) popup_call6_1st_window_g

0x41f7,	// (0x00082bd7) popup_call6_1st_window_t1

0x4206,	// (0x00082be6) popup_call6_1st_window_t2

0x4216,	// (0x00082bf6) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0008e8b7) popup_call6_1st_window_t

0xec98,	// (0x0008d678) bg_popup_call2_in_pane_cp04

0x41df,	// (0x00082bbf) popup_call6_2nd_window_g1

0x41e7,	// (0x00082bc7) popup_call6_2nd_window_g2

0x41ef,	// (0x00082bcf) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0008e8b0) popup_call6_2nd_window_g

0x41f7,	// (0x00082bd7) popup_call6_2nd_window_t1

0x01c9,	// (0x0007eba9) bg_button_pane_cp15

0x4226,	// (0x00082c06) cell_call6_btn_pane_g1

0x422f,	// (0x00082c0f) cell_call6_btn_pane_t1

0xd47b,	// (0x0008be5b) listscroll_wgtman_pane_ParamLimits

0xd47b,	// (0x0008be5b) listscroll_wgtman_pane

0xd499,	// (0x0008be79) wgtman_btn_pane_ParamLimits

0xd499,	// (0x0008be79) wgtman_btn_pane

0xeb4f,	// (0x0008d52f) aid_scroll_copy1

0x423e,	// (0x00082c1e) list_wgtman_pane

0xd4ce,	// (0x0008beae) wgtman_btn_pane_g1_ParamLimits

0xd4ce,	// (0x0008beae) wgtman_btn_pane_g1

0xd4f6,	// (0x0008bed6) wgtman_btn_pane_t1_ParamLimits

0xd4f6,	// (0x0008bed6) wgtman_btn_pane_t1

0x4248,	// (0x00082c28) wgtman_btn_pane_t2_ParamLimits

0x4248,	// (0x00082c28) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0008e8be) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0008e8be) wgtman_btn_pane_t

0xd52d,	// (0x0008bf0d) listrow_wgtman_pane_ParamLimits

0xd52d,	// (0x0008bf0d) listrow_wgtman_pane

0xd548,	// (0x0008bf28) listrow_wgtman_pane_g1

0xd551,	// (0x0008bf31) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0008e8c3) listrow_wgtman_pane_g

0xd55b,	// (0x0008bf3b) listrow_wgtman_pane_t1

0xd569,	// (0x0008bf49) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0008e8c8) listrow_wgtman_pane_t

0xd577,	// (0x0008bf57) wait_bar_pane_cp09

0x425f,	// (0x00082c3f) main_calllock_btn_pane

0x4269,	// (0x00082c49) main_calllock_pane_g1

0x01c9,	// (0x0007eba9) bg_button_pane_cp17

0x4275,	// (0x00082c55) main_calllock_btn_pane_g1

0x427e,	// (0x00082c5e) main_calllock_btn_pane_t1

0x01c9,	// (0x0007eba9) main_dialer3_pane

0x01c9,	// (0x0007eba9) main_fmrd2_pane

0x19aa,	// (0x0008038a) main_fs_bigclock_unlock_btn_pane_g1

0x4295,	// (0x00082c75) main_fs_bigclock_unlock_btn_pane_t1

0xd57f,	// (0x0008bf5f) area_fmrd2_info_pane_ParamLimits

0xd57f,	// (0x0008bf5f) area_fmrd2_info_pane

0xd58d,	// (0x0008bf6d) area_fmrd2_visual_pane_ParamLimits

0xd58d,	// (0x0008bf6d) area_fmrd2_visual_pane

0xd59b,	// (0x0008bf7b) fmrd2_indi_pane_ParamLimits

0xd59b,	// (0x0008bf7b) fmrd2_indi_pane

0xd5a8,	// (0x0008bf88) area_fmrd2_visual_pane_g1

0xd5b0,	// (0x0008bf90) area_fmrd2_visual_pane_t1

0xd5c0,	// (0x0008bfa0) area_fmrd2_visual_pane_t2

0xd5d0,	// (0x0008bfb0) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0008e8d2) area_fmrd2_visual_pane_t

0xd5e0,	// (0x0008bfc0) area_fmrd2_info_pane_g1

0xd5e8,	// (0x0008bfc8) area_fmrd2_info_pane_t1

0xd5f8,	// (0x0008bfd8) area_fmrd2_info_pane_t2

0xd608,	// (0x0008bfe8) area_fmrd2_info_pane_t3

0xd618,	// (0x0008bff8) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0008e8d9) area_fmrd2_info_pane_t

0xd626,	// (0x0008c006) fmrd2_indi_pane_t1

0xd636,	// (0x0008c016) fmrd2_indi_pane_t2

0xd646,	// (0x0008c026) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0008e8e2) fmrd2_indi_pane_t

0x344f,	// (0x00081e2f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x344f,	// (0x00081e2f) list_single_fs_bigclock_indicator_pane_g5

0x34f6,	// (0x00081ed6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x34f6,	// (0x00081ed6) list_single_fs_bigclock_indicator_pane_t5

0xce50,	// (0x0008b830) aid_cell_bcale_month_pane_ParamLimits

0xce50,	// (0x0008b830) aid_cell_bcale_month_pane

0xce5c,	// (0x0008b83c) bcale_month_pane_ParamLimits

0xce5c,	// (0x0008b83c) bcale_month_pane

0xce6c,	// (0x0008b84c) bcale_preview_pane_ParamLimits

0xce6c,	// (0x0008b84c) bcale_preview_pane

0x402b,	// (0x00082a0b) list_single_fs_bigclock_pane_t1_ParamLimits

0x404a,	// (0x00082a2a) list_single_fs_bigclock_pane_t2_ParamLimits

0x404a,	// (0x00082a2a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0008e869) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0008e869) list_single_fs_bigclock_pane_t

0x428d,	// (0x00082c6d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0008e8cd) main_fs_bigclock_unlock_btn_pane_g

0xd654,	// (0x0008c034) aid_dia3_key_size_ParamLimits

0xd654,	// (0x0008c034) aid_dia3_key_size

0xd660,	// (0x0008c040) aid_dia3_listrow_size_ParamLimits

0xd660,	// (0x0008c040) aid_dia3_listrow_size

0xd670,	// (0x0008c050) dia3_keypad_fun_pane_ParamLimits

0xd670,	// (0x0008c050) dia3_keypad_fun_pane

0xd682,	// (0x0008c062) dia3_keypad_num_pane_ParamLimits

0xd682,	// (0x0008c062) dia3_keypad_num_pane

0xd694,	// (0x0008c074) dia3_listscroll_pane_ParamLimits

0xd694,	// (0x0008c074) dia3_listscroll_pane

0xd6a2,	// (0x0008c082) dia3_numentry_pane_ParamLimits

0xd6a2,	// (0x0008c082) dia3_numentry_pane

0x42a3,	// (0x00082c83) dia3_list_pane

0x42ae,	// (0x00082c8e) scroll_pane_cp12

0x01c9,	// (0x0007eba9) bg_dia3_numentry_pane

0xd6b0,	// (0x0008c090) dia3_numentry_pane_t1

0xd6bf,	// (0x0008c09f) cell_dia3_key_num_pane

0xd6c7,	// (0x0008c0a7) cell_dia3_key0_fun_pane_ParamLimits

0xd6c7,	// (0x0008c0a7) cell_dia3_key0_fun_pane

0xd6d4,	// (0x0008c0b4) cell_dia3_key1_fun_pane_ParamLimits

0xd6d4,	// (0x0008c0b4) cell_dia3_key1_fun_pane

0xd6e1,	// (0x0008c0c1) dia3_listrow_pane

0x3153,	// (0x00081b33) bg_dia3_numentry_pane_g1

0x01c9,	// (0x0007eba9) bg_button_pane_cp21

0x42b9,	// (0x00082c99) cell_dia3_key_num_pane_t1

0x42c7,	// (0x00082ca7) cell_dia3_key_num_pane_t2

0x42d6,	// (0x00082cb6) cell_dia3_key_num_pane_t3

0x42e5,	// (0x00082cc5) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0008e8e9) cell_dia3_key_num_pane_t

0x01c9,	// (0x0007eba9) bg_button_pane_cp19

0xd6ee,	// (0x0008c0ce) cell_dia3_key0_fun_pane_g1

0x01c9,	// (0x0007eba9) bg_button_pane_cp20

0xd6f6,	// (0x0008c0d6) cell_dia3_key1_fun_pane_g1

0xd6fe,	// (0x0008c0de) area_left_week_number_pane

0xd707,	// (0x0008c0e7) area_top_day_name_pane

0xd710,	// (0x0008c0f0) frame_month_view_pane

0xd71a,	// (0x0008c0fa) grid_month_view_pane

0xd724,	// (0x0008c104) cell_top_day_name_pane_ParamLimits

0xd724,	// (0x0008c104) cell_top_day_name_pane

0xd73e,	// (0x0008c11e) cell_area_left_week_number_pane_ParamLimits

0xd73e,	// (0x0008c11e) cell_area_left_week_number_pane

0xd752,	// (0x0008c132) cell_month_view_pane_ParamLimits

0xd752,	// (0x0008c132) cell_month_view_pane

0x42f4,	// (0x00082cd4) frm_month_g1

0xd76f,	// (0x0008c14f) frm_month_g2

0xd779,	// (0x0008c159) frm_month_g3

0xd783,	// (0x0008c163) frm_month_g4

0xd78d,	// (0x0008c16d) frm_month_g5

0xd797,	// (0x0008c177) frm_month_g6

0xd7a1,	// (0x0008c181) frm_month_g7

0x42fd,	// (0x00082cdd) frm_month_g8

0xd7ab,	// (0x0008c18b) frm_month_g9

0xd7b4,	// (0x0008c194) frm_month_g10

0xd7bd,	// (0x0008c19d) frm_month_g11

0xd7c6,	// (0x0008c1a6) frm_month_g12

0xd7cf,	// (0x0008c1af) frm_month_g13

0xd7d8,	// (0x0008c1b8) frm_month_g14

0xd7e1,	// (0x0008c1c1) frm_month_g15

0xd7ec,	// (0x0008c1cc) frm_month_g16

0x000f,

0xff12,	// (0x0008e8f2) frm_month_g

0xd7f7,	// (0x0008c1d7) cell_top_day_name_pane_t1

0xd806,	// (0x0008c1e6) cell_area_left_week_number_pane_g1

0xd7f7,	// (0x0008c1d7) cell_area_left_week_number_pane_t1

0x19aa,	// (0x0008038a) cell_month_view_pane_g1

0xd80e,	// (0x0008c1ee) cell_month_view_pane_t1

0x01c9,	// (0x0007eba9) main_fps_pane

0x3732,	// (0x00082112) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3732,	// (0x00082112) cmail_ddmenu_btn02_pane_cp1

0x374e,	// (0x0008212e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x374e,	// (0x0008212e) cmail_ddmenu_btn02_pane_cp2

0xd108,	// (0x0008bae8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd108,	// (0x0008bae8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x0008e81c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x0008e81c) cmail_ddmenu_btn02_pane_g

0xd126,	// (0x0008bb06) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd126,	// (0x0008bb06) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x0008e821) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x0008e821) cmail_ddmenu_btn02_pane_t

0xd81d,	// (0x0008c1fd) fps_text_pane_ParamLimits

0xd81d,	// (0x0008c1fd) fps_text_pane

0xd82a,	// (0x0008c20a) main_fps_pane_g1_ParamLimits

0xd82a,	// (0x0008c20a) main_fps_pane_g1

0xd838,	// (0x0008c218) wait_bar_pane_cp010_ParamLimits

0xd838,	// (0x0008c218) wait_bar_pane_cp010

0xd844,	// (0x0008c224) fps_text_pane_t1_ParamLimits

0xd844,	// (0x0008c224) fps_text_pane_t1

0xa869,	// (0x00089249) cam4_image_uncrop_pane_g1

0xa872,	// (0x00089252) cam4_image_uncrop_pane_g2

0xa87b,	// (0x0008925b) cam4_image_uncrop_pane_g3

0xa884,	// (0x00089264) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0008e2e8) cam4_image_uncrop_pane_g

0xd6e1,	// (0x0008c0c1) dia3_listrow_pane_ParamLimits

0x01c9,	// (0x0007eba9) main_phob2_pane

0xcc91,	// (0x0008b671) cell_tport_appsw_pane_cp02_ParamLimits

0xcc91,	// (0x0008b671) cell_tport_appsw_pane_cp02

0xcca0,	// (0x0008b680) cell_tport_appsw_pane_cp03_ParamLimits

0xcca0,	// (0x0008b680) cell_tport_appsw_pane_cp03

0x01c9,	// (0x0007eba9) phob2_contact_card_pane

0x01c9,	// (0x0007eba9) phob2_listscroll_pane

0x4306,	// (0x00082ce6) phob2_list_pane

0x430e,	// (0x00082cee) scroll_pane_cp034

0xd85d,	// (0x0008c23d) phob2_cc_data_pane_ParamLimits

0xd85d,	// (0x0008c23d) phob2_cc_data_pane

0xd877,	// (0x0008c257) phob2_cc_listscroll_pane_ParamLimits

0xd877,	// (0x0008c257) phob2_cc_listscroll_pane

0xd891,	// (0x0008c271) list_double_large_graphic_phob2_pane_ParamLimits

0xd891,	// (0x0008c271) list_double_large_graphic_phob2_pane

0xd8af,	// (0x0008c28f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd8af,	// (0x0008c28f) list_double_large_graphic_phob2_pane_g1

0xd8bc,	// (0x0008c29c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd8bc,	// (0x0008c29c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0008e913) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0008e913) list_double_large_graphic_phob2_pane_g

0xd8c8,	// (0x0008c2a8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd8c8,	// (0x0008c2a8) list_double_large_graphic_phob2_pane_t1

0xd8dd,	// (0x0008c2bd) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd8dd,	// (0x0008c2bd) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0008e918) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0008e918) list_double_large_graphic_phob2_pane_t

0x01c9,	// (0x0007eba9) list_highlight_pane_cp024

0x4316,	// (0x00082cf6) phob2_cc_button_pane

0xd8ef,	// (0x0008c2cf) phob2_cc_data_pane_g1_ParamLimits

0xd8ef,	// (0x0008c2cf) phob2_cc_data_pane_g1

0xd8fb,	// (0x0008c2db) phob2_cc_data_pane_g2_ParamLimits

0xd8fb,	// (0x0008c2db) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0008e91d) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0008e91d) phob2_cc_data_pane_g

0xd907,	// (0x0008c2e7) phob2_cc_data_pane_t1_ParamLimits

0xd907,	// (0x0008c2e7) phob2_cc_data_pane_t1

0xd919,	// (0x0008c2f9) phob2_cc_data_pane_t2_ParamLimits

0xd919,	// (0x0008c2f9) phob2_cc_data_pane_t2

0xd92b,	// (0x0008c30b) phob2_cc_data_pane_t3_ParamLimits

0xd92b,	// (0x0008c30b) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0008e922) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0008e922) phob2_cc_data_pane_t

0x431e,	// (0x00082cfe) phob2_cc_list_pane_ParamLimits

0x431e,	// (0x00082cfe) phob2_cc_list_pane

0x27dc,	// (0x000811bc) scroll_pane_cp035_ParamLimits

0x27dc,	// (0x000811bc) scroll_pane_cp035

0xf0cd,	// (0x0008daad) bg_button_pane_cp033

0x432a,	// (0x00082d0a) phob2_cc_button_pane_g1

0x4336,	// (0x00082d16) phob2_cc_button_pane_t1

0x434b,	// (0x00082d2b) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0008e929) phob2_cc_button_pane_t

0xd93d,	// (0x0008c31d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd93d,	// (0x0008c31d) list_double_large_graphic_phob2_cc_pane

0xd964,	// (0x0008c344) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd964,	// (0x0008c344) list_double_large_graphic_phob2_cc_pane_g1

0xd975,	// (0x0008c355) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd975,	// (0x0008c355) list_double_large_graphic_phob2_cc_pane_g2

0xd984,	// (0x0008c364) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd984,	// (0x0008c364) list_double_large_graphic_phob2_cc_pane_g3

0xd993,	// (0x0008c373) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd993,	// (0x0008c373) list_double_large_graphic_phob2_cc_pane_g4

0xd9a4,	// (0x0008c384) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd9a4,	// (0x0008c384) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0008e92e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0008e92e) list_double_large_graphic_phob2_cc_pane_g

0xd9b3,	// (0x0008c393) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd9b3,	// (0x0008c393) list_double_large_graphic_phob2_cc_pane_t1

0xd9dc,	// (0x0008c3bc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd9dc,	// (0x0008c3bc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0008e939) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0008e939) list_double_large_graphic_phob2_cc_pane_t

0x435d,	// (0x00082d3d) list_highlight_pane_cp025_ParamLimits

0x435d,	// (0x00082d3d) list_highlight_pane_cp025

0xf0cd,	// (0x0008daad) bg_button_pane_cp033_ParamLimits

0x432a,	// (0x00082d0a) phob2_cc_button_pane_g1_ParamLimits

0x4336,	// (0x00082d16) phob2_cc_button_pane_t1_ParamLimits

0x434b,	// (0x00082d2b) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0008e929) phob2_cc_button_pane_t_ParamLimits

0x5ad2,	// (0x000844b2) popup_wgtman_window

0x25ba,	// (0x00080f9a) scroll_pane_cp038

0xd4b6,	// (0x0008be96) wgtman_btn_pane_cp_01_ParamLimits

0xd4b6,	// (0x0008be96) wgtman_btn_pane_cp_01

0x436b,	// (0x00082d4b) wgtman_content_pane

0x4374,	// (0x00082d54) wgtman_heading_pane

0x01c9,	// (0x0007eba9) bg_heading_pane_cp02

0x437d,	// (0x00082d5d) wgtman_heading_pane_g1

0x4385,	// (0x00082d65) wgtman_heading_pane_t1

0x4393,	// (0x00082d73) scroll_pane_cp036

0x439b,	// (0x00082d7b) wgtman_list_pane

0x43a3,	// (0x00082d83) wgtman_list_pane_t1_ParamLimits

0x43a3,	// (0x00082d83) wgtman_list_pane_t1

0xa7c8,	// (0x000891a8) cam4_grid_pane

0xb4e1,	// (0x00089ec1) bg_button_pane_cp015_ParamLimits

0xb4f3,	// (0x00089ed3) bg_button_pane_cp016_ParamLimits

0xb506,	// (0x00089ee6) bg_button_pane_cp017_ParamLimits

0xb55c,	// (0x00089f3c) popup_vitu2_query_window_g3_ParamLimits

0xb55c,	// (0x00089f3c) popup_vitu2_query_window_g3

0xb617,	// (0x00089ff7) popup_vitu2_query_window_t6_ParamLimits

0xb617,	// (0x00089ff7) popup_vitu2_query_window_t6

0xb642,	// (0x0008a022) popup_vitu2_query_window_t7_ParamLimits

0xb642,	// (0x0008a022) popup_vitu2_query_window_t7

0x23e3,	// (0x00080dc3) cam4_grid_pane_g1

0x23ec,	// (0x00080dcc) cam4_grid_pane_g2

0x43c0,	// (0x00082da0) cam4_grid_pane_g3

0x43c9,	// (0x00082da9) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0008e93e) cam4_grid_pane_g

0x684b,	// (0x0008522b) aid_placing_vt_slider_lsc_ParamLimits

0x6b97,	// (0x00085577) vidtel_button_pane_ParamLimits

0x6b97,	// (0x00085577) vidtel_button_pane

0x43d4,	// (0x00082db4) bg_button_pane_cp034

0xda05,	// (0x0008c3e5) vidtel_button_pane_g1

0x43de,	// (0x00082dbe) vidtel_button_pane_t1

0x26fb,	// (0x000810db) aid_size_vtel_slider_touch

0x27dc,	// (0x000811bc) scroll_pane_cp039

0x3191,	// (0x00081b71) ncim_query_button_pane_cp01_ParamLimits

0x31b0,	// (0x00081b90) ncimui_query_pane_g1_ParamLimits

0xf0cd,	// (0x0008daad) input_focus_pane_cp012_ParamLimits

0x31d5,	// (0x00081bb5) ncim_query_entry_pane_t1_ParamLimits

0x27dc,	// (0x000811bc) scroll_pane_cp039_ParamLimits

0x7b3f,	// (0x0008651f) navi_pane_bcale_mc_g1

0x7b47,	// (0x00086527) navi_pane_bcale_mc_t1

0x3797,	// (0x00082177) main_sp_fs_email_pane_g1

0x379f,	// (0x0008217f) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x0008e6da) main_sp_fs_email_pane_g

0x3cc5,	// (0x000826a5) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3cc5,	// (0x000826a5) list_single_cale_mrui_row_pane_g3

0xd14e,	// (0x0008bb2e) list_single_recal_day_pane_g5_event_pane

0x3e8a,	// (0x0008286a) list_single_recal_day_pane_g7

0x43ec,	// (0x00082dcc) list_recal_day_event_pane_cp01

0x43f5,	// (0x00082dd5) list_recal_vselct_arw_lo_pane_cp01

0x43fd,	// (0x00082ddd) list_recal_vselct_arw_up_pane_cp01

0x4405,	// (0x00082de5) list_recal_vselct_pane_cp01

0x2731,	// (0x00081111) list_recal_day_event_pane_cp01_g1

0x440f,	// (0x00082def) list_recal_day_event_pane_cp01_t1

0x3e92,	// (0x00082872) list_single_recal_day_pane_t1_ParamLimits

0x3ea4,	// (0x00082884) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x0008e831) list_single_recal_day_pane_t_ParamLimits

0xe187,	// (0x0008cb67) bg_notes_pane_ParamLimits

0xe195,	// (0x0008cb75) list_notes_pane_ParamLimits

0x5e30,	// (0x00084810) scroll_pane_cp06_ParamLimits

0xe1b7,	// (0x0008cb97) main_notes_pane_ParamLimits

0x01c9,	// (0x0007eba9) main_welc_pane

0xda0d,	// (0x0008c3ed) main_welc_body_pane_ParamLimits

0xda0d,	// (0x0008c3ed) main_welc_body_pane

0xda1c,	// (0x0008c3fc) main_welc_opti_pane_ParamLimits

0xda1c,	// (0x0008c3fc) main_welc_opti_pane

0xda2b,	// (0x0008c40b) main_welc_pane_t1_ParamLimits

0xda2b,	// (0x0008c40b) main_welc_pane_t1

0xda3d,	// (0x0008c41d) main_welc_body_row_pane_ParamLimits

0xda3d,	// (0x0008c41d) main_welc_body_row_pane

0xda65,	// (0x0008c445) main_welc_opti_row_pane_ParamLimits

0xda65,	// (0x0008c445) main_welc_opti_row_pane

0x441d,	// (0x00082dfd) main_welc_opti_row_pane_g1

0x4425,	// (0x00082e05) main_welc_opti_row_pane_t1

0x4434,	// (0x00082e14) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
