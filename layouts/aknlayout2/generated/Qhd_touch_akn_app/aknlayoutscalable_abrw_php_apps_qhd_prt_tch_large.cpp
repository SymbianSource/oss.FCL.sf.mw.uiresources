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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007fe11 };

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
0x5615,	// (0x00085426) Screen

0x5621,	// (0x00085432) application_window

0x567d,	// (0x0008548e) area_bottom_pane_ParamLimits

0x567d,	// (0x0008548e) area_bottom_pane

0x56d6,	// (0x000854e7) area_top_pane_ParamLimits

0x56d6,	// (0x000854e7) area_top_pane

0x573a,	// (0x0008554b) call_video_uplink_pane_ParamLimits

0x573a,	// (0x0008554b) call_video_uplink_pane

0x5777,	// (0x00085588) main_pane_ParamLimits

0x5777,	// (0x00085588) main_pane

0x123f,	// (0x00081050) context_pane

0x88db,	// (0x000886ec) navi_pane

0x88fb,	// (0x0008870c) popup_cale_events_window_ParamLimits

0x88fb,	// (0x0008870c) popup_cale_events_window

0x1252,	// (0x00081063) popup_mup_playback_window

0x8913,	// (0x00088724) signal_pane

0xe0db,	// (0x0008deec) main_browser_pane

0xebbc,	// (0x0008e9cd) main_burst_pane

0x8758,	// (0x00088569) main_calc_pane

0xebbc,	// (0x0008e9cd) main_cale_day_pane

0xe0db,	// (0x0008deec) main_cale_month_pane

0xebbc,	// (0x0008e9cd) main_cale_week_pane

0xebbc,	// (0x0008e9cd) main_call_pane

0xddad,	// (0x0008dbbe) main_call_poc_pane

0xebbc,	// (0x0008e9cd) main_camera_pane

0xebbc,	// (0x0008e9cd) main_chi_dic_pane

0xea41,	// (0x0008e852) main_clock_pane

0xddad,	// (0x0008dbbe) main_fmradio_pane

0xebbc,	// (0x0008e9cd) main_graph_messa_pane

0xddad,	// (0x0008dbbe) main_help_pane

0xe0db,	// (0x0008deec) main_im_pane

0xe008,	// (0x0008de19) main_image_pane_ParamLimits

0xe008,	// (0x0008de19) main_image_pane

0xddad,	// (0x0008dbbe) main_location2_pane

0xebbc,	// (0x0008e9cd) main_location_pane

0xddad,	// (0x0008dbbe) main_messa_pane

0xddad,	// (0x0008dbbe) main_mp2_pane

0xebbc,	// (0x0008e9cd) main_mp_pane

0xddad,	// (0x0008dbbe) main_msg_pane

0xddad,	// (0x0008dbbe) main_mup_eq_pane

0xddad,	// (0x0008dbbe) main_mup_pane

0xe0db,	// (0x0008deec) main_notes_pane

0xddad,	// (0x0008dbbe) main_pec_pane

0xddad,	// (0x0008dbbe) main_phob_pane

0xddad,	// (0x0008dbbe) main_pinb_pane

0xddad,	// (0x0008dbbe) main_postcard_pane

0xddad,	// (0x0008dbbe) main_qdial_pane

0xebbc,	// (0x0008e9cd) main_skin_pane

0xddad,	// (0x0008dbbe) main_smil2_pane

0xebbc,	// (0x0008e9cd) main_smil_pane

0xebbc,	// (0x0008e9cd) main_video_pane

0xebbc,	// (0x0008e9cd) main_video_tele_pane

0xe008,	// (0x0008de19) main_viewer_pane_ParamLimits

0xe008,	// (0x0008de19) main_viewer_pane

0xebbc,	// (0x0008e9cd) main_vorec_pane

0x87a4,	// (0x000885b5) popup_blid_sat_info_window_ParamLimits

0x87a4,	// (0x000885b5) popup_blid_sat_info_window

0x87c4,	// (0x000885d5) popup_dyc_status_message_window_ParamLimits

0x87c4,	// (0x000885d5) popup_dyc_status_message_window

0x87d4,	// (0x000885e5) popup_grid_large_graphic_window_ParamLimits

0x87d4,	// (0x000885e5) popup_grid_large_graphic_window

0x8865,	// (0x00088676) popup_loc_request_window_ParamLimits

0x8865,	// (0x00088676) popup_loc_request_window

0x88b3,	// (0x000886c4) popup_wml_address_window_ParamLimits

0x88b3,	// (0x000886c4) popup_wml_address_window

0x8630,	// (0x00088441) call_muted_g1

0x82f2,	// (0x00088103) popup_call_audio_conf_window_ParamLimits

0x82f2,	// (0x00088103) popup_call_audio_conf_window

0x8640,	// (0x00088451) popup_call_audio_first_window_ParamLimits

0x8640,	// (0x00088451) popup_call_audio_first_window

0x8680,	// (0x00088491) popup_call_audio_in_window_ParamLimits

0x8680,	// (0x00088491) popup_call_audio_in_window

0x86a4,	// (0x000884b5) popup_call_audio_out_window_ParamLimits

0x86a4,	// (0x000884b5) popup_call_audio_out_window

0x86c6,	// (0x000884d7) popup_call_audio_second_window_ParamLimits

0x86c6,	// (0x000884d7) popup_call_audio_second_window

0x86f6,	// (0x00088507) popup_call_audio_wait_window_ParamLimits

0x86f6,	// (0x00088507) popup_call_audio_wait_window

0x8717,	// (0x00088528) popup_number_entry_window_ParamLimits

0x8717,	// (0x00088528) popup_number_entry_window

0xd99a,	// (0x0008d7ab) bg_popup_call_pane_cp05_ParamLimits

0xd99a,	// (0x0008d7ab) bg_popup_call_pane_cp05

0xd9ba,	// (0x0008d7cb) popup_number_entry_window_t1

0xd9cd,	// (0x0008d7de) popup_number_entry_window_t2

0xd9df,	// (0x0008d7f0) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0008eee9) popup_number_entry_window_t

0xd9f1,	// (0x0008d802) text_title_cp2

0xda04,	// (0x0008d815) bg_popup_call_pane_cp_ParamLimits

0xda04,	// (0x0008d815) bg_popup_call_pane_cp

0xda12,	// (0x0008d823) call_thumbnail_pane

0xda1a,	// (0x0008d82b) popup_call_audio_in_window_g1_ParamLimits

0xda1a,	// (0x0008d82b) popup_call_audio_in_window_g1

0xda26,	// (0x0008d837) popup_call_audio_in_window_g2_ParamLimits

0xda26,	// (0x0008d837) popup_call_audio_in_window_g2

0xda32,	// (0x0008d843) popup_call_audio_in_window_g3_ParamLimits

0xda32,	// (0x0008d843) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0008eef2) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0008eef2) popup_call_audio_in_window_g

0xda3e,	// (0x0008d84f) popup_call_audio_in_window_t1_ParamLimits

0xda3e,	// (0x0008d84f) popup_call_audio_in_window_t1

0xda5a,	// (0x0008d86b) popup_call_audio_in_window_t2_ParamLimits

0xda5a,	// (0x0008d86b) popup_call_audio_in_window_t2

0xda76,	// (0x0008d887) popup_call_audio_in_window_t3_ParamLimits

0xda76,	// (0x0008d887) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0008eef9) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0008eef9) popup_call_audio_in_window_t

0xda04,	// (0x0008d815) bg_popup_call_pane_cp01_ParamLimits

0xda04,	// (0x0008d815) bg_popup_call_pane_cp01

0xda12,	// (0x0008d823) call_thumbnail_pane_cp02

0xda89,	// (0x0008d89a) call_type_pane_cp022

0xda91,	// (0x0008d8a2) popup_call_audio_out_window_g1_ParamLimits

0xda91,	// (0x0008d8a2) popup_call_audio_out_window_g1

0xdaa3,	// (0x0008d8b4) popup_call_audio_out_window_g2_ParamLimits

0xdaa3,	// (0x0008d8b4) popup_call_audio_out_window_g2

0xdaaf,	// (0x0008d8c0) popup_call_audio_out_window_g3_ParamLimits

0xdaaf,	// (0x0008d8c0) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0008ef00) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0008ef00) popup_call_audio_out_window_g

0xdac1,	// (0x0008d8d2) popup_call_audio_out_window_t1_ParamLimits

0xdac1,	// (0x0008d8d2) popup_call_audio_out_window_t1

0xdad9,	// (0x0008d8ea) popup_call_audio_out_window_t2_ParamLimits

0xdad9,	// (0x0008d8ea) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0008ef07) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0008ef07) popup_call_audio_out_window_t

0xdaee,	// (0x0008d8ff) bg_popup_call_pane_ParamLimits

0xdaee,	// (0x0008d8ff) bg_popup_call_pane

0x5986,	// (0x00085797) call_thumbnail_pane_cp_ParamLimits

0x5986,	// (0x00085797) call_thumbnail_pane_cp

0xdb72,	// (0x0008d983) call_type_pane_cp01_ParamLimits

0xdb72,	// (0x0008d983) call_type_pane_cp01

0xdbb6,	// (0x0008d9c7) popup_call_audio_first_window_g1_ParamLimits

0xdbb6,	// (0x0008d9c7) popup_call_audio_first_window_g1

0xdc02,	// (0x0008da13) popup_call_audio_first_window_g2_ParamLimits

0xdc02,	// (0x0008da13) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0008ef0c) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0008ef0c) popup_call_audio_first_window_g

0xdc46,	// (0x0008da57) popup_call_audio_first_window_t1_ParamLimits

0xdc46,	// (0x0008da57) popup_call_audio_first_window_t1

0xdcf2,	// (0x0008db03) popup_call_audio_first_window_t4_ParamLimits

0xdcf2,	// (0x0008db03) popup_call_audio_first_window_t4

0xdd7e,	// (0x0008db8f) popup_call_audio_first_window_t5_ParamLimits

0xdd7e,	// (0x0008db8f) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0008ef11) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0008ef11) popup_call_audio_first_window_t

0xddad,	// (0x0008dbbe) bg_popup_call_pane_cp02

0xddb7,	// (0x0008dbc8) call_type_pane_cp023

0xddbf,	// (0x0008dbd0) popup_call_audio_wait_window_g1

0xddc7,	// (0x0008dbd8) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0008ef18) popup_call_audio_wait_window_g

0xddcf,	// (0x0008dbe0) popup_call_audio_wait_window_t3

0xdddd,	// (0x0008dbee) bg_popup_call_pane_cp03_ParamLimits

0xdddd,	// (0x0008dbee) bg_popup_call_pane_cp03

0xde3d,	// (0x0008dc4e) call_thumbnail_pane_cp011_ParamLimits

0xde3d,	// (0x0008dc4e) call_thumbnail_pane_cp011

0xde49,	// (0x0008dc5a) call_type_pane_cp034_ParamLimits

0xde49,	// (0x0008dc5a) call_type_pane_cp034

0xde85,	// (0x0008dc96) popup_call_audio_second_window_g1_ParamLimits

0xde85,	// (0x0008dc96) popup_call_audio_second_window_g1

0xdec1,	// (0x0008dcd2) popup_call_audio_second_window_g2_ParamLimits

0xdec1,	// (0x0008dcd2) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0008ef1d) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0008ef1d) popup_call_audio_second_window_g

0xdefd,	// (0x0008dd0e) popup_call_audio_second_window_t1_ParamLimits

0xdefd,	// (0x0008dd0e) popup_call_audio_second_window_t1

0xdf7e,	// (0x0008dd8f) popup_call_audio_second_window_t2_ParamLimits

0xdf7e,	// (0x0008dd8f) popup_call_audio_second_window_t2

0xdfb4,	// (0x0008ddc5) popup_call_audio_second_window_t3_ParamLimits

0xdfb4,	// (0x0008ddc5) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0008ef22) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0008ef22) popup_call_audio_second_window_t

0xddad,	// (0x0008dbbe) bg_popup_call_pane_cp04

0xdfea,	// (0x0008ddfb) list_conf_pane

0xdff2,	// (0x0008de03) popup_call_audio_conf_window_t1

0xe000,	// (0x0008de11) call_thumbnail_pane_g1

0xe008,	// (0x0008de19) bg_pinb_pane_ParamLimits

0xe008,	// (0x0008de19) bg_pinb_pane

0xe016,	// (0x0008de27) find_pinb_pane

0xe01f,	// (0x0008de30) listscroll_pinb_pane_ParamLimits

0xe01f,	// (0x0008de30) listscroll_pinb_pane

0xe02e,	// (0x0008de3f) pinb_bg_pane_g1

0x59aa,	// (0x000857bb) pinb_bg_pane_g2

0x59b6,	// (0x000857c7) pinb_bg_pane_g3

0x59c2,	// (0x000857d3) pinb_bg_pane_g4

0x59ce,	// (0x000857df) pinb_bg_pane_g5

0x59da,	// (0x000857eb) pinb_bg_pane_g6

0x59e5,	// (0x000857f6) pinb_bg_pane_g7

0x59f0,	// (0x00085801) pinb_bg_pane_g8

0x59fb,	// (0x0008580c) pinb_bg_pane_g9

0x5a05,	// (0x00085816) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0008ef29) pinb_bg_pane_g

0x5a22,	// (0x00085833) grid_pinb_pane

0x5a2d,	// (0x0008583e) list_pinb_pane

0x5a38,	// (0x00085849) scroll_pane_cp01_ParamLimits

0x5a38,	// (0x00085849) scroll_pane_cp01

0xe038,	// (0x0008de49) find_pinb_pane_g1_ParamLimits

0xe038,	// (0x0008de49) find_pinb_pane_g1

0xe050,	// (0x0008de61) find_pinb_pane_t1

0xe062,	// (0x0008de73) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0008ef43) find_pinb_pane_t

0xe077,	// (0x0008de88) input_focus_pane_cp01_ParamLimits

0xe077,	// (0x0008de88) input_focus_pane_cp01

0x5a4a,	// (0x0008585b) cell_pinb_pane_ParamLimits

0x5a4a,	// (0x0008585b) cell_pinb_pane

0x5a72,	// (0x00085883) cell_pinb_pane_g1_ParamLimits

0x5a72,	// (0x00085883) cell_pinb_pane_g1

0x5a87,	// (0x00085898) cell_pinb_pane_g2_ParamLimits

0x5a87,	// (0x00085898) cell_pinb_pane_g2

0xe083,	// (0x0008de94) cell_pinb_pane_g3_ParamLimits

0xe083,	// (0x0008de94) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0008ef48) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0008ef48) cell_pinb_pane_g

0xddad,	// (0x0008dbbe) grid_highlight_pane_cp01

0x5a93,	// (0x000858a4) list_pinb_item_pane_ParamLimits

0x5a93,	// (0x000858a4) list_pinb_item_pane

0xddad,	// (0x0008dbbe) list_highlight_pane_cp02

0x5ab9,	// (0x000858ca) list_pinb_item_pane_g1_ParamLimits

0x5ab9,	// (0x000858ca) list_pinb_item_pane_g1

0x5ac6,	// (0x000858d7) list_pinb_item_pane_g2_ParamLimits

0x5ac6,	// (0x000858d7) list_pinb_item_pane_g2

0x5ad2,	// (0x000858e3) list_pinb_item_pane_g3_ParamLimits

0x5ad2,	// (0x000858e3) list_pinb_item_pane_g3

0x5ae3,	// (0x000858f4) list_pinb_item_pane_g4_ParamLimits

0x5ae3,	// (0x000858f4) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0008ef4f) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0008ef4f) list_pinb_item_pane_g

0x5aef,	// (0x00085900) list_pinb_item_pane_t1_ParamLimits

0x5aef,	// (0x00085900) list_pinb_item_pane_t1

0x5b20,	// (0x00085931) calc_display_pane

0x5b3e,	// (0x0008594f) calc_paper_pane

0x5b5a,	// (0x0008596b) grid_calc_pane

0xddad,	// (0x0008dbbe) bg_list_pane_cp01

0x5b86,	// (0x00085997) clock_g1

0x5b8e,	// (0x0008599f) clock_g2

0x0001,

0xf147,	// (0x0008ef58) clock_g

0x5b98,	// (0x000859a9) clock_t1_ParamLimits

0x5b98,	// (0x000859a9) clock_t1

0x5bad,	// (0x000859be) clock_t2_ParamLimits

0x5bad,	// (0x000859be) clock_t2

0x5bbf,	// (0x000859d0) clock_t3_ParamLimits

0x5bbf,	// (0x000859d0) clock_t3

0x5bd1,	// (0x000859e2) clock_t4_ParamLimits

0x5bd1,	// (0x000859e2) clock_t4

0x5be3,	// (0x000859f4) clock_t5_ParamLimits

0x5be3,	// (0x000859f4) clock_t5

0x5bf8,	// (0x00085a09) clock_t6_ParamLimits

0x5bf8,	// (0x00085a09) clock_t6

0x5c0a,	// (0x00085a1b) clock_t7_ParamLimits

0x5c0a,	// (0x00085a1b) clock_t7

0x5c1c,	// (0x00085a2d) clock_t8_ParamLimits

0x5c1c,	// (0x00085a2d) clock_t8

0x5c32,	// (0x00085a43) clock_t9_ParamLimits

0x5c32,	// (0x00085a43) clock_t9

0x0008,

0xf14c,	// (0x0008ef5d) clock_t_ParamLimits

0xf14c,	// (0x0008ef5d) clock_t

0xe08f,	// (0x0008dea0) popup_clock_analogue_window_cp02

0xe08f,	// (0x0008dea0) popup_clock_digital_window_cp01

0xe097,	// (0x0008dea8) listscroll_help_pane

0xddad,	// (0x0008dbbe) phob_pre_status_pane

0xe0a1,	// (0x0008deb2) grid_qdial_pane

0xddad,	// (0x0008dbbe) listscroll_mce_pane

0xe0ab,	// (0x0008debc) bg_notes_pane

0xe0b9,	// (0x0008deca) list_notes_pane

0x5c48,	// (0x00085a59) scroll_pane_cp06

0xe0c7,	// (0x0008ded8) bg_calc_paper_pane

0x5c57,	// (0x00085a68) list_calc_pane

0xe0db,	// (0x0008deec) bg_calc_display_pane

0x5c71,	// (0x00085a82) calc_display_pane_t1

0x5c86,	// (0x00085a97) calc_display_pane_t2

0x5c9b,	// (0x00085aac) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0008ef70) calc_display_pane_t

0x5cad,	// (0x00085abe) cell_calc_pane_ParamLimits

0x5cad,	// (0x00085abe) cell_calc_pane

0xe0e7,	// (0x0008def8) bg_calc_paper_pane_g1

0xe0f3,	// (0x0008df04) bg_calc_paper_pane_g2

0xe0ff,	// (0x0008df10) bg_calc_paper_pane_g3

0xe10b,	// (0x0008df1c) bg_calc_paper_pane_g4

0xe117,	// (0x0008df28) bg_calc_paper_pane_g5

0x5cda,	// (0x00085aeb) bg_calc_paper_pane_g6

0x5ceb,	// (0x00085afc) bg_calc_paper_pane_g7

0x5cfc,	// (0x00085b0d) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0008ef77) bg_calc_paper_pane_g

0x5d0d,	// (0x00085b1e) calc_bg_paper_pane_g9

0x5d1e,	// (0x00085b2f) list_calc_item_pane_ParamLimits

0x5d1e,	// (0x00085b2f) list_calc_item_pane

0xe123,	// (0x0008df34) list_calc_item_pane_g1

0x5d4d,	// (0x00085b5e) list_calc_item_pane_t1_ParamLimits

0x5d4d,	// (0x00085b5e) list_calc_item_pane_t1

0x5d5f,	// (0x00085b70) list_calc_item_pane_t2_ParamLimits

0x5d5f,	// (0x00085b70) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0008ef88) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0008ef88) list_calc_item_pane_t

0xe130,	// (0x0008df41) cell_calc_pane_g1

0xe13a,	// (0x0008df4b) grid_highlight_pane_cp02

0x5d8f,	// (0x00085ba0) bg_calc_display_pane_g1

0x5d98,	// (0x00085ba9) bg_calc_display_pane_g2

0x16b4,	// (0x000814c5) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0008ef92) bg_calc_display_pane_g

0x5da2,	// (0x00085bb3) cell_qdial_pane_ParamLimits

0x5da2,	// (0x00085bb3) cell_qdial_pane

0x5db6,	// (0x00085bc7) cell_qdial_pane_g1_ParamLimits

0x5db6,	// (0x00085bc7) cell_qdial_pane_g1

0x5dc3,	// (0x00085bd4) cell_qdial_pane_g2_ParamLimits

0x5dc3,	// (0x00085bd4) cell_qdial_pane_g2

0xe15c,	// (0x0008df6d) cell_qdial_pane_g3_ParamLimits

0xe15c,	// (0x0008df6d) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0008ef99) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0008ef99) cell_qdial_pane_g

0x5de1,	// (0x00085bf2) cell_qdial_pane_t1_ParamLimits

0x5de1,	// (0x00085bf2) cell_qdial_pane_t1

0x5df9,	// (0x00085c0a) cell_qdial_pane_t2_ParamLimits

0x5df9,	// (0x00085c0a) cell_qdial_pane_t2

0x5e0c,	// (0x00085c1d) cell_qdial_pane_t3_ParamLimits

0x5e0c,	// (0x00085c1d) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0008efa2) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0008efa2) cell_qdial_pane_t

0xddad,	// (0x0008dbbe) grid_highlight_pane_cp04

0xe168,	// (0x0008df79) thumbnail_qdial_pane_ParamLimits

0xe168,	// (0x0008df79) thumbnail_qdial_pane

0xe1c4,	// (0x0008dfd5) list_help_pane

0xe1cd,	// (0x0008dfde) scroll_pane_cp02

0x5e1f,	// (0x00085c30) help_list_pane_t1_ParamLimits

0x5e1f,	// (0x00085c30) help_list_pane_t1

0x5e52,	// (0x00085c63) bg_notes_pane_g2

0x5e5a,	// (0x00085c6b) bg_notes_pane_g3

0x5e62,	// (0x00085c73) notes_bg_pane_g1

0x5e6a,	// (0x00085c7b) notes_bg_pane_g4

0x5e72,	// (0x00085c83) notes_bg_pane_g5

0x5e7a,	// (0x00085c8b) notes_bg_pane_g6

0x5e82,	// (0x00085c93) notes_bg_pane_g7

0x5e8a,	// (0x00085c9b) notes_bg_pane_g8

0x5e92,	// (0x00085ca3) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0008efc0) notes_bg_pane_g

0x5e9a,	// (0x00085cab) list_notes_text_pane_ParamLimits

0x5e9a,	// (0x00085cab) list_notes_text_pane

0xe1d6,	// (0x0008dfe7) list_notes_text_pane_g1

0x5ec2,	// (0x00085cd3) list_notes_text_pane_t1

0xe0db,	// (0x0008deec) listscroll_cale_week_pane

0x5eed,	// (0x00085cfe) bg_cale_heading_pane

0xe1f0,	// (0x0008e001) bg_cale_pane_cp01

0x5f09,	// (0x00085d1a) cale_week_corner_pane

0x5f1f,	// (0x00085d30) cale_week_day_heading_pane

0x5f3b,	// (0x00085d4c) cale_week_scroll_pane_g1

0x5f54,	// (0x00085d65) cale_week_scroll_pane_g2

0x5f65,	// (0x00085d76) cale_week_scroll_pane_g3

0x5f76,	// (0x00085d87) cale_week_scroll_pane_g4

0x5f87,	// (0x00085d98) cale_week_scroll_pane_g5

0x5f98,	// (0x00085da9) cale_week_scroll_pane_g6

0x5fa9,	// (0x00085dba) cale_week_scroll_pane_g7

0x5fbc,	// (0x00085dcd) cale_week_scroll_pane_g8

0x5fcf,	// (0x00085de0) cale_week_scroll_pane_g9

0x5fe0,	// (0x00085df1) cale_week_scroll_pane_g10

0x5ff1,	// (0x00085e02) cale_week_scroll_pane_g11

0x6002,	// (0x00085e13) cale_week_scroll_pane_g12

0x6013,	// (0x00085e24) cale_week_scroll_pane_g13

0x602c,	// (0x00085e3d) cale_week_scroll_pane_g14

0x6045,	// (0x00085e56) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0008efcf) cale_week_scroll_pane_g

0x605e,	// (0x00085e6f) cale_week_time_pane

0x6071,	// (0x00085e82) grid_cale_week_pane

0x608e,	// (0x00085e9f) scroll_pane_cp08

0x60a8,	// (0x00085eb9) cell_cale_week_pane_ParamLimits

0x60a8,	// (0x00085eb9) cell_cale_week_pane

0x60f4,	// (0x00085f05) cale_week_day_heading_pane_t1

0x610d,	// (0x00085f1e) cale_week_day_heading_pane_t2

0x6126,	// (0x00085f37) cale_week_day_heading_pane_t3

0x613f,	// (0x00085f50) cale_week_day_heading_pane_t4

0x6158,	// (0x00085f69) cale_week_day_heading_pane_t5

0x6171,	// (0x00085f82) cale_week_day_heading_pane_t6

0x618a,	// (0x00085f9b) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0008efee) cale_week_day_heading_pane_t

0xe21b,	// (0x0008e02c) bg_cale_side_pane

0x61a3,	// (0x00085fb4) cale_week_time_pane_t1

0x61bb,	// (0x00085fcc) cale_week_time_pane_t2

0x61d3,	// (0x00085fe4) cale_week_time_pane_t3

0x61eb,	// (0x00085ffc) cale_week_time_pane_t4

0x6203,	// (0x00086014) cale_week_time_pane_t5

0x621b,	// (0x0008602c) cale_week_time_pane_t6

0x6233,	// (0x00086044) cale_week_time_pane_t7

0x6253,	// (0x00086064) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0008effd) cale_week_time_pane_t

0x6273,	// (0x00086084) cell_cale_week_pane_g2

0x6284,	// (0x00086095) cell_cale_week_pane_g3_ParamLimits

0x6284,	// (0x00086095) cell_cale_week_pane_g3

0xe229,	// (0x0008e03a) grid_highlight_pane_cp07

0xe231,	// (0x0008e042) listscroll_gms_pane

0xe23b,	// (0x0008e04c) grid_gms_pane

0xe244,	// (0x0008e055) listscroll_gms_pane_g1

0xe24c,	// (0x0008e05d) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0008f00e) listscroll_gms_pane_g

0x629c,	// (0x000860ad) scroll_pane_cp010

0x62a7,	// (0x000860b8) cell_gms_pane_ParamLimits

0x62a7,	// (0x000860b8) cell_gms_pane

0x62ba,	// (0x000860cb) cell_gms_pane_g1

0xe254,	// (0x0008e065) cell_gms_pane_g2

0xe25c,	// (0x0008e06d) cell_gms_pane_g3

0xe265,	// (0x0008e076) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0008f013) cell_gms_pane_g

0xe26e,	// (0x0008e07f) grid_highlight_pane_cp09

0x85d8,	// (0x000883e9) phob_pre_status_pane_g1

0x85e0,	// (0x000883f1) phob_pre_status_pane_g2

0x85e8,	// (0x000883f9) phob_pre_status_pane_g3

0x85f0,	// (0x00088401) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0008f402) phob_pre_status_pane_g

0x8600,	// (0x00088411) phob_pre_status_pane_t1

0x8610,	// (0x00088421) phob_pre_status_pane_t2

0x8620,	// (0x00088431) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0008f40d) phob_pre_status_pane_t

0xddad,	// (0x0008dbbe) bg_list_pane_cp05

0x62ca,	// (0x000860db) grid_vorec_pane

0x62d6,	// (0x000860e7) vorec_t1

0x62e4,	// (0x000860f5) vorec_t2

0x62f2,	// (0x00086103) vorec_t3

0x6300,	// (0x00086111) vorec_t4

0x630e,	// (0x0008611f) vorec_t5

0x631c,	// (0x0008612d) vorec_t6

0x0006,

0xf20b,	// (0x0008f01c) vorec_t

0x6338,	// (0x00086149) wait_bar_pane_cp01

0x6340,	// (0x00086151) cell_vorec_pane_ParamLimits

0x6340,	// (0x00086151) cell_vorec_pane

0xe276,	// (0x0008e087) cell_vorec_pane_g1

0xddad,	// (0x0008dbbe) grid_highlight_pane_cp05

0x6363,	// (0x00086174) cams_zoom_pane

0x636f,	// (0x00086180) image_vga_pane

0x637e,	// (0x0008618f) main_camera_pane_g1

0x638c,	// (0x0008619d) main_camera_pane_g2

0x6398,	// (0x000861a9) main_camera_pane_g3

0x63a4,	// (0x000861b5) main_camera_pane_g4

0x63b0,	// (0x000861c1) main_camera_pane_g5

0x63bc,	// (0x000861cd) main_camera_pane_g6

0x63c8,	// (0x000861d9) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0008f02b) main_camera_pane_g

0x63d4,	// (0x000861e5) main_camera_pane_t1

0x63e6,	// (0x000861f7) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0008f03c) main_camera_pane_t

0x6407,	// (0x00086218) cams_zoom_pane_cp_ParamLimits

0x6407,	// (0x00086218) cams_zoom_pane_cp

0x642b,	// (0x0008623c) image_cif_pane_ParamLimits

0x642b,	// (0x0008623c) image_cif_pane

0x6449,	// (0x0008625a) image_subqcif_pane

0x6451,	// (0x00086262) main_video_pane_g1_ParamLimits

0x6451,	// (0x00086262) main_video_pane_g1

0x6471,	// (0x00086282) main_video_pane_g2_ParamLimits

0x6471,	// (0x00086282) main_video_pane_g2

0x64a1,	// (0x000862b2) main_video_pane_g3_ParamLimits

0x64a1,	// (0x000862b2) main_video_pane_g3

0x64ca,	// (0x000862db) main_video_pane_g4_ParamLimits

0x64ca,	// (0x000862db) main_video_pane_g4

0x64f3,	// (0x00086304) main_video_pane_g5_ParamLimits

0x64f3,	// (0x00086304) main_video_pane_g5

0xe28c,	// (0x0008e09d) main_video_pane_g6_ParamLimits

0xe28c,	// (0x0008e09d) main_video_pane_g6

0x0006,

0xf230,	// (0x0008f041) main_video_pane_g_ParamLimits

0xf230,	// (0x0008f041) main_video_pane_g

0x6515,	// (0x00086326) main_video_pane_t1_ParamLimits

0x6515,	// (0x00086326) main_video_pane_t1

0xe2a6,	// (0x0008e0b7) cams_zoom_pane_g1

0xe2af,	// (0x0008e0c0) cams_zoom_pane_g2

0xe2b8,	// (0x0008e0c9) cams_zoom_pane_g3

0xe2c1,	// (0x0008e0d2) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0008f050) cams_zoom_pane_g

0x655f,	// (0x00086370) grid_cams_pane

0x656d,	// (0x0008637e) linegrid_cams_pane

0x657b,	// (0x0008638c) cell_cams_pane_ParamLimits

0x657b,	// (0x0008638c) cell_cams_pane

0xe2ca,	// (0x0008e0db) cams_burst_image_pane

0xe2d2,	// (0x0008e0e3) cell_cams_pane_g1

0xddad,	// (0x0008dbbe) grid_highlight_pane_cp03

0xe130,	// (0x0008df41) mp_bg_pane_g1

0xddad,	// (0x0008dbbe) bg_list_pane_cp03

0x1117,	// (0x00080f28) bg_mp_pane

0x111f,	// (0x00080f30) grid_mp_pane

0x1127,	// (0x00080f38) media_player_g1

0x112f,	// (0x00080f40) media_player_t1

0x113d,	// (0x00080f4e) media_player_t2

0x114b,	// (0x00080f5c) media_player_t3

0x1159,	// (0x00080f6a) media_player_t4

0x1167,	// (0x00080f78) media_player_t5

0x1175,	// (0x00080f86) media_player_t6

0x1183,	// (0x00080f94) media_player_t7

0x0006,

0xf5db,	// (0x0008f3ec) media_player_t

0x1191,	// (0x00080fa2) wait_bar_pane_cp02

0xf5c0,	// (0x0008f3d1) main_usb_pane_t

0x85cf,	// (0x000883e0) cell_mp_pane

0xe130,	// (0x0008df41) cell_mp_pane_g1

0xddad,	// (0x0008dbbe) grid_highlight_pane_cp06

0xe2da,	// (0x0008e0eb) grid_skin_colour_pane

0xe2e2,	// (0x0008e0f3) list_highlight_pane_cp03

0x65e5,	// (0x000863f6) skin_g1

0xe2ea,	// (0x0008e0fb) skin_t1

0xe2f9,	// (0x0008e10a) skin_t2

0x0001,

0xf274,	// (0x0008f085) skin_t

0x65ef,	// (0x00086400) cell_skin_colour_pane_ParamLimits

0x65ef,	// (0x00086400) cell_skin_colour_pane

0xe307,	// (0x0008e118) cell_skin_colour_pane_g1

0x6673,	// (0x00086484) call_video_g1_ParamLimits

0x6673,	// (0x00086484) call_video_g1

0x6683,	// (0x00086494) call_video_g2_ParamLimits

0x6683,	// (0x00086494) call_video_g2

0x0001,

0xf279,	// (0x0008f08a) call_video_g_ParamLimits

0xf279,	// (0x0008f08a) call_video_g

0x66dd,	// (0x000864ee) call_video_uplink_pane_cp1_ParamLimits

0x66dd,	// (0x000864ee) call_video_uplink_pane_cp1

0xe319,	// (0x0008e12a) call_video_uplink_pane_cp2

0x67a9,	// (0x000865ba) video_down_crop_pane_ParamLimits

0x67a9,	// (0x000865ba) video_down_crop_pane

0x68a7,	// (0x000866b8) video_down_pane_ParamLimits

0x68a7,	// (0x000866b8) video_down_pane

0xe321,	// (0x0008e132) video_down_subqcif_pane_ParamLimits

0xe321,	// (0x0008e132) video_down_subqcif_pane

0xe339,	// (0x0008e14a) video_down_subqcif_pane_cp_ParamLimits

0xe339,	// (0x0008e14a) video_down_subqcif_pane_cp

0xe35f,	// (0x0008e170) im_reading_pane_ParamLimits

0xe35f,	// (0x0008e170) im_reading_pane

0x69c9,	// (0x000867da) im_writing_pane_ParamLimits

0x69c9,	// (0x000867da) im_writing_pane

0x69e7,	// (0x000867f8) im_reading_pane_t1

0xe379,	// (0x0008e18a) list_im_pane

0xe38a,	// (0x0008e19b) scroll_pane_cp07

0x6a3b,	// (0x0008684c) im_writing_pane_t1_ParamLimits

0x6a3b,	// (0x0008684c) im_writing_pane_t1

0xe3a3,	// (0x0008e1b4) im_writing_pane_t2_ParamLimits

0xe3a3,	// (0x0008e1b4) im_writing_pane_t2

0x0001,

0xf283,	// (0x0008f094) im_writing_pane_t_ParamLimits

0xf283,	// (0x0008f094) im_writing_pane_t

0xddad,	// (0x0008dbbe) input_focus_pane_cp04

0xddad,	// (0x0008dbbe) input_focus_pane_cp05

0x6a50,	// (0x00086861) list_im_single_pane_ParamLimits

0x6a50,	// (0x00086861) list_im_single_pane

0x6a74,	// (0x00086885) list_single_im_pane_t1

0x8593,	// (0x000883a4) blid_accuracy_pane

0x859b,	// (0x000883ac) blid_compass_pane

0x85a5,	// (0x000883b6) main_location_t1

0x85b3,	// (0x000883c4) main_location_t2

0x85c1,	// (0x000883d2) main_location_t3

0x0002,

0xf5ea,	// (0x0008f3fb) main_location_t

0xddad,	// (0x0008dbbe) aid_levels_location

0xe130,	// (0x0008df41) blid_accuracy_pane_g1

0xe130,	// (0x0008df41) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0008f0f6) blid_accuracy_pane_g

0xe3eb,	// (0x0008e1fc) wml_content_pane

0xe429,	// (0x0008e23a) wml_button_pane_ParamLimits

0xe429,	// (0x0008e23a) wml_button_pane

0x6a83,	// (0x00086894) wml_list_single_large_pane_ParamLimits

0x6a83,	// (0x00086894) wml_list_single_large_pane

0x6aad,	// (0x000868be) wml_list_single_medium_pane_ParamLimits

0x6aad,	// (0x000868be) wml_list_single_medium_pane

0x6ade,	// (0x000868ef) wml_list_single_small_pane_ParamLimits

0x6ade,	// (0x000868ef) wml_list_single_small_pane

0xe43d,	// (0x0008e24e) wml_selection_box_pane_ParamLimits

0xe43d,	// (0x0008e24e) wml_selection_box_pane

0xe450,	// (0x0008e261) wml_list_single_pane_t1

0xe45f,	// (0x0008e270) wml_list_single_medium_pane_t1

0xe46e,	// (0x0008e27f) wml_list_single_large_pane_t1

0xe47d,	// (0x0008e28e) input_focus_pane_cp02_ParamLimits

0xe47d,	// (0x0008e28e) input_focus_pane_cp02

0xe490,	// (0x0008e2a1) wml_selection_box_pane_g1

0xe499,	// (0x0008e2aa) wml_selection_box_pane_t1_ParamLimits

0xe499,	// (0x0008e2aa) wml_selection_box_pane_t1

0xe008,	// (0x0008de19) bg_wml_button_pane_ParamLimits

0xe008,	// (0x0008de19) bg_wml_button_pane

0xe4b1,	// (0x0008e2c2) wml_button_pane_g1

0xe4b9,	// (0x0008e2ca) wml_button_pane_t1

0xe4b1,	// (0x0008e2c2) wml_button_bg_pane_g1

0xe4c9,	// (0x0008e2da) wml_button_bg_pane_g2

0xe4d1,	// (0x0008e2e2) wml_button_bg_pane_g3

0xe4d9,	// (0x0008e2ea) wml_button_bg_pane_g4

0xe4e1,	// (0x0008e2f2) wml_button_bg_pane_g5

0xe4e9,	// (0x0008e2fa) wml_button_bg_pane_g6

0xe4f1,	// (0x0008e302) wml_button_bg_pane_g7

0xe4f9,	// (0x0008e30a) wml_button_bg_pane_g8

0xe501,	// (0x0008e312) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0008f099) wml_button_bg_pane_g

0x6b18,	// (0x00086929) bg_list_pane_cp02

0xe509,	// (0x0008e31a) mce_header_pane_ParamLimits

0xe509,	// (0x0008e31a) mce_header_pane

0xe51f,	// (0x0008e330) mce_icon_pane

0xe51f,	// (0x0008e330) mce_image_pane

0xe528,	// (0x0008e339) mce_text_pane_ParamLimits

0xe528,	// (0x0008e339) mce_text_pane

0x6b22,	// (0x00086933) scroll_pane_cp03

0xe421,	// (0x0008e232) scroll_pane_cp04

0xe53b,	// (0x0008e34c) scroll_pane_cp05_ParamLimits

0xe53b,	// (0x0008e34c) scroll_pane_cp05

0x6b2c,	// (0x0008693d) mce_header_field_pane_ParamLimits

0x6b2c,	// (0x0008693d) mce_header_field_pane

0x6b4c,	// (0x0008695d) mce_header_field_pane_2_ParamLimits

0x6b4c,	// (0x0008695d) mce_header_field_pane_2

0x6b62,	// (0x00086973) mce_header_field_pane_3

0x6b6a,	// (0x0008697b) list_single_mce_message_pane_ParamLimits

0x6b6a,	// (0x0008697b) list_single_mce_message_pane

0x6b8f,	// (0x000869a0) list_single_mce_smart_pane_ParamLimits

0x6b8f,	// (0x000869a0) list_single_mce_smart_pane

0xe547,	// (0x0008e358) input_focus_pane_cp03

0xe550,	// (0x0008e361) list_header_data_pane

0x6bbf,	// (0x000869d0) mce_header_field_pane_t1

0x6bcd,	// (0x000869de) list_single_mce_header_pane_ParamLimits

0x6bcd,	// (0x000869de) list_single_mce_header_pane

0xe558,	// (0x0008e369) list_single_mce_header_pane_t1

0xe567,	// (0x0008e378) list_single_mce_message_pane_g1

0xe56f,	// (0x0008e380) list_single_mce_message_pane_t1

0x6c11,	// (0x00086a22) bg_cale_heading_pane_cp01_ParamLimits

0x6c11,	// (0x00086a22) bg_cale_heading_pane_cp01

0xe57d,	// (0x0008e38e) bg_cale_pane_cp02_ParamLimits

0xe57d,	// (0x0008e38e) bg_cale_pane_cp02

0x6c44,	// (0x00086a55) cale_month_corner_pane

0x6c5a,	// (0x00086a6b) cale_month_day_heading_pane_ParamLimits

0x6c5a,	// (0x00086a6b) cale_month_day_heading_pane

0x6c9d,	// (0x00086aae) cale_month_pane_g1_ParamLimits

0x6c9d,	// (0x00086aae) cale_month_pane_g1

0x6cc9,	// (0x00086ada) cale_month_pane_g2_ParamLimits

0x6cc9,	// (0x00086ada) cale_month_pane_g2

0x6cec,	// (0x00086afd) cale_month_pane_g3_ParamLimits

0x6cec,	// (0x00086afd) cale_month_pane_g3

0x6d28,	// (0x00086b39) cale_month_pane_g4_ParamLimits

0x6d28,	// (0x00086b39) cale_month_pane_g4

0x6d64,	// (0x00086b75) cale_month_pane_g5_ParamLimits

0x6d64,	// (0x00086b75) cale_month_pane_g5

0x6da0,	// (0x00086bb1) cale_month_pane_g6_ParamLimits

0x6da0,	// (0x00086bb1) cale_month_pane_g6

0x6ddc,	// (0x00086bed) cale_month_pane_g7_ParamLimits

0x6ddc,	// (0x00086bed) cale_month_pane_g7

0x6e28,	// (0x00086c39) cale_month_pane_g8_ParamLimits

0x6e28,	// (0x00086c39) cale_month_pane_g8

0x6e74,	// (0x00086c85) cale_month_pane_g9_ParamLimits

0x6e74,	// (0x00086c85) cale_month_pane_g9

0x6eba,	// (0x00086ccb) cale_month_pane_g10_ParamLimits

0x6eba,	// (0x00086ccb) cale_month_pane_g10

0x6ef4,	// (0x00086d05) cale_month_pane_g11_ParamLimits

0x6ef4,	// (0x00086d05) cale_month_pane_g11

0x6f32,	// (0x00086d43) cale_month_pane_g12_ParamLimits

0x6f32,	// (0x00086d43) cale_month_pane_g12

0x6f70,	// (0x00086d81) cale_month_pane_g13_ParamLimits

0x6f70,	// (0x00086d81) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0008f0ac) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0008f0ac) cale_month_pane_g

0x6fae,	// (0x00086dbf) cale_month_week_pane

0x6fc1,	// (0x00086dd2) grid_cale_month_pane_ParamLimits

0x6fc1,	// (0x00086dd2) grid_cale_month_pane

0x6fff,	// (0x00086e10) cale_month_day_heading_pane_t1

0x705d,	// (0x00086e6e) cale_month_day_heading_pane_t2

0x70c2,	// (0x00086ed3) cale_month_day_heading_pane_t3

0x7127,	// (0x00086f38) cale_month_day_heading_pane_t4

0x718c,	// (0x00086f9d) cale_month_day_heading_pane_t5

0x71f1,	// (0x00087002) cale_month_day_heading_pane_t6

0x7256,	// (0x00087067) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0008f0c7) cale_month_day_heading_pane_t

0xe21b,	// (0x0008e02c) bg_cale_side_pane_cp01

0x72cb,	// (0x000870dc) cale_month_week_pane_t1

0x72e2,	// (0x000870f3) cale_month_week_pane_t2

0x72f9,	// (0x0008710a) cale_month_week_pane_t3

0x7310,	// (0x00087121) cale_month_week_pane_t4

0x7327,	// (0x00087138) cale_month_week_pane_t5

0x7342,	// (0x00087153) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0008f0d6) cale_month_week_pane_t

0x7361,	// (0x00087172) cell_cale_month_pane_ParamLimits

0x7361,	// (0x00087172) cell_cale_month_pane

0x7427,	// (0x00087238) cell_cale_month_pane_g1

0x7433,	// (0x00087244) cell_cale_month_pane_t1_ParamLimits

0x7433,	// (0x00087244) cell_cale_month_pane_t1

0xe229,	// (0x0008e03a) grid_highlight_pane_cp08

0xe130,	// (0x0008df41) main_smil_g1

0x744f,	// (0x00087260) smil_status_pane

0xe5b2,	// (0x0008e3c3) smil_text_pane

0x1037,	// (0x00080e48) bg_popup_call3_rect_pane_g8

0x103f,	// (0x00080e50) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0008f38f) bg_popup_call3_rect_pane_g

0x12cc,	// (0x000810dd) smil_status_volume_pane_g1

0xe5bc,	// (0x0008e3cd) smil_status_pane_t1

0x89c6,	// (0x000887d7) volume_smil_pane

0xe5d3,	// (0x0008e3e4) list_smil_text_pane

0x7462,	// (0x00087273) scroll_pane_cp011

0x746d,	// (0x0008727e) smil_text_list_pane_t1_ParamLimits

0x746d,	// (0x0008727e) smil_text_list_pane_t1

0x74e5,	// (0x000872f6) aid_volume_smil_ParamLimits

0x74e5,	// (0x000872f6) aid_volume_smil

0xe130,	// (0x0008df41) smil_volume_pane_g1

0xe130,	// (0x0008df41) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0008f0f6) smil_volume_pane_g

0xe0db,	// (0x0008deec) listscroll_cale_day_pane

0xe5dd,	// (0x0008e3ee) bg_cale_pane

0xe5f5,	// (0x0008e406) list_cale_pane

0xe606,	// (0x0008e417) scroll_pane_cp09

0xe617,	// (0x0008e428) cale_bg_pane_g1

0xe61f,	// (0x0008e430) cale_bg_pane_g2

0xe627,	// (0x0008e438) cale_bg_pane_g3

0xe62f,	// (0x0008e440) cale_bg_pane_g4

0xe637,	// (0x0008e448) cale_bg_pane_g5

0xe63f,	// (0x0008e450) cale_bg_pane_g6

0xe647,	// (0x0008e458) cale_bg_pane_g7

0xe64f,	// (0x0008e460) cale_bg_pane_g8

0xe657,	// (0x0008e468) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0008f0fb) cale_bg_pane_g

0x7507,	// (0x00087318) list_cale_time_pane_ParamLimits

0x7507,	// (0x00087318) list_cale_time_pane

0xe65f,	// (0x0008e470) list_cale_time_pane_g1_ParamLimits

0xe65f,	// (0x0008e470) list_cale_time_pane_g1

0xe66b,	// (0x0008e47c) list_cale_time_pane_g2_ParamLimits

0xe66b,	// (0x0008e47c) list_cale_time_pane_g2

0x7523,	// (0x00087334) list_cale_time_pane_g3_ParamLimits

0x7523,	// (0x00087334) list_cale_time_pane_g3

0x7531,	// (0x00087342) list_cale_time_pane_g4_ParamLimits

0x7531,	// (0x00087342) list_cale_time_pane_g4

0x753f,	// (0x00087350) list_cale_time_pane_g5_ParamLimits

0x753f,	// (0x00087350) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0008f10e) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0008f10e) list_cale_time_pane_g

0xe685,	// (0x0008e496) list_cale_time_pane_t1_ParamLimits

0xe685,	// (0x0008e496) list_cale_time_pane_t1

0xe6ad,	// (0x0008e4be) list_cale_time_pane_t2_ParamLimits

0xe6ad,	// (0x0008e4be) list_cale_time_pane_t2

0x7870,	// (0x00087681) aid_blid_cardinal_pane

0x78b2,	// (0x000876c3) compass_pane_t4

0xe6d5,	// (0x0008e4e6) list_cale_time_pane_t4_ParamLimits

0xe6d5,	// (0x0008e4e6) list_cale_time_pane_t4

0x78c0,	// (0x000876d1) compass_pane_t5

0x78d0,	// (0x000876e1) compass_pane_t6

0x78de,	// (0x000876ef) compass_pane_t7

0xeb0e,	// (0x0008e91f) navi_pane_cc_t1

0xec63,	// (0x0008ea74) aid_phob_thumbnail_center_pane

0x8099,	// (0x00087eaa) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0008f11b) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0008f11b) list_cale_time_pane_t

0xda04,	// (0x0008d815) bg_popup_window_pane_cp02_ParamLimits

0xda04,	// (0x0008d815) bg_popup_window_pane_cp02

0xe6fd,	// (0x0008e50e) heading_pane_cp01_ParamLimits

0xe6fd,	// (0x0008e50e) heading_pane_cp01

0xe709,	// (0x0008e51a) loc_req_pane_ParamLimits

0xe709,	// (0x0008e51a) loc_req_pane

0xe719,	// (0x0008e52a) loc_type_pane_ParamLimits

0xe719,	// (0x0008e52a) loc_type_pane

0xe72b,	// (0x0008e53c) loc_type_pane_t1_ParamLimits

0xe72b,	// (0x0008e53c) loc_type_pane_t1

0xe73d,	// (0x0008e54e) loc_type_pane_t2_ParamLimits

0xe73d,	// (0x0008e54e) loc_type_pane_t2

0xe74f,	// (0x0008e560) loc_type_pane_t3_ParamLimits

0xe74f,	// (0x0008e560) loc_type_pane_t3

0x0002,

0xf311,	// (0x0008f122) loc_type_pane_t_ParamLimits

0xf311,	// (0x0008f122) loc_type_pane_t

0xe761,	// (0x0008e572) list_loc_req_pane

0xe76b,	// (0x0008e57c) scroll_pane_cp012

0x754d,	// (0x0008735e) list_single_loc_request_popup_menu_pane_ParamLimits

0x754d,	// (0x0008735e) list_single_loc_request_popup_menu_pane

0xe776,	// (0x0008e587) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe776,	// (0x0008e587) list_single_loc_request_popup_menu_pane_g1

0xe782,	// (0x0008e593) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe782,	// (0x0008e593) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0008f129) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0008f129) list_single_loc_request_popup_menu_pane_g

0xe78e,	// (0x0008e59f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe78e,	// (0x0008e59f) list_single_loc_request_popup_menu_pane_t1

0x755f,	// (0x00087370) bg_popup_window_pane_cp03_ParamLimits

0x755f,	// (0x00087370) bg_popup_window_pane_cp03

0x756d,	// (0x0008737e) heading_loc_req_pane_ParamLimits

0x756d,	// (0x0008737e) heading_loc_req_pane

0x7579,	// (0x0008738a) popup_dyc_status_message_window_g1_ParamLimits

0x7579,	// (0x0008738a) popup_dyc_status_message_window_g1

0x7585,	// (0x00087396) popup_dyc_status_message_window_t1_ParamLimits

0x7585,	// (0x00087396) popup_dyc_status_message_window_t1

0x7597,	// (0x000873a8) popup_dyc_status_message_window_t2_ParamLimits

0x7597,	// (0x000873a8) popup_dyc_status_message_window_t2

0x75a9,	// (0x000873ba) popup_dyc_status_message_window_t3_ParamLimits

0x75a9,	// (0x000873ba) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0008f12e) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0008f12e) popup_dyc_status_message_window_t

0xddad,	// (0x0008dbbe) bg_heading_pane_cp01

0xe7a4,	// (0x0008e5b5) heading_loc_req_pane_g1

0xe7ac,	// (0x0008e5bd) heading_loc_req_pane_g2

0xe7b4,	// (0x0008e5c5) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0008f135) heading_loc_req_pane_g

0xe7bc,	// (0x0008e5cd) heading_loc_req_pane_t1

0xe7cb,	// (0x0008e5dc) bg_popup_sub_pane_cp01_ParamLimits

0xe7cb,	// (0x0008e5dc) bg_popup_sub_pane_cp01

0xe7d9,	// (0x0008e5ea) popup_cale_events_window_g1_ParamLimits

0xe7d9,	// (0x0008e5ea) popup_cale_events_window_g1

0xe7f9,	// (0x0008e60a) popup_cale_events_window_g2_ParamLimits

0xe7f9,	// (0x0008e60a) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0008f169) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0008f169) popup_cale_events_window_g

0xe819,	// (0x0008e62a) popup_cale_events_window_t1_ParamLimits

0xe819,	// (0x0008e62a) popup_cale_events_window_t1

0xe82b,	// (0x0008e63c) popup_cale_events_window_t2_ParamLimits

0xe82b,	// (0x0008e63c) popup_cale_events_window_t2

0xe869,	// (0x0008e67a) popup_cale_events_window_t3_ParamLimits

0xe869,	// (0x0008e67a) popup_cale_events_window_t3

0xe8a3,	// (0x0008e6b4) popup_cale_events_window_t4_ParamLimits

0xe8a3,	// (0x0008e6b4) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0008f16e) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0008f16e) popup_cale_events_window_t

0x762d,	// (0x0008743e) call_type_pane

0xe8d9,	// (0x0008e6ea) popup_call_status_window_g1

0x7639,	// (0x0008744a) popup_call_status_window_g2

0x7645,	// (0x00087456) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0008f177) popup_call_status_window_g

0xe8e7,	// (0x0008e6f8) call_type_pane_g1

0xe8f0,	// (0x0008e701) call_type_pane_g2

0x0001,

0xf36d,	// (0x0008f17e) call_type_pane_g

0xddad,	// (0x0008dbbe) bg_popup_sub_pane_cp02

0xe8f9,	// (0x0008e70a) listscroll_popup_wml_pane

0xe901,	// (0x0008e712) list_wml_pane

0xe90b,	// (0x0008e71c) scroll_pane_cp013

0xe916,	// (0x0008e727) list_single_graphic_popup_wml_pane_ParamLimits

0xe916,	// (0x0008e727) list_single_graphic_popup_wml_pane

0xe130,	// (0x0008df41) list_single_graphic_popup_wml_pane_g1

0xe92a,	// (0x0008e73b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0008f183) list_single_graphic_popup_wml_pane_g

0xe932,	// (0x0008e743) list_single_graphic_popup_wml_pane_t1

0xe948,	// (0x0008e759) aid_call_pane

0xe000,	// (0x0008de11) popup_clock_analogue_window_g1

0xe000,	// (0x0008de11) popup_clock_analogue_window_g2

0x7651,	// (0x00087462) popup_clock_analogue_window_g3

0x7651,	// (0x00087462) popup_clock_analogue_window_g4

0xe130,	// (0x0008df41) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0008f188) popup_clock_analogue_window_g

0x7659,	// (0x0008746a) popup_clock_analogue_window_t1

0x7667,	// (0x00087478) clock_digital_number_pane_ParamLimits

0x7667,	// (0x00087478) clock_digital_number_pane

0x7673,	// (0x00087484) clock_digital_number_pane_cp02_ParamLimits

0x7673,	// (0x00087484) clock_digital_number_pane_cp02

0x767f,	// (0x00087490) clock_digital_number_pane_cp03_ParamLimits

0x767f,	// (0x00087490) clock_digital_number_pane_cp03

0x768b,	// (0x0008749c) clock_digital_number_pane_cp04_ParamLimits

0x768b,	// (0x0008749c) clock_digital_number_pane_cp04

0x769b,	// (0x000874ac) clock_digital_separator_pane_ParamLimits

0x769b,	// (0x000874ac) clock_digital_separator_pane

0x76a7,	// (0x000874b8) popup_clock_digital_window_t1

0xe130,	// (0x0008df41) clock_digital_number_pane_g1

0xe130,	// (0x0008df41) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0008f0f6) clock_digital_number_pane_g

0xe130,	// (0x0008df41) clock_digital_separator_pane_g1

0xe130,	// (0x0008df41) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0008f0f6) clock_digital_separator_pane_g

0xddad,	// (0x0008dbbe) bg_popup_window_pane_cp04

0xe950,	// (0x0008e761) heading_pane_cp03

0xe958,	// (0x0008e769) listscroll_popup_gms_pane

0xe960,	// (0x0008e771) grid_large_graphic_popup_pane

0xe96a,	// (0x0008e77b) listscroll_popup_gms_pane_g1

0xe972,	// (0x0008e783) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0008f193) listscroll_popup_gms_pane_g

0xe421,	// (0x0008e232) scroll_pane_cp014

0x76c4,	// (0x000874d5) cell_large_graphic_popup_pane_ParamLimits

0x76c4,	// (0x000874d5) cell_large_graphic_popup_pane

0x76dc,	// (0x000874ed) cell_large_graphic_popup_pane_g1_ParamLimits

0x76dc,	// (0x000874ed) cell_large_graphic_popup_pane_g1

0xe97a,	// (0x0008e78b) cell_large_graphic_popup_pane_g2_ParamLimits

0xe97a,	// (0x0008e78b) cell_large_graphic_popup_pane_g2

0xe986,	// (0x0008e797) cell_large_graphic_popup_pane_g3_ParamLimits

0xe986,	// (0x0008e797) cell_large_graphic_popup_pane_g3

0xe993,	// (0x0008e7a4) cell_large_graphic_popup_pane_g4_ParamLimits

0xe993,	// (0x0008e7a4) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0008f198) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0008f198) cell_large_graphic_popup_pane_g

0xe9a3,	// (0x0008e7b4) grid_highlight_pane_cp010

0xe130,	// (0x0008df41) bg_popup_call_pane_g1

0xe9ad,	// (0x0008e7be) list_single_graphic_popup_conf_pane_ParamLimits

0xe9ad,	// (0x0008e7be) list_single_graphic_popup_conf_pane

0xe9c0,	// (0x0008e7d1) list_highlight_pane_cp01

0xe9c9,	// (0x0008e7da) list_single_graphic_popup_conf_pane_g1

0xe9d1,	// (0x0008e7e2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0008f1a1) list_single_graphic_popup_conf_pane_g

0xe9d9,	// (0x0008e7ea) list_single_graphic_popup_conf_pane_t1

0xe9e7,	// (0x0008e7f8) linegrid_cams_pane_g1

0x76e8,	// (0x000874f9) linegrid_cams_pane_g2

0xe25c,	// (0x0008e06d) linegrid_cams_pane_g3

0xe9f0,	// (0x0008e801) linegrid_cams_pane_g4

0x76f1,	// (0x00087502) linegrid_cams_pane_g5

0x76fa,	// (0x0008750b) linegrid_cams_pane_g6

0xe265,	// (0x0008e076) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0008f1a6) linegrid_cams_pane_g

0xe9f9,	// (0x0008e80a) popup_clock_analogue_window

0xe9f9,	// (0x0008e80a) popup_clock_digital_window

0xddad,	// (0x0008dbbe) popup_phob_thumbnail_window

0xe130,	// (0x0008df41) call_video_uplink_pane_g1

0xea02,	// (0x0008e813) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0008f1b5) call_video_uplink_pane_g

0xea0a,	// (0x0008e81b) video_uplink_pane

0xea12,	// (0x0008e823) mce_image_pane_g1

0x7703,	// (0x00087514) mce_image_pane_g2

0x770d,	// (0x0008751e) mce_image_pane_g3

0x7715,	// (0x00087526) mce_image_pane_g4

0x771d,	// (0x0008752e) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0008f1ba) mce_image_pane_g

0xea1c,	// (0x0008e82d) control_top_pane_stacon_cp01_ParamLimits

0xea1c,	// (0x0008e82d) control_top_pane_stacon_cp01

0xea30,	// (0x0008e841) uni_indicator_pane_stacon_cp01_ParamLimits

0xea30,	// (0x0008e841) uni_indicator_pane_stacon_cp01

0xea41,	// (0x0008e852) bg_popup_sub_pane_cp03

0x7725,	// (0x00087536) chi_dic_find_pane

0x772d,	// (0x0008753e) listscroll_chi_dic_pane

0x7736,	// (0x00087547) main_pane_chidic_g1

0xea4b,	// (0x0008e85c) chi_dic_find_pane_t1

0xea59,	// (0x0008e86a) find_chidic_pane

0xea62,	// (0x0008e873) chi_dic_list_pane_ParamLimits

0xea62,	// (0x0008e873) chi_dic_list_pane

0xea73,	// (0x0008e884) scroll_pane_cp020

0xea7b,	// (0x0008e88c) find_chidic_pane_t1

0xddad,	// (0x0008dbbe) input_focus_pane_cp06

0x7749,	// (0x0008755a) list_chi_dic_pane_ParamLimits

0x7749,	// (0x0008755a) list_chi_dic_pane

0x7763,	// (0x00087574) list_chi_dic_pane_t1_ParamLimits

0x7763,	// (0x00087574) list_chi_dic_pane_t1

0xddad,	// (0x0008dbbe) list_highlight_pane_cp020

0xea8a,	// (0x0008e89b) bg_cale_heading_pane_g1

0x7776,	// (0x00087587) bg_cale_heading_pane_g2

0x777e,	// (0x0008758f) bg_cale_heading_pane_g3

0x7786,	// (0x00087597) bg_cale_heading_pane_g4

0x7790,	// (0x000875a1) bg_cale_heading_pane_g5

0x779a,	// (0x000875ab) bg_cale_heading_pane_g6

0x77a2,	// (0x000875b3) bg_cale_heading_pane_g7

0x77aa,	// (0x000875bb) bg_cale_heading_pane_g8

0x77b4,	// (0x000875c5) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0008f1c5) bg_cale_heading_pane_g

0xea8a,	// (0x0008e89b) bg_cale_side_pane_g1

0x77be,	// (0x000875cf) bg_cale_side_pane_g2

0x77c8,	// (0x000875d9) bg_cale_side_pane_g3

0x77d2,	// (0x000875e3) bg_cale_side_pane_g4

0x77dc,	// (0x000875ed) bg_cale_side_pane_g5

0x77e6,	// (0x000875f7) bg_cale_side_pane_g6

0x77f0,	// (0x00087601) bg_cale_side_pane_g7

0x77fa,	// (0x0008760b) bg_cale_side_pane_g8

0x7802,	// (0x00087613) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0008f1d8) bg_cale_side_pane_g

0x780a,	// (0x0008761b) popup_call_status_window_ParamLimits

0x780a,	// (0x0008761b) popup_call_status_window

0xea92,	// (0x0008e8a3) stacon_top_pane

0xea9a,	// (0x0008e8ab) status_pane_ParamLimits

0xea9a,	// (0x0008e8ab) status_pane

0xeaaf,	// (0x0008e8c0) status_small_pane

0xeab7,	// (0x0008e8c8) control_pane

0xddad,	// (0x0008dbbe) stacon_bottom_pane

0xeabf,	// (0x0008e8d0) list_single_mce_smart_pane_t1_ParamLimits

0xeabf,	// (0x0008e8d0) list_single_mce_smart_pane_t1

0xead2,	// (0x0008e8e3) list_single_mce_smart_pane_t2_ParamLimits

0xead2,	// (0x0008e8e3) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0008f1eb) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0008f1eb) list_single_mce_smart_pane_t

0x7816,	// (0x00087627) compass_pane

0x7822,	// (0x00087633) main_location2_pane_t1

0x7836,	// (0x00087647) main_location2_pane_t2

0x784a,	// (0x0008765b) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0008f1f0) main_location2_pane_t

0xeaf1,	// (0x0008e902) compass_pane_g1_ParamLimits

0xeaf1,	// (0x0008e902) compass_pane_g1

0x7894,	// (0x000876a5) compass_pane_t1

0x78a3,	// (0x000876b4) compass_pane_t2

0x0005,

0xf3e8,	// (0x0008f1f9) compass_pane_t

0x78ee,	// (0x000876ff) text_secondary_cp61

0xeb05,	// (0x0008e916) navi_pane_cams_g5

0xeb28,	// (0x0008e939) navi_pane_im_t1

0xeb36,	// (0x0008e947) navi_pane_mp_g1_ParamLimits

0xeb36,	// (0x0008e947) navi_pane_mp_g1

0xeb4a,	// (0x0008e95b) navi_pane_mp_g2_ParamLimits

0xeb4a,	// (0x0008e95b) navi_pane_mp_g2

0xeb56,	// (0x0008e967) navi_pane_mp_g3_ParamLimits

0xeb56,	// (0x0008e967) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0008f20d) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0008f20d) navi_pane_mp_g

0xeb62,	// (0x0008e973) navi_pane_mp_t1

0xeb70,	// (0x0008e981) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0008f214) navi_pane_mp_t

0xebac,	// (0x0008e9bd) navi_pane_vt_g1

0xeb62,	// (0x0008e973) navi_pane_vt_t1

0xebb4,	// (0x0008e9c5) navi_slider_pane

0xebbc,	// (0x0008e9cd) zooming_pane

0xebc4,	// (0x0008e9d5) navi_slider_pane_g1

0x7a19,	// (0x0008782a) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0008f21b) navi_slider_pane_g

0xebe8,	// (0x0008e9f9) aid_levels_zoom

0xebf0,	// (0x0008ea01) zooming_pane_g1

0xebf8,	// (0x0008ea09) zooming_pane_g2

0xebf8,	// (0x0008ea09) zooming_pane_g3

0x0002,

0xf419,	// (0x0008f22a) zooming_pane_g

0xec00,	// (0x0008ea11) level_10_zoom

0xec09,	// (0x0008ea1a) level_11_zoom

0xec12,	// (0x0008ea23) level_1_zoom

0xec1b,	// (0x0008ea2c) level_2_zoom

0xec24,	// (0x0008ea35) level_3_zoom

0xec2d,	// (0x0008ea3e) level_4_zoom

0xec36,	// (0x0008ea47) level_5_zoom

0xec3f,	// (0x0008ea50) level_6_zoom

0xec48,	// (0x0008ea59) level_7_zoom

0xec51,	// (0x0008ea62) level_8_zoom

0xec5a,	// (0x0008ea6b) level_9_zoom

0xec6b,	// (0x0008ea7c) popup_phob_thumbnail_window_g1

0xec73,	// (0x0008ea84) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0008f231) popup_phob_thumbnail_window_g

0x1199,	// (0x00080faa) level_1_location

0x11a1,	// (0x00080fb2) level_2_location

0x11a9,	// (0x00080fba) level_3_location

0x11b1,	// (0x00080fc2) level_4_location

0xebbc,	// (0x0008e9cd) level_5_location

0x7a2b,	// (0x0008783c) mce_icon_pane_g1

0x7a33,	// (0x00087844) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0008f236) mce_icon_pane_g

0x7a3b,	// (0x0008784c) main_mup_pane_g1_ParamLimits

0x7a3b,	// (0x0008784c) main_mup_pane_g1

0x7a53,	// (0x00087864) main_mup_pane_g2_ParamLimits

0x7a53,	// (0x00087864) main_mup_pane_g2

0x7a6f,	// (0x00087880) main_mup_pane_g3_ParamLimits

0x7a6f,	// (0x00087880) main_mup_pane_g3

0x7a8b,	// (0x0008789c) main_mup_pane_g4_ParamLimits

0x7a8b,	// (0x0008789c) main_mup_pane_g4

0x7aa7,	// (0x000878b8) main_mup_pane_g5_ParamLimits

0x7aa7,	// (0x000878b8) main_mup_pane_g5

0x7ac8,	// (0x000878d9) main_mup_pane_g6_ParamLimits

0x7ac8,	// (0x000878d9) main_mup_pane_g6

0x7ae4,	// (0x000878f5) main_mup_pane_g7_ParamLimits

0x7ae4,	// (0x000878f5) main_mup_pane_g7

0x7b00,	// (0x00087911) main_mup_pane_g8_ParamLimits

0x7b00,	// (0x00087911) main_mup_pane_g8

0x7b20,	// (0x00087931) main_mup_pane_g9_ParamLimits

0x7b20,	// (0x00087931) main_mup_pane_g9

0x7b3f,	// (0x00087950) main_mup_pane_g10_ParamLimits

0x7b3f,	// (0x00087950) main_mup_pane_g10

0x7b5e,	// (0x0008796f) main_mup_pane_g11_ParamLimits

0x7b5e,	// (0x0008796f) main_mup_pane_g11

0x7b76,	// (0x00087987) main_mup_pane_g12_ParamLimits

0x7b76,	// (0x00087987) main_mup_pane_g12

0x7b84,	// (0x00087995) main_mup_pane_g13_ParamLimits

0x7b84,	// (0x00087995) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0008f23b) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0008f23b) main_mup_pane_g

0x7b9a,	// (0x000879ab) main_mup_pane_t1_ParamLimits

0x7b9a,	// (0x000879ab) main_mup_pane_t1

0x7bb7,	// (0x000879c8) main_mup_pane_t2_ParamLimits

0x7bb7,	// (0x000879c8) main_mup_pane_t2

0x7bd1,	// (0x000879e2) main_mup_pane_t3_ParamLimits

0x7bd1,	// (0x000879e2) main_mup_pane_t3

0x7beb,	// (0x000879fc) main_mup_pane_t4_ParamLimits

0x7beb,	// (0x000879fc) main_mup_pane_t4

0x7bfd,	// (0x00087a0e) main_mup_pane_t5_ParamLimits

0x7bfd,	// (0x00087a0e) main_mup_pane_t5

0x7c0f,	// (0x00087a20) main_mup_pane_t6_ParamLimits

0x7c0f,	// (0x00087a20) main_mup_pane_t6

0x0005,

0xf445,	// (0x0008f256) main_mup_pane_t_ParamLimits

0xf445,	// (0x0008f256) main_mup_pane_t

0x7c25,	// (0x00087a36) mup_progress_pane_ParamLimits

0x7c25,	// (0x00087a36) mup_progress_pane

0x7c31,	// (0x00087a42) mup_visualizer_pane_ParamLimits

0x7c31,	// (0x00087a42) mup_visualizer_pane

0x7c6b,	// (0x00087a7c) mup_volume_pane_ParamLimits

0x7c6b,	// (0x00087a7c) mup_volume_pane

0xe8d9,	// (0x0008e6ea) mup_visualizer_pane_g1_ParamLimits

0xe8d9,	// (0x0008e6ea) mup_visualizer_pane_g1

0xe8d9,	// (0x0008e6ea) mup_visualizer_pane_g2_ParamLimits

0xe8d9,	// (0x0008e6ea) mup_visualizer_pane_g2

0xeaf1,	// (0x0008e902) mup_visualizer_pane_g3_ParamLimits

0xeaf1,	// (0x0008e902) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0008f263) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0008f263) mup_visualizer_pane_g

0xe130,	// (0x0008df41) mup_volume_pane_g1

0xec83,	// (0x0008ea94) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0008f26a) mup_volume_pane_g

0xe130,	// (0x0008df41) mup_progress_pane_g1

0xec8c,	// (0x0008ea9d) mup_progress_pane_g2

0xec95,	// (0x0008eaa6) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0008f26f) mup_progress_pane_g

0xddad,	// (0x0008dbbe) bg_popup_window_pane_cp05

0xec9e,	// (0x0008eaaf) heading_pane_cp02_ParamLimits

0xec9e,	// (0x0008eaaf) heading_pane_cp02

0xecb8,	// (0x0008eac9) list_popup_blid_pane

0xecc0,	// (0x0008ead1) list_blid_sat_info_pane_ParamLimits

0xecc0,	// (0x0008ead1) list_blid_sat_info_pane

0xecd3,	// (0x0008eae4) list_blid_sat_info_pane_g1

0xecdb,	// (0x0008eaec) list_blid_sat_info_pane_t1

0x7d78,	// (0x00087b89) mup_equalizer_pane_ParamLimits

0x7d78,	// (0x00087b89) mup_equalizer_pane

0x7d99,	// (0x00087baa) mup_equalizer_pane_cp1_ParamLimits

0x7d99,	// (0x00087baa) mup_equalizer_pane_cp1

0x7dba,	// (0x00087bcb) mup_equalizer_pane_cp2_ParamLimits

0x7dba,	// (0x00087bcb) mup_equalizer_pane_cp2

0x7ddb,	// (0x00087bec) mup_equalizer_pane_cp3_ParamLimits

0x7ddb,	// (0x00087bec) mup_equalizer_pane_cp3

0x7dfc,	// (0x00087c0d) mup_equalizer_pane_cp4_ParamLimits

0x7dfc,	// (0x00087c0d) mup_equalizer_pane_cp4

0x7e1d,	// (0x00087c2e) mup_equalizer_pane_cp5

0x7e33,	// (0x00087c44) mup_equalizer_pane_cp6

0x7e4b,	// (0x00087c5c) mup_equalizer_pane_cp7

0x10b7,	// (0x00080ec8) bg_popup_call_poc_act_pane_g9

0x10bf,	// (0x00080ed0) bg_popup_call_poc_act_pane_g10

0x10c7,	// (0x00080ed8) bg_popup_call_poc_act_pane_g11

0x000a,

0xe008,	// (0x0008de19) mup_scale_pane

0xe130,	// (0x0008df41) mup_scale_pane_g1

0xece9,	// (0x0008eafa) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0008f28b) mup_scale_pane_g

0xed0d,	// (0x0008eb1e) msg_data_pane

0xed15,	// (0x0008eb26) scroll_pane_cp017

0x7e75,	// (0x00087c86) bg_list_pane_cp04_ParamLimits

0x7e75,	// (0x00087c86) bg_list_pane_cp04

0xed1d,	// (0x0008eb2e) msg_data_pane_g1

0x7e9b,	// (0x00087cac) msg_data_pane_g2

0x7ea5,	// (0x00087cb6) msg_data_pane_g3

0x7ead,	// (0x00087cbe) msg_data_pane_g4

0x7eb5,	// (0x00087cc6) msg_data_pane_g5

0x7ebd,	// (0x00087cce) msg_data_pane_g6

0x7ec5,	// (0x00087cd6) msg_data_pane_g7

0x0006,

0xf489,	// (0x0008f29a) msg_data_pane_g

0x7ecd,	// (0x00087cde) msg_text_pane_ParamLimits

0x7ecd,	// (0x00087cde) msg_text_pane

0x7f04,	// (0x00087d15) qrid_highlight_pane_cp011_ParamLimits

0x7f04,	// (0x00087d15) qrid_highlight_pane_cp011

0xddad,	// (0x0008dbbe) msg_body_pane

0xddad,	// (0x0008dbbe) msg_header_pane

0xed2e,	// (0x0008eb3f) input_focus_pane_cp07

0x7f2a,	// (0x00087d3b) msg_header_pane_t1_ParamLimits

0x7f2a,	// (0x00087d3b) msg_header_pane_t1

0x7f3c,	// (0x00087d4d) msg_header_pane_t2_ParamLimits

0x7f3c,	// (0x00087d4d) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0008f2ae) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0008f2ae) msg_header_pane_t

0xed43,	// (0x0008eb54) msg_body_pane_g1

0x7f4e,	// (0x00087d5f) msg_body_pane_t1_ParamLimits

0x7f4e,	// (0x00087d5f) msg_body_pane_t1

0x7f7f,	// (0x00087d90) msg_body_pane_t2_ParamLimits

0x7f7f,	// (0x00087d90) msg_body_pane_t2

0x7f91,	// (0x00087da2) msg_body_pane_t3_ParamLimits

0x7f91,	// (0x00087da2) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0008f2b3) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0008f2b3) msg_body_pane_t

0x7ff5,	// (0x00087e06) main_viewer_pane_g1_ParamLimits

0x7ff5,	// (0x00087e06) main_viewer_pane_g1

0x8001,	// (0x00087e12) main_viewer_pane_g2_ParamLimits

0x8001,	// (0x00087e12) main_viewer_pane_g2

0x800d,	// (0x00087e1e) main_viewer_pane_g3_ParamLimits

0x800d,	// (0x00087e1e) main_viewer_pane_g3

0x801e,	// (0x00087e2f) main_viewer_pane_g4_ParamLimits

0x801e,	// (0x00087e2f) main_viewer_pane_g4

0x802f,	// (0x00087e40) main_viewer_pane_g5_ParamLimits

0x802f,	// (0x00087e40) main_viewer_pane_g5

0x802f,	// (0x00087e40) main_viewer_pane_g7_ParamLimits

0x802f,	// (0x00087e40) main_viewer_pane_g7

0xe776,	// (0x0008e587) main_viewer_pane_g8_ParamLimits

0xe776,	// (0x0008e587) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0008f2c3) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0008f2c3) main_viewer_pane_g

0xed4b,	// (0x0008eb5c) viewer_content_pane_ParamLimits

0xed4b,	// (0x0008eb5c) viewer_content_pane

0x806d,	// (0x00087e7e) main_postcard_pane_g1_ParamLimits

0x806d,	// (0x00087e7e) main_postcard_pane_g1

0x807b,	// (0x00087e8c) main_postcard_pane_g2_ParamLimits

0x807b,	// (0x00087e8c) main_postcard_pane_g2

0x8089,	// (0x00087e9a) main_postcard_pane_g3_ParamLimits

0x8089,	// (0x00087e9a) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0008f2d4) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0008f2d4) main_postcard_pane_g

0x8099,	// (0x00087eaa) main_postcard_pane_g4

0x12b9,	// (0x000810ca) smil_status_volume_pane_g2

0x80c5,	// (0x00087ed6) postcard_pane_ParamLimits

0x80c5,	// (0x00087ed6) postcard_pane

0xe8d9,	// (0x0008e6ea) postcard_pane_g1_ParamLimits

0xe8d9,	// (0x0008e6ea) postcard_pane_g1

0x80f7,	// (0x00087f08) postcard_pane_g2_ParamLimits

0x80f7,	// (0x00087f08) postcard_pane_g2

0x8103,	// (0x00087f14) postcard_pane_g3_ParamLimits

0x8103,	// (0x00087f14) postcard_pane_g3

0xed59,	// (0x0008eb6a) postcard_pane_g4_ParamLimits

0xed59,	// (0x0008eb6a) postcard_pane_g4

0x810f,	// (0x00087f20) postcard_pane_g5_ParamLimits

0x810f,	// (0x00087f20) postcard_pane_g5

0x811b,	// (0x00087f2c) postcard_pane_g6_ParamLimits

0x811b,	// (0x00087f2c) postcard_pane_g6

0xed67,	// (0x0008eb78) postcard_pane_g7_ParamLimits

0xed67,	// (0x0008eb78) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0008f2e1) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0008f2e1) postcard_pane_g

0x8127,	// (0x00087f38) main_mp2_pane_g1_ParamLimits

0x8127,	// (0x00087f38) main_mp2_pane_g1

0x8133,	// (0x00087f44) main_mp2_pane_g2_ParamLimits

0x8133,	// (0x00087f44) main_mp2_pane_g2

0x813f,	// (0x00087f50) main_mp2_pane_g3_ParamLimits

0x813f,	// (0x00087f50) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0008f2f0) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0008f2f0) main_mp2_pane_g

0x814b,	// (0x00087f5c) main_mp2_pane_t1_ParamLimits

0x814b,	// (0x00087f5c) main_mp2_pane_t1

0x8162,	// (0x00087f73) main_mp2_pane_t2_ParamLimits

0x8162,	// (0x00087f73) main_mp2_pane_t2

0x8176,	// (0x00087f87) main_mp2_pane_t3_ParamLimits

0x8176,	// (0x00087f87) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0008f2f7) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0008f2f7) main_mp2_pane_t

0xed75,	// (0x0008eb86) pec_content_pane_ParamLimits

0xed75,	// (0x0008eb86) pec_content_pane

0xe421,	// (0x0008e232) scroll_pane_cp015

0xed87,	// (0x0008eb98) pec_attribute_pane_ParamLimits

0xed87,	// (0x0008eb98) pec_attribute_pane

0x8188,	// (0x00087f99) pec_content_pane_g1_ParamLimits

0x8188,	// (0x00087f99) pec_content_pane_g1

0xed97,	// (0x0008eba8) pec_content_pane_t1_ParamLimits

0xed97,	// (0x0008eba8) pec_content_pane_t1

0xeda9,	// (0x0008ebba) pec_content_pane_t2_ParamLimits

0xeda9,	// (0x0008ebba) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0008f2fe) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0008f2fe) pec_content_pane_t

0x8194,	// (0x00087fa5) list_single_graphic_pane_cp01_ParamLimits

0x8194,	// (0x00087fa5) list_single_graphic_pane_cp01

0xe008,	// (0x0008de19) bg_popup_sub_pane_cp04

0xedbb,	// (0x0008ebcc) popup_mup_playback_window_g1

0xedc7,	// (0x0008ebd8) popup_mup_playback_window_t1

0xeddc,	// (0x0008ebed) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0008f303) popup_mup_playback_window_t

0xee13,	// (0x0008ec24) main_image_pane_g1_ParamLimits

0xee13,	// (0x0008ec24) main_image_pane_g1

0xee56,	// (0x0008ec67) scroll_pane_cp018_ParamLimits

0xee56,	// (0x0008ec67) scroll_pane_cp018

0xee6e,	// (0x0008ec7f) scroll_pane_cp016_ParamLimits

0xee6e,	// (0x0008ec7f) scroll_pane_cp016

0x822d,	// (0x0008803e) smil2_image_pane_ParamLimits

0x822d,	// (0x0008803e) smil2_image_pane

0x825d,	// (0x0008806e) smil2_root_pane_ParamLimits

0x825d,	// (0x0008806e) smil2_root_pane

0x8289,	// (0x0008809a) smil2_text_pane_ParamLimits

0x8289,	// (0x0008809a) smil2_text_pane

0xddad,	// (0x0008dbbe) bg_list_pane_cp06

0xeeaa,	// (0x0008ecbb) grid_radio_pane

0xddad,	// (0x0008dbbe) bg_popup_window_pane_cp06

0xeeb2,	// (0x0008ecc3) main_fmradio_pane_t1

0xe950,	// (0x0008e761) heading_pane_cp04

0xeec0,	// (0x0008ecd1) main_fmradio_pane_t2

0x10cf,	// (0x00080ee0) popup_cale_lunar_info_window_g1

0xeece,	// (0x0008ecdf) main_fmradio_pane_t3

0x10d7,	// (0x00080ee8) popup_cale_lunar_info_window_g2

0xeedc,	// (0x0008eced) main_fmradio_pane_t4

0x0001,

0xeeea,	// (0x0008ecfb) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0008f3de) popup_cale_lunar_info_window_g

0xf507,	// (0x0008f318) main_fmradio_pane_t

0xeef8,	// (0x0008ed09) wait_bar_pane_cp03

0xef00,	// (0x0008ed11) cell_fmradio_pane_ParamLimits

0xef00,	// (0x0008ed11) cell_fmradio_pane

0xed67,	// (0x0008eb78) cell_fmradio_pane_g1_ParamLimits

0xed67,	// (0x0008eb78) cell_fmradio_pane_g1

0xddad,	// (0x0008dbbe) grid_highlight_pane_cp011

0xef13,	// (0x0008ed24) poc_content_pane_ParamLimits

0xef13,	// (0x0008ed24) poc_content_pane

0xef25,	// (0x0008ed36) scroll_pane_cp019

0x82c9,	// (0x000880da) popup_call_poc_act_window_ParamLimits

0x82c9,	// (0x000880da) popup_call_poc_act_window

0x82d6,	// (0x000880e7) popup_call_poc_inact_window_ParamLimits

0x82d6,	// (0x000880e7) popup_call_poc_inact_window

0xf5a4,	// (0x0008f3b5) bg_popup_call_poc_act_pane_g

0x1047,	// (0x00080e58) bg_popup_call_poc_inact_pane_g1

0x104f,	// (0x00080e60) bg_popup_call_poc_inact_pane_g2

0xef2d,	// (0x0008ed3e) popup_call_poc_act_window_g2

0x1057,	// (0x00080e68) bg_popup_call_poc_inact_pane_g3

0x105f,	// (0x00080e70) bg_popup_call_poc_inact_pane_g4

0x1067,	// (0x00080e78) bg_popup_call_poc_inact_pane_g5

0xef35,	// (0x0008ed46) popup_call_poc_act_window_t1_ParamLimits

0xef35,	// (0x0008ed46) popup_call_poc_act_window_t1

0xef5d,	// (0x0008ed6e) popup_call_poc_act_window_t2_ParamLimits

0xef5d,	// (0x0008ed6e) popup_call_poc_act_window_t2

0xef85,	// (0x0008ed96) popup_call_poc_act_window_t3_ParamLimits

0xef85,	// (0x0008ed96) popup_call_poc_act_window_t3

0xefad,	// (0x0008edbe) popup_call_poc_act_window_t4_ParamLimits

0xefad,	// (0x0008edbe) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0008f323) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0008f323) popup_call_poc_act_window_t

0x106f,	// (0x00080e80) bg_popup_call_poc_inact_pane_g6

0x1077,	// (0x00080e88) bg_popup_call_poc_inact_pane_g7

0x107f,	// (0x00080e90) bg_popup_call_poc_inact_pane_g8

0xefbf,	// (0x0008edd0) popup_call_poc_inact_window_g2

0x1087,	// (0x00080e98) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0008f3a2) bg_popup_call_poc_inact_pane_g

0xefc7,	// (0x0008edd8) popup_call_poc_inact_window_t1_ParamLimits

0xefc7,	// (0x0008edd8) popup_call_poc_inact_window_t1

0xefdc,	// (0x0008eded) popup_call_poc_inact_window_t2_ParamLimits

0xefdc,	// (0x0008eded) popup_call_poc_inact_window_t2

0xeff1,	// (0x0008ee02) popup_call_poc_inact_window_t3_ParamLimits

0xeff1,	// (0x0008ee02) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0008f32c) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0008f32c) popup_call_poc_inact_window_t

0x123f,	// (0x00081050) context_pane_ParamLimits

0x8913,	// (0x00088724) signal_pane_ParamLimits

0xebbc,	// (0x0008e9cd) main_call2_pane

0x888b,	// (0x0008869c) popup_phob_thumbnail2_window_ParamLimits

0x888b,	// (0x0008869c) popup_phob_thumbnail2_window

0x7fa3,	// (0x00087db4) aid_hotspot_pointer_arrow_pane

0x7fab,	// (0x00087dbc) aid_hotspot_pointer_hand_pane

0x85f8,	// (0x00088409) phob_pre_status_pane_g5

0x6363,	// (0x00086174) cams_zoom_pane_ParamLimits

0x636f,	// (0x00086180) image_vga_pane_ParamLimits

0x637e,	// (0x0008618f) main_camera_pane_g1_ParamLimits

0x638c,	// (0x0008619d) main_camera_pane_g2_ParamLimits

0x6398,	// (0x000861a9) main_camera_pane_g3_ParamLimits

0x63a4,	// (0x000861b5) main_camera_pane_g4_ParamLimits

0x63b0,	// (0x000861c1) main_camera_pane_g5_ParamLimits

0x63bc,	// (0x000861cd) main_camera_pane_g6_ParamLimits

0x63c8,	// (0x000861d9) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0008f02b) main_camera_pane_g_ParamLimits

0x63d4,	// (0x000861e5) main_camera_pane_t1_ParamLimits

0x63e6,	// (0x000861f7) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0008f03c) main_camera_pane_t_ParamLimits

0xe008,	// (0x0008de19) bg_popup_preview_window_pane_cp01_ParamLimits

0xe008,	// (0x0008de19) bg_popup_preview_window_pane_cp01

0xf006,	// (0x0008ee17) popup_phob_thumbnail2_window_g1_ParamLimits

0xf006,	// (0x0008ee17) popup_phob_thumbnail2_window_g1

0xddad,	// (0x0008dbbe) call2_cli_visual_pane

0x82f2,	// (0x00088103) popup_call2_audio_conf_window_ParamLimits

0x82f2,	// (0x00088103) popup_call2_audio_conf_window

0x8307,	// (0x00088118) popup_call2_audio_first_window_ParamLimits

0x8307,	// (0x00088118) popup_call2_audio_first_window

0x83a5,	// (0x000881b6) popup_call2_audio_in_window_ParamLimits

0x83a5,	// (0x000881b6) popup_call2_audio_in_window

0x83e7,	// (0x000881f8) popup_call2_audio_out_window_ParamLimits

0x83e7,	// (0x000881f8) popup_call2_audio_out_window

0x8449,	// (0x0008825a) popup_call2_audio_second_window_ParamLimits

0x8449,	// (0x0008825a) popup_call2_audio_second_window

0x84a7,	// (0x000882b8) popup_call2_audio_wait_window_ParamLimits

0x84a7,	// (0x000882b8) popup_call2_audio_wait_window

0xddad,	// (0x0008dbbe) bg_popup_call2_act_pane_cp03

0xdfea,	// (0x0008ddfb) list_conf_pane_cp

0xf012,	// (0x0008ee23) popup_call2_audio_conf_window_t1

0xe9ad,	// (0x0008e7be) list_single_graphic_popup_conf2_pane_ParamLimits

0xe9ad,	// (0x0008e7be) list_single_graphic_popup_conf2_pane

0xe9c0,	// (0x0008e7d1) list_highlight_pane_cp04

0xf020,	// (0x0008ee31) list_single_graphic_popup_conf2_pane_g1

0xe9d1,	// (0x0008e7e2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0008f333) list_single_graphic_popup_conf2_pane_g

0xf02a,	// (0x0008ee3b) list_single_graphic_popup_conf2_pane_t1

0xf038,	// (0x0008ee49) bg_popup_call2_act_pane_cp01_ParamLimits

0xf038,	// (0x0008ee49) bg_popup_call2_act_pane_cp01

0x030c,	// (0x0008011d) call_type_pane_cp05_ParamLimits

0x030c,	// (0x0008011d) call_type_pane_cp05

0x0360,	// (0x00080171) popup_call2_audio_second_window_g1_ParamLimits

0x0360,	// (0x00080171) popup_call2_audio_second_window_g1

0x03b4,	// (0x000801c5) popup_call2_audio_second_window_g2_ParamLimits

0x03b4,	// (0x000801c5) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0008f338) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0008f338) popup_call2_audio_second_window_g

0x0419,	// (0x0008022a) popup_call2_audio_second_window_t1_ParamLimits

0x0419,	// (0x0008022a) popup_call2_audio_second_window_t1

0x04d4,	// (0x000802e5) popup_call2_audio_second_window_t2_ParamLimits

0x04d4,	// (0x000802e5) popup_call2_audio_second_window_t2

0x0527,	// (0x00080338) popup_call2_audio_second_window_t3_ParamLimits

0x0527,	// (0x00080338) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0008f33f) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0008f33f) popup_call2_audio_second_window_t

0xddad,	// (0x0008dbbe) bg_popup_call2_in_pane_cp02

0xddb7,	// (0x0008dbc8) call_type_pane_cp04

0xddbf,	// (0x0008dbd0) popup_call2_audio_wait_window_g1

0xddc7,	// (0x0008dbd8) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0008ef18) popup_call2_audio_wait_window_g

0xddcf,	// (0x0008dbe0) popup_call2_audio_wait_window_t3

0x061a,	// (0x0008042b) bg_popup_call2_act_pane_ParamLimits

0x061a,	// (0x0008042b) bg_popup_call2_act_pane

0x06da,	// (0x000804eb) call_type_pane_cp03_ParamLimits

0x06da,	// (0x000804eb) call_type_pane_cp03

0x073e,	// (0x0008054f) popup_call2_audio_first_window_g1_ParamLimits

0x073e,	// (0x0008054f) popup_call2_audio_first_window_g1

0x07ae,	// (0x000805bf) popup_call2_audio_first_window_g2_ParamLimits

0x07ae,	// (0x000805bf) popup_call2_audio_first_window_g2

0xe8d9,	// (0x0008e6ea) popup_call2_audio_first_window_g3_ParamLimits

0xe8d9,	// (0x0008e6ea) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0008f348) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0008f348) popup_call2_audio_first_window_g

0x088c,	// (0x0008069d) popup_call2_audio_first_window_t1_ParamLimits

0x088c,	// (0x0008069d) popup_call2_audio_first_window_t1

0x098f,	// (0x000807a0) popup_call2_audio_first_window_t4_ParamLimits

0x098f,	// (0x000807a0) popup_call2_audio_first_window_t4

0x0a72,	// (0x00080883) popup_call2_audio_first_window_t5_ParamLimits

0x0a72,	// (0x00080883) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0008f353) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0008f353) popup_call2_audio_first_window_t

0xe000,	// (0x0008de11) bg_popup_call2_act_pane_g1

0x10df,	// (0x00080ef0) popup_cale_lunar_info_window_t1

0x10ed,	// (0x00080efe) popup_cale_lunar_info_window_t2

0x10fb,	// (0x00080f0c) popup_cale_lunar_info_window_t3

0xddad,	// (0x0008dbbe) bg_popup_call2_bubble_pane

0x0b73,	// (0x00080984) bg_popup_call2_in_pane_cp01_ParamLimits

0x0b73,	// (0x00080984) bg_popup_call2_in_pane_cp01

0xda89,	// (0x0008d89a) call_type_pane_cp02

0x0bbb,	// (0x000809cc) popup_call2_audio_out_window_g1_ParamLimits

0x0bbb,	// (0x000809cc) popup_call2_audio_out_window_g1

0x0be7,	// (0x000809f8) popup_call2_audio_out_window_g2_ParamLimits

0x0be7,	// (0x000809f8) popup_call2_audio_out_window_g2

0x0c0f,	// (0x00080a20) popup_call2_audio_out_window_g3_ParamLimits

0x0c0f,	// (0x00080a20) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0008f35c) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0008f35c) popup_call2_audio_out_window_g

0x0c4a,	// (0x00080a5b) popup_call2_audio_out_window_t1_ParamLimits

0x0c4a,	// (0x00080a5b) popup_call2_audio_out_window_t1

0x0ca9,	// (0x00080aba) popup_call2_audio_out_window_t2_ParamLimits

0x0ca9,	// (0x00080aba) popup_call2_audio_out_window_t2

0x0cfd,	// (0x00080b0e) popup_call2_audio_out_window_t3_ParamLimits

0x0cfd,	// (0x00080b0e) popup_call2_audio_out_window_t3

0x0d13,	// (0x00080b24) popup_call2_audio_out_window_t4_ParamLimits

0x0d13,	// (0x00080b24) popup_call2_audio_out_window_t4

0x0d29,	// (0x00080b3a) popup_call2_audio_out_window_t5_ParamLimits

0x0d29,	// (0x00080b3a) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0008f365) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0008f365) popup_call2_audio_out_window_t

0x0d8d,	// (0x00080b9e) bg_popup_call2_in_pane_ParamLimits

0x0d8d,	// (0x00080b9e) bg_popup_call2_in_pane

0x0de9,	// (0x00080bfa) popup_call2_audio_in_window_g1_ParamLimits

0x0de9,	// (0x00080bfa) popup_call2_audio_in_window_g1

0x0e21,	// (0x00080c32) popup_call2_audio_in_window_g2_ParamLimits

0x0e21,	// (0x00080c32) popup_call2_audio_in_window_g2

0x0e59,	// (0x00080c6a) popup_call2_audio_in_window_g3_ParamLimits

0x0e59,	// (0x00080c6a) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0008f372) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0008f372) popup_call2_audio_in_window_g

0x0eb1,	// (0x00080cc2) popup_call2_audio_in_window_t1_ParamLimits

0x0eb1,	// (0x00080cc2) popup_call2_audio_in_window_t1

0x0f31,	// (0x00080d42) popup_call2_audio_in_window_t2_ParamLimits

0x0f31,	// (0x00080d42) popup_call2_audio_in_window_t2

0x0fb1,	// (0x00080dc2) popup_call2_audio_in_window_t3_ParamLimits

0x0fb1,	// (0x00080dc2) popup_call2_audio_in_window_t3

0x0fcb,	// (0x00080ddc) popup_call2_audio_in_window_t4_ParamLimits

0x0fcb,	// (0x00080ddc) popup_call2_audio_in_window_t4

0x0fdd,	// (0x00080dee) popup_call2_audio_in_window_t5_ParamLimits

0x0fdd,	// (0x00080dee) popup_call2_audio_in_window_t5

0x0ff2,	// (0x00080e03) popup_call2_audio_in_window_t6_ParamLimits

0x0ff2,	// (0x00080e03) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0008f37b) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0008f37b) popup_call2_audio_in_window_t

0xe000,	// (0x0008de11) bg_popup_call2_in_pane_g1

0x1109,	// (0x00080f1a) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0008f3e3) popup_cale_lunar_info_window_t

0xe008,	// (0x0008de19) bg_popup_call2_rect_pane_ParamLimits

0xe008,	// (0x0008de19) bg_popup_call2_rect_pane

0xddad,	// (0x0008dbbe) call2_cli_visual_graphic_pane

0xddad,	// (0x0008dbbe) call2_cli_visual_text_pane

0x89b9,	// (0x000887ca) smil_status_volume_pane_g3

0x0002,

0xe130,	// (0x0008df41) call2_cli_visual_graphic_pane_g1

0xe130,	// (0x0008df41) call2_cli_visual_graphic_pane_g2

0xe130,	// (0x0008df41) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0008f388) call2_cli_visual_graphic_pane_g

0x1007,	// (0x00080e18) bg_popup_call2_rect_pane_g1

0xe1bc,	// (0x0008dfcd) bg_popup_call2_rect_pane_g2

0x100f,	// (0x00080e20) bg_popup_call2_rect_pane_g3

0x1017,	// (0x00080e28) bg_popup_call2_rect_pane_g4

0x101f,	// (0x00080e30) bg_popup_call2_rect_pane_g5

0x1027,	// (0x00080e38) bg_popup_call2_rect_pane_g6

0x102f,	// (0x00080e40) bg_popup_call2_rect_pane_g7

0x1037,	// (0x00080e48) bg_popup_call2_rect_pane_g8

0x103f,	// (0x00080e50) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0008f38f) bg_popup_call2_rect_pane_g

0x1047,	// (0x00080e58) bg_popup_call2_bubble_pane_g1

0x104f,	// (0x00080e60) bg_popup_call2_bubble_pane_g2

0x1057,	// (0x00080e68) bg_popup_call2_bubble_pane_g3

0x105f,	// (0x00080e70) bg_popup_call2_bubble_pane_g4

0x1067,	// (0x00080e78) bg_popup_call2_bubble_pane_g5

0x106f,	// (0x00080e80) bg_popup_call2_bubble_pane_g6

0x1077,	// (0x00080e88) bg_popup_call2_bubble_pane_g7

0x107f,	// (0x00080e90) bg_popup_call2_bubble_pane_g8

0x1087,	// (0x00080e98) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0008f3a2) bg_popup_call2_bubble_pane_g

0x5eda,	// (0x00085ceb) aid_cale_week_size_cell_pane

0x63f8,	// (0x00086209) aid_cams_cif_uncrop_pane_ParamLimits

0x63f8,	// (0x00086209) aid_cams_cif_uncrop_pane

0x6553,	// (0x00086364) aid_cams_size_cell_ParamLimits

0x6553,	// (0x00086364) aid_cams_size_cell

0x655f,	// (0x00086370) grid_cams_pane_ParamLimits

0x656d,	// (0x0008637e) linegrid_cams_pane_ParamLimits

0x669b,	// (0x000864ac) call_video_pane_t1

0x66bc,	// (0x000864cd) call_video_pane_t2

0x0001,

0xf27e,	// (0x0008f08f) call_video_pane_t

0x6bf3,	// (0x00086a04) aid_cale_month_size_cell_pane_ParamLimits

0x6bf3,	// (0x00086a04) aid_cale_month_size_cell_pane

0xf61b,	// (0x0008f42c) smil_status_volume_pane_g

0x89c6,	// (0x000887d7) volume_smil_pane_ParamLimits

0x5635,	// (0x00085446) aid_popup2_width_pane

0x5dd4,	// (0x00085be5) cell_qdial_pane_g4_ParamLimits

0x5dd4,	// (0x00085be5) cell_qdial_pane_g4

0x7870,	// (0x00087681) aid_blid_cardinal_pane_ParamLimits

0x7880,	// (0x00087691) aid_blid_destination_pane_ParamLimits

0x7880,	// (0x00087691) aid_blid_destination_pane

0xe008,	// (0x0008de19) bg_popup_call_poc_act_pane_ParamLimits

0xe008,	// (0x0008de19) bg_popup_call_poc_act_pane

0xe008,	// (0x0008de19) bg_popup_call_poc_inact_pane_ParamLimits

0xe008,	// (0x0008de19) bg_popup_call_poc_inact_pane

0x108f,	// (0x00080ea0) bg_popup_call_poc_act_pane_g1

0x1097,	// (0x00080ea8) bg_popup_call_poc_act_pane_g2

0x109f,	// (0x00080eb0) bg_popup_call_poc_act_pane_g3

0x105f,	// (0x00080e70) bg_popup_call_poc_act_pane_g4

0x1067,	// (0x00080e78) bg_popup_call_poc_act_pane_g5

0x10a7,	// (0x00080eb8) bg_popup_call_poc_act_pane_g6

0x1077,	// (0x00080e88) bg_popup_call_poc_act_pane_g7

0x10af,	// (0x00080ec0) bg_popup_call_poc_act_pane_g8

0xddad,	// (0x0008dbbe) main_usb_pane

0x87ba,	// (0x000885cb) popup_cale_lunar_info_window

0x69e7,	// (0x000867f8) im_reading_pane_t1_ParamLimits

0xe379,	// (0x0008e18a) list_im_pane_ParamLimits

0xe38a,	// (0x0008e19b) scroll_pane_cp07_ParamLimits

0xddad,	// (0x0008dbbe) grid_highlight_pane_cp012

0xe008,	// (0x0008de19) mup_scale_pane_ParamLimits

0xe8d9,	// (0x0008e6ea) main_usb_pane_g1_ParamLimits

0xe8d9,	// (0x0008e6ea) main_usb_pane_g1

0x851b,	// (0x0008832c) main_usb_pane_g2_ParamLimits

0x851b,	// (0x0008832c) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0008f3cc) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0008f3cc) main_usb_pane_g

0x8527,	// (0x00088338) main_usb_pane_t1_ParamLimits

0x8527,	// (0x00088338) main_usb_pane_t1

0x8539,	// (0x0008834a) main_usb_pane_t2_ParamLimits

0x8539,	// (0x0008834a) main_usb_pane_t2

0x854b,	// (0x0008835c) main_usb_pane_t3_ParamLimits

0x854b,	// (0x0008835c) main_usb_pane_t3

0x855d,	// (0x0008836e) main_usb_pane_t4_ParamLimits

0x855d,	// (0x0008836e) main_usb_pane_t4

0x856f,	// (0x00088380) main_usb_pane_t5_ParamLimits

0x856f,	// (0x00088380) main_usb_pane_t5

0x8581,	// (0x00088392) main_usb_pane_t6_ParamLimits

0x8581,	// (0x00088392) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0008f3d1) main_usb_pane_t_ParamLimits

0x7816,	// (0x00087627) aid_text_placing

0x7822,	// (0x00087633) main_location2_pane_t1_ParamLimits

0x7836,	// (0x00087647) main_location2_pane_t2_ParamLimits

0x784a,	// (0x0008765b) main_location2_pane_t3_ParamLimits

0x785e,	// (0x0008766f) main_location2_pane_t4_ParamLimits

0x785e,	// (0x0008766f) main_location2_pane_t4

0xf3df,	// (0x0008f1f0) main_location2_pane_t_ParamLimits

0xe044,	// (0x0008de55) find_pinb_pane_g2_ParamLimits

0xe044,	// (0x0008de55) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0008ef3e) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0008ef3e) find_pinb_pane_g

0xe050,	// (0x0008de61) find_pinb_pane_t1_ParamLimits

0xe062,	// (0x0008de73) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0008ef43) find_pinb_pane_t_ParamLimits

0xddad,	// (0x0008dbbe) main_call3_pane

0x6fff,	// (0x00086e10) cale_month_day_heading_pane_t1_ParamLimits

0x705d,	// (0x00086e6e) cale_month_day_heading_pane_t2_ParamLimits

0x70c2,	// (0x00086ed3) cale_month_day_heading_pane_t3_ParamLimits

0x7127,	// (0x00086f38) cale_month_day_heading_pane_t4_ParamLimits

0x718c,	// (0x00086f9d) cale_month_day_heading_pane_t5_ParamLimits

0x71f1,	// (0x00087002) cale_month_day_heading_pane_t6_ParamLimits

0x7256,	// (0x00087067) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0008f0c7) cale_month_day_heading_pane_t_ParamLimits

0xe5ca,	// (0x0008e3db) smil_status_volume_pane

0x80df,	// (0x00087ef0) postcard_address_pane_ParamLimits

0x80df,	// (0x00087ef0) postcard_address_pane

0x80eb,	// (0x00087efc) postcard_message_pane_ParamLimits

0x80eb,	// (0x00087efc) postcard_message_pane

0x84e6,	// (0x000882f7) call2_cli_visual_pane_t1_ParamLimits

0x84e6,	// (0x000882f7) call2_cli_visual_pane_t1

0x8b1d,	// (0x0008892e) postcard_message_pane_t1_ParamLimits

0x8b1d,	// (0x0008892e) postcard_message_pane_t1

0x8b06,	// (0x00088917) postcard_address_pane_t1_ParamLimits

0x8b06,	// (0x00088917) postcard_address_pane_t1

0x8af7,	// (0x00088908) popup_call3_audio_in_window_ParamLimits

0x8af7,	// (0x00088908) popup_call3_audio_in_window

0x89db,	// (0x000887ec) bg_popup_call3_in_pane_ParamLimits

0x89db,	// (0x000887ec) bg_popup_call3_in_pane

0x8a3d,	// (0x0008884e) popup_call3_audio_in_window_g1_ParamLimits

0x8a3d,	// (0x0008884e) popup_call3_audio_in_window_g1

0x8a55,	// (0x00088866) popup_call3_audio_in_window_g2_ParamLimits

0x8a55,	// (0x00088866) popup_call3_audio_in_window_g2

0x8a6d,	// (0x0008887e) popup_call3_audio_in_window_g3_ParamLimits

0x8a6d,	// (0x0008887e) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0008f433) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0008f433) popup_call3_audio_in_window_g

0x8a95,	// (0x000888a6) popup_call3_audio_in_window_t1_ParamLimits

0x8a95,	// (0x000888a6) popup_call3_audio_in_window_t1

0x8abd,	// (0x000888ce) popup_call3_audio_in_window_t2_ParamLimits

0x8abd,	// (0x000888ce) popup_call3_audio_in_window_t2

0x8ae5,	// (0x000888f6) popup_call3_audio_in_window_t3_ParamLimits

0x8ae5,	// (0x000888f6) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0008f43c) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0008f43c) popup_call3_audio_in_window_t

0xebbc,	// (0x0008e9cd) bg_popup_call3_rect_pane

0x1007,	// (0x00080e18) bg_popup_call3_rect_pane_g1

0xe1bc,	// (0x0008dfcd) bg_popup_call3_rect_pane_g2

0x100f,	// (0x00080e20) bg_popup_call3_rect_pane_g3

0x1017,	// (0x00080e28) bg_popup_call3_rect_pane_g4

0x101f,	// (0x00080e30) bg_popup_call3_rect_pane_g5

0x1027,	// (0x00080e38) bg_popup_call3_rect_pane_g6

0x102f,	// (0x00080e40) bg_popup_call3_rect_pane_g7

0x7c86,	// (0x00087a97) mup_visualizer_osc_pane

0xec7b,	// (0x0008ea8c) mup_visualizer_spec_pane

0x89fb,	// (0x0008880c) call3_video_qcif_pane_ParamLimits

0x89fb,	// (0x0008880c) call3_video_qcif_pane

0x8a0d,	// (0x0008881e) call3_video_qcif_uncrop_pane_ParamLimits

0x8a0d,	// (0x0008881e) call3_video_qcif_uncrop_pane

0x8a1b,	// (0x0008882c) call3_video_subqcif_pane_ParamLimits

0x8a1b,	// (0x0008882c) call3_video_subqcif_pane

0x8a2d,	// (0x0008883e) call3_video_subqcif_uncrop_pane_ParamLimits

0x8a2d,	// (0x0008883e) call3_video_subqcif_uncrop_pane

0x8a85,	// (0x00088896) popup_call3_audio_in_window_g4_ParamLimits

0x8a85,	// (0x00088896) popup_call3_audio_in_window_g4

0x89a8,	// (0x000887b9) mup_spec_half_pane

0x89b1,	// (0x000887c2) mup_spec_half_pane_cp

0x129f,	// (0x000810b0) mup_osc_middle_pane

0x12a8,	// (0x000810b9) mup_visualizer_osc_pane_g1

0x8989,	// (0x0008879a) mup_spec_bar_pane_ParamLimits

0x8989,	// (0x0008879a) mup_spec_bar_pane

0x128c,	// (0x0008109d) mup_spec_bar_pane_g1

0x1296,	// (0x000810a7) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0008f427) mup_spec_bar_pane_g

0x5eda,	// (0x00085ceb) aid_cale_week_size_cell_pane_ParamLimits

0x5eed,	// (0x00085cfe) bg_cale_heading_pane_ParamLimits

0xe1f0,	// (0x0008e001) bg_cale_pane_cp01_ParamLimits

0x5f09,	// (0x00085d1a) cale_week_corner_pane_ParamLimits

0x5f1f,	// (0x00085d30) cale_week_day_heading_pane_ParamLimits

0x5f3b,	// (0x00085d4c) cale_week_scroll_pane_g1_ParamLimits

0x5f54,	// (0x00085d65) cale_week_scroll_pane_g2_ParamLimits

0x5f65,	// (0x00085d76) cale_week_scroll_pane_g3_ParamLimits

0x5f76,	// (0x00085d87) cale_week_scroll_pane_g4_ParamLimits

0x5f87,	// (0x00085d98) cale_week_scroll_pane_g5_ParamLimits

0x5f98,	// (0x00085da9) cale_week_scroll_pane_g6_ParamLimits

0x5fa9,	// (0x00085dba) cale_week_scroll_pane_g7_ParamLimits

0x5fbc,	// (0x00085dcd) cale_week_scroll_pane_g8_ParamLimits

0x5fcf,	// (0x00085de0) cale_week_scroll_pane_g9_ParamLimits

0x5fe0,	// (0x00085df1) cale_week_scroll_pane_g10_ParamLimits

0x5ff1,	// (0x00085e02) cale_week_scroll_pane_g11_ParamLimits

0x6002,	// (0x00085e13) cale_week_scroll_pane_g12_ParamLimits

0x6013,	// (0x00085e24) cale_week_scroll_pane_g13_ParamLimits

0x602c,	// (0x00085e3d) cale_week_scroll_pane_g14_ParamLimits

0x6045,	// (0x00085e56) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0008efcf) cale_week_scroll_pane_g_ParamLimits

0x605e,	// (0x00085e6f) cale_week_time_pane_ParamLimits

0x6071,	// (0x00085e82) grid_cale_week_pane_ParamLimits

0xe209,	// (0x0008e01a) listscroll_cale_week_pane_t1

0x608e,	// (0x00085e9f) scroll_pane_cp08_ParamLimits

0x6c44,	// (0x00086a55) cale_month_corner_pane_ParamLimits

0xe5a0,	// (0x0008e3b1) cale_month_pane_t1

0x6fae,	// (0x00086dbf) cale_month_week_pane_ParamLimits

0xe8d9,	// (0x0008e6ea) popup_call_status_window_g1_ParamLimits

0x7639,	// (0x0008744a) popup_call_status_window_g2_ParamLimits

0x7645,	// (0x00087456) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0008f177) popup_call_status_window_g_ParamLimits

0xe940,	// (0x0008e751) aid_call2_pane

0x7f1e,	// (0x00087d2f) msg_header_pane_g1

0x80df,	// (0x00087ef0) postcard_address2_pane_ParamLimits

0x80df,	// (0x00087ef0) postcard_address2_pane

0x80eb,	// (0x00087efc) postcard_message2_pane_ParamLimits

0x80eb,	// (0x00087efc) postcard_message2_pane

0x8921,	// (0x00088732) message2_row_pane_ParamLimits

0x8921,	// (0x00088732) message2_row_pane

0x893c,	// (0x0008874d) address2_row_pane_ParamLimits

0x893c,	// (0x0008874d) address2_row_pane

0x125a,	// (0x0008106b) postcard_message2_row_pane_g1

0x1262,	// (0x00081073) postcard_message2_row_pane_t1

0x125a,	// (0x0008106b) address2_row_pane_g1

0x1262,	// (0x00081073) address2_row_pane_t1

0x62c2,	// (0x000860d3) aid_size_cell_vorec

0xddad,	// (0x0008dbbe) main_rss_pane

0x894f,	// (0x00088760) rss_list_single_pane_ParamLimits

0x894f,	// (0x00088760) rss_list_single_pane

0x1270,	// (0x00081081) rss_list_single_pane_t1

0x127e,	// (0x0008108f) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0008f422) rss_list_single_pane_t

0xddad,	// (0x0008dbbe) main_camera2_pane

0xddad,	// (0x0008dbbe) main_video2_pane

0x8b81,	// (0x00088992) cams_zoom_pane_cp2_ParamLimits

0x8b81,	// (0x00088992) cams_zoom_pane_cp2

0x8b8d,	// (0x0008899e) image2_vga_pane_ParamLimits

0x8b8d,	// (0x0008899e) image2_vga_pane

0x8b9c,	// (0x000889ad) main_camera2_pane_g1_ParamLimits

0x8b9c,	// (0x000889ad) main_camera2_pane_g1

0x8ba8,	// (0x000889b9) main_camera2_pane_g2_ParamLimits

0x8ba8,	// (0x000889b9) main_camera2_pane_g2

0x8bb4,	// (0x000889c5) main_camera2_pane_g3_ParamLimits

0x8bb4,	// (0x000889c5) main_camera2_pane_g3

0x8bc0,	// (0x000889d1) main_camera2_pane_g4_ParamLimits

0x8bc0,	// (0x000889d1) main_camera2_pane_g4

0x8bcc,	// (0x000889dd) main_camera2_pane_g5_ParamLimits

0x8bcc,	// (0x000889dd) main_camera2_pane_g5

0x8bd8,	// (0x000889e9) main_camera2_pane_g6_ParamLimits

0x8bd8,	// (0x000889e9) main_camera2_pane_g6

0x8be4,	// (0x000889f5) main_camera2_pane_g7_ParamLimits

0x8be4,	// (0x000889f5) main_camera2_pane_g7

0x8bf0,	// (0x00088a01) main_camera2_pane_g8_ParamLimits

0x8bf0,	// (0x00088a01) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0008f443) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0008f443) main_camera2_pane_g

0x8c08,	// (0x00088a19) main_camera2_pane_t1_ParamLimits

0x8c08,	// (0x00088a19) main_camera2_pane_t1

0x8c1a,	// (0x00088a2b) main_camera2_pane_t2_ParamLimits

0x8c1a,	// (0x00088a2b) main_camera2_pane_t2

0x8c2c,	// (0x00088a3d) main_camera2_pane_t3_ParamLimits

0x8c2c,	// (0x00088a3d) main_camera2_pane_t3

0x8c3e,	// (0x00088a4f) main_camera2_pane_t4_ParamLimits

0x8c3e,	// (0x00088a4f) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0008f456) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0008f456) main_camera2_pane_t

0x8ca0,	// (0x00088ab1) cams_zoom_pane_cp4_ParamLimits

0x8ca0,	// (0x00088ab1) cams_zoom_pane_cp4

0x8cb0,	// (0x00088ac1) image2_cif_pane_ParamLimits

0x8cb0,	// (0x00088ac1) image2_cif_pane

0x8cc5,	// (0x00088ad6) image2_subqcif_pane_ParamLimits

0x8cc5,	// (0x00088ad6) image2_subqcif_pane

0x8cd4,	// (0x00088ae5) main_video2_pane_g1_ParamLimits

0x8cd4,	// (0x00088ae5) main_video2_pane_g1

0x8ce6,	// (0x00088af7) main_video2_pane_g2_ParamLimits

0x8ce6,	// (0x00088af7) main_video2_pane_g2

0x8cf6,	// (0x00088b07) main_video2_pane_g3_ParamLimits

0x8cf6,	// (0x00088b07) main_video2_pane_g3

0x8d06,	// (0x00088b17) main_video2_pane_g4_ParamLimits

0x8d06,	// (0x00088b17) main_video2_pane_g4

0x8d16,	// (0x00088b27) main_video2_pane_g5_ParamLimits

0x8d16,	// (0x00088b27) main_video2_pane_g5

0x8d26,	// (0x00088b37) main_video2_pane_g6_ParamLimits

0x8d26,	// (0x00088b37) main_video2_pane_g6

0x0005,

0xf654,	// (0x0008f465) main_video2_pane_g_ParamLimits

0xf654,	// (0x0008f465) main_video2_pane_g

0x8d38,	// (0x00088b49) main_video2_pane_t1_ParamLimits

0x8d38,	// (0x00088b49) main_video2_pane_t1

0x8d52,	// (0x00088b63) main_video2_pane_t2_ParamLimits

0x8d52,	// (0x00088b63) main_video2_pane_t2

0x8d78,	// (0x00088b89) main_video2_pane_t3_ParamLimits

0x8d78,	// (0x00088b89) main_video2_pane_t3

0x0002,

0xf661,	// (0x0008f472) main_video2_pane_t_ParamLimits

0xf661,	// (0x0008f472) main_video2_pane_t

0x8638,	// (0x00088449) call_muted_g2

0x0001,

0xf603,	// (0x0008f414) call_muted_g

0xddad,	// (0x0008dbbe) main_mup2_pane

0x135f,	// (0x00081170) main_mup2_pane_g1_ParamLimits

0x135f,	// (0x00081170) main_mup2_pane_g1

0x8d9e,	// (0x00088baf) main_mup2_pane_g2_ParamLimits

0x8d9e,	// (0x00088baf) main_mup2_pane_g2

0x9020,	// (0x00088e31) main_mup_pane_g13_cp1

0x9028,	// (0x00088e39) mup_volume_pane_cp1

0x8dbe,	// (0x00088bcf) main_mup2_pane_g4_ParamLimits

0x8dbe,	// (0x00088bcf) main_mup2_pane_g4

0x8dd3,	// (0x00088be4) main_mup2_pane_g5_ParamLimits

0x8dd3,	// (0x00088be4) main_mup2_pane_g5

0x8de8,	// (0x00088bf9) main_mup2_pane_g6_ParamLimits

0x8de8,	// (0x00088bf9) main_mup2_pane_g6

0x8dfd,	// (0x00088c0e) main_mup2_pane_g7_ParamLimits

0x8dfd,	// (0x00088c0e) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0008f479) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0008f479) main_mup2_pane_g

0x8e19,	// (0x00088c2a) main_mup2_pane_t1_ParamLimits

0x8e19,	// (0x00088c2a) main_mup2_pane_t1

0x8e30,	// (0x00088c41) main_mup2_pane_t2_ParamLimits

0x8e30,	// (0x00088c41) main_mup2_pane_t2

0x8e47,	// (0x00088c58) main_mup2_pane_t3_ParamLimits

0x8e47,	// (0x00088c58) main_mup2_pane_t3

0x8e5e,	// (0x00088c6f) main_mup2_pane_t4_ParamLimits

0x8e5e,	// (0x00088c6f) main_mup2_pane_t4

0x8e78,	// (0x00088c89) main_mup2_pane_t5_ParamLimits

0x8e78,	// (0x00088c89) main_mup2_pane_t5

0x8e92,	// (0x00088ca3) main_mup2_pane_t6_ParamLimits

0x8e92,	// (0x00088ca3) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0008f488) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0008f488) main_mup2_pane_t

0x8eca,	// (0x00088cdb) mup2_visualizer_pane_ParamLimits

0x8eca,	// (0x00088cdb) mup2_visualizer_pane

0x8f00,	// (0x00088d11) mup_progress_pane_cp_ParamLimits

0x8f00,	// (0x00088d11) mup_progress_pane_cp

0x900b,	// (0x00088e1c) mup_volume_pane_cp_ParamLimits

0x900b,	// (0x00088e1c) mup_volume_pane_cp

0x8f17,	// (0x00088d28) mup2_visualizer_pane_g1_ParamLimits

0x8f17,	// (0x00088d28) mup2_visualizer_pane_g1

0x1331,	// (0x00081142) mup2_visualizer_pane_g2_ParamLimits

0x1331,	// (0x00081142) mup2_visualizer_pane_g2

0x8f2c,	// (0x00088d3d) mup2_visualizer_pane_g3_ParamLimits

0x8f2c,	// (0x00088d3d) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0008f495) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0008f495) mup2_visualizer_pane_g

0xeea2,	// (0x0008ecb3) aid_size_cell_fmradio

0x874e,	// (0x0008855f) aid_height_parent_landcape

0xe408,	// (0x0008e219) wml_content_pane_cp

0xe410,	// (0x0008e221) wml_tabs_pane

0xe419,	// (0x0008e22a) popup_wml_miniature_window

0xe421,	// (0x0008e232) scroll_pane_cp021

0xe435,	// (0x0008e246) wml_content_pane_comp8

0xddad,	// (0x0008dbbe) bg_popup_sub_pane_cp05

0x134f,	// (0x00081160) popup_wml_miniature_window_g1

0x1357,	// (0x00081168) wml_miniature_view_pane

0x8f3a,	// (0x00088d4b) aid_size_wml_view

0x8f42,	// (0x00088d53) wml_miniature_view_pane_g1

0x8f4b,	// (0x00088d5c) wml_miniature_view_pane_g2

0x8f54,	// (0x00088d65) wml_miniature_view_pane_g3

0x8f5c,	// (0x00088d6d) wml_miniature_view_pane_g4

0x8f64,	// (0x00088d75) wml_miniature_view_pane_g5

0x8f6c,	// (0x00088d7d) wml_miniature_view_pane_g6

0x8f74,	// (0x00088d85) wml_miniature_view_pane_g7

0x8f7c,	// (0x00088d8d) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0008f49c) wml_miniature_view_pane_g

0x135f,	// (0x00081170) background_graphic_ParamLimits

0x135f,	// (0x00081170) background_graphic

0x136b,	// (0x0008117c) wml_tabs_2_pane

0x1374,	// (0x00081185) wml_tabs_3_pane_ParamLimits

0x1374,	// (0x00081185) wml_tabs_3_pane

0x1386,	// (0x00081197) wml_tabs_4_pane_ParamLimits

0x1386,	// (0x00081197) wml_tabs_4_pane

0x139c,	// (0x000811ad) wml_tabs_5_pane_ParamLimits

0x139c,	// (0x000811ad) wml_tabs_5_pane

0x13b6,	// (0x000811c7) wml_tabs_pane_g2_ParamLimits

0x13b6,	// (0x000811c7) wml_tabs_pane_g2

0x13ca,	// (0x000811db) wml_tabs_pane_g3_ParamLimits

0x13ca,	// (0x000811db) wml_tabs_pane_g3

0x8f84,	// (0x00088d95) wml_tabs_2_active_pane_ParamLimits

0x8f84,	// (0x00088d95) wml_tabs_2_active_pane

0x8f94,	// (0x00088da5) wml_tabs_2_passive_pane_ParamLimits

0x8f94,	// (0x00088da5) wml_tabs_2_passive_pane

0x8fa4,	// (0x00088db5) wml_tabs_3_active_pane_cp_ParamLimits

0x8fa4,	// (0x00088db5) wml_tabs_3_active_pane_cp

0x8fb5,	// (0x00088dc6) wml_tabs_3_passive_pane_ParamLimits

0x8fb5,	// (0x00088dc6) wml_tabs_3_passive_pane

0x8fc6,	// (0x00088dd7) wml_tabs_3_passive_pane_cp_ParamLimits

0x8fc6,	// (0x00088dd7) wml_tabs_3_passive_pane_cp

0x8fd7,	// (0x00088de8) tabs_4_active_pane

0x8fdf,	// (0x00088df0) tabs_4_passive_pane

0x8fe7,	// (0x00088df8) tabs_4_passive_pane_cp

0x8fef,	// (0x00088e00) tabs_4_passive_pane_cp2

0x8513,	// (0x00088324) aid_height_text

0x7c53,	// (0x00087a64) mup_volume_cont_pane_ParamLimits

0x7c53,	// (0x00087a64) mup_volume_cont_pane

0x5a10,	// (0x00085821) aid_size_cell_pinb

0x5a1a,	// (0x0008582b) aid_size_list_pinb

0x8ee9,	// (0x00088cfa) mup2_volume_cont_pane_ParamLimits

0x8ee9,	// (0x00088cfa) mup2_volume_cont_pane

0x8ff7,	// (0x00088e08) mup2_volume_cont_pane_g1_ParamLimits

0x8ff7,	// (0x00088e08) mup2_volume_cont_pane_g1

0x5641,	// (0x00085452) aid_size_cell_touch_ParamLimits

0x5641,	// (0x00085452) aid_size_cell_touch

0x58f6,	// (0x00085707) touch_pane_ParamLimits

0x58f6,	// (0x00085707) touch_pane

0x58ec,	// (0x000856fd) main_rss2_pane

0x13e7,	// (0x000811f8) listscroll_rss2_pane

0x13f0,	// (0x00081201) rss2_navigation_pane

0x13f8,	// (0x00081209) list_rss2_pane

0xea73,	// (0x0008e884) scroll_pane_cp22

0x1400,	// (0x00081211) rss2_navigation_pane_g1

0x1409,	// (0x0008121a) rss2_navigation_pane_g2

0x1411,	// (0x00081222) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0008f4ad) rss2_navigation_pane_g

0x1419,	// (0x0008122a) rss2_navigation_pane_t1

0x9030,	// (0x00088e41) rss2_list_single_pane_ParamLimits

0x9030,	// (0x00088e41) rss2_list_single_pane

0x1427,	// (0x00081238) rss2_list_single_pane_t2

0x1435,	// (0x00081246) rss2_list_single_pane_t3_ParamLimits

0x1435,	// (0x00081246) rss2_list_single_pane_t3

0x1452,	// (0x00081263) rss2_list_single_pane_t4

0x745a,	// (0x0008726b) smil_status_pane_g1

0x8765,	// (0x00088576) main_image2_pane_ParamLimits

0x8765,	// (0x00088576) main_image2_pane

0x8bfc,	// (0x00088a0d) main_camera2_pane_g9_ParamLimits

0x8bfc,	// (0x00088a0d) main_camera2_pane_g9

0x8c50,	// (0x00088a61) main_camera2_pane_t5_ParamLimits

0x8c50,	// (0x00088a61) main_camera2_pane_t5

0x8c62,	// (0x00088a73) main_camera2_pane_t6_ParamLimits

0x8c62,	// (0x00088a73) main_camera2_pane_t6

0x9061,	// (0x00088e72) main_image2_pane_g1_ParamLimits

0x9061,	// (0x00088e72) main_image2_pane_g1

0x82b3,	// (0x000880c4) smil2_video_pane_ParamLimits

0x82b3,	// (0x000880c4) smil2_video_pane

0x5675,	// (0x00085486) aid_zoom_text_primary_cp

0x5891,	// (0x000856a2) popup_preview_fixed_window

0xe371,	// (0x0008e182) im_reading_pane_g1

0x8b46,	// (0x00088957) cams2_bc_adjust_pane_cp_ParamLimits

0x8b46,	// (0x00088957) cams2_bc_adjust_pane_cp

0x8c92,	// (0x00088aa3) cams2_bc_adjust_pane_ParamLimits

0x8c92,	// (0x00088aa3) cams2_bc_adjust_pane

0x281b,	// (0x0008262c) cams2_bc_adjust_pane_g1

0x906d,	// (0x00088e7e) cams2_slider_pane

0x9076,	// (0x00088e87) cams2_slider_pane_g1

0x907f,	// (0x00088e90) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0008f4b4) cams2_slider_pane_g

0x5b20,	// (0x00085931) calc_display_pane_ParamLimits

0x5b3e,	// (0x0008594f) calc_paper_pane_ParamLimits

0x5b5a,	// (0x0008596b) grid_calc_pane_ParamLimits

0x76a7,	// (0x000874b8) popup_clock_digital_window_t1_ParamLimits

0xee3f,	// (0x0008ec50) main_image_pane_t1

0x5b06,	// (0x00085917) aid_size_cell_calc_ParamLimits

0x5b06,	// (0x00085917) aid_size_cell_calc

0x8796,	// (0x000885a7) popup_blid_sat_info2_window_ParamLimits

0x8796,	// (0x000885a7) popup_blid_sat_info2_window

0x1468,	// (0x00081279) aid_size_cell_blid

0x1470,	// (0x00081281) bg_popup_window_pane_cp07

0x1493,	// (0x000812a4) grid_popup_blid_pane

0x149d,	// (0x000812ae) heading_pane_cp05_ParamLimits

0x149d,	// (0x000812ae) heading_pane_cp05

0x1567,	// (0x00081378) cell_popup_blid_pane_ParamLimits

0x1567,	// (0x00081378) cell_popup_blid_pane

0x158b,	// (0x0008139c) cell_popup_blid_pane_g1

0x1593,	// (0x000813a4) cell_popup_blid_pane_t1

0x8eaf,	// (0x00088cc0) mup2_indicator_pane_ParamLimits

0x8eaf,	// (0x00088cc0) mup2_indicator_pane

0xebbc,	// (0x0008e9cd) mup2_visualizer_osc_pane

0x133d,	// (0x0008114e) mup2_visualizer_spec_pane_ParamLimits

0x133d,	// (0x0008114e) mup2_visualizer_spec_pane

0x9099,	// (0x00088eaa) mup2_spec_half_pane

0x90a2,	// (0x00088eb3) mup2_spec_half_pane_cp

0x90ac,	// (0x00088ebd) mup2_spec_bar_pane_ParamLimits

0x90ac,	// (0x00088ebd) mup2_spec_bar_pane

0x128c,	// (0x0008109d) mup2_spec_bar_pane_g1

0x1296,	// (0x000810a7) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0008f427) mup2_spec_bar_pane_g

0x90cb,	// (0x00088edc) mup2_osc_middle_pane

0x12a8,	// (0x000810b9) mup2_visualizer_osc_pane_g1

0xd9ba,	// (0x0008d7cb) popup_number_entry_window_t1_ParamLimits

0xd9cd,	// (0x0008d7de) popup_number_entry_window_t2_ParamLimits

0xd9df,	// (0x0008d7f0) popup_number_entry_window_t3_ParamLimits

0x594d,	// (0x0008575e) popup_number_entry_window_t5_ParamLimits

0x594d,	// (0x0008575e) popup_number_entry_window_t5

0xf0d8,	// (0x0008eee9) popup_number_entry_window_t_ParamLimits

0xd9f1,	// (0x0008d802) text_title_cp2_ParamLimits

0x7fb3,	// (0x00087dc4) aid_hotspot_pointer_text2_pane

0x8041,	// (0x00087e52) main_viewer_pane_g9_ParamLimits

0x8041,	// (0x00087e52) main_viewer_pane_g9

0xe5a0,	// (0x0008e3b1) cale_month_pane_t1_ParamLimits

0xe5dd,	// (0x0008e3ee) bg_cale_pane_ParamLimits

0xe5f5,	// (0x0008e406) list_cale_pane_ParamLimits

0xe209,	// (0x0008e01a) listscroll_cale_day_pane_t1

0xe606,	// (0x0008e417) scroll_pane_cp09_ParamLimits

0x7c8e,	// (0x00087a9f) main_mup_eq_pane_t1_ParamLimits

0x7c8e,	// (0x00087a9f) main_mup_eq_pane_t1

0x7ca8,	// (0x00087ab9) main_mup_eq_pane_t2_ParamLimits

0x7ca8,	// (0x00087ab9) main_mup_eq_pane_t2

0x7cc2,	// (0x00087ad3) main_mup_eq_pane_t3_ParamLimits

0x7cc2,	// (0x00087ad3) main_mup_eq_pane_t3

0x7cda,	// (0x00087aeb) main_mup_eq_pane_t4_ParamLimits

0x7cda,	// (0x00087aeb) main_mup_eq_pane_t4

0x7cf2,	// (0x00087b03) main_mup_eq_pane_t5_ParamLimits

0x7cf2,	// (0x00087b03) main_mup_eq_pane_t5

0x7d0a,	// (0x00087b1b) main_mup_eq_pane_t6_ParamLimits

0x7d0a,	// (0x00087b1b) main_mup_eq_pane_t6

0x7d1e,	// (0x00087b2f) main_mup_eq_pane_t7_ParamLimits

0x7d1e,	// (0x00087b2f) main_mup_eq_pane_t7

0x7d32,	// (0x00087b43) main_mup_eq_pane_t8_ParamLimits

0x7d32,	// (0x00087b43) main_mup_eq_pane_t8

0x7d48,	// (0x00087b59) main_mup_eq_pane_t9_ParamLimits

0x7d48,	// (0x00087b59) main_mup_eq_pane_t9

0x7d60,	// (0x00087b71) main_mup_eq_pane_t10_ParamLimits

0x7d60,	// (0x00087b71) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0008f276) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0008f276) main_mup_eq_pane_t

0x7e1d,	// (0x00087c2e) mup_equalizer_pane_cp5_ParamLimits

0x7e33,	// (0x00087c44) mup_equalizer_pane_cp6_ParamLimits

0x7e4b,	// (0x00087c5c) mup_equalizer_pane_cp7_ParamLimits

0x58ec,	// (0x000856fd) main_gallery_pane

0x12b1,	// (0x000810c2) smil2_volume_pane

0x12cc,	// (0x000810dd) smil_status_volume_pane_g1_ParamLimits

0x12b9,	// (0x000810ca) smil_status_volume_pane_g2_ParamLimits

0x89b9,	// (0x000887ca) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0008f42c) smil_status_volume_pane_g_ParamLimits

0x1470,	// (0x00081281) bg_popup_window_pane_cp07_ParamLimits

0x147e,	// (0x0008128f) blid_firmament_pane

0x90d4,	// (0x00088ee5) aid_size_cell_gallery_ParamLimits

0x90d4,	// (0x00088ee5) aid_size_cell_gallery

0x90e2,	// (0x00088ef3) grid_gallery_pane_ParamLimits

0x90e2,	// (0x00088ef3) grid_gallery_pane

0x90f2,	// (0x00088f03) cell_gallery_pane_ParamLimits

0x90f2,	// (0x00088f03) cell_gallery_pane

0x15a1,	// (0x000813b2) bg_cell_gallery_focus_pane_ParamLimits

0x15a1,	// (0x000813b2) bg_cell_gallery_focus_pane

0x15b3,	// (0x000813c4) cell_gallery_pane_g1_ParamLimits

0x15b3,	// (0x000813c4) cell_gallery_pane_g1

0x9140,	// (0x00088f51) cell_gallery_pane_g2_ParamLimits

0x9140,	// (0x00088f51) cell_gallery_pane_g2

0x914d,	// (0x00088f5e) cell_gallery_pane_g3_ParamLimits

0x914d,	// (0x00088f5e) cell_gallery_pane_g3

0x15bf,	// (0x000813d0) cell_gallery_pane_g4_ParamLimits

0x15bf,	// (0x000813d0) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0008f4da) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0008f4da) cell_gallery_pane_g

0x15cb,	// (0x000813dc) bg_cell_gallery_focus_pane_g1

0x15d3,	// (0x000813e4) bg_cell_gallery_focus_pane_g2

0x15db,	// (0x000813ec) bg_cell_gallery_focus_pane_g3

0x15e3,	// (0x000813f4) bg_cell_gallery_focus_pane_g4

0x15eb,	// (0x000813fc) bg_cell_gallery_focus_pane_g5

0x15f3,	// (0x00081404) bg_cell_gallery_focus_pane_g6

0x15fb,	// (0x0008140c) bg_cell_gallery_focus_pane_g7

0x1603,	// (0x00081414) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0008f4e3) bg_cell_gallery_focus_pane_g

0x160b,	// (0x0008141c) aid_firma_cardinal

0x161f,	// (0x00081430) blid_firmament_pane_t1

0x1636,	// (0x00081447) blid_firmament_pane_t2

0x164d,	// (0x0008145e) blid_firmament_pane_t3

0x1664,	// (0x00081475) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0008f4f4) blid_firmament_pane_t

0x167b,	// (0x0008148c) blid_sat_info_pane

0x168b,	// (0x0008149c) blid_sat_info_pane_g1

0x168b,	// (0x0008149c) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x0008f4fd) blid_sat_info_pane_g

0x1695,	// (0x000814a6) blid_sat_info_pane_t1

0x16a3,	// (0x000814b4) smil2_volume_content_pane

0x16ac,	// (0x000814bd) smil2_volume_pane_g1

0x16b4,	// (0x000814c5) smil2_volume_content_pane_g1

0x16bd,	// (0x000814ce) smil2_volume_content_pane_g2

0x16c6,	// (0x000814d7) smil2_volume_content_pane_g3

0x16cf,	// (0x000814e0) smil2_volume_content_pane_g4

0x16d8,	// (0x000814e9) smil2_volume_content_pane_g5

0x16e1,	// (0x000814f2) smil2_volume_content_pane_g6

0x16ea,	// (0x000814fb) smil2_volume_content_pane_g7

0x16f3,	// (0x00081504) smil2_volume_content_pane_g8

0x16fc,	// (0x0008150d) smil2_volume_content_pane_g9

0x1705,	// (0x00081516) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0008f502) smil2_volume_content_pane_g

0x60f4,	// (0x00085f05) cale_week_day_heading_pane_t1_ParamLimits

0x610d,	// (0x00085f1e) cale_week_day_heading_pane_t2_ParamLimits

0x6126,	// (0x00085f37) cale_week_day_heading_pane_t3_ParamLimits

0x613f,	// (0x00085f50) cale_week_day_heading_pane_t4_ParamLimits

0x6158,	// (0x00085f69) cale_week_day_heading_pane_t5_ParamLimits

0x6171,	// (0x00085f82) cale_week_day_heading_pane_t6_ParamLimits

0x618a,	// (0x00085f9b) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0008efee) cale_week_day_heading_pane_t_ParamLimits

0xe21b,	// (0x0008e02c) bg_cale_side_pane_ParamLimits

0x61a3,	// (0x00085fb4) cale_week_time_pane_t1_ParamLimits

0x61bb,	// (0x00085fcc) cale_week_time_pane_t2_ParamLimits

0x61d3,	// (0x00085fe4) cale_week_time_pane_t3_ParamLimits

0x61eb,	// (0x00085ffc) cale_week_time_pane_t4_ParamLimits

0x6203,	// (0x00086014) cale_week_time_pane_t5_ParamLimits

0x621b,	// (0x0008602c) cale_week_time_pane_t6_ParamLimits

0x6233,	// (0x00086044) cale_week_time_pane_t7_ParamLimits

0x6253,	// (0x00086064) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0008effd) cale_week_time_pane_t_ParamLimits

0x6273,	// (0x00086084) cell_cale_week_pane_g2_ParamLimits

0xe21b,	// (0x0008e02c) bg_cale_side_pane_cp01_ParamLimits

0x72cb,	// (0x000870dc) cale_month_week_pane_t1_ParamLimits

0x72e2,	// (0x000870f3) cale_month_week_pane_t2_ParamLimits

0x72f9,	// (0x0008710a) cale_month_week_pane_t3_ParamLimits

0x7310,	// (0x00087121) cale_month_week_pane_t4_ParamLimits

0x7327,	// (0x00087138) cale_month_week_pane_t5_ParamLimits

0x7342,	// (0x00087153) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0008f0d6) cale_month_week_pane_t_ParamLimits

0x7427,	// (0x00087238) cell_cale_month_pane_g1_ParamLimits

0x58ec,	// (0x000856fd) main_cale_event_viewer_pane

0xf0ce,	// (0x0008eedf) listscroll_cale_event_viewer_pane

0x170e,	// (0x0008151f) list_cale_ev_pane

0x1716,	// (0x00081527) scroll_pane_cp023

0x1722,	// (0x00081533) field_cale_ev_pane_ParamLimits

0x1722,	// (0x00081533) field_cale_ev_pane

0x1740,	// (0x00081551) field_cale_ev_content_pane_ParamLimits

0x1740,	// (0x00081551) field_cale_ev_content_pane

0x174c,	// (0x0008155d) field_cale_ev_pane_g1_ParamLimits

0x174c,	// (0x0008155d) field_cale_ev_pane_g1

0x1758,	// (0x00081569) field_cale_ev_pane_g2_ParamLimits

0x1758,	// (0x00081569) field_cale_ev_pane_g2

0x1770,	// (0x00081581) field_cale_ev_pane_g3_ParamLimits

0x1770,	// (0x00081581) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0008f517) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0008f517) field_cale_ev_pane_g

0x1788,	// (0x00081599) field_cale_ev_pane_t1_ParamLimits

0x1788,	// (0x00081599) field_cale_ev_pane_t1

0x179f,	// (0x000815b0) field_cale_ev_content_pane_t1_ParamLimits

0x179f,	// (0x000815b0) field_cale_ev_content_pane_t1

0xed25,	// (0x0008eb36) bg_button_pane_cp01

0xe0db,	// (0x0008deec) listscroll_cale_week_pane_ParamLimits

0x5ed0,	// (0x00085ce1) popup_toolbar_window_cp01

0xe209,	// (0x0008e01a) listscroll_cale_week_pane_t1_ParamLimits

0xe0db,	// (0x0008deec) listscroll_cale_day_pane_ParamLimits

0x5ed0,	// (0x00085ce1) popup_toolbar_window_cp02

0xe209,	// (0x0008e01a) listscroll_cale_day_pane_t1_ParamLimits

0xe0db,	// (0x0008deec) main_cale_month_pane_ParamLimits

0x889d,	// (0x000886ae) popup_toolbar_window_cp03_ParamLimits

0x889d,	// (0x000886ae) popup_toolbar_window_cp03

0x81c9,	// (0x00087fda) main_image_pane_g2_ParamLimits

0x81c9,	// (0x00087fda) main_image_pane_g2

0x81d5,	// (0x00087fe6) main_image_pane_g3_ParamLimits

0x81d5,	// (0x00087fe6) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0008f308) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0008f308) main_image_pane_g

0xee3f,	// (0x0008ec50) main_image_pane_t1_ParamLimits

0x81e1,	// (0x00087ff2) main_image_pane_t2_ParamLimits

0x81e1,	// (0x00087ff2) main_image_pane_t2

0x81f3,	// (0x00088004) main_image_pane_t3_ParamLimits

0x81f3,	// (0x00088004) main_image_pane_t3

0x8205,	// (0x00088016) main_image_pane_t4_ParamLimits

0x8205,	// (0x00088016) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0008f30f) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0008f30f) main_image_pane_t

0x8217,	// (0x00088028) popup_image_details_window_cp01

0x8221,	// (0x00088032) popup_toobar_trans_pane_cp01_ParamLimits

0x8221,	// (0x00088032) popup_toobar_trans_pane_cp01

0x87ed,	// (0x000885fe) popup_image_details_window_ParamLimits

0x87ed,	// (0x000885fe) popup_image_details_window

0x87fb,	// (0x0008860c) popup_image_focus_window

0x8b38,	// (0x00088949) camera2_autofocus_pane_ParamLimits

0x8b38,	// (0x00088949) camera2_autofocus_pane

0xf0ce,	// (0x0008eedf) bg_popup_sub_pane_cp06

0x17bd,	// (0x000815ce) popup_image_focus_window_g1

0x17c5,	// (0x000815d6) popup_image_focus_window_g2

0x17cd,	// (0x000815de) popup_image_focus_window_g3

0x17d5,	// (0x000815e6) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0008f51e) popup_image_focus_window_g

0x17dd,	// (0x000815ee) popup_image_focus_window_t1

0x17eb,	// (0x000815fc) popup_image_focus_window_t2

0x17fb,	// (0x0008160c) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0008f527) popup_image_focus_window_t

0x1809,	// (0x0008161a) camera2_autofocus_pane_g1

0x0011,	// (0x0007fe22) bg_tb_trans_pane_cp01

0x1817,	// (0x00081628) popup_image_details_window_g1

0x182a,	// (0x0008163b) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0008f539) popup_image_details_window_g

0x1853,	// (0x00081664) popup_image_details_window_t1

0x1865,	// (0x00081676) popup_image_details_window_t2

0x187e,	// (0x0008168f) popup_image_details_window_t3

0x1892,	// (0x000816a3) popup_image_details_window_t4

0x18ad,	// (0x000816be) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0008f540) popup_image_details_window_t

0xe0c7,	// (0x0008ded8) bg_calc_paper_pane_ParamLimits

0x58ec,	// (0x000856fd) grid_highlight_pane_cp013

0x5c57,	// (0x00085a68) list_calc_pane_ParamLimits

0x5c69,	// (0x00085a7a) scroll_pane_cp024

0xe0db,	// (0x0008deec) bg_calc_display_pane_ParamLimits

0x5c71,	// (0x00085a82) calc_display_pane_t1_ParamLimits

0x5c86,	// (0x00085a97) calc_display_pane_t2_ParamLimits

0x5c9b,	// (0x00085aac) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0008ef70) calc_display_pane_t_ParamLimits

0x5d77,	// (0x00085b88) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0008ef8d) cell_calc_pane_g

0x5d80,	// (0x00085b91) cell_calc_pane_t1

0xe13a,	// (0x0008df4b) grid_highlight_pane_cp02_ParamLimits

0xe150,	// (0x0008df61) toolbar_button_pane_cp01_ParamLimits

0xe150,	// (0x0008df61) toolbar_button_pane_cp01

0xee84,	// (0x0008ec95) temp_image_control_pane_ParamLimits

0xee84,	// (0x0008ec95) temp_image_control_pane

0x8765,	// (0x00088576) main_mp3_pane

0x18c7,	// (0x000816d8) temp_image_control_pane_g1_ParamLimits

0x18c7,	// (0x000816d8) temp_image_control_pane_g1

0x18d5,	// (0x000816e6) temp_image_control_pane_g2_ParamLimits

0x18d5,	// (0x000816e6) temp_image_control_pane_g2

0x18e7,	// (0x000816f8) temp_image_control_pane_g3_ParamLimits

0x18e7,	// (0x000816f8) temp_image_control_pane_g3

0x918a,	// (0x00088f9b) temp_image_control_pane_g4_ParamLimits

0x918a,	// (0x00088f9b) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0008f54b) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0008f54b) temp_image_control_pane_g

0x18c7,	// (0x000816d8) main_mp3_pane_g1

0x919b,	// (0x00088fac) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0008f554) main_mp3_pane_g

0x192a,	// (0x0008173b) main_mp3_pane_t1

0xe280,	// (0x0008e091) main_camera_pane_g8_ParamLimits

0xe280,	// (0x0008e091) main_camera_pane_g8

0x6509,	// (0x0008631a) main_video_pane_g7_ParamLimits

0x6509,	// (0x0008631a) main_video_pane_g7

0x8c80,	// (0x00088a91) main_camera2_pane_t7_ParamLimits

0x8c80,	// (0x00088a91) main_camera2_pane_t7

0xe3c8,	// (0x0008e1d9) scroll_pane_cp025_ParamLimits

0xe3c8,	// (0x0008e1d9) scroll_pane_cp025

0xe3dc,	// (0x0008e1ed) scroll_pane_cp026_ParamLimits

0xe3dc,	// (0x0008e1ed) scroll_pane_cp026

0xe3eb,	// (0x0008e1fc) wml_content_pane_ParamLimits

0x58ec,	// (0x000856fd) main_touch_calib_pane

0x923f,	// (0x00089050) main_touch_calib_pane_g1

0x924b,	// (0x0008905c) main_touch_calib_pane_g2

0x9257,	// (0x00089068) main_touch_calib_pane_g3

0x9263,	// (0x00089074) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0008f572) main_touch_calib_pane_g

0x926f,	// (0x00089080) main_touch_calib_pane_t1

0x9286,	// (0x00089097) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0008f57b) main_touch_calib_pane_t

0xeafd,	// (0x0008e90e) mup_progress_pane_cp02

0xeb1c,	// (0x0008e92d) navi_pane_g1

0xeb7e,	// (0x0008e98f) navi_pane_mp_t3

0x8765,	// (0x00088576) main_mp3_pane_ParamLimits

0x88db,	// (0x000886ec) navi_pane_ParamLimits

0x18c7,	// (0x000816d8) main_mp3_pane_g1_ParamLimits

0x919b,	// (0x00088fac) main_mp3_pane_g2_ParamLimits

0x91a7,	// (0x00088fb8) main_mp3_pane_g3_ParamLimits

0x91a7,	// (0x00088fb8) main_mp3_pane_g3

0x91b3,	// (0x00088fc4) main_mp3_pane_g4_ParamLimits

0x91b3,	// (0x00088fc4) main_mp3_pane_g4

0x18f7,	// (0x00081708) main_mp3_pane_g5_ParamLimits

0x18f7,	// (0x00081708) main_mp3_pane_g5

0x1905,	// (0x00081716) main_mp3_pane_g6_ParamLimits

0x1905,	// (0x00081716) main_mp3_pane_g6

0x1912,	// (0x00081723) main_mp3_pane_g7_ParamLimits

0x1912,	// (0x00081723) main_mp3_pane_g7

0x191e,	// (0x0008172f) main_mp3_pane_g8_ParamLimits

0x191e,	// (0x0008172f) main_mp3_pane_g8

0xf743,	// (0x0008f554) main_mp3_pane_g_ParamLimits

0x91bf,	// (0x00088fd0) main_mp3_pane_t2

0x91cf,	// (0x00088fe0) main_mp3_pane_t3

0x1938,	// (0x00081749) main_mp3_pane_t4

0x1946,	// (0x00081757) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0008f565) main_mp3_pane_t

0x1954,	// (0x00081765) mup_progress_pane_cp01

0x5675,	// (0x00085486) aid_zoom_text_secondary2

0x170e,	// (0x0008151f) list_cale_ev2_pane

0x1716,	// (0x00081527) scroll_pane_cp023_ParamLimits

0x92db,	// (0x000890ec) field_cale_ev2_pane_ParamLimits

0x92db,	// (0x000890ec) field_cale_ev2_pane

0x9304,	// (0x00089115) field_cale_ev2_pane_g1_ParamLimits

0x9304,	// (0x00089115) field_cale_ev2_pane_g1

0x9310,	// (0x00089121) field_cale_ev2_pane_g2_ParamLimits

0x9310,	// (0x00089121) field_cale_ev2_pane_g2

0x9328,	// (0x00089139) field_cale_ev2_pane_g3_ParamLimits

0x9328,	// (0x00089139) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0008f586) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0008f586) field_cale_ev2_pane_g

0x195c,	// (0x0008176d) field_cale_ev2_pane_t1_ParamLimits

0x195c,	// (0x0008176d) field_cale_ev2_pane_t1

0x1973,	// (0x00081784) field_cale_ev2_pane_t2_ParamLimits

0x1973,	// (0x00081784) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0008f58f) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0008f58f) field_cale_ev2_pane_t

0x80a9,	// (0x00087eba) main_postcard_pane_g5_ParamLimits

0x80a9,	// (0x00087eba) main_postcard_pane_g5

0x80b7,	// (0x00087ec8) main_postcard_pane_g6_ParamLimits

0x80b7,	// (0x00087ec8) main_postcard_pane_g6

0x6353,	// (0x00086164) camera2_autofocus_pane_cp_ParamLimits

0x6353,	// (0x00086164) camera2_autofocus_pane_cp

0x8765,	// (0x00088576) main_mup3_pane

0x9360,	// (0x00089171) main_mup3_pane_g1_ParamLimits

0x9360,	// (0x00089171) main_mup3_pane_g1

0x9381,	// (0x00089192) main_mup3_pane_g2_ParamLimits

0x9381,	// (0x00089192) main_mup3_pane_g2

0x93f9,	// (0x0008920a) main_mup3_pane_g3_ParamLimits

0x93f9,	// (0x0008920a) main_mup3_pane_g3

0x943c,	// (0x0008924d) main_mup3_pane_g4_ParamLimits

0x943c,	// (0x0008924d) main_mup3_pane_g4

0x947f,	// (0x00089290) main_mup3_pane_g5_ParamLimits

0x947f,	// (0x00089290) main_mup3_pane_g5

0x94c2,	// (0x000892d3) main_mup3_pane_g6_ParamLimits

0x94c2,	// (0x000892d3) main_mup3_pane_g6

0x1988,	// (0x00081799) main_mup3_pane_g7_ParamLimits

0x1988,	// (0x00081799) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0008f59f) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0008f59f) main_mup3_pane_g

0x9538,	// (0x00089349) main_mup3_pane_t1_ParamLimits

0x9538,	// (0x00089349) main_mup3_pane_t1

0x95a7,	// (0x000893b8) main_mup3_pane_t2_ParamLimits

0x95a7,	// (0x000893b8) main_mup3_pane_t2

0x9670,	// (0x00089481) main_mup3_pane_t4_ParamLimits

0x9670,	// (0x00089481) main_mup3_pane_t4

0x96be,	// (0x000894cf) main_mup3_pane_t5_ParamLimits

0x96be,	// (0x000894cf) main_mup3_pane_t5

0x976e,	// (0x0008957f) main_mup3_pane_t6_ParamLimits

0x976e,	// (0x0008957f) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0008f5b0) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0008f5b0) main_mup3_pane_t

0x981a,	// (0x0008962b) mup3_progress_pane_ParamLimits

0x981a,	// (0x0008962b) mup3_progress_pane

0x9898,	// (0x000896a9) popup_mup3_control_window_ParamLimits

0x9898,	// (0x000896a9) popup_mup3_control_window

0x1996,	// (0x000817a7) popup_mup3_text_window

0x98b1,	// (0x000896c2) mup3_progress_pane_t1

0x98d0,	// (0x000896e1) mup3_progress_pane_t2

0x199e,	// (0x000817af) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0008f5bd) mup3_progress_pane_t

0x19bb,	// (0x000817cc) mup_progress_pane_cp03

0xf0ce,	// (0x0008eedf) bg_tb_trans_pane_cp04

0x98ef,	// (0x00089700) mup3_volume_pane

0x98f7,	// (0x00089708) popup_mup3_control_window_g1

0x9900,	// (0x00089711) mup3_volume_pane_g1

0x9909,	// (0x0008971a) mup3_volume_pane_g2

0x9912,	// (0x00089723) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0008f5c4) mup3_volume_pane_g

0xf0ce,	// (0x0008eedf) bg_tb_trans_pane_cp03

0x19cb,	// (0x000817dc) popup_mup3_text_window_g1

0x19d3,	// (0x000817e4) popup_mup3_text_window_t1

0xe123,	// (0x0008df34) list_calc_item_pane_g1_ParamLimits

0x13de,	// (0x000811ef) mup_volume_pane_cp_g1

0x929d,	// (0x000890ae) main_touch_calib_pane_t3

0x92b1,	// (0x000890c2) main_touch_calib_pane_t4

0x92c5,	// (0x000890d6) main_touch_calib_pane_t5

0x562d,	// (0x0008543e) aid_cell_size_toolbar2

0x5635,	// (0x00085446) aid_popup3_width_pane

0x554a,	// (0x0008535b) aid_zoom_text_msg_primary

0x632a,	// (0x0008613b) vorec_t7

0xe0e7,	// (0x0008def8) bg_calc_paper_pane_g1_ParamLimits

0xe0f3,	// (0x0008df04) bg_calc_paper_pane_g2_ParamLimits

0xe0ff,	// (0x0008df10) bg_calc_paper_pane_g3_ParamLimits

0xe10b,	// (0x0008df1c) bg_calc_paper_pane_g4_ParamLimits

0xe117,	// (0x0008df28) bg_calc_paper_pane_g5_ParamLimits

0x5cda,	// (0x00085aeb) bg_calc_paper_pane_g6_ParamLimits

0x5ceb,	// (0x00085afc) bg_calc_paper_pane_g7_ParamLimits

0x5cfc,	// (0x00085b0d) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0008ef77) bg_calc_paper_pane_g_ParamLimits

0x5d0d,	// (0x00085b1e) calc_bg_paper_pane_g9_ParamLimits

0x643a,	// (0x0008624b) image_qvga_pane_ParamLimits

0x643a,	// (0x0008624b) image_qvga_pane

0xe008,	// (0x0008de19) bg_popup_sub_pane_cp04_ParamLimits

0xedbb,	// (0x0008ebcc) popup_mup_playback_window_g1_ParamLimits

0xedc7,	// (0x0008ebd8) popup_mup_playback_window_t1_ParamLimits

0xeddc,	// (0x0008ebed) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0008f303) popup_mup_playback_window_t_ParamLimits

0x8daf,	// (0x00088bc0) main_mup2_pane_g3_ParamLimits

0x8daf,	// (0x00088bc0) main_mup2_pane_g3

0x6749,	// (0x0008655a) popup_toolbar_window_cp04

0x0408,	// (0x00080219) popup_call2_audio_second_window_g3_ParamLimits

0x0408,	// (0x00080219) popup_call2_audio_second_window_g3

0x0812,	// (0x00080623) popup_call2_audio_first_window_g4_ParamLimits

0x0812,	// (0x00080623) popup_call2_audio_first_window_g4

0x0e91,	// (0x00080ca2) popup_call2_audio_in_window_g4_ParamLimits

0x0e91,	// (0x00080ca2) popup_call2_audio_in_window_g4

0x81bc,	// (0x00087fcd) aid_area_sk_bg_cut_ParamLimits

0x81bc,	// (0x00087fcd) aid_area_sk_bg_cut

0xedf1,	// (0x0008ec02) aid_area_sk_bg_cut_2_ParamLimits

0xedf1,	// (0x0008ec02) aid_area_sk_bg_cut_2

0x9130,	// (0x00088f41) aid_placing_details_win

0x9138,	// (0x00088f49) aid_placing_details_win_2

0x1809,	// (0x0008161a) camera2_autofocus_pane_g1_ParamLimits

0x5882,	// (0x00085693) popup_fixed_preview_cale_window_ParamLimits

0x5882,	// (0x00085693) popup_fixed_preview_cale_window

0xebcd,	// (0x0008e9de) navi_slider_pane_g3

0xebd6,	// (0x0008e9e7) navi_slider_pane_g4

0xebdf,	// (0x0008e9f0) navi_slider_pane_g5

0xebcd,	// (0x0008e9de) navi_slider_pane_g6

0x7a22,	// (0x00087833) navi_slider_pane_g7

0xecf2,	// (0x0008eb03) mup_scale_pane_g3

0xecfb,	// (0x0008eb0c) mup_scale_pane_g4

0xed04,	// (0x0008eb15) mup_scale_pane_g5

0x7e63,	// (0x00087c74) mup_scale_pane_g6

0x7e6c,	// (0x00087c7d) mup_scale_pane_g7

0xebcd,	// (0x0008e9de) cams2_slider_pane_g3

0x1460,	// (0x00081271) cams2_slider_pane_g4

0x9088,	// (0x00088e99) cams2_slider_pane_g5

0xebcd,	// (0x0008e9de) cams2_slider_pane_g6

0x9090,	// (0x00088ea1) cams2_slider_pane_g7

0x168b,	// (0x0008149c) camera2_autofocus_pane_cp_g1

0x19e1,	// (0x000817f2) bg_popup_preview_window_pane_cp02_ParamLimits

0x19e1,	// (0x000817f2) bg_popup_preview_window_pane_cp02

0x19ed,	// (0x000817fe) list_fp_cale_pane_ParamLimits

0x19ed,	// (0x000817fe) list_fp_cale_pane

0x19f9,	// (0x0008180a) popup_fixed_preview_cale_window_t1_ParamLimits

0x19f9,	// (0x0008180a) popup_fixed_preview_cale_window_t1

0x991b,	// (0x0008972c) popup_fixed_preview_cale_window_t2_ParamLimits

0x991b,	// (0x0008972c) popup_fixed_preview_cale_window_t2

0x9930,	// (0x00089741) popup_fixed_preview_cale_window_t3_ParamLimits

0x9930,	// (0x00089741) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0008f5cb) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0008f5cb) popup_fixed_preview_cale_window_t

0x9945,	// (0x00089756) list_single_fp_cale_pane_ParamLimits

0x9945,	// (0x00089756) list_single_fp_cale_pane

0x1a17,	// (0x00081828) list_single_fp_cale_pane_g1_ParamLimits

0x1a17,	// (0x00081828) list_single_fp_cale_pane_g1

0x1a23,	// (0x00081834) list_single_fp_cale_pane_g2_ParamLimits

0x1a23,	// (0x00081834) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0008f5d2) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0008f5d2) list_single_fp_cale_pane_g

0x1a3c,	// (0x0008184d) list_single_fp_cale_pane_t1_ParamLimits

0x1a3c,	// (0x0008184d) list_single_fp_cale_pane_t1

0x1a4e,	// (0x0008185f) list_single_fp_cale_pane_t2_ParamLimits

0x1a4e,	// (0x0008185f) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0008f5d9) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0008f5d9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x58ec,	// (0x000856fd) main_dialer_pane

0x9957,	// (0x00089768) aid_cell_size_keypad

0x9961,	// (0x00089772) dialer_ne_pane

0x996b,	// (0x0008977c) grid_dialer_command_1_pane

0x9973,	// (0x00089784) grid_dialer_command_2_pane

0x997b,	// (0x0008978c) grid_dialer_keypad_pane

0x998d,	// (0x0008979e) bg_popup_call_pane_cp06_ParamLimits

0x998d,	// (0x0008979e) bg_popup_call_pane_cp06

0x9999,	// (0x000897aa) dialer_ne_clear_pane_ParamLimits

0x9999,	// (0x000897aa) dialer_ne_clear_pane

0x1a81,	// (0x00081892) dialer_ne_pane_g1

0x1a89,	// (0x0008189a) dialer_ne_pane_t1_ParamLimits

0x1a89,	// (0x0008189a) dialer_ne_pane_t1

0x99a5,	// (0x000897b6) dialer_ne_pane_t2_ParamLimits

0x99a5,	// (0x000897b6) dialer_ne_pane_t2

0x99c2,	// (0x000897d3) dialer_ne_pane_t3_ParamLimits

0x99c2,	// (0x000897d3) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0008f5de) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0008f5de) dialer_ne_pane_t

0x99e6,	// (0x000897f7) dialer_ne_pane_t3_copy1_ParamLimits

0x99e6,	// (0x000897f7) dialer_ne_pane_t3_copy1

0x9a0a,	// (0x0008981b) cell_dialer_keypad_pane_ParamLimits

0x9a0a,	// (0x0008981b) cell_dialer_keypad_pane

0x9a21,	// (0x00089832) cell_dialer_command_1_pane_ParamLimits

0x9a21,	// (0x00089832) cell_dialer_command_1_pane

0x9a37,	// (0x00089848) cell_dialer_command_2_pane_ParamLimits

0x9a37,	// (0x00089848) cell_dialer_command_2_pane

0x1a9b,	// (0x000818ac) bg_button_pane_cp02_ParamLimits

0x1a9b,	// (0x000818ac) bg_button_pane_cp02

0x9a46,	// (0x00089857) cell_dialer_keypad_pane_g1_ParamLimits

0x9a46,	// (0x00089857) cell_dialer_keypad_pane_g1

0x1a9b,	// (0x000818ac) bg_button_pane_cp03_ParamLimits

0x1a9b,	// (0x000818ac) bg_button_pane_cp03

0x9a5b,	// (0x0008986c) cell_dialer_command_1_pane_g1_ParamLimits

0x9a5b,	// (0x0008986c) cell_dialer_command_1_pane_g1

0x1aa7,	// (0x000818b8) bg_button_pane_cp04

0x9a6f,	// (0x00089880) cell_dialer_command_2_pane_g1

0xebbc,	// (0x0008e9cd) bg_button_pane_cp06

0x1aaf,	// (0x000818c0) dialer_ne_clear_pane_g1

0x7965,	// (0x00087776) navi_pane_g2

0x7993,	// (0x000877a4) navi_pane_g3

0x0002,

0xf3f5,	// (0x0008f206) navi_pane_g

0x79be,	// (0x000877cf) navi_pane_mv_g2

0x79e5,	// (0x000877f6) navi_pane_mv_g5

0x79ed,	// (0x000877fe) navi_pane_mv_t1

0xe0db,	// (0x0008deec) main_clock2_pane

0x9aa0,	// (0x000898b1) main_clock2_list_pane_ParamLimits

0x9aa0,	// (0x000898b1) main_clock2_list_pane

0x9ac8,	// (0x000898d9) main_clock2_pane_t1_ParamLimits

0x9ac8,	// (0x000898d9) main_clock2_pane_t1

0x9aea,	// (0x000898fb) main_clock2_pane_t2_ParamLimits

0x9aea,	// (0x000898fb) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0008f5e5) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0008f5e5) main_clock2_pane_t

0x9b45,	// (0x00089956) popup_clock_analogue_window_cp03_ParamLimits

0x9b45,	// (0x00089956) popup_clock_analogue_window_cp03

0x9b63,	// (0x00089974) popup_clock_digital_window_cp02_ParamLimits

0x9b63,	// (0x00089974) popup_clock_digital_window_cp02

0x9bd0,	// (0x000899e1) main_clock2_list_single_pane_ParamLimits

0x9bd0,	// (0x000899e1) main_clock2_list_single_pane

0xebbc,	// (0x0008e9cd) list_highlight_pane_cp05

0x1ab7,	// (0x000818c8) main_clock2_list_single_pane_t1

0x6749,	// (0x0008655a) popup_toolbar_window_cp04_ParamLimits

0x915a,	// (0x00088f6b) camera2_autofocus_pane_g2_ParamLimits

0x915a,	// (0x00088f6b) camera2_autofocus_pane_g2

0x9166,	// (0x00088f77) camera2_autofocus_pane_g3_ParamLimits

0x9166,	// (0x00088f77) camera2_autofocus_pane_g3

0x9172,	// (0x00088f83) camera2_autofocus_pane_g4_ParamLimits

0x9172,	// (0x00088f83) camera2_autofocus_pane_g4

0x917e,	// (0x00088f8f) camera2_autofocus_pane_g5_ParamLimits

0x917e,	// (0x00088f8f) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0008f52e) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0008f52e) camera2_autofocus_pane_g

0x9340,	// (0x00089151) camera2_autofocus_pane_cp_g2

0x9348,	// (0x00089159) camera2_autofocus_pane_cp_g3

0x9350,	// (0x00089161) camera2_autofocus_pane_cp_g4

0x9358,	// (0x00089169) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0008f594) camera2_autofocus_pane_cp_g

0x9985,	// (0x00089796) popup_dialer_spcha_window

0xf0ce,	// (0x0008eedf) bg_popup_sub_pane_cp07

0x1ac5,	// (0x000818d6) list_spcha_pane

0x1acd,	// (0x000818de) list_single_spcha_pane_ParamLimits

0x1acd,	// (0x000818de) list_single_spcha_pane

0xf0ce,	// (0x0008eedf) list_highlight_pane_cp06

0x1ade,	// (0x000818ef) list_single_spcha_pane_t1

0x0c3b,	// (0x00080a4c) popup_call2_audio_out_window_g4_ParamLimits

0x0c3b,	// (0x00080a4c) popup_call2_audio_out_window_g4

0x58ec,	// (0x000856fd) main_imed2_pane

0x8803,	// (0x00088614) popup_imed_adjust2_window

0x8816,	// (0x00088627) popup_imed_trans_window_ParamLimits

0x8816,	// (0x00088627) popup_imed_trans_window

0x14c9,	// (0x000812da) popup_blid_sat_info2_window_t1

0x14d7,	// (0x000812e8) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0008f4c3) popup_blid_sat_info2_window_t

0x9c7a,	// (0x00089a8b) aid_size_cell_colour_35

0x9c94,	// (0x00089aa5) aid_size_cell_colour_112

0x9cab,	// (0x00089abc) aid_size_cell_effect

0x0011,	// (0x0007fe22) bg_tb_trans_pane_cp02

0xf0c2,	// (0x0008eed3) heading_imed_pane

0x9cc5,	// (0x00089ad6) listscroll_imed_pane

0x1aec,	// (0x000818fd) heading_imed_pane_g1

0x1af4,	// (0x00081905) heading_imed_pane_t1

0x1b02,	// (0x00081913) grid_imed_colour_35_pane_ParamLimits

0x1b02,	// (0x00081913) grid_imed_colour_35_pane

0x9cd1,	// (0x00089ae2) grid_imed_effect_pane

0x1b19,	// (0x0008192a) list_imed_aspect_pane

0x9ce1,	// (0x00089af2) scroll_pane_cp027_ParamLimits

0x9ce1,	// (0x00089af2) scroll_pane_cp027

0x9ced,	// (0x00089afe) cell_imed_effect_pane_ParamLimits

0x9ced,	// (0x00089afe) cell_imed_effect_pane

0x1b21,	// (0x00081932) cell_imed_colour_pane_ParamLimits

0x1b21,	// (0x00081932) cell_imed_colour_pane

0x1b63,	// (0x00081974) cell_imed_colour_pane_g1_ParamLimits

0x1b63,	// (0x00081974) cell_imed_colour_pane_g1

0x1b74,	// (0x00081985) hgihlgiht_grid_pane_cp016_ParamLimits

0x1b74,	// (0x00081985) hgihlgiht_grid_pane_cp016

0x9d05,	// (0x00089b16) cell_imed_effect_pane_g1

0x9d0d,	// (0x00089b1e) grid_highlight_pane_cp017

0x1b85,	// (0x00081996) list_imed_single_pane_ParamLimits

0x1b85,	// (0x00081996) list_imed_single_pane

0xf0ce,	// (0x0008eedf) list_highlight_pane_cp07

0x1b9a,	// (0x000819ab) list_imed_aspect_pane_comp1_t1

0x11f2,	// (0x00081003) bg_tb_trans_pane_cp05

0x1bbc,	// (0x000819cd) popup_imed_adjust2_window_g1

0x1be3,	// (0x000819f4) popup_imed_adjust2_window_t1

0x1bfb,	// (0x00081a0c) slider_imed_adjust_pane

0x1c0f,	// (0x00081a20) slider_imed_adjust_pane_g1

0x1c1f,	// (0x00081a30) slider_imed_adjust_pane_g2

0x1c2f,	// (0x00081a40) slider_imed_adjust_pane_g3

0x1c40,	// (0x00081a51) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0008f602) slider_imed_adjust_pane_g

0x9d16,	// (0x00089b27) aid_size_cell_clipart2

0x9d22,	// (0x00089b33) grid_imed_clipart_pane

0x1c51,	// (0x00081a62) scroll_pane_cp031

0x9d2c,	// (0x00089b3d) cell_imed_clipart_pane_ParamLimits

0x9d2c,	// (0x00089b3d) cell_imed_clipart_pane

0x9d4e,	// (0x00089b5f) cell_imed_clipart_pane_g1

0xf0ce,	// (0x0008eedf) grid_highlight_pane_cp014

0x9aac,	// (0x000898bd) main_clock2_pane_g1_ParamLimits

0x9aac,	// (0x000898bd) main_clock2_pane_g1

0x9b7b,	// (0x0008998c) aid_call2_pane_cp10

0x9b8d,	// (0x0008999e) aid_call_pane_cp10

0xeaf1,	// (0x0008e902) popup_clock_analogue_window_cp10_g1

0xeaf1,	// (0x0008e902) popup_clock_analogue_window_cp10_g2

0x9b9f,	// (0x000899b0) popup_clock_analogue_window_cp10_g3

0x9b9f,	// (0x000899b0) popup_clock_analogue_window_cp10_g4

0xeaf1,	// (0x0008e902) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0008f5f0) popup_clock_analogue_window_cp10_g

0x9bb1,	// (0x000899c2) popup_clock_analogue_window_cp10_t1

0x9be2,	// (0x000899f3) clock_digital_number_pane_cp10_ParamLimits

0x9be2,	// (0x000899f3) clock_digital_number_pane_cp10

0x9bfa,	// (0x00089a0b) clock_digital_number_pane_cp11_ParamLimits

0x9bfa,	// (0x00089a0b) clock_digital_number_pane_cp11

0x9c12,	// (0x00089a23) clock_digital_number_pane_cp12_ParamLimits

0x9c12,	// (0x00089a23) clock_digital_number_pane_cp12

0x9c2a,	// (0x00089a3b) clock_digital_number_pane_cp13_ParamLimits

0x9c2a,	// (0x00089a3b) clock_digital_number_pane_cp13

0x9c42,	// (0x00089a53) clock_digital_separator_pane_cp10_ParamLimits

0x9c42,	// (0x00089a53) clock_digital_separator_pane_cp10

0x9c5a,	// (0x00089a6b) popup_clock_digital_window_cp02_t1_ParamLimits

0x9c5a,	// (0x00089a6b) popup_clock_digital_window_cp02_t1

0xe000,	// (0x0008de11) clock_digital_number_pane_cp10_g1

0xe000,	// (0x0008de11) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0008f60b) clock_digital_number_pane_cp10_g

0xe000,	// (0x0008de11) clock_digital_separator_pane_cp10_g1

0xe000,	// (0x0008de11) clock_digital_separator_pane_g2_cp10

0xeb8c,	// (0x0008e99d) navi_pane_vded_g4

0xeb95,	// (0x0008e9a6) navi_pane_vded_g5

0xeb9e,	// (0x0008e9af) navi_pane_vded_t1

0x58ec,	// (0x000856fd) main_vded_pane

0x9d57,	// (0x00089b68) main_vded_pane_g1

0x9d63,	// (0x00089b74) main_vded_pane_g2

0x9d6d,	// (0x00089b7e) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0008f610) main_vded_pane_g

0x9d77,	// (0x00089b88) main_vded_pane_t1

0x9d85,	// (0x00089b96) main_vded_pane_t2

0x0001,

0xf806,	// (0x0008f617) main_vded_pane_t

0x9d93,	// (0x00089ba4) vded_slider_pane

0x9d9d,	// (0x00089bae) vded_video_pane

0x1c59,	// (0x00081a6a) vded_video_pane_g1

0x9da7,	// (0x00089bb8) vded_video_pane_g2

0x168b,	// (0x0008149c) vded_video_pane_g3

0x0002,

0xf80b,	// (0x0008f61c) vded_video_pane_g

0x1c63,	// (0x00081a74) vded_slider_pane_g1

0x13de,	// (0x000811ef) vded_slider_pane_g2

0x1c6c,	// (0x00081a7d) vded_slider_pane_g3

0x1c75,	// (0x00081a86) vded_slider_pane_g4

0x1c7e,	// (0x00081a8f) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0008f623) vded_slider_pane_g

0x988a,	// (0x0008969b) mup3_rocker_pane_ParamLimits

0x988a,	// (0x0008969b) mup3_rocker_pane

0x9db0,	// (0x00089bc1) mup3_control_keys_pane_g1

0x9db8,	// (0x00089bc9) mup3_control_keys_pane_g2

0x9dc0,	// (0x00089bd1) mup3_control_keys_pane_g3

0x9dc8,	// (0x00089bd9) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0008f62e) mup3_control_keys_pane_g

0x58aa,	// (0x000856bb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x58aa,	// (0x000856bb) popup_toolbar2_fixed_window_cp01

0x98a4,	// (0x000896b5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x98a4,	// (0x000896b5) popup_toolbar2_fixed_window_cp02

0x057a,	// (0x0008038b) popup_call2_audio_second_window_t4_ParamLimits

0x057a,	// (0x0008038b) popup_call2_audio_second_window_t4

0x0aa8,	// (0x000808b9) popup_call2_audio_first_window_t6_ParamLimits

0x0aa8,	// (0x000808b9) popup_call2_audio_first_window_t6

0x0d3e,	// (0x00080b4f) popup_call2_audio_out_window_t6_ParamLimits

0x0d3e,	// (0x00080b4f) popup_call2_audio_out_window_t6

0x58ec,	// (0x000856fd) main_vitu_pane

0x9dd8,	// (0x00089be9) aid_size_cell_itu_ParamLimits

0x9dd8,	// (0x00089be9) aid_size_cell_itu

0x9de6,	// (0x00089bf7) bg_popup_window_pane_cp08_ParamLimits

0x9de6,	// (0x00089bf7) bg_popup_window_pane_cp08

0x9df4,	// (0x00089c05) field_vitu_entry_pane_ParamLimits

0x9df4,	// (0x00089c05) field_vitu_entry_pane

0x9e03,	// (0x00089c14) grid_vitu_function_pane_ParamLimits

0x9e03,	// (0x00089c14) grid_vitu_function_pane

0x9e13,	// (0x00089c24) grid_vitu_itu_pane_ParamLimits

0x9e13,	// (0x00089c24) grid_vitu_itu_pane

0x9e23,	// (0x00089c34) cell_vitu_itu_pane_ParamLimits

0x9e23,	// (0x00089c34) cell_vitu_itu_pane

0x9e38,	// (0x00089c49) cell_vitu_function_pane_ParamLimits

0x9e38,	// (0x00089c49) cell_vitu_function_pane

0x0011,	// (0x0007fe22) bg_popup_sub_pane_cp08_ParamLimits

0x0011,	// (0x0007fe22) bg_popup_sub_pane_cp08

0x9e4a,	// (0x00089c5b) field_vitu_entry_pane_t1_ParamLimits

0x9e4a,	// (0x00089c5b) field_vitu_entry_pane_t1

0x1c9f,	// (0x00081ab0) field_vitu_entry_pane_t2_ParamLimits

0x1c9f,	// (0x00081ab0) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0008f63c) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0008f63c) field_vitu_entry_pane_t

0x1cbc,	// (0x00081acd) bg_button_pane_cp05_ParamLimits

0x1cbc,	// (0x00081acd) bg_button_pane_cp05

0x9e66,	// (0x00089c77) cell_vitu_itu_pane_g1

0x9e7e,	// (0x00089c8f) cell_vitu_itu_pane_t1_ParamLimits

0x9e7e,	// (0x00089c8f) cell_vitu_itu_pane_t1

0x9e90,	// (0x00089ca1) cell_vitu_itu_pane_t2_ParamLimits

0x9e90,	// (0x00089ca1) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0008f641) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0008f641) cell_vitu_itu_pane_t

0x1cca,	// (0x00081adb) bg_button_pane_cp07

0x9ec5,	// (0x00089cd6) cell_vitu_function_pane_g1

0x5b7e,	// (0x0008598f) main_calc_pane_g1

0x5669,	// (0x0008547a) aid_visual_content_pane

0x58ec,	// (0x000856fd) main_vradio_pane

0x9ece,	// (0x00089cdf) main_vradio_pane_g1_ParamLimits

0x9ece,	// (0x00089cdf) main_vradio_pane_g1

0x1cd4,	// (0x00081ae5) main_vradio_pane_g2_ParamLimits

0x1cd4,	// (0x00081ae5) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0008f648) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0008f648) main_vradio_pane_g

0x9ede,	// (0x00089cef) main_vradio_pane_t1_ParamLimits

0x9ede,	// (0x00089cef) main_vradio_pane_t1

0x9ef0,	// (0x00089d01) main_vradio_pane_t2_ParamLimits

0x9ef0,	// (0x00089d01) main_vradio_pane_t2

0x1ce1,	// (0x00081af2) main_vradio_pane_t3_ParamLimits

0x1ce1,	// (0x00081af2) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0008f64d) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0008f64d) main_vradio_pane_t

0x9f02,	// (0x00089d13) vradio_rocker_control_pane_ParamLimits

0x9f02,	// (0x00089d13) vradio_rocker_control_pane

0x9f0e,	// (0x00089d1f) vradio_station_info_pane_ParamLimits

0x9f0e,	// (0x00089d1f) vradio_station_info_pane

0x1cf5,	// (0x00081b06) vradio_frequency_info_pane_ParamLimits

0x1cf5,	// (0x00081b06) vradio_frequency_info_pane

0x168b,	// (0x0008149c) vradio_station_info_pane_g1

0x1d04,	// (0x00081b15) vradio_station_info_pane_t1_ParamLimits

0x1d04,	// (0x00081b15) vradio_station_info_pane_t1

0x1d26,	// (0x00081b37) vradio_station_info_pane_t2_ParamLimits

0x1d26,	// (0x00081b37) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0008f654) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0008f654) vradio_station_info_pane_t

0x1d38,	// (0x00081b49) vradio_tuning_pane

0x1d40,	// (0x00081b51) vradio_rocker_control_pane_g1

0x1d48,	// (0x00081b59) vradio_rocker_control_pane_g2

0x1d50,	// (0x00081b61) vradio_rocker_control_pane_g3

0x1d58,	// (0x00081b69) vradio_rocker_control_pane_g4

0x1d60,	// (0x00081b71) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0008f659) vradio_rocker_control_pane_g

0x9f1d,	// (0x00089d2e) vradio_frequency_info_pane_g1

0x1d68,	// (0x00081b79) vradio_frequency_info_pane_t1_ParamLimits

0x1d68,	// (0x00081b79) vradio_frequency_info_pane_t1

0x9f27,	// (0x00089d38) vradio_tuning_pane_g1

0x9f30,	// (0x00089d41) vradio_tuning_pane_t1

0x56b2,	// (0x000854c3) area_side_right_pane_ParamLimits

0x56b2,	// (0x000854c3) area_side_right_pane

0x11b9,	// (0x00080fca) status_small_pane_g1

0x11c1,	// (0x00080fd2) status_small_pane_g2

0x11ca,	// (0x00080fdb) status_small_pane_g3

0x11d3,	// (0x00080fe4) status_small_pane_g4

0x0003,

0xf608,	// (0x0008f419) status_small_pane_g

0x11dc,	// (0x00080fed) status_small_pane_t1

0x58ec,	// (0x000856fd) main_video3_pane

0x1d7c,	// (0x00081b8d) cams_zoom_vslider_pane

0x1d84,	// (0x00081b95) image3_wide_pane_ParamLimits

0x1d84,	// (0x00081b95) image3_wide_pane

0x1d9e,	// (0x00081baf) image3_wide_small_pane

0x1daa,	// (0x00081bbb) main_video3_pane_g1_ParamLimits

0x1daa,	// (0x00081bbb) main_video3_pane_g1

0x1dc6,	// (0x00081bd7) main_video3_pane_g2_ParamLimits

0x1dc6,	// (0x00081bd7) main_video3_pane_g2

0x0001,

0xf853,	// (0x0008f664) main_video3_pane_g_ParamLimits

0xf853,	// (0x0008f664) main_video3_pane_g

0x1de2,	// (0x00081bf3) main_video3_pane_t1_ParamLimits

0x1de2,	// (0x00081bf3) main_video3_pane_t1

0x1e0d,	// (0x00081c1e) main_video3_pane_t2_ParamLimits

0x1e0d,	// (0x00081c1e) main_video3_pane_t2

0x1e38,	// (0x00081c49) main_video3_pane_t3_ParamLimits

0x1e38,	// (0x00081c49) main_video3_pane_t3

0x0002,

0xf858,	// (0x0008f669) main_video3_pane_t_ParamLimits

0xf858,	// (0x0008f669) main_video3_pane_t

0x1e65,	// (0x00081c76) cams_zoom_vslider_pane_g1

0x1e6e,	// (0x00081c7f) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0008f670) cams_zoom_vslider_pane_g

0x1e76,	// (0x00081c87) small_slider_vertical_pane

0x168b,	// (0x0008149c) small_slider_vertical_pane_g1

0x168b,	// (0x0008149c) small_slider_vertical_pane_g2

0x1e7e,	// (0x00081c8f) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0008f675) small_slider_vertical_pane_g

0x58ec,	// (0x000856fd) main_hwr_training_pane

0x1e87,	// (0x00081c98) hwr_training_instruct_pane_ParamLimits

0x1e87,	// (0x00081c98) hwr_training_instruct_pane

0x9f3f,	// (0x00089d50) hwr_training_navi_pane_ParamLimits

0x9f3f,	// (0x00089d50) hwr_training_navi_pane

0x9f59,	// (0x00089d6a) hwr_training_write_pane_ParamLimits

0x9f59,	// (0x00089d6a) hwr_training_write_pane

0xf0ce,	// (0x0008eedf) bg_frame_shadow_pane

0x1ebe,	// (0x00081ccf) hwr_training_write_pane_g1

0x1ec6,	// (0x00081cd7) hwr_training_write_pane_g2

0x1ece,	// (0x00081cdf) hwr_training_write_pane_g3

0x1ed6,	// (0x00081ce7) hwr_training_write_pane_g4

0x1ede,	// (0x00081cef) hwr_training_write_pane_g5

0x1ee6,	// (0x00081cf7) hwr_training_write_pane_g6

0x1eee,	// (0x00081cff) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0008f67c) hwr_training_write_pane_g

0x9f91,	// (0x00089da2) hwr_training_navi_pane_g1_ParamLimits

0x9f91,	// (0x00089da2) hwr_training_navi_pane_g1

0x9fa3,	// (0x00089db4) hwr_training_navi_pane_g2_ParamLimits

0x9fa3,	// (0x00089db4) hwr_training_navi_pane_g2

0x9fb5,	// (0x00089dc6) hwr_training_navi_pane_g3_ParamLimits

0x9fb5,	// (0x00089dc6) hwr_training_navi_pane_g3

0x9fc5,	// (0x00089dd6) hwr_training_navi_pane_g4_ParamLimits

0x9fc5,	// (0x00089dd6) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0008f68b) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0008f68b) hwr_training_navi_pane_g

0x9fdf,	// (0x00089df0) hwr_training_navi_pane_t1

0x9fed,	// (0x00089dfe) list_single_hwr_training_instruct_pane_ParamLimits

0x9fed,	// (0x00089dfe) list_single_hwr_training_instruct_pane

0x1ef6,	// (0x00081d07) list_single_hwr_training_instruct_pane_t1

0x15cb,	// (0x000813dc) bg_frame_shadow_pane_g1

0x1f05,	// (0x00081d16) bg_frame_shadow_pane_g2

0x1f0d,	// (0x00081d1e) bg_frame_shadow_pane_g3

0x1f15,	// (0x00081d26) bg_frame_shadow_pane_g4

0x1f1d,	// (0x00081d2e) bg_frame_shadow_pane_g5

0x1f25,	// (0x00081d36) bg_frame_shadow_pane_g6

0x1f2d,	// (0x00081d3e) bg_frame_shadow_pane_g7

0xe194,	// (0x0008dfa5) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0008f696) bg_frame_shadow_pane_g

0x58ec,	// (0x000856fd) main_video_tele_dialer_pane

0xa012,	// (0x00089e23) aid_size_cell_video_keypad_ParamLimits

0xa012,	// (0x00089e23) aid_size_cell_video_keypad

0xa022,	// (0x00089e33) grid_video_dialer_keypad_pane_ParamLimits

0xa022,	// (0x00089e33) grid_video_dialer_keypad_pane

0xa054,	// (0x00089e65) video_down_pane_cp_ParamLimits

0xa054,	// (0x00089e65) video_down_pane_cp

0xa060,	// (0x00089e71) cell_video_dialer_keypad_pane_ParamLimits

0xa060,	// (0x00089e71) cell_video_dialer_keypad_pane

0x1f51,	// (0x00081d62) bg_button_pane_cp08_ParamLimits

0x1f51,	// (0x00081d62) bg_button_pane_cp08

0xa075,	// (0x00089e86) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa075,	// (0x00089e86) cell_video_dialer_keypad_pane_g1

0x987e,	// (0x0008968f) mup3_rocker2_pane_ParamLimits

0x987e,	// (0x0008968f) mup3_rocker2_pane

0x168b,	// (0x0008149c) mup3_rocker2_pane_g1

0x8773,	// (0x00088584) main_dialer2_pane

0x58ec,	// (0x000856fd) main_mp4_pane

0xa0b7,	// (0x00089ec8) main_mp4_pane_g1_ParamLimits

0xa0b7,	// (0x00089ec8) main_mp4_pane_g1

0xa0c5,	// (0x00089ed6) main_mp4_pane_g2_ParamLimits

0xa0c5,	// (0x00089ed6) main_mp4_pane_g2

0xa0d3,	// (0x00089ee4) main_mp4_pane_g3_ParamLimits

0xa0d3,	// (0x00089ee4) main_mp4_pane_g3

0xa118,	// (0x00089f29) main_mp4_pane_g4_ParamLimits

0xa118,	// (0x00089f29) main_mp4_pane_g4

0xa140,	// (0x00089f51) main_mp4_pane_g5_ParamLimits

0xa140,	// (0x00089f51) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0008f6b6) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0008f6b6) main_mp4_pane_g

0xa190,	// (0x00089fa1) main_mp4_pane_t1_ParamLimits

0xa190,	// (0x00089fa1) main_mp4_pane_t1

0xa1ec,	// (0x00089ffd) main_mp4_pane_t2_ParamLimits

0xa1ec,	// (0x00089ffd) main_mp4_pane_t2

0x1f5d,	// (0x00081d6e) main_mp4_pane_t3_ParamLimits

0x1f5d,	// (0x00081d6e) main_mp4_pane_t3

0xa23e,	// (0x0008a04f) main_mp4_pane_t4_ParamLimits

0xa23e,	// (0x0008a04f) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0008f6c3) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0008f6c3) main_mp4_pane_t

0xa282,	// (0x0008a093) mp4_progress_pane_ParamLimits

0xa282,	// (0x0008a093) mp4_progress_pane

0xa2cc,	// (0x0008a0dd) mp4_rocker_pane_ParamLimits

0xa2cc,	// (0x0008a0dd) mp4_rocker_pane

0x1f85,	// (0x00081d96) mp4_progress_pane_t1

0x1f9e,	// (0x00081daf) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0008f6cc) mp4_progress_pane_t

0x1fb7,	// (0x00081dc8) mup_progress_pane_cp04

0x28bc,	// (0x000826cd) mp4_rocker_pane_g1

0xa2ec,	// (0x0008a0fd) aid_cell_size_keypad2_ParamLimits

0xa2ec,	// (0x0008a0fd) aid_cell_size_keypad2

0xa2fc,	// (0x0008a10d) dialer2_ne_pane_ParamLimits

0xa2fc,	// (0x0008a10d) dialer2_ne_pane

0xa30a,	// (0x0008a11b) grid_dialer2_keypad_pane_ParamLimits

0xa30a,	// (0x0008a11b) grid_dialer2_keypad_pane

0x2917,	// (0x00082728) bg_popup_call_pane_cp07_ParamLimits

0x2917,	// (0x00082728) bg_popup_call_pane_cp07

0xa31a,	// (0x0008a12b) dialer2_ne_pane_t1_ParamLimits

0xa31a,	// (0x0008a12b) dialer2_ne_pane_t1

0xa33f,	// (0x0008a150) cell_dialer2_keypad_pane_ParamLimits

0xa33f,	// (0x0008a150) cell_dialer2_keypad_pane

0x1fd5,	// (0x00081de6) bg_button_pane_pane_cp04_ParamLimits

0x1fd5,	// (0x00081de6) bg_button_pane_pane_cp04

0xa354,	// (0x0008a165) cell_dialer2_keypad_pane_g1_ParamLimits

0xa354,	// (0x0008a165) cell_dialer2_keypad_pane_g1

0x660b,	// (0x0008641c) aid_placing_vt_set_content_ParamLimits

0x660b,	// (0x0008641c) aid_placing_vt_set_content

0x6637,	// (0x00086448) aid_placing_vt_set_title_ParamLimits

0x6637,	// (0x00086448) aid_placing_vt_set_title

0x58ec,	// (0x000856fd) main_image3_pane

0xa3ee,	// (0x0008a1ff) area_side_right_pane_cp01_ParamLimits

0xa3ee,	// (0x0008a1ff) area_side_right_pane_cp01

0xa41b,	// (0x0008a22c) main_image3_pane_g1_ParamLimits

0xa41b,	// (0x0008a22c) main_image3_pane_g1

0xa429,	// (0x0008a23a) main_image3_pane_g2_ParamLimits

0xa429,	// (0x0008a23a) main_image3_pane_g2

0xa442,	// (0x0008a253) main_image3_pane_g3_ParamLimits

0xa442,	// (0x0008a253) main_image3_pane_g3

0xa45b,	// (0x0008a26c) main_image3_pane_g4_ParamLimits

0xa45b,	// (0x0008a26c) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0008f6db) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0008f6db) main_image3_pane_g

0xa474,	// (0x0008a285) main_image3_pane_t1_ParamLimits

0xa474,	// (0x0008a285) main_image3_pane_t1

0xa499,	// (0x0008a2aa) main_image3_pane_t2_ParamLimits

0xa499,	// (0x0008a2aa) main_image3_pane_t2

0xa4b8,	// (0x0008a2c9) main_image3_pane_t3_ParamLimits

0xa4b8,	// (0x0008a2c9) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0008f6e4) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0008f6e4) main_image3_pane_t

0x9de6,	// (0x00089bf7) grid_sctrl_middle_pane_cp01_ParamLimits

0x9de6,	// (0x00089bf7) grid_sctrl_middle_pane_cp01

0xa519,	// (0x0008a32a) cell_sctrl_middle_pane_cp01_ParamLimits

0xa519,	// (0x0008a32a) cell_sctrl_middle_pane_cp01

0xa52a,	// (0x0008a33b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa52a,	// (0x0008a33b) cell_sctrl_middle_pane_cp01_g1

0x58ec,	// (0x000856fd) main_call4_pane

0xa537,	// (0x0008a348) aid_size_button_call4_ParamLimits

0xa537,	// (0x0008a348) aid_size_button_call4

0xa567,	// (0x0008a378) call4_windows_pane_ParamLimits

0xa567,	// (0x0008a378) call4_windows_pane

0xa581,	// (0x0008a392) grid_call4_button_pane_ParamLimits

0xa581,	// (0x0008a392) grid_call4_button_pane

0x1fe1,	// (0x00081df2) call4_windows_conf_pane

0x1ff8,	// (0x00081e09) popup_call4_audio_first_window_ParamLimits

0x1ff8,	// (0x00081e09) popup_call4_audio_first_window

0x2044,	// (0x00081e55) popup_call4_audio_second_window_ParamLimits

0x2044,	// (0x00081e55) popup_call4_audio_second_window

0x2058,	// (0x00081e69) popup_call4_audio_wait_window_ParamLimits

0x2058,	// (0x00081e69) popup_call4_audio_wait_window

0xa5a5,	// (0x0008a3b6) cell_call4_button_pane_ParamLimits

0xa5a5,	// (0x0008a3b6) cell_call4_button_pane

0xa5ca,	// (0x0008a3db) bg_button_pane_cp09_ParamLimits

0xa5ca,	// (0x0008a3db) bg_button_pane_cp09

0xa5d6,	// (0x0008a3e7) cell_call4_button_pane_g1_ParamLimits

0xa5d6,	// (0x0008a3e7) cell_call4_button_pane_g1

0xa5e3,	// (0x0008a3f4) cell_call4_button_pane_t1_ParamLimits

0xa5e3,	// (0x0008a3f4) cell_call4_button_pane_t1

0x20a0,	// (0x00081eb1) popup_call4_audio_conf_window_ParamLimits

0x20a0,	// (0x00081eb1) popup_call4_audio_conf_window

0x98b1,	// (0x000896c2) mup3_progress_pane_t1_ParamLimits

0x98d0,	// (0x000896e1) mup3_progress_pane_t2_ParamLimits

0x199e,	// (0x000817af) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0008f5bd) mup3_progress_pane_t_ParamLimits

0x19bb,	// (0x000817cc) mup_progress_pane_cp03_ParamLimits

0x9dd0,	// (0x00089be1) mup3_control_keys_pane_g4_copy1

0xa2b0,	// (0x0008a0c1) mp4_rocker2_pane_ParamLimits

0xa2b0,	// (0x0008a0c1) mp4_rocker2_pane

0x20bc,	// (0x00081ecd) mp4_rocker2_pane_g1

0x20b4,	// (0x00081ec5) mp4_rocker2_pane_g2

0xa5f5,	// (0x0008a406) mp4_rocker2_pane_g3

0xa5fd,	// (0x0008a40e) mp4_rocker2_pane_g4

0xa605,	// (0x0008a416) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x0008f6ed) mp4_rocker2_pane_g

0x58ec,	// (0x000856fd) main_camera4_pane

0x58ec,	// (0x000856fd) main_video4_pane

0xa030,	// (0x00089e41) main_video_tele_dialer_pane_t1_ParamLimits

0xa030,	// (0x00089e41) main_video_tele_dialer_pane_t1

0xa042,	// (0x00089e53) main_video_tele_dialer_pane_t2_ParamLimits

0xa042,	// (0x00089e53) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0008f6a7) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0008f6a7) main_video_tele_dialer_pane_t

0xa625,	// (0x0008a436) cam4_autofocus_pane_ParamLimits

0xa625,	// (0x0008a436) cam4_autofocus_pane

0xa63f,	// (0x0008a450) cam4_image_uncrop_pane_ParamLimits

0xa63f,	// (0x0008a450) cam4_image_uncrop_pane

0xa656,	// (0x0008a467) cam4_indicators_pane_ParamLimits

0xa656,	// (0x0008a467) cam4_indicators_pane

0xa672,	// (0x0008a483) main_camera4_pane_g1_ParamLimits

0xa672,	// (0x0008a483) main_camera4_pane_g1

0xa67e,	// (0x0008a48f) main_camera4_pane_g2_ParamLimits

0xa67e,	// (0x0008a48f) main_camera4_pane_g2

0xa67e,	// (0x0008a48f) main_camera4_pane_g3_ParamLimits

0xa67e,	// (0x0008a48f) main_camera4_pane_g3

0xa68a,	// (0x0008a49b) main_camera4_pane_g4_ParamLimits

0xa68a,	// (0x0008a49b) main_camera4_pane_g4

0xa696,	// (0x0008a4a7) main_camera4_pane_g5_ParamLimits

0xa696,	// (0x0008a4a7) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0008f6f8) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0008f6f8) main_camera4_pane_g

0xa6b0,	// (0x0008a4c1) main_camera4_pane_t1_ParamLimits

0xa6b0,	// (0x0008a4c1) main_camera4_pane_t1

0xa6f8,	// (0x0008a509) bg_tb_trans_pane_cp06

0xa70e,	// (0x0008a51f) cam4_indicators_pane_g1

0xa71f,	// (0x0008a530) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0008f713) cam4_indicators_pane_g

0xa73d,	// (0x0008a54e) cam4_indicators_pane_t1

0xa767,	// (0x0008a578) main_video4_pane_g1_ParamLimits

0xa767,	// (0x0008a578) main_video4_pane_g1

0xa773,	// (0x0008a584) main_video4_pane_g2_ParamLimits

0xa773,	// (0x0008a584) main_video4_pane_g2

0xa77f,	// (0x0008a590) main_video4_pane_g3_ParamLimits

0xa77f,	// (0x0008a590) main_video4_pane_g3

0xa78b,	// (0x0008a59c) main_video4_pane_g4_ParamLimits

0xa78b,	// (0x0008a59c) main_video4_pane_g4

0x0004,

0xf909,	// (0x0008f71a) main_video4_pane_g_ParamLimits

0xf909,	// (0x0008f71a) main_video4_pane_g

0xa7ab,	// (0x0008a5bc) vid4_indicators_pane_ParamLimits

0xa7ab,	// (0x0008a5bc) vid4_indicators_pane

0xa7ca,	// (0x0008a5db) video4_image_uncrop_cif_pane_ParamLimits

0xa7ca,	// (0x0008a5db) video4_image_uncrop_cif_pane

0xa7d9,	// (0x0008a5ea) video4_image_uncrop_nhd_pane_ParamLimits

0xa7d9,	// (0x0008a5ea) video4_image_uncrop_nhd_pane

0xa63f,	// (0x0008a450) video4_image_uncrop_vga_pane_ParamLimits

0xa63f,	// (0x0008a450) video4_image_uncrop_vga_pane

0x8765,	// (0x00088576) bg_tb_trans_pane_cp07

0xa7f0,	// (0x0008a601) vid4_indicators_pane_g1

0xa804,	// (0x0008a615) vid4_indicators_pane_g2

0xa818,	// (0x0008a629) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0008f725) vid4_indicators_pane_g

0xa847,	// (0x0008a658) vid4_indicators_pane_t1

0xa85e,	// (0x0008a66f) cam4_autofocus_pane_g1

0xa866,	// (0x0008a677) cam4_autofocus_pane_g2

0xa86e,	// (0x0008a67f) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0008f730) cam4_autofocus_pane_g

0xa876,	// (0x0008a687) cam4_autofocus_pane_g3_copy1

0x1f35,	// (0x00081d46) video_down_pane_cp_t1

0x1f43,	// (0x00081d54) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0008f6ac) video_down_pane_cp_t

0x58d2,	// (0x000856e3) popup_vitu2_window_ParamLimits

0x58d2,	// (0x000856e3) popup_vitu2_window

0xa87e,	// (0x0008a68f) aid_size_cell2_itu2_ParamLimits

0xa87e,	// (0x0008a68f) aid_size_cell2_itu2

0xa8a0,	// (0x0008a6b1) aid_size_cell_itu2_ParamLimits

0xa8a0,	// (0x0008a6b1) aid_size_cell_itu2

0xa8e4,	// (0x0008a6f5) bg_popup_window_pane_cp09_ParamLimits

0xa8e4,	// (0x0008a6f5) bg_popup_window_pane_cp09

0xa8f2,	// (0x0008a703) field_vitu2_entry_pane_ParamLimits

0xa8f2,	// (0x0008a703) field_vitu2_entry_pane

0xa912,	// (0x0008a723) grid_vitu2_function_pane_ParamLimits

0xa912,	// (0x0008a723) grid_vitu2_function_pane

0xa956,	// (0x0008a767) grid_vitu2_itu_pane_ParamLimits

0xa956,	// (0x0008a767) grid_vitu2_itu_pane

0xa9ce,	// (0x0008a7df) cell_vitu2_itu_pane_ParamLimits

0xa9ce,	// (0x0008a7df) cell_vitu2_itu_pane

0xa9e3,	// (0x0008a7f4) cell_vitu2_function_pane_ParamLimits

0xa9e3,	// (0x0008a7f4) cell_vitu2_function_pane

0x20d6,	// (0x00081ee7) bg_popup_call_pane_cp08_ParamLimits

0x20d6,	// (0x00081ee7) bg_popup_call_pane_cp08

0x20ef,	// (0x00081f00) field_vitu2_entry_pane_g1

0x20fb,	// (0x00081f0c) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x0008f737) field_vitu2_entry_pane_g

0x2115,	// (0x00081f26) field_vitu2_entry_pane_t1_ParamLimits

0x2115,	// (0x00081f26) field_vitu2_entry_pane_t1

0x2144,	// (0x00081f55) field_vitu2_entry_pane_t2_ParamLimits

0x2144,	// (0x00081f55) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0008f73e) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0008f73e) field_vitu2_entry_pane_t

0xaa22,	// (0x0008a833) bg_button_pane_cp010_ParamLimits

0xaa22,	// (0x0008a833) bg_button_pane_cp010

0xaa30,	// (0x0008a841) cell_vitu2_itu_pane_g1

0xaa4e,	// (0x0008a85f) cell_vitu2_itu_pane_t1_ParamLimits

0xaa4e,	// (0x0008a85f) cell_vitu2_itu_pane_t1

0x555a,	// (0x0008536b) cell_vitu2_itu_pane_t2_ParamLimits

0x555a,	// (0x0008536b) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0008f748) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0008f748) cell_vitu2_itu_pane_t

0x8765,	// (0x00088576) bg_button_pane_cp011

0xaaa0,	// (0x0008a8b1) cell_vitu2_function_pane_g1

0x58ec,	// (0x000856fd) main_myfav_hc_pane

0xa4fa,	// (0x0008a30b) popup_image3_note_pane_ParamLimits

0xa4fa,	// (0x0008a30b) popup_image3_note_pane

0xa508,	// (0x0008a319) popup_image3_tool_bar_pane_ParamLimits

0xa508,	// (0x0008a319) popup_image3_tool_bar_pane

0x55c8,	// (0x000853d9) cell_vitu2_itu_pane_t3_ParamLimits

0x55c8,	// (0x000853d9) cell_vitu2_itu_pane_t3

0xf0ce,	// (0x0008eedf) bg_popup_trans_pane

0x2169,	// (0x00081f7a) grid_image3_tool_bar_pane

0x2173,	// (0x00081f84) bg_popup_trans_pane_g1

0xe4d1,	// (0x0008e2e2) bg_popup_trans_pane_g2

0x217b,	// (0x00081f8c) bg_popup_trans_pane_g3

0x2183,	// (0x00081f94) bg_popup_trans_pane_g4

0x218b,	// (0x00081f9c) bg_popup_trans_pane_g5

0x2193,	// (0x00081fa4) bg_popup_trans_pane_g6

0x219b,	// (0x00081fac) bg_popup_trans_pane_g7

0x21a3,	// (0x00081fb4) bg_popup_trans_pane_g8

0xe4b1,	// (0x0008e2c2) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0008f74f) bg_popup_trans_pane_g

0x21ab,	// (0x00081fbc) cell_image3_tool_bar_pane_ParamLimits

0x21ab,	// (0x00081fbc) cell_image3_tool_bar_pane

0x168b,	// (0x0008149c) cell_image3_tool_bar_pane_g1

0xf0ce,	// (0x0008eedf) bg_popup_trans_pane_cp1

0x21bf,	// (0x00081fd0) popup_image3_note_pane_t1

0x21cd,	// (0x00081fde) popup_image3_note_pane_t2

0x21db,	// (0x00081fec) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0008f762) popup_image3_note_pane_t

0x21e9,	// (0x00081ffa) popup_image3_note_pane_t3_copy1

0xaab4,	// (0x0008a8c5) bg_myfav_hc_instruction_pane_ParamLimits

0xaab4,	// (0x0008a8c5) bg_myfav_hc_instruction_pane

0xaacc,	// (0x0008a8dd) cell_myfav_contact_pane_ParamLimits

0xaacc,	// (0x0008a8dd) cell_myfav_contact_pane

0xaae6,	// (0x0008a8f7) cell_myfav_contact_pane_cp1_ParamLimits

0xaae6,	// (0x0008a8f7) cell_myfav_contact_pane_cp1

0xaafe,	// (0x0008a90f) cell_myfav_contact_pane_cp2_ParamLimits

0xaafe,	// (0x0008a90f) cell_myfav_contact_pane_cp2

0xab16,	// (0x0008a927) cell_myfav_contact_pane_cp3_ParamLimits

0xab16,	// (0x0008a927) cell_myfav_contact_pane_cp3

0xab2d,	// (0x0008a93e) cell_myfav_contact_pane_cp4_ParamLimits

0xab2d,	// (0x0008a93e) cell_myfav_contact_pane_cp4

0xab43,	// (0x0008a954) cell_myfav_contact_pane_cp5_ParamLimits

0xab43,	// (0x0008a954) cell_myfav_contact_pane_cp5

0xab57,	// (0x0008a968) cell_myfav_contact_pane_cp6_ParamLimits

0xab57,	// (0x0008a968) cell_myfav_contact_pane_cp6

0xab6b,	// (0x0008a97c) cell_myfav_contact_pane_cp7_ParamLimits

0xab6b,	// (0x0008a97c) cell_myfav_contact_pane_cp7

0x21f7,	// (0x00082008) listscroll_gen_pane_cp05

0xab83,	// (0x0008a994) main_myfav_hc_pane_g1_ParamLimits

0xab83,	// (0x0008a994) main_myfav_hc_pane_g1

0xab99,	// (0x0008a9aa) main_myfav_hc_pane_g2_ParamLimits

0xab99,	// (0x0008a9aa) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0008f769) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0008f769) main_myfav_hc_pane_g

0xabc7,	// (0x0008a9d8) main_myfav_hc_pane_t1_ParamLimits

0xabc7,	// (0x0008a9d8) main_myfav_hc_pane_t1

0x2200,	// (0x00082011) main_myfav_hc_pane_t2_ParamLimits

0x2200,	// (0x00082011) main_myfav_hc_pane_t2

0x2212,	// (0x00082023) main_myfav_hc_pane_t3_ParamLimits

0x2212,	// (0x00082023) main_myfav_hc_pane_t3

0xabde,	// (0x0008a9ef) main_myfav_hc_pane_t4_ParamLimits

0xabde,	// (0x0008a9ef) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0008f770) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0008f770) main_myfav_hc_pane_t

0x168b,	// (0x0008149c) bg_myfav_hc_instruction_pane_g1

0x2224,	// (0x00082035) cell_myfav_contact_pane_g1_ParamLimits

0x2224,	// (0x00082035) cell_myfav_contact_pane_g1

0x2224,	// (0x00082035) cell_myfav_contact_pane_g2_ParamLimits

0x2224,	// (0x00082035) cell_myfav_contact_pane_g2

0x2230,	// (0x00082041) cell_myfav_contact_pane_g3_ParamLimits

0x2230,	// (0x00082041) cell_myfav_contact_pane_g3

0x1988,	// (0x00081799) cell_myfav_contact_pane_g4_ParamLimits

0x1988,	// (0x00081799) cell_myfav_contact_pane_g4

0x223d,	// (0x0008204e) cell_myfav_contact_pane_g5_ParamLimits

0x223d,	// (0x0008204e) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0008f77b) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0008f77b) cell_myfav_contact_pane_g

0xabaf,	// (0x0008a9c0) main_myfav_hc_pane_g3_ParamLimits

0xabaf,	// (0x0008a9c0) main_myfav_hc_pane_g3

0x57e5,	// (0x000855f6) popup_adpt_find_window

0xac08,	// (0x0008aa19) afind_page_pane_ParamLimits

0xac08,	// (0x0008aa19) afind_page_pane

0xac15,	// (0x0008aa26) aid_size_cell_afind_ParamLimits

0xac15,	// (0x0008aa26) aid_size_cell_afind

0xac2f,	// (0x0008aa40) bg_popup_sub_pane_cp09_ParamLimits

0xac2f,	// (0x0008aa40) bg_popup_sub_pane_cp09

0xac3c,	// (0x0008aa4d) find_pane_cp01_ParamLimits

0xac3c,	// (0x0008aa4d) find_pane_cp01

0x2249,	// (0x0008205a) grid_afind_control_pane_ParamLimits

0x2249,	// (0x0008205a) grid_afind_control_pane

0xac49,	// (0x0008aa5a) grid_afind_pane_ParamLimits

0xac49,	// (0x0008aa5a) grid_afind_pane

0xac65,	// (0x0008aa76) cell_afind_pane_ParamLimits

0xac65,	// (0x0008aa76) cell_afind_pane

0x168b,	// (0x0008149c) afind_page_pane_g1

0xacad,	// (0x0008aabe) afind_page_pane_g2

0xacb6,	// (0x0008aac7) afind_page_pane_g3

0x0002,

0xf975,	// (0x0008f786) afind_page_pane_g

0xacbf,	// (0x0008aad0) afind_page_pane_t1

0x225d,	// (0x0008206e) cell_afind_grid_control_pane_ParamLimits

0x225d,	// (0x0008206e) cell_afind_grid_control_pane

0x1fd5,	// (0x00081de6) bg_button_pane_cp69_ParamLimits

0x1fd5,	// (0x00081de6) bg_button_pane_cp69

0xacdf,	// (0x0008aaf0) cell_afind_pane_g1_ParamLimits

0xacdf,	// (0x0008aaf0) cell_afind_pane_g1

0xacec,	// (0x0008aafd) cell_afind_pane_t1_ParamLimits

0xacec,	// (0x0008aafd) cell_afind_pane_t1

0xe2ca,	// (0x0008e0db) bg_button_pane_cp72

0x226c,	// (0x0008207d) cell_afind_grid_control_pane_g1

0x82e3,	// (0x000880f4) aid_image_placing_area_ParamLimits

0x82e3,	// (0x000880f4) aid_image_placing_area

0x1c87,	// (0x00081a98) field_vitu_entry_pane_g1_ParamLimits

0x1c87,	// (0x00081a98) field_vitu_entry_pane_g1

0x1c93,	// (0x00081aa4) field_vitu_entry_pane_g2_ParamLimits

0x1c93,	// (0x00081aa4) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0008f637) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0008f637) field_vitu_entry_pane_g

0x9e66,	// (0x00089c77) cell_vitu_itu_pane_g1_ParamLimits

0x9ea8,	// (0x00089cb9) cell_vitu_itu_pane_t3_ParamLimits

0x9ea8,	// (0x00089cb9) cell_vitu_itu_pane_t3

0x1f85,	// (0x00081d96) mp4_progress_pane_t1_ParamLimits

0x1f9e,	// (0x00081daf) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0008f6cc) mp4_progress_pane_t_ParamLimits

0x1fb7,	// (0x00081dc8) mup_progress_pane_cp04_ParamLimits

0xabf2,	// (0x0008aa03) main_myfav_hc_pane_t5_ParamLimits

0xabf2,	// (0x0008aa03) main_myfav_hc_pane_t5

0x5552,	// (0x00085363) aid_zoom_text_primary

0x57e5,	// (0x000855f6) popup_adpt_find_window_ParamLimits

0x8765,	// (0x00088576) main_cam_set_pane

0xa664,	// (0x0008a475) cam4_zoom_pane_ParamLimits

0xa664,	// (0x0008a475) cam4_zoom_pane

0xacfe,	// (0x0008ab0f) main_cam_set_pane_g1_ParamLimits

0xacfe,	// (0x0008ab0f) main_cam_set_pane_g1

0xad0c,	// (0x0008ab1d) main_cam_set_pane_g2_ParamLimits

0xad0c,	// (0x0008ab1d) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0008f78d) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0008f78d) main_cam_set_pane_g

0xad18,	// (0x0008ab29) main_cam_set_pane_t1_ParamLimits

0xad18,	// (0x0008ab29) main_cam_set_pane_t1

0xad34,	// (0x0008ab45) main_cset_listscroll_pane_ParamLimits

0xad34,	// (0x0008ab45) main_cset_listscroll_pane

0xad5f,	// (0x0008ab70) main_cset_slider_pane_ParamLimits

0xad5f,	// (0x0008ab70) main_cset_slider_pane

0x227d,	// (0x0008208e) main_cset_list_pane_ParamLimits

0x227d,	// (0x0008208e) main_cset_list_pane

0x228d,	// (0x0008209e) scroll_pane_cp028

0xad7e,	// (0x0008ab8f) aid_area_touch_slider

0xad9a,	// (0x0008abab) cset_slider_pane

0xadc4,	// (0x0008abd5) main_cset_slider_pane_g1

0xadd9,	// (0x0008abea) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0008f792) main_cset_slider_pane_g

0x22c6,	// (0x000820d7) main_cset_slider_pane_t1

0xae9b,	// (0x0008acac) main_cset_slider_pane_t2

0xaeb5,	// (0x0008acc6) main_cset_slider_pane_t3

0xaecf,	// (0x0008ace0) main_cset_slider_pane_t4

0xaee9,	// (0x0008acfa) main_cset_slider_pane_t5

0xaf07,	// (0x0008ad18) main_cset_slider_pane_t6

0xaf1e,	// (0x0008ad2f) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x0008f7b7) main_cset_slider_pane_t

0xb02a,	// (0x0008ae3b) cset_list_set_pane_ParamLimits

0xb02a,	// (0x0008ae3b) cset_list_set_pane

0xb040,	// (0x0008ae51) aid_position_infowindow_above

0xb048,	// (0x0008ae59) aid_position_infowindow_below

0x44f3,	// (0x00084304) cset_list_set_pane_g1_ParamLimits

0x44f3,	// (0x00084304) cset_list_set_pane_g1

0x2366,	// (0x00082177) cset_list_set_pane_g3_ParamLimits

0x2366,	// (0x00082177) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0008f7d6) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0008f7d6) cset_list_set_pane_g

0x2375,	// (0x00082186) cset_list_set_pane_t1_ParamLimits

0x2375,	// (0x00082186) cset_list_set_pane_t1

0x0011,	// (0x0007fe22) list_highlight_pane_cp021_ParamLimits

0x0011,	// (0x0007fe22) list_highlight_pane_cp021

0xecf2,	// (0x0008eb03) cset_slider_pane_g1

0xed04,	// (0x0008eb15) cset_slider_pane_g2

0xecfb,	// (0x0008eb0c) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x0008f7db) cset_slider_pane_g

0xb050,	// (0x0008ae61) aid_area_touch_cam4_zoom

0xb058,	// (0x0008ae69) cam4_zoom_cont_pane

0xb060,	// (0x0008ae71) cam4_zoom_pane_g1

0xb068,	// (0x0008ae79) cam4_zoom_pane_g2

0xb070,	// (0x0008ae81) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0008f7e2) cam4_zoom_pane_g

0xb078,	// (0x0008ae89) cam4_zoom_cont_pane_g1

0xb081,	// (0x0008ae92) cam4_zoom_cont_pane_g2

0xb08a,	// (0x0008ae9b) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x0008f7e9) cam4_zoom_cont_pane_g

0xa551,	// (0x0008a362) call4_image_pane_ParamLimits

0xa551,	// (0x0008a362) call4_image_pane

0x1fe1,	// (0x00081df2) call4_windows_conf_pane_ParamLimits

0x2022,	// (0x00081e33) popup_call4_audio_in_window_ParamLimits

0x2022,	// (0x00081e33) popup_call4_audio_in_window

0xf0ce,	// (0x0008eedf) bg_popup_call2_act_pane_cp02

0x2098,	// (0x00081ea9) call4_list_conf_pane

0x168b,	// (0x0008149c) call4_image_pane_g1

0x168b,	// (0x0008149c) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x0008f4fd) call4_image_pane_g

0x23a5,	// (0x000821b6) list_single_graphic_popup_conf4_pane_ParamLimits

0x23a5,	// (0x000821b6) list_single_graphic_popup_conf4_pane

0xf0ce,	// (0x0008eedf) list_highlight_pane_cp022

0x23b8,	// (0x000821c9) list_single_graphic_popup_conf4_pane_g1

0xe9d1,	// (0x0008e7e2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x0008f7f0) list_single_graphic_popup_conf4_pane_g

0x23c0,	// (0x000821d1) list_single_graphic_popup_conf4_pane_t1

0x679b,	// (0x000865ac) popup_vtel_slider_window_ParamLimits

0x679b,	// (0x000865ac) popup_vtel_slider_window

0x1fc3,	// (0x00081dd4) dialer2_ne_pane_t2_ParamLimits

0x1fc3,	// (0x00081dd4) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0008f6d1) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0008f6d1) dialer2_ne_pane_t

0x0011,	// (0x0007fe22) bg_popup_sub_pane_cp010_ParamLimits

0x0011,	// (0x0007fe22) bg_popup_sub_pane_cp010

0xb093,	// (0x0008aea4) popup_vtel_slider_window_g1_ParamLimits

0xb093,	// (0x0008aea4) popup_vtel_slider_window_g1

0xb09f,	// (0x0008aeb0) popup_vtel_slider_window_g2_ParamLimits

0xb09f,	// (0x0008aeb0) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0008f7f5) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0008f7f5) popup_vtel_slider_window_g

0xb0e7,	// (0x0008aef8) vtel_slider_pane_ParamLimits

0xb0e7,	// (0x0008aef8) vtel_slider_pane

0xb0f6,	// (0x0008af07) vtel_slider_pane_g1_ParamLimits

0xb0f6,	// (0x0008af07) vtel_slider_pane_g1

0xb103,	// (0x0008af14) vtel_slider_pane_g2_ParamLimits

0xb103,	// (0x0008af14) vtel_slider_pane_g2

0xb110,	// (0x0008af21) vtel_slider_pane_g3_ParamLimits

0xb110,	// (0x0008af21) vtel_slider_pane_g3

0xb0f6,	// (0x0008af07) vtel_slider_pane_g4_ParamLimits

0xb0f6,	// (0x0008af07) vtel_slider_pane_g4

0xb11d,	// (0x0008af2e) vtel_slider_pane_g5_ParamLimits

0xb11d,	// (0x0008af2e) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x0008f7fe) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x0008f7fe) vtel_slider_pane_g

0x58ec,	// (0x000856fd) main_gallery2_pane

0xa8c6,	// (0x0008a6d7) aid_size_row_itut2_dropdow_list_ParamLimits

0xa8c6,	// (0x0008a6d7) aid_size_row_itut2_dropdow_list

0xa934,	// (0x0008a745) grid_vitu2_function_top_pane_ParamLimits

0xa934,	// (0x0008a745) grid_vitu2_function_top_pane

0xa98a,	// (0x0008a79b) popup_vitu2_dropdown_list_window_ParamLimits

0xa98a,	// (0x0008a79b) popup_vitu2_dropdown_list_window

0xa9aa,	// (0x0008a7bb) popup_vitu2_match_list_window

0xb12a,	// (0x0008af3b) cell_vitu2_function_top_pane_ParamLimits

0xb12a,	// (0x0008af3b) cell_vitu2_function_top_pane

0xb14a,	// (0x0008af5b) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb14a,	// (0x0008af5b) cell_vitu2_function_top_pane_cp01

0xb168,	// (0x0008af79) cell_vitu2_function_top_wide_pane_ParamLimits

0xb168,	// (0x0008af79) cell_vitu2_function_top_wide_pane

0x8765,	// (0x00088576) bg_button_pane_cp012

0xb186,	// (0x0008af97) cell_vitu2_function_top_pane_g1

0xb195,	// (0x0008afa6) bg_button_pane_cp013_ParamLimits

0xb195,	// (0x0008afa6) bg_button_pane_cp013

0xb1b1,	// (0x0008afc2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb1b1,	// (0x0008afc2) cell_vitu2_function_top_wide_pane_g1

0x58d2,	// (0x000856e3) bg_popup_sub_pane_cp20

0xb1c9,	// (0x0008afda) list_vitu2_match_list_pane

0x2173,	// (0x00081f84) bg_popup_sub_pane_cp20_g1

0x217b,	// (0x00081f8c) bg_popup_sub_pane_cp20_g2

0xe4d1,	// (0x0008e2e2) bg_popup_sub_pane_cp20_g3

0x2183,	// (0x00081f94) bg_popup_sub_pane_cp20_g4

0xe4b1,	// (0x0008e2c2) bg_popup_sub_pane_cp20_g5

0x23e4,	// (0x000821f5) bg_popup_sub_pane_cp20_g6

0x2193,	// (0x00081fa4) bg_popup_sub_pane_cp20_g7

0x219b,	// (0x00081fac) bg_popup_sub_pane_cp20_g8

0x21a3,	// (0x00081fb4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x0008f809) bg_popup_sub_pane_cp20_g

0xb1e1,	// (0x0008aff2) list_vitu2_match_list_item_pane_ParamLimits

0xb1e1,	// (0x0008aff2) list_vitu2_match_list_item_pane

0xb1f3,	// (0x0008b004) list_vitu2_match_list_item_pane_t1

0x58ec,	// (0x000856fd) bg_popup_sub_pane_cp21

0xb230,	// (0x0008b041) grid_vitu2_dropdown_list_pane

0xb238,	// (0x0008b049) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb238,	// (0x0008b049) cell_vitu2_dropdown_list_char_pane

0xb259,	// (0x0008b06a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb259,	// (0x0008b06a) cell_vitu2_dropdown_list_ctrl_pane

0x2416,	// (0x00082227) cell_vitu2_dropdown_list_char_pane_g1

0x240d,	// (0x0008221e) cell_vitu2_dropdown_list_char_pane_g2

0x2404,	// (0x00082215) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0008f826) cell_vitu2_dropdown_list_char_pane_g

0xb285,	// (0x0008b096) cell_vitu2_dropdown_list_char_pane_t1

0xb293,	// (0x0008b0a4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb293,	// (0x0008b0a4) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb2a3,	// (0x0008b0b4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb2a3,	// (0x0008b0b4) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb2b4,	// (0x0008b0c5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb2b4,	// (0x0008b0c5) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb2c4,	// (0x0008b0d5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb2c4,	// (0x0008b0d5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa6f8,	// (0x0008a509) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa6f8,	// (0x0008a509) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0008f82d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0008f82d) cell_vitu2_dropdown_list_ctrl_pane_g

0xb2e0,	// (0x0008b0f1) aid_size_cell_gallery2_ParamLimits

0xb2e0,	// (0x0008b0f1) aid_size_cell_gallery2

0xb2ee,	// (0x0008b0ff) grid_gallery2_pane_ParamLimits

0xb2ee,	// (0x0008b0ff) grid_gallery2_pane

0xb2fd,	// (0x0008b10e) scroll_pane_cp029_ParamLimits

0xb2fd,	// (0x0008b10e) scroll_pane_cp029

0xb309,	// (0x0008b11a) cell_gallery2_pane_ParamLimits

0xb309,	// (0x0008b11a) cell_gallery2_pane

0x241f,	// (0x00082230) cell_gallery2_pane_g2

0x39d3,	// (0x000837e4) cell_gallery2_pane_g3

0x2429,	// (0x0008223a) cell_gallery2_pane_g4

0x2431,	// (0x00082242) cell_gallery2_pane_g5

0xebbc,	// (0x0008e9cd) grid_highlight_pane_cp10

0xa9aa,	// (0x0008a7bb) popup_vitu2_match_list_window_ParamLimits

0xa9be,	// (0x0008a7cf) popup_vitu2_query_window_ParamLimits

0xa9be,	// (0x0008a7cf) popup_vitu2_query_window

0x58ec,	// (0x000856fd) bg_vitu2_candi_button_pane

0x2416,	// (0x00082227) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x240d,	// (0x0008221e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2404,	// (0x00082215) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb337,	// (0x0008b148) bg_button_pane_cp015

0xb349,	// (0x0008b15a) bg_button_pane_cp016

0xb35c,	// (0x0008b16d) bg_button_pane_cp017

0x11f2,	// (0x00081003) bg_popup_sub_pane_cp22

0x2439,	// (0x0008224a) popup_vitu2_query_window_g1

0xb3a1,	// (0x0008b1b2) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x0008f838) popup_vitu2_query_window_g

0xb3be,	// (0x0008b1cf) popup_vitu2_query_window_t1_ParamLimits

0xb3be,	// (0x0008b1cf) popup_vitu2_query_window_t1

0xb3f1,	// (0x0008b202) popup_vitu2_query_window_t2_ParamLimits

0xb3f1,	// (0x0008b202) popup_vitu2_query_window_t2

0xb403,	// (0x0008b214) popup_vitu2_query_window_t3_ParamLimits

0xb403,	// (0x0008b214) popup_vitu2_query_window_t3

0xb42b,	// (0x0008b23c) popup_vitu2_query_window_t4_ParamLimits

0xb42b,	// (0x0008b23c) popup_vitu2_query_window_t4

0xb44c,	// (0x0008b25d) popup_vitu2_query_window_t5_ParamLimits

0xb44c,	// (0x0008b25d) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0008f83f) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0008f83f) popup_vitu2_query_window_t

0x2275,	// (0x00082086) main_cset_text_pane

0xad7e,	// (0x0008ab8f) aid_area_touch_slider_ParamLimits

0xad9a,	// (0x0008abab) cset_slider_pane_ParamLimits

0xadc4,	// (0x0008abd5) main_cset_slider_pane_g1_ParamLimits

0xadd9,	// (0x0008abea) main_cset_slider_pane_g2_ParamLimits

0x2296,	// (0x000820a7) main_cset_slider_pane_g3_ParamLimits

0x2296,	// (0x000820a7) main_cset_slider_pane_g3

0xadee,	// (0x0008abff) main_cset_slider_pane_g4_ParamLimits

0xadee,	// (0x0008abff) main_cset_slider_pane_g4

0xadfd,	// (0x0008ac0e) main_cset_slider_pane_g5_ParamLimits

0xadfd,	// (0x0008ac0e) main_cset_slider_pane_g5

0xae0b,	// (0x0008ac1c) main_cset_slider_pane_g6_ParamLimits

0xae0b,	// (0x0008ac1c) main_cset_slider_pane_g6

0xf981,	// (0x0008f792) main_cset_slider_pane_g_ParamLimits

0x22c6,	// (0x000820d7) main_cset_slider_pane_t1_ParamLimits

0xae9b,	// (0x0008acac) main_cset_slider_pane_t2_ParamLimits

0xaeb5,	// (0x0008acc6) main_cset_slider_pane_t3_ParamLimits

0xaecf,	// (0x0008ace0) main_cset_slider_pane_t4_ParamLimits

0xaee9,	// (0x0008acfa) main_cset_slider_pane_t5_ParamLimits

0xaf07,	// (0x0008ad18) main_cset_slider_pane_t6_ParamLimits

0xaf1e,	// (0x0008ad2f) main_cset_slider_pane_t7_ParamLimits

0xaf4c,	// (0x0008ad5d) main_cset_slider_pane_t8_ParamLimits

0xaf4c,	// (0x0008ad5d) main_cset_slider_pane_t8

0xaf74,	// (0x0008ad85) main_cset_slider_pane_t9_ParamLimits

0xaf74,	// (0x0008ad85) main_cset_slider_pane_t9

0xaf9c,	// (0x0008adad) main_cset_slider_pane_t10_ParamLimits

0xaf9c,	// (0x0008adad) main_cset_slider_pane_t10

0xafc4,	// (0x0008add5) main_cset_slider_pane_t11_ParamLimits

0xafc4,	// (0x0008add5) main_cset_slider_pane_t11

0xafee,	// (0x0008adff) main_cset_slider_pane_t12_ParamLimits

0xafee,	// (0x0008adff) main_cset_slider_pane_t12

0xb00b,	// (0x0008ae1c) main_cset_slider_pane_t13_ParamLimits

0xb00b,	// (0x0008ae1c) main_cset_slider_pane_t13

0xf9a6,	// (0x0008f7b7) main_cset_slider_pane_t_ParamLimits

0xf0ce,	// (0x0008eedf) bg_popup_sub_pane_cp011

0x2445,	// (0x00082256) main_cset_text_pane_g1

0x244d,	// (0x0008225e) main_cset_text_pane_t1

0x245b,	// (0x0008226c) main_cset_text_pane_t2

0x2469,	// (0x0008227a) main_cset_text_pane_t3

0x2477,	// (0x00082288) main_cset_text_pane_t4

0x2485,	// (0x00082296) main_cset_text_pane_t5

0x2493,	// (0x000822a4) main_cset_text_pane_t6

0x24a1,	// (0x000822b2) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0008f84e) main_cset_text_pane_t

0x58ec,	// (0x000856fd) main_cam4_burst_pane

0x58ec,	// (0x000856fd) main_cam5_pane

0xaccd,	// (0x0008aade) bg_button_pane_cp019

0xacd6,	// (0x0008aae7) bg_button_pane_cp020

0x22a2,	// (0x000820b3) main_cset_slider_pane_g7_ParamLimits

0x22a2,	// (0x000820b3) main_cset_slider_pane_g7

0x22ae,	// (0x000820bf) main_cset_slider_pane_g8_ParamLimits

0x22ae,	// (0x000820bf) main_cset_slider_pane_g8

0xae1f,	// (0x0008ac30) main_cset_slider_pane_g9_ParamLimits

0xae1f,	// (0x0008ac30) main_cset_slider_pane_g9

0xae2b,	// (0x0008ac3c) main_cset_slider_pane_g10_ParamLimits

0xae2b,	// (0x0008ac3c) main_cset_slider_pane_g10

0xae37,	// (0x0008ac48) main_cset_slider_pane_g11_ParamLimits

0xae37,	// (0x0008ac48) main_cset_slider_pane_g11

0xae43,	// (0x0008ac54) main_cset_slider_pane_g12_ParamLimits

0xae43,	// (0x0008ac54) main_cset_slider_pane_g12

0xae4f,	// (0x0008ac60) main_cset_slider_pane_g13_ParamLimits

0xae4f,	// (0x0008ac60) main_cset_slider_pane_g13

0xae5b,	// (0x0008ac6c) main_cset_slider_pane_g14_ParamLimits

0xae5b,	// (0x0008ac6c) main_cset_slider_pane_g14

0xae67,	// (0x0008ac78) main_cset_slider_pane_g15_ParamLimits

0xae67,	// (0x0008ac78) main_cset_slider_pane_g15

0x22f4,	// (0x00082105) main_cset_slider_pane_t14_ParamLimits

0x22f4,	// (0x00082105) main_cset_slider_pane_t14

0x232d,	// (0x0008213e) main_cset_slider_pane_t15_ParamLimits

0x232d,	// (0x0008213e) main_cset_slider_pane_t15

0xb4c3,	// (0x0008b2d4) aid_cam4_burst_size_cell_ParamLimits

0xb4c3,	// (0x0008b2d4) aid_cam4_burst_size_cell

0xb4df,	// (0x0008b2f0) grid_cam4_burst_pane_ParamLimits

0xb4df,	// (0x0008b2f0) grid_cam4_burst_pane

0xb50f,	// (0x0008b320) linegrid_cam4_burst_pane_ParamLimits

0xb50f,	// (0x0008b320) linegrid_cam4_burst_pane

0xb52f,	// (0x0008b340) scroll_pane_cp30_ParamLimits

0xb52f,	// (0x0008b340) scroll_pane_cp30

0xb53b,	// (0x0008b34c) cell_cam4_burst_pane_ParamLimits

0xb53b,	// (0x0008b34c) cell_cam4_burst_pane

0x24bb,	// (0x000822cc) linegrid_cam4_burst_pane_g1_ParamLimits

0x24bb,	// (0x000822cc) linegrid_cam4_burst_pane_g1

0xb577,	// (0x0008b388) linegrid_cam4_burst_pane_g2_ParamLimits

0xb577,	// (0x0008b388) linegrid_cam4_burst_pane_g2

0x24c8,	// (0x000822d9) linegrid_cam4_burst_pane_g3_ParamLimits

0x24c8,	// (0x000822d9) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0008f85d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0008f85d) linegrid_cam4_burst_pane_g

0xb588,	// (0x0008b399) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb588,	// (0x0008b399) linegrid_cam4_burst_pane_g3_copy1

0x24d5,	// (0x000822e6) linegrid_cam4_burst_pane_g4_ParamLimits

0x24d5,	// (0x000822e6) linegrid_cam4_burst_pane_g4

0xb5a2,	// (0x0008b3b3) linegrid_cam4_burst_pane_g5_ParamLimits

0xb5a2,	// (0x0008b3b3) linegrid_cam4_burst_pane_g5

0xb5b3,	// (0x0008b3c4) linegrid_cam4_burst_pane_g6_ParamLimits

0xb5b3,	// (0x0008b3c4) linegrid_cam4_burst_pane_g6

0x24e2,	// (0x000822f3) linegrid_cam4_burst_pane_g7_ParamLimits

0x24e2,	// (0x000822f3) linegrid_cam4_burst_pane_g7

0xb5c4,	// (0x0008b3d5) cell_cam4_burst_pane_g1

0x24fb,	// (0x0008230c) main_cam5_pane_t1_ParamLimits

0x24fb,	// (0x0008230c) main_cam5_pane_t1

0x250d,	// (0x0008231e) main_cam5_pane_t2_ParamLimits

0x250d,	// (0x0008231e) main_cam5_pane_t2

0x251f,	// (0x00082330) main_cam5_pane_t3_ParamLimits

0x251f,	// (0x00082330) main_cam5_pane_t3

0x2531,	// (0x00082342) main_cam5_pane_t4_ParamLimits

0x2531,	// (0x00082342) main_cam5_pane_t4

0x2549,	// (0x0008235a) main_cam5_pane_t5_ParamLimits

0x2549,	// (0x0008235a) main_cam5_pane_t5

0x255d,	// (0x0008236e) main_cam5_pane_t6_ParamLimits

0x255d,	// (0x0008236e) main_cam5_pane_t6

0x2571,	// (0x00082382) main_cam5_pane_t7_ParamLimits

0x2571,	// (0x00082382) main_cam5_pane_t7

0x2583,	// (0x00082394) main_cam5_pane_t8_ParamLimits

0x2583,	// (0x00082394) main_cam5_pane_t8

0x259f,	// (0x000823b0) main_cam5_pane_t9_ParamLimits

0x259f,	// (0x000823b0) main_cam5_pane_t9

0x25b1,	// (0x000823c2) main_cam5_pane_t10_ParamLimits

0x25b1,	// (0x000823c2) main_cam5_pane_t10

0x25c3,	// (0x000823d4) main_cam5_pane_t11_ParamLimits

0x25c3,	// (0x000823d4) main_cam5_pane_t11

0x25d5,	// (0x000823e6) main_cam5_pane_t12_ParamLimits

0x25d5,	// (0x000823e6) main_cam5_pane_t12

0x25ea,	// (0x000823fb) main_cam5_pane_t13_ParamLimits

0x25ea,	// (0x000823fb) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0008f869) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0008f869) main_cam5_pane_t

0x589b,	// (0x000856ac) popup_scut_keymap_window_ParamLimits

0x589b,	// (0x000856ac) popup_scut_keymap_window

0xb5d7,	// (0x0008b3e8) aid_size_cell_brow_shortcut

0xebbc,	// (0x0008e9cd) bg_popup_window_pane_cp010

0xb5e3,	// (0x0008b3f4) grid_scut_pane

0xb5ef,	// (0x0008b400) cell_scut_pane_ParamLimits

0xb5ef,	// (0x0008b400) cell_scut_pane

0xb606,	// (0x0008b417) cell_scut_pane_g1

0x2607,	// (0x00082418) cell_scut_pane_t1

0x2616,	// (0x00082427) cell_scut_pane_t2

0xb60f,	// (0x0008b420) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0008f884) cell_scut_pane_t

0x94d0,	// (0x000892e1) main_mup3_pane_g8_ParamLimits

0x94d0,	// (0x000892e1) main_mup3_pane_g8

0xa8d4,	// (0x0008a6e5) area_vitu2_query_pane_ParamLimits

0xa8d4,	// (0x0008a6e5) area_vitu2_query_pane

0xb36f,	// (0x0008b180) input_focus_pane_cp08

0x2625,	// (0x00082436) area_vitu2_query_pane_g1

0xb61d,	// (0x0008b42e) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0008f88b) area_vitu2_query_pane_g

0xb62e,	// (0x0008b43f) area_vitu2_query_pane_t1_ParamLimits

0xb62e,	// (0x0008b43f) area_vitu2_query_pane_t1

0xb642,	// (0x0008b453) area_vitu2_query_pane_t2_ParamLimits

0xb642,	// (0x0008b453) area_vitu2_query_pane_t2

0xb656,	// (0x0008b467) area_vitu2_query_pane_t3_ParamLimits

0xb656,	// (0x0008b467) area_vitu2_query_pane_t3

0x2631,	// (0x00082442) area_vitu2_query_pane_t4_ParamLimits

0x2631,	// (0x00082442) area_vitu2_query_pane_t4

0x2659,	// (0x0008246a) area_vitu2_query_pane_t5_ParamLimits

0x2659,	// (0x0008246a) area_vitu2_query_pane_t5

0x2681,	// (0x00082492) area_vitu2_query_pane_t6_ParamLimits

0x2681,	// (0x00082492) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0008f890) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0008f890) area_vitu2_query_pane_t

0xb67e,	// (0x0008b48f) bg_button_pane_cp018

0xb68c,	// (0x0008b49d) bg_button_pane_cp021

0xb698,	// (0x0008b4a9) bg_button_pane_cp022

0xb6a9,	// (0x0008b4ba) input_focus_pane_cp09

0x78fd,	// (0x0008770e) aid_size_touch_mv_arrow_left

0x7926,	// (0x00087737) aid_size_touch_mv_arrow_right

0xae7f,	// (0x0008ac90) main_cset_slider_pane_g16_ParamLimits

0xae7f,	// (0x0008ac90) main_cset_slider_pane_g16

0xae8d,	// (0x0008ac9e) main_cset_slider_pane_g17_ParamLimits

0xae8d,	// (0x0008ac9e) main_cset_slider_pane_g17

0xb5c4,	// (0x0008b3d5) cell_cam4_burst_pane_g1_ParamLimits

0xf0ce,	// (0x0008eedf) compa_mode_pane

0xb0ab,	// (0x0008aebc) popup_vtel_slider_window_g3_ParamLimits

0xb0ab,	// (0x0008aebc) popup_vtel_slider_window_g3

0xb0bf,	// (0x0008aed0) popup_vtel_slider_window_g4_ParamLimits

0xb0bf,	// (0x0008aed0) popup_vtel_slider_window_g4

0xb0d3,	// (0x0008aee4) popup_vtel_slider_window_t1_ParamLimits

0xb0d3,	// (0x0008aee4) popup_vtel_slider_window_t1

0x58ec,	// (0x000856fd) main_cl_pane

0x8803,	// (0x00088614) popup_imed_adjust2_window_ParamLimits

0x11f2,	// (0x00081003) bg_tb_trans_pane_cp05_ParamLimits

0x1bbc,	// (0x000819cd) popup_imed_adjust2_window_g1_ParamLimits

0x1bcb,	// (0x000819dc) popup_imed_adjust2_window_g2_ParamLimits

0x1bcb,	// (0x000819dc) popup_imed_adjust2_window_g2

0x1bd7,	// (0x000819e8) popup_imed_adjust2_window_g3_ParamLimits

0x1bd7,	// (0x000819e8) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0008f5fb) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0008f5fb) popup_imed_adjust2_window_g

0x1be3,	// (0x000819f4) popup_imed_adjust2_window_t1_ParamLimits

0x1bfb,	// (0x00081a0c) slider_imed_adjust_pane_ParamLimits

0x1c0f,	// (0x00081a20) slider_imed_adjust_pane_g1_ParamLimits

0x1c1f,	// (0x00081a30) slider_imed_adjust_pane_g2_ParamLimits

0x1c2f,	// (0x00081a40) slider_imed_adjust_pane_g3_ParamLimits

0x1c40,	// (0x00081a51) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0008f602) slider_imed_adjust_pane_g_ParamLimits

0xa60d,	// (0x0008a41e) aid_touch_area_cam4_ParamLimits

0xa60d,	// (0x0008a41e) aid_touch_area_cam4

0xa61d,	// (0x0008a42e) battery_pane_cp01

0xa6a4,	// (0x0008a4b5) main_camera4_pane_g6_ParamLimits

0xa6a4,	// (0x0008a4b5) main_camera4_pane_g6

0xa6c2,	// (0x0008a4d3) main_camera4_pane_t2_ParamLimits

0xa6c2,	// (0x0008a4d3) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0008f705) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0008f705) main_camera4_pane_t

0xa757,	// (0x0008a568) aid_touch_area_vid4_ParamLimits

0xa757,	// (0x0008a568) aid_touch_area_vid4

0xa797,	// (0x0008a5a8) main_video4_pane_g5_ParamLimits

0xa797,	// (0x0008a5a8) main_video4_pane_g5

0xa7bb,	// (0x0008a5cc) vid4_progress_pane_ParamLimits

0xa7bb,	// (0x0008a5cc) vid4_progress_pane

0x22ba,	// (0x000820cb) main_cset_slider_pane_g18_ParamLimits

0x22ba,	// (0x000820cb) main_cset_slider_pane_g18

0x24ef,	// (0x00082300) cell_cam4_burst_pane_g2_ParamLimits

0x24ef,	// (0x00082300) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0008f864) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0008f864) cell_cam4_burst_pane_g

0xb6ba,	// (0x0008b4cb) bg_cl_pane_ParamLimits

0xb6ba,	// (0x0008b4cb) bg_cl_pane

0xb6c6,	// (0x0008b4d7) cl_header_pane_ParamLimits

0xb6c6,	// (0x0008b4d7) cl_header_pane

0xb6d2,	// (0x0008b4e3) cl_listscroll_pane_ParamLimits

0xb6d2,	// (0x0008b4e3) cl_listscroll_pane

0x26cd,	// (0x000824de) bg_cl_pane_g1

0x26d5,	// (0x000824e6) bg_cl_pane_g2

0x26dd,	// (0x000824ee) bg_cl_pane_g3

0x26e5,	// (0x000824f6) bg_cl_pane_g4

0x26ed,	// (0x000824fe) bg_cl_pane_g5

0x26f5,	// (0x00082506) bg_cl_pane_g6

0x26fd,	// (0x0008250e) bg_cl_pane_g7

0x2705,	// (0x00082516) bg_cl_pane_g8

0x270d,	// (0x0008251e) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0008f89f) bg_cl_pane_g

0xb6de,	// (0x0008b4ef) aid_height_cl_leading_ParamLimits

0xb6de,	// (0x0008b4ef) aid_height_cl_leading

0xb6ea,	// (0x0008b4fb) aid_height_cl_text_ParamLimits

0xb6ea,	// (0x0008b4fb) aid_height_cl_text

0x9de6,	// (0x00089bf7) bg_cl_header_pane_ParamLimits

0x9de6,	// (0x00089bf7) bg_cl_header_pane

0xb702,	// (0x0008b513) cl_header_pane_g1_ParamLimits

0xb702,	// (0x0008b513) cl_header_pane_g1

0xb70f,	// (0x0008b520) cl_header_pane_t1_ParamLimits

0xb70f,	// (0x0008b520) cl_header_pane_t1

0x2715,	// (0x00082526) cl_list_pane

0x228d,	// (0x0008209e) hc_scroll_pane_cp01

0xe4b1,	// (0x0008e2c2) bg_cl_header_pane_g1

0x2173,	// (0x00081f84) bg_cl_header_pane_g2

0xe4d1,	// (0x0008e2e2) bg_cl_header_pane_g3

0x2183,	// (0x00081f94) bg_cl_header_pane_g4

0x217b,	// (0x00081f8c) bg_cl_header_pane_g5

0x23e4,	// (0x000821f5) bg_cl_header_pane_g6

0x219b,	// (0x00081fac) bg_cl_header_pane_g7

0x21a3,	// (0x00081fb4) bg_cl_header_pane_g8

0x2193,	// (0x00081fa4) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0008f8b2) bg_cl_header_pane_g

0xb721,	// (0x0008b532) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb721,	// (0x0008b532) hc_cl_list_double_graphic_heading_pane

0xb732,	// (0x0008b543) hc_cl_list_single_graphic_pane_ParamLimits

0xb732,	// (0x0008b543) hc_cl_list_single_graphic_pane

0xb74b,	// (0x0008b55c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb74b,	// (0x0008b55c) hc_cl_list_single_graphic_pane_g1

0xb757,	// (0x0008b568) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb757,	// (0x0008b568) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0008f8c5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0008f8c5) hc_cl_list_single_graphic_pane_g

0xb76b,	// (0x0008b57c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb76b,	// (0x0008b57c) hc_cl_list_single_graphic_pane_t1

0xb74b,	// (0x0008b55c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb74b,	// (0x0008b55c) hc_cl_list_double_graphic_heading_pane_g1

0xb780,	// (0x0008b591) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb780,	// (0x0008b591) hc_cl_list_double_graphic_heading_pane_g2

0xb794,	// (0x0008b5a5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb794,	// (0x0008b5a5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0008f8ca) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0008f8ca) hc_cl_list_double_graphic_heading_pane_g

0xb7a8,	// (0x0008b5b9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb7a8,	// (0x0008b5b9) hc_cl_list_double_graphic_heading_pane_t1

0xb7bd,	// (0x0008b5ce) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb7bd,	// (0x0008b5ce) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0008f8d1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0008f8d1) hc_cl_list_double_graphic_heading_pane_t

0xb7da,	// (0x0008b5eb) vid4_progress_pane_g1

0xb7ec,	// (0x0008b5fd) vid4_progress_pane_g2

0xe776,	// (0x0008e587) vid4_progress_pane_g3

0xb7fc,	// (0x0008b60d) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0008f8d6) vid4_progress_pane_g

0xb81a,	// (0x0008b62b) vid4_progress_pane_t1

0xb82f,	// (0x0008b640) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0008f8e1) vid4_progress_pane_t

0xb85a,	// (0x0008b66b) wait_bar_pane_cp07

0x147e,	// (0x0008128f) blid_firmament_pane_ParamLimits

0x14c1,	// (0x000812d2) popup_blid_sat_info2_window_g1

0x14e5,	// (0x000812f6) popup_blid_sat_info2_window_t3

0x14f3,	// (0x00081304) popup_blid_sat_info2_window_t4

0x1501,	// (0x00081312) popup_blid_sat_info2_window_t5

0x150f,	// (0x00081320) popup_blid_sat_info2_window_t6

0x151f,	// (0x00081330) popup_blid_sat_info2_window_t7

0x152d,	// (0x0008133e) popup_blid_sat_info2_window_t8

0x153b,	// (0x0008134c) popup_blid_sat_info2_window_t9

0x1549,	// (0x0008135a) popup_blid_sat_info2_window_t10

0x160b,	// (0x0008141c) aid_firma_cardinal_ParamLimits

0x161f,	// (0x00081430) blid_firmament_pane_t1_ParamLimits

0x1636,	// (0x00081447) blid_firmament_pane_t2_ParamLimits

0x164d,	// (0x0008145e) blid_firmament_pane_t3_ParamLimits

0x1664,	// (0x00081475) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0008f4f4) blid_firmament_pane_t_ParamLimits

0x167b,	// (0x0008148c) blid_sat_info_pane_ParamLimits

0x8765,	// (0x00088576) main_cam_set_pane_ParamLimits

0x9c7a,	// (0x00089a8b) aid_size_cell_colour_35_ParamLimits

0x9c94,	// (0x00089aa5) aid_size_cell_colour_112_ParamLimits

0x9cab,	// (0x00089abc) aid_size_cell_effect_ParamLimits

0x0011,	// (0x0007fe22) bg_tb_trans_pane_cp02_ParamLimits

0xf0c2,	// (0x0008eed3) heading_imed_pane_ParamLimits

0x9cc5,	// (0x00089ad6) listscroll_imed_pane_ParamLimits

0x0824,	// (0x00080635) popup_call2_audio_first_window_g5_ParamLimits

0x0824,	// (0x00080635) popup_call2_audio_first_window_g5

0xa3bc,	// (0x0008a1cd) aid_size_touch_image3_arrow_left_ParamLimits

0xa3bc,	// (0x0008a1cd) aid_size_touch_image3_arrow_left

0xa3d2,	// (0x0008a1e3) aid_size_touch_image3_arrow_right_ParamLimits

0xa3d2,	// (0x0008a1e3) aid_size_touch_image3_arrow_right

0xb845,	// (0x0008b656) vid4_progress_pane_t3

0x9f71,	// (0x00089d82) main_hwr_training_symbol_option_pane_ParamLimits

0x9f71,	// (0x00089d82) main_hwr_training_symbol_option_pane

0x1ea9,	// (0x00081cba) popup_hwr_training_preview_window_ParamLimits

0x1ea9,	// (0x00081cba) popup_hwr_training_preview_window

0x9fd2,	// (0x00089de3) hwr_training_navi_pane_g5_ParamLimits

0x9fd2,	// (0x00089de3) hwr_training_navi_pane_g5

0x2161,	// (0x00081f72) popup_char_count_window

0x58d2,	// (0x000856e3) bg_popup_sub_pane_cp20_ParamLimits

0xb1c9,	// (0x0008afda) list_vitu2_match_list_pane_ParamLimits

0xb1d5,	// (0x0008afe6) vitu2_page_scroll_pane_ParamLimits

0xb1d5,	// (0x0008afe6) vitu2_page_scroll_pane

0x2770,	// (0x00082581) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2770,	// (0x00082581) list_single_hwr_training_symbol_option_pane

0x2783,	// (0x00082594) list_single_hwr_training_symbol_option_pane_g1

0x278b,	// (0x0008259c) list_single_hwr_training_symbol_option_pane_t1

0x2799,	// (0x000825aa) bg_button_pane_cp023

0x27a2,	// (0x000825b3) bg_button_pane_cp024

0xb86c,	// (0x0008b67d) vitu2_page_scroll_pane_g1

0xb874,	// (0x0008b685) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x0008f8e8) vitu2_page_scroll_pane_g

0xb87c,	// (0x0008b68d) vitu2_page_scroll_pane_t1

0x27d5,	// (0x000825e6) popup_char_count_window_g1

0x27de,	// (0x000825ef) popup_char_count_window_g2

0x27e7,	// (0x000825f8) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x0008f8ed) popup_char_count_window_g

0x27f0,	// (0x00082601) popup_char_count_window_t1

0x58ec,	// (0x000856fd) main_vded2_pane

0x1ba8,	// (0x000819b9) aid_size_cell_imed_line

0x1bb2,	// (0x000819c3) grid_imed_line_width_pane

0xa829,	// (0x0008a63a) vid4_indicators_pane_g4

0x27fe,	// (0x0008260f) cell_imed_line_width_pane_ParamLimits

0x27fe,	// (0x0008260f) cell_imed_line_width_pane

0x2812,	// (0x00082623) cell_imed_line_width_pane_g1

0x281b,	// (0x0008262c) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0008f8f4) cell_imed_line_width_pane_g

0xb88b,	// (0x0008b69c) main_vded2_pane_g1_ParamLimits

0xb88b,	// (0x0008b69c) main_vded2_pane_g1

0xb898,	// (0x0008b6a9) main_vded2_pane_g2_ParamLimits

0xb898,	// (0x0008b6a9) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x0008f8f9) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x0008f8f9) main_vded2_pane_g

0xb8a6,	// (0x0008b6b7) vded2_slider_pane_ParamLimits

0xb8a6,	// (0x0008b6b7) vded2_slider_pane

0xb8b3,	// (0x0008b6c4) aid_size_touch_vded2_end

0xb8bd,	// (0x0008b6ce) aid_size_touch_vded2_playhead

0x2823,	// (0x00082634) aid_size_touch_vded2_start

0x282b,	// (0x0008263c) vded2_slider_bg_pane

0x2834,	// (0x00082645) vded2_slider_pane_g1

0x283d,	// (0x0008264e) vded2_slider_pane_g2

0xb8c5,	// (0x0008b6d6) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x0008f8fe) vded2_slider_pane_g

0x2845,	// (0x00082656) vded2_slider_bg_pane_g1

0x284e,	// (0x0008265f) vded2_slider_bg_pane_g2

0x2857,	// (0x00082668) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x0008f905) vded2_slider_bg_pane_g

0x804d,	// (0x00087e5e) aid_postcard_touch_down_pane_ParamLimits

0x804d,	// (0x00087e5e) aid_postcard_touch_down_pane

0x805d,	// (0x00087e6e) aid_postcard_touch_up_pane_ParamLimits

0x805d,	// (0x00087e6e) aid_postcard_touch_up_pane

0x58ec,	// (0x000856fd) main_blid2_pane

0x878e,	// (0x0008859f) popup_blid2_search_window

0xf0ce,	// (0x0008eedf) blid2_gps_pane

0xf0ce,	// (0x0008eedf) blid2_navig_pane

0xf0ce,	// (0x0008eedf) blid2_search_pane

0xf0ce,	// (0x0008eedf) blid2_tripm_pane

0xb8ce,	// (0x0008b6df) blid2_search_pane_g1_ParamLimits

0xb8ce,	// (0x0008b6df) blid2_search_pane_g1

0xb8de,	// (0x0008b6ef) blid2_search_pane_t1_ParamLimits

0xb8de,	// (0x0008b6ef) blid2_search_pane_t1

0xb8f0,	// (0x0008b701) aid_size_cell_blid2_gps_ParamLimits

0xb8f0,	// (0x0008b701) aid_size_cell_blid2_gps

0xb900,	// (0x0008b711) blid2_gps_pane_g1_ParamLimits

0xb900,	// (0x0008b711) blid2_gps_pane_g1

0xb90c,	// (0x0008b71d) grid_blid2_satellite_pane_ParamLimits

0xb90c,	// (0x0008b71d) grid_blid2_satellite_pane

0xb91c,	// (0x0008b72d) blid2_navig_pane_g1_ParamLimits

0xb91c,	// (0x0008b72d) blid2_navig_pane_g1

0xb928,	// (0x0008b739) blid2_navig_pane_t1_ParamLimits

0xb928,	// (0x0008b739) blid2_navig_pane_t1

0xb93a,	// (0x0008b74b) blid2_navig_pane_t2_ParamLimits

0xb93a,	// (0x0008b74b) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x0008f90c) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x0008f90c) blid2_navig_pane_t

0xb94c,	// (0x0008b75d) blid2_navig_ring_pane_ParamLimits

0xb94c,	// (0x0008b75d) blid2_navig_ring_pane

0xb95c,	// (0x0008b76d) blid2_speed_pane_ParamLimits

0xb95c,	// (0x0008b76d) blid2_speed_pane

0xb968,	// (0x0008b779) blid2_tripm_pane_g1_ParamLimits

0xb968,	// (0x0008b779) blid2_tripm_pane_g1

0xb978,	// (0x0008b789) blid2_tripm_pane_g2_ParamLimits

0xb978,	// (0x0008b789) blid2_tripm_pane_g2

0xb984,	// (0x0008b795) blid2_tripm_pane_g3_ParamLimits

0xb984,	// (0x0008b795) blid2_tripm_pane_g3

0xb990,	// (0x0008b7a1) blid2_tripm_pane_g4_ParamLimits

0xb990,	// (0x0008b7a1) blid2_tripm_pane_g4

0xb99c,	// (0x0008b7ad) blid2_tripm_pane_g5_ParamLimits

0xb99c,	// (0x0008b7ad) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0008f911) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0008f911) blid2_tripm_pane_g

0xb9b8,	// (0x0008b7c9) blid2_tripm_pane_t1_ParamLimits

0xb9b8,	// (0x0008b7c9) blid2_tripm_pane_t1

0xb9cc,	// (0x0008b7dd) blid2_tripm_pane_t2_ParamLimits

0xb9cc,	// (0x0008b7dd) blid2_tripm_pane_t2

0xb9de,	// (0x0008b7ef) blid2_tripm_pane_t3_ParamLimits

0xb9de,	// (0x0008b7ef) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x0008f91e) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x0008f91e) blid2_tripm_pane_t

0xba10,	// (0x0008b821) cell_blid2_satellite_pane_ParamLimits

0xba10,	// (0x0008b821) cell_blid2_satellite_pane

0xba2a,	// (0x0008b83b) cell_blid2_satellite_pane_g1

0x2860,	// (0x00082671) cell_blid2_satellite_pane_t1

0x168b,	// (0x0008149c) blid2_speed_pane_g1

0x286e,	// (0x0008267f) blid2_speed_pane_t1

0x287c,	// (0x0008268d) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x0008f927) blid2_speed_pane_t

0x168b,	// (0x0008149c) blid2_navig_ring_pane_g1

0xba33,	// (0x0008b844) blid2_navig_ring_pane_g2

0xba3b,	// (0x0008b84c) blid2_navig_ring_pane_g3

0xba43,	// (0x0008b854) blid2_navig_ring_pane_g4

0xba4b,	// (0x0008b85c) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x0008f92c) blid2_navig_ring_pane_g

0xf0ce,	// (0x0008eedf) bg_popup_window_pane_cp011

0x288a,	// (0x0008269b) popup_blid2_search_window_g1

0x2892,	// (0x000826a3) popup_blid2_search_window_t1

0x28a0,	// (0x000826b1) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x0008f937) popup_blid2_search_window_t

0xe3c0,	// (0x0008e1d1) main_browser_pane_g1

0xe0db,	// (0x0008deec) main_browser_pane_ParamLimits

0x8765,	// (0x00088576) bg_button_pane_cp011_ParamLimits

0xaaa0,	// (0x0008a8b1) cell_vitu2_function_pane_g1_ParamLimits

0x11f2,	// (0x00081003) bg_popup_sub_pane_cp22_ParamLimits

0xb36f,	// (0x0008b180) input_focus_pane_cp08_ParamLimits

0xb386,	// (0x0008b197) popup_vitu2_query_button_pane_ParamLimits

0xb386,	// (0x0008b197) popup_vitu2_query_button_pane

0xb397,	// (0x0008b1a8) popup_vitu2_query_input_button_pane

0x2439,	// (0x0008224a) popup_vitu2_query_window_g1_ParamLimits

0xb3a1,	// (0x0008b1b2) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x0008f838) popup_vitu2_query_window_g_ParamLimits

0xf0ce,	// (0x0008eedf) bg_button_pane_cp026

0xba53,	// (0x0008b864) popup_vitu2_query_input_button_pane_g1

0xf0ce,	// (0x0008eedf) bg_button_pane_cp025

0x28ae,	// (0x000826bf) popup_vitu2_query_button_pane_t1

0x91df,	// (0x00088ff0) main_mp3_pane_t6

0x91ef,	// (0x00089000) popup_slider_window_cp01

0xa706,	// (0x0008a517) cam4_battery_pane

0xa7e6,	// (0x0008a5f7) cam4_battery_pane_cp02

0xb7d2,	// (0x0008b5e3) cam4_battery_pane_cp01

0xb7d2,	// (0x0008b5e3) cam4_battery_pane_cp03

0x28bc,	// (0x000826cd) cam4_battery_pane_g1

0x168b,	// (0x0008149c) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x0008f93c) cam4_battery_pane_g

0x1557,	// (0x00081368) popup_blid_sat_info2_window_t11

0x78fd,	// (0x0008770e) aid_size_touch_mv_arrow_left_ParamLimits

0x7926,	// (0x00087737) aid_size_touch_mv_arrow_right_ParamLimits

0xeb1c,	// (0x0008e92d) navi_pane_g1_ParamLimits

0x7965,	// (0x00087776) navi_pane_g2_ParamLimits

0x7993,	// (0x000877a4) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0008f206) navi_pane_g_ParamLimits

0x79ed,	// (0x000877fe) navi_pane_mv_t1_ParamLimits

0x9cd1,	// (0x00089ae2) grid_imed_effect_pane_ParamLimits

0x665b,	// (0x0008646c) aid_placing_vt_slider_lsc

0xe30f,	// (0x0008e120) aid_placing_vt_slider_prt

0x0011,	// (0x0007fe22) bg_tb_trans_pane_cp01_ParamLimits

0x1817,	// (0x00081628) popup_image_details_window_g1_ParamLimits

0x182a,	// (0x0008163b) popup_image_details_window_g2_ParamLimits

0x183f,	// (0x00081650) popup_image_details_window_g3_ParamLimits

0x183f,	// (0x00081650) popup_image_details_window_g3

0xf728,	// (0x0008f539) popup_image_details_window_g_ParamLimits

0x1853,	// (0x00081664) popup_image_details_window_t1_ParamLimits

0x1865,	// (0x00081676) popup_image_details_window_t2_ParamLimits

0x187e,	// (0x0008168f) popup_image_details_window_t3_ParamLimits

0x1892,	// (0x000816a3) popup_image_details_window_t4_ParamLimits

0x18ad,	// (0x000816be) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0008f540) popup_image_details_window_t_ParamLimits

0xb6f6,	// (0x0008b507) cl_header_name_pane_ParamLimits

0xb6f6,	// (0x0008b507) cl_header_name_pane

0xba5b,	// (0x0008b86c) cl_header_name_pane_t1_ParamLimits

0xba5b,	// (0x0008b86c) cl_header_name_pane_t1

0xba72,	// (0x0008b883) cl_header_name_pane_t2_ParamLimits

0xba72,	// (0x0008b883) cl_header_name_pane_t2

0xba9c,	// (0x0008b8ad) cl_header_name_pane_t3_ParamLimits

0xba9c,	// (0x0008b8ad) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0008f941) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0008f941) cl_header_name_pane_t

0x79be,	// (0x000877cf) navi_pane_mv_g2_ParamLimits

0x20ef,	// (0x00081f00) field_vitu2_entry_pane_g1_ParamLimits

0x20fb,	// (0x00081f0c) field_vitu2_entry_pane_g2_ParamLimits

0x2107,	// (0x00081f18) field_vitu2_entry_pane_g3_ParamLimits

0x2107,	// (0x00081f18) field_vitu2_entry_pane_g3

0xf926,	// (0x0008f737) field_vitu2_entry_pane_g_ParamLimits

0xaa30,	// (0x0008a841) cell_vitu2_itu_pane_g1_ParamLimits

0xaa40,	// (0x0008a851) cell_vitu2_itu_pane_g2_ParamLimits

0xaa40,	// (0x0008a851) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0008f743) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0008f743) cell_vitu2_itu_pane_g

0x8765,	// (0x00088576) bg_vkb2_func_pane_cp05_ParamLimits

0x8765,	// (0x00088576) bg_vkb2_func_pane_cp05

0x8765,	// (0x00088576) bg_vkb2_func_pane_cp03

0x8765,	// (0x00088576) bg_vkb2_func_pane_cp04

0x8765,	// (0x00088576) bg_vkb2_func_pane_cp10_ParamLimits

0x8765,	// (0x00088576) bg_vkb2_func_pane_cp10

0xb698,	// (0x0008b4a9) bg_vkb2_func_pane_cp08

0xb67e,	// (0x0008b48f) bg_vkb2_func_pane_cp06

0xb68c,	// (0x0008b49d) bg_vkb2_func_pane_cp07

0x27ab,	// (0x000825bc) bg_vkb2_func_pane_cp11_ParamLimits

0x27ab,	// (0x000825bc) bg_vkb2_func_pane_cp11

0x27c0,	// (0x000825d1) bg_vkb2_func_pane_cp12_ParamLimits

0x27c0,	// (0x000825d1) bg_vkb2_func_pane_cp12

0xf0ce,	// (0x0008eedf) bg_vkb2_func_pane_cp09

0x2173,	// (0x00081f84) bg_vkb2_func_pane_g1

0xe4d1,	// (0x0008e2e2) bg_vkb2_func_pane_g2

0x217b,	// (0x00081f8c) bg_vkb2_func_pane_g3

0x2183,	// (0x00081f94) bg_vkb2_func_pane_g4

0x23e4,	// (0x000821f5) bg_vkb2_func_pane_g5

0x219b,	// (0x00081fac) bg_vkb2_func_pane_g6

0x21a3,	// (0x00081fb4) bg_vkb2_func_pane_g7

0x2193,	// (0x00081fa4) bg_vkb2_func_pane_g8

0xe4b1,	// (0x0008e2c2) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x0008f948) bg_vkb2_func_pane_g

0xb9aa,	// (0x0008b7bb) blid2_tripm_pane_g6_ParamLimits

0xb9aa,	// (0x0008b7bb) blid2_tripm_pane_g6

0x1f7d,	// (0x00081d8e) mp4_progress_pane_g1

0xba04,	// (0x0008b815) blid2_tripm_values_pane_ParamLimits

0xba04,	// (0x0008b815) blid2_tripm_values_pane

0xbac1,	// (0x0008b8d2) blid2_tripm_values_pane_t1

0xbacf,	// (0x0008b8e0) blid2_tripm_values_pane_t2

0xbadd,	// (0x0008b8ee) blid2_tripm_values_pane_t3

0xbaeb,	// (0x0008b8fc) blid2_tripm_values_pane_t4

0xbaf9,	// (0x0008b90a) blid2_tripm_values_pane_t5

0xbb07,	// (0x0008b918) blid2_tripm_values_pane_t6

0xbb15,	// (0x0008b926) blid2_tripm_values_pane_t7

0xbb23,	// (0x0008b934) blid2_tripm_values_pane_t8

0xbb31,	// (0x0008b942) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x0008f95b) blid2_tripm_values_pane_t

0x669b,	// (0x000864ac) call_video_pane_t1_ParamLimits

0x66bc,	// (0x000864cd) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0008f08f) call_video_pane_t_ParamLimits

0x7f1e,	// (0x00087d2f) msg_header_pane_g1_ParamLimits

0xed37,	// (0x0008eb48) msg_header_pane_g2_ParamLimits

0xed37,	// (0x0008eb48) msg_header_pane_g2

0x0001,

0xf498,	// (0x0008f2a9) msg_header_pane_g_ParamLimits

0xf498,	// (0x0008f2a9) msg_header_pane_g

0xe0db,	// (0x0008deec) main_clock2_pane_ParamLimits

0x9a77,	// (0x00089888) grid_clock2_toolbar_pane_ParamLimits

0x9a77,	// (0x00089888) grid_clock2_toolbar_pane

0x9a77,	// (0x00089888) listscroll_clock2_pane_ParamLimits

0x9a77,	// (0x00089888) listscroll_clock2_pane

0x9b0e,	// (0x0008991f) main_clock2_pane_t3_ParamLimits

0x9b0e,	// (0x0008991f) main_clock2_pane_t3

0x9b20,	// (0x00089931) main_clock2_pane_t4_ParamLimits

0x9b20,	// (0x00089931) main_clock2_pane_t4

0x28c6,	// (0x000826d7) cell_clock2_toolbar_pane

0x28ce,	// (0x000826df) cell_clock2_toolbar_pane_cp01

0x28ce,	// (0x000826df) cell_clock2_toolbar_pane_cp02

0x28d6,	// (0x000826e7) cell_clock2_toolbar_pane_cp03

0x28de,	// (0x000826ef) list_clock2_pane

0xea73,	// (0x0008e884) scroll_pane_cp10

0x28e6,	// (0x000826f7) list_single_clock2_pane_ParamLimits

0x28e6,	// (0x000826f7) list_single_clock2_pane

0xebbc,	// (0x0008e9cd) list_highlight_pane_cp08

0x28f3,	// (0x00082704) list_single_clock2_pane_t1

0x2901,	// (0x00082712) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0008f96e) list_single_clock2_pane_t

0xf0ce,	// (0x0008eedf) bg_button_pane_cp10

0x290f,	// (0x00082720) cell_clock2_toolbar_pane_g1

0x7fbb,	// (0x00087dcc) aid_main_viewer_pane_g1_ParamLimits

0x7fbb,	// (0x00087dcc) aid_main_viewer_pane_g1

0x7fc7,	// (0x00087dd8) aid_main_viewer_pane_g2_ParamLimits

0x7fc7,	// (0x00087dd8) aid_main_viewer_pane_g2

0x7fd3,	// (0x00087de4) aid_main_viewer_pane_g3_ParamLimits

0x7fd3,	// (0x00087de4) aid_main_viewer_pane_g3

0x7fe4,	// (0x00087df5) aid_main_viewer_pane_g4_ParamLimits

0x7fe4,	// (0x00087df5) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0008f2ba) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0008f2ba) aid_main_viewer_pane_g

0x8758,	// (0x00088569) main_calc_pane_ParamLimits

0x8773,	// (0x00088584) main_dialer2_pane_ParamLimits

0x58ec,	// (0x000856fd) main_cam6_pane

0x58ec,	// (0x000856fd) main_vid6_pane

0x9a83,	// (0x00089894) listscroll_gen_pane_cp06_ParamLimits

0x9a83,	// (0x00089894) listscroll_gen_pane_cp06

0x9b32,	// (0x00089943) main_clock2_pane_t5_ParamLimits

0x9b32,	// (0x00089943) main_clock2_pane_t5

0x9b7b,	// (0x0008998c) aid_call2_pane_cp10_ParamLimits

0x9b8d,	// (0x0008999e) aid_call_pane_cp10_ParamLimits

0xeaf1,	// (0x0008e902) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeaf1,	// (0x0008e902) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9b9f,	// (0x000899b0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9b9f,	// (0x000899b0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeaf1,	// (0x0008e902) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0008f5f0) popup_clock_analogue_window_cp10_g_ParamLimits

0x9bb1,	// (0x000899c2) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa369,	// (0x0008a17a) cell_dialer2_keypad_pane_g2_ParamLimits

0xa369,	// (0x0008a17a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0008f6d6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0008f6d6) cell_dialer2_keypad_pane_g

0xa385,	// (0x0008a196) cell_dialer2_keypad_pane_t1

0xad6b,	// (0x0008ab7c) main_cset_text2_pane_ParamLimits

0xad6b,	// (0x0008ab7c) main_cset_text2_pane

0x2625,	// (0x00082436) area_vitu2_query_pane_g1_ParamLimits

0xb61d,	// (0x0008b42e) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0008f88b) area_vitu2_query_pane_g_ParamLimits

0x26a9,	// (0x000824ba) area_vitu2_query_pane_t7_ParamLimits

0x26a9,	// (0x000824ba) area_vitu2_query_pane_t7

0xb67e,	// (0x0008b48f) bg_button_pane_cp018_ParamLimits

0xb68c,	// (0x0008b49d) bg_button_pane_cp021_ParamLimits

0xb698,	// (0x0008b4a9) bg_button_pane_cp022_ParamLimits

0xb698,	// (0x0008b4a9) bg_vkb2_func_pane_cp08_ParamLimits

0xb67e,	// (0x0008b48f) bg_vkb2_func_pane_cp06_ParamLimits

0xb68c,	// (0x0008b49d) bg_vkb2_func_pane_cp07_ParamLimits

0xb6a9,	// (0x0008b4ba) input_focus_pane_cp09_ParamLimits

0xbb3f,	// (0x0008b950) cam6_autofocus_pane_ParamLimits

0xbb3f,	// (0x0008b950) cam6_autofocus_pane

0xbb61,	// (0x0008b972) cam6_image_uncrop_pane_ParamLimits

0xbb61,	// (0x0008b972) cam6_image_uncrop_pane

0xbb8e,	// (0x0008b99f) cam6_indi_pane_ParamLimits

0xbb8e,	// (0x0008b99f) cam6_indi_pane

0xbba8,	// (0x0008b9b9) cam6_mode_pane_ParamLimits

0xbba8,	// (0x0008b9b9) cam6_mode_pane

0xbbbc,	// (0x0008b9cd) cam6_timer_pane_ParamLimits

0xbbbc,	// (0x0008b9cd) cam6_timer_pane

0xbbc8,	// (0x0008b9d9) cam6_zoom_pane_ParamLimits

0xbbc8,	// (0x0008b9d9) cam6_zoom_pane

0xbbe0,	// (0x0008b9f1) cam6_mode_pane_g1_ParamLimits

0xbbe0,	// (0x0008b9f1) cam6_mode_pane_g1

0xbbec,	// (0x0008b9fd) cam6_mode_pane_g2_ParamLimits

0xbbec,	// (0x0008b9fd) cam6_mode_pane_g2

0xbbf8,	// (0x0008ba09) cam6_mode_pane_g3_ParamLimits

0xbbf8,	// (0x0008ba09) cam6_mode_pane_g3

0xbc04,	// (0x0008ba15) cam6_mode_pane_g4_ParamLimits

0xbc04,	// (0x0008ba15) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0008f973) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0008f973) cam6_mode_pane_g

0x2917,	// (0x00082728) bg_tb_trans_pane_cp08_ParamLimits

0x2917,	// (0x00082728) bg_tb_trans_pane_cp08

0x2925,	// (0x00082736) cam6_battery_pane_ParamLimits

0x2925,	// (0x00082736) cam6_battery_pane

0x293b,	// (0x0008274c) cam6_indi_pane_g1_ParamLimits

0x293b,	// (0x0008274c) cam6_indi_pane_g1

0x294d,	// (0x0008275e) cam6_indi_pane_g2_ParamLimits

0x294d,	// (0x0008275e) cam6_indi_pane_g2

0x295f,	// (0x00082770) cam6_indi_pane_g3_ParamLimits

0x295f,	// (0x00082770) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x0008f97c) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x0008f97c) cam6_indi_pane_g

0x2971,	// (0x00082782) cam6_indi_pane_t1_ParamLimits

0x2971,	// (0x00082782) cam6_indi_pane_t1

0xa866,	// (0x0008a677) cam6_autofocus_pane_g1

0xa85e,	// (0x0008a66f) cam6_autofocus_pane_g2

0xa876,	// (0x0008a687) cam6_autofocus_pane_g3

0xa86e,	// (0x0008a67f) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x0008f983) cam6_autofocus_pane_g

0x2997,	// (0x000827a8) cam6_timer_pane_g1

0x299f,	// (0x000827b0) cam6_timer_pane_t1

0x29ad,	// (0x000827be) cam6_zoom_cont_pane

0x29b5,	// (0x000827c6) cam6_zoom_pane_g1

0x29bd,	// (0x000827ce) cam6_zoom_pane_g2

0xbc10,	// (0x0008ba21) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x0008f98c) cam6_zoom_pane_g

0x168b,	// (0x0008149c) cam6_battery_pane_g1

0x168b,	// (0x0008149c) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x0008f4fd) cam6_battery_pane_g

0x29c5,	// (0x000827d6) cam6_zoom_cont_pane_g1

0x29ce,	// (0x000827df) cam6_zoom_cont_pane_g2

0x29d7,	// (0x000827e8) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x0008f993) cam6_zoom_cont_pane_g

0xbc2d,	// (0x0008ba3e) cam6_mode_pane_cp_ParamLimits

0xbc2d,	// (0x0008ba3e) cam6_mode_pane_cp

0xbc41,	// (0x0008ba52) cam6_zoom_pane_cp_ParamLimits

0xbc41,	// (0x0008ba52) cam6_zoom_pane_cp

0xbc59,	// (0x0008ba6a) vid6_image_uncrop_cif_pane_ParamLimits

0xbc59,	// (0x0008ba6a) vid6_image_uncrop_cif_pane

0xbc85,	// (0x0008ba96) vid6_image_uncrop_nhd_pane_ParamLimits

0xbc85,	// (0x0008ba96) vid6_image_uncrop_nhd_pane

0xbca2,	// (0x0008bab3) vid6_image_uncrop_vga_pane_ParamLimits

0xbca2,	// (0x0008bab3) vid6_image_uncrop_vga_pane

0xbcc1,	// (0x0008bad2) vid6_image_uncrop_wvga_pane_ParamLimits

0xbcc1,	// (0x0008bad2) vid6_image_uncrop_wvga_pane

0xbcde,	// (0x0008baef) vid6_indi_pane_ParamLimits

0xbcde,	// (0x0008baef) vid6_indi_pane

0x2917,	// (0x00082728) bg_tb_trans_pane_cp09_ParamLimits

0x2917,	// (0x00082728) bg_tb_trans_pane_cp09

0x29ef,	// (0x00082800) cam6_battery_pane_cp_ParamLimits

0x29ef,	// (0x00082800) cam6_battery_pane_cp

0x29fb,	// (0x0008280c) vid6_indi_pane_g1_ParamLimits

0x29fb,	// (0x0008280c) vid6_indi_pane_g1

0x2a0d,	// (0x0008281e) vid6_indi_pane_g2_ParamLimits

0x2a0d,	// (0x0008281e) vid6_indi_pane_g2

0x2a1f,	// (0x00082830) vid6_indi_pane_g3_ParamLimits

0x2a1f,	// (0x00082830) vid6_indi_pane_g3

0x2a34,	// (0x00082845) vid6_indi_pane_g4_ParamLimits

0x2a34,	// (0x00082845) vid6_indi_pane_g4

0x2a49,	// (0x0008285a) vid6_indi_pane_g5_ParamLimits

0x2a49,	// (0x0008285a) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x0008f99a) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x0008f99a) vid6_indi_pane_g

0x2a63,	// (0x00082874) vid6_indi_pane_t1_ParamLimits

0x2a63,	// (0x00082874) vid6_indi_pane_t1

0x2a79,	// (0x0008288a) vid6_indi_pane_t2_ParamLimits

0x2a79,	// (0x0008288a) vid6_indi_pane_t2

0x2aa1,	// (0x000828b2) vid6_indi_pane_t3_ParamLimits

0x2aa1,	// (0x000828b2) vid6_indi_pane_t3

0x2ac9,	// (0x000828da) vid6_indi_pane_t4_ParamLimits

0x2ac9,	// (0x000828da) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x0008f9a5) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x0008f9a5) vid6_indi_pane_t

0x2aed,	// (0x000828fe) wait_bar_pane_cp08

0xbd03,	// (0x0008bb14) main_cset_text2_pane_t1_ParamLimits

0xbd03,	// (0x0008bb14) main_cset_text2_pane_t1

0xbc18,	// (0x0008ba29) listscroll_gen_pane_cp06_t1_ParamLimits

0xbc18,	// (0x0008ba29) listscroll_gen_pane_cp06_t1

0x58ec,	// (0x000856fd) main_cam6_set_pane

0xa6f8,	// (0x0008a509) bg_tb_trans_pane_cp06_ParamLimits

0xa70e,	// (0x0008a51f) cam4_indicators_pane_g1_ParamLimits

0xa71f,	// (0x0008a530) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0008f713) cam4_indicators_pane_g_ParamLimits

0xa73d,	// (0x0008a54e) cam4_indicators_pane_t1_ParamLimits

0x8765,	// (0x00088576) bg_tb_trans_pane_cp07_ParamLimits

0xa7f0,	// (0x0008a601) vid4_indicators_pane_g1_ParamLimits

0xa804,	// (0x0008a615) vid4_indicators_pane_g2_ParamLimits

0xa818,	// (0x0008a629) vid4_indicators_pane_g3_ParamLimits

0xa829,	// (0x0008a63a) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0008f725) vid4_indicators_pane_g_ParamLimits

0xa847,	// (0x0008a658) vid4_indicators_pane_t1_ParamLimits

0xb7da,	// (0x0008b5eb) vid4_progress_pane_g1_ParamLimits

0xb7ec,	// (0x0008b5fd) vid4_progress_pane_g2_ParamLimits

0xe776,	// (0x0008e587) vid4_progress_pane_g3_ParamLimits

0xb7fc,	// (0x0008b60d) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0008f8d6) vid4_progress_pane_g_ParamLimits

0xb81a,	// (0x0008b62b) vid4_progress_pane_t1_ParamLimits

0xb82f,	// (0x0008b640) vid4_progress_pane_t2_ParamLimits

0xb845,	// (0x0008b656) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0008f8e1) vid4_progress_pane_t_ParamLimits

0xb85a,	// (0x0008b66b) wait_bar_pane_cp07_ParamLimits

0xbd36,	// (0x0008bb47) main_cam6_set_pane_g2_ParamLimits

0xbd36,	// (0x0008bb47) main_cam6_set_pane_g2

0xbd42,	// (0x0008bb53) main_cset6_listscroll_pane_ParamLimits

0xbd42,	// (0x0008bb53) main_cset6_listscroll_pane

0xbd6d,	// (0x0008bb7e) main_cset6_slider_pane_ParamLimits

0xbd6d,	// (0x0008bb7e) main_cset6_slider_pane

0xbd79,	// (0x0008bb8a) main_cset6_text2_pane_ParamLimits

0xbd79,	// (0x0008bb8a) main_cset6_text2_pane

0x2afc,	// (0x0008290d) main_cset6_text_pane

0x2b04,	// (0x00082915) main_cset_list_pane_copy1_ParamLimits

0x2b04,	// (0x00082915) main_cset_list_pane_copy1

0x2b14,	// (0x00082925) scroll_pane_cp028_copy1

0xbd8c,	// (0x0008bb9d) cset_list_set_pane_copy1

0xbd9f,	// (0x0008bbb0) aid_position_infowindow_above_copy1

0xbda7,	// (0x0008bbb8) aid_position_infowindow_below_copy1

0xbdaf,	// (0x0008bbc0) cset_list_set_pane_g1_copy1

0x2366,	// (0x00082177) cset_list_set_pane_g3_copy1_ParamLimits

0x2366,	// (0x00082177) cset_list_set_pane_g3_copy1

0x2375,	// (0x00082186) cset_list_set_pane_t1_copy1_ParamLimits

0x2375,	// (0x00082186) cset_list_set_pane_t1_copy1

0x0011,	// (0x0007fe22) list_highlight_pane_cp021_copy1_ParamLimits

0x0011,	// (0x0007fe22) list_highlight_pane_cp021_copy1

0x2b1d,	// (0x0008292e) cset6_slider_pane_ParamLimits

0x2b1d,	// (0x0008292e) cset6_slider_pane

0x2b49,	// (0x0008295a) main_cset6_slider_pane_g1_ParamLimits

0x2b49,	// (0x0008295a) main_cset6_slider_pane_g1

0xbdb7,	// (0x0008bbc8) main_cset6_slider_pane_g2_ParamLimits

0xbdb7,	// (0x0008bbc8) main_cset6_slider_pane_g2

0x2b71,	// (0x00082982) main_cset6_slider_pane_g3_ParamLimits

0x2b71,	// (0x00082982) main_cset6_slider_pane_g3

0xbddf,	// (0x0008bbf0) main_cset6_slider_pane_g4_ParamLimits

0xbddf,	// (0x0008bbf0) main_cset6_slider_pane_g4

0xbdeb,	// (0x0008bbfc) main_cset6_slider_pane_g5_ParamLimits

0xbdeb,	// (0x0008bbfc) main_cset6_slider_pane_g5

0x22a2,	// (0x000820b3) main_cset6_slider_pane_g7_ParamLimits

0x22a2,	// (0x000820b3) main_cset6_slider_pane_g7

0x22ae,	// (0x000820bf) main_cset6_slider_pane_g8_ParamLimits

0x22ae,	// (0x000820bf) main_cset6_slider_pane_g8

0xbdf9,	// (0x0008bc0a) main_cset6_slider_pane_g9_ParamLimits

0xbdf9,	// (0x0008bc0a) main_cset6_slider_pane_g9

0xbe05,	// (0x0008bc16) main_cset6_slider_pane_g10_ParamLimits

0xbe05,	// (0x0008bc16) main_cset6_slider_pane_g10

0xbe11,	// (0x0008bc22) main_cset6_slider_pane_g11_ParamLimits

0xbe11,	// (0x0008bc22) main_cset6_slider_pane_g11

0xbe1d,	// (0x0008bc2e) main_cset6_slider_pane_g12_ParamLimits

0xbe1d,	// (0x0008bc2e) main_cset6_slider_pane_g12

0xbe29,	// (0x0008bc3a) main_cset6_slider_pane_g13_ParamLimits

0xbe29,	// (0x0008bc3a) main_cset6_slider_pane_g13

0xbe35,	// (0x0008bc46) main_cset6_slider_pane_g14_ParamLimits

0xbe35,	// (0x0008bc46) main_cset6_slider_pane_g14

0xbe41,	// (0x0008bc52) main_cset6_slider_pane_g15_ParamLimits

0xbe41,	// (0x0008bc52) main_cset6_slider_pane_g15

0xbe59,	// (0x0008bc6a) main_cset6_slider_pane_g16_ParamLimits

0xbe59,	// (0x0008bc6a) main_cset6_slider_pane_g16

0xbe67,	// (0x0008bc78) main_cset6_slider_pane_g17_ParamLimits

0xbe67,	// (0x0008bc78) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x0008f9ae) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x0008f9ae) main_cset6_slider_pane_g

0x2b7d,	// (0x0008298e) main_cset6_slider_pane_t1_ParamLimits

0x2b7d,	// (0x0008298e) main_cset6_slider_pane_t1

0xbe8d,	// (0x0008bc9e) main_cset6_slider_pane_t2_ParamLimits

0xbe8d,	// (0x0008bc9e) main_cset6_slider_pane_t2

0xbeb8,	// (0x0008bcc9) main_cset6_slider_pane_t3_ParamLimits

0xbeb8,	// (0x0008bcc9) main_cset6_slider_pane_t3

0xbee3,	// (0x0008bcf4) main_cset6_slider_pane_t4_ParamLimits

0xbee3,	// (0x0008bcf4) main_cset6_slider_pane_t4

0xbf0e,	// (0x0008bd1f) main_cset6_slider_pane_t5_ParamLimits

0xbf0e,	// (0x0008bd1f) main_cset6_slider_pane_t5

0x2bbe,	// (0x000829cf) main_cset6_slider_pane_t7_ParamLimits

0x2bbe,	// (0x000829cf) main_cset6_slider_pane_t7

0xbf3b,	// (0x0008bd4c) main_cset6_slider_pane_t8_ParamLimits

0xbf3b,	// (0x0008bd4c) main_cset6_slider_pane_t8

0xbf5f,	// (0x0008bd70) main_cset6_slider_pane_t9_ParamLimits

0xbf5f,	// (0x0008bd70) main_cset6_slider_pane_t9

0xbf83,	// (0x0008bd94) main_cset6_slider_pane_t10_ParamLimits

0xbf83,	// (0x0008bd94) main_cset6_slider_pane_t10

0xbfa7,	// (0x0008bdb8) main_cset6_slider_pane_t11_ParamLimits

0xbfa7,	// (0x0008bdb8) main_cset6_slider_pane_t11

0x2bf4,	// (0x00082a05) main_cset6_slider_pane_t14_ParamLimits

0x2bf4,	// (0x00082a05) main_cset6_slider_pane_t14

0x2c2d,	// (0x00082a3e) main_cset6_slider_pane_t15_ParamLimits

0x2c2d,	// (0x00082a3e) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x0008f9d3) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x0008f9d3) main_cset6_slider_pane_t

0x238a,	// (0x0008219b) cset_slider_pane_g1_copy1

0x2393,	// (0x000821a4) cset_slider_pane_g2_copy1

0x239c,	// (0x000821ad) cset_slider_pane_g3_copy1

0xf0ce,	// (0x0008eedf) bg_popup_sub_pane_cp011_copy1

0x2d37,	// (0x00082b48) main_cset_text_pane_g1_copy1

0x244d,	// (0x0008225e) main_cset_text_pane_t1_copy1

0x245b,	// (0x0008226c) main_cset_text_pane_t2_copy1

0x2469,	// (0x0008227a) main_cset_text_pane_t3_copy1

0x2477,	// (0x00082288) main_cset_text_pane_t4_copy1

0x2485,	// (0x00082296) main_cset_text_pane_t5_copy1

0x2d3f,	// (0x00082b50) main_cset_text_pane_t6_copy1

0x2d4d,	// (0x00082b5e) main_cset_text_pane_t7_copy1

0xbfcb,	// (0x0008bddc) main_cset_text2_pane_t1_copy1

0x8765,	// (0x00088576) main_ncimui_pane

0x87c4,	// (0x000885d5) popup_query_ncimui_window_ParamLimits

0x87c4,	// (0x000885d5) popup_query_ncimui_window

0x4177,	// (0x00083f88) field_cale_ev2_pane_g4_ParamLimits

0x4177,	// (0x00083f88) field_cale_ev2_pane_g4

0xa089,	// (0x00089e9a) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa089,	// (0x00089e9a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0008f6b1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0008f6b1) cell_video_dialer_keypad_pane_g

0xa0a1,	// (0x00089eb2) cell_video_dialer_keypad_pane_t1

0xf0ce,	// (0x0008eedf) bg_popup_window_pane_cp012

0xe950,	// (0x0008e761) heading_pane_cp06

0x2d79,	// (0x00082b8a) ncim_query_content_pane

0xf0ce,	// (0x0008eedf) bg_popup_heading_pane_cp01

0x2d81,	// (0x00082b92) ncim_heading_pane_t1

0x2d8f,	// (0x00082ba0) ncim_indicator_popup_pane

0x2da1,	// (0x00082bb2) ncim_query_button_pane

0x2db5,	// (0x00082bc6) ncim_query_content_pane_t1

0x2dc7,	// (0x00082bd8) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x0008fa17) ncim_query_content_pane_t

0x2e01,	// (0x00082c12) ncim_query_list_pane

0x2e13,	// (0x00082c24) ncim_query_popup_pane

0x2d8f,	// (0x00082ba0) ncim_indicator_popup_pane_ParamLimits

0xc11e,	// (0x0008bf2f) ncim_query_content_pane_g1_ParamLimits

0xc11e,	// (0x0008bf2f) ncim_query_content_pane_g1

0x2db5,	// (0x00082bc6) ncim_query_content_pane_t1_ParamLimits

0x2dc7,	// (0x00082bd8) ncim_query_content_pane_t2_ParamLimits

0xc12a,	// (0x0008bf3b) ncim_query_content_pane_t3_ParamLimits

0xc12a,	// (0x0008bf3b) ncim_query_content_pane_t3

0xc147,	// (0x0008bf58) ncim_query_content_pane_t4_ParamLimits

0xc147,	// (0x0008bf58) ncim_query_content_pane_t4

0xc164,	// (0x0008bf75) ncim_query_content_pane_t5_ParamLimits

0xc164,	// (0x0008bf75) ncim_query_content_pane_t5

0x2dd9,	// (0x00082bea) ncim_query_content_pane_t6_ParamLimits

0x2dd9,	// (0x00082bea) ncim_query_content_pane_t6

0xfc06,	// (0x0008fa17) ncim_query_content_pane_t_ParamLimits

0x2e01,	// (0x00082c12) ncim_query_list_pane_ParamLimits

0x2e13,	// (0x00082c24) ncim_query_popup_pane_ParamLimits

0x2e27,	// (0x00082c38) wait_bar_pane_cp04

0xf0ce,	// (0x0008eedf) input_focus_pane_cp011

0x2e2f,	// (0x00082c40) ncim_query_popup_pane_t1

0x2e3d,	// (0x00082c4e) ncim_list_query_list_pane_ParamLimits

0x2e3d,	// (0x00082c4e) ncim_list_query_list_pane

0xf0ce,	// (0x0008eedf) bg_button_pane_cp027

0x2e4a,	// (0x00082c5b) ncim_query_button_pane_g1

0xf0ce,	// (0x0008eedf) list_highlight_pane_cp012

0x2e54,	// (0x00082c65) ncim_list_query_list_pane_g1

0x2e5c,	// (0x00082c6d) ncim_list_query_list_pane_t1

0xa72e,	// (0x0008a53f) cam4_indicators_pane_g3_ParamLimits

0xa72e,	// (0x0008a53f) cam4_indicators_pane_g3

0xa835,	// (0x0008a646) vid4_indicators_pane_g5_ParamLimits

0xa835,	// (0x0008a646) vid4_indicators_pane_g5

0xb80b,	// (0x0008b61c) vid4_progress_pane_g5_ParamLimits

0xb80b,	// (0x0008b61c) vid4_progress_pane_g5

0xc00a,	// (0x0008be1b) main_ncimui_pane_g1

0xc072,	// (0x0008be83) ncimui_group_query_pane_ParamLimits

0xc072,	// (0x0008be83) ncimui_group_query_pane

0xc0ba,	// (0x0008becb) ncimui_list_pane_ParamLimits

0xc0ba,	// (0x0008becb) ncimui_list_pane

0xc0e1,	// (0x0008bef2) ncimui_text_pane_ParamLimits

0xc0e1,	// (0x0008bef2) ncimui_text_pane

0xc181,	// (0x0008bf92) ncimui_text_pane_t1_ParamLimits

0xc181,	// (0x0008bf92) ncimui_text_pane_t1

0x2e6a,	// (0x00082c7b) ncimui_list_single_graphic_pane_ParamLimits

0x2e6a,	// (0x00082c7b) ncimui_list_single_graphic_pane

0xc1a0,	// (0x0008bfb1) ncimui_query_pane_ParamLimits

0xc1a0,	// (0x0008bfb1) ncimui_query_pane

0xf0ce,	// (0x0008eedf) list_highlight_pane_cp013

0x2e7a,	// (0x00082c8b) ncim_list_query_list_pane_t1_copy1

0x2e54,	// (0x00082c65) ncim_list_single_graphic_pane_g1

0x2e88,	// (0x00082c99) ncim_query_button_pane_cp01

0x2e94,	// (0x00082ca5) ncim_query_entry_pane_ParamLimits

0x2e94,	// (0x00082ca5) ncim_query_entry_pane

0x2ea7,	// (0x00082cb8) ncimui_query_pane_g1

0x2eb3,	// (0x00082cc4) ncimui_query_pane_t1_ParamLimits

0x2eb3,	// (0x00082cc4) ncimui_query_pane_t1

0x0011,	// (0x0007fe22) input_focus_pane_cp012

0x2ecc,	// (0x00082cdd) ncim_query_entry_pane_t1

0xe0db,	// (0x0008deec) main_im_pane_ParamLimits

0x8765,	// (0x00088576) main_mobtv_pane_ParamLimits

0x8765,	// (0x00088576) main_mobtv_pane

0xbe75,	// (0x0008bc86) main_cset6_slider_pane_g18_ParamLimits

0xbe75,	// (0x0008bc86) main_cset6_slider_pane_g18

0xbe81,	// (0x0008bc92) main_cset6_slider_pane_g19_ParamLimits

0xbe81,	// (0x0008bc92) main_cset6_slider_pane_g19

0x2107,	// (0x00081f18) bg_main_mobtv_pane_ParamLimits

0x2107,	// (0x00081f18) bg_main_mobtv_pane

0xc1b3,	// (0x0008bfc4) main_mobtv_info_pane

0xc1be,	// (0x0008bfcf) main_mobtv_loading_pane_ParamLimits

0xc1be,	// (0x0008bfcf) main_mobtv_loading_pane

0x2ede,	// (0x00082cef) main_mobtv_pg_channel_list_pane

0x2ee8,	// (0x00082cf9) main_mobtv_pg_hdr_pane

0xc1cb,	// (0x0008bfdc) main_mobtv_programe_curr_pane_ParamLimits

0xc1cb,	// (0x0008bfdc) main_mobtv_programe_curr_pane

0xc1d8,	// (0x0008bfe9) main_mobtv_programe_next_pane_ParamLimits

0xc1d8,	// (0x0008bfe9) main_mobtv_programe_next_pane

0x2ef1,	// (0x00082d02) popup_mobtv_noti_window

0x168b,	// (0x0008149c) main_tv_pg_hdr_pane_g1

0x2ef9,	// (0x00082d0a) main_tv_pg_hdr_pane_g2

0x2f01,	// (0x00082d12) main_tv_pg_hdr_pane_g3

0x2f09,	// (0x00082d1a) main_tv_pg_hdr_pane_g4

0x2f11,	// (0x00082d22) main_tv_pg_hdr_pane_g5

0x2f1b,	// (0x00082d2c) main_tv_pg_hdr_pane_g6

0x2f25,	// (0x00082d36) main_tv_pg_hdr_pane_g7

0x2f2f,	// (0x00082d40) main_tv_pg_hdr_pane_g8

0x2f39,	// (0x00082d4a) main_tv_pg_hdr_pane_g9

0x2f43,	// (0x00082d54) main_tv_pg_hdr_pane_g10

0x2f4d,	// (0x00082d5e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x0008fa24) main_tv_pg_hdr_pane_g

0x2f57,	// (0x00082d68) main_tv_pg_hdr_pane_t1

0x2f65,	// (0x00082d76) main_tv_pg_hdr_pane_t2

0x2f73,	// (0x00082d84) main_tv_pg_hdr_pane_t3

0x2f83,	// (0x00082d94) main_tv_pg_hdr_pane_t4

0x2f93,	// (0x00082da4) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x0008fa3b) main_tv_pg_hdr_pane_t

0x2fa3,	// (0x00082db4) single_mobtv_pg_channel_pane_ParamLimits

0x2fa3,	// (0x00082db4) single_mobtv_pg_channel_pane

0x2fb5,	// (0x00082dc6) single_mobtv_pg_channel_table_pane

0x2fbe,	// (0x00082dcf) single_mobtv_pg_channel_thumb_pane

0x2fc7,	// (0x00082dd8) single_tv_pg_channel_pane_g1

0x2fd0,	// (0x00082de1) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x0008fa46) single_tv_pg_channel_pane_g

0x18f7,	// (0x00081708) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x18f7,	// (0x00081708) bg_single_mobtv_pg_channel_thumb_pane

0x2fd9,	// (0x00082dea) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2fd9,	// (0x00082dea) single_mobtv_pg_channel_thumb_pane_g1

0x2fe7,	// (0x00082df8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2fe7,	// (0x00082df8) single_mobtv_pg_channel_thumb_pane_g2

0x2ff3,	// (0x00082e04) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2ff3,	// (0x00082e04) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x0008fa4b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x0008fa4b) single_mobtv_pg_channel_thumb_pane_g

0x2fff,	// (0x00082e10) single_mobtv_pg_channel_thumb_pane_t1

0x300d,	// (0x00082e1e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0008fa52) single_mobtv_pg_channel_thumb_pane_t

0x168b,	// (0x0008149c) bg_single_mobtv_pg_channel_table_pane_g1

0x168b,	// (0x0008149c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x0008f4fd) bg_single_mobtv_pg_channel_table_pane_g

0x301b,	// (0x00082e2c) single_mobtv_pg_channel_table_pane_t1

0x3029,	// (0x00082e3a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x0008fa57) single_mobtv_pg_channel_table_pane_t

0xc1ed,	// (0x0008bffe) main_mobtv_info_pane_g1_ParamLimits

0xc1ed,	// (0x0008bffe) main_mobtv_info_pane_g1

0xc209,	// (0x0008c01a) main_mobtv_info_pane_t1_ParamLimits

0xc209,	// (0x0008c01a) main_mobtv_info_pane_t1

0xc281,	// (0x0008c092) main_mobtv_info_pane_t2_ParamLimits

0xc281,	// (0x0008c092) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x0008fa61) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x0008fa61) main_mobtv_info_pane_t

0xc310,	// (0x0008c121) wait_bar_pane_cp05

0xc322,	// (0x0008c133) main_mobtv_loading_pane_g1_ParamLimits

0xc322,	// (0x0008c133) main_mobtv_loading_pane_g1

0xc330,	// (0x0008c141) main_mobtv_loading_pane_g2_ParamLimits

0xc330,	// (0x0008c141) main_mobtv_loading_pane_g2

0xc33c,	// (0x0008c14d) main_mobtv_loading_pane_g3_ParamLimits

0xc33c,	// (0x0008c14d) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x0008fa68) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x0008fa68) main_mobtv_loading_pane_g

0x3037,	// (0x00082e48) main_mobtv_loading_pane_t1_ParamLimits

0x3037,	// (0x00082e48) main_mobtv_loading_pane_t1

0x304f,	// (0x00082e60) main_mobtv_loading_pane_t2_ParamLimits

0x304f,	// (0x00082e60) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x0008fa6f) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x0008fa6f) main_mobtv_loading_pane_t

0xc34a,	// (0x0008c15b) wait_bar_pane_cp06_ParamLimits

0xc34a,	// (0x0008c15b) wait_bar_pane_cp06

0x3073,	// (0x00082e84) main_mobtv_programe_curr_pane_t1

0x3081,	// (0x00082e92) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x0008fa74) main_mobtv_programe_curr_pane_t

0x308f,	// (0x00082ea0) main_mobtv_programe_next_pane_t1

0x309d,	// (0x00082eae) main_mobtv_programe_next_pane_t2

0x30ab,	// (0x00082ebc) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x0008fa79) main_mobtv_programe_next_pane_t

0xf0ce,	// (0x0008eedf) bg_popup_mobtv_noti_window_pane

0x30b9,	// (0x00082eca) popup_mobtv_noti_window_g1

0x30c1,	// (0x00082ed2) popup_mobtv_noti_window_t1

0x30cf,	// (0x00082ee0) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x0008fa80) popup_mobtv_noti_window_t

0x168b,	// (0x0008149c) bg_popup_mobtv_noti_window_pane_g1

0x58ec,	// (0x000856fd) sc_clock_pane

0x58ec,	// (0x000856fd) main_fs_bigclock_pane

0xb9f2,	// (0x0008b803) blid2_tripm_pane_t4_ParamLimits

0xb9f2,	// (0x0008b803) blid2_tripm_pane_t4

0xc356,	// (0x0008c167) sc_clock_pane_g1_ParamLimits

0xc356,	// (0x0008c167) sc_clock_pane_g1

0xc364,	// (0x0008c175) sc_clock_pane_t1_ParamLimits

0xc364,	// (0x0008c175) sc_clock_pane_t1

0xc377,	// (0x0008c188) sc_clock_pane_t2_ParamLimits

0xc377,	// (0x0008c188) sc_clock_pane_t2

0xc389,	// (0x0008c19a) sc_clock_pane_t3_ParamLimits

0xc389,	// (0x0008c19a) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x0008fa85) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x0008fa85) sc_clock_pane_t

0xd094,	// (0x0008cea5) main_fs_bigclock_indicator_pane_ParamLimits

0xd094,	// (0x0008cea5) main_fs_bigclock_indicator_pane

0xc416,	// (0x0008c227) main_fs_bigclock_pane_g1_ParamLimits

0xc416,	// (0x0008c227) main_fs_bigclock_pane_g1

0xd0a0,	// (0x0008ceb1) main_fs_bigclock_pane_t1_ParamLimits

0xd0a0,	// (0x0008ceb1) main_fs_bigclock_pane_t1

0xd0b2,	// (0x0008cec3) main_fs_bigclock_pane_t2_ParamLimits

0xd0b2,	// (0x0008cec3) main_fs_bigclock_pane_t2

0xd0c6,	// (0x0008ced7) main_fs_bigclock_pane_t3_ParamLimits

0xd0c6,	// (0x0008ced7) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x0008fc89) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x0008fc89) main_fs_bigclock_pane_t

0x3c4b,	// (0x00083a5c) main_fs_bigclock_indicator_pane_g1

0x2da9,	// (0x00082bba) ncim_query_content_pane_g2_ParamLimits

0x2da9,	// (0x00082bba) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x0008fa12) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x0008fa12) ncim_query_content_pane_g

0xc39d,	// (0x0008c1ae) sc_clock_pane_t4_ParamLimits

0xc39d,	// (0x0008c1ae) sc_clock_pane_t4

0x8765,	// (0x00088576) main_radioblah_pane

0x2066,	// (0x00081e77) cell_call4_button_pane_t1_copy1_ParamLimits

0x2066,	// (0x00081e77) cell_call4_button_pane_t1_copy1

0xc024,	// (0x0008be35) main_ncimui_pane_t1_ParamLimits

0xc024,	// (0x0008be35) main_ncimui_pane_t1

0xc03e,	// (0x0008be4f) main_ncimui_pane_t2_ParamLimits

0xc03e,	// (0x0008be4f) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x0008fa0b) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x0008fa0b) main_ncimui_pane_t

0x3215,	// (0x00083026) main_radioblah_anim_pane_ParamLimits

0x3215,	// (0x00083026) main_radioblah_anim_pane

0x3226,	// (0x00083037) main_radioblah_info_pane_ParamLimits

0x3226,	// (0x00083037) main_radioblah_info_pane

0x323a,	// (0x0008304b) main_radioblah_pane_t1_ParamLimits

0x323a,	// (0x0008304b) main_radioblah_pane_t1

0x3256,	// (0x00083067) main_radioblah_pane_t2_ParamLimits

0x3256,	// (0x00083067) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x0008faa6) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x0008faa6) main_radioblah_pane_t

0xc468,	// (0x0008c279) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc468,	// (0x0008c279) main_radioblah_rocker_ctrl_pane

0x329e,	// (0x000830af) main_radioblah_info_pane_t1_ParamLimits

0x329e,	// (0x000830af) main_radioblah_info_pane_t1

0xc4ad,	// (0x0008c2be) main_radioblah_info_pane_t2_ParamLimits

0xc4ad,	// (0x0008c2be) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x0008faaf) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x0008faaf) main_radioblah_info_pane_t

0x168b,	// (0x0008149c) main_radioblah_rocker_ctrl_pane_g1

0xc55d,	// (0x0008c36e) main_radioblah_rocker_ctrl_pane_g2

0xc565,	// (0x0008c376) main_radioblah_rocker_ctrl_pane_g3

0xc56d,	// (0x0008c37e) main_radioblah_rocker_ctrl_pane_g4

0xc575,	// (0x0008c386) main_radioblah_rocker_ctrl_pane_g5

0xc57d,	// (0x0008c38e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x0008fab8) main_radioblah_rocker_ctrl_pane_g

0xbfcb,	// (0x0008bddc) main_cset_text2_pane_t1_copy1_ParamLimits

0xa64e,	// (0x0008a45f) cam4_image_uncrop_qvga_pane

0xa7a3,	// (0x0008a5b4) vid4_image_uncrop_qcif_pane

0xbb80,	// (0x0008b991) cam6_image_uncrop_qvga_pane_ParamLimits

0xbb80,	// (0x0008b991) cam6_image_uncrop_qvga_pane

0x29df,	// (0x000827f0) vid6_image_uncrop_qcif_pane_ParamLimits

0x29df,	// (0x000827f0) vid6_image_uncrop_qcif_pane

0xf0ce,	// (0x0008eedf) bg_popup_preview_window_pane_cp03

0x2d5b,	// (0x00082b6c) list_cset_text2_pane

0x2d63,	// (0x00082b74) main_cset6_text2_pane_g1

0x2d6b,	// (0x00082b7c) main_cset6_text2_pane_t1

0xc585,	// (0x0008c396) list_cset_text2_pane_t1_ParamLimits

0xc585,	// (0x0008c396) list_cset_text2_pane_t1

0x8765,	// (0x00088576) main_radioblah_pane_ParamLimits

0xc2fc,	// (0x0008c10d) main_mobtv_info_pane_t3_ParamLimits

0xc2fc,	// (0x0008c10d) main_mobtv_info_pane_t3

0xc456,	// (0x0008c267) main_radioblah_pane_g1

0xc481,	// (0x0008c292) main_radioblah_info_pane_g1

0xc502,	// (0x0008c313) main_radioblah_info_pane_t3_ParamLimits

0xc502,	// (0x0008c313) main_radioblah_info_pane_t3

0x7409,	// (0x0008721a) highlight_cell_cale_month_pane_ParamLimits

0x7409,	// (0x0008721a) highlight_cell_cale_month_pane

0x58ec,	// (0x000856fd) main_phob_fisheye_pane

0x1a0b,	// (0x0008181c) scroll_pane_cp0031_ParamLimits

0x1a0b,	// (0x0008181c) scroll_pane_cp0031

0x2aed,	// (0x000828fe) wait_bar_pane_cp08_ParamLimits

0xbd8c,	// (0x0008bb9d) cset_list_set_pane_copy1_ParamLimits

0x32d8,	// (0x000830e9) highlight_cell_cale_month_pane_g1

0xc5a2,	// (0x0008c3b3) highlight_cell_cale_month_pane_t1

0x2715,	// (0x00082526) list_gen_pane_cp01

0x228d,	// (0x0008209e) scroll_pane_01

0xc5b0,	// (0x0008c3c1) list_single_double_fisheye_pane

0xc5b9,	// (0x0008c3ca) list_double_fisheye_pane_g1_ParamLimits

0xc5b9,	// (0x0008c3ca) list_double_fisheye_pane_g1

0xc5c5,	// (0x0008c3d6) list_double_fisheye_pane_g2_ParamLimits

0xc5c5,	// (0x0008c3d6) list_double_fisheye_pane_g2

0xc5d9,	// (0x0008c3ea) list_double_fisheye_pane_g3_ParamLimits

0xc5d9,	// (0x0008c3ea) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x0008fac5) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x0008fac5) list_double_fisheye_pane_g

0xc602,	// (0x0008c413) list_double_fisheye_pane_t1_ParamLimits

0xc602,	// (0x0008c413) list_double_fisheye_pane_t1

0xc61d,	// (0x0008c42e) list_double_fisheye_pane_t2_ParamLimits

0xc61d,	// (0x0008c42e) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x0008fad0) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x0008fad0) list_double_fisheye_pane_t

0x58ec,	// (0x000856fd) main_call5_pane

0xc3c3,	// (0x0008c1d4) sc_swipe_pane_ParamLimits

0xc3c3,	// (0x0008c1d4) sc_swipe_pane

0xc64b,	// (0x0008c45c) call5_image_pane_ParamLimits

0xc64b,	// (0x0008c45c) call5_image_pane

0xc65b,	// (0x0008c46c) call5_swipe_1_pane_ParamLimits

0xc65b,	// (0x0008c46c) call5_swipe_1_pane

0xc667,	// (0x0008c478) call5_swipe_2_pane_ParamLimits

0xc667,	// (0x0008c478) call5_swipe_2_pane

0xc681,	// (0x0008c492) popup_call5_audio_first_window_ParamLimits

0xc681,	// (0x0008c492) popup_call5_audio_first_window

0x18f7,	// (0x00081708) call5_swipe_1_pane_g1_ParamLimits

0x18f7,	// (0x00081708) call5_swipe_1_pane_g1

0x32e0,	// (0x000830f1) call5_swipe_1_pane_g2_ParamLimits

0x32e0,	// (0x000830f1) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x0008fad5) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x0008fad5) call5_swipe_1_pane_g

0x32ec,	// (0x000830fd) call5_swipe_1_pane_t1_ParamLimits

0x32ec,	// (0x000830fd) call5_swipe_1_pane_t1

0x18f7,	// (0x00081708) call5_swipe_2_pane_g1_ParamLimits

0x18f7,	// (0x00081708) call5_swipe_2_pane_g1

0x3301,	// (0x00083112) call5_swipe_2_pane_g2_ParamLimits

0x3301,	// (0x00083112) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x0008fada) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x0008fada) call5_swipe_2_pane_g

0x330d,	// (0x0008311e) call5_swipe_2_pane_t1_ParamLimits

0x330d,	// (0x0008311e) call5_swipe_2_pane_t1

0x3322,	// (0x00083133) sc_swipe_pane_g1_ParamLimits

0x3322,	// (0x00083133) sc_swipe_pane_g1

0x332f,	// (0x00083140) sc_swipe_pane_g2_ParamLimits

0x332f,	// (0x00083140) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x0008fadf) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x0008fadf) sc_swipe_pane_g

0x333b,	// (0x0008314c) sc_swipe_pane_t1_ParamLimits

0x333b,	// (0x0008314c) sc_swipe_pane_t1

0x58ec,	// (0x000856fd) main_cmail_launcher_pane

0xc68f,	// (0x0008c4a0) aid_size_cell_cmail_l_ParamLimits

0xc68f,	// (0x0008c4a0) aid_size_cell_cmail_l

0xc69f,	// (0x0008c4b0) grid_cmail_l_pane_ParamLimits

0xc69f,	// (0x0008c4b0) grid_cmail_l_pane

0xc6af,	// (0x0008c4c0) cell_cmail_l_pane_ParamLimits

0xc6af,	// (0x0008c4c0) cell_cmail_l_pane

0xc6c3,	// (0x0008c4d4) cell_cmail_l_pane_g1_ParamLimits

0xc6c3,	// (0x0008c4d4) cell_cmail_l_pane_g1

0xc6cf,	// (0x0008c4e0) cell_cmail_l_pane_t1_ParamLimits

0xc6cf,	// (0x0008c4e0) cell_cmail_l_pane_t1

0x3350,	// (0x00083161) cell_cmail_l_pane_t2_ParamLimits

0x3350,	// (0x00083161) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x0008fae4) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x0008fae4) cell_cmail_l_pane_t

0x0011,	// (0x0007fe22) grid_highlight_pane_cp018_ParamLimits

0x0011,	// (0x0007fe22) grid_highlight_pane_cp018

0x574e,	// (0x0008555f) main2_pane_ParamLimits

0x574e,	// (0x0008555f) main2_pane

0xe174,	// (0x0008df85) popup_sp_fs_action_menu_bg_pane_g1

0xe17c,	// (0x0008df8d) popup_sp_fs_action_menu_bg_pane_g2

0xe184,	// (0x0008df95) popup_sp_fs_action_menu_bg_pane_g3

0xe18c,	// (0x0008df9d) popup_sp_fs_action_menu_bg_pane_g4

0xe194,	// (0x0008dfa5) popup_sp_fs_action_menu_bg_pane_g5

0xe19c,	// (0x0008dfad) popup_sp_fs_action_menu_bg_pane_g6

0xe1a4,	// (0x0008dfb5) popup_sp_fs_action_menu_bg_pane_g7

0xe1ac,	// (0x0008dfbd) popup_sp_fs_action_menu_bg_pane_g8

0xe1b4,	// (0x0008dfc5) popup_sp_fs_action_menu_bg_pane_g9

0xe1bc,	// (0x0008dfcd) popup_sp_fs_action_menu_bg_pane_g10

0xe1bc,	// (0x0008dfcd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0008efa9) popup_sp_fs_action_menu_bg_pane_g

0x00bb,	// (0x0007fecc) list_medium_line_x2_t3_g3_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x2_t3_g3_g1

0x00c7,	// (0x0007fed8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x00c7,	// (0x0007fed8) list_medium_line_x2_t3_g3_g2

0x00d3,	// (0x0007fee4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x00d3,	// (0x0007fee4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0008f059) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0008f059) list_medium_line_x2_t3_g3_g

0x00df,	// (0x0007fef0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x00df,	// (0x0007fef0) list_medium_line_x2_t3_g3_t1

0x658e,	// (0x0008639f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x658e,	// (0x0008639f) list_medium_line_x2_t3_g3_t2

0x00f4,	// (0x0007ff05) list_medium_line_x2_t3_g3_t3_ParamLimits

0x00f4,	// (0x0007ff05) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0008f060) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0008f060) list_medium_line_x2_t3_g3_t

0x00bb,	// (0x0007fecc) list_medium_line_x2_t3_g2_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x2_t3_g2_g1

0x00d3,	// (0x0007fee4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x00d3,	// (0x0007fee4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0008f067) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0008f067) list_medium_line_x2_t3_g2_g

0x0109,	// (0x0007ff1a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0109,	// (0x0007ff1a) list_medium_line_x2_t3_g2_t1

0x011f,	// (0x0007ff30) list_medium_line_x2_t3_g2_t2_ParamLimits

0x011f,	// (0x0007ff30) list_medium_line_x2_t3_g2_t2

0x0131,	// (0x0007ff42) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0131,	// (0x0007ff42) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0008f06c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0008f06c) list_medium_line_x2_t3_g2_t

0x00bb,	// (0x0007fecc) list_medium_line_x2_t4_g4_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x2_t4_g4_g1

0x014e,	// (0x0007ff5f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x014e,	// (0x0007ff5f) list_medium_line_x2_t4_g4_g2

0x00c7,	// (0x0007fed8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x00c7,	// (0x0007fed8) list_medium_line_x2_t4_g4_g3

0x015a,	// (0x0007ff6b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x015a,	// (0x0007ff6b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0008f073) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0008f073) list_medium_line_x2_t4_g4_g

0x65a0,	// (0x000863b1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x65a0,	// (0x000863b1) list_medium_line_x2_t4_g4_t1

0x65ba,	// (0x000863cb) list_medium_line_x2_t4_g4_t2_ParamLimits

0x65ba,	// (0x000863cb) list_medium_line_x2_t4_g4_t2

0x65d0,	// (0x000863e1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x65d0,	// (0x000863e1) list_medium_line_x2_t4_g4_t3

0x0166,	// (0x0007ff77) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0166,	// (0x0007ff77) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0008f07c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0008f07c) list_medium_line_x2_t4_g4_t

0x00bb,	// (0x0007fecc) list_medium_line_x2_t2_g4_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x2_t2_g4_g1

0x014e,	// (0x0007ff5f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x014e,	// (0x0007ff5f) list_medium_line_x2_t2_g4_g2

0x00c7,	// (0x0007fed8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x00c7,	// (0x0007fed8) list_medium_line_x2_t2_g4_g3

0x00d3,	// (0x0007fee4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x00d3,	// (0x0007fee4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0008f0e3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0008f0e3) list_medium_line_x2_t2_g4_g

0x0178,	// (0x0007ff89) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0178,	// (0x0007ff89) list_medium_line_x2_t2_g4_t1

0x00f4,	// (0x0007ff05) list_medium_line_x2_t2_g4_t2_ParamLimits

0x00f4,	// (0x0007ff05) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0008f0ec) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0008f0ec) list_medium_line_x2_t2_g4_t

0x00bb,	// (0x0007fecc) list_medium_line_x2_t2_g3_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x2_t2_g3_g1

0x00c7,	// (0x0007fed8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x00c7,	// (0x0007fed8) list_medium_line_x2_t2_g3_g2

0x00d3,	// (0x0007fee4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x00d3,	// (0x0007fee4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0008f059) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0008f059) list_medium_line_x2_t2_g3_g

0x018d,	// (0x0007ff9e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x018d,	// (0x0007ff9e) list_medium_line_x2_t2_g3_t1

0x00f4,	// (0x0007ff05) list_medium_line_x2_t2_g3_t2_ParamLimits

0x00f4,	// (0x0007ff05) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0008f0f1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0008f0f1) list_medium_line_x2_t2_g3_t

0x75bb,	// (0x000873cc) main_sp_fs_list_pane_ParamLimits

0x75bb,	// (0x000873cc) main_sp_fs_list_pane

0x75c7,	// (0x000873d8) sp_fs_scroll_pane_ParamLimits

0x75c7,	// (0x000873d8) sp_fs_scroll_pane

0x75d3,	// (0x000873e4) list_medium_line_x2_t3_t1

0x75e3,	// (0x000873f4) list_medium_line_x2_t3_t2

0x01d0,	// (0x0007ffe1) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0008f13c) list_medium_line_x2_t3_t

0x75f1,	// (0x00087402) list_medium_line_x3_t4_t1

0x7601,	// (0x00087412) list_medium_line_x3_t4_t2

0x01de,	// (0x0007ffef) list_medium_line_x3_t4_t3

0x01d0,	// (0x0007ffe1) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0008f143) list_medium_line_x3_t4_t

0x760f,	// (0x00087420) list_medium_line_x4_t5_t1

0x761f,	// (0x00087430) list_medium_line_x4_t5_t2

0x01de,	// (0x0007ffef) list_medium_line_x4_t5_t3

0x01ec,	// (0x0007fffd) list_medium_line_x4_t5_t4

0x01d0,	// (0x0007ffe1) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0008f14c) list_medium_line_x4_t5_t

0x00bb,	// (0x0007fecc) list_medium_line_t4_g4_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_t4_g4_g1

0x015a,	// (0x0007ff6b) list_medium_line_t4_g4_g2_ParamLimits

0x015a,	// (0x0007ff6b) list_medium_line_t4_g4_g2

0x01fa,	// (0x0008000b) list_medium_line_t4_g4_g3_ParamLimits

0x01fa,	// (0x0008000b) list_medium_line_t4_g4_g3

0x00d3,	// (0x0007fee4) list_medium_line_t4_g4_g4_ParamLimits

0x00d3,	// (0x0007fee4) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0008f157) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0008f157) list_medium_line_t4_g4_g

0x0206,	// (0x00080017) list_medium_line_t4_g4_t1_ParamLimits

0x0206,	// (0x00080017) list_medium_line_t4_g4_t1

0x021b,	// (0x0008002c) list_medium_line_t4_g4_t2_ParamLimits

0x021b,	// (0x0008002c) list_medium_line_t4_g4_t2

0x0230,	// (0x00080041) list_medium_line_t4_g4_t3_ParamLimits

0x0230,	// (0x00080041) list_medium_line_t4_g4_t3

0x00f4,	// (0x0007ff05) list_medium_line_t4_g4_t4_ParamLimits

0x00f4,	// (0x0007ff05) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0008f160) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0008f160) list_medium_line_t4_g4_t

0x773e,	// (0x0008754f) chi_dic_find_pane_g1

0x8781,	// (0x00088592) main_tport_pane

0x23d6,	// (0x000821e7) list_medium_line_plain_t1

0x23ec,	// (0x000821fd) list_medium_line_t2_g2_g1_ParamLimits

0x23ec,	// (0x000821fd) list_medium_line_t2_g2_g1

0x23f8,	// (0x00082209) list_medium_line_t2_g2_g2_ParamLimits

0x23f8,	// (0x00082209) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x0008f81c) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x0008f81c) list_medium_line_t2_g2_g

0xb201,	// (0x0008b012) list_medium_line_t2_g2_t1_ParamLimits

0xb201,	// (0x0008b012) list_medium_line_t2_g2_t1

0xb21b,	// (0x0008b02c) list_medium_line_t2_g2_t2_ParamLimits

0xb21b,	// (0x0008b02c) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0008f821) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0008f821) list_medium_line_t2_g2_t

0x271e,	// (0x0008252f) aid_sp_fs_list_icon_a_sm

0x45d3,	// (0x000843e4) aid_sp_fs_list_icon_d

0x2726,	// (0x00082537) aid_sp_fs_text_primary

0x272f,	// (0x00082540) aid_sp_fs_text_secondary

0x2738,	// (0x00082549) list_medium_line

0x2738,	// (0x00082549) list_medium_line_g2

0x2738,	// (0x00082549) list_medium_line_g3

0x2738,	// (0x00082549) list_medium_line_plain

0x2738,	// (0x00082549) list_medium_line_plain_t2

0x2738,	// (0x00082549) list_medium_line_plain_t3

0x2738,	// (0x00082549) list_medium_line_right_icon

0x2738,	// (0x00082549) list_medium_line_right_iconx2

0x2738,	// (0x00082549) list_medium_line_t2

0x2738,	// (0x00082549) list_medium_line_t2_g2

0x2738,	// (0x00082549) list_medium_line_t2_g3

0x2738,	// (0x00082549) list_medium_line_t2_right_icon

0x2738,	// (0x00082549) list_medium_line_t2_right_iconx2

0x2738,	// (0x00082549) list_medium_line_t3

0x2738,	// (0x00082549) list_medium_line_t3_g2

0x2738,	// (0x00082549) list_medium_line_t3_g3

0x2738,	// (0x00082549) list_medium_line_t3_right_iconx2

0x2741,	// (0x00082552) list_medium_line_t4_g4

0x274a,	// (0x0008255b) list_medium_line_x2

0x274a,	// (0x0008255b) list_medium_line_x2_t2_g2

0x274a,	// (0x0008255b) list_medium_line_x2_t2_g3

0x274a,	// (0x0008255b) list_medium_line_x2_t2_g4

0x274a,	// (0x0008255b) list_medium_line_x2_t3

0x274a,	// (0x0008255b) list_medium_line_x2_t3_g2

0x274a,	// (0x0008255b) list_medium_line_x2_t3_g3

0x274a,	// (0x0008255b) list_medium_line_x2_t3_g4

0x274a,	// (0x0008255b) list_medium_line_x2_t4_g2

0x274a,	// (0x0008255b) list_medium_line_x2_t4_g4

0x2753,	// (0x00082564) list_medium_line_x3

0x2753,	// (0x00082564) list_medium_line_x3_t4

0x2753,	// (0x00082564) list_medium_line_x3_t4_g4

0x2741,	// (0x00082552) list_medium_line_x4_t4

0x2741,	// (0x00082552) list_medium_line_x4_t4_g7

0x2741,	// (0x00082552) list_medium_line_x4_t5

0x275c,	// (0x0008256d) list_single_fs_dyc_pane_ParamLimits

0x275c,	// (0x0008256d) list_single_fs_dyc_pane

0x00bb,	// (0x0007fecc) list_medium_line_x4_t4_g7_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x4_t4_g7_g1

0x2c66,	// (0x00082a77) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2c66,	// (0x00082a77) list_medium_line_x4_t4_g7_g2

0x2c72,	// (0x00082a83) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2c72,	// (0x00082a83) list_medium_line_x4_t4_g7_g3

0x2c81,	// (0x00082a92) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2c81,	// (0x00082a92) list_medium_line_x4_t4_g7_g4

0x2c8d,	// (0x00082a9e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2c8d,	// (0x00082a9e) list_medium_line_x4_t4_g7_g5

0x2c9c,	// (0x00082aad) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2c9c,	// (0x00082aad) list_medium_line_x4_t4_g7_g6

0x2cab,	// (0x00082abc) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2cab,	// (0x00082abc) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x0008f9ec) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x0008f9ec) list_medium_line_x4_t4_g7_g

0x2cb7,	// (0x00082ac8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2cb7,	// (0x00082ac8) list_medium_line_x4_t4_g7_t1

0x2ccc,	// (0x00082add) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2ccc,	// (0x00082add) list_medium_line_x4_t4_g7_t2

0x2ce1,	// (0x00082af2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2ce1,	// (0x00082af2) list_medium_line_x4_t4_g7_t3

0x2cf6,	// (0x00082b07) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2cf6,	// (0x00082b07) list_medium_line_x4_t4_g7_t4

0x2d08,	// (0x00082b19) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2d08,	// (0x00082b19) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x0008f9fb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x0008f9fb) list_medium_line_x4_t4_g7_t

0x2d1a,	// (0x00082b2b) list_single_dyc_row_pane_ParamLimits

0x2d1a,	// (0x00082b2b) list_single_dyc_row_pane

0xc63f,	// (0x0008c450) call5_gesture_pane_ParamLimits

0xc63f,	// (0x0008c450) call5_gesture_pane

0xc673,	// (0x0008c484) call5_windows_pane_ParamLimits

0xc673,	// (0x0008c484) call5_windows_pane

0xc6e5,	// (0x0008c4f6) call5_swipe_1_pane_cp_ParamLimits

0xc6e5,	// (0x0008c4f6) call5_swipe_1_pane_cp

0xc6f1,	// (0x0008c502) call5_swipe_2_pane_cp_ParamLimits

0xc6f1,	// (0x0008c502) call5_swipe_2_pane_cp

0xebbc,	// (0x0008e9cd) call5_image_pane_cp

0xc6fd,	// (0x0008c50e) popup_call5_audio_first_window_cp_ParamLimits

0xc6fd,	// (0x0008c50e) popup_call5_audio_first_window_cp

0x3322,	// (0x00083133) call5_swipe_1_pane_g1_cp_ParamLimits

0x3322,	// (0x00083133) call5_swipe_1_pane_g1_cp

0x3362,	// (0x00083173) call5_swipe_1_pane_g2_cp

0x333b,	// (0x0008314c) call5_swipe_1_pane_t1_cp_ParamLimits

0x333b,	// (0x0008314c) call5_swipe_1_pane_t1_cp

0x3322,	// (0x00083133) call5_swipe_2_pane_g1_cp_ParamLimits

0x3322,	// (0x00083133) call5_swipe_2_pane_g1_cp

0x336a,	// (0x0008317b) call5_swipe_2_pane_g2_cp

0x3372,	// (0x00083183) call5_swipe_2_pane_t1_cp_ParamLimits

0x3372,	// (0x00083183) call5_swipe_2_pane_t1_cp

0x0011,	// (0x0007fe22) main_sp_fs_email_pane

0x3387,	// (0x00083198) main_sp_fs_listscroll_pane_te

0x3390,	// (0x000831a1) popup_sp_fs_action_menu_pane_ParamLimits

0x3390,	// (0x000831a1) popup_sp_fs_action_menu_pane

0x168b,	// (0x0008149c) bg_sp_fs_ctrlbar_pane_g1

0x33d4,	// (0x000831e5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x33dd,	// (0x000831ee) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x33e6,	// (0x000831f7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x168b,	// (0x0008149c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x0008fae9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1470,	// (0x00081281) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1470,	// (0x00081281) bg_sp_fs_ctrlbar_ddmenu_pane

0x33ef,	// (0x00083200) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x33ef,	// (0x00083200) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x33fb,	// (0x0008320c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x33fb,	// (0x0008320c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x0008faf2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x0008faf2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3407,	// (0x00083218) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3407,	// (0x00083218) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3421,	// (0x00083232) list_medium_line_t2_right_icon_g1

0xc70b,	// (0x0008c51c) list_medium_line_t2_right_icon_t1

0xc71b,	// (0x0008c52c) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x0008faf7) list_medium_line_t2_right_icon_t

0x11f2,	// (0x00081003) bg_sp_fs_ctrlbar_pane_ParamLimits

0x11f2,	// (0x00081003) bg_sp_fs_ctrlbar_pane

0xc780,	// (0x0008c591) main_sp_fs_ctrlbar_button_pane_cp01

0xc788,	// (0x0008c599) main_sp_fs_ctrlbar_ddmenu_pane

0x3461,	// (0x00083272) main_sp_fs_ctrlbar_pane_g1

0x346d,	// (0x0008327e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x0008fafc) main_sp_fs_ctrlbar_pane_g

0x3479,	// (0x0008328a) main_sp_fs_ctrlbar_pane_t1

0xc792,	// (0x0008c5a3) main_sp_fs_ctrlbar_pane

0xc7ac,	// (0x0008c5bd) main_sp_fs_listscroll_pane_te_cp01

0xc7bd,	// (0x0008c5ce) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc7bd,	// (0x0008c5ce) popup_sp_fs_action_menu_pane_cp01

0x0011,	// (0x0007fe22) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0011,	// (0x0007fe22) bg_sp_fs_highlight_list_pane_cp01

0x349e,	// (0x000832af) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x349e,	// (0x000832af) sp_fs_action_menu_list_gene_pane_g1

0x34ad,	// (0x000832be) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x34ad,	// (0x000832be) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x0008fb06) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x0008fb06) sp_fs_action_menu_list_gene_pane_g

0x34ba,	// (0x000832cb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x34ba,	// (0x000832cb) sp_fs_action_menu_list_gene_pane_t1

0x34d2,	// (0x000832e3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x34d2,	// (0x000832e3) sp_fs_action_menu_list_gene_pane

0x34f3,	// (0x00083304) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x34f3,	// (0x00083304) popup_sp_fs_action_menu_bg_pane

0x3501,	// (0x00083312) sp_fs_action_menu_list_pane_ParamLimits

0x3501,	// (0x00083312) sp_fs_action_menu_list_pane

0x3523,	// (0x00083334) sp_fs_scroll_pane_cp01_ParamLimits

0x3523,	// (0x00083334) sp_fs_scroll_pane_cp01

0xc7e7,	// (0x0008c5f8) list_medium_line_plain_t2_t1

0xc7f7,	// (0x0008c608) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x0008fb0b) list_medium_line_plain_t2_t

0xc805,	// (0x0008c616) list_medium_line_plain_t3_t1

0xc815,	// (0x0008c626) list_medium_line_plain_t3_t2

0xc823,	// (0x0008c634) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x0008fb10) list_medium_line_plain_t3_t

0x00bb,	// (0x0007fecc) list_medium_line_x2_t2_g2_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x2_t2_g2_g1

0x00d3,	// (0x0007fee4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x00d3,	// (0x0007fee4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0008f067) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0008f067) list_medium_line_x2_t2_g2_g

0x0206,	// (0x00080017) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0206,	// (0x00080017) list_medium_line_x2_t2_g2_t1

0x00f4,	// (0x0007ff05) list_medium_line_x2_t2_g2_t2_ParamLimits

0x00f4,	// (0x0007ff05) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x0008fb17) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x0008fb17) list_medium_line_x2_t2_g2_t

0x00bb,	// (0x0007fecc) list_medium_line_x2_t4_g2_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x2_t4_g2_g1

0x3549,	// (0x0008335a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3549,	// (0x0008335a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x0008fb1c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x0008fb1c) list_medium_line_x2_t4_g2_g

0xc831,	// (0x0008c642) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc831,	// (0x0008c642) list_medium_line_x2_t4_g2_t1

0xc848,	// (0x0008c659) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc848,	// (0x0008c659) list_medium_line_x2_t4_g2_t2

0xc85d,	// (0x0008c66e) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc85d,	// (0x0008c66e) list_medium_line_x2_t4_g2_t3

0x00f4,	// (0x0007ff05) list_medium_line_x2_t4_g2_t4_ParamLimits

0x00f4,	// (0x0007ff05) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x0008fb21) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x0008fb21) list_medium_line_x2_t4_g2_t

0x355b,	// (0x0008336c) list_medium_line_t3_right_iconx2_g1

0x3421,	// (0x00083232) list_medium_line_t3_right_iconx2_g2

0xc86f,	// (0x0008c680) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x0008fb2a) list_medium_line_t3_right_iconx2_g

0xc877,	// (0x0008c688) list_medium_line_t3_right_iconx2_t1

0xc887,	// (0x0008c698) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x0008fb31) list_medium_line_t3_right_iconx2_t

0x00bb,	// (0x0007fecc) list_medium_line_x3_t4_g4_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x3_t4_g4_g1

0x00c7,	// (0x0007fed8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x00c7,	// (0x0007fed8) list_medium_line_x3_t4_g4_g2

0x015a,	// (0x0007ff6b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x015a,	// (0x0007ff6b) list_medium_line_x3_t4_g4_g3

0x3563,	// (0x00083374) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3563,	// (0x00083374) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x0008fb36) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x0008fb36) list_medium_line_x3_t4_g4_g

0xc895,	// (0x0008c6a6) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc895,	// (0x0008c6a6) list_medium_line_x3_t4_g4_t1

0xc8ac,	// (0x0008c6bd) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc8ac,	// (0x0008c6bd) list_medium_line_x3_t4_g4_t2

0x021b,	// (0x0008002c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x021b,	// (0x0008002c) list_medium_line_x3_t4_g4_t3

0x356f,	// (0x00083380) list_medium_line_x3_t4_g4_t4_ParamLimits

0x356f,	// (0x00083380) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x0008fb3f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x0008fb3f) list_medium_line_x3_t4_g4_t

0xc8c1,	// (0x0008c6d2) list_single_dyc_row_text_pane_t1_ParamLimits

0xc8c1,	// (0x0008c6d2) list_single_dyc_row_text_pane_t1

0xc8f8,	// (0x0008c709) list_single_dyc_row_text_pane_t2_ParamLimits

0xc8f8,	// (0x0008c709) list_single_dyc_row_text_pane_t2

0x358c,	// (0x0008339d) list_single_dyc_row_text_pane_t3_ParamLimits

0x358c,	// (0x0008339d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x0008fb48) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x0008fb48) list_single_dyc_row_text_pane_t

0x359e,	// (0x000833af) list_single_dyc_row_pane_g1_ParamLimits

0x359e,	// (0x000833af) list_single_dyc_row_pane_g1

0x35aa,	// (0x000833bb) list_single_dyc_row_pane_g2_ParamLimits

0x35aa,	// (0x000833bb) list_single_dyc_row_pane_g2

0x35b6,	// (0x000833c7) list_single_dyc_row_pane_g3_ParamLimits

0x35b6,	// (0x000833c7) list_single_dyc_row_pane_g3

0x35c2,	// (0x000833d3) list_single_dyc_row_pane_g4_ParamLimits

0x35c2,	// (0x000833d3) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x0008fb4f) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x0008fb4f) list_single_dyc_row_pane_g

0x35ce,	// (0x000833df) list_single_dyc_row_text_pane_ParamLimits

0x35ce,	// (0x000833df) list_single_dyc_row_text_pane

0xf0ce,	// (0x0008eedf) bg_sp_fs_scroll_pane

0x35ed,	// (0x000833fe) thumb_sp_fs_scroll_pane

0x23ec,	// (0x000821fd) list_medium_line_g1_ParamLimits

0x23ec,	// (0x000821fd) list_medium_line_g1

0x35f6,	// (0x00083407) list_medium_line_t1_ParamLimits

0x35f6,	// (0x00083407) list_medium_line_t1

0x00bb,	// (0x0007fecc) list_medium_line_x2_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x2_g1

0x00c7,	// (0x0007fed8) list_medium_line_x2_g2_ParamLimits

0x00c7,	// (0x0007fed8) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x0008fb58) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x0008fb58) list_medium_line_x2_g

0x360b,	// (0x0008341c) list_medium_line_x2_t1_ParamLimits

0x360b,	// (0x0008341c) list_medium_line_x2_t1

0x00bb,	// (0x0007fecc) list_medium_line_x3_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x3_g1

0x00c7,	// (0x0007fed8) list_medium_line_x3_g2_ParamLimits

0x00c7,	// (0x0007fed8) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x0008fb58) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x0008fb58) list_medium_line_x3_g

0x360b,	// (0x0008341c) list_medium_line_x3_t1_ParamLimits

0x360b,	// (0x0008341c) list_medium_line_x3_t1

0x3621,	// (0x00083432) thumb_sp_fs_scroll_pane_g1

0x362a,	// (0x0008343b) thumb_sp_fs_scroll_pane_g2

0x3633,	// (0x00083444) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x0008fb5d) thumb_sp_fs_scroll_pane_g

0x3621,	// (0x00083432) bg_sp_fs_scroll_pane_g1

0x362a,	// (0x0008343b) bg_sp_fs_scroll_pane_g2

0x3633,	// (0x00083444) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x0008fb5d) bg_sp_fs_scroll_pane_g

0x00bb,	// (0x0007fecc) list_medium_line_x2_t3_g4_g1_ParamLimits

0x00bb,	// (0x0007fecc) list_medium_line_x2_t3_g4_g1

0x014e,	// (0x0007ff5f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x014e,	// (0x0007ff5f) list_medium_line_x2_t3_g4_g2

0x00c7,	// (0x0007fed8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x00c7,	// (0x0007fed8) list_medium_line_x2_t3_g4_g3

0x00d3,	// (0x0007fee4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x00d3,	// (0x0007fee4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0008f0e3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0008f0e3) list_medium_line_x2_t3_g4_g

0xc952,	// (0x0008c763) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc952,	// (0x0008c763) list_medium_line_x2_t3_g4_t1

0xc968,	// (0x0008c779) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc968,	// (0x0008c779) list_medium_line_x2_t3_g4_t2

0x00f4,	// (0x0007ff05) list_medium_line_x2_t3_g4_t3_ParamLimits

0x00f4,	// (0x0007ff05) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x0008fb64) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x0008fb64) list_medium_line_x2_t3_g4_t

0x23ec,	// (0x000821fd) list_medium_line_g2_g1_ParamLimits

0x23ec,	// (0x000821fd) list_medium_line_g2_g1

0x23f8,	// (0x00082209) list_medium_line_g2_g2_ParamLimits

0x23f8,	// (0x00082209) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x0008f81c) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x0008f81c) list_medium_line_g2_g

0x363c,	// (0x0008344d) list_medium_line_g2_t1_ParamLimits

0x363c,	// (0x0008344d) list_medium_line_g2_t1

0x23ec,	// (0x000821fd) list_medium_line_t3_g2_g1_ParamLimits

0x23ec,	// (0x000821fd) list_medium_line_t3_g2_g1

0x23f8,	// (0x00082209) list_medium_line_t3_g2_g2_ParamLimits

0x23f8,	// (0x00082209) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x0008f81c) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x0008f81c) list_medium_line_t3_g2_g

0xc982,	// (0x0008c793) list_medium_line_t3_g2_t1_ParamLimits

0xc982,	// (0x0008c793) list_medium_line_t3_g2_t1

0xc999,	// (0x0008c7aa) list_medium_line_t3_g2_t2_ParamLimits

0xc999,	// (0x0008c7aa) list_medium_line_t3_g2_t2

0xc9ae,	// (0x0008c7bf) list_medium_line_t3_g2_t3_ParamLimits

0xc9ae,	// (0x0008c7bf) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x0008fb6b) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x0008fb6b) list_medium_line_t3_g2_t

0x3421,	// (0x00083232) list_medium_line_right_icon_g1

0x3651,	// (0x00083462) list_medium_line_right_icon_t1

0x23ec,	// (0x000821fd) list_medium_line_t2_g1_ParamLimits

0x23ec,	// (0x000821fd) list_medium_line_t2_g1

0xc9c3,	// (0x0008c7d4) list_medium_line_t2_t1_ParamLimits

0xc9c3,	// (0x0008c7d4) list_medium_line_t2_t1

0xc9dd,	// (0x0008c7ee) list_medium_line_t2_t2_ParamLimits

0xc9dd,	// (0x0008c7ee) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x0008fb72) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x0008fb72) list_medium_line_t2_t

0x23ec,	// (0x000821fd) list_medium_line_t3_g1_ParamLimits

0x23ec,	// (0x000821fd) list_medium_line_t3_g1

0xc9f2,	// (0x0008c803) list_medium_line_t3_t1_ParamLimits

0xc9f2,	// (0x0008c803) list_medium_line_t3_t1

0xca09,	// (0x0008c81a) list_medium_line_t3_t2_ParamLimits

0xca09,	// (0x0008c81a) list_medium_line_t3_t2

0xca1e,	// (0x0008c82f) list_medium_line_t3_t3_ParamLimits

0xca1e,	// (0x0008c82f) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x0008fb77) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x0008fb77) list_medium_line_t3_t

0x23ec,	// (0x000821fd) list_medium_line_g3_g1_ParamLimits

0x23ec,	// (0x000821fd) list_medium_line_g3_g1

0x365f,	// (0x00083470) list_medium_line_g3_g2_ParamLimits

0x365f,	// (0x00083470) list_medium_line_g3_g2

0x23f8,	// (0x00082209) list_medium_line_g3_g3_ParamLimits

0x23f8,	// (0x00082209) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x0008fb7e) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x0008fb7e) list_medium_line_g3_g

0x366b,	// (0x0008347c) list_medium_line_g3_t1_ParamLimits

0x366b,	// (0x0008347c) list_medium_line_g3_t1

0x23ec,	// (0x000821fd) list_medium_line_t2_g3_g1_ParamLimits

0x23ec,	// (0x000821fd) list_medium_line_t2_g3_g1

0x365f,	// (0x00083470) list_medium_line_t2_g3_g2_ParamLimits

0x365f,	// (0x00083470) list_medium_line_t2_g3_g2

0x23f8,	// (0x00082209) list_medium_line_t2_g3_g3_ParamLimits

0x23f8,	// (0x00082209) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x0008fb7e) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x0008fb7e) list_medium_line_t2_g3_g

0xca30,	// (0x0008c841) list_medium_line_t2_g3_t1_ParamLimits

0xca30,	// (0x0008c841) list_medium_line_t2_g3_t1

0xca4a,	// (0x0008c85b) list_medium_line_t2_g3_t2_ParamLimits

0xca4a,	// (0x0008c85b) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x0008fb85) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x0008fb85) list_medium_line_t2_g3_t

0x23ec,	// (0x000821fd) list_medium_line_t3_g3_g1_ParamLimits

0x23ec,	// (0x000821fd) list_medium_line_t3_g3_g1

0x365f,	// (0x00083470) list_medium_line_t3_g3_g2_ParamLimits

0x365f,	// (0x00083470) list_medium_line_t3_g3_g2

0x23f8,	// (0x00082209) list_medium_line_t3_g3_g3_ParamLimits

0x23f8,	// (0x00082209) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x0008fb7e) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x0008fb7e) list_medium_line_t3_g3_g

0xca5f,	// (0x0008c870) list_medium_line_t3_g3_t1_ParamLimits

0xca5f,	// (0x0008c870) list_medium_line_t3_g3_t1

0xca73,	// (0x0008c884) list_medium_line_t3_g3_t2_ParamLimits

0xca73,	// (0x0008c884) list_medium_line_t3_g3_t2

0xca85,	// (0x0008c896) list_medium_line_t3_g3_t3_ParamLimits

0xca85,	// (0x0008c896) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x0008fb8a) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x0008fb8a) list_medium_line_t3_g3_t

0x355b,	// (0x0008336c) list_medium_line_right_iconx2_g1

0x3421,	// (0x00083232) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x0008fb91) list_medium_line_right_iconx2_g

0x3680,	// (0x00083491) list_medium_line_right_iconx2_t1

0x355b,	// (0x0008336c) list_medium_line_t2_right_iconx2_g1

0x3421,	// (0x00083232) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x0008fb91) list_medium_line_t2_right_iconx2_g

0xca97,	// (0x0008c8a8) list_medium_line_t2_right_iconx2_t1

0xcaa7,	// (0x0008c8b8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x0008fb96) list_medium_line_t2_right_iconx2_t

0x368e,	// (0x0008349f) list_medium_line_x4_t4_t1

0xcab5,	// (0x0008c8c6) list_medium_line_x4_t4_t2

0xcac5,	// (0x0008c8d6) list_medium_line_x4_t4_t3

0xcad5,	// (0x0008c8e6) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x0008fb9b) list_medium_line_x4_t4_t

0xcb0e,	// (0x0008c91f) tport_appsw_pane_ParamLimits

0xcb0e,	// (0x0008c91f) tport_appsw_pane

0xcb1a,	// (0x0008c92b) tport_contact_pane_ParamLimits

0xcb1a,	// (0x0008c92b) tport_contact_pane

0xcb2a,	// (0x0008c93b) tport_listscroll_pane_ParamLimits

0xcb2a,	// (0x0008c93b) tport_listscroll_pane

0xcb3a,	// (0x0008c94b) cell_tport_appsw_pane_ParamLimits

0xcb3a,	// (0x0008c94b) cell_tport_appsw_pane

0x1988,	// (0x00081799) tport_appsw_pane_g1_ParamLimits

0x1988,	// (0x00081799) tport_appsw_pane_g1

0x369c,	// (0x000834ad) tport_contact_pane_g1

0x2e2f,	// (0x00082c40) tport_contact_pane_t1

0x36a5,	// (0x000834b6) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x0008fba4) tport_contact_pane_t

0x36b3,	// (0x000834c4) list_tport_pane

0x36bc,	// (0x000834cd) scroll_pane_cp_030

0x36cd,	// (0x000834de) cell_tport_appsw_pane_g1

0x36dd,	// (0x000834ee) cell_tport_appsw_pane_t1

0xf0ce,	// (0x0008eedf) grid_highlight_pane_cp019

0xcb65,	// (0x0008c976) list_tport_double_graphic_pane_ParamLimits

0xcb65,	// (0x0008c976) list_tport_double_graphic_pane

0x0011,	// (0x0007fe22) list_highlight_pane_cp023_ParamLimits

0x0011,	// (0x0007fe22) list_highlight_pane_cp023

0xcb77,	// (0x0008c988) list_tport_double_graphic_pane_g1_ParamLimits

0xcb77,	// (0x0008c988) list_tport_double_graphic_pane_g1

0xcb84,	// (0x0008c995) list_tport_double_graphic_pane_t1_ParamLimits

0xcb84,	// (0x0008c995) list_tport_double_graphic_pane_t1

0xcb99,	// (0x0008c9aa) list_tport_double_graphic_pane_t2_ParamLimits

0xcb99,	// (0x0008c9aa) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x0008fbb0) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x0008fbb0) list_tport_double_graphic_pane_t

0xf0ce,	// (0x0008eedf) main_cale_note_pane

0xaa08,	// (0x0008a819) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaa08,	// (0x0008a819) cell_vitu2_function_top_wide_pane_cp01

0xc310,	// (0x0008c121) wait_bar_pane_cp05_ParamLimits

0xf0ce,	// (0x0008eedf) listscroll_cmail_pane

0x36f3,	// (0x00083504) list_cmail_pane

0xcbb5,	// (0x0008c9c6) list_cmail_body_pane

0xcbcf,	// (0x0008c9e0) list_single_cmail_header_caption_pane

0xcbf4,	// (0x0008ca05) list_single_cmail_header_detail_pane_ParamLimits

0xcbf4,	// (0x0008ca05) list_single_cmail_header_detail_pane

0xcc24,	// (0x0008ca35) list_single_cmail_header_caption_pane_t1

0xcc32,	// (0x0008ca43) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc32,	// (0x0008ca43) list_single_cmail_header_detail_pane_g1

0x45e9,	// (0x000843fa) list_single_cmail_header_detail_pane_g2_ParamLimits

0x45e9,	// (0x000843fa) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x0008fbb5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x0008fbb5) list_single_cmail_header_detail_pane_g

0x3721,	// (0x00083532) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3721,	// (0x00083532) list_single_cmail_header_detail_pane_t1

0x375b,	// (0x0008356c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x375b,	// (0x0008356c) list_single_cmail_header_editor_pane_bg

0x2fd0,	// (0x00082de1) list_cmail_body_pane_g1

0x376d,	// (0x0008357e) list_cmail_body_pane_t1

0x2173,	// (0x00081f84) list_single_cmail_header_editor_pane_bg_g1

0xe4d1,	// (0x0008e2e2) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2183,	// (0x00081f94) list_single_cmail_header_editor_pane_bg_g1_copy2

0x217b,	// (0x00081f8c) list_single_cmail_header_editor_pane_bg_g1_copy3

0x23e4,	// (0x000821f5) list_single_cmail_header_editor_pane_bg_g1_copy4

0x21a3,	// (0x00081fb4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2193,	// (0x00081fa4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x219b,	// (0x00081fac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe4b1,	// (0x0008e2c2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcc6c,	// (0x0008ca7d) calenote_gesture_pane_ParamLimits

0xcc6c,	// (0x0008ca7d) calenote_gesture_pane

0xcc86,	// (0x0008ca97) calenote_window_pane_ParamLimits

0xcc86,	// (0x0008ca97) calenote_window_pane

0x377b,	// (0x0008358c) popup_note_window_cp01

0xcc9e,	// (0x0008caaf) calenote_swipe_1_pane_ParamLimits

0xcc9e,	// (0x0008caaf) calenote_swipe_1_pane

0xc6f1,	// (0x0008c502) calenote_swipe_2_pane_ParamLimits

0xc6f1,	// (0x0008c502) calenote_swipe_2_pane

0x3322,	// (0x00083133) calenote_swipe_1_pane_g1_ParamLimits

0x3322,	// (0x00083133) calenote_swipe_1_pane_g1

0x332f,	// (0x00083140) calenote_swipe_1_pane_g2_ParamLimits

0x332f,	// (0x00083140) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0008fadf) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0008fadf) calenote_swipe_1_pane_g

0x378d,	// (0x0008359e) calenote_swipe_1_pane_t1_ParamLimits

0x378d,	// (0x0008359e) calenote_swipe_1_pane_t1

0x3322,	// (0x00083133) calenote_swipe_2_pane_g1_ParamLimits

0x3322,	// (0x00083133) calenote_swipe_2_pane_g1

0x37ac,	// (0x000835bd) calenote_swipe_2_pane_g2_ParamLimits

0x37ac,	// (0x000835bd) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x0008fbc1) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x0008fbc1) calenote_swipe_2_pane_g

0x37b8,	// (0x000835c9) calenote_swipe_2_pane_t1_ParamLimits

0x37b8,	// (0x000835c9) calenote_swipe_2_pane_t1

0xf0ce,	// (0x0008eedf) main_mup_navstr_pane

0x9780,	// (0x00089591) main_mup3_pane_t7_ParamLimits

0x9780,	// (0x00089591) main_mup3_pane_t7

0xa168,	// (0x00089f79) main_mp4_pane_g6_ParamLimits

0xa168,	// (0x00089f79) main_mp4_pane_g6

0xa4e8,	// (0x0008a2f9) main_image3_pane_t4_ParamLimits

0xa4e8,	// (0x0008a2f9) main_image3_pane_t4

0xccb1,	// (0x0008cac2) popup_navstr_preview_pane_ParamLimits

0xccb1,	// (0x0008cac2) popup_navstr_preview_pane

0xccbd,	// (0x0008cace) scroll_navstr_pane_ParamLimits

0xccbd,	// (0x0008cace) scroll_navstr_pane

0xf0ce,	// (0x0008eedf) bg_popup_preview_window_pane_cp04

0x37df,	// (0x000835f0) popup_navstr_preview_pane_t1

0xccc9,	// (0x0008cada) scroll_navstr_pane_g1_ParamLimits

0xccc9,	// (0x0008cada) scroll_navstr_pane_g1

0xccd6,	// (0x0008cae7) scroll_navstr_pane_t1_ParamLimits

0xccd6,	// (0x0008cae7) scroll_navstr_pane_t1

0x3784,	// (0x00083595) bg_button_pane_cp014

0x3784,	// (0x00083595) bg_button_pane_cp030

0xc5e5,	// (0x0008c3f6) list_double_fisheye_pane_g4_ParamLimits

0xc5e5,	// (0x0008c3f6) list_double_fisheye_pane_g4

0xc5f1,	// (0x0008c402) list_double_fisheye_pane_g5_ParamLimits

0xc5f1,	// (0x0008c402) list_double_fisheye_pane_g5

0x36fb,	// (0x0008350c) sp_fs_scroll_pane_cp03

0x3461,	// (0x00083272) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x346d,	// (0x0008327e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x0008fafc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3479,	// (0x0008328a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcbab,	// (0x0008c9bc) sp_fs_scroll_pane_cp02

0xe1df,	// (0x0008dff0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe1df,	// (0x0008dff0) popup_sp_fs_calendar_preview_list_single_pane

0xf0ce,	// (0x0008eedf) main_cam6_pano_pane

0x8765,	// (0x00088576) main_mup3_pane_ParamLimits

0xf0ce,	// (0x0008eedf) main_phacti_pane

0xc1e5,	// (0x0008bff6) bg_button_pane_cp11

0xc1fd,	// (0x0008c00e) main_mobtv_info_pane_g2_ParamLimits

0xc1fd,	// (0x0008c00e) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x0008fa5c) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x0008fa5c) main_mobtv_info_pane_g

0xc3af,	// (0x0008c1c0) sc_clock_pane_t5_ParamLimits

0xc3af,	// (0x0008c1c0) sc_clock_pane_t5

0xc456,	// (0x0008c267) main_radioblah_pane_g1_ParamLimits

0x326e,	// (0x0008307f) main_radioblah_pane_t3_ParamLimits

0x326e,	// (0x0008307f) main_radioblah_pane_t3

0x3286,	// (0x00083097) main_radioblah_pane_t4_ParamLimits

0x3286,	// (0x00083097) main_radioblah_pane_t4

0xc474,	// (0x0008c285) main_radioblah_text_pane_ParamLimits

0xc474,	// (0x0008c285) main_radioblah_text_pane

0xc481,	// (0x0008c292) main_radioblah_info_pane_g1_ParamLimits

0xc516,	// (0x0008c327) main_radioblah_info_pane_t4_ParamLimits

0xc516,	// (0x0008c327) main_radioblah_info_pane_t4

0x0011,	// (0x0007fe22) main_sp_fs_calendar_pane

0xcce8,	// (0x0008caf9) main_phacti_pane_g1

0xccf0,	// (0x0008cb01) phacti_note_pane_ParamLimits

0xccf0,	// (0x0008cb01) phacti_note_pane

0x37f6,	// (0x00083607) phacti_term_pane_ParamLimits

0x37f6,	// (0x00083607) phacti_term_pane

0x380b,	// (0x0008361c) phacti_note_pane_t1_ParamLimits

0x380b,	// (0x0008361c) phacti_note_pane_t1

0x3822,	// (0x00083633) phacti_term_pane_g1

0x382a,	// (0x0008363b) phacti_term_pane_t1_ParamLimits

0x382a,	// (0x0008363b) phacti_term_pane_t1

0x3854,	// (0x00083665) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe2d2,	// (0x0008e0e3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x0008fbcb) popup_sp_fs_calendar_preview_list_single_pane_g

0x385c,	// (0x0008366d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x385c,	// (0x0008366d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3871,	// (0x00083682) aid_popup_sp_fs_bg_corner_pane

0x168b,	// (0x0008149c) popup_sp_fs_calendar_preview_bg_pane_g1

0xf0ce,	// (0x0008eedf) popup_sp_fs_calendar_preview_bg_pane

0x3879,	// (0x0008368a) popup_sp_fs_calendar_preview_list_pane

0x0011,	// (0x0007fe22) bg_main_sp_fs_cale_pane_ParamLimits

0x0011,	// (0x0007fe22) bg_main_sp_fs_cale_pane

0x388a,	// (0x0008369b) listscroll_cale_mrui_pane_ParamLimits

0x388a,	// (0x0008369b) listscroll_cale_mrui_pane

0x389e,	// (0x000836af) listscroll_sp_fs_schedule_track_pane

0x38a7,	// (0x000836b8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x38a7,	// (0x000836b8) main_sp_fs_ctrlbar_pane_cp01

0x38b8,	// (0x000836c9) main_sp_fs_ribbon_pane

0x460b,	// (0x0008441c) popup_sp_fs_cale_preview_window

0xcd37,	// (0x0008cb48) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcd37,	// (0x0008cb48) list_single_sp_fs_schedule_track_pane

0x9de6,	// (0x00089bf7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9de6,	// (0x00089bf7) bg_sp_fs_highlight_list_pane_cp03

0xcd56,	// (0x0008cb67) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd56,	// (0x0008cb67) list_single_sp_fs_schedule_track_pane_g1

0xcd62,	// (0x0008cb73) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd62,	// (0x0008cb73) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x0008fbd0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x0008fbd0) list_single_sp_fs_schedule_track_pane_g

0xcd6e,	// (0x0008cb7f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd6e,	// (0x0008cb7f) list_single_sp_fs_schedule_track_pane_t1

0xcd86,	// (0x0008cb97) sp_fs_schedule_track_pane_ParamLimits

0xcd86,	// (0x0008cb97) sp_fs_schedule_track_pane

0x461d,	// (0x0008442e) sp_fs_schedule_track_pane_g1

0x4625,	// (0x00084436) sp_fs_schedule_track_pane_g2

0x462d,	// (0x0008443e) sp_fs_schedule_track_pane_g3

0x4635,	// (0x00084446) sp_fs_schedule_track_pane_g4

0x463d,	// (0x0008444e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x0008fbd5) sp_fs_schedule_track_pane_g

0x2173,	// (0x00081f84) bg_sp_fs_schedule_viewer_highlight_g1

0xe4d1,	// (0x0008e2e2) bg_sp_fs_schedule_viewer_highlight_g2

0x217b,	// (0x00081f8c) bg_sp_fs_schedule_viewer_highlight_g3

0x2183,	// (0x00081f94) bg_sp_fs_schedule_viewer_highlight_g4

0x23e4,	// (0x000821f5) bg_sp_fs_schedule_viewer_highlight_g5

0x2193,	// (0x00081fa4) bg_sp_fs_schedule_viewer_highlight_g6

0x219b,	// (0x00081fac) bg_sp_fs_schedule_viewer_highlight_g7

0x21a3,	// (0x00081fb4) bg_sp_fs_schedule_viewer_highlight_g8

0xe4b1,	// (0x0008e2c2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x0008fbe0) bg_sp_fs_schedule_viewer_highlight_g

0xf0ce,	// (0x0008eedf) bg_main_sp_fs_ribbon_pane

0xcd96,	// (0x0008cba7) main_sp_fs_ribbon_pane_g1

0x4645,	// (0x00084456) main_sp_fs_ribbon_pane_t1

0xcd9f,	// (0x0008cbb0) main_sp_fs_ribbon_pane_t2

0x4654,	// (0x00084465) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x0008fbf3) main_sp_fs_ribbon_pane_t

0x4663,	// (0x00084474) main_sp_fs_ribbon_scheduler_pane

0x466b,	// (0x0008447c) bg_main_sp_fs_ribbon_pane_g1

0x4674,	// (0x00084485) bg_main_sp_fs_ribbon_pane_g2

0x467d,	// (0x0008448e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x0008fbfa) bg_main_sp_fs_ribbon_pane_g

0x4685,	// (0x00084496) main_sp_fs_ribbon_scheduler_pane_g1

0x468e,	// (0x0008449f) main_sp_fs_ribbon_scheduler_pane_g2

0x4697,	// (0x000844a8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x0008fc01) main_sp_fs_ribbon_scheduler_pane_g

0x46a0,	// (0x000844b1) list_cale_mrui_pane

0xcdae,	// (0x0008cbbf) sp_fs_scroll_pane_cp07_ParamLimits

0xcdae,	// (0x0008cbbf) sp_fs_scroll_pane_cp07

0xcdc4,	// (0x0008cbd5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcdc4,	// (0x0008cbd5) bg_sp_fs_schedule_viewer_highlight

0x46a9,	// (0x000844ba) list_single_sp_fs_schedule_track_pane_cp01

0x46b1,	// (0x000844c2) list_sp_fs_schedule_track_pane

0x46b9,	// (0x000844ca) sp_fs_scroll_pane_cp06_ParamLimits

0x46b9,	// (0x000844ca) sp_fs_scroll_pane_cp06

0x168b,	// (0x0008149c) bgmain_sp_fs_calendar_pane_g1

0xcdd1,	// (0x0008cbe2) list_single_cale_mrui_pane_ParamLimits

0xcdd1,	// (0x0008cbe2) list_single_cale_mrui_pane

0x38c0,	// (0x000836d1) list_single_cale_mrui_row_pane_ParamLimits

0x38c0,	// (0x000836d1) list_single_cale_mrui_row_pane

0x38cd,	// (0x000836de) list_single_cale_mrui_row_pane_g1_ParamLimits

0x38cd,	// (0x000836de) list_single_cale_mrui_row_pane_g1

0x3912,	// (0x00083723) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3912,	// (0x00083723) list_single_cale_mrui_row_pane_t1

0xcdf9,	// (0x0008cc0a) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcdf9,	// (0x0008cc0a) list_single_cale_mrui_row_pane_t2

0x3924,	// (0x00083735) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3924,	// (0x00083735) list_single_cale_mrui_row_pane_t3

0x3953,	// (0x00083764) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3953,	// (0x00083764) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x0008fc0f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x0008fc0f) list_single_cale_mrui_row_pane_t

0xce5f,	// (0x0008cc70) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xce5f,	// (0x0008cc70) list_single_cmail_header_editor_pane_bg_cp01

0xce7f,	// (0x0008cc90) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xce7f,	// (0x0008cc90) list_single_cmail_header_editor_pane_bg_cp02

0xce9b,	// (0x0008ccac) main_radioblah_text_pane_t1_ParamLimits

0xce9b,	// (0x0008ccac) main_radioblah_text_pane_t1

0x3982,	// (0x00083793) cam6_indi_pane_cp01

0x398a,	// (0x0008379b) cam6_mode_pane_cp01

0x3992,	// (0x000837a3) cam6_pano_pane

0x399b,	// (0x000837ac) cam6_zoom_pane_cp01

0x39a3,	// (0x000837b4) cam6_pano_image_pane

0x39ae,	// (0x000837bf) cam6_pano_pane_g1

0x2fd0,	// (0x00082de1) cam6_pano_pane_g2

0x39b7,	// (0x000837c8) cam6_pano_pane_g3

0x39c0,	// (0x000837d1) cam6_pano_pane_g4

0x1c59,	// (0x00081a6a) cam6_pano_pane_g5

0x39c9,	// (0x000837da) cam6_pano_pane_g6

0x39d3,	// (0x000837e4) cam6_pano_pane_g7

0x39db,	// (0x000837ec) cam6_pano_pane_g8

0x39e4,	// (0x000837f5) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x0008fc18) cam6_pano_pane_g

0xf0ce,	// (0x0008eedf) main_browser_tag_pane

0x37d7,	// (0x000835e8) grid_navstr_albumart_pane

0x39ef,	// (0x00083800) cell_navstr_albumart_pane_ParamLimits

0x39ef,	// (0x00083800) cell_navstr_albumart_pane

0x3a12,	// (0x00083823) cell_navstr_albumart_pane_g1

0x100f,	// (0x00080e20) cell_navstr_albumart_pane_g2

0x101f,	// (0x00080e30) cell_navstr_albumart_pane_g3

0x1017,	// (0x00080e28) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x0008fc2b) cell_navstr_albumart_pane_g

0xceb6,	// (0x0008ccc7) bt_list_pane_ParamLimits

0xceb6,	// (0x0008ccc7) bt_list_pane

0xced6,	// (0x0008cce7) bt_list_pane_t1

0xcee5,	// (0x0008ccf6) bt_list_pane_t2

0x0001,

0xfe23,	// (0x0008fc34) bt_list_pane_t

0xf0ce,	// (0x0008eedf) main_cale_prevew_pane

0xcef4,	// (0x0008cd05) popup_cale_preview_window_ParamLimits

0xcef4,	// (0x0008cd05) popup_cale_preview_window

0x0011,	// (0x0007fe22) bg_popup_preview_window_pane_cp05_ParamLimits

0x0011,	// (0x0007fe22) bg_popup_preview_window_pane_cp05

0x3a1a,	// (0x0008382b) list_cale_preview_pane_ParamLimits

0x3a1a,	// (0x0008382b) list_cale_preview_pane

0xcf0d,	// (0x0008cd1e) list_double_cale_preview_pane_ParamLimits

0xcf0d,	// (0x0008cd1e) list_double_cale_preview_pane

0xcf1f,	// (0x0008cd30) list_single_cale_preview_pane_ParamLimits

0xcf1f,	// (0x0008cd30) list_single_cale_preview_pane

0xcf35,	// (0x0008cd46) list_single_cale_preview_pane_g1

0xcf3d,	// (0x0008cd4e) list_single_cale_preview_pane_t1_ParamLimits

0xcf3d,	// (0x0008cd4e) list_single_cale_preview_pane_t1

0xcf52,	// (0x0008cd63) list_double_cale_preview_pane_g1

0xcf5a,	// (0x0008cd6b) list_double_cale_preview_pane_t1_ParamLimits

0xcf5a,	// (0x0008cd6b) list_double_cale_preview_pane_t1

0xcf6f,	// (0x0008cd80) list_double_cale_preview_pane_t2_ParamLimits

0xcf6f,	// (0x0008cd80) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x0008fc39) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x0008fc39) list_double_cale_preview_pane_t

0xf0ce,	// (0x0008eedf) main_ezdial_pane

0x0011,	// (0x0007fe22) main_sp_fs_email_pane_ParamLimits

0xc729,	// (0x0008c53a) cmail_ddmenu_btn01_pane_ParamLimits

0xc729,	// (0x0008c53a) cmail_ddmenu_btn01_pane

0xc746,	// (0x0008c557) cmail_ddmenu_btn02_pane_ParamLimits

0xc746,	// (0x0008c557) cmail_ddmenu_btn02_pane

0xc764,	// (0x0008c575) cmail_ddmenu_btn03_pane_ParamLimits

0xc764,	// (0x0008c575) cmail_ddmenu_btn03_pane

0xc792,	// (0x0008c5a3) main_sp_fs_ctrlbar_pane_ParamLimits

0xc7ac,	// (0x0008c5bd) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcbb5,	// (0x0008c9c6) list_cmail_body_pane_ParamLimits

0x370b,	// (0x0008351c) bg_button_pane_cp12

0x3714,	// (0x00083525) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3714,	// (0x00083525) list_single_cmail_header_detail_pane_g3

0xcc48,	// (0x0008ca59) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcc48,	// (0x0008ca59) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x0008fbbc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x0008fbbc) list_single_cmail_header_detail_pane_t

0x383f,	// (0x00083650) phacti_term_pane_t2_ParamLimits

0x383f,	// (0x00083650) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x0008fbc6) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x0008fbc6) phacti_term_pane_t

0x3a26,	// (0x00083837) aid_size_list_single_double

0xcf87,	// (0x0008cd98) popup_ezdial_listscroll_window

0xcfa8,	// (0x0008cdb9) popup_number_entry_window_cp01

0xebbc,	// (0x0008e9cd) bg_popup_call_pane_cp09

0x3a32,	// (0x00083843) ezdial_list_pane

0x3a3a,	// (0x0008384b) scroll_pane_cp23

0x1470,	// (0x00081281) bg_button_pane_cp028_ParamLimits

0x1470,	// (0x00081281) bg_button_pane_cp028

0xcfb6,	// (0x0008cdc7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcfb6,	// (0x0008cdc7) cmail_ddmenu_btn01_pane_g1

0xcfc8,	// (0x0008cdd9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcfc8,	// (0x0008cdd9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x0008fc3e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x0008fc3e) cmail_ddmenu_btn01_pane_g

0x3a42,	// (0x00083853) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3a42,	// (0x00083853) cmail_ddmenu_btn01_pane_t1

0x11f2,	// (0x00081003) bg_button_pane_cp029_ParamLimits

0x11f2,	// (0x00081003) bg_button_pane_cp029

0xcfc8,	// (0x0008cdd9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcfc8,	// (0x0008cdd9) cmail_ddmenu_btn02_pane_g1

0xcfe0,	// (0x0008cdf1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcfe0,	// (0x0008cdf1) cmail_ddmenu_btn02_pane_t1

0x9de6,	// (0x00089bf7) bg_button_pane_cp031_ParamLimits

0x9de6,	// (0x00089bf7) bg_button_pane_cp031

0xcfc8,	// (0x0008cdd9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcfc8,	// (0x0008cdd9) cmail_ddmenu_btn03_pane_g1

0xcfe0,	// (0x0008cdf1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcfe0,	// (0x0008cdf1) cmail_ddmenu_btn03_pane_t1

0xa385,	// (0x0008a196) cell_dialer2_keypad_pane_t1_ParamLimits

0xa39f,	// (0x0008a1b0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa39f,	// (0x0008a1b0) cell_dialer2_keypad_pane_t1_copy1

0xc06a,	// (0x0008be7b) ncimui_group_button_pane

0x0011,	// (0x0007fe22) main_sp_fs_calendar_pane_ParamLimits

0xcbcf,	// (0x0008c9e0) list_single_cmail_header_caption_pane_ParamLimits

0x3881,	// (0x00083692) aid_recal_txt_sm_pane

0xf0ce,	// (0x0008eedf) mian_recal_day_pane

0x460b,	// (0x0008441c) popup_sp_fs_cale_preview_window_ParamLimits

0xf0ce,	// (0x0008eedf) list_recal_day_pane

0x3a71,	// (0x00083882) list_single_recal_day_pane_ParamLimits

0x3a71,	// (0x00083882) list_single_recal_day_pane

0x3a83,	// (0x00083894) list_single_recal_day_pane_g1_ParamLimits

0x3a83,	// (0x00083894) list_single_recal_day_pane_g1

0x3a8f,	// (0x000838a0) list_single_recal_day_pane_g2_ParamLimits

0x3a8f,	// (0x000838a0) list_single_recal_day_pane_g2

0x3a9f,	// (0x000838b0) list_single_recal_day_pane_g3_ParamLimits

0x3a9f,	// (0x000838b0) list_single_recal_day_pane_g3

0xd004,	// (0x0008ce15) list_single_recal_day_pane_g4_ParamLimits

0xd004,	// (0x0008ce15) list_single_recal_day_pane_g4

0x3aab,	// (0x000838bc) list_single_recal_day_pane_g5_ParamLimits

0x3aab,	// (0x000838bc) list_single_recal_day_pane_g5

0x3abb,	// (0x000838cc) list_single_recal_day_pane_g6_ParamLimits

0x3abb,	// (0x000838cc) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x0008fc4d) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x0008fc4d) list_single_recal_day_pane_g

0x3ad2,	// (0x000838e3) list_single_recal_day_pane_t1

0x3ae4,	// (0x000838f5) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x0008fc58) list_single_recal_day_pane_t

0xd024,	// (0x0008ce35) ncimui_query_button_pane_ParamLimits

0xd024,	// (0x0008ce35) ncimui_query_button_pane

0xd034,	// (0x0008ce45) ncimui_query_button_pane_t1_ParamLimits

0xd034,	// (0x0008ce45) ncimui_query_button_pane_t1

0x3af9,	// (0x0008390a) ncimui_query_button_pane_t2_ParamLimits

0x3af9,	// (0x0008390a) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x0008fc5d) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x0008fc5d) ncimui_query_button_pane_t

0xd047,	// (0x0008ce58) query_button_pane_ParamLimits

0xd047,	// (0x0008ce58) query_button_pane

0xf0ce,	// (0x0008eedf) bg_button_pane_cp0028

0x3b0c,	// (0x0008391d) query_button_pane_t1

0x8781,	// (0x00088592) main_tport_pane_ParamLimits

0xcae5,	// (0x0008c8f6) bg_popup_window_pane_cp01_ParamLimits

0xcae5,	// (0x0008c8f6) bg_popup_window_pane_cp01

0xcaf2,	// (0x0008c903) heading_pane_cp08_ParamLimits

0xcaf2,	// (0x0008c903) heading_pane_cp08

0xcb00,	// (0x0008c911) heading_pane_cp07_ParamLimits

0xcb00,	// (0x0008c911) heading_pane_cp07

0x36cd,	// (0x000834de) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x0008fba9) cell_tport_appsw_pane_g

0x7e93,	// (0x00087ca4) input_candi_list_open_g1

0xe678,	// (0x0008e489) list_cale_time_pane_g6_ParamLimits

0xe678,	// (0x0008e489) list_cale_time_pane_g6

0x91f9,	// (0x0008900a) aid_size_touch_calib_1_ParamLimits

0x91f9,	// (0x0008900a) aid_size_touch_calib_1

0x9205,	// (0x00089016) aid_size_touch_calib_2_ParamLimits

0x9205,	// (0x00089016) aid_size_touch_calib_2

0x9213,	// (0x00089024) aid_size_touch_calib_3_ParamLimits

0x9213,	// (0x00089024) aid_size_touch_calib_3

0x9223,	// (0x00089034) aid_size_touch_calib_4_ParamLimits

0x9223,	// (0x00089034) aid_size_touch_calib_4

0x9231,	// (0x00089042) main_touch_calib_button_group_pane_ParamLimits

0x9231,	// (0x00089042) main_touch_calib_button_group_pane

0x923f,	// (0x00089050) main_touch_calib_pane_g1_ParamLimits

0x924b,	// (0x0008905c) main_touch_calib_pane_g2_ParamLimits

0x9257,	// (0x00089068) main_touch_calib_pane_g3_ParamLimits

0x9263,	// (0x00089074) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0008f572) main_touch_calib_pane_g_ParamLimits

0x926f,	// (0x00089080) main_touch_calib_pane_t1_ParamLimits

0x9286,	// (0x00089097) main_touch_calib_pane_t2_ParamLimits

0x929d,	// (0x000890ae) main_touch_calib_pane_t3_ParamLimits

0x92b1,	// (0x000890c2) main_touch_calib_pane_t4_ParamLimits

0x92c5,	// (0x000890d6) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0008f57b) main_touch_calib_pane_t_ParamLimits

0x1a2f,	// (0x00081840) list_single_fp_cale_pane_g3_ParamLimits

0x1a2f,	// (0x00081840) list_single_fp_cale_pane_g3

0x8765,	// (0x00088576) bg_button_pane_cp012_ParamLimits

0x8765,	// (0x00088576) bg_vkb2_func_pane_cp03_ParamLimits

0xb186,	// (0x0008af97) cell_vitu2_function_top_pane_g1_ParamLimits

0x8765,	// (0x00088576) bg_vkb2_func_pane_cp04_ParamLimits

0xbff2,	// (0x0008be03) main_ncimui_button_group_pane_ParamLimits

0xbff2,	// (0x0008be03) main_ncimui_button_group_pane

0xc058,	// (0x0008be69) main_ncimui_pane_t3_ParamLimits

0xc058,	// (0x0008be69) main_ncimui_pane_t3

0x37ed,	// (0x000835fe) phacti_button_group_pane

0x3a26,	// (0x00083837) aid_size_list_single_double_ParamLimits

0xcf87,	// (0x0008cd98) popup_ezdial_listscroll_window_ParamLimits

0xcfa8,	// (0x0008cdb9) popup_number_entry_window_cp01_ParamLimits

0xd054,	// (0x0008ce65) phacti_button_pane_ParamLimits

0xd054,	// (0x0008ce65) phacti_button_pane

0xf0ce,	// (0x0008eedf) bg_button_pane_cp14

0x3b1a,	// (0x0008392b) phacti_button_pane_t1

0xd065,	// (0x0008ce76) main_touch_calib_button_pane_ParamLimits

0xd065,	// (0x0008ce76) main_touch_calib_button_pane

0xe0db,	// (0x0008deec) bg_button_pane_cp18_ParamLimits

0xe0db,	// (0x0008deec) bg_button_pane_cp18

0x3b28,	// (0x00083939) main_touch_calib_button_pane_t1_ParamLimits

0x3b28,	// (0x00083939) main_touch_calib_button_pane_t1

0x3b3e,	// (0x0008394f) main_touch_calib_button_pane_t2_ParamLimits

0x3b3e,	// (0x0008394f) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x0008fc62) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x0008fc62) main_touch_calib_button_pane_t

0xf0ce,	// (0x0008eedf) cell_ncimui_button_pane

0xf0ce,	// (0x0008eedf) bg_button_pane_cp032

0x3b5c,	// (0x0008396d) cell_ncimui_button_pane_t1

0xa3fb,	// (0x0008a20c) image3_infobar_pane_ParamLimits

0xa3fb,	// (0x0008a20c) image3_infobar_pane

0xc3d1,	// (0x0008c1e2) fs_bigclock_status_pane_ParamLimits

0xc3d1,	// (0x0008c1e2) fs_bigclock_status_pane

0xc3de,	// (0x0008c1ef) main_fs_bigclock_clock_pane_ParamLimits

0xc3de,	// (0x0008c1ef) main_fs_bigclock_clock_pane

0xc3f4,	// (0x0008c205) main_fs_bigclock_indi_pane_ParamLimits

0xc3f4,	// (0x0008c205) main_fs_bigclock_indi_pane

0xc424,	// (0x0008c235) main_fs_bigclock_swipe_pane_ParamLimits

0xc424,	// (0x0008c235) main_fs_bigclock_swipe_pane

0xf0ce,	// (0x0008eedf) main_fs_clock_dumped_data

0x30dd,	// (0x00082eee) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x30dd,	// (0x00082eee) list_single_fs_bigclock_indicator_pane_g1

0x3103,	// (0x00082f14) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3103,	// (0x00082f14) list_single_fs_bigclock_indicator_pane_g2

0x311d,	// (0x00082f2e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x311d,	// (0x00082f2e) list_single_fs_bigclock_indicator_pane_g3

0x3137,	// (0x00082f48) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3137,	// (0x00082f48) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x0008fa90) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x0008fa90) list_single_fs_bigclock_indicator_pane_g

0x3160,	// (0x00082f71) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3160,	// (0x00082f71) list_single_fs_bigclock_indicator_pane_t1

0x3188,	// (0x00082f99) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3188,	// (0x00082f99) list_single_fs_bigclock_indicator_pane_t2

0x31b0,	// (0x00082fc1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x31b0,	// (0x00082fc1) list_single_fs_bigclock_indicator_pane_t3

0x31d8,	// (0x00082fe9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x31d8,	// (0x00082fe9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x0008fa9b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x0008fa9b) list_single_fs_bigclock_indicator_pane_t

0x3b6a,	// (0x0008397b) image3_infobar_fav_pane_ParamLimits

0x3b6a,	// (0x0008397b) image3_infobar_fav_pane

0x3b7a,	// (0x0008398b) image3_infobar_loc_pane_ParamLimits

0x3b7a,	// (0x0008398b) image3_infobar_loc_pane

0x3b8e,	// (0x0008399f) image3_infobar_time_pane_ParamLimits

0x3b8e,	// (0x0008399f) image3_infobar_time_pane

0x168b,	// (0x0008149c) image3_infobar_time_pane_g1

0x3b9e,	// (0x000839af) image3_infobar_time_pane_t1

0x168b,	// (0x0008149c) image3_infobar_loc_pane_g1

0x3bac,	// (0x000839bd) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x0008fc67) image3_infobar_loc_pane_g

0x3bb4,	// (0x000839c5) image3_infobar_loc_pane_t1

0x168b,	// (0x0008149c) image3_infobar_fav_pane_g1

0x3bc2,	// (0x000839d3) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x0008fc6c) image3_infobar_fav_pane_g

0x3bca,	// (0x000839db) fs_bigclock_status_battery_pane

0x3bd3,	// (0x000839e4) fs_bigclock_status_signal_pane

0x3bdc,	// (0x000839ed) fs_bigclock_status_title_pane

0x3be5,	// (0x000839f6) fs_bigclock_status_signal_pane_g1

0x3bee,	// (0x000839ff) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x0008fc71) fs_bigclock_status_signal_pane_g

0x3bf6,	// (0x00083a07) fs_bigclock_status_battery_pane_g1

0x3bff,	// (0x00083a10) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x0008fc76) fs_bigclock_status_battery_pane_g

0x3c07,	// (0x00083a18) fs_bigclock_status_title_pane_t1

0x168b,	// (0x0008149c) main_fs_bigclock_clock_pane_g1

0x3c15,	// (0x00083a26) main_fs_bigclock_clock_pane_g2

0x3c15,	// (0x00083a26) main_fs_bigclock_clock_pane_g3

0x3c15,	// (0x00083a26) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x0008fc7b) main_fs_bigclock_clock_pane_g

0x3c1d,	// (0x00083a2e) main_fs_bigclock_clock_pane_t1

0x3c2b,	// (0x00083a3c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x0008fc84) main_fs_bigclock_clock_pane_t

0x3c3a,	// (0x00083a4b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3c3a,	// (0x00083a4b) list_single_fs_bigclock_indicator_pane

0xd077,	// (0x0008ce88) list_single_fs_bigclock_pane_ParamLimits

0xd077,	// (0x0008ce88) list_single_fs_bigclock_pane

0x3c54,	// (0x00083a65) main_fs_bigclock_indicator_pane_t1

0x3c63,	// (0x00083a74) list_single_fs_bigclock_pane_g1

0x3c6b,	// (0x00083a7c) list_single_fs_bigclock_pane_t1

0x168b,	// (0x0008149c) main_fs_bigclock_swipe_pane_g1

0x3cae,	// (0x00083abf) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x0008fc95) main_fs_bigclock_swipe_pane_g

0x3cb6,	// (0x00083ac7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3cb6,	// (0x00083ac7) main_fs_bigclock_swipe_pane_t1

0x762d,	// (0x0008743e) call_type_pane_ParamLimits

0xf0ce,	// (0x0008eedf) main_btmg_pane

0x38f9,	// (0x0008370a) list_single_cale_mrui_row_pane_g2_ParamLimits

0x38f9,	// (0x0008370a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x0008fc08) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x0008fc08) list_single_cale_mrui_row_pane_g

0x3a61,	// (0x00083872) list_recal_vselct_arw_lo_pane

0x3a69,	// (0x0008387a) list_recal_vselct_arw_up_pane

0x46cb,	// (0x000844dc) list_recal_vselct_pane

0xd0d8,	// (0x0008cee9) btmg_button_pane

0xd0e4,	// (0x0008cef5) main_btmg_pane_g1

0xf0ce,	// (0x0008eedf) bg_button_pane_cp044

0x3cd3,	// (0x00083ae4) btmg_button_pane_t1

0x11ea,	// (0x00080ffb) aid_listscroll_gen

0x0011,	// (0x0007fe22) main_cntbar_detail_pane

0x36eb,	// (0x000834fc) list_cmail_folder_pane

0x36fb,	// (0x0008350c) sp_fs_scroll_pane_cp03_ParamLimits

0xd0ec,	// (0x0008cefd) list_single_fs_dyc_pane_cp01_ParamLimits

0xd0ec,	// (0x0008cefd) list_single_fs_dyc_pane_cp01

0x3ce1,	// (0x00083af2) aid_size_cmail_indent

0x3cea,	// (0x00083afb) list_single_dyc_row_pane_cp01

0xd12e,	// (0x0008cf3f) cntbar_detail_list_pane_ParamLimits

0xd12e,	// (0x0008cf3f) cntbar_detail_list_pane

0xd168,	// (0x0008cf79) main_cntbar_detail_cont_pane_ParamLimits

0xd168,	// (0x0008cf79) main_cntbar_detail_cont_pane

0x75c7,	// (0x000873d8) scroll_pane_cp032_ParamLimits

0x75c7,	// (0x000873d8) scroll_pane_cp032

0xd174,	// (0x0008cf85) cntbar_detail_list_event_pane_ParamLimits

0xd174,	// (0x0008cf85) cntbar_detail_list_event_pane

0xd13a,	// (0x0008cf4b) cntbar_detail_list_shct_pane

0xe51f,	// (0x0008e330) aid_list_gen

0x3cf3,	// (0x00083b04) aid_scroll

0x3cfc,	// (0x00083b0d) aid_size_touch_scroll_bar

0xd188,	// (0x0008cf99) aid_list_double

0x3d05,	// (0x00083b16) aid_list_single

0xd191,	// (0x0008cfa2) aid_list_single_lg

0x3d0e,	// (0x00083b1f) aid_list_z_g_a_sm

0x45f5,	// (0x00084406) aid_list_z_g_d

0x3d16,	// (0x00083b27) aid_txt_z_prm

0xd19a,	// (0x0008cfab) aid_txt_z_prm_cp01

0xd1a8,	// (0x0008cfb9) aid_txt_z_sec

0xd1b6,	// (0x0008cfc7) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd1b6,	// (0x0008cfc7) main_cntbar_detail_cont_pane_g1

0xd1c3,	// (0x0008cfd4) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd1c3,	// (0x0008cfd4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x0008fc9a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x0008fc9a) main_cntbar_detail_cont_pane_g

0x3d24,	// (0x00083b35) main_cntbar_detail_cont_pane_t1

0x3d32,	// (0x00083b43) main_cntbar_detail_cont_pane_t2

0x3d40,	// (0x00083b51) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x0008fc9f) main_cntbar_detail_cont_pane_t

0xd1cf,	// (0x0008cfe0) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd1cf,	// (0x0008cfe0) cell_cntbar_detail_list_shct_pane

0x3d4e,	// (0x00083b5f) cntbar_detail_list_shct_pane_g1

0x3d57,	// (0x00083b68) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x0008fca6) cntbar_detail_list_shct_pane_g

0xd1e3,	// (0x0008cff4) cntbar_detail_list_event_pane_g1_ParamLimits

0xd1e3,	// (0x0008cff4) cntbar_detail_list_event_pane_g1

0xd1ef,	// (0x0008d000) cntbar_detail_list_event_pane_g2_ParamLimits

0xd1ef,	// (0x0008d000) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x0008fcab) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x0008fcab) cntbar_detail_list_event_pane_g

0xd25b,	// (0x0008d06c) cntbar_detail_list_event_pane_t1_ParamLimits

0xd25b,	// (0x0008d06c) cntbar_detail_list_event_pane_t1

0xd270,	// (0x0008d081) cntbar_detail_list_event_pane_t2_ParamLimits

0xd270,	// (0x0008d081) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x0008fcb8) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x0008fcb8) cntbar_detail_list_event_pane_t

0x168b,	// (0x0008149c) cell_cntbar_detail_list_shct_pane_g1

0x79dd,	// (0x000877ee) navi_pane_mv_g3

0x0011,	// (0x0007fe22) main_cntbar_detail_pane_ParamLimits

0xf0ce,	// (0x0008eedf) main_notif_wgt_pane

0xa0af,	// (0x00089ec0) aid_tch_main_mp4_pane_g4

0xa2e4,	// (0x0008a0f5) popup_slider_window_cp02

0x3a57,	// (0x00083868) list_recal_day_event_pane

0xd10e,	// (0x0008cf1f) cntbar_detail_btn_pane_ParamLimits

0xd10e,	// (0x0008cf1f) cntbar_detail_btn_pane

0xd11e,	// (0x0008cf2f) cntbar_detail_btn_pane_cp01_ParamLimits

0xd11e,	// (0x0008cf2f) cntbar_detail_btn_pane_cp01

0xd13a,	// (0x0008cf4b) cntbar_detail_list_shct_pane_ParamLimits

0xd146,	// (0x0008cf57) cntbar_detail_pane_g1_ParamLimits

0xd146,	// (0x0008cf57) cntbar_detail_pane_g1

0xd152,	// (0x0008cf63) cntbar_detail_pane_t1_ParamLimits

0xd152,	// (0x0008cf63) cntbar_detail_pane_t1

0xd1fb,	// (0x0008d00c) cntbar_detail_list_event_pane_g3_ParamLimits

0xd1fb,	// (0x0008d00c) cntbar_detail_list_event_pane_g3

0xd213,	// (0x0008d024) cntbar_detail_list_event_pane_g4_ParamLimits

0xd213,	// (0x0008d024) cntbar_detail_list_event_pane_g4

0xd22b,	// (0x0008d03c) cntbar_detail_list_event_pane_g5_ParamLimits

0xd22b,	// (0x0008d03c) cntbar_detail_list_event_pane_g5

0xd243,	// (0x0008d054) cntbar_detail_list_event_pane_g6_ParamLimits

0xd243,	// (0x0008d054) cntbar_detail_list_event_pane_g6

0xd285,	// (0x0008d096) cntbar_detail_list_event_pane_t3_ParamLimits

0xd285,	// (0x0008d096) cntbar_detail_list_event_pane_t3

0xd297,	// (0x0008d0a8) popup_notif_wgt_window_ParamLimits

0xd297,	// (0x0008d0a8) popup_notif_wgt_window

0xd2a7,	// (0x0008d0b8) popup_submenu_window_cp01_ParamLimits

0xd2a7,	// (0x0008d0b8) popup_submenu_window_cp01

0xebbc,	// (0x0008e9cd) bg_popup_window_pane_cp10

0x3d60,	// (0x00083b71) listscroll_notif_wgt_pane

0x3d71,	// (0x00083b82) list_notif_wgt_window

0x3d7a,	// (0x00083b8b) scroll_pane_cp033

0xcf0d,	// (0x0008cd1e) list_notif_wgt_row_pane_ParamLimits

0xcf0d,	// (0x0008cd1e) list_notif_wgt_row_pane

0x3d83,	// (0x00083b94) aid_size_list_notif_wgt_del

0x3d90,	// (0x00083ba1) list_notif_wgt_row_pane_g1

0x3d9c,	// (0x00083bad) list_notif_wgt_row_pane_g2

0x3da8,	// (0x00083bb9) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x0008fcbf) list_notif_wgt_row_pane_g

0x3db5,	// (0x00083bc6) list_notif_wgt_row_pane_t1

0x3dca,	// (0x00083bdb) list_notif_wgt_row_pane_t2

0x3ddc,	// (0x00083bed) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x0008fcc6) list_notif_wgt_row_pane_t

0x2404,	// (0x00082215) list_recal_day_event_pane_g1

0x3dee,	// (0x00083bff) list_recal_day_event_pane_t1

0xf0ce,	// (0x0008eedf) bg_button_pane_cp045

0x3dfd,	// (0x00083c0e) cntbar_detail_btn_pane_t1

0x11f2,	// (0x00081003) main_callh_pane_ParamLimits

0x11f2,	// (0x00081003) main_callh_pane

0xf0ce,	// (0x0008eedf) main_coverflow0_pane

0xf0ce,	// (0x0008eedf) main_wgtman_pane

0xc43c,	// (0x0008c24d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc43c,	// (0x0008c24d) main_fs_bigclock_unlock_btn_pane

0x36c5,	// (0x000834d6) bg_button_pane_cp16

0x36d5,	// (0x000834e6) cell_tport_appsw_pane_g3

0xd2b5,	// (0x0008d0c6) cf0_flow_pane_ParamLimits

0xd2b5,	// (0x0008d0c6) cf0_flow_pane

0x3e0b,	// (0x00083c1c) listscroll_cf0_pane

0x3e16,	// (0x00083c27) main_cf0_pane_g1

0xd2c4,	// (0x0008d0d5) main_cf0_pane_t1_ParamLimits

0xd2c4,	// (0x0008d0d5) main_cf0_pane_t1

0xd2d8,	// (0x0008d0e9) main_cf0_pane_t2_ParamLimits

0xd2d8,	// (0x0008d0e9) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0008fccd) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0008fccd) main_cf0_pane_t

0x3e20,	// (0x00083c31) scroll_pane_cp11

0xd2ec,	// (0x0008d0fd) cf0_flow_pane_g1

0xd2f4,	// (0x0008d105) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0008fcd2) cf0_flow_pane_g

0xd2fc,	// (0x0008d10d) cf0_flow_pane_t1

0xf0ce,	// (0x0008eedf) main_call6_pane

0xf0ce,	// (0x0008eedf) main_calllock_pane

0xd30a,	// (0x0008d11b) call6_btn_grp_pane_ParamLimits

0xd30a,	// (0x0008d11b) call6_btn_grp_pane

0xd319,	// (0x0008d12a) call6_pane_g1_ParamLimits

0xd319,	// (0x0008d12a) call6_pane_g1

0xd328,	// (0x0008d139) popup_call6_1st_window_ParamLimits

0xd328,	// (0x0008d139) popup_call6_1st_window

0xd336,	// (0x0008d147) popup_call6_2nd_window_ParamLimits

0xd336,	// (0x0008d147) popup_call6_2nd_window

0xd344,	// (0x0008d155) cell_call6_btn_pane_ParamLimits

0xd344,	// (0x0008d155) cell_call6_btn_pane

0xebbc,	// (0x0008e9cd) bg_popup_call2_in_pane_cp03

0x3e2b,	// (0x00083c3c) popup_call6_1st_window_g1

0x3e33,	// (0x00083c44) popup_call6_1st_window_g2

0x3e3b,	// (0x00083c4c) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0008fcd7) popup_call6_1st_window_g

0x3e43,	// (0x00083c54) popup_call6_1st_window_t1

0x3e52,	// (0x00083c63) popup_call6_1st_window_t2

0x3e62,	// (0x00083c73) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0008fcde) popup_call6_1st_window_t

0xebbc,	// (0x0008e9cd) bg_popup_call2_in_pane_cp04

0x3e2b,	// (0x00083c3c) popup_call6_2nd_window_g1

0x3e33,	// (0x00083c44) popup_call6_2nd_window_g2

0x3e3b,	// (0x00083c4c) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0008fcd7) popup_call6_2nd_window_g

0x3e43,	// (0x00083c54) popup_call6_2nd_window_t1

0xf0ce,	// (0x0008eedf) bg_button_pane_cp15

0x3e72,	// (0x00083c83) cell_call6_btn_pane_g1

0x3e7b,	// (0x00083c8c) cell_call6_btn_pane_t1

0xd353,	// (0x0008d164) listscroll_wgtman_pane_ParamLimits

0xd353,	// (0x0008d164) listscroll_wgtman_pane

0xd371,	// (0x0008d182) wgtman_btn_pane_ParamLimits

0xd371,	// (0x0008d182) wgtman_btn_pane

0xea73,	// (0x0008e884) aid_scroll_copy1

0x3e8a,	// (0x00083c9b) list_wgtman_pane

0xd3a6,	// (0x0008d1b7) wgtman_btn_pane_g1_ParamLimits

0xd3a6,	// (0x0008d1b7) wgtman_btn_pane_g1

0xd3ce,	// (0x0008d1df) wgtman_btn_pane_t1_ParamLimits

0xd3ce,	// (0x0008d1df) wgtman_btn_pane_t1

0x3e94,	// (0x00083ca5) wgtman_btn_pane_t2_ParamLimits

0x3e94,	// (0x00083ca5) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0008fce5) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0008fce5) wgtman_btn_pane_t

0xd405,	// (0x0008d216) listrow_wgtman_pane_ParamLimits

0xd405,	// (0x0008d216) listrow_wgtman_pane

0xd420,	// (0x0008d231) listrow_wgtman_pane_g1

0xd42d,	// (0x0008d23e) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0008fcea) listrow_wgtman_pane_g

0xd44b,	// (0x0008d25c) listrow_wgtman_pane_t1

0xd463,	// (0x0008d274) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0008fcef) listrow_wgtman_pane_t

0xd489,	// (0x0008d29a) wait_bar_pane_cp09

0x3eab,	// (0x00083cbc) main_calllock_btn_pane

0x3eb5,	// (0x00083cc6) main_calllock_pane_g1

0xf0ce,	// (0x0008eedf) bg_button_pane_cp17

0x3ec1,	// (0x00083cd2) main_calllock_btn_pane_g1

0x3eca,	// (0x00083cdb) main_calllock_btn_pane_t1

0xf0ce,	// (0x0008eedf) main_dialer3_pane

0xf0ce,	// (0x0008eedf) main_fmrd2_pane

0x168b,	// (0x0008149c) main_fs_bigclock_unlock_btn_pane_g1

0x3ee1,	// (0x00083cf2) main_fs_bigclock_unlock_btn_pane_t1

0xd49b,	// (0x0008d2ac) area_fmrd2_info_pane_ParamLimits

0xd49b,	// (0x0008d2ac) area_fmrd2_info_pane

0xd4a9,	// (0x0008d2ba) area_fmrd2_visual_pane_ParamLimits

0xd4a9,	// (0x0008d2ba) area_fmrd2_visual_pane

0xd4b7,	// (0x0008d2c8) fmrd2_indi_pane_ParamLimits

0xd4b7,	// (0x0008d2c8) fmrd2_indi_pane

0xd4c4,	// (0x0008d2d5) area_fmrd2_visual_pane_g1

0xd4cc,	// (0x0008d2dd) area_fmrd2_visual_pane_t1

0xd4dc,	// (0x0008d2ed) area_fmrd2_visual_pane_t2

0xd4ec,	// (0x0008d2fd) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0008fcf9) area_fmrd2_visual_pane_t

0xd4fc,	// (0x0008d30d) area_fmrd2_info_pane_g1

0xd504,	// (0x0008d315) area_fmrd2_info_pane_t1

0xd514,	// (0x0008d325) area_fmrd2_info_pane_t2

0xd524,	// (0x0008d335) area_fmrd2_info_pane_t3

0xd534,	// (0x0008d345) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0008fd00) area_fmrd2_info_pane_t

0xd542,	// (0x0008d353) fmrd2_indi_pane_t1

0xd552,	// (0x0008d363) fmrd2_indi_pane_t2

0xd562,	// (0x0008d373) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0008fd09) fmrd2_indi_pane_t

0x3146,	// (0x00082f57) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3146,	// (0x00082f57) list_single_fs_bigclock_indicator_pane_g5

0x31ed,	// (0x00082ffe) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x31ed,	// (0x00082ffe) list_single_fs_bigclock_indicator_pane_t5

0xcd06,	// (0x0008cb17) aid_cell_bcale_month_pane_ParamLimits

0xcd06,	// (0x0008cb17) aid_cell_bcale_month_pane

0xcd16,	// (0x0008cb27) bcale_month_pane_ParamLimits

0xcd16,	// (0x0008cb27) bcale_month_pane

0xcd26,	// (0x0008cb37) bcale_preview_pane_ParamLimits

0xcd26,	// (0x0008cb37) bcale_preview_pane

0x3c6b,	// (0x00083a7c) list_single_fs_bigclock_pane_t1_ParamLimits

0x3c8a,	// (0x00083a9b) list_single_fs_bigclock_pane_t2_ParamLimits

0x3c8a,	// (0x00083a9b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x0008fc90) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x0008fc90) list_single_fs_bigclock_pane_t

0x3ed9,	// (0x00083cea) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0008fcf4) main_fs_bigclock_unlock_btn_pane_g

0xd570,	// (0x0008d381) aid_dia3_key_size_ParamLimits

0xd570,	// (0x0008d381) aid_dia3_key_size

0xd57c,	// (0x0008d38d) aid_dia3_listrow_size_ParamLimits

0xd57c,	// (0x0008d38d) aid_dia3_listrow_size

0xd58c,	// (0x0008d39d) dia3_keypad_fun_pane_ParamLimits

0xd58c,	// (0x0008d39d) dia3_keypad_fun_pane

0xd59e,	// (0x0008d3af) dia3_keypad_num_pane_ParamLimits

0xd59e,	// (0x0008d3af) dia3_keypad_num_pane

0xd5b0,	// (0x0008d3c1) dia3_listscroll_pane_ParamLimits

0xd5b0,	// (0x0008d3c1) dia3_listscroll_pane

0xd5be,	// (0x0008d3cf) dia3_numentry_pane_ParamLimits

0xd5be,	// (0x0008d3cf) dia3_numentry_pane

0x3eef,	// (0x00083d00) dia3_list_pane

0x3efa,	// (0x00083d0b) scroll_pane_cp12

0xf0ce,	// (0x0008eedf) bg_dia3_numentry_pane

0xd5cc,	// (0x0008d3dd) dia3_numentry_pane_t1

0xd5db,	// (0x0008d3ec) cell_dia3_key_num_pane

0xd5e3,	// (0x0008d3f4) cell_dia3_key0_fun_pane_ParamLimits

0xd5e3,	// (0x0008d3f4) cell_dia3_key0_fun_pane

0xd5f0,	// (0x0008d401) cell_dia3_key1_fun_pane_ParamLimits

0xd5f0,	// (0x0008d401) cell_dia3_key1_fun_pane

0xd5fd,	// (0x0008d40e) dia3_listrow_pane

0x2e4a,	// (0x00082c5b) bg_dia3_numentry_pane_g1

0xf0ce,	// (0x0008eedf) bg_button_pane_cp21

0x3f05,	// (0x00083d16) cell_dia3_key_num_pane_t1

0x3f13,	// (0x00083d24) cell_dia3_key_num_pane_t2

0x3f22,	// (0x00083d33) cell_dia3_key_num_pane_t3

0x3f31,	// (0x00083d42) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0008fd10) cell_dia3_key_num_pane_t

0xf0ce,	// (0x0008eedf) bg_button_pane_cp19

0xd60a,	// (0x0008d41b) cell_dia3_key0_fun_pane_g1

0xf0ce,	// (0x0008eedf) bg_button_pane_cp20

0xd612,	// (0x0008d423) cell_dia3_key1_fun_pane_g1

0xd61a,	// (0x0008d42b) area_left_week_number_pane

0xd624,	// (0x0008d435) area_top_day_name_pane

0xd630,	// (0x0008d441) frame_month_view_pane

0xd63a,	// (0x0008d44b) grid_month_view_pane

0x3f40,	// (0x00083d51) cell_top_day_name_pane_ParamLimits

0x3f40,	// (0x00083d51) cell_top_day_name_pane

0xd644,	// (0x0008d455) cell_area_left_week_number_pane_ParamLimits

0xd644,	// (0x0008d455) cell_area_left_week_number_pane

0xd658,	// (0x0008d469) cell_month_view_pane_ParamLimits

0xd658,	// (0x0008d469) cell_month_view_pane

0x3f5a,	// (0x00083d6b) frm_month_g1

0xd675,	// (0x0008d486) frm_month_g2

0xd67f,	// (0x0008d490) frm_month_g3

0xd689,	// (0x0008d49a) frm_month_g4

0xd693,	// (0x0008d4a4) frm_month_g5

0xd69d,	// (0x0008d4ae) frm_month_g6

0xd6a7,	// (0x0008d4b8) frm_month_g7

0x3f63,	// (0x00083d74) frm_month_g8

0x3f6c,	// (0x00083d7d) frm_month_g9

0x3f75,	// (0x00083d86) frm_month_g10

0x3f7e,	// (0x00083d8f) frm_month_g11

0x3f87,	// (0x00083d98) frm_month_g12

0x3f90,	// (0x00083da1) frm_month_g13

0x3f99,	// (0x00083daa) frm_month_g14

0x3fa4,	// (0x00083db5) frm_month_g15

0x3faf,	// (0x00083dc0) frm_month_g16

0x000f,

0xff08,	// (0x0008fd19) frm_month_g

0xd6b1,	// (0x0008d4c2) cell_top_day_name_pane_t1

0xd6c0,	// (0x0008d4d1) cell_area_left_week_number_pane_g1

0xd6c8,	// (0x0008d4d9) cell_area_left_week_number_pane_t1

0x168b,	// (0x0008149c) cell_month_view_pane_g1

0xd6d7,	// (0x0008d4e8) cell_month_view_pane_t1

0xf0ce,	// (0x0008eedf) main_fps_pane

0x3429,	// (0x0008323a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3429,	// (0x0008323a) cmail_ddmenu_btn02_pane_cp1

0x3445,	// (0x00083256) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3445,	// (0x00083256) cmail_ddmenu_btn02_pane_cp2

0xcfd4,	// (0x0008cde5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcfd4,	// (0x0008cde5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x0008fc43) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x0008fc43) cmail_ddmenu_btn02_pane_g

0xcff2,	// (0x0008ce03) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcff2,	// (0x0008ce03) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x0008fc48) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x0008fc48) cmail_ddmenu_btn02_pane_t

0xd6e6,	// (0x0008d4f7) fps_text_pane_ParamLimits

0xd6e6,	// (0x0008d4f7) fps_text_pane

0xd6f3,	// (0x0008d504) main_fps_pane_g1_ParamLimits

0xd6f3,	// (0x0008d504) main_fps_pane_g1

0xd701,	// (0x0008d512) wait_bar_pane_cp010_ParamLimits

0xd701,	// (0x0008d512) wait_bar_pane_cp010

0xd70d,	// (0x0008d51e) fps_text_pane_t1_ParamLimits

0xd70d,	// (0x0008d51e) fps_text_pane_t1

0xa6d4,	// (0x0008a4e5) cam4_image_uncrop_pane_g1

0xa6dd,	// (0x0008a4ee) cam4_image_uncrop_pane_g2

0xa6e6,	// (0x0008a4f7) cam4_image_uncrop_pane_g3

0xa6ef,	// (0x0008a500) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0008f70a) cam4_image_uncrop_pane_g

0xd5fd,	// (0x0008d40e) dia3_listrow_pane_ParamLimits

0xf0ce,	// (0x0008eedf) main_phob2_pane

0xcb47,	// (0x0008c958) cell_tport_appsw_pane_cp02_ParamLimits

0xcb47,	// (0x0008c958) cell_tport_appsw_pane_cp02

0xcb56,	// (0x0008c967) cell_tport_appsw_pane_cp03_ParamLimits

0xcb56,	// (0x0008c967) cell_tport_appsw_pane_cp03

0xf0ce,	// (0x0008eedf) phob2_contact_card_pane

0xf0ce,	// (0x0008eedf) phob2_listscroll_pane

0x3fba,	// (0x00083dcb) phob2_list_pane

0x3fc2,	// (0x00083dd3) scroll_pane_cp034

0xd726,	// (0x0008d537) phob2_cc_data_pane_ParamLimits

0xd726,	// (0x0008d537) phob2_cc_data_pane

0xd740,	// (0x0008d551) phob2_cc_listscroll_pane_ParamLimits

0xd740,	// (0x0008d551) phob2_cc_listscroll_pane

0xd75a,	// (0x0008d56b) list_double_large_graphic_phob2_pane_ParamLimits

0xd75a,	// (0x0008d56b) list_double_large_graphic_phob2_pane

0xd778,	// (0x0008d589) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd778,	// (0x0008d589) list_double_large_graphic_phob2_pane_g1

0xd785,	// (0x0008d596) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd785,	// (0x0008d596) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0008fd3a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0008fd3a) list_double_large_graphic_phob2_pane_g

0xd791,	// (0x0008d5a2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd791,	// (0x0008d5a2) list_double_large_graphic_phob2_pane_t1

0xd7a6,	// (0x0008d5b7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd7a6,	// (0x0008d5b7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0008fd3f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0008fd3f) list_double_large_graphic_phob2_pane_t

0xf0ce,	// (0x0008eedf) list_highlight_pane_cp024

0x3fca,	// (0x00083ddb) phob2_cc_button_pane

0xd7b8,	// (0x0008d5c9) phob2_cc_data_pane_g1_ParamLimits

0xd7b8,	// (0x0008d5c9) phob2_cc_data_pane_g1

0xd7c4,	// (0x0008d5d5) phob2_cc_data_pane_g2_ParamLimits

0xd7c4,	// (0x0008d5d5) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0008fd44) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0008fd44) phob2_cc_data_pane_g

0xd7d0,	// (0x0008d5e1) phob2_cc_data_pane_t1_ParamLimits

0xd7d0,	// (0x0008d5e1) phob2_cc_data_pane_t1

0xd7e2,	// (0x0008d5f3) phob2_cc_data_pane_t2_ParamLimits

0xd7e2,	// (0x0008d5f3) phob2_cc_data_pane_t2

0xd7f4,	// (0x0008d605) phob2_cc_data_pane_t3_ParamLimits

0xd7f4,	// (0x0008d605) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0008fd49) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0008fd49) phob2_cc_data_pane_t

0x3fd2,	// (0x00083de3) phob2_cc_list_pane_ParamLimits

0x3fd2,	// (0x00083de3) phob2_cc_list_pane

0x24af,	// (0x000822c0) scroll_pane_cp035_ParamLimits

0x24af,	// (0x000822c0) scroll_pane_cp035

0x0011,	// (0x0007fe22) bg_button_pane_cp033

0x3fde,	// (0x00083def) phob2_cc_button_pane_g1

0x3fea,	// (0x00083dfb) phob2_cc_button_pane_t1

0x3fff,	// (0x00083e10) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0008fd50) phob2_cc_button_pane_t

0xd806,	// (0x0008d617) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd806,	// (0x0008d617) list_double_large_graphic_phob2_cc_pane

0xd82d,	// (0x0008d63e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd82d,	// (0x0008d63e) list_double_large_graphic_phob2_cc_pane_g1

0xd83e,	// (0x0008d64f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd83e,	// (0x0008d64f) list_double_large_graphic_phob2_cc_pane_g2

0xd84d,	// (0x0008d65e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd84d,	// (0x0008d65e) list_double_large_graphic_phob2_cc_pane_g3

0xd85c,	// (0x0008d66d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd85c,	// (0x0008d66d) list_double_large_graphic_phob2_cc_pane_g4

0xd86d,	// (0x0008d67e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd86d,	// (0x0008d67e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0008fd55) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0008fd55) list_double_large_graphic_phob2_cc_pane_g

0xd87c,	// (0x0008d68d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd87c,	// (0x0008d68d) list_double_large_graphic_phob2_cc_pane_t1

0xd8a5,	// (0x0008d6b6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd8a5,	// (0x0008d6b6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0008fd60) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0008fd60) list_double_large_graphic_phob2_cc_pane_t

0x4011,	// (0x00083e22) list_highlight_pane_cp025_ParamLimits

0x4011,	// (0x00083e22) list_highlight_pane_cp025

0x0011,	// (0x0007fe22) bg_button_pane_cp033_ParamLimits

0x3fde,	// (0x00083def) phob2_cc_button_pane_g1_ParamLimits

0x3fea,	// (0x00083dfb) phob2_cc_button_pane_t1_ParamLimits

0x3fff,	// (0x00083e10) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0008fd50) phob2_cc_button_pane_t_ParamLimits

0x58e0,	// (0x000856f1) popup_wgtman_window

0x228d,	// (0x0008209e) scroll_pane_cp038

0xd38e,	// (0x0008d19f) wgtman_btn_pane_cp_01_ParamLimits

0xd38e,	// (0x0008d19f) wgtman_btn_pane_cp_01

0x401f,	// (0x00083e30) wgtman_content_pane

0x4028,	// (0x00083e39) wgtman_heading_pane

0xf0ce,	// (0x0008eedf) bg_heading_pane_cp02

0x4031,	// (0x00083e42) wgtman_heading_pane_g1

0x4039,	// (0x00083e4a) wgtman_heading_pane_t1

0x4047,	// (0x00083e58) scroll_pane_cp036

0x404f,	// (0x00083e60) wgtman_list_pane

0x4057,	// (0x00083e68) wgtman_list_pane_t1_ParamLimits

0x4057,	// (0x00083e68) wgtman_list_pane_t1

0xa633,	// (0x0008a444) cam4_grid_pane

0xb337,	// (0x0008b148) bg_button_pane_cp015_ParamLimits

0xb349,	// (0x0008b15a) bg_button_pane_cp016_ParamLimits

0xb35c,	// (0x0008b16d) bg_button_pane_cp017_ParamLimits

0xb3b2,	// (0x0008b1c3) popup_vitu2_query_window_g3_ParamLimits

0xb3b2,	// (0x0008b1c3) popup_vitu2_query_window_g3

0xb46d,	// (0x0008b27e) popup_vitu2_query_window_t6_ParamLimits

0xb46d,	// (0x0008b27e) popup_vitu2_query_window_t6

0xb498,	// (0x0008b2a9) popup_vitu2_query_window_t7_ParamLimits

0xb498,	// (0x0008b2a9) popup_vitu2_query_window_t7

0x20c4,	// (0x00081ed5) cam4_grid_pane_g1

0x20cd,	// (0x00081ede) cam4_grid_pane_g2

0x4071,	// (0x00083e82) cam4_grid_pane_g3

0x407a,	// (0x00083e8b) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0008fd65) cam4_grid_pane_g

0x665b,	// (0x0008646c) aid_placing_vt_slider_lsc_ParamLimits

0x69a7,	// (0x000867b8) vidtel_button_pane_ParamLimits

0x69a7,	// (0x000867b8) vidtel_button_pane

0x4085,	// (0x00083e96) bg_button_pane_cp034

0xd8ce,	// (0x0008d6df) vidtel_button_pane_g1

0x408f,	// (0x00083ea0) vidtel_button_pane_t1

0x23ce,	// (0x000821df) aid_size_vtel_slider_touch

0x24af,	// (0x000822c0) scroll_pane_cp039

0x2e88,	// (0x00082c99) ncim_query_button_pane_cp01_ParamLimits

0x2ea7,	// (0x00082cb8) ncimui_query_pane_g1_ParamLimits

0x0011,	// (0x0007fe22) input_focus_pane_cp012_ParamLimits

0x2ecc,	// (0x00082cdd) ncim_query_entry_pane_t1_ParamLimits

0x24af,	// (0x000822c0) scroll_pane_cp039_ParamLimits

0x794f,	// (0x00087760) navi_pane_bcale_mc_g1

0x7957,	// (0x00087768) navi_pane_bcale_mc_t1

0x348e,	// (0x0008329f) main_sp_fs_email_pane_g1

0x3496,	// (0x000832a7) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x0008fb01) main_sp_fs_email_pane_g

0x3905,	// (0x00083716) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3905,	// (0x00083716) list_single_cale_mrui_row_pane_g3

0xd01a,	// (0x0008ce2b) list_single_recal_day_pane_g5_event_pane

0x3aca,	// (0x000838db) list_single_recal_day_pane_g7

0x409d,	// (0x00083eae) list_recal_day_event_pane_cp01

0x40a6,	// (0x00083eb7) list_recal_vselct_arw_lo_pane_cp01

0x40ae,	// (0x00083ebf) list_recal_vselct_arw_up_pane_cp01

0x40b6,	// (0x00083ec7) list_recal_vselct_pane_cp01

0x2404,	// (0x00082215) list_recal_day_event_pane_cp01_g1

0x40c0,	// (0x00083ed1) list_recal_day_event_pane_cp01_t1

0x3ad2,	// (0x000838e3) list_single_recal_day_pane_t1_ParamLimits

0x3ae4,	// (0x000838f5) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x0008fc58) list_single_recal_day_pane_t_ParamLimits

0xe0ab,	// (0x0008debc) bg_notes_pane_ParamLimits

0xe0b9,	// (0x0008deca) list_notes_pane_ParamLimits

0x5c48,	// (0x00085a59) scroll_pane_cp06_ParamLimits

0xe0db,	// (0x0008deec) main_notes_pane_ParamLimits

0xf0ce,	// (0x0008eedf) main_welc_pane

0xd8d6,	// (0x0008d6e7) main_welc_body_pane_ParamLimits

0xd8d6,	// (0x0008d6e7) main_welc_body_pane

0xd8f0,	// (0x0008d701) main_welc_opti_pane_ParamLimits

0xd8f0,	// (0x0008d701) main_welc_opti_pane

0xd923,	// (0x0008d734) main_welc_pane_t1_ParamLimits

0xd923,	// (0x0008d734) main_welc_pane_t1

0xcbcf,	// (0x0008c9e0) main_welc_body_row_pane_ParamLimits

0xcbcf,	// (0x0008c9e0) main_welc_body_row_pane

0xd93d,	// (0x0008d74e) main_welc_opti_row_pane_ParamLimits

0xd93d,	// (0x0008d74e) main_welc_opti_row_pane

0x40ce,	// (0x00083edf) main_welc_opti_row_pane_g1

0x40d6,	// (0x00083ee7) main_welc_opti_row_pane_t1

0x40e5,	// (0x00083ef6) main_welc_body_row_pane_t1

0x3d69,	// (0x00083b7a) popup_notif_wgt_heading_pane

0x3d83,	// (0x00083b94) aid_size_list_notif_wgt_del_ParamLimits

0x3d90,	// (0x00083ba1) list_notif_wgt_row_pane_g1_ParamLimits

0x3d9c,	// (0x00083bad) list_notif_wgt_row_pane_g2_ParamLimits

0x3da8,	// (0x00083bb9) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x0008fcbf) list_notif_wgt_row_pane_g_ParamLimits

0x3db5,	// (0x00083bc6) list_notif_wgt_row_pane_t1_ParamLimits

0x3dca,	// (0x00083bdb) list_notif_wgt_row_pane_t2_ParamLimits

0x3ddc,	// (0x00083bed) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x0008fcc6) list_notif_wgt_row_pane_t_ParamLimits

0xd420,	// (0x0008d231) listrow_wgtman_pane_g1_ParamLimits

0xd42d,	// (0x0008d23e) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0008fcea) listrow_wgtman_pane_g_ParamLimits

0xd44b,	// (0x0008d25c) listrow_wgtman_pane_t1_ParamLimits

0xd463,	// (0x0008d274) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0008fcef) listrow_wgtman_pane_t_ParamLimits

0xd489,	// (0x0008d29a) wait_bar_pane_cp09_ParamLimits

0xf0ce,	// (0x0008eedf) bg_popup_heading_pane_cp02

0x40f4,	// (0x00083f05) popup_notif_wgt_heading_pane_g1

0x40fc,	// (0x00083f0d) popup_notif_wgt_heading_pane_t1

0xf0ce,	// (0x0008eedf) main_vids_pane

0xf0ce,	// (0x0008eedf) vids_listscroll_pane

0xd94e,	// (0x0008d75f) scroll_pane_cp040

0xf0ce,	// (0x0008eedf) vids_list_pane

0xd959,	// (0x0008d76a) vids_list_double_pane_ParamLimits

0xd959,	// (0x0008d76a) vids_list_double_pane

0xd973,	// (0x0008d784) vids_list_double_pane_g1

0xd97c,	// (0x0008d78d) vids_list_double_pane_t1

0xd98c,	// (0x0008d79d) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0008fd73) vids_list_double_pane_t

0x8765,	// (0x00088576) main_ncimui_pane_ParamLimits

0xc00a,	// (0x0008be1b) main_ncimui_pane_g1_ParamLimits

0xc016,	// (0x0008be27) main_ncimui_pane_g2_ParamLimits

0xc016,	// (0x0008be27) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x0008fa06) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x0008fa06) main_ncimui_pane_g

0xd909,	// (0x0008d71a) main_welc_pane_g1_ParamLimits

0xd909,	// (0x0008d71a) main_welc_pane_g1

0xd915,	// (0x0008d726) main_welc_pane_g2_ParamLimits

0xd915,	// (0x0008d726) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0008fd6e) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0008fd6e) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
