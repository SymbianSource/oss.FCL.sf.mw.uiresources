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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001aca4 };

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
0x4d49,	// (0x0001f9ed) Screen

0x4d55,	// (0x0001f9f9) application_window

0x4d61,	// (0x0001fa05) area_bottom_pane_ParamLimits

0x4d61,	// (0x0001fa05) area_bottom_pane

0x3590,	// (0x0001e234) area_top_pane_ParamLimits

0x3590,	// (0x0001e234) area_top_pane

0x35f4,	// (0x0001e298) call_video_uplink_pane_ParamLimits

0x35f4,	// (0x0001e298) call_video_uplink_pane

0x3633,	// (0x0001e2d7) main_pane_ParamLimits

0x3633,	// (0x0001e2d7) main_pane

0xe49e,	// (0x00029142) context_pane

0x742d,	// (0x000220d1) navi_pane

0x7453,	// (0x000220f7) popup_cale_events_window_ParamLimits

0x7453,	// (0x000220f7) popup_cale_events_window

0xe4b1,	// (0x00029155) popup_mup_playback_window

0x746b,	// (0x0002210f) signal_pane

0xc5bd,	// (0x00027261) main_browser_pane

0xc786,	// (0x0002742a) main_burst_pane

0x3bee,	// (0x0001e892) main_calc_pane

0xe492,	// (0x00029136) main_cale_day_pane

0x4f62,	// (0x0001fc06) main_cale_month_pane

0xe492,	// (0x00029136) main_cale_week_pane

0xc786,	// (0x0002742a) main_call_pane

0xc23d,	// (0x00026ee1) main_call_poc_pane

0xc786,	// (0x0002742a) main_camera_pane

0xc786,	// (0x0002742a) main_chi_dic_pane

0xcf21,	// (0x00027bc5) main_clock_pane

0xc23d,	// (0x00026ee1) main_fmradio_pane

0xc786,	// (0x0002742a) main_graph_messa_pane

0xc23d,	// (0x00026ee1) main_help_pane

0xc5bd,	// (0x00027261) main_im_pane

0xc4a6,	// (0x0002714a) main_image_pane_ParamLimits

0xc4a6,	// (0x0002714a) main_image_pane

0xc23d,	// (0x00026ee1) main_location2_pane

0xc786,	// (0x0002742a) main_location_pane

0xc4a6,	// (0x0002714a) main_messa_pane

0xc23d,	// (0x00026ee1) main_mp2_pane

0xc786,	// (0x0002742a) main_mp_pane

0xc23d,	// (0x00026ee1) main_msg_pane

0xc23d,	// (0x00026ee1) main_mup_eq_pane

0xc23d,	// (0x00026ee1) main_mup_pane

0xc5bd,	// (0x00027261) main_notes_pane

0xc23d,	// (0x00026ee1) main_pec_pane

0xc23d,	// (0x00026ee1) main_phob_pane

0xc23d,	// (0x00026ee1) main_pinb_pane

0xc23d,	// (0x00026ee1) main_postcard_pane

0xc23d,	// (0x00026ee1) main_qdial_pane

0xc786,	// (0x0002742a) main_skin_pane

0xc23d,	// (0x00026ee1) main_smil2_pane

0xc786,	// (0x0002742a) main_smil_pane

0xc786,	// (0x0002742a) main_video_pane

0xc786,	// (0x0002742a) main_video_tele_pane

0xc4a6,	// (0x0002714a) main_viewer_pane_ParamLimits

0xc4a6,	// (0x0002714a) main_viewer_pane

0xc786,	// (0x0002742a) main_vorec_pane

0x3c3a,	// (0x0001e8de) popup_blid_sat_info_window_ParamLimits

0x3c3a,	// (0x0001e8de) popup_blid_sat_info_window

0x3c5a,	// (0x0001e8fe) popup_dyc_status_message_window_ParamLimits

0x3c5a,	// (0x0001e8fe) popup_dyc_status_message_window

0x3c68,	// (0x0001e90c) popup_grid_large_graphic_window_ParamLimits

0x3c68,	// (0x0001e90c) popup_grid_large_graphic_window

0x3cf7,	// (0x0001e99b) popup_loc_request_window_ParamLimits

0x3cf7,	// (0x0001e99b) popup_loc_request_window

0x3d44,	// (0x0001e9e8) popup_wml_address_window_ParamLimits

0x3d44,	// (0x0001e9e8) popup_wml_address_window

0x730f,	// (0x00021fb3) call_muted_g1

0x6ffc,	// (0x00021ca0) popup_call_audio_conf_window_ParamLimits

0x6ffc,	// (0x00021ca0) popup_call_audio_conf_window

0x731f,	// (0x00021fc3) popup_call_audio_first_window_ParamLimits

0x731f,	// (0x00021fc3) popup_call_audio_first_window

0x735f,	// (0x00022003) popup_call_audio_in_window_ParamLimits

0x735f,	// (0x00022003) popup_call_audio_in_window

0x7383,	// (0x00022027) popup_call_audio_out_window_ParamLimits

0x7383,	// (0x00022027) popup_call_audio_out_window

0x73a5,	// (0x00022049) popup_call_audio_second_window_ParamLimits

0x73a5,	// (0x00022049) popup_call_audio_second_window

0x73d5,	// (0x00022079) popup_call_audio_wait_window_ParamLimits

0x73d5,	// (0x00022079) popup_call_audio_wait_window

0x73f6,	// (0x0002209a) popup_number_entry_window_ParamLimits

0x73f6,	// (0x0002209a) popup_number_entry_window

0xbe2a,	// (0x00026ace) bg_popup_call_pane_cp05_ParamLimits

0xbe2a,	// (0x00026ace) bg_popup_call_pane_cp05

0xbe4a,	// (0x00026aee) popup_number_entry_window_t1

0xbe5d,	// (0x00026b01) popup_number_entry_window_t2

0xbe6f,	// (0x00026b13) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00029ce4) popup_number_entry_window_t

0xbe81,	// (0x00026b25) text_title_cp2

0xbe94,	// (0x00026b38) bg_popup_call_pane_cp_ParamLimits

0xbe94,	// (0x00026b38) bg_popup_call_pane_cp

0xbea2,	// (0x00026b46) call_thumbnail_pane

0xbeaa,	// (0x00026b4e) popup_call_audio_in_window_g1_ParamLimits

0xbeaa,	// (0x00026b4e) popup_call_audio_in_window_g1

0xbeb6,	// (0x00026b5a) popup_call_audio_in_window_g2_ParamLimits

0xbeb6,	// (0x00026b5a) popup_call_audio_in_window_g2

0xbec2,	// (0x00026b66) popup_call_audio_in_window_g3_ParamLimits

0xbec2,	// (0x00026b66) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00029ced) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00029ced) popup_call_audio_in_window_g

0xbece,	// (0x00026b72) popup_call_audio_in_window_t1_ParamLimits

0xbece,	// (0x00026b72) popup_call_audio_in_window_t1

0xbeea,	// (0x00026b8e) popup_call_audio_in_window_t2_ParamLimits

0xbeea,	// (0x00026b8e) popup_call_audio_in_window_t2

0xbf06,	// (0x00026baa) popup_call_audio_in_window_t3_ParamLimits

0xbf06,	// (0x00026baa) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00029cf4) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00029cf4) popup_call_audio_in_window_t

0xbe94,	// (0x00026b38) bg_popup_call_pane_cp01_ParamLimits

0xbe94,	// (0x00026b38) bg_popup_call_pane_cp01

0xbea2,	// (0x00026b46) call_thumbnail_pane_cp02

0xbf19,	// (0x00026bbd) call_type_pane_cp022

0xbf21,	// (0x00026bc5) popup_call_audio_out_window_g1_ParamLimits

0xbf21,	// (0x00026bc5) popup_call_audio_out_window_g1

0xbf33,	// (0x00026bd7) popup_call_audio_out_window_g2_ParamLimits

0xbf33,	// (0x00026bd7) popup_call_audio_out_window_g2

0xbf3f,	// (0x00026be3) popup_call_audio_out_window_g3_ParamLimits

0xbf3f,	// (0x00026be3) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00029cfb) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00029cfb) popup_call_audio_out_window_g

0xbf51,	// (0x00026bf5) popup_call_audio_out_window_t1_ParamLimits

0xbf51,	// (0x00026bf5) popup_call_audio_out_window_t1

0xbf69,	// (0x00026c0d) popup_call_audio_out_window_t2_ParamLimits

0xbf69,	// (0x00026c0d) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00029d02) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00029d02) popup_call_audio_out_window_t

0xbf7e,	// (0x00026c22) bg_popup_call_pane_ParamLimits

0xbf7e,	// (0x00026c22) bg_popup_call_pane

0x4dde,	// (0x0001fa82) call_thumbnail_pane_cp_ParamLimits

0x4dde,	// (0x0001fa82) call_thumbnail_pane_cp

0xc002,	// (0x00026ca6) call_type_pane_cp01_ParamLimits

0xc002,	// (0x00026ca6) call_type_pane_cp01

0xc046,	// (0x00026cea) popup_call_audio_first_window_g1_ParamLimits

0xc046,	// (0x00026cea) popup_call_audio_first_window_g1

0xc092,	// (0x00026d36) popup_call_audio_first_window_g2_ParamLimits

0xc092,	// (0x00026d36) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00029d07) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00029d07) popup_call_audio_first_window_g

0xc0d6,	// (0x00026d7a) popup_call_audio_first_window_t1_ParamLimits

0xc0d6,	// (0x00026d7a) popup_call_audio_first_window_t1

0xc182,	// (0x00026e26) popup_call_audio_first_window_t4_ParamLimits

0xc182,	// (0x00026e26) popup_call_audio_first_window_t4

0xc20e,	// (0x00026eb2) popup_call_audio_first_window_t5_ParamLimits

0xc20e,	// (0x00026eb2) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00029d0c) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00029d0c) popup_call_audio_first_window_t

0xc23d,	// (0x00026ee1) bg_popup_call_pane_cp02

0xc247,	// (0x00026eeb) call_type_pane_cp023

0xc24f,	// (0x00026ef3) popup_call_audio_wait_window_g1

0xc257,	// (0x00026efb) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00029d13) popup_call_audio_wait_window_g

0xc25f,	// (0x00026f03) popup_call_audio_wait_window_t3

0xc26d,	// (0x00026f11) bg_popup_call_pane_cp03_ParamLimits

0xc26d,	// (0x00026f11) bg_popup_call_pane_cp03

0xc2cd,	// (0x00026f71) call_thumbnail_pane_cp011_ParamLimits

0xc2cd,	// (0x00026f71) call_thumbnail_pane_cp011

0xc2d9,	// (0x00026f7d) call_type_pane_cp034_ParamLimits

0xc2d9,	// (0x00026f7d) call_type_pane_cp034

0xc323,	// (0x00026fc7) popup_call_audio_second_window_g1_ParamLimits

0xc323,	// (0x00026fc7) popup_call_audio_second_window_g1

0xc35f,	// (0x00027003) popup_call_audio_second_window_g2_ParamLimits

0xc35f,	// (0x00027003) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00029d18) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00029d18) popup_call_audio_second_window_g

0xc39b,	// (0x0002703f) popup_call_audio_second_window_t1_ParamLimits

0xc39b,	// (0x0002703f) popup_call_audio_second_window_t1

0xc41c,	// (0x000270c0) popup_call_audio_second_window_t2_ParamLimits

0xc41c,	// (0x000270c0) popup_call_audio_second_window_t2

0xc452,	// (0x000270f6) popup_call_audio_second_window_t3_ParamLimits

0xc452,	// (0x000270f6) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00029d1d) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00029d1d) popup_call_audio_second_window_t

0xc23d,	// (0x00026ee1) bg_popup_call_pane_cp04

0xc488,	// (0x0002712c) list_conf_pane

0xc490,	// (0x00027134) popup_call_audio_conf_window_t1

0xc49e,	// (0x00027142) call_thumbnail_pane_g1

0xc4a6,	// (0x0002714a) bg_pinb_pane_ParamLimits

0xc4a6,	// (0x0002714a) bg_pinb_pane

0xc4b4,	// (0x00027158) find_pinb_pane

0xc4a6,	// (0x0002714a) listscroll_pinb_pane_ParamLimits

0xc4a6,	// (0x0002714a) listscroll_pinb_pane

0xc4be,	// (0x00027162) pinb_bg_pane_g1

0xc4be,	// (0x00027162) pinb_bg_pane_g2

0xc4be,	// (0x00027162) pinb_bg_pane_g3

0xc4be,	// (0x00027162) pinb_bg_pane_g4

0xc4be,	// (0x00027162) pinb_bg_pane_g5

0xc4be,	// (0x00027162) pinb_bg_pane_g6

0xc4be,	// (0x00027162) pinb_bg_pane_g7

0xc4be,	// (0x00027162) pinb_bg_pane_g8

0xc4be,	// (0x00027162) pinb_bg_pane_g9

0xc4be,	// (0x00027162) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00029d24) pinb_bg_pane_g

0xbe20,	// (0x00026ac4) grid_pinb_pane

0xbe20,	// (0x00026ac4) list_pinb_pane

0xc315,	// (0x00026fb9) scroll_pane_cp01_ParamLimits

0xc315,	// (0x00026fb9) scroll_pane_cp01

0xc4c8,	// (0x0002716c) find_pinb_pane_g1_ParamLimits

0xc4c8,	// (0x0002716c) find_pinb_pane_g1

0xc4e0,	// (0x00027184) find_pinb_pane_t1

0xc4f2,	// (0x00027196) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00029d3e) find_pinb_pane_t

0xc507,	// (0x000271ab) input_focus_pane_cp01_ParamLimits

0xc507,	// (0x000271ab) input_focus_pane_cp01

0xc513,	// (0x000271b7) cell_pinb_pane_ParamLimits

0xc513,	// (0x000271b7) cell_pinb_pane

0xc521,	// (0x000271c5) cell_pinb_pane_g1_ParamLimits

0xc521,	// (0x000271c5) cell_pinb_pane_g1

0xc52f,	// (0x000271d3) cell_pinb_pane_g2_ParamLimits

0xc52f,	// (0x000271d3) cell_pinb_pane_g2

0xc52f,	// (0x000271d3) cell_pinb_pane_g3_ParamLimits

0xc52f,	// (0x000271d3) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00029d43) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00029d43) cell_pinb_pane_g

0xc23d,	// (0x00026ee1) grid_highlight_pane_cp01

0xc513,	// (0x000271b7) list_pinb_item_pane_ParamLimits

0xc513,	// (0x000271b7) list_pinb_item_pane

0xbe20,	// (0x00026ac4) list_highlight_pane_cp02

0xc53d,	// (0x000271e1) list_pinb_item_pane_g1_ParamLimits

0xc53d,	// (0x000271e1) list_pinb_item_pane_g1

0xc52f,	// (0x000271d3) list_pinb_item_pane_g2_ParamLimits

0xc52f,	// (0x000271d3) list_pinb_item_pane_g2

0xc521,	// (0x000271c5) list_pinb_item_pane_g3_ParamLimits

0xc521,	// (0x000271c5) list_pinb_item_pane_g3

0xc52f,	// (0x000271d3) list_pinb_item_pane_g4_ParamLimits

0xc52f,	// (0x000271d3) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00029d4a) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00029d4a) list_pinb_item_pane_g

0xc54b,	// (0x000271ef) list_pinb_item_pane_t1_ParamLimits

0xc54b,	// (0x000271ef) list_pinb_item_pane_t1

0x3820,	// (0x0001e4c4) calc_display_pane

0x383e,	// (0x0001e4e2) calc_paper_pane

0x385a,	// (0x0001e4fe) grid_calc_pane

0xbe20,	// (0x00026ac4) bg_list_pane_cp01

0xc55f,	// (0x00027203) clock_g1

0xc55f,	// (0x00027203) clock_g2

0x0001,

0xf0af,	// (0x00029d53) clock_g

0xc569,	// (0x0002720d) clock_t1_ParamLimits

0xc569,	// (0x0002720d) clock_t1

0xc57d,	// (0x00027221) clock_t2_ParamLimits

0xc57d,	// (0x00027221) clock_t2

0xc57d,	// (0x00027221) clock_t3_ParamLimits

0xc57d,	// (0x00027221) clock_t3

0xc57d,	// (0x00027221) clock_t4_ParamLimits

0xc57d,	// (0x00027221) clock_t4

0xc569,	// (0x0002720d) clock_t5_ParamLimits

0xc569,	// (0x0002720d) clock_t5

0xc57d,	// (0x00027221) clock_t6_ParamLimits

0xc57d,	// (0x00027221) clock_t6

0xc57d,	// (0x00027221) clock_t7_ParamLimits

0xc57d,	// (0x00027221) clock_t7

0xc57d,	// (0x00027221) clock_t8_ParamLimits

0xc57d,	// (0x00027221) clock_t8

0xc57d,	// (0x00027221) clock_t9_ParamLimits

0xc57d,	// (0x00027221) clock_t9

0x0008,

0xf0b4,	// (0x00029d58) clock_t_ParamLimits

0xf0b4,	// (0x00029d58) clock_t

0xbe20,	// (0x00026ac4) popup_clock_analogue_window_cp02

0xbe20,	// (0x00026ac4) popup_clock_digital_window_cp01

0xc23d,	// (0x00026ee1) listscroll_help_pane

0xc23d,	// (0x00026ee1) phob_pre_status_pane

0xc591,	// (0x00027235) grid_qdial_pane

0xc4a6,	// (0x0002714a) listscroll_mce_pane

0xc4a6,	// (0x0002714a) bg_notes_pane

0xc59b,	// (0x0002723f) list_notes_pane

0x4e02,	// (0x0001faa6) scroll_pane_cp06

0xc5a9,	// (0x0002724d) bg_calc_paper_pane

0x3886,	// (0x0001e52a) list_calc_pane

0xc5bd,	// (0x00027261) bg_calc_display_pane

0x38a0,	// (0x0001e544) calc_display_pane_t1

0x38b5,	// (0x0001e559) calc_display_pane_t2

0x38ca,	// (0x0001e56e) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00029d6b) calc_display_pane_t

0x38dc,	// (0x0001e580) cell_calc_pane_ParamLimits

0x38dc,	// (0x0001e580) cell_calc_pane

0xc5c9,	// (0x0002726d) bg_calc_paper_pane_g1

0xc5d5,	// (0x00027279) bg_calc_paper_pane_g2

0xc5e1,	// (0x00027285) bg_calc_paper_pane_g3

0xc5ed,	// (0x00027291) bg_calc_paper_pane_g4

0xc5f9,	// (0x0002729d) bg_calc_paper_pane_g5

0x4e11,	// (0x0001fab5) bg_calc_paper_pane_g6

0x4e22,	// (0x0001fac6) bg_calc_paper_pane_g7

0x4e33,	// (0x0001fad7) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00029d72) bg_calc_paper_pane_g

0x4e44,	// (0x0001fae8) calc_bg_paper_pane_g9

0x4e55,	// (0x0001faf9) list_calc_item_pane_ParamLimits

0x4e55,	// (0x0001faf9) list_calc_item_pane

0xc605,	// (0x000272a9) list_calc_item_pane_g1

0x3909,	// (0x0001e5ad) list_calc_item_pane_t1_ParamLimits

0x3909,	// (0x0001e5ad) list_calc_item_pane_t1

0x391b,	// (0x0001e5bf) list_calc_item_pane_t2_ParamLimits

0x391b,	// (0x0001e5bf) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00029d83) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00029d83) list_calc_item_pane_t

0xc4be,	// (0x00027162) cell_calc_pane_g1

0xc612,	// (0x000272b6) grid_highlight_pane_cp02

0x4e82,	// (0x0001fb26) bg_calc_display_pane_g1

0x394b,	// (0x0001e5ef) bg_calc_display_pane_g2

0x4e8b,	// (0x0001fb2f) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00029d8d) bg_calc_display_pane_g

0x3955,	// (0x0001e5f9) cell_qdial_pane_ParamLimits

0x3955,	// (0x0001e5f9) cell_qdial_pane

0x4e94,	// (0x0001fb38) cell_qdial_pane_g1_ParamLimits

0x4e94,	// (0x0001fb38) cell_qdial_pane_g1

0x4ea1,	// (0x0001fb45) cell_qdial_pane_g2_ParamLimits

0x4ea1,	// (0x0001fb45) cell_qdial_pane_g2

0xc634,	// (0x000272d8) cell_qdial_pane_g3_ParamLimits

0xc634,	// (0x000272d8) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00029d94) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00029d94) cell_qdial_pane_g

0x4ebe,	// (0x0001fb62) cell_qdial_pane_t1_ParamLimits

0x4ebe,	// (0x0001fb62) cell_qdial_pane_t1

0x4ed6,	// (0x0001fb7a) cell_qdial_pane_t2_ParamLimits

0x4ed6,	// (0x0001fb7a) cell_qdial_pane_t2

0x4ee9,	// (0x0001fb8d) cell_qdial_pane_t3_ParamLimits

0x4ee9,	// (0x0001fb8d) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00029d9d) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00029d9d) cell_qdial_pane_t

0xc23d,	// (0x00026ee1) grid_highlight_pane_cp04

0xc640,	// (0x000272e4) thumbnail_qdial_pane_ParamLimits

0xc640,	// (0x000272e4) thumbnail_qdial_pane

0xc69c,	// (0x00027340) list_help_pane

0xc6a5,	// (0x00027349) scroll_pane_cp02

0x4efc,	// (0x0001fba0) help_list_pane_t1_ParamLimits

0x4efc,	// (0x0001fba0) help_list_pane_t1

0x3969,	// (0x0001e60d) bg_notes_pane_g2

0x3971,	// (0x0001e615) bg_notes_pane_g3

0x3979,	// (0x0001e61d) notes_bg_pane_g1

0x3981,	// (0x0001e625) notes_bg_pane_g4

0x3989,	// (0x0001e62d) notes_bg_pane_g5

0x3991,	// (0x0001e635) notes_bg_pane_g6

0x3999,	// (0x0001e63d) notes_bg_pane_g7

0x39a1,	// (0x0001e645) notes_bg_pane_g8

0x39a9,	// (0x0001e64d) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00029dbb) notes_bg_pane_g

0x4f36,	// (0x0001fbda) list_notes_text_pane_ParamLimits

0x4f36,	// (0x0001fbda) list_notes_text_pane

0xc6ae,	// (0x00027352) list_notes_text_pane_g1

0xc6b7,	// (0x0002735b) list_notes_text_pane_t1

0x4f62,	// (0x0001fc06) listscroll_cale_week_pane

0x4f87,	// (0x0001fc2b) bg_cale_heading_pane

0xc6df,	// (0x00027383) bg_cale_pane_cp01

0x4fa9,	// (0x0001fc4d) cale_week_corner_pane

0x4fc3,	// (0x0001fc67) cale_week_day_heading_pane

0x4fe5,	// (0x0001fc89) cale_week_scroll_pane_g1

0x5002,	// (0x0001fca6) cale_week_scroll_pane_g2

0x5015,	// (0x0001fcb9) cale_week_scroll_pane_g3

0x5028,	// (0x0001fccc) cale_week_scroll_pane_g4

0x503b,	// (0x0001fcdf) cale_week_scroll_pane_g5

0x504e,	// (0x0001fcf2) cale_week_scroll_pane_g6

0x5061,	// (0x0001fd05) cale_week_scroll_pane_g7

0x5076,	// (0x0001fd1a) cale_week_scroll_pane_g8

0x508b,	// (0x0001fd2f) cale_week_scroll_pane_g9

0x509e,	// (0x0001fd42) cale_week_scroll_pane_g10

0x50b1,	// (0x0001fd55) cale_week_scroll_pane_g11

0x50c4,	// (0x0001fd68) cale_week_scroll_pane_g12

0x50db,	// (0x0001fd7f) cale_week_scroll_pane_g13

0x50f6,	// (0x0001fd9a) cale_week_scroll_pane_g14

0x5111,	// (0x0001fdb5) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00029dca) cale_week_scroll_pane_g

0x5141,	// (0x0001fde5) cale_week_time_pane

0x5156,	// (0x0001fdfa) grid_cale_week_pane

0xc70e,	// (0x000273b2) scroll_pane_cp08

0x5175,	// (0x0001fe19) cell_cale_week_pane_ParamLimits

0x5175,	// (0x0001fe19) cell_cale_week_pane

0x51d7,	// (0x0001fe7b) cale_week_day_heading_pane_t1

0x51f2,	// (0x0001fe96) cale_week_day_heading_pane_t2

0x520d,	// (0x0001feb1) cale_week_day_heading_pane_t3

0x5228,	// (0x0001fecc) cale_week_day_heading_pane_t4

0x5243,	// (0x0001fee7) cale_week_day_heading_pane_t5

0x525e,	// (0x0001ff02) cale_week_day_heading_pane_t6

0x5279,	// (0x0001ff1d) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00029deb) cale_week_day_heading_pane_t

0xc72b,	// (0x000273cf) bg_cale_side_pane

0x39b1,	// (0x0001e655) cale_week_time_pane_t1

0x39cb,	// (0x0001e66f) cale_week_time_pane_t2

0x39e5,	// (0x0001e689) cale_week_time_pane_t3

0x39ff,	// (0x0001e6a3) cale_week_time_pane_t4

0x3a19,	// (0x0001e6bd) cale_week_time_pane_t5

0x3a33,	// (0x0001e6d7) cale_week_time_pane_t6

0x3a53,	// (0x0001e6f7) cale_week_time_pane_t7

0x3a75,	// (0x0001e719) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00029dfa) cale_week_time_pane_t

0x5294,	// (0x0001ff38) cell_cale_week_pane_g2

0x52b8,	// (0x0001ff5c) cell_cale_week_pane_g3_ParamLimits

0x52b8,	// (0x0001ff5c) cell_cale_week_pane_g3

0xc739,	// (0x000273dd) grid_highlight_pane_cp07

0xc741,	// (0x000273e5) listscroll_gms_pane

0xc74b,	// (0x000273ef) grid_gms_pane

0xc754,	// (0x000273f8) listscroll_gms_pane_g1

0xc75c,	// (0x00027400) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00029e0b) listscroll_gms_pane_g

0x52d0,	// (0x0001ff74) scroll_pane_cp010

0x52db,	// (0x0001ff7f) cell_gms_pane_ParamLimits

0x52db,	// (0x0001ff7f) cell_gms_pane

0x52eb,	// (0x0001ff8f) cell_gms_pane_g1

0xc764,	// (0x00027408) cell_gms_pane_g2

0xc6ae,	// (0x00027352) cell_gms_pane_g3

0xc775,	// (0x00027419) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00029e10) cell_gms_pane_g

0xc77e,	// (0x00027422) grid_highlight_pane_cp09

0x7293,	// (0x00021f37) phob_pre_status_pane_g1

0x729b,	// (0x00021f3f) phob_pre_status_pane_g2

0x72a3,	// (0x00021f47) phob_pre_status_pane_g3

0x72ab,	// (0x00021f4f) phob_pre_status_pane_g4

0x0004,

0xf538,	// (0x0002a1dc) phob_pre_status_pane_g

0x72bb,	// (0x00021f5f) phob_pre_status_pane_t1

0x72cb,	// (0x00021f6f) phob_pre_status_pane_t2

0x72db,	// (0x00021f7f) phob_pre_status_pane_t3

0x0002,

0xf543,	// (0x0002a1e7) phob_pre_status_pane_t

0xc786,	// (0x0002742a) bg_list_pane_cp05

0x52fb,	// (0x0001ff9f) grid_vorec_pane

0x5305,	// (0x0001ffa9) vorec_t1

0x5313,	// (0x0001ffb7) vorec_t2

0x5321,	// (0x0001ffc5) vorec_t3

0x532f,	// (0x0001ffd3) vorec_t4

0x4d24,	// (0x0001f9c8) vorec_t5

0x4d32,	// (0x0001f9d6) vorec_t6

0x0004,

0xf175,	// (0x00029e19) vorec_t

0x4d40,	// (0x0001f9e4) wait_bar_pane_cp01

0x534b,	// (0x0001ffef) cell_vorec_pane_ParamLimits

0x534b,	// (0x0001ffef) cell_vorec_pane

0x3a99,	// (0x0001e73d) cell_vorec_pane_g1

0xc23d,	// (0x00026ee1) grid_highlight_pane_cp05

0xc513,	// (0x000271b7) cams_zoom_pane

0xc513,	// (0x000271b7) image_vga_pane

0xc52f,	// (0x000271d3) main_camera_pane_g1

0xc52f,	// (0x000271d3) main_camera_pane_g2

0xc52f,	// (0x000271d3) main_camera_pane_g3

0xc52f,	// (0x000271d3) main_camera_pane_g4

0xc52f,	// (0x000271d3) main_camera_pane_g5

0xc52f,	// (0x000271d3) main_camera_pane_g6

0xc52f,	// (0x000271d3) main_camera_pane_g7

0x0007,

0xf180,	// (0x00029e24) main_camera_pane_g

0xc57d,	// (0x00027221) main_camera_pane_t1

0xc57d,	// (0x00027221) main_camera_pane_t2

0x0001,

0xf191,	// (0x00029e35) main_camera_pane_t

0x535e,	// (0x00020002) cams_zoom_pane_cp_ParamLimits

0x535e,	// (0x00020002) cams_zoom_pane_cp

0x538c,	// (0x00020030) image_cif_pane_ParamLimits

0x538c,	// (0x00020030) image_cif_pane

0xbe20,	// (0x00026ac4) image_subqcif_pane

0x539a,	// (0x0002003e) main_video_pane_g1_ParamLimits

0x539a,	// (0x0002003e) main_video_pane_g1

0x53c2,	// (0x00020066) main_video_pane_g2_ParamLimits

0x53c2,	// (0x00020066) main_video_pane_g2

0x53f5,	// (0x00020099) main_video_pane_g3_ParamLimits

0x53f5,	// (0x00020099) main_video_pane_g3

0x53f5,	// (0x00020099) main_video_pane_g4_ParamLimits

0x53f5,	// (0x00020099) main_video_pane_g4

0x5423,	// (0x000200c7) main_video_pane_g5_ParamLimits

0x5423,	// (0x000200c7) main_video_pane_g5

0xc78e,	// (0x00027432) main_video_pane_g6_ParamLimits

0xc78e,	// (0x00027432) main_video_pane_g6

0x0006,

0xf196,	// (0x00029e3a) main_video_pane_g_ParamLimits

0xf196,	// (0x00029e3a) main_video_pane_g

0x543f,	// (0x000200e3) main_video_pane_t1_ParamLimits

0x543f,	// (0x000200e3) main_video_pane_t1

0xc55f,	// (0x00027203) cams_zoom_pane_g1

0xc55f,	// (0x00027203) cams_zoom_pane_g2

0xc55f,	// (0x00027203) cams_zoom_pane_g3

0xc55f,	// (0x00027203) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00029e49) cams_zoom_pane_g

0xc513,	// (0x000271b7) grid_cams_pane

0xc513,	// (0x000271b7) linegrid_cams_pane

0x5479,	// (0x0002011d) cell_cams_pane_ParamLimits

0x5479,	// (0x0002011d) cell_cams_pane

0xbe20,	// (0x00026ac4) cams_burst_image_pane

0xc55f,	// (0x00027203) cell_cams_pane_g1

0xbe20,	// (0x00026ac4) grid_highlight_pane_cp03

0xc4be,	// (0x00027162) mp_bg_pane_g1

0xbe20,	// (0x00026ac4) bg_list_pane_cp03

0xbe20,	// (0x00026ac4) bg_mp_pane

0xbe20,	// (0x00026ac4) grid_mp_pane

0xc55f,	// (0x00027203) media_player_g1

0xccb5,	// (0x00027959) media_player_t1

0xccb5,	// (0x00027959) media_player_t2

0xccb5,	// (0x00027959) media_player_t3

0xccb5,	// (0x00027959) media_player_t4

0xccb5,	// (0x00027959) media_player_t5

0xccb5,	// (0x00027959) media_player_t6

0xccb5,	// (0x00027959) media_player_t7

0x0006,

0xf522,	// (0x0002a1c6) media_player_t

0xbe20,	// (0x00026ac4) wait_bar_pane_cp02

0xf507,	// (0x0002a1ab) main_usb_pane_t

0xcf21,	// (0x00027bc5) cell_mp_pane

0xc4be,	// (0x00027162) cell_mp_pane_g1

0xc23d,	// (0x00026ee1) grid_highlight_pane_cp06

0xc7a8,	// (0x0002744c) grid_skin_colour_pane

0xc7b0,	// (0x00027454) list_highlight_pane_cp03

0x548e,	// (0x00020132) skin_g1

0xc7b8,	// (0x0002745c) skin_t1

0xc7c7,	// (0x0002746b) skin_t2

0x0001,

0xf1d3,	// (0x00029e77) skin_t

0x5498,	// (0x0002013c) cell_skin_colour_pane_ParamLimits

0x5498,	// (0x0002013c) cell_skin_colour_pane

0xc7d5,	// (0x00027479) cell_skin_colour_pane_g1

0x551c,	// (0x000201c0) call_video_g1_ParamLimits

0x551c,	// (0x000201c0) call_video_g1

0x552c,	// (0x000201d0) call_video_g2_ParamLimits

0x552c,	// (0x000201d0) call_video_g2

0x0001,

0xf1d8,	// (0x00029e7c) call_video_g_ParamLimits

0xf1d8,	// (0x00029e7c) call_video_g

0x5586,	// (0x0002022a) call_video_uplink_pane_cp1_ParamLimits

0x5586,	// (0x0002022a) call_video_uplink_pane_cp1

0xc7e7,	// (0x0002748b) call_video_uplink_pane_cp2

0x5652,	// (0x000202f6) video_down_crop_pane_ParamLimits

0x5652,	// (0x000202f6) video_down_crop_pane

0x5744,	// (0x000203e8) video_down_pane_ParamLimits

0x5744,	// (0x000203e8) video_down_pane

0xc7ef,	// (0x00027493) video_down_subqcif_pane_ParamLimits

0xc7ef,	// (0x00027493) video_down_subqcif_pane

0xc807,	// (0x000274ab) video_down_subqcif_pane_cp_ParamLimits

0xc807,	// (0x000274ab) video_down_subqcif_pane_cp

0xc82d,	// (0x000274d1) im_reading_pane_ParamLimits

0xc82d,	// (0x000274d1) im_reading_pane

0x5864,	// (0x00020508) im_writing_pane_ParamLimits

0x5864,	// (0x00020508) im_writing_pane

0x5882,	// (0x00020526) im_reading_pane_t1

0xc847,	// (0x000274eb) list_im_pane

0xc858,	// (0x000274fc) scroll_pane_cp07

0x58da,	// (0x0002057e) im_writing_pane_t1_ParamLimits

0x58da,	// (0x0002057e) im_writing_pane_t1

0xc871,	// (0x00027515) im_writing_pane_t2_ParamLimits

0xc871,	// (0x00027515) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00029e86) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00029e86) im_writing_pane_t

0xc23d,	// (0x00026ee1) input_focus_pane_cp04

0xc23d,	// (0x00026ee1) input_focus_pane_cp05

0x58ec,	// (0x00020590) list_im_single_pane_ParamLimits

0x58ec,	// (0x00020590) list_im_single_pane

0x5913,	// (0x000205b7) list_single_im_pane_t1

0xc786,	// (0x0002742a) blid_accuracy_pane

0xc786,	// (0x0002742a) blid_compass_pane

0xe43c,	// (0x000290e0) main_location_t1

0xe43c,	// (0x000290e0) main_location_t2

0xe43c,	// (0x000290e0) main_location_t3

0x0002,

0xf531,	// (0x0002a1d5) main_location_t

0xc23d,	// (0x00026ee1) aid_levels_location

0xc4be,	// (0x00027162) blid_accuracy_pane_g1

0xc4be,	// (0x00027162) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00029eda) blid_accuracy_pane_g

0xc8b9,	// (0x0002755d) wml_content_pane

0xc8f7,	// (0x0002759b) wml_button_pane_ParamLimits

0xc8f7,	// (0x0002759b) wml_button_pane

0x5922,	// (0x000205c6) wml_list_single_large_pane_ParamLimits

0x5922,	// (0x000205c6) wml_list_single_large_pane

0x594d,	// (0x000205f1) wml_list_single_medium_pane_ParamLimits

0x594d,	// (0x000205f1) wml_list_single_medium_pane

0x597f,	// (0x00020623) wml_list_single_small_pane_ParamLimits

0x597f,	// (0x00020623) wml_list_single_small_pane

0xc90b,	// (0x000275af) wml_selection_box_pane_ParamLimits

0xc90b,	// (0x000275af) wml_selection_box_pane

0xc91e,	// (0x000275c2) wml_list_single_pane_t1

0xc92d,	// (0x000275d1) wml_list_single_medium_pane_t1

0xc93c,	// (0x000275e0) wml_list_single_large_pane_t1

0xc94b,	// (0x000275ef) input_focus_pane_cp02_ParamLimits

0xc94b,	// (0x000275ef) input_focus_pane_cp02

0xc95e,	// (0x00027602) wml_selection_box_pane_g1

0xc967,	// (0x0002760b) wml_selection_box_pane_t1_ParamLimits

0xc967,	// (0x0002760b) wml_selection_box_pane_t1

0xc4a6,	// (0x0002714a) bg_wml_button_pane_ParamLimits

0xc4a6,	// (0x0002714a) bg_wml_button_pane

0xc97f,	// (0x00027623) wml_button_pane_g1

0xc987,	// (0x0002762b) wml_button_pane_t1

0xc97f,	// (0x00027623) wml_button_bg_pane_g1

0xc997,	// (0x0002763b) wml_button_bg_pane_g2

0xc99f,	// (0x00027643) wml_button_bg_pane_g3

0xc9a7,	// (0x0002764b) wml_button_bg_pane_g4

0xc9af,	// (0x00027653) wml_button_bg_pane_g5

0xc9b7,	// (0x0002765b) wml_button_bg_pane_g6

0xc9bf,	// (0x00027663) wml_button_bg_pane_g7

0xc9c7,	// (0x0002766b) wml_button_bg_pane_g8

0xc9cf,	// (0x00027673) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00029e8b) wml_button_bg_pane_g

0x59bc,	// (0x00020660) bg_list_pane_cp02

0xc9d7,	// (0x0002767b) mce_header_pane_ParamLimits

0xc9d7,	// (0x0002767b) mce_header_pane

0xc9ed,	// (0x00027691) mce_icon_pane

0xc9ed,	// (0x00027691) mce_image_pane

0xc9f6,	// (0x0002769a) mce_text_pane_ParamLimits

0xc9f6,	// (0x0002769a) mce_text_pane

0x59c6,	// (0x0002066a) scroll_pane_cp03

0xc8ef,	// (0x00027593) scroll_pane_cp04

0xca09,	// (0x000276ad) scroll_pane_cp05_ParamLimits

0xca09,	// (0x000276ad) scroll_pane_cp05

0x59d0,	// (0x00020674) mce_header_field_pane_ParamLimits

0x59d0,	// (0x00020674) mce_header_field_pane

0x59f0,	// (0x00020694) mce_header_field_pane_2_ParamLimits

0x59f0,	// (0x00020694) mce_header_field_pane_2

0x5a06,	// (0x000206aa) mce_header_field_pane_3

0x5a0e,	// (0x000206b2) list_single_mce_message_pane_ParamLimits

0x5a0e,	// (0x000206b2) list_single_mce_message_pane

0x5a3c,	// (0x000206e0) list_single_mce_smart_pane_ParamLimits

0x5a3c,	// (0x000206e0) list_single_mce_smart_pane

0xca15,	// (0x000276b9) input_focus_pane_cp03

0xca1e,	// (0x000276c2) list_header_data_pane

0x5a75,	// (0x00020719) mce_header_field_pane_t1

0x5a83,	// (0x00020727) list_single_mce_header_pane_ParamLimits

0x5a83,	// (0x00020727) list_single_mce_header_pane

0xca26,	// (0x000276ca) list_single_mce_header_pane_t1

0xca35,	// (0x000276d9) list_single_mce_message_pane_g1

0xca3d,	// (0x000276e1) list_single_mce_message_pane_t1

0x5ad9,	// (0x0002077d) bg_cale_heading_pane_cp01_ParamLimits

0x5ad9,	// (0x0002077d) bg_cale_heading_pane_cp01

0xca4b,	// (0x000276ef) bg_cale_pane_cp02_ParamLimits

0xca4b,	// (0x000276ef) bg_cale_pane_cp02

0x5b27,	// (0x000207cb) cale_month_corner_pane

0x5b46,	// (0x000207ea) cale_month_day_heading_pane_ParamLimits

0x5b46,	// (0x000207ea) cale_month_day_heading_pane

0x5bac,	// (0x00020850) cale_month_pane_g1_ParamLimits

0x5bac,	// (0x00020850) cale_month_pane_g1

0x5bef,	// (0x00020893) cale_month_pane_g2_ParamLimits

0x5bef,	// (0x00020893) cale_month_pane_g2

0x5c29,	// (0x000208cd) cale_month_pane_g3_ParamLimits

0x5c29,	// (0x000208cd) cale_month_pane_g3

0x5c79,	// (0x0002091d) cale_month_pane_g4_ParamLimits

0x5c79,	// (0x0002091d) cale_month_pane_g4

0x5cc9,	// (0x0002096d) cale_month_pane_g5_ParamLimits

0x5cc9,	// (0x0002096d) cale_month_pane_g5

0x5d19,	// (0x000209bd) cale_month_pane_g6_ParamLimits

0x5d19,	// (0x000209bd) cale_month_pane_g6

0x5d69,	// (0x00020a0d) cale_month_pane_g7_ParamLimits

0x5d69,	// (0x00020a0d) cale_month_pane_g7

0x5dd1,	// (0x00020a75) cale_month_pane_g8_ParamLimits

0x5dd1,	// (0x00020a75) cale_month_pane_g8

0x5e39,	// (0x00020add) cale_month_pane_g9_ParamLimits

0x5e39,	// (0x00020add) cale_month_pane_g9

0x5e97,	// (0x00020b3b) cale_month_pane_g10_ParamLimits

0x5e97,	// (0x00020b3b) cale_month_pane_g10

0x5ef5,	// (0x00020b99) cale_month_pane_g11_ParamLimits

0x5ef5,	// (0x00020b99) cale_month_pane_g11

0x5f49,	// (0x00020bed) cale_month_pane_g12_ParamLimits

0x5f49,	// (0x00020bed) cale_month_pane_g12

0x5f9f,	// (0x00020c43) cale_month_pane_g13_ParamLimits

0x5f9f,	// (0x00020c43) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00029e9e) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00029e9e) cale_month_pane_g

0x5ff5,	// (0x00020c99) cale_month_week_pane

0x6019,	// (0x00020cbd) grid_cale_month_pane_ParamLimits

0x6019,	// (0x00020cbd) grid_cale_month_pane

0x6076,	// (0x00020d1a) cale_month_day_heading_pane_t1

0x60fc,	// (0x00020da0) cale_month_day_heading_pane_t2

0x6175,	// (0x00020e19) cale_month_day_heading_pane_t3

0x61ee,	// (0x00020e92) cale_month_day_heading_pane_t4

0x6267,	// (0x00020f0b) cale_month_day_heading_pane_t5

0x62e0,	// (0x00020f84) cale_month_day_heading_pane_t6

0x6359,	// (0x00020ffd) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00029eb9) cale_month_day_heading_pane_t

0xc72b,	// (0x000273cf) bg_cale_side_pane_cp01

0x63ea,	// (0x0002108e) cale_month_week_pane_t1

0x6403,	// (0x000210a7) cale_month_week_pane_t2

0x641c,	// (0x000210c0) cale_month_week_pane_t3

0x6435,	// (0x000210d9) cale_month_week_pane_t4

0x6450,	// (0x000210f4) cale_month_week_pane_t5

0x6471,	// (0x00021115) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00029ec8) cale_month_week_pane_t

0x6492,	// (0x00021136) cell_cale_month_pane_ParamLimits

0x6492,	// (0x00021136) cell_cale_month_pane

0x3aa3,	// (0x0001e747) cell_cale_month_pane_g1

0x3aaf,	// (0x0001e753) cell_cale_month_pane_t1_ParamLimits

0x3aaf,	// (0x0001e753) cell_cale_month_pane_t1

0xc739,	// (0x000273dd) grid_highlight_pane_cp08

0xc4be,	// (0x00027162) main_smil_g1

0x65b8,	// (0x0002125c) smil_status_pane

0xca8a,	// (0x0002772e) smil_text_pane

0xe314,	// (0x00028fb8) bg_popup_call3_rect_pane_g8

0xe31c,	// (0x00028fc0) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x0002a156) bg_popup_call3_rect_pane_g

0xe513,	// (0x000291b7) smil_status_volume_pane_g1

0xca94,	// (0x00027738) smil_status_pane_t1

0x3d79,	// (0x0001ea1d) volume_smil_pane

0xcaab,	// (0x0002774f) list_smil_text_pane

0x65cb,	// (0x0002126f) scroll_pane_cp011

0x65d6,	// (0x0002127a) smil_text_list_pane_t1_ParamLimits

0x65d6,	// (0x0002127a) smil_text_list_pane_t1

0x3adb,	// (0x0001e77f) aid_volume_smil_ParamLimits

0x3adb,	// (0x0001e77f) aid_volume_smil

0xc4be,	// (0x00027162) smil_volume_pane_g1

0xc4be,	// (0x00027162) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00029eda) smil_volume_pane_g

0x4f62,	// (0x0001fc06) listscroll_cale_day_pane

0xcab5,	// (0x00027759) bg_cale_pane

0xcacd,	// (0x00027771) list_cale_pane

0xcaf0,	// (0x00027794) scroll_pane_cp09

0xcb01,	// (0x000277a5) cale_bg_pane_g1

0xcb09,	// (0x000277ad) cale_bg_pane_g2

0xcb11,	// (0x000277b5) cale_bg_pane_g3

0xcb19,	// (0x000277bd) cale_bg_pane_g4

0xcb21,	// (0x000277c5) cale_bg_pane_g5

0xcb29,	// (0x000277cd) cale_bg_pane_g6

0xcb31,	// (0x000277d5) cale_bg_pane_g7

0xcb39,	// (0x000277dd) cale_bg_pane_g8

0xcb41,	// (0x000277e5) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00029edf) cale_bg_pane_g

0x666b,	// (0x0002130f) list_cale_time_pane_ParamLimits

0x666b,	// (0x0002130f) list_cale_time_pane

0xcb49,	// (0x000277ed) list_cale_time_pane_g1_ParamLimits

0xcb49,	// (0x000277ed) list_cale_time_pane_g1

0xcb55,	// (0x000277f9) list_cale_time_pane_g2_ParamLimits

0xcb55,	// (0x000277f9) list_cale_time_pane_g2

0x6693,	// (0x00021337) list_cale_time_pane_g3_ParamLimits

0x6693,	// (0x00021337) list_cale_time_pane_g3

0x66a1,	// (0x00021345) list_cale_time_pane_g4_ParamLimits

0x66a1,	// (0x00021345) list_cale_time_pane_g4

0x66af,	// (0x00021353) list_cale_time_pane_g5_ParamLimits

0x66af,	// (0x00021353) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00029ef2) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00029ef2) list_cale_time_pane_g

0xcb6f,	// (0x00027813) list_cale_time_pane_t1_ParamLimits

0xcb6f,	// (0x00027813) list_cale_time_pane_t1

0xcb97,	// (0x0002783b) list_cale_time_pane_t2_ParamLimits

0xcb97,	// (0x0002783b) list_cale_time_pane_t2

0x6913,	// (0x000215b7) aid_blid_cardinal_pane

0x6955,	// (0x000215f9) compass_pane_t4

0xcbbf,	// (0x00027863) list_cale_time_pane_t4_ParamLimits

0xcbbf,	// (0x00027863) list_cale_time_pane_t4

0x6963,	// (0x00021607) compass_pane_t5

0x6973,	// (0x00021617) compass_pane_t6

0x6981,	// (0x00021625) compass_pane_t7

0xd047,	// (0x00027ceb) navi_pane_cc_t1

0xd224,	// (0x00027ec8) aid_phob_thumbnail_center_pane

0x6dd9,	// (0x00021a7d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00029eff) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00029eff) list_cale_time_pane_t

0xbe94,	// (0x00026b38) bg_popup_window_pane_cp02_ParamLimits

0xbe94,	// (0x00026b38) bg_popup_window_pane_cp02

0xcbe7,	// (0x0002788b) heading_pane_cp01_ParamLimits

0xcbe7,	// (0x0002788b) heading_pane_cp01

0xcbf3,	// (0x00027897) loc_req_pane_ParamLimits

0xcbf3,	// (0x00027897) loc_req_pane

0xcc03,	// (0x000278a7) loc_type_pane_ParamLimits

0xcc03,	// (0x000278a7) loc_type_pane

0xcc15,	// (0x000278b9) loc_type_pane_t1_ParamLimits

0xcc15,	// (0x000278b9) loc_type_pane_t1

0xcc27,	// (0x000278cb) loc_type_pane_t2_ParamLimits

0xcc27,	// (0x000278cb) loc_type_pane_t2

0xcc39,	// (0x000278dd) loc_type_pane_t3_ParamLimits

0xcc39,	// (0x000278dd) loc_type_pane_t3

0x0002,

0xf262,	// (0x00029f06) loc_type_pane_t_ParamLimits

0xf262,	// (0x00029f06) loc_type_pane_t

0xcc4b,	// (0x000278ef) list_loc_req_pane

0xcc55,	// (0x000278f9) scroll_pane_cp012

0x66bd,	// (0x00021361) list_single_loc_request_popup_menu_pane_ParamLimits

0x66bd,	// (0x00021361) list_single_loc_request_popup_menu_pane

0xcc60,	// (0x00027904) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcc60,	// (0x00027904) list_single_loc_request_popup_menu_pane_g1

0xcc6c,	// (0x00027910) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcc6c,	// (0x00027910) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00029f0d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00029f0d) list_single_loc_request_popup_menu_pane_g

0xcc78,	// (0x0002791c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcc78,	// (0x0002791c) list_single_loc_request_popup_menu_pane_t1

0x66d5,	// (0x00021379) bg_popup_window_pane_cp03_ParamLimits

0x66d5,	// (0x00021379) bg_popup_window_pane_cp03

0x66e3,	// (0x00021387) heading_loc_req_pane_ParamLimits

0x66e3,	// (0x00021387) heading_loc_req_pane

0x66ef,	// (0x00021393) popup_dyc_status_message_window_g1_ParamLimits

0x66ef,	// (0x00021393) popup_dyc_status_message_window_g1

0x66fb,	// (0x0002139f) popup_dyc_status_message_window_t1_ParamLimits

0x66fb,	// (0x0002139f) popup_dyc_status_message_window_t1

0x670d,	// (0x000213b1) popup_dyc_status_message_window_t2_ParamLimits

0x670d,	// (0x000213b1) popup_dyc_status_message_window_t2

0x671f,	// (0x000213c3) popup_dyc_status_message_window_t3_ParamLimits

0x671f,	// (0x000213c3) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00029f12) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00029f12) popup_dyc_status_message_window_t

0xc23d,	// (0x00026ee1) bg_heading_pane_cp01

0xcc8e,	// (0x00027932) heading_loc_req_pane_g1

0xcc96,	// (0x0002793a) heading_loc_req_pane_g2

0xcc9e,	// (0x00027942) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00029f19) heading_loc_req_pane_g

0xcca6,	// (0x0002794a) heading_loc_req_pane_t1

0xccc5,	// (0x00027969) bg_popup_sub_pane_cp01_ParamLimits

0xccc5,	// (0x00027969) bg_popup_sub_pane_cp01

0xccd3,	// (0x00027977) popup_cale_events_window_g1_ParamLimits

0xccd3,	// (0x00027977) popup_cale_events_window_g1

0xccf3,	// (0x00027997) popup_cale_events_window_g2_ParamLimits

0xccf3,	// (0x00027997) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00029f3b) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00029f3b) popup_cale_events_window_g

0xcd13,	// (0x000279b7) popup_cale_events_window_t1_ParamLimits

0xcd13,	// (0x000279b7) popup_cale_events_window_t1

0xcd25,	// (0x000279c9) popup_cale_events_window_t2_ParamLimits

0xcd25,	// (0x000279c9) popup_cale_events_window_t2

0xcd63,	// (0x00027a07) popup_cale_events_window_t3_ParamLimits

0xcd63,	// (0x00027a07) popup_cale_events_window_t3

0xcd9d,	// (0x00027a41) popup_cale_events_window_t4_ParamLimits

0xcd9d,	// (0x00027a41) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x00029f40) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x00029f40) popup_cale_events_window_t

0x6749,	// (0x000213ed) call_type_pane

0xda07,	// (0x000286ab) popup_call_status_window_g1

0x6755,	// (0x000213f9) popup_call_status_window_g2

0x6761,	// (0x00021405) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00029f49) popup_call_status_window_g

0xcdd3,	// (0x00027a77) call_type_pane_g1

0xcddc,	// (0x00027a80) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00029f50) call_type_pane_g

0xc23d,	// (0x00026ee1) bg_popup_sub_pane_cp02

0xcde5,	// (0x00027a89) listscroll_popup_wml_pane

0xcded,	// (0x00027a91) list_wml_pane

0xcdf7,	// (0x00027a9b) scroll_pane_cp013

0xce02,	// (0x00027aa6) list_single_graphic_popup_wml_pane_ParamLimits

0xce02,	// (0x00027aa6) list_single_graphic_popup_wml_pane

0xc4be,	// (0x00027162) list_single_graphic_popup_wml_pane_g1

0xce16,	// (0x00027aba) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x00029f55) list_single_graphic_popup_wml_pane_g

0xce1e,	// (0x00027ac2) list_single_graphic_popup_wml_pane_t1

0xce34,	// (0x00027ad8) aid_call_pane

0xc49e,	// (0x00027142) popup_clock_analogue_window_g1

0xc49e,	// (0x00027142) popup_clock_analogue_window_g2

0x3afd,	// (0x0001e7a1) popup_clock_analogue_window_g3

0x3afd,	// (0x0001e7a1) popup_clock_analogue_window_g4

0xc4be,	// (0x00027162) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00029f5a) popup_clock_analogue_window_g

0x3b05,	// (0x0001e7a9) popup_clock_analogue_window_t1

0x3b13,	// (0x0001e7b7) clock_digital_number_pane_ParamLimits

0x3b13,	// (0x0001e7b7) clock_digital_number_pane

0x3b1f,	// (0x0001e7c3) clock_digital_number_pane_cp02_ParamLimits

0x3b1f,	// (0x0001e7c3) clock_digital_number_pane_cp02

0x3b2b,	// (0x0001e7cf) clock_digital_number_pane_cp03_ParamLimits

0x3b2b,	// (0x0001e7cf) clock_digital_number_pane_cp03

0x3b37,	// (0x0001e7db) clock_digital_number_pane_cp04_ParamLimits

0x3b37,	// (0x0001e7db) clock_digital_number_pane_cp04

0x3b43,	// (0x0001e7e7) clock_digital_separator_pane_ParamLimits

0x3b43,	// (0x0001e7e7) clock_digital_separator_pane

0x3b4f,	// (0x0001e7f3) popup_clock_digital_window_t1

0xc4be,	// (0x00027162) clock_digital_number_pane_g1

0xc4be,	// (0x00027162) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00029eda) clock_digital_number_pane_g

0xc4be,	// (0x00027162) clock_digital_separator_pane_g1

0xc4be,	// (0x00027162) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00029eda) clock_digital_separator_pane_g

0xc23d,	// (0x00026ee1) bg_popup_window_pane_cp04

0xce3c,	// (0x00027ae0) heading_pane_cp03

0xc786,	// (0x0002742a) listscroll_popup_gms_pane

0xc23d,	// (0x00026ee1) grid_large_graphic_popup_pane

0xce45,	// (0x00027ae9) listscroll_popup_gms_pane_g1

0xce4e,	// (0x00027af2) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x00029f65) listscroll_popup_gms_pane_g

0xce57,	// (0x00027afb) scroll_pane_cp014

0xc513,	// (0x000271b7) cell_large_graphic_popup_pane_ParamLimits

0xc513,	// (0x000271b7) cell_large_graphic_popup_pane

0xc521,	// (0x000271c5) cell_large_graphic_popup_pane_g1_ParamLimits

0xc521,	// (0x000271c5) cell_large_graphic_popup_pane_g1

0xce60,	// (0x00027b04) cell_large_graphic_popup_pane_g2_ParamLimits

0xce60,	// (0x00027b04) cell_large_graphic_popup_pane_g2

0xce6e,	// (0x00027b12) cell_large_graphic_popup_pane_g3_ParamLimits

0xce6e,	// (0x00027b12) cell_large_graphic_popup_pane_g3

0xce7c,	// (0x00027b20) cell_large_graphic_popup_pane_g4_ParamLimits

0xce7c,	// (0x00027b20) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00029f6a) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00029f6a) cell_large_graphic_popup_pane_g

0xc23d,	// (0x00026ee1) grid_highlight_pane_cp010

0xc4be,	// (0x00027162) bg_popup_call_pane_g1

0xce8d,	// (0x00027b31) list_single_graphic_popup_conf_pane_ParamLimits

0xce8d,	// (0x00027b31) list_single_graphic_popup_conf_pane

0xcea0,	// (0x00027b44) list_highlight_pane_cp01

0xcea9,	// (0x00027b4d) list_single_graphic_popup_conf_pane_g1

0xceb1,	// (0x00027b55) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00029f73) list_single_graphic_popup_conf_pane_g

0xceb9,	// (0x00027b5d) list_single_graphic_popup_conf_pane_t1

0xcec7,	// (0x00027b6b) linegrid_cams_pane_g1

0x676d,	// (0x00021411) linegrid_cams_pane_g2

0xc6ae,	// (0x00027352) linegrid_cams_pane_g3

0xced0,	// (0x00027b74) linegrid_cams_pane_g4

0x6776,	// (0x0002141a) linegrid_cams_pane_g5

0x677f,	// (0x00021423) linegrid_cams_pane_g6

0xc775,	// (0x00027419) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00029f78) linegrid_cams_pane_g

0xced9,	// (0x00027b7d) popup_clock_analogue_window

0xced9,	// (0x00027b7d) popup_clock_digital_window

0xc23d,	// (0x00026ee1) popup_phob_thumbnail_window

0xc4be,	// (0x00027162) call_video_uplink_pane_g1

0xcee2,	// (0x00027b86) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x00029f87) call_video_uplink_pane_g

0xceea,	// (0x00027b8e) video_uplink_pane

0xcef2,	// (0x00027b96) mce_image_pane_g1

0x6788,	// (0x0002142c) mce_image_pane_g2

0x6790,	// (0x00021434) mce_image_pane_g3

0x6798,	// (0x0002143c) mce_image_pane_g4

0x67a0,	// (0x00021444) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00029f8c) mce_image_pane_g

0xcefc,	// (0x00027ba0) control_top_pane_stacon_cp01_ParamLimits

0xcefc,	// (0x00027ba0) control_top_pane_stacon_cp01

0xcf10,	// (0x00027bb4) uni_indicator_pane_stacon_cp01_ParamLimits

0xcf10,	// (0x00027bb4) uni_indicator_pane_stacon_cp01

0xcf21,	// (0x00027bc5) bg_popup_sub_pane_cp03

0x67a8,	// (0x0002144c) chi_dic_find_pane

0x67b0,	// (0x00021454) listscroll_chi_dic_pane

0x67b9,	// (0x0002145d) main_pane_chidic_g1

0x67cc,	// (0x00021470) chi_dic_find_pane_t1

0xcf2b,	// (0x00027bcf) find_chidic_pane

0xcf40,	// (0x00027be4) chi_dic_list_pane_ParamLimits

0xcf40,	// (0x00027be4) chi_dic_list_pane

0xcf51,	// (0x00027bf5) scroll_pane_cp020

0x67da,	// (0x0002147e) find_chidic_pane_t1

0xc23d,	// (0x00026ee1) input_focus_pane_cp06

0x67e9,	// (0x0002148d) list_chi_dic_pane_ParamLimits

0x67e9,	// (0x0002148d) list_chi_dic_pane

0x6806,	// (0x000214aa) list_chi_dic_pane_t1_ParamLimits

0x6806,	// (0x000214aa) list_chi_dic_pane_t1

0xc23d,	// (0x00026ee1) list_highlight_pane_cp020

0xcf59,	// (0x00027bfd) bg_cale_heading_pane_g1

0x6819,	// (0x000214bd) bg_cale_heading_pane_g2

0x6821,	// (0x000214c5) bg_cale_heading_pane_g3

0x6829,	// (0x000214cd) bg_cale_heading_pane_g4

0x6833,	// (0x000214d7) bg_cale_heading_pane_g5

0x683d,	// (0x000214e1) bg_cale_heading_pane_g6

0x6845,	// (0x000214e9) bg_cale_heading_pane_g7

0x684d,	// (0x000214f1) bg_cale_heading_pane_g8

0x6857,	// (0x000214fb) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x00029f97) bg_cale_heading_pane_g

0xcf59,	// (0x00027bfd) bg_cale_side_pane_g1

0x6861,	// (0x00021505) bg_cale_side_pane_g2

0x686b,	// (0x0002150f) bg_cale_side_pane_g3

0x6875,	// (0x00021519) bg_cale_side_pane_g4

0x687f,	// (0x00021523) bg_cale_side_pane_g5

0x6889,	// (0x0002152d) bg_cale_side_pane_g6

0x6893,	// (0x00021537) bg_cale_side_pane_g7

0x689d,	// (0x00021541) bg_cale_side_pane_g8

0x68a5,	// (0x00021549) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00029faa) bg_cale_side_pane_g

0x68ad,	// (0x00021551) popup_call_status_window_ParamLimits

0x68ad,	// (0x00021551) popup_call_status_window

0xcf61,	// (0x00027c05) stacon_top_pane

0xcf69,	// (0x00027c0d) status_pane_ParamLimits

0xcf69,	// (0x00027c0d) status_pane

0xcf7e,	// (0x00027c22) status_small_pane

0xcf86,	// (0x00027c2a) control_pane

0xc23d,	// (0x00026ee1) stacon_bottom_pane

0xcf8e,	// (0x00027c32) list_single_mce_smart_pane_t1_ParamLimits

0xcf8e,	// (0x00027c32) list_single_mce_smart_pane_t1

0xcfa1,	// (0x00027c45) list_single_mce_smart_pane_t2_ParamLimits

0xcfa1,	// (0x00027c45) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00029fbd) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00029fbd) list_single_mce_smart_pane_t

0x68b9,	// (0x0002155d) compass_pane

0x68c5,	// (0x00021569) main_location2_pane_t1

0x68d9,	// (0x0002157d) main_location2_pane_t2

0x68ed,	// (0x00021591) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00029fc2) main_location2_pane_t

0xcfc0,	// (0x00027c64) compass_pane_g1_ParamLimits

0xcfc0,	// (0x00027c64) compass_pane_g1

0x6937,	// (0x000215db) compass_pane_t1

0x6946,	// (0x000215ea) compass_pane_t2

0x0005,

0xf327,	// (0x00029fcb) compass_pane_t

0x6991,	// (0x00021635) text_secondary_cp61

0xd03e,	// (0x00027ce2) navi_pane_cams_g5

0xd0ba,	// (0x00027d5e) navi_pane_im_t1

0xd0c8,	// (0x00027d6c) navi_pane_mp_g1_ParamLimits

0xd0c8,	// (0x00027d6c) navi_pane_mp_g1

0xd0dc,	// (0x00027d80) navi_pane_mp_g2_ParamLimits

0xd0dc,	// (0x00027d80) navi_pane_mp_g2

0xd0e8,	// (0x00027d8c) navi_pane_mp_g3_ParamLimits

0xd0e8,	// (0x00027d8c) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00029fdf) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00029fdf) navi_pane_mp_g

0xd0f4,	// (0x00027d98) navi_pane_mp_t1

0xd102,	// (0x00027da6) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00029fe6) navi_pane_mp_t

0xd16d,	// (0x00027e11) navi_pane_vt_g1

0xd0f4,	// (0x00027d98) navi_pane_vt_t1

0xd175,	// (0x00027e19) navi_slider_pane

0xc786,	// (0x0002742a) zooming_pane

0xd185,	// (0x00027e29) navi_slider_pane_g1

0x3b6c,	// (0x0001e810) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00029fed) navi_slider_pane_g

0xd1a9,	// (0x00027e4d) aid_levels_zoom

0xd1b1,	// (0x00027e55) zooming_pane_g1

0xd1b9,	// (0x00027e5d) zooming_pane_g2

0xd1b9,	// (0x00027e5d) zooming_pane_g3

0x0002,

0xf358,	// (0x00029ffc) zooming_pane_g

0xd1c1,	// (0x00027e65) level_10_zoom

0xd1ca,	// (0x00027e6e) level_11_zoom

0xd1d3,	// (0x00027e77) level_1_zoom

0xd1dc,	// (0x00027e80) level_2_zoom

0xd1e5,	// (0x00027e89) level_3_zoom

0xd1ee,	// (0x00027e92) level_4_zoom

0xd1f7,	// (0x00027e9b) level_5_zoom

0xd200,	// (0x00027ea4) level_6_zoom

0xd209,	// (0x00027ead) level_7_zoom

0xd212,	// (0x00027eb6) level_8_zoom

0xd21b,	// (0x00027ebf) level_9_zoom

0xd22c,	// (0x00027ed0) popup_phob_thumbnail_window_g1

0xd234,	// (0x00027ed8) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0002a003) popup_phob_thumbnail_window_g

0x72eb,	// (0x00021f8f) level_1_location

0x72f3,	// (0x00021f97) level_2_location

0x72fb,	// (0x00021f9f) level_3_location

0x7305,	// (0x00021fa9) level_4_location

0xc786,	// (0x0002742a) level_5_location

0x69cc,	// (0x00021670) mce_icon_pane_g1

0x69d4,	// (0x00021678) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0002a008) mce_icon_pane_g

0x69dc,	// (0x00021680) main_mup_pane_g1_ParamLimits

0x69dc,	// (0x00021680) main_mup_pane_g1

0xc53d,	// (0x000271e1) main_mup_pane_g2_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g2

0xc53d,	// (0x000271e1) main_mup_pane_g3_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g3

0xc53d,	// (0x000271e1) main_mup_pane_g4_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g4

0xc53d,	// (0x000271e1) main_mup_pane_g5_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g5

0xc53d,	// (0x000271e1) main_mup_pane_g6_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g6

0xc53d,	// (0x000271e1) main_mup_pane_g7_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g7

0xc53d,	// (0x000271e1) main_mup_pane_g8_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g8

0xc53d,	// (0x000271e1) main_mup_pane_g9_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g9

0xc53d,	// (0x000271e1) main_mup_pane_g10_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g10

0xc53d,	// (0x000271e1) main_mup_pane_g11_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g11

0xc52f,	// (0x000271d3) main_mup_pane_g12_ParamLimits

0xc52f,	// (0x000271d3) main_mup_pane_g12

0xc53d,	// (0x000271e1) main_mup_pane_g13_ParamLimits

0xc53d,	// (0x000271e1) main_mup_pane_g13

0x000c,

0xf369,	// (0x0002a00d) main_mup_pane_g_ParamLimits

0xf369,	// (0x0002a00d) main_mup_pane_g

0xc54b,	// (0x000271ef) main_mup_pane_t1_ParamLimits

0xc54b,	// (0x000271ef) main_mup_pane_t1

0xc54b,	// (0x000271ef) main_mup_pane_t2_ParamLimits

0xc54b,	// (0x000271ef) main_mup_pane_t2

0xc54b,	// (0x000271ef) main_mup_pane_t3_ParamLimits

0xc54b,	// (0x000271ef) main_mup_pane_t3

0xc57d,	// (0x00027221) main_mup_pane_t4_ParamLimits

0xc57d,	// (0x00027221) main_mup_pane_t4

0xc57d,	// (0x00027221) main_mup_pane_t5_ParamLimits

0xc57d,	// (0x00027221) main_mup_pane_t5

0xc569,	// (0x0002720d) main_mup_pane_t6_ParamLimits

0xc569,	// (0x0002720d) main_mup_pane_t6

0x0005,

0xf384,	// (0x0002a028) main_mup_pane_t_ParamLimits

0xf384,	// (0x0002a028) main_mup_pane_t

0xc315,	// (0x00026fb9) mup_progress_pane_ParamLimits

0xc315,	// (0x00026fb9) mup_progress_pane

0xe45c,	// (0x00029100) mup_visualizer_pane_ParamLimits

0xe45c,	// (0x00029100) mup_visualizer_pane

0xe45c,	// (0x00029100) mup_volume_pane_ParamLimits

0xe45c,	// (0x00029100) mup_volume_pane

0xc52f,	// (0x000271d3) mup_visualizer_pane_g1_ParamLimits

0xc52f,	// (0x000271d3) mup_visualizer_pane_g1

0xd23c,	// (0x00027ee0) mup_visualizer_pane_g2_ParamLimits

0xd23c,	// (0x00027ee0) mup_visualizer_pane_g2

0xc521,	// (0x000271c5) mup_visualizer_pane_g3_ParamLimits

0xc521,	// (0x000271c5) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0002a035) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0002a035) mup_visualizer_pane_g

0xc55f,	// (0x00027203) mup_volume_pane_g1

0xc55f,	// (0x00027203) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00029d53) mup_volume_pane_g

0xc55f,	// (0x00027203) mup_progress_pane_g1

0xc55f,	// (0x00027203) mup_progress_pane_g2

0xc55f,	// (0x00027203) mup_progress_pane_g3

0x0002,

0xf398,	// (0x0002a03c) mup_progress_pane_g

0xc23d,	// (0x00026ee1) bg_popup_window_pane_cp05

0xd24a,	// (0x00027eee) heading_pane_cp02_ParamLimits

0xd24a,	// (0x00027eee) heading_pane_cp02

0xd264,	// (0x00027f08) list_popup_blid_pane

0xd26c,	// (0x00027f10) list_blid_sat_info_pane_ParamLimits

0xd26c,	// (0x00027f10) list_blid_sat_info_pane

0xd27f,	// (0x00027f23) list_blid_sat_info_pane_g1

0xd287,	// (0x00027f2b) list_blid_sat_info_pane_t1

0x6ad7,	// (0x0002177b) mup_equalizer_pane_ParamLimits

0x6ad7,	// (0x0002177b) mup_equalizer_pane

0x6af8,	// (0x0002179c) mup_equalizer_pane_cp1_ParamLimits

0x6af8,	// (0x0002179c) mup_equalizer_pane_cp1

0x6b19,	// (0x000217bd) mup_equalizer_pane_cp2_ParamLimits

0x6b19,	// (0x000217bd) mup_equalizer_pane_cp2

0x6b3a,	// (0x000217de) mup_equalizer_pane_cp3_ParamLimits

0x6b3a,	// (0x000217de) mup_equalizer_pane_cp3

0x6b5b,	// (0x000217ff) mup_equalizer_pane_cp4_ParamLimits

0x6b5b,	// (0x000217ff) mup_equalizer_pane_cp4

0x6b7c,	// (0x00021820) mup_equalizer_pane_cp5

0x6b92,	// (0x00021836) mup_equalizer_pane_cp6

0x6baa,	// (0x0002184e) mup_equalizer_pane_cp7

0xe394,	// (0x00029038) bg_popup_call_poc_act_pane_g9

0xe39c,	// (0x00029040) bg_popup_call_poc_act_pane_g10

0xe3a4,	// (0x00029048) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4a6,	// (0x0002714a) mup_scale_pane

0xc4be,	// (0x00027162) mup_scale_pane_g1

0xd295,	// (0x00027f39) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x0002a058) mup_scale_pane_g

0xd2e9,	// (0x00027f8d) msg_data_pane

0xd2f1,	// (0x00027f95) scroll_pane_cp017

0x6bd4,	// (0x00021878) bg_list_pane_cp04_ParamLimits

0x6bd4,	// (0x00021878) bg_list_pane_cp04

0xd2f9,	// (0x00027f9d) msg_data_pane_g1

0x6bf4,	// (0x00021898) msg_data_pane_g2

0x6bfc,	// (0x000218a0) msg_data_pane_g3

0x6c04,	// (0x000218a8) msg_data_pane_g4

0x6c0c,	// (0x000218b0) msg_data_pane_g5

0x6c14,	// (0x000218b8) msg_data_pane_g6

0x6c1c,	// (0x000218c0) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x0002a067) msg_data_pane_g

0x6c24,	// (0x000218c8) msg_text_pane_ParamLimits

0x6c24,	// (0x000218c8) msg_text_pane

0x6c90,	// (0x00021934) qrid_highlight_pane_cp011_ParamLimits

0x6c90,	// (0x00021934) qrid_highlight_pane_cp011

0xc23d,	// (0x00026ee1) msg_body_pane

0xc4a6,	// (0x0002714a) msg_header_pane

0xd315,	// (0x00027fb9) input_focus_pane_cp07

0x6cb8,	// (0x0002195c) msg_header_pane_t1_ParamLimits

0x6cb8,	// (0x0002195c) msg_header_pane_t1

0x6cd4,	// (0x00021978) msg_header_pane_t2_ParamLimits

0x6cd4,	// (0x00021978) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x0002a07b) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x0002a07b) msg_header_pane_t

0xd336,	// (0x00027fda) msg_body_pane_g1

0x6cf4,	// (0x00021998) msg_body_pane_t1_ParamLimits

0x6cf4,	// (0x00021998) msg_body_pane_t1

0x6d25,	// (0x000219c9) msg_body_pane_t2_ParamLimits

0x6d25,	// (0x000219c9) msg_body_pane_t2

0x6d37,	// (0x000219db) msg_body_pane_t3_ParamLimits

0x6d37,	// (0x000219db) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x0002a080) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x0002a080) msg_body_pane_t

0x3bae,	// (0x0001e852) main_viewer_pane_g1_ParamLimits

0x3bae,	// (0x0001e852) main_viewer_pane_g1

0x3bba,	// (0x0001e85e) main_viewer_pane_g2_ParamLimits

0x3bba,	// (0x0001e85e) main_viewer_pane_g2

0x6d6b,	// (0x00021a0f) main_viewer_pane_g3_ParamLimits

0x6d6b,	// (0x00021a0f) main_viewer_pane_g3

0x6d7c,	// (0x00021a20) main_viewer_pane_g4_ParamLimits

0x6d7c,	// (0x00021a20) main_viewer_pane_g4

0x3bc6,	// (0x0001e86a) main_viewer_pane_g5_ParamLimits

0x3bc6,	// (0x0001e86a) main_viewer_pane_g5

0x3bc6,	// (0x0001e86a) main_viewer_pane_g7_ParamLimits

0x3bc6,	// (0x0001e86a) main_viewer_pane_g7

0xcc60,	// (0x00027904) main_viewer_pane_g8_ParamLimits

0xcc60,	// (0x00027904) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x0002a090) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x0002a090) main_viewer_pane_g

0xd33e,	// (0x00027fe2) viewer_content_pane_ParamLimits

0xd33e,	// (0x00027fe2) viewer_content_pane

0x6dad,	// (0x00021a51) main_postcard_pane_g1_ParamLimits

0x6dad,	// (0x00021a51) main_postcard_pane_g1

0x6dbb,	// (0x00021a5f) main_postcard_pane_g2_ParamLimits

0x6dbb,	// (0x00021a5f) main_postcard_pane_g2

0x6dc9,	// (0x00021a6d) main_postcard_pane_g3_ParamLimits

0x6dc9,	// (0x00021a6d) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x0002a0a1) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x0002a0a1) main_postcard_pane_g

0x6dd9,	// (0x00021a7d) main_postcard_pane_g4

0xe526,	// (0x000291ca) smil_status_volume_pane_g2

0x6e05,	// (0x00021aa9) postcard_pane_ParamLimits

0x6e05,	// (0x00021aa9) postcard_pane

0xda07,	// (0x000286ab) postcard_pane_g1_ParamLimits

0xda07,	// (0x000286ab) postcard_pane_g1

0x6e37,	// (0x00021adb) postcard_pane_g2_ParamLimits

0x6e37,	// (0x00021adb) postcard_pane_g2

0x6e43,	// (0x00021ae7) postcard_pane_g3_ParamLimits

0x6e43,	// (0x00021ae7) postcard_pane_g3

0xd34c,	// (0x00027ff0) postcard_pane_g4_ParamLimits

0xd34c,	// (0x00027ff0) postcard_pane_g4

0x6e4f,	// (0x00021af3) postcard_pane_g5_ParamLimits

0x6e4f,	// (0x00021af3) postcard_pane_g5

0x6e5b,	// (0x00021aff) postcard_pane_g6_ParamLimits

0x6e5b,	// (0x00021aff) postcard_pane_g6

0xd35a,	// (0x00027ffe) postcard_pane_g7_ParamLimits

0xd35a,	// (0x00027ffe) postcard_pane_g7

0x0006,

0xf40a,	// (0x0002a0ae) postcard_pane_g_ParamLimits

0xf40a,	// (0x0002a0ae) postcard_pane_g

0x6e67,	// (0x00021b0b) main_mp2_pane_g1_ParamLimits

0x6e67,	// (0x00021b0b) main_mp2_pane_g1

0x6e73,	// (0x00021b17) main_mp2_pane_g2_ParamLimits

0x6e73,	// (0x00021b17) main_mp2_pane_g2

0x6e7f,	// (0x00021b23) main_mp2_pane_g3_ParamLimits

0x6e7f,	// (0x00021b23) main_mp2_pane_g3

0x0002,

0xf419,	// (0x0002a0bd) main_mp2_pane_g_ParamLimits

0xf419,	// (0x0002a0bd) main_mp2_pane_g

0x6e8b,	// (0x00021b2f) main_mp2_pane_t1_ParamLimits

0x6e8b,	// (0x00021b2f) main_mp2_pane_t1

0x6ea2,	// (0x00021b46) main_mp2_pane_t2_ParamLimits

0x6ea2,	// (0x00021b46) main_mp2_pane_t2

0x6eb4,	// (0x00021b58) main_mp2_pane_t3_ParamLimits

0x6eb4,	// (0x00021b58) main_mp2_pane_t3

0x0002,

0xf420,	// (0x0002a0c4) main_mp2_pane_t_ParamLimits

0xf420,	// (0x0002a0c4) main_mp2_pane_t

0xc315,	// (0x00026fb9) pec_content_pane_ParamLimits

0xc315,	// (0x00026fb9) pec_content_pane

0xbe20,	// (0x00026ac4) scroll_pane_cp015

0xd2a7,	// (0x00027f4b) pec_attribute_pane_ParamLimits

0xd2a7,	// (0x00027f4b) pec_attribute_pane

0xc521,	// (0x000271c5) pec_content_pane_g1_ParamLimits

0xc521,	// (0x000271c5) pec_content_pane_g1

0xd368,	// (0x0002800c) pec_content_pane_t1_ParamLimits

0xd368,	// (0x0002800c) pec_content_pane_t1

0xd37c,	// (0x00028020) pec_content_pane_t2_ParamLimits

0xd37c,	// (0x00028020) pec_content_pane_t2

0x0001,

0xf427,	// (0x0002a0cb) pec_content_pane_t_ParamLimits

0xf427,	// (0x0002a0cb) pec_content_pane_t

0xc513,	// (0x000271b7) list_single_graphic_pane_cp01_ParamLimits

0xc513,	// (0x000271b7) list_single_graphic_pane_cp01

0xc4a6,	// (0x0002714a) bg_popup_sub_pane_cp04

0xd390,	// (0x00028034) popup_mup_playback_window_g1

0xd39c,	// (0x00028040) popup_mup_playback_window_t1

0xd3b1,	// (0x00028055) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x0002a0d0) popup_mup_playback_window_t

0xd3e8,	// (0x0002808c) main_image_pane_g1_ParamLimits

0xd3e8,	// (0x0002808c) main_image_pane_g1

0xd42b,	// (0x000280cf) scroll_pane_cp018_ParamLimits

0xd42b,	// (0x000280cf) scroll_pane_cp018

0xd443,	// (0x000280e7) scroll_pane_cp016_ParamLimits

0xd443,	// (0x000280e7) scroll_pane_cp016

0x6f37,	// (0x00021bdb) smil2_image_pane_ParamLimits

0x6f37,	// (0x00021bdb) smil2_image_pane

0x6f67,	// (0x00021c0b) smil2_root_pane_ParamLimits

0x6f67,	// (0x00021c0b) smil2_root_pane

0x6f93,	// (0x00021c37) smil2_text_pane_ParamLimits

0x6f93,	// (0x00021c37) smil2_text_pane

0xbe20,	// (0x00026ac4) bg_list_pane_cp06

0xbe20,	// (0x00026ac4) grid_radio_pane

0xc23d,	// (0x00026ee1) bg_popup_window_pane_cp06

0xccb5,	// (0x00027959) main_fmradio_pane_t1

0xe3ec,	// (0x00029090) heading_pane_cp04

0xccb5,	// (0x00027959) main_fmradio_pane_t2

0xe3f4,	// (0x00029098) popup_cale_lunar_info_window_g1

0xccb5,	// (0x00027959) main_fmradio_pane_t3

0xe3fc,	// (0x000290a0) popup_cale_lunar_info_window_g2

0xccb5,	// (0x00027959) main_fmradio_pane_t4

0x0001,

0xccb5,	// (0x00027959) main_fmradio_pane_t5

0x0004,

0xf514,	// (0x0002a1b8) popup_cale_lunar_info_window_g

0xf28c,	// (0x00029f30) main_fmradio_pane_t

0xbe20,	// (0x00026ac4) wait_bar_pane_cp03

0xc513,	// (0x000271b7) cell_fmradio_pane_ParamLimits

0xc513,	// (0x000271b7) cell_fmradio_pane

0xc521,	// (0x000271c5) cell_fmradio_pane_g1_ParamLimits

0xc521,	// (0x000271c5) cell_fmradio_pane_g1

0xbe20,	// (0x00026ac4) grid_highlight_pane_cp011

0xd477,	// (0x0002811b) poc_content_pane_ParamLimits

0xd477,	// (0x0002811b) poc_content_pane

0xd489,	// (0x0002812d) scroll_pane_cp019

0x6fd3,	// (0x00021c77) popup_call_poc_act_window_ParamLimits

0x6fd3,	// (0x00021c77) popup_call_poc_act_window

0x6fe0,	// (0x00021c84) popup_call_poc_inact_window_ParamLimits

0x6fe0,	// (0x00021c84) popup_call_poc_inact_window

0xf4d8,	// (0x0002a17c) bg_popup_call_poc_act_pane_g

0xe3ac,	// (0x00029050) bg_popup_call_poc_inact_pane_g1

0xe3b4,	// (0x00029058) bg_popup_call_poc_inact_pane_g2

0xd491,	// (0x00028135) popup_call_poc_act_window_g2

0xe3bc,	// (0x00029060) bg_popup_call_poc_inact_pane_g3

0xe33c,	// (0x00028fe0) bg_popup_call_poc_inact_pane_g4

0xe3c4,	// (0x00029068) bg_popup_call_poc_inact_pane_g5

0xd499,	// (0x0002813d) popup_call_poc_act_window_t1_ParamLimits

0xd499,	// (0x0002813d) popup_call_poc_act_window_t1

0xd4c1,	// (0x00028165) popup_call_poc_act_window_t2_ParamLimits

0xd4c1,	// (0x00028165) popup_call_poc_act_window_t2

0xd4e9,	// (0x0002818d) popup_call_poc_act_window_t3_ParamLimits

0xd4e9,	// (0x0002818d) popup_call_poc_act_window_t3

0xd511,	// (0x000281b5) popup_call_poc_act_window_t4_ParamLimits

0xd511,	// (0x000281b5) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x0002a0e5) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x0002a0e5) popup_call_poc_act_window_t

0xe3cc,	// (0x00029070) bg_popup_call_poc_inact_pane_g6

0xe3d4,	// (0x00029078) bg_popup_call_poc_inact_pane_g7

0xe3dc,	// (0x00029080) bg_popup_call_poc_inact_pane_g8

0xd523,	// (0x000281c7) popup_call_poc_inact_window_g2

0xe3e4,	// (0x00029088) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ef,	// (0x0002a193) bg_popup_call_poc_inact_pane_g

0xd52b,	// (0x000281cf) popup_call_poc_inact_window_t1_ParamLimits

0xd52b,	// (0x000281cf) popup_call_poc_inact_window_t1

0xd540,	// (0x000281e4) popup_call_poc_inact_window_t2_ParamLimits

0xd540,	// (0x000281e4) popup_call_poc_inact_window_t2

0xd555,	// (0x000281f9) popup_call_poc_inact_window_t3_ParamLimits

0xd555,	// (0x000281f9) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x0002a0ee) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x0002a0ee) popup_call_poc_inact_window_t

0xe49e,	// (0x00029142) context_pane_ParamLimits

0x746b,	// (0x0002210f) signal_pane_ParamLimits

0xc786,	// (0x0002742a) main_call2_pane

0x3d1d,	// (0x0001e9c1) popup_phob_thumbnail2_window_ParamLimits

0x3d1d,	// (0x0001e9c1) popup_phob_thumbnail2_window

0x3b7e,	// (0x0001e822) aid_hotspot_pointer_arrow_pane

0x3b86,	// (0x0001e82a) aid_hotspot_pointer_hand_pane

0x72b3,	// (0x00021f57) phob_pre_status_pane_g5

0xc513,	// (0x000271b7) cams_zoom_pane_ParamLimits

0xc513,	// (0x000271b7) image_vga_pane_ParamLimits

0xc52f,	// (0x000271d3) main_camera_pane_g1_ParamLimits

0xc52f,	// (0x000271d3) main_camera_pane_g2_ParamLimits

0xc52f,	// (0x000271d3) main_camera_pane_g3_ParamLimits

0xc52f,	// (0x000271d3) main_camera_pane_g4_ParamLimits

0xc52f,	// (0x000271d3) main_camera_pane_g5_ParamLimits

0xc52f,	// (0x000271d3) main_camera_pane_g6_ParamLimits

0xc52f,	// (0x000271d3) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00029e24) main_camera_pane_g_ParamLimits

0xc57d,	// (0x00027221) main_camera_pane_t1_ParamLimits

0xc57d,	// (0x00027221) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00029e35) main_camera_pane_t_ParamLimits

0xc4a6,	// (0x0002714a) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4a6,	// (0x0002714a) bg_popup_preview_window_pane_cp01

0xd56a,	// (0x0002820e) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56a,	// (0x0002820e) popup_phob_thumbnail2_window_g1

0xc23d,	// (0x00026ee1) call2_cli_visual_pane

0x6ffc,	// (0x00021ca0) popup_call2_audio_conf_window_ParamLimits

0x6ffc,	// (0x00021ca0) popup_call2_audio_conf_window

0x7011,	// (0x00021cb5) popup_call2_audio_first_window_ParamLimits

0x7011,	// (0x00021cb5) popup_call2_audio_first_window

0x70af,	// (0x00021d53) popup_call2_audio_in_window_ParamLimits

0x70af,	// (0x00021d53) popup_call2_audio_in_window

0x70f1,	// (0x00021d95) popup_call2_audio_out_window_ParamLimits

0x70f1,	// (0x00021d95) popup_call2_audio_out_window

0x7153,	// (0x00021df7) popup_call2_audio_second_window_ParamLimits

0x7153,	// (0x00021df7) popup_call2_audio_second_window

0x71b1,	// (0x00021e55) popup_call2_audio_wait_window_ParamLimits

0x71b1,	// (0x00021e55) popup_call2_audio_wait_window

0xc23d,	// (0x00026ee1) bg_popup_call2_act_pane_cp03

0xc488,	// (0x0002712c) list_conf_pane_cp

0xd576,	// (0x0002821a) popup_call2_audio_conf_window_t1

0xd584,	// (0x00028228) list_single_graphic_popup_conf2_pane_ParamLimits

0xd584,	// (0x00028228) list_single_graphic_popup_conf2_pane

0xcea0,	// (0x00027b44) list_highlight_pane_cp04

0xd597,	// (0x0002823b) list_single_graphic_popup_conf2_pane_g1

0xceb1,	// (0x00027b55) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x0002a0f5) list_single_graphic_popup_conf2_pane_g

0xd5a1,	// (0x00028245) list_single_graphic_popup_conf2_pane_t1

0xd5af,	// (0x00028253) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5af,	// (0x00028253) bg_popup_call2_act_pane_cp01

0xd639,	// (0x000282dd) call_type_pane_cp05_ParamLimits

0xd639,	// (0x000282dd) call_type_pane_cp05

0xd68d,	// (0x00028331) popup_call2_audio_second_window_g1_ParamLimits

0xd68d,	// (0x00028331) popup_call2_audio_second_window_g1

0xd6e1,	// (0x00028385) popup_call2_audio_second_window_g2_ParamLimits

0xd6e1,	// (0x00028385) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x0002a0fa) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x0002a0fa) popup_call2_audio_second_window_g

0xd746,	// (0x000283ea) popup_call2_audio_second_window_t1_ParamLimits

0xd746,	// (0x000283ea) popup_call2_audio_second_window_t1

0xd801,	// (0x000284a5) popup_call2_audio_second_window_t2_ParamLimits

0xd801,	// (0x000284a5) popup_call2_audio_second_window_t2

0xd854,	// (0x000284f8) popup_call2_audio_second_window_t3_ParamLimits

0xd854,	// (0x000284f8) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x0002a101) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x0002a101) popup_call2_audio_second_window_t

0xc23d,	// (0x00026ee1) bg_popup_call2_in_pane_cp02

0xc247,	// (0x00026eeb) call_type_pane_cp04

0x71f0,	// (0x00021e94) popup_call2_audio_wait_window_g1

0x71f8,	// (0x00021e9c) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x0002a10a) popup_call2_audio_wait_window_g

0xc25f,	// (0x00026f03) popup_call2_audio_wait_window_t3

0xd947,	// (0x000285eb) bg_popup_call2_act_pane_ParamLimits

0xd947,	// (0x000285eb) bg_popup_call2_act_pane

0xda15,	// (0x000286b9) call_type_pane_cp03_ParamLimits

0xda15,	// (0x000286b9) call_type_pane_cp03

0xda79,	// (0x0002871d) popup_call2_audio_first_window_g1_ParamLimits

0xda79,	// (0x0002871d) popup_call2_audio_first_window_g1

0xdae9,	// (0x0002878d) popup_call2_audio_first_window_g2_ParamLimits

0xdae9,	// (0x0002878d) popup_call2_audio_first_window_g2

0xda07,	// (0x000286ab) popup_call2_audio_first_window_g3_ParamLimits

0xda07,	// (0x000286ab) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x0002a10f) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x0002a10f) popup_call2_audio_first_window_g

0xdbc7,	// (0x0002886b) popup_call2_audio_first_window_t1_ParamLimits

0xdbc7,	// (0x0002886b) popup_call2_audio_first_window_t1

0xdcca,	// (0x0002896e) popup_call2_audio_first_window_t4_ParamLimits

0xdcca,	// (0x0002896e) popup_call2_audio_first_window_t4

0xddad,	// (0x00028a51) popup_call2_audio_first_window_t5_ParamLimits

0xddad,	// (0x00028a51) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x0002a11a) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x0002a11a) popup_call2_audio_first_window_t

0xc49e,	// (0x00027142) bg_popup_call2_act_pane_g1

0xe404,	// (0x000290a8) popup_cale_lunar_info_window_t1

0xe412,	// (0x000290b6) popup_cale_lunar_info_window_t2

0xe420,	// (0x000290c4) popup_cale_lunar_info_window_t3

0xc23d,	// (0x00026ee1) bg_popup_call2_bubble_pane

0xdeae,	// (0x00028b52) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeae,	// (0x00028b52) bg_popup_call2_in_pane_cp01

0xbf19,	// (0x00026bbd) call_type_pane_cp02

0x7200,	// (0x00021ea4) popup_call2_audio_out_window_g1_ParamLimits

0x7200,	// (0x00021ea4) popup_call2_audio_out_window_g1

0xdef6,	// (0x00028b9a) popup_call2_audio_out_window_g2_ParamLimits

0xdef6,	// (0x00028b9a) popup_call2_audio_out_window_g2

0x722c,	// (0x00021ed0) popup_call2_audio_out_window_g3_ParamLimits

0x722c,	// (0x00021ed0) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x0002a123) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x0002a123) popup_call2_audio_out_window_g

0xdf2d,	// (0x00028bd1) popup_call2_audio_out_window_t1_ParamLimits

0xdf2d,	// (0x00028bd1) popup_call2_audio_out_window_t1

0xdf8c,	// (0x00028c30) popup_call2_audio_out_window_t2_ParamLimits

0xdf8c,	// (0x00028c30) popup_call2_audio_out_window_t2

0xdfe0,	// (0x00028c84) popup_call2_audio_out_window_t3_ParamLimits

0xdfe0,	// (0x00028c84) popup_call2_audio_out_window_t3

0xdff6,	// (0x00028c9a) popup_call2_audio_out_window_t4_ParamLimits

0xdff6,	// (0x00028c9a) popup_call2_audio_out_window_t4

0xe00c,	// (0x00028cb0) popup_call2_audio_out_window_t5_ParamLimits

0xe00c,	// (0x00028cb0) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x0002a12c) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x0002a12c) popup_call2_audio_out_window_t

0xe070,	// (0x00028d14) bg_popup_call2_in_pane_ParamLimits

0xe070,	// (0x00028d14) bg_popup_call2_in_pane

0xe0cc,	// (0x00028d70) popup_call2_audio_in_window_g1_ParamLimits

0xe0cc,	// (0x00028d70) popup_call2_audio_in_window_g1

0xe104,	// (0x00028da8) popup_call2_audio_in_window_g2_ParamLimits

0xe104,	// (0x00028da8) popup_call2_audio_in_window_g2

0xe13c,	// (0x00028de0) popup_call2_audio_in_window_g3_ParamLimits

0xe13c,	// (0x00028de0) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x0002a139) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x0002a139) popup_call2_audio_in_window_g

0xe194,	// (0x00028e38) popup_call2_audio_in_window_t1_ParamLimits

0xe194,	// (0x00028e38) popup_call2_audio_in_window_t1

0xe214,	// (0x00028eb8) popup_call2_audio_in_window_t2_ParamLimits

0xe214,	// (0x00028eb8) popup_call2_audio_in_window_t2

0xe294,	// (0x00028f38) popup_call2_audio_in_window_t3_ParamLimits

0xe294,	// (0x00028f38) popup_call2_audio_in_window_t3

0xe2ae,	// (0x00028f52) popup_call2_audio_in_window_t4_ParamLimits

0xe2ae,	// (0x00028f52) popup_call2_audio_in_window_t4

0xe2c0,	// (0x00028f64) popup_call2_audio_in_window_t5_ParamLimits

0xe2c0,	// (0x00028f64) popup_call2_audio_in_window_t5

0xe2d2,	// (0x00028f76) popup_call2_audio_in_window_t6_ParamLimits

0xe2d2,	// (0x00028f76) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x0002a142) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x0002a142) popup_call2_audio_in_window_t

0xc49e,	// (0x00027142) bg_popup_call2_in_pane_g1

0xe42e,	// (0x000290d2) popup_cale_lunar_info_window_t4

0x0003,

0xf519,	// (0x0002a1bd) popup_cale_lunar_info_window_t

0xc4a6,	// (0x0002714a) bg_popup_call2_rect_pane_ParamLimits

0xc4a6,	// (0x0002714a) bg_popup_call2_rect_pane

0xc23d,	// (0x00026ee1) call2_cli_visual_graphic_pane

0xc23d,	// (0x00026ee1) call2_cli_visual_text_pane

0x3d6c,	// (0x0001ea10) smil_status_volume_pane_g3

0x0002,

0xc4be,	// (0x00027162) call2_cli_visual_graphic_pane_g1

0xc4be,	// (0x00027162) call2_cli_visual_graphic_pane_g2

0xc4be,	// (0x00027162) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x0002a14f) call2_cli_visual_graphic_pane_g

0xe2e4,	// (0x00028f88) bg_popup_call2_rect_pane_g1

0xc694,	// (0x00027338) bg_popup_call2_rect_pane_g2

0xe2ec,	// (0x00028f90) bg_popup_call2_rect_pane_g3

0xe2f4,	// (0x00028f98) bg_popup_call2_rect_pane_g4

0xe2fc,	// (0x00028fa0) bg_popup_call2_rect_pane_g5

0xe304,	// (0x00028fa8) bg_popup_call2_rect_pane_g6

0xe30c,	// (0x00028fb0) bg_popup_call2_rect_pane_g7

0xe314,	// (0x00028fb8) bg_popup_call2_rect_pane_g8

0xe31c,	// (0x00028fc0) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x0002a156) bg_popup_call2_rect_pane_g

0xe324,	// (0x00028fc8) bg_popup_call2_bubble_pane_g1

0xe32c,	// (0x00028fd0) bg_popup_call2_bubble_pane_g2

0xe334,	// (0x00028fd8) bg_popup_call2_bubble_pane_g3

0xe33c,	// (0x00028fe0) bg_popup_call2_bubble_pane_g4

0xe344,	// (0x00028fe8) bg_popup_call2_bubble_pane_g5

0xe34c,	// (0x00028ff0) bg_popup_call2_bubble_pane_g6

0xe354,	// (0x00028ff8) bg_popup_call2_bubble_pane_g7

0xe35c,	// (0x00029000) bg_popup_call2_bubble_pane_g8

0xe364,	// (0x00029008) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x0002a169) bg_popup_call2_bubble_pane_g

0x4f72,	// (0x0001fc16) aid_cale_week_size_cell_pane

0xc4a6,	// (0x0002714a) aid_cams_cif_uncrop_pane_ParamLimits

0xc4a6,	// (0x0002714a) aid_cams_cif_uncrop_pane

0xc513,	// (0x000271b7) aid_cams_size_cell_ParamLimits

0xc513,	// (0x000271b7) aid_cams_size_cell

0xc513,	// (0x000271b7) grid_cams_pane_ParamLimits

0xc513,	// (0x000271b7) linegrid_cams_pane_ParamLimits

0x5544,	// (0x000201e8) call_video_pane_t1

0x5565,	// (0x00020209) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00029e81) call_video_pane_t

0x5ab3,	// (0x00020757) aid_cale_month_size_cell_pane_ParamLimits

0x5ab3,	// (0x00020757) aid_cale_month_size_cell_pane

0xf55d,	// (0x0002a201) smil_status_volume_pane_g

0x3d79,	// (0x0001ea1d) volume_smil_pane_ParamLimits

0x351d,	// (0x0001e1c1) aid_popup2_width_pane

0x4eb1,	// (0x0001fb55) cell_qdial_pane_g4_ParamLimits

0x4eb1,	// (0x0001fb55) cell_qdial_pane_g4

0x6913,	// (0x000215b7) aid_blid_cardinal_pane_ParamLimits

0x6923,	// (0x000215c7) aid_blid_destination_pane_ParamLimits

0x6923,	// (0x000215c7) aid_blid_destination_pane

0xc4a6,	// (0x0002714a) bg_popup_call_poc_act_pane_ParamLimits

0xc4a6,	// (0x0002714a) bg_popup_call_poc_act_pane

0xc4a6,	// (0x0002714a) bg_popup_call_poc_inact_pane_ParamLimits

0xc4a6,	// (0x0002714a) bg_popup_call_poc_inact_pane

0xe36c,	// (0x00029010) bg_popup_call_poc_act_pane_g1

0xe374,	// (0x00029018) bg_popup_call_poc_act_pane_g2

0xe37c,	// (0x00029020) bg_popup_call_poc_act_pane_g3

0xe33c,	// (0x00028fe0) bg_popup_call_poc_act_pane_g4

0xe344,	// (0x00028fe8) bg_popup_call_poc_act_pane_g5

0xe384,	// (0x00029028) bg_popup_call_poc_act_pane_g6

0xe354,	// (0x00028ff8) bg_popup_call_poc_act_pane_g7

0xe38c,	// (0x00029030) bg_popup_call_poc_act_pane_g8

0xc23d,	// (0x00026ee1) main_usb_pane

0x3c50,	// (0x0001e8f4) popup_cale_lunar_info_window

0x5882,	// (0x00020526) im_reading_pane_t1_ParamLimits

0xc847,	// (0x000274eb) list_im_pane_ParamLimits

0xc858,	// (0x000274fc) scroll_pane_cp07_ParamLimits

0xc23d,	// (0x00026ee1) grid_highlight_pane_cp012

0xc4a6,	// (0x0002714a) mup_scale_pane_ParamLimits

0xc52f,	// (0x000271d3) main_usb_pane_g1_ParamLimits

0xc52f,	// (0x000271d3) main_usb_pane_g1

0xc52f,	// (0x000271d3) main_usb_pane_g2_ParamLimits

0xc52f,	// (0x000271d3) main_usb_pane_g2

0x0001,

0xf502,	// (0x0002a1a6) main_usb_pane_g_ParamLimits

0xf502,	// (0x0002a1a6) main_usb_pane_g

0xc57d,	// (0x00027221) main_usb_pane_t1_ParamLimits

0xc57d,	// (0x00027221) main_usb_pane_t1

0xc57d,	// (0x00027221) main_usb_pane_t2_ParamLimits

0xc57d,	// (0x00027221) main_usb_pane_t2

0xc57d,	// (0x00027221) main_usb_pane_t3_ParamLimits

0xc57d,	// (0x00027221) main_usb_pane_t3

0xc57d,	// (0x00027221) main_usb_pane_t4_ParamLimits

0xc57d,	// (0x00027221) main_usb_pane_t4

0xc57d,	// (0x00027221) main_usb_pane_t5_ParamLimits

0xc57d,	// (0x00027221) main_usb_pane_t5

0xc57d,	// (0x00027221) main_usb_pane_t6_ParamLimits

0xc57d,	// (0x00027221) main_usb_pane_t6

0x0005,

0xf507,	// (0x0002a1ab) main_usb_pane_t_ParamLimits

0x68b9,	// (0x0002155d) aid_text_placing

0x68c5,	// (0x00021569) main_location2_pane_t1_ParamLimits

0x68d9,	// (0x0002157d) main_location2_pane_t2_ParamLimits

0x68ed,	// (0x00021591) main_location2_pane_t3_ParamLimits

0x6901,	// (0x000215a5) main_location2_pane_t4_ParamLimits

0x6901,	// (0x000215a5) main_location2_pane_t4

0xf31e,	// (0x00029fc2) main_location2_pane_t_ParamLimits

0xc4d4,	// (0x00027178) find_pinb_pane_g2_ParamLimits

0xc4d4,	// (0x00027178) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00029d39) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00029d39) find_pinb_pane_g

0xc4e0,	// (0x00027184) find_pinb_pane_t1_ParamLimits

0xc4f2,	// (0x00027196) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00029d3e) find_pinb_pane_t_ParamLimits

0xc23d,	// (0x00026ee1) main_call3_pane

0x6076,	// (0x00020d1a) cale_month_day_heading_pane_t1_ParamLimits

0x60fc,	// (0x00020da0) cale_month_day_heading_pane_t2_ParamLimits

0x6175,	// (0x00020e19) cale_month_day_heading_pane_t3_ParamLimits

0x61ee,	// (0x00020e92) cale_month_day_heading_pane_t4_ParamLimits

0x6267,	// (0x00020f0b) cale_month_day_heading_pane_t5_ParamLimits

0x62e0,	// (0x00020f84) cale_month_day_heading_pane_t6_ParamLimits

0x6359,	// (0x00020ffd) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00029eb9) cale_month_day_heading_pane_t_ParamLimits

0xcaa2,	// (0x00027746) smil_status_volume_pane

0x6e1f,	// (0x00021ac3) postcard_address_pane_ParamLimits

0x6e1f,	// (0x00021ac3) postcard_address_pane

0x6e2b,	// (0x00021acf) postcard_message_pane_ParamLimits

0x6e2b,	// (0x00021acf) postcard_message_pane

0x7258,	// (0x00021efc) call2_cli_visual_pane_t1_ParamLimits

0x7258,	// (0x00021efc) call2_cli_visual_pane_t1

0xe551,	// (0x000291f5) postcard_message_pane_t1_ParamLimits

0xe551,	// (0x000291f5) postcard_message_pane_t1

0xe539,	// (0x000291dd) postcard_address_pane_t1_ParamLimits

0xe539,	// (0x000291dd) postcard_address_pane_t1

0x75c3,	// (0x00022267) popup_call3_audio_in_window_ParamLimits

0x75c3,	// (0x00022267) popup_call3_audio_in_window

0x74a7,	// (0x0002214b) bg_popup_call3_in_pane_ParamLimits

0x74a7,	// (0x0002214b) bg_popup_call3_in_pane

0x7509,	// (0x000221ad) popup_call3_audio_in_window_g1_ParamLimits

0x7509,	// (0x000221ad) popup_call3_audio_in_window_g1

0x7521,	// (0x000221c5) popup_call3_audio_in_window_g2_ParamLimits

0x7521,	// (0x000221c5) popup_call3_audio_in_window_g2

0x7539,	// (0x000221dd) popup_call3_audio_in_window_g3_ParamLimits

0x7539,	// (0x000221dd) popup_call3_audio_in_window_g3

0x0003,

0xf564,	// (0x0002a208) popup_call3_audio_in_window_g_ParamLimits

0xf564,	// (0x0002a208) popup_call3_audio_in_window_g

0x7561,	// (0x00022205) popup_call3_audio_in_window_t1_ParamLimits

0x7561,	// (0x00022205) popup_call3_audio_in_window_t1

0x7589,	// (0x0002222d) popup_call3_audio_in_window_t2_ParamLimits

0x7589,	// (0x0002222d) popup_call3_audio_in_window_t2

0x75b1,	// (0x00022255) popup_call3_audio_in_window_t3_ParamLimits

0x75b1,	// (0x00022255) popup_call3_audio_in_window_t3

0x0002,

0xf56d,	// (0x0002a211) popup_call3_audio_in_window_t_ParamLimits

0xf56d,	// (0x0002a211) popup_call3_audio_in_window_t

0xc786,	// (0x0002742a) bg_popup_call3_rect_pane

0xe2e4,	// (0x00028f88) bg_popup_call3_rect_pane_g1

0xc694,	// (0x00027338) bg_popup_call3_rect_pane_g2

0xe2ec,	// (0x00028f90) bg_popup_call3_rect_pane_g3

0xe2f4,	// (0x00028f98) bg_popup_call3_rect_pane_g4

0xe2fc,	// (0x00028fa0) bg_popup_call3_rect_pane_g5

0xe304,	// (0x00028fa8) bg_popup_call3_rect_pane_g6

0xe30c,	// (0x00028fb0) bg_popup_call3_rect_pane_g7

0xbe20,	// (0x00026ac4) mup_visualizer_osc_pane

0xbe20,	// (0x00026ac4) mup_visualizer_spec_pane

0x74c7,	// (0x0002216b) call3_video_qcif_pane_ParamLimits

0x74c7,	// (0x0002216b) call3_video_qcif_pane

0x74d9,	// (0x0002217d) call3_video_qcif_uncrop_pane_ParamLimits

0x74d9,	// (0x0002217d) call3_video_qcif_uncrop_pane

0x74e7,	// (0x0002218b) call3_video_subqcif_pane_ParamLimits

0x74e7,	// (0x0002218b) call3_video_subqcif_pane

0x74f9,	// (0x0002219d) call3_video_subqcif_uncrop_pane_ParamLimits

0x74f9,	// (0x0002219d) call3_video_subqcif_uncrop_pane

0x7551,	// (0x000221f5) popup_call3_audio_in_window_g4_ParamLimits

0x7551,	// (0x000221f5) popup_call3_audio_in_window_g4

0xbe20,	// (0x00026ac4) mup_spec_half_pane

0xbe20,	// (0x00026ac4) mup_spec_half_pane_cp

0xbe20,	// (0x00026ac4) mup_osc_middle_pane

0xc55f,	// (0x00027203) mup_visualizer_osc_pane_g1

0xe4ec,	// (0x00029190) mup_spec_bar_pane_ParamLimits

0xe4ec,	// (0x00029190) mup_spec_bar_pane

0xc55f,	// (0x00027203) mup_spec_bar_pane_g1

0xc55f,	// (0x00027203) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00029d53) mup_spec_bar_pane_g

0x4f72,	// (0x0001fc16) aid_cale_week_size_cell_pane_ParamLimits

0x4f87,	// (0x0001fc2b) bg_cale_heading_pane_ParamLimits

0xc6df,	// (0x00027383) bg_cale_pane_cp01_ParamLimits

0x4fa9,	// (0x0001fc4d) cale_week_corner_pane_ParamLimits

0x4fc3,	// (0x0001fc67) cale_week_day_heading_pane_ParamLimits

0x4fe5,	// (0x0001fc89) cale_week_scroll_pane_g1_ParamLimits

0x5002,	// (0x0001fca6) cale_week_scroll_pane_g2_ParamLimits

0x5015,	// (0x0001fcb9) cale_week_scroll_pane_g3_ParamLimits

0x5028,	// (0x0001fccc) cale_week_scroll_pane_g4_ParamLimits

0x503b,	// (0x0001fcdf) cale_week_scroll_pane_g5_ParamLimits

0x504e,	// (0x0001fcf2) cale_week_scroll_pane_g6_ParamLimits

0x5061,	// (0x0001fd05) cale_week_scroll_pane_g7_ParamLimits

0x5076,	// (0x0001fd1a) cale_week_scroll_pane_g8_ParamLimits

0x508b,	// (0x0001fd2f) cale_week_scroll_pane_g9_ParamLimits

0x509e,	// (0x0001fd42) cale_week_scroll_pane_g10_ParamLimits

0x50b1,	// (0x0001fd55) cale_week_scroll_pane_g11_ParamLimits

0x50c4,	// (0x0001fd68) cale_week_scroll_pane_g12_ParamLimits

0x50db,	// (0x0001fd7f) cale_week_scroll_pane_g13_ParamLimits

0x50f6,	// (0x0001fd9a) cale_week_scroll_pane_g14_ParamLimits

0x5111,	// (0x0001fdb5) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00029dca) cale_week_scroll_pane_g_ParamLimits

0x5141,	// (0x0001fde5) cale_week_time_pane_ParamLimits

0x5156,	// (0x0001fdfa) grid_cale_week_pane_ParamLimits

0xc6fc,	// (0x000273a0) listscroll_cale_week_pane_t1

0xc70e,	// (0x000273b2) scroll_pane_cp08_ParamLimits

0x5b27,	// (0x000207cb) cale_month_corner_pane_ParamLimits

0xca78,	// (0x0002771c) cale_month_pane_t1

0x5ff5,	// (0x00020c99) cale_month_week_pane_ParamLimits

0xda07,	// (0x000286ab) popup_call_status_window_g1_ParamLimits

0x6755,	// (0x000213f9) popup_call_status_window_g2_ParamLimits

0x6761,	// (0x00021405) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00029f49) popup_call_status_window_g_ParamLimits

0xce2c,	// (0x00027ad0) aid_call2_pane

0x6cac,	// (0x00021950) msg_header_pane_g1

0x6e1f,	// (0x00021ac3) postcard_address2_pane_ParamLimits

0x6e1f,	// (0x00021ac3) postcard_address2_pane

0x6e2b,	// (0x00021acf) postcard_message2_pane_ParamLimits

0x6e2b,	// (0x00021acf) postcard_message2_pane

0x7479,	// (0x0002211d) message2_row_pane_ParamLimits

0x7479,	// (0x0002211d) message2_row_pane

0x7494,	// (0x00022138) address2_row_pane_ParamLimits

0x7494,	// (0x00022138) address2_row_pane

0xe4b9,	// (0x0002915d) postcard_message2_row_pane_g1

0xe4c1,	// (0x00029165) postcard_message2_row_pane_t1

0xe4b9,	// (0x0002915d) address2_row_pane_g1

0xe4c1,	// (0x00029165) address2_row_pane_t1

0x52f3,	// (0x0001ff97) aid_size_cell_vorec

0xc23d,	// (0x00026ee1) main_rss_pane

0xe4cf,	// (0x00029173) rss_list_single_pane_ParamLimits

0xe4cf,	// (0x00029173) rss_list_single_pane

0xe4dd,	// (0x00029181) rss_list_single_pane_t1

0xe4dd,	// (0x00029181) rss_list_single_pane_t2

0x0001,

0xf558,	// (0x0002a1fc) rss_list_single_pane_t

0xc23d,	// (0x00026ee1) main_camera2_pane

0xc23d,	// (0x00026ee1) main_video2_pane

0x3797,	// (0x0001e43b) cams_zoom_pane_cp2_ParamLimits

0x3797,	// (0x0001e43b) cams_zoom_pane_cp2

0x3797,	// (0x0001e43b) image2_vga_pane_ParamLimits

0x3797,	// (0x0001e43b) image2_vga_pane

0xce60,	// (0x00027b04) main_camera2_pane_g1_ParamLimits

0xce60,	// (0x00027b04) main_camera2_pane_g1

0xce60,	// (0x00027b04) main_camera2_pane_g2_ParamLimits

0xce60,	// (0x00027b04) main_camera2_pane_g2

0xce60,	// (0x00027b04) main_camera2_pane_g3_ParamLimits

0xce60,	// (0x00027b04) main_camera2_pane_g3

0xce60,	// (0x00027b04) main_camera2_pane_g4_ParamLimits

0xce60,	// (0x00027b04) main_camera2_pane_g4

0xce60,	// (0x00027b04) main_camera2_pane_g5_ParamLimits

0xce60,	// (0x00027b04) main_camera2_pane_g5

0xce60,	// (0x00027b04) main_camera2_pane_g6_ParamLimits

0xce60,	// (0x00027b04) main_camera2_pane_g6

0xce60,	// (0x00027b04) main_camera2_pane_g7_ParamLimits

0xce60,	// (0x00027b04) main_camera2_pane_g7

0xce60,	// (0x00027b04) main_camera2_pane_g8_ParamLimits

0xce60,	// (0x00027b04) main_camera2_pane_g8

0x0008,

0xf574,	// (0x0002a218) main_camera2_pane_g_ParamLimits

0xf574,	// (0x0002a218) main_camera2_pane_g

0x3d9c,	// (0x0001ea40) main_camera2_pane_t1_ParamLimits

0x3d9c,	// (0x0001ea40) main_camera2_pane_t1

0x3d9c,	// (0x0001ea40) main_camera2_pane_t2_ParamLimits

0x3d9c,	// (0x0001ea40) main_camera2_pane_t2

0x3d9c,	// (0x0001ea40) main_camera2_pane_t3_ParamLimits

0x3d9c,	// (0x0001ea40) main_camera2_pane_t3

0x3d9c,	// (0x0001ea40) main_camera2_pane_t4_ParamLimits

0x3d9c,	// (0x0001ea40) main_camera2_pane_t4

0x0006,

0xf587,	// (0x0002a22b) main_camera2_pane_t_ParamLimits

0xf587,	// (0x0002a22b) main_camera2_pane_t

0x3dc4,	// (0x0001ea68) cams_zoom_pane_cp4_ParamLimits

0x3dc4,	// (0x0001ea68) cams_zoom_pane_cp4

0x3bfb,	// (0x0001e89f) image2_cif_pane_ParamLimits

0x3bfb,	// (0x0001e89f) image2_cif_pane

0x3797,	// (0x0001e43b) image2_subqcif_pane_ParamLimits

0x3797,	// (0x0001e43b) image2_subqcif_pane

0x3dd2,	// (0x0001ea76) main_video2_pane_g1_ParamLimits

0x3dd2,	// (0x0001ea76) main_video2_pane_g1

0x3dd2,	// (0x0001ea76) main_video2_pane_g2_ParamLimits

0x3dd2,	// (0x0001ea76) main_video2_pane_g2

0x3dd2,	// (0x0001ea76) main_video2_pane_g3_ParamLimits

0x3dd2,	// (0x0001ea76) main_video2_pane_g3

0x3dd2,	// (0x0001ea76) main_video2_pane_g4_ParamLimits

0x3dd2,	// (0x0001ea76) main_video2_pane_g4

0x3dd2,	// (0x0001ea76) main_video2_pane_g5_ParamLimits

0x3dd2,	// (0x0001ea76) main_video2_pane_g5

0x3dd2,	// (0x0001ea76) main_video2_pane_g6_ParamLimits

0x3dd2,	// (0x0001ea76) main_video2_pane_g6

0x0005,

0xf596,	// (0x0002a23a) main_video2_pane_g_ParamLimits

0xf596,	// (0x0002a23a) main_video2_pane_g

0x3de0,	// (0x0001ea84) main_video2_pane_t1_ParamLimits

0x3de0,	// (0x0001ea84) main_video2_pane_t1

0x3de0,	// (0x0001ea84) main_video2_pane_t2_ParamLimits

0x3de0,	// (0x0001ea84) main_video2_pane_t2

0x3de0,	// (0x0001ea84) main_video2_pane_t3_ParamLimits

0x3de0,	// (0x0001ea84) main_video2_pane_t3

0x0002,

0xf5a3,	// (0x0002a247) main_video2_pane_t_ParamLimits

0xf5a3,	// (0x0002a247) main_video2_pane_t

0x7317,	// (0x00021fbb) call_muted_g2

0x0001,

0xf54a,	// (0x0002a1ee) call_muted_g

0xc23d,	// (0x00026ee1) main_mup2_pane

0xc53d,	// (0x000271e1) main_mup2_pane_g1_ParamLimits

0xc53d,	// (0x000271e1) main_mup2_pane_g1

0xc53d,	// (0x000271e1) main_mup2_pane_g2_ParamLimits

0xc53d,	// (0x000271e1) main_mup2_pane_g2

0x0a8d,	// (0x0001b731) main_mup_pane_g13_cp1

0x37a5,	// (0x0001e449) mup_volume_pane_cp1

0xc53d,	// (0x000271e1) main_mup2_pane_g4_ParamLimits

0xc53d,	// (0x000271e1) main_mup2_pane_g4

0xc53d,	// (0x000271e1) main_mup2_pane_g5_ParamLimits

0xc53d,	// (0x000271e1) main_mup2_pane_g5

0xc53d,	// (0x000271e1) main_mup2_pane_g6_ParamLimits

0xc53d,	// (0x000271e1) main_mup2_pane_g6

0xc53d,	// (0x000271e1) main_mup2_pane_g7_ParamLimits

0xc53d,	// (0x000271e1) main_mup2_pane_g7

0x0006,

0xf5aa,	// (0x0002a24e) main_mup2_pane_g_ParamLimits

0xf5aa,	// (0x0002a24e) main_mup2_pane_g

0xc54b,	// (0x000271ef) main_mup2_pane_t1_ParamLimits

0xc54b,	// (0x000271ef) main_mup2_pane_t1

0xc54b,	// (0x000271ef) main_mup2_pane_t2_ParamLimits

0xc54b,	// (0x000271ef) main_mup2_pane_t2

0xc54b,	// (0x000271ef) main_mup2_pane_t3_ParamLimits

0xc54b,	// (0x000271ef) main_mup2_pane_t3

0xc54b,	// (0x000271ef) main_mup2_pane_t4_ParamLimits

0xc54b,	// (0x000271ef) main_mup2_pane_t4

0xc54b,	// (0x000271ef) main_mup2_pane_t5_ParamLimits

0xc54b,	// (0x000271ef) main_mup2_pane_t5

0xc54b,	// (0x000271ef) main_mup2_pane_t6_ParamLimits

0xc54b,	// (0x000271ef) main_mup2_pane_t6

0x0005,

0xf5b9,	// (0x0002a25d) main_mup2_pane_t_ParamLimits

0xf5b9,	// (0x0002a25d) main_mup2_pane_t

0xe45c,	// (0x00029100) mup2_visualizer_pane_ParamLimits

0xe45c,	// (0x00029100) mup2_visualizer_pane

0xe45c,	// (0x00029100) mup_progress_pane_cp_ParamLimits

0xe45c,	// (0x00029100) mup_progress_pane_cp

0x3e0a,	// (0x0001eaae) mup_volume_pane_cp_ParamLimits

0x3e0a,	// (0x0001eaae) mup_volume_pane_cp

0xc521,	// (0x000271c5) mup2_visualizer_pane_g1_ParamLimits

0xc521,	// (0x000271c5) mup2_visualizer_pane_g1

0xc52f,	// (0x000271d3) mup2_visualizer_pane_g2_ParamLimits

0xc52f,	// (0x000271d3) mup2_visualizer_pane_g2

0xc52f,	// (0x000271d3) mup2_visualizer_pane_g3_ParamLimits

0xc52f,	// (0x000271d3) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00029d43) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00029d43) mup2_visualizer_pane_g

0xbe20,	// (0x00026ac4) aid_size_cell_fmradio

0x3be4,	// (0x0001e888) aid_height_parent_landcape

0xc8d6,	// (0x0002757a) wml_content_pane_cp

0xc8de,	// (0x00027582) wml_tabs_pane

0xc8e7,	// (0x0002758b) popup_wml_miniature_window

0xc8ef,	// (0x00027593) scroll_pane_cp021

0xc903,	// (0x000275a7) wml_content_pane_comp8

0xc23d,	// (0x00026ee1) bg_popup_sub_pane_cp05

0xe583,	// (0x00029227) popup_wml_miniature_window_g1

0xe58b,	// (0x0002922f) wml_miniature_view_pane

0x75d2,	// (0x00022276) aid_size_wml_view

0x75da,	// (0x0002227e) wml_miniature_view_pane_g1

0x75e3,	// (0x00022287) wml_miniature_view_pane_g2

0x75ec,	// (0x00022290) wml_miniature_view_pane_g3

0x75f4,	// (0x00022298) wml_miniature_view_pane_g4

0x75fc,	// (0x000222a0) wml_miniature_view_pane_g5

0x7604,	// (0x000222a8) wml_miniature_view_pane_g6

0x760c,	// (0x000222b0) wml_miniature_view_pane_g7

0x7614,	// (0x000222b8) wml_miniature_view_pane_g8

0x0007,

0xf5c6,	// (0x0002a26a) wml_miniature_view_pane_g

0xe593,	// (0x00029237) background_graphic_ParamLimits

0xe593,	// (0x00029237) background_graphic

0xe59f,	// (0x00029243) wml_tabs_2_pane

0xe5a8,	// (0x0002924c) wml_tabs_3_pane_ParamLimits

0xe5a8,	// (0x0002924c) wml_tabs_3_pane

0xe5ba,	// (0x0002925e) wml_tabs_4_pane_ParamLimits

0xe5ba,	// (0x0002925e) wml_tabs_4_pane

0xe5d0,	// (0x00029274) wml_tabs_5_pane_ParamLimits

0xe5d0,	// (0x00029274) wml_tabs_5_pane

0xe5ea,	// (0x0002928e) wml_tabs_pane_g2_ParamLimits

0xe5ea,	// (0x0002928e) wml_tabs_pane_g2

0xe5ff,	// (0x000292a3) wml_tabs_pane_g3_ParamLimits

0xe5ff,	// (0x000292a3) wml_tabs_pane_g3

0xe614,	// (0x000292b8) wml_tabs_2_active_pane_ParamLimits

0xe614,	// (0x000292b8) wml_tabs_2_active_pane

0xe614,	// (0x000292b8) wml_tabs_2_passive_pane_ParamLimits

0xe614,	// (0x000292b8) wml_tabs_2_passive_pane

0x761c,	// (0x000222c0) wml_tabs_3_active_pane_cp_ParamLimits

0x761c,	// (0x000222c0) wml_tabs_3_active_pane_cp

0x762d,	// (0x000222d1) wml_tabs_3_passive_pane_ParamLimits

0x762d,	// (0x000222d1) wml_tabs_3_passive_pane

0x763e,	// (0x000222e2) wml_tabs_3_passive_pane_cp_ParamLimits

0x763e,	// (0x000222e2) wml_tabs_3_passive_pane_cp

0x764f,	// (0x000222f3) tabs_4_active_pane

0x7657,	// (0x000222fb) tabs_4_passive_pane

0x765f,	// (0x00022303) tabs_4_passive_pane_cp

0x7667,	// (0x0002230b) tabs_4_passive_pane_cp2

0x728b,	// (0x00021f2f) aid_height_text

0xe45c,	// (0x00029100) mup_volume_cont_pane_ParamLimits

0xe45c,	// (0x00029100) mup_volume_cont_pane

0xbe20,	// (0x00026ac4) aid_size_cell_pinb

0xbe20,	// (0x00026ac4) aid_size_list_pinb

0xe45c,	// (0x00029100) mup2_volume_cont_pane_ParamLimits

0xe45c,	// (0x00029100) mup2_volume_cont_pane

0x3df4,	// (0x0001ea98) mup2_volume_cont_pane_g1_ParamLimits

0x3df4,	// (0x0001ea98) mup2_volume_cont_pane_g1

0x3529,	// (0x0001e1cd) aid_size_cell_touch_ParamLimits

0x3529,	// (0x0001e1cd) aid_size_cell_touch

0x37af,	// (0x0001e453) touch_pane_ParamLimits

0x37af,	// (0x0001e453) touch_pane

0x37a5,	// (0x0001e449) main_rss2_pane

0xe62b,	// (0x000292cf) listscroll_rss2_pane

0xe634,	// (0x000292d8) rss2_navigation_pane

0xe63c,	// (0x000292e0) list_rss2_pane

0xcf51,	// (0x00027bf5) scroll_pane_cp22

0xe644,	// (0x000292e8) rss2_navigation_pane_g1

0xe64d,	// (0x000292f1) rss2_navigation_pane_g2

0xe655,	// (0x000292f9) rss2_navigation_pane_g3

0x0002,

0xf5d7,	// (0x0002a27b) rss2_navigation_pane_g

0xe65d,	// (0x00029301) rss2_navigation_pane_t1

0x766f,	// (0x00022313) rss2_list_single_pane_ParamLimits

0x766f,	// (0x00022313) rss2_list_single_pane

0xe66b,	// (0x0002930f) rss2_list_single_pane_t2

0xe679,	// (0x0002931d) rss2_list_single_pane_t3_ParamLimits

0xe679,	// (0x0002931d) rss2_list_single_pane_t3

0xe696,	// (0x0002933a) rss2_list_single_pane_t4

0x65c3,	// (0x00021267) smil_status_pane_g1

0x3bfb,	// (0x0001e89f) main_image2_pane_ParamLimits

0x3bfb,	// (0x0001e89f) main_image2_pane

0xce60,	// (0x00027b04) main_camera2_pane_g9_ParamLimits

0xce60,	// (0x00027b04) main_camera2_pane_g9

0x3d9c,	// (0x0001ea40) main_camera2_pane_t5_ParamLimits

0x3d9c,	// (0x0001ea40) main_camera2_pane_t5

0x3db0,	// (0x0001ea54) main_camera2_pane_t6_ParamLimits

0x3db0,	// (0x0001ea54) main_camera2_pane_t6

0x76a3,	// (0x00022347) main_image2_pane_g1_ParamLimits

0x76a3,	// (0x00022347) main_image2_pane_g1

0x6fbd,	// (0x00021c61) smil2_video_pane_ParamLimits

0x6fbd,	// (0x00021c61) smil2_video_pane

0x355d,	// (0x0001e201) aid_zoom_text_primary_cp

0x374c,	// (0x0001e3f0) popup_preview_fixed_window

0xc83f,	// (0x000274e3) im_reading_pane_g1

0x3d8e,	// (0x0001ea32) cams2_bc_adjust_pane_cp_ParamLimits

0x3d8e,	// (0x0001ea32) cams2_bc_adjust_pane_cp

0x3797,	// (0x0001e43b) cams2_bc_adjust_pane_ParamLimits

0x3797,	// (0x0001e43b) cams2_bc_adjust_pane

0x0a8d,	// (0x0001b731) cams2_bc_adjust_pane_g1

0x37a5,	// (0x0001e449) cams2_slider_pane

0x0a8d,	// (0x0001b731) cams2_slider_pane_g1

0x0a8d,	// (0x0001b731) cams2_slider_pane_g2

0x0006,

0xf5de,	// (0x0002a282) cams2_slider_pane_g

0x3820,	// (0x0001e4c4) calc_display_pane_ParamLimits

0x383e,	// (0x0001e4e2) calc_paper_pane_ParamLimits

0x385a,	// (0x0001e4fe) grid_calc_pane_ParamLimits

0x3b4f,	// (0x0001e7f3) popup_clock_digital_window_t1_ParamLimits

0xd414,	// (0x000280b8) main_image_pane_t1

0x3806,	// (0x0001e4aa) aid_size_cell_calc_ParamLimits

0x3806,	// (0x0001e4aa) aid_size_cell_calc

0x3c2c,	// (0x0001e8d0) popup_blid_sat_info2_window_ParamLimits

0x3c2c,	// (0x0001e8d0) popup_blid_sat_info2_window

0xe6a4,	// (0x00029348) aid_size_cell_blid

0xe45c,	// (0x00029100) bg_popup_window_pane_cp07

0xe6c1,	// (0x00029365) grid_popup_blid_pane

0xe6cb,	// (0x0002936f) heading_pane_cp05_ParamLimits

0xe6cb,	// (0x0002936f) heading_pane_cp05

0xe7b7,	// (0x0002945b) cell_popup_blid_pane_ParamLimits

0xe7b7,	// (0x0002945b) cell_popup_blid_pane

0xe7db,	// (0x0002947f) cell_popup_blid_pane_g1

0xe7e3,	// (0x00029487) cell_popup_blid_pane_t1

0xe45c,	// (0x00029100) mup2_indicator_pane_ParamLimits

0xe45c,	// (0x00029100) mup2_indicator_pane

0xbe20,	// (0x00026ac4) mup2_visualizer_osc_pane

0xe56d,	// (0x00029211) mup2_visualizer_spec_pane_ParamLimits

0xe56d,	// (0x00029211) mup2_visualizer_spec_pane

0xbe20,	// (0x00026ac4) mup2_spec_half_pane

0xbe20,	// (0x00026ac4) mup2_spec_half_pane_cp

0xe7f1,	// (0x00029495) mup2_spec_bar_pane_ParamLimits

0xe7f1,	// (0x00029495) mup2_spec_bar_pane

0xc55f,	// (0x00027203) mup2_spec_bar_pane_g1

0xe810,	// (0x000294b4) mup2_spec_bar_pane_g2

0x0001,

0xf604,	// (0x0002a2a8) mup2_spec_bar_pane_g

0xbe20,	// (0x00026ac4) mup2_osc_middle_pane

0xc55f,	// (0x00027203) mup2_visualizer_osc_pane_g1

0xbe4a,	// (0x00026aee) popup_number_entry_window_t1_ParamLimits

0xbe5d,	// (0x00026b01) popup_number_entry_window_t2_ParamLimits

0xbe6f,	// (0x00026b13) popup_number_entry_window_t3_ParamLimits

0x4da2,	// (0x0001fa46) popup_number_entry_window_t5_ParamLimits

0x4da2,	// (0x0001fa46) popup_number_entry_window_t5

0xf040,	// (0x00029ce4) popup_number_entry_window_t_ParamLimits

0xbe81,	// (0x00026b25) text_title_cp2_ParamLimits

0x3b8e,	// (0x0001e832) aid_hotspot_pointer_text2_pane

0x3bd8,	// (0x0001e87c) main_viewer_pane_g9_ParamLimits

0x3bd8,	// (0x0001e87c) main_viewer_pane_g9

0xca78,	// (0x0002771c) cale_month_pane_t1_ParamLimits

0xcab5,	// (0x00027759) bg_cale_pane_ParamLimits

0xcacd,	// (0x00027771) list_cale_pane_ParamLimits

0xcade,	// (0x00027782) listscroll_cale_day_pane_t1

0xcaf0,	// (0x00027794) scroll_pane_cp09_ParamLimits

0x69ef,	// (0x00021693) main_mup_eq_pane_t1_ParamLimits

0x69ef,	// (0x00021693) main_mup_eq_pane_t1

0x6a09,	// (0x000216ad) main_mup_eq_pane_t2_ParamLimits

0x6a09,	// (0x000216ad) main_mup_eq_pane_t2

0x6a21,	// (0x000216c5) main_mup_eq_pane_t3_ParamLimits

0x6a21,	// (0x000216c5) main_mup_eq_pane_t3

0x6a39,	// (0x000216dd) main_mup_eq_pane_t4_ParamLimits

0x6a39,	// (0x000216dd) main_mup_eq_pane_t4

0x6a51,	// (0x000216f5) main_mup_eq_pane_t5_ParamLimits

0x6a51,	// (0x000216f5) main_mup_eq_pane_t5

0x6a69,	// (0x0002170d) main_mup_eq_pane_t6_ParamLimits

0x6a69,	// (0x0002170d) main_mup_eq_pane_t6

0x6a7d,	// (0x00021721) main_mup_eq_pane_t7_ParamLimits

0x6a7d,	// (0x00021721) main_mup_eq_pane_t7

0x6a91,	// (0x00021735) main_mup_eq_pane_t8_ParamLimits

0x6a91,	// (0x00021735) main_mup_eq_pane_t8

0x6aa7,	// (0x0002174b) main_mup_eq_pane_t9_ParamLimits

0x6aa7,	// (0x0002174b) main_mup_eq_pane_t9

0x6abf,	// (0x00021763) main_mup_eq_pane_t10_ParamLimits

0x6abf,	// (0x00021763) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x0002a043) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x0002a043) main_mup_eq_pane_t

0x6b7c,	// (0x00021820) mup_equalizer_pane_cp5_ParamLimits

0x6b92,	// (0x00021836) mup_equalizer_pane_cp6_ParamLimits

0x6baa,	// (0x0002184e) mup_equalizer_pane_cp7_ParamLimits

0x37a5,	// (0x0001e449) main_gallery_pane

0xe50b,	// (0x000291af) smil2_volume_pane

0xe513,	// (0x000291b7) smil_status_volume_pane_g1_ParamLimits

0xe526,	// (0x000291ca) smil_status_volume_pane_g2_ParamLimits

0x3d6c,	// (0x0001ea10) smil_status_volume_pane_g3_ParamLimits

0xf55d,	// (0x0002a201) smil_status_volume_pane_g_ParamLimits

0xe45c,	// (0x00029100) bg_popup_window_pane_cp07_ParamLimits

0xe6ac,	// (0x00029350) blid_firmament_pane

0xc513,	// (0x000271b7) aid_size_cell_gallery_ParamLimits

0xc513,	// (0x000271b7) aid_size_cell_gallery

0xc513,	// (0x000271b7) grid_gallery_pane_ParamLimits

0xc513,	// (0x000271b7) grid_gallery_pane

0xd2a7,	// (0x00027f4b) cell_gallery_pane_ParamLimits

0xd2a7,	// (0x00027f4b) cell_gallery_pane

0xc315,	// (0x00026fb9) bg_cell_gallery_focus_pane_ParamLimits

0xc315,	// (0x00026fb9) bg_cell_gallery_focus_pane

0xc521,	// (0x000271c5) cell_gallery_pane_g1_ParamLimits

0xc521,	// (0x000271c5) cell_gallery_pane_g1

0xc521,	// (0x000271c5) cell_gallery_pane_g2_ParamLimits

0xc521,	// (0x000271c5) cell_gallery_pane_g2

0xc521,	// (0x000271c5) cell_gallery_pane_g3_ParamLimits

0xc521,	// (0x000271c5) cell_gallery_pane_g3

0xc52f,	// (0x000271d3) cell_gallery_pane_g4_ParamLimits

0xc52f,	// (0x000271d3) cell_gallery_pane_g4

0x0003,

0xf609,	// (0x0002a2ad) cell_gallery_pane_g_ParamLimits

0xf609,	// (0x0002a2ad) cell_gallery_pane_g

0xe81a,	// (0x000294be) bg_cell_gallery_focus_pane_g1

0xe822,	// (0x000294c6) bg_cell_gallery_focus_pane_g2

0xe82a,	// (0x000294ce) bg_cell_gallery_focus_pane_g3

0xe832,	// (0x000294d6) bg_cell_gallery_focus_pane_g4

0xe83a,	// (0x000294de) bg_cell_gallery_focus_pane_g5

0xe842,	// (0x000294e6) bg_cell_gallery_focus_pane_g6

0xe84a,	// (0x000294ee) bg_cell_gallery_focus_pane_g7

0xe852,	// (0x000294f6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf612,	// (0x0002a2b6) bg_cell_gallery_focus_pane_g

0xe85a,	// (0x000294fe) aid_firma_cardinal

0xe86e,	// (0x00029512) blid_firmament_pane_t1

0xe885,	// (0x00029529) blid_firmament_pane_t2

0xe89c,	// (0x00029540) blid_firmament_pane_t3

0xe8b3,	// (0x00029557) blid_firmament_pane_t4

0x0003,

0xf623,	// (0x0002a2c7) blid_firmament_pane_t

0xe8ca,	// (0x0002956e) blid_sat_info_pane

0xc55f,	// (0x00027203) blid_sat_info_pane_g1

0xc55f,	// (0x00027203) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00029d53) blid_sat_info_pane_g

0xe8da,	// (0x0002957e) blid_sat_info_pane_t1

0xe8e8,	// (0x0002958c) smil2_volume_content_pane

0xe8f1,	// (0x00029595) smil2_volume_pane_g1

0xc76c,	// (0x00027410) smil2_volume_content_pane_g1

0xe8f9,	// (0x0002959d) smil2_volume_content_pane_g2

0xe902,	// (0x000295a6) smil2_volume_content_pane_g3

0xe90b,	// (0x000295af) smil2_volume_content_pane_g4

0xe914,	// (0x000295b8) smil2_volume_content_pane_g5

0xe91d,	// (0x000295c1) smil2_volume_content_pane_g6

0xe926,	// (0x000295ca) smil2_volume_content_pane_g7

0xe92f,	// (0x000295d3) smil2_volume_content_pane_g8

0xe938,	// (0x000295dc) smil2_volume_content_pane_g9

0xe941,	// (0x000295e5) smil2_volume_content_pane_g10

0x0009,

0xf62c,	// (0x0002a2d0) smil2_volume_content_pane_g

0x51d7,	// (0x0001fe7b) cale_week_day_heading_pane_t1_ParamLimits

0x51f2,	// (0x0001fe96) cale_week_day_heading_pane_t2_ParamLimits

0x520d,	// (0x0001feb1) cale_week_day_heading_pane_t3_ParamLimits

0x5228,	// (0x0001fecc) cale_week_day_heading_pane_t4_ParamLimits

0x5243,	// (0x0001fee7) cale_week_day_heading_pane_t5_ParamLimits

0x525e,	// (0x0001ff02) cale_week_day_heading_pane_t6_ParamLimits

0x5279,	// (0x0001ff1d) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00029deb) cale_week_day_heading_pane_t_ParamLimits

0xc72b,	// (0x000273cf) bg_cale_side_pane_ParamLimits

0x39b1,	// (0x0001e655) cale_week_time_pane_t1_ParamLimits

0x39cb,	// (0x0001e66f) cale_week_time_pane_t2_ParamLimits

0x39e5,	// (0x0001e689) cale_week_time_pane_t3_ParamLimits

0x39ff,	// (0x0001e6a3) cale_week_time_pane_t4_ParamLimits

0x3a19,	// (0x0001e6bd) cale_week_time_pane_t5_ParamLimits

0x3a33,	// (0x0001e6d7) cale_week_time_pane_t6_ParamLimits

0x3a53,	// (0x0001e6f7) cale_week_time_pane_t7_ParamLimits

0x3a75,	// (0x0001e719) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00029dfa) cale_week_time_pane_t_ParamLimits

0x5294,	// (0x0001ff38) cell_cale_week_pane_g2_ParamLimits

0xc72b,	// (0x000273cf) bg_cale_side_pane_cp01_ParamLimits

0x63ea,	// (0x0002108e) cale_month_week_pane_t1_ParamLimits

0x6403,	// (0x000210a7) cale_month_week_pane_t2_ParamLimits

0x641c,	// (0x000210c0) cale_month_week_pane_t3_ParamLimits

0x6435,	// (0x000210d9) cale_month_week_pane_t4_ParamLimits

0x6450,	// (0x000210f4) cale_month_week_pane_t5_ParamLimits

0x6471,	// (0x00021115) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00029ec8) cale_month_week_pane_t_ParamLimits

0x3aa3,	// (0x0001e747) cell_cale_month_pane_g1_ParamLimits

0x37a5,	// (0x0001e449) main_cale_event_viewer_pane

0xbe20,	// (0x00026ac4) listscroll_cale_event_viewer_pane

0xe94a,	// (0x000295ee) list_cale_ev_pane

0xe952,	// (0x000295f6) scroll_pane_cp023

0xe95e,	// (0x00029602) field_cale_ev_pane_ParamLimits

0xe95e,	// (0x00029602) field_cale_ev_pane

0xe97c,	// (0x00029620) field_cale_ev_content_pane_ParamLimits

0xe97c,	// (0x00029620) field_cale_ev_content_pane

0xe988,	// (0x0002962c) field_cale_ev_pane_g1_ParamLimits

0xe988,	// (0x0002962c) field_cale_ev_pane_g1

0xe994,	// (0x00029638) field_cale_ev_pane_g2_ParamLimits

0xe994,	// (0x00029638) field_cale_ev_pane_g2

0xe9ac,	// (0x00029650) field_cale_ev_pane_g3_ParamLimits

0xe9ac,	// (0x00029650) field_cale_ev_pane_g3

0x0002,

0xf641,	// (0x0002a2e5) field_cale_ev_pane_g_ParamLimits

0xf641,	// (0x0002a2e5) field_cale_ev_pane_g

0xe9c4,	// (0x00029668) field_cale_ev_pane_t1_ParamLimits

0xe9c4,	// (0x00029668) field_cale_ev_pane_t1

0xe9db,	// (0x0002967f) field_cale_ev_content_pane_t1_ParamLimits

0xe9db,	// (0x0002967f) field_cale_ev_content_pane_t1

0xd301,	// (0x00027fa5) bg_button_pane_cp01

0x4f62,	// (0x0001fc06) listscroll_cale_week_pane_ParamLimits

0xc6d6,	// (0x0002737a) popup_toolbar_window_cp01

0xc6fc,	// (0x000273a0) listscroll_cale_week_pane_t1_ParamLimits

0x4f62,	// (0x0001fc06) listscroll_cale_day_pane_ParamLimits

0xc6d6,	// (0x0002737a) popup_toolbar_window_cp02

0xcade,	// (0x00027782) listscroll_cale_day_pane_t1_ParamLimits

0x4f62,	// (0x0001fc06) main_cale_month_pane_ParamLimits

0x3d2f,	// (0x0001e9d3) popup_toolbar_window_cp03_ParamLimits

0x3d2f,	// (0x0001e9d3) popup_toolbar_window_cp03

0x6ed3,	// (0x00021b77) main_image_pane_g2_ParamLimits

0x6ed3,	// (0x00021b77) main_image_pane_g2

0x6edf,	// (0x00021b83) main_image_pane_g3_ParamLimits

0x6edf,	// (0x00021b83) main_image_pane_g3

0x0002,

0xf431,	// (0x0002a0d5) main_image_pane_g_ParamLimits

0xf431,	// (0x0002a0d5) main_image_pane_g

0xd414,	// (0x000280b8) main_image_pane_t1_ParamLimits

0x6eeb,	// (0x00021b8f) main_image_pane_t2_ParamLimits

0x6eeb,	// (0x00021b8f) main_image_pane_t2

0x6efd,	// (0x00021ba1) main_image_pane_t3_ParamLimits

0x6efd,	// (0x00021ba1) main_image_pane_t3

0x6f0f,	// (0x00021bb3) main_image_pane_t4_ParamLimits

0x6f0f,	// (0x00021bb3) main_image_pane_t4

0x0003,

0xf438,	// (0x0002a0dc) main_image_pane_t_ParamLimits

0xf438,	// (0x0002a0dc) main_image_pane_t

0x6f21,	// (0x00021bc5) popup_image_details_window_cp01

0x6f2b,	// (0x00021bcf) popup_toobar_trans_pane_cp01_ParamLimits

0x6f2b,	// (0x00021bcf) popup_toobar_trans_pane_cp01

0x3c7f,	// (0x0001e923) popup_image_details_window_ParamLimits

0x3c7f,	// (0x0001e923) popup_image_details_window

0x3c8d,	// (0x0001e931) popup_image_focus_window

0x3797,	// (0x0001e43b) camera2_autofocus_pane_ParamLimits

0x3797,	// (0x0001e43b) camera2_autofocus_pane

0xbe20,	// (0x00026ac4) bg_popup_sub_pane_cp06

0xe9f9,	// (0x0002969d) popup_image_focus_window_g1

0xea01,	// (0x000296a5) popup_image_focus_window_g2

0xea09,	// (0x000296ad) popup_image_focus_window_g3

0xea11,	// (0x000296b5) popup_image_focus_window_g4

0x0003,

0xf648,	// (0x0002a2ec) popup_image_focus_window_g

0xea19,	// (0x000296bd) popup_image_focus_window_t1

0xea27,	// (0x000296cb) popup_image_focus_window_t2

0xea37,	// (0x000296db) popup_image_focus_window_t3

0x0002,

0xf651,	// (0x0002a2f5) popup_image_focus_window_t

0xc521,	// (0x000271c5) camera2_autofocus_pane_g1

0xc315,	// (0x00026fb9) bg_tb_trans_pane_cp01

0xea45,	// (0x000296e9) popup_image_details_window_g1

0xea58,	// (0x000296fc) popup_image_details_window_g2

0x0002,

0xf663,	// (0x0002a307) popup_image_details_window_g

0xea81,	// (0x00029725) popup_image_details_window_t1

0xea93,	// (0x00029737) popup_image_details_window_t2

0xeaac,	// (0x00029750) popup_image_details_window_t3

0xeac0,	// (0x00029764) popup_image_details_window_t4

0xeadb,	// (0x0002977f) popup_image_details_window_t5

0x0004,

0xf66a,	// (0x0002a30e) popup_image_details_window_t

0xc5a9,	// (0x0002724d) bg_calc_paper_pane_ParamLimits

0x37a5,	// (0x0001e449) grid_highlight_pane_cp013

0x3886,	// (0x0001e52a) list_calc_pane_ParamLimits

0x3898,	// (0x0001e53c) scroll_pane_cp024

0xc5bd,	// (0x00027261) bg_calc_display_pane_ParamLimits

0x38a0,	// (0x0001e544) calc_display_pane_t1_ParamLimits

0x38b5,	// (0x0001e559) calc_display_pane_t2_ParamLimits

0x38ca,	// (0x0001e56e) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00029d6b) calc_display_pane_t_ParamLimits

0x3933,	// (0x0001e5d7) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00029d88) cell_calc_pane_g

0x393c,	// (0x0001e5e0) cell_calc_pane_t1

0xc612,	// (0x000272b6) grid_highlight_pane_cp02_ParamLimits

0xc628,	// (0x000272cc) toolbar_button_pane_cp01_ParamLimits

0xc628,	// (0x000272cc) toolbar_button_pane_cp01

0xd459,	// (0x000280fd) temp_image_control_pane_ParamLimits

0xd459,	// (0x000280fd) temp_image_control_pane

0x3bfb,	// (0x0001e89f) main_mp3_pane

0xeaf5,	// (0x00029799) temp_image_control_pane_g1_ParamLimits

0xeaf5,	// (0x00029799) temp_image_control_pane_g1

0xeb03,	// (0x000297a7) temp_image_control_pane_g2_ParamLimits

0xeb03,	// (0x000297a7) temp_image_control_pane_g2

0xeb15,	// (0x000297b9) temp_image_control_pane_g3_ParamLimits

0xeb15,	// (0x000297b9) temp_image_control_pane_g3

0x76af,	// (0x00022353) temp_image_control_pane_g4_ParamLimits

0x76af,	// (0x00022353) temp_image_control_pane_g4

0x0003,

0xf675,	// (0x0002a319) temp_image_control_pane_g_ParamLimits

0xf675,	// (0x0002a319) temp_image_control_pane_g

0xeaf5,	// (0x00029799) main_mp3_pane_g1

0x76c0,	// (0x00022364) main_mp3_pane_g2

0x0007,

0xf67e,	// (0x0002a322) main_mp3_pane_g

0xeb4a,	// (0x000297ee) main_mp3_pane_t1

0xc52f,	// (0x000271d3) main_camera_pane_g8_ParamLimits

0xc52f,	// (0x000271d3) main_camera_pane_g8

0x5431,	// (0x000200d5) main_video_pane_g7_ParamLimits

0x5431,	// (0x000200d5) main_video_pane_g7

0x3d9c,	// (0x0001ea40) main_camera2_pane_t7_ParamLimits

0x3d9c,	// (0x0001ea40) main_camera2_pane_t7

0xc896,	// (0x0002753a) scroll_pane_cp025_ParamLimits

0xc896,	// (0x0002753a) scroll_pane_cp025

0xc8aa,	// (0x0002754e) scroll_pane_cp026_ParamLimits

0xc8aa,	// (0x0002754e) scroll_pane_cp026

0xc8b9,	// (0x0002755d) wml_content_pane_ParamLimits

0x37a5,	// (0x0001e449) main_touch_calib_pane

0x7764,	// (0x00022408) main_touch_calib_pane_g1

0x7770,	// (0x00022414) main_touch_calib_pane_g2

0x777c,	// (0x00022420) main_touch_calib_pane_g3

0x7788,	// (0x0002242c) main_touch_calib_pane_g4

0x0003,

0xf69c,	// (0x0002a340) main_touch_calib_pane_g

0x7794,	// (0x00022438) main_touch_calib_pane_t1

0x77ad,	// (0x00022451) main_touch_calib_pane_t2

0x0004,

0xf6a5,	// (0x0002a349) main_touch_calib_pane_t

0xd020,	// (0x00027cc4) mup_progress_pane_cp02

0xd055,	// (0x00027cf9) navi_pane_g1

0xd110,	// (0x00027db4) navi_pane_mp_t3

0x3bfb,	// (0x0001e89f) main_mp3_pane_ParamLimits

0x742d,	// (0x000220d1) navi_pane_ParamLimits

0xeaf5,	// (0x00029799) main_mp3_pane_g1_ParamLimits

0x76c0,	// (0x00022364) main_mp3_pane_g2_ParamLimits

0x76cc,	// (0x00022370) main_mp3_pane_g3_ParamLimits

0x76cc,	// (0x00022370) main_mp3_pane_g3

0x76d8,	// (0x0002237c) main_mp3_pane_g4_ParamLimits

0x76d8,	// (0x0002237c) main_mp3_pane_g4

0xc521,	// (0x000271c5) main_mp3_pane_g5_ParamLimits

0xc521,	// (0x000271c5) main_mp3_pane_g5

0xeb25,	// (0x000297c9) main_mp3_pane_g6_ParamLimits

0xeb25,	// (0x000297c9) main_mp3_pane_g6

0xeb32,	// (0x000297d6) main_mp3_pane_g7_ParamLimits

0xeb32,	// (0x000297d6) main_mp3_pane_g7

0xeb3e,	// (0x000297e2) main_mp3_pane_g8_ParamLimits

0xeb3e,	// (0x000297e2) main_mp3_pane_g8

0xf67e,	// (0x0002a322) main_mp3_pane_g_ParamLimits

0x76e4,	// (0x00022388) main_mp3_pane_t2

0x76f4,	// (0x00022398) main_mp3_pane_t3

0xeb58,	// (0x000297fc) main_mp3_pane_t4

0xeb66,	// (0x0002980a) main_mp3_pane_t5

0x0005,

0xf68f,	// (0x0002a333) main_mp3_pane_t

0xeb74,	// (0x00029818) mup_progress_pane_cp01

0x355d,	// (0x0001e201) aid_zoom_text_secondary2

0xe94a,	// (0x000295ee) list_cale_ev2_pane

0xe952,	// (0x000295f6) scroll_pane_cp023_ParamLimits

0x7808,	// (0x000224ac) field_cale_ev2_pane_ParamLimits

0x7808,	// (0x000224ac) field_cale_ev2_pane

0xeb7c,	// (0x00029820) field_cale_ev2_pane_g1_ParamLimits

0xeb7c,	// (0x00029820) field_cale_ev2_pane_g1

0xeb88,	// (0x0002982c) field_cale_ev2_pane_g2_ParamLimits

0xeb88,	// (0x0002982c) field_cale_ev2_pane_g2

0xeba0,	// (0x00029844) field_cale_ev2_pane_g3_ParamLimits

0xeba0,	// (0x00029844) field_cale_ev2_pane_g3

0x0003,

0xf6b0,	// (0x0002a354) field_cale_ev2_pane_g_ParamLimits

0xf6b0,	// (0x0002a354) field_cale_ev2_pane_g

0xebc4,	// (0x00029868) field_cale_ev2_pane_t1_ParamLimits

0xebc4,	// (0x00029868) field_cale_ev2_pane_t1

0xebdb,	// (0x0002987f) field_cale_ev2_pane_t2_ParamLimits

0xebdb,	// (0x0002987f) field_cale_ev2_pane_t2

0x0001,

0xf6b9,	// (0x0002a35d) field_cale_ev2_pane_t_ParamLimits

0xf6b9,	// (0x0002a35d) field_cale_ev2_pane_t

0x6de9,	// (0x00021a8d) main_postcard_pane_g5_ParamLimits

0x6de9,	// (0x00021a8d) main_postcard_pane_g5

0x6df7,	// (0x00021a9b) main_postcard_pane_g6_ParamLimits

0x6df7,	// (0x00021a9b) main_postcard_pane_g6

0xc513,	// (0x000271b7) camera2_autofocus_pane_cp_ParamLimits

0xc513,	// (0x000271b7) camera2_autofocus_pane_cp

0x3bfb,	// (0x0001e89f) main_mup3_pane

0x7871,	// (0x00022515) main_mup3_pane_g1_ParamLimits

0x7871,	// (0x00022515) main_mup3_pane_g1

0x7892,	// (0x00022536) main_mup3_pane_g2_ParamLimits

0x7892,	// (0x00022536) main_mup3_pane_g2

0x790c,	// (0x000225b0) main_mup3_pane_g3_ParamLimits

0x790c,	// (0x000225b0) main_mup3_pane_g3

0x794f,	// (0x000225f3) main_mup3_pane_g4_ParamLimits

0x794f,	// (0x000225f3) main_mup3_pane_g4

0x7992,	// (0x00022636) main_mup3_pane_g5_ParamLimits

0x7992,	// (0x00022636) main_mup3_pane_g5

0x79d5,	// (0x00022679) main_mup3_pane_g6_ParamLimits

0x79d5,	// (0x00022679) main_mup3_pane_g6

0xc52f,	// (0x000271d3) main_mup3_pane_g7_ParamLimits

0xc52f,	// (0x000271d3) main_mup3_pane_g7

0x0007,

0xf6c9,	// (0x0002a36d) main_mup3_pane_g_ParamLimits

0xf6c9,	// (0x0002a36d) main_mup3_pane_g

0x7a4b,	// (0x000226ef) main_mup3_pane_t1_ParamLimits

0x7a4b,	// (0x000226ef) main_mup3_pane_t1

0x7aba,	// (0x0002275e) main_mup3_pane_t2_ParamLimits

0x7aba,	// (0x0002275e) main_mup3_pane_t2

0x7b83,	// (0x00022827) main_mup3_pane_t4_ParamLimits

0x7b83,	// (0x00022827) main_mup3_pane_t4

0x7bd1,	// (0x00022875) main_mup3_pane_t5_ParamLimits

0x7bd1,	// (0x00022875) main_mup3_pane_t5

0x7c81,	// (0x00022925) main_mup3_pane_t6_ParamLimits

0x7c81,	// (0x00022925) main_mup3_pane_t6

0x0005,

0xf6da,	// (0x0002a37e) main_mup3_pane_t_ParamLimits

0xf6da,	// (0x0002a37e) main_mup3_pane_t

0x7d2d,	// (0x000229d1) mup3_progress_pane_ParamLimits

0x7d2d,	// (0x000229d1) mup3_progress_pane

0x7da1,	// (0x00022a45) popup_mup3_control_window_ParamLimits

0x7da1,	// (0x00022a45) popup_mup3_control_window

0xebf0,	// (0x00029894) popup_mup3_text_window

0x7dba,	// (0x00022a5e) mup3_progress_pane_t1

0x7dd9,	// (0x00022a7d) mup3_progress_pane_t2

0xebf8,	// (0x0002989c) mup3_progress_pane_t3

0x0002,

0xf6e7,	// (0x0002a38b) mup3_progress_pane_t

0xec15,	// (0x000298b9) mup_progress_pane_cp03

0xbe20,	// (0x00026ac4) bg_tb_trans_pane_cp04

0x7df8,	// (0x00022a9c) mup3_volume_pane

0x7e00,	// (0x00022aa4) popup_mup3_control_window_g1

0x7e09,	// (0x00022aad) mup3_volume_pane_g1

0x7e12,	// (0x00022ab6) mup3_volume_pane_g2

0x7e1b,	// (0x00022abf) mup3_volume_pane_g3

0x0002,

0xf6ee,	// (0x0002a392) mup3_volume_pane_g

0xbe20,	// (0x00026ac4) bg_tb_trans_pane_cp03

0xec25,	// (0x000298c9) popup_mup3_text_window_g1

0xec2d,	// (0x000298d1) popup_mup3_text_window_t1

0xc605,	// (0x000272a9) list_calc_item_pane_g1_ParamLimits

0xe622,	// (0x000292c6) mup_volume_pane_cp_g1

0x77c6,	// (0x0002246a) main_touch_calib_pane_t3

0x77dc,	// (0x00022480) main_touch_calib_pane_t4

0x77f2,	// (0x00022496) main_touch_calib_pane_t5

0x3515,	// (0x0001e1b9) aid_cell_size_toolbar2

0x351d,	// (0x0001e1c1) aid_popup3_width_pane

0x355d,	// (0x0001e201) aid_zoom_text_msg_primary

0x533d,	// (0x0001ffe1) vorec_t7

0xc5c9,	// (0x0002726d) bg_calc_paper_pane_g1_ParamLimits

0xc5d5,	// (0x00027279) bg_calc_paper_pane_g2_ParamLimits

0xc5e1,	// (0x00027285) bg_calc_paper_pane_g3_ParamLimits

0xc5ed,	// (0x00027291) bg_calc_paper_pane_g4_ParamLimits

0xc5f9,	// (0x0002729d) bg_calc_paper_pane_g5_ParamLimits

0x4e11,	// (0x0001fab5) bg_calc_paper_pane_g6_ParamLimits

0x4e22,	// (0x0001fac6) bg_calc_paper_pane_g7_ParamLimits

0x4e33,	// (0x0001fad7) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00029d72) bg_calc_paper_pane_g_ParamLimits

0x4e44,	// (0x0001fae8) calc_bg_paper_pane_g9_ParamLimits

0xc513,	// (0x000271b7) image_qvga_pane_ParamLimits

0xc513,	// (0x000271b7) image_qvga_pane

0xc4a6,	// (0x0002714a) bg_popup_sub_pane_cp04_ParamLimits

0xd390,	// (0x00028034) popup_mup_playback_window_g1_ParamLimits

0xd39c,	// (0x00028040) popup_mup_playback_window_t1_ParamLimits

0xd3b1,	// (0x00028055) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x0002a0d0) popup_mup_playback_window_t_ParamLimits

0xc521,	// (0x000271c5) main_mup2_pane_g3_ParamLimits

0xc521,	// (0x000271c5) main_mup2_pane_g3

0x55f2,	// (0x00020296) popup_toolbar_window_cp04

0xd735,	// (0x000283d9) popup_call2_audio_second_window_g3_ParamLimits

0xd735,	// (0x000283d9) popup_call2_audio_second_window_g3

0xdb4d,	// (0x000287f1) popup_call2_audio_first_window_g4_ParamLimits

0xdb4d,	// (0x000287f1) popup_call2_audio_first_window_g4

0xe174,	// (0x00028e18) popup_call2_audio_in_window_g4_ParamLimits

0xe174,	// (0x00028e18) popup_call2_audio_in_window_g4

0x6ec6,	// (0x00021b6a) aid_area_sk_bg_cut_ParamLimits

0x6ec6,	// (0x00021b6a) aid_area_sk_bg_cut

0xd3c6,	// (0x0002806a) aid_area_sk_bg_cut_2_ParamLimits

0xd3c6,	// (0x0002806a) aid_area_sk_bg_cut_2

0xbe20,	// (0x00026ac4) aid_placing_details_win

0xbe20,	// (0x00026ac4) aid_placing_details_win_2

0xc521,	// (0x000271c5) camera2_autofocus_pane_g1_ParamLimits

0x373d,	// (0x0001e3e1) popup_fixed_preview_cale_window_ParamLimits

0x373d,	// (0x0001e3e1) popup_fixed_preview_cale_window

0xd18e,	// (0x00027e32) navi_slider_pane_g3

0xd197,	// (0x00027e3b) navi_slider_pane_g4

0xd1a0,	// (0x00027e44) navi_slider_pane_g5

0xd18e,	// (0x00027e32) navi_slider_pane_g6

0x3b75,	// (0x0001e819) navi_slider_pane_g7

0xd29e,	// (0x00027f42) mup_scale_pane_g3

0xd2d7,	// (0x00027f7b) mup_scale_pane_g4

0xd2e0,	// (0x00027f84) mup_scale_pane_g5

0x6bc2,	// (0x00021866) mup_scale_pane_g6

0x6bcb,	// (0x0002186f) mup_scale_pane_g7

0x0a8d,	// (0x0001b731) cams2_slider_pane_g3

0x0a8d,	// (0x0001b731) cams2_slider_pane_g4

0x0a8d,	// (0x0001b731) cams2_slider_pane_g5

0x0a8d,	// (0x0001b731) cams2_slider_pane_g6

0x0a8d,	// (0x0001b731) cams2_slider_pane_g7

0xc55f,	// (0x00027203) camera2_autofocus_pane_cp_g1

0xe492,	// (0x00029136) bg_popup_preview_window_pane_cp02_ParamLimits

0xe492,	// (0x00029136) bg_popup_preview_window_pane_cp02

0xec3b,	// (0x000298df) list_fp_cale_pane_ParamLimits

0xec3b,	// (0x000298df) list_fp_cale_pane

0xec47,	// (0x000298eb) popup_fixed_preview_cale_window_t1_ParamLimits

0xec47,	// (0x000298eb) popup_fixed_preview_cale_window_t1

0x7e24,	// (0x00022ac8) popup_fixed_preview_cale_window_t2_ParamLimits

0x7e24,	// (0x00022ac8) popup_fixed_preview_cale_window_t2

0x7e39,	// (0x00022add) popup_fixed_preview_cale_window_t3_ParamLimits

0x7e39,	// (0x00022add) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f5,	// (0x0002a399) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f5,	// (0x0002a399) popup_fixed_preview_cale_window_t

0x7e4e,	// (0x00022af2) list_single_fp_cale_pane_ParamLimits

0x7e4e,	// (0x00022af2) list_single_fp_cale_pane

0xec65,	// (0x00029909) list_single_fp_cale_pane_g1_ParamLimits

0xec65,	// (0x00029909) list_single_fp_cale_pane_g1

0xec71,	// (0x00029915) list_single_fp_cale_pane_g2_ParamLimits

0xec71,	// (0x00029915) list_single_fp_cale_pane_g2

0x0002,

0xf6fc,	// (0x0002a3a0) list_single_fp_cale_pane_g_ParamLimits

0xf6fc,	// (0x0002a3a0) list_single_fp_cale_pane_g

0xec8a,	// (0x0002992e) list_single_fp_cale_pane_t1_ParamLimits

0xec8a,	// (0x0002992e) list_single_fp_cale_pane_t1

0xec9c,	// (0x00029940) list_single_fp_cale_pane_t2_ParamLimits

0xec9c,	// (0x00029940) list_single_fp_cale_pane_t2

0x0001,

0xf703,	// (0x0002a3a7) list_single_fp_cale_pane_t_ParamLimits

0xf703,	// (0x0002a3a7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x37a5,	// (0x0001e449) main_dialer_pane

0xbe20,	// (0x00026ac4) aid_cell_size_keypad

0xbe20,	// (0x00026ac4) dialer_ne_pane

0xbe20,	// (0x00026ac4) grid_dialer_command_1_pane

0xbe20,	// (0x00026ac4) grid_dialer_command_2_pane

0xbe20,	// (0x00026ac4) grid_dialer_keypad_pane

0xe45c,	// (0x00029100) bg_popup_call_pane_cp06_ParamLimits

0xe45c,	// (0x00029100) bg_popup_call_pane_cp06

0xe45c,	// (0x00029100) dialer_ne_clear_pane_ParamLimits

0xe45c,	// (0x00029100) dialer_ne_clear_pane

0xc55f,	// (0x00027203) dialer_ne_pane_g1

0xc57d,	// (0x00027221) dialer_ne_pane_t1_ParamLimits

0xc57d,	// (0x00027221) dialer_ne_pane_t1

0xeccf,	// (0x00029973) dialer_ne_pane_t2_ParamLimits

0xeccf,	// (0x00029973) dialer_ne_pane_t2

0x7e61,	// (0x00022b05) dialer_ne_pane_t3_ParamLimits

0x7e61,	// (0x00022b05) dialer_ne_pane_t3

0x0002,

0xf708,	// (0x0002a3ac) dialer_ne_pane_t_ParamLimits

0xf708,	// (0x0002a3ac) dialer_ne_pane_t

0x7e61,	// (0x00022b05) dialer_ne_pane_t3_copy1_ParamLimits

0x7e61,	// (0x00022b05) dialer_ne_pane_t3_copy1

0xecec,	// (0x00029990) cell_dialer_keypad_pane_ParamLimits

0xecec,	// (0x00029990) cell_dialer_keypad_pane

0xc315,	// (0x00026fb9) cell_dialer_command_1_pane_ParamLimits

0xc315,	// (0x00026fb9) cell_dialer_command_1_pane

0xed03,	// (0x000299a7) cell_dialer_command_2_pane_ParamLimits

0xed03,	// (0x000299a7) cell_dialer_command_2_pane

0xc315,	// (0x00026fb9) bg_button_pane_cp02_ParamLimits

0xc315,	// (0x00026fb9) bg_button_pane_cp02

0xc521,	// (0x000271c5) cell_dialer_keypad_pane_g1_ParamLimits

0xc521,	// (0x000271c5) cell_dialer_keypad_pane_g1

0xc315,	// (0x00026fb9) bg_button_pane_cp03_ParamLimits

0xc315,	// (0x00026fb9) bg_button_pane_cp03

0xc521,	// (0x000271c5) cell_dialer_command_1_pane_g1_ParamLimits

0xc521,	// (0x000271c5) cell_dialer_command_1_pane_g1

0xbe20,	// (0x00026ac4) bg_button_pane_cp04

0xc55f,	// (0x00027203) cell_dialer_command_2_pane_g1

0xbe20,	// (0x00026ac4) bg_button_pane_cp06

0xc55f,	// (0x00027203) dialer_ne_clear_pane_g1

0xd061,	// (0x00027d05) navi_pane_g2

0xd08f,	// (0x00027d33) navi_pane_g3

0x0002,

0xf334,	// (0x00029fd8) navi_pane_g

0xd11e,	// (0x00027dc2) navi_pane_mv_g2

0xd145,	// (0x00027de9) navi_pane_mv_g5

0x69a0,	// (0x00021644) navi_pane_mv_t1

0xc5bd,	// (0x00027261) main_clock2_pane

0xc513,	// (0x000271b7) main_clock2_list_pane_ParamLimits

0xc513,	// (0x000271b7) main_clock2_list_pane

0x7ed7,	// (0x00022b7b) main_clock2_pane_t1_ParamLimits

0x7ed7,	// (0x00022b7b) main_clock2_pane_t1

0x7f05,	// (0x00022ba9) main_clock2_pane_t2_ParamLimits

0x7f05,	// (0x00022ba9) main_clock2_pane_t2

0x0004,

0xf714,	// (0x0002a3b8) main_clock2_pane_t_ParamLimits

0xf714,	// (0x0002a3b8) main_clock2_pane_t

0x7f6a,	// (0x00022c0e) popup_clock_analogue_window_cp03_ParamLimits

0x7f6a,	// (0x00022c0e) popup_clock_analogue_window_cp03

0x7f88,	// (0x00022c2c) popup_clock_digital_window_cp02_ParamLimits

0x7f88,	// (0x00022c2c) popup_clock_digital_window_cp02

0x7fc8,	// (0x00022c6c) main_clock2_list_single_pane_ParamLimits

0x7fc8,	// (0x00022c6c) main_clock2_list_single_pane

0xc786,	// (0x0002742a) list_highlight_pane_cp05

0xed46,	// (0x000299ea) main_clock2_list_single_pane_t1

0x55f2,	// (0x00020296) popup_toolbar_window_cp04_ParamLimits

0xc52f,	// (0x000271d3) camera2_autofocus_pane_g2_ParamLimits

0xc52f,	// (0x000271d3) camera2_autofocus_pane_g2

0xc52f,	// (0x000271d3) camera2_autofocus_pane_g3_ParamLimits

0xc52f,	// (0x000271d3) camera2_autofocus_pane_g3

0xc52f,	// (0x000271d3) camera2_autofocus_pane_g4_ParamLimits

0xc52f,	// (0x000271d3) camera2_autofocus_pane_g4

0xc52f,	// (0x000271d3) camera2_autofocus_pane_g5_ParamLimits

0xc52f,	// (0x000271d3) camera2_autofocus_pane_g5

0x0004,

0xf658,	// (0x0002a2fc) camera2_autofocus_pane_g_ParamLimits

0xf658,	// (0x0002a2fc) camera2_autofocus_pane_g

0x7832,	// (0x000224d6) camera2_autofocus_pane_cp_g2

0x783a,	// (0x000224de) camera2_autofocus_pane_cp_g3

0x7842,	// (0x000224e6) camera2_autofocus_pane_cp_g4

0x784a,	// (0x000224ee) camera2_autofocus_pane_cp_g5

0x0004,

0xf6be,	// (0x0002a362) camera2_autofocus_pane_cp_g

0xbe20,	// (0x00026ac4) popup_dialer_spcha_window

0xbe20,	// (0x00026ac4) bg_popup_sub_pane_cp07

0xbe20,	// (0x00026ac4) list_spcha_pane

0xed54,	// (0x000299f8) list_single_spcha_pane_ParamLimits

0xed54,	// (0x000299f8) list_single_spcha_pane

0xbe20,	// (0x00026ac4) list_highlight_pane_cp06

0xccb5,	// (0x00027959) list_single_spcha_pane_t1

0xdf1e,	// (0x00028bc2) popup_call2_audio_out_window_g4_ParamLimits

0xdf1e,	// (0x00028bc2) popup_call2_audio_out_window_g4

0x37a5,	// (0x0001e449) main_imed2_pane

0x3c95,	// (0x0001e939) popup_imed_adjust2_window

0x3ca8,	// (0x0001e94c) popup_imed_trans_window_ParamLimits

0x3ca8,	// (0x0001e94c) popup_imed_trans_window

0xe719,	// (0x000293bd) popup_blid_sat_info2_window_t1

0xe727,	// (0x000293cb) popup_blid_sat_info2_window_t2

0x000a,

0xf5ed,	// (0x0002a291) popup_blid_sat_info2_window_t

0x7fda,	// (0x00022c7e) aid_size_cell_colour_35

0x7ff4,	// (0x00022c98) aid_size_cell_colour_112

0x800b,	// (0x00022caf) aid_size_cell_effect

0xc315,	// (0x00026fb9) bg_tb_trans_pane_cp02

0xcf34,	// (0x00027bd8) heading_imed_pane

0x8025,	// (0x00022cc9) listscroll_imed_pane

0xed66,	// (0x00029a0a) heading_imed_pane_g1

0xed6e,	// (0x00029a12) heading_imed_pane_t1

0xed7c,	// (0x00029a20) grid_imed_colour_35_pane_ParamLimits

0xed7c,	// (0x00029a20) grid_imed_colour_35_pane

0x8031,	// (0x00022cd5) grid_imed_effect_pane

0xed94,	// (0x00029a38) list_imed_aspect_pane

0x8041,	// (0x00022ce5) scroll_pane_cp027_ParamLimits

0x8041,	// (0x00022ce5) scroll_pane_cp027

0x804d,	// (0x00022cf1) cell_imed_effect_pane_ParamLimits

0x804d,	// (0x00022cf1) cell_imed_effect_pane

0xed9c,	// (0x00029a40) cell_imed_colour_pane_ParamLimits

0xed9c,	// (0x00029a40) cell_imed_colour_pane

0xedde,	// (0x00029a82) cell_imed_colour_pane_g1_ParamLimits

0xedde,	// (0x00029a82) cell_imed_colour_pane_g1

0xedef,	// (0x00029a93) hgihlgiht_grid_pane_cp016_ParamLimits

0xedef,	// (0x00029a93) hgihlgiht_grid_pane_cp016

0x8065,	// (0x00022d09) cell_imed_effect_pane_g1

0x806d,	// (0x00022d11) grid_highlight_pane_cp017

0xee00,	// (0x00029aa4) list_imed_single_pane_ParamLimits

0xee00,	// (0x00029aa4) list_imed_single_pane

0xbe20,	// (0x00026ac4) list_highlight_pane_cp07

0xee15,	// (0x00029ab9) list_imed_aspect_pane_comp1_t1

0xd2a7,	// (0x00027f4b) bg_tb_trans_pane_cp05

0xee37,	// (0x00029adb) popup_imed_adjust2_window_g1

0xee5e,	// (0x00029b02) popup_imed_adjust2_window_t1

0xee76,	// (0x00029b1a) slider_imed_adjust_pane

0xee8a,	// (0x00029b2e) slider_imed_adjust_pane_g1

0xee9a,	// (0x00029b3e) slider_imed_adjust_pane_g2

0xeeaa,	// (0x00029b4e) slider_imed_adjust_pane_g3

0xeebb,	// (0x00029b5f) slider_imed_adjust_pane_g4

0x0003,

0xf731,	// (0x0002a3d5) slider_imed_adjust_pane_g

0x8076,	// (0x00022d1a) aid_size_cell_clipart2

0x8082,	// (0x00022d26) grid_imed_clipart_pane

0xd2f1,	// (0x00027f95) scroll_pane_cp031

0x808c,	// (0x00022d30) cell_imed_clipart_pane_ParamLimits

0x808c,	// (0x00022d30) cell_imed_clipart_pane

0x80af,	// (0x00022d53) cell_imed_clipart_pane_g1

0xbe20,	// (0x00026ac4) grid_highlight_pane_cp014

0x7eb9,	// (0x00022b5d) main_clock2_pane_g1_ParamLimits

0x7eb9,	// (0x00022b5d) main_clock2_pane_g1

0x7fa4,	// (0x00022c48) aid_call2_pane_cp10

0x7fb6,	// (0x00022c5a) aid_call_pane_cp10

0xcfc0,	// (0x00027c64) popup_clock_analogue_window_cp10_g1

0xcfc0,	// (0x00027c64) popup_clock_analogue_window_cp10_g2

0x3e20,	// (0x0001eac4) popup_clock_analogue_window_cp10_g3

0x3e20,	// (0x0001eac4) popup_clock_analogue_window_cp10_g4

0xcfc0,	// (0x00027c64) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71f,	// (0x0002a3c3) popup_clock_analogue_window_cp10_g

0x3e36,	// (0x0001eada) popup_clock_analogue_window_cp10_t1

0x3e55,	// (0x0001eaf9) clock_digital_number_pane_cp10_ParamLimits

0x3e55,	// (0x0001eaf9) clock_digital_number_pane_cp10

0x3e6f,	// (0x0001eb13) clock_digital_number_pane_cp11_ParamLimits

0x3e6f,	// (0x0001eb13) clock_digital_number_pane_cp11

0x3e89,	// (0x0001eb2d) clock_digital_number_pane_cp12_ParamLimits

0x3e89,	// (0x0001eb2d) clock_digital_number_pane_cp12

0x3ea3,	// (0x0001eb47) clock_digital_number_pane_cp13_ParamLimits

0x3ea3,	// (0x0001eb47) clock_digital_number_pane_cp13

0x3ebd,	// (0x0001eb61) clock_digital_separator_pane_cp10_ParamLimits

0x3ebd,	// (0x0001eb61) clock_digital_separator_pane_cp10

0x3ed7,	// (0x0001eb7b) popup_clock_digital_window_cp02_t1_ParamLimits

0x3ed7,	// (0x0001eb7b) popup_clock_digital_window_cp02_t1

0xc49e,	// (0x00027142) clock_digital_number_pane_cp10_g1

0xc49e,	// (0x00027142) clock_digital_number_pane_cp10_g2

0x0001,

0xf73a,	// (0x0002a3de) clock_digital_number_pane_cp10_g

0xc49e,	// (0x00027142) clock_digital_separator_pane_cp10_g1

0xc49e,	// (0x00027142) clock_digital_separator_pane_g2_cp10

0xd14d,	// (0x00027df1) navi_pane_vded_g4

0xd156,	// (0x00027dfa) navi_pane_vded_g5

0xd15f,	// (0x00027e03) navi_pane_vded_t1

0x37a5,	// (0x0001e449) main_vded_pane

0x80b8,	// (0x00022d5c) main_vded_pane_g1

0x80c4,	// (0x00022d68) main_vded_pane_g2

0x80ce,	// (0x00022d72) main_vded_pane_g3

0x0002,

0xf73f,	// (0x0002a3e3) main_vded_pane_g

0x80d8,	// (0x00022d7c) main_vded_pane_t1

0x80e6,	// (0x00022d8a) main_vded_pane_t2

0x0001,

0xf746,	// (0x0002a3ea) main_vded_pane_t

0x80f4,	// (0x00022d98) vded_slider_pane

0x80fe,	// (0x00022da2) vded_video_pane

0xeecc,	// (0x00029b70) vded_video_pane_g1

0x8108,	// (0x00022dac) vded_video_pane_g2

0xc55f,	// (0x00027203) vded_video_pane_g3

0x0002,

0xf74b,	// (0x0002a3ef) vded_video_pane_g

0xeed6,	// (0x00029b7a) vded_slider_pane_g1

0xe622,	// (0x000292c6) vded_slider_pane_g2

0xeedf,	// (0x00029b83) vded_slider_pane_g3

0xeee8,	// (0x00029b8c) vded_slider_pane_g4

0xeef1,	// (0x00029b95) vded_slider_pane_g5

0x0004,

0xf752,	// (0x0002a3f6) vded_slider_pane_g

0x7d93,	// (0x00022a37) mup3_rocker_pane_ParamLimits

0x7d93,	// (0x00022a37) mup3_rocker_pane

0x8111,	// (0x00022db5) mup3_control_keys_pane_g1

0x8119,	// (0x00022dbd) mup3_control_keys_pane_g2

0x8121,	// (0x00022dc5) mup3_control_keys_pane_g3

0x8129,	// (0x00022dcd) mup3_control_keys_pane_g4

0x0003,

0xf75d,	// (0x0002a401) mup3_control_keys_pane_g

0x3765,	// (0x0001e409) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3765,	// (0x0001e409) popup_toolbar2_fixed_window_cp01

0x7dad,	// (0x00022a51) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7dad,	// (0x00022a51) popup_toolbar2_fixed_window_cp02

0xd8a7,	// (0x0002854b) popup_call2_audio_second_window_t4_ParamLimits

0xd8a7,	// (0x0002854b) popup_call2_audio_second_window_t4

0xdde3,	// (0x00028a87) popup_call2_audio_first_window_t6_ParamLimits

0xdde3,	// (0x00028a87) popup_call2_audio_first_window_t6

0xe021,	// (0x00028cc5) popup_call2_audio_out_window_t6_ParamLimits

0xe021,	// (0x00028cc5) popup_call2_audio_out_window_t6

0x37a5,	// (0x0001e449) main_vitu_pane

0xc513,	// (0x000271b7) aid_size_cell_itu_ParamLimits

0xc513,	// (0x000271b7) aid_size_cell_itu

0xc513,	// (0x000271b7) bg_popup_window_pane_cp08_ParamLimits

0xc513,	// (0x000271b7) bg_popup_window_pane_cp08

0xc513,	// (0x000271b7) field_vitu_entry_pane_ParamLimits

0xc513,	// (0x000271b7) field_vitu_entry_pane

0xc513,	// (0x000271b7) grid_vitu_function_pane_ParamLimits

0xc513,	// (0x000271b7) grid_vitu_function_pane

0xc513,	// (0x000271b7) grid_vitu_itu_pane_ParamLimits

0xc513,	// (0x000271b7) grid_vitu_itu_pane

0xc513,	// (0x000271b7) cell_vitu_itu_pane_ParamLimits

0xc513,	// (0x000271b7) cell_vitu_itu_pane

0xc513,	// (0x000271b7) cell_vitu_function_pane_ParamLimits

0xc513,	// (0x000271b7) cell_vitu_function_pane

0xc315,	// (0x00026fb9) bg_popup_sub_pane_cp08_ParamLimits

0xc315,	// (0x00026fb9) bg_popup_sub_pane_cp08

0xc569,	// (0x0002720d) field_vitu_entry_pane_t1_ParamLimits

0xc569,	// (0x0002720d) field_vitu_entry_pane_t1

0xeccf,	// (0x00029973) field_vitu_entry_pane_t2_ParamLimits

0xeccf,	// (0x00029973) field_vitu_entry_pane_t2

0x0001,

0xf766,	// (0x0002a40a) field_vitu_entry_pane_t_ParamLimits

0xf766,	// (0x0002a40a) field_vitu_entry_pane_t

0xe45c,	// (0x00029100) bg_button_pane_cp05_ParamLimits

0xe45c,	// (0x00029100) bg_button_pane_cp05

0xeefa,	// (0x00029b9e) cell_vitu_itu_pane_g1

0xd2b5,	// (0x00027f59) cell_vitu_itu_pane_t1_ParamLimits

0xd2b5,	// (0x00027f59) cell_vitu_itu_pane_t1

0xd2b5,	// (0x00027f59) cell_vitu_itu_pane_t2_ParamLimits

0xd2b5,	// (0x00027f59) cell_vitu_itu_pane_t2

0x0002,

0xf76b,	// (0x0002a40f) cell_vitu_itu_pane_t_ParamLimits

0xf76b,	// (0x0002a40f) cell_vitu_itu_pane_t

0xbe20,	// (0x00026ac4) bg_button_pane_cp07

0xc55f,	// (0x00027203) cell_vitu_function_pane_g1

0x387e,	// (0x0001e522) main_calc_pane_g1

0x3551,	// (0x0001e1f5) aid_visual_content_pane

0x37a5,	// (0x0001e449) main_vradio_pane

0xc52f,	// (0x000271d3) main_vradio_pane_g1_ParamLimits

0xc52f,	// (0x000271d3) main_vradio_pane_g1

0xc52f,	// (0x000271d3) main_vradio_pane_g2_ParamLimits

0xc52f,	// (0x000271d3) main_vradio_pane_g2

0x0001,

0xf502,	// (0x0002a1a6) main_vradio_pane_g_ParamLimits

0xf502,	// (0x0002a1a6) main_vradio_pane_g

0xc57d,	// (0x00027221) main_vradio_pane_t1_ParamLimits

0xc57d,	// (0x00027221) main_vradio_pane_t1

0xc57d,	// (0x00027221) main_vradio_pane_t2_ParamLimits

0xc57d,	// (0x00027221) main_vradio_pane_t2

0xc57d,	// (0x00027221) main_vradio_pane_t3_ParamLimits

0xc57d,	// (0x00027221) main_vradio_pane_t3

0x0002,

0xf772,	// (0x0002a416) main_vradio_pane_t_ParamLimits

0xf772,	// (0x0002a416) main_vradio_pane_t

0xc513,	// (0x000271b7) vradio_rocker_control_pane_ParamLimits

0xc513,	// (0x000271b7) vradio_rocker_control_pane

0xc513,	// (0x000271b7) vradio_station_info_pane_ParamLimits

0xc513,	// (0x000271b7) vradio_station_info_pane

0xc315,	// (0x00026fb9) vradio_frequency_info_pane_ParamLimits

0xc315,	// (0x00026fb9) vradio_frequency_info_pane

0xc55f,	// (0x00027203) vradio_station_info_pane_g1

0xd2b5,	// (0x00027f59) vradio_station_info_pane_t1_ParamLimits

0xd2b5,	// (0x00027f59) vradio_station_info_pane_t1

0xc57d,	// (0x00027221) vradio_station_info_pane_t2_ParamLimits

0xc57d,	// (0x00027221) vradio_station_info_pane_t2

0x0001,

0xf779,	// (0x0002a41d) vradio_station_info_pane_t_ParamLimits

0xf779,	// (0x0002a41d) vradio_station_info_pane_t

0xbe20,	// (0x00026ac4) vradio_tuning_pane

0x8139,	// (0x00022ddd) vradio_rocker_control_pane_g1

0xef16,	// (0x00029bba) vradio_rocker_control_pane_g2

0x8141,	// (0x00022de5) vradio_rocker_control_pane_g3

0x8149,	// (0x00022ded) vradio_rocker_control_pane_g4

0x8151,	// (0x00022df5) vradio_rocker_control_pane_g5

0x0004,

0xf77e,	// (0x0002a422) vradio_rocker_control_pane_g

0xc55f,	// (0x00027203) vradio_frequency_info_pane_g1

0xc569,	// (0x0002720d) vradio_frequency_info_pane_t1_ParamLimits

0xc569,	// (0x0002720d) vradio_frequency_info_pane_t1

0x8159,	// (0x00022dfd) vradio_tuning_pane_g1

0x8166,	// (0x00022e0a) vradio_tuning_pane_t1

0x356d,	// (0x0001e211) area_side_right_pane_ParamLimits

0x356d,	// (0x0001e211) area_side_right_pane

0xe44b,	// (0x000290ef) status_small_pane_g1

0xe453,	// (0x000290f7) status_small_pane_g2

0xe46a,	// (0x0002910e) status_small_pane_g3

0xe473,	// (0x00029117) status_small_pane_g4

0x0003,

0xf54f,	// (0x0002a1f3) status_small_pane_g

0xe47c,	// (0x00029120) status_small_pane_t1

0x37a5,	// (0x0001e449) main_video3_pane

0xbe20,	// (0x00026ac4) cams_zoom_vslider_pane

0xef1e,	// (0x00029bc2) image3_wide_pane_ParamLimits

0xef1e,	// (0x00029bc2) image3_wide_pane

0xbe20,	// (0x00026ac4) image3_wide_small_pane

0xef38,	// (0x00029bdc) main_video3_pane_g1_ParamLimits

0xef38,	// (0x00029bdc) main_video3_pane_g1

0xef38,	// (0x00029bdc) main_video3_pane_g2_ParamLimits

0xef38,	// (0x00029bdc) main_video3_pane_g2

0x0001,

0xf789,	// (0x0002a42d) main_video3_pane_g_ParamLimits

0xf789,	// (0x0002a42d) main_video3_pane_g

0xef56,	// (0x00029bfa) main_video3_pane_t1_ParamLimits

0xef56,	// (0x00029bfa) main_video3_pane_t1

0xef56,	// (0x00029bfa) main_video3_pane_t2_ParamLimits

0xef56,	// (0x00029bfa) main_video3_pane_t2

0xef56,	// (0x00029bfa) main_video3_pane_t3_ParamLimits

0xef56,	// (0x00029bfa) main_video3_pane_t3

0x0002,

0xf78e,	// (0x0002a432) main_video3_pane_t_ParamLimits

0xf78e,	// (0x0002a432) main_video3_pane_t

0xc55f,	// (0x00027203) cams_zoom_vslider_pane_g1

0xc55f,	// (0x00027203) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00029d53) cams_zoom_vslider_pane_g

0xbe20,	// (0x00026ac4) small_slider_vertical_pane

0xc55f,	// (0x00027203) small_slider_vertical_pane_g1

0xc55f,	// (0x00027203) small_slider_vertical_pane_g2

0xef7d,	// (0x00029c21) small_slider_vertical_pane_g3

0x0002,

0xf795,	// (0x0002a439) small_slider_vertical_pane_g

0x37a5,	// (0x0001e449) main_hwr_training_pane

0xef86,	// (0x00029c2a) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x00029c2a) hwr_training_instruct_pane

0x8175,	// (0x00022e19) hwr_training_navi_pane_ParamLimits

0x8175,	// (0x00022e19) hwr_training_navi_pane

0x818f,	// (0x00022e33) hwr_training_write_pane_ParamLimits

0x818f,	// (0x00022e33) hwr_training_write_pane

0xbe20,	// (0x00026ac4) bg_frame_shadow_pane

0xefbd,	// (0x00029c61) hwr_training_write_pane_g1

0xefc5,	// (0x00029c69) hwr_training_write_pane_g2

0xefcd,	// (0x00029c71) hwr_training_write_pane_g3

0xefd5,	// (0x00029c79) hwr_training_write_pane_g4

0xefdd,	// (0x00029c81) hwr_training_write_pane_g5

0xefe5,	// (0x00029c89) hwr_training_write_pane_g6

0xefed,	// (0x00029c91) hwr_training_write_pane_g7

0x0006,

0xf79c,	// (0x0002a440) hwr_training_write_pane_g

0x3ef8,	// (0x0001eb9c) hwr_training_navi_pane_g1_ParamLimits

0x3ef8,	// (0x0001eb9c) hwr_training_navi_pane_g1

0x3f0a,	// (0x0001ebae) hwr_training_navi_pane_g2_ParamLimits

0x3f0a,	// (0x0001ebae) hwr_training_navi_pane_g2

0x3f1c,	// (0x0001ebc0) hwr_training_navi_pane_g3_ParamLimits

0x3f1c,	// (0x0001ebc0) hwr_training_navi_pane_g3

0x3f2c,	// (0x0001ebd0) hwr_training_navi_pane_g4_ParamLimits

0x3f2c,	// (0x0001ebd0) hwr_training_navi_pane_g4

0x0004,

0xf7ab,	// (0x0002a44f) hwr_training_navi_pane_g_ParamLimits

0xf7ab,	// (0x0002a44f) hwr_training_navi_pane_g

0x3f46,	// (0x0001ebea) hwr_training_navi_pane_t1

0x81c7,	// (0x00022e6b) list_single_hwr_training_instruct_pane_ParamLimits

0x81c7,	// (0x00022e6b) list_single_hwr_training_instruct_pane

0xeff5,	// (0x00029c99) list_single_hwr_training_instruct_pane_t1

0xe81a,	// (0x000294be) bg_frame_shadow_pane_g1

0xf004,	// (0x00029ca8) bg_frame_shadow_pane_g2

0xf00c,	// (0x00029cb0) bg_frame_shadow_pane_g3

0xf014,	// (0x00029cb8) bg_frame_shadow_pane_g4

0xf01c,	// (0x00029cc0) bg_frame_shadow_pane_g5

0xf024,	// (0x00029cc8) bg_frame_shadow_pane_g6

0xf02c,	// (0x00029cd0) bg_frame_shadow_pane_g7

0xc66c,	// (0x00027310) bg_frame_shadow_pane_g8

0x0007,

0xf7b6,	// (0x0002a45a) bg_frame_shadow_pane_g

0x37a5,	// (0x0001e449) main_video_tele_dialer_pane

0x3f54,	// (0x0001ebf8) aid_size_cell_video_keypad_ParamLimits

0x3f54,	// (0x0001ebf8) aid_size_cell_video_keypad

0x3f64,	// (0x0001ec08) grid_video_dialer_keypad_pane_ParamLimits

0x3f64,	// (0x0001ec08) grid_video_dialer_keypad_pane

0x3f98,	// (0x0001ec3c) video_down_pane_cp_ParamLimits

0x3f98,	// (0x0001ec3c) video_down_pane_cp

0x3fa6,	// (0x0001ec4a) cell_video_dialer_keypad_pane_ParamLimits

0x3fa6,	// (0x0001ec4a) cell_video_dialer_keypad_pane

0xf034,	// (0x00029cd8) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x00029cd8) bg_button_pane_cp08

0x820c,	// (0x00022eb0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x820c,	// (0x00022eb0) cell_video_dialer_keypad_pane_g1

0x7d87,	// (0x00022a2b) mup3_rocker2_pane_ParamLimits

0x7d87,	// (0x00022a2b) mup3_rocker2_pane

0xc55f,	// (0x00027203) mup3_rocker2_pane_g1

0x3c09,	// (0x0001e8ad) main_dialer2_pane

0x37a5,	// (0x0001e449) main_mp4_pane

0x3fd9,	// (0x0001ec7d) main_mp4_pane_g1_ParamLimits

0x3fd9,	// (0x0001ec7d) main_mp4_pane_g1

0x3ffb,	// (0x0001ec9f) main_mp4_pane_g2_ParamLimits

0x3ffb,	// (0x0001ec9f) main_mp4_pane_g2

0x4019,	// (0x0001ecbd) main_mp4_pane_g3_ParamLimits

0x4019,	// (0x0001ecbd) main_mp4_pane_g3

0x4052,	// (0x0001ecf6) main_mp4_pane_g4_ParamLimits

0x4052,	// (0x0001ecf6) main_mp4_pane_g4

0x407a,	// (0x0001ed1e) main_mp4_pane_g5_ParamLimits

0x407a,	// (0x0001ed1e) main_mp4_pane_g5

0x0007,

0xf7d6,	// (0x0002a47a) main_mp4_pane_g_ParamLimits

0xf7d6,	// (0x0002a47a) main_mp4_pane_g

0x40e2,	// (0x0001ed86) main_mp4_pane_t1_ParamLimits

0x40e2,	// (0x0001ed86) main_mp4_pane_t1

0x4144,	// (0x0001ede8) main_mp4_pane_t2_ParamLimits

0x4144,	// (0x0001ede8) main_mp4_pane_t2

0x41a8,	// (0x0001ee4c) main_mp4_pane_t3_ParamLimits

0x41a8,	// (0x0001ee4c) main_mp4_pane_t3

0x4206,	// (0x0001eeaa) main_mp4_pane_t4_ParamLimits

0x4206,	// (0x0001eeaa) main_mp4_pane_t4

0x0003,

0xf7e7,	// (0x0002a48b) main_mp4_pane_t_ParamLimits

0xf7e7,	// (0x0002a48b) main_mp4_pane_t

0x4264,	// (0x0001ef08) mp4_progress_pane_ParamLimits

0x4264,	// (0x0001ef08) mp4_progress_pane

0x4298,	// (0x0001ef3c) mp4_rocker_pane_ParamLimits

0x4298,	// (0x0001ef3c) mp4_rocker_pane

0x0041,	// (0x0001ace5) mp4_progress_pane_t1

0x0063,	// (0x0001ad07) mp4_progress_pane_t2

0x0001,

0xf7f0,	// (0x0002a494) mp4_progress_pane_t

0x0085,	// (0x0001ad29) mup_progress_pane_cp04

0x0a8d,	// (0x0001b731) mp4_rocker_pane_g1

0x3797,	// (0x0001e43b) aid_cell_size_keypad2_ParamLimits

0x3797,	// (0x0001e43b) aid_cell_size_keypad2

0x3797,	// (0x0001e43b) dialer2_ne_pane_ParamLimits

0x3797,	// (0x0001e43b) dialer2_ne_pane

0x3797,	// (0x0001e43b) grid_dialer2_keypad_pane_ParamLimits

0x3797,	// (0x0001e43b) grid_dialer2_keypad_pane

0xe6ef,	// (0x00029393) bg_popup_call_pane_cp07_ParamLimits

0xe6ef,	// (0x00029393) bg_popup_call_pane_cp07

0x8246,	// (0x00022eea) dialer2_ne_pane_t1_ParamLimits

0x8246,	// (0x00022eea) dialer2_ne_pane_t1

0x42ac,	// (0x0001ef50) cell_dialer2_keypad_pane_ParamLimits

0x42ac,	// (0x0001ef50) cell_dialer2_keypad_pane

0xe45c,	// (0x00029100) bg_button_pane_pane_cp04_ParamLimits

0xe45c,	// (0x00029100) bg_button_pane_pane_cp04

0xc521,	// (0x000271c5) cell_dialer2_keypad_pane_g1_ParamLimits

0xc521,	// (0x000271c5) cell_dialer2_keypad_pane_g1

0x54b4,	// (0x00020158) aid_placing_vt_set_content_ParamLimits

0x54b4,	// (0x00020158) aid_placing_vt_set_content

0x54e0,	// (0x00020184) aid_placing_vt_set_title_ParamLimits

0x54e0,	// (0x00020184) aid_placing_vt_set_title

0x37a5,	// (0x0001e449) main_image3_pane

0x42f5,	// (0x0001ef99) area_side_right_pane_cp01_ParamLimits

0x42f5,	// (0x0001ef99) area_side_right_pane_cp01

0x4322,	// (0x0001efc6) main_image3_pane_g1_ParamLimits

0x4322,	// (0x0001efc6) main_image3_pane_g1

0x4330,	// (0x0001efd4) main_image3_pane_g2_ParamLimits

0x4330,	// (0x0001efd4) main_image3_pane_g2

0x4349,	// (0x0001efed) main_image3_pane_g3_ParamLimits

0x4349,	// (0x0001efed) main_image3_pane_g3

0x4362,	// (0x0001f006) main_image3_pane_g4_ParamLimits

0x4362,	// (0x0001f006) main_image3_pane_g4

0x0003,

0xf7ff,	// (0x0002a4a3) main_image3_pane_g_ParamLimits

0xf7ff,	// (0x0002a4a3) main_image3_pane_g

0x437b,	// (0x0001f01f) main_image3_pane_t1_ParamLimits

0x437b,	// (0x0001f01f) main_image3_pane_t1

0x43a0,	// (0x0001f044) main_image3_pane_t2_ParamLimits

0x43a0,	// (0x0001f044) main_image3_pane_t2

0x43bf,	// (0x0001f063) main_image3_pane_t3_ParamLimits

0x43bf,	// (0x0001f063) main_image3_pane_t3

0x0003,

0xf808,	// (0x0002a4ac) main_image3_pane_t_ParamLimits

0xf808,	// (0x0002a4ac) main_image3_pane_t

0xc513,	// (0x000271b7) grid_sctrl_middle_pane_cp01_ParamLimits

0xc513,	// (0x000271b7) grid_sctrl_middle_pane_cp01

0x826d,	// (0x00022f11) cell_sctrl_middle_pane_cp01_ParamLimits

0x826d,	// (0x00022f11) cell_sctrl_middle_pane_cp01

0x827e,	// (0x00022f22) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x827e,	// (0x00022f22) cell_sctrl_middle_pane_cp01_g1

0x37a5,	// (0x0001e449) main_call4_pane

0x4420,	// (0x0001f0c4) aid_size_button_call4_ParamLimits

0x4420,	// (0x0001f0c4) aid_size_button_call4

0x4456,	// (0x0001f0fa) call4_windows_pane_ParamLimits

0x4456,	// (0x0001f0fa) call4_windows_pane

0x446b,	// (0x0001f10f) grid_call4_button_pane_ParamLimits

0x446b,	// (0x0001f10f) grid_call4_button_pane

0x8297,	// (0x00022f3b) call4_windows_conf_pane

0x82ac,	// (0x00022f50) popup_call4_audio_first_window_ParamLimits

0x82ac,	// (0x00022f50) popup_call4_audio_first_window

0x82fc,	// (0x00022fa0) popup_call4_audio_second_window_ParamLimits

0x82fc,	// (0x00022fa0) popup_call4_audio_second_window

0x8315,	// (0x00022fb9) popup_call4_audio_wait_window_ParamLimits

0x8315,	// (0x00022fb9) popup_call4_audio_wait_window

0x448d,	// (0x0001f131) cell_call4_button_pane_ParamLimits

0x448d,	// (0x0001f131) cell_call4_button_pane

0x8323,	// (0x00022fc7) bg_button_pane_cp09_ParamLimits

0x8323,	// (0x00022fc7) bg_button_pane_cp09

0x44b0,	// (0x0001f154) cell_call4_button_pane_g1_ParamLimits

0x44b0,	// (0x0001f154) cell_call4_button_pane_g1

0x832f,	// (0x00022fd3) cell_call4_button_pane_t1_ParamLimits

0x832f,	// (0x00022fd3) cell_call4_button_pane_t1

0x0132,	// (0x0001add6) popup_call4_audio_conf_window_ParamLimits

0x0132,	// (0x0001add6) popup_call4_audio_conf_window

0x7dba,	// (0x00022a5e) mup3_progress_pane_t1_ParamLimits

0x7dd9,	// (0x00022a7d) mup3_progress_pane_t2_ParamLimits

0xebf8,	// (0x0002989c) mup3_progress_pane_t3_ParamLimits

0xf6e7,	// (0x0002a38b) mup3_progress_pane_t_ParamLimits

0xec15,	// (0x000298b9) mup_progress_pane_cp03_ParamLimits

0x8131,	// (0x00022dd5) mup3_control_keys_pane_g4_copy1

0x4298,	// (0x0001ef3c) mp4_rocker2_pane_ParamLimits

0x4298,	// (0x0001ef3c) mp4_rocker2_pane

0x44ef,	// (0x0001f193) mp4_rocker2_pane_g1

0x44ef,	// (0x0001f193) mp4_rocker2_pane_g2

0x44ef,	// (0x0001f193) mp4_rocker2_pane_g3

0x44ef,	// (0x0001f193) mp4_rocker2_pane_g4

0x44ef,	// (0x0001f193) mp4_rocker2_pane_g5

0x0004,

0xf811,	// (0x0002a4b5) mp4_rocker2_pane_g

0x37a5,	// (0x0001e449) main_camera4_pane

0x37a5,	// (0x0001e449) main_video4_pane

0x3f74,	// (0x0001ec18) main_video_tele_dialer_pane_t1_ParamLimits

0x3f74,	// (0x0001ec18) main_video_tele_dialer_pane_t1

0x3f86,	// (0x0001ec2a) main_video_tele_dialer_pane_t2_ParamLimits

0x3f86,	// (0x0001ec2a) main_video_tele_dialer_pane_t2

0x0001,

0xf7c7,	// (0x0002a46b) main_video_tele_dialer_pane_t_ParamLimits

0xf7c7,	// (0x0002a46b) main_video_tele_dialer_pane_t

0x450f,	// (0x0001f1b3) cam4_autofocus_pane_ParamLimits

0x450f,	// (0x0001f1b3) cam4_autofocus_pane

0x4529,	// (0x0001f1cd) cam4_image_uncrop_pane_ParamLimits

0x4529,	// (0x0001f1cd) cam4_image_uncrop_pane

0x4540,	// (0x0001f1e4) cam4_indicators_pane_ParamLimits

0x4540,	// (0x0001f1e4) cam4_indicators_pane

0x455c,	// (0x0001f200) main_camera4_pane_g1_ParamLimits

0x455c,	// (0x0001f200) main_camera4_pane_g1

0x4568,	// (0x0001f20c) main_camera4_pane_g2_ParamLimits

0x4568,	// (0x0001f20c) main_camera4_pane_g2

0x4568,	// (0x0001f20c) main_camera4_pane_g3_ParamLimits

0x4568,	// (0x0001f20c) main_camera4_pane_g3

0x4574,	// (0x0001f218) main_camera4_pane_g4_ParamLimits

0x4574,	// (0x0001f218) main_camera4_pane_g4

0x4580,	// (0x0001f224) main_camera4_pane_g5_ParamLimits

0x4580,	// (0x0001f224) main_camera4_pane_g5

0x0005,

0xf81c,	// (0x0002a4c0) main_camera4_pane_g_ParamLimits

0xf81c,	// (0x0002a4c0) main_camera4_pane_g

0x459a,	// (0x0001f23e) main_camera4_pane_t1_ParamLimits

0x459a,	// (0x0001f23e) main_camera4_pane_t1

0x1605,	// (0x0001c2a9) bg_tb_trans_pane_cp06

0x45c6,	// (0x0001f26a) cam4_indicators_pane_g1

0x45d7,	// (0x0001f27b) cam4_indicators_pane_g2

0x0002,

0xf837,	// (0x0002a4db) cam4_indicators_pane_g

0x45ef,	// (0x0001f293) cam4_indicators_pane_t1

0x4619,	// (0x0001f2bd) main_video4_pane_g1_ParamLimits

0x4619,	// (0x0001f2bd) main_video4_pane_g1

0x4625,	// (0x0001f2c9) main_video4_pane_g2_ParamLimits

0x4625,	// (0x0001f2c9) main_video4_pane_g2

0x4631,	// (0x0001f2d5) main_video4_pane_g3_ParamLimits

0x4631,	// (0x0001f2d5) main_video4_pane_g3

0x463d,	// (0x0001f2e1) main_video4_pane_g4_ParamLimits

0x463d,	// (0x0001f2e1) main_video4_pane_g4

0x0004,

0xf83e,	// (0x0002a4e2) main_video4_pane_g_ParamLimits

0xf83e,	// (0x0002a4e2) main_video4_pane_g

0x465d,	// (0x0001f301) vid4_indicators_pane_ParamLimits

0x465d,	// (0x0001f301) vid4_indicators_pane

0x467c,	// (0x0001f320) video4_image_uncrop_cif_pane_ParamLimits

0x467c,	// (0x0001f320) video4_image_uncrop_cif_pane

0x468b,	// (0x0001f32f) video4_image_uncrop_nhd_pane_ParamLimits

0x468b,	// (0x0001f32f) video4_image_uncrop_nhd_pane

0x4529,	// (0x0001f1cd) video4_image_uncrop_vga_pane_ParamLimits

0x4529,	// (0x0001f1cd) video4_image_uncrop_vga_pane

0x3bfb,	// (0x0001e89f) bg_tb_trans_pane_cp07

0x46a0,	// (0x0001f344) vid4_indicators_pane_g1

0x46b4,	// (0x0001f358) vid4_indicators_pane_g2

0x46c8,	// (0x0001f36c) vid4_indicators_pane_g3

0x0004,

0xf849,	// (0x0002a4ed) vid4_indicators_pane_g

0x46f5,	// (0x0001f399) vid4_indicators_pane_t1

0x8365,	// (0x00023009) cam4_autofocus_pane_g1

0x836d,	// (0x00023011) cam4_autofocus_pane_g2

0x8375,	// (0x00023019) cam4_autofocus_pane_g3

0x0002,

0xf854,	// (0x0002a4f8) cam4_autofocus_pane_g

0x837d,	// (0x00023021) cam4_autofocus_pane_g3_copy1

0x81f0,	// (0x00022e94) video_down_pane_cp_t1

0x81fe,	// (0x00022ea2) video_down_pane_cp_t2

0x0001,

0xf7cc,	// (0x0002a470) video_down_pane_cp_t

0x3797,	// (0x0001e43b) popup_vitu2_window_ParamLimits

0x3797,	// (0x0001e43b) popup_vitu2_window

0x470c,	// (0x0001f3b0) aid_size_cell2_itu2_ParamLimits

0x470c,	// (0x0001f3b0) aid_size_cell2_itu2

0x472e,	// (0x0001f3d2) aid_size_cell_itu2_ParamLimits

0x472e,	// (0x0001f3d2) aid_size_cell_itu2

0x4772,	// (0x0001f416) bg_popup_window_pane_cp09_ParamLimits

0x4772,	// (0x0001f416) bg_popup_window_pane_cp09

0x4780,	// (0x0001f424) field_vitu2_entry_pane_ParamLimits

0x4780,	// (0x0001f424) field_vitu2_entry_pane

0x47a0,	// (0x0001f444) grid_vitu2_function_pane_ParamLimits

0x47a0,	// (0x0001f444) grid_vitu2_function_pane

0x47e0,	// (0x0001f484) grid_vitu2_itu_pane_ParamLimits

0x47e0,	// (0x0001f484) grid_vitu2_itu_pane

0x4854,	// (0x0001f4f8) cell_vitu2_itu_pane_ParamLimits

0x4854,	// (0x0001f4f8) cell_vitu2_itu_pane

0x486d,	// (0x0001f511) cell_vitu2_function_pane_ParamLimits

0x486d,	// (0x0001f511) cell_vitu2_function_pane

0x0231,	// (0x0001aed5) bg_popup_call_pane_cp08_ParamLimits

0x0231,	// (0x0001aed5) bg_popup_call_pane_cp08

0x0248,	// (0x0001aeec) field_vitu2_entry_pane_g1

0x0254,	// (0x0001aef8) field_vitu2_entry_pane_g2

0x0002,

0xf85b,	// (0x0002a4ff) field_vitu2_entry_pane_g

0x8385,	// (0x00023029) field_vitu2_entry_pane_t1_ParamLimits

0x8385,	// (0x00023029) field_vitu2_entry_pane_t1

0x0260,	// (0x0001af04) field_vitu2_entry_pane_t2_ParamLimits

0x0260,	// (0x0001af04) field_vitu2_entry_pane_t2

0x0001,

0xf862,	// (0x0002a506) field_vitu2_entry_pane_t_ParamLimits

0xf862,	// (0x0002a506) field_vitu2_entry_pane_t

0x3d8e,	// (0x0001ea32) bg_button_pane_cp010_ParamLimits

0x3d8e,	// (0x0001ea32) bg_button_pane_cp010

0x48ae,	// (0x0001f552) cell_vitu2_itu_pane_g1

0x48d4,	// (0x0001f578) cell_vitu2_itu_pane_t1_ParamLimits

0x48d4,	// (0x0001f578) cell_vitu2_itu_pane_t1

0x4920,	// (0x0001f5c4) cell_vitu2_itu_pane_t2_ParamLimits

0x4920,	// (0x0001f5c4) cell_vitu2_itu_pane_t2

0x0002,

0xf86c,	// (0x0002a510) cell_vitu2_itu_pane_t_ParamLimits

0xf86c,	// (0x0002a510) cell_vitu2_itu_pane_t

0x3bfb,	// (0x0001e89f) bg_button_pane_cp011

0x49e8,	// (0x0001f68c) cell_vitu2_function_pane_g1

0x37a5,	// (0x0001e449) main_myfav_hc_pane

0x4401,	// (0x0001f0a5) popup_image3_note_pane_ParamLimits

0x4401,	// (0x0001f0a5) popup_image3_note_pane

0x440f,	// (0x0001f0b3) popup_image3_tool_bar_pane_ParamLimits

0x440f,	// (0x0001f0b3) popup_image3_tool_bar_pane

0x4996,	// (0x0001f63a) cell_vitu2_itu_pane_t3_ParamLimits

0x4996,	// (0x0001f63a) cell_vitu2_itu_pane_t3

0xbe20,	// (0x00026ac4) bg_popup_trans_pane

0x0285,	// (0x0001af29) grid_image3_tool_bar_pane

0x028f,	// (0x0001af33) bg_popup_trans_pane_g1

0xc99f,	// (0x00027643) bg_popup_trans_pane_g2

0x0297,	// (0x0001af3b) bg_popup_trans_pane_g3

0x029f,	// (0x0001af43) bg_popup_trans_pane_g4

0x02a7,	// (0x0001af4b) bg_popup_trans_pane_g5

0x02af,	// (0x0001af53) bg_popup_trans_pane_g6

0x02b7,	// (0x0001af5b) bg_popup_trans_pane_g7

0x02bf,	// (0x0001af63) bg_popup_trans_pane_g8

0xc97f,	// (0x00027623) bg_popup_trans_pane_g9

0x0008,

0xf873,	// (0x0002a517) bg_popup_trans_pane_g

0x02c7,	// (0x0001af6b) cell_image3_tool_bar_pane_ParamLimits

0x02c7,	// (0x0001af6b) cell_image3_tool_bar_pane

0xc55f,	// (0x00027203) cell_image3_tool_bar_pane_g1

0xbe20,	// (0x00026ac4) bg_popup_trans_pane_cp1

0x02db,	// (0x0001af7f) popup_image3_note_pane_t1

0x02e9,	// (0x0001af8d) popup_image3_note_pane_t2

0x02f7,	// (0x0001af9b) popup_image3_note_pane_t3

0x0002,

0xf886,	// (0x0002a52a) popup_image3_note_pane_t

0x0305,	// (0x0001afa9) popup_image3_note_pane_t3_copy1

0x83c0,	// (0x00023064) bg_myfav_hc_instruction_pane_ParamLimits

0x83c0,	// (0x00023064) bg_myfav_hc_instruction_pane

0x83d8,	// (0x0002307c) cell_myfav_contact_pane_ParamLimits

0x83d8,	// (0x0002307c) cell_myfav_contact_pane

0x83f2,	// (0x00023096) cell_myfav_contact_pane_cp1_ParamLimits

0x83f2,	// (0x00023096) cell_myfav_contact_pane_cp1

0x840a,	// (0x000230ae) cell_myfav_contact_pane_cp2_ParamLimits

0x840a,	// (0x000230ae) cell_myfav_contact_pane_cp2

0x8422,	// (0x000230c6) cell_myfav_contact_pane_cp3_ParamLimits

0x8422,	// (0x000230c6) cell_myfav_contact_pane_cp3

0x8439,	// (0x000230dd) cell_myfav_contact_pane_cp4_ParamLimits

0x8439,	// (0x000230dd) cell_myfav_contact_pane_cp4

0x844f,	// (0x000230f3) cell_myfav_contact_pane_cp5_ParamLimits

0x844f,	// (0x000230f3) cell_myfav_contact_pane_cp5

0x8463,	// (0x00023107) cell_myfav_contact_pane_cp6_ParamLimits

0x8463,	// (0x00023107) cell_myfav_contact_pane_cp6

0x8477,	// (0x0002311b) cell_myfav_contact_pane_cp7_ParamLimits

0x8477,	// (0x0002311b) cell_myfav_contact_pane_cp7

0x0313,	// (0x0001afb7) listscroll_gen_pane_cp05

0x848f,	// (0x00023133) main_myfav_hc_pane_g1_ParamLimits

0x848f,	// (0x00023133) main_myfav_hc_pane_g1

0x84a5,	// (0x00023149) main_myfav_hc_pane_g2_ParamLimits

0x84a5,	// (0x00023149) main_myfav_hc_pane_g2

0x0002,

0xf88d,	// (0x0002a531) main_myfav_hc_pane_g_ParamLimits

0xf88d,	// (0x0002a531) main_myfav_hc_pane_g

0x84d5,	// (0x00023179) main_myfav_hc_pane_t1_ParamLimits

0x84d5,	// (0x00023179) main_myfav_hc_pane_t1

0x031c,	// (0x0001afc0) main_myfav_hc_pane_t2_ParamLimits

0x031c,	// (0x0001afc0) main_myfav_hc_pane_t2

0x032e,	// (0x0001afd2) main_myfav_hc_pane_t3_ParamLimits

0x032e,	// (0x0001afd2) main_myfav_hc_pane_t3

0x84ec,	// (0x00023190) main_myfav_hc_pane_t4_ParamLimits

0x84ec,	// (0x00023190) main_myfav_hc_pane_t4

0x0004,

0xf894,	// (0x0002a538) main_myfav_hc_pane_t_ParamLimits

0xf894,	// (0x0002a538) main_myfav_hc_pane_t

0xc55f,	// (0x00027203) bg_myfav_hc_instruction_pane_g1

0x0340,	// (0x0001afe4) cell_myfav_contact_pane_g1_ParamLimits

0x0340,	// (0x0001afe4) cell_myfav_contact_pane_g1

0x0340,	// (0x0001afe4) cell_myfav_contact_pane_g2_ParamLimits

0x0340,	// (0x0001afe4) cell_myfav_contact_pane_g2

0x034c,	// (0x0001aff0) cell_myfav_contact_pane_g3_ParamLimits

0x034c,	// (0x0001aff0) cell_myfav_contact_pane_g3

0xc52f,	// (0x000271d3) cell_myfav_contact_pane_g4_ParamLimits

0xc52f,	// (0x000271d3) cell_myfav_contact_pane_g4

0x0359,	// (0x0001affd) cell_myfav_contact_pane_g5_ParamLimits

0x0359,	// (0x0001affd) cell_myfav_contact_pane_g5

0x0004,

0xf89f,	// (0x0002a543) cell_myfav_contact_pane_g_ParamLimits

0xf89f,	// (0x0002a543) cell_myfav_contact_pane_g

0x84bd,	// (0x00023161) main_myfav_hc_pane_g3_ParamLimits

0x84bd,	// (0x00023161) main_myfav_hc_pane_g3

0x36a1,	// (0x0001e345) popup_adpt_find_window

0x8516,	// (0x000231ba) afind_page_pane_ParamLimits

0x8516,	// (0x000231ba) afind_page_pane

0x8523,	// (0x000231c7) aid_size_cell_afind_ParamLimits

0x8523,	// (0x000231c7) aid_size_cell_afind

0x853d,	// (0x000231e1) bg_popup_sub_pane_cp09_ParamLimits

0x853d,	// (0x000231e1) bg_popup_sub_pane_cp09

0x854e,	// (0x000231f2) find_pane_cp01_ParamLimits

0x854e,	// (0x000231f2) find_pane_cp01

0x0365,	// (0x0001b009) grid_afind_control_pane_ParamLimits

0x0365,	// (0x0001b009) grid_afind_control_pane

0x8561,	// (0x00023205) grid_afind_pane_ParamLimits

0x8561,	// (0x00023205) grid_afind_pane

0x857d,	// (0x00023221) cell_afind_pane_ParamLimits

0x857d,	// (0x00023221) cell_afind_pane

0xc55f,	// (0x00027203) afind_page_pane_g1

0x85c5,	// (0x00023269) afind_page_pane_g2

0x85cd,	// (0x00023271) afind_page_pane_g3

0x0002,

0xf8aa,	// (0x0002a54e) afind_page_pane_g

0x85d5,	// (0x00023279) afind_page_pane_t1

0x038b,	// (0x0001b02f) cell_afind_grid_control_pane_ParamLimits

0x038b,	// (0x0001b02f) cell_afind_grid_control_pane

0x039a,	// (0x0001b03e) bg_button_pane_cp69_ParamLimits

0x039a,	// (0x0001b03e) bg_button_pane_cp69

0x85e3,	// (0x00023287) cell_afind_pane_g1_ParamLimits

0x85e3,	// (0x00023287) cell_afind_pane_g1

0x85f0,	// (0x00023294) cell_afind_pane_t1_ParamLimits

0x85f0,	// (0x00023294) cell_afind_pane_t1

0x03a6,	// (0x0001b04a) bg_button_pane_cp72

0x03ae,	// (0x0001b052) cell_afind_grid_control_pane_g1

0x6fed,	// (0x00021c91) aid_image_placing_area_ParamLimits

0x6fed,	// (0x00021c91) aid_image_placing_area

0xc521,	// (0x000271c5) field_vitu_entry_pane_g1_ParamLimits

0xc521,	// (0x000271c5) field_vitu_entry_pane_g1

0xc521,	// (0x000271c5) field_vitu_entry_pane_g2_ParamLimits

0xc521,	// (0x000271c5) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00029e60) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00029e60) field_vitu_entry_pane_g

0xeefa,	// (0x00029b9e) cell_vitu_itu_pane_g1_ParamLimits

0xeccf,	// (0x00029973) cell_vitu_itu_pane_t3_ParamLimits

0xeccf,	// (0x00029973) cell_vitu_itu_pane_t3

0x0041,	// (0x0001ace5) mp4_progress_pane_t1_ParamLimits

0x0063,	// (0x0001ad07) mp4_progress_pane_t2_ParamLimits

0xf7f0,	// (0x0002a494) mp4_progress_pane_t_ParamLimits

0x0085,	// (0x0001ad29) mup_progress_pane_cp04_ParamLimits

0x8500,	// (0x000231a4) main_myfav_hc_pane_t5_ParamLimits

0x8500,	// (0x000231a4) main_myfav_hc_pane_t5

0x3565,	// (0x0001e209) aid_zoom_text_primary

0x36a1,	// (0x0001e345) popup_adpt_find_window_ParamLimits

0x3bfb,	// (0x0001e89f) main_cam_set_pane

0x454e,	// (0x0001f1f2) cam4_zoom_pane_ParamLimits

0x454e,	// (0x0001f1f2) cam4_zoom_pane

0x8602,	// (0x000232a6) main_cam_set_pane_g1_ParamLimits

0x8602,	// (0x000232a6) main_cam_set_pane_g1

0x8610,	// (0x000232b4) main_cam_set_pane_g2_ParamLimits

0x8610,	// (0x000232b4) main_cam_set_pane_g2

0x0001,

0xf8b1,	// (0x0002a555) main_cam_set_pane_g_ParamLimits

0xf8b1,	// (0x0002a555) main_cam_set_pane_g

0x861c,	// (0x000232c0) main_cam_set_pane_t1_ParamLimits

0x861c,	// (0x000232c0) main_cam_set_pane_t1

0x8638,	// (0x000232dc) main_cset_listscroll_pane_ParamLimits

0x8638,	// (0x000232dc) main_cset_listscroll_pane

0x866a,	// (0x0002330e) main_cset_slider_pane_ParamLimits

0x866a,	// (0x0002330e) main_cset_slider_pane

0x03bf,	// (0x0001b063) main_cset_list_pane_ParamLimits

0x03bf,	// (0x0001b063) main_cset_list_pane

0x03cf,	// (0x0001b073) scroll_pane_cp028

0x8689,	// (0x0002332d) aid_area_touch_slider

0x86a5,	// (0x00023349) cset_slider_pane

0x86c8,	// (0x0002336c) main_cset_slider_pane_g1

0x86dd,	// (0x00023381) main_cset_slider_pane_g2

0x0011,

0xf8b6,	// (0x0002a55a) main_cset_slider_pane_g

0x0408,	// (0x0001b0ac) main_cset_slider_pane_t1

0x87a3,	// (0x00023447) main_cset_slider_pane_t2

0x87bd,	// (0x00023461) main_cset_slider_pane_t3

0x87d7,	// (0x0002347b) main_cset_slider_pane_t4

0x87f5,	// (0x00023499) main_cset_slider_pane_t5

0x8813,	// (0x000234b7) main_cset_slider_pane_t6

0x882a,	// (0x000234ce) main_cset_slider_pane_t7

0x000e,

0xf8db,	// (0x0002a57f) main_cset_slider_pane_t

0x8938,	// (0x000235dc) cset_list_set_pane_ParamLimits

0x8938,	// (0x000235dc) cset_list_set_pane

0x04cf,	// (0x0001b173) aid_position_infowindow_above

0x04d7,	// (0x0001b17b) aid_position_infowindow_below

0x8951,	// (0x000235f5) cset_list_set_pane_g1_ParamLimits

0x8951,	// (0x000235f5) cset_list_set_pane_g1

0x895d,	// (0x00023601) cset_list_set_pane_g3_ParamLimits

0x895d,	// (0x00023601) cset_list_set_pane_g3

0x0001,

0xf8fa,	// (0x0002a59e) cset_list_set_pane_g_ParamLimits

0xf8fa,	// (0x0002a59e) cset_list_set_pane_g

0x896c,	// (0x00023610) cset_list_set_pane_t1_ParamLimits

0x896c,	// (0x00023610) cset_list_set_pane_t1

0xc315,	// (0x00026fb9) list_highlight_pane_cp021_ParamLimits

0xc315,	// (0x00026fb9) list_highlight_pane_cp021

0xd29e,	// (0x00027f42) cset_slider_pane_g1

0xd2e0,	// (0x00027f84) cset_slider_pane_g2

0xd2d7,	// (0x00027f7b) cset_slider_pane_g3

0x0002,

0xf8ff,	// (0x0002a5a3) cset_slider_pane_g

0x49fc,	// (0x0001f6a0) aid_area_touch_cam4_zoom

0x4a04,	// (0x0001f6a8) cam4_zoom_cont_pane

0x4a0c,	// (0x0001f6b0) cam4_zoom_pane_g1

0x4a14,	// (0x0001f6b8) cam4_zoom_pane_g2

0x4a1c,	// (0x0001f6c0) cam4_zoom_pane_g3

0x0002,

0xf906,	// (0x0002a5aa) cam4_zoom_pane_g

0x4a24,	// (0x0001f6c8) cam4_zoom_cont_pane_g1

0x4a2d,	// (0x0001f6d1) cam4_zoom_cont_pane_g2

0x4a36,	// (0x0001f6da) cam4_zoom_cont_pane_g3

0x0002,

0xf90d,	// (0x0002a5b1) cam4_zoom_cont_pane_g

0x443a,	// (0x0001f0de) call4_image_pane_ParamLimits

0x443a,	// (0x0001f0de) call4_image_pane

0x8297,	// (0x00022f3b) call4_windows_conf_pane_ParamLimits

0x82da,	// (0x00022f7e) popup_call4_audio_in_window_ParamLimits

0x82da,	// (0x00022f7e) popup_call4_audio_in_window

0xbe20,	// (0x00026ac4) bg_popup_call2_act_pane_cp02

0x012a,	// (0x0001adce) call4_list_conf_pane

0xc55f,	// (0x00027203) call4_image_pane_g1

0xc55f,	// (0x00027203) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00029d53) call4_image_pane_g

0x051a,	// (0x0001b1be) list_single_graphic_popup_conf4_pane_ParamLimits

0x051a,	// (0x0001b1be) list_single_graphic_popup_conf4_pane

0xbe20,	// (0x00026ac4) list_highlight_pane_cp022

0x052d,	// (0x0001b1d1) list_single_graphic_popup_conf4_pane_g1

0xceb1,	// (0x00027b55) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf914,	// (0x0002a5b8) list_single_graphic_popup_conf4_pane_g

0x0535,	// (0x0001b1d9) list_single_graphic_popup_conf4_pane_t1

0x5644,	// (0x000202e8) popup_vtel_slider_window_ParamLimits

0x5644,	// (0x000202e8) popup_vtel_slider_window

0x0098,	// (0x0001ad3c) dialer2_ne_pane_t2_ParamLimits

0x0098,	// (0x0001ad3c) dialer2_ne_pane_t2

0x0001,

0xf7f5,	// (0x0002a499) dialer2_ne_pane_t_ParamLimits

0xf7f5,	// (0x0002a499) dialer2_ne_pane_t

0xc315,	// (0x00026fb9) bg_popup_sub_pane_cp010_ParamLimits

0xc315,	// (0x00026fb9) bg_popup_sub_pane_cp010

0x8981,	// (0x00023625) popup_vtel_slider_window_g1_ParamLimits

0x8981,	// (0x00023625) popup_vtel_slider_window_g1

0x898d,	// (0x00023631) popup_vtel_slider_window_g2_ParamLimits

0x898d,	// (0x00023631) popup_vtel_slider_window_g2

0x0003,

0xf919,	// (0x0002a5bd) popup_vtel_slider_window_g_ParamLimits

0xf919,	// (0x0002a5bd) popup_vtel_slider_window_g

0x89d5,	// (0x00023679) vtel_slider_pane_ParamLimits

0x89d5,	// (0x00023679) vtel_slider_pane

0x89e4,	// (0x00023688) vtel_slider_pane_g1_ParamLimits

0x89e4,	// (0x00023688) vtel_slider_pane_g1

0x89f1,	// (0x00023695) vtel_slider_pane_g2_ParamLimits

0x89f1,	// (0x00023695) vtel_slider_pane_g2

0x89fe,	// (0x000236a2) vtel_slider_pane_g3_ParamLimits

0x89fe,	// (0x000236a2) vtel_slider_pane_g3

0x89e4,	// (0x00023688) vtel_slider_pane_g4_ParamLimits

0x89e4,	// (0x00023688) vtel_slider_pane_g4

0x8a0b,	// (0x000236af) vtel_slider_pane_g5_ParamLimits

0x8a0b,	// (0x000236af) vtel_slider_pane_g5

0x0004,

0xf922,	// (0x0002a5c6) vtel_slider_pane_g_ParamLimits

0xf922,	// (0x0002a5c6) vtel_slider_pane_g

0x3bfb,	// (0x0001e89f) main_gallery2_pane

0x4754,	// (0x0001f3f8) aid_size_row_itut2_dropdow_list_ParamLimits

0x4754,	// (0x0001f3f8) aid_size_row_itut2_dropdow_list

0x47be,	// (0x0001f462) grid_vitu2_function_top_pane_ParamLimits

0x47be,	// (0x0001f462) grid_vitu2_function_top_pane

0x4812,	// (0x0001f4b6) popup_vitu2_dropdown_list_window_ParamLimits

0x4812,	// (0x0001f4b6) popup_vitu2_dropdown_list_window

0x4834,	// (0x0001f4d8) popup_vitu2_match_list_window

0x4a3f,	// (0x0001f6e3) cell_vitu2_function_top_pane_ParamLimits

0x4a3f,	// (0x0001f6e3) cell_vitu2_function_top_pane

0x4a59,	// (0x0001f6fd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x4a59,	// (0x0001f6fd) cell_vitu2_function_top_pane_cp01

0x4a75,	// (0x0001f719) cell_vitu2_function_top_wide_pane_ParamLimits

0x4a75,	// (0x0001f719) cell_vitu2_function_top_wide_pane

0x3bfb,	// (0x0001e89f) bg_button_pane_cp012

0x4a93,	// (0x0001f737) cell_vitu2_function_top_pane_g1

0x4aa7,	// (0x0001f74b) bg_button_pane_cp013_ParamLimits

0x4aa7,	// (0x0001f74b) bg_button_pane_cp013

0x8a18,	// (0x000236bc) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a18,	// (0x000236bc) cell_vitu2_function_top_wide_pane_g1

0x3797,	// (0x0001e43b) bg_popup_sub_pane_cp20

0x4ac3,	// (0x0001f767) list_vitu2_match_list_pane

0x028f,	// (0x0001af33) bg_popup_sub_pane_cp20_g1

0x0297,	// (0x0001af3b) bg_popup_sub_pane_cp20_g2

0xc99f,	// (0x00027643) bg_popup_sub_pane_cp20_g3

0x029f,	// (0x0001af43) bg_popup_sub_pane_cp20_g4

0xc97f,	// (0x00027623) bg_popup_sub_pane_cp20_g5

0x0567,	// (0x0001b20b) bg_popup_sub_pane_cp20_g6

0x02af,	// (0x0001af53) bg_popup_sub_pane_cp20_g7

0x02b7,	// (0x0001af5b) bg_popup_sub_pane_cp20_g8

0x02bf,	// (0x0001af63) bg_popup_sub_pane_cp20_g9

0x0008,

0xf92d,	// (0x0002a5d1) bg_popup_sub_pane_cp20_g

0x4adb,	// (0x0001f77f) list_vitu2_match_list_item_pane_ParamLimits

0x4adb,	// (0x0001f77f) list_vitu2_match_list_item_pane

0x4aed,	// (0x0001f791) list_vitu2_match_list_item_pane_t1

0x37a5,	// (0x0001e449) bg_popup_sub_pane_cp21

0xc786,	// (0x0002742a) grid_vitu2_dropdown_list_pane

0x4afb,	// (0x0001f79f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x4afb,	// (0x0001f79f) cell_vitu2_dropdown_list_char_pane

0x4b1d,	// (0x0001f7c1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x4b1d,	// (0x0001f7c1) cell_vitu2_dropdown_list_ctrl_pane

0x05a1,	// (0x0001b245) cell_vitu2_dropdown_list_char_pane_g1

0x0598,	// (0x0001b23c) cell_vitu2_dropdown_list_char_pane_g2

0x058f,	// (0x0001b233) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf940,	// (0x0002a5e4) cell_vitu2_dropdown_list_char_pane_g

0x4b45,	// (0x0001f7e9) cell_vitu2_dropdown_list_char_pane_t1

0x8a30,	// (0x000236d4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a30,	// (0x000236d4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a40,	// (0x000236e4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a40,	// (0x000236e4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a51,	// (0x000236f5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a51,	// (0x000236f5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x4b53,	// (0x0001f7f7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x4b53,	// (0x0001f7f7) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1605,	// (0x0001c2a9) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1605,	// (0x0001c2a9) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf947,	// (0x0002a5eb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf947,	// (0x0002a5eb) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a61,	// (0x00023705) aid_size_cell_gallery2_ParamLimits

0x8a61,	// (0x00023705) aid_size_cell_gallery2

0x8a7b,	// (0x0002371f) grid_gallery2_pane_ParamLimits

0x8a7b,	// (0x0002371f) grid_gallery2_pane

0x8a92,	// (0x00023736) scroll_pane_cp029_ParamLimits

0x8a92,	// (0x00023736) scroll_pane_cp029

0x8aa2,	// (0x00023746) cell_gallery2_pane_ParamLimits

0x8aa2,	// (0x00023746) cell_gallery2_pane

0x05aa,	// (0x0001b24e) cell_gallery2_pane_g2

0x8af7,	// (0x0002379b) cell_gallery2_pane_g3

0x05b2,	// (0x0001b256) cell_gallery2_pane_g4

0x05ba,	// (0x0001b25e) cell_gallery2_pane_g5

0xc786,	// (0x0002742a) grid_highlight_pane_cp10

0x4834,	// (0x0001f4d8) popup_vitu2_match_list_window_ParamLimits

0x4846,	// (0x0001f4ea) popup_vitu2_query_window_ParamLimits

0x4846,	// (0x0001f4ea) popup_vitu2_query_window

0x37a5,	// (0x0001e449) bg_vitu2_candi_button_pane

0x05a1,	// (0x0001b245) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0598,	// (0x0001b23c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x058f,	// (0x0001b233) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8aff,	// (0x000237a3) bg_button_pane_cp015

0x8b14,	// (0x000237b8) bg_button_pane_cp016

0x8b20,	// (0x000237c4) bg_button_pane_cp017

0xd2a7,	// (0x00027f4b) bg_popup_sub_pane_cp22

0x05c2,	// (0x0001b266) popup_vitu2_query_window_g1

0x8b60,	// (0x00023804) popup_vitu2_query_window_g2

0x0002,

0xf952,	// (0x0002a5f6) popup_vitu2_query_window_g

0x8b84,	// (0x00023828) popup_vitu2_query_window_t1_ParamLimits

0x8b84,	// (0x00023828) popup_vitu2_query_window_t1

0x8bb7,	// (0x0002385b) popup_vitu2_query_window_t2_ParamLimits

0x8bb7,	// (0x0002385b) popup_vitu2_query_window_t2

0x8bc9,	// (0x0002386d) popup_vitu2_query_window_t3_ParamLimits

0x8bc9,	// (0x0002386d) popup_vitu2_query_window_t3

0x8bf1,	// (0x00023895) popup_vitu2_query_window_t4_ParamLimits

0x8bf1,	// (0x00023895) popup_vitu2_query_window_t4

0x8c05,	// (0x000238a9) popup_vitu2_query_window_t5_ParamLimits

0x8c05,	// (0x000238a9) popup_vitu2_query_window_t5

0x0006,

0xf959,	// (0x0002a5fd) popup_vitu2_query_window_t_ParamLimits

0xf959,	// (0x0002a5fd) popup_vitu2_query_window_t

0x03b7,	// (0x0001b05b) main_cset_text_pane

0x8689,	// (0x0002332d) aid_area_touch_slider_ParamLimits

0x86a5,	// (0x00023349) cset_slider_pane_ParamLimits

0x86c8,	// (0x0002336c) main_cset_slider_pane_g1_ParamLimits

0x86dd,	// (0x00023381) main_cset_slider_pane_g2_ParamLimits

0x03d8,	// (0x0001b07c) main_cset_slider_pane_g3_ParamLimits

0x03d8,	// (0x0001b07c) main_cset_slider_pane_g3

0x86f2,	// (0x00023396) main_cset_slider_pane_g4_ParamLimits

0x86f2,	// (0x00023396) main_cset_slider_pane_g4

0x8701,	// (0x000233a5) main_cset_slider_pane_g5_ParamLimits

0x8701,	// (0x000233a5) main_cset_slider_pane_g5

0x870f,	// (0x000233b3) main_cset_slider_pane_g6_ParamLimits

0x870f,	// (0x000233b3) main_cset_slider_pane_g6

0xf8b6,	// (0x0002a55a) main_cset_slider_pane_g_ParamLimits

0x0408,	// (0x0001b0ac) main_cset_slider_pane_t1_ParamLimits

0x87a3,	// (0x00023447) main_cset_slider_pane_t2_ParamLimits

0x87bd,	// (0x00023461) main_cset_slider_pane_t3_ParamLimits

0x87d7,	// (0x0002347b) main_cset_slider_pane_t4_ParamLimits

0x87f5,	// (0x00023499) main_cset_slider_pane_t5_ParamLimits

0x8813,	// (0x000234b7) main_cset_slider_pane_t6_ParamLimits

0x882a,	// (0x000234ce) main_cset_slider_pane_t7_ParamLimits

0x8858,	// (0x000234fc) main_cset_slider_pane_t8_ParamLimits

0x8858,	// (0x000234fc) main_cset_slider_pane_t8

0x8880,	// (0x00023524) main_cset_slider_pane_t9_ParamLimits

0x8880,	// (0x00023524) main_cset_slider_pane_t9

0x88a8,	// (0x0002354c) main_cset_slider_pane_t10_ParamLimits

0x88a8,	// (0x0002354c) main_cset_slider_pane_t10

0x88d0,	// (0x00023574) main_cset_slider_pane_t11_ParamLimits

0x88d0,	// (0x00023574) main_cset_slider_pane_t11

0x88fa,	// (0x0002359e) main_cset_slider_pane_t12_ParamLimits

0x88fa,	// (0x0002359e) main_cset_slider_pane_t12

0x8919,	// (0x000235bd) main_cset_slider_pane_t13_ParamLimits

0x8919,	// (0x000235bd) main_cset_slider_pane_t13

0xf8db,	// (0x0002a57f) main_cset_slider_pane_t_ParamLimits

0xbe20,	// (0x00026ac4) bg_popup_sub_pane_cp011

0x05ce,	// (0x0001b272) main_cset_text_pane_g1

0x05d6,	// (0x0001b27a) main_cset_text_pane_t1

0x05e4,	// (0x0001b288) main_cset_text_pane_t2

0x05f2,	// (0x0001b296) main_cset_text_pane_t3

0x0600,	// (0x0001b2a4) main_cset_text_pane_t4

0x060e,	// (0x0001b2b2) main_cset_text_pane_t5

0x061c,	// (0x0001b2c0) main_cset_text_pane_t6

0x062a,	// (0x0001b2ce) main_cset_text_pane_t7

0x0006,

0xf968,	// (0x0002a60c) main_cset_text_pane_t

0x37a5,	// (0x0001e449) main_cam4_burst_pane

0x37a5,	// (0x0001e449) main_cam5_pane

0x0379,	// (0x0001b01d) bg_button_pane_cp019

0x0382,	// (0x0001b026) bg_button_pane_cp020

0x03e4,	// (0x0001b088) main_cset_slider_pane_g7_ParamLimits

0x03e4,	// (0x0001b088) main_cset_slider_pane_g7

0x03f0,	// (0x0001b094) main_cset_slider_pane_g8_ParamLimits

0x03f0,	// (0x0001b094) main_cset_slider_pane_g8

0x8723,	// (0x000233c7) main_cset_slider_pane_g9_ParamLimits

0x8723,	// (0x000233c7) main_cset_slider_pane_g9

0x872f,	// (0x000233d3) main_cset_slider_pane_g10_ParamLimits

0x872f,	// (0x000233d3) main_cset_slider_pane_g10

0x873b,	// (0x000233df) main_cset_slider_pane_g11_ParamLimits

0x873b,	// (0x000233df) main_cset_slider_pane_g11

0x8747,	// (0x000233eb) main_cset_slider_pane_g12_ParamLimits

0x8747,	// (0x000233eb) main_cset_slider_pane_g12

0x8753,	// (0x000233f7) main_cset_slider_pane_g13_ParamLimits

0x8753,	// (0x000233f7) main_cset_slider_pane_g13

0x8761,	// (0x00023405) main_cset_slider_pane_g14_ParamLimits

0x8761,	// (0x00023405) main_cset_slider_pane_g14

0x876f,	// (0x00023413) main_cset_slider_pane_g15_ParamLimits

0x876f,	// (0x00023413) main_cset_slider_pane_g15

0x0430,	// (0x0001b0d4) main_cset_slider_pane_t14_ParamLimits

0x0430,	// (0x0001b0d4) main_cset_slider_pane_t14

0x0496,	// (0x0001b13a) main_cset_slider_pane_t15_ParamLimits

0x0496,	// (0x0001b13a) main_cset_slider_pane_t15

0x8c6f,	// (0x00023913) aid_cam4_burst_size_cell_ParamLimits

0x8c6f,	// (0x00023913) aid_cam4_burst_size_cell

0x8c8b,	// (0x0002392f) grid_cam4_burst_pane_ParamLimits

0x8c8b,	// (0x0002392f) grid_cam4_burst_pane

0x8cbb,	// (0x0002395f) linegrid_cam4_burst_pane_ParamLimits

0x8cbb,	// (0x0002395f) linegrid_cam4_burst_pane

0x8cdb,	// (0x0002397f) scroll_pane_cp30_ParamLimits

0x8cdb,	// (0x0002397f) scroll_pane_cp30

0x8ce7,	// (0x0002398b) cell_cam4_burst_pane_ParamLimits

0x8ce7,	// (0x0002398b) cell_cam4_burst_pane

0x0644,	// (0x0001b2e8) linegrid_cam4_burst_pane_g1_ParamLimits

0x0644,	// (0x0001b2e8) linegrid_cam4_burst_pane_g1

0x8d23,	// (0x000239c7) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d23,	// (0x000239c7) linegrid_cam4_burst_pane_g2

0x0651,	// (0x0001b2f5) linegrid_cam4_burst_pane_g3_ParamLimits

0x0651,	// (0x0001b2f5) linegrid_cam4_burst_pane_g3

0x0002,

0xf977,	// (0x0002a61b) linegrid_cam4_burst_pane_g_ParamLimits

0xf977,	// (0x0002a61b) linegrid_cam4_burst_pane_g

0x8d34,	// (0x000239d8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8d34,	// (0x000239d8) linegrid_cam4_burst_pane_g3_copy1

0x065e,	// (0x0001b302) linegrid_cam4_burst_pane_g4_ParamLimits

0x065e,	// (0x0001b302) linegrid_cam4_burst_pane_g4

0x8d4e,	// (0x000239f2) linegrid_cam4_burst_pane_g5_ParamLimits

0x8d4e,	// (0x000239f2) linegrid_cam4_burst_pane_g5

0x8d5f,	// (0x00023a03) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d5f,	// (0x00023a03) linegrid_cam4_burst_pane_g6

0x066b,	// (0x0001b30f) linegrid_cam4_burst_pane_g7_ParamLimits

0x066b,	// (0x0001b30f) linegrid_cam4_burst_pane_g7

0x8d70,	// (0x00023a14) cell_cam4_burst_pane_g1

0x0684,	// (0x0001b328) main_cam5_pane_t1_ParamLimits

0x0684,	// (0x0001b328) main_cam5_pane_t1

0x0696,	// (0x0001b33a) main_cam5_pane_t2_ParamLimits

0x0696,	// (0x0001b33a) main_cam5_pane_t2

0x06a8,	// (0x0001b34c) main_cam5_pane_t3_ParamLimits

0x06a8,	// (0x0001b34c) main_cam5_pane_t3

0x06ba,	// (0x0001b35e) main_cam5_pane_t4_ParamLimits

0x06ba,	// (0x0001b35e) main_cam5_pane_t4

0x06d2,	// (0x0001b376) main_cam5_pane_t5_ParamLimits

0x06d2,	// (0x0001b376) main_cam5_pane_t5

0x06e6,	// (0x0001b38a) main_cam5_pane_t6_ParamLimits

0x06e6,	// (0x0001b38a) main_cam5_pane_t6

0x06fa,	// (0x0001b39e) main_cam5_pane_t7_ParamLimits

0x06fa,	// (0x0001b39e) main_cam5_pane_t7

0x070c,	// (0x0001b3b0) main_cam5_pane_t8_ParamLimits

0x070c,	// (0x0001b3b0) main_cam5_pane_t8

0x0728,	// (0x0001b3cc) main_cam5_pane_t9_ParamLimits

0x0728,	// (0x0001b3cc) main_cam5_pane_t9

0x073a,	// (0x0001b3de) main_cam5_pane_t10_ParamLimits

0x073a,	// (0x0001b3de) main_cam5_pane_t10

0x074c,	// (0x0001b3f0) main_cam5_pane_t11_ParamLimits

0x074c,	// (0x0001b3f0) main_cam5_pane_t11

0x075e,	// (0x0001b402) main_cam5_pane_t12_ParamLimits

0x075e,	// (0x0001b402) main_cam5_pane_t12

0x0773,	// (0x0001b417) main_cam5_pane_t13_ParamLimits

0x0773,	// (0x0001b417) main_cam5_pane_t13

0x000c,

0xf983,	// (0x0002a627) main_cam5_pane_t_ParamLimits

0xf983,	// (0x0002a627) main_cam5_pane_t

0x3756,	// (0x0001e3fa) popup_scut_keymap_window_ParamLimits

0x3756,	// (0x0001e3fa) popup_scut_keymap_window

0x8d83,	// (0x00023a27) aid_size_cell_brow_shortcut

0xc786,	// (0x0002742a) bg_popup_window_pane_cp010

0x8d8f,	// (0x00023a33) grid_scut_pane

0x8d9b,	// (0x00023a3f) cell_scut_pane_ParamLimits

0x8d9b,	// (0x00023a3f) cell_scut_pane

0x8db2,	// (0x00023a56) cell_scut_pane_g1

0x0790,	// (0x0001b434) cell_scut_pane_t1

0x079f,	// (0x0001b443) cell_scut_pane_t2

0x8dbb,	// (0x00023a5f) cell_scut_pane_t3

0x0002,

0xf99e,	// (0x0002a642) cell_scut_pane_t

0x79e3,	// (0x00022687) main_mup3_pane_g8_ParamLimits

0x79e3,	// (0x00022687) main_mup3_pane_g8

0x4764,	// (0x0001f408) area_vitu2_query_pane_ParamLimits

0x4764,	// (0x0001f408) area_vitu2_query_pane

0x8b2c,	// (0x000237d0) input_focus_pane_cp08

0x07ae,	// (0x0001b452) area_vitu2_query_pane_g1

0x8dc9,	// (0x00023a6d) area_vitu2_query_pane_g2

0x0001,

0xf9a5,	// (0x0002a649) area_vitu2_query_pane_g

0x8dda,	// (0x00023a7e) area_vitu2_query_pane_t1_ParamLimits

0x8dda,	// (0x00023a7e) area_vitu2_query_pane_t1

0x8dee,	// (0x00023a92) area_vitu2_query_pane_t2_ParamLimits

0x8dee,	// (0x00023a92) area_vitu2_query_pane_t2

0x8e02,	// (0x00023aa6) area_vitu2_query_pane_t3_ParamLimits

0x8e02,	// (0x00023aa6) area_vitu2_query_pane_t3

0x07ba,	// (0x0001b45e) area_vitu2_query_pane_t4_ParamLimits

0x07ba,	// (0x0001b45e) area_vitu2_query_pane_t4

0x07e2,	// (0x0001b486) area_vitu2_query_pane_t5_ParamLimits

0x07e2,	// (0x0001b486) area_vitu2_query_pane_t5

0x080a,	// (0x0001b4ae) area_vitu2_query_pane_t6_ParamLimits

0x080a,	// (0x0001b4ae) area_vitu2_query_pane_t6

0x0006,

0xf9aa,	// (0x0002a64e) area_vitu2_query_pane_t_ParamLimits

0xf9aa,	// (0x0002a64e) area_vitu2_query_pane_t

0x8b14,	// (0x000237b8) bg_button_pane_cp018

0x8e2a,	// (0x00023ace) bg_button_pane_cp021

0x8e36,	// (0x00023ada) bg_button_pane_cp022

0x8e59,	// (0x00023afd) input_focus_pane_cp09

0xcfcc,	// (0x00027c70) aid_size_touch_mv_arrow_left

0xcff7,	// (0x00027c9b) aid_size_touch_mv_arrow_right

0x8787,	// (0x0002342b) main_cset_slider_pane_g16_ParamLimits

0x8787,	// (0x0002342b) main_cset_slider_pane_g16

0x8795,	// (0x00023439) main_cset_slider_pane_g17_ParamLimits

0x8795,	// (0x00023439) main_cset_slider_pane_g17

0x8d70,	// (0x00023a14) cell_cam4_burst_pane_g1_ParamLimits

0xbe20,	// (0x00026ac4) compa_mode_pane

0x8999,	// (0x0002363d) popup_vtel_slider_window_g3_ParamLimits

0x8999,	// (0x0002363d) popup_vtel_slider_window_g3

0x89ad,	// (0x00023651) popup_vtel_slider_window_g4_ParamLimits

0x89ad,	// (0x00023651) popup_vtel_slider_window_g4

0x89c1,	// (0x00023665) popup_vtel_slider_window_t1_ParamLimits

0x89c1,	// (0x00023665) popup_vtel_slider_window_t1

0x37a5,	// (0x0001e449) main_cl_pane

0x3c95,	// (0x0001e939) popup_imed_adjust2_window_ParamLimits

0xd2a7,	// (0x00027f4b) bg_tb_trans_pane_cp05_ParamLimits

0xee37,	// (0x00029adb) popup_imed_adjust2_window_g1_ParamLimits

0xee46,	// (0x00029aea) popup_imed_adjust2_window_g2_ParamLimits

0xee46,	// (0x00029aea) popup_imed_adjust2_window_g2

0xee52,	// (0x00029af6) popup_imed_adjust2_window_g3_ParamLimits

0xee52,	// (0x00029af6) popup_imed_adjust2_window_g3

0x0002,

0xf72a,	// (0x0002a3ce) popup_imed_adjust2_window_g_ParamLimits

0xf72a,	// (0x0002a3ce) popup_imed_adjust2_window_g

0xee5e,	// (0x00029b02) popup_imed_adjust2_window_t1_ParamLimits

0xee76,	// (0x00029b1a) slider_imed_adjust_pane_ParamLimits

0xee8a,	// (0x00029b2e) slider_imed_adjust_pane_g1_ParamLimits

0xee9a,	// (0x00029b3e) slider_imed_adjust_pane_g2_ParamLimits

0xeeaa,	// (0x00029b4e) slider_imed_adjust_pane_g3_ParamLimits

0xeebb,	// (0x00029b5f) slider_imed_adjust_pane_g4_ParamLimits

0xf731,	// (0x0002a3d5) slider_imed_adjust_pane_g_ParamLimits

0x44f7,	// (0x0001f19b) aid_touch_area_cam4_ParamLimits

0x44f7,	// (0x0001f19b) aid_touch_area_cam4

0x4507,	// (0x0001f1ab) battery_pane_cp01

0x458e,	// (0x0001f232) main_camera4_pane_g6_ParamLimits

0x458e,	// (0x0001f232) main_camera4_pane_g6

0x45ac,	// (0x0001f250) main_camera4_pane_t2_ParamLimits

0x45ac,	// (0x0001f250) main_camera4_pane_t2

0x0001,

0xf829,	// (0x0002a4cd) main_camera4_pane_t_ParamLimits

0xf829,	// (0x0002a4cd) main_camera4_pane_t

0x4609,	// (0x0001f2ad) aid_touch_area_vid4_ParamLimits

0x4609,	// (0x0001f2ad) aid_touch_area_vid4

0x4649,	// (0x0001f2ed) main_video4_pane_g5_ParamLimits

0x4649,	// (0x0001f2ed) main_video4_pane_g5

0x466d,	// (0x0001f311) vid4_progress_pane_ParamLimits

0x466d,	// (0x0001f311) vid4_progress_pane

0x03fc,	// (0x0001b0a0) main_cset_slider_pane_g18_ParamLimits

0x03fc,	// (0x0001b0a0) main_cset_slider_pane_g18

0x0678,	// (0x0001b31c) cell_cam4_burst_pane_g2_ParamLimits

0x0678,	// (0x0001b31c) cell_cam4_burst_pane_g2

0x0001,

0xf97e,	// (0x0002a622) cell_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0002a622) cell_cam4_burst_pane_g

0x8e69,	// (0x00023b0d) bg_cl_pane_ParamLimits

0x8e69,	// (0x00023b0d) bg_cl_pane

0x8e75,	// (0x00023b19) cl_header_pane_ParamLimits

0x8e75,	// (0x00023b19) cl_header_pane

0x8e81,	// (0x00023b25) cl_listscroll_pane_ParamLimits

0x8e81,	// (0x00023b25) cl_listscroll_pane

0x0856,	// (0x0001b4fa) bg_cl_pane_g1

0x085e,	// (0x0001b502) bg_cl_pane_g2

0x0866,	// (0x0001b50a) bg_cl_pane_g3

0x086e,	// (0x0001b512) bg_cl_pane_g4

0x0876,	// (0x0001b51a) bg_cl_pane_g5

0x087e,	// (0x0001b522) bg_cl_pane_g6

0x0886,	// (0x0001b52a) bg_cl_pane_g7

0x088e,	// (0x0001b532) bg_cl_pane_g8

0x0896,	// (0x0001b53a) bg_cl_pane_g9

0x0008,

0xf9b9,	// (0x0002a65d) bg_cl_pane_g

0x8e8d,	// (0x00023b31) aid_height_cl_leading_ParamLimits

0x8e8d,	// (0x00023b31) aid_height_cl_leading

0x8e99,	// (0x00023b3d) aid_height_cl_text_ParamLimits

0x8e99,	// (0x00023b3d) aid_height_cl_text

0xc513,	// (0x000271b7) bg_cl_header_pane_ParamLimits

0xc513,	// (0x000271b7) bg_cl_header_pane

0x8eb1,	// (0x00023b55) cl_header_pane_g1_ParamLimits

0x8eb1,	// (0x00023b55) cl_header_pane_g1

0x8ebe,	// (0x00023b62) cl_header_pane_t1_ParamLimits

0x8ebe,	// (0x00023b62) cl_header_pane_t1

0x089e,	// (0x0001b542) cl_list_pane

0x03cf,	// (0x0001b073) hc_scroll_pane_cp01

0xc97f,	// (0x00027623) bg_cl_header_pane_g1

0x028f,	// (0x0001af33) bg_cl_header_pane_g2

0xc99f,	// (0x00027643) bg_cl_header_pane_g3

0x029f,	// (0x0001af43) bg_cl_header_pane_g4

0x0297,	// (0x0001af3b) bg_cl_header_pane_g5

0x0567,	// (0x0001b20b) bg_cl_header_pane_g6

0x02b7,	// (0x0001af5b) bg_cl_header_pane_g7

0x02bf,	// (0x0001af63) bg_cl_header_pane_g8

0x02af,	// (0x0001af53) bg_cl_header_pane_g9

0x0008,

0xf9cc,	// (0x0002a670) bg_cl_header_pane_g

0x8ed0,	// (0x00023b74) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8ed0,	// (0x00023b74) hc_cl_list_double_graphic_heading_pane

0x8ee4,	// (0x00023b88) hc_cl_list_single_graphic_pane_ParamLimits

0x8ee4,	// (0x00023b88) hc_cl_list_single_graphic_pane

0x8efe,	// (0x00023ba2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8efe,	// (0x00023ba2) hc_cl_list_single_graphic_pane_g1

0x8f0a,	// (0x00023bae) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8f0a,	// (0x00023bae) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9df,	// (0x0002a683) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9df,	// (0x0002a683) hc_cl_list_single_graphic_pane_g

0x8f1e,	// (0x00023bc2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8f1e,	// (0x00023bc2) hc_cl_list_single_graphic_pane_t1

0x8efe,	// (0x00023ba2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8efe,	// (0x00023ba2) hc_cl_list_double_graphic_heading_pane_g1

0x8f33,	// (0x00023bd7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8f33,	// (0x00023bd7) hc_cl_list_double_graphic_heading_pane_g2

0x8f47,	// (0x00023beb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8f47,	// (0x00023beb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9e4,	// (0x0002a688) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9e4,	// (0x0002a688) hc_cl_list_double_graphic_heading_pane_g

0x8f5b,	// (0x00023bff) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8f5b,	// (0x00023bff) hc_cl_list_double_graphic_heading_pane_t1

0x8f70,	// (0x00023c14) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8f70,	// (0x00023c14) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9eb,	// (0x0002a68f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9eb,	// (0x0002a68f) hc_cl_list_double_graphic_heading_pane_t

0x4b74,	// (0x0001f818) vid4_progress_pane_g1

0x4b84,	// (0x0001f828) vid4_progress_pane_g2

0x4b94,	// (0x0001f838) vid4_progress_pane_g3

0x4ba6,	// (0x0001f84a) vid4_progress_pane_g4

0x0004,

0xf9f0,	// (0x0002a694) vid4_progress_pane_g

0x4bbe,	// (0x0001f862) vid4_progress_pane_t1

0x4bd4,	// (0x0001f878) vid4_progress_pane_t2

0x0002,

0xf9fb,	// (0x0002a69f) vid4_progress_pane_t

0x4bff,	// (0x0001f8a3) wait_bar_pane_cp07

0xe6ac,	// (0x00029350) blid_firmament_pane_ParamLimits

0xe711,	// (0x000293b5) popup_blid_sat_info2_window_g1

0xe735,	// (0x000293d9) popup_blid_sat_info2_window_t3

0xe743,	// (0x000293e7) popup_blid_sat_info2_window_t4

0xe751,	// (0x000293f5) popup_blid_sat_info2_window_t5

0xe75f,	// (0x00029403) popup_blid_sat_info2_window_t6

0xe76f,	// (0x00029413) popup_blid_sat_info2_window_t7

0xe77d,	// (0x00029421) popup_blid_sat_info2_window_t8

0xe78b,	// (0x0002942f) popup_blid_sat_info2_window_t9

0xe799,	// (0x0002943d) popup_blid_sat_info2_window_t10

0xe85a,	// (0x000294fe) aid_firma_cardinal_ParamLimits

0xe86e,	// (0x00029512) blid_firmament_pane_t1_ParamLimits

0xe885,	// (0x00029529) blid_firmament_pane_t2_ParamLimits

0xe89c,	// (0x00029540) blid_firmament_pane_t3_ParamLimits

0xe8b3,	// (0x00029557) blid_firmament_pane_t4_ParamLimits

0xf623,	// (0x0002a2c7) blid_firmament_pane_t_ParamLimits

0xe8ca,	// (0x0002956e) blid_sat_info_pane_ParamLimits

0x3bfb,	// (0x0001e89f) main_cam_set_pane_ParamLimits

0x7fda,	// (0x00022c7e) aid_size_cell_colour_35_ParamLimits

0x7ff4,	// (0x00022c98) aid_size_cell_colour_112_ParamLimits

0x800b,	// (0x00022caf) aid_size_cell_effect_ParamLimits

0xc315,	// (0x00026fb9) bg_tb_trans_pane_cp02_ParamLimits

0xcf34,	// (0x00027bd8) heading_imed_pane_ParamLimits

0x8025,	// (0x00022cc9) listscroll_imed_pane_ParamLimits

0xdb5f,	// (0x00028803) popup_call2_audio_first_window_g5_ParamLimits

0xdb5f,	// (0x00028803) popup_call2_audio_first_window_g5

0x42c3,	// (0x0001ef67) aid_size_touch_image3_arrow_left_ParamLimits

0x42c3,	// (0x0001ef67) aid_size_touch_image3_arrow_left

0x42d9,	// (0x0001ef7d) aid_size_touch_image3_arrow_right_ParamLimits

0x42d9,	// (0x0001ef7d) aid_size_touch_image3_arrow_right

0x4be9,	// (0x0001f88d) vid4_progress_pane_t3

0x81a7,	// (0x00022e4b) main_hwr_training_symbol_option_pane_ParamLimits

0x81a7,	// (0x00022e4b) main_hwr_training_symbol_option_pane

0xefa8,	// (0x00029c4c) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x00029c4c) popup_hwr_training_preview_window

0x3f39,	// (0x0001ebdd) hwr_training_navi_pane_g5_ParamLimits

0x3f39,	// (0x0001ebdd) hwr_training_navi_pane_g5

0x027d,	// (0x0001af21) popup_char_count_window

0x3797,	// (0x0001e43b) bg_popup_sub_pane_cp20_ParamLimits

0x4ac3,	// (0x0001f767) list_vitu2_match_list_pane_ParamLimits

0x4acf,	// (0x0001f773) vitu2_page_scroll_pane_ParamLimits

0x4acf,	// (0x0001f773) vitu2_page_scroll_pane

0x0934,	// (0x0001b5d8) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0934,	// (0x0001b5d8) list_single_hwr_training_symbol_option_pane

0x0947,	// (0x0001b5eb) list_single_hwr_training_symbol_option_pane_g1

0x094f,	// (0x0001b5f3) list_single_hwr_training_symbol_option_pane_t1

0x095d,	// (0x0001b601) bg_button_pane_cp023

0x0966,	// (0x0001b60a) bg_button_pane_cp024

0x0999,	// (0x0001b63d) vitu2_page_scroll_pane_g1

0x09a1,	// (0x0001b645) vitu2_page_scroll_pane_g2

0x0001,

0xfa02,	// (0x0002a6a6) vitu2_page_scroll_pane_g

0x09a9,	// (0x0001b64d) vitu2_page_scroll_pane_t1

0xc76c,	// (0x00027410) popup_char_count_window_g1

0x09b8,	// (0x0001b65c) popup_char_count_window_g2

0x0469,	// (0x0001b10d) popup_char_count_window_g3

0x0002,

0xfa07,	// (0x0002a6ab) popup_char_count_window_g

0x09c1,	// (0x0001b665) popup_char_count_window_t1

0x37a5,	// (0x0001e449) main_vded2_pane

0xee23,	// (0x00029ac7) aid_size_cell_imed_line

0xee2d,	// (0x00029ad1) grid_imed_line_width_pane

0x46d9,	// (0x0001f37d) vid4_indicators_pane_g4

0x09cf,	// (0x0001b673) cell_imed_line_width_pane_ParamLimits

0x09cf,	// (0x0001b673) cell_imed_line_width_pane

0x09e3,	// (0x0001b687) cell_imed_line_width_pane_g1

0x09ec,	// (0x0001b690) cell_imed_line_width_pane_g2

0x0001,

0xfa0e,	// (0x0002a6b2) cell_imed_line_width_pane_g

0x8f99,	// (0x00023c3d) main_vded2_pane_g1_ParamLimits

0x8f99,	// (0x00023c3d) main_vded2_pane_g1

0x8fa6,	// (0x00023c4a) main_vded2_pane_g2_ParamLimits

0x8fa6,	// (0x00023c4a) main_vded2_pane_g2

0x0001,

0xfa13,	// (0x0002a6b7) main_vded2_pane_g_ParamLimits

0xfa13,	// (0x0002a6b7) main_vded2_pane_g

0x8fb4,	// (0x00023c58) vded2_slider_pane_ParamLimits

0x8fb4,	// (0x00023c58) vded2_slider_pane

0x8fc1,	// (0x00023c65) aid_size_touch_vded2_end

0x8fcb,	// (0x00023c6f) aid_size_touch_vded2_playhead

0x09f4,	// (0x0001b698) aid_size_touch_vded2_start

0x09fc,	// (0x0001b6a0) vded2_slider_bg_pane

0x0a05,	// (0x0001b6a9) vded2_slider_pane_g1

0x0a0e,	// (0x0001b6b2) vded2_slider_pane_g2

0x8fd3,	// (0x00023c77) vded2_slider_pane_g3

0x0002,

0xfa18,	// (0x0002a6bc) vded2_slider_pane_g

0x0a16,	// (0x0001b6ba) vded2_slider_bg_pane_g1

0x0a1f,	// (0x0001b6c3) vded2_slider_bg_pane_g2

0x0a28,	// (0x0001b6cc) vded2_slider_bg_pane_g3

0x0002,

0xfa1f,	// (0x0002a6c3) vded2_slider_bg_pane_g

0x6d8d,	// (0x00021a31) aid_postcard_touch_down_pane_ParamLimits

0x6d8d,	// (0x00021a31) aid_postcard_touch_down_pane

0x6d9d,	// (0x00021a41) aid_postcard_touch_up_pane_ParamLimits

0x6d9d,	// (0x00021a41) aid_postcard_touch_up_pane

0x37a5,	// (0x0001e449) main_blid2_pane

0x3c24,	// (0x0001e8c8) popup_blid2_search_window

0xbe20,	// (0x00026ac4) blid2_gps_pane

0xbe20,	// (0x00026ac4) blid2_navig_pane

0xbe20,	// (0x00026ac4) blid2_search_pane

0xbe20,	// (0x00026ac4) blid2_tripm_pane

0x8fdc,	// (0x00023c80) blid2_search_pane_g1_ParamLimits

0x8fdc,	// (0x00023c80) blid2_search_pane_g1

0x8fec,	// (0x00023c90) blid2_search_pane_t1_ParamLimits

0x8fec,	// (0x00023c90) blid2_search_pane_t1

0x8ffe,	// (0x00023ca2) aid_size_cell_blid2_gps_ParamLimits

0x8ffe,	// (0x00023ca2) aid_size_cell_blid2_gps

0x900e,	// (0x00023cb2) blid2_gps_pane_g1_ParamLimits

0x900e,	// (0x00023cb2) blid2_gps_pane_g1

0x901a,	// (0x00023cbe) grid_blid2_satellite_pane_ParamLimits

0x901a,	// (0x00023cbe) grid_blid2_satellite_pane

0x902a,	// (0x00023cce) blid2_navig_pane_g1_ParamLimits

0x902a,	// (0x00023cce) blid2_navig_pane_g1

0x9036,	// (0x00023cda) blid2_navig_pane_t1_ParamLimits

0x9036,	// (0x00023cda) blid2_navig_pane_t1

0x9048,	// (0x00023cec) blid2_navig_pane_t2_ParamLimits

0x9048,	// (0x00023cec) blid2_navig_pane_t2

0x0001,

0xfa26,	// (0x0002a6ca) blid2_navig_pane_t_ParamLimits

0xfa26,	// (0x0002a6ca) blid2_navig_pane_t

0x905a,	// (0x00023cfe) blid2_navig_ring_pane_ParamLimits

0x905a,	// (0x00023cfe) blid2_navig_ring_pane

0x906a,	// (0x00023d0e) blid2_speed_pane_ParamLimits

0x906a,	// (0x00023d0e) blid2_speed_pane

0x9076,	// (0x00023d1a) blid2_tripm_pane_g1_ParamLimits

0x9076,	// (0x00023d1a) blid2_tripm_pane_g1

0x9086,	// (0x00023d2a) blid2_tripm_pane_g2_ParamLimits

0x9086,	// (0x00023d2a) blid2_tripm_pane_g2

0x9092,	// (0x00023d36) blid2_tripm_pane_g3_ParamLimits

0x9092,	// (0x00023d36) blid2_tripm_pane_g3

0x909e,	// (0x00023d42) blid2_tripm_pane_g4_ParamLimits

0x909e,	// (0x00023d42) blid2_tripm_pane_g4

0x90aa,	// (0x00023d4e) blid2_tripm_pane_g5_ParamLimits

0x90aa,	// (0x00023d4e) blid2_tripm_pane_g5

0x0005,

0xfa2b,	// (0x0002a6cf) blid2_tripm_pane_g_ParamLimits

0xfa2b,	// (0x0002a6cf) blid2_tripm_pane_g

0x90c6,	// (0x00023d6a) blid2_tripm_pane_t1_ParamLimits

0x90c6,	// (0x00023d6a) blid2_tripm_pane_t1

0x90da,	// (0x00023d7e) blid2_tripm_pane_t2_ParamLimits

0x90da,	// (0x00023d7e) blid2_tripm_pane_t2

0x90ec,	// (0x00023d90) blid2_tripm_pane_t3_ParamLimits

0x90ec,	// (0x00023d90) blid2_tripm_pane_t3

0x0003,

0xfa38,	// (0x0002a6dc) blid2_tripm_pane_t_ParamLimits

0xfa38,	// (0x0002a6dc) blid2_tripm_pane_t

0x911e,	// (0x00023dc2) cell_blid2_satellite_pane_ParamLimits

0x911e,	// (0x00023dc2) cell_blid2_satellite_pane

0x9138,	// (0x00023ddc) cell_blid2_satellite_pane_g1

0x0a31,	// (0x0001b6d5) cell_blid2_satellite_pane_t1

0xc55f,	// (0x00027203) blid2_speed_pane_g1

0x0a3f,	// (0x0001b6e3) blid2_speed_pane_t1

0x0a4d,	// (0x0001b6f1) blid2_speed_pane_t2

0x0001,

0xfa41,	// (0x0002a6e5) blid2_speed_pane_t

0xc55f,	// (0x00027203) blid2_navig_ring_pane_g1

0x9141,	// (0x00023de5) blid2_navig_ring_pane_g2

0x9149,	// (0x00023ded) blid2_navig_ring_pane_g3

0x9151,	// (0x00023df5) blid2_navig_ring_pane_g4

0x9159,	// (0x00023dfd) blid2_navig_ring_pane_g5

0x0004,

0xfa46,	// (0x0002a6ea) blid2_navig_ring_pane_g

0xbe20,	// (0x00026ac4) bg_popup_window_pane_cp011

0x0a5b,	// (0x0001b6ff) popup_blid2_search_window_g1

0x0a63,	// (0x0001b707) popup_blid2_search_window_t1

0x0a71,	// (0x0001b715) popup_blid2_search_window_t2

0x0001,

0xfa51,	// (0x0002a6f5) popup_blid2_search_window_t

0xc88e,	// (0x00027532) main_browser_pane_g1

0xc5bd,	// (0x00027261) main_browser_pane_ParamLimits

0x3bfb,	// (0x0001e89f) bg_button_pane_cp011_ParamLimits

0x49e8,	// (0x0001f68c) cell_vitu2_function_pane_g1_ParamLimits

0xd2a7,	// (0x00027f4b) bg_popup_sub_pane_cp22_ParamLimits

0x8b2c,	// (0x000237d0) input_focus_pane_cp08_ParamLimits

0x8b47,	// (0x000237eb) popup_vitu2_query_button_pane_ParamLimits

0x8b47,	// (0x000237eb) popup_vitu2_query_button_pane

0x8b56,	// (0x000237fa) popup_vitu2_query_input_button_pane

0x05c2,	// (0x0001b266) popup_vitu2_query_window_g1_ParamLimits

0x8b60,	// (0x00023804) popup_vitu2_query_window_g2_ParamLimits

0xf952,	// (0x0002a5f6) popup_vitu2_query_window_g_ParamLimits

0xbe20,	// (0x00026ac4) bg_button_pane_cp026

0x9161,	// (0x00023e05) popup_vitu2_query_input_button_pane_g1

0xbe20,	// (0x00026ac4) bg_button_pane_cp025

0x0a7f,	// (0x0001b723) popup_vitu2_query_button_pane_t1

0x7704,	// (0x000223a8) main_mp3_pane_t6

0x7714,	// (0x000223b8) popup_slider_window_cp01

0x45be,	// (0x0001f262) cam4_battery_pane

0x4698,	// (0x0001f33c) cam4_battery_pane_cp02

0x4b6c,	// (0x0001f810) cam4_battery_pane_cp01

0x4b6c,	// (0x0001f810) cam4_battery_pane_cp03

0x0a8d,	// (0x0001b731) cam4_battery_pane_g1

0xc55f,	// (0x00027203) cam4_battery_pane_g2

0x0001,

0xfa56,	// (0x0002a6fa) cam4_battery_pane_g

0xe7a7,	// (0x0002944b) popup_blid_sat_info2_window_t11

0xcfcc,	// (0x00027c70) aid_size_touch_mv_arrow_left_ParamLimits

0xcff7,	// (0x00027c9b) aid_size_touch_mv_arrow_right_ParamLimits

0xd055,	// (0x00027cf9) navi_pane_g1_ParamLimits

0xd061,	// (0x00027d05) navi_pane_g2_ParamLimits

0xd08f,	// (0x00027d33) navi_pane_g3_ParamLimits

0xf334,	// (0x00029fd8) navi_pane_g_ParamLimits

0x69a0,	// (0x00021644) navi_pane_mv_t1_ParamLimits

0x8031,	// (0x00022cd5) grid_imed_effect_pane_ParamLimits

0x5504,	// (0x000201a8) aid_placing_vt_slider_lsc

0xc7dd,	// (0x00027481) aid_placing_vt_slider_prt

0xc315,	// (0x00026fb9) bg_tb_trans_pane_cp01_ParamLimits

0xea45,	// (0x000296e9) popup_image_details_window_g1_ParamLimits

0xea58,	// (0x000296fc) popup_image_details_window_g2_ParamLimits

0xea6d,	// (0x00029711) popup_image_details_window_g3_ParamLimits

0xea6d,	// (0x00029711) popup_image_details_window_g3

0xf663,	// (0x0002a307) popup_image_details_window_g_ParamLimits

0xea81,	// (0x00029725) popup_image_details_window_t1_ParamLimits

0xea93,	// (0x00029737) popup_image_details_window_t2_ParamLimits

0xeaac,	// (0x00029750) popup_image_details_window_t3_ParamLimits

0xeac0,	// (0x00029764) popup_image_details_window_t4_ParamLimits

0xeadb,	// (0x0002977f) popup_image_details_window_t5_ParamLimits

0xf66a,	// (0x0002a30e) popup_image_details_window_t_ParamLimits

0x8ea5,	// (0x00023b49) cl_header_name_pane_ParamLimits

0x8ea5,	// (0x00023b49) cl_header_name_pane

0x9169,	// (0x00023e0d) cl_header_name_pane_t1_ParamLimits

0x9169,	// (0x00023e0d) cl_header_name_pane_t1

0x9180,	// (0x00023e24) cl_header_name_pane_t2_ParamLimits

0x9180,	// (0x00023e24) cl_header_name_pane_t2

0x91aa,	// (0x00023e4e) cl_header_name_pane_t3_ParamLimits

0x91aa,	// (0x00023e4e) cl_header_name_pane_t3

0x0002,

0xfa5b,	// (0x0002a6ff) cl_header_name_pane_t_ParamLimits

0xfa5b,	// (0x0002a6ff) cl_header_name_pane_t

0xd11e,	// (0x00027dc2) navi_pane_mv_g2_ParamLimits

0x0248,	// (0x0001aeec) field_vitu2_entry_pane_g1_ParamLimits

0x0254,	// (0x0001aef8) field_vitu2_entry_pane_g2_ParamLimits

0xd2c9,	// (0x00027f6d) field_vitu2_entry_pane_g3_ParamLimits

0xd2c9,	// (0x00027f6d) field_vitu2_entry_pane_g3

0xf85b,	// (0x0002a4ff) field_vitu2_entry_pane_g_ParamLimits

0x48ae,	// (0x0001f552) cell_vitu2_itu_pane_g1_ParamLimits

0x48c6,	// (0x0001f56a) cell_vitu2_itu_pane_g2_ParamLimits

0x48c6,	// (0x0001f56a) cell_vitu2_itu_pane_g2

0x0001,

0xf867,	// (0x0002a50b) cell_vitu2_itu_pane_g_ParamLimits

0xf867,	// (0x0002a50b) cell_vitu2_itu_pane_g

0x3bfb,	// (0x0001e89f) bg_vkb2_func_pane_cp05_ParamLimits

0x3bfb,	// (0x0001e89f) bg_vkb2_func_pane_cp05

0x3bfb,	// (0x0001e89f) bg_vkb2_func_pane_cp03

0x3bfb,	// (0x0001e89f) bg_vkb2_func_pane_cp04

0x3bfb,	// (0x0001e89f) bg_vkb2_func_pane_cp10_ParamLimits

0x3bfb,	// (0x0001e89f) bg_vkb2_func_pane_cp10

0x8e47,	// (0x00023aeb) bg_vkb2_func_pane_cp08

0x8b14,	// (0x000237b8) bg_vkb2_func_pane_cp06

0x8e2a,	// (0x00023ace) bg_vkb2_func_pane_cp07

0x096f,	// (0x0001b613) bg_vkb2_func_pane_cp11_ParamLimits

0x096f,	// (0x0001b613) bg_vkb2_func_pane_cp11

0x0984,	// (0x0001b628) bg_vkb2_func_pane_cp12_ParamLimits

0x0984,	// (0x0001b628) bg_vkb2_func_pane_cp12

0xbe20,	// (0x00026ac4) bg_vkb2_func_pane_cp09

0x028f,	// (0x0001af33) bg_vkb2_func_pane_g1

0xc99f,	// (0x00027643) bg_vkb2_func_pane_g2

0x0297,	// (0x0001af3b) bg_vkb2_func_pane_g3

0x029f,	// (0x0001af43) bg_vkb2_func_pane_g4

0x0567,	// (0x0001b20b) bg_vkb2_func_pane_g5

0x02b7,	// (0x0001af5b) bg_vkb2_func_pane_g6

0x02bf,	// (0x0001af63) bg_vkb2_func_pane_g7

0x02af,	// (0x0001af53) bg_vkb2_func_pane_g8

0xc97f,	// (0x00027623) bg_vkb2_func_pane_g9

0x0008,

0xfa62,	// (0x0002a706) bg_vkb2_func_pane_g

0x90b8,	// (0x00023d5c) blid2_tripm_pane_g6_ParamLimits

0x90b8,	// (0x00023d5c) blid2_tripm_pane_g6

0x0039,	// (0x0001acdd) mp4_progress_pane_g1

0x9112,	// (0x00023db6) blid2_tripm_values_pane_ParamLimits

0x9112,	// (0x00023db6) blid2_tripm_values_pane

0x91cf,	// (0x00023e73) blid2_tripm_values_pane_t1

0x91dd,	// (0x00023e81) blid2_tripm_values_pane_t2

0x91eb,	// (0x00023e8f) blid2_tripm_values_pane_t3

0x91f9,	// (0x00023e9d) blid2_tripm_values_pane_t4

0x9207,	// (0x00023eab) blid2_tripm_values_pane_t5

0x9215,	// (0x00023eb9) blid2_tripm_values_pane_t6

0x9223,	// (0x00023ec7) blid2_tripm_values_pane_t7

0x9231,	// (0x00023ed5) blid2_tripm_values_pane_t8

0x923f,	// (0x00023ee3) blid2_tripm_values_pane_t9

0x0008,

0xfa75,	// (0x0002a719) blid2_tripm_values_pane_t

0x5544,	// (0x000201e8) call_video_pane_t1_ParamLimits

0x5565,	// (0x00020209) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00029e81) call_video_pane_t_ParamLimits

0x6cac,	// (0x00021950) msg_header_pane_g1_ParamLimits

0xd32a,	// (0x00027fce) msg_header_pane_g2_ParamLimits

0xd32a,	// (0x00027fce) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x0002a076) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x0002a076) msg_header_pane_g

0xc5bd,	// (0x00027261) main_clock2_pane_ParamLimits

0x7e83,	// (0x00022b27) grid_clock2_toolbar_pane_ParamLimits

0x7e83,	// (0x00022b27) grid_clock2_toolbar_pane

0x7e83,	// (0x00022b27) listscroll_clock2_pane_ParamLimits

0x7e83,	// (0x00022b27) listscroll_clock2_pane

0x7f33,	// (0x00022bd7) main_clock2_pane_t3_ParamLimits

0x7f33,	// (0x00022bd7) main_clock2_pane_t3

0x7f45,	// (0x00022be9) main_clock2_pane_t4_ParamLimits

0x7f45,	// (0x00022be9) main_clock2_pane_t4

0x0a97,	// (0x0001b73b) cell_clock2_toolbar_pane

0x0a9f,	// (0x0001b743) cell_clock2_toolbar_pane_cp01

0x0a9f,	// (0x0001b743) cell_clock2_toolbar_pane_cp02

0x0aa7,	// (0x0001b74b) cell_clock2_toolbar_pane_cp03

0x0aaf,	// (0x0001b753) list_clock2_pane

0xcf51,	// (0x00027bf5) scroll_pane_cp10

0x0ab7,	// (0x0001b75b) list_single_clock2_pane_ParamLimits

0x0ab7,	// (0x0001b75b) list_single_clock2_pane

0xc786,	// (0x0002742a) list_highlight_pane_cp08

0x0ac4,	// (0x0001b768) list_single_clock2_pane_t1

0x0ad2,	// (0x0001b776) list_single_clock2_pane_t2

0x0001,

0xfa88,	// (0x0002a72c) list_single_clock2_pane_t

0xbe20,	// (0x00026ac4) bg_button_pane_cp10

0x0ae0,	// (0x0001b784) cell_clock2_toolbar_pane_g1

0x3b96,	// (0x0001e83a) aid_main_viewer_pane_g1_ParamLimits

0x3b96,	// (0x0001e83a) aid_main_viewer_pane_g1

0x3ba2,	// (0x0001e846) aid_main_viewer_pane_g2_ParamLimits

0x3ba2,	// (0x0001e846) aid_main_viewer_pane_g2

0x6d49,	// (0x000219ed) aid_main_viewer_pane_g3_ParamLimits

0x6d49,	// (0x000219ed) aid_main_viewer_pane_g3

0x6d5a,	// (0x000219fe) aid_main_viewer_pane_g4_ParamLimits

0x6d5a,	// (0x000219fe) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x0002a087) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x0002a087) aid_main_viewer_pane_g

0x3bee,	// (0x0001e892) main_calc_pane_ParamLimits

0x3c09,	// (0x0001e8ad) main_dialer2_pane_ParamLimits

0x37a5,	// (0x0001e449) main_cam6_pane

0x37a5,	// (0x0001e449) main_vid6_pane

0x7e8f,	// (0x00022b33) listscroll_gen_pane_cp06_ParamLimits

0x7e8f,	// (0x00022b33) listscroll_gen_pane_cp06

0x7f57,	// (0x00022bfb) main_clock2_pane_t5_ParamLimits

0x7f57,	// (0x00022bfb) main_clock2_pane_t5

0x7fa4,	// (0x00022c48) aid_call2_pane_cp10_ParamLimits

0x7fb6,	// (0x00022c5a) aid_call_pane_cp10_ParamLimits

0xcfc0,	// (0x00027c64) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcfc0,	// (0x00027c64) popup_clock_analogue_window_cp10_g2_ParamLimits

0x3e20,	// (0x0001eac4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x3e20,	// (0x0001eac4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcfc0,	// (0x00027c64) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71f,	// (0x0002a3c3) popup_clock_analogue_window_cp10_g_ParamLimits

0x3e36,	// (0x0001eada) popup_clock_analogue_window_cp10_t1_ParamLimits

0x00aa,	// (0x0001ad4e) cell_dialer2_keypad_pane_g2_ParamLimits

0x00aa,	// (0x0001ad4e) cell_dialer2_keypad_pane_g2

0x0001,

0xf7fa,	// (0x0002a49e) cell_dialer2_keypad_pane_g_ParamLimits

0xf7fa,	// (0x0002a49e) cell_dialer2_keypad_pane_g

0xc569,	// (0x0002720d) cell_dialer2_keypad_pane_t1

0x8676,	// (0x0002331a) main_cset_text2_pane_ParamLimits

0x8676,	// (0x0002331a) main_cset_text2_pane

0x07ae,	// (0x0001b452) area_vitu2_query_pane_g1_ParamLimits

0x8dc9,	// (0x00023a6d) area_vitu2_query_pane_g2_ParamLimits

0xf9a5,	// (0x0002a649) area_vitu2_query_pane_g_ParamLimits

0x0832,	// (0x0001b4d6) area_vitu2_query_pane_t7_ParamLimits

0x0832,	// (0x0001b4d6) area_vitu2_query_pane_t7

0x8b14,	// (0x000237b8) bg_button_pane_cp018_ParamLimits

0x8e2a,	// (0x00023ace) bg_button_pane_cp021_ParamLimits

0x8e36,	// (0x00023ada) bg_button_pane_cp022_ParamLimits

0x8e47,	// (0x00023aeb) bg_vkb2_func_pane_cp08_ParamLimits

0x8b14,	// (0x000237b8) bg_vkb2_func_pane_cp06_ParamLimits

0x8e2a,	// (0x00023ace) bg_vkb2_func_pane_cp07_ParamLimits

0x8e59,	// (0x00023afd) input_focus_pane_cp09_ParamLimits

0x4c10,	// (0x0001f8b4) cam6_autofocus_pane_ParamLimits

0x4c10,	// (0x0001f8b4) cam6_autofocus_pane

0x4c2c,	// (0x0001f8d0) cam6_image_uncrop_pane_ParamLimits

0x4c2c,	// (0x0001f8d0) cam6_image_uncrop_pane

0x4c65,	// (0x0001f909) cam6_indi_pane_ParamLimits

0x4c65,	// (0x0001f909) cam6_indi_pane

0x4c7f,	// (0x0001f923) cam6_mode_pane_ParamLimits

0x4c7f,	// (0x0001f923) cam6_mode_pane

0x4c93,	// (0x0001f937) cam6_timer_pane_ParamLimits

0x4c93,	// (0x0001f937) cam6_timer_pane

0x4ca7,	// (0x0001f94b) cam6_zoom_pane_ParamLimits

0x4ca7,	// (0x0001f94b) cam6_zoom_pane

0x924d,	// (0x00023ef1) cam6_mode_pane_g1_ParamLimits

0x924d,	// (0x00023ef1) cam6_mode_pane_g1

0x9259,	// (0x00023efd) cam6_mode_pane_g2_ParamLimits

0x9259,	// (0x00023efd) cam6_mode_pane_g2

0x9265,	// (0x00023f09) cam6_mode_pane_g3_ParamLimits

0x9265,	// (0x00023f09) cam6_mode_pane_g3

0x9271,	// (0x00023f15) cam6_mode_pane_g4_ParamLimits

0x9271,	// (0x00023f15) cam6_mode_pane_g4

0x0003,

0xfa8d,	// (0x0002a731) cam6_mode_pane_g_ParamLimits

0xfa8d,	// (0x0002a731) cam6_mode_pane_g

0xe6ef,	// (0x00029393) bg_tb_trans_pane_cp08_ParamLimits

0xe6ef,	// (0x00029393) bg_tb_trans_pane_cp08

0x0af6,	// (0x0001b79a) cam6_battery_pane_ParamLimits

0x0af6,	// (0x0001b79a) cam6_battery_pane

0x0b0c,	// (0x0001b7b0) cam6_indi_pane_g1_ParamLimits

0x0b0c,	// (0x0001b7b0) cam6_indi_pane_g1

0x0b1e,	// (0x0001b7c2) cam6_indi_pane_g2_ParamLimits

0x0b1e,	// (0x0001b7c2) cam6_indi_pane_g2

0x0b30,	// (0x0001b7d4) cam6_indi_pane_g3_ParamLimits

0x0b30,	// (0x0001b7d4) cam6_indi_pane_g3

0x0002,

0xfa96,	// (0x0002a73a) cam6_indi_pane_g_ParamLimits

0xfa96,	// (0x0002a73a) cam6_indi_pane_g

0x0b42,	// (0x0001b7e6) cam6_indi_pane_t1_ParamLimits

0x0b42,	// (0x0001b7e6) cam6_indi_pane_t1

0x836d,	// (0x00023011) cam6_autofocus_pane_g1

0x8365,	// (0x00023009) cam6_autofocus_pane_g2

0x837d,	// (0x00023021) cam6_autofocus_pane_g3

0x8375,	// (0x00023019) cam6_autofocus_pane_g4

0x0003,

0xfa9d,	// (0x0002a741) cam6_autofocus_pane_g

0x0b68,	// (0x0001b80c) cam6_timer_pane_g1

0x0b70,	// (0x0001b814) cam6_timer_pane_t1

0x0b7e,	// (0x0001b822) cam6_zoom_cont_pane

0x0b86,	// (0x0001b82a) cam6_zoom_pane_g1

0x0b8f,	// (0x0001b833) cam6_zoom_pane_g2

0x927d,	// (0x00023f21) cam6_zoom_pane_g3

0x0002,

0xfaa6,	// (0x0002a74a) cam6_zoom_pane_g

0xc55f,	// (0x00027203) cam6_battery_pane_g1

0xc55f,	// (0x00027203) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00029d53) cam6_battery_pane_g

0x0b86,	// (0x0001b82a) cam6_zoom_cont_pane_g1

0x0b8f,	// (0x0001b833) cam6_zoom_cont_pane_g2

0x0b98,	// (0x0001b83c) cam6_zoom_cont_pane_g3

0x0002,

0xfaad,	// (0x0002a751) cam6_zoom_cont_pane_g

0x929b,	// (0x00023f3f) cam6_mode_pane_cp_ParamLimits

0x929b,	// (0x00023f3f) cam6_mode_pane_cp

0x92af,	// (0x00023f53) cam6_zoom_pane_cp_ParamLimits

0x92af,	// (0x00023f53) cam6_zoom_pane_cp

0x92c7,	// (0x00023f6b) vid6_image_uncrop_cif_pane_ParamLimits

0x92c7,	// (0x00023f6b) vid6_image_uncrop_cif_pane

0x92f3,	// (0x00023f97) vid6_image_uncrop_nhd_pane_ParamLimits

0x92f3,	// (0x00023f97) vid6_image_uncrop_nhd_pane

0x9310,	// (0x00023fb4) vid6_image_uncrop_vga_pane_ParamLimits

0x9310,	// (0x00023fb4) vid6_image_uncrop_vga_pane

0x932f,	// (0x00023fd3) vid6_image_uncrop_wvga_pane_ParamLimits

0x932f,	// (0x00023fd3) vid6_image_uncrop_wvga_pane

0x934c,	// (0x00023ff0) vid6_indi_pane_ParamLimits

0x934c,	// (0x00023ff0) vid6_indi_pane

0xe6ef,	// (0x00029393) bg_tb_trans_pane_cp09_ParamLimits

0xe6ef,	// (0x00029393) bg_tb_trans_pane_cp09

0x0bb0,	// (0x0001b854) cam6_battery_pane_cp_ParamLimits

0x0bb0,	// (0x0001b854) cam6_battery_pane_cp

0x0bbc,	// (0x0001b860) vid6_indi_pane_g1_ParamLimits

0x0bbc,	// (0x0001b860) vid6_indi_pane_g1

0x0bce,	// (0x0001b872) vid6_indi_pane_g2_ParamLimits

0x0bce,	// (0x0001b872) vid6_indi_pane_g2

0x0be0,	// (0x0001b884) vid6_indi_pane_g3_ParamLimits

0x0be0,	// (0x0001b884) vid6_indi_pane_g3

0x0bf5,	// (0x0001b899) vid6_indi_pane_g4_ParamLimits

0x0bf5,	// (0x0001b899) vid6_indi_pane_g4

0x0c0a,	// (0x0001b8ae) vid6_indi_pane_g5_ParamLimits

0x0c0a,	// (0x0001b8ae) vid6_indi_pane_g5

0x0004,

0xfab4,	// (0x0002a758) vid6_indi_pane_g_ParamLimits

0xfab4,	// (0x0002a758) vid6_indi_pane_g

0x0c24,	// (0x0001b8c8) vid6_indi_pane_t1_ParamLimits

0x0c24,	// (0x0001b8c8) vid6_indi_pane_t1

0x0c3a,	// (0x0001b8de) vid6_indi_pane_t2_ParamLimits

0x0c3a,	// (0x0001b8de) vid6_indi_pane_t2

0x0c62,	// (0x0001b906) vid6_indi_pane_t3_ParamLimits

0x0c62,	// (0x0001b906) vid6_indi_pane_t3

0x0c8a,	// (0x0001b92e) vid6_indi_pane_t4_ParamLimits

0x0c8a,	// (0x0001b92e) vid6_indi_pane_t4

0x0003,

0xfabf,	// (0x0002a763) vid6_indi_pane_t_ParamLimits

0xfabf,	// (0x0002a763) vid6_indi_pane_t

0x0cae,	// (0x0001b952) wait_bar_pane_cp08

0x936f,	// (0x00024013) main_cset_text2_pane_t1_ParamLimits

0x936f,	// (0x00024013) main_cset_text2_pane_t1

0x9286,	// (0x00023f2a) listscroll_gen_pane_cp06_t1_ParamLimits

0x9286,	// (0x00023f2a) listscroll_gen_pane_cp06_t1

0x37a5,	// (0x0001e449) main_cam6_set_pane

0x1605,	// (0x0001c2a9) bg_tb_trans_pane_cp06_ParamLimits

0x45c6,	// (0x0001f26a) cam4_indicators_pane_g1_ParamLimits

0x45d7,	// (0x0001f27b) cam4_indicators_pane_g2_ParamLimits

0xf837,	// (0x0002a4db) cam4_indicators_pane_g_ParamLimits

0x45ef,	// (0x0001f293) cam4_indicators_pane_t1_ParamLimits

0x3bfb,	// (0x0001e89f) bg_tb_trans_pane_cp07_ParamLimits

0x46a0,	// (0x0001f344) vid4_indicators_pane_g1_ParamLimits

0x46b4,	// (0x0001f358) vid4_indicators_pane_g2_ParamLimits

0x46c8,	// (0x0001f36c) vid4_indicators_pane_g3_ParamLimits

0x46d9,	// (0x0001f37d) vid4_indicators_pane_g4_ParamLimits

0xf849,	// (0x0002a4ed) vid4_indicators_pane_g_ParamLimits

0x46f5,	// (0x0001f399) vid4_indicators_pane_t1_ParamLimits

0x4b74,	// (0x0001f818) vid4_progress_pane_g1_ParamLimits

0x4b84,	// (0x0001f828) vid4_progress_pane_g2_ParamLimits

0x4b94,	// (0x0001f838) vid4_progress_pane_g3_ParamLimits

0x4ba6,	// (0x0001f84a) vid4_progress_pane_g4_ParamLimits

0xf9f0,	// (0x0002a694) vid4_progress_pane_g_ParamLimits

0x4bbe,	// (0x0001f862) vid4_progress_pane_t1_ParamLimits

0x4bd4,	// (0x0001f878) vid4_progress_pane_t2_ParamLimits

0x4be9,	// (0x0001f88d) vid4_progress_pane_t3_ParamLimits

0xf9fb,	// (0x0002a69f) vid4_progress_pane_t_ParamLimits

0x4bff,	// (0x0001f8a3) wait_bar_pane_cp07_ParamLimits

0x93a6,	// (0x0002404a) main_cam6_set_pane_g2_ParamLimits

0x93a6,	// (0x0002404a) main_cam6_set_pane_g2

0x93b2,	// (0x00024056) main_cset6_listscroll_pane_ParamLimits

0x93b2,	// (0x00024056) main_cset6_listscroll_pane

0x93dd,	// (0x00024081) main_cset6_slider_pane_ParamLimits

0x93dd,	// (0x00024081) main_cset6_slider_pane

0x93e9,	// (0x0002408d) main_cset6_text2_pane_ParamLimits

0x93e9,	// (0x0002408d) main_cset6_text2_pane

0x0cbd,	// (0x0001b961) main_cset6_text_pane

0x0cc5,	// (0x0001b969) main_cset_list_pane_copy1_ParamLimits

0x0cc5,	// (0x0001b969) main_cset_list_pane_copy1

0x0cd5,	// (0x0001b979) scroll_pane_cp028_copy1

0x93fc,	// (0x000240a0) cset_list_set_pane_copy1

0x9412,	// (0x000240b6) aid_position_infowindow_above_copy1

0x941a,	// (0x000240be) aid_position_infowindow_below_copy1

0x0cde,	// (0x0001b982) cset_list_set_pane_g1_copy1

0x0ce6,	// (0x0001b98a) cset_list_set_pane_g3_copy1_ParamLimits

0x0ce6,	// (0x0001b98a) cset_list_set_pane_g3_copy1

0x0cf5,	// (0x0001b999) cset_list_set_pane_t1_copy1_ParamLimits

0x0cf5,	// (0x0001b999) cset_list_set_pane_t1_copy1

0xc315,	// (0x00026fb9) list_highlight_pane_cp021_copy1_ParamLimits

0xc315,	// (0x00026fb9) list_highlight_pane_cp021_copy1

0x0d0a,	// (0x0001b9ae) cset6_slider_pane_ParamLimits

0x0d0a,	// (0x0001b9ae) cset6_slider_pane

0x0d36,	// (0x0001b9da) main_cset6_slider_pane_g1_ParamLimits

0x0d36,	// (0x0001b9da) main_cset6_slider_pane_g1

0x9422,	// (0x000240c6) main_cset6_slider_pane_g2_ParamLimits

0x9422,	// (0x000240c6) main_cset6_slider_pane_g2

0x0d5e,	// (0x0001ba02) main_cset6_slider_pane_g3_ParamLimits

0x0d5e,	// (0x0001ba02) main_cset6_slider_pane_g3

0x944a,	// (0x000240ee) main_cset6_slider_pane_g4_ParamLimits

0x944a,	// (0x000240ee) main_cset6_slider_pane_g4

0x9456,	// (0x000240fa) main_cset6_slider_pane_g5_ParamLimits

0x9456,	// (0x000240fa) main_cset6_slider_pane_g5

0x03e4,	// (0x0001b088) main_cset6_slider_pane_g7_ParamLimits

0x03e4,	// (0x0001b088) main_cset6_slider_pane_g7

0x03f0,	// (0x0001b094) main_cset6_slider_pane_g8_ParamLimits

0x03f0,	// (0x0001b094) main_cset6_slider_pane_g8

0x9464,	// (0x00024108) main_cset6_slider_pane_g9_ParamLimits

0x9464,	// (0x00024108) main_cset6_slider_pane_g9

0x9470,	// (0x00024114) main_cset6_slider_pane_g10_ParamLimits

0x9470,	// (0x00024114) main_cset6_slider_pane_g10

0x947c,	// (0x00024120) main_cset6_slider_pane_g11_ParamLimits

0x947c,	// (0x00024120) main_cset6_slider_pane_g11

0x9488,	// (0x0002412c) main_cset6_slider_pane_g12_ParamLimits

0x9488,	// (0x0002412c) main_cset6_slider_pane_g12

0x047e,	// (0x0001b122) main_cset6_slider_pane_g13_ParamLimits

0x047e,	// (0x0001b122) main_cset6_slider_pane_g13

0x048a,	// (0x0001b12e) main_cset6_slider_pane_g14_ParamLimits

0x048a,	// (0x0001b12e) main_cset6_slider_pane_g14

0x9494,	// (0x00024138) main_cset6_slider_pane_g15_ParamLimits

0x9494,	// (0x00024138) main_cset6_slider_pane_g15

0x94ac,	// (0x00024150) main_cset6_slider_pane_g16_ParamLimits

0x94ac,	// (0x00024150) main_cset6_slider_pane_g16

0x94ba,	// (0x0002415e) main_cset6_slider_pane_g17_ParamLimits

0x94ba,	// (0x0002415e) main_cset6_slider_pane_g17

0x0011,

0xfac8,	// (0x0002a76c) main_cset6_slider_pane_g_ParamLimits

0xfac8,	// (0x0002a76c) main_cset6_slider_pane_g

0x0d76,	// (0x0001ba1a) main_cset6_slider_pane_t1_ParamLimits

0x0d76,	// (0x0001ba1a) main_cset6_slider_pane_t1

0x94d4,	// (0x00024178) main_cset6_slider_pane_t2_ParamLimits

0x94d4,	// (0x00024178) main_cset6_slider_pane_t2

0x94ff,	// (0x000241a3) main_cset6_slider_pane_t3_ParamLimits

0x94ff,	// (0x000241a3) main_cset6_slider_pane_t3

0x952a,	// (0x000241ce) main_cset6_slider_pane_t4_ParamLimits

0x952a,	// (0x000241ce) main_cset6_slider_pane_t4

0x9555,	// (0x000241f9) main_cset6_slider_pane_t5_ParamLimits

0x9555,	// (0x000241f9) main_cset6_slider_pane_t5

0x0db7,	// (0x0001ba5b) main_cset6_slider_pane_t7_ParamLimits

0x0db7,	// (0x0001ba5b) main_cset6_slider_pane_t7

0x9582,	// (0x00024226) main_cset6_slider_pane_t8_ParamLimits

0x9582,	// (0x00024226) main_cset6_slider_pane_t8

0x95a6,	// (0x0002424a) main_cset6_slider_pane_t9_ParamLimits

0x95a6,	// (0x0002424a) main_cset6_slider_pane_t9

0x95ca,	// (0x0002426e) main_cset6_slider_pane_t10_ParamLimits

0x95ca,	// (0x0002426e) main_cset6_slider_pane_t10

0x95ee,	// (0x00024292) main_cset6_slider_pane_t11_ParamLimits

0x95ee,	// (0x00024292) main_cset6_slider_pane_t11

0x0ded,	// (0x0001ba91) main_cset6_slider_pane_t14_ParamLimits

0x0ded,	// (0x0001ba91) main_cset6_slider_pane_t14

0x0e26,	// (0x0001baca) main_cset6_slider_pane_t15_ParamLimits

0x0e26,	// (0x0001baca) main_cset6_slider_pane_t15

0x000b,

0xfaed,	// (0x0002a791) main_cset6_slider_pane_t_ParamLimits

0xfaed,	// (0x0002a791) main_cset6_slider_pane_t

0x04ff,	// (0x0001b1a3) cset_slider_pane_g1_copy1

0x0508,	// (0x0001b1ac) cset_slider_pane_g2_copy1

0x0511,	// (0x0001b1b5) cset_slider_pane_g3_copy1

0xbe20,	// (0x00026ac4) bg_popup_sub_pane_cp011_copy1

0x0e68,	// (0x0001bb0c) main_cset_text_pane_g1_copy1

0x05d6,	// (0x0001b27a) main_cset_text_pane_t1_copy1

0x05e4,	// (0x0001b288) main_cset_text_pane_t2_copy1

0x05f2,	// (0x0001b296) main_cset_text_pane_t3_copy1

0x0600,	// (0x0001b2a4) main_cset_text_pane_t4_copy1

0x060e,	// (0x0001b2b2) main_cset_text_pane_t5_copy1

0x0e70,	// (0x0001bb14) main_cset_text_pane_t6_copy1

0x0e7e,	// (0x0001bb22) main_cset_text_pane_t7_copy1

0x9631,	// (0x000242d5) main_cset_text2_pane_t1_copy1

0x3bfb,	// (0x0001e89f) main_ncimui_pane

0x3c5a,	// (0x0001e8fe) popup_query_ncimui_window_ParamLimits

0x3c5a,	// (0x0001e8fe) popup_query_ncimui_window

0xebb8,	// (0x0002985c) field_cale_ev2_pane_g4_ParamLimits

0xebb8,	// (0x0002985c) field_cale_ev2_pane_g4

0x8220,	// (0x00022ec4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8220,	// (0x00022ec4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d1,	// (0x0002a475) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d1,	// (0x0002a475) cell_video_dialer_keypad_pane_g

0x8238,	// (0x00022edc) cell_video_dialer_keypad_pane_t1

0xbe20,	// (0x00026ac4) bg_popup_window_pane_cp012

0xe3ec,	// (0x00029090) heading_pane_cp06

0x0eaa,	// (0x0001bb4e) ncim_query_content_pane

0xbe20,	// (0x00026ac4) bg_popup_heading_pane_cp01

0x0eb2,	// (0x0001bb56) ncim_heading_pane_t1

0x0ec0,	// (0x0001bb64) ncim_indicator_popup_pane

0x0ed2,	// (0x0001bb76) ncim_query_button_pane

0x0ee6,	// (0x0001bb8a) ncim_query_content_pane_t1

0x0ef8,	// (0x0001bb9c) ncim_query_content_pane_t2

0x0005,

0xfb31,	// (0x0002a7d5) ncim_query_content_pane_t

0x0f32,	// (0x0001bbd6) ncim_query_list_pane

0x0f44,	// (0x0001bbe8) ncim_query_popup_pane

0x0ec0,	// (0x0001bb64) ncim_indicator_popup_pane_ParamLimits

0x9785,	// (0x00024429) ncim_query_content_pane_g1_ParamLimits

0x9785,	// (0x00024429) ncim_query_content_pane_g1

0x0ee6,	// (0x0001bb8a) ncim_query_content_pane_t1_ParamLimits

0x0ef8,	// (0x0001bb9c) ncim_query_content_pane_t2_ParamLimits

0x9791,	// (0x00024435) ncim_query_content_pane_t3_ParamLimits

0x9791,	// (0x00024435) ncim_query_content_pane_t3

0x97ae,	// (0x00024452) ncim_query_content_pane_t4_ParamLimits

0x97ae,	// (0x00024452) ncim_query_content_pane_t4

0x97cb,	// (0x0002446f) ncim_query_content_pane_t5_ParamLimits

0x97cb,	// (0x0002446f) ncim_query_content_pane_t5

0x0f0a,	// (0x0001bbae) ncim_query_content_pane_t6_ParamLimits

0x0f0a,	// (0x0001bbae) ncim_query_content_pane_t6

0xfb31,	// (0x0002a7d5) ncim_query_content_pane_t_ParamLimits

0x0f32,	// (0x0001bbd6) ncim_query_list_pane_ParamLimits

0x0f44,	// (0x0001bbe8) ncim_query_popup_pane_ParamLimits

0x0f58,	// (0x0001bbfc) wait_bar_pane_cp04

0xbe20,	// (0x00026ac4) input_focus_pane_cp011

0x0f60,	// (0x0001bc04) ncim_query_popup_pane_t1

0x0f6e,	// (0x0001bc12) ncim_list_query_list_pane_ParamLimits

0x0f6e,	// (0x0001bc12) ncim_list_query_list_pane

0xbe20,	// (0x00026ac4) bg_button_pane_cp027

0x0f7b,	// (0x0001bc1f) ncim_query_button_pane_g1

0xbe20,	// (0x00026ac4) list_highlight_pane_cp012

0x0f85,	// (0x0001bc29) ncim_list_query_list_pane_g1

0x0f8d,	// (0x0001bc31) ncim_list_query_list_pane_t1

0x45e3,	// (0x0001f287) cam4_indicators_pane_g3_ParamLimits

0x45e3,	// (0x0001f287) cam4_indicators_pane_g3

0x46e5,	// (0x0001f389) vid4_indicators_pane_g5_ParamLimits

0x46e5,	// (0x0001f389) vid4_indicators_pane_g5

0x4bb2,	// (0x0001f856) vid4_progress_pane_g5_ParamLimits

0x4bb2,	// (0x0001f856) vid4_progress_pane_g5

0x9671,	// (0x00024315) main_ncimui_pane_g1

0x96d9,	// (0x0002437d) ncimui_group_query_pane_ParamLimits

0x96d9,	// (0x0002437d) ncimui_group_query_pane

0x9721,	// (0x000243c5) ncimui_list_pane_ParamLimits

0x9721,	// (0x000243c5) ncimui_list_pane

0x9748,	// (0x000243ec) ncimui_text_pane_ParamLimits

0x9748,	// (0x000243ec) ncimui_text_pane

0x97e8,	// (0x0002448c) ncimui_text_pane_t1_ParamLimits

0x97e8,	// (0x0002448c) ncimui_text_pane_t1

0x0f9b,	// (0x0001bc3f) ncimui_list_single_graphic_pane_ParamLimits

0x0f9b,	// (0x0001bc3f) ncimui_list_single_graphic_pane

0x9807,	// (0x000244ab) ncimui_query_pane_ParamLimits

0x9807,	// (0x000244ab) ncimui_query_pane

0xbe20,	// (0x00026ac4) list_highlight_pane_cp013

0x0fab,	// (0x0001bc4f) ncim_list_query_list_pane_t1_copy1

0x0fb9,	// (0x0001bc5d) ncim_list_single_graphic_pane_g1

0x981a,	// (0x000244be) ncim_query_button_pane_cp01

0x9826,	// (0x000244ca) ncim_query_entry_pane_ParamLimits

0x9826,	// (0x000244ca) ncim_query_entry_pane

0x9839,	// (0x000244dd) ncimui_query_pane_g1

0x9845,	// (0x000244e9) ncimui_query_pane_t1_ParamLimits

0x9845,	// (0x000244e9) ncimui_query_pane_t1

0xc315,	// (0x00026fb9) input_focus_pane_cp012

0x0fc1,	// (0x0001bc65) ncim_query_entry_pane_t1

0xc5bd,	// (0x00027261) main_im_pane_ParamLimits

0x3bfb,	// (0x0001e89f) main_mobtv_pane_ParamLimits

0x3bfb,	// (0x0001e89f) main_mobtv_pane

0x94c8,	// (0x0002416c) main_cset6_slider_pane_g18_ParamLimits

0x94c8,	// (0x0002416c) main_cset6_slider_pane_g18

0x0d6a,	// (0x0001ba0e) main_cset6_slider_pane_g19_ParamLimits

0x0d6a,	// (0x0001ba0e) main_cset6_slider_pane_g19

0xd2c9,	// (0x00027f6d) bg_main_mobtv_pane_ParamLimits

0xd2c9,	// (0x00027f6d) bg_main_mobtv_pane

0x985e,	// (0x00024502) main_mobtv_info_pane

0x9869,	// (0x0002450d) main_mobtv_loading_pane_ParamLimits

0x9869,	// (0x0002450d) main_mobtv_loading_pane

0x0fd3,	// (0x0001bc77) main_mobtv_pg_channel_list_pane

0x0fdd,	// (0x0001bc81) main_mobtv_pg_hdr_pane

0x9876,	// (0x0002451a) main_mobtv_programe_curr_pane_ParamLimits

0x9876,	// (0x0002451a) main_mobtv_programe_curr_pane

0x9883,	// (0x00024527) main_mobtv_programe_next_pane_ParamLimits

0x9883,	// (0x00024527) main_mobtv_programe_next_pane

0x0fe6,	// (0x0001bc8a) popup_mobtv_noti_window

0xc55f,	// (0x00027203) main_tv_pg_hdr_pane_g1

0x0fee,	// (0x0001bc92) main_tv_pg_hdr_pane_g2

0x0ff6,	// (0x0001bc9a) main_tv_pg_hdr_pane_g3

0x0ffe,	// (0x0001bca2) main_tv_pg_hdr_pane_g4

0x1006,	// (0x0001bcaa) main_tv_pg_hdr_pane_g5

0x1010,	// (0x0001bcb4) main_tv_pg_hdr_pane_g6

0x101a,	// (0x0001bcbe) main_tv_pg_hdr_pane_g7

0x1024,	// (0x0001bcc8) main_tv_pg_hdr_pane_g8

0x102e,	// (0x0001bcd2) main_tv_pg_hdr_pane_g9

0x1038,	// (0x0001bcdc) main_tv_pg_hdr_pane_g10

0x1042,	// (0x0001bce6) main_tv_pg_hdr_pane_g11

0x000a,

0xfb3e,	// (0x0002a7e2) main_tv_pg_hdr_pane_g

0x104c,	// (0x0001bcf0) main_tv_pg_hdr_pane_t1

0x105a,	// (0x0001bcfe) main_tv_pg_hdr_pane_t2

0x1068,	// (0x0001bd0c) main_tv_pg_hdr_pane_t3

0x1078,	// (0x0001bd1c) main_tv_pg_hdr_pane_t4

0x1088,	// (0x0001bd2c) main_tv_pg_hdr_pane_t5

0x0004,

0xfb55,	// (0x0002a7f9) main_tv_pg_hdr_pane_t

0x1098,	// (0x0001bd3c) single_mobtv_pg_channel_pane_ParamLimits

0x1098,	// (0x0001bd3c) single_mobtv_pg_channel_pane

0x10aa,	// (0x0001bd4e) single_mobtv_pg_channel_table_pane

0xcaa2,	// (0x00027746) single_mobtv_pg_channel_thumb_pane

0x10b3,	// (0x0001bd57) single_tv_pg_channel_pane_g1

0x10bc,	// (0x0001bd60) single_tv_pg_channel_pane_g2

0x0001,

0xfb60,	// (0x0002a804) single_tv_pg_channel_pane_g

0xc521,	// (0x000271c5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc521,	// (0x000271c5) bg_single_mobtv_pg_channel_thumb_pane

0x10c5,	// (0x0001bd69) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x10c5,	// (0x0001bd69) single_mobtv_pg_channel_thumb_pane_g1

0x10d3,	// (0x0001bd77) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x10d3,	// (0x0001bd77) single_mobtv_pg_channel_thumb_pane_g2

0x10df,	// (0x0001bd83) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x10df,	// (0x0001bd83) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb65,	// (0x0002a809) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb65,	// (0x0002a809) single_mobtv_pg_channel_thumb_pane_g

0x10eb,	// (0x0001bd8f) single_mobtv_pg_channel_thumb_pane_t1

0x10f9,	// (0x0001bd9d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb6c,	// (0x0002a810) single_mobtv_pg_channel_thumb_pane_t

0xc55f,	// (0x00027203) bg_single_mobtv_pg_channel_table_pane_g1

0xc55f,	// (0x00027203) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00029d53) bg_single_mobtv_pg_channel_table_pane_g

0x1107,	// (0x0001bdab) single_mobtv_pg_channel_table_pane_t1

0x1115,	// (0x0001bdb9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb71,	// (0x0002a815) single_mobtv_pg_channel_table_pane_t

0x9898,	// (0x0002453c) main_mobtv_info_pane_g1_ParamLimits

0x9898,	// (0x0002453c) main_mobtv_info_pane_g1

0x98b4,	// (0x00024558) main_mobtv_info_pane_t1_ParamLimits

0x98b4,	// (0x00024558) main_mobtv_info_pane_t1

0x992c,	// (0x000245d0) main_mobtv_info_pane_t2_ParamLimits

0x992c,	// (0x000245d0) main_mobtv_info_pane_t2

0x0002,

0xfb7b,	// (0x0002a81f) main_mobtv_info_pane_t_ParamLimits

0xfb7b,	// (0x0002a81f) main_mobtv_info_pane_t

0x99bb,	// (0x0002465f) wait_bar_pane_cp05

0x99cd,	// (0x00024671) main_mobtv_loading_pane_g1_ParamLimits

0x99cd,	// (0x00024671) main_mobtv_loading_pane_g1

0x99db,	// (0x0002467f) main_mobtv_loading_pane_g2_ParamLimits

0x99db,	// (0x0002467f) main_mobtv_loading_pane_g2

0x99e7,	// (0x0002468b) main_mobtv_loading_pane_g3_ParamLimits

0x99e7,	// (0x0002468b) main_mobtv_loading_pane_g3

0x0002,

0xfb82,	// (0x0002a826) main_mobtv_loading_pane_g_ParamLimits

0xfb82,	// (0x0002a826) main_mobtv_loading_pane_g

0x1123,	// (0x0001bdc7) main_mobtv_loading_pane_t1_ParamLimits

0x1123,	// (0x0001bdc7) main_mobtv_loading_pane_t1

0x113b,	// (0x0001bddf) main_mobtv_loading_pane_t2_ParamLimits

0x113b,	// (0x0001bddf) main_mobtv_loading_pane_t2

0x0001,

0xfb89,	// (0x0002a82d) main_mobtv_loading_pane_t_ParamLimits

0xfb89,	// (0x0002a82d) main_mobtv_loading_pane_t

0x99f5,	// (0x00024699) wait_bar_pane_cp06_ParamLimits

0x99f5,	// (0x00024699) wait_bar_pane_cp06

0x115f,	// (0x0001be03) main_mobtv_programe_curr_pane_t1

0x116d,	// (0x0001be11) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb8e,	// (0x0002a832) main_mobtv_programe_curr_pane_t

0x117b,	// (0x0001be1f) main_mobtv_programe_next_pane_t1

0x1189,	// (0x0001be2d) main_mobtv_programe_next_pane_t2

0x1197,	// (0x0001be3b) main_mobtv_programe_next_pane_t3

0x0002,

0xfb93,	// (0x0002a837) main_mobtv_programe_next_pane_t

0xbe20,	// (0x00026ac4) bg_popup_mobtv_noti_window_pane

0x11a5,	// (0x0001be49) popup_mobtv_noti_window_g1

0x11ad,	// (0x0001be51) popup_mobtv_noti_window_t1

0x11bb,	// (0x0001be5f) popup_mobtv_noti_window_t2

0x0001,

0xfb9a,	// (0x0002a83e) popup_mobtv_noti_window_t

0xc55f,	// (0x00027203) bg_popup_mobtv_noti_window_pane_g1

0x37a5,	// (0x0001e449) sc_clock_pane

0x37a5,	// (0x0001e449) main_fs_bigclock_pane

0x9100,	// (0x00023da4) blid2_tripm_pane_t4_ParamLimits

0x9100,	// (0x00023da4) blid2_tripm_pane_t4

0xc52f,	// (0x000271d3) sc_clock_pane_g1_ParamLimits

0xc52f,	// (0x000271d3) sc_clock_pane_g1

0xc57d,	// (0x00027221) sc_clock_pane_t1_ParamLimits

0xc57d,	// (0x00027221) sc_clock_pane_t1

0xc57d,	// (0x00027221) sc_clock_pane_t2_ParamLimits

0xc57d,	// (0x00027221) sc_clock_pane_t2

0xc57d,	// (0x00027221) sc_clock_pane_t3_ParamLimits

0xc57d,	// (0x00027221) sc_clock_pane_t3

0x0004,

0xfb9f,	// (0x0002a843) sc_clock_pane_t_ParamLimits

0xfb9f,	// (0x0002a843) sc_clock_pane_t

0xa4f8,	// (0x0002519c) main_fs_bigclock_indicator_pane_ParamLimits

0xa4f8,	// (0x0002519c) main_fs_bigclock_indicator_pane

0x9a3c,	// (0x000246e0) main_fs_bigclock_pane_g1_ParamLimits

0x9a3c,	// (0x000246e0) main_fs_bigclock_pane_g1

0xa504,	// (0x000251a8) main_fs_bigclock_pane_t1_ParamLimits

0xa504,	// (0x000251a8) main_fs_bigclock_pane_t1

0xa516,	// (0x000251ba) main_fs_bigclock_pane_t2_ParamLimits

0xa516,	// (0x000251ba) main_fs_bigclock_pane_t2

0xa52a,	// (0x000251ce) main_fs_bigclock_pane_t3_ParamLimits

0xa52a,	// (0x000251ce) main_fs_bigclock_pane_t3

0x0002,

0xfd35,	// (0x0002a9d9) main_fs_bigclock_pane_t_ParamLimits

0xfd35,	// (0x0002a9d9) main_fs_bigclock_pane_t

0x1cdc,	// (0x0001c980) main_fs_bigclock_indicator_pane_g1

0x0eda,	// (0x0001bb7e) ncim_query_content_pane_g2_ParamLimits

0x0eda,	// (0x0001bb7e) ncim_query_content_pane_g2

0x0001,

0xfb2c,	// (0x0002a7d0) ncim_query_content_pane_g_ParamLimits

0xfb2c,	// (0x0002a7d0) ncim_query_content_pane_g

0xc57d,	// (0x00027221) sc_clock_pane_t4_ParamLimits

0xc57d,	// (0x00027221) sc_clock_pane_t4

0x3bfb,	// (0x0001e89f) main_radioblah_pane

0x44bd,	// (0x0001f161) cell_call4_button_pane_t1_copy1_ParamLimits

0x44bd,	// (0x0001f161) cell_call4_button_pane_t1_copy1

0x968b,	// (0x0002432f) main_ncimui_pane_t1_ParamLimits

0x968b,	// (0x0002432f) main_ncimui_pane_t1

0x96a5,	// (0x00024349) main_ncimui_pane_t2_ParamLimits

0x96a5,	// (0x00024349) main_ncimui_pane_t2

0x0002,

0xfb25,	// (0x0002a7c9) main_ncimui_pane_t_ParamLimits

0xfb25,	// (0x0002a7c9) main_ncimui_pane_t

0xd2a7,	// (0x00027f4b) main_radioblah_anim_pane_ParamLimits

0xd2a7,	// (0x00027f4b) main_radioblah_anim_pane

0xd2a7,	// (0x00027f4b) main_radioblah_info_pane_ParamLimits

0xd2a7,	// (0x00027f4b) main_radioblah_info_pane

0xd2b5,	// (0x00027f59) main_radioblah_pane_t1_ParamLimits

0xd2b5,	// (0x00027f59) main_radioblah_pane_t1

0xd2b5,	// (0x00027f59) main_radioblah_pane_t2_ParamLimits

0xd2b5,	// (0x00027f59) main_radioblah_pane_t2

0x0003,

0xfbc0,	// (0x0002a864) main_radioblah_pane_t_ParamLimits

0xfbc0,	// (0x0002a864) main_radioblah_pane_t

0xc513,	// (0x000271b7) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc513,	// (0x000271b7) main_radioblah_rocker_ctrl_pane

0xe6fd,	// (0x000293a1) main_radioblah_info_pane_t1_ParamLimits

0xe6fd,	// (0x000293a1) main_radioblah_info_pane_t1

0x1331,	// (0x0001bfd5) main_radioblah_info_pane_t2_ParamLimits

0x1331,	// (0x0001bfd5) main_radioblah_info_pane_t2

0x0003,

0xfbc9,	// (0x0002a86d) main_radioblah_info_pane_t_ParamLimits

0xfbc9,	// (0x0002a86d) main_radioblah_info_pane_t

0xc55f,	// (0x00027203) main_radioblah_rocker_ctrl_pane_g1

0xc55f,	// (0x00027203) main_radioblah_rocker_ctrl_pane_g2

0xc55f,	// (0x00027203) main_radioblah_rocker_ctrl_pane_g3

0xc55f,	// (0x00027203) main_radioblah_rocker_ctrl_pane_g4

0xc55f,	// (0x00027203) main_radioblah_rocker_ctrl_pane_g5

0xc55f,	// (0x00027203) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd2,	// (0x0002a876) main_radioblah_rocker_ctrl_pane_g

0x9631,	// (0x000242d5) main_cset_text2_pane_t1_copy1_ParamLimits

0x4538,	// (0x0001f1dc) cam4_image_uncrop_qvga_pane

0x4655,	// (0x0001f2f9) vid4_image_uncrop_qcif_pane

0x4c57,	// (0x0001f8fb) cam6_image_uncrop_qvga_pane_ParamLimits

0x4c57,	// (0x0001f8fb) cam6_image_uncrop_qvga_pane

0x0ba0,	// (0x0001b844) vid6_image_uncrop_qcif_pane_ParamLimits

0x0ba0,	// (0x0001b844) vid6_image_uncrop_qcif_pane

0xbe20,	// (0x00026ac4) bg_popup_preview_window_pane_cp03

0x0e8c,	// (0x0001bb30) list_cset_text2_pane

0x0e94,	// (0x0001bb38) main_cset6_text2_pane_g1

0x0e9c,	// (0x0001bb40) main_cset6_text2_pane_t1

0x9a80,	// (0x00024724) list_cset_text2_pane_t1_ParamLimits

0x9a80,	// (0x00024724) list_cset_text2_pane_t1

0x3bfb,	// (0x0001e89f) main_radioblah_pane_ParamLimits

0x99a7,	// (0x0002464b) main_mobtv_info_pane_t3_ParamLimits

0x99a7,	// (0x0002464b) main_mobtv_info_pane_t3

0xd2c9,	// (0x00027f6d) main_radioblah_pane_g1

0x1301,	// (0x0001bfa5) main_radioblah_info_pane_g1

0xc57d,	// (0x00027221) main_radioblah_info_pane_t3_ParamLimits

0xc57d,	// (0x00027221) main_radioblah_info_pane_t3

0x6592,	// (0x00021236) highlight_cell_cale_month_pane_ParamLimits

0x6592,	// (0x00021236) highlight_cell_cale_month_pane

0x37a5,	// (0x0001e449) main_phob_fisheye_pane

0xec59,	// (0x000298fd) scroll_pane_cp0031_ParamLimits

0xec59,	// (0x000298fd) scroll_pane_cp0031

0x0cae,	// (0x0001b952) wait_bar_pane_cp08_ParamLimits

0x93fc,	// (0x000240a0) cset_list_set_pane_copy1_ParamLimits

0x1380,	// (0x0001c024) highlight_cell_cale_month_pane_g1

0x9aa1,	// (0x00024745) highlight_cell_cale_month_pane_t1

0x089e,	// (0x0001b542) list_gen_pane_cp01

0x03cf,	// (0x0001b073) scroll_pane_01

0x9aaf,	// (0x00024753) list_single_double_fisheye_pane

0x9ab8,	// (0x0002475c) list_double_fisheye_pane_g1_ParamLimits

0x9ab8,	// (0x0002475c) list_double_fisheye_pane_g1

0x9ac4,	// (0x00024768) list_double_fisheye_pane_g2_ParamLimits

0x9ac4,	// (0x00024768) list_double_fisheye_pane_g2

0x9ad8,	// (0x0002477c) list_double_fisheye_pane_g3_ParamLimits

0x9ad8,	// (0x0002477c) list_double_fisheye_pane_g3

0x0004,

0xfbdf,	// (0x0002a883) list_double_fisheye_pane_g_ParamLimits

0xfbdf,	// (0x0002a883) list_double_fisheye_pane_g

0x9b01,	// (0x000247a5) list_double_fisheye_pane_t1_ParamLimits

0x9b01,	// (0x000247a5) list_double_fisheye_pane_t1

0x9b1c,	// (0x000247c0) list_double_fisheye_pane_t2_ParamLimits

0x9b1c,	// (0x000247c0) list_double_fisheye_pane_t2

0x0001,

0xfbea,	// (0x0002a88e) list_double_fisheye_pane_t_ParamLimits

0xfbea,	// (0x0002a88e) list_double_fisheye_pane_t

0x37a5,	// (0x0001e449) main_call5_pane

0xc513,	// (0x000271b7) sc_swipe_pane_ParamLimits

0xc513,	// (0x000271b7) sc_swipe_pane

0x9b4a,	// (0x000247ee) call5_image_pane_ParamLimits

0x9b4a,	// (0x000247ee) call5_image_pane

0x9b5a,	// (0x000247fe) call5_swipe_1_pane_ParamLimits

0x9b5a,	// (0x000247fe) call5_swipe_1_pane

0x9b66,	// (0x0002480a) call5_swipe_2_pane_ParamLimits

0x9b66,	// (0x0002480a) call5_swipe_2_pane

0x9b80,	// (0x00024824) popup_call5_audio_first_window_ParamLimits

0x9b80,	// (0x00024824) popup_call5_audio_first_window

0xc521,	// (0x000271c5) call5_swipe_1_pane_g1_ParamLimits

0xc521,	// (0x000271c5) call5_swipe_1_pane_g1

0x1388,	// (0x0001c02c) call5_swipe_1_pane_g2_ParamLimits

0x1388,	// (0x0001c02c) call5_swipe_1_pane_g2

0x0001,

0xfbef,	// (0x0002a893) call5_swipe_1_pane_g_ParamLimits

0xfbef,	// (0x0002a893) call5_swipe_1_pane_g

0x1394,	// (0x0001c038) call5_swipe_1_pane_t1_ParamLimits

0x1394,	// (0x0001c038) call5_swipe_1_pane_t1

0xc521,	// (0x000271c5) call5_swipe_2_pane_g1_ParamLimits

0xc521,	// (0x000271c5) call5_swipe_2_pane_g1

0x13a9,	// (0x0001c04d) call5_swipe_2_pane_g2_ParamLimits

0x13a9,	// (0x0001c04d) call5_swipe_2_pane_g2

0x0001,

0xfbf4,	// (0x0002a898) call5_swipe_2_pane_g_ParamLimits

0xfbf4,	// (0x0002a898) call5_swipe_2_pane_g

0x13b5,	// (0x0001c059) call5_swipe_2_pane_t1_ParamLimits

0x13b5,	// (0x0001c059) call5_swipe_2_pane_t1

0xc521,	// (0x000271c5) sc_swipe_pane_g1_ParamLimits

0xc521,	// (0x000271c5) sc_swipe_pane_g1

0xc52f,	// (0x000271d3) sc_swipe_pane_g2_ParamLimits

0xc52f,	// (0x000271d3) sc_swipe_pane_g2

0x0001,

0xfbf9,	// (0x0002a89d) sc_swipe_pane_g_ParamLimits

0xfbf9,	// (0x0002a89d) sc_swipe_pane_g

0xc569,	// (0x0002720d) sc_swipe_pane_t1_ParamLimits

0xc569,	// (0x0002720d) sc_swipe_pane_t1

0x37a5,	// (0x0001e449) main_cmail_launcher_pane

0x9b8e,	// (0x00024832) aid_size_cell_cmail_l_ParamLimits

0x9b8e,	// (0x00024832) aid_size_cell_cmail_l

0x9b9c,	// (0x00024840) grid_cmail_l_pane_ParamLimits

0x9b9c,	// (0x00024840) grid_cmail_l_pane

0x9bac,	// (0x00024850) cell_cmail_l_pane_ParamLimits

0x9bac,	// (0x00024850) cell_cmail_l_pane

0x13ca,	// (0x0001c06e) cell_cmail_l_pane_g1_ParamLimits

0x13ca,	// (0x0001c06e) cell_cmail_l_pane_g1

0x13d6,	// (0x0001c07a) cell_cmail_l_pane_t1_ParamLimits

0x13d6,	// (0x0001c07a) cell_cmail_l_pane_t1

0x13ec,	// (0x0001c090) cell_cmail_l_pane_t2_ParamLimits

0x13ec,	// (0x0001c090) cell_cmail_l_pane_t2

0x0001,

0xfbfe,	// (0x0002a8a2) cell_cmail_l_pane_t_ParamLimits

0xfbfe,	// (0x0002a8a2) cell_cmail_l_pane_t

0xc315,	// (0x00026fb9) grid_highlight_pane_cp018_ParamLimits

0xc315,	// (0x00026fb9) grid_highlight_pane_cp018

0x3608,	// (0x0001e2ac) main2_pane_ParamLimits

0x3608,	// (0x0001e2ac) main2_pane

0xc64c,	// (0x000272f0) popup_sp_fs_action_menu_bg_pane_g1

0xc654,	// (0x000272f8) popup_sp_fs_action_menu_bg_pane_g2

0xc65c,	// (0x00027300) popup_sp_fs_action_menu_bg_pane_g3

0xc664,	// (0x00027308) popup_sp_fs_action_menu_bg_pane_g4

0xc66c,	// (0x00027310) popup_sp_fs_action_menu_bg_pane_g5

0xc674,	// (0x00027318) popup_sp_fs_action_menu_bg_pane_g6

0xc67c,	// (0x00027320) popup_sp_fs_action_menu_bg_pane_g7

0xc684,	// (0x00027328) popup_sp_fs_action_menu_bg_pane_g8

0xc68c,	// (0x00027330) popup_sp_fs_action_menu_bg_pane_g9

0xc694,	// (0x00027338) popup_sp_fs_action_menu_bg_pane_g10

0xc694,	// (0x00027338) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00029da4) popup_sp_fs_action_menu_bg_pane_g

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g3_g1

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g3_g2

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00029e52) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00029e52) list_medium_line_x2_t3_g3_g

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g3_t1

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g3_t2

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00029e59) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00029e59) list_medium_line_x2_t3_g3_t

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g2_g1

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00029e60) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00029e60) list_medium_line_x2_t3_g2_g

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g2_t1

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g2_t2

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00029e59) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00029e59) list_medium_line_x2_t3_g2_t

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g4_g1

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g4_g2

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g4_g3

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00029e65) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00029e65) list_medium_line_x2_t4_g4_g

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g4_t1

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g4_t2

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g4_t3

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00029e6e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00029e6e) list_medium_line_x2_t4_g4_t

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g4_g1

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g4_g2

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g4_g3

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00029e65) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00029e65) list_medium_line_x2_t2_g4_g

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g4_t1

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x00029ed5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x00029ed5) list_medium_line_x2_t2_g4_t

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g3_g1

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g3_g2

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00029e52) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00029e52) list_medium_line_x2_t2_g3_g

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g3_t1

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x00029ed5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x00029ed5) list_medium_line_x2_t2_g3_t

0x6731,	// (0x000213d5) main_sp_fs_list_pane_ParamLimits

0x6731,	// (0x000213d5) main_sp_fs_list_pane

0x673d,	// (0x000213e1) sp_fs_scroll_pane_ParamLimits

0x673d,	// (0x000213e1) sp_fs_scroll_pane

0xccb5,	// (0x00027959) list_medium_line_x2_t3_t1

0xccb5,	// (0x00027959) list_medium_line_x2_t3_t2

0xccb5,	// (0x00027959) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x00029f20) list_medium_line_x2_t3_t

0xccb5,	// (0x00027959) list_medium_line_x3_t4_t1

0xccb5,	// (0x00027959) list_medium_line_x3_t4_t2

0xccb5,	// (0x00027959) list_medium_line_x3_t4_t3

0xccb5,	// (0x00027959) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00029f27) list_medium_line_x3_t4_t

0xccb5,	// (0x00027959) list_medium_line_x4_t5_t1

0xccb5,	// (0x00027959) list_medium_line_x4_t5_t2

0xccb5,	// (0x00027959) list_medium_line_x4_t5_t3

0xccb5,	// (0x00027959) list_medium_line_x4_t5_t4

0xccb5,	// (0x00027959) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x00029f30) list_medium_line_x4_t5_t

0xc521,	// (0x000271c5) list_medium_line_t4_g4_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t4_g4_g1

0xc521,	// (0x000271c5) list_medium_line_t4_g4_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t4_g4_g2

0xc521,	// (0x000271c5) list_medium_line_t4_g4_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t4_g4_g3

0xc521,	// (0x000271c5) list_medium_line_t4_g4_g4_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00029e65) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00029e65) list_medium_line_t4_g4_g

0xc569,	// (0x0002720d) list_medium_line_t4_g4_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t4_g4_t1

0xc569,	// (0x0002720d) list_medium_line_t4_g4_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t4_g4_t2

0xc569,	// (0x0002720d) list_medium_line_t4_g4_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t4_g4_t3

0xc569,	// (0x0002720d) list_medium_line_t4_g4_t4_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00029e6e) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00029e6e) list_medium_line_t4_g4_t

0x67c1,	// (0x00021465) chi_dic_find_pane_g1

0x3c17,	// (0x0001e8bb) main_tport_pane

0xccb5,	// (0x00027959) list_medium_line_plain_t1

0xc521,	// (0x000271c5) list_medium_line_t2_g2_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t2_g2_g1

0xc521,	// (0x000271c5) list_medium_line_t2_g2_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00029e60) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00029e60) list_medium_line_t2_g2_g

0xc569,	// (0x0002720d) list_medium_line_t2_g2_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t2_g2_t1

0xc569,	// (0x0002720d) list_medium_line_t2_g2_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x00029ed5) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x00029ed5) list_medium_line_t2_g2_t

0x0912,	// (0x0001b5b6) aid_sp_fs_list_icon_a_sm

0x091a,	// (0x0001b5be) aid_sp_fs_list_icon_d

0x0922,	// (0x0001b5c6) aid_sp_fs_text_primary

0x092b,	// (0x0001b5cf) aid_sp_fs_text_secondary

0xbe20,	// (0x00026ac4) list_medium_line

0xbe20,	// (0x00026ac4) list_medium_line_g2

0xbe20,	// (0x00026ac4) list_medium_line_g3

0xbe20,	// (0x00026ac4) list_medium_line_plain

0xbe20,	// (0x00026ac4) list_medium_line_plain_t2

0xbe20,	// (0x00026ac4) list_medium_line_plain_t3

0xbe20,	// (0x00026ac4) list_medium_line_right_icon

0xbe20,	// (0x00026ac4) list_medium_line_right_iconx2

0xbe20,	// (0x00026ac4) list_medium_line_t2

0xbe20,	// (0x00026ac4) list_medium_line_t2_g2

0xbe20,	// (0x00026ac4) list_medium_line_t2_g3

0xbe20,	// (0x00026ac4) list_medium_line_t2_right_icon

0xbe20,	// (0x00026ac4) list_medium_line_t2_right_iconx2

0xbe20,	// (0x00026ac4) list_medium_line_t3

0xbe20,	// (0x00026ac4) list_medium_line_t3_g2

0xbe20,	// (0x00026ac4) list_medium_line_t3_g3

0xbe20,	// (0x00026ac4) list_medium_line_t3_right_iconx2

0xbe20,	// (0x00026ac4) list_medium_line_t4_g4

0xbe20,	// (0x00026ac4) list_medium_line_x2

0xbe20,	// (0x00026ac4) list_medium_line_x2_t2_g2

0xbe20,	// (0x00026ac4) list_medium_line_x2_t2_g3

0xbe20,	// (0x00026ac4) list_medium_line_x2_t2_g4

0xbe20,	// (0x00026ac4) list_medium_line_x2_t3

0xbe20,	// (0x00026ac4) list_medium_line_x2_t3_g2

0xbe20,	// (0x00026ac4) list_medium_line_x2_t3_g3

0xbe20,	// (0x00026ac4) list_medium_line_x2_t3_g4

0xbe20,	// (0x00026ac4) list_medium_line_x2_t4_g2

0xbe20,	// (0x00026ac4) list_medium_line_x2_t4_g4

0xbe20,	// (0x00026ac4) list_medium_line_x3

0xbe20,	// (0x00026ac4) list_medium_line_x3_t4

0xbe20,	// (0x00026ac4) list_medium_line_x3_t4_g4

0xbe20,	// (0x00026ac4) list_medium_line_x4_t4

0xbe20,	// (0x00026ac4) list_medium_line_x4_t4_g7

0xbe20,	// (0x00026ac4) list_medium_line_x4_t5

0x8f85,	// (0x00023c29) list_single_fs_dyc_pane_ParamLimits

0x8f85,	// (0x00023c29) list_single_fs_dyc_pane

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g1

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g2

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g3

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g4

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g5

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x4_t4_g7_g6

0xc52f,	// (0x000271d3) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc52f,	// (0x000271d3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb06,	// (0x0002a7aa) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb06,	// (0x0002a7aa) list_medium_line_x4_t4_g7_g

0xc569,	// (0x0002720d) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x4_t4_g7_t1

0xc569,	// (0x0002720d) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x4_t4_g7_t2

0xc569,	// (0x0002720d) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x4_t4_g7_t3

0xc57d,	// (0x00027221) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc57d,	// (0x00027221) list_medium_line_x4_t4_g7_t4

0xc57d,	// (0x00027221) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc57d,	// (0x00027221) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb15,	// (0x0002a7b9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb15,	// (0x0002a7b9) list_medium_line_x4_t4_g7_t

0x9614,	// (0x000242b8) list_single_dyc_row_pane_ParamLimits

0x9614,	// (0x000242b8) list_single_dyc_row_pane

0x9b3e,	// (0x000247e2) call5_gesture_pane_ParamLimits

0x9b3e,	// (0x000247e2) call5_gesture_pane

0x9b72,	// (0x00024816) call5_windows_pane_ParamLimits

0x9b72,	// (0x00024816) call5_windows_pane

0x9bc5,	// (0x00024869) call5_swipe_1_pane_cp_ParamLimits

0x9bc5,	// (0x00024869) call5_swipe_1_pane_cp

0x9bd1,	// (0x00024875) call5_swipe_2_pane_cp_ParamLimits

0x9bd1,	// (0x00024875) call5_swipe_2_pane_cp

0xc786,	// (0x0002742a) call5_image_pane_cp

0x9bdd,	// (0x00024881) popup_call5_audio_first_window_cp_ParamLimits

0x9bdd,	// (0x00024881) popup_call5_audio_first_window_cp

0x1409,	// (0x0001c0ad) call5_swipe_1_pane_g1_cp_ParamLimits

0x1409,	// (0x0001c0ad) call5_swipe_1_pane_g1_cp

0x1416,	// (0x0001c0ba) call5_swipe_1_pane_g2_cp

0x141e,	// (0x0001c0c2) call5_swipe_1_pane_t1_cp_ParamLimits

0x141e,	// (0x0001c0c2) call5_swipe_1_pane_t1_cp

0x1409,	// (0x0001c0ad) call5_swipe_2_pane_g1_cp_ParamLimits

0x1409,	// (0x0001c0ad) call5_swipe_2_pane_g1_cp

0x1433,	// (0x0001c0d7) call5_swipe_2_pane_g2_cp

0x143b,	// (0x0001c0df) call5_swipe_2_pane_t1_cp_ParamLimits

0x143b,	// (0x0001c0df) call5_swipe_2_pane_t1_cp

0xc315,	// (0x00026fb9) main_sp_fs_email_pane

0x1450,	// (0x0001c0f4) main_sp_fs_listscroll_pane_te

0x9beb,	// (0x0002488f) popup_sp_fs_action_menu_pane_ParamLimits

0x9beb,	// (0x0002488f) popup_sp_fs_action_menu_pane

0xc55f,	// (0x00027203) bg_sp_fs_ctrlbar_pane_g1

0x1459,	// (0x0001c0fd) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1462,	// (0x0001c106) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe473,	// (0x00029117) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc55f,	// (0x00027203) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc03,	// (0x0002a8a7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe45c,	// (0x00029100) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe45c,	// (0x00029100) bg_sp_fs_ctrlbar_ddmenu_pane

0x146b,	// (0x0001c10f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x146b,	// (0x0001c10f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1477,	// (0x0001c11b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1477,	// (0x0001c11b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc0c,	// (0x0002a8b0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc0c,	// (0x0002a8b0) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1483,	// (0x0001c127) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1483,	// (0x0001c127) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc55f,	// (0x00027203) list_medium_line_t2_right_icon_g1

0xccb5,	// (0x00027959) list_medium_line_t2_right_icon_t1

0xccb5,	// (0x00027959) list_medium_line_t2_right_icon_t2

0x0001,

0xfc11,	// (0x0002a8b5) list_medium_line_t2_right_icon_t

0xd2a7,	// (0x00027f4b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd2a7,	// (0x00027f4b) bg_sp_fs_ctrlbar_pane

0x9c72,	// (0x00024916) main_sp_fs_ctrlbar_button_pane_cp01

0x9c7a,	// (0x0002491e) main_sp_fs_ctrlbar_ddmenu_pane

0x14d5,	// (0x0001c179) main_sp_fs_ctrlbar_pane_g1

0x14e1,	// (0x0001c185) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc16,	// (0x0002a8ba) main_sp_fs_ctrlbar_pane_g

0x9cb6,	// (0x0002495a) main_sp_fs_ctrlbar_pane_t1

0x9cf1,	// (0x00024995) main_sp_fs_ctrlbar_pane

0x9d07,	// (0x000249ab) main_sp_fs_listscroll_pane_te_cp01

0x9d22,	// (0x000249c6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9d22,	// (0x000249c6) popup_sp_fs_action_menu_pane_cp01

0xc315,	// (0x00026fb9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc315,	// (0x00026fb9) bg_sp_fs_highlight_list_pane_cp01

0x1508,	// (0x0001c1ac) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1508,	// (0x0001c1ac) sp_fs_action_menu_list_gene_pane_g1

0x1517,	// (0x0001c1bb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1517,	// (0x0001c1bb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc24,	// (0x0002a8c8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc24,	// (0x0002a8c8) sp_fs_action_menu_list_gene_pane_g

0x1524,	// (0x0001c1c8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1524,	// (0x0001c1c8) sp_fs_action_menu_list_gene_pane_t1

0x153c,	// (0x0001c1e0) sp_fs_action_menu_list_gene_pane_ParamLimits

0x153c,	// (0x0001c1e0) sp_fs_action_menu_list_gene_pane

0x155b,	// (0x0001c1ff) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x155b,	// (0x0001c1ff) popup_sp_fs_action_menu_bg_pane

0x1569,	// (0x0001c20d) sp_fs_action_menu_list_pane_ParamLimits

0x1569,	// (0x0001c20d) sp_fs_action_menu_list_pane

0x9d42,	// (0x000249e6) sp_fs_scroll_pane_cp01_ParamLimits

0x9d42,	// (0x000249e6) sp_fs_scroll_pane_cp01

0xccb5,	// (0x00027959) list_medium_line_plain_t2_t1

0xccb5,	// (0x00027959) list_medium_line_plain_t2_t2

0x0001,

0xfc11,	// (0x0002a8b5) list_medium_line_plain_t2_t

0xccb5,	// (0x00027959) list_medium_line_plain_t3_t1

0xccb5,	// (0x00027959) list_medium_line_plain_t3_t2

0xccb5,	// (0x00027959) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x00029f20) list_medium_line_plain_t3_t

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g2_g1

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00029e60) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00029e60) list_medium_line_x2_t2_g2_g

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g2_t1

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x00029ed5) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x00029ed5) list_medium_line_x2_t2_g2_t

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g2_g1

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00029e60) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00029e60) list_medium_line_x2_t4_g2_g

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g2_t1

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g2_t2

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g2_t3

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00029e6e) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00029e6e) list_medium_line_x2_t4_g2_t

0xc55f,	// (0x00027203) list_medium_line_t3_right_iconx2_g1

0xc55f,	// (0x00027203) list_medium_line_t3_right_iconx2_g2

0xc55f,	// (0x00027203) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x0002a03c) list_medium_line_t3_right_iconx2_g

0xccb5,	// (0x00027959) list_medium_line_t3_right_iconx2_t1

0xccb5,	// (0x00027959) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc11,	// (0x0002a8b5) list_medium_line_t3_right_iconx2_t

0xc521,	// (0x000271c5) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x3_t4_g4_g1

0xc521,	// (0x000271c5) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x3_t4_g4_g2

0xc521,	// (0x000271c5) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x3_t4_g4_g3

0xc521,	// (0x000271c5) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00029e65) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00029e65) list_medium_line_x3_t4_g4_g

0xc569,	// (0x0002720d) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x3_t4_g4_t1

0xc569,	// (0x0002720d) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x3_t4_g4_t2

0xc569,	// (0x0002720d) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x3_t4_g4_t3

0xc569,	// (0x0002720d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00029e6e) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00029e6e) list_medium_line_x3_t4_g4_t

0x9d68,	// (0x00024a0c) list_single_dyc_row_text_pane_t1_ParamLimits

0x9d68,	// (0x00024a0c) list_single_dyc_row_text_pane_t1

0x9d9f,	// (0x00024a43) list_single_dyc_row_text_pane_t2_ParamLimits

0x9d9f,	// (0x00024a43) list_single_dyc_row_text_pane_t2

0x1589,	// (0x0001c22d) list_single_dyc_row_text_pane_t3_ParamLimits

0x1589,	// (0x0001c22d) list_single_dyc_row_text_pane_t3

0x0005,

0xfc29,	// (0x0002a8cd) list_single_dyc_row_text_pane_t_ParamLimits

0xfc29,	// (0x0002a8cd) list_single_dyc_row_text_pane_t

0x15ad,	// (0x0001c251) list_single_dyc_row_pane_g1_ParamLimits

0x15ad,	// (0x0001c251) list_single_dyc_row_pane_g1

0x15b9,	// (0x0001c25d) list_single_dyc_row_pane_g2_ParamLimits

0x15b9,	// (0x0001c25d) list_single_dyc_row_pane_g2

0x15c5,	// (0x0001c269) list_single_dyc_row_pane_g3_ParamLimits

0x15c5,	// (0x0001c269) list_single_dyc_row_pane_g3

0x15d1,	// (0x0001c275) list_single_dyc_row_pane_g4_ParamLimits

0x15d1,	// (0x0001c275) list_single_dyc_row_pane_g4

0x0003,

0xfc36,	// (0x0002a8da) list_single_dyc_row_pane_g_ParamLimits

0xfc36,	// (0x0002a8da) list_single_dyc_row_pane_g

0x15dd,	// (0x0001c281) list_single_dyc_row_text_pane_ParamLimits

0x15dd,	// (0x0001c281) list_single_dyc_row_text_pane

0xbe20,	// (0x00026ac4) bg_sp_fs_scroll_pane

0x15fc,	// (0x0001c2a0) thumb_sp_fs_scroll_pane

0xc521,	// (0x000271c5) list_medium_line_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_g1

0xc569,	// (0x0002720d) list_medium_line_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t1

0xc521,	// (0x000271c5) list_medium_line_x2_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_g1

0xc521,	// (0x000271c5) list_medium_line_x2_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00029e60) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00029e60) list_medium_line_x2_g

0xc569,	// (0x0002720d) list_medium_line_x2_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t1

0xc521,	// (0x000271c5) list_medium_line_x3_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x3_g1

0x1605,	// (0x0001c2a9) list_medium_line_x3_g2_ParamLimits

0x1605,	// (0x0001c2a9) list_medium_line_x3_g2

0x0001,

0xfc3f,	// (0x0002a8e3) list_medium_line_x3_g_ParamLimits

0xfc3f,	// (0x0002a8e3) list_medium_line_x3_g

0x1613,	// (0x0001c2b7) list_medium_line_x3_t1_ParamLimits

0x1613,	// (0x0001c2b7) list_medium_line_x3_t1

0x1627,	// (0x0001c2cb) thumb_sp_fs_scroll_pane_g1

0x1630,	// (0x0001c2d4) thumb_sp_fs_scroll_pane_g2

0x1639,	// (0x0001c2dd) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x0002a8e8) thumb_sp_fs_scroll_pane_g

0x1627,	// (0x0001c2cb) bg_sp_fs_scroll_pane_g1

0x1630,	// (0x0001c2d4) bg_sp_fs_scroll_pane_g2

0x1639,	// (0x0001c2dd) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x0002a8e8) bg_sp_fs_scroll_pane_g

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g4_g1

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g4_g2

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g4_g3

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00029e65) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00029e65) list_medium_line_x2_t3_g4_g

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g4_t1

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g4_t2

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00029e59) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00029e59) list_medium_line_x2_t3_g4_t

0xc521,	// (0x000271c5) list_medium_line_g2_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_g2_g1

0xc521,	// (0x000271c5) list_medium_line_g2_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00029e60) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00029e60) list_medium_line_g2_g

0xc569,	// (0x0002720d) list_medium_line_g2_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_g2_t1

0xc521,	// (0x000271c5) list_medium_line_t3_g2_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t3_g2_g1

0xc521,	// (0x000271c5) list_medium_line_t3_g2_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00029e60) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00029e60) list_medium_line_t3_g2_g

0xc569,	// (0x0002720d) list_medium_line_t3_g2_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t3_g2_t1

0xc569,	// (0x0002720d) list_medium_line_t3_g2_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t3_g2_t2

0xc569,	// (0x0002720d) list_medium_line_t3_g2_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00029e59) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00029e59) list_medium_line_t3_g2_t

0xc55f,	// (0x00027203) list_medium_line_right_icon_g1

0xccb5,	// (0x00027959) list_medium_line_right_icon_t1

0xc521,	// (0x000271c5) list_medium_line_t2_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t2_g1

0xc569,	// (0x0002720d) list_medium_line_t2_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t2_t1

0xc569,	// (0x0002720d) list_medium_line_t2_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x00029ed5) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x00029ed5) list_medium_line_t2_t

0xc521,	// (0x000271c5) list_medium_line_t3_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t3_g1

0xc569,	// (0x0002720d) list_medium_line_t3_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t3_t1

0xc569,	// (0x0002720d) list_medium_line_t3_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t3_t2

0xc569,	// (0x0002720d) list_medium_line_t3_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00029e59) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00029e59) list_medium_line_t3_t

0xc521,	// (0x000271c5) list_medium_line_g3_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_g3_g1

0xc521,	// (0x000271c5) list_medium_line_g3_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_g3_g2

0xc521,	// (0x000271c5) list_medium_line_g3_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00029e52) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00029e52) list_medium_line_g3_g

0xc569,	// (0x0002720d) list_medium_line_g3_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_g3_t1

0xc521,	// (0x000271c5) list_medium_line_t2_g3_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t2_g3_g1

0xc521,	// (0x000271c5) list_medium_line_t2_g3_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t2_g3_g2

0xc521,	// (0x000271c5) list_medium_line_t2_g3_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00029e52) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00029e52) list_medium_line_t2_g3_g

0xc569,	// (0x0002720d) list_medium_line_t2_g3_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t2_g3_t1

0xc569,	// (0x0002720d) list_medium_line_t2_g3_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x00029ed5) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x00029ed5) list_medium_line_t2_g3_t

0xc521,	// (0x000271c5) list_medium_line_t3_g3_g1_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t3_g3_g1

0xc521,	// (0x000271c5) list_medium_line_t3_g3_g2_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t3_g3_g2

0xc521,	// (0x000271c5) list_medium_line_t3_g3_g3_ParamLimits

0xc521,	// (0x000271c5) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00029e52) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00029e52) list_medium_line_t3_g3_g

0xc569,	// (0x0002720d) list_medium_line_t3_g3_t1_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t3_g3_t1

0xc569,	// (0x0002720d) list_medium_line_t3_g3_t2_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t3_g3_t2

0xc569,	// (0x0002720d) list_medium_line_t3_g3_t3_ParamLimits

0xc569,	// (0x0002720d) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00029e59) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00029e59) list_medium_line_t3_g3_t

0xc55f,	// (0x00027203) list_medium_line_right_iconx2_g1

0xc55f,	// (0x00027203) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00029d53) list_medium_line_right_iconx2_g

0xccb5,	// (0x00027959) list_medium_line_right_iconx2_t1

0xc55f,	// (0x00027203) list_medium_line_t2_right_iconx2_g1

0xc55f,	// (0x00027203) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00029d53) list_medium_line_t2_right_iconx2_g

0xccb5,	// (0x00027959) list_medium_line_t2_right_iconx2_t1

0xccb5,	// (0x00027959) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc11,	// (0x0002a8b5) list_medium_line_t2_right_iconx2_t

0xccb5,	// (0x00027959) list_medium_line_x4_t4_t1

0xccb5,	// (0x00027959) list_medium_line_x4_t4_t2

0xccb5,	// (0x00027959) list_medium_line_x4_t4_t3

0xccb5,	// (0x00027959) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00029f27) list_medium_line_x4_t4_t

0x9eec,	// (0x00024b90) tport_appsw_pane_ParamLimits

0x9eec,	// (0x00024b90) tport_appsw_pane

0x9efa,	// (0x00024b9e) tport_contact_pane_ParamLimits

0x9efa,	// (0x00024b9e) tport_contact_pane

0x9f0a,	// (0x00024bae) tport_listscroll_pane_ParamLimits

0x9f0a,	// (0x00024bae) tport_listscroll_pane

0x9f1a,	// (0x00024bbe) cell_tport_appsw_pane_ParamLimits

0x9f1a,	// (0x00024bbe) cell_tport_appsw_pane

0xc52f,	// (0x000271d3) tport_appsw_pane_g1_ParamLimits

0xc52f,	// (0x000271d3) tport_appsw_pane_g1

0x1642,	// (0x0001c2e6) tport_contact_pane_g1

0x164b,	// (0x0001c2ef) tport_contact_pane_t1

0x1659,	// (0x0001c2fd) tport_contact_pane_t2

0x0001,

0xfc4b,	// (0x0002a8ef) tport_contact_pane_t

0x1667,	// (0x0001c30b) list_tport_pane

0x1670,	// (0x0001c314) scroll_pane_cp_030

0x9f4d,	// (0x00024bf1) cell_tport_appsw_pane_g1

0x9f5d,	// (0x00024c01) cell_tport_appsw_pane_t1

0x9f6b,	// (0x00024c0f) grid_highlight_pane_cp019

0x9f73,	// (0x00024c17) list_tport_double_graphic_pane_ParamLimits

0x9f73,	// (0x00024c17) list_tport_double_graphic_pane

0xc315,	// (0x00026fb9) list_highlight_pane_cp023_ParamLimits

0xc315,	// (0x00026fb9) list_highlight_pane_cp023

0x9f84,	// (0x00024c28) list_tport_double_graphic_pane_g1_ParamLimits

0x9f84,	// (0x00024c28) list_tport_double_graphic_pane_g1

0x9f91,	// (0x00024c35) list_tport_double_graphic_pane_t1_ParamLimits

0x9f91,	// (0x00024c35) list_tport_double_graphic_pane_t1

0x9fa6,	// (0x00024c4a) list_tport_double_graphic_pane_t2_ParamLimits

0x9fa6,	// (0x00024c4a) list_tport_double_graphic_pane_t2

0x0001,

0xfc57,	// (0x0002a8fb) list_tport_double_graphic_pane_t_ParamLimits

0xfc57,	// (0x0002a8fb) list_tport_double_graphic_pane_t

0xbe20,	// (0x00026ac4) main_cale_note_pane

0x4894,	// (0x0001f538) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4894,	// (0x0001f538) cell_vitu2_function_top_wide_pane_cp01

0x99bb,	// (0x0002465f) wait_bar_pane_cp05_ParamLimits

0xc315,	// (0x00026fb9) listscroll_cmail_pane

0x1681,	// (0x0001c325) list_cmail_pane

0x9fb8,	// (0x00024c5c) list_cmail_body_pane

0x9fe0,	// (0x00024c84) list_single_cmail_header_caption_pane

0xa00f,	// (0x00024cb3) list_single_cmail_header_detail_pane_ParamLimits

0xa00f,	// (0x00024cb3) list_single_cmail_header_detail_pane

0x1698,	// (0x0001c33c) list_single_cmail_header_caption_pane_t1

0xa04c,	// (0x00024cf0) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa04c,	// (0x00024cf0) list_single_cmail_header_detail_pane_g1

0x16af,	// (0x0001c353) list_single_cmail_header_detail_pane_g2_ParamLimits

0x16af,	// (0x0001c353) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc5c,	// (0x0002a900) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc5c,	// (0x0002a900) list_single_cmail_header_detail_pane_g

0xa062,	// (0x00024d06) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa062,	// (0x00024d06) list_single_cmail_header_detail_pane_t1

0xa09e,	// (0x00024d42) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa09e,	// (0x00024d42) list_single_cmail_header_editor_pane_bg

0x10bc,	// (0x0001bd60) list_cmail_body_pane_g1

0x16ec,	// (0x0001c390) list_cmail_body_pane_t1

0x028f,	// (0x0001af33) list_single_cmail_header_editor_pane_bg_g1

0xc99f,	// (0x00027643) list_single_cmail_header_editor_pane_bg_g1_copy1

0x029f,	// (0x0001af43) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0297,	// (0x0001af3b) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0567,	// (0x0001b20b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x02bf,	// (0x0001af63) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x02af,	// (0x0001af53) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x02b7,	// (0x0001af5b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc97f,	// (0x00027623) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa0b5,	// (0x00024d59) calenote_gesture_pane_ParamLimits

0xa0b5,	// (0x00024d59) calenote_gesture_pane

0xa0cf,	// (0x00024d73) calenote_window_pane_ParamLimits

0xa0cf,	// (0x00024d73) calenote_window_pane

0x16fa,	// (0x0001c39e) popup_note_window_cp01

0xa0e7,	// (0x00024d8b) calenote_swipe_1_pane_ParamLimits

0xa0e7,	// (0x00024d8b) calenote_swipe_1_pane

0x9bd1,	// (0x00024875) calenote_swipe_2_pane_ParamLimits

0x9bd1,	// (0x00024875) calenote_swipe_2_pane

0x1409,	// (0x0001c0ad) calenote_swipe_1_pane_g1_ParamLimits

0x1409,	// (0x0001c0ad) calenote_swipe_1_pane_g1

0x170c,	// (0x0001c3b0) calenote_swipe_1_pane_g2_ParamLimits

0x170c,	// (0x0001c3b0) calenote_swipe_1_pane_g2

0x0001,

0xfc68,	// (0x0002a90c) calenote_swipe_1_pane_g_ParamLimits

0xfc68,	// (0x0002a90c) calenote_swipe_1_pane_g

0x1718,	// (0x0001c3bc) calenote_swipe_1_pane_t1_ParamLimits

0x1718,	// (0x0001c3bc) calenote_swipe_1_pane_t1

0x1409,	// (0x0001c0ad) calenote_swipe_2_pane_g1_ParamLimits

0x1409,	// (0x0001c0ad) calenote_swipe_2_pane_g1

0x1737,	// (0x0001c3db) calenote_swipe_2_pane_g2_ParamLimits

0x1737,	// (0x0001c3db) calenote_swipe_2_pane_g2

0x0001,

0xfc6d,	// (0x0002a911) calenote_swipe_2_pane_g_ParamLimits

0xfc6d,	// (0x0002a911) calenote_swipe_2_pane_g

0x1743,	// (0x0001c3e7) calenote_swipe_2_pane_t1_ParamLimits

0x1743,	// (0x0001c3e7) calenote_swipe_2_pane_t1

0xbe20,	// (0x00026ac4) main_mup_navstr_pane

0x7c93,	// (0x00022937) main_mup3_pane_t7_ParamLimits

0x7c93,	// (0x00022937) main_mup3_pane_t7

0x40a2,	// (0x0001ed46) main_mp4_pane_g6_ParamLimits

0x40a2,	// (0x0001ed46) main_mp4_pane_g6

0x43ef,	// (0x0001f093) main_image3_pane_t4_ParamLimits

0x43ef,	// (0x0001f093) main_image3_pane_t4

0xa0fa,	// (0x00024d9e) popup_navstr_preview_pane_ParamLimits

0xa0fa,	// (0x00024d9e) popup_navstr_preview_pane

0xa106,	// (0x00024daa) scroll_navstr_pane_ParamLimits

0xa106,	// (0x00024daa) scroll_navstr_pane

0xbe20,	// (0x00026ac4) bg_popup_preview_window_pane_cp04

0x176a,	// (0x0001c40e) popup_navstr_preview_pane_t1

0xa112,	// (0x00024db6) scroll_navstr_pane_g1_ParamLimits

0xa112,	// (0x00024db6) scroll_navstr_pane_g1

0xa11f,	// (0x00024dc3) scroll_navstr_pane_t1_ParamLimits

0xa11f,	// (0x00024dc3) scroll_navstr_pane_t1

0x1703,	// (0x0001c3a7) bg_button_pane_cp014

0x1703,	// (0x0001c3a7) bg_button_pane_cp030

0x9ae4,	// (0x00024788) list_double_fisheye_pane_g4_ParamLimits

0x9ae4,	// (0x00024788) list_double_fisheye_pane_g4

0x9af0,	// (0x00024794) list_double_fisheye_pane_g5_ParamLimits

0x9af0,	// (0x00024794) list_double_fisheye_pane_g5

0x0472,	// (0x0001b116) sp_fs_scroll_pane_cp03

0x14d5,	// (0x0001c179) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x14e1,	// (0x0001c185) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc16,	// (0x0002a8ba) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9cb6,	// (0x0002495a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1690,	// (0x0001c334) sp_fs_scroll_pane_cp02

0xc6c5,	// (0x00027369) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc6c5,	// (0x00027369) popup_sp_fs_calendar_preview_list_single_pane

0xbe20,	// (0x00026ac4) main_cam6_pano_pane

0x3bfb,	// (0x0001e89f) main_mup3_pane_ParamLimits

0xbe20,	// (0x00026ac4) main_phacti_pane

0x9890,	// (0x00024534) bg_button_pane_cp11

0x98a8,	// (0x0002454c) main_mobtv_info_pane_g2_ParamLimits

0x98a8,	// (0x0002454c) main_mobtv_info_pane_g2

0x0001,

0xfb76,	// (0x0002a81a) main_mobtv_info_pane_g_ParamLimits

0xfb76,	// (0x0002a81a) main_mobtv_info_pane_g

0xc57d,	// (0x00027221) sc_clock_pane_t5_ParamLimits

0xc57d,	// (0x00027221) sc_clock_pane_t5

0xd2c9,	// (0x00027f6d) main_radioblah_pane_g1_ParamLimits

0xd2b5,	// (0x00027f59) main_radioblah_pane_t3_ParamLimits

0xd2b5,	// (0x00027f59) main_radioblah_pane_t3

0xd2b5,	// (0x00027f59) main_radioblah_pane_t4_ParamLimits

0xd2b5,	// (0x00027f59) main_radioblah_pane_t4

0xc513,	// (0x000271b7) main_radioblah_text_pane_ParamLimits

0xc513,	// (0x000271b7) main_radioblah_text_pane

0x1301,	// (0x0001bfa5) main_radioblah_info_pane_g1_ParamLimits

0x1345,	// (0x0001bfe9) main_radioblah_info_pane_t4_ParamLimits

0x1345,	// (0x0001bfe9) main_radioblah_info_pane_t4

0xc315,	// (0x00026fb9) main_sp_fs_calendar_pane

0xa131,	// (0x00024dd5) main_phacti_pane_g1

0xa139,	// (0x00024ddd) phacti_note_pane_ParamLimits

0xa139,	// (0x00024ddd) phacti_note_pane

0x1781,	// (0x0001c425) phacti_term_pane_ParamLimits

0x1781,	// (0x0001c425) phacti_term_pane

0x1796,	// (0x0001c43a) phacti_note_pane_t1_ParamLimits

0x1796,	// (0x0001c43a) phacti_note_pane_t1

0x17ad,	// (0x0001c451) phacti_term_pane_g1

0x17b5,	// (0x0001c459) phacti_term_pane_t1_ParamLimits

0x17b5,	// (0x0001c459) phacti_term_pane_t1

0x17df,	// (0x0001c483) popup_sp_fs_calendar_preview_list_single_pane_g1

0x17e7,	// (0x0001c48b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc77,	// (0x0002a91b) popup_sp_fs_calendar_preview_list_single_pane_g

0x17ef,	// (0x0001c493) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x17ef,	// (0x0001c493) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1805,	// (0x0001c4a9) aid_popup_sp_fs_bg_corner_pane

0xc55f,	// (0x00027203) popup_sp_fs_calendar_preview_bg_pane_g1

0xbe20,	// (0x00026ac4) popup_sp_fs_calendar_preview_bg_pane

0x180d,	// (0x0001c4b1) popup_sp_fs_calendar_preview_list_pane

0xd2a7,	// (0x00027f4b) bg_main_sp_fs_cale_pane_ParamLimits

0xd2a7,	// (0x00027f4b) bg_main_sp_fs_cale_pane

0x181e,	// (0x0001c4c2) listscroll_cale_mrui_pane_ParamLimits

0x181e,	// (0x0001c4c2) listscroll_cale_mrui_pane

0x1833,	// (0x0001c4d7) listscroll_sp_fs_schedule_track_pane

0x183c,	// (0x0001c4e0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x183c,	// (0x0001c4e0) main_sp_fs_ctrlbar_pane_cp01

0x184f,	// (0x0001c4f3) main_sp_fs_ribbon_pane

0x1857,	// (0x0001c4fb) popup_sp_fs_cale_preview_window

0xa19c,	// (0x00024e40) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa19c,	// (0x00024e40) list_single_sp_fs_schedule_track_pane

0xc513,	// (0x000271b7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc513,	// (0x000271b7) bg_sp_fs_highlight_list_pane_cp03

0xa1c2,	// (0x00024e66) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa1c2,	// (0x00024e66) list_single_sp_fs_schedule_track_pane_g1

0xa1ce,	// (0x00024e72) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa1ce,	// (0x00024e72) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7c,	// (0x0002a920) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7c,	// (0x0002a920) list_single_sp_fs_schedule_track_pane_g

0xa1da,	// (0x00024e7e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa1da,	// (0x00024e7e) list_single_sp_fs_schedule_track_pane_t1

0xa1f2,	// (0x00024e96) sp_fs_schedule_track_pane_ParamLimits

0xa1f2,	// (0x00024e96) sp_fs_schedule_track_pane

0x1869,	// (0x0001c50d) sp_fs_schedule_track_pane_g1

0x1871,	// (0x0001c515) sp_fs_schedule_track_pane_g2

0x1879,	// (0x0001c51d) sp_fs_schedule_track_pane_g3

0x1881,	// (0x0001c525) sp_fs_schedule_track_pane_g4

0x1889,	// (0x0001c52d) sp_fs_schedule_track_pane_g5

0x0004,

0xfc81,	// (0x0002a925) sp_fs_schedule_track_pane_g

0x028f,	// (0x0001af33) bg_sp_fs_schedule_viewer_highlight_g1

0xc99f,	// (0x00027643) bg_sp_fs_schedule_viewer_highlight_g2

0x0297,	// (0x0001af3b) bg_sp_fs_schedule_viewer_highlight_g3

0x029f,	// (0x0001af43) bg_sp_fs_schedule_viewer_highlight_g4

0x0567,	// (0x0001b20b) bg_sp_fs_schedule_viewer_highlight_g5

0x02af,	// (0x0001af53) bg_sp_fs_schedule_viewer_highlight_g6

0x02b7,	// (0x0001af5b) bg_sp_fs_schedule_viewer_highlight_g7

0x02bf,	// (0x0001af63) bg_sp_fs_schedule_viewer_highlight_g8

0xc97f,	// (0x00027623) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8c,	// (0x0002a930) bg_sp_fs_schedule_viewer_highlight_g

0xbe20,	// (0x00026ac4) bg_main_sp_fs_ribbon_pane

0xa202,	// (0x00024ea6) main_sp_fs_ribbon_pane_g1

0x1891,	// (0x0001c535) main_sp_fs_ribbon_pane_t1

0xa20b,	// (0x00024eaf) main_sp_fs_ribbon_pane_t2

0x18a0,	// (0x0001c544) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc9f,	// (0x0002a943) main_sp_fs_ribbon_pane_t

0x18af,	// (0x0001c553) main_sp_fs_ribbon_scheduler_pane

0x18b7,	// (0x0001c55b) bg_main_sp_fs_ribbon_pane_g1

0x18c0,	// (0x0001c564) bg_main_sp_fs_ribbon_pane_g2

0x18c9,	// (0x0001c56d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca6,	// (0x0002a94a) bg_main_sp_fs_ribbon_pane_g

0x18d1,	// (0x0001c575) main_sp_fs_ribbon_scheduler_pane_g1

0x18da,	// (0x0001c57e) main_sp_fs_ribbon_scheduler_pane_g2

0x18e3,	// (0x0001c587) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcad,	// (0x0002a951) main_sp_fs_ribbon_scheduler_pane_g

0x18ec,	// (0x0001c590) list_cale_mrui_pane

0xa21a,	// (0x00024ebe) sp_fs_scroll_pane_cp07_ParamLimits

0xa21a,	// (0x00024ebe) sp_fs_scroll_pane_cp07

0xa236,	// (0x00024eda) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa236,	// (0x00024eda) bg_sp_fs_schedule_viewer_highlight

0x18f9,	// (0x0001c59d) list_single_sp_fs_schedule_track_pane_cp01

0x1901,	// (0x0001c5a5) list_sp_fs_schedule_track_pane

0x1909,	// (0x0001c5ad) sp_fs_scroll_pane_cp06_ParamLimits

0x1909,	// (0x0001c5ad) sp_fs_scroll_pane_cp06

0xc55f,	// (0x00027203) bgmain_sp_fs_calendar_pane_g1

0xa243,	// (0x00024ee7) list_single_cale_mrui_pane_ParamLimits

0xa243,	// (0x00024ee7) list_single_cale_mrui_pane

0x191b,	// (0x0001c5bf) list_single_cale_mrui_row_pane_ParamLimits

0x191b,	// (0x0001c5bf) list_single_cale_mrui_row_pane

0x1928,	// (0x0001c5cc) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1928,	// (0x0001c5cc) list_single_cale_mrui_row_pane_g1

0x196d,	// (0x0001c611) list_single_cale_mrui_row_pane_t1_ParamLimits

0x196d,	// (0x0001c611) list_single_cale_mrui_row_pane_t1

0xa271,	// (0x00024f15) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa271,	// (0x00024f15) list_single_cale_mrui_row_pane_t2

0x197f,	// (0x0001c623) list_single_cale_mrui_row_pane_t3_ParamLimits

0x197f,	// (0x0001c623) list_single_cale_mrui_row_pane_t3

0x19ae,	// (0x0001c652) list_single_cale_mrui_row_pane_t4_ParamLimits

0x19ae,	// (0x0001c652) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbb,	// (0x0002a95f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbb,	// (0x0002a95f) list_single_cale_mrui_row_pane_t

0xa2d7,	// (0x00024f7b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa2d7,	// (0x00024f7b) list_single_cmail_header_editor_pane_bg_cp01

0xa2ff,	// (0x00024fa3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa2ff,	// (0x00024fa3) list_single_cmail_header_editor_pane_bg_cp02

0x19dd,	// (0x0001c681) main_radioblah_text_pane_t1_ParamLimits

0x19dd,	// (0x0001c681) main_radioblah_text_pane_t1

0x19f7,	// (0x0001c69b) cam6_indi_pane_cp01

0x19ff,	// (0x0001c6a3) cam6_mode_pane_cp01

0x1a07,	// (0x0001c6ab) cam6_pano_pane

0x1a10,	// (0x0001c6b4) cam6_zoom_pane_cp01

0x1a18,	// (0x0001c6bc) cam6_pano_image_pane

0x1a23,	// (0x0001c6c7) cam6_pano_pane_g1

0x10bc,	// (0x0001bd60) cam6_pano_pane_g2

0x1a2c,	// (0x0001c6d0) cam6_pano_pane_g3

0x1a35,	// (0x0001c6d9) cam6_pano_pane_g4

0xeecc,	// (0x00029b70) cam6_pano_pane_g5

0x1a3e,	// (0x0001c6e2) cam6_pano_pane_g6

0x1a48,	// (0x0001c6ec) cam6_pano_pane_g7

0x1a50,	// (0x0001c6f4) cam6_pano_pane_g8

0x1a59,	// (0x0001c6fd) cam6_pano_pane_g9

0x0008,

0xfcc4,	// (0x0002a968) cam6_pano_pane_g

0xbe20,	// (0x00026ac4) main_browser_tag_pane

0x1762,	// (0x0001c406) grid_navstr_albumart_pane

0x1a64,	// (0x0001c708) cell_navstr_albumart_pane_ParamLimits

0x1a64,	// (0x0001c708) cell_navstr_albumart_pane

0x1a84,	// (0x0001c728) cell_navstr_albumart_pane_g1

0xe2ec,	// (0x00028f90) cell_navstr_albumart_pane_g2

0xe2fc,	// (0x00028fa0) cell_navstr_albumart_pane_g3

0xe2f4,	// (0x00028f98) cell_navstr_albumart_pane_g4

0x0003,

0xfcd7,	// (0x0002a97b) cell_navstr_albumart_pane_g

0xa31b,	// (0x00024fbf) bt_list_pane_ParamLimits

0xa31b,	// (0x00024fbf) bt_list_pane

0xa33c,	// (0x00024fe0) bt_list_pane_t1

0xa34b,	// (0x00024fef) bt_list_pane_t2

0x0001,

0xfce0,	// (0x0002a984) bt_list_pane_t

0xbe20,	// (0x00026ac4) main_cale_prevew_pane

0xa35a,	// (0x00024ffe) popup_cale_preview_window_ParamLimits

0xa35a,	// (0x00024ffe) popup_cale_preview_window

0xc315,	// (0x00026fb9) bg_popup_preview_window_pane_cp05_ParamLimits

0xc315,	// (0x00026fb9) bg_popup_preview_window_pane_cp05

0x1a8c,	// (0x0001c730) list_cale_preview_pane_ParamLimits

0x1a8c,	// (0x0001c730) list_cale_preview_pane

0xa373,	// (0x00025017) list_double_cale_preview_pane_ParamLimits

0xa373,	// (0x00025017) list_double_cale_preview_pane

0xa385,	// (0x00025029) list_single_cale_preview_pane_ParamLimits

0xa385,	// (0x00025029) list_single_cale_preview_pane

0xa399,	// (0x0002503d) list_single_cale_preview_pane_g1

0xa3a1,	// (0x00025045) list_single_cale_preview_pane_t1_ParamLimits

0xa3a1,	// (0x00025045) list_single_cale_preview_pane_t1

0xa3b6,	// (0x0002505a) list_double_cale_preview_pane_g1

0xa3be,	// (0x00025062) list_double_cale_preview_pane_t1_ParamLimits

0xa3be,	// (0x00025062) list_double_cale_preview_pane_t1

0xa3d3,	// (0x00025077) list_double_cale_preview_pane_t2_ParamLimits

0xa3d3,	// (0x00025077) list_double_cale_preview_pane_t2

0x0001,

0xfce5,	// (0x0002a989) list_double_cale_preview_pane_t_ParamLimits

0xfce5,	// (0x0002a989) list_double_cale_preview_pane_t

0xbe20,	// (0x00026ac4) main_ezdial_pane

0xc315,	// (0x00026fb9) main_sp_fs_email_pane_ParamLimits

0x9c2f,	// (0x000248d3) cmail_ddmenu_btn01_pane_ParamLimits

0x9c2f,	// (0x000248d3) cmail_ddmenu_btn01_pane

0x9c44,	// (0x000248e8) cmail_ddmenu_btn02_pane_ParamLimits

0x9c44,	// (0x000248e8) cmail_ddmenu_btn02_pane

0x9c5c,	// (0x00024900) cmail_ddmenu_btn03_pane_ParamLimits

0x9c5c,	// (0x00024900) cmail_ddmenu_btn03_pane

0x9cf1,	// (0x00024995) main_sp_fs_ctrlbar_pane_ParamLimits

0x9d07,	// (0x000249ab) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9fb8,	// (0x00024c5c) list_cmail_body_pane_ParamLimits

0x16a6,	// (0x0001c34a) bg_button_pane_cp12

0x16bb,	// (0x0001c35f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x16bb,	// (0x0001c35f) list_single_cmail_header_detail_pane_g3

0x16c8,	// (0x0001c36c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x16c8,	// (0x0001c36c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc63,	// (0x0002a907) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc63,	// (0x0002a907) list_single_cmail_header_detail_pane_t

0x17ca,	// (0x0001c46e) phacti_term_pane_t2_ParamLimits

0x17ca,	// (0x0001c46e) phacti_term_pane_t2

0x0001,

0xfc72,	// (0x0002a916) phacti_term_pane_t_ParamLimits

0xfc72,	// (0x0002a916) phacti_term_pane_t

0x1a98,	// (0x0001c73c) aid_size_list_single_double

0xa3eb,	// (0x0002508f) popup_ezdial_listscroll_window

0x1aa4,	// (0x0001c748) popup_number_entry_window_cp01

0xc786,	// (0x0002742a) bg_popup_call_pane_cp09

0x1ab1,	// (0x0001c755) ezdial_list_pane

0x1ab9,	// (0x0001c75d) scroll_pane_cp23

0xe45c,	// (0x00029100) bg_button_pane_cp028_ParamLimits

0xe45c,	// (0x00029100) bg_button_pane_cp028

0xa404,	// (0x000250a8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa404,	// (0x000250a8) cmail_ddmenu_btn01_pane_g1

0xa414,	// (0x000250b8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa414,	// (0x000250b8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcea,	// (0x0002a98e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcea,	// (0x0002a98e) cmail_ddmenu_btn01_pane_g

0x1ac1,	// (0x0001c765) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1ac1,	// (0x0001c765) cmail_ddmenu_btn01_pane_t1

0xd2a7,	// (0x00027f4b) bg_button_pane_cp029_ParamLimits

0xd2a7,	// (0x00027f4b) bg_button_pane_cp029

0xa414,	// (0x000250b8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa414,	// (0x000250b8) cmail_ddmenu_btn02_pane_g1

0xa42c,	// (0x000250d0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa42c,	// (0x000250d0) cmail_ddmenu_btn02_pane_t1

0xc513,	// (0x000271b7) bg_button_pane_cp031_ParamLimits

0xc513,	// (0x000271b7) bg_button_pane_cp031

0xa414,	// (0x000250b8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa414,	// (0x000250b8) cmail_ddmenu_btn03_pane_g1

0xa42c,	// (0x000250d0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa42c,	// (0x000250d0) cmail_ddmenu_btn03_pane_t1

0xc569,	// (0x0002720d) cell_dialer2_keypad_pane_t1_ParamLimits

0xeccf,	// (0x00029973) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeccf,	// (0x00029973) cell_dialer2_keypad_pane_t1_copy1

0x96d1,	// (0x00024375) ncimui_group_button_pane

0xc315,	// (0x00026fb9) main_sp_fs_calendar_pane_ParamLimits

0x9fe0,	// (0x00024c84) list_single_cmail_header_caption_pane_ParamLimits

0x1815,	// (0x0001c4b9) aid_recal_txt_sm_pane

0xbe20,	// (0x00026ac4) mian_recal_day_pane

0x1857,	// (0x0001c4fb) popup_sp_fs_cale_preview_window_ParamLimits

0x1ad6,	// (0x0001c77a) list_recal_day_pane

0x1b18,	// (0x0001c7bc) list_single_recal_day_pane_ParamLimits

0x1b18,	// (0x0001c7bc) list_single_recal_day_pane

0x1b2a,	// (0x0001c7ce) list_single_recal_day_pane_g1_ParamLimits

0x1b2a,	// (0x0001c7ce) list_single_recal_day_pane_g1

0x1b36,	// (0x0001c7da) list_single_recal_day_pane_g2_ParamLimits

0x1b36,	// (0x0001c7da) list_single_recal_day_pane_g2

0x1b42,	// (0x0001c7e6) list_single_recal_day_pane_g3_ParamLimits

0x1b42,	// (0x0001c7e6) list_single_recal_day_pane_g3

0xa450,	// (0x000250f4) list_single_recal_day_pane_g4_ParamLimits

0xa450,	// (0x000250f4) list_single_recal_day_pane_g4

0x1b4e,	// (0x0001c7f2) list_single_recal_day_pane_g5_ParamLimits

0x1b4e,	// (0x0001c7f2) list_single_recal_day_pane_g5

0x1b5a,	// (0x0001c7fe) list_single_recal_day_pane_g6_ParamLimits

0x1b5a,	// (0x0001c7fe) list_single_recal_day_pane_g6

0x0004,

0xfcf9,	// (0x0002a99d) list_single_recal_day_pane_g_ParamLimits

0xfcf9,	// (0x0002a99d) list_single_recal_day_pane_g

0x1b6e,	// (0x0001c812) list_single_recal_day_pane_t1

0x1b80,	// (0x0001c824) list_single_recal_day_pane_t2

0x0001,

0xfd04,	// (0x0002a9a8) list_single_recal_day_pane_t

0xa468,	// (0x0002510c) ncimui_query_button_pane_ParamLimits

0xa468,	// (0x0002510c) ncimui_query_button_pane

0xa478,	// (0x0002511c) ncimui_query_button_pane_t1_ParamLimits

0xa478,	// (0x0002511c) ncimui_query_button_pane_t1

0x1b92,	// (0x0001c836) ncimui_query_button_pane_t2_ParamLimits

0x1b92,	// (0x0001c836) ncimui_query_button_pane_t2

0x0001,

0xfd09,	// (0x0002a9ad) ncimui_query_button_pane_t_ParamLimits

0xfd09,	// (0x0002a9ad) ncimui_query_button_pane_t

0xa48b,	// (0x0002512f) query_button_pane_ParamLimits

0xa48b,	// (0x0002512f) query_button_pane

0xbe20,	// (0x00026ac4) bg_button_pane_cp0028

0x1ba5,	// (0x0001c849) query_button_pane_t1

0x3c17,	// (0x0001e8bb) main_tport_pane_ParamLimits

0x9ec2,	// (0x00024b66) bg_popup_window_pane_cp01_ParamLimits

0x9ec2,	// (0x00024b66) bg_popup_window_pane_cp01

0x9ed0,	// (0x00024b74) heading_pane_cp08_ParamLimits

0x9ed0,	// (0x00024b74) heading_pane_cp08

0x9ede,	// (0x00024b82) heading_pane_cp07_ParamLimits

0x9ede,	// (0x00024b82) heading_pane_cp07

0x9f4d,	// (0x00024bf1) cell_tport_appsw_pane_g2

0x0002,

0xfc50,	// (0x0002a8f4) cell_tport_appsw_pane_g

0x6bec,	// (0x00021890) input_candi_list_open_g1

0xcb62,	// (0x00027806) list_cale_time_pane_g6_ParamLimits

0xcb62,	// (0x00027806) list_cale_time_pane_g6

0x771e,	// (0x000223c2) aid_size_touch_calib_1_ParamLimits

0x771e,	// (0x000223c2) aid_size_touch_calib_1

0x772a,	// (0x000223ce) aid_size_touch_calib_2_ParamLimits

0x772a,	// (0x000223ce) aid_size_touch_calib_2

0x7738,	// (0x000223dc) aid_size_touch_calib_3_ParamLimits

0x7738,	// (0x000223dc) aid_size_touch_calib_3

0x7748,	// (0x000223ec) aid_size_touch_calib_4_ParamLimits

0x7748,	// (0x000223ec) aid_size_touch_calib_4

0x7756,	// (0x000223fa) main_touch_calib_button_group_pane_ParamLimits

0x7756,	// (0x000223fa) main_touch_calib_button_group_pane

0x7764,	// (0x00022408) main_touch_calib_pane_g1_ParamLimits

0x7770,	// (0x00022414) main_touch_calib_pane_g2_ParamLimits

0x777c,	// (0x00022420) main_touch_calib_pane_g3_ParamLimits

0x7788,	// (0x0002242c) main_touch_calib_pane_g4_ParamLimits

0xf69c,	// (0x0002a340) main_touch_calib_pane_g_ParamLimits

0x7794,	// (0x00022438) main_touch_calib_pane_t1_ParamLimits

0x77ad,	// (0x00022451) main_touch_calib_pane_t2_ParamLimits

0x77c6,	// (0x0002246a) main_touch_calib_pane_t3_ParamLimits

0x77dc,	// (0x00022480) main_touch_calib_pane_t4_ParamLimits

0x77f2,	// (0x00022496) main_touch_calib_pane_t5_ParamLimits

0xf6a5,	// (0x0002a349) main_touch_calib_pane_t_ParamLimits

0xec7d,	// (0x00029921) list_single_fp_cale_pane_g3_ParamLimits

0xec7d,	// (0x00029921) list_single_fp_cale_pane_g3

0x3bfb,	// (0x0001e89f) bg_button_pane_cp012_ParamLimits

0x3bfb,	// (0x0001e89f) bg_vkb2_func_pane_cp03_ParamLimits

0x4a93,	// (0x0001f737) cell_vitu2_function_top_pane_g1_ParamLimits

0x3bfb,	// (0x0001e89f) bg_vkb2_func_pane_cp04_ParamLimits

0x9659,	// (0x000242fd) main_ncimui_button_group_pane_ParamLimits

0x9659,	// (0x000242fd) main_ncimui_button_group_pane

0x96bf,	// (0x00024363) main_ncimui_pane_t3_ParamLimits

0x96bf,	// (0x00024363) main_ncimui_pane_t3

0x1778,	// (0x0001c41c) phacti_button_group_pane

0x1a98,	// (0x0001c73c) aid_size_list_single_double_ParamLimits

0xa3eb,	// (0x0002508f) popup_ezdial_listscroll_window_ParamLimits

0x1aa4,	// (0x0001c748) popup_number_entry_window_cp01_ParamLimits

0xa498,	// (0x0002513c) phacti_button_pane_ParamLimits

0xa498,	// (0x0002513c) phacti_button_pane

0xbe20,	// (0x00026ac4) bg_button_pane_cp14

0x1bb3,	// (0x0001c857) phacti_button_pane_t1

0xa4a9,	// (0x0002514d) main_touch_calib_button_pane_ParamLimits

0xa4a9,	// (0x0002514d) main_touch_calib_button_pane

0xc5bd,	// (0x00027261) bg_button_pane_cp18_ParamLimits

0xc5bd,	// (0x00027261) bg_button_pane_cp18

0x1bc1,	// (0x0001c865) main_touch_calib_button_pane_t1_ParamLimits

0x1bc1,	// (0x0001c865) main_touch_calib_button_pane_t1

0x1bd7,	// (0x0001c87b) main_touch_calib_button_pane_t2_ParamLimits

0x1bd7,	// (0x0001c87b) main_touch_calib_button_pane_t2

0x0001,

0xfd0e,	// (0x0002a9b2) main_touch_calib_button_pane_t_ParamLimits

0xfd0e,	// (0x0002a9b2) main_touch_calib_button_pane_t

0xbe20,	// (0x00026ac4) cell_ncimui_button_pane

0xbe20,	// (0x00026ac4) bg_button_pane_cp032

0x1bf5,	// (0x0001c899) cell_ncimui_button_pane_t1

0x4302,	// (0x0001efa6) image3_infobar_pane_ParamLimits

0x4302,	// (0x0001efa6) image3_infobar_pane

0x9a01,	// (0x000246a5) fs_bigclock_status_pane_ParamLimits

0x9a01,	// (0x000246a5) fs_bigclock_status_pane

0x9a0e,	// (0x000246b2) main_fs_bigclock_clock_pane_ParamLimits

0x9a0e,	// (0x000246b2) main_fs_bigclock_clock_pane

0x9a22,	// (0x000246c6) main_fs_bigclock_indi_pane_ParamLimits

0x9a22,	// (0x000246c6) main_fs_bigclock_indi_pane

0x9a4a,	// (0x000246ee) main_fs_bigclock_swipe_pane_ParamLimits

0x9a4a,	// (0x000246ee) main_fs_bigclock_swipe_pane

0xbe20,	// (0x00026ac4) main_fs_clock_dumped_data

0x11c9,	// (0x0001be6d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x11c9,	// (0x0001be6d) list_single_fs_bigclock_indicator_pane_g1

0x11e5,	// (0x0001be89) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x11e5,	// (0x0001be89) list_single_fs_bigclock_indicator_pane_g2

0x11ff,	// (0x0001bea3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x11ff,	// (0x0001bea3) list_single_fs_bigclock_indicator_pane_g3

0x1219,	// (0x0001bebd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1219,	// (0x0001bebd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbaa,	// (0x0002a84e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbaa,	// (0x0002a84e) list_single_fs_bigclock_indicator_pane_g

0x1244,	// (0x0001bee8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1244,	// (0x0001bee8) list_single_fs_bigclock_indicator_pane_t1

0x126c,	// (0x0001bf10) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x126c,	// (0x0001bf10) list_single_fs_bigclock_indicator_pane_t2

0x1294,	// (0x0001bf38) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1294,	// (0x0001bf38) list_single_fs_bigclock_indicator_pane_t3

0x12bc,	// (0x0001bf60) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x12bc,	// (0x0001bf60) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb5,	// (0x0002a859) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb5,	// (0x0002a859) list_single_fs_bigclock_indicator_pane_t

0x1c03,	// (0x0001c8a7) image3_infobar_fav_pane_ParamLimits

0x1c03,	// (0x0001c8a7) image3_infobar_fav_pane

0x1c13,	// (0x0001c8b7) image3_infobar_loc_pane_ParamLimits

0x1c13,	// (0x0001c8b7) image3_infobar_loc_pane

0x1c27,	// (0x0001c8cb) image3_infobar_time_pane_ParamLimits

0x1c27,	// (0x0001c8cb) image3_infobar_time_pane

0xc55f,	// (0x00027203) image3_infobar_time_pane_g1

0x1c37,	// (0x0001c8db) image3_infobar_time_pane_t1

0xc55f,	// (0x00027203) image3_infobar_loc_pane_g1

0x1c45,	// (0x0001c8e9) image3_infobar_loc_pane_g2

0x0001,

0xfd13,	// (0x0002a9b7) image3_infobar_loc_pane_g

0x1c4d,	// (0x0001c8f1) image3_infobar_loc_pane_t1

0xc55f,	// (0x00027203) image3_infobar_fav_pane_g1

0x1c5b,	// (0x0001c8ff) image3_infobar_fav_pane_g2

0x0001,

0xfd18,	// (0x0002a9bc) image3_infobar_fav_pane_g

0x1c63,	// (0x0001c907) fs_bigclock_status_battery_pane

0x1c6c,	// (0x0001c910) fs_bigclock_status_signal_pane

0x1c75,	// (0x0001c919) fs_bigclock_status_title_pane

0x1c7e,	// (0x0001c922) fs_bigclock_status_signal_pane_g1

0x1c87,	// (0x0001c92b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1d,	// (0x0002a9c1) fs_bigclock_status_signal_pane_g

0x1c8f,	// (0x0001c933) fs_bigclock_status_battery_pane_g1

0x1c98,	// (0x0001c93c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd22,	// (0x0002a9c6) fs_bigclock_status_battery_pane_g

0x1ca0,	// (0x0001c944) fs_bigclock_status_title_pane_t1

0xa4b9,	// (0x0002515d) main_fs_bigclock_clock_pane_g1

0xa4b9,	// (0x0002515d) main_fs_bigclock_clock_pane_g2

0xa4c6,	// (0x0002516a) main_fs_bigclock_clock_pane_g3

0xa4c6,	// (0x0002516a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd27,	// (0x0002a9cb) main_fs_bigclock_clock_pane_g

0xa4d2,	// (0x00025176) main_fs_bigclock_clock_pane_t1

0xa4e5,	// (0x00025189) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd30,	// (0x0002a9d4) main_fs_bigclock_clock_pane_t

0x1cae,	// (0x0001c952) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1cae,	// (0x0001c952) list_single_fs_bigclock_indicator_pane

0x1cbf,	// (0x0001c963) list_single_fs_bigclock_pane_ParamLimits

0x1cbf,	// (0x0001c963) list_single_fs_bigclock_pane

0x1ce5,	// (0x0001c989) main_fs_bigclock_indicator_pane_t1

0x1cf4,	// (0x0001c998) list_single_fs_bigclock_pane_g1

0x1cfc,	// (0x0001c9a0) list_single_fs_bigclock_pane_t1

0xc55f,	// (0x00027203) main_fs_bigclock_swipe_pane_g1

0x1d3f,	// (0x0001c9e3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd41,	// (0x0002a9e5) main_fs_bigclock_swipe_pane_g

0x1d47,	// (0x0001c9eb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1d47,	// (0x0001c9eb) main_fs_bigclock_swipe_pane_t1

0x6749,	// (0x000213ed) call_type_pane_ParamLimits

0xbe20,	// (0x00026ac4) main_btmg_pane

0x1954,	// (0x0001c5f8) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1954,	// (0x0001c5f8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb4,	// (0x0002a958) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb4,	// (0x0002a958) list_single_cale_mrui_row_pane_g

0x1aff,	// (0x0001c7a3) list_recal_vselct_arw_lo_pane

0x1b07,	// (0x0001c7ab) list_recal_vselct_arw_up_pane

0x1b0f,	// (0x0001c7b3) list_recal_vselct_pane

0xa53c,	// (0x000251e0) btmg_button_pane

0xa548,	// (0x000251ec) main_btmg_pane_g1

0xbe20,	// (0x00026ac4) bg_button_pane_cp044

0x1d64,	// (0x0001ca08) btmg_button_pane_t1

0xe48a,	// (0x0002912e) aid_listscroll_gen

0xc315,	// (0x00026fb9) main_cntbar_detail_pane

0x1679,	// (0x0001c31d) list_cmail_folder_pane

0x0472,	// (0x0001b116) sp_fs_scroll_pane_cp03_ParamLimits

0xa550,	// (0x000251f4) list_single_fs_dyc_pane_cp01_ParamLimits

0xa550,	// (0x000251f4) list_single_fs_dyc_pane_cp01

0x1d72,	// (0x0001ca16) aid_size_cmail_indent

0x1d7b,	// (0x0001ca1f) list_single_dyc_row_pane_cp01

0xa59c,	// (0x00025240) cntbar_detail_list_pane_ParamLimits

0xa59c,	// (0x00025240) cntbar_detail_list_pane

0xa5d6,	// (0x0002527a) main_cntbar_detail_cont_pane_ParamLimits

0xa5d6,	// (0x0002527a) main_cntbar_detail_cont_pane

0x673d,	// (0x000213e1) scroll_pane_cp032_ParamLimits

0x673d,	// (0x000213e1) scroll_pane_cp032

0xa5e2,	// (0x00025286) cntbar_detail_list_event_pane_ParamLimits

0xa5e2,	// (0x00025286) cntbar_detail_list_event_pane

0xa5a8,	// (0x0002524c) cntbar_detail_list_shct_pane

0xc9ed,	// (0x00027691) aid_list_gen

0x1d84,	// (0x0001ca28) aid_scroll

0x1d8d,	// (0x0001ca31) aid_size_touch_scroll_bar

0x9aaf,	// (0x00024753) aid_list_double

0xa5f6,	// (0x0002529a) aid_list_single

0xa5f6,	// (0x0002529a) aid_list_single_lg

0xa5ff,	// (0x000252a3) aid_list_z_g_a_sm

0xa607,	// (0x000252ab) aid_list_z_g_d

0xa60f,	// (0x000252b3) aid_txt_z_prm

0xa61d,	// (0x000252c1) aid_txt_z_prm_cp01

0xa62b,	// (0x000252cf) aid_txt_z_sec

0xa639,	// (0x000252dd) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa639,	// (0x000252dd) main_cntbar_detail_cont_pane_g1

0xa646,	// (0x000252ea) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa646,	// (0x000252ea) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd46,	// (0x0002a9ea) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd46,	// (0x0002a9ea) main_cntbar_detail_cont_pane_g

0x1d96,	// (0x0001ca3a) main_cntbar_detail_cont_pane_t1

0x1da4,	// (0x0001ca48) main_cntbar_detail_cont_pane_t2

0x1db2,	// (0x0001ca56) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4b,	// (0x0002a9ef) main_cntbar_detail_cont_pane_t

0xa652,	// (0x000252f6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa652,	// (0x000252f6) cell_cntbar_detail_list_shct_pane

0x1dc0,	// (0x0001ca64) cntbar_detail_list_shct_pane_g1

0x1dc9,	// (0x0001ca6d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd52,	// (0x0002a9f6) cntbar_detail_list_shct_pane_g

0xa666,	// (0x0002530a) cntbar_detail_list_event_pane_g1_ParamLimits

0xa666,	// (0x0002530a) cntbar_detail_list_event_pane_g1

0xa672,	// (0x00025316) cntbar_detail_list_event_pane_g2_ParamLimits

0xa672,	// (0x00025316) cntbar_detail_list_event_pane_g2

0x0005,

0xfd57,	// (0x0002a9fb) cntbar_detail_list_event_pane_g_ParamLimits

0xfd57,	// (0x0002a9fb) cntbar_detail_list_event_pane_g

0xa6de,	// (0x00025382) cntbar_detail_list_event_pane_t1_ParamLimits

0xa6de,	// (0x00025382) cntbar_detail_list_event_pane_t1

0xa6f3,	// (0x00025397) cntbar_detail_list_event_pane_t2_ParamLimits

0xa6f3,	// (0x00025397) cntbar_detail_list_event_pane_t2

0x0002,

0xfd64,	// (0x0002aa08) cntbar_detail_list_event_pane_t_ParamLimits

0xfd64,	// (0x0002aa08) cntbar_detail_list_event_pane_t

0xc55f,	// (0x00027203) cell_cntbar_detail_list_shct_pane_g1

0xd13d,	// (0x00027de1) navi_pane_mv_g3

0xc315,	// (0x00026fb9) main_cntbar_detail_pane_ParamLimits

0xbe20,	// (0x00026ac4) main_notif_wgt_pane

0x3fd1,	// (0x0001ec75) aid_tch_main_mp4_pane_g4

0x42a4,	// (0x0001ef48) popup_slider_window_cp02

0x1af5,	// (0x0001c799) list_recal_day_event_pane

0xa57c,	// (0x00025220) cntbar_detail_btn_pane_ParamLimits

0xa57c,	// (0x00025220) cntbar_detail_btn_pane

0xa58c,	// (0x00025230) cntbar_detail_btn_pane_cp01_ParamLimits

0xa58c,	// (0x00025230) cntbar_detail_btn_pane_cp01

0xa5a8,	// (0x0002524c) cntbar_detail_list_shct_pane_ParamLimits

0xa5b4,	// (0x00025258) cntbar_detail_pane_g1_ParamLimits

0xa5b4,	// (0x00025258) cntbar_detail_pane_g1

0xa5c0,	// (0x00025264) cntbar_detail_pane_t1_ParamLimits

0xa5c0,	// (0x00025264) cntbar_detail_pane_t1

0xa67e,	// (0x00025322) cntbar_detail_list_event_pane_g3_ParamLimits

0xa67e,	// (0x00025322) cntbar_detail_list_event_pane_g3

0xa696,	// (0x0002533a) cntbar_detail_list_event_pane_g4_ParamLimits

0xa696,	// (0x0002533a) cntbar_detail_list_event_pane_g4

0xa6ae,	// (0x00025352) cntbar_detail_list_event_pane_g5_ParamLimits

0xa6ae,	// (0x00025352) cntbar_detail_list_event_pane_g5

0xa6c6,	// (0x0002536a) cntbar_detail_list_event_pane_g6_ParamLimits

0xa6c6,	// (0x0002536a) cntbar_detail_list_event_pane_g6

0xa708,	// (0x000253ac) cntbar_detail_list_event_pane_t3_ParamLimits

0xa708,	// (0x000253ac) cntbar_detail_list_event_pane_t3

0xa71a,	// (0x000253be) popup_notif_wgt_window_ParamLimits

0xa71a,	// (0x000253be) popup_notif_wgt_window

0xa72a,	// (0x000253ce) popup_submenu_window_cp01_ParamLimits

0xa72a,	// (0x000253ce) popup_submenu_window_cp01

0xc786,	// (0x0002742a) bg_popup_window_pane_cp10

0x1dd2,	// (0x0001ca76) listscroll_notif_wgt_pane

0x1de4,	// (0x0001ca88) list_notif_wgt_window

0x1ded,	// (0x0001ca91) scroll_pane_cp033

0xa738,	// (0x000253dc) list_notif_wgt_row_pane_ParamLimits

0xa738,	// (0x000253dc) list_notif_wgt_row_pane

0x1df6,	// (0x0001ca9a) aid_size_list_notif_wgt_del

0x1e03,	// (0x0001caa7) list_notif_wgt_row_pane_g1

0x1e0f,	// (0x0001cab3) list_notif_wgt_row_pane_g2

0x1e1e,	// (0x0001cac2) list_notif_wgt_row_pane_g3

0x0002,

0xfd6b,	// (0x0002aa0f) list_notif_wgt_row_pane_g

0x1e2b,	// (0x0001cacf) list_notif_wgt_row_pane_t1

0x1e41,	// (0x0001cae5) list_notif_wgt_row_pane_t2

0x1e53,	// (0x0001caf7) list_notif_wgt_row_pane_t3

0x0002,

0xfd72,	// (0x0002aa16) list_notif_wgt_row_pane_t

0x058f,	// (0x0001b233) list_recal_day_event_pane_g1

0x1e65,	// (0x0001cb09) list_recal_day_event_pane_t1

0xbe20,	// (0x00026ac4) bg_button_pane_cp045

0xa74a,	// (0x000253ee) cntbar_detail_btn_pane_t1

0xd2a7,	// (0x00027f4b) main_callh_pane_ParamLimits

0xd2a7,	// (0x00027f4b) main_callh_pane

0xbe20,	// (0x00026ac4) main_coverflow0_pane

0xbe20,	// (0x00026ac4) main_wgtman_pane

0x9a62,	// (0x00024706) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9a62,	// (0x00024706) main_fs_bigclock_unlock_btn_pane

0x9f45,	// (0x00024be9) bg_button_pane_cp16

0x9f55,	// (0x00024bf9) cell_tport_appsw_pane_g3

0xa758,	// (0x000253fc) cf0_flow_pane_ParamLimits

0xa758,	// (0x000253fc) cf0_flow_pane

0x1e74,	// (0x0001cb18) listscroll_cf0_pane

0x1e7f,	// (0x0001cb23) main_cf0_pane_g1

0xa767,	// (0x0002540b) main_cf0_pane_t1_ParamLimits

0xa767,	// (0x0002540b) main_cf0_pane_t1

0xa77b,	// (0x0002541f) main_cf0_pane_t2_ParamLimits

0xa77b,	// (0x0002541f) main_cf0_pane_t2

0x0001,

0xfd7e,	// (0x0002aa22) main_cf0_pane_t_ParamLimits

0xfd7e,	// (0x0002aa22) main_cf0_pane_t

0x1e91,	// (0x0001cb35) scroll_pane_cp11

0xa78f,	// (0x00025433) cf0_flow_pane_g1

0xa797,	// (0x0002543b) cf0_flow_pane_g2

0x0001,

0xfd83,	// (0x0002aa27) cf0_flow_pane_g

0xa79f,	// (0x00025443) cf0_flow_pane_t1

0xbe20,	// (0x00026ac4) main_call6_pane

0xbe20,	// (0x00026ac4) main_calllock_pane

0x4cc2,	// (0x0001f966) call6_btn_grp_pane_ParamLimits

0x4cc2,	// (0x0001f966) call6_btn_grp_pane

0x4cd1,	// (0x0001f975) call6_pane_g1_ParamLimits

0x4cd1,	// (0x0001f975) call6_pane_g1

0x4ce1,	// (0x0001f985) popup_call6_1st_window_ParamLimits

0x4ce1,	// (0x0001f985) popup_call6_1st_window

0x4cef,	// (0x0001f993) popup_call6_2nd_window_ParamLimits

0x4cef,	// (0x0001f993) popup_call6_2nd_window

0x4cfd,	// (0x0001f9a1) cell_call6_btn_pane_ParamLimits

0x4cfd,	// (0x0001f9a1) cell_call6_btn_pane

0xc786,	// (0x0002742a) bg_popup_call2_in_pane_cp03

0x1e9c,	// (0x0001cb40) popup_call6_1st_window_g1

0x1ea4,	// (0x0001cb48) popup_call6_1st_window_g2

0x1eac,	// (0x0001cb50) popup_call6_1st_window_g3

0x0002,

0xfd88,	// (0x0002aa2c) popup_call6_1st_window_g

0x1eb4,	// (0x0001cb58) popup_call6_1st_window_t1

0x1ec3,	// (0x0001cb67) popup_call6_1st_window_t2

0x1ed1,	// (0x0001cb75) popup_call6_1st_window_t3

0x0002,

0xfd8f,	// (0x0002aa33) popup_call6_1st_window_t

0xc786,	// (0x0002742a) bg_popup_call2_in_pane_cp04

0x1edf,	// (0x0001cb83) popup_call6_2nd_window_g1

0x1ee7,	// (0x0001cb8b) popup_call6_2nd_window_g2

0x1eef,	// (0x0001cb93) popup_call6_2nd_window_g3

0x0002,

0xfd96,	// (0x0002aa3a) popup_call6_2nd_window_g

0x1ef7,	// (0x0001cb9b) popup_call6_2nd_window_t1

0x37a5,	// (0x0001e449) bg_button_pane_cp15

0x4d0c,	// (0x0001f9b0) cell_call6_btn_pane_g1

0x4d15,	// (0x0001f9b9) cell_call6_btn_pane_t1

0xa7ad,	// (0x00025451) listscroll_wgtman_pane_ParamLimits

0xa7ad,	// (0x00025451) listscroll_wgtman_pane

0xa7c9,	// (0x0002546d) wgtman_btn_pane_ParamLimits

0xa7c9,	// (0x0002546d) wgtman_btn_pane

0xcf51,	// (0x00027bf5) aid_scroll_copy1

0x1f1e,	// (0x0001cbc2) list_wgtman_pane

0xa7fe,	// (0x000254a2) wgtman_btn_pane_g1_ParamLimits

0xa7fe,	// (0x000254a2) wgtman_btn_pane_g1

0xa826,	// (0x000254ca) wgtman_btn_pane_t1_ParamLimits

0xa826,	// (0x000254ca) wgtman_btn_pane_t1

0x1f55,	// (0x0001cbf9) wgtman_btn_pane_t2_ParamLimits

0x1f55,	// (0x0001cbf9) wgtman_btn_pane_t2

0x0001,

0xfd9d,	// (0x0002aa41) wgtman_btn_pane_t_ParamLimits

0xfd9d,	// (0x0002aa41) wgtman_btn_pane_t

0xa85d,	// (0x00025501) listrow_wgtman_pane_ParamLimits

0xa85d,	// (0x00025501) listrow_wgtman_pane

0xa879,	// (0x0002551d) listrow_wgtman_pane_g1

0xa886,	// (0x0002552a) listrow_wgtman_pane_g2

0x0001,

0xfda2,	// (0x0002aa46) listrow_wgtman_pane_g

0xa8a4,	// (0x00025548) listrow_wgtman_pane_t1

0xa8bc,	// (0x00025560) listrow_wgtman_pane_t2

0x0001,

0xfda7,	// (0x0002aa4b) listrow_wgtman_pane_t

0xa8e2,	// (0x00025586) wait_bar_pane_cp09

0x1f6c,	// (0x0001cc10) main_calllock_btn_pane

0x1f76,	// (0x0001cc1a) main_calllock_pane_g1

0xbe20,	// (0x00026ac4) bg_button_pane_cp17

0x1f06,	// (0x0001cbaa) main_calllock_btn_pane_g1

0x1f7e,	// (0x0001cc22) main_calllock_btn_pane_t1

0xbe20,	// (0x00026ac4) main_dialer3_pane

0xbe20,	// (0x00026ac4) main_fmrd2_pane

0xc55f,	// (0x00027203) main_fs_bigclock_unlock_btn_pane_g1

0xa8fc,	// (0x000255a0) main_fs_bigclock_unlock_btn_pane_t1

0xa90a,	// (0x000255ae) area_fmrd2_info_pane_ParamLimits

0xa90a,	// (0x000255ae) area_fmrd2_info_pane

0xa918,	// (0x000255bc) area_fmrd2_visual_pane_ParamLimits

0xa918,	// (0x000255bc) area_fmrd2_visual_pane

0xa926,	// (0x000255ca) fmrd2_indi_pane_ParamLimits

0xa926,	// (0x000255ca) fmrd2_indi_pane

0xa933,	// (0x000255d7) area_fmrd2_visual_pane_g1

0xa93b,	// (0x000255df) area_fmrd2_visual_pane_t1

0xa94b,	// (0x000255ef) area_fmrd2_visual_pane_t2

0xa95b,	// (0x000255ff) area_fmrd2_visual_pane_t3

0x0002,

0xfdb1,	// (0x0002aa55) area_fmrd2_visual_pane_t

0xa96b,	// (0x0002560f) area_fmrd2_info_pane_g1

0xa973,	// (0x00025617) area_fmrd2_info_pane_t1

0xa983,	// (0x00025627) area_fmrd2_info_pane_t2

0xa993,	// (0x00025637) area_fmrd2_info_pane_t3

0xa9a3,	// (0x00025647) area_fmrd2_info_pane_t4

0x0003,

0xfdb8,	// (0x0002aa5c) area_fmrd2_info_pane_t

0xa9b1,	// (0x00025655) fmrd2_indi_pane_t1

0xa9c1,	// (0x00025665) fmrd2_indi_pane_t2

0xa9d1,	// (0x00025675) fmrd2_indi_pane_t3

0x0002,

0xfdc1,	// (0x0002aa65) fmrd2_indi_pane_t

0x1228,	// (0x0001becc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1228,	// (0x0001becc) list_single_fs_bigclock_indicator_pane_g5

0x12d9,	// (0x0001bf7d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x12d9,	// (0x0001bf7d) list_single_fs_bigclock_indicator_pane_t5

0xa14f,	// (0x00024df3) aid_cell_bcale_month_pane_ParamLimits

0xa14f,	// (0x00024df3) aid_cell_bcale_month_pane

0xa16d,	// (0x00024e11) bcale_month_pane_ParamLimits

0xa16d,	// (0x00024e11) bcale_month_pane

0xa18b,	// (0x00024e2f) bcale_preview_pane_ParamLimits

0xa18b,	// (0x00024e2f) bcale_preview_pane

0x1cfc,	// (0x0001c9a0) list_single_fs_bigclock_pane_t1_ParamLimits

0x1d1b,	// (0x0001c9bf) list_single_fs_bigclock_pane_t2_ParamLimits

0x1d1b,	// (0x0001c9bf) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3c,	// (0x0002a9e0) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0002a9e0) list_single_fs_bigclock_pane_t

0xa8f4,	// (0x00025598) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdac,	// (0x0002aa50) main_fs_bigclock_unlock_btn_pane_g

0xa9df,	// (0x00025683) aid_dia3_key_size_ParamLimits

0xa9df,	// (0x00025683) aid_dia3_key_size

0xa9eb,	// (0x0002568f) aid_dia3_listrow_size_ParamLimits

0xa9eb,	// (0x0002568f) aid_dia3_listrow_size

0xa9fb,	// (0x0002569f) dia3_keypad_fun_pane_ParamLimits

0xa9fb,	// (0x0002569f) dia3_keypad_fun_pane

0xaa0d,	// (0x000256b1) dia3_keypad_num_pane_ParamLimits

0xaa0d,	// (0x000256b1) dia3_keypad_num_pane

0xaa1f,	// (0x000256c3) dia3_listscroll_pane_ParamLimits

0xaa1f,	// (0x000256c3) dia3_listscroll_pane

0xaa2d,	// (0x000256d1) dia3_numentry_pane_ParamLimits

0xaa2d,	// (0x000256d1) dia3_numentry_pane

0x1f8d,	// (0x0001cc31) dia3_list_pane

0x1f98,	// (0x0001cc3c) scroll_pane_cp12

0xbe20,	// (0x00026ac4) bg_dia3_numentry_pane

0xaa3b,	// (0x000256df) dia3_numentry_pane_t1

0xaa4a,	// (0x000256ee) cell_dia3_key_num_pane

0xaa52,	// (0x000256f6) cell_dia3_key0_fun_pane_ParamLimits

0xaa52,	// (0x000256f6) cell_dia3_key0_fun_pane

0xaa5f,	// (0x00025703) cell_dia3_key1_fun_pane_ParamLimits

0xaa5f,	// (0x00025703) cell_dia3_key1_fun_pane

0xaa6c,	// (0x00025710) dia3_listrow_pane

0x0f7b,	// (0x0001bc1f) bg_dia3_numentry_pane_g1

0xbe20,	// (0x00026ac4) bg_button_pane_cp21

0x1fa3,	// (0x0001cc47) cell_dia3_key_num_pane_t1

0x1fb1,	// (0x0001cc55) cell_dia3_key_num_pane_t2

0x1fc0,	// (0x0001cc64) cell_dia3_key_num_pane_t3

0x1fcf,	// (0x0001cc73) cell_dia3_key_num_pane_t4

0x0003,

0xfdc8,	// (0x0002aa6c) cell_dia3_key_num_pane_t

0xbe20,	// (0x00026ac4) bg_button_pane_cp19

0xaa79,	// (0x0002571d) cell_dia3_key0_fun_pane_g1

0xbe20,	// (0x00026ac4) bg_button_pane_cp20

0xaa81,	// (0x00025725) cell_dia3_key1_fun_pane_g1

0xaa89,	// (0x0002572d) area_left_week_number_pane

0xaa9c,	// (0x00025740) area_top_day_name_pane

0xaaaa,	// (0x0002574e) frame_month_view_pane

0x1fde,	// (0x0001cc82) grid_month_view_pane

0xaabf,	// (0x00025763) cell_top_day_name_pane_ParamLimits

0xaabf,	// (0x00025763) cell_top_day_name_pane

0xaad9,	// (0x0002577d) cell_area_left_week_number_pane_ParamLimits

0xaad9,	// (0x0002577d) cell_area_left_week_number_pane

0xaafc,	// (0x000257a0) cell_month_view_pane_ParamLimits

0xaafc,	// (0x000257a0) cell_month_view_pane

0x1fec,	// (0x0001cc90) frm_month_g1

0xab28,	// (0x000257cc) frm_month_g2

0xab39,	// (0x000257dd) frm_month_g3

0xab4a,	// (0x000257ee) frm_month_g4

0xab5b,	// (0x000257ff) frm_month_g5

0xab6e,	// (0x00025812) frm_month_g6

0xab81,	// (0x00025825) frm_month_g7

0x1ff9,	// (0x0001cc9d) frm_month_g8

0xab94,	// (0x00025838) frm_month_g9

0xaba1,	// (0x00025845) frm_month_g10

0xabae,	// (0x00025852) frm_month_g11

0xabbb,	// (0x0002585f) frm_month_g12

0xabc8,	// (0x0002586c) frm_month_g13

0xabd5,	// (0x00025879) frm_month_g14

0xabe4,	// (0x00025888) frm_month_g15

0xabf3,	// (0x00025897) frm_month_g16

0x000f,

0xfdd1,	// (0x0002aa75) frm_month_g

0x2006,	// (0x0001ccaa) cell_top_day_name_pane_t1

0xac02,	// (0x000258a6) cell_area_left_week_number_pane_g1

0xac11,	// (0x000258b5) cell_area_left_week_number_pane_t1

0xc521,	// (0x000271c5) cell_month_view_pane_g1

0xac27,	// (0x000258cb) cell_month_view_pane_t1

0xbe20,	// (0x00026ac4) main_fps_pane

0x149d,	// (0x0001c141) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x149d,	// (0x0001c141) cmail_ddmenu_btn02_pane_cp1

0x14b9,	// (0x0001c15d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x14b9,	// (0x0001c15d) cmail_ddmenu_btn02_pane_cp2

0xa420,	// (0x000250c4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa420,	// (0x000250c4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcef,	// (0x0002a993) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcef,	// (0x0002a993) cmail_ddmenu_btn02_pane_g

0xa43e,	// (0x000250e2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa43e,	// (0x000250e2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf4,	// (0x0002a998) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf4,	// (0x0002a998) cmail_ddmenu_btn02_pane_t

0xac3d,	// (0x000258e1) fps_text_pane_ParamLimits

0xac3d,	// (0x000258e1) fps_text_pane

0xac4a,	// (0x000258ee) main_fps_pane_g1_ParamLimits

0xac4a,	// (0x000258ee) main_fps_pane_g1

0xac58,	// (0x000258fc) wait_bar_pane_cp010_ParamLimits

0xac58,	// (0x000258fc) wait_bar_pane_cp010

0xac64,	// (0x00025908) fps_text_pane_t1_ParamLimits

0xac64,	// (0x00025908) fps_text_pane_t1

0x8341,	// (0x00022fe5) cam4_image_uncrop_pane_g1

0x834a,	// (0x00022fee) cam4_image_uncrop_pane_g2

0x8353,	// (0x00022ff7) cam4_image_uncrop_pane_g3

0x835c,	// (0x00023000) cam4_image_uncrop_pane_g4

0x0003,

0xf82e,	// (0x0002a4d2) cam4_image_uncrop_pane_g

0xaa6c,	// (0x00025710) dia3_listrow_pane_ParamLimits

0xbe20,	// (0x00026ac4) main_phob2_pane

0x9f27,	// (0x00024bcb) cell_tport_appsw_pane_cp02_ParamLimits

0x9f27,	// (0x00024bcb) cell_tport_appsw_pane_cp02

0x9f36,	// (0x00024bda) cell_tport_appsw_pane_cp03_ParamLimits

0x9f36,	// (0x00024bda) cell_tport_appsw_pane_cp03

0xbe20,	// (0x00026ac4) phob2_contact_card_pane

0xbe20,	// (0x00026ac4) phob2_listscroll_pane

0x2019,	// (0x0001ccbd) phob2_list_pane

0x1ab9,	// (0x0001c75d) scroll_pane_cp034

0xac7d,	// (0x00025921) phob2_cc_data_pane_ParamLimits

0xac7d,	// (0x00025921) phob2_cc_data_pane

0xac97,	// (0x0002593b) phob2_cc_listscroll_pane_ParamLimits

0xac97,	// (0x0002593b) phob2_cc_listscroll_pane

0xa85d,	// (0x00025501) list_double_large_graphic_phob2_pane_ParamLimits

0xa85d,	// (0x00025501) list_double_large_graphic_phob2_pane

0xacb1,	// (0x00025955) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xacb1,	// (0x00025955) list_double_large_graphic_phob2_pane_g1

0xacbe,	// (0x00025962) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xacbe,	// (0x00025962) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf2,	// (0x0002aa96) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf2,	// (0x0002aa96) list_double_large_graphic_phob2_pane_g

0xace4,	// (0x00025988) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xace4,	// (0x00025988) list_double_large_graphic_phob2_pane_t1

0xacf9,	// (0x0002599d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xacf9,	// (0x0002599d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfb,	// (0x0002aa9f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfb,	// (0x0002aa9f) list_double_large_graphic_phob2_pane_t

0xbe20,	// (0x00026ac4) list_highlight_pane_cp024

0x2021,	// (0x0001ccc5) phob2_cc_button_pane

0xad0e,	// (0x000259b2) phob2_cc_data_pane_g1_ParamLimits

0xad0e,	// (0x000259b2) phob2_cc_data_pane_g1

0xad1d,	// (0x000259c1) phob2_cc_data_pane_g2_ParamLimits

0xad1d,	// (0x000259c1) phob2_cc_data_pane_g2

0x0001,

0xfe00,	// (0x0002aaa4) phob2_cc_data_pane_g_ParamLimits

0xfe00,	// (0x0002aaa4) phob2_cc_data_pane_g

0xad2c,	// (0x000259d0) phob2_cc_data_pane_t1_ParamLimits

0xad2c,	// (0x000259d0) phob2_cc_data_pane_t1

0xad41,	// (0x000259e5) phob2_cc_data_pane_t2_ParamLimits

0xad41,	// (0x000259e5) phob2_cc_data_pane_t2

0xad56,	// (0x000259fa) phob2_cc_data_pane_t3_ParamLimits

0xad56,	// (0x000259fa) phob2_cc_data_pane_t3

0x0002,

0xfe05,	// (0x0002aaa9) phob2_cc_data_pane_t_ParamLimits

0xfe05,	// (0x0002aaa9) phob2_cc_data_pane_t

0x2029,	// (0x0001cccd) phob2_cc_list_pane_ParamLimits

0x2029,	// (0x0001cccd) phob2_cc_list_pane

0x0638,	// (0x0001b2dc) scroll_pane_cp035_ParamLimits

0x0638,	// (0x0001b2dc) scroll_pane_cp035

0xc315,	// (0x00026fb9) bg_button_pane_cp033

0x2035,	// (0x0001ccd9) phob2_cc_button_pane_g1

0x2041,	// (0x0001cce5) phob2_cc_button_pane_t1

0x2056,	// (0x0001ccfa) phob2_cc_button_pane_t2

0x0001,

0xfe0c,	// (0x0002aab0) phob2_cc_button_pane_t

0xad6b,	// (0x00025a0f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xad6b,	// (0x00025a0f) list_double_large_graphic_phob2_cc_pane

0xaddf,	// (0x00025a83) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaddf,	// (0x00025a83) list_double_large_graphic_phob2_cc_pane_g1

0xadf0,	// (0x00025a94) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xadf0,	// (0x00025a94) list_double_large_graphic_phob2_cc_pane_g2

0xadfc,	// (0x00025aa0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xadfc,	// (0x00025aa0) list_double_large_graphic_phob2_cc_pane_g3

0xae08,	// (0x00025aac) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xae08,	// (0x00025aac) list_double_large_graphic_phob2_cc_pane_g4

0x2068,	// (0x0001cd0c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2068,	// (0x0001cd0c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe11,	// (0x0002aab5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe11,	// (0x0002aab5) list_double_large_graphic_phob2_cc_pane_g

0xae14,	// (0x00025ab8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xae14,	// (0x00025ab8) list_double_large_graphic_phob2_cc_pane_t1

0xae3d,	// (0x00025ae1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xae3d,	// (0x00025ae1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1c,	// (0x0002aac0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1c,	// (0x0002aac0) list_double_large_graphic_phob2_cc_pane_t

0x2074,	// (0x0001cd18) list_highlight_pane_cp025_ParamLimits

0x2074,	// (0x0001cd18) list_highlight_pane_cp025

0xc315,	// (0x00026fb9) bg_button_pane_cp033_ParamLimits

0x2035,	// (0x0001ccd9) phob2_cc_button_pane_g1_ParamLimits

0x2041,	// (0x0001cce5) phob2_cc_button_pane_t1_ParamLimits

0x2056,	// (0x0001ccfa) phob2_cc_button_pane_t2_ParamLimits

0xfe0c,	// (0x0002aab0) phob2_cc_button_pane_t_ParamLimits

0x4d96,	// (0x0001fa3a) popup_wgtman_window

0x03cf,	// (0x0001b073) scroll_pane_cp038

0xa7e6,	// (0x0002548a) wgtman_btn_pane_cp_01_ParamLimits

0xa7e6,	// (0x0002548a) wgtman_btn_pane_cp_01

0x2082,	// (0x0001cd26) wgtman_content_pane

0x208b,	// (0x0001cd2f) wgtman_heading_pane

0xbe20,	// (0x00026ac4) bg_heading_pane_cp02

0x2094,	// (0x0001cd38) wgtman_heading_pane_g1

0x209c,	// (0x0001cd40) wgtman_heading_pane_t1

0x20aa,	// (0x0001cd4e) scroll_pane_cp036

0x20b2,	// (0x0001cd56) wgtman_list_pane

0x1f3a,	// (0x0001cbde) wgtman_list_pane_t1_ParamLimits

0x1f3a,	// (0x0001cbde) wgtman_list_pane_t1

0x451d,	// (0x0001f1c1) cam4_grid_pane

0x8aff,	// (0x000237a3) bg_button_pane_cp015_ParamLimits

0x8b14,	// (0x000237b8) bg_button_pane_cp016_ParamLimits

0x8b20,	// (0x000237c4) bg_button_pane_cp017_ParamLimits

0x8b78,	// (0x0002381c) popup_vitu2_query_window_g3_ParamLimits

0x8b78,	// (0x0002381c) popup_vitu2_query_window_g3

0x8c19,	// (0x000238bd) popup_vitu2_query_window_t6_ParamLimits

0x8c19,	// (0x000238bd) popup_vitu2_query_window_t6

0x8c44,	// (0x000238e8) popup_vitu2_query_window_t7_ParamLimits

0x8c44,	// (0x000238e8) popup_vitu2_query_window_t7

0x1f28,	// (0x0001cbcc) cam4_grid_pane_g1

0x1f31,	// (0x0001cbd5) cam4_grid_pane_g2

0x20ba,	// (0x0001cd5e) cam4_grid_pane_g3

0x20c3,	// (0x0001cd67) cam4_grid_pane_g4

0x0003,

0xfe21,	// (0x0002aac5) cam4_grid_pane_g

0x5504,	// (0x000201a8) aid_placing_vt_slider_lsc_ParamLimits

0x5844,	// (0x000204e8) vidtel_button_pane_ParamLimits

0x5844,	// (0x000204e8) vidtel_button_pane

0xbe20,	// (0x00026ac4) bg_button_pane_cp034

0x20ce,	// (0x0001cd72) vidtel_button_pane_g1

0x20d6,	// (0x0001cd7a) vidtel_button_pane_t1

0x0543,	// (0x0001b1e7) aid_size_vtel_slider_touch

0x0638,	// (0x0001b2dc) scroll_pane_cp039

0x981a,	// (0x000244be) ncim_query_button_pane_cp01_ParamLimits

0x9839,	// (0x000244dd) ncimui_query_pane_g1_ParamLimits

0xc315,	// (0x00026fb9) input_focus_pane_cp012_ParamLimits

0x0fc1,	// (0x0001bc65) ncim_query_entry_pane_t1_ParamLimits

0x0638,	// (0x0001b2dc) scroll_pane_cp039_ParamLimits

0xd028,	// (0x00027ccc) navi_pane_bcale_mc_g1

0xd030,	// (0x00027cd4) navi_pane_bcale_mc_t1

0x14ed,	// (0x0001c191) main_sp_fs_email_pane_g1

0x14f9,	// (0x0001c19d) main_sp_fs_email_pane_g2

0x0001,

0xfc1f,	// (0x0002a8c3) main_sp_fs_email_pane_g

0x1960,	// (0x0001c604) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1960,	// (0x0001c604) list_single_cale_mrui_row_pane_g3

0xa45e,	// (0x00025102) list_single_recal_day_pane_g5_event_pane

0x1b66,	// (0x0001c80a) list_single_recal_day_pane_g7

0x20ec,	// (0x0001cd90) list_recal_day_event_pane_cp01

0x20f5,	// (0x0001cd99) list_recal_vselct_arw_lo_pane_cp01

0x20fd,	// (0x0001cda1) list_recal_vselct_arw_up_pane_cp01

0x2105,	// (0x0001cda9) list_recal_vselct_pane_cp01

0x058f,	// (0x0001b233) list_recal_day_event_pane_cp01_g1

0x210f,	// (0x0001cdb3) list_recal_day_event_pane_cp01_t1

0x1b6e,	// (0x0001c812) list_single_recal_day_pane_t1_ParamLimits

0x1b80,	// (0x0001c824) list_single_recal_day_pane_t2_ParamLimits

0xfd04,	// (0x0002a9a8) list_single_recal_day_pane_t_ParamLimits

0xc4a6,	// (0x0002714a) bg_notes_pane_ParamLimits

0xc59b,	// (0x0002723f) list_notes_pane_ParamLimits

0x4e02,	// (0x0001faa6) scroll_pane_cp06_ParamLimits

0xc5bd,	// (0x00027261) main_notes_pane_ParamLimits

0xc315,	// (0x00026fb9) main_welc_pane

0xae88,	// (0x00025b2c) main_welc_body_pane_ParamLimits

0xae88,	// (0x00025b2c) main_welc_body_pane

0xaea1,	// (0x00025b45) main_welc_opti_pane_ParamLimits

0xaea1,	// (0x00025b45) main_welc_opti_pane

0xaefc,	// (0x00025ba0) main_welc_pane_t1_ParamLimits

0xaefc,	// (0x00025ba0) main_welc_pane_t1

0xb092,	// (0x00025d36) main_welc_body_row_pane_ParamLimits

0xb092,	// (0x00025d36) main_welc_body_row_pane

0xc513,	// (0x000271b7) main_welc_opti_row_pane_ParamLimits

0xc513,	// (0x000271b7) main_welc_opti_row_pane

0x212d,	// (0x0001cdd1) main_welc_opti_row_pane_g1

0xb0bb,	// (0x00025d5f) main_welc_opti_row_pane_t1

0x2135,	// (0x0001cdd9) main_welc_body_row_pane_t1

0x1ddc,	// (0x0001ca80) popup_notif_wgt_heading_pane

0x1df6,	// (0x0001ca9a) aid_size_list_notif_wgt_del_ParamLimits

0x1e03,	// (0x0001caa7) list_notif_wgt_row_pane_g1_ParamLimits

0x1e0f,	// (0x0001cab3) list_notif_wgt_row_pane_g2_ParamLimits

0x1e1e,	// (0x0001cac2) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6b,	// (0x0002aa0f) list_notif_wgt_row_pane_g_ParamLimits

0x1e2b,	// (0x0001cacf) list_notif_wgt_row_pane_t1_ParamLimits

0x1e41,	// (0x0001cae5) list_notif_wgt_row_pane_t2_ParamLimits

0x1e53,	// (0x0001caf7) list_notif_wgt_row_pane_t3_ParamLimits

0xfd72,	// (0x0002aa16) list_notif_wgt_row_pane_t_ParamLimits

0xa879,	// (0x0002551d) listrow_wgtman_pane_g1_ParamLimits

0xa886,	// (0x0002552a) listrow_wgtman_pane_g2_ParamLimits

0xfda2,	// (0x0002aa46) listrow_wgtman_pane_g_ParamLimits

0xa8a4,	// (0x00025548) listrow_wgtman_pane_t1_ParamLimits

0xa8bc,	// (0x00025560) listrow_wgtman_pane_t2_ParamLimits

0xfda7,	// (0x0002aa4b) listrow_wgtman_pane_t_ParamLimits

0xa8e2,	// (0x00025586) wait_bar_pane_cp09_ParamLimits

0xbe20,	// (0x00026ac4) bg_popup_heading_pane_cp02

0x2144,	// (0x0001cde8) popup_notif_wgt_heading_pane_g1

0x214c,	// (0x0001cdf0) popup_notif_wgt_heading_pane_t1

0xbe20,	// (0x00026ac4) main_vids_pane

0xbe20,	// (0x00026ac4) vids_listscroll_pane

0xb0ca,	// (0x00025d6e) scroll_pane_cp040

0xbe20,	// (0x00026ac4) vids_list_pane

0xb0d5,	// (0x00025d79) vids_list_double_pane_ParamLimits

0xb0d5,	// (0x00025d79) vids_list_double_pane

0xb0ed,	// (0x00025d91) vids_list_double_pane_g1

0xb0f6,	// (0x00025d9a) vids_list_double_pane_t1

0xb106,	// (0x00025daa) vids_list_double_pane_t2

0x0001,

0xfe40,	// (0x0002aae4) vids_list_double_pane_t

0x3bfb,	// (0x0001e89f) main_ncimui_pane_ParamLimits

0x9671,	// (0x00024315) main_ncimui_pane_g1_ParamLimits

0x967d,	// (0x00024321) main_ncimui_pane_g2_ParamLimits

0x967d,	// (0x00024321) main_ncimui_pane_g2

0x0001,

0xfb20,	// (0x0002a7c4) main_ncimui_pane_g_ParamLimits

0xfb20,	// (0x0002a7c4) main_ncimui_pane_g

0xaeba,	// (0x00025b5e) main_welc_pane_g1_ParamLimits

0xaeba,	// (0x00025b5e) main_welc_pane_g1

0xaec6,	// (0x00025b6a) main_welc_pane_g2_ParamLimits

0xaec6,	// (0x00025b6a) main_welc_pane_g2

0x0003,

0xfe2a,	// (0x0002aace) main_welc_pane_g_ParamLimits

0xfe2a,	// (0x0002aace) main_welc_pane_g

0xc4a6,	// (0x0002714a) listscroll_mce_pane_ParamLimits

0xd17d,	// (0x00027e21) wait_bar_pane_cp10

0xe492,	// (0x00029136) main_cale_day_pane_ParamLimits

0xe492,	// (0x00029136) main_cale_week_pane_ParamLimits

0xc4a6,	// (0x0002714a) main_messa_pane_ParamLimits

0x7ead,	// (0x00022b51) main_clock2_btn_pane_ParamLimits

0x7ead,	// (0x00022b51) main_clock2_btn_pane

0xed14,	// (0x000299b8) main_clock2_btn_pane_cp01_ParamLimits

0xed14,	// (0x000299b8) main_clock2_btn_pane_cp01

0x18ec,	// (0x0001c590) list_cale_mrui_pane_ParamLimits

0x1e89,	// (0x0001cb2d) main_cf0_pane_g2

0x0001,

0xfd79,	// (0x0002aa1d) main_cf0_pane_g

0xaa89,	// (0x0002572d) area_left_week_number_pane_ParamLimits

0xaa9c,	// (0x00025740) area_top_day_name_pane_ParamLimits

0xaaaa,	// (0x0002574e) frame_month_view_pane_ParamLimits

0x1fde,	// (0x0001cc82) grid_month_view_pane_ParamLimits

0x1fec,	// (0x0001cc90) frm_month_g1_ParamLimits

0xab28,	// (0x000257cc) frm_month_g2_ParamLimits

0xab39,	// (0x000257dd) frm_month_g3_ParamLimits

0xab4a,	// (0x000257ee) frm_month_g4_ParamLimits

0xab5b,	// (0x000257ff) frm_month_g5_ParamLimits

0xab6e,	// (0x00025812) frm_month_g6_ParamLimits

0xab81,	// (0x00025825) frm_month_g7_ParamLimits

0x1ff9,	// (0x0001cc9d) frm_month_g8_ParamLimits

0xab94,	// (0x00025838) frm_month_g9_ParamLimits

0xaba1,	// (0x00025845) frm_month_g10_ParamLimits

0xabae,	// (0x00025852) frm_month_g11_ParamLimits

0xabbb,	// (0x0002585f) frm_month_g12_ParamLimits

0xabc8,	// (0x0002586c) frm_month_g13_ParamLimits

0xabd5,	// (0x00025879) frm_month_g14_ParamLimits

0xabe4,	// (0x00025888) frm_month_g15_ParamLimits

0xabf3,	// (0x00025897) frm_month_g16_ParamLimits

0xfdd1,	// (0x0002aa75) frm_month_g_ParamLimits

0x2006,	// (0x0001ccaa) cell_top_day_name_pane_t1_ParamLimits

0xac02,	// (0x000258a6) cell_area_left_week_number_pane_g1_ParamLimits

0xac11,	// (0x000258b5) cell_area_left_week_number_pane_t1_ParamLimits

0xc521,	// (0x000271c5) cell_month_view_pane_g1_ParamLimits

0xac27,	// (0x000258cb) cell_month_view_pane_t1_ParamLimits

0xc49e,	// (0x00027142) main_clock2_btn_pane_g1

0x215a,	// (0x0001cdfe) main_clock2_btn_pane_t1

0xc315,	// (0x00026fb9) listscroll_cmail_pane_ParamLimits

0x14ed,	// (0x0001c191) main_sp_fs_email_pane_g1_ParamLimits

0x14f9,	// (0x0001c19d) main_sp_fs_email_pane_g2_ParamLimits

0xfc1f,	// (0x0002a8c3) main_sp_fs_email_pane_g_ParamLimits

0x1ad6,	// (0x0001c77a) list_recal_day_pane_ParamLimits

0x1ae7,	// (0x0001c78b) mian_recal_day_pane_t1

0x9e15,	// (0x00024ab9) list_single_dyc_row_text_pane_t4_ParamLimits

0x9e15,	// (0x00024ab9) list_single_dyc_row_text_pane_t4

0x9e4c,	// (0x00024af0) list_single_dyc_row_text_pane_t5_ParamLimits

0x9e4c,	// (0x00024af0) list_single_dyc_row_text_pane_t5

0x159b,	// (0x0001c23f) list_single_dyc_row_text_pane_t6_ParamLimits

0x159b,	// (0x0001c23f) list_single_dyc_row_text_pane_t6

0x6663,	// (0x00021307) aid_mgn_list_cale_time_pane

0x3bfb,	// (0x0001e89f) main_gallery2_pane_ParamLimits

0xed2a,	// (0x000299ce) main_clock2_pane_cp01_t1

0xed38,	// (0x000299dc) main_clock2_pane_cp01_t3

0x0001,

0xf70f,	// (0x0002a3b3) main_clock2_pane_cp01_t

0x512c,	// (0x0001fdd0) cale_week_scroll_pane_g16_ParamLimits

0x512c,	// (0x0001fdd0) cale_week_scroll_pane_g16

0xc786,	// (0x0002742a) vorec_slider_pane

0x20d6,	// (0x0001cd7a) vidtel_button_pane_t1_ParamLimits

0xa4b9,	// (0x0002515d) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa4b9,	// (0x0002515d) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa4c6,	// (0x0002516a) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa4c6,	// (0x0002516a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd27,	// (0x0002a9cb) main_fs_bigclock_clock_pane_g_ParamLimits

0xa4d2,	// (0x00025176) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa4e5,	// (0x00025189) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd30,	// (0x0002a9d4) main_fs_bigclock_clock_pane_t_ParamLimits

0x7852,	// (0x000224f6) main_mup3_lyrics_pane_ParamLimits

0x7852,	// (0x000224f6) main_mup3_lyrics_pane

0xb114,	// (0x00025db8) main_mup3_lyrics_pane_t1_ParamLimits

0xb114,	// (0x00025db8) main_mup3_lyrics_pane_t1

0x3fbb,	// (0x0001ec5f) aid_main_mp4_pane_t1_area

0x3fc5,	// (0x0001ec69) aid_main_mp4_pane_t2_area

0x40ca,	// (0x0001ed6e) main_mp4_pane_g7_ParamLimits

0x40ca,	// (0x0001ed6e) main_mp4_pane_g7

0x40d6,	// (0x0001ed7a) main_mp4_pane_g8_ParamLimits

0x40d6,	// (0x0001ed7a) main_mp4_pane_g8

0x828b,	// (0x00022f2f) aid_call6_pane_g1_size

0xadb1,	// (0x00025a55) list_double_large_graphic_phob2_other_pane_ParamLimits

0xadb1,	// (0x00025a55) list_double_large_graphic_phob2_other_pane

0xcb01,	// (0x000277a5) list_double_large_graphic_phob2_other_pane_g1

0xbe20,	// (0x00026ac4) list_highlight_pane_cp026

0xc315,	// (0x00026fb9) main_welc_pane_ParamLimits

0x9c84,	// (0x00024928) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9c84,	// (0x00024928) main_sp_fs_ctrlbar_pane_g3

0x9c9c,	// (0x00024940) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9c9c,	// (0x00024940) main_sp_fs_ctrlbar_pane_g4

0x9cce,	// (0x00024972) toolbar2_fixed_button_pane_cp01

0x9cd9,	// (0x0002497d) toolbar2_fixed_button_pane_cp02

0x9ce4,	// (0x00024988) toolbar2_fixed_button_pane_cp03

0xae78,	// (0x00025b1c) list_welc_entry_pane_ParamLimits

0xae78,	// (0x00025b1c) list_welc_entry_pane

0xaed4,	// (0x00025b78) main_welc_pane_g3_ParamLimits

0xaed4,	// (0x00025b78) main_welc_pane_g3

0xaf16,	// (0x00025bba) main_welc_pane_t2_ParamLimits

0xaf16,	// (0x00025bba) main_welc_pane_t2

0xaf2a,	// (0x00025bce) main_welc_pane_t3_ParamLimits

0xaf2a,	// (0x00025bce) main_welc_pane_t3

0x0005,

0xfe33,	// (0x0002aad7) main_welc_pane_t_ParamLimits

0xfe33,	// (0x0002aad7) main_welc_pane_t

0xb026,	// (0x00025cca) welc_button_pane_ParamLimits

0xb026,	// (0x00025cca) welc_button_pane

0xb084,	// (0x00025d28) welc_service_logo_pane_ParamLimits

0xb084,	// (0x00025d28) welc_service_logo_pane

0xb14a,	// (0x00025dee) list_single_welc_entry_pane_ParamLimits

0xb14a,	// (0x00025dee) list_single_welc_entry_pane

0xb15b,	// (0x00025dff) list_single_welc_entry_pane_g1

0xb163,	// (0x00025e07) list_single_welc_entry_pane_t1

0xb171,	// (0x00025e15) list_single_welc_entry_pane_t2

0x0001,

0xfe45,	// (0x0002aae9) list_single_welc_entry_pane_t

0xbe20,	// (0x00026ac4) bg_button_pane_cp035

0xb17f,	// (0x00025e23) welc_button_pane_t1

0x2176,	// (0x0001ce1a) welc_service_logo_pane_g1

0x217f,	// (0x0001ce23) welc_service_logo_pane_g2

0x0001,

0xfe4a,	// (0x0002aaee) welc_service_logo_pane_g

0x37a5,	// (0x0001e449) main_int_radio_pane

0x0e5f,	// (0x0001bb03) list_single_fs_dyc_pane_g1

0xacca,	// (0x0002596e) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xacca,	// (0x0002596e) list_double_large_graphic_phob2_pane_g3

0xacd6,	// (0x0002597a) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xacd6,	// (0x0002597a) list_double_large_graphic_phob2_pane_g4

0xb18d,	// (0x00025e31) main_int_radio1_pane_ParamLimits

0xb18d,	// (0x00025e31) main_int_radio1_pane

0x2188,	// (0x0001ce2c) find_pane_cp02

0xb19f,	// (0x00025e43) input_focus_pane_cp12_ParamLimits

0xb19f,	// (0x00025e43) input_focus_pane_cp12

0xb1ab,	// (0x00025e4f) input_focus_pane_cp13_ParamLimits

0xb1ab,	// (0x00025e4f) input_focus_pane_cp13

0xb1c3,	// (0x00025e67) input_focus_pane_cp14_ParamLimits

0xb1c3,	// (0x00025e67) input_focus_pane_cp14

0x2191,	// (0x0001ce35) int_radio1_listscroll_pane

0xb1db,	// (0x00025e7f) main_int_radio1_pane_g1_ParamLimits

0xb1db,	// (0x00025e7f) main_int_radio1_pane_g1

0xb1eb,	// (0x00025e8f) main_int_radio1_pane_t1_ParamLimits

0xb1eb,	// (0x00025e8f) main_int_radio1_pane_t1

0xb1ff,	// (0x00025ea3) main_int_radio1_pane_t2_ParamLimits

0xb1ff,	// (0x00025ea3) main_int_radio1_pane_t2

0xb213,	// (0x00025eb7) main_int_radio1_pane_t3_ParamLimits

0xb213,	// (0x00025eb7) main_int_radio1_pane_t3

0xb227,	// (0x00025ecb) main_int_radio1_pane_t4_ParamLimits

0xb227,	// (0x00025ecb) main_int_radio1_pane_t4

0x219b,	// (0x0001ce3f) main_int_radio1_pane_t5_ParamLimits

0x219b,	// (0x0001ce3f) main_int_radio1_pane_t5

0xb23e,	// (0x00025ee2) main_int_radio1_pane_t6_ParamLimits

0xb23e,	// (0x00025ee2) main_int_radio1_pane_t6

0xb250,	// (0x00025ef4) main_int_radio1_pane_t7_ParamLimits

0xb250,	// (0x00025ef4) main_int_radio1_pane_t7

0xb262,	// (0x00025f06) main_int_radio1_pane_t8_ParamLimits

0xb262,	// (0x00025f06) main_int_radio1_pane_t8

0xb276,	// (0x00025f1a) main_int_radio1_pane_t9_ParamLimits

0xb276,	// (0x00025f1a) main_int_radio1_pane_t9

0xb288,	// (0x00025f2c) main_int_radio1_pane_t10_ParamLimits

0xb288,	// (0x00025f2c) main_int_radio1_pane_t10

0xb2b9,	// (0x00025f5d) main_int_radio1_pane_t11_ParamLimits

0xb2b9,	// (0x00025f5d) main_int_radio1_pane_t11

0xb2ea,	// (0x00025f8e) main_int_radio1_pane_t12_ParamLimits

0xb2ea,	// (0x00025f8e) main_int_radio1_pane_t12

0x000b,

0xfe4f,	// (0x0002aaf3) main_int_radio1_pane_t_ParamLimits

0xfe4f,	// (0x0002aaf3) main_int_radio1_pane_t

0x21ad,	// (0x0001ce51) int_radio_list_pane

0x1ab9,	// (0x0001c75d) scroll_pane_cp037

0x21b5,	// (0x0001ce59) list_double_large_graphic_int_radio_pane_ParamLimits

0x21b5,	// (0x0001ce59) list_double_large_graphic_int_radio_pane

0x21ce,	// (0x0001ce72) list_double_large_graphic_int_radio_pane_g1

0x21d7,	// (0x0001ce7b) list_double_large_graphic_int_radio_pane_t1

0x21e5,	// (0x0001ce89) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe68,	// (0x0002ab0c) list_double_large_graphic_int_radio_pane_t

0xbe20,	// (0x00026ac4) list_highlight_pane_cp027

0x211d,	// (0x0001cdc1) main_button_pane_4

0xaee0,	// (0x00025b84) main_welc_pane_g4_ParamLimits

0xaee0,	// (0x00025b84) main_welc_pane_g4

0xaf3c,	// (0x00025be0) main_welc_pane_t4_ParamLimits

0xaf3c,	// (0x00025be0) main_welc_pane_t4

0xaf4e,	// (0x00025bf2) main_welc_pane_t5_ParamLimits

0xaf4e,	// (0x00025bf2) main_welc_pane_t5

0xaf7e,	// (0x00025c22) main_welc_pane_t6_ParamLimits

0xaf7e,	// (0x00025c22) main_welc_pane_t6

0xb034,	// (0x00025cd8) welc_button_pane_2_ParamLimits

0xb034,	// (0x00025cd8) welc_button_pane_2

0xb04c,	// (0x00025cf0) welc_button_pane_3_ParamLimits

0xb04c,	// (0x00025cf0) welc_button_pane_3

0x2125,	// (0x0001cdc9) welc_button_pane_4

0xb066,	// (0x00025d0a) welc_button_pane_5_ParamLimits

0xb066,	// (0x00025d0a) welc_button_pane_5

0x3551,	// (0x0001e1f5) main_popup_welc_pane

0x220b,	// (0x0001ceaf) main_welc_sk_g3

0x2215,	// (0x0001ceb9) main_welc_sk_g4

0x221f,	// (0x0001cec3) main_welc_sk_t3

0x222f,	// (0x0001ced3) main_welc_sk_t4

0x223f,	// (0x0001cee3) popup_welc_pane_t4

0x224d,	// (0x0001cef1) popup_welc_pane_t5

0x225b,	// (0x0001ceff) popup_welc_pane_t6

0x37a5,	// (0x0001e449) main_acti_pane

0xbe20,	// (0x00026ac4) main_sso_pane

0xb301,	// (0x00025fa5) sso_body_pane_ParamLimits

0xb301,	// (0x00025fa5) sso_body_pane

0xb30f,	// (0x00025fb3) sso_logo_pane_ParamLimits

0xb30f,	// (0x00025fb3) sso_logo_pane

0xb340,	// (0x00025fe4) sso_sk_pane_ParamLimits

0xb340,	// (0x00025fe4) sso_sk_pane

0x2299,	// (0x0001cf3d) main_sso_logo_pane_g1

0xb34d,	// (0x00025ff1) sso_sk_pane_t1_ParamLimits

0xb34d,	// (0x00025ff1) sso_sk_pane_t1

0xb361,	// (0x00026005) sso_sk_pane_t2_ParamLimits

0xb361,	// (0x00026005) sso_sk_pane_t2

0x0001,

0xfe6d,	// (0x0002ab11) sso_sk_pane_t_ParamLimits

0xfe6d,	// (0x0002ab11) sso_sk_pane_t

0x22a4,	// (0x0001cf48) aid_sso_gap

0x22ad,	// (0x0001cf51) aid_sso_txt1

0x22b7,	// (0x0001cf5b) aid_sso_txt2

0x22c1,	// (0x0001cf65) aid_sso_txt3

0x0002,

0xfe72,	// (0x0002ab16) aid_sso_txt

0x22cb,	// (0x0001cf6f) aid_sso_widget

0xb3be,	// (0x00026062) sso_btn_pane_ParamLimits

0xb3be,	// (0x00026062) sso_btn_pane

0xb432,	// (0x000260d6) sso_option_pane_ParamLimits

0xb432,	// (0x000260d6) sso_option_pane

0xb4de,	// (0x00026182) sso_query_pane_ParamLimits

0xb4de,	// (0x00026182) sso_query_pane

0xb52e,	// (0x000261d2) sso_query_pane_cp01_ParamLimits

0xb52e,	// (0x000261d2) sso_query_pane_cp01

0xb580,	// (0x00026224) sso_t_hdr_pane_ParamLimits

0xb580,	// (0x00026224) sso_t_hdr_pane

0xb5a4,	// (0x00026248) sso_t_nml_pane_ParamLimits

0xb5a4,	// (0x00026248) sso_t_nml_pane

0x22d5,	// (0x0001cf79) sso_t_sub_pane

0xb31c,	// (0x00025fc0) sso_popup_window_ParamLimits

0xb31c,	// (0x00025fc0) sso_popup_window

0xb373,	// (0x00026017) sso_apps_pane_ParamLimits

0xb373,	// (0x00026017) sso_apps_pane

0xb396,	// (0x0002603a) sso_body_pane_g1

0xb39e,	// (0x00026042) sso_body_pane_t1

0xb3ae,	// (0x00026052) sso_body_pane_t2

0x0001,

0xfe79,	// (0x0002ab1d) sso_body_pane_t

0xb402,	// (0x000260a6) sso_btn_pane_cp01_ParamLimits

0xb402,	// (0x000260a6) sso_btn_pane_cp01

0xb4b0,	// (0x00026154) sso_prog_pane_ParamLimits

0xb4b0,	// (0x00026154) sso_prog_pane

0xb5f4,	// (0x00026298) sso_t_hdr_pane_t1_ParamLimits

0xb5f4,	// (0x00026298) sso_t_hdr_pane_t1

0x22ea,	// (0x0001cf8e) input_focus_pane_cp10_ParamLimits

0x22ea,	// (0x0001cf8e) input_focus_pane_cp10

0x22fe,	// (0x0001cfa2) sso_query_pane_t1_ParamLimits

0x22fe,	// (0x0001cfa2) sso_query_pane_t1

0x2311,	// (0x0001cfb5) sso_query_pane_t2_ParamLimits

0x2311,	// (0x0001cfb5) sso_query_pane_t2

0x232a,	// (0x0001cfce) sso_query_pane_t3_ParamLimits

0x232a,	// (0x0001cfce) sso_query_pane_t3

0x2354,	// (0x0001cff8) sso_query_pane_t4_ParamLimits

0x2354,	// (0x0001cff8) sso_query_pane_t4

0x0003,

0xfe7e,	// (0x0002ab22) sso_query_pane_t_ParamLimits

0xfe7e,	// (0x0002ab22) sso_query_pane_t

0x2202,	// (0x0001cea6) bg_button_pane_cp22

0x21f3,	// (0x0001ce97) sso_btn_pane_t1

0xb60d,	// (0x000262b1) sso_t_nml_pane_t1_ParamLimits

0xb60d,	// (0x000262b1) sso_t_nml_pane_t1

0x2378,	// (0x0001d01c) sso_option_row_pane_ParamLimits

0x2378,	// (0x0001d01c) sso_option_row_pane

0x2385,	// (0x0001d029) sso_t_sub_pane_t1_ParamLimits

0x2385,	// (0x0001d029) sso_t_sub_pane_t1

0xc315,	// (0x00026fb9) bg_popup_window_pane_cp11_ParamLimits

0xc315,	// (0x00026fb9) bg_popup_window_pane_cp11

0x23a2,	// (0x0001d046) popup_sk_window_cp01_ParamLimits

0x23a2,	// (0x0001d046) popup_sk_window_cp01

0x23af,	// (0x0001d053) sso_popup_body_pane_ParamLimits

0x23af,	// (0x0001d053) sso_popup_body_pane

0x23bc,	// (0x0001d060) scroll_pane_cp21_ParamLimits

0x23bc,	// (0x0001d060) scroll_pane_cp21

0x23c9,	// (0x0001d06d) sso_popup_body_t_pane_ParamLimits

0x23c9,	// (0x0001d06d) sso_popup_body_t_pane

0x23d6,	// (0x0001d07a) sso_popup_body_t_hdr_pane_ParamLimits

0x23d6,	// (0x0001d07a) sso_popup_body_t_hdr_pane

0xb62a,	// (0x000262ce) sso_popup_body_t_nml_pane_ParamLimits

0xb62a,	// (0x000262ce) sso_popup_body_t_nml_pane

0xb648,	// (0x000262ec) sso_popup_body_t_sub_pane_ParamLimits

0xb648,	// (0x000262ec) sso_popup_body_t_sub_pane

0x23e8,	// (0x0001d08c) sso_popup_body_t_hdr_pane_t1

0xb66b,	// (0x0002630f) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb66b,	// (0x0002630f) sso_popup_body_t_nml_pane_t1

0x23f8,	// (0x0001d09c) sso_popup_body_t_sub_pane_t1_ParamLimits

0x23f8,	// (0x0001d09c) sso_popup_body_t_sub_pane_t1

0xc55f,	// (0x00027203) sso_prog_pane_g1

0xb6b2,	// (0x00026356) sso_apps_pane_comp1_ParamLimits

0xb6b2,	// (0x00026356) sso_apps_pane_comp1

0x241d,	// (0x0001d0c1) sso_apps_pane_comp1_g1

0x2425,	// (0x0001d0c9) sso_apps_pane_comp1_t1

0x2441,	// (0x0001d0e5) sso_option_row_pane_g1

0x2449,	// (0x0001d0ed) sso_option_row_pane_t1

0x1681,	// (0x0001c325) list_cmail_pane_ParamLimits

0xbe20,	// (0x00026ac4) main_call7_pane

0xae66,	// (0x00025b0a) bg_welc_area_ParamLimits

0xae66,	// (0x00025b0a) bg_welc_area

0xafb4,	// (0x00025c58) sso_t_hdr_pane_a_t1_ParamLimits

0xafb4,	// (0x00025c58) sso_t_hdr_pane_a_t1

0xafc8,	// (0x00025c6c) sso_t_nml_pane_a_t1_ParamLimits

0xafc8,	// (0x00025c6c) sso_t_nml_pane_a_t1

0xaff2,	// (0x00025c96) sso_t_sub_pane_a_t1_ParamLimits

0xaff2,	// (0x00025c96) sso_t_sub_pane_a_t1

0xb076,	// (0x00025d1a) welc_button_pane_cp01_ParamLimits

0xb076,	// (0x00025d1a) welc_button_pane_cp01

0x21f3,	// (0x0001ce97) sso_btn_pane_t1_copy1

0x2202,	// (0x0001cea6) welc_button_pane_2_comp1

0x2269,	// (0x0001cf0d) sso_t_hdr_pane_p_t1

0x2279,	// (0x0001cf1d) sso_t_nml_pane_p_t1

0x2289,	// (0x0001cf2d) sso_t_sub_pane_p_t1

0xbe20,	// (0x00026ac4) main_att_pane

0xbe20,	// (0x00026ac4) main_vod_pane

0x22d5,	// (0x0001cf79) sso_t_sub_pane_ParamLimits

0x2433,	// (0x0001d0d7) input_focus_pane_cp10_t1

0x2449,	// (0x0001d0ed) sso_option_row_pane_t1_ParamLimits

0xb6cc,	// (0x00026370) main_att_body_pane_ParamLimits

0xb6cc,	// (0x00026370) main_att_body_pane

0xb6e0,	// (0x00026384) att_btn_emg_pane_ParamLimits

0xb6e0,	// (0x00026384) att_btn_emg_pane

0xb6f8,	// (0x0002639c) att_btn_pane_ParamLimits

0xb6f8,	// (0x0002639c) att_btn_pane

0xb760,	// (0x00026404) att_btn_pane_cp01_ParamLimits

0xb760,	// (0x00026404) att_btn_pane_cp01

0xb77a,	// (0x0002641e) att_li_srv_pane_ParamLimits

0xb77a,	// (0x0002641e) att_li_srv_pane

0xb78c,	// (0x00026430) att_opt_pane_ParamLimits

0xb78c,	// (0x00026430) att_opt_pane

0xb7d0,	// (0x00026474) att_query_pane_ParamLimits

0xb7d0,	// (0x00026474) att_query_pane

0xb840,	// (0x000264e4) att_query_pane_cp01_ParamLimits

0xb840,	// (0x000264e4) att_query_pane_cp01

0xb884,	// (0x00026528) att_t_hdr_pane_ParamLimits

0xb884,	// (0x00026528) att_t_hdr_pane

0xb8ea,	// (0x0002658e) att_t_nml_pane_ParamLimits

0xb8ea,	// (0x0002658e) att_t_nml_pane

0xb952,	// (0x000265f6) att_t_nml_pane_cp01_ParamLimits

0xb952,	// (0x000265f6) att_t_nml_pane_cp01

0xb976,	// (0x0002661a) att_t_nmlb_pane_ParamLimits

0xb976,	// (0x0002661a) att_t_nmlb_pane

0xb9da,	// (0x0002667e) att_term_pane_ParamLimits

0xb9da,	// (0x0002667e) att_term_pane

0xba1c,	// (0x000266c0) main_att_body_pane_g1_ParamLimits

0xba1c,	// (0x000266c0) main_att_body_pane_g1

0x2462,	// (0x0001d106) att_t_hdr_pane_t1_ParamLimits

0x2462,	// (0x0001d106) att_t_hdr_pane_t1

0x247b,	// (0x0001d11f) att_t_nml_pane_t1_ParamLimits

0x247b,	// (0x0001d11f) att_t_nml_pane_t1

0x24a0,	// (0x0001d144) att_btn_pane_t1

0x2202,	// (0x0001cea6) bg_button_pane_cp23

0xba46,	// (0x000266ea) att_li_srv_row_pane_ParamLimits

0xba46,	// (0x000266ea) att_li_srv_row_pane

0x24b0,	// (0x0001d154) att_t_nmlb_pane_t1_ParamLimits

0x24b0,	// (0x0001d154) att_t_nmlb_pane_t1

0x24ce,	// (0x0001d172) att_query_pane_t1

0x24dd,	// (0x0001d181) att_query_pane_t2

0x24ec,	// (0x0001d190) att_query_pane_t3

0x0002,

0xfe87,	// (0x0002ab2b) att_query_pane_t

0x24fb,	// (0x0001d19f) input_focus_pane_cp11

0x2504,	// (0x0001d1a8) att_term_pane_t1_ParamLimits

0x2504,	// (0x0001d1a8) att_term_pane_t1

0xbe20,	// (0x00026ac4) att_opt_row_pane

0x2441,	// (0x0001d0e5) att_opt_row_pane_g1

0x2521,	// (0x0001d1c5) att_opt_row_pane_t1_ParamLimits

0x2521,	// (0x0001d1c5) att_opt_row_pane_t1

0xba56,	// (0x000266fa) att_li_srv_row_pane_g1

0xba5e,	// (0x00026702) att_li_srv_row_pane_t1_ParamLimits

0xba5e,	// (0x00026702) att_li_srv_row_pane_t1

0xba73,	// (0x00026717) att_li_srv_row_pane_t2_ParamLimits

0xba73,	// (0x00026717) att_li_srv_row_pane_t2

0x0001,

0xfe8e,	// (0x0002ab32) att_li_srv_row_pane_t_ParamLimits

0xfe8e,	// (0x0002ab32) att_li_srv_row_pane_t

0x253a,	// (0x0001d1de) att_btn_close_pane_g1

0xbe20,	// (0x00026ac4) bg_button_pane_cp24

0xba88,	// (0x0002672c) main_vod_body_pane_ParamLimits

0xba88,	// (0x0002672c) main_vod_body_pane

0xba96,	// (0x0002673a) main_vod_body_pane_g1_ParamLimits

0xba96,	// (0x0002673a) main_vod_body_pane_g1

0xbac6,	// (0x0002676a) scroll_pane_cp24_ParamLimits

0xbac6,	// (0x0002676a) scroll_pane_cp24

0xbb0e,	// (0x000267b2) vod_btn_pane_ParamLimits

0xbb0e,	// (0x000267b2) vod_btn_pane

0xbb4c,	// (0x000267f0) vod_det_pane_ParamLimits

0xbb4c,	// (0x000267f0) vod_det_pane

0xbb76,	// (0x0002681a) vod_logo_g1_ParamLimits

0xbb76,	// (0x0002681a) vod_logo_g1

0xbbb0,	// (0x00026854) vod_opt_pane_ParamLimits

0xbbb0,	// (0x00026854) vod_opt_pane

0xbbe0,	// (0x00026884) vod_opt_pane_cp01_ParamLimits

0xbbe0,	// (0x00026884) vod_opt_pane_cp01

0xbc08,	// (0x000268ac) vod_query_pane_ParamLimits

0xbc08,	// (0x000268ac) vod_query_pane

0xbc30,	// (0x000268d4) vod_query_pane_cp01_ParamLimits

0xbc30,	// (0x000268d4) vod_query_pane_cp01

0xbc3c,	// (0x000268e0) vod_t_nml_pane_ParamLimits

0xbc3c,	// (0x000268e0) vod_t_nml_pane

0xbcde,	// (0x00026982) vod_t_nml_pane_cp01_ParamLimits

0xbcde,	// (0x00026982) vod_t_nml_pane_cp01

0xbd16,	// (0x000269ba) vod_t_sub_pane_ParamLimits

0xbd16,	// (0x000269ba) vod_t_sub_pane

0xbd42,	// (0x000269e6) vod_t_sub_pane_cp01_ParamLimits

0xbd42,	// (0x000269e6) vod_t_sub_pane_cp01

0x24fb,	// (0x0001d19f) vod_query_field_pane

0x2542,	// (0x0001d1e6) vod_query_pane_t1

0x2202,	// (0x0001cea6) bg_button_pane_cp25

0x21f3,	// (0x0001ce97) sso_btn_pane_t1_copy2

0xbd6a,	// (0x00026a0e) vod_t_nml_pane_t1_ParamLimits

0xbd6a,	// (0x00026a0e) vod_t_nml_pane_t1

0x2551,	// (0x0001d1f5) vod_opt_row_pane_ParamLimits

0x2551,	// (0x0001d1f5) vod_opt_row_pane

0x2563,	// (0x0001d207) vod_t_sub_pane_t1_ParamLimits

0x2563,	// (0x0001d207) vod_t_sub_pane_t1

0x257c,	// (0x0001d220) vod_det_cell_pane_ParamLimits

0x257c,	// (0x0001d220) vod_det_cell_pane

0xbe20,	// (0x00026ac4) input_focus_pane_cp15

0x258d,	// (0x0001d231) vod_query_field_pane_t1

0x259b,	// (0x0001d23f) vod_opt_row_pane_g1_ParamLimits

0x259b,	// (0x0001d23f) vod_opt_row_pane_g1

0x25a7,	// (0x0001d24b) vod_opt_row_pane_t1_ParamLimits

0x25a7,	// (0x0001d24b) vod_opt_row_pane_t1

0x25c6,	// (0x0001d26a) vod_det_cell_field_pane

0x25cf,	// (0x0001d273) vod_det_cell_pane_g1

0x25d7,	// (0x0001d27b) vod_det_cell_pane_t1

0xbe20,	// (0x00026ac4) input_focus_pane_cp16

0x25e6,	// (0x0001d28a) vod_det_cell_field_pane_t1

0xbd9f,	// (0x00026a43) call7_btn_grp_pane_ParamLimits

0xbd9f,	// (0x00026a43) call7_btn_grp_pane

0xbdae,	// (0x00026a52) call7_bubble_pane_ParamLimits

0xbdae,	// (0x00026a52) call7_bubble_pane

0xbdbc,	// (0x00026a60) cell_call7_btn_pane_ParamLimits

0xbdbc,	// (0x00026a60) cell_call7_btn_pane

0xbdcb,	// (0x00026a6f) call7_pane_g1_ParamLimits

0xbdcb,	// (0x00026a6f) call7_pane_g1

0xbdda,	// (0x00026a7e) call7_windows_conf_pane_ParamLimits

0xbdda,	// (0x00026a7e) call7_windows_conf_pane

0xbdf6,	// (0x00026a9a) popup_call7_1st_window_ParamLimits

0xbdf6,	// (0x00026a9a) popup_call7_1st_window

0xbe04,	// (0x00026aa8) popup_call7_2nd_window_ParamLimits

0xbe04,	// (0x00026aa8) popup_call7_2nd_window

0xbe12,	// (0x00026ab6) popup_call7_3rd_window_ParamLimits

0xbe12,	// (0x00026ab6) popup_call7_3rd_window

0xbe20,	// (0x00026ac4) bg_button_pane_cp26

0x1f06,	// (0x0001cbaa) cell_call7_btn_pane_g1

0x1f0f,	// (0x0001cbb3) cell_call7_btn_pane_t1

0xbe20,	// (0x00026ac4) bg_popup_window_pane_cp12

0x25f4,	// (0x0001d298) popup_call7_1st_window_g1

0x25fc,	// (0x0001d2a0) popup_call7_1st_window_g2

0x2604,	// (0x0001d2a8) popup_call7_1st_window_g3

0x0002,

0xfe93,	// (0x0002ab37) popup_call7_1st_window_g

0x260c,	// (0x0001d2b0) popup_call7_1st_window_t1

0x261b,	// (0x0001d2bf) popup_call7_1st_window_t2

0x2629,	// (0x0001d2cd) popup_call7_1st_window_t3

0x0002,

0xfe9a,	// (0x0002ab3e) popup_call7_1st_window_t

0xbe20,	// (0x00026ac4) bg_popup_window_pane_cp13

0x2637,	// (0x0001d2db) popup_call7_2nd_window_g1

0x263f,	// (0x0001d2e3) popup_call7_2nd_window_g2

0x2647,	// (0x0001d2eb) popup_call7_2nd_window_g3

0x0002,

0xfea1,	// (0x0002ab45) popup_call7_2nd_window_g

0x264f,	// (0x0001d2f3) popup_call7_2nd_window_t1

0xbe20,	// (0x00026ac4) bg_popup_window_pane_cp14

0x265e,	// (0x0001d302) call7_list_conf_pane

0x2666,	// (0x0001d30a) call7_list_conf_row_pane_ParamLimits

0x2666,	// (0x0001d30a) call7_list_conf_row_pane

0x2679,	// (0x0001d31d) call7_list_conf_row_pane_g1

0x2681,	// (0x0001d325) call7_list_conf_row_pane_g2

0x0001,

0xfea8,	// (0x0002ab4c) call7_list_conf_row_pane_g

0x2689,	// (0x0001d32d) call7_list_conf_row_pane_t1

0xbe20,	// (0x00026ac4) list_highlight_pane_cp22

0xb482,	// (0x00026126) sso_option_pane_cp01_ParamLimits

0xb482,	// (0x00026126) sso_option_pane_cp01

0xc4a6,	// (0x0002714a) msg_header_pane_ParamLimits

0xd301,	// (0x00027fa5) bg_button_pane_cp01_ParamLimits

0xd315,	// (0x00027fb9) input_focus_pane_cp07_ParamLimits

0x9d18,	// (0x000249bc) popup_email_progress_window

0xc55f,	// (0x00027203) popup_email_progress_window_g1

0x2697,	// (0x0001d33b) popup_email_progress_window_g2

0x0001,

0xfead,	// (0x0002ab51) popup_email_progress_window_g

0x269f,	// (0x0001d343) popup_email_progress_window_t1
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
