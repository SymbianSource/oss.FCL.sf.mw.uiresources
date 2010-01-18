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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000439d0 };

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
0x5f60,	// (0x00049930) Screen

0x5f6a,	// (0x0004993a) application_window

0x5f9c,	// (0x0004996c) area_bottom_pane_ParamLimits

0x5f9c,	// (0x0004996c) area_bottom_pane

0x5fcb,	// (0x0004999b) area_top_pane_ParamLimits

0x5fcb,	// (0x0004999b) area_top_pane

0xda00,	// (0x000513d0) call_video_uplink_pane_ParamLimits

0xda00,	// (0x000513d0) call_video_uplink_pane

0x604e,	// (0x00049a1e) main_pane_ParamLimits

0x604e,	// (0x00049a1e) main_pane

0x24a3,	// (0x00045e73) context_pane

0x8a41,	// (0x0004c411) navi_pane

0x8a5b,	// (0x0004c42b) popup_cale_events_window_ParamLimits

0x8a5b,	// (0x0004c42b) popup_cale_events_window

0x24b6,	// (0x00045e86) popup_mup_playback_window

0x8a72,	// (0x0004c442) signal_pane

0xe157,	// (0x00051b27) main_browser_pane

0xecd4,	// (0x000526a4) main_burst_pane

0x3210,	// (0x00046be0) main_calc_pane

0xecd4,	// (0x000526a4) main_cale_day_pane

0xe27f,	// (0x00051c4f) main_cale_month_pane

0xecd4,	// (0x000526a4) main_cale_week_pane

0xecd4,	// (0x000526a4) main_call_pane

0xde2d,	// (0x000517fd) main_call_poc_pane

0xecd4,	// (0x000526a4) main_camera_pane

0xecd4,	// (0x000526a4) main_chi_dic_pane

0xead3,	// (0x000524a3) main_clock_pane

0xde2d,	// (0x000517fd) main_fmradio_pane

0xecd4,	// (0x000526a4) main_graph_messa_pane

0xde2d,	// (0x000517fd) main_help_pane

0xe157,	// (0x00051b27) main_im_pane

0xe088,	// (0x00051a58) main_image_pane_ParamLimits

0xe088,	// (0x00051a58) main_image_pane

0xde2d,	// (0x000517fd) main_location2_pane

0xecd4,	// (0x000526a4) main_location_pane

0xde2d,	// (0x000517fd) main_messa_pane

0xde2d,	// (0x000517fd) main_mp2_pane

0xecd4,	// (0x000526a4) main_mp_pane

0xde2d,	// (0x000517fd) main_msg_pane

0xde2d,	// (0x000517fd) main_mup_eq_pane

0xde2d,	// (0x000517fd) main_mup_pane

0xecd4,	// (0x000526a4) main_notes_pane

0xde2d,	// (0x000517fd) main_pec_pane

0xde2d,	// (0x000517fd) main_phob_pane

0xde2d,	// (0x000517fd) main_pinb_pane

0xde2d,	// (0x000517fd) main_postcard_pane

0xde2d,	// (0x000517fd) main_qdial_pane

0xecd4,	// (0x000526a4) main_skin_pane

0xde2d,	// (0x000517fd) main_smil2_pane

0xecd4,	// (0x000526a4) main_smil_pane

0xecd4,	// (0x000526a4) main_video_pane

0xecd4,	// (0x000526a4) main_video_tele_pane

0xe088,	// (0x00051a58) main_viewer_pane_ParamLimits

0xe088,	// (0x00051a58) main_viewer_pane

0xecd4,	// (0x000526a4) main_vorec_pane

0x8973,	// (0x0004c343) popup_blid_sat_info_window_ParamLimits

0x8973,	// (0x0004c343) popup_blid_sat_info_window

0x8987,	// (0x0004c357) popup_dyc_status_message_window_ParamLimits

0x8987,	// (0x0004c357) popup_dyc_status_message_window

0x8993,	// (0x0004c363) popup_grid_large_graphic_window_ParamLimits

0x8993,	// (0x0004c363) popup_grid_large_graphic_window

0x89eb,	// (0x0004c3bb) popup_loc_request_window_ParamLimits

0x89eb,	// (0x0004c3bb) popup_loc_request_window

0x8a1b,	// (0x0004c3eb) popup_wml_address_window_ParamLimits

0x8a1b,	// (0x0004c3eb) popup_wml_address_window

0x8858,	// (0x0004c228) call_muted_g1

0x8593,	// (0x0004bf63) popup_call_audio_conf_window_ParamLimits

0x8593,	// (0x0004bf63) popup_call_audio_conf_window

0x8868,	// (0x0004c238) popup_call_audio_first_window_ParamLimits

0x8868,	// (0x0004c238) popup_call_audio_first_window

0x889c,	// (0x0004c26c) popup_call_audio_in_window_ParamLimits

0x889c,	// (0x0004c26c) popup_call_audio_in_window

0x88b8,	// (0x0004c288) popup_call_audio_out_window_ParamLimits

0x88b8,	// (0x0004c288) popup_call_audio_out_window

0x88d4,	// (0x0004c2a4) popup_call_audio_second_window_ParamLimits

0x88d4,	// (0x0004c2a4) popup_call_audio_second_window

0x88fc,	// (0x0004c2cc) popup_call_audio_wait_window_ParamLimits

0x88fc,	// (0x0004c2cc) popup_call_audio_wait_window

0x891b,	// (0x0004c2eb) popup_number_entry_window_ParamLimits

0x891b,	// (0x0004c2eb) popup_number_entry_window

0xda1c,	// (0x000513ec) bg_popup_call_pane_cp05_ParamLimits

0xda1c,	// (0x000513ec) bg_popup_call_pane_cp05

0xda3c,	// (0x0005140c) popup_number_entry_window_t1

0xda4f,	// (0x0005141f) popup_number_entry_window_t2

0xda61,	// (0x00051431) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00052abc) popup_number_entry_window_t

0xda73,	// (0x00051443) text_title_cp2

0xda86,	// (0x00051456) bg_popup_call_pane_cp_ParamLimits

0xda86,	// (0x00051456) bg_popup_call_pane_cp

0xda94,	// (0x00051464) call_thumbnail_pane

0xda9c,	// (0x0005146c) popup_call_audio_in_window_g1_ParamLimits

0xda9c,	// (0x0005146c) popup_call_audio_in_window_g1

0xdaa8,	// (0x00051478) popup_call_audio_in_window_g2_ParamLimits

0xdaa8,	// (0x00051478) popup_call_audio_in_window_g2

0xdab4,	// (0x00051484) popup_call_audio_in_window_g3_ParamLimits

0xdab4,	// (0x00051484) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00052ac5) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00052ac5) popup_call_audio_in_window_g

0xdac0,	// (0x00051490) popup_call_audio_in_window_t1_ParamLimits

0xdac0,	// (0x00051490) popup_call_audio_in_window_t1

0xdadb,	// (0x000514ab) popup_call_audio_in_window_t2_ParamLimits

0xdadb,	// (0x000514ab) popup_call_audio_in_window_t2

0xdaf6,	// (0x000514c6) popup_call_audio_in_window_t3_ParamLimits

0xdaf6,	// (0x000514c6) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00052acc) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00052acc) popup_call_audio_in_window_t

0xda86,	// (0x00051456) bg_popup_call_pane_cp01_ParamLimits

0xda86,	// (0x00051456) bg_popup_call_pane_cp01

0xda94,	// (0x00051464) call_thumbnail_pane_cp02

0xdb09,	// (0x000514d9) call_type_pane_cp022

0xdb11,	// (0x000514e1) popup_call_audio_out_window_g1_ParamLimits

0xdb11,	// (0x000514e1) popup_call_audio_out_window_g1

0xdb23,	// (0x000514f3) popup_call_audio_out_window_g2_ParamLimits

0xdb23,	// (0x000514f3) popup_call_audio_out_window_g2

0xdb2f,	// (0x000514ff) popup_call_audio_out_window_g3_ParamLimits

0xdb2f,	// (0x000514ff) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00052ad3) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00052ad3) popup_call_audio_out_window_g

0xdb41,	// (0x00051511) popup_call_audio_out_window_t1_ParamLimits

0xdb41,	// (0x00051511) popup_call_audio_out_window_t1

0xdb59,	// (0x00051529) popup_call_audio_out_window_t2_ParamLimits

0xdb59,	// (0x00051529) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00052ada) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00052ada) popup_call_audio_out_window_t

0xdb6e,	// (0x0005153e) bg_popup_call_pane_ParamLimits

0xdb6e,	// (0x0005153e) bg_popup_call_pane

0x61ff,	// (0x00049bcf) call_thumbnail_pane_cp_ParamLimits

0x61ff,	// (0x00049bcf) call_thumbnail_pane_cp

0xdbf2,	// (0x000515c2) call_type_pane_cp01_ParamLimits

0xdbf2,	// (0x000515c2) call_type_pane_cp01

0xdc36,	// (0x00051606) popup_call_audio_first_window_g1_ParamLimits

0xdc36,	// (0x00051606) popup_call_audio_first_window_g1

0xdc82,	// (0x00051652) popup_call_audio_first_window_g2_ParamLimits

0xdc82,	// (0x00051652) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00052adf) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00052adf) popup_call_audio_first_window_g

0xdcc6,	// (0x00051696) popup_call_audio_first_window_t1_ParamLimits

0xdcc6,	// (0x00051696) popup_call_audio_first_window_t1

0xdd72,	// (0x00051742) popup_call_audio_first_window_t4_ParamLimits

0xdd72,	// (0x00051742) popup_call_audio_first_window_t4

0xddfe,	// (0x000517ce) popup_call_audio_first_window_t5_ParamLimits

0xddfe,	// (0x000517ce) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00052ae4) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00052ae4) popup_call_audio_first_window_t

0xde2d,	// (0x000517fd) bg_popup_call_pane_cp02

0xde37,	// (0x00051807) call_type_pane_cp023

0xde3f,	// (0x0005180f) popup_call_audio_wait_window_g1

0xde47,	// (0x00051817) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00052aeb) popup_call_audio_wait_window_g

0xde4f,	// (0x0005181f) popup_call_audio_wait_window_t3

0xde5d,	// (0x0005182d) bg_popup_call_pane_cp03_ParamLimits

0xde5d,	// (0x0005182d) bg_popup_call_pane_cp03

0xdebd,	// (0x0005188d) call_thumbnail_pane_cp011_ParamLimits

0xdebd,	// (0x0005188d) call_thumbnail_pane_cp011

0xdec9,	// (0x00051899) call_type_pane_cp034_ParamLimits

0xdec9,	// (0x00051899) call_type_pane_cp034

0xdf05,	// (0x000518d5) popup_call_audio_second_window_g1_ParamLimits

0xdf05,	// (0x000518d5) popup_call_audio_second_window_g1

0xdf41,	// (0x00051911) popup_call_audio_second_window_g2_ParamLimits

0xdf41,	// (0x00051911) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00052af0) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00052af0) popup_call_audio_second_window_g

0xdf7d,	// (0x0005194d) popup_call_audio_second_window_t1_ParamLimits

0xdf7d,	// (0x0005194d) popup_call_audio_second_window_t1

0xdffe,	// (0x000519ce) popup_call_audio_second_window_t2_ParamLimits

0xdffe,	// (0x000519ce) popup_call_audio_second_window_t2

0xe034,	// (0x00051a04) popup_call_audio_second_window_t3_ParamLimits

0xe034,	// (0x00051a04) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00052af5) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00052af5) popup_call_audio_second_window_t

0xde2d,	// (0x000517fd) bg_popup_call_pane_cp04

0xe06a,	// (0x00051a3a) list_conf_pane

0xe072,	// (0x00051a42) popup_call_audio_conf_window_t1

0xe080,	// (0x00051a50) call_thumbnail_pane_g1

0xe088,	// (0x00051a58) bg_pinb_pane_ParamLimits

0xe088,	// (0x00051a58) bg_pinb_pane

0xe096,	// (0x00051a66) find_pinb_pane

0xe09f,	// (0x00051a6f) listscroll_pinb_pane_ParamLimits

0xe09f,	// (0x00051a6f) listscroll_pinb_pane

0xe0ae,	// (0x00051a7e) pinb_bg_pane_g1

0x6223,	// (0x00049bf3) pinb_bg_pane_g2

0x622d,	// (0x00049bfd) pinb_bg_pane_g3

0x6237,	// (0x00049c07) pinb_bg_pane_g4

0x6241,	// (0x00049c11) pinb_bg_pane_g5

0x624b,	// (0x00049c1b) pinb_bg_pane_g6

0x6256,	// (0x00049c26) pinb_bg_pane_g7

0x6261,	// (0x00049c31) pinb_bg_pane_g8

0x626a,	// (0x00049c3a) pinb_bg_pane_g9

0x6272,	// (0x00049c42) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00052afc) pinb_bg_pane_g

0x628f,	// (0x00049c5f) grid_pinb_pane

0x6298,	// (0x00049c68) list_pinb_pane

0x62a3,	// (0x00049c73) scroll_pane_cp01_ParamLimits

0x62a3,	// (0x00049c73) scroll_pane_cp01

0xe0b8,	// (0x00051a88) find_pinb_pane_g1_ParamLimits

0xe0b8,	// (0x00051a88) find_pinb_pane_g1

0xe0d0,	// (0x00051aa0) find_pinb_pane_t1

0xe0e2,	// (0x00051ab2) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00052b16) find_pinb_pane_t

0xe0f7,	// (0x00051ac7) input_focus_pane_cp01_ParamLimits

0xe0f7,	// (0x00051ac7) input_focus_pane_cp01

0x62b3,	// (0x00049c83) cell_pinb_pane_ParamLimits

0x62b3,	// (0x00049c83) cell_pinb_pane

0x62cc,	// (0x00049c9c) cell_pinb_pane_g1_ParamLimits

0x62cc,	// (0x00049c9c) cell_pinb_pane_g1

0x62e0,	// (0x00049cb0) cell_pinb_pane_g2_ParamLimits

0x62e0,	// (0x00049cb0) cell_pinb_pane_g2

0xe103,	// (0x00051ad3) cell_pinb_pane_g3_ParamLimits

0xe103,	// (0x00051ad3) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00052b1b) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00052b1b) cell_pinb_pane_g

0xde2d,	// (0x000517fd) grid_highlight_pane_cp01

0x62ec,	// (0x00049cbc) list_pinb_item_pane_ParamLimits

0x62ec,	// (0x00049cbc) list_pinb_item_pane

0xde2d,	// (0x000517fd) list_highlight_pane_cp02

0x6301,	// (0x00049cd1) list_pinb_item_pane_g1_ParamLimits

0x6301,	// (0x00049cd1) list_pinb_item_pane_g1

0x630e,	// (0x00049cde) list_pinb_item_pane_g2_ParamLimits

0x630e,	// (0x00049cde) list_pinb_item_pane_g2

0x631a,	// (0x00049cea) list_pinb_item_pane_g3_ParamLimits

0x631a,	// (0x00049cea) list_pinb_item_pane_g3

0x6329,	// (0x00049cf9) list_pinb_item_pane_g4_ParamLimits

0x6329,	// (0x00049cf9) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00052b22) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00052b22) list_pinb_item_pane_g

0x6335,	// (0x00049d05) list_pinb_item_pane_t1_ParamLimits

0x6335,	// (0x00049d05) list_pinb_item_pane_t1

0x6366,	// (0x00049d36) calc_display_pane

0x637e,	// (0x00049d4e) calc_paper_pane

0x639a,	// (0x00049d6a) grid_calc_pane

0xde2d,	// (0x000517fd) bg_list_pane_cp01

0x63ba,	// (0x00049d8a) clock_g1

0x63c2,	// (0x00049d92) clock_g2

0x0001,

0xf15b,	// (0x00052b2b) clock_g

0x63ca,	// (0x00049d9a) clock_t1_ParamLimits

0x63ca,	// (0x00049d9a) clock_t1

0x63df,	// (0x00049daf) clock_t2_ParamLimits

0x63df,	// (0x00049daf) clock_t2

0x63f1,	// (0x00049dc1) clock_t3_ParamLimits

0x63f1,	// (0x00049dc1) clock_t3

0x6403,	// (0x00049dd3) clock_t4_ParamLimits

0x6403,	// (0x00049dd3) clock_t4

0x6415,	// (0x00049de5) clock_t5_ParamLimits

0x6415,	// (0x00049de5) clock_t5

0x642a,	// (0x00049dfa) clock_t6_ParamLimits

0x642a,	// (0x00049dfa) clock_t6

0x643c,	// (0x00049e0c) clock_t7_ParamLimits

0x643c,	// (0x00049e0c) clock_t7

0x644e,	// (0x00049e1e) clock_t8_ParamLimits

0x644e,	// (0x00049e1e) clock_t8

0x6460,	// (0x00049e30) clock_t9_ParamLimits

0x6460,	// (0x00049e30) clock_t9

0x0008,

0xf160,	// (0x00052b30) clock_t_ParamLimits

0xf160,	// (0x00052b30) clock_t

0xe10f,	// (0x00051adf) popup_clock_analogue_window_cp02

0xe10f,	// (0x00051adf) popup_clock_digital_window_cp01

0xe117,	// (0x00051ae7) listscroll_help_pane

0xde2d,	// (0x000517fd) phob_pre_status_pane

0xe121,	// (0x00051af1) grid_qdial_pane

0xde2d,	// (0x000517fd) listscroll_mce_pane

0xe12b,	// (0x00051afb) bg_notes_pane

0xe135,	// (0x00051b05) list_notes_pane

0x6472,	// (0x00049e42) scroll_pane_cp06

0xe13f,	// (0x00051b0f) bg_calc_paper_pane

0x6485,	// (0x00049e55) list_calc_pane

0xe157,	// (0x00051b27) bg_calc_display_pane

0x649f,	// (0x00049e6f) calc_display_pane_t1

0x64b4,	// (0x00049e84) calc_display_pane_t2

0x64c9,	// (0x00049e99) calc_display_pane_t3

0x0002,

0xf173,	// (0x00052b43) calc_display_pane_t

0x64db,	// (0x00049eab) cell_calc_pane_ParamLimits

0x64db,	// (0x00049eab) cell_calc_pane

0xe163,	// (0x00051b33) bg_calc_paper_pane_g1

0xe16f,	// (0x00051b3f) bg_calc_paper_pane_g2

0xe17b,	// (0x00051b4b) bg_calc_paper_pane_g3

0xe187,	// (0x00051b57) bg_calc_paper_pane_g4

0xe193,	// (0x00051b63) bg_calc_paper_pane_g5

0x6502,	// (0x00049ed2) bg_calc_paper_pane_g6

0x6511,	// (0x00049ee1) bg_calc_paper_pane_g7

0x6520,	// (0x00049ef0) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00052b4a) bg_calc_paper_pane_g

0x652f,	// (0x00049eff) calc_bg_paper_pane_g9

0x653e,	// (0x00049f0e) list_calc_item_pane_ParamLimits

0x653e,	// (0x00049f0e) list_calc_item_pane

0xe19f,	// (0x00051b6f) list_calc_item_pane_g1

0x6557,	// (0x00049f27) list_calc_item_pane_t1_ParamLimits

0x6557,	// (0x00049f27) list_calc_item_pane_t1

0x6569,	// (0x00049f39) list_calc_item_pane_t2_ParamLimits

0x6569,	// (0x00049f39) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00052b5b) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00052b5b) list_calc_item_pane_t

0xe1ac,	// (0x00051b7c) cell_calc_pane_g1

0xe1b6,	// (0x00051b86) grid_highlight_pane_cp02

0xe1d8,	// (0x00051ba8) bg_calc_display_pane_g1

0x6597,	// (0x00049f67) bg_calc_display_pane_g2

0xe1e1,	// (0x00051bb1) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00052b65) bg_calc_display_pane_g

0x65a1,	// (0x00049f71) cell_qdial_pane_ParamLimits

0x65a1,	// (0x00049f71) cell_qdial_pane

0x65b3,	// (0x00049f83) cell_qdial_pane_g1_ParamLimits

0x65b3,	// (0x00049f83) cell_qdial_pane_g1

0x65c0,	// (0x00049f90) cell_qdial_pane_g2_ParamLimits

0x65c0,	// (0x00049f90) cell_qdial_pane_g2

0xe1ea,	// (0x00051bba) cell_qdial_pane_g3_ParamLimits

0xe1ea,	// (0x00051bba) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00052b6c) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00052b6c) cell_qdial_pane_g

0x65de,	// (0x00049fae) cell_qdial_pane_t1_ParamLimits

0x65de,	// (0x00049fae) cell_qdial_pane_t1

0x65f6,	// (0x00049fc6) cell_qdial_pane_t2_ParamLimits

0x65f6,	// (0x00049fc6) cell_qdial_pane_t2

0x6609,	// (0x00049fd9) cell_qdial_pane_t3_ParamLimits

0x6609,	// (0x00049fd9) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00052b75) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00052b75) cell_qdial_pane_t

0xde2d,	// (0x000517fd) grid_highlight_pane_cp04

0xe1f6,	// (0x00051bc6) thumbnail_qdial_pane_ParamLimits

0xe1f6,	// (0x00051bc6) thumbnail_qdial_pane

0xe252,	// (0x00051c22) list_help_pane

0xe25c,	// (0x00051c2c) scroll_pane_cp02

0x661c,	// (0x00049fec) help_list_pane_t1_ParamLimits

0x661c,	// (0x00049fec) help_list_pane_t1

0x663a,	// (0x0004a00a) bg_notes_pane_g2

0x6642,	// (0x0004a012) bg_notes_pane_g3

0x664a,	// (0x0004a01a) notes_bg_pane_g1

0x6652,	// (0x0004a022) notes_bg_pane_g4

0x665a,	// (0x0004a02a) notes_bg_pane_g5

0x6662,	// (0x0004a032) notes_bg_pane_g6

0x666a,	// (0x0004a03a) notes_bg_pane_g7

0x6672,	// (0x0004a042) notes_bg_pane_g8

0x667a,	// (0x0004a04a) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00052b93) notes_bg_pane_g

0x6682,	// (0x0004a052) list_notes_text_pane_ParamLimits

0x6682,	// (0x0004a052) list_notes_text_pane

0xe265,	// (0x00051c35) list_notes_text_pane_g1

0x6698,	// (0x0004a068) list_notes_text_pane_t1

0xe27f,	// (0x00051c4f) listscroll_cale_week_pane

0x66c1,	// (0x0004a091) bg_cale_heading_pane

0xe28e,	// (0x00051c5e) bg_cale_pane_cp01

0x66d5,	// (0x0004a0a5) cale_week_corner_pane

0x66eb,	// (0x0004a0bb) cale_week_day_heading_pane

0x66ff,	// (0x0004a0cf) cale_week_scroll_pane_g1

0x6710,	// (0x0004a0e0) cale_week_scroll_pane_g2

0x6721,	// (0x0004a0f1) cale_week_scroll_pane_g3

0x6732,	// (0x0004a102) cale_week_scroll_pane_g4

0x6743,	// (0x0004a113) cale_week_scroll_pane_g5

0x6754,	// (0x0004a124) cale_week_scroll_pane_g6

0x6765,	// (0x0004a135) cale_week_scroll_pane_g7

0x6776,	// (0x0004a146) cale_week_scroll_pane_g8

0x6787,	// (0x0004a157) cale_week_scroll_pane_g9

0x6798,	// (0x0004a168) cale_week_scroll_pane_g10

0x67a9,	// (0x0004a179) cale_week_scroll_pane_g11

0x67ba,	// (0x0004a18a) cale_week_scroll_pane_g12

0x67cb,	// (0x0004a19b) cale_week_scroll_pane_g13

0x67dc,	// (0x0004a1ac) cale_week_scroll_pane_g14

0x67ed,	// (0x0004a1bd) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00052ba2) cale_week_scroll_pane_g

0x67fe,	// (0x0004a1ce) cale_week_time_pane

0x680f,	// (0x0004a1df) grid_cale_week_pane

0x6822,	// (0x0004a1f2) scroll_pane_cp08

0x683a,	// (0x0004a20a) cell_cale_week_pane_ParamLimits

0x683a,	// (0x0004a20a) cell_cale_week_pane

0x6876,	// (0x0004a246) cale_week_day_heading_pane_t1

0x688f,	// (0x0004a25f) cale_week_day_heading_pane_t2

0x68a8,	// (0x0004a278) cale_week_day_heading_pane_t3

0x68c1,	// (0x0004a291) cale_week_day_heading_pane_t4

0x68da,	// (0x0004a2aa) cale_week_day_heading_pane_t5

0x68f3,	// (0x0004a2c3) cale_week_day_heading_pane_t6

0x690c,	// (0x0004a2dc) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00052bc1) cale_week_day_heading_pane_t

0xe2b9,	// (0x00051c89) bg_cale_side_pane

0x6925,	// (0x0004a2f5) cale_week_time_pane_t1

0x6951,	// (0x0004a321) cale_week_time_pane_t2

0x697d,	// (0x0004a34d) cale_week_time_pane_t3

0x69a9,	// (0x0004a379) cale_week_time_pane_t4

0x69d5,	// (0x0004a3a5) cale_week_time_pane_t5

0x6a01,	// (0x0004a3d1) cale_week_time_pane_t6

0x6a2d,	// (0x0004a3fd) cale_week_time_pane_t7

0x6a59,	// (0x0004a429) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00052bd0) cale_week_time_pane_t

0x6a85,	// (0x0004a455) cell_cale_week_pane_g2

0x6aa1,	// (0x0004a471) cell_cale_week_pane_g3_ParamLimits

0x6aa1,	// (0x0004a471) cell_cale_week_pane_g3

0xe2c7,	// (0x00051c97) grid_highlight_pane_cp07

0xe2cf,	// (0x00051c9f) listscroll_gms_pane

0xe2d9,	// (0x00051ca9) grid_gms_pane

0xe2e2,	// (0x00051cb2) listscroll_gms_pane_g1

0xe2ea,	// (0x00051cba) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00052be1) listscroll_gms_pane_g

0x6ab9,	// (0x0004a489) scroll_pane_cp010

0x6ac2,	// (0x0004a492) cell_gms_pane_ParamLimits

0x6ac2,	// (0x0004a492) cell_gms_pane

0x6ad3,	// (0x0004a4a3) cell_gms_pane_g1

0xe2f2,	// (0x00051cc2) cell_gms_pane_g2

0xe265,	// (0x00051c35) cell_gms_pane_g3

0xe2fa,	// (0x00051cca) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00052be6) cell_gms_pane_g

0xe303,	// (0x00051cd3) grid_highlight_pane_cp09

0x8806,	// (0x0004c1d6) phob_pre_status_pane_g1

0x880e,	// (0x0004c1de) phob_pre_status_pane_g2

0x8816,	// (0x0004c1e6) phob_pre_status_pane_g3

0x881e,	// (0x0004c1ee) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x00052fe8) phob_pre_status_pane_g

0x882e,	// (0x0004c1fe) phob_pre_status_pane_t1

0x883c,	// (0x0004c20c) phob_pre_status_pane_t2

0x884a,	// (0x0004c21a) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x00052ff3) phob_pre_status_pane_t

0xde2d,	// (0x000517fd) bg_list_pane_cp05

0x6ae3,	// (0x0004a4b3) grid_vorec_pane

0x6aeb,	// (0x0004a4bb) vorec_t1

0x6af9,	// (0x0004a4c9) vorec_t2

0x6b07,	// (0x0004a4d7) vorec_t3

0x6b15,	// (0x0004a4e5) vorec_t4

0x6b23,	// (0x0004a4f3) vorec_t5

0x6b31,	// (0x0004a501) vorec_t6

0x0006,

0xf21f,	// (0x00052bef) vorec_t

0x6b4d,	// (0x0004a51d) wait_bar_pane_cp01

0xe30b,	// (0x00051cdb) cell_vorec_pane_ParamLimits

0xe30b,	// (0x00051cdb) cell_vorec_pane

0xe31e,	// (0x00051cee) cell_vorec_pane_g1

0xde2d,	// (0x000517fd) grid_highlight_pane_cp05

0x6b61,	// (0x0004a531) cams_zoom_pane

0x6b6d,	// (0x0004a53d) image_vga_pane

0x6b7a,	// (0x0004a54a) main_camera_pane_g1

0x6b86,	// (0x0004a556) main_camera_pane_g2

0x6b92,	// (0x0004a562) main_camera_pane_g3

0x6b9e,	// (0x0004a56e) main_camera_pane_g4

0x6baa,	// (0x0004a57a) main_camera_pane_g5

0x6bb6,	// (0x0004a586) main_camera_pane_g6

0x6bc2,	// (0x0004a592) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00052bfe) main_camera_pane_g

0x6bce,	// (0x0004a59e) main_camera_pane_t1

0x6be0,	// (0x0004a5b0) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00052c0f) main_camera_pane_t

0x6c04,	// (0x0004a5d4) cams_zoom_pane_cp_ParamLimits

0x6c04,	// (0x0004a5d4) cams_zoom_pane_cp

0x6c28,	// (0x0004a5f8) image_cif_pane_ParamLimits

0x6c28,	// (0x0004a5f8) image_cif_pane

0x6c42,	// (0x0004a612) image_subqcif_pane

0x6c4a,	// (0x0004a61a) main_video_pane_g1_ParamLimits

0x6c4a,	// (0x0004a61a) main_video_pane_g1

0x6c6a,	// (0x0004a63a) main_video_pane_g2_ParamLimits

0x6c6a,	// (0x0004a63a) main_video_pane_g2

0x6c98,	// (0x0004a668) main_video_pane_g3_ParamLimits

0x6c98,	// (0x0004a668) main_video_pane_g3

0x6cc1,	// (0x0004a691) main_video_pane_g4_ParamLimits

0x6cc1,	// (0x0004a691) main_video_pane_g4

0x6cea,	// (0x0004a6ba) main_video_pane_g5_ParamLimits

0x6cea,	// (0x0004a6ba) main_video_pane_g5

0xe334,	// (0x00051d04) main_video_pane_g6_ParamLimits

0xe334,	// (0x00051d04) main_video_pane_g6

0x0006,

0xf244,	// (0x00052c14) main_video_pane_g_ParamLimits

0xf244,	// (0x00052c14) main_video_pane_g

0x6d0c,	// (0x0004a6dc) main_video_pane_t1_ParamLimits

0x6d0c,	// (0x0004a6dc) main_video_pane_t1

0xe34e,	// (0x00051d1e) cams_zoom_pane_g1

0xe357,	// (0x00051d27) cams_zoom_pane_g2

0xe360,	// (0x00051d30) cams_zoom_pane_g3

0xe369,	// (0x00051d39) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00052c23) cams_zoom_pane_g

0x6d56,	// (0x0004a726) grid_cams_pane

0x6d62,	// (0x0004a732) linegrid_cams_pane

0x6d6e,	// (0x0004a73e) cell_cams_pane_ParamLimits

0x6d6e,	// (0x0004a73e) cell_cams_pane

0xe372,	// (0x00051d42) cams_burst_image_pane

0xe37a,	// (0x00051d4a) cell_cams_pane_g1

0xde2d,	// (0x000517fd) grid_highlight_pane_cp03

0xe1ac,	// (0x00051b7c) mp_bg_pane_g1

0xde2d,	// (0x000517fd) bg_list_pane_cp03

0x237f,	// (0x00045d4f) bg_mp_pane

0x2387,	// (0x00045d57) grid_mp_pane

0x238f,	// (0x00045d5f) media_player_g1

0x2397,	// (0x00045d67) media_player_t1

0x23a5,	// (0x00045d75) media_player_t2

0x23b3,	// (0x00045d83) media_player_t3

0x23c1,	// (0x00045d91) media_player_t4

0x23cf,	// (0x00045d9f) media_player_t5

0x23dd,	// (0x00045dad) media_player_t6

0x23eb,	// (0x00045dbb) media_player_t7

0x0006,

0xf602,	// (0x00052fd2) media_player_t

0x23f9,	// (0x00045dc9) wait_bar_pane_cp02

0xf5e7,	// (0x00052fb7) main_usb_pane_t

0x87fd,	// (0x0004c1cd) cell_mp_pane

0xe1ac,	// (0x00051b7c) cell_mp_pane_g1

0xde2d,	// (0x000517fd) grid_highlight_pane_cp06

0xe382,	// (0x00051d52) grid_skin_colour_pane

0xe38a,	// (0x00051d5a) list_highlight_pane_cp03

0x6dd1,	// (0x0004a7a1) skin_g1

0xe392,	// (0x00051d62) skin_t1

0xe3a1,	// (0x00051d71) skin_t2

0x0001,

0xf288,	// (0x00052c58) skin_t

0x6dd9,	// (0x0004a7a9) cell_skin_colour_pane_ParamLimits

0x6dd9,	// (0x0004a7a9) cell_skin_colour_pane

0xe3af,	// (0x00051d7f) cell_skin_colour_pane_g1

0x6e4f,	// (0x0004a81f) call_video_g1_ParamLimits

0x6e4f,	// (0x0004a81f) call_video_g1

0x6e5b,	// (0x0004a82b) call_video_g2_ParamLimits

0x6e5b,	// (0x0004a82b) call_video_g2

0x0001,

0xf28d,	// (0x00052c5d) call_video_g_ParamLimits

0xf28d,	// (0x00052c5d) call_video_g

0x6eab,	// (0x0004a87b) call_video_uplink_pane_cp1_ParamLimits

0x6eab,	// (0x0004a87b) call_video_uplink_pane_cp1

0xe3c1,	// (0x00051d91) call_video_uplink_pane_cp2

0x6f67,	// (0x0004a937) video_down_crop_pane_ParamLimits

0x6f67,	// (0x0004a937) video_down_crop_pane

0x7031,	// (0x0004aa01) video_down_pane_ParamLimits

0x7031,	// (0x0004aa01) video_down_pane

0xe3c9,	// (0x00051d99) video_down_subqcif_pane_ParamLimits

0xe3c9,	// (0x00051d99) video_down_subqcif_pane

0xe3e1,	// (0x00051db1) video_down_subqcif_pane_cp_ParamLimits

0xe3e1,	// (0x00051db1) video_down_subqcif_pane_cp

0xe405,	// (0x00051dd5) im_reading_pane_ParamLimits

0xe405,	// (0x00051dd5) im_reading_pane

0x70fd,	// (0x0004aacd) im_writing_pane_ParamLimits

0x70fd,	// (0x0004aacd) im_writing_pane

0x7113,	// (0x0004aae3) im_reading_pane_t1

0xe41f,	// (0x00051def) list_im_pane

0xe430,	// (0x00051e00) scroll_pane_cp07

0x714b,	// (0x0004ab1b) im_writing_pane_t1_ParamLimits

0x714b,	// (0x0004ab1b) im_writing_pane_t1

0xe449,	// (0x00051e19) im_writing_pane_t2_ParamLimits

0xe449,	// (0x00051e19) im_writing_pane_t2

0x0001,

0xf297,	// (0x00052c67) im_writing_pane_t_ParamLimits

0xf297,	// (0x00052c67) im_writing_pane_t

0xde2d,	// (0x000517fd) input_focus_pane_cp04

0xde2d,	// (0x000517fd) input_focus_pane_cp05

0x7160,	// (0x0004ab30) list_im_single_pane_ParamLimits

0x7160,	// (0x0004ab30) list_im_single_pane

0xe466,	// (0x00051e36) list_single_im_pane_t1

0x87c3,	// (0x0004c193) blid_accuracy_pane

0x87cb,	// (0x0004c19b) blid_compass_pane

0x87d3,	// (0x0004c1a3) main_location_t1

0x87e1,	// (0x0004c1b1) main_location_t2

0x87ef,	// (0x0004c1bf) main_location_t3

0x0002,

0xf611,	// (0x00052fe1) main_location_t

0xde2d,	// (0x000517fd) aid_levels_location

0xe1ac,	// (0x00051b7c) blid_accuracy_pane_g1

0xe1ac,	// (0x00051b7c) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00052cc9) blid_accuracy_pane_g

0xe4a0,	// (0x00051e70) wml_content_pane

0xe4de,	// (0x00051eae) wml_button_pane_ParamLimits

0xe4de,	// (0x00051eae) wml_button_pane

0x7178,	// (0x0004ab48) wml_list_single_large_pane_ParamLimits

0x7178,	// (0x0004ab48) wml_list_single_large_pane

0x718f,	// (0x0004ab5f) wml_list_single_medium_pane_ParamLimits

0x718f,	// (0x0004ab5f) wml_list_single_medium_pane

0x71a7,	// (0x0004ab77) wml_list_single_small_pane_ParamLimits

0x71a7,	// (0x0004ab77) wml_list_single_small_pane

0xe4f2,	// (0x00051ec2) wml_selection_box_pane_ParamLimits

0xe4f2,	// (0x00051ec2) wml_selection_box_pane

0xe505,	// (0x00051ed5) wml_list_single_pane_t1

0xe514,	// (0x00051ee4) wml_list_single_medium_pane_t1

0xe523,	// (0x00051ef3) wml_list_single_large_pane_t1

0xe532,	// (0x00051f02) input_focus_pane_cp02_ParamLimits

0xe532,	// (0x00051f02) input_focus_pane_cp02

0xe545,	// (0x00051f15) wml_selection_box_pane_g1

0xe54e,	// (0x00051f1e) wml_selection_box_pane_t1_ParamLimits

0xe54e,	// (0x00051f1e) wml_selection_box_pane_t1

0xe088,	// (0x00051a58) bg_wml_button_pane_ParamLimits

0xe088,	// (0x00051a58) bg_wml_button_pane

0xe566,	// (0x00051f36) wml_button_pane_g1

0xe56e,	// (0x00051f3e) wml_button_pane_t1

0xe566,	// (0x00051f36) wml_button_bg_pane_g1

0xe57e,	// (0x00051f4e) wml_button_bg_pane_g2

0xe586,	// (0x00051f56) wml_button_bg_pane_g3

0xe58e,	// (0x00051f5e) wml_button_bg_pane_g4

0xe596,	// (0x00051f66) wml_button_bg_pane_g5

0xe59e,	// (0x00051f6e) wml_button_bg_pane_g6

0xe5a6,	// (0x00051f76) wml_button_bg_pane_g7

0xe5ae,	// (0x00051f7e) wml_button_bg_pane_g8

0xe5b6,	// (0x00051f86) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00052c6c) wml_button_bg_pane_g

0x71c2,	// (0x0004ab92) bg_list_pane_cp02

0xe5be,	// (0x00051f8e) mce_header_pane_ParamLimits

0xe5be,	// (0x00051f8e) mce_header_pane

0xe5d2,	// (0x00051fa2) mce_icon_pane

0xe5d2,	// (0x00051fa2) mce_image_pane

0xe5db,	// (0x00051fab) mce_text_pane_ParamLimits

0xe5db,	// (0x00051fab) mce_text_pane

0x71cb,	// (0x0004ab9b) scroll_pane_cp03

0x71cb,	// (0x0004ab9b) scroll_pane_cp04

0xe5ef,	// (0x00051fbf) scroll_pane_cp05_ParamLimits

0xe5ef,	// (0x00051fbf) scroll_pane_cp05

0x71d3,	// (0x0004aba3) mce_header_field_pane_ParamLimits

0x71d3,	// (0x0004aba3) mce_header_field_pane

0x71f3,	// (0x0004abc3) mce_header_field_pane_2_ParamLimits

0x71f3,	// (0x0004abc3) mce_header_field_pane_2

0x7209,	// (0x0004abd9) mce_header_field_pane_3

0x7211,	// (0x0004abe1) list_single_mce_message_pane_ParamLimits

0x7211,	// (0x0004abe1) list_single_mce_message_pane

0x7228,	// (0x0004abf8) list_single_mce_smart_pane_ParamLimits

0x7228,	// (0x0004abf8) list_single_mce_smart_pane

0xe5fb,	// (0x00051fcb) input_focus_pane_cp03

0xe604,	// (0x00051fd4) list_header_data_pane

0x724a,	// (0x0004ac1a) mce_header_field_pane_t1

0x7258,	// (0x0004ac28) list_single_mce_header_pane_ParamLimits

0x7258,	// (0x0004ac28) list_single_mce_header_pane

0xe60c,	// (0x00051fdc) list_single_mce_header_pane_t1

0xe61b,	// (0x00051feb) list_single_mce_message_pane_g1

0xe624,	// (0x00051ff4) list_single_mce_message_pane_t1

0x728e,	// (0x0004ac5e) bg_cale_heading_pane_cp01_ParamLimits

0x728e,	// (0x0004ac5e) bg_cale_heading_pane_cp01

0xe633,	// (0x00052003) bg_cale_pane_cp02_ParamLimits

0xe633,	// (0x00052003) bg_cale_pane_cp02

0x72b1,	// (0x0004ac81) cale_month_corner_pane

0x72c7,	// (0x0004ac97) cale_month_day_heading_pane_ParamLimits

0x72c7,	// (0x0004ac97) cale_month_day_heading_pane

0x72ea,	// (0x0004acba) cale_month_pane_g1_ParamLimits

0x72ea,	// (0x0004acba) cale_month_pane_g1

0x7306,	// (0x0004acd6) cale_month_pane_g2_ParamLimits

0x7306,	// (0x0004acd6) cale_month_pane_g2

0x731f,	// (0x0004acef) cale_month_pane_g3_ParamLimits

0x731f,	// (0x0004acef) cale_month_pane_g3

0x734b,	// (0x0004ad1b) cale_month_pane_g4_ParamLimits

0x734b,	// (0x0004ad1b) cale_month_pane_g4

0x7377,	// (0x0004ad47) cale_month_pane_g5_ParamLimits

0x7377,	// (0x0004ad47) cale_month_pane_g5

0x73a3,	// (0x0004ad73) cale_month_pane_g6_ParamLimits

0x73a3,	// (0x0004ad73) cale_month_pane_g6

0x73cf,	// (0x0004ad9f) cale_month_pane_g7_ParamLimits

0x73cf,	// (0x0004ad9f) cale_month_pane_g7

0x73fb,	// (0x0004adcb) cale_month_pane_g8_ParamLimits

0x73fb,	// (0x0004adcb) cale_month_pane_g8

0x7427,	// (0x0004adf7) cale_month_pane_g9_ParamLimits

0x7427,	// (0x0004adf7) cale_month_pane_g9

0x7451,	// (0x0004ae21) cale_month_pane_g10_ParamLimits

0x7451,	// (0x0004ae21) cale_month_pane_g10

0x747b,	// (0x0004ae4b) cale_month_pane_g11_ParamLimits

0x747b,	// (0x0004ae4b) cale_month_pane_g11

0x74a5,	// (0x0004ae75) cale_month_pane_g12_ParamLimits

0x74a5,	// (0x0004ae75) cale_month_pane_g12

0x74cf,	// (0x0004ae9f) cale_month_pane_g13_ParamLimits

0x74cf,	// (0x0004ae9f) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00052c7f) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00052c7f) cale_month_pane_g

0x74f9,	// (0x0004aec9) cale_month_week_pane

0x750a,	// (0x0004aeda) grid_cale_month_pane_ParamLimits

0x750a,	// (0x0004aeda) grid_cale_month_pane

0x7528,	// (0x0004aef8) cale_month_day_heading_pane_t1

0x7586,	// (0x0004af56) cale_month_day_heading_pane_t2

0x75eb,	// (0x0004afbb) cale_month_day_heading_pane_t3

0x7650,	// (0x0004b020) cale_month_day_heading_pane_t4

0x76b5,	// (0x0004b085) cale_month_day_heading_pane_t5

0x771a,	// (0x0004b0ea) cale_month_day_heading_pane_t6

0x777f,	// (0x0004b14f) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00052c9a) cale_month_day_heading_pane_t

0xe2b9,	// (0x00051c89) bg_cale_side_pane_cp01

0x77e4,	// (0x0004b1b4) cale_month_week_pane_t1

0x77fb,	// (0x0004b1cb) cale_month_week_pane_t2

0x7812,	// (0x0004b1e2) cale_month_week_pane_t3

0x7829,	// (0x0004b1f9) cale_month_week_pane_t4

0x7840,	// (0x0004b210) cale_month_week_pane_t5

0x7857,	// (0x0004b227) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00052ca9) cale_month_week_pane_t

0x786e,	// (0x0004b23e) cell_cale_month_pane_ParamLimits

0x786e,	// (0x0004b23e) cell_cale_month_pane

0x7914,	// (0x0004b2e4) cell_cale_month_pane_g1

0x7920,	// (0x0004b2f0) cell_cale_month_pane_t1_ParamLimits

0x7920,	// (0x0004b2f0) cell_cale_month_pane_t1

0xe2c7,	// (0x00051c97) grid_highlight_pane_cp08

0xe1ac,	// (0x00051b7c) main_smil_g1

0x793c,	// (0x0004b30c) smil_status_pane

0xe668,	// (0x00052038) smil_text_pane

0x225f,	// (0x00045c2f) bg_popup_call3_rect_pane_g8

0x2267,	// (0x00045c37) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00052f62) bg_popup_call3_rect_pane_g

0x2530,	// (0x00045f00) smil_status_volume_pane_g1

0xe672,	// (0x00052042) smil_status_pane_t1

0x8b04,	// (0x0004c4d4) volume_smil_pane

0xe689,	// (0x00052059) list_smil_text_pane

0x794d,	// (0x0004b31d) scroll_pane_cp011

0x7956,	// (0x0004b326) smil_text_list_pane_t1_ParamLimits

0x7956,	// (0x0004b326) smil_text_list_pane_t1

0x799b,	// (0x0004b36b) aid_volume_smil_ParamLimits

0x799b,	// (0x0004b36b) aid_volume_smil

0xe1ac,	// (0x00051b7c) smil_volume_pane_g1

0xe1ac,	// (0x00051b7c) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00052cc9) smil_volume_pane_g

0xe157,	// (0x00051b27) listscroll_cale_day_pane

0xe693,	// (0x00052063) bg_cale_pane

0xe6ab,	// (0x0005207b) list_cale_pane

0xe6bc,	// (0x0005208c) scroll_pane_cp09

0xe6cd,	// (0x0005209d) cale_bg_pane_g1

0xe6d5,	// (0x000520a5) cale_bg_pane_g2

0xe6dd,	// (0x000520ad) cale_bg_pane_g3

0xe6e5,	// (0x000520b5) cale_bg_pane_g4

0xe6ed,	// (0x000520bd) cale_bg_pane_g5

0xe6f5,	// (0x000520c5) cale_bg_pane_g6

0xe6fd,	// (0x000520cd) cale_bg_pane_g7

0xe705,	// (0x000520d5) cale_bg_pane_g8

0xe70d,	// (0x000520dd) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00052cce) cale_bg_pane_g

0x79bd,	// (0x0004b38d) list_cale_time_pane_ParamLimits

0x79bd,	// (0x0004b38d) list_cale_time_pane

0xe715,	// (0x000520e5) list_cale_time_pane_g1_ParamLimits

0xe715,	// (0x000520e5) list_cale_time_pane_g1

0xe721,	// (0x000520f1) list_cale_time_pane_g2_ParamLimits

0xe721,	// (0x000520f1) list_cale_time_pane_g2

0x79d4,	// (0x0004b3a4) list_cale_time_pane_g3_ParamLimits

0x79d4,	// (0x0004b3a4) list_cale_time_pane_g3

0x79e0,	// (0x0004b3b0) list_cale_time_pane_g4_ParamLimits

0x79e0,	// (0x0004b3b0) list_cale_time_pane_g4

0x79ec,	// (0x0004b3bc) list_cale_time_pane_g5_ParamLimits

0x79ec,	// (0x0004b3bc) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00052ce1) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00052ce1) list_cale_time_pane_g

0xe73b,	// (0x0005210b) list_cale_time_pane_t1_ParamLimits

0xe73b,	// (0x0005210b) list_cale_time_pane_t1

0xe763,	// (0x00052133) list_cale_time_pane_t2_ParamLimits

0xe763,	// (0x00052133) list_cale_time_pane_t2

0x7d03,	// (0x0004b6d3) aid_blid_cardinal_pane

0x7d41,	// (0x0004b711) compass_pane_t4

0xe78b,	// (0x0005215b) list_cale_time_pane_t4_ParamLimits

0xe78b,	// (0x0005215b) list_cale_time_pane_t4

0x7d4f,	// (0x0004b71f) compass_pane_t5

0x7d5d,	// (0x0004b72d) compass_pane_t6

0x7d6b,	// (0x0004b73b) compass_pane_t7

0xebd7,	// (0x000525a7) navi_pane_cc_t1

0xed7b,	// (0x0005274b) aid_phob_thumbnail_center_pane

0x8370,	// (0x0004bd40) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00052cee) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00052cee) list_cale_time_pane_t

0xda86,	// (0x00051456) bg_popup_window_pane_cp02_ParamLimits

0xda86,	// (0x00051456) bg_popup_window_pane_cp02

0xe7b3,	// (0x00052183) heading_pane_cp01_ParamLimits

0xe7b3,	// (0x00052183) heading_pane_cp01

0xe7bf,	// (0x0005218f) loc_req_pane_ParamLimits

0xe7bf,	// (0x0005218f) loc_req_pane

0xe7cf,	// (0x0005219f) loc_type_pane_ParamLimits

0xe7cf,	// (0x0005219f) loc_type_pane

0xe7e1,	// (0x000521b1) loc_type_pane_t1_ParamLimits

0xe7e1,	// (0x000521b1) loc_type_pane_t1

0xe7f3,	// (0x000521c3) loc_type_pane_t2_ParamLimits

0xe7f3,	// (0x000521c3) loc_type_pane_t2

0xe805,	// (0x000521d5) loc_type_pane_t3_ParamLimits

0xe805,	// (0x000521d5) loc_type_pane_t3

0x0002,

0xf325,	// (0x00052cf5) loc_type_pane_t_ParamLimits

0xf325,	// (0x00052cf5) loc_type_pane_t

0xe817,	// (0x000521e7) list_loc_req_pane

0xe821,	// (0x000521f1) scroll_pane_cp012

0x79f8,	// (0x0004b3c8) list_single_loc_request_popup_menu_pane_ParamLimits

0x79f8,	// (0x0004b3c8) list_single_loc_request_popup_menu_pane

0xe82a,	// (0x000521fa) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe82a,	// (0x000521fa) list_single_loc_request_popup_menu_pane_g1

0xe836,	// (0x00052206) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe836,	// (0x00052206) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00052cfc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00052cfc) list_single_loc_request_popup_menu_pane_g

0xe842,	// (0x00052212) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe842,	// (0x00052212) list_single_loc_request_popup_menu_pane_t1

0x7a0a,	// (0x0004b3da) bg_popup_window_pane_cp03_ParamLimits

0x7a0a,	// (0x0004b3da) bg_popup_window_pane_cp03

0x7a18,	// (0x0004b3e8) heading_loc_req_pane_ParamLimits

0x7a18,	// (0x0004b3e8) heading_loc_req_pane

0x7a24,	// (0x0004b3f4) popup_dyc_status_message_window_g1_ParamLimits

0x7a24,	// (0x0004b3f4) popup_dyc_status_message_window_g1

0x7a30,	// (0x0004b400) popup_dyc_status_message_window_t1_ParamLimits

0x7a30,	// (0x0004b400) popup_dyc_status_message_window_t1

0x7a42,	// (0x0004b412) popup_dyc_status_message_window_t2_ParamLimits

0x7a42,	// (0x0004b412) popup_dyc_status_message_window_t2

0x7a54,	// (0x0004b424) popup_dyc_status_message_window_t3_ParamLimits

0x7a54,	// (0x0004b424) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00052d01) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00052d01) popup_dyc_status_message_window_t

0xde2d,	// (0x000517fd) bg_heading_pane_cp01

0xe858,	// (0x00052228) heading_loc_req_pane_g1

0xe860,	// (0x00052230) heading_loc_req_pane_g2

0xe868,	// (0x00052238) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00052d08) heading_loc_req_pane_g

0xe870,	// (0x00052240) heading_loc_req_pane_t1

0xe87f,	// (0x0005224f) bg_popup_sub_pane_cp01_ParamLimits

0xe87f,	// (0x0005224f) bg_popup_sub_pane_cp01

0xe88d,	// (0x0005225d) popup_cale_events_window_g1_ParamLimits

0xe88d,	// (0x0005225d) popup_cale_events_window_g1

0xe8ad,	// (0x0005227d) popup_cale_events_window_g2_ParamLimits

0xe8ad,	// (0x0005227d) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00052d3c) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00052d3c) popup_cale_events_window_g

0xe8cd,	// (0x0005229d) popup_cale_events_window_t1_ParamLimits

0xe8cd,	// (0x0005229d) popup_cale_events_window_t1

0xe8df,	// (0x000522af) popup_cale_events_window_t2_ParamLimits

0xe8df,	// (0x000522af) popup_cale_events_window_t2

0xe91d,	// (0x000522ed) popup_cale_events_window_t3_ParamLimits

0xe91d,	// (0x000522ed) popup_cale_events_window_t3

0xe957,	// (0x00052327) popup_cale_events_window_t4_ParamLimits

0xe957,	// (0x00052327) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00052d41) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00052d41) popup_cale_events_window_t

0x7ada,	// (0x0004b4aa) call_type_pane

0xe98d,	// (0x0005235d) popup_call_status_window_g1

0x7ae6,	// (0x0004b4b6) popup_call_status_window_g2

0x7af2,	// (0x0004b4c2) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00052d4a) popup_call_status_window_g

0xe99b,	// (0x0005236b) call_type_pane_g1

0xe9a4,	// (0x00052374) call_type_pane_g2

0x0001,

0xf381,	// (0x00052d51) call_type_pane_g

0xde2d,	// (0x000517fd) bg_popup_sub_pane_cp02

0xe9ad,	// (0x0005237d) listscroll_popup_wml_pane

0xe9b5,	// (0x00052385) list_wml_pane

0xe9bf,	// (0x0005238f) scroll_pane_cp013

0x7afe,	// (0x0004b4ce) list_single_graphic_popup_wml_pane_ParamLimits

0x7afe,	// (0x0004b4ce) list_single_graphic_popup_wml_pane

0xe1ac,	// (0x00051b7c) list_single_graphic_popup_wml_pane_g1

0xe9c8,	// (0x00052398) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00052d56) list_single_graphic_popup_wml_pane_g

0xe9d0,	// (0x000523a0) list_single_graphic_popup_wml_pane_t1

0xe9e6,	// (0x000523b6) aid_call_pane

0xe080,	// (0x00051a50) popup_clock_analogue_window_g1

0xe080,	// (0x00051a50) popup_clock_analogue_window_g2

0x7b12,	// (0x0004b4e2) popup_clock_analogue_window_g3

0x7b12,	// (0x0004b4e2) popup_clock_analogue_window_g4

0xe1ac,	// (0x00051b7c) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00052d5b) popup_clock_analogue_window_g

0x7b1a,	// (0x0004b4ea) popup_clock_analogue_window_t1

0x7b28,	// (0x0004b4f8) clock_digital_number_pane_ParamLimits

0x7b28,	// (0x0004b4f8) clock_digital_number_pane

0x7b34,	// (0x0004b504) clock_digital_number_pane_cp02_ParamLimits

0x7b34,	// (0x0004b504) clock_digital_number_pane_cp02

0x7b40,	// (0x0004b510) clock_digital_number_pane_cp03_ParamLimits

0x7b40,	// (0x0004b510) clock_digital_number_pane_cp03

0x7b4c,	// (0x0004b51c) clock_digital_number_pane_cp04_ParamLimits

0x7b4c,	// (0x0004b51c) clock_digital_number_pane_cp04

0x7b58,	// (0x0004b528) clock_digital_separator_pane_ParamLimits

0x7b58,	// (0x0004b528) clock_digital_separator_pane

0x7b64,	// (0x0004b534) popup_clock_digital_window_t1

0xe1ac,	// (0x00051b7c) clock_digital_number_pane_g1

0xe1ac,	// (0x00051b7c) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00052cc9) clock_digital_number_pane_g

0xe1ac,	// (0x00051b7c) clock_digital_separator_pane_g1

0xe1ac,	// (0x00051b7c) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00052cc9) clock_digital_separator_pane_g

0xde2d,	// (0x000517fd) bg_popup_window_pane_cp04

0xe9ee,	// (0x000523be) heading_pane_cp03

0xe9f6,	// (0x000523c6) listscroll_popup_gms_pane

0xe9fe,	// (0x000523ce) grid_large_graphic_popup_pane

0xea08,	// (0x000523d8) listscroll_popup_gms_pane_g1

0xea10,	// (0x000523e0) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00052d66) listscroll_popup_gms_pane_g

0xe4d6,	// (0x00051ea6) scroll_pane_cp014

0x7b81,	// (0x0004b551) cell_large_graphic_popup_pane_ParamLimits

0x7b81,	// (0x0004b551) cell_large_graphic_popup_pane

0x7b98,	// (0x0004b568) cell_large_graphic_popup_pane_g1_ParamLimits

0x7b98,	// (0x0004b568) cell_large_graphic_popup_pane_g1

0xea18,	// (0x000523e8) cell_large_graphic_popup_pane_g2_ParamLimits

0xea18,	// (0x000523e8) cell_large_graphic_popup_pane_g2

0xea24,	// (0x000523f4) cell_large_graphic_popup_pane_g3_ParamLimits

0xea24,	// (0x000523f4) cell_large_graphic_popup_pane_g3

0xea31,	// (0x00052401) cell_large_graphic_popup_pane_g4_ParamLimits

0xea31,	// (0x00052401) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00052d6b) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00052d6b) cell_large_graphic_popup_pane_g

0xea41,	// (0x00052411) grid_highlight_pane_cp010

0xe1ac,	// (0x00051b7c) bg_popup_call_pane_g1

0xea4b,	// (0x0005241b) list_single_graphic_popup_conf_pane_ParamLimits

0xea4b,	// (0x0005241b) list_single_graphic_popup_conf_pane

0xea5e,	// (0x0005242e) list_highlight_pane_cp01

0xea67,	// (0x00052437) list_single_graphic_popup_conf_pane_g1

0xea6f,	// (0x0005243f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00052d74) list_single_graphic_popup_conf_pane_g

0xea77,	// (0x00052447) list_single_graphic_popup_conf_pane_t1

0xea85,	// (0x00052455) linegrid_cams_pane_g1

0x7ba4,	// (0x0004b574) linegrid_cams_pane_g2

0xe265,	// (0x00051c35) linegrid_cams_pane_g3

0xea8e,	// (0x0005245e) linegrid_cams_pane_g4

0x7bad,	// (0x0004b57d) linegrid_cams_pane_g5

0x7bb6,	// (0x0004b586) linegrid_cams_pane_g6

0xe2fa,	// (0x00051cca) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00052d79) linegrid_cams_pane_g

0xea97,	// (0x00052467) popup_clock_analogue_window

0xea97,	// (0x00052467) popup_clock_digital_window

0xde2d,	// (0x000517fd) popup_phob_thumbnail_window

0xe1ac,	// (0x00051b7c) call_video_uplink_pane_g1

0xeaa0,	// (0x00052470) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00052d88) call_video_uplink_pane_g

0xe2c7,	// (0x00051c97) video_uplink_pane

0xeaa8,	// (0x00052478) mce_image_pane_g1

0x7bbf,	// (0x0004b58f) mce_image_pane_g2

0x7bc7,	// (0x0004b597) mce_image_pane_g3

0x7bcf,	// (0x0004b59f) mce_image_pane_g4

0x7bd7,	// (0x0004b5a7) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00052d8d) mce_image_pane_g

0xeab2,	// (0x00052482) control_top_pane_stacon_cp01_ParamLimits

0xeab2,	// (0x00052482) control_top_pane_stacon_cp01

0xeac2,	// (0x00052492) uni_indicator_pane_stacon_cp01_ParamLimits

0xeac2,	// (0x00052492) uni_indicator_pane_stacon_cp01

0xead3,	// (0x000524a3) bg_popup_sub_pane_cp03

0xeadd,	// (0x000524ad) chi_dic_find_pane

0x7bdf,	// (0x0004b5af) listscroll_chi_dic_pane

0xeae5,	// (0x000524b5) main_pane_chidic_g1

0xeaed,	// (0x000524bd) chi_dic_find_pane_t1

0xeafb,	// (0x000524cb) find_chidic_pane

0xeb04,	// (0x000524d4) chi_dic_list_pane_ParamLimits

0xeb04,	// (0x000524d4) chi_dic_list_pane

0xeb15,	// (0x000524e5) scroll_pane_cp020

0xeb1d,	// (0x000524ed) find_chidic_pane_t1

0xde2d,	// (0x000517fd) input_focus_pane_cp06

0x7bf1,	// (0x0004b5c1) list_chi_dic_pane_ParamLimits

0x7bf1,	// (0x0004b5c1) list_chi_dic_pane

0x7c04,	// (0x0004b5d4) list_chi_dic_pane_t1_ParamLimits

0x7c04,	// (0x0004b5d4) list_chi_dic_pane_t1

0xde2d,	// (0x000517fd) list_highlight_pane_cp020

0xeb2c,	// (0x000524fc) bg_cale_heading_pane_g1

0x7c17,	// (0x0004b5e7) bg_cale_heading_pane_g2

0x7c1f,	// (0x0004b5ef) bg_cale_heading_pane_g3

0x7c27,	// (0x0004b5f7) bg_cale_heading_pane_g4

0x7c2f,	// (0x0004b5ff) bg_cale_heading_pane_g5

0x7c37,	// (0x0004b607) bg_cale_heading_pane_g6

0x7c3f,	// (0x0004b60f) bg_cale_heading_pane_g7

0x7c47,	// (0x0004b617) bg_cale_heading_pane_g8

0x7c4f,	// (0x0004b61f) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00052d98) bg_cale_heading_pane_g

0xeb2c,	// (0x000524fc) bg_cale_side_pane_g1

0x7c57,	// (0x0004b627) bg_cale_side_pane_g2

0x7c5f,	// (0x0004b62f) bg_cale_side_pane_g3

0x7c67,	// (0x0004b637) bg_cale_side_pane_g4

0x7c6f,	// (0x0004b63f) bg_cale_side_pane_g5

0x7c77,	// (0x0004b647) bg_cale_side_pane_g6

0x7c7f,	// (0x0004b64f) bg_cale_side_pane_g7

0x7c87,	// (0x0004b657) bg_cale_side_pane_g8

0x7c8f,	// (0x0004b65f) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00052dab) bg_cale_side_pane_g

0x7c97,	// (0x0004b667) popup_call_status_window_ParamLimits

0x7c97,	// (0x0004b667) popup_call_status_window

0xeb34,	// (0x00052504) stacon_top_pane

0xeb3c,	// (0x0005250c) status_pane_ParamLimits

0xeb3c,	// (0x0005250c) status_pane

0xeb56,	// (0x00052526) status_small_pane

0xeb5e,	// (0x0005252e) control_pane

0xde2d,	// (0x000517fd) stacon_bottom_pane

0xeb66,	// (0x00052536) list_single_mce_smart_pane_t1_ParamLimits

0xeb66,	// (0x00052536) list_single_mce_smart_pane_t1

0xeb79,	// (0x00052549) list_single_mce_smart_pane_t2_ParamLimits

0xeb79,	// (0x00052549) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00052dbe) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00052dbe) list_single_mce_smart_pane_t

0x7ca6,	// (0x0004b676) compass_pane

0x7caf,	// (0x0004b67f) main_location2_pane_t1

0x7cc5,	// (0x0004b695) main_location2_pane_t2

0x7cdb,	// (0x0004b6ab) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00052dc3) main_location2_pane_t

0xeba1,	// (0x00052571) compass_pane_g1_ParamLimits

0xeba1,	// (0x00052571) compass_pane_g1

0x7d23,	// (0x0004b6f3) compass_pane_t1

0x7d32,	// (0x0004b702) compass_pane_t2

0x0005,

0xf3fc,	// (0x00052dcc) compass_pane_t

0x7d79,	// (0x0004b749) text_secondary_cp61

0xebce,	// (0x0005259e) navi_pane_cams_g5

0xec0f,	// (0x000525df) navi_pane_im_t1

0xec1d,	// (0x000525ed) navi_pane_mp_g1_ParamLimits

0xec1d,	// (0x000525ed) navi_pane_mp_g1

0xec31,	// (0x00052601) navi_pane_mp_g2_ParamLimits

0xec31,	// (0x00052601) navi_pane_mp_g2

0xec3d,	// (0x0005260d) navi_pane_mp_g3_ParamLimits

0xec3d,	// (0x0005260d) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00052de0) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00052de0) navi_pane_mp_g

0xec49,	// (0x00052619) navi_pane_mp_t1

0xec57,	// (0x00052627) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00052de7) navi_pane_mp_t

0xecc4,	// (0x00052694) navi_pane_vt_g1

0xec49,	// (0x00052619) navi_pane_vt_t1

0xeccc,	// (0x0005269c) navi_slider_pane

0xecd4,	// (0x000526a4) zooming_pane

0xecdc,	// (0x000526ac) navi_slider_pane_g1

0x7df0,	// (0x0004b7c0) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00052dee) navi_slider_pane_g

0xed00,	// (0x000526d0) aid_levels_zoom

0xed08,	// (0x000526d8) zooming_pane_g1

0xed10,	// (0x000526e0) zooming_pane_g2

0xed10,	// (0x000526e0) zooming_pane_g3

0x0002,

0xf42d,	// (0x00052dfd) zooming_pane_g

0xed18,	// (0x000526e8) level_10_zoom

0xed21,	// (0x000526f1) level_11_zoom

0xed2a,	// (0x000526fa) level_1_zoom

0xed33,	// (0x00052703) level_2_zoom

0xed3c,	// (0x0005270c) level_3_zoom

0xed45,	// (0x00052715) level_4_zoom

0xed4e,	// (0x0005271e) level_5_zoom

0xed57,	// (0x00052727) level_6_zoom

0xed60,	// (0x00052730) level_7_zoom

0xed69,	// (0x00052739) level_8_zoom

0xed72,	// (0x00052742) level_9_zoom

0xed83,	// (0x00052753) popup_phob_thumbnail_window_g1

0xed8b,	// (0x0005275b) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00052e04) popup_phob_thumbnail_window_g

0x2401,	// (0x00045dd1) level_1_location

0x2409,	// (0x00045dd9) level_2_location

0x2411,	// (0x00045de1) level_3_location

0x2419,	// (0x00045de9) level_4_location

0xecd4,	// (0x000526a4) level_5_location

0x7e02,	// (0x0004b7d2) mce_icon_pane_g1

0x7e0a,	// (0x0004b7da) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00052e09) mce_icon_pane_g

0x7e12,	// (0x0004b7e2) main_mup_pane_g1_ParamLimits

0x7e12,	// (0x0004b7e2) main_mup_pane_g1

0x7e2a,	// (0x0004b7fa) main_mup_pane_g2_ParamLimits

0x7e2a,	// (0x0004b7fa) main_mup_pane_g2

0x7e46,	// (0x0004b816) main_mup_pane_g3_ParamLimits

0x7e46,	// (0x0004b816) main_mup_pane_g3

0x7e62,	// (0x0004b832) main_mup_pane_g4_ParamLimits

0x7e62,	// (0x0004b832) main_mup_pane_g4

0x7e7e,	// (0x0004b84e) main_mup_pane_g5_ParamLimits

0x7e7e,	// (0x0004b84e) main_mup_pane_g5

0x7e9b,	// (0x0004b86b) main_mup_pane_g6_ParamLimits

0x7e9b,	// (0x0004b86b) main_mup_pane_g6

0x7eb7,	// (0x0004b887) main_mup_pane_g7_ParamLimits

0x7eb7,	// (0x0004b887) main_mup_pane_g7

0x7ed3,	// (0x0004b8a3) main_mup_pane_g8_ParamLimits

0x7ed3,	// (0x0004b8a3) main_mup_pane_g8

0x7eef,	// (0x0004b8bf) main_mup_pane_g9_ParamLimits

0x7eef,	// (0x0004b8bf) main_mup_pane_g9

0x7f06,	// (0x0004b8d6) main_mup_pane_g10_ParamLimits

0x7f06,	// (0x0004b8d6) main_mup_pane_g10

0x7f1d,	// (0x0004b8ed) main_mup_pane_g11_ParamLimits

0x7f1d,	// (0x0004b8ed) main_mup_pane_g11

0x7f31,	// (0x0004b901) main_mup_pane_g12_ParamLimits

0x7f31,	// (0x0004b901) main_mup_pane_g12

0x7f3d,	// (0x0004b90d) main_mup_pane_g13_ParamLimits

0x7f3d,	// (0x0004b90d) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00052e0e) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00052e0e) main_mup_pane_g

0x7f51,	// (0x0004b921) main_mup_pane_t1_ParamLimits

0x7f51,	// (0x0004b921) main_mup_pane_t1

0x7f6e,	// (0x0004b93e) main_mup_pane_t2_ParamLimits

0x7f6e,	// (0x0004b93e) main_mup_pane_t2

0x7f88,	// (0x0004b958) main_mup_pane_t3_ParamLimits

0x7f88,	// (0x0004b958) main_mup_pane_t3

0x7fa2,	// (0x0004b972) main_mup_pane_t4_ParamLimits

0x7fa2,	// (0x0004b972) main_mup_pane_t4

0x7fb4,	// (0x0004b984) main_mup_pane_t5_ParamLimits

0x7fb4,	// (0x0004b984) main_mup_pane_t5

0x7fc6,	// (0x0004b996) main_mup_pane_t6_ParamLimits

0x7fc6,	// (0x0004b996) main_mup_pane_t6

0x0005,

0xf459,	// (0x00052e29) main_mup_pane_t_ParamLimits

0xf459,	// (0x00052e29) main_mup_pane_t

0x7fdc,	// (0x0004b9ac) mup_progress_pane_ParamLimits

0x7fdc,	// (0x0004b9ac) mup_progress_pane

0x7fe8,	// (0x0004b9b8) mup_visualizer_pane_ParamLimits

0x7fe8,	// (0x0004b9b8) mup_visualizer_pane

0x8016,	// (0x0004b9e6) mup_volume_pane_ParamLimits

0x8016,	// (0x0004b9e6) mup_volume_pane

0xe98d,	// (0x0005235d) mup_visualizer_pane_g1_ParamLimits

0xe98d,	// (0x0005235d) mup_visualizer_pane_g1

0xe98d,	// (0x0005235d) mup_visualizer_pane_g2_ParamLimits

0xe98d,	// (0x0005235d) mup_visualizer_pane_g2

0xeba1,	// (0x00052571) mup_visualizer_pane_g3_ParamLimits

0xeba1,	// (0x00052571) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00052e36) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00052e36) mup_visualizer_pane_g

0xe1ac,	// (0x00051b7c) mup_volume_pane_g1

0xed9b,	// (0x0005276b) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00052e3d) mup_volume_pane_g

0xe1ac,	// (0x00051b7c) mup_progress_pane_g1

0xeda4,	// (0x00052774) mup_progress_pane_g2

0xedad,	// (0x0005277d) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00052e42) mup_progress_pane_g

0xde2d,	// (0x000517fd) bg_popup_window_pane_cp05

0xedb6,	// (0x00052786) heading_pane_cp02_ParamLimits

0xedb6,	// (0x00052786) heading_pane_cp02

0xedd0,	// (0x000527a0) list_popup_blid_pane

0xedd8,	// (0x000527a8) list_blid_sat_info_pane_ParamLimits

0xedd8,	// (0x000527a8) list_blid_sat_info_pane

0xedeb,	// (0x000527bb) list_blid_sat_info_pane_g1

0xedf3,	// (0x000527c3) list_blid_sat_info_pane_t1

0x8109,	// (0x0004bad9) mup_equalizer_pane_ParamLimits

0x8109,	// (0x0004bad9) mup_equalizer_pane

0x8122,	// (0x0004baf2) mup_equalizer_pane_cp1_ParamLimits

0x8122,	// (0x0004baf2) mup_equalizer_pane_cp1

0x813b,	// (0x0004bb0b) mup_equalizer_pane_cp2_ParamLimits

0x813b,	// (0x0004bb0b) mup_equalizer_pane_cp2

0x8154,	// (0x0004bb24) mup_equalizer_pane_cp3_ParamLimits

0x8154,	// (0x0004bb24) mup_equalizer_pane_cp3

0x816d,	// (0x0004bb3d) mup_equalizer_pane_cp4_ParamLimits

0x816d,	// (0x0004bb3d) mup_equalizer_pane_cp4

0x8186,	// (0x0004bb56) mup_equalizer_pane_cp5

0x8198,	// (0x0004bb68) mup_equalizer_pane_cp6

0x81aa,	// (0x0004bb7a) mup_equalizer_pane_cp7

0x22df,	// (0x00045caf) bg_popup_call_poc_act_pane_g9

0x22e7,	// (0x00045cb7) bg_popup_call_poc_act_pane_g10

0x22ef,	// (0x00045cbf) bg_popup_call_poc_act_pane_g11

0x000a,

0xe088,	// (0x00051a58) mup_scale_pane

0xe1ac,	// (0x00051b7c) mup_scale_pane_g1

0xee01,	// (0x000527d1) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00052e5e) mup_scale_pane_g

0xee25,	// (0x000527f5) msg_data_pane

0xee2d,	// (0x000527fd) scroll_pane_cp017

0x81ce,	// (0x0004bb9e) bg_list_pane_cp04_ParamLimits

0x81ce,	// (0x0004bb9e) bg_list_pane_cp04

0xee35,	// (0x00052805) msg_data_pane_g1

0x7bbf,	// (0x0004b58f) msg_data_pane_g2

0x7bc7,	// (0x0004b597) msg_data_pane_g3

0x81ee,	// (0x0004bbbe) msg_data_pane_g4

0x7bd7,	// (0x0004b5a7) msg_data_pane_g5

0x7e02,	// (0x0004b7d2) msg_data_pane_g6

0x81f6,	// (0x0004bbc6) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00052e6d) msg_data_pane_g

0x81fe,	// (0x0004bbce) msg_text_pane_ParamLimits

0x81fe,	// (0x0004bbce) msg_text_pane

0x8227,	// (0x0004bbf7) qrid_highlight_pane_cp011_ParamLimits

0x8227,	// (0x0004bbf7) qrid_highlight_pane_cp011

0xde2d,	// (0x000517fd) msg_body_pane

0xde2d,	// (0x000517fd) msg_header_pane

0xee46,	// (0x00052816) input_focus_pane_cp07

0x8249,	// (0x0004bc19) msg_header_pane_t1_ParamLimits

0x8249,	// (0x0004bc19) msg_header_pane_t1

0x139b,	// (0x00044d6b) msg_header_pane_t2_ParamLimits

0x139b,	// (0x00044d6b) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00052e81) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00052e81) msg_header_pane_t

0xee5b,	// (0x0005282b) msg_body_pane_g1

0x825b,	// (0x0004bc2b) msg_body_pane_t1_ParamLimits

0x825b,	// (0x0004bc2b) msg_body_pane_t1

0x13ad,	// (0x00044d7d) msg_body_pane_t2_ParamLimits

0x13ad,	// (0x00044d7d) msg_body_pane_t2

0x13bf,	// (0x00044d8f) msg_body_pane_t3_ParamLimits

0x13bf,	// (0x00044d8f) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00052e86) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00052e86) msg_body_pane_t

0x82d4,	// (0x0004bca4) main_viewer_pane_g1_ParamLimits

0x82d4,	// (0x0004bca4) main_viewer_pane_g1

0x82e0,	// (0x0004bcb0) main_viewer_pane_g2_ParamLimits

0x82e0,	// (0x0004bcb0) main_viewer_pane_g2

0x82ec,	// (0x0004bcbc) main_viewer_pane_g3_ParamLimits

0x82ec,	// (0x0004bcbc) main_viewer_pane_g3

0x82fb,	// (0x0004bccb) main_viewer_pane_g4_ParamLimits

0x82fb,	// (0x0004bccb) main_viewer_pane_g4

0x830a,	// (0x0004bcda) main_viewer_pane_g5_ParamLimits

0x830a,	// (0x0004bcda) main_viewer_pane_g5

0x830a,	// (0x0004bcda) main_viewer_pane_g7_ParamLimits

0x830a,	// (0x0004bcda) main_viewer_pane_g7

0x831c,	// (0x0004bcec) main_viewer_pane_g8_ParamLimits

0x831c,	// (0x0004bcec) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00052e96) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00052e96) main_viewer_pane_g

0xee63,	// (0x00052833) viewer_content_pane_ParamLimits

0xee63,	// (0x00052833) viewer_content_pane

0x834c,	// (0x0004bd1c) main_postcard_pane_g1_ParamLimits

0x834c,	// (0x0004bd1c) main_postcard_pane_g1

0x8358,	// (0x0004bd28) main_postcard_pane_g2_ParamLimits

0x8358,	// (0x0004bd28) main_postcard_pane_g2

0x8364,	// (0x0004bd34) main_postcard_pane_g3_ParamLimits

0x8364,	// (0x0004bd34) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00052ea7) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00052ea7) main_postcard_pane_g

0x8370,	// (0x0004bd40) main_postcard_pane_g4

0x251d,	// (0x00045eed) smil_status_volume_pane_g2

0x8394,	// (0x0004bd64) postcard_pane_ParamLimits

0x8394,	// (0x0004bd64) postcard_pane

0xe98d,	// (0x0005235d) postcard_pane_g1_ParamLimits

0xe98d,	// (0x0005235d) postcard_pane_g1

0x83c4,	// (0x0004bd94) postcard_pane_g2_ParamLimits

0x83c4,	// (0x0004bd94) postcard_pane_g2

0x83d0,	// (0x0004bda0) postcard_pane_g3_ParamLimits

0x83d0,	// (0x0004bda0) postcard_pane_g3

0xee71,	// (0x00052841) postcard_pane_g4_ParamLimits

0xee71,	// (0x00052841) postcard_pane_g4

0x83dc,	// (0x0004bdac) postcard_pane_g5_ParamLimits

0x83dc,	// (0x0004bdac) postcard_pane_g5

0x83e8,	// (0x0004bdb8) postcard_pane_g6_ParamLimits

0x83e8,	// (0x0004bdb8) postcard_pane_g6

0xee7f,	// (0x0005284f) postcard_pane_g7_ParamLimits

0xee7f,	// (0x0005284f) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00052eb4) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00052eb4) postcard_pane_g

0x83f4,	// (0x0004bdc4) main_mp2_pane_g1_ParamLimits

0x83f4,	// (0x0004bdc4) main_mp2_pane_g1

0x8400,	// (0x0004bdd0) main_mp2_pane_g2_ParamLimits

0x8400,	// (0x0004bdd0) main_mp2_pane_g2

0x840c,	// (0x0004bddc) main_mp2_pane_g3_ParamLimits

0x840c,	// (0x0004bddc) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00052ec3) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00052ec3) main_mp2_pane_g

0x8418,	// (0x0004bde8) main_mp2_pane_t1_ParamLimits

0x8418,	// (0x0004bde8) main_mp2_pane_t1

0x842d,	// (0x0004bdfd) main_mp2_pane_t2_ParamLimits

0x842d,	// (0x0004bdfd) main_mp2_pane_t2

0x843f,	// (0x0004be0f) main_mp2_pane_t3_ParamLimits

0x843f,	// (0x0004be0f) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00052eca) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00052eca) main_mp2_pane_t

0xee8d,	// (0x0005285d) pec_content_pane_ParamLimits

0xee8d,	// (0x0005285d) pec_content_pane

0xe4d6,	// (0x00051ea6) scroll_pane_cp015

0xee9f,	// (0x0005286f) pec_attribute_pane_ParamLimits

0xee9f,	// (0x0005286f) pec_attribute_pane

0x8451,	// (0x0004be21) pec_content_pane_g1_ParamLimits

0x8451,	// (0x0004be21) pec_content_pane_g1

0xeeaf,	// (0x0005287f) pec_content_pane_t1_ParamLimits

0xeeaf,	// (0x0005287f) pec_content_pane_t1

0xeec1,	// (0x00052891) pec_content_pane_t2_ParamLimits

0xeec1,	// (0x00052891) pec_content_pane_t2

0x0001,

0xf501,	// (0x00052ed1) pec_content_pane_t_ParamLimits

0xf501,	// (0x00052ed1) pec_content_pane_t

0x845d,	// (0x0004be2d) list_single_graphic_pane_cp01_ParamLimits

0x845d,	// (0x0004be2d) list_single_graphic_pane_cp01

0xe088,	// (0x00051a58) bg_popup_sub_pane_cp04

0xeed3,	// (0x000528a3) popup_mup_playback_window_g1

0xeedf,	// (0x000528af) popup_mup_playback_window_t1

0xeef4,	// (0x000528c4) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00052ed6) popup_mup_playback_window_t

0xef2b,	// (0x000528fb) main_image_pane_g1_ParamLimits

0xef2b,	// (0x000528fb) main_image_pane_g1

0xef6e,	// (0x0005293e) scroll_pane_cp018_ParamLimits

0xef6e,	// (0x0005293e) scroll_pane_cp018

0xef86,	// (0x00052956) scroll_pane_cp016_ParamLimits

0xef86,	// (0x00052956) scroll_pane_cp016

0x84e2,	// (0x0004beb2) smil2_image_pane_ParamLimits

0x84e2,	// (0x0004beb2) smil2_image_pane

0x850a,	// (0x0004beda) smil2_root_pane_ParamLimits

0x850a,	// (0x0004beda) smil2_root_pane

0x8536,	// (0x0004bf06) smil2_text_pane_ParamLimits

0x8536,	// (0x0004bf06) smil2_text_pane

0xde2d,	// (0x000517fd) bg_list_pane_cp06

0xefc2,	// (0x00052992) grid_radio_pane

0xde2d,	// (0x000517fd) bg_popup_window_pane_cp06

0xefca,	// (0x0005299a) main_fmradio_pane_t1

0xe9ee,	// (0x000523be) heading_pane_cp04

0xefd8,	// (0x000529a8) main_fmradio_pane_t2

0x2337,	// (0x00045d07) popup_cale_lunar_info_window_g1

0xefe6,	// (0x000529b6) main_fmradio_pane_t3

0x233f,	// (0x00045d0f) popup_cale_lunar_info_window_g2

0xeff4,	// (0x000529c4) main_fmradio_pane_t4

0x0001,

0xf002,	// (0x000529d2) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x00052fc4) popup_cale_lunar_info_window_g

0xf51b,	// (0x00052eeb) main_fmradio_pane_t

0xf010,	// (0x000529e0) wait_bar_pane_cp03

0xe30b,	// (0x00051cdb) cell_fmradio_pane_ParamLimits

0xe30b,	// (0x00051cdb) cell_fmradio_pane

0xee7f,	// (0x0005284f) cell_fmradio_pane_g1_ParamLimits

0xee7f,	// (0x0005284f) cell_fmradio_pane_g1

0xde2d,	// (0x000517fd) grid_highlight_pane_cp011

0xf018,	// (0x000529e8) poc_content_pane_ParamLimits

0xf018,	// (0x000529e8) poc_content_pane

0xf02b,	// (0x000529fb) scroll_pane_cp019

0x856a,	// (0x0004bf3a) popup_call_poc_act_window_ParamLimits

0x856a,	// (0x0004bf3a) popup_call_poc_act_window

0x8577,	// (0x0004bf47) popup_call_poc_inact_window_ParamLimits

0x8577,	// (0x0004bf47) popup_call_poc_inact_window

0xf5b8,	// (0x00052f88) bg_popup_call_poc_act_pane_g

0x22f7,	// (0x00045cc7) bg_popup_call_poc_inact_pane_g1

0x22ff,	// (0x00045ccf) bg_popup_call_poc_inact_pane_g2

0xf033,	// (0x00052a03) popup_call_poc_act_window_g2

0x2307,	// (0x00045cd7) bg_popup_call_poc_inact_pane_g3

0x2287,	// (0x00045c57) bg_popup_call_poc_inact_pane_g4

0x230f,	// (0x00045cdf) bg_popup_call_poc_inact_pane_g5

0xf03b,	// (0x00052a0b) popup_call_poc_act_window_t1_ParamLimits

0xf03b,	// (0x00052a0b) popup_call_poc_act_window_t1

0x13d1,	// (0x00044da1) popup_call_poc_act_window_t2_ParamLimits

0x13d1,	// (0x00044da1) popup_call_poc_act_window_t2

0x13f9,	// (0x00044dc9) popup_call_poc_act_window_t3_ParamLimits

0x13f9,	// (0x00044dc9) popup_call_poc_act_window_t3

0x1421,	// (0x00044df1) popup_call_poc_act_window_t4_ParamLimits

0x1421,	// (0x00044df1) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00052ef6) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00052ef6) popup_call_poc_act_window_t

0x2317,	// (0x00045ce7) bg_popup_call_poc_inact_pane_g6

0x231f,	// (0x00045cef) bg_popup_call_poc_inact_pane_g7

0x2327,	// (0x00045cf7) bg_popup_call_poc_inact_pane_g8

0x1433,	// (0x00044e03) popup_call_poc_inact_window_g2

0x232f,	// (0x00045cff) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x00052f9f) bg_popup_call_poc_inact_pane_g

0x143b,	// (0x00044e0b) popup_call_poc_inact_window_t1_ParamLimits

0x143b,	// (0x00044e0b) popup_call_poc_inact_window_t1

0x1450,	// (0x00044e20) popup_call_poc_inact_window_t2_ParamLimits

0x1450,	// (0x00044e20) popup_call_poc_inact_window_t2

0x1465,	// (0x00044e35) popup_call_poc_inact_window_t3_ParamLimits

0x1465,	// (0x00044e35) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00052eff) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00052eff) popup_call_poc_inact_window_t

0x24a3,	// (0x00045e73) context_pane_ParamLimits

0x8a72,	// (0x0004c442) signal_pane_ParamLimits

0xecd4,	// (0x000526a4) main_call2_pane

0x2491,	// (0x00045e61) popup_phob_thumbnail2_window_ParamLimits

0x2491,	// (0x00045e61) popup_phob_thumbnail2_window

0x8286,	// (0x0004bc56) aid_hotspot_pointer_arrow_pane

0x828e,	// (0x0004bc5e) aid_hotspot_pointer_hand_pane

0x8826,	// (0x0004c1f6) phob_pre_status_pane_g5

0x6b61,	// (0x0004a531) cams_zoom_pane_ParamLimits

0x6b6d,	// (0x0004a53d) image_vga_pane_ParamLimits

0x6b7a,	// (0x0004a54a) main_camera_pane_g1_ParamLimits

0x6b86,	// (0x0004a556) main_camera_pane_g2_ParamLimits

0x6b92,	// (0x0004a562) main_camera_pane_g3_ParamLimits

0x6b9e,	// (0x0004a56e) main_camera_pane_g4_ParamLimits

0x6baa,	// (0x0004a57a) main_camera_pane_g5_ParamLimits

0x6bb6,	// (0x0004a586) main_camera_pane_g6_ParamLimits

0x6bc2,	// (0x0004a592) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00052bfe) main_camera_pane_g_ParamLimits

0x6bce,	// (0x0004a59e) main_camera_pane_t1_ParamLimits

0x6be0,	// (0x0004a5b0) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00052c0f) main_camera_pane_t_ParamLimits

0xe088,	// (0x00051a58) bg_popup_preview_window_pane_cp01_ParamLimits

0xe088,	// (0x00051a58) bg_popup_preview_window_pane_cp01

0x147a,	// (0x00044e4a) popup_phob_thumbnail2_window_g1_ParamLimits

0x147a,	// (0x00044e4a) popup_phob_thumbnail2_window_g1

0xde2d,	// (0x000517fd) call2_cli_visual_pane

0x8593,	// (0x0004bf63) popup_call2_audio_conf_window_ParamLimits

0x8593,	// (0x0004bf63) popup_call2_audio_conf_window

0x85a6,	// (0x0004bf76) popup_call2_audio_first_window_ParamLimits

0x85a6,	// (0x0004bf76) popup_call2_audio_first_window

0x8622,	// (0x0004bff2) popup_call2_audio_in_window_ParamLimits

0x8622,	// (0x0004bff2) popup_call2_audio_in_window

0x8652,	// (0x0004c022) popup_call2_audio_out_window_ParamLimits

0x8652,	// (0x0004c022) popup_call2_audio_out_window

0x869e,	// (0x0004c06e) popup_call2_audio_second_window_ParamLimits

0x869e,	// (0x0004c06e) popup_call2_audio_second_window

0x86ea,	// (0x0004c0ba) popup_call2_audio_wait_window_ParamLimits

0x86ea,	// (0x0004c0ba) popup_call2_audio_wait_window

0xde2d,	// (0x000517fd) bg_popup_call2_act_pane_cp03

0xe06a,	// (0x00051a3a) list_conf_pane_cp

0x1486,	// (0x00044e56) popup_call2_audio_conf_window_t1

0xea4b,	// (0x0005241b) list_single_graphic_popup_conf2_pane_ParamLimits

0xea4b,	// (0x0005241b) list_single_graphic_popup_conf2_pane

0xea5e,	// (0x0005242e) list_highlight_pane_cp04

0x1494,	// (0x00044e64) list_single_graphic_popup_conf2_pane_g1

0xea6f,	// (0x0005243f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00052f06) list_single_graphic_popup_conf2_pane_g

0x149c,	// (0x00044e6c) list_single_graphic_popup_conf2_pane_t1

0x14aa,	// (0x00044e7a) bg_popup_call2_act_pane_cp01_ParamLimits

0x14aa,	// (0x00044e7a) bg_popup_call2_act_pane_cp01

0x1534,	// (0x00044f04) call_type_pane_cp05_ParamLimits

0x1534,	// (0x00044f04) call_type_pane_cp05

0x1588,	// (0x00044f58) popup_call2_audio_second_window_g1_ParamLimits

0x1588,	// (0x00044f58) popup_call2_audio_second_window_g1

0x15dc,	// (0x00044fac) popup_call2_audio_second_window_g2_ParamLimits

0x15dc,	// (0x00044fac) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00052f0b) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00052f0b) popup_call2_audio_second_window_g

0x1641,	// (0x00045011) popup_call2_audio_second_window_t1_ParamLimits

0x1641,	// (0x00045011) popup_call2_audio_second_window_t1

0x16fc,	// (0x000450cc) popup_call2_audio_second_window_t2_ParamLimits

0x16fc,	// (0x000450cc) popup_call2_audio_second_window_t2

0x174f,	// (0x0004511f) popup_call2_audio_second_window_t3_ParamLimits

0x174f,	// (0x0004511f) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00052f12) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00052f12) popup_call2_audio_second_window_t

0xde2d,	// (0x000517fd) bg_popup_call2_in_pane_cp02

0xde37,	// (0x00051807) call_type_pane_cp04

0xde3f,	// (0x0005180f) popup_call2_audio_wait_window_g1

0xde47,	// (0x00051817) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00052aeb) popup_call2_audio_wait_window_g

0xde4f,	// (0x0005181f) popup_call2_audio_wait_window_t3

0x1842,	// (0x00045212) bg_popup_call2_act_pane_ParamLimits

0x1842,	// (0x00045212) bg_popup_call2_act_pane

0x1902,	// (0x000452d2) call_type_pane_cp03_ParamLimits

0x1902,	// (0x000452d2) call_type_pane_cp03

0x1966,	// (0x00045336) popup_call2_audio_first_window_g1_ParamLimits

0x1966,	// (0x00045336) popup_call2_audio_first_window_g1

0x19d6,	// (0x000453a6) popup_call2_audio_first_window_g2_ParamLimits

0x19d6,	// (0x000453a6) popup_call2_audio_first_window_g2

0xe98d,	// (0x0005235d) popup_call2_audio_first_window_g3_ParamLimits

0xe98d,	// (0x0005235d) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00052f1b) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00052f1b) popup_call2_audio_first_window_g

0x1ab4,	// (0x00045484) popup_call2_audio_first_window_t1_ParamLimits

0x1ab4,	// (0x00045484) popup_call2_audio_first_window_t1

0x1bb7,	// (0x00045587) popup_call2_audio_first_window_t4_ParamLimits

0x1bb7,	// (0x00045587) popup_call2_audio_first_window_t4

0x1c9a,	// (0x0004566a) popup_call2_audio_first_window_t5_ParamLimits

0x1c9a,	// (0x0004566a) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00052f26) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00052f26) popup_call2_audio_first_window_t

0xe080,	// (0x00051a50) bg_popup_call2_act_pane_g1

0x2347,	// (0x00045d17) popup_cale_lunar_info_window_t1

0x2355,	// (0x00045d25) popup_cale_lunar_info_window_t2

0x2363,	// (0x00045d33) popup_cale_lunar_info_window_t3

0xde2d,	// (0x000517fd) bg_popup_call2_bubble_pane

0x1d9b,	// (0x0004576b) bg_popup_call2_in_pane_cp01_ParamLimits

0x1d9b,	// (0x0004576b) bg_popup_call2_in_pane_cp01

0xdb09,	// (0x000514d9) call_type_pane_cp02

0x1de3,	// (0x000457b3) popup_call2_audio_out_window_g1_ParamLimits

0x1de3,	// (0x000457b3) popup_call2_audio_out_window_g1

0x1e0f,	// (0x000457df) popup_call2_audio_out_window_g2_ParamLimits

0x1e0f,	// (0x000457df) popup_call2_audio_out_window_g2

0x1e37,	// (0x00045807) popup_call2_audio_out_window_g3_ParamLimits

0x1e37,	// (0x00045807) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00052f2f) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00052f2f) popup_call2_audio_out_window_g

0x1e72,	// (0x00045842) popup_call2_audio_out_window_t1_ParamLimits

0x1e72,	// (0x00045842) popup_call2_audio_out_window_t1

0x1ed1,	// (0x000458a1) popup_call2_audio_out_window_t2_ParamLimits

0x1ed1,	// (0x000458a1) popup_call2_audio_out_window_t2

0x1f25,	// (0x000458f5) popup_call2_audio_out_window_t3_ParamLimits

0x1f25,	// (0x000458f5) popup_call2_audio_out_window_t3

0x1f3b,	// (0x0004590b) popup_call2_audio_out_window_t4_ParamLimits

0x1f3b,	// (0x0004590b) popup_call2_audio_out_window_t4

0x1f51,	// (0x00045921) popup_call2_audio_out_window_t5_ParamLimits

0x1f51,	// (0x00045921) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00052f38) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00052f38) popup_call2_audio_out_window_t

0x1fb5,	// (0x00045985) bg_popup_call2_in_pane_ParamLimits

0x1fb5,	// (0x00045985) bg_popup_call2_in_pane

0x2011,	// (0x000459e1) popup_call2_audio_in_window_g1_ParamLimits

0x2011,	// (0x000459e1) popup_call2_audio_in_window_g1

0x2049,	// (0x00045a19) popup_call2_audio_in_window_g2_ParamLimits

0x2049,	// (0x00045a19) popup_call2_audio_in_window_g2

0x2081,	// (0x00045a51) popup_call2_audio_in_window_g3_ParamLimits

0x2081,	// (0x00045a51) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00052f45) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00052f45) popup_call2_audio_in_window_g

0x20d9,	// (0x00045aa9) popup_call2_audio_in_window_t1_ParamLimits

0x20d9,	// (0x00045aa9) popup_call2_audio_in_window_t1

0x2159,	// (0x00045b29) popup_call2_audio_in_window_t2_ParamLimits

0x2159,	// (0x00045b29) popup_call2_audio_in_window_t2

0x21d9,	// (0x00045ba9) popup_call2_audio_in_window_t3_ParamLimits

0x21d9,	// (0x00045ba9) popup_call2_audio_in_window_t3

0x21f3,	// (0x00045bc3) popup_call2_audio_in_window_t4_ParamLimits

0x21f3,	// (0x00045bc3) popup_call2_audio_in_window_t4

0x2205,	// (0x00045bd5) popup_call2_audio_in_window_t5_ParamLimits

0x2205,	// (0x00045bd5) popup_call2_audio_in_window_t5

0x221a,	// (0x00045bea) popup_call2_audio_in_window_t6_ParamLimits

0x221a,	// (0x00045bea) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00052f4e) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00052f4e) popup_call2_audio_in_window_t

0xe080,	// (0x00051a50) bg_popup_call2_in_pane_g1

0x2371,	// (0x00045d41) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x00052fc9) popup_cale_lunar_info_window_t

0xe088,	// (0x00051a58) bg_popup_call2_rect_pane_ParamLimits

0xe088,	// (0x00051a58) bg_popup_call2_rect_pane

0xde2d,	// (0x000517fd) call2_cli_visual_graphic_pane

0xde2d,	// (0x000517fd) call2_cli_visual_text_pane

0x8af7,	// (0x0004c4c7) smil_status_volume_pane_g3

0x0002,

0xe1ac,	// (0x00051b7c) call2_cli_visual_graphic_pane_g1

0xe1ac,	// (0x00051b7c) call2_cli_visual_graphic_pane_g2

0xe1ac,	// (0x00051b7c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00052f5b) call2_cli_visual_graphic_pane_g

0x222f,	// (0x00045bff) bg_popup_call2_rect_pane_g1

0xe24a,	// (0x00051c1a) bg_popup_call2_rect_pane_g2

0x2237,	// (0x00045c07) bg_popup_call2_rect_pane_g3

0x223f,	// (0x00045c0f) bg_popup_call2_rect_pane_g4

0x2247,	// (0x00045c17) bg_popup_call2_rect_pane_g5

0x224f,	// (0x00045c1f) bg_popup_call2_rect_pane_g6

0x2257,	// (0x00045c27) bg_popup_call2_rect_pane_g7

0x225f,	// (0x00045c2f) bg_popup_call2_rect_pane_g8

0x2267,	// (0x00045c37) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00052f62) bg_popup_call2_rect_pane_g

0x226f,	// (0x00045c3f) bg_popup_call2_bubble_pane_g1

0x2277,	// (0x00045c47) bg_popup_call2_bubble_pane_g2

0x227f,	// (0x00045c4f) bg_popup_call2_bubble_pane_g3

0x2287,	// (0x00045c57) bg_popup_call2_bubble_pane_g4

0x228f,	// (0x00045c5f) bg_popup_call2_bubble_pane_g5

0x2297,	// (0x00045c67) bg_popup_call2_bubble_pane_g6

0x229f,	// (0x00045c6f) bg_popup_call2_bubble_pane_g7

0x22a7,	// (0x00045c77) bg_popup_call2_bubble_pane_g8

0x22af,	// (0x00045c7f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00052f75) bg_popup_call2_bubble_pane_g

0x66ae,	// (0x0004a07e) aid_cale_week_size_cell_pane

0x6bf2,	// (0x0004a5c2) aid_cams_cif_uncrop_pane_ParamLimits

0x6bf2,	// (0x0004a5c2) aid_cams_cif_uncrop_pane

0x6d4a,	// (0x0004a71a) aid_cams_size_cell_ParamLimits

0x6d4a,	// (0x0004a71a) aid_cams_size_cell

0x6d56,	// (0x0004a726) grid_cams_pane_ParamLimits

0x6d62,	// (0x0004a732) linegrid_cams_pane_ParamLimits

0x6e71,	// (0x0004a841) call_video_pane_t1

0x6e8e,	// (0x0004a85e) call_video_pane_t2

0x0001,

0xf292,	// (0x00052c62) call_video_pane_t

0x7270,	// (0x0004ac40) aid_cale_month_size_cell_pane_ParamLimits

0x7270,	// (0x0004ac40) aid_cale_month_size_cell_pane

0xf642,	// (0x00053012) smil_status_volume_pane_g

0x8b04,	// (0x0004c4d4) volume_smil_pane_ParamLimits

0xd9e3,	// (0x000513b3) aid_popup2_width_pane

0x65d1,	// (0x00049fa1) cell_qdial_pane_g4_ParamLimits

0x65d1,	// (0x00049fa1) cell_qdial_pane_g4

0x7d03,	// (0x0004b6d3) aid_blid_cardinal_pane_ParamLimits

0x7d0f,	// (0x0004b6df) aid_blid_destination_pane_ParamLimits

0x7d0f,	// (0x0004b6df) aid_blid_destination_pane

0xe088,	// (0x00051a58) bg_popup_call_poc_act_pane_ParamLimits

0xe088,	// (0x00051a58) bg_popup_call_poc_act_pane

0xe088,	// (0x00051a58) bg_popup_call_poc_inact_pane_ParamLimits

0xe088,	// (0x00051a58) bg_popup_call_poc_inact_pane

0x22b7,	// (0x00045c87) bg_popup_call_poc_act_pane_g1

0x22bf,	// (0x00045c8f) bg_popup_call_poc_act_pane_g2

0x22c7,	// (0x00045c97) bg_popup_call_poc_act_pane_g3

0x2287,	// (0x00045c57) bg_popup_call_poc_act_pane_g4

0x228f,	// (0x00045c5f) bg_popup_call_poc_act_pane_g5

0x22cf,	// (0x00045c9f) bg_popup_call_poc_act_pane_g6

0x229f,	// (0x00045c6f) bg_popup_call_poc_act_pane_g7

0x22d7,	// (0x00045ca7) bg_popup_call_poc_act_pane_g8

0xde2d,	// (0x000517fd) main_usb_pane

0x2470,	// (0x00045e40) popup_cale_lunar_info_window

0x7113,	// (0x0004aae3) im_reading_pane_t1_ParamLimits

0xe41f,	// (0x00051def) list_im_pane_ParamLimits

0xe430,	// (0x00051e00) scroll_pane_cp07_ParamLimits

0xde2d,	// (0x000517fd) grid_highlight_pane_cp012

0xe088,	// (0x00051a58) mup_scale_pane_ParamLimits

0xe98d,	// (0x0005235d) main_usb_pane_g1_ParamLimits

0xe98d,	// (0x0005235d) main_usb_pane_g1

0x874b,	// (0x0004c11b) main_usb_pane_g2_ParamLimits

0x874b,	// (0x0004c11b) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x00052fb2) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x00052fb2) main_usb_pane_g

0x8757,	// (0x0004c127) main_usb_pane_t1_ParamLimits

0x8757,	// (0x0004c127) main_usb_pane_t1

0x8769,	// (0x0004c139) main_usb_pane_t2_ParamLimits

0x8769,	// (0x0004c139) main_usb_pane_t2

0x877b,	// (0x0004c14b) main_usb_pane_t3_ParamLimits

0x877b,	// (0x0004c14b) main_usb_pane_t3

0x878d,	// (0x0004c15d) main_usb_pane_t4_ParamLimits

0x878d,	// (0x0004c15d) main_usb_pane_t4

0x879f,	// (0x0004c16f) main_usb_pane_t5_ParamLimits

0x879f,	// (0x0004c16f) main_usb_pane_t5

0x87b1,	// (0x0004c181) main_usb_pane_t6_ParamLimits

0x87b1,	// (0x0004c181) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x00052fb7) main_usb_pane_t_ParamLimits

0xeb98,	// (0x00052568) aid_text_placing

0x7caf,	// (0x0004b67f) main_location2_pane_t1_ParamLimits

0x7cc5,	// (0x0004b695) main_location2_pane_t2_ParamLimits

0x7cdb,	// (0x0004b6ab) main_location2_pane_t3_ParamLimits

0x7cf1,	// (0x0004b6c1) main_location2_pane_t4_ParamLimits

0x7cf1,	// (0x0004b6c1) main_location2_pane_t4

0xf3f3,	// (0x00052dc3) main_location2_pane_t_ParamLimits

0xe0c4,	// (0x00051a94) find_pinb_pane_g2_ParamLimits

0xe0c4,	// (0x00051a94) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00052b11) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00052b11) find_pinb_pane_g

0xe0d0,	// (0x00051aa0) find_pinb_pane_t1_ParamLimits

0xe0e2,	// (0x00051ab2) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00052b16) find_pinb_pane_t_ParamLimits

0xde2d,	// (0x000517fd) main_call3_pane

0x7528,	// (0x0004aef8) cale_month_day_heading_pane_t1_ParamLimits

0x7586,	// (0x0004af56) cale_month_day_heading_pane_t2_ParamLimits

0x75eb,	// (0x0004afbb) cale_month_day_heading_pane_t3_ParamLimits

0x7650,	// (0x0004b020) cale_month_day_heading_pane_t4_ParamLimits

0x76b5,	// (0x0004b085) cale_month_day_heading_pane_t5_ParamLimits

0x771a,	// (0x0004b0ea) cale_month_day_heading_pane_t6_ParamLimits

0x777f,	// (0x0004b14f) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00052c9a) cale_month_day_heading_pane_t_ParamLimits

0xe680,	// (0x00052050) smil_status_volume_pane

0x83ac,	// (0x0004bd7c) postcard_address_pane_ParamLimits

0x83ac,	// (0x0004bd7c) postcard_address_pane

0x83b8,	// (0x0004bd88) postcard_message_pane_ParamLimits

0x83b8,	// (0x0004bd88) postcard_message_pane

0x8727,	// (0x0004c0f7) call2_cli_visual_pane_t1_ParamLimits

0x8727,	// (0x0004c0f7) call2_cli_visual_pane_t1

0x8c55,	// (0x0004c625) postcard_message_pane_t1_ParamLimits

0x8c55,	// (0x0004c625) postcard_message_pane_t1

0x8c3e,	// (0x0004c60e) postcard_address_pane_t1_ParamLimits

0x8c3e,	// (0x0004c60e) postcard_address_pane_t1

0x8c31,	// (0x0004c601) popup_call3_audio_in_window_ParamLimits

0x8c31,	// (0x0004c601) popup_call3_audio_in_window

0x8b19,	// (0x0004c4e9) bg_popup_call3_in_pane_ParamLimits

0x8b19,	// (0x0004c4e9) bg_popup_call3_in_pane

0x8b77,	// (0x0004c547) popup_call3_audio_in_window_g1_ParamLimits

0x8b77,	// (0x0004c547) popup_call3_audio_in_window_g1

0x8b8f,	// (0x0004c55f) popup_call3_audio_in_window_g2_ParamLimits

0x8b8f,	// (0x0004c55f) popup_call3_audio_in_window_g2

0x8ba7,	// (0x0004c577) popup_call3_audio_in_window_g3_ParamLimits

0x8ba7,	// (0x0004c577) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x00053019) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x00053019) popup_call3_audio_in_window_g

0x8bcf,	// (0x0004c59f) popup_call3_audio_in_window_t1_ParamLimits

0x8bcf,	// (0x0004c59f) popup_call3_audio_in_window_t1

0x8bf7,	// (0x0004c5c7) popup_call3_audio_in_window_t2_ParamLimits

0x8bf7,	// (0x0004c5c7) popup_call3_audio_in_window_t2

0x8c1f,	// (0x0004c5ef) popup_call3_audio_in_window_t3_ParamLimits

0x8c1f,	// (0x0004c5ef) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x00053022) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x00053022) popup_call3_audio_in_window_t

0xecd4,	// (0x000526a4) bg_popup_call3_rect_pane

0x222f,	// (0x00045bff) bg_popup_call3_rect_pane_g1

0xe24a,	// (0x00051c1a) bg_popup_call3_rect_pane_g2

0x2237,	// (0x00045c07) bg_popup_call3_rect_pane_g3

0x223f,	// (0x00045c0f) bg_popup_call3_rect_pane_g4

0x2247,	// (0x00045c17) bg_popup_call3_rect_pane_g5

0x224f,	// (0x00045c1f) bg_popup_call3_rect_pane_g6

0x2257,	// (0x00045c27) bg_popup_call3_rect_pane_g7

0x8031,	// (0x0004ba01) mup_visualizer_osc_pane

0xed93,	// (0x00052763) mup_visualizer_spec_pane

0x8b39,	// (0x0004c509) call3_video_qcif_pane_ParamLimits

0x8b39,	// (0x0004c509) call3_video_qcif_pane

0x8b49,	// (0x0004c519) call3_video_qcif_uncrop_pane_ParamLimits

0x8b49,	// (0x0004c519) call3_video_qcif_uncrop_pane

0x8b55,	// (0x0004c525) call3_video_subqcif_pane_ParamLimits

0x8b55,	// (0x0004c525) call3_video_subqcif_pane

0x8b67,	// (0x0004c537) call3_video_subqcif_uncrop_pane_ParamLimits

0x8b67,	// (0x0004c537) call3_video_subqcif_uncrop_pane

0x8bbf,	// (0x0004c58f) popup_call3_audio_in_window_g4_ParamLimits

0x8bbf,	// (0x0004c58f) popup_call3_audio_in_window_g4

0x8ae6,	// (0x0004c4b6) mup_spec_half_pane

0x8aef,	// (0x0004c4bf) mup_spec_half_pane_cp

0x2503,	// (0x00045ed3) mup_osc_middle_pane

0x250c,	// (0x00045edc) mup_visualizer_osc_pane_g1

0x8ac7,	// (0x0004c497) mup_spec_bar_pane_ParamLimits

0x8ac7,	// (0x0004c497) mup_spec_bar_pane

0x24f0,	// (0x00045ec0) mup_spec_bar_pane_g1

0x24fa,	// (0x00045eca) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0005300d) mup_spec_bar_pane_g

0x66ae,	// (0x0004a07e) aid_cale_week_size_cell_pane_ParamLimits

0x66c1,	// (0x0004a091) bg_cale_heading_pane_ParamLimits

0xe28e,	// (0x00051c5e) bg_cale_pane_cp01_ParamLimits

0x66d5,	// (0x0004a0a5) cale_week_corner_pane_ParamLimits

0x66eb,	// (0x0004a0bb) cale_week_day_heading_pane_ParamLimits

0x66ff,	// (0x0004a0cf) cale_week_scroll_pane_g1_ParamLimits

0x6710,	// (0x0004a0e0) cale_week_scroll_pane_g2_ParamLimits

0x6721,	// (0x0004a0f1) cale_week_scroll_pane_g3_ParamLimits

0x6732,	// (0x0004a102) cale_week_scroll_pane_g4_ParamLimits

0x6743,	// (0x0004a113) cale_week_scroll_pane_g5_ParamLimits

0x6754,	// (0x0004a124) cale_week_scroll_pane_g6_ParamLimits

0x6765,	// (0x0004a135) cale_week_scroll_pane_g7_ParamLimits

0x6776,	// (0x0004a146) cale_week_scroll_pane_g8_ParamLimits

0x6787,	// (0x0004a157) cale_week_scroll_pane_g9_ParamLimits

0x6798,	// (0x0004a168) cale_week_scroll_pane_g10_ParamLimits

0x67a9,	// (0x0004a179) cale_week_scroll_pane_g11_ParamLimits

0x67ba,	// (0x0004a18a) cale_week_scroll_pane_g12_ParamLimits

0x67cb,	// (0x0004a19b) cale_week_scroll_pane_g13_ParamLimits

0x67dc,	// (0x0004a1ac) cale_week_scroll_pane_g14_ParamLimits

0x67ed,	// (0x0004a1bd) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00052ba2) cale_week_scroll_pane_g_ParamLimits

0x67fe,	// (0x0004a1ce) cale_week_time_pane_ParamLimits

0x680f,	// (0x0004a1df) grid_cale_week_pane_ParamLimits

0xe2a7,	// (0x00051c77) listscroll_cale_week_pane_t1

0x6822,	// (0x0004a1f2) scroll_pane_cp08_ParamLimits

0x72b1,	// (0x0004ac81) cale_month_corner_pane_ParamLimits

0xe656,	// (0x00052026) cale_month_pane_t1

0x74f9,	// (0x0004aec9) cale_month_week_pane_ParamLimits

0xe98d,	// (0x0005235d) popup_call_status_window_g1_ParamLimits

0x7ae6,	// (0x0004b4b6) popup_call_status_window_g2_ParamLimits

0x7af2,	// (0x0004b4c2) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00052d4a) popup_call_status_window_g_ParamLimits

0xe9de,	// (0x000523ae) aid_call2_pane

0x823d,	// (0x0004bc0d) msg_header_pane_g1

0x83ac,	// (0x0004bd7c) postcard_address2_pane_ParamLimits

0x83ac,	// (0x0004bd7c) postcard_address2_pane

0x83b8,	// (0x0004bd88) postcard_message2_pane_ParamLimits

0x83b8,	// (0x0004bd88) postcard_message2_pane

0x8a7e,	// (0x0004c44e) message2_row_pane_ParamLimits

0x8a7e,	// (0x0004c44e) message2_row_pane

0x8a96,	// (0x0004c466) address2_row_pane_ParamLimits

0x8a96,	// (0x0004c466) address2_row_pane

0x24be,	// (0x00045e8e) postcard_message2_row_pane_g1

0x24c6,	// (0x00045e96) postcard_message2_row_pane_t1

0x24be,	// (0x00045e8e) address2_row_pane_g1

0x24c6,	// (0x00045e96) address2_row_pane_t1

0x6adb,	// (0x0004a4ab) aid_size_cell_vorec

0xde2d,	// (0x000517fd) main_rss_pane

0x8aa9,	// (0x0004c479) rss_list_single_pane_ParamLimits

0x8aa9,	// (0x0004c479) rss_list_single_pane

0x24d4,	// (0x00045ea4) rss_list_single_pane_t1

0x24e2,	// (0x00045eb2) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x00053008) rss_list_single_pane_t

0xde2d,	// (0x000517fd) main_camera2_pane

0xde2d,	// (0x000517fd) main_video2_pane

0x8ca5,	// (0x0004c675) cams_zoom_pane_cp2_ParamLimits

0x8ca5,	// (0x0004c675) cams_zoom_pane_cp2

0x8cb1,	// (0x0004c681) image2_vga_pane_ParamLimits

0x8cb1,	// (0x0004c681) image2_vga_pane

0x8cc0,	// (0x0004c690) main_camera2_pane_g1_ParamLimits

0x8cc0,	// (0x0004c690) main_camera2_pane_g1

0x8ccc,	// (0x0004c69c) main_camera2_pane_g2_ParamLimits

0x8ccc,	// (0x0004c69c) main_camera2_pane_g2

0x8cd8,	// (0x0004c6a8) main_camera2_pane_g3_ParamLimits

0x8cd8,	// (0x0004c6a8) main_camera2_pane_g3

0x8ce4,	// (0x0004c6b4) main_camera2_pane_g4_ParamLimits

0x8ce4,	// (0x0004c6b4) main_camera2_pane_g4

0x8cf0,	// (0x0004c6c0) main_camera2_pane_g5_ParamLimits

0x8cf0,	// (0x0004c6c0) main_camera2_pane_g5

0x8cfc,	// (0x0004c6cc) main_camera2_pane_g6_ParamLimits

0x8cfc,	// (0x0004c6cc) main_camera2_pane_g6

0x8d08,	// (0x0004c6d8) main_camera2_pane_g7_ParamLimits

0x8d08,	// (0x0004c6d8) main_camera2_pane_g7

0x8d14,	// (0x0004c6e4) main_camera2_pane_g8_ParamLimits

0x8d14,	// (0x0004c6e4) main_camera2_pane_g8

0x0008,

0xf659,	// (0x00053029) main_camera2_pane_g_ParamLimits

0xf659,	// (0x00053029) main_camera2_pane_g

0x8d2c,	// (0x0004c6fc) main_camera2_pane_t1_ParamLimits

0x8d2c,	// (0x0004c6fc) main_camera2_pane_t1

0x8d3e,	// (0x0004c70e) main_camera2_pane_t2_ParamLimits

0x8d3e,	// (0x0004c70e) main_camera2_pane_t2

0x8d50,	// (0x0004c720) main_camera2_pane_t3_ParamLimits

0x8d50,	// (0x0004c720) main_camera2_pane_t3

0x8d62,	// (0x0004c732) main_camera2_pane_t4_ParamLimits

0x8d62,	// (0x0004c732) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x0005303c) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x0005303c) main_camera2_pane_t

0x8dbd,	// (0x0004c78d) cams_zoom_pane_cp4_ParamLimits

0x8dbd,	// (0x0004c78d) cams_zoom_pane_cp4

0x8dcd,	// (0x0004c79d) image2_cif_pane_ParamLimits

0x8dcd,	// (0x0004c79d) image2_cif_pane

0x8dde,	// (0x0004c7ae) image2_subqcif_pane_ParamLimits

0x8dde,	// (0x0004c7ae) image2_subqcif_pane

0x8deb,	// (0x0004c7bb) main_video2_pane_g1_ParamLimits

0x8deb,	// (0x0004c7bb) main_video2_pane_g1

0x8dfd,	// (0x0004c7cd) main_video2_pane_g2_ParamLimits

0x8dfd,	// (0x0004c7cd) main_video2_pane_g2

0x8e0d,	// (0x0004c7dd) main_video2_pane_g3_ParamLimits

0x8e0d,	// (0x0004c7dd) main_video2_pane_g3

0x8e1d,	// (0x0004c7ed) main_video2_pane_g4_ParamLimits

0x8e1d,	// (0x0004c7ed) main_video2_pane_g4

0x8e2d,	// (0x0004c7fd) main_video2_pane_g5_ParamLimits

0x8e2d,	// (0x0004c7fd) main_video2_pane_g5

0x8e3d,	// (0x0004c80d) main_video2_pane_g6_ParamLimits

0x8e3d,	// (0x0004c80d) main_video2_pane_g6

0x0005,

0xf67b,	// (0x0005304b) main_video2_pane_g_ParamLimits

0xf67b,	// (0x0005304b) main_video2_pane_g

0x8e4f,	// (0x0004c81f) main_video2_pane_t1_ParamLimits

0x8e4f,	// (0x0004c81f) main_video2_pane_t1

0x8e69,	// (0x0004c839) main_video2_pane_t2_ParamLimits

0x8e69,	// (0x0004c839) main_video2_pane_t2

0x8e8f,	// (0x0004c85f) main_video2_pane_t3_ParamLimits

0x8e8f,	// (0x0004c85f) main_video2_pane_t3

0x0002,

0xf688,	// (0x00053058) main_video2_pane_t_ParamLimits

0xf688,	// (0x00053058) main_video2_pane_t

0x8860,	// (0x0004c230) call_muted_g2

0x0001,

0xf62a,	// (0x00052ffa) call_muted_g

0xde2d,	// (0x000517fd) main_mup2_pane

0x2571,	// (0x00045f41) main_mup2_pane_g1_ParamLimits

0x2571,	// (0x00045f41) main_mup2_pane_g1

0x8eb5,	// (0x0004c885) main_mup2_pane_g2_ParamLimits

0x8eb5,	// (0x0004c885) main_mup2_pane_g2

0x9125,	// (0x0004caf5) main_mup_pane_g13_cp1

0x912d,	// (0x0004cafd) mup_volume_pane_cp1

0x8ed5,	// (0x0004c8a5) main_mup2_pane_g4_ParamLimits

0x8ed5,	// (0x0004c8a5) main_mup2_pane_g4

0x8ee6,	// (0x0004c8b6) main_mup2_pane_g5_ParamLimits

0x8ee6,	// (0x0004c8b6) main_mup2_pane_g5

0x8ef7,	// (0x0004c8c7) main_mup2_pane_g6_ParamLimits

0x8ef7,	// (0x0004c8c7) main_mup2_pane_g6

0x8f08,	// (0x0004c8d8) main_mup2_pane_g7_ParamLimits

0x8f08,	// (0x0004c8d8) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x0005305f) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x0005305f) main_mup2_pane_g

0x8f24,	// (0x0004c8f4) main_mup2_pane_t1_ParamLimits

0x8f24,	// (0x0004c8f4) main_mup2_pane_t1

0x8f3b,	// (0x0004c90b) main_mup2_pane_t2_ParamLimits

0x8f3b,	// (0x0004c90b) main_mup2_pane_t2

0x8f52,	// (0x0004c922) main_mup2_pane_t3_ParamLimits

0x8f52,	// (0x0004c922) main_mup2_pane_t3

0x8f69,	// (0x0004c939) main_mup2_pane_t4_ParamLimits

0x8f69,	// (0x0004c939) main_mup2_pane_t4

0x8f83,	// (0x0004c953) main_mup2_pane_t5_ParamLimits

0x8f83,	// (0x0004c953) main_mup2_pane_t5

0x8f9d,	// (0x0004c96d) main_mup2_pane_t6_ParamLimits

0x8f9d,	// (0x0004c96d) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x0005306e) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x0005306e) main_mup2_pane_t

0x8fd5,	// (0x0004c9a5) mup2_visualizer_pane_ParamLimits

0x8fd5,	// (0x0004c9a5) mup2_visualizer_pane

0x9007,	// (0x0004c9d7) mup_progress_pane_cp_ParamLimits

0x9007,	// (0x0004c9d7) mup_progress_pane_cp

0x9110,	// (0x0004cae0) mup_volume_pane_cp_ParamLimits

0x9110,	// (0x0004cae0) mup_volume_pane_cp

0x901e,	// (0x0004c9ee) mup2_visualizer_pane_g1_ParamLimits

0x901e,	// (0x0004c9ee) mup2_visualizer_pane_g1

0x2543,	// (0x00045f13) mup2_visualizer_pane_g2_ParamLimits

0x2543,	// (0x00045f13) mup2_visualizer_pane_g2

0x9033,	// (0x0004ca03) mup2_visualizer_pane_g3_ParamLimits

0x9033,	// (0x0004ca03) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x0005307b) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x0005307b) mup2_visualizer_pane_g

0xefba,	// (0x0005298a) aid_size_cell_fmradio

0x8942,	// (0x0004c312) aid_height_parent_landcape

0xe4bd,	// (0x00051e8d) wml_content_pane_cp

0xe4c5,	// (0x00051e95) wml_tabs_pane

0xe4ce,	// (0x00051e9e) popup_wml_miniature_window

0xe4d6,	// (0x00051ea6) scroll_pane_cp021

0xe4ea,	// (0x00051eba) wml_content_pane_comp8

0xde2d,	// (0x000517fd) bg_popup_sub_pane_cp05

0x2561,	// (0x00045f31) popup_wml_miniature_window_g1

0x2569,	// (0x00045f39) wml_miniature_view_pane

0x903f,	// (0x0004ca0f) aid_size_wml_view

0x9047,	// (0x0004ca17) wml_miniature_view_pane_g1

0x9050,	// (0x0004ca20) wml_miniature_view_pane_g2

0x9059,	// (0x0004ca29) wml_miniature_view_pane_g3

0x9061,	// (0x0004ca31) wml_miniature_view_pane_g4

0x9069,	// (0x0004ca39) wml_miniature_view_pane_g5

0x9071,	// (0x0004ca41) wml_miniature_view_pane_g6

0x9079,	// (0x0004ca49) wml_miniature_view_pane_g7

0x9081,	// (0x0004ca51) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x00053082) wml_miniature_view_pane_g

0x2571,	// (0x00045f41) background_graphic_ParamLimits

0x2571,	// (0x00045f41) background_graphic

0x257d,	// (0x00045f4d) wml_tabs_2_pane

0x2586,	// (0x00045f56) wml_tabs_3_pane_ParamLimits

0x2586,	// (0x00045f56) wml_tabs_3_pane

0x2598,	// (0x00045f68) wml_tabs_4_pane_ParamLimits

0x2598,	// (0x00045f68) wml_tabs_4_pane

0x25ae,	// (0x00045f7e) wml_tabs_5_pane_ParamLimits

0x25ae,	// (0x00045f7e) wml_tabs_5_pane

0x25c8,	// (0x00045f98) wml_tabs_pane_g2_ParamLimits

0x25c8,	// (0x00045f98) wml_tabs_pane_g2

0x25dc,	// (0x00045fac) wml_tabs_pane_g3_ParamLimits

0x25dc,	// (0x00045fac) wml_tabs_pane_g3

0x9089,	// (0x0004ca59) wml_tabs_2_active_pane_ParamLimits

0x9089,	// (0x0004ca59) wml_tabs_2_active_pane

0x9099,	// (0x0004ca69) wml_tabs_2_passive_pane_ParamLimits

0x9099,	// (0x0004ca69) wml_tabs_2_passive_pane

0x90a9,	// (0x0004ca79) wml_tabs_3_active_pane_cp_ParamLimits

0x90a9,	// (0x0004ca79) wml_tabs_3_active_pane_cp

0x90ba,	// (0x0004ca8a) wml_tabs_3_passive_pane_ParamLimits

0x90ba,	// (0x0004ca8a) wml_tabs_3_passive_pane

0x90cb,	// (0x0004ca9b) wml_tabs_3_passive_pane_cp_ParamLimits

0x90cb,	// (0x0004ca9b) wml_tabs_3_passive_pane_cp

0x90dc,	// (0x0004caac) tabs_4_active_pane

0x90e4,	// (0x0004cab4) tabs_4_passive_pane

0x90ec,	// (0x0004cabc) tabs_4_passive_pane_cp

0x90f4,	// (0x0004cac4) tabs_4_passive_pane_cp2

0x8743,	// (0x0004c113) aid_height_text

0x7ffe,	// (0x0004b9ce) mup_volume_cont_pane_ParamLimits

0x7ffe,	// (0x0004b9ce) mup_volume_cont_pane

0x627d,	// (0x00049c4d) aid_size_cell_pinb

0x6287,	// (0x00049c57) aid_size_list_pinb

0x8ff0,	// (0x0004c9c0) mup2_volume_cont_pane_ParamLimits

0x8ff0,	// (0x0004c9c0) mup2_volume_cont_pane

0x90fc,	// (0x0004cacc) mup2_volume_cont_pane_g1_ParamLimits

0x90fc,	// (0x0004cacc) mup2_volume_cont_pane_g1

0x5f74,	// (0x00049944) aid_size_cell_touch_ParamLimits

0x5f74,	// (0x00049944) aid_size_cell_touch

0x617d,	// (0x00049b4d) touch_pane_ParamLimits

0x617d,	// (0x00049b4d) touch_pane

0xd9d1,	// (0x000513a1) main_rss2_pane

0x25f9,	// (0x00045fc9) listscroll_rss2_pane

0x2602,	// (0x00045fd2) rss2_navigation_pane

0x260a,	// (0x00045fda) list_rss2_pane

0xeb15,	// (0x000524e5) scroll_pane_cp22

0x2612,	// (0x00045fe2) rss2_navigation_pane_g1

0x261b,	// (0x00045feb) rss2_navigation_pane_g2

0x2623,	// (0x00045ff3) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x00053093) rss2_navigation_pane_g

0x262b,	// (0x00045ffb) rss2_navigation_pane_t1

0x9135,	// (0x0004cb05) rss2_list_single_pane_ParamLimits

0x9135,	// (0x0004cb05) rss2_list_single_pane

0x2639,	// (0x00046009) rss2_list_single_pane_t2

0x2647,	// (0x00046017) rss2_list_single_pane_t3_ParamLimits

0x2647,	// (0x00046017) rss2_list_single_pane_t3

0x2664,	// (0x00046034) rss2_list_single_pane_t4

0x7945,	// (0x0004b315) smil_status_pane_g1

0xf063,	// (0x00052a33) main_image2_pane_ParamLimits

0xf063,	// (0x00052a33) main_image2_pane

0x8d20,	// (0x0004c6f0) main_camera2_pane_g9_ParamLimits

0x8d20,	// (0x0004c6f0) main_camera2_pane_g9

0x8d74,	// (0x0004c744) main_camera2_pane_t5_ParamLimits

0x8d74,	// (0x0004c744) main_camera2_pane_t5

0x8d86,	// (0x0004c756) main_camera2_pane_t6_ParamLimits

0x8d86,	// (0x0004c756) main_camera2_pane_t6

0x914c,	// (0x0004cb1c) main_image2_pane_g1_ParamLimits

0x914c,	// (0x0004cb1c) main_image2_pane_g1

0x8558,	// (0x0004bf28) smil2_video_pane_ParamLimits

0x8558,	// (0x0004bf28) smil2_video_pane

0x1054,	// (0x00044a24) aid_zoom_text_primary_cp

0xda14,	// (0x000513e4) popup_preview_fixed_window

0xe417,	// (0x00051de7) im_reading_pane_g1

0x8c7c,	// (0x0004c64c) cams2_bc_adjust_pane_cp_ParamLimits

0x8c7c,	// (0x0004c64c) cams2_bc_adjust_pane_cp

0x8db1,	// (0x0004c781) cams2_bc_adjust_pane_ParamLimits

0x8db1,	// (0x0004c781) cams2_bc_adjust_pane

0x3915,	// (0x000472e5) cams2_bc_adjust_pane_g1

0x9158,	// (0x0004cb28) cams2_slider_pane

0x9161,	// (0x0004cb31) cams2_slider_pane_g1

0x916a,	// (0x0004cb3a) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x0005309a) cams2_slider_pane_g

0x6366,	// (0x00049d36) calc_display_pane_ParamLimits

0x637e,	// (0x00049d4e) calc_paper_pane_ParamLimits

0x639a,	// (0x00049d6a) grid_calc_pane_ParamLimits

0x7b64,	// (0x0004b534) popup_clock_digital_window_t1_ParamLimits

0xef57,	// (0x00052927) main_image_pane_t1

0x634c,	// (0x00049d1c) aid_size_cell_calc_ParamLimits

0x634c,	// (0x00049d1c) aid_size_cell_calc

0x8967,	// (0x0004c337) popup_blid_sat_info2_window_ParamLimits

0x8967,	// (0x0004c337) popup_blid_sat_info2_window

0x267a,	// (0x0004604a) aid_size_cell_blid

0x2682,	// (0x00046052) bg_popup_window_pane_cp07

0x26a5,	// (0x00046075) grid_popup_blid_pane

0x26ad,	// (0x0004607d) heading_pane_cp05_ParamLimits

0x26ad,	// (0x0004607d) heading_pane_cp05

0x2775,	// (0x00046145) cell_popup_blid_pane_ParamLimits

0x2775,	// (0x00046145) cell_popup_blid_pane

0x2795,	// (0x00046165) cell_popup_blid_pane_g1

0x279d,	// (0x0004616d) cell_popup_blid_pane_t1

0x8fba,	// (0x0004c98a) mup2_indicator_pane_ParamLimits

0x8fba,	// (0x0004c98a) mup2_indicator_pane

0xecd4,	// (0x000526a4) mup2_visualizer_osc_pane

0x254f,	// (0x00045f1f) mup2_visualizer_spec_pane_ParamLimits

0x254f,	// (0x00045f1f) mup2_visualizer_spec_pane

0x9184,	// (0x0004cb54) mup2_spec_half_pane

0x918d,	// (0x0004cb5d) mup2_spec_half_pane_cp

0x9195,	// (0x0004cb65) mup2_spec_bar_pane_ParamLimits

0x9195,	// (0x0004cb65) mup2_spec_bar_pane

0x24f0,	// (0x00045ec0) mup2_spec_bar_pane_g1

0x24fa,	// (0x00045eca) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0005300d) mup2_spec_bar_pane_g

0x91b4,	// (0x0004cb84) mup2_osc_middle_pane

0x250c,	// (0x00045edc) mup2_visualizer_osc_pane_g1

0xda3c,	// (0x0005140c) popup_number_entry_window_t1_ParamLimits

0xda4f,	// (0x0005141f) popup_number_entry_window_t2_ParamLimits

0xda61,	// (0x00051431) popup_number_entry_window_t3_ParamLimits

0x61ca,	// (0x00049b9a) popup_number_entry_window_t5_ParamLimits

0x61ca,	// (0x00049b9a) popup_number_entry_window_t5

0xf0ec,	// (0x00052abc) popup_number_entry_window_t_ParamLimits

0xda73,	// (0x00051443) text_title_cp2_ParamLimits

0x8296,	// (0x0004bc66) aid_hotspot_pointer_text2_pane

0x8328,	// (0x0004bcf8) main_viewer_pane_g9_ParamLimits

0x8328,	// (0x0004bcf8) main_viewer_pane_g9

0xe656,	// (0x00052026) cale_month_pane_t1_ParamLimits

0xe693,	// (0x00052063) bg_cale_pane_ParamLimits

0xe6ab,	// (0x0005207b) list_cale_pane_ParamLimits

0xe2a7,	// (0x00051c77) listscroll_cale_day_pane_t1

0xe6bc,	// (0x0005208c) scroll_pane_cp09_ParamLimits

0x8039,	// (0x0004ba09) main_mup_eq_pane_t1_ParamLimits

0x8039,	// (0x0004ba09) main_mup_eq_pane_t1

0x804f,	// (0x0004ba1f) main_mup_eq_pane_t2_ParamLimits

0x804f,	// (0x0004ba1f) main_mup_eq_pane_t2

0x8065,	// (0x0004ba35) main_mup_eq_pane_t3_ParamLimits

0x8065,	// (0x0004ba35) main_mup_eq_pane_t3

0x807b,	// (0x0004ba4b) main_mup_eq_pane_t4_ParamLimits

0x807b,	// (0x0004ba4b) main_mup_eq_pane_t4

0x8091,	// (0x0004ba61) main_mup_eq_pane_t5_ParamLimits

0x8091,	// (0x0004ba61) main_mup_eq_pane_t5

0x80a7,	// (0x0004ba77) main_mup_eq_pane_t6_ParamLimits

0x80a7,	// (0x0004ba77) main_mup_eq_pane_t6

0x80b9,	// (0x0004ba89) main_mup_eq_pane_t7_ParamLimits

0x80b9,	// (0x0004ba89) main_mup_eq_pane_t7

0x80cb,	// (0x0004ba9b) main_mup_eq_pane_t8_ParamLimits

0x80cb,	// (0x0004ba9b) main_mup_eq_pane_t8

0x80dd,	// (0x0004baad) main_mup_eq_pane_t9_ParamLimits

0x80dd,	// (0x0004baad) main_mup_eq_pane_t9

0x80f3,	// (0x0004bac3) main_mup_eq_pane_t10_ParamLimits

0x80f3,	// (0x0004bac3) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00052e49) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00052e49) main_mup_eq_pane_t

0x8186,	// (0x0004bb56) mup_equalizer_pane_cp5_ParamLimits

0x8198,	// (0x0004bb68) mup_equalizer_pane_cp6_ParamLimits

0x81aa,	// (0x0004bb7a) mup_equalizer_pane_cp7_ParamLimits

0xd9d1,	// (0x000513a1) main_gallery_pane

0x2515,	// (0x00045ee5) smil2_volume_pane

0x2530,	// (0x00045f00) smil_status_volume_pane_g1_ParamLimits

0x251d,	// (0x00045eed) smil_status_volume_pane_g2_ParamLimits

0x8af7,	// (0x0004c4c7) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x00053012) smil_status_volume_pane_g_ParamLimits

0x2682,	// (0x00046052) bg_popup_window_pane_cp07_ParamLimits

0x2690,	// (0x00046060) blid_firmament_pane

0x91bd,	// (0x0004cb8d) aid_size_cell_gallery_ParamLimits

0x91bd,	// (0x0004cb8d) aid_size_cell_gallery

0x91cb,	// (0x0004cb9b) grid_gallery_pane_ParamLimits

0x91cb,	// (0x0004cb9b) grid_gallery_pane

0x91d7,	// (0x0004cba7) cell_gallery_pane_ParamLimits

0x91d7,	// (0x0004cba7) cell_gallery_pane

0x27ab,	// (0x0004617b) bg_cell_gallery_focus_pane_ParamLimits

0x27ab,	// (0x0004617b) bg_cell_gallery_focus_pane

0x27bd,	// (0x0004618d) cell_gallery_pane_g1_ParamLimits

0x27bd,	// (0x0004618d) cell_gallery_pane_g1

0x9216,	// (0x0004cbe6) cell_gallery_pane_g2_ParamLimits

0x9216,	// (0x0004cbe6) cell_gallery_pane_g2

0x9223,	// (0x0004cbf3) cell_gallery_pane_g3_ParamLimits

0x9223,	// (0x0004cbf3) cell_gallery_pane_g3

0x27c9,	// (0x00046199) cell_gallery_pane_g4_ParamLimits

0x27c9,	// (0x00046199) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x000530c0) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x000530c0) cell_gallery_pane_g

0x27d5,	// (0x000461a5) bg_cell_gallery_focus_pane_g1

0x27dd,	// (0x000461ad) bg_cell_gallery_focus_pane_g2

0x27e5,	// (0x000461b5) bg_cell_gallery_focus_pane_g3

0x27ed,	// (0x000461bd) bg_cell_gallery_focus_pane_g4

0x27f5,	// (0x000461c5) bg_cell_gallery_focus_pane_g5

0x27fd,	// (0x000461cd) bg_cell_gallery_focus_pane_g6

0x2805,	// (0x000461d5) bg_cell_gallery_focus_pane_g7

0x280d,	// (0x000461dd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x000530c9) bg_cell_gallery_focus_pane_g

0x2815,	// (0x000461e5) aid_firma_cardinal

0x2829,	// (0x000461f9) blid_firmament_pane_t1

0x2840,	// (0x00046210) blid_firmament_pane_t2

0x2857,	// (0x00046227) blid_firmament_pane_t3

0x286e,	// (0x0004623e) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x000530da) blid_firmament_pane_t

0x2885,	// (0x00046255) blid_sat_info_pane

0x2895,	// (0x00046265) blid_sat_info_pane_g1

0x2895,	// (0x00046265) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x000530e3) blid_sat_info_pane_g

0x289f,	// (0x0004626f) blid_sat_info_pane_t1

0x28ad,	// (0x0004627d) smil2_volume_content_pane

0x28b6,	// (0x00046286) smil2_volume_pane_g1

0x28be,	// (0x0004628e) smil2_volume_content_pane_g1

0x28c7,	// (0x00046297) smil2_volume_content_pane_g2

0x28d0,	// (0x000462a0) smil2_volume_content_pane_g3

0x28d9,	// (0x000462a9) smil2_volume_content_pane_g4

0x28e2,	// (0x000462b2) smil2_volume_content_pane_g5

0x28eb,	// (0x000462bb) smil2_volume_content_pane_g6

0x28f4,	// (0x000462c4) smil2_volume_content_pane_g7

0x28fd,	// (0x000462cd) smil2_volume_content_pane_g8

0x2906,	// (0x000462d6) smil2_volume_content_pane_g9

0x290f,	// (0x000462df) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x000530e8) smil2_volume_content_pane_g

0x6876,	// (0x0004a246) cale_week_day_heading_pane_t1_ParamLimits

0x688f,	// (0x0004a25f) cale_week_day_heading_pane_t2_ParamLimits

0x68a8,	// (0x0004a278) cale_week_day_heading_pane_t3_ParamLimits

0x68c1,	// (0x0004a291) cale_week_day_heading_pane_t4_ParamLimits

0x68da,	// (0x0004a2aa) cale_week_day_heading_pane_t5_ParamLimits

0x68f3,	// (0x0004a2c3) cale_week_day_heading_pane_t6_ParamLimits

0x690c,	// (0x0004a2dc) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00052bc1) cale_week_day_heading_pane_t_ParamLimits

0xe2b9,	// (0x00051c89) bg_cale_side_pane_ParamLimits

0x6925,	// (0x0004a2f5) cale_week_time_pane_t1_ParamLimits

0x6951,	// (0x0004a321) cale_week_time_pane_t2_ParamLimits

0x697d,	// (0x0004a34d) cale_week_time_pane_t3_ParamLimits

0x69a9,	// (0x0004a379) cale_week_time_pane_t4_ParamLimits

0x69d5,	// (0x0004a3a5) cale_week_time_pane_t5_ParamLimits

0x6a01,	// (0x0004a3d1) cale_week_time_pane_t6_ParamLimits

0x6a2d,	// (0x0004a3fd) cale_week_time_pane_t7_ParamLimits

0x6a59,	// (0x0004a429) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00052bd0) cale_week_time_pane_t_ParamLimits

0x6a85,	// (0x0004a455) cell_cale_week_pane_g2_ParamLimits

0xe2b9,	// (0x00051c89) bg_cale_side_pane_cp01_ParamLimits

0x77e4,	// (0x0004b1b4) cale_month_week_pane_t1_ParamLimits

0x77fb,	// (0x0004b1cb) cale_month_week_pane_t2_ParamLimits

0x7812,	// (0x0004b1e2) cale_month_week_pane_t3_ParamLimits

0x7829,	// (0x0004b1f9) cale_month_week_pane_t4_ParamLimits

0x7840,	// (0x0004b210) cale_month_week_pane_t5_ParamLimits

0x7857,	// (0x0004b227) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00052ca9) cale_month_week_pane_t_ParamLimits

0x7914,	// (0x0004b2e4) cell_cale_month_pane_g1_ParamLimits

0xd9d1,	// (0x000513a1) main_cale_event_viewer_pane

0xd9d1,	// (0x000513a1) listscroll_cale_event_viewer_pane

0x2918,	// (0x000462e8) list_cale_ev_pane

0x2920,	// (0x000462f0) scroll_pane_cp023

0x9230,	// (0x0004cc00) field_cale_ev_pane_ParamLimits

0x9230,	// (0x0004cc00) field_cale_ev_pane

0x292c,	// (0x000462fc) field_cale_ev_content_pane_ParamLimits

0x292c,	// (0x000462fc) field_cale_ev_content_pane

0x2938,	// (0x00046308) field_cale_ev_pane_g1_ParamLimits

0x2938,	// (0x00046308) field_cale_ev_pane_g1

0x2944,	// (0x00046314) field_cale_ev_pane_g2_ParamLimits

0x2944,	// (0x00046314) field_cale_ev_pane_g2

0x295c,	// (0x0004632c) field_cale_ev_pane_g3_ParamLimits

0x295c,	// (0x0004632c) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x000530fd) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x000530fd) field_cale_ev_pane_g

0x2974,	// (0x00046344) field_cale_ev_pane_t1_ParamLimits

0x2974,	// (0x00046344) field_cale_ev_pane_t1

0x924a,	// (0x0004cc1a) field_cale_ev_content_pane_t1_ParamLimits

0x924a,	// (0x0004cc1a) field_cale_ev_content_pane_t1

0xee3d,	// (0x0005280d) bg_button_pane_cp01

0xe27f,	// (0x00051c4f) listscroll_cale_week_pane_ParamLimits

0x66a6,	// (0x0004a076) popup_toolbar_window_cp01

0xe2a7,	// (0x00051c77) listscroll_cale_week_pane_t1_ParamLimits

0xe157,	// (0x00051b27) listscroll_cale_day_pane_ParamLimits

0x66a6,	// (0x0004a076) popup_toolbar_window_cp02

0xe2a7,	// (0x00051c77) listscroll_cale_day_pane_t1_ParamLimits

0xe27f,	// (0x00051c4f) main_cale_month_pane_ParamLimits

0x8a07,	// (0x0004c3d7) popup_toolbar_window_cp03_ParamLimits

0x8a07,	// (0x0004c3d7) popup_toolbar_window_cp03

0x8480,	// (0x0004be50) main_image_pane_g2_ParamLimits

0x8480,	// (0x0004be50) main_image_pane_g2

0x848c,	// (0x0004be5c) main_image_pane_g3_ParamLimits

0x848c,	// (0x0004be5c) main_image_pane_g3

0x0002,

0xf50b,	// (0x00052edb) main_image_pane_g_ParamLimits

0xf50b,	// (0x00052edb) main_image_pane_g

0xef57,	// (0x00052927) main_image_pane_t1_ParamLimits

0x8498,	// (0x0004be68) main_image_pane_t2_ParamLimits

0x8498,	// (0x0004be68) main_image_pane_t2

0x84aa,	// (0x0004be7a) main_image_pane_t3_ParamLimits

0x84aa,	// (0x0004be7a) main_image_pane_t3

0x84bc,	// (0x0004be8c) main_image_pane_t4_ParamLimits

0x84bc,	// (0x0004be8c) main_image_pane_t4

0x0003,

0xf512,	// (0x00052ee2) main_image_pane_t_ParamLimits

0xf512,	// (0x00052ee2) main_image_pane_t

0x84ce,	// (0x0004be9e) popup_image_details_window_cp01

0x84d6,	// (0x0004bea6) popup_toobar_trans_pane_cp01_ParamLimits

0x84d6,	// (0x0004bea6) popup_toobar_trans_pane_cp01

0x89a6,	// (0x0004c376) popup_image_details_window_ParamLimits

0x89a6,	// (0x0004c376) popup_image_details_window

0x2478,	// (0x00045e48) popup_image_focus_window

0x8c70,	// (0x0004c640) camera2_autofocus_pane_ParamLimits

0x8c70,	// (0x0004c640) camera2_autofocus_pane

0xd9d1,	// (0x000513a1) bg_popup_sub_pane_cp06

0x298b,	// (0x0004635b) popup_image_focus_window_g1

0x2993,	// (0x00046363) popup_image_focus_window_g2

0x299b,	// (0x0004636b) popup_image_focus_window_g3

0x29a3,	// (0x00046373) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x00053104) popup_image_focus_window_g

0x29ab,	// (0x0004637b) popup_image_focus_window_t1

0x29b9,	// (0x00046389) popup_image_focus_window_t2

0x29c8,	// (0x00046398) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x0005310d) popup_image_focus_window_t

0x29d6,	// (0x000463a6) camera2_autofocus_pane_g1

0xf063,	// (0x00052a33) bg_tb_trans_pane_cp01

0x29e4,	// (0x000463b4) popup_image_details_window_g1

0x29f7,	// (0x000463c7) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x0005311f) popup_image_details_window_g

0x2a20,	// (0x000463f0) popup_image_details_window_t1

0x2a32,	// (0x00046402) popup_image_details_window_t2

0x2a4b,	// (0x0004641b) popup_image_details_window_t3

0x2a5f,	// (0x0004642f) popup_image_details_window_t4

0x2a7a,	// (0x0004644a) popup_image_details_window_t5

0x0004,

0xf756,	// (0x00053126) popup_image_details_window_t

0xe13f,	// (0x00051b0f) bg_calc_paper_pane_ParamLimits

0x647b,	// (0x00049e4b) grid_highlight_pane_cp013

0x6485,	// (0x00049e55) list_calc_pane_ParamLimits

0x6497,	// (0x00049e67) scroll_pane_cp024

0xe157,	// (0x00051b27) bg_calc_display_pane_ParamLimits

0x649f,	// (0x00049e6f) calc_display_pane_t1_ParamLimits

0x64b4,	// (0x00049e84) calc_display_pane_t2_ParamLimits

0x64c9,	// (0x00049e99) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00052b43) calc_display_pane_t_ParamLimits

0x657f,	// (0x00049f4f) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00052b60) cell_calc_pane_g

0x6588,	// (0x00049f58) cell_calc_pane_t1

0xe1b6,	// (0x00051b86) grid_highlight_pane_cp02_ParamLimits

0xe1cc,	// (0x00051b9c) toolbar_button_pane_cp01_ParamLimits

0xe1cc,	// (0x00051b9c) toolbar_button_pane_cp01

0xef9c,	// (0x0005296c) temp_image_control_pane_ParamLimits

0xef9c,	// (0x0005296c) temp_image_control_pane

0xf063,	// (0x00052a33) main_mp3_pane

0x2a94,	// (0x00046464) temp_image_control_pane_g1_ParamLimits

0x2a94,	// (0x00046464) temp_image_control_pane_g1

0x2aa2,	// (0x00046472) temp_image_control_pane_g2_ParamLimits

0x2aa2,	// (0x00046472) temp_image_control_pane_g2

0x2ab4,	// (0x00046484) temp_image_control_pane_g3_ParamLimits

0x2ab4,	// (0x00046484) temp_image_control_pane_g3

0x9294,	// (0x0004cc64) temp_image_control_pane_g4_ParamLimits

0x9294,	// (0x0004cc64) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x00053131) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x00053131) temp_image_control_pane_g

0x2a94,	// (0x00046464) main_mp3_pane_g1

0x92a5,	// (0x0004cc75) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x0005313a) main_mp3_pane_g

0x2af7,	// (0x000464c7) main_mp3_pane_t1

0xe328,	// (0x00051cf8) main_camera_pane_g8_ParamLimits

0xe328,	// (0x00051cf8) main_camera_pane_g8

0x6d00,	// (0x0004a6d0) main_video_pane_g7_ParamLimits

0x6d00,	// (0x0004a6d0) main_video_pane_g7

0x8d9f,	// (0x0004c76f) main_camera2_pane_t7_ParamLimits

0x8d9f,	// (0x0004c76f) main_camera2_pane_t7

0xe47d,	// (0x00051e4d) scroll_pane_cp025_ParamLimits

0xe47d,	// (0x00051e4d) scroll_pane_cp025

0xe491,	// (0x00051e61) scroll_pane_cp026_ParamLimits

0xe491,	// (0x00051e61) scroll_pane_cp026

0xe4a0,	// (0x00051e70) wml_content_pane_ParamLimits

0xd9d1,	// (0x000513a1) main_touch_calib_pane

0x933c,	// (0x0004cd0c) main_touch_calib_pane_g1

0x9348,	// (0x0004cd18) main_touch_calib_pane_g2

0x9354,	// (0x0004cd24) main_touch_calib_pane_g3

0x9360,	// (0x0004cd30) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x00053158) main_touch_calib_pane_g

0x936c,	// (0x0004cd3c) main_touch_calib_pane_t1

0x9381,	// (0x0004cd51) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x00053161) main_touch_calib_pane_t

0xebc6,	// (0x00052596) mup_progress_pane_cp02

0xebe5,	// (0x000525b5) navi_pane_g1

0xec65,	// (0x00052635) navi_pane_mp_t3

0xf063,	// (0x00052a33) main_mp3_pane_ParamLimits

0x8a41,	// (0x0004c411) navi_pane_ParamLimits

0x2a94,	// (0x00046464) main_mp3_pane_g1_ParamLimits

0x92a5,	// (0x0004cc75) main_mp3_pane_g2_ParamLimits

0x92b1,	// (0x0004cc81) main_mp3_pane_g3_ParamLimits

0x92b1,	// (0x0004cc81) main_mp3_pane_g3

0x92bd,	// (0x0004cc8d) main_mp3_pane_g4_ParamLimits

0x92bd,	// (0x0004cc8d) main_mp3_pane_g4

0x2ac4,	// (0x00046494) main_mp3_pane_g5_ParamLimits

0x2ac4,	// (0x00046494) main_mp3_pane_g5

0x2ad2,	// (0x000464a2) main_mp3_pane_g6_ParamLimits

0x2ad2,	// (0x000464a2) main_mp3_pane_g6

0x2adf,	// (0x000464af) main_mp3_pane_g7_ParamLimits

0x2adf,	// (0x000464af) main_mp3_pane_g7

0x2aeb,	// (0x000464bb) main_mp3_pane_g8_ParamLimits

0x2aeb,	// (0x000464bb) main_mp3_pane_g8

0xf76a,	// (0x0005313a) main_mp3_pane_g_ParamLimits

0x92c9,	// (0x0004cc99) main_mp3_pane_t2

0x92d7,	// (0x0004cca7) main_mp3_pane_t3

0x2b05,	// (0x000464d5) main_mp3_pane_t4

0x2b13,	// (0x000464e3) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x0005314b) main_mp3_pane_t

0x2b21,	// (0x000464f1) mup_progress_pane_cp01

0x1054,	// (0x00044a24) aid_zoom_text_secondary2

0x2918,	// (0x000462e8) list_cale_ev2_pane

0x2920,	// (0x000462f0) scroll_pane_cp023_ParamLimits

0x93cc,	// (0x0004cd9c) field_cale_ev2_pane_ParamLimits

0x93cc,	// (0x0004cd9c) field_cale_ev2_pane

0x2b29,	// (0x000464f9) field_cale_ev2_pane_g1_ParamLimits

0x2b29,	// (0x000464f9) field_cale_ev2_pane_g1

0x2b35,	// (0x00046505) field_cale_ev2_pane_g2_ParamLimits

0x2b35,	// (0x00046505) field_cale_ev2_pane_g2

0x2b4d,	// (0x0004651d) field_cale_ev2_pane_g3_ParamLimits

0x2b4d,	// (0x0004651d) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x0005316c) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x0005316c) field_cale_ev2_pane_g

0x2b71,	// (0x00046541) field_cale_ev2_pane_t1_ParamLimits

0x2b71,	// (0x00046541) field_cale_ev2_pane_t1

0x2b88,	// (0x00046558) field_cale_ev2_pane_t2_ParamLimits

0x2b88,	// (0x00046558) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x00053175) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x00053175) field_cale_ev2_pane_t

0x837c,	// (0x0004bd4c) main_postcard_pane_g5_ParamLimits

0x837c,	// (0x0004bd4c) main_postcard_pane_g5

0x8388,	// (0x0004bd58) main_postcard_pane_g6_ParamLimits

0x8388,	// (0x0004bd58) main_postcard_pane_g6

0x6b55,	// (0x0004a525) camera2_autofocus_pane_cp_ParamLimits

0x6b55,	// (0x0004a525) camera2_autofocus_pane_cp

0xf063,	// (0x00052a33) main_mup3_pane

0x9402,	// (0x0004cdd2) main_mup3_pane_g1_ParamLimits

0x9402,	// (0x0004cdd2) main_mup3_pane_g1

0x9423,	// (0x0004cdf3) main_mup3_pane_g2_ParamLimits

0x9423,	// (0x0004cdf3) main_mup3_pane_g2

0x9486,	// (0x0004ce56) main_mup3_pane_g3_ParamLimits

0x9486,	// (0x0004ce56) main_mup3_pane_g3

0x94c1,	// (0x0004ce91) main_mup3_pane_g4_ParamLimits

0x94c1,	// (0x0004ce91) main_mup3_pane_g4

0x94fc,	// (0x0004cecc) main_mup3_pane_g5_ParamLimits

0x94fc,	// (0x0004cecc) main_mup3_pane_g5

0x9537,	// (0x0004cf07) main_mup3_pane_g6_ParamLimits

0x9537,	// (0x0004cf07) main_mup3_pane_g6

0x2b9d,	// (0x0004656d) main_mup3_pane_g7_ParamLimits

0x2b9d,	// (0x0004656d) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x00053185) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x00053185) main_mup3_pane_g

0x95a5,	// (0x0004cf75) main_mup3_pane_t1_ParamLimits

0x95a5,	// (0x0004cf75) main_mup3_pane_t1

0x9608,	// (0x0004cfd8) main_mup3_pane_t2_ParamLimits

0x9608,	// (0x0004cfd8) main_mup3_pane_t2

0x96c5,	// (0x0004d095) main_mup3_pane_t4_ParamLimits

0x96c5,	// (0x0004d095) main_mup3_pane_t4

0x970b,	// (0x0004d0db) main_mup3_pane_t5_ParamLimits

0x970b,	// (0x0004d0db) main_mup3_pane_t5

0x97af,	// (0x0004d17f) main_mup3_pane_t6_ParamLimits

0x97af,	// (0x0004d17f) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x00053196) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x00053196) main_mup3_pane_t

0x9857,	// (0x0004d227) mup3_progress_pane_ParamLimits

0x9857,	// (0x0004d227) mup3_progress_pane

0x989d,	// (0x0004d26d) popup_mup3_control_window_ParamLimits

0x989d,	// (0x0004d26d) popup_mup3_control_window

0x2bab,	// (0x0004657b) popup_mup3_text_window

0x98b6,	// (0x0004d286) mup3_progress_pane_t1

0x98cc,	// (0x0004d29c) mup3_progress_pane_t2

0x2bb3,	// (0x00046583) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x000531a3) mup3_progress_pane_t

0x2bca,	// (0x0004659a) mup_progress_pane_cp03

0xd9d1,	// (0x000513a1) bg_tb_trans_pane_cp04

0x98e2,	// (0x0004d2b2) mup3_volume_pane

0x98ea,	// (0x0004d2ba) popup_mup3_control_window_g1

0x98f3,	// (0x0004d2c3) mup3_volume_pane_g1

0x98fc,	// (0x0004d2cc) mup3_volume_pane_g2

0x9905,	// (0x0004d2d5) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x000531aa) mup3_volume_pane_g

0xd9d1,	// (0x000513a1) bg_tb_trans_pane_cp03

0x2bda,	// (0x000465aa) popup_mup3_text_window_g1

0x2be2,	// (0x000465b2) popup_mup3_text_window_t1

0xe19f,	// (0x00051b6f) list_calc_item_pane_g1_ParamLimits

0x25f0,	// (0x00045fc0) mup_volume_pane_cp_g1

0x9396,	// (0x0004cd66) main_touch_calib_pane_t3

0x93a8,	// (0x0004cd78) main_touch_calib_pane_t4

0x93ba,	// (0x0004cd8a) main_touch_calib_pane_t5

0xd9db,	// (0x000513ab) aid_cell_size_toolbar2

0xd9e3,	// (0x000513b3) aid_popup3_width_pane

0x104c,	// (0x00044a1c) aid_zoom_text_msg_primary

0x6b3f,	// (0x0004a50f) vorec_t7

0xe163,	// (0x00051b33) bg_calc_paper_pane_g1_ParamLimits

0xe16f,	// (0x00051b3f) bg_calc_paper_pane_g2_ParamLimits

0xe17b,	// (0x00051b4b) bg_calc_paper_pane_g3_ParamLimits

0xe187,	// (0x00051b57) bg_calc_paper_pane_g4_ParamLimits

0xe193,	// (0x00051b63) bg_calc_paper_pane_g5_ParamLimits

0x6502,	// (0x00049ed2) bg_calc_paper_pane_g6_ParamLimits

0x6511,	// (0x00049ee1) bg_calc_paper_pane_g7_ParamLimits

0x6520,	// (0x00049ef0) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00052b4a) bg_calc_paper_pane_g_ParamLimits

0x652f,	// (0x00049eff) calc_bg_paper_pane_g9_ParamLimits

0x6c35,	// (0x0004a605) image_qvga_pane_ParamLimits

0x6c35,	// (0x0004a605) image_qvga_pane

0xe088,	// (0x00051a58) bg_popup_sub_pane_cp04_ParamLimits

0xeed3,	// (0x000528a3) popup_mup_playback_window_g1_ParamLimits

0xeedf,	// (0x000528af) popup_mup_playback_window_t1_ParamLimits

0xeef4,	// (0x000528c4) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00052ed6) popup_mup_playback_window_t_ParamLimits

0x8ec6,	// (0x0004c896) main_mup2_pane_g3_ParamLimits

0x8ec6,	// (0x0004c896) main_mup2_pane_g3

0x6f15,	// (0x0004a8e5) popup_toolbar_window_cp04

0x1630,	// (0x00045000) popup_call2_audio_second_window_g3_ParamLimits

0x1630,	// (0x00045000) popup_call2_audio_second_window_g3

0x1a3a,	// (0x0004540a) popup_call2_audio_first_window_g4_ParamLimits

0x1a3a,	// (0x0004540a) popup_call2_audio_first_window_g4

0x20b9,	// (0x00045a89) popup_call2_audio_in_window_g4_ParamLimits

0x20b9,	// (0x00045a89) popup_call2_audio_in_window_g4

0x8473,	// (0x0004be43) aid_area_sk_bg_cut_ParamLimits

0x8473,	// (0x0004be43) aid_area_sk_bg_cut

0xef09,	// (0x000528d9) aid_area_sk_bg_cut_2_ParamLimits

0xef09,	// (0x000528d9) aid_area_sk_bg_cut_2

0x9206,	// (0x0004cbd6) aid_placing_details_win

0x920e,	// (0x0004cbde) aid_placing_details_win_2

0x29d6,	// (0x000463a6) camera2_autofocus_pane_g1_ParamLimits

0x6131,	// (0x00049b01) popup_fixed_preview_cale_window_ParamLimits

0x6131,	// (0x00049b01) popup_fixed_preview_cale_window

0xece5,	// (0x000526b5) navi_slider_pane_g3

0xecee,	// (0x000526be) navi_slider_pane_g4

0xecf7,	// (0x000526c7) navi_slider_pane_g5

0xece5,	// (0x000526b5) navi_slider_pane_g6

0x7df9,	// (0x0004b7c9) navi_slider_pane_g7

0xee0a,	// (0x000527da) mup_scale_pane_g3

0xee13,	// (0x000527e3) mup_scale_pane_g4

0xee1c,	// (0x000527ec) mup_scale_pane_g5

0x81bc,	// (0x0004bb8c) mup_scale_pane_g6

0x81c5,	// (0x0004bb95) mup_scale_pane_g7

0xece5,	// (0x000526b5) cams2_slider_pane_g3

0x2672,	// (0x00046042) cams2_slider_pane_g4

0x9173,	// (0x0004cb43) cams2_slider_pane_g5

0xece5,	// (0x000526b5) cams2_slider_pane_g6

0x917b,	// (0x0004cb4b) cams2_slider_pane_g7

0x2895,	// (0x00046265) camera2_autofocus_pane_cp_g1

0x2bf0,	// (0x000465c0) bg_popup_preview_window_pane_cp02_ParamLimits

0x2bf0,	// (0x000465c0) bg_popup_preview_window_pane_cp02

0x990e,	// (0x0004d2de) list_fp_cale_pane_ParamLimits

0x990e,	// (0x0004d2de) list_fp_cale_pane

0x2bfc,	// (0x000465cc) popup_fixed_preview_cale_window_t1_ParamLimits

0x2bfc,	// (0x000465cc) popup_fixed_preview_cale_window_t1

0x991e,	// (0x0004d2ee) popup_fixed_preview_cale_window_t2_ParamLimits

0x991e,	// (0x0004d2ee) popup_fixed_preview_cale_window_t2

0x9933,	// (0x0004d303) popup_fixed_preview_cale_window_t3_ParamLimits

0x9933,	// (0x0004d303) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x000531b1) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x000531b1) popup_fixed_preview_cale_window_t

0x9945,	// (0x0004d315) list_single_fp_cale_pane_ParamLimits

0x9945,	// (0x0004d315) list_single_fp_cale_pane

0x9952,	// (0x0004d322) list_single_fp_cale_pane_g1_ParamLimits

0x9952,	// (0x0004d322) list_single_fp_cale_pane_g1

0x2c1a,	// (0x000465ea) list_single_fp_cale_pane_g2_ParamLimits

0x2c1a,	// (0x000465ea) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x000531b8) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x000531b8) list_single_fp_cale_pane_g

0x995e,	// (0x0004d32e) list_single_fp_cale_pane_t1_ParamLimits

0x995e,	// (0x0004d32e) list_single_fp_cale_pane_t1

0x9970,	// (0x0004d340) list_single_fp_cale_pane_t2_ParamLimits

0x9970,	// (0x0004d340) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x000531bf) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x000531bf) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd9d1,	// (0x000513a1) main_dialer_pane

0x99a3,	// (0x0004d373) aid_cell_size_keypad

0x99ad,	// (0x0004d37d) dialer_ne_pane

0x99b5,	// (0x0004d385) grid_dialer_command_1_pane

0x99bd,	// (0x0004d38d) grid_dialer_command_2_pane

0x99c5,	// (0x0004d395) grid_dialer_keypad_pane

0x99d5,	// (0x0004d3a5) bg_popup_call_pane_cp06_ParamLimits

0x99d5,	// (0x0004d3a5) bg_popup_call_pane_cp06

0x99e1,	// (0x0004d3b1) dialer_ne_clear_pane_ParamLimits

0x99e1,	// (0x0004d3b1) dialer_ne_clear_pane

0x2c33,	// (0x00046603) dialer_ne_pane_g1

0x2c3b,	// (0x0004660b) dialer_ne_pane_t1_ParamLimits

0x2c3b,	// (0x0004660b) dialer_ne_pane_t1

0x99ed,	// (0x0004d3bd) dialer_ne_pane_t2_ParamLimits

0x99ed,	// (0x0004d3bd) dialer_ne_pane_t2

0x9a0a,	// (0x0004d3da) dialer_ne_pane_t3_ParamLimits

0x9a0a,	// (0x0004d3da) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x000531c4) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x000531c4) dialer_ne_pane_t

0x9a2e,	// (0x0004d3fe) dialer_ne_pane_t3_copy1_ParamLimits

0x9a2e,	// (0x0004d3fe) dialer_ne_pane_t3_copy1

0x9a52,	// (0x0004d422) cell_dialer_keypad_pane_ParamLimits

0x9a52,	// (0x0004d422) cell_dialer_keypad_pane

0x9a67,	// (0x0004d437) cell_dialer_command_1_pane_ParamLimits

0x9a67,	// (0x0004d437) cell_dialer_command_1_pane

0x9a7d,	// (0x0004d44d) cell_dialer_command_2_pane_ParamLimits

0x9a7d,	// (0x0004d44d) cell_dialer_command_2_pane

0x2c4d,	// (0x0004661d) bg_button_pane_cp02_ParamLimits

0x2c4d,	// (0x0004661d) bg_button_pane_cp02

0x9a8c,	// (0x0004d45c) cell_dialer_keypad_pane_g1_ParamLimits

0x9a8c,	// (0x0004d45c) cell_dialer_keypad_pane_g1

0x2c4d,	// (0x0004661d) bg_button_pane_cp03_ParamLimits

0x2c4d,	// (0x0004661d) bg_button_pane_cp03

0x9aa1,	// (0x0004d471) cell_dialer_command_1_pane_g1_ParamLimits

0x9aa1,	// (0x0004d471) cell_dialer_command_1_pane_g1

0x2c59,	// (0x00046629) bg_button_pane_cp04

0x9ab4,	// (0x0004d484) cell_dialer_command_2_pane_g1

0xecd4,	// (0x000526a4) bg_button_pane_cp06

0x2c61,	// (0x00046631) dialer_ne_clear_pane_g1

0xebf1,	// (0x000525c1) navi_pane_g2

0x7da1,	// (0x0004b771) navi_pane_g3

0x0002,

0xf409,	// (0x00052dd9) navi_pane_g

0xec73,	// (0x00052643) navi_pane_mv_g2

0xec9b,	// (0x0005266b) navi_pane_mv_g5

0x7dc6,	// (0x0004b796) navi_pane_mv_t1

0xe157,	// (0x00051b27) main_clock2_pane

0x9ae5,	// (0x0004d4b5) main_clock2_list_pane_ParamLimits

0x9ae5,	// (0x0004d4b5) main_clock2_list_pane

0x9b0b,	// (0x0004d4db) main_clock2_pane_t1_ParamLimits

0x9b0b,	// (0x0004d4db) main_clock2_pane_t1

0x9b35,	// (0x0004d505) main_clock2_pane_t2_ParamLimits

0x9b35,	// (0x0004d505) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x000531cb) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x000531cb) main_clock2_pane_t

0x9b98,	// (0x0004d568) popup_clock_analogue_window_cp03_ParamLimits

0x9b98,	// (0x0004d568) popup_clock_analogue_window_cp03

0x9bb4,	// (0x0004d584) popup_clock_digital_window_cp02_ParamLimits

0x9bb4,	// (0x0004d584) popup_clock_digital_window_cp02

0x9c02,	// (0x0004d5d2) main_clock2_list_single_pane_ParamLimits

0x9c02,	// (0x0004d5d2) main_clock2_list_single_pane

0xecd4,	// (0x000526a4) list_highlight_pane_cp05

0x2c69,	// (0x00046639) main_clock2_list_single_pane_t1

0x6f15,	// (0x0004a8e5) popup_toolbar_window_cp04_ParamLimits

0x9264,	// (0x0004cc34) camera2_autofocus_pane_g2_ParamLimits

0x9264,	// (0x0004cc34) camera2_autofocus_pane_g2

0x9270,	// (0x0004cc40) camera2_autofocus_pane_g3_ParamLimits

0x9270,	// (0x0004cc40) camera2_autofocus_pane_g3

0x927c,	// (0x0004cc4c) camera2_autofocus_pane_g4_ParamLimits

0x927c,	// (0x0004cc4c) camera2_autofocus_pane_g4

0x9288,	// (0x0004cc58) camera2_autofocus_pane_g5_ParamLimits

0x9288,	// (0x0004cc58) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x00053114) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x00053114) camera2_autofocus_pane_g

0x93e2,	// (0x0004cdb2) camera2_autofocus_pane_cp_g2

0x93ea,	// (0x0004cdba) camera2_autofocus_pane_cp_g3

0x93f2,	// (0x0004cdc2) camera2_autofocus_pane_cp_g4

0x93fa,	// (0x0004cdca) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x0005317a) camera2_autofocus_pane_cp_g

0x99cd,	// (0x0004d39d) popup_dialer_spcha_window

0xd9d1,	// (0x000513a1) bg_popup_sub_pane_cp07

0x2c77,	// (0x00046647) list_spcha_pane

0x2c7f,	// (0x0004664f) list_single_spcha_pane_ParamLimits

0x2c7f,	// (0x0004664f) list_single_spcha_pane

0xd9d1,	// (0x000513a1) list_highlight_pane_cp06

0x2c90,	// (0x00046660) list_single_spcha_pane_t1

0x1e63,	// (0x00045833) popup_call2_audio_out_window_g4_ParamLimits

0x1e63,	// (0x00045833) popup_call2_audio_out_window_g4

0xd9d1,	// (0x000513a1) main_imed2_pane

0x2480,	// (0x00045e50) popup_imed_adjust2_window

0x89b2,	// (0x0004c382) popup_imed_trans_window_ParamLimits

0x89b2,	// (0x0004c382) popup_imed_trans_window

0x26d9,	// (0x000460a9) popup_blid_sat_info2_window_t1

0x26e7,	// (0x000460b7) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x000530a9) popup_blid_sat_info2_window_t

0x9caa,	// (0x0004d67a) aid_size_cell_colour_35

0x9cc1,	// (0x0004d691) aid_size_cell_colour_112

0x9cd8,	// (0x0004d6a8) aid_size_cell_effect

0xf063,	// (0x00052a33) bg_tb_trans_pane_cp02

0xf071,	// (0x00052a41) heading_imed_pane

0x9cf2,	// (0x0004d6c2) listscroll_imed_pane

0x2c9e,	// (0x0004666e) heading_imed_pane_g1

0x2ca6,	// (0x00046676) heading_imed_pane_t1

0x2cb4,	// (0x00046684) grid_imed_colour_35_pane_ParamLimits

0x2cb4,	// (0x00046684) grid_imed_colour_35_pane

0x9cfe,	// (0x0004d6ce) grid_imed_effect_pane

0x2cc7,	// (0x00046697) list_imed_aspect_pane

0x9d0a,	// (0x0004d6da) scroll_pane_cp027_ParamLimits

0x9d0a,	// (0x0004d6da) scroll_pane_cp027

0x9d16,	// (0x0004d6e6) cell_imed_effect_pane_ParamLimits

0x9d16,	// (0x0004d6e6) cell_imed_effect_pane

0x2ccf,	// (0x0004669f) cell_imed_colour_pane_ParamLimits

0x2ccf,	// (0x0004669f) cell_imed_colour_pane

0x2d09,	// (0x000466d9) cell_imed_colour_pane_g1_ParamLimits

0x2d09,	// (0x000466d9) cell_imed_colour_pane_g1

0x2d1a,	// (0x000466ea) hgihlgiht_grid_pane_cp016_ParamLimits

0x2d1a,	// (0x000466ea) hgihlgiht_grid_pane_cp016

0x9d2c,	// (0x0004d6fc) cell_imed_effect_pane_g1

0x9d34,	// (0x0004d704) grid_highlight_pane_cp017

0x2d2b,	// (0x000466fb) list_imed_single_pane_ParamLimits

0x2d2b,	// (0x000466fb) list_imed_single_pane

0xd9d1,	// (0x000513a1) list_highlight_pane_cp07

0x2d3e,	// (0x0004670e) list_imed_aspect_pane_comp1_t1

0x245a,	// (0x00045e2a) bg_tb_trans_pane_cp05

0x2d5e,	// (0x0004672e) popup_imed_adjust2_window_g1

0x2d85,	// (0x00046755) popup_imed_adjust2_window_t1

0x2d9d,	// (0x0004676d) slider_imed_adjust_pane

0x2db1,	// (0x00046781) slider_imed_adjust_pane_g1

0x2dc1,	// (0x00046791) slider_imed_adjust_pane_g2

0x2dd1,	// (0x000467a1) slider_imed_adjust_pane_g3

0x2de2,	// (0x000467b2) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x000531e8) slider_imed_adjust_pane_g

0x9d3d,	// (0x0004d70d) aid_size_cell_clipart2

0x9d49,	// (0x0004d719) grid_imed_clipart_pane

0x2df3,	// (0x000467c3) scroll_pane_cp031

0x9d53,	// (0x0004d723) cell_imed_clipart_pane_ParamLimits

0x9d53,	// (0x0004d723) cell_imed_clipart_pane

0x9d6a,	// (0x0004d73a) cell_imed_clipart_pane_g1

0xd9d1,	// (0x000513a1) grid_highlight_pane_cp014

0x9af1,	// (0x0004d4c1) main_clock2_pane_g1_ParamLimits

0x9af1,	// (0x0004d4c1) main_clock2_pane_g1

0x9bcc,	// (0x0004d59c) aid_call2_pane_cp10

0x9bd8,	// (0x0004d5a8) aid_call_pane_cp10

0xeba1,	// (0x00052571) popup_clock_analogue_window_cp10_g1

0xeba1,	// (0x00052571) popup_clock_analogue_window_cp10_g2

0x9be4,	// (0x0004d5b4) popup_clock_analogue_window_cp10_g3

0x9be4,	// (0x0004d5b4) popup_clock_analogue_window_cp10_g4

0xeba1,	// (0x00052571) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x000531d6) popup_clock_analogue_window_cp10_g

0x9bf0,	// (0x0004d5c0) popup_clock_analogue_window_cp10_t1

0x9c14,	// (0x0004d5e4) clock_digital_number_pane_cp10_ParamLimits

0x9c14,	// (0x0004d5e4) clock_digital_number_pane_cp10

0x9c2c,	// (0x0004d5fc) clock_digital_number_pane_cp11_ParamLimits

0x9c2c,	// (0x0004d5fc) clock_digital_number_pane_cp11

0x9c44,	// (0x0004d614) clock_digital_number_pane_cp12_ParamLimits

0x9c44,	// (0x0004d614) clock_digital_number_pane_cp12

0x9c5c,	// (0x0004d62c) clock_digital_number_pane_cp13_ParamLimits

0x9c5c,	// (0x0004d62c) clock_digital_number_pane_cp13

0x9c74,	// (0x0004d644) clock_digital_separator_pane_cp10_ParamLimits

0x9c74,	// (0x0004d644) clock_digital_separator_pane_cp10

0x9c8c,	// (0x0004d65c) popup_clock_digital_window_cp02_t1_ParamLimits

0x9c8c,	// (0x0004d65c) popup_clock_digital_window_cp02_t1

0xe080,	// (0x00051a50) clock_digital_number_pane_cp10_g1

0xe080,	// (0x00051a50) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x000531f1) clock_digital_number_pane_cp10_g

0xe080,	// (0x00051a50) clock_digital_separator_pane_cp10_g1

0xe080,	// (0x00051a50) clock_digital_separator_pane_g2_cp10

0xeca4,	// (0x00052674) navi_pane_vded_g4

0xecad,	// (0x0005267d) navi_pane_vded_g5

0xecb6,	// (0x00052686) navi_pane_vded_t1

0xd9d1,	// (0x000513a1) main_vded_pane

0x9d73,	// (0x0004d743) main_vded_pane_g1

0x9d7b,	// (0x0004d74b) main_vded_pane_g2

0x9d83,	// (0x0004d753) main_vded_pane_g3

0x0002,

0xf826,	// (0x000531f6) main_vded_pane_g

0x9d8b,	// (0x0004d75b) main_vded_pane_t1

0x9d99,	// (0x0004d769) main_vded_pane_t2

0x0001,

0xf82d,	// (0x000531fd) main_vded_pane_t

0x9da7,	// (0x0004d777) vded_slider_pane

0x9daf,	// (0x0004d77f) vded_video_pane

0x2dfb,	// (0x000467cb) vded_video_pane_g1

0x9db7,	// (0x0004d787) vded_video_pane_g2

0x2895,	// (0x00046265) vded_video_pane_g3

0x0002,

0xf832,	// (0x00053202) vded_video_pane_g

0x2e05,	// (0x000467d5) vded_slider_pane_g1

0x25f0,	// (0x00045fc0) vded_slider_pane_g2

0x2e0e,	// (0x000467de) vded_slider_pane_g3

0x2e17,	// (0x000467e7) vded_slider_pane_g4

0x2e20,	// (0x000467f0) vded_slider_pane_g5

0x0004,

0xf839,	// (0x00053209) vded_slider_pane_g

0x9891,	// (0x0004d261) mup3_rocker_pane_ParamLimits

0x9891,	// (0x0004d261) mup3_rocker_pane

0x9dc0,	// (0x0004d790) mup3_control_keys_pane_g1

0x9dc8,	// (0x0004d798) mup3_control_keys_pane_g2

0x9dd0,	// (0x0004d7a0) mup3_control_keys_pane_g3

0x9dd8,	// (0x0004d7a8) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x00053214) mup3_control_keys_pane_g

0x614d,	// (0x00049b1d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x614d,	// (0x00049b1d) popup_toolbar2_fixed_window_cp01

0x98a9,	// (0x0004d279) popup_toolbar2_fixed_window_cp02_ParamLimits

0x98a9,	// (0x0004d279) popup_toolbar2_fixed_window_cp02

0x17a2,	// (0x00045172) popup_call2_audio_second_window_t4_ParamLimits

0x17a2,	// (0x00045172) popup_call2_audio_second_window_t4

0x1cd0,	// (0x000456a0) popup_call2_audio_first_window_t6_ParamLimits

0x1cd0,	// (0x000456a0) popup_call2_audio_first_window_t6

0x1f66,	// (0x00045936) popup_call2_audio_out_window_t6_ParamLimits

0x1f66,	// (0x00045936) popup_call2_audio_out_window_t6

0xd9d1,	// (0x000513a1) main_vitu_pane

0x9de8,	// (0x0004d7b8) aid_size_cell_itu_ParamLimits

0x9de8,	// (0x0004d7b8) aid_size_cell_itu

0x3210,	// (0x00046be0) bg_popup_window_pane_cp08_ParamLimits

0x3210,	// (0x00046be0) bg_popup_window_pane_cp08

0x9df6,	// (0x0004d7c6) field_vitu_entry_pane_ParamLimits

0x9df6,	// (0x0004d7c6) field_vitu_entry_pane

0x9e03,	// (0x0004d7d3) grid_vitu_function_pane_ParamLimits

0x9e03,	// (0x0004d7d3) grid_vitu_function_pane

0x9e0f,	// (0x0004d7df) grid_vitu_itu_pane_ParamLimits

0x9e0f,	// (0x0004d7df) grid_vitu_itu_pane

0x9e1b,	// (0x0004d7eb) cell_vitu_itu_pane_ParamLimits

0x9e1b,	// (0x0004d7eb) cell_vitu_itu_pane

0x9e30,	// (0x0004d800) cell_vitu_function_pane_ParamLimits

0x9e30,	// (0x0004d800) cell_vitu_function_pane

0xf063,	// (0x00052a33) bg_popup_sub_pane_cp08_ParamLimits

0xf063,	// (0x00052a33) bg_popup_sub_pane_cp08

0x9e42,	// (0x0004d812) field_vitu_entry_pane_t1_ParamLimits

0x9e42,	// (0x0004d812) field_vitu_entry_pane_t1

0x2e41,	// (0x00046811) field_vitu_entry_pane_t2_ParamLimits

0x2e41,	// (0x00046811) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x00053222) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x00053222) field_vitu_entry_pane_t

0x2e5e,	// (0x0004682e) bg_button_pane_cp05_ParamLimits

0x2e5e,	// (0x0004682e) bg_button_pane_cp05

0x9e5b,	// (0x0004d82b) cell_vitu_itu_pane_g1

0x9e73,	// (0x0004d843) cell_vitu_itu_pane_t1_ParamLimits

0x9e73,	// (0x0004d843) cell_vitu_itu_pane_t1

0x9e85,	// (0x0004d855) cell_vitu_itu_pane_t2_ParamLimits

0x9e85,	// (0x0004d855) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x00053227) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x00053227) cell_vitu_itu_pane_t

0x2e6c,	// (0x0004683c) bg_button_pane_cp07

0x9eba,	// (0x0004d88a) cell_vitu_function_pane_g1

0x63b2,	// (0x00049d82) main_calc_pane_g1

0x5f94,	// (0x00049964) aid_visual_content_pane

0xd9d1,	// (0x000513a1) main_vradio_pane

0x9ec3,	// (0x0004d893) main_vradio_pane_g1_ParamLimits

0x9ec3,	// (0x0004d893) main_vradio_pane_g1

0x2e76,	// (0x00046846) main_vradio_pane_g2_ParamLimits

0x2e76,	// (0x00046846) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x0005322e) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x0005322e) main_vradio_pane_g

0x9ed1,	// (0x0004d8a1) main_vradio_pane_t1_ParamLimits

0x9ed1,	// (0x0004d8a1) main_vradio_pane_t1

0x9ee3,	// (0x0004d8b3) main_vradio_pane_t2_ParamLimits

0x9ee3,	// (0x0004d8b3) main_vradio_pane_t2

0x2e83,	// (0x00046853) main_vradio_pane_t3_ParamLimits

0x2e83,	// (0x00046853) main_vradio_pane_t3

0x0002,

0xf863,	// (0x00053233) main_vradio_pane_t_ParamLimits

0xf863,	// (0x00053233) main_vradio_pane_t

0x9ef5,	// (0x0004d8c5) vradio_rocker_control_pane_ParamLimits

0x9ef5,	// (0x0004d8c5) vradio_rocker_control_pane

0x9f01,	// (0x0004d8d1) vradio_station_info_pane_ParamLimits

0x9f01,	// (0x0004d8d1) vradio_station_info_pane

0x2e95,	// (0x00046865) vradio_frequency_info_pane_ParamLimits

0x2e95,	// (0x00046865) vradio_frequency_info_pane

0x2895,	// (0x00046265) vradio_station_info_pane_g1

0x2ea4,	// (0x00046874) vradio_station_info_pane_t1_ParamLimits

0x2ea4,	// (0x00046874) vradio_station_info_pane_t1

0x2ec6,	// (0x00046896) vradio_station_info_pane_t2_ParamLimits

0x2ec6,	// (0x00046896) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x0005323a) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x0005323a) vradio_station_info_pane_t

0x2ed8,	// (0x000468a8) vradio_tuning_pane

0x2ee0,	// (0x000468b0) vradio_rocker_control_pane_g1

0x2ee8,	// (0x000468b8) vradio_rocker_control_pane_g2

0x2ef0,	// (0x000468c0) vradio_rocker_control_pane_g3

0x2ef8,	// (0x000468c8) vradio_rocker_control_pane_g4

0x2f00,	// (0x000468d0) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x0005323f) vradio_rocker_control_pane_g

0x9f0e,	// (0x0004d8de) vradio_frequency_info_pane_g1

0x2f08,	// (0x000468d8) vradio_frequency_info_pane_t1_ParamLimits

0x2f08,	// (0x000468d8) vradio_frequency_info_pane_t1

0x9f16,	// (0x0004d8e6) vradio_tuning_pane_g1

0x9f1f,	// (0x0004d8ef) vradio_tuning_pane_t1

0xd9f3,	// (0x000513c3) area_side_right_pane_ParamLimits

0xd9f3,	// (0x000513c3) area_side_right_pane

0x2421,	// (0x00045df1) status_small_pane_g1

0x2429,	// (0x00045df9) status_small_pane_g2

0x2432,	// (0x00045e02) status_small_pane_g3

0x243b,	// (0x00045e0b) status_small_pane_g4

0x0003,

0xf62f,	// (0x00052fff) status_small_pane_g

0x2444,	// (0x00045e14) status_small_pane_t1

0xd9d1,	// (0x000513a1) main_video3_pane

0x2f1c,	// (0x000468ec) cams_zoom_vslider_pane

0x2f24,	// (0x000468f4) image3_wide_pane_ParamLimits

0x2f24,	// (0x000468f4) image3_wide_pane

0x2f3e,	// (0x0004690e) image3_wide_small_pane

0x2f48,	// (0x00046918) main_video3_pane_g1_ParamLimits

0x2f48,	// (0x00046918) main_video3_pane_g1

0x2f64,	// (0x00046934) main_video3_pane_g2_ParamLimits

0x2f64,	// (0x00046934) main_video3_pane_g2

0x0001,

0xf87a,	// (0x0005324a) main_video3_pane_g_ParamLimits

0xf87a,	// (0x0005324a) main_video3_pane_g

0x2f80,	// (0x00046950) main_video3_pane_t1_ParamLimits

0x2f80,	// (0x00046950) main_video3_pane_t1

0x2fab,	// (0x0004697b) main_video3_pane_t2_ParamLimits

0x2fab,	// (0x0004697b) main_video3_pane_t2

0x2fd6,	// (0x000469a6) main_video3_pane_t3_ParamLimits

0x2fd6,	// (0x000469a6) main_video3_pane_t3

0x0002,

0xf87f,	// (0x0005324f) main_video3_pane_t_ParamLimits

0xf87f,	// (0x0005324f) main_video3_pane_t

0x3001,	// (0x000469d1) cams_zoom_vslider_pane_g1

0x300a,	// (0x000469da) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x00053256) cams_zoom_vslider_pane_g

0x3012,	// (0x000469e2) small_slider_vertical_pane

0x2895,	// (0x00046265) small_slider_vertical_pane_g1

0x2895,	// (0x00046265) small_slider_vertical_pane_g2

0x301a,	// (0x000469ea) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x0005325b) small_slider_vertical_pane_g

0xd9d1,	// (0x000513a1) main_hwr_training_pane

0x3023,	// (0x000469f3) hwr_training_instruct_pane_ParamLimits

0x3023,	// (0x000469f3) hwr_training_instruct_pane

0x9f2e,	// (0x0004d8fe) hwr_training_navi_pane_ParamLimits

0x9f2e,	// (0x0004d8fe) hwr_training_navi_pane

0x9f42,	// (0x0004d912) hwr_training_write_pane_ParamLimits

0x9f42,	// (0x0004d912) hwr_training_write_pane

0xd9d1,	// (0x000513a1) bg_frame_shadow_pane

0x3052,	// (0x00046a22) hwr_training_write_pane_g1

0x305a,	// (0x00046a2a) hwr_training_write_pane_g2

0x3062,	// (0x00046a32) hwr_training_write_pane_g3

0x306a,	// (0x00046a3a) hwr_training_write_pane_g4

0x3072,	// (0x00046a42) hwr_training_write_pane_g5

0x307a,	// (0x00046a4a) hwr_training_write_pane_g6

0x3082,	// (0x00046a52) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x00053262) hwr_training_write_pane_g

0x9f70,	// (0x0004d940) hwr_training_navi_pane_g1_ParamLimits

0x9f70,	// (0x0004d940) hwr_training_navi_pane_g1

0x9f82,	// (0x0004d952) hwr_training_navi_pane_g2_ParamLimits

0x9f82,	// (0x0004d952) hwr_training_navi_pane_g2

0x9f94,	// (0x0004d964) hwr_training_navi_pane_g3_ParamLimits

0x9f94,	// (0x0004d964) hwr_training_navi_pane_g3

0x9fa4,	// (0x0004d974) hwr_training_navi_pane_g4_ParamLimits

0x9fa4,	// (0x0004d974) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x00053271) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x00053271) hwr_training_navi_pane_g

0x9fbe,	// (0x0004d98e) hwr_training_navi_pane_t1

0x9fcc,	// (0x0004d99c) list_single_hwr_training_instruct_pane_ParamLimits

0x9fcc,	// (0x0004d99c) list_single_hwr_training_instruct_pane

0x308a,	// (0x00046a5a) list_single_hwr_training_instruct_pane_t1

0x27d5,	// (0x000461a5) bg_frame_shadow_pane_g1

0x3099,	// (0x00046a69) bg_frame_shadow_pane_g2

0x30a1,	// (0x00046a71) bg_frame_shadow_pane_g3

0x30a9,	// (0x00046a79) bg_frame_shadow_pane_g4

0x30b1,	// (0x00046a81) bg_frame_shadow_pane_g5

0x30b9,	// (0x00046a89) bg_frame_shadow_pane_g6

0x30c1,	// (0x00046a91) bg_frame_shadow_pane_g7

0xe222,	// (0x00051bf2) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x0005327c) bg_frame_shadow_pane_g

0xd9d1,	// (0x000513a1) main_video_tele_dialer_pane

0x9fe4,	// (0x0004d9b4) aid_size_cell_video_keypad_ParamLimits

0x9fe4,	// (0x0004d9b4) aid_size_cell_video_keypad

0x9ff4,	// (0x0004d9c4) grid_video_dialer_keypad_pane_ParamLimits

0x9ff4,	// (0x0004d9c4) grid_video_dialer_keypad_pane

0xa024,	// (0x0004d9f4) video_down_pane_cp_ParamLimits

0xa024,	// (0x0004d9f4) video_down_pane_cp

0xa04c,	// (0x0004da1c) cell_video_dialer_keypad_pane_ParamLimits

0xa04c,	// (0x0004da1c) cell_video_dialer_keypad_pane

0x30c9,	// (0x00046a99) bg_button_pane_cp08_ParamLimits

0x30c9,	// (0x00046a99) bg_button_pane_cp08

0xa061,	// (0x0004da31) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa061,	// (0x0004da31) cell_video_dialer_keypad_pane_g1

0x9885,	// (0x0004d255) mup3_rocker2_pane_ParamLimits

0x9885,	// (0x0004d255) mup3_rocker2_pane

0x2895,	// (0x00046265) mup3_rocker2_pane_g1

0x894c,	// (0x0004c31c) main_dialer2_pane

0xd9d1,	// (0x000513a1) main_mp4_pane

0xa0a0,	// (0x0004da70) main_mp4_pane_g1_ParamLimits

0xa0a0,	// (0x0004da70) main_mp4_pane_g1

0xa0ae,	// (0x0004da7e) main_mp4_pane_g2_ParamLimits

0xa0ae,	// (0x0004da7e) main_mp4_pane_g2

0xa0bc,	// (0x0004da8c) main_mp4_pane_g3_ParamLimits

0xa0bc,	// (0x0004da8c) main_mp4_pane_g3

0xa0f1,	// (0x0004dac1) main_mp4_pane_g4_ParamLimits

0xa0f1,	// (0x0004dac1) main_mp4_pane_g4

0xa11f,	// (0x0004daef) main_mp4_pane_g5_ParamLimits

0xa11f,	// (0x0004daef) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x0005329c) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x0005329c) main_mp4_pane_g

0xa17b,	// (0x0004db4b) main_mp4_pane_t1_ParamLimits

0xa17b,	// (0x0004db4b) main_mp4_pane_t1

0xa1d3,	// (0x0004dba3) main_mp4_pane_t2_ParamLimits

0xa1d3,	// (0x0004dba3) main_mp4_pane_t2

0x30d5,	// (0x00046aa5) main_mp4_pane_t3_ParamLimits

0x30d5,	// (0x00046aa5) main_mp4_pane_t3

0xa225,	// (0x0004dbf5) main_mp4_pane_t4_ParamLimits

0xa225,	// (0x0004dbf5) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x000532a9) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x000532a9) main_mp4_pane_t

0xa265,	// (0x0004dc35) mp4_progress_pane_ParamLimits

0xa265,	// (0x0004dc35) mp4_progress_pane

0xa2a9,	// (0x0004dc79) mp4_rocker_pane_ParamLimits

0xa2a9,	// (0x0004dc79) mp4_rocker_pane

0x3103,	// (0x00046ad3) mp4_progress_pane_t1

0x311a,	// (0x00046aea) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x000532b2) mp4_progress_pane_t

0x3131,	// (0x00046b01) mup_progress_pane_cp04

0x3979,	// (0x00047349) mp4_rocker_pane_g1

0xa2c7,	// (0x0004dc97) aid_cell_size_keypad2_ParamLimits

0xa2c7,	// (0x0004dc97) aid_cell_size_keypad2

0xa2d7,	// (0x0004dca7) dialer2_ne_pane_ParamLimits

0xa2d7,	// (0x0004dca7) dialer2_ne_pane

0xa2e3,	// (0x0004dcb3) grid_dialer2_keypad_pane_ParamLimits

0xa2e3,	// (0x0004dcb3) grid_dialer2_keypad_pane

0x39d4,	// (0x000473a4) bg_popup_call_pane_cp07_ParamLimits

0x39d4,	// (0x000473a4) bg_popup_call_pane_cp07

0xa2ef,	// (0x0004dcbf) dialer2_ne_pane_t1_ParamLimits

0xa2ef,	// (0x0004dcbf) dialer2_ne_pane_t1

0xa314,	// (0x0004dce4) cell_dialer2_keypad_pane_ParamLimits

0xa314,	// (0x0004dce4) cell_dialer2_keypad_pane

0x314f,	// (0x00046b1f) bg_button_pane_pane_cp04_ParamLimits

0x314f,	// (0x00046b1f) bg_button_pane_pane_cp04

0xa329,	// (0x0004dcf9) cell_dialer2_keypad_pane_g1_ParamLimits

0xa329,	// (0x0004dcf9) cell_dialer2_keypad_pane_g1

0x6df1,	// (0x0004a7c1) aid_placing_vt_set_content_ParamLimits

0x6df1,	// (0x0004a7c1) aid_placing_vt_set_content

0x6e17,	// (0x0004a7e7) aid_placing_vt_set_title_ParamLimits

0x6e17,	// (0x0004a7e7) aid_placing_vt_set_title

0xd9d1,	// (0x000513a1) main_image3_pane

0xa39d,	// (0x0004dd6d) area_side_right_pane_cp01_ParamLimits

0xa39d,	// (0x0004dd6d) area_side_right_pane_cp01

0xa3ca,	// (0x0004dd9a) main_image3_pane_g1_ParamLimits

0xa3ca,	// (0x0004dd9a) main_image3_pane_g1

0xa3d8,	// (0x0004dda8) main_image3_pane_g2_ParamLimits

0xa3d8,	// (0x0004dda8) main_image3_pane_g2

0xa3ef,	// (0x0004ddbf) main_image3_pane_g3_ParamLimits

0xa3ef,	// (0x0004ddbf) main_image3_pane_g3

0xa406,	// (0x0004ddd6) main_image3_pane_g4_ParamLimits

0xa406,	// (0x0004ddd6) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x000532c1) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x000532c1) main_image3_pane_g

0xa41d,	// (0x0004dded) main_image3_pane_t1_ParamLimits

0xa41d,	// (0x0004dded) main_image3_pane_t1

0xa442,	// (0x0004de12) main_image3_pane_t2_ParamLimits

0xa442,	// (0x0004de12) main_image3_pane_t2

0xa461,	// (0x0004de31) main_image3_pane_t3_ParamLimits

0xa461,	// (0x0004de31) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x000532ca) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x000532ca) main_image3_pane_t

0x3210,	// (0x00046be0) grid_sctrl_middle_pane_cp01_ParamLimits

0x3210,	// (0x00046be0) grid_sctrl_middle_pane_cp01

0xa4bc,	// (0x0004de8c) cell_sctrl_middle_pane_cp01_ParamLimits

0xa4bc,	// (0x0004de8c) cell_sctrl_middle_pane_cp01

0xa4cd,	// (0x0004de9d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa4cd,	// (0x0004de9d) cell_sctrl_middle_pane_cp01_g1

0xd9d1,	// (0x000513a1) main_call4_pane

0xa4da,	// (0x0004deaa) aid_size_button_call4_ParamLimits

0xa4da,	// (0x0004deaa) aid_size_button_call4

0xa504,	// (0x0004ded4) call4_windows_pane_ParamLimits

0xa504,	// (0x0004ded4) call4_windows_pane

0xa518,	// (0x0004dee8) grid_call4_button_pane_ParamLimits

0xa518,	// (0x0004dee8) grid_call4_button_pane

0x3173,	// (0x00046b43) call4_windows_conf_pane

0xa532,	// (0x0004df02) popup_call4_audio_first_window_ParamLimits

0xa532,	// (0x0004df02) popup_call4_audio_first_window

0xa552,	// (0x0004df22) popup_call4_audio_second_window_ParamLimits

0xa552,	// (0x0004df22) popup_call4_audio_second_window

0x31a6,	// (0x00046b76) popup_call4_audio_wait_window_ParamLimits

0x31a6,	// (0x00046b76) popup_call4_audio_wait_window

0xa564,	// (0x0004df34) cell_call4_button_pane_ParamLimits

0xa564,	// (0x0004df34) cell_call4_button_pane

0xe1cc,	// (0x00051b9c) bg_button_pane_cp09_ParamLimits

0xe1cc,	// (0x00051b9c) bg_button_pane_cp09

0xa587,	// (0x0004df57) cell_call4_button_pane_g1_ParamLimits

0xa587,	// (0x0004df57) cell_call4_button_pane_g1

0xa594,	// (0x0004df64) cell_call4_button_pane_t1_ParamLimits

0xa594,	// (0x0004df64) cell_call4_button_pane_t1

0x31ec,	// (0x00046bbc) popup_call4_audio_conf_window_ParamLimits

0x31ec,	// (0x00046bbc) popup_call4_audio_conf_window

0x98b6,	// (0x0004d286) mup3_progress_pane_t1_ParamLimits

0x98cc,	// (0x0004d29c) mup3_progress_pane_t2_ParamLimits

0x2bb3,	// (0x00046583) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x000531a3) mup3_progress_pane_t_ParamLimits

0x2bca,	// (0x0004659a) mup_progress_pane_cp03_ParamLimits

0x9de0,	// (0x0004d7b0) mup3_control_keys_pane_g4_copy1

0xa293,	// (0x0004dc63) mp4_rocker2_pane_ParamLimits

0xa293,	// (0x0004dc63) mp4_rocker2_pane

0x3208,	// (0x00046bd8) mp4_rocker2_pane_g1

0x3200,	// (0x00046bd0) mp4_rocker2_pane_g2

0xa5a6,	// (0x0004df76) mp4_rocker2_pane_g3

0xa5ae,	// (0x0004df7e) mp4_rocker2_pane_g4

0xa5b6,	// (0x0004df86) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x000532d3) mp4_rocker2_pane_g

0xd9d1,	// (0x000513a1) main_camera4_pane

0xd9d1,	// (0x000513a1) main_video4_pane

0xa000,	// (0x0004d9d0) main_video_tele_dialer_pane_t1_ParamLimits

0xa000,	// (0x0004d9d0) main_video_tele_dialer_pane_t1

0xa012,	// (0x0004d9e2) main_video_tele_dialer_pane_t2_ParamLimits

0xa012,	// (0x0004d9e2) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x0005328d) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x0005328d) main_video_tele_dialer_pane_t

0xa5d4,	// (0x0004dfa4) cam4_autofocus_pane_ParamLimits

0xa5d4,	// (0x0004dfa4) cam4_autofocus_pane

0xa5ea,	// (0x0004dfba) cam4_image_uncrop_pane_ParamLimits

0xa5ea,	// (0x0004dfba) cam4_image_uncrop_pane

0xa5ff,	// (0x0004dfcf) cam4_indicators_pane_ParamLimits

0xa5ff,	// (0x0004dfcf) cam4_indicators_pane

0xa619,	// (0x0004dfe9) main_camera4_pane_g1_ParamLimits

0xa619,	// (0x0004dfe9) main_camera4_pane_g1

0xa625,	// (0x0004dff5) main_camera4_pane_g2_ParamLimits

0xa625,	// (0x0004dff5) main_camera4_pane_g2

0xa625,	// (0x0004dff5) main_camera4_pane_g3_ParamLimits

0xa625,	// (0x0004dff5) main_camera4_pane_g3

0xa631,	// (0x0004e001) main_camera4_pane_g4_ParamLimits

0xa631,	// (0x0004e001) main_camera4_pane_g4

0xa63d,	// (0x0004e00d) main_camera4_pane_g5_ParamLimits

0xa63d,	// (0x0004e00d) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x000532de) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x000532de) main_camera4_pane_g

0xa657,	// (0x0004e027) main_camera4_pane_t1_ParamLimits

0xa657,	// (0x0004e027) main_camera4_pane_t1

0xa69f,	// (0x0004e06f) bg_tb_trans_pane_cp06

0xa6b5,	// (0x0004e085) cam4_indicators_pane_g1

0xa6c5,	// (0x0004e095) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x000532f9) cam4_indicators_pane_g

0xa6e5,	// (0x0004e0b5) cam4_indicators_pane_t1

0xa70d,	// (0x0004e0dd) main_video4_pane_g1_ParamLimits

0xa70d,	// (0x0004e0dd) main_video4_pane_g1

0xa625,	// (0x0004dff5) main_video4_pane_g2_ParamLimits

0xa625,	// (0x0004dff5) main_video4_pane_g2

0xa625,	// (0x0004dff5) main_video4_pane_g3_ParamLimits

0xa625,	// (0x0004dff5) main_video4_pane_g3

0xa631,	// (0x0004e001) main_video4_pane_g4_ParamLimits

0xa631,	// (0x0004e001) main_video4_pane_g4

0x0004,

0xf930,	// (0x00053300) main_video4_pane_g_ParamLimits

0xf930,	// (0x00053300) main_video4_pane_g

0xa721,	// (0x0004e0f1) vid4_indicators_pane_ParamLimits

0xa721,	// (0x0004e0f1) vid4_indicators_pane

0xa73f,	// (0x0004e10f) video4_image_uncrop_cif_pane_ParamLimits

0xa73f,	// (0x0004e10f) video4_image_uncrop_cif_pane

0xa74c,	// (0x0004e11c) video4_image_uncrop_nhd_pane_ParamLimits

0xa74c,	// (0x0004e11c) video4_image_uncrop_nhd_pane

0xa5ea,	// (0x0004dfba) video4_image_uncrop_vga_pane_ParamLimits

0xa5ea,	// (0x0004dfba) video4_image_uncrop_vga_pane

0xa759,	// (0x0004e129) bg_tb_trans_pane_cp07

0xa6b5,	// (0x0004e085) vid4_indicators_pane_g1

0xa767,	// (0x0004e137) vid4_indicators_pane_g2

0xa777,	// (0x0004e147) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x0005330b) vid4_indicators_pane_g

0xa7a4,	// (0x0004e174) vid4_indicators_pane_t1

0xa7be,	// (0x0004e18e) cam4_autofocus_pane_g1

0xa7c6,	// (0x0004e196) cam4_autofocus_pane_g2

0xa7ce,	// (0x0004e19e) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x00053316) cam4_autofocus_pane_g

0xa7d6,	// (0x0004e1a6) cam4_autofocus_pane_g3_copy1

0xa030,	// (0x0004da00) video_down_pane_cp_t1

0xa03e,	// (0x0004da0e) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x00053292) video_down_pane_cp_t

0x3210,	// (0x00046be0) popup_vitu2_window_ParamLimits

0x3210,	// (0x00046be0) popup_vitu2_window

0xa7de,	// (0x0004e1ae) aid_size_cell2_itu2_ParamLimits

0xa7de,	// (0x0004e1ae) aid_size_cell2_itu2

0xa800,	// (0x0004e1d0) aid_size_cell_itu2_ParamLimits

0xa800,	// (0x0004e1d0) aid_size_cell_itu2

0xa83e,	// (0x0004e20e) bg_popup_window_pane_cp09_ParamLimits

0xa83e,	// (0x0004e20e) bg_popup_window_pane_cp09

0xa84c,	// (0x0004e21c) field_vitu2_entry_pane_ParamLimits

0xa84c,	// (0x0004e21c) field_vitu2_entry_pane

0xa862,	// (0x0004e232) grid_vitu2_function_pane_ParamLimits

0xa862,	// (0x0004e232) grid_vitu2_function_pane

0xa894,	// (0x0004e264) grid_vitu2_itu_pane_ParamLimits

0xa894,	// (0x0004e264) grid_vitu2_itu_pane

0xa8ea,	// (0x0004e2ba) cell_vitu2_itu_pane_ParamLimits

0xa8ea,	// (0x0004e2ba) cell_vitu2_itu_pane

0xa8ff,	// (0x0004e2cf) cell_vitu2_function_pane_ParamLimits

0xa8ff,	// (0x0004e2cf) cell_vitu2_function_pane

0x321e,	// (0x00046bee) bg_popup_call_pane_cp08_ParamLimits

0x321e,	// (0x00046bee) bg_popup_call_pane_cp08

0x3237,	// (0x00046c07) field_vitu2_entry_pane_g1

0x3243,	// (0x00046c13) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x0005331d) field_vitu2_entry_pane_g

0x325d,	// (0x00046c2d) field_vitu2_entry_pane_t1_ParamLimits

0x325d,	// (0x00046c2d) field_vitu2_entry_pane_t1

0x3279,	// (0x00046c49) field_vitu2_entry_pane_t2_ParamLimits

0x3279,	// (0x00046c49) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x00053324) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x00053324) field_vitu2_entry_pane_t

0xa93e,	// (0x0004e30e) bg_button_pane_cp010_ParamLimits

0xa93e,	// (0x0004e30e) bg_button_pane_cp010

0xa94c,	// (0x0004e31c) cell_vitu2_itu_pane_g1

0xa96a,	// (0x0004e33a) cell_vitu2_itu_pane_t1_ParamLimits

0xa96a,	// (0x0004e33a) cell_vitu2_itu_pane_t1

0x5ea5,	// (0x00049875) cell_vitu2_itu_pane_t2_ParamLimits

0x5ea5,	// (0x00049875) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x0005332e) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x0005332e) cell_vitu2_itu_pane_t

0xa759,	// (0x0004e129) bg_button_pane_cp011

0xa9bc,	// (0x0004e38c) cell_vitu2_function_pane_g1

0xd9d1,	// (0x000513a1) main_myfav_hc_pane

0xa4a1,	// (0x0004de71) popup_image3_note_pane_ParamLimits

0xa4a1,	// (0x0004de71) popup_image3_note_pane

0xa4ad,	// (0x0004de7d) popup_image3_tool_bar_pane_ParamLimits

0xa4ad,	// (0x0004de7d) popup_image3_tool_bar_pane

0x5f13,	// (0x000498e3) cell_vitu2_itu_pane_t3_ParamLimits

0x5f13,	// (0x000498e3) cell_vitu2_itu_pane_t3

0xd9d1,	// (0x000513a1) bg_popup_trans_pane

0x329e,	// (0x00046c6e) grid_image3_tool_bar_pane

0x32a8,	// (0x00046c78) bg_popup_trans_pane_g1

0xe586,	// (0x00051f56) bg_popup_trans_pane_g2

0x32b0,	// (0x00046c80) bg_popup_trans_pane_g3

0x32b8,	// (0x00046c88) bg_popup_trans_pane_g4

0x32c0,	// (0x00046c90) bg_popup_trans_pane_g5

0x32c8,	// (0x00046c98) bg_popup_trans_pane_g6

0x32d0,	// (0x00046ca0) bg_popup_trans_pane_g7

0x32d8,	// (0x00046ca8) bg_popup_trans_pane_g8

0xe566,	// (0x00051f36) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x00053335) bg_popup_trans_pane_g

0xf07d,	// (0x00052a4d) cell_image3_tool_bar_pane_ParamLimits

0xf07d,	// (0x00052a4d) cell_image3_tool_bar_pane

0x2895,	// (0x00046265) cell_image3_tool_bar_pane_g1

0xd9d1,	// (0x000513a1) bg_popup_trans_pane_cp1

0x32e0,	// (0x00046cb0) popup_image3_note_pane_t1

0x32ee,	// (0x00046cbe) popup_image3_note_pane_t2

0x32fc,	// (0x00046ccc) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x00053348) popup_image3_note_pane_t

0x330a,	// (0x00046cda) popup_image3_note_pane_t3_copy1

0xa9d0,	// (0x0004e3a0) bg_myfav_hc_instruction_pane_ParamLimits

0xa9d0,	// (0x0004e3a0) bg_myfav_hc_instruction_pane

0xa9e2,	// (0x0004e3b2) cell_myfav_contact_pane_ParamLimits

0xa9e2,	// (0x0004e3b2) cell_myfav_contact_pane

0xa9fc,	// (0x0004e3cc) cell_myfav_contact_pane_cp1_ParamLimits

0xa9fc,	// (0x0004e3cc) cell_myfav_contact_pane_cp1

0xaa12,	// (0x0004e3e2) cell_myfav_contact_pane_cp2_ParamLimits

0xaa12,	// (0x0004e3e2) cell_myfav_contact_pane_cp2

0xaa28,	// (0x0004e3f8) cell_myfav_contact_pane_cp3_ParamLimits

0xaa28,	// (0x0004e3f8) cell_myfav_contact_pane_cp3

0xaa3d,	// (0x0004e40d) cell_myfav_contact_pane_cp4_ParamLimits

0xaa3d,	// (0x0004e40d) cell_myfav_contact_pane_cp4

0xaa51,	// (0x0004e421) cell_myfav_contact_pane_cp5_ParamLimits

0xaa51,	// (0x0004e421) cell_myfav_contact_pane_cp5

0xaa65,	// (0x0004e435) cell_myfav_contact_pane_cp6_ParamLimits

0xaa65,	// (0x0004e435) cell_myfav_contact_pane_cp6

0xaa79,	// (0x0004e449) cell_myfav_contact_pane_cp7_ParamLimits

0xaa79,	// (0x0004e449) cell_myfav_contact_pane_cp7

0x3318,	// (0x00046ce8) listscroll_gen_pane_cp05

0xaa91,	// (0x0004e461) main_myfav_hc_pane_g1_ParamLimits

0xaa91,	// (0x0004e461) main_myfav_hc_pane_g1

0xaaa7,	// (0x0004e477) main_myfav_hc_pane_g2_ParamLimits

0xaaa7,	// (0x0004e477) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x0005334f) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x0005334f) main_myfav_hc_pane_g

0xaad1,	// (0x0004e4a1) main_myfav_hc_pane_t1_ParamLimits

0xaad1,	// (0x0004e4a1) main_myfav_hc_pane_t1

0x3321,	// (0x00046cf1) main_myfav_hc_pane_t2_ParamLimits

0x3321,	// (0x00046cf1) main_myfav_hc_pane_t2

0x3333,	// (0x00046d03) main_myfav_hc_pane_t3_ParamLimits

0x3333,	// (0x00046d03) main_myfav_hc_pane_t3

0xaae6,	// (0x0004e4b6) main_myfav_hc_pane_t4_ParamLimits

0xaae6,	// (0x0004e4b6) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x00053356) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x00053356) main_myfav_hc_pane_t

0x2895,	// (0x00046265) bg_myfav_hc_instruction_pane_g1

0x3345,	// (0x00046d15) cell_myfav_contact_pane_g1_ParamLimits

0x3345,	// (0x00046d15) cell_myfav_contact_pane_g1

0x3345,	// (0x00046d15) cell_myfav_contact_pane_g2_ParamLimits

0x3345,	// (0x00046d15) cell_myfav_contact_pane_g2

0x3351,	// (0x00046d21) cell_myfav_contact_pane_g3_ParamLimits

0x3351,	// (0x00046d21) cell_myfav_contact_pane_g3

0x2b9d,	// (0x0004656d) cell_myfav_contact_pane_g4_ParamLimits

0x2b9d,	// (0x0004656d) cell_myfav_contact_pane_g4

0x335e,	// (0x00046d2e) cell_myfav_contact_pane_g5_ParamLimits

0x335e,	// (0x00046d2e) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x00053361) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x00053361) cell_myfav_contact_pane_g

0xaabd,	// (0x0004e48d) main_myfav_hc_pane_g3_ParamLimits

0xaabd,	// (0x0004e48d) main_myfav_hc_pane_g3

0x60cb,	// (0x00049a9b) popup_adpt_find_window

0xab0a,	// (0x0004e4da) afind_page_pane_ParamLimits

0xab0a,	// (0x0004e4da) afind_page_pane

0xab17,	// (0x0004e4e7) aid_size_cell_afind_ParamLimits

0xab17,	// (0x0004e4e7) aid_size_cell_afind

0xab31,	// (0x0004e501) bg_popup_sub_pane_cp09_ParamLimits

0xab31,	// (0x0004e501) bg_popup_sub_pane_cp09

0xab3e,	// (0x0004e50e) find_pane_cp01_ParamLimits

0xab3e,	// (0x0004e50e) find_pane_cp01

0x336a,	// (0x00046d3a) grid_afind_control_pane_ParamLimits

0x336a,	// (0x00046d3a) grid_afind_control_pane

0xab4b,	// (0x0004e51b) grid_afind_pane_ParamLimits

0xab4b,	// (0x0004e51b) grid_afind_pane

0xab61,	// (0x0004e531) cell_afind_pane_ParamLimits

0xab61,	// (0x0004e531) cell_afind_pane

0x2895,	// (0x00046265) afind_page_pane_g1

0xab97,	// (0x0004e567) afind_page_pane_g2

0xaba0,	// (0x0004e570) afind_page_pane_g3

0x0002,

0xf99c,	// (0x0005336c) afind_page_pane_g

0xaba9,	// (0x0004e579) afind_page_pane_t1

0x337e,	// (0x00046d4e) cell_afind_grid_control_pane_ParamLimits

0x337e,	// (0x00046d4e) cell_afind_grid_control_pane

0x314f,	// (0x00046b1f) bg_button_pane_cp69_ParamLimits

0x314f,	// (0x00046b1f) bg_button_pane_cp69

0xabc9,	// (0x0004e599) cell_afind_pane_g1_ParamLimits

0xabc9,	// (0x0004e599) cell_afind_pane_g1

0xabd6,	// (0x0004e5a6) cell_afind_pane_t1_ParamLimits

0xabd6,	// (0x0004e5a6) cell_afind_pane_t1

0xe372,	// (0x00051d42) bg_button_pane_cp72

0x338d,	// (0x00046d5d) cell_afind_grid_control_pane_g1

0x8584,	// (0x0004bf54) aid_image_placing_area_ParamLimits

0x8584,	// (0x0004bf54) aid_image_placing_area

0x2e29,	// (0x000467f9) field_vitu_entry_pane_g1_ParamLimits

0x2e29,	// (0x000467f9) field_vitu_entry_pane_g1

0x2e35,	// (0x00046805) field_vitu_entry_pane_g2_ParamLimits

0x2e35,	// (0x00046805) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x0005321d) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x0005321d) field_vitu_entry_pane_g

0x9e5b,	// (0x0004d82b) cell_vitu_itu_pane_g1_ParamLimits

0x9e9d,	// (0x0004d86d) cell_vitu_itu_pane_t3_ParamLimits

0x9e9d,	// (0x0004d86d) cell_vitu_itu_pane_t3

0x3103,	// (0x00046ad3) mp4_progress_pane_t1_ParamLimits

0x311a,	// (0x00046aea) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x000532b2) mp4_progress_pane_t_ParamLimits

0x3131,	// (0x00046b01) mup_progress_pane_cp04_ParamLimits

0xaaf8,	// (0x0004e4c8) main_myfav_hc_pane_t5_ParamLimits

0xaaf8,	// (0x0004e4c8) main_myfav_hc_pane_t5

0xd9eb,	// (0x000513bb) aid_zoom_text_primary

0x60cb,	// (0x00049a9b) popup_adpt_find_window_ParamLimits

0xf063,	// (0x00052a33) main_cam_set_pane

0xa60d,	// (0x0004dfdd) cam4_zoom_pane_ParamLimits

0xa60d,	// (0x0004dfdd) cam4_zoom_pane

0xabe8,	// (0x0004e5b8) main_cam_set_pane_g1_ParamLimits

0xabe8,	// (0x0004e5b8) main_cam_set_pane_g1

0xabf6,	// (0x0004e5c6) main_cam_set_pane_g2_ParamLimits

0xabf6,	// (0x0004e5c6) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x00053373) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x00053373) main_cam_set_pane_g

0xac02,	// (0x0004e5d2) main_cam_set_pane_t1_ParamLimits

0xac02,	// (0x0004e5d2) main_cam_set_pane_t1

0xac14,	// (0x0004e5e4) main_cset_listscroll_pane_ParamLimits

0xac14,	// (0x0004e5e4) main_cset_listscroll_pane

0xac3d,	// (0x0004e60d) main_cset_slider_pane_ParamLimits

0xac3d,	// (0x0004e60d) main_cset_slider_pane

0x339e,	// (0x00046d6e) main_cset_list_pane_ParamLimits

0x339e,	// (0x00046d6e) main_cset_list_pane

0x33ae,	// (0x00046d7e) scroll_pane_cp028

0xac5c,	// (0x0004e62c) aid_area_touch_slider

0xac78,	// (0x0004e648) cset_slider_pane

0xaca2,	// (0x0004e672) main_cset_slider_pane_g1

0xacb7,	// (0x0004e687) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x00053378) main_cset_slider_pane_g

0x33e7,	// (0x00046db7) main_cset_slider_pane_t1

0xad73,	// (0x0004e743) main_cset_slider_pane_t2

0xad8d,	// (0x0004e75d) main_cset_slider_pane_t3

0xada7,	// (0x0004e777) main_cset_slider_pane_t4

0xadc1,	// (0x0004e791) main_cset_slider_pane_t5

0xaddb,	// (0x0004e7ab) main_cset_slider_pane_t6

0xadf0,	// (0x0004e7c0) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x0005339d) main_cset_slider_pane_t

0xaef4,	// (0x0004e8c4) cset_list_set_pane_ParamLimits

0xaef4,	// (0x0004e8c4) cset_list_set_pane

0xaf04,	// (0x0004e8d4) aid_position_infowindow_above

0xaf0c,	// (0x0004e8dc) aid_position_infowindow_below

0x3487,	// (0x00046e57) cset_list_set_pane_g1_ParamLimits

0x3487,	// (0x00046e57) cset_list_set_pane_g1

0xaf14,	// (0x0004e8e4) cset_list_set_pane_g3_ParamLimits

0xaf14,	// (0x0004e8e4) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x000533bc) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x000533bc) cset_list_set_pane_g

0x3493,	// (0x00046e63) cset_list_set_pane_t1_ParamLimits

0x3493,	// (0x00046e63) cset_list_set_pane_t1

0xf063,	// (0x00052a33) list_highlight_pane_cp021_ParamLimits

0xf063,	// (0x00052a33) list_highlight_pane_cp021

0xee0a,	// (0x000527da) cset_slider_pane_g1

0xee1c,	// (0x000527ec) cset_slider_pane_g2

0xee13,	// (0x000527e3) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x000533c1) cset_slider_pane_g

0xaf23,	// (0x0004e8f3) aid_area_touch_cam4_zoom

0xaf2b,	// (0x0004e8fb) cam4_zoom_cont_pane

0xaf33,	// (0x0004e903) cam4_zoom_pane_g1

0xaf3b,	// (0x0004e90b) cam4_zoom_pane_g2

0xaf43,	// (0x0004e913) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x000533c8) cam4_zoom_pane_g

0xaf4b,	// (0x0004e91b) cam4_zoom_cont_pane_g1

0xaf54,	// (0x0004e924) cam4_zoom_cont_pane_g2

0xaf5d,	// (0x0004e92d) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x000533cf) cam4_zoom_cont_pane_g

0xa4f4,	// (0x0004dec4) call4_image_pane_ParamLimits

0xa4f4,	// (0x0004dec4) call4_image_pane

0x3173,	// (0x00046b43) call4_windows_conf_pane_ParamLimits

0x3186,	// (0x00046b56) popup_call4_audio_in_window_ParamLimits

0x3186,	// (0x00046b56) popup_call4_audio_in_window

0xd9d1,	// (0x000513a1) bg_popup_call2_act_pane_cp02

0x31e4,	// (0x00046bb4) call4_list_conf_pane

0x2895,	// (0x00046265) call4_image_pane_g1

0x2895,	// (0x00046265) call4_image_pane_g2

0x0001,

0xf713,	// (0x000530e3) call4_image_pane_g

0x34c3,	// (0x00046e93) list_single_graphic_popup_conf4_pane_ParamLimits

0x34c3,	// (0x00046e93) list_single_graphic_popup_conf4_pane

0xd9d1,	// (0x000513a1) list_highlight_pane_cp022

0x34d6,	// (0x00046ea6) list_single_graphic_popup_conf4_pane_g1

0xea6f,	// (0x0005243f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x000533d6) list_single_graphic_popup_conf4_pane_g

0x34de,	// (0x00046eae) list_single_graphic_popup_conf4_pane_t1

0x6f5b,	// (0x0004a92b) popup_vtel_slider_window_ParamLimits

0x6f5b,	// (0x0004a92b) popup_vtel_slider_window

0x313d,	// (0x00046b0d) dialer2_ne_pane_t2_ParamLimits

0x313d,	// (0x00046b0d) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x000532b7) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x000532b7) dialer2_ne_pane_t

0xf063,	// (0x00052a33) bg_popup_sub_pane_cp010_ParamLimits

0xf063,	// (0x00052a33) bg_popup_sub_pane_cp010

0xaf66,	// (0x0004e936) popup_vtel_slider_window_g1_ParamLimits

0xaf66,	// (0x0004e936) popup_vtel_slider_window_g1

0xaf72,	// (0x0004e942) popup_vtel_slider_window_g2_ParamLimits

0xaf72,	// (0x0004e942) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x000533db) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x000533db) popup_vtel_slider_window_g

0xafb8,	// (0x0004e988) vtel_slider_pane_ParamLimits

0xafb8,	// (0x0004e988) vtel_slider_pane

0xafc7,	// (0x0004e997) vtel_slider_pane_g1_ParamLimits

0xafc7,	// (0x0004e997) vtel_slider_pane_g1

0xafd4,	// (0x0004e9a4) vtel_slider_pane_g2_ParamLimits

0xafd4,	// (0x0004e9a4) vtel_slider_pane_g2

0xafe1,	// (0x0004e9b1) vtel_slider_pane_g3_ParamLimits

0xafe1,	// (0x0004e9b1) vtel_slider_pane_g3

0xafc7,	// (0x0004e997) vtel_slider_pane_g4_ParamLimits

0xafc7,	// (0x0004e997) vtel_slider_pane_g4

0xafee,	// (0x0004e9be) vtel_slider_pane_g5_ParamLimits

0xafee,	// (0x0004e9be) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x000533e4) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x000533e4) vtel_slider_pane_g

0xd9d1,	// (0x000513a1) main_gallery2_pane

0xa826,	// (0x0004e1f6) aid_size_row_itut2_dropdow_list_ParamLimits

0xa826,	// (0x0004e1f6) aid_size_row_itut2_dropdow_list

0xa87a,	// (0x0004e24a) grid_vitu2_function_top_pane_ParamLimits

0xa87a,	// (0x0004e24a) grid_vitu2_function_top_pane

0xa8b4,	// (0x0004e284) popup_vitu2_dropdown_list_window_ParamLimits

0xa8b4,	// (0x0004e284) popup_vitu2_dropdown_list_window

0xa8ce,	// (0x0004e29e) popup_vitu2_match_list_window

0xaffb,	// (0x0004e9cb) cell_vitu2_function_top_pane_ParamLimits

0xaffb,	// (0x0004e9cb) cell_vitu2_function_top_pane

0xb01b,	// (0x0004e9eb) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb01b,	// (0x0004e9eb) cell_vitu2_function_top_pane_cp01

0xb03b,	// (0x0004ea0b) cell_vitu2_function_top_wide_pane_ParamLimits

0xb03b,	// (0x0004ea0b) cell_vitu2_function_top_wide_pane

0xa759,	// (0x0004e129) bg_button_pane_cp012

0xb059,	// (0x0004ea29) cell_vitu2_function_top_pane_g1

0xb068,	// (0x0004ea38) bg_button_pane_cp013_ParamLimits

0xb068,	// (0x0004ea38) bg_button_pane_cp013

0xb084,	// (0x0004ea54) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb084,	// (0x0004ea54) cell_vitu2_function_top_wide_pane_g1

0xb09c,	// (0x0004ea6c) bg_popup_sub_pane_cp20

0xb0aa,	// (0x0004ea7a) list_vitu2_match_list_pane

0x32a8,	// (0x00046c78) bg_popup_sub_pane_cp20_g1

0x32b0,	// (0x00046c80) bg_popup_sub_pane_cp20_g2

0xe586,	// (0x00051f56) bg_popup_sub_pane_cp20_g3

0x32b8,	// (0x00046c88) bg_popup_sub_pane_cp20_g4

0xe566,	// (0x00051f36) bg_popup_sub_pane_cp20_g5

0x3502,	// (0x00046ed2) bg_popup_sub_pane_cp20_g6

0x32c8,	// (0x00046c98) bg_popup_sub_pane_cp20_g7

0x32d0,	// (0x00046ca0) bg_popup_sub_pane_cp20_g8

0x32d8,	// (0x00046ca8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x000533ef) bg_popup_sub_pane_cp20_g

0xb0c2,	// (0x0004ea92) list_vitu2_match_list_item_pane_ParamLimits

0xb0c2,	// (0x0004ea92) list_vitu2_match_list_item_pane

0xb0d4,	// (0x0004eaa4) list_vitu2_match_list_item_pane_t1

0x647b,	// (0x00049e4b) bg_popup_sub_pane_cp21

0xb10e,	// (0x0004eade) grid_vitu2_dropdown_list_pane

0xb116,	// (0x0004eae6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb116,	// (0x0004eae6) cell_vitu2_dropdown_list_char_pane

0xb137,	// (0x0004eb07) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb137,	// (0x0004eb07) cell_vitu2_dropdown_list_ctrl_pane

0x351c,	// (0x00046eec) cell_vitu2_dropdown_list_char_pane_g1

0x3513,	// (0x00046ee3) cell_vitu2_dropdown_list_char_pane_g2

0x350a,	// (0x00046eda) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x0005340c) cell_vitu2_dropdown_list_char_pane_g

0xb163,	// (0x0004eb33) cell_vitu2_dropdown_list_char_pane_t1

0xb171,	// (0x0004eb41) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb171,	// (0x0004eb41) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb181,	// (0x0004eb51) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb181,	// (0x0004eb51) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb192,	// (0x0004eb62) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb192,	// (0x0004eb62) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb1a2,	// (0x0004eb72) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb1a2,	// (0x0004eb72) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa69f,	// (0x0004e06f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa69f,	// (0x0004e06f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x00053413) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x00053413) cell_vitu2_dropdown_list_ctrl_pane_g

0xb1bb,	// (0x0004eb8b) aid_size_cell_gallery2_ParamLimits

0xb1bb,	// (0x0004eb8b) aid_size_cell_gallery2

0xb1c9,	// (0x0004eb99) grid_gallery2_pane_ParamLimits

0xb1c9,	// (0x0004eb99) grid_gallery2_pane

0xb1d6,	// (0x0004eba6) scroll_pane_cp029_ParamLimits

0xb1d6,	// (0x0004eba6) scroll_pane_cp029

0xb1e2,	// (0x0004ebb2) cell_gallery2_pane_ParamLimits

0xb1e2,	// (0x0004ebb2) cell_gallery2_pane

0x3525,	// (0x00046ef5) cell_gallery2_pane_g2

0xb20e,	// (0x0004ebde) cell_gallery2_pane_g3

0x352f,	// (0x00046eff) cell_gallery2_pane_g4

0x3537,	// (0x00046f07) cell_gallery2_pane_g5

0xecd4,	// (0x000526a4) grid_highlight_pane_cp10

0xa8ce,	// (0x0004e29e) popup_vitu2_match_list_window_ParamLimits

0xa8de,	// (0x0004e2ae) popup_vitu2_query_window_ParamLimits

0xa8de,	// (0x0004e2ae) popup_vitu2_query_window

0x647b,	// (0x00049e4b) bg_vitu2_candi_button_pane

0x351c,	// (0x00046eec) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3513,	// (0x00046ee3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x350a,	// (0x00046eda) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb216,	// (0x0004ebe6) bg_button_pane_cp015

0xb226,	// (0x0004ebf6) bg_button_pane_cp016

0xb239,	// (0x0004ec09) bg_button_pane_cp017

0x245a,	// (0x00045e2a) bg_popup_sub_pane_cp22

0x353f,	// (0x00046f0f) popup_vitu2_query_window_g1

0xb27c,	// (0x0004ec4c) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x0005341e) popup_vitu2_query_window_g

0xb297,	// (0x0004ec67) popup_vitu2_query_window_t1_ParamLimits

0xb297,	// (0x0004ec67) popup_vitu2_query_window_t1

0xb2ca,	// (0x0004ec9a) popup_vitu2_query_window_t2_ParamLimits

0xb2ca,	// (0x0004ec9a) popup_vitu2_query_window_t2

0xb2dc,	// (0x0004ecac) popup_vitu2_query_window_t3_ParamLimits

0xb2dc,	// (0x0004ecac) popup_vitu2_query_window_t3

0xb304,	// (0x0004ecd4) popup_vitu2_query_window_t4_ParamLimits

0xb304,	// (0x0004ecd4) popup_vitu2_query_window_t4

0xb321,	// (0x0004ecf1) popup_vitu2_query_window_t5_ParamLimits

0xb321,	// (0x0004ecf1) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x00053425) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x00053425) popup_vitu2_query_window_t

0x3396,	// (0x00046d66) main_cset_text_pane

0xac5c,	// (0x0004e62c) aid_area_touch_slider_ParamLimits

0xac78,	// (0x0004e648) cset_slider_pane_ParamLimits

0xaca2,	// (0x0004e672) main_cset_slider_pane_g1_ParamLimits

0xacb7,	// (0x0004e687) main_cset_slider_pane_g2_ParamLimits

0x33b7,	// (0x00046d87) main_cset_slider_pane_g3_ParamLimits

0x33b7,	// (0x00046d87) main_cset_slider_pane_g3

0xaccc,	// (0x0004e69c) main_cset_slider_pane_g4_ParamLimits

0xaccc,	// (0x0004e69c) main_cset_slider_pane_g4

0xacdb,	// (0x0004e6ab) main_cset_slider_pane_g5_ParamLimits

0xacdb,	// (0x0004e6ab) main_cset_slider_pane_g5

0xace7,	// (0x0004e6b7) main_cset_slider_pane_g6_ParamLimits

0xace7,	// (0x0004e6b7) main_cset_slider_pane_g6

0xf9a8,	// (0x00053378) main_cset_slider_pane_g_ParamLimits

0x33e7,	// (0x00046db7) main_cset_slider_pane_t1_ParamLimits

0xad73,	// (0x0004e743) main_cset_slider_pane_t2_ParamLimits

0xad8d,	// (0x0004e75d) main_cset_slider_pane_t3_ParamLimits

0xada7,	// (0x0004e777) main_cset_slider_pane_t4_ParamLimits

0xadc1,	// (0x0004e791) main_cset_slider_pane_t5_ParamLimits

0xaddb,	// (0x0004e7ab) main_cset_slider_pane_t6_ParamLimits

0xadf0,	// (0x0004e7c0) main_cset_slider_pane_t7_ParamLimits

0xae1a,	// (0x0004e7ea) main_cset_slider_pane_t8_ParamLimits

0xae1a,	// (0x0004e7ea) main_cset_slider_pane_t8

0xae42,	// (0x0004e812) main_cset_slider_pane_t9_ParamLimits

0xae42,	// (0x0004e812) main_cset_slider_pane_t9

0xae6a,	// (0x0004e83a) main_cset_slider_pane_t10_ParamLimits

0xae6a,	// (0x0004e83a) main_cset_slider_pane_t10

0xae92,	// (0x0004e862) main_cset_slider_pane_t11_ParamLimits

0xae92,	// (0x0004e862) main_cset_slider_pane_t11

0xaeba,	// (0x0004e88a) main_cset_slider_pane_t12_ParamLimits

0xaeba,	// (0x0004e88a) main_cset_slider_pane_t12

0xaed7,	// (0x0004e8a7) main_cset_slider_pane_t13_ParamLimits

0xaed7,	// (0x0004e8a7) main_cset_slider_pane_t13

0xf9cd,	// (0x0005339d) main_cset_slider_pane_t_ParamLimits

0xd9d1,	// (0x000513a1) bg_popup_sub_pane_cp011

0x354b,	// (0x00046f1b) main_cset_text_pane_g1

0x3553,	// (0x00046f23) main_cset_text_pane_t1

0x3561,	// (0x00046f31) main_cset_text_pane_t2

0x356f,	// (0x00046f3f) main_cset_text_pane_t3

0x357d,	// (0x00046f4d) main_cset_text_pane_t4

0x358b,	// (0x00046f5b) main_cset_text_pane_t5

0x3599,	// (0x00046f69) main_cset_text_pane_t6

0x35a7,	// (0x00046f77) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x00053434) main_cset_text_pane_t

0xd9d1,	// (0x000513a1) main_cam4_burst_pane

0xd9d1,	// (0x000513a1) main_cam5_pane

0xabb7,	// (0x0004e587) bg_button_pane_cp019

0xabc0,	// (0x0004e590) bg_button_pane_cp020

0x33c3,	// (0x00046d93) main_cset_slider_pane_g7_ParamLimits

0x33c3,	// (0x00046d93) main_cset_slider_pane_g7

0x33cf,	// (0x00046d9f) main_cset_slider_pane_g8_ParamLimits

0x33cf,	// (0x00046d9f) main_cset_slider_pane_g8

0xacfb,	// (0x0004e6cb) main_cset_slider_pane_g9_ParamLimits

0xacfb,	// (0x0004e6cb) main_cset_slider_pane_g9

0xad07,	// (0x0004e6d7) main_cset_slider_pane_g10_ParamLimits

0xad07,	// (0x0004e6d7) main_cset_slider_pane_g10

0xad13,	// (0x0004e6e3) main_cset_slider_pane_g11_ParamLimits

0xad13,	// (0x0004e6e3) main_cset_slider_pane_g11

0xad1f,	// (0x0004e6ef) main_cset_slider_pane_g12_ParamLimits

0xad1f,	// (0x0004e6ef) main_cset_slider_pane_g12

0xad2b,	// (0x0004e6fb) main_cset_slider_pane_g13_ParamLimits

0xad2b,	// (0x0004e6fb) main_cset_slider_pane_g13

0xad37,	// (0x0004e707) main_cset_slider_pane_g14_ParamLimits

0xad37,	// (0x0004e707) main_cset_slider_pane_g14

0xad43,	// (0x0004e713) main_cset_slider_pane_g15_ParamLimits

0xad43,	// (0x0004e713) main_cset_slider_pane_g15

0x3415,	// (0x00046de5) main_cset_slider_pane_t14_ParamLimits

0x3415,	// (0x00046de5) main_cset_slider_pane_t14

0x344e,	// (0x00046e1e) main_cset_slider_pane_t15_ParamLimits

0x344e,	// (0x00046e1e) main_cset_slider_pane_t15

0xb394,	// (0x0004ed64) aid_cam4_burst_size_cell_ParamLimits

0xb394,	// (0x0004ed64) aid_cam4_burst_size_cell

0xb3b0,	// (0x0004ed80) grid_cam4_burst_pane_ParamLimits

0xb3b0,	// (0x0004ed80) grid_cam4_burst_pane

0xb3d2,	// (0x0004eda2) linegrid_cam4_burst_pane_ParamLimits

0xb3d2,	// (0x0004eda2) linegrid_cam4_burst_pane

0xb3f0,	// (0x0004edc0) scroll_pane_cp30_ParamLimits

0xb3f0,	// (0x0004edc0) scroll_pane_cp30

0xb3fc,	// (0x0004edcc) cell_cam4_burst_pane_ParamLimits

0xb3fc,	// (0x0004edcc) cell_cam4_burst_pane

0x35b5,	// (0x00046f85) linegrid_cam4_burst_pane_g1_ParamLimits

0x35b5,	// (0x00046f85) linegrid_cam4_burst_pane_g1

0xb434,	// (0x0004ee04) linegrid_cam4_burst_pane_g2_ParamLimits

0xb434,	// (0x0004ee04) linegrid_cam4_burst_pane_g2

0x35c2,	// (0x00046f92) linegrid_cam4_burst_pane_g3_ParamLimits

0x35c2,	// (0x00046f92) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x00053443) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x00053443) linegrid_cam4_burst_pane_g

0xb445,	// (0x0004ee15) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb445,	// (0x0004ee15) linegrid_cam4_burst_pane_g3_copy1

0x35cf,	// (0x00046f9f) linegrid_cam4_burst_pane_g4_ParamLimits

0x35cf,	// (0x00046f9f) linegrid_cam4_burst_pane_g4

0xb45f,	// (0x0004ee2f) linegrid_cam4_burst_pane_g5_ParamLimits

0xb45f,	// (0x0004ee2f) linegrid_cam4_burst_pane_g5

0xb470,	// (0x0004ee40) linegrid_cam4_burst_pane_g6_ParamLimits

0xb470,	// (0x0004ee40) linegrid_cam4_burst_pane_g6

0x35dc,	// (0x00046fac) linegrid_cam4_burst_pane_g7_ParamLimits

0x35dc,	// (0x00046fac) linegrid_cam4_burst_pane_g7

0xb481,	// (0x0004ee51) cell_cam4_burst_pane_g1

0x35f5,	// (0x00046fc5) main_cam5_pane_t1_ParamLimits

0x35f5,	// (0x00046fc5) main_cam5_pane_t1

0x3607,	// (0x00046fd7) main_cam5_pane_t2_ParamLimits

0x3607,	// (0x00046fd7) main_cam5_pane_t2

0x3619,	// (0x00046fe9) main_cam5_pane_t3_ParamLimits

0x3619,	// (0x00046fe9) main_cam5_pane_t3

0x362b,	// (0x00046ffb) main_cam5_pane_t4_ParamLimits

0x362b,	// (0x00046ffb) main_cam5_pane_t4

0x3641,	// (0x00047011) main_cam5_pane_t5_ParamLimits

0x3641,	// (0x00047011) main_cam5_pane_t5

0x3653,	// (0x00047023) main_cam5_pane_t6_ParamLimits

0x3653,	// (0x00047023) main_cam5_pane_t6

0x3665,	// (0x00047035) main_cam5_pane_t7_ParamLimits

0x3665,	// (0x00047035) main_cam5_pane_t7

0x3677,	// (0x00047047) main_cam5_pane_t8_ParamLimits

0x3677,	// (0x00047047) main_cam5_pane_t8

0x3693,	// (0x00047063) main_cam5_pane_t9_ParamLimits

0x3693,	// (0x00047063) main_cam5_pane_t9

0x36a5,	// (0x00047075) main_cam5_pane_t10_ParamLimits

0x36a5,	// (0x00047075) main_cam5_pane_t10

0x36b7,	// (0x00047087) main_cam5_pane_t11_ParamLimits

0x36b7,	// (0x00047087) main_cam5_pane_t11

0x36c9,	// (0x00047099) main_cam5_pane_t12_ParamLimits

0x36c9,	// (0x00047099) main_cam5_pane_t12

0x36de,	// (0x000470ae) main_cam5_pane_t13_ParamLimits

0x36de,	// (0x000470ae) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x0005344f) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x0005344f) main_cam5_pane_t

0x613e,	// (0x00049b0e) popup_scut_keymap_window_ParamLimits

0x613e,	// (0x00049b0e) popup_scut_keymap_window

0xb494,	// (0x0004ee64) aid_size_cell_brow_shortcut

0xecd4,	// (0x000526a4) bg_popup_window_pane_cp010

0xb4a0,	// (0x0004ee70) grid_scut_pane

0xb4aa,	// (0x0004ee7a) cell_scut_pane_ParamLimits

0xb4aa,	// (0x0004ee7a) cell_scut_pane

0xb4bf,	// (0x0004ee8f) cell_scut_pane_g1

0x36fb,	// (0x000470cb) cell_scut_pane_t1

0x370a,	// (0x000470da) cell_scut_pane_t2

0xb4c8,	// (0x0004ee98) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x0005346a) cell_scut_pane_t

0x9543,	// (0x0004cf13) main_mup3_pane_g8_ParamLimits

0x9543,	// (0x0004cf13) main_mup3_pane_g8

0xa832,	// (0x0004e202) area_vitu2_query_pane_ParamLimits

0xa832,	// (0x0004e202) area_vitu2_query_pane

0xb24c,	// (0x0004ec1c) input_focus_pane_cp08

0x3719,	// (0x000470e9) area_vitu2_query_pane_g1

0xb4d6,	// (0x0004eea6) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x00053471) area_vitu2_query_pane_g

0xb4e5,	// (0x0004eeb5) area_vitu2_query_pane_t1_ParamLimits

0xb4e5,	// (0x0004eeb5) area_vitu2_query_pane_t1

0xb4f7,	// (0x0004eec7) area_vitu2_query_pane_t2_ParamLimits

0xb4f7,	// (0x0004eec7) area_vitu2_query_pane_t2

0xb509,	// (0x0004eed9) area_vitu2_query_pane_t3_ParamLimits

0xb509,	// (0x0004eed9) area_vitu2_query_pane_t3

0x3725,	// (0x000470f5) area_vitu2_query_pane_t4_ParamLimits

0x3725,	// (0x000470f5) area_vitu2_query_pane_t4

0x374d,	// (0x0004711d) area_vitu2_query_pane_t5_ParamLimits

0x374d,	// (0x0004711d) area_vitu2_query_pane_t5

0x3775,	// (0x00047145) area_vitu2_query_pane_t6_ParamLimits

0x3775,	// (0x00047145) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x00053476) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x00053476) area_vitu2_query_pane_t

0xb531,	// (0x0004ef01) bg_button_pane_cp018

0xb53e,	// (0x0004ef0e) bg_button_pane_cp021

0xb54a,	// (0x0004ef1a) bg_button_pane_cp022

0xb559,	// (0x0004ef29) input_focus_pane_cp09

0x7d88,	// (0x0004b758) aid_size_touch_mv_arrow_left

0xebad,	// (0x0005257d) aid_size_touch_mv_arrow_right

0xad5b,	// (0x0004e72b) main_cset_slider_pane_g16_ParamLimits

0xad5b,	// (0x0004e72b) main_cset_slider_pane_g16

0xad67,	// (0x0004e737) main_cset_slider_pane_g17_ParamLimits

0xad67,	// (0x0004e737) main_cset_slider_pane_g17

0xb481,	// (0x0004ee51) cell_cam4_burst_pane_g1_ParamLimits

0xd9d1,	// (0x000513a1) compa_mode_pane

0xaf7e,	// (0x0004e94e) popup_vtel_slider_window_g3_ParamLimits

0xaf7e,	// (0x0004e94e) popup_vtel_slider_window_g3

0xaf92,	// (0x0004e962) popup_vtel_slider_window_g4_ParamLimits

0xaf92,	// (0x0004e962) popup_vtel_slider_window_g4

0xafa6,	// (0x0004e976) popup_vtel_slider_window_t1_ParamLimits

0xafa6,	// (0x0004e976) popup_vtel_slider_window_t1

0xd9d1,	// (0x000513a1) main_cl_pane

0x2480,	// (0x00045e50) popup_imed_adjust2_window_ParamLimits

0x245a,	// (0x00045e2a) bg_tb_trans_pane_cp05_ParamLimits

0x2d5e,	// (0x0004672e) popup_imed_adjust2_window_g1_ParamLimits

0x2d6d,	// (0x0004673d) popup_imed_adjust2_window_g2_ParamLimits

0x2d6d,	// (0x0004673d) popup_imed_adjust2_window_g2

0x2d79,	// (0x00046749) popup_imed_adjust2_window_g3_ParamLimits

0x2d79,	// (0x00046749) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x000531e1) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x000531e1) popup_imed_adjust2_window_g

0x2d85,	// (0x00046755) popup_imed_adjust2_window_t1_ParamLimits

0x2d9d,	// (0x0004676d) slider_imed_adjust_pane_ParamLimits

0x2db1,	// (0x00046781) slider_imed_adjust_pane_g1_ParamLimits

0x2dc1,	// (0x00046791) slider_imed_adjust_pane_g2_ParamLimits

0x2dd1,	// (0x000467a1) slider_imed_adjust_pane_g3_ParamLimits

0x2de2,	// (0x000467b2) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x000531e8) slider_imed_adjust_pane_g_ParamLimits

0xa5be,	// (0x0004df8e) aid_touch_area_cam4_ParamLimits

0xa5be,	// (0x0004df8e) aid_touch_area_cam4

0xa5cc,	// (0x0004df9c) battery_pane_cp01

0xa64b,	// (0x0004e01b) main_camera4_pane_g6_ParamLimits

0xa64b,	// (0x0004e01b) main_camera4_pane_g6

0xa669,	// (0x0004e039) main_camera4_pane_t2_ParamLimits

0xa669,	// (0x0004e039) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x000532eb) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x000532eb) main_camera4_pane_t

0xa6ff,	// (0x0004e0cf) aid_touch_area_vid4_ParamLimits

0xa6ff,	// (0x0004e0cf) aid_touch_area_vid4

0xa64b,	// (0x0004e01b) main_video4_pane_g5_ParamLimits

0xa64b,	// (0x0004e01b) main_video4_pane_g5

0xa72f,	// (0x0004e0ff) vid4_progress_pane_ParamLimits

0xa72f,	// (0x0004e0ff) vid4_progress_pane

0x33db,	// (0x00046dab) main_cset_slider_pane_g18_ParamLimits

0x33db,	// (0x00046dab) main_cset_slider_pane_g18

0x35e9,	// (0x00046fb9) cell_cam4_burst_pane_g2_ParamLimits

0x35e9,	// (0x00046fb9) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x0005344a) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x0005344a) cell_cam4_burst_pane_g

0xb568,	// (0x0004ef38) bg_cl_pane_ParamLimits

0xb568,	// (0x0004ef38) bg_cl_pane

0xb574,	// (0x0004ef44) cl_header_pane_ParamLimits

0xb574,	// (0x0004ef44) cl_header_pane

0xb580,	// (0x0004ef50) cl_listscroll_pane_ParamLimits

0xb580,	// (0x0004ef50) cl_listscroll_pane

0x37c1,	// (0x00047191) bg_cl_pane_g1

0x37c9,	// (0x00047199) bg_cl_pane_g2

0x37d1,	// (0x000471a1) bg_cl_pane_g3

0x37d9,	// (0x000471a9) bg_cl_pane_g4

0x37e1,	// (0x000471b1) bg_cl_pane_g5

0x37e9,	// (0x000471b9) bg_cl_pane_g6

0x37f1,	// (0x000471c1) bg_cl_pane_g7

0x37f9,	// (0x000471c9) bg_cl_pane_g8

0x3801,	// (0x000471d1) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x00053485) bg_cl_pane_g

0xb58c,	// (0x0004ef5c) aid_height_cl_leading_ParamLimits

0xb58c,	// (0x0004ef5c) aid_height_cl_leading

0xb598,	// (0x0004ef68) aid_height_cl_text_ParamLimits

0xb598,	// (0x0004ef68) aid_height_cl_text

0x3210,	// (0x00046be0) bg_cl_header_pane_ParamLimits

0x3210,	// (0x00046be0) bg_cl_header_pane

0xb5b0,	// (0x0004ef80) cl_header_pane_g1_ParamLimits

0xb5b0,	// (0x0004ef80) cl_header_pane_g1

0xb5bd,	// (0x0004ef8d) cl_header_pane_t1_ParamLimits

0xb5bd,	// (0x0004ef8d) cl_header_pane_t1

0x3809,	// (0x000471d9) cl_list_pane

0x3812,	// (0x000471e2) hc_scroll_pane_cp01

0xe566,	// (0x00051f36) bg_cl_header_pane_g1

0x32a8,	// (0x00046c78) bg_cl_header_pane_g2

0xe586,	// (0x00051f56) bg_cl_header_pane_g3

0x32b8,	// (0x00046c88) bg_cl_header_pane_g4

0x32b0,	// (0x00046c80) bg_cl_header_pane_g5

0x3502,	// (0x00046ed2) bg_cl_header_pane_g6

0x32d0,	// (0x00046ca0) bg_cl_header_pane_g7

0x32d8,	// (0x00046ca8) bg_cl_header_pane_g8

0x32c8,	// (0x00046c98) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x00053498) bg_cl_header_pane_g

0xb5cf,	// (0x0004ef9f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb5cf,	// (0x0004ef9f) hc_cl_list_double_graphic_heading_pane

0xb5df,	// (0x0004efaf) hc_cl_list_single_graphic_pane_ParamLimits

0xb5df,	// (0x0004efaf) hc_cl_list_single_graphic_pane

0xb5f1,	// (0x0004efc1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb5f1,	// (0x0004efc1) hc_cl_list_single_graphic_pane_g1

0xb5fd,	// (0x0004efcd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb5fd,	// (0x0004efcd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x000534ab) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x000534ab) hc_cl_list_single_graphic_pane_g

0xb611,	// (0x0004efe1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb611,	// (0x0004efe1) hc_cl_list_single_graphic_pane_t1

0xb5f1,	// (0x0004efc1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb5f1,	// (0x0004efc1) hc_cl_list_double_graphic_heading_pane_g1

0xb626,	// (0x0004eff6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb626,	// (0x0004eff6) hc_cl_list_double_graphic_heading_pane_g2

0xb63a,	// (0x0004f00a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb63a,	// (0x0004f00a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x000534b0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x000534b0) hc_cl_list_double_graphic_heading_pane_g

0xb64e,	// (0x0004f01e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb64e,	// (0x0004f01e) hc_cl_list_double_graphic_heading_pane_t1

0xb663,	// (0x0004f033) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb663,	// (0x0004f033) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x000534b7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x000534b7) hc_cl_list_double_graphic_heading_pane_t

0xb678,	// (0x0004f048) vid4_progress_pane_g1

0xb687,	// (0x0004f057) vid4_progress_pane_g2

0xb696,	// (0x0004f066) vid4_progress_pane_g3

0xb6a5,	// (0x0004f075) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x000534bc) vid4_progress_pane_g

0xb6bd,	// (0x0004f08d) vid4_progress_pane_t1

0xb6d3,	// (0x0004f0a3) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x000534c7) vid4_progress_pane_t

0xb6fd,	// (0x0004f0cd) wait_bar_pane_cp07

0x2690,	// (0x00046060) blid_firmament_pane_ParamLimits

0x26d1,	// (0x000460a1) popup_blid_sat_info2_window_g1

0x26f5,	// (0x000460c5) popup_blid_sat_info2_window_t3

0x2703,	// (0x000460d3) popup_blid_sat_info2_window_t4

0x2711,	// (0x000460e1) popup_blid_sat_info2_window_t5

0x271f,	// (0x000460ef) popup_blid_sat_info2_window_t6

0x272f,	// (0x000460ff) popup_blid_sat_info2_window_t7

0x273d,	// (0x0004610d) popup_blid_sat_info2_window_t8

0x274b,	// (0x0004611b) popup_blid_sat_info2_window_t9

0x2759,	// (0x00046129) popup_blid_sat_info2_window_t10

0x2815,	// (0x000461e5) aid_firma_cardinal_ParamLimits

0x2829,	// (0x000461f9) blid_firmament_pane_t1_ParamLimits

0x2840,	// (0x00046210) blid_firmament_pane_t2_ParamLimits

0x2857,	// (0x00046227) blid_firmament_pane_t3_ParamLimits

0x286e,	// (0x0004623e) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x000530da) blid_firmament_pane_t_ParamLimits

0x2885,	// (0x00046255) blid_sat_info_pane_ParamLimits

0xf063,	// (0x00052a33) main_cam_set_pane_ParamLimits

0x9caa,	// (0x0004d67a) aid_size_cell_colour_35_ParamLimits

0x9cc1,	// (0x0004d691) aid_size_cell_colour_112_ParamLimits

0x9cd8,	// (0x0004d6a8) aid_size_cell_effect_ParamLimits

0xf063,	// (0x00052a33) bg_tb_trans_pane_cp02_ParamLimits

0xf071,	// (0x00052a41) heading_imed_pane_ParamLimits

0x9cf2,	// (0x0004d6c2) listscroll_imed_pane_ParamLimits

0x1a4c,	// (0x0004541c) popup_call2_audio_first_window_g5_ParamLimits

0x1a4c,	// (0x0004541c) popup_call2_audio_first_window_g5

0xa375,	// (0x0004dd45) aid_size_touch_image3_arrow_left_ParamLimits

0xa375,	// (0x0004dd45) aid_size_touch_image3_arrow_left

0xa389,	// (0x0004dd59) aid_size_touch_image3_arrow_right_ParamLimits

0xa389,	// (0x0004dd59) aid_size_touch_image3_arrow_right

0xb6e8,	// (0x0004f0b8) vid4_progress_pane_t3

0x9f56,	// (0x0004d926) main_hwr_training_symbol_option_pane_ParamLimits

0x9f56,	// (0x0004d926) main_hwr_training_symbol_option_pane

0x303d,	// (0x00046a0d) popup_hwr_training_preview_window_ParamLimits

0x303d,	// (0x00046a0d) popup_hwr_training_preview_window

0x9fb1,	// (0x0004d981) hwr_training_navi_pane_g5_ParamLimits

0x9fb1,	// (0x0004d981) hwr_training_navi_pane_g5

0x3296,	// (0x00046c66) popup_char_count_window

0xb09c,	// (0x0004ea6c) bg_popup_sub_pane_cp20_ParamLimits

0xb0aa,	// (0x0004ea7a) list_vitu2_match_list_pane_ParamLimits

0xb0b6,	// (0x0004ea86) vitu2_page_scroll_pane_ParamLimits

0xb0b6,	// (0x0004ea86) vitu2_page_scroll_pane

0x3875,	// (0x00047245) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3875,	// (0x00047245) list_single_hwr_training_symbol_option_pane

0x3888,	// (0x00047258) list_single_hwr_training_symbol_option_pane_g1

0x3890,	// (0x00047260) list_single_hwr_training_symbol_option_pane_t1

0x389e,	// (0x0004726e) bg_button_pane_cp023

0x38a7,	// (0x00047277) bg_button_pane_cp024

0xb70d,	// (0x0004f0dd) vitu2_page_scroll_pane_g1

0xb715,	// (0x0004f0e5) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x000534ce) vitu2_page_scroll_pane_g

0xb71d,	// (0x0004f0ed) vitu2_page_scroll_pane_t1

0x25f0,	// (0x00045fc0) popup_char_count_window_g1

0x38da,	// (0x000472aa) popup_char_count_window_g2

0x38e3,	// (0x000472b3) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x000534d3) popup_char_count_window_g

0x38ec,	// (0x000472bc) popup_char_count_window_t1

0xd9d1,	// (0x000513a1) main_vded2_pane

0x2d4c,	// (0x0004671c) aid_size_cell_imed_line

0x2d56,	// (0x00046726) grid_imed_line_width_pane

0xa788,	// (0x0004e158) vid4_indicators_pane_g4

0x38fa,	// (0x000472ca) cell_imed_line_width_pane_ParamLimits

0x38fa,	// (0x000472ca) cell_imed_line_width_pane

0x390c,	// (0x000472dc) cell_imed_line_width_pane_g1

0x3915,	// (0x000472e5) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x000534da) cell_imed_line_width_pane_g

0xb72c,	// (0x0004f0fc) main_vded2_pane_g1_ParamLimits

0xb72c,	// (0x0004f0fc) main_vded2_pane_g1

0xb739,	// (0x0004f109) main_vded2_pane_g2_ParamLimits

0xb739,	// (0x0004f109) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x000534df) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x000534df) main_vded2_pane_g

0xb745,	// (0x0004f115) vded2_slider_pane_ParamLimits

0xb745,	// (0x0004f115) vded2_slider_pane

0xb752,	// (0x0004f122) aid_size_touch_vded2_end

0xb75a,	// (0x0004f12a) aid_size_touch_vded2_playhead

0xb762,	// (0x0004f132) aid_size_touch_vded2_start

0xb76a,	// (0x0004f13a) vded2_slider_bg_pane

0xb773,	// (0x0004f143) vded2_slider_pane_g1

0xb77c,	// (0x0004f14c) vded2_slider_pane_g2

0xb784,	// (0x0004f154) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x000534e4) vded2_slider_pane_g

0xb78d,	// (0x0004f15d) vded2_slider_bg_pane_g1

0xb796,	// (0x0004f166) vded2_slider_bg_pane_g2

0xb79f,	// (0x0004f16f) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x000534eb) vded2_slider_bg_pane_g

0x8334,	// (0x0004bd04) aid_postcard_touch_down_pane_ParamLimits

0x8334,	// (0x0004bd04) aid_postcard_touch_down_pane

0x8340,	// (0x0004bd10) aid_postcard_touch_up_pane_ParamLimits

0x8340,	// (0x0004bd10) aid_postcard_touch_up_pane

0xd9d1,	// (0x000513a1) main_blid2_pane

0x2468,	// (0x00045e38) popup_blid2_search_window

0xd9d1,	// (0x000513a1) blid2_gps_pane

0xd9d1,	// (0x000513a1) blid2_navig_pane

0xd9d1,	// (0x000513a1) blid2_search_pane

0xd9d1,	// (0x000513a1) blid2_tripm_pane

0xb7a8,	// (0x0004f178) blid2_search_pane_g1_ParamLimits

0xb7a8,	// (0x0004f178) blid2_search_pane_g1

0xb7b4,	// (0x0004f184) blid2_search_pane_t1_ParamLimits

0xb7b4,	// (0x0004f184) blid2_search_pane_t1

0xb7c6,	// (0x0004f196) aid_size_cell_blid2_gps_ParamLimits

0xb7c6,	// (0x0004f196) aid_size_cell_blid2_gps

0xb7d6,	// (0x0004f1a6) blid2_gps_pane_g1_ParamLimits

0xb7d6,	// (0x0004f1a6) blid2_gps_pane_g1

0xb7e2,	// (0x0004f1b2) grid_blid2_satellite_pane_ParamLimits

0xb7e2,	// (0x0004f1b2) grid_blid2_satellite_pane

0xb7ee,	// (0x0004f1be) blid2_navig_pane_g1_ParamLimits

0xb7ee,	// (0x0004f1be) blid2_navig_pane_g1

0xb7fa,	// (0x0004f1ca) blid2_navig_pane_t1_ParamLimits

0xb7fa,	// (0x0004f1ca) blid2_navig_pane_t1

0xb80c,	// (0x0004f1dc) blid2_navig_pane_t2_ParamLimits

0xb80c,	// (0x0004f1dc) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x000534f2) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x000534f2) blid2_navig_pane_t

0xb81e,	// (0x0004f1ee) blid2_navig_ring_pane_ParamLimits

0xb81e,	// (0x0004f1ee) blid2_navig_ring_pane

0xb82a,	// (0x0004f1fa) blid2_speed_pane_ParamLimits

0xb82a,	// (0x0004f1fa) blid2_speed_pane

0xb836,	// (0x0004f206) blid2_tripm_pane_g1_ParamLimits

0xb836,	// (0x0004f206) blid2_tripm_pane_g1

0xb842,	// (0x0004f212) blid2_tripm_pane_g2_ParamLimits

0xb842,	// (0x0004f212) blid2_tripm_pane_g2

0xb84e,	// (0x0004f21e) blid2_tripm_pane_g3_ParamLimits

0xb84e,	// (0x0004f21e) blid2_tripm_pane_g3

0xb85a,	// (0x0004f22a) blid2_tripm_pane_g4_ParamLimits

0xb85a,	// (0x0004f22a) blid2_tripm_pane_g4

0xb866,	// (0x0004f236) blid2_tripm_pane_g5_ParamLimits

0xb866,	// (0x0004f236) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x000534f7) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x000534f7) blid2_tripm_pane_g

0xb87e,	// (0x0004f24e) blid2_tripm_pane_t1_ParamLimits

0xb87e,	// (0x0004f24e) blid2_tripm_pane_t1

0xb890,	// (0x0004f260) blid2_tripm_pane_t2_ParamLimits

0xb890,	// (0x0004f260) blid2_tripm_pane_t2

0xb8a2,	// (0x0004f272) blid2_tripm_pane_t3_ParamLimits

0xb8a2,	// (0x0004f272) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x00053504) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x00053504) blid2_tripm_pane_t

0xb8d2,	// (0x0004f2a2) cell_blid2_satellite_pane_ParamLimits

0xb8d2,	// (0x0004f2a2) cell_blid2_satellite_pane

0xb8ea,	// (0x0004f2ba) cell_blid2_satellite_pane_g1

0x391d,	// (0x000472ed) cell_blid2_satellite_pane_t1

0x2895,	// (0x00046265) blid2_speed_pane_g1

0x392b,	// (0x000472fb) blid2_speed_pane_t1

0x3939,	// (0x00047309) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x0005350d) blid2_speed_pane_t

0x2895,	// (0x00046265) blid2_navig_ring_pane_g1

0xb8f3,	// (0x0004f2c3) blid2_navig_ring_pane_g2

0xb8fb,	// (0x0004f2cb) blid2_navig_ring_pane_g3

0xb903,	// (0x0004f2d3) blid2_navig_ring_pane_g4

0xb90b,	// (0x0004f2db) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x00053512) blid2_navig_ring_pane_g

0xd9d1,	// (0x000513a1) bg_popup_window_pane_cp011

0x3947,	// (0x00047317) popup_blid2_search_window_g1

0x394f,	// (0x0004731f) popup_blid2_search_window_t1

0x395d,	// (0x0004732d) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x0005351d) popup_blid2_search_window_t

0xe475,	// (0x00051e45) main_browser_pane_g1

0xe157,	// (0x00051b27) main_browser_pane_ParamLimits

0xa759,	// (0x0004e129) bg_button_pane_cp011_ParamLimits

0xa9bc,	// (0x0004e38c) cell_vitu2_function_pane_g1_ParamLimits

0x245a,	// (0x00045e2a) bg_popup_sub_pane_cp22_ParamLimits

0xb24c,	// (0x0004ec1c) input_focus_pane_cp08_ParamLimits

0xb263,	// (0x0004ec33) popup_vitu2_query_button_pane_ParamLimits

0xb263,	// (0x0004ec33) popup_vitu2_query_button_pane

0xb274,	// (0x0004ec44) popup_vitu2_query_input_button_pane

0x353f,	// (0x00046f0f) popup_vitu2_query_window_g1_ParamLimits

0xb27c,	// (0x0004ec4c) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x0005341e) popup_vitu2_query_window_g_ParamLimits

0xd9d1,	// (0x000513a1) bg_button_pane_cp026

0xb913,	// (0x0004f2e3) popup_vitu2_query_input_button_pane_g1

0xd9d1,	// (0x000513a1) bg_button_pane_cp025

0x396b,	// (0x0004733b) popup_vitu2_query_button_pane_t1

0x92e5,	// (0x0004ccb5) main_mp3_pane_t6

0x92f3,	// (0x0004ccc3) popup_slider_window_cp01

0xa6ad,	// (0x0004e07d) cam4_battery_pane

0xa6ad,	// (0x0004e07d) cam4_battery_pane_cp02

0xa6ad,	// (0x0004e07d) cam4_battery_pane_cp01

0xa6ad,	// (0x0004e07d) cam4_battery_pane_cp03

0x3979,	// (0x00047349) cam4_battery_pane_g1

0x2895,	// (0x00046265) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x00053522) cam4_battery_pane_g

0x2767,	// (0x00046137) popup_blid_sat_info2_window_t11

0x7d88,	// (0x0004b758) aid_size_touch_mv_arrow_left_ParamLimits

0xebad,	// (0x0005257d) aid_size_touch_mv_arrow_right_ParamLimits

0xebe5,	// (0x000525b5) navi_pane_g1_ParamLimits

0xebf1,	// (0x000525c1) navi_pane_g2_ParamLimits

0x7da1,	// (0x0004b771) navi_pane_g3_ParamLimits

0xf409,	// (0x00052dd9) navi_pane_g_ParamLimits

0x7dc6,	// (0x0004b796) navi_pane_mv_t1_ParamLimits

0x9cfe,	// (0x0004d6ce) grid_imed_effect_pane_ParamLimits

0x6e37,	// (0x0004a807) aid_placing_vt_slider_lsc

0xe3b7,	// (0x00051d87) aid_placing_vt_slider_prt

0xf063,	// (0x00052a33) bg_tb_trans_pane_cp01_ParamLimits

0x29e4,	// (0x000463b4) popup_image_details_window_g1_ParamLimits

0x29f7,	// (0x000463c7) popup_image_details_window_g2_ParamLimits

0x2a0c,	// (0x000463dc) popup_image_details_window_g3_ParamLimits

0x2a0c,	// (0x000463dc) popup_image_details_window_g3

0xf74f,	// (0x0005311f) popup_image_details_window_g_ParamLimits

0x2a20,	// (0x000463f0) popup_image_details_window_t1_ParamLimits

0x2a32,	// (0x00046402) popup_image_details_window_t2_ParamLimits

0x2a4b,	// (0x0004641b) popup_image_details_window_t3_ParamLimits

0x2a5f,	// (0x0004642f) popup_image_details_window_t4_ParamLimits

0x2a7a,	// (0x0004644a) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x00053126) popup_image_details_window_t_ParamLimits

0xb5a4,	// (0x0004ef74) cl_header_name_pane_ParamLimits

0xb5a4,	// (0x0004ef74) cl_header_name_pane

0xb91b,	// (0x0004f2eb) cl_header_name_pane_t1_ParamLimits

0xb91b,	// (0x0004f2eb) cl_header_name_pane_t1

0xb932,	// (0x0004f302) cl_header_name_pane_t2_ParamLimits

0xb932,	// (0x0004f302) cl_header_name_pane_t2

0xb95c,	// (0x0004f32c) cl_header_name_pane_t3_ParamLimits

0xb95c,	// (0x0004f32c) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x00053527) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x00053527) cl_header_name_pane_t

0xec73,	// (0x00052643) navi_pane_mv_g2_ParamLimits

0x3237,	// (0x00046c07) field_vitu2_entry_pane_g1_ParamLimits

0x3243,	// (0x00046c13) field_vitu2_entry_pane_g2_ParamLimits

0x324f,	// (0x00046c1f) field_vitu2_entry_pane_g3_ParamLimits

0x324f,	// (0x00046c1f) field_vitu2_entry_pane_g3

0xf94d,	// (0x0005331d) field_vitu2_entry_pane_g_ParamLimits

0xa94c,	// (0x0004e31c) cell_vitu2_itu_pane_g1_ParamLimits

0xa95c,	// (0x0004e32c) cell_vitu2_itu_pane_g2_ParamLimits

0xa95c,	// (0x0004e32c) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x00053329) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x00053329) cell_vitu2_itu_pane_g

0xa759,	// (0x0004e129) bg_vkb2_func_pane_cp05_ParamLimits

0xa759,	// (0x0004e129) bg_vkb2_func_pane_cp05

0xa759,	// (0x0004e129) bg_vkb2_func_pane_cp03

0xa759,	// (0x0004e129) bg_vkb2_func_pane_cp04

0xa759,	// (0x0004e129) bg_vkb2_func_pane_cp10_ParamLimits

0xa759,	// (0x0004e129) bg_vkb2_func_pane_cp10

0xb54a,	// (0x0004ef1a) bg_vkb2_func_pane_cp08

0xb531,	// (0x0004ef01) bg_vkb2_func_pane_cp06

0xb53e,	// (0x0004ef0e) bg_vkb2_func_pane_cp07

0x38b0,	// (0x00047280) bg_vkb2_func_pane_cp11_ParamLimits

0x38b0,	// (0x00047280) bg_vkb2_func_pane_cp11

0x38c5,	// (0x00047295) bg_vkb2_func_pane_cp12_ParamLimits

0x38c5,	// (0x00047295) bg_vkb2_func_pane_cp12

0xd9d1,	// (0x000513a1) bg_vkb2_func_pane_cp09

0x32a8,	// (0x00046c78) bg_vkb2_func_pane_g1

0xe586,	// (0x00051f56) bg_vkb2_func_pane_g2

0x32b0,	// (0x00046c80) bg_vkb2_func_pane_g3

0x32b8,	// (0x00046c88) bg_vkb2_func_pane_g4

0x3502,	// (0x00046ed2) bg_vkb2_func_pane_g5

0x32d0,	// (0x00046ca0) bg_vkb2_func_pane_g6

0x32d8,	// (0x00046ca8) bg_vkb2_func_pane_g7

0x32c8,	// (0x00046c98) bg_vkb2_func_pane_g8

0xe566,	// (0x00051f36) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x0005352e) bg_vkb2_func_pane_g

0xb872,	// (0x0004f242) blid2_tripm_pane_g6_ParamLimits

0xb872,	// (0x0004f242) blid2_tripm_pane_g6

0x30fb,	// (0x00046acb) mp4_progress_pane_g1

0xb8c6,	// (0x0004f296) blid2_tripm_values_pane_ParamLimits

0xb8c6,	// (0x0004f296) blid2_tripm_values_pane

0xb981,	// (0x0004f351) blid2_tripm_values_pane_t1

0xb98f,	// (0x0004f35f) blid2_tripm_values_pane_t2

0xb99d,	// (0x0004f36d) blid2_tripm_values_pane_t3

0xb9ab,	// (0x0004f37b) blid2_tripm_values_pane_t4

0xb9b9,	// (0x0004f389) blid2_tripm_values_pane_t5

0xb9c7,	// (0x0004f397) blid2_tripm_values_pane_t6

0xb9d5,	// (0x0004f3a5) blid2_tripm_values_pane_t7

0xb9e3,	// (0x0004f3b3) blid2_tripm_values_pane_t8

0xb9f1,	// (0x0004f3c1) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x00053541) blid2_tripm_values_pane_t

0x6e71,	// (0x0004a841) call_video_pane_t1_ParamLimits

0x6e8e,	// (0x0004a85e) call_video_pane_t2_ParamLimits

0xf292,	// (0x00052c62) call_video_pane_t_ParamLimits

0x823d,	// (0x0004bc0d) msg_header_pane_g1_ParamLimits

0xee4f,	// (0x0005281f) msg_header_pane_g2_ParamLimits

0xee4f,	// (0x0005281f) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00052e7c) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00052e7c) msg_header_pane_g

0xe157,	// (0x00051b27) main_clock2_pane_ParamLimits

0x9abc,	// (0x0004d48c) grid_clock2_toolbar_pane_ParamLimits

0x9abc,	// (0x0004d48c) grid_clock2_toolbar_pane

0x9abc,	// (0x0004d48c) listscroll_clock2_pane_ParamLimits

0x9abc,	// (0x0004d48c) listscroll_clock2_pane

0x9b61,	// (0x0004d531) main_clock2_pane_t3_ParamLimits

0x9b61,	// (0x0004d531) main_clock2_pane_t3

0x9b73,	// (0x0004d543) main_clock2_pane_t4_ParamLimits

0x9b73,	// (0x0004d543) main_clock2_pane_t4

0x3983,	// (0x00047353) cell_clock2_toolbar_pane

0x398b,	// (0x0004735b) cell_clock2_toolbar_pane_cp01

0x398b,	// (0x0004735b) cell_clock2_toolbar_pane_cp02

0x3993,	// (0x00047363) cell_clock2_toolbar_pane_cp03

0x399b,	// (0x0004736b) list_clock2_pane

0xeb15,	// (0x000524e5) scroll_pane_cp10

0x39a3,	// (0x00047373) list_single_clock2_pane_ParamLimits

0x39a3,	// (0x00047373) list_single_clock2_pane

0xecd4,	// (0x000526a4) list_highlight_pane_cp08

0x39b0,	// (0x00047380) list_single_clock2_pane_t1

0x39be,	// (0x0004738e) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x00053554) list_single_clock2_pane_t

0xd9d1,	// (0x000513a1) bg_button_pane_cp10

0x39cc,	// (0x0004739c) cell_clock2_toolbar_pane_g1

0x829e,	// (0x0004bc6e) aid_main_viewer_pane_g1_ParamLimits

0x829e,	// (0x0004bc6e) aid_main_viewer_pane_g1

0x82aa,	// (0x0004bc7a) aid_main_viewer_pane_g2_ParamLimits

0x82aa,	// (0x0004bc7a) aid_main_viewer_pane_g2

0x82b6,	// (0x0004bc86) aid_main_viewer_pane_g3_ParamLimits

0x82b6,	// (0x0004bc86) aid_main_viewer_pane_g3

0x82c5,	// (0x0004bc95) aid_main_viewer_pane_g4_ParamLimits

0x82c5,	// (0x0004bc95) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00052e8d) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00052e8d) aid_main_viewer_pane_g

0x3210,	// (0x00046be0) main_calc_pane_ParamLimits

0x894c,	// (0x0004c31c) main_dialer2_pane_ParamLimits

0xd9d1,	// (0x000513a1) main_cam6_pane

0xd9d1,	// (0x000513a1) main_vid6_pane

0x9ac8,	// (0x0004d498) listscroll_gen_pane_cp06_ParamLimits

0x9ac8,	// (0x0004d498) listscroll_gen_pane_cp06

0x9b85,	// (0x0004d555) main_clock2_pane_t5_ParamLimits

0x9b85,	// (0x0004d555) main_clock2_pane_t5

0x9bcc,	// (0x0004d59c) aid_call2_pane_cp10_ParamLimits

0x9bd8,	// (0x0004d5a8) aid_call_pane_cp10_ParamLimits

0xeba1,	// (0x00052571) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeba1,	// (0x00052571) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9be4,	// (0x0004d5b4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9be4,	// (0x0004d5b4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeba1,	// (0x00052571) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x000531d6) popup_clock_analogue_window_cp10_g_ParamLimits

0x9bf0,	// (0x0004d5c0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x315b,	// (0x00046b2b) cell_dialer2_keypad_pane_g2_ParamLimits

0x315b,	// (0x00046b2b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x000532bc) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x000532bc) cell_dialer2_keypad_pane_g

0xa33e,	// (0x0004dd0e) cell_dialer2_keypad_pane_t1

0xac49,	// (0x0004e619) main_cset_text2_pane_ParamLimits

0xac49,	// (0x0004e619) main_cset_text2_pane

0x3719,	// (0x000470e9) area_vitu2_query_pane_g1_ParamLimits

0xb4d6,	// (0x0004eea6) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x00053471) area_vitu2_query_pane_g_ParamLimits

0x379d,	// (0x0004716d) area_vitu2_query_pane_t7_ParamLimits

0x379d,	// (0x0004716d) area_vitu2_query_pane_t7

0xb531,	// (0x0004ef01) bg_button_pane_cp018_ParamLimits

0xb53e,	// (0x0004ef0e) bg_button_pane_cp021_ParamLimits

0xb54a,	// (0x0004ef1a) bg_button_pane_cp022_ParamLimits

0xb54a,	// (0x0004ef1a) bg_vkb2_func_pane_cp08_ParamLimits

0xb531,	// (0x0004ef01) bg_vkb2_func_pane_cp06_ParamLimits

0xb53e,	// (0x0004ef0e) bg_vkb2_func_pane_cp07_ParamLimits

0xb559,	// (0x0004ef29) input_focus_pane_cp09_ParamLimits

0xb9ff,	// (0x0004f3cf) cam6_autofocus_pane_ParamLimits

0xb9ff,	// (0x0004f3cf) cam6_autofocus_pane

0xba1b,	// (0x0004f3eb) cam6_image_uncrop_pane_ParamLimits

0xba1b,	// (0x0004f3eb) cam6_image_uncrop_pane

0xba3e,	// (0x0004f40e) cam6_indi_pane_ParamLimits

0xba3e,	// (0x0004f40e) cam6_indi_pane

0xba58,	// (0x0004f428) cam6_mode_pane_ParamLimits

0xba58,	// (0x0004f428) cam6_mode_pane

0xba6c,	// (0x0004f43c) cam6_timer_pane_ParamLimits

0xba6c,	// (0x0004f43c) cam6_timer_pane

0xba78,	// (0x0004f448) cam6_zoom_pane_ParamLimits

0xba78,	// (0x0004f448) cam6_zoom_pane

0xba8e,	// (0x0004f45e) cam6_mode_pane_g1_ParamLimits

0xba8e,	// (0x0004f45e) cam6_mode_pane_g1

0xba9a,	// (0x0004f46a) cam6_mode_pane_g2_ParamLimits

0xba9a,	// (0x0004f46a) cam6_mode_pane_g2

0xbaa6,	// (0x0004f476) cam6_mode_pane_g3_ParamLimits

0xbaa6,	// (0x0004f476) cam6_mode_pane_g3

0xbab2,	// (0x0004f482) cam6_mode_pane_g4_ParamLimits

0xbab2,	// (0x0004f482) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x00053559) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x00053559) cam6_mode_pane_g

0x39d4,	// (0x000473a4) bg_tb_trans_pane_cp08_ParamLimits

0x39d4,	// (0x000473a4) bg_tb_trans_pane_cp08

0x39e2,	// (0x000473b2) cam6_battery_pane_ParamLimits

0x39e2,	// (0x000473b2) cam6_battery_pane

0x39f8,	// (0x000473c8) cam6_indi_pane_g1_ParamLimits

0x39f8,	// (0x000473c8) cam6_indi_pane_g1

0x3a0a,	// (0x000473da) cam6_indi_pane_g2_ParamLimits

0x3a0a,	// (0x000473da) cam6_indi_pane_g2

0x3a1c,	// (0x000473ec) cam6_indi_pane_g3_ParamLimits

0x3a1c,	// (0x000473ec) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x00053562) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x00053562) cam6_indi_pane_g

0x3a2e,	// (0x000473fe) cam6_indi_pane_t1_ParamLimits

0x3a2e,	// (0x000473fe) cam6_indi_pane_t1

0xa7c6,	// (0x0004e196) cam6_autofocus_pane_g1

0xa7be,	// (0x0004e18e) cam6_autofocus_pane_g2

0xa7d6,	// (0x0004e1a6) cam6_autofocus_pane_g3

0xa7ce,	// (0x0004e19e) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x00053569) cam6_autofocus_pane_g

0x3a54,	// (0x00047424) cam6_timer_pane_g1

0x3a5c,	// (0x0004742c) cam6_timer_pane_t1

0x3a6a,	// (0x0004743a) cam6_zoom_cont_pane

0x3a72,	// (0x00047442) cam6_zoom_pane_g1

0x3a7a,	// (0x0004744a) cam6_zoom_pane_g2

0xbabe,	// (0x0004f48e) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x00053572) cam6_zoom_pane_g

0x2895,	// (0x00046265) cam6_battery_pane_g1

0x2895,	// (0x00046265) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x000530e3) cam6_battery_pane_g

0x3a82,	// (0x00047452) cam6_zoom_cont_pane_g1

0x3a8b,	// (0x0004745b) cam6_zoom_cont_pane_g2

0x3a94,	// (0x00047464) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x00053579) cam6_zoom_cont_pane_g

0xbadb,	// (0x0004f4ab) cam6_mode_pane_cp_ParamLimits

0xbadb,	// (0x0004f4ab) cam6_mode_pane_cp

0xbaef,	// (0x0004f4bf) cam6_zoom_pane_cp_ParamLimits

0xbaef,	// (0x0004f4bf) cam6_zoom_pane_cp

0xbb05,	// (0x0004f4d5) vid6_image_uncrop_cif_pane_ParamLimits

0xbb05,	// (0x0004f4d5) vid6_image_uncrop_cif_pane

0xbb27,	// (0x0004f4f7) vid6_image_uncrop_nhd_pane_ParamLimits

0xbb27,	// (0x0004f4f7) vid6_image_uncrop_nhd_pane

0xbb3e,	// (0x0004f50e) vid6_image_uncrop_vga_pane_ParamLimits

0xbb3e,	// (0x0004f50e) vid6_image_uncrop_vga_pane

0xbb55,	// (0x0004f525) vid6_image_uncrop_wvga_pane_ParamLimits

0xbb55,	// (0x0004f525) vid6_image_uncrop_wvga_pane

0xbb6c,	// (0x0004f53c) vid6_indi_pane_ParamLimits

0xbb6c,	// (0x0004f53c) vid6_indi_pane

0x39d4,	// (0x000473a4) bg_tb_trans_pane_cp09_ParamLimits

0x39d4,	// (0x000473a4) bg_tb_trans_pane_cp09

0x3aa8,	// (0x00047478) cam6_battery_pane_cp_ParamLimits

0x3aa8,	// (0x00047478) cam6_battery_pane_cp

0x3ab4,	// (0x00047484) vid6_indi_pane_g1_ParamLimits

0x3ab4,	// (0x00047484) vid6_indi_pane_g1

0x3ac6,	// (0x00047496) vid6_indi_pane_g2_ParamLimits

0x3ac6,	// (0x00047496) vid6_indi_pane_g2

0x3ad8,	// (0x000474a8) vid6_indi_pane_g3_ParamLimits

0x3ad8,	// (0x000474a8) vid6_indi_pane_g3

0x3aed,	// (0x000474bd) vid6_indi_pane_g4_ParamLimits

0x3aed,	// (0x000474bd) vid6_indi_pane_g4

0x3b02,	// (0x000474d2) vid6_indi_pane_g5_ParamLimits

0x3b02,	// (0x000474d2) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x00053580) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x00053580) vid6_indi_pane_g

0x3b1c,	// (0x000474ec) vid6_indi_pane_t1_ParamLimits

0x3b1c,	// (0x000474ec) vid6_indi_pane_t1

0x3b32,	// (0x00047502) vid6_indi_pane_t2_ParamLimits

0x3b32,	// (0x00047502) vid6_indi_pane_t2

0x3b5a,	// (0x0004752a) vid6_indi_pane_t3_ParamLimits

0x3b5a,	// (0x0004752a) vid6_indi_pane_t3

0x3b82,	// (0x00047552) vid6_indi_pane_t4_ParamLimits

0x3b82,	// (0x00047552) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x0005358b) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x0005358b) vid6_indi_pane_t

0x3ba6,	// (0x00047576) wait_bar_pane_cp08

0xbb8c,	// (0x0004f55c) main_cset_text2_pane_t1_ParamLimits

0xbb8c,	// (0x0004f55c) main_cset_text2_pane_t1

0xbac6,	// (0x0004f496) listscroll_gen_pane_cp06_t1_ParamLimits

0xbac6,	// (0x0004f496) listscroll_gen_pane_cp06_t1

0xd9d1,	// (0x000513a1) main_cam6_set_pane

0xa69f,	// (0x0004e06f) bg_tb_trans_pane_cp06_ParamLimits

0xa6b5,	// (0x0004e085) cam4_indicators_pane_g1_ParamLimits

0xa6c5,	// (0x0004e095) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x000532f9) cam4_indicators_pane_g_ParamLimits

0xa6e5,	// (0x0004e0b5) cam4_indicators_pane_t1_ParamLimits

0xa759,	// (0x0004e129) bg_tb_trans_pane_cp07_ParamLimits

0xa6b5,	// (0x0004e085) vid4_indicators_pane_g1_ParamLimits

0xa767,	// (0x0004e137) vid4_indicators_pane_g2_ParamLimits

0xa777,	// (0x0004e147) vid4_indicators_pane_g3_ParamLimits

0xa788,	// (0x0004e158) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x0005330b) vid4_indicators_pane_g_ParamLimits

0xa7a4,	// (0x0004e174) vid4_indicators_pane_t1_ParamLimits

0xb678,	// (0x0004f048) vid4_progress_pane_g1_ParamLimits

0xb687,	// (0x0004f057) vid4_progress_pane_g2_ParamLimits

0xb696,	// (0x0004f066) vid4_progress_pane_g3_ParamLimits

0xb6a5,	// (0x0004f075) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x000534bc) vid4_progress_pane_g_ParamLimits

0xb6bd,	// (0x0004f08d) vid4_progress_pane_t1_ParamLimits

0xb6d3,	// (0x0004f0a3) vid4_progress_pane_t2_ParamLimits

0xb6e8,	// (0x0004f0b8) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x000534c7) vid4_progress_pane_t_ParamLimits

0xb6fd,	// (0x0004f0cd) wait_bar_pane_cp07_ParamLimits

0xbba8,	// (0x0004f578) main_cam6_set_pane_g2_ParamLimits

0xbba8,	// (0x0004f578) main_cam6_set_pane_g2

0xbbb4,	// (0x0004f584) main_cset6_listscroll_pane_ParamLimits

0xbbb4,	// (0x0004f584) main_cset6_listscroll_pane

0xbbdd,	// (0x0004f5ad) main_cset6_slider_pane_ParamLimits

0xbbdd,	// (0x0004f5ad) main_cset6_slider_pane

0xbbe9,	// (0x0004f5b9) main_cset6_text2_pane_ParamLimits

0xbbe9,	// (0x0004f5b9) main_cset6_text2_pane

0x3bb6,	// (0x00047586) main_cset6_text_pane

0x339e,	// (0x00046d6e) main_cset_list_pane_copy1_ParamLimits

0x339e,	// (0x00046d6e) main_cset_list_pane_copy1

0x33ae,	// (0x00046d7e) scroll_pane_cp028_copy1

0xbbfc,	// (0x0004f5cc) cset_list_set_pane_copy1

0xaf04,	// (0x0004e8d4) aid_position_infowindow_above_copy1

0xaf0c,	// (0x0004e8dc) aid_position_infowindow_below_copy1

0xbc0b,	// (0x0004f5db) cset_list_set_pane_g1_copy1

0xbc13,	// (0x0004f5e3) cset_list_set_pane_g3_copy1_ParamLimits

0xbc13,	// (0x0004f5e3) cset_list_set_pane_g3_copy1

0xbc22,	// (0x0004f5f2) cset_list_set_pane_t1_copy1_ParamLimits

0xbc22,	// (0x0004f5f2) cset_list_set_pane_t1_copy1

0xf063,	// (0x00052a33) list_highlight_pane_cp021_copy1_ParamLimits

0xf063,	// (0x00052a33) list_highlight_pane_cp021_copy1

0x3bbe,	// (0x0004758e) cset6_slider_pane_ParamLimits

0x3bbe,	// (0x0004758e) cset6_slider_pane

0x3bea,	// (0x000475ba) main_cset6_slider_pane_g1_ParamLimits

0x3bea,	// (0x000475ba) main_cset6_slider_pane_g1

0xbc37,	// (0x0004f607) main_cset6_slider_pane_g2_ParamLimits

0xbc37,	// (0x0004f607) main_cset6_slider_pane_g2

0x33c3,	// (0x00046d93) main_cset6_slider_pane_g3_ParamLimits

0x33c3,	// (0x00046d93) main_cset6_slider_pane_g3

0xbc5f,	// (0x0004f62f) main_cset6_slider_pane_g4_ParamLimits

0xbc5f,	// (0x0004f62f) main_cset6_slider_pane_g4

0xbc6b,	// (0x0004f63b) main_cset6_slider_pane_g5_ParamLimits

0xbc6b,	// (0x0004f63b) main_cset6_slider_pane_g5

0x33c3,	// (0x00046d93) main_cset6_slider_pane_g7_ParamLimits

0x33c3,	// (0x00046d93) main_cset6_slider_pane_g7

0x33cf,	// (0x00046d9f) main_cset6_slider_pane_g8_ParamLimits

0x33cf,	// (0x00046d9f) main_cset6_slider_pane_g8

0xbc77,	// (0x0004f647) main_cset6_slider_pane_g9_ParamLimits

0xbc77,	// (0x0004f647) main_cset6_slider_pane_g9

0xbc83,	// (0x0004f653) main_cset6_slider_pane_g10_ParamLimits

0xbc83,	// (0x0004f653) main_cset6_slider_pane_g10

0xbc5f,	// (0x0004f62f) main_cset6_slider_pane_g11_ParamLimits

0xbc5f,	// (0x0004f62f) main_cset6_slider_pane_g11

0xbc8f,	// (0x0004f65f) main_cset6_slider_pane_g12_ParamLimits

0xbc8f,	// (0x0004f65f) main_cset6_slider_pane_g12

0xbc9b,	// (0x0004f66b) main_cset6_slider_pane_g13_ParamLimits

0xbc9b,	// (0x0004f66b) main_cset6_slider_pane_g13

0xbca7,	// (0x0004f677) main_cset6_slider_pane_g14_ParamLimits

0xbca7,	// (0x0004f677) main_cset6_slider_pane_g14

0xbcb3,	// (0x0004f683) main_cset6_slider_pane_g15_ParamLimits

0xbcb3,	// (0x0004f683) main_cset6_slider_pane_g15

0xbc6b,	// (0x0004f63b) main_cset6_slider_pane_g16_ParamLimits

0xbc6b,	// (0x0004f63b) main_cset6_slider_pane_g16

0xbccb,	// (0x0004f69b) main_cset6_slider_pane_g17_ParamLimits

0xbccb,	// (0x0004f69b) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x00053594) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x00053594) main_cset6_slider_pane_g

0x3c12,	// (0x000475e2) main_cset6_slider_pane_t1_ParamLimits

0x3c12,	// (0x000475e2) main_cset6_slider_pane_t1

0xbcd7,	// (0x0004f6a7) main_cset6_slider_pane_t2_ParamLimits

0xbcd7,	// (0x0004f6a7) main_cset6_slider_pane_t2

0x3c53,	// (0x00047623) main_cset6_slider_pane_t3_ParamLimits

0x3c53,	// (0x00047623) main_cset6_slider_pane_t3

0xbd02,	// (0x0004f6d2) main_cset6_slider_pane_t4_ParamLimits

0xbd02,	// (0x0004f6d2) main_cset6_slider_pane_t4

0x3c7e,	// (0x0004764e) main_cset6_slider_pane_t5_ParamLimits

0x3c7e,	// (0x0004764e) main_cset6_slider_pane_t5

0x3ca9,	// (0x00047679) main_cset6_slider_pane_t7_ParamLimits

0x3ca9,	// (0x00047679) main_cset6_slider_pane_t7

0xbd2d,	// (0x0004f6fd) main_cset6_slider_pane_t8_ParamLimits

0xbd2d,	// (0x0004f6fd) main_cset6_slider_pane_t8

0xbd51,	// (0x0004f721) main_cset6_slider_pane_t9_ParamLimits

0xbd51,	// (0x0004f721) main_cset6_slider_pane_t9

0xbd75,	// (0x0004f745) main_cset6_slider_pane_t10_ParamLimits

0xbd75,	// (0x0004f745) main_cset6_slider_pane_t10

0xbd99,	// (0x0004f769) main_cset6_slider_pane_t11_ParamLimits

0xbd99,	// (0x0004f769) main_cset6_slider_pane_t11

0x3cdf,	// (0x000476af) main_cset6_slider_pane_t14_ParamLimits

0x3cdf,	// (0x000476af) main_cset6_slider_pane_t14

0x3d18,	// (0x000476e8) main_cset6_slider_pane_t15_ParamLimits

0x3d18,	// (0x000476e8) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x000535b9) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x000535b9) main_cset6_slider_pane_t

0x34a8,	// (0x00046e78) cset_slider_pane_g1_copy1

0x34b1,	// (0x00046e81) cset_slider_pane_g2_copy1

0x34ba,	// (0x00046e8a) cset_slider_pane_g3_copy1

0xd9d1,	// (0x000513a1) bg_popup_sub_pane_cp011_copy1

0x354b,	// (0x00046f1b) main_cset_text_pane_g1_copy1

0x3553,	// (0x00046f23) main_cset_text_pane_t1_copy1

0x3561,	// (0x00046f31) main_cset_text_pane_t2_copy1

0x356f,	// (0x00046f3f) main_cset_text_pane_t3_copy1

0x357d,	// (0x00046f4d) main_cset_text_pane_t4_copy1

0x358b,	// (0x00046f5b) main_cset_text_pane_t5_copy1

0x3599,	// (0x00046f69) main_cset_text_pane_t6_copy1

0x35a7,	// (0x00046f77) main_cset_text_pane_t7_copy1

0xbdbd,	// (0x0004f78d) main_cset_text2_pane_t1_copy1

0xd9d1,	// (0x000513a1) main_ncimui_pane

0x8987,	// (0x0004c357) popup_query_ncimui_window_ParamLimits

0x8987,	// (0x0004c357) popup_query_ncimui_window

0x2b65,	// (0x00046535) field_cale_ev2_pane_g4_ParamLimits

0x2b65,	// (0x00046535) field_cale_ev2_pane_g4

0xa072,	// (0x0004da42) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa072,	// (0x0004da42) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x00053297) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x00053297) cell_video_dialer_keypad_pane_g

0xa08a,	// (0x0004da5a) cell_video_dialer_keypad_pane_t1

0xd9d1,	// (0x000513a1) bg_popup_window_pane_cp012

0xe9ee,	// (0x000523be) heading_pane_cp06

0x3e46,	// (0x00047816) ncim_query_content_pane

0xd9d1,	// (0x000513a1) bg_popup_heading_pane_cp01

0x3e4e,	// (0x0004781e) ncim_heading_pane_t1

0x3e5c,	// (0x0004782c) ncim_indicator_popup_pane

0x3e6e,	// (0x0004783e) ncim_query_button_pane

0x3e82,	// (0x00047852) ncim_query_content_pane_t1

0x3e94,	// (0x00047864) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x000535f8) ncim_query_content_pane_t

0x3ece,	// (0x0004789e) ncim_query_list_pane

0x3ee0,	// (0x000478b0) ncim_query_popup_pane

0x3e5c,	// (0x0004782c) ncim_indicator_popup_pane_ParamLimits

0xbed0,	// (0x0004f8a0) ncim_query_content_pane_g1_ParamLimits

0xbed0,	// (0x0004f8a0) ncim_query_content_pane_g1

0x3e82,	// (0x00047852) ncim_query_content_pane_t1_ParamLimits

0x3e94,	// (0x00047864) ncim_query_content_pane_t2_ParamLimits

0xbedc,	// (0x0004f8ac) ncim_query_content_pane_t3_ParamLimits

0xbedc,	// (0x0004f8ac) ncim_query_content_pane_t3

0xbef9,	// (0x0004f8c9) ncim_query_content_pane_t4_ParamLimits

0xbef9,	// (0x0004f8c9) ncim_query_content_pane_t4

0xbf16,	// (0x0004f8e6) ncim_query_content_pane_t5_ParamLimits

0xbf16,	// (0x0004f8e6) ncim_query_content_pane_t5

0x3ea6,	// (0x00047876) ncim_query_content_pane_t6_ParamLimits

0x3ea6,	// (0x00047876) ncim_query_content_pane_t6

0xfc28,	// (0x000535f8) ncim_query_content_pane_t_ParamLimits

0x3ece,	// (0x0004789e) ncim_query_list_pane_ParamLimits

0x3ee0,	// (0x000478b0) ncim_query_popup_pane_ParamLimits

0x3ef4,	// (0x000478c4) wait_bar_pane_cp04

0xd9d1,	// (0x000513a1) input_focus_pane_cp011

0x3efc,	// (0x000478cc) ncim_query_popup_pane_t1

0x3f0a,	// (0x000478da) ncim_list_query_list_pane_ParamLimits

0x3f0a,	// (0x000478da) ncim_list_query_list_pane

0xd9d1,	// (0x000513a1) bg_button_pane_cp027

0x3f1d,	// (0x000478ed) ncim_query_button_pane_g1

0xd9d1,	// (0x000513a1) list_highlight_pane_cp012

0x3f27,	// (0x000478f7) ncim_list_query_list_pane_g1

0x3f2f,	// (0x000478ff) ncim_list_query_list_pane_t1

0xa6d5,	// (0x0004e0a5) cam4_indicators_pane_g3_ParamLimits

0xa6d5,	// (0x0004e0a5) cam4_indicators_pane_g3

0xa794,	// (0x0004e164) vid4_indicators_pane_g5_ParamLimits

0xa794,	// (0x0004e164) vid4_indicators_pane_g5

0xb6b1,	// (0x0004f081) vid4_progress_pane_g5_ParamLimits

0xb6b1,	// (0x0004f081) vid4_progress_pane_g5

0xbdeb,	// (0x0004f7bb) main_ncimui_pane_g1

0xbe41,	// (0x0004f811) ncimui_group_query_pane_ParamLimits

0xbe41,	// (0x0004f811) ncimui_group_query_pane

0xbe7d,	// (0x0004f84d) ncimui_list_pane_ParamLimits

0xbe7d,	// (0x0004f84d) ncimui_list_pane

0xbe9c,	// (0x0004f86c) ncimui_text_pane_ParamLimits

0xbe9c,	// (0x0004f86c) ncimui_text_pane

0xbf33,	// (0x0004f903) ncimui_text_pane_t1_ParamLimits

0xbf33,	// (0x0004f903) ncimui_text_pane_t1

0x3f46,	// (0x00047916) ncimui_list_single_graphic_pane_ParamLimits

0x3f46,	// (0x00047916) ncimui_list_single_graphic_pane

0xbf51,	// (0x0004f921) ncimui_query_pane_ParamLimits

0xbf51,	// (0x0004f921) ncimui_query_pane

0xd9d1,	// (0x000513a1) list_highlight_pane_cp013

0x3f53,	// (0x00047923) ncim_list_query_list_pane_t1_copy1

0x3f61,	// (0x00047931) ncim_list_single_graphic_pane_g1

0x3f69,	// (0x00047939) ncim_query_button_pane_cp01

0x3f75,	// (0x00047945) ncim_query_entry_pane_ParamLimits

0x3f75,	// (0x00047945) ncim_query_entry_pane

0x3f88,	// (0x00047958) ncimui_query_pane_g1

0x3f94,	// (0x00047964) ncimui_query_pane_t1_ParamLimits

0x3f94,	// (0x00047964) ncimui_query_pane_t1

0xf063,	// (0x00052a33) input_focus_pane_cp012

0x3fad,	// (0x0004797d) ncim_query_entry_pane_t1

0xe157,	// (0x00051b27) main_im_pane_ParamLimits

0xf063,	// (0x00052a33) main_mobtv_pane_ParamLimits

0xf063,	// (0x00052a33) main_mobtv_pane

0xbc77,	// (0x0004f647) main_cset6_slider_pane_g18_ParamLimits

0xbc77,	// (0x0004f647) main_cset6_slider_pane_g18

0xbc9b,	// (0x0004f66b) main_cset6_slider_pane_g19_ParamLimits

0xbc9b,	// (0x0004f66b) main_cset6_slider_pane_g19

0x324f,	// (0x00046c1f) bg_main_mobtv_pane_ParamLimits

0x324f,	// (0x00046c1f) bg_main_mobtv_pane

0xbf61,	// (0x0004f931) main_mobtv_info_pane

0xbf6a,	// (0x0004f93a) main_mobtv_loading_pane_ParamLimits

0xbf6a,	// (0x0004f93a) main_mobtv_loading_pane

0x3fcd,	// (0x0004799d) main_mobtv_pg_channel_list_pane

0x3fd7,	// (0x000479a7) main_mobtv_pg_hdr_pane

0xbf77,	// (0x0004f947) main_mobtv_programe_curr_pane_ParamLimits

0xbf77,	// (0x0004f947) main_mobtv_programe_curr_pane

0xbf84,	// (0x0004f954) main_mobtv_programe_next_pane_ParamLimits

0xbf84,	// (0x0004f954) main_mobtv_programe_next_pane

0x3fe0,	// (0x000479b0) popup_mobtv_noti_window

0x2895,	// (0x00046265) main_tv_pg_hdr_pane_g1

0x3fe8,	// (0x000479b8) main_tv_pg_hdr_pane_g2

0x3ff0,	// (0x000479c0) main_tv_pg_hdr_pane_g3

0x3ff8,	// (0x000479c8) main_tv_pg_hdr_pane_g4

0x4000,	// (0x000479d0) main_tv_pg_hdr_pane_g5

0x4008,	// (0x000479d8) main_tv_pg_hdr_pane_g6

0x4010,	// (0x000479e0) main_tv_pg_hdr_pane_g7

0x4018,	// (0x000479e8) main_tv_pg_hdr_pane_g8

0x4020,	// (0x000479f0) main_tv_pg_hdr_pane_g9

0x4028,	// (0x000479f8) main_tv_pg_hdr_pane_g10

0x4032,	// (0x00047a02) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x00053605) main_tv_pg_hdr_pane_g

0x403c,	// (0x00047a0c) main_tv_pg_hdr_pane_t1

0x404a,	// (0x00047a1a) main_tv_pg_hdr_pane_t2

0x4058,	// (0x00047a28) main_tv_pg_hdr_pane_t3

0x4066,	// (0x00047a36) main_tv_pg_hdr_pane_t4

0x4074,	// (0x00047a44) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x0005361c) main_tv_pg_hdr_pane_t

0x4082,	// (0x00047a52) single_mobtv_pg_channel_pane_ParamLimits

0x4082,	// (0x00047a52) single_mobtv_pg_channel_pane

0x4094,	// (0x00047a64) single_mobtv_pg_channel_table_pane

0x409d,	// (0x00047a6d) single_mobtv_pg_channel_thumb_pane

0x40a6,	// (0x00047a76) single_tv_pg_channel_pane_g1

0x40af,	// (0x00047a7f) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x00053627) single_tv_pg_channel_pane_g

0x2ac4,	// (0x00046494) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2ac4,	// (0x00046494) bg_single_mobtv_pg_channel_thumb_pane

0x40b8,	// (0x00047a88) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x40b8,	// (0x00047a88) single_mobtv_pg_channel_thumb_pane_g1

0x40c6,	// (0x00047a96) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x40c6,	// (0x00047a96) single_mobtv_pg_channel_thumb_pane_g2

0x40d2,	// (0x00047aa2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x40d2,	// (0x00047aa2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x0005362c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x0005362c) single_mobtv_pg_channel_thumb_pane_g

0x40de,	// (0x00047aae) single_mobtv_pg_channel_thumb_pane_t1

0x40ec,	// (0x00047abc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x00053633) single_mobtv_pg_channel_thumb_pane_t

0x2895,	// (0x00046265) bg_single_mobtv_pg_channel_table_pane_g1

0x2895,	// (0x00046265) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x000530e3) bg_single_mobtv_pg_channel_table_pane_g

0x40fa,	// (0x00047aca) single_mobtv_pg_channel_table_pane_t1

0x4108,	// (0x00047ad8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x00053638) single_mobtv_pg_channel_table_pane_t

0xbf99,	// (0x0004f969) main_mobtv_info_pane_g1_ParamLimits

0xbf99,	// (0x0004f969) main_mobtv_info_pane_g1

0xbfb5,	// (0x0004f985) main_mobtv_info_pane_t1_ParamLimits

0xbfb5,	// (0x0004f985) main_mobtv_info_pane_t1

0xc01b,	// (0x0004f9eb) main_mobtv_info_pane_t2_ParamLimits

0xc01b,	// (0x0004f9eb) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x00053642) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x00053642) main_mobtv_info_pane_t

0xc09e,	// (0x0004fa6e) wait_bar_pane_cp05

0xc0ae,	// (0x0004fa7e) main_mobtv_loading_pane_g1_ParamLimits

0xc0ae,	// (0x0004fa7e) main_mobtv_loading_pane_g1

0xc0ba,	// (0x0004fa8a) main_mobtv_loading_pane_g2_ParamLimits

0xc0ba,	// (0x0004fa8a) main_mobtv_loading_pane_g2

0xc0c6,	// (0x0004fa96) main_mobtv_loading_pane_g3_ParamLimits

0xc0c6,	// (0x0004fa96) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x00053649) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x00053649) main_mobtv_loading_pane_g

0x4116,	// (0x00047ae6) main_mobtv_loading_pane_t1_ParamLimits

0x4116,	// (0x00047ae6) main_mobtv_loading_pane_t1

0x412e,	// (0x00047afe) main_mobtv_loading_pane_t2_ParamLimits

0x412e,	// (0x00047afe) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x00053650) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x00053650) main_mobtv_loading_pane_t

0xc0d2,	// (0x0004faa2) wait_bar_pane_cp06_ParamLimits

0xc0d2,	// (0x0004faa2) wait_bar_pane_cp06

0x4152,	// (0x00047b22) main_mobtv_programe_curr_pane_t1

0x4160,	// (0x00047b30) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x00053655) main_mobtv_programe_curr_pane_t

0x416e,	// (0x00047b3e) main_mobtv_programe_next_pane_t1

0x417c,	// (0x00047b4c) main_mobtv_programe_next_pane_t2

0x418a,	// (0x00047b5a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x0005365a) main_mobtv_programe_next_pane_t

0xd9d1,	// (0x000513a1) bg_popup_mobtv_noti_window_pane

0x4198,	// (0x00047b68) popup_mobtv_noti_window_g1

0x41a0,	// (0x00047b70) popup_mobtv_noti_window_t1

0x41ae,	// (0x00047b7e) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x00053661) popup_mobtv_noti_window_t

0x2895,	// (0x00046265) bg_popup_mobtv_noti_window_pane_g1

0xd9d1,	// (0x000513a1) sc_clock_pane

0xd9d1,	// (0x000513a1) main_fs_bigclock_pane

0xb8b4,	// (0x0004f284) blid2_tripm_pane_t4_ParamLimits

0xb8b4,	// (0x0004f284) blid2_tripm_pane_t4

0xc0de,	// (0x0004faae) sc_clock_pane_g1_ParamLimits

0xc0de,	// (0x0004faae) sc_clock_pane_g1

0xc0ec,	// (0x0004fabc) sc_clock_pane_t1_ParamLimits

0xc0ec,	// (0x0004fabc) sc_clock_pane_t1

0xc0ff,	// (0x0004facf) sc_clock_pane_t2_ParamLimits

0xc0ff,	// (0x0004facf) sc_clock_pane_t2

0xc111,	// (0x0004fae1) sc_clock_pane_t3_ParamLimits

0xc111,	// (0x0004fae1) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x00053666) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x00053666) sc_clock_pane_t

0xcee8,	// (0x000508b8) main_fs_bigclock_indicator_pane_ParamLimits

0xcee8,	// (0x000508b8) main_fs_bigclock_indicator_pane

0xc189,	// (0x0004fb59) main_fs_bigclock_pane_g1_ParamLimits

0xc189,	// (0x0004fb59) main_fs_bigclock_pane_g1

0xcef4,	// (0x000508c4) main_fs_bigclock_pane_t1_ParamLimits

0xcef4,	// (0x000508c4) main_fs_bigclock_pane_t1

0xcf06,	// (0x000508d6) main_fs_bigclock_pane_t2_ParamLimits

0xcf06,	// (0x000508d6) main_fs_bigclock_pane_t2

0xcf18,	// (0x000508e8) main_fs_bigclock_pane_t3_ParamLimits

0xcf18,	// (0x000508e8) main_fs_bigclock_pane_t3

0x0002,

0xfe90,	// (0x00053860) main_fs_bigclock_pane_t_ParamLimits

0xfe90,	// (0x00053860) main_fs_bigclock_pane_t

0xcf2a,	// (0x000508fa) main_fs_bigclock_indicator_pane_g1

0x3e76,	// (0x00047846) ncim_query_content_pane_g2_ParamLimits

0x3e76,	// (0x00047846) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x000535f3) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x000535f3) ncim_query_content_pane_g

0xc123,	// (0x0004faf3) sc_clock_pane_t4_ParamLimits

0xc123,	// (0x0004faf3) sc_clock_pane_t4

0xf063,	// (0x00052a33) main_radioblah_pane

0x31b2,	// (0x00046b82) cell_call4_button_pane_t1_copy1_ParamLimits

0x31b2,	// (0x00046b82) cell_call4_button_pane_t1_copy1

0xbdf3,	// (0x0004f7c3) main_ncimui_pane_t1_ParamLimits

0xbdf3,	// (0x0004f7c3) main_ncimui_pane_t1

0xbe0d,	// (0x0004f7dd) main_ncimui_pane_t2_ParamLimits

0xbe0d,	// (0x0004f7dd) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x000535ec) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x000535ec) main_ncimui_pane_t

0x42d8,	// (0x00047ca8) main_radioblah_anim_pane_ParamLimits

0x42d8,	// (0x00047ca8) main_radioblah_anim_pane

0x42e9,	// (0x00047cb9) main_radioblah_info_pane_ParamLimits

0x42e9,	// (0x00047cb9) main_radioblah_info_pane

0x42fd,	// (0x00047ccd) main_radioblah_pane_t1_ParamLimits

0x42fd,	// (0x00047ccd) main_radioblah_pane_t1

0x4319,	// (0x00047ce9) main_radioblah_pane_t2_ParamLimits

0x4319,	// (0x00047ce9) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x00053687) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x00053687) main_radioblah_pane_t

0xc1d1,	// (0x0004fba1) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc1d1,	// (0x0004fba1) main_radioblah_rocker_ctrl_pane

0x4361,	// (0x00047d31) main_radioblah_info_pane_t1_ParamLimits

0x4361,	// (0x00047d31) main_radioblah_info_pane_t1

0xc216,	// (0x0004fbe6) main_radioblah_info_pane_t2_ParamLimits

0xc216,	// (0x0004fbe6) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x00053690) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x00053690) main_radioblah_info_pane_t

0x2895,	// (0x00046265) main_radioblah_rocker_ctrl_pane_g1

0xc2be,	// (0x0004fc8e) main_radioblah_rocker_ctrl_pane_g2

0xc2c6,	// (0x0004fc96) main_radioblah_rocker_ctrl_pane_g3

0xc2ce,	// (0x0004fc9e) main_radioblah_rocker_ctrl_pane_g4

0xc2d6,	// (0x0004fca6) main_radioblah_rocker_ctrl_pane_g5

0xc2de,	// (0x0004fcae) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x00053699) main_radioblah_rocker_ctrl_pane_g

0xbdbd,	// (0x0004f78d) main_cset_text2_pane_t1_copy1_ParamLimits

0xa5f7,	// (0x0004dfc7) cam4_image_uncrop_qvga_pane

0xa719,	// (0x0004e0e9) vid4_image_uncrop_qcif_pane

0xba32,	// (0x0004f402) cam6_image_uncrop_qvga_pane_ParamLimits

0xba32,	// (0x0004f402) cam6_image_uncrop_qvga_pane

0x3a9c,	// (0x0004746c) vid6_image_uncrop_qcif_pane_ParamLimits

0x3a9c,	// (0x0004746c) vid6_image_uncrop_qcif_pane

0xd9d1,	// (0x000513a1) bg_popup_preview_window_pane_cp03

0x3e1c,	// (0x000477ec) list_cset_text2_pane

0x3e24,	// (0x000477f4) main_cset6_text2_pane_g1

0x3e2c,	// (0x000477fc) main_cset6_text2_pane_t1

0xc2e6,	// (0x0004fcb6) list_cset_text2_pane_t1_ParamLimits

0xc2e6,	// (0x0004fcb6) list_cset_text2_pane_t1

0xf063,	// (0x00052a33) main_radioblah_pane_ParamLimits

0xc08c,	// (0x0004fa5c) main_mobtv_info_pane_t3_ParamLimits

0xc08c,	// (0x0004fa5c) main_mobtv_info_pane_t3

0xc1bf,	// (0x0004fb8f) main_radioblah_pane_g1

0xc1ea,	// (0x0004fbba) main_radioblah_info_pane_g1

0xc265,	// (0x0004fc35) main_radioblah_info_pane_t3_ParamLimits

0xc265,	// (0x0004fc35) main_radioblah_info_pane_t3

0x78f6,	// (0x0004b2c6) highlight_cell_cale_month_pane_ParamLimits

0x78f6,	// (0x0004b2c6) highlight_cell_cale_month_pane

0xd9d1,	// (0x000513a1) main_phob_fisheye_pane

0x2c0e,	// (0x000465de) scroll_pane_cp0031_ParamLimits

0x2c0e,	// (0x000465de) scroll_pane_cp0031

0x3ba6,	// (0x00047576) wait_bar_pane_cp08_ParamLimits

0xbbfc,	// (0x0004f5cc) cset_list_set_pane_copy1_ParamLimits

0x439b,	// (0x00047d6b) highlight_cell_cale_month_pane_g1

0xc2fd,	// (0x0004fccd) highlight_cell_cale_month_pane_t1

0x43a3,	// (0x00047d73) list_gen_pane_cp01

0x33ae,	// (0x00046d7e) scroll_pane_01

0xf091,	// (0x00052a61) list_single_double_fisheye_pane

0x43ac,	// (0x00047d7c) list_double_fisheye_pane_g1_ParamLimits

0x43ac,	// (0x00047d7c) list_double_fisheye_pane_g1

0x43b8,	// (0x00047d88) list_double_fisheye_pane_g2_ParamLimits

0x43b8,	// (0x00047d88) list_double_fisheye_pane_g2

0xf09a,	// (0x00052a6a) list_double_fisheye_pane_g3_ParamLimits

0xf09a,	// (0x00052a6a) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x000536a6) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x000536a6) list_double_fisheye_pane_g

0x43e9,	// (0x00047db9) list_double_fisheye_pane_t1_ParamLimits

0x43e9,	// (0x00047db9) list_double_fisheye_pane_t1

0x4404,	// (0x00047dd4) list_double_fisheye_pane_t2_ParamLimits

0x4404,	// (0x00047dd4) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x000536b1) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x000536b1) list_double_fisheye_pane_t

0xd9d1,	// (0x000513a1) main_call5_pane

0xc149,	// (0x0004fb19) sc_swipe_pane_ParamLimits

0xc149,	// (0x0004fb19) sc_swipe_pane

0xc317,	// (0x0004fce7) call5_image_pane_ParamLimits

0xc317,	// (0x0004fce7) call5_image_pane

0xc323,	// (0x0004fcf3) call5_swipe_1_pane_ParamLimits

0xc323,	// (0x0004fcf3) call5_swipe_1_pane

0xc32f,	// (0x0004fcff) call5_swipe_2_pane_ParamLimits

0xc32f,	// (0x0004fcff) call5_swipe_2_pane

0xc347,	// (0x0004fd17) popup_call5_audio_first_window_ParamLimits

0xc347,	// (0x0004fd17) popup_call5_audio_first_window

0x2ac4,	// (0x00046494) call5_swipe_1_pane_g1_ParamLimits

0x2ac4,	// (0x00046494) call5_swipe_1_pane_g1

0x4426,	// (0x00047df6) call5_swipe_1_pane_g2_ParamLimits

0x4426,	// (0x00047df6) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x000536b6) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x000536b6) call5_swipe_1_pane_g

0x4432,	// (0x00047e02) call5_swipe_1_pane_t1_ParamLimits

0x4432,	// (0x00047e02) call5_swipe_1_pane_t1

0x2ac4,	// (0x00046494) call5_swipe_2_pane_g1_ParamLimits

0x2ac4,	// (0x00046494) call5_swipe_2_pane_g1

0x4447,	// (0x00047e17) call5_swipe_2_pane_g2_ParamLimits

0x4447,	// (0x00047e17) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x000536bb) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x000536bb) call5_swipe_2_pane_g

0x4453,	// (0x00047e23) call5_swipe_2_pane_t1_ParamLimits

0x4453,	// (0x00047e23) call5_swipe_2_pane_t1

0x4468,	// (0x00047e38) sc_swipe_pane_g1_ParamLimits

0x4468,	// (0x00047e38) sc_swipe_pane_g1

0x4475,	// (0x00047e45) sc_swipe_pane_g2_ParamLimits

0x4475,	// (0x00047e45) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x000536c0) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x000536c0) sc_swipe_pane_g

0x4481,	// (0x00047e51) sc_swipe_pane_t1_ParamLimits

0x4481,	// (0x00047e51) sc_swipe_pane_t1

0xd9d1,	// (0x000513a1) main_cmail_launcher_pane

0xc353,	// (0x0004fd23) aid_size_cell_cmail_l_ParamLimits

0xc353,	// (0x0004fd23) aid_size_cell_cmail_l

0xc363,	// (0x0004fd33) grid_cmail_l_pane_ParamLimits

0xc363,	// (0x0004fd33) grid_cmail_l_pane

0xc36f,	// (0x0004fd3f) cell_cmail_l_pane_ParamLimits

0xc36f,	// (0x0004fd3f) cell_cmail_l_pane

0xc381,	// (0x0004fd51) cell_cmail_l_pane_g1_ParamLimits

0xc381,	// (0x0004fd51) cell_cmail_l_pane_g1

0xc391,	// (0x0004fd61) cell_cmail_l_pane_t1_ParamLimits

0xc391,	// (0x0004fd61) cell_cmail_l_pane_t1

0x4496,	// (0x00047e66) cell_cmail_l_pane_t2_ParamLimits

0x4496,	// (0x00047e66) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x000536c5) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x000536c5) cell_cmail_l_pane_t

0xf063,	// (0x00052a33) grid_highlight_pane_cp018_ParamLimits

0xf063,	// (0x00052a33) grid_highlight_pane_cp018

0x6027,	// (0x000499f7) main2_pane_ParamLimits

0x6027,	// (0x000499f7) main2_pane

0xe202,	// (0x00051bd2) popup_sp_fs_action_menu_bg_pane_g1

0xe20a,	// (0x00051bda) popup_sp_fs_action_menu_bg_pane_g2

0xe212,	// (0x00051be2) popup_sp_fs_action_menu_bg_pane_g3

0xe21a,	// (0x00051bea) popup_sp_fs_action_menu_bg_pane_g4

0xe222,	// (0x00051bf2) popup_sp_fs_action_menu_bg_pane_g5

0xe22a,	// (0x00051bfa) popup_sp_fs_action_menu_bg_pane_g6

0xe232,	// (0x00051c02) popup_sp_fs_action_menu_bg_pane_g7

0xe23a,	// (0x00051c0a) popup_sp_fs_action_menu_bg_pane_g8

0xe242,	// (0x00051c12) popup_sp_fs_action_menu_bg_pane_g9

0xe24a,	// (0x00051c1a) popup_sp_fs_action_menu_bg_pane_g10

0xe24a,	// (0x00051c1a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00052b7c) popup_sp_fs_action_menu_bg_pane_g

0x1188,	// (0x00044b58) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x2_t3_g3_g1

0x1194,	// (0x00044b64) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_x2_t3_g3_g2

0x11a0,	// (0x00044b70) list_medium_line_x2_t3_g3_g3_ParamLimits

0x11a0,	// (0x00044b70) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00052c2c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00052c2c) list_medium_line_x2_t3_g3_g

0x11ac,	// (0x00044b7c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x11ac,	// (0x00044b7c) list_medium_line_x2_t3_g3_t1

0x6d81,	// (0x0004a751) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6d81,	// (0x0004a751) list_medium_line_x2_t3_g3_t2

0x11c1,	// (0x00044b91) list_medium_line_x2_t3_g3_t3_ParamLimits

0x11c1,	// (0x00044b91) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00052c33) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00052c33) list_medium_line_x2_t3_g3_t

0x1188,	// (0x00044b58) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x2_t3_g2_g1

0x11a0,	// (0x00044b70) list_medium_line_x2_t3_g2_g2_ParamLimits

0x11a0,	// (0x00044b70) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00052c3a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00052c3a) list_medium_line_x2_t3_g2_g

0x11d6,	// (0x00044ba6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x11d6,	// (0x00044ba6) list_medium_line_x2_t3_g2_t1

0x11ec,	// (0x00044bbc) list_medium_line_x2_t3_g2_t2_ParamLimits

0x11ec,	// (0x00044bbc) list_medium_line_x2_t3_g2_t2

0x11c1,	// (0x00044b91) list_medium_line_x2_t3_g2_t3_ParamLimits

0x11c1,	// (0x00044b91) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00052c3f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00052c3f) list_medium_line_x2_t3_g2_t

0x1188,	// (0x00044b58) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x2_t4_g4_g1

0x11fe,	// (0x00044bce) list_medium_line_x2_t4_g4_g2_ParamLimits

0x11fe,	// (0x00044bce) list_medium_line_x2_t4_g4_g2

0x1194,	// (0x00044b64) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_x2_t4_g4_g3

0x120a,	// (0x00044bda) list_medium_line_x2_t4_g4_g4_ParamLimits

0x120a,	// (0x00044bda) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00052c46) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00052c46) list_medium_line_x2_t4_g4_g

0x6d93,	// (0x0004a763) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6d93,	// (0x0004a763) list_medium_line_x2_t4_g4_t1

0x6daa,	// (0x0004a77a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6daa,	// (0x0004a77a) list_medium_line_x2_t4_g4_t2

0x6dbf,	// (0x0004a78f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6dbf,	// (0x0004a78f) list_medium_line_x2_t4_g4_t3

0x1216,	// (0x00044be6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1216,	// (0x00044be6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00052c4f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00052c4f) list_medium_line_x2_t4_g4_t

0x1188,	// (0x00044b58) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x2_t2_g4_g1

0x11fe,	// (0x00044bce) list_medium_line_x2_t2_g4_g2_ParamLimits

0x11fe,	// (0x00044bce) list_medium_line_x2_t2_g4_g2

0x1194,	// (0x00044b64) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_x2_t2_g4_g3

0x11a0,	// (0x00044b70) list_medium_line_x2_t2_g4_g4_ParamLimits

0x11a0,	// (0x00044b70) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00052cb6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00052cb6) list_medium_line_x2_t2_g4_g

0x1228,	// (0x00044bf8) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1228,	// (0x00044bf8) list_medium_line_x2_t2_g4_t1

0x11c1,	// (0x00044b91) list_medium_line_x2_t2_g4_t2_ParamLimits

0x11c1,	// (0x00044b91) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00052cbf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00052cbf) list_medium_line_x2_t2_g4_t

0x1188,	// (0x00044b58) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x2_t2_g3_g1

0x1194,	// (0x00044b64) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_x2_t2_g3_g2

0x11a0,	// (0x00044b70) list_medium_line_x2_t2_g3_g3_ParamLimits

0x11a0,	// (0x00044b70) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00052c2c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00052c2c) list_medium_line_x2_t2_g3_g

0x123d,	// (0x00044c0d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x123d,	// (0x00044c0d) list_medium_line_x2_t2_g3_t1

0x11c1,	// (0x00044b91) list_medium_line_x2_t2_g3_t2_ParamLimits

0x11c1,	// (0x00044b91) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00052cc4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00052cc4) list_medium_line_x2_t2_g3_t

0x7a66,	// (0x0004b436) main_sp_fs_list_pane_ParamLimits

0x7a66,	// (0x0004b436) main_sp_fs_list_pane

0x7a73,	// (0x0004b443) sp_fs_scroll_pane_ParamLimits

0x7a73,	// (0x0004b443) sp_fs_scroll_pane

0x7a80,	// (0x0004b450) list_medium_line_x2_t3_t1

0x7a90,	// (0x0004b460) list_medium_line_x2_t3_t2

0x1280,	// (0x00044c50) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00052d0f) list_medium_line_x2_t3_t

0x7a9e,	// (0x0004b46e) list_medium_line_x3_t4_t1

0x7aae,	// (0x0004b47e) list_medium_line_x3_t4_t2

0x128e,	// (0x00044c5e) list_medium_line_x3_t4_t3

0x129c,	// (0x00044c6c) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00052d16) list_medium_line_x3_t4_t

0x7abc,	// (0x0004b48c) list_medium_line_x4_t5_t1

0x7acc,	// (0x0004b49c) list_medium_line_x4_t5_t2

0x128e,	// (0x00044c5e) list_medium_line_x4_t5_t3

0x12aa,	// (0x00044c7a) list_medium_line_x4_t5_t4

0x129c,	// (0x00044c6c) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00052d1f) list_medium_line_x4_t5_t

0x1188,	// (0x00044b58) list_medium_line_t4_g4_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_t4_g4_g1

0x120a,	// (0x00044bda) list_medium_line_t4_g4_g2_ParamLimits

0x120a,	// (0x00044bda) list_medium_line_t4_g4_g2

0x12b8,	// (0x00044c88) list_medium_line_t4_g4_g3_ParamLimits

0x12b8,	// (0x00044c88) list_medium_line_t4_g4_g3

0x11a0,	// (0x00044b70) list_medium_line_t4_g4_g4_ParamLimits

0x11a0,	// (0x00044b70) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00052d2a) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00052d2a) list_medium_line_t4_g4_g

0x12c4,	// (0x00044c94) list_medium_line_t4_g4_t1_ParamLimits

0x12c4,	// (0x00044c94) list_medium_line_t4_g4_t1

0x12d9,	// (0x00044ca9) list_medium_line_t4_g4_t2_ParamLimits

0x12d9,	// (0x00044ca9) list_medium_line_t4_g4_t2

0x12ef,	// (0x00044cbf) list_medium_line_t4_g4_t3_ParamLimits

0x12ef,	// (0x00044cbf) list_medium_line_t4_g4_t3

0x1305,	// (0x00044cd5) list_medium_line_t4_g4_t4_ParamLimits

0x1305,	// (0x00044cd5) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00052d33) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00052d33) list_medium_line_t4_g4_t

0x7be8,	// (0x0004b5b8) chi_dic_find_pane_g1

0x895a,	// (0x0004c32a) main_tport_pane

0x34f4,	// (0x00046ec4) list_medium_line_plain_t1

0x1188,	// (0x00044b58) list_medium_line_t2_g2_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_t2_g2_g1

0x1194,	// (0x00044b64) list_medium_line_t2_g2_g2_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x00053402) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x00053402) list_medium_line_t2_g2_g

0xb0e2,	// (0x0004eab2) list_medium_line_t2_g2_t1_ParamLimits

0xb0e2,	// (0x0004eab2) list_medium_line_t2_g2_t1

0xb0f9,	// (0x0004eac9) list_medium_line_t2_g2_t2_ParamLimits

0xb0f9,	// (0x0004eac9) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x00053407) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x00053407) list_medium_line_t2_g2_t

0x381b,	// (0x000471eb) aid_sp_fs_list_icon_a_sm

0x3823,	// (0x000471f3) aid_sp_fs_list_icon_d

0x382b,	// (0x000471fb) aid_sp_fs_text_primary

0x3834,	// (0x00047204) aid_sp_fs_text_secondary

0x383d,	// (0x0004720d) list_medium_line

0x383d,	// (0x0004720d) list_medium_line_g2

0x383d,	// (0x0004720d) list_medium_line_g3

0x383d,	// (0x0004720d) list_medium_line_plain

0x383d,	// (0x0004720d) list_medium_line_plain_t2

0x383d,	// (0x0004720d) list_medium_line_plain_t3

0x383d,	// (0x0004720d) list_medium_line_right_icon

0x383d,	// (0x0004720d) list_medium_line_right_iconx2

0x383d,	// (0x0004720d) list_medium_line_t2

0x383d,	// (0x0004720d) list_medium_line_t2_g2

0x383d,	// (0x0004720d) list_medium_line_t2_g3

0x383d,	// (0x0004720d) list_medium_line_t2_right_icon

0x383d,	// (0x0004720d) list_medium_line_t2_right_iconx2

0x383d,	// (0x0004720d) list_medium_line_t3

0x383d,	// (0x0004720d) list_medium_line_t3_g2

0x383d,	// (0x0004720d) list_medium_line_t3_g3

0x383d,	// (0x0004720d) list_medium_line_t3_right_iconx2

0x3846,	// (0x00047216) list_medium_line_t4_g4

0x384f,	// (0x0004721f) list_medium_line_x2

0x384f,	// (0x0004721f) list_medium_line_x2_t2_g2

0x384f,	// (0x0004721f) list_medium_line_x2_t2_g3

0x384f,	// (0x0004721f) list_medium_line_x2_t2_g4

0x384f,	// (0x0004721f) list_medium_line_x2_t3

0x384f,	// (0x0004721f) list_medium_line_x2_t3_g2

0x384f,	// (0x0004721f) list_medium_line_x2_t3_g3

0x384f,	// (0x0004721f) list_medium_line_x2_t3_g4

0x384f,	// (0x0004721f) list_medium_line_x2_t4_g2

0x384f,	// (0x0004721f) list_medium_line_x2_t4_g4

0x3858,	// (0x00047228) list_medium_line_x3

0x3858,	// (0x00047228) list_medium_line_x3_t4

0x3858,	// (0x00047228) list_medium_line_x3_t4_g4

0x3846,	// (0x00047216) list_medium_line_x4_t4

0x3846,	// (0x00047216) list_medium_line_x4_t4_g7

0x3846,	// (0x00047216) list_medium_line_x4_t5

0x3861,	// (0x00047231) list_single_fs_dyc_pane_ParamLimits

0x3861,	// (0x00047231) list_single_fs_dyc_pane

0x1188,	// (0x00044b58) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x4_t4_g7_g1

0x3d51,	// (0x00047721) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3d51,	// (0x00047721) list_medium_line_x4_t4_g7_g2

0x3d5d,	// (0x0004772d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3d5d,	// (0x0004772d) list_medium_line_x4_t4_g7_g3

0x3d6c,	// (0x0004773c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3d6c,	// (0x0004773c) list_medium_line_x4_t4_g7_g4

0x3d78,	// (0x00047748) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3d78,	// (0x00047748) list_medium_line_x4_t4_g7_g5

0x3d87,	// (0x00047757) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3d87,	// (0x00047757) list_medium_line_x4_t4_g7_g6

0x3d96,	// (0x00047766) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3d96,	// (0x00047766) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x000535d2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x000535d2) list_medium_line_x4_t4_g7_g

0x3da2,	// (0x00047772) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3da2,	// (0x00047772) list_medium_line_x4_t4_g7_t1

0x3db7,	// (0x00047787) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3db7,	// (0x00047787) list_medium_line_x4_t4_g7_t2

0x3dcc,	// (0x0004779c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3dcc,	// (0x0004779c) list_medium_line_x4_t4_g7_t3

0x3de1,	// (0x000477b1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3de1,	// (0x000477b1) list_medium_line_x4_t4_g7_t4

0x3df3,	// (0x000477c3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3df3,	// (0x000477c3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x000535e1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x000535e1) list_medium_line_x4_t4_g7_t

0x3e05,	// (0x000477d5) list_single_dyc_row_pane_ParamLimits

0x3e05,	// (0x000477d5) list_single_dyc_row_pane

0xc30b,	// (0x0004fcdb) call5_gesture_pane_ParamLimits

0xc30b,	// (0x0004fcdb) call5_gesture_pane

0xc33b,	// (0x0004fd0b) call5_windows_pane_ParamLimits

0xc33b,	// (0x0004fd0b) call5_windows_pane

0xc3a7,	// (0x0004fd77) call5_swipe_1_pane_cp_ParamLimits

0xc3a7,	// (0x0004fd77) call5_swipe_1_pane_cp

0xc3b3,	// (0x0004fd83) call5_swipe_2_pane_cp_ParamLimits

0xc3b3,	// (0x0004fd83) call5_swipe_2_pane_cp

0xecd4,	// (0x000526a4) call5_image_pane_cp

0xc3bf,	// (0x0004fd8f) popup_call5_audio_first_window_cp_ParamLimits

0xc3bf,	// (0x0004fd8f) popup_call5_audio_first_window_cp

0x4468,	// (0x00047e38) call5_swipe_1_pane_g1_cp_ParamLimits

0x4468,	// (0x00047e38) call5_swipe_1_pane_g1_cp

0x44a8,	// (0x00047e78) call5_swipe_1_pane_g2_cp

0x4481,	// (0x00047e51) call5_swipe_1_pane_t1_cp_ParamLimits

0x4481,	// (0x00047e51) call5_swipe_1_pane_t1_cp

0x4468,	// (0x00047e38) call5_swipe_2_pane_g1_cp_ParamLimits

0x4468,	// (0x00047e38) call5_swipe_2_pane_g1_cp

0x44b0,	// (0x00047e80) call5_swipe_2_pane_g2_cp

0x44b8,	// (0x00047e88) call5_swipe_2_pane_t1_cp_ParamLimits

0x44b8,	// (0x00047e88) call5_swipe_2_pane_t1_cp

0xf063,	// (0x00052a33) main_sp_fs_email_pane

0x44cd,	// (0x00047e9d) main_sp_fs_listscroll_pane_te

0xc3cb,	// (0x0004fd9b) popup_sp_fs_action_menu_pane_ParamLimits

0xc3cb,	// (0x0004fd9b) popup_sp_fs_action_menu_pane

0x2895,	// (0x00046265) bg_sp_fs_ctrlbar_pane_g1

0x44d6,	// (0x00047ea6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x44df,	// (0x00047eaf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x44e8,	// (0x00047eb8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2895,	// (0x00046265) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x000536ca) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2682,	// (0x00046052) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2682,	// (0x00046052) bg_sp_fs_ctrlbar_ddmenu_pane

0x44f1,	// (0x00047ec1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x44f1,	// (0x00047ec1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf0a6,	// (0x00052a76) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf0a6,	// (0x00052a76) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x000536d3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x000536d3) main_sp_fs_ctrlbar_ddmenu_pane_g

0x44fd,	// (0x00047ecd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x44fd,	// (0x00047ecd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x4517,	// (0x00047ee7) list_medium_line_t2_right_icon_g1

0xc3fb,	// (0x0004fdcb) list_medium_line_t2_right_icon_t1

0xc40a,	// (0x0004fdda) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x000536d8) list_medium_line_t2_right_icon_t

0x245a,	// (0x00045e2a) bg_sp_fs_ctrlbar_pane_ParamLimits

0x245a,	// (0x00045e2a) bg_sp_fs_ctrlbar_pane

0xc46d,	// (0x0004fe3d) main_sp_fs_ctrlbar_button_pane_cp01

0xc475,	// (0x0004fe45) main_sp_fs_ctrlbar_ddmenu_pane

0x4567,	// (0x00047f37) main_sp_fs_ctrlbar_pane_g1

0x4573,	// (0x00047f43) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x000536dd) main_sp_fs_ctrlbar_pane_g

0x457f,	// (0x00047f4f) main_sp_fs_ctrlbar_pane_t1

0xc47f,	// (0x0004fe4f) main_sp_fs_ctrlbar_pane

0xc497,	// (0x0004fe67) main_sp_fs_listscroll_pane_te_cp01

0xc4a8,	// (0x0004fe78) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc4a8,	// (0x0004fe78) popup_sp_fs_action_menu_pane_cp01

0xf063,	// (0x00052a33) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf063,	// (0x00052a33) bg_sp_fs_highlight_list_pane_cp01

0xc4c4,	// (0x0004fe94) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc4c4,	// (0x0004fe94) sp_fs_action_menu_list_gene_pane_g1

0x4594,	// (0x00047f64) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4594,	// (0x00047f64) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x000536e2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x000536e2) sp_fs_action_menu_list_gene_pane_g

0x45a1,	// (0x00047f71) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x45a1,	// (0x00047f71) sp_fs_action_menu_list_gene_pane_t1

0xc4d3,	// (0x0004fea3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc4d3,	// (0x0004fea3) sp_fs_action_menu_list_gene_pane

0x45b9,	// (0x00047f89) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x45b9,	// (0x00047f89) popup_sp_fs_action_menu_bg_pane

0xc4f0,	// (0x0004fec0) sp_fs_action_menu_list_pane_ParamLimits

0xc4f0,	// (0x0004fec0) sp_fs_action_menu_list_pane

0x45c7,	// (0x00047f97) sp_fs_scroll_pane_cp01_ParamLimits

0x45c7,	// (0x00047f97) sp_fs_scroll_pane_cp01

0xc50c,	// (0x0004fedc) list_medium_line_plain_t2_t1

0xc51b,	// (0x0004feeb) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x000536e7) list_medium_line_plain_t2_t

0xc529,	// (0x0004fef9) list_medium_line_plain_t3_t1

0xc539,	// (0x0004ff09) list_medium_line_plain_t3_t2

0xc547,	// (0x0004ff17) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x000536ec) list_medium_line_plain_t3_t

0x1188,	// (0x00044b58) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x2_t2_g2_g1

0x11a0,	// (0x00044b70) list_medium_line_x2_t2_g2_g2_ParamLimits

0x11a0,	// (0x00044b70) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00052c3a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00052c3a) list_medium_line_x2_t2_g2_g

0x12c4,	// (0x00044c94) list_medium_line_x2_t2_g2_t1_ParamLimits

0x12c4,	// (0x00044c94) list_medium_line_x2_t2_g2_t1

0x11c1,	// (0x00044b91) list_medium_line_x2_t2_g2_t2_ParamLimits

0x11c1,	// (0x00044b91) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x000536f3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x000536f3) list_medium_line_x2_t2_g2_t

0x1188,	// (0x00044b58) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x2_t4_g2_g1

0x45ed,	// (0x00047fbd) list_medium_line_x2_t4_g2_g2_ParamLimits

0x45ed,	// (0x00047fbd) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd28,	// (0x000536f8) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd28,	// (0x000536f8) list_medium_line_x2_t4_g2_g

0xc555,	// (0x0004ff25) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc555,	// (0x0004ff25) list_medium_line_x2_t4_g2_t1

0xc56f,	// (0x0004ff3f) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc56f,	// (0x0004ff3f) list_medium_line_x2_t4_g2_t2

0xc584,	// (0x0004ff54) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc584,	// (0x0004ff54) list_medium_line_x2_t4_g2_t3

0x11c1,	// (0x00044b91) list_medium_line_x2_t4_g2_t4_ParamLimits

0x11c1,	// (0x00044b91) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd2d,	// (0x000536fd) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd2d,	// (0x000536fd) list_medium_line_x2_t4_g2_t

0x45fe,	// (0x00047fce) list_medium_line_t3_right_iconx2_g1

0x4517,	// (0x00047ee7) list_medium_line_t3_right_iconx2_g2

0xc599,	// (0x0004ff69) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd36,	// (0x00053706) list_medium_line_t3_right_iconx2_g

0x451f,	// (0x00047eef) list_medium_line_t3_right_iconx2_t1

0xc5a1,	// (0x0004ff71) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd3d,	// (0x0005370d) list_medium_line_t3_right_iconx2_t

0x1188,	// (0x00044b58) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x3_t4_g4_g1

0x1194,	// (0x00044b64) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_x3_t4_g4_g2

0x120a,	// (0x00044bda) list_medium_line_x3_t4_g4_g3_ParamLimits

0x120a,	// (0x00044bda) list_medium_line_x3_t4_g4_g3

0x4606,	// (0x00047fd6) list_medium_line_x3_t4_g4_g4_ParamLimits

0x4606,	// (0x00047fd6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd42,	// (0x00053712) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd42,	// (0x00053712) list_medium_line_x3_t4_g4_g

0xb0e2,	// (0x0004eab2) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb0e2,	// (0x0004eab2) list_medium_line_x3_t4_g4_t1

0xb0f9,	// (0x0004eac9) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb0f9,	// (0x0004eac9) list_medium_line_x3_t4_g4_t2

0x4612,	// (0x00047fe2) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4612,	// (0x00047fe2) list_medium_line_x3_t4_g4_t3

0x4627,	// (0x00047ff7) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4627,	// (0x00047ff7) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4b,	// (0x0005371b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4b,	// (0x0005371b) list_medium_line_x3_t4_g4_t

0xc5af,	// (0x0004ff7f) list_single_dyc_row_text_pane_t1_ParamLimits

0xc5af,	// (0x0004ff7f) list_single_dyc_row_text_pane_t1

0xc5e6,	// (0x0004ffb6) list_single_dyc_row_text_pane_t2_ParamLimits

0xc5e6,	// (0x0004ffb6) list_single_dyc_row_text_pane_t2

0x4644,	// (0x00048014) list_single_dyc_row_text_pane_t3_ParamLimits

0x4644,	// (0x00048014) list_single_dyc_row_text_pane_t3

0x0002,

0xfd54,	// (0x00053724) list_single_dyc_row_text_pane_t_ParamLimits

0xfd54,	// (0x00053724) list_single_dyc_row_text_pane_t

0x4656,	// (0x00048026) list_single_dyc_row_pane_g1_ParamLimits

0x4656,	// (0x00048026) list_single_dyc_row_pane_g1

0x4662,	// (0x00048032) list_single_dyc_row_pane_g2_ParamLimits

0x4662,	// (0x00048032) list_single_dyc_row_pane_g2

0x466e,	// (0x0004803e) list_single_dyc_row_pane_g3_ParamLimits

0x466e,	// (0x0004803e) list_single_dyc_row_pane_g3

0x467a,	// (0x0004804a) list_single_dyc_row_pane_g4_ParamLimits

0x467a,	// (0x0004804a) list_single_dyc_row_pane_g4

0x0003,

0xfd5b,	// (0x0005372b) list_single_dyc_row_pane_g_ParamLimits

0xfd5b,	// (0x0005372b) list_single_dyc_row_pane_g

0x4686,	// (0x00048056) list_single_dyc_row_text_pane_ParamLimits

0x4686,	// (0x00048056) list_single_dyc_row_text_pane

0xd9d1,	// (0x000513a1) bg_sp_fs_scroll_pane

0x46a5,	// (0x00048075) thumb_sp_fs_scroll_pane

0x1188,	// (0x00044b58) list_medium_line_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_g1

0x12c4,	// (0x00044c94) list_medium_line_t1_ParamLimits

0x12c4,	// (0x00044c94) list_medium_line_t1

0x1188,	// (0x00044b58) list_medium_line_x2_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x2_g1

0x1194,	// (0x00044b64) list_medium_line_x2_g2_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x00053402) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x00053402) list_medium_line_x2_g

0x46ae,	// (0x0004807e) list_medium_line_x2_t1_ParamLimits

0x46ae,	// (0x0004807e) list_medium_line_x2_t1

0x1188,	// (0x00044b58) list_medium_line_x3_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x3_g1

0x1194,	// (0x00044b64) list_medium_line_x3_g2_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x00053402) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x00053402) list_medium_line_x3_g

0x46ae,	// (0x0004807e) list_medium_line_x3_t1_ParamLimits

0x46ae,	// (0x0004807e) list_medium_line_x3_t1

0x46c4,	// (0x00048094) thumb_sp_fs_scroll_pane_g1

0x46cd,	// (0x0004809d) thumb_sp_fs_scroll_pane_g2

0x46d6,	// (0x000480a6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x00053734) thumb_sp_fs_scroll_pane_g

0x46c4,	// (0x00048094) bg_sp_fs_scroll_pane_g1

0x46cd,	// (0x0004809d) bg_sp_fs_scroll_pane_g2

0x46d6,	// (0x000480a6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x00053734) bg_sp_fs_scroll_pane_g

0x1188,	// (0x00044b58) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_x2_t3_g4_g1

0x11fe,	// (0x00044bce) list_medium_line_x2_t3_g4_g2_ParamLimits

0x11fe,	// (0x00044bce) list_medium_line_x2_t3_g4_g2

0x1194,	// (0x00044b64) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_x2_t3_g4_g3

0x11a0,	// (0x00044b70) list_medium_line_x2_t3_g4_g4_ParamLimits

0x11a0,	// (0x00044b70) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00052cb6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00052cb6) list_medium_line_x2_t3_g4_g

0xc63a,	// (0x0005000a) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc63a,	// (0x0005000a) list_medium_line_x2_t3_g4_t1

0xc650,	// (0x00050020) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc650,	// (0x00050020) list_medium_line_x2_t3_g4_t2

0x11c1,	// (0x00044b91) list_medium_line_x2_t3_g4_t3_ParamLimits

0x11c1,	// (0x00044b91) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6b,	// (0x0005373b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6b,	// (0x0005373b) list_medium_line_x2_t3_g4_t

0x1188,	// (0x00044b58) list_medium_line_g2_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_g2_g1

0x1194,	// (0x00044b64) list_medium_line_g2_g2_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x00053402) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x00053402) list_medium_line_g2_g

0x123d,	// (0x00044c0d) list_medium_line_g2_t1_ParamLimits

0x123d,	// (0x00044c0d) list_medium_line_g2_t1

0x1188,	// (0x00044b58) list_medium_line_t3_g2_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_t3_g2_g1

0x1194,	// (0x00044b64) list_medium_line_t3_g2_g2_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x00053402) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x00053402) list_medium_line_t3_g2_g

0xc669,	// (0x00050039) list_medium_line_t3_g2_t1_ParamLimits

0xc669,	// (0x00050039) list_medium_line_t3_g2_t1

0xc683,	// (0x00050053) list_medium_line_t3_g2_t2_ParamLimits

0xc683,	// (0x00050053) list_medium_line_t3_g2_t2

0xc698,	// (0x00050068) list_medium_line_t3_g2_t3_ParamLimits

0xc698,	// (0x00050068) list_medium_line_t3_g2_t3

0x0002,

0xfd72,	// (0x00053742) list_medium_line_t3_g2_t_ParamLimits

0xfd72,	// (0x00053742) list_medium_line_t3_g2_t

0x4517,	// (0x00047ee7) list_medium_line_right_icon_g1

0x46df,	// (0x000480af) list_medium_line_right_icon_t1

0x1188,	// (0x00044b58) list_medium_line_t2_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_t2_g1

0xc6ae,	// (0x0005007e) list_medium_line_t2_t1_ParamLimits

0xc6ae,	// (0x0005007e) list_medium_line_t2_t1

0xc6c4,	// (0x00050094) list_medium_line_t2_t2_ParamLimits

0xc6c4,	// (0x00050094) list_medium_line_t2_t2

0x0001,

0xfd79,	// (0x00053749) list_medium_line_t2_t_ParamLimits

0xfd79,	// (0x00053749) list_medium_line_t2_t

0x1188,	// (0x00044b58) list_medium_line_t3_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_t3_g1

0xc6d6,	// (0x000500a6) list_medium_line_t3_t1_ParamLimits

0xc6d6,	// (0x000500a6) list_medium_line_t3_t1

0xc6ed,	// (0x000500bd) list_medium_line_t3_t2_ParamLimits

0xc6ed,	// (0x000500bd) list_medium_line_t3_t2

0xc702,	// (0x000500d2) list_medium_line_t3_t3_ParamLimits

0xc702,	// (0x000500d2) list_medium_line_t3_t3

0x0002,

0xfd7e,	// (0x0005374e) list_medium_line_t3_t_ParamLimits

0xfd7e,	// (0x0005374e) list_medium_line_t3_t

0x1188,	// (0x00044b58) list_medium_line_g3_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_g3_g1

0x11fe,	// (0x00044bce) list_medium_line_g3_g2_ParamLimits

0x11fe,	// (0x00044bce) list_medium_line_g3_g2

0x1194,	// (0x00044b64) list_medium_line_g3_g3_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_g3_g3

0x0002,

0xfd85,	// (0x00053755) list_medium_line_g3_g_ParamLimits

0xfd85,	// (0x00053755) list_medium_line_g3_g

0x1228,	// (0x00044bf8) list_medium_line_g3_t1_ParamLimits

0x1228,	// (0x00044bf8) list_medium_line_g3_t1

0x1188,	// (0x00044b58) list_medium_line_t2_g3_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_t2_g3_g1

0x11fe,	// (0x00044bce) list_medium_line_t2_g3_g2_ParamLimits

0x11fe,	// (0x00044bce) list_medium_line_t2_g3_g2

0x1194,	// (0x00044b64) list_medium_line_t2_g3_g3_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_t2_g3_g3

0x0002,

0xfd85,	// (0x00053755) list_medium_line_t2_g3_g_ParamLimits

0xfd85,	// (0x00053755) list_medium_line_t2_g3_g

0xc714,	// (0x000500e4) list_medium_line_t2_g3_t1_ParamLimits

0xc714,	// (0x000500e4) list_medium_line_t2_g3_t1

0xc72e,	// (0x000500fe) list_medium_line_t2_g3_t2_ParamLimits

0xc72e,	// (0x000500fe) list_medium_line_t2_g3_t2

0x0001,

0xfd8c,	// (0x0005375c) list_medium_line_t2_g3_t_ParamLimits

0xfd8c,	// (0x0005375c) list_medium_line_t2_g3_t

0x1188,	// (0x00044b58) list_medium_line_t3_g3_g1_ParamLimits

0x1188,	// (0x00044b58) list_medium_line_t3_g3_g1

0x11fe,	// (0x00044bce) list_medium_line_t3_g3_g2_ParamLimits

0x11fe,	// (0x00044bce) list_medium_line_t3_g3_g2

0x1194,	// (0x00044b64) list_medium_line_t3_g3_g3_ParamLimits

0x1194,	// (0x00044b64) list_medium_line_t3_g3_g3

0x0002,

0xfd85,	// (0x00053755) list_medium_line_t3_g3_g_ParamLimits

0xfd85,	// (0x00053755) list_medium_line_t3_g3_g

0xc743,	// (0x00050113) list_medium_line_t3_g3_t1_ParamLimits

0xc743,	// (0x00050113) list_medium_line_t3_g3_t1

0xc75c,	// (0x0005012c) list_medium_line_t3_g3_t2_ParamLimits

0xc75c,	// (0x0005012c) list_medium_line_t3_g3_t2

0xc772,	// (0x00050142) list_medium_line_t3_g3_t3_ParamLimits

0xc772,	// (0x00050142) list_medium_line_t3_g3_t3

0x0002,

0xfd91,	// (0x00053761) list_medium_line_t3_g3_t_ParamLimits

0xfd91,	// (0x00053761) list_medium_line_t3_g3_t

0x45fe,	// (0x00047fce) list_medium_line_right_iconx2_g1

0x4517,	// (0x00047ee7) list_medium_line_right_iconx2_g2

0x0001,

0xfd98,	// (0x00053768) list_medium_line_right_iconx2_g

0x46ed,	// (0x000480bd) list_medium_line_right_iconx2_t1

0x45fe,	// (0x00047fce) list_medium_line_t2_right_iconx2_g1

0x4517,	// (0x00047ee7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd98,	// (0x00053768) list_medium_line_t2_right_iconx2_g

0xc788,	// (0x00050158) list_medium_line_t2_right_iconx2_t1

0xc798,	// (0x00050168) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd9d,	// (0x0005376d) list_medium_line_t2_right_iconx2_t

0x34f4,	// (0x00046ec4) list_medium_line_x4_t4_t1

0xc7a6,	// (0x00050176) list_medium_line_x4_t4_t2

0xc7b4,	// (0x00050184) list_medium_line_x4_t4_t3

0xc7c2,	// (0x00050192) list_medium_line_x4_t4_t4

0x0003,

0xfda2,	// (0x00053772) list_medium_line_x4_t4_t

0xc7f5,	// (0x000501c5) tport_appsw_pane_ParamLimits

0xc7f5,	// (0x000501c5) tport_appsw_pane

0xc801,	// (0x000501d1) tport_contact_pane_ParamLimits

0xc801,	// (0x000501d1) tport_contact_pane

0xc80f,	// (0x000501df) tport_listscroll_pane_ParamLimits

0xc80f,	// (0x000501df) tport_listscroll_pane

0xc81d,	// (0x000501ed) cell_tport_appsw_pane_ParamLimits

0xc81d,	// (0x000501ed) cell_tport_appsw_pane

0x2b9d,	// (0x0004656d) tport_appsw_pane_g1_ParamLimits

0x2b9d,	// (0x0004656d) tport_appsw_pane_g1

0x46fb,	// (0x000480cb) tport_contact_pane_g1

0x4704,	// (0x000480d4) tport_contact_pane_t1

0x4712,	// (0x000480e2) tport_contact_pane_t2

0x0001,

0xfdab,	// (0x0005377b) tport_contact_pane_t

0x4720,	// (0x000480f0) list_tport_pane

0xe25c,	// (0x00051c2c) scroll_pane_cp_030

0x4731,	// (0x00048101) cell_tport_appsw_pane_g1

0x4741,	// (0x00048111) cell_tport_appsw_pane_t1

0xd9d1,	// (0x000513a1) grid_highlight_pane_cp019

0xc844,	// (0x00050214) list_tport_double_graphic_pane_ParamLimits

0xc844,	// (0x00050214) list_tport_double_graphic_pane

0xf063,	// (0x00052a33) list_highlight_pane_cp023_ParamLimits

0xf063,	// (0x00052a33) list_highlight_pane_cp023

0xc851,	// (0x00050221) list_tport_double_graphic_pane_g1_ParamLimits

0xc851,	// (0x00050221) list_tport_double_graphic_pane_g1

0xc85e,	// (0x0005022e) list_tport_double_graphic_pane_t1_ParamLimits

0xc85e,	// (0x0005022e) list_tport_double_graphic_pane_t1

0xc873,	// (0x00050243) list_tport_double_graphic_pane_t2_ParamLimits

0xc873,	// (0x00050243) list_tport_double_graphic_pane_t2

0x0001,

0xfdb7,	// (0x00053787) list_tport_double_graphic_pane_t_ParamLimits

0xfdb7,	// (0x00053787) list_tport_double_graphic_pane_t

0xd9d1,	// (0x000513a1) main_cale_note_pane

0xa924,	// (0x0004e2f4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa924,	// (0x0004e2f4) cell_vitu2_function_top_wide_pane_cp01

0xc09e,	// (0x0004fa6e) wait_bar_pane_cp05_ParamLimits

0xd9d1,	// (0x000513a1) listscroll_cmail_pane

0x474f,	// (0x0004811f) list_cmail_pane

0xc885,	// (0x00050255) list_cmail_body_pane

0xc885,	// (0x00050255) list_single_cmail_header_caption_pane

0xc89d,	// (0x0005026d) list_single_cmail_header_detail_pane_ParamLimits

0xc89d,	// (0x0005026d) list_single_cmail_header_detail_pane

0x476b,	// (0x0004813b) list_single_cmail_header_caption_pane_t1

0xc8c7,	// (0x00050297) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc8c7,	// (0x00050297) list_single_cmail_header_detail_pane_g1

0x1194,	// (0x00044b64) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1194,	// (0x00044b64) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdbc,	// (0x0005378c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdbc,	// (0x0005378c) list_single_cmail_header_detail_pane_g

0x478e,	// (0x0004815e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x478e,	// (0x0004815e) list_single_cmail_header_detail_pane_t1

0x47b6,	// (0x00048186) list_single_cmail_header_editor_pane_bg_ParamLimits

0x47b6,	// (0x00048186) list_single_cmail_header_editor_pane_bg

0x47c8,	// (0x00048198) list_cmail_body_pane_g1

0x47d1,	// (0x000481a1) list_cmail_body_pane_t1

0x32a8,	// (0x00046c78) list_single_cmail_header_editor_pane_bg_g1

0xe586,	// (0x00051f56) list_single_cmail_header_editor_pane_bg_g1_copy1

0x32b8,	// (0x00046c88) list_single_cmail_header_editor_pane_bg_g1_copy2

0x32b0,	// (0x00046c80) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3502,	// (0x00046ed2) list_single_cmail_header_editor_pane_bg_g1_copy4

0x32d8,	// (0x00046ca8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x32c8,	// (0x00046c98) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x32d0,	// (0x00046ca0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe566,	// (0x00051f36) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc901,	// (0x000502d1) calenote_gesture_pane_ParamLimits

0xc901,	// (0x000502d1) calenote_gesture_pane

0xc919,	// (0x000502e9) calenote_window_pane_ParamLimits

0xc919,	// (0x000502e9) calenote_window_pane

0x47df,	// (0x000481af) popup_note_window_cp01

0xc931,	// (0x00050301) calenote_swipe_1_pane_ParamLimits

0xc931,	// (0x00050301) calenote_swipe_1_pane

0xc3b3,	// (0x0004fd83) calenote_swipe_2_pane_ParamLimits

0xc3b3,	// (0x0004fd83) calenote_swipe_2_pane

0x4468,	// (0x00047e38) calenote_swipe_1_pane_g1_ParamLimits

0x4468,	// (0x00047e38) calenote_swipe_1_pane_g1

0x4475,	// (0x00047e45) calenote_swipe_1_pane_g2_ParamLimits

0x4475,	// (0x00047e45) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x000536c0) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x000536c0) calenote_swipe_1_pane_g

0x47f1,	// (0x000481c1) calenote_swipe_1_pane_t1_ParamLimits

0x47f1,	// (0x000481c1) calenote_swipe_1_pane_t1

0x4468,	// (0x00047e38) calenote_swipe_2_pane_g1_ParamLimits

0x4468,	// (0x00047e38) calenote_swipe_2_pane_g1

0x4810,	// (0x000481e0) calenote_swipe_2_pane_g2_ParamLimits

0x4810,	// (0x000481e0) calenote_swipe_2_pane_g2

0x0001,

0xfdc8,	// (0x00053798) calenote_swipe_2_pane_g_ParamLimits

0xfdc8,	// (0x00053798) calenote_swipe_2_pane_g

0x481c,	// (0x000481ec) calenote_swipe_2_pane_t1_ParamLimits

0x481c,	// (0x000481ec) calenote_swipe_2_pane_t1

0xd9d1,	// (0x000513a1) main_mup_navstr_pane

0x97c1,	// (0x0004d191) main_mup3_pane_t7_ParamLimits

0x97c1,	// (0x0004d191) main_mup3_pane_t7

0xa14d,	// (0x0004db1d) main_mp4_pane_g6_ParamLimits

0xa14d,	// (0x0004db1d) main_mp4_pane_g6

0xa48f,	// (0x0004de5f) main_image3_pane_t4_ParamLimits

0xa48f,	// (0x0004de5f) main_image3_pane_t4

0xc944,	// (0x00050314) popup_navstr_preview_pane_ParamLimits

0xc944,	// (0x00050314) popup_navstr_preview_pane

0xc950,	// (0x00050320) scroll_navstr_pane_ParamLimits

0xc950,	// (0x00050320) scroll_navstr_pane

0xd9d1,	// (0x000513a1) bg_popup_preview_window_pane_cp04

0x4843,	// (0x00048213) popup_navstr_preview_pane_t1

0xc95c,	// (0x0005032c) scroll_navstr_pane_g1_ParamLimits

0xc95c,	// (0x0005032c) scroll_navstr_pane_g1

0xc969,	// (0x00050339) scroll_navstr_pane_t1_ParamLimits

0xc969,	// (0x00050339) scroll_navstr_pane_t1

0x47e8,	// (0x000481b8) bg_button_pane_cp014

0x47e8,	// (0x000481b8) bg_button_pane_cp030

0x43cc,	// (0x00047d9c) list_double_fisheye_pane_g4_ParamLimits

0x43cc,	// (0x00047d9c) list_double_fisheye_pane_g4

0x43d8,	// (0x00047da8) list_double_fisheye_pane_g5_ParamLimits

0x43d8,	// (0x00047da8) list_double_fisheye_pane_g5

0x475f,	// (0x0004812f) sp_fs_scroll_pane_cp03

0x4567,	// (0x00047f37) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4573,	// (0x00047f43) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x000536dd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x457f,	// (0x00047f4f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4757,	// (0x00048127) sp_fs_scroll_pane_cp02

0xe26e,	// (0x00051c3e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe26e,	// (0x00051c3e) popup_sp_fs_calendar_preview_list_single_pane

0xd9d1,	// (0x000513a1) main_cam6_pano_pane

0xf063,	// (0x00052a33) main_mup3_pane_ParamLimits

0xd9d1,	// (0x000513a1) main_phacti_pane

0xbf91,	// (0x0004f961) bg_button_pane_cp11

0xbfa9,	// (0x0004f979) main_mobtv_info_pane_g2_ParamLimits

0xbfa9,	// (0x0004f979) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x0005363d) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x0005363d) main_mobtv_info_pane_g

0xc135,	// (0x0004fb05) sc_clock_pane_t5_ParamLimits

0xc135,	// (0x0004fb05) sc_clock_pane_t5

0xc1bf,	// (0x0004fb8f) main_radioblah_pane_g1_ParamLimits

0x4331,	// (0x00047d01) main_radioblah_pane_t3_ParamLimits

0x4331,	// (0x00047d01) main_radioblah_pane_t3

0x4349,	// (0x00047d19) main_radioblah_pane_t4_ParamLimits

0x4349,	// (0x00047d19) main_radioblah_pane_t4

0xc1dd,	// (0x0004fbad) main_radioblah_text_pane_ParamLimits

0xc1dd,	// (0x0004fbad) main_radioblah_text_pane

0xc1ea,	// (0x0004fbba) main_radioblah_info_pane_g1_ParamLimits

0xc277,	// (0x0004fc47) main_radioblah_info_pane_t4_ParamLimits

0xc277,	// (0x0004fc47) main_radioblah_info_pane_t4

0xf063,	// (0x00052a33) main_sp_fs_calendar_pane

0xc97b,	// (0x0005034b) main_phacti_pane_g1

0xc983,	// (0x00050353) phacti_note_pane_ParamLimits

0xc983,	// (0x00050353) phacti_note_pane

0x485a,	// (0x0004822a) phacti_term_pane_ParamLimits

0x485a,	// (0x0004822a) phacti_term_pane

0x486f,	// (0x0004823f) phacti_note_pane_t1_ParamLimits

0x486f,	// (0x0004823f) phacti_note_pane_t1

0x4886,	// (0x00048256) phacti_term_pane_g1

0x488e,	// (0x0004825e) phacti_term_pane_t1_ParamLimits

0x488e,	// (0x0004825e) phacti_term_pane_t1

0x48b8,	// (0x00048288) popup_sp_fs_calendar_preview_list_single_pane_g1

0x48c0,	// (0x00048290) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd2,	// (0x000537a2) popup_sp_fs_calendar_preview_list_single_pane_g

0x48c8,	// (0x00048298) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x48c8,	// (0x00048298) popup_sp_fs_calendar_preview_list_single_pane_t1

0x48de,	// (0x000482ae) aid_popup_sp_fs_bg_corner_pane

0x2895,	// (0x00046265) popup_sp_fs_calendar_preview_bg_pane_g1

0xd9d1,	// (0x000513a1) popup_sp_fs_calendar_preview_bg_pane

0x48e6,	// (0x000482b6) popup_sp_fs_calendar_preview_list_pane

0xf063,	// (0x00052a33) bg_main_sp_fs_cale_pane_ParamLimits

0xf063,	// (0x00052a33) bg_main_sp_fs_cale_pane

0x48ee,	// (0x000482be) listscroll_cale_mrui_pane_ParamLimits

0x48ee,	// (0x000482be) listscroll_cale_mrui_pane

0x4902,	// (0x000482d2) listscroll_sp_fs_schedule_track_pane

0x490b,	// (0x000482db) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x490b,	// (0x000482db) main_sp_fs_ctrlbar_pane_cp01

0x491c,	// (0x000482ec) main_sp_fs_ribbon_pane

0x4924,	// (0x000482f4) popup_sp_fs_cale_preview_window

0xc9be,	// (0x0005038e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc9be,	// (0x0005038e) list_single_sp_fs_schedule_track_pane

0x3210,	// (0x00046be0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3210,	// (0x00046be0) bg_sp_fs_highlight_list_pane_cp03

0xc9d3,	// (0x000503a3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc9d3,	// (0x000503a3) list_single_sp_fs_schedule_track_pane_g1

0xc9df,	// (0x000503af) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc9df,	// (0x000503af) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd7,	// (0x000537a7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd7,	// (0x000537a7) list_single_sp_fs_schedule_track_pane_g

0xc9eb,	// (0x000503bb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc9eb,	// (0x000503bb) list_single_sp_fs_schedule_track_pane_t1

0xca03,	// (0x000503d3) sp_fs_schedule_track_pane_ParamLimits

0xca03,	// (0x000503d3) sp_fs_schedule_track_pane

0x4933,	// (0x00048303) sp_fs_schedule_track_pane_g1

0x493b,	// (0x0004830b) sp_fs_schedule_track_pane_g2

0x4943,	// (0x00048313) sp_fs_schedule_track_pane_g3

0x494b,	// (0x0004831b) sp_fs_schedule_track_pane_g4

0x4953,	// (0x00048323) sp_fs_schedule_track_pane_g5

0x0004,

0xfddc,	// (0x000537ac) sp_fs_schedule_track_pane_g

0x32a8,	// (0x00046c78) bg_sp_fs_schedule_viewer_highlight_g1

0xe586,	// (0x00051f56) bg_sp_fs_schedule_viewer_highlight_g2

0x32b0,	// (0x00046c80) bg_sp_fs_schedule_viewer_highlight_g3

0x32b8,	// (0x00046c88) bg_sp_fs_schedule_viewer_highlight_g4

0x3502,	// (0x00046ed2) bg_sp_fs_schedule_viewer_highlight_g5

0x32c8,	// (0x00046c98) bg_sp_fs_schedule_viewer_highlight_g6

0x32d0,	// (0x00046ca0) bg_sp_fs_schedule_viewer_highlight_g7

0x32d8,	// (0x00046ca8) bg_sp_fs_schedule_viewer_highlight_g8

0xe566,	// (0x00051f36) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde7,	// (0x000537b7) bg_sp_fs_schedule_viewer_highlight_g

0xd9d1,	// (0x000513a1) bg_main_sp_fs_ribbon_pane

0xa684,	// (0x0004e054) main_sp_fs_ribbon_pane_g1

0x495b,	// (0x0004832b) main_sp_fs_ribbon_pane_t1

0xca13,	// (0x000503e3) main_sp_fs_ribbon_pane_t2

0x496a,	// (0x0004833a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfa,	// (0x000537ca) main_sp_fs_ribbon_pane_t

0x4979,	// (0x00048349) main_sp_fs_ribbon_scheduler_pane

0x4981,	// (0x00048351) bg_main_sp_fs_ribbon_pane_g1

0x498a,	// (0x0004835a) bg_main_sp_fs_ribbon_pane_g2

0x4993,	// (0x00048363) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe01,	// (0x000537d1) bg_main_sp_fs_ribbon_pane_g

0x499b,	// (0x0004836b) main_sp_fs_ribbon_scheduler_pane_g1

0x49a4,	// (0x00048374) main_sp_fs_ribbon_scheduler_pane_g2

0x49ad,	// (0x0004837d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe08,	// (0x000537d8) main_sp_fs_ribbon_scheduler_pane_g

0x43a3,	// (0x00047d73) list_cale_mrui_pane

0x49b6,	// (0x00048386) sp_fs_scroll_pane_cp07_ParamLimits

0x49b6,	// (0x00048386) sp_fs_scroll_pane_cp07

0xca22,	// (0x000503f2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xca22,	// (0x000503f2) bg_sp_fs_schedule_viewer_highlight

0x49cb,	// (0x0004839b) list_single_sp_fs_schedule_track_pane_cp01

0x49d3,	// (0x000483a3) list_sp_fs_schedule_track_pane

0x49db,	// (0x000483ab) sp_fs_scroll_pane_cp06_ParamLimits

0x49db,	// (0x000483ab) sp_fs_scroll_pane_cp06

0x2895,	// (0x00046265) bgmain_sp_fs_calendar_pane_g1

0xca2f,	// (0x000503ff) list_single_cale_mrui_pane_ParamLimits

0xca2f,	// (0x000503ff) list_single_cale_mrui_pane

0x49ed,	// (0x000483bd) list_single_cale_mrui_row_pane_ParamLimits

0x49ed,	// (0x000483bd) list_single_cale_mrui_row_pane

0x49fa,	// (0x000483ca) list_single_cale_mrui_row_pane_g1_ParamLimits

0x49fa,	// (0x000483ca) list_single_cale_mrui_row_pane_g1

0x4a32,	// (0x00048402) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4a32,	// (0x00048402) list_single_cale_mrui_row_pane_t1

0xca55,	// (0x00050425) list_single_cale_mrui_row_pane_t2_ParamLimits

0xca55,	// (0x00050425) list_single_cale_mrui_row_pane_t2

0x4a44,	// (0x00048414) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4a44,	// (0x00048414) list_single_cale_mrui_row_pane_t3

0x4a73,	// (0x00048443) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4a73,	// (0x00048443) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe14,	// (0x000537e4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe14,	// (0x000537e4) list_single_cale_mrui_row_pane_t

0xcabb,	// (0x0005048b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcabb,	// (0x0005048b) list_single_cmail_header_editor_pane_bg_cp01

0xcadf,	// (0x000504af) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcadf,	// (0x000504af) list_single_cmail_header_editor_pane_bg_cp02

0xcafd,	// (0x000504cd) main_radioblah_text_pane_t1_ParamLimits

0xcafd,	// (0x000504cd) main_radioblah_text_pane_t1

0xcb16,	// (0x000504e6) cam6_indi_pane_cp01

0xcb1e,	// (0x000504ee) cam6_mode_pane_cp01

0xcb26,	// (0x000504f6) cam6_pano_pane

0xcb2f,	// (0x000504ff) cam6_zoom_pane_cp01

0xcb37,	// (0x00050507) cam6_pano_image_pane

0xcb40,	// (0x00050510) cam6_pano_pane_g1

0x40af,	// (0x00047a7f) cam6_pano_pane_g2

0xcb49,	// (0x00050519) cam6_pano_pane_g3

0xcb52,	// (0x00050522) cam6_pano_pane_g4

0x2dfb,	// (0x000467cb) cam6_pano_pane_g5

0xcb5b,	// (0x0005052b) cam6_pano_pane_g6

0xcb63,	// (0x00050533) cam6_pano_pane_g7

0xcb6b,	// (0x0005053b) cam6_pano_pane_g8

0xcb74,	// (0x00050544) cam6_pano_pane_g9

0x0008,

0xfe1d,	// (0x000537ed) cam6_pano_pane_g

0xd9d1,	// (0x000513a1) main_browser_tag_pane

0x483b,	// (0x0004820b) grid_navstr_albumart_pane

0xcb7d,	// (0x0005054d) cell_navstr_albumart_pane_ParamLimits

0xcb7d,	// (0x0005054d) cell_navstr_albumart_pane

0xee35,	// (0x00052805) cell_navstr_albumart_pane_g1

0x2237,	// (0x00045c07) cell_navstr_albumart_pane_g2

0x2247,	// (0x00045c17) cell_navstr_albumart_pane_g3

0x223f,	// (0x00045c0f) cell_navstr_albumart_pane_g4

0x0003,

0xfe30,	// (0x00053800) cell_navstr_albumart_pane_g

0xcb94,	// (0x00050564) bt_list_pane_ParamLimits

0xcb94,	// (0x00050564) bt_list_pane

0xcba9,	// (0x00050579) bt_list_pane_t1

0xcbb8,	// (0x00050588) bt_list_pane_t2

0x0001,

0xfe39,	// (0x00053809) bt_list_pane_t

0xd9d1,	// (0x000513a1) main_cale_prevew_pane

0xcbc7,	// (0x00050597) popup_cale_preview_window_ParamLimits

0xcbc7,	// (0x00050597) popup_cale_preview_window

0xf063,	// (0x00052a33) bg_popup_preview_window_pane_cp05_ParamLimits

0xf063,	// (0x00052a33) bg_popup_preview_window_pane_cp05

0xcbdc,	// (0x000505ac) list_cale_preview_pane_ParamLimits

0xcbdc,	// (0x000505ac) list_cale_preview_pane

0xcbe8,	// (0x000505b8) list_double_cale_preview_pane_ParamLimits

0xcbe8,	// (0x000505b8) list_double_cale_preview_pane

0xcbf9,	// (0x000505c9) list_single_cale_preview_pane_ParamLimits

0xcbf9,	// (0x000505c9) list_single_cale_preview_pane

0xcc0d,	// (0x000505dd) list_single_cale_preview_pane_g1

0xcc15,	// (0x000505e5) list_single_cale_preview_pane_t1_ParamLimits

0xcc15,	// (0x000505e5) list_single_cale_preview_pane_t1

0xcc2a,	// (0x000505fa) list_double_cale_preview_pane_g1

0xcc32,	// (0x00050602) list_double_cale_preview_pane_t1_ParamLimits

0xcc32,	// (0x00050602) list_double_cale_preview_pane_t1

0xcc47,	// (0x00050617) list_double_cale_preview_pane_t2_ParamLimits

0xcc47,	// (0x00050617) list_double_cale_preview_pane_t2

0x0001,

0xfe3e,	// (0x0005380e) list_double_cale_preview_pane_t_ParamLimits

0xfe3e,	// (0x0005380e) list_double_cale_preview_pane_t

0xd9d1,	// (0x000513a1) main_ezdial_pane

0xf063,	// (0x00052a33) main_sp_fs_email_pane_ParamLimits

0xc418,	// (0x0004fde8) cmail_ddmenu_btn01_pane_ParamLimits

0xc418,	// (0x0004fde8) cmail_ddmenu_btn01_pane

0xc435,	// (0x0004fe05) cmail_ddmenu_btn02_pane_ParamLimits

0xc435,	// (0x0004fe05) cmail_ddmenu_btn02_pane

0xc453,	// (0x0004fe23) cmail_ddmenu_btn03_pane_ParamLimits

0xc453,	// (0x0004fe23) cmail_ddmenu_btn03_pane

0xc47f,	// (0x0004fe4f) main_sp_fs_ctrlbar_pane_ParamLimits

0xc497,	// (0x0004fe67) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc885,	// (0x00050255) list_cmail_body_pane_ParamLimits

0x4779,	// (0x00048149) bg_button_pane_cp12

0x4781,	// (0x00048151) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4781,	// (0x00048151) list_single_cmail_header_detail_pane_g3

0xc8dd,	// (0x000502ad) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc8dd,	// (0x000502ad) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc3,	// (0x00053793) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc3,	// (0x00053793) list_single_cmail_header_detail_pane_t

0x48a3,	// (0x00048273) phacti_term_pane_t2_ParamLimits

0x48a3,	// (0x00048273) phacti_term_pane_t2

0x0001,

0xfdcd,	// (0x0005379d) phacti_term_pane_t_ParamLimits

0xfdcd,	// (0x0005379d) phacti_term_pane_t

0xcc5f,	// (0x0005062f) aid_size_list_single_double

0xcc6b,	// (0x0005063b) popup_ezdial_listscroll_window

0xcc84,	// (0x00050654) popup_number_entry_window_cp01

0xecd4,	// (0x000526a4) bg_popup_call_pane_cp09

0xcc90,	// (0x00050660) ezdial_list_pane

0xcc98,	// (0x00050668) scroll_pane_cp23

0x2682,	// (0x00046052) bg_button_pane_cp028_ParamLimits

0x2682,	// (0x00046052) bg_button_pane_cp028

0xcca0,	// (0x00050670) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcca0,	// (0x00050670) cmail_ddmenu_btn01_pane_g1

0xccb2,	// (0x00050682) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xccb2,	// (0x00050682) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe43,	// (0x00053813) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe43,	// (0x00053813) cmail_ddmenu_btn01_pane_g

0xccbe,	// (0x0005068e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xccbe,	// (0x0005068e) cmail_ddmenu_btn01_pane_t1

0x245a,	// (0x00045e2a) bg_button_pane_cp029_ParamLimits

0x245a,	// (0x00045e2a) bg_button_pane_cp029

0xccb2,	// (0x00050682) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xccb2,	// (0x00050682) cmail_ddmenu_btn02_pane_g1

0xccdf,	// (0x000506af) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xccdf,	// (0x000506af) cmail_ddmenu_btn02_pane_t1

0x3210,	// (0x00046be0) bg_button_pane_cp031_ParamLimits

0x3210,	// (0x00046be0) bg_button_pane_cp031

0xccb2,	// (0x00050682) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xccb2,	// (0x00050682) cmail_ddmenu_btn03_pane_g1

0xccdf,	// (0x000506af) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xccdf,	// (0x000506af) cmail_ddmenu_btn03_pane_t1

0xa33e,	// (0x0004dd0e) cell_dialer2_keypad_pane_t1_ParamLimits

0xa358,	// (0x0004dd28) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa358,	// (0x0004dd28) cell_dialer2_keypad_pane_t1_copy1

0xbe39,	// (0x0004f809) ncimui_group_button_pane

0xf063,	// (0x00052a33) main_sp_fs_calendar_pane_ParamLimits

0xc885,	// (0x00050255) list_single_cmail_header_caption_pane_ParamLimits

0x3834,	// (0x00047204) aid_recal_txt_sm_pane

0xd9d1,	// (0x000513a1) mian_recal_day_pane

0x4924,	// (0x000482f4) popup_sp_fs_cale_preview_window_ParamLimits

0xd9d1,	// (0x000513a1) list_recal_day_pane

0x4aab,	// (0x0004847b) list_single_recal_day_pane_ParamLimits

0x4aab,	// (0x0004847b) list_single_recal_day_pane

0xcd13,	// (0x000506e3) list_single_recal_day_pane_g1_ParamLimits

0xcd13,	// (0x000506e3) list_single_recal_day_pane_g1

0x4abd,	// (0x0004848d) list_single_recal_day_pane_g2_ParamLimits

0x4abd,	// (0x0004848d) list_single_recal_day_pane_g2

0x4ac9,	// (0x00048499) list_single_recal_day_pane_g3_ParamLimits

0x4ac9,	// (0x00048499) list_single_recal_day_pane_g3

0xcd1f,	// (0x000506ef) list_single_recal_day_pane_g4_ParamLimits

0xcd1f,	// (0x000506ef) list_single_recal_day_pane_g4

0x4ad5,	// (0x000484a5) list_single_recal_day_pane_g5_ParamLimits

0x4ad5,	// (0x000484a5) list_single_recal_day_pane_g5

0x4ae1,	// (0x000484b1) list_single_recal_day_pane_g6_ParamLimits

0x4ae1,	// (0x000484b1) list_single_recal_day_pane_g6

0x0005,

0xfe52,	// (0x00053822) list_single_recal_day_pane_g_ParamLimits

0xfe52,	// (0x00053822) list_single_recal_day_pane_g

0x4aed,	// (0x000484bd) list_single_recal_day_pane_t1

0x4afb,	// (0x000484cb) list_single_recal_day_pane_t2

0x0001,

0xfe5f,	// (0x0005382f) list_single_recal_day_pane_t

0xcd2b,	// (0x000506fb) ncimui_query_button_pane_ParamLimits

0xcd2b,	// (0x000506fb) ncimui_query_button_pane

0xcd3b,	// (0x0005070b) ncimui_query_button_pane_t1_ParamLimits

0xcd3b,	// (0x0005070b) ncimui_query_button_pane_t1

0xcd4e,	// (0x0005071e) ncimui_query_button_pane_t2_ParamLimits

0xcd4e,	// (0x0005071e) ncimui_query_button_pane_t2

0x0001,

0xfe64,	// (0x00053834) ncimui_query_button_pane_t_ParamLimits

0xfe64,	// (0x00053834) ncimui_query_button_pane_t

0xcd61,	// (0x00050731) query_button_pane_ParamLimits

0xcd61,	// (0x00050731) query_button_pane

0xd9d1,	// (0x000513a1) bg_button_pane_cp0028

0xcd6e,	// (0x0005073e) query_button_pane_t1

0x895a,	// (0x0004c32a) main_tport_pane_ParamLimits

0xc7d0,	// (0x000501a0) bg_popup_window_pane_cp01_ParamLimits

0xc7d0,	// (0x000501a0) bg_popup_window_pane_cp01

0xc7dd,	// (0x000501ad) heading_pane_cp08_ParamLimits

0xc7dd,	// (0x000501ad) heading_pane_cp08

0xc7e9,	// (0x000501b9) heading_pane_cp07_ParamLimits

0xc7e9,	// (0x000501b9) heading_pane_cp07

0x4731,	// (0x00048101) cell_tport_appsw_pane_g2

0x0002,

0xfdb0,	// (0x00053780) cell_tport_appsw_pane_g

0x81e6,	// (0x0004bbb6) input_candi_list_open_g1

0xe72e,	// (0x000520fe) list_cale_time_pane_g6_ParamLimits

0xe72e,	// (0x000520fe) list_cale_time_pane_g6

0x92fb,	// (0x0004cccb) aid_size_touch_calib_1_ParamLimits

0x92fb,	// (0x0004cccb) aid_size_touch_calib_1

0x9307,	// (0x0004ccd7) aid_size_touch_calib_2_ParamLimits

0x9307,	// (0x0004ccd7) aid_size_touch_calib_2

0x9313,	// (0x0004cce3) aid_size_touch_calib_3_ParamLimits

0x9313,	// (0x0004cce3) aid_size_touch_calib_3

0x9321,	// (0x0004ccf1) aid_size_touch_calib_4_ParamLimits

0x9321,	// (0x0004ccf1) aid_size_touch_calib_4

0x932f,	// (0x0004ccff) main_touch_calib_button_group_pane_ParamLimits

0x932f,	// (0x0004ccff) main_touch_calib_button_group_pane

0x933c,	// (0x0004cd0c) main_touch_calib_pane_g1_ParamLimits

0x9348,	// (0x0004cd18) main_touch_calib_pane_g2_ParamLimits

0x9354,	// (0x0004cd24) main_touch_calib_pane_g3_ParamLimits

0x9360,	// (0x0004cd30) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x00053158) main_touch_calib_pane_g_ParamLimits

0x936c,	// (0x0004cd3c) main_touch_calib_pane_t1_ParamLimits

0x9381,	// (0x0004cd51) main_touch_calib_pane_t2_ParamLimits

0x9396,	// (0x0004cd66) main_touch_calib_pane_t3_ParamLimits

0x93a8,	// (0x0004cd78) main_touch_calib_pane_t4_ParamLimits

0x93ba,	// (0x0004cd8a) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x00053161) main_touch_calib_pane_t_ParamLimits

0x2c26,	// (0x000465f6) list_single_fp_cale_pane_g3_ParamLimits

0x2c26,	// (0x000465f6) list_single_fp_cale_pane_g3

0xa759,	// (0x0004e129) bg_button_pane_cp012_ParamLimits

0xa759,	// (0x0004e129) bg_vkb2_func_pane_cp03_ParamLimits

0xb059,	// (0x0004ea29) cell_vitu2_function_top_pane_g1_ParamLimits

0xa759,	// (0x0004e129) bg_vkb2_func_pane_cp04_ParamLimits

0xbdd9,	// (0x0004f7a9) main_ncimui_button_group_pane_ParamLimits

0xbdd9,	// (0x0004f7a9) main_ncimui_button_group_pane

0xbe27,	// (0x0004f7f7) main_ncimui_pane_t3_ParamLimits

0xbe27,	// (0x0004f7f7) main_ncimui_pane_t3

0x4851,	// (0x00048221) phacti_button_group_pane

0xcc5f,	// (0x0005062f) aid_size_list_single_double_ParamLimits

0xcc6b,	// (0x0005063b) popup_ezdial_listscroll_window_ParamLimits

0xcc84,	// (0x00050654) popup_number_entry_window_cp01_ParamLimits

0xcd7c,	// (0x0005074c) phacti_button_pane_ParamLimits

0xcd7c,	// (0x0005074c) phacti_button_pane

0xd9d1,	// (0x000513a1) bg_button_pane_cp14

0xcd8b,	// (0x0005075b) phacti_button_pane_t1

0xcd99,	// (0x00050769) main_touch_calib_button_pane_ParamLimits

0xcd99,	// (0x00050769) main_touch_calib_button_pane

0xe157,	// (0x00051b27) bg_button_pane_cp18_ParamLimits

0xe157,	// (0x00051b27) bg_button_pane_cp18

0xcda9,	// (0x00050779) main_touch_calib_button_pane_t1_ParamLimits

0xcda9,	// (0x00050779) main_touch_calib_button_pane_t1

0xcdbf,	// (0x0005078f) main_touch_calib_button_pane_t2_ParamLimits

0xcdbf,	// (0x0005078f) main_touch_calib_button_pane_t2

0x0001,

0xfe69,	// (0x00053839) main_touch_calib_button_pane_t_ParamLimits

0xfe69,	// (0x00053839) main_touch_calib_button_pane_t

0xd9d1,	// (0x000513a1) cell_ncimui_button_pane

0xd9d1,	// (0x000513a1) bg_button_pane_cp032

0xcddd,	// (0x000507ad) cell_ncimui_button_pane_t1

0xa3aa,	// (0x0004dd7a) image3_infobar_pane_ParamLimits

0xa3aa,	// (0x0004dd7a) image3_infobar_pane

0xc155,	// (0x0004fb25) fs_bigclock_status_pane_ParamLimits

0xc155,	// (0x0004fb25) fs_bigclock_status_pane

0xc162,	// (0x0004fb32) main_fs_bigclock_clock_pane_ParamLimits

0xc162,	// (0x0004fb32) main_fs_bigclock_clock_pane

0xc172,	// (0x0004fb42) main_fs_bigclock_indi_pane_ParamLimits

0xc172,	// (0x0004fb42) main_fs_bigclock_indi_pane

0xc197,	// (0x0004fb67) main_fs_bigclock_swipe_pane_ParamLimits

0xc197,	// (0x0004fb67) main_fs_bigclock_swipe_pane

0xd9d1,	// (0x000513a1) main_fs_clock_dumped_data

0x41bc,	// (0x00047b8c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x41bc,	// (0x00047b8c) list_single_fs_bigclock_indicator_pane_g1

0x41d6,	// (0x00047ba6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x41d6,	// (0x00047ba6) list_single_fs_bigclock_indicator_pane_g2

0x41f0,	// (0x00047bc0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x41f0,	// (0x00047bc0) list_single_fs_bigclock_indicator_pane_g3

0x420a,	// (0x00047bda) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x420a,	// (0x00047bda) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x00053671) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x00053671) list_single_fs_bigclock_indicator_pane_g

0x422e,	// (0x00047bfe) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x422e,	// (0x00047bfe) list_single_fs_bigclock_indicator_pane_t1

0x4256,	// (0x00047c26) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4256,	// (0x00047c26) list_single_fs_bigclock_indicator_pane_t2

0x427e,	// (0x00047c4e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x427e,	// (0x00047c4e) list_single_fs_bigclock_indicator_pane_t3

0x42a6,	// (0x00047c76) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x42a6,	// (0x00047c76) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x0005367c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x0005367c) list_single_fs_bigclock_indicator_pane_t

0xcdeb,	// (0x000507bb) image3_infobar_fav_pane_ParamLimits

0xcdeb,	// (0x000507bb) image3_infobar_fav_pane

0xcdfb,	// (0x000507cb) image3_infobar_loc_pane_ParamLimits

0xcdfb,	// (0x000507cb) image3_infobar_loc_pane

0xce0f,	// (0x000507df) image3_infobar_time_pane_ParamLimits

0xce0f,	// (0x000507df) image3_infobar_time_pane

0x2895,	// (0x00046265) image3_infobar_time_pane_g1

0xce1f,	// (0x000507ef) image3_infobar_time_pane_t1

0x2895,	// (0x00046265) image3_infobar_loc_pane_g1

0xce2d,	// (0x000507fd) image3_infobar_loc_pane_g2

0x0001,

0xfe6e,	// (0x0005383e) image3_infobar_loc_pane_g

0xce35,	// (0x00050805) image3_infobar_loc_pane_t1

0x2895,	// (0x00046265) image3_infobar_fav_pane_g1

0xce43,	// (0x00050813) image3_infobar_fav_pane_g2

0x0001,

0xfe73,	// (0x00053843) image3_infobar_fav_pane_g

0xce4b,	// (0x0005081b) fs_bigclock_status_battery_pane

0xce54,	// (0x00050824) fs_bigclock_status_signal_pane

0xce5d,	// (0x0005082d) fs_bigclock_status_title_pane

0xce66,	// (0x00050836) fs_bigclock_status_signal_pane_g1

0xce6f,	// (0x0005083f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe78,	// (0x00053848) fs_bigclock_status_signal_pane_g

0xce77,	// (0x00050847) fs_bigclock_status_battery_pane_g1

0xce80,	// (0x00050850) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe7d,	// (0x0005384d) fs_bigclock_status_battery_pane_g

0xce88,	// (0x00050858) fs_bigclock_status_title_pane_t1

0x2895,	// (0x00046265) main_fs_bigclock_clock_pane_g1

0xce96,	// (0x00050866) main_fs_bigclock_clock_pane_g2

0xce96,	// (0x00050866) main_fs_bigclock_clock_pane_g3

0xce96,	// (0x00050866) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe82,	// (0x00053852) main_fs_bigclock_clock_pane_g

0xce9e,	// (0x0005086e) main_fs_bigclock_clock_pane_t1

0xceac,	// (0x0005087c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8b,	// (0x0005385b) main_fs_bigclock_clock_pane_t

0xcebb,	// (0x0005088b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xcebb,	// (0x0005088b) list_single_fs_bigclock_indicator_pane

0xcecc,	// (0x0005089c) list_single_fs_bigclock_pane_ParamLimits

0xcecc,	// (0x0005089c) list_single_fs_bigclock_pane

0xcf33,	// (0x00050903) main_fs_bigclock_indicator_pane_t1

0xcf42,	// (0x00050912) list_single_fs_bigclock_pane_g1

0xcf4a,	// (0x0005091a) list_single_fs_bigclock_pane_t1

0x2895,	// (0x00046265) main_fs_bigclock_swipe_pane_g1

0xcf88,	// (0x00050958) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe9c,	// (0x0005386c) main_fs_bigclock_swipe_pane_g

0xcf90,	// (0x00050960) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcf90,	// (0x00050960) main_fs_bigclock_swipe_pane_t1

0x7ada,	// (0x0004b4aa) call_type_pane_ParamLimits

0xd9d1,	// (0x000513a1) main_btmg_pane

0x4a26,	// (0x000483f6) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4a26,	// (0x000483f6) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0f,	// (0x000537df) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0f,	// (0x000537df) list_single_cale_mrui_row_pane_g

0xcd03,	// (0x000506d3) list_recal_vselct_arw_lo_pane

0xcd0b,	// (0x000506db) list_recal_vselct_arw_up_pane

0x4aa2,	// (0x00048472) list_recal_vselct_pane

0xcfad,	// (0x0005097d) btmg_button_pane

0xcfb5,	// (0x00050985) main_btmg_pane_g1

0xd9d1,	// (0x000513a1) bg_button_pane_cp044

0xcfbd,	// (0x0005098d) btmg_button_pane_t1

0x2452,	// (0x00045e22) aid_listscroll_gen

0xf063,	// (0x00052a33) main_cntbar_detail_pane

0x474f,	// (0x0004811f) list_cmail_folder_pane

0x475f,	// (0x0004812f) sp_fs_scroll_pane_cp03_ParamLimits

0xc885,	// (0x00050255) list_single_fs_dyc_pane_cp01_ParamLimits

0xc885,	// (0x00050255) list_single_fs_dyc_pane_cp01

0xcfcb,	// (0x0005099b) aid_size_cmail_indent

0x383d,	// (0x0004720d) list_single_dyc_row_pane_cp01

0xcfee,	// (0x000509be) cntbar_detail_list_pane_ParamLimits

0xcfee,	// (0x000509be) cntbar_detail_list_pane

0xd024,	// (0x000509f4) main_cntbar_detail_cont_pane_ParamLimits

0xd024,	// (0x000509f4) main_cntbar_detail_cont_pane

0xd030,	// (0x00050a00) scroll_pane_cp032_ParamLimits

0xd030,	// (0x00050a00) scroll_pane_cp032

0xd03c,	// (0x00050a0c) cntbar_detail_list_event_pane_ParamLimits

0xd03c,	// (0x00050a0c) cntbar_detail_list_event_pane

0xcffa,	// (0x000509ca) cntbar_detail_list_shct_pane

0xd04c,	// (0x00050a1c) aid_list_gen

0xe25c,	// (0x00051c2c) aid_scroll

0x3812,	// (0x000471e2) aid_size_touch_scroll_bar

0x4b09,	// (0x000484d9) aid_list_double

0xd055,	// (0x00050a25) aid_list_single

0x389e,	// (0x0004726e) aid_list_single_lg

0x4b12,	// (0x000484e2) aid_list_z_g_a_sm

0xd05e,	// (0x00050a2e) aid_list_z_g_d

0xd066,	// (0x00050a36) aid_txt_z_prm

0x4b1a,	// (0x000484ea) aid_txt_z_prm_cp01

0x4b28,	// (0x000484f8) aid_txt_z_sec

0xd074,	// (0x00050a44) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd074,	// (0x00050a44) main_cntbar_detail_cont_pane_g1

0xd081,	// (0x00050a51) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd081,	// (0x00050a51) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea1,	// (0x00053871) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea1,	// (0x00053871) main_cntbar_detail_cont_pane_g

0xd08d,	// (0x00050a5d) main_cntbar_detail_cont_pane_t1

0xd09b,	// (0x00050a6b) main_cntbar_detail_cont_pane_t2

0xd0a9,	// (0x00050a79) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea6,	// (0x00053876) main_cntbar_detail_cont_pane_t

0xd0b7,	// (0x00050a87) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd0b7,	// (0x00050a87) cell_cntbar_detail_list_shct_pane

0xd0c9,	// (0x00050a99) cntbar_detail_list_shct_pane_g1

0xd0d2,	// (0x00050aa2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfead,	// (0x0005387d) cntbar_detail_list_shct_pane_g

0xd0db,	// (0x00050aab) cntbar_detail_list_event_pane_g1_ParamLimits

0xd0db,	// (0x00050aab) cntbar_detail_list_event_pane_g1

0xd0e7,	// (0x00050ab7) cntbar_detail_list_event_pane_g2_ParamLimits

0xd0e7,	// (0x00050ab7) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb2,	// (0x00053882) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb2,	// (0x00053882) cntbar_detail_list_event_pane_g

0xd153,	// (0x00050b23) cntbar_detail_list_event_pane_t1_ParamLimits

0xd153,	// (0x00050b23) cntbar_detail_list_event_pane_t1

0xd168,	// (0x00050b38) cntbar_detail_list_event_pane_t2_ParamLimits

0xd168,	// (0x00050b38) cntbar_detail_list_event_pane_t2

0x0002,

0xfebf,	// (0x0005388f) cntbar_detail_list_event_pane_t_ParamLimits

0xfebf,	// (0x0005388f) cntbar_detail_list_event_pane_t

0x2895,	// (0x00046265) cell_cntbar_detail_list_shct_pane_g1

0xec93,	// (0x00052663) navi_pane_mv_g3

0xf063,	// (0x00052a33) main_cntbar_detail_pane_ParamLimits

0xd9d1,	// (0x000513a1) main_notif_wgt_pane

0xa098,	// (0x0004da68) aid_tch_main_mp4_pane_g4

0xa2bf,	// (0x0004dc8f) popup_slider_window_cp02

0x4aa2,	// (0x00048472) list_recal_day_event_pane

0xcfd4,	// (0x000509a4) cntbar_detail_btn_pane_ParamLimits

0xcfd4,	// (0x000509a4) cntbar_detail_btn_pane

0xcfe0,	// (0x000509b0) cntbar_detail_btn_pane_cp01_ParamLimits

0xcfe0,	// (0x000509b0) cntbar_detail_btn_pane_cp01

0xcffa,	// (0x000509ca) cntbar_detail_list_shct_pane_ParamLimits

0xd006,	// (0x000509d6) cntbar_detail_pane_g1_ParamLimits

0xd006,	// (0x000509d6) cntbar_detail_pane_g1

0xd012,	// (0x000509e2) cntbar_detail_pane_t1_ParamLimits

0xd012,	// (0x000509e2) cntbar_detail_pane_t1

0xd0f3,	// (0x00050ac3) cntbar_detail_list_event_pane_g3_ParamLimits

0xd0f3,	// (0x00050ac3) cntbar_detail_list_event_pane_g3

0xd10b,	// (0x00050adb) cntbar_detail_list_event_pane_g4_ParamLimits

0xd10b,	// (0x00050adb) cntbar_detail_list_event_pane_g4

0xd123,	// (0x00050af3) cntbar_detail_list_event_pane_g5_ParamLimits

0xd123,	// (0x00050af3) cntbar_detail_list_event_pane_g5

0xd13b,	// (0x00050b0b) cntbar_detail_list_event_pane_g6_ParamLimits

0xd13b,	// (0x00050b0b) cntbar_detail_list_event_pane_g6

0xd17d,	// (0x00050b4d) cntbar_detail_list_event_pane_t3_ParamLimits

0xd17d,	// (0x00050b4d) cntbar_detail_list_event_pane_t3

0xd18f,	// (0x00050b5f) popup_notif_wgt_window_ParamLimits

0xd18f,	// (0x00050b5f) popup_notif_wgt_window

0xd19d,	// (0x00050b6d) popup_submenu_window_cp01_ParamLimits

0xd19d,	// (0x00050b6d) popup_submenu_window_cp01

0xecd4,	// (0x000526a4) bg_popup_window_pane_cp10

0xd1a9,	// (0x00050b79) listscroll_notif_wgt_pane

0xd1b1,	// (0x00050b81) list_notif_wgt_window

0xd1ba,	// (0x00050b8a) scroll_pane_cp033

0xd1c3,	// (0x00050b93) list_notif_wgt_row_pane_ParamLimits

0xd1c3,	// (0x00050b93) list_notif_wgt_row_pane

0xd1d5,	// (0x00050ba5) aid_size_list_notif_wgt_del

0xd1de,	// (0x00050bae) list_notif_wgt_row_pane_g1

0xd1e6,	// (0x00050bb6) list_notif_wgt_row_pane_g2

0xd1ee,	// (0x00050bbe) list_notif_wgt_row_pane_g3

0x0002,

0xfec6,	// (0x00053896) list_notif_wgt_row_pane_g

0xd1f7,	// (0x00050bc7) list_notif_wgt_row_pane_t1

0xd205,	// (0x00050bd5) list_notif_wgt_row_pane_t2

0xd213,	// (0x00050be3) list_notif_wgt_row_pane_t3

0x0002,

0xfecd,	// (0x0005389d) list_notif_wgt_row_pane_t

0x350a,	// (0x00046eda) list_recal_day_event_pane_g1

0xd221,	// (0x00050bf1) list_recal_day_event_pane_t1

0xd9d1,	// (0x000513a1) bg_button_pane_cp045

0xd230,	// (0x00050c00) cntbar_detail_btn_pane_t1

0x245a,	// (0x00045e2a) main_callh_pane_ParamLimits

0x245a,	// (0x00045e2a) main_callh_pane

0xd9d1,	// (0x000513a1) main_coverflow0_pane

0xd9d1,	// (0x000513a1) main_wgtman_pane

0xc1a9,	// (0x0004fb79) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc1a9,	// (0x0004fb79) main_fs_bigclock_unlock_btn_pane

0x4729,	// (0x000480f9) bg_button_pane_cp16

0x4739,	// (0x00048109) cell_tport_appsw_pane_g3

0xd23e,	// (0x00050c0e) cf0_flow_pane_ParamLimits

0xd23e,	// (0x00050c0e) cf0_flow_pane

0xd24d,	// (0x00050c1d) listscroll_cf0_pane

0xd256,	// (0x00050c26) main_cf0_pane_g1

0xd260,	// (0x00050c30) main_cf0_pane_t1_ParamLimits

0xd260,	// (0x00050c30) main_cf0_pane_t1

0xd272,	// (0x00050c42) main_cf0_pane_t2_ParamLimits

0xd272,	// (0x00050c42) main_cf0_pane_t2

0x0001,

0xfed4,	// (0x000538a4) main_cf0_pane_t_ParamLimits

0xfed4,	// (0x000538a4) main_cf0_pane_t

0xd284,	// (0x00050c54) scroll_pane_cp11

0xd28d,	// (0x00050c5d) cf0_flow_pane_g1

0xd295,	// (0x00050c65) cf0_flow_pane_g2

0x0001,

0xfed9,	// (0x000538a9) cf0_flow_pane_g

0xd29d,	// (0x00050c6d) cf0_flow_pane_t1

0xd9d1,	// (0x000513a1) main_call6_pane

0xd9d1,	// (0x000513a1) main_calllock_pane

0xd2ab,	// (0x00050c7b) call6_btn_grp_pane_ParamLimits

0xd2ab,	// (0x00050c7b) call6_btn_grp_pane

0xd2b8,	// (0x00050c88) call6_pane_g1_ParamLimits

0xd2b8,	// (0x00050c88) call6_pane_g1

0xd2c5,	// (0x00050c95) popup_call6_1st_window_ParamLimits

0xd2c5,	// (0x00050c95) popup_call6_1st_window

0xd2d1,	// (0x00050ca1) popup_call6_2nd_window_ParamLimits

0xd2d1,	// (0x00050ca1) popup_call6_2nd_window

0xd2dd,	// (0x00050cad) cell_call6_btn_pane_ParamLimits

0xd2dd,	// (0x00050cad) cell_call6_btn_pane

0xecd4,	// (0x000526a4) bg_popup_call2_in_pane_cp03

0xd2ec,	// (0x00050cbc) popup_call6_1st_window_g1

0xd2f4,	// (0x00050cc4) popup_call6_1st_window_g2

0xd2fc,	// (0x00050ccc) popup_call6_1st_window_g3

0x0002,

0xfede,	// (0x000538ae) popup_call6_1st_window_g

0xd304,	// (0x00050cd4) popup_call6_1st_window_t1

0xd313,	// (0x00050ce3) popup_call6_1st_window_t2

0xd321,	// (0x00050cf1) popup_call6_1st_window_t3

0x0002,

0xfee5,	// (0x000538b5) popup_call6_1st_window_t

0xecd4,	// (0x000526a4) bg_popup_call2_in_pane_cp04

0xd2ec,	// (0x00050cbc) popup_call6_2nd_window_g1

0xd2f4,	// (0x00050cc4) popup_call6_2nd_window_g2

0xd2fc,	// (0x00050ccc) popup_call6_2nd_window_g3

0x0002,

0xfede,	// (0x000538ae) popup_call6_2nd_window_g

0xd304,	// (0x00050cd4) popup_call6_2nd_window_t1

0xd9d1,	// (0x000513a1) bg_button_pane_cp15

0xd32f,	// (0x00050cff) cell_call6_btn_pane_g1

0xd338,	// (0x00050d08) cell_call6_btn_pane_t1

0xd347,	// (0x00050d17) listscroll_wgtman_pane_ParamLimits

0xd347,	// (0x00050d17) listscroll_wgtman_pane

0xd361,	// (0x00050d31) wgtman_btn_pane_ParamLimits

0xd361,	// (0x00050d31) wgtman_btn_pane

0xeb15,	// (0x000524e5) aid_scroll_copy1

0xd394,	// (0x00050d64) list_wgtman_pane

0xd39e,	// (0x00050d6e) wgtman_btn_pane_g1_ParamLimits

0xd39e,	// (0x00050d6e) wgtman_btn_pane_g1

0xd3c6,	// (0x00050d96) wgtman_btn_pane_t1_ParamLimits

0xd3c6,	// (0x00050d96) wgtman_btn_pane_t1

0xd3fd,	// (0x00050dcd) wgtman_btn_pane_t2_ParamLimits

0xd3fd,	// (0x00050dcd) wgtman_btn_pane_t2

0x0001,

0xfeec,	// (0x000538bc) wgtman_btn_pane_t_ParamLimits

0xfeec,	// (0x000538bc) wgtman_btn_pane_t

0xd414,	// (0x00050de4) listrow_wgtman_pane_ParamLimits

0xd414,	// (0x00050de4) listrow_wgtman_pane

0xd425,	// (0x00050df5) listrow_wgtman_pane_g1

0xd42e,	// (0x00050dfe) listrow_wgtman_pane_g2

0x0001,

0xfef1,	// (0x000538c1) listrow_wgtman_pane_g

0xd436,	// (0x00050e06) listrow_wgtman_pane_t1

0xd444,	// (0x00050e14) listrow_wgtman_pane_t2

0x0001,

0xfef6,	// (0x000538c6) listrow_wgtman_pane_t

0xd452,	// (0x00050e22) wait_bar_pane_cp09

0xd45a,	// (0x00050e2a) main_calllock_btn_pane

0xd462,	// (0x00050e32) main_calllock_pane_g1

0xd9d1,	// (0x000513a1) bg_button_pane_cp17

0xd46b,	// (0x00050e3b) main_calllock_btn_pane_g1

0xd474,	// (0x00050e44) main_calllock_btn_pane_t1

0xd9d1,	// (0x000513a1) main_dialer3_pane

0xd9d1,	// (0x000513a1) main_fmrd2_pane

0x2895,	// (0x00046265) main_fs_bigclock_unlock_btn_pane_g1

0xd48b,	// (0x00050e5b) main_fs_bigclock_unlock_btn_pane_t1

0xd499,	// (0x00050e69) area_fmrd2_info_pane_ParamLimits

0xd499,	// (0x00050e69) area_fmrd2_info_pane

0xd4a5,	// (0x00050e75) area_fmrd2_visual_pane_ParamLimits

0xd4a5,	// (0x00050e75) area_fmrd2_visual_pane

0xd4b3,	// (0x00050e83) fmrd2_indi_pane_ParamLimits

0xd4b3,	// (0x00050e83) fmrd2_indi_pane

0xd4c0,	// (0x00050e90) area_fmrd2_visual_pane_g1

0xd4c8,	// (0x00050e98) area_fmrd2_visual_pane_t1

0xd4d6,	// (0x00050ea6) area_fmrd2_visual_pane_t2

0xd4e4,	// (0x00050eb4) area_fmrd2_visual_pane_t3

0x0002,

0xff00,	// (0x000538d0) area_fmrd2_visual_pane_t

0xd4f2,	// (0x00050ec2) area_fmrd2_info_pane_g1

0xd4fa,	// (0x00050eca) area_fmrd2_info_pane_t1

0xd508,	// (0x00050ed8) area_fmrd2_info_pane_t2

0xd516,	// (0x00050ee6) area_fmrd2_info_pane_t3

0xd524,	// (0x00050ef4) area_fmrd2_info_pane_t4

0x0003,

0xff07,	// (0x000538d7) area_fmrd2_info_pane_t

0xd532,	// (0x00050f02) fmrd2_indi_pane_t1

0xd540,	// (0x00050f10) fmrd2_indi_pane_t2

0xd54e,	// (0x00050f1e) fmrd2_indi_pane_t3

0x0002,

0xff10,	// (0x000538e0) fmrd2_indi_pane_t

0x4219,	// (0x00047be9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4219,	// (0x00047be9) list_single_fs_bigclock_indicator_pane_g5

0x42bb,	// (0x00047c8b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x42bb,	// (0x00047c8b) list_single_fs_bigclock_indicator_pane_t5

0xc997,	// (0x00050367) aid_cell_bcale_month_pane_ParamLimits

0xc997,	// (0x00050367) aid_cell_bcale_month_pane

0xc9a3,	// (0x00050373) bcale_month_pane_ParamLimits

0xc9a3,	// (0x00050373) bcale_month_pane

0xc9af,	// (0x0005037f) bcale_preview_pane_ParamLimits

0xc9af,	// (0x0005037f) bcale_preview_pane

0xcf4a,	// (0x0005091a) list_single_fs_bigclock_pane_t1_ParamLimits

0xcf64,	// (0x00050934) list_single_fs_bigclock_pane_t2_ParamLimits

0xcf64,	// (0x00050934) list_single_fs_bigclock_pane_t2

0x0001,

0xfe97,	// (0x00053867) list_single_fs_bigclock_pane_t_ParamLimits

0xfe97,	// (0x00053867) list_single_fs_bigclock_pane_t

0xd483,	// (0x00050e53) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfefb,	// (0x000538cb) main_fs_bigclock_unlock_btn_pane_g

0xd55c,	// (0x00050f2c) aid_dia3_key_size_ParamLimits

0xd55c,	// (0x00050f2c) aid_dia3_key_size

0xd568,	// (0x00050f38) aid_dia3_listrow_size_ParamLimits

0xd568,	// (0x00050f38) aid_dia3_listrow_size

0xd576,	// (0x00050f46) dia3_keypad_fun_pane_ParamLimits

0xd576,	// (0x00050f46) dia3_keypad_fun_pane

0xd582,	// (0x00050f52) dia3_keypad_num_pane_ParamLimits

0xd582,	// (0x00050f52) dia3_keypad_num_pane

0xd58e,	// (0x00050f5e) dia3_listscroll_pane_ParamLimits

0xd58e,	// (0x00050f5e) dia3_listscroll_pane

0xd59a,	// (0x00050f6a) dia3_numentry_pane_ParamLimits

0xd59a,	// (0x00050f6a) dia3_numentry_pane

0xd5a6,	// (0x00050f76) dia3_list_pane

0xd5af,	// (0x00050f7f) scroll_pane_cp12

0xd9d1,	// (0x000513a1) bg_dia3_numentry_pane

0xd5b8,	// (0x00050f88) dia3_numentry_pane_t1

0xd5c7,	// (0x00050f97) cell_dia3_key_num_pane

0xd5cf,	// (0x00050f9f) cell_dia3_key0_fun_pane_ParamLimits

0xd5cf,	// (0x00050f9f) cell_dia3_key0_fun_pane

0xd5dc,	// (0x00050fac) cell_dia3_key1_fun_pane_ParamLimits

0xd5dc,	// (0x00050fac) cell_dia3_key1_fun_pane

0xd5e9,	// (0x00050fb9) dia3_listrow_pane

0x3f1d,	// (0x000478ed) bg_dia3_numentry_pane_g1

0xd9d1,	// (0x000513a1) bg_button_pane_cp21

0xd5f6,	// (0x00050fc6) cell_dia3_key_num_pane_t1

0xd604,	// (0x00050fd4) cell_dia3_key_num_pane_t2

0xd613,	// (0x00050fe3) cell_dia3_key_num_pane_t3

0xd622,	// (0x00050ff2) cell_dia3_key_num_pane_t4

0x0003,

0xff17,	// (0x000538e7) cell_dia3_key_num_pane_t

0xd9d1,	// (0x000513a1) bg_button_pane_cp19

0xd631,	// (0x00051001) cell_dia3_key0_fun_pane_g1

0xd9d1,	// (0x000513a1) bg_button_pane_cp20

0xd639,	// (0x00051009) cell_dia3_key1_fun_pane_g1

0xd641,	// (0x00051011) area_left_week_number_pane

0xd64a,	// (0x0005101a) area_top_day_name_pane

0xd653,	// (0x00051023) frame_month_view_pane

0xd65b,	// (0x0005102b) grid_month_view_pane

0xd665,	// (0x00051035) cell_top_day_name_pane_ParamLimits

0xd665,	// (0x00051035) cell_top_day_name_pane

0xd67b,	// (0x0005104b) cell_area_left_week_number_pane_ParamLimits

0xd67b,	// (0x0005104b) cell_area_left_week_number_pane

0xd68f,	// (0x0005105f) cell_month_view_pane_ParamLimits

0xd68f,	// (0x0005105f) cell_month_view_pane

0xd6aa,	// (0x0005107a) frm_month_g1

0xd6b3,	// (0x00051083) frm_month_g2

0xd6bb,	// (0x0005108b) frm_month_g3

0xd6c3,	// (0x00051093) frm_month_g4

0xd6cb,	// (0x0005109b) frm_month_g5

0xd6d3,	// (0x000510a3) frm_month_g6

0xd6db,	// (0x000510ab) frm_month_g7

0xd6e3,	// (0x000510b3) frm_month_g8

0xd6ec,	// (0x000510bc) frm_month_g9

0xd6f5,	// (0x000510c5) frm_month_g10

0xa68d,	// (0x0004e05d) frm_month_g11

0xd6fe,	// (0x000510ce) frm_month_g12

0xd707,	// (0x000510d7) frm_month_g13

0xd710,	// (0x000510e0) frm_month_g14

0xd719,	// (0x000510e9) frm_month_g15

0xd722,	// (0x000510f2) frm_month_g16

0x000f,

0xff20,	// (0x000538f0) frm_month_g

0xd72b,	// (0x000510fb) cell_top_day_name_pane_t1

0xd73a,	// (0x0005110a) cell_area_left_week_number_pane_g1

0xd72b,	// (0x000510fb) cell_area_left_week_number_pane_t1

0x2895,	// (0x00046265) cell_month_view_pane_g1

0xd742,	// (0x00051112) cell_month_view_pane_t1

0xd9d1,	// (0x000513a1) main_fps_pane

0x452f,	// (0x00047eff) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x452f,	// (0x00047eff) cmail_ddmenu_btn02_pane_cp1

0x454b,	// (0x00047f1b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x454b,	// (0x00047f1b) cmail_ddmenu_btn02_pane_cp2

0xccd3,	// (0x000506a3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xccd3,	// (0x000506a3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe48,	// (0x00053818) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe48,	// (0x00053818) cmail_ddmenu_btn02_pane_g

0xccf1,	// (0x000506c1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xccf1,	// (0x000506c1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe4d,	// (0x0005381d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe4d,	// (0x0005381d) cmail_ddmenu_btn02_pane_t

0xd751,	// (0x00051121) fps_text_pane_ParamLimits

0xd751,	// (0x00051121) fps_text_pane

0xd75e,	// (0x0005112e) main_fps_pane_g1_ParamLimits

0xd75e,	// (0x0005112e) main_fps_pane_g1

0xd76a,	// (0x0005113a) wait_bar_pane_cp010_ParamLimits

0xd76a,	// (0x0005113a) wait_bar_pane_cp010

0xd776,	// (0x00051146) fps_text_pane_t1_ParamLimits

0xd776,	// (0x00051146) fps_text_pane_t1

0xa67b,	// (0x0004e04b) cam4_image_uncrop_pane_g1

0xa684,	// (0x0004e054) cam4_image_uncrop_pane_g2

0xa68d,	// (0x0004e05d) cam4_image_uncrop_pane_g3

0xa696,	// (0x0004e066) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x000532f0) cam4_image_uncrop_pane_g

0xd5e9,	// (0x00050fb9) dia3_listrow_pane_ParamLimits

0xd9d1,	// (0x000513a1) main_phob2_pane

0xc82a,	// (0x000501fa) cell_tport_appsw_pane_cp02_ParamLimits

0xc82a,	// (0x000501fa) cell_tport_appsw_pane_cp02

0xc837,	// (0x00050207) cell_tport_appsw_pane_cp03_ParamLimits

0xc837,	// (0x00050207) cell_tport_appsw_pane_cp03

0xd9d1,	// (0x000513a1) phob2_contact_card_pane

0xd9d1,	// (0x000513a1) phob2_listscroll_pane

0xd78f,	// (0x0005115f) phob2_list_pane

0xd797,	// (0x00051167) scroll_pane_cp034

0xd79f,	// (0x0005116f) phob2_cc_data_pane_ParamLimits

0xd79f,	// (0x0005116f) phob2_cc_data_pane

0xd7b7,	// (0x00051187) phob2_cc_listscroll_pane_ParamLimits

0xd7b7,	// (0x00051187) phob2_cc_listscroll_pane

0xd7cf,	// (0x0005119f) list_double_large_graphic_phob2_pane_ParamLimits

0xd7cf,	// (0x0005119f) list_double_large_graphic_phob2_pane

0xd7e2,	// (0x000511b2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd7e2,	// (0x000511b2) list_double_large_graphic_phob2_pane_g1

0xd7ef,	// (0x000511bf) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd7ef,	// (0x000511bf) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff41,	// (0x00053911) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff41,	// (0x00053911) list_double_large_graphic_phob2_pane_g

0xd7fb,	// (0x000511cb) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd7fb,	// (0x000511cb) list_double_large_graphic_phob2_pane_t1

0xd810,	// (0x000511e0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd810,	// (0x000511e0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff46,	// (0x00053916) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff46,	// (0x00053916) list_double_large_graphic_phob2_pane_t

0xd9d1,	// (0x000513a1) list_highlight_pane_cp024

0xd822,	// (0x000511f2) phob2_cc_button_pane

0xd82a,	// (0x000511fa) phob2_cc_data_pane_g1_ParamLimits

0xd82a,	// (0x000511fa) phob2_cc_data_pane_g1

0xd836,	// (0x00051206) phob2_cc_data_pane_g2_ParamLimits

0xd836,	// (0x00051206) phob2_cc_data_pane_g2

0x0001,

0xff4b,	// (0x0005391b) phob2_cc_data_pane_g_ParamLimits

0xff4b,	// (0x0005391b) phob2_cc_data_pane_g

0xd842,	// (0x00051212) phob2_cc_data_pane_t1_ParamLimits

0xd842,	// (0x00051212) phob2_cc_data_pane_t1

0xd854,	// (0x00051224) phob2_cc_data_pane_t2_ParamLimits

0xd854,	// (0x00051224) phob2_cc_data_pane_t2

0xd866,	// (0x00051236) phob2_cc_data_pane_t3_ParamLimits

0xd866,	// (0x00051236) phob2_cc_data_pane_t3

0x0002,

0xff50,	// (0x00053920) phob2_cc_data_pane_t_ParamLimits

0xff50,	// (0x00053920) phob2_cc_data_pane_t

0xd878,	// (0x00051248) phob2_cc_list_pane_ParamLimits

0xd878,	// (0x00051248) phob2_cc_list_pane

0x3e3a,	// (0x0004780a) scroll_pane_cp035_ParamLimits

0x3e3a,	// (0x0004780a) scroll_pane_cp035

0xf063,	// (0x00052a33) bg_button_pane_cp033

0xd884,	// (0x00051254) phob2_cc_button_pane_g1

0xd890,	// (0x00051260) phob2_cc_button_pane_t1

0xd8a5,	// (0x00051275) phob2_cc_button_pane_t2

0x0001,

0xff57,	// (0x00053927) phob2_cc_button_pane_t

0xd8b7,	// (0x00051287) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd8b7,	// (0x00051287) list_double_large_graphic_phob2_cc_pane

0xd8d2,	// (0x000512a2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd8d2,	// (0x000512a2) list_double_large_graphic_phob2_cc_pane_g1

0xd8e3,	// (0x000512b3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd8e3,	// (0x000512b3) list_double_large_graphic_phob2_cc_pane_g2

0xd8f2,	// (0x000512c2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd8f2,	// (0x000512c2) list_double_large_graphic_phob2_cc_pane_g3

0xd901,	// (0x000512d1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd901,	// (0x000512d1) list_double_large_graphic_phob2_cc_pane_g4

0xd912,	// (0x000512e2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd912,	// (0x000512e2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff5c,	// (0x0005392c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff5c,	// (0x0005392c) list_double_large_graphic_phob2_cc_pane_g

0xd921,	// (0x000512f1) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd921,	// (0x000512f1) list_double_large_graphic_phob2_cc_pane_t1

0xd94a,	// (0x0005131a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd94a,	// (0x0005131a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff67,	// (0x00053937) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff67,	// (0x00053937) list_double_large_graphic_phob2_cc_pane_t

0xd973,	// (0x00051343) list_highlight_pane_cp025_ParamLimits

0xd973,	// (0x00051343) list_highlight_pane_cp025

0xf063,	// (0x00052a33) bg_button_pane_cp033_ParamLimits

0xd884,	// (0x00051254) phob2_cc_button_pane_g1_ParamLimits

0xd890,	// (0x00051260) phob2_cc_button_pane_t1_ParamLimits

0xd8a5,	// (0x00051275) phob2_cc_button_pane_t2_ParamLimits

0xff57,	// (0x00053927) phob2_cc_button_pane_t_ParamLimits

0x6175,	// (0x00049b45) popup_wgtman_window

0x3f3d,	// (0x0004790d) scroll_pane_cp038

0xd37c,	// (0x00050d4c) wgtman_btn_pane_cp_01_ParamLimits

0xd37c,	// (0x00050d4c) wgtman_btn_pane_cp_01

0xd981,	// (0x00051351) wgtman_content_pane

0xd98a,	// (0x0005135a) wgtman_heading_pane

0xd9d1,	// (0x000513a1) bg_heading_pane_cp02

0xd993,	// (0x00051363) wgtman_heading_pane_g1

0xd99b,	// (0x0005136b) wgtman_heading_pane_t1

0xd9a9,	// (0x00051379) scroll_pane_cp036

0xd9b1,	// (0x00051381) wgtman_list_pane

0xd9b9,	// (0x00051389) wgtman_list_pane_t1_ParamLimits

0xd9b9,	// (0x00051389) wgtman_list_pane_t1

0xa5e0,	// (0x0004dfb0) cam4_grid_pane

0xb216,	// (0x0004ebe6) bg_button_pane_cp015_ParamLimits

0xb226,	// (0x0004ebf6) bg_button_pane_cp016_ParamLimits

0xb239,	// (0x0004ec09) bg_button_pane_cp017_ParamLimits

0xb28b,	// (0x0004ec5b) popup_vitu2_query_window_g3_ParamLimits

0xb28b,	// (0x0004ec5b) popup_vitu2_query_window_g3

0xb33e,	// (0x0004ed0e) popup_vitu2_query_window_t6_ParamLimits

0xb33e,	// (0x0004ed0e) popup_vitu2_query_window_t6

0xb369,	// (0x0004ed39) popup_vitu2_query_window_t7_ParamLimits

0xb369,	// (0x0004ed39) popup_vitu2_query_window_t7

0xf0b2,	// (0x00052a82) cam4_grid_pane_g1

0xf0bb,	// (0x00052a8b) cam4_grid_pane_g2

0xf0c4,	// (0x00052a94) cam4_grid_pane_g3

0xf0cd,	// (0x00052a9d) cam4_grid_pane_g4

0x0003,

0xff6c,	// (0x0005393c) cam4_grid_pane_g

0x6e37,	// (0x0004a807) aid_placing_vt_slider_lsc_ParamLimits

0x70e1,	// (0x0004aab1) vidtel_button_pane_ParamLimits

0x70e1,	// (0x0004aab1) vidtel_button_pane

0xd9d1,	// (0x000513a1) bg_button_pane_cp034

0xf0d6,	// (0x00052aa6) vidtel_button_pane_g1

0xf0de,	// (0x00052aae) vidtel_button_pane_t1

0x34ec,	// (0x00046ebc) aid_size_vtel_slider_touch

0x3e3a,	// (0x0004780a) scroll_pane_cp039

0x3f69,	// (0x00047939) ncim_query_button_pane_cp01_ParamLimits

0x3f88,	// (0x00047958) ncimui_query_pane_g1_ParamLimits

0xf063,	// (0x00052a33) input_focus_pane_cp012_ParamLimits

0x3fad,	// (0x0004797d) ncim_query_entry_pane_t1_ParamLimits

0x3e3a,	// (0x0004780a) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
