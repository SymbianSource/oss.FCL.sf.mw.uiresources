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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00043289 };

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
0x10f2,	// (0x0004437b) Screen

0x10fe,	// (0x00044387) application_window

0x113a,	// (0x000443c3) area_bottom_pane_ParamLimits

0x113a,	// (0x000443c3) area_bottom_pane

0x1173,	// (0x000443fc) area_top_pane_ParamLimits

0x1173,	// (0x000443fc) area_top_pane

0xa891,	// (0x0004db1a) call_video_uplink_pane_ParamLimits

0xa891,	// (0x0004db1a) call_video_uplink_pane

0x1201,	// (0x0004448a) main_pane_ParamLimits

0x1201,	// (0x0004448a) main_pane

0xe49e,	// (0x00051727) context_pane

0x43c4,	// (0x0004764d) navi_pane

0x43fb,	// (0x00047684) popup_cale_events_window_ParamLimits

0x43fb,	// (0x00047684) popup_cale_events_window

0xe4b1,	// (0x0005173a) popup_mup_playback_window

0x4413,	// (0x0004769c) signal_pane

0xb06f,	// (0x0004e2f8) main_browser_pane

0xc7a5,	// (0x0004fa2e) main_burst_pane

0x40dc,	// (0x00047365) main_calc_pane

0xe492,	// (0x0005171b) main_cale_day_pane

0x16f8,	// (0x00044981) main_cale_month_pane

0xe492,	// (0x0005171b) main_cale_week_pane

0xc7a5,	// (0x0004fa2e) main_call_pane

0xad05,	// (0x0004df8e) main_call_poc_pane

0xc7a5,	// (0x0004fa2e) main_camera_pane

0xc7a5,	// (0x0004fa2e) main_chi_dic_pane

0xcfd3,	// (0x0005025c) main_clock_pane

0xad05,	// (0x0004df8e) main_fmradio_pane

0xc7a5,	// (0x0004fa2e) main_graph_messa_pane

0xad05,	// (0x0004df8e) main_help_pane

0xb06f,	// (0x0004e2f8) main_im_pane

0xaf60,	// (0x0004e1e9) main_image_pane_ParamLimits

0xaf60,	// (0x0004e1e9) main_image_pane

0xad05,	// (0x0004df8e) main_location2_pane

0xc7a5,	// (0x0004fa2e) main_location_pane

0xaf60,	// (0x0004e1e9) main_messa_pane

0xad05,	// (0x0004df8e) main_mp2_pane

0xc7a5,	// (0x0004fa2e) main_mp_pane

0xad05,	// (0x0004df8e) main_msg_pane

0xad05,	// (0x0004df8e) main_mup_eq_pane

0xad05,	// (0x0004df8e) main_mup_pane

0xb06f,	// (0x0004e2f8) main_notes_pane

0xad05,	// (0x0004df8e) main_pec_pane

0xad05,	// (0x0004df8e) main_phob_pane

0xad05,	// (0x0004df8e) main_pinb_pane

0xad05,	// (0x0004df8e) main_postcard_pane

0xad05,	// (0x0004df8e) main_qdial_pane

0xc7a5,	// (0x0004fa2e) main_skin_pane

0xad05,	// (0x0004df8e) main_smil2_pane

0xc7a5,	// (0x0004fa2e) main_smil_pane

0xc7a5,	// (0x0004fa2e) main_video_pane

0xc7a5,	// (0x0004fa2e) main_video_tele_pane

0xaf60,	// (0x0004e1e9) main_viewer_pane_ParamLimits

0xaf60,	// (0x0004e1e9) main_viewer_pane

0xc7a5,	// (0x0004fa2e) main_vorec_pane

0x4132,	// (0x000473bb) popup_blid_sat_info_window_ParamLimits

0x4132,	// (0x000473bb) popup_blid_sat_info_window

0x4196,	// (0x0004741f) popup_dyc_status_message_window_ParamLimits

0x4196,	// (0x0004741f) popup_dyc_status_message_window

0x41b0,	// (0x00047439) popup_grid_large_graphic_window_ParamLimits

0x41b0,	// (0x00047439) popup_grid_large_graphic_window

0x4272,	// (0x000474fb) popup_loc_request_window_ParamLimits

0x4272,	// (0x000474fb) popup_loc_request_window

0x4398,	// (0x00047621) popup_wml_address_window_ParamLimits

0x4398,	// (0x00047621) popup_wml_address_window

0x3f1a,	// (0x000471a3) call_muted_g1

0x3b68,	// (0x00046df1) popup_call_audio_conf_window_ParamLimits

0x3b68,	// (0x00046df1) popup_call_audio_conf_window

0x3f2a,	// (0x000471b3) popup_call_audio_first_window_ParamLimits

0x3f2a,	// (0x000471b3) popup_call_audio_first_window

0x3fa0,	// (0x00047229) popup_call_audio_in_window_ParamLimits

0x3fa0,	// (0x00047229) popup_call_audio_in_window

0x3fdc,	// (0x00047265) popup_call_audio_out_window_ParamLimits

0x3fdc,	// (0x00047265) popup_call_audio_out_window

0x4016,	// (0x0004729f) popup_call_audio_second_window_ParamLimits

0x4016,	// (0x0004729f) popup_call_audio_second_window

0x406c,	// (0x000472f5) popup_call_audio_wait_window_ParamLimits

0x406c,	// (0x000472f5) popup_call_audio_wait_window

0x40a1,	// (0x0004732a) popup_number_entry_window_ParamLimits

0x40a1,	// (0x0004732a) popup_number_entry_window

0xa8bd,	// (0x0004db46) bg_popup_call_pane_cp05_ParamLimits

0xa8bd,	// (0x0004db46) bg_popup_call_pane_cp05

0xa8dd,	// (0x0004db66) popup_number_entry_window_t1

0xa8f0,	// (0x0004db79) popup_number_entry_window_t2

0xa902,	// (0x0004db8b) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000522f4) popup_number_entry_window_t

0xa949,	// (0x0004dbd2) text_title_cp2

0xa95c,	// (0x0004dbe5) bg_popup_call_pane_cp_ParamLimits

0xa95c,	// (0x0004dbe5) bg_popup_call_pane_cp

0xa96a,	// (0x0004dbf3) call_thumbnail_pane

0xa972,	// (0x0004dbfb) popup_call_audio_in_window_g1_ParamLimits

0xa972,	// (0x0004dbfb) popup_call_audio_in_window_g1

0xa97e,	// (0x0004dc07) popup_call_audio_in_window_g2_ParamLimits

0xa97e,	// (0x0004dc07) popup_call_audio_in_window_g2

0xa98a,	// (0x0004dc13) popup_call_audio_in_window_g3_ParamLimits

0xa98a,	// (0x0004dc13) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x000522fd) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x000522fd) popup_call_audio_in_window_g

0xa996,	// (0x0004dc1f) popup_call_audio_in_window_t1_ParamLimits

0xa996,	// (0x0004dc1f) popup_call_audio_in_window_t1

0xa9b2,	// (0x0004dc3b) popup_call_audio_in_window_t2_ParamLimits

0xa9b2,	// (0x0004dc3b) popup_call_audio_in_window_t2

0xa9ce,	// (0x0004dc57) popup_call_audio_in_window_t3_ParamLimits

0xa9ce,	// (0x0004dc57) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x00052304) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x00052304) popup_call_audio_in_window_t

0xa95c,	// (0x0004dbe5) bg_popup_call_pane_cp01_ParamLimits

0xa95c,	// (0x0004dbe5) bg_popup_call_pane_cp01

0xa96a,	// (0x0004dbf3) call_thumbnail_pane_cp02

0xa9e1,	// (0x0004dc6a) call_type_pane_cp022

0xa9e9,	// (0x0004dc72) popup_call_audio_out_window_g1_ParamLimits

0xa9e9,	// (0x0004dc72) popup_call_audio_out_window_g1

0xa9fb,	// (0x0004dc84) popup_call_audio_out_window_g2_ParamLimits

0xa9fb,	// (0x0004dc84) popup_call_audio_out_window_g2

0xaa07,	// (0x0004dc90) popup_call_audio_out_window_g3_ParamLimits

0xaa07,	// (0x0004dc90) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0005230b) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0005230b) popup_call_audio_out_window_g

0xaa19,	// (0x0004dca2) popup_call_audio_out_window_t1_ParamLimits

0xaa19,	// (0x0004dca2) popup_call_audio_out_window_t1

0xaa31,	// (0x0004dcba) popup_call_audio_out_window_t2_ParamLimits

0xaa31,	// (0x0004dcba) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x00052312) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x00052312) popup_call_audio_out_window_t

0xaa46,	// (0x0004dccf) bg_popup_call_pane_ParamLimits

0xaa46,	// (0x0004dccf) bg_popup_call_pane

0x1388,	// (0x00044611) call_thumbnail_pane_cp_ParamLimits

0x1388,	// (0x00044611) call_thumbnail_pane_cp

0xaaca,	// (0x0004dd53) call_type_pane_cp01_ParamLimits

0xaaca,	// (0x0004dd53) call_type_pane_cp01

0xab0e,	// (0x0004dd97) popup_call_audio_first_window_g1_ParamLimits

0xab0e,	// (0x0004dd97) popup_call_audio_first_window_g1

0xab5a,	// (0x0004dde3) popup_call_audio_first_window_g2_ParamLimits

0xab5a,	// (0x0004dde3) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00052317) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00052317) popup_call_audio_first_window_g

0xab9e,	// (0x0004de27) popup_call_audio_first_window_t1_ParamLimits

0xab9e,	// (0x0004de27) popup_call_audio_first_window_t1

0xac4a,	// (0x0004ded3) popup_call_audio_first_window_t4_ParamLimits

0xac4a,	// (0x0004ded3) popup_call_audio_first_window_t4

0xacd6,	// (0x0004df5f) popup_call_audio_first_window_t5_ParamLimits

0xacd6,	// (0x0004df5f) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0005231c) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0005231c) popup_call_audio_first_window_t

0xad05,	// (0x0004df8e) bg_popup_call_pane_cp02

0xad0f,	// (0x0004df98) call_type_pane_cp023

0xad17,	// (0x0004dfa0) popup_call_audio_wait_window_g1

0xad1f,	// (0x0004dfa8) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00052323) popup_call_audio_wait_window_g

0xad27,	// (0x0004dfb0) popup_call_audio_wait_window_t3

0xad35,	// (0x0004dfbe) bg_popup_call_pane_cp03_ParamLimits

0xad35,	// (0x0004dfbe) bg_popup_call_pane_cp03

0xad95,	// (0x0004e01e) call_thumbnail_pane_cp011_ParamLimits

0xad95,	// (0x0004e01e) call_thumbnail_pane_cp011

0xada1,	// (0x0004e02a) call_type_pane_cp034_ParamLimits

0xada1,	// (0x0004e02a) call_type_pane_cp034

0xaddd,	// (0x0004e066) popup_call_audio_second_window_g1_ParamLimits

0xaddd,	// (0x0004e066) popup_call_audio_second_window_g1

0xae19,	// (0x0004e0a2) popup_call_audio_second_window_g2_ParamLimits

0xae19,	// (0x0004e0a2) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00052328) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00052328) popup_call_audio_second_window_g

0xae55,	// (0x0004e0de) popup_call_audio_second_window_t1_ParamLimits

0xae55,	// (0x0004e0de) popup_call_audio_second_window_t1

0xaed6,	// (0x0004e15f) popup_call_audio_second_window_t2_ParamLimits

0xaed6,	// (0x0004e15f) popup_call_audio_second_window_t2

0xaf0c,	// (0x0004e195) popup_call_audio_second_window_t3_ParamLimits

0xaf0c,	// (0x0004e195) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0005232d) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0005232d) popup_call_audio_second_window_t

0xad05,	// (0x0004df8e) bg_popup_call_pane_cp04

0xaf42,	// (0x0004e1cb) list_conf_pane

0xaf4a,	// (0x0004e1d3) popup_call_audio_conf_window_t1

0xaf58,	// (0x0004e1e1) call_thumbnail_pane_g1

0xaf60,	// (0x0004e1e9) bg_pinb_pane_ParamLimits

0xaf60,	// (0x0004e1e9) bg_pinb_pane

0xaf6e,	// (0x0004e1f7) find_pinb_pane

0xaf60,	// (0x0004e1e9) listscroll_pinb_pane_ParamLimits

0xaf60,	// (0x0004e1e9) listscroll_pinb_pane

0xaf78,	// (0x0004e201) pinb_bg_pane_g1

0xaf78,	// (0x0004e201) pinb_bg_pane_g2

0xaf78,	// (0x0004e201) pinb_bg_pane_g3

0xaf78,	// (0x0004e201) pinb_bg_pane_g4

0xaf78,	// (0x0004e201) pinb_bg_pane_g5

0xaf78,	// (0x0004e201) pinb_bg_pane_g6

0xaf78,	// (0x0004e201) pinb_bg_pane_g7

0xaf78,	// (0x0004e201) pinb_bg_pane_g8

0xaf78,	// (0x0004e201) pinb_bg_pane_g9

0xaf78,	// (0x0004e201) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00052334) pinb_bg_pane_g

0xa832,	// (0x0004dabb) grid_pinb_pane

0xa832,	// (0x0004dabb) list_pinb_pane

0xa8af,	// (0x0004db38) scroll_pane_cp01_ParamLimits

0xa8af,	// (0x0004db38) scroll_pane_cp01

0xaf82,	// (0x0004e20b) find_pinb_pane_g1_ParamLimits

0xaf82,	// (0x0004e20b) find_pinb_pane_g1

0xaf9a,	// (0x0004e223) find_pinb_pane_t1

0xafac,	// (0x0004e235) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0005234e) find_pinb_pane_t

0xafc1,	// (0x0004e24a) input_focus_pane_cp01_ParamLimits

0xafc1,	// (0x0004e24a) input_focus_pane_cp01

0xafcd,	// (0x0004e256) cell_pinb_pane_ParamLimits

0xafcd,	// (0x0004e256) cell_pinb_pane

0xafdb,	// (0x0004e264) cell_pinb_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) cell_pinb_pane_g1

0xafe9,	// (0x0004e272) cell_pinb_pane_g2_ParamLimits

0xafe9,	// (0x0004e272) cell_pinb_pane_g2

0xafe9,	// (0x0004e272) cell_pinb_pane_g3_ParamLimits

0xafe9,	// (0x0004e272) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00052353) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00052353) cell_pinb_pane_g

0xad05,	// (0x0004df8e) grid_highlight_pane_cp01

0xafcd,	// (0x0004e256) list_pinb_item_pane_ParamLimits

0xafcd,	// (0x0004e256) list_pinb_item_pane

0xa832,	// (0x0004dabb) list_highlight_pane_cp02

0xaff7,	// (0x0004e280) list_pinb_item_pane_g1_ParamLimits

0xaff7,	// (0x0004e280) list_pinb_item_pane_g1

0xafe9,	// (0x0004e272) list_pinb_item_pane_g2_ParamLimits

0xafe9,	// (0x0004e272) list_pinb_item_pane_g2

0xafdb,	// (0x0004e264) list_pinb_item_pane_g3_ParamLimits

0xafdb,	// (0x0004e264) list_pinb_item_pane_g3

0xafe9,	// (0x0004e272) list_pinb_item_pane_g4_ParamLimits

0xafe9,	// (0x0004e272) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0005235a) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0005235a) list_pinb_item_pane_g

0xb005,	// (0x0004e28e) list_pinb_item_pane_t1_ParamLimits

0xb005,	// (0x0004e28e) list_pinb_item_pane_t1

0x13cc,	// (0x00044655) calc_display_pane

0x13f1,	// (0x0004467a) calc_paper_pane

0x1414,	// (0x0004469d) grid_calc_pane

0xad05,	// (0x0004df8e) bg_list_pane_cp01

0x1442,	// (0x000446cb) clock_g1

0x144a,	// (0x000446d3) clock_g2

0x0001,

0xf0da,	// (0x00052363) clock_g

0x1452,	// (0x000446db) clock_t1_ParamLimits

0x1452,	// (0x000446db) clock_t1

0x1467,	// (0x000446f0) clock_t2_ParamLimits

0x1467,	// (0x000446f0) clock_t2

0x1479,	// (0x00044702) clock_t3_ParamLimits

0x1479,	// (0x00044702) clock_t3

0x148b,	// (0x00044714) clock_t4_ParamLimits

0x148b,	// (0x00044714) clock_t4

0x149d,	// (0x00044726) clock_t5_ParamLimits

0x149d,	// (0x00044726) clock_t5

0x14b2,	// (0x0004473b) clock_t6_ParamLimits

0x14b2,	// (0x0004473b) clock_t6

0x14c4,	// (0x0004474d) clock_t7_ParamLimits

0x14c4,	// (0x0004474d) clock_t7

0x14d6,	// (0x0004475f) clock_t8_ParamLimits

0x14d6,	// (0x0004475f) clock_t8

0x14ea,	// (0x00044773) clock_t9_ParamLimits

0x14ea,	// (0x00044773) clock_t9

0x0008,

0xf0df,	// (0x00052368) clock_t_ParamLimits

0xf0df,	// (0x00052368) clock_t

0xb021,	// (0x0004e2aa) popup_clock_analogue_window_cp02

0xb021,	// (0x0004e2aa) popup_clock_digital_window_cp01

0xad05,	// (0x0004df8e) listscroll_help_pane

0xad05,	// (0x0004df8e) phob_pre_status_pane

0xb029,	// (0x0004e2b2) grid_qdial_pane

0x1500,	// (0x00044789) listscroll_mce_pane

0xaf60,	// (0x0004e1e9) bg_notes_pane

0xb033,	// (0x0004e2bc) list_notes_pane

0x151c,	// (0x000447a5) scroll_pane_cp06

0xb041,	// (0x0004e2ca) bg_calc_paper_pane

0xb055,	// (0x0004e2de) list_calc_pane

0xb06f,	// (0x0004e2f8) bg_calc_display_pane

0x1530,	// (0x000447b9) calc_display_pane_t1

0x1542,	// (0x000447cb) calc_display_pane_t2

0xb07b,	// (0x0004e304) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0005237b) calc_display_pane_t

0x1554,	// (0x000447dd) cell_calc_pane_ParamLimits

0x1554,	// (0x000447dd) cell_calc_pane

0xb08d,	// (0x0004e316) bg_calc_paper_pane_g1

0xb099,	// (0x0004e322) bg_calc_paper_pane_g2

0xb0a5,	// (0x0004e32e) bg_calc_paper_pane_g3

0xb0b1,	// (0x0004e33a) bg_calc_paper_pane_g4

0xb0bd,	// (0x0004e346) bg_calc_paper_pane_g5

0x158f,	// (0x00044818) bg_calc_paper_pane_g6

0x159d,	// (0x00044826) bg_calc_paper_pane_g7

0x15ab,	// (0x00044834) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00052382) bg_calc_paper_pane_g

0x15be,	// (0x00044847) calc_bg_paper_pane_g9

0x15d1,	// (0x0004485a) list_calc_item_pane_ParamLimits

0x15d1,	// (0x0004485a) list_calc_item_pane

0xb0c9,	// (0x0004e352) list_calc_item_pane_g1

0xb0d6,	// (0x0004e35f) list_calc_item_pane_t1_ParamLimits

0xb0d6,	// (0x0004e35f) list_calc_item_pane_t1

0x15e9,	// (0x00044872) list_calc_item_pane_t2_ParamLimits

0x15e9,	// (0x00044872) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00052393) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00052393) list_calc_item_pane_t

0xaf78,	// (0x0004e201) cell_calc_pane_g1

0xb0e8,	// (0x0004e371) grid_highlight_pane_cp02

0xb10a,	// (0x0004e393) bg_calc_display_pane_g1

0x161b,	// (0x000448a4) bg_calc_display_pane_g2

0x1625,	// (0x000448ae) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0005239d) bg_calc_display_pane_g

0x162e,	// (0x000448b7) cell_qdial_pane_ParamLimits

0x162e,	// (0x000448b7) cell_qdial_pane

0x1642,	// (0x000448cb) cell_qdial_pane_g1_ParamLimits

0x1642,	// (0x000448cb) cell_qdial_pane_g1

0x1658,	// (0x000448e1) cell_qdial_pane_g2_ParamLimits

0x1658,	// (0x000448e1) cell_qdial_pane_g2

0xb113,	// (0x0004e39c) cell_qdial_pane_g3_ParamLimits

0xb113,	// (0x0004e39c) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x000523a4) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x000523a4) cell_qdial_pane_g

0x167f,	// (0x00044908) cell_qdial_pane_t1_ParamLimits

0x167f,	// (0x00044908) cell_qdial_pane_t1

0x1697,	// (0x00044920) cell_qdial_pane_t2_ParamLimits

0x1697,	// (0x00044920) cell_qdial_pane_t2

0x16aa,	// (0x00044933) cell_qdial_pane_t3_ParamLimits

0x16aa,	// (0x00044933) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x000523ad) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x000523ad) cell_qdial_pane_t

0xad05,	// (0x0004df8e) grid_highlight_pane_cp04

0xb11f,	// (0x0004e3a8) thumbnail_qdial_pane_ParamLimits

0xb11f,	// (0x0004e3a8) thumbnail_qdial_pane

0xb17b,	// (0x0004e404) list_help_pane

0xb184,	// (0x0004e40d) scroll_pane_cp02

0x16bd,	// (0x00044946) help_list_pane_t1_ParamLimits

0x16bd,	// (0x00044946) help_list_pane_t1

0xb18d,	// (0x0004e416) bg_notes_pane_g2

0xb195,	// (0x0004e41e) bg_notes_pane_g3

0xb19d,	// (0x0004e426) notes_bg_pane_g1

0xb1a5,	// (0x0004e42e) notes_bg_pane_g4

0xb1ad,	// (0x0004e436) notes_bg_pane_g5

0xb1b5,	// (0x0004e43e) notes_bg_pane_g6

0xb1bd,	// (0x0004e446) notes_bg_pane_g7

0xb1c5,	// (0x0004e44e) notes_bg_pane_g8

0xb1cd,	// (0x0004e456) notes_bg_pane_g9

0x0006,

0xf142,	// (0x000523cb) notes_bg_pane_g

0x16e1,	// (0x0004496a) list_notes_text_pane_ParamLimits

0x16e1,	// (0x0004496a) list_notes_text_pane

0xc6f8,	// (0x0004f981) list_notes_text_pane_g1

0x0798,	// (0x00043a21) list_notes_text_pane_t1

0x16f8,	// (0x00044981) listscroll_cale_week_pane

0x1722,	// (0x000449ab) bg_cale_heading_pane

0x1746,	// (0x000449cf) bg_cale_pane_cp01

0x1763,	// (0x000449ec) cale_week_corner_pane

0x1782,	// (0x00044a0b) cale_week_day_heading_pane

0x17ab,	// (0x00044a34) cale_week_scroll_pane_g1

0x17ca,	// (0x00044a53) cale_week_scroll_pane_g2

0x17e2,	// (0x00044a6b) cale_week_scroll_pane_g3

0x17fa,	// (0x00044a83) cale_week_scroll_pane_g4

0x1812,	// (0x00044a9b) cale_week_scroll_pane_g5

0x1832,	// (0x00044abb) cale_week_scroll_pane_g6

0x1852,	// (0x00044adb) cale_week_scroll_pane_g7

0x1876,	// (0x00044aff) cale_week_scroll_pane_g8

0x189a,	// (0x00044b23) cale_week_scroll_pane_g9

0x18b2,	// (0x00044b3b) cale_week_scroll_pane_g10

0x18ca,	// (0x00044b53) cale_week_scroll_pane_g11

0x18e2,	// (0x00044b6b) cale_week_scroll_pane_g12

0x1906,	// (0x00044b8f) cale_week_scroll_pane_g13

0x1906,	// (0x00044b8f) cale_week_scroll_pane_g14

0x1906,	// (0x00044b8f) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x000523da) cale_week_scroll_pane_g

0x194e,	// (0x00044bd7) cale_week_time_pane

0x1972,	// (0x00044bfb) grid_cale_week_pane

0xc72d,	// (0x0004f9b6) scroll_pane_cp08

0x19a4,	// (0x00044c2d) cell_cale_week_pane_ParamLimits

0x19a4,	// (0x00044c2d) cell_cale_week_pane

0x1a40,	// (0x00044cc9) cale_week_day_heading_pane_t1

0x1a6a,	// (0x00044cf3) cale_week_day_heading_pane_t2

0x1a99,	// (0x00044d22) cale_week_day_heading_pane_t3

0x1ac8,	// (0x00044d51) cale_week_day_heading_pane_t4

0x1af7,	// (0x00044d80) cale_week_day_heading_pane_t5

0x1b2a,	// (0x00044db3) cale_week_day_heading_pane_t6

0x1b61,	// (0x00044dea) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x000523fb) cale_week_day_heading_pane_t

0xc74a,	// (0x0004f9d3) bg_cale_side_pane

0x1b8b,	// (0x00044e14) cale_week_time_pane_t1

0x1ba5,	// (0x00044e2e) cale_week_time_pane_t2

0x1bbf,	// (0x00044e48) cale_week_time_pane_t3

0x1bd9,	// (0x00044e62) cale_week_time_pane_t4

0x1bf3,	// (0x00044e7c) cale_week_time_pane_t5

0x1c0d,	// (0x00044e96) cale_week_time_pane_t6

0x1c2d,	// (0x00044eb6) cale_week_time_pane_t7

0x1c53,	// (0x00044edc) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0005240a) cale_week_time_pane_t

0x1c79,	// (0x00044f02) cell_cale_week_pane_g2

0x1c9d,	// (0x00044f26) cell_cale_week_pane_g3_ParamLimits

0x1c9d,	// (0x00044f26) cell_cale_week_pane_g3

0xc758,	// (0x0004f9e1) grid_highlight_pane_cp07

0xc760,	// (0x0004f9e9) listscroll_gms_pane

0xc76a,	// (0x0004f9f3) grid_gms_pane

0xc773,	// (0x0004f9fc) listscroll_gms_pane_g1

0xc77b,	// (0x0004fa04) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0005241b) listscroll_gms_pane_g

0x1cb5,	// (0x00044f3e) scroll_pane_cp010

0x1cc0,	// (0x00044f49) cell_gms_pane_ParamLimits

0x1cc0,	// (0x00044f49) cell_gms_pane

0x1cd7,	// (0x00044f60) cell_gms_pane_g1

0xc783,	// (0x0004fa0c) cell_gms_pane_g2

0xc78b,	// (0x0004fa14) cell_gms_pane_g3

0xc794,	// (0x0004fa1d) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00052420) cell_gms_pane_g

0xc79d,	// (0x0004fa26) grid_highlight_pane_cp09

0x3e9e,	// (0x00047127) phob_pre_status_pane_g1

0x3ea6,	// (0x0004712f) phob_pre_status_pane_g2

0x3eae,	// (0x00047137) phob_pre_status_pane_g3

0x3eb6,	// (0x0004713f) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x000527e4) phob_pre_status_pane_g

0x3ec6,	// (0x0004714f) phob_pre_status_pane_t1

0x3ed6,	// (0x0004715f) phob_pre_status_pane_t2

0x3ee6,	// (0x0004716f) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x000527ef) phob_pre_status_pane_t

0xc7a5,	// (0x0004fa2e) bg_list_pane_cp05

0x1ce7,	// (0x00044f70) grid_vorec_pane

0x1cf1,	// (0x00044f7a) vorec_t1

0x1cff,	// (0x00044f88) vorec_t2

0x1d0d,	// (0x00044f96) vorec_t3

0x1d1b,	// (0x00044fa4) vorec_t4

0xa2a8,	// (0x0004d531) vorec_t5

0xa2b6,	// (0x0004d53f) vorec_t6

0x0004,

0xf1a0,	// (0x00052429) vorec_t

0xa2c4,	// (0x0004d54d) wait_bar_pane_cp01

0xce01,	// (0x0005008a) cell_vorec_pane_ParamLimits

0xce01,	// (0x0005008a) cell_vorec_pane

0xb1d5,	// (0x0004e45e) cell_vorec_pane_g1

0xad05,	// (0x0004df8e) grid_highlight_pane_cp05

0xa8af,	// (0x0004db38) cams_zoom_pane

0xa8af,	// (0x0004db38) image_vga_pane

0xafdb,	// (0x0004e264) main_camera_pane_g1

0xafdb,	// (0x0004e264) main_camera_pane_g2

0xafdb,	// (0x0004e264) main_camera_pane_g3

0xafdb,	// (0x0004e264) main_camera_pane_g4

0xafdb,	// (0x0004e264) main_camera_pane_g5

0xafdb,	// (0x0004e264) main_camera_pane_g6

0xafdb,	// (0x0004e264) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00052434) main_camera_pane_g

0xc7ad,	// (0x0004fa36) main_camera_pane_t1

0xc7ad,	// (0x0004fa36) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00052445) main_camera_pane_t

0x1d4b,	// (0x00044fd4) cams_zoom_pane_cp_ParamLimits

0x1d4b,	// (0x00044fd4) cams_zoom_pane_cp

0x1d7f,	// (0x00045008) image_cif_pane_ParamLimits

0x1d7f,	// (0x00045008) image_cif_pane

0xa832,	// (0x0004dabb) image_subqcif_pane

0x1d91,	// (0x0004501a) main_video_pane_g1_ParamLimits

0x1d91,	// (0x0004501a) main_video_pane_g1

0x1dbf,	// (0x00045048) main_video_pane_g2_ParamLimits

0x1dbf,	// (0x00045048) main_video_pane_g2

0x1df9,	// (0x00045082) main_video_pane_g3_ParamLimits

0x1df9,	// (0x00045082) main_video_pane_g3

0x1df9,	// (0x00045082) main_video_pane_g4_ParamLimits

0x1df9,	// (0x00045082) main_video_pane_g4

0x1e2d,	// (0x000450b6) main_video_pane_g5_ParamLimits

0x1e2d,	// (0x000450b6) main_video_pane_g5

0xc7c1,	// (0x0004fa4a) main_video_pane_g6_ParamLimits

0xc7c1,	// (0x0004fa4a) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0005244a) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0005244a) main_video_pane_g

0x1e49,	// (0x000450d2) main_video_pane_t1_ParamLimits

0x1e49,	// (0x000450d2) main_video_pane_t1

0xc7db,	// (0x0004fa64) cams_zoom_pane_g1

0xc7db,	// (0x0004fa64) cams_zoom_pane_g2

0xc7db,	// (0x0004fa64) cams_zoom_pane_g3

0xc7db,	// (0x0004fa64) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00052459) cams_zoom_pane_g

0x1ea1,	// (0x0004512a) grid_cams_pane

0x1ebb,	// (0x00045144) linegrid_cams_pane

0x1ecd,	// (0x00045156) cell_cams_pane_ParamLimits

0x1ecd,	// (0x00045156) cell_cams_pane

0xc7e5,	// (0x0004fa6e) cams_burst_image_pane

0xc7ed,	// (0x0004fa76) cell_cams_pane_g1

0xad05,	// (0x0004df8e) grid_highlight_pane_cp03

0xaf78,	// (0x0004e201) mp_bg_pane_g1

0xa832,	// (0x0004dabb) bg_list_pane_cp03

0xa832,	// (0x0004dabb) bg_mp_pane

0xa832,	// (0x0004dabb) grid_mp_pane

0xc7db,	// (0x0004fa64) media_player_g1

0xcd30,	// (0x0004ffb9) media_player_t1

0xcd30,	// (0x0004ffb9) media_player_t2

0xcd30,	// (0x0004ffb9) media_player_t3

0xcd30,	// (0x0004ffb9) media_player_t4

0xcd30,	// (0x0004ffb9) media_player_t5

0xcd30,	// (0x0004ffb9) media_player_t6

0xcd30,	// (0x0004ffb9) media_player_t7

0x0006,

0xf545,	// (0x000527ce) media_player_t

0xa832,	// (0x0004dabb) wait_bar_pane_cp02

0xf52a,	// (0x000527b3) main_usb_pane_t

0xcfd3,	// (0x0005025c) cell_mp_pane

0xaf78,	// (0x0004e201) cell_mp_pane_g1

0xad05,	// (0x0004df8e) grid_highlight_pane_cp06

0xc7f5,	// (0x0004fa7e) grid_skin_colour_pane

0xc7fd,	// (0x0004fa86) list_highlight_pane_cp03

0x1eef,	// (0x00045178) skin_g1

0xc805,	// (0x0004fa8e) skin_t1

0xc814,	// (0x0004fa9d) skin_t2

0x0001,

0xf1fe,	// (0x00052487) skin_t

0x1ef9,	// (0x00045182) cell_skin_colour_pane_ParamLimits

0x1ef9,	// (0x00045182) cell_skin_colour_pane

0xc822,	// (0x0004faab) cell_skin_colour_pane_g1

0x1f6c,	// (0x000451f5) call_video_g1_ParamLimits

0x1f6c,	// (0x000451f5) call_video_g1

0x1f88,	// (0x00045211) call_video_g2_ParamLimits

0x1f88,	// (0x00045211) call_video_g2

0x0001,

0xf203,	// (0x0005248c) call_video_g_ParamLimits

0xf203,	// (0x0005248c) call_video_g

0x1fcd,	// (0x00045256) call_video_uplink_pane_cp1_ParamLimits

0x1fcd,	// (0x00045256) call_video_uplink_pane_cp1

0xc834,	// (0x0004fabd) call_video_uplink_pane_cp2

0x206e,	// (0x000452f7) video_down_crop_pane_ParamLimits

0x206e,	// (0x000452f7) video_down_crop_pane

0x2157,	// (0x000453e0) video_down_pane_ParamLimits

0x2157,	// (0x000453e0) video_down_pane

0xc83c,	// (0x0004fac5) video_down_subqcif_pane_ParamLimits

0xc83c,	// (0x0004fac5) video_down_subqcif_pane

0xc856,	// (0x0004fadf) video_down_subqcif_pane_cp_ParamLimits

0xc856,	// (0x0004fadf) video_down_subqcif_pane_cp

0xc87e,	// (0x0004fb07) im_reading_pane_ParamLimits

0xc87e,	// (0x0004fb07) im_reading_pane

0x2262,	// (0x000454eb) im_writing_pane_ParamLimits

0x2262,	// (0x000454eb) im_writing_pane

0x2280,	// (0x00045509) im_reading_pane_t1

0xc898,	// (0x0004fb21) list_im_pane

0xc8a9,	// (0x0004fb32) scroll_pane_cp07

0x22bf,	// (0x00045548) im_writing_pane_t1_ParamLimits

0x22bf,	// (0x00045548) im_writing_pane_t1

0xc8c2,	// (0x0004fb4b) im_writing_pane_t2_ParamLimits

0xc8c2,	// (0x0004fb4b) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00052496) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00052496) im_writing_pane_t

0xad05,	// (0x0004df8e) input_focus_pane_cp04

0xad05,	// (0x0004df8e) input_focus_pane_cp05

0x22d4,	// (0x0004555d) list_im_single_pane_ParamLimits

0x22d4,	// (0x0004555d) list_im_single_pane

0x22ed,	// (0x00045576) list_single_im_pane_t1

0xc7a5,	// (0x0004fa2e) blid_accuracy_pane

0xc7a5,	// (0x0004fa2e) blid_compass_pane

0xe44a,	// (0x000516d3) main_location_t1

0xe44a,	// (0x000516d3) main_location_t2

0xe44a,	// (0x000516d3) main_location_t3

0x0002,

0xf554,	// (0x000527dd) main_location_t

0xad05,	// (0x0004df8e) aid_levels_location

0xaf78,	// (0x0004e201) blid_accuracy_pane_g1

0xaf78,	// (0x0004e201) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x000524e5) blid_accuracy_pane_g

0xc90a,	// (0x0004fb93) wml_content_pane

0xc948,	// (0x0004fbd1) wml_button_pane_ParamLimits

0xc948,	// (0x0004fbd1) wml_button_pane

0x22fc,	// (0x00045585) wml_list_single_large_pane_ParamLimits

0x22fc,	// (0x00045585) wml_list_single_large_pane

0x2315,	// (0x0004559e) wml_list_single_medium_pane_ParamLimits

0x2315,	// (0x0004559e) wml_list_single_medium_pane

0x232f,	// (0x000455b8) wml_list_single_small_pane_ParamLimits

0x232f,	// (0x000455b8) wml_list_single_small_pane

0xc95c,	// (0x0004fbe5) wml_selection_box_pane_ParamLimits

0xc95c,	// (0x0004fbe5) wml_selection_box_pane

0xc96f,	// (0x0004fbf8) wml_list_single_pane_t1

0xc97e,	// (0x0004fc07) wml_list_single_medium_pane_t1

0xc98d,	// (0x0004fc16) wml_list_single_large_pane_t1

0xc99c,	// (0x0004fc25) input_focus_pane_cp02_ParamLimits

0xc99c,	// (0x0004fc25) input_focus_pane_cp02

0xc9af,	// (0x0004fc38) wml_selection_box_pane_g1

0xc9b8,	// (0x0004fc41) wml_selection_box_pane_t1_ParamLimits

0xc9b8,	// (0x0004fc41) wml_selection_box_pane_t1

0xaf60,	// (0x0004e1e9) bg_wml_button_pane_ParamLimits

0xaf60,	// (0x0004e1e9) bg_wml_button_pane

0xc9d0,	// (0x0004fc59) wml_button_pane_g1

0xc9d8,	// (0x0004fc61) wml_button_pane_t1

0xc9d0,	// (0x0004fc59) wml_button_bg_pane_g1

0xc9e8,	// (0x0004fc71) wml_button_bg_pane_g2

0xc9f0,	// (0x0004fc79) wml_button_bg_pane_g3

0xc9f8,	// (0x0004fc81) wml_button_bg_pane_g4

0xca00,	// (0x0004fc89) wml_button_bg_pane_g5

0xca08,	// (0x0004fc91) wml_button_bg_pane_g6

0xca10,	// (0x0004fc99) wml_button_bg_pane_g7

0xca18,	// (0x0004fca1) wml_button_bg_pane_g8

0xca20,	// (0x0004fca9) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0005249b) wml_button_bg_pane_g

0x234e,	// (0x000455d7) bg_list_pane_cp02

0xca28,	// (0x0004fcb1) mce_header_pane_ParamLimits

0xca28,	// (0x0004fcb1) mce_header_pane

0xca3e,	// (0x0004fcc7) mce_icon_pane

0xca3e,	// (0x0004fcc7) mce_image_pane

0xca47,	// (0x0004fcd0) mce_text_pane_ParamLimits

0xca47,	// (0x0004fcd0) mce_text_pane

0x2356,	// (0x000455df) scroll_pane_cp03

0xc940,	// (0x0004fbc9) scroll_pane_cp04

0xca5a,	// (0x0004fce3) scroll_pane_cp05_ParamLimits

0xca5a,	// (0x0004fce3) scroll_pane_cp05

0x235e,	// (0x000455e7) mce_header_field_pane_ParamLimits

0x235e,	// (0x000455e7) mce_header_field_pane

0x2377,	// (0x00045600) mce_header_field_pane_2_ParamLimits

0x2377,	// (0x00045600) mce_header_field_pane_2

0x238d,	// (0x00045616) mce_header_field_pane_3

0xca66,	// (0x0004fcef) list_single_mce_message_pane_ParamLimits

0xca66,	// (0x0004fcef) list_single_mce_message_pane

0xca75,	// (0x0004fcfe) list_single_mce_smart_pane_ParamLimits

0xca75,	// (0x0004fcfe) list_single_mce_smart_pane

0xca8f,	// (0x0004fd18) input_focus_pane_cp03

0xca98,	// (0x0004fd21) list_header_data_pane

0x2395,	// (0x0004561e) mce_header_field_pane_t1

0x23a3,	// (0x0004562c) list_single_mce_header_pane_ParamLimits

0x23a3,	// (0x0004562c) list_single_mce_header_pane

0xcaa0,	// (0x0004fd29) list_single_mce_header_pane_t1

0xcaaf,	// (0x0004fd38) list_single_mce_message_pane_g1

0xcab7,	// (0x0004fd40) list_single_mce_message_pane_t1

0x23dd,	// (0x00045666) bg_cale_heading_pane_cp01_ParamLimits

0x23dd,	// (0x00045666) bg_cale_heading_pane_cp01

0xcac5,	// (0x0004fd4e) bg_cale_pane_cp02_ParamLimits

0xcac5,	// (0x0004fd4e) bg_cale_pane_cp02

0x242f,	// (0x000456b8) cale_month_corner_pane

0x244e,	// (0x000456d7) cale_month_day_heading_pane_ParamLimits

0x244e,	// (0x000456d7) cale_month_day_heading_pane

0x24b8,	// (0x00045741) cale_month_pane_g1_ParamLimits

0x24b8,	// (0x00045741) cale_month_pane_g1

0x24ff,	// (0x00045788) cale_month_pane_g2_ParamLimits

0x24ff,	// (0x00045788) cale_month_pane_g2

0x253b,	// (0x000457c4) cale_month_pane_g3_ParamLimits

0x253b,	// (0x000457c4) cale_month_pane_g3

0x258f,	// (0x00045818) cale_month_pane_g4_ParamLimits

0x258f,	// (0x00045818) cale_month_pane_g4

0x25e3,	// (0x0004586c) cale_month_pane_g5_ParamLimits

0x25e3,	// (0x0004586c) cale_month_pane_g5

0x263f,	// (0x000458c8) cale_month_pane_g6_ParamLimits

0x263f,	// (0x000458c8) cale_month_pane_g6

0x26a7,	// (0x00045930) cale_month_pane_g7_ParamLimits

0x26a7,	// (0x00045930) cale_month_pane_g7

0x2713,	// (0x0004599c) cale_month_pane_g8_ParamLimits

0x2713,	// (0x0004599c) cale_month_pane_g8

0x277f,	// (0x00045a08) cale_month_pane_g9_ParamLimits

0x277f,	// (0x00045a08) cale_month_pane_g9

0x27e3,	// (0x00045a6c) cale_month_pane_g10_ParamLimits

0x27e3,	// (0x00045a6c) cale_month_pane_g10

0x2835,	// (0x00045abe) cale_month_pane_g11_ParamLimits

0x2835,	// (0x00045abe) cale_month_pane_g11

0x2887,	// (0x00045b10) cale_month_pane_g12_ParamLimits

0x2887,	// (0x00045b10) cale_month_pane_g12

0x28df,	// (0x00045b68) cale_month_pane_g13_ParamLimits

0x28df,	// (0x00045b68) cale_month_pane_g13

0x000c,

0xf225,	// (0x000524ae) cale_month_pane_g_ParamLimits

0xf225,	// (0x000524ae) cale_month_pane_g

0x2937,	// (0x00045bc0) cale_month_week_pane

0x295b,	// (0x00045be4) grid_cale_month_pane_ParamLimits

0x295b,	// (0x00045be4) grid_cale_month_pane

0x29bc,	// (0x00045c45) cale_month_day_heading_pane_t1

0x2a42,	// (0x00045ccb) cale_month_day_heading_pane_t2

0x2abb,	// (0x00045d44) cale_month_day_heading_pane_t3

0x2b34,	// (0x00045dbd) cale_month_day_heading_pane_t4

0x2bb5,	// (0x00045e3e) cale_month_day_heading_pane_t5

0x2c3e,	// (0x00045ec7) cale_month_day_heading_pane_t6

0x2ccf,	// (0x00045f58) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x000524c9) cale_month_day_heading_pane_t

0xc74a,	// (0x0004f9d3) bg_cale_side_pane_cp01

0x2d60,	// (0x00045fe9) cale_month_week_pane_t1

0x2d79,	// (0x00046002) cale_month_week_pane_t2

0x2d92,	// (0x0004601b) cale_month_week_pane_t3

0x2dab,	// (0x00046034) cale_month_week_pane_t4

0x2dc4,	// (0x0004604d) cale_month_week_pane_t5

0x2ddd,	// (0x00046066) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x000524d8) cale_month_week_pane_t

0x2e02,	// (0x0004608b) cell_cale_month_pane_ParamLimits

0x2e02,	// (0x0004608b) cell_cale_month_pane

0xb1df,	// (0x0004e468) cell_cale_month_pane_g1

0x2f4c,	// (0x000461d5) cell_cale_month_pane_t1_ParamLimits

0x2f4c,	// (0x000461d5) cell_cale_month_pane_t1

0xc758,	// (0x0004f9e1) grid_highlight_pane_cp08

0xaf78,	// (0x0004e201) main_smil_g1

0x2f78,	// (0x00046201) smil_status_pane

0xcb04,	// (0x0004fd8d) smil_text_pane

0xe360,	// (0x000515e9) bg_popup_call3_rect_pane_g8

0xe368,	// (0x000515f1) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x00052771) bg_popup_call3_rect_pane_g

0xe526,	// (0x000517af) smil_status_volume_pane_g1

0xcb0e,	// (0x0004fd97) smil_status_pane_t1

0xb335,	// (0x0004e5be) volume_smil_pane

0xcb25,	// (0x0004fdae) list_smil_text_pane

0x2f8d,	// (0x00046216) scroll_pane_cp011

0x2f98,	// (0x00046221) smil_text_list_pane_t1_ParamLimits

0x2f98,	// (0x00046221) smil_text_list_pane_t1

0xb1eb,	// (0x0004e474) aid_volume_smil_ParamLimits

0xb1eb,	// (0x0004e474) aid_volume_smil

0xaf78,	// (0x0004e201) smil_volume_pane_g1

0xaf78,	// (0x0004e201) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x000524e5) smil_volume_pane_g

0x16f8,	// (0x00044981) listscroll_cale_day_pane

0xcb2f,	// (0x0004fdb8) bg_cale_pane

0xcb47,	// (0x0004fdd0) list_cale_pane

0xcb6a,	// (0x0004fdf3) scroll_pane_cp09

0xcb7b,	// (0x0004fe04) cale_bg_pane_g1

0xcb83,	// (0x0004fe0c) cale_bg_pane_g2

0xcb8b,	// (0x0004fe14) cale_bg_pane_g3

0xcb93,	// (0x0004fe1c) cale_bg_pane_g4

0xcb9b,	// (0x0004fe24) cale_bg_pane_g5

0xcba3,	// (0x0004fe2c) cale_bg_pane_g6

0xcbab,	// (0x0004fe34) cale_bg_pane_g7

0xcbb3,	// (0x0004fe3c) cale_bg_pane_g8

0xcbbb,	// (0x0004fe44) cale_bg_pane_g9

0x0008,

0xf261,	// (0x000524ea) cale_bg_pane_g

0x2feb,	// (0x00046274) list_cale_time_pane_ParamLimits

0x2feb,	// (0x00046274) list_cale_time_pane

0xcbc3,	// (0x0004fe4c) list_cale_time_pane_g1_ParamLimits

0xcbc3,	// (0x0004fe4c) list_cale_time_pane_g1

0xcbcf,	// (0x0004fe58) list_cale_time_pane_g2_ParamLimits

0xcbcf,	// (0x0004fe58) list_cale_time_pane_g2

0x3005,	// (0x0004628e) list_cale_time_pane_g3_ParamLimits

0x3005,	// (0x0004628e) list_cale_time_pane_g3

0x3013,	// (0x0004629c) list_cale_time_pane_g4_ParamLimits

0x3013,	// (0x0004629c) list_cale_time_pane_g4

0x3021,	// (0x000462aa) list_cale_time_pane_g5_ParamLimits

0x3021,	// (0x000462aa) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x000524fd) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x000524fd) list_cale_time_pane_g

0xcbe9,	// (0x0004fe72) list_cale_time_pane_t1_ParamLimits

0xcbe9,	// (0x0004fe72) list_cale_time_pane_t1

0xcc11,	// (0x0004fe9a) list_cale_time_pane_t2_ParamLimits

0xcc11,	// (0x0004fe9a) list_cale_time_pane_t2

0x32d3,	// (0x0004655c) aid_blid_cardinal_pane

0x3315,	// (0x0004659e) compass_pane_t4

0xcc39,	// (0x0004fec2) list_cale_time_pane_t4_ParamLimits

0xcc39,	// (0x0004fec2) list_cale_time_pane_t4

0x3323,	// (0x000465ac) compass_pane_t5

0x3333,	// (0x000465bc) compass_pane_t6

0x3341,	// (0x000465ca) compass_pane_t7

0xd083,	// (0x0005030c) navi_pane_cc_t1

0xd1d0,	// (0x00050459) aid_phob_thumbnail_center_pane

0x37f9,	// (0x00046a82) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x0005250a) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x0005250a) list_cale_time_pane_t

0xa95c,	// (0x0004dbe5) bg_popup_window_pane_cp02_ParamLimits

0xa95c,	// (0x0004dbe5) bg_popup_window_pane_cp02

0xcc61,	// (0x0004feea) heading_pane_cp01_ParamLimits

0xcc61,	// (0x0004feea) heading_pane_cp01

0xcc6d,	// (0x0004fef6) loc_req_pane_ParamLimits

0xcc6d,	// (0x0004fef6) loc_req_pane

0xcc7d,	// (0x0004ff06) loc_type_pane_ParamLimits

0xcc7d,	// (0x0004ff06) loc_type_pane

0xcc8f,	// (0x0004ff18) loc_type_pane_t1_ParamLimits

0xcc8f,	// (0x0004ff18) loc_type_pane_t1

0xcca1,	// (0x0004ff2a) loc_type_pane_t2_ParamLimits

0xcca1,	// (0x0004ff2a) loc_type_pane_t2

0xccb3,	// (0x0004ff3c) loc_type_pane_t3_ParamLimits

0xccb3,	// (0x0004ff3c) loc_type_pane_t3

0x0002,

0xf288,	// (0x00052511) loc_type_pane_t_ParamLimits

0xf288,	// (0x00052511) loc_type_pane_t

0xccc5,	// (0x0004ff4e) list_loc_req_pane

0xcccf,	// (0x0004ff58) scroll_pane_cp012

0x302f,	// (0x000462b8) list_single_loc_request_popup_menu_pane_ParamLimits

0x302f,	// (0x000462b8) list_single_loc_request_popup_menu_pane

0xccda,	// (0x0004ff63) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xccda,	// (0x0004ff63) list_single_loc_request_popup_menu_pane_g1

0xcce6,	// (0x0004ff6f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcce6,	// (0x0004ff6f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x00052518) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x00052518) list_single_loc_request_popup_menu_pane_g

0xccf2,	// (0x0004ff7b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xccf2,	// (0x0004ff7b) list_single_loc_request_popup_menu_pane_t1

0xaf60,	// (0x0004e1e9) bg_popup_window_pane_cp03_ParamLimits

0xaf60,	// (0x0004e1e9) bg_popup_window_pane_cp03

0xe2b8,	// (0x00051541) heading_loc_req_pane_ParamLimits

0xe2b8,	// (0x00051541) heading_loc_req_pane

0x303c,	// (0x000462c5) popup_dyc_status_message_window_g1_ParamLimits

0x303c,	// (0x000462c5) popup_dyc_status_message_window_g1

0x3050,	// (0x000462d9) popup_dyc_status_message_window_t1_ParamLimits

0x3050,	// (0x000462d9) popup_dyc_status_message_window_t1

0x3065,	// (0x000462ee) popup_dyc_status_message_window_t2_ParamLimits

0x3065,	// (0x000462ee) popup_dyc_status_message_window_t2

0x307a,	// (0x00046303) popup_dyc_status_message_window_t3_ParamLimits

0x307a,	// (0x00046303) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x0005251d) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x0005251d) popup_dyc_status_message_window_t

0xad05,	// (0x0004df8e) bg_heading_pane_cp01

0xcd08,	// (0x0004ff91) heading_loc_req_pane_g1

0xcd10,	// (0x0004ff99) heading_loc_req_pane_g2

0xcd18,	// (0x0004ffa1) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x00052524) heading_loc_req_pane_g

0xcd20,	// (0x0004ffa9) heading_loc_req_pane_t1

0xcd40,	// (0x0004ffc9) bg_popup_sub_pane_cp01_ParamLimits

0xcd40,	// (0x0004ffc9) bg_popup_sub_pane_cp01

0xcd4e,	// (0x0004ffd7) popup_cale_events_window_g1_ParamLimits

0xcd4e,	// (0x0004ffd7) popup_cale_events_window_g1

0xcd6e,	// (0x0004fff7) popup_cale_events_window_g2_ParamLimits

0xcd6e,	// (0x0004fff7) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x00052546) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x00052546) popup_cale_events_window_g

0xcd8e,	// (0x00050017) popup_cale_events_window_t1_ParamLimits

0xcd8e,	// (0x00050017) popup_cale_events_window_t1

0xcda0,	// (0x00050029) popup_cale_events_window_t2_ParamLimits

0xcda0,	// (0x00050029) popup_cale_events_window_t2

0xce16,	// (0x0005009f) popup_cale_events_window_t3_ParamLimits

0xce16,	// (0x0005009f) popup_cale_events_window_t3

0xce50,	// (0x000500d9) popup_cale_events_window_t4_ParamLimits

0xce50,	// (0x000500d9) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x0005254b) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x0005254b) popup_cale_events_window_t

0x30a2,	// (0x0004632b) call_type_pane

0x30b2,	// (0x0004633b) popup_call_status_window_g1

0x30c6,	// (0x0004634f) popup_call_status_window_g2

0x30da,	// (0x00046363) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x00052554) popup_call_status_window_g

0xce86,	// (0x0005010f) call_type_pane_g1

0xce8f,	// (0x00050118) call_type_pane_g2

0x0001,

0xf2d2,	// (0x0005255b) call_type_pane_g

0xad05,	// (0x0004df8e) bg_popup_sub_pane_cp02

0xce98,	// (0x00050121) listscroll_popup_wml_pane

0xcea0,	// (0x00050129) list_wml_pane

0xceaa,	// (0x00050133) scroll_pane_cp013

0xceb5,	// (0x0005013e) list_single_graphic_popup_wml_pane_ParamLimits

0xceb5,	// (0x0005013e) list_single_graphic_popup_wml_pane

0xaf78,	// (0x0004e201) list_single_graphic_popup_wml_pane_g1

0xcec9,	// (0x00050152) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x00052560) list_single_graphic_popup_wml_pane_g

0xced1,	// (0x0005015a) list_single_graphic_popup_wml_pane_t1

0xcee7,	// (0x00050170) aid_call_pane

0xaf58,	// (0x0004e1e1) popup_clock_analogue_window_g1

0xaf58,	// (0x0004e1e1) popup_clock_analogue_window_g2

0xb20d,	// (0x0004e496) popup_clock_analogue_window_g3

0xb20d,	// (0x0004e496) popup_clock_analogue_window_g4

0xaf78,	// (0x0004e201) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x00052565) popup_clock_analogue_window_g

0xb215,	// (0x0004e49e) popup_clock_analogue_window_t1

0xb223,	// (0x0004e4ac) clock_digital_number_pane_ParamLimits

0xb223,	// (0x0004e4ac) clock_digital_number_pane

0xb22f,	// (0x0004e4b8) clock_digital_number_pane_cp02_ParamLimits

0xb22f,	// (0x0004e4b8) clock_digital_number_pane_cp02

0xb23b,	// (0x0004e4c4) clock_digital_number_pane_cp03_ParamLimits

0xb23b,	// (0x0004e4c4) clock_digital_number_pane_cp03

0xb247,	// (0x0004e4d0) clock_digital_number_pane_cp04_ParamLimits

0xb247,	// (0x0004e4d0) clock_digital_number_pane_cp04

0xb253,	// (0x0004e4dc) clock_digital_separator_pane_ParamLimits

0xb253,	// (0x0004e4dc) clock_digital_separator_pane

0xb25f,	// (0x0004e4e8) popup_clock_digital_window_t1

0xaf78,	// (0x0004e201) clock_digital_number_pane_g1

0xaf78,	// (0x0004e201) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x000524e5) clock_digital_number_pane_g

0xaf78,	// (0x0004e201) clock_digital_separator_pane_g1

0xaf78,	// (0x0004e201) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x000524e5) clock_digital_separator_pane_g

0xad05,	// (0x0004df8e) bg_popup_window_pane_cp04

0xceef,	// (0x00050178) heading_pane_cp03

0xc7a5,	// (0x0004fa2e) listscroll_popup_gms_pane

0xad05,	// (0x0004df8e) grid_large_graphic_popup_pane

0xcef8,	// (0x00050181) listscroll_popup_gms_pane_g1

0xcf01,	// (0x0005018a) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x00052570) listscroll_popup_gms_pane_g

0xcf0a,	// (0x00050193) scroll_pane_cp014

0xafcd,	// (0x0004e256) cell_large_graphic_popup_pane_ParamLimits

0xafcd,	// (0x0004e256) cell_large_graphic_popup_pane

0xafdb,	// (0x0004e264) cell_large_graphic_popup_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) cell_large_graphic_popup_pane_g1

0xcf13,	// (0x0005019c) cell_large_graphic_popup_pane_g2_ParamLimits

0xcf13,	// (0x0005019c) cell_large_graphic_popup_pane_g2

0xcf21,	// (0x000501aa) cell_large_graphic_popup_pane_g3_ParamLimits

0xcf21,	// (0x000501aa) cell_large_graphic_popup_pane_g3

0xcf2f,	// (0x000501b8) cell_large_graphic_popup_pane_g4_ParamLimits

0xcf2f,	// (0x000501b8) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x00052575) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x00052575) cell_large_graphic_popup_pane_g

0xad05,	// (0x0004df8e) grid_highlight_pane_cp010

0xaf78,	// (0x0004e201) bg_popup_call_pane_g1

0xcf40,	// (0x000501c9) list_single_graphic_popup_conf_pane_ParamLimits

0xcf40,	// (0x000501c9) list_single_graphic_popup_conf_pane

0xcf52,	// (0x000501db) list_highlight_pane_cp01

0xcf5b,	// (0x000501e4) list_single_graphic_popup_conf_pane_g1

0xcf63,	// (0x000501ec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x0005257e) list_single_graphic_popup_conf_pane_g

0xcf6b,	// (0x000501f4) list_single_graphic_popup_conf_pane_t1

0xcf79,	// (0x00050202) linegrid_cams_pane_g1

0x30ea,	// (0x00046373) linegrid_cams_pane_g2

0xc78b,	// (0x0004fa14) linegrid_cams_pane_g3

0xcf82,	// (0x0005020b) linegrid_cams_pane_g4

0x30f3,	// (0x0004637c) linegrid_cams_pane_g5

0x30fc,	// (0x00046385) linegrid_cams_pane_g6

0xc794,	// (0x0004fa1d) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x00052583) linegrid_cams_pane_g

0xcf8b,	// (0x00050214) popup_clock_analogue_window

0xcf8b,	// (0x00050214) popup_clock_digital_window

0xad05,	// (0x0004df8e) popup_phob_thumbnail_window

0xaf78,	// (0x0004e201) call_video_uplink_pane_g1

0xcf94,	// (0x0005021d) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x00052592) call_video_uplink_pane_g

0xcf9c,	// (0x00050225) video_uplink_pane

0xcfa4,	// (0x0005022d) mce_image_pane_g1

0x3107,	// (0x00046390) mce_image_pane_g2

0x3111,	// (0x0004639a) mce_image_pane_g3

0x311b,	// (0x000463a4) mce_image_pane_g4

0x3123,	// (0x000463ac) mce_image_pane_g5

0x0004,

0xf30e,	// (0x00052597) mce_image_pane_g

0xcfae,	// (0x00050237) control_top_pane_stacon_cp01_ParamLimits

0xcfae,	// (0x00050237) control_top_pane_stacon_cp01

0xcfc2,	// (0x0005024b) uni_indicator_pane_stacon_cp01_ParamLimits

0xcfc2,	// (0x0005024b) uni_indicator_pane_stacon_cp01

0xcfd3,	// (0x0005025c) bg_popup_sub_pane_cp03

0x312b,	// (0x000463b4) chi_dic_find_pane

0x3133,	// (0x000463bc) listscroll_chi_dic_pane

0x313c,	// (0x000463c5) main_pane_chidic_g1

0x314f,	// (0x000463d8) chi_dic_find_pane_t1

0xcfdd,	// (0x00050266) find_chidic_pane

0xcfe6,	// (0x0005026f) chi_dic_list_pane_ParamLimits

0xcfe6,	// (0x0005026f) chi_dic_list_pane

0xcff7,	// (0x00050280) scroll_pane_cp020

0x315d,	// (0x000463e6) find_chidic_pane_t1

0xad05,	// (0x0004df8e) input_focus_pane_cp06

0x316c,	// (0x000463f5) list_chi_dic_pane_ParamLimits

0x316c,	// (0x000463f5) list_chi_dic_pane

0x317e,	// (0x00046407) list_chi_dic_pane_t1_ParamLimits

0x317e,	// (0x00046407) list_chi_dic_pane_t1

0xad05,	// (0x0004df8e) list_highlight_pane_cp020

0xcfff,	// (0x00050288) bg_cale_heading_pane_g1

0x3191,	// (0x0004641a) bg_cale_heading_pane_g2

0x3199,	// (0x00046422) bg_cale_heading_pane_g3

0x31a1,	// (0x0004642a) bg_cale_heading_pane_g4

0x31ab,	// (0x00046434) bg_cale_heading_pane_g5

0x31b5,	// (0x0004643e) bg_cale_heading_pane_g6

0x31bd,	// (0x00046446) bg_cale_heading_pane_g7

0x31c5,	// (0x0004644e) bg_cale_heading_pane_g8

0x31cf,	// (0x00046458) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x000525a2) bg_cale_heading_pane_g

0xcfff,	// (0x00050288) bg_cale_side_pane_g1

0x31d9,	// (0x00046462) bg_cale_side_pane_g2

0x31e3,	// (0x0004646c) bg_cale_side_pane_g3

0x31ed,	// (0x00046476) bg_cale_side_pane_g4

0x31f7,	// (0x00046480) bg_cale_side_pane_g5

0x3201,	// (0x0004648a) bg_cale_side_pane_g6

0x320b,	// (0x00046494) bg_cale_side_pane_g7

0x3215,	// (0x0004649e) bg_cale_side_pane_g8

0x321d,	// (0x000464a6) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x000525b5) bg_cale_side_pane_g

0x3225,	// (0x000464ae) popup_call_status_window_ParamLimits

0x3225,	// (0x000464ae) popup_call_status_window

0xd007,	// (0x00050290) stacon_top_pane

0xd00f,	// (0x00050298) status_pane_ParamLimits

0xd00f,	// (0x00050298) status_pane

0xd024,	// (0x000502ad) status_small_pane

0xd02c,	// (0x000502b5) control_pane

0xad05,	// (0x0004df8e) stacon_bottom_pane

0xd034,	// (0x000502bd) list_single_mce_smart_pane_t1_ParamLimits

0xd034,	// (0x000502bd) list_single_mce_smart_pane_t1

0xd047,	// (0x000502d0) list_single_mce_smart_pane_t2_ParamLimits

0xd047,	// (0x000502d0) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x000525c8) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x000525c8) list_single_mce_smart_pane_t

0x3272,	// (0x000464fb) compass_pane

0x327d,	// (0x00046506) main_location2_pane_t1

0x3293,	// (0x0004651c) main_location2_pane_t2

0x32a9,	// (0x00046532) main_location2_pane_t3

0x0003,

0xf344,	// (0x000525cd) main_location2_pane_t

0xd066,	// (0x000502ef) compass_pane_g1_ParamLimits

0xd066,	// (0x000502ef) compass_pane_g1

0x32f7,	// (0x00046580) compass_pane_t1

0x3306,	// (0x0004658f) compass_pane_t2

0x0005,

0xf34d,	// (0x000525d6) compass_pane_t

0x3351,	// (0x000465da) text_secondary_cp61

0xd07a,	// (0x00050303) navi_pane_cams_g5

0xd09d,	// (0x00050326) navi_pane_im_t1

0xd0ab,	// (0x00050334) navi_pane_mp_g1_ParamLimits

0xd0ab,	// (0x00050334) navi_pane_mp_g1

0xd0bf,	// (0x00050348) navi_pane_mp_g2_ParamLimits

0xd0bf,	// (0x00050348) navi_pane_mp_g2

0xd0cb,	// (0x00050354) navi_pane_mp_g3_ParamLimits

0xd0cb,	// (0x00050354) navi_pane_mp_g3

0x0002,

0xf361,	// (0x000525ea) navi_pane_mp_g_ParamLimits

0xf361,	// (0x000525ea) navi_pane_mp_g

0xd0d7,	// (0x00050360) navi_pane_mp_t1

0xd0e5,	// (0x0005036e) navi_pane_mp_t2

0x0002,

0xf368,	// (0x000525f1) navi_pane_mp_t

0xd121,	// (0x000503aa) navi_pane_vt_g1

0xd0d7,	// (0x00050360) navi_pane_vt_t1

0xd129,	// (0x000503b2) navi_slider_pane

0xc7a5,	// (0x0004fa2e) zooming_pane

0xd131,	// (0x000503ba) navi_slider_pane_g1

0xb27c,	// (0x0004e505) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x000525f8) navi_slider_pane_g

0xd155,	// (0x000503de) aid_levels_zoom

0xd15d,	// (0x000503e6) zooming_pane_g1

0xd165,	// (0x000503ee) zooming_pane_g2

0xd165,	// (0x000503ee) zooming_pane_g3

0x0002,

0xf37e,	// (0x00052607) zooming_pane_g

0xd16d,	// (0x000503f6) level_10_zoom

0xd176,	// (0x000503ff) level_11_zoom

0xd17f,	// (0x00050408) level_1_zoom

0xd188,	// (0x00050411) level_2_zoom

0xd191,	// (0x0005041a) level_3_zoom

0xd19a,	// (0x00050423) level_4_zoom

0xd1a3,	// (0x0005042c) level_5_zoom

0xd1ac,	// (0x00050435) level_6_zoom

0xd1b5,	// (0x0005043e) level_7_zoom

0xd1be,	// (0x00050447) level_8_zoom

0xd1c7,	// (0x00050450) level_9_zoom

0xd1d8,	// (0x00050461) popup_phob_thumbnail_window_g1

0xd1e0,	// (0x00050469) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x0005260e) popup_phob_thumbnail_window_g

0x3ef6,	// (0x0004717f) level_1_location

0x3efe,	// (0x00047187) level_2_location

0x3f06,	// (0x0004718f) level_3_location

0x3f10,	// (0x00047199) level_4_location

0xc7a5,	// (0x0004fa2e) level_5_location

0x349a,	// (0x00046723) mce_icon_pane_g1

0x34a2,	// (0x0004672b) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x00052613) mce_icon_pane_g

0xe2c4,	// (0x0005154d) main_mup_pane_g1_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g1

0xe2c4,	// (0x0005154d) main_mup_pane_g2_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g2

0xe2c4,	// (0x0005154d) main_mup_pane_g3_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g3

0xe2c4,	// (0x0005154d) main_mup_pane_g4_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g4

0xe2c4,	// (0x0005154d) main_mup_pane_g5_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g5

0xe2c4,	// (0x0005154d) main_mup_pane_g6_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g6

0xe2c4,	// (0x0005154d) main_mup_pane_g7_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g7

0xe2c4,	// (0x0005154d) main_mup_pane_g8_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g8

0xe2c4,	// (0x0005154d) main_mup_pane_g9_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g9

0xe2c4,	// (0x0005154d) main_mup_pane_g10_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g10

0xe2c4,	// (0x0005154d) main_mup_pane_g11_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g11

0xafdb,	// (0x0004e264) main_mup_pane_g12_ParamLimits

0xafdb,	// (0x0004e264) main_mup_pane_g12

0xe2c4,	// (0x0005154d) main_mup_pane_g13_ParamLimits

0xe2c4,	// (0x0005154d) main_mup_pane_g13

0x000c,

0xf38f,	// (0x00052618) main_mup_pane_g_ParamLimits

0xf38f,	// (0x00052618) main_mup_pane_g

0xe2d2,	// (0x0005155b) main_mup_pane_t1_ParamLimits

0xe2d2,	// (0x0005155b) main_mup_pane_t1

0xe2d2,	// (0x0005155b) main_mup_pane_t2_ParamLimits

0xe2d2,	// (0x0005155b) main_mup_pane_t2

0xe2d2,	// (0x0005155b) main_mup_pane_t3_ParamLimits

0xe2d2,	// (0x0005155b) main_mup_pane_t3

0xc7ad,	// (0x0004fa36) main_mup_pane_t4_ParamLimits

0xc7ad,	// (0x0004fa36) main_mup_pane_t4

0xc7ad,	// (0x0004fa36) main_mup_pane_t5_ParamLimits

0xc7ad,	// (0x0004fa36) main_mup_pane_t5

0xcdde,	// (0x00050067) main_mup_pane_t6_ParamLimits

0xcdde,	// (0x00050067) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x00052633) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x00052633) main_mup_pane_t

0xafcd,	// (0x0004e256) mup_progress_pane_ParamLimits

0xafcd,	// (0x0004e256) mup_progress_pane

0xe2e6,	// (0x0005156f) mup_visualizer_pane_ParamLimits

0xe2e6,	// (0x0005156f) mup_visualizer_pane

0xe2e6,	// (0x0005156f) mup_volume_pane_ParamLimits

0xe2e6,	// (0x0005156f) mup_volume_pane

0xafe9,	// (0x0004e272) mup_visualizer_pane_g1_ParamLimits

0xafe9,	// (0x0004e272) mup_visualizer_pane_g1

0xd1e8,	// (0x00050471) mup_visualizer_pane_g2_ParamLimits

0xd1e8,	// (0x00050471) mup_visualizer_pane_g2

0xafdb,	// (0x0004e264) mup_visualizer_pane_g3_ParamLimits

0xafdb,	// (0x0004e264) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x00052640) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x00052640) mup_visualizer_pane_g

0xc7db,	// (0x0004fa64) mup_volume_pane_g1

0xc7db,	// (0x0004fa64) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x00052647) mup_volume_pane_g

0xc7db,	// (0x0004fa64) mup_progress_pane_g1

0xc7db,	// (0x0004fa64) mup_progress_pane_g2

0xc7db,	// (0x0004fa64) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x0005264c) mup_progress_pane_g

0xad05,	// (0x0004df8e) bg_popup_window_pane_cp05

0xd1f6,	// (0x0005047f) heading_pane_cp02_ParamLimits

0xd1f6,	// (0x0005047f) heading_pane_cp02

0xd212,	// (0x0005049b) list_popup_blid_pane

0xd21a,	// (0x000504a3) list_blid_sat_info_pane_ParamLimits

0xd21a,	// (0x000504a3) list_blid_sat_info_pane

0xd22d,	// (0x000504b6) list_blid_sat_info_pane_g1

0xd235,	// (0x000504be) list_blid_sat_info_pane_t1

0x35b6,	// (0x0004683f) mup_equalizer_pane_ParamLimits

0x35b6,	// (0x0004683f) mup_equalizer_pane

0x35d7,	// (0x00046860) mup_equalizer_pane_cp1_ParamLimits

0x35d7,	// (0x00046860) mup_equalizer_pane_cp1

0x35f8,	// (0x00046881) mup_equalizer_pane_cp2_ParamLimits

0x35f8,	// (0x00046881) mup_equalizer_pane_cp2

0x361d,	// (0x000468a6) mup_equalizer_pane_cp3_ParamLimits

0x361d,	// (0x000468a6) mup_equalizer_pane_cp3

0x3646,	// (0x000468cf) mup_equalizer_pane_cp4_ParamLimits

0x3646,	// (0x000468cf) mup_equalizer_pane_cp4

0x366f,	// (0x000468f8) mup_equalizer_pane_cp5

0x3687,	// (0x00046910) mup_equalizer_pane_cp6

0x369f,	// (0x00046928) mup_equalizer_pane_cp7

0xe3e0,	// (0x00051669) bg_popup_call_poc_act_pane_g9

0xe3e8,	// (0x00051671) bg_popup_call_poc_act_pane_g10

0xe3f0,	// (0x00051679) bg_popup_call_poc_act_pane_g11

0x000a,

0xaf60,	// (0x0004e1e9) mup_scale_pane

0xaf78,	// (0x0004e201) mup_scale_pane_g1

0xd243,	// (0x000504cc) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x00052668) mup_scale_pane_g

0xd267,	// (0x000504f0) msg_data_pane

0xd26f,	// (0x000504f8) scroll_pane_cp017

0x07a6,	// (0x00043a2f) bg_list_pane_cp04_ParamLimits

0x07a6,	// (0x00043a2f) bg_list_pane_cp04

0xd277,	// (0x00050500) msg_data_pane_g1

0x36c9,	// (0x00046952) msg_data_pane_g2

0x36d3,	// (0x0004695c) msg_data_pane_g3

0x36dd,	// (0x00046966) msg_data_pane_g4

0x36e5,	// (0x0004696e) msg_data_pane_g5

0x36ed,	// (0x00046976) msg_data_pane_g6

0x36f5,	// (0x0004697e) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x00052677) msg_data_pane_g

0x07cc,	// (0x00043a55) msg_text_pane_ParamLimits

0x07cc,	// (0x00043a55) msg_text_pane

0x36fd,	// (0x00046986) qrid_highlight_pane_cp011_ParamLimits

0x36fd,	// (0x00046986) qrid_highlight_pane_cp011

0xad05,	// (0x0004df8e) msg_body_pane

0xad05,	// (0x0004df8e) msg_header_pane

0xd288,	// (0x00050511) input_focus_pane_cp07

0x0815,	// (0x00043a9e) msg_header_pane_t1_ParamLimits

0x0815,	// (0x00043a9e) msg_header_pane_t1

0x082b,	// (0x00043ab4) msg_header_pane_t2_ParamLimits

0x082b,	// (0x00043ab4) msg_header_pane_t2

0x0001,

0xf402,	// (0x0005268b) msg_header_pane_t_ParamLimits

0xf402,	// (0x0005268b) msg_header_pane_t

0xd29d,	// (0x00050526) msg_body_pane_g1

0x0842,	// (0x00043acb) msg_body_pane_t1_ParamLimits

0x0842,	// (0x00043acb) msg_body_pane_t1

0x0873,	// (0x00043afc) msg_body_pane_t2_ParamLimits

0x0873,	// (0x00043afc) msg_body_pane_t2

0x0885,	// (0x00043b0e) msg_body_pane_t3_ParamLimits

0x0885,	// (0x00043b0e) msg_body_pane_t3

0x0002,

0xf407,	// (0x00052690) msg_body_pane_t_ParamLimits

0xf407,	// (0x00052690) msg_body_pane_t

0x374d,	// (0x000469d6) main_viewer_pane_g1_ParamLimits

0x374d,	// (0x000469d6) main_viewer_pane_g1

0x375b,	// (0x000469e4) main_viewer_pane_g2_ParamLimits

0x375b,	// (0x000469e4) main_viewer_pane_g2

0x3769,	// (0x000469f2) main_viewer_pane_g3_ParamLimits

0x3769,	// (0x000469f2) main_viewer_pane_g3

0x3778,	// (0x00046a01) main_viewer_pane_g4_ParamLimits

0x3778,	// (0x00046a01) main_viewer_pane_g4

0xb2a6,	// (0x0004e52f) main_viewer_pane_g5_ParamLimits

0xb2a6,	// (0x0004e52f) main_viewer_pane_g5

0xb2a6,	// (0x0004e52f) main_viewer_pane_g7_ParamLimits

0xb2a6,	// (0x0004e52f) main_viewer_pane_g7

0xb2b8,	// (0x0004e541) main_viewer_pane_g8_ParamLimits

0xb2b8,	// (0x0004e541) main_viewer_pane_g8

0x0007,

0xf417,	// (0x000526a0) main_viewer_pane_g_ParamLimits

0xf417,	// (0x000526a0) main_viewer_pane_g

0xd2a5,	// (0x0005052e) viewer_content_pane_ParamLimits

0xd2a5,	// (0x0005052e) viewer_content_pane

0x37b6,	// (0x00046a3f) main_postcard_pane_g1_ParamLimits

0x37b6,	// (0x00046a3f) main_postcard_pane_g1

0x37cc,	// (0x00046a55) main_postcard_pane_g2_ParamLimits

0x37cc,	// (0x00046a55) main_postcard_pane_g2

0x37e2,	// (0x00046a6b) main_postcard_pane_g3_ParamLimits

0x37e2,	// (0x00046a6b) main_postcard_pane_g3

0x0005,

0xf428,	// (0x000526b1) main_postcard_pane_g_ParamLimits

0xf428,	// (0x000526b1) main_postcard_pane_g

0x37f9,	// (0x00046a82) main_postcard_pane_g4

0xe539,	// (0x000517c2) smil_status_volume_pane_g2

0x383c,	// (0x00046ac5) postcard_pane_ParamLimits

0x383c,	// (0x00046ac5) postcard_pane

0xd2b3,	// (0x0005053c) postcard_pane_g1_ParamLimits

0xd2b3,	// (0x0005053c) postcard_pane_g1

0x388c,	// (0x00046b15) postcard_pane_g2_ParamLimits

0x388c,	// (0x00046b15) postcard_pane_g2

0x3898,	// (0x00046b21) postcard_pane_g3_ParamLimits

0x3898,	// (0x00046b21) postcard_pane_g3

0xd2c1,	// (0x0005054a) postcard_pane_g4_ParamLimits

0xd2c1,	// (0x0005054a) postcard_pane_g4

0x38a4,	// (0x00046b2d) postcard_pane_g5_ParamLimits

0x38a4,	// (0x00046b2d) postcard_pane_g5

0x38b9,	// (0x00046b42) postcard_pane_g6_ParamLimits

0x38b9,	// (0x00046b42) postcard_pane_g6

0xd2b3,	// (0x0005053c) postcard_pane_g7_ParamLimits

0xd2b3,	// (0x0005053c) postcard_pane_g7

0x0006,

0xf435,	// (0x000526be) postcard_pane_g_ParamLimits

0xf435,	// (0x000526be) postcard_pane_g

0x38d1,	// (0x00046b5a) main_mp2_pane_g1_ParamLimits

0x38d1,	// (0x00046b5a) main_mp2_pane_g1

0x38df,	// (0x00046b68) main_mp2_pane_g2_ParamLimits

0x38df,	// (0x00046b68) main_mp2_pane_g2

0x38eb,	// (0x00046b74) main_mp2_pane_g3_ParamLimits

0x38eb,	// (0x00046b74) main_mp2_pane_g3

0x0002,

0xf444,	// (0x000526cd) main_mp2_pane_g_ParamLimits

0xf444,	// (0x000526cd) main_mp2_pane_g

0x38f7,	// (0x00046b80) main_mp2_pane_t1_ParamLimits

0x38f7,	// (0x00046b80) main_mp2_pane_t1

0x390e,	// (0x00046b97) main_mp2_pane_t2_ParamLimits

0x390e,	// (0x00046b97) main_mp2_pane_t2

0x3922,	// (0x00046bab) main_mp2_pane_t3_ParamLimits

0x3922,	// (0x00046bab) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x000526d4) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x000526d4) main_mp2_pane_t

0xd2cf,	// (0x00050558) pec_content_pane_ParamLimits

0xd2cf,	// (0x00050558) pec_content_pane

0xc940,	// (0x0004fbc9) scroll_pane_cp015

0xd2e1,	// (0x0005056a) pec_attribute_pane_ParamLimits

0xd2e1,	// (0x0005056a) pec_attribute_pane

0x3934,	// (0x00046bbd) pec_content_pane_g1_ParamLimits

0x3934,	// (0x00046bbd) pec_content_pane_g1

0xd2f1,	// (0x0005057a) pec_content_pane_t1_ParamLimits

0xd2f1,	// (0x0005057a) pec_content_pane_t1

0xd303,	// (0x0005058c) pec_content_pane_t2_ParamLimits

0xd303,	// (0x0005058c) pec_content_pane_t2

0x0001,

0xf452,	// (0x000526db) pec_content_pane_t_ParamLimits

0xf452,	// (0x000526db) pec_content_pane_t

0x3940,	// (0x00046bc9) list_single_graphic_pane_cp01_ParamLimits

0x3940,	// (0x00046bc9) list_single_graphic_pane_cp01

0xaf60,	// (0x0004e1e9) bg_popup_sub_pane_cp04

0xd315,	// (0x0005059e) popup_mup_playback_window_g1

0xd321,	// (0x000505aa) popup_mup_playback_window_t1

0xd336,	// (0x000505bf) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x000526e0) popup_mup_playback_window_t

0xd36d,	// (0x000505f6) main_image_pane_g1_ParamLimits

0xd36d,	// (0x000505f6) main_image_pane_g1

0xd3b0,	// (0x00050639) scroll_pane_cp018_ParamLimits

0xd3b0,	// (0x00050639) scroll_pane_cp018

0xd3c8,	// (0x00050651) scroll_pane_cp016_ParamLimits

0xd3c8,	// (0x00050651) scroll_pane_cp016

0x3a12,	// (0x00046c9b) smil2_image_pane_ParamLimits

0x3a12,	// (0x00046c9b) smil2_image_pane

0x3a48,	// (0x00046cd1) smil2_root_pane_ParamLimits

0x3a48,	// (0x00046cd1) smil2_root_pane

0x3a80,	// (0x00046d09) smil2_text_pane_ParamLimits

0x3a80,	// (0x00046d09) smil2_text_pane

0xad05,	// (0x0004df8e) bg_list_pane_cp06

0xd404,	// (0x0005068d) grid_radio_pane

0xad05,	// (0x0004df8e) bg_popup_window_pane_cp06

0xd40e,	// (0x00050697) main_fmradio_pane_t1

0xe3f8,	// (0x00051681) heading_pane_cp04

0xd41c,	// (0x000506a5) main_fmradio_pane_t2

0xe400,	// (0x00051689) popup_cale_lunar_info_window_g1

0xd42a,	// (0x000506b3) main_fmradio_pane_t3

0xe408,	// (0x00051691) popup_cale_lunar_info_window_g2

0xd43a,	// (0x000506c3) main_fmradio_pane_t4

0x0001,

0xd448,	// (0x000506d1) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x000527c0) popup_cale_lunar_info_window_g

0xf46c,	// (0x000526f5) main_fmradio_pane_t

0xd456,	// (0x000506df) wait_bar_pane_cp03

0xd45e,	// (0x000506e7) cell_fmradio_pane_ParamLimits

0xd45e,	// (0x000506e7) cell_fmradio_pane

0xd2b3,	// (0x0005053c) cell_fmradio_pane_g1_ParamLimits

0xd2b3,	// (0x0005053c) cell_fmradio_pane_g1

0xad05,	// (0x0004df8e) grid_highlight_pane_cp011

0xd473,	// (0x000506fc) poc_content_pane_ParamLimits

0xd473,	// (0x000506fc) poc_content_pane

0xd485,	// (0x0005070e) scroll_pane_cp019

0x3b10,	// (0x00046d99) popup_call_poc_act_window_ParamLimits

0x3b10,	// (0x00046d99) popup_call_poc_act_window

0x3b34,	// (0x00046dbd) popup_call_poc_inact_window_ParamLimits

0x3b34,	// (0x00046dbd) popup_call_poc_inact_window

0xf50e,	// (0x00052797) bg_popup_call_poc_act_pane_g

0xe370,	// (0x000515f9) bg_popup_call_poc_inact_pane_g1

0xe378,	// (0x00051601) bg_popup_call_poc_inact_pane_g2

0xd48d,	// (0x00050716) popup_call_poc_act_window_g2

0xe380,	// (0x00051609) bg_popup_call_poc_inact_pane_g3

0xe388,	// (0x00051611) bg_popup_call_poc_inact_pane_g4

0xe390,	// (0x00051619) bg_popup_call_poc_inact_pane_g5

0xd495,	// (0x0005071e) popup_call_poc_act_window_t1_ParamLimits

0xd495,	// (0x0005071e) popup_call_poc_act_window_t1

0xd4d9,	// (0x00050762) popup_call_poc_act_window_t2_ParamLimits

0xd4d9,	// (0x00050762) popup_call_poc_act_window_t2

0xd501,	// (0x0005078a) popup_call_poc_act_window_t3_ParamLimits

0xd501,	// (0x0005078a) popup_call_poc_act_window_t3

0xd529,	// (0x000507b2) popup_call_poc_act_window_t4_ParamLimits

0xd529,	// (0x000507b2) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x00052700) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x00052700) popup_call_poc_act_window_t

0xe398,	// (0x00051621) bg_popup_call_poc_inact_pane_g6

0xe3a0,	// (0x00051629) bg_popup_call_poc_inact_pane_g7

0xe3a8,	// (0x00051631) bg_popup_call_poc_inact_pane_g8

0xd53b,	// (0x000507c4) popup_call_poc_inact_window_g2

0xe3b0,	// (0x00051639) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x00052784) bg_popup_call_poc_inact_pane_g

0xd543,	// (0x000507cc) popup_call_poc_inact_window_t1_ParamLimits

0xd543,	// (0x000507cc) popup_call_poc_inact_window_t1

0xd558,	// (0x000507e1) popup_call_poc_inact_window_t2_ParamLimits

0xd558,	// (0x000507e1) popup_call_poc_inact_window_t2

0xd56d,	// (0x000507f6) popup_call_poc_inact_window_t3_ParamLimits

0xd56d,	// (0x000507f6) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x00052709) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x00052709) popup_call_poc_inact_window_t

0xe49e,	// (0x00051727) context_pane_ParamLimits

0x4413,	// (0x0004769c) signal_pane_ParamLimits

0xc7a5,	// (0x0004fa2e) main_call2_pane

0xb301,	// (0x0004e58a) popup_phob_thumbnail2_window_ParamLimits

0xb301,	// (0x0004e58a) popup_phob_thumbnail2_window

0xb28e,	// (0x0004e517) aid_hotspot_pointer_arrow_pane

0xb296,	// (0x0004e51f) aid_hotspot_pointer_hand_pane

0x3ebe,	// (0x00047147) phob_pre_status_pane_g5

0xa8af,	// (0x0004db38) cams_zoom_pane_ParamLimits

0xa8af,	// (0x0004db38) image_vga_pane_ParamLimits

0xafdb,	// (0x0004e264) main_camera_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) main_camera_pane_g2_ParamLimits

0xafdb,	// (0x0004e264) main_camera_pane_g3_ParamLimits

0xafdb,	// (0x0004e264) main_camera_pane_g4_ParamLimits

0xafdb,	// (0x0004e264) main_camera_pane_g5_ParamLimits

0xafdb,	// (0x0004e264) main_camera_pane_g6_ParamLimits

0xafdb,	// (0x0004e264) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00052434) main_camera_pane_g_ParamLimits

0xc7ad,	// (0x0004fa36) main_camera_pane_t1_ParamLimits

0xc7ad,	// (0x0004fa36) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00052445) main_camera_pane_t_ParamLimits

0xaf60,	// (0x0004e1e9) bg_popup_preview_window_pane_cp01_ParamLimits

0xaf60,	// (0x0004e1e9) bg_popup_preview_window_pane_cp01

0xd582,	// (0x0005080b) popup_phob_thumbnail2_window_g1_ParamLimits

0xd582,	// (0x0005080b) popup_phob_thumbnail2_window_g1

0xad05,	// (0x0004df8e) call2_cli_visual_pane

0x3b68,	// (0x00046df1) popup_call2_audio_conf_window_ParamLimits

0x3b68,	// (0x00046df1) popup_call2_audio_conf_window

0x3b90,	// (0x00046e19) popup_call2_audio_first_window_ParamLimits

0x3b90,	// (0x00046e19) popup_call2_audio_first_window

0x3c26,	// (0x00046eaf) popup_call2_audio_in_window_ParamLimits

0x3c26,	// (0x00046eaf) popup_call2_audio_in_window

0x3c72,	// (0x00046efb) popup_call2_audio_out_window_ParamLimits

0x3c72,	// (0x00046efb) popup_call2_audio_out_window

0x3ce4,	// (0x00046f6d) popup_call2_audio_second_window_ParamLimits

0x3ce4,	// (0x00046f6d) popup_call2_audio_second_window

0x3d4a,	// (0x00046fd3) popup_call2_audio_wait_window_ParamLimits

0x3d4a,	// (0x00046fd3) popup_call2_audio_wait_window

0xad05,	// (0x0004df8e) bg_popup_call2_act_pane_cp03

0xaf42,	// (0x0004e1cb) list_conf_pane_cp

0xd58e,	// (0x00050817) popup_call2_audio_conf_window_t1

0xd59c,	// (0x00050825) list_single_graphic_popup_conf2_pane_ParamLimits

0xd59c,	// (0x00050825) list_single_graphic_popup_conf2_pane

0xcf52,	// (0x000501db) list_highlight_pane_cp04

0xd5af,	// (0x00050838) list_single_graphic_popup_conf2_pane_g1

0xcf63,	// (0x000501ec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x00052710) list_single_graphic_popup_conf2_pane_g

0xd5b9,	// (0x00050842) list_single_graphic_popup_conf2_pane_t1

0xd5c7,	// (0x00050850) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5c7,	// (0x00050850) bg_popup_call2_act_pane_cp01

0xd651,	// (0x000508da) call_type_pane_cp05_ParamLimits

0xd651,	// (0x000508da) call_type_pane_cp05

0xd6a5,	// (0x0005092e) popup_call2_audio_second_window_g1_ParamLimits

0xd6a5,	// (0x0005092e) popup_call2_audio_second_window_g1

0xd6f9,	// (0x00050982) popup_call2_audio_second_window_g2_ParamLimits

0xd6f9,	// (0x00050982) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x00052715) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x00052715) popup_call2_audio_second_window_g

0xd75e,	// (0x000509e7) popup_call2_audio_second_window_t1_ParamLimits

0xd75e,	// (0x000509e7) popup_call2_audio_second_window_t1

0xd819,	// (0x00050aa2) popup_call2_audio_second_window_t2_ParamLimits

0xd819,	// (0x00050aa2) popup_call2_audio_second_window_t2

0xd86c,	// (0x00050af5) popup_call2_audio_second_window_t3_ParamLimits

0xd86c,	// (0x00050af5) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x0005271c) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x0005271c) popup_call2_audio_second_window_t

0xad05,	// (0x0004df8e) bg_popup_call2_in_pane_cp02

0xad0f,	// (0x0004df98) call_type_pane_cp04

0x3d84,	// (0x0004700d) popup_call2_audio_wait_window_g1

0x3d8c,	// (0x00047015) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x00052725) popup_call2_audio_wait_window_g

0xad27,	// (0x0004dfb0) popup_call2_audio_wait_window_t3

0xd95f,	// (0x00050be8) bg_popup_call2_act_pane_ParamLimits

0xd95f,	// (0x00050be8) bg_popup_call2_act_pane

0xda1f,	// (0x00050ca8) call_type_pane_cp03_ParamLimits

0xda1f,	// (0x00050ca8) call_type_pane_cp03

0xda83,	// (0x00050d0c) popup_call2_audio_first_window_g1_ParamLimits

0xda83,	// (0x00050d0c) popup_call2_audio_first_window_g1

0xdaf3,	// (0x00050d7c) popup_call2_audio_first_window_g2_ParamLimits

0xdaf3,	// (0x00050d7c) popup_call2_audio_first_window_g2

0xd4bd,	// (0x00050746) popup_call2_audio_first_window_g3_ParamLimits

0xd4bd,	// (0x00050746) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x0005272a) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x0005272a) popup_call2_audio_first_window_g

0xdbd1,	// (0x00050e5a) popup_call2_audio_first_window_t1_ParamLimits

0xdbd1,	// (0x00050e5a) popup_call2_audio_first_window_t1

0xdcd4,	// (0x00050f5d) popup_call2_audio_first_window_t4_ParamLimits

0xdcd4,	// (0x00050f5d) popup_call2_audio_first_window_t4

0xddb7,	// (0x00051040) popup_call2_audio_first_window_t5_ParamLimits

0xddb7,	// (0x00051040) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x00052735) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x00052735) popup_call2_audio_first_window_t

0xaf58,	// (0x0004e1e1) bg_popup_call2_act_pane_g1

0xe412,	// (0x0005169b) popup_cale_lunar_info_window_t1

0xe420,	// (0x000516a9) popup_cale_lunar_info_window_t2

0xe42e,	// (0x000516b7) popup_cale_lunar_info_window_t3

0xad05,	// (0x0004df8e) bg_popup_call2_bubble_pane

0xdeb8,	// (0x00051141) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeb8,	// (0x00051141) bg_popup_call2_in_pane_cp01

0xa9e1,	// (0x0004dc6a) call_type_pane_cp02

0x3d94,	// (0x0004701d) popup_call2_audio_out_window_g1_ParamLimits

0x3d94,	// (0x0004701d) popup_call2_audio_out_window_g1

0xdf00,	// (0x00051189) popup_call2_audio_out_window_g2_ParamLimits

0xdf00,	// (0x00051189) popup_call2_audio_out_window_g2

0x3dc0,	// (0x00047049) popup_call2_audio_out_window_g3_ParamLimits

0x3dc0,	// (0x00047049) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x0005273e) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x0005273e) popup_call2_audio_out_window_g

0xdf37,	// (0x000511c0) popup_call2_audio_out_window_t1_ParamLimits

0xdf37,	// (0x000511c0) popup_call2_audio_out_window_t1

0xdf96,	// (0x0005121f) popup_call2_audio_out_window_t2_ParamLimits

0xdf96,	// (0x0005121f) popup_call2_audio_out_window_t2

0xdfea,	// (0x00051273) popup_call2_audio_out_window_t3_ParamLimits

0xdfea,	// (0x00051273) popup_call2_audio_out_window_t3

0xe000,	// (0x00051289) popup_call2_audio_out_window_t4_ParamLimits

0xe000,	// (0x00051289) popup_call2_audio_out_window_t4

0xe016,	// (0x0005129f) popup_call2_audio_out_window_t5_ParamLimits

0xe016,	// (0x0005129f) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x00052747) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x00052747) popup_call2_audio_out_window_t

0xe07a,	// (0x00051303) bg_popup_call2_in_pane_ParamLimits

0xe07a,	// (0x00051303) bg_popup_call2_in_pane

0xe0d6,	// (0x0005135f) popup_call2_audio_in_window_g1_ParamLimits

0xe0d6,	// (0x0005135f) popup_call2_audio_in_window_g1

0xe10e,	// (0x00051397) popup_call2_audio_in_window_g2_ParamLimits

0xe10e,	// (0x00051397) popup_call2_audio_in_window_g2

0xe146,	// (0x000513cf) popup_call2_audio_in_window_g3_ParamLimits

0xe146,	// (0x000513cf) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x00052754) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x00052754) popup_call2_audio_in_window_g

0xe19e,	// (0x00051427) popup_call2_audio_in_window_t1_ParamLimits

0xe19e,	// (0x00051427) popup_call2_audio_in_window_t1

0xe21e,	// (0x000514a7) popup_call2_audio_in_window_t2_ParamLimits

0xe21e,	// (0x000514a7) popup_call2_audio_in_window_t2

0xe29e,	// (0x00051527) popup_call2_audio_in_window_t3_ParamLimits

0xe29e,	// (0x00051527) popup_call2_audio_in_window_t3

0xe2f4,	// (0x0005157d) popup_call2_audio_in_window_t4_ParamLimits

0xe2f4,	// (0x0005157d) popup_call2_audio_in_window_t4

0xe306,	// (0x0005158f) popup_call2_audio_in_window_t5_ParamLimits

0xe306,	// (0x0005158f) popup_call2_audio_in_window_t5

0xe31b,	// (0x000515a4) popup_call2_audio_in_window_t6_ParamLimits

0xe31b,	// (0x000515a4) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x0005275d) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x0005275d) popup_call2_audio_in_window_t

0xaf58,	// (0x0004e1e1) bg_popup_call2_in_pane_g1

0xe43c,	// (0x000516c5) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x000527c5) popup_cale_lunar_info_window_t

0xaf60,	// (0x0004e1e9) bg_popup_call2_rect_pane_ParamLimits

0xaf60,	// (0x0004e1e9) bg_popup_call2_rect_pane

0xad05,	// (0x0004df8e) call2_cli_visual_graphic_pane

0xad05,	// (0x0004df8e) call2_cli_visual_text_pane

0xb328,	// (0x0004e5b1) smil_status_volume_pane_g3

0x0002,

0xaf78,	// (0x0004e201) call2_cli_visual_graphic_pane_g1

0xaf78,	// (0x0004e201) call2_cli_visual_graphic_pane_g2

0xaf78,	// (0x0004e201) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x0005276a) call2_cli_visual_graphic_pane_g

0xe330,	// (0x000515b9) bg_popup_call2_rect_pane_g1

0xb173,	// (0x0004e3fc) bg_popup_call2_rect_pane_g2

0xe338,	// (0x000515c1) bg_popup_call2_rect_pane_g3

0xe340,	// (0x000515c9) bg_popup_call2_rect_pane_g4

0xe348,	// (0x000515d1) bg_popup_call2_rect_pane_g5

0xe350,	// (0x000515d9) bg_popup_call2_rect_pane_g6

0xe358,	// (0x000515e1) bg_popup_call2_rect_pane_g7

0xe360,	// (0x000515e9) bg_popup_call2_rect_pane_g8

0xe368,	// (0x000515f1) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x00052771) bg_popup_call2_rect_pane_g

0xe370,	// (0x000515f9) bg_popup_call2_bubble_pane_g1

0xe378,	// (0x00051601) bg_popup_call2_bubble_pane_g2

0xe380,	// (0x00051609) bg_popup_call2_bubble_pane_g3

0xe388,	// (0x00051611) bg_popup_call2_bubble_pane_g4

0xe390,	// (0x00051619) bg_popup_call2_bubble_pane_g5

0xe398,	// (0x00051621) bg_popup_call2_bubble_pane_g6

0xe3a0,	// (0x00051629) bg_popup_call2_bubble_pane_g7

0xe3a8,	// (0x00051631) bg_popup_call2_bubble_pane_g8

0xe3b0,	// (0x00051639) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x00052784) bg_popup_call2_bubble_pane_g

0x1708,	// (0x00044991) aid_cale_week_size_cell_pane

0x1d37,	// (0x00044fc0) aid_cams_cif_uncrop_pane_ParamLimits

0x1d37,	// (0x00044fc0) aid_cams_cif_uncrop_pane

0x1e8d,	// (0x00045116) aid_cams_size_cell_ParamLimits

0x1e8d,	// (0x00045116) aid_cams_size_cell

0x1ea1,	// (0x0004512a) grid_cams_pane_ParamLimits

0x1ebb,	// (0x00045144) linegrid_cams_pane_ParamLimits

0x1f99,	// (0x00045222) call_video_pane_t1

0x1fb3,	// (0x0004523c) call_video_pane_t2

0x0001,

0xf208,	// (0x00052491) call_video_pane_t

0x23b7,	// (0x00045640) aid_cale_month_size_cell_pane_ParamLimits

0x23b7,	// (0x00045640) aid_cale_month_size_cell_pane

0xf580,	// (0x00052809) smil_status_volume_pane_g

0xb335,	// (0x0004e5be) volume_smil_pane_ParamLimits

0xa844,	// (0x0004dacd) aid_popup2_width_pane

0x1669,	// (0x000448f2) cell_qdial_pane_g4_ParamLimits

0x1669,	// (0x000448f2) cell_qdial_pane_g4

0x32d3,	// (0x0004655c) aid_blid_cardinal_pane_ParamLimits

0x32e3,	// (0x0004656c) aid_blid_destination_pane_ParamLimits

0x32e3,	// (0x0004656c) aid_blid_destination_pane

0xaf60,	// (0x0004e1e9) bg_popup_call_poc_act_pane_ParamLimits

0xaf60,	// (0x0004e1e9) bg_popup_call_poc_act_pane

0xaf60,	// (0x0004e1e9) bg_popup_call_poc_inact_pane_ParamLimits

0xaf60,	// (0x0004e1e9) bg_popup_call_poc_inact_pane

0xe3b8,	// (0x00051641) bg_popup_call_poc_act_pane_g1

0xe3c0,	// (0x00051649) bg_popup_call_poc_act_pane_g2

0xe3c8,	// (0x00051651) bg_popup_call_poc_act_pane_g3

0xe388,	// (0x00051611) bg_popup_call_poc_act_pane_g4

0xe390,	// (0x00051619) bg_popup_call_poc_act_pane_g5

0xe3d0,	// (0x00051659) bg_popup_call_poc_act_pane_g6

0xe3a0,	// (0x00051629) bg_popup_call_poc_act_pane_g7

0xe3d8,	// (0x00051661) bg_popup_call_poc_act_pane_g8

0xad05,	// (0x0004df8e) main_usb_pane

0xb2d8,	// (0x0004e561) popup_cale_lunar_info_window

0x2280,	// (0x00045509) im_reading_pane_t1_ParamLimits

0xc898,	// (0x0004fb21) list_im_pane_ParamLimits

0xc8a9,	// (0x0004fb32) scroll_pane_cp07_ParamLimits

0xad05,	// (0x0004df8e) grid_highlight_pane_cp012

0xaf60,	// (0x0004e1e9) mup_scale_pane_ParamLimits

0xd2b3,	// (0x0005053c) main_usb_pane_g1_ParamLimits

0xd2b3,	// (0x0005053c) main_usb_pane_g1

0x3e13,	// (0x0004709c) main_usb_pane_g2_ParamLimits

0x3e13,	// (0x0004709c) main_usb_pane_g2

0x0001,

0xf525,	// (0x000527ae) main_usb_pane_g_ParamLimits

0xf525,	// (0x000527ae) main_usb_pane_g

0x3e29,	// (0x000470b2) main_usb_pane_t1_ParamLimits

0x3e29,	// (0x000470b2) main_usb_pane_t1

0x3e3b,	// (0x000470c4) main_usb_pane_t2_ParamLimits

0x3e3b,	// (0x000470c4) main_usb_pane_t2

0x3e4d,	// (0x000470d6) main_usb_pane_t3_ParamLimits

0x3e4d,	// (0x000470d6) main_usb_pane_t3

0x3e5f,	// (0x000470e8) main_usb_pane_t4_ParamLimits

0x3e5f,	// (0x000470e8) main_usb_pane_t4

0x3e74,	// (0x000470fd) main_usb_pane_t5_ParamLimits

0x3e74,	// (0x000470fd) main_usb_pane_t5

0x3e89,	// (0x00047112) main_usb_pane_t6_ParamLimits

0x3e89,	// (0x00047112) main_usb_pane_t6

0x0005,

0xf52a,	// (0x000527b3) main_usb_pane_t_ParamLimits

0x3272,	// (0x000464fb) aid_text_placing

0x327d,	// (0x00046506) main_location2_pane_t1_ParamLimits

0x3293,	// (0x0004651c) main_location2_pane_t2_ParamLimits

0x32a9,	// (0x00046532) main_location2_pane_t3_ParamLimits

0x32bf,	// (0x00046548) main_location2_pane_t4_ParamLimits

0x32bf,	// (0x00046548) main_location2_pane_t4

0xf344,	// (0x000525cd) main_location2_pane_t_ParamLimits

0xaf8e,	// (0x0004e217) find_pinb_pane_g2_ParamLimits

0xaf8e,	// (0x0004e217) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00052349) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00052349) find_pinb_pane_g

0xaf9a,	// (0x0004e223) find_pinb_pane_t1_ParamLimits

0xafac,	// (0x0004e235) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0005234e) find_pinb_pane_t_ParamLimits

0xad05,	// (0x0004df8e) main_call3_pane

0x29bc,	// (0x00045c45) cale_month_day_heading_pane_t1_ParamLimits

0x2a42,	// (0x00045ccb) cale_month_day_heading_pane_t2_ParamLimits

0x2abb,	// (0x00045d44) cale_month_day_heading_pane_t3_ParamLimits

0x2b34,	// (0x00045dbd) cale_month_day_heading_pane_t4_ParamLimits

0x2bb5,	// (0x00045e3e) cale_month_day_heading_pane_t5_ParamLimits

0x2c3e,	// (0x00045ec7) cale_month_day_heading_pane_t6_ParamLimits

0x2ccf,	// (0x00045f58) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x000524c9) cale_month_day_heading_pane_t_ParamLimits

0xcb1c,	// (0x0004fda5) smil_status_volume_pane

0x3860,	// (0x00046ae9) postcard_address_pane_ParamLimits

0x3860,	// (0x00046ae9) postcard_address_pane

0x3876,	// (0x00046aff) postcard_message_pane_ParamLimits

0x3876,	// (0x00046aff) postcard_message_pane

0x3dec,	// (0x00047075) call2_cli_visual_pane_t1_ParamLimits

0x3dec,	// (0x00047075) call2_cli_visual_pane_t1

0xe564,	// (0x000517ed) postcard_message_pane_t1_ParamLimits

0xe564,	// (0x000517ed) postcard_message_pane_t1

0xe54c,	// (0x000517d5) postcard_address_pane_t1_ParamLimits

0xe54c,	// (0x000517d5) postcard_address_pane_t1

0x45bf,	// (0x00047848) popup_call3_audio_in_window_ParamLimits

0x45bf,	// (0x00047848) popup_call3_audio_in_window

0x4444,	// (0x000476cd) bg_popup_call3_in_pane_ParamLimits

0x4444,	// (0x000476cd) bg_popup_call3_in_pane

0x44c0,	// (0x00047749) popup_call3_audio_in_window_g1_ParamLimits

0x44c0,	// (0x00047749) popup_call3_audio_in_window_g1

0x44e0,	// (0x00047769) popup_call3_audio_in_window_g2_ParamLimits

0x44e0,	// (0x00047769) popup_call3_audio_in_window_g2

0x4500,	// (0x00047789) popup_call3_audio_in_window_g3_ParamLimits

0x4500,	// (0x00047789) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x00052810) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x00052810) popup_call3_audio_in_window_g

0x4531,	// (0x000477ba) popup_call3_audio_in_window_t1_ParamLimits

0x4531,	// (0x000477ba) popup_call3_audio_in_window_t1

0x456f,	// (0x000477f8) popup_call3_audio_in_window_t2_ParamLimits

0x456f,	// (0x000477f8) popup_call3_audio_in_window_t2

0x45ad,	// (0x00047836) popup_call3_audio_in_window_t3_ParamLimits

0x45ad,	// (0x00047836) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x00052819) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x00052819) popup_call3_audio_in_window_t

0xc7a5,	// (0x0004fa2e) bg_popup_call3_rect_pane

0xe330,	// (0x000515b9) bg_popup_call3_rect_pane_g1

0xb173,	// (0x0004e3fc) bg_popup_call3_rect_pane_g2

0xe338,	// (0x000515c1) bg_popup_call3_rect_pane_g3

0xe340,	// (0x000515c9) bg_popup_call3_rect_pane_g4

0xe348,	// (0x000515d1) bg_popup_call3_rect_pane_g5

0xe350,	// (0x000515d9) bg_popup_call3_rect_pane_g6

0xe358,	// (0x000515e1) bg_popup_call3_rect_pane_g7

0xa832,	// (0x0004dabb) mup_visualizer_osc_pane

0xa832,	// (0x0004dabb) mup_visualizer_spec_pane

0x4474,	// (0x000476fd) call3_video_qcif_pane_ParamLimits

0x4474,	// (0x000476fd) call3_video_qcif_pane

0x4487,	// (0x00047710) call3_video_qcif_uncrop_pane_ParamLimits

0x4487,	// (0x00047710) call3_video_qcif_uncrop_pane

0x4497,	// (0x00047720) call3_video_subqcif_pane_ParamLimits

0x4497,	// (0x00047720) call3_video_subqcif_pane

0x44ad,	// (0x00047736) call3_video_subqcif_uncrop_pane_ParamLimits

0x44ad,	// (0x00047736) call3_video_subqcif_uncrop_pane

0x4520,	// (0x000477a9) popup_call3_audio_in_window_g4_ParamLimits

0x4520,	// (0x000477a9) popup_call3_audio_in_window_g4

0xa832,	// (0x0004dabb) mup_spec_half_pane

0xa832,	// (0x0004dabb) mup_spec_half_pane_cp

0xa832,	// (0x0004dabb) mup_osc_middle_pane

0xc7db,	// (0x0004fa64) mup_visualizer_osc_pane_g1

0xe4ff,	// (0x00051788) mup_spec_bar_pane_ParamLimits

0xe4ff,	// (0x00051788) mup_spec_bar_pane

0xc7db,	// (0x0004fa64) mup_spec_bar_pane_g1

0xc7db,	// (0x0004fa64) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x00052647) mup_spec_bar_pane_g

0x1708,	// (0x00044991) aid_cale_week_size_cell_pane_ParamLimits

0x1722,	// (0x000449ab) bg_cale_heading_pane_ParamLimits

0x1746,	// (0x000449cf) bg_cale_pane_cp01_ParamLimits

0x1763,	// (0x000449ec) cale_week_corner_pane_ParamLimits

0x1782,	// (0x00044a0b) cale_week_day_heading_pane_ParamLimits

0x17ab,	// (0x00044a34) cale_week_scroll_pane_g1_ParamLimits

0x17ca,	// (0x00044a53) cale_week_scroll_pane_g2_ParamLimits

0x17e2,	// (0x00044a6b) cale_week_scroll_pane_g3_ParamLimits

0x17fa,	// (0x00044a83) cale_week_scroll_pane_g4_ParamLimits

0x1812,	// (0x00044a9b) cale_week_scroll_pane_g5_ParamLimits

0x1832,	// (0x00044abb) cale_week_scroll_pane_g6_ParamLimits

0x1852,	// (0x00044adb) cale_week_scroll_pane_g7_ParamLimits

0x1876,	// (0x00044aff) cale_week_scroll_pane_g8_ParamLimits

0x189a,	// (0x00044b23) cale_week_scroll_pane_g9_ParamLimits

0x18b2,	// (0x00044b3b) cale_week_scroll_pane_g10_ParamLimits

0x18ca,	// (0x00044b53) cale_week_scroll_pane_g11_ParamLimits

0x18e2,	// (0x00044b6b) cale_week_scroll_pane_g12_ParamLimits

0x1906,	// (0x00044b8f) cale_week_scroll_pane_g13_ParamLimits

0x1906,	// (0x00044b8f) cale_week_scroll_pane_g14_ParamLimits

0x1906,	// (0x00044b8f) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x000523da) cale_week_scroll_pane_g_ParamLimits

0x194e,	// (0x00044bd7) cale_week_time_pane_ParamLimits

0x1972,	// (0x00044bfb) grid_cale_week_pane_ParamLimits

0xc71b,	// (0x0004f9a4) listscroll_cale_week_pane_t1

0xc72d,	// (0x0004f9b6) scroll_pane_cp08_ParamLimits

0x242f,	// (0x000456b8) cale_month_corner_pane_ParamLimits

0xcaf2,	// (0x0004fd7b) cale_month_pane_t1

0x2937,	// (0x00045bc0) cale_month_week_pane_ParamLimits

0x30b2,	// (0x0004633b) popup_call_status_window_g1_ParamLimits

0x30c6,	// (0x0004634f) popup_call_status_window_g2_ParamLimits

0x30da,	// (0x00046363) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x00052554) popup_call_status_window_g_ParamLimits

0xcedf,	// (0x00050168) aid_call2_pane

0x0807,	// (0x00043a90) msg_header_pane_g1

0x3860,	// (0x00046ae9) postcard_address2_pane_ParamLimits

0x3860,	// (0x00046ae9) postcard_address2_pane

0x3876,	// (0x00046aff) postcard_message2_pane_ParamLimits

0x3876,	// (0x00046aff) postcard_message2_pane

0x4421,	// (0x000476aa) message2_row_pane_ParamLimits

0x4421,	// (0x000476aa) message2_row_pane

0xe4b9,	// (0x00051742) address2_row_pane_ParamLimits

0xe4b9,	// (0x00051742) address2_row_pane

0xe4cc,	// (0x00051755) postcard_message2_row_pane_g1

0xe4d4,	// (0x0005175d) postcard_message2_row_pane_t1

0xe4cc,	// (0x00051755) address2_row_pane_g1

0xe4d4,	// (0x0005175d) address2_row_pane_t1

0x1cdf,	// (0x00044f68) aid_size_cell_vorec

0xad05,	// (0x0004df8e) main_rss_pane

0xe4e2,	// (0x0005176b) rss_list_single_pane_ParamLimits

0xe4e2,	// (0x0005176b) rss_list_single_pane

0xe4f0,	// (0x00051779) rss_list_single_pane_t1

0xe4f0,	// (0x00051779) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x00052804) rss_list_single_pane_t

0xad05,	// (0x0004df8e) main_camera2_pane

0xad05,	// (0x0004df8e) main_video2_pane

0xb34a,	// (0x0004e5d3) cams_zoom_pane_cp2_ParamLimits

0xb34a,	// (0x0004e5d3) cams_zoom_pane_cp2

0xb34a,	// (0x0004e5d3) image2_vga_pane_ParamLimits

0xb34a,	// (0x0004e5d3) image2_vga_pane

0xb358,	// (0x0004e5e1) main_camera2_pane_g1_ParamLimits

0xb358,	// (0x0004e5e1) main_camera2_pane_g1

0xb358,	// (0x0004e5e1) main_camera2_pane_g2_ParamLimits

0xb358,	// (0x0004e5e1) main_camera2_pane_g2

0xb358,	// (0x0004e5e1) main_camera2_pane_g3_ParamLimits

0xb358,	// (0x0004e5e1) main_camera2_pane_g3

0xb358,	// (0x0004e5e1) main_camera2_pane_g4_ParamLimits

0xb358,	// (0x0004e5e1) main_camera2_pane_g4

0xb358,	// (0x0004e5e1) main_camera2_pane_g5_ParamLimits

0xb358,	// (0x0004e5e1) main_camera2_pane_g5

0xb358,	// (0x0004e5e1) main_camera2_pane_g6_ParamLimits

0xb358,	// (0x0004e5e1) main_camera2_pane_g6

0xb358,	// (0x0004e5e1) main_camera2_pane_g7_ParamLimits

0xb358,	// (0x0004e5e1) main_camera2_pane_g7

0xb358,	// (0x0004e5e1) main_camera2_pane_g8_ParamLimits

0xb358,	// (0x0004e5e1) main_camera2_pane_g8

0x0008,

0xf597,	// (0x00052820) main_camera2_pane_g_ParamLimits

0xf597,	// (0x00052820) main_camera2_pane_g

0x45e1,	// (0x0004786a) main_camera2_pane_t1_ParamLimits

0x45e1,	// (0x0004786a) main_camera2_pane_t1

0x45e1,	// (0x0004786a) main_camera2_pane_t2_ParamLimits

0x45e1,	// (0x0004786a) main_camera2_pane_t2

0x45e1,	// (0x0004786a) main_camera2_pane_t3_ParamLimits

0x45e1,	// (0x0004786a) main_camera2_pane_t3

0x45e1,	// (0x0004786a) main_camera2_pane_t4_ParamLimits

0x45e1,	// (0x0004786a) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x00052833) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x00052833) main_camera2_pane_t

0xe580,	// (0x00051809) cams_zoom_pane_cp4_ParamLimits

0xe580,	// (0x00051809) cams_zoom_pane_cp4

0xd4cb,	// (0x00050754) image2_cif_pane_ParamLimits

0xd4cb,	// (0x00050754) image2_cif_pane

0xa8af,	// (0x0004db38) image2_subqcif_pane_ParamLimits

0xa8af,	// (0x0004db38) image2_subqcif_pane

0x45f5,	// (0x0004787e) main_video2_pane_g1_ParamLimits

0x45f5,	// (0x0004787e) main_video2_pane_g1

0x45f5,	// (0x0004787e) main_video2_pane_g2_ParamLimits

0x45f5,	// (0x0004787e) main_video2_pane_g2

0x45f5,	// (0x0004787e) main_video2_pane_g3_ParamLimits

0x45f5,	// (0x0004787e) main_video2_pane_g3

0x45f5,	// (0x0004787e) main_video2_pane_g4_ParamLimits

0x45f5,	// (0x0004787e) main_video2_pane_g4

0x45f5,	// (0x0004787e) main_video2_pane_g5_ParamLimits

0x45f5,	// (0x0004787e) main_video2_pane_g5

0x45f5,	// (0x0004787e) main_video2_pane_g6_ParamLimits

0x45f5,	// (0x0004787e) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x00052842) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x00052842) main_video2_pane_g

0x4603,	// (0x0004788c) main_video2_pane_t1_ParamLimits

0x4603,	// (0x0004788c) main_video2_pane_t1

0x4603,	// (0x0004788c) main_video2_pane_t2_ParamLimits

0x4603,	// (0x0004788c) main_video2_pane_t2

0x4603,	// (0x0004788c) main_video2_pane_t3_ParamLimits

0x4603,	// (0x0004788c) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x0005284f) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x0005284f) main_video2_pane_t

0x3f22,	// (0x000471ab) call_muted_g2

0x0001,

0xf56d,	// (0x000527f6) call_muted_g

0xad05,	// (0x0004df8e) main_mup2_pane

0xe2c4,	// (0x0005154d) main_mup2_pane_g1_ParamLimits

0xe2c4,	// (0x0005154d) main_mup2_pane_g1

0xe2c4,	// (0x0005154d) main_mup2_pane_g2_ParamLimits

0xe2c4,	// (0x0005154d) main_mup2_pane_g2

0xc7db,	// (0x0004fa64) main_mup_pane_g13_cp1

0xa832,	// (0x0004dabb) mup_volume_pane_cp1

0xe2c4,	// (0x0005154d) main_mup2_pane_g4_ParamLimits

0xe2c4,	// (0x0005154d) main_mup2_pane_g4

0xe2c4,	// (0x0005154d) main_mup2_pane_g5_ParamLimits

0xe2c4,	// (0x0005154d) main_mup2_pane_g5

0xe2c4,	// (0x0005154d) main_mup2_pane_g6_ParamLimits

0xe2c4,	// (0x0005154d) main_mup2_pane_g6

0xe2c4,	// (0x0005154d) main_mup2_pane_g7_ParamLimits

0xe2c4,	// (0x0005154d) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x00052856) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x00052856) main_mup2_pane_g

0xe2d2,	// (0x0005155b) main_mup2_pane_t1_ParamLimits

0xe2d2,	// (0x0005155b) main_mup2_pane_t1

0xe2d2,	// (0x0005155b) main_mup2_pane_t2_ParamLimits

0xe2d2,	// (0x0005155b) main_mup2_pane_t2

0xe2d2,	// (0x0005155b) main_mup2_pane_t3_ParamLimits

0xe2d2,	// (0x0005155b) main_mup2_pane_t3

0xe2d2,	// (0x0005155b) main_mup2_pane_t4_ParamLimits

0xe2d2,	// (0x0005155b) main_mup2_pane_t4

0xe2d2,	// (0x0005155b) main_mup2_pane_t5_ParamLimits

0xe2d2,	// (0x0005155b) main_mup2_pane_t5

0xe2d2,	// (0x0005155b) main_mup2_pane_t6_ParamLimits

0xe2d2,	// (0x0005155b) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x00052865) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x00052865) main_mup2_pane_t

0xe2e6,	// (0x0005156f) mup2_visualizer_pane_ParamLimits

0xe2e6,	// (0x0005156f) mup2_visualizer_pane

0xe2e6,	// (0x0005156f) mup_progress_pane_cp_ParamLimits

0xe2e6,	// (0x0005156f) mup_progress_pane_cp

0xe58e,	// (0x00051817) mup_volume_pane_cp_ParamLimits

0xe58e,	// (0x00051817) mup_volume_pane_cp

0xafdb,	// (0x0004e264) mup2_visualizer_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) mup2_visualizer_pane_g1

0xafe9,	// (0x0004e272) mup2_visualizer_pane_g2_ParamLimits

0xafe9,	// (0x0004e272) mup2_visualizer_pane_g2

0xafe9,	// (0x0004e272) mup2_visualizer_pane_g3_ParamLimits

0xafe9,	// (0x0004e272) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00052353) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00052353) mup2_visualizer_pane_g

0xd3fc,	// (0x00050685) aid_size_cell_fmradio

0x40d2,	// (0x0004735b) aid_height_parent_landcape

0xc927,	// (0x0004fbb0) wml_content_pane_cp

0xc92f,	// (0x0004fbb8) wml_tabs_pane

0xc938,	// (0x0004fbc1) popup_wml_miniature_window

0xc940,	// (0x0004fbc9) scroll_pane_cp021

0xc954,	// (0x0004fbdd) wml_content_pane_comp8

0xad05,	// (0x0004df8e) bg_popup_sub_pane_cp05

0xe5a4,	// (0x0005182d) popup_wml_miniature_window_g1

0xe5ac,	// (0x00051835) wml_miniature_view_pane

0x4617,	// (0x000478a0) aid_size_wml_view

0x461f,	// (0x000478a8) wml_miniature_view_pane_g1

0x4628,	// (0x000478b1) wml_miniature_view_pane_g2

0x4631,	// (0x000478ba) wml_miniature_view_pane_g3

0x4639,	// (0x000478c2) wml_miniature_view_pane_g4

0x4641,	// (0x000478ca) wml_miniature_view_pane_g5

0x4649,	// (0x000478d2) wml_miniature_view_pane_g6

0x4651,	// (0x000478da) wml_miniature_view_pane_g7

0x4659,	// (0x000478e2) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x00052872) wml_miniature_view_pane_g

0xe5b4,	// (0x0005183d) background_graphic_ParamLimits

0xe5b4,	// (0x0005183d) background_graphic

0xe5c0,	// (0x00051849) wml_tabs_2_pane

0xe5c9,	// (0x00051852) wml_tabs_3_pane_ParamLimits

0xe5c9,	// (0x00051852) wml_tabs_3_pane

0xe5db,	// (0x00051864) wml_tabs_4_pane_ParamLimits

0xe5db,	// (0x00051864) wml_tabs_4_pane

0xe5f1,	// (0x0005187a) wml_tabs_5_pane_ParamLimits

0xe5f1,	// (0x0005187a) wml_tabs_5_pane

0xe60b,	// (0x00051894) wml_tabs_pane_g2_ParamLimits

0xe60b,	// (0x00051894) wml_tabs_pane_g2

0xe620,	// (0x000518a9) wml_tabs_pane_g3_ParamLimits

0xe620,	// (0x000518a9) wml_tabs_pane_g3

0xe635,	// (0x000518be) wml_tabs_2_active_pane_ParamLimits

0xe635,	// (0x000518be) wml_tabs_2_active_pane

0xe635,	// (0x000518be) wml_tabs_2_passive_pane_ParamLimits

0xe635,	// (0x000518be) wml_tabs_2_passive_pane

0x4661,	// (0x000478ea) wml_tabs_3_active_pane_cp_ParamLimits

0x4661,	// (0x000478ea) wml_tabs_3_active_pane_cp

0x4676,	// (0x000478ff) wml_tabs_3_passive_pane_ParamLimits

0x4676,	// (0x000478ff) wml_tabs_3_passive_pane

0x4689,	// (0x00047912) wml_tabs_3_passive_pane_cp_ParamLimits

0x4689,	// (0x00047912) wml_tabs_3_passive_pane_cp

0x46a0,	// (0x00047929) tabs_4_active_pane

0x46a8,	// (0x00047931) tabs_4_passive_pane

0x46b2,	// (0x0004793b) tabs_4_passive_pane_cp

0x46ba,	// (0x00047943) tabs_4_passive_pane_cp2

0x3e0b,	// (0x00047094) aid_height_text

0xe2e6,	// (0x0005156f) mup_volume_cont_pane_ParamLimits

0xe2e6,	// (0x0005156f) mup_volume_cont_pane

0xa832,	// (0x0004dabb) aid_size_cell_pinb

0xa832,	// (0x0004dabb) aid_size_list_pinb

0xe2e6,	// (0x0005156f) mup2_volume_cont_pane_ParamLimits

0xe2e6,	// (0x0005156f) mup2_volume_cont_pane

0xb37a,	// (0x0004e603) mup2_volume_cont_pane_g1_ParamLimits

0xb37a,	// (0x0004e603) mup2_volume_cont_pane_g1

0x110a,	// (0x00044393) aid_size_cell_touch_ParamLimits

0x110a,	// (0x00044393) aid_size_cell_touch

0x1336,	// (0x000445bf) touch_pane_ParamLimits

0x1336,	// (0x000445bf) touch_pane

0xa832,	// (0x0004dabb) main_rss2_pane

0xe64c,	// (0x000518d5) listscroll_rss2_pane

0xe655,	// (0x000518de) rss2_navigation_pane

0xe65d,	// (0x000518e6) list_rss2_pane

0xcff7,	// (0x00050280) scroll_pane_cp22

0xe665,	// (0x000518ee) rss2_navigation_pane_g1

0xe66e,	// (0x000518f7) rss2_navigation_pane_g2

0xe676,	// (0x000518ff) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x00052883) rss2_navigation_pane_g

0xe67e,	// (0x00051907) rss2_navigation_pane_t1

0x46c4,	// (0x0004794d) rss2_list_single_pane_ParamLimits

0x46c4,	// (0x0004794d) rss2_list_single_pane

0xe68c,	// (0x00051915) rss2_list_single_pane_t2

0xe69a,	// (0x00051923) rss2_list_single_pane_t3_ParamLimits

0xe69a,	// (0x00051923) rss2_list_single_pane_t3

0xe6b7,	// (0x00051940) rss2_list_single_pane_t4

0x2f83,	// (0x0004620c) smil_status_pane_g1

0xa8af,	// (0x0004db38) main_image2_pane_ParamLimits

0xa8af,	// (0x0004db38) main_image2_pane

0xb358,	// (0x0004e5e1) main_camera2_pane_g9_ParamLimits

0xb358,	// (0x0004e5e1) main_camera2_pane_g9

0x45e1,	// (0x0004786a) main_camera2_pane_t5_ParamLimits

0x45e1,	// (0x0004786a) main_camera2_pane_t5

0xb366,	// (0x0004e5ef) main_camera2_pane_t6_ParamLimits

0xb366,	// (0x0004e5ef) main_camera2_pane_t6

0x46de,	// (0x00047967) main_image2_pane_g1_ParamLimits

0x46de,	// (0x00047967) main_image2_pane_g1

0x3aba,	// (0x00046d43) smil2_video_pane_ParamLimits

0x3aba,	// (0x00046d43) smil2_video_pane

0xa860,	// (0x0004dae9) aid_zoom_text_primary_cp

0xa8a5,	// (0x0004db2e) popup_preview_fixed_window

0xc890,	// (0x0004fb19) im_reading_pane_g1

0x45d3,	// (0x0004785c) cams2_bc_adjust_pane_cp_ParamLimits

0x45d3,	// (0x0004785c) cams2_bc_adjust_pane_cp

0xe2e6,	// (0x0005156f) cams2_bc_adjust_pane_ParamLimits

0xe2e6,	// (0x0005156f) cams2_bc_adjust_pane

0xc7db,	// (0x0004fa64) cams2_bc_adjust_pane_g1

0xa832,	// (0x0004dabb) cams2_slider_pane

0xc7db,	// (0x0004fa64) cams2_slider_pane_g1

0xc7db,	// (0x0004fa64) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x0005288a) cams2_slider_pane_g

0x13cc,	// (0x00044655) calc_display_pane_ParamLimits

0x13f1,	// (0x0004467a) calc_paper_pane_ParamLimits

0x1414,	// (0x0004469d) grid_calc_pane_ParamLimits

0xb25f,	// (0x0004e4e8) popup_clock_digital_window_t1_ParamLimits

0xd399,	// (0x00050622) main_image_pane_t1

0x13ac,	// (0x00044635) aid_size_cell_calc_ParamLimits

0x13ac,	// (0x00044635) aid_size_cell_calc

0x4118,	// (0x000473a1) popup_blid_sat_info2_window_ParamLimits

0x4118,	// (0x000473a1) popup_blid_sat_info2_window

0xe6c5,	// (0x0005194e) aid_size_cell_blid

0xd4cb,	// (0x00050754) bg_popup_window_pane_cp07

0xe6e2,	// (0x0005196b) grid_popup_blid_pane

0xe6ec,	// (0x00051975) heading_pane_cp05_ParamLimits

0xe6ec,	// (0x00051975) heading_pane_cp05

0xe7b6,	// (0x00051a3f) cell_popup_blid_pane_ParamLimits

0xe7b6,	// (0x00051a3f) cell_popup_blid_pane

0xe7e0,	// (0x00051a69) cell_popup_blid_pane_g1

0xe7e8,	// (0x00051a71) cell_popup_blid_pane_t1

0xe2e6,	// (0x0005156f) mup2_indicator_pane_ParamLimits

0xe2e6,	// (0x0005156f) mup2_indicator_pane

0xa832,	// (0x0004dabb) mup2_visualizer_osc_pane

0xe58e,	// (0x00051817) mup2_visualizer_spec_pane_ParamLimits

0xe58e,	// (0x00051817) mup2_visualizer_spec_pane

0xa832,	// (0x0004dabb) mup2_spec_half_pane

0xa832,	// (0x0004dabb) mup2_spec_half_pane_cp

0xe7f6,	// (0x00051a7f) mup2_spec_bar_pane_ParamLimits

0xe7f6,	// (0x00051a7f) mup2_spec_bar_pane

0xc7db,	// (0x0004fa64) mup2_spec_bar_pane_g1

0xe815,	// (0x00051a9e) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x000528b0) mup2_spec_bar_pane_g

0xa832,	// (0x0004dabb) mup2_osc_middle_pane

0xc7db,	// (0x0004fa64) mup2_visualizer_osc_pane_g1

0xa8dd,	// (0x0004db66) popup_number_entry_window_t1_ParamLimits

0xa8f0,	// (0x0004db79) popup_number_entry_window_t2_ParamLimits

0xa902,	// (0x0004db8b) popup_number_entry_window_t3_ParamLimits

0xa914,	// (0x0004db9d) popup_number_entry_window_t5_ParamLimits

0xa914,	// (0x0004db9d) popup_number_entry_window_t5

0xf06b,	// (0x000522f4) popup_number_entry_window_t_ParamLimits

0xa949,	// (0x0004dbd2) text_title_cp2_ParamLimits

0xb29e,	// (0x0004e527) aid_hotspot_pointer_text2_pane

0xb2c4,	// (0x0004e54d) main_viewer_pane_g9_ParamLimits

0xb2c4,	// (0x0004e54d) main_viewer_pane_g9

0xcaf2,	// (0x0004fd7b) cale_month_pane_t1_ParamLimits

0xcb2f,	// (0x0004fdb8) bg_cale_pane_ParamLimits

0xcb47,	// (0x0004fdd0) list_cale_pane_ParamLimits

0xcb58,	// (0x0004fde1) listscroll_cale_day_pane_t1

0xcb6a,	// (0x0004fdf3) scroll_pane_cp09_ParamLimits

0x34aa,	// (0x00046733) main_mup_eq_pane_t1_ParamLimits

0x34aa,	// (0x00046733) main_mup_eq_pane_t1

0x34c6,	// (0x0004674f) main_mup_eq_pane_t2_ParamLimits

0x34c6,	// (0x0004674f) main_mup_eq_pane_t2

0x34e2,	// (0x0004676b) main_mup_eq_pane_t3_ParamLimits

0x34e2,	// (0x0004676b) main_mup_eq_pane_t3

0x3500,	// (0x00046789) main_mup_eq_pane_t4_ParamLimits

0x3500,	// (0x00046789) main_mup_eq_pane_t4

0x351e,	// (0x000467a7) main_mup_eq_pane_t5_ParamLimits

0x351e,	// (0x000467a7) main_mup_eq_pane_t5

0x353c,	// (0x000467c5) main_mup_eq_pane_t6_ParamLimits

0x353c,	// (0x000467c5) main_mup_eq_pane_t6

0x3552,	// (0x000467db) main_mup_eq_pane_t7_ParamLimits

0x3552,	// (0x000467db) main_mup_eq_pane_t7

0x3568,	// (0x000467f1) main_mup_eq_pane_t8_ParamLimits

0x3568,	// (0x000467f1) main_mup_eq_pane_t8

0x357e,	// (0x00046807) main_mup_eq_pane_t9_ParamLimits

0x357e,	// (0x00046807) main_mup_eq_pane_t9

0x359a,	// (0x00046823) main_mup_eq_pane_t10_ParamLimits

0x359a,	// (0x00046823) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x00052653) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x00052653) main_mup_eq_pane_t

0x366f,	// (0x000468f8) mup_equalizer_pane_cp5_ParamLimits

0x3687,	// (0x00046910) mup_equalizer_pane_cp6_ParamLimits

0x369f,	// (0x00046928) mup_equalizer_pane_cp7_ParamLimits

0xa832,	// (0x0004dabb) main_gallery_pane

0xe51e,	// (0x000517a7) smil2_volume_pane

0xe526,	// (0x000517af) smil_status_volume_pane_g1_ParamLimits

0xe539,	// (0x000517c2) smil_status_volume_pane_g2_ParamLimits

0xb328,	// (0x0004e5b1) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x00052809) smil_status_volume_pane_g_ParamLimits

0xd4cb,	// (0x00050754) bg_popup_window_pane_cp07_ParamLimits

0xe6cd,	// (0x00051956) blid_firmament_pane

0xa8af,	// (0x0004db38) aid_size_cell_gallery_ParamLimits

0xa8af,	// (0x0004db38) aid_size_cell_gallery

0xa8af,	// (0x0004db38) grid_gallery_pane_ParamLimits

0xa8af,	// (0x0004db38) grid_gallery_pane

0xd4cb,	// (0x00050754) cell_gallery_pane_ParamLimits

0xd4cb,	// (0x00050754) cell_gallery_pane

0xa8af,	// (0x0004db38) bg_cell_gallery_focus_pane_ParamLimits

0xa8af,	// (0x0004db38) bg_cell_gallery_focus_pane

0xafdb,	// (0x0004e264) cell_gallery_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) cell_gallery_pane_g1

0xafdb,	// (0x0004e264) cell_gallery_pane_g2_ParamLimits

0xafdb,	// (0x0004e264) cell_gallery_pane_g2

0xafdb,	// (0x0004e264) cell_gallery_pane_g3_ParamLimits

0xafdb,	// (0x0004e264) cell_gallery_pane_g3

0xafe9,	// (0x0004e272) cell_gallery_pane_g4_ParamLimits

0xafe9,	// (0x0004e272) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x000528b5) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x000528b5) cell_gallery_pane_g

0xe81f,	// (0x00051aa8) bg_cell_gallery_focus_pane_g1

0xe827,	// (0x00051ab0) bg_cell_gallery_focus_pane_g2

0xe82f,	// (0x00051ab8) bg_cell_gallery_focus_pane_g3

0xe837,	// (0x00051ac0) bg_cell_gallery_focus_pane_g4

0xe83f,	// (0x00051ac8) bg_cell_gallery_focus_pane_g5

0xe847,	// (0x00051ad0) bg_cell_gallery_focus_pane_g6

0xe84f,	// (0x00051ad8) bg_cell_gallery_focus_pane_g7

0xe857,	// (0x00051ae0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x000528be) bg_cell_gallery_focus_pane_g

0xe85f,	// (0x00051ae8) aid_firma_cardinal

0xe873,	// (0x00051afc) blid_firmament_pane_t1

0xe88a,	// (0x00051b13) blid_firmament_pane_t2

0xe8a1,	// (0x00051b2a) blid_firmament_pane_t3

0xe8b8,	// (0x00051b41) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x000528cf) blid_firmament_pane_t

0xe8cf,	// (0x00051b58) blid_sat_info_pane

0xc7db,	// (0x0004fa64) blid_sat_info_pane_g1

0xc7db,	// (0x0004fa64) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x00052647) blid_sat_info_pane_g

0xe8df,	// (0x00051b68) blid_sat_info_pane_t1

0xe8ed,	// (0x00051b76) smil2_volume_content_pane

0xe8f6,	// (0x00051b7f) smil2_volume_pane_g1

0xb10a,	// (0x0004e393) smil2_volume_content_pane_g1

0xe8fe,	// (0x00051b87) smil2_volume_content_pane_g2

0xe907,	// (0x00051b90) smil2_volume_content_pane_g3

0xe910,	// (0x00051b99) smil2_volume_content_pane_g4

0xe919,	// (0x00051ba2) smil2_volume_content_pane_g5

0xe922,	// (0x00051bab) smil2_volume_content_pane_g6

0xe92b,	// (0x00051bb4) smil2_volume_content_pane_g7

0xe934,	// (0x00051bbd) smil2_volume_content_pane_g8

0xe93d,	// (0x00051bc6) smil2_volume_content_pane_g9

0xe946,	// (0x00051bcf) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x000528d8) smil2_volume_content_pane_g

0x1a40,	// (0x00044cc9) cale_week_day_heading_pane_t1_ParamLimits

0x1a6a,	// (0x00044cf3) cale_week_day_heading_pane_t2_ParamLimits

0x1a99,	// (0x00044d22) cale_week_day_heading_pane_t3_ParamLimits

0x1ac8,	// (0x00044d51) cale_week_day_heading_pane_t4_ParamLimits

0x1af7,	// (0x00044d80) cale_week_day_heading_pane_t5_ParamLimits

0x1b2a,	// (0x00044db3) cale_week_day_heading_pane_t6_ParamLimits

0x1b61,	// (0x00044dea) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x000523fb) cale_week_day_heading_pane_t_ParamLimits

0xc74a,	// (0x0004f9d3) bg_cale_side_pane_ParamLimits

0x1b8b,	// (0x00044e14) cale_week_time_pane_t1_ParamLimits

0x1ba5,	// (0x00044e2e) cale_week_time_pane_t2_ParamLimits

0x1bbf,	// (0x00044e48) cale_week_time_pane_t3_ParamLimits

0x1bd9,	// (0x00044e62) cale_week_time_pane_t4_ParamLimits

0x1bf3,	// (0x00044e7c) cale_week_time_pane_t5_ParamLimits

0x1c0d,	// (0x00044e96) cale_week_time_pane_t6_ParamLimits

0x1c2d,	// (0x00044eb6) cale_week_time_pane_t7_ParamLimits

0x1c53,	// (0x00044edc) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0005240a) cale_week_time_pane_t_ParamLimits

0x1c79,	// (0x00044f02) cell_cale_week_pane_g2_ParamLimits

0xc74a,	// (0x0004f9d3) bg_cale_side_pane_cp01_ParamLimits

0x2d60,	// (0x00045fe9) cale_month_week_pane_t1_ParamLimits

0x2d79,	// (0x00046002) cale_month_week_pane_t2_ParamLimits

0x2d92,	// (0x0004601b) cale_month_week_pane_t3_ParamLimits

0x2dab,	// (0x00046034) cale_month_week_pane_t4_ParamLimits

0x2dc4,	// (0x0004604d) cale_month_week_pane_t5_ParamLimits

0x2ddd,	// (0x00046066) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x000524d8) cale_month_week_pane_t_ParamLimits

0xb1df,	// (0x0004e468) cell_cale_month_pane_g1_ParamLimits

0xa832,	// (0x0004dabb) main_cale_event_viewer_pane

0xa832,	// (0x0004dabb) listscroll_cale_event_viewer_pane

0xe94f,	// (0x00051bd8) list_cale_ev_pane

0xe957,	// (0x00051be0) scroll_pane_cp023

0x46f4,	// (0x0004797d) field_cale_ev_pane_ParamLimits

0x46f4,	// (0x0004797d) field_cale_ev_pane

0xe963,	// (0x00051bec) field_cale_ev_content_pane_ParamLimits

0xe963,	// (0x00051bec) field_cale_ev_content_pane

0xe96f,	// (0x00051bf8) field_cale_ev_pane_g1_ParamLimits

0xe96f,	// (0x00051bf8) field_cale_ev_pane_g1

0xe97b,	// (0x00051c04) field_cale_ev_pane_g2_ParamLimits

0xe97b,	// (0x00051c04) field_cale_ev_pane_g2

0xe99f,	// (0x00051c28) field_cale_ev_pane_g3_ParamLimits

0xe99f,	// (0x00051c28) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x000528ed) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x000528ed) field_cale_ev_pane_g

0xe9b7,	// (0x00051c40) field_cale_ev_pane_t1_ParamLimits

0xe9b7,	// (0x00051c40) field_cale_ev_pane_t1

0x4718,	// (0x000479a1) field_cale_ev_content_pane_t1_ParamLimits

0x4718,	// (0x000479a1) field_cale_ev_content_pane_t1

0xd27f,	// (0x00050508) bg_button_pane_cp01

0x16f8,	// (0x00044981) listscroll_cale_week_pane_ParamLimits

0xc712,	// (0x0004f99b) popup_toolbar_window_cp01

0xc71b,	// (0x0004f9a4) listscroll_cale_week_pane_t1_ParamLimits

0x16f8,	// (0x00044981) listscroll_cale_day_pane_ParamLimits

0xc712,	// (0x0004f99b) popup_toolbar_window_cp02

0xcb58,	// (0x0004fde1) listscroll_cale_day_pane_t1_ParamLimits

0x16f8,	// (0x00044981) main_cale_month_pane_ParamLimits

0xb313,	// (0x0004e59c) popup_toolbar_window_cp03_ParamLimits

0xb313,	// (0x0004e59c) popup_toolbar_window_cp03

0x3978,	// (0x00046c01) main_image_pane_g2_ParamLimits

0x3978,	// (0x00046c01) main_image_pane_g2

0x3989,	// (0x00046c12) main_image_pane_g3_ParamLimits

0x3989,	// (0x00046c12) main_image_pane_g3

0x0002,

0xf45c,	// (0x000526e5) main_image_pane_g_ParamLimits

0xf45c,	// (0x000526e5) main_image_pane_g

0xd399,	// (0x00050622) main_image_pane_t1_ParamLimits

0x399a,	// (0x00046c23) main_image_pane_t2_ParamLimits

0x399a,	// (0x00046c23) main_image_pane_t2

0x39ac,	// (0x00046c35) main_image_pane_t3_ParamLimits

0x39ac,	// (0x00046c35) main_image_pane_t3

0x39d4,	// (0x00046c5d) main_image_pane_t4_ParamLimits

0x39d4,	// (0x00046c5d) main_image_pane_t4

0x0003,

0xf463,	// (0x000526ec) main_image_pane_t_ParamLimits

0xf463,	// (0x000526ec) main_image_pane_t

0x39f4,	// (0x00046c7d) popup_image_details_window_cp01

0x39fe,	// (0x00046c87) popup_toobar_trans_pane_cp01_ParamLimits

0x39fe,	// (0x00046c87) popup_toobar_trans_pane_cp01

0x420b,	// (0x00047494) popup_image_details_window_ParamLimits

0x420b,	// (0x00047494) popup_image_details_window

0xb2e4,	// (0x0004e56d) popup_image_focus_window

0xb34a,	// (0x0004e5d3) camera2_autofocus_pane_ParamLimits

0xb34a,	// (0x0004e5d3) camera2_autofocus_pane

0xa832,	// (0x0004dabb) bg_popup_sub_pane_cp06

0xe9ce,	// (0x00051c57) popup_image_focus_window_g1

0xe9d6,	// (0x00051c5f) popup_image_focus_window_g2

0xe9de,	// (0x00051c67) popup_image_focus_window_g3

0xe9e6,	// (0x00051c6f) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x000528f4) popup_image_focus_window_g

0xe9ee,	// (0x00051c77) popup_image_focus_window_t1

0xe9fc,	// (0x00051c85) popup_image_focus_window_t2

0xea0c,	// (0x00051c95) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x000528fd) popup_image_focus_window_t

0xafdb,	// (0x0004e264) camera2_autofocus_pane_g1

0xa8af,	// (0x0004db38) bg_tb_trans_pane_cp01

0xea1a,	// (0x00051ca3) popup_image_details_window_g1

0xea2d,	// (0x00051cb6) popup_image_details_window_g2

0x0002,

0xf686,	// (0x0005290f) popup_image_details_window_g

0xea56,	// (0x00051cdf) popup_image_details_window_t1

0xea68,	// (0x00051cf1) popup_image_details_window_t2

0xea81,	// (0x00051d0a) popup_image_details_window_t3

0xea95,	// (0x00051d1e) popup_image_details_window_t4

0xeab0,	// (0x00051d39) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x00052916) popup_image_details_window_t

0xb041,	// (0x0004e2ca) bg_calc_paper_pane_ParamLimits

0xa832,	// (0x0004dabb) grid_highlight_pane_cp013

0xb055,	// (0x0004e2de) list_calc_pane_ParamLimits

0xb067,	// (0x0004e2f0) scroll_pane_cp024

0xb06f,	// (0x0004e2f8) bg_calc_display_pane_ParamLimits

0x1530,	// (0x000447b9) calc_display_pane_t1_ParamLimits

0x1542,	// (0x000447cb) calc_display_pane_t2_ParamLimits

0xb07b,	// (0x0004e304) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0005237b) calc_display_pane_t_ParamLimits

0x1603,	// (0x0004488c) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00052398) cell_calc_pane_g

0x160c,	// (0x00044895) cell_calc_pane_t1

0xb0e8,	// (0x0004e371) grid_highlight_pane_cp02_ParamLimits

0xb0fe,	// (0x0004e387) toolbar_button_pane_cp01_ParamLimits

0xb0fe,	// (0x0004e387) toolbar_button_pane_cp01

0xd3de,	// (0x00050667) temp_image_control_pane_ParamLimits

0xd3de,	// (0x00050667) temp_image_control_pane

0xa8af,	// (0x0004db38) main_mp3_pane

0xeaca,	// (0x00051d53) temp_image_control_pane_g1_ParamLimits

0xeaca,	// (0x00051d53) temp_image_control_pane_g1

0xead8,	// (0x00051d61) temp_image_control_pane_g2_ParamLimits

0xead8,	// (0x00051d61) temp_image_control_pane_g2

0xeaea,	// (0x00051d73) temp_image_control_pane_g3_ParamLimits

0xeaea,	// (0x00051d73) temp_image_control_pane_g3

0x4739,	// (0x000479c2) temp_image_control_pane_g4_ParamLimits

0x4739,	// (0x000479c2) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x00052921) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x00052921) temp_image_control_pane_g

0xeaca,	// (0x00051d53) main_mp3_pane_g1

0x474c,	// (0x000479d5) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x0005292a) main_mp3_pane_g

0xeb1f,	// (0x00051da8) main_mp3_pane_t1

0xafe9,	// (0x0004e272) main_camera_pane_g8_ParamLimits

0xafe9,	// (0x0004e272) main_camera_pane_g8

0x1e3b,	// (0x000450c4) main_video_pane_g7_ParamLimits

0x1e3b,	// (0x000450c4) main_video_pane_g7

0xcdde,	// (0x00050067) main_camera2_pane_t7_ParamLimits

0xcdde,	// (0x00050067) main_camera2_pane_t7

0xc8e7,	// (0x0004fb70) scroll_pane_cp025_ParamLimits

0xc8e7,	// (0x0004fb70) scroll_pane_cp025

0xc8fb,	// (0x0004fb84) scroll_pane_cp026_ParamLimits

0xc8fb,	// (0x0004fb84) scroll_pane_cp026

0xc90a,	// (0x0004fb93) wml_content_pane_ParamLimits

0xa832,	// (0x0004dabb) main_touch_calib_pane

0x481e,	// (0x00047aa7) main_touch_calib_pane_g1

0x4830,	// (0x00047ab9) main_touch_calib_pane_g2

0x4842,	// (0x00047acb) main_touch_calib_pane_g3

0x4854,	// (0x00047add) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x00052948) main_touch_calib_pane_g

0x4866,	// (0x00047aef) main_touch_calib_pane_t1

0x4880,	// (0x00047b09) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x00052951) main_touch_calib_pane_t

0xd072,	// (0x000502fb) mup_progress_pane_cp02

0xd091,	// (0x0005031a) navi_pane_g1

0xd0f3,	// (0x0005037c) navi_pane_mp_t3

0xa8af,	// (0x0004db38) main_mp3_pane_ParamLimits

0x43c4,	// (0x0004764d) navi_pane_ParamLimits

0xeaca,	// (0x00051d53) main_mp3_pane_g1_ParamLimits

0x474c,	// (0x000479d5) main_mp3_pane_g2_ParamLimits

0x4758,	// (0x000479e1) main_mp3_pane_g3_ParamLimits

0x4758,	// (0x000479e1) main_mp3_pane_g3

0x4766,	// (0x000479ef) main_mp3_pane_g4_ParamLimits

0x4766,	// (0x000479ef) main_mp3_pane_g4

0xafdb,	// (0x0004e264) main_mp3_pane_g5_ParamLimits

0xafdb,	// (0x0004e264) main_mp3_pane_g5

0xeafa,	// (0x00051d83) main_mp3_pane_g6_ParamLimits

0xeafa,	// (0x00051d83) main_mp3_pane_g6

0xeb07,	// (0x00051d90) main_mp3_pane_g7_ParamLimits

0xeb07,	// (0x00051d90) main_mp3_pane_g7

0xeb13,	// (0x00051d9c) main_mp3_pane_g8_ParamLimits

0xeb13,	// (0x00051d9c) main_mp3_pane_g8

0xf6a1,	// (0x0005292a) main_mp3_pane_g_ParamLimits

0x4772,	// (0x000479fb) main_mp3_pane_t2

0x4780,	// (0x00047a09) main_mp3_pane_t3

0xeb2d,	// (0x00051db6) main_mp3_pane_t4

0xeb3b,	// (0x00051dc4) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x0005293b) main_mp3_pane_t

0xeb49,	// (0x00051dd2) mup_progress_pane_cp01

0xa860,	// (0x0004dae9) aid_zoom_text_secondary2

0xe94f,	// (0x00051bd8) list_cale_ev2_pane

0xe957,	// (0x00051be0) scroll_pane_cp023_ParamLimits

0x48da,	// (0x00047b63) field_cale_ev2_pane_ParamLimits

0x48da,	// (0x00047b63) field_cale_ev2_pane

0x0897,	// (0x00043b20) field_cale_ev2_pane_g1_ParamLimits

0x0897,	// (0x00043b20) field_cale_ev2_pane_g1

0x08a3,	// (0x00043b2c) field_cale_ev2_pane_g2_ParamLimits

0x08a3,	// (0x00043b2c) field_cale_ev2_pane_g2

0x08bb,	// (0x00043b44) field_cale_ev2_pane_g3_ParamLimits

0x08bb,	// (0x00043b44) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x0005295c) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x0005295c) field_cale_ev2_pane_g

0x08d3,	// (0x00043b5c) field_cale_ev2_pane_t1_ParamLimits

0x08d3,	// (0x00043b5c) field_cale_ev2_pane_t1

0x08ea,	// (0x00043b73) field_cale_ev2_pane_t2_ParamLimits

0x08ea,	// (0x00043b73) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x00052965) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x00052965) field_cale_ev2_pane_t

0x3810,	// (0x00046a99) main_postcard_pane_g5_ParamLimits

0x3810,	// (0x00046a99) main_postcard_pane_g5

0x3826,	// (0x00046aaf) main_postcard_pane_g6_ParamLimits

0x3826,	// (0x00046aaf) main_postcard_pane_g6

0xa8af,	// (0x0004db38) camera2_autofocus_pane_cp_ParamLimits

0xa8af,	// (0x0004db38) camera2_autofocus_pane_cp

0xa8af,	// (0x0004db38) main_mup3_pane

0x4948,	// (0x00047bd1) main_mup3_pane_g1_ParamLimits

0x4948,	// (0x00047bd1) main_mup3_pane_g1

0x496a,	// (0x00047bf3) main_mup3_pane_g2_ParamLimits

0x496a,	// (0x00047bf3) main_mup3_pane_g2

0x49e5,	// (0x00047c6e) main_mup3_pane_g3_ParamLimits

0x49e5,	// (0x00047c6e) main_mup3_pane_g3

0x4a4f,	// (0x00047cd8) main_mup3_pane_g4_ParamLimits

0x4a4f,	// (0x00047cd8) main_mup3_pane_g4

0x4ab9,	// (0x00047d42) main_mup3_pane_g5_ParamLimits

0x4ab9,	// (0x00047d42) main_mup3_pane_g5

0x4b23,	// (0x00047dac) main_mup3_pane_g6_ParamLimits

0x4b23,	// (0x00047dac) main_mup3_pane_g6

0xafe9,	// (0x0004e272) main_mup3_pane_g7_ParamLimits

0xafe9,	// (0x0004e272) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x00052975) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x00052975) main_mup3_pane_g

0x4ba7,	// (0x00047e30) main_mup3_pane_t1_ParamLimits

0x4ba7,	// (0x00047e30) main_mup3_pane_t1

0x4c19,	// (0x00047ea2) main_mup3_pane_t2_ParamLimits

0x4c19,	// (0x00047ea2) main_mup3_pane_t2

0x4cef,	// (0x00047f78) main_mup3_pane_t4_ParamLimits

0x4cef,	// (0x00047f78) main_mup3_pane_t4

0x4d4d,	// (0x00047fd6) main_mup3_pane_t5_ParamLimits

0x4d4d,	// (0x00047fd6) main_mup3_pane_t5

0x4e11,	// (0x0004809a) main_mup3_pane_t6_ParamLimits

0x4e11,	// (0x0004809a) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x00052986) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x00052986) main_mup3_pane_t

0x4ec9,	// (0x00048152) mup3_progress_pane_ParamLimits

0x4ec9,	// (0x00048152) mup3_progress_pane

0x4f61,	// (0x000481ea) popup_mup3_control_window_ParamLimits

0x4f61,	// (0x000481ea) popup_mup3_control_window

0xeb51,	// (0x00051dda) popup_mup3_text_window

0x4f97,	// (0x00048220) mup3_progress_pane_t1

0x4fb6,	// (0x0004823f) mup3_progress_pane_t2

0xeb59,	// (0x00051de2) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x00052993) mup3_progress_pane_t

0xeb76,	// (0x00051dff) mup_progress_pane_cp03

0xa832,	// (0x0004dabb) bg_tb_trans_pane_cp04

0x4fd5,	// (0x0004825e) mup3_volume_pane

0x4fdd,	// (0x00048266) popup_mup3_control_window_g1

0x4fe6,	// (0x0004826f) mup3_volume_pane_g1

0x4fef,	// (0x00048278) mup3_volume_pane_g2

0x4ff8,	// (0x00048281) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x0005299a) mup3_volume_pane_g

0xa832,	// (0x0004dabb) bg_tb_trans_pane_cp03

0xeb86,	// (0x00051e0f) popup_mup3_text_window_g1

0xeb8e,	// (0x00051e17) popup_mup3_text_window_t1

0xb0c9,	// (0x0004e352) list_calc_item_pane_g1_ParamLimits

0xe643,	// (0x000518cc) mup_volume_pane_cp_g1

0x489a,	// (0x00047b23) main_touch_calib_pane_t3

0x48ae,	// (0x00047b37) main_touch_calib_pane_t4

0x48c4,	// (0x00047b4d) main_touch_calib_pane_t5

0xa83c,	// (0x0004dac5) aid_cell_size_toolbar2

0xa844,	// (0x0004dacd) aid_popup3_width_pane

0xa850,	// (0x0004dad9) aid_zoom_text_msg_primary

0x1d29,	// (0x00044fb2) vorec_t7

0xb08d,	// (0x0004e316) bg_calc_paper_pane_g1_ParamLimits

0xb099,	// (0x0004e322) bg_calc_paper_pane_g2_ParamLimits

0xb0a5,	// (0x0004e32e) bg_calc_paper_pane_g3_ParamLimits

0xb0b1,	// (0x0004e33a) bg_calc_paper_pane_g4_ParamLimits

0xb0bd,	// (0x0004e346) bg_calc_paper_pane_g5_ParamLimits

0x158f,	// (0x00044818) bg_calc_paper_pane_g6_ParamLimits

0x159d,	// (0x00044826) bg_calc_paper_pane_g7_ParamLimits

0x15ab,	// (0x00044834) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00052382) bg_calc_paper_pane_g_ParamLimits

0x15be,	// (0x00044847) calc_bg_paper_pane_g9_ParamLimits

0xa8af,	// (0x0004db38) image_qvga_pane_ParamLimits

0xa8af,	// (0x0004db38) image_qvga_pane

0xaf60,	// (0x0004e1e9) bg_popup_sub_pane_cp04_ParamLimits

0xd315,	// (0x0005059e) popup_mup_playback_window_g1_ParamLimits

0xd321,	// (0x000505aa) popup_mup_playback_window_t1_ParamLimits

0xd336,	// (0x000505bf) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x000526e0) popup_mup_playback_window_t_ParamLimits

0xafe9,	// (0x0004e272) main_mup2_pane_g3_ParamLimits

0xafe9,	// (0x0004e272) main_mup2_pane_g3

0x2032,	// (0x000452bb) popup_toolbar_window_cp04

0xd74d,	// (0x000509d6) popup_call2_audio_second_window_g3_ParamLimits

0xd74d,	// (0x000509d6) popup_call2_audio_second_window_g3

0xdb57,	// (0x00050de0) popup_call2_audio_first_window_g4_ParamLimits

0xdb57,	// (0x00050de0) popup_call2_audio_first_window_g4

0xe17e,	// (0x00051407) popup_call2_audio_in_window_g4_ParamLimits

0xe17e,	// (0x00051407) popup_call2_audio_in_window_g4

0x395a,	// (0x00046be3) aid_area_sk_bg_cut_ParamLimits

0x395a,	// (0x00046be3) aid_area_sk_bg_cut

0xd34b,	// (0x000505d4) aid_area_sk_bg_cut_2_ParamLimits

0xd34b,	// (0x000505d4) aid_area_sk_bg_cut_2

0xa832,	// (0x0004dabb) aid_placing_details_win

0xa832,	// (0x0004dabb) aid_placing_details_win_2

0xafdb,	// (0x0004e264) camera2_autofocus_pane_g1_ParamLimits

0x12d1,	// (0x0004455a) popup_fixed_preview_cale_window_ParamLimits

0x12d1,	// (0x0004455a) popup_fixed_preview_cale_window

0xd13a,	// (0x000503c3) navi_slider_pane_g3

0xd143,	// (0x000503cc) navi_slider_pane_g4

0xd14c,	// (0x000503d5) navi_slider_pane_g5

0xd13a,	// (0x000503c3) navi_slider_pane_g6

0xb285,	// (0x0004e50e) navi_slider_pane_g7

0xd24c,	// (0x000504d5) mup_scale_pane_g3

0xd255,	// (0x000504de) mup_scale_pane_g4

0xd25e,	// (0x000504e7) mup_scale_pane_g5

0x36b7,	// (0x00046940) mup_scale_pane_g6

0x36c0,	// (0x00046949) mup_scale_pane_g7

0xc7db,	// (0x0004fa64) cams2_slider_pane_g3

0xc7db,	// (0x0004fa64) cams2_slider_pane_g4

0xc7db,	// (0x0004fa64) cams2_slider_pane_g5

0xc7db,	// (0x0004fa64) cams2_slider_pane_g6

0xc7db,	// (0x0004fa64) cams2_slider_pane_g7

0xc7db,	// (0x0004fa64) camera2_autofocus_pane_cp_g1

0xe492,	// (0x0005171b) bg_popup_preview_window_pane_cp02_ParamLimits

0xe492,	// (0x0005171b) bg_popup_preview_window_pane_cp02

0xeb9c,	// (0x00051e25) list_fp_cale_pane_ParamLimits

0xeb9c,	// (0x00051e25) list_fp_cale_pane

0xeba8,	// (0x00051e31) popup_fixed_preview_cale_window_t1_ParamLimits

0xeba8,	// (0x00051e31) popup_fixed_preview_cale_window_t1

0x5001,	// (0x0004828a) popup_fixed_preview_cale_window_t2_ParamLimits

0x5001,	// (0x0004828a) popup_fixed_preview_cale_window_t2

0x5016,	// (0x0004829f) popup_fixed_preview_cale_window_t3_ParamLimits

0x5016,	// (0x0004829f) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x000529a1) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x000529a1) popup_fixed_preview_cale_window_t

0x502d,	// (0x000482b6) list_single_fp_cale_pane_ParamLimits

0x502d,	// (0x000482b6) list_single_fp_cale_pane

0xebc6,	// (0x00051e4f) list_single_fp_cale_pane_g1_ParamLimits

0xebc6,	// (0x00051e4f) list_single_fp_cale_pane_g1

0xebd2,	// (0x00051e5b) list_single_fp_cale_pane_g2_ParamLimits

0xebd2,	// (0x00051e5b) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x000529a8) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x000529a8) list_single_fp_cale_pane_g

0xebeb,	// (0x00051e74) list_single_fp_cale_pane_t1_ParamLimits

0xebeb,	// (0x00051e74) list_single_fp_cale_pane_t1

0xebfd,	// (0x00051e86) list_single_fp_cale_pane_t2_ParamLimits

0xebfd,	// (0x00051e86) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x000529af) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x000529af) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa832,	// (0x0004dabb) main_dialer_pane

0xa832,	// (0x0004dabb) aid_cell_size_keypad

0xa832,	// (0x0004dabb) dialer_ne_pane

0xa832,	// (0x0004dabb) grid_dialer_command_1_pane

0xa832,	// (0x0004dabb) grid_dialer_command_2_pane

0xa832,	// (0x0004dabb) grid_dialer_keypad_pane

0x5045,	// (0x000482ce) bg_popup_call_pane_cp06_ParamLimits

0x5045,	// (0x000482ce) bg_popup_call_pane_cp06

0x5045,	// (0x000482ce) dialer_ne_clear_pane_ParamLimits

0x5045,	// (0x000482ce) dialer_ne_clear_pane

0xc7db,	// (0x0004fa64) dialer_ne_pane_g1

0xcdde,	// (0x00050067) dialer_ne_pane_t1_ParamLimits

0xcdde,	// (0x00050067) dialer_ne_pane_t1

0x5053,	// (0x000482dc) dialer_ne_pane_t2_ParamLimits

0x5053,	// (0x000482dc) dialer_ne_pane_t2

0x507b,	// (0x00048304) dialer_ne_pane_t3_ParamLimits

0x507b,	// (0x00048304) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x000529b4) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x000529b4) dialer_ne_pane_t

0x507b,	// (0x00048304) dialer_ne_pane_t3_copy1_ParamLimits

0x507b,	// (0x00048304) dialer_ne_pane_t3_copy1

0xec30,	// (0x00051eb9) cell_dialer_keypad_pane_ParamLimits

0xec30,	// (0x00051eb9) cell_dialer_keypad_pane

0xa8af,	// (0x0004db38) cell_dialer_command_1_pane_ParamLimits

0xa8af,	// (0x0004db38) cell_dialer_command_1_pane

0xec47,	// (0x00051ed0) cell_dialer_command_2_pane_ParamLimits

0xec47,	// (0x00051ed0) cell_dialer_command_2_pane

0xa8af,	// (0x0004db38) bg_button_pane_cp02_ParamLimits

0xa8af,	// (0x0004db38) bg_button_pane_cp02

0xafdb,	// (0x0004e264) cell_dialer_keypad_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) cell_dialer_keypad_pane_g1

0xa8af,	// (0x0004db38) bg_button_pane_cp03_ParamLimits

0xa8af,	// (0x0004db38) bg_button_pane_cp03

0xafdb,	// (0x0004e264) cell_dialer_command_1_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) cell_dialer_command_1_pane_g1

0xa832,	// (0x0004dabb) bg_button_pane_cp04

0xc7db,	// (0x0004fa64) cell_dialer_command_2_pane_g1

0xa832,	// (0x0004dabb) bg_button_pane_cp06

0xc7db,	// (0x0004fa64) dialer_ne_clear_pane_g1

0x33c8,	// (0x00046651) navi_pane_g2

0x33f6,	// (0x0004667f) navi_pane_g3

0x0002,

0xf35a,	// (0x000525e3) navi_pane_g

0x3421,	// (0x000466aa) navi_pane_mv_g2

0x3448,	// (0x000466d1) navi_pane_mv_g5

0x3450,	// (0x000466d9) navi_pane_mv_t1

0xb06f,	// (0x0004e2f8) main_clock2_pane

0xa8af,	// (0x0004db38) main_clock2_list_pane_ParamLimits

0xa8af,	// (0x0004db38) main_clock2_list_pane

0x510c,	// (0x00048395) main_clock2_pane_t1_ParamLimits

0x510c,	// (0x00048395) main_clock2_pane_t1

0x5147,	// (0x000483d0) main_clock2_pane_t2_ParamLimits

0x5147,	// (0x000483d0) main_clock2_pane_t2

0x0004,

0xf737,	// (0x000529c0) main_clock2_pane_t_ParamLimits

0xf737,	// (0x000529c0) main_clock2_pane_t

0x51e6,	// (0x0004846f) popup_clock_analogue_window_cp03_ParamLimits

0x51e6,	// (0x0004846f) popup_clock_analogue_window_cp03

0x520b,	// (0x00048494) popup_clock_digital_window_cp02_ParamLimits

0x520b,	// (0x00048494) popup_clock_digital_window_cp02

0x5284,	// (0x0004850d) main_clock2_list_single_pane_ParamLimits

0x5284,	// (0x0004850d) main_clock2_list_single_pane

0xc7a5,	// (0x0004fa2e) list_highlight_pane_cp05

0xec88,	// (0x00051f11) main_clock2_list_single_pane_t1

0x2032,	// (0x000452bb) popup_toolbar_window_cp04_ParamLimits

0xafe9,	// (0x0004e272) camera2_autofocus_pane_g2_ParamLimits

0xafe9,	// (0x0004e272) camera2_autofocus_pane_g2

0xafe9,	// (0x0004e272) camera2_autofocus_pane_g3_ParamLimits

0xafe9,	// (0x0004e272) camera2_autofocus_pane_g3

0xafe9,	// (0x0004e272) camera2_autofocus_pane_g4_ParamLimits

0xafe9,	// (0x0004e272) camera2_autofocus_pane_g4

0xafe9,	// (0x0004e272) camera2_autofocus_pane_g5_ParamLimits

0xafe9,	// (0x0004e272) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x00052904) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x00052904) camera2_autofocus_pane_g

0x48fe,	// (0x00047b87) camera2_autofocus_pane_cp_g2

0x4906,	// (0x00047b8f) camera2_autofocus_pane_cp_g3

0x490e,	// (0x00047b97) camera2_autofocus_pane_cp_g4

0x4916,	// (0x00047b9f) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x0005296a) camera2_autofocus_pane_cp_g

0xa832,	// (0x0004dabb) popup_dialer_spcha_window

0xa832,	// (0x0004dabb) bg_popup_sub_pane_cp07

0xa832,	// (0x0004dabb) list_spcha_pane

0xec96,	// (0x00051f1f) list_single_spcha_pane_ParamLimits

0xec96,	// (0x00051f1f) list_single_spcha_pane

0xa832,	// (0x0004dabb) list_highlight_pane_cp06

0xcd30,	// (0x0004ffb9) list_single_spcha_pane_t1

0xdf28,	// (0x000511b1) popup_call2_audio_out_window_g4_ParamLimits

0xdf28,	// (0x000511b1) popup_call2_audio_out_window_g4

0xa832,	// (0x0004dabb) main_imed2_pane

0xb2ee,	// (0x0004e577) popup_imed_adjust2_window

0x4223,	// (0x000474ac) popup_imed_trans_window_ParamLimits

0x4223,	// (0x000474ac) popup_imed_trans_window

0xe718,	// (0x000519a1) popup_blid_sat_info2_window_t1

0xe726,	// (0x000519af) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x00052899) popup_blid_sat_info2_window_t

0x533f,	// (0x000485c8) aid_size_cell_colour_35

0x535f,	// (0x000485e8) aid_size_cell_colour_112

0x537f,	// (0x00048608) aid_size_cell_effect

0xe2e6,	// (0x0005156f) bg_tb_trans_pane_cp02

0xcc61,	// (0x0004feea) heading_imed_pane

0x539f,	// (0x00048628) listscroll_imed_pane

0xeca8,	// (0x00051f31) heading_imed_pane_g1

0xecb0,	// (0x00051f39) heading_imed_pane_t1

0xecbe,	// (0x00051f47) grid_imed_colour_35_pane_ParamLimits

0xecbe,	// (0x00051f47) grid_imed_colour_35_pane

0x53ab,	// (0x00048634) grid_imed_effect_pane

0xecda,	// (0x00051f63) list_imed_aspect_pane

0x53c2,	// (0x0004864b) scroll_pane_cp027_ParamLimits

0x53c2,	// (0x0004864b) scroll_pane_cp027

0x53d3,	// (0x0004865c) cell_imed_effect_pane_ParamLimits

0x53d3,	// (0x0004865c) cell_imed_effect_pane

0xece2,	// (0x00051f6b) cell_imed_colour_pane_ParamLimits

0xece2,	// (0x00051f6b) cell_imed_colour_pane

0xed2c,	// (0x00051fb5) cell_imed_colour_pane_g1_ParamLimits

0xed2c,	// (0x00051fb5) cell_imed_colour_pane_g1

0xed3d,	// (0x00051fc6) hgihlgiht_grid_pane_cp016_ParamLimits

0xed3d,	// (0x00051fc6) hgihlgiht_grid_pane_cp016

0x53fe,	// (0x00048687) cell_imed_effect_pane_g1

0x5406,	// (0x0004868f) grid_highlight_pane_cp017

0xed4e,	// (0x00051fd7) list_imed_single_pane_ParamLimits

0xed4e,	// (0x00051fd7) list_imed_single_pane

0xa832,	// (0x0004dabb) list_highlight_pane_cp07

0xed62,	// (0x00051feb) list_imed_aspect_pane_comp1_t1

0xe2e6,	// (0x0005156f) bg_tb_trans_pane_cp05

0xed84,	// (0x0005200d) popup_imed_adjust2_window_g1

0xedab,	// (0x00052034) popup_imed_adjust2_window_t1

0xedc3,	// (0x0005204c) slider_imed_adjust_pane

0xedd7,	// (0x00052060) slider_imed_adjust_pane_g1

0xede7,	// (0x00052070) slider_imed_adjust_pane_g2

0xedf7,	// (0x00052080) slider_imed_adjust_pane_g3

0xee08,	// (0x00052091) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x000529dd) slider_imed_adjust_pane_g

0x540f,	// (0x00048698) aid_size_cell_clipart2

0xee19,	// (0x000520a2) grid_imed_clipart_pane

0xee23,	// (0x000520ac) scroll_pane_cp031

0x541b,	// (0x000486a4) cell_imed_clipart_pane_ParamLimits

0x541b,	// (0x000486a4) cell_imed_clipart_pane

0x5438,	// (0x000486c1) cell_imed_clipart_pane_g1

0xa832,	// (0x0004dabb) grid_highlight_pane_cp014

0x50ea,	// (0x00048373) main_clock2_pane_g1_ParamLimits

0x50ea,	// (0x00048373) main_clock2_pane_g1

0x522b,	// (0x000484b4) aid_call2_pane_cp10

0x523d,	// (0x000484c6) aid_call_pane_cp10

0xd066,	// (0x000502ef) popup_clock_analogue_window_cp10_g1

0xd066,	// (0x000502ef) popup_clock_analogue_window_cp10_g2

0x524f,	// (0x000484d8) popup_clock_analogue_window_cp10_g3

0x524f,	// (0x000484d8) popup_clock_analogue_window_cp10_g4

0xd066,	// (0x000502ef) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x000529cb) popup_clock_analogue_window_cp10_g

0x5265,	// (0x000484ee) popup_clock_analogue_window_cp10_t1

0x5296,	// (0x0004851f) clock_digital_number_pane_cp10_ParamLimits

0x5296,	// (0x0004851f) clock_digital_number_pane_cp10

0x52b0,	// (0x00048539) clock_digital_number_pane_cp11_ParamLimits

0x52b0,	// (0x00048539) clock_digital_number_pane_cp11

0x52ca,	// (0x00048553) clock_digital_number_pane_cp12_ParamLimits

0x52ca,	// (0x00048553) clock_digital_number_pane_cp12

0x52e6,	// (0x0004856f) clock_digital_number_pane_cp13_ParamLimits

0x52e6,	// (0x0004856f) clock_digital_number_pane_cp13

0x5302,	// (0x0004858b) clock_digital_separator_pane_cp10_ParamLimits

0x5302,	// (0x0004858b) clock_digital_separator_pane_cp10

0x531e,	// (0x000485a7) popup_clock_digital_window_cp02_t1_ParamLimits

0x531e,	// (0x000485a7) popup_clock_digital_window_cp02_t1

0xaf58,	// (0x0004e1e1) clock_digital_number_pane_cp10_g1

0xaf58,	// (0x0004e1e1) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x000529e6) clock_digital_number_pane_cp10_g

0xaf58,	// (0x0004e1e1) clock_digital_separator_pane_cp10_g1

0xaf58,	// (0x0004e1e1) clock_digital_separator_pane_g2_cp10

0xd101,	// (0x0005038a) navi_pane_vded_g4

0xd10a,	// (0x00050393) navi_pane_vded_g5

0xd113,	// (0x0005039c) navi_pane_vded_t1

0xa832,	// (0x0004dabb) main_vded_pane

0x5441,	// (0x000486ca) main_vded_pane_g1

0x544d,	// (0x000486d6) main_vded_pane_g2

0x5459,	// (0x000486e2) main_vded_pane_g3

0x0002,

0xf762,	// (0x000529eb) main_vded_pane_g

0x5465,	// (0x000486ee) main_vded_pane_t1

0x5473,	// (0x000486fc) main_vded_pane_t2

0x0001,

0xf769,	// (0x000529f2) main_vded_pane_t

0x5481,	// (0x0004870a) vded_slider_pane

0x548b,	// (0x00048714) vded_video_pane

0xee2b,	// (0x000520b4) vded_video_pane_g1

0x5497,	// (0x00048720) vded_video_pane_g2

0xc7db,	// (0x0004fa64) vded_video_pane_g3

0x0002,

0xf76e,	// (0x000529f7) vded_video_pane_g

0xee35,	// (0x000520be) vded_slider_pane_g1

0xe643,	// (0x000518cc) vded_slider_pane_g2

0xee3e,	// (0x000520c7) vded_slider_pane_g3

0xee47,	// (0x000520d0) vded_slider_pane_g4

0xee50,	// (0x000520d9) vded_slider_pane_g5

0x0004,

0xf775,	// (0x000529fe) vded_slider_pane_g

0x4f4b,	// (0x000481d4) mup3_rocker_pane_ParamLimits

0x4f4b,	// (0x000481d4) mup3_rocker_pane

0x54a0,	// (0x00048729) mup3_control_keys_pane_g1

0x54a8,	// (0x00048731) mup3_control_keys_pane_g2

0x54b0,	// (0x00048739) mup3_control_keys_pane_g3

0x54b8,	// (0x00048741) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x00052a09) mup3_control_keys_pane_g

0x1306,	// (0x0004458f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1306,	// (0x0004458f) popup_toolbar2_fixed_window_cp01

0x4f81,	// (0x0004820a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4f81,	// (0x0004820a) popup_toolbar2_fixed_window_cp02

0xd8bf,	// (0x00050b48) popup_call2_audio_second_window_t4_ParamLimits

0xd8bf,	// (0x00050b48) popup_call2_audio_second_window_t4

0xdded,	// (0x00051076) popup_call2_audio_first_window_t6_ParamLimits

0xdded,	// (0x00051076) popup_call2_audio_first_window_t6

0xe02b,	// (0x000512b4) popup_call2_audio_out_window_t6_ParamLimits

0xe02b,	// (0x000512b4) popup_call2_audio_out_window_t6

0xa832,	// (0x0004dabb) main_vitu_pane

0xa8af,	// (0x0004db38) aid_size_cell_itu_ParamLimits

0xa8af,	// (0x0004db38) aid_size_cell_itu

0xa8af,	// (0x0004db38) bg_popup_window_pane_cp08_ParamLimits

0xa8af,	// (0x0004db38) bg_popup_window_pane_cp08

0xa8af,	// (0x0004db38) field_vitu_entry_pane_ParamLimits

0xa8af,	// (0x0004db38) field_vitu_entry_pane

0xa8af,	// (0x0004db38) grid_vitu_function_pane_ParamLimits

0xa8af,	// (0x0004db38) grid_vitu_function_pane

0xa8af,	// (0x0004db38) grid_vitu_itu_pane_ParamLimits

0xa8af,	// (0x0004db38) grid_vitu_itu_pane

0xa8af,	// (0x0004db38) cell_vitu_itu_pane_ParamLimits

0xa8af,	// (0x0004db38) cell_vitu_itu_pane

0xa8af,	// (0x0004db38) cell_vitu_function_pane_ParamLimits

0xa8af,	// (0x0004db38) cell_vitu_function_pane

0xa8af,	// (0x0004db38) bg_popup_sub_pane_cp08_ParamLimits

0xa8af,	// (0x0004db38) bg_popup_sub_pane_cp08

0xc7ad,	// (0x0004fa36) field_vitu_entry_pane_t1_ParamLimits

0xc7ad,	// (0x0004fa36) field_vitu_entry_pane_t1

0xee59,	// (0x000520e2) field_vitu_entry_pane_t2_ParamLimits

0xee59,	// (0x000520e2) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x00052a12) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x00052a12) field_vitu_entry_pane_t

0xd4cb,	// (0x00050754) bg_button_pane_cp05_ParamLimits

0xd4cb,	// (0x00050754) bg_button_pane_cp05

0xee76,	// (0x000520ff) cell_vitu_itu_pane_g1

0xe2d2,	// (0x0005155b) cell_vitu_itu_pane_t1_ParamLimits

0xe2d2,	// (0x0005155b) cell_vitu_itu_pane_t1

0xe2d2,	// (0x0005155b) cell_vitu_itu_pane_t2_ParamLimits

0xe2d2,	// (0x0005155b) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x00052a17) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x00052a17) cell_vitu_itu_pane_t

0xa832,	// (0x0004dabb) bg_button_pane_cp07

0xc7db,	// (0x0004fa64) cell_vitu_function_pane_g1

0xb019,	// (0x0004e2a2) main_calc_pane_g1

0x112e,	// (0x000443b7) aid_visual_content_pane

0xa832,	// (0x0004dabb) main_vradio_pane

0xafdb,	// (0x0004e264) main_vradio_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) main_vradio_pane_g1

0xafe9,	// (0x0004e272) main_vradio_pane_g2_ParamLimits

0xafe9,	// (0x0004e272) main_vradio_pane_g2

0x0001,

0xf795,	// (0x00052a1e) main_vradio_pane_g_ParamLimits

0xf795,	// (0x00052a1e) main_vradio_pane_g

0xc7ad,	// (0x0004fa36) main_vradio_pane_t1_ParamLimits

0xc7ad,	// (0x0004fa36) main_vradio_pane_t1

0xc7ad,	// (0x0004fa36) main_vradio_pane_t2_ParamLimits

0xc7ad,	// (0x0004fa36) main_vradio_pane_t2

0xcdde,	// (0x00050067) main_vradio_pane_t3_ParamLimits

0xcdde,	// (0x00050067) main_vradio_pane_t3

0x0002,

0xf79a,	// (0x00052a23) main_vradio_pane_t_ParamLimits

0xf79a,	// (0x00052a23) main_vradio_pane_t

0xa8af,	// (0x0004db38) vradio_rocker_control_pane_ParamLimits

0xa8af,	// (0x0004db38) vradio_rocker_control_pane

0xa8af,	// (0x0004db38) vradio_station_info_pane_ParamLimits

0xa8af,	// (0x0004db38) vradio_station_info_pane

0xa8af,	// (0x0004db38) vradio_frequency_info_pane_ParamLimits

0xa8af,	// (0x0004db38) vradio_frequency_info_pane

0xc7db,	// (0x0004fa64) vradio_station_info_pane_g1

0xe2d2,	// (0x0005155b) vradio_station_info_pane_t1_ParamLimits

0xe2d2,	// (0x0005155b) vradio_station_info_pane_t1

0xcdde,	// (0x00050067) vradio_station_info_pane_t2_ParamLimits

0xcdde,	// (0x00050067) vradio_station_info_pane_t2

0x0001,

0xf7a1,	// (0x00052a2a) vradio_station_info_pane_t_ParamLimits

0xf7a1,	// (0x00052a2a) vradio_station_info_pane_t

0xa832,	// (0x0004dabb) vradio_tuning_pane

0x54c8,	// (0x00048751) vradio_rocker_control_pane_g1

0xee92,	// (0x0005211b) vradio_rocker_control_pane_g2

0x54d2,	// (0x0004875b) vradio_rocker_control_pane_g3

0x54dc,	// (0x00048765) vradio_rocker_control_pane_g4

0x54e6,	// (0x0004876f) vradio_rocker_control_pane_g5

0x0004,

0xf7a6,	// (0x00052a2f) vradio_rocker_control_pane_g

0xc7db,	// (0x0004fa64) vradio_frequency_info_pane_g1

0xc7ad,	// (0x0004fa36) vradio_frequency_info_pane_t1_ParamLimits

0xc7ad,	// (0x0004fa36) vradio_frequency_info_pane_t1

0x54f0,	// (0x00048779) vradio_tuning_pane_g1

0x54fb,	// (0x00048784) vradio_tuning_pane_t1

0xa868,	// (0x0004daf1) area_side_right_pane_ParamLimits

0xa868,	// (0x0004daf1) area_side_right_pane

0xe459,	// (0x000516e2) status_small_pane_g1

0xe461,	// (0x000516ea) status_small_pane_g2

0xe46a,	// (0x000516f3) status_small_pane_g3

0xe473,	// (0x000516fc) status_small_pane_g4

0x0003,

0xf572,	// (0x000527fb) status_small_pane_g

0xe47c,	// (0x00051705) status_small_pane_t1

0xa832,	// (0x0004dabb) main_video3_pane

0xee9a,	// (0x00052123) cams_zoom_vslider_pane

0xeea2,	// (0x0005212b) image3_wide_pane_ParamLimits

0xeea2,	// (0x0005212b) image3_wide_pane

0xeebc,	// (0x00052145) image3_wide_small_pane

0xeec8,	// (0x00052151) main_video3_pane_g1_ParamLimits

0xeec8,	// (0x00052151) main_video3_pane_g1

0xeee4,	// (0x0005216d) main_video3_pane_g2_ParamLimits

0xeee4,	// (0x0005216d) main_video3_pane_g2

0x0001,

0xf7b1,	// (0x00052a3a) main_video3_pane_g_ParamLimits

0xf7b1,	// (0x00052a3a) main_video3_pane_g

0xef00,	// (0x00052189) main_video3_pane_t1_ParamLimits

0xef00,	// (0x00052189) main_video3_pane_t1

0xef2b,	// (0x000521b4) main_video3_pane_t2_ParamLimits

0xef2b,	// (0x000521b4) main_video3_pane_t2

0xef58,	// (0x000521e1) main_video3_pane_t3_ParamLimits

0xef58,	// (0x000521e1) main_video3_pane_t3

0x0002,

0xf7b6,	// (0x00052a3f) main_video3_pane_t_ParamLimits

0xf7b6,	// (0x00052a3f) main_video3_pane_t

0xef85,	// (0x0005220e) cams_zoom_vslider_pane_g1

0xef8e,	// (0x00052217) cams_zoom_vslider_pane_g2

0x0001,

0xf7bd,	// (0x00052a46) cams_zoom_vslider_pane_g

0xef96,	// (0x0005221f) small_slider_vertical_pane

0xc7db,	// (0x0004fa64) small_slider_vertical_pane_g1

0xc7db,	// (0x0004fa64) small_slider_vertical_pane_g2

0xef9e,	// (0x00052227) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x00052a4b) small_slider_vertical_pane_g

0xa832,	// (0x0004dabb) main_hwr_training_pane

0xefa7,	// (0x00052230) hwr_training_instruct_pane_ParamLimits

0xefa7,	// (0x00052230) hwr_training_instruct_pane

0x550a,	// (0x00048793) hwr_training_navi_pane_ParamLimits

0x550a,	// (0x00048793) hwr_training_navi_pane

0x5529,	// (0x000487b2) hwr_training_write_pane_ParamLimits

0x5529,	// (0x000487b2) hwr_training_write_pane

0xa832,	// (0x0004dabb) bg_frame_shadow_pane

0xefde,	// (0x00052267) hwr_training_write_pane_g1

0xefe6,	// (0x0005226f) hwr_training_write_pane_g2

0xefee,	// (0x00052277) hwr_training_write_pane_g3

0xeff6,	// (0x0005227f) hwr_training_write_pane_g4

0xeffe,	// (0x00052287) hwr_training_write_pane_g5

0xf006,	// (0x0005228f) hwr_training_write_pane_g6

0xf00e,	// (0x00052297) hwr_training_write_pane_g7

0x0006,

0xf7c9,	// (0x00052a52) hwr_training_write_pane_g

0xb39c,	// (0x0004e625) hwr_training_navi_pane_g1_ParamLimits

0xb39c,	// (0x0004e625) hwr_training_navi_pane_g1

0xb3ae,	// (0x0004e637) hwr_training_navi_pane_g2_ParamLimits

0xb3ae,	// (0x0004e637) hwr_training_navi_pane_g2

0xb3c0,	// (0x0004e649) hwr_training_navi_pane_g3_ParamLimits

0xb3c0,	// (0x0004e649) hwr_training_navi_pane_g3

0xb3d0,	// (0x0004e659) hwr_training_navi_pane_g4_ParamLimits

0xb3d0,	// (0x0004e659) hwr_training_navi_pane_g4

0x0004,

0xf7d8,	// (0x00052a61) hwr_training_navi_pane_g_ParamLimits

0xf7d8,	// (0x00052a61) hwr_training_navi_pane_g

0xb3dd,	// (0x0004e666) hwr_training_navi_pane_t1

0x5571,	// (0x000487fa) list_single_hwr_training_instruct_pane_ParamLimits

0x5571,	// (0x000487fa) list_single_hwr_training_instruct_pane

0xf016,	// (0x0005229f) list_single_hwr_training_instruct_pane_t1

0xe81f,	// (0x00051aa8) bg_frame_shadow_pane_g1

0xf025,	// (0x000522ae) bg_frame_shadow_pane_g2

0xf02d,	// (0x000522b6) bg_frame_shadow_pane_g3

0xf03f,	// (0x000522c8) bg_frame_shadow_pane_g4

0xf047,	// (0x000522d0) bg_frame_shadow_pane_g5

0xf04f,	// (0x000522d8) bg_frame_shadow_pane_g6

0xf057,	// (0x000522e0) bg_frame_shadow_pane_g7

0xb14b,	// (0x0004e3d4) bg_frame_shadow_pane_g8

0x0007,

0xf7e3,	// (0x00052a6c) bg_frame_shadow_pane_g

0xa832,	// (0x0004dabb) main_video_tele_dialer_pane

0x558d,	// (0x00048816) aid_size_cell_video_keypad_ParamLimits

0x558d,	// (0x00048816) aid_size_cell_video_keypad

0x55a7,	// (0x00048830) grid_video_dialer_keypad_pane_ParamLimits

0x55a7,	// (0x00048830) grid_video_dialer_keypad_pane

0x55f3,	// (0x0004887c) video_down_pane_cp_ParamLimits

0x55f3,	// (0x0004887c) video_down_pane_cp

0x5625,	// (0x000488ae) cell_video_dialer_keypad_pane_ParamLimits

0x5625,	// (0x000488ae) cell_video_dialer_keypad_pane

0xf05f,	// (0x000522e8) bg_button_pane_cp08_ParamLimits

0xf05f,	// (0x000522e8) bg_button_pane_cp08

0x564b,	// (0x000488d4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x564b,	// (0x000488d4) cell_video_dialer_keypad_pane_g1

0x4f35,	// (0x000481be) mup3_rocker2_pane_ParamLimits

0x4f35,	// (0x000481be) mup3_rocker2_pane

0xc7db,	// (0x0004fa64) mup3_rocker2_pane_g1

0x40f0,	// (0x00047379) main_dialer2_pane

0xa832,	// (0x0004dabb) main_mp4_pane

0xb409,	// (0x0004e692) main_mp4_pane_g1_ParamLimits

0xb409,	// (0x0004e692) main_mp4_pane_g1

0xb409,	// (0x0004e692) main_mp4_pane_g2_ParamLimits

0xb409,	// (0x0004e692) main_mp4_pane_g2

0x5686,	// (0x0004890f) main_mp4_pane_g3_ParamLimits

0x5686,	// (0x0004890f) main_mp4_pane_g3

0xb417,	// (0x0004e6a0) main_mp4_pane_g4_ParamLimits

0xb417,	// (0x0004e6a0) main_mp4_pane_g4

0xb445,	// (0x0004e6ce) main_mp4_pane_g5_ParamLimits

0xb445,	// (0x0004e6ce) main_mp4_pane_g5

0x0007,

0xf803,	// (0x00052a8c) main_mp4_pane_g_ParamLimits

0xf803,	// (0x00052a8c) main_mp4_pane_g

0xb4b9,	// (0x0004e742) main_mp4_pane_t1_ParamLimits

0xb4b9,	// (0x0004e742) main_mp4_pane_t1

0xb515,	// (0x0004e79e) main_mp4_pane_t2_ParamLimits

0xb515,	// (0x0004e79e) main_mp4_pane_t2

0x56d0,	// (0x00048959) main_mp4_pane_t3_ParamLimits

0x56d0,	// (0x00048959) main_mp4_pane_t3

0xb567,	// (0x0004e7f0) main_mp4_pane_t4_ParamLimits

0xb567,	// (0x0004e7f0) main_mp4_pane_t4

0x0003,

0xf814,	// (0x00052a9d) main_mp4_pane_t_ParamLimits

0xf814,	// (0x00052a9d) main_mp4_pane_t

0xb5a7,	// (0x0004e830) mp4_progress_pane_ParamLimits

0xb5a7,	// (0x0004e830) mp4_progress_pane

0xb5f1,	// (0x0004e87a) mp4_rocker_pane_ParamLimits

0xb5f1,	// (0x0004e87a) mp4_rocker_pane

0x56fe,	// (0x00048987) mp4_progress_pane_t1

0x5717,	// (0x000489a0) mp4_progress_pane_t2

0x0001,

0xf81d,	// (0x00052aa6) mp4_progress_pane_t

0x5730,	// (0x000489b9) mup_progress_pane_cp04

0xc7db,	// (0x0004fa64) mp4_rocker_pane_g1

0x5743,	// (0x000489cc) aid_cell_size_keypad2_ParamLimits

0x5743,	// (0x000489cc) aid_cell_size_keypad2

0x5759,	// (0x000489e2) dialer2_ne_pane_ParamLimits

0x5759,	// (0x000489e2) dialer2_ne_pane

0x5771,	// (0x000489fa) grid_dialer2_keypad_pane_ParamLimits

0x5771,	// (0x000489fa) grid_dialer2_keypad_pane

0xd4cb,	// (0x00050754) bg_popup_call_pane_cp07_ParamLimits

0xd4cb,	// (0x00050754) bg_popup_call_pane_cp07

0x578d,	// (0x00048a16) dialer2_ne_pane_t1_ParamLimits

0x578d,	// (0x00048a16) dialer2_ne_pane_t1

0x57df,	// (0x00048a68) cell_dialer2_keypad_pane_ParamLimits

0x57df,	// (0x00048a68) cell_dialer2_keypad_pane

0x5805,	// (0x00048a8e) bg_button_pane_pane_cp04_ParamLimits

0x5805,	// (0x00048a8e) bg_button_pane_pane_cp04

0x5811,	// (0x00048a9a) cell_dialer2_keypad_pane_g1_ParamLimits

0x5811,	// (0x00048a9a) cell_dialer2_keypad_pane_g1

0x1f19,	// (0x000451a2) aid_placing_vt_set_content_ParamLimits

0x1f19,	// (0x000451a2) aid_placing_vt_set_content

0x1f3d,	// (0x000451c6) aid_placing_vt_set_title_ParamLimits

0x1f3d,	// (0x000451c6) aid_placing_vt_set_title

0xa832,	// (0x0004dabb) main_image3_pane

0x58d7,	// (0x00048b60) area_side_right_pane_cp01_ParamLimits

0x58d7,	// (0x00048b60) area_side_right_pane_cp01

0xb409,	// (0x0004e692) main_image3_pane_g1_ParamLimits

0xb409,	// (0x0004e692) main_image3_pane_g1

0x58f0,	// (0x00048b79) main_image3_pane_g2_ParamLimits

0x58f0,	// (0x00048b79) main_image3_pane_g2

0x5918,	// (0x00048ba1) main_image3_pane_g3_ParamLimits

0x5918,	// (0x00048ba1) main_image3_pane_g3

0x5942,	// (0x00048bcb) main_image3_pane_g4_ParamLimits

0x5942,	// (0x00048bcb) main_image3_pane_g4

0x0003,

0xf82c,	// (0x00052ab5) main_image3_pane_g_ParamLimits

0xf82c,	// (0x00052ab5) main_image3_pane_g

0x596c,	// (0x00048bf5) main_image3_pane_t1_ParamLimits

0x596c,	// (0x00048bf5) main_image3_pane_t1

0x59c4,	// (0x00048c4d) main_image3_pane_t2_ParamLimits

0x59c4,	// (0x00048c4d) main_image3_pane_t2

0x5a16,	// (0x00048c9f) main_image3_pane_t3_ParamLimits

0x5a16,	// (0x00048c9f) main_image3_pane_t3

0x0003,

0xf835,	// (0x00052abe) main_image3_pane_t_ParamLimits

0xf835,	// (0x00052abe) main_image3_pane_t

0xa8af,	// (0x0004db38) grid_sctrl_middle_pane_cp01_ParamLimits

0xa8af,	// (0x0004db38) grid_sctrl_middle_pane_cp01

0x5a9e,	// (0x00048d27) cell_sctrl_middle_pane_cp01_ParamLimits

0x5a9e,	// (0x00048d27) cell_sctrl_middle_pane_cp01

0x5abb,	// (0x00048d44) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5abb,	// (0x00048d44) cell_sctrl_middle_pane_cp01_g1

0xa832,	// (0x0004dabb) main_call4_pane

0x5ad0,	// (0x00048d59) aid_size_button_call4_ParamLimits

0x5ad0,	// (0x00048d59) aid_size_button_call4

0x5b03,	// (0x00048d8c) call4_windows_pane_ParamLimits

0x5b03,	// (0x00048d8c) call4_windows_pane

0x5b22,	// (0x00048dab) grid_call4_button_pane_ParamLimits

0x5b22,	// (0x00048dab) grid_call4_button_pane

0x5b59,	// (0x00048de2) call4_windows_conf_pane

0x5b72,	// (0x00048dfb) popup_call4_audio_first_window_ParamLimits

0x5b72,	// (0x00048dfb) popup_call4_audio_first_window

0x5bc2,	// (0x00048e4b) popup_call4_audio_second_window_ParamLimits

0x5bc2,	// (0x00048e4b) popup_call4_audio_second_window

0x5bdb,	// (0x00048e64) popup_call4_audio_wait_window_ParamLimits

0x5bdb,	// (0x00048e64) popup_call4_audio_wait_window

0x5be9,	// (0x00048e72) cell_call4_button_pane_ParamLimits

0x5be9,	// (0x00048e72) cell_call4_button_pane

0x5c10,	// (0x00048e99) bg_button_pane_cp09_ParamLimits

0x5c10,	// (0x00048e99) bg_button_pane_cp09

0x5c1c,	// (0x00048ea5) cell_call4_button_pane_g1_ParamLimits

0x5c1c,	// (0x00048ea5) cell_call4_button_pane_g1

0x5c42,	// (0x00048ecb) cell_call4_button_pane_t1_ParamLimits

0x5c42,	// (0x00048ecb) cell_call4_button_pane_t1

0x5c70,	// (0x00048ef9) popup_call4_audio_conf_window_ParamLimits

0x5c70,	// (0x00048ef9) popup_call4_audio_conf_window

0x4f97,	// (0x00048220) mup3_progress_pane_t1_ParamLimits

0x4fb6,	// (0x0004823f) mup3_progress_pane_t2_ParamLimits

0xeb59,	// (0x00051de2) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x00052993) mup3_progress_pane_t_ParamLimits

0xeb76,	// (0x00051dff) mup_progress_pane_cp03_ParamLimits

0x54c0,	// (0x00048749) mup3_control_keys_pane_g4_copy1

0xb5d5,	// (0x0004e85e) mp4_rocker2_pane_ParamLimits

0xb5d5,	// (0x0004e85e) mp4_rocker2_pane

0x5c8a,	// (0x00048f13) mp4_rocker2_pane_g1

0x5c92,	// (0x00048f1b) mp4_rocker2_pane_g2

0xb677,	// (0x0004e900) mp4_rocker2_pane_g3

0xb67f,	// (0x0004e908) mp4_rocker2_pane_g4

0xb687,	// (0x0004e910) mp4_rocker2_pane_g5

0x0004,

0xf83e,	// (0x00052ac7) mp4_rocker2_pane_g

0xa832,	// (0x0004dabb) main_camera4_pane

0xa832,	// (0x0004dabb) main_video4_pane

0x55c1,	// (0x0004884a) main_video_tele_dialer_pane_t1_ParamLimits

0x55c1,	// (0x0004884a) main_video_tele_dialer_pane_t1

0x55da,	// (0x00048863) main_video_tele_dialer_pane_t2_ParamLimits

0x55da,	// (0x00048863) main_video_tele_dialer_pane_t2

0x0001,

0xf7f4,	// (0x00052a7d) main_video_tele_dialer_pane_t_ParamLimits

0xf7f4,	// (0x00052a7d) main_video_tele_dialer_pane_t

0x5cb2,	// (0x00048f3b) cam4_autofocus_pane_ParamLimits

0x5cb2,	// (0x00048f3b) cam4_autofocus_pane

0x5cc8,	// (0x00048f51) cam4_image_uncrop_pane_ParamLimits

0x5cc8,	// (0x00048f51) cam4_image_uncrop_pane

0x5ce1,	// (0x00048f6a) cam4_indicators_pane_ParamLimits

0x5ce1,	// (0x00048f6a) cam4_indicators_pane

0x5d11,	// (0x00048f9a) main_camera4_pane_g1_ParamLimits

0x5d11,	// (0x00048f9a) main_camera4_pane_g1

0x5d23,	// (0x00048fac) main_camera4_pane_g2_ParamLimits

0x5d23,	// (0x00048fac) main_camera4_pane_g2

0x5d36,	// (0x00048fbf) main_camera4_pane_g3_ParamLimits

0x5d36,	// (0x00048fbf) main_camera4_pane_g3

0x5d49,	// (0x00048fd2) main_camera4_pane_g4_ParamLimits

0x5d49,	// (0x00048fd2) main_camera4_pane_g4

0x5d5c,	// (0x00048fe5) main_camera4_pane_g5_ParamLimits

0x5d5c,	// (0x00048fe5) main_camera4_pane_g5

0x0005,

0xf849,	// (0x00052ad2) main_camera4_pane_g_ParamLimits

0xf849,	// (0x00052ad2) main_camera4_pane_g

0x5d80,	// (0x00049009) main_camera4_pane_t1_ParamLimits

0x5d80,	// (0x00049009) main_camera4_pane_t1

0xafdb,	// (0x0004e264) bg_tb_trans_pane_cp06

0xb6b5,	// (0x0004e93e) cam4_indicators_pane_g1

0xb6c6,	// (0x0004e94f) cam4_indicators_pane_g2

0x0002,

0xf864,	// (0x00052aed) cam4_indicators_pane_g

0xb6de,	// (0x0004e967) cam4_indicators_pane_t1

0x5df8,	// (0x00049081) main_video4_pane_g1_ParamLimits

0x5df8,	// (0x00049081) main_video4_pane_g1

0x5e07,	// (0x00049090) main_video4_pane_g2_ParamLimits

0x5e07,	// (0x00049090) main_video4_pane_g2

0x5e17,	// (0x000490a0) main_video4_pane_g3_ParamLimits

0x5e17,	// (0x000490a0) main_video4_pane_g3

0x5e27,	// (0x000490b0) main_video4_pane_g4_ParamLimits

0x5e27,	// (0x000490b0) main_video4_pane_g4

0x0004,

0xf86b,	// (0x00052af4) main_video4_pane_g_ParamLimits

0xf86b,	// (0x00052af4) main_video4_pane_g

0x5e47,	// (0x000490d0) vid4_indicators_pane_ParamLimits

0x5e47,	// (0x000490d0) vid4_indicators_pane

0x5e71,	// (0x000490fa) video4_image_uncrop_cif_pane_ParamLimits

0x5e71,	// (0x000490fa) video4_image_uncrop_cif_pane

0x5e8b,	// (0x00049114) video4_image_uncrop_nhd_pane_ParamLimits

0x5e8b,	// (0x00049114) video4_image_uncrop_nhd_pane

0x5cc8,	// (0x00048f51) video4_image_uncrop_vga_pane_ParamLimits

0x5cc8,	// (0x00048f51) video4_image_uncrop_vga_pane

0xa8af,	// (0x0004db38) bg_tb_trans_pane_cp07

0xb70c,	// (0x0004e995) vid4_indicators_pane_g1

0xb722,	// (0x0004e9ab) vid4_indicators_pane_g2

0xb736,	// (0x0004e9bf) vid4_indicators_pane_g3

0x0004,

0xf876,	// (0x00052aff) vid4_indicators_pane_g

0xb767,	// (0x0004e9f0) vid4_indicators_pane_t1

0x5ea2,	// (0x0004912b) cam4_autofocus_pane_g1

0x5eaa,	// (0x00049133) cam4_autofocus_pane_g2

0x5eb2,	// (0x0004913b) cam4_autofocus_pane_g3

0x0002,

0xf881,	// (0x00052b0a) cam4_autofocus_pane_g

0x5eba,	// (0x00049143) cam4_autofocus_pane_g3_copy1

0x5609,	// (0x00048892) video_down_pane_cp_t1

0x5617,	// (0x000488a0) video_down_pane_cp_t2

0x0001,

0xf7f9,	// (0x00052a82) video_down_pane_cp_t

0xa8af,	// (0x0004db38) popup_vitu2_window_ParamLimits

0xa8af,	// (0x0004db38) popup_vitu2_window

0x5ec2,	// (0x0004914b) aid_size_cell2_itu2_ParamLimits

0x5ec2,	// (0x0004914b) aid_size_cell2_itu2

0x5ee8,	// (0x00049171) aid_size_cell_itu2_ParamLimits

0x5ee8,	// (0x00049171) aid_size_cell_itu2

0x5045,	// (0x000482ce) bg_popup_window_pane_cp09_ParamLimits

0x5045,	// (0x000482ce) bg_popup_window_pane_cp09

0x5f46,	// (0x000491cf) field_vitu2_entry_pane_ParamLimits

0x5f46,	// (0x000491cf) field_vitu2_entry_pane

0x5f6e,	// (0x000491f7) grid_vitu2_function_pane_ParamLimits

0x5f6e,	// (0x000491f7) grid_vitu2_function_pane

0x5fbf,	// (0x00049248) grid_vitu2_itu_pane_ParamLimits

0x5fbf,	// (0x00049248) grid_vitu2_itu_pane

0x604f,	// (0x000492d8) cell_vitu2_itu_pane_ParamLimits

0x604f,	// (0x000492d8) cell_vitu2_itu_pane

0x607d,	// (0x00049306) cell_vitu2_function_pane_ParamLimits

0x607d,	// (0x00049306) cell_vitu2_function_pane

0x60c1,	// (0x0004934a) bg_popup_call_pane_cp08_ParamLimits

0x60c1,	// (0x0004934a) bg_popup_call_pane_cp08

0x60d8,	// (0x00049361) field_vitu2_entry_pane_g1

0x60e4,	// (0x0004936d) field_vitu2_entry_pane_g2

0x0002,

0xf888,	// (0x00052b11) field_vitu2_entry_pane_g

0x08ff,	// (0x00043b88) field_vitu2_entry_pane_t1_ParamLimits

0x08ff,	// (0x00043b88) field_vitu2_entry_pane_t1

0xb77e,	// (0x0004ea07) field_vitu2_entry_pane_t2_ParamLimits

0xb77e,	// (0x0004ea07) field_vitu2_entry_pane_t2

0x0001,

0xf88f,	// (0x00052b18) field_vitu2_entry_pane_t_ParamLimits

0xf88f,	// (0x00052b18) field_vitu2_entry_pane_t

0x60f8,	// (0x00049381) bg_button_pane_cp010_ParamLimits

0x60f8,	// (0x00049381) bg_button_pane_cp010

0x6106,	// (0x0004938f) cell_vitu2_itu_pane_g1

0x612c,	// (0x000493b5) cell_vitu2_itu_pane_t1_ParamLimits

0x612c,	// (0x000493b5) cell_vitu2_itu_pane_t1

0x092f,	// (0x00043bb8) cell_vitu2_itu_pane_t2_ParamLimits

0x092f,	// (0x00043bb8) cell_vitu2_itu_pane_t2

0x0002,

0xf899,	// (0x00052b22) cell_vitu2_itu_pane_t_ParamLimits

0xf899,	// (0x00052b22) cell_vitu2_itu_pane_t

0xa8af,	// (0x0004db38) bg_button_pane_cp011

0x618a,	// (0x00049413) cell_vitu2_function_pane_g1

0xa832,	// (0x0004dabb) main_myfav_hc_pane

0x5a66,	// (0x00048cef) popup_image3_note_pane_ParamLimits

0x5a66,	// (0x00048cef) popup_image3_note_pane

0x5a82,	// (0x00048d0b) popup_image3_tool_bar_pane_ParamLimits

0x5a82,	// (0x00048d0b) popup_image3_tool_bar_pane

0x09bd,	// (0x00043c46) cell_vitu2_itu_pane_t3_ParamLimits

0x09bd,	// (0x00043c46) cell_vitu2_itu_pane_t3

0xa832,	// (0x0004dabb) bg_popup_trans_pane

0x619e,	// (0x00049427) grid_image3_tool_bar_pane

0x61a8,	// (0x00049431) bg_popup_trans_pane_g1

0xc9f0,	// (0x0004fc79) bg_popup_trans_pane_g2

0x61b0,	// (0x00049439) bg_popup_trans_pane_g3

0x61b8,	// (0x00049441) bg_popup_trans_pane_g4

0x61c0,	// (0x00049449) bg_popup_trans_pane_g5

0x61c8,	// (0x00049451) bg_popup_trans_pane_g6

0x61d0,	// (0x00049459) bg_popup_trans_pane_g7

0x61d8,	// (0x00049461) bg_popup_trans_pane_g8

0xc9d0,	// (0x0004fc59) bg_popup_trans_pane_g9

0x0008,

0xf8a0,	// (0x00052b29) bg_popup_trans_pane_g

0x61e0,	// (0x00049469) cell_image3_tool_bar_pane_ParamLimits

0x61e0,	// (0x00049469) cell_image3_tool_bar_pane

0xc7db,	// (0x0004fa64) cell_image3_tool_bar_pane_g1

0xa832,	// (0x0004dabb) bg_popup_trans_pane_cp1

0x61f6,	// (0x0004947f) popup_image3_note_pane_t1

0x6204,	// (0x0004948d) popup_image3_note_pane_t2

0x6212,	// (0x0004949b) popup_image3_note_pane_t3

0x0002,

0xf8b3,	// (0x00052b3c) popup_image3_note_pane_t

0x6222,	// (0x000494ab) popup_image3_note_pane_t3_copy1

0x6230,	// (0x000494b9) bg_myfav_hc_instruction_pane_ParamLimits

0x6230,	// (0x000494b9) bg_myfav_hc_instruction_pane

0x6248,	// (0x000494d1) cell_myfav_contact_pane_ParamLimits

0x6248,	// (0x000494d1) cell_myfav_contact_pane

0x6264,	// (0x000494ed) cell_myfav_contact_pane_cp1_ParamLimits

0x6264,	// (0x000494ed) cell_myfav_contact_pane_cp1

0x627c,	// (0x00049505) cell_myfav_contact_pane_cp2_ParamLimits

0x627c,	// (0x00049505) cell_myfav_contact_pane_cp2

0x6294,	// (0x0004951d) cell_myfav_contact_pane_cp3_ParamLimits

0x6294,	// (0x0004951d) cell_myfav_contact_pane_cp3

0x62ab,	// (0x00049534) cell_myfav_contact_pane_cp4_ParamLimits

0x62ab,	// (0x00049534) cell_myfav_contact_pane_cp4

0x62c3,	// (0x0004954c) cell_myfav_contact_pane_cp5_ParamLimits

0x62c3,	// (0x0004954c) cell_myfav_contact_pane_cp5

0x62d7,	// (0x00049560) cell_myfav_contact_pane_cp6_ParamLimits

0x62d7,	// (0x00049560) cell_myfav_contact_pane_cp6

0x62ed,	// (0x00049576) cell_myfav_contact_pane_cp7_ParamLimits

0x62ed,	// (0x00049576) cell_myfav_contact_pane_cp7

0x6305,	// (0x0004958e) listscroll_gen_pane_cp05

0x630e,	// (0x00049597) main_myfav_hc_pane_g1_ParamLimits

0x630e,	// (0x00049597) main_myfav_hc_pane_g1

0x6328,	// (0x000495b1) main_myfav_hc_pane_g2_ParamLimits

0x6328,	// (0x000495b1) main_myfav_hc_pane_g2

0x0002,

0xf8ba,	// (0x00052b43) main_myfav_hc_pane_g_ParamLimits

0xf8ba,	// (0x00052b43) main_myfav_hc_pane_g

0x635c,	// (0x000495e5) main_myfav_hc_pane_t1_ParamLimits

0x635c,	// (0x000495e5) main_myfav_hc_pane_t1

0x6373,	// (0x000495fc) main_myfav_hc_pane_t2_ParamLimits

0x6373,	// (0x000495fc) main_myfav_hc_pane_t2

0x6385,	// (0x0004960e) main_myfav_hc_pane_t3_ParamLimits

0x6385,	// (0x0004960e) main_myfav_hc_pane_t3

0x6397,	// (0x00049620) main_myfav_hc_pane_t4_ParamLimits

0x6397,	// (0x00049620) main_myfav_hc_pane_t4

0x0004,

0xf8c1,	// (0x00052b4a) main_myfav_hc_pane_t_ParamLimits

0xf8c1,	// (0x00052b4a) main_myfav_hc_pane_t

0xc7db,	// (0x0004fa64) bg_myfav_hc_instruction_pane_g1

0x63c1,	// (0x0004964a) cell_myfav_contact_pane_g1_ParamLimits

0x63c1,	// (0x0004964a) cell_myfav_contact_pane_g1

0x63c1,	// (0x0004964a) cell_myfav_contact_pane_g2_ParamLimits

0x63c1,	// (0x0004964a) cell_myfav_contact_pane_g2

0x63cd,	// (0x00049656) cell_myfav_contact_pane_g3_ParamLimits

0x63cd,	// (0x00049656) cell_myfav_contact_pane_g3

0xafe9,	// (0x0004e272) cell_myfav_contact_pane_g4_ParamLimits

0xafe9,	// (0x0004e272) cell_myfav_contact_pane_g4

0x63da,	// (0x00049663) cell_myfav_contact_pane_g5_ParamLimits

0x63da,	// (0x00049663) cell_myfav_contact_pane_g5

0x0004,

0xf8cc,	// (0x00052b55) cell_myfav_contact_pane_g_ParamLimits

0xf8cc,	// (0x00052b55) cell_myfav_contact_pane_g

0x6342,	// (0x000495cb) main_myfav_hc_pane_g3_ParamLimits

0x6342,	// (0x000495cb) main_myfav_hc_pane_g3

0x1269,	// (0x000444f2) popup_adpt_find_window

0x63e6,	// (0x0004966f) afind_page_pane_ParamLimits

0x63e6,	// (0x0004966f) afind_page_pane

0x63fb,	// (0x00049684) aid_size_cell_afind_ParamLimits

0x63fb,	// (0x00049684) aid_size_cell_afind

0x6419,	// (0x000496a2) bg_popup_sub_pane_cp09_ParamLimits

0x6419,	// (0x000496a2) bg_popup_sub_pane_cp09

0x6426,	// (0x000496af) find_pane_cp01_ParamLimits

0x6426,	// (0x000496af) find_pane_cp01

0x6433,	// (0x000496bc) grid_afind_control_pane_ParamLimits

0x6433,	// (0x000496bc) grid_afind_control_pane

0x6447,	// (0x000496d0) grid_afind_pane_ParamLimits

0x6447,	// (0x000496d0) grid_afind_pane

0x6469,	// (0x000496f2) cell_afind_pane_ParamLimits

0x6469,	// (0x000496f2) cell_afind_pane

0xc7db,	// (0x0004fa64) afind_page_pane_g1

0x64d6,	// (0x0004975f) afind_page_pane_g2

0x64df,	// (0x00049768) afind_page_pane_g3

0x0002,

0xf8d7,	// (0x00052b60) afind_page_pane_g

0x64e8,	// (0x00049771) afind_page_pane_t1

0x6508,	// (0x00049791) cell_afind_grid_control_pane_ParamLimits

0x6508,	// (0x00049791) cell_afind_grid_control_pane

0x5805,	// (0x00048a8e) bg_button_pane_cp69_ParamLimits

0x5805,	// (0x00048a8e) bg_button_pane_cp69

0x6517,	// (0x000497a0) cell_afind_pane_g1_ParamLimits

0x6517,	// (0x000497a0) cell_afind_pane_g1

0x6524,	// (0x000497ad) cell_afind_pane_t1_ParamLimits

0x6524,	// (0x000497ad) cell_afind_pane_t1

0xc7e5,	// (0x0004fa6e) bg_button_pane_cp72

0x6536,	// (0x000497bf) cell_afind_grid_control_pane_g1

0x3b4d,	// (0x00046dd6) aid_image_placing_area_ParamLimits

0x3b4d,	// (0x00046dd6) aid_image_placing_area

0xafdb,	// (0x0004e264) field_vitu_entry_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) field_vitu_entry_pane_g1

0xafdb,	// (0x0004e264) field_vitu_entry_pane_g2_ParamLimits

0xafdb,	// (0x0004e264) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00052470) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00052470) field_vitu_entry_pane_g

0xee76,	// (0x000520ff) cell_vitu_itu_pane_g1_ParamLimits

0xee59,	// (0x000520e2) cell_vitu_itu_pane_t3_ParamLimits

0xee59,	// (0x000520e2) cell_vitu_itu_pane_t3

0x56fe,	// (0x00048987) mp4_progress_pane_t1_ParamLimits

0x5717,	// (0x000489a0) mp4_progress_pane_t2_ParamLimits

0xf81d,	// (0x00052aa6) mp4_progress_pane_t_ParamLimits

0x5730,	// (0x000489b9) mup_progress_pane_cp04_ParamLimits

0x63ab,	// (0x00049634) main_myfav_hc_pane_t5_ParamLimits

0x63ab,	// (0x00049634) main_myfav_hc_pane_t5

0xa858,	// (0x0004dae1) aid_zoom_text_primary

0x1269,	// (0x000444f2) popup_adpt_find_window_ParamLimits

0xa8af,	// (0x0004db38) main_cam_set_pane

0x5cfa,	// (0x00048f83) cam4_zoom_pane_ParamLimits

0x5cfa,	// (0x00048f83) cam4_zoom_pane

0x653f,	// (0x000497c8) main_cam_set_pane_g1_ParamLimits

0x653f,	// (0x000497c8) main_cam_set_pane_g1

0x654d,	// (0x000497d6) main_cam_set_pane_g2_ParamLimits

0x654d,	// (0x000497d6) main_cam_set_pane_g2

0x0001,

0xf8de,	// (0x00052b67) main_cam_set_pane_g_ParamLimits

0xf8de,	// (0x00052b67) main_cam_set_pane_g

0x656e,	// (0x000497f7) main_cam_set_pane_t1_ParamLimits

0x656e,	// (0x000497f7) main_cam_set_pane_t1

0x6589,	// (0x00049812) main_cset_listscroll_pane_ParamLimits

0x6589,	// (0x00049812) main_cset_listscroll_pane

0x65b1,	// (0x0004983a) main_cset_slider_pane_ParamLimits

0x65b1,	// (0x0004983a) main_cset_slider_pane

0x65e3,	// (0x0004986c) main_cset_list_pane_ParamLimits

0x65e3,	// (0x0004986c) main_cset_list_pane

0x65f3,	// (0x0004987c) scroll_pane_cp028

0x65fc,	// (0x00049885) aid_area_touch_slider

0x6618,	// (0x000498a1) cset_slider_pane

0x663b,	// (0x000498c4) main_cset_slider_pane_g1

0x6650,	// (0x000498d9) main_cset_slider_pane_g2

0x0011,

0xf8e3,	// (0x00052b6c) main_cset_slider_pane_g

0x6742,	// (0x000499cb) main_cset_slider_pane_t1

0x676a,	// (0x000499f3) main_cset_slider_pane_t2

0x6784,	// (0x00049a0d) main_cset_slider_pane_t3

0x679e,	// (0x00049a27) main_cset_slider_pane_t4

0x67b8,	// (0x00049a41) main_cset_slider_pane_t5

0x67d6,	// (0x00049a5f) main_cset_slider_pane_t6

0x67ed,	// (0x00049a76) main_cset_slider_pane_t7

0x000e,

0xf908,	// (0x00052b91) main_cset_slider_pane_t

0x696b,	// (0x00049bf4) cset_list_set_pane_ParamLimits

0x696b,	// (0x00049bf4) cset_list_set_pane

0x697f,	// (0x00049c08) aid_position_infowindow_above

0x6987,	// (0x00049c10) aid_position_infowindow_below

0x0a1b,	// (0x00043ca4) cset_list_set_pane_g1_ParamLimits

0x0a1b,	// (0x00043ca4) cset_list_set_pane_g1

0x0a27,	// (0x00043cb0) cset_list_set_pane_g3_ParamLimits

0x0a27,	// (0x00043cb0) cset_list_set_pane_g3

0x0001,

0xf927,	// (0x00052bb0) cset_list_set_pane_g_ParamLimits

0xf927,	// (0x00052bb0) cset_list_set_pane_g

0x0a36,	// (0x00043cbf) cset_list_set_pane_t1_ParamLimits

0x0a36,	// (0x00043cbf) cset_list_set_pane_t1

0xa8af,	// (0x0004db38) list_highlight_pane_cp021_ParamLimits

0xa8af,	// (0x0004db38) list_highlight_pane_cp021

0xd24c,	// (0x000504d5) cset_slider_pane_g1

0xd25e,	// (0x000504e7) cset_slider_pane_g2

0xd255,	// (0x000504de) cset_slider_pane_g3

0x0002,

0xf92c,	// (0x00052bb5) cset_slider_pane_g

0x698f,	// (0x00049c18) aid_area_touch_cam4_zoom

0x6998,	// (0x00049c21) cam4_zoom_cont_pane

0x69a0,	// (0x00049c29) cam4_zoom_pane_g1

0x69a8,	// (0x00049c31) cam4_zoom_pane_g2

0x69b0,	// (0x00049c39) cam4_zoom_pane_g3

0x0002,

0xf933,	// (0x00052bbc) cam4_zoom_pane_g

0xb79b,	// (0x0004ea24) cam4_zoom_cont_pane_g1

0xb7a4,	// (0x0004ea2d) cam4_zoom_cont_pane_g2

0xb7ad,	// (0x0004ea36) cam4_zoom_cont_pane_g3

0x0002,

0xf93a,	// (0x00052bc3) cam4_zoom_cont_pane_g

0x5aee,	// (0x00048d77) call4_image_pane_ParamLimits

0x5aee,	// (0x00048d77) call4_image_pane

0x5b59,	// (0x00048de2) call4_windows_conf_pane_ParamLimits

0x5ba0,	// (0x00048e29) popup_call4_audio_in_window_ParamLimits

0x5ba0,	// (0x00048e29) popup_call4_audio_in_window

0xa832,	// (0x0004dabb) bg_popup_call2_act_pane_cp02

0x5c68,	// (0x00048ef1) call4_list_conf_pane

0xc7db,	// (0x0004fa64) call4_image_pane_g1

0xc7db,	// (0x0004fa64) call4_image_pane_g2

0x0001,

0xf3be,	// (0x00052647) call4_image_pane_g

0x69b8,	// (0x00049c41) list_single_graphic_popup_conf4_pane_ParamLimits

0x69b8,	// (0x00049c41) list_single_graphic_popup_conf4_pane

0xa832,	// (0x0004dabb) list_highlight_pane_cp022

0x69cd,	// (0x00049c56) list_single_graphic_popup_conf4_pane_g1

0xcf63,	// (0x000501ec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf941,	// (0x00052bca) list_single_graphic_popup_conf4_pane_g

0x69d5,	// (0x00049c5e) list_single_graphic_popup_conf4_pane_t1

0x2054,	// (0x000452dd) popup_vtel_slider_window_ParamLimits

0x2054,	// (0x000452dd) popup_vtel_slider_window

0x57cd,	// (0x00048a56) dialer2_ne_pane_t2_ParamLimits

0x57cd,	// (0x00048a56) dialer2_ne_pane_t2

0x0001,

0xf822,	// (0x00052aab) dialer2_ne_pane_t_ParamLimits

0xf822,	// (0x00052aab) dialer2_ne_pane_t

0xd4cb,	// (0x00050754) bg_popup_sub_pane_cp010_ParamLimits

0xd4cb,	// (0x00050754) bg_popup_sub_pane_cp010

0x69eb,	// (0x00049c74) popup_vtel_slider_window_g1_ParamLimits

0x69eb,	// (0x00049c74) popup_vtel_slider_window_g1

0x69fe,	// (0x00049c87) popup_vtel_slider_window_g2_ParamLimits

0x69fe,	// (0x00049c87) popup_vtel_slider_window_g2

0x0003,

0xf946,	// (0x00052bcf) popup_vtel_slider_window_g_ParamLimits

0xf946,	// (0x00052bcf) popup_vtel_slider_window_g

0x6a54,	// (0x00049cdd) vtel_slider_pane_ParamLimits

0x6a54,	// (0x00049cdd) vtel_slider_pane

0x6a76,	// (0x00049cff) vtel_slider_pane_g1_ParamLimits

0x6a76,	// (0x00049cff) vtel_slider_pane_g1

0x6a8a,	// (0x00049d13) vtel_slider_pane_g2_ParamLimits

0x6a8a,	// (0x00049d13) vtel_slider_pane_g2

0x6aa2,	// (0x00049d2b) vtel_slider_pane_g3_ParamLimits

0x6aa2,	// (0x00049d2b) vtel_slider_pane_g3

0x6a76,	// (0x00049cff) vtel_slider_pane_g4_ParamLimits

0x6a76,	// (0x00049cff) vtel_slider_pane_g4

0x6ab8,	// (0x00049d41) vtel_slider_pane_g5_ParamLimits

0x6ab8,	// (0x00049d41) vtel_slider_pane_g5

0x0004,

0xf94f,	// (0x00052bd8) vtel_slider_pane_g_ParamLimits

0xf94f,	// (0x00052bd8) vtel_slider_pane_g

0xa8af,	// (0x0004db38) main_gallery2_pane

0x5f14,	// (0x0004919d) aid_size_row_itut2_dropdow_list_ParamLimits

0x5f14,	// (0x0004919d) aid_size_row_itut2_dropdow_list

0x5f96,	// (0x0004921f) grid_vitu2_function_top_pane_ParamLimits

0x5f96,	// (0x0004921f) grid_vitu2_function_top_pane

0x5ffa,	// (0x00049283) popup_vitu2_dropdown_list_window_ParamLimits

0x5ffa,	// (0x00049283) popup_vitu2_dropdown_list_window

0x6021,	// (0x000492aa) popup_vitu2_match_list_window

0x6ace,	// (0x00049d57) cell_vitu2_function_top_pane_ParamLimits

0x6ace,	// (0x00049d57) cell_vitu2_function_top_pane

0x6ae8,	// (0x00049d71) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ae8,	// (0x00049d71) cell_vitu2_function_top_pane_cp01

0x6b04,	// (0x00049d8d) cell_vitu2_function_top_wide_pane_ParamLimits

0x6b04,	// (0x00049d8d) cell_vitu2_function_top_wide_pane

0xa8af,	// (0x0004db38) bg_button_pane_cp012

0x6b22,	// (0x00049dab) cell_vitu2_function_top_pane_g1

0xb7b6,	// (0x0004ea3f) bg_button_pane_cp013_ParamLimits

0xb7b6,	// (0x0004ea3f) bg_button_pane_cp013

0x6b36,	// (0x00049dbf) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6b36,	// (0x00049dbf) cell_vitu2_function_top_wide_pane_g1

0xa8af,	// (0x0004db38) bg_popup_sub_pane_cp20

0x6b4e,	// (0x00049dd7) list_vitu2_match_list_pane

0x61a8,	// (0x00049431) bg_popup_sub_pane_cp20_g1

0x61b0,	// (0x00049439) bg_popup_sub_pane_cp20_g2

0xc9f0,	// (0x0004fc79) bg_popup_sub_pane_cp20_g3

0x61b8,	// (0x00049441) bg_popup_sub_pane_cp20_g4

0xc9d0,	// (0x0004fc59) bg_popup_sub_pane_cp20_g5

0x6b66,	// (0x00049def) bg_popup_sub_pane_cp20_g6

0x61c8,	// (0x00049451) bg_popup_sub_pane_cp20_g7

0x61d0,	// (0x00049459) bg_popup_sub_pane_cp20_g8

0x61d8,	// (0x00049461) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95a,	// (0x00052be3) bg_popup_sub_pane_cp20_g

0xb7d2,	// (0x0004ea5b) list_vitu2_match_list_item_pane_ParamLimits

0xb7d2,	// (0x0004ea5b) list_vitu2_match_list_item_pane

0xb7e4,	// (0x0004ea6d) list_vitu2_match_list_item_pane_t1

0xa832,	// (0x0004dabb) bg_popup_sub_pane_cp21

0xc7a5,	// (0x0004fa2e) grid_vitu2_dropdown_list_pane

0x6b6e,	// (0x00049df7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6b6e,	// (0x00049df7) cell_vitu2_dropdown_list_char_pane

0x6b90,	// (0x00049e19) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6b90,	// (0x00049e19) cell_vitu2_dropdown_list_ctrl_pane

0x6bba,	// (0x00049e43) cell_vitu2_dropdown_list_char_pane_g1

0x6bc3,	// (0x00049e4c) cell_vitu2_dropdown_list_char_pane_g2

0x6bcc,	// (0x00049e55) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf96d,	// (0x00052bf6) cell_vitu2_dropdown_list_char_pane_g

0x6bd5,	// (0x00049e5e) cell_vitu2_dropdown_list_char_pane_t1

0x6be3,	// (0x00049e6c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6be3,	// (0x00049e6c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6bf3,	// (0x00049e7c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6bf3,	// (0x00049e7c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6c04,	// (0x00049e8d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6c04,	// (0x00049e8d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6c14,	// (0x00049e9d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6c14,	// (0x00049e9d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xafdb,	// (0x0004e264) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xafdb,	// (0x0004e264) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf974,	// (0x00052bfd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf974,	// (0x00052bfd) cell_vitu2_dropdown_list_ctrl_pane_g

0x6c30,	// (0x00049eb9) aid_size_cell_gallery2_ParamLimits

0x6c30,	// (0x00049eb9) aid_size_cell_gallery2

0x6c4e,	// (0x00049ed7) grid_gallery2_pane_ParamLimits

0x6c4e,	// (0x00049ed7) grid_gallery2_pane

0x6c68,	// (0x00049ef1) scroll_pane_cp029_ParamLimits

0x6c68,	// (0x00049ef1) scroll_pane_cp029

0x6c79,	// (0x00049f02) cell_gallery2_pane_ParamLimits

0x6c79,	// (0x00049f02) cell_gallery2_pane

0x6cdd,	// (0x00049f66) cell_gallery2_pane_g2

0x6ce5,	// (0x00049f6e) cell_gallery2_pane_g3

0x6ced,	// (0x00049f76) cell_gallery2_pane_g4

0x6cf5,	// (0x00049f7e) cell_gallery2_pane_g5

0xc7a5,	// (0x0004fa2e) grid_highlight_pane_cp10

0x6021,	// (0x000492aa) popup_vitu2_match_list_window_ParamLimits

0x6038,	// (0x000492c1) popup_vitu2_query_window_ParamLimits

0x6038,	// (0x000492c1) popup_vitu2_query_window

0xa832,	// (0x0004dabb) bg_vitu2_candi_button_pane

0x6bba,	// (0x00049e43) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x6bc3,	// (0x00049e4c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x6bcc,	// (0x00049e55) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0a4b,	// (0x00043cd4) bg_button_pane_cp015

0x6cfd,	// (0x00049f86) bg_button_pane_cp016

0x6d09,	// (0x00049f92) bg_button_pane_cp017

0xe2e6,	// (0x0005156f) bg_popup_sub_pane_cp22

0x6d24,	// (0x00049fad) popup_vitu2_query_window_g1

0x0a88,	// (0x00043d11) popup_vitu2_query_window_g2

0x0002,

0xf97f,	// (0x00052c08) popup_vitu2_query_window_g

0x0aa2,	// (0x00043d2b) popup_vitu2_query_window_t1_ParamLimits

0x0aa2,	// (0x00043d2b) popup_vitu2_query_window_t1

0x0ad7,	// (0x00043d60) popup_vitu2_query_window_t2_ParamLimits

0x0ad7,	// (0x00043d60) popup_vitu2_query_window_t2

0x0ae9,	// (0x00043d72) popup_vitu2_query_window_t3_ParamLimits

0x0ae9,	// (0x00043d72) popup_vitu2_query_window_t3

0x6d3c,	// (0x00049fc5) popup_vitu2_query_window_t4_ParamLimits

0x6d3c,	// (0x00049fc5) popup_vitu2_query_window_t4

0x6d50,	// (0x00049fd9) popup_vitu2_query_window_t5_ParamLimits

0x6d50,	// (0x00049fd9) popup_vitu2_query_window_t5

0x0006,

0xf986,	// (0x00052c0f) popup_vitu2_query_window_t_ParamLimits

0xf986,	// (0x00052c0f) popup_vitu2_query_window_t

0x65db,	// (0x00049864) main_cset_text_pane

0x65fc,	// (0x00049885) aid_area_touch_slider_ParamLimits

0x6618,	// (0x000498a1) cset_slider_pane_ParamLimits

0x663b,	// (0x000498c4) main_cset_slider_pane_g1_ParamLimits

0x6650,	// (0x000498d9) main_cset_slider_pane_g2_ParamLimits

0x6665,	// (0x000498ee) main_cset_slider_pane_g3_ParamLimits

0x6665,	// (0x000498ee) main_cset_slider_pane_g3

0x6671,	// (0x000498fa) main_cset_slider_pane_g4_ParamLimits

0x6671,	// (0x000498fa) main_cset_slider_pane_g4

0x6680,	// (0x00049909) main_cset_slider_pane_g5_ParamLimits

0x6680,	// (0x00049909) main_cset_slider_pane_g5

0x668e,	// (0x00049917) main_cset_slider_pane_g6_ParamLimits

0x668e,	// (0x00049917) main_cset_slider_pane_g6

0xf8e3,	// (0x00052b6c) main_cset_slider_pane_g_ParamLimits

0x6742,	// (0x000499cb) main_cset_slider_pane_t1_ParamLimits

0x676a,	// (0x000499f3) main_cset_slider_pane_t2_ParamLimits

0x6784,	// (0x00049a0d) main_cset_slider_pane_t3_ParamLimits

0x679e,	// (0x00049a27) main_cset_slider_pane_t4_ParamLimits

0x67b8,	// (0x00049a41) main_cset_slider_pane_t5_ParamLimits

0x67d6,	// (0x00049a5f) main_cset_slider_pane_t6_ParamLimits

0x67ed,	// (0x00049a76) main_cset_slider_pane_t7_ParamLimits

0x681b,	// (0x00049aa4) main_cset_slider_pane_t8_ParamLimits

0x681b,	// (0x00049aa4) main_cset_slider_pane_t8

0x6843,	// (0x00049acc) main_cset_slider_pane_t9_ParamLimits

0x6843,	// (0x00049acc) main_cset_slider_pane_t9

0x686b,	// (0x00049af4) main_cset_slider_pane_t10_ParamLimits

0x686b,	// (0x00049af4) main_cset_slider_pane_t10

0x6893,	// (0x00049b1c) main_cset_slider_pane_t11_ParamLimits

0x6893,	// (0x00049b1c) main_cset_slider_pane_t11

0x68bd,	// (0x00049b46) main_cset_slider_pane_t12_ParamLimits

0x68bd,	// (0x00049b46) main_cset_slider_pane_t12

0x68da,	// (0x00049b63) main_cset_slider_pane_t13_ParamLimits

0x68da,	// (0x00049b63) main_cset_slider_pane_t13

0xf908,	// (0x00052b91) main_cset_slider_pane_t_ParamLimits

0xa832,	// (0x0004dabb) bg_popup_sub_pane_cp011

0x6d64,	// (0x00049fed) main_cset_text_pane_g1

0x6d6c,	// (0x00049ff5) main_cset_text_pane_t1

0x6d7a,	// (0x0004a003) main_cset_text_pane_t2

0x6d88,	// (0x0004a011) main_cset_text_pane_t3

0x6d96,	// (0x0004a01f) main_cset_text_pane_t4

0x6da4,	// (0x0004a02d) main_cset_text_pane_t5

0x6db2,	// (0x0004a03b) main_cset_text_pane_t6

0x6dc0,	// (0x0004a049) main_cset_text_pane_t7

0x0006,

0xf995,	// (0x00052c1e) main_cset_text_pane_t

0xa832,	// (0x0004dabb) main_cam4_burst_pane

0xa832,	// (0x0004dabb) main_cam5_pane

0x64f6,	// (0x0004977f) bg_button_pane_cp019

0x64ff,	// (0x00049788) bg_button_pane_cp020

0x66a2,	// (0x0004992b) main_cset_slider_pane_g7_ParamLimits

0x66a2,	// (0x0004992b) main_cset_slider_pane_g7

0x66ae,	// (0x00049937) main_cset_slider_pane_g8_ParamLimits

0x66ae,	// (0x00049937) main_cset_slider_pane_g8

0x66ba,	// (0x00049943) main_cset_slider_pane_g9_ParamLimits

0x66ba,	// (0x00049943) main_cset_slider_pane_g9

0x66c6,	// (0x0004994f) main_cset_slider_pane_g10_ParamLimits

0x66c6,	// (0x0004994f) main_cset_slider_pane_g10

0x66d2,	// (0x0004995b) main_cset_slider_pane_g11_ParamLimits

0x66d2,	// (0x0004995b) main_cset_slider_pane_g11

0x66de,	// (0x00049967) main_cset_slider_pane_g12_ParamLimits

0x66de,	// (0x00049967) main_cset_slider_pane_g12

0x66ea,	// (0x00049973) main_cset_slider_pane_g13_ParamLimits

0x66ea,	// (0x00049973) main_cset_slider_pane_g13

0x66f6,	// (0x0004997f) main_cset_slider_pane_g14_ParamLimits

0x66f6,	// (0x0004997f) main_cset_slider_pane_g14

0x6702,	// (0x0004998b) main_cset_slider_pane_g15_ParamLimits

0x6702,	// (0x0004998b) main_cset_slider_pane_g15

0x68f9,	// (0x00049b82) main_cset_slider_pane_t14_ParamLimits

0x68f9,	// (0x00049b82) main_cset_slider_pane_t14

0x6932,	// (0x00049bbb) main_cset_slider_pane_t15_ParamLimits

0x6932,	// (0x00049bbb) main_cset_slider_pane_t15

0x6dce,	// (0x0004a057) aid_cam4_burst_size_cell_ParamLimits

0x6dce,	// (0x0004a057) aid_cam4_burst_size_cell

0x6dee,	// (0x0004a077) grid_cam4_burst_pane_ParamLimits

0x6dee,	// (0x0004a077) grid_cam4_burst_pane

0x6e28,	// (0x0004a0b1) linegrid_cam4_burst_pane_ParamLimits

0x6e28,	// (0x0004a0b1) linegrid_cam4_burst_pane

0x6e4a,	// (0x0004a0d3) scroll_pane_cp30_ParamLimits

0x6e4a,	// (0x0004a0d3) scroll_pane_cp30

0x6e56,	// (0x0004a0df) cell_cam4_burst_pane_ParamLimits

0x6e56,	// (0x0004a0df) cell_cam4_burst_pane

0x6eab,	// (0x0004a134) linegrid_cam4_burst_pane_g1_ParamLimits

0x6eab,	// (0x0004a134) linegrid_cam4_burst_pane_g1

0x6eb8,	// (0x0004a141) linegrid_cam4_burst_pane_g2_ParamLimits

0x6eb8,	// (0x0004a141) linegrid_cam4_burst_pane_g2

0x6ec9,	// (0x0004a152) linegrid_cam4_burst_pane_g3_ParamLimits

0x6ec9,	// (0x0004a152) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a4,	// (0x00052c2d) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a4,	// (0x00052c2d) linegrid_cam4_burst_pane_g

0x6ed6,	// (0x0004a15f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6ed6,	// (0x0004a15f) linegrid_cam4_burst_pane_g3_copy1

0x6ef4,	// (0x0004a17d) linegrid_cam4_burst_pane_g4_ParamLimits

0x6ef4,	// (0x0004a17d) linegrid_cam4_burst_pane_g4

0x6f01,	// (0x0004a18a) linegrid_cam4_burst_pane_g5_ParamLimits

0x6f01,	// (0x0004a18a) linegrid_cam4_burst_pane_g5

0x6f12,	// (0x0004a19b) linegrid_cam4_burst_pane_g6_ParamLimits

0x6f12,	// (0x0004a19b) linegrid_cam4_burst_pane_g6

0x6f29,	// (0x0004a1b2) linegrid_cam4_burst_pane_g7_ParamLimits

0x6f29,	// (0x0004a1b2) linegrid_cam4_burst_pane_g7

0x6f36,	// (0x0004a1bf) cell_cam4_burst_pane_g1

0x6f55,	// (0x0004a1de) main_cam5_pane_t1_ParamLimits

0x6f55,	// (0x0004a1de) main_cam5_pane_t1

0x6f67,	// (0x0004a1f0) main_cam5_pane_t2_ParamLimits

0x6f67,	// (0x0004a1f0) main_cam5_pane_t2

0x6f79,	// (0x0004a202) main_cam5_pane_t3_ParamLimits

0x6f79,	// (0x0004a202) main_cam5_pane_t3

0x6f8b,	// (0x0004a214) main_cam5_pane_t4_ParamLimits

0x6f8b,	// (0x0004a214) main_cam5_pane_t4

0x6fa3,	// (0x0004a22c) main_cam5_pane_t5_ParamLimits

0x6fa3,	// (0x0004a22c) main_cam5_pane_t5

0x6fb7,	// (0x0004a240) main_cam5_pane_t6_ParamLimits

0x6fb7,	// (0x0004a240) main_cam5_pane_t6

0x6fcb,	// (0x0004a254) main_cam5_pane_t7_ParamLimits

0x6fcb,	// (0x0004a254) main_cam5_pane_t7

0x6fdd,	// (0x0004a266) main_cam5_pane_t8_ParamLimits

0x6fdd,	// (0x0004a266) main_cam5_pane_t8

0x6ffb,	// (0x0004a284) main_cam5_pane_t9_ParamLimits

0x6ffb,	// (0x0004a284) main_cam5_pane_t9

0x700d,	// (0x0004a296) main_cam5_pane_t10_ParamLimits

0x700d,	// (0x0004a296) main_cam5_pane_t10

0x701f,	// (0x0004a2a8) main_cam5_pane_t11_ParamLimits

0x701f,	// (0x0004a2a8) main_cam5_pane_t11

0x7033,	// (0x0004a2bc) main_cam5_pane_t12_ParamLimits

0x7033,	// (0x0004a2bc) main_cam5_pane_t12

0x704a,	// (0x0004a2d3) main_cam5_pane_t13_ParamLimits

0x704a,	// (0x0004a2d3) main_cam5_pane_t13

0x000c,

0xf9b0,	// (0x00052c39) main_cam5_pane_t_ParamLimits

0xf9b0,	// (0x00052c39) main_cam5_pane_t

0x12ea,	// (0x00044573) popup_scut_keymap_window_ParamLimits

0x12ea,	// (0x00044573) popup_scut_keymap_window

0x706d,	// (0x0004a2f6) aid_size_cell_brow_shortcut

0xc7a5,	// (0x0004fa2e) bg_popup_window_pane_cp010

0x7079,	// (0x0004a302) grid_scut_pane

0x7085,	// (0x0004a30e) cell_scut_pane_ParamLimits

0x7085,	// (0x0004a30e) cell_scut_pane

0x709e,	// (0x0004a327) cell_scut_pane_g1

0x70a7,	// (0x0004a330) cell_scut_pane_t1

0x70b6,	// (0x0004a33f) cell_scut_pane_t2

0x70c5,	// (0x0004a34e) cell_scut_pane_t3

0x0002,

0xf9cb,	// (0x00052c54) cell_scut_pane_t

0x4b36,	// (0x00047dbf) main_mup3_pane_g8_ParamLimits

0x4b36,	// (0x00047dbf) main_mup3_pane_g8

0x5f2e,	// (0x000491b7) area_vitu2_query_pane_ParamLimits

0x5f2e,	// (0x000491b7) area_vitu2_query_pane

0x0a62,	// (0x00043ceb) input_focus_pane_cp08

0x70d3,	// (0x0004a35c) area_vitu2_query_pane_g1

0x0b67,	// (0x00043df0) area_vitu2_query_pane_g2

0x0001,

0xf9d2,	// (0x00052c5b) area_vitu2_query_pane_g

0x70df,	// (0x0004a368) area_vitu2_query_pane_t1_ParamLimits

0x70df,	// (0x0004a368) area_vitu2_query_pane_t1

0x70f3,	// (0x0004a37c) area_vitu2_query_pane_t2_ParamLimits

0x70f3,	// (0x0004a37c) area_vitu2_query_pane_t2

0x0b7c,	// (0x00043e05) area_vitu2_query_pane_t3_ParamLimits

0x0b7c,	// (0x00043e05) area_vitu2_query_pane_t3

0xb7f2,	// (0x0004ea7b) area_vitu2_query_pane_t4_ParamLimits

0xb7f2,	// (0x0004ea7b) area_vitu2_query_pane_t4

0xb81a,	// (0x0004eaa3) area_vitu2_query_pane_t5_ParamLimits

0xb81a,	// (0x0004eaa3) area_vitu2_query_pane_t5

0xb842,	// (0x0004eacb) area_vitu2_query_pane_t6_ParamLimits

0xb842,	// (0x0004eacb) area_vitu2_query_pane_t6

0x0006,

0xf9d7,	// (0x00052c60) area_vitu2_query_pane_t_ParamLimits

0xf9d7,	// (0x00052c60) area_vitu2_query_pane_t

0x7107,	// (0x0004a390) bg_button_pane_cp018

0x7113,	// (0x0004a39c) bg_button_pane_cp021

0x0ba8,	// (0x00043e31) bg_button_pane_cp022

0x0bcf,	// (0x00043e58) input_focus_pane_cp09

0x3360,	// (0x000465e9) aid_size_touch_mv_arrow_left

0x3389,	// (0x00046612) aid_size_touch_mv_arrow_right

0x671a,	// (0x000499a3) main_cset_slider_pane_g16_ParamLimits

0x671a,	// (0x000499a3) main_cset_slider_pane_g16

0x6728,	// (0x000499b1) main_cset_slider_pane_g17_ParamLimits

0x6728,	// (0x000499b1) main_cset_slider_pane_g17

0x6f36,	// (0x0004a1bf) cell_cam4_burst_pane_g1_ParamLimits

0xa832,	// (0x0004dabb) compa_mode_pane

0x6a0e,	// (0x00049c97) popup_vtel_slider_window_g3_ParamLimits

0x6a0e,	// (0x00049c97) popup_vtel_slider_window_g3

0x6a25,	// (0x00049cae) popup_vtel_slider_window_g4_ParamLimits

0x6a25,	// (0x00049cae) popup_vtel_slider_window_g4

0x6a3c,	// (0x00049cc5) popup_vtel_slider_window_t1_ParamLimits

0x6a3c,	// (0x00049cc5) popup_vtel_slider_window_t1

0xa832,	// (0x0004dabb) main_cl_pane

0xb2ee,	// (0x0004e577) popup_imed_adjust2_window_ParamLimits

0xe2e6,	// (0x0005156f) bg_tb_trans_pane_cp05_ParamLimits

0xed84,	// (0x0005200d) popup_imed_adjust2_window_g1_ParamLimits

0xed93,	// (0x0005201c) popup_imed_adjust2_window_g2_ParamLimits

0xed93,	// (0x0005201c) popup_imed_adjust2_window_g2

0xed9f,	// (0x00052028) popup_imed_adjust2_window_g3_ParamLimits

0xed9f,	// (0x00052028) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x000529d6) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x000529d6) popup_imed_adjust2_window_g

0xedab,	// (0x00052034) popup_imed_adjust2_window_t1_ParamLimits

0xedc3,	// (0x0005204c) slider_imed_adjust_pane_ParamLimits

0xedd7,	// (0x00052060) slider_imed_adjust_pane_g1_ParamLimits

0xede7,	// (0x00052070) slider_imed_adjust_pane_g2_ParamLimits

0xedf7,	// (0x00052080) slider_imed_adjust_pane_g3_ParamLimits

0xee08,	// (0x00052091) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x000529dd) slider_imed_adjust_pane_g_ParamLimits

0x5c9a,	// (0x00048f23) aid_touch_area_cam4_ParamLimits

0x5c9a,	// (0x00048f23) aid_touch_area_cam4

0xb68f,	// (0x0004e918) battery_pane_cp01

0x5d6d,	// (0x00048ff6) main_camera4_pane_g6_ParamLimits

0x5d6d,	// (0x00048ff6) main_camera4_pane_g6

0x5d97,	// (0x00049020) main_camera4_pane_t2_ParamLimits

0x5d97,	// (0x00049020) main_camera4_pane_t2

0x0001,

0xf856,	// (0x00052adf) main_camera4_pane_t_ParamLimits

0xf856,	// (0x00052adf) main_camera4_pane_t

0x5de0,	// (0x00049069) aid_touch_area_vid4_ParamLimits

0x5de0,	// (0x00049069) aid_touch_area_vid4

0x5e37,	// (0x000490c0) main_video4_pane_g5_ParamLimits

0x5e37,	// (0x000490c0) main_video4_pane_g5

0x5e5d,	// (0x000490e6) vid4_progress_pane_ParamLimits

0x5e5d,	// (0x000490e6) vid4_progress_pane

0x6736,	// (0x000499bf) main_cset_slider_pane_g18_ParamLimits

0x6736,	// (0x000499bf) main_cset_slider_pane_g18

0x6f49,	// (0x0004a1d2) cell_cam4_burst_pane_g2_ParamLimits

0x6f49,	// (0x0004a1d2) cell_cam4_burst_pane_g2

0x0001,

0xf9ab,	// (0x00052c34) cell_cam4_burst_pane_g_ParamLimits

0xf9ab,	// (0x00052c34) cell_cam4_burst_pane_g

0xb06f,	// (0x0004e2f8) bg_cl_pane_ParamLimits

0xb06f,	// (0x0004e2f8) bg_cl_pane

0x711f,	// (0x0004a3a8) cl_header_pane_ParamLimits

0x711f,	// (0x0004a3a8) cl_header_pane

0x7133,	// (0x0004a3bc) cl_listscroll_pane_ParamLimits

0x7133,	// (0x0004a3bc) cl_listscroll_pane

0x7143,	// (0x0004a3cc) bg_cl_pane_g1

0x714b,	// (0x0004a3d4) bg_cl_pane_g2

0x7153,	// (0x0004a3dc) bg_cl_pane_g3

0x715b,	// (0x0004a3e4) bg_cl_pane_g4

0x7163,	// (0x0004a3ec) bg_cl_pane_g5

0x716b,	// (0x0004a3f4) bg_cl_pane_g6

0x7173,	// (0x0004a3fc) bg_cl_pane_g7

0x717b,	// (0x0004a404) bg_cl_pane_g8

0x7183,	// (0x0004a40c) bg_cl_pane_g9

0x0008,

0xf9e6,	// (0x00052c6f) bg_cl_pane_g

0x718b,	// (0x0004a414) aid_height_cl_leading_ParamLimits

0x718b,	// (0x0004a414) aid_height_cl_leading

0x7197,	// (0x0004a420) aid_height_cl_text_ParamLimits

0x7197,	// (0x0004a420) aid_height_cl_text

0xa8af,	// (0x0004db38) bg_cl_header_pane_ParamLimits

0xa8af,	// (0x0004db38) bg_cl_header_pane

0x71b6,	// (0x0004a43f) cl_header_pane_g1_ParamLimits

0x71b6,	// (0x0004a43f) cl_header_pane_g1

0x71cc,	// (0x0004a455) cl_header_pane_t1_ParamLimits

0x71cc,	// (0x0004a455) cl_header_pane_t1

0x71e5,	// (0x0004a46e) cl_list_pane

0x65f3,	// (0x0004987c) hc_scroll_pane_cp01

0xc9d0,	// (0x0004fc59) bg_cl_header_pane_g1

0x61a8,	// (0x00049431) bg_cl_header_pane_g2

0xc9f0,	// (0x0004fc79) bg_cl_header_pane_g3

0x61b8,	// (0x00049441) bg_cl_header_pane_g4

0x61b0,	// (0x00049439) bg_cl_header_pane_g5

0x6b66,	// (0x00049def) bg_cl_header_pane_g6

0x61d0,	// (0x00049459) bg_cl_header_pane_g7

0x61d8,	// (0x00049461) bg_cl_header_pane_g8

0x61c8,	// (0x00049451) bg_cl_header_pane_g9

0x0008,

0xf9f9,	// (0x00052c82) bg_cl_header_pane_g

0x71ee,	// (0x0004a477) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x71ee,	// (0x0004a477) hc_cl_list_double_graphic_heading_pane

0x7201,	// (0x0004a48a) hc_cl_list_single_graphic_pane_ParamLimits

0x7201,	// (0x0004a48a) hc_cl_list_single_graphic_pane

0x7219,	// (0x0004a4a2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7219,	// (0x0004a4a2) hc_cl_list_single_graphic_pane_g1

0x7225,	// (0x0004a4ae) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7225,	// (0x0004a4ae) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0c,	// (0x00052c95) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0c,	// (0x00052c95) hc_cl_list_single_graphic_pane_g

0x7239,	// (0x0004a4c2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7239,	// (0x0004a4c2) hc_cl_list_single_graphic_pane_t1

0x7219,	// (0x0004a4a2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7219,	// (0x0004a4a2) hc_cl_list_double_graphic_heading_pane_g1

0x724e,	// (0x0004a4d7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x724e,	// (0x0004a4d7) hc_cl_list_double_graphic_heading_pane_g2

0x7262,	// (0x0004a4eb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7262,	// (0x0004a4eb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa11,	// (0x00052c9a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa11,	// (0x00052c9a) hc_cl_list_double_graphic_heading_pane_g

0x7276,	// (0x0004a4ff) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7276,	// (0x0004a4ff) hc_cl_list_double_graphic_heading_pane_t1

0x728b,	// (0x0004a514) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x728b,	// (0x0004a514) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa18,	// (0x00052ca1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa18,	// (0x00052ca1) hc_cl_list_double_graphic_heading_pane_t

0xb896,	// (0x0004eb1f) vid4_progress_pane_g1

0xb8a6,	// (0x0004eb2f) vid4_progress_pane_g2

0x72a0,	// (0x0004a529) vid4_progress_pane_g3

0xb8b6,	// (0x0004eb3f) vid4_progress_pane_g4

0x0004,

0xfa1d,	// (0x00052ca6) vid4_progress_pane_g

0x72b2,	// (0x0004a53b) vid4_progress_pane_t1

0xb8d4,	// (0x0004eb5d) vid4_progress_pane_t2

0x0002,

0xfa28,	// (0x00052cb1) vid4_progress_pane_t

0x72cc,	// (0x0004a555) wait_bar_pane_cp07

0xe6cd,	// (0x00051956) blid_firmament_pane_ParamLimits

0xe710,	// (0x00051999) popup_blid_sat_info2_window_g1

0xe734,	// (0x000519bd) popup_blid_sat_info2_window_t3

0xe742,	// (0x000519cb) popup_blid_sat_info2_window_t4

0xe750,	// (0x000519d9) popup_blid_sat_info2_window_t5

0xe75e,	// (0x000519e7) popup_blid_sat_info2_window_t6

0xe76e,	// (0x000519f7) popup_blid_sat_info2_window_t7

0xe77c,	// (0x00051a05) popup_blid_sat_info2_window_t8

0xe78a,	// (0x00051a13) popup_blid_sat_info2_window_t9

0xe798,	// (0x00051a21) popup_blid_sat_info2_window_t10

0xe85f,	// (0x00051ae8) aid_firma_cardinal_ParamLimits

0xe873,	// (0x00051afc) blid_firmament_pane_t1_ParamLimits

0xe88a,	// (0x00051b13) blid_firmament_pane_t2_ParamLimits

0xe8a1,	// (0x00051b2a) blid_firmament_pane_t3_ParamLimits

0xe8b8,	// (0x00051b41) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x000528cf) blid_firmament_pane_t_ParamLimits

0xe8cf,	// (0x00051b58) blid_sat_info_pane_ParamLimits

0xa8af,	// (0x0004db38) main_cam_set_pane_ParamLimits

0x533f,	// (0x000485c8) aid_size_cell_colour_35_ParamLimits

0x535f,	// (0x000485e8) aid_size_cell_colour_112_ParamLimits

0x537f,	// (0x00048608) aid_size_cell_effect_ParamLimits

0xe2e6,	// (0x0005156f) bg_tb_trans_pane_cp02_ParamLimits

0xcc61,	// (0x0004feea) heading_imed_pane_ParamLimits

0x539f,	// (0x00048628) listscroll_imed_pane_ParamLimits

0xdb69,	// (0x00050df2) popup_call2_audio_first_window_g5_ParamLimits

0xdb69,	// (0x00050df2) popup_call2_audio_first_window_g5

0x5879,	// (0x00048b02) aid_size_touch_image3_arrow_left_ParamLimits

0x5879,	// (0x00048b02) aid_size_touch_image3_arrow_left

0x58a5,	// (0x00048b2e) aid_size_touch_image3_arrow_right_ParamLimits

0x58a5,	// (0x00048b2e) aid_size_touch_image3_arrow_right

0xb8ea,	// (0x0004eb73) vid4_progress_pane_t3

0x5544,	// (0x000487cd) main_hwr_training_symbol_option_pane_ParamLimits

0x5544,	// (0x000487cd) main_hwr_training_symbol_option_pane

0xefc9,	// (0x00052252) popup_hwr_training_preview_window_ParamLimits

0xefc9,	// (0x00052252) popup_hwr_training_preview_window

0x5564,	// (0x000487ed) hwr_training_navi_pane_g5_ParamLimits

0x5564,	// (0x000487ed) hwr_training_navi_pane_g5

0x60f0,	// (0x00049379) popup_char_count_window

0xa8af,	// (0x0004db38) bg_popup_sub_pane_cp20_ParamLimits

0x6b4e,	// (0x00049dd7) list_vitu2_match_list_pane_ParamLimits

0x6b5a,	// (0x00049de3) vitu2_page_scroll_pane_ParamLimits

0x6b5a,	// (0x00049de3) vitu2_page_scroll_pane

0x72df,	// (0x0004a568) list_single_hwr_training_symbol_option_pane_ParamLimits

0x72df,	// (0x0004a568) list_single_hwr_training_symbol_option_pane

0x72f2,	// (0x0004a57b) list_single_hwr_training_symbol_option_pane_g1

0x72fa,	// (0x0004a583) list_single_hwr_training_symbol_option_pane_t1

0x7308,	// (0x0004a591) bg_button_pane_cp023

0x7311,	// (0x0004a59a) bg_button_pane_cp024

0x7344,	// (0x0004a5cd) vitu2_page_scroll_pane_g1

0x734c,	// (0x0004a5d5) vitu2_page_scroll_pane_g2

0x0001,

0xfa2f,	// (0x00052cb8) vitu2_page_scroll_pane_g

0x7354,	// (0x0004a5dd) vitu2_page_scroll_pane_t1

0x7363,	// (0x0004a5ec) popup_char_count_window_g1

0x736c,	// (0x0004a5f5) popup_char_count_window_g2

0x7375,	// (0x0004a5fe) popup_char_count_window_g3

0x0002,

0xfa34,	// (0x00052cbd) popup_char_count_window_g

0x737e,	// (0x0004a607) popup_char_count_window_t1

0xa832,	// (0x0004dabb) main_vded2_pane

0xed70,	// (0x00051ff9) aid_size_cell_imed_line

0xed7a,	// (0x00052003) grid_imed_line_width_pane

0xb749,	// (0x0004e9d2) vid4_indicators_pane_g4

0x738c,	// (0x0004a615) cell_imed_line_width_pane_ParamLimits

0x738c,	// (0x0004a615) cell_imed_line_width_pane

0x73a2,	// (0x0004a62b) cell_imed_line_width_pane_g1

0x73ab,	// (0x0004a634) cell_imed_line_width_pane_g2

0x0001,

0xfa3b,	// (0x00052cc4) cell_imed_line_width_pane_g

0x73b3,	// (0x0004a63c) main_vded2_pane_g1_ParamLimits

0x73b3,	// (0x0004a63c) main_vded2_pane_g1

0x73ce,	// (0x0004a657) main_vded2_pane_g2_ParamLimits

0x73ce,	// (0x0004a657) main_vded2_pane_g2

0x0001,

0xfa40,	// (0x00052cc9) main_vded2_pane_g_ParamLimits

0xfa40,	// (0x00052cc9) main_vded2_pane_g

0x73e0,	// (0x0004a669) vded2_slider_pane_ParamLimits

0x73e0,	// (0x0004a669) vded2_slider_pane

0x73f0,	// (0x0004a679) aid_size_touch_vded2_end

0x73fa,	// (0x0004a683) aid_size_touch_vded2_playhead

0x7404,	// (0x0004a68d) aid_size_touch_vded2_start

0x740c,	// (0x0004a695) vded2_slider_bg_pane

0x7415,	// (0x0004a69e) vded2_slider_pane_g1

0x741e,	// (0x0004a6a7) vded2_slider_pane_g2

0x7426,	// (0x0004a6af) vded2_slider_pane_g3

0x0002,

0xfa45,	// (0x00052cce) vded2_slider_pane_g

0x7431,	// (0x0004a6ba) vded2_slider_bg_pane_g1

0x743a,	// (0x0004a6c3) vded2_slider_bg_pane_g2

0x7443,	// (0x0004a6cc) vded2_slider_bg_pane_g3

0x0002,

0xfa4c,	// (0x00052cd5) vded2_slider_bg_pane_g

0x3787,	// (0x00046a10) aid_postcard_touch_down_pane_ParamLimits

0x3787,	// (0x00046a10) aid_postcard_touch_down_pane

0x379f,	// (0x00046a28) aid_postcard_touch_up_pane_ParamLimits

0x379f,	// (0x00046a28) aid_postcard_touch_up_pane

0xa832,	// (0x0004dabb) main_blid2_pane

0xb2d0,	// (0x0004e559) popup_blid2_search_window

0xa832,	// (0x0004dabb) blid2_gps_pane

0xa832,	// (0x0004dabb) blid2_navig_pane

0xa832,	// (0x0004dabb) blid2_search_pane

0xa832,	// (0x0004dabb) blid2_tripm_pane

0x744c,	// (0x0004a6d5) blid2_search_pane_g1_ParamLimits

0x744c,	// (0x0004a6d5) blid2_search_pane_g1

0x745f,	// (0x0004a6e8) blid2_search_pane_t1_ParamLimits

0x745f,	// (0x0004a6e8) blid2_search_pane_t1

0x7471,	// (0x0004a6fa) aid_size_cell_blid2_gps_ParamLimits

0x7471,	// (0x0004a6fa) aid_size_cell_blid2_gps

0x7489,	// (0x0004a712) blid2_gps_pane_g1_ParamLimits

0x7489,	// (0x0004a712) blid2_gps_pane_g1

0x749d,	// (0x0004a726) grid_blid2_satellite_pane_ParamLimits

0x749d,	// (0x0004a726) grid_blid2_satellite_pane

0x74b5,	// (0x0004a73e) blid2_navig_pane_g1_ParamLimits

0x74b5,	// (0x0004a73e) blid2_navig_pane_g1

0x74c1,	// (0x0004a74a) blid2_navig_pane_t1_ParamLimits

0x74c1,	// (0x0004a74a) blid2_navig_pane_t1

0x74dc,	// (0x0004a765) blid2_navig_pane_t2_ParamLimits

0x74dc,	// (0x0004a765) blid2_navig_pane_t2

0x0001,

0xfa53,	// (0x00052cdc) blid2_navig_pane_t_ParamLimits

0xfa53,	// (0x00052cdc) blid2_navig_pane_t

0x74f7,	// (0x0004a780) blid2_navig_ring_pane_ParamLimits

0x74f7,	// (0x0004a780) blid2_navig_ring_pane

0x7512,	// (0x0004a79b) blid2_speed_pane_ParamLimits

0x7512,	// (0x0004a79b) blid2_speed_pane

0x751e,	// (0x0004a7a7) blid2_tripm_pane_g1_ParamLimits

0x751e,	// (0x0004a7a7) blid2_tripm_pane_g1

0x7539,	// (0x0004a7c2) blid2_tripm_pane_g2_ParamLimits

0x7539,	// (0x0004a7c2) blid2_tripm_pane_g2

0x754d,	// (0x0004a7d6) blid2_tripm_pane_g3_ParamLimits

0x754d,	// (0x0004a7d6) blid2_tripm_pane_g3

0x7561,	// (0x0004a7ea) blid2_tripm_pane_g4_ParamLimits

0x7561,	// (0x0004a7ea) blid2_tripm_pane_g4

0x7575,	// (0x0004a7fe) blid2_tripm_pane_g5_ParamLimits

0x7575,	// (0x0004a7fe) blid2_tripm_pane_g5

0x0005,

0xfa58,	// (0x00052ce1) blid2_tripm_pane_g_ParamLimits

0xfa58,	// (0x00052ce1) blid2_tripm_pane_g

0x759b,	// (0x0004a824) blid2_tripm_pane_t1_ParamLimits

0x759b,	// (0x0004a824) blid2_tripm_pane_t1

0x75b4,	// (0x0004a83d) blid2_tripm_pane_t2_ParamLimits

0x75b4,	// (0x0004a83d) blid2_tripm_pane_t2

0x75cd,	// (0x0004a856) blid2_tripm_pane_t3_ParamLimits

0x75cd,	// (0x0004a856) blid2_tripm_pane_t3

0x0003,

0xfa65,	// (0x00052cee) blid2_tripm_pane_t_ParamLimits

0xfa65,	// (0x00052cee) blid2_tripm_pane_t

0x7614,	// (0x0004a89d) cell_blid2_satellite_pane_ParamLimits

0x7614,	// (0x0004a89d) cell_blid2_satellite_pane

0x7630,	// (0x0004a8b9) cell_blid2_satellite_pane_g1

0x7639,	// (0x0004a8c2) cell_blid2_satellite_pane_t1

0xc7db,	// (0x0004fa64) blid2_speed_pane_g1

0x7647,	// (0x0004a8d0) blid2_speed_pane_t1

0x7655,	// (0x0004a8de) blid2_speed_pane_t2

0x0001,

0xfa6e,	// (0x00052cf7) blid2_speed_pane_t

0xc7db,	// (0x0004fa64) blid2_navig_ring_pane_g1

0x7663,	// (0x0004a8ec) blid2_navig_ring_pane_g2

0x766b,	// (0x0004a8f4) blid2_navig_ring_pane_g3

0x7673,	// (0x0004a8fc) blid2_navig_ring_pane_g4

0x767b,	// (0x0004a904) blid2_navig_ring_pane_g5

0x0004,

0xfa73,	// (0x00052cfc) blid2_navig_ring_pane_g

0xa832,	// (0x0004dabb) bg_popup_window_pane_cp011

0x7683,	// (0x0004a90c) popup_blid2_search_window_g1

0x768b,	// (0x0004a914) popup_blid2_search_window_t1

0x7699,	// (0x0004a922) popup_blid2_search_window_t2

0x0001,

0xfa7e,	// (0x00052d07) popup_blid2_search_window_t

0xc8df,	// (0x0004fb68) main_browser_pane_g1

0xb06f,	// (0x0004e2f8) main_browser_pane_ParamLimits

0xa8af,	// (0x0004db38) bg_button_pane_cp011_ParamLimits

0x618a,	// (0x00049413) cell_vitu2_function_pane_g1_ParamLimits

0xe2e6,	// (0x0005156f) bg_popup_sub_pane_cp22_ParamLimits

0x0a62,	// (0x00043ceb) input_focus_pane_cp08_ParamLimits

0x6d15,	// (0x00049f9e) popup_vitu2_query_button_pane_ParamLimits

0x6d15,	// (0x00049f9e) popup_vitu2_query_button_pane

0x0a7e,	// (0x00043d07) popup_vitu2_query_input_button_pane

0x6d24,	// (0x00049fad) popup_vitu2_query_window_g1_ParamLimits

0x0a88,	// (0x00043d11) popup_vitu2_query_window_g2_ParamLimits

0xf97f,	// (0x00052c08) popup_vitu2_query_window_g_ParamLimits

0xa832,	// (0x0004dabb) bg_button_pane_cp026

0x76a7,	// (0x0004a930) popup_vitu2_query_input_button_pane_g1

0xa832,	// (0x0004dabb) bg_button_pane_cp025

0x76af,	// (0x0004a938) popup_vitu2_query_button_pane_t1

0x478e,	// (0x00047a17) main_mp3_pane_t6

0x479c,	// (0x00047a25) popup_slider_window_cp01

0xb6ad,	// (0x0004e936) cam4_battery_pane

0xb702,	// (0x0004e98b) cam4_battery_pane_cp02

0xb88e,	// (0x0004eb17) cam4_battery_pane_cp01

0xb88e,	// (0x0004eb17) cam4_battery_pane_cp03

0xc7db,	// (0x0004fa64) cam4_battery_pane_g1

0xf035,	// (0x000522be) cam4_battery_pane_g2

0x0001,

0xfa83,	// (0x00052d0c) cam4_battery_pane_g

0xe7a6,	// (0x00051a2f) popup_blid_sat_info2_window_t11

0x3360,	// (0x000465e9) aid_size_touch_mv_arrow_left_ParamLimits

0x3389,	// (0x00046612) aid_size_touch_mv_arrow_right_ParamLimits

0xd091,	// (0x0005031a) navi_pane_g1_ParamLimits

0x33c8,	// (0x00046651) navi_pane_g2_ParamLimits

0x33f6,	// (0x0004667f) navi_pane_g3_ParamLimits

0xf35a,	// (0x000525e3) navi_pane_g_ParamLimits

0x3450,	// (0x000466d9) navi_pane_mv_t1_ParamLimits

0x53ab,	// (0x00048634) grid_imed_effect_pane_ParamLimits

0x1f5c,	// (0x000451e5) aid_placing_vt_slider_lsc

0xc82a,	// (0x0004fab3) aid_placing_vt_slider_prt

0xa8af,	// (0x0004db38) bg_tb_trans_pane_cp01_ParamLimits

0xea1a,	// (0x00051ca3) popup_image_details_window_g1_ParamLimits

0xea2d,	// (0x00051cb6) popup_image_details_window_g2_ParamLimits

0xea42,	// (0x00051ccb) popup_image_details_window_g3_ParamLimits

0xea42,	// (0x00051ccb) popup_image_details_window_g3

0xf686,	// (0x0005290f) popup_image_details_window_g_ParamLimits

0xea56,	// (0x00051cdf) popup_image_details_window_t1_ParamLimits

0xea68,	// (0x00051cf1) popup_image_details_window_t2_ParamLimits

0xea81,	// (0x00051d0a) popup_image_details_window_t3_ParamLimits

0xea95,	// (0x00051d1e) popup_image_details_window_t4_ParamLimits

0xeab0,	// (0x00051d39) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x00052916) popup_image_details_window_t_ParamLimits

0x71a3,	// (0x0004a42c) cl_header_name_pane_ParamLimits

0x71a3,	// (0x0004a42c) cl_header_name_pane

0x76bd,	// (0x0004a946) cl_header_name_pane_t1_ParamLimits

0x76bd,	// (0x0004a946) cl_header_name_pane_t1

0x76de,	// (0x0004a967) cl_header_name_pane_t2_ParamLimits

0x76de,	// (0x0004a967) cl_header_name_pane_t2

0x7720,	// (0x0004a9a9) cl_header_name_pane_t3_ParamLimits

0x7720,	// (0x0004a9a9) cl_header_name_pane_t3

0x0002,

0xfa88,	// (0x00052d11) cl_header_name_pane_t_ParamLimits

0xfa88,	// (0x00052d11) cl_header_name_pane_t

0x3421,	// (0x000466aa) navi_pane_mv_g2_ParamLimits

0x60d8,	// (0x00049361) field_vitu2_entry_pane_g1_ParamLimits

0x60e4,	// (0x0004936d) field_vitu2_entry_pane_g2_ParamLimits

0xe2c4,	// (0x0005154d) field_vitu2_entry_pane_g3_ParamLimits

0xe2c4,	// (0x0005154d) field_vitu2_entry_pane_g3

0xf888,	// (0x00052b11) field_vitu2_entry_pane_g_ParamLimits

0x6106,	// (0x0004938f) cell_vitu2_itu_pane_g1_ParamLimits

0x611e,	// (0x000493a7) cell_vitu2_itu_pane_g2_ParamLimits

0x611e,	// (0x000493a7) cell_vitu2_itu_pane_g2

0x0001,

0xf894,	// (0x00052b1d) cell_vitu2_itu_pane_g_ParamLimits

0xf894,	// (0x00052b1d) cell_vitu2_itu_pane_g

0xa8af,	// (0x0004db38) bg_vkb2_func_pane_cp05_ParamLimits

0xa8af,	// (0x0004db38) bg_vkb2_func_pane_cp05

0xa8af,	// (0x0004db38) bg_vkb2_func_pane_cp03

0xa8af,	// (0x0004db38) bg_vkb2_func_pane_cp04

0xa8af,	// (0x0004db38) bg_vkb2_func_pane_cp10_ParamLimits

0xa8af,	// (0x0004db38) bg_vkb2_func_pane_cp10

0x0bbb,	// (0x00043e44) bg_vkb2_func_pane_cp08

0x7107,	// (0x0004a390) bg_vkb2_func_pane_cp06

0x7113,	// (0x0004a39c) bg_vkb2_func_pane_cp07

0x731a,	// (0x0004a5a3) bg_vkb2_func_pane_cp11_ParamLimits

0x731a,	// (0x0004a5a3) bg_vkb2_func_pane_cp11

0x732f,	// (0x0004a5b8) bg_vkb2_func_pane_cp12_ParamLimits

0x732f,	// (0x0004a5b8) bg_vkb2_func_pane_cp12

0xa832,	// (0x0004dabb) bg_vkb2_func_pane_cp09

0x61a8,	// (0x00049431) bg_vkb2_func_pane_g1

0xc9f0,	// (0x0004fc79) bg_vkb2_func_pane_g2

0x61b0,	// (0x00049439) bg_vkb2_func_pane_g3

0x61b8,	// (0x00049441) bg_vkb2_func_pane_g4

0x6b66,	// (0x00049def) bg_vkb2_func_pane_g5

0x61d0,	// (0x00049459) bg_vkb2_func_pane_g6

0x61d8,	// (0x00049461) bg_vkb2_func_pane_g7

0x61c8,	// (0x00049451) bg_vkb2_func_pane_g8

0xc9d0,	// (0x0004fc59) bg_vkb2_func_pane_g9

0x0008,

0xfa8f,	// (0x00052d18) bg_vkb2_func_pane_g

0x7589,	// (0x0004a812) blid2_tripm_pane_g6_ParamLimits

0x7589,	// (0x0004a812) blid2_tripm_pane_g6

0x56f6,	// (0x0004897f) mp4_progress_pane_g1

0x7600,	// (0x0004a889) blid2_tripm_values_pane_ParamLimits

0x7600,	// (0x0004a889) blid2_tripm_values_pane

0x7751,	// (0x0004a9da) blid2_tripm_values_pane_t1

0x775f,	// (0x0004a9e8) blid2_tripm_values_pane_t2

0x776d,	// (0x0004a9f6) blid2_tripm_values_pane_t3

0x777b,	// (0x0004aa04) blid2_tripm_values_pane_t4

0x7789,	// (0x0004aa12) blid2_tripm_values_pane_t5

0x7797,	// (0x0004aa20) blid2_tripm_values_pane_t6

0x77a5,	// (0x0004aa2e) blid2_tripm_values_pane_t7

0x77b3,	// (0x0004aa3c) blid2_tripm_values_pane_t8

0x77c1,	// (0x0004aa4a) blid2_tripm_values_pane_t9

0x0008,

0xfaa2,	// (0x00052d2b) blid2_tripm_values_pane_t

0x1f99,	// (0x00045222) call_video_pane_t1_ParamLimits

0x1fb3,	// (0x0004523c) call_video_pane_t2_ParamLimits

0xf208,	// (0x00052491) call_video_pane_t_ParamLimits

0x0807,	// (0x00043a90) msg_header_pane_g1_ParamLimits

0xd291,	// (0x0005051a) msg_header_pane_g2_ParamLimits

0xd291,	// (0x0005051a) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x00052686) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x00052686) msg_header_pane_g

0xb06f,	// (0x0004e2f8) main_clock2_pane_ParamLimits

0x50a8,	// (0x00048331) grid_clock2_toolbar_pane_ParamLimits

0x50a8,	// (0x00048331) grid_clock2_toolbar_pane

0x50a8,	// (0x00048331) listscroll_clock2_pane_ParamLimits

0x50a8,	// (0x00048331) listscroll_clock2_pane

0x5187,	// (0x00048410) main_clock2_pane_t3_ParamLimits

0x5187,	// (0x00048410) main_clock2_pane_t3

0x51aa,	// (0x00048433) main_clock2_pane_t4_ParamLimits

0x51aa,	// (0x00048433) main_clock2_pane_t4

0x77cf,	// (0x0004aa58) cell_clock2_toolbar_pane

0x77d7,	// (0x0004aa60) cell_clock2_toolbar_pane_cp01

0x77d7,	// (0x0004aa60) cell_clock2_toolbar_pane_cp02

0x77df,	// (0x0004aa68) cell_clock2_toolbar_pane_cp03

0x77e7,	// (0x0004aa70) list_clock2_pane

0xcff7,	// (0x00050280) scroll_pane_cp10

0x77ef,	// (0x0004aa78) list_single_clock2_pane_ParamLimits

0x77ef,	// (0x0004aa78) list_single_clock2_pane

0xc7a5,	// (0x0004fa2e) list_highlight_pane_cp08

0x77fc,	// (0x0004aa85) list_single_clock2_pane_t1

0x780a,	// (0x0004aa93) list_single_clock2_pane_t2

0x0001,

0xfab5,	// (0x00052d3e) list_single_clock2_pane_t

0xa832,	// (0x0004dabb) bg_button_pane_cp10

0x7818,	// (0x0004aaa1) cell_clock2_toolbar_pane_g1

0x3713,	// (0x0004699c) aid_main_viewer_pane_g1_ParamLimits

0x3713,	// (0x0004699c) aid_main_viewer_pane_g1

0x3721,	// (0x000469aa) aid_main_viewer_pane_g2_ParamLimits

0x3721,	// (0x000469aa) aid_main_viewer_pane_g2

0x372f,	// (0x000469b8) aid_main_viewer_pane_g3_ParamLimits

0x372f,	// (0x000469b8) aid_main_viewer_pane_g3

0x373e,	// (0x000469c7) aid_main_viewer_pane_g4_ParamLimits

0x373e,	// (0x000469c7) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x00052697) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x00052697) aid_main_viewer_pane_g

0x40dc,	// (0x00047365) main_calc_pane_ParamLimits

0x40f0,	// (0x00047379) main_dialer2_pane_ParamLimits

0xa832,	// (0x0004dabb) main_cam6_pane

0xa832,	// (0x0004dabb) main_vid6_pane

0x50b4,	// (0x0004833d) listscroll_gen_pane_cp06_ParamLimits

0x50b4,	// (0x0004833d) listscroll_gen_pane_cp06

0x51cd,	// (0x00048456) main_clock2_pane_t5_ParamLimits

0x51cd,	// (0x00048456) main_clock2_pane_t5

0x522b,	// (0x000484b4) aid_call2_pane_cp10_ParamLimits

0x523d,	// (0x000484c6) aid_call_pane_cp10_ParamLimits

0xd066,	// (0x000502ef) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd066,	// (0x000502ef) popup_clock_analogue_window_cp10_g2_ParamLimits

0x524f,	// (0x000484d8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x524f,	// (0x000484d8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd066,	// (0x000502ef) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x000529cb) popup_clock_analogue_window_cp10_g_ParamLimits

0x5265,	// (0x000484ee) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5826,	// (0x00048aaf) cell_dialer2_keypad_pane_g2_ParamLimits

0x5826,	// (0x00048aaf) cell_dialer2_keypad_pane_g2

0x0001,

0xf827,	// (0x00052ab0) cell_dialer2_keypad_pane_g_ParamLimits

0xf827,	// (0x00052ab0) cell_dialer2_keypad_pane_g

0x5842,	// (0x00048acb) cell_dialer2_keypad_pane_t1

0x65cd,	// (0x00049856) main_cset_text2_pane_ParamLimits

0x65cd,	// (0x00049856) main_cset_text2_pane

0x70d3,	// (0x0004a35c) area_vitu2_query_pane_g1_ParamLimits

0x0b67,	// (0x00043df0) area_vitu2_query_pane_g2_ParamLimits

0xf9d2,	// (0x00052c5b) area_vitu2_query_pane_g_ParamLimits

0xb86a,	// (0x0004eaf3) area_vitu2_query_pane_t7_ParamLimits

0xb86a,	// (0x0004eaf3) area_vitu2_query_pane_t7

0x7107,	// (0x0004a390) bg_button_pane_cp018_ParamLimits

0x7113,	// (0x0004a39c) bg_button_pane_cp021_ParamLimits

0x0ba8,	// (0x00043e31) bg_button_pane_cp022_ParamLimits

0x0bbb,	// (0x00043e44) bg_vkb2_func_pane_cp08_ParamLimits

0x7107,	// (0x0004a390) bg_vkb2_func_pane_cp06_ParamLimits

0x7113,	// (0x0004a39c) bg_vkb2_func_pane_cp07_ParamLimits

0x0bcf,	// (0x00043e58) input_focus_pane_cp09_ParamLimits

0xb921,	// (0x0004ebaa) cam6_autofocus_pane_ParamLimits

0xb921,	// (0x0004ebaa) cam6_autofocus_pane

0x7820,	// (0x0004aaa9) cam6_image_uncrop_pane_ParamLimits

0x7820,	// (0x0004aaa9) cam6_image_uncrop_pane

0x782f,	// (0x0004aab8) cam6_indi_pane_ParamLimits

0x782f,	// (0x0004aab8) cam6_indi_pane

0x7845,	// (0x0004aace) cam6_mode_pane_ParamLimits

0x7845,	// (0x0004aace) cam6_mode_pane

0x7857,	// (0x0004aae0) cam6_timer_pane_ParamLimits

0x7857,	// (0x0004aae0) cam6_timer_pane

0x7863,	// (0x0004aaec) cam6_zoom_pane_ParamLimits

0x7863,	// (0x0004aaec) cam6_zoom_pane

0x7871,	// (0x0004aafa) cam6_mode_pane_g1_ParamLimits

0x7871,	// (0x0004aafa) cam6_mode_pane_g1

0x7881,	// (0x0004ab0a) cam6_mode_pane_g2_ParamLimits

0x7881,	// (0x0004ab0a) cam6_mode_pane_g2

0x7891,	// (0x0004ab1a) cam6_mode_pane_g3_ParamLimits

0x7891,	// (0x0004ab1a) cam6_mode_pane_g3

0x78a1,	// (0x0004ab2a) cam6_mode_pane_g4_ParamLimits

0x78a1,	// (0x0004ab2a) cam6_mode_pane_g4

0x0003,

0xfaba,	// (0x00052d43) cam6_mode_pane_g_ParamLimits

0xfaba,	// (0x00052d43) cam6_mode_pane_g

0xe580,	// (0x00051809) bg_tb_trans_pane_cp08_ParamLimits

0xe580,	// (0x00051809) bg_tb_trans_pane_cp08

0x78b1,	// (0x0004ab3a) cam6_battery_pane_ParamLimits

0x78b1,	// (0x0004ab3a) cam6_battery_pane

0x78c7,	// (0x0004ab50) cam6_indi_pane_g1_ParamLimits

0x78c7,	// (0x0004ab50) cam6_indi_pane_g1

0x78d9,	// (0x0004ab62) cam6_indi_pane_g2_ParamLimits

0x78d9,	// (0x0004ab62) cam6_indi_pane_g2

0x78eb,	// (0x0004ab74) cam6_indi_pane_g3_ParamLimits

0x78eb,	// (0x0004ab74) cam6_indi_pane_g3

0x0002,

0xfac3,	// (0x00052d4c) cam6_indi_pane_g_ParamLimits

0xfac3,	// (0x00052d4c) cam6_indi_pane_g

0x78fd,	// (0x0004ab86) cam6_indi_pane_t1_ParamLimits

0x78fd,	// (0x0004ab86) cam6_indi_pane_t1

0x5ea2,	// (0x0004912b) cam6_autofocus_pane_g1

0x5eaa,	// (0x00049133) cam6_autofocus_pane_g2

0x5eb2,	// (0x0004913b) cam6_autofocus_pane_g3

0x5eba,	// (0x00049143) cam6_autofocus_pane_g4

0x0003,

0xfaca,	// (0x00052d53) cam6_autofocus_pane_g

0x7923,	// (0x0004abac) cam6_timer_pane_g1

0x792b,	// (0x0004abb4) cam6_timer_pane_t1

0x7939,	// (0x0004abc2) cam6_zoom_cont_pane

0x7941,	// (0x0004abca) cam6_zoom_pane_g1

0x7949,	// (0x0004abd2) cam6_zoom_pane_g2

0x7951,	// (0x0004abda) cam6_zoom_pane_g3

0x0002,

0xfad3,	// (0x00052d5c) cam6_zoom_pane_g

0xc7db,	// (0x0004fa64) cam6_battery_pane_g1

0xc7db,	// (0x0004fa64) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x00052647) cam6_battery_pane_g

0x7959,	// (0x0004abe2) cam6_zoom_cont_pane_g1

0x7962,	// (0x0004abeb) cam6_zoom_cont_pane_g2

0x796b,	// (0x0004abf4) cam6_zoom_cont_pane_g3

0x0002,

0xfada,	// (0x00052d63) cam6_zoom_cont_pane_g

0x7988,	// (0x0004ac11) cam6_mode_pane_cp_ParamLimits

0x7988,	// (0x0004ac11) cam6_mode_pane_cp

0x7863,	// (0x0004aaec) cam6_zoom_pane_cp_ParamLimits

0x7863,	// (0x0004aaec) cam6_zoom_pane_cp

0x799a,	// (0x0004ac23) vid6_image_uncrop_cif_pane_ParamLimits

0x799a,	// (0x0004ac23) vid6_image_uncrop_cif_pane

0x79aa,	// (0x0004ac33) vid6_image_uncrop_nhd_pane_ParamLimits

0x79aa,	// (0x0004ac33) vid6_image_uncrop_nhd_pane

0x7820,	// (0x0004aaa9) vid6_image_uncrop_vga_pane_ParamLimits

0x7820,	// (0x0004aaa9) vid6_image_uncrop_vga_pane

0x79c9,	// (0x0004ac52) vid6_image_uncrop_wvga_pane_ParamLimits

0x79c9,	// (0x0004ac52) vid6_image_uncrop_wvga_pane

0x79d8,	// (0x0004ac61) vid6_indi_pane_ParamLimits

0x79d8,	// (0x0004ac61) vid6_indi_pane

0xe580,	// (0x00051809) bg_tb_trans_pane_cp09_ParamLimits

0xe580,	// (0x00051809) bg_tb_trans_pane_cp09

0x79f0,	// (0x0004ac79) cam6_battery_pane_cp_ParamLimits

0x79f0,	// (0x0004ac79) cam6_battery_pane_cp

0x79fc,	// (0x0004ac85) vid6_indi_pane_g1_ParamLimits

0x79fc,	// (0x0004ac85) vid6_indi_pane_g1

0x7a0e,	// (0x0004ac97) vid6_indi_pane_g2_ParamLimits

0x7a0e,	// (0x0004ac97) vid6_indi_pane_g2

0x7a20,	// (0x0004aca9) vid6_indi_pane_g3_ParamLimits

0x7a20,	// (0x0004aca9) vid6_indi_pane_g3

0x7a37,	// (0x0004acc0) vid6_indi_pane_g4_ParamLimits

0x7a37,	// (0x0004acc0) vid6_indi_pane_g4

0x7a4e,	// (0x0004acd7) vid6_indi_pane_g5_ParamLimits

0x7a4e,	// (0x0004acd7) vid6_indi_pane_g5

0x0004,

0xfae1,	// (0x00052d6a) vid6_indi_pane_g_ParamLimits

0xfae1,	// (0x00052d6a) vid6_indi_pane_g

0x7a68,	// (0x0004acf1) vid6_indi_pane_t1_ParamLimits

0x7a68,	// (0x0004acf1) vid6_indi_pane_t1

0x7a7e,	// (0x0004ad07) vid6_indi_pane_t2_ParamLimits

0x7a7e,	// (0x0004ad07) vid6_indi_pane_t2

0x7aa6,	// (0x0004ad2f) vid6_indi_pane_t3_ParamLimits

0x7aa6,	// (0x0004ad2f) vid6_indi_pane_t3

0x7ace,	// (0x0004ad57) vid6_indi_pane_t4_ParamLimits

0x7ace,	// (0x0004ad57) vid6_indi_pane_t4

0x0003,

0xfaec,	// (0x00052d75) vid6_indi_pane_t_ParamLimits

0xfaec,	// (0x00052d75) vid6_indi_pane_t

0x7af2,	// (0x0004ad7b) wait_bar_pane_cp08

0x7b01,	// (0x0004ad8a) main_cset_text2_pane_t1_ParamLimits

0x7b01,	// (0x0004ad8a) main_cset_text2_pane_t1

0x7973,	// (0x0004abfc) listscroll_gen_pane_cp06_t1_ParamLimits

0x7973,	// (0x0004abfc) listscroll_gen_pane_cp06_t1

0xa832,	// (0x0004dabb) main_cam6_set_pane

0xafdb,	// (0x0004e264) bg_tb_trans_pane_cp06_ParamLimits

0xb6b5,	// (0x0004e93e) cam4_indicators_pane_g1_ParamLimits

0xb6c6,	// (0x0004e94f) cam4_indicators_pane_g2_ParamLimits

0xf864,	// (0x00052aed) cam4_indicators_pane_g_ParamLimits

0xb6de,	// (0x0004e967) cam4_indicators_pane_t1_ParamLimits

0xa8af,	// (0x0004db38) bg_tb_trans_pane_cp07_ParamLimits

0xb70c,	// (0x0004e995) vid4_indicators_pane_g1_ParamLimits

0xb722,	// (0x0004e9ab) vid4_indicators_pane_g2_ParamLimits

0xb736,	// (0x0004e9bf) vid4_indicators_pane_g3_ParamLimits

0xb749,	// (0x0004e9d2) vid4_indicators_pane_g4_ParamLimits

0xf876,	// (0x00052aff) vid4_indicators_pane_g_ParamLimits

0xb767,	// (0x0004e9f0) vid4_indicators_pane_t1_ParamLimits

0xb896,	// (0x0004eb1f) vid4_progress_pane_g1_ParamLimits

0xb8a6,	// (0x0004eb2f) vid4_progress_pane_g2_ParamLimits

0x72a0,	// (0x0004a529) vid4_progress_pane_g3_ParamLimits

0xb8b6,	// (0x0004eb3f) vid4_progress_pane_g4_ParamLimits

0xfa1d,	// (0x00052ca6) vid4_progress_pane_g_ParamLimits

0x72b2,	// (0x0004a53b) vid4_progress_pane_t1_ParamLimits

0xb8d4,	// (0x0004eb5d) vid4_progress_pane_t2_ParamLimits

0xb8ea,	// (0x0004eb73) vid4_progress_pane_t3_ParamLimits

0xfa28,	// (0x00052cb1) vid4_progress_pane_t_ParamLimits

0x72cc,	// (0x0004a555) wait_bar_pane_cp07_ParamLimits

0x7b22,	// (0x0004adab) main_cam6_set_pane_g2_ParamLimits

0x7b22,	// (0x0004adab) main_cam6_set_pane_g2

0x7b48,	// (0x0004add1) main_cset6_listscroll_pane_ParamLimits

0x7b48,	// (0x0004add1) main_cset6_listscroll_pane

0x7b66,	// (0x0004adef) main_cset6_slider_pane_ParamLimits

0x7b66,	// (0x0004adef) main_cset6_slider_pane

0x7b7c,	// (0x0004ae05) main_cset6_text2_pane_ParamLimits

0x7b7c,	// (0x0004ae05) main_cset6_text2_pane

0x7b8a,	// (0x0004ae13) main_cset6_text_pane

0x7b92,	// (0x0004ae1b) main_cset_list_pane_copy1_ParamLimits

0x7b92,	// (0x0004ae1b) main_cset_list_pane_copy1

0x7ba2,	// (0x0004ae2b) scroll_pane_cp028_copy1

0x7bab,	// (0x0004ae34) cset_list_set_pane_copy1

0x7bbf,	// (0x0004ae48) aid_position_infowindow_above_copy1

0x7bc7,	// (0x0004ae50) aid_position_infowindow_below_copy1

0x0bf4,	// (0x00043e7d) cset_list_set_pane_g1_copy1

0x0bfc,	// (0x00043e85) cset_list_set_pane_g3_copy1_ParamLimits

0x0bfc,	// (0x00043e85) cset_list_set_pane_g3_copy1

0x0c0b,	// (0x00043e94) cset_list_set_pane_t1_copy1_ParamLimits

0x0c0b,	// (0x00043e94) cset_list_set_pane_t1_copy1

0xa8af,	// (0x0004db38) list_highlight_pane_cp021_copy1_ParamLimits

0xa8af,	// (0x0004db38) list_highlight_pane_cp021_copy1

0x7bcf,	// (0x0004ae58) cset6_slider_pane_ParamLimits

0x7bcf,	// (0x0004ae58) cset6_slider_pane

0x7bfb,	// (0x0004ae84) main_cset6_slider_pane_g1_ParamLimits

0x7bfb,	// (0x0004ae84) main_cset6_slider_pane_g1

0x7c23,	// (0x0004aeac) main_cset6_slider_pane_g2_ParamLimits

0x7c23,	// (0x0004aeac) main_cset6_slider_pane_g2

0x7c4b,	// (0x0004aed4) main_cset6_slider_pane_g3_ParamLimits

0x7c4b,	// (0x0004aed4) main_cset6_slider_pane_g3

0x7c57,	// (0x0004aee0) main_cset6_slider_pane_g4_ParamLimits

0x7c57,	// (0x0004aee0) main_cset6_slider_pane_g4

0x7c63,	// (0x0004aeec) main_cset6_slider_pane_g5_ParamLimits

0x7c63,	// (0x0004aeec) main_cset6_slider_pane_g5

0x66a2,	// (0x0004992b) main_cset6_slider_pane_g7_ParamLimits

0x66a2,	// (0x0004992b) main_cset6_slider_pane_g7

0x66ae,	// (0x00049937) main_cset6_slider_pane_g8_ParamLimits

0x66ae,	// (0x00049937) main_cset6_slider_pane_g8

0x66ba,	// (0x00049943) main_cset6_slider_pane_g9_ParamLimits

0x66ba,	// (0x00049943) main_cset6_slider_pane_g9

0x66c6,	// (0x0004994f) main_cset6_slider_pane_g10_ParamLimits

0x66c6,	// (0x0004994f) main_cset6_slider_pane_g10

0x66d2,	// (0x0004995b) main_cset6_slider_pane_g11_ParamLimits

0x66d2,	// (0x0004995b) main_cset6_slider_pane_g11

0x66de,	// (0x00049967) main_cset6_slider_pane_g12_ParamLimits

0x66de,	// (0x00049967) main_cset6_slider_pane_g12

0x66ea,	// (0x00049973) main_cset6_slider_pane_g13_ParamLimits

0x66ea,	// (0x00049973) main_cset6_slider_pane_g13

0x66f6,	// (0x0004997f) main_cset6_slider_pane_g14_ParamLimits

0x66f6,	// (0x0004997f) main_cset6_slider_pane_g14

0x7c71,	// (0x0004aefa) main_cset6_slider_pane_g15_ParamLimits

0x7c71,	// (0x0004aefa) main_cset6_slider_pane_g15

0x671a,	// (0x000499a3) main_cset6_slider_pane_g16_ParamLimits

0x671a,	// (0x000499a3) main_cset6_slider_pane_g16

0x6728,	// (0x000499b1) main_cset6_slider_pane_g17_ParamLimits

0x6728,	// (0x000499b1) main_cset6_slider_pane_g17

0x0011,

0xfaf5,	// (0x00052d7e) main_cset6_slider_pane_g_ParamLimits

0xfaf5,	// (0x00052d7e) main_cset6_slider_pane_g

0x7ca1,	// (0x0004af2a) main_cset6_slider_pane_t1_ParamLimits

0x7ca1,	// (0x0004af2a) main_cset6_slider_pane_t1

0x7ce2,	// (0x0004af6b) main_cset6_slider_pane_t2_ParamLimits

0x7ce2,	// (0x0004af6b) main_cset6_slider_pane_t2

0x7d0d,	// (0x0004af96) main_cset6_slider_pane_t3_ParamLimits

0x7d0d,	// (0x0004af96) main_cset6_slider_pane_t3

0x7d38,	// (0x0004afc1) main_cset6_slider_pane_t4_ParamLimits

0x7d38,	// (0x0004afc1) main_cset6_slider_pane_t4

0x7d65,	// (0x0004afee) main_cset6_slider_pane_t5_ParamLimits

0x7d65,	// (0x0004afee) main_cset6_slider_pane_t5

0x7d92,	// (0x0004b01b) main_cset6_slider_pane_t7_ParamLimits

0x7d92,	// (0x0004b01b) main_cset6_slider_pane_t7

0x7dc8,	// (0x0004b051) main_cset6_slider_pane_t8_ParamLimits

0x7dc8,	// (0x0004b051) main_cset6_slider_pane_t8

0x7dec,	// (0x0004b075) main_cset6_slider_pane_t9_ParamLimits

0x7dec,	// (0x0004b075) main_cset6_slider_pane_t9

0x7e10,	// (0x0004b099) main_cset6_slider_pane_t10_ParamLimits

0x7e10,	// (0x0004b099) main_cset6_slider_pane_t10

0x7e34,	// (0x0004b0bd) main_cset6_slider_pane_t11_ParamLimits

0x7e34,	// (0x0004b0bd) main_cset6_slider_pane_t11

0x7e5a,	// (0x0004b0e3) main_cset6_slider_pane_t14_ParamLimits

0x7e5a,	// (0x0004b0e3) main_cset6_slider_pane_t14

0x7e93,	// (0x0004b11c) main_cset6_slider_pane_t15_ParamLimits

0x7e93,	// (0x0004b11c) main_cset6_slider_pane_t15

0x000b,

0xfb1a,	// (0x00052da3) main_cset6_slider_pane_t_ParamLimits

0xfb1a,	// (0x00052da3) main_cset6_slider_pane_t

0x7ecc,	// (0x0004b155) cset_slider_pane_g1_copy1

0x7ed5,	// (0x0004b15e) cset_slider_pane_g2_copy1

0x7ede,	// (0x0004b167) cset_slider_pane_g3_copy1

0xa832,	// (0x0004dabb) bg_popup_sub_pane_cp011_copy1

0x7ef0,	// (0x0004b179) main_cset_text_pane_g1_copy1

0x6d6c,	// (0x00049ff5) main_cset_text_pane_t1_copy1

0x6d7a,	// (0x0004a003) main_cset_text_pane_t2_copy1

0x6d88,	// (0x0004a011) main_cset_text_pane_t3_copy1

0x6d96,	// (0x0004a01f) main_cset_text_pane_t4_copy1

0x6da4,	// (0x0004a02d) main_cset_text_pane_t5_copy1

0x7ef8,	// (0x0004b181) main_cset_text_pane_t6_copy1

0x7f06,	// (0x0004b18f) main_cset_text_pane_t7_copy1

0x7b01,	// (0x0004ad8a) main_cset_text2_pane_t1_copy1

0xa8af,	// (0x0004db38) main_ncimui_pane

0x437e,	// (0x00047607) popup_query_ncimui_window_ParamLimits

0x437e,	// (0x00047607) popup_query_ncimui_window

0xb390,	// (0x0004e619) field_cale_ev2_pane_g4_ParamLimits

0xb390,	// (0x0004e619) field_cale_ev2_pane_g4

0x5660,	// (0x000488e9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5660,	// (0x000488e9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7fe,	// (0x00052a87) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7fe,	// (0x00052a87) cell_video_dialer_keypad_pane_g

0x5678,	// (0x00048901) cell_video_dialer_keypad_pane_t1

0xa832,	// (0x0004dabb) bg_popup_window_pane_cp012

0xe3f8,	// (0x00051681) heading_pane_cp06

0x805b,	// (0x0004b2e4) ncim_query_content_pane

0xa832,	// (0x0004dabb) bg_popup_heading_pane_cp01

0x8063,	// (0x0004b2ec) ncim_heading_pane_t1

0x8071,	// (0x0004b2fa) ncim_indicator_popup_pane

0x8083,	// (0x0004b30c) ncim_query_button_pane

0x80a5,	// (0x0004b32e) ncim_query_content_pane_t1

0x80b7,	// (0x0004b340) ncim_query_content_pane_t2

0x0005,

0xfb5e,	// (0x00052de7) ncim_query_content_pane_t

0x8169,	// (0x0004b3f2) ncim_query_list_pane

0x817b,	// (0x0004b404) ncim_query_popup_pane

0x8071,	// (0x0004b2fa) ncim_indicator_popup_pane_ParamLimits

0x808b,	// (0x0004b314) ncim_query_content_pane_g1_ParamLimits

0x808b,	// (0x0004b314) ncim_query_content_pane_g1

0x80a5,	// (0x0004b32e) ncim_query_content_pane_t1_ParamLimits

0x80b7,	// (0x0004b340) ncim_query_content_pane_t2_ParamLimits

0x80c9,	// (0x0004b352) ncim_query_content_pane_t3_ParamLimits

0x80c9,	// (0x0004b352) ncim_query_content_pane_t3

0x80f1,	// (0x0004b37a) ncim_query_content_pane_t4_ParamLimits

0x80f1,	// (0x0004b37a) ncim_query_content_pane_t4

0x8119,	// (0x0004b3a2) ncim_query_content_pane_t5_ParamLimits

0x8119,	// (0x0004b3a2) ncim_query_content_pane_t5

0x8141,	// (0x0004b3ca) ncim_query_content_pane_t6_ParamLimits

0x8141,	// (0x0004b3ca) ncim_query_content_pane_t6

0xfb5e,	// (0x00052de7) ncim_query_content_pane_t_ParamLimits

0x8169,	// (0x0004b3f2) ncim_query_list_pane_ParamLimits

0x817b,	// (0x0004b404) ncim_query_popup_pane_ParamLimits

0x818f,	// (0x0004b418) wait_bar_pane_cp04

0xa832,	// (0x0004dabb) input_focus_pane_cp011

0x8197,	// (0x0004b420) ncim_query_popup_pane_t1

0x81a5,	// (0x0004b42e) ncim_list_query_list_pane_ParamLimits

0x81a5,	// (0x0004b42e) ncim_list_query_list_pane

0xa832,	// (0x0004dabb) bg_button_pane_cp027

0x81b8,	// (0x0004b441) ncim_query_button_pane_g1

0xa832,	// (0x0004dabb) list_highlight_pane_cp012

0x81c2,	// (0x0004b44b) ncim_list_query_list_pane_g1

0x81ca,	// (0x0004b453) ncim_list_query_list_pane_t1

0xb6d2,	// (0x0004e95b) cam4_indicators_pane_g3_ParamLimits

0xb6d2,	// (0x0004e95b) cam4_indicators_pane_g3

0xb755,	// (0x0004e9de) vid4_indicators_pane_g5_ParamLimits

0xb755,	// (0x0004e9de) vid4_indicators_pane_g5

0xb8c5,	// (0x0004eb4e) vid4_progress_pane_g5_ParamLimits

0xb8c5,	// (0x0004eb4e) vid4_progress_pane_g5

0x7f46,	// (0x0004b1cf) main_ncimui_pane_g1

0x7faf,	// (0x0004b238) ncimui_group_query_pane_ParamLimits

0x7faf,	// (0x0004b238) ncimui_group_query_pane

0x7ff7,	// (0x0004b280) ncimui_list_pane_ParamLimits

0x7ff7,	// (0x0004b280) ncimui_list_pane

0x801e,	// (0x0004b2a7) ncimui_text_pane_ParamLimits

0x801e,	// (0x0004b2a7) ncimui_text_pane

0x81d8,	// (0x0004b461) ncimui_text_pane_t1_ParamLimits

0x81d8,	// (0x0004b461) ncimui_text_pane_t1

0x81f6,	// (0x0004b47f) ncimui_list_single_graphic_pane_ParamLimits

0x81f6,	// (0x0004b47f) ncimui_list_single_graphic_pane

0x8206,	// (0x0004b48f) ncimui_query_pane_ParamLimits

0x8206,	// (0x0004b48f) ncimui_query_pane

0xa832,	// (0x0004dabb) list_highlight_pane_cp013

0x8219,	// (0x0004b4a2) ncim_list_query_list_pane_t1_copy1

0x81c2,	// (0x0004b44b) ncim_list_single_graphic_pane_g1

0x8227,	// (0x0004b4b0) ncim_query_button_pane_cp01

0x8233,	// (0x0004b4bc) ncim_query_entry_pane_ParamLimits

0x8233,	// (0x0004b4bc) ncim_query_entry_pane

0x8246,	// (0x0004b4cf) ncimui_query_pane_g1

0x8252,	// (0x0004b4db) ncimui_query_pane_t1_ParamLimits

0x8252,	// (0x0004b4db) ncimui_query_pane_t1

0xa8af,	// (0x0004db38) input_focus_pane_cp012

0x826b,	// (0x0004b4f4) ncim_query_entry_pane_t1

0xb06f,	// (0x0004e2f8) main_im_pane_ParamLimits

0xa8af,	// (0x0004db38) main_mobtv_pane_ParamLimits

0xa8af,	// (0x0004db38) main_mobtv_pane

0x7c89,	// (0x0004af12) main_cset6_slider_pane_g18_ParamLimits

0x7c89,	// (0x0004af12) main_cset6_slider_pane_g18

0x7c95,	// (0x0004af1e) main_cset6_slider_pane_g19_ParamLimits

0x7c95,	// (0x0004af1e) main_cset6_slider_pane_g19

0xaff7,	// (0x0004e280) bg_main_mobtv_pane_ParamLimits

0xaff7,	// (0x0004e280) bg_main_mobtv_pane

0x827d,	// (0x0004b506) main_mobtv_info_pane

0x8288,	// (0x0004b511) main_mobtv_loading_pane_ParamLimits

0x8288,	// (0x0004b511) main_mobtv_loading_pane

0x8295,	// (0x0004b51e) main_mobtv_pg_channel_list_pane

0x829f,	// (0x0004b528) main_mobtv_pg_hdr_pane

0x82a8,	// (0x0004b531) main_mobtv_programe_curr_pane_ParamLimits

0x82a8,	// (0x0004b531) main_mobtv_programe_curr_pane

0x82b5,	// (0x0004b53e) main_mobtv_programe_next_pane_ParamLimits

0x82b5,	// (0x0004b53e) main_mobtv_programe_next_pane

0x82c2,	// (0x0004b54b) popup_mobtv_noti_window

0xc7db,	// (0x0004fa64) main_tv_pg_hdr_pane_g1

0x82cc,	// (0x0004b555) main_tv_pg_hdr_pane_g2

0x82d4,	// (0x0004b55d) main_tv_pg_hdr_pane_g3

0x82dc,	// (0x0004b565) main_tv_pg_hdr_pane_g4

0x82e4,	// (0x0004b56d) main_tv_pg_hdr_pane_g5

0x82ee,	// (0x0004b577) main_tv_pg_hdr_pane_g6

0x82f8,	// (0x0004b581) main_tv_pg_hdr_pane_g7

0x8302,	// (0x0004b58b) main_tv_pg_hdr_pane_g8

0x830c,	// (0x0004b595) main_tv_pg_hdr_pane_g9

0x8316,	// (0x0004b59f) main_tv_pg_hdr_pane_g10

0x8320,	// (0x0004b5a9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb6b,	// (0x00052df4) main_tv_pg_hdr_pane_g

0x832a,	// (0x0004b5b3) main_tv_pg_hdr_pane_t1

0x8338,	// (0x0004b5c1) main_tv_pg_hdr_pane_t2

0x8346,	// (0x0004b5cf) main_tv_pg_hdr_pane_t3

0x8356,	// (0x0004b5df) main_tv_pg_hdr_pane_t4

0x8366,	// (0x0004b5ef) main_tv_pg_hdr_pane_t5

0x0004,

0xfb82,	// (0x00052e0b) main_tv_pg_hdr_pane_t

0x8376,	// (0x0004b5ff) single_mobtv_pg_channel_pane_ParamLimits

0x8376,	// (0x0004b5ff) single_mobtv_pg_channel_pane

0x8388,	// (0x0004b611) single_mobtv_pg_channel_table_pane

0x8391,	// (0x0004b61a) single_mobtv_pg_channel_thumb_pane

0x839a,	// (0x0004b623) single_tv_pg_channel_pane_g1

0x83a3,	// (0x0004b62c) single_tv_pg_channel_pane_g2

0x0001,

0xfb8d,	// (0x00052e16) single_tv_pg_channel_pane_g

0xafdb,	// (0x0004e264) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xafdb,	// (0x0004e264) bg_single_mobtv_pg_channel_thumb_pane

0x83ac,	// (0x0004b635) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x83ac,	// (0x0004b635) single_mobtv_pg_channel_thumb_pane_g1

0x83ba,	// (0x0004b643) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x83ba,	// (0x0004b643) single_mobtv_pg_channel_thumb_pane_g2

0x83c6,	// (0x0004b64f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x83c6,	// (0x0004b64f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb92,	// (0x00052e1b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb92,	// (0x00052e1b) single_mobtv_pg_channel_thumb_pane_g

0x83d2,	// (0x0004b65b) single_mobtv_pg_channel_thumb_pane_t1

0x83e0,	// (0x0004b669) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb99,	// (0x00052e22) single_mobtv_pg_channel_thumb_pane_t

0xc7db,	// (0x0004fa64) bg_single_mobtv_pg_channel_table_pane_g1

0xc7db,	// (0x0004fa64) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x00052647) bg_single_mobtv_pg_channel_table_pane_g

0x83ee,	// (0x0004b677) single_mobtv_pg_channel_table_pane_t1

0x83fc,	// (0x0004b685) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9e,	// (0x00052e27) single_mobtv_pg_channel_table_pane_t

0x8412,	// (0x0004b69b) main_mobtv_info_pane_g1_ParamLimits

0x8412,	// (0x0004b69b) main_mobtv_info_pane_g1

0x8430,	// (0x0004b6b9) main_mobtv_info_pane_t1_ParamLimits

0x8430,	// (0x0004b6b9) main_mobtv_info_pane_t1

0x84a8,	// (0x0004b731) main_mobtv_info_pane_t2_ParamLimits

0x84a8,	// (0x0004b731) main_mobtv_info_pane_t2

0x0002,

0xfba8,	// (0x00052e31) main_mobtv_info_pane_t_ParamLimits

0xfba8,	// (0x00052e31) main_mobtv_info_pane_t

0x8539,	// (0x0004b7c2) wait_bar_pane_cp05

0x854b,	// (0x0004b7d4) main_mobtv_loading_pane_g1_ParamLimits

0x854b,	// (0x0004b7d4) main_mobtv_loading_pane_g1

0x855c,	// (0x0004b7e5) main_mobtv_loading_pane_g2_ParamLimits

0x855c,	// (0x0004b7e5) main_mobtv_loading_pane_g2

0x8568,	// (0x0004b7f1) main_mobtv_loading_pane_g3_ParamLimits

0x8568,	// (0x0004b7f1) main_mobtv_loading_pane_g3

0x0002,

0xfbaf,	// (0x00052e38) main_mobtv_loading_pane_g_ParamLimits

0xfbaf,	// (0x00052e38) main_mobtv_loading_pane_g

0x857b,	// (0x0004b804) main_mobtv_loading_pane_t1_ParamLimits

0x857b,	// (0x0004b804) main_mobtv_loading_pane_t1

0x8593,	// (0x0004b81c) main_mobtv_loading_pane_t2_ParamLimits

0x8593,	// (0x0004b81c) main_mobtv_loading_pane_t2

0x0001,

0xfbb6,	// (0x00052e3f) main_mobtv_loading_pane_t_ParamLimits

0xfbb6,	// (0x00052e3f) main_mobtv_loading_pane_t

0x85b7,	// (0x0004b840) wait_bar_pane_cp06_ParamLimits

0x85b7,	// (0x0004b840) wait_bar_pane_cp06

0x85c6,	// (0x0004b84f) main_mobtv_programe_curr_pane_t1

0x85d4,	// (0x0004b85d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbbb,	// (0x00052e44) main_mobtv_programe_curr_pane_t

0x85e2,	// (0x0004b86b) main_mobtv_programe_next_pane_t1

0x85f0,	// (0x0004b879) main_mobtv_programe_next_pane_t2

0x85fe,	// (0x0004b887) main_mobtv_programe_next_pane_t3

0x0002,

0xfbc0,	// (0x00052e49) main_mobtv_programe_next_pane_t

0xa832,	// (0x0004dabb) bg_popup_mobtv_noti_window_pane

0x860c,	// (0x0004b895) popup_mobtv_noti_window_g1

0x8614,	// (0x0004b89d) popup_mobtv_noti_window_t1

0x8622,	// (0x0004b8ab) popup_mobtv_noti_window_t2

0x0001,

0xfbc7,	// (0x00052e50) popup_mobtv_noti_window_t

0xc7db,	// (0x0004fa64) bg_popup_mobtv_noti_window_pane_g1

0xa832,	// (0x0004dabb) sc_clock_pane

0xa832,	// (0x0004dabb) main_fs_bigclock_pane

0x75ea,	// (0x0004a873) blid2_tripm_pane_t4_ParamLimits

0x75ea,	// (0x0004a873) blid2_tripm_pane_t4

0x8630,	// (0x0004b8b9) sc_clock_pane_g1_ParamLimits

0x8630,	// (0x0004b8b9) sc_clock_pane_g1

0x8642,	// (0x0004b8cb) sc_clock_pane_t1_ParamLimits

0x8642,	// (0x0004b8cb) sc_clock_pane_t1

0x8666,	// (0x0004b8ef) sc_clock_pane_t2_ParamLimits

0x8666,	// (0x0004b8ef) sc_clock_pane_t2

0x867e,	// (0x0004b907) sc_clock_pane_t3_ParamLimits

0x867e,	// (0x0004b907) sc_clock_pane_t3

0x0004,

0xfbcc,	// (0x00052e55) sc_clock_pane_t_ParamLimits

0xfbcc,	// (0x00052e55) sc_clock_pane_t

0x95e5,	// (0x0004c86e) main_fs_bigclock_indicator_pane_ParamLimits

0x95e5,	// (0x0004c86e) main_fs_bigclock_indicator_pane

0x8744,	// (0x0004b9cd) main_fs_bigclock_pane_g1_ParamLimits

0x8744,	// (0x0004b9cd) main_fs_bigclock_pane_g1

0x95f1,	// (0x0004c87a) main_fs_bigclock_pane_t1_ParamLimits

0x95f1,	// (0x0004c87a) main_fs_bigclock_pane_t1

0x9603,	// (0x0004c88c) main_fs_bigclock_pane_t2_ParamLimits

0x9603,	// (0x0004c88c) main_fs_bigclock_pane_t2

0x9617,	// (0x0004c8a0) main_fs_bigclock_pane_t3_ParamLimits

0x9617,	// (0x0004c8a0) main_fs_bigclock_pane_t3

0x0002,

0xfd5d,	// (0x00052fe6) main_fs_bigclock_pane_t_ParamLimits

0xfd5d,	// (0x00052fe6) main_fs_bigclock_pane_t

0xbfe4,	// (0x0004f26d) main_fs_bigclock_indicator_pane_g1

0x8097,	// (0x0004b320) ncim_query_content_pane_g2_ParamLimits

0x8097,	// (0x0004b320) ncim_query_content_pane_g2

0x0001,

0xfb59,	// (0x00052de2) ncim_query_content_pane_g_ParamLimits

0xfb59,	// (0x00052de2) ncim_query_content_pane_g

0x8695,	// (0x0004b91e) sc_clock_pane_t4_ParamLimits

0x8695,	// (0x0004b91e) sc_clock_pane_t4

0xa8af,	// (0x0004db38) main_radioblah_pane

0xb645,	// (0x0004e8ce) cell_call4_button_pane_t1_copy1_ParamLimits

0xb645,	// (0x0004e8ce) cell_call4_button_pane_t1_copy1

0x7f5e,	// (0x0004b1e7) main_ncimui_pane_t1_ParamLimits

0x7f5e,	// (0x0004b1e7) main_ncimui_pane_t1

0x7f78,	// (0x0004b201) main_ncimui_pane_t2_ParamLimits

0x7f78,	// (0x0004b201) main_ncimui_pane_t2

0x0002,

0xfb52,	// (0x00052ddb) main_ncimui_pane_t_ParamLimits

0xfb52,	// (0x00052ddb) main_ncimui_pane_t

0x88db,	// (0x0004bb64) main_radioblah_anim_pane_ParamLimits

0x88db,	// (0x0004bb64) main_radioblah_anim_pane

0x88ec,	// (0x0004bb75) main_radioblah_info_pane_ParamLimits

0x88ec,	// (0x0004bb75) main_radioblah_info_pane

0x8912,	// (0x0004bb9b) main_radioblah_pane_t1_ParamLimits

0x8912,	// (0x0004bb9b) main_radioblah_pane_t1

0x892e,	// (0x0004bbb7) main_radioblah_pane_t2_ParamLimits

0x892e,	// (0x0004bbb7) main_radioblah_pane_t2

0x0003,

0xfbed,	// (0x00052e76) main_radioblah_pane_t_ParamLimits

0xfbed,	// (0x00052e76) main_radioblah_pane_t

0x8976,	// (0x0004bbff) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8976,	// (0x0004bbff) main_radioblah_rocker_ctrl_pane

0x89ce,	// (0x0004bc57) main_radioblah_info_pane_t1_ParamLimits

0x89ce,	// (0x0004bc57) main_radioblah_info_pane_t1

0x8a08,	// (0x0004bc91) main_radioblah_info_pane_t2_ParamLimits

0x8a08,	// (0x0004bc91) main_radioblah_info_pane_t2

0x0003,

0xfbf6,	// (0x00052e7f) main_radioblah_info_pane_t_ParamLimits

0xfbf6,	// (0x00052e7f) main_radioblah_info_pane_t

0xc7db,	// (0x0004fa64) main_radioblah_rocker_ctrl_pane_g1

0x8ab8,	// (0x0004bd41) main_radioblah_rocker_ctrl_pane_g2

0x8ac0,	// (0x0004bd49) main_radioblah_rocker_ctrl_pane_g3

0x8ac8,	// (0x0004bd51) main_radioblah_rocker_ctrl_pane_g4

0x8ad0,	// (0x0004bd59) main_radioblah_rocker_ctrl_pane_g5

0x8ad8,	// (0x0004bd61) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbff,	// (0x00052e88) main_radioblah_rocker_ctrl_pane_g

0x7b01,	// (0x0004ad8a) main_cset_text2_pane_t1_copy1_ParamLimits

0xb6a3,	// (0x0004e92c) cam4_image_uncrop_qvga_pane

0xb6f8,	// (0x0004e981) vid4_image_uncrop_qcif_pane

0xb921,	// (0x0004ebaa) cam6_image_uncrop_qvga_pane_ParamLimits

0xb921,	// (0x0004ebaa) cam6_image_uncrop_qvga_pane

0x79b9,	// (0x0004ac42) vid6_image_uncrop_qcif_pane_ParamLimits

0x79b9,	// (0x0004ac42) vid6_image_uncrop_qcif_pane

0xa832,	// (0x0004dabb) bg_popup_preview_window_pane_cp03

0x7f14,	// (0x0004b19d) list_cset_text2_pane

0x7f1c,	// (0x0004b1a5) main_cset6_text2_pane_g1

0x7f24,	// (0x0004b1ad) main_cset6_text2_pane_t1

0x8ae0,	// (0x0004bd69) list_cset_text2_pane_t1_ParamLimits

0x8ae0,	// (0x0004bd69) list_cset_text2_pane_t1

0xa8af,	// (0x0004db38) main_radioblah_pane_ParamLimits

0x8525,	// (0x0004b7ae) main_mobtv_info_pane_t3_ParamLimits

0x8525,	// (0x0004b7ae) main_mobtv_info_pane_t3

0x8900,	// (0x0004bb89) main_radioblah_pane_g1

0x899e,	// (0x0004bc27) main_radioblah_info_pane_g1

0x8a5d,	// (0x0004bce6) main_radioblah_info_pane_t3_ParamLimits

0x8a5d,	// (0x0004bce6) main_radioblah_info_pane_t3

0x2f26,	// (0x000461af) highlight_cell_cale_month_pane_ParamLimits

0x2f26,	// (0x000461af) highlight_cell_cale_month_pane

0xa832,	// (0x0004dabb) main_phob_fisheye_pane

0xebba,	// (0x00051e43) scroll_pane_cp0031_ParamLimits

0xebba,	// (0x00051e43) scroll_pane_cp0031

0x7af2,	// (0x0004ad7b) wait_bar_pane_cp08_ParamLimits

0x7bab,	// (0x0004ae34) cset_list_set_pane_copy1_ParamLimits

0x8afa,	// (0x0004bd83) highlight_cell_cale_month_pane_g1

0x8b02,	// (0x0004bd8b) highlight_cell_cale_month_pane_t1

0x71e5,	// (0x0004a46e) list_gen_pane_cp01

0x65f3,	// (0x0004987c) scroll_pane_01

0x8b10,	// (0x0004bd99) list_single_double_fisheye_pane

0x0c3d,	// (0x00043ec6) list_double_fisheye_pane_g1_ParamLimits

0x0c3d,	// (0x00043ec6) list_double_fisheye_pane_g1

0x0c49,	// (0x00043ed2) list_double_fisheye_pane_g2_ParamLimits

0x0c49,	// (0x00043ed2) list_double_fisheye_pane_g2

0x8b19,	// (0x0004bda2) list_double_fisheye_pane_g3_ParamLimits

0x8b19,	// (0x0004bda2) list_double_fisheye_pane_g3

0x0004,

0xfc0c,	// (0x00052e95) list_double_fisheye_pane_g_ParamLimits

0xfc0c,	// (0x00052e95) list_double_fisheye_pane_g

0x0c7a,	// (0x00043f03) list_double_fisheye_pane_t1_ParamLimits

0x0c7a,	// (0x00043f03) list_double_fisheye_pane_t1

0x0c95,	// (0x00043f1e) list_double_fisheye_pane_t2_ParamLimits

0x0c95,	// (0x00043f1e) list_double_fisheye_pane_t2

0x0001,

0xfc17,	// (0x00052ea0) list_double_fisheye_pane_t_ParamLimits

0xfc17,	// (0x00052ea0) list_double_fisheye_pane_t

0xa832,	// (0x0004dabb) main_call5_pane

0x86c0,	// (0x0004b949) sc_swipe_pane_ParamLimits

0x86c0,	// (0x0004b949) sc_swipe_pane

0x8b38,	// (0x0004bdc1) call5_image_pane_ParamLimits

0x8b38,	// (0x0004bdc1) call5_image_pane

0x8b55,	// (0x0004bdde) call5_swipe_1_pane_ParamLimits

0x8b55,	// (0x0004bdde) call5_swipe_1_pane

0x8b68,	// (0x0004bdf1) call5_swipe_2_pane_ParamLimits

0x8b68,	// (0x0004bdf1) call5_swipe_2_pane

0x8b93,	// (0x0004be1c) popup_call5_audio_first_window_ParamLimits

0x8b93,	// (0x0004be1c) popup_call5_audio_first_window

0xafdb,	// (0x0004e264) call5_swipe_1_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) call5_swipe_1_pane_g1

0x8ba8,	// (0x0004be31) call5_swipe_1_pane_g2_ParamLimits

0x8ba8,	// (0x0004be31) call5_swipe_1_pane_g2

0x0001,

0xfc1c,	// (0x00052ea5) call5_swipe_1_pane_g_ParamLimits

0xfc1c,	// (0x00052ea5) call5_swipe_1_pane_g

0x8bb4,	// (0x0004be3d) call5_swipe_1_pane_t1_ParamLimits

0x8bb4,	// (0x0004be3d) call5_swipe_1_pane_t1

0xafdb,	// (0x0004e264) call5_swipe_2_pane_g1_ParamLimits

0xafdb,	// (0x0004e264) call5_swipe_2_pane_g1

0x8bc9,	// (0x0004be52) call5_swipe_2_pane_g2_ParamLimits

0x8bc9,	// (0x0004be52) call5_swipe_2_pane_g2

0x0001,

0xfc21,	// (0x00052eaa) call5_swipe_2_pane_g_ParamLimits

0xfc21,	// (0x00052eaa) call5_swipe_2_pane_g

0x8bd5,	// (0x0004be5e) call5_swipe_2_pane_t1_ParamLimits

0x8bd5,	// (0x0004be5e) call5_swipe_2_pane_t1

0x8bea,	// (0x0004be73) sc_swipe_pane_g1_ParamLimits

0x8bea,	// (0x0004be73) sc_swipe_pane_g1

0x8bf7,	// (0x0004be80) sc_swipe_pane_g2_ParamLimits

0x8bf7,	// (0x0004be80) sc_swipe_pane_g2

0x0001,

0xfc26,	// (0x00052eaf) sc_swipe_pane_g_ParamLimits

0xfc26,	// (0x00052eaf) sc_swipe_pane_g

0x8c03,	// (0x0004be8c) sc_swipe_pane_t1_ParamLimits

0x8c03,	// (0x0004be8c) sc_swipe_pane_t1

0xa832,	// (0x0004dabb) main_cmail_launcher_pane

0x8c18,	// (0x0004bea1) aid_size_cell_cmail_l_ParamLimits

0x8c18,	// (0x0004bea1) aid_size_cell_cmail_l

0x8c2e,	// (0x0004beb7) grid_cmail_l_pane_ParamLimits

0x8c2e,	// (0x0004beb7) grid_cmail_l_pane

0x8c48,	// (0x0004bed1) cell_cmail_l_pane_ParamLimits

0x8c48,	// (0x0004bed1) cell_cmail_l_pane

0x8c6d,	// (0x0004bef6) cell_cmail_l_pane_g1_ParamLimits

0x8c6d,	// (0x0004bef6) cell_cmail_l_pane_g1

0x8c79,	// (0x0004bf02) cell_cmail_l_pane_t1_ParamLimits

0x8c79,	// (0x0004bf02) cell_cmail_l_pane_t1

0x8c8f,	// (0x0004bf18) cell_cmail_l_pane_t2_ParamLimits

0x8c8f,	// (0x0004bf18) cell_cmail_l_pane_t2

0x0001,

0xfc2b,	// (0x00052eb4) cell_cmail_l_pane_t_ParamLimits

0xfc2b,	// (0x00052eb4) cell_cmail_l_pane_t

0xa8af,	// (0x0004db38) grid_highlight_pane_cp018_ParamLimits

0xa8af,	// (0x0004db38) grid_highlight_pane_cp018

0x11d0,	// (0x00044459) main2_pane_ParamLimits

0x11d0,	// (0x00044459) main2_pane

0xb12b,	// (0x0004e3b4) popup_sp_fs_action_menu_bg_pane_g1

0xb133,	// (0x0004e3bc) popup_sp_fs_action_menu_bg_pane_g2

0xb13b,	// (0x0004e3c4) popup_sp_fs_action_menu_bg_pane_g3

0xb143,	// (0x0004e3cc) popup_sp_fs_action_menu_bg_pane_g4

0xb14b,	// (0x0004e3d4) popup_sp_fs_action_menu_bg_pane_g5

0xb153,	// (0x0004e3dc) popup_sp_fs_action_menu_bg_pane_g6

0xb15b,	// (0x0004e3e4) popup_sp_fs_action_menu_bg_pane_g7

0xb163,	// (0x0004e3ec) popup_sp_fs_action_menu_bg_pane_g8

0xb16b,	// (0x0004e3f4) popup_sp_fs_action_menu_bg_pane_g9

0xb173,	// (0x0004e3fc) popup_sp_fs_action_menu_bg_pane_g10

0xb173,	// (0x0004e3fc) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x000523b4) popup_sp_fs_action_menu_bg_pane_g

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g3_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g3_g1

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g3_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g3_g2

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g3_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00052462) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00052462) list_medium_line_x2_t3_g3_g

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g3_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g3_t2

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00052469) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00052469) list_medium_line_x2_t3_g3_t

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g2_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g2_g1

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g2_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00052470) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00052470) list_medium_line_x2_t3_g2_g

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g2_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g2_t2

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00052469) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00052469) list_medium_line_x2_t3_g2_t

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g4_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g4_g1

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g4_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g4_g2

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g4_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g4_g3

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g4_g4_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00052475) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00052475) list_medium_line_x2_t4_g4_g

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g4_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g4_t2

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g4_t3

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0005247e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0005247e) list_medium_line_x2_t4_g4_t

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g4_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g4_g1

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g4_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g4_g2

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g4_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g4_g3

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g4_g4_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00052475) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00052475) list_medium_line_x2_t2_g4_g

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g4_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x00052445) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x00052445) list_medium_line_x2_t2_g4_t

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g3_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g3_g1

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g3_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g3_g2

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g3_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00052462) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00052462) list_medium_line_x2_t2_g3_g

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g3_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x00052445) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x00052445) list_medium_line_x2_t2_g3_t

0x3096,	// (0x0004631f) main_sp_fs_list_pane_ParamLimits

0x3096,	// (0x0004631f) main_sp_fs_list_pane

0xe993,	// (0x00051c1c) sp_fs_scroll_pane_ParamLimits

0xe993,	// (0x00051c1c) sp_fs_scroll_pane

0xcd30,	// (0x0004ffb9) list_medium_line_x2_t3_t1

0xcd30,	// (0x0004ffb9) list_medium_line_x2_t3_t2

0xcd30,	// (0x0004ffb9) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x0005252b) list_medium_line_x2_t3_t

0xcd30,	// (0x0004ffb9) list_medium_line_x3_t4_t1

0xcd30,	// (0x0004ffb9) list_medium_line_x3_t4_t2

0xcd30,	// (0x0004ffb9) list_medium_line_x3_t4_t3

0xcd30,	// (0x0004ffb9) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x00052532) list_medium_line_x3_t4_t

0xcd30,	// (0x0004ffb9) list_medium_line_x4_t5_t1

0xcd30,	// (0x0004ffb9) list_medium_line_x4_t5_t2

0xcd30,	// (0x0004ffb9) list_medium_line_x4_t5_t3

0xcd30,	// (0x0004ffb9) list_medium_line_x4_t5_t4

0xcd30,	// (0x0004ffb9) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x0005253b) list_medium_line_x4_t5_t

0xafdb,	// (0x0004e264) list_medium_line_t4_g4_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t4_g4_g1

0xafdb,	// (0x0004e264) list_medium_line_t4_g4_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t4_g4_g2

0xafdb,	// (0x0004e264) list_medium_line_t4_g4_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t4_g4_g3

0xafdb,	// (0x0004e264) list_medium_line_t4_g4_g4_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00052475) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00052475) list_medium_line_t4_g4_g

0xc7ad,	// (0x0004fa36) list_medium_line_t4_g4_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t4_g4_t1

0xc7ad,	// (0x0004fa36) list_medium_line_t4_g4_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t4_g4_t2

0xc7ad,	// (0x0004fa36) list_medium_line_t4_g4_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t4_g4_t3

0xc7ad,	// (0x0004fa36) list_medium_line_t4_g4_t4_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0005247e) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0005247e) list_medium_line_t4_g4_t

0x3144,	// (0x000463cd) chi_dic_find_pane_g1

0x4104,	// (0x0004738d) main_tport_pane

0xcd30,	// (0x0004ffb9) list_medium_line_plain_t1

0xafdb,	// (0x0004e264) list_medium_line_t2_g2_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t2_g2_g1

0xafdb,	// (0x0004e264) list_medium_line_t2_g2_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00052470) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00052470) list_medium_line_t2_g2_g

0xc7ad,	// (0x0004fa36) list_medium_line_t2_g2_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t2_g2_t1

0xc7ad,	// (0x0004fa36) list_medium_line_t2_g2_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x00052445) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x00052445) list_medium_line_t2_g2_t

0xb8ff,	// (0x0004eb88) aid_sp_fs_list_icon_a_sm

0xb907,	// (0x0004eb90) aid_sp_fs_list_icon_d

0xb90f,	// (0x0004eb98) aid_sp_fs_text_primary

0xb918,	// (0x0004eba1) aid_sp_fs_text_secondary

0xa832,	// (0x0004dabb) list_medium_line

0xa832,	// (0x0004dabb) list_medium_line_g2

0xa832,	// (0x0004dabb) list_medium_line_g3

0xa832,	// (0x0004dabb) list_medium_line_plain

0xa832,	// (0x0004dabb) list_medium_line_plain_t2

0xa832,	// (0x0004dabb) list_medium_line_plain_t3

0xa832,	// (0x0004dabb) list_medium_line_right_icon

0xa832,	// (0x0004dabb) list_medium_line_right_iconx2

0xa832,	// (0x0004dabb) list_medium_line_t2

0xa832,	// (0x0004dabb) list_medium_line_t2_g2

0xa832,	// (0x0004dabb) list_medium_line_t2_g3

0xa832,	// (0x0004dabb) list_medium_line_t2_right_icon

0xa832,	// (0x0004dabb) list_medium_line_t2_right_iconx2

0xa832,	// (0x0004dabb) list_medium_line_t3

0xa832,	// (0x0004dabb) list_medium_line_t3_g2

0xa832,	// (0x0004dabb) list_medium_line_t3_g3

0xa832,	// (0x0004dabb) list_medium_line_t3_right_iconx2

0xa832,	// (0x0004dabb) list_medium_line_t4_g4

0xa832,	// (0x0004dabb) list_medium_line_x2

0xa832,	// (0x0004dabb) list_medium_line_x2_t2_g2

0xa832,	// (0x0004dabb) list_medium_line_x2_t2_g3

0xa832,	// (0x0004dabb) list_medium_line_x2_t2_g4

0xa832,	// (0x0004dabb) list_medium_line_x2_t3

0xa832,	// (0x0004dabb) list_medium_line_x2_t3_g2

0xa832,	// (0x0004dabb) list_medium_line_x2_t3_g3

0xa832,	// (0x0004dabb) list_medium_line_x2_t3_g4

0xa832,	// (0x0004dabb) list_medium_line_x2_t4_g2

0xa832,	// (0x0004dabb) list_medium_line_x2_t4_g4

0xa832,	// (0x0004dabb) list_medium_line_x3

0xa832,	// (0x0004dabb) list_medium_line_x3_t4

0xa832,	// (0x0004dabb) list_medium_line_x3_t4_g4

0xa832,	// (0x0004dabb) list_medium_line_x4_t4

0xa832,	// (0x0004dabb) list_medium_line_x4_t4_g7

0xa832,	// (0x0004dabb) list_medium_line_x4_t5

0x0be0,	// (0x00043e69) list_single_fs_dyc_pane_ParamLimits

0x0be0,	// (0x00043e69) list_single_fs_dyc_pane

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g1

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g2

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g3

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g4_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g4

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g5_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g5

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g6_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x4_t4_g7_g6

0xafe9,	// (0x0004e272) list_medium_line_x4_t4_g7_g7_ParamLimits

0xafe9,	// (0x0004e272) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb33,	// (0x00052dbc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb33,	// (0x00052dbc) list_medium_line_x4_t4_g7_g

0xc7ad,	// (0x0004fa36) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x4_t4_g7_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x4_t4_g7_t2

0xc7ad,	// (0x0004fa36) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x4_t4_g7_t3

0xcdde,	// (0x00050067) list_medium_line_x4_t4_g7_t4_ParamLimits

0xcdde,	// (0x00050067) list_medium_line_x4_t4_g7_t4

0xcdde,	// (0x00050067) list_medium_line_x4_t4_g7_t5_ParamLimits

0xcdde,	// (0x00050067) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb42,	// (0x00052dcb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb42,	// (0x00052dcb) list_medium_line_x4_t4_g7_t

0x0c20,	// (0x00043ea9) list_single_dyc_row_pane_ParamLimits

0x0c20,	// (0x00043ea9) list_single_dyc_row_pane

0x8b25,	// (0x0004bdae) call5_gesture_pane_ParamLimits

0x8b25,	// (0x0004bdae) call5_gesture_pane

0x8b7b,	// (0x0004be04) call5_windows_pane_ParamLimits

0x8b7b,	// (0x0004be04) call5_windows_pane

0x8cac,	// (0x0004bf35) call5_swipe_1_pane_cp_ParamLimits

0x8cac,	// (0x0004bf35) call5_swipe_1_pane_cp

0x8cb8,	// (0x0004bf41) call5_swipe_2_pane_cp_ParamLimits

0x8cb8,	// (0x0004bf41) call5_swipe_2_pane_cp

0xc7a5,	// (0x0004fa2e) call5_image_pane_cp

0x8cc4,	// (0x0004bf4d) popup_call5_audio_first_window_cp_ParamLimits

0x8cc4,	// (0x0004bf4d) popup_call5_audio_first_window_cp

0x8bea,	// (0x0004be73) call5_swipe_1_pane_g1_cp_ParamLimits

0x8bea,	// (0x0004be73) call5_swipe_1_pane_g1_cp

0x8cd2,	// (0x0004bf5b) call5_swipe_1_pane_g2_cp

0x8c03,	// (0x0004be8c) call5_swipe_1_pane_t1_cp_ParamLimits

0x8c03,	// (0x0004be8c) call5_swipe_1_pane_t1_cp

0x8bea,	// (0x0004be73) call5_swipe_2_pane_g1_cp_ParamLimits

0x8bea,	// (0x0004be73) call5_swipe_2_pane_g1_cp

0x8cda,	// (0x0004bf63) call5_swipe_2_pane_g2_cp

0x8ce2,	// (0x0004bf6b) call5_swipe_2_pane_t1_cp_ParamLimits

0x8ce2,	// (0x0004bf6b) call5_swipe_2_pane_t1_cp

0xa8af,	// (0x0004db38) main_sp_fs_email_pane

0x698f,	// (0x00049c18) main_sp_fs_listscroll_pane_te

0x8cf7,	// (0x0004bf80) popup_sp_fs_action_menu_pane_ParamLimits

0x8cf7,	// (0x0004bf80) popup_sp_fs_action_menu_pane

0xc7db,	// (0x0004fa64) bg_sp_fs_ctrlbar_pane_g1

0x8d3d,	// (0x0004bfc6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x8d46,	// (0x0004bfcf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x8d4f,	// (0x0004bfd8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7db,	// (0x0004fa64) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc30,	// (0x00052eb9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd4cb,	// (0x00050754) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd4cb,	// (0x00050754) bg_sp_fs_ctrlbar_ddmenu_pane

0x8d58,	// (0x0004bfe1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x8d58,	// (0x0004bfe1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x8d64,	// (0x0004bfed) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x8d64,	// (0x0004bfed) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc39,	// (0x00052ec2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc39,	// (0x00052ec2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x8d70,	// (0x0004bff9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x8d70,	// (0x0004bff9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc7db,	// (0x0004fa64) list_medium_line_t2_right_icon_g1

0xcd30,	// (0x0004ffb9) list_medium_line_t2_right_icon_t1

0xcd30,	// (0x0004ffb9) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3e,	// (0x00052ec7) list_medium_line_t2_right_icon_t

0xe2e6,	// (0x0005156f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe2e6,	// (0x0005156f) bg_sp_fs_ctrlbar_pane

0x8e11,	// (0x0004c09a) main_sp_fs_ctrlbar_button_pane_cp01

0x8e1b,	// (0x0004c0a4) main_sp_fs_ctrlbar_ddmenu_pane

0x8e25,	// (0x0004c0ae) main_sp_fs_ctrlbar_pane_g1

0x8e31,	// (0x0004c0ba) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc43,	// (0x00052ecc) main_sp_fs_ctrlbar_pane_g

0x8e71,	// (0x0004c0fa) main_sp_fs_ctrlbar_pane_t1

0x8eb0,	// (0x0004c139) main_sp_fs_ctrlbar_pane

0x8eef,	// (0x0004c178) main_sp_fs_listscroll_pane_te_cp01

0x0cb7,	// (0x00043f40) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0cb7,	// (0x00043f40) popup_sp_fs_action_menu_pane_cp01

0xa8af,	// (0x0004db38) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa8af,	// (0x0004db38) bg_sp_fs_highlight_list_pane_cp01

0xb92f,	// (0x0004ebb8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb92f,	// (0x0004ebb8) sp_fs_action_menu_list_gene_pane_g1

0x8f0f,	// (0x0004c198) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x8f0f,	// (0x0004c198) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc51,	// (0x00052eda) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc51,	// (0x00052eda) sp_fs_action_menu_list_gene_pane_g

0xb93e,	// (0x0004ebc7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb93e,	// (0x0004ebc7) sp_fs_action_menu_list_gene_pane_t1

0xb956,	// (0x0004ebdf) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb956,	// (0x0004ebdf) sp_fs_action_menu_list_gene_pane

0x8f1c,	// (0x0004c1a5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x8f1c,	// (0x0004c1a5) popup_sp_fs_action_menu_bg_pane

0xb979,	// (0x0004ec02) sp_fs_action_menu_list_pane_ParamLimits

0xb979,	// (0x0004ec02) sp_fs_action_menu_list_pane

0x0cdc,	// (0x00043f65) sp_fs_scroll_pane_cp01_ParamLimits

0x0cdc,	// (0x00043f65) sp_fs_scroll_pane_cp01

0xcd30,	// (0x0004ffb9) list_medium_line_plain_t2_t1

0xcd30,	// (0x0004ffb9) list_medium_line_plain_t2_t2

0x0001,

0xfc3e,	// (0x00052ec7) list_medium_line_plain_t2_t

0xcd30,	// (0x0004ffb9) list_medium_line_plain_t3_t1

0xcd30,	// (0x0004ffb9) list_medium_line_plain_t3_t2

0xcd30,	// (0x0004ffb9) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x0005252b) list_medium_line_plain_t3_t

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g2_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g2_g1

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g2_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00052470) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00052470) list_medium_line_x2_t2_g2_g

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g2_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x00052445) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x00052445) list_medium_line_x2_t2_g2_t

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g2_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g2_g1

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g2_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00052470) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00052470) list_medium_line_x2_t4_g2_g

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g2_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g2_t2

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g2_t3

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0005247e) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0005247e) list_medium_line_x2_t4_g2_t

0xc7db,	// (0x0004fa64) list_medium_line_t3_right_iconx2_g1

0xc7db,	// (0x0004fa64) list_medium_line_t3_right_iconx2_g2

0xc7db,	// (0x0004fa64) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x0005264c) list_medium_line_t3_right_iconx2_g

0xcd30,	// (0x0004ffb9) list_medium_line_t3_right_iconx2_t1

0xcd30,	// (0x0004ffb9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3e,	// (0x00052ec7) list_medium_line_t3_right_iconx2_t

0xafdb,	// (0x0004e264) list_medium_line_x3_t4_g4_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x3_t4_g4_g1

0xafdb,	// (0x0004e264) list_medium_line_x3_t4_g4_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x3_t4_g4_g2

0xafdb,	// (0x0004e264) list_medium_line_x3_t4_g4_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x3_t4_g4_g3

0xafdb,	// (0x0004e264) list_medium_line_x3_t4_g4_g4_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00052475) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00052475) list_medium_line_x3_t4_g4_g

0xc7ad,	// (0x0004fa36) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x3_t4_g4_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x3_t4_g4_t2

0xc7ad,	// (0x0004fa36) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x3_t4_g4_t3

0xc7ad,	// (0x0004fa36) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0005247e) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0005247e) list_medium_line_x3_t4_g4_t

0x0d02,	// (0x00043f8b) list_single_dyc_row_text_pane_t1_ParamLimits

0x0d02,	// (0x00043f8b) list_single_dyc_row_text_pane_t1

0x0d4b,	// (0x00043fd4) list_single_dyc_row_text_pane_t2_ParamLimits

0x0d4b,	// (0x00043fd4) list_single_dyc_row_text_pane_t2

0xb99d,	// (0x0004ec26) list_single_dyc_row_text_pane_t3_ParamLimits

0xb99d,	// (0x0004ec26) list_single_dyc_row_text_pane_t3

0x0005,

0xfc56,	// (0x00052edf) list_single_dyc_row_text_pane_t_ParamLimits

0xfc56,	// (0x00052edf) list_single_dyc_row_text_pane_t

0xb9c1,	// (0x0004ec4a) list_single_dyc_row_pane_g1_ParamLimits

0xb9c1,	// (0x0004ec4a) list_single_dyc_row_pane_g1

0xb9cd,	// (0x0004ec56) list_single_dyc_row_pane_g2_ParamLimits

0xb9cd,	// (0x0004ec56) list_single_dyc_row_pane_g2

0xb9d9,	// (0x0004ec62) list_single_dyc_row_pane_g3_ParamLimits

0xb9d9,	// (0x0004ec62) list_single_dyc_row_pane_g3

0xb9e5,	// (0x0004ec6e) list_single_dyc_row_pane_g4_ParamLimits

0xb9e5,	// (0x0004ec6e) list_single_dyc_row_pane_g4

0x0003,

0xfc63,	// (0x00052eec) list_single_dyc_row_pane_g_ParamLimits

0xfc63,	// (0x00052eec) list_single_dyc_row_pane_g

0xb9f1,	// (0x0004ec7a) list_single_dyc_row_text_pane_ParamLimits

0xb9f1,	// (0x0004ec7a) list_single_dyc_row_text_pane

0xa832,	// (0x0004dabb) bg_sp_fs_scroll_pane

0x8f2a,	// (0x0004c1b3) thumb_sp_fs_scroll_pane

0xafdb,	// (0x0004e264) list_medium_line_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_g1

0xc7ad,	// (0x0004fa36) list_medium_line_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t1

0xafdb,	// (0x0004e264) list_medium_line_x2_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_g1

0xafdb,	// (0x0004e264) list_medium_line_x2_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00052470) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00052470) list_medium_line_x2_g

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t1

0xafdb,	// (0x0004e264) list_medium_line_x3_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x3_g1

0x8f33,	// (0x0004c1bc) list_medium_line_x3_g2_ParamLimits

0x8f33,	// (0x0004c1bc) list_medium_line_x3_g2

0x0001,

0xfc6c,	// (0x00052ef5) list_medium_line_x3_g_ParamLimits

0xfc6c,	// (0x00052ef5) list_medium_line_x3_g

0x8f41,	// (0x0004c1ca) list_medium_line_x3_t1_ParamLimits

0x8f41,	// (0x0004c1ca) list_medium_line_x3_t1

0x8f55,	// (0x0004c1de) thumb_sp_fs_scroll_pane_g1

0x8f5e,	// (0x0004c1e7) thumb_sp_fs_scroll_pane_g2

0x8f67,	// (0x0004c1f0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x00052efa) thumb_sp_fs_scroll_pane_g

0x8f55,	// (0x0004c1de) bg_sp_fs_scroll_pane_g1

0x8f5e,	// (0x0004c1e7) bg_sp_fs_scroll_pane_g2

0x8f67,	// (0x0004c1f0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x00052efa) bg_sp_fs_scroll_pane_g

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g4_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g4_g1

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g4_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g4_g2

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g4_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g4_g3

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g4_g4_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00052475) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00052475) list_medium_line_x2_t3_g4_g

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g4_t1

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g4_t2

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00052469) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00052469) list_medium_line_x2_t3_g4_t

0xafdb,	// (0x0004e264) list_medium_line_g2_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_g2_g1

0xafdb,	// (0x0004e264) list_medium_line_g2_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00052470) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00052470) list_medium_line_g2_g

0xc7ad,	// (0x0004fa36) list_medium_line_g2_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_g2_t1

0xafdb,	// (0x0004e264) list_medium_line_t3_g2_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t3_g2_g1

0xafdb,	// (0x0004e264) list_medium_line_t3_g2_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00052470) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00052470) list_medium_line_t3_g2_g

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g2_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g2_t1

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g2_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g2_t2

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g2_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00052469) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00052469) list_medium_line_t3_g2_t

0xc7db,	// (0x0004fa64) list_medium_line_right_icon_g1

0xcd30,	// (0x0004ffb9) list_medium_line_right_icon_t1

0xafdb,	// (0x0004e264) list_medium_line_t2_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t2_g1

0xc7ad,	// (0x0004fa36) list_medium_line_t2_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t2_t1

0xc7ad,	// (0x0004fa36) list_medium_line_t2_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x00052445) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x00052445) list_medium_line_t2_t

0xafdb,	// (0x0004e264) list_medium_line_t3_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t3_g1

0xc7ad,	// (0x0004fa36) list_medium_line_t3_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t3_t1

0xc7ad,	// (0x0004fa36) list_medium_line_t3_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t3_t2

0xc7ad,	// (0x0004fa36) list_medium_line_t3_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00052469) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00052469) list_medium_line_t3_t

0xafdb,	// (0x0004e264) list_medium_line_g3_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_g3_g1

0xafdb,	// (0x0004e264) list_medium_line_g3_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_g3_g2

0xafdb,	// (0x0004e264) list_medium_line_g3_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00052462) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00052462) list_medium_line_g3_g

0xc7ad,	// (0x0004fa36) list_medium_line_g3_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_g3_t1

0xafdb,	// (0x0004e264) list_medium_line_t2_g3_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t2_g3_g1

0xafdb,	// (0x0004e264) list_medium_line_t2_g3_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t2_g3_g2

0xafdb,	// (0x0004e264) list_medium_line_t2_g3_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00052462) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00052462) list_medium_line_t2_g3_g

0xc7ad,	// (0x0004fa36) list_medium_line_t2_g3_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t2_g3_t1

0xc7ad,	// (0x0004fa36) list_medium_line_t2_g3_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x00052445) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x00052445) list_medium_line_t2_g3_t

0xafdb,	// (0x0004e264) list_medium_line_t3_g3_g1_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t3_g3_g1

0xafdb,	// (0x0004e264) list_medium_line_t3_g3_g2_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t3_g3_g2

0xafdb,	// (0x0004e264) list_medium_line_t3_g3_g3_ParamLimits

0xafdb,	// (0x0004e264) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00052462) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00052462) list_medium_line_t3_g3_g

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g3_t1_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g3_t1

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g3_t2_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g3_t2

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g3_t3_ParamLimits

0xc7ad,	// (0x0004fa36) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00052469) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00052469) list_medium_line_t3_g3_t

0xc7db,	// (0x0004fa64) list_medium_line_right_iconx2_g1

0xc7db,	// (0x0004fa64) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x00052647) list_medium_line_right_iconx2_g

0xcd30,	// (0x0004ffb9) list_medium_line_right_iconx2_t1

0xc7db,	// (0x0004fa64) list_medium_line_t2_right_iconx2_g1

0xc7db,	// (0x0004fa64) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x00052647) list_medium_line_t2_right_iconx2_g

0xcd30,	// (0x0004ffb9) list_medium_line_t2_right_iconx2_t1

0xcd30,	// (0x0004ffb9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc3e,	// (0x00052ec7) list_medium_line_t2_right_iconx2_t

0xcd30,	// (0x0004ffb9) list_medium_line_x4_t4_t1

0xcd30,	// (0x0004ffb9) list_medium_line_x4_t4_t2

0xcd30,	// (0x0004ffb9) list_medium_line_x4_t4_t3

0xcd30,	// (0x0004ffb9) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x00052532) list_medium_line_x4_t4_t

0x8fb1,	// (0x0004c23a) tport_appsw_pane_ParamLimits

0x8fb1,	// (0x0004c23a) tport_appsw_pane

0x8fc8,	// (0x0004c251) tport_contact_pane_ParamLimits

0x8fc8,	// (0x0004c251) tport_contact_pane

0x8fe0,	// (0x0004c269) tport_listscroll_pane_ParamLimits

0x8fe0,	// (0x0004c269) tport_listscroll_pane

0x8ff4,	// (0x0004c27d) cell_tport_appsw_pane_ParamLimits

0x8ff4,	// (0x0004c27d) cell_tport_appsw_pane

0xe2c4,	// (0x0005154d) tport_appsw_pane_g1_ParamLimits

0xe2c4,	// (0x0005154d) tport_appsw_pane_g1

0x9036,	// (0x0004c2bf) tport_contact_pane_g1

0x903f,	// (0x0004c2c8) tport_contact_pane_t1

0x904d,	// (0x0004c2d6) tport_contact_pane_t2

0x0001,

0xfc78,	// (0x00052f01) tport_contact_pane_t

0x905b,	// (0x0004c2e4) list_tport_pane

0x9064,	// (0x0004c2ed) scroll_pane_cp_030

0x9075,	// (0x0004c2fe) cell_tport_appsw_pane_g1

0x9085,	// (0x0004c30e) cell_tport_appsw_pane_t1

0x9093,	// (0x0004c31c) grid_highlight_pane_cp019

0x909b,	// (0x0004c324) list_tport_double_graphic_pane_ParamLimits

0x909b,	// (0x0004c324) list_tport_double_graphic_pane

0xa8af,	// (0x0004db38) list_highlight_pane_cp023_ParamLimits

0xa8af,	// (0x0004db38) list_highlight_pane_cp023

0x90b2,	// (0x0004c33b) list_tport_double_graphic_pane_g1_ParamLimits

0x90b2,	// (0x0004c33b) list_tport_double_graphic_pane_g1

0x90bf,	// (0x0004c348) list_tport_double_graphic_pane_t1_ParamLimits

0x90bf,	// (0x0004c348) list_tport_double_graphic_pane_t1

0x90d4,	// (0x0004c35d) list_tport_double_graphic_pane_t2_ParamLimits

0x90d4,	// (0x0004c35d) list_tport_double_graphic_pane_t2

0x0001,

0xfc84,	// (0x00052f0d) list_tport_double_graphic_pane_t_ParamLimits

0xfc84,	// (0x00052f0d) list_tport_double_graphic_pane_t

0xa832,	// (0x0004dabb) main_cale_note_pane

0x60a6,	// (0x0004932f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x60a6,	// (0x0004932f) cell_vitu2_function_top_wide_pane_cp01

0x8539,	// (0x0004b7c2) wait_bar_pane_cp05_ParamLimits

0xa8af,	// (0x0004db38) listscroll_cmail_pane

0x90e6,	// (0x0004c36f) list_cmail_pane

0x90f6,	// (0x0004c37f) list_cmail_body_pane

0x910d,	// (0x0004c396) list_single_cmail_header_caption_pane

0x912a,	// (0x0004c3b3) list_single_cmail_header_detail_pane_ParamLimits

0x912a,	// (0x0004c3b3) list_single_cmail_header_detail_pane

0x915c,	// (0x0004c3e5) list_single_cmail_header_caption_pane_t1

0x0e80,	// (0x00044109) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e80,	// (0x00044109) list_single_cmail_header_detail_pane_g1

0xba10,	// (0x0004ec99) list_single_cmail_header_detail_pane_g2_ParamLimits

0xba10,	// (0x0004ec99) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc89,	// (0x00052f12) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc89,	// (0x00052f12) list_single_cmail_header_detail_pane_g

0xba1c,	// (0x0004eca5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xba1c,	// (0x0004eca5) list_single_cmail_header_detail_pane_t1

0xba7c,	// (0x0004ed05) list_single_cmail_header_editor_pane_bg_ParamLimits

0xba7c,	// (0x0004ed05) list_single_cmail_header_editor_pane_bg

0x83a3,	// (0x0004b62c) list_cmail_body_pane_g1

0x9180,	// (0x0004c409) list_cmail_body_pane_t1

0x61a8,	// (0x00049431) list_single_cmail_header_editor_pane_bg_g1

0xc9f0,	// (0x0004fc79) list_single_cmail_header_editor_pane_bg_g1_copy1

0x61b8,	// (0x00049441) list_single_cmail_header_editor_pane_bg_g1_copy2

0x61b0,	// (0x00049439) list_single_cmail_header_editor_pane_bg_g1_copy3

0x6b66,	// (0x00049def) list_single_cmail_header_editor_pane_bg_g1_copy4

0x61d8,	// (0x00049461) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x61c8,	// (0x00049451) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x61d0,	// (0x00049459) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc9d0,	// (0x0004fc59) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x918e,	// (0x0004c417) calenote_gesture_pane_ParamLimits

0x918e,	// (0x0004c417) calenote_gesture_pane

0x91ae,	// (0x0004c437) calenote_window_pane_ParamLimits

0x91ae,	// (0x0004c437) calenote_window_pane

0x91ca,	// (0x0004c453) popup_note_window_cp01

0x91d3,	// (0x0004c45c) calenote_swipe_1_pane_ParamLimits

0x91d3,	// (0x0004c45c) calenote_swipe_1_pane

0x8cb8,	// (0x0004bf41) calenote_swipe_2_pane_ParamLimits

0x8cb8,	// (0x0004bf41) calenote_swipe_2_pane

0x8bea,	// (0x0004be73) calenote_swipe_1_pane_g1_ParamLimits

0x8bea,	// (0x0004be73) calenote_swipe_1_pane_g1

0x8bf7,	// (0x0004be80) calenote_swipe_1_pane_g2_ParamLimits

0x8bf7,	// (0x0004be80) calenote_swipe_1_pane_g2

0x0001,

0xfc26,	// (0x00052eaf) calenote_swipe_1_pane_g_ParamLimits

0xfc26,	// (0x00052eaf) calenote_swipe_1_pane_g

0x91f1,	// (0x0004c47a) calenote_swipe_1_pane_t1_ParamLimits

0x91f1,	// (0x0004c47a) calenote_swipe_1_pane_t1

0x8bea,	// (0x0004be73) calenote_swipe_2_pane_g1_ParamLimits

0x8bea,	// (0x0004be73) calenote_swipe_2_pane_g1

0x9210,	// (0x0004c499) calenote_swipe_2_pane_g2_ParamLimits

0x9210,	// (0x0004c499) calenote_swipe_2_pane_g2

0x0001,

0xfc95,	// (0x00052f1e) calenote_swipe_2_pane_g_ParamLimits

0xfc95,	// (0x00052f1e) calenote_swipe_2_pane_g

0x921c,	// (0x0004c4a5) calenote_swipe_2_pane_t1_ParamLimits

0x921c,	// (0x0004c4a5) calenote_swipe_2_pane_t1

0xa832,	// (0x0004dabb) main_mup_navstr_pane

0x4e23,	// (0x000480ac) main_mup3_pane_t7_ParamLimits

0x4e23,	// (0x000480ac) main_mup3_pane_t7

0xb473,	// (0x0004e6fc) main_mp4_pane_g6_ParamLimits

0xb473,	// (0x0004e6fc) main_mp4_pane_g6

0xb633,	// (0x0004e8bc) main_image3_pane_t4_ParamLimits

0xb633,	// (0x0004e8bc) main_image3_pane_t4

0x923b,	// (0x0004c4c4) popup_navstr_preview_pane_ParamLimits

0x923b,	// (0x0004c4c4) popup_navstr_preview_pane

0x924b,	// (0x0004c4d4) scroll_navstr_pane_ParamLimits

0x924b,	// (0x0004c4d4) scroll_navstr_pane

0xa832,	// (0x0004dabb) bg_popup_preview_window_pane_cp04

0xba9b,	// (0x0004ed24) popup_navstr_preview_pane_t1

0x925f,	// (0x0004c4e8) scroll_navstr_pane_g1_ParamLimits

0x925f,	// (0x0004c4e8) scroll_navstr_pane_g1

0x9273,	// (0x0004c4fc) scroll_navstr_pane_t1_ParamLimits

0x9273,	// (0x0004c4fc) scroll_navstr_pane_t1

0x91e8,	// (0x0004c471) bg_button_pane_cp014

0x91e8,	// (0x0004c471) bg_button_pane_cp030

0x0c5d,	// (0x00043ee6) list_double_fisheye_pane_g4_ParamLimits

0x0c5d,	// (0x00043ee6) list_double_fisheye_pane_g4

0x0c69,	// (0x00043ef2) list_double_fisheye_pane_g5_ParamLimits

0x0c69,	// (0x00043ef2) list_double_fisheye_pane_g5

0xe993,	// (0x00051c1c) sp_fs_scroll_pane_cp03

0x8e25,	// (0x0004c0ae) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x8e31,	// (0x0004c0ba) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc43,	// (0x00052ecc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8e71,	// (0x0004c0fa) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x90ee,	// (0x0004c377) sp_fs_scroll_pane_cp02

0xc701,	// (0x0004f98a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc701,	// (0x0004f98a) popup_sp_fs_calendar_preview_list_single_pane

0xa832,	// (0x0004dabb) main_cam6_pano_pane

0xa8af,	// (0x0004db38) main_mup3_pane_ParamLimits

0xa832,	// (0x0004dabb) main_phacti_pane

0x840a,	// (0x0004b693) bg_button_pane_cp11

0x8424,	// (0x0004b6ad) main_mobtv_info_pane_g2_ParamLimits

0x8424,	// (0x0004b6ad) main_mobtv_info_pane_g2

0x0001,

0xfba3,	// (0x00052e2c) main_mobtv_info_pane_g_ParamLimits

0xfba3,	// (0x00052e2c) main_mobtv_info_pane_g

0x86a7,	// (0x0004b930) sc_clock_pane_t5_ParamLimits

0x86a7,	// (0x0004b930) sc_clock_pane_t5

0x8900,	// (0x0004bb89) main_radioblah_pane_g1_ParamLimits

0x8946,	// (0x0004bbcf) main_radioblah_pane_t3_ParamLimits

0x8946,	// (0x0004bbcf) main_radioblah_pane_t3

0x895e,	// (0x0004bbe7) main_radioblah_pane_t4_ParamLimits

0x895e,	// (0x0004bbe7) main_radioblah_pane_t4

0x898c,	// (0x0004bc15) main_radioblah_text_pane_ParamLimits

0x898c,	// (0x0004bc15) main_radioblah_text_pane

0x899e,	// (0x0004bc27) main_radioblah_info_pane_g1_ParamLimits

0x8a71,	// (0x0004bcfa) main_radioblah_info_pane_t4_ParamLimits

0x8a71,	// (0x0004bcfa) main_radioblah_info_pane_t4

0xa8af,	// (0x0004db38) main_sp_fs_calendar_pane

0x928a,	// (0x0004c513) main_phacti_pane_g1

0x9292,	// (0x0004c51b) phacti_note_pane_ParamLimits

0x9292,	// (0x0004c51b) phacti_note_pane

0xbab2,	// (0x0004ed3b) phacti_term_pane_ParamLimits

0xbab2,	// (0x0004ed3b) phacti_term_pane

0xbac7,	// (0x0004ed50) phacti_note_pane_t1_ParamLimits

0xbac7,	// (0x0004ed50) phacti_note_pane_t1

0xbade,	// (0x0004ed67) phacti_term_pane_g1

0xbae6,	// (0x0004ed6f) phacti_term_pane_t1_ParamLimits

0xbae6,	// (0x0004ed6f) phacti_term_pane_t1

0xbb10,	// (0x0004ed99) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbb18,	// (0x0004eda1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9f,	// (0x00052f28) popup_sp_fs_calendar_preview_list_single_pane_g

0xbb20,	// (0x0004eda9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xbb20,	// (0x0004eda9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xbb36,	// (0x0004edbf) aid_popup_sp_fs_bg_corner_pane

0xc7db,	// (0x0004fa64) popup_sp_fs_calendar_preview_bg_pane_g1

0xa832,	// (0x0004dabb) popup_sp_fs_calendar_preview_bg_pane

0xbb3e,	// (0x0004edc7) popup_sp_fs_calendar_preview_list_pane

0xe2e6,	// (0x0005156f) bg_main_sp_fs_cale_pane_ParamLimits

0xe2e6,	// (0x0005156f) bg_main_sp_fs_cale_pane

0xbb4f,	// (0x0004edd8) listscroll_cale_mrui_pane_ParamLimits

0xbb4f,	// (0x0004edd8) listscroll_cale_mrui_pane

0xbb64,	// (0x0004eded) listscroll_sp_fs_schedule_track_pane

0xbb6d,	// (0x0004edf6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xbb6d,	// (0x0004edf6) main_sp_fs_ctrlbar_pane_cp01

0xbb80,	// (0x0004ee09) main_sp_fs_ribbon_pane

0xbb88,	// (0x0004ee11) popup_sp_fs_cale_preview_window

0x9307,	// (0x0004c590) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9307,	// (0x0004c590) list_single_sp_fs_schedule_track_pane

0xa8af,	// (0x0004db38) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa8af,	// (0x0004db38) bg_sp_fs_highlight_list_pane_cp03

0x931b,	// (0x0004c5a4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x931b,	// (0x0004c5a4) list_single_sp_fs_schedule_track_pane_g1

0x9327,	// (0x0004c5b0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9327,	// (0x0004c5b0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca4,	// (0x00052f2d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca4,	// (0x00052f2d) list_single_sp_fs_schedule_track_pane_g

0x9333,	// (0x0004c5bc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9333,	// (0x0004c5bc) list_single_sp_fs_schedule_track_pane_t1

0x9355,	// (0x0004c5de) sp_fs_schedule_track_pane_ParamLimits

0x9355,	// (0x0004c5de) sp_fs_schedule_track_pane

0xbb9a,	// (0x0004ee23) sp_fs_schedule_track_pane_g1

0xbba2,	// (0x0004ee2b) sp_fs_schedule_track_pane_g2

0xbbaa,	// (0x0004ee33) sp_fs_schedule_track_pane_g3

0xbbb2,	// (0x0004ee3b) sp_fs_schedule_track_pane_g4

0xbbba,	// (0x0004ee43) sp_fs_schedule_track_pane_g5

0x0004,

0xfca9,	// (0x00052f32) sp_fs_schedule_track_pane_g

0x61a8,	// (0x00049431) bg_sp_fs_schedule_viewer_highlight_g1

0xc9f0,	// (0x0004fc79) bg_sp_fs_schedule_viewer_highlight_g2

0x61b0,	// (0x00049439) bg_sp_fs_schedule_viewer_highlight_g3

0x61b8,	// (0x00049441) bg_sp_fs_schedule_viewer_highlight_g4

0x6b66,	// (0x00049def) bg_sp_fs_schedule_viewer_highlight_g5

0x61c8,	// (0x00049451) bg_sp_fs_schedule_viewer_highlight_g6

0x61d0,	// (0x00049459) bg_sp_fs_schedule_viewer_highlight_g7

0x61d8,	// (0x00049461) bg_sp_fs_schedule_viewer_highlight_g8

0xc9d0,	// (0x0004fc59) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb4,	// (0x00052f3d) bg_sp_fs_schedule_viewer_highlight_g

0xa832,	// (0x0004dabb) bg_main_sp_fs_ribbon_pane

0x936a,	// (0x0004c5f3) main_sp_fs_ribbon_pane_g1

0xbbc2,	// (0x0004ee4b) main_sp_fs_ribbon_pane_t1

0x9373,	// (0x0004c5fc) main_sp_fs_ribbon_pane_t2

0xbbd1,	// (0x0004ee5a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc7,	// (0x00052f50) main_sp_fs_ribbon_pane_t

0xbbe0,	// (0x0004ee69) main_sp_fs_ribbon_scheduler_pane

0xbbe8,	// (0x0004ee71) bg_main_sp_fs_ribbon_pane_g1

0xbbf1,	// (0x0004ee7a) bg_main_sp_fs_ribbon_pane_g2

0xbbfa,	// (0x0004ee83) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcce,	// (0x00052f57) bg_main_sp_fs_ribbon_pane_g

0xbc02,	// (0x0004ee8b) main_sp_fs_ribbon_scheduler_pane_g1

0xbc0b,	// (0x0004ee94) main_sp_fs_ribbon_scheduler_pane_g2

0xbc14,	// (0x0004ee9d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd5,	// (0x00052f5e) main_sp_fs_ribbon_scheduler_pane_g

0xbc1d,	// (0x0004eea6) list_cale_mrui_pane

0x9382,	// (0x0004c60b) sp_fs_scroll_pane_cp07_ParamLimits

0x9382,	// (0x0004c60b) sp_fs_scroll_pane_cp07

0x939e,	// (0x0004c627) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x939e,	// (0x0004c627) bg_sp_fs_schedule_viewer_highlight

0xbc2a,	// (0x0004eeb3) list_single_sp_fs_schedule_track_pane_cp01

0xbc32,	// (0x0004eebb) list_sp_fs_schedule_track_pane

0xbc3a,	// (0x0004eec3) sp_fs_scroll_pane_cp06_ParamLimits

0xbc3a,	// (0x0004eec3) sp_fs_scroll_pane_cp06

0xc7db,	// (0x0004fa64) bgmain_sp_fs_calendar_pane_g1

0x0e98,	// (0x00044121) list_single_cale_mrui_pane_ParamLimits

0x0e98,	// (0x00044121) list_single_cale_mrui_pane

0xbc4c,	// (0x0004eed5) list_single_cale_mrui_row_pane_ParamLimits

0xbc4c,	// (0x0004eed5) list_single_cale_mrui_row_pane

0xbc59,	// (0x0004eee2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xbc59,	// (0x0004eee2) list_single_cale_mrui_row_pane_g1

0xbc9e,	// (0x0004ef27) list_single_cale_mrui_row_pane_t1_ParamLimits

0xbc9e,	// (0x0004ef27) list_single_cale_mrui_row_pane_t1

0x0ebb,	// (0x00044144) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ebb,	// (0x00044144) list_single_cale_mrui_row_pane_t2

0xbcb0,	// (0x0004ef39) list_single_cale_mrui_row_pane_t3_ParamLimits

0xbcb0,	// (0x0004ef39) list_single_cale_mrui_row_pane_t3

0xbcdf,	// (0x0004ef68) list_single_cale_mrui_row_pane_t4_ParamLimits

0xbcdf,	// (0x0004ef68) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce3,	// (0x00052f6c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce3,	// (0x00052f6c) list_single_cale_mrui_row_pane_t

0x0f21,	// (0x000441aa) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f21,	// (0x000441aa) list_single_cmail_header_editor_pane_bg_cp01

0x0f45,	// (0x000441ce) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f45,	// (0x000441ce) list_single_cmail_header_editor_pane_bg_cp02

0x93b0,	// (0x0004c639) main_radioblah_text_pane_t1_ParamLimits

0x93b0,	// (0x0004c639) main_radioblah_text_pane_t1

0xbd0e,	// (0x0004ef97) cam6_indi_pane_cp01

0xbd16,	// (0x0004ef9f) cam6_mode_pane_cp01

0xbd1e,	// (0x0004efa7) cam6_pano_pane

0xbd27,	// (0x0004efb0) cam6_zoom_pane_cp01

0xbd31,	// (0x0004efba) cam6_pano_image_pane

0xbd3a,	// (0x0004efc3) cam6_pano_pane_g1

0x83a3,	// (0x0004b62c) cam6_pano_pane_g2

0xbd43,	// (0x0004efcc) cam6_pano_pane_g3

0xbd4c,	// (0x0004efd5) cam6_pano_pane_g4

0xee2b,	// (0x000520b4) cam6_pano_pane_g5

0xbd55,	// (0x0004efde) cam6_pano_pane_g6

0xbd5d,	// (0x0004efe6) cam6_pano_pane_g7

0xbd65,	// (0x0004efee) cam6_pano_pane_g8

0xbd6e,	// (0x0004eff7) cam6_pano_pane_g9

0x0008,

0xfcec,	// (0x00052f75) cam6_pano_pane_g

0xa832,	// (0x0004dabb) main_browser_tag_pane

0xba93,	// (0x0004ed1c) grid_navstr_albumart_pane

0xbd79,	// (0x0004f002) cell_navstr_albumart_pane_ParamLimits

0xbd79,	// (0x0004f002) cell_navstr_albumart_pane

0xbd95,	// (0x0004f01e) cell_navstr_albumart_pane_g1

0xe338,	// (0x000515c1) cell_navstr_albumart_pane_g2

0xe348,	// (0x000515d1) cell_navstr_albumart_pane_g3

0xe340,	// (0x000515c9) cell_navstr_albumart_pane_g4

0x0003,

0xfcff,	// (0x00052f88) cell_navstr_albumart_pane_g

0x93cb,	// (0x0004c654) bt_list_pane_ParamLimits

0x93cb,	// (0x0004c654) bt_list_pane

0x93e1,	// (0x0004c66a) bt_list_pane_t1

0x93f0,	// (0x0004c679) bt_list_pane_t2

0x0001,

0xfd08,	// (0x00052f91) bt_list_pane_t

0xa832,	// (0x0004dabb) main_cale_prevew_pane

0x93ff,	// (0x0004c688) popup_cale_preview_window_ParamLimits

0x93ff,	// (0x0004c688) popup_cale_preview_window

0xa8af,	// (0x0004db38) bg_popup_preview_window_pane_cp05_ParamLimits

0xa8af,	// (0x0004db38) bg_popup_preview_window_pane_cp05

0xbd9d,	// (0x0004f026) list_cale_preview_pane_ParamLimits

0xbd9d,	// (0x0004f026) list_cale_preview_pane

0x941c,	// (0x0004c6a5) list_double_cale_preview_pane_ParamLimits

0x941c,	// (0x0004c6a5) list_double_cale_preview_pane

0x9430,	// (0x0004c6b9) list_single_cale_preview_pane_ParamLimits

0x9430,	// (0x0004c6b9) list_single_cale_preview_pane

0x9448,	// (0x0004c6d1) list_single_cale_preview_pane_g1

0x9450,	// (0x0004c6d9) list_single_cale_preview_pane_t1_ParamLimits

0x9450,	// (0x0004c6d9) list_single_cale_preview_pane_t1

0x9465,	// (0x0004c6ee) list_double_cale_preview_pane_g1

0x946d,	// (0x0004c6f6) list_double_cale_preview_pane_t1_ParamLimits

0x946d,	// (0x0004c6f6) list_double_cale_preview_pane_t1

0x9482,	// (0x0004c70b) list_double_cale_preview_pane_t2_ParamLimits

0x9482,	// (0x0004c70b) list_double_cale_preview_pane_t2

0x0001,

0xfd0d,	// (0x00052f96) list_double_cale_preview_pane_t_ParamLimits

0xfd0d,	// (0x00052f96) list_double_cale_preview_pane_t

0xa832,	// (0x0004dabb) main_ezdial_pane

0xa8af,	// (0x0004db38) main_sp_fs_email_pane_ParamLimits

0x8d8a,	// (0x0004c013) cmail_ddmenu_btn01_pane_ParamLimits

0x8d8a,	// (0x0004c013) cmail_ddmenu_btn01_pane

0x8d9d,	// (0x0004c026) cmail_ddmenu_btn02_pane_ParamLimits

0x8d9d,	// (0x0004c026) cmail_ddmenu_btn02_pane

0x8dfa,	// (0x0004c083) cmail_ddmenu_btn03_pane_ParamLimits

0x8dfa,	// (0x0004c083) cmail_ddmenu_btn03_pane

0x8eb0,	// (0x0004c139) main_sp_fs_ctrlbar_pane_ParamLimits

0x8eef,	// (0x0004c178) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x90f6,	// (0x0004c37f) list_cmail_body_pane_ParamLimits

0x916a,	// (0x0004c3f3) bg_button_pane_cp12

0x9173,	// (0x0004c3fc) list_single_cmail_header_detail_pane_g3_ParamLimits

0x9173,	// (0x0004c3fc) list_single_cmail_header_detail_pane_g3

0xba58,	// (0x0004ece1) list_single_cmail_header_detail_pane_t2_ParamLimits

0xba58,	// (0x0004ece1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc90,	// (0x00052f19) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc90,	// (0x00052f19) list_single_cmail_header_detail_pane_t

0xbafb,	// (0x0004ed84) phacti_term_pane_t2_ParamLimits

0xbafb,	// (0x0004ed84) phacti_term_pane_t2

0x0001,

0xfc9a,	// (0x00052f23) phacti_term_pane_t_ParamLimits

0xfc9a,	// (0x00052f23) phacti_term_pane_t

0xbda9,	// (0x0004f032) aid_size_list_single_double

0x949a,	// (0x0004c723) popup_ezdial_listscroll_window

0x94b6,	// (0x0004c73f) popup_number_entry_window_cp01

0xc7a5,	// (0x0004fa2e) bg_popup_call_pane_cp09

0xbdb5,	// (0x0004f03e) ezdial_list_pane

0xbdbd,	// (0x0004f046) scroll_pane_cp23

0xe2e6,	// (0x0005156f) bg_button_pane_cp028_ParamLimits

0xe2e6,	// (0x0005156f) bg_button_pane_cp028

0x94c4,	// (0x0004c74d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x94c4,	// (0x0004c74d) cmail_ddmenu_btn01_pane_g1

0x94d3,	// (0x0004c75c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x94d3,	// (0x0004c75c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd12,	// (0x00052f9b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd12,	// (0x00052f9b) cmail_ddmenu_btn01_pane_g

0xbdc5,	// (0x0004f04e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xbdc5,	// (0x0004f04e) cmail_ddmenu_btn01_pane_t1

0xe2e6,	// (0x0005156f) bg_button_pane_cp029_ParamLimits

0xe2e6,	// (0x0005156f) bg_button_pane_cp029

0x94e9,	// (0x0004c772) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x94e9,	// (0x0004c772) cmail_ddmenu_btn02_pane_g1

0x9504,	// (0x0004c78d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9504,	// (0x0004c78d) cmail_ddmenu_btn02_pane_t1

0xa8af,	// (0x0004db38) bg_button_pane_cp031_ParamLimits

0xa8af,	// (0x0004db38) bg_button_pane_cp031

0x94e9,	// (0x0004c772) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x94e9,	// (0x0004c772) cmail_ddmenu_btn03_pane_g1

0x9504,	// (0x0004c78d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9504,	// (0x0004c78d) cmail_ddmenu_btn03_pane_t1

0x5842,	// (0x00048acb) cell_dialer2_keypad_pane_t1_ParamLimits

0x585c,	// (0x00048ae5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x585c,	// (0x00048ae5) cell_dialer2_keypad_pane_t1_copy1

0x7fa7,	// (0x0004b230) ncimui_group_button_pane

0xa8af,	// (0x0004db38) main_sp_fs_calendar_pane_ParamLimits

0x910d,	// (0x0004c396) list_single_cmail_header_caption_pane_ParamLimits

0xbb46,	// (0x0004edcf) aid_recal_txt_sm_pane

0xa832,	// (0x0004dabb) mian_recal_day_pane

0xbb88,	// (0x0004ee11) popup_sp_fs_cale_preview_window_ParamLimits

0xbddb,	// (0x0004f064) list_recal_day_pane

0xbe1e,	// (0x0004f0a7) list_single_recal_day_pane_ParamLimits

0xbe1e,	// (0x0004f0a7) list_single_recal_day_pane

0xbe30,	// (0x0004f0b9) list_single_recal_day_pane_g1_ParamLimits

0xbe30,	// (0x0004f0b9) list_single_recal_day_pane_g1

0xbe3c,	// (0x0004f0c5) list_single_recal_day_pane_g2_ParamLimits

0xbe3c,	// (0x0004f0c5) list_single_recal_day_pane_g2

0xbe48,	// (0x0004f0d1) list_single_recal_day_pane_g3_ParamLimits

0xbe48,	// (0x0004f0d1) list_single_recal_day_pane_g3

0x0f63,	// (0x000441ec) list_single_recal_day_pane_g4_ParamLimits

0x0f63,	// (0x000441ec) list_single_recal_day_pane_g4

0xbe54,	// (0x0004f0dd) list_single_recal_day_pane_g5_ParamLimits

0xbe54,	// (0x0004f0dd) list_single_recal_day_pane_g5

0xbe60,	// (0x0004f0e9) list_single_recal_day_pane_g6_ParamLimits

0xbe60,	// (0x0004f0e9) list_single_recal_day_pane_g6

0x0004,

0xfd21,	// (0x00052faa) list_single_recal_day_pane_g_ParamLimits

0xfd21,	// (0x00052faa) list_single_recal_day_pane_g

0xbe74,	// (0x0004f0fd) list_single_recal_day_pane_t1

0xbe86,	// (0x0004f10f) list_single_recal_day_pane_t2

0x0001,

0xfd2c,	// (0x00052fb5) list_single_recal_day_pane_t

0x952b,	// (0x0004c7b4) ncimui_query_button_pane_ParamLimits

0x952b,	// (0x0004c7b4) ncimui_query_button_pane

0x953b,	// (0x0004c7c4) ncimui_query_button_pane_t1_ParamLimits

0x953b,	// (0x0004c7c4) ncimui_query_button_pane_t1

0xbe98,	// (0x0004f121) ncimui_query_button_pane_t2_ParamLimits

0xbe98,	// (0x0004f121) ncimui_query_button_pane_t2

0x0001,

0xfd31,	// (0x00052fba) ncimui_query_button_pane_t_ParamLimits

0xfd31,	// (0x00052fba) ncimui_query_button_pane_t

0x954e,	// (0x0004c7d7) query_button_pane_ParamLimits

0x954e,	// (0x0004c7d7) query_button_pane

0xa832,	// (0x0004dabb) bg_button_pane_cp0028

0xbeab,	// (0x0004f134) query_button_pane_t1

0x4104,	// (0x0004738d) main_tport_pane_ParamLimits

0x8f70,	// (0x0004c1f9) bg_popup_window_pane_cp01_ParamLimits

0x8f70,	// (0x0004c1f9) bg_popup_window_pane_cp01

0x8f89,	// (0x0004c212) heading_pane_cp08_ParamLimits

0x8f89,	// (0x0004c212) heading_pane_cp08

0x8f9c,	// (0x0004c225) heading_pane_cp07_ParamLimits

0x8f9c,	// (0x0004c225) heading_pane_cp07

0x9075,	// (0x0004c2fe) cell_tport_appsw_pane_g2

0x0002,

0xfc7d,	// (0x00052f06) cell_tport_appsw_pane_g

0x07c4,	// (0x00043a4d) input_candi_list_open_g1

0xcbdc,	// (0x0004fe65) list_cale_time_pane_g6_ParamLimits

0xcbdc,	// (0x0004fe65) list_cale_time_pane_g6

0x47a6,	// (0x00047a2f) aid_size_touch_calib_1_ParamLimits

0x47a6,	// (0x00047a2f) aid_size_touch_calib_1

0x47b8,	// (0x00047a41) aid_size_touch_calib_2_ParamLimits

0x47b8,	// (0x00047a41) aid_size_touch_calib_2

0x47d0,	// (0x00047a59) aid_size_touch_calib_3_ParamLimits

0x47d0,	// (0x00047a59) aid_size_touch_calib_3

0x47ee,	// (0x00047a77) aid_size_touch_calib_4_ParamLimits

0x47ee,	// (0x00047a77) aid_size_touch_calib_4

0x4806,	// (0x00047a8f) main_touch_calib_button_group_pane_ParamLimits

0x4806,	// (0x00047a8f) main_touch_calib_button_group_pane

0x481e,	// (0x00047aa7) main_touch_calib_pane_g1_ParamLimits

0x4830,	// (0x00047ab9) main_touch_calib_pane_g2_ParamLimits

0x4842,	// (0x00047acb) main_touch_calib_pane_g3_ParamLimits

0x4854,	// (0x00047add) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x00052948) main_touch_calib_pane_g_ParamLimits

0x4866,	// (0x00047aef) main_touch_calib_pane_t1_ParamLimits

0x4880,	// (0x00047b09) main_touch_calib_pane_t2_ParamLimits

0x489a,	// (0x00047b23) main_touch_calib_pane_t3_ParamLimits

0x48ae,	// (0x00047b37) main_touch_calib_pane_t4_ParamLimits

0x48c4,	// (0x00047b4d) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x00052951) main_touch_calib_pane_t_ParamLimits

0xebde,	// (0x00051e67) list_single_fp_cale_pane_g3_ParamLimits

0xebde,	// (0x00051e67) list_single_fp_cale_pane_g3

0xa8af,	// (0x0004db38) bg_button_pane_cp012_ParamLimits

0xa8af,	// (0x0004db38) bg_vkb2_func_pane_cp03_ParamLimits

0x6b22,	// (0x00049dab) cell_vitu2_function_top_pane_g1_ParamLimits

0xa8af,	// (0x0004db38) bg_vkb2_func_pane_cp04_ParamLimits

0x7f32,	// (0x0004b1bb) main_ncimui_button_group_pane_ParamLimits

0x7f32,	// (0x0004b1bb) main_ncimui_button_group_pane

0x7f92,	// (0x0004b21b) main_ncimui_pane_t3_ParamLimits

0x7f92,	// (0x0004b21b) main_ncimui_pane_t3

0xbaa9,	// (0x0004ed32) phacti_button_group_pane

0xbda9,	// (0x0004f032) aid_size_list_single_double_ParamLimits

0x949a,	// (0x0004c723) popup_ezdial_listscroll_window_ParamLimits

0x94b6,	// (0x0004c73f) popup_number_entry_window_cp01_ParamLimits

0x9561,	// (0x0004c7ea) phacti_button_pane_ParamLimits

0x9561,	// (0x0004c7ea) phacti_button_pane

0xa832,	// (0x0004dabb) bg_button_pane_cp14

0xbeb9,	// (0x0004f142) phacti_button_pane_t1

0x9572,	// (0x0004c7fb) main_touch_calib_button_pane_ParamLimits

0x9572,	// (0x0004c7fb) main_touch_calib_button_pane

0xb06f,	// (0x0004e2f8) bg_button_pane_cp18_ParamLimits

0xb06f,	// (0x0004e2f8) bg_button_pane_cp18

0xbec7,	// (0x0004f150) main_touch_calib_button_pane_t1_ParamLimits

0xbec7,	// (0x0004f150) main_touch_calib_button_pane_t1

0xbedd,	// (0x0004f166) main_touch_calib_button_pane_t2_ParamLimits

0xbedd,	// (0x0004f166) main_touch_calib_button_pane_t2

0x0001,

0xfd36,	// (0x00052fbf) main_touch_calib_button_pane_t_ParamLimits

0xfd36,	// (0x00052fbf) main_touch_calib_button_pane_t

0xa832,	// (0x0004dabb) cell_ncimui_button_pane

0xa832,	// (0x0004dabb) bg_button_pane_cp032

0xbefb,	// (0x0004f184) cell_ncimui_button_pane_t1

0xb611,	// (0x0004e89a) image3_infobar_pane_ParamLimits

0xb611,	// (0x0004e89a) image3_infobar_pane

0x86d3,	// (0x0004b95c) fs_bigclock_status_pane_ParamLimits

0x86d3,	// (0x0004b95c) fs_bigclock_status_pane

0x86e0,	// (0x0004b969) main_fs_bigclock_clock_pane_ParamLimits

0x86e0,	// (0x0004b969) main_fs_bigclock_clock_pane

0x8712,	// (0x0004b99b) main_fs_bigclock_indi_pane_ParamLimits

0x8712,	// (0x0004b99b) main_fs_bigclock_indi_pane

0x8752,	// (0x0004b9db) main_fs_bigclock_swipe_pane_ParamLimits

0x8752,	// (0x0004b9db) main_fs_bigclock_swipe_pane

0xa832,	// (0x0004dabb) main_fs_clock_dumped_data

0x879e,	// (0x0004ba27) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x879e,	// (0x0004ba27) list_single_fs_bigclock_indicator_pane_g1

0x87b7,	// (0x0004ba40) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x87b7,	// (0x0004ba40) list_single_fs_bigclock_indicator_pane_g2

0x87d1,	// (0x0004ba5a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x87d1,	// (0x0004ba5a) list_single_fs_bigclock_indicator_pane_g3

0x87eb,	// (0x0004ba74) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x87eb,	// (0x0004ba74) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd7,	// (0x00052e60) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd7,	// (0x00052e60) list_single_fs_bigclock_indicator_pane_g

0x881a,	// (0x0004baa3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x881a,	// (0x0004baa3) list_single_fs_bigclock_indicator_pane_t1

0x8842,	// (0x0004bacb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8842,	// (0x0004bacb) list_single_fs_bigclock_indicator_pane_t2

0x886a,	// (0x0004baf3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x886a,	// (0x0004baf3) list_single_fs_bigclock_indicator_pane_t3

0x8892,	// (0x0004bb1b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8892,	// (0x0004bb1b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe2,	// (0x00052e6b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe2,	// (0x00052e6b) list_single_fs_bigclock_indicator_pane_t

0xbf09,	// (0x0004f192) image3_infobar_fav_pane_ParamLimits

0xbf09,	// (0x0004f192) image3_infobar_fav_pane

0xbf19,	// (0x0004f1a2) image3_infobar_loc_pane_ParamLimits

0xbf19,	// (0x0004f1a2) image3_infobar_loc_pane

0xbf2f,	// (0x0004f1b8) image3_infobar_time_pane_ParamLimits

0xbf2f,	// (0x0004f1b8) image3_infobar_time_pane

0xc7db,	// (0x0004fa64) image3_infobar_time_pane_g1

0xbf3f,	// (0x0004f1c8) image3_infobar_time_pane_t1

0xc7db,	// (0x0004fa64) image3_infobar_loc_pane_g1

0xbf4d,	// (0x0004f1d6) image3_infobar_loc_pane_g2

0x0001,

0xfd3b,	// (0x00052fc4) image3_infobar_loc_pane_g

0xbf55,	// (0x0004f1de) image3_infobar_loc_pane_t1

0xc7db,	// (0x0004fa64) image3_infobar_fav_pane_g1

0xbf63,	// (0x0004f1ec) image3_infobar_fav_pane_g2

0x0001,

0xfd40,	// (0x00052fc9) image3_infobar_fav_pane_g

0xbf6b,	// (0x0004f1f4) fs_bigclock_status_battery_pane

0xbf74,	// (0x0004f1fd) fs_bigclock_status_signal_pane

0xbf7d,	// (0x0004f206) fs_bigclock_status_title_pane

0xbf86,	// (0x0004f20f) fs_bigclock_status_signal_pane_g1

0xbf8f,	// (0x0004f218) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd45,	// (0x00052fce) fs_bigclock_status_signal_pane_g

0xbf97,	// (0x0004f220) fs_bigclock_status_battery_pane_g1

0xbfa0,	// (0x0004f229) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd4a,	// (0x00052fd3) fs_bigclock_status_battery_pane_g

0xbfa8,	// (0x0004f231) fs_bigclock_status_title_pane_t1

0x9587,	// (0x0004c810) main_fs_bigclock_clock_pane_g1

0x9587,	// (0x0004c810) main_fs_bigclock_clock_pane_g2

0x959a,	// (0x0004c823) main_fs_bigclock_clock_pane_g3

0x959a,	// (0x0004c823) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4f,	// (0x00052fd8) main_fs_bigclock_clock_pane_g

0x95b1,	// (0x0004c83a) main_fs_bigclock_clock_pane_t1

0x95c7,	// (0x0004c850) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd58,	// (0x00052fe1) main_fs_bigclock_clock_pane_t

0xbfb6,	// (0x0004f23f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xbfb6,	// (0x0004f23f) list_single_fs_bigclock_indicator_pane

0xbfc7,	// (0x0004f250) list_single_fs_bigclock_pane_ParamLimits

0xbfc7,	// (0x0004f250) list_single_fs_bigclock_pane

0xbfed,	// (0x0004f276) main_fs_bigclock_indicator_pane_t1

0xbffc,	// (0x0004f285) list_single_fs_bigclock_pane_g1

0xc004,	// (0x0004f28d) list_single_fs_bigclock_pane_t1

0xc7db,	// (0x0004fa64) main_fs_bigclock_swipe_pane_g1

0xc047,	// (0x0004f2d0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd69,	// (0x00052ff2) main_fs_bigclock_swipe_pane_g

0xc04f,	// (0x0004f2d8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc04f,	// (0x0004f2d8) main_fs_bigclock_swipe_pane_t1

0x30a2,	// (0x0004632b) call_type_pane_ParamLimits

0xa832,	// (0x0004dabb) main_btmg_pane

0xbc85,	// (0x0004ef0e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xbc85,	// (0x0004ef0e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcdc,	// (0x00052f65) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcdc,	// (0x00052f65) list_single_cale_mrui_row_pane_g

0xbe04,	// (0x0004f08d) list_recal_vselct_arw_lo_pane

0xbe0c,	// (0x0004f095) list_recal_vselct_arw_up_pane

0xbe14,	// (0x0004f09d) list_recal_vselct_pane

0x9629,	// (0x0004c8b2) btmg_button_pane

0x9633,	// (0x0004c8bc) main_btmg_pane_g1

0xa832,	// (0x0004dabb) bg_button_pane_cp044

0xc06c,	// (0x0004f2f5) btmg_button_pane_t1

0xe48a,	// (0x00051713) aid_listscroll_gen

0xa8af,	// (0x0004db38) main_cntbar_detail_pane

0x90e6,	// (0x0004c36f) list_cmail_folder_pane

0xe993,	// (0x00051c1c) sp_fs_scroll_pane_cp03_ParamLimits

0x0f7b,	// (0x00044204) list_single_fs_dyc_pane_cp01_ParamLimits

0x0f7b,	// (0x00044204) list_single_fs_dyc_pane_cp01

0xc07a,	// (0x0004f303) aid_size_cmail_indent

0xc083,	// (0x0004f30c) list_single_dyc_row_pane_cp01

0x9671,	// (0x0004c8fa) cntbar_detail_list_pane_ParamLimits

0x9671,	// (0x0004c8fa) cntbar_detail_list_pane

0x96c3,	// (0x0004c94c) main_cntbar_detail_cont_pane_ParamLimits

0x96c3,	// (0x0004c94c) main_cntbar_detail_cont_pane

0xe993,	// (0x00051c1c) scroll_pane_cp032_ParamLimits

0xe993,	// (0x00051c1c) scroll_pane_cp032

0x96d7,	// (0x0004c960) cntbar_detail_list_event_pane_ParamLimits

0x96d7,	// (0x0004c960) cntbar_detail_list_event_pane

0x9683,	// (0x0004c90c) cntbar_detail_list_shct_pane

0xca3e,	// (0x0004fcc7) aid_list_gen

0xc08c,	// (0x0004f315) aid_scroll

0xc095,	// (0x0004f31e) aid_size_touch_scroll_bar

0x96e7,	// (0x0004c970) aid_list_double

0x96f0,	// (0x0004c979) aid_list_single

0x96f0,	// (0x0004c979) aid_list_single_lg

0x0f96,	// (0x0004421f) aid_list_z_g_a_sm

0x0f9e,	// (0x00044227) aid_list_z_g_d

0x0fa6,	// (0x0004422f) aid_txt_z_prm

0x0fb4,	// (0x0004423d) aid_txt_z_prm_cp01

0x0fc2,	// (0x0004424b) aid_txt_z_sec

0x96f9,	// (0x0004c982) main_cntbar_detail_cont_pane_g1_ParamLimits

0x96f9,	// (0x0004c982) main_cntbar_detail_cont_pane_g1

0x970d,	// (0x0004c996) main_cntbar_detail_cont_pane_g2_ParamLimits

0x970d,	// (0x0004c996) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6e,	// (0x00052ff7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6e,	// (0x00052ff7) main_cntbar_detail_cont_pane_g

0xc09e,	// (0x0004f327) main_cntbar_detail_cont_pane_t1

0xc0ac,	// (0x0004f335) main_cntbar_detail_cont_pane_t2

0xc0ba,	// (0x0004f343) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd73,	// (0x00052ffc) main_cntbar_detail_cont_pane_t

0x971d,	// (0x0004c9a6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x971d,	// (0x0004c9a6) cell_cntbar_detail_list_shct_pane

0xc0c8,	// (0x0004f351) cntbar_detail_list_shct_pane_g1

0xc0d1,	// (0x0004f35a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd7a,	// (0x00053003) cntbar_detail_list_shct_pane_g

0x972f,	// (0x0004c9b8) cntbar_detail_list_event_pane_g1_ParamLimits

0x972f,	// (0x0004c9b8) cntbar_detail_list_event_pane_g1

0x973b,	// (0x0004c9c4) cntbar_detail_list_event_pane_g2_ParamLimits

0x973b,	// (0x0004c9c4) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7f,	// (0x00053008) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7f,	// (0x00053008) cntbar_detail_list_event_pane_g

0x97a9,	// (0x0004ca32) cntbar_detail_list_event_pane_t1_ParamLimits

0x97a9,	// (0x0004ca32) cntbar_detail_list_event_pane_t1

0x97be,	// (0x0004ca47) cntbar_detail_list_event_pane_t2_ParamLimits

0x97be,	// (0x0004ca47) cntbar_detail_list_event_pane_t2

0x0002,

0xfd8c,	// (0x00053015) cntbar_detail_list_event_pane_t_ParamLimits

0xfd8c,	// (0x00053015) cntbar_detail_list_event_pane_t

0xc7db,	// (0x0004fa64) cell_cntbar_detail_list_shct_pane_g1

0x3440,	// (0x000466c9) navi_pane_mv_g3

0xa8af,	// (0x0004db38) main_cntbar_detail_pane_ParamLimits

0xa832,	// (0x0004dabb) main_notif_wgt_pane

0xb401,	// (0x0004e68a) aid_tch_main_mp4_pane_g4

0xb609,	// (0x0004e892) popup_slider_window_cp02

0xbdfa,	// (0x0004f083) list_recal_day_event_pane

0x963d,	// (0x0004c8c6) cntbar_detail_btn_pane_ParamLimits

0x963d,	// (0x0004c8c6) cntbar_detail_btn_pane

0x9656,	// (0x0004c8df) cntbar_detail_btn_pane_cp01_ParamLimits

0x9656,	// (0x0004c8df) cntbar_detail_btn_pane_cp01

0x9683,	// (0x0004c90c) cntbar_detail_list_shct_pane_ParamLimits

0x9693,	// (0x0004c91c) cntbar_detail_pane_g1_ParamLimits

0x9693,	// (0x0004c91c) cntbar_detail_pane_g1

0x96a7,	// (0x0004c930) cntbar_detail_pane_t1_ParamLimits

0x96a7,	// (0x0004c930) cntbar_detail_pane_t1

0x9747,	// (0x0004c9d0) cntbar_detail_list_event_pane_g3_ParamLimits

0x9747,	// (0x0004c9d0) cntbar_detail_list_event_pane_g3

0x975f,	// (0x0004c9e8) cntbar_detail_list_event_pane_g4_ParamLimits

0x975f,	// (0x0004c9e8) cntbar_detail_list_event_pane_g4

0x9777,	// (0x0004ca00) cntbar_detail_list_event_pane_g5_ParamLimits

0x9777,	// (0x0004ca00) cntbar_detail_list_event_pane_g5

0x978f,	// (0x0004ca18) cntbar_detail_list_event_pane_g6_ParamLimits

0x978f,	// (0x0004ca18) cntbar_detail_list_event_pane_g6

0x97d3,	// (0x0004ca5c) cntbar_detail_list_event_pane_t3_ParamLimits

0x97d3,	// (0x0004ca5c) cntbar_detail_list_event_pane_t3

0x97e5,	// (0x0004ca6e) popup_notif_wgt_window_ParamLimits

0x97e5,	// (0x0004ca6e) popup_notif_wgt_window

0x97fe,	// (0x0004ca87) popup_submenu_window_cp01_ParamLimits

0x97fe,	// (0x0004ca87) popup_submenu_window_cp01

0xc7a5,	// (0x0004fa2e) bg_popup_window_pane_cp10

0xc0da,	// (0x0004f363) listscroll_notif_wgt_pane

0xc0ec,	// (0x0004f375) list_notif_wgt_window

0xc0f5,	// (0x0004f37e) scroll_pane_cp033

0x9812,	// (0x0004ca9b) list_notif_wgt_row_pane_ParamLimits

0x9812,	// (0x0004ca9b) list_notif_wgt_row_pane

0xc0fe,	// (0x0004f387) aid_size_list_notif_wgt_del

0xc10b,	// (0x0004f394) list_notif_wgt_row_pane_g1

0xc117,	// (0x0004f3a0) list_notif_wgt_row_pane_g2

0xc126,	// (0x0004f3af) list_notif_wgt_row_pane_g3

0x0002,

0xfd93,	// (0x0005301c) list_notif_wgt_row_pane_g

0xc133,	// (0x0004f3bc) list_notif_wgt_row_pane_t1

0xc149,	// (0x0004f3d2) list_notif_wgt_row_pane_t2

0xc15b,	// (0x0004f3e4) list_notif_wgt_row_pane_t3

0x0002,

0xfd9a,	// (0x00053023) list_notif_wgt_row_pane_t

0x6bba,	// (0x00049e43) list_recal_day_event_pane_g1

0xc16d,	// (0x0004f3f6) list_recal_day_event_pane_t1

0xa832,	// (0x0004dabb) bg_button_pane_cp045

0x9822,	// (0x0004caab) cntbar_detail_btn_pane_t1

0xe2e6,	// (0x0005156f) main_callh_pane_ParamLimits

0xe2e6,	// (0x0005156f) main_callh_pane

0xa832,	// (0x0004dabb) main_coverflow0_pane

0xa832,	// (0x0004dabb) main_wgtman_pane

0x8773,	// (0x0004b9fc) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8773,	// (0x0004b9fc) main_fs_bigclock_unlock_btn_pane

0x906d,	// (0x0004c2f6) bg_button_pane_cp16

0x907d,	// (0x0004c306) cell_tport_appsw_pane_g3

0x9830,	// (0x0004cab9) cf0_flow_pane_ParamLimits

0x9830,	// (0x0004cab9) cf0_flow_pane

0xc17c,	// (0x0004f405) listscroll_cf0_pane

0xc187,	// (0x0004f410) main_cf0_pane_g1

0x9845,	// (0x0004cace) main_cf0_pane_t1_ParamLimits

0x9845,	// (0x0004cace) main_cf0_pane_t1

0x985c,	// (0x0004cae5) main_cf0_pane_t2_ParamLimits

0x985c,	// (0x0004cae5) main_cf0_pane_t2

0x0001,

0xfda6,	// (0x0005302f) main_cf0_pane_t_ParamLimits

0xfda6,	// (0x0005302f) main_cf0_pane_t

0xc199,	// (0x0004f422) scroll_pane_cp11

0x9873,	// (0x0004cafc) cf0_flow_pane_g1

0x987f,	// (0x0004cb08) cf0_flow_pane_g2

0x0001,

0xfdab,	// (0x00053034) cf0_flow_pane_g

0x988b,	// (0x0004cb14) cf0_flow_pane_t1

0xa832,	// (0x0004dabb) main_call6_pane

0xa832,	// (0x0004dabb) main_calllock_pane

0x989d,	// (0x0004cb26) call6_btn_grp_pane_ParamLimits

0x989d,	// (0x0004cb26) call6_btn_grp_pane

0x98b7,	// (0x0004cb40) call6_pane_g1_ParamLimits

0x98b7,	// (0x0004cb40) call6_pane_g1

0x98d0,	// (0x0004cb59) popup_call6_1st_window_ParamLimits

0x98d0,	// (0x0004cb59) popup_call6_1st_window

0x98e4,	// (0x0004cb6d) popup_call6_2nd_window_ParamLimits

0x98e4,	// (0x0004cb6d) popup_call6_2nd_window

0x98f8,	// (0x0004cb81) cell_call6_btn_pane_ParamLimits

0x98f8,	// (0x0004cb81) cell_call6_btn_pane

0xc7a5,	// (0x0004fa2e) bg_popup_call2_in_pane_cp03

0xc1a4,	// (0x0004f42d) popup_call6_1st_window_g1

0xc1ac,	// (0x0004f435) popup_call6_1st_window_g2

0xc1b4,	// (0x0004f43d) popup_call6_1st_window_g3

0x0002,

0xfdb0,	// (0x00053039) popup_call6_1st_window_g

0xc1bc,	// (0x0004f445) popup_call6_1st_window_t1

0xc1cb,	// (0x0004f454) popup_call6_1st_window_t2

0xc1db,	// (0x0004f464) popup_call6_1st_window_t3

0x0002,

0xfdb7,	// (0x00053040) popup_call6_1st_window_t

0xc7a5,	// (0x0004fa2e) bg_popup_call2_in_pane_cp04

0xc1eb,	// (0x0004f474) popup_call6_2nd_window_g1

0xc1f3,	// (0x0004f47c) popup_call6_2nd_window_g2

0xc1fb,	// (0x0004f484) popup_call6_2nd_window_g3

0x0002,

0xfdbe,	// (0x00053047) popup_call6_2nd_window_g

0xc203,	// (0x0004f48c) popup_call6_2nd_window_t1

0xa832,	// (0x0004dabb) bg_button_pane_cp15

0xc212,	// (0x0004f49b) cell_call6_btn_pane_g1

0xcdf2,	// (0x0005007b) cell_call6_btn_pane_t1

0x990c,	// (0x0004cb95) listscroll_wgtman_pane_ParamLimits

0x990c,	// (0x0004cb95) listscroll_wgtman_pane

0x992d,	// (0x0004cbb6) wgtman_btn_pane_ParamLimits

0x992d,	// (0x0004cbb6) wgtman_btn_pane

0xcff7,	// (0x00050280) aid_scroll_copy1

0xc21b,	// (0x0004f4a4) list_wgtman_pane

0x9970,	// (0x0004cbf9) wgtman_btn_pane_g1_ParamLimits

0x9970,	// (0x0004cbf9) wgtman_btn_pane_g1

0x999c,	// (0x0004cc25) wgtman_btn_pane_t1_ParamLimits

0x999c,	// (0x0004cc25) wgtman_btn_pane_t1

0xc225,	// (0x0004f4ae) wgtman_btn_pane_t2_ParamLimits

0xc225,	// (0x0004f4ae) wgtman_btn_pane_t2

0x0001,

0xfdc5,	// (0x0005304e) wgtman_btn_pane_t_ParamLimits

0xfdc5,	// (0x0005304e) wgtman_btn_pane_t

0x99d9,	// (0x0004cc62) listrow_wgtman_pane_ParamLimits

0x99d9,	// (0x0004cc62) listrow_wgtman_pane

0x99ed,	// (0x0004cc76) listrow_wgtman_pane_g1

0x99fa,	// (0x0004cc83) listrow_wgtman_pane_g2

0x0001,

0xfdca,	// (0x00053053) listrow_wgtman_pane_g

0x0fd0,	// (0x00044259) listrow_wgtman_pane_t1

0x0fe8,	// (0x00044271) listrow_wgtman_pane_t2

0x0001,

0xfdcf,	// (0x00053058) listrow_wgtman_pane_t

0x100e,	// (0x00044297) wait_bar_pane_cp09

0xc23c,	// (0x0004f4c5) main_calllock_btn_pane

0xc246,	// (0x0004f4cf) main_calllock_pane_g1

0xa832,	// (0x0004dabb) bg_button_pane_cp17

0xc212,	// (0x0004f49b) main_calllock_btn_pane_g1

0xc252,	// (0x0004f4db) main_calllock_btn_pane_t1

0xa832,	// (0x0004dabb) main_dialer3_pane

0xa832,	// (0x0004dabb) main_fmrd2_pane

0xc7db,	// (0x0004fa64) main_fs_bigclock_unlock_btn_pane_g1

0x9a20,	// (0x0004cca9) main_fs_bigclock_unlock_btn_pane_t1

0x9a2e,	// (0x0004ccb7) area_fmrd2_info_pane_ParamLimits

0x9a2e,	// (0x0004ccb7) area_fmrd2_info_pane

0x9a3f,	// (0x0004ccc8) area_fmrd2_visual_pane_ParamLimits

0x9a3f,	// (0x0004ccc8) area_fmrd2_visual_pane

0x9a4d,	// (0x0004ccd6) fmrd2_indi_pane_ParamLimits

0x9a4d,	// (0x0004ccd6) fmrd2_indi_pane

0x9a5a,	// (0x0004cce3) area_fmrd2_visual_pane_g1

0x9a62,	// (0x0004cceb) area_fmrd2_visual_pane_t1

0x9a72,	// (0x0004ccfb) area_fmrd2_visual_pane_t2

0x9a82,	// (0x0004cd0b) area_fmrd2_visual_pane_t3

0x0002,

0xfdd9,	// (0x00053062) area_fmrd2_visual_pane_t

0x9a92,	// (0x0004cd1b) area_fmrd2_info_pane_g1

0x9a9a,	// (0x0004cd23) area_fmrd2_info_pane_t1

0x9aaa,	// (0x0004cd33) area_fmrd2_info_pane_t2

0x9aba,	// (0x0004cd43) area_fmrd2_info_pane_t3

0x9aca,	// (0x0004cd53) area_fmrd2_info_pane_t4

0x0003,

0xfde0,	// (0x00053069) area_fmrd2_info_pane_t

0x9ada,	// (0x0004cd63) fmrd2_indi_pane_t1

0x9aea,	// (0x0004cd73) fmrd2_indi_pane_t2

0x9afa,	// (0x0004cd83) fmrd2_indi_pane_t3

0x0002,

0xfde9,	// (0x00053072) fmrd2_indi_pane_t

0x87fc,	// (0x0004ba85) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x87fc,	// (0x0004ba85) list_single_fs_bigclock_indicator_pane_g5

0x88b1,	// (0x0004bb3a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x88b1,	// (0x0004bb3a) list_single_fs_bigclock_indicator_pane_t5

0x92a6,	// (0x0004c52f) aid_cell_bcale_month_pane_ParamLimits

0x92a6,	// (0x0004c52f) aid_cell_bcale_month_pane

0x92c4,	// (0x0004c54d) bcale_month_pane_ParamLimits

0x92c4,	// (0x0004c54d) bcale_month_pane

0x92e8,	// (0x0004c571) bcale_preview_pane_ParamLimits

0x92e8,	// (0x0004c571) bcale_preview_pane

0xc004,	// (0x0004f28d) list_single_fs_bigclock_pane_t1_ParamLimits

0xc023,	// (0x0004f2ac) list_single_fs_bigclock_pane_t2_ParamLimits

0xc023,	// (0x0004f2ac) list_single_fs_bigclock_pane_t2

0x0001,

0xfd64,	// (0x00052fed) list_single_fs_bigclock_pane_t_ParamLimits

0xfd64,	// (0x00052fed) list_single_fs_bigclock_pane_t

0x9a18,	// (0x0004cca1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd4,	// (0x0005305d) main_fs_bigclock_unlock_btn_pane_g

0x9b0a,	// (0x0004cd93) aid_dia3_key_size_ParamLimits

0x9b0a,	// (0x0004cd93) aid_dia3_key_size

0x9b1e,	// (0x0004cda7) aid_dia3_listrow_size_ParamLimits

0x9b1e,	// (0x0004cda7) aid_dia3_listrow_size

0x9b38,	// (0x0004cdc1) dia3_keypad_fun_pane_ParamLimits

0x9b38,	// (0x0004cdc1) dia3_keypad_fun_pane

0x9b52,	// (0x0004cddb) dia3_keypad_num_pane_ParamLimits

0x9b52,	// (0x0004cddb) dia3_keypad_num_pane

0x9b6c,	// (0x0004cdf5) dia3_listscroll_pane_ParamLimits

0x9b6c,	// (0x0004cdf5) dia3_listscroll_pane

0x9b82,	// (0x0004ce0b) dia3_numentry_pane_ParamLimits

0x9b82,	// (0x0004ce0b) dia3_numentry_pane

0xc261,	// (0x0004f4ea) dia3_list_pane

0x9b9c,	// (0x0004ce25) scroll_pane_cp12

0xa832,	// (0x0004dabb) bg_dia3_numentry_pane

0x9ba7,	// (0x0004ce30) dia3_numentry_pane_t1

0x9bb6,	// (0x0004ce3f) cell_dia3_key_num_pane

0x9bbe,	// (0x0004ce47) cell_dia3_key0_fun_pane_ParamLimits

0x9bbe,	// (0x0004ce47) cell_dia3_key0_fun_pane

0x9bd2,	// (0x0004ce5b) cell_dia3_key1_fun_pane_ParamLimits

0x9bd2,	// (0x0004ce5b) cell_dia3_key1_fun_pane

0x9be7,	// (0x0004ce70) dia3_listrow_pane

0x81b8,	// (0x0004b441) bg_dia3_numentry_pane_g1

0xa832,	// (0x0004dabb) bg_button_pane_cp21

0x9bf9,	// (0x0004ce82) cell_dia3_key_num_pane_t1

0x9c07,	// (0x0004ce90) cell_dia3_key_num_pane_t2

0x9c07,	// (0x0004ce90) cell_dia3_key_num_pane_t3

0x9c07,	// (0x0004ce90) cell_dia3_key_num_pane_t4

0x0003,

0xfdf0,	// (0x00053079) cell_dia3_key_num_pane_t

0xa832,	// (0x0004dabb) bg_button_pane_cp19

0x9c16,	// (0x0004ce9f) cell_dia3_key0_fun_pane_g1

0xa832,	// (0x0004dabb) bg_button_pane_cp20

0x9c1e,	// (0x0004cea7) cell_dia3_key1_fun_pane_g1

0x9c26,	// (0x0004ceaf) area_left_week_number_pane

0x9c34,	// (0x0004cebd) area_top_day_name_pane

0x9c47,	// (0x0004ced0) frame_month_view_pane

0xc26c,	// (0x0004f4f5) grid_month_view_pane

0x9c5c,	// (0x0004cee5) cell_top_day_name_pane_ParamLimits

0x9c5c,	// (0x0004cee5) cell_top_day_name_pane

0x9c8b,	// (0x0004cf14) cell_area_left_week_number_pane_ParamLimits

0x9c8b,	// (0x0004cf14) cell_area_left_week_number_pane

0x9ca1,	// (0x0004cf2a) cell_month_view_pane_ParamLimits

0x9ca1,	// (0x0004cf2a) cell_month_view_pane

0xc27a,	// (0x0004f503) frm_month_g1

0x9cd2,	// (0x0004cf5b) frm_month_g2

0x9ce5,	// (0x0004cf6e) frm_month_g3

0x9cf8,	// (0x0004cf81) frm_month_g4

0x9d0b,	// (0x0004cf94) frm_month_g5

0x9d1e,	// (0x0004cfa7) frm_month_g6

0x9d33,	// (0x0004cfbc) frm_month_g7

0xc287,	// (0x0004f510) frm_month_g8

0x9d48,	// (0x0004cfd1) frm_month_g9

0x9d58,	// (0x0004cfe1) frm_month_g10

0x9d68,	// (0x0004cff1) frm_month_g11

0x9d78,	// (0x0004d001) frm_month_g12

0x9d8a,	// (0x0004d013) frm_month_g13

0x9d9e,	// (0x0004d027) frm_month_g14

0x9db2,	// (0x0004d03b) frm_month_g15

0x9dc6,	// (0x0004d04f) frm_month_g16

0x000f,

0xfdf9,	// (0x00053082) frm_month_g

0xc294,	// (0x0004f51d) cell_top_day_name_pane_t1

0x9dda,	// (0x0004d063) cell_area_left_week_number_pane_g1

0x9de6,	// (0x0004d06f) cell_area_left_week_number_pane_t1

0xafdb,	// (0x0004e264) cell_month_view_pane_g1

0x9df9,	// (0x0004d082) cell_month_view_pane_t1

0xa832,	// (0x0004dabb) main_fps_pane

0x8dc0,	// (0x0004c049) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x8dc0,	// (0x0004c049) cmail_ddmenu_btn02_pane_cp1

0x8ddc,	// (0x0004c065) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x8ddc,	// (0x0004c065) cmail_ddmenu_btn02_pane_cp2

0x94f8,	// (0x0004c781) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x94f8,	// (0x0004c781) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd17,	// (0x00052fa0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd17,	// (0x00052fa0) cmail_ddmenu_btn02_pane_g

0x9519,	// (0x0004c7a2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9519,	// (0x0004c7a2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd1c,	// (0x00052fa5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd1c,	// (0x00052fa5) cmail_ddmenu_btn02_pane_t

0x9e0c,	// (0x0004d095) fps_text_pane_ParamLimits

0x9e0c,	// (0x0004d095) fps_text_pane

0x9e23,	// (0x0004d0ac) main_fps_pane_g1_ParamLimits

0x9e23,	// (0x0004d0ac) main_fps_pane_g1

0x9e3b,	// (0x0004d0c4) wait_bar_pane_cp010_ParamLimits

0x9e3b,	// (0x0004d0c4) wait_bar_pane_cp010

0x9e4e,	// (0x0004d0d7) fps_text_pane_t1_ParamLimits

0x9e4e,	// (0x0004d0d7) fps_text_pane_t1

0x5db8,	// (0x00049041) cam4_image_uncrop_pane_g1

0x5dc1,	// (0x0004904a) cam4_image_uncrop_pane_g2

0x5dcc,	// (0x00049055) cam4_image_uncrop_pane_g3

0x5dd5,	// (0x0004905e) cam4_image_uncrop_pane_g4

0x0003,

0xf85b,	// (0x00052ae4) cam4_image_uncrop_pane_g

0x9be7,	// (0x0004ce70) dia3_listrow_pane_ParamLimits

0xa832,	// (0x0004dabb) main_phob2_pane

0x9009,	// (0x0004c292) cell_tport_appsw_pane_cp02_ParamLimits

0x9009,	// (0x0004c292) cell_tport_appsw_pane_cp02

0x901d,	// (0x0004c2a6) cell_tport_appsw_pane_cp03_ParamLimits

0x901d,	// (0x0004c2a6) cell_tport_appsw_pane_cp03

0xa832,	// (0x0004dabb) phob2_contact_card_pane

0xa832,	// (0x0004dabb) phob2_listscroll_pane

0xc2a7,	// (0x0004f530) phob2_list_pane

0xc2af,	// (0x0004f538) scroll_pane_cp034

0x9e66,	// (0x0004d0ef) phob2_cc_data_pane_ParamLimits

0x9e66,	// (0x0004d0ef) phob2_cc_data_pane

0x9e7f,	// (0x0004d108) phob2_cc_listscroll_pane_ParamLimits

0x9e7f,	// (0x0004d108) phob2_cc_listscroll_pane

0x99d9,	// (0x0004cc62) list_double_large_graphic_phob2_pane_ParamLimits

0x99d9,	// (0x0004cc62) list_double_large_graphic_phob2_pane

0x9ea1,	// (0x0004d12a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9ea1,	// (0x0004d12a) list_double_large_graphic_phob2_pane_g1

0x1020,	// (0x000442a9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1020,	// (0x000442a9) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe1a,	// (0x000530a3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1a,	// (0x000530a3) list_double_large_graphic_phob2_pane_g

0x1046,	// (0x000442cf) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1046,	// (0x000442cf) list_double_large_graphic_phob2_pane_t1

0x105b,	// (0x000442e4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x105b,	// (0x000442e4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe23,	// (0x000530ac) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe23,	// (0x000530ac) list_double_large_graphic_phob2_pane_t

0xa832,	// (0x0004dabb) list_highlight_pane_cp024

0x9eae,	// (0x0004d137) phob2_cc_button_pane

0x9eb8,	// (0x0004d141) phob2_cc_data_pane_g1_ParamLimits

0x9eb8,	// (0x0004d141) phob2_cc_data_pane_g1

0x9ed2,	// (0x0004d15b) phob2_cc_data_pane_g2_ParamLimits

0x9ed2,	// (0x0004d15b) phob2_cc_data_pane_g2

0x0001,

0xfe28,	// (0x000530b1) phob2_cc_data_pane_g_ParamLimits

0xfe28,	// (0x000530b1) phob2_cc_data_pane_g

0x9ee4,	// (0x0004d16d) phob2_cc_data_pane_t1_ParamLimits

0x9ee4,	// (0x0004d16d) phob2_cc_data_pane_t1

0x9f04,	// (0x0004d18d) phob2_cc_data_pane_t2_ParamLimits

0x9f04,	// (0x0004d18d) phob2_cc_data_pane_t2

0x9f24,	// (0x0004d1ad) phob2_cc_data_pane_t3_ParamLimits

0x9f24,	// (0x0004d1ad) phob2_cc_data_pane_t3

0x0002,

0xfe2d,	// (0x000530b6) phob2_cc_data_pane_t_ParamLimits

0xfe2d,	// (0x000530b6) phob2_cc_data_pane_t

0xc2b7,	// (0x0004f540) phob2_cc_list_pane_ParamLimits

0xc2b7,	// (0x0004f540) phob2_cc_list_pane

0x6e4a,	// (0x0004a0d3) scroll_pane_cp035_ParamLimits

0x6e4a,	// (0x0004a0d3) scroll_pane_cp035

0xa8af,	// (0x0004db38) bg_button_pane_cp033

0xc2c3,	// (0x0004f54c) phob2_cc_button_pane_g1

0xc2cf,	// (0x0004f558) phob2_cc_button_pane_t1

0xc2e4,	// (0x0004f56d) phob2_cc_button_pane_t2

0x0001,

0xfe34,	// (0x000530bd) phob2_cc_button_pane_t

0x9f44,	// (0x0004d1cd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f44,	// (0x0004d1cd) list_double_large_graphic_phob2_cc_pane

0x9f82,	// (0x0004d20b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f82,	// (0x0004d20b) list_double_large_graphic_phob2_cc_pane_g1

0x1070,	// (0x000442f9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1070,	// (0x000442f9) list_double_large_graphic_phob2_cc_pane_g2

0x107c,	// (0x00044305) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x107c,	// (0x00044305) list_double_large_graphic_phob2_cc_pane_g3

0x1088,	// (0x00044311) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1088,	// (0x00044311) list_double_large_graphic_phob2_cc_pane_g4

0x1094,	// (0x0004431d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1094,	// (0x0004431d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe39,	// (0x000530c2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe39,	// (0x000530c2) list_double_large_graphic_phob2_cc_pane_g

0x10a0,	// (0x00044329) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x10a0,	// (0x00044329) list_double_large_graphic_phob2_cc_pane_t1

0x10c9,	// (0x00044352) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x10c9,	// (0x00044352) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe44,	// (0x000530cd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe44,	// (0x000530cd) list_double_large_graphic_phob2_cc_pane_t

0xc2f6,	// (0x0004f57f) list_highlight_pane_cp025_ParamLimits

0xc2f6,	// (0x0004f57f) list_highlight_pane_cp025

0xa8af,	// (0x0004db38) bg_button_pane_cp033_ParamLimits

0xc2c3,	// (0x0004f54c) phob2_cc_button_pane_g1_ParamLimits

0xc2cf,	// (0x0004f558) phob2_cc_button_pane_t1_ParamLimits

0xc2e4,	// (0x0004f56d) phob2_cc_button_pane_t2_ParamLimits

0xfe34,	// (0x000530bd) phob2_cc_button_pane_t_ParamLimits

0x132a,	// (0x000445b3) popup_wgtman_window

0x65f3,	// (0x0004987c) scroll_pane_cp038

0x9952,	// (0x0004cbdb) wgtman_btn_pane_cp_01_ParamLimits

0x9952,	// (0x0004cbdb) wgtman_btn_pane_cp_01

0xc304,	// (0x0004f58d) wgtman_content_pane

0xc30d,	// (0x0004f596) wgtman_heading_pane

0xa832,	// (0x0004dabb) bg_heading_pane_cp02

0xc316,	// (0x0004f59f) wgtman_heading_pane_g1

0xc31e,	// (0x0004f5a7) wgtman_heading_pane_t1

0xc32c,	// (0x0004f5b5) scroll_pane_cp036

0xc334,	// (0x0004f5bd) wgtman_list_pane

0x8ae0,	// (0x0004bd69) wgtman_list_pane_t1_ParamLimits

0x8ae0,	// (0x0004bd69) wgtman_list_pane_t1

0xb697,	// (0x0004e920) cam4_grid_pane

0x0a4b,	// (0x00043cd4) bg_button_pane_cp015_ParamLimits

0x6cfd,	// (0x00049f86) bg_button_pane_cp016_ParamLimits

0x6d09,	// (0x00049f92) bg_button_pane_cp017_ParamLimits

0x6d30,	// (0x00049fb9) popup_vitu2_query_window_g3_ParamLimits

0x6d30,	// (0x00049fb9) popup_vitu2_query_window_g3

0x0b11,	// (0x00043d9a) popup_vitu2_query_window_t6_ParamLimits

0x0b11,	// (0x00043d9a) popup_vitu2_query_window_t6

0x0b3c,	// (0x00043dc5) popup_vitu2_query_window_t7_ParamLimits

0x0b3c,	// (0x00043dc5) popup_vitu2_query_window_t7

0x5db8,	// (0x00049041) cam4_grid_pane_g1

0x5dc1,	// (0x0004904a) cam4_grid_pane_g2

0xc33c,	// (0x0004f5c5) cam4_grid_pane_g3

0xc345,	// (0x0004f5ce) cam4_grid_pane_g4

0x0003,

0xfe49,	// (0x000530d2) cam4_grid_pane_g

0x1f5c,	// (0x000451e5) aid_placing_vt_slider_lsc_ParamLimits

0x2249,	// (0x000454d2) vidtel_button_pane_ParamLimits

0x2249,	// (0x000454d2) vidtel_button_pane

0xa832,	// (0x0004dabb) bg_button_pane_cp034

0xc350,	// (0x0004f5d9) vidtel_button_pane_g1

0xc358,	// (0x0004f5e1) vidtel_button_pane_t1

0x69e3,	// (0x00049c6c) aid_size_vtel_slider_touch

0x6e4a,	// (0x0004a0d3) scroll_pane_cp039

0x8227,	// (0x0004b4b0) ncim_query_button_pane_cp01_ParamLimits

0x8246,	// (0x0004b4cf) ncimui_query_pane_g1_ParamLimits

0xa8af,	// (0x0004db38) input_focus_pane_cp012_ParamLimits

0x826b,	// (0x0004b4f4) ncim_query_entry_pane_t1_ParamLimits

0x6e4a,	// (0x0004a0d3) scroll_pane_cp039_ParamLimits

0x33b2,	// (0x0004663b) navi_pane_bcale_mc_g1

0x33ba,	// (0x00046643) navi_pane_bcale_mc_t1

0x8ed4,	// (0x0004c15d) main_sp_fs_email_pane_g1

0x8ee0,	// (0x0004c169) main_sp_fs_email_pane_g2

0x0001,

0xfc4c,	// (0x00052ed5) main_sp_fs_email_pane_g

0xbc91,	// (0x0004ef1a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xbc91,	// (0x0004ef1a) list_single_cale_mrui_row_pane_g3

0x0f71,	// (0x000441fa) list_single_recal_day_pane_g5_event_pane

0xbe6c,	// (0x0004f0f5) list_single_recal_day_pane_g7

0xc36e,	// (0x0004f5f7) list_recal_day_event_pane_cp01

0xc377,	// (0x0004f600) list_recal_vselct_arw_lo_pane_cp01

0xc37f,	// (0x0004f608) list_recal_vselct_arw_up_pane_cp01

0xc387,	// (0x0004f610) list_recal_vselct_pane_cp01

0x6bba,	// (0x00049e43) list_recal_day_event_pane_cp01_g1

0xc391,	// (0x0004f61a) list_recal_day_event_pane_cp01_t1

0xbe74,	// (0x0004f0fd) list_single_recal_day_pane_t1_ParamLimits

0xbe86,	// (0x0004f10f) list_single_recal_day_pane_t2_ParamLimits

0xfd2c,	// (0x00052fb5) list_single_recal_day_pane_t_ParamLimits

0xaf60,	// (0x0004e1e9) bg_notes_pane_ParamLimits

0xb033,	// (0x0004e2bc) list_notes_pane_ParamLimits

0x151c,	// (0x000447a5) scroll_pane_cp06_ParamLimits

0xb06f,	// (0x0004e2f8) main_notes_pane_ParamLimits

0xa8af,	// (0x0004db38) main_welc_pane

0x9fbd,	// (0x0004d246) main_welc_body_pane_ParamLimits

0x9fbd,	// (0x0004d246) main_welc_body_pane

0x9fdc,	// (0x0004d265) main_welc_opti_pane_ParamLimits

0x9fdc,	// (0x0004d265) main_welc_opti_pane

0xa05d,	// (0x0004d2e6) main_welc_pane_t1_ParamLimits

0xa05d,	// (0x0004d2e6) main_welc_pane_t1

0xc3af,	// (0x0004f638) main_welc_body_row_pane_ParamLimits

0xc3af,	// (0x0004f638) main_welc_body_row_pane

0xafcd,	// (0x0004e256) main_welc_opti_row_pane_ParamLimits

0xafcd,	// (0x0004e256) main_welc_opti_row_pane

0xc3c6,	// (0x0004f64f) main_welc_opti_row_pane_g1

0xa252,	// (0x0004d4db) main_welc_opti_row_pane_t1

0xc3ce,	// (0x0004f657) main_welc_body_row_pane_t1

0xc0e4,	// (0x0004f36d) popup_notif_wgt_heading_pane

0xc0fe,	// (0x0004f387) aid_size_list_notif_wgt_del_ParamLimits

0xc10b,	// (0x0004f394) list_notif_wgt_row_pane_g1_ParamLimits

0xc117,	// (0x0004f3a0) list_notif_wgt_row_pane_g2_ParamLimits

0xc126,	// (0x0004f3af) list_notif_wgt_row_pane_g3_ParamLimits

0xfd93,	// (0x0005301c) list_notif_wgt_row_pane_g_ParamLimits

0xc133,	// (0x0004f3bc) list_notif_wgt_row_pane_t1_ParamLimits

0xc149,	// (0x0004f3d2) list_notif_wgt_row_pane_t2_ParamLimits

0xc15b,	// (0x0004f3e4) list_notif_wgt_row_pane_t3_ParamLimits

0xfd9a,	// (0x00053023) list_notif_wgt_row_pane_t_ParamLimits

0x99ed,	// (0x0004cc76) listrow_wgtman_pane_g1_ParamLimits

0x99fa,	// (0x0004cc83) listrow_wgtman_pane_g2_ParamLimits

0xfdca,	// (0x00053053) listrow_wgtman_pane_g_ParamLimits

0x0fd0,	// (0x00044259) listrow_wgtman_pane_t1_ParamLimits

0x0fe8,	// (0x00044271) listrow_wgtman_pane_t2_ParamLimits

0xfdcf,	// (0x00053058) listrow_wgtman_pane_t_ParamLimits

0x100e,	// (0x00044297) wait_bar_pane_cp09_ParamLimits

0xa832,	// (0x0004dabb) bg_popup_heading_pane_cp02

0xc3dd,	// (0x0004f666) popup_notif_wgt_heading_pane_g1

0xc3e5,	// (0x0004f66e) popup_notif_wgt_heading_pane_t1

0xa832,	// (0x0004dabb) main_vids_pane

0xa832,	// (0x0004dabb) vids_listscroll_pane

0xa261,	// (0x0004d4ea) scroll_pane_cp040

0xa832,	// (0x0004dabb) vids_list_pane

0xa26c,	// (0x0004d4f5) vids_list_double_pane_ParamLimits

0xa26c,	// (0x0004d4f5) vids_list_double_pane

0xa27f,	// (0x0004d508) vids_list_double_pane_g1

0xa288,	// (0x0004d511) vids_list_double_pane_t1

0xa298,	// (0x0004d521) vids_list_double_pane_t2

0x0001,

0xfe68,	// (0x000530f1) vids_list_double_pane_t

0xa8af,	// (0x0004db38) main_ncimui_pane_ParamLimits

0x7f46,	// (0x0004b1cf) main_ncimui_pane_g1_ParamLimits

0x7f52,	// (0x0004b1db) main_ncimui_pane_g2_ParamLimits

0x7f52,	// (0x0004b1db) main_ncimui_pane_g2

0x0001,

0xfb4d,	// (0x00052dd6) main_ncimui_pane_g_ParamLimits

0xfb4d,	// (0x00052dd6) main_ncimui_pane_g

0x9ffb,	// (0x0004d284) main_welc_pane_g1_ParamLimits

0x9ffb,	// (0x0004d284) main_welc_pane_g1

0xa010,	// (0x0004d299) main_welc_pane_g2_ParamLimits

0xa010,	// (0x0004d299) main_welc_pane_g2

0x0003,

0xfe52,	// (0x000530db) main_welc_pane_g_ParamLimits

0xfe52,	// (0x000530db) main_welc_pane_g

0x1500,	// (0x00044789) listscroll_mce_pane_ParamLimits

0x3492,	// (0x0004671b) wait_bar_pane_cp10

0xe492,	// (0x0005171b) main_cale_day_pane_ParamLimits

0xe492,	// (0x0005171b) main_cale_week_pane_ParamLimits

0xaf60,	// (0x0004e1e9) main_messa_pane_ParamLimits

0x50d8,	// (0x00048361) main_clock2_btn_pane_ParamLimits

0x50d8,	// (0x00048361) main_clock2_btn_pane

0xec58,	// (0x00051ee1) main_clock2_btn_pane_cp01_ParamLimits

0xec58,	// (0x00051ee1) main_clock2_btn_pane_cp01

0xbc1d,	// (0x0004eea6) list_cale_mrui_pane_ParamLimits

0xc191,	// (0x0004f41a) main_cf0_pane_g2

0x0001,

0xfda1,	// (0x0005302a) main_cf0_pane_g

0x9c26,	// (0x0004ceaf) area_left_week_number_pane_ParamLimits

0x9c34,	// (0x0004cebd) area_top_day_name_pane_ParamLimits

0x9c47,	// (0x0004ced0) frame_month_view_pane_ParamLimits

0xc26c,	// (0x0004f4f5) grid_month_view_pane_ParamLimits

0xc27a,	// (0x0004f503) frm_month_g1_ParamLimits

0x9cd2,	// (0x0004cf5b) frm_month_g2_ParamLimits

0x9ce5,	// (0x0004cf6e) frm_month_g3_ParamLimits

0x9cf8,	// (0x0004cf81) frm_month_g4_ParamLimits

0x9d0b,	// (0x0004cf94) frm_month_g5_ParamLimits

0x9d1e,	// (0x0004cfa7) frm_month_g6_ParamLimits

0x9d33,	// (0x0004cfbc) frm_month_g7_ParamLimits

0xc287,	// (0x0004f510) frm_month_g8_ParamLimits

0x9d48,	// (0x0004cfd1) frm_month_g9_ParamLimits

0x9d58,	// (0x0004cfe1) frm_month_g10_ParamLimits

0x9d68,	// (0x0004cff1) frm_month_g11_ParamLimits

0x9d78,	// (0x0004d001) frm_month_g12_ParamLimits

0x9d8a,	// (0x0004d013) frm_month_g13_ParamLimits

0x9d9e,	// (0x0004d027) frm_month_g14_ParamLimits

0x9db2,	// (0x0004d03b) frm_month_g15_ParamLimits

0x9dc6,	// (0x0004d04f) frm_month_g16_ParamLimits

0xfdf9,	// (0x00053082) frm_month_g_ParamLimits

0xc294,	// (0x0004f51d) cell_top_day_name_pane_t1_ParamLimits

0x9dda,	// (0x0004d063) cell_area_left_week_number_pane_g1_ParamLimits

0x9de6,	// (0x0004d06f) cell_area_left_week_number_pane_t1_ParamLimits

0xafdb,	// (0x0004e264) cell_month_view_pane_g1_ParamLimits

0x9df9,	// (0x0004d082) cell_month_view_pane_t1_ParamLimits

0xaf58,	// (0x0004e1e1) main_clock2_btn_pane_g1

0xc3f3,	// (0x0004f67c) main_clock2_btn_pane_t1

0xa8af,	// (0x0004db38) listscroll_cmail_pane_ParamLimits

0x8ed4,	// (0x0004c15d) main_sp_fs_email_pane_g1_ParamLimits

0x8ee0,	// (0x0004c169) main_sp_fs_email_pane_g2_ParamLimits

0xfc4c,	// (0x00052ed5) main_sp_fs_email_pane_g_ParamLimits

0xbddb,	// (0x0004f064) list_recal_day_pane_ParamLimits

0xbdec,	// (0x0004f075) mian_recal_day_pane_t1

0x0dc1,	// (0x0004404a) list_single_dyc_row_text_pane_t4_ParamLimits

0x0dc1,	// (0x0004404a) list_single_dyc_row_text_pane_t4

0x0e0a,	// (0x00044093) list_single_dyc_row_text_pane_t5_ParamLimits

0x0e0a,	// (0x00044093) list_single_dyc_row_text_pane_t5

0xb9af,	// (0x0004ec38) list_single_dyc_row_text_pane_t6_ParamLimits

0xb9af,	// (0x0004ec38) list_single_dyc_row_text_pane_t6

0x2fe3,	// (0x0004626c) aid_mgn_list_cale_time_pane

0xa8af,	// (0x0004db38) main_gallery2_pane_ParamLimits

0xec6c,	// (0x00051ef5) main_clock2_pane_cp01_t1

0xec7a,	// (0x00051f03) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x000529bb) main_clock2_pane_cp01_t

0x192a,	// (0x00044bb3) cale_week_scroll_pane_g16_ParamLimits

0x192a,	// (0x00044bb3) cale_week_scroll_pane_g16

0xc7a5,	// (0x0004fa2e) vorec_slider_pane

0xc358,	// (0x0004f5e1) vidtel_button_pane_t1_ParamLimits

0x9587,	// (0x0004c810) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9587,	// (0x0004c810) main_fs_bigclock_clock_pane_g2_ParamLimits

0x959a,	// (0x0004c823) main_fs_bigclock_clock_pane_g3_ParamLimits

0x959a,	// (0x0004c823) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4f,	// (0x00052fd8) main_fs_bigclock_clock_pane_g_ParamLimits

0x95b1,	// (0x0004c83a) main_fs_bigclock_clock_pane_t1_ParamLimits

0x95c7,	// (0x0004c850) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd58,	// (0x00052fe1) main_fs_bigclock_clock_pane_t_ParamLimits

0x491e,	// (0x00047ba7) main_mup3_lyrics_pane_ParamLimits

0x491e,	// (0x00047ba7) main_mup3_lyrics_pane

0xa2ce,	// (0x0004d557) main_mup3_lyrics_pane_t1_ParamLimits

0xa2ce,	// (0x0004d557) main_mup3_lyrics_pane_t1

0xb3eb,	// (0x0004e674) aid_main_mp4_pane_t1_area

0xb3f5,	// (0x0004e67e) aid_main_mp4_pane_t2_area

0xb4a1,	// (0x0004e72a) main_mp4_pane_g7_ParamLimits

0xb4a1,	// (0x0004e72a) main_mp4_pane_g7

0xb4ad,	// (0x0004e736) main_mp4_pane_g8_ParamLimits

0xb4ad,	// (0x0004e736) main_mp4_pane_g8

0x5b4d,	// (0x00048dd6) aid_call6_pane_g1_size

0x9f72,	// (0x0004d1fb) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9f72,	// (0x0004d1fb) list_double_large_graphic_phob2_other_pane

0xa2e9,	// (0x0004d572) list_double_large_graphic_phob2_other_pane_g1

0xa832,	// (0x0004dabb) list_highlight_pane_cp026

0xa8af,	// (0x0004db38) main_welc_pane_ParamLimits

0x8e3d,	// (0x0004c0c6) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8e3d,	// (0x0004c0c6) main_sp_fs_ctrlbar_pane_g3

0x8e57,	// (0x0004c0e0) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8e57,	// (0x0004c0e0) main_sp_fs_ctrlbar_pane_g4

0x8e8b,	// (0x0004c114) toolbar2_fixed_button_pane_cp01

0x8e96,	// (0x0004c11f) toolbar2_fixed_button_pane_cp02

0x8ea3,	// (0x0004c12c) toolbar2_fixed_button_pane_cp03

0x9fa1,	// (0x0004d22a) list_welc_entry_pane_ParamLimits

0x9fa1,	// (0x0004d22a) list_welc_entry_pane

0xa025,	// (0x0004d2ae) main_welc_pane_g3_ParamLimits

0xa025,	// (0x0004d2ae) main_welc_pane_g3

0xa07f,	// (0x0004d308) main_welc_pane_t2_ParamLimits

0xa07f,	// (0x0004d308) main_welc_pane_t2

0xa09a,	// (0x0004d323) main_welc_pane_t3_ParamLimits

0xa09a,	// (0x0004d323) main_welc_pane_t3

0x0005,

0xfe5b,	// (0x000530e4) main_welc_pane_t_ParamLimits

0xfe5b,	// (0x000530e4) main_welc_pane_t

0xa1d6,	// (0x0004d45f) welc_button_pane_ParamLimits

0xa1d6,	// (0x0004d45f) welc_button_pane

0xa23e,	// (0x0004d4c7) welc_service_logo_pane_ParamLimits

0xa23e,	// (0x0004d4c7) welc_service_logo_pane

0xa2f1,	// (0x0004d57a) list_single_welc_entry_pane_ParamLimits

0xa2f1,	// (0x0004d57a) list_single_welc_entry_pane

0xa304,	// (0x0004d58d) list_single_welc_entry_pane_g1

0xa30c,	// (0x0004d595) list_single_welc_entry_pane_t1

0xa31a,	// (0x0004d5a3) list_single_welc_entry_pane_t2

0x0001,

0xfe6d,	// (0x000530f6) list_single_welc_entry_pane_t

0xa832,	// (0x0004dabb) bg_button_pane_cp035

0xc401,	// (0x0004f68a) welc_button_pane_t1

0xc40f,	// (0x0004f698) welc_service_logo_pane_g1

0xc418,	// (0x0004f6a1) welc_service_logo_pane_g2

0x0001,

0xfe72,	// (0x000530fb) welc_service_logo_pane_g

0xa832,	// (0x0004dabb) main_int_radio_pane

0x7ee7,	// (0x0004b170) list_single_fs_dyc_pane_g1

0x102c,	// (0x000442b5) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x102c,	// (0x000442b5) list_double_large_graphic_phob2_pane_g3

0x1038,	// (0x000442c1) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x1038,	// (0x000442c1) list_double_large_graphic_phob2_pane_g4

0xa328,	// (0x0004d5b1) main_int_radio1_pane_ParamLimits

0xa328,	// (0x0004d5b1) main_int_radio1_pane

0xc421,	// (0x0004f6aa) find_pane_cp02

0xa345,	// (0x0004d5ce) input_focus_pane_cp12_ParamLimits

0xa345,	// (0x0004d5ce) input_focus_pane_cp12

0xa355,	// (0x0004d5de) input_focus_pane_cp13_ParamLimits

0xa355,	// (0x0004d5de) input_focus_pane_cp13

0xa369,	// (0x0004d5f2) input_focus_pane_cp14_ParamLimits

0xa369,	// (0x0004d5f2) input_focus_pane_cp14

0xc42a,	// (0x0004f6b3) int_radio1_listscroll_pane

0xa37d,	// (0x0004d606) main_int_radio1_pane_g1_ParamLimits

0xa37d,	// (0x0004d606) main_int_radio1_pane_g1

0xa393,	// (0x0004d61c) main_int_radio1_pane_t1_ParamLimits

0xa393,	// (0x0004d61c) main_int_radio1_pane_t1

0xa3ac,	// (0x0004d635) main_int_radio1_pane_t2_ParamLimits

0xa3ac,	// (0x0004d635) main_int_radio1_pane_t2

0xa3c7,	// (0x0004d650) main_int_radio1_pane_t3_ParamLimits

0xa3c7,	// (0x0004d650) main_int_radio1_pane_t3

0xa3e2,	// (0x0004d66b) main_int_radio1_pane_t4_ParamLimits

0xa3e2,	// (0x0004d66b) main_int_radio1_pane_t4

0xc434,	// (0x0004f6bd) main_int_radio1_pane_t5_ParamLimits

0xc434,	// (0x0004f6bd) main_int_radio1_pane_t5

0xa3f4,	// (0x0004d67d) main_int_radio1_pane_t6_ParamLimits

0xa3f4,	// (0x0004d67d) main_int_radio1_pane_t6

0xa409,	// (0x0004d692) main_int_radio1_pane_t7_ParamLimits

0xa409,	// (0x0004d692) main_int_radio1_pane_t7

0xa41e,	// (0x0004d6a7) main_int_radio1_pane_t8_ParamLimits

0xa41e,	// (0x0004d6a7) main_int_radio1_pane_t8

0xa43b,	// (0x0004d6c4) main_int_radio1_pane_t9_ParamLimits

0xa43b,	// (0x0004d6c4) main_int_radio1_pane_t9

0xa44d,	// (0x0004d6d6) main_int_radio1_pane_t10_ParamLimits

0xa44d,	// (0x0004d6d6) main_int_radio1_pane_t10

0xa473,	// (0x0004d6fc) main_int_radio1_pane_t11_ParamLimits

0xa473,	// (0x0004d6fc) main_int_radio1_pane_t11

0xa499,	// (0x0004d722) main_int_radio1_pane_t12_ParamLimits

0xa499,	// (0x0004d722) main_int_radio1_pane_t12

0x000b,

0xfe77,	// (0x00053100) main_int_radio1_pane_t_ParamLimits

0xfe77,	// (0x00053100) main_int_radio1_pane_t

0xc2a7,	// (0x0004f530) int_radio_list_pane

0xc2af,	// (0x0004f538) scroll_pane_cp037

0xc446,	// (0x0004f6cf) list_double_large_graphic_int_radio_pane_ParamLimits

0xc446,	// (0x0004f6cf) list_double_large_graphic_int_radio_pane

0xc45a,	// (0x0004f6e3) list_double_large_graphic_int_radio_pane_g1

0xc463,	// (0x0004f6ec) list_double_large_graphic_int_radio_pane_t1

0xc471,	// (0x0004f6fa) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe90,	// (0x00053119) list_double_large_graphic_int_radio_pane_t

0xa832,	// (0x0004dabb) list_highlight_pane_cp027

0xc39f,	// (0x0004f628) main_button_pane_4

0xa039,	// (0x0004d2c2) main_welc_pane_g4_ParamLimits

0xa039,	// (0x0004d2c2) main_welc_pane_g4

0xa0b7,	// (0x0004d340) main_welc_pane_t4_ParamLimits

0xa0b7,	// (0x0004d340) main_welc_pane_t4

0xa0ce,	// (0x0004d357) main_welc_pane_t5_ParamLimits

0xa0ce,	// (0x0004d357) main_welc_pane_t5

0xa10f,	// (0x0004d398) main_welc_pane_t6_ParamLimits

0xa10f,	// (0x0004d398) main_welc_pane_t6

0xa1ed,	// (0x0004d476) welc_button_pane_2_ParamLimits

0xa1ed,	// (0x0004d476) welc_button_pane_2

0xa207,	// (0x0004d490) welc_button_pane_3_ParamLimits

0xa207,	// (0x0004d490) welc_button_pane_3

0xc3a7,	// (0x0004f630) welc_button_pane_4

0xa226,	// (0x0004d4af) welc_button_pane_5_ParamLimits

0xa226,	// (0x0004d4af) welc_button_pane_5

0x112e,	// (0x000443b7) main_popup_welc_pane

0xc48e,	// (0x0004f717) main_welc_sk_g3

0xc498,	// (0x0004f721) main_welc_sk_g4

0xc4a2,	// (0x0004f72b) main_welc_sk_t3

0xc4b2,	// (0x0004f73b) main_welc_sk_t4

0xc4c2,	// (0x0004f74b) popup_welc_pane_t4

0xc4d0,	// (0x0004f759) popup_welc_pane_t5

0xc4e0,	// (0x0004f769) popup_welc_pane_t6

0xa832,	// (0x0004dabb) main_acti_pane

0xa832,	// (0x0004dabb) main_sso_pane

0xa4ab,	// (0x0004d734) sso_body_pane_ParamLimits

0xa4ab,	// (0x0004d734) sso_body_pane

0xa4c0,	// (0x0004d749) sso_logo_pane_ParamLimits

0xa4c0,	// (0x0004d749) sso_logo_pane

0xa4f0,	// (0x0004d779) sso_sk_pane_ParamLimits

0xa4f0,	// (0x0004d779) sso_sk_pane

0xc7db,	// (0x0004fa64) main_sso_logo_pane_g1

0xa502,	// (0x0004d78b) sso_sk_pane_t1_ParamLimits

0xa502,	// (0x0004d78b) sso_sk_pane_t1

0xa51c,	// (0x0004d7a5) sso_sk_pane_t2_ParamLimits

0xa51c,	// (0x0004d7a5) sso_sk_pane_t2

0x0001,

0xfe95,	// (0x0005311e) sso_sk_pane_t_ParamLimits

0xfe95,	// (0x0005311e) sso_sk_pane_t

0xc522,	// (0x0004f7ab) aid_sso_gap

0xc52b,	// (0x0004f7b4) aid_sso_txt1

0xc535,	// (0x0004f7be) aid_sso_txt2

0xc53f,	// (0x0004f7c8) aid_sso_txt3

0x0002,

0xfe9a,	// (0x00053123) aid_sso_txt

0xc549,	// (0x0004f7d2) aid_sso_widget

0xa586,	// (0x0004d80f) sso_btn_pane_ParamLimits

0xa586,	// (0x0004d80f) sso_btn_pane

0xa60e,	// (0x0004d897) sso_option_pane_ParamLimits

0xa60e,	// (0x0004d897) sso_option_pane

0xa692,	// (0x0004d91b) sso_query_pane_ParamLimits

0xa692,	// (0x0004d91b) sso_query_pane

0xa6ea,	// (0x0004d973) sso_query_pane_cp01_ParamLimits

0xa6ea,	// (0x0004d973) sso_query_pane_cp01

0xa748,	// (0x0004d9d1) sso_t_hdr_pane_ParamLimits

0xa748,	// (0x0004d9d1) sso_t_hdr_pane

0xa76c,	// (0x0004d9f5) sso_t_nml_pane_ParamLimits

0xa76c,	// (0x0004d9f5) sso_t_nml_pane

0xc53f,	// (0x0004f7c8) sso_t_sub_pane

0xa4cd,	// (0x0004d756) sso_popup_window_ParamLimits

0xa4cd,	// (0x0004d756) sso_popup_window

0xa532,	// (0x0004d7bb) sso_apps_pane_ParamLimits

0xa532,	// (0x0004d7bb) sso_apps_pane

0xa55c,	// (0x0004d7e5) sso_body_pane_g1

0xa566,	// (0x0004d7ef) sso_body_pane_t1

0xa576,	// (0x0004d7ff) sso_body_pane_t2

0x0001,

0xfea1,	// (0x0005312a) sso_body_pane_t

0xa5d8,	// (0x0004d861) sso_btn_pane_cp01_ParamLimits

0xa5d8,	// (0x0004d861) sso_btn_pane_cp01

0xa666,	// (0x0004d8ef) sso_prog_pane_ParamLimits

0xa666,	// (0x0004d8ef) sso_prog_pane

0xc553,	// (0x0004f7dc) sso_t_hdr_pane_t1_ParamLimits

0xc553,	// (0x0004f7dc) sso_t_hdr_pane_t1

0xc566,	// (0x0004f7ef) input_focus_pane_cp10_ParamLimits

0xc566,	// (0x0004f7ef) input_focus_pane_cp10

0xc57c,	// (0x0004f805) sso_query_pane_t1_ParamLimits

0xc57c,	// (0x0004f805) sso_query_pane_t1

0xc58f,	// (0x0004f818) sso_query_pane_t2_ParamLimits

0xc58f,	// (0x0004f818) sso_query_pane_t2

0xc5a9,	// (0x0004f832) sso_query_pane_t3_ParamLimits

0xc5a9,	// (0x0004f832) sso_query_pane_t3

0xc5d3,	// (0x0004f85c) sso_query_pane_t4_ParamLimits

0xc5d3,	// (0x0004f85c) sso_query_pane_t4

0x0003,

0xfea6,	// (0x0005312f) sso_query_pane_t_ParamLimits

0xfea6,	// (0x0005312f) sso_query_pane_t

0xa832,	// (0x0004dabb) bg_button_pane_cp22

0xc47f,	// (0x0004f708) sso_btn_pane_t1

0xa7c2,	// (0x0004da4b) sso_t_nml_pane_t1_ParamLimits

0xa7c2,	// (0x0004da4b) sso_t_nml_pane_t1

0xc5f7,	// (0x0004f880) sso_option_row_pane_ParamLimits

0xc5f7,	// (0x0004f880) sso_option_row_pane

0xc604,	// (0x0004f88d) sso_t_sub_pane_t1_ParamLimits

0xc604,	// (0x0004f88d) sso_t_sub_pane_t1

0xa8af,	// (0x0004db38) bg_popup_window_pane_cp11_ParamLimits

0xa8af,	// (0x0004db38) bg_popup_window_pane_cp11

0xc617,	// (0x0004f8a0) popup_sk_window_cp01_ParamLimits

0xc617,	// (0x0004f8a0) popup_sk_window_cp01

0xc624,	// (0x0004f8ad) sso_popup_body_pane_ParamLimits

0xc624,	// (0x0004f8ad) sso_popup_body_pane

0xc631,	// (0x0004f8ba) scroll_pane_cp21_ParamLimits

0xc631,	// (0x0004f8ba) scroll_pane_cp21

0xc63e,	// (0x0004f8c7) sso_popup_body_t_pane_ParamLimits

0xc63e,	// (0x0004f8c7) sso_popup_body_t_pane

0xc64b,	// (0x0004f8d4) sso_popup_body_t_hdr_pane_ParamLimits

0xc64b,	// (0x0004f8d4) sso_popup_body_t_hdr_pane

0xc659,	// (0x0004f8e2) sso_popup_body_t_nml_pane_ParamLimits

0xc659,	// (0x0004f8e2) sso_popup_body_t_nml_pane

0xc674,	// (0x0004f8fd) sso_popup_body_t_sub_pane_ParamLimits

0xc674,	// (0x0004f8fd) sso_popup_body_t_sub_pane

0xc697,	// (0x0004f920) sso_popup_body_t_hdr_pane_t1

0xa7dd,	// (0x0004da66) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa7dd,	// (0x0004da66) sso_popup_body_t_nml_pane_t1

0xc6a7,	// (0x0004f930) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc6a7,	// (0x0004f930) sso_popup_body_t_sub_pane_t1

0xc7db,	// (0x0004fa64) sso_prog_pane_g1

0xa818,	// (0x0004daa1) sso_apps_pane_comp1_ParamLimits

0xa818,	// (0x0004daa1) sso_apps_pane_comp1

0xc6cc,	// (0x0004f955) sso_apps_pane_comp1_g1

0xc6d4,	// (0x0004f95d) sso_apps_pane_comp1_t1

0xc6e2,	// (0x0004f96b) sso_option_row_pane_g1

0xc6ea,	// (0x0004f973) sso_option_row_pane_t1

0x9f8e,	// (0x0004d217) bg_welc_area_ParamLimits

0x9f8e,	// (0x0004d217) bg_welc_area

0xa14d,	// (0x0004d3d6) sso_t_hdr_pane_a_t1_ParamLimits

0xa14d,	// (0x0004d3d6) sso_t_hdr_pane_a_t1

0xa168,	// (0x0004d3f1) sso_t_nml_pane_a_t1_ParamLimits

0xa168,	// (0x0004d3f1) sso_t_nml_pane_a_t1

0xa19b,	// (0x0004d424) sso_t_sub_pane_a_t1_ParamLimits

0xa19b,	// (0x0004d424) sso_t_sub_pane_a_t1

0xc47f,	// (0x0004f708) sso_btn_pane_t1_copy1

0xa832,	// (0x0004dabb) welc_button_pane_2_comp1

0xc4f0,	// (0x0004f779) sso_t_hdr_pane_p_t1

0xc500,	// (0x0004f789) sso_t_nml_pane_p_t1

0xc510,	// (0x0004f799) sso_t_sub_pane_p_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
