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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002ed35 };

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
0x6093,	// (0x00034dc8) Screen

0x609f,	// (0x00034dd4) application_window

0x60fb,	// (0x00034e30) area_bottom_pane_ParamLimits

0x60fb,	// (0x00034e30) area_bottom_pane

0x6153,	// (0x00034e88) area_top_pane_ParamLimits

0x6153,	// (0x00034e88) area_top_pane

0x61b7,	// (0x00034eec) call_video_uplink_pane_ParamLimits

0x61b7,	// (0x00034eec) call_video_uplink_pane

0x61f6,	// (0x00034f2b) main_pane_ParamLimits

0x61f6,	// (0x00034f2b) main_pane

0x153e,	// (0x00030273) context_pane

0x8f96,	// (0x00037ccb) navi_pane

0x8fbc,	// (0x00037cf1) popup_cale_events_window_ParamLimits

0x8fbc,	// (0x00037cf1) popup_cale_events_window

0x1551,	// (0x00030286) popup_mup_playback_window

0x8fd4,	// (0x00037d09) signal_pane

0xe034,	// (0x0003cd69) main_browser_pane

0xe1e6,	// (0x0003cf1b) main_burst_pane

0x8e16,	// (0x00037b4b) main_calc_pane

0x14de,	// (0x00030213) main_cale_day_pane

0x67e0,	// (0x00035515) main_cale_month_pane

0x14de,	// (0x00030213) main_cale_week_pane

0xe1e6,	// (0x0003cf1b) main_call_pane

0xdcec,	// (0x0003ca21) main_call_poc_pane

0xe1e6,	// (0x0003cf1b) main_camera_pane

0xe1e6,	// (0x0003cf1b) main_chi_dic_pane

0xe9cb,	// (0x0003d700) main_clock_pane

0xdcec,	// (0x0003ca21) main_fmradio_pane

0xe1e6,	// (0x0003cf1b) main_graph_messa_pane

0xdcec,	// (0x0003ca21) main_help_pane

0xe034,	// (0x0003cd69) main_im_pane

0xdf47,	// (0x0003cc7c) main_image_pane_ParamLimits

0xdf47,	// (0x0003cc7c) main_image_pane

0xdcec,	// (0x0003ca21) main_location2_pane

0xe1e6,	// (0x0003cf1b) main_location_pane

0xdf47,	// (0x0003cc7c) main_messa_pane

0xdcec,	// (0x0003ca21) main_mp2_pane

0xe1e6,	// (0x0003cf1b) main_mp_pane

0xdcec,	// (0x0003ca21) main_msg_pane

0xdcec,	// (0x0003ca21) main_mup_eq_pane

0xdcec,	// (0x0003ca21) main_mup_pane

0xe034,	// (0x0003cd69) main_notes_pane

0xdcec,	// (0x0003ca21) main_pec_pane

0xdcec,	// (0x0003ca21) main_phob_pane

0xdcec,	// (0x0003ca21) main_pinb_pane

0xdcec,	// (0x0003ca21) main_postcard_pane

0xdcec,	// (0x0003ca21) main_qdial_pane

0xe1e6,	// (0x0003cf1b) main_skin_pane

0xdcec,	// (0x0003ca21) main_smil2_pane

0xe1e6,	// (0x0003cf1b) main_smil_pane

0xe1e6,	// (0x0003cf1b) main_video_pane

0xe1e6,	// (0x0003cf1b) main_video_tele_pane

0xdf47,	// (0x0003cc7c) main_viewer_pane_ParamLimits

0xdf47,	// (0x0003cc7c) main_viewer_pane

0xe1e6,	// (0x0003cf1b) main_vorec_pane

0x8e60,	// (0x00037b95) popup_blid_sat_info_window_ParamLimits

0x8e60,	// (0x00037b95) popup_blid_sat_info_window

0x8e80,	// (0x00037bb5) popup_dyc_status_message_window_ParamLimits

0x8e80,	// (0x00037bb5) popup_dyc_status_message_window

0x8e90,	// (0x00037bc5) popup_grid_large_graphic_window_ParamLimits

0x8e90,	// (0x00037bc5) popup_grid_large_graphic_window

0x8f21,	// (0x00037c56) popup_loc_request_window_ParamLimits

0x8f21,	// (0x00037c56) popup_loc_request_window

0x8f6e,	// (0x00037ca3) popup_wml_address_window_ParamLimits

0x8f6e,	// (0x00037ca3) popup_wml_address_window

0x8cee,	// (0x00037a23) call_muted_g1

0x8969,	// (0x0003769e) popup_call_audio_conf_window_ParamLimits

0x8969,	// (0x0003769e) popup_call_audio_conf_window

0x8cfe,	// (0x00037a33) popup_call_audio_first_window_ParamLimits

0x8cfe,	// (0x00037a33) popup_call_audio_first_window

0x8d3e,	// (0x00037a73) popup_call_audio_in_window_ParamLimits

0x8d3e,	// (0x00037a73) popup_call_audio_in_window

0x8d62,	// (0x00037a97) popup_call_audio_out_window_ParamLimits

0x8d62,	// (0x00037a97) popup_call_audio_out_window

0x8d84,	// (0x00037ab9) popup_call_audio_second_window_ParamLimits

0x8d84,	// (0x00037ab9) popup_call_audio_second_window

0x8db4,	// (0x00037ae9) popup_call_audio_wait_window_ParamLimits

0x8db4,	// (0x00037ae9) popup_call_audio_wait_window

0x8dd5,	// (0x00037b0a) popup_number_entry_window_ParamLimits

0x8dd5,	// (0x00037b0a) popup_number_entry_window

0xd8d9,	// (0x0003c60e) bg_popup_call_pane_cp05_ParamLimits

0xd8d9,	// (0x0003c60e) bg_popup_call_pane_cp05

0xd8f9,	// (0x0003c62e) popup_number_entry_window_t1

0xd90c,	// (0x0003c641) popup_number_entry_window_t2

0xd91e,	// (0x0003c653) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0003ddba) popup_number_entry_window_t

0xd930,	// (0x0003c665) text_title_cp2

0xd943,	// (0x0003c678) bg_popup_call_pane_cp_ParamLimits

0xd943,	// (0x0003c678) bg_popup_call_pane_cp

0xd951,	// (0x0003c686) call_thumbnail_pane

0xd959,	// (0x0003c68e) popup_call_audio_in_window_g1_ParamLimits

0xd959,	// (0x0003c68e) popup_call_audio_in_window_g1

0xd965,	// (0x0003c69a) popup_call_audio_in_window_g2_ParamLimits

0xd965,	// (0x0003c69a) popup_call_audio_in_window_g2

0xd971,	// (0x0003c6a6) popup_call_audio_in_window_g3_ParamLimits

0xd971,	// (0x0003c6a6) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0003ddc3) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0003ddc3) popup_call_audio_in_window_g

0xd97d,	// (0x0003c6b2) popup_call_audio_in_window_t1_ParamLimits

0xd97d,	// (0x0003c6b2) popup_call_audio_in_window_t1

0xd999,	// (0x0003c6ce) popup_call_audio_in_window_t2_ParamLimits

0xd999,	// (0x0003c6ce) popup_call_audio_in_window_t2

0xd9b5,	// (0x0003c6ea) popup_call_audio_in_window_t3_ParamLimits

0xd9b5,	// (0x0003c6ea) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0003ddca) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0003ddca) popup_call_audio_in_window_t

0xd943,	// (0x0003c678) bg_popup_call_pane_cp01_ParamLimits

0xd943,	// (0x0003c678) bg_popup_call_pane_cp01

0xd951,	// (0x0003c686) call_thumbnail_pane_cp02

0xd9c8,	// (0x0003c6fd) call_type_pane_cp022

0xd9d0,	// (0x0003c705) popup_call_audio_out_window_g1_ParamLimits

0xd9d0,	// (0x0003c705) popup_call_audio_out_window_g1

0xd9e2,	// (0x0003c717) popup_call_audio_out_window_g2_ParamLimits

0xd9e2,	// (0x0003c717) popup_call_audio_out_window_g2

0xd9ee,	// (0x0003c723) popup_call_audio_out_window_g3_ParamLimits

0xd9ee,	// (0x0003c723) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0003ddd1) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0003ddd1) popup_call_audio_out_window_g

0xda00,	// (0x0003c735) popup_call_audio_out_window_t1_ParamLimits

0xda00,	// (0x0003c735) popup_call_audio_out_window_t1

0xda18,	// (0x0003c74d) popup_call_audio_out_window_t2_ParamLimits

0xda18,	// (0x0003c74d) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0003ddd8) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0003ddd8) popup_call_audio_out_window_t

0xda2d,	// (0x0003c762) bg_popup_call_pane_ParamLimits

0xda2d,	// (0x0003c762) bg_popup_call_pane

0x63f7,	// (0x0003512c) call_thumbnail_pane_cp_ParamLimits

0x63f7,	// (0x0003512c) call_thumbnail_pane_cp

0xdab1,	// (0x0003c7e6) call_type_pane_cp01_ParamLimits

0xdab1,	// (0x0003c7e6) call_type_pane_cp01

0xdaf5,	// (0x0003c82a) popup_call_audio_first_window_g1_ParamLimits

0xdaf5,	// (0x0003c82a) popup_call_audio_first_window_g1

0xdb41,	// (0x0003c876) popup_call_audio_first_window_g2_ParamLimits

0xdb41,	// (0x0003c876) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0003dddd) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0003dddd) popup_call_audio_first_window_g

0xdb85,	// (0x0003c8ba) popup_call_audio_first_window_t1_ParamLimits

0xdb85,	// (0x0003c8ba) popup_call_audio_first_window_t1

0xdc31,	// (0x0003c966) popup_call_audio_first_window_t4_ParamLimits

0xdc31,	// (0x0003c966) popup_call_audio_first_window_t4

0xdcbd,	// (0x0003c9f2) popup_call_audio_first_window_t5_ParamLimits

0xdcbd,	// (0x0003c9f2) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0003dde2) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0003dde2) popup_call_audio_first_window_t

0xdcec,	// (0x0003ca21) bg_popup_call_pane_cp02

0xdcf6,	// (0x0003ca2b) call_type_pane_cp023

0xdcfe,	// (0x0003ca33) popup_call_audio_wait_window_g1

0xdd06,	// (0x0003ca3b) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0003dde9) popup_call_audio_wait_window_g

0xdd0e,	// (0x0003ca43) popup_call_audio_wait_window_t3

0xdd1c,	// (0x0003ca51) bg_popup_call_pane_cp03_ParamLimits

0xdd1c,	// (0x0003ca51) bg_popup_call_pane_cp03

0xdd7c,	// (0x0003cab1) call_thumbnail_pane_cp011_ParamLimits

0xdd7c,	// (0x0003cab1) call_thumbnail_pane_cp011

0xdd88,	// (0x0003cabd) call_type_pane_cp034_ParamLimits

0xdd88,	// (0x0003cabd) call_type_pane_cp034

0xddc4,	// (0x0003caf9) popup_call_audio_second_window_g1_ParamLimits

0xddc4,	// (0x0003caf9) popup_call_audio_second_window_g1

0xde00,	// (0x0003cb35) popup_call_audio_second_window_g2_ParamLimits

0xde00,	// (0x0003cb35) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0003ddee) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0003ddee) popup_call_audio_second_window_g

0xde3c,	// (0x0003cb71) popup_call_audio_second_window_t1_ParamLimits

0xde3c,	// (0x0003cb71) popup_call_audio_second_window_t1

0xdebd,	// (0x0003cbf2) popup_call_audio_second_window_t2_ParamLimits

0xdebd,	// (0x0003cbf2) popup_call_audio_second_window_t2

0xdef3,	// (0x0003cc28) popup_call_audio_second_window_t3_ParamLimits

0xdef3,	// (0x0003cc28) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0003ddf3) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0003ddf3) popup_call_audio_second_window_t

0xdcec,	// (0x0003ca21) bg_popup_call_pane_cp04

0xdf29,	// (0x0003cc5e) list_conf_pane

0xdf31,	// (0x0003cc66) popup_call_audio_conf_window_t1

0xdf3f,	// (0x0003cc74) call_thumbnail_pane_g1

0xdf47,	// (0x0003cc7c) bg_pinb_pane_ParamLimits

0xdf47,	// (0x0003cc7c) bg_pinb_pane

0xdf55,	// (0x0003cc8a) find_pinb_pane

0xdf47,	// (0x0003cc7c) listscroll_pinb_pane_ParamLimits

0xdf47,	// (0x0003cc7c) listscroll_pinb_pane

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g1

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g2

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g3

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g4

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g5

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g6

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g7

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g8

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g9

0xdf5f,	// (0x0003cc94) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0003ddfa) pinb_bg_pane_g

0xd8c1,	// (0x0003c5f6) grid_pinb_pane

0xd8c1,	// (0x0003c5f6) list_pinb_pane

0xdf69,	// (0x0003cc9e) scroll_pane_cp01_ParamLimits

0xdf69,	// (0x0003cc9e) scroll_pane_cp01

0xdf77,	// (0x0003ccac) find_pinb_pane_g1_ParamLimits

0xdf77,	// (0x0003ccac) find_pinb_pane_g1

0xdf8f,	// (0x0003ccc4) find_pinb_pane_t1

0xdfa1,	// (0x0003ccd6) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0003de14) find_pinb_pane_t

0xdfb6,	// (0x0003cceb) input_focus_pane_cp01_ParamLimits

0xdfb6,	// (0x0003cceb) input_focus_pane_cp01

0xd8cb,	// (0x0003c600) cell_pinb_pane_ParamLimits

0xd8cb,	// (0x0003c600) cell_pinb_pane

0xdfc2,	// (0x0003ccf7) cell_pinb_pane_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) cell_pinb_pane_g1

0xdfd0,	// (0x0003cd05) cell_pinb_pane_g2_ParamLimits

0xdfd0,	// (0x0003cd05) cell_pinb_pane_g2

0xdfd0,	// (0x0003cd05) cell_pinb_pane_g3_ParamLimits

0xdfd0,	// (0x0003cd05) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0003de19) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0003de19) cell_pinb_pane_g

0xdcec,	// (0x0003ca21) grid_highlight_pane_cp01

0xd8cb,	// (0x0003c600) list_pinb_item_pane_ParamLimits

0xd8cb,	// (0x0003c600) list_pinb_item_pane

0xd8c1,	// (0x0003c5f6) list_highlight_pane_cp02

0xdfde,	// (0x0003cd13) list_pinb_item_pane_g1_ParamLimits

0xdfde,	// (0x0003cd13) list_pinb_item_pane_g1

0xdfd0,	// (0x0003cd05) list_pinb_item_pane_g2_ParamLimits

0xdfd0,	// (0x0003cd05) list_pinb_item_pane_g2

0xdfc2,	// (0x0003ccf7) list_pinb_item_pane_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_pinb_item_pane_g3

0xdfd0,	// (0x0003cd05) list_pinb_item_pane_g4_ParamLimits

0xdfd0,	// (0x0003cd05) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0003de20) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0003de20) list_pinb_item_pane_g

0xdfec,	// (0x0003cd21) list_pinb_item_pane_t1_ParamLimits

0xdfec,	// (0x0003cd21) list_pinb_item_pane_t1

0x6435,	// (0x0003516a) calc_display_pane

0x6453,	// (0x00035188) calc_paper_pane

0x646f,	// (0x000351a4) grid_calc_pane

0xdcec,	// (0x0003ca21) bg_list_pane_cp01

0x649b,	// (0x000351d0) clock_g1

0x64a3,	// (0x000351d8) clock_g2

0x0001,

0xf0f4,	// (0x0003de29) clock_g

0x64ad,	// (0x000351e2) clock_t1_ParamLimits

0x64ad,	// (0x000351e2) clock_t1

0x64c2,	// (0x000351f7) clock_t2_ParamLimits

0x64c2,	// (0x000351f7) clock_t2

0x64d4,	// (0x00035209) clock_t3_ParamLimits

0x64d4,	// (0x00035209) clock_t3

0x64e6,	// (0x0003521b) clock_t4_ParamLimits

0x64e6,	// (0x0003521b) clock_t4

0x64f8,	// (0x0003522d) clock_t5_ParamLimits

0x64f8,	// (0x0003522d) clock_t5

0x650d,	// (0x00035242) clock_t6_ParamLimits

0x650d,	// (0x00035242) clock_t6

0x651f,	// (0x00035254) clock_t7_ParamLimits

0x651f,	// (0x00035254) clock_t7

0x6531,	// (0x00035266) clock_t8_ParamLimits

0x6531,	// (0x00035266) clock_t8

0x6547,	// (0x0003527c) clock_t9_ParamLimits

0x6547,	// (0x0003527c) clock_t9

0x0008,

0xf0f9,	// (0x0003de2e) clock_t_ParamLimits

0xf0f9,	// (0x0003de2e) clock_t

0xe000,	// (0x0003cd35) popup_clock_analogue_window_cp02

0xe000,	// (0x0003cd35) popup_clock_digital_window_cp01

0xdcec,	// (0x0003ca21) listscroll_help_pane

0xdcec,	// (0x0003ca21) phob_pre_status_pane

0xe008,	// (0x0003cd3d) grid_qdial_pane

0xdf47,	// (0x0003cc7c) listscroll_mce_pane

0xdf47,	// (0x0003cc7c) bg_notes_pane

0xe012,	// (0x0003cd47) list_notes_pane

0x655d,	// (0x00035292) scroll_pane_cp06

0xe020,	// (0x0003cd55) bg_calc_paper_pane

0x656c,	// (0x000352a1) list_calc_pane

0xe034,	// (0x0003cd69) bg_calc_display_pane

0x6586,	// (0x000352bb) calc_display_pane_t1

0x659b,	// (0x000352d0) calc_display_pane_t2

0x65b0,	// (0x000352e5) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0003de41) calc_display_pane_t

0x65c2,	// (0x000352f7) cell_calc_pane_ParamLimits

0x65c2,	// (0x000352f7) cell_calc_pane

0xe040,	// (0x0003cd75) bg_calc_paper_pane_g1

0xe04c,	// (0x0003cd81) bg_calc_paper_pane_g2

0xe058,	// (0x0003cd8d) bg_calc_paper_pane_g3

0xe064,	// (0x0003cd99) bg_calc_paper_pane_g4

0xe070,	// (0x0003cda5) bg_calc_paper_pane_g5

0x65ef,	// (0x00035324) bg_calc_paper_pane_g6

0x6600,	// (0x00035335) bg_calc_paper_pane_g7

0x6611,	// (0x00035346) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0003de48) bg_calc_paper_pane_g

0x6622,	// (0x00035357) calc_bg_paper_pane_g9

0x6633,	// (0x00035368) list_calc_item_pane_ParamLimits

0x6633,	// (0x00035368) list_calc_item_pane

0xe07c,	// (0x0003cdb1) list_calc_item_pane_g1

0x665f,	// (0x00035394) list_calc_item_pane_t1_ParamLimits

0x665f,	// (0x00035394) list_calc_item_pane_t1

0x6671,	// (0x000353a6) list_calc_item_pane_t2_ParamLimits

0x6671,	// (0x000353a6) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0003de59) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0003de59) list_calc_item_pane_t

0xdf5f,	// (0x0003cc94) cell_calc_pane_g1

0xe089,	// (0x0003cdbe) grid_highlight_pane_cp02

0x66a1,	// (0x000353d6) bg_calc_display_pane_g1

0x66aa,	// (0x000353df) bg_calc_display_pane_g2

0x66b4,	// (0x000353e9) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0003de63) bg_calc_display_pane_g

0x66bd,	// (0x000353f2) cell_qdial_pane_ParamLimits

0x66bd,	// (0x000353f2) cell_qdial_pane

0x66d1,	// (0x00035406) cell_qdial_pane_g1_ParamLimits

0x66d1,	// (0x00035406) cell_qdial_pane_g1

0x66de,	// (0x00035413) cell_qdial_pane_g2_ParamLimits

0x66de,	// (0x00035413) cell_qdial_pane_g2

0xe0ab,	// (0x0003cde0) cell_qdial_pane_g3_ParamLimits

0xe0ab,	// (0x0003cde0) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0003de6a) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0003de6a) cell_qdial_pane_g

0x66fc,	// (0x00035431) cell_qdial_pane_t1_ParamLimits

0x66fc,	// (0x00035431) cell_qdial_pane_t1

0x6714,	// (0x00035449) cell_qdial_pane_t2_ParamLimits

0x6714,	// (0x00035449) cell_qdial_pane_t2

0x6727,	// (0x0003545c) cell_qdial_pane_t3_ParamLimits

0x6727,	// (0x0003545c) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0003de73) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0003de73) cell_qdial_pane_t

0xdcec,	// (0x0003ca21) grid_highlight_pane_cp04

0xe0b7,	// (0x0003cdec) thumbnail_qdial_pane_ParamLimits

0xe0b7,	// (0x0003cdec) thumbnail_qdial_pane

0xe113,	// (0x0003ce48) list_help_pane

0xe11c,	// (0x0003ce51) scroll_pane_cp02

0x673a,	// (0x0003546f) help_list_pane_t1_ParamLimits

0x673a,	// (0x0003546f) help_list_pane_t1

0x6770,	// (0x000354a5) bg_notes_pane_g2

0x6778,	// (0x000354ad) bg_notes_pane_g3

0x6780,	// (0x000354b5) notes_bg_pane_g1

0x6788,	// (0x000354bd) notes_bg_pane_g4

0x6790,	// (0x000354c5) notes_bg_pane_g5

0x6798,	// (0x000354cd) notes_bg_pane_g6

0x67a0,	// (0x000354d5) notes_bg_pane_g7

0x67a8,	// (0x000354dd) notes_bg_pane_g8

0x67b0,	// (0x000354e5) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0003de91) notes_bg_pane_g

0x67b8,	// (0x000354ed) list_notes_text_pane_ParamLimits

0x67b8,	// (0x000354ed) list_notes_text_pane

0xe125,	// (0x0003ce5a) list_notes_text_pane_g1

0x5328,	// (0x0003405d) list_notes_text_pane_t1

0x67e0,	// (0x00035515) listscroll_cale_week_pane

0x6805,	// (0x0003553a) bg_cale_heading_pane

0xe148,	// (0x0003ce7d) bg_cale_pane_cp01

0x6825,	// (0x0003555a) cale_week_corner_pane

0x683f,	// (0x00035574) cale_week_day_heading_pane

0x685f,	// (0x00035594) cale_week_scroll_pane_g1

0x687a,	// (0x000355af) cale_week_scroll_pane_g2

0x688d,	// (0x000355c2) cale_week_scroll_pane_g3

0x68a0,	// (0x000355d5) cale_week_scroll_pane_g4

0x68b3,	// (0x000355e8) cale_week_scroll_pane_g5

0x68c6,	// (0x000355fb) cale_week_scroll_pane_g6

0x68d9,	// (0x0003560e) cale_week_scroll_pane_g7

0x68ee,	// (0x00035623) cale_week_scroll_pane_g8

0x6903,	// (0x00035638) cale_week_scroll_pane_g9

0x6916,	// (0x0003564b) cale_week_scroll_pane_g10

0x6929,	// (0x0003565e) cale_week_scroll_pane_g11

0x693c,	// (0x00035671) cale_week_scroll_pane_g12

0x6953,	// (0x00035688) cale_week_scroll_pane_g13

0x696e,	// (0x000356a3) cale_week_scroll_pane_g14

0x6989,	// (0x000356be) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0003dea0) cale_week_scroll_pane_g

0x69b9,	// (0x000356ee) cale_week_time_pane

0x69ce,	// (0x00035703) grid_cale_week_pane

0xe177,	// (0x0003ceac) scroll_pane_cp08

0x69ed,	// (0x00035722) cell_cale_week_pane_ParamLimits

0x69ed,	// (0x00035722) cell_cale_week_pane

0x6a4f,	// (0x00035784) cale_week_day_heading_pane_t1

0x6a6a,	// (0x0003579f) cale_week_day_heading_pane_t2

0x6a85,	// (0x000357ba) cale_week_day_heading_pane_t3

0x6aa0,	// (0x000357d5) cale_week_day_heading_pane_t4

0x6abb,	// (0x000357f0) cale_week_day_heading_pane_t5

0x6ad6,	// (0x0003580b) cale_week_day_heading_pane_t6

0x6af1,	// (0x00035826) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0003dec1) cale_week_day_heading_pane_t

0xe194,	// (0x0003cec9) bg_cale_side_pane

0x6b0c,	// (0x00035841) cale_week_time_pane_t1

0x6b26,	// (0x0003585b) cale_week_time_pane_t2

0x6b40,	// (0x00035875) cale_week_time_pane_t3

0x6b5a,	// (0x0003588f) cale_week_time_pane_t4

0x6b74,	// (0x000358a9) cale_week_time_pane_t5

0x6b8e,	// (0x000358c3) cale_week_time_pane_t6

0x6bac,	// (0x000358e1) cale_week_time_pane_t7

0x6bce,	// (0x00035903) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0003ded0) cale_week_time_pane_t

0x6bf2,	// (0x00035927) cell_cale_week_pane_g2

0x6c16,	// (0x0003594b) cell_cale_week_pane_g3_ParamLimits

0x6c16,	// (0x0003594b) cell_cale_week_pane_g3

0xe1a2,	// (0x0003ced7) grid_highlight_pane_cp07

0xe1aa,	// (0x0003cedf) listscroll_gms_pane

0xe1b4,	// (0x0003cee9) grid_gms_pane

0xe1bd,	// (0x0003cef2) listscroll_gms_pane_g1

0xe1c5,	// (0x0003cefa) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0003dee1) listscroll_gms_pane_g

0x6c2e,	// (0x00035963) scroll_pane_cp010

0x6c39,	// (0x0003596e) cell_gms_pane_ParamLimits

0x6c39,	// (0x0003596e) cell_gms_pane

0x6c4c,	// (0x00035981) cell_gms_pane_g1

0xe1cd,	// (0x0003cf02) cell_gms_pane_g2

0xe125,	// (0x0003ce5a) cell_gms_pane_g3

0xe1d5,	// (0x0003cf0a) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0003dee6) cell_gms_pane_g

0xe1de,	// (0x0003cf13) grid_highlight_pane_cp09

0x8c72,	// (0x000379a7) phob_pre_status_pane_g1

0x8c7a,	// (0x000379af) phob_pre_status_pane_g2

0x8c82,	// (0x000379b7) phob_pre_status_pane_g3

0x8c8a,	// (0x000379bf) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x0003e2af) phob_pre_status_pane_g

0x8c9a,	// (0x000379cf) phob_pre_status_pane_t1

0x8caa,	// (0x000379df) phob_pre_status_pane_t2

0x8cba,	// (0x000379ef) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x0003e2ba) phob_pre_status_pane_t

0xe1e6,	// (0x0003cf1b) bg_list_pane_cp05

0x6c5c,	// (0x00035991) grid_vorec_pane

0x6c66,	// (0x0003599b) vorec_t1

0x6c74,	// (0x000359a9) vorec_t2

0x6c82,	// (0x000359b7) vorec_t3

0x6c90,	// (0x000359c5) vorec_t4

0xd5f4,	// (0x0003c329) vorec_t5

0xd602,	// (0x0003c337) vorec_t6

0x0004,

0xf1ba,	// (0x0003deef) vorec_t

0xd610,	// (0x0003c345) wait_bar_pane_cp01

0x6cac,	// (0x000359e1) cell_vorec_pane_ParamLimits

0x6cac,	// (0x000359e1) cell_vorec_pane

0x6cbf,	// (0x000359f4) cell_vorec_pane_g1

0xdcec,	// (0x0003ca21) grid_highlight_pane_cp05

0xd8cb,	// (0x0003c600) cams_zoom_pane

0xd8cb,	// (0x0003c600) image_vga_pane

0xdfd0,	// (0x0003cd05) main_camera_pane_g1

0xdfd0,	// (0x0003cd05) main_camera_pane_g2

0xdfd0,	// (0x0003cd05) main_camera_pane_g3

0xdfd0,	// (0x0003cd05) main_camera_pane_g4

0xdfd0,	// (0x0003cd05) main_camera_pane_g5

0xdfd0,	// (0x0003cd05) main_camera_pane_g6

0xdfd0,	// (0x0003cd05) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0003defa) main_camera_pane_g

0xe1ee,	// (0x0003cf23) main_camera_pane_t1

0xe1ee,	// (0x0003cf23) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0003df0b) main_camera_pane_t

0x6cc9,	// (0x000359fe) cams_zoom_pane_cp_ParamLimits

0x6cc9,	// (0x000359fe) cams_zoom_pane_cp

0x6cf7,	// (0x00035a2c) image_cif_pane_ParamLimits

0x6cf7,	// (0x00035a2c) image_cif_pane

0xd8c1,	// (0x0003c5f6) image_subqcif_pane

0x6d05,	// (0x00035a3a) main_video_pane_g1_ParamLimits

0x6d05,	// (0x00035a3a) main_video_pane_g1

0x6d2d,	// (0x00035a62) main_video_pane_g2_ParamLimits

0x6d2d,	// (0x00035a62) main_video_pane_g2

0x6d60,	// (0x00035a95) main_video_pane_g3_ParamLimits

0x6d60,	// (0x00035a95) main_video_pane_g3

0x6d60,	// (0x00035a95) main_video_pane_g4_ParamLimits

0x6d60,	// (0x00035a95) main_video_pane_g4

0x6d8e,	// (0x00035ac3) main_video_pane_g5_ParamLimits

0x6d8e,	// (0x00035ac3) main_video_pane_g5

0xe202,	// (0x0003cf37) main_video_pane_g6_ParamLimits

0xe202,	// (0x0003cf37) main_video_pane_g6

0x0006,

0xf1db,	// (0x0003df10) main_video_pane_g_ParamLimits

0xf1db,	// (0x0003df10) main_video_pane_g

0x6daa,	// (0x00035adf) main_video_pane_t1_ParamLimits

0x6daa,	// (0x00035adf) main_video_pane_t1

0xe21c,	// (0x0003cf51) cams_zoom_pane_g1

0xe21c,	// (0x0003cf51) cams_zoom_pane_g2

0xe21c,	// (0x0003cf51) cams_zoom_pane_g3

0xe21c,	// (0x0003cf51) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0003df1f) cams_zoom_pane_g

0x6df0,	// (0x00035b25) grid_cams_pane

0x6dfe,	// (0x00035b33) linegrid_cams_pane

0x6e0c,	// (0x00035b41) cell_cams_pane_ParamLimits

0x6e0c,	// (0x00035b41) cell_cams_pane

0xe226,	// (0x0003cf5b) cams_burst_image_pane

0xe22e,	// (0x0003cf63) cell_cams_pane_g1

0xdcec,	// (0x0003ca21) grid_highlight_pane_cp03

0xdf5f,	// (0x0003cc94) mp_bg_pane_g1

0xd8c1,	// (0x0003c5f6) bg_list_pane_cp03

0xd8c1,	// (0x0003c5f6) bg_mp_pane

0xd8c1,	// (0x0003c5f6) grid_mp_pane

0xe21c,	// (0x0003cf51) media_player_g1

0xe75f,	// (0x0003d494) media_player_t1

0xe75f,	// (0x0003d494) media_player_t2

0xe75f,	// (0x0003d494) media_player_t3

0xe75f,	// (0x0003d494) media_player_t4

0xe75f,	// (0x0003d494) media_player_t5

0xe75f,	// (0x0003d494) media_player_t6

0xe75f,	// (0x0003d494) media_player_t7

0x0006,

0xf564,	// (0x0003e299) media_player_t

0xd8c1,	// (0x0003c5f6) wait_bar_pane_cp02

0xf549,	// (0x0003e27e) main_usb_pane_t

0xe9cb,	// (0x0003d700) cell_mp_pane

0xdf5f,	// (0x0003cc94) cell_mp_pane_g1

0xdcec,	// (0x0003ca21) grid_highlight_pane_cp06

0xe24a,	// (0x0003cf7f) grid_skin_colour_pane

0xe252,	// (0x0003cf87) list_highlight_pane_cp03

0x6e1f,	// (0x00035b54) skin_g1

0xe25a,	// (0x0003cf8f) skin_t1

0xe269,	// (0x0003cf9e) skin_t2

0x0001,

0xf218,	// (0x0003df4d) skin_t

0x6e29,	// (0x00035b5e) cell_skin_colour_pane_ParamLimits

0x6e29,	// (0x00035b5e) cell_skin_colour_pane

0xe277,	// (0x0003cfac) cell_skin_colour_pane_g1

0x6ead,	// (0x00035be2) call_video_g1_ParamLimits

0x6ead,	// (0x00035be2) call_video_g1

0x6ebd,	// (0x00035bf2) call_video_g2_ParamLimits

0x6ebd,	// (0x00035bf2) call_video_g2

0x0001,

0xf21d,	// (0x0003df52) call_video_g_ParamLimits

0xf21d,	// (0x0003df52) call_video_g

0x6f17,	// (0x00035c4c) call_video_uplink_pane_cp1_ParamLimits

0x6f17,	// (0x00035c4c) call_video_uplink_pane_cp1

0xe289,	// (0x0003cfbe) call_video_uplink_pane_cp2

0x6fe3,	// (0x00035d18) video_down_crop_pane_ParamLimits

0x6fe3,	// (0x00035d18) video_down_crop_pane

0x70e1,	// (0x00035e16) video_down_pane_ParamLimits

0x70e1,	// (0x00035e16) video_down_pane

0xe291,	// (0x0003cfc6) video_down_subqcif_pane_ParamLimits

0xe291,	// (0x0003cfc6) video_down_subqcif_pane

0xe2a9,	// (0x0003cfde) video_down_subqcif_pane_cp_ParamLimits

0xe2a9,	// (0x0003cfde) video_down_subqcif_pane_cp

0xe2cf,	// (0x0003d004) im_reading_pane_ParamLimits

0xe2cf,	// (0x0003d004) im_reading_pane

0x7201,	// (0x00035f36) im_writing_pane_ParamLimits

0x7201,	// (0x00035f36) im_writing_pane

0x721f,	// (0x00035f54) im_reading_pane_t1

0xe2e9,	// (0x0003d01e) list_im_pane

0xe2fa,	// (0x0003d02f) scroll_pane_cp07

0x7273,	// (0x00035fa8) im_writing_pane_t1_ParamLimits

0x7273,	// (0x00035fa8) im_writing_pane_t1

0xe313,	// (0x0003d048) im_writing_pane_t2_ParamLimits

0xe313,	// (0x0003d048) im_writing_pane_t2

0x0001,

0xf227,	// (0x0003df5c) im_writing_pane_t_ParamLimits

0xf227,	// (0x0003df5c) im_writing_pane_t

0xdcec,	// (0x0003ca21) input_focus_pane_cp04

0xdcec,	// (0x0003ca21) input_focus_pane_cp05

0x7288,	// (0x00035fbd) list_im_single_pane_ParamLimits

0x7288,	// (0x00035fbd) list_im_single_pane

0x72ac,	// (0x00035fe1) list_single_im_pane_t1

0xe1e6,	// (0x0003cf1b) blid_accuracy_pane

0xe1e6,	// (0x0003cf1b) blid_compass_pane

0x1496,	// (0x000301cb) main_location_t1

0x1496,	// (0x000301cb) main_location_t2

0x1496,	// (0x000301cb) main_location_t3

0x0002,

0xf573,	// (0x0003e2a8) main_location_t

0xdcec,	// (0x0003ca21) aid_levels_location

0xdf5f,	// (0x0003cc94) blid_accuracy_pane_g1

0xdf5f,	// (0x0003cc94) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0003dfb0) blid_accuracy_pane_g

0xe35b,	// (0x0003d090) wml_content_pane

0xe399,	// (0x0003d0ce) wml_button_pane_ParamLimits

0xe399,	// (0x0003d0ce) wml_button_pane

0x72bb,	// (0x00035ff0) wml_list_single_large_pane_ParamLimits

0x72bb,	// (0x00035ff0) wml_list_single_large_pane

0x72e5,	// (0x0003601a) wml_list_single_medium_pane_ParamLimits

0x72e5,	// (0x0003601a) wml_list_single_medium_pane

0x7316,	// (0x0003604b) wml_list_single_small_pane_ParamLimits

0x7316,	// (0x0003604b) wml_list_single_small_pane

0xe3ad,	// (0x0003d0e2) wml_selection_box_pane_ParamLimits

0xe3ad,	// (0x0003d0e2) wml_selection_box_pane

0xe3c0,	// (0x0003d0f5) wml_list_single_pane_t1

0xe3cf,	// (0x0003d104) wml_list_single_medium_pane_t1

0xe3de,	// (0x0003d113) wml_list_single_large_pane_t1

0xe3ed,	// (0x0003d122) input_focus_pane_cp02_ParamLimits

0xe3ed,	// (0x0003d122) input_focus_pane_cp02

0xe400,	// (0x0003d135) wml_selection_box_pane_g1

0xe409,	// (0x0003d13e) wml_selection_box_pane_t1_ParamLimits

0xe409,	// (0x0003d13e) wml_selection_box_pane_t1

0xdf47,	// (0x0003cc7c) bg_wml_button_pane_ParamLimits

0xdf47,	// (0x0003cc7c) bg_wml_button_pane

0xe421,	// (0x0003d156) wml_button_pane_g1

0xe429,	// (0x0003d15e) wml_button_pane_t1

0xe421,	// (0x0003d156) wml_button_bg_pane_g1

0xe439,	// (0x0003d16e) wml_button_bg_pane_g2

0xe441,	// (0x0003d176) wml_button_bg_pane_g3

0xe449,	// (0x0003d17e) wml_button_bg_pane_g4

0xe451,	// (0x0003d186) wml_button_bg_pane_g5

0xe459,	// (0x0003d18e) wml_button_bg_pane_g6

0xe461,	// (0x0003d196) wml_button_bg_pane_g7

0xe469,	// (0x0003d19e) wml_button_bg_pane_g8

0xe471,	// (0x0003d1a6) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0003df61) wml_button_bg_pane_g

0x7350,	// (0x00036085) bg_list_pane_cp02

0xe479,	// (0x0003d1ae) mce_header_pane_ParamLimits

0xe479,	// (0x0003d1ae) mce_header_pane

0xe48f,	// (0x0003d1c4) mce_icon_pane

0xe48f,	// (0x0003d1c4) mce_image_pane

0xe498,	// (0x0003d1cd) mce_text_pane_ParamLimits

0xe498,	// (0x0003d1cd) mce_text_pane

0x735a,	// (0x0003608f) scroll_pane_cp03

0xe391,	// (0x0003d0c6) scroll_pane_cp04

0xe4ab,	// (0x0003d1e0) scroll_pane_cp05_ParamLimits

0xe4ab,	// (0x0003d1e0) scroll_pane_cp05

0x7364,	// (0x00036099) mce_header_field_pane_ParamLimits

0x7364,	// (0x00036099) mce_header_field_pane

0x7384,	// (0x000360b9) mce_header_field_pane_2_ParamLimits

0x7384,	// (0x000360b9) mce_header_field_pane_2

0x739a,	// (0x000360cf) mce_header_field_pane_3

0x73a2,	// (0x000360d7) list_single_mce_message_pane_ParamLimits

0x73a2,	// (0x000360d7) list_single_mce_message_pane

0x73cd,	// (0x00036102) list_single_mce_smart_pane_ParamLimits

0x73cd,	// (0x00036102) list_single_mce_smart_pane

0xe4b7,	// (0x0003d1ec) input_focus_pane_cp03

0xe4c0,	// (0x0003d1f5) list_header_data_pane

0x7403,	// (0x00036138) mce_header_field_pane_t1

0x7411,	// (0x00036146) list_single_mce_header_pane_ParamLimits

0x7411,	// (0x00036146) list_single_mce_header_pane

0xe4c8,	// (0x0003d1fd) list_single_mce_header_pane_t1

0xe4d7,	// (0x0003d20c) list_single_mce_message_pane_g1

0xe4df,	// (0x0003d214) list_single_mce_message_pane_t1

0x7463,	// (0x00036198) bg_cale_heading_pane_cp01_ParamLimits

0x7463,	// (0x00036198) bg_cale_heading_pane_cp01

0xe4ed,	// (0x0003d222) bg_cale_pane_cp02_ParamLimits

0xe4ed,	// (0x0003d222) bg_cale_pane_cp02

0x74b1,	// (0x000361e6) cale_month_corner_pane

0x74d0,	// (0x00036205) cale_month_day_heading_pane_ParamLimits

0x74d0,	// (0x00036205) cale_month_day_heading_pane

0x7536,	// (0x0003626b) cale_month_pane_g1_ParamLimits

0x7536,	// (0x0003626b) cale_month_pane_g1

0x7579,	// (0x000362ae) cale_month_pane_g2_ParamLimits

0x7579,	// (0x000362ae) cale_month_pane_g2

0x75b1,	// (0x000362e6) cale_month_pane_g3_ParamLimits

0x75b1,	// (0x000362e6) cale_month_pane_g3

0x75fd,	// (0x00036332) cale_month_pane_g4_ParamLimits

0x75fd,	// (0x00036332) cale_month_pane_g4

0x7649,	// (0x0003637e) cale_month_pane_g5_ParamLimits

0x7649,	// (0x0003637e) cale_month_pane_g5

0x7695,	// (0x000363ca) cale_month_pane_g6_ParamLimits

0x7695,	// (0x000363ca) cale_month_pane_g6

0x76e1,	// (0x00036416) cale_month_pane_g7_ParamLimits

0x76e1,	// (0x00036416) cale_month_pane_g7

0x7745,	// (0x0003647a) cale_month_pane_g8_ParamLimits

0x7745,	// (0x0003647a) cale_month_pane_g8

0x77a9,	// (0x000364de) cale_month_pane_g9_ParamLimits

0x77a9,	// (0x000364de) cale_month_pane_g9

0x7807,	// (0x0003653c) cale_month_pane_g10_ParamLimits

0x7807,	// (0x0003653c) cale_month_pane_g10

0x7863,	// (0x00036598) cale_month_pane_g11_ParamLimits

0x7863,	// (0x00036598) cale_month_pane_g11

0x78b7,	// (0x000365ec) cale_month_pane_g12_ParamLimits

0x78b7,	// (0x000365ec) cale_month_pane_g12

0x790d,	// (0x00036642) cale_month_pane_g13_ParamLimits

0x790d,	// (0x00036642) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0003df74) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0003df74) cale_month_pane_g

0x7963,	// (0x00036698) cale_month_week_pane

0x7987,	// (0x000366bc) grid_cale_month_pane_ParamLimits

0x7987,	// (0x000366bc) grid_cale_month_pane

0x79e0,	// (0x00036715) cale_month_day_heading_pane_t1

0x7a66,	// (0x0003679b) cale_month_day_heading_pane_t2

0x7adf,	// (0x00036814) cale_month_day_heading_pane_t3

0x7b58,	// (0x0003688d) cale_month_day_heading_pane_t4

0x7bd1,	// (0x00036906) cale_month_day_heading_pane_t5

0x7c4a,	// (0x0003697f) cale_month_day_heading_pane_t6

0x7cc3,	// (0x000369f8) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0003df8f) cale_month_day_heading_pane_t

0xe194,	// (0x0003cec9) bg_cale_side_pane_cp01

0x7d54,	// (0x00036a89) cale_month_week_pane_t1

0x7d6d,	// (0x00036aa2) cale_month_week_pane_t2

0x7d86,	// (0x00036abb) cale_month_week_pane_t3

0x7d9f,	// (0x00036ad4) cale_month_week_pane_t4

0x7db8,	// (0x00036aed) cale_month_week_pane_t5

0x7dd9,	// (0x00036b0e) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0003df9e) cale_month_week_pane_t

0x7dfa,	// (0x00036b2f) cell_cale_month_pane_ParamLimits

0x7dfa,	// (0x00036b2f) cell_cale_month_pane

0x7f1c,	// (0x00036c51) cell_cale_month_pane_g1

0x7f28,	// (0x00036c5d) cell_cale_month_pane_t1_ParamLimits

0x7f28,	// (0x00036c5d) cell_cale_month_pane_t1

0xe1a2,	// (0x0003ced7) grid_highlight_pane_cp08

0xdf5f,	// (0x0003cc94) main_smil_g1

0x7f54,	// (0x00036c89) smil_status_pane

0xe52c,	// (0x0003d261) smil_text_pane

0x13ae,	// (0x000300e3) bg_popup_call3_rect_pane_g8

0x13b6,	// (0x000300eb) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x0003e23c) bg_popup_call3_rect_pane_g

0x15c6,	// (0x000302fb) smil_status_volume_pane_g1

0xe536,	// (0x0003d26b) smil_status_pane_t1

0x901d,	// (0x00037d52) volume_smil_pane

0xe54d,	// (0x0003d282) list_smil_text_pane

0x7f67,	// (0x00036c9c) scroll_pane_cp011

0x7f72,	// (0x00036ca7) smil_text_list_pane_t1_ParamLimits

0x7f72,	// (0x00036ca7) smil_text_list_pane_t1

0x7fea,	// (0x00036d1f) aid_volume_smil_ParamLimits

0x7fea,	// (0x00036d1f) aid_volume_smil

0xdf5f,	// (0x0003cc94) smil_volume_pane_g1

0xdf5f,	// (0x0003cc94) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0003dfb0) smil_volume_pane_g

0x67e0,	// (0x00035515) listscroll_cale_day_pane

0xe557,	// (0x0003d28c) bg_cale_pane

0xe56f,	// (0x0003d2a4) list_cale_pane

0xe592,	// (0x0003d2c7) scroll_pane_cp09

0xe5a3,	// (0x0003d2d8) cale_bg_pane_g1

0xe5ab,	// (0x0003d2e0) cale_bg_pane_g2

0xe5b3,	// (0x0003d2e8) cale_bg_pane_g3

0xe5bb,	// (0x0003d2f0) cale_bg_pane_g4

0xe5c3,	// (0x0003d2f8) cale_bg_pane_g5

0xe5cb,	// (0x0003d300) cale_bg_pane_g6

0xe5d3,	// (0x0003d308) cale_bg_pane_g7

0xe5db,	// (0x0003d310) cale_bg_pane_g8

0xe5e3,	// (0x0003d318) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0003dfb5) cale_bg_pane_g

0x800c,	// (0x00036d41) list_cale_time_pane_ParamLimits

0x800c,	// (0x00036d41) list_cale_time_pane

0xe5f3,	// (0x0003d328) list_cale_time_pane_g1_ParamLimits

0xe5f3,	// (0x0003d328) list_cale_time_pane_g1

0xe5ff,	// (0x0003d334) list_cale_time_pane_g2_ParamLimits

0xe5ff,	// (0x0003d334) list_cale_time_pane_g2

0x802e,	// (0x00036d63) list_cale_time_pane_g3_ParamLimits

0x802e,	// (0x00036d63) list_cale_time_pane_g3

0x803c,	// (0x00036d71) list_cale_time_pane_g4_ParamLimits

0x803c,	// (0x00036d71) list_cale_time_pane_g4

0x804a,	// (0x00036d7f) list_cale_time_pane_g5_ParamLimits

0x804a,	// (0x00036d7f) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0003dfc8) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0003dfc8) list_cale_time_pane_g

0xe619,	// (0x0003d34e) list_cale_time_pane_t1_ParamLimits

0xe619,	// (0x0003d34e) list_cale_time_pane_t1

0xe641,	// (0x0003d376) list_cale_time_pane_t2_ParamLimits

0xe641,	// (0x0003d376) list_cale_time_pane_t2

0x82ed,	// (0x00037022) aid_blid_cardinal_pane

0x832f,	// (0x00037064) compass_pane_t4

0xe669,	// (0x0003d39e) list_cale_time_pane_t4_ParamLimits

0xe669,	// (0x0003d39e) list_cale_time_pane_t4

0x833d,	// (0x00037072) compass_pane_t5

0x834d,	// (0x00037082) compass_pane_t6

0x835b,	// (0x00037090) compass_pane_t7

0xeb10,	// (0x0003d845) navi_pane_cc_t1

0xeced,	// (0x0003da22) aid_phob_thumbnail_center_pane

0x8710,	// (0x00037445) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0003dfd5) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0003dfd5) list_cale_time_pane_t

0xd943,	// (0x0003c678) bg_popup_window_pane_cp02_ParamLimits

0xd943,	// (0x0003c678) bg_popup_window_pane_cp02

0xe691,	// (0x0003d3c6) heading_pane_cp01_ParamLimits

0xe691,	// (0x0003d3c6) heading_pane_cp01

0xe69d,	// (0x0003d3d2) loc_req_pane_ParamLimits

0xe69d,	// (0x0003d3d2) loc_req_pane

0xe6ad,	// (0x0003d3e2) loc_type_pane_ParamLimits

0xe6ad,	// (0x0003d3e2) loc_type_pane

0xe6bf,	// (0x0003d3f4) loc_type_pane_t1_ParamLimits

0xe6bf,	// (0x0003d3f4) loc_type_pane_t1

0xe6d1,	// (0x0003d406) loc_type_pane_t2_ParamLimits

0xe6d1,	// (0x0003d406) loc_type_pane_t2

0xe6e3,	// (0x0003d418) loc_type_pane_t3_ParamLimits

0xe6e3,	// (0x0003d418) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0003dfdc) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0003dfdc) loc_type_pane_t

0xe6f5,	// (0x0003d42a) list_loc_req_pane

0xe6ff,	// (0x0003d434) scroll_pane_cp012

0x8058,	// (0x00036d8d) list_single_loc_request_popup_menu_pane_ParamLimits

0x8058,	// (0x00036d8d) list_single_loc_request_popup_menu_pane

0xe70a,	// (0x0003d43f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe70a,	// (0x0003d43f) list_single_loc_request_popup_menu_pane_g1

0xe716,	// (0x0003d44b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe716,	// (0x0003d44b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0003dfe3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0003dfe3) list_single_loc_request_popup_menu_pane_g

0xe722,	// (0x0003d457) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe722,	// (0x0003d457) list_single_loc_request_popup_menu_pane_t1

0x806a,	// (0x00036d9f) bg_popup_window_pane_cp03_ParamLimits

0x806a,	// (0x00036d9f) bg_popup_window_pane_cp03

0x8078,	// (0x00036dad) heading_loc_req_pane_ParamLimits

0x8078,	// (0x00036dad) heading_loc_req_pane

0x8084,	// (0x00036db9) popup_dyc_status_message_window_g1_ParamLimits

0x8084,	// (0x00036db9) popup_dyc_status_message_window_g1

0x8090,	// (0x00036dc5) popup_dyc_status_message_window_t1_ParamLimits

0x8090,	// (0x00036dc5) popup_dyc_status_message_window_t1

0x80a2,	// (0x00036dd7) popup_dyc_status_message_window_t2_ParamLimits

0x80a2,	// (0x00036dd7) popup_dyc_status_message_window_t2

0x80b4,	// (0x00036de9) popup_dyc_status_message_window_t3_ParamLimits

0x80b4,	// (0x00036de9) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0003dfe8) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0003dfe8) popup_dyc_status_message_window_t

0xdcec,	// (0x0003ca21) bg_heading_pane_cp01

0xe738,	// (0x0003d46d) heading_loc_req_pane_g1

0xe740,	// (0x0003d475) heading_loc_req_pane_g2

0xe748,	// (0x0003d47d) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0003dfef) heading_loc_req_pane_g

0xe750,	// (0x0003d485) heading_loc_req_pane_t1

0xe76f,	// (0x0003d4a4) bg_popup_sub_pane_cp01_ParamLimits

0xe76f,	// (0x0003d4a4) bg_popup_sub_pane_cp01

0xe77d,	// (0x0003d4b2) popup_cale_events_window_g1_ParamLimits

0xe77d,	// (0x0003d4b2) popup_cale_events_window_g1

0xe79d,	// (0x0003d4d2) popup_cale_events_window_g2_ParamLimits

0xe79d,	// (0x0003d4d2) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x0003e011) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x0003e011) popup_cale_events_window_g

0xe7bd,	// (0x0003d4f2) popup_cale_events_window_t1_ParamLimits

0xe7bd,	// (0x0003d4f2) popup_cale_events_window_t1

0xe7cf,	// (0x0003d504) popup_cale_events_window_t2_ParamLimits

0xe7cf,	// (0x0003d504) popup_cale_events_window_t2

0xe80d,	// (0x0003d542) popup_cale_events_window_t3_ParamLimits

0xe80d,	// (0x0003d542) popup_cale_events_window_t3

0xe847,	// (0x0003d57c) popup_cale_events_window_t4_ParamLimits

0xe847,	// (0x0003d57c) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x0003e016) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x0003e016) popup_cale_events_window_t

0x80de,	// (0x00036e13) call_type_pane

0x0bd3,	// (0x0002f908) popup_call_status_window_g1

0x80ea,	// (0x00036e1f) popup_call_status_window_g2

0x80f6,	// (0x00036e2b) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x0003e01f) popup_call_status_window_g

0xe87d,	// (0x0003d5b2) call_type_pane_g1

0xe886,	// (0x0003d5bb) call_type_pane_g2

0x0001,

0xf2f1,	// (0x0003e026) call_type_pane_g

0xdcec,	// (0x0003ca21) bg_popup_sub_pane_cp02

0xe88f,	// (0x0003d5c4) listscroll_popup_wml_pane

0xe897,	// (0x0003d5cc) list_wml_pane

0xe8a1,	// (0x0003d5d6) scroll_pane_cp013

0xe8ac,	// (0x0003d5e1) list_single_graphic_popup_wml_pane_ParamLimits

0xe8ac,	// (0x0003d5e1) list_single_graphic_popup_wml_pane

0xdf5f,	// (0x0003cc94) list_single_graphic_popup_wml_pane_g1

0xe8c0,	// (0x0003d5f5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x0003e02b) list_single_graphic_popup_wml_pane_g

0xe8c8,	// (0x0003d5fd) list_single_graphic_popup_wml_pane_t1

0xe8de,	// (0x0003d613) aid_call_pane

0xdf3f,	// (0x0003cc74) popup_clock_analogue_window_g1

0xdf3f,	// (0x0003cc74) popup_clock_analogue_window_g2

0x8102,	// (0x00036e37) popup_clock_analogue_window_g3

0x8102,	// (0x00036e37) popup_clock_analogue_window_g4

0xdf5f,	// (0x0003cc94) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x0003e030) popup_clock_analogue_window_g

0x810a,	// (0x00036e3f) popup_clock_analogue_window_t1

0x8118,	// (0x00036e4d) clock_digital_number_pane_ParamLimits

0x8118,	// (0x00036e4d) clock_digital_number_pane

0x8124,	// (0x00036e59) clock_digital_number_pane_cp02_ParamLimits

0x8124,	// (0x00036e59) clock_digital_number_pane_cp02

0x8130,	// (0x00036e65) clock_digital_number_pane_cp03_ParamLimits

0x8130,	// (0x00036e65) clock_digital_number_pane_cp03

0x813c,	// (0x00036e71) clock_digital_number_pane_cp04_ParamLimits

0x813c,	// (0x00036e71) clock_digital_number_pane_cp04

0x814c,	// (0x00036e81) clock_digital_separator_pane_ParamLimits

0x814c,	// (0x00036e81) clock_digital_separator_pane

0x8158,	// (0x00036e8d) popup_clock_digital_window_t1

0xdf5f,	// (0x0003cc94) clock_digital_number_pane_g1

0xdf5f,	// (0x0003cc94) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0003dfb0) clock_digital_number_pane_g

0xdf5f,	// (0x0003cc94) clock_digital_separator_pane_g1

0xdf5f,	// (0x0003cc94) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0003dfb0) clock_digital_separator_pane_g

0xdcec,	// (0x0003ca21) bg_popup_window_pane_cp04

0xe8e6,	// (0x0003d61b) heading_pane_cp03

0xe1e6,	// (0x0003cf1b) listscroll_popup_gms_pane

0xdcec,	// (0x0003ca21) grid_large_graphic_popup_pane

0xe8ef,	// (0x0003d624) listscroll_popup_gms_pane_g1

0xe8f8,	// (0x0003d62d) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x0003e03b) listscroll_popup_gms_pane_g

0xe901,	// (0x0003d636) scroll_pane_cp014

0xd8cb,	// (0x0003c600) cell_large_graphic_popup_pane_ParamLimits

0xd8cb,	// (0x0003c600) cell_large_graphic_popup_pane

0xdfc2,	// (0x0003ccf7) cell_large_graphic_popup_pane_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) cell_large_graphic_popup_pane_g1

0xe90a,	// (0x0003d63f) cell_large_graphic_popup_pane_g2_ParamLimits

0xe90a,	// (0x0003d63f) cell_large_graphic_popup_pane_g2

0xe918,	// (0x0003d64d) cell_large_graphic_popup_pane_g3_ParamLimits

0xe918,	// (0x0003d64d) cell_large_graphic_popup_pane_g3

0xe926,	// (0x0003d65b) cell_large_graphic_popup_pane_g4_ParamLimits

0xe926,	// (0x0003d65b) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x0003e040) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x0003e040) cell_large_graphic_popup_pane_g

0xdcec,	// (0x0003ca21) grid_highlight_pane_cp010

0xdf5f,	// (0x0003cc94) bg_popup_call_pane_g1

0xe937,	// (0x0003d66c) list_single_graphic_popup_conf_pane_ParamLimits

0xe937,	// (0x0003d66c) list_single_graphic_popup_conf_pane

0xe94a,	// (0x0003d67f) list_highlight_pane_cp01

0xe953,	// (0x0003d688) list_single_graphic_popup_conf_pane_g1

0xe95b,	// (0x0003d690) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x0003e049) list_single_graphic_popup_conf_pane_g

0xe963,	// (0x0003d698) list_single_graphic_popup_conf_pane_t1

0xe971,	// (0x0003d6a6) linegrid_cams_pane_g1

0x8175,	// (0x00036eaa) linegrid_cams_pane_g2

0xe125,	// (0x0003ce5a) linegrid_cams_pane_g3

0xe97a,	// (0x0003d6af) linegrid_cams_pane_g4

0x817e,	// (0x00036eb3) linegrid_cams_pane_g5

0x8187,	// (0x00036ebc) linegrid_cams_pane_g6

0xe1d5,	// (0x0003cf0a) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x0003e04e) linegrid_cams_pane_g

0xe983,	// (0x0003d6b8) popup_clock_analogue_window

0xe983,	// (0x0003d6b8) popup_clock_digital_window

0xdcec,	// (0x0003ca21) popup_phob_thumbnail_window

0xdf5f,	// (0x0003cc94) call_video_uplink_pane_g1

0xe98c,	// (0x0003d6c1) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x0003e05d) call_video_uplink_pane_g

0xe994,	// (0x0003d6c9) video_uplink_pane

0xe99c,	// (0x0003d6d1) mce_image_pane_g1

0x8190,	// (0x00036ec5) mce_image_pane_g2

0x819a,	// (0x00036ecf) mce_image_pane_g3

0x81a2,	// (0x00036ed7) mce_image_pane_g4

0x81aa,	// (0x00036edf) mce_image_pane_g5

0x0004,

0xf32d,	// (0x0003e062) mce_image_pane_g

0xe9a6,	// (0x0003d6db) control_top_pane_stacon_cp01_ParamLimits

0xe9a6,	// (0x0003d6db) control_top_pane_stacon_cp01

0xe9ba,	// (0x0003d6ef) uni_indicator_pane_stacon_cp01_ParamLimits

0xe9ba,	// (0x0003d6ef) uni_indicator_pane_stacon_cp01

0xe9cb,	// (0x0003d700) bg_popup_sub_pane_cp03

0xe9d5,	// (0x0003d70a) chi_dic_find_pane

0x81b2,	// (0x00036ee7) listscroll_chi_dic_pane

0xe9dd,	// (0x0003d712) main_pane_chidic_g1

0xe9e5,	// (0x0003d71a) chi_dic_find_pane_t1

0xe9f3,	// (0x0003d728) find_chidic_pane

0xe9fc,	// (0x0003d731) chi_dic_list_pane_ParamLimits

0xe9fc,	// (0x0003d731) chi_dic_list_pane

0xea0d,	// (0x0003d742) scroll_pane_cp020

0xea15,	// (0x0003d74a) find_chidic_pane_t1

0xdcec,	// (0x0003ca21) input_focus_pane_cp06

0x81c6,	// (0x00036efb) list_chi_dic_pane_ParamLimits

0x81c6,	// (0x00036efb) list_chi_dic_pane

0x81e0,	// (0x00036f15) list_chi_dic_pane_t1_ParamLimits

0x81e0,	// (0x00036f15) list_chi_dic_pane_t1

0xdcec,	// (0x0003ca21) list_highlight_pane_cp020

0xea24,	// (0x0003d759) bg_cale_heading_pane_g1

0x81f3,	// (0x00036f28) bg_cale_heading_pane_g2

0x81fb,	// (0x00036f30) bg_cale_heading_pane_g3

0x8203,	// (0x00036f38) bg_cale_heading_pane_g4

0x820d,	// (0x00036f42) bg_cale_heading_pane_g5

0x8217,	// (0x00036f4c) bg_cale_heading_pane_g6

0x821f,	// (0x00036f54) bg_cale_heading_pane_g7

0x8227,	// (0x00036f5c) bg_cale_heading_pane_g8

0x8231,	// (0x00036f66) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x0003e06d) bg_cale_heading_pane_g

0xea24,	// (0x0003d759) bg_cale_side_pane_g1

0x823b,	// (0x00036f70) bg_cale_side_pane_g2

0x8245,	// (0x00036f7a) bg_cale_side_pane_g3

0x824f,	// (0x00036f84) bg_cale_side_pane_g4

0x8259,	// (0x00036f8e) bg_cale_side_pane_g5

0x8263,	// (0x00036f98) bg_cale_side_pane_g6

0x826d,	// (0x00036fa2) bg_cale_side_pane_g7

0x8277,	// (0x00036fac) bg_cale_side_pane_g8

0x827f,	// (0x00036fb4) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x0003e080) bg_cale_side_pane_g

0x8287,	// (0x00036fbc) popup_call_status_window_ParamLimits

0x8287,	// (0x00036fbc) popup_call_status_window

0xea2c,	// (0x0003d761) stacon_top_pane

0xea34,	// (0x0003d769) status_pane_ParamLimits

0xea34,	// (0x0003d769) status_pane

0xea49,	// (0x0003d77e) status_small_pane

0xea51,	// (0x0003d786) control_pane

0xdcec,	// (0x0003ca21) stacon_bottom_pane

0xea59,	// (0x0003d78e) list_single_mce_smart_pane_t1_ParamLimits

0xea59,	// (0x0003d78e) list_single_mce_smart_pane_t1

0xea6c,	// (0x0003d7a1) list_single_mce_smart_pane_t2_ParamLimits

0xea6c,	// (0x0003d7a1) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x0003e093) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x0003e093) list_single_mce_smart_pane_t

0x8293,	// (0x00036fc8) compass_pane

0x829f,	// (0x00036fd4) main_location2_pane_t1

0x82b3,	// (0x00036fe8) main_location2_pane_t2

0x82c7,	// (0x00036ffc) main_location2_pane_t3

0x0003,

0xf363,	// (0x0003e098) main_location2_pane_t

0xea8b,	// (0x0003d7c0) compass_pane_g1_ParamLimits

0xea8b,	// (0x0003d7c0) compass_pane_g1

0x8311,	// (0x00037046) compass_pane_t1

0x8320,	// (0x00037055) compass_pane_t2

0x0005,

0xf36c,	// (0x0003e0a1) compass_pane_t

0x836b,	// (0x000370a0) text_secondary_cp61

0xeb07,	// (0x0003d83c) navi_pane_cams_g5

0xeb83,	// (0x0003d8b8) navi_pane_im_t1

0xeb91,	// (0x0003d8c6) navi_pane_mp_g1_ParamLimits

0xeb91,	// (0x0003d8c6) navi_pane_mp_g1

0xeba5,	// (0x0003d8da) navi_pane_mp_g2_ParamLimits

0xeba5,	// (0x0003d8da) navi_pane_mp_g2

0xebb1,	// (0x0003d8e6) navi_pane_mp_g3_ParamLimits

0xebb1,	// (0x0003d8e6) navi_pane_mp_g3

0x0002,

0xf380,	// (0x0003e0b5) navi_pane_mp_g_ParamLimits

0xf380,	// (0x0003e0b5) navi_pane_mp_g

0xebbd,	// (0x0003d8f2) navi_pane_mp_t1

0xebcb,	// (0x0003d900) navi_pane_mp_t2

0x0002,

0xf387,	// (0x0003e0bc) navi_pane_mp_t

0xec36,	// (0x0003d96b) navi_pane_vt_g1

0xebbd,	// (0x0003d8f2) navi_pane_vt_t1

0xec3e,	// (0x0003d973) navi_slider_pane

0xe1e6,	// (0x0003cf1b) zooming_pane

0xec4e,	// (0x0003d983) navi_slider_pane_g1

0x83a6,	// (0x000370db) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x0003e0c3) navi_slider_pane_g

0xec72,	// (0x0003d9a7) aid_levels_zoom

0xec7a,	// (0x0003d9af) zooming_pane_g1

0xec82,	// (0x0003d9b7) zooming_pane_g2

0xec82,	// (0x0003d9b7) zooming_pane_g3

0x0002,

0xf39d,	// (0x0003e0d2) zooming_pane_g

0xec8a,	// (0x0003d9bf) level_10_zoom

0xec93,	// (0x0003d9c8) level_11_zoom

0xec9c,	// (0x0003d9d1) level_1_zoom

0xeca5,	// (0x0003d9da) level_2_zoom

0xecae,	// (0x0003d9e3) level_3_zoom

0xecb7,	// (0x0003d9ec) level_4_zoom

0xecc0,	// (0x0003d9f5) level_5_zoom

0xecc9,	// (0x0003d9fe) level_6_zoom

0xecd2,	// (0x0003da07) level_7_zoom

0xecdb,	// (0x0003da10) level_8_zoom

0xece4,	// (0x0003da19) level_9_zoom

0xecf5,	// (0x0003da2a) popup_phob_thumbnail_window_g1

0xecfd,	// (0x0003da32) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x0003e0d9) popup_phob_thumbnail_window_g

0x8cca,	// (0x000379ff) level_1_location

0x8cd2,	// (0x00037a07) level_2_location

0x8cda,	// (0x00037a0f) level_3_location

0x8ce4,	// (0x00037a19) level_4_location

0xe1e6,	// (0x0003cf1b) level_5_location

0x83b8,	// (0x000370ed) mce_icon_pane_g1

0x83c0,	// (0x000370f5) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x0003e0de) mce_icon_pane_g

0x83c8,	// (0x000370fd) main_mup_pane_g1_ParamLimits

0x83c8,	// (0x000370fd) main_mup_pane_g1

0xdfde,	// (0x0003cd13) main_mup_pane_g2_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g2

0xdfde,	// (0x0003cd13) main_mup_pane_g3_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g3

0xdfde,	// (0x0003cd13) main_mup_pane_g4_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g4

0xdfde,	// (0x0003cd13) main_mup_pane_g5_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g5

0xdfde,	// (0x0003cd13) main_mup_pane_g6_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g6

0xdfde,	// (0x0003cd13) main_mup_pane_g7_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g7

0xdfde,	// (0x0003cd13) main_mup_pane_g8_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g8

0xdfde,	// (0x0003cd13) main_mup_pane_g9_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g9

0xdfde,	// (0x0003cd13) main_mup_pane_g10_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g10

0xdfde,	// (0x0003cd13) main_mup_pane_g11_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g11

0xdfd0,	// (0x0003cd05) main_mup_pane_g12_ParamLimits

0xdfd0,	// (0x0003cd05) main_mup_pane_g12

0xdfde,	// (0x0003cd13) main_mup_pane_g13_ParamLimits

0xdfde,	// (0x0003cd13) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x0003e0e3) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x0003e0e3) main_mup_pane_g

0xdfec,	// (0x0003cd21) main_mup_pane_t1_ParamLimits

0xdfec,	// (0x0003cd21) main_mup_pane_t1

0xdfec,	// (0x0003cd21) main_mup_pane_t2_ParamLimits

0xdfec,	// (0x0003cd21) main_mup_pane_t2

0xdfec,	// (0x0003cd21) main_mup_pane_t3_ParamLimits

0xdfec,	// (0x0003cd21) main_mup_pane_t3

0xe1ee,	// (0x0003cf23) main_mup_pane_t4_ParamLimits

0xe1ee,	// (0x0003cf23) main_mup_pane_t4

0xe1ee,	// (0x0003cf23) main_mup_pane_t5_ParamLimits

0xe1ee,	// (0x0003cf23) main_mup_pane_t5

0xe236,	// (0x0003cf6b) main_mup_pane_t6_ParamLimits

0xe236,	// (0x0003cf6b) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x0003e0fe) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x0003e0fe) main_mup_pane_t

0xdf69,	// (0x0003cc9e) mup_progress_pane_ParamLimits

0xdf69,	// (0x0003cc9e) mup_progress_pane

0x1804,	// (0x00030539) mup_visualizer_pane_ParamLimits

0x1804,	// (0x00030539) mup_visualizer_pane

0x1804,	// (0x00030539) mup_volume_pane_ParamLimits

0x1804,	// (0x00030539) mup_volume_pane

0xdfd0,	// (0x0003cd05) mup_visualizer_pane_g1_ParamLimits

0xdfd0,	// (0x0003cd05) mup_visualizer_pane_g1

0xed05,	// (0x0003da3a) mup_visualizer_pane_g2_ParamLimits

0xed05,	// (0x0003da3a) mup_visualizer_pane_g2

0xdfc2,	// (0x0003ccf7) mup_visualizer_pane_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x0003e10b) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x0003e10b) mup_visualizer_pane_g

0xe21c,	// (0x0003cf51) mup_volume_pane_g1

0xe21c,	// (0x0003cf51) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x0003e112) mup_volume_pane_g

0xe21c,	// (0x0003cf51) mup_progress_pane_g1

0xe21c,	// (0x0003cf51) mup_progress_pane_g2

0xe21c,	// (0x0003cf51) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x0003e117) mup_progress_pane_g

0xdcec,	// (0x0003ca21) bg_popup_window_pane_cp05

0xed13,	// (0x0003da48) heading_pane_cp02_ParamLimits

0xed13,	// (0x0003da48) heading_pane_cp02

0xed2d,	// (0x0003da62) list_popup_blid_pane

0xed35,	// (0x0003da6a) list_blid_sat_info_pane_ParamLimits

0xed35,	// (0x0003da6a) list_blid_sat_info_pane

0xed48,	// (0x0003da7d) list_blid_sat_info_pane_g1

0xed50,	// (0x0003da85) list_blid_sat_info_pane_t1

0x84c5,	// (0x000371fa) mup_equalizer_pane_ParamLimits

0x84c5,	// (0x000371fa) mup_equalizer_pane

0x84e6,	// (0x0003721b) mup_equalizer_pane_cp1_ParamLimits

0x84e6,	// (0x0003721b) mup_equalizer_pane_cp1

0x8507,	// (0x0003723c) mup_equalizer_pane_cp2_ParamLimits

0x8507,	// (0x0003723c) mup_equalizer_pane_cp2

0x8528,	// (0x0003725d) mup_equalizer_pane_cp3_ParamLimits

0x8528,	// (0x0003725d) mup_equalizer_pane_cp3

0x8549,	// (0x0003727e) mup_equalizer_pane_cp4_ParamLimits

0x8549,	// (0x0003727e) mup_equalizer_pane_cp4

0x856a,	// (0x0003729f) mup_equalizer_pane_cp5

0x8580,	// (0x000372b5) mup_equalizer_pane_cp6

0x8598,	// (0x000372cd) mup_equalizer_pane_cp7

0x142e,	// (0x00030163) bg_popup_call_poc_act_pane_g9

0x1436,	// (0x0003016b) bg_popup_call_poc_act_pane_g10

0x143e,	// (0x00030173) bg_popup_call_poc_act_pane_g11

0x000a,

0xdf47,	// (0x0003cc7c) mup_scale_pane

0xdf5f,	// (0x0003cc94) mup_scale_pane_g1

0xed5e,	// (0x0003da93) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x0003e133) mup_scale_pane_g

0xed82,	// (0x0003dab7) msg_data_pane

0xed8a,	// (0x0003dabf) scroll_pane_cp017

0x5336,	// (0x0003406b) bg_list_pane_cp04_ParamLimits

0x5336,	// (0x0003406b) bg_list_pane_cp04

0xed92,	// (0x0003dac7) msg_data_pane_g1

0x85c2,	// (0x000372f7) msg_data_pane_g2

0x85cc,	// (0x00037301) msg_data_pane_g3

0x85d4,	// (0x00037309) msg_data_pane_g4

0x85dc,	// (0x00037311) msg_data_pane_g5

0x85e4,	// (0x00037319) msg_data_pane_g6

0x85ec,	// (0x00037321) msg_data_pane_g7

0x0006,

0xf40d,	// (0x0003e142) msg_data_pane_g

0x535a,	// (0x0003408f) msg_text_pane_ParamLimits

0x535a,	// (0x0003408f) msg_text_pane

0x85f4,	// (0x00037329) qrid_highlight_pane_cp011_ParamLimits

0x85f4,	// (0x00037329) qrid_highlight_pane_cp011

0xdcec,	// (0x0003ca21) msg_body_pane

0xdcec,	// (0x0003ca21) msg_header_pane

0xeda3,	// (0x0003dad8) input_focus_pane_cp07

0x53b5,	// (0x000340ea) msg_header_pane_t1_ParamLimits

0x53b5,	// (0x000340ea) msg_header_pane_t1

0x53cb,	// (0x00034100) msg_header_pane_t2_ParamLimits

0x53cb,	// (0x00034100) msg_header_pane_t2

0x0001,

0xf421,	// (0x0003e156) msg_header_pane_t_ParamLimits

0xf421,	// (0x0003e156) msg_header_pane_t

0xedb8,	// (0x0003daed) msg_body_pane_g1

0x53e2,	// (0x00034117) msg_body_pane_t1_ParamLimits

0x53e2,	// (0x00034117) msg_body_pane_t1

0x5413,	// (0x00034148) msg_body_pane_t2_ParamLimits

0x5413,	// (0x00034148) msg_body_pane_t2

0x5425,	// (0x0003415a) msg_body_pane_t3_ParamLimits

0x5425,	// (0x0003415a) msg_body_pane_t3

0x0002,

0xf426,	// (0x0003e15b) msg_body_pane_t_ParamLimits

0xf426,	// (0x0003e15b) msg_body_pane_t

0x8660,	// (0x00037395) main_viewer_pane_g1_ParamLimits

0x8660,	// (0x00037395) main_viewer_pane_g1

0x866c,	// (0x000373a1) main_viewer_pane_g2_ParamLimits

0x866c,	// (0x000373a1) main_viewer_pane_g2

0x8678,	// (0x000373ad) main_viewer_pane_g3_ParamLimits

0x8678,	// (0x000373ad) main_viewer_pane_g3

0x8689,	// (0x000373be) main_viewer_pane_g4_ParamLimits

0x8689,	// (0x000373be) main_viewer_pane_g4

0x869a,	// (0x000373cf) main_viewer_pane_g5_ParamLimits

0x869a,	// (0x000373cf) main_viewer_pane_g5

0x869a,	// (0x000373cf) main_viewer_pane_g7_ParamLimits

0x869a,	// (0x000373cf) main_viewer_pane_g7

0x86ac,	// (0x000373e1) main_viewer_pane_g8_ParamLimits

0x86ac,	// (0x000373e1) main_viewer_pane_g8

0x0007,

0xf436,	// (0x0003e16b) main_viewer_pane_g_ParamLimits

0xf436,	// (0x0003e16b) main_viewer_pane_g

0xedc0,	// (0x0003daf5) viewer_content_pane_ParamLimits

0xedc0,	// (0x0003daf5) viewer_content_pane

0x86e4,	// (0x00037419) main_postcard_pane_g1_ParamLimits

0x86e4,	// (0x00037419) main_postcard_pane_g1

0x86f2,	// (0x00037427) main_postcard_pane_g2_ParamLimits

0x86f2,	// (0x00037427) main_postcard_pane_g2

0x8700,	// (0x00037435) main_postcard_pane_g3_ParamLimits

0x8700,	// (0x00037435) main_postcard_pane_g3

0x0005,

0xf447,	// (0x0003e17c) main_postcard_pane_g_ParamLimits

0xf447,	// (0x0003e17c) main_postcard_pane_g

0x8710,	// (0x00037445) main_postcard_pane_g4

0x15b3,	// (0x000302e8) smil_status_volume_pane_g2

0x873c,	// (0x00037471) postcard_pane_ParamLimits

0x873c,	// (0x00037471) postcard_pane

0x0bd3,	// (0x0002f908) postcard_pane_g1_ParamLimits

0x0bd3,	// (0x0002f908) postcard_pane_g1

0x876e,	// (0x000374a3) postcard_pane_g2_ParamLimits

0x876e,	// (0x000374a3) postcard_pane_g2

0x877a,	// (0x000374af) postcard_pane_g3_ParamLimits

0x877a,	// (0x000374af) postcard_pane_g3

0xedce,	// (0x0003db03) postcard_pane_g4_ParamLimits

0xedce,	// (0x0003db03) postcard_pane_g4

0x8786,	// (0x000374bb) postcard_pane_g5_ParamLimits

0x8786,	// (0x000374bb) postcard_pane_g5

0x8792,	// (0x000374c7) postcard_pane_g6_ParamLimits

0x8792,	// (0x000374c7) postcard_pane_g6

0xeddc,	// (0x0003db11) postcard_pane_g7_ParamLimits

0xeddc,	// (0x0003db11) postcard_pane_g7

0x0006,

0xf454,	// (0x0003e189) postcard_pane_g_ParamLimits

0xf454,	// (0x0003e189) postcard_pane_g

0x879e,	// (0x000374d3) main_mp2_pane_g1_ParamLimits

0x879e,	// (0x000374d3) main_mp2_pane_g1

0x87aa,	// (0x000374df) main_mp2_pane_g2_ParamLimits

0x87aa,	// (0x000374df) main_mp2_pane_g2

0x87b6,	// (0x000374eb) main_mp2_pane_g3_ParamLimits

0x87b6,	// (0x000374eb) main_mp2_pane_g3

0x0002,

0xf463,	// (0x0003e198) main_mp2_pane_g_ParamLimits

0xf463,	// (0x0003e198) main_mp2_pane_g

0x87c2,	// (0x000374f7) main_mp2_pane_t1_ParamLimits

0x87c2,	// (0x000374f7) main_mp2_pane_t1

0x87d9,	// (0x0003750e) main_mp2_pane_t2_ParamLimits

0x87d9,	// (0x0003750e) main_mp2_pane_t2

0x87ed,	// (0x00037522) main_mp2_pane_t3_ParamLimits

0x87ed,	// (0x00037522) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x0003e19f) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x0003e19f) main_mp2_pane_t

0xedea,	// (0x0003db1f) pec_content_pane_ParamLimits

0xedea,	// (0x0003db1f) pec_content_pane

0xe391,	// (0x0003d0c6) scroll_pane_cp015

0xedfc,	// (0x0003db31) pec_attribute_pane_ParamLimits

0xedfc,	// (0x0003db31) pec_attribute_pane

0x87ff,	// (0x00037534) pec_content_pane_g1_ParamLimits

0x87ff,	// (0x00037534) pec_content_pane_g1

0xee0c,	// (0x0003db41) pec_content_pane_t1_ParamLimits

0xee0c,	// (0x0003db41) pec_content_pane_t1

0xee1e,	// (0x0003db53) pec_content_pane_t2_ParamLimits

0xee1e,	// (0x0003db53) pec_content_pane_t2

0x0001,

0xf471,	// (0x0003e1a6) pec_content_pane_t_ParamLimits

0xf471,	// (0x0003e1a6) pec_content_pane_t

0x880b,	// (0x00037540) list_single_graphic_pane_cp01_ParamLimits

0x880b,	// (0x00037540) list_single_graphic_pane_cp01

0xdf47,	// (0x0003cc7c) bg_popup_sub_pane_cp04

0xee30,	// (0x0003db65) popup_mup_playback_window_g1

0xee3c,	// (0x0003db71) popup_mup_playback_window_t1

0xee51,	// (0x0003db86) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x0003e1ab) popup_mup_playback_window_t

0xee88,	// (0x0003dbbd) main_image_pane_g1_ParamLimits

0xee88,	// (0x0003dbbd) main_image_pane_g1

0xeecb,	// (0x0003dc00) scroll_pane_cp018_ParamLimits

0xeecb,	// (0x0003dc00) scroll_pane_cp018

0xeee3,	// (0x0003dc18) scroll_pane_cp016_ParamLimits

0xeee3,	// (0x0003dc18) scroll_pane_cp016

0x88a4,	// (0x000375d9) smil2_image_pane_ParamLimits

0x88a4,	// (0x000375d9) smil2_image_pane

0x88d4,	// (0x00037609) smil2_root_pane_ParamLimits

0x88d4,	// (0x00037609) smil2_root_pane

0x8900,	// (0x00037635) smil2_text_pane_ParamLimits

0x8900,	// (0x00037635) smil2_text_pane

0xdcec,	// (0x0003ca21) bg_list_pane_cp06

0xef1f,	// (0x0003dc54) grid_radio_pane

0xdcec,	// (0x0003ca21) bg_popup_window_pane_cp06

0xef27,	// (0x0003dc5c) main_fmradio_pane_t1

0x1446,	// (0x0003017b) heading_pane_cp04

0xef35,	// (0x0003dc6a) main_fmradio_pane_t2

0x144e,	// (0x00030183) popup_cale_lunar_info_window_g1

0xef43,	// (0x0003dc78) main_fmradio_pane_t3

0x1456,	// (0x0003018b) popup_cale_lunar_info_window_g2

0xef51,	// (0x0003dc86) main_fmradio_pane_t4

0x0001,

0xef5f,	// (0x0003dc94) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x0003e28b) popup_cale_lunar_info_window_g

0xf48b,	// (0x0003e1c0) main_fmradio_pane_t

0xef6d,	// (0x0003dca2) wait_bar_pane_cp03

0xef75,	// (0x0003dcaa) cell_fmradio_pane_ParamLimits

0xef75,	// (0x0003dcaa) cell_fmradio_pane

0xeddc,	// (0x0003db11) cell_fmradio_pane_g1_ParamLimits

0xeddc,	// (0x0003db11) cell_fmradio_pane_g1

0xdcec,	// (0x0003ca21) grid_highlight_pane_cp011

0xef88,	// (0x0003dcbd) poc_content_pane_ParamLimits

0xef88,	// (0x0003dcbd) poc_content_pane

0xef9a,	// (0x0003dccf) scroll_pane_cp019

0x8940,	// (0x00037675) popup_call_poc_act_window_ParamLimits

0x8940,	// (0x00037675) popup_call_poc_act_window

0x894d,	// (0x00037682) popup_call_poc_inact_window_ParamLimits

0x894d,	// (0x00037682) popup_call_poc_inact_window

0xf52d,	// (0x0003e262) bg_popup_call_poc_act_pane_g

0x13be,	// (0x000300f3) bg_popup_call_poc_inact_pane_g1

0x13c6,	// (0x000300fb) bg_popup_call_poc_inact_pane_g2

0xefa2,	// (0x0003dcd7) popup_call_poc_act_window_g2

0x13ce,	// (0x00030103) bg_popup_call_poc_inact_pane_g3

0x13d6,	// (0x0003010b) bg_popup_call_poc_inact_pane_g4

0x13de,	// (0x00030113) bg_popup_call_poc_inact_pane_g5

0xefaa,	// (0x0003dcdf) popup_call_poc_act_window_t1_ParamLimits

0xefaa,	// (0x0003dcdf) popup_call_poc_act_window_t1

0xefd2,	// (0x0003dd07) popup_call_poc_act_window_t2_ParamLimits

0xefd2,	// (0x0003dd07) popup_call_poc_act_window_t2

0xeffa,	// (0x0003dd2f) popup_call_poc_act_window_t3_ParamLimits

0xeffa,	// (0x0003dd2f) popup_call_poc_act_window_t3

0x05b8,	// (0x0002f2ed) popup_call_poc_act_window_t4_ParamLimits

0x05b8,	// (0x0002f2ed) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x0003e1cb) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x0003e1cb) popup_call_poc_act_window_t

0x13e6,	// (0x0003011b) bg_popup_call_poc_inact_pane_g6

0x13ee,	// (0x00030123) bg_popup_call_poc_inact_pane_g7

0x13f6,	// (0x0003012b) bg_popup_call_poc_inact_pane_g8

0x05ca,	// (0x0002f2ff) popup_call_poc_inact_window_g2

0x13fe,	// (0x00030133) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x0003e24f) bg_popup_call_poc_inact_pane_g

0x05d2,	// (0x0002f307) popup_call_poc_inact_window_t1_ParamLimits

0x05d2,	// (0x0002f307) popup_call_poc_inact_window_t1

0x05e7,	// (0x0002f31c) popup_call_poc_inact_window_t2_ParamLimits

0x05e7,	// (0x0002f31c) popup_call_poc_inact_window_t2

0x05fc,	// (0x0002f331) popup_call_poc_inact_window_t3_ParamLimits

0x05fc,	// (0x0002f331) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x0003e1d4) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x0003e1d4) popup_call_poc_inact_window_t

0x153e,	// (0x00030273) context_pane_ParamLimits

0x8fd4,	// (0x00037d09) signal_pane_ParamLimits

0xe1e6,	// (0x0003cf1b) main_call2_pane

0x8f47,	// (0x00037c7c) popup_phob_thumbnail2_window_ParamLimits

0x8f47,	// (0x00037c7c) popup_phob_thumbnail2_window

0x860e,	// (0x00037343) aid_hotspot_pointer_arrow_pane

0x8616,	// (0x0003734b) aid_hotspot_pointer_hand_pane

0x8c92,	// (0x000379c7) phob_pre_status_pane_g5

0xd8cb,	// (0x0003c600) cams_zoom_pane_ParamLimits

0xd8cb,	// (0x0003c600) image_vga_pane_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera_pane_g1_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera_pane_g2_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera_pane_g3_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera_pane_g4_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera_pane_g5_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera_pane_g6_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0003defa) main_camera_pane_g_ParamLimits

0xe1ee,	// (0x0003cf23) main_camera_pane_t1_ParamLimits

0xe1ee,	// (0x0003cf23) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0003df0b) main_camera_pane_t_ParamLimits

0xdf47,	// (0x0003cc7c) bg_popup_preview_window_pane_cp01_ParamLimits

0xdf47,	// (0x0003cc7c) bg_popup_preview_window_pane_cp01

0x0611,	// (0x0002f346) popup_phob_thumbnail2_window_g1_ParamLimits

0x0611,	// (0x0002f346) popup_phob_thumbnail2_window_g1

0xdcec,	// (0x0003ca21) call2_cli_visual_pane

0x8969,	// (0x0003769e) popup_call2_audio_conf_window_ParamLimits

0x8969,	// (0x0003769e) popup_call2_audio_conf_window

0x897e,	// (0x000376b3) popup_call2_audio_first_window_ParamLimits

0x897e,	// (0x000376b3) popup_call2_audio_first_window

0x8a1c,	// (0x00037751) popup_call2_audio_in_window_ParamLimits

0x8a1c,	// (0x00037751) popup_call2_audio_in_window

0x8a5e,	// (0x00037793) popup_call2_audio_out_window_ParamLimits

0x8a5e,	// (0x00037793) popup_call2_audio_out_window

0x8ac0,	// (0x000377f5) popup_call2_audio_second_window_ParamLimits

0x8ac0,	// (0x000377f5) popup_call2_audio_second_window

0x8b1e,	// (0x00037853) popup_call2_audio_wait_window_ParamLimits

0x8b1e,	// (0x00037853) popup_call2_audio_wait_window

0xdcec,	// (0x0003ca21) bg_popup_call2_act_pane_cp03

0xdf29,	// (0x0003cc5e) list_conf_pane_cp

0x061d,	// (0x0002f352) popup_call2_audio_conf_window_t1

0xe937,	// (0x0003d66c) list_single_graphic_popup_conf2_pane_ParamLimits

0xe937,	// (0x0003d66c) list_single_graphic_popup_conf2_pane

0xe94a,	// (0x0003d67f) list_highlight_pane_cp04

0x062b,	// (0x0002f360) list_single_graphic_popup_conf2_pane_g1

0xe95b,	// (0x0003d690) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x0003e1db) list_single_graphic_popup_conf2_pane_g

0x0635,	// (0x0002f36a) list_single_graphic_popup_conf2_pane_t1

0x0643,	// (0x0002f378) bg_popup_call2_act_pane_cp01_ParamLimits

0x0643,	// (0x0002f378) bg_popup_call2_act_pane_cp01

0x06cd,	// (0x0002f402) call_type_pane_cp05_ParamLimits

0x06cd,	// (0x0002f402) call_type_pane_cp05

0x0721,	// (0x0002f456) popup_call2_audio_second_window_g1_ParamLimits

0x0721,	// (0x0002f456) popup_call2_audio_second_window_g1

0x0775,	// (0x0002f4aa) popup_call2_audio_second_window_g2_ParamLimits

0x0775,	// (0x0002f4aa) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x0003e1e0) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x0003e1e0) popup_call2_audio_second_window_g

0x07da,	// (0x0002f50f) popup_call2_audio_second_window_t1_ParamLimits

0x07da,	// (0x0002f50f) popup_call2_audio_second_window_t1

0x0895,	// (0x0002f5ca) popup_call2_audio_second_window_t2_ParamLimits

0x0895,	// (0x0002f5ca) popup_call2_audio_second_window_t2

0x08e8,	// (0x0002f61d) popup_call2_audio_second_window_t3_ParamLimits

0x08e8,	// (0x0002f61d) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x0003e1e7) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x0003e1e7) popup_call2_audio_second_window_t

0xdcec,	// (0x0003ca21) bg_popup_call2_in_pane_cp02

0xdcf6,	// (0x0003ca2b) call_type_pane_cp04

0x8b5d,	// (0x00037892) popup_call2_audio_wait_window_g1

0x8b65,	// (0x0003789a) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x0003e1f0) popup_call2_audio_wait_window_g

0xdd0e,	// (0x0003ca43) popup_call2_audio_wait_window_t3

0x09db,	// (0x0002f710) bg_popup_call2_act_pane_ParamLimits

0x09db,	// (0x0002f710) bg_popup_call2_act_pane

0x0a9b,	// (0x0002f7d0) call_type_pane_cp03_ParamLimits

0x0a9b,	// (0x0002f7d0) call_type_pane_cp03

0x0aff,	// (0x0002f834) popup_call2_audio_first_window_g1_ParamLimits

0x0aff,	// (0x0002f834) popup_call2_audio_first_window_g1

0x0b6f,	// (0x0002f8a4) popup_call2_audio_first_window_g2_ParamLimits

0x0b6f,	// (0x0002f8a4) popup_call2_audio_first_window_g2

0x0bd3,	// (0x0002f908) popup_call2_audio_first_window_g3_ParamLimits

0x0bd3,	// (0x0002f908) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x0003e1f5) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x0003e1f5) popup_call2_audio_first_window_g

0x0c5b,	// (0x0002f990) popup_call2_audio_first_window_t1_ParamLimits

0x0c5b,	// (0x0002f990) popup_call2_audio_first_window_t1

0x0d5e,	// (0x0002fa93) popup_call2_audio_first_window_t4_ParamLimits

0x0d5e,	// (0x0002fa93) popup_call2_audio_first_window_t4

0x0e41,	// (0x0002fb76) popup_call2_audio_first_window_t5_ParamLimits

0x0e41,	// (0x0002fb76) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x0003e200) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x0003e200) popup_call2_audio_first_window_t

0xdf3f,	// (0x0003cc74) bg_popup_call2_act_pane_g1

0x145e,	// (0x00030193) popup_cale_lunar_info_window_t1

0x146c,	// (0x000301a1) popup_cale_lunar_info_window_t2

0x147a,	// (0x000301af) popup_cale_lunar_info_window_t3

0xdcec,	// (0x0003ca21) bg_popup_call2_bubble_pane

0x0f42,	// (0x0002fc77) bg_popup_call2_in_pane_cp01_ParamLimits

0x0f42,	// (0x0002fc77) bg_popup_call2_in_pane_cp01

0xd9c8,	// (0x0003c6fd) call_type_pane_cp02

0x8b6d,	// (0x000378a2) popup_call2_audio_out_window_g1_ParamLimits

0x8b6d,	// (0x000378a2) popup_call2_audio_out_window_g1

0x0f8a,	// (0x0002fcbf) popup_call2_audio_out_window_g2_ParamLimits

0x0f8a,	// (0x0002fcbf) popup_call2_audio_out_window_g2

0x8b99,	// (0x000378ce) popup_call2_audio_out_window_g3_ParamLimits

0x8b99,	// (0x000378ce) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x0003e209) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x0003e209) popup_call2_audio_out_window_g

0x0fc1,	// (0x0002fcf6) popup_call2_audio_out_window_t1_ParamLimits

0x0fc1,	// (0x0002fcf6) popup_call2_audio_out_window_t1

0x1020,	// (0x0002fd55) popup_call2_audio_out_window_t2_ParamLimits

0x1020,	// (0x0002fd55) popup_call2_audio_out_window_t2

0x1074,	// (0x0002fda9) popup_call2_audio_out_window_t3_ParamLimits

0x1074,	// (0x0002fda9) popup_call2_audio_out_window_t3

0x108a,	// (0x0002fdbf) popup_call2_audio_out_window_t4_ParamLimits

0x108a,	// (0x0002fdbf) popup_call2_audio_out_window_t4

0x10a0,	// (0x0002fdd5) popup_call2_audio_out_window_t5_ParamLimits

0x10a0,	// (0x0002fdd5) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x0003e212) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x0003e212) popup_call2_audio_out_window_t

0x1104,	// (0x0002fe39) bg_popup_call2_in_pane_ParamLimits

0x1104,	// (0x0002fe39) bg_popup_call2_in_pane

0x1160,	// (0x0002fe95) popup_call2_audio_in_window_g1_ParamLimits

0x1160,	// (0x0002fe95) popup_call2_audio_in_window_g1

0x1198,	// (0x0002fecd) popup_call2_audio_in_window_g2_ParamLimits

0x1198,	// (0x0002fecd) popup_call2_audio_in_window_g2

0x11d0,	// (0x0002ff05) popup_call2_audio_in_window_g3_ParamLimits

0x11d0,	// (0x0002ff05) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x0003e21f) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x0003e21f) popup_call2_audio_in_window_g

0x1228,	// (0x0002ff5d) popup_call2_audio_in_window_t1_ParamLimits

0x1228,	// (0x0002ff5d) popup_call2_audio_in_window_t1

0x12a8,	// (0x0002ffdd) popup_call2_audio_in_window_t2_ParamLimits

0x12a8,	// (0x0002ffdd) popup_call2_audio_in_window_t2

0x1328,	// (0x0003005d) popup_call2_audio_in_window_t3_ParamLimits

0x1328,	// (0x0003005d) popup_call2_audio_in_window_t3

0x1342,	// (0x00030077) popup_call2_audio_in_window_t4_ParamLimits

0x1342,	// (0x00030077) popup_call2_audio_in_window_t4

0x1354,	// (0x00030089) popup_call2_audio_in_window_t5_ParamLimits

0x1354,	// (0x00030089) popup_call2_audio_in_window_t5

0x1369,	// (0x0003009e) popup_call2_audio_in_window_t6_ParamLimits

0x1369,	// (0x0003009e) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x0003e228) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x0003e228) popup_call2_audio_in_window_t

0xdf3f,	// (0x0003cc74) bg_popup_call2_in_pane_g1

0x1488,	// (0x000301bd) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x0003e290) popup_cale_lunar_info_window_t

0xdf47,	// (0x0003cc7c) bg_popup_call2_rect_pane_ParamLimits

0xdf47,	// (0x0003cc7c) bg_popup_call2_rect_pane

0xdcec,	// (0x0003ca21) call2_cli_visual_graphic_pane

0xdcec,	// (0x0003ca21) call2_cli_visual_text_pane

0x9010,	// (0x00037d45) smil_status_volume_pane_g3

0x0002,

0xdf5f,	// (0x0003cc94) call2_cli_visual_graphic_pane_g1

0xdf5f,	// (0x0003cc94) call2_cli_visual_graphic_pane_g2

0xdf5f,	// (0x0003cc94) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x0003e235) call2_cli_visual_graphic_pane_g

0x137e,	// (0x000300b3) bg_popup_call2_rect_pane_g1

0xe10b,	// (0x0003ce40) bg_popup_call2_rect_pane_g2

0x1386,	// (0x000300bb) bg_popup_call2_rect_pane_g3

0x138e,	// (0x000300c3) bg_popup_call2_rect_pane_g4

0x1396,	// (0x000300cb) bg_popup_call2_rect_pane_g5

0x139e,	// (0x000300d3) bg_popup_call2_rect_pane_g6

0x13a6,	// (0x000300db) bg_popup_call2_rect_pane_g7

0x13ae,	// (0x000300e3) bg_popup_call2_rect_pane_g8

0x13b6,	// (0x000300eb) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x0003e23c) bg_popup_call2_rect_pane_g

0x13be,	// (0x000300f3) bg_popup_call2_bubble_pane_g1

0x13c6,	// (0x000300fb) bg_popup_call2_bubble_pane_g2

0x13ce,	// (0x00030103) bg_popup_call2_bubble_pane_g3

0x13d6,	// (0x0003010b) bg_popup_call2_bubble_pane_g4

0x13de,	// (0x00030113) bg_popup_call2_bubble_pane_g5

0x13e6,	// (0x0003011b) bg_popup_call2_bubble_pane_g6

0x13ee,	// (0x00030123) bg_popup_call2_bubble_pane_g7

0x13f6,	// (0x0003012b) bg_popup_call2_bubble_pane_g8

0x13fe,	// (0x00030133) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x0003e24f) bg_popup_call2_bubble_pane_g

0x67f0,	// (0x00035525) aid_cale_week_size_cell_pane

0xdf47,	// (0x0003cc7c) aid_cams_cif_uncrop_pane_ParamLimits

0xdf47,	// (0x0003cc7c) aid_cams_cif_uncrop_pane

0x6de4,	// (0x00035b19) aid_cams_size_cell_ParamLimits

0x6de4,	// (0x00035b19) aid_cams_size_cell

0x6df0,	// (0x00035b25) grid_cams_pane_ParamLimits

0x6dfe,	// (0x00035b33) linegrid_cams_pane_ParamLimits

0x6ed5,	// (0x00035c0a) call_video_pane_t1

0x6ef6,	// (0x00035c2b) call_video_pane_t2

0x0001,

0xf222,	// (0x0003df57) call_video_pane_t

0x743d,	// (0x00036172) aid_cale_month_size_cell_pane_ParamLimits

0x743d,	// (0x00036172) aid_cale_month_size_cell_pane

0xf59f,	// (0x0003e2d4) smil_status_volume_pane_g

0x901d,	// (0x00037d52) volume_smil_pane_ParamLimits

0x60b3,	// (0x00034de8) aid_popup2_width_pane

0x66ef,	// (0x00035424) cell_qdial_pane_g4_ParamLimits

0x66ef,	// (0x00035424) cell_qdial_pane_g4

0x82ed,	// (0x00037022) aid_blid_cardinal_pane_ParamLimits

0x82fd,	// (0x00037032) aid_blid_destination_pane_ParamLimits

0x82fd,	// (0x00037032) aid_blid_destination_pane

0xdf47,	// (0x0003cc7c) bg_popup_call_poc_act_pane_ParamLimits

0xdf47,	// (0x0003cc7c) bg_popup_call_poc_act_pane

0xdf47,	// (0x0003cc7c) bg_popup_call_poc_inact_pane_ParamLimits

0xdf47,	// (0x0003cc7c) bg_popup_call_poc_inact_pane

0x1406,	// (0x0003013b) bg_popup_call_poc_act_pane_g1

0x140e,	// (0x00030143) bg_popup_call_poc_act_pane_g2

0x1416,	// (0x0003014b) bg_popup_call_poc_act_pane_g3

0x13d6,	// (0x0003010b) bg_popup_call_poc_act_pane_g4

0x13de,	// (0x00030113) bg_popup_call_poc_act_pane_g5

0x141e,	// (0x00030153) bg_popup_call_poc_act_pane_g6

0x13ee,	// (0x00030123) bg_popup_call_poc_act_pane_g7

0x1426,	// (0x0003015b) bg_popup_call_poc_act_pane_g8

0xdcec,	// (0x0003ca21) main_usb_pane

0x8e76,	// (0x00037bab) popup_cale_lunar_info_window

0x721f,	// (0x00035f54) im_reading_pane_t1_ParamLimits

0xe2e9,	// (0x0003d01e) list_im_pane_ParamLimits

0xe2fa,	// (0x0003d02f) scroll_pane_cp07_ParamLimits

0xdcec,	// (0x0003ca21) grid_highlight_pane_cp012

0xdf47,	// (0x0003cc7c) mup_scale_pane_ParamLimits

0x0bd3,	// (0x0002f908) main_usb_pane_g1_ParamLimits

0x0bd3,	// (0x0002f908) main_usb_pane_g1

0x8bfa,	// (0x0003792f) main_usb_pane_g2_ParamLimits

0x8bfa,	// (0x0003792f) main_usb_pane_g2

0x0001,

0xf544,	// (0x0003e279) main_usb_pane_g_ParamLimits

0xf544,	// (0x0003e279) main_usb_pane_g

0x8c06,	// (0x0003793b) main_usb_pane_t1_ParamLimits

0x8c06,	// (0x0003793b) main_usb_pane_t1

0x8c18,	// (0x0003794d) main_usb_pane_t2_ParamLimits

0x8c18,	// (0x0003794d) main_usb_pane_t2

0x8c2a,	// (0x0003795f) main_usb_pane_t3_ParamLimits

0x8c2a,	// (0x0003795f) main_usb_pane_t3

0x8c3c,	// (0x00037971) main_usb_pane_t4_ParamLimits

0x8c3c,	// (0x00037971) main_usb_pane_t4

0x8c4e,	// (0x00037983) main_usb_pane_t5_ParamLimits

0x8c4e,	// (0x00037983) main_usb_pane_t5

0x8c60,	// (0x00037995) main_usb_pane_t6_ParamLimits

0x8c60,	// (0x00037995) main_usb_pane_t6

0x0005,

0xf549,	// (0x0003e27e) main_usb_pane_t_ParamLimits

0x8293,	// (0x00036fc8) aid_text_placing

0x829f,	// (0x00036fd4) main_location2_pane_t1_ParamLimits

0x82b3,	// (0x00036fe8) main_location2_pane_t2_ParamLimits

0x82c7,	// (0x00036ffc) main_location2_pane_t3_ParamLimits

0x82db,	// (0x00037010) main_location2_pane_t4_ParamLimits

0x82db,	// (0x00037010) main_location2_pane_t4

0xf363,	// (0x0003e098) main_location2_pane_t_ParamLimits

0xdf83,	// (0x0003ccb8) find_pinb_pane_g2_ParamLimits

0xdf83,	// (0x0003ccb8) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0003de0f) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0003de0f) find_pinb_pane_g

0xdf8f,	// (0x0003ccc4) find_pinb_pane_t1_ParamLimits

0xdfa1,	// (0x0003ccd6) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0003de14) find_pinb_pane_t_ParamLimits

0xdcec,	// (0x0003ca21) main_call3_pane

0x79e0,	// (0x00036715) cale_month_day_heading_pane_t1_ParamLimits

0x7a66,	// (0x0003679b) cale_month_day_heading_pane_t2_ParamLimits

0x7adf,	// (0x00036814) cale_month_day_heading_pane_t3_ParamLimits

0x7b58,	// (0x0003688d) cale_month_day_heading_pane_t4_ParamLimits

0x7bd1,	// (0x00036906) cale_month_day_heading_pane_t5_ParamLimits

0x7c4a,	// (0x0003697f) cale_month_day_heading_pane_t6_ParamLimits

0x7cc3,	// (0x000369f8) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0003df8f) cale_month_day_heading_pane_t_ParamLimits

0xe544,	// (0x0003d279) smil_status_volume_pane

0x8756,	// (0x0003748b) postcard_address_pane_ParamLimits

0x8756,	// (0x0003748b) postcard_address_pane

0x8762,	// (0x00037497) postcard_message_pane_ParamLimits

0x8762,	// (0x00037497) postcard_message_pane

0x8bc5,	// (0x000378fa) call2_cli_visual_pane_t1_ParamLimits

0x8bc5,	// (0x000378fa) call2_cli_visual_pane_t1

0x1613,	// (0x00030348) postcard_message_pane_t1_ParamLimits

0x1613,	// (0x00030348) postcard_message_pane_t1

0x15fb,	// (0x00030330) postcard_address_pane_t1_ParamLimits

0x15fb,	// (0x00030330) postcard_address_pane_t1

0x914e,	// (0x00037e83) popup_call3_audio_in_window_ParamLimits

0x914e,	// (0x00037e83) popup_call3_audio_in_window

0x9032,	// (0x00037d67) bg_popup_call3_in_pane_ParamLimits

0x9032,	// (0x00037d67) bg_popup_call3_in_pane

0x9094,	// (0x00037dc9) popup_call3_audio_in_window_g1_ParamLimits

0x9094,	// (0x00037dc9) popup_call3_audio_in_window_g1

0x90ac,	// (0x00037de1) popup_call3_audio_in_window_g2_ParamLimits

0x90ac,	// (0x00037de1) popup_call3_audio_in_window_g2

0x90c4,	// (0x00037df9) popup_call3_audio_in_window_g3_ParamLimits

0x90c4,	// (0x00037df9) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x0003e2db) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x0003e2db) popup_call3_audio_in_window_g

0x90ec,	// (0x00037e21) popup_call3_audio_in_window_t1_ParamLimits

0x90ec,	// (0x00037e21) popup_call3_audio_in_window_t1

0x9114,	// (0x00037e49) popup_call3_audio_in_window_t2_ParamLimits

0x9114,	// (0x00037e49) popup_call3_audio_in_window_t2

0x913c,	// (0x00037e71) popup_call3_audio_in_window_t3_ParamLimits

0x913c,	// (0x00037e71) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x0003e2e4) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x0003e2e4) popup_call3_audio_in_window_t

0xe1e6,	// (0x0003cf1b) bg_popup_call3_rect_pane

0x137e,	// (0x000300b3) bg_popup_call3_rect_pane_g1

0xe10b,	// (0x0003ce40) bg_popup_call3_rect_pane_g2

0x1386,	// (0x000300bb) bg_popup_call3_rect_pane_g3

0x138e,	// (0x000300c3) bg_popup_call3_rect_pane_g4

0x1396,	// (0x000300cb) bg_popup_call3_rect_pane_g5

0x139e,	// (0x000300d3) bg_popup_call3_rect_pane_g6

0x13a6,	// (0x000300db) bg_popup_call3_rect_pane_g7

0xd8c1,	// (0x0003c5f6) mup_visualizer_osc_pane

0xd8c1,	// (0x0003c5f6) mup_visualizer_spec_pane

0x9052,	// (0x00037d87) call3_video_qcif_pane_ParamLimits

0x9052,	// (0x00037d87) call3_video_qcif_pane

0x9064,	// (0x00037d99) call3_video_qcif_uncrop_pane_ParamLimits

0x9064,	// (0x00037d99) call3_video_qcif_uncrop_pane

0x9072,	// (0x00037da7) call3_video_subqcif_pane_ParamLimits

0x9072,	// (0x00037da7) call3_video_subqcif_pane

0x9084,	// (0x00037db9) call3_video_subqcif_uncrop_pane_ParamLimits

0x9084,	// (0x00037db9) call3_video_subqcif_uncrop_pane

0x90dc,	// (0x00037e11) popup_call3_audio_in_window_g4_ParamLimits

0x90dc,	// (0x00037e11) popup_call3_audio_in_window_g4

0xd8c1,	// (0x0003c5f6) mup_spec_half_pane

0xd8c1,	// (0x0003c5f6) mup_spec_half_pane_cp

0xd8c1,	// (0x0003c5f6) mup_osc_middle_pane

0xe21c,	// (0x0003cf51) mup_visualizer_osc_pane_g1

0x158c,	// (0x000302c1) mup_spec_bar_pane_ParamLimits

0x158c,	// (0x000302c1) mup_spec_bar_pane

0xe21c,	// (0x0003cf51) mup_spec_bar_pane_g1

0xe21c,	// (0x0003cf51) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x0003e112) mup_spec_bar_pane_g

0x67f0,	// (0x00035525) aid_cale_week_size_cell_pane_ParamLimits

0x6805,	// (0x0003553a) bg_cale_heading_pane_ParamLimits

0xe148,	// (0x0003ce7d) bg_cale_pane_cp01_ParamLimits

0x6825,	// (0x0003555a) cale_week_corner_pane_ParamLimits

0x683f,	// (0x00035574) cale_week_day_heading_pane_ParamLimits

0x685f,	// (0x00035594) cale_week_scroll_pane_g1_ParamLimits

0x687a,	// (0x000355af) cale_week_scroll_pane_g2_ParamLimits

0x688d,	// (0x000355c2) cale_week_scroll_pane_g3_ParamLimits

0x68a0,	// (0x000355d5) cale_week_scroll_pane_g4_ParamLimits

0x68b3,	// (0x000355e8) cale_week_scroll_pane_g5_ParamLimits

0x68c6,	// (0x000355fb) cale_week_scroll_pane_g6_ParamLimits

0x68d9,	// (0x0003560e) cale_week_scroll_pane_g7_ParamLimits

0x68ee,	// (0x00035623) cale_week_scroll_pane_g8_ParamLimits

0x6903,	// (0x00035638) cale_week_scroll_pane_g9_ParamLimits

0x6916,	// (0x0003564b) cale_week_scroll_pane_g10_ParamLimits

0x6929,	// (0x0003565e) cale_week_scroll_pane_g11_ParamLimits

0x693c,	// (0x00035671) cale_week_scroll_pane_g12_ParamLimits

0x6953,	// (0x00035688) cale_week_scroll_pane_g13_ParamLimits

0x696e,	// (0x000356a3) cale_week_scroll_pane_g14_ParamLimits

0x6989,	// (0x000356be) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0003dea0) cale_week_scroll_pane_g_ParamLimits

0x69b9,	// (0x000356ee) cale_week_time_pane_ParamLimits

0x69ce,	// (0x00035703) grid_cale_week_pane_ParamLimits

0xe165,	// (0x0003ce9a) listscroll_cale_week_pane_t1

0xe177,	// (0x0003ceac) scroll_pane_cp08_ParamLimits

0x74b1,	// (0x000361e6) cale_month_corner_pane_ParamLimits

0xe51a,	// (0x0003d24f) cale_month_pane_t1

0x7963,	// (0x00036698) cale_month_week_pane_ParamLimits

0x0bd3,	// (0x0002f908) popup_call_status_window_g1_ParamLimits

0x80ea,	// (0x00036e1f) popup_call_status_window_g2_ParamLimits

0x80f6,	// (0x00036e2b) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x0003e01f) popup_call_status_window_g_ParamLimits

0xe8d6,	// (0x0003d60b) aid_call2_pane

0x53a9,	// (0x000340de) msg_header_pane_g1

0x8756,	// (0x0003748b) postcard_address2_pane_ParamLimits

0x8756,	// (0x0003748b) postcard_address2_pane

0x8762,	// (0x00037497) postcard_message2_pane_ParamLimits

0x8762,	// (0x00037497) postcard_message2_pane

0x8fe2,	// (0x00037d17) message2_row_pane_ParamLimits

0x8fe2,	// (0x00037d17) message2_row_pane

0x8ffd,	// (0x00037d32) address2_row_pane_ParamLimits

0x8ffd,	// (0x00037d32) address2_row_pane

0x1559,	// (0x0003028e) postcard_message2_row_pane_g1

0x1561,	// (0x00030296) postcard_message2_row_pane_t1

0x1559,	// (0x0003028e) address2_row_pane_g1

0x1561,	// (0x00030296) address2_row_pane_t1

0x6c54,	// (0x00035989) aid_size_cell_vorec

0xdcec,	// (0x0003ca21) main_rss_pane

0x156f,	// (0x000302a4) rss_list_single_pane_ParamLimits

0x156f,	// (0x000302a4) rss_list_single_pane

0x157d,	// (0x000302b2) rss_list_single_pane_t1

0x157d,	// (0x000302b2) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x0003e2cf) rss_list_single_pane_t

0xdcec,	// (0x0003ca21) main_camera2_pane

0xdcec,	// (0x0003ca21) main_video2_pane

0xd8cb,	// (0x0003c600) cams_zoom_pane_cp2_ParamLimits

0xd8cb,	// (0x0003c600) cams_zoom_pane_cp2

0xd8cb,	// (0x0003c600) image2_vga_pane_ParamLimits

0xd8cb,	// (0x0003c600) image2_vga_pane

0xdfd0,	// (0x0003cd05) main_camera2_pane_g1_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera2_pane_g1

0xdfd0,	// (0x0003cd05) main_camera2_pane_g2_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera2_pane_g2

0xdfd0,	// (0x0003cd05) main_camera2_pane_g3_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera2_pane_g3

0xdfd0,	// (0x0003cd05) main_camera2_pane_g4_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera2_pane_g4

0xdfd0,	// (0x0003cd05) main_camera2_pane_g5_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera2_pane_g5

0xdfd0,	// (0x0003cd05) main_camera2_pane_g6_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera2_pane_g6

0xdfd0,	// (0x0003cd05) main_camera2_pane_g7_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera2_pane_g7

0xdfd0,	// (0x0003cd05) main_camera2_pane_g8_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x0003e2eb) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x0003e2eb) main_camera2_pane_g

0xe1ee,	// (0x0003cf23) main_camera2_pane_t1_ParamLimits

0xe1ee,	// (0x0003cf23) main_camera2_pane_t1

0xe1ee,	// (0x0003cf23) main_camera2_pane_t2_ParamLimits

0xe1ee,	// (0x0003cf23) main_camera2_pane_t2

0xe1ee,	// (0x0003cf23) main_camera2_pane_t3_ParamLimits

0xe1ee,	// (0x0003cf23) main_camera2_pane_t3

0xe1ee,	// (0x0003cf23) main_camera2_pane_t4_ParamLimits

0xe1ee,	// (0x0003cf23) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x0003e2fe) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x0003e2fe) main_camera2_pane_t

0xf022,	// (0x0003dd57) cams_zoom_pane_cp4_ParamLimits

0xf022,	// (0x0003dd57) cams_zoom_pane_cp4

0xdf69,	// (0x0003cc9e) image2_cif_pane_ParamLimits

0xdf69,	// (0x0003cc9e) image2_cif_pane

0xd8cb,	// (0x0003c600) image2_subqcif_pane_ParamLimits

0xd8cb,	// (0x0003c600) image2_subqcif_pane

0xf030,	// (0x0003dd65) main_video2_pane_g1_ParamLimits

0xf030,	// (0x0003dd65) main_video2_pane_g1

0xf030,	// (0x0003dd65) main_video2_pane_g2_ParamLimits

0xf030,	// (0x0003dd65) main_video2_pane_g2

0xf030,	// (0x0003dd65) main_video2_pane_g3_ParamLimits

0xf030,	// (0x0003dd65) main_video2_pane_g3

0xf030,	// (0x0003dd65) main_video2_pane_g4_ParamLimits

0xf030,	// (0x0003dd65) main_video2_pane_g4

0xf030,	// (0x0003dd65) main_video2_pane_g5_ParamLimits

0xf030,	// (0x0003dd65) main_video2_pane_g5

0xf030,	// (0x0003dd65) main_video2_pane_g6_ParamLimits

0xf030,	// (0x0003dd65) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x0003e30d) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x0003e30d) main_video2_pane_g

0xf03e,	// (0x0003dd73) main_video2_pane_t1_ParamLimits

0xf03e,	// (0x0003dd73) main_video2_pane_t1

0xf03e,	// (0x0003dd73) main_video2_pane_t2_ParamLimits

0xf03e,	// (0x0003dd73) main_video2_pane_t2

0xf03e,	// (0x0003dd73) main_video2_pane_t3_ParamLimits

0xf03e,	// (0x0003dd73) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x0003e31a) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x0003e31a) main_video2_pane_t

0x8cf6,	// (0x00037a2b) call_muted_g2

0x0001,

0xf58c,	// (0x0003e2c1) call_muted_g

0xdcec,	// (0x0003ca21) main_mup2_pane

0xdfde,	// (0x0003cd13) main_mup2_pane_g1_ParamLimits

0xdfde,	// (0x0003cd13) main_mup2_pane_g1

0xdfde,	// (0x0003cd13) main_mup2_pane_g2_ParamLimits

0xdfde,	// (0x0003cd13) main_mup2_pane_g2

0xe21c,	// (0x0003cf51) main_mup_pane_g13_cp1

0xd8c1,	// (0x0003c5f6) mup_volume_pane_cp1

0xdfde,	// (0x0003cd13) main_mup2_pane_g4_ParamLimits

0xdfde,	// (0x0003cd13) main_mup2_pane_g4

0xdfde,	// (0x0003cd13) main_mup2_pane_g5_ParamLimits

0xdfde,	// (0x0003cd13) main_mup2_pane_g5

0xdfde,	// (0x0003cd13) main_mup2_pane_g6_ParamLimits

0xdfde,	// (0x0003cd13) main_mup2_pane_g6

0xdfde,	// (0x0003cd13) main_mup2_pane_g7_ParamLimits

0xdfde,	// (0x0003cd13) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x0003e321) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x0003e321) main_mup2_pane_g

0xdfec,	// (0x0003cd21) main_mup2_pane_t1_ParamLimits

0xdfec,	// (0x0003cd21) main_mup2_pane_t1

0xdfec,	// (0x0003cd21) main_mup2_pane_t2_ParamLimits

0xdfec,	// (0x0003cd21) main_mup2_pane_t2

0xdfec,	// (0x0003cd21) main_mup2_pane_t3_ParamLimits

0xdfec,	// (0x0003cd21) main_mup2_pane_t3

0xdfec,	// (0x0003cd21) main_mup2_pane_t4_ParamLimits

0xdfec,	// (0x0003cd21) main_mup2_pane_t4

0xdfec,	// (0x0003cd21) main_mup2_pane_t5_ParamLimits

0xdfec,	// (0x0003cd21) main_mup2_pane_t5

0xdfec,	// (0x0003cd21) main_mup2_pane_t6_ParamLimits

0xdfec,	// (0x0003cd21) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x0003e330) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x0003e330) main_mup2_pane_t

0x1804,	// (0x00030539) mup2_visualizer_pane_ParamLimits

0x1804,	// (0x00030539) mup2_visualizer_pane

0x1804,	// (0x00030539) mup_progress_pane_cp_ParamLimits

0x1804,	// (0x00030539) mup_progress_pane_cp

0x168f,	// (0x000303c4) mup_volume_pane_cp_ParamLimits

0x168f,	// (0x000303c4) mup_volume_pane_cp

0xdfc2,	// (0x0003ccf7) mup2_visualizer_pane_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) mup2_visualizer_pane_g1

0xdfd0,	// (0x0003cd05) mup2_visualizer_pane_g2_ParamLimits

0xdfd0,	// (0x0003cd05) mup2_visualizer_pane_g2

0xdfd0,	// (0x0003cd05) mup2_visualizer_pane_g3_ParamLimits

0xdfd0,	// (0x0003cd05) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0003de19) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0003de19) mup2_visualizer_pane_g

0xef17,	// (0x0003dc4c) aid_size_cell_fmradio

0x8e0c,	// (0x00037b41) aid_height_parent_landcape

0xe378,	// (0x0003d0ad) wml_content_pane_cp

0xe380,	// (0x0003d0b5) wml_tabs_pane

0xe389,	// (0x0003d0be) popup_wml_miniature_window

0xe391,	// (0x0003d0c6) scroll_pane_cp021

0xe3a5,	// (0x0003d0da) wml_content_pane_comp8

0xdcec,	// (0x0003ca21) bg_popup_sub_pane_cp05

0x16a5,	// (0x000303da) popup_wml_miniature_window_g1

0x16ad,	// (0x000303e2) wml_miniature_view_pane

0x917f,	// (0x00037eb4) aid_size_wml_view

0x9187,	// (0x00037ebc) wml_miniature_view_pane_g1

0x9190,	// (0x00037ec5) wml_miniature_view_pane_g2

0x9199,	// (0x00037ece) wml_miniature_view_pane_g3

0x91a1,	// (0x00037ed6) wml_miniature_view_pane_g4

0x91a9,	// (0x00037ede) wml_miniature_view_pane_g5

0x91b1,	// (0x00037ee6) wml_miniature_view_pane_g6

0x91b9,	// (0x00037eee) wml_miniature_view_pane_g7

0x91c1,	// (0x00037ef6) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x0003e33d) wml_miniature_view_pane_g

0x16b5,	// (0x000303ea) background_graphic_ParamLimits

0x16b5,	// (0x000303ea) background_graphic

0x16c1,	// (0x000303f6) wml_tabs_2_pane

0x16ca,	// (0x000303ff) wml_tabs_3_pane_ParamLimits

0x16ca,	// (0x000303ff) wml_tabs_3_pane

0x16dc,	// (0x00030411) wml_tabs_4_pane_ParamLimits

0x16dc,	// (0x00030411) wml_tabs_4_pane

0x16f2,	// (0x00030427) wml_tabs_5_pane_ParamLimits

0x16f2,	// (0x00030427) wml_tabs_5_pane

0x170c,	// (0x00030441) wml_tabs_pane_g2_ParamLimits

0x170c,	// (0x00030441) wml_tabs_pane_g2

0x1721,	// (0x00030456) wml_tabs_pane_g3_ParamLimits

0x1721,	// (0x00030456) wml_tabs_pane_g3

0x1736,	// (0x0003046b) wml_tabs_2_active_pane_ParamLimits

0x1736,	// (0x0003046b) wml_tabs_2_active_pane

0x1736,	// (0x0003046b) wml_tabs_2_passive_pane_ParamLimits

0x1736,	// (0x0003046b) wml_tabs_2_passive_pane

0x91c9,	// (0x00037efe) wml_tabs_3_active_pane_cp_ParamLimits

0x91c9,	// (0x00037efe) wml_tabs_3_active_pane_cp

0x91da,	// (0x00037f0f) wml_tabs_3_passive_pane_ParamLimits

0x91da,	// (0x00037f0f) wml_tabs_3_passive_pane

0x91eb,	// (0x00037f20) wml_tabs_3_passive_pane_cp_ParamLimits

0x91eb,	// (0x00037f20) wml_tabs_3_passive_pane_cp

0x91fc,	// (0x00037f31) tabs_4_active_pane

0x9204,	// (0x00037f39) tabs_4_passive_pane

0x920c,	// (0x00037f41) tabs_4_passive_pane_cp

0x9214,	// (0x00037f49) tabs_4_passive_pane_cp2

0x8bf2,	// (0x00037927) aid_height_text

0x1804,	// (0x00030539) mup_volume_cont_pane_ParamLimits

0x1804,	// (0x00030539) mup_volume_cont_pane

0xd8c1,	// (0x0003c5f6) aid_size_cell_pinb

0xd8c1,	// (0x0003c5f6) aid_size_list_pinb

0x1804,	// (0x00030539) mup2_volume_cont_pane_ParamLimits

0x1804,	// (0x00030539) mup2_volume_cont_pane

0x921c,	// (0x00037f51) mup2_volume_cont_pane_g1_ParamLimits

0x921c,	// (0x00037f51) mup2_volume_cont_pane_g1

0x60bf,	// (0x00034df4) aid_size_cell_touch_ParamLimits

0x60bf,	// (0x00034df4) aid_size_cell_touch

0x6367,	// (0x0003509c) touch_pane_ParamLimits

0x6367,	// (0x0003509c) touch_pane

0xd8c1,	// (0x0003c5f6) main_rss2_pane

0x1783,	// (0x000304b8) listscroll_rss2_pane

0x178c,	// (0x000304c1) rss2_navigation_pane

0x1794,	// (0x000304c9) list_rss2_pane

0xea0d,	// (0x0003d742) scroll_pane_cp22

0x179c,	// (0x000304d1) rss2_navigation_pane_g1

0x17a5,	// (0x000304da) rss2_navigation_pane_g2

0x17ad,	// (0x000304e2) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x0003e34e) rss2_navigation_pane_g

0x17b5,	// (0x000304ea) rss2_navigation_pane_t1

0x9232,	// (0x00037f67) rss2_list_single_pane_ParamLimits

0x9232,	// (0x00037f67) rss2_list_single_pane

0x17c3,	// (0x000304f8) rss2_list_single_pane_t2

0x17d1,	// (0x00030506) rss2_list_single_pane_t3_ParamLimits

0x17d1,	// (0x00030506) rss2_list_single_pane_t3

0x17ee,	// (0x00030523) rss2_list_single_pane_t4

0x7f5f,	// (0x00036c94) smil_status_pane_g1

0xdf69,	// (0x0003cc9e) main_image2_pane_ParamLimits

0xdf69,	// (0x0003cc9e) main_image2_pane

0xdfd0,	// (0x0003cd05) main_camera2_pane_g9_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera2_pane_g9

0xe1ee,	// (0x0003cf23) main_camera2_pane_t5_ParamLimits

0xe1ee,	// (0x0003cf23) main_camera2_pane_t5

0x916b,	// (0x00037ea0) main_camera2_pane_t6_ParamLimits

0x916b,	// (0x00037ea0) main_camera2_pane_t6

0x9263,	// (0x00037f98) main_image2_pane_g1_ParamLimits

0x9263,	// (0x00037f98) main_image2_pane_g1

0x892a,	// (0x0003765f) smil2_video_pane_ParamLimits

0x892a,	// (0x0003765f) smil2_video_pane

0x5320,	// (0x00034055) aid_zoom_text_primary_cp

0x6310,	// (0x00035045) popup_preview_fixed_window

0xe2e1,	// (0x0003d016) im_reading_pane_g1

0x915d,	// (0x00037e92) cams2_bc_adjust_pane_cp_ParamLimits

0x915d,	// (0x00037e92) cams2_bc_adjust_pane_cp

0xd8cb,	// (0x0003c600) cams2_bc_adjust_pane_ParamLimits

0xd8cb,	// (0x0003c600) cams2_bc_adjust_pane

0xe21c,	// (0x0003cf51) cams2_bc_adjust_pane_g1

0xd8c1,	// (0x0003c5f6) cams2_slider_pane

0xe21c,	// (0x0003cf51) cams2_slider_pane_g1

0xe21c,	// (0x0003cf51) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x0003e355) cams2_slider_pane_g

0x6435,	// (0x0003516a) calc_display_pane_ParamLimits

0x6453,	// (0x00035188) calc_paper_pane_ParamLimits

0x646f,	// (0x000351a4) grid_calc_pane_ParamLimits

0x8158,	// (0x00036e8d) popup_clock_digital_window_t1_ParamLimits

0xeeb4,	// (0x0003dbe9) main_image_pane_t1

0x641b,	// (0x00035150) aid_size_cell_calc_ParamLimits

0x641b,	// (0x00035150) aid_size_cell_calc

0x8e52,	// (0x00037b87) popup_blid_sat_info2_window_ParamLimits

0x8e52,	// (0x00037b87) popup_blid_sat_info2_window

0x17fc,	// (0x00030531) aid_size_cell_blid

0x1804,	// (0x00030539) bg_popup_window_pane_cp07

0x1827,	// (0x0003055c) grid_popup_blid_pane

0x1831,	// (0x00030566) heading_pane_cp05_ParamLimits

0x1831,	// (0x00030566) heading_pane_cp05

0x18fb,	// (0x00030630) cell_popup_blid_pane_ParamLimits

0x18fb,	// (0x00030630) cell_popup_blid_pane

0x191f,	// (0x00030654) cell_popup_blid_pane_g1

0x1927,	// (0x0003065c) cell_popup_blid_pane_t1

0x1804,	// (0x00030539) mup2_indicator_pane_ParamLimits

0x1804,	// (0x00030539) mup2_indicator_pane

0xd8c1,	// (0x0003c5f6) mup2_visualizer_osc_pane

0x168f,	// (0x000303c4) mup2_visualizer_spec_pane_ParamLimits

0x168f,	// (0x000303c4) mup2_visualizer_spec_pane

0xd8c1,	// (0x0003c5f6) mup2_spec_half_pane

0xd8c1,	// (0x0003c5f6) mup2_spec_half_pane_cp

0x1935,	// (0x0003066a) mup2_spec_bar_pane_ParamLimits

0x1935,	// (0x0003066a) mup2_spec_bar_pane

0xe21c,	// (0x0003cf51) mup2_spec_bar_pane_g1

0x1954,	// (0x00030689) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x0003e37b) mup2_spec_bar_pane_g

0xd8c1,	// (0x0003c5f6) mup2_osc_middle_pane

0xe21c,	// (0x0003cf51) mup2_visualizer_osc_pane_g1

0xd8f9,	// (0x0003c62e) popup_number_entry_window_t1_ParamLimits

0xd90c,	// (0x0003c641) popup_number_entry_window_t2_ParamLimits

0xd91e,	// (0x0003c653) popup_number_entry_window_t3_ParamLimits

0x63be,	// (0x000350f3) popup_number_entry_window_t5_ParamLimits

0x63be,	// (0x000350f3) popup_number_entry_window_t5

0xf085,	// (0x0003ddba) popup_number_entry_window_t_ParamLimits

0xd930,	// (0x0003c665) text_title_cp2_ParamLimits

0x861e,	// (0x00037353) aid_hotspot_pointer_text2_pane

0x86b8,	// (0x000373ed) main_viewer_pane_g9_ParamLimits

0x86b8,	// (0x000373ed) main_viewer_pane_g9

0xe51a,	// (0x0003d24f) cale_month_pane_t1_ParamLimits

0xe557,	// (0x0003d28c) bg_cale_pane_ParamLimits

0xe56f,	// (0x0003d2a4) list_cale_pane_ParamLimits

0xe580,	// (0x0003d2b5) listscroll_cale_day_pane_t1

0xe592,	// (0x0003d2c7) scroll_pane_cp09_ParamLimits

0x83db,	// (0x00037110) main_mup_eq_pane_t1_ParamLimits

0x83db,	// (0x00037110) main_mup_eq_pane_t1

0x83f5,	// (0x0003712a) main_mup_eq_pane_t2_ParamLimits

0x83f5,	// (0x0003712a) main_mup_eq_pane_t2

0x840f,	// (0x00037144) main_mup_eq_pane_t3_ParamLimits

0x840f,	// (0x00037144) main_mup_eq_pane_t3

0x8427,	// (0x0003715c) main_mup_eq_pane_t4_ParamLimits

0x8427,	// (0x0003715c) main_mup_eq_pane_t4

0x843f,	// (0x00037174) main_mup_eq_pane_t5_ParamLimits

0x843f,	// (0x00037174) main_mup_eq_pane_t5

0x8457,	// (0x0003718c) main_mup_eq_pane_t6_ParamLimits

0x8457,	// (0x0003718c) main_mup_eq_pane_t6

0x846b,	// (0x000371a0) main_mup_eq_pane_t7_ParamLimits

0x846b,	// (0x000371a0) main_mup_eq_pane_t7

0x847f,	// (0x000371b4) main_mup_eq_pane_t8_ParamLimits

0x847f,	// (0x000371b4) main_mup_eq_pane_t8

0x8495,	// (0x000371ca) main_mup_eq_pane_t9_ParamLimits

0x8495,	// (0x000371ca) main_mup_eq_pane_t9

0x84ad,	// (0x000371e2) main_mup_eq_pane_t10_ParamLimits

0x84ad,	// (0x000371e2) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x0003e11e) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x0003e11e) main_mup_eq_pane_t

0x856a,	// (0x0003729f) mup_equalizer_pane_cp5_ParamLimits

0x8580,	// (0x000372b5) mup_equalizer_pane_cp6_ParamLimits

0x8598,	// (0x000372cd) mup_equalizer_pane_cp7_ParamLimits

0xd8c1,	// (0x0003c5f6) main_gallery_pane

0x15ab,	// (0x000302e0) smil2_volume_pane

0x15c6,	// (0x000302fb) smil_status_volume_pane_g1_ParamLimits

0x15b3,	// (0x000302e8) smil_status_volume_pane_g2_ParamLimits

0x9010,	// (0x00037d45) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x0003e2d4) smil_status_volume_pane_g_ParamLimits

0x1804,	// (0x00030539) bg_popup_window_pane_cp07_ParamLimits

0x1812,	// (0x00030547) blid_firmament_pane

0xd8cb,	// (0x0003c600) aid_size_cell_gallery_ParamLimits

0xd8cb,	// (0x0003c600) aid_size_cell_gallery

0xd8cb,	// (0x0003c600) grid_gallery_pane_ParamLimits

0xd8cb,	// (0x0003c600) grid_gallery_pane

0xf022,	// (0x0003dd57) cell_gallery_pane_ParamLimits

0xf022,	// (0x0003dd57) cell_gallery_pane

0xdf69,	// (0x0003cc9e) bg_cell_gallery_focus_pane_ParamLimits

0xdf69,	// (0x0003cc9e) bg_cell_gallery_focus_pane

0xdfc2,	// (0x0003ccf7) cell_gallery_pane_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) cell_gallery_pane_g1

0xdfc2,	// (0x0003ccf7) cell_gallery_pane_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) cell_gallery_pane_g2

0xdfc2,	// (0x0003ccf7) cell_gallery_pane_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) cell_gallery_pane_g3

0xdfd0,	// (0x0003cd05) cell_gallery_pane_g4_ParamLimits

0xdfd0,	// (0x0003cd05) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x0003e380) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x0003e380) cell_gallery_pane_g

0x195e,	// (0x00030693) bg_cell_gallery_focus_pane_g1

0x1966,	// (0x0003069b) bg_cell_gallery_focus_pane_g2

0x196e,	// (0x000306a3) bg_cell_gallery_focus_pane_g3

0x1976,	// (0x000306ab) bg_cell_gallery_focus_pane_g4

0x197e,	// (0x000306b3) bg_cell_gallery_focus_pane_g5

0x1986,	// (0x000306bb) bg_cell_gallery_focus_pane_g6

0x198e,	// (0x000306c3) bg_cell_gallery_focus_pane_g7

0x1996,	// (0x000306cb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x0003e389) bg_cell_gallery_focus_pane_g

0x199e,	// (0x000306d3) aid_firma_cardinal

0x19b2,	// (0x000306e7) blid_firmament_pane_t1

0x19c9,	// (0x000306fe) blid_firmament_pane_t2

0x19e0,	// (0x00030715) blid_firmament_pane_t3

0x19f7,	// (0x0003072c) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x0003e39a) blid_firmament_pane_t

0x1a0e,	// (0x00030743) blid_sat_info_pane

0xe21c,	// (0x0003cf51) blid_sat_info_pane_g1

0xe21c,	// (0x0003cf51) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x0003e112) blid_sat_info_pane_g

0x1a1e,	// (0x00030753) blid_sat_info_pane_t1

0x1a2c,	// (0x00030761) smil2_volume_content_pane

0x1a35,	// (0x0003076a) smil2_volume_pane_g1

0xf052,	// (0x0003dd87) smil2_volume_content_pane_g1

0x1a3d,	// (0x00030772) smil2_volume_content_pane_g2

0x1a46,	// (0x0003077b) smil2_volume_content_pane_g3

0x1a4f,	// (0x00030784) smil2_volume_content_pane_g4

0x1a58,	// (0x0003078d) smil2_volume_content_pane_g5

0x1a61,	// (0x00030796) smil2_volume_content_pane_g6

0x1a6a,	// (0x0003079f) smil2_volume_content_pane_g7

0x1a73,	// (0x000307a8) smil2_volume_content_pane_g8

0x1a7c,	// (0x000307b1) smil2_volume_content_pane_g9

0x1a85,	// (0x000307ba) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x0003e3a3) smil2_volume_content_pane_g

0x6a4f,	// (0x00035784) cale_week_day_heading_pane_t1_ParamLimits

0x6a6a,	// (0x0003579f) cale_week_day_heading_pane_t2_ParamLimits

0x6a85,	// (0x000357ba) cale_week_day_heading_pane_t3_ParamLimits

0x6aa0,	// (0x000357d5) cale_week_day_heading_pane_t4_ParamLimits

0x6abb,	// (0x000357f0) cale_week_day_heading_pane_t5_ParamLimits

0x6ad6,	// (0x0003580b) cale_week_day_heading_pane_t6_ParamLimits

0x6af1,	// (0x00035826) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0003dec1) cale_week_day_heading_pane_t_ParamLimits

0xe194,	// (0x0003cec9) bg_cale_side_pane_ParamLimits

0x6b0c,	// (0x00035841) cale_week_time_pane_t1_ParamLimits

0x6b26,	// (0x0003585b) cale_week_time_pane_t2_ParamLimits

0x6b40,	// (0x00035875) cale_week_time_pane_t3_ParamLimits

0x6b5a,	// (0x0003588f) cale_week_time_pane_t4_ParamLimits

0x6b74,	// (0x000358a9) cale_week_time_pane_t5_ParamLimits

0x6b8e,	// (0x000358c3) cale_week_time_pane_t6_ParamLimits

0x6bac,	// (0x000358e1) cale_week_time_pane_t7_ParamLimits

0x6bce,	// (0x00035903) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0003ded0) cale_week_time_pane_t_ParamLimits

0x6bf2,	// (0x00035927) cell_cale_week_pane_g2_ParamLimits

0xe194,	// (0x0003cec9) bg_cale_side_pane_cp01_ParamLimits

0x7d54,	// (0x00036a89) cale_month_week_pane_t1_ParamLimits

0x7d6d,	// (0x00036aa2) cale_month_week_pane_t2_ParamLimits

0x7d86,	// (0x00036abb) cale_month_week_pane_t3_ParamLimits

0x7d9f,	// (0x00036ad4) cale_month_week_pane_t4_ParamLimits

0x7db8,	// (0x00036aed) cale_month_week_pane_t5_ParamLimits

0x7dd9,	// (0x00036b0e) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0003df9e) cale_month_week_pane_t_ParamLimits

0x7f1c,	// (0x00036c51) cell_cale_month_pane_g1_ParamLimits

0xd8c1,	// (0x0003c5f6) main_cale_event_viewer_pane

0xd8c1,	// (0x0003c5f6) listscroll_cale_event_viewer_pane

0x1a8e,	// (0x000307c3) list_cale_ev_pane

0x1a96,	// (0x000307cb) scroll_pane_cp023

0x1aa2,	// (0x000307d7) field_cale_ev_pane_ParamLimits

0x1aa2,	// (0x000307d7) field_cale_ev_pane

0x1ac0,	// (0x000307f5) field_cale_ev_content_pane_ParamLimits

0x1ac0,	// (0x000307f5) field_cale_ev_content_pane

0x1acc,	// (0x00030801) field_cale_ev_pane_g1_ParamLimits

0x1acc,	// (0x00030801) field_cale_ev_pane_g1

0x1ad8,	// (0x0003080d) field_cale_ev_pane_g2_ParamLimits

0x1ad8,	// (0x0003080d) field_cale_ev_pane_g2

0x1af0,	// (0x00030825) field_cale_ev_pane_g3_ParamLimits

0x1af0,	// (0x00030825) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x0003e3b8) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x0003e3b8) field_cale_ev_pane_g

0x1b08,	// (0x0003083d) field_cale_ev_pane_t1_ParamLimits

0x1b08,	// (0x0003083d) field_cale_ev_pane_t1

0xf05b,	// (0x0003dd90) field_cale_ev_content_pane_t1_ParamLimits

0xf05b,	// (0x0003dd90) field_cale_ev_content_pane_t1

0xed9a,	// (0x0003dacf) bg_button_pane_cp01

0x67e0,	// (0x00035515) listscroll_cale_week_pane_ParamLimits

0xe13f,	// (0x0003ce74) popup_toolbar_window_cp01

0xe165,	// (0x0003ce9a) listscroll_cale_week_pane_t1_ParamLimits

0x67e0,	// (0x00035515) listscroll_cale_day_pane_ParamLimits

0xe13f,	// (0x0003ce74) popup_toolbar_window_cp02

0xe580,	// (0x0003d2b5) listscroll_cale_day_pane_t1_ParamLimits

0x67e0,	// (0x00035515) main_cale_month_pane_ParamLimits

0x8f59,	// (0x00037c8e) popup_toolbar_window_cp03_ParamLimits

0x8f59,	// (0x00037c8e) popup_toolbar_window_cp03

0x8840,	// (0x00037575) main_image_pane_g2_ParamLimits

0x8840,	// (0x00037575) main_image_pane_g2

0x884c,	// (0x00037581) main_image_pane_g3_ParamLimits

0x884c,	// (0x00037581) main_image_pane_g3

0x0002,

0xf47b,	// (0x0003e1b0) main_image_pane_g_ParamLimits

0xf47b,	// (0x0003e1b0) main_image_pane_g

0xeeb4,	// (0x0003dbe9) main_image_pane_t1_ParamLimits

0x8858,	// (0x0003758d) main_image_pane_t2_ParamLimits

0x8858,	// (0x0003758d) main_image_pane_t2

0x886a,	// (0x0003759f) main_image_pane_t3_ParamLimits

0x886a,	// (0x0003759f) main_image_pane_t3

0x887c,	// (0x000375b1) main_image_pane_t4_ParamLimits

0x887c,	// (0x000375b1) main_image_pane_t4

0x0003,

0xf482,	// (0x0003e1b7) main_image_pane_t_ParamLimits

0xf482,	// (0x0003e1b7) main_image_pane_t

0x888e,	// (0x000375c3) popup_image_details_window_cp01

0x8898,	// (0x000375cd) popup_toobar_trans_pane_cp01_ParamLimits

0x8898,	// (0x000375cd) popup_toobar_trans_pane_cp01

0x8ea9,	// (0x00037bde) popup_image_details_window_ParamLimits

0x8ea9,	// (0x00037bde) popup_image_details_window

0x8eb7,	// (0x00037bec) popup_image_focus_window

0xd8cb,	// (0x0003c600) camera2_autofocus_pane_ParamLimits

0xd8cb,	// (0x0003c600) camera2_autofocus_pane

0xd8c1,	// (0x0003c5f6) bg_popup_sub_pane_cp06

0x1b1f,	// (0x00030854) popup_image_focus_window_g1

0x1b27,	// (0x0003085c) popup_image_focus_window_g2

0x1b2f,	// (0x00030864) popup_image_focus_window_g3

0x1b37,	// (0x0003086c) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x0003e3bf) popup_image_focus_window_g

0x1b3f,	// (0x00030874) popup_image_focus_window_t1

0x1b4d,	// (0x00030882) popup_image_focus_window_t2

0x1b5d,	// (0x00030892) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x0003e3c8) popup_image_focus_window_t

0xdfc2,	// (0x0003ccf7) camera2_autofocus_pane_g1

0xdf69,	// (0x0003cc9e) bg_tb_trans_pane_cp01

0x1b6b,	// (0x000308a0) popup_image_details_window_g1

0x1b7e,	// (0x000308b3) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x0003e3da) popup_image_details_window_g

0x1ba7,	// (0x000308dc) popup_image_details_window_t1

0x1bb9,	// (0x000308ee) popup_image_details_window_t2

0x1bd2,	// (0x00030907) popup_image_details_window_t3

0x1be6,	// (0x0003091b) popup_image_details_window_t4

0x1c01,	// (0x00030936) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x0003e3e1) popup_image_details_window_t

0xe020,	// (0x0003cd55) bg_calc_paper_pane_ParamLimits

0xd8c1,	// (0x0003c5f6) grid_highlight_pane_cp013

0x656c,	// (0x000352a1) list_calc_pane_ParamLimits

0x657e,	// (0x000352b3) scroll_pane_cp024

0xe034,	// (0x0003cd69) bg_calc_display_pane_ParamLimits

0x6586,	// (0x000352bb) calc_display_pane_t1_ParamLimits

0x659b,	// (0x000352d0) calc_display_pane_t2_ParamLimits

0x65b0,	// (0x000352e5) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0003de41) calc_display_pane_t_ParamLimits

0x6689,	// (0x000353be) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0003de5e) cell_calc_pane_g

0x6692,	// (0x000353c7) cell_calc_pane_t1

0xe089,	// (0x0003cdbe) grid_highlight_pane_cp02_ParamLimits

0xe09f,	// (0x0003cdd4) toolbar_button_pane_cp01_ParamLimits

0xe09f,	// (0x0003cdd4) toolbar_button_pane_cp01

0xeef9,	// (0x0003dc2e) temp_image_control_pane_ParamLimits

0xeef9,	// (0x0003dc2e) temp_image_control_pane

0xdf69,	// (0x0003cc9e) main_mp3_pane

0x1c1b,	// (0x00030950) temp_image_control_pane_g1_ParamLimits

0x1c1b,	// (0x00030950) temp_image_control_pane_g1

0x1c29,	// (0x0003095e) temp_image_control_pane_g2_ParamLimits

0x1c29,	// (0x0003095e) temp_image_control_pane_g2

0x1c3b,	// (0x00030970) temp_image_control_pane_g3_ParamLimits

0x1c3b,	// (0x00030970) temp_image_control_pane_g3

0x926f,	// (0x00037fa4) temp_image_control_pane_g4_ParamLimits

0x926f,	// (0x00037fa4) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x0003e3ec) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x0003e3ec) temp_image_control_pane_g

0x1c1b,	// (0x00030950) main_mp3_pane_g1

0x9280,	// (0x00037fb5) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x0003e3f5) main_mp3_pane_g

0x1c70,	// (0x000309a5) main_mp3_pane_t1

0xdfd0,	// (0x0003cd05) main_camera_pane_g8_ParamLimits

0xdfd0,	// (0x0003cd05) main_camera_pane_g8

0x6d9c,	// (0x00035ad1) main_video_pane_g7_ParamLimits

0x6d9c,	// (0x00035ad1) main_video_pane_g7

0xe1ee,	// (0x0003cf23) main_camera2_pane_t7_ParamLimits

0xe1ee,	// (0x0003cf23) main_camera2_pane_t7

0xe338,	// (0x0003d06d) scroll_pane_cp025_ParamLimits

0xe338,	// (0x0003d06d) scroll_pane_cp025

0xe34c,	// (0x0003d081) scroll_pane_cp026_ParamLimits

0xe34c,	// (0x0003d081) scroll_pane_cp026

0xe35b,	// (0x0003d090) wml_content_pane_ParamLimits

0xd8c1,	// (0x0003c5f6) main_touch_calib_pane

0x9324,	// (0x00038059) main_touch_calib_pane_g1

0x9330,	// (0x00038065) main_touch_calib_pane_g2

0x933c,	// (0x00038071) main_touch_calib_pane_g3

0x9348,	// (0x0003807d) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x0003e413) main_touch_calib_pane_g

0x9354,	// (0x00038089) main_touch_calib_pane_t1

0x936d,	// (0x000380a2) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x0003e41c) main_touch_calib_pane_t

0xeae9,	// (0x0003d81e) mup_progress_pane_cp02

0xeb1e,	// (0x0003d853) navi_pane_g1

0xebd9,	// (0x0003d90e) navi_pane_mp_t3

0xdf69,	// (0x0003cc9e) main_mp3_pane_ParamLimits

0x8f96,	// (0x00037ccb) navi_pane_ParamLimits

0x1c1b,	// (0x00030950) main_mp3_pane_g1_ParamLimits

0x9280,	// (0x00037fb5) main_mp3_pane_g2_ParamLimits

0x928c,	// (0x00037fc1) main_mp3_pane_g3_ParamLimits

0x928c,	// (0x00037fc1) main_mp3_pane_g3

0x9298,	// (0x00037fcd) main_mp3_pane_g4_ParamLimits

0x9298,	// (0x00037fcd) main_mp3_pane_g4

0xdfc2,	// (0x0003ccf7) main_mp3_pane_g5_ParamLimits

0xdfc2,	// (0x0003ccf7) main_mp3_pane_g5

0x1c4b,	// (0x00030980) main_mp3_pane_g6_ParamLimits

0x1c4b,	// (0x00030980) main_mp3_pane_g6

0x1c58,	// (0x0003098d) main_mp3_pane_g7_ParamLimits

0x1c58,	// (0x0003098d) main_mp3_pane_g7

0x1c64,	// (0x00030999) main_mp3_pane_g8_ParamLimits

0x1c64,	// (0x00030999) main_mp3_pane_g8

0xf6c0,	// (0x0003e3f5) main_mp3_pane_g_ParamLimits

0x92a4,	// (0x00037fd9) main_mp3_pane_t2

0x92b4,	// (0x00037fe9) main_mp3_pane_t3

0x1c7e,	// (0x000309b3) main_mp3_pane_t4

0x1c8c,	// (0x000309c1) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x0003e406) main_mp3_pane_t

0x1c9a,	// (0x000309cf) mup_progress_pane_cp01

0x5320,	// (0x00034055) aid_zoom_text_secondary2

0x1a8e,	// (0x000307c3) list_cale_ev2_pane

0x1a96,	// (0x000307cb) scroll_pane_cp023_ParamLimits

0x93c8,	// (0x000380fd) field_cale_ev2_pane_ParamLimits

0x93c8,	// (0x000380fd) field_cale_ev2_pane

0x5437,	// (0x0003416c) field_cale_ev2_pane_g1_ParamLimits

0x5437,	// (0x0003416c) field_cale_ev2_pane_g1

0x5443,	// (0x00034178) field_cale_ev2_pane_g2_ParamLimits

0x5443,	// (0x00034178) field_cale_ev2_pane_g2

0x545b,	// (0x00034190) field_cale_ev2_pane_g3_ParamLimits

0x545b,	// (0x00034190) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x0003e427) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x0003e427) field_cale_ev2_pane_g

0x547f,	// (0x000341b4) field_cale_ev2_pane_t1_ParamLimits

0x547f,	// (0x000341b4) field_cale_ev2_pane_t1

0x5496,	// (0x000341cb) field_cale_ev2_pane_t2_ParamLimits

0x5496,	// (0x000341cb) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x0003e430) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x0003e430) field_cale_ev2_pane_t

0x8720,	// (0x00037455) main_postcard_pane_g5_ParamLimits

0x8720,	// (0x00037455) main_postcard_pane_g5

0x872e,	// (0x00037463) main_postcard_pane_g6_ParamLimits

0x872e,	// (0x00037463) main_postcard_pane_g6

0xd8cb,	// (0x0003c600) camera2_autofocus_pane_cp_ParamLimits

0xd8cb,	// (0x0003c600) camera2_autofocus_pane_cp

0xdf69,	// (0x0003cc9e) main_mup3_pane

0x9430,	// (0x00038165) main_mup3_pane_g1_ParamLimits

0x9430,	// (0x00038165) main_mup3_pane_g1

0x9451,	// (0x00038186) main_mup3_pane_g2_ParamLimits

0x9451,	// (0x00038186) main_mup3_pane_g2

0x94c9,	// (0x000381fe) main_mup3_pane_g3_ParamLimits

0x94c9,	// (0x000381fe) main_mup3_pane_g3

0x950c,	// (0x00038241) main_mup3_pane_g4_ParamLimits

0x950c,	// (0x00038241) main_mup3_pane_g4

0x954f,	// (0x00038284) main_mup3_pane_g5_ParamLimits

0x954f,	// (0x00038284) main_mup3_pane_g5

0x9592,	// (0x000382c7) main_mup3_pane_g6_ParamLimits

0x9592,	// (0x000382c7) main_mup3_pane_g6

0xdfd0,	// (0x0003cd05) main_mup3_pane_g7_ParamLimits

0xdfd0,	// (0x0003cd05) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x0003e440) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x0003e440) main_mup3_pane_g

0x9608,	// (0x0003833d) main_mup3_pane_t1_ParamLimits

0x9608,	// (0x0003833d) main_mup3_pane_t1

0x9677,	// (0x000383ac) main_mup3_pane_t2_ParamLimits

0x9677,	// (0x000383ac) main_mup3_pane_t2

0x9740,	// (0x00038475) main_mup3_pane_t4_ParamLimits

0x9740,	// (0x00038475) main_mup3_pane_t4

0x978e,	// (0x000384c3) main_mup3_pane_t5_ParamLimits

0x978e,	// (0x000384c3) main_mup3_pane_t5

0x983e,	// (0x00038573) main_mup3_pane_t6_ParamLimits

0x983e,	// (0x00038573) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x0003e451) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x0003e451) main_mup3_pane_t

0x98ea,	// (0x0003861f) mup3_progress_pane_ParamLimits

0x98ea,	// (0x0003861f) mup3_progress_pane

0x9968,	// (0x0003869d) popup_mup3_control_window_ParamLimits

0x9968,	// (0x0003869d) popup_mup3_control_window

0x1cae,	// (0x000309e3) popup_mup3_text_window

0x9981,	// (0x000386b6) mup3_progress_pane_t1

0x99a0,	// (0x000386d5) mup3_progress_pane_t2

0x1cb6,	// (0x000309eb) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x0003e45e) mup3_progress_pane_t

0x1cd3,	// (0x00030a08) mup_progress_pane_cp03

0xd8c1,	// (0x0003c5f6) bg_tb_trans_pane_cp04

0x99bf,	// (0x000386f4) mup3_volume_pane

0x99c7,	// (0x000386fc) popup_mup3_control_window_g1

0x99d0,	// (0x00038705) mup3_volume_pane_g1

0x99d9,	// (0x0003870e) mup3_volume_pane_g2

0x99e2,	// (0x00038717) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x0003e465) mup3_volume_pane_g

0xd8c1,	// (0x0003c5f6) bg_tb_trans_pane_cp03

0x1ce3,	// (0x00030a18) popup_mup3_text_window_g1

0x1ceb,	// (0x00030a20) popup_mup3_text_window_t1

0xe07c,	// (0x0003cdb1) list_calc_item_pane_g1_ParamLimits

0x1770,	// (0x000304a5) mup_volume_pane_cp_g1

0x9386,	// (0x000380bb) main_touch_calib_pane_t3

0x939c,	// (0x000380d1) main_touch_calib_pane_t4

0x93b2,	// (0x000380e7) main_touch_calib_pane_t5

0x60ab,	// (0x00034de0) aid_cell_size_toolbar2

0x60b3,	// (0x00034de8) aid_popup3_width_pane

0x5318,	// (0x0003404d) aid_zoom_text_msg_primary

0x6c9e,	// (0x000359d3) vorec_t7

0xe040,	// (0x0003cd75) bg_calc_paper_pane_g1_ParamLimits

0xe04c,	// (0x0003cd81) bg_calc_paper_pane_g2_ParamLimits

0xe058,	// (0x0003cd8d) bg_calc_paper_pane_g3_ParamLimits

0xe064,	// (0x0003cd99) bg_calc_paper_pane_g4_ParamLimits

0xe070,	// (0x0003cda5) bg_calc_paper_pane_g5_ParamLimits

0x65ef,	// (0x00035324) bg_calc_paper_pane_g6_ParamLimits

0x6600,	// (0x00035335) bg_calc_paper_pane_g7_ParamLimits

0x6611,	// (0x00035346) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0003de48) bg_calc_paper_pane_g_ParamLimits

0x6622,	// (0x00035357) calc_bg_paper_pane_g9_ParamLimits

0xd8cb,	// (0x0003c600) image_qvga_pane_ParamLimits

0xd8cb,	// (0x0003c600) image_qvga_pane

0xdf47,	// (0x0003cc7c) bg_popup_sub_pane_cp04_ParamLimits

0xee30,	// (0x0003db65) popup_mup_playback_window_g1_ParamLimits

0xee3c,	// (0x0003db71) popup_mup_playback_window_t1_ParamLimits

0xee51,	// (0x0003db86) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x0003e1ab) popup_mup_playback_window_t_ParamLimits

0xdfc2,	// (0x0003ccf7) main_mup2_pane_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) main_mup2_pane_g3

0x6f83,	// (0x00035cb8) popup_toolbar_window_cp04

0x07c9,	// (0x0002f4fe) popup_call2_audio_second_window_g3_ParamLimits

0x07c9,	// (0x0002f4fe) popup_call2_audio_second_window_g3

0x0be1,	// (0x0002f916) popup_call2_audio_first_window_g4_ParamLimits

0x0be1,	// (0x0002f916) popup_call2_audio_first_window_g4

0x1208,	// (0x0002ff3d) popup_call2_audio_in_window_g4_ParamLimits

0x1208,	// (0x0002ff3d) popup_call2_audio_in_window_g4

0x8833,	// (0x00037568) aid_area_sk_bg_cut_ParamLimits

0x8833,	// (0x00037568) aid_area_sk_bg_cut

0xee66,	// (0x0003db9b) aid_area_sk_bg_cut_2_ParamLimits

0xee66,	// (0x0003db9b) aid_area_sk_bg_cut_2

0xd8c1,	// (0x0003c5f6) aid_placing_details_win

0xd8c1,	// (0x0003c5f6) aid_placing_details_win_2

0xdfc2,	// (0x0003ccf7) camera2_autofocus_pane_g1_ParamLimits

0x6301,	// (0x00035036) popup_fixed_preview_cale_window_ParamLimits

0x6301,	// (0x00035036) popup_fixed_preview_cale_window

0xec57,	// (0x0003d98c) navi_slider_pane_g3

0xec60,	// (0x0003d995) navi_slider_pane_g4

0xec69,	// (0x0003d99e) navi_slider_pane_g5

0xec57,	// (0x0003d98c) navi_slider_pane_g6

0x83af,	// (0x000370e4) navi_slider_pane_g7

0xed67,	// (0x0003da9c) mup_scale_pane_g3

0xed70,	// (0x0003daa5) mup_scale_pane_g4

0xed79,	// (0x0003daae) mup_scale_pane_g5

0x85b0,	// (0x000372e5) mup_scale_pane_g6

0x85b9,	// (0x000372ee) mup_scale_pane_g7

0xe21c,	// (0x0003cf51) cams2_slider_pane_g3

0xe21c,	// (0x0003cf51) cams2_slider_pane_g4

0xe21c,	// (0x0003cf51) cams2_slider_pane_g5

0xe21c,	// (0x0003cf51) cams2_slider_pane_g6

0xe21c,	// (0x0003cf51) cams2_slider_pane_g7

0xe21c,	// (0x0003cf51) camera2_autofocus_pane_cp_g1

0x14de,	// (0x00030213) bg_popup_preview_window_pane_cp02_ParamLimits

0x14de,	// (0x00030213) bg_popup_preview_window_pane_cp02

0x1cf9,	// (0x00030a2e) list_fp_cale_pane_ParamLimits

0x1cf9,	// (0x00030a2e) list_fp_cale_pane

0x1d05,	// (0x00030a3a) popup_fixed_preview_cale_window_t1_ParamLimits

0x1d05,	// (0x00030a3a) popup_fixed_preview_cale_window_t1

0x99eb,	// (0x00038720) popup_fixed_preview_cale_window_t2_ParamLimits

0x99eb,	// (0x00038720) popup_fixed_preview_cale_window_t2

0x9a00,	// (0x00038735) popup_fixed_preview_cale_window_t3_ParamLimits

0x9a00,	// (0x00038735) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x0003e46c) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x0003e46c) popup_fixed_preview_cale_window_t

0x9a15,	// (0x0003874a) list_single_fp_cale_pane_ParamLimits

0x9a15,	// (0x0003874a) list_single_fp_cale_pane

0x1d23,	// (0x00030a58) list_single_fp_cale_pane_g1_ParamLimits

0x1d23,	// (0x00030a58) list_single_fp_cale_pane_g1

0x1d2f,	// (0x00030a64) list_single_fp_cale_pane_g2_ParamLimits

0x1d2f,	// (0x00030a64) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x0003e473) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x0003e473) list_single_fp_cale_pane_g

0x1d48,	// (0x00030a7d) list_single_fp_cale_pane_t1_ParamLimits

0x1d48,	// (0x00030a7d) list_single_fp_cale_pane_t1

0x1d5a,	// (0x00030a8f) list_single_fp_cale_pane_t2_ParamLimits

0x1d5a,	// (0x00030a8f) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x0003e47a) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x0003e47a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd8c1,	// (0x0003c5f6) main_dialer_pane

0xd8c1,	// (0x0003c5f6) aid_cell_size_keypad

0xd8c1,	// (0x0003c5f6) dialer_ne_pane

0xd8c1,	// (0x0003c5f6) grid_dialer_command_1_pane

0xd8c1,	// (0x0003c5f6) grid_dialer_command_2_pane

0xd8c1,	// (0x0003c5f6) grid_dialer_keypad_pane

0x1804,	// (0x00030539) bg_popup_call_pane_cp06_ParamLimits

0x1804,	// (0x00030539) bg_popup_call_pane_cp06

0x1804,	// (0x00030539) dialer_ne_clear_pane_ParamLimits

0x1804,	// (0x00030539) dialer_ne_clear_pane

0xe21c,	// (0x0003cf51) dialer_ne_pane_g1

0xe1ee,	// (0x0003cf23) dialer_ne_pane_t1_ParamLimits

0xe1ee,	// (0x0003cf23) dialer_ne_pane_t1

0x1fa6,	// (0x00030cdb) dialer_ne_pane_t2_ParamLimits

0x1fa6,	// (0x00030cdb) dialer_ne_pane_t2

0x9a28,	// (0x0003875d) dialer_ne_pane_t3_ParamLimits

0x9a28,	// (0x0003875d) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x0003e47f) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x0003e47f) dialer_ne_pane_t

0x9a28,	// (0x0003875d) dialer_ne_pane_t3_copy1_ParamLimits

0x9a28,	// (0x0003875d) dialer_ne_pane_t3_copy1

0x1d8d,	// (0x00030ac2) cell_dialer_keypad_pane_ParamLimits

0x1d8d,	// (0x00030ac2) cell_dialer_keypad_pane

0xdf69,	// (0x0003cc9e) cell_dialer_command_1_pane_ParamLimits

0xdf69,	// (0x0003cc9e) cell_dialer_command_1_pane

0x1da4,	// (0x00030ad9) cell_dialer_command_2_pane_ParamLimits

0x1da4,	// (0x00030ad9) cell_dialer_command_2_pane

0xdf69,	// (0x0003cc9e) bg_button_pane_cp02_ParamLimits

0xdf69,	// (0x0003cc9e) bg_button_pane_cp02

0xdfc2,	// (0x0003ccf7) cell_dialer_keypad_pane_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) cell_dialer_keypad_pane_g1

0xdf69,	// (0x0003cc9e) bg_button_pane_cp03_ParamLimits

0xdf69,	// (0x0003cc9e) bg_button_pane_cp03

0xdfc2,	// (0x0003ccf7) cell_dialer_command_1_pane_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) cell_dialer_command_1_pane_g1

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp04

0xe21c,	// (0x0003cf51) cell_dialer_command_2_pane_g1

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp06

0xe21c,	// (0x0003cf51) dialer_ne_clear_pane_g1

0xeb2a,	// (0x0003d85f) navi_pane_g2

0xeb58,	// (0x0003d88d) navi_pane_g3

0x0002,

0xf379,	// (0x0003e0ae) navi_pane_g

0xebe7,	// (0x0003d91c) navi_pane_mv_g2

0xec0e,	// (0x0003d943) navi_pane_mv_g5

0x837a,	// (0x000370af) navi_pane_mv_t1

0xe034,	// (0x0003cd69) main_clock2_pane

0xd8cb,	// (0x0003c600) main_clock2_list_pane_ParamLimits

0xd8cb,	// (0x0003c600) main_clock2_list_pane

0x9a9e,	// (0x000387d3) main_clock2_pane_t1_ParamLimits

0x9a9e,	// (0x000387d3) main_clock2_pane_t1

0x9acc,	// (0x00038801) main_clock2_pane_t2_ParamLimits

0x9acc,	// (0x00038801) main_clock2_pane_t2

0x0004,

0xf756,	// (0x0003e48b) main_clock2_pane_t_ParamLimits

0xf756,	// (0x0003e48b) main_clock2_pane_t

0x9b31,	// (0x00038866) popup_clock_analogue_window_cp03_ParamLimits

0x9b31,	// (0x00038866) popup_clock_analogue_window_cp03

0x9b4f,	// (0x00038884) popup_clock_digital_window_cp02_ParamLimits

0x9b4f,	// (0x00038884) popup_clock_digital_window_cp02

0x9bc4,	// (0x000388f9) main_clock2_list_single_pane_ParamLimits

0x9bc4,	// (0x000388f9) main_clock2_list_single_pane

0xe1e6,	// (0x0003cf1b) list_highlight_pane_cp05

0x1deb,	// (0x00030b20) main_clock2_list_single_pane_t1

0x6f83,	// (0x00035cb8) popup_toolbar_window_cp04_ParamLimits

0xdfd0,	// (0x0003cd05) camera2_autofocus_pane_g2_ParamLimits

0xdfd0,	// (0x0003cd05) camera2_autofocus_pane_g2

0xdfd0,	// (0x0003cd05) camera2_autofocus_pane_g3_ParamLimits

0xdfd0,	// (0x0003cd05) camera2_autofocus_pane_g3

0xdfd0,	// (0x0003cd05) camera2_autofocus_pane_g4_ParamLimits

0xdfd0,	// (0x0003cd05) camera2_autofocus_pane_g4

0xdfd0,	// (0x0003cd05) camera2_autofocus_pane_g5_ParamLimits

0xdfd0,	// (0x0003cd05) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x0003e3cf) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x0003e3cf) camera2_autofocus_pane_g

0x93f1,	// (0x00038126) camera2_autofocus_pane_cp_g2

0x93f9,	// (0x0003812e) camera2_autofocus_pane_cp_g3

0x9401,	// (0x00038136) camera2_autofocus_pane_cp_g4

0x9409,	// (0x0003813e) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x0003e435) camera2_autofocus_pane_cp_g

0xd8c1,	// (0x0003c5f6) popup_dialer_spcha_window

0xd8c1,	// (0x0003c5f6) bg_popup_sub_pane_cp07

0xd8c1,	// (0x0003c5f6) list_spcha_pane

0x1df9,	// (0x00030b2e) list_single_spcha_pane_ParamLimits

0x1df9,	// (0x00030b2e) list_single_spcha_pane

0xd8c1,	// (0x0003c5f6) list_highlight_pane_cp06

0xe75f,	// (0x0003d494) list_single_spcha_pane_t1

0x0fb2,	// (0x0002fce7) popup_call2_audio_out_window_g4_ParamLimits

0x0fb2,	// (0x0002fce7) popup_call2_audio_out_window_g4

0xd8c1,	// (0x0003c5f6) main_imed2_pane

0x8ebf,	// (0x00037bf4) popup_imed_adjust2_window

0x8ed2,	// (0x00037c07) popup_imed_trans_window_ParamLimits

0x8ed2,	// (0x00037c07) popup_imed_trans_window

0x185d,	// (0x00030592) popup_blid_sat_info2_window_t1

0x186b,	// (0x000305a0) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x0003e364) popup_blid_sat_info2_window_t

0x9c79,	// (0x000389ae) aid_size_cell_colour_35

0x9c93,	// (0x000389c8) aid_size_cell_colour_112

0x9caa,	// (0x000389df) aid_size_cell_effect

0xdf69,	// (0x0003cc9e) bg_tb_trans_pane_cp02

0xf079,	// (0x0003ddae) heading_imed_pane

0x9cc4,	// (0x000389f9) listscroll_imed_pane

0x1e0b,	// (0x00030b40) heading_imed_pane_g1

0x1e13,	// (0x00030b48) heading_imed_pane_t1

0x1e21,	// (0x00030b56) grid_imed_colour_35_pane_ParamLimits

0x1e21,	// (0x00030b56) grid_imed_colour_35_pane

0x9cd0,	// (0x00038a05) grid_imed_effect_pane

0x1e38,	// (0x00030b6d) list_imed_aspect_pane

0x9ce0,	// (0x00038a15) scroll_pane_cp027_ParamLimits

0x9ce0,	// (0x00038a15) scroll_pane_cp027

0x9cec,	// (0x00038a21) cell_imed_effect_pane_ParamLimits

0x9cec,	// (0x00038a21) cell_imed_effect_pane

0x1e40,	// (0x00030b75) cell_imed_colour_pane_ParamLimits

0x1e40,	// (0x00030b75) cell_imed_colour_pane

0x1e82,	// (0x00030bb7) cell_imed_colour_pane_g1_ParamLimits

0x1e82,	// (0x00030bb7) cell_imed_colour_pane_g1

0x1e93,	// (0x00030bc8) hgihlgiht_grid_pane_cp016_ParamLimits

0x1e93,	// (0x00030bc8) hgihlgiht_grid_pane_cp016

0x9d04,	// (0x00038a39) cell_imed_effect_pane_g1

0x9d0c,	// (0x00038a41) grid_highlight_pane_cp017

0x1ea4,	// (0x00030bd9) list_imed_single_pane_ParamLimits

0x1ea4,	// (0x00030bd9) list_imed_single_pane

0xd8c1,	// (0x0003c5f6) list_highlight_pane_cp07

0x1eb9,	// (0x00030bee) list_imed_aspect_pane_comp1_t1

0xf022,	// (0x0003dd57) bg_tb_trans_pane_cp05

0x1edb,	// (0x00030c10) popup_imed_adjust2_window_g1

0x1f02,	// (0x00030c37) popup_imed_adjust2_window_t1

0x1f1a,	// (0x00030c4f) slider_imed_adjust_pane

0x1f2e,	// (0x00030c63) slider_imed_adjust_pane_g1

0x1f3e,	// (0x00030c73) slider_imed_adjust_pane_g2

0x1f4e,	// (0x00030c83) slider_imed_adjust_pane_g3

0x1f5f,	// (0x00030c94) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x0003e4a8) slider_imed_adjust_pane_g

0x9d15,	// (0x00038a4a) aid_size_cell_clipart2

0x9d21,	// (0x00038a56) grid_imed_clipart_pane

0x1f70,	// (0x00030ca5) scroll_pane_cp031

0x9d2b,	// (0x00038a60) cell_imed_clipart_pane_ParamLimits

0x9d2b,	// (0x00038a60) cell_imed_clipart_pane

0x9d4d,	// (0x00038a82) cell_imed_clipart_pane_g1

0xd8c1,	// (0x0003c5f6) grid_highlight_pane_cp014

0x9a80,	// (0x000387b5) main_clock2_pane_g1_ParamLimits

0x9a80,	// (0x000387b5) main_clock2_pane_g1

0x9b6b,	// (0x000388a0) aid_call2_pane_cp10

0x9b7d,	// (0x000388b2) aid_call_pane_cp10

0xea8b,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g1

0xea8b,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g2

0x9b8f,	// (0x000388c4) popup_clock_analogue_window_cp10_g3

0x9b8f,	// (0x000388c4) popup_clock_analogue_window_cp10_g4

0xea8b,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x0003e496) popup_clock_analogue_window_cp10_g

0x9ba5,	// (0x000388da) popup_clock_analogue_window_cp10_t1

0x9bd6,	// (0x0003890b) clock_digital_number_pane_cp10_ParamLimits

0x9bd6,	// (0x0003890b) clock_digital_number_pane_cp10

0x9bf0,	// (0x00038925) clock_digital_number_pane_cp11_ParamLimits

0x9bf0,	// (0x00038925) clock_digital_number_pane_cp11

0x9c0a,	// (0x0003893f) clock_digital_number_pane_cp12_ParamLimits

0x9c0a,	// (0x0003893f) clock_digital_number_pane_cp12

0x9c24,	// (0x00038959) clock_digital_number_pane_cp13_ParamLimits

0x9c24,	// (0x00038959) clock_digital_number_pane_cp13

0x9c3e,	// (0x00038973) clock_digital_separator_pane_cp10_ParamLimits

0x9c3e,	// (0x00038973) clock_digital_separator_pane_cp10

0x9c58,	// (0x0003898d) popup_clock_digital_window_cp02_t1_ParamLimits

0x9c58,	// (0x0003898d) popup_clock_digital_window_cp02_t1

0xdf3f,	// (0x0003cc74) clock_digital_number_pane_cp10_g1

0xdf3f,	// (0x0003cc74) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x0003e4b1) clock_digital_number_pane_cp10_g

0xdf3f,	// (0x0003cc74) clock_digital_separator_pane_cp10_g1

0xdf3f,	// (0x0003cc74) clock_digital_separator_pane_g2_cp10

0xec16,	// (0x0003d94b) navi_pane_vded_g4

0xec1f,	// (0x0003d954) navi_pane_vded_g5

0xec28,	// (0x0003d95d) navi_pane_vded_t1

0xd8c1,	// (0x0003c5f6) main_vded_pane

0x9d56,	// (0x00038a8b) main_vded_pane_g1

0x9d62,	// (0x00038a97) main_vded_pane_g2

0x9d6c,	// (0x00038aa1) main_vded_pane_g3

0x0002,

0xf781,	// (0x0003e4b6) main_vded_pane_g

0x9d76,	// (0x00038aab) main_vded_pane_t1

0x9d84,	// (0x00038ab9) main_vded_pane_t2

0x0001,

0xf788,	// (0x0003e4bd) main_vded_pane_t

0x9d92,	// (0x00038ac7) vded_slider_pane

0x9d9c,	// (0x00038ad1) vded_video_pane

0x1f78,	// (0x00030cad) vded_video_pane_g1

0x9da6,	// (0x00038adb) vded_video_pane_g2

0xe21c,	// (0x0003cf51) vded_video_pane_g3

0x0002,

0xf78d,	// (0x0003e4c2) vded_video_pane_g

0x1f82,	// (0x00030cb7) vded_slider_pane_g1

0x1770,	// (0x000304a5) vded_slider_pane_g2

0x1f8b,	// (0x00030cc0) vded_slider_pane_g3

0x1f94,	// (0x00030cc9) vded_slider_pane_g4

0x1f9d,	// (0x00030cd2) vded_slider_pane_g5

0x0004,

0xf794,	// (0x0003e4c9) vded_slider_pane_g

0x995a,	// (0x0003868f) mup3_rocker_pane_ParamLimits

0x995a,	// (0x0003868f) mup3_rocker_pane

0x9daf,	// (0x00038ae4) mup3_control_keys_pane_g1

0x9db7,	// (0x00038aec) mup3_control_keys_pane_g2

0x9dbf,	// (0x00038af4) mup3_control_keys_pane_g3

0x9dc7,	// (0x00038afc) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x0003e4d4) mup3_control_keys_pane_g

0x6329,	// (0x0003505e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6329,	// (0x0003505e) popup_toolbar2_fixed_window_cp01

0x9974,	// (0x000386a9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9974,	// (0x000386a9) popup_toolbar2_fixed_window_cp02

0x093b,	// (0x0002f670) popup_call2_audio_second_window_t4_ParamLimits

0x093b,	// (0x0002f670) popup_call2_audio_second_window_t4

0x0e77,	// (0x0002fbac) popup_call2_audio_first_window_t6_ParamLimits

0x0e77,	// (0x0002fbac) popup_call2_audio_first_window_t6

0x10b5,	// (0x0002fdea) popup_call2_audio_out_window_t6_ParamLimits

0x10b5,	// (0x0002fdea) popup_call2_audio_out_window_t6

0xd8c1,	// (0x0003c5f6) main_vitu_pane

0xd8cb,	// (0x0003c600) aid_size_cell_itu_ParamLimits

0xd8cb,	// (0x0003c600) aid_size_cell_itu

0xd8cb,	// (0x0003c600) bg_popup_window_pane_cp08_ParamLimits

0xd8cb,	// (0x0003c600) bg_popup_window_pane_cp08

0xd8cb,	// (0x0003c600) field_vitu_entry_pane_ParamLimits

0xd8cb,	// (0x0003c600) field_vitu_entry_pane

0xd8cb,	// (0x0003c600) grid_vitu_function_pane_ParamLimits

0xd8cb,	// (0x0003c600) grid_vitu_function_pane

0xd8cb,	// (0x0003c600) grid_vitu_itu_pane_ParamLimits

0xd8cb,	// (0x0003c600) grid_vitu_itu_pane

0xd8cb,	// (0x0003c600) cell_vitu_itu_pane_ParamLimits

0xd8cb,	// (0x0003c600) cell_vitu_itu_pane

0xd8cb,	// (0x0003c600) cell_vitu_function_pane_ParamLimits

0xd8cb,	// (0x0003c600) cell_vitu_function_pane

0xdf69,	// (0x0003cc9e) bg_popup_sub_pane_cp08_ParamLimits

0xdf69,	// (0x0003cc9e) bg_popup_sub_pane_cp08

0xe236,	// (0x0003cf6b) field_vitu_entry_pane_t1_ParamLimits

0xe236,	// (0x0003cf6b) field_vitu_entry_pane_t1

0x1fa6,	// (0x00030cdb) field_vitu_entry_pane_t2_ParamLimits

0x1fa6,	// (0x00030cdb) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x0003e4dd) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x0003e4dd) field_vitu_entry_pane_t

0x1804,	// (0x00030539) bg_button_pane_cp05_ParamLimits

0x1804,	// (0x00030539) bg_button_pane_cp05

0x1fc3,	// (0x00030cf8) cell_vitu_itu_pane_g1

0xf03e,	// (0x0003dd73) cell_vitu_itu_pane_t1_ParamLimits

0xf03e,	// (0x0003dd73) cell_vitu_itu_pane_t1

0xf03e,	// (0x0003dd73) cell_vitu_itu_pane_t2_ParamLimits

0xf03e,	// (0x0003dd73) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x0003e4e2) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x0003e4e2) cell_vitu_itu_pane_t

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp07

0xe21c,	// (0x0003cf51) cell_vitu_function_pane_g1

0x6493,	// (0x000351c8) main_calc_pane_g1

0x60e7,	// (0x00034e1c) aid_visual_content_pane

0xd8c1,	// (0x0003c5f6) main_vradio_pane

0xdfd0,	// (0x0003cd05) main_vradio_pane_g1_ParamLimits

0xdfd0,	// (0x0003cd05) main_vradio_pane_g1

0xdfd0,	// (0x0003cd05) main_vradio_pane_g2_ParamLimits

0xdfd0,	// (0x0003cd05) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x0003e4e9) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x0003e4e9) main_vradio_pane_g

0xe1ee,	// (0x0003cf23) main_vradio_pane_t1_ParamLimits

0xe1ee,	// (0x0003cf23) main_vradio_pane_t1

0xe1ee,	// (0x0003cf23) main_vradio_pane_t2_ParamLimits

0xe1ee,	// (0x0003cf23) main_vradio_pane_t2

0xe1ee,	// (0x0003cf23) main_vradio_pane_t3_ParamLimits

0xe1ee,	// (0x0003cf23) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x0003e4ee) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x0003e4ee) main_vradio_pane_t

0xd8cb,	// (0x0003c600) vradio_rocker_control_pane_ParamLimits

0xd8cb,	// (0x0003c600) vradio_rocker_control_pane

0xd8cb,	// (0x0003c600) vradio_station_info_pane_ParamLimits

0xd8cb,	// (0x0003c600) vradio_station_info_pane

0xdf69,	// (0x0003cc9e) vradio_frequency_info_pane_ParamLimits

0xdf69,	// (0x0003cc9e) vradio_frequency_info_pane

0xe21c,	// (0x0003cf51) vradio_station_info_pane_g1

0xf03e,	// (0x0003dd73) vradio_station_info_pane_t1_ParamLimits

0xf03e,	// (0x0003dd73) vradio_station_info_pane_t1

0xe1ee,	// (0x0003cf23) vradio_station_info_pane_t2_ParamLimits

0xe1ee,	// (0x0003cf23) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x0003e4f5) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x0003e4f5) vradio_station_info_pane_t

0xd8c1,	// (0x0003c5f6) vradio_tuning_pane

0x9dd7,	// (0x00038b0c) vradio_rocker_control_pane_g1

0x1fdf,	// (0x00030d14) vradio_rocker_control_pane_g2

0x9ddf,	// (0x00038b14) vradio_rocker_control_pane_g3

0x9de7,	// (0x00038b1c) vradio_rocker_control_pane_g4

0x9def,	// (0x00038b24) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x0003e4fa) vradio_rocker_control_pane_g

0xe21c,	// (0x0003cf51) vradio_frequency_info_pane_g1

0xe236,	// (0x0003cf6b) vradio_frequency_info_pane_t1_ParamLimits

0xe236,	// (0x0003cf6b) vradio_frequency_info_pane_t1

0x9df7,	// (0x00038b2c) vradio_tuning_pane_g1

0x9e04,	// (0x00038b39) vradio_tuning_pane_t1

0x6130,	// (0x00034e65) area_side_right_pane_ParamLimits

0x6130,	// (0x00034e65) area_side_right_pane

0x14a5,	// (0x000301da) status_small_pane_g1

0x14ad,	// (0x000301e2) status_small_pane_g2

0x14b6,	// (0x000301eb) status_small_pane_g3

0x14bf,	// (0x000301f4) status_small_pane_g4

0x0003,

0xf591,	// (0x0003e2c6) status_small_pane_g

0x14c8,	// (0x000301fd) status_small_pane_t1

0xd8c1,	// (0x0003c5f6) main_video3_pane

0x1fe7,	// (0x00030d1c) cams_zoom_vslider_pane

0x1fef,	// (0x00030d24) image3_wide_pane_ParamLimits

0x1fef,	// (0x00030d24) image3_wide_pane

0x2009,	// (0x00030d3e) image3_wide_small_pane

0x2015,	// (0x00030d4a) main_video3_pane_g1_ParamLimits

0x2015,	// (0x00030d4a) main_video3_pane_g1

0x2031,	// (0x00030d66) main_video3_pane_g2_ParamLimits

0x2031,	// (0x00030d66) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x0003e505) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x0003e505) main_video3_pane_g

0x204d,	// (0x00030d82) main_video3_pane_t1_ParamLimits

0x204d,	// (0x00030d82) main_video3_pane_t1

0x2078,	// (0x00030dad) main_video3_pane_t2_ParamLimits

0x2078,	// (0x00030dad) main_video3_pane_t2

0x20a3,	// (0x00030dd8) main_video3_pane_t3_ParamLimits

0x20a3,	// (0x00030dd8) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x0003e50a) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x0003e50a) main_video3_pane_t

0x20d0,	// (0x00030e05) cams_zoom_vslider_pane_g1

0x20d9,	// (0x00030e0e) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x0003e511) cams_zoom_vslider_pane_g

0x20e1,	// (0x00030e16) small_slider_vertical_pane

0xe21c,	// (0x0003cf51) small_slider_vertical_pane_g1

0xe21c,	// (0x0003cf51) small_slider_vertical_pane_g2

0x20e9,	// (0x00030e1e) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x0003e516) small_slider_vertical_pane_g

0xd8c1,	// (0x0003c5f6) main_hwr_training_pane

0x20f2,	// (0x00030e27) hwr_training_instruct_pane_ParamLimits

0x20f2,	// (0x00030e27) hwr_training_instruct_pane

0x9e13,	// (0x00038b48) hwr_training_navi_pane_ParamLimits

0x9e13,	// (0x00038b48) hwr_training_navi_pane

0x9e2d,	// (0x00038b62) hwr_training_write_pane_ParamLimits

0x9e2d,	// (0x00038b62) hwr_training_write_pane

0xd8c1,	// (0x0003c5f6) bg_frame_shadow_pane

0x2129,	// (0x00030e5e) hwr_training_write_pane_g1

0x2131,	// (0x00030e66) hwr_training_write_pane_g2

0x2139,	// (0x00030e6e) hwr_training_write_pane_g3

0x2141,	// (0x00030e76) hwr_training_write_pane_g4

0x2149,	// (0x00030e7e) hwr_training_write_pane_g5

0x2151,	// (0x00030e86) hwr_training_write_pane_g6

0x2159,	// (0x00030e8e) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x0003e51d) hwr_training_write_pane_g

0x9e65,	// (0x00038b9a) hwr_training_navi_pane_g1_ParamLimits

0x9e65,	// (0x00038b9a) hwr_training_navi_pane_g1

0x9e77,	// (0x00038bac) hwr_training_navi_pane_g2_ParamLimits

0x9e77,	// (0x00038bac) hwr_training_navi_pane_g2

0x9e89,	// (0x00038bbe) hwr_training_navi_pane_g3_ParamLimits

0x9e89,	// (0x00038bbe) hwr_training_navi_pane_g3

0x9e99,	// (0x00038bce) hwr_training_navi_pane_g4_ParamLimits

0x9e99,	// (0x00038bce) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x0003e52c) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x0003e52c) hwr_training_navi_pane_g

0x9eb3,	// (0x00038be8) hwr_training_navi_pane_t1

0x9ec1,	// (0x00038bf6) list_single_hwr_training_instruct_pane_ParamLimits

0x9ec1,	// (0x00038bf6) list_single_hwr_training_instruct_pane

0x21b0,	// (0x00030ee5) list_single_hwr_training_instruct_pane_t1

0x195e,	// (0x00030693) bg_frame_shadow_pane_g1

0x21bf,	// (0x00030ef4) bg_frame_shadow_pane_g2

0x21c7,	// (0x00030efc) bg_frame_shadow_pane_g3

0x21cf,	// (0x00030f04) bg_frame_shadow_pane_g4

0x21d7,	// (0x00030f0c) bg_frame_shadow_pane_g5

0x21df,	// (0x00030f14) bg_frame_shadow_pane_g6

0x21e7,	// (0x00030f1c) bg_frame_shadow_pane_g7

0xe0e3,	// (0x0003ce18) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x0003e537) bg_frame_shadow_pane_g

0xd8c1,	// (0x0003c5f6) main_video_tele_dialer_pane

0x9ee6,	// (0x00038c1b) aid_size_cell_video_keypad_ParamLimits

0x9ee6,	// (0x00038c1b) aid_size_cell_video_keypad

0x9ef6,	// (0x00038c2b) grid_video_dialer_keypad_pane_ParamLimits

0x9ef6,	// (0x00038c2b) grid_video_dialer_keypad_pane

0x9f2a,	// (0x00038c5f) video_down_pane_cp_ParamLimits

0x9f2a,	// (0x00038c5f) video_down_pane_cp

0x9f54,	// (0x00038c89) cell_video_dialer_keypad_pane_ParamLimits

0x9f54,	// (0x00038c89) cell_video_dialer_keypad_pane

0x21ef,	// (0x00030f24) bg_button_pane_cp08_ParamLimits

0x21ef,	// (0x00030f24) bg_button_pane_cp08

0x9f69,	// (0x00038c9e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9f69,	// (0x00038c9e) cell_video_dialer_keypad_pane_g1

0x994e,	// (0x00038683) mup3_rocker2_pane_ParamLimits

0x994e,	// (0x00038683) mup3_rocker2_pane

0xe21c,	// (0x0003cf51) mup3_rocker2_pane_g1

0x8e23,	// (0x00037b58) main_dialer2_pane

0xd8c1,	// (0x0003c5f6) main_mp4_pane

0x9fbe,	// (0x00038cf3) main_mp4_pane_g1_ParamLimits

0x9fbe,	// (0x00038cf3) main_mp4_pane_g1

0x9fcc,	// (0x00038d01) main_mp4_pane_g2_ParamLimits

0x9fcc,	// (0x00038d01) main_mp4_pane_g2

0x9fda,	// (0x00038d0f) main_mp4_pane_g3_ParamLimits

0x9fda,	// (0x00038d0f) main_mp4_pane_g3

0xa01f,	// (0x00038d54) main_mp4_pane_g4_ParamLimits

0xa01f,	// (0x00038d54) main_mp4_pane_g4

0xa04d,	// (0x00038d82) main_mp4_pane_g5_ParamLimits

0xa04d,	// (0x00038d82) main_mp4_pane_g5

0x0007,

0xf822,	// (0x0003e557) main_mp4_pane_g_ParamLimits

0xf822,	// (0x0003e557) main_mp4_pane_g

0xa0c1,	// (0x00038df6) main_mp4_pane_t1_ParamLimits

0xa0c1,	// (0x00038df6) main_mp4_pane_t1

0xa11d,	// (0x00038e52) main_mp4_pane_t2_ParamLimits

0xa11d,	// (0x00038e52) main_mp4_pane_t2

0x2377,	// (0x000310ac) main_mp4_pane_t3_ParamLimits

0x2377,	// (0x000310ac) main_mp4_pane_t3

0xa16f,	// (0x00038ea4) main_mp4_pane_t4_ParamLimits

0xa16f,	// (0x00038ea4) main_mp4_pane_t4

0x0003,

0xf833,	// (0x0003e568) main_mp4_pane_t_ParamLimits

0xf833,	// (0x0003e568) main_mp4_pane_t

0xa1b3,	// (0x00038ee8) mp4_progress_pane_ParamLimits

0xa1b3,	// (0x00038ee8) mp4_progress_pane

0xa1fd,	// (0x00038f32) mp4_rocker_pane_ParamLimits

0xa1fd,	// (0x00038f32) mp4_rocker_pane

0x2453,	// (0x00031188) mp4_progress_pane_t1

0x246c,	// (0x000311a1) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x0003e571) mp4_progress_pane_t

0x2485,	// (0x000311ba) mup_progress_pane_cp04

0xe21c,	// (0x0003cf51) mp4_rocker_pane_g1

0xa21d,	// (0x00038f52) aid_cell_size_keypad2_ParamLimits

0xa21d,	// (0x00038f52) aid_cell_size_keypad2

0xa22d,	// (0x00038f62) dialer2_ne_pane_ParamLimits

0xa22d,	// (0x00038f62) dialer2_ne_pane

0xa23b,	// (0x00038f70) grid_dialer2_keypad_pane_ParamLimits

0xa23b,	// (0x00038f70) grid_dialer2_keypad_pane

0x2ef9,	// (0x00031c2e) bg_popup_call_pane_cp07_ParamLimits

0x2ef9,	// (0x00031c2e) bg_popup_call_pane_cp07

0xa24b,	// (0x00038f80) dialer2_ne_pane_t1_ParamLimits

0xa24b,	// (0x00038f80) dialer2_ne_pane_t1

0xa270,	// (0x00038fa5) cell_dialer2_keypad_pane_ParamLimits

0xa270,	// (0x00038fa5) cell_dialer2_keypad_pane

0x24aa,	// (0x000311df) bg_button_pane_pane_cp04_ParamLimits

0x24aa,	// (0x000311df) bg_button_pane_pane_cp04

0xa285,	// (0x00038fba) cell_dialer2_keypad_pane_g1_ParamLimits

0xa285,	// (0x00038fba) cell_dialer2_keypad_pane_g1

0x6e45,	// (0x00035b7a) aid_placing_vt_set_content_ParamLimits

0x6e45,	// (0x00035b7a) aid_placing_vt_set_content

0x6e71,	// (0x00035ba6) aid_placing_vt_set_title_ParamLimits

0x6e71,	// (0x00035ba6) aid_placing_vt_set_title

0xd8c1,	// (0x0003c5f6) main_image3_pane

0xa31f,	// (0x00039054) area_side_right_pane_cp01_ParamLimits

0xa31f,	// (0x00039054) area_side_right_pane_cp01

0xdfde,	// (0x0003cd13) main_image3_pane_g1_ParamLimits

0xdfde,	// (0x0003cd13) main_image3_pane_g1

0xa34c,	// (0x00039081) main_image3_pane_g2_ParamLimits

0xa34c,	// (0x00039081) main_image3_pane_g2

0xa365,	// (0x0003909a) main_image3_pane_g3_ParamLimits

0xa365,	// (0x0003909a) main_image3_pane_g3

0xa37e,	// (0x000390b3) main_image3_pane_g4_ParamLimits

0xa37e,	// (0x000390b3) main_image3_pane_g4

0x0003,

0xf84b,	// (0x0003e580) main_image3_pane_g_ParamLimits

0xf84b,	// (0x0003e580) main_image3_pane_g

0xa397,	// (0x000390cc) main_image3_pane_t1_ParamLimits

0xa397,	// (0x000390cc) main_image3_pane_t1

0xa3bc,	// (0x000390f1) main_image3_pane_t2_ParamLimits

0xa3bc,	// (0x000390f1) main_image3_pane_t2

0xa3db,	// (0x00039110) main_image3_pane_t3_ParamLimits

0xa3db,	// (0x00039110) main_image3_pane_t3

0x0003,

0xf854,	// (0x0003e589) main_image3_pane_t_ParamLimits

0xf854,	// (0x0003e589) main_image3_pane_t

0xd8cb,	// (0x0003c600) grid_sctrl_middle_pane_cp01_ParamLimits

0xd8cb,	// (0x0003c600) grid_sctrl_middle_pane_cp01

0xa43c,	// (0x00039171) cell_sctrl_middle_pane_cp01_ParamLimits

0xa43c,	// (0x00039171) cell_sctrl_middle_pane_cp01

0xa44d,	// (0x00039182) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa44d,	// (0x00039182) cell_sctrl_middle_pane_cp01_g1

0xd8c1,	// (0x0003c5f6) main_call4_pane

0xa45a,	// (0x0003918f) aid_size_button_call4_ParamLimits

0xa45a,	// (0x0003918f) aid_size_button_call4

0xa490,	// (0x000391c5) call4_windows_pane_ParamLimits

0xa490,	// (0x000391c5) call4_windows_pane

0xa4a5,	// (0x000391da) grid_call4_button_pane_ParamLimits

0xa4a5,	// (0x000391da) grid_call4_button_pane

0xa4d3,	// (0x00039208) call4_windows_conf_pane

0xa4ea,	// (0x0003921f) popup_call4_audio_first_window_ParamLimits

0xa4ea,	// (0x0003921f) popup_call4_audio_first_window

0xa53a,	// (0x0003926f) popup_call4_audio_second_window_ParamLimits

0xa53a,	// (0x0003926f) popup_call4_audio_second_window

0xa553,	// (0x00039288) popup_call4_audio_wait_window_ParamLimits

0xa553,	// (0x00039288) popup_call4_audio_wait_window

0xa561,	// (0x00039296) cell_call4_button_pane_ParamLimits

0xa561,	// (0x00039296) cell_call4_button_pane

0xa584,	// (0x000392b9) bg_button_pane_cp09_ParamLimits

0xa584,	// (0x000392b9) bg_button_pane_cp09

0xa590,	// (0x000392c5) cell_call4_button_pane_g1_ParamLimits

0xa590,	// (0x000392c5) cell_call4_button_pane_g1

0xa59d,	// (0x000392d2) cell_call4_button_pane_t1_ParamLimits

0xa59d,	// (0x000392d2) cell_call4_button_pane_t1

0x2522,	// (0x00031257) popup_call4_audio_conf_window_ParamLimits

0x2522,	// (0x00031257) popup_call4_audio_conf_window

0x9981,	// (0x000386b6) mup3_progress_pane_t1_ParamLimits

0x99a0,	// (0x000386d5) mup3_progress_pane_t2_ParamLimits

0x1cb6,	// (0x000309eb) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x0003e45e) mup3_progress_pane_t_ParamLimits

0x1cd3,	// (0x00030a08) mup_progress_pane_cp03_ParamLimits

0x9dcf,	// (0x00038b04) mup3_control_keys_pane_g4_copy1

0xa1e1,	// (0x00038f16) mp4_rocker2_pane_ParamLimits

0xa1e1,	// (0x00038f16) mp4_rocker2_pane

0x253e,	// (0x00031273) mp4_rocker2_pane_g1

0x2536,	// (0x0003126b) mp4_rocker2_pane_g2

0xa5e1,	// (0x00039316) mp4_rocker2_pane_g3

0xa5e9,	// (0x0003931e) mp4_rocker2_pane_g4

0xa5f1,	// (0x00039326) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x0003e592) mp4_rocker2_pane_g

0xd8c1,	// (0x0003c5f6) main_camera4_pane

0xd8c1,	// (0x0003c5f6) main_video4_pane

0x9f06,	// (0x00038c3b) main_video_tele_dialer_pane_t1_ParamLimits

0x9f06,	// (0x00038c3b) main_video_tele_dialer_pane_t1

0x9f18,	// (0x00038c4d) main_video_tele_dialer_pane_t2_ParamLimits

0x9f18,	// (0x00038c4d) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x0003e548) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x0003e548) main_video_tele_dialer_pane_t

0xa611,	// (0x00039346) cam4_autofocus_pane_ParamLimits

0xa611,	// (0x00039346) cam4_autofocus_pane

0xa62b,	// (0x00039360) cam4_image_uncrop_pane_ParamLimits

0xa62b,	// (0x00039360) cam4_image_uncrop_pane

0xa642,	// (0x00039377) cam4_indicators_pane_ParamLimits

0xa642,	// (0x00039377) cam4_indicators_pane

0xa65e,	// (0x00039393) main_camera4_pane_g1_ParamLimits

0xa65e,	// (0x00039393) main_camera4_pane_g1

0xa66a,	// (0x0003939f) main_camera4_pane_g2_ParamLimits

0xa66a,	// (0x0003939f) main_camera4_pane_g2

0xa66a,	// (0x0003939f) main_camera4_pane_g3_ParamLimits

0xa66a,	// (0x0003939f) main_camera4_pane_g3

0xa676,	// (0x000393ab) main_camera4_pane_g4_ParamLimits

0xa676,	// (0x000393ab) main_camera4_pane_g4

0xa682,	// (0x000393b7) main_camera4_pane_g5_ParamLimits

0xa682,	// (0x000393b7) main_camera4_pane_g5

0x0005,

0xf868,	// (0x0003e59d) main_camera4_pane_g_ParamLimits

0xf868,	// (0x0003e59d) main_camera4_pane_g

0xa69c,	// (0x000393d1) main_camera4_pane_t1_ParamLimits

0xa69c,	// (0x000393d1) main_camera4_pane_t1

0xdfc2,	// (0x0003ccf7) bg_tb_trans_pane_cp06

0xa6ec,	// (0x00039421) cam4_indicators_pane_g1

0xa6fd,	// (0x00039432) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x0003e5b8) cam4_indicators_pane_g

0xa71b,	// (0x00039450) cam4_indicators_pane_t1

0xa745,	// (0x0003947a) main_video4_pane_g1_ParamLimits

0xa745,	// (0x0003947a) main_video4_pane_g1

0xa751,	// (0x00039486) main_video4_pane_g2_ParamLimits

0xa751,	// (0x00039486) main_video4_pane_g2

0xa75d,	// (0x00039492) main_video4_pane_g3_ParamLimits

0xa75d,	// (0x00039492) main_video4_pane_g3

0xa769,	// (0x0003949e) main_video4_pane_g4_ParamLimits

0xa769,	// (0x0003949e) main_video4_pane_g4

0x0004,

0xf88a,	// (0x0003e5bf) main_video4_pane_g_ParamLimits

0xf88a,	// (0x0003e5bf) main_video4_pane_g

0xa789,	// (0x000394be) vid4_indicators_pane_ParamLimits

0xa789,	// (0x000394be) vid4_indicators_pane

0xa7a8,	// (0x000394dd) video4_image_uncrop_cif_pane_ParamLimits

0xa7a8,	// (0x000394dd) video4_image_uncrop_cif_pane

0xa7b7,	// (0x000394ec) video4_image_uncrop_nhd_pane_ParamLimits

0xa7b7,	// (0x000394ec) video4_image_uncrop_nhd_pane

0xa62b,	// (0x00039360) video4_image_uncrop_vga_pane_ParamLimits

0xa62b,	// (0x00039360) video4_image_uncrop_vga_pane

0xdf69,	// (0x0003cc9e) bg_tb_trans_pane_cp07

0xa7ce,	// (0x00039503) vid4_indicators_pane_g1

0xa7e2,	// (0x00039517) vid4_indicators_pane_g2

0xa7f6,	// (0x0003952b) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x0003e5ca) vid4_indicators_pane_g

0xa825,	// (0x0003955a) vid4_indicators_pane_t1

0xa83c,	// (0x00039571) cam4_autofocus_pane_g1

0xa844,	// (0x00039579) cam4_autofocus_pane_g2

0xa84c,	// (0x00039581) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x0003e5d5) cam4_autofocus_pane_g

0xa854,	// (0x00039589) cam4_autofocus_pane_g3_copy1

0x9f38,	// (0x00038c6d) video_down_pane_cp_t1

0x9f46,	// (0x00038c7b) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x0003e54d) video_down_pane_cp_t

0xd8cb,	// (0x0003c600) popup_vitu2_window_ParamLimits

0xd8cb,	// (0x0003c600) popup_vitu2_window

0xa85c,	// (0x00039591) aid_size_cell2_itu2_ParamLimits

0xa85c,	// (0x00039591) aid_size_cell2_itu2

0xa878,	// (0x000395ad) aid_size_cell_itu2_ParamLimits

0xa878,	// (0x000395ad) aid_size_cell_itu2

0x2ef9,	// (0x00031c2e) bg_popup_window_pane_cp09_ParamLimits

0x2ef9,	// (0x00031c2e) bg_popup_window_pane_cp09

0xa8b2,	// (0x000395e7) field_vitu2_entry_pane_ParamLimits

0xa8b2,	// (0x000395e7) field_vitu2_entry_pane

0xa8d0,	// (0x00039605) grid_vitu2_function_pane_ParamLimits

0xa8d0,	// (0x00039605) grid_vitu2_function_pane

0xa910,	// (0x00039645) grid_vitu2_itu_pane_ParamLimits

0xa910,	// (0x00039645) grid_vitu2_itu_pane

0xa974,	// (0x000396a9) cell_vitu2_itu_pane_ParamLimits

0xa974,	// (0x000396a9) cell_vitu2_itu_pane

0xa98d,	// (0x000396c2) cell_vitu2_function_pane_ParamLimits

0xa98d,	// (0x000396c2) cell_vitu2_function_pane

0x2659,	// (0x0003138e) bg_popup_call_pane_cp08_ParamLimits

0x2659,	// (0x0003138e) bg_popup_call_pane_cp08

0x2670,	// (0x000313a5) field_vitu2_entry_pane_g1

0x267c,	// (0x000313b1) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x0003e5dc) field_vitu2_entry_pane_g

0x54ab,	// (0x000341e0) field_vitu2_entry_pane_t1_ParamLimits

0x54ab,	// (0x000341e0) field_vitu2_entry_pane_t1

0x54df,	// (0x00034214) field_vitu2_entry_pane_t2_ParamLimits

0x54df,	// (0x00034214) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x0003e5e3) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x0003e5e3) field_vitu2_entry_pane_t

0x915d,	// (0x00037e92) bg_button_pane_cp010_ParamLimits

0x915d,	// (0x00037e92) bg_button_pane_cp010

0xa9ce,	// (0x00039703) cell_vitu2_itu_pane_g1

0xa9f4,	// (0x00039729) cell_vitu2_itu_pane_t1_ParamLimits

0xa9f4,	// (0x00039729) cell_vitu2_itu_pane_t1

0x54fc,	// (0x00034231) cell_vitu2_itu_pane_t2_ParamLimits

0x54fc,	// (0x00034231) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x0003e5ed) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x0003e5ed) cell_vitu2_itu_pane_t

0xdf69,	// (0x0003cc9e) bg_button_pane_cp011

0xaa40,	// (0x00039775) cell_vitu2_function_pane_g1

0xd8c1,	// (0x0003c5f6) main_myfav_hc_pane

0xa41d,	// (0x00039152) popup_image3_note_pane_ParamLimits

0xa41d,	// (0x00039152) popup_image3_note_pane

0xa42b,	// (0x00039160) popup_image3_tool_bar_pane_ParamLimits

0xa42b,	// (0x00039160) popup_image3_tool_bar_pane

0x5572,	// (0x000342a7) cell_vitu2_itu_pane_t3_ParamLimits

0x5572,	// (0x000342a7) cell_vitu2_itu_pane_t3

0xd8c1,	// (0x0003c5f6) bg_popup_trans_pane

0x26ad,	// (0x000313e2) grid_image3_tool_bar_pane

0x26b7,	// (0x000313ec) bg_popup_trans_pane_g1

0xe441,	// (0x0003d176) bg_popup_trans_pane_g2

0x26bf,	// (0x000313f4) bg_popup_trans_pane_g3

0x26c7,	// (0x000313fc) bg_popup_trans_pane_g4

0x26cf,	// (0x00031404) bg_popup_trans_pane_g5

0x26d7,	// (0x0003140c) bg_popup_trans_pane_g6

0x26df,	// (0x00031414) bg_popup_trans_pane_g7

0x26e7,	// (0x0003141c) bg_popup_trans_pane_g8

0xe421,	// (0x0003d156) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x0003e5f4) bg_popup_trans_pane_g

0x26ef,	// (0x00031424) cell_image3_tool_bar_pane_ParamLimits

0x26ef,	// (0x00031424) cell_image3_tool_bar_pane

0xe21c,	// (0x0003cf51) cell_image3_tool_bar_pane_g1

0xd8c1,	// (0x0003c5f6) bg_popup_trans_pane_cp1

0x2703,	// (0x00031438) popup_image3_note_pane_t1

0x2711,	// (0x00031446) popup_image3_note_pane_t2

0x271f,	// (0x00031454) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x0003e607) popup_image3_note_pane_t

0x272d,	// (0x00031462) popup_image3_note_pane_t3_copy1

0xaa54,	// (0x00039789) bg_myfav_hc_instruction_pane_ParamLimits

0xaa54,	// (0x00039789) bg_myfav_hc_instruction_pane

0xaa6c,	// (0x000397a1) cell_myfav_contact_pane_ParamLimits

0xaa6c,	// (0x000397a1) cell_myfav_contact_pane

0xaa86,	// (0x000397bb) cell_myfav_contact_pane_cp1_ParamLimits

0xaa86,	// (0x000397bb) cell_myfav_contact_pane_cp1

0xaa9e,	// (0x000397d3) cell_myfav_contact_pane_cp2_ParamLimits

0xaa9e,	// (0x000397d3) cell_myfav_contact_pane_cp2

0xaab6,	// (0x000397eb) cell_myfav_contact_pane_cp3_ParamLimits

0xaab6,	// (0x000397eb) cell_myfav_contact_pane_cp3

0xaacd,	// (0x00039802) cell_myfav_contact_pane_cp4_ParamLimits

0xaacd,	// (0x00039802) cell_myfav_contact_pane_cp4

0xaae3,	// (0x00039818) cell_myfav_contact_pane_cp5_ParamLimits

0xaae3,	// (0x00039818) cell_myfav_contact_pane_cp5

0xaaf7,	// (0x0003982c) cell_myfav_contact_pane_cp6_ParamLimits

0xaaf7,	// (0x0003982c) cell_myfav_contact_pane_cp6

0xab0b,	// (0x00039840) cell_myfav_contact_pane_cp7_ParamLimits

0xab0b,	// (0x00039840) cell_myfav_contact_pane_cp7

0x273b,	// (0x00031470) listscroll_gen_pane_cp05

0xab23,	// (0x00039858) main_myfav_hc_pane_g1_ParamLimits

0xab23,	// (0x00039858) main_myfav_hc_pane_g1

0xab39,	// (0x0003986e) main_myfav_hc_pane_g2_ParamLimits

0xab39,	// (0x0003986e) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x0003e60e) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x0003e60e) main_myfav_hc_pane_g

0xab67,	// (0x0003989c) main_myfav_hc_pane_t1_ParamLimits

0xab67,	// (0x0003989c) main_myfav_hc_pane_t1

0x2744,	// (0x00031479) main_myfav_hc_pane_t2_ParamLimits

0x2744,	// (0x00031479) main_myfav_hc_pane_t2

0x2756,	// (0x0003148b) main_myfav_hc_pane_t3_ParamLimits

0x2756,	// (0x0003148b) main_myfav_hc_pane_t3

0xab7e,	// (0x000398b3) main_myfav_hc_pane_t4_ParamLimits

0xab7e,	// (0x000398b3) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x0003e615) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x0003e615) main_myfav_hc_pane_t

0xe21c,	// (0x0003cf51) bg_myfav_hc_instruction_pane_g1

0x2768,	// (0x0003149d) cell_myfav_contact_pane_g1_ParamLimits

0x2768,	// (0x0003149d) cell_myfav_contact_pane_g1

0x2768,	// (0x0003149d) cell_myfav_contact_pane_g2_ParamLimits

0x2768,	// (0x0003149d) cell_myfav_contact_pane_g2

0x2774,	// (0x000314a9) cell_myfav_contact_pane_g3_ParamLimits

0x2774,	// (0x000314a9) cell_myfav_contact_pane_g3

0xdfd0,	// (0x0003cd05) cell_myfav_contact_pane_g4_ParamLimits

0xdfd0,	// (0x0003cd05) cell_myfav_contact_pane_g4

0x2781,	// (0x000314b6) cell_myfav_contact_pane_g5_ParamLimits

0x2781,	// (0x000314b6) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x0003e620) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x0003e620) cell_myfav_contact_pane_g

0xab4f,	// (0x00039884) main_myfav_hc_pane_g3_ParamLimits

0xab4f,	// (0x00039884) main_myfav_hc_pane_g3

0x6264,	// (0x00034f99) popup_adpt_find_window

0xaba8,	// (0x000398dd) afind_page_pane_ParamLimits

0xaba8,	// (0x000398dd) afind_page_pane

0xabb5,	// (0x000398ea) aid_size_cell_afind_ParamLimits

0xabb5,	// (0x000398ea) aid_size_cell_afind

0xabcf,	// (0x00039904) bg_popup_sub_pane_cp09_ParamLimits

0xabcf,	// (0x00039904) bg_popup_sub_pane_cp09

0xabdc,	// (0x00039911) find_pane_cp01_ParamLimits

0xabdc,	// (0x00039911) find_pane_cp01

0x278d,	// (0x000314c2) grid_afind_control_pane_ParamLimits

0x278d,	// (0x000314c2) grid_afind_control_pane

0xabe9,	// (0x0003991e) grid_afind_pane_ParamLimits

0xabe9,	// (0x0003991e) grid_afind_pane

0xac05,	// (0x0003993a) cell_afind_pane_ParamLimits

0xac05,	// (0x0003993a) cell_afind_pane

0xe21c,	// (0x0003cf51) afind_page_pane_g1

0xac4d,	// (0x00039982) afind_page_pane_g2

0xac56,	// (0x0003998b) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x0003e62b) afind_page_pane_g

0xac5f,	// (0x00039994) afind_page_pane_t1

0x27a1,	// (0x000314d6) cell_afind_grid_control_pane_ParamLimits

0x27a1,	// (0x000314d6) cell_afind_grid_control_pane

0x24aa,	// (0x000311df) bg_button_pane_cp69_ParamLimits

0x24aa,	// (0x000311df) bg_button_pane_cp69

0xac7f,	// (0x000399b4) cell_afind_pane_g1_ParamLimits

0xac7f,	// (0x000399b4) cell_afind_pane_g1

0xac8c,	// (0x000399c1) cell_afind_pane_t1_ParamLimits

0xac8c,	// (0x000399c1) cell_afind_pane_t1

0xe226,	// (0x0003cf5b) bg_button_pane_cp72

0x27b0,	// (0x000314e5) cell_afind_grid_control_pane_g1

0x895a,	// (0x0003768f) aid_image_placing_area_ParamLimits

0x895a,	// (0x0003768f) aid_image_placing_area

0xdfc2,	// (0x0003ccf7) field_vitu_entry_pane_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) field_vitu_entry_pane_g1

0xdfc2,	// (0x0003ccf7) field_vitu_entry_pane_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0003df36) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0003df36) field_vitu_entry_pane_g

0x1fc3,	// (0x00030cf8) cell_vitu_itu_pane_g1_ParamLimits

0x1fa6,	// (0x00030cdb) cell_vitu_itu_pane_t3_ParamLimits

0x1fa6,	// (0x00030cdb) cell_vitu_itu_pane_t3

0x2453,	// (0x00031188) mp4_progress_pane_t1_ParamLimits

0x246c,	// (0x000311a1) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x0003e571) mp4_progress_pane_t_ParamLimits

0x2485,	// (0x000311ba) mup_progress_pane_cp04_ParamLimits

0xab92,	// (0x000398c7) main_myfav_hc_pane_t5_ParamLimits

0xab92,	// (0x000398c7) main_myfav_hc_pane_t5

0x60f3,	// (0x00034e28) aid_zoom_text_primary

0x6264,	// (0x00034f99) popup_adpt_find_window_ParamLimits

0xdf69,	// (0x0003cc9e) main_cam_set_pane

0xa650,	// (0x00039385) cam4_zoom_pane_ParamLimits

0xa650,	// (0x00039385) cam4_zoom_pane

0xac9e,	// (0x000399d3) main_cam_set_pane_g1_ParamLimits

0xac9e,	// (0x000399d3) main_cam_set_pane_g1

0xacac,	// (0x000399e1) main_cam_set_pane_g2_ParamLimits

0xacac,	// (0x000399e1) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x0003e632) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x0003e632) main_cam_set_pane_g

0xacb8,	// (0x000399ed) main_cam_set_pane_t1_ParamLimits

0xacb8,	// (0x000399ed) main_cam_set_pane_t1

0xacd4,	// (0x00039a09) main_cset_listscroll_pane_ParamLimits

0xacd4,	// (0x00039a09) main_cset_listscroll_pane

0xad06,	// (0x00039a3b) main_cset_slider_pane_ParamLimits

0xad06,	// (0x00039a3b) main_cset_slider_pane

0x27c1,	// (0x000314f6) main_cset_list_pane_ParamLimits

0x27c1,	// (0x000314f6) main_cset_list_pane

0x27d1,	// (0x00031506) scroll_pane_cp028

0xad25,	// (0x00039a5a) aid_area_touch_slider

0xad41,	// (0x00039a76) cset_slider_pane

0xad64,	// (0x00039a99) main_cset_slider_pane_g1

0xad79,	// (0x00039aae) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x0003e637) main_cset_slider_pane_g

0x280a,	// (0x0003153f) main_cset_slider_pane_t1

0xae3b,	// (0x00039b70) main_cset_slider_pane_t2

0xae55,	// (0x00039b8a) main_cset_slider_pane_t3

0xae6f,	// (0x00039ba4) main_cset_slider_pane_t4

0xae89,	// (0x00039bbe) main_cset_slider_pane_t5

0xaea7,	// (0x00039bdc) main_cset_slider_pane_t6

0xaebe,	// (0x00039bf3) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x0003e65c) main_cset_slider_pane_t

0xafca,	// (0x00039cff) cset_list_set_pane_ParamLimits

0xafca,	// (0x00039cff) cset_list_set_pane

0x28a4,	// (0x000315d9) aid_position_infowindow_above

0x28ac,	// (0x000315e1) aid_position_infowindow_below

0x55c4,	// (0x000342f9) cset_list_set_pane_g1_ParamLimits

0x55c4,	// (0x000342f9) cset_list_set_pane_g1

0x55d0,	// (0x00034305) cset_list_set_pane_g3_ParamLimits

0x55d0,	// (0x00034305) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x0003e67b) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x0003e67b) cset_list_set_pane_g

0x55df,	// (0x00034314) cset_list_set_pane_t1_ParamLimits

0x55df,	// (0x00034314) cset_list_set_pane_t1

0xdf69,	// (0x0003cc9e) list_highlight_pane_cp021_ParamLimits

0xdf69,	// (0x0003cc9e) list_highlight_pane_cp021

0xed67,	// (0x0003da9c) cset_slider_pane_g1

0xed79,	// (0x0003daae) cset_slider_pane_g2

0xed70,	// (0x0003daa5) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x0003e680) cset_slider_pane_g

0xafe0,	// (0x00039d15) aid_area_touch_cam4_zoom

0xafe8,	// (0x00039d1d) cam4_zoom_cont_pane

0xaff0,	// (0x00039d25) cam4_zoom_pane_g1

0xaff8,	// (0x00039d2d) cam4_zoom_pane_g2

0xb000,	// (0x00039d35) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x0003e687) cam4_zoom_pane_g

0x3248,	// (0x00031f7d) cam4_zoom_cont_pane_g1

0x3251,	// (0x00031f86) cam4_zoom_cont_pane_g2

0x325a,	// (0x00031f8f) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x0003e68e) cam4_zoom_cont_pane_g

0xa474,	// (0x000391a9) call4_image_pane_ParamLimits

0xa474,	// (0x000391a9) call4_image_pane

0xa4d3,	// (0x00039208) call4_windows_conf_pane_ParamLimits

0xa518,	// (0x0003924d) popup_call4_audio_in_window_ParamLimits

0xa518,	// (0x0003924d) popup_call4_audio_in_window

0xd8c1,	// (0x0003c5f6) bg_popup_call2_act_pane_cp02

0x251a,	// (0x0003124f) call4_list_conf_pane

0xe21c,	// (0x0003cf51) call4_image_pane_g1

0xe21c,	// (0x0003cf51) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x0003e112) call4_image_pane_g

0x291f,	// (0x00031654) list_single_graphic_popup_conf4_pane_ParamLimits

0x291f,	// (0x00031654) list_single_graphic_popup_conf4_pane

0xd8c1,	// (0x0003c5f6) list_highlight_pane_cp022

0x2932,	// (0x00031667) list_single_graphic_popup_conf4_pane_g1

0xe95b,	// (0x0003d690) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x0003e695) list_single_graphic_popup_conf4_pane_g

0x293a,	// (0x0003166f) list_single_graphic_popup_conf4_pane_t1

0x6fd5,	// (0x00035d0a) popup_vtel_slider_window_ParamLimits

0x6fd5,	// (0x00035d0a) popup_vtel_slider_window

0x2498,	// (0x000311cd) dialer2_ne_pane_t2_ParamLimits

0x2498,	// (0x000311cd) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x0003e576) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x0003e576) dialer2_ne_pane_t

0xdf69,	// (0x0003cc9e) bg_popup_sub_pane_cp010_ParamLimits

0xdf69,	// (0x0003cc9e) bg_popup_sub_pane_cp010

0xb008,	// (0x00039d3d) popup_vtel_slider_window_g1_ParamLimits

0xb008,	// (0x00039d3d) popup_vtel_slider_window_g1

0xb014,	// (0x00039d49) popup_vtel_slider_window_g2_ParamLimits

0xb014,	// (0x00039d49) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x0003e69a) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x0003e69a) popup_vtel_slider_window_g

0xb05c,	// (0x00039d91) vtel_slider_pane_ParamLimits

0xb05c,	// (0x00039d91) vtel_slider_pane

0xb06b,	// (0x00039da0) vtel_slider_pane_g1_ParamLimits

0xb06b,	// (0x00039da0) vtel_slider_pane_g1

0xb078,	// (0x00039dad) vtel_slider_pane_g2_ParamLimits

0xb078,	// (0x00039dad) vtel_slider_pane_g2

0xb085,	// (0x00039dba) vtel_slider_pane_g3_ParamLimits

0xb085,	// (0x00039dba) vtel_slider_pane_g3

0xb06b,	// (0x00039da0) vtel_slider_pane_g4_ParamLimits

0xb06b,	// (0x00039da0) vtel_slider_pane_g4

0xb092,	// (0x00039dc7) vtel_slider_pane_g5_ParamLimits

0xb092,	// (0x00039dc7) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x0003e6a3) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x0003e6a3) vtel_slider_pane_g

0xdf69,	// (0x0003cc9e) main_gallery2_pane

0xa894,	// (0x000395c9) aid_size_row_itut2_dropdow_list_ParamLimits

0xa894,	// (0x000395c9) aid_size_row_itut2_dropdow_list

0xa8f0,	// (0x00039625) grid_vitu2_function_top_pane_ParamLimits

0xa8f0,	// (0x00039625) grid_vitu2_function_top_pane

0xa944,	// (0x00039679) popup_vitu2_dropdown_list_window_ParamLimits

0xa944,	// (0x00039679) popup_vitu2_dropdown_list_window

0xa962,	// (0x00039697) popup_vitu2_match_list_window

0xb09f,	// (0x00039dd4) cell_vitu2_function_top_pane_ParamLimits

0xb09f,	// (0x00039dd4) cell_vitu2_function_top_pane

0xb0b9,	// (0x00039dee) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb0b9,	// (0x00039dee) cell_vitu2_function_top_pane_cp01

0xb0d5,	// (0x00039e0a) cell_vitu2_function_top_wide_pane_ParamLimits

0xb0d5,	// (0x00039e0a) cell_vitu2_function_top_wide_pane

0xdf69,	// (0x0003cc9e) bg_button_pane_cp012

0xb0f3,	// (0x00039e28) cell_vitu2_function_top_pane_g1

0xb107,	// (0x00039e3c) bg_button_pane_cp013_ParamLimits

0xb107,	// (0x00039e3c) bg_button_pane_cp013

0xb123,	// (0x00039e58) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb123,	// (0x00039e58) cell_vitu2_function_top_wide_pane_g1

0xd8cb,	// (0x0003c600) bg_popup_sub_pane_cp20

0xb13b,	// (0x00039e70) list_vitu2_match_list_pane

0x26b7,	// (0x000313ec) bg_popup_sub_pane_cp20_g1

0x26bf,	// (0x000313f4) bg_popup_sub_pane_cp20_g2

0xe441,	// (0x0003d176) bg_popup_sub_pane_cp20_g3

0x26c7,	// (0x000313fc) bg_popup_sub_pane_cp20_g4

0xe421,	// (0x0003d156) bg_popup_sub_pane_cp20_g5

0x296c,	// (0x000316a1) bg_popup_sub_pane_cp20_g6

0x26d7,	// (0x0003140c) bg_popup_sub_pane_cp20_g7

0x26df,	// (0x00031414) bg_popup_sub_pane_cp20_g8

0x26e7,	// (0x0003141c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x0003e6ae) bg_popup_sub_pane_cp20_g

0xb153,	// (0x00039e88) list_vitu2_match_list_item_pane_ParamLimits

0xb153,	// (0x00039e88) list_vitu2_match_list_item_pane

0xb165,	// (0x00039e9a) list_vitu2_match_list_item_pane_t1

0xd8c1,	// (0x0003c5f6) bg_popup_sub_pane_cp21

0xe1e6,	// (0x0003cf1b) grid_vitu2_dropdown_list_pane

0xb173,	// (0x00039ea8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb173,	// (0x00039ea8) cell_vitu2_dropdown_list_char_pane

0xb196,	// (0x00039ecb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb196,	// (0x00039ecb) cell_vitu2_dropdown_list_ctrl_pane

0x29a6,	// (0x000316db) cell_vitu2_dropdown_list_char_pane_g1

0x299d,	// (0x000316d2) cell_vitu2_dropdown_list_char_pane_g2

0x2994,	// (0x000316c9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x0003e6c1) cell_vitu2_dropdown_list_char_pane_g

0xb1c0,	// (0x00039ef5) cell_vitu2_dropdown_list_char_pane_t1

0xb1ce,	// (0x00039f03) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb1ce,	// (0x00039f03) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb1db,	// (0x00039f10) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb1db,	// (0x00039f10) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb1e8,	// (0x00039f1d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb1e8,	// (0x00039f1d) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb1f5,	// (0x00039f2a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb1f5,	// (0x00039f2a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdfc2,	// (0x0003ccf7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdfc2,	// (0x0003ccf7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x0003e6c8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x0003e6c8) cell_vitu2_dropdown_list_ctrl_pane_g

0xb211,	// (0x00039f46) aid_size_cell_gallery2_ParamLimits

0xb211,	// (0x00039f46) aid_size_cell_gallery2

0xb22b,	// (0x00039f60) grid_gallery2_pane_ParamLimits

0xb22b,	// (0x00039f60) grid_gallery2_pane

0xb242,	// (0x00039f77) scroll_pane_cp029_ParamLimits

0xb242,	// (0x00039f77) scroll_pane_cp029

0xb252,	// (0x00039f87) cell_gallery2_pane_ParamLimits

0xb252,	// (0x00039f87) cell_gallery2_pane

0x29af,	// (0x000316e4) cell_gallery2_pane_g2

0x3f00,	// (0x00032c35) cell_gallery2_pane_g3

0x29b7,	// (0x000316ec) cell_gallery2_pane_g4

0x29bf,	// (0x000316f4) cell_gallery2_pane_g5

0xe1e6,	// (0x0003cf1b) grid_highlight_pane_cp10

0xa962,	// (0x00039697) popup_vitu2_match_list_window_ParamLimits

0xa8a2,	// (0x000395d7) popup_vitu2_query_window_ParamLimits

0xa8a2,	// (0x000395d7) popup_vitu2_query_window

0xd8c1,	// (0x0003c5f6) bg_vitu2_candi_button_pane

0x29a6,	// (0x000316db) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x299d,	// (0x000316d2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2994,	// (0x000316c9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x55f4,	// (0x00034329) bg_button_pane_cp015

0xb2a7,	// (0x00039fdc) bg_button_pane_cp016

0xb2ba,	// (0x00039fef) bg_button_pane_cp017

0xf022,	// (0x0003dd57) bg_popup_sub_pane_cp22

0x29c7,	// (0x000316fc) popup_vitu2_query_window_g1

0x5627,	// (0x0003435c) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x0003e6d3) popup_vitu2_query_window_g

0x5644,	// (0x00034379) popup_vitu2_query_window_t1_ParamLimits

0x5644,	// (0x00034379) popup_vitu2_query_window_t1

0x5679,	// (0x000343ae) popup_vitu2_query_window_t2_ParamLimits

0x5679,	// (0x000343ae) popup_vitu2_query_window_t2

0x568b,	// (0x000343c0) popup_vitu2_query_window_t3_ParamLimits

0x568b,	// (0x000343c0) popup_vitu2_query_window_t3

0xb2de,	// (0x0003a013) popup_vitu2_query_window_t4_ParamLimits

0xb2de,	// (0x0003a013) popup_vitu2_query_window_t4

0xb2ff,	// (0x0003a034) popup_vitu2_query_window_t5_ParamLimits

0xb2ff,	// (0x0003a034) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x0003e6da) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x0003e6da) popup_vitu2_query_window_t

0x27b9,	// (0x000314ee) main_cset_text_pane

0xad25,	// (0x00039a5a) aid_area_touch_slider_ParamLimits

0xad41,	// (0x00039a76) cset_slider_pane_ParamLimits

0xad64,	// (0x00039a99) main_cset_slider_pane_g1_ParamLimits

0xad79,	// (0x00039aae) main_cset_slider_pane_g2_ParamLimits

0x27da,	// (0x0003150f) main_cset_slider_pane_g3_ParamLimits

0x27da,	// (0x0003150f) main_cset_slider_pane_g3

0xad8e,	// (0x00039ac3) main_cset_slider_pane_g4_ParamLimits

0xad8e,	// (0x00039ac3) main_cset_slider_pane_g4

0xad9d,	// (0x00039ad2) main_cset_slider_pane_g5_ParamLimits

0xad9d,	// (0x00039ad2) main_cset_slider_pane_g5

0xadab,	// (0x00039ae0) main_cset_slider_pane_g6_ParamLimits

0xadab,	// (0x00039ae0) main_cset_slider_pane_g6

0xf902,	// (0x0003e637) main_cset_slider_pane_g_ParamLimits

0x280a,	// (0x0003153f) main_cset_slider_pane_t1_ParamLimits

0xae3b,	// (0x00039b70) main_cset_slider_pane_t2_ParamLimits

0xae55,	// (0x00039b8a) main_cset_slider_pane_t3_ParamLimits

0xae6f,	// (0x00039ba4) main_cset_slider_pane_t4_ParamLimits

0xae89,	// (0x00039bbe) main_cset_slider_pane_t5_ParamLimits

0xaea7,	// (0x00039bdc) main_cset_slider_pane_t6_ParamLimits

0xaebe,	// (0x00039bf3) main_cset_slider_pane_t7_ParamLimits

0xaeec,	// (0x00039c21) main_cset_slider_pane_t8_ParamLimits

0xaeec,	// (0x00039c21) main_cset_slider_pane_t8

0xaf14,	// (0x00039c49) main_cset_slider_pane_t9_ParamLimits

0xaf14,	// (0x00039c49) main_cset_slider_pane_t9

0xaf3c,	// (0x00039c71) main_cset_slider_pane_t10_ParamLimits

0xaf3c,	// (0x00039c71) main_cset_slider_pane_t10

0xaf64,	// (0x00039c99) main_cset_slider_pane_t11_ParamLimits

0xaf64,	// (0x00039c99) main_cset_slider_pane_t11

0xaf8e,	// (0x00039cc3) main_cset_slider_pane_t12_ParamLimits

0xaf8e,	// (0x00039cc3) main_cset_slider_pane_t12

0xafab,	// (0x00039ce0) main_cset_slider_pane_t13_ParamLimits

0xafab,	// (0x00039ce0) main_cset_slider_pane_t13

0xf927,	// (0x0003e65c) main_cset_slider_pane_t_ParamLimits

0xd8c1,	// (0x0003c5f6) bg_popup_sub_pane_cp011

0x29d3,	// (0x00031708) main_cset_text_pane_g1

0x29db,	// (0x00031710) main_cset_text_pane_t1

0x29e9,	// (0x0003171e) main_cset_text_pane_t2

0x29f7,	// (0x0003172c) main_cset_text_pane_t3

0x2a05,	// (0x0003173a) main_cset_text_pane_t4

0x2a13,	// (0x00031748) main_cset_text_pane_t5

0x2a21,	// (0x00031756) main_cset_text_pane_t6

0x2a2f,	// (0x00031764) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x0003e6e9) main_cset_text_pane_t

0xd8c1,	// (0x0003c5f6) main_cam4_burst_pane

0xd8c1,	// (0x0003c5f6) main_cam5_pane

0xac6d,	// (0x000399a2) bg_button_pane_cp019

0xac76,	// (0x000399ab) bg_button_pane_cp020

0x27e6,	// (0x0003151b) main_cset_slider_pane_g7_ParamLimits

0x27e6,	// (0x0003151b) main_cset_slider_pane_g7

0x27f2,	// (0x00031527) main_cset_slider_pane_g8_ParamLimits

0x27f2,	// (0x00031527) main_cset_slider_pane_g8

0xadbf,	// (0x00039af4) main_cset_slider_pane_g9_ParamLimits

0xadbf,	// (0x00039af4) main_cset_slider_pane_g9

0xadcb,	// (0x00039b00) main_cset_slider_pane_g10_ParamLimits

0xadcb,	// (0x00039b00) main_cset_slider_pane_g10

0xadd7,	// (0x00039b0c) main_cset_slider_pane_g11_ParamLimits

0xadd7,	// (0x00039b0c) main_cset_slider_pane_g11

0xade3,	// (0x00039b18) main_cset_slider_pane_g12_ParamLimits

0xade3,	// (0x00039b18) main_cset_slider_pane_g12

0xadef,	// (0x00039b24) main_cset_slider_pane_g13_ParamLimits

0xadef,	// (0x00039b24) main_cset_slider_pane_g13

0xadfb,	// (0x00039b30) main_cset_slider_pane_g14_ParamLimits

0xadfb,	// (0x00039b30) main_cset_slider_pane_g14

0xae07,	// (0x00039b3c) main_cset_slider_pane_g15_ParamLimits

0xae07,	// (0x00039b3c) main_cset_slider_pane_g15

0x2832,	// (0x00031567) main_cset_slider_pane_t14_ParamLimits

0x2832,	// (0x00031567) main_cset_slider_pane_t14

0x286b,	// (0x000315a0) main_cset_slider_pane_t15_ParamLimits

0x286b,	// (0x000315a0) main_cset_slider_pane_t15

0xb320,	// (0x0003a055) aid_cam4_burst_size_cell_ParamLimits

0xb320,	// (0x0003a055) aid_cam4_burst_size_cell

0xb33c,	// (0x0003a071) grid_cam4_burst_pane_ParamLimits

0xb33c,	// (0x0003a071) grid_cam4_burst_pane

0xb36c,	// (0x0003a0a1) linegrid_cam4_burst_pane_ParamLimits

0xb36c,	// (0x0003a0a1) linegrid_cam4_burst_pane

0xb38c,	// (0x0003a0c1) scroll_pane_cp30_ParamLimits

0xb38c,	// (0x0003a0c1) scroll_pane_cp30

0xb398,	// (0x0003a0cd) cell_cam4_burst_pane_ParamLimits

0xb398,	// (0x0003a0cd) cell_cam4_burst_pane

0x2a49,	// (0x0003177e) linegrid_cam4_burst_pane_g1_ParamLimits

0x2a49,	// (0x0003177e) linegrid_cam4_burst_pane_g1

0xb3d4,	// (0x0003a109) linegrid_cam4_burst_pane_g2_ParamLimits

0xb3d4,	// (0x0003a109) linegrid_cam4_burst_pane_g2

0x2a56,	// (0x0003178b) linegrid_cam4_burst_pane_g3_ParamLimits

0x2a56,	// (0x0003178b) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x0003e6f8) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x0003e6f8) linegrid_cam4_burst_pane_g

0xb3e5,	// (0x0003a11a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb3e5,	// (0x0003a11a) linegrid_cam4_burst_pane_g3_copy1

0x2a63,	// (0x00031798) linegrid_cam4_burst_pane_g4_ParamLimits

0x2a63,	// (0x00031798) linegrid_cam4_burst_pane_g4

0xb3ff,	// (0x0003a134) linegrid_cam4_burst_pane_g5_ParamLimits

0xb3ff,	// (0x0003a134) linegrid_cam4_burst_pane_g5

0xb410,	// (0x0003a145) linegrid_cam4_burst_pane_g6_ParamLimits

0xb410,	// (0x0003a145) linegrid_cam4_burst_pane_g6

0x2a70,	// (0x000317a5) linegrid_cam4_burst_pane_g7_ParamLimits

0x2a70,	// (0x000317a5) linegrid_cam4_burst_pane_g7

0xb421,	// (0x0003a156) cell_cam4_burst_pane_g1

0x2a89,	// (0x000317be) main_cam5_pane_t1_ParamLimits

0x2a89,	// (0x000317be) main_cam5_pane_t1

0x2a9b,	// (0x000317d0) main_cam5_pane_t2_ParamLimits

0x2a9b,	// (0x000317d0) main_cam5_pane_t2

0x2aad,	// (0x000317e2) main_cam5_pane_t3_ParamLimits

0x2aad,	// (0x000317e2) main_cam5_pane_t3

0x2abf,	// (0x000317f4) main_cam5_pane_t4_ParamLimits

0x2abf,	// (0x000317f4) main_cam5_pane_t4

0x2ad7,	// (0x0003180c) main_cam5_pane_t5_ParamLimits

0x2ad7,	// (0x0003180c) main_cam5_pane_t5

0x2aeb,	// (0x00031820) main_cam5_pane_t6_ParamLimits

0x2aeb,	// (0x00031820) main_cam5_pane_t6

0x2aff,	// (0x00031834) main_cam5_pane_t7_ParamLimits

0x2aff,	// (0x00031834) main_cam5_pane_t7

0x2b11,	// (0x00031846) main_cam5_pane_t8_ParamLimits

0x2b11,	// (0x00031846) main_cam5_pane_t8

0x2b2d,	// (0x00031862) main_cam5_pane_t9_ParamLimits

0x2b2d,	// (0x00031862) main_cam5_pane_t9

0x2b3f,	// (0x00031874) main_cam5_pane_t10_ParamLimits

0x2b3f,	// (0x00031874) main_cam5_pane_t10

0x2b51,	// (0x00031886) main_cam5_pane_t11_ParamLimits

0x2b51,	// (0x00031886) main_cam5_pane_t11

0x2b63,	// (0x00031898) main_cam5_pane_t12_ParamLimits

0x2b63,	// (0x00031898) main_cam5_pane_t12

0x2b78,	// (0x000318ad) main_cam5_pane_t13_ParamLimits

0x2b78,	// (0x000318ad) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x0003e704) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x0003e704) main_cam5_pane_t

0x631a,	// (0x0003504f) popup_scut_keymap_window_ParamLimits

0x631a,	// (0x0003504f) popup_scut_keymap_window

0xb434,	// (0x0003a169) aid_size_cell_brow_shortcut

0xe1e6,	// (0x0003cf1b) bg_popup_window_pane_cp010

0xb440,	// (0x0003a175) grid_scut_pane

0xb44c,	// (0x0003a181) cell_scut_pane_ParamLimits

0xb44c,	// (0x0003a181) cell_scut_pane

0xb463,	// (0x0003a198) cell_scut_pane_g1

0x2b95,	// (0x000318ca) cell_scut_pane_t1

0x2ba4,	// (0x000318d9) cell_scut_pane_t2

0xb46c,	// (0x0003a1a1) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x0003e71f) cell_scut_pane_t

0x95a0,	// (0x000382d5) main_mup3_pane_g8_ParamLimits

0x95a0,	// (0x000382d5) main_mup3_pane_g8

0xa8a2,	// (0x000395d7) area_vitu2_query_pane_ParamLimits

0xa8a2,	// (0x000395d7) area_vitu2_query_pane

0x5606,	// (0x0003433b) input_focus_pane_cp08

0x2bb3,	// (0x000318e8) area_vitu2_query_pane_g1

0x5709,	// (0x0003443e) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x0003e726) area_vitu2_query_pane_g

0xb47a,	// (0x0003a1af) area_vitu2_query_pane_t1_ParamLimits

0xb47a,	// (0x0003a1af) area_vitu2_query_pane_t1

0xb48e,	// (0x0003a1c3) area_vitu2_query_pane_t2_ParamLimits

0xb48e,	// (0x0003a1c3) area_vitu2_query_pane_t2

0x571a,	// (0x0003444f) area_vitu2_query_pane_t3_ParamLimits

0x571a,	// (0x0003444f) area_vitu2_query_pane_t3

0x5742,	// (0x00034477) area_vitu2_query_pane_t4_ParamLimits

0x5742,	// (0x00034477) area_vitu2_query_pane_t4

0x576a,	// (0x0003449f) area_vitu2_query_pane_t5_ParamLimits

0x576a,	// (0x0003449f) area_vitu2_query_pane_t5

0x5792,	// (0x000344c7) area_vitu2_query_pane_t6_ParamLimits

0x5792,	// (0x000344c7) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x0003e72b) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x0003e72b) area_vitu2_query_pane_t

0xb4a2,	// (0x0003a1d7) bg_button_pane_cp018

0xb4b0,	// (0x0003a1e5) bg_button_pane_cp021

0x57de,	// (0x00034513) bg_button_pane_cp022

0x57ef,	// (0x00034524) input_focus_pane_cp09

0xea97,	// (0x0003d7cc) aid_size_touch_mv_arrow_left

0xeac0,	// (0x0003d7f5) aid_size_touch_mv_arrow_right

0xae1f,	// (0x00039b54) main_cset_slider_pane_g16_ParamLimits

0xae1f,	// (0x00039b54) main_cset_slider_pane_g16

0xae2d,	// (0x00039b62) main_cset_slider_pane_g17_ParamLimits

0xae2d,	// (0x00039b62) main_cset_slider_pane_g17

0xb421,	// (0x0003a156) cell_cam4_burst_pane_g1_ParamLimits

0xd8c1,	// (0x0003c5f6) compa_mode_pane

0xb020,	// (0x00039d55) popup_vtel_slider_window_g3_ParamLimits

0xb020,	// (0x00039d55) popup_vtel_slider_window_g3

0xb034,	// (0x00039d69) popup_vtel_slider_window_g4_ParamLimits

0xb034,	// (0x00039d69) popup_vtel_slider_window_g4

0xb048,	// (0x00039d7d) popup_vtel_slider_window_t1_ParamLimits

0xb048,	// (0x00039d7d) popup_vtel_slider_window_t1

0xd8c1,	// (0x0003c5f6) main_cl_pane

0x8ebf,	// (0x00037bf4) popup_imed_adjust2_window_ParamLimits

0xf022,	// (0x0003dd57) bg_tb_trans_pane_cp05_ParamLimits

0x1edb,	// (0x00030c10) popup_imed_adjust2_window_g1_ParamLimits

0x1eea,	// (0x00030c1f) popup_imed_adjust2_window_g2_ParamLimits

0x1eea,	// (0x00030c1f) popup_imed_adjust2_window_g2

0x1ef6,	// (0x00030c2b) popup_imed_adjust2_window_g3_ParamLimits

0x1ef6,	// (0x00030c2b) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x0003e4a1) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x0003e4a1) popup_imed_adjust2_window_g

0x1f02,	// (0x00030c37) popup_imed_adjust2_window_t1_ParamLimits

0x1f1a,	// (0x00030c4f) slider_imed_adjust_pane_ParamLimits

0x1f2e,	// (0x00030c63) slider_imed_adjust_pane_g1_ParamLimits

0x1f3e,	// (0x00030c73) slider_imed_adjust_pane_g2_ParamLimits

0x1f4e,	// (0x00030c83) slider_imed_adjust_pane_g3_ParamLimits

0x1f5f,	// (0x00030c94) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x0003e4a8) slider_imed_adjust_pane_g_ParamLimits

0xa5f9,	// (0x0003932e) aid_touch_area_cam4_ParamLimits

0xa5f9,	// (0x0003932e) aid_touch_area_cam4

0xa609,	// (0x0003933e) battery_pane_cp01

0xa690,	// (0x000393c5) main_camera4_pane_g6_ParamLimits

0xa690,	// (0x000393c5) main_camera4_pane_g6

0xa6ae,	// (0x000393e3) main_camera4_pane_t2_ParamLimits

0xa6ae,	// (0x000393e3) main_camera4_pane_t2

0x0001,

0xf875,	// (0x0003e5aa) main_camera4_pane_t_ParamLimits

0xf875,	// (0x0003e5aa) main_camera4_pane_t

0xa735,	// (0x0003946a) aid_touch_area_vid4_ParamLimits

0xa735,	// (0x0003946a) aid_touch_area_vid4

0xa775,	// (0x000394aa) main_video4_pane_g5_ParamLimits

0xa775,	// (0x000394aa) main_video4_pane_g5

0xa799,	// (0x000394ce) vid4_progress_pane_ParamLimits

0xa799,	// (0x000394ce) vid4_progress_pane

0x27fe,	// (0x00031533) main_cset_slider_pane_g18_ParamLimits

0x27fe,	// (0x00031533) main_cset_slider_pane_g18

0x2a7d,	// (0x000317b2) cell_cam4_burst_pane_g2_ParamLimits

0x2a7d,	// (0x000317b2) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x0003e6ff) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x0003e6ff) cell_cam4_burst_pane_g

0xb4bc,	// (0x0003a1f1) bg_cl_pane_ParamLimits

0xb4bc,	// (0x0003a1f1) bg_cl_pane

0xb4c8,	// (0x0003a1fd) cl_header_pane_ParamLimits

0xb4c8,	// (0x0003a1fd) cl_header_pane

0xb4d4,	// (0x0003a209) cl_listscroll_pane_ParamLimits

0xb4d4,	// (0x0003a209) cl_listscroll_pane

0x2c5b,	// (0x00031990) bg_cl_pane_g1

0x2c63,	// (0x00031998) bg_cl_pane_g2

0x2c6b,	// (0x000319a0) bg_cl_pane_g3

0x2c73,	// (0x000319a8) bg_cl_pane_g4

0x2c7b,	// (0x000319b0) bg_cl_pane_g5

0x2c83,	// (0x000319b8) bg_cl_pane_g6

0x2c8b,	// (0x000319c0) bg_cl_pane_g7

0x2c93,	// (0x000319c8) bg_cl_pane_g8

0x2c9b,	// (0x000319d0) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x0003e73a) bg_cl_pane_g

0xb4e0,	// (0x0003a215) aid_height_cl_leading_ParamLimits

0xb4e0,	// (0x0003a215) aid_height_cl_leading

0xb4ec,	// (0x0003a221) aid_height_cl_text_ParamLimits

0xb4ec,	// (0x0003a221) aid_height_cl_text

0xd8cb,	// (0x0003c600) bg_cl_header_pane_ParamLimits

0xd8cb,	// (0x0003c600) bg_cl_header_pane

0xb504,	// (0x0003a239) cl_header_pane_g1_ParamLimits

0xb504,	// (0x0003a239) cl_header_pane_g1

0xb511,	// (0x0003a246) cl_header_pane_t1_ParamLimits

0xb511,	// (0x0003a246) cl_header_pane_t1

0x2ca3,	// (0x000319d8) cl_list_pane

0x27d1,	// (0x00031506) hc_scroll_pane_cp01

0xe421,	// (0x0003d156) bg_cl_header_pane_g1

0x26b7,	// (0x000313ec) bg_cl_header_pane_g2

0xe441,	// (0x0003d176) bg_cl_header_pane_g3

0x26c7,	// (0x000313fc) bg_cl_header_pane_g4

0x26bf,	// (0x000313f4) bg_cl_header_pane_g5

0x296c,	// (0x000316a1) bg_cl_header_pane_g6

0x26df,	// (0x00031414) bg_cl_header_pane_g7

0x26e7,	// (0x0003141c) bg_cl_header_pane_g8

0x26d7,	// (0x0003140c) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x0003e74d) bg_cl_header_pane_g

0xb523,	// (0x0003a258) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb523,	// (0x0003a258) hc_cl_list_double_graphic_heading_pane

0xb534,	// (0x0003a269) hc_cl_list_single_graphic_pane_ParamLimits

0xb534,	// (0x0003a269) hc_cl_list_single_graphic_pane

0xb54d,	// (0x0003a282) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb54d,	// (0x0003a282) hc_cl_list_single_graphic_pane_g1

0xb559,	// (0x0003a28e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb559,	// (0x0003a28e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x0003e760) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x0003e760) hc_cl_list_single_graphic_pane_g

0xb56d,	// (0x0003a2a2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb56d,	// (0x0003a2a2) hc_cl_list_single_graphic_pane_t1

0xb54d,	// (0x0003a282) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb54d,	// (0x0003a282) hc_cl_list_double_graphic_heading_pane_g1

0xb582,	// (0x0003a2b7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb582,	// (0x0003a2b7) hc_cl_list_double_graphic_heading_pane_g2

0xb596,	// (0x0003a2cb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb596,	// (0x0003a2cb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x0003e765) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x0003e765) hc_cl_list_double_graphic_heading_pane_g

0xb5aa,	// (0x0003a2df) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb5aa,	// (0x0003a2df) hc_cl_list_double_graphic_heading_pane_t1

0xb5bf,	// (0x0003a2f4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb5bf,	// (0x0003a2f4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x0003e76c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x0003e76c) hc_cl_list_double_graphic_heading_pane_t

0xb5dc,	// (0x0003a311) vid4_progress_pane_g1

0xb5ec,	// (0x0003a321) vid4_progress_pane_g2

0xb5fc,	// (0x0003a331) vid4_progress_pane_g3

0xb60e,	// (0x0003a343) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x0003e771) vid4_progress_pane_g

0xb626,	// (0x0003a35b) vid4_progress_pane_t1

0xb63c,	// (0x0003a371) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x0003e77c) vid4_progress_pane_t

0xb666,	// (0x0003a39b) wait_bar_pane_cp07

0x1812,	// (0x00030547) blid_firmament_pane_ParamLimits

0x1855,	// (0x0003058a) popup_blid_sat_info2_window_g1

0x1879,	// (0x000305ae) popup_blid_sat_info2_window_t3

0x1887,	// (0x000305bc) popup_blid_sat_info2_window_t4

0x1895,	// (0x000305ca) popup_blid_sat_info2_window_t5

0x18a3,	// (0x000305d8) popup_blid_sat_info2_window_t6

0x18b3,	// (0x000305e8) popup_blid_sat_info2_window_t7

0x18c1,	// (0x000305f6) popup_blid_sat_info2_window_t8

0x18cf,	// (0x00030604) popup_blid_sat_info2_window_t9

0x18dd,	// (0x00030612) popup_blid_sat_info2_window_t10

0x199e,	// (0x000306d3) aid_firma_cardinal_ParamLimits

0x19b2,	// (0x000306e7) blid_firmament_pane_t1_ParamLimits

0x19c9,	// (0x000306fe) blid_firmament_pane_t2_ParamLimits

0x19e0,	// (0x00030715) blid_firmament_pane_t3_ParamLimits

0x19f7,	// (0x0003072c) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x0003e39a) blid_firmament_pane_t_ParamLimits

0x1a0e,	// (0x00030743) blid_sat_info_pane_ParamLimits

0xdf69,	// (0x0003cc9e) main_cam_set_pane_ParamLimits

0x9c79,	// (0x000389ae) aid_size_cell_colour_35_ParamLimits

0x9c93,	// (0x000389c8) aid_size_cell_colour_112_ParamLimits

0x9caa,	// (0x000389df) aid_size_cell_effect_ParamLimits

0xdf69,	// (0x0003cc9e) bg_tb_trans_pane_cp02_ParamLimits

0xf079,	// (0x0003ddae) heading_imed_pane_ParamLimits

0x9cc4,	// (0x000389f9) listscroll_imed_pane_ParamLimits

0x0bf3,	// (0x0002f928) popup_call2_audio_first_window_g5_ParamLimits

0x0bf3,	// (0x0002f928) popup_call2_audio_first_window_g5

0xa2ed,	// (0x00039022) aid_size_touch_image3_arrow_left_ParamLimits

0xa2ed,	// (0x00039022) aid_size_touch_image3_arrow_left

0xa303,	// (0x00039038) aid_size_touch_image3_arrow_right_ParamLimits

0xa303,	// (0x00039038) aid_size_touch_image3_arrow_right

0xb651,	// (0x0003a386) vid4_progress_pane_t3

0x9e45,	// (0x00038b7a) main_hwr_training_symbol_option_pane_ParamLimits

0x9e45,	// (0x00038b7a) main_hwr_training_symbol_option_pane

0x2114,	// (0x00030e49) popup_hwr_training_preview_window_ParamLimits

0x2114,	// (0x00030e49) popup_hwr_training_preview_window

0x9ea6,	// (0x00038bdb) hwr_training_navi_pane_g5_ParamLimits

0x9ea6,	// (0x00038bdb) hwr_training_navi_pane_g5

0x26a5,	// (0x000313da) popup_char_count_window

0xd8cb,	// (0x0003c600) bg_popup_sub_pane_cp20_ParamLimits

0xb13b,	// (0x00039e70) list_vitu2_match_list_pane_ParamLimits

0xb147,	// (0x00039e7c) vitu2_page_scroll_pane_ParamLimits

0xb147,	// (0x00039e7c) vitu2_page_scroll_pane

0x2d38,	// (0x00031a6d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2d38,	// (0x00031a6d) list_single_hwr_training_symbol_option_pane

0x2d4b,	// (0x00031a80) list_single_hwr_training_symbol_option_pane_g1

0x2d53,	// (0x00031a88) list_single_hwr_training_symbol_option_pane_t1

0x2d61,	// (0x00031a96) bg_button_pane_cp023

0x2d6a,	// (0x00031a9f) bg_button_pane_cp024

0x2d9d,	// (0x00031ad2) vitu2_page_scroll_pane_g1

0x2da5,	// (0x00031ada) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x0003e783) vitu2_page_scroll_pane_g

0x2dad,	// (0x00031ae2) vitu2_page_scroll_pane_t1

0x1770,	// (0x000304a5) popup_char_count_window_g1

0x2dbc,	// (0x00031af1) popup_char_count_window_g2

0x2dc5,	// (0x00031afa) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x0003e788) popup_char_count_window_g

0x2dce,	// (0x00031b03) popup_char_count_window_t1

0xd8c1,	// (0x0003c5f6) main_vded2_pane

0x1ec7,	// (0x00030bfc) aid_size_cell_imed_line

0x1ed1,	// (0x00030c06) grid_imed_line_width_pane

0xa807,	// (0x0003953c) vid4_indicators_pane_g4

0x2ddc,	// (0x00031b11) cell_imed_line_width_pane_ParamLimits

0x2ddc,	// (0x00031b11) cell_imed_line_width_pane

0x2df0,	// (0x00031b25) cell_imed_line_width_pane_g1

0x2df9,	// (0x00031b2e) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x0003e78f) cell_imed_line_width_pane_g

0xb679,	// (0x0003a3ae) main_vded2_pane_g1_ParamLimits

0xb679,	// (0x0003a3ae) main_vded2_pane_g1

0xb686,	// (0x0003a3bb) main_vded2_pane_g2_ParamLimits

0xb686,	// (0x0003a3bb) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x0003e794) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x0003e794) main_vded2_pane_g

0xb694,	// (0x0003a3c9) vded2_slider_pane_ParamLimits

0xb694,	// (0x0003a3c9) vded2_slider_pane

0xb6a1,	// (0x0003a3d6) aid_size_touch_vded2_end

0xb6ab,	// (0x0003a3e0) aid_size_touch_vded2_playhead

0x2e01,	// (0x00031b36) aid_size_touch_vded2_start

0x2e09,	// (0x00031b3e) vded2_slider_bg_pane

0x2e12,	// (0x00031b47) vded2_slider_pane_g1

0x2e1b,	// (0x00031b50) vded2_slider_pane_g2

0xb6b3,	// (0x0003a3e8) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x0003e799) vded2_slider_pane_g

0x2e23,	// (0x00031b58) vded2_slider_bg_pane_g1

0x2e2c,	// (0x00031b61) vded2_slider_bg_pane_g2

0x2e35,	// (0x00031b6a) vded2_slider_bg_pane_g3

0x0002,

0xfa6b,	// (0x0003e7a0) vded2_slider_bg_pane_g

0x86c4,	// (0x000373f9) aid_postcard_touch_down_pane_ParamLimits

0x86c4,	// (0x000373f9) aid_postcard_touch_down_pane

0x86d4,	// (0x00037409) aid_postcard_touch_up_pane_ParamLimits

0x86d4,	// (0x00037409) aid_postcard_touch_up_pane

0xd8c1,	// (0x0003c5f6) main_blid2_pane

0x8e4a,	// (0x00037b7f) popup_blid2_search_window

0xd8c1,	// (0x0003c5f6) blid2_gps_pane

0xd8c1,	// (0x0003c5f6) blid2_navig_pane

0xd8c1,	// (0x0003c5f6) blid2_search_pane

0xd8c1,	// (0x0003c5f6) blid2_tripm_pane

0xb6bc,	// (0x0003a3f1) blid2_search_pane_g1_ParamLimits

0xb6bc,	// (0x0003a3f1) blid2_search_pane_g1

0xb6cc,	// (0x0003a401) blid2_search_pane_t1_ParamLimits

0xb6cc,	// (0x0003a401) blid2_search_pane_t1

0xb6de,	// (0x0003a413) aid_size_cell_blid2_gps_ParamLimits

0xb6de,	// (0x0003a413) aid_size_cell_blid2_gps

0xb6ee,	// (0x0003a423) blid2_gps_pane_g1_ParamLimits

0xb6ee,	// (0x0003a423) blid2_gps_pane_g1

0xb6fa,	// (0x0003a42f) grid_blid2_satellite_pane_ParamLimits

0xb6fa,	// (0x0003a42f) grid_blid2_satellite_pane

0xb70a,	// (0x0003a43f) blid2_navig_pane_g1_ParamLimits

0xb70a,	// (0x0003a43f) blid2_navig_pane_g1

0xb716,	// (0x0003a44b) blid2_navig_pane_t1_ParamLimits

0xb716,	// (0x0003a44b) blid2_navig_pane_t1

0xb728,	// (0x0003a45d) blid2_navig_pane_t2_ParamLimits

0xb728,	// (0x0003a45d) blid2_navig_pane_t2

0x0001,

0xfa72,	// (0x0003e7a7) blid2_navig_pane_t_ParamLimits

0xfa72,	// (0x0003e7a7) blid2_navig_pane_t

0xb73a,	// (0x0003a46f) blid2_navig_ring_pane_ParamLimits

0xb73a,	// (0x0003a46f) blid2_navig_ring_pane

0xb74a,	// (0x0003a47f) blid2_speed_pane_ParamLimits

0xb74a,	// (0x0003a47f) blid2_speed_pane

0xb756,	// (0x0003a48b) blid2_tripm_pane_g1_ParamLimits

0xb756,	// (0x0003a48b) blid2_tripm_pane_g1

0xb766,	// (0x0003a49b) blid2_tripm_pane_g2_ParamLimits

0xb766,	// (0x0003a49b) blid2_tripm_pane_g2

0xb772,	// (0x0003a4a7) blid2_tripm_pane_g3_ParamLimits

0xb772,	// (0x0003a4a7) blid2_tripm_pane_g3

0xb77e,	// (0x0003a4b3) blid2_tripm_pane_g4_ParamLimits

0xb77e,	// (0x0003a4b3) blid2_tripm_pane_g4

0xb78a,	// (0x0003a4bf) blid2_tripm_pane_g5_ParamLimits

0xb78a,	// (0x0003a4bf) blid2_tripm_pane_g5

0x0005,

0xfa77,	// (0x0003e7ac) blid2_tripm_pane_g_ParamLimits

0xfa77,	// (0x0003e7ac) blid2_tripm_pane_g

0xb7a6,	// (0x0003a4db) blid2_tripm_pane_t1_ParamLimits

0xb7a6,	// (0x0003a4db) blid2_tripm_pane_t1

0xb7ba,	// (0x0003a4ef) blid2_tripm_pane_t2_ParamLimits

0xb7ba,	// (0x0003a4ef) blid2_tripm_pane_t2

0xb7cc,	// (0x0003a501) blid2_tripm_pane_t3_ParamLimits

0xb7cc,	// (0x0003a501) blid2_tripm_pane_t3

0x0003,

0xfa84,	// (0x0003e7b9) blid2_tripm_pane_t_ParamLimits

0xfa84,	// (0x0003e7b9) blid2_tripm_pane_t

0xb7fe,	// (0x0003a533) cell_blid2_satellite_pane_ParamLimits

0xb7fe,	// (0x0003a533) cell_blid2_satellite_pane

0xb818,	// (0x0003a54d) cell_blid2_satellite_pane_g1

0x2e3e,	// (0x00031b73) cell_blid2_satellite_pane_t1

0xe21c,	// (0x0003cf51) blid2_speed_pane_g1

0x2e4c,	// (0x00031b81) blid2_speed_pane_t1

0x2e5a,	// (0x00031b8f) blid2_speed_pane_t2

0x0001,

0xfa8d,	// (0x0003e7c2) blid2_speed_pane_t

0xe21c,	// (0x0003cf51) blid2_navig_ring_pane_g1

0xb821,	// (0x0003a556) blid2_navig_ring_pane_g2

0xb829,	// (0x0003a55e) blid2_navig_ring_pane_g3

0xb831,	// (0x0003a566) blid2_navig_ring_pane_g4

0xb839,	// (0x0003a56e) blid2_navig_ring_pane_g5

0x0004,

0xfa92,	// (0x0003e7c7) blid2_navig_ring_pane_g

0xd8c1,	// (0x0003c5f6) bg_popup_window_pane_cp011

0x2e68,	// (0x00031b9d) popup_blid2_search_window_g1

0x2e70,	// (0x00031ba5) popup_blid2_search_window_t1

0x2e7e,	// (0x00031bb3) popup_blid2_search_window_t2

0x0001,

0xfa9d,	// (0x0003e7d2) popup_blid2_search_window_t

0xe330,	// (0x0003d065) main_browser_pane_g1

0xe034,	// (0x0003cd69) main_browser_pane_ParamLimits

0xdf69,	// (0x0003cc9e) bg_button_pane_cp011_ParamLimits

0xaa40,	// (0x00039775) cell_vitu2_function_pane_g1_ParamLimits

0xf022,	// (0x0003dd57) bg_popup_sub_pane_cp22_ParamLimits

0x5606,	// (0x0003433b) input_focus_pane_cp08_ParamLimits

0xb2cd,	// (0x0003a002) popup_vitu2_query_button_pane_ParamLimits

0xb2cd,	// (0x0003a002) popup_vitu2_query_button_pane

0x561d,	// (0x00034352) popup_vitu2_query_input_button_pane

0x29c7,	// (0x000316fc) popup_vitu2_query_window_g1_ParamLimits

0x5627,	// (0x0003435c) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x0003e6d3) popup_vitu2_query_window_g_ParamLimits

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp026

0xb841,	// (0x0003a576) popup_vitu2_query_input_button_pane_g1

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp025

0x2e8c,	// (0x00031bc1) popup_vitu2_query_button_pane_t1

0x92c4,	// (0x00037ff9) main_mp3_pane_t6

0x92d4,	// (0x00038009) popup_slider_window_cp01

0xa6e4,	// (0x00039419) cam4_battery_pane

0xa7c4,	// (0x000394f9) cam4_battery_pane_cp02

0xb5d4,	// (0x0003a309) cam4_battery_pane_cp01

0xb5d4,	// (0x0003a309) cam4_battery_pane_cp03

0xe21c,	// (0x0003cf51) cam4_battery_pane_g1

0x1779,	// (0x000304ae) cam4_battery_pane_g2

0x0001,

0xfaa2,	// (0x0003e7d7) cam4_battery_pane_g

0x18eb,	// (0x00030620) popup_blid_sat_info2_window_t11

0xea97,	// (0x0003d7cc) aid_size_touch_mv_arrow_left_ParamLimits

0xeac0,	// (0x0003d7f5) aid_size_touch_mv_arrow_right_ParamLimits

0xeb1e,	// (0x0003d853) navi_pane_g1_ParamLimits

0xeb2a,	// (0x0003d85f) navi_pane_g2_ParamLimits

0xeb58,	// (0x0003d88d) navi_pane_g3_ParamLimits

0xf379,	// (0x0003e0ae) navi_pane_g_ParamLimits

0x837a,	// (0x000370af) navi_pane_mv_t1_ParamLimits

0x9cd0,	// (0x00038a05) grid_imed_effect_pane_ParamLimits

0x6e95,	// (0x00035bca) aid_placing_vt_slider_lsc

0xe27f,	// (0x0003cfb4) aid_placing_vt_slider_prt

0xdf69,	// (0x0003cc9e) bg_tb_trans_pane_cp01_ParamLimits

0x1b6b,	// (0x000308a0) popup_image_details_window_g1_ParamLimits

0x1b7e,	// (0x000308b3) popup_image_details_window_g2_ParamLimits

0x1b93,	// (0x000308c8) popup_image_details_window_g3_ParamLimits

0x1b93,	// (0x000308c8) popup_image_details_window_g3

0xf6a5,	// (0x0003e3da) popup_image_details_window_g_ParamLimits

0x1ba7,	// (0x000308dc) popup_image_details_window_t1_ParamLimits

0x1bb9,	// (0x000308ee) popup_image_details_window_t2_ParamLimits

0x1bd2,	// (0x00030907) popup_image_details_window_t3_ParamLimits

0x1be6,	// (0x0003091b) popup_image_details_window_t4_ParamLimits

0x1c01,	// (0x00030936) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x0003e3e1) popup_image_details_window_t_ParamLimits

0xb4f8,	// (0x0003a22d) cl_header_name_pane_ParamLimits

0xb4f8,	// (0x0003a22d) cl_header_name_pane

0xb849,	// (0x0003a57e) cl_header_name_pane_t1_ParamLimits

0xb849,	// (0x0003a57e) cl_header_name_pane_t1

0xb860,	// (0x0003a595) cl_header_name_pane_t2_ParamLimits

0xb860,	// (0x0003a595) cl_header_name_pane_t2

0xb88a,	// (0x0003a5bf) cl_header_name_pane_t3_ParamLimits

0xb88a,	// (0x0003a5bf) cl_header_name_pane_t3

0x0002,

0xfaa7,	// (0x0003e7dc) cl_header_name_pane_t_ParamLimits

0xfaa7,	// (0x0003e7dc) cl_header_name_pane_t

0xebe7,	// (0x0003d91c) navi_pane_mv_g2_ParamLimits

0x2670,	// (0x000313a5) field_vitu2_entry_pane_g1_ParamLimits

0x267c,	// (0x000313b1) field_vitu2_entry_pane_g2_ParamLimits

0xf030,	// (0x0003dd65) field_vitu2_entry_pane_g3_ParamLimits

0xf030,	// (0x0003dd65) field_vitu2_entry_pane_g3

0xf8a7,	// (0x0003e5dc) field_vitu2_entry_pane_g_ParamLimits

0xa9ce,	// (0x00039703) cell_vitu2_itu_pane_g1_ParamLimits

0xa9e6,	// (0x0003971b) cell_vitu2_itu_pane_g2_ParamLimits

0xa9e6,	// (0x0003971b) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x0003e5e8) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x0003e5e8) cell_vitu2_itu_pane_g

0xdf69,	// (0x0003cc9e) bg_vkb2_func_pane_cp05_ParamLimits

0xdf69,	// (0x0003cc9e) bg_vkb2_func_pane_cp05

0xdf69,	// (0x0003cc9e) bg_vkb2_func_pane_cp03

0xdf69,	// (0x0003cc9e) bg_vkb2_func_pane_cp04

0xdf69,	// (0x0003cc9e) bg_vkb2_func_pane_cp10_ParamLimits

0xdf69,	// (0x0003cc9e) bg_vkb2_func_pane_cp10

0x57de,	// (0x00034513) bg_vkb2_func_pane_cp08

0xb4a2,	// (0x0003a1d7) bg_vkb2_func_pane_cp06

0xb4b0,	// (0x0003a1e5) bg_vkb2_func_pane_cp07

0x2d73,	// (0x00031aa8) bg_vkb2_func_pane_cp11_ParamLimits

0x2d73,	// (0x00031aa8) bg_vkb2_func_pane_cp11

0x2d88,	// (0x00031abd) bg_vkb2_func_pane_cp12_ParamLimits

0x2d88,	// (0x00031abd) bg_vkb2_func_pane_cp12

0xd8c1,	// (0x0003c5f6) bg_vkb2_func_pane_cp09

0x26b7,	// (0x000313ec) bg_vkb2_func_pane_g1

0xe441,	// (0x0003d176) bg_vkb2_func_pane_g2

0x26bf,	// (0x000313f4) bg_vkb2_func_pane_g3

0x26c7,	// (0x000313fc) bg_vkb2_func_pane_g4

0x296c,	// (0x000316a1) bg_vkb2_func_pane_g5

0x26df,	// (0x00031414) bg_vkb2_func_pane_g6

0x26e7,	// (0x0003141c) bg_vkb2_func_pane_g7

0x26d7,	// (0x0003140c) bg_vkb2_func_pane_g8

0xe421,	// (0x0003d156) bg_vkb2_func_pane_g9

0x0008,

0xfaae,	// (0x0003e7e3) bg_vkb2_func_pane_g

0xb798,	// (0x0003a4cd) blid2_tripm_pane_g6_ParamLimits

0xb798,	// (0x0003a4cd) blid2_tripm_pane_g6

0x244b,	// (0x00031180) mp4_progress_pane_g1

0xb7f2,	// (0x0003a527) blid2_tripm_values_pane_ParamLimits

0xb7f2,	// (0x0003a527) blid2_tripm_values_pane

0xb8af,	// (0x0003a5e4) blid2_tripm_values_pane_t1

0xb8bd,	// (0x0003a5f2) blid2_tripm_values_pane_t2

0xb8cb,	// (0x0003a600) blid2_tripm_values_pane_t3

0xb8d9,	// (0x0003a60e) blid2_tripm_values_pane_t4

0xb8e7,	// (0x0003a61c) blid2_tripm_values_pane_t5

0xb8f5,	// (0x0003a62a) blid2_tripm_values_pane_t6

0xb903,	// (0x0003a638) blid2_tripm_values_pane_t7

0xb911,	// (0x0003a646) blid2_tripm_values_pane_t8

0xb91f,	// (0x0003a654) blid2_tripm_values_pane_t9

0x0008,

0xfac1,	// (0x0003e7f6) blid2_tripm_values_pane_t

0x6ed5,	// (0x00035c0a) call_video_pane_t1_ParamLimits

0x6ef6,	// (0x00035c2b) call_video_pane_t2_ParamLimits

0xf222,	// (0x0003df57) call_video_pane_t_ParamLimits

0x53a9,	// (0x000340de) msg_header_pane_g1_ParamLimits

0xedac,	// (0x0003dae1) msg_header_pane_g2_ParamLimits

0xedac,	// (0x0003dae1) msg_header_pane_g2

0x0001,

0xf41c,	// (0x0003e151) msg_header_pane_g_ParamLimits

0xf41c,	// (0x0003e151) msg_header_pane_g

0xe034,	// (0x0003cd69) main_clock2_pane_ParamLimits

0x9a4a,	// (0x0003877f) grid_clock2_toolbar_pane_ParamLimits

0x9a4a,	// (0x0003877f) grid_clock2_toolbar_pane

0x9a4a,	// (0x0003877f) listscroll_clock2_pane_ParamLimits

0x9a4a,	// (0x0003877f) listscroll_clock2_pane

0x9afa,	// (0x0003882f) main_clock2_pane_t3_ParamLimits

0x9afa,	// (0x0003882f) main_clock2_pane_t3

0x9b0c,	// (0x00038841) main_clock2_pane_t4_ParamLimits

0x9b0c,	// (0x00038841) main_clock2_pane_t4

0x2e9a,	// (0x00031bcf) cell_clock2_toolbar_pane

0x2ea2,	// (0x00031bd7) cell_clock2_toolbar_pane_cp01

0x2ea2,	// (0x00031bd7) cell_clock2_toolbar_pane_cp02

0x2eaa,	// (0x00031bdf) cell_clock2_toolbar_pane_cp03

0x2eb2,	// (0x00031be7) list_clock2_pane

0xea0d,	// (0x0003d742) scroll_pane_cp10

0x2eba,	// (0x00031bef) list_single_clock2_pane_ParamLimits

0x2eba,	// (0x00031bef) list_single_clock2_pane

0xe1e6,	// (0x0003cf1b) list_highlight_pane_cp08

0x2ec7,	// (0x00031bfc) list_single_clock2_pane_t1

0x2ed5,	// (0x00031c0a) list_single_clock2_pane_t2

0x0001,

0xfad4,	// (0x0003e809) list_single_clock2_pane_t

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp10

0x2ee3,	// (0x00031c18) cell_clock2_toolbar_pane_g1

0x8626,	// (0x0003735b) aid_main_viewer_pane_g1_ParamLimits

0x8626,	// (0x0003735b) aid_main_viewer_pane_g1

0x8632,	// (0x00037367) aid_main_viewer_pane_g2_ParamLimits

0x8632,	// (0x00037367) aid_main_viewer_pane_g2

0x863e,	// (0x00037373) aid_main_viewer_pane_g3_ParamLimits

0x863e,	// (0x00037373) aid_main_viewer_pane_g3

0x864f,	// (0x00037384) aid_main_viewer_pane_g4_ParamLimits

0x864f,	// (0x00037384) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x0003e162) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x0003e162) aid_main_viewer_pane_g

0x8e16,	// (0x00037b4b) main_calc_pane_ParamLimits

0x8e23,	// (0x00037b58) main_dialer2_pane_ParamLimits

0xd8c1,	// (0x0003c5f6) main_cam6_pane

0xd8c1,	// (0x0003c5f6) main_vid6_pane

0x9a56,	// (0x0003878b) listscroll_gen_pane_cp06_ParamLimits

0x9a56,	// (0x0003878b) listscroll_gen_pane_cp06

0x9b1e,	// (0x00038853) main_clock2_pane_t5_ParamLimits

0x9b1e,	// (0x00038853) main_clock2_pane_t5

0x9b6b,	// (0x000388a0) aid_call2_pane_cp10_ParamLimits

0x9b7d,	// (0x000388b2) aid_call_pane_cp10_ParamLimits

0xea8b,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xea8b,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9b8f,	// (0x000388c4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9b8f,	// (0x000388c4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xea8b,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x0003e496) popup_clock_analogue_window_cp10_g_ParamLimits

0x9ba5,	// (0x000388da) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa29a,	// (0x00038fcf) cell_dialer2_keypad_pane_g2_ParamLimits

0xa29a,	// (0x00038fcf) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x0003e57b) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x0003e57b) cell_dialer2_keypad_pane_g

0xa2b6,	// (0x00038feb) cell_dialer2_keypad_pane_t1

0xad12,	// (0x00039a47) main_cset_text2_pane_ParamLimits

0xad12,	// (0x00039a47) main_cset_text2_pane

0x2bb3,	// (0x000318e8) area_vitu2_query_pane_g1_ParamLimits

0x5709,	// (0x0003443e) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x0003e726) area_vitu2_query_pane_g_ParamLimits

0x57ba,	// (0x000344ef) area_vitu2_query_pane_t7_ParamLimits

0x57ba,	// (0x000344ef) area_vitu2_query_pane_t7

0xb4a2,	// (0x0003a1d7) bg_button_pane_cp018_ParamLimits

0xb4b0,	// (0x0003a1e5) bg_button_pane_cp021_ParamLimits

0x57de,	// (0x00034513) bg_button_pane_cp022_ParamLimits

0x57de,	// (0x00034513) bg_vkb2_func_pane_cp08_ParamLimits

0xb4a2,	// (0x0003a1d7) bg_vkb2_func_pane_cp06_ParamLimits

0xb4b0,	// (0x0003a1e5) bg_vkb2_func_pane_cp07_ParamLimits

0x57ef,	// (0x00034524) input_focus_pane_cp09_ParamLimits

0xb92d,	// (0x0003a662) cam6_autofocus_pane_ParamLimits

0xb92d,	// (0x0003a662) cam6_autofocus_pane

0xb94f,	// (0x0003a684) cam6_image_uncrop_pane_ParamLimits

0xb94f,	// (0x0003a684) cam6_image_uncrop_pane

0xb97c,	// (0x0003a6b1) cam6_indi_pane_ParamLimits

0xb97c,	// (0x0003a6b1) cam6_indi_pane

0xb996,	// (0x0003a6cb) cam6_mode_pane_ParamLimits

0xb996,	// (0x0003a6cb) cam6_mode_pane

0xb9aa,	// (0x0003a6df) cam6_timer_pane_ParamLimits

0xb9aa,	// (0x0003a6df) cam6_timer_pane

0xb9b6,	// (0x0003a6eb) cam6_zoom_pane_ParamLimits

0xb9b6,	// (0x0003a6eb) cam6_zoom_pane

0xb9ce,	// (0x0003a703) cam6_mode_pane_g1_ParamLimits

0xb9ce,	// (0x0003a703) cam6_mode_pane_g1

0xb9da,	// (0x0003a70f) cam6_mode_pane_g2_ParamLimits

0xb9da,	// (0x0003a70f) cam6_mode_pane_g2

0xb9e6,	// (0x0003a71b) cam6_mode_pane_g3_ParamLimits

0xb9e6,	// (0x0003a71b) cam6_mode_pane_g3

0xb9f2,	// (0x0003a727) cam6_mode_pane_g4_ParamLimits

0xb9f2,	// (0x0003a727) cam6_mode_pane_g4

0x0003,

0xfad9,	// (0x0003e80e) cam6_mode_pane_g_ParamLimits

0xfad9,	// (0x0003e80e) cam6_mode_pane_g

0x2ef9,	// (0x00031c2e) bg_tb_trans_pane_cp08_ParamLimits

0x2ef9,	// (0x00031c2e) bg_tb_trans_pane_cp08

0x2f07,	// (0x00031c3c) cam6_battery_pane_ParamLimits

0x2f07,	// (0x00031c3c) cam6_battery_pane

0x2f1d,	// (0x00031c52) cam6_indi_pane_g1_ParamLimits

0x2f1d,	// (0x00031c52) cam6_indi_pane_g1

0x2f2f,	// (0x00031c64) cam6_indi_pane_g2_ParamLimits

0x2f2f,	// (0x00031c64) cam6_indi_pane_g2

0x2f41,	// (0x00031c76) cam6_indi_pane_g3_ParamLimits

0x2f41,	// (0x00031c76) cam6_indi_pane_g3

0x0002,

0xfae2,	// (0x0003e817) cam6_indi_pane_g_ParamLimits

0xfae2,	// (0x0003e817) cam6_indi_pane_g

0x2f53,	// (0x00031c88) cam6_indi_pane_t1_ParamLimits

0x2f53,	// (0x00031c88) cam6_indi_pane_t1

0xa83c,	// (0x00039571) cam6_autofocus_pane_g1

0xa844,	// (0x00039579) cam6_autofocus_pane_g2

0xa84c,	// (0x00039581) cam6_autofocus_pane_g3

0xa854,	// (0x00039589) cam6_autofocus_pane_g4

0x0003,

0xfae9,	// (0x0003e81e) cam6_autofocus_pane_g

0x2f79,	// (0x00031cae) cam6_timer_pane_g1

0x2f81,	// (0x00031cb6) cam6_timer_pane_t1

0x2f8f,	// (0x00031cc4) cam6_zoom_cont_pane

0x2f97,	// (0x00031ccc) cam6_zoom_pane_g1

0x2f9f,	// (0x00031cd4) cam6_zoom_pane_g2

0xb9fe,	// (0x0003a733) cam6_zoom_pane_g3

0x0002,

0xfaf2,	// (0x0003e827) cam6_zoom_pane_g

0xe21c,	// (0x0003cf51) cam6_battery_pane_g1

0xe21c,	// (0x0003cf51) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x0003e112) cam6_battery_pane_g

0x2fa7,	// (0x00031cdc) cam6_zoom_cont_pane_g1

0x2fb0,	// (0x00031ce5) cam6_zoom_cont_pane_g2

0x2fb9,	// (0x00031cee) cam6_zoom_cont_pane_g3

0x0002,

0xfaf9,	// (0x0003e82e) cam6_zoom_cont_pane_g

0xba1b,	// (0x0003a750) cam6_mode_pane_cp_ParamLimits

0xba1b,	// (0x0003a750) cam6_mode_pane_cp

0xb9b6,	// (0x0003a6eb) cam6_zoom_pane_cp_ParamLimits

0xb9b6,	// (0x0003a6eb) cam6_zoom_pane_cp

0xba2f,	// (0x0003a764) vid6_image_uncrop_cif_pane_ParamLimits

0xba2f,	// (0x0003a764) vid6_image_uncrop_cif_pane

0xba5b,	// (0x0003a790) vid6_image_uncrop_nhd_pane_ParamLimits

0xba5b,	// (0x0003a790) vid6_image_uncrop_nhd_pane

0xb94f,	// (0x0003a684) vid6_image_uncrop_vga_pane_ParamLimits

0xb94f,	// (0x0003a684) vid6_image_uncrop_vga_pane

0xba78,	// (0x0003a7ad) vid6_image_uncrop_wvga_pane_ParamLimits

0xba78,	// (0x0003a7ad) vid6_image_uncrop_wvga_pane

0xba95,	// (0x0003a7ca) vid6_indi_pane_ParamLimits

0xba95,	// (0x0003a7ca) vid6_indi_pane

0x2ef9,	// (0x00031c2e) bg_tb_trans_pane_cp09_ParamLimits

0x2ef9,	// (0x00031c2e) bg_tb_trans_pane_cp09

0x2fd1,	// (0x00031d06) cam6_battery_pane_cp_ParamLimits

0x2fd1,	// (0x00031d06) cam6_battery_pane_cp

0x2fdd,	// (0x00031d12) vid6_indi_pane_g1_ParamLimits

0x2fdd,	// (0x00031d12) vid6_indi_pane_g1

0x2fef,	// (0x00031d24) vid6_indi_pane_g2_ParamLimits

0x2fef,	// (0x00031d24) vid6_indi_pane_g2

0x3001,	// (0x00031d36) vid6_indi_pane_g3_ParamLimits

0x3001,	// (0x00031d36) vid6_indi_pane_g3

0x3016,	// (0x00031d4b) vid6_indi_pane_g4_ParamLimits

0x3016,	// (0x00031d4b) vid6_indi_pane_g4

0x302b,	// (0x00031d60) vid6_indi_pane_g5_ParamLimits

0x302b,	// (0x00031d60) vid6_indi_pane_g5

0x0004,

0xfb00,	// (0x0003e835) vid6_indi_pane_g_ParamLimits

0xfb00,	// (0x0003e835) vid6_indi_pane_g

0x3045,	// (0x00031d7a) vid6_indi_pane_t1_ParamLimits

0x3045,	// (0x00031d7a) vid6_indi_pane_t1

0x305b,	// (0x00031d90) vid6_indi_pane_t2_ParamLimits

0x305b,	// (0x00031d90) vid6_indi_pane_t2

0x3083,	// (0x00031db8) vid6_indi_pane_t3_ParamLimits

0x3083,	// (0x00031db8) vid6_indi_pane_t3

0x30ab,	// (0x00031de0) vid6_indi_pane_t4_ParamLimits

0x30ab,	// (0x00031de0) vid6_indi_pane_t4

0x0003,

0xfb0b,	// (0x0003e840) vid6_indi_pane_t_ParamLimits

0xfb0b,	// (0x0003e840) vid6_indi_pane_t

0x30cf,	// (0x00031e04) wait_bar_pane_cp08

0xbaba,	// (0x0003a7ef) main_cset_text2_pane_t1_ParamLimits

0xbaba,	// (0x0003a7ef) main_cset_text2_pane_t1

0xba06,	// (0x0003a73b) listscroll_gen_pane_cp06_t1_ParamLimits

0xba06,	// (0x0003a73b) listscroll_gen_pane_cp06_t1

0xd8c1,	// (0x0003c5f6) main_cam6_set_pane

0xdfc2,	// (0x0003ccf7) bg_tb_trans_pane_cp06_ParamLimits

0xa6ec,	// (0x00039421) cam4_indicators_pane_g1_ParamLimits

0xa6fd,	// (0x00039432) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x0003e5b8) cam4_indicators_pane_g_ParamLimits

0xa71b,	// (0x00039450) cam4_indicators_pane_t1_ParamLimits

0xdf69,	// (0x0003cc9e) bg_tb_trans_pane_cp07_ParamLimits

0xa7ce,	// (0x00039503) vid4_indicators_pane_g1_ParamLimits

0xa7e2,	// (0x00039517) vid4_indicators_pane_g2_ParamLimits

0xa7f6,	// (0x0003952b) vid4_indicators_pane_g3_ParamLimits

0xa807,	// (0x0003953c) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x0003e5ca) vid4_indicators_pane_g_ParamLimits

0xa825,	// (0x0003955a) vid4_indicators_pane_t1_ParamLimits

0xb5dc,	// (0x0003a311) vid4_progress_pane_g1_ParamLimits

0xb5ec,	// (0x0003a321) vid4_progress_pane_g2_ParamLimits

0xb5fc,	// (0x0003a331) vid4_progress_pane_g3_ParamLimits

0xb60e,	// (0x0003a343) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x0003e771) vid4_progress_pane_g_ParamLimits

0xb626,	// (0x0003a35b) vid4_progress_pane_t1_ParamLimits

0xb63c,	// (0x0003a371) vid4_progress_pane_t2_ParamLimits

0xb651,	// (0x0003a386) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x0003e77c) vid4_progress_pane_t_ParamLimits

0xb666,	// (0x0003a39b) wait_bar_pane_cp07_ParamLimits

0xbaed,	// (0x0003a822) main_cam6_set_pane_g2_ParamLimits

0xbaed,	// (0x0003a822) main_cam6_set_pane_g2

0xbaf9,	// (0x0003a82e) main_cset6_listscroll_pane_ParamLimits

0xbaf9,	// (0x0003a82e) main_cset6_listscroll_pane

0xbb24,	// (0x0003a859) main_cset6_slider_pane_ParamLimits

0xbb24,	// (0x0003a859) main_cset6_slider_pane

0xbb30,	// (0x0003a865) main_cset6_text2_pane_ParamLimits

0xbb30,	// (0x0003a865) main_cset6_text2_pane

0x30de,	// (0x00031e13) main_cset6_text_pane

0x30e6,	// (0x00031e1b) main_cset_list_pane_copy1_ParamLimits

0x30e6,	// (0x00031e1b) main_cset_list_pane_copy1

0x30f6,	// (0x00031e2b) scroll_pane_cp028_copy1

0xbb43,	// (0x0003a878) cset_list_set_pane_copy1

0xbb56,	// (0x0003a88b) aid_position_infowindow_above_copy1

0xbb5e,	// (0x0003a893) aid_position_infowindow_below_copy1

0x582d,	// (0x00034562) cset_list_set_pane_g1_copy1

0x55d0,	// (0x00034305) cset_list_set_pane_g3_copy1_ParamLimits

0x55d0,	// (0x00034305) cset_list_set_pane_g3_copy1

0x55df,	// (0x00034314) cset_list_set_pane_t1_copy1_ParamLimits

0x55df,	// (0x00034314) cset_list_set_pane_t1_copy1

0xdf69,	// (0x0003cc9e) list_highlight_pane_cp021_copy1_ParamLimits

0xdf69,	// (0x0003cc9e) list_highlight_pane_cp021_copy1

0x30ff,	// (0x00031e34) cset6_slider_pane_ParamLimits

0x30ff,	// (0x00031e34) cset6_slider_pane

0x312b,	// (0x00031e60) main_cset6_slider_pane_g1_ParamLimits

0x312b,	// (0x00031e60) main_cset6_slider_pane_g1

0xbb66,	// (0x0003a89b) main_cset6_slider_pane_g2_ParamLimits

0xbb66,	// (0x0003a89b) main_cset6_slider_pane_g2

0x3153,	// (0x00031e88) main_cset6_slider_pane_g3_ParamLimits

0x3153,	// (0x00031e88) main_cset6_slider_pane_g3

0xbb8e,	// (0x0003a8c3) main_cset6_slider_pane_g4_ParamLimits

0xbb8e,	// (0x0003a8c3) main_cset6_slider_pane_g4

0xbb9a,	// (0x0003a8cf) main_cset6_slider_pane_g5_ParamLimits

0xbb9a,	// (0x0003a8cf) main_cset6_slider_pane_g5

0x27e6,	// (0x0003151b) main_cset6_slider_pane_g7_ParamLimits

0x27e6,	// (0x0003151b) main_cset6_slider_pane_g7

0x27f2,	// (0x00031527) main_cset6_slider_pane_g8_ParamLimits

0x27f2,	// (0x00031527) main_cset6_slider_pane_g8

0xbba8,	// (0x0003a8dd) main_cset6_slider_pane_g9_ParamLimits

0xbba8,	// (0x0003a8dd) main_cset6_slider_pane_g9

0xbbb4,	// (0x0003a8e9) main_cset6_slider_pane_g10_ParamLimits

0xbbb4,	// (0x0003a8e9) main_cset6_slider_pane_g10

0xbbc0,	// (0x0003a8f5) main_cset6_slider_pane_g11_ParamLimits

0xbbc0,	// (0x0003a8f5) main_cset6_slider_pane_g11

0xbbcc,	// (0x0003a901) main_cset6_slider_pane_g12_ParamLimits

0xbbcc,	// (0x0003a901) main_cset6_slider_pane_g12

0xbbd8,	// (0x0003a90d) main_cset6_slider_pane_g13_ParamLimits

0xbbd8,	// (0x0003a90d) main_cset6_slider_pane_g13

0xbbe4,	// (0x0003a919) main_cset6_slider_pane_g14_ParamLimits

0xbbe4,	// (0x0003a919) main_cset6_slider_pane_g14

0xbbf0,	// (0x0003a925) main_cset6_slider_pane_g15_ParamLimits

0xbbf0,	// (0x0003a925) main_cset6_slider_pane_g15

0xbc08,	// (0x0003a93d) main_cset6_slider_pane_g16_ParamLimits

0xbc08,	// (0x0003a93d) main_cset6_slider_pane_g16

0xbc16,	// (0x0003a94b) main_cset6_slider_pane_g17_ParamLimits

0xbc16,	// (0x0003a94b) main_cset6_slider_pane_g17

0x0011,

0xfb14,	// (0x0003e849) main_cset6_slider_pane_g_ParamLimits

0xfb14,	// (0x0003e849) main_cset6_slider_pane_g

0x315f,	// (0x00031e94) main_cset6_slider_pane_t1_ParamLimits

0x315f,	// (0x00031e94) main_cset6_slider_pane_t1

0xbc3c,	// (0x0003a971) main_cset6_slider_pane_t2_ParamLimits

0xbc3c,	// (0x0003a971) main_cset6_slider_pane_t2

0xbc67,	// (0x0003a99c) main_cset6_slider_pane_t3_ParamLimits

0xbc67,	// (0x0003a99c) main_cset6_slider_pane_t3

0xbc92,	// (0x0003a9c7) main_cset6_slider_pane_t4_ParamLimits

0xbc92,	// (0x0003a9c7) main_cset6_slider_pane_t4

0xbcbd,	// (0x0003a9f2) main_cset6_slider_pane_t5_ParamLimits

0xbcbd,	// (0x0003a9f2) main_cset6_slider_pane_t5

0x31a0,	// (0x00031ed5) main_cset6_slider_pane_t7_ParamLimits

0x31a0,	// (0x00031ed5) main_cset6_slider_pane_t7

0xbcea,	// (0x0003aa1f) main_cset6_slider_pane_t8_ParamLimits

0xbcea,	// (0x0003aa1f) main_cset6_slider_pane_t8

0xbd0e,	// (0x0003aa43) main_cset6_slider_pane_t9_ParamLimits

0xbd0e,	// (0x0003aa43) main_cset6_slider_pane_t9

0xbd32,	// (0x0003aa67) main_cset6_slider_pane_t10_ParamLimits

0xbd32,	// (0x0003aa67) main_cset6_slider_pane_t10

0xbd56,	// (0x0003aa8b) main_cset6_slider_pane_t11_ParamLimits

0xbd56,	// (0x0003aa8b) main_cset6_slider_pane_t11

0x31d6,	// (0x00031f0b) main_cset6_slider_pane_t14_ParamLimits

0x31d6,	// (0x00031f0b) main_cset6_slider_pane_t14

0x320f,	// (0x00031f44) main_cset6_slider_pane_t15_ParamLimits

0x320f,	// (0x00031f44) main_cset6_slider_pane_t15

0x000b,

0xfb39,	// (0x0003e86e) main_cset6_slider_pane_t_ParamLimits

0xfb39,	// (0x0003e86e) main_cset6_slider_pane_t

0x3248,	// (0x00031f7d) cset_slider_pane_g1_copy1

0x3251,	// (0x00031f86) cset_slider_pane_g2_copy1

0x325a,	// (0x00031f8f) cset_slider_pane_g3_copy1

0xd8c1,	// (0x0003c5f6) bg_popup_sub_pane_cp011_copy1

0x3263,	// (0x00031f98) main_cset_text_pane_g1_copy1

0x29db,	// (0x00031710) main_cset_text_pane_t1_copy1

0x29e9,	// (0x0003171e) main_cset_text_pane_t2_copy1

0x29f7,	// (0x0003172c) main_cset_text_pane_t3_copy1

0x2a05,	// (0x0003173a) main_cset_text_pane_t4_copy1

0x2a13,	// (0x00031748) main_cset_text_pane_t5_copy1

0x326b,	// (0x00031fa0) main_cset_text_pane_t6_copy1

0x3279,	// (0x00031fae) main_cset_text_pane_t7_copy1

0xbd7a,	// (0x0003aaaf) main_cset_text2_pane_t1_copy1

0xdf69,	// (0x0003cc9e) main_ncimui_pane

0x8e80,	// (0x00037bb5) popup_query_ncimui_window_ParamLimits

0x8e80,	// (0x00037bb5) popup_query_ncimui_window

0x5473,	// (0x000341a8) field_cale_ev2_pane_g4_ParamLimits

0x5473,	// (0x000341a8) field_cale_ev2_pane_g4

0x9f7a,	// (0x00038caf) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9f7a,	// (0x00038caf) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x0003e552) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x0003e552) cell_video_dialer_keypad_pane_g

0x9f92,	// (0x00038cc7) cell_video_dialer_keypad_pane_t1

0xd8c1,	// (0x0003c5f6) bg_popup_window_pane_cp012

0x1446,	// (0x0003017b) heading_pane_cp06

0x32a5,	// (0x00031fda) ncim_query_content_pane

0xd8c1,	// (0x0003c5f6) bg_popup_heading_pane_cp01

0x32ad,	// (0x00031fe2) ncim_heading_pane_t1

0x32bb,	// (0x00031ff0) ncim_indicator_popup_pane

0x32cd,	// (0x00032002) ncim_query_button_pane

0x32e1,	// (0x00032016) ncim_query_content_pane_t1

0x32f3,	// (0x00032028) ncim_query_content_pane_t2

0x0005,

0xfb7d,	// (0x0003e8b2) ncim_query_content_pane_t

0x332d,	// (0x00032062) ncim_query_list_pane

0x333f,	// (0x00032074) ncim_query_popup_pane

0x32bb,	// (0x00031ff0) ncim_indicator_popup_pane_ParamLimits

0xbecd,	// (0x0003ac02) ncim_query_content_pane_g1_ParamLimits

0xbecd,	// (0x0003ac02) ncim_query_content_pane_g1

0x32e1,	// (0x00032016) ncim_query_content_pane_t1_ParamLimits

0x32f3,	// (0x00032028) ncim_query_content_pane_t2_ParamLimits

0xbed9,	// (0x0003ac0e) ncim_query_content_pane_t3_ParamLimits

0xbed9,	// (0x0003ac0e) ncim_query_content_pane_t3

0xbef6,	// (0x0003ac2b) ncim_query_content_pane_t4_ParamLimits

0xbef6,	// (0x0003ac2b) ncim_query_content_pane_t4

0xbf13,	// (0x0003ac48) ncim_query_content_pane_t5_ParamLimits

0xbf13,	// (0x0003ac48) ncim_query_content_pane_t5

0x3305,	// (0x0003203a) ncim_query_content_pane_t6_ParamLimits

0x3305,	// (0x0003203a) ncim_query_content_pane_t6

0xfb7d,	// (0x0003e8b2) ncim_query_content_pane_t_ParamLimits

0x332d,	// (0x00032062) ncim_query_list_pane_ParamLimits

0x333f,	// (0x00032074) ncim_query_popup_pane_ParamLimits

0x3353,	// (0x00032088) wait_bar_pane_cp04

0xd8c1,	// (0x0003c5f6) input_focus_pane_cp011

0x335b,	// (0x00032090) ncim_query_popup_pane_t1

0x3369,	// (0x0003209e) ncim_list_query_list_pane_ParamLimits

0x3369,	// (0x0003209e) ncim_list_query_list_pane

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp027

0x3376,	// (0x000320ab) ncim_query_button_pane_g1

0xd8c1,	// (0x0003c5f6) list_highlight_pane_cp012

0x3380,	// (0x000320b5) ncim_list_query_list_pane_g1

0x3388,	// (0x000320bd) ncim_list_query_list_pane_t1

0xa70c,	// (0x00039441) cam4_indicators_pane_g3_ParamLimits

0xa70c,	// (0x00039441) cam4_indicators_pane_g3

0xa813,	// (0x00039548) vid4_indicators_pane_g5_ParamLimits

0xa813,	// (0x00039548) vid4_indicators_pane_g5

0xb61a,	// (0x0003a34f) vid4_progress_pane_g5_ParamLimits

0xb61a,	// (0x0003a34f) vid4_progress_pane_g5

0xbdb9,	// (0x0003aaee) main_ncimui_pane_g1

0xbe21,	// (0x0003ab56) ncimui_group_query_pane_ParamLimits

0xbe21,	// (0x0003ab56) ncimui_group_query_pane

0xbe69,	// (0x0003ab9e) ncimui_list_pane_ParamLimits

0xbe69,	// (0x0003ab9e) ncimui_list_pane

0xbe90,	// (0x0003abc5) ncimui_text_pane_ParamLimits

0xbe90,	// (0x0003abc5) ncimui_text_pane

0xbf30,	// (0x0003ac65) ncimui_text_pane_t1_ParamLimits

0xbf30,	// (0x0003ac65) ncimui_text_pane_t1

0x3396,	// (0x000320cb) ncimui_list_single_graphic_pane_ParamLimits

0x3396,	// (0x000320cb) ncimui_list_single_graphic_pane

0xbf4f,	// (0x0003ac84) ncimui_query_pane_ParamLimits

0xbf4f,	// (0x0003ac84) ncimui_query_pane

0xd8c1,	// (0x0003c5f6) list_highlight_pane_cp013

0x33a6,	// (0x000320db) ncim_list_query_list_pane_t1_copy1

0x3380,	// (0x000320b5) ncim_list_single_graphic_pane_g1

0xbf62,	// (0x0003ac97) ncim_query_button_pane_cp01

0xbf6e,	// (0x0003aca3) ncim_query_entry_pane_ParamLimits

0xbf6e,	// (0x0003aca3) ncim_query_entry_pane

0xbf81,	// (0x0003acb6) ncimui_query_pane_g1

0xbf8d,	// (0x0003acc2) ncimui_query_pane_t1_ParamLimits

0xbf8d,	// (0x0003acc2) ncimui_query_pane_t1

0xdf69,	// (0x0003cc9e) input_focus_pane_cp012

0x33b4,	// (0x000320e9) ncim_query_entry_pane_t1

0xe034,	// (0x0003cd69) main_im_pane_ParamLimits

0xdf69,	// (0x0003cc9e) main_mobtv_pane_ParamLimits

0xdf69,	// (0x0003cc9e) main_mobtv_pane

0xbc24,	// (0x0003a959) main_cset6_slider_pane_g18_ParamLimits

0xbc24,	// (0x0003a959) main_cset6_slider_pane_g18

0xbc30,	// (0x0003a965) main_cset6_slider_pane_g19_ParamLimits

0xbc30,	// (0x0003a965) main_cset6_slider_pane_g19

0xf030,	// (0x0003dd65) bg_main_mobtv_pane_ParamLimits

0xf030,	// (0x0003dd65) bg_main_mobtv_pane

0xbfa6,	// (0x0003acdb) main_mobtv_info_pane

0xbfb1,	// (0x0003ace6) main_mobtv_loading_pane_ParamLimits

0xbfb1,	// (0x0003ace6) main_mobtv_loading_pane

0x33c6,	// (0x000320fb) main_mobtv_pg_channel_list_pane

0x33d0,	// (0x00032105) main_mobtv_pg_hdr_pane

0xbfbe,	// (0x0003acf3) main_mobtv_programe_curr_pane_ParamLimits

0xbfbe,	// (0x0003acf3) main_mobtv_programe_curr_pane

0xbfcb,	// (0x0003ad00) main_mobtv_programe_next_pane_ParamLimits

0xbfcb,	// (0x0003ad00) main_mobtv_programe_next_pane

0x33d9,	// (0x0003210e) popup_mobtv_noti_window

0xe21c,	// (0x0003cf51) main_tv_pg_hdr_pane_g1

0x33e1,	// (0x00032116) main_tv_pg_hdr_pane_g2

0x33e9,	// (0x0003211e) main_tv_pg_hdr_pane_g3

0x33f1,	// (0x00032126) main_tv_pg_hdr_pane_g4

0x33f9,	// (0x0003212e) main_tv_pg_hdr_pane_g5

0x3403,	// (0x00032138) main_tv_pg_hdr_pane_g6

0x340d,	// (0x00032142) main_tv_pg_hdr_pane_g7

0x3417,	// (0x0003214c) main_tv_pg_hdr_pane_g8

0x3421,	// (0x00032156) main_tv_pg_hdr_pane_g9

0x342b,	// (0x00032160) main_tv_pg_hdr_pane_g10

0x3435,	// (0x0003216a) main_tv_pg_hdr_pane_g11

0x000a,

0xfb8a,	// (0x0003e8bf) main_tv_pg_hdr_pane_g

0x343f,	// (0x00032174) main_tv_pg_hdr_pane_t1

0x344d,	// (0x00032182) main_tv_pg_hdr_pane_t2

0x345b,	// (0x00032190) main_tv_pg_hdr_pane_t3

0x346b,	// (0x000321a0) main_tv_pg_hdr_pane_t4

0x347b,	// (0x000321b0) main_tv_pg_hdr_pane_t5

0x0004,

0xfba1,	// (0x0003e8d6) main_tv_pg_hdr_pane_t

0x348b,	// (0x000321c0) single_mobtv_pg_channel_pane_ParamLimits

0x348b,	// (0x000321c0) single_mobtv_pg_channel_pane

0x349d,	// (0x000321d2) single_mobtv_pg_channel_table_pane

0x34a6,	// (0x000321db) single_mobtv_pg_channel_thumb_pane

0x34af,	// (0x000321e4) single_tv_pg_channel_pane_g1

0x34b8,	// (0x000321ed) single_tv_pg_channel_pane_g2

0x0001,

0xfbac,	// (0x0003e8e1) single_tv_pg_channel_pane_g

0xdfc2,	// (0x0003ccf7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xdfc2,	// (0x0003ccf7) bg_single_mobtv_pg_channel_thumb_pane

0x34c1,	// (0x000321f6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x34c1,	// (0x000321f6) single_mobtv_pg_channel_thumb_pane_g1

0x34cf,	// (0x00032204) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x34cf,	// (0x00032204) single_mobtv_pg_channel_thumb_pane_g2

0x34db,	// (0x00032210) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x34db,	// (0x00032210) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbb1,	// (0x0003e8e6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbb1,	// (0x0003e8e6) single_mobtv_pg_channel_thumb_pane_g

0x34e7,	// (0x0003221c) single_mobtv_pg_channel_thumb_pane_t1

0x34f5,	// (0x0003222a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb8,	// (0x0003e8ed) single_mobtv_pg_channel_thumb_pane_t

0xe21c,	// (0x0003cf51) bg_single_mobtv_pg_channel_table_pane_g1

0xe21c,	// (0x0003cf51) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x0003e112) bg_single_mobtv_pg_channel_table_pane_g

0x3503,	// (0x00032238) single_mobtv_pg_channel_table_pane_t1

0x3511,	// (0x00032246) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbbd,	// (0x0003e8f2) single_mobtv_pg_channel_table_pane_t

0xbfe0,	// (0x0003ad15) main_mobtv_info_pane_g1_ParamLimits

0xbfe0,	// (0x0003ad15) main_mobtv_info_pane_g1

0xbffc,	// (0x0003ad31) main_mobtv_info_pane_t1_ParamLimits

0xbffc,	// (0x0003ad31) main_mobtv_info_pane_t1

0xc074,	// (0x0003ada9) main_mobtv_info_pane_t2_ParamLimits

0xc074,	// (0x0003ada9) main_mobtv_info_pane_t2

0x0002,

0xfbc7,	// (0x0003e8fc) main_mobtv_info_pane_t_ParamLimits

0xfbc7,	// (0x0003e8fc) main_mobtv_info_pane_t

0xc103,	// (0x0003ae38) wait_bar_pane_cp05

0xc115,	// (0x0003ae4a) main_mobtv_loading_pane_g1_ParamLimits

0xc115,	// (0x0003ae4a) main_mobtv_loading_pane_g1

0xc123,	// (0x0003ae58) main_mobtv_loading_pane_g2_ParamLimits

0xc123,	// (0x0003ae58) main_mobtv_loading_pane_g2

0xc12f,	// (0x0003ae64) main_mobtv_loading_pane_g3_ParamLimits

0xc12f,	// (0x0003ae64) main_mobtv_loading_pane_g3

0x0002,

0xfbce,	// (0x0003e903) main_mobtv_loading_pane_g_ParamLimits

0xfbce,	// (0x0003e903) main_mobtv_loading_pane_g

0x351f,	// (0x00032254) main_mobtv_loading_pane_t1_ParamLimits

0x351f,	// (0x00032254) main_mobtv_loading_pane_t1

0x3537,	// (0x0003226c) main_mobtv_loading_pane_t2_ParamLimits

0x3537,	// (0x0003226c) main_mobtv_loading_pane_t2

0x0001,

0xfbd5,	// (0x0003e90a) main_mobtv_loading_pane_t_ParamLimits

0xfbd5,	// (0x0003e90a) main_mobtv_loading_pane_t

0xc13d,	// (0x0003ae72) wait_bar_pane_cp06_ParamLimits

0xc13d,	// (0x0003ae72) wait_bar_pane_cp06

0x355b,	// (0x00032290) main_mobtv_programe_curr_pane_t1

0x3569,	// (0x0003229e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbda,	// (0x0003e90f) main_mobtv_programe_curr_pane_t

0x3577,	// (0x000322ac) main_mobtv_programe_next_pane_t1

0x3585,	// (0x000322ba) main_mobtv_programe_next_pane_t2

0x3593,	// (0x000322c8) main_mobtv_programe_next_pane_t3

0x0002,

0xfbdf,	// (0x0003e914) main_mobtv_programe_next_pane_t

0xd8c1,	// (0x0003c5f6) bg_popup_mobtv_noti_window_pane

0x35a1,	// (0x000322d6) popup_mobtv_noti_window_g1

0x35a9,	// (0x000322de) popup_mobtv_noti_window_t1

0x35b7,	// (0x000322ec) popup_mobtv_noti_window_t2

0x0001,

0xfbe6,	// (0x0003e91b) popup_mobtv_noti_window_t

0xe21c,	// (0x0003cf51) bg_popup_mobtv_noti_window_pane_g1

0xd8c1,	// (0x0003c5f6) sc_clock_pane

0xd8c1,	// (0x0003c5f6) main_fs_bigclock_pane

0xb7e0,	// (0x0003a515) blid2_tripm_pane_t4_ParamLimits

0xb7e0,	// (0x0003a515) blid2_tripm_pane_t4

0xc149,	// (0x0003ae7e) sc_clock_pane_g1_ParamLimits

0xc149,	// (0x0003ae7e) sc_clock_pane_g1

0xc157,	// (0x0003ae8c) sc_clock_pane_t1_ParamLimits

0xc157,	// (0x0003ae8c) sc_clock_pane_t1

0xc16a,	// (0x0003ae9f) sc_clock_pane_t2_ParamLimits

0xc16a,	// (0x0003ae9f) sc_clock_pane_t2

0xc17c,	// (0x0003aeb1) sc_clock_pane_t3_ParamLimits

0xc17c,	// (0x0003aeb1) sc_clock_pane_t3

0x0004,

0xfbeb,	// (0x0003e920) sc_clock_pane_t_ParamLimits

0xfbeb,	// (0x0003e920) sc_clock_pane_t

0xca63,	// (0x0003b798) main_fs_bigclock_indicator_pane_ParamLimits

0xca63,	// (0x0003b798) main_fs_bigclock_indicator_pane

0xc1ff,	// (0x0003af34) main_fs_bigclock_pane_g1_ParamLimits

0xc1ff,	// (0x0003af34) main_fs_bigclock_pane_g1

0xca6f,	// (0x0003b7a4) main_fs_bigclock_pane_t1_ParamLimits

0xca6f,	// (0x0003b7a4) main_fs_bigclock_pane_t1

0xca81,	// (0x0003b7b6) main_fs_bigclock_pane_t2_ParamLimits

0xca81,	// (0x0003b7b6) main_fs_bigclock_pane_t2

0xca95,	// (0x0003b7ca) main_fs_bigclock_pane_t3_ParamLimits

0xca95,	// (0x0003b7ca) main_fs_bigclock_pane_t3

0x0002,

0xfd7c,	// (0x0003eab1) main_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x0003eab1) main_fs_bigclock_pane_t

0x4188,	// (0x00032ebd) main_fs_bigclock_indicator_pane_g1

0x32d5,	// (0x0003200a) ncim_query_content_pane_g2_ParamLimits

0x32d5,	// (0x0003200a) ncim_query_content_pane_g2

0x0001,

0xfb78,	// (0x0003e8ad) ncim_query_content_pane_g_ParamLimits

0xfb78,	// (0x0003e8ad) ncim_query_content_pane_g

0xc190,	// (0x0003aec5) sc_clock_pane_t4_ParamLimits

0xc190,	// (0x0003aec5) sc_clock_pane_t4

0xdf69,	// (0x0003cc9e) main_radioblah_pane

0xa5af,	// (0x000392e4) cell_call4_button_pane_t1_copy1_ParamLimits

0xa5af,	// (0x000392e4) cell_call4_button_pane_t1_copy1

0xbdd3,	// (0x0003ab08) main_ncimui_pane_t1_ParamLimits

0xbdd3,	// (0x0003ab08) main_ncimui_pane_t1

0xbded,	// (0x0003ab22) main_ncimui_pane_t2_ParamLimits

0xbded,	// (0x0003ab22) main_ncimui_pane_t2

0x0002,

0xfb71,	// (0x0003e8a6) main_ncimui_pane_t_ParamLimits

0xfb71,	// (0x0003e8a6) main_ncimui_pane_t

0x36fc,	// (0x00032431) main_radioblah_anim_pane_ParamLimits

0x36fc,	// (0x00032431) main_radioblah_anim_pane

0x370d,	// (0x00032442) main_radioblah_info_pane_ParamLimits

0x370d,	// (0x00032442) main_radioblah_info_pane

0x3721,	// (0x00032456) main_radioblah_pane_t1_ParamLimits

0x3721,	// (0x00032456) main_radioblah_pane_t1

0x373d,	// (0x00032472) main_radioblah_pane_t2_ParamLimits

0x373d,	// (0x00032472) main_radioblah_pane_t2

0x0003,

0xfc0c,	// (0x0003e941) main_radioblah_pane_t_ParamLimits

0xfc0c,	// (0x0003e941) main_radioblah_pane_t

0xc255,	// (0x0003af8a) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc255,	// (0x0003af8a) main_radioblah_rocker_ctrl_pane

0x3785,	// (0x000324ba) main_radioblah_info_pane_t1_ParamLimits

0x3785,	// (0x000324ba) main_radioblah_info_pane_t1

0xc29a,	// (0x0003afcf) main_radioblah_info_pane_t2_ParamLimits

0xc29a,	// (0x0003afcf) main_radioblah_info_pane_t2

0x0003,

0xfc15,	// (0x0003e94a) main_radioblah_info_pane_t_ParamLimits

0xfc15,	// (0x0003e94a) main_radioblah_info_pane_t

0xe21c,	// (0x0003cf51) main_radioblah_rocker_ctrl_pane_g1

0xc34a,	// (0x0003b07f) main_radioblah_rocker_ctrl_pane_g2

0xc352,	// (0x0003b087) main_radioblah_rocker_ctrl_pane_g3

0xc35a,	// (0x0003b08f) main_radioblah_rocker_ctrl_pane_g4

0xc362,	// (0x0003b097) main_radioblah_rocker_ctrl_pane_g5

0xc36a,	// (0x0003b09f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc1e,	// (0x0003e953) main_radioblah_rocker_ctrl_pane_g

0xbd7a,	// (0x0003aaaf) main_cset_text2_pane_t1_copy1_ParamLimits

0xa63a,	// (0x0003936f) cam4_image_uncrop_qvga_pane

0xa781,	// (0x000394b6) vid4_image_uncrop_qcif_pane

0xb96e,	// (0x0003a6a3) cam6_image_uncrop_qvga_pane_ParamLimits

0xb96e,	// (0x0003a6a3) cam6_image_uncrop_qvga_pane

0x2fc1,	// (0x00031cf6) vid6_image_uncrop_qcif_pane_ParamLimits

0x2fc1,	// (0x00031cf6) vid6_image_uncrop_qcif_pane

0xd8c1,	// (0x0003c5f6) bg_popup_preview_window_pane_cp03

0x3287,	// (0x00031fbc) list_cset_text2_pane

0x328f,	// (0x00031fc4) main_cset6_text2_pane_g1

0x3297,	// (0x00031fcc) main_cset6_text2_pane_t1

0xc372,	// (0x0003b0a7) list_cset_text2_pane_t1_ParamLimits

0xc372,	// (0x0003b0a7) list_cset_text2_pane_t1

0xdf69,	// (0x0003cc9e) main_radioblah_pane_ParamLimits

0xc0ef,	// (0x0003ae24) main_mobtv_info_pane_t3_ParamLimits

0xc0ef,	// (0x0003ae24) main_mobtv_info_pane_t3

0xc243,	// (0x0003af78) main_radioblah_pane_g1

0xc26e,	// (0x0003afa3) main_radioblah_info_pane_g1

0xc2ef,	// (0x0003b024) main_radioblah_info_pane_t3_ParamLimits

0xc2ef,	// (0x0003b024) main_radioblah_info_pane_t3

0x7ef6,	// (0x00036c2b) highlight_cell_cale_month_pane_ParamLimits

0x7ef6,	// (0x00036c2b) highlight_cell_cale_month_pane

0xd8c1,	// (0x0003c5f6) main_phob_fisheye_pane

0x1d17,	// (0x00030a4c) scroll_pane_cp0031_ParamLimits

0x1d17,	// (0x00030a4c) scroll_pane_cp0031

0x30cf,	// (0x00031e04) wait_bar_pane_cp08_ParamLimits

0xbb43,	// (0x0003a878) cset_list_set_pane_copy1_ParamLimits

0x37bf,	// (0x000324f4) highlight_cell_cale_month_pane_g1

0xc38f,	// (0x0003b0c4) highlight_cell_cale_month_pane_t1

0x2ca3,	// (0x000319d8) list_gen_pane_cp01

0x27d1,	// (0x00031506) scroll_pane_01

0xc39d,	// (0x0003b0d2) list_single_double_fisheye_pane

0x5852,	// (0x00034587) list_double_fisheye_pane_g1_ParamLimits

0x5852,	// (0x00034587) list_double_fisheye_pane_g1

0x585e,	// (0x00034593) list_double_fisheye_pane_g2_ParamLimits

0x585e,	// (0x00034593) list_double_fisheye_pane_g2

0xc3a6,	// (0x0003b0db) list_double_fisheye_pane_g3_ParamLimits

0xc3a6,	// (0x0003b0db) list_double_fisheye_pane_g3

0x0004,

0xfc2b,	// (0x0003e960) list_double_fisheye_pane_g_ParamLimits

0xfc2b,	// (0x0003e960) list_double_fisheye_pane_g

0x588f,	// (0x000345c4) list_double_fisheye_pane_t1_ParamLimits

0x588f,	// (0x000345c4) list_double_fisheye_pane_t1

0x58aa,	// (0x000345df) list_double_fisheye_pane_t2_ParamLimits

0x58aa,	// (0x000345df) list_double_fisheye_pane_t2

0x0001,

0xfc36,	// (0x0003e96b) list_double_fisheye_pane_t_ParamLimits

0xfc36,	// (0x0003e96b) list_double_fisheye_pane_t

0xd8c1,	// (0x0003c5f6) main_call5_pane

0xc1b6,	// (0x0003aeeb) sc_swipe_pane_ParamLimits

0xc1b6,	// (0x0003aeeb) sc_swipe_pane

0xc3be,	// (0x0003b0f3) call5_image_pane_ParamLimits

0xc3be,	// (0x0003b0f3) call5_image_pane

0xc3ce,	// (0x0003b103) call5_swipe_1_pane_ParamLimits

0xc3ce,	// (0x0003b103) call5_swipe_1_pane

0xc3da,	// (0x0003b10f) call5_swipe_2_pane_ParamLimits

0xc3da,	// (0x0003b10f) call5_swipe_2_pane

0xc3f4,	// (0x0003b129) popup_call5_audio_first_window_ParamLimits

0xc3f4,	// (0x0003b129) popup_call5_audio_first_window

0xdfc2,	// (0x0003ccf7) call5_swipe_1_pane_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) call5_swipe_1_pane_g1

0x37c7,	// (0x000324fc) call5_swipe_1_pane_g2_ParamLimits

0x37c7,	// (0x000324fc) call5_swipe_1_pane_g2

0x0001,

0xfc3b,	// (0x0003e970) call5_swipe_1_pane_g_ParamLimits

0xfc3b,	// (0x0003e970) call5_swipe_1_pane_g

0x37d3,	// (0x00032508) call5_swipe_1_pane_t1_ParamLimits

0x37d3,	// (0x00032508) call5_swipe_1_pane_t1

0xdfc2,	// (0x0003ccf7) call5_swipe_2_pane_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) call5_swipe_2_pane_g1

0x37e8,	// (0x0003251d) call5_swipe_2_pane_g2_ParamLimits

0x37e8,	// (0x0003251d) call5_swipe_2_pane_g2

0x0001,

0xfc40,	// (0x0003e975) call5_swipe_2_pane_g_ParamLimits

0xfc40,	// (0x0003e975) call5_swipe_2_pane_g

0x37f4,	// (0x00032529) call5_swipe_2_pane_t1_ParamLimits

0x37f4,	// (0x00032529) call5_swipe_2_pane_t1

0x3809,	// (0x0003253e) sc_swipe_pane_g1_ParamLimits

0x3809,	// (0x0003253e) sc_swipe_pane_g1

0x3816,	// (0x0003254b) sc_swipe_pane_g2_ParamLimits

0x3816,	// (0x0003254b) sc_swipe_pane_g2

0x0001,

0xfc45,	// (0x0003e97a) sc_swipe_pane_g_ParamLimits

0xfc45,	// (0x0003e97a) sc_swipe_pane_g

0x3822,	// (0x00032557) sc_swipe_pane_t1_ParamLimits

0x3822,	// (0x00032557) sc_swipe_pane_t1

0xd8c1,	// (0x0003c5f6) main_cmail_launcher_pane

0xc402,	// (0x0003b137) aid_size_cell_cmail_l_ParamLimits

0xc402,	// (0x0003b137) aid_size_cell_cmail_l

0xc410,	// (0x0003b145) grid_cmail_l_pane_ParamLimits

0xc410,	// (0x0003b145) grid_cmail_l_pane

0xc420,	// (0x0003b155) cell_cmail_l_pane_ParamLimits

0xc420,	// (0x0003b155) cell_cmail_l_pane

0x3837,	// (0x0003256c) cell_cmail_l_pane_g1_ParamLimits

0x3837,	// (0x0003256c) cell_cmail_l_pane_g1

0x3843,	// (0x00032578) cell_cmail_l_pane_t1_ParamLimits

0x3843,	// (0x00032578) cell_cmail_l_pane_t1

0x3859,	// (0x0003258e) cell_cmail_l_pane_t2_ParamLimits

0x3859,	// (0x0003258e) cell_cmail_l_pane_t2

0x0001,

0xfc4a,	// (0x0003e97f) cell_cmail_l_pane_t_ParamLimits

0xfc4a,	// (0x0003e97f) cell_cmail_l_pane_t

0xdf69,	// (0x0003cc9e) grid_highlight_pane_cp018_ParamLimits

0xdf69,	// (0x0003cc9e) grid_highlight_pane_cp018

0x61cb,	// (0x00034f00) main2_pane_ParamLimits

0x61cb,	// (0x00034f00) main2_pane

0xe0c3,	// (0x0003cdf8) popup_sp_fs_action_menu_bg_pane_g1

0xe0cb,	// (0x0003ce00) popup_sp_fs_action_menu_bg_pane_g2

0xe0d3,	// (0x0003ce08) popup_sp_fs_action_menu_bg_pane_g3

0xe0db,	// (0x0003ce10) popup_sp_fs_action_menu_bg_pane_g4

0xe0e3,	// (0x0003ce18) popup_sp_fs_action_menu_bg_pane_g5

0xe0eb,	// (0x0003ce20) popup_sp_fs_action_menu_bg_pane_g6

0xe0f3,	// (0x0003ce28) popup_sp_fs_action_menu_bg_pane_g7

0xe0fb,	// (0x0003ce30) popup_sp_fs_action_menu_bg_pane_g8

0xe103,	// (0x0003ce38) popup_sp_fs_action_menu_bg_pane_g9

0xe10b,	// (0x0003ce40) popup_sp_fs_action_menu_bg_pane_g10

0xe10b,	// (0x0003ce40) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0003de7a) popup_sp_fs_action_menu_bg_pane_g

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0003df28) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0003df28) list_medium_line_x2_t3_g3_g

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t1

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t2

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003df2f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003df2f) list_medium_line_x2_t3_g3_t

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g2_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g2_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g2_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0003df36) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0003df36) list_medium_line_x2_t3_g2_g

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t1

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t2

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003df2f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003df2f) list_medium_line_x2_t3_g2_t

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g3

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g4_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0003df3b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0003df3b) list_medium_line_x2_t4_g4_g

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t1

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t2

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t3

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0003df44) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0003df44) list_medium_line_x2_t4_g4_t

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g3

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g4_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0003df3b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0003df3b) list_medium_line_x2_t2_g4_g

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g4_t1

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0003dfab) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0003dfab) list_medium_line_x2_t2_g4_t

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0003df28) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0003df28) list_medium_line_x2_t2_g3_g

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g3_t1

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0003dfab) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0003dfab) list_medium_line_x2_t2_g3_t

0x80c6,	// (0x00036dfb) main_sp_fs_list_pane_ParamLimits

0x80c6,	// (0x00036dfb) main_sp_fs_list_pane

0x80d2,	// (0x00036e07) sp_fs_scroll_pane_ParamLimits

0x80d2,	// (0x00036e07) sp_fs_scroll_pane

0xe75f,	// (0x0003d494) list_medium_line_x2_t3_t1

0xe75f,	// (0x0003d494) list_medium_line_x2_t3_t2

0xe75f,	// (0x0003d494) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0003dff6) list_medium_line_x2_t3_t

0xe75f,	// (0x0003d494) list_medium_line_x3_t4_t1

0xe75f,	// (0x0003d494) list_medium_line_x3_t4_t2

0xe75f,	// (0x0003d494) list_medium_line_x3_t4_t3

0xe75f,	// (0x0003d494) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0003dffd) list_medium_line_x3_t4_t

0xe75f,	// (0x0003d494) list_medium_line_x4_t5_t1

0xe75f,	// (0x0003d494) list_medium_line_x4_t5_t2

0xe75f,	// (0x0003d494) list_medium_line_x4_t5_t3

0xe75f,	// (0x0003d494) list_medium_line_x4_t5_t4

0xe75f,	// (0x0003d494) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0003e006) list_medium_line_x4_t5_t

0xdfc2,	// (0x0003ccf7) list_medium_line_t4_g4_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t4_g4_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_t4_g4_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t4_g4_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_t4_g4_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t4_g4_g3

0xdfc2,	// (0x0003ccf7) list_medium_line_t4_g4_g4_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0003df3b) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0003df3b) list_medium_line_t4_g4_g

0xe236,	// (0x0003cf6b) list_medium_line_t4_g4_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t4_g4_t1

0xe236,	// (0x0003cf6b) list_medium_line_t4_g4_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t4_g4_t2

0xe236,	// (0x0003cf6b) list_medium_line_t4_g4_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t4_g4_t3

0xe236,	// (0x0003cf6b) list_medium_line_t4_g4_t4_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0003df44) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0003df44) list_medium_line_t4_g4_t

0x81bb,	// (0x00036ef0) chi_dic_find_pane_g1

0x8e3d,	// (0x00037b72) main_tport_pane

0xe75f,	// (0x0003d494) list_medium_line_plain_t1

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g2_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g2_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g2_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0003df36) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0003df36) list_medium_line_t2_g2_g

0xe236,	// (0x0003cf6b) list_medium_line_t2_g2_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t2_g2_t1

0xe236,	// (0x0003cf6b) list_medium_line_t2_g2_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x0003dfab) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x0003dfab) list_medium_line_t2_g2_t

0x5800,	// (0x00034535) aid_sp_fs_list_icon_a_sm

0x5808,	// (0x0003453d) aid_sp_fs_list_icon_d

0x2d2f,	// (0x00031a64) aid_sp_fs_text_primary

0x5810,	// (0x00034545) aid_sp_fs_text_secondary

0xd8c1,	// (0x0003c5f6) list_medium_line

0xd8c1,	// (0x0003c5f6) list_medium_line_g2

0xd8c1,	// (0x0003c5f6) list_medium_line_g3

0xd8c1,	// (0x0003c5f6) list_medium_line_plain

0xd8c1,	// (0x0003c5f6) list_medium_line_plain_t2

0xd8c1,	// (0x0003c5f6) list_medium_line_plain_t3

0xd8c1,	// (0x0003c5f6) list_medium_line_right_icon

0xd8c1,	// (0x0003c5f6) list_medium_line_right_iconx2

0xd8c1,	// (0x0003c5f6) list_medium_line_t2

0xd8c1,	// (0x0003c5f6) list_medium_line_t2_g2

0xd8c1,	// (0x0003c5f6) list_medium_line_t2_g3

0xd8c1,	// (0x0003c5f6) list_medium_line_t2_right_icon

0xd8c1,	// (0x0003c5f6) list_medium_line_t2_right_iconx2

0xd8c1,	// (0x0003c5f6) list_medium_line_t3

0xd8c1,	// (0x0003c5f6) list_medium_line_t3_g2

0xd8c1,	// (0x0003c5f6) list_medium_line_t3_g3

0xd8c1,	// (0x0003c5f6) list_medium_line_t3_right_iconx2

0xd8c1,	// (0x0003c5f6) list_medium_line_t4_g4

0xd8c1,	// (0x0003c5f6) list_medium_line_x2

0xd8c1,	// (0x0003c5f6) list_medium_line_x2_t2_g2

0xd8c1,	// (0x0003c5f6) list_medium_line_x2_t2_g3

0xd8c1,	// (0x0003c5f6) list_medium_line_x2_t2_g4

0xd8c1,	// (0x0003c5f6) list_medium_line_x2_t3

0xd8c1,	// (0x0003c5f6) list_medium_line_x2_t3_g2

0xd8c1,	// (0x0003c5f6) list_medium_line_x2_t3_g3

0xd8c1,	// (0x0003c5f6) list_medium_line_x2_t3_g4

0xd8c1,	// (0x0003c5f6) list_medium_line_x2_t4_g2

0xd8c1,	// (0x0003c5f6) list_medium_line_x2_t4_g4

0xd8c1,	// (0x0003c5f6) list_medium_line_x3

0xd8c1,	// (0x0003c5f6) list_medium_line_x3_t4

0xd8c1,	// (0x0003c5f6) list_medium_line_x3_t4_g4

0xd8c1,	// (0x0003c5f6) list_medium_line_x4_t4

0xd8c1,	// (0x0003c5f6) list_medium_line_x4_t4_g7

0xd8c1,	// (0x0003c5f6) list_medium_line_x4_t5

0x5819,	// (0x0003454e) list_single_fs_dyc_pane_ParamLimits

0x5819,	// (0x0003454e) list_single_fs_dyc_pane

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g3

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g4

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g5

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g6

0xdfd0,	// (0x0003cd05) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdfd0,	// (0x0003cd05) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb52,	// (0x0003e887) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb52,	// (0x0003e887) list_medium_line_x4_t4_g7_g

0xe236,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t1

0xe236,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t2

0xe236,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t3

0xe1ee,	// (0x0003cf23) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe1ee,	// (0x0003cf23) list_medium_line_x4_t4_g7_t4

0xe1ee,	// (0x0003cf23) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe1ee,	// (0x0003cf23) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb61,	// (0x0003e896) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb61,	// (0x0003e896) list_medium_line_x4_t4_g7_t

0x5835,	// (0x0003456a) list_single_dyc_row_pane_ParamLimits

0x5835,	// (0x0003456a) list_single_dyc_row_pane

0xc3b2,	// (0x0003b0e7) call5_gesture_pane_ParamLimits

0xc3b2,	// (0x0003b0e7) call5_gesture_pane

0xc3e6,	// (0x0003b11b) call5_windows_pane_ParamLimits

0xc3e6,	// (0x0003b11b) call5_windows_pane

0xc439,	// (0x0003b16e) call5_swipe_1_pane_cp_ParamLimits

0xc439,	// (0x0003b16e) call5_swipe_1_pane_cp

0xc445,	// (0x0003b17a) call5_swipe_2_pane_cp_ParamLimits

0xc445,	// (0x0003b17a) call5_swipe_2_pane_cp

0xe1e6,	// (0x0003cf1b) call5_image_pane_cp

0xc451,	// (0x0003b186) popup_call5_audio_first_window_cp_ParamLimits

0xc451,	// (0x0003b186) popup_call5_audio_first_window_cp

0x3809,	// (0x0003253e) call5_swipe_1_pane_g1_cp_ParamLimits

0x3809,	// (0x0003253e) call5_swipe_1_pane_g1_cp

0x3876,	// (0x000325ab) call5_swipe_1_pane_g2_cp

0x3822,	// (0x00032557) call5_swipe_1_pane_t1_cp_ParamLimits

0x3822,	// (0x00032557) call5_swipe_1_pane_t1_cp

0x3809,	// (0x0003253e) call5_swipe_2_pane_g1_cp_ParamLimits

0x3809,	// (0x0003253e) call5_swipe_2_pane_g1_cp

0x387e,	// (0x000325b3) call5_swipe_2_pane_g2_cp

0x3886,	// (0x000325bb) call5_swipe_2_pane_t1_cp_ParamLimits

0x3886,	// (0x000325bb) call5_swipe_2_pane_t1_cp

0xdf69,	// (0x0003cc9e) main_sp_fs_email_pane

0x389b,	// (0x000325d0) main_sp_fs_listscroll_pane_te

0x58cc,	// (0x00034601) popup_sp_fs_action_menu_pane_ParamLimits

0x58cc,	// (0x00034601) popup_sp_fs_action_menu_pane

0xe21c,	// (0x0003cf51) bg_sp_fs_ctrlbar_pane_g1

0x38e8,	// (0x0003261d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x38f1,	// (0x00032626) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x38fa,	// (0x0003262f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe21c,	// (0x0003cf51) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4f,	// (0x0003e984) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1804,	// (0x00030539) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1804,	// (0x00030539) bg_sp_fs_ctrlbar_ddmenu_pane

0x3903,	// (0x00032638) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3903,	// (0x00032638) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x390f,	// (0x00032644) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x390f,	// (0x00032644) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc58,	// (0x0003e98d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc58,	// (0x0003e98d) main_sp_fs_ctrlbar_ddmenu_pane_g

0x391b,	// (0x00032650) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x391b,	// (0x00032650) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe21c,	// (0x0003cf51) list_medium_line_t2_right_icon_g1

0xe75f,	// (0x0003d494) list_medium_line_t2_right_icon_t1

0xe75f,	// (0x0003d494) list_medium_line_t2_right_icon_t2

0x0001,

0xfc5d,	// (0x0003e992) list_medium_line_t2_right_icon_t

0xf022,	// (0x0003dd57) bg_sp_fs_ctrlbar_pane_ParamLimits

0xf022,	// (0x0003dd57) bg_sp_fs_ctrlbar_pane

0xc4b6,	// (0x0003b1eb) main_sp_fs_ctrlbar_button_pane_cp01

0xc4be,	// (0x0003b1f3) main_sp_fs_ctrlbar_ddmenu_pane

0x396d,	// (0x000326a2) main_sp_fs_ctrlbar_pane_g1

0x3979,	// (0x000326ae) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc62,	// (0x0003e997) main_sp_fs_ctrlbar_pane_g

0xc4fa,	// (0x0003b22f) main_sp_fs_ctrlbar_pane_t1

0xc535,	// (0x0003b26a) main_sp_fs_ctrlbar_pane

0xc54b,	// (0x0003b280) main_sp_fs_listscroll_pane_te_cp01

0x5910,	// (0x00034645) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5910,	// (0x00034645) popup_sp_fs_action_menu_pane_cp01

0xdf69,	// (0x0003cc9e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdf69,	// (0x0003cc9e) bg_sp_fs_highlight_list_pane_cp01

0x5930,	// (0x00034665) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5930,	// (0x00034665) sp_fs_action_menu_list_gene_pane_g1

0x39af,	// (0x000326e4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x39af,	// (0x000326e4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc70,	// (0x0003e9a5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc70,	// (0x0003e9a5) sp_fs_action_menu_list_gene_pane_g

0x593f,	// (0x00034674) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x593f,	// (0x00034674) sp_fs_action_menu_list_gene_pane_t1

0x5957,	// (0x0003468c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5957,	// (0x0003468c) sp_fs_action_menu_list_gene_pane

0x39f3,	// (0x00032728) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x39f3,	// (0x00032728) popup_sp_fs_action_menu_bg_pane

0x5976,	// (0x000346ab) sp_fs_action_menu_list_pane_ParamLimits

0x5976,	// (0x000346ab) sp_fs_action_menu_list_pane

0x5996,	// (0x000346cb) sp_fs_scroll_pane_cp01_ParamLimits

0x5996,	// (0x000346cb) sp_fs_scroll_pane_cp01

0xe75f,	// (0x0003d494) list_medium_line_plain_t2_t1

0xe75f,	// (0x0003d494) list_medium_line_plain_t2_t2

0x0001,

0xfc5d,	// (0x0003e992) list_medium_line_plain_t2_t

0xe75f,	// (0x0003d494) list_medium_line_plain_t3_t1

0xe75f,	// (0x0003d494) list_medium_line_plain_t3_t2

0xe75f,	// (0x0003d494) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x0003dff6) list_medium_line_plain_t3_t

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g2_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g2_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g2_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0003df36) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0003df36) list_medium_line_x2_t2_g2_g

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g2_t1

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0003dfab) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0003dfab) list_medium_line_x2_t2_g2_t

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g2_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g2_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0003df36) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0003df36) list_medium_line_x2_t4_g2_g

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t1

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t2

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t3

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0003df44) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0003df44) list_medium_line_x2_t4_g2_t

0xe21c,	// (0x0003cf51) list_medium_line_t3_right_iconx2_g1

0xe21c,	// (0x0003cf51) list_medium_line_t3_right_iconx2_g2

0xe21c,	// (0x0003cf51) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x0003e117) list_medium_line_t3_right_iconx2_g

0xe75f,	// (0x0003d494) list_medium_line_t3_right_iconx2_t1

0xe75f,	// (0x0003d494) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5d,	// (0x0003e992) list_medium_line_t3_right_iconx2_t

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g3

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0003df3b) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0003df3b) list_medium_line_x3_t4_g4_g

0xe236,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t1

0xe236,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t2

0xe236,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t3

0xe236,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0003df44) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0003df44) list_medium_line_x3_t4_g4_t

0x59bc,	// (0x000346f1) list_single_dyc_row_text_pane_t1_ParamLimits

0x59bc,	// (0x000346f1) list_single_dyc_row_text_pane_t1

0x59f3,	// (0x00034728) list_single_dyc_row_text_pane_t2_ParamLimits

0x59f3,	// (0x00034728) list_single_dyc_row_text_pane_t2

0x5a69,	// (0x0003479e) list_single_dyc_row_text_pane_t3_ParamLimits

0x5a69,	// (0x0003479e) list_single_dyc_row_text_pane_t3

0x0005,

0xfc75,	// (0x0003e9aa) list_single_dyc_row_text_pane_t_ParamLimits

0xfc75,	// (0x0003e9aa) list_single_dyc_row_text_pane_t

0x5b3a,	// (0x0003486f) list_single_dyc_row_pane_g1_ParamLimits

0x5b3a,	// (0x0003486f) list_single_dyc_row_pane_g1

0x5b46,	// (0x0003487b) list_single_dyc_row_pane_g2_ParamLimits

0x5b46,	// (0x0003487b) list_single_dyc_row_pane_g2

0x5b52,	// (0x00034887) list_single_dyc_row_pane_g3_ParamLimits

0x5b52,	// (0x00034887) list_single_dyc_row_pane_g3

0x5b5e,	// (0x00034893) list_single_dyc_row_pane_g4_ParamLimits

0x5b5e,	// (0x00034893) list_single_dyc_row_pane_g4

0x0003,

0xfc82,	// (0x0003e9b7) list_single_dyc_row_pane_g_ParamLimits

0xfc82,	// (0x0003e9b7) list_single_dyc_row_pane_g

0x5b6a,	// (0x0003489f) list_single_dyc_row_text_pane_ParamLimits

0x5b6a,	// (0x0003489f) list_single_dyc_row_text_pane

0xd8c1,	// (0x0003c5f6) bg_sp_fs_scroll_pane

0x3aba,	// (0x000327ef) thumb_sp_fs_scroll_pane

0xdfc2,	// (0x0003ccf7) list_medium_line_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_g1

0xe236,	// (0x0003cf6b) list_medium_line_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0003df36) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0003df36) list_medium_line_x2_g

0xe236,	// (0x0003cf6b) list_medium_line_x2_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t1

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x3_g1

0x257a,	// (0x000312af) list_medium_line_x3_g2_ParamLimits

0x257a,	// (0x000312af) list_medium_line_x3_g2

0x0001,

0xfc8b,	// (0x0003e9c0) list_medium_line_x3_g_ParamLimits

0xfc8b,	// (0x0003e9c0) list_medium_line_x3_g

0x3ac3,	// (0x000327f8) list_medium_line_x3_t1_ParamLimits

0x3ac3,	// (0x000327f8) list_medium_line_x3_t1

0x3ad7,	// (0x0003280c) thumb_sp_fs_scroll_pane_g1

0x3ae0,	// (0x00032815) thumb_sp_fs_scroll_pane_g2

0x3ae9,	// (0x0003281e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x0003e9c5) thumb_sp_fs_scroll_pane_g

0x3ad7,	// (0x0003280c) bg_sp_fs_scroll_pane_g1

0x3ae0,	// (0x00032815) bg_sp_fs_scroll_pane_g2

0x3ae9,	// (0x0003281e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x0003e9c5) bg_sp_fs_scroll_pane_g

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g3

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g4_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0003df3b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0003df3b) list_medium_line_x2_t3_g4_g

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t1

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t2

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0003df2f) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0003df2f) list_medium_line_x2_t3_g4_t

0xdfc2,	// (0x0003ccf7) list_medium_line_g2_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_g2_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_g2_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0003df36) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0003df36) list_medium_line_g2_g

0xe236,	// (0x0003cf6b) list_medium_line_g2_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_g2_t1

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g2_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g2_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g2_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0003df36) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0003df36) list_medium_line_t3_g2_g

0xe236,	// (0x0003cf6b) list_medium_line_t3_g2_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t3_g2_t1

0xe236,	// (0x0003cf6b) list_medium_line_t3_g2_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t3_g2_t2

0xe236,	// (0x0003cf6b) list_medium_line_t3_g2_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003df2f) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003df2f) list_medium_line_t3_g2_t

0xe21c,	// (0x0003cf51) list_medium_line_right_icon_g1

0xe75f,	// (0x0003d494) list_medium_line_right_icon_t1

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g1

0xe236,	// (0x0003cf6b) list_medium_line_t2_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t2_t1

0xe236,	// (0x0003cf6b) list_medium_line_t2_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x0003dfab) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x0003dfab) list_medium_line_t2_t

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g1

0xe236,	// (0x0003cf6b) list_medium_line_t3_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t3_t1

0xe236,	// (0x0003cf6b) list_medium_line_t3_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t3_t2

0xe236,	// (0x0003cf6b) list_medium_line_t3_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0003df2f) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0003df2f) list_medium_line_t3_t

0xdfc2,	// (0x0003ccf7) list_medium_line_g3_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_g3_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_g3_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_g3_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_g3_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0003df28) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0003df28) list_medium_line_g3_g

0xe236,	// (0x0003cf6b) list_medium_line_g3_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_g3_t1

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g3_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g3_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g3_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g3_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g3_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0003df28) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0003df28) list_medium_line_t2_g3_g

0xe236,	// (0x0003cf6b) list_medium_line_t2_g3_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t2_g3_t1

0xe236,	// (0x0003cf6b) list_medium_line_t2_g3_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x0003dfab) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x0003dfab) list_medium_line_t2_g3_t

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g3_g1_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g3_g1

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g3_g2_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g3_g2

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g3_g3_ParamLimits

0xdfc2,	// (0x0003ccf7) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0003df28) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0003df28) list_medium_line_t3_g3_g

0xe236,	// (0x0003cf6b) list_medium_line_t3_g3_t1_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t3_g3_t1

0xe236,	// (0x0003cf6b) list_medium_line_t3_g3_t2_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t3_g3_t2

0xe236,	// (0x0003cf6b) list_medium_line_t3_g3_t3_ParamLimits

0xe236,	// (0x0003cf6b) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003df2f) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003df2f) list_medium_line_t3_g3_t

0xe21c,	// (0x0003cf51) list_medium_line_right_iconx2_g1

0xe21c,	// (0x0003cf51) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0003e112) list_medium_line_right_iconx2_g

0xe75f,	// (0x0003d494) list_medium_line_right_iconx2_t1

0xe21c,	// (0x0003cf51) list_medium_line_t2_right_iconx2_g1

0xe21c,	// (0x0003cf51) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0003e112) list_medium_line_t2_right_iconx2_g

0xe75f,	// (0x0003d494) list_medium_line_t2_right_iconx2_t1

0xe75f,	// (0x0003d494) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc5d,	// (0x0003e992) list_medium_line_t2_right_iconx2_t

0xe75f,	// (0x0003d494) list_medium_line_x4_t4_t1

0xe75f,	// (0x0003d494) list_medium_line_x4_t4_t2

0xe75f,	// (0x0003d494) list_medium_line_x4_t4_t3

0xe75f,	// (0x0003d494) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0003dffd) list_medium_line_x4_t4_t

0xc586,	// (0x0003b2bb) tport_appsw_pane_ParamLimits

0xc586,	// (0x0003b2bb) tport_appsw_pane

0xc594,	// (0x0003b2c9) tport_contact_pane_ParamLimits

0xc594,	// (0x0003b2c9) tport_contact_pane

0xc5a4,	// (0x0003b2d9) tport_listscroll_pane_ParamLimits

0xc5a4,	// (0x0003b2d9) tport_listscroll_pane

0xc5b4,	// (0x0003b2e9) cell_tport_appsw_pane_ParamLimits

0xc5b4,	// (0x0003b2e9) cell_tport_appsw_pane

0xdfd0,	// (0x0003cd05) tport_appsw_pane_g1_ParamLimits

0xdfd0,	// (0x0003cd05) tport_appsw_pane_g1

0x3af2,	// (0x00032827) tport_contact_pane_g1

0x335b,	// (0x00032090) tport_contact_pane_t1

0x3afb,	// (0x00032830) tport_contact_pane_t2

0x0001,

0xfc97,	// (0x0003e9cc) tport_contact_pane_t

0x3b09,	// (0x0003283e) list_tport_pane

0x3b12,	// (0x00032847) scroll_pane_cp_030

0xc5e7,	// (0x0003b31c) cell_tport_appsw_pane_g1

0xc5f7,	// (0x0003b32c) cell_tport_appsw_pane_t1

0xc605,	// (0x0003b33a) grid_highlight_pane_cp019

0xc60d,	// (0x0003b342) list_tport_double_graphic_pane_ParamLimits

0xc60d,	// (0x0003b342) list_tport_double_graphic_pane

0xdf69,	// (0x0003cc9e) list_highlight_pane_cp023_ParamLimits

0xdf69,	// (0x0003cc9e) list_highlight_pane_cp023

0xc61e,	// (0x0003b353) list_tport_double_graphic_pane_g1_ParamLimits

0xc61e,	// (0x0003b353) list_tport_double_graphic_pane_g1

0xc62b,	// (0x0003b360) list_tport_double_graphic_pane_t1_ParamLimits

0xc62b,	// (0x0003b360) list_tport_double_graphic_pane_t1

0xc640,	// (0x0003b375) list_tport_double_graphic_pane_t2_ParamLimits

0xc640,	// (0x0003b375) list_tport_double_graphic_pane_t2

0x0001,

0xfca3,	// (0x0003e9d8) list_tport_double_graphic_pane_t_ParamLimits

0xfca3,	// (0x0003e9d8) list_tport_double_graphic_pane_t

0xd8c1,	// (0x0003c5f6) main_cale_note_pane

0xa9b4,	// (0x000396e9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa9b4,	// (0x000396e9) cell_vitu2_function_top_wide_pane_cp01

0xc103,	// (0x0003ae38) wait_bar_pane_cp05_ParamLimits

0xdf69,	// (0x0003cc9e) listscroll_cmail_pane

0x3b1b,	// (0x00032850) list_cmail_pane

0xc652,	// (0x0003b387) list_cmail_body_pane

0xc679,	// (0x0003b3ae) list_single_cmail_header_caption_pane

0xc6a2,	// (0x0003b3d7) list_single_cmail_header_detail_pane_ParamLimits

0xc6a2,	// (0x0003b3d7) list_single_cmail_header_detail_pane

0x3b2b,	// (0x00032860) list_single_cmail_header_caption_pane_t1

0x5b89,	// (0x000348be) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5b89,	// (0x000348be) list_single_cmail_header_detail_pane_g1

0x5b9f,	// (0x000348d4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5b9f,	// (0x000348d4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca8,	// (0x0003e9dd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca8,	// (0x0003e9dd) list_single_cmail_header_detail_pane_g

0x5bab,	// (0x000348e0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5bab,	// (0x000348e0) list_single_cmail_header_detail_pane_t1

0x5c0b,	// (0x00034940) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5c0b,	// (0x00034940) list_single_cmail_header_editor_pane_bg

0x34b8,	// (0x000321ed) list_cmail_body_pane_g1

0x3bd2,	// (0x00032907) list_cmail_body_pane_t1

0x26b7,	// (0x000313ec) list_single_cmail_header_editor_pane_bg_g1

0xe441,	// (0x0003d176) list_single_cmail_header_editor_pane_bg_g1_copy1

0x26c7,	// (0x000313fc) list_single_cmail_header_editor_pane_bg_g1_copy2

0x26bf,	// (0x000313f4) list_single_cmail_header_editor_pane_bg_g1_copy3

0x296c,	// (0x000316a1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x26e7,	// (0x0003141c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x26d7,	// (0x0003140c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x26df,	// (0x00031414) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe421,	// (0x0003d156) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc6d8,	// (0x0003b40d) calenote_gesture_pane_ParamLimits

0xc6d8,	// (0x0003b40d) calenote_gesture_pane

0xc6f2,	// (0x0003b427) calenote_window_pane_ParamLimits

0xc6f2,	// (0x0003b427) calenote_window_pane

0x3be0,	// (0x00032915) popup_note_window_cp01

0xc70a,	// (0x0003b43f) calenote_swipe_1_pane_ParamLimits

0xc70a,	// (0x0003b43f) calenote_swipe_1_pane

0xc445,	// (0x0003b17a) calenote_swipe_2_pane_ParamLimits

0xc445,	// (0x0003b17a) calenote_swipe_2_pane

0x3809,	// (0x0003253e) calenote_swipe_1_pane_g1_ParamLimits

0x3809,	// (0x0003253e) calenote_swipe_1_pane_g1

0x3816,	// (0x0003254b) calenote_swipe_1_pane_g2_ParamLimits

0x3816,	// (0x0003254b) calenote_swipe_1_pane_g2

0x0001,

0xfc45,	// (0x0003e97a) calenote_swipe_1_pane_g_ParamLimits

0xfc45,	// (0x0003e97a) calenote_swipe_1_pane_g

0x3bf2,	// (0x00032927) calenote_swipe_1_pane_t1_ParamLimits

0x3bf2,	// (0x00032927) calenote_swipe_1_pane_t1

0x3809,	// (0x0003253e) calenote_swipe_2_pane_g1_ParamLimits

0x3809,	// (0x0003253e) calenote_swipe_2_pane_g1

0x3c11,	// (0x00032946) calenote_swipe_2_pane_g2_ParamLimits

0x3c11,	// (0x00032946) calenote_swipe_2_pane_g2

0x0001,

0xfcb4,	// (0x0003e9e9) calenote_swipe_2_pane_g_ParamLimits

0xfcb4,	// (0x0003e9e9) calenote_swipe_2_pane_g

0x3c1d,	// (0x00032952) calenote_swipe_2_pane_t1_ParamLimits

0x3c1d,	// (0x00032952) calenote_swipe_2_pane_t1

0xd8c1,	// (0x0003c5f6) main_mup_navstr_pane

0x9850,	// (0x00038585) main_mup3_pane_t7_ParamLimits

0x9850,	// (0x00038585) main_mup3_pane_t7

0xa07b,	// (0x00038db0) main_mp4_pane_g6_ParamLimits

0xa07b,	// (0x00038db0) main_mp4_pane_g6

0xa40b,	// (0x00039140) main_image3_pane_t4_ParamLimits

0xa40b,	// (0x00039140) main_image3_pane_t4

0xc71d,	// (0x0003b452) popup_navstr_preview_pane_ParamLimits

0xc71d,	// (0x0003b452) popup_navstr_preview_pane

0xc729,	// (0x0003b45e) scroll_navstr_pane_ParamLimits

0xc729,	// (0x0003b45e) scroll_navstr_pane

0xd8c1,	// (0x0003c5f6) bg_popup_preview_window_pane_cp04

0x3c44,	// (0x00032979) popup_navstr_preview_pane_t1

0xc735,	// (0x0003b46a) scroll_navstr_pane_g1_ParamLimits

0xc735,	// (0x0003b46a) scroll_navstr_pane_g1

0xc742,	// (0x0003b477) scroll_navstr_pane_t1_ParamLimits

0xc742,	// (0x0003b477) scroll_navstr_pane_t1

0x3be9,	// (0x0003291e) bg_button_pane_cp014

0x3be9,	// (0x0003291e) bg_button_pane_cp030

0x5872,	// (0x000345a7) list_double_fisheye_pane_g4_ParamLimits

0x5872,	// (0x000345a7) list_double_fisheye_pane_g4

0x587e,	// (0x000345b3) list_double_fisheye_pane_g5_ParamLimits

0x587e,	// (0x000345b3) list_double_fisheye_pane_g5

0x04f1,	// (0x0002f226) sp_fs_scroll_pane_cp03

0x396d,	// (0x000326a2) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3979,	// (0x000326ae) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc62,	// (0x0003e997) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc4fa,	// (0x0003b22f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3b23,	// (0x00032858) sp_fs_scroll_pane_cp02

0xe12e,	// (0x0003ce63) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe12e,	// (0x0003ce63) popup_sp_fs_calendar_preview_list_single_pane

0xd8c1,	// (0x0003c5f6) main_cam6_pano_pane

0xdf69,	// (0x0003cc9e) main_mup3_pane_ParamLimits

0xd8c1,	// (0x0003c5f6) main_phacti_pane

0xbfd8,	// (0x0003ad0d) bg_button_pane_cp11

0xbff0,	// (0x0003ad25) main_mobtv_info_pane_g2_ParamLimits

0xbff0,	// (0x0003ad25) main_mobtv_info_pane_g2

0x0001,

0xfbc2,	// (0x0003e8f7) main_mobtv_info_pane_g_ParamLimits

0xfbc2,	// (0x0003e8f7) main_mobtv_info_pane_g

0xc1a2,	// (0x0003aed7) sc_clock_pane_t5_ParamLimits

0xc1a2,	// (0x0003aed7) sc_clock_pane_t5

0xc243,	// (0x0003af78) main_radioblah_pane_g1_ParamLimits

0x3755,	// (0x0003248a) main_radioblah_pane_t3_ParamLimits

0x3755,	// (0x0003248a) main_radioblah_pane_t3

0x376d,	// (0x000324a2) main_radioblah_pane_t4_ParamLimits

0x376d,	// (0x000324a2) main_radioblah_pane_t4

0xc261,	// (0x0003af96) main_radioblah_text_pane_ParamLimits

0xc261,	// (0x0003af96) main_radioblah_text_pane

0xc26e,	// (0x0003afa3) main_radioblah_info_pane_g1_ParamLimits

0xc303,	// (0x0003b038) main_radioblah_info_pane_t4_ParamLimits

0xc303,	// (0x0003b038) main_radioblah_info_pane_t4

0xdf69,	// (0x0003cc9e) main_sp_fs_calendar_pane

0xc754,	// (0x0003b489) main_phacti_pane_g1

0xc75c,	// (0x0003b491) phacti_note_pane_ParamLimits

0xc75c,	// (0x0003b491) phacti_note_pane

0x3c5b,	// (0x00032990) phacti_term_pane_ParamLimits

0x3c5b,	// (0x00032990) phacti_term_pane

0x3c70,	// (0x000329a5) phacti_note_pane_t1_ParamLimits

0x3c70,	// (0x000329a5) phacti_note_pane_t1

0x5c22,	// (0x00034957) phacti_term_pane_g1

0x5c2a,	// (0x0003495f) phacti_term_pane_t1_ParamLimits

0x5c2a,	// (0x0003495f) phacti_term_pane_t1

0x3cb9,	// (0x000329ee) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe1cd,	// (0x0003cf02) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcbe,	// (0x0003e9f3) popup_sp_fs_calendar_preview_list_single_pane_g

0x3cc1,	// (0x000329f6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3cc1,	// (0x000329f6) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3cd7,	// (0x00032a0c) aid_popup_sp_fs_bg_corner_pane

0xe21c,	// (0x0003cf51) popup_sp_fs_calendar_preview_bg_pane_g1

0xd8c1,	// (0x0003c5f6) popup_sp_fs_calendar_preview_bg_pane

0x3cdf,	// (0x00032a14) popup_sp_fs_calendar_preview_list_pane

0xf022,	// (0x0003dd57) bg_main_sp_fs_cale_pane_ParamLimits

0xf022,	// (0x0003dd57) bg_main_sp_fs_cale_pane

0x5c5d,	// (0x00034992) listscroll_cale_mrui_pane_ParamLimits

0x5c5d,	// (0x00034992) listscroll_cale_mrui_pane

0x5c72,	// (0x000349a7) listscroll_sp_fs_schedule_track_pane

0x5c7b,	// (0x000349b0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5c7b,	// (0x000349b0) main_sp_fs_ctrlbar_pane_cp01

0x3d21,	// (0x00032a56) main_sp_fs_ribbon_pane

0x5c8e,	// (0x000349c3) popup_sp_fs_cale_preview_window

0xc7bf,	// (0x0003b4f4) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc7bf,	// (0x0003b4f4) list_single_sp_fs_schedule_track_pane

0xd8cb,	// (0x0003c600) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd8cb,	// (0x0003c600) bg_sp_fs_highlight_list_pane_cp03

0xc7df,	// (0x0003b514) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc7df,	// (0x0003b514) list_single_sp_fs_schedule_track_pane_g1

0xc7eb,	// (0x0003b520) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc7eb,	// (0x0003b520) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcc3,	// (0x0003e9f8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcc3,	// (0x0003e9f8) list_single_sp_fs_schedule_track_pane_g

0xc7f7,	// (0x0003b52c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc7f7,	// (0x0003b52c) list_single_sp_fs_schedule_track_pane_t1

0xc80f,	// (0x0003b544) sp_fs_schedule_track_pane_ParamLimits

0xc80f,	// (0x0003b544) sp_fs_schedule_track_pane

0x3d3b,	// (0x00032a70) sp_fs_schedule_track_pane_g1

0x3d43,	// (0x00032a78) sp_fs_schedule_track_pane_g2

0x3d4b,	// (0x00032a80) sp_fs_schedule_track_pane_g3

0x3d53,	// (0x00032a88) sp_fs_schedule_track_pane_g4

0x3d5b,	// (0x00032a90) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc8,	// (0x0003e9fd) sp_fs_schedule_track_pane_g

0x26b7,	// (0x000313ec) bg_sp_fs_schedule_viewer_highlight_g1

0xe441,	// (0x0003d176) bg_sp_fs_schedule_viewer_highlight_g2

0x26bf,	// (0x000313f4) bg_sp_fs_schedule_viewer_highlight_g3

0x26c7,	// (0x000313fc) bg_sp_fs_schedule_viewer_highlight_g4

0x296c,	// (0x000316a1) bg_sp_fs_schedule_viewer_highlight_g5

0x26d7,	// (0x0003140c) bg_sp_fs_schedule_viewer_highlight_g6

0x26df,	// (0x00031414) bg_sp_fs_schedule_viewer_highlight_g7

0x26e7,	// (0x0003141c) bg_sp_fs_schedule_viewer_highlight_g8

0xe421,	// (0x0003d156) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcd3,	// (0x0003ea08) bg_sp_fs_schedule_viewer_highlight_g

0xd8c1,	// (0x0003c5f6) bg_main_sp_fs_ribbon_pane

0xc81f,	// (0x0003b554) main_sp_fs_ribbon_pane_g1

0x3d63,	// (0x00032a98) main_sp_fs_ribbon_pane_t1

0xc828,	// (0x0003b55d) main_sp_fs_ribbon_pane_t2

0x3d72,	// (0x00032aa7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce6,	// (0x0003ea1b) main_sp_fs_ribbon_pane_t

0x3d81,	// (0x00032ab6) main_sp_fs_ribbon_scheduler_pane

0x3d89,	// (0x00032abe) bg_main_sp_fs_ribbon_pane_g1

0x3d92,	// (0x00032ac7) bg_main_sp_fs_ribbon_pane_g2

0x3d9b,	// (0x00032ad0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfced,	// (0x0003ea22) bg_main_sp_fs_ribbon_pane_g

0x3da3,	// (0x00032ad8) main_sp_fs_ribbon_scheduler_pane_g1

0x3dac,	// (0x00032ae1) main_sp_fs_ribbon_scheduler_pane_g2

0x3db5,	// (0x00032aea) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcf4,	// (0x0003ea29) main_sp_fs_ribbon_scheduler_pane_g

0x3dbe,	// (0x00032af3) list_cale_mrui_pane

0xc837,	// (0x0003b56c) sp_fs_scroll_pane_cp07_ParamLimits

0xc837,	// (0x0003b56c) sp_fs_scroll_pane_cp07

0xc853,	// (0x0003b588) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc853,	// (0x0003b588) bg_sp_fs_schedule_viewer_highlight

0x3dcb,	// (0x00032b00) list_single_sp_fs_schedule_track_pane_cp01

0x3dd3,	// (0x00032b08) list_sp_fs_schedule_track_pane

0x3ddb,	// (0x00032b10) sp_fs_scroll_pane_cp06_ParamLimits

0x3ddb,	// (0x00032b10) sp_fs_scroll_pane_cp06

0xe21c,	// (0x0003cf51) bgmain_sp_fs_calendar_pane_g1

0x5ca0,	// (0x000349d5) list_single_cale_mrui_pane_ParamLimits

0x5ca0,	// (0x000349d5) list_single_cale_mrui_pane

0x5cce,	// (0x00034a03) list_single_cale_mrui_row_pane_ParamLimits

0x5cce,	// (0x00034a03) list_single_cale_mrui_row_pane

0x5cdb,	// (0x00034a10) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5cdb,	// (0x00034a10) list_single_cale_mrui_row_pane_g1

0x5d13,	// (0x00034a48) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5d13,	// (0x00034a48) list_single_cale_mrui_row_pane_t1

0x5d25,	// (0x00034a5a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5d25,	// (0x00034a5a) list_single_cale_mrui_row_pane_t2

0x5d8b,	// (0x00034ac0) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5d8b,	// (0x00034ac0) list_single_cale_mrui_row_pane_t3

0x5dba,	// (0x00034aef) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5dba,	// (0x00034aef) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd02,	// (0x0003ea37) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd02,	// (0x0003ea37) list_single_cale_mrui_row_pane_t

0x5de9,	// (0x00034b1e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5de9,	// (0x00034b1e) list_single_cmail_header_editor_pane_bg_cp01

0x5e09,	// (0x00034b3e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5e09,	// (0x00034b3e) list_single_cmail_header_editor_pane_bg_cp02

0xc860,	// (0x0003b595) main_radioblah_text_pane_t1_ParamLimits

0xc860,	// (0x0003b595) main_radioblah_text_pane_t1

0x3eaf,	// (0x00032be4) cam6_indi_pane_cp01

0x3eb7,	// (0x00032bec) cam6_mode_pane_cp01

0x3ebf,	// (0x00032bf4) cam6_pano_pane

0x3ec8,	// (0x00032bfd) cam6_zoom_pane_cp01

0x3ed0,	// (0x00032c05) cam6_pano_image_pane

0x3edb,	// (0x00032c10) cam6_pano_pane_g1

0x34b8,	// (0x000321ed) cam6_pano_pane_g2

0x3ee4,	// (0x00032c19) cam6_pano_pane_g3

0x3eed,	// (0x00032c22) cam6_pano_pane_g4

0x1f78,	// (0x00030cad) cam6_pano_pane_g5

0x3ef6,	// (0x00032c2b) cam6_pano_pane_g6

0x3f00,	// (0x00032c35) cam6_pano_pane_g7

0x3f08,	// (0x00032c3d) cam6_pano_pane_g8

0x3f11,	// (0x00032c46) cam6_pano_pane_g9

0x0008,

0xfd0b,	// (0x0003ea40) cam6_pano_pane_g

0xd8c1,	// (0x0003c5f6) main_browser_tag_pane

0x3c3c,	// (0x00032971) grid_navstr_albumart_pane

0x3f1c,	// (0x00032c51) cell_navstr_albumart_pane_ParamLimits

0x3f1c,	// (0x00032c51) cell_navstr_albumart_pane

0x3f3c,	// (0x00032c71) cell_navstr_albumart_pane_g1

0x1386,	// (0x000300bb) cell_navstr_albumart_pane_g2

0x1396,	// (0x000300cb) cell_navstr_albumart_pane_g3

0x138e,	// (0x000300c3) cell_navstr_albumart_pane_g4

0x0003,

0xfd1e,	// (0x0003ea53) cell_navstr_albumart_pane_g

0xc87b,	// (0x0003b5b0) bt_list_pane_ParamLimits

0xc87b,	// (0x0003b5b0) bt_list_pane

0xc89b,	// (0x0003b5d0) bt_list_pane_t1

0xc8aa,	// (0x0003b5df) bt_list_pane_t2

0x0001,

0xfd27,	// (0x0003ea5c) bt_list_pane_t

0xd8c1,	// (0x0003c5f6) main_cale_prevew_pane

0xc8b9,	// (0x0003b5ee) popup_cale_preview_window_ParamLimits

0xc8b9,	// (0x0003b5ee) popup_cale_preview_window

0xdf69,	// (0x0003cc9e) bg_popup_preview_window_pane_cp05_ParamLimits

0xdf69,	// (0x0003cc9e) bg_popup_preview_window_pane_cp05

0x3f44,	// (0x00032c79) list_cale_preview_pane_ParamLimits

0x3f44,	// (0x00032c79) list_cale_preview_pane

0xc8d2,	// (0x0003b607) list_double_cale_preview_pane_ParamLimits

0xc8d2,	// (0x0003b607) list_double_cale_preview_pane

0xc8e4,	// (0x0003b619) list_single_cale_preview_pane_ParamLimits

0xc8e4,	// (0x0003b619) list_single_cale_preview_pane

0xc8fa,	// (0x0003b62f) list_single_cale_preview_pane_g1

0xc902,	// (0x0003b637) list_single_cale_preview_pane_t1_ParamLimits

0xc902,	// (0x0003b637) list_single_cale_preview_pane_t1

0xc917,	// (0x0003b64c) list_double_cale_preview_pane_g1

0xc91f,	// (0x0003b654) list_double_cale_preview_pane_t1_ParamLimits

0xc91f,	// (0x0003b654) list_double_cale_preview_pane_t1

0xc934,	// (0x0003b669) list_double_cale_preview_pane_t2_ParamLimits

0xc934,	// (0x0003b669) list_double_cale_preview_pane_t2

0x0001,

0xfd2c,	// (0x0003ea61) list_double_cale_preview_pane_t_ParamLimits

0xfd2c,	// (0x0003ea61) list_double_cale_preview_pane_t

0xd8c1,	// (0x0003c5f6) main_ezdial_pane

0xdf69,	// (0x0003cc9e) main_sp_fs_email_pane_ParamLimits

0xc45f,	// (0x0003b194) cmail_ddmenu_btn01_pane_ParamLimits

0xc45f,	// (0x0003b194) cmail_ddmenu_btn01_pane

0xc47c,	// (0x0003b1b1) cmail_ddmenu_btn02_pane_ParamLimits

0xc47c,	// (0x0003b1b1) cmail_ddmenu_btn02_pane

0xc49a,	// (0x0003b1cf) cmail_ddmenu_btn03_pane_ParamLimits

0xc49a,	// (0x0003b1cf) cmail_ddmenu_btn03_pane

0xc535,	// (0x0003b26a) main_sp_fs_ctrlbar_pane_ParamLimits

0xc54b,	// (0x0003b280) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc652,	// (0x0003b387) list_cmail_body_pane_ParamLimits

0x3b39,	// (0x0003286e) bg_button_pane_cp12

0x3b4e,	// (0x00032883) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3b4e,	// (0x00032883) list_single_cmail_header_detail_pane_g3

0x5be7,	// (0x0003491c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5be7,	// (0x0003491c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaf,	// (0x0003e9e4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaf,	// (0x0003e9e4) list_single_cmail_header_detail_pane_t

0x5c3f,	// (0x00034974) phacti_term_pane_t2_ParamLimits

0x5c3f,	// (0x00034974) phacti_term_pane_t2

0x0001,

0xfcb9,	// (0x0003e9ee) phacti_term_pane_t_ParamLimits

0xfcb9,	// (0x0003e9ee) phacti_term_pane_t

0x3f50,	// (0x00032c85) aid_size_list_single_double

0xc94c,	// (0x0003b681) popup_ezdial_listscroll_window

0xc96d,	// (0x0003b6a2) popup_number_entry_window_cp01

0xe1e6,	// (0x0003cf1b) bg_popup_call_pane_cp09

0x3f5c,	// (0x00032c91) ezdial_list_pane

0x3f64,	// (0x00032c99) scroll_pane_cp23

0x1804,	// (0x00030539) bg_button_pane_cp028_ParamLimits

0x1804,	// (0x00030539) bg_button_pane_cp028

0xc97b,	// (0x0003b6b0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc97b,	// (0x0003b6b0) cmail_ddmenu_btn01_pane_g1

0xc98b,	// (0x0003b6c0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc98b,	// (0x0003b6c0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd31,	// (0x0003ea66) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd31,	// (0x0003ea66) cmail_ddmenu_btn01_pane_g

0x3f6c,	// (0x00032ca1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3f6c,	// (0x00032ca1) cmail_ddmenu_btn01_pane_t1

0xf022,	// (0x0003dd57) bg_button_pane_cp029_ParamLimits

0xf022,	// (0x0003dd57) bg_button_pane_cp029

0xc997,	// (0x0003b6cc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc997,	// (0x0003b6cc) cmail_ddmenu_btn02_pane_g1

0xc9af,	// (0x0003b6e4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc9af,	// (0x0003b6e4) cmail_ddmenu_btn02_pane_t1

0xd8cb,	// (0x0003c600) bg_button_pane_cp031_ParamLimits

0xd8cb,	// (0x0003c600) bg_button_pane_cp031

0xc997,	// (0x0003b6cc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc997,	// (0x0003b6cc) cmail_ddmenu_btn03_pane_g1

0xc9af,	// (0x0003b6e4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc9af,	// (0x0003b6e4) cmail_ddmenu_btn03_pane_t1

0xa2b6,	// (0x00038feb) cell_dialer2_keypad_pane_t1_ParamLimits

0xa2d0,	// (0x00039005) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa2d0,	// (0x00039005) cell_dialer2_keypad_pane_t1_copy1

0xbe19,	// (0x0003ab4e) ncimui_group_button_pane

0xdf69,	// (0x0003cc9e) main_sp_fs_calendar_pane_ParamLimits

0xc679,	// (0x0003b3ae) list_single_cmail_header_caption_pane_ParamLimits

0x5c54,	// (0x00034989) aid_recal_txt_sm_pane

0xd8c1,	// (0x0003c5f6) mian_recal_day_pane

0x5c8e,	// (0x000349c3) popup_sp_fs_cale_preview_window_ParamLimits

0x3f82,	// (0x00032cb7) list_recal_day_pane

0x5e40,	// (0x00034b75) list_single_recal_day_pane_ParamLimits

0x5e40,	// (0x00034b75) list_single_recal_day_pane

0x3fd6,	// (0x00032d0b) list_single_recal_day_pane_g1_ParamLimits

0x3fd6,	// (0x00032d0b) list_single_recal_day_pane_g1

0x5e52,	// (0x00034b87) list_single_recal_day_pane_g2_ParamLimits

0x5e52,	// (0x00034b87) list_single_recal_day_pane_g2

0x5e5e,	// (0x00034b93) list_single_recal_day_pane_g3_ParamLimits

0x5e5e,	// (0x00034b93) list_single_recal_day_pane_g3

0x5e6a,	// (0x00034b9f) list_single_recal_day_pane_g4_ParamLimits

0x5e6a,	// (0x00034b9f) list_single_recal_day_pane_g4

0x5e78,	// (0x00034bad) list_single_recal_day_pane_g5_ParamLimits

0x5e78,	// (0x00034bad) list_single_recal_day_pane_g5

0x5e8e,	// (0x00034bc3) list_single_recal_day_pane_g6_ParamLimits

0x5e8e,	// (0x00034bc3) list_single_recal_day_pane_g6

0x0004,

0xfd40,	// (0x0003ea75) list_single_recal_day_pane_g_ParamLimits

0xfd40,	// (0x0003ea75) list_single_recal_day_pane_g

0x5ea2,	// (0x00034bd7) list_single_recal_day_pane_t1

0x5eb4,	// (0x00034be9) list_single_recal_day_pane_t2

0x0001,

0xfd4b,	// (0x0003ea80) list_single_recal_day_pane_t

0xc9d3,	// (0x0003b708) ncimui_query_button_pane_ParamLimits

0xc9d3,	// (0x0003b708) ncimui_query_button_pane

0xc9e3,	// (0x0003b718) ncimui_query_button_pane_t1_ParamLimits

0xc9e3,	// (0x0003b718) ncimui_query_button_pane_t1

0x403e,	// (0x00032d73) ncimui_query_button_pane_t2_ParamLimits

0x403e,	// (0x00032d73) ncimui_query_button_pane_t2

0x0001,

0xfd50,	// (0x0003ea85) ncimui_query_button_pane_t_ParamLimits

0xfd50,	// (0x0003ea85) ncimui_query_button_pane_t

0xc9f6,	// (0x0003b72b) query_button_pane_ParamLimits

0xc9f6,	// (0x0003b72b) query_button_pane

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp0028

0x4051,	// (0x00032d86) query_button_pane_t1

0x8e3d,	// (0x00037b72) main_tport_pane_ParamLimits

0xc55c,	// (0x0003b291) bg_popup_window_pane_cp01_ParamLimits

0xc55c,	// (0x0003b291) bg_popup_window_pane_cp01

0xc56a,	// (0x0003b29f) heading_pane_cp08_ParamLimits

0xc56a,	// (0x0003b29f) heading_pane_cp08

0xc578,	// (0x0003b2ad) heading_pane_cp07_ParamLimits

0xc578,	// (0x0003b2ad) heading_pane_cp07

0xc5e7,	// (0x0003b31c) cell_tport_appsw_pane_g2

0x0002,

0xfc9c,	// (0x0003e9d1) cell_tport_appsw_pane_g

0x5352,	// (0x00034087) input_candi_list_open_g1

0xe60c,	// (0x0003d341) list_cale_time_pane_g6_ParamLimits

0xe60c,	// (0x0003d341) list_cale_time_pane_g6

0x92de,	// (0x00038013) aid_size_touch_calib_1_ParamLimits

0x92de,	// (0x00038013) aid_size_touch_calib_1

0x92ea,	// (0x0003801f) aid_size_touch_calib_2_ParamLimits

0x92ea,	// (0x0003801f) aid_size_touch_calib_2

0x92f8,	// (0x0003802d) aid_size_touch_calib_3_ParamLimits

0x92f8,	// (0x0003802d) aid_size_touch_calib_3

0x9308,	// (0x0003803d) aid_size_touch_calib_4_ParamLimits

0x9308,	// (0x0003803d) aid_size_touch_calib_4

0x9316,	// (0x0003804b) main_touch_calib_button_group_pane_ParamLimits

0x9316,	// (0x0003804b) main_touch_calib_button_group_pane

0x9324,	// (0x00038059) main_touch_calib_pane_g1_ParamLimits

0x9330,	// (0x00038065) main_touch_calib_pane_g2_ParamLimits

0x933c,	// (0x00038071) main_touch_calib_pane_g3_ParamLimits

0x9348,	// (0x0003807d) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x0003e413) main_touch_calib_pane_g_ParamLimits

0x9354,	// (0x00038089) main_touch_calib_pane_t1_ParamLimits

0x936d,	// (0x000380a2) main_touch_calib_pane_t2_ParamLimits

0x9386,	// (0x000380bb) main_touch_calib_pane_t3_ParamLimits

0x939c,	// (0x000380d1) main_touch_calib_pane_t4_ParamLimits

0x93b2,	// (0x000380e7) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x0003e41c) main_touch_calib_pane_t_ParamLimits

0x1d3b,	// (0x00030a70) list_single_fp_cale_pane_g3_ParamLimits

0x1d3b,	// (0x00030a70) list_single_fp_cale_pane_g3

0xdf69,	// (0x0003cc9e) bg_button_pane_cp012_ParamLimits

0xdf69,	// (0x0003cc9e) bg_vkb2_func_pane_cp03_ParamLimits

0xb0f3,	// (0x00039e28) cell_vitu2_function_top_pane_g1_ParamLimits

0xdf69,	// (0x0003cc9e) bg_vkb2_func_pane_cp04_ParamLimits

0xbda1,	// (0x0003aad6) main_ncimui_button_group_pane_ParamLimits

0xbda1,	// (0x0003aad6) main_ncimui_button_group_pane

0xbe07,	// (0x0003ab3c) main_ncimui_pane_t3_ParamLimits

0xbe07,	// (0x0003ab3c) main_ncimui_pane_t3

0x3c52,	// (0x00032987) phacti_button_group_pane

0x3f50,	// (0x00032c85) aid_size_list_single_double_ParamLimits

0xc94c,	// (0x0003b681) popup_ezdial_listscroll_window_ParamLimits

0xc96d,	// (0x0003b6a2) popup_number_entry_window_cp01_ParamLimits

0xca03,	// (0x0003b738) phacti_button_pane_ParamLimits

0xca03,	// (0x0003b738) phacti_button_pane

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp14

0x405f,	// (0x00032d94) phacti_button_pane_t1

0xca14,	// (0x0003b749) main_touch_calib_button_pane_ParamLimits

0xca14,	// (0x0003b749) main_touch_calib_button_pane

0xe034,	// (0x0003cd69) bg_button_pane_cp18_ParamLimits

0xe034,	// (0x0003cd69) bg_button_pane_cp18

0x406d,	// (0x00032da2) main_touch_calib_button_pane_t1_ParamLimits

0x406d,	// (0x00032da2) main_touch_calib_button_pane_t1

0x4083,	// (0x00032db8) main_touch_calib_button_pane_t2_ParamLimits

0x4083,	// (0x00032db8) main_touch_calib_button_pane_t2

0x0001,

0xfd55,	// (0x0003ea8a) main_touch_calib_button_pane_t_ParamLimits

0xfd55,	// (0x0003ea8a) main_touch_calib_button_pane_t

0xd8c1,	// (0x0003c5f6) cell_ncimui_button_pane

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp032

0x40a1,	// (0x00032dd6) cell_ncimui_button_pane_t1

0xa32c,	// (0x00039061) image3_infobar_pane_ParamLimits

0xa32c,	// (0x00039061) image3_infobar_pane

0xc1c4,	// (0x0003aef9) fs_bigclock_status_pane_ParamLimits

0xc1c4,	// (0x0003aef9) fs_bigclock_status_pane

0xc1d1,	// (0x0003af06) main_fs_bigclock_clock_pane_ParamLimits

0xc1d1,	// (0x0003af06) main_fs_bigclock_clock_pane

0xc1e5,	// (0x0003af1a) main_fs_bigclock_indi_pane_ParamLimits

0xc1e5,	// (0x0003af1a) main_fs_bigclock_indi_pane

0xc20d,	// (0x0003af42) main_fs_bigclock_swipe_pane_ParamLimits

0xc20d,	// (0x0003af42) main_fs_bigclock_swipe_pane

0xd8c1,	// (0x0003c5f6) main_fs_clock_dumped_data

0x35c5,	// (0x000322fa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x35c5,	// (0x000322fa) list_single_fs_bigclock_indicator_pane_g1

0x35e0,	// (0x00032315) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x35e0,	// (0x00032315) list_single_fs_bigclock_indicator_pane_g2

0x35fa,	// (0x0003232f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x35fa,	// (0x0003232f) list_single_fs_bigclock_indicator_pane_g3

0x3614,	// (0x00032349) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3614,	// (0x00032349) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf6,	// (0x0003e92b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf6,	// (0x0003e92b) list_single_fs_bigclock_indicator_pane_g

0x363f,	// (0x00032374) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x363f,	// (0x00032374) list_single_fs_bigclock_indicator_pane_t1

0x3667,	// (0x0003239c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3667,	// (0x0003239c) list_single_fs_bigclock_indicator_pane_t2

0x368f,	// (0x000323c4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x368f,	// (0x000323c4) list_single_fs_bigclock_indicator_pane_t3

0x36b7,	// (0x000323ec) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x36b7,	// (0x000323ec) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc01,	// (0x0003e936) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc01,	// (0x0003e936) list_single_fs_bigclock_indicator_pane_t

0x40af,	// (0x00032de4) image3_infobar_fav_pane_ParamLimits

0x40af,	// (0x00032de4) image3_infobar_fav_pane

0x40bf,	// (0x00032df4) image3_infobar_loc_pane_ParamLimits

0x40bf,	// (0x00032df4) image3_infobar_loc_pane

0x40d3,	// (0x00032e08) image3_infobar_time_pane_ParamLimits

0x40d3,	// (0x00032e08) image3_infobar_time_pane

0xe21c,	// (0x0003cf51) image3_infobar_time_pane_g1

0x40e3,	// (0x00032e18) image3_infobar_time_pane_t1

0xe21c,	// (0x0003cf51) image3_infobar_loc_pane_g1

0x40f1,	// (0x00032e26) image3_infobar_loc_pane_g2

0x0001,

0xfd5a,	// (0x0003ea8f) image3_infobar_loc_pane_g

0x40f9,	// (0x00032e2e) image3_infobar_loc_pane_t1

0xe21c,	// (0x0003cf51) image3_infobar_fav_pane_g1

0x4107,	// (0x00032e3c) image3_infobar_fav_pane_g2

0x0001,

0xfd5f,	// (0x0003ea94) image3_infobar_fav_pane_g

0x410f,	// (0x00032e44) fs_bigclock_status_battery_pane

0x4118,	// (0x00032e4d) fs_bigclock_status_signal_pane

0x4121,	// (0x00032e56) fs_bigclock_status_title_pane

0x412a,	// (0x00032e5f) fs_bigclock_status_signal_pane_g1

0x4133,	// (0x00032e68) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd64,	// (0x0003ea99) fs_bigclock_status_signal_pane_g

0x413b,	// (0x00032e70) fs_bigclock_status_battery_pane_g1

0x4144,	// (0x00032e79) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd69,	// (0x0003ea9e) fs_bigclock_status_battery_pane_g

0x414c,	// (0x00032e81) fs_bigclock_status_title_pane_t1

0xca24,	// (0x0003b759) main_fs_bigclock_clock_pane_g1

0xca24,	// (0x0003b759) main_fs_bigclock_clock_pane_g2

0xca31,	// (0x0003b766) main_fs_bigclock_clock_pane_g3

0xca31,	// (0x0003b766) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd6e,	// (0x0003eaa3) main_fs_bigclock_clock_pane_g

0xca3d,	// (0x0003b772) main_fs_bigclock_clock_pane_t1

0xca50,	// (0x0003b785) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd77,	// (0x0003eaac) main_fs_bigclock_clock_pane_t

0x415a,	// (0x00032e8f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x415a,	// (0x00032e8f) list_single_fs_bigclock_indicator_pane

0x416b,	// (0x00032ea0) list_single_fs_bigclock_pane_ParamLimits

0x416b,	// (0x00032ea0) list_single_fs_bigclock_pane

0x4191,	// (0x00032ec6) main_fs_bigclock_indicator_pane_t1

0x41a0,	// (0x00032ed5) list_single_fs_bigclock_pane_g1

0x41a8,	// (0x00032edd) list_single_fs_bigclock_pane_t1

0xe21c,	// (0x0003cf51) main_fs_bigclock_swipe_pane_g1

0x41eb,	// (0x00032f20) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd88,	// (0x0003eabd) main_fs_bigclock_swipe_pane_g

0x41f3,	// (0x00032f28) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x41f3,	// (0x00032f28) main_fs_bigclock_swipe_pane_t1

0x80de,	// (0x00036e13) call_type_pane_ParamLimits

0xd8c1,	// (0x0003c5f6) main_btmg_pane

0x5d07,	// (0x00034a3c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5d07,	// (0x00034a3c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcfb,	// (0x0003ea30) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcfb,	// (0x0003ea30) list_single_cale_mrui_row_pane_g

0x5e2f,	// (0x00034b64) list_recal_vselct_arw_lo_pane

0x3fb3,	// (0x00032ce8) list_recal_vselct_arw_up_pane

0x5e37,	// (0x00034b6c) list_recal_vselct_pane

0xcaa7,	// (0x0003b7dc) btmg_button_pane

0xcab3,	// (0x0003b7e8) main_btmg_pane_g1

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp044

0x4210,	// (0x00032f45) btmg_button_pane_t1

0x14d6,	// (0x0003020b) aid_listscroll_gen

0xdf69,	// (0x0003cc9e) main_cntbar_detail_pane

0x3b1b,	// (0x00032850) list_cmail_folder_pane

0x04f1,	// (0x0002f226) sp_fs_scroll_pane_cp03_ParamLimits

0x5ec6,	// (0x00034bfb) list_single_fs_dyc_pane_cp01_ParamLimits

0x5ec6,	// (0x00034bfb) list_single_fs_dyc_pane_cp01

0x421e,	// (0x00032f53) aid_size_cmail_indent

0x5ef2,	// (0x00034c27) list_single_dyc_row_pane_cp01

0xcadb,	// (0x0003b810) cntbar_detail_list_pane_ParamLimits

0xcadb,	// (0x0003b810) cntbar_detail_list_pane

0xcb15,	// (0x0003b84a) main_cntbar_detail_cont_pane_ParamLimits

0xcb15,	// (0x0003b84a) main_cntbar_detail_cont_pane

0x80d2,	// (0x00036e07) scroll_pane_cp032_ParamLimits

0x80d2,	// (0x00036e07) scroll_pane_cp032

0xcb21,	// (0x0003b856) cntbar_detail_list_event_pane_ParamLimits

0xcb21,	// (0x0003b856) cntbar_detail_list_event_pane

0xcae7,	// (0x0003b81c) cntbar_detail_list_shct_pane

0xe48f,	// (0x0003d1c4) aid_list_gen

0x4230,	// (0x00032f65) aid_scroll

0x4239,	// (0x00032f6e) aid_size_touch_scroll_bar

0x5efb,	// (0x00034c30) aid_list_double

0x5f04,	// (0x00034c39) aid_list_single

0x4242,	// (0x00032f77) aid_list_single_lg

0x5f0d,	// (0x00034c42) aid_list_z_g_a_sm

0x5f15,	// (0x00034c4a) aid_list_z_g_d

0x5f1d,	// (0x00034c52) aid_txt_z_prm

0x5f2b,	// (0x00034c60) aid_txt_z_prm_cp01

0x5f39,	// (0x00034c6e) aid_txt_z_sec

0xcb35,	// (0x0003b86a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcb35,	// (0x0003b86a) main_cntbar_detail_cont_pane_g1

0xcb42,	// (0x0003b877) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcb42,	// (0x0003b877) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd8d,	// (0x0003eac2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd8d,	// (0x0003eac2) main_cntbar_detail_cont_pane_g

0x4269,	// (0x00032f9e) main_cntbar_detail_cont_pane_t1

0x4277,	// (0x00032fac) main_cntbar_detail_cont_pane_t2

0x4285,	// (0x00032fba) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd92,	// (0x0003eac7) main_cntbar_detail_cont_pane_t

0xcb4e,	// (0x0003b883) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcb4e,	// (0x0003b883) cell_cntbar_detail_list_shct_pane

0x4293,	// (0x00032fc8) cntbar_detail_list_shct_pane_g1

0x429c,	// (0x00032fd1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd99,	// (0x0003eace) cntbar_detail_list_shct_pane_g

0xcb62,	// (0x0003b897) cntbar_detail_list_event_pane_g1_ParamLimits

0xcb62,	// (0x0003b897) cntbar_detail_list_event_pane_g1

0xcb6e,	// (0x0003b8a3) cntbar_detail_list_event_pane_g2_ParamLimits

0xcb6e,	// (0x0003b8a3) cntbar_detail_list_event_pane_g2

0x0005,

0xfd9e,	// (0x0003ead3) cntbar_detail_list_event_pane_g_ParamLimits

0xfd9e,	// (0x0003ead3) cntbar_detail_list_event_pane_g

0xcbda,	// (0x0003b90f) cntbar_detail_list_event_pane_t1_ParamLimits

0xcbda,	// (0x0003b90f) cntbar_detail_list_event_pane_t1

0xcbef,	// (0x0003b924) cntbar_detail_list_event_pane_t2_ParamLimits

0xcbef,	// (0x0003b924) cntbar_detail_list_event_pane_t2

0x0002,

0xfdab,	// (0x0003eae0) cntbar_detail_list_event_pane_t_ParamLimits

0xfdab,	// (0x0003eae0) cntbar_detail_list_event_pane_t

0xe21c,	// (0x0003cf51) cell_cntbar_detail_list_shct_pane_g1

0xec06,	// (0x0003d93b) navi_pane_mv_g3

0xdf69,	// (0x0003cc9e) main_cntbar_detail_pane_ParamLimits

0xd8c1,	// (0x0003c5f6) main_notif_wgt_pane

0x9fb6,	// (0x00038ceb) aid_tch_main_mp4_pane_g4

0xa215,	// (0x00038f4a) popup_slider_window_cp02

0x5e25,	// (0x00034b5a) list_recal_day_event_pane

0xcabb,	// (0x0003b7f0) cntbar_detail_btn_pane_ParamLimits

0xcabb,	// (0x0003b7f0) cntbar_detail_btn_pane

0xcacb,	// (0x0003b800) cntbar_detail_btn_pane_cp01_ParamLimits

0xcacb,	// (0x0003b800) cntbar_detail_btn_pane_cp01

0xcae7,	// (0x0003b81c) cntbar_detail_list_shct_pane_ParamLimits

0xcaf3,	// (0x0003b828) cntbar_detail_pane_g1_ParamLimits

0xcaf3,	// (0x0003b828) cntbar_detail_pane_g1

0xcaff,	// (0x0003b834) cntbar_detail_pane_t1_ParamLimits

0xcaff,	// (0x0003b834) cntbar_detail_pane_t1

0xcb7a,	// (0x0003b8af) cntbar_detail_list_event_pane_g3_ParamLimits

0xcb7a,	// (0x0003b8af) cntbar_detail_list_event_pane_g3

0xcb92,	// (0x0003b8c7) cntbar_detail_list_event_pane_g4_ParamLimits

0xcb92,	// (0x0003b8c7) cntbar_detail_list_event_pane_g4

0xcbaa,	// (0x0003b8df) cntbar_detail_list_event_pane_g5_ParamLimits

0xcbaa,	// (0x0003b8df) cntbar_detail_list_event_pane_g5

0xcbc2,	// (0x0003b8f7) cntbar_detail_list_event_pane_g6_ParamLimits

0xcbc2,	// (0x0003b8f7) cntbar_detail_list_event_pane_g6

0xcc04,	// (0x0003b939) cntbar_detail_list_event_pane_t3_ParamLimits

0xcc04,	// (0x0003b939) cntbar_detail_list_event_pane_t3

0xcc16,	// (0x0003b94b) popup_notif_wgt_window_ParamLimits

0xcc16,	// (0x0003b94b) popup_notif_wgt_window

0xcc26,	// (0x0003b95b) popup_submenu_window_cp01_ParamLimits

0xcc26,	// (0x0003b95b) popup_submenu_window_cp01

0xe1e6,	// (0x0003cf1b) bg_popup_window_pane_cp10

0x42a5,	// (0x00032fda) listscroll_notif_wgt_pane

0x42b7,	// (0x00032fec) list_notif_wgt_window

0x42c0,	// (0x00032ff5) scroll_pane_cp033

0xcc38,	// (0x0003b96d) list_notif_wgt_row_pane_ParamLimits

0xcc38,	// (0x0003b96d) list_notif_wgt_row_pane

0x42c9,	// (0x00032ffe) aid_size_list_notif_wgt_del

0x42d6,	// (0x0003300b) list_notif_wgt_row_pane_g1

0x42e2,	// (0x00033017) list_notif_wgt_row_pane_g2

0x42f1,	// (0x00033026) list_notif_wgt_row_pane_g3

0x0002,

0xfdb2,	// (0x0003eae7) list_notif_wgt_row_pane_g

0x42fe,	// (0x00033033) list_notif_wgt_row_pane_t1

0x4314,	// (0x00033049) list_notif_wgt_row_pane_t2

0x4326,	// (0x0003305b) list_notif_wgt_row_pane_t3

0x0002,

0xfdb9,	// (0x0003eaee) list_notif_wgt_row_pane_t

0x29a6,	// (0x000316db) list_recal_day_event_pane_g1

0x4338,	// (0x0003306d) list_recal_day_event_pane_t1

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp045

0x4347,	// (0x0003307c) cntbar_detail_btn_pane_t1

0xf022,	// (0x0003dd57) main_callh_pane_ParamLimits

0xf022,	// (0x0003dd57) main_callh_pane

0xd8c1,	// (0x0003c5f6) main_coverflow0_pane

0xd8c1,	// (0x0003c5f6) main_wgtman_pane

0xc225,	// (0x0003af5a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc225,	// (0x0003af5a) main_fs_bigclock_unlock_btn_pane

0xc5df,	// (0x0003b314) bg_button_pane_cp16

0xc5ef,	// (0x0003b324) cell_tport_appsw_pane_g3

0xcc4a,	// (0x0003b97f) cf0_flow_pane_ParamLimits

0xcc4a,	// (0x0003b97f) cf0_flow_pane

0x4355,	// (0x0003308a) listscroll_cf0_pane

0x4360,	// (0x00033095) main_cf0_pane_g1

0xcc59,	// (0x0003b98e) main_cf0_pane_t1_ParamLimits

0xcc59,	// (0x0003b98e) main_cf0_pane_t1

0xcc6d,	// (0x0003b9a2) main_cf0_pane_t2_ParamLimits

0xcc6d,	// (0x0003b9a2) main_cf0_pane_t2

0x0001,

0xfdc5,	// (0x0003eafa) main_cf0_pane_t_ParamLimits

0xfdc5,	// (0x0003eafa) main_cf0_pane_t

0x4372,	// (0x000330a7) scroll_pane_cp11

0xcc81,	// (0x0003b9b6) cf0_flow_pane_g1

0xcc89,	// (0x0003b9be) cf0_flow_pane_g2

0x0001,

0xfdca,	// (0x0003eaff) cf0_flow_pane_g

0xcc91,	// (0x0003b9c6) cf0_flow_pane_t1

0xd8c1,	// (0x0003c5f6) main_call6_pane

0xd8c1,	// (0x0003c5f6) main_calllock_pane

0xcc9f,	// (0x0003b9d4) call6_btn_grp_pane_ParamLimits

0xcc9f,	// (0x0003b9d4) call6_btn_grp_pane

0xccae,	// (0x0003b9e3) call6_pane_g1_ParamLimits

0xccae,	// (0x0003b9e3) call6_pane_g1

0xccbe,	// (0x0003b9f3) popup_call6_1st_window_ParamLimits

0xccbe,	// (0x0003b9f3) popup_call6_1st_window

0xcccc,	// (0x0003ba01) popup_call6_2nd_window_ParamLimits

0xcccc,	// (0x0003ba01) popup_call6_2nd_window

0xccda,	// (0x0003ba0f) cell_call6_btn_pane_ParamLimits

0xccda,	// (0x0003ba0f) cell_call6_btn_pane

0xe1e6,	// (0x0003cf1b) bg_popup_call2_in_pane_cp03

0x437d,	// (0x000330b2) popup_call6_1st_window_g1

0x4385,	// (0x000330ba) popup_call6_1st_window_g2

0x438d,	// (0x000330c2) popup_call6_1st_window_g3

0x0002,

0xfdcf,	// (0x0003eb04) popup_call6_1st_window_g

0x4395,	// (0x000330ca) popup_call6_1st_window_t1

0x43a4,	// (0x000330d9) popup_call6_1st_window_t2

0x43b2,	// (0x000330e7) popup_call6_1st_window_t3

0x0002,

0xfdd6,	// (0x0003eb0b) popup_call6_1st_window_t

0xe1e6,	// (0x0003cf1b) bg_popup_call2_in_pane_cp04

0x43c0,	// (0x000330f5) popup_call6_2nd_window_g1

0x43c8,	// (0x000330fd) popup_call6_2nd_window_g2

0x43d0,	// (0x00033105) popup_call6_2nd_window_g3

0x0002,

0xfddd,	// (0x0003eb12) popup_call6_2nd_window_g

0x43d8,	// (0x0003310d) popup_call6_2nd_window_t1

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp15

0x4432,	// (0x00033167) cell_call6_btn_pane_g1

0xcce9,	// (0x0003ba1e) cell_call6_btn_pane_t1

0xccf8,	// (0x0003ba2d) listscroll_wgtman_pane_ParamLimits

0xccf8,	// (0x0003ba2d) listscroll_wgtman_pane

0xcd14,	// (0x0003ba49) wgtman_btn_pane_ParamLimits

0xcd14,	// (0x0003ba49) wgtman_btn_pane

0xea0d,	// (0x0003d742) aid_scroll_copy1

0x43ff,	// (0x00033134) list_wgtman_pane

0xcd49,	// (0x0003ba7e) wgtman_btn_pane_g1_ParamLimits

0xcd49,	// (0x0003ba7e) wgtman_btn_pane_g1

0xcd71,	// (0x0003baa6) wgtman_btn_pane_t1_ParamLimits

0xcd71,	// (0x0003baa6) wgtman_btn_pane_t1

0x4409,	// (0x0003313e) wgtman_btn_pane_t2_ParamLimits

0x4409,	// (0x0003313e) wgtman_btn_pane_t2

0x0001,

0xfde4,	// (0x0003eb19) wgtman_btn_pane_t_ParamLimits

0xfde4,	// (0x0003eb19) wgtman_btn_pane_t

0xcda8,	// (0x0003badd) listrow_wgtman_pane_ParamLimits

0xcda8,	// (0x0003badd) listrow_wgtman_pane

0xcdc3,	// (0x0003baf8) listrow_wgtman_pane_g1

0xcdd0,	// (0x0003bb05) listrow_wgtman_pane_g2

0x0001,

0xfde9,	// (0x0003eb1e) listrow_wgtman_pane_g

0x5f47,	// (0x00034c7c) listrow_wgtman_pane_t1

0x5f5f,	// (0x00034c94) listrow_wgtman_pane_t2

0x0001,

0xfdee,	// (0x0003eb23) listrow_wgtman_pane_t

0x5f85,	// (0x00034cba) wait_bar_pane_cp09

0x4420,	// (0x00033155) main_calllock_btn_pane

0x442a,	// (0x0003315f) main_calllock_pane_g1

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp17

0x4432,	// (0x00033167) main_calllock_btn_pane_g1

0x443b,	// (0x00033170) main_calllock_btn_pane_t1

0xd8c1,	// (0x0003c5f6) main_dialer3_pane

0xd8c1,	// (0x0003c5f6) main_fmrd2_pane

0xe21c,	// (0x0003cf51) main_fs_bigclock_unlock_btn_pane_g1

0xcdf6,	// (0x0003bb2b) main_fs_bigclock_unlock_btn_pane_t1

0xce04,	// (0x0003bb39) area_fmrd2_info_pane_ParamLimits

0xce04,	// (0x0003bb39) area_fmrd2_info_pane

0xce12,	// (0x0003bb47) area_fmrd2_visual_pane_ParamLimits

0xce12,	// (0x0003bb47) area_fmrd2_visual_pane

0xce20,	// (0x0003bb55) fmrd2_indi_pane_ParamLimits

0xce20,	// (0x0003bb55) fmrd2_indi_pane

0xce2d,	// (0x0003bb62) area_fmrd2_visual_pane_g1

0xce35,	// (0x0003bb6a) area_fmrd2_visual_pane_t1

0xce45,	// (0x0003bb7a) area_fmrd2_visual_pane_t2

0xce55,	// (0x0003bb8a) area_fmrd2_visual_pane_t3

0x0002,

0xfdf8,	// (0x0003eb2d) area_fmrd2_visual_pane_t

0xce65,	// (0x0003bb9a) area_fmrd2_info_pane_g1

0xce6d,	// (0x0003bba2) area_fmrd2_info_pane_t1

0xce7d,	// (0x0003bbb2) area_fmrd2_info_pane_t2

0xce8d,	// (0x0003bbc2) area_fmrd2_info_pane_t3

0xce9d,	// (0x0003bbd2) area_fmrd2_info_pane_t4

0x0003,

0xfdff,	// (0x0003eb34) area_fmrd2_info_pane_t

0xceab,	// (0x0003bbe0) fmrd2_indi_pane_t1

0xcebb,	// (0x0003bbf0) fmrd2_indi_pane_t2

0xcecb,	// (0x0003bc00) fmrd2_indi_pane_t3

0x0002,

0xfe08,	// (0x0003eb3d) fmrd2_indi_pane_t

0x3623,	// (0x00032358) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3623,	// (0x00032358) list_single_fs_bigclock_indicator_pane_g5

0x36d4,	// (0x00032409) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x36d4,	// (0x00032409) list_single_fs_bigclock_indicator_pane_t5

0xc772,	// (0x0003b4a7) aid_cell_bcale_month_pane_ParamLimits

0xc772,	// (0x0003b4a7) aid_cell_bcale_month_pane

0xc790,	// (0x0003b4c5) bcale_month_pane_ParamLimits

0xc790,	// (0x0003b4c5) bcale_month_pane

0xc7ae,	// (0x0003b4e3) bcale_preview_pane_ParamLimits

0xc7ae,	// (0x0003b4e3) bcale_preview_pane

0x41a8,	// (0x00032edd) list_single_fs_bigclock_pane_t1_ParamLimits

0x41c7,	// (0x00032efc) list_single_fs_bigclock_pane_t2_ParamLimits

0x41c7,	// (0x00032efc) list_single_fs_bigclock_pane_t2

0x0001,

0xfd83,	// (0x0003eab8) list_single_fs_bigclock_pane_t_ParamLimits

0xfd83,	// (0x0003eab8) list_single_fs_bigclock_pane_t

0xcdee,	// (0x0003bb23) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdf3,	// (0x0003eb28) main_fs_bigclock_unlock_btn_pane_g

0xced9,	// (0x0003bc0e) aid_dia3_key_size_ParamLimits

0xced9,	// (0x0003bc0e) aid_dia3_key_size

0xcee5,	// (0x0003bc1a) aid_dia3_listrow_size_ParamLimits

0xcee5,	// (0x0003bc1a) aid_dia3_listrow_size

0xcef5,	// (0x0003bc2a) dia3_keypad_fun_pane_ParamLimits

0xcef5,	// (0x0003bc2a) dia3_keypad_fun_pane

0xcf07,	// (0x0003bc3c) dia3_keypad_num_pane_ParamLimits

0xcf07,	// (0x0003bc3c) dia3_keypad_num_pane

0xcf19,	// (0x0003bc4e) dia3_listscroll_pane_ParamLimits

0xcf19,	// (0x0003bc4e) dia3_listscroll_pane

0xcf27,	// (0x0003bc5c) dia3_numentry_pane_ParamLimits

0xcf27,	// (0x0003bc5c) dia3_numentry_pane

0x444a,	// (0x0003317f) dia3_list_pane

0x4455,	// (0x0003318a) scroll_pane_cp12

0xd8c1,	// (0x0003c5f6) bg_dia3_numentry_pane

0xcf35,	// (0x0003bc6a) dia3_numentry_pane_t1

0xcf44,	// (0x0003bc79) cell_dia3_key_num_pane

0xcf4c,	// (0x0003bc81) cell_dia3_key0_fun_pane_ParamLimits

0xcf4c,	// (0x0003bc81) cell_dia3_key0_fun_pane

0xcf59,	// (0x0003bc8e) cell_dia3_key1_fun_pane_ParamLimits

0xcf59,	// (0x0003bc8e) cell_dia3_key1_fun_pane

0xcf66,	// (0x0003bc9b) dia3_listrow_pane

0x3376,	// (0x000320ab) bg_dia3_numentry_pane_g1

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp21

0x4460,	// (0x00033195) cell_dia3_key_num_pane_t1

0x446e,	// (0x000331a3) cell_dia3_key_num_pane_t2

0x447d,	// (0x000331b2) cell_dia3_key_num_pane_t3

0x448c,	// (0x000331c1) cell_dia3_key_num_pane_t4

0x0003,

0xfe0f,	// (0x0003eb44) cell_dia3_key_num_pane_t

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp19

0xcf73,	// (0x0003bca8) cell_dia3_key0_fun_pane_g1

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp20

0xcf7b,	// (0x0003bcb0) cell_dia3_key1_fun_pane_g1

0xcf83,	// (0x0003bcb8) area_left_week_number_pane

0xcf96,	// (0x0003bccb) area_top_day_name_pane

0xcfa4,	// (0x0003bcd9) frame_month_view_pane

0x449b,	// (0x000331d0) grid_month_view_pane

0xcfb9,	// (0x0003bcee) cell_top_day_name_pane_ParamLimits

0xcfb9,	// (0x0003bcee) cell_top_day_name_pane

0xcfd3,	// (0x0003bd08) cell_area_left_week_number_pane_ParamLimits

0xcfd3,	// (0x0003bd08) cell_area_left_week_number_pane

0xcff6,	// (0x0003bd2b) cell_month_view_pane_ParamLimits

0xcff6,	// (0x0003bd2b) cell_month_view_pane

0x44a9,	// (0x000331de) frm_month_g1

0xd022,	// (0x0003bd57) frm_month_g2

0xd033,	// (0x0003bd68) frm_month_g3

0xd044,	// (0x0003bd79) frm_month_g4

0xd055,	// (0x0003bd8a) frm_month_g5

0xd068,	// (0x0003bd9d) frm_month_g6

0xd07b,	// (0x0003bdb0) frm_month_g7

0x44b6,	// (0x000331eb) frm_month_g8

0xd08e,	// (0x0003bdc3) frm_month_g9

0xd09b,	// (0x0003bdd0) frm_month_g10

0xd0a8,	// (0x0003bddd) frm_month_g11

0xd0b5,	// (0x0003bdea) frm_month_g12

0xd0c2,	// (0x0003bdf7) frm_month_g13

0xd0cf,	// (0x0003be04) frm_month_g14

0xd0de,	// (0x0003be13) frm_month_g15

0xd0ed,	// (0x0003be22) frm_month_g16

0x000f,

0xfe18,	// (0x0003eb4d) frm_month_g

0x44c3,	// (0x000331f8) cell_top_day_name_pane_t1

0xd0fc,	// (0x0003be31) cell_area_left_week_number_pane_g1

0xd10b,	// (0x0003be40) cell_area_left_week_number_pane_t1

0xdfc2,	// (0x0003ccf7) cell_month_view_pane_g1

0xd121,	// (0x0003be56) cell_month_view_pane_t1

0xd8c1,	// (0x0003c5f6) main_fps_pane

0x3935,	// (0x0003266a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3935,	// (0x0003266a) cmail_ddmenu_btn02_pane_cp1

0x3951,	// (0x00032686) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3951,	// (0x00032686) cmail_ddmenu_btn02_pane_cp2

0xc9a3,	// (0x0003b6d8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc9a3,	// (0x0003b6d8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd36,	// (0x0003ea6b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd36,	// (0x0003ea6b) cmail_ddmenu_btn02_pane_g

0xc9c1,	// (0x0003b6f6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc9c1,	// (0x0003b6f6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd3b,	// (0x0003ea70) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd3b,	// (0x0003ea70) cmail_ddmenu_btn02_pane_t

0xd137,	// (0x0003be6c) fps_text_pane_ParamLimits

0xd137,	// (0x0003be6c) fps_text_pane

0xd144,	// (0x0003be79) main_fps_pane_g1_ParamLimits

0xd144,	// (0x0003be79) main_fps_pane_g1

0xd152,	// (0x0003be87) wait_bar_pane_cp010_ParamLimits

0xd152,	// (0x0003be87) wait_bar_pane_cp010

0xd15e,	// (0x0003be93) fps_text_pane_t1_ParamLimits

0xd15e,	// (0x0003be93) fps_text_pane_t1

0xa6c0,	// (0x000393f5) cam4_image_uncrop_pane_g1

0xa6c9,	// (0x000393fe) cam4_image_uncrop_pane_g2

0xa6d2,	// (0x00039407) cam4_image_uncrop_pane_g3

0xa6db,	// (0x00039410) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x0003e5af) cam4_image_uncrop_pane_g

0xcf66,	// (0x0003bc9b) dia3_listrow_pane_ParamLimits

0xd8c1,	// (0x0003c5f6) main_phob2_pane

0xc5c1,	// (0x0003b2f6) cell_tport_appsw_pane_cp02_ParamLimits

0xc5c1,	// (0x0003b2f6) cell_tport_appsw_pane_cp02

0xc5d0,	// (0x0003b305) cell_tport_appsw_pane_cp03_ParamLimits

0xc5d0,	// (0x0003b305) cell_tport_appsw_pane_cp03

0xd8c1,	// (0x0003c5f6) phob2_contact_card_pane

0xd8c1,	// (0x0003c5f6) phob2_listscroll_pane

0x44d6,	// (0x0003320b) phob2_list_pane

0x44de,	// (0x00033213) scroll_pane_cp034

0xd177,	// (0x0003beac) phob2_cc_data_pane_ParamLimits

0xd177,	// (0x0003beac) phob2_cc_data_pane

0xd191,	// (0x0003bec6) phob2_cc_listscroll_pane_ParamLimits

0xd191,	// (0x0003bec6) phob2_cc_listscroll_pane

0xcda8,	// (0x0003badd) list_double_large_graphic_phob2_pane_ParamLimits

0xcda8,	// (0x0003badd) list_double_large_graphic_phob2_pane

0xd1ab,	// (0x0003bee0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd1ab,	// (0x0003bee0) list_double_large_graphic_phob2_pane_g1

0x5f97,	// (0x00034ccc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5f97,	// (0x00034ccc) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe39,	// (0x0003eb6e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe39,	// (0x0003eb6e) list_double_large_graphic_phob2_pane_g

0x5fbd,	// (0x00034cf2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5fbd,	// (0x00034cf2) list_double_large_graphic_phob2_pane_t1

0x5fd2,	// (0x00034d07) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5fd2,	// (0x00034d07) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe42,	// (0x0003eb77) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe42,	// (0x0003eb77) list_double_large_graphic_phob2_pane_t

0xd8c1,	// (0x0003c5f6) list_highlight_pane_cp024

0x44e6,	// (0x0003321b) phob2_cc_button_pane

0xd1b8,	// (0x0003beed) phob2_cc_data_pane_g1_ParamLimits

0xd1b8,	// (0x0003beed) phob2_cc_data_pane_g1

0xd1c7,	// (0x0003befc) phob2_cc_data_pane_g2_ParamLimits

0xd1c7,	// (0x0003befc) phob2_cc_data_pane_g2

0x0001,

0xfe47,	// (0x0003eb7c) phob2_cc_data_pane_g_ParamLimits

0xfe47,	// (0x0003eb7c) phob2_cc_data_pane_g

0xd1d6,	// (0x0003bf0b) phob2_cc_data_pane_t1_ParamLimits

0xd1d6,	// (0x0003bf0b) phob2_cc_data_pane_t1

0xd1eb,	// (0x0003bf20) phob2_cc_data_pane_t2_ParamLimits

0xd1eb,	// (0x0003bf20) phob2_cc_data_pane_t2

0xd200,	// (0x0003bf35) phob2_cc_data_pane_t3_ParamLimits

0xd200,	// (0x0003bf35) phob2_cc_data_pane_t3

0x0002,

0xfe4c,	// (0x0003eb81) phob2_cc_data_pane_t_ParamLimits

0xfe4c,	// (0x0003eb81) phob2_cc_data_pane_t

0xd215,	// (0x0003bf4a) phob2_cc_list_pane_ParamLimits

0xd215,	// (0x0003bf4a) phob2_cc_list_pane

0x2a3d,	// (0x00031772) scroll_pane_cp035_ParamLimits

0x2a3d,	// (0x00031772) scroll_pane_cp035

0xdf69,	// (0x0003cc9e) bg_button_pane_cp033

0xd221,	// (0x0003bf56) phob2_cc_button_pane_g1

0xd22d,	// (0x0003bf62) phob2_cc_button_pane_t1

0xd242,	// (0x0003bf77) phob2_cc_button_pane_t2

0x0001,

0xfe53,	// (0x0003eb88) phob2_cc_button_pane_t

0xd254,	// (0x0003bf89) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd254,	// (0x0003bf89) list_double_large_graphic_phob2_cc_pane

0xd2c2,	// (0x0003bff7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd2c2,	// (0x0003bff7) list_double_large_graphic_phob2_cc_pane_g1

0x5fe7,	// (0x00034d1c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5fe7,	// (0x00034d1c) list_double_large_graphic_phob2_cc_pane_g2

0x5ff3,	// (0x00034d28) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5ff3,	// (0x00034d28) list_double_large_graphic_phob2_cc_pane_g3

0x5fff,	// (0x00034d34) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5fff,	// (0x00034d34) list_double_large_graphic_phob2_cc_pane_g4

0x600b,	// (0x00034d40) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x600b,	// (0x00034d40) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe58,	// (0x0003eb8d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe58,	// (0x0003eb8d) list_double_large_graphic_phob2_cc_pane_g

0x6017,	// (0x00034d4c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6017,	// (0x00034d4c) list_double_large_graphic_phob2_cc_pane_t1

0x6040,	// (0x00034d75) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6040,	// (0x00034d75) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe63,	// (0x0003eb98) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe63,	// (0x0003eb98) list_double_large_graphic_phob2_cc_pane_t

0xd2d3,	// (0x0003c008) list_highlight_pane_cp025_ParamLimits

0xd2d3,	// (0x0003c008) list_highlight_pane_cp025

0xdf69,	// (0x0003cc9e) bg_button_pane_cp033_ParamLimits

0xd221,	// (0x0003bf56) phob2_cc_button_pane_g1_ParamLimits

0xd22d,	// (0x0003bf62) phob2_cc_button_pane_t1_ParamLimits

0xd242,	// (0x0003bf77) phob2_cc_button_pane_t2_ParamLimits

0xfe53,	// (0x0003eb88) phob2_cc_button_pane_t_ParamLimits

0x635b,	// (0x00035090) popup_wgtman_window

0x27d1,	// (0x00031506) scroll_pane_cp038

0xcd31,	// (0x0003ba66) wgtman_btn_pane_cp_01_ParamLimits

0xcd31,	// (0x0003ba66) wgtman_btn_pane_cp_01

0xd2e1,	// (0x0003c016) wgtman_content_pane

0xd2ea,	// (0x0003c01f) wgtman_heading_pane

0xd8c1,	// (0x0003c5f6) bg_heading_pane_cp02

0xd2f3,	// (0x0003c028) wgtman_heading_pane_g1

0xd2fb,	// (0x0003c030) wgtman_heading_pane_t1

0xd309,	// (0x0003c03e) scroll_pane_cp036

0xd311,	// (0x0003c046) wgtman_list_pane

0xd319,	// (0x0003c04e) wgtman_list_pane_t1_ParamLimits

0xd319,	// (0x0003c04e) wgtman_list_pane_t1

0xa61f,	// (0x00039354) cam4_grid_pane

0x55f4,	// (0x00034329) bg_button_pane_cp015_ParamLimits

0xb2a7,	// (0x00039fdc) bg_button_pane_cp016_ParamLimits

0xb2ba,	// (0x00039fef) bg_button_pane_cp017_ParamLimits

0x5638,	// (0x0003436d) popup_vitu2_query_window_g3_ParamLimits

0x5638,	// (0x0003436d) popup_vitu2_query_window_g3

0x56b3,	// (0x000343e8) popup_vitu2_query_window_t6_ParamLimits

0x56b3,	// (0x000343e8) popup_vitu2_query_window_t6

0x56de,	// (0x00034413) popup_vitu2_query_window_t7_ParamLimits

0x56de,	// (0x00034413) popup_vitu2_query_window_t7

0xd333,	// (0x0003c068) cam4_grid_pane_g1

0xd33c,	// (0x0003c071) cam4_grid_pane_g2

0xd345,	// (0x0003c07a) cam4_grid_pane_g3

0xd34e,	// (0x0003c083) cam4_grid_pane_g4

0x0003,

0xfe68,	// (0x0003eb9d) cam4_grid_pane_g

0x6e95,	// (0x00035bca) aid_placing_vt_slider_lsc_ParamLimits

0x71e1,	// (0x00035f16) vidtel_button_pane_ParamLimits

0x71e1,	// (0x00035f16) vidtel_button_pane

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp034

0xd359,	// (0x0003c08e) vidtel_button_pane_g1

0xd361,	// (0x0003c096) vidtel_button_pane_t1

0x2948,	// (0x0003167d) aid_size_vtel_slider_touch

0x2a3d,	// (0x00031772) scroll_pane_cp039

0xbf62,	// (0x0003ac97) ncim_query_button_pane_cp01_ParamLimits

0xbf81,	// (0x0003acb6) ncimui_query_pane_g1_ParamLimits

0xdf69,	// (0x0003cc9e) input_focus_pane_cp012_ParamLimits

0x33b4,	// (0x000320e9) ncim_query_entry_pane_t1_ParamLimits

0x2a3d,	// (0x00031772) scroll_pane_cp039_ParamLimits

0xeaf1,	// (0x0003d826) navi_pane_bcale_mc_g1

0xeaf9,	// (0x0003d82e) navi_pane_bcale_mc_t1

0x3985,	// (0x000326ba) main_sp_fs_email_pane_g1

0x3991,	// (0x000326c6) main_sp_fs_email_pane_g2

0x0001,

0xfc6b,	// (0x0003e9a0) main_sp_fs_email_pane_g

0x3e32,	// (0x00032b67) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3e32,	// (0x00032b67) list_single_cale_mrui_row_pane_g3

0x5e84,	// (0x00034bb9) list_single_recal_day_pane_g5_event_pane

0x5e9a,	// (0x00034bcf) list_single_recal_day_pane_g7

0xd377,	// (0x0003c0ac) list_recal_day_event_pane_cp01

0xd380,	// (0x0003c0b5) list_recal_vselct_arw_lo_pane_cp01

0xd388,	// (0x0003c0bd) list_recal_vselct_arw_up_pane_cp01

0xd390,	// (0x0003c0c5) list_recal_vselct_pane_cp01

0x29a6,	// (0x000316db) list_recal_day_event_pane_cp01_g1

0x6069,	// (0x00034d9e) list_recal_day_event_pane_cp01_t1

0x5ea2,	// (0x00034bd7) list_single_recal_day_pane_t1_ParamLimits

0x5eb4,	// (0x00034be9) list_single_recal_day_pane_t2_ParamLimits

0xfd4b,	// (0x0003ea80) list_single_recal_day_pane_t_ParamLimits

0xdf47,	// (0x0003cc7c) bg_notes_pane_ParamLimits

0xe012,	// (0x0003cd47) list_notes_pane_ParamLimits

0x655d,	// (0x00035292) scroll_pane_cp06_ParamLimits

0xe034,	// (0x0003cd69) main_notes_pane_ParamLimits

0xdf69,	// (0x0003cc9e) main_welc_pane

0xd3b1,	// (0x0003c0e6) main_welc_body_pane_ParamLimits

0xd3b1,	// (0x0003c0e6) main_welc_body_pane

0xd3cb,	// (0x0003c100) main_welc_opti_pane_ParamLimits

0xd3cb,	// (0x0003c100) main_welc_opti_pane

0xd426,	// (0x0003c15b) main_welc_pane_t1_ParamLimits

0xd426,	// (0x0003c15b) main_welc_pane_t1

0xd53c,	// (0x0003c271) main_welc_body_row_pane_ParamLimits

0xd53c,	// (0x0003c271) main_welc_body_row_pane

0xd8cb,	// (0x0003c600) main_welc_opti_row_pane_ParamLimits

0xd8cb,	// (0x0003c600) main_welc_opti_row_pane

0xd561,	// (0x0003c296) main_welc_opti_row_pane_g1

0xd569,	// (0x0003c29e) main_welc_opti_row_pane_t1

0xd578,	// (0x0003c2ad) main_welc_body_row_pane_t1

0x42af,	// (0x00032fe4) popup_notif_wgt_heading_pane

0x42c9,	// (0x00032ffe) aid_size_list_notif_wgt_del_ParamLimits

0x42d6,	// (0x0003300b) list_notif_wgt_row_pane_g1_ParamLimits

0x42e2,	// (0x00033017) list_notif_wgt_row_pane_g2_ParamLimits

0x42f1,	// (0x00033026) list_notif_wgt_row_pane_g3_ParamLimits

0xfdb2,	// (0x0003eae7) list_notif_wgt_row_pane_g_ParamLimits

0x42fe,	// (0x00033033) list_notif_wgt_row_pane_t1_ParamLimits

0x4314,	// (0x00033049) list_notif_wgt_row_pane_t2_ParamLimits

0x4326,	// (0x0003305b) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb9,	// (0x0003eaee) list_notif_wgt_row_pane_t_ParamLimits

0xcdc3,	// (0x0003baf8) listrow_wgtman_pane_g1_ParamLimits

0xcdd0,	// (0x0003bb05) listrow_wgtman_pane_g2_ParamLimits

0xfde9,	// (0x0003eb1e) listrow_wgtman_pane_g_ParamLimits

0x5f47,	// (0x00034c7c) listrow_wgtman_pane_t1_ParamLimits

0x5f5f,	// (0x00034c94) listrow_wgtman_pane_t2_ParamLimits

0xfdee,	// (0x0003eb23) listrow_wgtman_pane_t_ParamLimits

0x5f85,	// (0x00034cba) wait_bar_pane_cp09_ParamLimits

0xd8c1,	// (0x0003c5f6) bg_popup_heading_pane_cp02

0xd587,	// (0x0003c2bc) popup_notif_wgt_heading_pane_g1

0xd58f,	// (0x0003c2c4) popup_notif_wgt_heading_pane_t1

0xd8c1,	// (0x0003c5f6) main_vids_pane

0xd8c1,	// (0x0003c5f6) vids_listscroll_pane

0xd59d,	// (0x0003c2d2) scroll_pane_cp040

0xd8c1,	// (0x0003c5f6) vids_list_pane

0xd5a8,	// (0x0003c2dd) vids_list_double_pane_ParamLimits

0xd5a8,	// (0x0003c2dd) vids_list_double_pane

0xd5bf,	// (0x0003c2f4) vids_list_double_pane_g1

0xd5c8,	// (0x0003c2fd) vids_list_double_pane_t1

0xd5d8,	// (0x0003c30d) vids_list_double_pane_t2

0x0001,

0xfe87,	// (0x0003ebbc) vids_list_double_pane_t

0xdf69,	// (0x0003cc9e) main_ncimui_pane_ParamLimits

0xbdb9,	// (0x0003aaee) main_ncimui_pane_g1_ParamLimits

0xbdc5,	// (0x0003aafa) main_ncimui_pane_g2_ParamLimits

0xbdc5,	// (0x0003aafa) main_ncimui_pane_g2

0x0001,

0xfb6c,	// (0x0003e8a1) main_ncimui_pane_g_ParamLimits

0xfb6c,	// (0x0003e8a1) main_ncimui_pane_g

0xd3e4,	// (0x0003c119) main_welc_pane_g1_ParamLimits

0xd3e4,	// (0x0003c119) main_welc_pane_g1

0xd3f0,	// (0x0003c125) main_welc_pane_g2_ParamLimits

0xd3f0,	// (0x0003c125) main_welc_pane_g2

0x0003,

0xfe71,	// (0x0003eba6) main_welc_pane_g_ParamLimits

0xfe71,	// (0x0003eba6) main_welc_pane_g

0xdf47,	// (0x0003cc7c) listscroll_mce_pane_ParamLimits

0xec46,	// (0x0003d97b) wait_bar_pane_cp10

0x14de,	// (0x00030213) main_cale_day_pane_ParamLimits

0x14de,	// (0x00030213) main_cale_week_pane_ParamLimits

0xdf47,	// (0x0003cc7c) main_messa_pane_ParamLimits

0x9a74,	// (0x000387a9) main_clock2_btn_pane_ParamLimits

0x9a74,	// (0x000387a9) main_clock2_btn_pane

0x1db5,	// (0x00030aea) main_clock2_btn_pane_cp01_ParamLimits

0x1db5,	// (0x00030aea) main_clock2_btn_pane_cp01

0x3dbe,	// (0x00032af3) list_cale_mrui_pane_ParamLimits

0x436a,	// (0x0003309f) main_cf0_pane_g2

0x0001,

0xfdc0,	// (0x0003eaf5) main_cf0_pane_g

0xcf83,	// (0x0003bcb8) area_left_week_number_pane_ParamLimits

0xcf96,	// (0x0003bccb) area_top_day_name_pane_ParamLimits

0xcfa4,	// (0x0003bcd9) frame_month_view_pane_ParamLimits

0x449b,	// (0x000331d0) grid_month_view_pane_ParamLimits

0x44a9,	// (0x000331de) frm_month_g1_ParamLimits

0xd022,	// (0x0003bd57) frm_month_g2_ParamLimits

0xd033,	// (0x0003bd68) frm_month_g3_ParamLimits

0xd044,	// (0x0003bd79) frm_month_g4_ParamLimits

0xd055,	// (0x0003bd8a) frm_month_g5_ParamLimits

0xd068,	// (0x0003bd9d) frm_month_g6_ParamLimits

0xd07b,	// (0x0003bdb0) frm_month_g7_ParamLimits

0x44b6,	// (0x000331eb) frm_month_g8_ParamLimits

0xd08e,	// (0x0003bdc3) frm_month_g9_ParamLimits

0xd09b,	// (0x0003bdd0) frm_month_g10_ParamLimits

0xd0a8,	// (0x0003bddd) frm_month_g11_ParamLimits

0xd0b5,	// (0x0003bdea) frm_month_g12_ParamLimits

0xd0c2,	// (0x0003bdf7) frm_month_g13_ParamLimits

0xd0cf,	// (0x0003be04) frm_month_g14_ParamLimits

0xd0de,	// (0x0003be13) frm_month_g15_ParamLimits

0xd0ed,	// (0x0003be22) frm_month_g16_ParamLimits

0xfe18,	// (0x0003eb4d) frm_month_g_ParamLimits

0x44c3,	// (0x000331f8) cell_top_day_name_pane_t1_ParamLimits

0xd0fc,	// (0x0003be31) cell_area_left_week_number_pane_g1_ParamLimits

0xd10b,	// (0x0003be40) cell_area_left_week_number_pane_t1_ParamLimits

0xdfc2,	// (0x0003ccf7) cell_month_view_pane_g1_ParamLimits

0xd121,	// (0x0003be56) cell_month_view_pane_t1_ParamLimits

0xdf3f,	// (0x0003cc74) main_clock2_btn_pane_g1

0xd5e6,	// (0x0003c31b) main_clock2_btn_pane_t1

0xdf69,	// (0x0003cc9e) listscroll_cmail_pane_ParamLimits

0x3985,	// (0x000326ba) main_sp_fs_email_pane_g1_ParamLimits

0x3991,	// (0x000326c6) main_sp_fs_email_pane_g2_ParamLimits

0xfc6b,	// (0x0003e9a0) main_sp_fs_email_pane_g_ParamLimits

0x3f82,	// (0x00032cb7) list_recal_day_pane_ParamLimits

0x3f93,	// (0x00032cc8) mian_recal_day_pane_t1

0x5a7b,	// (0x000347b0) list_single_dyc_row_text_pane_t4_ParamLimits

0x5a7b,	// (0x000347b0) list_single_dyc_row_text_pane_t4

0x5ab2,	// (0x000347e7) list_single_dyc_row_text_pane_t5_ParamLimits

0x5ab2,	// (0x000347e7) list_single_dyc_row_text_pane_t5

0x5b28,	// (0x0003485d) list_single_dyc_row_text_pane_t6_ParamLimits

0x5b28,	// (0x0003485d) list_single_dyc_row_text_pane_t6

0xe5eb,	// (0x0003d320) aid_mgn_list_cale_time_pane

0xdf69,	// (0x0003cc9e) main_gallery2_pane_ParamLimits

0x1dcb,	// (0x00030b00) main_clock2_pane_cp01_t1

0x1ddb,	// (0x00030b10) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x0003e486) main_clock2_pane_cp01_t

0x69a4,	// (0x000356d9) cale_week_scroll_pane_g16_ParamLimits

0x69a4,	// (0x000356d9) cale_week_scroll_pane_g16

0xe1e6,	// (0x0003cf1b) vorec_slider_pane

0xd361,	// (0x0003c096) vidtel_button_pane_t1_ParamLimits

0xca24,	// (0x0003b759) main_fs_bigclock_clock_pane_g1_ParamLimits

0xca24,	// (0x0003b759) main_fs_bigclock_clock_pane_g2_ParamLimits

0xca31,	// (0x0003b766) main_fs_bigclock_clock_pane_g3_ParamLimits

0xca31,	// (0x0003b766) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd6e,	// (0x0003eaa3) main_fs_bigclock_clock_pane_g_ParamLimits

0xca3d,	// (0x0003b772) main_fs_bigclock_clock_pane_t1_ParamLimits

0xca50,	// (0x0003b785) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd77,	// (0x0003eaac) main_fs_bigclock_clock_pane_t_ParamLimits

0x9411,	// (0x00038146) main_mup3_lyrics_pane_ParamLimits

0x9411,	// (0x00038146) main_mup3_lyrics_pane

0xd61a,	// (0x0003c34f) main_mup3_lyrics_pane_t1_ParamLimits

0xd61a,	// (0x0003c34f) main_mup3_lyrics_pane_t1

0x9fa0,	// (0x00038cd5) aid_main_mp4_pane_t1_area

0x9faa,	// (0x00038cdf) aid_main_mp4_pane_t2_area

0xa0a9,	// (0x00038dde) main_mp4_pane_g7_ParamLimits

0xa0a9,	// (0x00038dde) main_mp4_pane_g7

0xa0b5,	// (0x00038dea) main_mp4_pane_g8_ParamLimits

0xa0b5,	// (0x00038dea) main_mp4_pane_g8

0xa4c7,	// (0x000391fc) aid_call6_pane_g1_size

0xd296,	// (0x0003bfcb) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd296,	// (0x0003bfcb) list_double_large_graphic_phob2_other_pane

0xe5a3,	// (0x0003d2d8) list_double_large_graphic_phob2_other_pane_g1

0xd8c1,	// (0x0003c5f6) list_highlight_pane_cp026

0xdf69,	// (0x0003cc9e) main_welc_pane_ParamLimits

0xc4c8,	// (0x0003b1fd) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc4c8,	// (0x0003b1fd) main_sp_fs_ctrlbar_pane_g3

0xc4e0,	// (0x0003b215) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc4e0,	// (0x0003b215) main_sp_fs_ctrlbar_pane_g4

0xc512,	// (0x0003b247) toolbar2_fixed_button_pane_cp01

0xc51d,	// (0x0003b252) toolbar2_fixed_button_pane_cp02

0xc528,	// (0x0003b25d) toolbar2_fixed_button_pane_cp03

0xd39a,	// (0x0003c0cf) list_welc_entry_pane_ParamLimits

0xd39a,	// (0x0003c0cf) list_welc_entry_pane

0xd3fe,	// (0x0003c133) main_welc_pane_g3_ParamLimits

0xd3fe,	// (0x0003c133) main_welc_pane_g3

0xd440,	// (0x0003c175) main_welc_pane_t2_ParamLimits

0xd440,	// (0x0003c175) main_welc_pane_t2

0xd454,	// (0x0003c189) main_welc_pane_t3_ParamLimits

0xd454,	// (0x0003c189) main_welc_pane_t3

0x0005,

0xfe7a,	// (0x0003ebaf) main_welc_pane_t_ParamLimits

0xfe7a,	// (0x0003ebaf) main_welc_pane_t

0xd4de,	// (0x0003c213) welc_button_pane_ParamLimits

0xd4de,	// (0x0003c213) welc_button_pane

0xd52e,	// (0x0003c263) welc_service_logo_pane_ParamLimits

0xd52e,	// (0x0003c263) welc_service_logo_pane

0xd64c,	// (0x0003c381) list_single_welc_entry_pane_ParamLimits

0xd64c,	// (0x0003c381) list_single_welc_entry_pane

0xd65d,	// (0x0003c392) list_single_welc_entry_pane_g1

0xd665,	// (0x0003c39a) list_single_welc_entry_pane_t1

0xd673,	// (0x0003c3a8) list_single_welc_entry_pane_t2

0x0001,

0xfe8c,	// (0x0003ebc1) list_single_welc_entry_pane_t

0xd8c1,	// (0x0003c5f6) bg_button_pane_cp035

0xd681,	// (0x0003c3b6) welc_button_pane_t1

0xd68f,	// (0x0003c3c4) welc_service_logo_pane_g1

0xd698,	// (0x0003c3cd) welc_service_logo_pane_g2

0x0001,

0xfe91,	// (0x0003ebc6) welc_service_logo_pane_g

0xd8c1,	// (0x0003c5f6) main_int_radio_pane

0xf052,	// (0x0003dd87) list_single_fs_dyc_pane_g1

0x5fa3,	// (0x00034cd8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x5fa3,	// (0x00034cd8) list_double_large_graphic_phob2_pane_g3

0x5faf,	// (0x00034ce4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x5faf,	// (0x00034ce4) list_double_large_graphic_phob2_pane_g4

0xd6a1,	// (0x0003c3d6) main_int_radio1_pane_ParamLimits

0xd6a1,	// (0x0003c3d6) main_int_radio1_pane

0xd6b3,	// (0x0003c3e8) find_pane_cp02

0xd6bc,	// (0x0003c3f1) input_focus_pane_cp12_ParamLimits

0xd6bc,	// (0x0003c3f1) input_focus_pane_cp12

0xd6c8,	// (0x0003c3fd) input_focus_pane_cp13_ParamLimits

0xd6c8,	// (0x0003c3fd) input_focus_pane_cp13

0xd6e0,	// (0x0003c415) input_focus_pane_cp14_ParamLimits

0xd6e0,	// (0x0003c415) input_focus_pane_cp14

0xd6f8,	// (0x0003c42d) int_radio1_listscroll_pane

0xd702,	// (0x0003c437) main_int_radio1_pane_g1_ParamLimits

0xd702,	// (0x0003c437) main_int_radio1_pane_g1

0xd712,	// (0x0003c447) main_int_radio1_pane_t1_ParamLimits

0xd712,	// (0x0003c447) main_int_radio1_pane_t1

0xd726,	// (0x0003c45b) main_int_radio1_pane_t2_ParamLimits

0xd726,	// (0x0003c45b) main_int_radio1_pane_t2

0xd73a,	// (0x0003c46f) main_int_radio1_pane_t3_ParamLimits

0xd73a,	// (0x0003c46f) main_int_radio1_pane_t3

0xd74e,	// (0x0003c483) main_int_radio1_pane_t4_ParamLimits

0xd74e,	// (0x0003c483) main_int_radio1_pane_t4

0xd765,	// (0x0003c49a) main_int_radio1_pane_t5_ParamLimits

0xd765,	// (0x0003c49a) main_int_radio1_pane_t5

0xd777,	// (0x0003c4ac) main_int_radio1_pane_t6_ParamLimits

0xd777,	// (0x0003c4ac) main_int_radio1_pane_t6

0xd789,	// (0x0003c4be) main_int_radio1_pane_t7_ParamLimits

0xd789,	// (0x0003c4be) main_int_radio1_pane_t7

0xd79b,	// (0x0003c4d0) main_int_radio1_pane_t8_ParamLimits

0xd79b,	// (0x0003c4d0) main_int_radio1_pane_t8

0xd7af,	// (0x0003c4e4) main_int_radio1_pane_t9_ParamLimits

0xd7af,	// (0x0003c4e4) main_int_radio1_pane_t9

0xd7c1,	// (0x0003c4f6) main_int_radio1_pane_t10_ParamLimits

0xd7c1,	// (0x0003c4f6) main_int_radio1_pane_t10

0xd7f2,	// (0x0003c527) main_int_radio1_pane_t11_ParamLimits

0xd7f2,	// (0x0003c527) main_int_radio1_pane_t11

0xd823,	// (0x0003c558) main_int_radio1_pane_t12_ParamLimits

0xd823,	// (0x0003c558) main_int_radio1_pane_t12

0x000b,

0xfe96,	// (0x0003ebcb) main_int_radio1_pane_t_ParamLimits

0xfe96,	// (0x0003ebcb) main_int_radio1_pane_t

0xd83a,	// (0x0003c56f) int_radio_list_pane

0x44de,	// (0x00033213) scroll_pane_cp037

0xd842,	// (0x0003c577) list_double_large_graphic_int_radio_pane_ParamLimits

0xd842,	// (0x0003c577) list_double_large_graphic_int_radio_pane

0xd85a,	// (0x0003c58f) list_double_large_graphic_int_radio_pane_g1

0x6077,	// (0x00034dac) list_double_large_graphic_int_radio_pane_t1

0x6085,	// (0x00034dba) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaf,	// (0x0003ebe4) list_double_large_graphic_int_radio_pane_t

0xd8c1,	// (0x0003c5f6) list_highlight_pane_cp027

0xd3a9,	// (0x0003c0de) main_button_pane_4

0xd40a,	// (0x0003c13f) main_welc_pane_g4_ParamLimits

0xd40a,	// (0x0003c13f) main_welc_pane_g4

0xd466,	// (0x0003c19b) main_welc_pane_t4_ParamLimits

0xd466,	// (0x0003c19b) main_welc_pane_t4

0xd478,	// (0x0003c1ad) main_welc_pane_t5_ParamLimits

0xd478,	// (0x0003c1ad) main_welc_pane_t5

0xd4aa,	// (0x0003c1df) main_welc_pane_t6_ParamLimits

0xd4aa,	// (0x0003c1df) main_welc_pane_t6

0xd4ec,	// (0x0003c221) welc_button_pane_2_ParamLimits

0xd4ec,	// (0x0003c221) welc_button_pane_2

0xd504,	// (0x0003c239) welc_button_pane_3_ParamLimits

0xd504,	// (0x0003c239) welc_button_pane_3

0xd3a9,	// (0x0003c0de) welc_button_pane_4

0xd51e,	// (0x0003c253) welc_button_pane_5_ParamLimits

0xd51e,	// (0x0003c253) welc_button_pane_5

0x8e31,	// (0x00037b66) main_popup_welc_pane

0xd863,	// (0x0003c598) main_welc_sk_g3

0xd86d,	// (0x0003c5a2) main_welc_sk_g4

0xd877,	// (0x0003c5ac) main_welc_sk_t3

0xd887,	// (0x0003c5bc) main_welc_sk_t4

0xd897,	// (0x0003c5cc) popup_welc_pane_t4

0xd8a5,	// (0x0003c5da) popup_welc_pane_t5

0xd8b3,	// (0x0003c5e8) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
