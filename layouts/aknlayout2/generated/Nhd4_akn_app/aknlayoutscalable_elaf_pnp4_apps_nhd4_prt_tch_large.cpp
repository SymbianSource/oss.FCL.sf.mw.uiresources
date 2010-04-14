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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007b743 };

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
0x1ea0,	// (0x0007d5e3) Screen

0x1eac,	// (0x0007d5ef) application_window

0x1f08,	// (0x0007d64b) area_bottom_pane_ParamLimits

0x1f08,	// (0x0007d64b) area_bottom_pane

0x1f61,	// (0x0007d6a4) area_top_pane_ParamLimits

0x1f61,	// (0x0007d6a4) area_top_pane

0x1fc5,	// (0x0007d708) call_video_uplink_pane_ParamLimits

0x1fc5,	// (0x0007d708) call_video_uplink_pane

0x2004,	// (0x0007d747) main_pane_ParamLimits

0x2004,	// (0x0007d747) main_pane

0xc7b8,	// (0x00087efb) context_pane

0x5399,	// (0x00080adc) navi_pane

0x53bf,	// (0x00080b02) popup_cale_events_window_ParamLimits

0x53bf,	// (0x00080b02) popup_cale_events_window

0xc7cb,	// (0x00087f0e) popup_mup_playback_window

0x53d7,	// (0x00080b1a) signal_pane

0xa6e7,	// (0x00085e2a) main_browser_pane

0xb39f,	// (0x00086ae2) main_burst_pane

0x522f,	// (0x00080972) main_calc_pane

0xc79e,	// (0x00087ee1) main_cale_day_pane

0x2737,	// (0x0007de7a) main_cale_month_pane

0xc79e,	// (0x00087ee1) main_cale_week_pane

0xb39f,	// (0x00086ae2) main_call_pane

0xa3a8,	// (0x00085aeb) main_call_poc_pane

0xb39f,	// (0x00086ae2) main_camera_pane

0xb39f,	// (0x00086ae2) main_chi_dic_pane

0xb11c,	// (0x0008685f) main_clock_pane

0xa3a8,	// (0x00085aeb) main_fmradio_pane

0xb39f,	// (0x00086ae2) main_graph_messa_pane

0xa3a8,	// (0x00085aeb) main_help_pane

0xa6e7,	// (0x00085e2a) main_im_pane

0xa603,	// (0x00085d46) main_image_pane_ParamLimits

0xa603,	// (0x00085d46) main_image_pane

0xa3a8,	// (0x00085aeb) main_location2_pane

0xb39f,	// (0x00086ae2) main_location_pane

0xa603,	// (0x00085d46) main_messa_pane

0xa3a8,	// (0x00085aeb) main_mp2_pane

0xb39f,	// (0x00086ae2) main_mp_pane

0xa3a8,	// (0x00085aeb) main_msg_pane

0xa3a8,	// (0x00085aeb) main_mup_eq_pane

0xa3a8,	// (0x00085aeb) main_mup_pane

0xa6e7,	// (0x00085e2a) main_notes_pane

0xa3a8,	// (0x00085aeb) main_pec_pane

0xa3a8,	// (0x00085aeb) main_phob_pane

0xa3a8,	// (0x00085aeb) main_pinb_pane

0xa3a8,	// (0x00085aeb) main_postcard_pane

0xa3a8,	// (0x00085aeb) main_qdial_pane

0xb39f,	// (0x00086ae2) main_skin_pane

0xa3a8,	// (0x00085aeb) main_smil2_pane

0xb39f,	// (0x00086ae2) main_smil_pane

0xb39f,	// (0x00086ae2) main_video_pane

0xb39f,	// (0x00086ae2) main_video_tele_pane

0xa603,	// (0x00085d46) main_viewer_pane_ParamLimits

0xa603,	// (0x00085d46) main_viewer_pane

0xb39f,	// (0x00086ae2) main_vorec_pane

0x526d,	// (0x000809b0) popup_blid_sat_info_window_ParamLimits

0x526d,	// (0x000809b0) popup_blid_sat_info_window

0x528d,	// (0x000809d0) popup_dyc_status_message_window_ParamLimits

0x528d,	// (0x000809d0) popup_dyc_status_message_window

0x529b,	// (0x000809de) popup_grid_large_graphic_window_ParamLimits

0x529b,	// (0x000809de) popup_grid_large_graphic_window

0x532a,	// (0x00080a6d) popup_loc_request_window_ParamLimits

0x532a,	// (0x00080a6d) popup_loc_request_window

0x5371,	// (0x00080ab4) popup_wml_address_window_ParamLimits

0x5371,	// (0x00080ab4) popup_wml_address_window

0x5107,	// (0x0008084a) call_muted_g1

0x4dc5,	// (0x00080508) popup_call_audio_conf_window_ParamLimits

0x4dc5,	// (0x00080508) popup_call_audio_conf_window

0x5117,	// (0x0008085a) popup_call_audio_first_window_ParamLimits

0x5117,	// (0x0008085a) popup_call_audio_first_window

0x5157,	// (0x0008089a) popup_call_audio_in_window_ParamLimits

0x5157,	// (0x0008089a) popup_call_audio_in_window

0x517b,	// (0x000808be) popup_call_audio_out_window_ParamLimits

0x517b,	// (0x000808be) popup_call_audio_out_window

0x519d,	// (0x000808e0) popup_call_audio_second_window_ParamLimits

0x519d,	// (0x000808e0) popup_call_audio_second_window

0x51cd,	// (0x00080910) popup_call_audio_wait_window_ParamLimits

0x51cd,	// (0x00080910) popup_call_audio_wait_window

0x51ee,	// (0x00080931) popup_number_entry_window_ParamLimits

0x51ee,	// (0x00080931) popup_number_entry_window

0x9f95,	// (0x000856d8) bg_popup_call_pane_cp05_ParamLimits

0x9f95,	// (0x000856d8) bg_popup_call_pane_cp05

0x9fb5,	// (0x000856f8) popup_number_entry_window_t1

0x9fc8,	// (0x0008570b) popup_number_entry_window_t2

0x9fda,	// (0x0008571d) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0008a809) popup_number_entry_window_t

0x9fec,	// (0x0008572f) text_title_cp2

0x9fff,	// (0x00085742) bg_popup_call_pane_cp_ParamLimits

0x9fff,	// (0x00085742) bg_popup_call_pane_cp

0xa00d,	// (0x00085750) call_thumbnail_pane

0xa015,	// (0x00085758) popup_call_audio_in_window_g1_ParamLimits

0xa015,	// (0x00085758) popup_call_audio_in_window_g1

0xa021,	// (0x00085764) popup_call_audio_in_window_g2_ParamLimits

0xa021,	// (0x00085764) popup_call_audio_in_window_g2

0xa02d,	// (0x00085770) popup_call_audio_in_window_g3_ParamLimits

0xa02d,	// (0x00085770) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0008a812) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0008a812) popup_call_audio_in_window_g

0xa039,	// (0x0008577c) popup_call_audio_in_window_t1_ParamLimits

0xa039,	// (0x0008577c) popup_call_audio_in_window_t1

0xa055,	// (0x00085798) popup_call_audio_in_window_t2_ParamLimits

0xa055,	// (0x00085798) popup_call_audio_in_window_t2

0xa071,	// (0x000857b4) popup_call_audio_in_window_t3_ParamLimits

0xa071,	// (0x000857b4) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0008a819) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0008a819) popup_call_audio_in_window_t

0x9fff,	// (0x00085742) bg_popup_call_pane_cp01_ParamLimits

0x9fff,	// (0x00085742) bg_popup_call_pane_cp01

0xa00d,	// (0x00085750) call_thumbnail_pane_cp02

0xa084,	// (0x000857c7) call_type_pane_cp022

0xa08c,	// (0x000857cf) popup_call_audio_out_window_g1_ParamLimits

0xa08c,	// (0x000857cf) popup_call_audio_out_window_g1

0xa09e,	// (0x000857e1) popup_call_audio_out_window_g2_ParamLimits

0xa09e,	// (0x000857e1) popup_call_audio_out_window_g2

0xa0aa,	// (0x000857ed) popup_call_audio_out_window_g3_ParamLimits

0xa0aa,	// (0x000857ed) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0008a820) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0008a820) popup_call_audio_out_window_g

0xa0bc,	// (0x000857ff) popup_call_audio_out_window_t1_ParamLimits

0xa0bc,	// (0x000857ff) popup_call_audio_out_window_t1

0xa0d4,	// (0x00085817) popup_call_audio_out_window_t2_ParamLimits

0xa0d4,	// (0x00085817) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0008a827) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0008a827) popup_call_audio_out_window_t

0xa0e9,	// (0x0008582c) bg_popup_call_pane_ParamLimits

0xa0e9,	// (0x0008582c) bg_popup_call_pane

0x2208,	// (0x0007d94b) call_thumbnail_pane_cp_ParamLimits

0x2208,	// (0x0007d94b) call_thumbnail_pane_cp

0xa16d,	// (0x000858b0) call_type_pane_cp01_ParamLimits

0xa16d,	// (0x000858b0) call_type_pane_cp01

0xa1b1,	// (0x000858f4) popup_call_audio_first_window_g1_ParamLimits

0xa1b1,	// (0x000858f4) popup_call_audio_first_window_g1

0xa1fd,	// (0x00085940) popup_call_audio_first_window_g2_ParamLimits

0xa1fd,	// (0x00085940) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0008a82c) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0008a82c) popup_call_audio_first_window_g

0xa241,	// (0x00085984) popup_call_audio_first_window_t1_ParamLimits

0xa241,	// (0x00085984) popup_call_audio_first_window_t1

0xa2ed,	// (0x00085a30) popup_call_audio_first_window_t4_ParamLimits

0xa2ed,	// (0x00085a30) popup_call_audio_first_window_t4

0xa379,	// (0x00085abc) popup_call_audio_first_window_t5_ParamLimits

0xa379,	// (0x00085abc) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0008a831) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0008a831) popup_call_audio_first_window_t

0xa3a8,	// (0x00085aeb) bg_popup_call_pane_cp02

0xa3b2,	// (0x00085af5) call_type_pane_cp023

0xa3ba,	// (0x00085afd) popup_call_audio_wait_window_g1

0xa3c2,	// (0x00085b05) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0008a838) popup_call_audio_wait_window_g

0xa3ca,	// (0x00085b0d) popup_call_audio_wait_window_t3

0xa3d8,	// (0x00085b1b) bg_popup_call_pane_cp03_ParamLimits

0xa3d8,	// (0x00085b1b) bg_popup_call_pane_cp03

0xa438,	// (0x00085b7b) call_thumbnail_pane_cp011_ParamLimits

0xa438,	// (0x00085b7b) call_thumbnail_pane_cp011

0xa444,	// (0x00085b87) call_type_pane_cp034_ParamLimits

0xa444,	// (0x00085b87) call_type_pane_cp034

0xa480,	// (0x00085bc3) popup_call_audio_second_window_g1_ParamLimits

0xa480,	// (0x00085bc3) popup_call_audio_second_window_g1

0xa4bc,	// (0x00085bff) popup_call_audio_second_window_g2_ParamLimits

0xa4bc,	// (0x00085bff) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0008a83d) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0008a83d) popup_call_audio_second_window_g

0xa4f8,	// (0x00085c3b) popup_call_audio_second_window_t1_ParamLimits

0xa4f8,	// (0x00085c3b) popup_call_audio_second_window_t1

0xa579,	// (0x00085cbc) popup_call_audio_second_window_t2_ParamLimits

0xa579,	// (0x00085cbc) popup_call_audio_second_window_t2

0xa5af,	// (0x00085cf2) popup_call_audio_second_window_t3_ParamLimits

0xa5af,	// (0x00085cf2) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0008a842) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0008a842) popup_call_audio_second_window_t

0xa3a8,	// (0x00085aeb) bg_popup_call_pane_cp04

0xa5e5,	// (0x00085d28) list_conf_pane

0xa5ed,	// (0x00085d30) popup_call_audio_conf_window_t1

0xa5fb,	// (0x00085d3e) call_thumbnail_pane_g1

0xa603,	// (0x00085d46) bg_pinb_pane_ParamLimits

0xa603,	// (0x00085d46) bg_pinb_pane

0xa611,	// (0x00085d54) find_pinb_pane

0xa61a,	// (0x00085d5d) listscroll_pinb_pane_ParamLimits

0xa61a,	// (0x00085d5d) listscroll_pinb_pane

0xa629,	// (0x00085d6c) pinb_bg_pane_g1

0x222c,	// (0x0007d96f) pinb_bg_pane_g2

0x2238,	// (0x0007d97b) pinb_bg_pane_g3

0x2244,	// (0x0007d987) pinb_bg_pane_g4

0x2250,	// (0x0007d993) pinb_bg_pane_g5

0x225c,	// (0x0007d99f) pinb_bg_pane_g6

0x2267,	// (0x0007d9aa) pinb_bg_pane_g7

0x2272,	// (0x0007d9b5) pinb_bg_pane_g8

0x227d,	// (0x0007d9c0) pinb_bg_pane_g9

0x2287,	// (0x0007d9ca) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0008a849) pinb_bg_pane_g

0x22a4,	// (0x0007d9e7) grid_pinb_pane

0x22af,	// (0x0007d9f2) list_pinb_pane

0x22ba,	// (0x0007d9fd) scroll_pane_cp01_ParamLimits

0x22ba,	// (0x0007d9fd) scroll_pane_cp01

0xa633,	// (0x00085d76) find_pinb_pane_g1_ParamLimits

0xa633,	// (0x00085d76) find_pinb_pane_g1

0xa64b,	// (0x00085d8e) find_pinb_pane_t1

0xa65d,	// (0x00085da0) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0008a863) find_pinb_pane_t

0xa672,	// (0x00085db5) input_focus_pane_cp01_ParamLimits

0xa672,	// (0x00085db5) input_focus_pane_cp01

0x22cc,	// (0x0007da0f) cell_pinb_pane_ParamLimits

0x22cc,	// (0x0007da0f) cell_pinb_pane

0xa67e,	// (0x00085dc1) cell_pinb_pane_g1_ParamLimits

0xa67e,	// (0x00085dc1) cell_pinb_pane_g1

0xa691,	// (0x00085dd4) cell_pinb_pane_g2_ParamLimits

0xa691,	// (0x00085dd4) cell_pinb_pane_g2

0xa69d,	// (0x00085de0) cell_pinb_pane_g3_ParamLimits

0xa69d,	// (0x00085de0) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0008a868) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0008a868) cell_pinb_pane_g

0xa3a8,	// (0x00085aeb) grid_highlight_pane_cp01

0x22fb,	// (0x0007da3e) list_pinb_item_pane_ParamLimits

0x22fb,	// (0x0007da3e) list_pinb_item_pane

0xa3a8,	// (0x00085aeb) list_highlight_pane_cp02

0x2325,	// (0x0007da68) list_pinb_item_pane_g1_ParamLimits

0x2325,	// (0x0007da68) list_pinb_item_pane_g1

0x2332,	// (0x0007da75) list_pinb_item_pane_g2_ParamLimits

0x2332,	// (0x0007da75) list_pinb_item_pane_g2

0x233e,	// (0x0007da81) list_pinb_item_pane_g3_ParamLimits

0x233e,	// (0x0007da81) list_pinb_item_pane_g3

0x234f,	// (0x0007da92) list_pinb_item_pane_g4_ParamLimits

0x234f,	// (0x0007da92) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0008a86f) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0008a86f) list_pinb_item_pane_g

0x235b,	// (0x0007da9e) list_pinb_item_pane_t1_ParamLimits

0x235b,	// (0x0007da9e) list_pinb_item_pane_t1

0x238c,	// (0x0007dacf) calc_display_pane

0x23aa,	// (0x0007daed) calc_paper_pane

0x23c6,	// (0x0007db09) grid_calc_pane

0xa3a8,	// (0x00085aeb) bg_list_pane_cp01

0x23f2,	// (0x0007db35) clock_g1

0x23fa,	// (0x0007db3d) clock_g2

0x0001,

0xf135,	// (0x0008a878) clock_g

0x2404,	// (0x0007db47) clock_t1_ParamLimits

0x2404,	// (0x0007db47) clock_t1

0x2419,	// (0x0007db5c) clock_t2_ParamLimits

0x2419,	// (0x0007db5c) clock_t2

0x242b,	// (0x0007db6e) clock_t3_ParamLimits

0x242b,	// (0x0007db6e) clock_t3

0x243d,	// (0x0007db80) clock_t4_ParamLimits

0x243d,	// (0x0007db80) clock_t4

0x244f,	// (0x0007db92) clock_t5_ParamLimits

0x244f,	// (0x0007db92) clock_t5

0x2464,	// (0x0007dba7) clock_t6_ParamLimits

0x2464,	// (0x0007dba7) clock_t6

0x2476,	// (0x0007dbb9) clock_t7_ParamLimits

0x2476,	// (0x0007dbb9) clock_t7

0x2488,	// (0x0007dbcb) clock_t8_ParamLimits

0x2488,	// (0x0007dbcb) clock_t8

0x249e,	// (0x0007dbe1) clock_t9_ParamLimits

0x249e,	// (0x0007dbe1) clock_t9

0x0008,

0xf13a,	// (0x0008a87d) clock_t_ParamLimits

0xf13a,	// (0x0008a87d) clock_t

0xa6a9,	// (0x00085dec) popup_clock_analogue_window_cp02

0xa6a9,	// (0x00085dec) popup_clock_digital_window_cp01

0xa6b1,	// (0x00085df4) listscroll_help_pane

0xa3a8,	// (0x00085aeb) phob_pre_status_pane

0xa6bb,	// (0x00085dfe) grid_qdial_pane

0xa603,	// (0x00085d46) listscroll_mce_pane

0xa603,	// (0x00085d46) bg_notes_pane

0xa6c5,	// (0x00085e08) list_notes_pane

0x24b4,	// (0x0007dbf7) scroll_pane_cp06

0xa6d3,	// (0x00085e16) bg_calc_paper_pane

0x24c3,	// (0x0007dc06) list_calc_pane

0xa6e7,	// (0x00085e2a) bg_calc_display_pane

0x24dd,	// (0x0007dc20) calc_display_pane_t1

0x24f2,	// (0x0007dc35) calc_display_pane_t2

0x2507,	// (0x0007dc4a) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0008a890) calc_display_pane_t

0x2519,	// (0x0007dc5c) cell_calc_pane_ParamLimits

0x2519,	// (0x0007dc5c) cell_calc_pane

0xa6f3,	// (0x00085e36) bg_calc_paper_pane_g1

0xa6ff,	// (0x00085e42) bg_calc_paper_pane_g2

0xa70b,	// (0x00085e4e) bg_calc_paper_pane_g3

0xa717,	// (0x00085e5a) bg_calc_paper_pane_g4

0xa723,	// (0x00085e66) bg_calc_paper_pane_g5

0x2546,	// (0x0007dc89) bg_calc_paper_pane_g6

0x2557,	// (0x0007dc9a) bg_calc_paper_pane_g7

0x2568,	// (0x0007dcab) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0008a897) bg_calc_paper_pane_g

0x2579,	// (0x0007dcbc) calc_bg_paper_pane_g9

0x258a,	// (0x0007dccd) list_calc_item_pane_ParamLimits

0x258a,	// (0x0007dccd) list_calc_item_pane

0xa72f,	// (0x00085e72) list_calc_item_pane_g1

0x25be,	// (0x0007dd01) list_calc_item_pane_t1_ParamLimits

0x25be,	// (0x0007dd01) list_calc_item_pane_t1

0x25d0,	// (0x0007dd13) list_calc_item_pane_t2_ParamLimits

0x25d0,	// (0x0007dd13) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0008a8a8) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0008a8a8) list_calc_item_pane_t

0xa73c,	// (0x00085e7f) cell_calc_pane_g1

0xa746,	// (0x00085e89) grid_highlight_pane_cp02

0xa768,	// (0x00085eab) bg_calc_display_pane_g1

0x2600,	// (0x0007dd43) bg_calc_display_pane_g2

0xa771,	// (0x00085eb4) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0008a8b2) bg_calc_display_pane_g

0x260a,	// (0x0007dd4d) cell_qdial_pane_ParamLimits

0x260a,	// (0x0007dd4d) cell_qdial_pane

0x261e,	// (0x0007dd61) cell_qdial_pane_g1_ParamLimits

0x261e,	// (0x0007dd61) cell_qdial_pane_g1

0x262b,	// (0x0007dd6e) cell_qdial_pane_g2_ParamLimits

0x262b,	// (0x0007dd6e) cell_qdial_pane_g2

0xa77a,	// (0x00085ebd) cell_qdial_pane_g3_ParamLimits

0xa77a,	// (0x00085ebd) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0008a8b9) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0008a8b9) cell_qdial_pane_g

0x2648,	// (0x0007dd8b) cell_qdial_pane_t1_ParamLimits

0x2648,	// (0x0007dd8b) cell_qdial_pane_t1

0x2660,	// (0x0007dda3) cell_qdial_pane_t2_ParamLimits

0x2660,	// (0x0007dda3) cell_qdial_pane_t2

0x2673,	// (0x0007ddb6) cell_qdial_pane_t3_ParamLimits

0x2673,	// (0x0007ddb6) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0008a8c2) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0008a8c2) cell_qdial_pane_t

0xa3a8,	// (0x00085aeb) grid_highlight_pane_cp04

0xa786,	// (0x00085ec9) thumbnail_qdial_pane_ParamLimits

0xa786,	// (0x00085ec9) thumbnail_qdial_pane

0xa7e2,	// (0x00085f25) list_help_pane

0xa7eb,	// (0x00085f2e) scroll_pane_cp02

0x2686,	// (0x0007ddc9) help_list_pane_t1_ParamLimits

0x2686,	// (0x0007ddc9) help_list_pane_t1

0x26c0,	// (0x0007de03) bg_notes_pane_g2

0x26c8,	// (0x0007de0b) bg_notes_pane_g3

0x26d0,	// (0x0007de13) notes_bg_pane_g1

0x26d8,	// (0x0007de1b) notes_bg_pane_g4

0x26e0,	// (0x0007de23) notes_bg_pane_g5

0x26e8,	// (0x0007de2b) notes_bg_pane_g6

0x26f0,	// (0x0007de33) notes_bg_pane_g7

0x26f8,	// (0x0007de3b) notes_bg_pane_g8

0x2700,	// (0x0007de43) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0008a8e0) notes_bg_pane_g

0x2708,	// (0x0007de4b) list_notes_text_pane_ParamLimits

0x2708,	// (0x0007de4b) list_notes_text_pane

0xa7f4,	// (0x00085f37) list_notes_text_pane_g1

0x0cc2,	// (0x0007c405) list_notes_text_pane_t1

0x2737,	// (0x0007de7a) listscroll_cale_week_pane

0x275c,	// (0x0007de9f) bg_cale_heading_pane

0xa867,	// (0x00085faa) bg_cale_pane_cp01

0x277e,	// (0x0007dec1) cale_week_corner_pane

0x2798,	// (0x0007dedb) cale_week_day_heading_pane

0x27ba,	// (0x0007defd) cale_week_scroll_pane_g1

0x27d7,	// (0x0007df1a) cale_week_scroll_pane_g2

0x27ea,	// (0x0007df2d) cale_week_scroll_pane_g3

0x27fd,	// (0x0007df40) cale_week_scroll_pane_g4

0x2810,	// (0x0007df53) cale_week_scroll_pane_g5

0x2823,	// (0x0007df66) cale_week_scroll_pane_g6

0x2836,	// (0x0007df79) cale_week_scroll_pane_g7

0x2849,	// (0x0007df8c) cale_week_scroll_pane_g8

0x285e,	// (0x0007dfa1) cale_week_scroll_pane_g9

0x2871,	// (0x0007dfb4) cale_week_scroll_pane_g10

0x2884,	// (0x0007dfc7) cale_week_scroll_pane_g11

0x2897,	// (0x0007dfda) cale_week_scroll_pane_g12

0x28ae,	// (0x0007dff1) cale_week_scroll_pane_g13

0x28c9,	// (0x0007e00c) cale_week_scroll_pane_g14

0x28e4,	// (0x0007e027) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0008a8ef) cale_week_scroll_pane_g

0x2914,	// (0x0007e057) cale_week_time_pane

0x2929,	// (0x0007e06c) grid_cale_week_pane

0xa897,	// (0x00085fda) scroll_pane_cp08

0x294a,	// (0x0007e08d) cell_cale_week_pane_ParamLimits

0x294a,	// (0x0007e08d) cell_cale_week_pane

0x29ae,	// (0x0007e0f1) cale_week_day_heading_pane_t1

0x29e9,	// (0x0007e12c) cale_week_day_heading_pane_t2

0x2a24,	// (0x0007e167) cale_week_day_heading_pane_t3

0x2a5f,	// (0x0007e1a2) cale_week_day_heading_pane_t4

0x2a9a,	// (0x0007e1dd) cale_week_day_heading_pane_t5

0x2ad5,	// (0x0007e218) cale_week_day_heading_pane_t6

0x2b10,	// (0x0007e253) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0008a910) cale_week_day_heading_pane_t

0xa8b4,	// (0x00085ff7) bg_cale_side_pane

0x2b4b,	// (0x0007e28e) cale_week_time_pane_t1

0x2b65,	// (0x0007e2a8) cale_week_time_pane_t2

0x2b7f,	// (0x0007e2c2) cale_week_time_pane_t3

0x2b99,	// (0x0007e2dc) cale_week_time_pane_t4

0x2bb3,	// (0x0007e2f6) cale_week_time_pane_t5

0x2bcf,	// (0x0007e312) cale_week_time_pane_t6

0x2bf1,	// (0x0007e334) cale_week_time_pane_t7

0x2c15,	// (0x0007e358) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0008a91f) cale_week_time_pane_t

0x2c3b,	// (0x0007e37e) cell_cale_week_pane_g2

0x2c5f,	// (0x0007e3a2) cell_cale_week_pane_g3_ParamLimits

0x2c5f,	// (0x0007e3a2) cell_cale_week_pane_g3

0xa8c2,	// (0x00086005) grid_highlight_pane_cp07

0xa8ca,	// (0x0008600d) listscroll_gms_pane

0xa8d4,	// (0x00086017) grid_gms_pane

0xa8dd,	// (0x00086020) listscroll_gms_pane_g1

0xa8e5,	// (0x00086028) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0008a930) listscroll_gms_pane_g

0x2c77,	// (0x0007e3ba) scroll_pane_cp010

0x2c82,	// (0x0007e3c5) cell_gms_pane_ParamLimits

0x2c82,	// (0x0007e3c5) cell_gms_pane

0x2c92,	// (0x0007e3d5) cell_gms_pane_g1

0xa8ed,	// (0x00086030) cell_gms_pane_g2

0xa7f4,	// (0x00085f37) cell_gms_pane_g3

0xa8f5,	// (0x00086038) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0008a935) cell_gms_pane_g

0xa8fe,	// (0x00086041) grid_highlight_pane_cp09

0x50af,	// (0x000807f2) phob_pre_status_pane_g1

0x50b7,	// (0x000807fa) phob_pre_status_pane_g2

0x50bf,	// (0x00080802) phob_pre_status_pane_g3

0x50c7,	// (0x0008080a) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0008ad24) phob_pre_status_pane_g

0x50d7,	// (0x0008081a) phob_pre_status_pane_t1

0x50e7,	// (0x0008082a) phob_pre_status_pane_t2

0x50f7,	// (0x0008083a) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0008ad2f) phob_pre_status_pane_t

0xa3a8,	// (0x00085aeb) bg_list_pane_cp05

0x2ca2,	// (0x0007e3e5) grid_vorec_pane

0x2cac,	// (0x0007e3ef) vorec_t1

0x2cba,	// (0x0007e3fd) vorec_t2

0x2cc8,	// (0x0007e40b) vorec_t3

0x2cd6,	// (0x0007e419) vorec_t4

0x2ce4,	// (0x0007e427) vorec_t5

0x2cf2,	// (0x0007e435) vorec_t6

0x0006,

0xf1fb,	// (0x0008a93e) vorec_t

0x2d0e,	// (0x0007e451) wait_bar_pane_cp01

0x2d16,	// (0x0007e459) cell_vorec_pane_ParamLimits

0x2d16,	// (0x0007e459) cell_vorec_pane

0x2d29,	// (0x0007e46c) cell_vorec_pane_g1

0xa3a8,	// (0x00085aeb) grid_highlight_pane_cp05

0x2d43,	// (0x0007e486) cams_zoom_pane

0x2d4f,	// (0x0007e492) image_vga_pane

0x2d5e,	// (0x0007e4a1) main_camera_pane_g1

0x2d6c,	// (0x0007e4af) main_camera_pane_g2

0x2d78,	// (0x0007e4bb) main_camera_pane_g3

0x2d84,	// (0x0007e4c7) main_camera_pane_g4

0x2d90,	// (0x0007e4d3) main_camera_pane_g5

0x2d9c,	// (0x0007e4df) main_camera_pane_g6

0x2da8,	// (0x0007e4eb) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0008a94d) main_camera_pane_g

0x2db4,	// (0x0007e4f7) main_camera_pane_t1

0x2dc6,	// (0x0007e509) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0008a95e) main_camera_pane_t

0x2de7,	// (0x0007e52a) cams_zoom_pane_cp_ParamLimits

0x2de7,	// (0x0007e52a) cams_zoom_pane_cp

0x2e0b,	// (0x0007e54e) image_cif_pane_ParamLimits

0x2e0b,	// (0x0007e54e) image_cif_pane

0x2e29,	// (0x0007e56c) image_subqcif_pane

0x2e31,	// (0x0007e574) main_video_pane_g1_ParamLimits

0x2e31,	// (0x0007e574) main_video_pane_g1

0x2e51,	// (0x0007e594) main_video_pane_g2_ParamLimits

0x2e51,	// (0x0007e594) main_video_pane_g2

0x2e81,	// (0x0007e5c4) main_video_pane_g3_ParamLimits

0x2e81,	// (0x0007e5c4) main_video_pane_g3

0x2eaa,	// (0x0007e5ed) main_video_pane_g4_ParamLimits

0x2eaa,	// (0x0007e5ed) main_video_pane_g4

0x2ed3,	// (0x0007e616) main_video_pane_g5_ParamLimits

0x2ed3,	// (0x0007e616) main_video_pane_g5

0xa912,	// (0x00086055) main_video_pane_g6_ParamLimits

0xa912,	// (0x00086055) main_video_pane_g6

0x0006,

0xf220,	// (0x0008a963) main_video_pane_g_ParamLimits

0xf220,	// (0x0008a963) main_video_pane_g

0x2ef5,	// (0x0007e638) main_video_pane_t1_ParamLimits

0x2ef5,	// (0x0007e638) main_video_pane_t1

0xa92c,	// (0x0008606f) cams_zoom_pane_g1

0xa935,	// (0x00086078) cams_zoom_pane_g2

0xa93e,	// (0x00086081) cams_zoom_pane_g3

0xa947,	// (0x0008608a) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0008a972) cams_zoom_pane_g

0x2f3f,	// (0x0007e682) grid_cams_pane

0x2f4d,	// (0x0007e690) linegrid_cams_pane

0x2f5b,	// (0x0007e69e) cell_cams_pane_ParamLimits

0x2f5b,	// (0x0007e69e) cell_cams_pane

0xa950,	// (0x00086093) cams_burst_image_pane

0xa958,	// (0x0008609b) cell_cams_pane_g1

0xa3a8,	// (0x00085aeb) grid_highlight_pane_cp03

0xa73c,	// (0x00085e7f) mp_bg_pane_g1

0xa3a8,	// (0x00085aeb) bg_list_pane_cp03

0xc6c3,	// (0x00087e06) bg_mp_pane

0xc6cb,	// (0x00087e0e) grid_mp_pane

0xc6d3,	// (0x00087e16) media_player_g1

0xc6db,	// (0x00087e1e) media_player_t1

0xc6e9,	// (0x00087e2c) media_player_t2

0xc6f7,	// (0x00087e3a) media_player_t3

0xc705,	// (0x00087e48) media_player_t4

0xc713,	// (0x00087e56) media_player_t5

0xc721,	// (0x00087e64) media_player_t6

0xc72f,	// (0x00087e72) media_player_t7

0x0006,

0xf5cb,	// (0x0008ad0e) media_player_t

0xc73d,	// (0x00087e80) wait_bar_pane_cp02

0xf5b0,	// (0x0008acf3) main_usb_pane_t

0x50a6,	// (0x000807e9) cell_mp_pane

0xa73c,	// (0x00085e7f) cell_mp_pane_g1

0xa3a8,	// (0x00085aeb) grid_highlight_pane_cp06

0xa960,	// (0x000860a3) grid_skin_colour_pane

0xa968,	// (0x000860ab) list_highlight_pane_cp03

0x2f86,	// (0x0007e6c9) skin_g1

0xa970,	// (0x000860b3) skin_t1

0xa97f,	// (0x000860c2) skin_t2

0x0001,

0xf264,	// (0x0008a9a7) skin_t

0x2f90,	// (0x0007e6d3) cell_skin_colour_pane_ParamLimits

0x2f90,	// (0x0007e6d3) cell_skin_colour_pane

0xa98d,	// (0x000860d0) cell_skin_colour_pane_g1

0x3014,	// (0x0007e757) call_video_g1_ParamLimits

0x3014,	// (0x0007e757) call_video_g1

0x3024,	// (0x0007e767) call_video_g2_ParamLimits

0x3024,	// (0x0007e767) call_video_g2

0x0001,

0xf269,	// (0x0008a9ac) call_video_g_ParamLimits

0xf269,	// (0x0008a9ac) call_video_g

0x307e,	// (0x0007e7c1) call_video_uplink_pane_cp1_ParamLimits

0x307e,	// (0x0007e7c1) call_video_uplink_pane_cp1

0xa99f,	// (0x000860e2) call_video_uplink_pane_cp2

0x314a,	// (0x0007e88d) video_down_crop_pane_ParamLimits

0x314a,	// (0x0007e88d) video_down_crop_pane

0x323c,	// (0x0007e97f) video_down_pane_ParamLimits

0x323c,	// (0x0007e97f) video_down_pane

0xa9a7,	// (0x000860ea) video_down_subqcif_pane_ParamLimits

0xa9a7,	// (0x000860ea) video_down_subqcif_pane

0xa9bf,	// (0x00086102) video_down_subqcif_pane_cp_ParamLimits

0xa9bf,	// (0x00086102) video_down_subqcif_pane_cp

0xa9e5,	// (0x00086128) im_reading_pane_ParamLimits

0xa9e5,	// (0x00086128) im_reading_pane

0x335e,	// (0x0007eaa1) im_writing_pane_ParamLimits

0x335e,	// (0x0007eaa1) im_writing_pane

0x337c,	// (0x0007eabf) im_reading_pane_t1

0xa9ff,	// (0x00086142) list_im_pane

0xaa10,	// (0x00086153) scroll_pane_cp07

0x33d7,	// (0x0007eb1a) im_writing_pane_t1_ParamLimits

0x33d7,	// (0x0007eb1a) im_writing_pane_t1

0xaa29,	// (0x0008616c) im_writing_pane_t2_ParamLimits

0xaa29,	// (0x0008616c) im_writing_pane_t2

0x0001,

0xf273,	// (0x0008a9b6) im_writing_pane_t_ParamLimits

0xf273,	// (0x0008a9b6) im_writing_pane_t

0xa3a8,	// (0x00085aeb) input_focus_pane_cp04

0xa3a8,	// (0x00085aeb) input_focus_pane_cp05

0x33e9,	// (0x0007eb2c) list_im_single_pane_ParamLimits

0x33e9,	// (0x0007eb2c) list_im_single_pane

0x3411,	// (0x0007eb54) list_single_im_pane_t1

0x506a,	// (0x000807ad) blid_accuracy_pane

0x5072,	// (0x000807b5) blid_compass_pane

0x507c,	// (0x000807bf) main_location_t1

0x508a,	// (0x000807cd) main_location_t2

0x5098,	// (0x000807db) main_location_t3

0x0002,

0xf5da,	// (0x0008ad1d) main_location_t

0xa3a8,	// (0x00085aeb) aid_levels_location

0xa73c,	// (0x00085e7f) blid_accuracy_pane_g1

0xa73c,	// (0x00085e7f) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0008aa18) blid_accuracy_pane_g

0xaa88,	// (0x000861cb) wml_content_pane

0xaac6,	// (0x00086209) wml_button_pane_ParamLimits

0xaac6,	// (0x00086209) wml_button_pane

0x3420,	// (0x0007eb63) wml_list_single_large_pane_ParamLimits

0x3420,	// (0x0007eb63) wml_list_single_large_pane

0x3451,	// (0x0007eb94) wml_list_single_medium_pane_ParamLimits

0x3451,	// (0x0007eb94) wml_list_single_medium_pane

0x3489,	// (0x0007ebcc) wml_list_single_small_pane_ParamLimits

0x3489,	// (0x0007ebcc) wml_list_single_small_pane

0xaada,	// (0x0008621d) wml_selection_box_pane_ParamLimits

0xaada,	// (0x0008621d) wml_selection_box_pane

0xaaed,	// (0x00086230) wml_list_single_pane_t1

0xaafc,	// (0x0008623f) wml_list_single_medium_pane_t1

0xab0b,	// (0x0008624e) wml_list_single_large_pane_t1

0xab1a,	// (0x0008625d) input_focus_pane_cp02_ParamLimits

0xab1a,	// (0x0008625d) input_focus_pane_cp02

0xab2d,	// (0x00086270) wml_selection_box_pane_g1

0xab36,	// (0x00086279) wml_selection_box_pane_t1_ParamLimits

0xab36,	// (0x00086279) wml_selection_box_pane_t1

0xa603,	// (0x00085d46) bg_wml_button_pane_ParamLimits

0xa603,	// (0x00085d46) bg_wml_button_pane

0xab4e,	// (0x00086291) wml_button_pane_g1

0xab56,	// (0x00086299) wml_button_pane_t1

0xab4e,	// (0x00086291) wml_button_bg_pane_g1

0xab66,	// (0x000862a9) wml_button_bg_pane_g2

0xab6e,	// (0x000862b1) wml_button_bg_pane_g3

0xab76,	// (0x000862b9) wml_button_bg_pane_g4

0xab7e,	// (0x000862c1) wml_button_bg_pane_g5

0xab86,	// (0x000862c9) wml_button_bg_pane_g6

0xab8e,	// (0x000862d1) wml_button_bg_pane_g7

0xab96,	// (0x000862d9) wml_button_bg_pane_g8

0xab9e,	// (0x000862e1) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0008a9bb) wml_button_bg_pane_g

0x34ca,	// (0x0007ec0d) bg_list_pane_cp02

0xaba6,	// (0x000862e9) mce_header_pane_ParamLimits

0xaba6,	// (0x000862e9) mce_header_pane

0xabbc,	// (0x000862ff) mce_icon_pane

0xabbc,	// (0x000862ff) mce_image_pane

0xabc5,	// (0x00086308) mce_text_pane_ParamLimits

0xabc5,	// (0x00086308) mce_text_pane

0x34d4,	// (0x0007ec17) scroll_pane_cp03

0xaabe,	// (0x00086201) scroll_pane_cp04

0xabd8,	// (0x0008631b) scroll_pane_cp05_ParamLimits

0xabd8,	// (0x0008631b) scroll_pane_cp05

0x34de,	// (0x0007ec21) mce_header_field_pane_ParamLimits

0x34de,	// (0x0007ec21) mce_header_field_pane

0x34fe,	// (0x0007ec41) mce_header_field_pane_2_ParamLimits

0x34fe,	// (0x0007ec41) mce_header_field_pane_2

0x3514,	// (0x0007ec57) mce_header_field_pane_3

0x351c,	// (0x0007ec5f) list_single_mce_message_pane_ParamLimits

0x351c,	// (0x0007ec5f) list_single_mce_message_pane

0x354e,	// (0x0007ec91) list_single_mce_smart_pane_ParamLimits

0x354e,	// (0x0007ec91) list_single_mce_smart_pane

0xabe4,	// (0x00086327) input_focus_pane_cp03

0xabed,	// (0x00086330) list_header_data_pane

0x358b,	// (0x0007ecce) mce_header_field_pane_t1

0x359b,	// (0x0007ecde) list_single_mce_header_pane_ParamLimits

0x359b,	// (0x0007ecde) list_single_mce_header_pane

0xabf5,	// (0x00086338) list_single_mce_header_pane_t1

0xac04,	// (0x00086347) list_single_mce_message_pane_g1

0xac0c,	// (0x0008634f) list_single_mce_message_pane_t1

0x35f2,	// (0x0007ed35) bg_cale_heading_pane_cp01_ParamLimits

0x35f2,	// (0x0007ed35) bg_cale_heading_pane_cp01

0xac1a,	// (0x0008635d) bg_cale_pane_cp02_ParamLimits

0xac1a,	// (0x0008635d) bg_cale_pane_cp02

0x3635,	// (0x0007ed78) cale_month_corner_pane

0x364f,	// (0x0007ed92) cale_month_day_heading_pane_ParamLimits

0x364f,	// (0x0007ed92) cale_month_day_heading_pane

0x36aa,	// (0x0007eded) cale_month_pane_g1_ParamLimits

0x36aa,	// (0x0007eded) cale_month_pane_g1

0x36e2,	// (0x0007ee25) cale_month_pane_g2_ParamLimits

0x36e2,	// (0x0007ee25) cale_month_pane_g2

0x370d,	// (0x0007ee50) cale_month_pane_g3_ParamLimits

0x370d,	// (0x0007ee50) cale_month_pane_g3

0x375d,	// (0x0007eea0) cale_month_pane_g4_ParamLimits

0x375d,	// (0x0007eea0) cale_month_pane_g4

0x37ad,	// (0x0007eef0) cale_month_pane_g5_ParamLimits

0x37ad,	// (0x0007eef0) cale_month_pane_g5

0x37fd,	// (0x0007ef40) cale_month_pane_g6_ParamLimits

0x37fd,	// (0x0007ef40) cale_month_pane_g6

0x384d,	// (0x0007ef90) cale_month_pane_g7_ParamLimits

0x384d,	// (0x0007ef90) cale_month_pane_g7

0x38b5,	// (0x0007eff8) cale_month_pane_g8_ParamLimits

0x38b5,	// (0x0007eff8) cale_month_pane_g8

0x391d,	// (0x0007f060) cale_month_pane_g9_ParamLimits

0x391d,	// (0x0007f060) cale_month_pane_g9

0x397b,	// (0x0007f0be) cale_month_pane_g10_ParamLimits

0x397b,	// (0x0007f0be) cale_month_pane_g10

0x39d9,	// (0x0007f11c) cale_month_pane_g11_ParamLimits

0x39d9,	// (0x0007f11c) cale_month_pane_g11

0x3a2d,	// (0x0007f170) cale_month_pane_g12_ParamLimits

0x3a2d,	// (0x0007f170) cale_month_pane_g12

0x3a83,	// (0x0007f1c6) cale_month_pane_g13_ParamLimits

0x3a83,	// (0x0007f1c6) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0008a9ce) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0008a9ce) cale_month_pane_g

0x3ad9,	// (0x0007f21c) cale_month_week_pane

0x3aee,	// (0x0007f231) grid_cale_month_pane_ParamLimits

0x3aee,	// (0x0007f231) grid_cale_month_pane

0x3b40,	// (0x0007f283) cale_month_day_heading_pane_t1

0x3bc6,	// (0x0007f309) cale_month_day_heading_pane_t2

0x3c57,	// (0x0007f39a) cale_month_day_heading_pane_t3

0x3ce8,	// (0x0007f42b) cale_month_day_heading_pane_t4

0x3d79,	// (0x0007f4bc) cale_month_day_heading_pane_t5

0x3e0a,	// (0x0007f54d) cale_month_day_heading_pane_t6

0x3ea7,	// (0x0007f5ea) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008a9e9) cale_month_day_heading_pane_t

0xa8b4,	// (0x00085ff7) bg_cale_side_pane_cp01

0x3f50,	// (0x0007f693) cale_month_week_pane_t1

0x3f69,	// (0x0007f6ac) cale_month_week_pane_t2

0x3f82,	// (0x0007f6c5) cale_month_week_pane_t3

0x3f9b,	// (0x0007f6de) cale_month_week_pane_t4

0x3fb8,	// (0x0007f6fb) cale_month_week_pane_t5

0x3fd9,	// (0x0007f71c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008a9f8) cale_month_week_pane_t

0x3ffa,	// (0x0007f73d) cell_cale_month_pane_ParamLimits

0x3ffa,	// (0x0007f73d) cell_cale_month_pane

0x4120,	// (0x0007f863) cell_cale_month_pane_g1

0x412c,	// (0x0007f86f) cell_cale_month_pane_t1_ParamLimits

0x412c,	// (0x0007f86f) cell_cale_month_pane_t1

0xa8c2,	// (0x00086005) grid_highlight_pane_cp08

0xa73c,	// (0x00085e7f) main_smil_g1

0x414c,	// (0x0007f88f) smil_status_pane

0xac59,	// (0x0008639c) smil_text_pane

0xc5e3,	// (0x00087d26) bg_popup_call3_rect_pane_g8

0xc5eb,	// (0x00087d2e) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0008acb1) bg_popup_call3_rect_pane_g

0xc832,	// (0x00087f75) smil_status_volume_pane_g1

0xac63,	// (0x000863a6) smil_status_pane_t1

0x5492,	// (0x00080bd5) volume_smil_pane

0xac7a,	// (0x000863bd) list_smil_text_pane

0x415f,	// (0x0007f8a2) scroll_pane_cp011

0x416a,	// (0x0007f8ad) smil_text_list_pane_t1_ParamLimits

0x416a,	// (0x0007f8ad) smil_text_list_pane_t1

0x41fe,	// (0x0007f941) aid_volume_smil_ParamLimits

0x41fe,	// (0x0007f941) aid_volume_smil

0xa73c,	// (0x00085e7f) smil_volume_pane_g1

0xa73c,	// (0x00085e7f) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0008aa18) smil_volume_pane_g

0x2737,	// (0x0007de7a) listscroll_cale_day_pane

0xac84,	// (0x000863c7) bg_cale_pane

0xac9c,	// (0x000863df) list_cale_pane

0xacbf,	// (0x00086402) scroll_pane_cp09

0xacd0,	// (0x00086413) cale_bg_pane_g1

0xacd8,	// (0x0008641b) cale_bg_pane_g2

0xace0,	// (0x00086423) cale_bg_pane_g3

0xace8,	// (0x0008642b) cale_bg_pane_g4

0xacf0,	// (0x00086433) cale_bg_pane_g5

0xacf8,	// (0x0008643b) cale_bg_pane_g6

0xad00,	// (0x00086443) cale_bg_pane_g7

0xad08,	// (0x0008644b) cale_bg_pane_g8

0xad10,	// (0x00086453) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0008aa1d) cale_bg_pane_g

0x4220,	// (0x0007f963) list_cale_time_pane_ParamLimits

0x4220,	// (0x0007f963) list_cale_time_pane

0xad20,	// (0x00086463) list_cale_time_pane_g1_ParamLimits

0xad20,	// (0x00086463) list_cale_time_pane_g1

0xad2c,	// (0x0008646f) list_cale_time_pane_g2_ParamLimits

0xad2c,	// (0x0008646f) list_cale_time_pane_g2

0x424c,	// (0x0007f98f) list_cale_time_pane_g3_ParamLimits

0x424c,	// (0x0007f98f) list_cale_time_pane_g3

0x425a,	// (0x0007f99d) list_cale_time_pane_g4_ParamLimits

0x425a,	// (0x0007f99d) list_cale_time_pane_g4

0x4268,	// (0x0007f9ab) list_cale_time_pane_g5_ParamLimits

0x4268,	// (0x0007f9ab) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0008aa30) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0008aa30) list_cale_time_pane_g

0xad46,	// (0x00086489) list_cale_time_pane_t1_ParamLimits

0xad46,	// (0x00086489) list_cale_time_pane_t1

0xad6e,	// (0x000864b1) list_cale_time_pane_t2_ParamLimits

0xad6e,	// (0x000864b1) list_cale_time_pane_t2

0x450a,	// (0x0007fc4d) aid_blid_cardinal_pane

0x454c,	// (0x0007fc8f) compass_pane_t4

0xad96,	// (0x000864d9) list_cale_time_pane_t4_ParamLimits

0xad96,	// (0x000864d9) list_cale_time_pane_t4

0x455a,	// (0x0007fc9d) compass_pane_t5

0x456a,	// (0x0007fcad) compass_pane_t6

0x4578,	// (0x0007fcbb) compass_pane_t7

0xb253,	// (0x00086996) navi_pane_cc_t1

0xb446,	// (0x00086b89) aid_phob_thumbnail_center_pane

0x4b63,	// (0x000802a6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0008aa3d) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0008aa3d) list_cale_time_pane_t

0x9fff,	// (0x00085742) bg_popup_window_pane_cp02_ParamLimits

0x9fff,	// (0x00085742) bg_popup_window_pane_cp02

0xadbe,	// (0x00086501) heading_pane_cp01_ParamLimits

0xadbe,	// (0x00086501) heading_pane_cp01

0xadca,	// (0x0008650d) loc_req_pane_ParamLimits

0xadca,	// (0x0008650d) loc_req_pane

0xadda,	// (0x0008651d) loc_type_pane_ParamLimits

0xadda,	// (0x0008651d) loc_type_pane

0xadec,	// (0x0008652f) loc_type_pane_t1_ParamLimits

0xadec,	// (0x0008652f) loc_type_pane_t1

0xadfe,	// (0x00086541) loc_type_pane_t2_ParamLimits

0xadfe,	// (0x00086541) loc_type_pane_t2

0xae10,	// (0x00086553) loc_type_pane_t3_ParamLimits

0xae10,	// (0x00086553) loc_type_pane_t3

0x0002,

0xf301,	// (0x0008aa44) loc_type_pane_t_ParamLimits

0xf301,	// (0x0008aa44) loc_type_pane_t

0xae22,	// (0x00086565) list_loc_req_pane

0xae2c,	// (0x0008656f) scroll_pane_cp012

0x0df0,	// (0x0007c533) list_single_loc_request_popup_menu_pane_ParamLimits

0x0df0,	// (0x0007c533) list_single_loc_request_popup_menu_pane

0xae37,	// (0x0008657a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae37,	// (0x0008657a) list_single_loc_request_popup_menu_pane_g1

0xae43,	// (0x00086586) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae43,	// (0x00086586) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0008aa4b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0008aa4b) list_single_loc_request_popup_menu_pane_g

0xae4f,	// (0x00086592) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae4f,	// (0x00086592) list_single_loc_request_popup_menu_pane_t1

0x4276,	// (0x0007f9b9) bg_popup_window_pane_cp03_ParamLimits

0x4276,	// (0x0007f9b9) bg_popup_window_pane_cp03

0x4284,	// (0x0007f9c7) heading_loc_req_pane_ParamLimits

0x4284,	// (0x0007f9c7) heading_loc_req_pane

0x4290,	// (0x0007f9d3) popup_dyc_status_message_window_g1_ParamLimits

0x4290,	// (0x0007f9d3) popup_dyc_status_message_window_g1

0x429c,	// (0x0007f9df) popup_dyc_status_message_window_t1_ParamLimits

0x429c,	// (0x0007f9df) popup_dyc_status_message_window_t1

0x42ae,	// (0x0007f9f1) popup_dyc_status_message_window_t2_ParamLimits

0x42ae,	// (0x0007f9f1) popup_dyc_status_message_window_t2

0x42c0,	// (0x0007fa03) popup_dyc_status_message_window_t3_ParamLimits

0x42c0,	// (0x0007fa03) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0008aa50) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0008aa50) popup_dyc_status_message_window_t

0xa3a8,	// (0x00085aeb) bg_heading_pane_cp01

0xae65,	// (0x000865a8) heading_loc_req_pane_g1

0xae6d,	// (0x000865b0) heading_loc_req_pane_g2

0xae81,	// (0x000865c4) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008aa57) heading_loc_req_pane_g

0xae89,	// (0x000865cc) heading_loc_req_pane_t1

0xae98,	// (0x000865db) bg_popup_sub_pane_cp01_ParamLimits

0xae98,	// (0x000865db) bg_popup_sub_pane_cp01

0xaea6,	// (0x000865e9) popup_cale_events_window_g1_ParamLimits

0xaea6,	// (0x000865e9) popup_cale_events_window_g1

0xaec6,	// (0x00086609) popup_cale_events_window_g2_ParamLimits

0xaec6,	// (0x00086609) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008aa8b) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008aa8b) popup_cale_events_window_g

0xaee6,	// (0x00086629) popup_cale_events_window_t1_ParamLimits

0xaee6,	// (0x00086629) popup_cale_events_window_t1

0xaef8,	// (0x0008663b) popup_cale_events_window_t2_ParamLimits

0xaef8,	// (0x0008663b) popup_cale_events_window_t2

0xaf36,	// (0x00086679) popup_cale_events_window_t3_ParamLimits

0xaf36,	// (0x00086679) popup_cale_events_window_t3

0xaf70,	// (0x000866b3) popup_cale_events_window_t4_ParamLimits

0xaf70,	// (0x000866b3) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0008aa90) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0008aa90) popup_cale_events_window_t

0x42ea,	// (0x0007fa2d) call_type_pane

0xb2c6,	// (0x00086a09) popup_call_status_window_g1

0x42f6,	// (0x0007fa39) popup_call_status_window_g2

0x4302,	// (0x0007fa45) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008aa99) popup_call_status_window_g

0xafa6,	// (0x000866e9) call_type_pane_g1

0xafaf,	// (0x000866f2) call_type_pane_g2

0x0001,

0xf35d,	// (0x0008aaa0) call_type_pane_g

0xa3a8,	// (0x00085aeb) bg_popup_sub_pane_cp02

0xafb8,	// (0x000866fb) listscroll_popup_wml_pane

0xafc0,	// (0x00086703) list_wml_pane

0xafca,	// (0x0008670d) scroll_pane_cp013

0xafd5,	// (0x00086718) list_single_graphic_popup_wml_pane_ParamLimits

0xafd5,	// (0x00086718) list_single_graphic_popup_wml_pane

0xa73c,	// (0x00085e7f) list_single_graphic_popup_wml_pane_g1

0xafe9,	// (0x0008672c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0008aaa5) list_single_graphic_popup_wml_pane_g

0xaff1,	// (0x00086734) list_single_graphic_popup_wml_pane_t1

0xb007,	// (0x0008674a) aid_call_pane

0xa5fb,	// (0x00085d3e) popup_clock_analogue_window_g1

0xa5fb,	// (0x00085d3e) popup_clock_analogue_window_g2

0x430e,	// (0x0007fa51) popup_clock_analogue_window_g3

0x430e,	// (0x0007fa51) popup_clock_analogue_window_g4

0xa73c,	// (0x00085e7f) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0008aaaa) popup_clock_analogue_window_g

0x4316,	// (0x0007fa59) popup_clock_analogue_window_t1

0x4324,	// (0x0007fa67) clock_digital_number_pane_ParamLimits

0x4324,	// (0x0007fa67) clock_digital_number_pane

0x4330,	// (0x0007fa73) clock_digital_number_pane_cp02_ParamLimits

0x4330,	// (0x0007fa73) clock_digital_number_pane_cp02

0x433c,	// (0x0007fa7f) clock_digital_number_pane_cp03_ParamLimits

0x433c,	// (0x0007fa7f) clock_digital_number_pane_cp03

0x4348,	// (0x0007fa8b) clock_digital_number_pane_cp04_ParamLimits

0x4348,	// (0x0007fa8b) clock_digital_number_pane_cp04

0x4358,	// (0x0007fa9b) clock_digital_separator_pane_ParamLimits

0x4358,	// (0x0007fa9b) clock_digital_separator_pane

0x4364,	// (0x0007faa7) popup_clock_digital_window_t1

0xa73c,	// (0x00085e7f) clock_digital_number_pane_g1

0xa73c,	// (0x00085e7f) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0008aa18) clock_digital_number_pane_g

0xa73c,	// (0x00085e7f) clock_digital_separator_pane_g1

0xa73c,	// (0x00085e7f) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0008aa18) clock_digital_separator_pane_g

0xa3a8,	// (0x00085aeb) bg_popup_window_pane_cp04

0xb00f,	// (0x00086752) heading_pane_cp03

0xb017,	// (0x0008675a) listscroll_popup_gms_pane

0xb01f,	// (0x00086762) grid_large_graphic_popup_pane

0xb029,	// (0x0008676c) listscroll_popup_gms_pane_g1

0xb031,	// (0x00086774) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0008aab5) listscroll_popup_gms_pane_g

0xaabe,	// (0x00086201) scroll_pane_cp014

0xb039,	// (0x0008677c) cell_large_graphic_popup_pane_ParamLimits

0xb039,	// (0x0008677c) cell_large_graphic_popup_pane

0xb051,	// (0x00086794) cell_large_graphic_popup_pane_g1_ParamLimits

0xb051,	// (0x00086794) cell_large_graphic_popup_pane_g1

0xb05d,	// (0x000867a0) cell_large_graphic_popup_pane_g2_ParamLimits

0xb05d,	// (0x000867a0) cell_large_graphic_popup_pane_g2

0xb069,	// (0x000867ac) cell_large_graphic_popup_pane_g3_ParamLimits

0xb069,	// (0x000867ac) cell_large_graphic_popup_pane_g3

0xb076,	// (0x000867b9) cell_large_graphic_popup_pane_g4_ParamLimits

0xb076,	// (0x000867b9) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0008aaba) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0008aaba) cell_large_graphic_popup_pane_g

0xb086,	// (0x000867c9) grid_highlight_pane_cp010

0xa73c,	// (0x00085e7f) bg_popup_call_pane_g1

0xb090,	// (0x000867d3) list_single_graphic_popup_conf_pane_ParamLimits

0xb090,	// (0x000867d3) list_single_graphic_popup_conf_pane

0xb0a3,	// (0x000867e6) list_highlight_pane_cp01

0xb0ac,	// (0x000867ef) list_single_graphic_popup_conf_pane_g1

0xb0b4,	// (0x000867f7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0008aac3) list_single_graphic_popup_conf_pane_g

0xb0bc,	// (0x000867ff) list_single_graphic_popup_conf_pane_t1

0xb0ca,	// (0x0008680d) linegrid_cams_pane_g1

0x4381,	// (0x0007fac4) linegrid_cams_pane_g2

0xa7f4,	// (0x00085f37) linegrid_cams_pane_g3

0xb0d3,	// (0x00086816) linegrid_cams_pane_g4

0x438a,	// (0x0007facd) linegrid_cams_pane_g5

0x4393,	// (0x0007fad6) linegrid_cams_pane_g6

0xa8f5,	// (0x00086038) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0008aac8) linegrid_cams_pane_g

0xb0dc,	// (0x0008681f) popup_clock_analogue_window

0xb0dc,	// (0x0008681f) popup_clock_digital_window

0xa3a8,	// (0x00085aeb) popup_phob_thumbnail_window

0xa73c,	// (0x00085e7f) call_video_uplink_pane_g1

0xb0e5,	// (0x00086828) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0008aad7) call_video_uplink_pane_g

0xa8c2,	// (0x00086005) video_uplink_pane

0xb0ed,	// (0x00086830) mce_image_pane_g1

0x439c,	// (0x0007fadf) mce_image_pane_g2

0x43a4,	// (0x0007fae7) mce_image_pane_g3

0x43ac,	// (0x0007faef) mce_image_pane_g4

0x43b4,	// (0x0007faf7) mce_image_pane_g5

0x0004,

0xf399,	// (0x0008aadc) mce_image_pane_g

0xb0f7,	// (0x0008683a) control_top_pane_stacon_cp01_ParamLimits

0xb0f7,	// (0x0008683a) control_top_pane_stacon_cp01

0xb10b,	// (0x0008684e) uni_indicator_pane_stacon_cp01_ParamLimits

0xb10b,	// (0x0008684e) uni_indicator_pane_stacon_cp01

0xb11c,	// (0x0008685f) bg_popup_sub_pane_cp03

0x43bc,	// (0x0007faff) chi_dic_find_pane

0x43c4,	// (0x0007fb07) listscroll_chi_dic_pane

0x43cd,	// (0x0007fb10) main_pane_chidic_g1

0xb126,	// (0x00086869) chi_dic_find_pane_t1

0xb134,	// (0x00086877) find_chidic_pane

0xb13d,	// (0x00086880) chi_dic_list_pane_ParamLimits

0xb13d,	// (0x00086880) chi_dic_list_pane

0xb14e,	// (0x00086891) scroll_pane_cp020

0xb156,	// (0x00086899) find_chidic_pane_t1

0xa3a8,	// (0x00085aeb) input_focus_pane_cp06

0x43e0,	// (0x0007fb23) list_chi_dic_pane_ParamLimits

0x43e0,	// (0x0007fb23) list_chi_dic_pane

0x43fd,	// (0x0007fb40) list_chi_dic_pane_t1_ParamLimits

0x43fd,	// (0x0007fb40) list_chi_dic_pane_t1

0xa3a8,	// (0x00085aeb) list_highlight_pane_cp020

0xb165,	// (0x000868a8) bg_cale_heading_pane_g1

0x4410,	// (0x0007fb53) bg_cale_heading_pane_g2

0x4418,	// (0x0007fb5b) bg_cale_heading_pane_g3

0x4420,	// (0x0007fb63) bg_cale_heading_pane_g4

0x442a,	// (0x0007fb6d) bg_cale_heading_pane_g5

0x4434,	// (0x0007fb77) bg_cale_heading_pane_g6

0x443c,	// (0x0007fb7f) bg_cale_heading_pane_g7

0x4444,	// (0x0007fb87) bg_cale_heading_pane_g8

0x444e,	// (0x0007fb91) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0008aae7) bg_cale_heading_pane_g

0xb165,	// (0x000868a8) bg_cale_side_pane_g1

0x4458,	// (0x0007fb9b) bg_cale_side_pane_g2

0x4462,	// (0x0007fba5) bg_cale_side_pane_g3

0x446c,	// (0x0007fbaf) bg_cale_side_pane_g4

0x4476,	// (0x0007fbb9) bg_cale_side_pane_g5

0x4480,	// (0x0007fbc3) bg_cale_side_pane_g6

0x448a,	// (0x0007fbcd) bg_cale_side_pane_g7

0x4494,	// (0x0007fbd7) bg_cale_side_pane_g8

0x449c,	// (0x0007fbdf) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008aafa) bg_cale_side_pane_g

0x44a4,	// (0x0007fbe7) popup_call_status_window_ParamLimits

0x44a4,	// (0x0007fbe7) popup_call_status_window

0xb16d,	// (0x000868b0) stacon_top_pane

0xb175,	// (0x000868b8) status_pane_ParamLimits

0xb175,	// (0x000868b8) status_pane

0xb18a,	// (0x000868cd) status_small_pane

0xb192,	// (0x000868d5) control_pane

0xa3a8,	// (0x00085aeb) stacon_bottom_pane

0xb19a,	// (0x000868dd) list_single_mce_smart_pane_t1_ParamLimits

0xb19a,	// (0x000868dd) list_single_mce_smart_pane_t1

0xb1ad,	// (0x000868f0) list_single_mce_smart_pane_t2_ParamLimits

0xb1ad,	// (0x000868f0) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0008ab0d) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0008ab0d) list_single_mce_smart_pane_t

0x44b0,	// (0x0007fbf3) compass_pane

0x44bc,	// (0x0007fbff) main_location2_pane_t1

0x44d0,	// (0x0007fc13) main_location2_pane_t2

0x44e4,	// (0x0007fc27) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0008ab12) main_location2_pane_t

0xb1cc,	// (0x0008690f) compass_pane_g1_ParamLimits

0xb1cc,	// (0x0008690f) compass_pane_g1

0x452e,	// (0x0007fc71) compass_pane_t1

0x453d,	// (0x0007fc80) compass_pane_t2

0x0005,

0xf3d8,	// (0x0008ab1b) compass_pane_t

0x4588,	// (0x0007fccb) text_secondary_cp61

0xb24a,	// (0x0008698d) navi_pane_cams_g5

0xb2d4,	// (0x00086a17) navi_pane_im_t1

0xb2e2,	// (0x00086a25) navi_pane_mp_g1_ParamLimits

0xb2e2,	// (0x00086a25) navi_pane_mp_g1

0xb2f6,	// (0x00086a39) navi_pane_mp_g2_ParamLimits

0xb2f6,	// (0x00086a39) navi_pane_mp_g2

0xb302,	// (0x00086a45) navi_pane_mp_g3_ParamLimits

0xb302,	// (0x00086a45) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0008ab2f) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0008ab2f) navi_pane_mp_g

0xb30e,	// (0x00086a51) navi_pane_mp_t1

0xb31c,	// (0x00086a5f) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0008ab36) navi_pane_mp_t

0xb387,	// (0x00086aca) navi_pane_vt_g1

0xb30e,	// (0x00086a51) navi_pane_vt_t1

0xb38f,	// (0x00086ad2) navi_slider_pane

0xb39f,	// (0x00086ae2) zooming_pane

0xb3a7,	// (0x00086aea) navi_slider_pane_g1

0x45c3,	// (0x0007fd06) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0008ab3d) navi_slider_pane_g

0xb3cb,	// (0x00086b0e) aid_levels_zoom

0xb3d3,	// (0x00086b16) zooming_pane_g1

0xb3db,	// (0x00086b1e) zooming_pane_g2

0xb3db,	// (0x00086b1e) zooming_pane_g3

0x0002,

0xf409,	// (0x0008ab4c) zooming_pane_g

0xb3e3,	// (0x00086b26) level_10_zoom

0xb3ec,	// (0x00086b2f) level_11_zoom

0xb3f5,	// (0x00086b38) level_1_zoom

0xb3fe,	// (0x00086b41) level_2_zoom

0xb407,	// (0x00086b4a) level_3_zoom

0xb410,	// (0x00086b53) level_4_zoom

0xb419,	// (0x00086b5c) level_5_zoom

0xb422,	// (0x00086b65) level_6_zoom

0xb42b,	// (0x00086b6e) level_7_zoom

0xb434,	// (0x00086b77) level_8_zoom

0xb43d,	// (0x00086b80) level_9_zoom

0xb44e,	// (0x00086b91) popup_phob_thumbnail_window_g1

0xb456,	// (0x00086b99) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0008ab53) popup_phob_thumbnail_window_g

0xc745,	// (0x00087e88) level_1_location

0xc74d,	// (0x00087e90) level_2_location

0xc755,	// (0x00087e98) level_3_location

0xc75d,	// (0x00087ea0) level_4_location

0xb39f,	// (0x00086ae2) level_5_location

0x45d5,	// (0x0007fd18) mce_icon_pane_g1

0x45dd,	// (0x0007fd20) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008ab58) mce_icon_pane_g

0x45e5,	// (0x0007fd28) main_mup_pane_g1_ParamLimits

0x45e5,	// (0x0007fd28) main_mup_pane_g1

0x45fd,	// (0x0007fd40) main_mup_pane_g2_ParamLimits

0x45fd,	// (0x0007fd40) main_mup_pane_g2

0x4619,	// (0x0007fd5c) main_mup_pane_g3_ParamLimits

0x4619,	// (0x0007fd5c) main_mup_pane_g3

0x4635,	// (0x0007fd78) main_mup_pane_g4_ParamLimits

0x4635,	// (0x0007fd78) main_mup_pane_g4

0x4651,	// (0x0007fd94) main_mup_pane_g5_ParamLimits

0x4651,	// (0x0007fd94) main_mup_pane_g5

0x4672,	// (0x0007fdb5) main_mup_pane_g6_ParamLimits

0x4672,	// (0x0007fdb5) main_mup_pane_g6

0x468e,	// (0x0007fdd1) main_mup_pane_g7_ParamLimits

0x468e,	// (0x0007fdd1) main_mup_pane_g7

0x46aa,	// (0x0007fded) main_mup_pane_g8_ParamLimits

0x46aa,	// (0x0007fded) main_mup_pane_g8

0x46c6,	// (0x0007fe09) main_mup_pane_g9_ParamLimits

0x46c6,	// (0x0007fe09) main_mup_pane_g9

0x46e5,	// (0x0007fe28) main_mup_pane_g10_ParamLimits

0x46e5,	// (0x0007fe28) main_mup_pane_g10

0x4704,	// (0x0007fe47) main_mup_pane_g11_ParamLimits

0x4704,	// (0x0007fe47) main_mup_pane_g11

0x471c,	// (0x0007fe5f) main_mup_pane_g12_ParamLimits

0x471c,	// (0x0007fe5f) main_mup_pane_g12

0x472a,	// (0x0007fe6d) main_mup_pane_g13_ParamLimits

0x472a,	// (0x0007fe6d) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0008ab5d) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0008ab5d) main_mup_pane_g

0x4740,	// (0x0007fe83) main_mup_pane_t1_ParamLimits

0x4740,	// (0x0007fe83) main_mup_pane_t1

0x475d,	// (0x0007fea0) main_mup_pane_t2_ParamLimits

0x475d,	// (0x0007fea0) main_mup_pane_t2

0x4777,	// (0x0007feba) main_mup_pane_t3_ParamLimits

0x4777,	// (0x0007feba) main_mup_pane_t3

0x4791,	// (0x0007fed4) main_mup_pane_t4_ParamLimits

0x4791,	// (0x0007fed4) main_mup_pane_t4

0x47a3,	// (0x0007fee6) main_mup_pane_t5_ParamLimits

0x47a3,	// (0x0007fee6) main_mup_pane_t5

0x47b5,	// (0x0007fef8) main_mup_pane_t6_ParamLimits

0x47b5,	// (0x0007fef8) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008ab78) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008ab78) main_mup_pane_t

0x47cb,	// (0x0007ff0e) mup_progress_pane_ParamLimits

0x47cb,	// (0x0007ff0e) mup_progress_pane

0x47d7,	// (0x0007ff1a) mup_visualizer_pane_ParamLimits

0x47d7,	// (0x0007ff1a) mup_visualizer_pane

0x4815,	// (0x0007ff58) mup_volume_pane_ParamLimits

0x4815,	// (0x0007ff58) mup_volume_pane

0xb2c6,	// (0x00086a09) mup_visualizer_pane_g1_ParamLimits

0xb2c6,	// (0x00086a09) mup_visualizer_pane_g1

0xb2c6,	// (0x00086a09) mup_visualizer_pane_g2_ParamLimits

0xb2c6,	// (0x00086a09) mup_visualizer_pane_g2

0xb1cc,	// (0x0008690f) mup_visualizer_pane_g3_ParamLimits

0xb1cc,	// (0x0008690f) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0008ab85) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0008ab85) mup_visualizer_pane_g

0xa73c,	// (0x00085e7f) mup_volume_pane_g1

0xb466,	// (0x00086ba9) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008ab8c) mup_volume_pane_g

0xa73c,	// (0x00085e7f) mup_progress_pane_g1

0xb46f,	// (0x00086bb2) mup_progress_pane_g2

0xb478,	// (0x00086bbb) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0008ab91) mup_progress_pane_g

0xa3a8,	// (0x00085aeb) bg_popup_window_pane_cp05

0xb481,	// (0x00086bc4) heading_pane_cp02_ParamLimits

0xb481,	// (0x00086bc4) heading_pane_cp02

0xb49b,	// (0x00086bde) list_popup_blid_pane

0xb4a3,	// (0x00086be6) list_blid_sat_info_pane_ParamLimits

0xb4a3,	// (0x00086be6) list_blid_sat_info_pane

0xb4b6,	// (0x00086bf9) list_blid_sat_info_pane_g1

0xb4be,	// (0x00086c01) list_blid_sat_info_pane_t1

0x4920,	// (0x00080063) mup_equalizer_pane_ParamLimits

0x4920,	// (0x00080063) mup_equalizer_pane

0x4941,	// (0x00080084) mup_equalizer_pane_cp1_ParamLimits

0x4941,	// (0x00080084) mup_equalizer_pane_cp1

0x4962,	// (0x000800a5) mup_equalizer_pane_cp2_ParamLimits

0x4962,	// (0x000800a5) mup_equalizer_pane_cp2

0x4983,	// (0x000800c6) mup_equalizer_pane_cp3_ParamLimits

0x4983,	// (0x000800c6) mup_equalizer_pane_cp3

0x49a4,	// (0x000800e7) mup_equalizer_pane_cp4_ParamLimits

0x49a4,	// (0x000800e7) mup_equalizer_pane_cp4

0x49c5,	// (0x00080108) mup_equalizer_pane_cp5

0x49db,	// (0x0008011e) mup_equalizer_pane_cp6

0x49f3,	// (0x00080136) mup_equalizer_pane_cp7

0xc663,	// (0x00087da6) bg_popup_call_poc_act_pane_g9

0xc66b,	// (0x00087dae) bg_popup_call_poc_act_pane_g10

0xc673,	// (0x00087db6) bg_popup_call_poc_act_pane_g11

0x000a,

0xa603,	// (0x00085d46) mup_scale_pane

0xa73c,	// (0x00085e7f) mup_scale_pane_g1

0xb4cc,	// (0x00086c0f) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0008abad) mup_scale_pane_g

0xb4f0,	// (0x00086c33) msg_data_pane

0xb4f8,	// (0x00086c3b) scroll_pane_cp017

0x0edb,	// (0x0007c61e) bg_list_pane_cp04_ParamLimits

0x0edb,	// (0x0007c61e) bg_list_pane_cp04

0xb500,	// (0x00086c43) msg_data_pane_g1

0x4a1d,	// (0x00080160) msg_data_pane_g2

0x43a4,	// (0x0007fae7) msg_data_pane_g3

0x4a25,	// (0x00080168) msg_data_pane_g4

0x4a2d,	// (0x00080170) msg_data_pane_g5

0x4a35,	// (0x00080178) msg_data_pane_g6

0x4a3d,	// (0x00080180) msg_data_pane_g7

0x0006,

0xf479,	// (0x0008abbc) msg_data_pane_g

0x0eff,	// (0x0007c642) msg_text_pane_ParamLimits

0x0eff,	// (0x0007c642) msg_text_pane

0x4a45,	// (0x00080188) qrid_highlight_pane_cp011_ParamLimits

0x4a45,	// (0x00080188) qrid_highlight_pane_cp011

0xa3a8,	// (0x00085aeb) msg_body_pane

0xa3a8,	// (0x00085aeb) msg_header_pane

0xb511,	// (0x00086c54) input_focus_pane_cp07

0x0f4f,	// (0x0007c692) msg_header_pane_t1_ParamLimits

0x0f4f,	// (0x0007c692) msg_header_pane_t1

0x0f61,	// (0x0007c6a4) msg_header_pane_t2_ParamLimits

0x0f61,	// (0x0007c6a4) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0008abd0) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0008abd0) msg_header_pane_t

0xb526,	// (0x00086c69) msg_body_pane_g1

0x0f73,	// (0x0007c6b6) msg_body_pane_t1_ParamLimits

0x0f73,	// (0x0007c6b6) msg_body_pane_t1

0x0fa4,	// (0x0007c6e7) msg_body_pane_t2_ParamLimits

0x0fa4,	// (0x0007c6e7) msg_body_pane_t2

0x0fb6,	// (0x0007c6f9) msg_body_pane_t3_ParamLimits

0x0fb6,	// (0x0007c6f9) msg_body_pane_t3

0x0002,

0xf492,	// (0x0008abd5) msg_body_pane_t_ParamLimits

0xf492,	// (0x0008abd5) msg_body_pane_t

0x4ab3,	// (0x000801f6) main_viewer_pane_g1_ParamLimits

0x4ab3,	// (0x000801f6) main_viewer_pane_g1

0x4abf,	// (0x00080202) main_viewer_pane_g2_ParamLimits

0x4abf,	// (0x00080202) main_viewer_pane_g2

0x4acb,	// (0x0008020e) main_viewer_pane_g3_ParamLimits

0x4acb,	// (0x0008020e) main_viewer_pane_g3

0x4adc,	// (0x0008021f) main_viewer_pane_g4_ParamLimits

0x4adc,	// (0x0008021f) main_viewer_pane_g4

0x4aed,	// (0x00080230) main_viewer_pane_g5_ParamLimits

0x4aed,	// (0x00080230) main_viewer_pane_g5

0x4aed,	// (0x00080230) main_viewer_pane_g7_ParamLimits

0x4aed,	// (0x00080230) main_viewer_pane_g7

0x4aff,	// (0x00080242) main_viewer_pane_g8_ParamLimits

0x4aff,	// (0x00080242) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0008abe5) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0008abe5) main_viewer_pane_g

0xb52e,	// (0x00086c71) viewer_content_pane_ParamLimits

0xb52e,	// (0x00086c71) viewer_content_pane

0x4b37,	// (0x0008027a) main_postcard_pane_g1_ParamLimits

0x4b37,	// (0x0008027a) main_postcard_pane_g1

0x4b45,	// (0x00080288) main_postcard_pane_g2_ParamLimits

0x4b45,	// (0x00080288) main_postcard_pane_g2

0x4b53,	// (0x00080296) main_postcard_pane_g3_ParamLimits

0x4b53,	// (0x00080296) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0008abf6) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0008abf6) main_postcard_pane_g

0x4b63,	// (0x000802a6) main_postcard_pane_g4

0xc845,	// (0x00087f88) smil_status_volume_pane_g2

0x4b8f,	// (0x000802d2) postcard_pane_ParamLimits

0x4b8f,	// (0x000802d2) postcard_pane

0xb2c6,	// (0x00086a09) postcard_pane_g1_ParamLimits

0xb2c6,	// (0x00086a09) postcard_pane_g1

0x4bc1,	// (0x00080304) postcard_pane_g2_ParamLimits

0x4bc1,	// (0x00080304) postcard_pane_g2

0x4bcd,	// (0x00080310) postcard_pane_g3_ParamLimits

0x4bcd,	// (0x00080310) postcard_pane_g3

0xb53c,	// (0x00086c7f) postcard_pane_g4_ParamLimits

0xb53c,	// (0x00086c7f) postcard_pane_g4

0x4bd9,	// (0x0008031c) postcard_pane_g5_ParamLimits

0x4bd9,	// (0x0008031c) postcard_pane_g5

0x4be5,	// (0x00080328) postcard_pane_g6_ParamLimits

0x4be5,	// (0x00080328) postcard_pane_g6

0xb54a,	// (0x00086c8d) postcard_pane_g7_ParamLimits

0xb54a,	// (0x00086c8d) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0008ac03) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0008ac03) postcard_pane_g

0x4bf1,	// (0x00080334) main_mp2_pane_g1_ParamLimits

0x4bf1,	// (0x00080334) main_mp2_pane_g1

0x4bfd,	// (0x00080340) main_mp2_pane_g2_ParamLimits

0x4bfd,	// (0x00080340) main_mp2_pane_g2

0x4c09,	// (0x0008034c) main_mp2_pane_g3_ParamLimits

0x4c09,	// (0x0008034c) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0008ac12) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0008ac12) main_mp2_pane_g

0x4c15,	// (0x00080358) main_mp2_pane_t1_ParamLimits

0x4c15,	// (0x00080358) main_mp2_pane_t1

0x4c2c,	// (0x0008036f) main_mp2_pane_t2_ParamLimits

0x4c2c,	// (0x0008036f) main_mp2_pane_t2

0x4c3e,	// (0x00080381) main_mp2_pane_t3_ParamLimits

0x4c3e,	// (0x00080381) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0008ac19) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0008ac19) main_mp2_pane_t

0xb558,	// (0x00086c9b) pec_content_pane_ParamLimits

0xb558,	// (0x00086c9b) pec_content_pane

0xaabe,	// (0x00086201) scroll_pane_cp015

0xb56a,	// (0x00086cad) pec_attribute_pane_ParamLimits

0xb56a,	// (0x00086cad) pec_attribute_pane

0x4c50,	// (0x00080393) pec_content_pane_g1_ParamLimits

0x4c50,	// (0x00080393) pec_content_pane_g1

0xb57a,	// (0x00086cbd) pec_content_pane_t1_ParamLimits

0xb57a,	// (0x00086cbd) pec_content_pane_t1

0xb58c,	// (0x00086ccf) pec_content_pane_t2_ParamLimits

0xb58c,	// (0x00086ccf) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0008ac20) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0008ac20) pec_content_pane_t

0x4c5c,	// (0x0008039f) list_single_graphic_pane_cp01_ParamLimits

0x4c5c,	// (0x0008039f) list_single_graphic_pane_cp01

0xa603,	// (0x00085d46) bg_popup_sub_pane_cp04

0xb59e,	// (0x00086ce1) popup_mup_playback_window_g1

0xb5aa,	// (0x00086ced) popup_mup_playback_window_t1

0xb5bf,	// (0x00086d02) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0008ac25) popup_mup_playback_window_t

0xb5f6,	// (0x00086d39) main_image_pane_g1_ParamLimits

0xb5f6,	// (0x00086d39) main_image_pane_g1

0xb639,	// (0x00086d7c) scroll_pane_cp018_ParamLimits

0xb639,	// (0x00086d7c) scroll_pane_cp018

0xb651,	// (0x00086d94) scroll_pane_cp016_ParamLimits

0xb651,	// (0x00086d94) scroll_pane_cp016

0x4cfc,	// (0x0008043f) smil2_image_pane_ParamLimits

0x4cfc,	// (0x0008043f) smil2_image_pane

0x4d30,	// (0x00080473) smil2_root_pane_ParamLimits

0x4d30,	// (0x00080473) smil2_root_pane

0x4d5c,	// (0x0008049f) smil2_text_pane_ParamLimits

0x4d5c,	// (0x0008049f) smil2_text_pane

0xa3a8,	// (0x00085aeb) bg_list_pane_cp06

0xb68d,	// (0x00086dd0) grid_radio_pane

0xa3a8,	// (0x00085aeb) bg_popup_window_pane_cp06

0xb695,	// (0x00086dd8) main_fmradio_pane_t1

0xb00f,	// (0x00086752) heading_pane_cp04

0xb6a3,	// (0x00086de6) main_fmradio_pane_t2

0xc67b,	// (0x00087dbe) popup_cale_lunar_info_window_g1

0xb6b1,	// (0x00086df4) main_fmradio_pane_t3

0xc683,	// (0x00087dc6) popup_cale_lunar_info_window_g2

0xb6bf,	// (0x00086e02) main_fmradio_pane_t4

0x0001,

0xb6cd,	// (0x00086e10) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0008ad00) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0008ac3a) main_fmradio_pane_t

0xb6db,	// (0x00086e1e) wait_bar_pane_cp03

0xb6e3,	// (0x00086e26) cell_fmradio_pane_ParamLimits

0xb6e3,	// (0x00086e26) cell_fmradio_pane

0xb54a,	// (0x00086c8d) cell_fmradio_pane_g1_ParamLimits

0xb54a,	// (0x00086c8d) cell_fmradio_pane_g1

0xa3a8,	// (0x00085aeb) grid_highlight_pane_cp011

0xb6f6,	// (0x00086e39) poc_content_pane_ParamLimits

0xb6f6,	// (0x00086e39) poc_content_pane

0xb708,	// (0x00086e4b) scroll_pane_cp019

0x4d9c,	// (0x000804df) popup_call_poc_act_window_ParamLimits

0x4d9c,	// (0x000804df) popup_call_poc_act_window

0x4da9,	// (0x000804ec) popup_call_poc_inact_window_ParamLimits

0x4da9,	// (0x000804ec) popup_call_poc_inact_window

0xf594,	// (0x0008acd7) bg_popup_call_poc_act_pane_g

0xc5f3,	// (0x00087d36) bg_popup_call_poc_inact_pane_g1

0xc5fb,	// (0x00087d3e) bg_popup_call_poc_inact_pane_g2

0xb710,	// (0x00086e53) popup_call_poc_act_window_g2

0xc603,	// (0x00087d46) bg_popup_call_poc_inact_pane_g3

0xc60b,	// (0x00087d4e) bg_popup_call_poc_inact_pane_g4

0xc613,	// (0x00087d56) bg_popup_call_poc_inact_pane_g5

0xb718,	// (0x00086e5b) popup_call_poc_act_window_t1_ParamLimits

0xb718,	// (0x00086e5b) popup_call_poc_act_window_t1

0xb740,	// (0x00086e83) popup_call_poc_act_window_t2_ParamLimits

0xb740,	// (0x00086e83) popup_call_poc_act_window_t2

0xb768,	// (0x00086eab) popup_call_poc_act_window_t3_ParamLimits

0xb768,	// (0x00086eab) popup_call_poc_act_window_t3

0xb790,	// (0x00086ed3) popup_call_poc_act_window_t4_ParamLimits

0xb790,	// (0x00086ed3) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0008ac45) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0008ac45) popup_call_poc_act_window_t

0xc61b,	// (0x00087d5e) bg_popup_call_poc_inact_pane_g6

0xc623,	// (0x00087d66) bg_popup_call_poc_inact_pane_g7

0xc62b,	// (0x00087d6e) bg_popup_call_poc_inact_pane_g8

0xb7a2,	// (0x00086ee5) popup_call_poc_inact_window_g2

0xc633,	// (0x00087d76) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0008acc4) bg_popup_call_poc_inact_pane_g

0xb7aa,	// (0x00086eed) popup_call_poc_inact_window_t1_ParamLimits

0xb7aa,	// (0x00086eed) popup_call_poc_inact_window_t1

0xb7bf,	// (0x00086f02) popup_call_poc_inact_window_t2_ParamLimits

0xb7bf,	// (0x00086f02) popup_call_poc_inact_window_t2

0xb7d4,	// (0x00086f17) popup_call_poc_inact_window_t3_ParamLimits

0xb7d4,	// (0x00086f17) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0008ac4e) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0008ac4e) popup_call_poc_inact_window_t

0xc7b8,	// (0x00087efb) context_pane_ParamLimits

0x53d7,	// (0x00080b1a) signal_pane_ParamLimits

0xb39f,	// (0x00086ae2) main_call2_pane

0x534a,	// (0x00080a8d) popup_phob_thumbnail2_window_ParamLimits

0x534a,	// (0x00080a8d) popup_phob_thumbnail2_window

0x4a61,	// (0x000801a4) aid_hotspot_pointer_arrow_pane

0x4a69,	// (0x000801ac) aid_hotspot_pointer_hand_pane

0x50cf,	// (0x00080812) phob_pre_status_pane_g5

0x2d43,	// (0x0007e486) cams_zoom_pane_ParamLimits

0x2d4f,	// (0x0007e492) image_vga_pane_ParamLimits

0x2d5e,	// (0x0007e4a1) main_camera_pane_g1_ParamLimits

0x2d6c,	// (0x0007e4af) main_camera_pane_g2_ParamLimits

0x2d78,	// (0x0007e4bb) main_camera_pane_g3_ParamLimits

0x2d84,	// (0x0007e4c7) main_camera_pane_g4_ParamLimits

0x2d90,	// (0x0007e4d3) main_camera_pane_g5_ParamLimits

0x2d9c,	// (0x0007e4df) main_camera_pane_g6_ParamLimits

0x2da8,	// (0x0007e4eb) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0008a94d) main_camera_pane_g_ParamLimits

0x2db4,	// (0x0007e4f7) main_camera_pane_t1_ParamLimits

0x2dc6,	// (0x0007e509) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0008a95e) main_camera_pane_t_ParamLimits

0xa603,	// (0x00085d46) bg_popup_preview_window_pane_cp01_ParamLimits

0xa603,	// (0x00085d46) bg_popup_preview_window_pane_cp01

0xb7e9,	// (0x00086f2c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e9,	// (0x00086f2c) popup_phob_thumbnail2_window_g1

0xa3a8,	// (0x00085aeb) call2_cli_visual_pane

0x4dc5,	// (0x00080508) popup_call2_audio_conf_window_ParamLimits

0x4dc5,	// (0x00080508) popup_call2_audio_conf_window

0x4dda,	// (0x0008051d) popup_call2_audio_first_window_ParamLimits

0x4dda,	// (0x0008051d) popup_call2_audio_first_window

0x4e78,	// (0x000805bb) popup_call2_audio_in_window_ParamLimits

0x4e78,	// (0x000805bb) popup_call2_audio_in_window

0x4eba,	// (0x000805fd) popup_call2_audio_out_window_ParamLimits

0x4eba,	// (0x000805fd) popup_call2_audio_out_window

0x4f1c,	// (0x0008065f) popup_call2_audio_second_window_ParamLimits

0x4f1c,	// (0x0008065f) popup_call2_audio_second_window

0x4f7a,	// (0x000806bd) popup_call2_audio_wait_window_ParamLimits

0x4f7a,	// (0x000806bd) popup_call2_audio_wait_window

0xa3a8,	// (0x00085aeb) bg_popup_call2_act_pane_cp03

0xa5e5,	// (0x00085d28) list_conf_pane_cp

0xb7f5,	// (0x00086f38) popup_call2_audio_conf_window_t1

0xb803,	// (0x00086f46) list_single_graphic_popup_conf2_pane_ParamLimits

0xb803,	// (0x00086f46) list_single_graphic_popup_conf2_pane

0xb0a3,	// (0x000867e6) list_highlight_pane_cp04

0xb816,	// (0x00086f59) list_single_graphic_popup_conf2_pane_g1

0xb0b4,	// (0x000867f7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0008ac55) list_single_graphic_popup_conf2_pane_g

0xb820,	// (0x00086f63) list_single_graphic_popup_conf2_pane_t1

0xb82e,	// (0x00086f71) bg_popup_call2_act_pane_cp01_ParamLimits

0xb82e,	// (0x00086f71) bg_popup_call2_act_pane_cp01

0xb8b8,	// (0x00086ffb) call_type_pane_cp05_ParamLimits

0xb8b8,	// (0x00086ffb) call_type_pane_cp05

0xb90c,	// (0x0008704f) popup_call2_audio_second_window_g1_ParamLimits

0xb90c,	// (0x0008704f) popup_call2_audio_second_window_g1

0xb960,	// (0x000870a3) popup_call2_audio_second_window_g2_ParamLimits

0xb960,	// (0x000870a3) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0008ac5a) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0008ac5a) popup_call2_audio_second_window_g

0xb9c5,	// (0x00087108) popup_call2_audio_second_window_t1_ParamLimits

0xb9c5,	// (0x00087108) popup_call2_audio_second_window_t1

0xba80,	// (0x000871c3) popup_call2_audio_second_window_t2_ParamLimits

0xba80,	// (0x000871c3) popup_call2_audio_second_window_t2

0xbad3,	// (0x00087216) popup_call2_audio_second_window_t3_ParamLimits

0xbad3,	// (0x00087216) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0008ac61) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0008ac61) popup_call2_audio_second_window_t

0xa3a8,	// (0x00085aeb) bg_popup_call2_in_pane_cp02

0xa3b2,	// (0x00085af5) call_type_pane_cp04

0xa3ba,	// (0x00085afd) popup_call2_audio_wait_window_g1

0xa3c2,	// (0x00085b05) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0008a838) popup_call2_audio_wait_window_g

0xa3ca,	// (0x00085b0d) popup_call2_audio_wait_window_t3

0xbbc6,	// (0x00087309) bg_popup_call2_act_pane_ParamLimits

0xbbc6,	// (0x00087309) bg_popup_call2_act_pane

0xbc86,	// (0x000873c9) call_type_pane_cp03_ParamLimits

0xbc86,	// (0x000873c9) call_type_pane_cp03

0xbcea,	// (0x0008742d) popup_call2_audio_first_window_g1_ParamLimits

0xbcea,	// (0x0008742d) popup_call2_audio_first_window_g1

0xbd5a,	// (0x0008749d) popup_call2_audio_first_window_g2_ParamLimits

0xbd5a,	// (0x0008749d) popup_call2_audio_first_window_g2

0xb2c6,	// (0x00086a09) popup_call2_audio_first_window_g3_ParamLimits

0xb2c6,	// (0x00086a09) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008ac6a) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008ac6a) popup_call2_audio_first_window_g

0xbe38,	// (0x0008757b) popup_call2_audio_first_window_t1_ParamLimits

0xbe38,	// (0x0008757b) popup_call2_audio_first_window_t1

0xbf3b,	// (0x0008767e) popup_call2_audio_first_window_t4_ParamLimits

0xbf3b,	// (0x0008767e) popup_call2_audio_first_window_t4

0xc01e,	// (0x00087761) popup_call2_audio_first_window_t5_ParamLimits

0xc01e,	// (0x00087761) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0008ac75) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0008ac75) popup_call2_audio_first_window_t

0xa5fb,	// (0x00085d3e) bg_popup_call2_act_pane_g1

0xc68b,	// (0x00087dce) popup_cale_lunar_info_window_t1

0xc699,	// (0x00087ddc) popup_cale_lunar_info_window_t2

0xc6a7,	// (0x00087dea) popup_cale_lunar_info_window_t3

0xa3a8,	// (0x00085aeb) bg_popup_call2_bubble_pane

0xc11f,	// (0x00087862) bg_popup_call2_in_pane_cp01_ParamLimits

0xc11f,	// (0x00087862) bg_popup_call2_in_pane_cp01

0xa084,	// (0x000857c7) call_type_pane_cp02

0xc167,	// (0x000878aa) popup_call2_audio_out_window_g1_ParamLimits

0xc167,	// (0x000878aa) popup_call2_audio_out_window_g1

0xc193,	// (0x000878d6) popup_call2_audio_out_window_g2_ParamLimits

0xc193,	// (0x000878d6) popup_call2_audio_out_window_g2

0xc1bb,	// (0x000878fe) popup_call2_audio_out_window_g3_ParamLimits

0xc1bb,	// (0x000878fe) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0008ac7e) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0008ac7e) popup_call2_audio_out_window_g

0xc1f6,	// (0x00087939) popup_call2_audio_out_window_t1_ParamLimits

0xc1f6,	// (0x00087939) popup_call2_audio_out_window_t1

0xc255,	// (0x00087998) popup_call2_audio_out_window_t2_ParamLimits

0xc255,	// (0x00087998) popup_call2_audio_out_window_t2

0xc2a9,	// (0x000879ec) popup_call2_audio_out_window_t3_ParamLimits

0xc2a9,	// (0x000879ec) popup_call2_audio_out_window_t3

0xc2bf,	// (0x00087a02) popup_call2_audio_out_window_t4_ParamLimits

0xc2bf,	// (0x00087a02) popup_call2_audio_out_window_t4

0xc2d5,	// (0x00087a18) popup_call2_audio_out_window_t5_ParamLimits

0xc2d5,	// (0x00087a18) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008ac87) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008ac87) popup_call2_audio_out_window_t

0xc339,	// (0x00087a7c) bg_popup_call2_in_pane_ParamLimits

0xc339,	// (0x00087a7c) bg_popup_call2_in_pane

0xc395,	// (0x00087ad8) popup_call2_audio_in_window_g1_ParamLimits

0xc395,	// (0x00087ad8) popup_call2_audio_in_window_g1

0xc3cd,	// (0x00087b10) popup_call2_audio_in_window_g2_ParamLimits

0xc3cd,	// (0x00087b10) popup_call2_audio_in_window_g2

0xc405,	// (0x00087b48) popup_call2_audio_in_window_g3_ParamLimits

0xc405,	// (0x00087b48) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0008ac94) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0008ac94) popup_call2_audio_in_window_g

0xc45d,	// (0x00087ba0) popup_call2_audio_in_window_t1_ParamLimits

0xc45d,	// (0x00087ba0) popup_call2_audio_in_window_t1

0xc4dd,	// (0x00087c20) popup_call2_audio_in_window_t2_ParamLimits

0xc4dd,	// (0x00087c20) popup_call2_audio_in_window_t2

0xc55d,	// (0x00087ca0) popup_call2_audio_in_window_t3_ParamLimits

0xc55d,	// (0x00087ca0) popup_call2_audio_in_window_t3

0xc577,	// (0x00087cba) popup_call2_audio_in_window_t4_ParamLimits

0xc577,	// (0x00087cba) popup_call2_audio_in_window_t4

0xc589,	// (0x00087ccc) popup_call2_audio_in_window_t5_ParamLimits

0xc589,	// (0x00087ccc) popup_call2_audio_in_window_t5

0xc59e,	// (0x00087ce1) popup_call2_audio_in_window_t6_ParamLimits

0xc59e,	// (0x00087ce1) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0008ac9d) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0008ac9d) popup_call2_audio_in_window_t

0xa5fb,	// (0x00085d3e) bg_popup_call2_in_pane_g1

0xc6b5,	// (0x00087df8) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0008ad05) popup_cale_lunar_info_window_t

0xa603,	// (0x00085d46) bg_popup_call2_rect_pane_ParamLimits

0xa603,	// (0x00085d46) bg_popup_call2_rect_pane

0xa3a8,	// (0x00085aeb) call2_cli_visual_graphic_pane

0xa3a8,	// (0x00085aeb) call2_cli_visual_text_pane

0x5485,	// (0x00080bc8) smil_status_volume_pane_g3

0x0002,

0xa73c,	// (0x00085e7f) call2_cli_visual_graphic_pane_g1

0xa73c,	// (0x00085e7f) call2_cli_visual_graphic_pane_g2

0xa73c,	// (0x00085e7f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0008acaa) call2_cli_visual_graphic_pane_g

0xc5b3,	// (0x00087cf6) bg_popup_call2_rect_pane_g1

0xa7da,	// (0x00085f1d) bg_popup_call2_rect_pane_g2

0xc5bb,	// (0x00087cfe) bg_popup_call2_rect_pane_g3

0xc5c3,	// (0x00087d06) bg_popup_call2_rect_pane_g4

0xc5cb,	// (0x00087d0e) bg_popup_call2_rect_pane_g5

0xc5d3,	// (0x00087d16) bg_popup_call2_rect_pane_g6

0xc5db,	// (0x00087d1e) bg_popup_call2_rect_pane_g7

0xc5e3,	// (0x00087d26) bg_popup_call2_rect_pane_g8

0xc5eb,	// (0x00087d2e) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0008acb1) bg_popup_call2_rect_pane_g

0xc5f3,	// (0x00087d36) bg_popup_call2_bubble_pane_g1

0xc5fb,	// (0x00087d3e) bg_popup_call2_bubble_pane_g2

0xc603,	// (0x00087d46) bg_popup_call2_bubble_pane_g3

0xc60b,	// (0x00087d4e) bg_popup_call2_bubble_pane_g4

0xc613,	// (0x00087d56) bg_popup_call2_bubble_pane_g5

0xc61b,	// (0x00087d5e) bg_popup_call2_bubble_pane_g6

0xc623,	// (0x00087d66) bg_popup_call2_bubble_pane_g7

0xc62b,	// (0x00087d6e) bg_popup_call2_bubble_pane_g8

0xc633,	// (0x00087d76) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0008acc4) bg_popup_call2_bubble_pane_g

0x2747,	// (0x0007de8a) aid_cale_week_size_cell_pane

0x2dd8,	// (0x0007e51b) aid_cams_cif_uncrop_pane_ParamLimits

0x2dd8,	// (0x0007e51b) aid_cams_cif_uncrop_pane

0x2f33,	// (0x0007e676) aid_cams_size_cell_ParamLimits

0x2f33,	// (0x0007e676) aid_cams_size_cell

0x2f3f,	// (0x0007e682) grid_cams_pane_ParamLimits

0x2f4d,	// (0x0007e690) linegrid_cams_pane_ParamLimits

0x303c,	// (0x0007e77f) call_video_pane_t1

0x305d,	// (0x0007e7a0) call_video_pane_t2

0x0001,

0xf26e,	// (0x0008a9b1) call_video_pane_t

0x35cc,	// (0x0007ed0f) aid_cale_month_size_cell_pane_ParamLimits

0x35cc,	// (0x0007ed0f) aid_cale_month_size_cell_pane

0xf60b,	// (0x0008ad4e) smil_status_volume_pane_g

0x5492,	// (0x00080bd5) volume_smil_pane_ParamLimits

0x1ec0,	// (0x0007d603) aid_popup2_width_pane

0x263b,	// (0x0007dd7e) cell_qdial_pane_g4_ParamLimits

0x263b,	// (0x0007dd7e) cell_qdial_pane_g4

0x450a,	// (0x0007fc4d) aid_blid_cardinal_pane_ParamLimits

0x451a,	// (0x0007fc5d) aid_blid_destination_pane_ParamLimits

0x451a,	// (0x0007fc5d) aid_blid_destination_pane

0xa603,	// (0x00085d46) bg_popup_call_poc_act_pane_ParamLimits

0xa603,	// (0x00085d46) bg_popup_call_poc_act_pane

0xa603,	// (0x00085d46) bg_popup_call_poc_inact_pane_ParamLimits

0xa603,	// (0x00085d46) bg_popup_call_poc_inact_pane

0xc63b,	// (0x00087d7e) bg_popup_call_poc_act_pane_g1

0xc643,	// (0x00087d86) bg_popup_call_poc_act_pane_g2

0xc64b,	// (0x00087d8e) bg_popup_call_poc_act_pane_g3

0xc60b,	// (0x00087d4e) bg_popup_call_poc_act_pane_g4

0xc613,	// (0x00087d56) bg_popup_call_poc_act_pane_g5

0xc653,	// (0x00087d96) bg_popup_call_poc_act_pane_g6

0xc623,	// (0x00087d66) bg_popup_call_poc_act_pane_g7

0xc65b,	// (0x00087d9e) bg_popup_call_poc_act_pane_g8

0xa3a8,	// (0x00085aeb) main_usb_pane

0x5283,	// (0x000809c6) popup_cale_lunar_info_window

0x337c,	// (0x0007eabf) im_reading_pane_t1_ParamLimits

0xa9ff,	// (0x00086142) list_im_pane_ParamLimits

0xaa10,	// (0x00086153) scroll_pane_cp07_ParamLimits

0xa3a8,	// (0x00085aeb) grid_highlight_pane_cp012

0xa603,	// (0x00085d46) mup_scale_pane_ParamLimits

0xb2c6,	// (0x00086a09) main_usb_pane_g1_ParamLimits

0xb2c6,	// (0x00086a09) main_usb_pane_g1

0x4ff2,	// (0x00080735) main_usb_pane_g2_ParamLimits

0x4ff2,	// (0x00080735) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0008acee) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0008acee) main_usb_pane_g

0x4ffe,	// (0x00080741) main_usb_pane_t1_ParamLimits

0x4ffe,	// (0x00080741) main_usb_pane_t1

0x5010,	// (0x00080753) main_usb_pane_t2_ParamLimits

0x5010,	// (0x00080753) main_usb_pane_t2

0x5022,	// (0x00080765) main_usb_pane_t3_ParamLimits

0x5022,	// (0x00080765) main_usb_pane_t3

0x5034,	// (0x00080777) main_usb_pane_t4_ParamLimits

0x5034,	// (0x00080777) main_usb_pane_t4

0x5046,	// (0x00080789) main_usb_pane_t5_ParamLimits

0x5046,	// (0x00080789) main_usb_pane_t5

0x5058,	// (0x0008079b) main_usb_pane_t6_ParamLimits

0x5058,	// (0x0008079b) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0008acf3) main_usb_pane_t_ParamLimits

0x44b0,	// (0x0007fbf3) aid_text_placing

0x44bc,	// (0x0007fbff) main_location2_pane_t1_ParamLimits

0x44d0,	// (0x0007fc13) main_location2_pane_t2_ParamLimits

0x44e4,	// (0x0007fc27) main_location2_pane_t3_ParamLimits

0x44f8,	// (0x0007fc3b) main_location2_pane_t4_ParamLimits

0x44f8,	// (0x0007fc3b) main_location2_pane_t4

0xf3cf,	// (0x0008ab12) main_location2_pane_t_ParamLimits

0xa63f,	// (0x00085d82) find_pinb_pane_g2_ParamLimits

0xa63f,	// (0x00085d82) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0008a85e) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0008a85e) find_pinb_pane_g

0xa64b,	// (0x00085d8e) find_pinb_pane_t1_ParamLimits

0xa65d,	// (0x00085da0) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0008a863) find_pinb_pane_t_ParamLimits

0xa3a8,	// (0x00085aeb) main_call3_pane

0x3b40,	// (0x0007f283) cale_month_day_heading_pane_t1_ParamLimits

0x3bc6,	// (0x0007f309) cale_month_day_heading_pane_t2_ParamLimits

0x3c57,	// (0x0007f39a) cale_month_day_heading_pane_t3_ParamLimits

0x3ce8,	// (0x0007f42b) cale_month_day_heading_pane_t4_ParamLimits

0x3d79,	// (0x0007f4bc) cale_month_day_heading_pane_t5_ParamLimits

0x3e0a,	// (0x0007f54d) cale_month_day_heading_pane_t6_ParamLimits

0x3ea7,	// (0x0007f5ea) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008a9e9) cale_month_day_heading_pane_t_ParamLimits

0xac71,	// (0x000863b4) smil_status_volume_pane

0x4ba9,	// (0x000802ec) postcard_address_pane_ParamLimits

0x4ba9,	// (0x000802ec) postcard_address_pane

0x4bb5,	// (0x000802f8) postcard_message_pane_ParamLimits

0x4bb5,	// (0x000802f8) postcard_message_pane

0x4fb9,	// (0x000806fc) call2_cli_visual_pane_t1_ParamLimits

0x4fb9,	// (0x000806fc) call2_cli_visual_pane_t1

0x55e7,	// (0x00080d2a) postcard_message_pane_t1_ParamLimits

0x55e7,	// (0x00080d2a) postcard_message_pane_t1

0x55d0,	// (0x00080d13) postcard_address_pane_t1_ParamLimits

0x55d0,	// (0x00080d13) postcard_address_pane_t1

0x55c1,	// (0x00080d04) popup_call3_audio_in_window_ParamLimits

0x55c1,	// (0x00080d04) popup_call3_audio_in_window

0x54a7,	// (0x00080bea) bg_popup_call3_in_pane_ParamLimits

0x54a7,	// (0x00080bea) bg_popup_call3_in_pane

0x5507,	// (0x00080c4a) popup_call3_audio_in_window_g1_ParamLimits

0x5507,	// (0x00080c4a) popup_call3_audio_in_window_g1

0x551f,	// (0x00080c62) popup_call3_audio_in_window_g2_ParamLimits

0x551f,	// (0x00080c62) popup_call3_audio_in_window_g2

0x5537,	// (0x00080c7a) popup_call3_audio_in_window_g3_ParamLimits

0x5537,	// (0x00080c7a) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0008ad55) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0008ad55) popup_call3_audio_in_window_g

0x555f,	// (0x00080ca2) popup_call3_audio_in_window_t1_ParamLimits

0x555f,	// (0x00080ca2) popup_call3_audio_in_window_t1

0x5587,	// (0x00080cca) popup_call3_audio_in_window_t2_ParamLimits

0x5587,	// (0x00080cca) popup_call3_audio_in_window_t2

0x55af,	// (0x00080cf2) popup_call3_audio_in_window_t3_ParamLimits

0x55af,	// (0x00080cf2) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0008ad5e) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0008ad5e) popup_call3_audio_in_window_t

0xb39f,	// (0x00086ae2) bg_popup_call3_rect_pane

0xc5b3,	// (0x00087cf6) bg_popup_call3_rect_pane_g1

0xa7da,	// (0x00085f1d) bg_popup_call3_rect_pane_g2

0xc5bb,	// (0x00087cfe) bg_popup_call3_rect_pane_g3

0xc5c3,	// (0x00087d06) bg_popup_call3_rect_pane_g4

0xc5cb,	// (0x00087d0e) bg_popup_call3_rect_pane_g5

0xc5d3,	// (0x00087d16) bg_popup_call3_rect_pane_g6

0xc5db,	// (0x00087d1e) bg_popup_call3_rect_pane_g7

0x4830,	// (0x0007ff73) mup_visualizer_osc_pane

0xb45e,	// (0x00086ba1) mup_visualizer_spec_pane

0x54c7,	// (0x00080c0a) call3_video_qcif_pane_ParamLimits

0x54c7,	// (0x00080c0a) call3_video_qcif_pane

0x54d7,	// (0x00080c1a) call3_video_qcif_uncrop_pane_ParamLimits

0x54d7,	// (0x00080c1a) call3_video_qcif_uncrop_pane

0x54e5,	// (0x00080c28) call3_video_subqcif_pane_ParamLimits

0x54e5,	// (0x00080c28) call3_video_subqcif_pane

0x54f7,	// (0x00080c3a) call3_video_subqcif_uncrop_pane_ParamLimits

0x54f7,	// (0x00080c3a) call3_video_subqcif_uncrop_pane

0x554f,	// (0x00080c92) popup_call3_audio_in_window_g4_ParamLimits

0x554f,	// (0x00080c92) popup_call3_audio_in_window_g4

0x5472,	// (0x00080bb5) mup_spec_half_pane

0x547b,	// (0x00080bbe) mup_spec_half_pane_cp

0xc818,	// (0x00087f5b) mup_osc_middle_pane

0xc821,	// (0x00087f64) mup_visualizer_osc_pane_g1

0x5453,	// (0x00080b96) mup_spec_bar_pane_ParamLimits

0x5453,	// (0x00080b96) mup_spec_bar_pane

0xc805,	// (0x00087f48) mup_spec_bar_pane_g1

0xc80f,	// (0x00087f52) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008ad49) mup_spec_bar_pane_g

0x2747,	// (0x0007de8a) aid_cale_week_size_cell_pane_ParamLimits

0x275c,	// (0x0007de9f) bg_cale_heading_pane_ParamLimits

0xa867,	// (0x00085faa) bg_cale_pane_cp01_ParamLimits

0x277e,	// (0x0007dec1) cale_week_corner_pane_ParamLimits

0x2798,	// (0x0007dedb) cale_week_day_heading_pane_ParamLimits

0x27ba,	// (0x0007defd) cale_week_scroll_pane_g1_ParamLimits

0x27d7,	// (0x0007df1a) cale_week_scroll_pane_g2_ParamLimits

0x27ea,	// (0x0007df2d) cale_week_scroll_pane_g3_ParamLimits

0x27fd,	// (0x0007df40) cale_week_scroll_pane_g4_ParamLimits

0x2810,	// (0x0007df53) cale_week_scroll_pane_g5_ParamLimits

0x2823,	// (0x0007df66) cale_week_scroll_pane_g6_ParamLimits

0x2836,	// (0x0007df79) cale_week_scroll_pane_g7_ParamLimits

0x2849,	// (0x0007df8c) cale_week_scroll_pane_g8_ParamLimits

0x285e,	// (0x0007dfa1) cale_week_scroll_pane_g9_ParamLimits

0x2871,	// (0x0007dfb4) cale_week_scroll_pane_g10_ParamLimits

0x2884,	// (0x0007dfc7) cale_week_scroll_pane_g11_ParamLimits

0x2897,	// (0x0007dfda) cale_week_scroll_pane_g12_ParamLimits

0x28ae,	// (0x0007dff1) cale_week_scroll_pane_g13_ParamLimits

0x28c9,	// (0x0007e00c) cale_week_scroll_pane_g14_ParamLimits

0x28e4,	// (0x0007e027) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0008a8ef) cale_week_scroll_pane_g_ParamLimits

0x2914,	// (0x0007e057) cale_week_time_pane_ParamLimits

0x2929,	// (0x0007e06c) grid_cale_week_pane_ParamLimits

0xa885,	// (0x00085fc8) listscroll_cale_week_pane_t1

0xa897,	// (0x00085fda) scroll_pane_cp08_ParamLimits

0x3635,	// (0x0007ed78) cale_month_corner_pane_ParamLimits

0xac47,	// (0x0008638a) cale_month_pane_t1

0x3ad9,	// (0x0007f21c) cale_month_week_pane_ParamLimits

0xb2c6,	// (0x00086a09) popup_call_status_window_g1_ParamLimits

0x42f6,	// (0x0007fa39) popup_call_status_window_g2_ParamLimits

0x4302,	// (0x0007fa45) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008aa99) popup_call_status_window_g_ParamLimits

0xafff,	// (0x00086742) aid_call2_pane

0x0f41,	// (0x0007c684) msg_header_pane_g1

0x4ba9,	// (0x000802ec) postcard_address2_pane_ParamLimits

0x4ba9,	// (0x000802ec) postcard_address2_pane

0x4bb5,	// (0x000802f8) postcard_message2_pane_ParamLimits

0x4bb5,	// (0x000802f8) postcard_message2_pane

0x53e5,	// (0x00080b28) message2_row_pane_ParamLimits

0x53e5,	// (0x00080b28) message2_row_pane

0x5402,	// (0x00080b45) address2_row_pane_ParamLimits

0x5402,	// (0x00080b45) address2_row_pane

0xc7d3,	// (0x00087f16) postcard_message2_row_pane_g1

0xc7db,	// (0x00087f1e) postcard_message2_row_pane_t1

0xc7d3,	// (0x00087f16) address2_row_pane_g1

0xc7db,	// (0x00087f1e) address2_row_pane_t1

0x2c9a,	// (0x0007e3dd) aid_size_cell_vorec

0xa3a8,	// (0x00085aeb) main_rss_pane

0x5415,	// (0x00080b58) rss_list_single_pane_ParamLimits

0x5415,	// (0x00080b58) rss_list_single_pane

0xc7e9,	// (0x00087f2c) rss_list_single_pane_t1

0xc7f7,	// (0x00087f3a) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0008ad44) rss_list_single_pane_t

0xa3a8,	// (0x00085aeb) main_camera2_pane

0xa3a8,	// (0x00085aeb) main_video2_pane

0x564b,	// (0x00080d8e) cams_zoom_pane_cp2_ParamLimits

0x564b,	// (0x00080d8e) cams_zoom_pane_cp2

0x5657,	// (0x00080d9a) image2_vga_pane_ParamLimits

0x5657,	// (0x00080d9a) image2_vga_pane

0x5666,	// (0x00080da9) main_camera2_pane_g1_ParamLimits

0x5666,	// (0x00080da9) main_camera2_pane_g1

0x5672,	// (0x00080db5) main_camera2_pane_g2_ParamLimits

0x5672,	// (0x00080db5) main_camera2_pane_g2

0x567e,	// (0x00080dc1) main_camera2_pane_g3_ParamLimits

0x567e,	// (0x00080dc1) main_camera2_pane_g3

0x568a,	// (0x00080dcd) main_camera2_pane_g4_ParamLimits

0x568a,	// (0x00080dcd) main_camera2_pane_g4

0x5696,	// (0x00080dd9) main_camera2_pane_g5_ParamLimits

0x5696,	// (0x00080dd9) main_camera2_pane_g5

0x56a2,	// (0x00080de5) main_camera2_pane_g6_ParamLimits

0x56a2,	// (0x00080de5) main_camera2_pane_g6

0x56ae,	// (0x00080df1) main_camera2_pane_g7_ParamLimits

0x56ae,	// (0x00080df1) main_camera2_pane_g7

0x56ba,	// (0x00080dfd) main_camera2_pane_g8_ParamLimits

0x56ba,	// (0x00080dfd) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0008ad65) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0008ad65) main_camera2_pane_g

0x56d2,	// (0x00080e15) main_camera2_pane_t1_ParamLimits

0x56d2,	// (0x00080e15) main_camera2_pane_t1

0x56e4,	// (0x00080e27) main_camera2_pane_t2_ParamLimits

0x56e4,	// (0x00080e27) main_camera2_pane_t2

0x56f6,	// (0x00080e39) main_camera2_pane_t3_ParamLimits

0x56f6,	// (0x00080e39) main_camera2_pane_t3

0x5708,	// (0x00080e4b) main_camera2_pane_t4_ParamLimits

0x5708,	// (0x00080e4b) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0008ad78) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0008ad78) main_camera2_pane_t

0x576a,	// (0x00080ead) cams_zoom_pane_cp4_ParamLimits

0x576a,	// (0x00080ead) cams_zoom_pane_cp4

0x577a,	// (0x00080ebd) image2_cif_pane_ParamLimits

0x577a,	// (0x00080ebd) image2_cif_pane

0x578f,	// (0x00080ed2) image2_subqcif_pane_ParamLimits

0x578f,	// (0x00080ed2) image2_subqcif_pane

0x579e,	// (0x00080ee1) main_video2_pane_g1_ParamLimits

0x579e,	// (0x00080ee1) main_video2_pane_g1

0x57b0,	// (0x00080ef3) main_video2_pane_g2_ParamLimits

0x57b0,	// (0x00080ef3) main_video2_pane_g2

0x57c0,	// (0x00080f03) main_video2_pane_g3_ParamLimits

0x57c0,	// (0x00080f03) main_video2_pane_g3

0x57d0,	// (0x00080f13) main_video2_pane_g4_ParamLimits

0x57d0,	// (0x00080f13) main_video2_pane_g4

0x57e0,	// (0x00080f23) main_video2_pane_g5_ParamLimits

0x57e0,	// (0x00080f23) main_video2_pane_g5

0x57f0,	// (0x00080f33) main_video2_pane_g6_ParamLimits

0x57f0,	// (0x00080f33) main_video2_pane_g6

0x0005,

0xf644,	// (0x0008ad87) main_video2_pane_g_ParamLimits

0xf644,	// (0x0008ad87) main_video2_pane_g

0x5802,	// (0x00080f45) main_video2_pane_t1_ParamLimits

0x5802,	// (0x00080f45) main_video2_pane_t1

0x581c,	// (0x00080f5f) main_video2_pane_t2_ParamLimits

0x581c,	// (0x00080f5f) main_video2_pane_t2

0x5842,	// (0x00080f85) main_video2_pane_t3_ParamLimits

0x5842,	// (0x00080f85) main_video2_pane_t3

0x0002,

0xf651,	// (0x0008ad94) main_video2_pane_t_ParamLimits

0xf651,	// (0x0008ad94) main_video2_pane_t

0x510f,	// (0x00080852) call_muted_g2

0x0001,

0xf5f3,	// (0x0008ad36) call_muted_g

0xa3a8,	// (0x00085aeb) main_mup2_pane

0xc858,	// (0x00087f9b) main_mup2_pane_g1_ParamLimits

0xc858,	// (0x00087f9b) main_mup2_pane_g1

0x5868,	// (0x00080fab) main_mup2_pane_g2_ParamLimits

0x5868,	// (0x00080fab) main_mup2_pane_g2

0x5aea,	// (0x0008122d) main_mup_pane_g13_cp1

0x5af2,	// (0x00081235) mup_volume_pane_cp1

0x5888,	// (0x00080fcb) main_mup2_pane_g4_ParamLimits

0x5888,	// (0x00080fcb) main_mup2_pane_g4

0x589d,	// (0x00080fe0) main_mup2_pane_g5_ParamLimits

0x589d,	// (0x00080fe0) main_mup2_pane_g5

0x58b2,	// (0x00080ff5) main_mup2_pane_g6_ParamLimits

0x58b2,	// (0x00080ff5) main_mup2_pane_g6

0x58c7,	// (0x0008100a) main_mup2_pane_g7_ParamLimits

0x58c7,	// (0x0008100a) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0008ad9b) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0008ad9b) main_mup2_pane_g

0x58e3,	// (0x00081026) main_mup2_pane_t1_ParamLimits

0x58e3,	// (0x00081026) main_mup2_pane_t1

0x58fa,	// (0x0008103d) main_mup2_pane_t2_ParamLimits

0x58fa,	// (0x0008103d) main_mup2_pane_t2

0x5911,	// (0x00081054) main_mup2_pane_t3_ParamLimits

0x5911,	// (0x00081054) main_mup2_pane_t3

0x5928,	// (0x0008106b) main_mup2_pane_t4_ParamLimits

0x5928,	// (0x0008106b) main_mup2_pane_t4

0x5942,	// (0x00081085) main_mup2_pane_t5_ParamLimits

0x5942,	// (0x00081085) main_mup2_pane_t5

0x595c,	// (0x0008109f) main_mup2_pane_t6_ParamLimits

0x595c,	// (0x0008109f) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0008adaa) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0008adaa) main_mup2_pane_t

0x5994,	// (0x000810d7) mup2_visualizer_pane_ParamLimits

0x5994,	// (0x000810d7) mup2_visualizer_pane

0x59ca,	// (0x0008110d) mup_progress_pane_cp_ParamLimits

0x59ca,	// (0x0008110d) mup_progress_pane_cp

0x5ad5,	// (0x00081218) mup_volume_pane_cp_ParamLimits

0x5ad5,	// (0x00081218) mup_volume_pane_cp

0x59e1,	// (0x00081124) mup2_visualizer_pane_g1_ParamLimits

0x59e1,	// (0x00081124) mup2_visualizer_pane_g1

0xc864,	// (0x00087fa7) mup2_visualizer_pane_g2_ParamLimits

0xc864,	// (0x00087fa7) mup2_visualizer_pane_g2

0x59f6,	// (0x00081139) mup2_visualizer_pane_g3_ParamLimits

0x59f6,	// (0x00081139) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0008adb7) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0008adb7) mup2_visualizer_pane_g

0xb685,	// (0x00086dc8) aid_size_cell_fmradio

0x5225,	// (0x00080968) aid_height_parent_landcape

0xaaa5,	// (0x000861e8) wml_content_pane_cp

0xaaad,	// (0x000861f0) wml_tabs_pane

0xaab6,	// (0x000861f9) popup_wml_miniature_window

0xaabe,	// (0x00086201) scroll_pane_cp021

0xaad2,	// (0x00086215) wml_content_pane_comp8

0xa3a8,	// (0x00085aeb) bg_popup_sub_pane_cp05

0xc882,	// (0x00087fc5) popup_wml_miniature_window_g1

0xc88a,	// (0x00087fcd) wml_miniature_view_pane

0x5a04,	// (0x00081147) aid_size_wml_view

0x5a0c,	// (0x0008114f) wml_miniature_view_pane_g1

0x5a15,	// (0x00081158) wml_miniature_view_pane_g2

0x5a1e,	// (0x00081161) wml_miniature_view_pane_g3

0x5a26,	// (0x00081169) wml_miniature_view_pane_g4

0x5a2e,	// (0x00081171) wml_miniature_view_pane_g5

0x5a36,	// (0x00081179) wml_miniature_view_pane_g6

0x5a3e,	// (0x00081181) wml_miniature_view_pane_g7

0x5a46,	// (0x00081189) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0008adbe) wml_miniature_view_pane_g

0xc858,	// (0x00087f9b) background_graphic_ParamLimits

0xc858,	// (0x00087f9b) background_graphic

0xc892,	// (0x00087fd5) wml_tabs_2_pane

0xc89b,	// (0x00087fde) wml_tabs_3_pane_ParamLimits

0xc89b,	// (0x00087fde) wml_tabs_3_pane

0xc8ad,	// (0x00087ff0) wml_tabs_4_pane_ParamLimits

0xc8ad,	// (0x00087ff0) wml_tabs_4_pane

0xc8c3,	// (0x00088006) wml_tabs_5_pane_ParamLimits

0xc8c3,	// (0x00088006) wml_tabs_5_pane

0xc8dd,	// (0x00088020) wml_tabs_pane_g2_ParamLimits

0xc8dd,	// (0x00088020) wml_tabs_pane_g2

0xc8f1,	// (0x00088034) wml_tabs_pane_g3_ParamLimits

0xc8f1,	// (0x00088034) wml_tabs_pane_g3

0x5a4e,	// (0x00081191) wml_tabs_2_active_pane_ParamLimits

0x5a4e,	// (0x00081191) wml_tabs_2_active_pane

0x5a5e,	// (0x000811a1) wml_tabs_2_passive_pane_ParamLimits

0x5a5e,	// (0x000811a1) wml_tabs_2_passive_pane

0x5a6e,	// (0x000811b1) wml_tabs_3_active_pane_cp_ParamLimits

0x5a6e,	// (0x000811b1) wml_tabs_3_active_pane_cp

0x5a7f,	// (0x000811c2) wml_tabs_3_passive_pane_ParamLimits

0x5a7f,	// (0x000811c2) wml_tabs_3_passive_pane

0x5a90,	// (0x000811d3) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a90,	// (0x000811d3) wml_tabs_3_passive_pane_cp

0x5aa1,	// (0x000811e4) tabs_4_active_pane

0x5aa9,	// (0x000811ec) tabs_4_passive_pane

0x5ab1,	// (0x000811f4) tabs_4_passive_pane_cp

0x5ab9,	// (0x000811fc) tabs_4_passive_pane_cp2

0x4fea,	// (0x0008072d) aid_height_text

0x47f9,	// (0x0007ff3c) mup_volume_cont_pane_ParamLimits

0x47f9,	// (0x0007ff3c) mup_volume_cont_pane

0x2292,	// (0x0007d9d5) aid_size_cell_pinb

0x229c,	// (0x0007d9df) aid_size_list_pinb

0x59b3,	// (0x000810f6) mup2_volume_cont_pane_ParamLimits

0x59b3,	// (0x000810f6) mup2_volume_cont_pane

0x5ac1,	// (0x00081204) mup2_volume_cont_pane_g1_ParamLimits

0x5ac1,	// (0x00081204) mup2_volume_cont_pane_g1

0x1ecc,	// (0x0007d60f) aid_size_cell_touch_ParamLimits

0x1ecc,	// (0x0007d60f) aid_size_cell_touch

0x2175,	// (0x0007d8b8) touch_pane_ParamLimits

0x2175,	// (0x0007d8b8) touch_pane

0x9f8b,	// (0x000856ce) main_rss2_pane

0xc90e,	// (0x00088051) listscroll_rss2_pane

0xc917,	// (0x0008805a) rss2_navigation_pane

0xc91f,	// (0x00088062) list_rss2_pane

0xb14e,	// (0x00086891) scroll_pane_cp22

0xc927,	// (0x0008806a) rss2_navigation_pane_g1

0xc930,	// (0x00088073) rss2_navigation_pane_g2

0xc938,	// (0x0008807b) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0008adcf) rss2_navigation_pane_g

0xc940,	// (0x00088083) rss2_navigation_pane_t1

0x5afa,	// (0x0008123d) rss2_list_single_pane_ParamLimits

0x5afa,	// (0x0008123d) rss2_list_single_pane

0xc94e,	// (0x00088091) rss2_list_single_pane_t2

0xc95c,	// (0x0008809f) rss2_list_single_pane_t3_ParamLimits

0xc95c,	// (0x0008809f) rss2_list_single_pane_t3

0xc979,	// (0x000880bc) rss2_list_single_pane_t4

0x4157,	// (0x0007f89a) smil_status_pane_g1

0xaa46,	// (0x00086189) main_image2_pane_ParamLimits

0xaa46,	// (0x00086189) main_image2_pane

0x56c6,	// (0x00080e09) main_camera2_pane_g9_ParamLimits

0x56c6,	// (0x00080e09) main_camera2_pane_g9

0x571a,	// (0x00080e5d) main_camera2_pane_t5_ParamLimits

0x571a,	// (0x00080e5d) main_camera2_pane_t5

0x572c,	// (0x00080e6f) main_camera2_pane_t6_ParamLimits

0x572c,	// (0x00080e6f) main_camera2_pane_t6

0x5b32,	// (0x00081275) main_image2_pane_g1_ParamLimits

0x5b32,	// (0x00081275) main_image2_pane_g1

0x4d86,	// (0x000804c9) smil2_video_pane_ParamLimits

0x4d86,	// (0x000804c9) smil2_video_pane

0x0cba,	// (0x0007c3fd) aid_zoom_text_primary_cp

0x211e,	// (0x0007d861) popup_preview_fixed_window

0xa9f7,	// (0x0008613a) im_reading_pane_g1

0x5610,	// (0x00080d53) cams2_bc_adjust_pane_cp_ParamLimits

0x5610,	// (0x00080d53) cams2_bc_adjust_pane_cp

0x575c,	// (0x00080e9f) cams2_bc_adjust_pane_ParamLimits

0x575c,	// (0x00080e9f) cams2_bc_adjust_pane

0x5b3e,	// (0x00081281) cams2_bc_adjust_pane_g1

0x5b46,	// (0x00081289) cams2_slider_pane

0x5b4f,	// (0x00081292) cams2_slider_pane_g1

0x5b58,	// (0x0008129b) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0008add6) cams2_slider_pane_g

0x238c,	// (0x0007dacf) calc_display_pane_ParamLimits

0x23aa,	// (0x0007daed) calc_paper_pane_ParamLimits

0x23c6,	// (0x0007db09) grid_calc_pane_ParamLimits

0x4364,	// (0x0007faa7) popup_clock_digital_window_t1_ParamLimits

0xb622,	// (0x00086d65) main_image_pane_t1

0x2372,	// (0x0007dab5) aid_size_cell_calc_ParamLimits

0x2372,	// (0x0007dab5) aid_size_cell_calc

0x525f,	// (0x000809a2) popup_blid_sat_info2_window_ParamLimits

0x525f,	// (0x000809a2) popup_blid_sat_info2_window

0xc98f,	// (0x000880d2) aid_size_cell_blid

0xc997,	// (0x000880da) bg_popup_window_pane_cp07

0xc9ba,	// (0x000880fd) grid_popup_blid_pane

0xc9c4,	// (0x00088107) heading_pane_cp05_ParamLimits

0xc9c4,	// (0x00088107) heading_pane_cp05

0xca8e,	// (0x000881d1) cell_popup_blid_pane_ParamLimits

0xca8e,	// (0x000881d1) cell_popup_blid_pane

0xcab4,	// (0x000881f7) cell_popup_blid_pane_g1

0xcabc,	// (0x000881ff) cell_popup_blid_pane_t1

0x5979,	// (0x000810bc) mup2_indicator_pane_ParamLimits

0x5979,	// (0x000810bc) mup2_indicator_pane

0xb39f,	// (0x00086ae2) mup2_visualizer_osc_pane

0xc870,	// (0x00087fb3) mup2_visualizer_spec_pane_ParamLimits

0xc870,	// (0x00087fb3) mup2_visualizer_spec_pane

0x5b72,	// (0x000812b5) mup2_spec_half_pane

0x5b7b,	// (0x000812be) mup2_spec_half_pane_cp

0x5b85,	// (0x000812c8) mup2_spec_bar_pane_ParamLimits

0x5b85,	// (0x000812c8) mup2_spec_bar_pane

0xc805,	// (0x00087f48) mup2_spec_bar_pane_g1

0xc80f,	// (0x00087f52) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008ad49) mup2_spec_bar_pane_g

0x5ba4,	// (0x000812e7) mup2_osc_middle_pane

0xc821,	// (0x00087f64) mup2_visualizer_osc_pane_g1

0x9fb5,	// (0x000856f8) popup_number_entry_window_t1_ParamLimits

0x9fc8,	// (0x0008570b) popup_number_entry_window_t2_ParamLimits

0x9fda,	// (0x0008571d) popup_number_entry_window_t3_ParamLimits

0x21cc,	// (0x0007d90f) popup_number_entry_window_t5_ParamLimits

0x21cc,	// (0x0007d90f) popup_number_entry_window_t5

0xf0c6,	// (0x0008a809) popup_number_entry_window_t_ParamLimits

0x9fec,	// (0x0008572f) text_title_cp2_ParamLimits

0x4a71,	// (0x000801b4) aid_hotspot_pointer_text2_pane

0x4b0b,	// (0x0008024e) main_viewer_pane_g9_ParamLimits

0x4b0b,	// (0x0008024e) main_viewer_pane_g9

0xac47,	// (0x0008638a) cale_month_pane_t1_ParamLimits

0xac84,	// (0x000863c7) bg_cale_pane_ParamLimits

0xac9c,	// (0x000863df) list_cale_pane_ParamLimits

0xacad,	// (0x000863f0) listscroll_cale_day_pane_t1

0xacbf,	// (0x00086402) scroll_pane_cp09_ParamLimits

0x4838,	// (0x0007ff7b) main_mup_eq_pane_t1_ParamLimits

0x4838,	// (0x0007ff7b) main_mup_eq_pane_t1

0x4852,	// (0x0007ff95) main_mup_eq_pane_t2_ParamLimits

0x4852,	// (0x0007ff95) main_mup_eq_pane_t2

0x486a,	// (0x0007ffad) main_mup_eq_pane_t3_ParamLimits

0x486a,	// (0x0007ffad) main_mup_eq_pane_t3

0x4882,	// (0x0007ffc5) main_mup_eq_pane_t4_ParamLimits

0x4882,	// (0x0007ffc5) main_mup_eq_pane_t4

0x489a,	// (0x0007ffdd) main_mup_eq_pane_t5_ParamLimits

0x489a,	// (0x0007ffdd) main_mup_eq_pane_t5

0x48b2,	// (0x0007fff5) main_mup_eq_pane_t6_ParamLimits

0x48b2,	// (0x0007fff5) main_mup_eq_pane_t6

0x48c6,	// (0x00080009) main_mup_eq_pane_t7_ParamLimits

0x48c6,	// (0x00080009) main_mup_eq_pane_t7

0x48da,	// (0x0008001d) main_mup_eq_pane_t8_ParamLimits

0x48da,	// (0x0008001d) main_mup_eq_pane_t8

0x48f0,	// (0x00080033) main_mup_eq_pane_t9_ParamLimits

0x48f0,	// (0x00080033) main_mup_eq_pane_t9

0x4908,	// (0x0008004b) main_mup_eq_pane_t10_ParamLimits

0x4908,	// (0x0008004b) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0008ab98) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0008ab98) main_mup_eq_pane_t

0x49c5,	// (0x00080108) mup_equalizer_pane_cp5_ParamLimits

0x49db,	// (0x0008011e) mup_equalizer_pane_cp6_ParamLimits

0x49f3,	// (0x00080136) mup_equalizer_pane_cp7_ParamLimits

0x9f8b,	// (0x000856ce) main_gallery_pane

0xc82a,	// (0x00087f6d) smil2_volume_pane

0xc832,	// (0x00087f75) smil_status_volume_pane_g1_ParamLimits

0xc845,	// (0x00087f88) smil_status_volume_pane_g2_ParamLimits

0x5485,	// (0x00080bc8) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0008ad4e) smil_status_volume_pane_g_ParamLimits

0xc997,	// (0x000880da) bg_popup_window_pane_cp07_ParamLimits

0xc9a5,	// (0x000880e8) blid_firmament_pane

0x5bad,	// (0x000812f0) aid_size_cell_gallery_ParamLimits

0x5bad,	// (0x000812f0) aid_size_cell_gallery

0x5bbb,	// (0x000812fe) grid_gallery_pane_ParamLimits

0x5bbb,	// (0x000812fe) grid_gallery_pane

0x5bcb,	// (0x0008130e) cell_gallery_pane_ParamLimits

0x5bcb,	// (0x0008130e) cell_gallery_pane

0xcaca,	// (0x0008820d) bg_cell_gallery_focus_pane_ParamLimits

0xcaca,	// (0x0008820d) bg_cell_gallery_focus_pane

0xcadc,	// (0x0008821f) cell_gallery_pane_g1_ParamLimits

0xcadc,	// (0x0008821f) cell_gallery_pane_g1

0x5c19,	// (0x0008135c) cell_gallery_pane_g2_ParamLimits

0x5c19,	// (0x0008135c) cell_gallery_pane_g2

0x5c26,	// (0x00081369) cell_gallery_pane_g3_ParamLimits

0x5c26,	// (0x00081369) cell_gallery_pane_g3

0xcae8,	// (0x0008822b) cell_gallery_pane_g4_ParamLimits

0xcae8,	// (0x0008822b) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008adfc) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008adfc) cell_gallery_pane_g

0xcaf4,	// (0x00088237) bg_cell_gallery_focus_pane_g1

0xcafc,	// (0x0008823f) bg_cell_gallery_focus_pane_g2

0xcb04,	// (0x00088247) bg_cell_gallery_focus_pane_g3

0xcb0c,	// (0x0008824f) bg_cell_gallery_focus_pane_g4

0xcb14,	// (0x00088257) bg_cell_gallery_focus_pane_g5

0xcb1c,	// (0x0008825f) bg_cell_gallery_focus_pane_g6

0xcb24,	// (0x00088267) bg_cell_gallery_focus_pane_g7

0xcb2c,	// (0x0008826f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0008ae05) bg_cell_gallery_focus_pane_g

0xcb34,	// (0x00088277) aid_firma_cardinal

0xcb48,	// (0x0008828b) blid_firmament_pane_t1

0xcb5f,	// (0x000882a2) blid_firmament_pane_t2

0xcb76,	// (0x000882b9) blid_firmament_pane_t3

0xcb8d,	// (0x000882d0) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0008ae16) blid_firmament_pane_t

0xcba4,	// (0x000882e7) blid_sat_info_pane

0xcbb4,	// (0x000882f7) blid_sat_info_pane_g1

0xcbb4,	// (0x000882f7) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0008ae1f) blid_sat_info_pane_g

0xcbbe,	// (0x00088301) blid_sat_info_pane_t1

0xcbcc,	// (0x0008830f) smil2_volume_content_pane

0xcbd5,	// (0x00088318) smil2_volume_pane_g1

0xa768,	// (0x00085eab) smil2_volume_content_pane_g1

0xcbdd,	// (0x00088320) smil2_volume_content_pane_g2

0xcbe6,	// (0x00088329) smil2_volume_content_pane_g3

0xcbef,	// (0x00088332) smil2_volume_content_pane_g4

0xcbf8,	// (0x0008833b) smil2_volume_content_pane_g5

0xcc01,	// (0x00088344) smil2_volume_content_pane_g6

0xcc0a,	// (0x0008834d) smil2_volume_content_pane_g7

0xcc13,	// (0x00088356) smil2_volume_content_pane_g8

0xcc1c,	// (0x0008835f) smil2_volume_content_pane_g9

0xcc25,	// (0x00088368) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0008ae24) smil2_volume_content_pane_g

0x29ae,	// (0x0007e0f1) cale_week_day_heading_pane_t1_ParamLimits

0x29e9,	// (0x0007e12c) cale_week_day_heading_pane_t2_ParamLimits

0x2a24,	// (0x0007e167) cale_week_day_heading_pane_t3_ParamLimits

0x2a5f,	// (0x0007e1a2) cale_week_day_heading_pane_t4_ParamLimits

0x2a9a,	// (0x0007e1dd) cale_week_day_heading_pane_t5_ParamLimits

0x2ad5,	// (0x0007e218) cale_week_day_heading_pane_t6_ParamLimits

0x2b10,	// (0x0007e253) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0008a910) cale_week_day_heading_pane_t_ParamLimits

0xa8b4,	// (0x00085ff7) bg_cale_side_pane_ParamLimits

0x2b4b,	// (0x0007e28e) cale_week_time_pane_t1_ParamLimits

0x2b65,	// (0x0007e2a8) cale_week_time_pane_t2_ParamLimits

0x2b7f,	// (0x0007e2c2) cale_week_time_pane_t3_ParamLimits

0x2b99,	// (0x0007e2dc) cale_week_time_pane_t4_ParamLimits

0x2bb3,	// (0x0007e2f6) cale_week_time_pane_t5_ParamLimits

0x2bcf,	// (0x0007e312) cale_week_time_pane_t6_ParamLimits

0x2bf1,	// (0x0007e334) cale_week_time_pane_t7_ParamLimits

0x2c15,	// (0x0007e358) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0008a91f) cale_week_time_pane_t_ParamLimits

0x2c3b,	// (0x0007e37e) cell_cale_week_pane_g2_ParamLimits

0xa8b4,	// (0x00085ff7) bg_cale_side_pane_cp01_ParamLimits

0x3f50,	// (0x0007f693) cale_month_week_pane_t1_ParamLimits

0x3f69,	// (0x0007f6ac) cale_month_week_pane_t2_ParamLimits

0x3f82,	// (0x0007f6c5) cale_month_week_pane_t3_ParamLimits

0x3f9b,	// (0x0007f6de) cale_month_week_pane_t4_ParamLimits

0x3fb8,	// (0x0007f6fb) cale_month_week_pane_t5_ParamLimits

0x3fd9,	// (0x0007f71c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008a9f8) cale_month_week_pane_t_ParamLimits

0x4120,	// (0x0007f863) cell_cale_month_pane_g1_ParamLimits

0x9f8b,	// (0x000856ce) main_cale_event_viewer_pane

0x9f8b,	// (0x000856ce) listscroll_cale_event_viewer_pane

0xcc2e,	// (0x00088371) list_cale_ev_pane

0xcc36,	// (0x00088379) scroll_pane_cp023

0xcc42,	// (0x00088385) field_cale_ev_pane_ParamLimits

0xcc42,	// (0x00088385) field_cale_ev_pane

0xcc5e,	// (0x000883a1) field_cale_ev_content_pane_ParamLimits

0xcc5e,	// (0x000883a1) field_cale_ev_content_pane

0xcc6a,	// (0x000883ad) field_cale_ev_pane_g1_ParamLimits

0xcc6a,	// (0x000883ad) field_cale_ev_pane_g1

0xcc76,	// (0x000883b9) field_cale_ev_pane_g2_ParamLimits

0xcc76,	// (0x000883b9) field_cale_ev_pane_g2

0xcc8e,	// (0x000883d1) field_cale_ev_pane_g3_ParamLimits

0xcc8e,	// (0x000883d1) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0008ae39) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0008ae39) field_cale_ev_pane_g

0xcca6,	// (0x000883e9) field_cale_ev_pane_t1_ParamLimits

0xcca6,	// (0x000883e9) field_cale_ev_pane_t1

0xccbd,	// (0x00088400) field_cale_ev_content_pane_t1_ParamLimits

0xccbd,	// (0x00088400) field_cale_ev_content_pane_t1

0xb508,	// (0x00086c4b) bg_button_pane_cp01

0x2737,	// (0x0007de7a) listscroll_cale_week_pane_ParamLimits

0xa85e,	// (0x00085fa1) popup_toolbar_window_cp01

0xa885,	// (0x00085fc8) listscroll_cale_week_pane_t1_ParamLimits

0x2737,	// (0x0007de7a) listscroll_cale_day_pane_ParamLimits

0xa85e,	// (0x00085fa1) popup_toolbar_window_cp02

0xacad,	// (0x000863f0) listscroll_cale_day_pane_t1_ParamLimits

0x2737,	// (0x0007de7a) main_cale_month_pane_ParamLimits

0x535c,	// (0x00080a9f) popup_toolbar_window_cp03_ParamLimits

0x535c,	// (0x00080a9f) popup_toolbar_window_cp03

0x4c98,	// (0x000803db) main_image_pane_g2_ParamLimits

0x4c98,	// (0x000803db) main_image_pane_g2

0x4ca4,	// (0x000803e7) main_image_pane_g3_ParamLimits

0x4ca4,	// (0x000803e7) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0008ac2a) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0008ac2a) main_image_pane_g

0xb622,	// (0x00086d65) main_image_pane_t1_ParamLimits

0x4cb0,	// (0x000803f3) main_image_pane_t2_ParamLimits

0x4cb0,	// (0x000803f3) main_image_pane_t2

0x4cc2,	// (0x00080405) main_image_pane_t3_ParamLimits

0x4cc2,	// (0x00080405) main_image_pane_t3

0x4cd4,	// (0x00080417) main_image_pane_t4_ParamLimits

0x4cd4,	// (0x00080417) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0008ac31) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0008ac31) main_image_pane_t

0x4ce6,	// (0x00080429) popup_image_details_window_cp01

0x4cf0,	// (0x00080433) popup_toobar_trans_pane_cp01_ParamLimits

0x4cf0,	// (0x00080433) popup_toobar_trans_pane_cp01

0x52b2,	// (0x000809f5) popup_image_details_window_ParamLimits

0x52b2,	// (0x000809f5) popup_image_details_window

0x52c0,	// (0x00080a03) popup_image_focus_window

0x5602,	// (0x00080d45) camera2_autofocus_pane_ParamLimits

0x5602,	// (0x00080d45) camera2_autofocus_pane

0x9f8b,	// (0x000856ce) bg_popup_sub_pane_cp06

0xccda,	// (0x0008841d) popup_image_focus_window_g1

0xcce2,	// (0x00088425) popup_image_focus_window_g2

0xccea,	// (0x0008842d) popup_image_focus_window_g3

0xccf2,	// (0x00088435) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0008ae40) popup_image_focus_window_g

0xccfa,	// (0x0008843d) popup_image_focus_window_t1

0xcd08,	// (0x0008844b) popup_image_focus_window_t2

0xcd18,	// (0x0008845b) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0008ae49) popup_image_focus_window_t

0xcd26,	// (0x00088469) camera2_autofocus_pane_g1

0xaa46,	// (0x00086189) bg_tb_trans_pane_cp01

0xcd34,	// (0x00088477) popup_image_details_window_g1

0xcd47,	// (0x0008848a) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0008ae5b) popup_image_details_window_g

0xcd70,	// (0x000884b3) popup_image_details_window_t1

0xcd8e,	// (0x000884d1) popup_image_details_window_t2

0xcda7,	// (0x000884ea) popup_image_details_window_t3

0xcdbb,	// (0x000884fe) popup_image_details_window_t4

0xcdd6,	// (0x00088519) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0008ae62) popup_image_details_window_t

0xa6d3,	// (0x00085e16) bg_calc_paper_pane_ParamLimits

0x9f8b,	// (0x000856ce) grid_highlight_pane_cp013

0x24c3,	// (0x0007dc06) list_calc_pane_ParamLimits

0x24d5,	// (0x0007dc18) scroll_pane_cp024

0xa6e7,	// (0x00085e2a) bg_calc_display_pane_ParamLimits

0x24dd,	// (0x0007dc20) calc_display_pane_t1_ParamLimits

0x24f2,	// (0x0007dc35) calc_display_pane_t2_ParamLimits

0x2507,	// (0x0007dc4a) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0008a890) calc_display_pane_t_ParamLimits

0x25e8,	// (0x0007dd2b) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0008a8ad) cell_calc_pane_g

0x25f1,	// (0x0007dd34) cell_calc_pane_t1

0xa746,	// (0x00085e89) grid_highlight_pane_cp02_ParamLimits

0xa75c,	// (0x00085e9f) toolbar_button_pane_cp01_ParamLimits

0xa75c,	// (0x00085e9f) toolbar_button_pane_cp01

0xb667,	// (0x00086daa) temp_image_control_pane_ParamLimits

0xb667,	// (0x00086daa) temp_image_control_pane

0xaa46,	// (0x00086189) main_mp3_pane

0xcdf0,	// (0x00088533) temp_image_control_pane_g1_ParamLimits

0xcdf0,	// (0x00088533) temp_image_control_pane_g1

0xcdfe,	// (0x00088541) temp_image_control_pane_g2_ParamLimits

0xcdfe,	// (0x00088541) temp_image_control_pane_g2

0xce10,	// (0x00088553) temp_image_control_pane_g3_ParamLimits

0xce10,	// (0x00088553) temp_image_control_pane_g3

0x5c63,	// (0x000813a6) temp_image_control_pane_g4_ParamLimits

0x5c63,	// (0x000813a6) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0008ae6d) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0008ae6d) temp_image_control_pane_g

0xcdf0,	// (0x00088533) main_mp3_pane_g1

0x5c74,	// (0x000813b7) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0008ae76) main_mp3_pane_g

0xce53,	// (0x00088596) main_mp3_pane_t1

0xa906,	// (0x00086049) main_camera_pane_g8_ParamLimits

0xa906,	// (0x00086049) main_camera_pane_g8

0x2ee9,	// (0x0007e62c) main_video_pane_g7_ParamLimits

0x2ee9,	// (0x0007e62c) main_video_pane_g7

0x574a,	// (0x00080e8d) main_camera2_pane_t7_ParamLimits

0x574a,	// (0x00080e8d) main_camera2_pane_t7

0xaa65,	// (0x000861a8) scroll_pane_cp025_ParamLimits

0xaa65,	// (0x000861a8) scroll_pane_cp025

0xaa79,	// (0x000861bc) scroll_pane_cp026_ParamLimits

0xaa79,	// (0x000861bc) scroll_pane_cp026

0xaa88,	// (0x000861cb) wml_content_pane_ParamLimits

0x9f8b,	// (0x000856ce) main_touch_calib_pane

0x5d18,	// (0x0008145b) main_touch_calib_pane_g1

0x5d24,	// (0x00081467) main_touch_calib_pane_g2

0x5d30,	// (0x00081473) main_touch_calib_pane_g3

0x5d3c,	// (0x0008147f) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0008ae94) main_touch_calib_pane_g

0x5d48,	// (0x0008148b) main_touch_calib_pane_t1

0x5d61,	// (0x000814a4) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0008ae9d) main_touch_calib_pane_t

0xb22c,	// (0x0008696f) mup_progress_pane_cp02

0xb261,	// (0x000869a4) navi_pane_g1

0xb32a,	// (0x00086a6d) navi_pane_mp_t3

0xaa46,	// (0x00086189) main_mp3_pane_ParamLimits

0x5399,	// (0x00080adc) navi_pane_ParamLimits

0xcdf0,	// (0x00088533) main_mp3_pane_g1_ParamLimits

0x5c74,	// (0x000813b7) main_mp3_pane_g2_ParamLimits

0x5c80,	// (0x000813c3) main_mp3_pane_g3_ParamLimits

0x5c80,	// (0x000813c3) main_mp3_pane_g3

0x5c8c,	// (0x000813cf) main_mp3_pane_g4_ParamLimits

0x5c8c,	// (0x000813cf) main_mp3_pane_g4

0xce20,	// (0x00088563) main_mp3_pane_g5_ParamLimits

0xce20,	// (0x00088563) main_mp3_pane_g5

0xce2e,	// (0x00088571) main_mp3_pane_g6_ParamLimits

0xce2e,	// (0x00088571) main_mp3_pane_g6

0xce3b,	// (0x0008857e) main_mp3_pane_g7_ParamLimits

0xce3b,	// (0x0008857e) main_mp3_pane_g7

0xce47,	// (0x0008858a) main_mp3_pane_g8_ParamLimits

0xce47,	// (0x0008858a) main_mp3_pane_g8

0xf733,	// (0x0008ae76) main_mp3_pane_g_ParamLimits

0x5c98,	// (0x000813db) main_mp3_pane_t2

0x5ca8,	// (0x000813eb) main_mp3_pane_t3

0xce61,	// (0x000885a4) main_mp3_pane_t4

0xce6f,	// (0x000885b2) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0008ae87) main_mp3_pane_t

0xce7d,	// (0x000885c0) mup_progress_pane_cp01

0x0cba,	// (0x0007c3fd) aid_zoom_text_secondary2

0xcc2e,	// (0x00088371) list_cale_ev2_pane

0xcc36,	// (0x00088379) scroll_pane_cp023_ParamLimits

0x5dbc,	// (0x000814ff) field_cale_ev2_pane_ParamLimits

0x5dbc,	// (0x000814ff) field_cale_ev2_pane

0x5dea,	// (0x0008152d) field_cale_ev2_pane_g1_ParamLimits

0x5dea,	// (0x0008152d) field_cale_ev2_pane_g1

0x5df6,	// (0x00081539) field_cale_ev2_pane_g2_ParamLimits

0x5df6,	// (0x00081539) field_cale_ev2_pane_g2

0x5e0e,	// (0x00081551) field_cale_ev2_pane_g3_ParamLimits

0x5e0e,	// (0x00081551) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0008aea8) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0008aea8) field_cale_ev2_pane_g

0x0fc8,	// (0x0007c70b) field_cale_ev2_pane_t1_ParamLimits

0x0fc8,	// (0x0007c70b) field_cale_ev2_pane_t1

0x0fdf,	// (0x0007c722) field_cale_ev2_pane_t2_ParamLimits

0x0fdf,	// (0x0007c722) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0008aeb1) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0008aeb1) field_cale_ev2_pane_t

0x4b73,	// (0x000802b6) main_postcard_pane_g5_ParamLimits

0x4b73,	// (0x000802b6) main_postcard_pane_g5

0x4b81,	// (0x000802c4) main_postcard_pane_g6_ParamLimits

0x4b81,	// (0x000802c4) main_postcard_pane_g6

0x2d33,	// (0x0007e476) camera2_autofocus_pane_cp_ParamLimits

0x2d33,	// (0x0007e476) camera2_autofocus_pane_cp

0xaa46,	// (0x00086189) main_mup3_pane

0x5e52,	// (0x00081595) main_mup3_pane_g1_ParamLimits

0x5e52,	// (0x00081595) main_mup3_pane_g1

0x5e73,	// (0x000815b6) main_mup3_pane_g2_ParamLimits

0x5e73,	// (0x000815b6) main_mup3_pane_g2

0x5eef,	// (0x00081632) main_mup3_pane_g3_ParamLimits

0x5eef,	// (0x00081632) main_mup3_pane_g3

0x5f32,	// (0x00081675) main_mup3_pane_g4_ParamLimits

0x5f32,	// (0x00081675) main_mup3_pane_g4

0x5f75,	// (0x000816b8) main_mup3_pane_g5_ParamLimits

0x5f75,	// (0x000816b8) main_mup3_pane_g5

0x5fba,	// (0x000816fd) main_mup3_pane_g6_ParamLimits

0x5fba,	// (0x000816fd) main_mup3_pane_g6

0xce85,	// (0x000885c8) main_mup3_pane_g7_ParamLimits

0xce85,	// (0x000885c8) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0008aec1) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0008aec1) main_mup3_pane_g

0x6030,	// (0x00081773) main_mup3_pane_t1_ParamLimits

0x6030,	// (0x00081773) main_mup3_pane_t1

0x609f,	// (0x000817e2) main_mup3_pane_t2_ParamLimits

0x609f,	// (0x000817e2) main_mup3_pane_t2

0x6168,	// (0x000818ab) main_mup3_pane_t4_ParamLimits

0x6168,	// (0x000818ab) main_mup3_pane_t4

0x61b6,	// (0x000818f9) main_mup3_pane_t5_ParamLimits

0x61b6,	// (0x000818f9) main_mup3_pane_t5

0x6266,	// (0x000819a9) main_mup3_pane_t6_ParamLimits

0x6266,	// (0x000819a9) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0008aed2) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0008aed2) main_mup3_pane_t

0x6312,	// (0x00081a55) mup3_progress_pane_ParamLimits

0x6312,	// (0x00081a55) mup3_progress_pane

0x6386,	// (0x00081ac9) popup_mup3_control_window_ParamLimits

0x6386,	// (0x00081ac9) popup_mup3_control_window

0xce93,	// (0x000885d6) popup_mup3_text_window

0x639f,	// (0x00081ae2) mup3_progress_pane_t1

0x63be,	// (0x00081b01) mup3_progress_pane_t2

0xce9b,	// (0x000885de) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0008aedf) mup3_progress_pane_t

0xceb8,	// (0x000885fb) mup_progress_pane_cp03

0x9f8b,	// (0x000856ce) bg_tb_trans_pane_cp04

0x63dd,	// (0x00081b20) mup3_volume_pane

0x63e5,	// (0x00081b28) popup_mup3_control_window_g1

0x63ee,	// (0x00081b31) mup3_volume_pane_g1

0x63f7,	// (0x00081b3a) mup3_volume_pane_g2

0x6400,	// (0x00081b43) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0008aee6) mup3_volume_pane_g

0x9f8b,	// (0x000856ce) bg_tb_trans_pane_cp03

0xcec8,	// (0x0008860b) popup_mup3_text_window_g1

0xced0,	// (0x00088613) popup_mup3_text_window_t1

0xa72f,	// (0x00085e72) list_calc_item_pane_g1_ParamLimits

0xc905,	// (0x00088048) mup_volume_pane_cp_g1

0x5d7a,	// (0x000814bd) main_touch_calib_pane_t3

0x5d90,	// (0x000814d3) main_touch_calib_pane_t4

0x5da6,	// (0x000814e9) main_touch_calib_pane_t5

0x1eb8,	// (0x0007d5fb) aid_cell_size_toolbar2

0x1ec0,	// (0x0007d603) aid_popup3_width_pane

0x1f00,	// (0x0007d643) aid_zoom_text_msg_primary

0x2d00,	// (0x0007e443) vorec_t7

0xa6f3,	// (0x00085e36) bg_calc_paper_pane_g1_ParamLimits

0xa6ff,	// (0x00085e42) bg_calc_paper_pane_g2_ParamLimits

0xa70b,	// (0x00085e4e) bg_calc_paper_pane_g3_ParamLimits

0xa717,	// (0x00085e5a) bg_calc_paper_pane_g4_ParamLimits

0xa723,	// (0x00085e66) bg_calc_paper_pane_g5_ParamLimits

0x2546,	// (0x0007dc89) bg_calc_paper_pane_g6_ParamLimits

0x2557,	// (0x0007dc9a) bg_calc_paper_pane_g7_ParamLimits

0x2568,	// (0x0007dcab) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0008a897) bg_calc_paper_pane_g_ParamLimits

0x2579,	// (0x0007dcbc) calc_bg_paper_pane_g9_ParamLimits

0x2e1a,	// (0x0007e55d) image_qvga_pane_ParamLimits

0x2e1a,	// (0x0007e55d) image_qvga_pane

0xa603,	// (0x00085d46) bg_popup_sub_pane_cp04_ParamLimits

0xb59e,	// (0x00086ce1) popup_mup_playback_window_g1_ParamLimits

0xb5aa,	// (0x00086ced) popup_mup_playback_window_t1_ParamLimits

0xb5bf,	// (0x00086d02) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0008ac25) popup_mup_playback_window_t_ParamLimits

0x5879,	// (0x00080fbc) main_mup2_pane_g3_ParamLimits

0x5879,	// (0x00080fbc) main_mup2_pane_g3

0x30ea,	// (0x0007e82d) popup_toolbar_window_cp04

0xb9b4,	// (0x000870f7) popup_call2_audio_second_window_g3_ParamLimits

0xb9b4,	// (0x000870f7) popup_call2_audio_second_window_g3

0xbdbe,	// (0x00087501) popup_call2_audio_first_window_g4_ParamLimits

0xbdbe,	// (0x00087501) popup_call2_audio_first_window_g4

0xc43d,	// (0x00087b80) popup_call2_audio_in_window_g4_ParamLimits

0xc43d,	// (0x00087b80) popup_call2_audio_in_window_g4

0x4c8b,	// (0x000803ce) aid_area_sk_bg_cut_ParamLimits

0x4c8b,	// (0x000803ce) aid_area_sk_bg_cut

0xb5d4,	// (0x00086d17) aid_area_sk_bg_cut_2_ParamLimits

0xb5d4,	// (0x00086d17) aid_area_sk_bg_cut_2

0x5c09,	// (0x0008134c) aid_placing_details_win

0x5c11,	// (0x00081354) aid_placing_details_win_2

0xcd26,	// (0x00088469) camera2_autofocus_pane_g1_ParamLimits

0x210f,	// (0x0007d852) popup_fixed_preview_cale_window_ParamLimits

0x210f,	// (0x0007d852) popup_fixed_preview_cale_window

0xb3b0,	// (0x00086af3) navi_slider_pane_g3

0xb3b9,	// (0x00086afc) navi_slider_pane_g4

0xb3c2,	// (0x00086b05) navi_slider_pane_g5

0xb3b0,	// (0x00086af3) navi_slider_pane_g6

0x45cc,	// (0x0007fd0f) navi_slider_pane_g7

0xb4d5,	// (0x00086c18) mup_scale_pane_g3

0xb4de,	// (0x00086c21) mup_scale_pane_g4

0xb4e7,	// (0x00086c2a) mup_scale_pane_g5

0x4a0b,	// (0x0008014e) mup_scale_pane_g6

0x4a14,	// (0x00080157) mup_scale_pane_g7

0xb3b0,	// (0x00086af3) cams2_slider_pane_g3

0xc987,	// (0x000880ca) cams2_slider_pane_g4

0x5b61,	// (0x000812a4) cams2_slider_pane_g5

0xb3b0,	// (0x00086af3) cams2_slider_pane_g6

0x5b69,	// (0x000812ac) cams2_slider_pane_g7

0xcbb4,	// (0x000882f7) camera2_autofocus_pane_cp_g1

0xc79e,	// (0x00087ee1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc79e,	// (0x00087ee1) bg_popup_preview_window_pane_cp02

0xcede,	// (0x00088621) list_fp_cale_pane_ParamLimits

0xcede,	// (0x00088621) list_fp_cale_pane

0xceea,	// (0x0008862d) popup_fixed_preview_cale_window_t1_ParamLimits

0xceea,	// (0x0008862d) popup_fixed_preview_cale_window_t1

0x6409,	// (0x00081b4c) popup_fixed_preview_cale_window_t2_ParamLimits

0x6409,	// (0x00081b4c) popup_fixed_preview_cale_window_t2

0x641e,	// (0x00081b61) popup_fixed_preview_cale_window_t3_ParamLimits

0x641e,	// (0x00081b61) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0008aeed) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0008aeed) popup_fixed_preview_cale_window_t

0x6433,	// (0x00081b76) list_single_fp_cale_pane_ParamLimits

0x6433,	// (0x00081b76) list_single_fp_cale_pane

0xcf08,	// (0x0008864b) list_single_fp_cale_pane_g1_ParamLimits

0xcf08,	// (0x0008864b) list_single_fp_cale_pane_g1

0xcf14,	// (0x00088657) list_single_fp_cale_pane_g2_ParamLimits

0xcf14,	// (0x00088657) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0008aef4) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0008aef4) list_single_fp_cale_pane_g

0xcf2d,	// (0x00088670) list_single_fp_cale_pane_t1_ParamLimits

0xcf2d,	// (0x00088670) list_single_fp_cale_pane_t1

0xcf3f,	// (0x00088682) list_single_fp_cale_pane_t2_ParamLimits

0xcf3f,	// (0x00088682) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0008aefb) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0008aefb) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9f8b,	// (0x000856ce) main_dialer_pane

0x6447,	// (0x00081b8a) aid_cell_size_keypad

0x6451,	// (0x00081b94) dialer_ne_pane

0x645b,	// (0x00081b9e) grid_dialer_command_1_pane

0x6463,	// (0x00081ba6) grid_dialer_command_2_pane

0x646b,	// (0x00081bae) grid_dialer_keypad_pane

0x647f,	// (0x00081bc2) bg_popup_call_pane_cp06_ParamLimits

0x647f,	// (0x00081bc2) bg_popup_call_pane_cp06

0x648b,	// (0x00081bce) dialer_ne_clear_pane_ParamLimits

0x648b,	// (0x00081bce) dialer_ne_clear_pane

0xcf72,	// (0x000886b5) dialer_ne_pane_g1

0xcf7a,	// (0x000886bd) dialer_ne_pane_t1_ParamLimits

0xcf7a,	// (0x000886bd) dialer_ne_pane_t1

0x6497,	// (0x00081bda) dialer_ne_pane_t2_ParamLimits

0x6497,	// (0x00081bda) dialer_ne_pane_t2

0x64b4,	// (0x00081bf7) dialer_ne_pane_t3_ParamLimits

0x64b4,	// (0x00081bf7) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0008af00) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0008af00) dialer_ne_pane_t

0x64d8,	// (0x00081c1b) dialer_ne_pane_t3_copy1_ParamLimits

0x64d8,	// (0x00081c1b) dialer_ne_pane_t3_copy1

0x64fc,	// (0x00081c3f) cell_dialer_keypad_pane_ParamLimits

0x64fc,	// (0x00081c3f) cell_dialer_keypad_pane

0x6513,	// (0x00081c56) cell_dialer_command_1_pane_ParamLimits

0x6513,	// (0x00081c56) cell_dialer_command_1_pane

0x6529,	// (0x00081c6c) cell_dialer_command_2_pane_ParamLimits

0x6529,	// (0x00081c6c) cell_dialer_command_2_pane

0xcf8c,	// (0x000886cf) bg_button_pane_cp02_ParamLimits

0xcf8c,	// (0x000886cf) bg_button_pane_cp02

0x6538,	// (0x00081c7b) cell_dialer_keypad_pane_g1_ParamLimits

0x6538,	// (0x00081c7b) cell_dialer_keypad_pane_g1

0xcf8c,	// (0x000886cf) bg_button_pane_cp03_ParamLimits

0xcf8c,	// (0x000886cf) bg_button_pane_cp03

0x654d,	// (0x00081c90) cell_dialer_command_1_pane_g1_ParamLimits

0x654d,	// (0x00081c90) cell_dialer_command_1_pane_g1

0xcf98,	// (0x000886db) bg_button_pane_cp04

0x6561,	// (0x00081ca4) cell_dialer_command_2_pane_g1

0xb39f,	// (0x00086ae2) bg_button_pane_cp06

0xcfa0,	// (0x000886e3) dialer_ne_clear_pane_g1

0xb26d,	// (0x000869b0) navi_pane_g2

0xb29b,	// (0x000869de) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008ab28) navi_pane_g

0xb338,	// (0x00086a7b) navi_pane_mv_g2

0xb35f,	// (0x00086aa2) navi_pane_mv_g5

0x4597,	// (0x0007fcda) navi_pane_mv_t1

0xa6e7,	// (0x00085e2a) main_clock2_pane

0x65a1,	// (0x00081ce4) main_clock2_list_pane_ParamLimits

0x65a1,	// (0x00081ce4) main_clock2_list_pane

0x65cb,	// (0x00081d0e) main_clock2_pane_t1_ParamLimits

0x65cb,	// (0x00081d0e) main_clock2_pane_t1

0x65ef,	// (0x00081d32) main_clock2_pane_t2_ParamLimits

0x65ef,	// (0x00081d32) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0008af0c) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0008af0c) main_clock2_pane_t

0x664a,	// (0x00081d8d) popup_clock_analogue_window_cp03_ParamLimits

0x664a,	// (0x00081d8d) popup_clock_analogue_window_cp03

0x6668,	// (0x00081dab) popup_clock_digital_window_cp02_ParamLimits

0x6668,	// (0x00081dab) popup_clock_digital_window_cp02

0x66d7,	// (0x00081e1a) main_clock2_list_single_pane_ParamLimits

0x66d7,	// (0x00081e1a) main_clock2_list_single_pane

0xb39f,	// (0x00086ae2) list_highlight_pane_cp05

0xcfda,	// (0x0008871d) main_clock2_list_single_pane_t1

0x30ea,	// (0x0007e82d) popup_toolbar_window_cp04_ParamLimits

0x5c33,	// (0x00081376) camera2_autofocus_pane_g2_ParamLimits

0x5c33,	// (0x00081376) camera2_autofocus_pane_g2

0x5c3f,	// (0x00081382) camera2_autofocus_pane_g3_ParamLimits

0x5c3f,	// (0x00081382) camera2_autofocus_pane_g3

0x5c4b,	// (0x0008138e) camera2_autofocus_pane_g4_ParamLimits

0x5c4b,	// (0x0008138e) camera2_autofocus_pane_g4

0x5c57,	// (0x0008139a) camera2_autofocus_pane_g5_ParamLimits

0x5c57,	// (0x0008139a) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0008ae50) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0008ae50) camera2_autofocus_pane_g

0x5e32,	// (0x00081575) camera2_autofocus_pane_cp_g2

0x5e3a,	// (0x0008157d) camera2_autofocus_pane_cp_g3

0x5e42,	// (0x00081585) camera2_autofocus_pane_cp_g4

0x5e4a,	// (0x0008158d) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0008aeb6) camera2_autofocus_pane_cp_g

0x6477,	// (0x00081bba) popup_dialer_spcha_window

0x9f8b,	// (0x000856ce) bg_popup_sub_pane_cp07

0xcfe8,	// (0x0008872b) list_spcha_pane

0xcff0,	// (0x00088733) list_single_spcha_pane_ParamLimits

0xcff0,	// (0x00088733) list_single_spcha_pane

0x9f8b,	// (0x000856ce) list_highlight_pane_cp06

0xd001,	// (0x00088744) list_single_spcha_pane_t1

0xc1e7,	// (0x0008792a) popup_call2_audio_out_window_g4_ParamLimits

0xc1e7,	// (0x0008792a) popup_call2_audio_out_window_g4

0x9f8b,	// (0x000856ce) main_imed2_pane

0x52c8,	// (0x00080a0b) popup_imed_adjust2_window

0x52db,	// (0x00080a1e) popup_imed_trans_window_ParamLimits

0x52db,	// (0x00080a1e) popup_imed_trans_window

0xc9f0,	// (0x00088133) popup_blid_sat_info2_window_t1

0xc9fe,	// (0x00088141) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0008ade5) popup_blid_sat_info2_window_t

0x6781,	// (0x00081ec4) aid_size_cell_colour_35

0x679b,	// (0x00081ede) aid_size_cell_colour_112

0x67b2,	// (0x00081ef5) aid_size_cell_effect

0xaa46,	// (0x00086189) bg_tb_trans_pane_cp02

0xae75,	// (0x000865b8) heading_imed_pane

0x67cc,	// (0x00081f0f) listscroll_imed_pane

0xd00f,	// (0x00088752) heading_imed_pane_g1

0xd017,	// (0x0008875a) heading_imed_pane_t1

0xd025,	// (0x00088768) grid_imed_colour_35_pane_ParamLimits

0xd025,	// (0x00088768) grid_imed_colour_35_pane

0x67d8,	// (0x00081f1b) grid_imed_effect_pane

0xd03d,	// (0x00088780) list_imed_aspect_pane

0x67e8,	// (0x00081f2b) scroll_pane_cp027_ParamLimits

0x67e8,	// (0x00081f2b) scroll_pane_cp027

0x67f4,	// (0x00081f37) cell_imed_effect_pane_ParamLimits

0x67f4,	// (0x00081f37) cell_imed_effect_pane

0xd045,	// (0x00088788) cell_imed_colour_pane_ParamLimits

0xd045,	// (0x00088788) cell_imed_colour_pane

0xd087,	// (0x000887ca) cell_imed_colour_pane_g1_ParamLimits

0xd087,	// (0x000887ca) cell_imed_colour_pane_g1

0xd098,	// (0x000887db) hgihlgiht_grid_pane_cp016_ParamLimits

0xd098,	// (0x000887db) hgihlgiht_grid_pane_cp016

0x680c,	// (0x00081f4f) cell_imed_effect_pane_g1

0x6814,	// (0x00081f57) grid_highlight_pane_cp017

0xd0a9,	// (0x000887ec) list_imed_single_pane_ParamLimits

0xd0a9,	// (0x000887ec) list_imed_single_pane

0x9f8b,	// (0x000856ce) list_highlight_pane_cp07

0xd0bf,	// (0x00088802) list_imed_aspect_pane_comp1_t1

0xc7aa,	// (0x00087eed) bg_tb_trans_pane_cp05

0xd0e1,	// (0x00088824) popup_imed_adjust2_window_g1

0xd108,	// (0x0008884b) popup_imed_adjust2_window_t1

0xd120,	// (0x00088863) slider_imed_adjust_pane

0xd134,	// (0x00088877) slider_imed_adjust_pane_g1

0xd144,	// (0x00088887) slider_imed_adjust_pane_g2

0xd154,	// (0x00088897) slider_imed_adjust_pane_g3

0xd165,	// (0x000888a8) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0008af29) slider_imed_adjust_pane_g

0x681d,	// (0x00081f60) aid_size_cell_clipart2

0x6829,	// (0x00081f6c) grid_imed_clipart_pane

0xd176,	// (0x000888b9) scroll_pane_cp031

0x6833,	// (0x00081f76) cell_imed_clipart_pane_ParamLimits

0x6833,	// (0x00081f76) cell_imed_clipart_pane

0x685a,	// (0x00081f9d) cell_imed_clipart_pane_g1

0x9f8b,	// (0x000856ce) grid_highlight_pane_cp014

0x65ad,	// (0x00081cf0) main_clock2_pane_g1_ParamLimits

0x65ad,	// (0x00081cf0) main_clock2_pane_g1

0x6682,	// (0x00081dc5) aid_call2_pane_cp10

0x6694,	// (0x00081dd7) aid_call_pane_cp10

0xb1cc,	// (0x0008690f) popup_clock_analogue_window_cp10_g1

0xb1cc,	// (0x0008690f) popup_clock_analogue_window_cp10_g2

0x66a6,	// (0x00081de9) popup_clock_analogue_window_cp10_g3

0x66a6,	// (0x00081de9) popup_clock_analogue_window_cp10_g4

0xb1cc,	// (0x0008690f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0008af17) popup_clock_analogue_window_cp10_g

0x66b8,	// (0x00081dfb) popup_clock_analogue_window_cp10_t1

0x66e9,	// (0x00081e2c) clock_digital_number_pane_cp10_ParamLimits

0x66e9,	// (0x00081e2c) clock_digital_number_pane_cp10

0x6701,	// (0x00081e44) clock_digital_number_pane_cp11_ParamLimits

0x6701,	// (0x00081e44) clock_digital_number_pane_cp11

0x6719,	// (0x00081e5c) clock_digital_number_pane_cp12_ParamLimits

0x6719,	// (0x00081e5c) clock_digital_number_pane_cp12

0x6731,	// (0x00081e74) clock_digital_number_pane_cp13_ParamLimits

0x6731,	// (0x00081e74) clock_digital_number_pane_cp13

0x6749,	// (0x00081e8c) clock_digital_separator_pane_cp10_ParamLimits

0x6749,	// (0x00081e8c) clock_digital_separator_pane_cp10

0x6761,	// (0x00081ea4) popup_clock_digital_window_cp02_t1_ParamLimits

0x6761,	// (0x00081ea4) popup_clock_digital_window_cp02_t1

0xa5fb,	// (0x00085d3e) clock_digital_number_pane_cp10_g1

0xa5fb,	// (0x00085d3e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0008af32) clock_digital_number_pane_cp10_g

0xa5fb,	// (0x00085d3e) clock_digital_separator_pane_cp10_g1

0xa5fb,	// (0x00085d3e) clock_digital_separator_pane_g2_cp10

0xb367,	// (0x00086aaa) navi_pane_vded_g4

0xb370,	// (0x00086ab3) navi_pane_vded_g5

0xb379,	// (0x00086abc) navi_pane_vded_t1

0x9f8b,	// (0x000856ce) main_vded_pane

0x6863,	// (0x00081fa6) main_vded_pane_g1

0x686f,	// (0x00081fb2) main_vded_pane_g2

0x6879,	// (0x00081fbc) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0008af37) main_vded_pane_g

0x6883,	// (0x00081fc6) main_vded_pane_t1

0x6891,	// (0x00081fd4) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0008af3e) main_vded_pane_t

0x689f,	// (0x00081fe2) vded_slider_pane

0x68a9,	// (0x00081fec) vded_video_pane

0xd17e,	// (0x000888c1) vded_video_pane_g1

0x68b3,	// (0x00081ff6) vded_video_pane_g2

0xcbb4,	// (0x000882f7) vded_video_pane_g3

0x0002,

0xf800,	// (0x0008af43) vded_video_pane_g

0xd188,	// (0x000888cb) vded_slider_pane_g1

0xd191,	// (0x000888d4) vded_slider_pane_g2

0xd19a,	// (0x000888dd) vded_slider_pane_g3

0xd1a3,	// (0x000888e6) vded_slider_pane_g4

0xd1ac,	// (0x000888ef) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0008af4a) vded_slider_pane_g

0x6378,	// (0x00081abb) mup3_rocker_pane_ParamLimits

0x6378,	// (0x00081abb) mup3_rocker_pane

0x68bc,	// (0x00081fff) mup3_control_keys_pane_g1

0x68c4,	// (0x00082007) mup3_control_keys_pane_g2

0x68cc,	// (0x0008200f) mup3_control_keys_pane_g3

0x68d4,	// (0x00082017) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0008af55) mup3_control_keys_pane_g

0x2137,	// (0x0007d87a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2137,	// (0x0007d87a) popup_toolbar2_fixed_window_cp01

0x6392,	// (0x00081ad5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6392,	// (0x00081ad5) popup_toolbar2_fixed_window_cp02

0xbb26,	// (0x00087269) popup_call2_audio_second_window_t4_ParamLimits

0xbb26,	// (0x00087269) popup_call2_audio_second_window_t4

0xc054,	// (0x00087797) popup_call2_audio_first_window_t6_ParamLimits

0xc054,	// (0x00087797) popup_call2_audio_first_window_t6

0xc2ea,	// (0x00087a2d) popup_call2_audio_out_window_t6_ParamLimits

0xc2ea,	// (0x00087a2d) popup_call2_audio_out_window_t6

0x9f8b,	// (0x000856ce) main_vitu_pane

0x68e4,	// (0x00082027) aid_size_cell_itu_ParamLimits

0x68e4,	// (0x00082027) aid_size_cell_itu

0xe39a,	// (0x00089add) bg_popup_window_pane_cp08_ParamLimits

0xe39a,	// (0x00089add) bg_popup_window_pane_cp08

0x68f2,	// (0x00082035) field_vitu_entry_pane_ParamLimits

0x68f2,	// (0x00082035) field_vitu_entry_pane

0x6901,	// (0x00082044) grid_vitu_function_pane_ParamLimits

0x6901,	// (0x00082044) grid_vitu_function_pane

0x6911,	// (0x00082054) grid_vitu_itu_pane_ParamLimits

0x6911,	// (0x00082054) grid_vitu_itu_pane

0x6921,	// (0x00082064) cell_vitu_itu_pane_ParamLimits

0x6921,	// (0x00082064) cell_vitu_itu_pane

0x6936,	// (0x00082079) cell_vitu_function_pane_ParamLimits

0x6936,	// (0x00082079) cell_vitu_function_pane

0xaa46,	// (0x00086189) bg_popup_sub_pane_cp08_ParamLimits

0xaa46,	// (0x00086189) bg_popup_sub_pane_cp08

0x694a,	// (0x0008208d) field_vitu_entry_pane_t1_ParamLimits

0x694a,	// (0x0008208d) field_vitu_entry_pane_t1

0xd1cd,	// (0x00088910) field_vitu_entry_pane_t2_ParamLimits

0xd1cd,	// (0x00088910) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0008af63) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0008af63) field_vitu_entry_pane_t

0xd1ea,	// (0x0008892d) bg_button_pane_cp05_ParamLimits

0xd1ea,	// (0x0008892d) bg_button_pane_cp05

0x6967,	// (0x000820aa) cell_vitu_itu_pane_g1

0x697f,	// (0x000820c2) cell_vitu_itu_pane_t1_ParamLimits

0x697f,	// (0x000820c2) cell_vitu_itu_pane_t1

0x6991,	// (0x000820d4) cell_vitu_itu_pane_t2_ParamLimits

0x6991,	// (0x000820d4) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0008af68) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0008af68) cell_vitu_itu_pane_t

0xd1f8,	// (0x0008893b) bg_button_pane_cp07

0x69d4,	// (0x00082117) cell_vitu_function_pane_g1

0x23ea,	// (0x0007db2d) main_calc_pane_g1

0x1ef4,	// (0x0007d637) aid_visual_content_pane

0x9f8b,	// (0x000856ce) main_vradio_pane

0x69dd,	// (0x00082120) main_vradio_pane_g1_ParamLimits

0x69dd,	// (0x00082120) main_vradio_pane_g1

0xd202,	// (0x00088945) main_vradio_pane_g2_ParamLimits

0xd202,	// (0x00088945) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0008af6f) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0008af6f) main_vradio_pane_g

0x69ed,	// (0x00082130) main_vradio_pane_t1_ParamLimits

0x69ed,	// (0x00082130) main_vradio_pane_t1

0x69ff,	// (0x00082142) main_vradio_pane_t2_ParamLimits

0x69ff,	// (0x00082142) main_vradio_pane_t2

0xd20f,	// (0x00088952) main_vradio_pane_t3_ParamLimits

0xd20f,	// (0x00088952) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0008af74) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0008af74) main_vradio_pane_t

0x6a11,	// (0x00082154) vradio_rocker_control_pane_ParamLimits

0x6a11,	// (0x00082154) vradio_rocker_control_pane

0x6a1d,	// (0x00082160) vradio_station_info_pane_ParamLimits

0x6a1d,	// (0x00082160) vradio_station_info_pane

0xd223,	// (0x00088966) vradio_frequency_info_pane_ParamLimits

0xd223,	// (0x00088966) vradio_frequency_info_pane

0xcbb4,	// (0x000882f7) vradio_station_info_pane_g1

0xd232,	// (0x00088975) vradio_station_info_pane_t1_ParamLimits

0xd232,	// (0x00088975) vradio_station_info_pane_t1

0xd254,	// (0x00088997) vradio_station_info_pane_t2_ParamLimits

0xd254,	// (0x00088997) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0008af7b) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0008af7b) vradio_station_info_pane_t

0xd266,	// (0x000889a9) vradio_tuning_pane

0xd26e,	// (0x000889b1) vradio_rocker_control_pane_g1

0xd276,	// (0x000889b9) vradio_rocker_control_pane_g2

0xd27e,	// (0x000889c1) vradio_rocker_control_pane_g3

0xd286,	// (0x000889c9) vradio_rocker_control_pane_g4

0xd28e,	// (0x000889d1) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0008af80) vradio_rocker_control_pane_g

0x6a2c,	// (0x0008216f) vradio_frequency_info_pane_g1

0xd296,	// (0x000889d9) vradio_frequency_info_pane_t1_ParamLimits

0xd296,	// (0x000889d9) vradio_frequency_info_pane_t1

0x6a36,	// (0x00082179) vradio_tuning_pane_g1

0x6a3f,	// (0x00082182) vradio_tuning_pane_t1

0x1f3d,	// (0x0007d680) area_side_right_pane_ParamLimits

0x1f3d,	// (0x0007d680) area_side_right_pane

0xc765,	// (0x00087ea8) status_small_pane_g1

0xc76d,	// (0x00087eb0) status_small_pane_g2

0xc776,	// (0x00087eb9) status_small_pane_g3

0xc77f,	// (0x00087ec2) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0008ad3b) status_small_pane_g

0xc788,	// (0x00087ecb) status_small_pane_t1

0x9f8b,	// (0x000856ce) main_video3_pane

0xd2aa,	// (0x000889ed) cams_zoom_vslider_pane

0xd2b2,	// (0x000889f5) image3_wide_pane_ParamLimits

0xd2b2,	// (0x000889f5) image3_wide_pane

0xd2cc,	// (0x00088a0f) image3_wide_small_pane

0xd2d8,	// (0x00088a1b) main_video3_pane_g1_ParamLimits

0xd2d8,	// (0x00088a1b) main_video3_pane_g1

0xd2f4,	// (0x00088a37) main_video3_pane_g2_ParamLimits

0xd2f4,	// (0x00088a37) main_video3_pane_g2

0x0001,

0xf848,	// (0x0008af8b) main_video3_pane_g_ParamLimits

0xf848,	// (0x0008af8b) main_video3_pane_g

0xd310,	// (0x00088a53) main_video3_pane_t1_ParamLimits

0xd310,	// (0x00088a53) main_video3_pane_t1

0xd33b,	// (0x00088a7e) main_video3_pane_t2_ParamLimits

0xd33b,	// (0x00088a7e) main_video3_pane_t2

0xd366,	// (0x00088aa9) main_video3_pane_t3_ParamLimits

0xd366,	// (0x00088aa9) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0008af90) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0008af90) main_video3_pane_t

0xd393,	// (0x00088ad6) cams_zoom_vslider_pane_g1

0xd39c,	// (0x00088adf) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0008af97) cams_zoom_vslider_pane_g

0xd3a4,	// (0x00088ae7) small_slider_vertical_pane

0xcbb4,	// (0x000882f7) small_slider_vertical_pane_g1

0xcbb4,	// (0x000882f7) small_slider_vertical_pane_g2

0xd3ac,	// (0x00088aef) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0008af9c) small_slider_vertical_pane_g

0x9f8b,	// (0x000856ce) main_hwr_training_pane

0xd3b5,	// (0x00088af8) hwr_training_instruct_pane_ParamLimits

0xd3b5,	// (0x00088af8) hwr_training_instruct_pane

0x6a4e,	// (0x00082191) hwr_training_navi_pane_ParamLimits

0x6a4e,	// (0x00082191) hwr_training_navi_pane

0x6a68,	// (0x000821ab) hwr_training_write_pane_ParamLimits

0x6a68,	// (0x000821ab) hwr_training_write_pane

0x9f8b,	// (0x000856ce) bg_frame_shadow_pane

0xd3ec,	// (0x00088b2f) hwr_training_write_pane_g1

0xd3f4,	// (0x00088b37) hwr_training_write_pane_g2

0xd3fc,	// (0x00088b3f) hwr_training_write_pane_g3

0xd404,	// (0x00088b47) hwr_training_write_pane_g4

0xd40c,	// (0x00088b4f) hwr_training_write_pane_g5

0xd414,	// (0x00088b57) hwr_training_write_pane_g6

0xd41c,	// (0x00088b5f) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0008afa3) hwr_training_write_pane_g

0x6aa0,	// (0x000821e3) hwr_training_navi_pane_g1_ParamLimits

0x6aa0,	// (0x000821e3) hwr_training_navi_pane_g1

0x6ab2,	// (0x000821f5) hwr_training_navi_pane_g2_ParamLimits

0x6ab2,	// (0x000821f5) hwr_training_navi_pane_g2

0x6ac4,	// (0x00082207) hwr_training_navi_pane_g3_ParamLimits

0x6ac4,	// (0x00082207) hwr_training_navi_pane_g3

0x6ad4,	// (0x00082217) hwr_training_navi_pane_g4_ParamLimits

0x6ad4,	// (0x00082217) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0008afb2) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0008afb2) hwr_training_navi_pane_g

0x6aee,	// (0x00082231) hwr_training_navi_pane_t1

0x6afc,	// (0x0008223f) list_single_hwr_training_instruct_pane_ParamLimits

0x6afc,	// (0x0008223f) list_single_hwr_training_instruct_pane

0xd424,	// (0x00088b67) list_single_hwr_training_instruct_pane_t1

0xcaf4,	// (0x00088237) bg_frame_shadow_pane_g1

0xd433,	// (0x00088b76) bg_frame_shadow_pane_g2

0xd43b,	// (0x00088b7e) bg_frame_shadow_pane_g3

0xd443,	// (0x00088b86) bg_frame_shadow_pane_g4

0xd44b,	// (0x00088b8e) bg_frame_shadow_pane_g5

0xd453,	// (0x00088b96) bg_frame_shadow_pane_g6

0xd45b,	// (0x00088b9e) bg_frame_shadow_pane_g7

0xa7b2,	// (0x00085ef5) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0008afbd) bg_frame_shadow_pane_g

0x9f8b,	// (0x000856ce) main_video_tele_dialer_pane

0x6b2b,	// (0x0008226e) aid_size_cell_video_keypad_ParamLimits

0x6b2b,	// (0x0008226e) aid_size_cell_video_keypad

0x6b3b,	// (0x0008227e) grid_video_dialer_keypad_pane_ParamLimits

0x6b3b,	// (0x0008227e) grid_video_dialer_keypad_pane

0x6b6f,	// (0x000822b2) video_down_pane_cp_ParamLimits

0x6b6f,	// (0x000822b2) video_down_pane_cp

0x6b99,	// (0x000822dc) cell_video_dialer_keypad_pane_ParamLimits

0x6b99,	// (0x000822dc) cell_video_dialer_keypad_pane

0xd463,	// (0x00088ba6) bg_button_pane_cp08_ParamLimits

0xd463,	// (0x00088ba6) bg_button_pane_cp08

0x6bae,	// (0x000822f1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6bae,	// (0x000822f1) cell_video_dialer_keypad_pane_g1

0x636c,	// (0x00081aaf) mup3_rocker2_pane_ParamLimits

0x636c,	// (0x00081aaf) mup3_rocker2_pane

0xcbb4,	// (0x000882f7) mup3_rocker2_pane_g1

0x523c,	// (0x0008097f) main_dialer2_pane

0x9f8b,	// (0x000856ce) main_mp4_pane

0x6bf1,	// (0x00082334) main_mp4_pane_g1_ParamLimits

0x6bf1,	// (0x00082334) main_mp4_pane_g1

0x6bff,	// (0x00082342) main_mp4_pane_g2_ParamLimits

0x6bff,	// (0x00082342) main_mp4_pane_g2

0x6c0d,	// (0x00082350) main_mp4_pane_g3_ParamLimits

0x6c0d,	// (0x00082350) main_mp4_pane_g3

0x6c52,	// (0x00082395) main_mp4_pane_g4_ParamLimits

0x6c52,	// (0x00082395) main_mp4_pane_g4

0x6c7a,	// (0x000823bd) main_mp4_pane_g5_ParamLimits

0x6c7a,	// (0x000823bd) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0008afdd) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0008afdd) main_mp4_pane_g

0x6cca,	// (0x0008240d) main_mp4_pane_t1_ParamLimits

0x6cca,	// (0x0008240d) main_mp4_pane_t1

0x6d26,	// (0x00082469) main_mp4_pane_t2_ParamLimits

0x6d26,	// (0x00082469) main_mp4_pane_t2

0xd46f,	// (0x00088bb2) main_mp4_pane_t3_ParamLimits

0xd46f,	// (0x00088bb2) main_mp4_pane_t3

0x6d78,	// (0x000824bb) main_mp4_pane_t4_ParamLimits

0x6d78,	// (0x000824bb) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0008afea) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0008afea) main_mp4_pane_t

0x6dbc,	// (0x000824ff) mp4_progress_pane_ParamLimits

0x6dbc,	// (0x000824ff) mp4_progress_pane

0x6e06,	// (0x00082549) mp4_rocker_pane_ParamLimits

0x6e06,	// (0x00082549) mp4_rocker_pane

0xd497,	// (0x00088bda) mp4_progress_pane_t1

0xd4b0,	// (0x00088bf3) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0008aff3) mp4_progress_pane_t

0xd4c9,	// (0x00088c0c) mup_progress_pane_cp04

0xcbb4,	// (0x000882f7) mp4_rocker_pane_g1

0x6e26,	// (0x00082569) aid_cell_size_keypad2_ParamLimits

0x6e26,	// (0x00082569) aid_cell_size_keypad2

0x6e36,	// (0x00082579) dialer2_ne_pane_ParamLimits

0x6e36,	// (0x00082579) dialer2_ne_pane

0x6e44,	// (0x00082587) grid_dialer2_keypad_pane_ParamLimits

0x6e44,	// (0x00082587) grid_dialer2_keypad_pane

0xdb9a,	// (0x000892dd) bg_popup_call_pane_cp07_ParamLimits

0xdb9a,	// (0x000892dd) bg_popup_call_pane_cp07

0x6e54,	// (0x00082597) dialer2_ne_pane_t1_ParamLimits

0x6e54,	// (0x00082597) dialer2_ne_pane_t1

0x6e79,	// (0x000825bc) cell_dialer2_keypad_pane_ParamLimits

0x6e79,	// (0x000825bc) cell_dialer2_keypad_pane

0xd4e7,	// (0x00088c2a) bg_button_pane_pane_cp04_ParamLimits

0xd4e7,	// (0x00088c2a) bg_button_pane_pane_cp04

0x6e8e,	// (0x000825d1) cell_dialer2_keypad_pane_g1_ParamLimits

0x6e8e,	// (0x000825d1) cell_dialer2_keypad_pane_g1

0x2fac,	// (0x0007e6ef) aid_placing_vt_set_content_ParamLimits

0x2fac,	// (0x0007e6ef) aid_placing_vt_set_content

0x2fd8,	// (0x0007e71b) aid_placing_vt_set_title_ParamLimits

0x2fd8,	// (0x0007e71b) aid_placing_vt_set_title

0x9f8b,	// (0x000856ce) main_image3_pane

0x6f28,	// (0x0008266b) area_side_right_pane_cp01_ParamLimits

0x6f28,	// (0x0008266b) area_side_right_pane_cp01

0xa7fd,	// (0x00085f40) main_image3_pane_g1_ParamLimits

0xa7fd,	// (0x00085f40) main_image3_pane_g1

0x6f55,	// (0x00082698) main_image3_pane_g2_ParamLimits

0x6f55,	// (0x00082698) main_image3_pane_g2

0x6f6e,	// (0x000826b1) main_image3_pane_g3_ParamLimits

0x6f6e,	// (0x000826b1) main_image3_pane_g3

0x6f87,	// (0x000826ca) main_image3_pane_g4_ParamLimits

0x6f87,	// (0x000826ca) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0008b002) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0008b002) main_image3_pane_g

0x6fa0,	// (0x000826e3) main_image3_pane_t1_ParamLimits

0x6fa0,	// (0x000826e3) main_image3_pane_t1

0x6fc5,	// (0x00082708) main_image3_pane_t2_ParamLimits

0x6fc5,	// (0x00082708) main_image3_pane_t2

0x6fe4,	// (0x00082727) main_image3_pane_t3_ParamLimits

0x6fe4,	// (0x00082727) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0008b00b) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0008b00b) main_image3_pane_t

0xe39a,	// (0x00089add) grid_sctrl_middle_pane_cp01_ParamLimits

0xe39a,	// (0x00089add) grid_sctrl_middle_pane_cp01

0x7045,	// (0x00082788) cell_sctrl_middle_pane_cp01_ParamLimits

0x7045,	// (0x00082788) cell_sctrl_middle_pane_cp01

0x7056,	// (0x00082799) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7056,	// (0x00082799) cell_sctrl_middle_pane_cp01_g1

0x9f8b,	// (0x000856ce) main_call4_pane

0x7063,	// (0x000827a6) aid_size_button_call4_ParamLimits

0x7063,	// (0x000827a6) aid_size_button_call4

0x7093,	// (0x000827d6) call4_windows_pane_ParamLimits

0x7093,	// (0x000827d6) call4_windows_pane

0x70ad,	// (0x000827f0) grid_call4_button_pane_ParamLimits

0x70ad,	// (0x000827f0) grid_call4_button_pane

0xd4f3,	// (0x00088c36) call4_windows_conf_pane

0xd508,	// (0x00088c4b) popup_call4_audio_first_window_ParamLimits

0xd508,	// (0x00088c4b) popup_call4_audio_first_window

0xd554,	// (0x00088c97) popup_call4_audio_second_window_ParamLimits

0xd554,	// (0x00088c97) popup_call4_audio_second_window

0xd568,	// (0x00088cab) popup_call4_audio_wait_window_ParamLimits

0xd568,	// (0x00088cab) popup_call4_audio_wait_window

0x70d1,	// (0x00082814) cell_call4_button_pane_ParamLimits

0x70d1,	// (0x00082814) cell_call4_button_pane

0x70f6,	// (0x00082839) bg_button_pane_cp09_ParamLimits

0x70f6,	// (0x00082839) bg_button_pane_cp09

0x7102,	// (0x00082845) cell_call4_button_pane_g1_ParamLimits

0x7102,	// (0x00082845) cell_call4_button_pane_g1

0x710f,	// (0x00082852) cell_call4_button_pane_t1_ParamLimits

0x710f,	// (0x00082852) cell_call4_button_pane_t1

0xd5b0,	// (0x00088cf3) popup_call4_audio_conf_window_ParamLimits

0xd5b0,	// (0x00088cf3) popup_call4_audio_conf_window

0x639f,	// (0x00081ae2) mup3_progress_pane_t1_ParamLimits

0x63be,	// (0x00081b01) mup3_progress_pane_t2_ParamLimits

0xce9b,	// (0x000885de) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0008aedf) mup3_progress_pane_t_ParamLimits

0xceb8,	// (0x000885fb) mup_progress_pane_cp03_ParamLimits

0x68dc,	// (0x0008201f) mup3_control_keys_pane_g4_copy1

0x6dea,	// (0x0008252d) mp4_rocker2_pane_ParamLimits

0x6dea,	// (0x0008252d) mp4_rocker2_pane

0xd5c4,	// (0x00088d07) mp4_rocker2_pane_g1

0xd5cc,	// (0x00088d0f) mp4_rocker2_pane_g2

0x7121,	// (0x00082864) mp4_rocker2_pane_g3

0x7129,	// (0x0008286c) mp4_rocker2_pane_g4

0x7131,	// (0x00082874) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0008b014) mp4_rocker2_pane_g

0x9f8b,	// (0x000856ce) main_camera4_pane

0x9f8b,	// (0x000856ce) main_video4_pane

0x6b4b,	// (0x0008228e) main_video_tele_dialer_pane_t1_ParamLimits

0x6b4b,	// (0x0008228e) main_video_tele_dialer_pane_t1

0x6b5d,	// (0x000822a0) main_video_tele_dialer_pane_t2_ParamLimits

0x6b5d,	// (0x000822a0) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0008afce) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0008afce) main_video_tele_dialer_pane_t

0x7151,	// (0x00082894) cam4_autofocus_pane_ParamLimits

0x7151,	// (0x00082894) cam4_autofocus_pane

0x716b,	// (0x000828ae) cam4_image_uncrop_pane_ParamLimits

0x716b,	// (0x000828ae) cam4_image_uncrop_pane

0x7182,	// (0x000828c5) cam4_indicators_pane_ParamLimits

0x7182,	// (0x000828c5) cam4_indicators_pane

0x719e,	// (0x000828e1) main_camera4_pane_g1_ParamLimits

0x719e,	// (0x000828e1) main_camera4_pane_g1

0x71aa,	// (0x000828ed) main_camera4_pane_g2_ParamLimits

0x71aa,	// (0x000828ed) main_camera4_pane_g2

0x71aa,	// (0x000828ed) main_camera4_pane_g3_ParamLimits

0x71aa,	// (0x000828ed) main_camera4_pane_g3

0x71b6,	// (0x000828f9) main_camera4_pane_g4_ParamLimits

0x71b6,	// (0x000828f9) main_camera4_pane_g4

0x71c2,	// (0x00082905) main_camera4_pane_g5_ParamLimits

0x71c2,	// (0x00082905) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0008b01f) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0008b01f) main_camera4_pane_g

0x71dc,	// (0x0008291f) main_camera4_pane_t1_ParamLimits

0x71dc,	// (0x0008291f) main_camera4_pane_t1

0xce20,	// (0x00088563) bg_tb_trans_pane_cp06

0x722c,	// (0x0008296f) cam4_indicators_pane_g1

0x723d,	// (0x00082980) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0008b03a) cam4_indicators_pane_g

0x725b,	// (0x0008299e) cam4_indicators_pane_t1

0x7285,	// (0x000829c8) main_video4_pane_g1_ParamLimits

0x7285,	// (0x000829c8) main_video4_pane_g1

0x7291,	// (0x000829d4) main_video4_pane_g2_ParamLimits

0x7291,	// (0x000829d4) main_video4_pane_g2

0x729d,	// (0x000829e0) main_video4_pane_g3_ParamLimits

0x729d,	// (0x000829e0) main_video4_pane_g3

0x72a9,	// (0x000829ec) main_video4_pane_g4_ParamLimits

0x72a9,	// (0x000829ec) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0008b041) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0008b041) main_video4_pane_g

0x72c9,	// (0x00082a0c) vid4_indicators_pane_ParamLimits

0x72c9,	// (0x00082a0c) vid4_indicators_pane

0x72e8,	// (0x00082a2b) video4_image_uncrop_cif_pane_ParamLimits

0x72e8,	// (0x00082a2b) video4_image_uncrop_cif_pane

0x72f7,	// (0x00082a3a) video4_image_uncrop_nhd_pane_ParamLimits

0x72f7,	// (0x00082a3a) video4_image_uncrop_nhd_pane

0x716b,	// (0x000828ae) video4_image_uncrop_vga_pane_ParamLimits

0x716b,	// (0x000828ae) video4_image_uncrop_vga_pane

0xaa46,	// (0x00086189) bg_tb_trans_pane_cp07

0x730c,	// (0x00082a4f) vid4_indicators_pane_g1

0x7320,	// (0x00082a63) vid4_indicators_pane_g2

0x7334,	// (0x00082a77) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0008b04c) vid4_indicators_pane_g

0x7361,	// (0x00082aa4) vid4_indicators_pane_t1

0x7378,	// (0x00082abb) cam4_autofocus_pane_g1

0x7380,	// (0x00082ac3) cam4_autofocus_pane_g2

0x7388,	// (0x00082acb) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0008b057) cam4_autofocus_pane_g

0x7390,	// (0x00082ad3) cam4_autofocus_pane_g3_copy1

0x6b7d,	// (0x000822c0) video_down_pane_cp_t1

0x6b8b,	// (0x000822ce) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0008afd3) video_down_pane_cp_t

0xe39a,	// (0x00089add) popup_vitu2_window_ParamLimits

0xe39a,	// (0x00089add) popup_vitu2_window

0x7398,	// (0x00082adb) aid_size_cell2_itu2_ParamLimits

0x7398,	// (0x00082adb) aid_size_cell2_itu2

0x73ba,	// (0x00082afd) aid_size_cell_itu2_ParamLimits

0x73ba,	// (0x00082afd) aid_size_cell_itu2

0xdb9a,	// (0x000892dd) bg_popup_window_pane_cp09_ParamLimits

0xdb9a,	// (0x000892dd) bg_popup_window_pane_cp09

0x73fe,	// (0x00082b41) field_vitu2_entry_pane_ParamLimits

0x73fe,	// (0x00082b41) field_vitu2_entry_pane

0x741e,	// (0x00082b61) grid_vitu2_function_pane_ParamLimits

0x741e,	// (0x00082b61) grid_vitu2_function_pane

0x7462,	// (0x00082ba5) grid_vitu2_itu_pane_ParamLimits

0x7462,	// (0x00082ba5) grid_vitu2_itu_pane

0x74d8,	// (0x00082c1b) cell_vitu2_itu_pane_ParamLimits

0x74d8,	// (0x00082c1b) cell_vitu2_itu_pane

0x74ed,	// (0x00082c30) cell_vitu2_function_pane_ParamLimits

0x74ed,	// (0x00082c30) cell_vitu2_function_pane

0xd5d4,	// (0x00088d17) bg_popup_call_pane_cp08_ParamLimits

0xd5d4,	// (0x00088d17) bg_popup_call_pane_cp08

0xd5eb,	// (0x00088d2e) field_vitu2_entry_pane_g1

0xd5f7,	// (0x00088d3a) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0008b05e) field_vitu2_entry_pane_g

0x0ff4,	// (0x0007c737) field_vitu2_entry_pane_t1_ParamLimits

0x0ff4,	// (0x0007c737) field_vitu2_entry_pane_t1

0x1020,	// (0x0007c763) field_vitu2_entry_pane_t2_ParamLimits

0x1020,	// (0x0007c763) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0008b065) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0008b065) field_vitu2_entry_pane_t

0x752e,	// (0x00082c71) bg_button_pane_cp010_ParamLimits

0x752e,	// (0x00082c71) bg_button_pane_cp010

0x753c,	// (0x00082c7f) cell_vitu2_itu_pane_g1

0x7565,	// (0x00082ca8) cell_vitu2_itu_pane_t1_ParamLimits

0x7565,	// (0x00082ca8) cell_vitu2_itu_pane_t1

0x103d,	// (0x0007c780) cell_vitu2_itu_pane_t2_ParamLimits

0x103d,	// (0x0007c780) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0008b06f) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0008b06f) cell_vitu2_itu_pane_t

0xaa46,	// (0x00086189) bg_button_pane_cp011

0x75b1,	// (0x00082cf4) cell_vitu2_function_pane_g1

0x9f8b,	// (0x000856ce) main_myfav_hc_pane

0x7026,	// (0x00082769) popup_image3_note_pane_ParamLimits

0x7026,	// (0x00082769) popup_image3_note_pane

0x7034,	// (0x00082777) popup_image3_tool_bar_pane_ParamLimits

0x7034,	// (0x00082777) popup_image3_tool_bar_pane

0x10ab,	// (0x0007c7ee) cell_vitu2_itu_pane_t3_ParamLimits

0x10ab,	// (0x0007c7ee) cell_vitu2_itu_pane_t3

0x9f8b,	// (0x000856ce) bg_popup_trans_pane

0xd619,	// (0x00088d5c) grid_image3_tool_bar_pane

0xd623,	// (0x00088d66) bg_popup_trans_pane_g1

0xab6e,	// (0x000862b1) bg_popup_trans_pane_g2

0xd62b,	// (0x00088d6e) bg_popup_trans_pane_g3

0xd633,	// (0x00088d76) bg_popup_trans_pane_g4

0xd63b,	// (0x00088d7e) bg_popup_trans_pane_g5

0xd643,	// (0x00088d86) bg_popup_trans_pane_g6

0xd64b,	// (0x00088d8e) bg_popup_trans_pane_g7

0xd653,	// (0x00088d96) bg_popup_trans_pane_g8

0xab4e,	// (0x00086291) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0008b076) bg_popup_trans_pane_g

0xd65b,	// (0x00088d9e) cell_image3_tool_bar_pane_ParamLimits

0xd65b,	// (0x00088d9e) cell_image3_tool_bar_pane

0xcbb4,	// (0x000882f7) cell_image3_tool_bar_pane_g1

0x9f8b,	// (0x000856ce) bg_popup_trans_pane_cp1

0xd66f,	// (0x00088db2) popup_image3_note_pane_t1

0xd67d,	// (0x00088dc0) popup_image3_note_pane_t2

0xd68b,	// (0x00088dce) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0008b089) popup_image3_note_pane_t

0xd699,	// (0x00088ddc) popup_image3_note_pane_t3_copy1

0x75c5,	// (0x00082d08) bg_myfav_hc_instruction_pane_ParamLimits

0x75c5,	// (0x00082d08) bg_myfav_hc_instruction_pane

0x75dd,	// (0x00082d20) cell_myfav_contact_pane_ParamLimits

0x75dd,	// (0x00082d20) cell_myfav_contact_pane

0x75f7,	// (0x00082d3a) cell_myfav_contact_pane_cp1_ParamLimits

0x75f7,	// (0x00082d3a) cell_myfav_contact_pane_cp1

0x760f,	// (0x00082d52) cell_myfav_contact_pane_cp2_ParamLimits

0x760f,	// (0x00082d52) cell_myfav_contact_pane_cp2

0x7627,	// (0x00082d6a) cell_myfav_contact_pane_cp3_ParamLimits

0x7627,	// (0x00082d6a) cell_myfav_contact_pane_cp3

0x763e,	// (0x00082d81) cell_myfav_contact_pane_cp4_ParamLimits

0x763e,	// (0x00082d81) cell_myfav_contact_pane_cp4

0x7654,	// (0x00082d97) cell_myfav_contact_pane_cp5_ParamLimits

0x7654,	// (0x00082d97) cell_myfav_contact_pane_cp5

0x7668,	// (0x00082dab) cell_myfav_contact_pane_cp6_ParamLimits

0x7668,	// (0x00082dab) cell_myfav_contact_pane_cp6

0x767c,	// (0x00082dbf) cell_myfav_contact_pane_cp7_ParamLimits

0x767c,	// (0x00082dbf) cell_myfav_contact_pane_cp7

0xd6a7,	// (0x00088dea) listscroll_gen_pane_cp05

0x7694,	// (0x00082dd7) main_myfav_hc_pane_g1_ParamLimits

0x7694,	// (0x00082dd7) main_myfav_hc_pane_g1

0x76ac,	// (0x00082def) main_myfav_hc_pane_g2_ParamLimits

0x76ac,	// (0x00082def) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0008b090) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0008b090) main_myfav_hc_pane_g

0x76dc,	// (0x00082e1f) main_myfav_hc_pane_t1_ParamLimits

0x76dc,	// (0x00082e1f) main_myfav_hc_pane_t1

0xd6b0,	// (0x00088df3) main_myfav_hc_pane_t2_ParamLimits

0xd6b0,	// (0x00088df3) main_myfav_hc_pane_t2

0xd6c2,	// (0x00088e05) main_myfav_hc_pane_t3_ParamLimits

0xd6c2,	// (0x00088e05) main_myfav_hc_pane_t3

0x76f3,	// (0x00082e36) main_myfav_hc_pane_t4_ParamLimits

0x76f3,	// (0x00082e36) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0008b097) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0008b097) main_myfav_hc_pane_t

0xcbb4,	// (0x000882f7) bg_myfav_hc_instruction_pane_g1

0xd6d4,	// (0x00088e17) cell_myfav_contact_pane_g1_ParamLimits

0xd6d4,	// (0x00088e17) cell_myfav_contact_pane_g1

0xd6d4,	// (0x00088e17) cell_myfav_contact_pane_g2_ParamLimits

0xd6d4,	// (0x00088e17) cell_myfav_contact_pane_g2

0xd6e0,	// (0x00088e23) cell_myfav_contact_pane_g3_ParamLimits

0xd6e0,	// (0x00088e23) cell_myfav_contact_pane_g3

0xce85,	// (0x000885c8) cell_myfav_contact_pane_g4_ParamLimits

0xce85,	// (0x000885c8) cell_myfav_contact_pane_g4

0xd6ed,	// (0x00088e30) cell_myfav_contact_pane_g5_ParamLimits

0xd6ed,	// (0x00088e30) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0008b0a2) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0008b0a2) cell_myfav_contact_pane_g

0x76c4,	// (0x00082e07) main_myfav_hc_pane_g3_ParamLimits

0x76c4,	// (0x00082e07) main_myfav_hc_pane_g3

0x2072,	// (0x0007d7b5) popup_adpt_find_window

0x771d,	// (0x00082e60) afind_page_pane_ParamLimits

0x771d,	// (0x00082e60) afind_page_pane

0x772a,	// (0x00082e6d) aid_size_cell_afind_ParamLimits

0x772a,	// (0x00082e6d) aid_size_cell_afind

0x7744,	// (0x00082e87) bg_popup_sub_pane_cp09_ParamLimits

0x7744,	// (0x00082e87) bg_popup_sub_pane_cp09

0x7751,	// (0x00082e94) find_pane_cp01_ParamLimits

0x7751,	// (0x00082e94) find_pane_cp01

0xd6f9,	// (0x00088e3c) grid_afind_control_pane_ParamLimits

0xd6f9,	// (0x00088e3c) grid_afind_control_pane

0x775e,	// (0x00082ea1) grid_afind_pane_ParamLimits

0x775e,	// (0x00082ea1) grid_afind_pane

0x7778,	// (0x00082ebb) cell_afind_pane_ParamLimits

0x7778,	// (0x00082ebb) cell_afind_pane

0xcbb4,	// (0x000882f7) afind_page_pane_g1

0x77c0,	// (0x00082f03) afind_page_pane_g2

0x77c9,	// (0x00082f0c) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0008b0ad) afind_page_pane_g

0x77d2,	// (0x00082f15) afind_page_pane_t1

0xd70d,	// (0x00088e50) cell_afind_grid_control_pane_ParamLimits

0xd70d,	// (0x00088e50) cell_afind_grid_control_pane

0xd4e7,	// (0x00088c2a) bg_button_pane_cp69_ParamLimits

0xd4e7,	// (0x00088c2a) bg_button_pane_cp69

0x77f2,	// (0x00082f35) cell_afind_pane_g1_ParamLimits

0x77f2,	// (0x00082f35) cell_afind_pane_g1

0x77ff,	// (0x00082f42) cell_afind_pane_t1_ParamLimits

0x77ff,	// (0x00082f42) cell_afind_pane_t1

0xa950,	// (0x00086093) bg_button_pane_cp72

0xd71c,	// (0x00088e5f) cell_afind_grid_control_pane_g1

0x4db6,	// (0x000804f9) aid_image_placing_area_ParamLimits

0x4db6,	// (0x000804f9) aid_image_placing_area

0xd1b5,	// (0x000888f8) field_vitu_entry_pane_g1_ParamLimits

0xd1b5,	// (0x000888f8) field_vitu_entry_pane_g1

0xd1c1,	// (0x00088904) field_vitu_entry_pane_g2_ParamLimits

0xd1c1,	// (0x00088904) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0008af5e) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0008af5e) field_vitu_entry_pane_g

0x6967,	// (0x000820aa) cell_vitu_itu_pane_g1_ParamLimits

0x69b7,	// (0x000820fa) cell_vitu_itu_pane_t3_ParamLimits

0x69b7,	// (0x000820fa) cell_vitu_itu_pane_t3

0xd497,	// (0x00088bda) mp4_progress_pane_t1_ParamLimits

0xd4b0,	// (0x00088bf3) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0008aff3) mp4_progress_pane_t_ParamLimits

0xd4c9,	// (0x00088c0c) mup_progress_pane_cp04_ParamLimits

0x7707,	// (0x00082e4a) main_myfav_hc_pane_t5_ParamLimits

0x7707,	// (0x00082e4a) main_myfav_hc_pane_t5

0x0cb2,	// (0x0007c3f5) aid_zoom_text_primary

0x2072,	// (0x0007d7b5) popup_adpt_find_window_ParamLimits

0xaa46,	// (0x00086189) main_cam_set_pane

0x7190,	// (0x000828d3) cam4_zoom_pane_ParamLimits

0x7190,	// (0x000828d3) cam4_zoom_pane

0x7811,	// (0x00082f54) main_cam_set_pane_g1_ParamLimits

0x7811,	// (0x00082f54) main_cam_set_pane_g1

0x781f,	// (0x00082f62) main_cam_set_pane_g2_ParamLimits

0x781f,	// (0x00082f62) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0008b0b4) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0008b0b4) main_cam_set_pane_g

0x782b,	// (0x00082f6e) main_cam_set_pane_t1_ParamLimits

0x782b,	// (0x00082f6e) main_cam_set_pane_t1

0x7847,	// (0x00082f8a) main_cset_listscroll_pane_ParamLimits

0x7847,	// (0x00082f8a) main_cset_listscroll_pane

0x7872,	// (0x00082fb5) main_cset_slider_pane_ParamLimits

0x7872,	// (0x00082fb5) main_cset_slider_pane

0xd72d,	// (0x00088e70) main_cset_list_pane_ParamLimits

0xd72d,	// (0x00088e70) main_cset_list_pane

0xd73d,	// (0x00088e80) scroll_pane_cp028

0x7891,	// (0x00082fd4) aid_area_touch_slider

0x78ad,	// (0x00082ff0) cset_slider_pane

0x78d7,	// (0x0008301a) main_cset_slider_pane_g1

0x78ec,	// (0x0008302f) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0008b0b9) main_cset_slider_pane_g

0xd776,	// (0x00088eb9) main_cset_slider_pane_t1

0x79b2,	// (0x000830f5) main_cset_slider_pane_t2

0x79cc,	// (0x0008310f) main_cset_slider_pane_t3

0x79e6,	// (0x00083129) main_cset_slider_pane_t4

0x7a04,	// (0x00083147) main_cset_slider_pane_t5

0x7a22,	// (0x00083165) main_cset_slider_pane_t6

0x7a39,	// (0x0008317c) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0008b0de) main_cset_slider_pane_t

0x7b47,	// (0x0008328a) cset_list_set_pane_ParamLimits

0x7b47,	// (0x0008328a) cset_list_set_pane

0x7b63,	// (0x000832a6) aid_position_infowindow_above

0x7b6b,	// (0x000832ae) aid_position_infowindow_below

0x7b73,	// (0x000832b6) cset_list_set_pane_g1_ParamLimits

0x7b73,	// (0x000832b6) cset_list_set_pane_g1

0x10f8,	// (0x0007c83b) cset_list_set_pane_g3_ParamLimits

0x10f8,	// (0x0007c83b) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0008b0fd) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0008b0fd) cset_list_set_pane_g

0x1107,	// (0x0007c84a) cset_list_set_pane_t1_ParamLimits

0x1107,	// (0x0007c84a) cset_list_set_pane_t1

0xaa46,	// (0x00086189) list_highlight_pane_cp021_ParamLimits

0xaa46,	// (0x00086189) list_highlight_pane_cp021

0xb4d5,	// (0x00086c18) cset_slider_pane_g1

0xb4e7,	// (0x00086c2a) cset_slider_pane_g2

0xb4de,	// (0x00086c21) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0008b102) cset_slider_pane_g

0x7b7f,	// (0x000832c2) aid_area_touch_cam4_zoom

0x7b87,	// (0x000832ca) cam4_zoom_cont_pane

0x7b8f,	// (0x000832d2) cam4_zoom_pane_g1

0x7b97,	// (0x000832da) cam4_zoom_pane_g2

0x7b9f,	// (0x000832e2) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0008b109) cam4_zoom_pane_g

0xdf9a,	// (0x000896dd) cam4_zoom_cont_pane_g1

0xdfa3,	// (0x000896e6) cam4_zoom_cont_pane_g2

0xdfac,	// (0x000896ef) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0008b110) cam4_zoom_cont_pane_g

0x707d,	// (0x000827c0) call4_image_pane_ParamLimits

0x707d,	// (0x000827c0) call4_image_pane

0xd4f3,	// (0x00088c36) call4_windows_conf_pane_ParamLimits

0xd532,	// (0x00088c75) popup_call4_audio_in_window_ParamLimits

0xd532,	// (0x00088c75) popup_call4_audio_in_window

0x9f8b,	// (0x000856ce) bg_popup_call2_act_pane_cp02

0xd5a8,	// (0x00088ceb) call4_list_conf_pane

0xcbb4,	// (0x000882f7) call4_image_pane_g1

0xcbb4,	// (0x000882f7) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0008ae1f) call4_image_pane_g

0xd816,	// (0x00088f59) list_single_graphic_popup_conf4_pane_ParamLimits

0xd816,	// (0x00088f59) list_single_graphic_popup_conf4_pane

0x9f8b,	// (0x000856ce) list_highlight_pane_cp022

0xd829,	// (0x00088f6c) list_single_graphic_popup_conf4_pane_g1

0xb0b4,	// (0x000867f7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0008b117) list_single_graphic_popup_conf4_pane_g

0xd831,	// (0x00088f74) list_single_graphic_popup_conf4_pane_t1

0x313c,	// (0x0007e87f) popup_vtel_slider_window_ParamLimits

0x313c,	// (0x0007e87f) popup_vtel_slider_window

0xd4d5,	// (0x00088c18) dialer2_ne_pane_t2_ParamLimits

0xd4d5,	// (0x00088c18) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0008aff8) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0008aff8) dialer2_ne_pane_t

0xaa46,	// (0x00086189) bg_popup_sub_pane_cp010_ParamLimits

0xaa46,	// (0x00086189) bg_popup_sub_pane_cp010

0x7ba7,	// (0x000832ea) popup_vtel_slider_window_g1_ParamLimits

0x7ba7,	// (0x000832ea) popup_vtel_slider_window_g1

0x7bb3,	// (0x000832f6) popup_vtel_slider_window_g2_ParamLimits

0x7bb3,	// (0x000832f6) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0008b11c) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0008b11c) popup_vtel_slider_window_g

0x7bfb,	// (0x0008333e) vtel_slider_pane_ParamLimits

0x7bfb,	// (0x0008333e) vtel_slider_pane

0x7c0a,	// (0x0008334d) vtel_slider_pane_g1_ParamLimits

0x7c0a,	// (0x0008334d) vtel_slider_pane_g1

0x7c17,	// (0x0008335a) vtel_slider_pane_g2_ParamLimits

0x7c17,	// (0x0008335a) vtel_slider_pane_g2

0x7c24,	// (0x00083367) vtel_slider_pane_g3_ParamLimits

0x7c24,	// (0x00083367) vtel_slider_pane_g3

0x7c0a,	// (0x0008334d) vtel_slider_pane_g4_ParamLimits

0x7c0a,	// (0x0008334d) vtel_slider_pane_g4

0x7c31,	// (0x00083374) vtel_slider_pane_g5_ParamLimits

0x7c31,	// (0x00083374) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0008b125) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0008b125) vtel_slider_pane_g

0xaa46,	// (0x00086189) main_gallery2_pane

0x73e0,	// (0x00082b23) aid_size_row_itut2_dropdow_list_ParamLimits

0x73e0,	// (0x00082b23) aid_size_row_itut2_dropdow_list

0x7440,	// (0x00082b83) grid_vitu2_function_top_pane_ParamLimits

0x7440,	// (0x00082b83) grid_vitu2_function_top_pane

0x7496,	// (0x00082bd9) popup_vitu2_dropdown_list_window_ParamLimits

0x7496,	// (0x00082bd9) popup_vitu2_dropdown_list_window

0x74b6,	// (0x00082bf9) popup_vitu2_match_list_window

0x7c3e,	// (0x00083381) cell_vitu2_function_top_pane_ParamLimits

0x7c3e,	// (0x00083381) cell_vitu2_function_top_pane

0x7c5e,	// (0x000833a1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7c5e,	// (0x000833a1) cell_vitu2_function_top_pane_cp01

0x7c7c,	// (0x000833bf) cell_vitu2_function_top_wide_pane_ParamLimits

0x7c7c,	// (0x000833bf) cell_vitu2_function_top_wide_pane

0xaa46,	// (0x00086189) bg_button_pane_cp012

0x7c9a,	// (0x000833dd) cell_vitu2_function_top_pane_g1

0x7cae,	// (0x000833f1) bg_button_pane_cp013_ParamLimits

0x7cae,	// (0x000833f1) bg_button_pane_cp013

0x7cca,	// (0x0008340d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7cca,	// (0x0008340d) cell_vitu2_function_top_wide_pane_g1

0xe39a,	// (0x00089add) bg_popup_sub_pane_cp20

0x7ce2,	// (0x00083425) list_vitu2_match_list_pane

0xd623,	// (0x00088d66) bg_popup_sub_pane_cp20_g1

0xd62b,	// (0x00088d6e) bg_popup_sub_pane_cp20_g2

0xab6e,	// (0x000862b1) bg_popup_sub_pane_cp20_g3

0xd633,	// (0x00088d76) bg_popup_sub_pane_cp20_g4

0xab4e,	// (0x00086291) bg_popup_sub_pane_cp20_g5

0xd847,	// (0x00088f8a) bg_popup_sub_pane_cp20_g6

0xd643,	// (0x00088d86) bg_popup_sub_pane_cp20_g7

0xd64b,	// (0x00088d8e) bg_popup_sub_pane_cp20_g8

0xd653,	// (0x00088d96) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0008b130) bg_popup_sub_pane_cp20_g

0x7cfa,	// (0x0008343d) list_vitu2_match_list_item_pane_ParamLimits

0x7cfa,	// (0x0008343d) list_vitu2_match_list_item_pane

0x7d0c,	// (0x0008344f) list_vitu2_match_list_item_pane_t1

0x9f8b,	// (0x000856ce) bg_popup_sub_pane_cp21

0xafb8,	// (0x000866fb) grid_vitu2_dropdown_list_pane

0x7d26,	// (0x00083469) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7d26,	// (0x00083469) cell_vitu2_dropdown_list_char_pane

0x7d47,	// (0x0008348a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7d47,	// (0x0008348a) cell_vitu2_dropdown_list_ctrl_pane

0xd84f,	// (0x00088f92) cell_vitu2_dropdown_list_char_pane_g1

0xd858,	// (0x00088f9b) cell_vitu2_dropdown_list_char_pane_g2

0xd861,	// (0x00088fa4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0008b14d) cell_vitu2_dropdown_list_char_pane_g

0x7d73,	// (0x000834b6) cell_vitu2_dropdown_list_char_pane_t1

0x7d81,	// (0x000834c4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7d81,	// (0x000834c4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7d91,	// (0x000834d4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7d91,	// (0x000834d4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7da2,	// (0x000834e5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7da2,	// (0x000834e5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7db2,	// (0x000834f5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7db2,	// (0x000834f5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce20,	// (0x00088563) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce20,	// (0x00088563) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0008b154) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0008b154) cell_vitu2_dropdown_list_ctrl_pane_g

0x7dce,	// (0x00083511) aid_size_cell_gallery2_ParamLimits

0x7dce,	// (0x00083511) aid_size_cell_gallery2

0x7de8,	// (0x0008352b) grid_gallery2_pane_ParamLimits

0x7de8,	// (0x0008352b) grid_gallery2_pane

0x67e8,	// (0x00081f2b) scroll_pane_cp029_ParamLimits

0x67e8,	// (0x00081f2b) scroll_pane_cp029

0x7dff,	// (0x00083542) cell_gallery2_pane_ParamLimits

0x7dff,	// (0x00083542) cell_gallery2_pane

0xd86a,	// (0x00088fad) cell_gallery2_pane_g2

0x7e54,	// (0x00083597) cell_gallery2_pane_g3

0xd872,	// (0x00088fb5) cell_gallery2_pane_g4

0xd87a,	// (0x00088fbd) cell_gallery2_pane_g5

0xb39f,	// (0x00086ae2) grid_highlight_pane_cp10

0x74b6,	// (0x00082bf9) popup_vitu2_match_list_window_ParamLimits

0x74c8,	// (0x00082c0b) popup_vitu2_query_window_ParamLimits

0x74c8,	// (0x00082c0b) popup_vitu2_query_window

0x9f8b,	// (0x000856ce) bg_vitu2_candi_button_pane

0xd84f,	// (0x00088f92) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd858,	// (0x00088f9b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd861,	// (0x00088fa4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1162,	// (0x0007c8a5) bg_button_pane_cp015

0x7e5c,	// (0x0008359f) bg_button_pane_cp016

0x7e6f,	// (0x000835b2) bg_button_pane_cp017

0xc7aa,	// (0x00087eed) bg_popup_sub_pane_cp22

0xd882,	// (0x00088fc5) popup_vitu2_query_window_g1

0x7e93,	// (0x000835d6) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0008b15f) popup_vitu2_query_window_g

0x1195,	// (0x0007c8d8) popup_vitu2_query_window_t1_ParamLimits

0x1195,	// (0x0007c8d8) popup_vitu2_query_window_t1

0x11c8,	// (0x0007c90b) popup_vitu2_query_window_t2_ParamLimits

0x11c8,	// (0x0007c90b) popup_vitu2_query_window_t2

0x11da,	// (0x0007c91d) popup_vitu2_query_window_t3_ParamLimits

0x11da,	// (0x0007c91d) popup_vitu2_query_window_t3

0x7eb0,	// (0x000835f3) popup_vitu2_query_window_t4_ParamLimits

0x7eb0,	// (0x000835f3) popup_vitu2_query_window_t4

0x7ed1,	// (0x00083614) popup_vitu2_query_window_t5_ParamLimits

0x7ed1,	// (0x00083614) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0008b166) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0008b166) popup_vitu2_query_window_t

0xd725,	// (0x00088e68) main_cset_text_pane

0x7891,	// (0x00082fd4) aid_area_touch_slider_ParamLimits

0x78ad,	// (0x00082ff0) cset_slider_pane_ParamLimits

0x78d7,	// (0x0008301a) main_cset_slider_pane_g1_ParamLimits

0x78ec,	// (0x0008302f) main_cset_slider_pane_g2_ParamLimits

0xd746,	// (0x00088e89) main_cset_slider_pane_g3_ParamLimits

0xd746,	// (0x00088e89) main_cset_slider_pane_g3

0x7901,	// (0x00083044) main_cset_slider_pane_g4_ParamLimits

0x7901,	// (0x00083044) main_cset_slider_pane_g4

0x7910,	// (0x00083053) main_cset_slider_pane_g5_ParamLimits

0x7910,	// (0x00083053) main_cset_slider_pane_g5

0x791e,	// (0x00083061) main_cset_slider_pane_g6_ParamLimits

0x791e,	// (0x00083061) main_cset_slider_pane_g6

0xf976,	// (0x0008b0b9) main_cset_slider_pane_g_ParamLimits

0xd776,	// (0x00088eb9) main_cset_slider_pane_t1_ParamLimits

0x79b2,	// (0x000830f5) main_cset_slider_pane_t2_ParamLimits

0x79cc,	// (0x0008310f) main_cset_slider_pane_t3_ParamLimits

0x79e6,	// (0x00083129) main_cset_slider_pane_t4_ParamLimits

0x7a04,	// (0x00083147) main_cset_slider_pane_t5_ParamLimits

0x7a22,	// (0x00083165) main_cset_slider_pane_t6_ParamLimits

0x7a39,	// (0x0008317c) main_cset_slider_pane_t7_ParamLimits

0x7a67,	// (0x000831aa) main_cset_slider_pane_t8_ParamLimits

0x7a67,	// (0x000831aa) main_cset_slider_pane_t8

0x7a8f,	// (0x000831d2) main_cset_slider_pane_t9_ParamLimits

0x7a8f,	// (0x000831d2) main_cset_slider_pane_t9

0x7ab7,	// (0x000831fa) main_cset_slider_pane_t10_ParamLimits

0x7ab7,	// (0x000831fa) main_cset_slider_pane_t10

0x7adf,	// (0x00083222) main_cset_slider_pane_t11_ParamLimits

0x7adf,	// (0x00083222) main_cset_slider_pane_t11

0x7b09,	// (0x0008324c) main_cset_slider_pane_t12_ParamLimits

0x7b09,	// (0x0008324c) main_cset_slider_pane_t12

0x7b28,	// (0x0008326b) main_cset_slider_pane_t13_ParamLimits

0x7b28,	// (0x0008326b) main_cset_slider_pane_t13

0xf99b,	// (0x0008b0de) main_cset_slider_pane_t_ParamLimits

0x9f8b,	// (0x000856ce) bg_popup_sub_pane_cp011

0xd88e,	// (0x00088fd1) main_cset_text_pane_g1

0xd896,	// (0x00088fd9) main_cset_text_pane_t1

0xd8a4,	// (0x00088fe7) main_cset_text_pane_t2

0xd8b2,	// (0x00088ff5) main_cset_text_pane_t3

0xd8c0,	// (0x00089003) main_cset_text_pane_t4

0xd8ce,	// (0x00089011) main_cset_text_pane_t5

0xd8dc,	// (0x0008901f) main_cset_text_pane_t6

0xd8ea,	// (0x0008902d) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0008b175) main_cset_text_pane_t

0x9f8b,	// (0x000856ce) main_cam4_burst_pane

0x9f8b,	// (0x000856ce) main_cam5_pane

0x77e0,	// (0x00082f23) bg_button_pane_cp019

0x77e9,	// (0x00082f2c) bg_button_pane_cp020

0xd752,	// (0x00088e95) main_cset_slider_pane_g7_ParamLimits

0xd752,	// (0x00088e95) main_cset_slider_pane_g7

0xd75e,	// (0x00088ea1) main_cset_slider_pane_g8_ParamLimits

0xd75e,	// (0x00088ea1) main_cset_slider_pane_g8

0x7932,	// (0x00083075) main_cset_slider_pane_g9_ParamLimits

0x7932,	// (0x00083075) main_cset_slider_pane_g9

0x793e,	// (0x00083081) main_cset_slider_pane_g10_ParamLimits

0x793e,	// (0x00083081) main_cset_slider_pane_g10

0x794a,	// (0x0008308d) main_cset_slider_pane_g11_ParamLimits

0x794a,	// (0x0008308d) main_cset_slider_pane_g11

0x7956,	// (0x00083099) main_cset_slider_pane_g12_ParamLimits

0x7956,	// (0x00083099) main_cset_slider_pane_g12

0x7962,	// (0x000830a5) main_cset_slider_pane_g13_ParamLimits

0x7962,	// (0x000830a5) main_cset_slider_pane_g13

0x7970,	// (0x000830b3) main_cset_slider_pane_g14_ParamLimits

0x7970,	// (0x000830b3) main_cset_slider_pane_g14

0x797e,	// (0x000830c1) main_cset_slider_pane_g15_ParamLimits

0x797e,	// (0x000830c1) main_cset_slider_pane_g15

0xd7a4,	// (0x00088ee7) main_cset_slider_pane_t14_ParamLimits

0xd7a4,	// (0x00088ee7) main_cset_slider_pane_t14

0xd7dd,	// (0x00088f20) main_cset_slider_pane_t15_ParamLimits

0xd7dd,	// (0x00088f20) main_cset_slider_pane_t15

0x7f48,	// (0x0008368b) aid_cam4_burst_size_cell_ParamLimits

0x7f48,	// (0x0008368b) aid_cam4_burst_size_cell

0x7f64,	// (0x000836a7) grid_cam4_burst_pane_ParamLimits

0x7f64,	// (0x000836a7) grid_cam4_burst_pane

0x7f94,	// (0x000836d7) linegrid_cam4_burst_pane_ParamLimits

0x7f94,	// (0x000836d7) linegrid_cam4_burst_pane

0x7fb6,	// (0x000836f9) scroll_pane_cp30_ParamLimits

0x7fb6,	// (0x000836f9) scroll_pane_cp30

0x7fc2,	// (0x00083705) cell_cam4_burst_pane_ParamLimits

0x7fc2,	// (0x00083705) cell_cam4_burst_pane

0xd8f8,	// (0x0008903b) linegrid_cam4_burst_pane_g1_ParamLimits

0xd8f8,	// (0x0008903b) linegrid_cam4_burst_pane_g1

0x7ffe,	// (0x00083741) linegrid_cam4_burst_pane_g2_ParamLimits

0x7ffe,	// (0x00083741) linegrid_cam4_burst_pane_g2

0xd905,	// (0x00089048) linegrid_cam4_burst_pane_g3_ParamLimits

0xd905,	// (0x00089048) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0008b184) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0008b184) linegrid_cam4_burst_pane_g

0x800f,	// (0x00083752) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x800f,	// (0x00083752) linegrid_cam4_burst_pane_g3_copy1

0xd912,	// (0x00089055) linegrid_cam4_burst_pane_g4_ParamLimits

0xd912,	// (0x00089055) linegrid_cam4_burst_pane_g4

0x8029,	// (0x0008376c) linegrid_cam4_burst_pane_g5_ParamLimits

0x8029,	// (0x0008376c) linegrid_cam4_burst_pane_g5

0x803a,	// (0x0008377d) linegrid_cam4_burst_pane_g6_ParamLimits

0x803a,	// (0x0008377d) linegrid_cam4_burst_pane_g6

0xd91f,	// (0x00089062) linegrid_cam4_burst_pane_g7_ParamLimits

0xd91f,	// (0x00089062) linegrid_cam4_burst_pane_g7

0x804b,	// (0x0008378e) cell_cam4_burst_pane_g1

0xd938,	// (0x0008907b) main_cam5_pane_t1_ParamLimits

0xd938,	// (0x0008907b) main_cam5_pane_t1

0xd94a,	// (0x0008908d) main_cam5_pane_t2_ParamLimits

0xd94a,	// (0x0008908d) main_cam5_pane_t2

0xd95c,	// (0x0008909f) main_cam5_pane_t3_ParamLimits

0xd95c,	// (0x0008909f) main_cam5_pane_t3

0xd99e,	// (0x000890e1) main_cam5_pane_t4_ParamLimits

0xd99e,	// (0x000890e1) main_cam5_pane_t4

0xd9b6,	// (0x000890f9) main_cam5_pane_t5_ParamLimits

0xd9b6,	// (0x000890f9) main_cam5_pane_t5

0xd9ca,	// (0x0008910d) main_cam5_pane_t6_ParamLimits

0xd9ca,	// (0x0008910d) main_cam5_pane_t6

0xd9de,	// (0x00089121) main_cam5_pane_t7_ParamLimits

0xd9de,	// (0x00089121) main_cam5_pane_t7

0xd9f0,	// (0x00089133) main_cam5_pane_t8_ParamLimits

0xd9f0,	// (0x00089133) main_cam5_pane_t8

0xda0c,	// (0x0008914f) main_cam5_pane_t9_ParamLimits

0xda0c,	// (0x0008914f) main_cam5_pane_t9

0xda1e,	// (0x00089161) main_cam5_pane_t10_ParamLimits

0xda1e,	// (0x00089161) main_cam5_pane_t10

0xda30,	// (0x00089173) main_cam5_pane_t11_ParamLimits

0xda30,	// (0x00089173) main_cam5_pane_t11

0xda42,	// (0x00089185) main_cam5_pane_t12_ParamLimits

0xda42,	// (0x00089185) main_cam5_pane_t12

0xda57,	// (0x0008919a) main_cam5_pane_t13_ParamLimits

0xda57,	// (0x0008919a) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0008b190) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0008b190) main_cam5_pane_t

0x2128,	// (0x0007d86b) popup_scut_keymap_window_ParamLimits

0x2128,	// (0x0007d86b) popup_scut_keymap_window

0x8060,	// (0x000837a3) aid_size_cell_brow_shortcut

0xb39f,	// (0x00086ae2) bg_popup_window_pane_cp010

0x806c,	// (0x000837af) grid_scut_pane

0x8078,	// (0x000837bb) cell_scut_pane_ParamLimits

0x8078,	// (0x000837bb) cell_scut_pane

0x808f,	// (0x000837d2) cell_scut_pane_g1

0xda74,	// (0x000891b7) cell_scut_pane_t1

0xda83,	// (0x000891c6) cell_scut_pane_t2

0x8098,	// (0x000837db) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0008b1ab) cell_scut_pane_t

0x5fc8,	// (0x0008170b) main_mup3_pane_g8_ParamLimits

0x5fc8,	// (0x0008170b) main_mup3_pane_g8

0x73ee,	// (0x00082b31) area_vitu2_query_pane_ParamLimits

0x73ee,	// (0x00082b31) area_vitu2_query_pane

0x1174,	// (0x0007c8b7) input_focus_pane_cp08

0xda92,	// (0x000891d5) area_vitu2_query_pane_g1

0x1202,	// (0x0007c945) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0008b1b2) area_vitu2_query_pane_g

0x80a6,	// (0x000837e9) area_vitu2_query_pane_t1_ParamLimits

0x80a6,	// (0x000837e9) area_vitu2_query_pane_t1

0x80ba,	// (0x000837fd) area_vitu2_query_pane_t2_ParamLimits

0x80ba,	// (0x000837fd) area_vitu2_query_pane_t2

0x1213,	// (0x0007c956) area_vitu2_query_pane_t3_ParamLimits

0x1213,	// (0x0007c956) area_vitu2_query_pane_t3

0x123b,	// (0x0007c97e) area_vitu2_query_pane_t4_ParamLimits

0x123b,	// (0x0007c97e) area_vitu2_query_pane_t4

0x1263,	// (0x0007c9a6) area_vitu2_query_pane_t5_ParamLimits

0x1263,	// (0x0007c9a6) area_vitu2_query_pane_t5

0x128b,	// (0x0007c9ce) area_vitu2_query_pane_t6_ParamLimits

0x128b,	// (0x0007c9ce) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0008b1b7) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0008b1b7) area_vitu2_query_pane_t

0x80ce,	// (0x00083811) bg_button_pane_cp018

0x80dc,	// (0x0008381f) bg_button_pane_cp021

0x12d7,	// (0x0007ca1a) bg_button_pane_cp022

0x12e8,	// (0x0007ca2b) input_focus_pane_cp09

0xb1d8,	// (0x0008691b) aid_size_touch_mv_arrow_left

0xb203,	// (0x00086946) aid_size_touch_mv_arrow_right

0x7996,	// (0x000830d9) main_cset_slider_pane_g16_ParamLimits

0x7996,	// (0x000830d9) main_cset_slider_pane_g16

0x79a4,	// (0x000830e7) main_cset_slider_pane_g17_ParamLimits

0x79a4,	// (0x000830e7) main_cset_slider_pane_g17

0x804b,	// (0x0008378e) cell_cam4_burst_pane_g1_ParamLimits

0x9f8b,	// (0x000856ce) compa_mode_pane

0x7bbf,	// (0x00083302) popup_vtel_slider_window_g3_ParamLimits

0x7bbf,	// (0x00083302) popup_vtel_slider_window_g3

0x7bd3,	// (0x00083316) popup_vtel_slider_window_g4_ParamLimits

0x7bd3,	// (0x00083316) popup_vtel_slider_window_g4

0x7be7,	// (0x0008332a) popup_vtel_slider_window_t1_ParamLimits

0x7be7,	// (0x0008332a) popup_vtel_slider_window_t1

0x9f8b,	// (0x000856ce) main_cl_pane

0x52c8,	// (0x00080a0b) popup_imed_adjust2_window_ParamLimits

0xc7aa,	// (0x00087eed) bg_tb_trans_pane_cp05_ParamLimits

0xd0e1,	// (0x00088824) popup_imed_adjust2_window_g1_ParamLimits

0xd0f0,	// (0x00088833) popup_imed_adjust2_window_g2_ParamLimits

0xd0f0,	// (0x00088833) popup_imed_adjust2_window_g2

0xd0fc,	// (0x0008883f) popup_imed_adjust2_window_g3_ParamLimits

0xd0fc,	// (0x0008883f) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0008af22) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0008af22) popup_imed_adjust2_window_g

0xd108,	// (0x0008884b) popup_imed_adjust2_window_t1_ParamLimits

0xd120,	// (0x00088863) slider_imed_adjust_pane_ParamLimits

0xd134,	// (0x00088877) slider_imed_adjust_pane_g1_ParamLimits

0xd144,	// (0x00088887) slider_imed_adjust_pane_g2_ParamLimits

0xd154,	// (0x00088897) slider_imed_adjust_pane_g3_ParamLimits

0xd165,	// (0x000888a8) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0008af29) slider_imed_adjust_pane_g_ParamLimits

0x7139,	// (0x0008287c) aid_touch_area_cam4_ParamLimits

0x7139,	// (0x0008287c) aid_touch_area_cam4

0x7149,	// (0x0008288c) battery_pane_cp01

0x71d0,	// (0x00082913) main_camera4_pane_g6_ParamLimits

0x71d0,	// (0x00082913) main_camera4_pane_g6

0x71ee,	// (0x00082931) main_camera4_pane_t2_ParamLimits

0x71ee,	// (0x00082931) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0008b02c) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0008b02c) main_camera4_pane_t

0x7275,	// (0x000829b8) aid_touch_area_vid4_ParamLimits

0x7275,	// (0x000829b8) aid_touch_area_vid4

0x72b5,	// (0x000829f8) main_video4_pane_g5_ParamLimits

0x72b5,	// (0x000829f8) main_video4_pane_g5

0x72d9,	// (0x00082a1c) vid4_progress_pane_ParamLimits

0x72d9,	// (0x00082a1c) vid4_progress_pane

0xd76a,	// (0x00088ead) main_cset_slider_pane_g18_ParamLimits

0xd76a,	// (0x00088ead) main_cset_slider_pane_g18

0xd92c,	// (0x0008906f) cell_cam4_burst_pane_g2_ParamLimits

0xd92c,	// (0x0008906f) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0008b18b) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0008b18b) cell_cam4_burst_pane_g

0x80e8,	// (0x0008382b) bg_cl_pane_ParamLimits

0x80e8,	// (0x0008382b) bg_cl_pane

0x80f4,	// (0x00083837) cl_header_pane_ParamLimits

0x80f4,	// (0x00083837) cl_header_pane

0x8100,	// (0x00083843) cl_listscroll_pane_ParamLimits

0x8100,	// (0x00083843) cl_listscroll_pane

0xda9e,	// (0x000891e1) bg_cl_pane_g1

0xdaa6,	// (0x000891e9) bg_cl_pane_g2

0xdaae,	// (0x000891f1) bg_cl_pane_g3

0xdab6,	// (0x000891f9) bg_cl_pane_g4

0xdabe,	// (0x00089201) bg_cl_pane_g5

0xdac6,	// (0x00089209) bg_cl_pane_g6

0xdace,	// (0x00089211) bg_cl_pane_g7

0xdad6,	// (0x00089219) bg_cl_pane_g8

0xdade,	// (0x00089221) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0008b1c6) bg_cl_pane_g

0x810c,	// (0x0008384f) aid_height_cl_leading_ParamLimits

0x810c,	// (0x0008384f) aid_height_cl_leading

0x8118,	// (0x0008385b) aid_height_cl_text_ParamLimits

0x8118,	// (0x0008385b) aid_height_cl_text

0xe39a,	// (0x00089add) bg_cl_header_pane_ParamLimits

0xe39a,	// (0x00089add) bg_cl_header_pane

0x8130,	// (0x00083873) cl_header_pane_g1_ParamLimits

0x8130,	// (0x00083873) cl_header_pane_g1

0x813d,	// (0x00083880) cl_header_pane_t1_ParamLimits

0x813d,	// (0x00083880) cl_header_pane_t1

0xdae6,	// (0x00089229) cl_list_pane

0xd73d,	// (0x00088e80) hc_scroll_pane_cp01

0xab4e,	// (0x00086291) bg_cl_header_pane_g1

0xd623,	// (0x00088d66) bg_cl_header_pane_g2

0xab6e,	// (0x000862b1) bg_cl_header_pane_g3

0xd633,	// (0x00088d76) bg_cl_header_pane_g4

0xd62b,	// (0x00088d6e) bg_cl_header_pane_g5

0xd847,	// (0x00088f8a) bg_cl_header_pane_g6

0xd64b,	// (0x00088d8e) bg_cl_header_pane_g7

0xd653,	// (0x00088d96) bg_cl_header_pane_g8

0xd643,	// (0x00088d86) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0008b1d9) bg_cl_header_pane_g

0x814f,	// (0x00083892) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x814f,	// (0x00083892) hc_cl_list_double_graphic_heading_pane

0x8163,	// (0x000838a6) hc_cl_list_single_graphic_pane_ParamLimits

0x8163,	// (0x000838a6) hc_cl_list_single_graphic_pane

0x817d,	// (0x000838c0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x817d,	// (0x000838c0) hc_cl_list_single_graphic_pane_g1

0x8189,	// (0x000838cc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8189,	// (0x000838cc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0008b1ec) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0008b1ec) hc_cl_list_single_graphic_pane_g

0x819d,	// (0x000838e0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x819d,	// (0x000838e0) hc_cl_list_single_graphic_pane_t1

0x817d,	// (0x000838c0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x817d,	// (0x000838c0) hc_cl_list_double_graphic_heading_pane_g1

0x81b2,	// (0x000838f5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x81b2,	// (0x000838f5) hc_cl_list_double_graphic_heading_pane_g2

0x81c6,	// (0x00083909) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x81c6,	// (0x00083909) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0008b1f1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0008b1f1) hc_cl_list_double_graphic_heading_pane_g

0x81da,	// (0x0008391d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x81da,	// (0x0008391d) hc_cl_list_double_graphic_heading_pane_t1

0x81ef,	// (0x00083932) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x81ef,	// (0x00083932) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0008b1f8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0008b1f8) hc_cl_list_double_graphic_heading_pane_t

0x820c,	// (0x0008394f) vid4_progress_pane_g1

0x821c,	// (0x0008395f) vid4_progress_pane_g2

0x822c,	// (0x0008396f) vid4_progress_pane_g3

0x823e,	// (0x00083981) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0008b1fd) vid4_progress_pane_g

0x825c,	// (0x0008399f) vid4_progress_pane_t1

0x8272,	// (0x000839b5) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0008b208) vid4_progress_pane_t

0x829d,	// (0x000839e0) wait_bar_pane_cp07

0xc9a5,	// (0x000880e8) blid_firmament_pane_ParamLimits

0xc9e8,	// (0x0008812b) popup_blid_sat_info2_window_g1

0xca0c,	// (0x0008814f) popup_blid_sat_info2_window_t3

0xca1a,	// (0x0008815d) popup_blid_sat_info2_window_t4

0xca28,	// (0x0008816b) popup_blid_sat_info2_window_t5

0xca36,	// (0x00088179) popup_blid_sat_info2_window_t6

0xca46,	// (0x00088189) popup_blid_sat_info2_window_t7

0xca54,	// (0x00088197) popup_blid_sat_info2_window_t8

0xca62,	// (0x000881a5) popup_blid_sat_info2_window_t9

0xca70,	// (0x000881b3) popup_blid_sat_info2_window_t10

0xcb34,	// (0x00088277) aid_firma_cardinal_ParamLimits

0xcb48,	// (0x0008828b) blid_firmament_pane_t1_ParamLimits

0xcb5f,	// (0x000882a2) blid_firmament_pane_t2_ParamLimits

0xcb76,	// (0x000882b9) blid_firmament_pane_t3_ParamLimits

0xcb8d,	// (0x000882d0) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0008ae16) blid_firmament_pane_t_ParamLimits

0xcba4,	// (0x000882e7) blid_sat_info_pane_ParamLimits

0xaa46,	// (0x00086189) main_cam_set_pane_ParamLimits

0x6781,	// (0x00081ec4) aid_size_cell_colour_35_ParamLimits

0x679b,	// (0x00081ede) aid_size_cell_colour_112_ParamLimits

0x67b2,	// (0x00081ef5) aid_size_cell_effect_ParamLimits

0xaa46,	// (0x00086189) bg_tb_trans_pane_cp02_ParamLimits

0xae75,	// (0x000865b8) heading_imed_pane_ParamLimits

0x67cc,	// (0x00081f0f) listscroll_imed_pane_ParamLimits

0xbdd0,	// (0x00087513) popup_call2_audio_first_window_g5_ParamLimits

0xbdd0,	// (0x00087513) popup_call2_audio_first_window_g5

0x6ef6,	// (0x00082639) aid_size_touch_image3_arrow_left_ParamLimits

0x6ef6,	// (0x00082639) aid_size_touch_image3_arrow_left

0x6f0c,	// (0x0008264f) aid_size_touch_image3_arrow_right_ParamLimits

0x6f0c,	// (0x0008264f) aid_size_touch_image3_arrow_right

0x8287,	// (0x000839ca) vid4_progress_pane_t3

0x6a80,	// (0x000821c3) main_hwr_training_symbol_option_pane_ParamLimits

0x6a80,	// (0x000821c3) main_hwr_training_symbol_option_pane

0xd3d7,	// (0x00088b1a) popup_hwr_training_preview_window_ParamLimits

0xd3d7,	// (0x00088b1a) popup_hwr_training_preview_window

0x6ae1,	// (0x00082224) hwr_training_navi_pane_g5_ParamLimits

0x6ae1,	// (0x00082224) hwr_training_navi_pane_g5

0xd611,	// (0x00088d54) popup_char_count_window

0xe39a,	// (0x00089add) bg_popup_sub_pane_cp20_ParamLimits

0x7ce2,	// (0x00083425) list_vitu2_match_list_pane_ParamLimits

0x7cee,	// (0x00083431) vitu2_page_scroll_pane_ParamLimits

0x7cee,	// (0x00083431) vitu2_page_scroll_pane

0xdaef,	// (0x00089232) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaef,	// (0x00089232) list_single_hwr_training_symbol_option_pane

0xdb02,	// (0x00089245) list_single_hwr_training_symbol_option_pane_g1

0xdb0a,	// (0x0008924d) list_single_hwr_training_symbol_option_pane_t1

0xdb18,	// (0x0008925b) bg_button_pane_cp023

0xdb21,	// (0x00089264) bg_button_pane_cp024

0x82e3,	// (0x00083a26) vitu2_page_scroll_pane_g1

0x82eb,	// (0x00083a2e) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0008b20f) vitu2_page_scroll_pane_g

0x82f3,	// (0x00083a36) vitu2_page_scroll_pane_t1

0xd191,	// (0x000888d4) popup_char_count_window_g1

0xdb54,	// (0x00089297) popup_char_count_window_g2

0xdb5d,	// (0x000892a0) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0008b214) popup_char_count_window_g

0xdb66,	// (0x000892a9) popup_char_count_window_t1

0x9f8b,	// (0x000856ce) main_vded2_pane

0xd0cd,	// (0x00088810) aid_size_cell_imed_line

0xd0d7,	// (0x0008881a) grid_imed_line_width_pane

0x7345,	// (0x00082a88) vid4_indicators_pane_g4

0xdb74,	// (0x000892b7) cell_imed_line_width_pane_ParamLimits

0xdb74,	// (0x000892b7) cell_imed_line_width_pane

0xdb88,	// (0x000892cb) cell_imed_line_width_pane_g1

0xd96e,	// (0x000890b1) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0008b21b) cell_imed_line_width_pane_g

0x8302,	// (0x00083a45) main_vded2_pane_g1_ParamLimits

0x8302,	// (0x00083a45) main_vded2_pane_g1

0x830f,	// (0x00083a52) main_vded2_pane_g2_ParamLimits

0x830f,	// (0x00083a52) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0008b220) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0008b220) main_vded2_pane_g

0x831d,	// (0x00083a60) vded2_slider_pane_ParamLimits

0x831d,	// (0x00083a60) vded2_slider_pane

0x832a,	// (0x00083a6d) aid_size_touch_vded2_end

0x8334,	// (0x00083a77) aid_size_touch_vded2_playhead

0xdba8,	// (0x000892eb) aid_size_touch_vded2_start

0xdbb0,	// (0x000892f3) vded2_slider_bg_pane

0xdbb9,	// (0x000892fc) vded2_slider_pane_g1

0xdbc2,	// (0x00089305) vded2_slider_pane_g2

0x833c,	// (0x00083a7f) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0008b225) vded2_slider_pane_g

0xdbca,	// (0x0008930d) vded2_slider_bg_pane_g1

0xdbd3,	// (0x00089316) vded2_slider_bg_pane_g2

0xdbdc,	// (0x0008931f) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0008b22c) vded2_slider_bg_pane_g

0x4b17,	// (0x0008025a) aid_postcard_touch_down_pane_ParamLimits

0x4b17,	// (0x0008025a) aid_postcard_touch_down_pane

0x4b27,	// (0x0008026a) aid_postcard_touch_up_pane_ParamLimits

0x4b27,	// (0x0008026a) aid_postcard_touch_up_pane

0x9f8b,	// (0x000856ce) main_blid2_pane

0x5257,	// (0x0008099a) popup_blid2_search_window

0x9f8b,	// (0x000856ce) blid2_gps_pane

0x9f8b,	// (0x000856ce) blid2_navig_pane

0x9f8b,	// (0x000856ce) blid2_search_pane

0x9f8b,	// (0x000856ce) blid2_tripm_pane

0x8345,	// (0x00083a88) blid2_search_pane_g1_ParamLimits

0x8345,	// (0x00083a88) blid2_search_pane_g1

0x8355,	// (0x00083a98) blid2_search_pane_t1_ParamLimits

0x8355,	// (0x00083a98) blid2_search_pane_t1

0x8367,	// (0x00083aaa) aid_size_cell_blid2_gps_ParamLimits

0x8367,	// (0x00083aaa) aid_size_cell_blid2_gps

0x8377,	// (0x00083aba) blid2_gps_pane_g1_ParamLimits

0x8377,	// (0x00083aba) blid2_gps_pane_g1

0x8383,	// (0x00083ac6) grid_blid2_satellite_pane_ParamLimits

0x8383,	// (0x00083ac6) grid_blid2_satellite_pane

0x8393,	// (0x00083ad6) blid2_navig_pane_g1_ParamLimits

0x8393,	// (0x00083ad6) blid2_navig_pane_g1

0x839f,	// (0x00083ae2) blid2_navig_pane_t1_ParamLimits

0x839f,	// (0x00083ae2) blid2_navig_pane_t1

0x83b1,	// (0x00083af4) blid2_navig_pane_t2_ParamLimits

0x83b1,	// (0x00083af4) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0008b233) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0008b233) blid2_navig_pane_t

0x83c3,	// (0x00083b06) blid2_navig_ring_pane_ParamLimits

0x83c3,	// (0x00083b06) blid2_navig_ring_pane

0x83d3,	// (0x00083b16) blid2_speed_pane_ParamLimits

0x83d3,	// (0x00083b16) blid2_speed_pane

0x83df,	// (0x00083b22) blid2_tripm_pane_g1_ParamLimits

0x83df,	// (0x00083b22) blid2_tripm_pane_g1

0x83ef,	// (0x00083b32) blid2_tripm_pane_g2_ParamLimits

0x83ef,	// (0x00083b32) blid2_tripm_pane_g2

0x83fb,	// (0x00083b3e) blid2_tripm_pane_g3_ParamLimits

0x83fb,	// (0x00083b3e) blid2_tripm_pane_g3

0x8407,	// (0x00083b4a) blid2_tripm_pane_g4_ParamLimits

0x8407,	// (0x00083b4a) blid2_tripm_pane_g4

0x8413,	// (0x00083b56) blid2_tripm_pane_g5_ParamLimits

0x8413,	// (0x00083b56) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0008b238) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0008b238) blid2_tripm_pane_g

0x842f,	// (0x00083b72) blid2_tripm_pane_t1_ParamLimits

0x842f,	// (0x00083b72) blid2_tripm_pane_t1

0x8443,	// (0x00083b86) blid2_tripm_pane_t2_ParamLimits

0x8443,	// (0x00083b86) blid2_tripm_pane_t2

0x8455,	// (0x00083b98) blid2_tripm_pane_t3_ParamLimits

0x8455,	// (0x00083b98) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0008b245) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0008b245) blid2_tripm_pane_t

0x8487,	// (0x00083bca) cell_blid2_satellite_pane_ParamLimits

0x8487,	// (0x00083bca) cell_blid2_satellite_pane

0x84a1,	// (0x00083be4) cell_blid2_satellite_pane_g1

0xdbe5,	// (0x00089328) cell_blid2_satellite_pane_t1

0xcbb4,	// (0x000882f7) blid2_speed_pane_g1

0xdbf3,	// (0x00089336) blid2_speed_pane_t1

0xdc01,	// (0x00089344) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0008b24e) blid2_speed_pane_t

0xcbb4,	// (0x000882f7) blid2_navig_ring_pane_g1

0x84aa,	// (0x00083bed) blid2_navig_ring_pane_g2

0x84b2,	// (0x00083bf5) blid2_navig_ring_pane_g3

0x84ba,	// (0x00083bfd) blid2_navig_ring_pane_g4

0x84c2,	// (0x00083c05) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0008b253) blid2_navig_ring_pane_g

0x9f8b,	// (0x000856ce) bg_popup_window_pane_cp011

0xdc0f,	// (0x00089352) popup_blid2_search_window_g1

0xdc17,	// (0x0008935a) popup_blid2_search_window_t1

0xdc25,	// (0x00089368) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0008b25e) popup_blid2_search_window_t

0xaa5d,	// (0x000861a0) main_browser_pane_g1

0xa6e7,	// (0x00085e2a) main_browser_pane_ParamLimits

0xaa46,	// (0x00086189) bg_button_pane_cp011_ParamLimits

0x75b1,	// (0x00082cf4) cell_vitu2_function_pane_g1_ParamLimits

0xc7aa,	// (0x00087eed) bg_popup_sub_pane_cp22_ParamLimits

0x1174,	// (0x0007c8b7) input_focus_pane_cp08_ParamLimits

0x7e82,	// (0x000835c5) popup_vitu2_query_button_pane_ParamLimits

0x7e82,	// (0x000835c5) popup_vitu2_query_button_pane

0x118b,	// (0x0007c8ce) popup_vitu2_query_input_button_pane

0xd882,	// (0x00088fc5) popup_vitu2_query_window_g1_ParamLimits

0x7e93,	// (0x000835d6) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0008b15f) popup_vitu2_query_window_g_ParamLimits

0x9f8b,	// (0x000856ce) bg_button_pane_cp026

0x84ca,	// (0x00083c0d) popup_vitu2_query_input_button_pane_g1

0x9f8b,	// (0x000856ce) bg_button_pane_cp025

0xdc33,	// (0x00089376) popup_vitu2_query_button_pane_t1

0x5cb8,	// (0x000813fb) main_mp3_pane_t6

0x5cc8,	// (0x0008140b) popup_slider_window_cp01

0x7224,	// (0x00082967) cam4_battery_pane

0x7304,	// (0x00082a47) cam4_battery_pane_cp02

0x8204,	// (0x00083947) cam4_battery_pane_cp01

0x8204,	// (0x00083947) cam4_battery_pane_cp03

0xcbb4,	// (0x000882f7) cam4_battery_pane_g1

0xd976,	// (0x000890b9) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0008b263) cam4_battery_pane_g

0xca7e,	// (0x000881c1) popup_blid_sat_info2_window_t11

0xb1d8,	// (0x0008691b) aid_size_touch_mv_arrow_left_ParamLimits

0xb203,	// (0x00086946) aid_size_touch_mv_arrow_right_ParamLimits

0xb261,	// (0x000869a4) navi_pane_g1_ParamLimits

0xb26d,	// (0x000869b0) navi_pane_g2_ParamLimits

0xb29b,	// (0x000869de) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008ab28) navi_pane_g_ParamLimits

0x4597,	// (0x0007fcda) navi_pane_mv_t1_ParamLimits

0x67d8,	// (0x00081f1b) grid_imed_effect_pane_ParamLimits

0x2ffc,	// (0x0007e73f) aid_placing_vt_slider_lsc

0xa995,	// (0x000860d8) aid_placing_vt_slider_prt

0xaa46,	// (0x00086189) bg_tb_trans_pane_cp01_ParamLimits

0xcd34,	// (0x00088477) popup_image_details_window_g1_ParamLimits

0xcd47,	// (0x0008848a) popup_image_details_window_g2_ParamLimits

0xcd5c,	// (0x0008849f) popup_image_details_window_g3_ParamLimits

0xcd5c,	// (0x0008849f) popup_image_details_window_g3

0xf718,	// (0x0008ae5b) popup_image_details_window_g_ParamLimits

0xcd70,	// (0x000884b3) popup_image_details_window_t1_ParamLimits

0xcd8e,	// (0x000884d1) popup_image_details_window_t2_ParamLimits

0xcda7,	// (0x000884ea) popup_image_details_window_t3_ParamLimits

0xcdbb,	// (0x000884fe) popup_image_details_window_t4_ParamLimits

0xcdd6,	// (0x00088519) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0008ae62) popup_image_details_window_t_ParamLimits

0x8124,	// (0x00083867) cl_header_name_pane_ParamLimits

0x8124,	// (0x00083867) cl_header_name_pane

0x84d2,	// (0x00083c15) cl_header_name_pane_t1_ParamLimits

0x84d2,	// (0x00083c15) cl_header_name_pane_t1

0x84e9,	// (0x00083c2c) cl_header_name_pane_t2_ParamLimits

0x84e9,	// (0x00083c2c) cl_header_name_pane_t2

0x8513,	// (0x00083c56) cl_header_name_pane_t3_ParamLimits

0x8513,	// (0x00083c56) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0008b268) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0008b268) cl_header_name_pane_t

0xb338,	// (0x00086a7b) navi_pane_mv_g2_ParamLimits

0xd5eb,	// (0x00088d2e) field_vitu2_entry_pane_g1_ParamLimits

0xd5f7,	// (0x00088d3a) field_vitu2_entry_pane_g2_ParamLimits

0xd603,	// (0x00088d46) field_vitu2_entry_pane_g3_ParamLimits

0xd603,	// (0x00088d46) field_vitu2_entry_pane_g3

0xf91b,	// (0x0008b05e) field_vitu2_entry_pane_g_ParamLimits

0x753c,	// (0x00082c7f) cell_vitu2_itu_pane_g1_ParamLimits

0x754c,	// (0x00082c8f) cell_vitu2_itu_pane_g2_ParamLimits

0x754c,	// (0x00082c8f) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0008b06a) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0008b06a) cell_vitu2_itu_pane_g

0xaa46,	// (0x00086189) bg_vkb2_func_pane_cp05_ParamLimits

0xaa46,	// (0x00086189) bg_vkb2_func_pane_cp05

0xaa46,	// (0x00086189) bg_vkb2_func_pane_cp03

0xaa46,	// (0x00086189) bg_vkb2_func_pane_cp04

0xaa46,	// (0x00086189) bg_vkb2_func_pane_cp10_ParamLimits

0xaa46,	// (0x00086189) bg_vkb2_func_pane_cp10

0x12d7,	// (0x0007ca1a) bg_vkb2_func_pane_cp08

0x80ce,	// (0x00083811) bg_vkb2_func_pane_cp06

0x80dc,	// (0x0008381f) bg_vkb2_func_pane_cp07

0xdb2a,	// (0x0008926d) bg_vkb2_func_pane_cp11_ParamLimits

0xdb2a,	// (0x0008926d) bg_vkb2_func_pane_cp11

0xdb3f,	// (0x00089282) bg_vkb2_func_pane_cp12_ParamLimits

0xdb3f,	// (0x00089282) bg_vkb2_func_pane_cp12

0x9f8b,	// (0x000856ce) bg_vkb2_func_pane_cp09

0xd623,	// (0x00088d66) bg_vkb2_func_pane_g1

0xab6e,	// (0x000862b1) bg_vkb2_func_pane_g2

0xd62b,	// (0x00088d6e) bg_vkb2_func_pane_g3

0xd633,	// (0x00088d76) bg_vkb2_func_pane_g4

0xd847,	// (0x00088f8a) bg_vkb2_func_pane_g5

0xd64b,	// (0x00088d8e) bg_vkb2_func_pane_g6

0xd653,	// (0x00088d96) bg_vkb2_func_pane_g7

0xd643,	// (0x00088d86) bg_vkb2_func_pane_g8

0xab4e,	// (0x00086291) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0008b26f) bg_vkb2_func_pane_g

0x8421,	// (0x00083b64) blid2_tripm_pane_g6_ParamLimits

0x8421,	// (0x00083b64) blid2_tripm_pane_g6

0xd48f,	// (0x00088bd2) mp4_progress_pane_g1

0x847b,	// (0x00083bbe) blid2_tripm_values_pane_ParamLimits

0x847b,	// (0x00083bbe) blid2_tripm_values_pane

0x8538,	// (0x00083c7b) blid2_tripm_values_pane_t1

0x8546,	// (0x00083c89) blid2_tripm_values_pane_t2

0x8554,	// (0x00083c97) blid2_tripm_values_pane_t3

0x8562,	// (0x00083ca5) blid2_tripm_values_pane_t4

0x8570,	// (0x00083cb3) blid2_tripm_values_pane_t5

0x857e,	// (0x00083cc1) blid2_tripm_values_pane_t6

0x858c,	// (0x00083ccf) blid2_tripm_values_pane_t7

0x859a,	// (0x00083cdd) blid2_tripm_values_pane_t8

0x85a8,	// (0x00083ceb) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0008b282) blid2_tripm_values_pane_t

0x303c,	// (0x0007e77f) call_video_pane_t1_ParamLimits

0x305d,	// (0x0007e7a0) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0008a9b1) call_video_pane_t_ParamLimits

0x0f41,	// (0x0007c684) msg_header_pane_g1_ParamLimits

0xb51a,	// (0x00086c5d) msg_header_pane_g2_ParamLimits

0xb51a,	// (0x00086c5d) msg_header_pane_g2

0x0001,

0xf488,	// (0x0008abcb) msg_header_pane_g_ParamLimits

0xf488,	// (0x0008abcb) msg_header_pane_g

0xa6e7,	// (0x00085e2a) main_clock2_pane_ParamLimits

0x6569,	// (0x00081cac) grid_clock2_toolbar_pane_ParamLimits

0x6569,	// (0x00081cac) grid_clock2_toolbar_pane

0x6569,	// (0x00081cac) listscroll_clock2_pane_ParamLimits

0x6569,	// (0x00081cac) listscroll_clock2_pane

0x6613,	// (0x00081d56) main_clock2_pane_t3_ParamLimits

0x6613,	// (0x00081d56) main_clock2_pane_t3

0x6625,	// (0x00081d68) main_clock2_pane_t4_ParamLimits

0x6625,	// (0x00081d68) main_clock2_pane_t4

0xdc41,	// (0x00089384) cell_clock2_toolbar_pane

0xdc49,	// (0x0008938c) cell_clock2_toolbar_pane_cp01

0xdc49,	// (0x0008938c) cell_clock2_toolbar_pane_cp02

0xdc51,	// (0x00089394) cell_clock2_toolbar_pane_cp03

0xdc59,	// (0x0008939c) list_clock2_pane

0xb14e,	// (0x00086891) scroll_pane_cp10

0xdc61,	// (0x000893a4) list_single_clock2_pane_ParamLimits

0xdc61,	// (0x000893a4) list_single_clock2_pane

0xb39f,	// (0x00086ae2) list_highlight_pane_cp08

0xdc6e,	// (0x000893b1) list_single_clock2_pane_t1

0xdc7c,	// (0x000893bf) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0008b295) list_single_clock2_pane_t

0x9f8b,	// (0x000856ce) bg_button_pane_cp10

0xdc8a,	// (0x000893cd) cell_clock2_toolbar_pane_g1

0x4a79,	// (0x000801bc) aid_main_viewer_pane_g1_ParamLimits

0x4a79,	// (0x000801bc) aid_main_viewer_pane_g1

0x4a85,	// (0x000801c8) aid_main_viewer_pane_g2_ParamLimits

0x4a85,	// (0x000801c8) aid_main_viewer_pane_g2

0x4a91,	// (0x000801d4) aid_main_viewer_pane_g3_ParamLimits

0x4a91,	// (0x000801d4) aid_main_viewer_pane_g3

0x4aa2,	// (0x000801e5) aid_main_viewer_pane_g4_ParamLimits

0x4aa2,	// (0x000801e5) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0008abdc) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0008abdc) aid_main_viewer_pane_g

0x522f,	// (0x00080972) main_calc_pane_ParamLimits

0x523c,	// (0x0008097f) main_dialer2_pane_ParamLimits

0x9f8b,	// (0x000856ce) main_cam6_pane

0x9f8b,	// (0x000856ce) main_vid6_pane

0x6575,	// (0x00081cb8) listscroll_gen_pane_cp06_ParamLimits

0x6575,	// (0x00081cb8) listscroll_gen_pane_cp06

0x6637,	// (0x00081d7a) main_clock2_pane_t5_ParamLimits

0x6637,	// (0x00081d7a) main_clock2_pane_t5

0x6682,	// (0x00081dc5) aid_call2_pane_cp10_ParamLimits

0x6694,	// (0x00081dd7) aid_call_pane_cp10_ParamLimits

0xb1cc,	// (0x0008690f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1cc,	// (0x0008690f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x66a6,	// (0x00081de9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x66a6,	// (0x00081de9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1cc,	// (0x0008690f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0008af17) popup_clock_analogue_window_cp10_g_ParamLimits

0x66b8,	// (0x00081dfb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6ea3,	// (0x000825e6) cell_dialer2_keypad_pane_g2_ParamLimits

0x6ea3,	// (0x000825e6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0008affd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0008affd) cell_dialer2_keypad_pane_g

0x6ebf,	// (0x00082602) cell_dialer2_keypad_pane_t1

0x787e,	// (0x00082fc1) main_cset_text2_pane_ParamLimits

0x787e,	// (0x00082fc1) main_cset_text2_pane

0xda92,	// (0x000891d5) area_vitu2_query_pane_g1_ParamLimits

0x1202,	// (0x0007c945) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0008b1b2) area_vitu2_query_pane_g_ParamLimits

0x12b3,	// (0x0007c9f6) area_vitu2_query_pane_t7_ParamLimits

0x12b3,	// (0x0007c9f6) area_vitu2_query_pane_t7

0x80ce,	// (0x00083811) bg_button_pane_cp018_ParamLimits

0x80dc,	// (0x0008381f) bg_button_pane_cp021_ParamLimits

0x12d7,	// (0x0007ca1a) bg_button_pane_cp022_ParamLimits

0x12d7,	// (0x0007ca1a) bg_vkb2_func_pane_cp08_ParamLimits

0x80ce,	// (0x00083811) bg_vkb2_func_pane_cp06_ParamLimits

0x80dc,	// (0x0008381f) bg_vkb2_func_pane_cp07_ParamLimits

0x12e8,	// (0x0007ca2b) input_focus_pane_cp09_ParamLimits

0x85b6,	// (0x00083cf9) cam6_autofocus_pane_ParamLimits

0x85b6,	// (0x00083cf9) cam6_autofocus_pane

0x85d8,	// (0x00083d1b) cam6_image_uncrop_pane_ParamLimits

0x85d8,	// (0x00083d1b) cam6_image_uncrop_pane

0x8605,	// (0x00083d48) cam6_indi_pane_ParamLimits

0x8605,	// (0x00083d48) cam6_indi_pane

0x861f,	// (0x00083d62) cam6_mode_pane_ParamLimits

0x861f,	// (0x00083d62) cam6_mode_pane

0x8633,	// (0x00083d76) cam6_timer_pane_ParamLimits

0x8633,	// (0x00083d76) cam6_timer_pane

0x863f,	// (0x00083d82) cam6_zoom_pane_ParamLimits

0x863f,	// (0x00083d82) cam6_zoom_pane

0x8657,	// (0x00083d9a) cam6_mode_pane_g1_ParamLimits

0x8657,	// (0x00083d9a) cam6_mode_pane_g1

0x8663,	// (0x00083da6) cam6_mode_pane_g2_ParamLimits

0x8663,	// (0x00083da6) cam6_mode_pane_g2

0x866f,	// (0x00083db2) cam6_mode_pane_g3_ParamLimits

0x866f,	// (0x00083db2) cam6_mode_pane_g3

0x867b,	// (0x00083dbe) cam6_mode_pane_g4_ParamLimits

0x867b,	// (0x00083dbe) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0008b29a) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0008b29a) cam6_mode_pane_g

0xdb9a,	// (0x000892dd) bg_tb_trans_pane_cp08_ParamLimits

0xdb9a,	// (0x000892dd) bg_tb_trans_pane_cp08

0xdc92,	// (0x000893d5) cam6_battery_pane_ParamLimits

0xdc92,	// (0x000893d5) cam6_battery_pane

0xdca8,	// (0x000893eb) cam6_indi_pane_g1_ParamLimits

0xdca8,	// (0x000893eb) cam6_indi_pane_g1

0xdcba,	// (0x000893fd) cam6_indi_pane_g2_ParamLimits

0xdcba,	// (0x000893fd) cam6_indi_pane_g2

0xdccc,	// (0x0008940f) cam6_indi_pane_g3_ParamLimits

0xdccc,	// (0x0008940f) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0008b2a3) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0008b2a3) cam6_indi_pane_g

0xdcde,	// (0x00089421) cam6_indi_pane_t1_ParamLimits

0xdcde,	// (0x00089421) cam6_indi_pane_t1

0x7378,	// (0x00082abb) cam6_autofocus_pane_g1

0x7380,	// (0x00082ac3) cam6_autofocus_pane_g2

0x7388,	// (0x00082acb) cam6_autofocus_pane_g3

0x7390,	// (0x00082ad3) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0008b2aa) cam6_autofocus_pane_g

0xdd04,	// (0x00089447) cam6_timer_pane_g1

0xdd0c,	// (0x0008944f) cam6_timer_pane_t1

0xdd1a,	// (0x0008945d) cam6_zoom_cont_pane

0xdd22,	// (0x00089465) cam6_zoom_pane_g1

0xdd2a,	// (0x0008946d) cam6_zoom_pane_g2

0x8687,	// (0x00083dca) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0008b2b3) cam6_zoom_pane_g

0xcbb4,	// (0x000882f7) cam6_battery_pane_g1

0xcbb4,	// (0x000882f7) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0008ae1f) cam6_battery_pane_g

0xdd32,	// (0x00089475) cam6_zoom_cont_pane_g1

0xdd3b,	// (0x0008947e) cam6_zoom_cont_pane_g2

0xdd44,	// (0x00089487) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0008b2ba) cam6_zoom_cont_pane_g

0x86a4,	// (0x00083de7) cam6_mode_pane_cp_ParamLimits

0x86a4,	// (0x00083de7) cam6_mode_pane_cp

0x863f,	// (0x00083d82) cam6_zoom_pane_cp_ParamLimits

0x863f,	// (0x00083d82) cam6_zoom_pane_cp

0x86b8,	// (0x00083dfb) vid6_image_uncrop_cif_pane_ParamLimits

0x86b8,	// (0x00083dfb) vid6_image_uncrop_cif_pane

0x86e4,	// (0x00083e27) vid6_image_uncrop_nhd_pane_ParamLimits

0x86e4,	// (0x00083e27) vid6_image_uncrop_nhd_pane

0x85d8,	// (0x00083d1b) vid6_image_uncrop_vga_pane_ParamLimits

0x85d8,	// (0x00083d1b) vid6_image_uncrop_vga_pane

0x8701,	// (0x00083e44) vid6_image_uncrop_wvga_pane_ParamLimits

0x8701,	// (0x00083e44) vid6_image_uncrop_wvga_pane

0x871e,	// (0x00083e61) vid6_indi_pane_ParamLimits

0x871e,	// (0x00083e61) vid6_indi_pane

0xdb9a,	// (0x000892dd) bg_tb_trans_pane_cp09_ParamLimits

0xdb9a,	// (0x000892dd) bg_tb_trans_pane_cp09

0xdd5c,	// (0x0008949f) cam6_battery_pane_cp_ParamLimits

0xdd5c,	// (0x0008949f) cam6_battery_pane_cp

0xdd68,	// (0x000894ab) vid6_indi_pane_g1_ParamLimits

0xdd68,	// (0x000894ab) vid6_indi_pane_g1

0xdd7a,	// (0x000894bd) vid6_indi_pane_g2_ParamLimits

0xdd7a,	// (0x000894bd) vid6_indi_pane_g2

0xdd8c,	// (0x000894cf) vid6_indi_pane_g3_ParamLimits

0xdd8c,	// (0x000894cf) vid6_indi_pane_g3

0xdda1,	// (0x000894e4) vid6_indi_pane_g4_ParamLimits

0xdda1,	// (0x000894e4) vid6_indi_pane_g4

0xddb6,	// (0x000894f9) vid6_indi_pane_g5_ParamLimits

0xddb6,	// (0x000894f9) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0008b2c1) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0008b2c1) vid6_indi_pane_g

0xddd0,	// (0x00089513) vid6_indi_pane_t1_ParamLimits

0xddd0,	// (0x00089513) vid6_indi_pane_t1

0xdde6,	// (0x00089529) vid6_indi_pane_t2_ParamLimits

0xdde6,	// (0x00089529) vid6_indi_pane_t2

0xde0e,	// (0x00089551) vid6_indi_pane_t3_ParamLimits

0xde0e,	// (0x00089551) vid6_indi_pane_t3

0xde36,	// (0x00089579) vid6_indi_pane_t4_ParamLimits

0xde36,	// (0x00089579) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0008b2cc) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0008b2cc) vid6_indi_pane_t

0xde5a,	// (0x0008959d) wait_bar_pane_cp08

0x8741,	// (0x00083e84) main_cset_text2_pane_t1_ParamLimits

0x8741,	// (0x00083e84) main_cset_text2_pane_t1

0x868f,	// (0x00083dd2) listscroll_gen_pane_cp06_t1_ParamLimits

0x868f,	// (0x00083dd2) listscroll_gen_pane_cp06_t1

0x9f8b,	// (0x000856ce) main_cam6_set_pane

0xce20,	// (0x00088563) bg_tb_trans_pane_cp06_ParamLimits

0x722c,	// (0x0008296f) cam4_indicators_pane_g1_ParamLimits

0x723d,	// (0x00082980) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0008b03a) cam4_indicators_pane_g_ParamLimits

0x725b,	// (0x0008299e) cam4_indicators_pane_t1_ParamLimits

0xaa46,	// (0x00086189) bg_tb_trans_pane_cp07_ParamLimits

0x730c,	// (0x00082a4f) vid4_indicators_pane_g1_ParamLimits

0x7320,	// (0x00082a63) vid4_indicators_pane_g2_ParamLimits

0x7334,	// (0x00082a77) vid4_indicators_pane_g3_ParamLimits

0x7345,	// (0x00082a88) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0008b04c) vid4_indicators_pane_g_ParamLimits

0x7361,	// (0x00082aa4) vid4_indicators_pane_t1_ParamLimits

0x820c,	// (0x0008394f) vid4_progress_pane_g1_ParamLimits

0x821c,	// (0x0008395f) vid4_progress_pane_g2_ParamLimits

0x822c,	// (0x0008396f) vid4_progress_pane_g3_ParamLimits

0x823e,	// (0x00083981) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0008b1fd) vid4_progress_pane_g_ParamLimits

0x825c,	// (0x0008399f) vid4_progress_pane_t1_ParamLimits

0x8272,	// (0x000839b5) vid4_progress_pane_t2_ParamLimits

0x8287,	// (0x000839ca) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0008b208) vid4_progress_pane_t_ParamLimits

0x829d,	// (0x000839e0) wait_bar_pane_cp07_ParamLimits

0x877b,	// (0x00083ebe) main_cam6_set_pane_g2_ParamLimits

0x877b,	// (0x00083ebe) main_cam6_set_pane_g2

0x8787,	// (0x00083eca) main_cset6_listscroll_pane_ParamLimits

0x8787,	// (0x00083eca) main_cset6_listscroll_pane

0x87b2,	// (0x00083ef5) main_cset6_slider_pane_ParamLimits

0x87b2,	// (0x00083ef5) main_cset6_slider_pane

0x87be,	// (0x00083f01) main_cset6_text2_pane_ParamLimits

0x87be,	// (0x00083f01) main_cset6_text2_pane

0xde69,	// (0x000895ac) main_cset6_text_pane

0xde71,	// (0x000895b4) main_cset_list_pane_copy1_ParamLimits

0xde71,	// (0x000895b4) main_cset_list_pane_copy1

0xde81,	// (0x000895c4) scroll_pane_cp028_copy1

0x87d1,	// (0x00083f14) cset_list_set_pane_copy1

0x87ea,	// (0x00083f2d) aid_position_infowindow_above_copy1

0x87f2,	// (0x00083f35) aid_position_infowindow_below_copy1

0x87fa,	// (0x00083f3d) cset_list_set_pane_g1_copy1

0x10f8,	// (0x0007c83b) cset_list_set_pane_g3_copy1_ParamLimits

0x10f8,	// (0x0007c83b) cset_list_set_pane_g3_copy1

0x1107,	// (0x0007c84a) cset_list_set_pane_t1_copy1_ParamLimits

0x1107,	// (0x0007c84a) cset_list_set_pane_t1_copy1

0xaa46,	// (0x00086189) list_highlight_pane_cp021_copy1_ParamLimits

0xaa46,	// (0x00086189) list_highlight_pane_cp021_copy1

0xde8a,	// (0x000895cd) cset6_slider_pane_ParamLimits

0xde8a,	// (0x000895cd) cset6_slider_pane

0xdeb6,	// (0x000895f9) main_cset6_slider_pane_g1_ParamLimits

0xdeb6,	// (0x000895f9) main_cset6_slider_pane_g1

0x8802,	// (0x00083f45) main_cset6_slider_pane_g2_ParamLimits

0x8802,	// (0x00083f45) main_cset6_slider_pane_g2

0xdede,	// (0x00089621) main_cset6_slider_pane_g3_ParamLimits

0xdede,	// (0x00089621) main_cset6_slider_pane_g3

0x882a,	// (0x00083f6d) main_cset6_slider_pane_g4_ParamLimits

0x882a,	// (0x00083f6d) main_cset6_slider_pane_g4

0x8836,	// (0x00083f79) main_cset6_slider_pane_g5_ParamLimits

0x8836,	// (0x00083f79) main_cset6_slider_pane_g5

0xd752,	// (0x00088e95) main_cset6_slider_pane_g7_ParamLimits

0xd752,	// (0x00088e95) main_cset6_slider_pane_g7

0xd75e,	// (0x00088ea1) main_cset6_slider_pane_g8_ParamLimits

0xd75e,	// (0x00088ea1) main_cset6_slider_pane_g8

0x8844,	// (0x00083f87) main_cset6_slider_pane_g9_ParamLimits

0x8844,	// (0x00083f87) main_cset6_slider_pane_g9

0x8850,	// (0x00083f93) main_cset6_slider_pane_g10_ParamLimits

0x8850,	// (0x00083f93) main_cset6_slider_pane_g10

0x885c,	// (0x00083f9f) main_cset6_slider_pane_g11_ParamLimits

0x885c,	// (0x00083f9f) main_cset6_slider_pane_g11

0x8868,	// (0x00083fab) main_cset6_slider_pane_g12_ParamLimits

0x8868,	// (0x00083fab) main_cset6_slider_pane_g12

0x8874,	// (0x00083fb7) main_cset6_slider_pane_g13_ParamLimits

0x8874,	// (0x00083fb7) main_cset6_slider_pane_g13

0x8880,	// (0x00083fc3) main_cset6_slider_pane_g14_ParamLimits

0x8880,	// (0x00083fc3) main_cset6_slider_pane_g14

0x888c,	// (0x00083fcf) main_cset6_slider_pane_g15_ParamLimits

0x888c,	// (0x00083fcf) main_cset6_slider_pane_g15

0x88a4,	// (0x00083fe7) main_cset6_slider_pane_g16_ParamLimits

0x88a4,	// (0x00083fe7) main_cset6_slider_pane_g16

0x88b2,	// (0x00083ff5) main_cset6_slider_pane_g17_ParamLimits

0x88b2,	// (0x00083ff5) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0008b2d5) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0008b2d5) main_cset6_slider_pane_g

0xdeea,	// (0x0008962d) main_cset6_slider_pane_t1_ParamLimits

0xdeea,	// (0x0008962d) main_cset6_slider_pane_t1

0x88d8,	// (0x0008401b) main_cset6_slider_pane_t2_ParamLimits

0x88d8,	// (0x0008401b) main_cset6_slider_pane_t2

0x8903,	// (0x00084046) main_cset6_slider_pane_t3_ParamLimits

0x8903,	// (0x00084046) main_cset6_slider_pane_t3

0x892e,	// (0x00084071) main_cset6_slider_pane_t4_ParamLimits

0x892e,	// (0x00084071) main_cset6_slider_pane_t4

0x8959,	// (0x0008409c) main_cset6_slider_pane_t5_ParamLimits

0x8959,	// (0x0008409c) main_cset6_slider_pane_t5

0xdf2b,	// (0x0008966e) main_cset6_slider_pane_t7_ParamLimits

0xdf2b,	// (0x0008966e) main_cset6_slider_pane_t7

0x8986,	// (0x000840c9) main_cset6_slider_pane_t8_ParamLimits

0x8986,	// (0x000840c9) main_cset6_slider_pane_t8

0x89aa,	// (0x000840ed) main_cset6_slider_pane_t9_ParamLimits

0x89aa,	// (0x000840ed) main_cset6_slider_pane_t9

0x89ce,	// (0x00084111) main_cset6_slider_pane_t10_ParamLimits

0x89ce,	// (0x00084111) main_cset6_slider_pane_t10

0x89f2,	// (0x00084135) main_cset6_slider_pane_t11_ParamLimits

0x89f2,	// (0x00084135) main_cset6_slider_pane_t11

0xdf61,	// (0x000896a4) main_cset6_slider_pane_t14_ParamLimits

0xdf61,	// (0x000896a4) main_cset6_slider_pane_t14

0xdfb5,	// (0x000896f8) main_cset6_slider_pane_t15_ParamLimits

0xdfb5,	// (0x000896f8) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0008b2fa) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0008b2fa) main_cset6_slider_pane_t

0xdf9a,	// (0x000896dd) cset_slider_pane_g1_copy1

0xdfa3,	// (0x000896e6) cset_slider_pane_g2_copy1

0xdfac,	// (0x000896ef) cset_slider_pane_g3_copy1

0x9f8b,	// (0x000856ce) bg_popup_sub_pane_cp011_copy1

0xdfee,	// (0x00089731) main_cset_text_pane_g1_copy1

0xd896,	// (0x00088fd9) main_cset_text_pane_t1_copy1

0xd8a4,	// (0x00088fe7) main_cset_text_pane_t2_copy1

0xd8b2,	// (0x00088ff5) main_cset_text_pane_t3_copy1

0xd8c0,	// (0x00089003) main_cset_text_pane_t4_copy1

0xd8ce,	// (0x00089011) main_cset_text_pane_t5_copy1

0xdff6,	// (0x00089739) main_cset_text_pane_t6_copy1

0xe004,	// (0x00089747) main_cset_text_pane_t7_copy1

0x8a33,	// (0x00084176) main_cset_text2_pane_t1_copy1

0xaa46,	// (0x00086189) main_ncimui_pane

0x528d,	// (0x000809d0) popup_query_ncimui_window_ParamLimits

0x528d,	// (0x000809d0) popup_query_ncimui_window

0x5e26,	// (0x00081569) field_cale_ev2_pane_g4_ParamLimits

0x5e26,	// (0x00081569) field_cale_ev2_pane_g4

0x6bc3,	// (0x00082306) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6bc3,	// (0x00082306) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0008afd8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0008afd8) cell_video_dialer_keypad_pane_g

0x6bdb,	// (0x0008231e) cell_video_dialer_keypad_pane_t1

0x9f8b,	// (0x000856ce) bg_popup_window_pane_cp012

0xb00f,	// (0x00086752) heading_pane_cp06

0xe030,	// (0x00089773) ncim_query_content_pane

0x9f8b,	// (0x000856ce) bg_popup_heading_pane_cp01

0xe038,	// (0x0008977b) ncim_heading_pane_t1

0xe046,	// (0x00089789) ncim_indicator_popup_pane

0xe058,	// (0x0008979b) ncim_query_button_pane

0xe06c,	// (0x000897af) ncim_query_content_pane_t1

0xe07e,	// (0x000897c1) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0008b33e) ncim_query_content_pane_t

0xe0b8,	// (0x000897fb) ncim_query_list_pane

0xe0ca,	// (0x0008980d) ncim_query_popup_pane

0xe046,	// (0x00089789) ncim_indicator_popup_pane_ParamLimits

0x8b8d,	// (0x000842d0) ncim_query_content_pane_g1_ParamLimits

0x8b8d,	// (0x000842d0) ncim_query_content_pane_g1

0xe06c,	// (0x000897af) ncim_query_content_pane_t1_ParamLimits

0xe07e,	// (0x000897c1) ncim_query_content_pane_t2_ParamLimits

0x8b99,	// (0x000842dc) ncim_query_content_pane_t3_ParamLimits

0x8b99,	// (0x000842dc) ncim_query_content_pane_t3

0x8bb6,	// (0x000842f9) ncim_query_content_pane_t4_ParamLimits

0x8bb6,	// (0x000842f9) ncim_query_content_pane_t4

0x8bd3,	// (0x00084316) ncim_query_content_pane_t5_ParamLimits

0x8bd3,	// (0x00084316) ncim_query_content_pane_t5

0xe090,	// (0x000897d3) ncim_query_content_pane_t6_ParamLimits

0xe090,	// (0x000897d3) ncim_query_content_pane_t6

0xfbfb,	// (0x0008b33e) ncim_query_content_pane_t_ParamLimits

0xe0b8,	// (0x000897fb) ncim_query_list_pane_ParamLimits

0xe0ca,	// (0x0008980d) ncim_query_popup_pane_ParamLimits

0xe0de,	// (0x00089821) wait_bar_pane_cp04

0x9f8b,	// (0x000856ce) input_focus_pane_cp011

0xe0e6,	// (0x00089829) ncim_query_popup_pane_t1

0xe0f4,	// (0x00089837) ncim_list_query_list_pane_ParamLimits

0xe0f4,	// (0x00089837) ncim_list_query_list_pane

0x9f8b,	// (0x000856ce) bg_button_pane_cp027

0xe107,	// (0x0008984a) ncim_query_button_pane_g1

0x9f8b,	// (0x000856ce) list_highlight_pane_cp012

0xe111,	// (0x00089854) ncim_list_query_list_pane_g1

0xe119,	// (0x0008985c) ncim_list_query_list_pane_t1

0x724c,	// (0x0008298f) cam4_indicators_pane_g3_ParamLimits

0x724c,	// (0x0008298f) cam4_indicators_pane_g3

0x7351,	// (0x00082a94) vid4_indicators_pane_g5_ParamLimits

0x7351,	// (0x00082a94) vid4_indicators_pane_g5

0x824d,	// (0x00083990) vid4_progress_pane_g5_ParamLimits

0x824d,	// (0x00083990) vid4_progress_pane_g5

0x8a79,	// (0x000841bc) main_ncimui_pane_g1

0x8ae1,	// (0x00084224) ncimui_group_query_pane_ParamLimits

0x8ae1,	// (0x00084224) ncimui_group_query_pane

0x8b29,	// (0x0008426c) ncimui_list_pane_ParamLimits

0x8b29,	// (0x0008426c) ncimui_list_pane

0x8b50,	// (0x00084293) ncimui_text_pane_ParamLimits

0x8b50,	// (0x00084293) ncimui_text_pane

0x8bf0,	// (0x00084333) ncimui_text_pane_t1_ParamLimits

0x8bf0,	// (0x00084333) ncimui_text_pane_t1

0xe127,	// (0x0008986a) ncimui_list_single_graphic_pane_ParamLimits

0xe127,	// (0x0008986a) ncimui_list_single_graphic_pane

0x8c0f,	// (0x00084352) ncimui_query_pane_ParamLimits

0x8c0f,	// (0x00084352) ncimui_query_pane

0x9f8b,	// (0x000856ce) list_highlight_pane_cp013

0xe137,	// (0x0008987a) ncim_list_query_list_pane_t1_copy1

0xe111,	// (0x00089854) ncim_list_single_graphic_pane_g1

0xe145,	// (0x00089888) ncim_query_button_pane_cp01

0xe151,	// (0x00089894) ncim_query_entry_pane_ParamLimits

0xe151,	// (0x00089894) ncim_query_entry_pane

0xe164,	// (0x000898a7) ncimui_query_pane_g1

0xe170,	// (0x000898b3) ncimui_query_pane_t1_ParamLimits

0xe170,	// (0x000898b3) ncimui_query_pane_t1

0xaa46,	// (0x00086189) input_focus_pane_cp012

0xe189,	// (0x000898cc) ncim_query_entry_pane_t1

0xa6e7,	// (0x00085e2a) main_im_pane_ParamLimits

0xaa46,	// (0x00086189) main_mobtv_pane_ParamLimits

0xaa46,	// (0x00086189) main_mobtv_pane

0x88c0,	// (0x00084003) main_cset6_slider_pane_g18_ParamLimits

0x88c0,	// (0x00084003) main_cset6_slider_pane_g18

0x88cc,	// (0x0008400f) main_cset6_slider_pane_g19_ParamLimits

0x88cc,	// (0x0008400f) main_cset6_slider_pane_g19

0xd603,	// (0x00088d46) bg_main_mobtv_pane_ParamLimits

0xd603,	// (0x00088d46) bg_main_mobtv_pane

0x8c22,	// (0x00084365) main_mobtv_info_pane

0x8c2d,	// (0x00084370) main_mobtv_loading_pane_ParamLimits

0x8c2d,	// (0x00084370) main_mobtv_loading_pane

0xe19b,	// (0x000898de) main_mobtv_pg_channel_list_pane

0xe1a5,	// (0x000898e8) main_mobtv_pg_hdr_pane

0x8c3a,	// (0x0008437d) main_mobtv_programe_curr_pane_ParamLimits

0x8c3a,	// (0x0008437d) main_mobtv_programe_curr_pane

0x8c47,	// (0x0008438a) main_mobtv_programe_next_pane_ParamLimits

0x8c47,	// (0x0008438a) main_mobtv_programe_next_pane

0xe1ae,	// (0x000898f1) popup_mobtv_noti_window

0xcbb4,	// (0x000882f7) main_tv_pg_hdr_pane_g1

0xe1b6,	// (0x000898f9) main_tv_pg_hdr_pane_g2

0xe1be,	// (0x00089901) main_tv_pg_hdr_pane_g3

0xe1c6,	// (0x00089909) main_tv_pg_hdr_pane_g4

0xe1ce,	// (0x00089911) main_tv_pg_hdr_pane_g5

0xe1d8,	// (0x0008991b) main_tv_pg_hdr_pane_g6

0xe1e2,	// (0x00089925) main_tv_pg_hdr_pane_g7

0xe1ec,	// (0x0008992f) main_tv_pg_hdr_pane_g8

0xe1f6,	// (0x00089939) main_tv_pg_hdr_pane_g9

0xe200,	// (0x00089943) main_tv_pg_hdr_pane_g10

0xe20a,	// (0x0008994d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0008b34b) main_tv_pg_hdr_pane_g

0xe214,	// (0x00089957) main_tv_pg_hdr_pane_t1

0xe222,	// (0x00089965) main_tv_pg_hdr_pane_t2

0xe230,	// (0x00089973) main_tv_pg_hdr_pane_t3

0xe240,	// (0x00089983) main_tv_pg_hdr_pane_t4

0xe250,	// (0x00089993) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0008b362) main_tv_pg_hdr_pane_t

0xe260,	// (0x000899a3) single_mobtv_pg_channel_pane_ParamLimits

0xe260,	// (0x000899a3) single_mobtv_pg_channel_pane

0xe272,	// (0x000899b5) single_mobtv_pg_channel_table_pane

0xe27b,	// (0x000899be) single_mobtv_pg_channel_thumb_pane

0xe284,	// (0x000899c7) single_tv_pg_channel_pane_g1

0xe28d,	// (0x000899d0) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0008b36d) single_tv_pg_channel_pane_g

0xce20,	// (0x00088563) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce20,	// (0x00088563) bg_single_mobtv_pg_channel_thumb_pane

0xe296,	// (0x000899d9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe296,	// (0x000899d9) single_mobtv_pg_channel_thumb_pane_g1

0xe2a4,	// (0x000899e7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2a4,	// (0x000899e7) single_mobtv_pg_channel_thumb_pane_g2

0xe2b0,	// (0x000899f3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2b0,	// (0x000899f3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0008b372) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0008b372) single_mobtv_pg_channel_thumb_pane_g

0xe2bc,	// (0x000899ff) single_mobtv_pg_channel_thumb_pane_t1

0xe2ca,	// (0x00089a0d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0008b379) single_mobtv_pg_channel_thumb_pane_t

0xcbb4,	// (0x000882f7) bg_single_mobtv_pg_channel_table_pane_g1

0xcbb4,	// (0x000882f7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0008ae1f) bg_single_mobtv_pg_channel_table_pane_g

0xe2d8,	// (0x00089a1b) single_mobtv_pg_channel_table_pane_t1

0xe2e6,	// (0x00089a29) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0008b37e) single_mobtv_pg_channel_table_pane_t

0x8c5c,	// (0x0008439f) main_mobtv_info_pane_g1_ParamLimits

0x8c5c,	// (0x0008439f) main_mobtv_info_pane_g1

0x8c78,	// (0x000843bb) main_mobtv_info_pane_t1_ParamLimits

0x8c78,	// (0x000843bb) main_mobtv_info_pane_t1

0x8cf0,	// (0x00084433) main_mobtv_info_pane_t2_ParamLimits

0x8cf0,	// (0x00084433) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0008b388) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0008b388) main_mobtv_info_pane_t

0x8d7f,	// (0x000844c2) wait_bar_pane_cp05

0x8d91,	// (0x000844d4) main_mobtv_loading_pane_g1_ParamLimits

0x8d91,	// (0x000844d4) main_mobtv_loading_pane_g1

0x8d9f,	// (0x000844e2) main_mobtv_loading_pane_g2_ParamLimits

0x8d9f,	// (0x000844e2) main_mobtv_loading_pane_g2

0x8dab,	// (0x000844ee) main_mobtv_loading_pane_g3_ParamLimits

0x8dab,	// (0x000844ee) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0008b38f) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0008b38f) main_mobtv_loading_pane_g

0xe2f4,	// (0x00089a37) main_mobtv_loading_pane_t1_ParamLimits

0xe2f4,	// (0x00089a37) main_mobtv_loading_pane_t1

0xe30c,	// (0x00089a4f) main_mobtv_loading_pane_t2_ParamLimits

0xe30c,	// (0x00089a4f) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0008b396) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0008b396) main_mobtv_loading_pane_t

0x8db9,	// (0x000844fc) wait_bar_pane_cp06_ParamLimits

0x8db9,	// (0x000844fc) wait_bar_pane_cp06

0xe330,	// (0x00089a73) main_mobtv_programe_curr_pane_t1

0xe33e,	// (0x00089a81) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0008b39b) main_mobtv_programe_curr_pane_t

0xe34c,	// (0x00089a8f) main_mobtv_programe_next_pane_t1

0xe35a,	// (0x00089a9d) main_mobtv_programe_next_pane_t2

0xe368,	// (0x00089aab) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0008b3a0) main_mobtv_programe_next_pane_t

0x9f8b,	// (0x000856ce) bg_popup_mobtv_noti_window_pane

0xe376,	// (0x00089ab9) popup_mobtv_noti_window_g1

0xe37e,	// (0x00089ac1) popup_mobtv_noti_window_t1

0xe38c,	// (0x00089acf) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0008b3a7) popup_mobtv_noti_window_t

0xcbb4,	// (0x000882f7) bg_popup_mobtv_noti_window_pane_g1

0x9f8b,	// (0x000856ce) sc_clock_pane

0x9f8b,	// (0x000856ce) main_fs_bigclock_pane

0x8469,	// (0x00083bac) blid2_tripm_pane_t4_ParamLimits

0x8469,	// (0x00083bac) blid2_tripm_pane_t4

0x8dc5,	// (0x00084508) sc_clock_pane_g1_ParamLimits

0x8dc5,	// (0x00084508) sc_clock_pane_g1

0x8dd3,	// (0x00084516) sc_clock_pane_t1_ParamLimits

0x8dd3,	// (0x00084516) sc_clock_pane_t1

0x8de6,	// (0x00084529) sc_clock_pane_t2_ParamLimits

0x8de6,	// (0x00084529) sc_clock_pane_t2

0x8df8,	// (0x0008453b) sc_clock_pane_t3_ParamLimits

0x8df8,	// (0x0008453b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0008b3ac) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0008b3ac) sc_clock_pane_t

0x969f,	// (0x00084de2) main_fs_bigclock_indicator_pane_ParamLimits

0x969f,	// (0x00084de2) main_fs_bigclock_indicator_pane

0x8e81,	// (0x000845c4) main_fs_bigclock_pane_g1_ParamLimits

0x8e81,	// (0x000845c4) main_fs_bigclock_pane_g1

0x96ab,	// (0x00084dee) main_fs_bigclock_pane_t1_ParamLimits

0x96ab,	// (0x00084dee) main_fs_bigclock_pane_t1

0x96bd,	// (0x00084e00) main_fs_bigclock_pane_t2_ParamLimits

0x96bd,	// (0x00084e00) main_fs_bigclock_pane_t2

0x96cf,	// (0x00084e12) main_fs_bigclock_pane_t3_ParamLimits

0x96cf,	// (0x00084e12) main_fs_bigclock_pane_t3

0x0002,

0xfe1d,	// (0x0008b560) main_fs_bigclock_pane_t_ParamLimits

0xfe1d,	// (0x0008b560) main_fs_bigclock_pane_t

0xec8f,	// (0x0008a3d2) main_fs_bigclock_indicator_pane_g1

0xe060,	// (0x000897a3) ncim_query_content_pane_g2_ParamLimits

0xe060,	// (0x000897a3) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0008b339) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0008b339) ncim_query_content_pane_g

0x8e0c,	// (0x0008454f) sc_clock_pane_t4_ParamLimits

0x8e0c,	// (0x0008454f) sc_clock_pane_t4

0xaa46,	// (0x00086189) main_radioblah_pane

0xd576,	// (0x00088cb9) cell_call4_button_pane_t1_copy1_ParamLimits

0xd576,	// (0x00088cb9) cell_call4_button_pane_t1_copy1

0x8a93,	// (0x000841d6) main_ncimui_pane_t1_ParamLimits

0x8a93,	// (0x000841d6) main_ncimui_pane_t1

0x8aad,	// (0x000841f0) main_ncimui_pane_t2_ParamLimits

0x8aad,	// (0x000841f0) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0008b332) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0008b332) main_ncimui_pane_t

0xe4df,	// (0x00089c22) main_radioblah_anim_pane_ParamLimits

0xe4df,	// (0x00089c22) main_radioblah_anim_pane

0xe4f0,	// (0x00089c33) main_radioblah_info_pane_ParamLimits

0xe4f0,	// (0x00089c33) main_radioblah_info_pane

0xe504,	// (0x00089c47) main_radioblah_pane_t1_ParamLimits

0xe504,	// (0x00089c47) main_radioblah_pane_t1

0xe520,	// (0x00089c63) main_radioblah_pane_t2_ParamLimits

0xe520,	// (0x00089c63) main_radioblah_pane_t2

0x0003,

0x09d5,	// (0x0007c118) main_radioblah_pane_t_ParamLimits

0x09d5,	// (0x0007c118) main_radioblah_pane_t

0x8ed3,	// (0x00084616) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8ed3,	// (0x00084616) main_radioblah_rocker_ctrl_pane

0xe568,	// (0x00089cab) main_radioblah_info_pane_t1_ParamLimits

0xe568,	// (0x00089cab) main_radioblah_info_pane_t1

0x8f18,	// (0x0008465b) main_radioblah_info_pane_t2_ParamLimits

0x8f18,	// (0x0008465b) main_radioblah_info_pane_t2

0x0003,

0xfc74,	// (0x0008b3b7) main_radioblah_info_pane_t_ParamLimits

0xfc74,	// (0x0008b3b7) main_radioblah_info_pane_t

0xcbb4,	// (0x000882f7) main_radioblah_rocker_ctrl_pane_g1

0x8fc8,	// (0x0008470b) main_radioblah_rocker_ctrl_pane_g2

0x8fd0,	// (0x00084713) main_radioblah_rocker_ctrl_pane_g3

0x8fd8,	// (0x0008471b) main_radioblah_rocker_ctrl_pane_g4

0x8fe0,	// (0x00084723) main_radioblah_rocker_ctrl_pane_g5

0x8fe8,	// (0x0008472b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7d,	// (0x0008b3c0) main_radioblah_rocker_ctrl_pane_g

0x8a33,	// (0x00084176) main_cset_text2_pane_t1_copy1_ParamLimits

0x717a,	// (0x000828bd) cam4_image_uncrop_qvga_pane

0x72c1,	// (0x00082a04) vid4_image_uncrop_qcif_pane

0x85f7,	// (0x00083d3a) cam6_image_uncrop_qvga_pane_ParamLimits

0x85f7,	// (0x00083d3a) cam6_image_uncrop_qvga_pane

0xdd4c,	// (0x0008948f) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd4c,	// (0x0008948f) vid6_image_uncrop_qcif_pane

0x9f8b,	// (0x000856ce) bg_popup_preview_window_pane_cp03

0xe012,	// (0x00089755) list_cset_text2_pane

0xe01a,	// (0x0008975d) main_cset6_text2_pane_g1

0xe022,	// (0x00089765) main_cset6_text2_pane_t1

0x8ff0,	// (0x00084733) list_cset_text2_pane_t1_ParamLimits

0x8ff0,	// (0x00084733) list_cset_text2_pane_t1

0xaa46,	// (0x00086189) main_radioblah_pane_ParamLimits

0x8d6b,	// (0x000844ae) main_mobtv_info_pane_t3_ParamLimits

0x8d6b,	// (0x000844ae) main_mobtv_info_pane_t3

0x8ec1,	// (0x00084604) main_radioblah_pane_g1

0x8eec,	// (0x0008462f) main_radioblah_info_pane_g1

0x8f6d,	// (0x000846b0) main_radioblah_info_pane_t3_ParamLimits

0x8f6d,	// (0x000846b0) main_radioblah_info_pane_t3

0x40fa,	// (0x0007f83d) highlight_cell_cale_month_pane_ParamLimits

0x40fa,	// (0x0007f83d) highlight_cell_cale_month_pane

0x9f8b,	// (0x000856ce) main_phob_fisheye_pane

0xcefc,	// (0x0008863f) scroll_pane_cp0031_ParamLimits

0xcefc,	// (0x0008863f) scroll_pane_cp0031

0xde5a,	// (0x0008959d) wait_bar_pane_cp08_ParamLimits

0x87d1,	// (0x00083f14) cset_list_set_pane_copy1_ParamLimits

0xe5a2,	// (0x00089ce5) highlight_cell_cale_month_pane_g1

0x9017,	// (0x0008475a) highlight_cell_cale_month_pane_t1

0xdae6,	// (0x00089229) list_gen_pane_cp01

0xd73d,	// (0x00088e80) scroll_pane_01

0x9025,	// (0x00084768) list_single_double_fisheye_pane

0x13c9,	// (0x0007cb0c) list_double_fisheye_pane_g1_ParamLimits

0x13c9,	// (0x0007cb0c) list_double_fisheye_pane_g1

0x902e,	// (0x00084771) list_double_fisheye_pane_g2_ParamLimits

0x902e,	// (0x00084771) list_double_fisheye_pane_g2

0x9042,	// (0x00084785) list_double_fisheye_pane_g3_ParamLimits

0x9042,	// (0x00084785) list_double_fisheye_pane_g3

0x0004,

0xfc8a,	// (0x0008b3cd) list_double_fisheye_pane_g_ParamLimits

0xfc8a,	// (0x0008b3cd) list_double_fisheye_pane_g

0x13e1,	// (0x0007cb24) list_double_fisheye_pane_t1_ParamLimits

0x13e1,	// (0x0007cb24) list_double_fisheye_pane_t1

0x13fc,	// (0x0007cb3f) list_double_fisheye_pane_t2_ParamLimits

0x13fc,	// (0x0007cb3f) list_double_fisheye_pane_t2

0x0001,

0xfc95,	// (0x0008b3d8) list_double_fisheye_pane_t_ParamLimits

0xfc95,	// (0x0008b3d8) list_double_fisheye_pane_t

0x9f8b,	// (0x000856ce) main_call5_pane

0x8e32,	// (0x00084575) sc_swipe_pane_ParamLimits

0x8e32,	// (0x00084575) sc_swipe_pane

0x906b,	// (0x000847ae) call5_image_pane_ParamLimits

0x906b,	// (0x000847ae) call5_image_pane

0x907b,	// (0x000847be) call5_swipe_1_pane_ParamLimits

0x907b,	// (0x000847be) call5_swipe_1_pane

0x9087,	// (0x000847ca) call5_swipe_2_pane_ParamLimits

0x9087,	// (0x000847ca) call5_swipe_2_pane

0x90a1,	// (0x000847e4) popup_call5_audio_first_window_ParamLimits

0x90a1,	// (0x000847e4) popup_call5_audio_first_window

0xce20,	// (0x00088563) call5_swipe_1_pane_g1_ParamLimits

0xce20,	// (0x00088563) call5_swipe_1_pane_g1

0xe5aa,	// (0x00089ced) call5_swipe_1_pane_g2_ParamLimits

0xe5aa,	// (0x00089ced) call5_swipe_1_pane_g2

0x0001,

0xfc9a,	// (0x0008b3dd) call5_swipe_1_pane_g_ParamLimits

0xfc9a,	// (0x0008b3dd) call5_swipe_1_pane_g

0xe5b6,	// (0x00089cf9) call5_swipe_1_pane_t1_ParamLimits

0xe5b6,	// (0x00089cf9) call5_swipe_1_pane_t1

0xce20,	// (0x00088563) call5_swipe_2_pane_g1_ParamLimits

0xce20,	// (0x00088563) call5_swipe_2_pane_g1

0xe5cb,	// (0x00089d0e) call5_swipe_2_pane_g2_ParamLimits

0xe5cb,	// (0x00089d0e) call5_swipe_2_pane_g2

0x0001,

0xfc9f,	// (0x0008b3e2) call5_swipe_2_pane_g_ParamLimits

0xfc9f,	// (0x0008b3e2) call5_swipe_2_pane_g

0xe5d7,	// (0x00089d1a) call5_swipe_2_pane_t1_ParamLimits

0xe5d7,	// (0x00089d1a) call5_swipe_2_pane_t1

0xe5ec,	// (0x00089d2f) sc_swipe_pane_g1_ParamLimits

0xe5ec,	// (0x00089d2f) sc_swipe_pane_g1

0xe5f9,	// (0x00089d3c) sc_swipe_pane_g2_ParamLimits

0xe5f9,	// (0x00089d3c) sc_swipe_pane_g2

0x0001,

0xfca4,	// (0x0008b3e7) sc_swipe_pane_g_ParamLimits

0xfca4,	// (0x0008b3e7) sc_swipe_pane_g

0xe605,	// (0x00089d48) sc_swipe_pane_t1_ParamLimits

0xe605,	// (0x00089d48) sc_swipe_pane_t1

0x9f8b,	// (0x000856ce) main_cmail_launcher_pane

0x90af,	// (0x000847f2) aid_size_cell_cmail_l_ParamLimits

0x90af,	// (0x000847f2) aid_size_cell_cmail_l

0x90bf,	// (0x00084802) grid_cmail_l_pane_ParamLimits

0x90bf,	// (0x00084802) grid_cmail_l_pane

0x90cf,	// (0x00084812) cell_cmail_l_pane_ParamLimits

0x90cf,	// (0x00084812) cell_cmail_l_pane

0x90e3,	// (0x00084826) cell_cmail_l_pane_g1_ParamLimits

0x90e3,	// (0x00084826) cell_cmail_l_pane_g1

0x90f4,	// (0x00084837) cell_cmail_l_pane_t1_ParamLimits

0x90f4,	// (0x00084837) cell_cmail_l_pane_t1

0xe61a,	// (0x00089d5d) cell_cmail_l_pane_t2_ParamLimits

0xe61a,	// (0x00089d5d) cell_cmail_l_pane_t2

0x0001,

0xfca9,	// (0x0008b3ec) cell_cmail_l_pane_t_ParamLimits

0xfca9,	// (0x0008b3ec) cell_cmail_l_pane_t

0xaa46,	// (0x00086189) grid_highlight_pane_cp018_ParamLimits

0xaa46,	// (0x00086189) grid_highlight_pane_cp018

0x1fd9,	// (0x0007d71c) main2_pane_ParamLimits

0x1fd9,	// (0x0007d71c) main2_pane

0xa792,	// (0x00085ed5) popup_sp_fs_action_menu_bg_pane_g1

0xa79a,	// (0x00085edd) popup_sp_fs_action_menu_bg_pane_g2

0xa7a2,	// (0x00085ee5) popup_sp_fs_action_menu_bg_pane_g3

0xa7aa,	// (0x00085eed) popup_sp_fs_action_menu_bg_pane_g4

0xa7b2,	// (0x00085ef5) popup_sp_fs_action_menu_bg_pane_g5

0xa7ba,	// (0x00085efd) popup_sp_fs_action_menu_bg_pane_g6

0xa7c2,	// (0x00085f05) popup_sp_fs_action_menu_bg_pane_g7

0xa7ca,	// (0x00085f0d) popup_sp_fs_action_menu_bg_pane_g8

0xa7d2,	// (0x00085f15) popup_sp_fs_action_menu_bg_pane_g9

0xa7da,	// (0x00085f1d) popup_sp_fs_action_menu_bg_pane_g10

0xa7da,	// (0x00085f1d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0008a8c9) popup_sp_fs_action_menu_bg_pane_g

0x0cd0,	// (0x0007c413) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x2_t3_g3_g1

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t3_g3_g2

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008a97b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008a97b) list_medium_line_x2_t3_g3_g

0x0ce8,	// (0x0007c42b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ce8,	// (0x0007c42b) list_medium_line_x2_t3_g3_t1

0x0cfd,	// (0x0007c440) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0cfd,	// (0x0007c440) list_medium_line_x2_t3_g3_t2

0x0d0f,	// (0x0007c452) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d0f,	// (0x0007c452) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0008a982) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0008a982) list_medium_line_x2_t3_g3_t

0x0cd0,	// (0x0007c413) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x2_t3_g2_g1

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008a989) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008a989) list_medium_line_x2_t3_g2_g

0x0d24,	// (0x0007c467) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d24,	// (0x0007c467) list_medium_line_x2_t3_g2_t1

0x0d3a,	// (0x0007c47d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d3a,	// (0x0007c47d) list_medium_line_x2_t3_g2_t2

0x0d4c,	// (0x0007c48f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d4c,	// (0x0007c48f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0008a98e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0008a98e) list_medium_line_x2_t3_g2_t

0x0cd0,	// (0x0007c413) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x2_t4_g4_g1

0x2f7a,	// (0x0007e6bd) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2f7a,	// (0x0007e6bd) list_medium_line_x2_t4_g4_g2

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t4_g4_g3

0x0d6a,	// (0x0007c4ad) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0d6a,	// (0x0007c4ad) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0008a995) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0008a995) list_medium_line_x2_t4_g4_g

0x0d76,	// (0x0007c4b9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d76,	// (0x0007c4b9) list_medium_line_x2_t4_g4_t1

0x0d8d,	// (0x0007c4d0) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d8d,	// (0x0007c4d0) list_medium_line_x2_t4_g4_t2

0x0da2,	// (0x0007c4e5) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0da2,	// (0x0007c4e5) list_medium_line_x2_t4_g4_t3

0x0db4,	// (0x0007c4f7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0db4,	// (0x0007c4f7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0008a99e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0008a99e) list_medium_line_x2_t4_g4_t

0x0cd0,	// (0x0007c413) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x2_t2_g4_g1

0x2f7a,	// (0x0007e6bd) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2f7a,	// (0x0007e6bd) list_medium_line_x2_t2_g4_g2

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t2_g4_g3

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0008aa05) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0008aa05) list_medium_line_x2_t2_g4_g

0x0dc6,	// (0x0007c509) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0dc6,	// (0x0007c509) list_medium_line_x2_t2_g4_t1

0x0d0f,	// (0x0007c452) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d0f,	// (0x0007c452) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0008aa0e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0008aa0e) list_medium_line_x2_t2_g4_t

0x0cd0,	// (0x0007c413) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x2_t2_g3_g1

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t2_g3_g2

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008a97b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008a97b) list_medium_line_x2_t2_g3_g

0x0ddb,	// (0x0007c51e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ddb,	// (0x0007c51e) list_medium_line_x2_t2_g3_t1

0x0d0f,	// (0x0007c452) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d0f,	// (0x0007c452) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0008aa13) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0008aa13) list_medium_line_x2_t2_g3_t

0x42d2,	// (0x0007fa15) main_sp_fs_list_pane_ParamLimits

0x42d2,	// (0x0007fa15) main_sp_fs_list_pane

0x42de,	// (0x0007fa21) sp_fs_scroll_pane_ParamLimits

0x42de,	// (0x0007fa21) sp_fs_scroll_pane

0x0e0a,	// (0x0007c54d) list_medium_line_x2_t3_t1

0x0e1a,	// (0x0007c55d) list_medium_line_x2_t3_t2

0x0e28,	// (0x0007c56b) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0008aa5e) list_medium_line_x2_t3_t

0x0e36,	// (0x0007c579) list_medium_line_x3_t4_t1

0x0e46,	// (0x0007c589) list_medium_line_x3_t4_t2

0x0e54,	// (0x0007c597) list_medium_line_x3_t4_t3

0x0e28,	// (0x0007c56b) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0008aa65) list_medium_line_x3_t4_t

0x0e62,	// (0x0007c5a5) list_medium_line_x4_t5_t1

0x0e72,	// (0x0007c5b5) list_medium_line_x4_t5_t2

0x0e54,	// (0x0007c597) list_medium_line_x4_t5_t3

0x0e80,	// (0x0007c5c3) list_medium_line_x4_t5_t4

0x0e28,	// (0x0007c56b) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0008aa6e) list_medium_line_x4_t5_t

0x0cd0,	// (0x0007c413) list_medium_line_t4_g4_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_t4_g4_g1

0x0d6a,	// (0x0007c4ad) list_medium_line_t4_g4_g2_ParamLimits

0x0d6a,	// (0x0007c4ad) list_medium_line_t4_g4_g2

0x0e8e,	// (0x0007c5d1) list_medium_line_t4_g4_g3_ParamLimits

0x0e8e,	// (0x0007c5d1) list_medium_line_t4_g4_g3

0x0cdc,	// (0x0007c41f) list_medium_line_t4_g4_g4_ParamLimits

0x0cdc,	// (0x0007c41f) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008aa79) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008aa79) list_medium_line_t4_g4_g

0x0e9a,	// (0x0007c5dd) list_medium_line_t4_g4_t1_ParamLimits

0x0e9a,	// (0x0007c5dd) list_medium_line_t4_g4_t1

0x0eaf,	// (0x0007c5f2) list_medium_line_t4_g4_t2_ParamLimits

0x0eaf,	// (0x0007c5f2) list_medium_line_t4_g4_t2

0x0ec5,	// (0x0007c608) list_medium_line_t4_g4_t3_ParamLimits

0x0ec5,	// (0x0007c608) list_medium_line_t4_g4_t3

0x0d0f,	// (0x0007c452) list_medium_line_t4_g4_t4_ParamLimits

0x0d0f,	// (0x0007c452) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0008aa82) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0008aa82) list_medium_line_t4_g4_t

0x43d5,	// (0x0007fb18) chi_dic_find_pane_g1

0x524a,	// (0x0008098d) main_tport_pane

0x111c,	// (0x0007c85f) list_medium_line_plain_t1

0x112a,	// (0x0007c86d) list_medium_line_t2_g2_g1_ParamLimits

0x112a,	// (0x0007c86d) list_medium_line_t2_g2_g1

0x7d1a,	// (0x0008345d) list_medium_line_t2_g2_g2_ParamLimits

0x7d1a,	// (0x0008345d) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0008b143) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0008b143) list_medium_line_t2_g2_g

0x1136,	// (0x0007c879) list_medium_line_t2_g2_t1_ParamLimits

0x1136,	// (0x0007c879) list_medium_line_t2_g2_t1

0x114d,	// (0x0007c890) list_medium_line_t2_g2_t2_ParamLimits

0x114d,	// (0x0007c890) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0008b148) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0008b148) list_medium_line_t2_g2_t

0x12f9,	// (0x0007ca3c) aid_sp_fs_list_icon_a_sm

0x82ae,	// (0x000839f1) aid_sp_fs_list_icon_d

0xaa54,	// (0x00086197) aid_sp_fs_text_primary

0x82b6,	// (0x000839f9) aid_sp_fs_text_secondary

0x82bf,	// (0x00083a02) list_medium_line

0x82bf,	// (0x00083a02) list_medium_line_g2

0x82bf,	// (0x00083a02) list_medium_line_g3

0x82bf,	// (0x00083a02) list_medium_line_plain

0x82bf,	// (0x00083a02) list_medium_line_plain_t2

0x82bf,	// (0x00083a02) list_medium_line_plain_t3

0x82bf,	// (0x00083a02) list_medium_line_right_icon

0x82bf,	// (0x00083a02) list_medium_line_right_iconx2

0x82bf,	// (0x00083a02) list_medium_line_t2

0x82bf,	// (0x00083a02) list_medium_line_t2_g2

0x82bf,	// (0x00083a02) list_medium_line_t2_g3

0x82bf,	// (0x00083a02) list_medium_line_t2_right_icon

0x82bf,	// (0x00083a02) list_medium_line_t2_right_iconx2

0x82bf,	// (0x00083a02) list_medium_line_t3

0x82bf,	// (0x00083a02) list_medium_line_t3_g2

0x82bf,	// (0x00083a02) list_medium_line_t3_g3

0x82bf,	// (0x00083a02) list_medium_line_t3_right_iconx2

0x82c8,	// (0x00083a0b) list_medium_line_t4_g4

0x82d1,	// (0x00083a14) list_medium_line_x2

0x82d1,	// (0x00083a14) list_medium_line_x2_t2_g2

0x82d1,	// (0x00083a14) list_medium_line_x2_t2_g3

0x82d1,	// (0x00083a14) list_medium_line_x2_t2_g4

0x82d1,	// (0x00083a14) list_medium_line_x2_t3

0x82d1,	// (0x00083a14) list_medium_line_x2_t3_g2

0x82d1,	// (0x00083a14) list_medium_line_x2_t3_g3

0x82d1,	// (0x00083a14) list_medium_line_x2_t3_g4

0x82d1,	// (0x00083a14) list_medium_line_x2_t4_g2

0x82d1,	// (0x00083a14) list_medium_line_x2_t4_g4

0x82da,	// (0x00083a1d) list_medium_line_x3

0x82da,	// (0x00083a1d) list_medium_line_x3_t4

0x82da,	// (0x00083a1d) list_medium_line_x3_t4_g4

0x82c8,	// (0x00083a0b) list_medium_line_x4_t4

0x82c8,	// (0x00083a0b) list_medium_line_x4_t4_g7

0x82c8,	// (0x00083a0b) list_medium_line_x4_t5

0x1301,	// (0x0007ca44) list_single_fs_dyc_pane_ParamLimits

0x1301,	// (0x0007ca44) list_single_fs_dyc_pane

0x0cd0,	// (0x0007c413) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x4_t4_g7_g1

0x1315,	// (0x0007ca58) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1315,	// (0x0007ca58) list_medium_line_x4_t4_g7_g2

0x8a18,	// (0x0008415b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8a18,	// (0x0008415b) list_medium_line_x4_t4_g7_g3

0x8a27,	// (0x0008416a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8a27,	// (0x0008416a) list_medium_line_x4_t4_g7_g4

0x1321,	// (0x0007ca64) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1321,	// (0x0007ca64) list_medium_line_x4_t4_g7_g5

0x1330,	// (0x0007ca73) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1330,	// (0x0007ca73) list_medium_line_x4_t4_g7_g6

0x133f,	// (0x0007ca82) list_medium_line_x4_t4_g7_g7_ParamLimits

0x133f,	// (0x0007ca82) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0008b313) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0008b313) list_medium_line_x4_t4_g7_g

0x134b,	// (0x0007ca8e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x134b,	// (0x0007ca8e) list_medium_line_x4_t4_g7_t1

0x1360,	// (0x0007caa3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1360,	// (0x0007caa3) list_medium_line_x4_t4_g7_t2

0x1375,	// (0x0007cab8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1375,	// (0x0007cab8) list_medium_line_x4_t4_g7_t3

0x138a,	// (0x0007cacd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x138a,	// (0x0007cacd) list_medium_line_x4_t4_g7_t4

0x139c,	// (0x0007cadf) list_medium_line_x4_t4_g7_t5_ParamLimits

0x139c,	// (0x0007cadf) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0008b322) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0008b322) list_medium_line_x4_t4_g7_t

0x13ae,	// (0x0007caf1) list_single_dyc_row_pane_ParamLimits

0x13ae,	// (0x0007caf1) list_single_dyc_row_pane

0x905f,	// (0x000847a2) call5_gesture_pane_ParamLimits

0x905f,	// (0x000847a2) call5_gesture_pane

0x9093,	// (0x000847d6) call5_windows_pane_ParamLimits

0x9093,	// (0x000847d6) call5_windows_pane

0x910a,	// (0x0008484d) call5_swipe_1_pane_cp_ParamLimits

0x910a,	// (0x0008484d) call5_swipe_1_pane_cp

0x9116,	// (0x00084859) call5_swipe_2_pane_cp_ParamLimits

0x9116,	// (0x00084859) call5_swipe_2_pane_cp

0xb39f,	// (0x00086ae2) call5_image_pane_cp

0x9122,	// (0x00084865) popup_call5_audio_first_window_cp_ParamLimits

0x9122,	// (0x00084865) popup_call5_audio_first_window_cp

0xe5ec,	// (0x00089d2f) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5ec,	// (0x00089d2f) call5_swipe_1_pane_g1_cp

0xe62c,	// (0x00089d6f) call5_swipe_1_pane_g2_cp

0xe605,	// (0x00089d48) call5_swipe_1_pane_t1_cp_ParamLimits

0xe605,	// (0x00089d48) call5_swipe_1_pane_t1_cp

0xe5ec,	// (0x00089d2f) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5ec,	// (0x00089d2f) call5_swipe_2_pane_g1_cp

0xe634,	// (0x00089d77) call5_swipe_2_pane_g2_cp

0xe63c,	// (0x00089d7f) call5_swipe_2_pane_t1_cp_ParamLimits

0xe63c,	// (0x00089d7f) call5_swipe_2_pane_t1_cp

0xaa46,	// (0x00086189) main_sp_fs_email_pane

0xe651,	// (0x00089d94) main_sp_fs_listscroll_pane_te

0xa80b,	// (0x00085f4e) popup_sp_fs_action_menu_pane_ParamLimits

0xa80b,	// (0x00085f4e) popup_sp_fs_action_menu_pane

0xcbb4,	// (0x000882f7) bg_sp_fs_ctrlbar_pane_g1

0xe65a,	// (0x00089d9d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe663,	// (0x00089da6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe66c,	// (0x00089daf) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbb4,	// (0x000882f7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcae,	// (0x0008b3f1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc997,	// (0x000880da) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc997,	// (0x000880da) bg_sp_fs_ctrlbar_ddmenu_pane

0xe675,	// (0x00089db8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe675,	// (0x00089db8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe681,	// (0x00089dc4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe681,	// (0x00089dc4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcb7,	// (0x0008b3fa) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcb7,	// (0x0008b3fa) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe68d,	// (0x00089dd0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe68d,	// (0x00089dd0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9130,	// (0x00084873) list_medium_line_t2_right_icon_g1

0x141e,	// (0x0007cb61) list_medium_line_t2_right_icon_t1

0x142e,	// (0x0007cb71) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbc,	// (0x0008b3ff) list_medium_line_t2_right_icon_t

0xc7aa,	// (0x00087eed) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7aa,	// (0x00087eed) bg_sp_fs_ctrlbar_pane

0x918f,	// (0x000848d2) main_sp_fs_ctrlbar_button_pane_cp01

0x9197,	// (0x000848da) main_sp_fs_ctrlbar_ddmenu_pane

0xe6df,	// (0x00089e22) main_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x00089e2e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcc1,	// (0x0008b404) main_sp_fs_ctrlbar_pane_g

0xe6f7,	// (0x00089e3a) main_sp_fs_ctrlbar_pane_t1

0x91a1,	// (0x000848e4) main_sp_fs_ctrlbar_pane

0x91b7,	// (0x000848fa) main_sp_fs_listscroll_pane_te_cp01

0x143c,	// (0x0007cb7f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x143c,	// (0x0007cb7f) popup_sp_fs_action_menu_pane_cp01

0xaa46,	// (0x00086189) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaa46,	// (0x00086189) bg_sp_fs_highlight_list_pane_cp01

0x1466,	// (0x0007cba9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1466,	// (0x0007cba9) sp_fs_action_menu_list_gene_pane_g1

0xe727,	// (0x00089e6a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe727,	// (0x00089e6a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfccb,	// (0x0008b40e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfccb,	// (0x0008b40e) sp_fs_action_menu_list_gene_pane_g

0x1475,	// (0x0007cbb8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1475,	// (0x0007cbb8) sp_fs_action_menu_list_gene_pane_t1

0x148d,	// (0x0007cbd0) sp_fs_action_menu_list_gene_pane_ParamLimits

0x148d,	// (0x0007cbd0) sp_fs_action_menu_list_gene_pane

0xe734,	// (0x00089e77) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe734,	// (0x00089e77) popup_sp_fs_action_menu_bg_pane

0x14ac,	// (0x0007cbef) sp_fs_action_menu_list_pane_ParamLimits

0x14ac,	// (0x0007cbef) sp_fs_action_menu_list_pane

0x91c8,	// (0x0008490b) sp_fs_scroll_pane_cp01_ParamLimits

0x91c8,	// (0x0008490b) sp_fs_scroll_pane_cp01

0x14cc,	// (0x0007cc0f) list_medium_line_plain_t2_t1

0x14dc,	// (0x0007cc1f) list_medium_line_plain_t2_t2

0x0001,

0xfcd0,	// (0x0008b413) list_medium_line_plain_t2_t

0x14ea,	// (0x0007cc2d) list_medium_line_plain_t3_t1

0x14fa,	// (0x0007cc3d) list_medium_line_plain_t3_t2

0x1508,	// (0x0007cc4b) list_medium_line_plain_t3_t3

0x0002,

0xfcd5,	// (0x0008b418) list_medium_line_plain_t3_t

0x0cd0,	// (0x0007c413) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x2_t2_g2_g1

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008a989) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008a989) list_medium_line_x2_t2_g2_g

0x0e9a,	// (0x0007c5dd) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0e9a,	// (0x0007c5dd) list_medium_line_x2_t2_g2_t1

0x0d0f,	// (0x0007c452) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d0f,	// (0x0007c452) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcdc,	// (0x0008b41f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcdc,	// (0x0008b41f) list_medium_line_x2_t2_g2_t

0x0cd0,	// (0x0007c413) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x2_t4_g2_g1

0x1516,	// (0x0007cc59) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1516,	// (0x0007cc59) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce1,	// (0x0008b424) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce1,	// (0x0008b424) list_medium_line_x2_t4_g2_g

0x1528,	// (0x0007cc6b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1528,	// (0x0007cc6b) list_medium_line_x2_t4_g2_t1

0x1542,	// (0x0007cc85) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1542,	// (0x0007cc85) list_medium_line_x2_t4_g2_t2

0x1557,	// (0x0007cc9a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1557,	// (0x0007cc9a) list_medium_line_x2_t4_g2_t3

0x0d0f,	// (0x0007c452) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d0f,	// (0x0007c452) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce6,	// (0x0008b429) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce6,	// (0x0008b429) list_medium_line_x2_t4_g2_t

0x91ee,	// (0x00084931) list_medium_line_t3_right_iconx2_g1

0x9130,	// (0x00084873) list_medium_line_t3_right_iconx2_g2

0x156c,	// (0x0007ccaf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcef,	// (0x0008b432) list_medium_line_t3_right_iconx2_g

0x1574,	// (0x0007ccb7) list_medium_line_t3_right_iconx2_t1

0x1584,	// (0x0007ccc7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf6,	// (0x0008b439) list_medium_line_t3_right_iconx2_t

0x0cd0,	// (0x0007c413) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x3_t4_g4_g1

0x2f6e,	// (0x0007e6b1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2f6e,	// (0x0007e6b1) list_medium_line_x3_t4_g4_g2

0x0d6a,	// (0x0007c4ad) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d6a,	// (0x0007c4ad) list_medium_line_x3_t4_g4_g3

0x91f6,	// (0x00084939) list_medium_line_x3_t4_g4_g4_ParamLimits

0x91f6,	// (0x00084939) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcfb,	// (0x0008b43e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcfb,	// (0x0008b43e) list_medium_line_x3_t4_g4_g

0x1592,	// (0x0007ccd5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1592,	// (0x0007ccd5) list_medium_line_x3_t4_g4_t1

0x15a9,	// (0x0007ccec) list_medium_line_x3_t4_g4_t2_ParamLimits

0x15a9,	// (0x0007ccec) list_medium_line_x3_t4_g4_t2

0x15be,	// (0x0007cd01) list_medium_line_x3_t4_g4_t3_ParamLimits

0x15be,	// (0x0007cd01) list_medium_line_x3_t4_g4_t3

0x15d3,	// (0x0007cd16) list_medium_line_x3_t4_g4_t4_ParamLimits

0x15d3,	// (0x0007cd16) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd04,	// (0x0008b447) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd04,	// (0x0008b447) list_medium_line_x3_t4_g4_t

0x15f0,	// (0x0007cd33) list_single_dyc_row_text_pane_t1_ParamLimits

0x15f0,	// (0x0007cd33) list_single_dyc_row_text_pane_t1

0x1627,	// (0x0007cd6a) list_single_dyc_row_text_pane_t2_ParamLimits

0x1627,	// (0x0007cd6a) list_single_dyc_row_text_pane_t2

0x169d,	// (0x0007cde0) list_single_dyc_row_text_pane_t3_ParamLimits

0x169d,	// (0x0007cde0) list_single_dyc_row_text_pane_t3

0x0005,

0xfd0d,	// (0x0008b450) list_single_dyc_row_text_pane_t_ParamLimits

0xfd0d,	// (0x0008b450) list_single_dyc_row_text_pane_t

0x176e,	// (0x0007ceb1) list_single_dyc_row_pane_g1_ParamLimits

0x176e,	// (0x0007ceb1) list_single_dyc_row_pane_g1

0x177a,	// (0x0007cebd) list_single_dyc_row_pane_g2_ParamLimits

0x177a,	// (0x0007cebd) list_single_dyc_row_pane_g2

0x1786,	// (0x0007cec9) list_single_dyc_row_pane_g3_ParamLimits

0x1786,	// (0x0007cec9) list_single_dyc_row_pane_g3

0x1792,	// (0x0007ced5) list_single_dyc_row_pane_g4_ParamLimits

0x1792,	// (0x0007ced5) list_single_dyc_row_pane_g4

0x0003,

0xfd1a,	// (0x0008b45d) list_single_dyc_row_pane_g_ParamLimits

0xfd1a,	// (0x0008b45d) list_single_dyc_row_pane_g

0x179e,	// (0x0007cee1) list_single_dyc_row_text_pane_ParamLimits

0x179e,	// (0x0007cee1) list_single_dyc_row_text_pane

0x9f8b,	// (0x000856ce) bg_sp_fs_scroll_pane

0xe742,	// (0x00089e85) thumb_sp_fs_scroll_pane

0x112a,	// (0x0007c86d) list_medium_line_g1_ParamLimits

0x112a,	// (0x0007c86d) list_medium_line_g1

0x17bd,	// (0x0007cf00) list_medium_line_t1_ParamLimits

0x17bd,	// (0x0007cf00) list_medium_line_t1

0x0cd0,	// (0x0007c413) list_medium_line_x2_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x2_g1

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_g2_ParamLimits

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_g2

0x0001,

0xfd23,	// (0x0008b466) list_medium_line_x2_g_ParamLimits

0xfd23,	// (0x0008b466) list_medium_line_x2_g

0x17d2,	// (0x0007cf15) list_medium_line_x2_t1_ParamLimits

0x17d2,	// (0x0007cf15) list_medium_line_x2_t1

0x0cd0,	// (0x0007c413) list_medium_line_x3_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x3_g1

0x2f6e,	// (0x0007e6b1) list_medium_line_x3_g2_ParamLimits

0x2f6e,	// (0x0007e6b1) list_medium_line_x3_g2

0x0001,

0xfd23,	// (0x0008b466) list_medium_line_x3_g_ParamLimits

0xfd23,	// (0x0008b466) list_medium_line_x3_g

0x17d2,	// (0x0007cf15) list_medium_line_x3_t1_ParamLimits

0x17d2,	// (0x0007cf15) list_medium_line_x3_t1

0xe74b,	// (0x00089e8e) thumb_sp_fs_scroll_pane_g1

0xe754,	// (0x00089e97) thumb_sp_fs_scroll_pane_g2

0xe75d,	// (0x00089ea0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd28,	// (0x0008b46b) thumb_sp_fs_scroll_pane_g

0xe74b,	// (0x00089e8e) bg_sp_fs_scroll_pane_g1

0xe754,	// (0x00089e97) bg_sp_fs_scroll_pane_g2

0xe75d,	// (0x00089ea0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd28,	// (0x0008b46b) bg_sp_fs_scroll_pane_g

0x0cd0,	// (0x0007c413) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0cd0,	// (0x0007c413) list_medium_line_x2_t3_g4_g1

0x2f7a,	// (0x0007e6bd) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2f7a,	// (0x0007e6bd) list_medium_line_x2_t3_g4_g2

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2f6e,	// (0x0007e6b1) list_medium_line_x2_t3_g4_g3

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0cdc,	// (0x0007c41f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0008aa05) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0008aa05) list_medium_line_x2_t3_g4_g

0x17e8,	// (0x0007cf2b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x17e8,	// (0x0007cf2b) list_medium_line_x2_t3_g4_t1

0x17fe,	// (0x0007cf41) list_medium_line_x2_t3_g4_t2_ParamLimits

0x17fe,	// (0x0007cf41) list_medium_line_x2_t3_g4_t2

0x0d0f,	// (0x0007c452) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d0f,	// (0x0007c452) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd2f,	// (0x0008b472) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd2f,	// (0x0008b472) list_medium_line_x2_t3_g4_t

0x112a,	// (0x0007c86d) list_medium_line_g2_g1_ParamLimits

0x112a,	// (0x0007c86d) list_medium_line_g2_g1

0x7d1a,	// (0x0008345d) list_medium_line_g2_g2_ParamLimits

0x7d1a,	// (0x0008345d) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0008b143) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0008b143) list_medium_line_g2_g

0x1817,	// (0x0007cf5a) list_medium_line_g2_t1_ParamLimits

0x1817,	// (0x0007cf5a) list_medium_line_g2_t1

0x112a,	// (0x0007c86d) list_medium_line_t3_g2_g1_ParamLimits

0x112a,	// (0x0007c86d) list_medium_line_t3_g2_g1

0x7d1a,	// (0x0008345d) list_medium_line_t3_g2_g2_ParamLimits

0x7d1a,	// (0x0008345d) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0008b143) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0008b143) list_medium_line_t3_g2_g

0x182c,	// (0x0007cf6f) list_medium_line_t3_g2_t1_ParamLimits

0x182c,	// (0x0007cf6f) list_medium_line_t3_g2_t1

0x1843,	// (0x0007cf86) list_medium_line_t3_g2_t2_ParamLimits

0x1843,	// (0x0007cf86) list_medium_line_t3_g2_t2

0x1858,	// (0x0007cf9b) list_medium_line_t3_g2_t3_ParamLimits

0x1858,	// (0x0007cf9b) list_medium_line_t3_g2_t3

0x0002,

0xfd36,	// (0x0008b479) list_medium_line_t3_g2_t_ParamLimits

0xfd36,	// (0x0008b479) list_medium_line_t3_g2_t

0x9130,	// (0x00084873) list_medium_line_right_icon_g1

0x186d,	// (0x0007cfb0) list_medium_line_right_icon_t1

0x112a,	// (0x0007c86d) list_medium_line_t2_g1_ParamLimits

0x112a,	// (0x0007c86d) list_medium_line_t2_g1

0x187b,	// (0x0007cfbe) list_medium_line_t2_t1_ParamLimits

0x187b,	// (0x0007cfbe) list_medium_line_t2_t1

0x1895,	// (0x0007cfd8) list_medium_line_t2_t2_ParamLimits

0x1895,	// (0x0007cfd8) list_medium_line_t2_t2

0x0001,

0xfd3d,	// (0x0008b480) list_medium_line_t2_t_ParamLimits

0xfd3d,	// (0x0008b480) list_medium_line_t2_t

0x112a,	// (0x0007c86d) list_medium_line_t3_g1_ParamLimits

0x112a,	// (0x0007c86d) list_medium_line_t3_g1

0x18aa,	// (0x0007cfed) list_medium_line_t3_t1_ParamLimits

0x18aa,	// (0x0007cfed) list_medium_line_t3_t1

0x18c4,	// (0x0007d007) list_medium_line_t3_t2_ParamLimits

0x18c4,	// (0x0007d007) list_medium_line_t3_t2

0x18d9,	// (0x0007d01c) list_medium_line_t3_t3_ParamLimits

0x18d9,	// (0x0007d01c) list_medium_line_t3_t3

0x0002,

0xfd42,	// (0x0008b485) list_medium_line_t3_t_ParamLimits

0xfd42,	// (0x0008b485) list_medium_line_t3_t

0x112a,	// (0x0007c86d) list_medium_line_g3_g1_ParamLimits

0x112a,	// (0x0007c86d) list_medium_line_g3_g1

0x9202,	// (0x00084945) list_medium_line_g3_g2_ParamLimits

0x9202,	// (0x00084945) list_medium_line_g3_g2

0x7d1a,	// (0x0008345d) list_medium_line_g3_g3_ParamLimits

0x7d1a,	// (0x0008345d) list_medium_line_g3_g3

0x0002,

0xfd49,	// (0x0008b48c) list_medium_line_g3_g_ParamLimits

0xfd49,	// (0x0008b48c) list_medium_line_g3_g

0x18ee,	// (0x0007d031) list_medium_line_g3_t1_ParamLimits

0x18ee,	// (0x0007d031) list_medium_line_g3_t1

0x112a,	// (0x0007c86d) list_medium_line_t2_g3_g1_ParamLimits

0x112a,	// (0x0007c86d) list_medium_line_t2_g3_g1

0x9202,	// (0x00084945) list_medium_line_t2_g3_g2_ParamLimits

0x9202,	// (0x00084945) list_medium_line_t2_g3_g2

0x7d1a,	// (0x0008345d) list_medium_line_t2_g3_g3_ParamLimits

0x7d1a,	// (0x0008345d) list_medium_line_t2_g3_g3

0x0002,

0xfd49,	// (0x0008b48c) list_medium_line_t2_g3_g_ParamLimits

0xfd49,	// (0x0008b48c) list_medium_line_t2_g3_g

0x1903,	// (0x0007d046) list_medium_line_t2_g3_t1_ParamLimits

0x1903,	// (0x0007d046) list_medium_line_t2_g3_t1

0x191d,	// (0x0007d060) list_medium_line_t2_g3_t2_ParamLimits

0x191d,	// (0x0007d060) list_medium_line_t2_g3_t2

0x0001,

0xfd50,	// (0x0008b493) list_medium_line_t2_g3_t_ParamLimits

0xfd50,	// (0x0008b493) list_medium_line_t2_g3_t

0x112a,	// (0x0007c86d) list_medium_line_t3_g3_g1_ParamLimits

0x112a,	// (0x0007c86d) list_medium_line_t3_g3_g1

0x9202,	// (0x00084945) list_medium_line_t3_g3_g2_ParamLimits

0x9202,	// (0x00084945) list_medium_line_t3_g3_g2

0x7d1a,	// (0x0008345d) list_medium_line_t3_g3_g3_ParamLimits

0x7d1a,	// (0x0008345d) list_medium_line_t3_g3_g3

0x0002,

0xfd49,	// (0x0008b48c) list_medium_line_t3_g3_g_ParamLimits

0xfd49,	// (0x0008b48c) list_medium_line_t3_g3_g

0x1932,	// (0x0007d075) list_medium_line_t3_g3_t1_ParamLimits

0x1932,	// (0x0007d075) list_medium_line_t3_g3_t1

0x194b,	// (0x0007d08e) list_medium_line_t3_g3_t2_ParamLimits

0x194b,	// (0x0007d08e) list_medium_line_t3_g3_t2

0x1961,	// (0x0007d0a4) list_medium_line_t3_g3_t3_ParamLimits

0x1961,	// (0x0007d0a4) list_medium_line_t3_g3_t3

0x0002,

0xfd55,	// (0x0008b498) list_medium_line_t3_g3_t_ParamLimits

0xfd55,	// (0x0008b498) list_medium_line_t3_g3_t

0x91ee,	// (0x00084931) list_medium_line_right_iconx2_g1

0x9130,	// (0x00084873) list_medium_line_right_iconx2_g2

0x0001,

0xfd5c,	// (0x0008b49f) list_medium_line_right_iconx2_g

0x920e,	// (0x00084951) list_medium_line_right_iconx2_t1

0x91ee,	// (0x00084931) list_medium_line_t2_right_iconx2_g1

0x9130,	// (0x00084873) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd5c,	// (0x0008b49f) list_medium_line_t2_right_iconx2_g

0x1977,	// (0x0007d0ba) list_medium_line_t2_right_iconx2_t1

0x1987,	// (0x0007d0ca) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd61,	// (0x0008b4a4) list_medium_line_t2_right_iconx2_t

0x1995,	// (0x0007d0d8) list_medium_line_x4_t4_t1

0x19a3,	// (0x0007d0e6) list_medium_line_x4_t4_t2

0x19b3,	// (0x0007d0f6) list_medium_line_x4_t4_t3

0x19c3,	// (0x0007d106) list_medium_line_x4_t4_t4

0x0003,

0xfd66,	// (0x0008b4a9) list_medium_line_x4_t4_t

0x9246,	// (0x00084989) tport_appsw_pane_ParamLimits

0x9246,	// (0x00084989) tport_appsw_pane

0x9254,	// (0x00084997) tport_contact_pane_ParamLimits

0x9254,	// (0x00084997) tport_contact_pane

0x9264,	// (0x000849a7) tport_listscroll_pane_ParamLimits

0x9264,	// (0x000849a7) tport_listscroll_pane

0x9274,	// (0x000849b7) cell_tport_appsw_pane_ParamLimits

0x9274,	// (0x000849b7) cell_tport_appsw_pane

0xce85,	// (0x000885c8) tport_appsw_pane_g1_ParamLimits

0xce85,	// (0x000885c8) tport_appsw_pane_g1

0xe766,	// (0x00089ea9) tport_contact_pane_g1

0xe0e6,	// (0x00089829) tport_contact_pane_t1

0xe76f,	// (0x00089eb2) tport_contact_pane_t2

0x0001,

0xfd6f,	// (0x0008b4b2) tport_contact_pane_t

0xe798,	// (0x00089edb) list_tport_pane

0xe7a1,	// (0x00089ee4) scroll_pane_cp_030

0x92a7,	// (0x000849ea) cell_tport_appsw_pane_g1

0x92b7,	// (0x000849fa) cell_tport_appsw_pane_t1

0x92c5,	// (0x00084a08) grid_highlight_pane_cp019

0x92cd,	// (0x00084a10) list_tport_double_graphic_pane_ParamLimits

0x92cd,	// (0x00084a10) list_tport_double_graphic_pane

0xaa46,	// (0x00086189) list_highlight_pane_cp023_ParamLimits

0xaa46,	// (0x00086189) list_highlight_pane_cp023

0x92df,	// (0x00084a22) list_tport_double_graphic_pane_g1_ParamLimits

0x92df,	// (0x00084a22) list_tport_double_graphic_pane_g1

0x92ec,	// (0x00084a2f) list_tport_double_graphic_pane_t1_ParamLimits

0x92ec,	// (0x00084a2f) list_tport_double_graphic_pane_t1

0x9301,	// (0x00084a44) list_tport_double_graphic_pane_t2_ParamLimits

0x9301,	// (0x00084a44) list_tport_double_graphic_pane_t2

0x0001,

0xfd7b,	// (0x0008b4be) list_tport_double_graphic_pane_t_ParamLimits

0xfd7b,	// (0x0008b4be) list_tport_double_graphic_pane_t

0x9f8b,	// (0x000856ce) main_cale_note_pane

0x7514,	// (0x00082c57) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7514,	// (0x00082c57) cell_vitu2_function_top_wide_pane_cp01

0x8d7f,	// (0x000844c2) wait_bar_pane_cp05_ParamLimits

0xaa46,	// (0x00086189) listscroll_cmail_pane

0xe7aa,	// (0x00089eed) list_cmail_pane

0x9313,	// (0x00084a56) list_cmail_body_pane

0x933a,	// (0x00084a7d) list_single_cmail_header_caption_pane

0x936e,	// (0x00084ab1) list_single_cmail_header_detail_pane_ParamLimits

0x936e,	// (0x00084ab1) list_single_cmail_header_detail_pane

0xe7ba,	// (0x00089efd) list_single_cmail_header_caption_pane_t1

0x19d3,	// (0x0007d116) list_single_cmail_header_detail_pane_g1_ParamLimits

0x19d3,	// (0x0007d116) list_single_cmail_header_detail_pane_g1

0x93a9,	// (0x00084aec) list_single_cmail_header_detail_pane_g2_ParamLimits

0x93a9,	// (0x00084aec) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd80,	// (0x0008b4c3) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd80,	// (0x0008b4c3) list_single_cmail_header_detail_pane_g

0x19e9,	// (0x0007d12c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x19e9,	// (0x0007d12c) list_single_cmail_header_detail_pane_t1

0x1a49,	// (0x0007d18c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1a49,	// (0x0007d18c) list_single_cmail_header_editor_pane_bg

0xe7de,	// (0x00089f21) list_cmail_body_pane_g1

0xe7e7,	// (0x00089f2a) list_cmail_body_pane_t1

0xd623,	// (0x00088d66) list_single_cmail_header_editor_pane_bg_g1

0xab6e,	// (0x000862b1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd633,	// (0x00088d76) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd62b,	// (0x00088d6e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd847,	// (0x00088f8a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd653,	// (0x00088d96) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd643,	// (0x00088d86) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd64b,	// (0x00088d8e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab4e,	// (0x00086291) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93b5,	// (0x00084af8) calenote_gesture_pane_ParamLimits

0x93b5,	// (0x00084af8) calenote_gesture_pane

0x93cf,	// (0x00084b12) calenote_window_pane_ParamLimits

0x93cf,	// (0x00084b12) calenote_window_pane

0xe7f5,	// (0x00089f38) popup_note_window_cp01

0x93e7,	// (0x00084b2a) calenote_swipe_1_pane_ParamLimits

0x93e7,	// (0x00084b2a) calenote_swipe_1_pane

0x9116,	// (0x00084859) calenote_swipe_2_pane_ParamLimits

0x9116,	// (0x00084859) calenote_swipe_2_pane

0xe5ec,	// (0x00089d2f) calenote_swipe_1_pane_g1_ParamLimits

0xe5ec,	// (0x00089d2f) calenote_swipe_1_pane_g1

0xe5f9,	// (0x00089d3c) calenote_swipe_1_pane_g2_ParamLimits

0xe5f9,	// (0x00089d3c) calenote_swipe_1_pane_g2

0x0001,

0xfca4,	// (0x0008b3e7) calenote_swipe_1_pane_g_ParamLimits

0xfca4,	// (0x0008b3e7) calenote_swipe_1_pane_g

0xe807,	// (0x00089f4a) calenote_swipe_1_pane_t1_ParamLimits

0xe807,	// (0x00089f4a) calenote_swipe_1_pane_t1

0xe5ec,	// (0x00089d2f) calenote_swipe_2_pane_g1_ParamLimits

0xe5ec,	// (0x00089d2f) calenote_swipe_2_pane_g1

0xe826,	// (0x00089f69) calenote_swipe_2_pane_g2_ParamLimits

0xe826,	// (0x00089f69) calenote_swipe_2_pane_g2

0x0001,

0xfd8c,	// (0x0008b4cf) calenote_swipe_2_pane_g_ParamLimits

0xfd8c,	// (0x0008b4cf) calenote_swipe_2_pane_g

0xe832,	// (0x00089f75) calenote_swipe_2_pane_t1_ParamLimits

0xe832,	// (0x00089f75) calenote_swipe_2_pane_t1

0x9f8b,	// (0x000856ce) main_mup_navstr_pane

0x6278,	// (0x000819bb) main_mup3_pane_t7_ParamLimits

0x6278,	// (0x000819bb) main_mup3_pane_t7

0x6ca2,	// (0x000823e5) main_mp4_pane_g6_ParamLimits

0x6ca2,	// (0x000823e5) main_mp4_pane_g6

0x7014,	// (0x00082757) main_image3_pane_t4_ParamLimits

0x7014,	// (0x00082757) main_image3_pane_t4

0x93fa,	// (0x00084b3d) popup_navstr_preview_pane_ParamLimits

0x93fa,	// (0x00084b3d) popup_navstr_preview_pane

0x9406,	// (0x00084b49) scroll_navstr_pane_ParamLimits

0x9406,	// (0x00084b49) scroll_navstr_pane

0x9f8b,	// (0x000856ce) bg_popup_preview_window_pane_cp04

0xe859,	// (0x00089f9c) popup_navstr_preview_pane_t1

0x9412,	// (0x00084b55) scroll_navstr_pane_g1_ParamLimits

0x9412,	// (0x00084b55) scroll_navstr_pane_g1

0x941f,	// (0x00084b62) scroll_navstr_pane_t1_ParamLimits

0x941f,	// (0x00084b62) scroll_navstr_pane_t1

0xe7fe,	// (0x00089f41) bg_button_pane_cp014

0xe7fe,	// (0x00089f41) bg_button_pane_cp030

0x13d5,	// (0x0007cb18) list_double_fisheye_pane_g4_ParamLimits

0x13d5,	// (0x0007cb18) list_double_fisheye_pane_g4

0x904e,	// (0x00084791) list_double_fisheye_pane_g5_ParamLimits

0x904e,	// (0x00084791) list_double_fisheye_pane_g5

0xcd82,	// (0x000884c5) sp_fs_scroll_pane_cp03

0xe6df,	// (0x00089e22) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6eb,	// (0x00089e2e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc1,	// (0x0008b404) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6f7,	// (0x00089e3a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7b2,	// (0x00089ef5) sp_fs_scroll_pane_cp02

0xa84d,	// (0x00085f90) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa84d,	// (0x00085f90) popup_sp_fs_calendar_preview_list_single_pane

0x9f8b,	// (0x000856ce) main_cam6_pano_pane

0xaa46,	// (0x00086189) main_mup3_pane_ParamLimits

0x9f8b,	// (0x000856ce) main_phacti_pane

0x8c54,	// (0x00084397) bg_button_pane_cp11

0x8c6c,	// (0x000843af) main_mobtv_info_pane_g2_ParamLimits

0x8c6c,	// (0x000843af) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0008b383) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0008b383) main_mobtv_info_pane_g

0x8e1e,	// (0x00084561) sc_clock_pane_t5_ParamLimits

0x8e1e,	// (0x00084561) sc_clock_pane_t5

0x8ec1,	// (0x00084604) main_radioblah_pane_g1_ParamLimits

0xe538,	// (0x00089c7b) main_radioblah_pane_t3_ParamLimits

0xe538,	// (0x00089c7b) main_radioblah_pane_t3

0xe550,	// (0x00089c93) main_radioblah_pane_t4_ParamLimits

0xe550,	// (0x00089c93) main_radioblah_pane_t4

0x8edf,	// (0x00084622) main_radioblah_text_pane_ParamLimits

0x8edf,	// (0x00084622) main_radioblah_text_pane

0x8eec,	// (0x0008462f) main_radioblah_info_pane_g1_ParamLimits

0x8f81,	// (0x000846c4) main_radioblah_info_pane_t4_ParamLimits

0x8f81,	// (0x000846c4) main_radioblah_info_pane_t4

0xaa46,	// (0x00086189) main_sp_fs_calendar_pane

0x9431,	// (0x00084b74) main_phacti_pane_g1

0x9439,	// (0x00084b7c) phacti_note_pane_ParamLimits

0x9439,	// (0x00084b7c) phacti_note_pane

0xe870,	// (0x00089fb3) phacti_term_pane_ParamLimits

0xe870,	// (0x00089fb3) phacti_term_pane

0xe885,	// (0x00089fc8) phacti_note_pane_t1_ParamLimits

0xe885,	// (0x00089fc8) phacti_note_pane_t1

0x1a60,	// (0x0007d1a3) phacti_term_pane_g1

0x1a68,	// (0x0007d1ab) phacti_term_pane_t1_ParamLimits

0x1a68,	// (0x0007d1ab) phacti_term_pane_t1

0xe89c,	// (0x00089fdf) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a4,	// (0x00089fe7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0b00,	// (0x0007c243) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8ac,	// (0x00089fef) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8ac,	// (0x00089fef) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c2,	// (0x0008a005) aid_popup_sp_fs_bg_corner_pane

0xcbb4,	// (0x000882f7) popup_sp_fs_calendar_preview_bg_pane_g1

0x9f8b,	// (0x000856ce) popup_sp_fs_calendar_preview_bg_pane

0x944f,	// (0x00084b92) popup_sp_fs_calendar_preview_list_pane

0xc7aa,	// (0x00087eed) bg_main_sp_fs_cale_pane_ParamLimits

0xc7aa,	// (0x00087eed) bg_main_sp_fs_cale_pane

0x1a92,	// (0x0007d1d5) listscroll_cale_mrui_pane_ParamLimits

0x1a92,	// (0x0007d1d5) listscroll_cale_mrui_pane

0x1aa7,	// (0x0007d1ea) listscroll_sp_fs_schedule_track_pane

0x1ab0,	// (0x0007d1f3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1ab0,	// (0x0007d1f3) main_sp_fs_ctrlbar_pane_cp01

0xe8ca,	// (0x0008a00d) main_sp_fs_ribbon_pane

0x1ac3,	// (0x0007d206) popup_sp_fs_cale_preview_window

0x94ad,	// (0x00084bf0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94ad,	// (0x00084bf0) list_single_sp_fs_schedule_track_pane

0xe39a,	// (0x00089add) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe39a,	// (0x00089add) bg_sp_fs_highlight_list_pane_cp03

0x94db,	// (0x00084c1e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x94db,	// (0x00084c1e) list_single_sp_fs_schedule_track_pane_g1

0x94e7,	// (0x00084c2a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94e7,	// (0x00084c2a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd96,	// (0x0008b4d9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd96,	// (0x0008b4d9) list_single_sp_fs_schedule_track_pane_g

0x94f3,	// (0x00084c36) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x94f3,	// (0x00084c36) list_single_sp_fs_schedule_track_pane_t1

0x950b,	// (0x00084c4e) sp_fs_schedule_track_pane_ParamLimits

0x950b,	// (0x00084c4e) sp_fs_schedule_track_pane

0xe8d2,	// (0x0008a015) sp_fs_schedule_track_pane_g1

0xe8da,	// (0x0008a01d) sp_fs_schedule_track_pane_g2

0xe8e2,	// (0x0008a025) sp_fs_schedule_track_pane_g3

0xe8ea,	// (0x0008a02d) sp_fs_schedule_track_pane_g4

0xe8f2,	// (0x0008a035) sp_fs_schedule_track_pane_g5

0x0004,

0x0b0a,	// (0x0007c24d) sp_fs_schedule_track_pane_g

0xd623,	// (0x00088d66) bg_sp_fs_schedule_viewer_highlight_g1

0xab6e,	// (0x000862b1) bg_sp_fs_schedule_viewer_highlight_g2

0xd62b,	// (0x00088d6e) bg_sp_fs_schedule_viewer_highlight_g3

0xd633,	// (0x00088d76) bg_sp_fs_schedule_viewer_highlight_g4

0xd847,	// (0x00088f8a) bg_sp_fs_schedule_viewer_highlight_g5

0xd643,	// (0x00088d86) bg_sp_fs_schedule_viewer_highlight_g6

0xd64b,	// (0x00088d8e) bg_sp_fs_schedule_viewer_highlight_g7

0xd653,	// (0x00088d96) bg_sp_fs_schedule_viewer_highlight_g8

0xab4e,	// (0x00086291) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd9b,	// (0x0008b4de) bg_sp_fs_schedule_viewer_highlight_g

0x9f8b,	// (0x000856ce) bg_main_sp_fs_ribbon_pane

0x951b,	// (0x00084c5e) main_sp_fs_ribbon_pane_g1

0xe8fa,	// (0x0008a03d) main_sp_fs_ribbon_pane_t1

0x9524,	// (0x00084c67) main_sp_fs_ribbon_pane_t2

0xe909,	// (0x0008a04c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdae,	// (0x0008b4f1) main_sp_fs_ribbon_pane_t

0xe918,	// (0x0008a05b) main_sp_fs_ribbon_scheduler_pane

0xe920,	// (0x0008a063) bg_main_sp_fs_ribbon_pane_g1

0xe929,	// (0x0008a06c) bg_main_sp_fs_ribbon_pane_g2

0xe932,	// (0x0008a075) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0b2f,	// (0x0007c272) bg_main_sp_fs_ribbon_pane_g

0xe93a,	// (0x0008a07d) main_sp_fs_ribbon_scheduler_pane_g1

0xe943,	// (0x0008a086) main_sp_fs_ribbon_scheduler_pane_g2

0xe94c,	// (0x0008a08f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0b36,	// (0x0007c279) main_sp_fs_ribbon_scheduler_pane_g

0xe955,	// (0x0008a098) list_cale_mrui_pane

0x9535,	// (0x00084c78) sp_fs_scroll_pane_cp07_ParamLimits

0x9535,	// (0x00084c78) sp_fs_scroll_pane_cp07

0x9551,	// (0x00084c94) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9551,	// (0x00084c94) bg_sp_fs_schedule_viewer_highlight

0xe962,	// (0x0008a0a5) list_single_sp_fs_schedule_track_pane_cp01

0xe96a,	// (0x0008a0ad) list_sp_fs_schedule_track_pane

0xe972,	// (0x0008a0b5) sp_fs_scroll_pane_cp06_ParamLimits

0xe972,	// (0x0008a0b5) sp_fs_scroll_pane_cp06

0xcbb4,	// (0x000882f7) bgmain_sp_fs_calendar_pane_g1

0x1ad5,	// (0x0007d218) list_single_cale_mrui_pane_ParamLimits

0x1ad5,	// (0x0007d218) list_single_cale_mrui_pane

0x1b06,	// (0x0007d249) list_single_cale_mrui_row_pane_ParamLimits

0x1b06,	// (0x0007d249) list_single_cale_mrui_row_pane

0x1b13,	// (0x0007d256) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1b13,	// (0x0007d256) list_single_cale_mrui_row_pane_g1

0x1b4b,	// (0x0007d28e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1b4b,	// (0x0007d28e) list_single_cale_mrui_row_pane_t1

0x1b5d,	// (0x0007d2a0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1b5d,	// (0x0007d2a0) list_single_cale_mrui_row_pane_t2

0x1bc3,	// (0x0007d306) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1bc3,	// (0x0007d306) list_single_cale_mrui_row_pane_t3

0x1bf2,	// (0x0007d335) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1bf2,	// (0x0007d335) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdbc,	// (0x0008b4ff) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdbc,	// (0x0008b4ff) list_single_cale_mrui_row_pane_t

0x1c21,	// (0x0007d364) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1c21,	// (0x0007d364) list_single_cmail_header_editor_pane_bg_cp01

0x1c43,	// (0x0007d386) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1c43,	// (0x0007d386) list_single_cmail_header_editor_pane_bg_cp02

0x955e,	// (0x00084ca1) main_radioblah_text_pane_t1_ParamLimits

0x955e,	// (0x00084ca1) main_radioblah_text_pane_t1

0xe991,	// (0x0008a0d4) cam6_indi_pane_cp01

0xe999,	// (0x0008a0dc) cam6_mode_pane_cp01

0xe9a1,	// (0x0008a0e4) cam6_pano_pane

0xe9aa,	// (0x0008a0ed) cam6_zoom_pane_cp01

0xe9b2,	// (0x0008a0f5) cam6_pano_image_pane

0xe9bd,	// (0x0008a100) cam6_pano_pane_g1

0xe28d,	// (0x000899d0) cam6_pano_pane_g2

0xe9c6,	// (0x0008a109) cam6_pano_pane_g3

0xe9cf,	// (0x0008a112) cam6_pano_pane_g4

0xd17e,	// (0x000888c1) cam6_pano_pane_g5

0xe9d8,	// (0x0008a11b) cam6_pano_pane_g6

0xe9e2,	// (0x0008a125) cam6_pano_pane_g7

0xe9ea,	// (0x0008a12d) cam6_pano_pane_g8

0xe9f3,	// (0x0008a136) cam6_pano_pane_g9

0x0008,

0xfdc5,	// (0x0008b508) cam6_pano_pane_g

0x9f8b,	// (0x000856ce) main_browser_tag_pane

0xe851,	// (0x00089f94) grid_navstr_albumart_pane

0xe9fe,	// (0x0008a141) cell_navstr_albumart_pane_ParamLimits

0xe9fe,	// (0x0008a141) cell_navstr_albumart_pane

0xb500,	// (0x00086c43) cell_navstr_albumart_pane_g1

0xc5bb,	// (0x00087cfe) cell_navstr_albumart_pane_g2

0xc5cb,	// (0x00087d0e) cell_navstr_albumart_pane_g3

0xc5c3,	// (0x00087d06) cell_navstr_albumart_pane_g4

0x0003,

0xfdd8,	// (0x0008b51b) cell_navstr_albumart_pane_g

0x9579,	// (0x00084cbc) bt_list_pane_ParamLimits

0x9579,	// (0x00084cbc) bt_list_pane

0xea20,	// (0x0008a163) bt_list_pane_t1

0xea2f,	// (0x0008a172) bt_list_pane_t2

0x0001,

0x0b69,	// (0x0007c2ac) bt_list_pane_t

0x9f8b,	// (0x000856ce) main_cale_prevew_pane

0x959d,	// (0x00084ce0) popup_cale_preview_window_ParamLimits

0x959d,	// (0x00084ce0) popup_cale_preview_window

0xaa46,	// (0x00086189) bg_popup_preview_window_pane_cp05_ParamLimits

0xaa46,	// (0x00086189) bg_popup_preview_window_pane_cp05

0xea3e,	// (0x0008a181) list_cale_preview_pane_ParamLimits

0xea3e,	// (0x0008a181) list_cale_preview_pane

0xea4a,	// (0x0008a18d) list_double_cale_preview_pane_ParamLimits

0xea4a,	// (0x0008a18d) list_double_cale_preview_pane

0xea5c,	// (0x0008a19f) list_single_cale_preview_pane_ParamLimits

0xea5c,	// (0x0008a19f) list_single_cale_preview_pane

0xea70,	// (0x0008a1b3) list_single_cale_preview_pane_g1

0xea78,	// (0x0008a1bb) list_single_cale_preview_pane_t1_ParamLimits

0xea78,	// (0x0008a1bb) list_single_cale_preview_pane_t1

0xea8d,	// (0x0008a1d0) list_double_cale_preview_pane_g1

0xea95,	// (0x0008a1d8) list_double_cale_preview_pane_t1_ParamLimits

0xea95,	// (0x0008a1d8) list_double_cale_preview_pane_t1

0xeaaa,	// (0x0008a1ed) list_double_cale_preview_pane_t2_ParamLimits

0xeaaa,	// (0x0008a1ed) list_double_cale_preview_pane_t2

0x0001,

0x0b6e,	// (0x0007c2b1) list_double_cale_preview_pane_t_ParamLimits

0x0b6e,	// (0x0007c2b1) list_double_cale_preview_pane_t

0x9f8b,	// (0x000856ce) main_ezdial_pane

0xaa46,	// (0x00086189) main_sp_fs_email_pane_ParamLimits

0x9138,	// (0x0008487b) cmail_ddmenu_btn01_pane_ParamLimits

0x9138,	// (0x0008487b) cmail_ddmenu_btn01_pane

0x9155,	// (0x00084898) cmail_ddmenu_btn02_pane_ParamLimits

0x9155,	// (0x00084898) cmail_ddmenu_btn02_pane

0x9173,	// (0x000848b6) cmail_ddmenu_btn03_pane_ParamLimits

0x9173,	// (0x000848b6) cmail_ddmenu_btn03_pane

0x91a1,	// (0x000848e4) main_sp_fs_ctrlbar_pane_ParamLimits

0x91b7,	// (0x000848fa) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9313,	// (0x00084a56) list_cmail_body_pane_ParamLimits

0xe7c8,	// (0x00089f0b) bg_button_pane_cp12

0xe7d1,	// (0x00089f14) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d1,	// (0x00089f14) list_single_cmail_header_detail_pane_g3

0x1a25,	// (0x0007d168) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1a25,	// (0x0007d168) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd87,	// (0x0008b4ca) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd87,	// (0x0008b4ca) list_single_cmail_header_detail_pane_t

0x1a7d,	// (0x0007d1c0) phacti_term_pane_t2_ParamLimits

0x1a7d,	// (0x0007d1c0) phacti_term_pane_t2

0x0001,

0xfd91,	// (0x0008b4d4) phacti_term_pane_t_ParamLimits

0xfd91,	// (0x0008b4d4) phacti_term_pane_t

0xeac2,	// (0x0008a205) aid_size_list_single_double

0x95b4,	// (0x00084cf7) popup_ezdial_listscroll_window

0x95d7,	// (0x00084d1a) popup_number_entry_window_cp01

0xb39f,	// (0x00086ae2) bg_popup_call_pane_cp09

0xeace,	// (0x0008a211) ezdial_list_pane

0xead6,	// (0x0008a219) scroll_pane_cp23

0xc997,	// (0x000880da) bg_button_pane_cp028_ParamLimits

0xc997,	// (0x000880da) bg_button_pane_cp028

0x95e5,	// (0x00084d28) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x95e5,	// (0x00084d28) cmail_ddmenu_btn01_pane_g1

0x95f7,	// (0x00084d3a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x95f7,	// (0x00084d3a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfde1,	// (0x0008b524) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfde1,	// (0x0008b524) cmail_ddmenu_btn01_pane_g

0xeade,	// (0x0008a221) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeade,	// (0x0008a221) cmail_ddmenu_btn01_pane_t1

0xc7aa,	// (0x00087eed) bg_button_pane_cp029_ParamLimits

0xc7aa,	// (0x00087eed) bg_button_pane_cp029

0x9603,	// (0x00084d46) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9603,	// (0x00084d46) cmail_ddmenu_btn02_pane_g1

0x961b,	// (0x00084d5e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x961b,	// (0x00084d5e) cmail_ddmenu_btn02_pane_t1

0xe39a,	// (0x00089add) bg_button_pane_cp031_ParamLimits

0xe39a,	// (0x00089add) bg_button_pane_cp031

0x9603,	// (0x00084d46) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9603,	// (0x00084d46) cmail_ddmenu_btn03_pane_g1

0x961b,	// (0x00084d5e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x961b,	// (0x00084d5e) cmail_ddmenu_btn03_pane_t1

0x6ebf,	// (0x00082602) cell_dialer2_keypad_pane_t1_ParamLimits

0x6ed9,	// (0x0008261c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6ed9,	// (0x0008261c) cell_dialer2_keypad_pane_t1_copy1

0x8ad9,	// (0x0008421c) ncimui_group_button_pane

0xaa46,	// (0x00086189) main_sp_fs_calendar_pane_ParamLimits

0x933a,	// (0x00084a7d) list_single_cmail_header_caption_pane_ParamLimits

0x9475,	// (0x00084bb8) aid_recal_txt_sm_pane

0x9f8b,	// (0x000856ce) mian_recal_day_pane

0x1ac3,	// (0x0007d206) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf3,	// (0x0008a236) list_recal_day_pane

0x1c7a,	// (0x0007d3bd) list_single_recal_day_pane_ParamLimits

0x1c7a,	// (0x0007d3bd) list_single_recal_day_pane

0xeb1a,	// (0x0008a25d) list_single_recal_day_pane_g1_ParamLimits

0xeb1a,	// (0x0008a25d) list_single_recal_day_pane_g1

0x1c8c,	// (0x0007d3cf) list_single_recal_day_pane_g2_ParamLimits

0x1c8c,	// (0x0007d3cf) list_single_recal_day_pane_g2

0x1c9c,	// (0x0007d3df) list_single_recal_day_pane_g3_ParamLimits

0x1c9c,	// (0x0007d3df) list_single_recal_day_pane_g3

0x1ca8,	// (0x0007d3eb) list_single_recal_day_pane_g4_ParamLimits

0x1ca8,	// (0x0007d3eb) list_single_recal_day_pane_g4

0x1cbe,	// (0x0007d401) list_single_recal_day_pane_g5_ParamLimits

0x1cbe,	// (0x0007d401) list_single_recal_day_pane_g5

0x1cd8,	// (0x0007d41b) list_single_recal_day_pane_g6_ParamLimits

0x1cd8,	// (0x0007d41b) list_single_recal_day_pane_g6

0x0004,

0xfdf0,	// (0x0008b533) list_single_recal_day_pane_g_ParamLimits

0xfdf0,	// (0x0008b533) list_single_recal_day_pane_g

0x1cec,	// (0x0007d42f) list_single_recal_day_pane_t1

0x1cfe,	// (0x0007d441) list_single_recal_day_pane_t2

0x0001,

0xfdfb,	// (0x0008b53e) list_single_recal_day_pane_t

0x963f,	// (0x00084d82) ncimui_query_button_pane_ParamLimits

0x963f,	// (0x00084d82) ncimui_query_button_pane

0x964f,	// (0x00084d92) ncimui_query_button_pane_t1_ParamLimits

0x964f,	// (0x00084d92) ncimui_query_button_pane_t1

0xeb26,	// (0x0008a269) ncimui_query_button_pane_t2_ParamLimits

0xeb26,	// (0x0008a269) ncimui_query_button_pane_t2

0x0001,

0xfe00,	// (0x0008b543) ncimui_query_button_pane_t_ParamLimits

0xfe00,	// (0x0008b543) ncimui_query_button_pane_t

0x9662,	// (0x00084da5) query_button_pane_ParamLimits

0x9662,	// (0x00084da5) query_button_pane

0x9f8b,	// (0x000856ce) bg_button_pane_cp0028

0xeb39,	// (0x0008a27c) query_button_pane_t1

0x524a,	// (0x0008098d) main_tport_pane_ParamLimits

0x921c,	// (0x0008495f) bg_popup_window_pane_cp01_ParamLimits

0x921c,	// (0x0008495f) bg_popup_window_pane_cp01

0x922a,	// (0x0008496d) heading_pane_cp08_ParamLimits

0x922a,	// (0x0008496d) heading_pane_cp08

0x9238,	// (0x0008497b) heading_pane_cp07_ParamLimits

0x9238,	// (0x0008497b) heading_pane_cp07

0x92a7,	// (0x000849ea) cell_tport_appsw_pane_g2

0x0002,

0xfd74,	// (0x0008b4b7) cell_tport_appsw_pane_g

0x0ef7,	// (0x0007c63a) input_candi_list_open_g1

0xad39,	// (0x0008647c) list_cale_time_pane_g6_ParamLimits

0xad39,	// (0x0008647c) list_cale_time_pane_g6

0x5cd2,	// (0x00081415) aid_size_touch_calib_1_ParamLimits

0x5cd2,	// (0x00081415) aid_size_touch_calib_1

0x5cde,	// (0x00081421) aid_size_touch_calib_2_ParamLimits

0x5cde,	// (0x00081421) aid_size_touch_calib_2

0x5cec,	// (0x0008142f) aid_size_touch_calib_3_ParamLimits

0x5cec,	// (0x0008142f) aid_size_touch_calib_3

0x5cfc,	// (0x0008143f) aid_size_touch_calib_4_ParamLimits

0x5cfc,	// (0x0008143f) aid_size_touch_calib_4

0x5d0a,	// (0x0008144d) main_touch_calib_button_group_pane_ParamLimits

0x5d0a,	// (0x0008144d) main_touch_calib_button_group_pane

0x5d18,	// (0x0008145b) main_touch_calib_pane_g1_ParamLimits

0x5d24,	// (0x00081467) main_touch_calib_pane_g2_ParamLimits

0x5d30,	// (0x00081473) main_touch_calib_pane_g3_ParamLimits

0x5d3c,	// (0x0008147f) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0008ae94) main_touch_calib_pane_g_ParamLimits

0x5d48,	// (0x0008148b) main_touch_calib_pane_t1_ParamLimits

0x5d61,	// (0x000814a4) main_touch_calib_pane_t2_ParamLimits

0x5d7a,	// (0x000814bd) main_touch_calib_pane_t3_ParamLimits

0x5d90,	// (0x000814d3) main_touch_calib_pane_t4_ParamLimits

0x5da6,	// (0x000814e9) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0008ae9d) main_touch_calib_pane_t_ParamLimits

0xcf20,	// (0x00088663) list_single_fp_cale_pane_g3_ParamLimits

0xcf20,	// (0x00088663) list_single_fp_cale_pane_g3

0xaa46,	// (0x00086189) bg_button_pane_cp012_ParamLimits

0xaa46,	// (0x00086189) bg_vkb2_func_pane_cp03_ParamLimits

0x7c9a,	// (0x000833dd) cell_vitu2_function_top_pane_g1_ParamLimits

0xaa46,	// (0x00086189) bg_vkb2_func_pane_cp04_ParamLimits

0x8a61,	// (0x000841a4) main_ncimui_button_group_pane_ParamLimits

0x8a61,	// (0x000841a4) main_ncimui_button_group_pane

0x8ac7,	// (0x0008420a) main_ncimui_pane_t3_ParamLimits

0x8ac7,	// (0x0008420a) main_ncimui_pane_t3

0xe867,	// (0x00089faa) phacti_button_group_pane

0xeac2,	// (0x0008a205) aid_size_list_single_double_ParamLimits

0x95b4,	// (0x00084cf7) popup_ezdial_listscroll_window_ParamLimits

0x95d7,	// (0x00084d1a) popup_number_entry_window_cp01_ParamLimits

0x966f,	// (0x00084db2) phacti_button_pane_ParamLimits

0x966f,	// (0x00084db2) phacti_button_pane

0x9f8b,	// (0x000856ce) bg_button_pane_cp14

0xeb47,	// (0x0008a28a) phacti_button_pane_t1

0x9680,	// (0x00084dc3) main_touch_calib_button_pane_ParamLimits

0x9680,	// (0x00084dc3) main_touch_calib_button_pane

0xa6e7,	// (0x00085e2a) bg_button_pane_cp18_ParamLimits

0xa6e7,	// (0x00085e2a) bg_button_pane_cp18

0xeb55,	// (0x0008a298) main_touch_calib_button_pane_t1_ParamLimits

0xeb55,	// (0x0008a298) main_touch_calib_button_pane_t1

0xeb6b,	// (0x0008a2ae) main_touch_calib_button_pane_t2_ParamLimits

0xeb6b,	// (0x0008a2ae) main_touch_calib_button_pane_t2

0x0001,

0x0b97,	// (0x0007c2da) main_touch_calib_button_pane_t_ParamLimits

0x0b97,	// (0x0007c2da) main_touch_calib_button_pane_t

0x9f8b,	// (0x000856ce) cell_ncimui_button_pane

0x9f8b,	// (0x000856ce) bg_button_pane_cp032

0xeb89,	// (0x0008a2cc) cell_ncimui_button_pane_t1

0x6f35,	// (0x00082678) image3_infobar_pane_ParamLimits

0x6f35,	// (0x00082678) image3_infobar_pane

0x8e40,	// (0x00084583) fs_bigclock_status_pane_ParamLimits

0x8e40,	// (0x00084583) fs_bigclock_status_pane

0x8e4d,	// (0x00084590) main_fs_bigclock_clock_pane_ParamLimits

0x8e4d,	// (0x00084590) main_fs_bigclock_clock_pane

0x8e67,	// (0x000845aa) main_fs_bigclock_indi_pane_ParamLimits

0x8e67,	// (0x000845aa) main_fs_bigclock_indi_pane

0x8e8f,	// (0x000845d2) main_fs_bigclock_swipe_pane_ParamLimits

0x8e8f,	// (0x000845d2) main_fs_bigclock_swipe_pane

0x9f8b,	// (0x000856ce) main_fs_clock_dumped_data

0xe3a8,	// (0x00089aeb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3a8,	// (0x00089aeb) list_single_fs_bigclock_indicator_pane_g1

0xe3c4,	// (0x00089b07) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3c4,	// (0x00089b07) list_single_fs_bigclock_indicator_pane_g2

0xe3de,	// (0x00089b21) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3de,	// (0x00089b21) list_single_fs_bigclock_indicator_pane_g3

0xe3f8,	// (0x00089b3b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3f8,	// (0x00089b3b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x09bf,	// (0x0007c102) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x09bf,	// (0x0007c102) list_single_fs_bigclock_indicator_pane_g

0xe423,	// (0x00089b66) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe423,	// (0x00089b66) list_single_fs_bigclock_indicator_pane_t1

0xe44b,	// (0x00089b8e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe44b,	// (0x00089b8e) list_single_fs_bigclock_indicator_pane_t2

0xe473,	// (0x00089bb6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe473,	// (0x00089bb6) list_single_fs_bigclock_indicator_pane_t3

0xe49b,	// (0x00089bde) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe49b,	// (0x00089bde) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x09ca,	// (0x0007c10d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x09ca,	// (0x0007c10d) list_single_fs_bigclock_indicator_pane_t

0xeb97,	// (0x0008a2da) image3_infobar_fav_pane_ParamLimits

0xeb97,	// (0x0008a2da) image3_infobar_fav_pane

0xeba7,	// (0x0008a2ea) image3_infobar_loc_pane_ParamLimits

0xeba7,	// (0x0008a2ea) image3_infobar_loc_pane

0xebbb,	// (0x0008a2fe) image3_infobar_time_pane_ParamLimits

0xebbb,	// (0x0008a2fe) image3_infobar_time_pane

0xcbb4,	// (0x000882f7) image3_infobar_time_pane_g1

0xebcb,	// (0x0008a30e) image3_infobar_time_pane_t1

0xcbb4,	// (0x000882f7) image3_infobar_loc_pane_g1

0xebd9,	// (0x0008a31c) image3_infobar_loc_pane_g2

0x0001,

0xfe05,	// (0x0008b548) image3_infobar_loc_pane_g

0xebe1,	// (0x0008a324) image3_infobar_loc_pane_t1

0xcbb4,	// (0x000882f7) image3_infobar_fav_pane_g1

0xebef,	// (0x0008a332) image3_infobar_fav_pane_g2

0x0001,

0xfe0a,	// (0x0008b54d) image3_infobar_fav_pane_g

0xebf7,	// (0x0008a33a) fs_bigclock_status_battery_pane

0xec00,	// (0x0008a343) fs_bigclock_status_signal_pane

0xec09,	// (0x0008a34c) fs_bigclock_status_title_pane

0xec12,	// (0x0008a355) fs_bigclock_status_signal_pane_g1

0xec1b,	// (0x0008a35e) fs_bigclock_status_signal_pane_g2

0x0001,

0x0ba6,	// (0x0007c2e9) fs_bigclock_status_signal_pane_g

0xec23,	// (0x0008a366) fs_bigclock_status_battery_pane_g1

0xec2c,	// (0x0008a36f) fs_bigclock_status_battery_pane_g2

0x0001,

0x0bab,	// (0x0007c2ee) fs_bigclock_status_battery_pane_g

0xec34,	// (0x0008a377) fs_bigclock_status_title_pane_t1

0xcbb4,	// (0x000882f7) main_fs_bigclock_clock_pane_g1

0xec42,	// (0x0008a385) main_fs_bigclock_clock_pane_g2

0xec4b,	// (0x0008a38e) main_fs_bigclock_clock_pane_g3

0xec4b,	// (0x0008a38e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe0f,	// (0x0008b552) main_fs_bigclock_clock_pane_g

0xec53,	// (0x0008a396) main_fs_bigclock_clock_pane_t1

0x9690,	// (0x00084dd3) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe18,	// (0x0008b55b) main_fs_bigclock_clock_pane_t

0xec61,	// (0x0008a3a4) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec61,	// (0x0008a3a4) list_single_fs_bigclock_indicator_pane

0xec72,	// (0x0008a3b5) list_single_fs_bigclock_pane_ParamLimits

0xec72,	// (0x0008a3b5) list_single_fs_bigclock_pane

0xec98,	// (0x0008a3db) main_fs_bigclock_indicator_pane_t1

0xeca7,	// (0x0008a3ea) list_single_fs_bigclock_pane_g1

0xecaf,	// (0x0008a3f2) list_single_fs_bigclock_pane_t1

0xcbb4,	// (0x000882f7) main_fs_bigclock_swipe_pane_g1

0xecf2,	// (0x0008a435) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe24,	// (0x0008b567) main_fs_bigclock_swipe_pane_g

0xecfa,	// (0x0008a43d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfa,	// (0x0008a43d) main_fs_bigclock_swipe_pane_t1

0x42ea,	// (0x0007fa2d) call_type_pane_ParamLimits

0x9f8b,	// (0x000856ce) main_btmg_pane

0x1b3f,	// (0x0007d282) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1b3f,	// (0x0007d282) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdb5,	// (0x0008b4f8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdb5,	// (0x0008b4f8) list_single_cale_mrui_row_pane_g

0x1c69,	// (0x0007d3ac) list_recal_vselct_arw_lo_pane

0xeb12,	// (0x0008a255) list_recal_vselct_arw_up_pane

0x1c71,	// (0x0007d3b4) list_recal_vselct_pane

0x96e1,	// (0x00084e24) btmg_button_pane

0x96ed,	// (0x00084e30) main_btmg_pane_g1

0x9f8b,	// (0x000856ce) bg_button_pane_cp044

0xed17,	// (0x0008a45a) btmg_button_pane_t1

0xc796,	// (0x00087ed9) aid_listscroll_gen

0xaa46,	// (0x00086189) main_cntbar_detail_pane

0xe7aa,	// (0x00089eed) list_cmail_folder_pane

0xcd82,	// (0x000884c5) sp_fs_scroll_pane_cp03_ParamLimits

0x1d10,	// (0x0007d453) list_single_fs_dyc_pane_cp01_ParamLimits

0x1d10,	// (0x0007d453) list_single_fs_dyc_pane_cp01

0xed25,	// (0x0008a468) aid_size_cmail_indent

0x1d40,	// (0x0007d483) list_single_dyc_row_pane_cp01

0x9715,	// (0x00084e58) cntbar_detail_list_pane_ParamLimits

0x9715,	// (0x00084e58) cntbar_detail_list_pane

0x974f,	// (0x00084e92) main_cntbar_detail_cont_pane_ParamLimits

0x974f,	// (0x00084e92) main_cntbar_detail_cont_pane

0x42de,	// (0x0007fa21) scroll_pane_cp032_ParamLimits

0x42de,	// (0x0007fa21) scroll_pane_cp032

0x975b,	// (0x00084e9e) cntbar_detail_list_event_pane_ParamLimits

0x975b,	// (0x00084e9e) cntbar_detail_list_event_pane

0x9721,	// (0x00084e64) cntbar_detail_list_shct_pane

0xabbc,	// (0x000862ff) aid_list_gen

0xed2e,	// (0x0008a471) aid_scroll

0xed37,	// (0x0008a47a) aid_size_touch_scroll_bar

0x82d1,	// (0x00083a14) aid_list_double

0xdb91,	// (0x000892d4) aid_list_single

0x82bf,	// (0x00083a02) aid_list_single_lg

0x1d49,	// (0x0007d48c) aid_list_z_g_a_sm

0x976f,	// (0x00084eb2) aid_list_z_g_d

0x1d51,	// (0x0007d494) aid_txt_z_prm

0x1d5f,	// (0x0007d4a2) aid_txt_z_prm_cp01

0x1d6d,	// (0x0007d4b0) aid_txt_z_sec

0x9777,	// (0x00084eba) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9777,	// (0x00084eba) main_cntbar_detail_cont_pane_g1

0x9784,	// (0x00084ec7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9784,	// (0x00084ec7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe29,	// (0x0008b56c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe29,	// (0x0008b56c) main_cntbar_detail_cont_pane_g

0xed40,	// (0x0008a483) main_cntbar_detail_cont_pane_t1

0xed4e,	// (0x0008a491) main_cntbar_detail_cont_pane_t2

0xed5c,	// (0x0008a49f) main_cntbar_detail_cont_pane_t3

0x0002,

0x0bd4,	// (0x0007c317) main_cntbar_detail_cont_pane_t

0x9790,	// (0x00084ed3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9790,	// (0x00084ed3) cell_cntbar_detail_list_shct_pane

0xed6a,	// (0x0008a4ad) cntbar_detail_list_shct_pane_g1

0xed73,	// (0x0008a4b6) cntbar_detail_list_shct_pane_g2

0x0001,

0x0bdb,	// (0x0007c31e) cntbar_detail_list_shct_pane_g

0x97a4,	// (0x00084ee7) cntbar_detail_list_event_pane_g1_ParamLimits

0x97a4,	// (0x00084ee7) cntbar_detail_list_event_pane_g1

0x97b0,	// (0x00084ef3) cntbar_detail_list_event_pane_g2_ParamLimits

0x97b0,	// (0x00084ef3) cntbar_detail_list_event_pane_g2

0x0005,

0xfe2e,	// (0x0008b571) cntbar_detail_list_event_pane_g_ParamLimits

0xfe2e,	// (0x0008b571) cntbar_detail_list_event_pane_g

0x981c,	// (0x00084f5f) cntbar_detail_list_event_pane_t1_ParamLimits

0x981c,	// (0x00084f5f) cntbar_detail_list_event_pane_t1

0x9831,	// (0x00084f74) cntbar_detail_list_event_pane_t2_ParamLimits

0x9831,	// (0x00084f74) cntbar_detail_list_event_pane_t2

0x0002,

0xfe3b,	// (0x0008b57e) cntbar_detail_list_event_pane_t_ParamLimits

0xfe3b,	// (0x0008b57e) cntbar_detail_list_event_pane_t

0xcbb4,	// (0x000882f7) cell_cntbar_detail_list_shct_pane_g1

0xb357,	// (0x00086a9a) navi_pane_mv_g3

0xaa46,	// (0x00086189) main_cntbar_detail_pane_ParamLimits

0x9f8b,	// (0x000856ce) main_notif_wgt_pane

0x6be9,	// (0x0008232c) aid_tch_main_mp4_pane_g4

0x6e1e,	// (0x00082561) popup_slider_window_cp02

0x1c5f,	// (0x0007d3a2) list_recal_day_event_pane

0x96f5,	// (0x00084e38) cntbar_detail_btn_pane_ParamLimits

0x96f5,	// (0x00084e38) cntbar_detail_btn_pane

0x9705,	// (0x00084e48) cntbar_detail_btn_pane_cp01_ParamLimits

0x9705,	// (0x00084e48) cntbar_detail_btn_pane_cp01

0x9721,	// (0x00084e64) cntbar_detail_list_shct_pane_ParamLimits

0x972d,	// (0x00084e70) cntbar_detail_pane_g1_ParamLimits

0x972d,	// (0x00084e70) cntbar_detail_pane_g1

0x9739,	// (0x00084e7c) cntbar_detail_pane_t1_ParamLimits

0x9739,	// (0x00084e7c) cntbar_detail_pane_t1

0x97bc,	// (0x00084eff) cntbar_detail_list_event_pane_g3_ParamLimits

0x97bc,	// (0x00084eff) cntbar_detail_list_event_pane_g3

0x97d4,	// (0x00084f17) cntbar_detail_list_event_pane_g4_ParamLimits

0x97d4,	// (0x00084f17) cntbar_detail_list_event_pane_g4

0x97ec,	// (0x00084f2f) cntbar_detail_list_event_pane_g5_ParamLimits

0x97ec,	// (0x00084f2f) cntbar_detail_list_event_pane_g5

0x9804,	// (0x00084f47) cntbar_detail_list_event_pane_g6_ParamLimits

0x9804,	// (0x00084f47) cntbar_detail_list_event_pane_g6

0x9846,	// (0x00084f89) cntbar_detail_list_event_pane_t3_ParamLimits

0x9846,	// (0x00084f89) cntbar_detail_list_event_pane_t3

0x9858,	// (0x00084f9b) popup_notif_wgt_window_ParamLimits

0x9858,	// (0x00084f9b) popup_notif_wgt_window

0x9868,	// (0x00084fab) popup_submenu_window_cp01_ParamLimits

0x9868,	// (0x00084fab) popup_submenu_window_cp01

0xb39f,	// (0x00086ae2) bg_popup_window_pane_cp10

0xed7c,	// (0x0008a4bf) listscroll_notif_wgt_pane

0xed8d,	// (0x0008a4d0) list_notif_wgt_window

0xed96,	// (0x0008a4d9) scroll_pane_cp033

0x9876,	// (0x00084fb9) list_notif_wgt_row_pane_ParamLimits

0x9876,	// (0x00084fb9) list_notif_wgt_row_pane

0xed9f,	// (0x0008a4e2) aid_size_list_notif_wgt_del

0xedac,	// (0x0008a4ef) list_notif_wgt_row_pane_g1

0xedb8,	// (0x0008a4fb) list_notif_wgt_row_pane_g2

0xedcc,	// (0x0008a50f) list_notif_wgt_row_pane_g3

0x0002,

0x0bf4,	// (0x0007c337) list_notif_wgt_row_pane_g

0xedd9,	// (0x0008a51c) list_notif_wgt_row_pane_t1

0xedef,	// (0x0008a532) list_notif_wgt_row_pane_t2

0xee01,	// (0x0008a544) list_notif_wgt_row_pane_t3

0x0002,

0x0bfb,	// (0x0007c33e) list_notif_wgt_row_pane_t

0xd84f,	// (0x00088f92) list_recal_day_event_pane_g1

0xee13,	// (0x0008a556) list_recal_day_event_pane_t1

0x9f8b,	// (0x000856ce) bg_button_pane_cp045

0xee22,	// (0x0008a565) cntbar_detail_btn_pane_t1

0xc7aa,	// (0x00087eed) main_callh_pane_ParamLimits

0xc7aa,	// (0x00087eed) main_callh_pane

0x9f8b,	// (0x000856ce) main_coverflow0_pane

0x9f8b,	// (0x000856ce) main_wgtman_pane

0x8ea7,	// (0x000845ea) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8ea7,	// (0x000845ea) main_fs_bigclock_unlock_btn_pane

0x929f,	// (0x000849e2) bg_button_pane_cp16

0x92af,	// (0x000849f2) cell_tport_appsw_pane_g3

0x9888,	// (0x00084fcb) cf0_flow_pane_ParamLimits

0x9888,	// (0x00084fcb) cf0_flow_pane

0xee30,	// (0x0008a573) listscroll_cf0_pane

0xee3b,	// (0x0008a57e) main_cf0_pane_g1

0x9897,	// (0x00084fda) main_cf0_pane_t1_ParamLimits

0x9897,	// (0x00084fda) main_cf0_pane_t1

0x98ab,	// (0x00084fee) main_cf0_pane_t2_ParamLimits

0x98ab,	// (0x00084fee) main_cf0_pane_t2

0x0001,

0xfe42,	// (0x0008b585) main_cf0_pane_t_ParamLimits

0xfe42,	// (0x0008b585) main_cf0_pane_t

0xee4d,	// (0x0008a590) scroll_pane_cp11

0x98bf,	// (0x00085002) cf0_flow_pane_g1

0x98c7,	// (0x0008500a) cf0_flow_pane_g2

0x0001,

0xfe47,	// (0x0008b58a) cf0_flow_pane_g

0x98cf,	// (0x00085012) cf0_flow_pane_t1

0x9f8b,	// (0x000856ce) main_call6_pane

0x9f8b,	// (0x000856ce) main_calllock_pane

0x98dd,	// (0x00085020) call6_btn_grp_pane_ParamLimits

0x98dd,	// (0x00085020) call6_btn_grp_pane

0x98ec,	// (0x0008502f) call6_pane_g1_ParamLimits

0x98ec,	// (0x0008502f) call6_pane_g1

0x98fb,	// (0x0008503e) popup_call6_1st_window_ParamLimits

0x98fb,	// (0x0008503e) popup_call6_1st_window

0x9909,	// (0x0008504c) popup_call6_2nd_window_ParamLimits

0x9909,	// (0x0008504c) popup_call6_2nd_window

0x9917,	// (0x0008505a) cell_call6_btn_pane_ParamLimits

0x9917,	// (0x0008505a) cell_call6_btn_pane

0xb39f,	// (0x00086ae2) bg_popup_call2_in_pane_cp03

0xee58,	// (0x0008a59b) popup_call6_1st_window_g1

0xee60,	// (0x0008a5a3) popup_call6_1st_window_g2

0xee68,	// (0x0008a5ab) popup_call6_1st_window_g3

0x0002,

0x0c11,	// (0x0007c354) popup_call6_1st_window_g

0xee70,	// (0x0008a5b3) popup_call6_1st_window_t1

0xee7f,	// (0x0008a5c2) popup_call6_1st_window_t2

0xee8f,	// (0x0008a5d2) popup_call6_1st_window_t3

0x0002,

0x0c18,	// (0x0007c35b) popup_call6_1st_window_t

0xb39f,	// (0x00086ae2) bg_popup_call2_in_pane_cp04

0xee58,	// (0x0008a59b) popup_call6_2nd_window_g1

0xee60,	// (0x0008a5a3) popup_call6_2nd_window_g2

0xee68,	// (0x0008a5ab) popup_call6_2nd_window_g3

0x0002,

0x0c11,	// (0x0007c354) popup_call6_2nd_window_g

0xee70,	// (0x0008a5b3) popup_call6_2nd_window_t1

0x9f8b,	// (0x000856ce) bg_button_pane_cp15

0xee9f,	// (0x0008a5e2) cell_call6_btn_pane_g1

0xeea8,	// (0x0008a5eb) cell_call6_btn_pane_t1

0x9926,	// (0x00085069) listscroll_wgtman_pane_ParamLimits

0x9926,	// (0x00085069) listscroll_wgtman_pane

0x9942,	// (0x00085085) wgtman_btn_pane_ParamLimits

0x9942,	// (0x00085085) wgtman_btn_pane

0xb14e,	// (0x00086891) aid_scroll_copy1

0xeeb7,	// (0x0008a5fa) list_wgtman_pane

0x9977,	// (0x000850ba) wgtman_btn_pane_g1_ParamLimits

0x9977,	// (0x000850ba) wgtman_btn_pane_g1

0x999f,	// (0x000850e2) wgtman_btn_pane_t1_ParamLimits

0x999f,	// (0x000850e2) wgtman_btn_pane_t1

0xeec1,	// (0x0008a604) wgtman_btn_pane_t2_ParamLimits

0xeec1,	// (0x0008a604) wgtman_btn_pane_t2

0x0001,

0xfe4c,	// (0x0008b58f) wgtman_btn_pane_t_ParamLimits

0xfe4c,	// (0x0008b58f) wgtman_btn_pane_t

0x99d6,	// (0x00085119) listrow_wgtman_pane_ParamLimits

0x99d6,	// (0x00085119) listrow_wgtman_pane

0x99f2,	// (0x00085135) listrow_wgtman_pane_g1

0x99ff,	// (0x00085142) listrow_wgtman_pane_g2

0x0001,

0xfe51,	// (0x0008b594) listrow_wgtman_pane_g

0x1d7b,	// (0x0007d4be) listrow_wgtman_pane_t1

0x1d93,	// (0x0007d4d6) listrow_wgtman_pane_t2

0x0001,

0xfe56,	// (0x0008b599) listrow_wgtman_pane_t

0x1db9,	// (0x0007d4fc) wait_bar_pane_cp09

0xeed8,	// (0x0008a61b) main_calllock_btn_pane

0xeee2,	// (0x0008a625) main_calllock_pane_g1

0x9f8b,	// (0x000856ce) bg_button_pane_cp17

0xeeed,	// (0x0008a630) main_calllock_btn_pane_g1

0xeef6,	// (0x0008a639) main_calllock_btn_pane_t1

0x9f8b,	// (0x000856ce) main_dialer3_pane

0x9f8b,	// (0x000856ce) main_fmrd2_pane

0xcbb4,	// (0x000882f7) main_fs_bigclock_unlock_btn_pane_g1

0xef0d,	// (0x0008a650) main_fs_bigclock_unlock_btn_pane_t1

0x9a1d,	// (0x00085160) area_fmrd2_info_pane_ParamLimits

0x9a1d,	// (0x00085160) area_fmrd2_info_pane

0x9a2b,	// (0x0008516e) area_fmrd2_visual_pane_ParamLimits

0x9a2b,	// (0x0008516e) area_fmrd2_visual_pane

0x9a39,	// (0x0008517c) fmrd2_indi_pane_ParamLimits

0x9a39,	// (0x0008517c) fmrd2_indi_pane

0x9a46,	// (0x00085189) area_fmrd2_visual_pane_g1

0x9a4e,	// (0x00085191) area_fmrd2_visual_pane_t1

0x9a5e,	// (0x000851a1) area_fmrd2_visual_pane_t2

0x9a6e,	// (0x000851b1) area_fmrd2_visual_pane_t3

0x0002,

0xfe60,	// (0x0008b5a3) area_fmrd2_visual_pane_t

0x9a7e,	// (0x000851c1) area_fmrd2_info_pane_g1

0x9a86,	// (0x000851c9) area_fmrd2_info_pane_t1

0x9a96,	// (0x000851d9) area_fmrd2_info_pane_t2

0x9aa6,	// (0x000851e9) area_fmrd2_info_pane_t3

0x9ab6,	// (0x000851f9) area_fmrd2_info_pane_t4

0x0003,

0xfe67,	// (0x0008b5aa) area_fmrd2_info_pane_t

0x9ac4,	// (0x00085207) fmrd2_indi_pane_t1

0x9ad4,	// (0x00085217) fmrd2_indi_pane_t2

0x9ae4,	// (0x00085227) fmrd2_indi_pane_t3

0x0002,

0xfe70,	// (0x0008b5b3) fmrd2_indi_pane_t

0xe407,	// (0x00089b4a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe407,	// (0x00089b4a) list_single_fs_bigclock_indicator_pane_g5

0xe4b7,	// (0x00089bfa) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4b7,	// (0x00089bfa) list_single_fs_bigclock_indicator_pane_t5

0x9457,	// (0x00084b9a) aid_cell_bcale_month_pane_ParamLimits

0x9457,	// (0x00084b9a) aid_cell_bcale_month_pane

0x947e,	// (0x00084bc1) bcale_month_pane_ParamLimits

0x947e,	// (0x00084bc1) bcale_month_pane

0x949c,	// (0x00084bdf) bcale_preview_pane_ParamLimits

0x949c,	// (0x00084bdf) bcale_preview_pane

0xecaf,	// (0x0008a3f2) list_single_fs_bigclock_pane_t1_ParamLimits

0xecce,	// (0x0008a411) list_single_fs_bigclock_pane_t2_ParamLimits

0xecce,	// (0x0008a411) list_single_fs_bigclock_pane_t2

0x0001,

0x0bc5,	// (0x0007c308) list_single_fs_bigclock_pane_t_ParamLimits

0x0bc5,	// (0x0007c308) list_single_fs_bigclock_pane_t

0xef05,	// (0x0008a648) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5b,	// (0x0008b59e) main_fs_bigclock_unlock_btn_pane_g

0x9af2,	// (0x00085235) aid_dia3_key_size_ParamLimits

0x9af2,	// (0x00085235) aid_dia3_key_size

0x9afe,	// (0x00085241) aid_dia3_listrow_size_ParamLimits

0x9afe,	// (0x00085241) aid_dia3_listrow_size

0x9b0e,	// (0x00085251) dia3_keypad_fun_pane_ParamLimits

0x9b0e,	// (0x00085251) dia3_keypad_fun_pane

0x9b20,	// (0x00085263) dia3_keypad_num_pane_ParamLimits

0x9b20,	// (0x00085263) dia3_keypad_num_pane

0x9b32,	// (0x00085275) dia3_listscroll_pane_ParamLimits

0x9b32,	// (0x00085275) dia3_listscroll_pane

0x9b40,	// (0x00085283) dia3_numentry_pane_ParamLimits

0x9b40,	// (0x00085283) dia3_numentry_pane

0xef1b,	// (0x0008a65e) dia3_list_pane

0xef26,	// (0x0008a669) scroll_pane_cp12

0x9f8b,	// (0x000856ce) bg_dia3_numentry_pane

0x9b4e,	// (0x00085291) dia3_numentry_pane_t1

0x9b5d,	// (0x000852a0) cell_dia3_key_num_pane

0x9b65,	// (0x000852a8) cell_dia3_key0_fun_pane_ParamLimits

0x9b65,	// (0x000852a8) cell_dia3_key0_fun_pane

0x9b72,	// (0x000852b5) cell_dia3_key1_fun_pane_ParamLimits

0x9b72,	// (0x000852b5) cell_dia3_key1_fun_pane

0x9b7f,	// (0x000852c2) dia3_listrow_pane

0xe107,	// (0x0008984a) bg_dia3_numentry_pane_g1

0x9f8b,	// (0x000856ce) bg_button_pane_cp21

0xef31,	// (0x0008a674) cell_dia3_key_num_pane_t1

0xef3f,	// (0x0008a682) cell_dia3_key_num_pane_t2

0xef4e,	// (0x0008a691) cell_dia3_key_num_pane_t3

0xef5d,	// (0x0008a6a0) cell_dia3_key_num_pane_t4

0x0003,

0x0c4a,	// (0x0007c38d) cell_dia3_key_num_pane_t

0x9f8b,	// (0x000856ce) bg_button_pane_cp19

0x9b8c,	// (0x000852cf) cell_dia3_key0_fun_pane_g1

0x9f8b,	// (0x000856ce) bg_button_pane_cp20

0x9b94,	// (0x000852d7) cell_dia3_key1_fun_pane_g1

0x9b9c,	// (0x000852df) area_left_week_number_pane

0x9baf,	// (0x000852f2) area_top_day_name_pane

0x9bbd,	// (0x00085300) frame_month_view_pane

0xef6c,	// (0x0008a6af) grid_month_view_pane

0x9bd2,	// (0x00085315) cell_top_day_name_pane_ParamLimits

0x9bd2,	// (0x00085315) cell_top_day_name_pane

0x9bec,	// (0x0008532f) cell_area_left_week_number_pane_ParamLimits

0x9bec,	// (0x0008532f) cell_area_left_week_number_pane

0x9c0f,	// (0x00085352) cell_month_view_pane_ParamLimits

0x9c0f,	// (0x00085352) cell_month_view_pane

0xef7a,	// (0x0008a6bd) frm_month_g1

0x9c3b,	// (0x0008537e) frm_month_g2

0x9c4c,	// (0x0008538f) frm_month_g3

0x9c5d,	// (0x000853a0) frm_month_g4

0x9c6e,	// (0x000853b1) frm_month_g5

0x9c81,	// (0x000853c4) frm_month_g6

0x9c94,	// (0x000853d7) frm_month_g7

0xef87,	// (0x0008a6ca) frm_month_g8

0x9ca7,	// (0x000853ea) frm_month_g9

0x9cb4,	// (0x000853f7) frm_month_g10

0x9cc1,	// (0x00085404) frm_month_g11

0x9cce,	// (0x00085411) frm_month_g12

0x9cdb,	// (0x0008541e) frm_month_g13

0x9ce8,	// (0x0008542b) frm_month_g14

0x9cf7,	// (0x0008543a) frm_month_g15

0x9d06,	// (0x00085449) frm_month_g16

0x000f,

0xfe77,	// (0x0008b5ba) frm_month_g

0xef94,	// (0x0008a6d7) cell_top_day_name_pane_t1

0x9d15,	// (0x00085458) cell_area_left_week_number_pane_g1

0x9d24,	// (0x00085467) cell_area_left_week_number_pane_t1

0xce20,	// (0x00088563) cell_month_view_pane_g1

0x9d3a,	// (0x0008547d) cell_month_view_pane_t1

0x9f8b,	// (0x000856ce) main_fps_pane

0xe6a7,	// (0x00089dea) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6a7,	// (0x00089dea) cmail_ddmenu_btn02_pane_cp1

0xe6c3,	// (0x00089e06) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6c3,	// (0x00089e06) cmail_ddmenu_btn02_pane_cp2

0x960f,	// (0x00084d52) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x960f,	// (0x00084d52) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfde6,	// (0x0008b529) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfde6,	// (0x0008b529) cmail_ddmenu_btn02_pane_g

0x962d,	// (0x00084d70) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x962d,	// (0x00084d70) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdeb,	// (0x0008b52e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdeb,	// (0x0008b52e) cmail_ddmenu_btn02_pane_t

0x9d50,	// (0x00085493) fps_text_pane_ParamLimits

0x9d50,	// (0x00085493) fps_text_pane

0x9d5d,	// (0x000854a0) main_fps_pane_g1_ParamLimits

0x9d5d,	// (0x000854a0) main_fps_pane_g1

0x9d6b,	// (0x000854ae) wait_bar_pane_cp010_ParamLimits

0x9d6b,	// (0x000854ae) wait_bar_pane_cp010

0x9d77,	// (0x000854ba) fps_text_pane_t1_ParamLimits

0x9d77,	// (0x000854ba) fps_text_pane_t1

0x7200,	// (0x00082943) cam4_image_uncrop_pane_g1

0x7209,	// (0x0008294c) cam4_image_uncrop_pane_g2

0x7212,	// (0x00082955) cam4_image_uncrop_pane_g3

0x721b,	// (0x0008295e) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0008b031) cam4_image_uncrop_pane_g

0x9b7f,	// (0x000852c2) dia3_listrow_pane_ParamLimits

0x9f8b,	// (0x000856ce) main_phob2_pane

0x9281,	// (0x000849c4) cell_tport_appsw_pane_cp02_ParamLimits

0x9281,	// (0x000849c4) cell_tport_appsw_pane_cp02

0x9290,	// (0x000849d3) cell_tport_appsw_pane_cp03_ParamLimits

0x9290,	// (0x000849d3) cell_tport_appsw_pane_cp03

0x9f8b,	// (0x000856ce) phob2_contact_card_pane

0x9f8b,	// (0x000856ce) phob2_listscroll_pane

0xefa7,	// (0x0008a6ea) phob2_list_pane

0xefaf,	// (0x0008a6f2) scroll_pane_cp034

0x9d90,	// (0x000854d3) phob2_cc_data_pane_ParamLimits

0x9d90,	// (0x000854d3) phob2_cc_data_pane

0x9daa,	// (0x000854ed) phob2_cc_listscroll_pane_ParamLimits

0x9daa,	// (0x000854ed) phob2_cc_listscroll_pane

0x9dc4,	// (0x00085507) list_double_large_graphic_phob2_pane_ParamLimits

0x9dc4,	// (0x00085507) list_double_large_graphic_phob2_pane

0x9de6,	// (0x00085529) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9de6,	// (0x00085529) list_double_large_graphic_phob2_pane_g1

0x1dcb,	// (0x0007d50e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1dcb,	// (0x0007d50e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe98,	// (0x0008b5db) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe98,	// (0x0008b5db) list_double_large_graphic_phob2_pane_g

0x1dd7,	// (0x0007d51a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1dd7,	// (0x0007d51a) list_double_large_graphic_phob2_pane_t1

0x1ded,	// (0x0007d530) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1ded,	// (0x0007d530) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe9d,	// (0x0008b5e0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe9d,	// (0x0008b5e0) list_double_large_graphic_phob2_pane_t

0x9f8b,	// (0x000856ce) list_highlight_pane_cp024

0x9dfc,	// (0x0008553f) phob2_cc_button_pane

0x9e04,	// (0x00085547) phob2_cc_data_pane_g1_ParamLimits

0x9e04,	// (0x00085547) phob2_cc_data_pane_g1

0x9e10,	// (0x00085553) phob2_cc_data_pane_g2_ParamLimits

0x9e10,	// (0x00085553) phob2_cc_data_pane_g2

0x0001,

0xfea2,	// (0x0008b5e5) phob2_cc_data_pane_g_ParamLimits

0xfea2,	// (0x0008b5e5) phob2_cc_data_pane_g

0x9e1c,	// (0x0008555f) phob2_cc_data_pane_t1_ParamLimits

0x9e1c,	// (0x0008555f) phob2_cc_data_pane_t1

0x9e2e,	// (0x00085571) phob2_cc_data_pane_t2_ParamLimits

0x9e2e,	// (0x00085571) phob2_cc_data_pane_t2

0x9e40,	// (0x00085583) phob2_cc_data_pane_t3_ParamLimits

0x9e40,	// (0x00085583) phob2_cc_data_pane_t3

0x0002,

0xfea7,	// (0x0008b5ea) phob2_cc_data_pane_t_ParamLimits

0xfea7,	// (0x0008b5ea) phob2_cc_data_pane_t

0xefb7,	// (0x0008a6fa) phob2_cc_list_pane_ParamLimits

0xefb7,	// (0x0008a6fa) phob2_cc_list_pane

0xd980,	// (0x000890c3) scroll_pane_cp035_ParamLimits

0xd980,	// (0x000890c3) scroll_pane_cp035

0xaa46,	// (0x00086189) bg_button_pane_cp033

0xefc3,	// (0x0008a706) phob2_cc_button_pane_g1

0xefcf,	// (0x0008a712) phob2_cc_button_pane_t1

0xefe4,	// (0x0008a727) phob2_cc_button_pane_t2

0x0001,

0x0c8a,	// (0x0007c3cd) phob2_cc_button_pane_t

0x9e52,	// (0x00085595) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9e52,	// (0x00085595) list_double_large_graphic_phob2_cc_pane

0x9e81,	// (0x000855c4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9e81,	// (0x000855c4) list_double_large_graphic_phob2_cc_pane_g1

0x1e02,	// (0x0007d545) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1e02,	// (0x0007d545) list_double_large_graphic_phob2_cc_pane_g2

0x1e11,	// (0x0007d554) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1e11,	// (0x0007d554) list_double_large_graphic_phob2_cc_pane_g3

0x1e20,	// (0x0007d563) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1e20,	// (0x0007d563) list_double_large_graphic_phob2_cc_pane_g4

0x1e31,	// (0x0007d574) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1e31,	// (0x0007d574) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeae,	// (0x0008b5f1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeae,	// (0x0008b5f1) list_double_large_graphic_phob2_cc_pane_g

0x1e40,	// (0x0007d583) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1e40,	// (0x0007d583) list_double_large_graphic_phob2_cc_pane_t1

0x1e69,	// (0x0007d5ac) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1e69,	// (0x0007d5ac) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeb9,	// (0x0008b5fc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeb9,	// (0x0008b5fc) list_double_large_graphic_phob2_cc_pane_t

0xeff6,	// (0x0008a739) list_highlight_pane_cp025_ParamLimits

0xeff6,	// (0x0008a739) list_highlight_pane_cp025

0xaa46,	// (0x00086189) bg_button_pane_cp033_ParamLimits

0xefc3,	// (0x0008a706) phob2_cc_button_pane_g1_ParamLimits

0xefcf,	// (0x0008a712) phob2_cc_button_pane_t1_ParamLimits

0xefe4,	// (0x0008a727) phob2_cc_button_pane_t2_ParamLimits

0x0c8a,	// (0x0007c3cd) phob2_cc_button_pane_t_ParamLimits

0x2169,	// (0x0007d8ac) popup_wgtman_window

0xd73d,	// (0x00088e80) scroll_pane_cp038

0x995f,	// (0x000850a2) wgtman_btn_pane_cp_01_ParamLimits

0x995f,	// (0x000850a2) wgtman_btn_pane_cp_01

0xf004,	// (0x0008a747) wgtman_content_pane

0xf00d,	// (0x0008a750) wgtman_heading_pane

0x9f8b,	// (0x000856ce) bg_heading_pane_cp02

0xf016,	// (0x0008a759) wgtman_heading_pane_g1

0xf01e,	// (0x0008a761) wgtman_heading_pane_t1

0xf02c,	// (0x0008a76f) scroll_pane_cp036

0xf034,	// (0x0008a777) wgtman_list_pane

0xe77d,	// (0x00089ec0) wgtman_list_pane_t1_ParamLimits

0xe77d,	// (0x00089ec0) wgtman_list_pane_t1

0x715f,	// (0x000828a2) cam4_grid_pane

0x1162,	// (0x0007c8a5) bg_button_pane_cp015_ParamLimits

0x7e5c,	// (0x0008359f) bg_button_pane_cp016_ParamLimits

0x7e6f,	// (0x000835b2) bg_button_pane_cp017_ParamLimits

0x7ea4,	// (0x000835e7) popup_vitu2_query_window_g3_ParamLimits

0x7ea4,	// (0x000835e7) popup_vitu2_query_window_g3

0x7ef2,	// (0x00083635) popup_vitu2_query_window_t6_ParamLimits

0x7ef2,	// (0x00083635) popup_vitu2_query_window_t6

0x7f1d,	// (0x00083660) popup_vitu2_query_window_t7_ParamLimits

0x7f1d,	// (0x00083660) popup_vitu2_query_window_t7

0xd98c,	// (0x000890cf) cam4_grid_pane_g1

0xd995,	// (0x000890d8) cam4_grid_pane_g2

0xf03c,	// (0x0008a77f) cam4_grid_pane_g3

0xf045,	// (0x0008a788) cam4_grid_pane_g4

0x0003,

0xfebe,	// (0x0008b601) cam4_grid_pane_g

0x2ffc,	// (0x0007e73f) aid_placing_vt_slider_lsc_ParamLimits

0x333c,	// (0x0007ea7f) vidtel_button_pane_ParamLimits

0x333c,	// (0x0007ea7f) vidtel_button_pane

0xf050,	// (0x0008a793) bg_button_pane_cp034

0x9e92,	// (0x000855d5) vidtel_button_pane_g1

0xf05a,	// (0x0008a79d) vidtel_button_pane_t1

0xd83f,	// (0x00088f82) aid_size_vtel_slider_touch

0xd980,	// (0x000890c3) scroll_pane_cp039

0xe145,	// (0x00089888) ncim_query_button_pane_cp01_ParamLimits

0xe164,	// (0x000898a7) ncimui_query_pane_g1_ParamLimits

0xaa46,	// (0x00086189) input_focus_pane_cp012_ParamLimits

0xe189,	// (0x000898cc) ncim_query_entry_pane_t1_ParamLimits

0xd980,	// (0x000890c3) scroll_pane_cp039_ParamLimits

0xb234,	// (0x00086977) navi_pane_bcale_mc_g1

0xb23c,	// (0x0008697f) navi_pane_bcale_mc_t1

0xe70c,	// (0x00089e4f) main_sp_fs_email_pane_g1

0xe718,	// (0x00089e5b) main_sp_fs_email_pane_g2

0x0001,

0xfcc6,	// (0x0008b409) main_sp_fs_email_pane_g

0xe984,	// (0x0008a0c7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe984,	// (0x0008a0c7) list_single_cale_mrui_row_pane_g3

0x1cce,	// (0x0007d411) list_single_recal_day_pane_g5_event_pane

0x1ce4,	// (0x0007d427) list_single_recal_day_pane_g7

0xf068,	// (0x0008a7ab) list_recal_day_event_pane_cp01

0xf071,	// (0x0008a7b4) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0008a7bc) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0008a7c4) list_recal_vselct_pane_cp01

0xd84f,	// (0x00088f92) list_recal_day_event_pane_cp01_g1

0x1e92,	// (0x0007d5d5) list_recal_day_event_pane_cp01_t1

0x1cec,	// (0x0007d42f) list_single_recal_day_pane_t1_ParamLimits

0x1cfe,	// (0x0007d441) list_single_recal_day_pane_t2_ParamLimits

0xfdfb,	// (0x0008b53e) list_single_recal_day_pane_t_ParamLimits

0xa603,	// (0x00085d46) bg_notes_pane_ParamLimits

0xa6c5,	// (0x00085e08) list_notes_pane_ParamLimits

0x24b4,	// (0x0007dbf7) scroll_pane_cp06_ParamLimits

0xa6e7,	// (0x00085e2a) main_notes_pane_ParamLimits

0x9f8b,	// (0x000856ce) main_welc_pane

0x9e9a,	// (0x000855dd) main_welc_body_pane_ParamLimits

0x9e9a,	// (0x000855dd) main_welc_body_pane

0x9eb3,	// (0x000855f6) main_welc_opti_pane_ParamLimits

0x9eb3,	// (0x000855f6) main_welc_opti_pane

0x9ee8,	// (0x0008562b) main_welc_pane_t1_ParamLimits

0x9ee8,	// (0x0008562b) main_welc_pane_t1

0x9f06,	// (0x00085649) main_welc_body_row_pane_ParamLimits

0x9f06,	// (0x00085649) main_welc_body_row_pane

0xe39a,	// (0x00089add) main_welc_opti_row_pane_ParamLimits

0xe39a,	// (0x00089add) main_welc_opti_row_pane

0xf08b,	// (0x0008a7ce) main_welc_opti_row_pane_g1

0x9f32,	// (0x00085675) main_welc_opti_row_pane_t1

0xf093,	// (0x0008a7d6) main_welc_body_row_pane_t1

0xed85,	// (0x0008a4c8) popup_notif_wgt_heading_pane

0xed9f,	// (0x0008a4e2) aid_size_list_notif_wgt_del_ParamLimits

0xedac,	// (0x0008a4ef) list_notif_wgt_row_pane_g1_ParamLimits

0xedb8,	// (0x0008a4fb) list_notif_wgt_row_pane_g2_ParamLimits

0xedcc,	// (0x0008a50f) list_notif_wgt_row_pane_g3_ParamLimits

0x0bf4,	// (0x0007c337) list_notif_wgt_row_pane_g_ParamLimits

0xedd9,	// (0x0008a51c) list_notif_wgt_row_pane_t1_ParamLimits

0xedef,	// (0x0008a532) list_notif_wgt_row_pane_t2_ParamLimits

0xee01,	// (0x0008a544) list_notif_wgt_row_pane_t3_ParamLimits

0x0bfb,	// (0x0007c33e) list_notif_wgt_row_pane_t_ParamLimits

0x99f2,	// (0x00085135) listrow_wgtman_pane_g1_ParamLimits

0x99ff,	// (0x00085142) listrow_wgtman_pane_g2_ParamLimits

0xfe51,	// (0x0008b594) listrow_wgtman_pane_g_ParamLimits

0x1d7b,	// (0x0007d4be) listrow_wgtman_pane_t1_ParamLimits

0x1d93,	// (0x0007d4d6) listrow_wgtman_pane_t2_ParamLimits

0xfe56,	// (0x0008b599) listrow_wgtman_pane_t_ParamLimits

0x1db9,	// (0x0007d4fc) wait_bar_pane_cp09_ParamLimits

0x9f8b,	// (0x000856ce) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0008a7e5) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0008a7ed) popup_notif_wgt_heading_pane_t1

0x9f8b,	// (0x000856ce) main_vids_pane

0x9f8b,	// (0x000856ce) vids_listscroll_pane

0x9f41,	// (0x00085684) scroll_pane_cp040

0x9f8b,	// (0x000856ce) vids_list_pane

0x9f4c,	// (0x0008568f) vids_list_double_pane_ParamLimits

0x9f4c,	// (0x0008568f) vids_list_double_pane

0x9f64,	// (0x000856a7) vids_list_double_pane_g1

0x9f6d,	// (0x000856b0) vids_list_double_pane_t1

0x9f7d,	// (0x000856c0) vids_list_double_pane_t2

0x0001,

0xfecc,	// (0x0008b60f) vids_list_double_pane_t

0xaa46,	// (0x00086189) main_ncimui_pane_ParamLimits

0x8a79,	// (0x000841bc) main_ncimui_pane_g1_ParamLimits

0x8a85,	// (0x000841c8) main_ncimui_pane_g2_ParamLimits

0x8a85,	// (0x000841c8) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0008b32d) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0008b32d) main_ncimui_pane_g

0x9ece,	// (0x00085611) main_welc_pane_g1_ParamLimits

0x9ece,	// (0x00085611) main_welc_pane_g1

0x9eda,	// (0x0008561d) main_welc_pane_g2_ParamLimits

0x9eda,	// (0x0008561d) main_welc_pane_g2

0x0001,

0xfec7,	// (0x0008b60a) main_welc_pane_g_ParamLimits

0xfec7,	// (0x0008b60a) main_welc_pane_g

0xa603,	// (0x00085d46) listscroll_mce_pane_ParamLimits

0xb397,	// (0x00086ada) wait_bar_pane_cp10

0xc79e,	// (0x00087ee1) main_cale_day_pane_ParamLimits

0xc79e,	// (0x00087ee1) main_cale_week_pane_ParamLimits

0xa603,	// (0x00085d46) main_messa_pane_ParamLimits

0x6593,	// (0x00081cd6) main_clock2_btn_pane_ParamLimits

0x6593,	// (0x00081cd6) main_clock2_btn_pane

0xcfa8,	// (0x000886eb) main_clock2_btn_pane_cp01_ParamLimits

0xcfa8,	// (0x000886eb) main_clock2_btn_pane_cp01

0xe955,	// (0x0008a098) list_cale_mrui_pane_ParamLimits

0xee45,	// (0x0008a588) main_cf0_pane_g2

0x0001,

0x0c02,	// (0x0007c345) main_cf0_pane_g

0x9b9c,	// (0x000852df) area_left_week_number_pane_ParamLimits

0x9baf,	// (0x000852f2) area_top_day_name_pane_ParamLimits

0x9bbd,	// (0x00085300) frame_month_view_pane_ParamLimits

0xef6c,	// (0x0008a6af) grid_month_view_pane_ParamLimits

0xef7a,	// (0x0008a6bd) frm_month_g1_ParamLimits

0x9c3b,	// (0x0008537e) frm_month_g2_ParamLimits

0x9c4c,	// (0x0008538f) frm_month_g3_ParamLimits

0x9c5d,	// (0x000853a0) frm_month_g4_ParamLimits

0x9c6e,	// (0x000853b1) frm_month_g5_ParamLimits

0x9c81,	// (0x000853c4) frm_month_g6_ParamLimits

0x9c94,	// (0x000853d7) frm_month_g7_ParamLimits

0xef87,	// (0x0008a6ca) frm_month_g8_ParamLimits

0x9ca7,	// (0x000853ea) frm_month_g9_ParamLimits

0x9cb4,	// (0x000853f7) frm_month_g10_ParamLimits

0x9cc1,	// (0x00085404) frm_month_g11_ParamLimits

0x9cce,	// (0x00085411) frm_month_g12_ParamLimits

0x9cdb,	// (0x0008541e) frm_month_g13_ParamLimits

0x9ce8,	// (0x0008542b) frm_month_g14_ParamLimits

0x9cf7,	// (0x0008543a) frm_month_g15_ParamLimits

0x9d06,	// (0x00085449) frm_month_g16_ParamLimits

0xfe77,	// (0x0008b5ba) frm_month_g_ParamLimits

0xef94,	// (0x0008a6d7) cell_top_day_name_pane_t1_ParamLimits

0x9d15,	// (0x00085458) cell_area_left_week_number_pane_g1_ParamLimits

0x9d24,	// (0x00085467) cell_area_left_week_number_pane_t1_ParamLimits

0xce20,	// (0x00088563) cell_month_view_pane_g1_ParamLimits

0x9d3a,	// (0x0008547d) cell_month_view_pane_t1_ParamLimits

0xa5fb,	// (0x00085d3e) main_clock2_btn_pane_g1

0xf0b8,	// (0x0008a7fb) main_clock2_btn_pane_t1

0xaa46,	// (0x00086189) listscroll_cmail_pane_ParamLimits

0xe70c,	// (0x00089e4f) main_sp_fs_email_pane_g1_ParamLimits

0xe718,	// (0x00089e5b) main_sp_fs_email_pane_g2_ParamLimits

0xfcc6,	// (0x0008b409) main_sp_fs_email_pane_g_ParamLimits

0xeaf3,	// (0x0008a236) list_recal_day_pane_ParamLimits

0xeb04,	// (0x0008a247) mian_recal_day_pane_t1

0x16af,	// (0x0007cdf2) list_single_dyc_row_text_pane_t4_ParamLimits

0x16af,	// (0x0007cdf2) list_single_dyc_row_text_pane_t4

0x16e6,	// (0x0007ce29) list_single_dyc_row_text_pane_t5_ParamLimits

0x16e6,	// (0x0007ce29) list_single_dyc_row_text_pane_t5

0x175c,	// (0x0007ce9f) list_single_dyc_row_text_pane_t6_ParamLimits

0x175c,	// (0x0007ce9f) list_single_dyc_row_text_pane_t6

0xad18,	// (0x0008645b) aid_mgn_list_cale_time_pane

0xaa46,	// (0x00086189) main_gallery2_pane_ParamLimits

0xcfbe,	// (0x00088701) main_clock2_pane_cp01_t1

0xcfcc,	// (0x0008870f) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0008af07) main_clock2_pane_cp01_t

0x28ff,	// (0x0007e042) cale_week_scroll_pane_g16_ParamLimits

0x28ff,	// (0x0007e042) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
