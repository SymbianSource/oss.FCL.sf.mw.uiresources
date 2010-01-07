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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006fd3d };

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
0x2099,	// (0x00071dd6) Screen

0x20a5,	// (0x00071de2) application_window

0x20ff,	// (0x00071e3c) area_bottom_pane_ParamLimits

0x20ff,	// (0x00071e3c) area_bottom_pane

0x215c,	// (0x00071e99) area_top_pane_ParamLimits

0x215c,	// (0x00071e99) area_top_pane

0x21b9,	// (0x00071ef6) call_video_uplink_pane_ParamLimits

0x21b9,	// (0x00071ef6) call_video_uplink_pane

0x21ea,	// (0x00071f27) main_pane_ParamLimits

0x21ea,	// (0x00071f27) main_pane

0xccb8,	// (0x0007c9f5) context_pane

0x5bd0,	// (0x0007590d) navi_pane

0x5bf8,	// (0x00075935) popup_cale_events_window_ParamLimits

0x5bf8,	// (0x00075935) popup_cale_events_window

0xcccb,	// (0x0007ca08) popup_mup_playback_window

0x5c10,	// (0x0007594d) signal_pane

0x2da0,	// (0x00072add) main_browser_pane

0xb81d,	// (0x0007b55a) main_burst_pane

0x5922,	// (0x0007565f) main_calc_pane

0xb81d,	// (0x0007b55a) main_cale_day_pane

0x2da0,	// (0x00072add) main_cale_month_pane

0xb81d,	// (0x0007b55a) main_cale_week_pane

0xb81d,	// (0x0007b55a) main_call_pane

0x27e6,	// (0x00072523) main_call_poc_pane

0xb81d,	// (0x0007b55a) main_camera_pane

0xb81d,	// (0x0007b55a) main_chi_dic_pane

0xb6a2,	// (0x0007b3df) main_clock_pane

0x27e6,	// (0x00072523) main_fmradio_pane

0xb81d,	// (0x0007b55a) main_graph_messa_pane

0x27e6,	// (0x00072523) main_help_pane

0x2da0,	// (0x00072add) main_im_pane

0x2a41,	// (0x0007277e) main_image_pane_ParamLimits

0x2a41,	// (0x0007277e) main_image_pane

0x27e6,	// (0x00072523) main_location2_pane

0xb81d,	// (0x0007b55a) main_location_pane

0x27e6,	// (0x00072523) main_messa_pane

0x27e6,	// (0x00072523) main_mp2_pane

0xb81d,	// (0x0007b55a) main_mp_pane

0x27e6,	// (0x00072523) main_msg_pane

0x27e6,	// (0x00072523) main_mup_eq_pane

0x27e6,	// (0x00072523) main_mup_pane

0xb81d,	// (0x0007b55a) main_notes_pane

0x27e6,	// (0x00072523) main_pec_pane

0x27e6,	// (0x00072523) main_phob_pane

0x27e6,	// (0x00072523) main_pinb_pane

0x27e6,	// (0x00072523) main_postcard_pane

0x27e6,	// (0x00072523) main_qdial_pane

0xb81d,	// (0x0007b55a) main_skin_pane

0x27e6,	// (0x00072523) main_smil2_pane

0xb81d,	// (0x0007b55a) main_smil_pane

0xb81d,	// (0x0007b55a) main_video_pane

0xb81d,	// (0x0007b55a) main_video_tele_pane

0x2a41,	// (0x0007277e) main_viewer_pane_ParamLimits

0x2a41,	// (0x0007277e) main_viewer_pane

0xb81d,	// (0x0007b55a) main_vorec_pane

0x5976,	// (0x000756b3) popup_blid_sat_info_window_ParamLimits

0x5976,	// (0x000756b3) popup_blid_sat_info_window

0x59ce,	// (0x0007570b) popup_dyc_status_message_window_ParamLimits

0x59ce,	// (0x0007570b) popup_dyc_status_message_window

0x59e8,	// (0x00075725) popup_grid_large_graphic_window_ParamLimits

0x59e8,	// (0x00075725) popup_grid_large_graphic_window

0x5aa4,	// (0x000757e1) popup_loc_request_window_ParamLimits

0x5aa4,	// (0x000757e1) popup_loc_request_window

0x5ba8,	// (0x000758e5) popup_wml_address_window_ParamLimits

0x5ba8,	// (0x000758e5) popup_wml_address_window

0x575c,	// (0x00075499) call_muted_g1

0x5411,	// (0x0007514e) popup_call_audio_conf_window_ParamLimits

0x5411,	// (0x0007514e) popup_call_audio_conf_window

0x5770,	// (0x000754ad) popup_call_audio_first_window_ParamLimits

0x5770,	// (0x000754ad) popup_call_audio_first_window

0x57e6,	// (0x00075523) popup_call_audio_in_window_ParamLimits

0x57e6,	// (0x00075523) popup_call_audio_in_window

0x5822,	// (0x0007555f) popup_call_audio_out_window_ParamLimits

0x5822,	// (0x0007555f) popup_call_audio_out_window

0x585c,	// (0x00075599) popup_call_audio_second_window_ParamLimits

0x585c,	// (0x00075599) popup_call_audio_second_window

0x58b2,	// (0x000755ef) popup_call_audio_wait_window_ParamLimits

0x58b2,	// (0x000755ef) popup_call_audio_wait_window

0x58e7,	// (0x00075624) popup_number_entry_window_ParamLimits

0x58e7,	// (0x00075624) popup_number_entry_window

0x237b,	// (0x000720b8) bg_popup_call_pane_cp05_ParamLimits

0x237b,	// (0x000720b8) bg_popup_call_pane_cp05

0x239b,	// (0x000720d8) popup_number_entry_window_t1

0x23ae,	// (0x000720eb) popup_number_entry_window_t2

0x23c0,	// (0x000720fd) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0007ee38) popup_number_entry_window_t

0x2406,	// (0x00072143) text_title_cp2

0x2419,	// (0x00072156) bg_popup_call_pane_cp_ParamLimits

0x2419,	// (0x00072156) bg_popup_call_pane_cp

0x2427,	// (0x00072164) call_thumbnail_pane

0x242f,	// (0x0007216c) popup_call_audio_in_window_g1_ParamLimits

0x242f,	// (0x0007216c) popup_call_audio_in_window_g1

0x243b,	// (0x00072178) popup_call_audio_in_window_g2_ParamLimits

0x243b,	// (0x00072178) popup_call_audio_in_window_g2

0x2447,	// (0x00072184) popup_call_audio_in_window_g3_ParamLimits

0x2447,	// (0x00072184) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0007ee41) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0007ee41) popup_call_audio_in_window_g

0x2453,	// (0x00072190) popup_call_audio_in_window_t1_ParamLimits

0x2453,	// (0x00072190) popup_call_audio_in_window_t1

0x246f,	// (0x000721ac) popup_call_audio_in_window_t2_ParamLimits

0x246f,	// (0x000721ac) popup_call_audio_in_window_t2

0x248b,	// (0x000721c8) popup_call_audio_in_window_t3_ParamLimits

0x248b,	// (0x000721c8) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0007ee48) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0007ee48) popup_call_audio_in_window_t

0x2419,	// (0x00072156) bg_popup_call_pane_cp01_ParamLimits

0x2419,	// (0x00072156) bg_popup_call_pane_cp01

0x2427,	// (0x00072164) call_thumbnail_pane_cp02

0x249e,	// (0x000721db) call_type_pane_cp022

0x24a6,	// (0x000721e3) popup_call_audio_out_window_g1_ParamLimits

0x24a6,	// (0x000721e3) popup_call_audio_out_window_g1

0x24b8,	// (0x000721f5) popup_call_audio_out_window_g2_ParamLimits

0x24b8,	// (0x000721f5) popup_call_audio_out_window_g2

0x24c4,	// (0x00072201) popup_call_audio_out_window_g3_ParamLimits

0x24c4,	// (0x00072201) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0007ee4f) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0007ee4f) popup_call_audio_out_window_g

0x24d6,	// (0x00072213) popup_call_audio_out_window_t1_ParamLimits

0x24d6,	// (0x00072213) popup_call_audio_out_window_t1

0x24ee,	// (0x0007222b) popup_call_audio_out_window_t2_ParamLimits

0x24ee,	// (0x0007222b) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0007ee56) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0007ee56) popup_call_audio_out_window_t

0x2503,	// (0x00072240) bg_popup_call_pane_ParamLimits

0x2503,	// (0x00072240) bg_popup_call_pane

0x2587,	// (0x000722c4) call_thumbnail_pane_cp_ParamLimits

0x2587,	// (0x000722c4) call_thumbnail_pane_cp

0x25ab,	// (0x000722e8) call_type_pane_cp01_ParamLimits

0x25ab,	// (0x000722e8) call_type_pane_cp01

0x25ef,	// (0x0007232c) popup_call_audio_first_window_g1_ParamLimits

0x25ef,	// (0x0007232c) popup_call_audio_first_window_g1

0x263b,	// (0x00072378) popup_call_audio_first_window_g2_ParamLimits

0x263b,	// (0x00072378) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0007ee5b) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0007ee5b) popup_call_audio_first_window_g

0x267f,	// (0x000723bc) popup_call_audio_first_window_t1_ParamLimits

0x267f,	// (0x000723bc) popup_call_audio_first_window_t1

0x272b,	// (0x00072468) popup_call_audio_first_window_t4_ParamLimits

0x272b,	// (0x00072468) popup_call_audio_first_window_t4

0x27b7,	// (0x000724f4) popup_call_audio_first_window_t5_ParamLimits

0x27b7,	// (0x000724f4) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0007ee60) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0007ee60) popup_call_audio_first_window_t

0x27e6,	// (0x00072523) bg_popup_call_pane_cp02

0x27f0,	// (0x0007252d) call_type_pane_cp023

0x27f8,	// (0x00072535) popup_call_audio_wait_window_g1

0x2800,	// (0x0007253d) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0007ee67) popup_call_audio_wait_window_g

0x2808,	// (0x00072545) popup_call_audio_wait_window_t3

0x2816,	// (0x00072553) bg_popup_call_pane_cp03_ParamLimits

0x2816,	// (0x00072553) bg_popup_call_pane_cp03

0x2876,	// (0x000725b3) call_thumbnail_pane_cp011_ParamLimits

0x2876,	// (0x000725b3) call_thumbnail_pane_cp011

0x2882,	// (0x000725bf) call_type_pane_cp034_ParamLimits

0x2882,	// (0x000725bf) call_type_pane_cp034

0x28be,	// (0x000725fb) popup_call_audio_second_window_g1_ParamLimits

0x28be,	// (0x000725fb) popup_call_audio_second_window_g1

0x28fa,	// (0x00072637) popup_call_audio_second_window_g2_ParamLimits

0x28fa,	// (0x00072637) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0007ee6c) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0007ee6c) popup_call_audio_second_window_g

0x2936,	// (0x00072673) popup_call_audio_second_window_t1_ParamLimits

0x2936,	// (0x00072673) popup_call_audio_second_window_t1

0x29b7,	// (0x000726f4) popup_call_audio_second_window_t2_ParamLimits

0x29b7,	// (0x000726f4) popup_call_audio_second_window_t2

0x29ed,	// (0x0007272a) popup_call_audio_second_window_t3_ParamLimits

0x29ed,	// (0x0007272a) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0007ee71) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0007ee71) popup_call_audio_second_window_t

0x27e6,	// (0x00072523) bg_popup_call_pane_cp04

0x2a23,	// (0x00072760) list_conf_pane

0x2a2b,	// (0x00072768) popup_call_audio_conf_window_t1

0x2a39,	// (0x00072776) call_thumbnail_pane_g1

0x2a41,	// (0x0007277e) bg_pinb_pane_ParamLimits

0x2a41,	// (0x0007277e) bg_pinb_pane

0x2a4f,	// (0x0007278c) find_pinb_pane

0x2a58,	// (0x00072795) listscroll_pinb_pane_ParamLimits

0x2a58,	// (0x00072795) listscroll_pinb_pane

0x2a67,	// (0x000727a4) pinb_bg_pane_g1

0x2a71,	// (0x000727ae) pinb_bg_pane_g2

0x2a7d,	// (0x000727ba) pinb_bg_pane_g3

0x2a89,	// (0x000727c6) pinb_bg_pane_g4

0x2a95,	// (0x000727d2) pinb_bg_pane_g5

0x2aa1,	// (0x000727de) pinb_bg_pane_g6

0x2aac,	// (0x000727e9) pinb_bg_pane_g7

0x2ab7,	// (0x000727f4) pinb_bg_pane_g8

0x2ac2,	// (0x000727ff) pinb_bg_pane_g9

0x2acc,	// (0x00072809) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0007ee78) pinb_bg_pane_g

0x2ae9,	// (0x00072826) grid_pinb_pane

0x2af2,	// (0x0007282f) list_pinb_pane

0x2afb,	// (0x00072838) scroll_pane_cp01_ParamLimits

0x2afb,	// (0x00072838) scroll_pane_cp01

0x2b0d,	// (0x0007284a) find_pinb_pane_g1_ParamLimits

0x2b0d,	// (0x0007284a) find_pinb_pane_g1

0x2b25,	// (0x00072862) find_pinb_pane_t1

0x2b37,	// (0x00072874) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0007ee92) find_pinb_pane_t

0x2b4c,	// (0x00072889) input_focus_pane_cp01_ParamLimits

0x2b4c,	// (0x00072889) input_focus_pane_cp01

0x2b58,	// (0x00072895) cell_pinb_pane_ParamLimits

0x2b58,	// (0x00072895) cell_pinb_pane

0x2b81,	// (0x000728be) cell_pinb_pane_g1_ParamLimits

0x2b81,	// (0x000728be) cell_pinb_pane_g1

0x2b91,	// (0x000728ce) cell_pinb_pane_g2_ParamLimits

0x2b91,	// (0x000728ce) cell_pinb_pane_g2

0x2b9d,	// (0x000728da) cell_pinb_pane_g3_ParamLimits

0x2b9d,	// (0x000728da) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0007ee97) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0007ee97) cell_pinb_pane_g

0x27e6,	// (0x00072523) grid_highlight_pane_cp01

0x2ba9,	// (0x000728e6) list_pinb_item_pane_ParamLimits

0x2ba9,	// (0x000728e6) list_pinb_item_pane

0x27e6,	// (0x00072523) list_highlight_pane_cp02

0x2bbb,	// (0x000728f8) list_pinb_item_pane_g1_ParamLimits

0x2bbb,	// (0x000728f8) list_pinb_item_pane_g1

0x2bc8,	// (0x00072905) list_pinb_item_pane_g2_ParamLimits

0x2bc8,	// (0x00072905) list_pinb_item_pane_g2

0x2bd4,	// (0x00072911) list_pinb_item_pane_g3_ParamLimits

0x2bd4,	// (0x00072911) list_pinb_item_pane_g3

0x2be5,	// (0x00072922) list_pinb_item_pane_g4_ParamLimits

0x2be5,	// (0x00072922) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0007ee9e) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0007ee9e) list_pinb_item_pane_g

0x2bf1,	// (0x0007292e) list_pinb_item_pane_t1_ParamLimits

0x2bf1,	// (0x0007292e) list_pinb_item_pane_t1

0x2c26,	// (0x00072963) calc_display_pane

0x2c4c,	// (0x00072989) calc_paper_pane

0x2c6d,	// (0x000729aa) grid_calc_pane

0x27e6,	// (0x00072523) bg_list_pane_cp01

0x2c95,	// (0x000729d2) clock_g1

0x2c9d,	// (0x000729da) clock_g2

0x0001,

0xf16a,	// (0x0007eea7) clock_g

0x2ca5,	// (0x000729e2) clock_t1_ParamLimits

0x2ca5,	// (0x000729e2) clock_t1

0x2cba,	// (0x000729f7) clock_t2_ParamLimits

0x2cba,	// (0x000729f7) clock_t2

0x2ccc,	// (0x00072a09) clock_t3_ParamLimits

0x2ccc,	// (0x00072a09) clock_t3

0x2cde,	// (0x00072a1b) clock_t4_ParamLimits

0x2cde,	// (0x00072a1b) clock_t4

0x2cf0,	// (0x00072a2d) clock_t5_ParamLimits

0x2cf0,	// (0x00072a2d) clock_t5

0x2d05,	// (0x00072a42) clock_t6_ParamLimits

0x2d05,	// (0x00072a42) clock_t6

0x2d17,	// (0x00072a54) clock_t7_ParamLimits

0x2d17,	// (0x00072a54) clock_t7

0x2d29,	// (0x00072a66) clock_t8_ParamLimits

0x2d29,	// (0x00072a66) clock_t8

0x2d3d,	// (0x00072a7a) clock_t9_ParamLimits

0x2d3d,	// (0x00072a7a) clock_t9

0x0008,

0xf16f,	// (0x0007eeac) clock_t_ParamLimits

0xf16f,	// (0x0007eeac) clock_t

0x2d51,	// (0x00072a8e) popup_clock_analogue_window_cp02

0x2d51,	// (0x00072a8e) popup_clock_digital_window_cp01

0x2d59,	// (0x00072a96) listscroll_help_pane

0x27e6,	// (0x00072523) phob_pre_status_pane

0x2d63,	// (0x00072aa0) grid_qdial_pane

0x27e6,	// (0x00072523) listscroll_mce_pane

0x2d6d,	// (0x00072aaa) bg_notes_pane

0x2d77,	// (0x00072ab4) list_notes_pane

0x2d81,	// (0x00072abe) scroll_pane_cp06

0x2d8c,	// (0x00072ac9) bg_calc_paper_pane

0xaf4c,	// (0x0007ac89) list_calc_pane

0x2da0,	// (0x00072add) bg_calc_display_pane

0x2dac,	// (0x00072ae9) calc_display_pane_t1

0x2dbe,	// (0x00072afb) calc_display_pane_t2

0xaf66,	// (0x0007aca3) calc_display_pane_t3

0x0002,

0xf182,	// (0x0007eebf) calc_display_pane_t

0x2dd0,	// (0x00072b0d) cell_calc_pane_ParamLimits

0x2dd0,	// (0x00072b0d) cell_calc_pane

0x2e05,	// (0x00072b42) bg_calc_paper_pane_g1

0x2e11,	// (0x00072b4e) bg_calc_paper_pane_g2

0x2e1d,	// (0x00072b5a) bg_calc_paper_pane_g3

0x2e29,	// (0x00072b66) bg_calc_paper_pane_g4

0x2e35,	// (0x00072b72) bg_calc_paper_pane_g5

0x2e41,	// (0x00072b7e) bg_calc_paper_pane_g6

0x2e50,	// (0x00072b8d) bg_calc_paper_pane_g7

0x2e5f,	// (0x00072b9c) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0007eec6) bg_calc_paper_pane_g

0x2e72,	// (0x00072baf) calc_bg_paper_pane_g9

0x2e85,	// (0x00072bc2) list_calc_item_pane_ParamLimits

0x2e85,	// (0x00072bc2) list_calc_item_pane

0x2e98,	// (0x00072bd5) list_calc_item_pane_g1

0xaf78,	// (0x0007acb5) list_calc_item_pane_t1_ParamLimits

0xaf78,	// (0x0007acb5) list_calc_item_pane_t1

0x2ea5,	// (0x00072be2) list_calc_item_pane_t2_ParamLimits

0x2ea5,	// (0x00072be2) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0007eed7) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0007eed7) list_calc_item_pane_t

0x2ec1,	// (0x00072bfe) cell_calc_pane_g1

0x2ee3,	// (0x00072c20) grid_highlight_pane_cp02

0x2f05,	// (0x00072c42) bg_calc_display_pane_g1

0x2f0e,	// (0x00072c4b) bg_calc_display_pane_g2

0x2f18,	// (0x00072c55) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0007eee1) bg_calc_display_pane_g

0x2f21,	// (0x00072c5e) cell_qdial_pane_ParamLimits

0x2f21,	// (0x00072c5e) cell_qdial_pane

0x2f35,	// (0x00072c72) cell_qdial_pane_g1_ParamLimits

0x2f35,	// (0x00072c72) cell_qdial_pane_g1

0x2f4b,	// (0x00072c88) cell_qdial_pane_g2_ParamLimits

0x2f4b,	// (0x00072c88) cell_qdial_pane_g2

0x2f5c,	// (0x00072c99) cell_qdial_pane_g3_ParamLimits

0x2f5c,	// (0x00072c99) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0007eee8) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0007eee8) cell_qdial_pane_g

0x2f7e,	// (0x00072cbb) cell_qdial_pane_t1_ParamLimits

0x2f7e,	// (0x00072cbb) cell_qdial_pane_t1

0x2f96,	// (0x00072cd3) cell_qdial_pane_t2_ParamLimits

0x2f96,	// (0x00072cd3) cell_qdial_pane_t2

0x2fa9,	// (0x00072ce6) cell_qdial_pane_t3_ParamLimits

0x2fa9,	// (0x00072ce6) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0007eef1) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0007eef1) cell_qdial_pane_t

0x27e6,	// (0x00072523) grid_highlight_pane_cp04

0x2fbc,	// (0x00072cf9) thumbnail_qdial_pane_ParamLimits

0x2fbc,	// (0x00072cf9) thumbnail_qdial_pane

0x3018,	// (0x00072d55) list_help_pane

0x3021,	// (0x00072d5e) scroll_pane_cp02

0x302a,	// (0x00072d67) help_list_pane_t1_ParamLimits

0x302a,	// (0x00072d67) help_list_pane_t1

0xaf8a,	// (0x0007acc7) bg_notes_pane_g2

0xaf92,	// (0x0007accf) bg_notes_pane_g3

0xaf9a,	// (0x0007acd7) notes_bg_pane_g1

0xafa2,	// (0x0007acdf) notes_bg_pane_g4

0xafaa,	// (0x0007ace7) notes_bg_pane_g5

0xafb2,	// (0x0007acef) notes_bg_pane_g6

0xafba,	// (0x0007acf7) notes_bg_pane_g7

0xafc2,	// (0x0007acff) notes_bg_pane_g8

0xafca,	// (0x0007ad07) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0007ef0f) notes_bg_pane_g

0x3047,	// (0x00072d84) list_notes_text_pane_ParamLimits

0x3047,	// (0x00072d84) list_notes_text_pane

0x305c,	// (0x00072d99) list_notes_text_pane_g1

0x16e9,	// (0x00071426) list_notes_text_pane_t1

0x2da0,	// (0x00072add) listscroll_cale_week_pane

0x3093,	// (0x00072dd0) bg_cale_heading_pane

0x30a7,	// (0x00072de4) bg_cale_pane_cp01

0x30c0,	// (0x00072dfd) cale_week_corner_pane

0x30d6,	// (0x00072e13) cale_week_day_heading_pane

0x30ea,	// (0x00072e27) cale_week_scroll_pane_g1

0x30fb,	// (0x00072e38) cale_week_scroll_pane_g2

0x310c,	// (0x00072e49) cale_week_scroll_pane_g3

0x311d,	// (0x00072e5a) cale_week_scroll_pane_g4

0x312e,	// (0x00072e6b) cale_week_scroll_pane_g5

0x313f,	// (0x00072e7c) cale_week_scroll_pane_g6

0x3150,	// (0x00072e8d) cale_week_scroll_pane_g7

0x3161,	// (0x00072e9e) cale_week_scroll_pane_g8

0x3172,	// (0x00072eaf) cale_week_scroll_pane_g9

0x3183,	// (0x00072ec0) cale_week_scroll_pane_g10

0x3194,	// (0x00072ed1) cale_week_scroll_pane_g11

0x31a5,	// (0x00072ee2) cale_week_scroll_pane_g12

0x31b6,	// (0x00072ef3) cale_week_scroll_pane_g13

0x31c7,	// (0x00072f04) cale_week_scroll_pane_g14

0x31d8,	// (0x00072f15) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0007ef1e) cale_week_scroll_pane_g

0x31e9,	// (0x00072f26) cale_week_time_pane

0x31fa,	// (0x00072f37) grid_cale_week_pane

0x321f,	// (0x00072f5c) scroll_pane_cp08

0x3239,	// (0x00072f76) cell_cale_week_pane_ParamLimits

0x3239,	// (0x00072f76) cell_cale_week_pane

0x3275,	// (0x00072fb2) cale_week_day_heading_pane_t1

0x32a2,	// (0x00072fdf) cale_week_day_heading_pane_t2

0x32cf,	// (0x0007300c) cale_week_day_heading_pane_t3

0x32fc,	// (0x00073039) cale_week_day_heading_pane_t4

0x3329,	// (0x00073066) cale_week_day_heading_pane_t5

0x3356,	// (0x00073093) cale_week_day_heading_pane_t6

0x3383,	// (0x000730c0) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0007ef3d) cale_week_day_heading_pane_t

0x33b0,	// (0x000730ed) bg_cale_side_pane

0x33be,	// (0x000730fb) cale_week_time_pane_t1

0x33d6,	// (0x00073113) cale_week_time_pane_t2

0x33ee,	// (0x0007312b) cale_week_time_pane_t3

0x3406,	// (0x00073143) cale_week_time_pane_t4

0x341e,	// (0x0007315b) cale_week_time_pane_t5

0x3436,	// (0x00073173) cale_week_time_pane_t6

0x344e,	// (0x0007318b) cale_week_time_pane_t7

0x3466,	// (0x000731a3) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0007ef4c) cale_week_time_pane_t

0x347e,	// (0x000731bb) cell_cale_week_pane_g2

0x3497,	// (0x000731d4) cell_cale_week_pane_g3_ParamLimits

0x3497,	// (0x000731d4) cell_cale_week_pane_g3

0x34af,	// (0x000731ec) grid_highlight_pane_cp07

0x34b7,	// (0x000731f4) listscroll_gms_pane

0x34c1,	// (0x000731fe) grid_gms_pane

0x34ca,	// (0x00073207) listscroll_gms_pane_g1

0x34d2,	// (0x0007320f) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0007ef5d) listscroll_gms_pane_g

0x34da,	// (0x00073217) scroll_pane_cp010

0x34e5,	// (0x00073222) cell_gms_pane_ParamLimits

0x34e5,	// (0x00073222) cell_gms_pane

0x34f8,	// (0x00073235) cell_gms_pane_g1

0x3500,	// (0x0007323d) cell_gms_pane_g2

0x3508,	// (0x00073245) cell_gms_pane_g3

0x3511,	// (0x0007324e) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0007ef62) cell_gms_pane_g

0x351a,	// (0x00073257) grid_highlight_pane_cp09

0x5706,	// (0x00075443) phob_pre_status_pane_g1

0x570e,	// (0x0007544b) phob_pre_status_pane_g2

0x5716,	// (0x00075453) phob_pre_status_pane_g3

0x571e,	// (0x0007545b) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0007f351) phob_pre_status_pane_g

0x572e,	// (0x0007546b) phob_pre_status_pane_t1

0x573c,	// (0x00075479) phob_pre_status_pane_t2

0x574c,	// (0x00075489) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0007f35c) phob_pre_status_pane_t

0x27e6,	// (0x00072523) bg_list_pane_cp05

0x352a,	// (0x00073267) grid_vorec_pane

0xafd2,	// (0x0007ad0f) vorec_t1

0xafe0,	// (0x0007ad1d) vorec_t2

0xafee,	// (0x0007ad2b) vorec_t3

0xaffc,	// (0x0007ad39) vorec_t4

0xb00a,	// (0x0007ad47) vorec_t5

0xb018,	// (0x0007ad55) vorec_t6

0x0006,

0xf22e,	// (0x0007ef6b) vorec_t

0xb034,	// (0x0007ad71) wait_bar_pane_cp01

0x3532,	// (0x0007326f) cell_vorec_pane_ParamLimits

0x3532,	// (0x0007326f) cell_vorec_pane

0x3545,	// (0x00073282) cell_vorec_pane_g1

0x27e6,	// (0x00072523) grid_highlight_pane_cp05

0x3567,	// (0x000732a4) cams_zoom_pane

0x3576,	// (0x000732b3) image_vga_pane

0x3590,	// (0x000732cd) main_camera_pane_g1

0x35a2,	// (0x000732df) main_camera_pane_g2

0x35b2,	// (0x000732ef) main_camera_pane_g3

0x35c2,	// (0x000732ff) main_camera_pane_g4

0x35d2,	// (0x0007330f) main_camera_pane_g5

0x35e2,	// (0x0007331f) main_camera_pane_g6

0x35f4,	// (0x00073331) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0007ef7a) main_camera_pane_g

0x3610,	// (0x0007334d) main_camera_pane_t1

0x3626,	// (0x00073363) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0007ef8b) main_camera_pane_t

0x3660,	// (0x0007339d) cams_zoom_pane_cp_ParamLimits

0x3660,	// (0x0007339d) cams_zoom_pane_cp

0x3688,	// (0x000733c5) image_cif_pane_ParamLimits

0x3688,	// (0x000733c5) image_cif_pane

0x36c3,	// (0x00073400) image_subqcif_pane

0x36cb,	// (0x00073408) main_video_pane_g1_ParamLimits

0x36cb,	// (0x00073408) main_video_pane_g1

0x36ef,	// (0x0007342c) main_video_pane_g2_ParamLimits

0x36ef,	// (0x0007342c) main_video_pane_g2

0x3723,	// (0x00073460) main_video_pane_g3_ParamLimits

0x3723,	// (0x00073460) main_video_pane_g3

0x3751,	// (0x0007348e) main_video_pane_g4_ParamLimits

0x3751,	// (0x0007348e) main_video_pane_g4

0x377f,	// (0x000734bc) main_video_pane_g5_ParamLimits

0x377f,	// (0x000734bc) main_video_pane_g5

0x379b,	// (0x000734d8) main_video_pane_g6_ParamLimits

0x379b,	// (0x000734d8) main_video_pane_g6

0x0006,

0xf253,	// (0x0007ef90) main_video_pane_g_ParamLimits

0xf253,	// (0x0007ef90) main_video_pane_g

0x37c6,	// (0x00073503) main_video_pane_t1_ParamLimits

0x37c6,	// (0x00073503) main_video_pane_t1

0x380f,	// (0x0007354c) cams_zoom_pane_g1

0x3818,	// (0x00073555) cams_zoom_pane_g2

0x3821,	// (0x0007355e) cams_zoom_pane_g3

0x382a,	// (0x00073567) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0007ef9f) cams_zoom_pane_g

0x3847,	// (0x00073584) grid_cams_pane

0x3861,	// (0x0007359e) linegrid_cams_pane

0x3875,	// (0x000735b2) cell_cams_pane_ParamLimits

0x3875,	// (0x000735b2) cell_cams_pane

0x3895,	// (0x000735d2) cams_burst_image_pane

0x389d,	// (0x000735da) cell_cams_pane_g1

0x27e6,	// (0x00072523) grid_highlight_pane_cp03

0x2ec1,	// (0x00072bfe) mp_bg_pane_g1

0x27e6,	// (0x00072523) bg_list_pane_cp03

0xcb90,	// (0x0007c8cd) bg_mp_pane

0xcb98,	// (0x0007c8d5) grid_mp_pane

0xcba0,	// (0x0007c8dd) media_player_g1

0xcba8,	// (0x0007c8e5) media_player_t1

0xcbb6,	// (0x0007c8f3) media_player_t2

0xcbc4,	// (0x0007c901) media_player_t3

0xcbd2,	// (0x0007c90f) media_player_t4

0xcbe0,	// (0x0007c91d) media_player_t5

0xcbee,	// (0x0007c92b) media_player_t6

0xcbfc,	// (0x0007c939) media_player_t7

0x0006,

0xf5fe,	// (0x0007f33b) media_player_t

0xcc0a,	// (0x0007c947) wait_bar_pane_cp02

0xf5e3,	// (0x0007f320) main_usb_pane_t

0x56fd,	// (0x0007543a) cell_mp_pane

0x2ec1,	// (0x00072bfe) cell_mp_pane_g1

0x27e6,	// (0x00072523) grid_highlight_pane_cp06

0x38a5,	// (0x000735e2) grid_skin_colour_pane

0x38ad,	// (0x000735ea) list_highlight_pane_cp03

0x38b5,	// (0x000735f2) skin_g1

0x38bd,	// (0x000735fa) skin_t1

0x38cc,	// (0x00073609) skin_t2

0x0001,

0xf297,	// (0x0007efd4) skin_t

0x38da,	// (0x00073617) cell_skin_colour_pane_ParamLimits

0x38da,	// (0x00073617) cell_skin_colour_pane

0x38fa,	// (0x00073637) cell_skin_colour_pane_g1

0x3950,	// (0x0007368d) call_video_g1_ParamLimits

0x3950,	// (0x0007368d) call_video_g1

0x396c,	// (0x000736a9) call_video_g2_ParamLimits

0x396c,	// (0x000736a9) call_video_g2

0x0001,

0xf29c,	// (0x0007efd9) call_video_g_ParamLimits

0xf29c,	// (0x0007efd9) call_video_g

0x39a2,	// (0x000736df) call_video_uplink_pane_cp1_ParamLimits

0x39a2,	// (0x000736df) call_video_uplink_pane_cp1

0x39e6,	// (0x00073723) call_video_uplink_pane_cp2

0x3a28,	// (0x00073765) video_down_crop_pane_ParamLimits

0x3a28,	// (0x00073765) video_down_crop_pane

0x3afc,	// (0x00073839) video_down_pane_ParamLimits

0x3afc,	// (0x00073839) video_down_pane

0x3bcd,	// (0x0007390a) video_down_subqcif_pane_ParamLimits

0x3bcd,	// (0x0007390a) video_down_subqcif_pane

0x3be5,	// (0x00073922) video_down_subqcif_pane_cp_ParamLimits

0x3be5,	// (0x00073922) video_down_subqcif_pane_cp

0x3c09,	// (0x00073946) im_reading_pane_ParamLimits

0x3c09,	// (0x00073946) im_reading_pane

0x3c1b,	// (0x00073958) im_writing_pane_ParamLimits

0x3c1b,	// (0x00073958) im_writing_pane

0x3c39,	// (0x00073976) im_reading_pane_t1

0x3c72,	// (0x000739af) list_im_pane

0x3c83,	// (0x000739c0) scroll_pane_cp07

0x3c9c,	// (0x000739d9) im_writing_pane_t1_ParamLimits

0x3c9c,	// (0x000739d9) im_writing_pane_t1

0x3cb1,	// (0x000739ee) im_writing_pane_t2_ParamLimits

0x3cb1,	// (0x000739ee) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0007efe3) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0007efe3) im_writing_pane_t

0x27e6,	// (0x00072523) input_focus_pane_cp04

0x27e6,	// (0x00072523) input_focus_pane_cp05

0x3cce,	// (0x00073a0b) list_im_single_pane_ParamLimits

0x3cce,	// (0x00073a0b) list_im_single_pane

0x3ce2,	// (0x00073a1f) list_single_im_pane_t1

0x56bd,	// (0x000753fa) blid_accuracy_pane

0x56c5,	// (0x00075402) blid_compass_pane

0x56cf,	// (0x0007540c) main_location_t1

0x56df,	// (0x0007541c) main_location_t2

0x56ef,	// (0x0007542c) main_location_t3

0x0002,

0xf60d,	// (0x0007f34a) main_location_t

0x27e6,	// (0x00072523) aid_levels_location

0x2ec1,	// (0x00072bfe) blid_accuracy_pane_g1

0x2ec1,	// (0x00072bfe) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0007f045) blid_accuracy_pane_g

0x3d1c,	// (0x00073a59) wml_content_pane

0x3d5a,	// (0x00073a97) wml_button_pane_ParamLimits

0x3d5a,	// (0x00073a97) wml_button_pane

0x3d6e,	// (0x00073aab) wml_list_single_large_pane_ParamLimits

0x3d6e,	// (0x00073aab) wml_list_single_large_pane

0x3d83,	// (0x00073ac0) wml_list_single_medium_pane_ParamLimits

0x3d83,	// (0x00073ac0) wml_list_single_medium_pane

0x3d99,	// (0x00073ad6) wml_list_single_small_pane_ParamLimits

0x3d99,	// (0x00073ad6) wml_list_single_small_pane

0x3db1,	// (0x00073aee) wml_selection_box_pane_ParamLimits

0x3db1,	// (0x00073aee) wml_selection_box_pane

0x3dc4,	// (0x00073b01) wml_list_single_pane_t1

0x3dd3,	// (0x00073b10) wml_list_single_medium_pane_t1

0x3de2,	// (0x00073b1f) wml_list_single_large_pane_t1

0x3df1,	// (0x00073b2e) input_focus_pane_cp02_ParamLimits

0x3df1,	// (0x00073b2e) input_focus_pane_cp02

0x3e04,	// (0x00073b41) wml_selection_box_pane_g1

0x3e0d,	// (0x00073b4a) wml_selection_box_pane_t1_ParamLimits

0x3e0d,	// (0x00073b4a) wml_selection_box_pane_t1

0x2a41,	// (0x0007277e) bg_wml_button_pane_ParamLimits

0x2a41,	// (0x0007277e) bg_wml_button_pane

0x3e25,	// (0x00073b62) wml_button_pane_g1

0x3e2d,	// (0x00073b6a) wml_button_pane_t1

0x3e25,	// (0x00073b62) wml_button_bg_pane_g1

0x3e3d,	// (0x00073b7a) wml_button_bg_pane_g2

0x3e45,	// (0x00073b82) wml_button_bg_pane_g3

0x3e4d,	// (0x00073b8a) wml_button_bg_pane_g4

0x3e55,	// (0x00073b92) wml_button_bg_pane_g5

0x3e5d,	// (0x00073b9a) wml_button_bg_pane_g6

0x3e65,	// (0x00073ba2) wml_button_bg_pane_g7

0x3e6d,	// (0x00073baa) wml_button_bg_pane_g8

0x3e75,	// (0x00073bb2) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0007efe8) wml_button_bg_pane_g

0x3e7d,	// (0x00073bba) bg_list_pane_cp02

0x3e85,	// (0x00073bc2) mce_header_pane_ParamLimits

0x3e85,	// (0x00073bc2) mce_header_pane

0x3e9b,	// (0x00073bd8) mce_icon_pane

0x3e9b,	// (0x00073bd8) mce_image_pane

0x3ea4,	// (0x00073be1) mce_text_pane_ParamLimits

0x3ea4,	// (0x00073be1) mce_text_pane

0x3eb7,	// (0x00073bf4) scroll_pane_cp03

0x3d52,	// (0x00073a8f) scroll_pane_cp04

0x3ec1,	// (0x00073bfe) scroll_pane_cp05_ParamLimits

0x3ec1,	// (0x00073bfe) scroll_pane_cp05

0x3ecd,	// (0x00073c0a) mce_header_field_pane_ParamLimits

0x3ecd,	// (0x00073c0a) mce_header_field_pane

0x3ee4,	// (0x00073c21) mce_header_field_pane_2_ParamLimits

0x3ee4,	// (0x00073c21) mce_header_field_pane_2

0x3efa,	// (0x00073c37) mce_header_field_pane_3

0x3f02,	// (0x00073c3f) list_single_mce_message_pane_ParamLimits

0x3f02,	// (0x00073c3f) list_single_mce_message_pane

0x3f17,	// (0x00073c54) list_single_mce_smart_pane_ParamLimits

0x3f17,	// (0x00073c54) list_single_mce_smart_pane

0x3f37,	// (0x00073c74) input_focus_pane_cp03

0x3f40,	// (0x00073c7d) list_header_data_pane

0x3f48,	// (0x00073c85) mce_header_field_pane_t1

0x3f58,	// (0x00073c95) list_single_mce_header_pane_ParamLimits

0x3f58,	// (0x00073c95) list_single_mce_header_pane

0x3f6c,	// (0x00073ca9) list_single_mce_header_pane_t1

0x3f7b,	// (0x00073cb8) list_single_mce_message_pane_g1

0x3f83,	// (0x00073cc0) list_single_mce_message_pane_t1

0x3faf,	// (0x00073cec) bg_cale_heading_pane_cp01_ParamLimits

0x3faf,	// (0x00073cec) bg_cale_heading_pane_cp01

0x3fd2,	// (0x00073d0f) bg_cale_pane_cp02_ParamLimits

0x3fd2,	// (0x00073d0f) bg_cale_pane_cp02

0x3ff5,	// (0x00073d32) cale_month_corner_pane

0x400b,	// (0x00073d48) cale_month_day_heading_pane_ParamLimits

0x400b,	// (0x00073d48) cale_month_day_heading_pane

0x4036,	// (0x00073d73) cale_month_pane_g1_ParamLimits

0x4036,	// (0x00073d73) cale_month_pane_g1

0x4052,	// (0x00073d8f) cale_month_pane_g2_ParamLimits

0x4052,	// (0x00073d8f) cale_month_pane_g2

0x406d,	// (0x00073daa) cale_month_pane_g3_ParamLimits

0x406d,	// (0x00073daa) cale_month_pane_g3

0x4099,	// (0x00073dd6) cale_month_pane_g4_ParamLimits

0x4099,	// (0x00073dd6) cale_month_pane_g4

0x40c5,	// (0x00073e02) cale_month_pane_g5_ParamLimits

0x40c5,	// (0x00073e02) cale_month_pane_g5

0x40f1,	// (0x00073e2e) cale_month_pane_g6_ParamLimits

0x40f1,	// (0x00073e2e) cale_month_pane_g6

0x411d,	// (0x00073e5a) cale_month_pane_g7_ParamLimits

0x411d,	// (0x00073e5a) cale_month_pane_g7

0x4149,	// (0x00073e86) cale_month_pane_g8_ParamLimits

0x4149,	// (0x00073e86) cale_month_pane_g8

0x417d,	// (0x00073eba) cale_month_pane_g9_ParamLimits

0x417d,	// (0x00073eba) cale_month_pane_g9

0x41af,	// (0x00073eec) cale_month_pane_g10_ParamLimits

0x41af,	// (0x00073eec) cale_month_pane_g10

0x41e1,	// (0x00073f1e) cale_month_pane_g11_ParamLimits

0x41e1,	// (0x00073f1e) cale_month_pane_g11

0x4213,	// (0x00073f50) cale_month_pane_g12_ParamLimits

0x4213,	// (0x00073f50) cale_month_pane_g12

0x4245,	// (0x00073f82) cale_month_pane_g13_ParamLimits

0x4245,	// (0x00073f82) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0007effb) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0007effb) cale_month_pane_g

0x4289,	// (0x00073fc6) cale_month_week_pane

0x429c,	// (0x00073fd9) grid_cale_month_pane_ParamLimits

0x429c,	// (0x00073fd9) grid_cale_month_pane

0x42c2,	// (0x00073fff) cale_month_day_heading_pane_t1

0x4320,	// (0x0007405d) cale_month_day_heading_pane_t2

0x4385,	// (0x000740c2) cale_month_day_heading_pane_t3

0x43ea,	// (0x00074127) cale_month_day_heading_pane_t4

0x444f,	// (0x0007418c) cale_month_day_heading_pane_t5

0x44b4,	// (0x000741f1) cale_month_day_heading_pane_t6

0x4519,	// (0x00074256) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0007f016) cale_month_day_heading_pane_t

0x33b0,	// (0x000730ed) bg_cale_side_pane_cp01

0x457e,	// (0x000742bb) cale_month_week_pane_t1

0x4595,	// (0x000742d2) cale_month_week_pane_t2

0x45ac,	// (0x000742e9) cale_month_week_pane_t3

0x45c3,	// (0x00074300) cale_month_week_pane_t4

0x45da,	// (0x00074317) cale_month_week_pane_t5

0x45f1,	// (0x0007432e) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0007f025) cale_month_week_pane_t

0x4608,	// (0x00074345) cell_cale_month_pane_ParamLimits

0x4608,	// (0x00074345) cell_cale_month_pane

0xb123,	// (0x0007ae60) cell_cale_month_pane_g1

0x46ae,	// (0x000743eb) cell_cale_month_pane_t1_ParamLimits

0x46ae,	// (0x000743eb) cell_cale_month_pane_t1

0x34af,	// (0x000731ec) grid_highlight_pane_cp08

0x2ec1,	// (0x00072bfe) main_smil_g1

0x46ca,	// (0x00074407) smil_status_pane

0x46d3,	// (0x00074410) smil_text_pane

0xcab0,	// (0x0007c7ed) bg_popup_call3_rect_pane_g8

0xcab8,	// (0x0007c7f5) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0007f2de) bg_popup_call3_rect_pane_g

0xcd32,	// (0x0007ca6f) smil_status_volume_pane_g1

0x46e7,	// (0x00074424) smil_status_pane_t1

0xcd65,	// (0x0007caa2) volume_smil_pane

0xb138,	// (0x0007ae75) list_smil_text_pane

0x46f5,	// (0x00074432) scroll_pane_cp011

0x4700,	// (0x0007443d) smil_text_list_pane_t1_ParamLimits

0x4700,	// (0x0007443d) smil_text_list_pane_t1

0xb142,	// (0x0007ae7f) aid_volume_smil_ParamLimits

0xb142,	// (0x0007ae7f) aid_volume_smil

0x2ec1,	// (0x00072bfe) smil_volume_pane_g1

0x2ec1,	// (0x00072bfe) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0007f045) smil_volume_pane_g

0x2da0,	// (0x00072add) listscroll_cale_day_pane

0xb164,	// (0x0007aea1) bg_cale_pane

0xb17c,	// (0x0007aeb9) list_cale_pane

0xb18d,	// (0x0007aeca) scroll_pane_cp09

0xb19e,	// (0x0007aedb) cale_bg_pane_g1

0xb1a6,	// (0x0007aee3) cale_bg_pane_g2

0xb1ae,	// (0x0007aeeb) cale_bg_pane_g3

0xb1b6,	// (0x0007aef3) cale_bg_pane_g4

0xb1be,	// (0x0007aefb) cale_bg_pane_g5

0xb1c6,	// (0x0007af03) cale_bg_pane_g6

0xb1ce,	// (0x0007af0b) cale_bg_pane_g7

0xb1d6,	// (0x0007af13) cale_bg_pane_g8

0xb1de,	// (0x0007af1b) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0007f04a) cale_bg_pane_g

0x3532,	// (0x0007326f) list_cale_time_pane_ParamLimits

0x3532,	// (0x0007326f) list_cale_time_pane

0xb1e6,	// (0x0007af23) list_cale_time_pane_g1_ParamLimits

0xb1e6,	// (0x0007af23) list_cale_time_pane_g1

0xb1f2,	// (0x0007af2f) list_cale_time_pane_g2_ParamLimits

0xb1f2,	// (0x0007af2f) list_cale_time_pane_g2

0x4746,	// (0x00074483) list_cale_time_pane_g3_ParamLimits

0x4746,	// (0x00074483) list_cale_time_pane_g3

0x4754,	// (0x00074491) list_cale_time_pane_g4_ParamLimits

0x4754,	// (0x00074491) list_cale_time_pane_g4

0x4762,	// (0x0007449f) list_cale_time_pane_g5_ParamLimits

0x4762,	// (0x0007449f) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0007f05d) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0007f05d) list_cale_time_pane_g

0xb20c,	// (0x0007af49) list_cale_time_pane_t1_ParamLimits

0xb20c,	// (0x0007af49) list_cale_time_pane_t1

0xb234,	// (0x0007af71) list_cale_time_pane_t2_ParamLimits

0xb234,	// (0x0007af71) list_cale_time_pane_t2

0x4a04,	// (0x00074741) aid_blid_cardinal_pane

0x4a42,	// (0x0007477f) compass_pane_t4

0xb25c,	// (0x0007af99) list_cale_time_pane_t4_ParamLimits

0xb25c,	// (0x0007af99) list_cale_time_pane_t4

0x4a50,	// (0x0007478d) compass_pane_t5

0x4a5e,	// (0x0007479b) compass_pane_t6

0x4a6c,	// (0x000747a9) compass_pane_t7

0xb76f,	// (0x0007b4ac) navi_pane_cc_t1

0xb8d6,	// (0x0007b613) aid_phob_thumbnail_center_pane

0x50d5,	// (0x00074e12) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0007f06a) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0007f06a) list_cale_time_pane_t

0x2419,	// (0x00072156) bg_popup_window_pane_cp02_ParamLimits

0x2419,	// (0x00072156) bg_popup_window_pane_cp02

0xb284,	// (0x0007afc1) heading_pane_cp01_ParamLimits

0xb284,	// (0x0007afc1) heading_pane_cp01

0xb290,	// (0x0007afcd) loc_req_pane_ParamLimits

0xb290,	// (0x0007afcd) loc_req_pane

0xb2a0,	// (0x0007afdd) loc_type_pane_ParamLimits

0xb2a0,	// (0x0007afdd) loc_type_pane

0xb2b2,	// (0x0007afef) loc_type_pane_t1_ParamLimits

0xb2b2,	// (0x0007afef) loc_type_pane_t1

0xb2c4,	// (0x0007b001) loc_type_pane_t2_ParamLimits

0xb2c4,	// (0x0007b001) loc_type_pane_t2

0xb2d6,	// (0x0007b013) loc_type_pane_t3_ParamLimits

0xb2d6,	// (0x0007b013) loc_type_pane_t3

0x0002,

0xf334,	// (0x0007f071) loc_type_pane_t_ParamLimits

0xf334,	// (0x0007f071) loc_type_pane_t

0xb2e8,	// (0x0007b025) list_loc_req_pane

0xb2f2,	// (0x0007b02f) scroll_pane_cp012

0x4770,	// (0x000744ad) list_single_loc_request_popup_menu_pane_ParamLimits

0x4770,	// (0x000744ad) list_single_loc_request_popup_menu_pane

0xb2fd,	// (0x0007b03a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb2fd,	// (0x0007b03a) list_single_loc_request_popup_menu_pane_g1

0xb309,	// (0x0007b046) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb309,	// (0x0007b046) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0007f078) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0007f078) list_single_loc_request_popup_menu_pane_g

0xb315,	// (0x0007b052) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb315,	// (0x0007b052) list_single_loc_request_popup_menu_pane_t1

0x2a41,	// (0x0007277e) bg_popup_window_pane_cp03_ParamLimits

0x2a41,	// (0x0007277e) bg_popup_window_pane_cp03

0x07bb,	// (0x000704f8) heading_loc_req_pane_ParamLimits

0x07bb,	// (0x000704f8) heading_loc_req_pane

0x477d,	// (0x000744ba) popup_dyc_status_message_window_g1_ParamLimits

0x477d,	// (0x000744ba) popup_dyc_status_message_window_g1

0x4791,	// (0x000744ce) popup_dyc_status_message_window_t1_ParamLimits

0x4791,	// (0x000744ce) popup_dyc_status_message_window_t1

0x47a6,	// (0x000744e3) popup_dyc_status_message_window_t2_ParamLimits

0x47a6,	// (0x000744e3) popup_dyc_status_message_window_t2

0x47bb,	// (0x000744f8) popup_dyc_status_message_window_t3_ParamLimits

0x47bb,	// (0x000744f8) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0007f07d) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0007f07d) popup_dyc_status_message_window_t

0x27e6,	// (0x00072523) bg_heading_pane_cp01

0xb32b,	// (0x0007b068) heading_loc_req_pane_g1

0xb333,	// (0x0007b070) heading_loc_req_pane_g2

0xb33b,	// (0x0007b078) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0007f084) heading_loc_req_pane_g

0xb343,	// (0x0007b080) heading_loc_req_pane_t1

0xb3c7,	// (0x0007b104) bg_popup_sub_pane_cp01_ParamLimits

0xb3c7,	// (0x0007b104) bg_popup_sub_pane_cp01

0xb3d5,	// (0x0007b112) popup_cale_events_window_g1_ParamLimits

0xb3d5,	// (0x0007b112) popup_cale_events_window_g1

0xb3f5,	// (0x0007b132) popup_cale_events_window_g2_ParamLimits

0xb3f5,	// (0x0007b132) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0007f0b8) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0007f0b8) popup_cale_events_window_g

0xb415,	// (0x0007b152) popup_cale_events_window_t1_ParamLimits

0xb415,	// (0x0007b152) popup_cale_events_window_t1

0xb427,	// (0x0007b164) popup_cale_events_window_t2_ParamLimits

0xb427,	// (0x0007b164) popup_cale_events_window_t2

0xb465,	// (0x0007b1a2) popup_cale_events_window_t3_ParamLimits

0xb465,	// (0x0007b1a2) popup_cale_events_window_t3

0xb49f,	// (0x0007b1dc) popup_cale_events_window_t4_ParamLimits

0xb49f,	// (0x0007b1dc) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0007f0bd) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0007f0bd) popup_cale_events_window_t

0x47ef,	// (0x0007452c) call_type_pane

0x47ff,	// (0x0007453c) popup_call_status_window_g1

0x4813,	// (0x00074550) popup_call_status_window_g2

0x4827,	// (0x00074564) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0007f0c6) popup_call_status_window_g

0xb4d5,	// (0x0007b212) call_type_pane_g1

0xb4de,	// (0x0007b21b) call_type_pane_g2

0x0001,

0xf390,	// (0x0007f0cd) call_type_pane_g

0x27e6,	// (0x00072523) bg_popup_sub_pane_cp02

0xb4e7,	// (0x0007b224) listscroll_popup_wml_pane

0xb4ef,	// (0x0007b22c) list_wml_pane

0xb4f9,	// (0x0007b236) scroll_pane_cp013

0xb504,	// (0x0007b241) list_single_graphic_popup_wml_pane_ParamLimits

0xb504,	// (0x0007b241) list_single_graphic_popup_wml_pane

0x2ec1,	// (0x00072bfe) list_single_graphic_popup_wml_pane_g1

0xb518,	// (0x0007b255) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0007f0d2) list_single_graphic_popup_wml_pane_g

0xb520,	// (0x0007b25d) list_single_graphic_popup_wml_pane_t1

0xb536,	// (0x0007b273) aid_call_pane

0x2a39,	// (0x00072776) popup_clock_analogue_window_g1

0x2a39,	// (0x00072776) popup_clock_analogue_window_g2

0xb53e,	// (0x0007b27b) popup_clock_analogue_window_g3

0xb53e,	// (0x0007b27b) popup_clock_analogue_window_g4

0x2ec1,	// (0x00072bfe) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0007f0d7) popup_clock_analogue_window_g

0xb546,	// (0x0007b283) popup_clock_analogue_window_t1

0xb554,	// (0x0007b291) clock_digital_number_pane_ParamLimits

0xb554,	// (0x0007b291) clock_digital_number_pane

0xb560,	// (0x0007b29d) clock_digital_number_pane_cp02_ParamLimits

0xb560,	// (0x0007b29d) clock_digital_number_pane_cp02

0xb56c,	// (0x0007b2a9) clock_digital_number_pane_cp03_ParamLimits

0xb56c,	// (0x0007b2a9) clock_digital_number_pane_cp03

0xb578,	// (0x0007b2b5) clock_digital_number_pane_cp04_ParamLimits

0xb578,	// (0x0007b2b5) clock_digital_number_pane_cp04

0xb588,	// (0x0007b2c5) clock_digital_separator_pane_ParamLimits

0xb588,	// (0x0007b2c5) clock_digital_separator_pane

0xb594,	// (0x0007b2d1) popup_clock_digital_window_t1

0x2ec1,	// (0x00072bfe) clock_digital_number_pane_g1

0x2ec1,	// (0x00072bfe) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0007f045) clock_digital_number_pane_g

0x2ec1,	// (0x00072bfe) clock_digital_separator_pane_g1

0x2ec1,	// (0x00072bfe) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0007f045) clock_digital_separator_pane_g

0x27e6,	// (0x00072523) bg_popup_window_pane_cp04

0xb5b1,	// (0x0007b2ee) heading_pane_cp03

0xb5b9,	// (0x0007b2f6) listscroll_popup_gms_pane

0xb5c1,	// (0x0007b2fe) grid_large_graphic_popup_pane

0xb5cb,	// (0x0007b308) listscroll_popup_gms_pane_g1

0xb5d3,	// (0x0007b310) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0007f0e2) listscroll_popup_gms_pane_g

0x3d52,	// (0x00073a8f) scroll_pane_cp014

0x4836,	// (0x00074573) cell_large_graphic_popup_pane_ParamLimits

0x4836,	// (0x00074573) cell_large_graphic_popup_pane

0x484e,	// (0x0007458b) cell_large_graphic_popup_pane_g1_ParamLimits

0x484e,	// (0x0007458b) cell_large_graphic_popup_pane_g1

0xb5db,	// (0x0007b318) cell_large_graphic_popup_pane_g2_ParamLimits

0xb5db,	// (0x0007b318) cell_large_graphic_popup_pane_g2

0xb5e7,	// (0x0007b324) cell_large_graphic_popup_pane_g3_ParamLimits

0xb5e7,	// (0x0007b324) cell_large_graphic_popup_pane_g3

0xb5f4,	// (0x0007b331) cell_large_graphic_popup_pane_g4_ParamLimits

0xb5f4,	// (0x0007b331) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0007f0e7) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0007f0e7) cell_large_graphic_popup_pane_g

0xb604,	// (0x0007b341) grid_highlight_pane_cp010

0x2ec1,	// (0x00072bfe) bg_popup_call_pane_g1

0xb60e,	// (0x0007b34b) list_single_graphic_popup_conf_pane_ParamLimits

0xb60e,	// (0x0007b34b) list_single_graphic_popup_conf_pane

0xb621,	// (0x0007b35e) list_highlight_pane_cp01

0xb62a,	// (0x0007b367) list_single_graphic_popup_conf_pane_g1

0xb632,	// (0x0007b36f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0007f0f0) list_single_graphic_popup_conf_pane_g

0xb63a,	// (0x0007b377) list_single_graphic_popup_conf_pane_t1

0xb648,	// (0x0007b385) linegrid_cams_pane_g1

0x485a,	// (0x00074597) linegrid_cams_pane_g2

0x3508,	// (0x00073245) linegrid_cams_pane_g3

0xb651,	// (0x0007b38e) linegrid_cams_pane_g4

0x4863,	// (0x000745a0) linegrid_cams_pane_g5

0x486c,	// (0x000745a9) linegrid_cams_pane_g6

0x3511,	// (0x0007324e) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0007f0f5) linegrid_cams_pane_g

0xb65a,	// (0x0007b397) popup_clock_analogue_window

0xb65a,	// (0x0007b397) popup_clock_digital_window

0x27e6,	// (0x00072523) popup_phob_thumbnail_window

0x2ec1,	// (0x00072bfe) call_video_uplink_pane_g1

0xb663,	// (0x0007b3a0) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0007f104) call_video_uplink_pane_g

0xb66b,	// (0x0007b3a8) video_uplink_pane

0xb673,	// (0x0007b3b0) mce_image_pane_g1

0x4877,	// (0x000745b4) mce_image_pane_g2

0x4881,	// (0x000745be) mce_image_pane_g3

0x4889,	// (0x000745c6) mce_image_pane_g4

0x4891,	// (0x000745ce) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0007f109) mce_image_pane_g

0xb67d,	// (0x0007b3ba) control_top_pane_stacon_cp01_ParamLimits

0xb67d,	// (0x0007b3ba) control_top_pane_stacon_cp01

0xb691,	// (0x0007b3ce) uni_indicator_pane_stacon_cp01_ParamLimits

0xb691,	// (0x0007b3ce) uni_indicator_pane_stacon_cp01

0xb6a2,	// (0x0007b3df) bg_popup_sub_pane_cp03

0x4899,	// (0x000745d6) chi_dic_find_pane

0x48a1,	// (0x000745de) listscroll_chi_dic_pane

0x48aa,	// (0x000745e7) main_pane_chidic_g1

0xb6ac,	// (0x0007b3e9) chi_dic_find_pane_t1

0xb6ba,	// (0x0007b3f7) find_chidic_pane

0xb6c3,	// (0x0007b400) chi_dic_list_pane_ParamLimits

0xb6c3,	// (0x0007b400) chi_dic_list_pane

0xb6d4,	// (0x0007b411) scroll_pane_cp020

0xb6dc,	// (0x0007b419) find_chidic_pane_t1

0x27e6,	// (0x00072523) input_focus_pane_cp06

0x48bd,	// (0x000745fa) list_chi_dic_pane_ParamLimits

0x48bd,	// (0x000745fa) list_chi_dic_pane

0x48cf,	// (0x0007460c) list_chi_dic_pane_t1_ParamLimits

0x48cf,	// (0x0007460c) list_chi_dic_pane_t1

0x27e6,	// (0x00072523) list_highlight_pane_cp020

0xb6eb,	// (0x0007b428) bg_cale_heading_pane_g1

0x48e2,	// (0x0007461f) bg_cale_heading_pane_g2

0x48ea,	// (0x00074627) bg_cale_heading_pane_g3

0x48f2,	// (0x0007462f) bg_cale_heading_pane_g4

0x48fc,	// (0x00074639) bg_cale_heading_pane_g5

0x4906,	// (0x00074643) bg_cale_heading_pane_g6

0x490e,	// (0x0007464b) bg_cale_heading_pane_g7

0x4916,	// (0x00074653) bg_cale_heading_pane_g8

0x4920,	// (0x0007465d) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0007f114) bg_cale_heading_pane_g

0xb6eb,	// (0x0007b428) bg_cale_side_pane_g1

0x492a,	// (0x00074667) bg_cale_side_pane_g2

0x4932,	// (0x0007466f) bg_cale_side_pane_g3

0x493a,	// (0x00074677) bg_cale_side_pane_g4

0x4942,	// (0x0007467f) bg_cale_side_pane_g5

0x494a,	// (0x00074687) bg_cale_side_pane_g6

0x4952,	// (0x0007468f) bg_cale_side_pane_g7

0x495a,	// (0x00074697) bg_cale_side_pane_g8

0x4962,	// (0x0007469f) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0007f127) bg_cale_side_pane_g

0x496a,	// (0x000746a7) popup_call_status_window_ParamLimits

0x496a,	// (0x000746a7) popup_call_status_window

0xb6f3,	// (0x0007b430) stacon_top_pane

0xb6fb,	// (0x0007b438) status_pane_ParamLimits

0xb6fb,	// (0x0007b438) status_pane

0xb710,	// (0x0007b44d) status_small_pane

0xb718,	// (0x0007b455) control_pane

0x27e6,	// (0x00072523) stacon_bottom_pane

0xb720,	// (0x0007b45d) list_single_mce_smart_pane_t1_ParamLimits

0xb720,	// (0x0007b45d) list_single_mce_smart_pane_t1

0xb733,	// (0x0007b470) list_single_mce_smart_pane_t2_ParamLimits

0xb733,	// (0x0007b470) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0007f13a) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0007f13a) list_single_mce_smart_pane_t

0x49b3,	// (0x000746f0) compass_pane

0x49bc,	// (0x000746f9) main_location2_pane_t1

0x49ce,	// (0x0007470b) main_location2_pane_t2

0x49e0,	// (0x0007471d) main_location2_pane_t3

0x0003,

0xf402,	// (0x0007f13f) main_location2_pane_t

0xb752,	// (0x0007b48f) compass_pane_g1_ParamLimits

0xb752,	// (0x0007b48f) compass_pane_g1

0x4a24,	// (0x00074761) compass_pane_t1

0x4a33,	// (0x00074770) compass_pane_t2

0x0005,

0xf40b,	// (0x0007f148) compass_pane_t

0x4a7a,	// (0x000747b7) text_secondary_cp61

0xb766,	// (0x0007b4a3) navi_pane_cams_g5

0xb789,	// (0x0007b4c6) navi_pane_im_t1

0xb797,	// (0x0007b4d4) navi_pane_mp_g1_ParamLimits

0xb797,	// (0x0007b4d4) navi_pane_mp_g1

0xb7ab,	// (0x0007b4e8) navi_pane_mp_g2_ParamLimits

0xb7ab,	// (0x0007b4e8) navi_pane_mp_g2

0xb7b7,	// (0x0007b4f4) navi_pane_mp_g3_ParamLimits

0xb7b7,	// (0x0007b4f4) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0007f15c) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0007f15c) navi_pane_mp_g

0xb7c3,	// (0x0007b500) navi_pane_mp_t1

0xb7d1,	// (0x0007b50e) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0007f163) navi_pane_mp_t

0xb80d,	// (0x0007b54a) navi_pane_vt_g1

0xb7c3,	// (0x0007b500) navi_pane_vt_t1

0xb815,	// (0x0007b552) navi_slider_pane

0xb81d,	// (0x0007b55a) zooming_pane

0xb825,	// (0x0007b562) navi_slider_pane_g1

0xb82e,	// (0x0007b56b) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0007f16a) navi_slider_pane_g

0xb85b,	// (0x0007b598) aid_levels_zoom

0xb863,	// (0x0007b5a0) zooming_pane_g1

0xb86b,	// (0x0007b5a8) zooming_pane_g2

0xb86b,	// (0x0007b5a8) zooming_pane_g3

0x0002,

0xf43c,	// (0x0007f179) zooming_pane_g

0xb873,	// (0x0007b5b0) level_10_zoom

0xb87c,	// (0x0007b5b9) level_11_zoom

0xb885,	// (0x0007b5c2) level_1_zoom

0xb88e,	// (0x0007b5cb) level_2_zoom

0xb897,	// (0x0007b5d4) level_3_zoom

0xb8a0,	// (0x0007b5dd) level_4_zoom

0xb8a9,	// (0x0007b5e6) level_5_zoom

0xb8b2,	// (0x0007b5ef) level_6_zoom

0xb8bb,	// (0x0007b5f8) level_7_zoom

0xb8c4,	// (0x0007b601) level_8_zoom

0xb8cd,	// (0x0007b60a) level_9_zoom

0xb8de,	// (0x0007b61b) popup_phob_thumbnail_window_g1

0xb8e6,	// (0x0007b623) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0007f180) popup_phob_thumbnail_window_g

0xcc12,	// (0x0007c94f) level_1_location

0xcc1a,	// (0x0007c957) level_2_location

0xcc22,	// (0x0007c95f) level_3_location

0xcc2a,	// (0x0007c967) level_4_location

0xb81d,	// (0x0007b55a) level_5_location

0x4b9f,	// (0x000748dc) mce_icon_pane_g1

0x4ba7,	// (0x000748e4) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0007f185) mce_icon_pane_g

0x4baf,	// (0x000748ec) main_mup_pane_g1_ParamLimits

0x4baf,	// (0x000748ec) main_mup_pane_g1

0x4bc5,	// (0x00074902) main_mup_pane_g2_ParamLimits

0x4bc5,	// (0x00074902) main_mup_pane_g2

0x4bdd,	// (0x0007491a) main_mup_pane_g3_ParamLimits

0x4bdd,	// (0x0007491a) main_mup_pane_g3

0x4bf5,	// (0x00074932) main_mup_pane_g4_ParamLimits

0x4bf5,	// (0x00074932) main_mup_pane_g4

0x4c0d,	// (0x0007494a) main_mup_pane_g5_ParamLimits

0x4c0d,	// (0x0007494a) main_mup_pane_g5

0x4c29,	// (0x00074966) main_mup_pane_g6_ParamLimits

0x4c29,	// (0x00074966) main_mup_pane_g6

0x4c41,	// (0x0007497e) main_mup_pane_g7_ParamLimits

0x4c41,	// (0x0007497e) main_mup_pane_g7

0x4c59,	// (0x00074996) main_mup_pane_g8_ParamLimits

0x4c59,	// (0x00074996) main_mup_pane_g8

0x4c73,	// (0x000749b0) main_mup_pane_g9_ParamLimits

0x4c73,	// (0x000749b0) main_mup_pane_g9

0x4c8d,	// (0x000749ca) main_mup_pane_g10_ParamLimits

0x4c8d,	// (0x000749ca) main_mup_pane_g10

0x4ca7,	// (0x000749e4) main_mup_pane_g11_ParamLimits

0x4ca7,	// (0x000749e4) main_mup_pane_g11

0x4cbb,	// (0x000749f8) main_mup_pane_g12_ParamLimits

0x4cbb,	// (0x000749f8) main_mup_pane_g12

0x4cd1,	// (0x00074a0e) main_mup_pane_g13_ParamLimits

0x4cd1,	// (0x00074a0e) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0007f18a) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0007f18a) main_mup_pane_g

0x4ce5,	// (0x00074a22) main_mup_pane_t1_ParamLimits

0x4ce5,	// (0x00074a22) main_mup_pane_t1

0x4cff,	// (0x00074a3c) main_mup_pane_t2_ParamLimits

0x4cff,	// (0x00074a3c) main_mup_pane_t2

0x4d17,	// (0x00074a54) main_mup_pane_t3_ParamLimits

0x4d17,	// (0x00074a54) main_mup_pane_t3

0x4d2f,	// (0x00074a6c) main_mup_pane_t4_ParamLimits

0x4d2f,	// (0x00074a6c) main_mup_pane_t4

0x4d4d,	// (0x00074a8a) main_mup_pane_t5_ParamLimits

0x4d4d,	// (0x00074a8a) main_mup_pane_t5

0x4d62,	// (0x00074a9f) main_mup_pane_t6_ParamLimits

0x4d62,	// (0x00074a9f) main_mup_pane_t6

0x0005,

0xf468,	// (0x0007f1a5) main_mup_pane_t_ParamLimits

0xf468,	// (0x0007f1a5) main_mup_pane_t

0x4d74,	// (0x00074ab1) mup_progress_pane_ParamLimits

0x4d74,	// (0x00074ab1) mup_progress_pane

0x4d80,	// (0x00074abd) mup_visualizer_pane_ParamLimits

0x4d80,	// (0x00074abd) mup_visualizer_pane

0x4db0,	// (0x00074aed) mup_volume_pane_ParamLimits

0x4db0,	// (0x00074aed) mup_volume_pane

0xb8ee,	// (0x0007b62b) mup_visualizer_pane_g1_ParamLimits

0xb8ee,	// (0x0007b62b) mup_visualizer_pane_g1

0xb8ee,	// (0x0007b62b) mup_visualizer_pane_g2_ParamLimits

0xb8ee,	// (0x0007b62b) mup_visualizer_pane_g2

0xb752,	// (0x0007b48f) mup_visualizer_pane_g3_ParamLimits

0xb752,	// (0x0007b48f) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0007f1b2) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0007f1b2) mup_visualizer_pane_g

0x2ec1,	// (0x00072bfe) mup_volume_pane_g1

0xb904,	// (0x0007b641) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0007f1b9) mup_volume_pane_g

0x2ec1,	// (0x00072bfe) mup_progress_pane_g1

0xb90d,	// (0x0007b64a) mup_progress_pane_g2

0xb916,	// (0x0007b653) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0007f1be) mup_progress_pane_g

0x27e6,	// (0x00072523) bg_popup_window_pane_cp05

0xb91f,	// (0x0007b65c) heading_pane_cp02_ParamLimits

0xb91f,	// (0x0007b65c) heading_pane_cp02

0xb939,	// (0x0007b676) list_popup_blid_pane

0xb941,	// (0x0007b67e) list_blid_sat_info_pane_ParamLimits

0xb941,	// (0x0007b67e) list_blid_sat_info_pane

0xb954,	// (0x0007b691) list_blid_sat_info_pane_g1

0xb95c,	// (0x0007b699) list_blid_sat_info_pane_t1

0x4ec6,	// (0x00074c03) mup_equalizer_pane_ParamLimits

0x4ec6,	// (0x00074c03) mup_equalizer_pane

0x4edf,	// (0x00074c1c) mup_equalizer_pane_cp1_ParamLimits

0x4edf,	// (0x00074c1c) mup_equalizer_pane_cp1

0x4efc,	// (0x00074c39) mup_equalizer_pane_cp2_ParamLimits

0x4efc,	// (0x00074c39) mup_equalizer_pane_cp2

0x4f19,	// (0x00074c56) mup_equalizer_pane_cp3_ParamLimits

0x4f19,	// (0x00074c56) mup_equalizer_pane_cp3

0x4f3a,	// (0x00074c77) mup_equalizer_pane_cp4_ParamLimits

0x4f3a,	// (0x00074c77) mup_equalizer_pane_cp4

0x4f5b,	// (0x00074c98) mup_equalizer_pane_cp5

0x4f6f,	// (0x00074cac) mup_equalizer_pane_cp6

0x4f83,	// (0x00074cc0) mup_equalizer_pane_cp7

0xcb30,	// (0x0007c86d) bg_popup_call_poc_act_pane_g9

0xcb38,	// (0x0007c875) bg_popup_call_poc_act_pane_g10

0xcb40,	// (0x0007c87d) bg_popup_call_poc_act_pane_g11

0x000a,

0x2a41,	// (0x0007277e) mup_scale_pane

0x2ec1,	// (0x00072bfe) mup_scale_pane_g1

0xb96a,	// (0x0007b6a7) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0007f1da) mup_scale_pane_g

0xb98e,	// (0x0007b6cb) msg_data_pane

0xb996,	// (0x0007b6d3) scroll_pane_cp017

0x17aa,	// (0x000714e7) bg_list_pane_cp04_ParamLimits

0x17aa,	// (0x000714e7) bg_list_pane_cp04

0xb99e,	// (0x0007b6db) msg_data_pane_g1

0x4fa9,	// (0x00074ce6) msg_data_pane_g2

0x4fb3,	// (0x00074cf0) msg_data_pane_g3

0x4fbb,	// (0x00074cf8) msg_data_pane_g4

0x4fc3,	// (0x00074d00) msg_data_pane_g5

0x4fcb,	// (0x00074d08) msg_data_pane_g6

0x4fd3,	// (0x00074d10) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0007f1e9) msg_data_pane_g

0x17ca,	// (0x00071507) msg_text_pane_ParamLimits

0x17ca,	// (0x00071507) msg_text_pane

0x4fdb,	// (0x00074d18) qrid_highlight_pane_cp011_ParamLimits

0x4fdb,	// (0x00074d18) qrid_highlight_pane_cp011

0x27e6,	// (0x00072523) msg_body_pane

0x27e6,	// (0x00072523) msg_header_pane

0xb9af,	// (0x0007b6ec) input_focus_pane_cp07

0x17fa,	// (0x00071537) msg_header_pane_t1_ParamLimits

0x17fa,	// (0x00071537) msg_header_pane_t1

0x180e,	// (0x0007154b) msg_header_pane_t2_ParamLimits

0x180e,	// (0x0007154b) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0007f1fd) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0007f1fd) msg_header_pane_t

0xb9c4,	// (0x0007b701) msg_body_pane_g1

0x1820,	// (0x0007155d) msg_body_pane_t1_ParamLimits

0x1820,	// (0x0007155d) msg_body_pane_t1

0x1851,	// (0x0007158e) msg_body_pane_t2_ParamLimits

0x1851,	// (0x0007158e) msg_body_pane_t2

0x1863,	// (0x000715a0) msg_body_pane_t3_ParamLimits

0x1863,	// (0x000715a0) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0007f202) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0007f202) msg_body_pane_t

0x502b,	// (0x00074d68) main_viewer_pane_g1_ParamLimits

0x502b,	// (0x00074d68) main_viewer_pane_g1

0x5039,	// (0x00074d76) main_viewer_pane_g2_ParamLimits

0x5039,	// (0x00074d76) main_viewer_pane_g2

0x5047,	// (0x00074d84) main_viewer_pane_g3_ParamLimits

0x5047,	// (0x00074d84) main_viewer_pane_g3

0x5056,	// (0x00074d93) main_viewer_pane_g4_ParamLimits

0x5056,	// (0x00074d93) main_viewer_pane_g4

0xb9e4,	// (0x0007b721) main_viewer_pane_g5_ParamLimits

0xb9e4,	// (0x0007b721) main_viewer_pane_g5

0xb9e4,	// (0x0007b721) main_viewer_pane_g7_ParamLimits

0xb9e4,	// (0x0007b721) main_viewer_pane_g7

0xb9f6,	// (0x0007b733) main_viewer_pane_g8_ParamLimits

0xb9f6,	// (0x0007b733) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0007f212) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0007f212) main_viewer_pane_g

0xba0e,	// (0x0007b74b) viewer_content_pane_ParamLimits

0xba0e,	// (0x0007b74b) viewer_content_pane

0x5092,	// (0x00074dcf) main_postcard_pane_g1_ParamLimits

0x5092,	// (0x00074dcf) main_postcard_pane_g1

0x50a8,	// (0x00074de5) main_postcard_pane_g2_ParamLimits

0x50a8,	// (0x00074de5) main_postcard_pane_g2

0x50be,	// (0x00074dfb) main_postcard_pane_g3_ParamLimits

0x50be,	// (0x00074dfb) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0007f223) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0007f223) main_postcard_pane_g

0x50d5,	// (0x00074e12) main_postcard_pane_g4

0xcd45,	// (0x0007ca82) smil_status_volume_pane_g2

0x5118,	// (0x00074e55) postcard_pane_ParamLimits

0x5118,	// (0x00074e55) postcard_pane

0xba1c,	// (0x0007b759) postcard_pane_g1_ParamLimits

0xba1c,	// (0x0007b759) postcard_pane_g1

0x515a,	// (0x00074e97) postcard_pane_g2_ParamLimits

0x515a,	// (0x00074e97) postcard_pane_g2

0x5166,	// (0x00074ea3) postcard_pane_g3_ParamLimits

0x5166,	// (0x00074ea3) postcard_pane_g3

0xba2a,	// (0x0007b767) postcard_pane_g4_ParamLimits

0xba2a,	// (0x0007b767) postcard_pane_g4

0x5172,	// (0x00074eaf) postcard_pane_g5_ParamLimits

0x5172,	// (0x00074eaf) postcard_pane_g5

0x5187,	// (0x00074ec4) postcard_pane_g6_ParamLimits

0x5187,	// (0x00074ec4) postcard_pane_g6

0xba1c,	// (0x0007b759) postcard_pane_g7_ParamLimits

0xba1c,	// (0x0007b759) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0007f230) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0007f230) postcard_pane_g

0x519b,	// (0x00074ed8) main_mp2_pane_g1_ParamLimits

0x519b,	// (0x00074ed8) main_mp2_pane_g1

0x51a7,	// (0x00074ee4) main_mp2_pane_g2_ParamLimits

0x51a7,	// (0x00074ee4) main_mp2_pane_g2

0x51b3,	// (0x00074ef0) main_mp2_pane_g3_ParamLimits

0x51b3,	// (0x00074ef0) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0007f23f) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0007f23f) main_mp2_pane_g

0x51bf,	// (0x00074efc) main_mp2_pane_t1_ParamLimits

0x51bf,	// (0x00074efc) main_mp2_pane_t1

0x51d4,	// (0x00074f11) main_mp2_pane_t2_ParamLimits

0x51d4,	// (0x00074f11) main_mp2_pane_t2

0x51e6,	// (0x00074f23) main_mp2_pane_t3_ParamLimits

0x51e6,	// (0x00074f23) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0007f246) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0007f246) main_mp2_pane_t

0xba38,	// (0x0007b775) pec_content_pane_ParamLimits

0xba38,	// (0x0007b775) pec_content_pane

0x3d52,	// (0x00073a8f) scroll_pane_cp015

0xba4a,	// (0x0007b787) pec_attribute_pane_ParamLimits

0xba4a,	// (0x0007b787) pec_attribute_pane

0x51f8,	// (0x00074f35) pec_content_pane_g1_ParamLimits

0x51f8,	// (0x00074f35) pec_content_pane_g1

0xba5a,	// (0x0007b797) pec_content_pane_t1_ParamLimits

0xba5a,	// (0x0007b797) pec_content_pane_t1

0xba6c,	// (0x0007b7a9) pec_content_pane_t2_ParamLimits

0xba6c,	// (0x0007b7a9) pec_content_pane_t2

0x0001,

0xf510,	// (0x0007f24d) pec_content_pane_t_ParamLimits

0xf510,	// (0x0007f24d) pec_content_pane_t

0x5204,	// (0x00074f41) list_single_graphic_pane_cp01_ParamLimits

0x5204,	// (0x00074f41) list_single_graphic_pane_cp01

0x2a41,	// (0x0007277e) bg_popup_sub_pane_cp04

0xba7e,	// (0x0007b7bb) popup_mup_playback_window_g1

0xba8a,	// (0x0007b7c7) popup_mup_playback_window_t1

0xba9f,	// (0x0007b7dc) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0007f252) popup_mup_playback_window_t

0xbad6,	// (0x0007b813) main_image_pane_g1_ParamLimits

0xbad6,	// (0x0007b813) main_image_pane_g1

0xbb19,	// (0x0007b856) scroll_pane_cp018_ParamLimits

0xbb19,	// (0x0007b856) scroll_pane_cp018

0xbb31,	// (0x0007b86e) scroll_pane_cp016_ParamLimits

0xbb31,	// (0x0007b86e) scroll_pane_cp016

0x52d1,	// (0x0007500e) smil2_image_pane_ParamLimits

0x52d1,	// (0x0007500e) smil2_image_pane

0x5301,	// (0x0007503e) smil2_root_pane_ParamLimits

0x5301,	// (0x0007503e) smil2_root_pane

0x5339,	// (0x00075076) smil2_text_pane_ParamLimits

0x5339,	// (0x00075076) smil2_text_pane

0x27e6,	// (0x00072523) bg_list_pane_cp06

0xbb6d,	// (0x0007b8aa) grid_radio_pane

0x27e6,	// (0x00072523) bg_popup_window_pane_cp06

0xbb75,	// (0x0007b8b2) main_fmradio_pane_t1

0xb5b1,	// (0x0007b2ee) heading_pane_cp04

0xbb83,	// (0x0007b8c0) main_fmradio_pane_t2

0xcb48,	// (0x0007c885) popup_cale_lunar_info_window_g1

0xbb91,	// (0x0007b8ce) main_fmradio_pane_t3

0xcb50,	// (0x0007c88d) popup_cale_lunar_info_window_g2

0xbb9f,	// (0x0007b8dc) main_fmradio_pane_t4

0x0001,

0xbbad,	// (0x0007b8ea) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0007f32d) popup_cale_lunar_info_window_g

0xf52a,	// (0x0007f267) main_fmradio_pane_t

0xbbbb,	// (0x0007b8f8) wait_bar_pane_cp03

0xbbc3,	// (0x0007b900) cell_fmradio_pane_ParamLimits

0xbbc3,	// (0x0007b900) cell_fmradio_pane

0xba1c,	// (0x0007b759) cell_fmradio_pane_g1_ParamLimits

0xba1c,	// (0x0007b759) cell_fmradio_pane_g1

0x27e6,	// (0x00072523) grid_highlight_pane_cp011

0xbbd6,	// (0x0007b913) poc_content_pane_ParamLimits

0xbbd6,	// (0x0007b913) poc_content_pane

0xbbe8,	// (0x0007b925) scroll_pane_cp019

0x53b9,	// (0x000750f6) popup_call_poc_act_window_ParamLimits

0x53b9,	// (0x000750f6) popup_call_poc_act_window

0x53dd,	// (0x0007511a) popup_call_poc_inact_window_ParamLimits

0x53dd,	// (0x0007511a) popup_call_poc_inact_window

0xf5c7,	// (0x0007f304) bg_popup_call_poc_act_pane_g

0xcac0,	// (0x0007c7fd) bg_popup_call_poc_inact_pane_g1

0xcac8,	// (0x0007c805) bg_popup_call_poc_inact_pane_g2

0xbbf0,	// (0x0007b92d) popup_call_poc_act_window_g2

0xcad0,	// (0x0007c80d) bg_popup_call_poc_inact_pane_g3

0xcad8,	// (0x0007c815) bg_popup_call_poc_inact_pane_g4

0xcae0,	// (0x0007c81d) bg_popup_call_poc_inact_pane_g5

0xbbf8,	// (0x0007b935) popup_call_poc_act_window_t1_ParamLimits

0xbbf8,	// (0x0007b935) popup_call_poc_act_window_t1

0xbc20,	// (0x0007b95d) popup_call_poc_act_window_t2_ParamLimits

0xbc20,	// (0x0007b95d) popup_call_poc_act_window_t2

0xbc48,	// (0x0007b985) popup_call_poc_act_window_t3_ParamLimits

0xbc48,	// (0x0007b985) popup_call_poc_act_window_t3

0xbc70,	// (0x0007b9ad) popup_call_poc_act_window_t4_ParamLimits

0xbc70,	// (0x0007b9ad) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0007f272) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0007f272) popup_call_poc_act_window_t

0xcae8,	// (0x0007c825) bg_popup_call_poc_inact_pane_g6

0xcaf0,	// (0x0007c82d) bg_popup_call_poc_inact_pane_g7

0xcaf8,	// (0x0007c835) bg_popup_call_poc_inact_pane_g8

0xbc82,	// (0x0007b9bf) popup_call_poc_inact_window_g2

0xcb00,	// (0x0007c83d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0007f2f1) bg_popup_call_poc_inact_pane_g

0xbc8a,	// (0x0007b9c7) popup_call_poc_inact_window_t1_ParamLimits

0xbc8a,	// (0x0007b9c7) popup_call_poc_inact_window_t1

0xbc9f,	// (0x0007b9dc) popup_call_poc_inact_window_t2_ParamLimits

0xbc9f,	// (0x0007b9dc) popup_call_poc_inact_window_t2

0xbcb4,	// (0x0007b9f1) popup_call_poc_inact_window_t3_ParamLimits

0xbcb4,	// (0x0007b9f1) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0007f27b) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0007f27b) popup_call_poc_inact_window_t

0xccb8,	// (0x0007c9f5) context_pane_ParamLimits

0x5c10,	// (0x0007594d) signal_pane_ParamLimits

0xb81d,	// (0x0007b55a) main_call2_pane

0xcca6,	// (0x0007c9e3) popup_phob_thumbnail2_window_ParamLimits

0xcca6,	// (0x0007c9e3) popup_phob_thumbnail2_window

0xb9cc,	// (0x0007b709) aid_hotspot_pointer_arrow_pane

0xb9d4,	// (0x0007b711) aid_hotspot_pointer_hand_pane

0x5726,	// (0x00075463) phob_pre_status_pane_g5

0x3567,	// (0x000732a4) cams_zoom_pane_ParamLimits

0x3576,	// (0x000732b3) image_vga_pane_ParamLimits

0x3590,	// (0x000732cd) main_camera_pane_g1_ParamLimits

0x35a2,	// (0x000732df) main_camera_pane_g2_ParamLimits

0x35b2,	// (0x000732ef) main_camera_pane_g3_ParamLimits

0x35c2,	// (0x000732ff) main_camera_pane_g4_ParamLimits

0x35d2,	// (0x0007330f) main_camera_pane_g5_ParamLimits

0x35e2,	// (0x0007331f) main_camera_pane_g6_ParamLimits

0x35f4,	// (0x00073331) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0007ef7a) main_camera_pane_g_ParamLimits

0x3610,	// (0x0007334d) main_camera_pane_t1_ParamLimits

0x3626,	// (0x00073363) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0007ef8b) main_camera_pane_t_ParamLimits

0x2a41,	// (0x0007277e) bg_popup_preview_window_pane_cp01_ParamLimits

0x2a41,	// (0x0007277e) bg_popup_preview_window_pane_cp01

0xbcc9,	// (0x0007ba06) popup_phob_thumbnail2_window_g1_ParamLimits

0xbcc9,	// (0x0007ba06) popup_phob_thumbnail2_window_g1

0x27e6,	// (0x00072523) call2_cli_visual_pane

0x5411,	// (0x0007514e) popup_call2_audio_conf_window_ParamLimits

0x5411,	// (0x0007514e) popup_call2_audio_conf_window

0x5431,	// (0x0007516e) popup_call2_audio_first_window_ParamLimits

0x5431,	// (0x0007516e) popup_call2_audio_first_window

0x54c7,	// (0x00075204) popup_call2_audio_in_window_ParamLimits

0x54c7,	// (0x00075204) popup_call2_audio_in_window

0x550f,	// (0x0007524c) popup_call2_audio_out_window_ParamLimits

0x550f,	// (0x0007524c) popup_call2_audio_out_window

0x5579,	// (0x000752b6) popup_call2_audio_second_window_ParamLimits

0x5579,	// (0x000752b6) popup_call2_audio_second_window

0x55df,	// (0x0007531c) popup_call2_audio_wait_window_ParamLimits

0x55df,	// (0x0007531c) popup_call2_audio_wait_window

0x27e6,	// (0x00072523) bg_popup_call2_act_pane_cp03

0x2a23,	// (0x00072760) list_conf_pane_cp

0xbcd5,	// (0x0007ba12) popup_call2_audio_conf_window_t1

0xb60e,	// (0x0007b34b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb60e,	// (0x0007b34b) list_single_graphic_popup_conf2_pane

0xb621,	// (0x0007b35e) list_highlight_pane_cp04

0xbce3,	// (0x0007ba20) list_single_graphic_popup_conf2_pane_g1

0xb632,	// (0x0007b36f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0007f282) list_single_graphic_popup_conf2_pane_g

0xbced,	// (0x0007ba2a) list_single_graphic_popup_conf2_pane_t1

0xbcfb,	// (0x0007ba38) bg_popup_call2_act_pane_cp01_ParamLimits

0xbcfb,	// (0x0007ba38) bg_popup_call2_act_pane_cp01

0xbd85,	// (0x0007bac2) call_type_pane_cp05_ParamLimits

0xbd85,	// (0x0007bac2) call_type_pane_cp05

0xbdd9,	// (0x0007bb16) popup_call2_audio_second_window_g1_ParamLimits

0xbdd9,	// (0x0007bb16) popup_call2_audio_second_window_g1

0xbe2d,	// (0x0007bb6a) popup_call2_audio_second_window_g2_ParamLimits

0xbe2d,	// (0x0007bb6a) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0007f287) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0007f287) popup_call2_audio_second_window_g

0xbe92,	// (0x0007bbcf) popup_call2_audio_second_window_t1_ParamLimits

0xbe92,	// (0x0007bbcf) popup_call2_audio_second_window_t1

0xbf4d,	// (0x0007bc8a) popup_call2_audio_second_window_t2_ParamLimits

0xbf4d,	// (0x0007bc8a) popup_call2_audio_second_window_t2

0xbfa0,	// (0x0007bcdd) popup_call2_audio_second_window_t3_ParamLimits

0xbfa0,	// (0x0007bcdd) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0007f28e) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0007f28e) popup_call2_audio_second_window_t

0x27e6,	// (0x00072523) bg_popup_call2_in_pane_cp02

0x27f0,	// (0x0007252d) call_type_pane_cp04

0x27f8,	// (0x00072535) popup_call2_audio_wait_window_g1

0x2800,	// (0x0007253d) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0007ee67) popup_call2_audio_wait_window_g

0x2808,	// (0x00072545) popup_call2_audio_wait_window_t3

0xc093,	// (0x0007bdd0) bg_popup_call2_act_pane_ParamLimits

0xc093,	// (0x0007bdd0) bg_popup_call2_act_pane

0xc153,	// (0x0007be90) call_type_pane_cp03_ParamLimits

0xc153,	// (0x0007be90) call_type_pane_cp03

0xc1b7,	// (0x0007bef4) popup_call2_audio_first_window_g1_ParamLimits

0xc1b7,	// (0x0007bef4) popup_call2_audio_first_window_g1

0xc227,	// (0x0007bf64) popup_call2_audio_first_window_g2_ParamLimits

0xc227,	// (0x0007bf64) popup_call2_audio_first_window_g2

0xb8ee,	// (0x0007b62b) popup_call2_audio_first_window_g3_ParamLimits

0xb8ee,	// (0x0007b62b) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0007f297) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0007f297) popup_call2_audio_first_window_g

0xc305,	// (0x0007c042) popup_call2_audio_first_window_t1_ParamLimits

0xc305,	// (0x0007c042) popup_call2_audio_first_window_t1

0xc408,	// (0x0007c145) popup_call2_audio_first_window_t4_ParamLimits

0xc408,	// (0x0007c145) popup_call2_audio_first_window_t4

0xc4eb,	// (0x0007c228) popup_call2_audio_first_window_t5_ParamLimits

0xc4eb,	// (0x0007c228) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0007f2a2) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0007f2a2) popup_call2_audio_first_window_t

0x2a39,	// (0x00072776) bg_popup_call2_act_pane_g1

0xcb58,	// (0x0007c895) popup_cale_lunar_info_window_t1

0xcb66,	// (0x0007c8a3) popup_cale_lunar_info_window_t2

0xcb74,	// (0x0007c8b1) popup_cale_lunar_info_window_t3

0x27e6,	// (0x00072523) bg_popup_call2_bubble_pane

0xc5ec,	// (0x0007c329) bg_popup_call2_in_pane_cp01_ParamLimits

0xc5ec,	// (0x0007c329) bg_popup_call2_in_pane_cp01

0x249e,	// (0x000721db) call_type_pane_cp02

0xc634,	// (0x0007c371) popup_call2_audio_out_window_g1_ParamLimits

0xc634,	// (0x0007c371) popup_call2_audio_out_window_g1

0xc660,	// (0x0007c39d) popup_call2_audio_out_window_g2_ParamLimits

0xc660,	// (0x0007c39d) popup_call2_audio_out_window_g2

0xc688,	// (0x0007c3c5) popup_call2_audio_out_window_g3_ParamLimits

0xc688,	// (0x0007c3c5) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0007f2ab) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0007f2ab) popup_call2_audio_out_window_g

0xc6c3,	// (0x0007c400) popup_call2_audio_out_window_t1_ParamLimits

0xc6c3,	// (0x0007c400) popup_call2_audio_out_window_t1

0xc722,	// (0x0007c45f) popup_call2_audio_out_window_t2_ParamLimits

0xc722,	// (0x0007c45f) popup_call2_audio_out_window_t2

0xc776,	// (0x0007c4b3) popup_call2_audio_out_window_t3_ParamLimits

0xc776,	// (0x0007c4b3) popup_call2_audio_out_window_t3

0xc78c,	// (0x0007c4c9) popup_call2_audio_out_window_t4_ParamLimits

0xc78c,	// (0x0007c4c9) popup_call2_audio_out_window_t4

0xc7a2,	// (0x0007c4df) popup_call2_audio_out_window_t5_ParamLimits

0xc7a2,	// (0x0007c4df) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0007f2b4) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0007f2b4) popup_call2_audio_out_window_t

0xc806,	// (0x0007c543) bg_popup_call2_in_pane_ParamLimits

0xc806,	// (0x0007c543) bg_popup_call2_in_pane

0xc862,	// (0x0007c59f) popup_call2_audio_in_window_g1_ParamLimits

0xc862,	// (0x0007c59f) popup_call2_audio_in_window_g1

0xc89a,	// (0x0007c5d7) popup_call2_audio_in_window_g2_ParamLimits

0xc89a,	// (0x0007c5d7) popup_call2_audio_in_window_g2

0xc8d2,	// (0x0007c60f) popup_call2_audio_in_window_g3_ParamLimits

0xc8d2,	// (0x0007c60f) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0007f2c1) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0007f2c1) popup_call2_audio_in_window_g

0xc92a,	// (0x0007c667) popup_call2_audio_in_window_t1_ParamLimits

0xc92a,	// (0x0007c667) popup_call2_audio_in_window_t1

0xc9aa,	// (0x0007c6e7) popup_call2_audio_in_window_t2_ParamLimits

0xc9aa,	// (0x0007c6e7) popup_call2_audio_in_window_t2

0xca2a,	// (0x0007c767) popup_call2_audio_in_window_t3_ParamLimits

0xca2a,	// (0x0007c767) popup_call2_audio_in_window_t3

0xca44,	// (0x0007c781) popup_call2_audio_in_window_t4_ParamLimits

0xca44,	// (0x0007c781) popup_call2_audio_in_window_t4

0xca56,	// (0x0007c793) popup_call2_audio_in_window_t5_ParamLimits

0xca56,	// (0x0007c793) popup_call2_audio_in_window_t5

0xca6b,	// (0x0007c7a8) popup_call2_audio_in_window_t6_ParamLimits

0xca6b,	// (0x0007c7a8) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0007f2ca) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0007f2ca) popup_call2_audio_in_window_t

0x2a39,	// (0x00072776) bg_popup_call2_in_pane_g1

0xcb82,	// (0x0007c8bf) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0007f332) popup_cale_lunar_info_window_t

0x2a41,	// (0x0007277e) bg_popup_call2_rect_pane_ParamLimits

0x2a41,	// (0x0007277e) bg_popup_call2_rect_pane

0x27e6,	// (0x00072523) call2_cli_visual_graphic_pane

0x27e6,	// (0x00072523) call2_cli_visual_text_pane

0xcd58,	// (0x0007ca95) smil_status_volume_pane_g3

0x0002,

0x2ec1,	// (0x00072bfe) call2_cli_visual_graphic_pane_g1

0x2ec1,	// (0x00072bfe) call2_cli_visual_graphic_pane_g2

0x2ec1,	// (0x00072bfe) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0007f2d7) call2_cli_visual_graphic_pane_g

0xca80,	// (0x0007c7bd) bg_popup_call2_rect_pane_g1

0x3010,	// (0x00072d4d) bg_popup_call2_rect_pane_g2

0xca88,	// (0x0007c7c5) bg_popup_call2_rect_pane_g3

0xca90,	// (0x0007c7cd) bg_popup_call2_rect_pane_g4

0xca98,	// (0x0007c7d5) bg_popup_call2_rect_pane_g5

0xcaa0,	// (0x0007c7dd) bg_popup_call2_rect_pane_g6

0xcaa8,	// (0x0007c7e5) bg_popup_call2_rect_pane_g7

0xcab0,	// (0x0007c7ed) bg_popup_call2_rect_pane_g8

0xcab8,	// (0x0007c7f5) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0007f2de) bg_popup_call2_rect_pane_g

0xcac0,	// (0x0007c7fd) bg_popup_call2_bubble_pane_g1

0xcac8,	// (0x0007c805) bg_popup_call2_bubble_pane_g2

0xcad0,	// (0x0007c80d) bg_popup_call2_bubble_pane_g3

0xcad8,	// (0x0007c815) bg_popup_call2_bubble_pane_g4

0xcae0,	// (0x0007c81d) bg_popup_call2_bubble_pane_g5

0xcae8,	// (0x0007c825) bg_popup_call2_bubble_pane_g6

0xcaf0,	// (0x0007c82d) bg_popup_call2_bubble_pane_g7

0xcaf8,	// (0x0007c835) bg_popup_call2_bubble_pane_g8

0xcb00,	// (0x0007c83d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0007f2f1) bg_popup_call2_bubble_pane_g

0x3080,	// (0x00072dbd) aid_cale_week_size_cell_pane

0x363c,	// (0x00073379) aid_cams_cif_uncrop_pane_ParamLimits

0x363c,	// (0x00073379) aid_cams_cif_uncrop_pane

0x3833,	// (0x00073570) aid_cams_size_cell_ParamLimits

0x3833,	// (0x00073570) aid_cams_size_cell

0x3847,	// (0x00073584) grid_cams_pane_ParamLimits

0x3861,	// (0x0007359e) linegrid_cams_pane_ParamLimits

0x397e,	// (0x000736bb) call_video_pane_t1

0x3990,	// (0x000736cd) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0007efde) call_video_pane_t

0x3f91,	// (0x00073cce) aid_cale_month_size_cell_pane_ParamLimits

0x3f91,	// (0x00073cce) aid_cale_month_size_cell_pane

0xf63e,	// (0x0007f37b) smil_status_volume_pane_g

0xcd65,	// (0x0007caa2) volume_smil_pane_ParamLimits

0x20c3,	// (0x00071e00) aid_popup2_width_pane

0x2f68,	// (0x00072ca5) cell_qdial_pane_g4_ParamLimits

0x2f68,	// (0x00072ca5) cell_qdial_pane_g4

0x4a04,	// (0x00074741) aid_blid_cardinal_pane_ParamLimits

0x4a10,	// (0x0007474d) aid_blid_destination_pane_ParamLimits

0x4a10,	// (0x0007474d) aid_blid_destination_pane

0x2a41,	// (0x0007277e) bg_popup_call_poc_act_pane_ParamLimits

0x2a41,	// (0x0007277e) bg_popup_call_poc_act_pane

0x2a41,	// (0x0007277e) bg_popup_call_poc_inact_pane_ParamLimits

0x2a41,	// (0x0007277e) bg_popup_call_poc_inact_pane

0xcb08,	// (0x0007c845) bg_popup_call_poc_act_pane_g1

0xcb10,	// (0x0007c84d) bg_popup_call_poc_act_pane_g2

0xcb18,	// (0x0007c855) bg_popup_call_poc_act_pane_g3

0xcad8,	// (0x0007c815) bg_popup_call_poc_act_pane_g4

0xcae0,	// (0x0007c81d) bg_popup_call_poc_act_pane_g5

0xcb20,	// (0x0007c85d) bg_popup_call_poc_act_pane_g6

0xcaf0,	// (0x0007c82d) bg_popup_call_poc_act_pane_g7

0xcb28,	// (0x0007c865) bg_popup_call_poc_act_pane_g8

0x27e6,	// (0x00072523) main_usb_pane

0xcc81,	// (0x0007c9be) popup_cale_lunar_info_window

0x3c39,	// (0x00073976) im_reading_pane_t1_ParamLimits

0x3c72,	// (0x000739af) list_im_pane_ParamLimits

0x3c83,	// (0x000739c0) scroll_pane_cp07_ParamLimits

0x27e6,	// (0x00072523) grid_highlight_pane_cp012

0x2a41,	// (0x0007277e) mup_scale_pane_ParamLimits

0xba1c,	// (0x0007b759) main_usb_pane_g1_ParamLimits

0xba1c,	// (0x0007b759) main_usb_pane_g1

0x563b,	// (0x00075378) main_usb_pane_g2_ParamLimits

0x563b,	// (0x00075378) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0007f31b) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0007f31b) main_usb_pane_g

0x5651,	// (0x0007538e) main_usb_pane_t1_ParamLimits

0x5651,	// (0x0007538e) main_usb_pane_t1

0x5663,	// (0x000753a0) main_usb_pane_t2_ParamLimits

0x5663,	// (0x000753a0) main_usb_pane_t2

0x5675,	// (0x000753b2) main_usb_pane_t3_ParamLimits

0x5675,	// (0x000753b2) main_usb_pane_t3

0x5687,	// (0x000753c4) main_usb_pane_t4_ParamLimits

0x5687,	// (0x000753c4) main_usb_pane_t4

0x5699,	// (0x000753d6) main_usb_pane_t5_ParamLimits

0x5699,	// (0x000753d6) main_usb_pane_t5

0x56ab,	// (0x000753e8) main_usb_pane_t6_ParamLimits

0x56ab,	// (0x000753e8) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0007f320) main_usb_pane_t_ParamLimits

0x49b3,	// (0x000746f0) aid_text_placing

0x49bc,	// (0x000746f9) main_location2_pane_t1_ParamLimits

0x49ce,	// (0x0007470b) main_location2_pane_t2_ParamLimits

0x49e0,	// (0x0007471d) main_location2_pane_t3_ParamLimits

0x49f2,	// (0x0007472f) main_location2_pane_t4_ParamLimits

0x49f2,	// (0x0007472f) main_location2_pane_t4

0xf402,	// (0x0007f13f) main_location2_pane_t_ParamLimits

0x2b19,	// (0x00072856) find_pinb_pane_g2_ParamLimits

0x2b19,	// (0x00072856) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0007ee8d) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0007ee8d) find_pinb_pane_g

0x2b25,	// (0x00072862) find_pinb_pane_t1_ParamLimits

0x2b37,	// (0x00072874) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0007ee92) find_pinb_pane_t_ParamLimits

0x27e6,	// (0x00072523) main_call3_pane

0x42c2,	// (0x00073fff) cale_month_day_heading_pane_t1_ParamLimits

0x4320,	// (0x0007405d) cale_month_day_heading_pane_t2_ParamLimits

0x4385,	// (0x000740c2) cale_month_day_heading_pane_t3_ParamLimits

0x43ea,	// (0x00074127) cale_month_day_heading_pane_t4_ParamLimits

0x444f,	// (0x0007418c) cale_month_day_heading_pane_t5_ParamLimits

0x44b4,	// (0x000741f1) cale_month_day_heading_pane_t6_ParamLimits

0x4519,	// (0x00074256) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0007f016) cale_month_day_heading_pane_t_ParamLimits

0xb12f,	// (0x0007ae6c) smil_status_volume_pane

0x5136,	// (0x00074e73) postcard_address_pane_ParamLimits

0x5136,	// (0x00074e73) postcard_address_pane

0x5148,	// (0x00074e85) postcard_message_pane_ParamLimits

0x5148,	// (0x00074e85) postcard_message_pane

0x5619,	// (0x00075356) call2_cli_visual_pane_t1_ParamLimits

0x5619,	// (0x00075356) call2_cli_visual_pane_t1

0x5e3d,	// (0x00075b7a) postcard_message_pane_t1_ParamLimits

0x5e3d,	// (0x00075b7a) postcard_message_pane_t1

0x5e26,	// (0x00075b63) postcard_address_pane_t1_ParamLimits

0x5e26,	// (0x00075b63) postcard_address_pane_t1

0x5e12,	// (0x00075b4f) popup_call3_audio_in_window_ParamLimits

0x5e12,	// (0x00075b4f) popup_call3_audio_in_window

0x5c9d,	// (0x000759da) bg_popup_call3_in_pane_ParamLimits

0x5c9d,	// (0x000759da) bg_popup_call3_in_pane

0x5d13,	// (0x00075a50) popup_call3_audio_in_window_g1_ParamLimits

0x5d13,	// (0x00075a50) popup_call3_audio_in_window_g1

0x5d33,	// (0x00075a70) popup_call3_audio_in_window_g2_ParamLimits

0x5d33,	// (0x00075a70) popup_call3_audio_in_window_g2

0x5d53,	// (0x00075a90) popup_call3_audio_in_window_g3_ParamLimits

0x5d53,	// (0x00075a90) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0007f382) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0007f382) popup_call3_audio_in_window_g

0x5d84,	// (0x00075ac1) popup_call3_audio_in_window_t1_ParamLimits

0x5d84,	// (0x00075ac1) popup_call3_audio_in_window_t1

0x5dc2,	// (0x00075aff) popup_call3_audio_in_window_t2_ParamLimits

0x5dc2,	// (0x00075aff) popup_call3_audio_in_window_t2

0x5e00,	// (0x00075b3d) popup_call3_audio_in_window_t3_ParamLimits

0x5e00,	// (0x00075b3d) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0007f38b) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0007f38b) popup_call3_audio_in_window_t

0xb81d,	// (0x0007b55a) bg_popup_call3_rect_pane

0xca80,	// (0x0007c7bd) bg_popup_call3_rect_pane_g1

0x3010,	// (0x00072d4d) bg_popup_call3_rect_pane_g2

0xca88,	// (0x0007c7c5) bg_popup_call3_rect_pane_g3

0xca90,	// (0x0007c7cd) bg_popup_call3_rect_pane_g4

0xca98,	// (0x0007c7d5) bg_popup_call3_rect_pane_g5

0xcaa0,	// (0x0007c7dd) bg_popup_call3_rect_pane_g6

0xcaa8,	// (0x0007c7e5) bg_popup_call3_rect_pane_g7

0x4dc6,	// (0x00074b03) mup_visualizer_osc_pane

0xb8fc,	// (0x0007b639) mup_visualizer_spec_pane

0x5ccd,	// (0x00075a0a) call3_video_qcif_pane_ParamLimits

0x5ccd,	// (0x00075a0a) call3_video_qcif_pane

0x5ce0,	// (0x00075a1d) call3_video_qcif_uncrop_pane_ParamLimits

0x5ce0,	// (0x00075a1d) call3_video_qcif_uncrop_pane

0x5cee,	// (0x00075a2b) call3_video_subqcif_pane_ParamLimits

0x5cee,	// (0x00075a2b) call3_video_subqcif_pane

0x5d02,	// (0x00075a3f) call3_video_subqcif_uncrop_pane_ParamLimits

0x5d02,	// (0x00075a3f) call3_video_subqcif_uncrop_pane

0x5d73,	// (0x00075ab0) popup_call3_audio_in_window_g4_ParamLimits

0x5d73,	// (0x00075ab0) popup_call3_audio_in_window_g4

0x5c8c,	// (0x000759c9) mup_spec_half_pane

0x5c95,	// (0x000759d2) mup_spec_half_pane_cp

0xcd18,	// (0x0007ca55) mup_osc_middle_pane

0xcd21,	// (0x0007ca5e) mup_visualizer_osc_pane_g1

0x5c6c,	// (0x000759a9) mup_spec_bar_pane_ParamLimits

0x5c6c,	// (0x000759a9) mup_spec_bar_pane

0xcd05,	// (0x0007ca42) mup_spec_bar_pane_g1

0xcd0f,	// (0x0007ca4c) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0007f376) mup_spec_bar_pane_g

0x3080,	// (0x00072dbd) aid_cale_week_size_cell_pane_ParamLimits

0x3093,	// (0x00072dd0) bg_cale_heading_pane_ParamLimits

0x30a7,	// (0x00072de4) bg_cale_pane_cp01_ParamLimits

0x30c0,	// (0x00072dfd) cale_week_corner_pane_ParamLimits

0x30d6,	// (0x00072e13) cale_week_day_heading_pane_ParamLimits

0x30ea,	// (0x00072e27) cale_week_scroll_pane_g1_ParamLimits

0x30fb,	// (0x00072e38) cale_week_scroll_pane_g2_ParamLimits

0x310c,	// (0x00072e49) cale_week_scroll_pane_g3_ParamLimits

0x311d,	// (0x00072e5a) cale_week_scroll_pane_g4_ParamLimits

0x312e,	// (0x00072e6b) cale_week_scroll_pane_g5_ParamLimits

0x313f,	// (0x00072e7c) cale_week_scroll_pane_g6_ParamLimits

0x3150,	// (0x00072e8d) cale_week_scroll_pane_g7_ParamLimits

0x3161,	// (0x00072e9e) cale_week_scroll_pane_g8_ParamLimits

0x3172,	// (0x00072eaf) cale_week_scroll_pane_g9_ParamLimits

0x3183,	// (0x00072ec0) cale_week_scroll_pane_g10_ParamLimits

0x3194,	// (0x00072ed1) cale_week_scroll_pane_g11_ParamLimits

0x31a5,	// (0x00072ee2) cale_week_scroll_pane_g12_ParamLimits

0x31b6,	// (0x00072ef3) cale_week_scroll_pane_g13_ParamLimits

0x31c7,	// (0x00072f04) cale_week_scroll_pane_g14_ParamLimits

0x31d8,	// (0x00072f15) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0007ef1e) cale_week_scroll_pane_g_ParamLimits

0x31e9,	// (0x00072f26) cale_week_time_pane_ParamLimits

0x31fa,	// (0x00072f37) grid_cale_week_pane_ParamLimits

0x320d,	// (0x00072f4a) listscroll_cale_week_pane_t1

0x321f,	// (0x00072f5c) scroll_pane_cp08_ParamLimits

0x3ff5,	// (0x00073d32) cale_month_corner_pane_ParamLimits

0x4277,	// (0x00073fb4) cale_month_pane_t1

0x4289,	// (0x00073fc6) cale_month_week_pane_ParamLimits

0x47ff,	// (0x0007453c) popup_call_status_window_g1_ParamLimits

0x4813,	// (0x00074550) popup_call_status_window_g2_ParamLimits

0x4827,	// (0x00074564) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0007f0c6) popup_call_status_window_g_ParamLimits

0xb52e,	// (0x0007b26b) aid_call2_pane

0x17ec,	// (0x00071529) msg_header_pane_g1

0x5136,	// (0x00074e73) postcard_address2_pane_ParamLimits

0x5136,	// (0x00074e73) postcard_address2_pane

0x5148,	// (0x00074e85) postcard_message2_pane_ParamLimits

0x5148,	// (0x00074e85) postcard_message2_pane

0x5c1e,	// (0x0007595b) message2_row_pane_ParamLimits

0x5c1e,	// (0x0007595b) message2_row_pane

0x5c3a,	// (0x00075977) address2_row_pane_ParamLimits

0x5c3a,	// (0x00075977) address2_row_pane

0xccd3,	// (0x0007ca10) postcard_message2_row_pane_g1

0xccdb,	// (0x0007ca18) postcard_message2_row_pane_t1

0xccd3,	// (0x0007ca10) address2_row_pane_g1

0xccdb,	// (0x0007ca18) address2_row_pane_t1

0x3522,	// (0x0007325f) aid_size_cell_vorec

0x27e6,	// (0x00072523) main_rss_pane

0x5c4d,	// (0x0007598a) rss_list_single_pane_ParamLimits

0x5c4d,	// (0x0007598a) rss_list_single_pane

0xcce9,	// (0x0007ca26) rss_list_single_pane_t1

0xccf7,	// (0x0007ca34) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0007f371) rss_list_single_pane_t

0x27e6,	// (0x00072523) main_camera2_pane

0x27e6,	// (0x00072523) main_video2_pane

0x5eb6,	// (0x00075bf3) cams_zoom_pane_cp2_ParamLimits

0x5eb6,	// (0x00075bf3) cams_zoom_pane_cp2

0x5ed6,	// (0x00075c13) image2_vga_pane_ParamLimits

0x5ed6,	// (0x00075c13) image2_vga_pane

0x5f27,	// (0x00075c64) main_camera2_pane_g1_ParamLimits

0x5f27,	// (0x00075c64) main_camera2_pane_g1

0x5f47,	// (0x00075c84) main_camera2_pane_g2_ParamLimits

0x5f47,	// (0x00075c84) main_camera2_pane_g2

0x5f67,	// (0x00075ca4) main_camera2_pane_g3_ParamLimits

0x5f67,	// (0x00075ca4) main_camera2_pane_g3

0x5f87,	// (0x00075cc4) main_camera2_pane_g4_ParamLimits

0x5f87,	// (0x00075cc4) main_camera2_pane_g4

0x5fa7,	// (0x00075ce4) main_camera2_pane_g5_ParamLimits

0x5fa7,	// (0x00075ce4) main_camera2_pane_g5

0x5fc7,	// (0x00075d04) main_camera2_pane_g6_ParamLimits

0x5fc7,	// (0x00075d04) main_camera2_pane_g6

0x5fe7,	// (0x00075d24) main_camera2_pane_g7_ParamLimits

0x5fe7,	// (0x00075d24) main_camera2_pane_g7

0x6007,	// (0x00075d44) main_camera2_pane_g8_ParamLimits

0x6007,	// (0x00075d44) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0007f392) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0007f392) main_camera2_pane_g

0x6047,	// (0x00075d84) main_camera2_pane_t1_ParamLimits

0x6047,	// (0x00075d84) main_camera2_pane_t1

0x607c,	// (0x00075db9) main_camera2_pane_t2_ParamLimits

0x607c,	// (0x00075db9) main_camera2_pane_t2

0x60a2,	// (0x00075ddf) main_camera2_pane_t3_ParamLimits

0x60a2,	// (0x00075ddf) main_camera2_pane_t3

0x6100,	// (0x00075e3d) main_camera2_pane_t4_ParamLimits

0x6100,	// (0x00075e3d) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0007f3a5) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0007f3a5) main_camera2_pane_t

0x6192,	// (0x00075ecf) cams_zoom_pane_cp4_ParamLimits

0x6192,	// (0x00075ecf) cams_zoom_pane_cp4

0x61a8,	// (0x00075ee5) image2_cif_pane_ParamLimits

0x61a8,	// (0x00075ee5) image2_cif_pane

0x61d3,	// (0x00075f10) image2_subqcif_pane_ParamLimits

0x61d3,	// (0x00075f10) image2_subqcif_pane

0x61ed,	// (0x00075f2a) main_video2_pane_g1_ParamLimits

0x61ed,	// (0x00075f2a) main_video2_pane_g1

0x6207,	// (0x00075f44) main_video2_pane_g2_ParamLimits

0x6207,	// (0x00075f44) main_video2_pane_g2

0x621d,	// (0x00075f5a) main_video2_pane_g3_ParamLimits

0x621d,	// (0x00075f5a) main_video2_pane_g3

0x6233,	// (0x00075f70) main_video2_pane_g4_ParamLimits

0x6233,	// (0x00075f70) main_video2_pane_g4

0x6249,	// (0x00075f86) main_video2_pane_g5_ParamLimits

0x6249,	// (0x00075f86) main_video2_pane_g5

0x625f,	// (0x00075f9c) main_video2_pane_g6_ParamLimits

0x625f,	// (0x00075f9c) main_video2_pane_g6

0x0005,

0xf677,	// (0x0007f3b4) main_video2_pane_g_ParamLimits

0xf677,	// (0x0007f3b4) main_video2_pane_g

0x6279,	// (0x00075fb6) main_video2_pane_t1_ParamLimits

0x6279,	// (0x00075fb6) main_video2_pane_t1

0x629d,	// (0x00075fda) main_video2_pane_t2_ParamLimits

0x629d,	// (0x00075fda) main_video2_pane_t2

0x62eb,	// (0x00076028) main_video2_pane_t3_ParamLimits

0x62eb,	// (0x00076028) main_video2_pane_t3

0x0002,

0xf684,	// (0x0007f3c1) main_video2_pane_t_ParamLimits

0xf684,	// (0x0007f3c1) main_video2_pane_t

0x5766,	// (0x000754a3) call_muted_g2

0x0001,

0xf626,	// (0x0007f363) call_muted_g

0x27e6,	// (0x00072523) main_mup2_pane

0x632f,	// (0x0007606c) main_mup2_pane_g1_ParamLimits

0x632f,	// (0x0007606c) main_mup2_pane_g1

0x633b,	// (0x00076078) main_mup2_pane_g2_ParamLimits

0x633b,	// (0x00076078) main_mup2_pane_g2

0xeb2c,	// (0x0007e869) main_mup_pane_g13_cp1

0xeb34,	// (0x0007e871) mup_volume_pane_cp1

0x6357,	// (0x00076094) main_mup2_pane_g4_ParamLimits

0x6357,	// (0x00076094) main_mup2_pane_g4

0x6369,	// (0x000760a6) main_mup2_pane_g5_ParamLimits

0x6369,	// (0x000760a6) main_mup2_pane_g5

0x637b,	// (0x000760b8) main_mup2_pane_g6_ParamLimits

0x637b,	// (0x000760b8) main_mup2_pane_g6

0x638d,	// (0x000760ca) main_mup2_pane_g7_ParamLimits

0x638d,	// (0x000760ca) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0007f3c8) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0007f3c8) main_mup2_pane_g

0x63a5,	// (0x000760e2) main_mup2_pane_t1_ParamLimits

0x63a5,	// (0x000760e2) main_mup2_pane_t1

0x63bb,	// (0x000760f8) main_mup2_pane_t2_ParamLimits

0x63bb,	// (0x000760f8) main_mup2_pane_t2

0x63d1,	// (0x0007610e) main_mup2_pane_t3_ParamLimits

0x63d1,	// (0x0007610e) main_mup2_pane_t3

0x63e7,	// (0x00076124) main_mup2_pane_t4_ParamLimits

0x63e7,	// (0x00076124) main_mup2_pane_t4

0x63ff,	// (0x0007613c) main_mup2_pane_t5_ParamLimits

0x63ff,	// (0x0007613c) main_mup2_pane_t5

0x6417,	// (0x00076154) main_mup2_pane_t6_ParamLimits

0x6417,	// (0x00076154) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0007f3d7) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0007f3d7) main_mup2_pane_t

0x6447,	// (0x00076184) mup2_visualizer_pane_ParamLimits

0x6447,	// (0x00076184) mup2_visualizer_pane

0x6475,	// (0x000761b2) mup_progress_pane_cp_ParamLimits

0x6475,	// (0x000761b2) mup_progress_pane_cp

0xeb0e,	// (0x0007e84b) mup_volume_pane_cp_ParamLimits

0xeb0e,	// (0x0007e84b) mup_volume_pane_cp

0x6489,	// (0x000761c6) mup2_visualizer_pane_g1_ParamLimits

0x6489,	// (0x000761c6) mup2_visualizer_pane_g1

0xea59,	// (0x0007e796) mup2_visualizer_pane_g2_ParamLimits

0xea59,	// (0x0007e796) mup2_visualizer_pane_g2

0x64a0,	// (0x000761dd) mup2_visualizer_pane_g3_ParamLimits

0x64a0,	// (0x000761dd) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0007f3e4) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0007f3e4) mup2_visualizer_pane_g

0xbb65,	// (0x0007b8a2) aid_size_cell_fmradio

0x5918,	// (0x00075655) aid_height_parent_landcape

0x3d39,	// (0x00073a76) wml_content_pane_cp

0x3d41,	// (0x00073a7e) wml_tabs_pane

0x3d4a,	// (0x00073a87) popup_wml_miniature_window

0x3d52,	// (0x00073a8f) scroll_pane_cp021

0x3d66,	// (0x00073aa3) wml_content_pane_comp8

0x27e6,	// (0x00072523) bg_popup_sub_pane_cp05

0xea77,	// (0x0007e7b4) popup_wml_miniature_window_g1

0xea7f,	// (0x0007e7bc) wml_miniature_view_pane

0x64ac,	// (0x000761e9) aid_size_wml_view

0x64b4,	// (0x000761f1) wml_miniature_view_pane_g1

0x64bd,	// (0x000761fa) wml_miniature_view_pane_g2

0x64c6,	// (0x00076203) wml_miniature_view_pane_g3

0x64ce,	// (0x0007620b) wml_miniature_view_pane_g4

0x64d6,	// (0x00076213) wml_miniature_view_pane_g5

0x64de,	// (0x0007621b) wml_miniature_view_pane_g6

0x64e6,	// (0x00076223) wml_miniature_view_pane_g7

0x64ee,	// (0x0007622b) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0007f3eb) wml_miniature_view_pane_g

0xcdaa,	// (0x0007cae7) background_graphic_ParamLimits

0xcdaa,	// (0x0007cae7) background_graphic

0xea87,	// (0x0007e7c4) wml_tabs_2_pane

0xea90,	// (0x0007e7cd) wml_tabs_3_pane_ParamLimits

0xea90,	// (0x0007e7cd) wml_tabs_3_pane

0xeaa2,	// (0x0007e7df) wml_tabs_4_pane_ParamLimits

0xeaa2,	// (0x0007e7df) wml_tabs_4_pane

0xeab8,	// (0x0007e7f5) wml_tabs_5_pane_ParamLimits

0xeab8,	// (0x0007e7f5) wml_tabs_5_pane

0xead2,	// (0x0007e80f) wml_tabs_pane_g2_ParamLimits

0xead2,	// (0x0007e80f) wml_tabs_pane_g2

0xeae6,	// (0x0007e823) wml_tabs_pane_g3_ParamLimits

0xeae6,	// (0x0007e823) wml_tabs_pane_g3

0x64f6,	// (0x00076233) wml_tabs_2_active_pane_ParamLimits

0x64f6,	// (0x00076233) wml_tabs_2_active_pane

0x650a,	// (0x00076247) wml_tabs_2_passive_pane_ParamLimits

0x650a,	// (0x00076247) wml_tabs_2_passive_pane

0x651e,	// (0x0007625b) wml_tabs_3_active_pane_cp_ParamLimits

0x651e,	// (0x0007625b) wml_tabs_3_active_pane_cp

0x6533,	// (0x00076270) wml_tabs_3_passive_pane_ParamLimits

0x6533,	// (0x00076270) wml_tabs_3_passive_pane

0x6546,	// (0x00076283) wml_tabs_3_passive_pane_cp_ParamLimits

0x6546,	// (0x00076283) wml_tabs_3_passive_pane_cp

0x655d,	// (0x0007629a) tabs_4_active_pane

0x6565,	// (0x000762a2) tabs_4_passive_pane

0x656f,	// (0x000762ac) tabs_4_passive_pane_cp

0x6577,	// (0x000762b4) tabs_4_passive_pane_cp2

0x5633,	// (0x00075370) aid_height_text

0x4d9c,	// (0x00074ad9) mup_volume_cont_pane_ParamLimits

0x4d9c,	// (0x00074ad9) mup_volume_cont_pane

0x2ad7,	// (0x00072814) aid_size_cell_pinb

0x2ae1,	// (0x0007281e) aid_size_list_pinb

0x6461,	// (0x0007619e) mup2_volume_cont_pane_ParamLimits

0x6461,	// (0x0007619e) mup2_volume_cont_pane

0xeafa,	// (0x0007e837) mup2_volume_cont_pane_g1_ParamLimits

0xeafa,	// (0x0007e837) mup2_volume_cont_pane_g1

0x20cf,	// (0x00071e0c) aid_size_cell_touch_ParamLimits

0x20cf,	// (0x00071e0c) aid_size_cell_touch

0x2329,	// (0x00072066) touch_pane_ParamLimits

0x2329,	// (0x00072066) touch_pane

0x20b1,	// (0x00071dee) main_rss2_pane

0xeb3c,	// (0x0007e879) listscroll_rss2_pane

0xeb45,	// (0x0007e882) rss2_navigation_pane

0xeb4d,	// (0x0007e88a) list_rss2_pane

0xb6d4,	// (0x0007b411) scroll_pane_cp22

0xeb55,	// (0x0007e892) rss2_navigation_pane_g1

0xeb5e,	// (0x0007e89b) rss2_navigation_pane_g2

0xeb66,	// (0x0007e8a3) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0007f3fc) rss2_navigation_pane_g

0xeb6e,	// (0x0007e8ab) rss2_navigation_pane_t1

0x6581,	// (0x000762be) rss2_list_single_pane_ParamLimits

0x6581,	// (0x000762be) rss2_list_single_pane

0xeb7c,	// (0x0007e8b9) rss2_list_single_pane_t2

0xeb8a,	// (0x0007e8c7) rss2_list_single_pane_t3_ParamLimits

0xeb8a,	// (0x0007e8c7) rss2_list_single_pane_t3

0xeba7,	// (0x0007e8e4) rss2_list_single_pane_t4

0x46dd,	// (0x0007441a) smil_status_pane_g1

0xaf36,	// (0x0007ac73) main_image2_pane_ParamLimits

0xaf36,	// (0x0007ac73) main_image2_pane

0x6027,	// (0x00075d64) main_camera2_pane_g9_ParamLimits

0x6027,	// (0x00075d64) main_camera2_pane_g9

0x6155,	// (0x00075e92) main_camera2_pane_t5_ParamLimits

0x6155,	// (0x00075e92) main_camera2_pane_t5

0xcd7a,	// (0x0007cab7) main_camera2_pane_t6_ParamLimits

0xcd7a,	// (0x0007cab7) main_camera2_pane_t6

0x6596,	// (0x000762d3) main_image2_pane_g1_ParamLimits

0x6596,	// (0x000762d3) main_image2_pane_g1

0x536f,	// (0x000750ac) smil2_video_pane_ParamLimits

0x536f,	// (0x000750ac) smil2_video_pane

0xaf2e,	// (0x0007ac6b) aid_zoom_text_primary_cp

0x22d9,	// (0x00072016) popup_preview_fixed_window

0x3c31,	// (0x0007396e) im_reading_pane_g1

0x5e9e,	// (0x00075bdb) cams2_bc_adjust_pane_cp_ParamLimits

0x5e9e,	// (0x00075bdb) cams2_bc_adjust_pane_cp

0x6184,	// (0x00075ec1) cams2_bc_adjust_pane_ParamLimits

0x6184,	// (0x00075ec1) cams2_bc_adjust_pane

0xebb5,	// (0x0007e8f2) cams2_bc_adjust_pane_g1

0xebbd,	// (0x0007e8fa) cams2_slider_pane

0xebc6,	// (0x0007e903) cams2_slider_pane_g1

0xebcf,	// (0x0007e90c) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0007f403) cams2_slider_pane_g

0x2c26,	// (0x00072963) calc_display_pane_ParamLimits

0x2c4c,	// (0x00072989) calc_paper_pane_ParamLimits

0x2c6d,	// (0x000729aa) grid_calc_pane_ParamLimits

0xb594,	// (0x0007b2d1) popup_clock_digital_window_t1_ParamLimits

0xbb02,	// (0x0007b83f) main_image_pane_t1

0x2c08,	// (0x00072945) aid_size_cell_calc_ParamLimits

0x2c08,	// (0x00072945) aid_size_cell_calc

0x595e,	// (0x0007569b) popup_blid_sat_info2_window_ParamLimits

0x595e,	// (0x0007569b) popup_blid_sat_info2_window

0xebf1,	// (0x0007e92e) aid_size_cell_blid

0xebf9,	// (0x0007e936) bg_popup_window_pane_cp07

0xec1c,	// (0x0007e959) grid_popup_blid_pane

0xec26,	// (0x0007e963) heading_pane_cp05_ParamLimits

0xec26,	// (0x0007e963) heading_pane_cp05

0x0271,	// (0x0006ffae) cell_popup_blid_pane_ParamLimits

0x0271,	// (0x0006ffae) cell_popup_blid_pane

0x0295,	// (0x0006ffd2) cell_popup_blid_pane_g1

0x029d,	// (0x0006ffda) cell_popup_blid_pane_t1

0x6431,	// (0x0007616e) mup2_indicator_pane_ParamLimits

0x6431,	// (0x0007616e) mup2_indicator_pane

0xb81d,	// (0x0007b55a) mup2_visualizer_osc_pane

0xea65,	// (0x0007e7a2) mup2_visualizer_spec_pane_ParamLimits

0xea65,	// (0x0007e7a2) mup2_visualizer_spec_pane

0x65ac,	// (0x000762e9) mup2_spec_half_pane

0x65b5,	// (0x000762f2) mup2_spec_half_pane_cp

0x65bd,	// (0x000762fa) mup2_spec_bar_pane_ParamLimits

0x65bd,	// (0x000762fa) mup2_spec_bar_pane

0xcd05,	// (0x0007ca42) mup2_spec_bar_pane_g1

0xcd0f,	// (0x0007ca4c) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0007f376) mup2_spec_bar_pane_g

0x65dd,	// (0x0007631a) mup2_osc_middle_pane

0xcd21,	// (0x0007ca5e) mup2_visualizer_osc_pane_g1

0x239b,	// (0x000720d8) popup_number_entry_window_t1_ParamLimits

0x23ae,	// (0x000720eb) popup_number_entry_window_t2_ParamLimits

0x23c0,	// (0x000720fd) popup_number_entry_window_t3_ParamLimits

0x23d2,	// (0x0007210f) popup_number_entry_window_t5_ParamLimits

0x23d2,	// (0x0007210f) popup_number_entry_window_t5

0xf0fb,	// (0x0007ee38) popup_number_entry_window_t_ParamLimits

0x2406,	// (0x00072143) text_title_cp2_ParamLimits

0xb9dc,	// (0x0007b719) aid_hotspot_pointer_text2_pane

0xba02,	// (0x0007b73f) main_viewer_pane_g9_ParamLimits

0xba02,	// (0x0007b73f) main_viewer_pane_g9

0x4277,	// (0x00073fb4) cale_month_pane_t1_ParamLimits

0xb164,	// (0x0007aea1) bg_cale_pane_ParamLimits

0xb17c,	// (0x0007aeb9) list_cale_pane_ParamLimits

0x320d,	// (0x00072f4a) listscroll_cale_day_pane_t1

0xb18d,	// (0x0007aeca) scroll_pane_cp09_ParamLimits

0x4dce,	// (0x00074b0b) main_mup_eq_pane_t1_ParamLimits

0x4dce,	// (0x00074b0b) main_mup_eq_pane_t1

0x4de8,	// (0x00074b25) main_mup_eq_pane_t2_ParamLimits

0x4de8,	// (0x00074b25) main_mup_eq_pane_t2

0x4e02,	// (0x00074b3f) main_mup_eq_pane_t3_ParamLimits

0x4e02,	// (0x00074b3f) main_mup_eq_pane_t3

0x4e1e,	// (0x00074b5b) main_mup_eq_pane_t4_ParamLimits

0x4e1e,	// (0x00074b5b) main_mup_eq_pane_t4

0x4e3a,	// (0x00074b77) main_mup_eq_pane_t5_ParamLimits

0x4e3a,	// (0x00074b77) main_mup_eq_pane_t5

0x4e56,	// (0x00074b93) main_mup_eq_pane_t6_ParamLimits

0x4e56,	// (0x00074b93) main_mup_eq_pane_t6

0x4e6a,	// (0x00074ba7) main_mup_eq_pane_t7_ParamLimits

0x4e6a,	// (0x00074ba7) main_mup_eq_pane_t7

0x4e7e,	// (0x00074bbb) main_mup_eq_pane_t8_ParamLimits

0x4e7e,	// (0x00074bbb) main_mup_eq_pane_t8

0x4e92,	// (0x00074bcf) main_mup_eq_pane_t9_ParamLimits

0x4e92,	// (0x00074bcf) main_mup_eq_pane_t9

0x4eac,	// (0x00074be9) main_mup_eq_pane_t10_ParamLimits

0x4eac,	// (0x00074be9) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0007f1c5) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0007f1c5) main_mup_eq_pane_t

0x4f5b,	// (0x00074c98) mup_equalizer_pane_cp5_ParamLimits

0x4f6f,	// (0x00074cac) mup_equalizer_pane_cp6_ParamLimits

0x4f83,	// (0x00074cc0) mup_equalizer_pane_cp7_ParamLimits

0x20b1,	// (0x00071dee) main_gallery_pane

0xcd2a,	// (0x0007ca67) smil2_volume_pane

0xcd32,	// (0x0007ca6f) smil_status_volume_pane_g1_ParamLimits

0xcd45,	// (0x0007ca82) smil_status_volume_pane_g2_ParamLimits

0xcd58,	// (0x0007ca95) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0007f37b) smil_status_volume_pane_g_ParamLimits

0xebf9,	// (0x0007e936) bg_popup_window_pane_cp07_ParamLimits

0xec07,	// (0x0007e944) blid_firmament_pane

0x65e6,	// (0x00076323) aid_size_cell_gallery_ParamLimits

0x65e6,	// (0x00076323) aid_size_cell_gallery

0x65fc,	// (0x00076339) grid_gallery_pane_ParamLimits

0x65fc,	// (0x00076339) grid_gallery_pane

0x6615,	// (0x00076352) cell_gallery_pane_ParamLimits

0x6615,	// (0x00076352) cell_gallery_pane

0x02ab,	// (0x0006ffe8) bg_cell_gallery_focus_pane_ParamLimits

0x02ab,	// (0x0006ffe8) bg_cell_gallery_focus_pane

0x02bd,	// (0x0006fffa) cell_gallery_pane_g1_ParamLimits

0x02bd,	// (0x0006fffa) cell_gallery_pane_g1

0x665e,	// (0x0007639b) cell_gallery_pane_g2_ParamLimits

0x665e,	// (0x0007639b) cell_gallery_pane_g2

0x666b,	// (0x000763a8) cell_gallery_pane_g3_ParamLimits

0x666b,	// (0x000763a8) cell_gallery_pane_g3

0x02c9,	// (0x00070006) cell_gallery_pane_g4_ParamLimits

0x02c9,	// (0x00070006) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0007f429) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0007f429) cell_gallery_pane_g

0x02d5,	// (0x00070012) bg_cell_gallery_focus_pane_g1

0x02dd,	// (0x0007001a) bg_cell_gallery_focus_pane_g2

0x02e5,	// (0x00070022) bg_cell_gallery_focus_pane_g3

0x02ed,	// (0x0007002a) bg_cell_gallery_focus_pane_g4

0x02f5,	// (0x00070032) bg_cell_gallery_focus_pane_g5

0x02fd,	// (0x0007003a) bg_cell_gallery_focus_pane_g6

0x0305,	// (0x00070042) bg_cell_gallery_focus_pane_g7

0x030d,	// (0x0007004a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0007f432) bg_cell_gallery_focus_pane_g

0x0315,	// (0x00070052) aid_firma_cardinal

0x0329,	// (0x00070066) blid_firmament_pane_t1

0x0340,	// (0x0007007d) blid_firmament_pane_t2

0x0357,	// (0x00070094) blid_firmament_pane_t3

0x036e,	// (0x000700ab) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0007f443) blid_firmament_pane_t

0x0385,	// (0x000700c2) blid_sat_info_pane

0x0395,	// (0x000700d2) blid_sat_info_pane_g1

0x0395,	// (0x000700d2) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0007f44c) blid_sat_info_pane_g

0x039f,	// (0x000700dc) blid_sat_info_pane_t1

0x03ad,	// (0x000700ea) smil2_volume_content_pane

0x03b6,	// (0x000700f3) smil2_volume_pane_g1

0xcdb6,	// (0x0007caf3) smil2_volume_content_pane_g1

0x03be,	// (0x000700fb) smil2_volume_content_pane_g2

0x03c7,	// (0x00070104) smil2_volume_content_pane_g3

0x03d0,	// (0x0007010d) smil2_volume_content_pane_g4

0x03d9,	// (0x00070116) smil2_volume_content_pane_g5

0x03e2,	// (0x0007011f) smil2_volume_content_pane_g6

0x03eb,	// (0x00070128) smil2_volume_content_pane_g7

0x03f4,	// (0x00070131) smil2_volume_content_pane_g8

0x03fd,	// (0x0007013a) smil2_volume_content_pane_g9

0x0406,	// (0x00070143) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0007f451) smil2_volume_content_pane_g

0x3275,	// (0x00072fb2) cale_week_day_heading_pane_t1_ParamLimits

0x32a2,	// (0x00072fdf) cale_week_day_heading_pane_t2_ParamLimits

0x32cf,	// (0x0007300c) cale_week_day_heading_pane_t3_ParamLimits

0x32fc,	// (0x00073039) cale_week_day_heading_pane_t4_ParamLimits

0x3329,	// (0x00073066) cale_week_day_heading_pane_t5_ParamLimits

0x3356,	// (0x00073093) cale_week_day_heading_pane_t6_ParamLimits

0x3383,	// (0x000730c0) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0007ef3d) cale_week_day_heading_pane_t_ParamLimits

0x33b0,	// (0x000730ed) bg_cale_side_pane_ParamLimits

0x33be,	// (0x000730fb) cale_week_time_pane_t1_ParamLimits

0x33d6,	// (0x00073113) cale_week_time_pane_t2_ParamLimits

0x33ee,	// (0x0007312b) cale_week_time_pane_t3_ParamLimits

0x3406,	// (0x00073143) cale_week_time_pane_t4_ParamLimits

0x341e,	// (0x0007315b) cale_week_time_pane_t5_ParamLimits

0x3436,	// (0x00073173) cale_week_time_pane_t6_ParamLimits

0x344e,	// (0x0007318b) cale_week_time_pane_t7_ParamLimits

0x3466,	// (0x000731a3) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0007ef4c) cale_week_time_pane_t_ParamLimits

0x347e,	// (0x000731bb) cell_cale_week_pane_g2_ParamLimits

0x33b0,	// (0x000730ed) bg_cale_side_pane_cp01_ParamLimits

0x457e,	// (0x000742bb) cale_month_week_pane_t1_ParamLimits

0x4595,	// (0x000742d2) cale_month_week_pane_t2_ParamLimits

0x45ac,	// (0x000742e9) cale_month_week_pane_t3_ParamLimits

0x45c3,	// (0x00074300) cale_month_week_pane_t4_ParamLimits

0x45da,	// (0x00074317) cale_month_week_pane_t5_ParamLimits

0x45f1,	// (0x0007432e) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0007f025) cale_month_week_pane_t_ParamLimits

0xb123,	// (0x0007ae60) cell_cale_month_pane_g1_ParamLimits

0x20b1,	// (0x00071dee) main_cale_event_viewer_pane

0x20b1,	// (0x00071dee) listscroll_cale_event_viewer_pane

0x040f,	// (0x0007014c) list_cale_ev_pane

0x0417,	// (0x00070154) scroll_pane_cp023

0x0423,	// (0x00070160) field_cale_ev_pane_ParamLimits

0x0423,	// (0x00070160) field_cale_ev_pane

0x0441,	// (0x0007017e) field_cale_ev_content_pane_ParamLimits

0x0441,	// (0x0007017e) field_cale_ev_content_pane

0x044d,	// (0x0007018a) field_cale_ev_pane_g1_ParamLimits

0x044d,	// (0x0007018a) field_cale_ev_pane_g1

0x0459,	// (0x00070196) field_cale_ev_pane_g2_ParamLimits

0x0459,	// (0x00070196) field_cale_ev_pane_g2

0x0471,	// (0x000701ae) field_cale_ev_pane_g3_ParamLimits

0x0471,	// (0x000701ae) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0007f466) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0007f466) field_cale_ev_pane_g

0x0489,	// (0x000701c6) field_cale_ev_pane_t1_ParamLimits

0x0489,	// (0x000701c6) field_cale_ev_pane_t1

0x04a0,	// (0x000701dd) field_cale_ev_content_pane_t1_ParamLimits

0x04a0,	// (0x000701dd) field_cale_ev_content_pane_t1

0xb9a6,	// (0x0007b6e3) bg_button_pane_cp01

0x2da0,	// (0x00072add) listscroll_cale_week_pane_ParamLimits

0x3076,	// (0x00072db3) popup_toolbar_window_cp01

0x320d,	// (0x00072f4a) listscroll_cale_week_pane_t1_ParamLimits

0x2da0,	// (0x00072add) listscroll_cale_day_pane_ParamLimits

0x473c,	// (0x00074479) popup_toolbar_window_cp02

0x320d,	// (0x00072f4a) listscroll_cale_day_pane_t1_ParamLimits

0x2da0,	// (0x00072add) main_cale_month_pane_ParamLimits

0x5b92,	// (0x000758cf) popup_toolbar_window_cp03_ParamLimits

0x5b92,	// (0x000758cf) popup_toolbar_window_cp03

0x5237,	// (0x00074f74) main_image_pane_g2_ParamLimits

0x5237,	// (0x00074f74) main_image_pane_g2

0x5248,	// (0x00074f85) main_image_pane_g3_ParamLimits

0x5248,	// (0x00074f85) main_image_pane_g3

0x0002,

0xf51a,	// (0x0007f257) main_image_pane_g_ParamLimits

0xf51a,	// (0x0007f257) main_image_pane_g

0xbb02,	// (0x0007b83f) main_image_pane_t1_ParamLimits

0x5259,	// (0x00074f96) main_image_pane_t2_ParamLimits

0x5259,	// (0x00074f96) main_image_pane_t2

0x526b,	// (0x00074fa8) main_image_pane_t3_ParamLimits

0x526b,	// (0x00074fa8) main_image_pane_t3

0x5293,	// (0x00074fd0) main_image_pane_t4_ParamLimits

0x5293,	// (0x00074fd0) main_image_pane_t4

0x0003,

0xf521,	// (0x0007f25e) main_image_pane_t_ParamLimits

0xf521,	// (0x0007f25e) main_image_pane_t

0x52b3,	// (0x00074ff0) popup_image_details_window_cp01

0x52bd,	// (0x00074ffa) popup_toobar_trans_pane_cp01_ParamLimits

0x52bd,	// (0x00074ffa) popup_toobar_trans_pane_cp01

0x5a3d,	// (0x0007577a) popup_image_details_window_ParamLimits

0x5a3d,	// (0x0007577a) popup_image_details_window

0xcc8b,	// (0x0007c9c8) popup_image_focus_window

0x5e58,	// (0x00075b95) camera2_autofocus_pane_ParamLimits

0x5e58,	// (0x00075b95) camera2_autofocus_pane

0x20b1,	// (0x00071dee) bg_popup_sub_pane_cp06

0x04be,	// (0x000701fb) popup_image_focus_window_g1

0x04c6,	// (0x00070203) popup_image_focus_window_g2

0x04ce,	// (0x0007020b) popup_image_focus_window_g3

0x04d6,	// (0x00070213) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0007f46d) popup_image_focus_window_g

0x04de,	// (0x0007021b) popup_image_focus_window_t1

0x04ec,	// (0x00070229) popup_image_focus_window_t2

0x04fc,	// (0x00070239) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0007f476) popup_image_focus_window_t

0x050a,	// (0x00070247) camera2_autofocus_pane_g1

0xaf36,	// (0x0007ac73) bg_tb_trans_pane_cp01

0x0518,	// (0x00070255) popup_image_details_window_g1

0x052b,	// (0x00070268) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0007f488) popup_image_details_window_g

0x0554,	// (0x00070291) popup_image_details_window_t1

0x0566,	// (0x000702a3) popup_image_details_window_t2

0x057f,	// (0x000702bc) popup_image_details_window_t3

0x0593,	// (0x000702d0) popup_image_details_window_t4

0x05ae,	// (0x000702eb) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0007f48f) popup_image_details_window_t

0x2d8c,	// (0x00072ac9) bg_calc_paper_pane_ParamLimits

0x20b1,	// (0x00071dee) grid_highlight_pane_cp013

0xaf4c,	// (0x0007ac89) list_calc_pane_ParamLimits

0xaf5e,	// (0x0007ac9b) scroll_pane_cp024

0x2da0,	// (0x00072add) bg_calc_display_pane_ParamLimits

0x2dac,	// (0x00072ae9) calc_display_pane_t1_ParamLimits

0x2dbe,	// (0x00072afb) calc_display_pane_t2_ParamLimits

0xaf66,	// (0x0007aca3) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0007eebf) calc_display_pane_t_ParamLimits

0x2ecb,	// (0x00072c08) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0007eedc) cell_calc_pane_g

0x2ed4,	// (0x00072c11) cell_calc_pane_t1

0x2ee3,	// (0x00072c20) grid_highlight_pane_cp02_ParamLimits

0x2ef9,	// (0x00072c36) toolbar_button_pane_cp01_ParamLimits

0x2ef9,	// (0x00072c36) toolbar_button_pane_cp01

0xbb47,	// (0x0007b884) temp_image_control_pane_ParamLimits

0xbb47,	// (0x0007b884) temp_image_control_pane

0xaf36,	// (0x0007ac73) main_mp3_pane

0x05c8,	// (0x00070305) temp_image_control_pane_g1_ParamLimits

0x05c8,	// (0x00070305) temp_image_control_pane_g1

0x05d6,	// (0x00070313) temp_image_control_pane_g2_ParamLimits

0x05d6,	// (0x00070313) temp_image_control_pane_g2

0x05e8,	// (0x00070325) temp_image_control_pane_g3_ParamLimits

0x05e8,	// (0x00070325) temp_image_control_pane_g3

0x66a8,	// (0x000763e5) temp_image_control_pane_g4_ParamLimits

0x66a8,	// (0x000763e5) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0007f49a) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0007f49a) temp_image_control_pane_g

0x05c8,	// (0x00070305) main_mp3_pane_g1

0x66bb,	// (0x000763f8) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0007f4a3) main_mp3_pane_g

0x062b,	// (0x00070368) main_mp3_pane_t1

0x3604,	// (0x00073341) main_camera_pane_g8_ParamLimits

0x3604,	// (0x00073341) main_camera_pane_g8

0x37b5,	// (0x000734f2) main_video_pane_g7_ParamLimits

0x37b5,	// (0x000734f2) main_video_pane_g7

0xcd98,	// (0x0007cad5) main_camera2_pane_t7_ParamLimits

0xcd98,	// (0x0007cad5) main_camera2_pane_t7

0x3cf9,	// (0x00073a36) scroll_pane_cp025_ParamLimits

0x3cf9,	// (0x00073a36) scroll_pane_cp025

0x3d0d,	// (0x00073a4a) scroll_pane_cp026_ParamLimits

0x3d0d,	// (0x00073a4a) scroll_pane_cp026

0x3d1c,	// (0x00073a59) wml_content_pane_ParamLimits

0x20b1,	// (0x00071dee) main_touch_calib_pane

0x6784,	// (0x000764c1) main_touch_calib_pane_g1

0x6790,	// (0x000764cd) main_touch_calib_pane_g2

0x679c,	// (0x000764d9) main_touch_calib_pane_g3

0x67a8,	// (0x000764e5) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0007f4c1) main_touch_calib_pane_g

0x67b4,	// (0x000764f1) main_touch_calib_pane_t1

0x67ce,	// (0x0007650b) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0007f4ca) main_touch_calib_pane_t

0xb75e,	// (0x0007b49b) mup_progress_pane_cp02

0xb77d,	// (0x0007b4ba) navi_pane_g1

0xb7df,	// (0x0007b51c) navi_pane_mp_t3

0xaf36,	// (0x0007ac73) main_mp3_pane_ParamLimits

0x5bd0,	// (0x0007590d) navi_pane_ParamLimits

0x05c8,	// (0x00070305) main_mp3_pane_g1_ParamLimits

0x66bb,	// (0x000763f8) main_mp3_pane_g2_ParamLimits

0x66c9,	// (0x00076406) main_mp3_pane_g3_ParamLimits

0x66c9,	// (0x00076406) main_mp3_pane_g3

0x66d7,	// (0x00076414) main_mp3_pane_g4_ParamLimits

0x66d7,	// (0x00076414) main_mp3_pane_g4

0x05f8,	// (0x00070335) main_mp3_pane_g5_ParamLimits

0x05f8,	// (0x00070335) main_mp3_pane_g5

0x0606,	// (0x00070343) main_mp3_pane_g6_ParamLimits

0x0606,	// (0x00070343) main_mp3_pane_g6

0x0613,	// (0x00070350) main_mp3_pane_g7_ParamLimits

0x0613,	// (0x00070350) main_mp3_pane_g7

0x061f,	// (0x0007035c) main_mp3_pane_g8_ParamLimits

0x061f,	// (0x0007035c) main_mp3_pane_g8

0xf766,	// (0x0007f4a3) main_mp3_pane_g_ParamLimits

0x66e3,	// (0x00076420) main_mp3_pane_t2

0x66f1,	// (0x0007642e) main_mp3_pane_t3

0x0639,	// (0x00070376) main_mp3_pane_t4

0x0647,	// (0x00070384) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0007f4b4) main_mp3_pane_t

0x0655,	// (0x00070392) mup_progress_pane_cp01

0xaf2e,	// (0x0007ac6b) aid_zoom_text_secondary2

0x040f,	// (0x0007014c) list_cale_ev2_pane

0x0417,	// (0x00070154) scroll_pane_cp023_ParamLimits

0x6824,	// (0x00076561) field_cale_ev2_pane_ParamLimits

0x6824,	// (0x00076561) field_cale_ev2_pane

0x6844,	// (0x00076581) field_cale_ev2_pane_g1_ParamLimits

0x6844,	// (0x00076581) field_cale_ev2_pane_g1

0x6850,	// (0x0007658d) field_cale_ev2_pane_g2_ParamLimits

0x6850,	// (0x0007658d) field_cale_ev2_pane_g2

0x6868,	// (0x000765a5) field_cale_ev2_pane_g3_ParamLimits

0x6868,	// (0x000765a5) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0007f4d5) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0007f4d5) field_cale_ev2_pane_g

0xcdbf,	// (0x0007cafc) field_cale_ev2_pane_t1_ParamLimits

0xcdbf,	// (0x0007cafc) field_cale_ev2_pane_t1

0xcdd6,	// (0x0007cb13) field_cale_ev2_pane_t2_ParamLimits

0xcdd6,	// (0x0007cb13) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0007f4de) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0007f4de) field_cale_ev2_pane_t

0x50ec,	// (0x00074e29) main_postcard_pane_g5_ParamLimits

0x50ec,	// (0x00074e29) main_postcard_pane_g5

0x5102,	// (0x00074e3f) main_postcard_pane_g6_ParamLimits

0x5102,	// (0x00074e3f) main_postcard_pane_g6

0x354f,	// (0x0007328c) camera2_autofocus_pane_cp_ParamLimits

0x354f,	// (0x0007328c) camera2_autofocus_pane_cp

0xaf36,	// (0x0007ac73) main_mup3_pane

0x68a0,	// (0x000765dd) main_mup3_pane_g1_ParamLimits

0x68a0,	// (0x000765dd) main_mup3_pane_g1

0x68c2,	// (0x000765ff) main_mup3_pane_g2_ParamLimits

0x68c2,	// (0x000765ff) main_mup3_pane_g2

0x6940,	// (0x0007667d) main_mup3_pane_g3_ParamLimits

0x6940,	// (0x0007667d) main_mup3_pane_g3

0x6982,	// (0x000766bf) main_mup3_pane_g4_ParamLimits

0x6982,	// (0x000766bf) main_mup3_pane_g4

0x69c4,	// (0x00076701) main_mup3_pane_g5_ParamLimits

0x69c4,	// (0x00076701) main_mup3_pane_g5

0x6a06,	// (0x00076743) main_mup3_pane_g6_ParamLimits

0x6a06,	// (0x00076743) main_mup3_pane_g6

0x065d,	// (0x0007039a) main_mup3_pane_g7_ParamLimits

0x065d,	// (0x0007039a) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0007f4ee) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0007f4ee) main_mup3_pane_g

0x6a80,	// (0x000767bd) main_mup3_pane_t1_ParamLimits

0x6a80,	// (0x000767bd) main_mup3_pane_t1

0x6af0,	// (0x0007682d) main_mup3_pane_t2_ParamLimits

0x6af0,	// (0x0007682d) main_mup3_pane_t2

0x6bc0,	// (0x000768fd) main_mup3_pane_t4_ParamLimits

0x6bc0,	// (0x000768fd) main_mup3_pane_t4

0x6c16,	// (0x00076953) main_mup3_pane_t5_ParamLimits

0x6c16,	// (0x00076953) main_mup3_pane_t5

0x6cca,	// (0x00076a07) main_mup3_pane_t6_ParamLimits

0x6cca,	// (0x00076a07) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0007f4ff) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0007f4ff) main_mup3_pane_t

0x6d7e,	// (0x00076abb) mup3_progress_pane_ParamLimits

0x6d7e,	// (0x00076abb) mup3_progress_pane

0x6e00,	// (0x00076b3d) popup_mup3_control_window_ParamLimits

0x6e00,	// (0x00076b3d) popup_mup3_control_window

0x066b,	// (0x000703a8) popup_mup3_text_window

0x6e32,	// (0x00076b6f) mup3_progress_pane_t1

0x6e49,	// (0x00076b86) mup3_progress_pane_t2

0x0673,	// (0x000703b0) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0007f50c) mup3_progress_pane_t

0x068a,	// (0x000703c7) mup_progress_pane_cp03

0x20b1,	// (0x00071dee) bg_tb_trans_pane_cp04

0x6e60,	// (0x00076b9d) mup3_volume_pane

0x6e68,	// (0x00076ba5) popup_mup3_control_window_g1

0x6e71,	// (0x00076bae) mup3_volume_pane_g1

0x6e7a,	// (0x00076bb7) mup3_volume_pane_g2

0x6e83,	// (0x00076bc0) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0007f513) mup3_volume_pane_g

0x20b1,	// (0x00071dee) bg_tb_trans_pane_cp03

0x069a,	// (0x000703d7) popup_mup3_text_window_g1

0x06a2,	// (0x000703df) popup_mup3_text_window_t1

0x2e98,	// (0x00072bd5) list_calc_item_pane_g1_ParamLimits

0xeb23,	// (0x0007e860) mup_volume_pane_cp_g1

0x67e8,	// (0x00076525) main_touch_calib_pane_t3

0x67fc,	// (0x00076539) main_touch_calib_pane_t4

0x6810,	// (0x0007654d) main_touch_calib_pane_t5

0x20bb,	// (0x00071df8) aid_cell_size_toolbar2

0x20c3,	// (0x00071e00) aid_popup3_width_pane

0xaf1e,	// (0x0007ac5b) aid_zoom_text_msg_primary

0xb026,	// (0x0007ad63) vorec_t7

0x2e05,	// (0x00072b42) bg_calc_paper_pane_g1_ParamLimits

0x2e11,	// (0x00072b4e) bg_calc_paper_pane_g2_ParamLimits

0x2e1d,	// (0x00072b5a) bg_calc_paper_pane_g3_ParamLimits

0x2e29,	// (0x00072b66) bg_calc_paper_pane_g4_ParamLimits

0x2e35,	// (0x00072b72) bg_calc_paper_pane_g5_ParamLimits

0x2e41,	// (0x00072b7e) bg_calc_paper_pane_g6_ParamLimits

0x2e50,	// (0x00072b8d) bg_calc_paper_pane_g7_ParamLimits

0x2e5f,	// (0x00072b9c) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0007eec6) bg_calc_paper_pane_g_ParamLimits

0x2e72,	// (0x00072baf) calc_bg_paper_pane_g9_ParamLimits

0x36a9,	// (0x000733e6) image_qvga_pane_ParamLimits

0x36a9,	// (0x000733e6) image_qvga_pane

0x2a41,	// (0x0007277e) bg_popup_sub_pane_cp04_ParamLimits

0xba7e,	// (0x0007b7bb) popup_mup_playback_window_g1_ParamLimits

0xba8a,	// (0x0007b7c7) popup_mup_playback_window_t1_ParamLimits

0xba9f,	// (0x0007b7dc) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0007f252) popup_mup_playback_window_t_ParamLimits

0x634b,	// (0x00076088) main_mup2_pane_g3_ParamLimits

0x634b,	// (0x00076088) main_mup2_pane_g3

0x39ee,	// (0x0007372b) popup_toolbar_window_cp04

0xbe81,	// (0x0007bbbe) popup_call2_audio_second_window_g3_ParamLimits

0xbe81,	// (0x0007bbbe) popup_call2_audio_second_window_g3

0xc28b,	// (0x0007bfc8) popup_call2_audio_first_window_g4_ParamLimits

0xc28b,	// (0x0007bfc8) popup_call2_audio_first_window_g4

0xc90a,	// (0x0007c647) popup_call2_audio_in_window_g4_ParamLimits

0xc90a,	// (0x0007c647) popup_call2_audio_in_window_g4

0x5219,	// (0x00074f56) aid_area_sk_bg_cut_ParamLimits

0x5219,	// (0x00074f56) aid_area_sk_bg_cut

0xbab4,	// (0x0007b7f1) aid_area_sk_bg_cut_2_ParamLimits

0xbab4,	// (0x0007b7f1) aid_area_sk_bg_cut_2

0x664e,	// (0x0007638b) aid_placing_details_win

0x6656,	// (0x00076393) aid_placing_details_win_2

0x050a,	// (0x00070247) camera2_autofocus_pane_g1_ParamLimits

0x22be,	// (0x00071ffb) popup_fixed_preview_cale_window_ParamLimits

0x22be,	// (0x00071ffb) popup_fixed_preview_cale_window

0xb837,	// (0x0007b574) navi_slider_pane_g3

0xb840,	// (0x0007b57d) navi_slider_pane_g4

0xb849,	// (0x0007b586) navi_slider_pane_g5

0xb837,	// (0x0007b574) navi_slider_pane_g6

0xb852,	// (0x0007b58f) navi_slider_pane_g7

0xb973,	// (0x0007b6b0) mup_scale_pane_g3

0xb97c,	// (0x0007b6b9) mup_scale_pane_g4

0xb985,	// (0x0007b6c2) mup_scale_pane_g5

0x4f97,	// (0x00074cd4) mup_scale_pane_g6

0x4fa0,	// (0x00074cdd) mup_scale_pane_g7

0xb837,	// (0x0007b574) cams2_slider_pane_g3

0xebd8,	// (0x0007e915) cams2_slider_pane_g4

0xebe0,	// (0x0007e91d) cams2_slider_pane_g5

0xb837,	// (0x0007b574) cams2_slider_pane_g6

0xebe8,	// (0x0007e925) cams2_slider_pane_g7

0x0395,	// (0x000700d2) camera2_autofocus_pane_cp_g1

0x06b0,	// (0x000703ed) bg_popup_preview_window_pane_cp02_ParamLimits

0x06b0,	// (0x000703ed) bg_popup_preview_window_pane_cp02

0x06bc,	// (0x000703f9) list_fp_cale_pane_ParamLimits

0x06bc,	// (0x000703f9) list_fp_cale_pane

0x06c8,	// (0x00070405) popup_fixed_preview_cale_window_t1_ParamLimits

0x06c8,	// (0x00070405) popup_fixed_preview_cale_window_t1

0x6e8c,	// (0x00076bc9) popup_fixed_preview_cale_window_t2_ParamLimits

0x6e8c,	// (0x00076bc9) popup_fixed_preview_cale_window_t2

0x6ea1,	// (0x00076bde) popup_fixed_preview_cale_window_t3_ParamLimits

0x6ea1,	// (0x00076bde) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0007f51a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0007f51a) popup_fixed_preview_cale_window_t

0x6eb6,	// (0x00076bf3) list_single_fp_cale_pane_ParamLimits

0x6eb6,	// (0x00076bf3) list_single_fp_cale_pane

0x06e6,	// (0x00070423) list_single_fp_cale_pane_g1_ParamLimits

0x06e6,	// (0x00070423) list_single_fp_cale_pane_g1

0x06f2,	// (0x0007042f) list_single_fp_cale_pane_g2_ParamLimits

0x06f2,	// (0x0007042f) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0007f521) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0007f521) list_single_fp_cale_pane_g

0x070b,	// (0x00070448) list_single_fp_cale_pane_t1_ParamLimits

0x070b,	// (0x00070448) list_single_fp_cale_pane_t1

0x071d,	// (0x0007045a) list_single_fp_cale_pane_t2_ParamLimits

0x071d,	// (0x0007045a) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0007f528) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0007f528) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x20b1,	// (0x00071dee) main_dialer_pane

0x6ecb,	// (0x00076c08) aid_cell_size_keypad

0x6ed5,	// (0x00076c12) dialer_ne_pane

0x6edd,	// (0x00076c1a) grid_dialer_command_1_pane

0x6ee5,	// (0x00076c22) grid_dialer_command_2_pane

0x6eed,	// (0x00076c2a) grid_dialer_keypad_pane

0x6eff,	// (0x00076c3c) bg_popup_call_pane_cp06_ParamLimits

0x6eff,	// (0x00076c3c) bg_popup_call_pane_cp06

0x6f0b,	// (0x00076c48) dialer_ne_clear_pane_ParamLimits

0x6f0b,	// (0x00076c48) dialer_ne_clear_pane

0x0750,	// (0x0007048d) dialer_ne_pane_g1

0x0758,	// (0x00070495) dialer_ne_pane_t1_ParamLimits

0x0758,	// (0x00070495) dialer_ne_pane_t1

0x6f17,	// (0x00076c54) dialer_ne_pane_t2_ParamLimits

0x6f17,	// (0x00076c54) dialer_ne_pane_t2

0x6f41,	// (0x00076c7e) dialer_ne_pane_t3_ParamLimits

0x6f41,	// (0x00076c7e) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0007f52d) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0007f52d) dialer_ne_pane_t

0x6f71,	// (0x00076cae) dialer_ne_pane_t3_copy1_ParamLimits

0x6f71,	// (0x00076cae) dialer_ne_pane_t3_copy1

0x6fa0,	// (0x00076cdd) cell_dialer_keypad_pane_ParamLimits

0x6fa0,	// (0x00076cdd) cell_dialer_keypad_pane

0x6fb7,	// (0x00076cf4) cell_dialer_command_1_pane_ParamLimits

0x6fb7,	// (0x00076cf4) cell_dialer_command_1_pane

0x6fcd,	// (0x00076d0a) cell_dialer_command_2_pane_ParamLimits

0x6fcd,	// (0x00076d0a) cell_dialer_command_2_pane

0x076a,	// (0x000704a7) bg_button_pane_cp02_ParamLimits

0x076a,	// (0x000704a7) bg_button_pane_cp02

0x6fdc,	// (0x00076d19) cell_dialer_keypad_pane_g1_ParamLimits

0x6fdc,	// (0x00076d19) cell_dialer_keypad_pane_g1

0x076a,	// (0x000704a7) bg_button_pane_cp03_ParamLimits

0x076a,	// (0x000704a7) bg_button_pane_cp03

0x6ff0,	// (0x00076d2d) cell_dialer_command_1_pane_g1_ParamLimits

0x6ff0,	// (0x00076d2d) cell_dialer_command_1_pane_g1

0x0776,	// (0x000704b3) bg_button_pane_cp04

0x7004,	// (0x00076d41) cell_dialer_command_2_pane_g1

0xb81d,	// (0x0007b55a) bg_button_pane_cp06

0x077e,	// (0x000704bb) dialer_ne_clear_pane_g1

0x4adb,	// (0x00074818) navi_pane_g2

0x4b09,	// (0x00074846) navi_pane_g3

0x0002,

0xf418,	// (0x0007f155) navi_pane_g

0x4b32,	// (0x0007486f) navi_pane_mv_g2

0x4b59,	// (0x00074896) navi_pane_mv_g5

0x4b61,	// (0x0007489e) navi_pane_mv_t1

0x2da0,	// (0x00072add) main_clock2_pane

0x7038,	// (0x00076d75) main_clock2_list_pane_ParamLimits

0x7038,	// (0x00076d75) main_clock2_list_pane

0x706e,	// (0x00076dab) main_clock2_pane_t1_ParamLimits

0x706e,	// (0x00076dab) main_clock2_pane_t1

0x70aa,	// (0x00076de7) main_clock2_pane_t2_ParamLimits

0x70aa,	// (0x00076de7) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0007f534) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0007f534) main_clock2_pane_t

0x7134,	// (0x00076e71) popup_clock_analogue_window_cp03_ParamLimits

0x7134,	// (0x00076e71) popup_clock_analogue_window_cp03

0x7159,	// (0x00076e96) popup_clock_digital_window_cp02_ParamLimits

0x7159,	// (0x00076e96) popup_clock_digital_window_cp02

0x71ca,	// (0x00076f07) main_clock2_list_single_pane_ParamLimits

0x71ca,	// (0x00076f07) main_clock2_list_single_pane

0xb81d,	// (0x0007b55a) list_highlight_pane_cp05

0x0786,	// (0x000704c3) main_clock2_list_single_pane_t1

0x39ee,	// (0x0007372b) popup_toolbar_window_cp04_ParamLimits

0x6678,	// (0x000763b5) camera2_autofocus_pane_g2_ParamLimits

0x6678,	// (0x000763b5) camera2_autofocus_pane_g2

0x6684,	// (0x000763c1) camera2_autofocus_pane_g3_ParamLimits

0x6684,	// (0x000763c1) camera2_autofocus_pane_g3

0x6690,	// (0x000763cd) camera2_autofocus_pane_g4_ParamLimits

0x6690,	// (0x000763cd) camera2_autofocus_pane_g4

0x669c,	// (0x000763d9) camera2_autofocus_pane_g5_ParamLimits

0x669c,	// (0x000763d9) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0007f47d) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0007f47d) camera2_autofocus_pane_g

0x6880,	// (0x000765bd) camera2_autofocus_pane_cp_g2

0x6888,	// (0x000765c5) camera2_autofocus_pane_cp_g3

0x6890,	// (0x000765cd) camera2_autofocus_pane_cp_g4

0x6898,	// (0x000765d5) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0007f4e3) camera2_autofocus_pane_cp_g

0x6ef7,	// (0x00076c34) popup_dialer_spcha_window

0x20b1,	// (0x00071dee) bg_popup_sub_pane_cp07

0x0794,	// (0x000704d1) list_spcha_pane

0x079c,	// (0x000704d9) list_single_spcha_pane_ParamLimits

0x079c,	// (0x000704d9) list_single_spcha_pane

0x20b1,	// (0x00071dee) list_highlight_pane_cp06

0x07ad,	// (0x000704ea) list_single_spcha_pane_t1

0xc6b4,	// (0x0007c3f1) popup_call2_audio_out_window_g4_ParamLimits

0xc6b4,	// (0x0007c3f1) popup_call2_audio_out_window_g4

0x20b1,	// (0x00071dee) main_imed2_pane

0xcc93,	// (0x0007c9d0) popup_imed_adjust2_window

0x5a55,	// (0x00075792) popup_imed_trans_window_ParamLimits

0x5a55,	// (0x00075792) popup_imed_trans_window

0xec52,	// (0x0007e98f) popup_blid_sat_info2_window_t1

0xec60,	// (0x0007e99d) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0007f412) popup_blid_sat_info2_window_t

0x7274,	// (0x00076fb1) aid_size_cell_colour_35

0x7294,	// (0x00076fd1) aid_size_cell_colour_112

0x72b4,	// (0x00076ff1) aid_size_cell_effect

0xcc6b,	// (0x0007c9a8) bg_tb_trans_pane_cp02

0xb284,	// (0x0007afc1) heading_imed_pane

0x72d4,	// (0x00077011) listscroll_imed_pane

0x07c7,	// (0x00070504) heading_imed_pane_g1

0x07cf,	// (0x0007050c) heading_imed_pane_t1

0x07dd,	// (0x0007051a) grid_imed_colour_35_pane_ParamLimits

0x07dd,	// (0x0007051a) grid_imed_colour_35_pane

0x72e0,	// (0x0007701d) grid_imed_effect_pane

0x07f4,	// (0x00070531) list_imed_aspect_pane

0x72f6,	// (0x00077033) scroll_pane_cp027_ParamLimits

0x72f6,	// (0x00077033) scroll_pane_cp027

0x7307,	// (0x00077044) cell_imed_effect_pane_ParamLimits

0x7307,	// (0x00077044) cell_imed_effect_pane

0x07fc,	// (0x00070539) cell_imed_colour_pane_ParamLimits

0x07fc,	// (0x00070539) cell_imed_colour_pane

0x083e,	// (0x0007057b) cell_imed_colour_pane_g1_ParamLimits

0x083e,	// (0x0007057b) cell_imed_colour_pane_g1

0x084f,	// (0x0007058c) hgihlgiht_grid_pane_cp016_ParamLimits

0x084f,	// (0x0007058c) hgihlgiht_grid_pane_cp016

0x732e,	// (0x0007706b) cell_imed_effect_pane_g1

0x7336,	// (0x00077073) grid_highlight_pane_cp017

0x0860,	// (0x0007059d) list_imed_single_pane_ParamLimits

0x0860,	// (0x0007059d) list_imed_single_pane

0x20b1,	// (0x00071dee) list_highlight_pane_cp07

0x733f,	// (0x0007707c) list_imed_aspect_pane_comp1_t1

0xcc6b,	// (0x0007c9a8) bg_tb_trans_pane_cp05

0x7361,	// (0x0007709e) popup_imed_adjust2_window_g1

0x7388,	// (0x000770c5) popup_imed_adjust2_window_t1

0x73a0,	// (0x000770dd) slider_imed_adjust_pane

0x73b4,	// (0x000770f1) slider_imed_adjust_pane_g1

0x73c4,	// (0x00077101) slider_imed_adjust_pane_g2

0x73d4,	// (0x00077111) slider_imed_adjust_pane_g3

0x73e5,	// (0x00077122) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0007f551) slider_imed_adjust_pane_g

0x73f6,	// (0x00077133) aid_size_cell_clipart2

0x7402,	// (0x0007713f) grid_imed_clipart_pane

0x740c,	// (0x00077149) scroll_pane_cp031

0x7414,	// (0x00077151) cell_imed_clipart_pane_ParamLimits

0x7414,	// (0x00077151) cell_imed_clipart_pane

0x7436,	// (0x00077173) cell_imed_clipart_pane_g1

0x20b1,	// (0x00071dee) grid_highlight_pane_cp014

0x704d,	// (0x00076d8a) main_clock2_pane_g1_ParamLimits

0x704d,	// (0x00076d8a) main_clock2_pane_g1

0x7175,	// (0x00076eb2) aid_call2_pane_cp10

0x7187,	// (0x00076ec4) aid_call_pane_cp10

0xb752,	// (0x0007b48f) popup_clock_analogue_window_cp10_g1

0xb752,	// (0x0007b48f) popup_clock_analogue_window_cp10_g2

0x7199,	// (0x00076ed6) popup_clock_analogue_window_cp10_g3

0x7199,	// (0x00076ed6) popup_clock_analogue_window_cp10_g4

0xb752,	// (0x0007b48f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0007f53f) popup_clock_analogue_window_cp10_g

0x71ab,	// (0x00076ee8) popup_clock_analogue_window_cp10_t1

0x71dc,	// (0x00076f19) clock_digital_number_pane_cp10_ParamLimits

0x71dc,	// (0x00076f19) clock_digital_number_pane_cp10

0x71f4,	// (0x00076f31) clock_digital_number_pane_cp11_ParamLimits

0x71f4,	// (0x00076f31) clock_digital_number_pane_cp11

0x720c,	// (0x00076f49) clock_digital_number_pane_cp12_ParamLimits

0x720c,	// (0x00076f49) clock_digital_number_pane_cp12

0x7224,	// (0x00076f61) clock_digital_number_pane_cp13_ParamLimits

0x7224,	// (0x00076f61) clock_digital_number_pane_cp13

0x723c,	// (0x00076f79) clock_digital_separator_pane_cp10_ParamLimits

0x723c,	// (0x00076f79) clock_digital_separator_pane_cp10

0x7254,	// (0x00076f91) popup_clock_digital_window_cp02_t1_ParamLimits

0x7254,	// (0x00076f91) popup_clock_digital_window_cp02_t1

0x2a39,	// (0x00072776) clock_digital_number_pane_cp10_g1

0x2a39,	// (0x00072776) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0007f55a) clock_digital_number_pane_cp10_g

0x2a39,	// (0x00072776) clock_digital_separator_pane_cp10_g1

0x2a39,	// (0x00072776) clock_digital_separator_pane_g2_cp10

0xb7ed,	// (0x0007b52a) navi_pane_vded_g4

0xb7f6,	// (0x0007b533) navi_pane_vded_g5

0xb7ff,	// (0x0007b53c) navi_pane_vded_t1

0x20b1,	// (0x00071dee) main_vded_pane

0x743f,	// (0x0007717c) main_vded_pane_g1

0x7449,	// (0x00077186) main_vded_pane_g2

0x7453,	// (0x00077190) main_vded_pane_g3

0x0002,

0xf822,	// (0x0007f55f) main_vded_pane_g

0x745d,	// (0x0007719a) main_vded_pane_t1

0x746b,	// (0x000771a8) main_vded_pane_t2

0x0001,

0xf829,	// (0x0007f566) main_vded_pane_t

0x7479,	// (0x000771b6) vded_slider_pane

0x7481,	// (0x000771be) vded_video_pane

0x7489,	// (0x000771c6) vded_video_pane_g1

0x7493,	// (0x000771d0) vded_video_pane_g2

0x0395,	// (0x000700d2) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0007f56b) vded_video_pane_g

0x749c,	// (0x000771d9) vded_slider_pane_g1

0xeb23,	// (0x0007e860) vded_slider_pane_g2

0x74a5,	// (0x000771e2) vded_slider_pane_g3

0x74ae,	// (0x000771eb) vded_slider_pane_g4

0x74b7,	// (0x000771f4) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0007f572) vded_slider_pane_g

0x6de8,	// (0x00076b25) mup3_rocker_pane_ParamLimits

0x6de8,	// (0x00076b25) mup3_rocker_pane

0x74c0,	// (0x000771fd) mup3_control_keys_pane_g1

0x74c8,	// (0x00077205) mup3_control_keys_pane_g2

0x74d0,	// (0x0007720d) mup3_control_keys_pane_g3

0x74d8,	// (0x00077215) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0007f57d) mup3_control_keys_pane_g

0x22ff,	// (0x0007203c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x22ff,	// (0x0007203c) popup_toolbar2_fixed_window_cp01

0x6e1c,	// (0x00076b59) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6e1c,	// (0x00076b59) popup_toolbar2_fixed_window_cp02

0xbff3,	// (0x0007bd30) popup_call2_audio_second_window_t4_ParamLimits

0xbff3,	// (0x0007bd30) popup_call2_audio_second_window_t4

0xc521,	// (0x0007c25e) popup_call2_audio_first_window_t6_ParamLimits

0xc521,	// (0x0007c25e) popup_call2_audio_first_window_t6

0xc7b7,	// (0x0007c4f4) popup_call2_audio_out_window_t6_ParamLimits

0xc7b7,	// (0x0007c4f4) popup_call2_audio_out_window_t6

0x20b1,	// (0x00071dee) main_vitu_pane

0x74e8,	// (0x00077225) aid_size_cell_itu_ParamLimits

0x74e8,	// (0x00077225) aid_size_cell_itu

0xaf36,	// (0x0007ac73) bg_popup_window_pane_cp08_ParamLimits

0xaf36,	// (0x0007ac73) bg_popup_window_pane_cp08

0x74fe,	// (0x0007723b) field_vitu_entry_pane_ParamLimits

0x74fe,	// (0x0007723b) field_vitu_entry_pane

0x7515,	// (0x00077252) grid_vitu_function_pane_ParamLimits

0x7515,	// (0x00077252) grid_vitu_function_pane

0x7530,	// (0x0007726d) grid_vitu_itu_pane_ParamLimits

0x7530,	// (0x0007726d) grid_vitu_itu_pane

0x754e,	// (0x0007728b) cell_vitu_itu_pane_ParamLimits

0x754e,	// (0x0007728b) cell_vitu_itu_pane

0x7570,	// (0x000772ad) cell_vitu_function_pane_ParamLimits

0x7570,	// (0x000772ad) cell_vitu_function_pane

0xaf36,	// (0x0007ac73) bg_popup_sub_pane_cp08_ParamLimits

0xaf36,	// (0x0007ac73) bg_popup_sub_pane_cp08

0x75a1,	// (0x000772de) field_vitu_entry_pane_t1_ParamLimits

0x75a1,	// (0x000772de) field_vitu_entry_pane_t1

0x75bf,	// (0x000772fc) field_vitu_entry_pane_t2_ParamLimits

0x75bf,	// (0x000772fc) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0007f58b) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0007f58b) field_vitu_entry_pane_t

0x75dc,	// (0x00077319) bg_button_pane_cp05_ParamLimits

0x75dc,	// (0x00077319) bg_button_pane_cp05

0x75ea,	// (0x00077327) cell_vitu_itu_pane_g1

0x7602,	// (0x0007733f) cell_vitu_itu_pane_t1_ParamLimits

0x7602,	// (0x0007733f) cell_vitu_itu_pane_t1

0x7614,	// (0x00077351) cell_vitu_itu_pane_t2_ParamLimits

0x7614,	// (0x00077351) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0007f590) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0007f590) cell_vitu_itu_pane_t

0x7649,	// (0x00077386) bg_button_pane_cp07

0x7653,	// (0x00077390) cell_vitu_function_pane_g1

0xaf44,	// (0x0007ac81) main_calc_pane_g1

0x20f3,	// (0x00071e30) aid_visual_content_pane

0x20b1,	// (0x00071dee) main_vradio_pane

0x765c,	// (0x00077399) main_vradio_pane_g1_ParamLimits

0x765c,	// (0x00077399) main_vradio_pane_g1

0x7675,	// (0x000773b2) main_vradio_pane_g2_ParamLimits

0x7675,	// (0x000773b2) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0007f597) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0007f597) main_vradio_pane_g

0x7682,	// (0x000773bf) main_vradio_pane_t1_ParamLimits

0x7682,	// (0x000773bf) main_vradio_pane_t1

0x7697,	// (0x000773d4) main_vradio_pane_t2_ParamLimits

0x7697,	// (0x000773d4) main_vradio_pane_t2

0x76ac,	// (0x000773e9) main_vradio_pane_t3_ParamLimits

0x76ac,	// (0x000773e9) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0007f59c) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0007f59c) main_vradio_pane_t

0x76c0,	// (0x000773fd) vradio_rocker_control_pane_ParamLimits

0x76c0,	// (0x000773fd) vradio_rocker_control_pane

0x76d2,	// (0x0007740f) vradio_station_info_pane_ParamLimits

0x76d2,	// (0x0007740f) vradio_station_info_pane

0x76e4,	// (0x00077421) vradio_frequency_info_pane_ParamLimits

0x76e4,	// (0x00077421) vradio_frequency_info_pane

0x0395,	// (0x000700d2) vradio_station_info_pane_g1

0x76f3,	// (0x00077430) vradio_station_info_pane_t1_ParamLimits

0x76f3,	// (0x00077430) vradio_station_info_pane_t1

0x7715,	// (0x00077452) vradio_station_info_pane_t2_ParamLimits

0x7715,	// (0x00077452) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0007f5a3) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0007f5a3) vradio_station_info_pane_t

0x7727,	// (0x00077464) vradio_tuning_pane

0x772f,	// (0x0007746c) vradio_rocker_control_pane_g1

0x7737,	// (0x00077474) vradio_rocker_control_pane_g2

0x773f,	// (0x0007747c) vradio_rocker_control_pane_g3

0x7747,	// (0x00077484) vradio_rocker_control_pane_g4

0x774f,	// (0x0007748c) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0007f5a8) vradio_rocker_control_pane_g

0x7757,	// (0x00077494) vradio_frequency_info_pane_g1

0x7761,	// (0x0007749e) vradio_frequency_info_pane_t1_ParamLimits

0x7761,	// (0x0007749e) vradio_frequency_info_pane_t1

0x7775,	// (0x000774b2) vradio_tuning_pane_g1

0x7780,	// (0x000774bd) vradio_tuning_pane_t1

0x2138,	// (0x00071e75) area_side_right_pane_ParamLimits

0x2138,	// (0x00071e75) area_side_right_pane

0xcc32,	// (0x0007c96f) status_small_pane_g1

0xcc3a,	// (0x0007c977) status_small_pane_g2

0xcc43,	// (0x0007c980) status_small_pane_g3

0xcc4c,	// (0x0007c989) status_small_pane_g4

0x0003,

0xf62b,	// (0x0007f368) status_small_pane_g

0xcc55,	// (0x0007c992) status_small_pane_t1

0x20b1,	// (0x00071dee) main_video3_pane

0x778f,	// (0x000774cc) cams_zoom_vslider_pane

0x7797,	// (0x000774d4) image3_wide_pane_ParamLimits

0x7797,	// (0x000774d4) image3_wide_pane

0x77b1,	// (0x000774ee) image3_wide_small_pane

0x77bd,	// (0x000774fa) main_video3_pane_g1_ParamLimits

0x77bd,	// (0x000774fa) main_video3_pane_g1

0x77d9,	// (0x00077516) main_video3_pane_g2_ParamLimits

0x77d9,	// (0x00077516) main_video3_pane_g2

0x0001,

0xf876,	// (0x0007f5b3) main_video3_pane_g_ParamLimits

0xf876,	// (0x0007f5b3) main_video3_pane_g

0x77f5,	// (0x00077532) main_video3_pane_t1_ParamLimits

0x77f5,	// (0x00077532) main_video3_pane_t1

0x7820,	// (0x0007755d) main_video3_pane_t2_ParamLimits

0x7820,	// (0x0007755d) main_video3_pane_t2

0x784b,	// (0x00077588) main_video3_pane_t3_ParamLimits

0x784b,	// (0x00077588) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0007f5b8) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0007f5b8) main_video3_pane_t

0x7878,	// (0x000775b5) cams_zoom_vslider_pane_g1

0x7881,	// (0x000775be) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0007f5bf) cams_zoom_vslider_pane_g

0x7889,	// (0x000775c6) small_slider_vertical_pane

0x0395,	// (0x000700d2) small_slider_vertical_pane_g1

0x0395,	// (0x000700d2) small_slider_vertical_pane_g2

0x7891,	// (0x000775ce) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0007f5c4) small_slider_vertical_pane_g

0x20b1,	// (0x00071dee) main_hwr_training_pane

0x789a,	// (0x000775d7) hwr_training_instruct_pane_ParamLimits

0x789a,	// (0x000775d7) hwr_training_instruct_pane

0x78bc,	// (0x000775f9) hwr_training_navi_pane_ParamLimits

0x78bc,	// (0x000775f9) hwr_training_navi_pane

0x78db,	// (0x00077618) hwr_training_write_pane_ParamLimits

0x78db,	// (0x00077618) hwr_training_write_pane

0x20b1,	// (0x00071dee) bg_frame_shadow_pane

0x792b,	// (0x00077668) hwr_training_write_pane_g1

0x7933,	// (0x00077670) hwr_training_write_pane_g2

0x793b,	// (0x00077678) hwr_training_write_pane_g3

0x7943,	// (0x00077680) hwr_training_write_pane_g4

0x794b,	// (0x00077688) hwr_training_write_pane_g5

0x7953,	// (0x00077690) hwr_training_write_pane_g6

0x795b,	// (0x00077698) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0007f5cb) hwr_training_write_pane_g

0xecde,	// (0x0007ea1b) hwr_training_navi_pane_g1_ParamLimits

0xecde,	// (0x0007ea1b) hwr_training_navi_pane_g1

0xecf0,	// (0x0007ea2d) hwr_training_navi_pane_g2_ParamLimits

0xecf0,	// (0x0007ea2d) hwr_training_navi_pane_g2

0xed02,	// (0x0007ea3f) hwr_training_navi_pane_g3_ParamLimits

0xed02,	// (0x0007ea3f) hwr_training_navi_pane_g3

0xed12,	// (0x0007ea4f) hwr_training_navi_pane_g4_ParamLimits

0xed12,	// (0x0007ea4f) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0007f5da) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0007f5da) hwr_training_navi_pane_g

0xed1f,	// (0x0007ea5c) hwr_training_navi_pane_t1

0x7970,	// (0x000776ad) list_single_hwr_training_instruct_pane_ParamLimits

0x7970,	// (0x000776ad) list_single_hwr_training_instruct_pane

0x7985,	// (0x000776c2) list_single_hwr_training_instruct_pane_t1

0x02d5,	// (0x00070012) bg_frame_shadow_pane_g1

0x7994,	// (0x000776d1) bg_frame_shadow_pane_g2

0x799c,	// (0x000776d9) bg_frame_shadow_pane_g3

0x79a4,	// (0x000776e1) bg_frame_shadow_pane_g4

0x79ac,	// (0x000776e9) bg_frame_shadow_pane_g5

0x79b4,	// (0x000776f1) bg_frame_shadow_pane_g6

0x79bc,	// (0x000776f9) bg_frame_shadow_pane_g7

0x2fe8,	// (0x00072d25) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0007f5e5) bg_frame_shadow_pane_g

0x20b1,	// (0x00071dee) main_video_tele_dialer_pane

0x79c4,	// (0x00077701) aid_size_cell_video_keypad_ParamLimits

0x79c4,	// (0x00077701) aid_size_cell_video_keypad

0x79de,	// (0x0007771b) grid_video_dialer_keypad_pane_ParamLimits

0x79de,	// (0x0007771b) grid_video_dialer_keypad_pane

0x7a2a,	// (0x00077767) video_down_pane_cp_ParamLimits

0x7a2a,	// (0x00077767) video_down_pane_cp

0x7a5e,	// (0x0007779b) cell_video_dialer_keypad_pane_ParamLimits

0x7a5e,	// (0x0007779b) cell_video_dialer_keypad_pane

0x7a80,	// (0x000777bd) bg_button_pane_cp08_ParamLimits

0x7a80,	// (0x000777bd) bg_button_pane_cp08

0x7a8c,	// (0x000777c9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7a8c,	// (0x000777c9) cell_video_dialer_keypad_pane_g1

0x6dd2,	// (0x00076b0f) mup3_rocker2_pane_ParamLimits

0x6dd2,	// (0x00076b0f) mup3_rocker2_pane

0x0395,	// (0x000700d2) mup3_rocker2_pane_g1

0x5936,	// (0x00075673) main_dialer2_pane

0x20b1,	// (0x00071dee) main_mp4_pane

0xed35,	// (0x0007ea72) main_mp4_pane_g1_ParamLimits

0xed35,	// (0x0007ea72) main_mp4_pane_g1

0xed35,	// (0x0007ea72) main_mp4_pane_g2_ParamLimits

0xed35,	// (0x0007ea72) main_mp4_pane_g2

0x7ac6,	// (0x00077803) main_mp4_pane_g3_ParamLimits

0x7ac6,	// (0x00077803) main_mp4_pane_g3

0xed43,	// (0x0007ea80) main_mp4_pane_g4_ParamLimits

0xed43,	// (0x0007ea80) main_mp4_pane_g4

0xed6b,	// (0x0007eaa8) main_mp4_pane_g5_ParamLimits

0xed6b,	// (0x0007eaa8) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0007f605) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0007f605) main_mp4_pane_g

0xedbb,	// (0x0007eaf8) main_mp4_pane_t1_ParamLimits

0xedbb,	// (0x0007eaf8) main_mp4_pane_t1

0xee17,	// (0x0007eb54) main_mp4_pane_t2_ParamLimits

0xee17,	// (0x0007eb54) main_mp4_pane_t2

0x7b02,	// (0x0007783f) main_mp4_pane_t3_ParamLimits

0x7b02,	// (0x0007783f) main_mp4_pane_t3

0xee69,	// (0x0007eba6) main_mp4_pane_t4_ParamLimits

0xee69,	// (0x0007eba6) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0007f612) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0007f612) main_mp4_pane_t

0xeead,	// (0x0007ebea) mp4_progress_pane_ParamLimits

0xeead,	// (0x0007ebea) mp4_progress_pane

0xeef7,	// (0x0007ec34) mp4_rocker_pane_ParamLimits

0xeef7,	// (0x0007ec34) mp4_rocker_pane

0x7b2a,	// (0x00077867) mp4_progress_pane_t1

0x7b43,	// (0x00077880) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0007f61b) mp4_progress_pane_t

0x7b5c,	// (0x00077899) mup_progress_pane_cp04

0x0395,	// (0x000700d2) mp4_rocker_pane_g1

0x7b68,	// (0x000778a5) aid_cell_size_keypad2_ParamLimits

0x7b68,	// (0x000778a5) aid_cell_size_keypad2

0x7b7e,	// (0x000778bb) dialer2_ne_pane_ParamLimits

0x7b7e,	// (0x000778bb) dialer2_ne_pane

0x7b98,	// (0x000778d5) grid_dialer2_keypad_pane_ParamLimits

0x7b98,	// (0x000778d5) grid_dialer2_keypad_pane

0xebf9,	// (0x0007e936) bg_popup_call_pane_cp07_ParamLimits

0xebf9,	// (0x0007e936) bg_popup_call_pane_cp07

0x7bb4,	// (0x000778f1) dialer2_ne_pane_t1_ParamLimits

0x7bb4,	// (0x000778f1) dialer2_ne_pane_t1

0x7c01,	// (0x0007793e) cell_dialer2_keypad_pane_ParamLimits

0x7c01,	// (0x0007793e) cell_dialer2_keypad_pane

0x7c23,	// (0x00077960) bg_button_pane_pane_cp04_ParamLimits

0x7c23,	// (0x00077960) bg_button_pane_pane_cp04

0x7c2f,	// (0x0007796c) cell_dialer2_keypad_pane_g1_ParamLimits

0x7c2f,	// (0x0007796c) cell_dialer2_keypad_pane_g1

0x3902,	// (0x0007363f) aid_placing_vt_set_content_ParamLimits

0x3902,	// (0x0007363f) aid_placing_vt_set_content

0x3922,	// (0x0007365f) aid_placing_vt_set_title_ParamLimits

0x3922,	// (0x0007365f) aid_placing_vt_set_title

0x20b1,	// (0x00071dee) main_image3_pane

0x7cf5,	// (0x00077a32) area_side_right_pane_cp01_ParamLimits

0x7cf5,	// (0x00077a32) area_side_right_pane_cp01

0xed35,	// (0x0007ea72) main_image3_pane_g1_ParamLimits

0xed35,	// (0x0007ea72) main_image3_pane_g1

0x7d0c,	// (0x00077a49) main_image3_pane_g2_ParamLimits

0x7d0c,	// (0x00077a49) main_image3_pane_g2

0x7d34,	// (0x00077a71) main_image3_pane_g3_ParamLimits

0x7d34,	// (0x00077a71) main_image3_pane_g3

0x7d5e,	// (0x00077a9b) main_image3_pane_g4_ParamLimits

0x7d5e,	// (0x00077a9b) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0007f62a) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0007f62a) main_image3_pane_g

0x7d88,	// (0x00077ac5) main_image3_pane_t1_ParamLimits

0x7d88,	// (0x00077ac5) main_image3_pane_t1

0x7de0,	// (0x00077b1d) main_image3_pane_t2_ParamLimits

0x7de0,	// (0x00077b1d) main_image3_pane_t2

0x7e32,	// (0x00077b6f) main_image3_pane_t3_ParamLimits

0x7e32,	// (0x00077b6f) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0007f633) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0007f633) main_image3_pane_t

0xaf36,	// (0x0007ac73) grid_sctrl_middle_pane_cp01_ParamLimits

0xaf36,	// (0x0007ac73) grid_sctrl_middle_pane_cp01

0x7eba,	// (0x00077bf7) cell_sctrl_middle_pane_cp01_ParamLimits

0x7eba,	// (0x00077bf7) cell_sctrl_middle_pane_cp01

0x7ed7,	// (0x00077c14) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7ed7,	// (0x00077c14) cell_sctrl_middle_pane_cp01_g1

0x20b1,	// (0x00071dee) main_call4_pane

0x7eed,	// (0x00077c2a) aid_size_button_call4_ParamLimits

0x7eed,	// (0x00077c2a) aid_size_button_call4

0x7f1e,	// (0x00077c5b) call4_windows_pane_ParamLimits

0x7f1e,	// (0x00077c5b) call4_windows_pane

0x7f3e,	// (0x00077c7b) grid_call4_button_pane_ParamLimits

0x7f3e,	// (0x00077c7b) grid_call4_button_pane

0x7f6b,	// (0x00077ca8) call4_windows_conf_pane

0x7f82,	// (0x00077cbf) popup_call4_audio_first_window_ParamLimits

0x7f82,	// (0x00077cbf) popup_call4_audio_first_window

0x7fce,	// (0x00077d0b) popup_call4_audio_second_window_ParamLimits

0x7fce,	// (0x00077d0b) popup_call4_audio_second_window

0x7fe2,	// (0x00077d1f) popup_call4_audio_wait_window_ParamLimits

0x7fe2,	// (0x00077d1f) popup_call4_audio_wait_window

0x7ff0,	// (0x00077d2d) cell_call4_button_pane_ParamLimits

0x7ff0,	// (0x00077d2d) cell_call4_button_pane

0x8019,	// (0x00077d56) bg_button_pane_cp09_ParamLimits

0x8019,	// (0x00077d56) bg_button_pane_cp09

0x8025,	// (0x00077d62) cell_call4_button_pane_g1_ParamLimits

0x8025,	// (0x00077d62) cell_call4_button_pane_g1

0x804b,	// (0x00077d88) cell_call4_button_pane_t1_ParamLimits

0x804b,	// (0x00077d88) cell_call4_button_pane_t1

0x80ab,	// (0x00077de8) popup_call4_audio_conf_window_ParamLimits

0x80ab,	// (0x00077de8) popup_call4_audio_conf_window

0x6e32,	// (0x00076b6f) mup3_progress_pane_t1_ParamLimits

0x6e49,	// (0x00076b86) mup3_progress_pane_t2_ParamLimits

0x0673,	// (0x000703b0) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0007f50c) mup3_progress_pane_t_ParamLimits

0x068a,	// (0x000703c7) mup_progress_pane_cp03_ParamLimits

0x74e0,	// (0x0007721d) mup3_control_keys_pane_g4_copy1

0xeedb,	// (0x0007ec18) mp4_rocker2_pane_ParamLimits

0xeedb,	// (0x0007ec18) mp4_rocker2_pane

0x80bf,	// (0x00077dfc) mp4_rocker2_pane_g1

0x80c7,	// (0x00077e04) mp4_rocker2_pane_g2

0xef49,	// (0x0007ec86) mp4_rocker2_pane_g3

0xef51,	// (0x0007ec8e) mp4_rocker2_pane_g4

0xef59,	// (0x0007ec96) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0007f63c) mp4_rocker2_pane_g

0x20b1,	// (0x00071dee) main_camera4_pane

0x20b1,	// (0x00071dee) main_video4_pane

0x79f8,	// (0x00077735) main_video_tele_dialer_pane_t1_ParamLimits

0x79f8,	// (0x00077735) main_video_tele_dialer_pane_t1

0x7a11,	// (0x0007774e) main_video_tele_dialer_pane_t2_ParamLimits

0x7a11,	// (0x0007774e) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0007f5f6) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0007f5f6) main_video_tele_dialer_pane_t

0x80e7,	// (0x00077e24) cam4_autofocus_pane_ParamLimits

0x80e7,	// (0x00077e24) cam4_autofocus_pane

0x80fd,	// (0x00077e3a) cam4_image_uncrop_pane_ParamLimits

0x80fd,	// (0x00077e3a) cam4_image_uncrop_pane

0x8117,	// (0x00077e54) cam4_indicators_pane_ParamLimits

0x8117,	// (0x00077e54) cam4_indicators_pane

0x8142,	// (0x00077e7f) main_camera4_pane_g1_ParamLimits

0x8142,	// (0x00077e7f) main_camera4_pane_g1

0x8155,	// (0x00077e92) main_camera4_pane_g2_ParamLimits

0x8155,	// (0x00077e92) main_camera4_pane_g2

0x8168,	// (0x00077ea5) main_camera4_pane_g3_ParamLimits

0x8168,	// (0x00077ea5) main_camera4_pane_g3

0x817b,	// (0x00077eb8) main_camera4_pane_g4_ParamLimits

0x817b,	// (0x00077eb8) main_camera4_pane_g4

0x818e,	// (0x00077ecb) main_camera4_pane_g5_ParamLimits

0x818e,	// (0x00077ecb) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0007f647) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0007f647) main_camera4_pane_g

0x81b2,	// (0x00077eef) main_camera4_pane_t1_ParamLimits

0x81b2,	// (0x00077eef) main_camera4_pane_t1

0x05f8,	// (0x00070335) bg_tb_trans_pane_cp06

0xef79,	// (0x0007ecb6) cam4_indicators_pane_g1

0xef8a,	// (0x0007ecc7) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0007f662) cam4_indicators_pane_g

0xefa8,	// (0x0007ece5) cam4_indicators_pane_t1

0x8228,	// (0x00077f65) main_video4_pane_g1_ParamLimits

0x8228,	// (0x00077f65) main_video4_pane_g1

0x823b,	// (0x00077f78) main_video4_pane_g2_ParamLimits

0x823b,	// (0x00077f78) main_video4_pane_g2

0x824f,	// (0x00077f8c) main_video4_pane_g3_ParamLimits

0x824f,	// (0x00077f8c) main_video4_pane_g3

0x8263,	// (0x00077fa0) main_video4_pane_g4_ParamLimits

0x8263,	// (0x00077fa0) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0007f669) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0007f669) main_video4_pane_g

0x828b,	// (0x00077fc8) vid4_indicators_pane_ParamLimits

0x828b,	// (0x00077fc8) vid4_indicators_pane

0x82bb,	// (0x00077ff8) video4_image_uncrop_cif_pane_ParamLimits

0x82bb,	// (0x00077ff8) video4_image_uncrop_cif_pane

0x82d5,	// (0x00078012) video4_image_uncrop_nhd_pane_ParamLimits

0x82d5,	// (0x00078012) video4_image_uncrop_nhd_pane

0x80fd,	// (0x00077e3a) video4_image_uncrop_vga_pane_ParamLimits

0x80fd,	// (0x00077e3a) video4_image_uncrop_vga_pane

0xcdeb,	// (0x0007cb28) bg_tb_trans_pane_cp07

0x82e9,	// (0x00078026) vid4_indicators_pane_g1

0x82f6,	// (0x00078033) vid4_indicators_pane_g2

0x8303,	// (0x00078040) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0007f674) vid4_indicators_pane_g

0x8328,	// (0x00078065) vid4_indicators_pane_t1

0x833a,	// (0x00078077) cam4_autofocus_pane_g1

0x8342,	// (0x0007807f) cam4_autofocus_pane_g2

0x834a,	// (0x00078087) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0007f67f) cam4_autofocus_pane_g

0x8352,	// (0x0007808f) cam4_autofocus_pane_g3_copy1

0x7a42,	// (0x0007777f) video_down_pane_cp_t1

0x7a50,	// (0x0007778d) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0007f5fb) video_down_pane_cp_t

0xaf36,	// (0x0007ac73) popup_vitu2_window_ParamLimits

0xaf36,	// (0x0007ac73) popup_vitu2_window

0x835a,	// (0x00078097) aid_size_cell2_itu2_ParamLimits

0x835a,	// (0x00078097) aid_size_cell2_itu2

0x8380,	// (0x000780bd) aid_size_cell_itu2_ParamLimits

0x8380,	// (0x000780bd) aid_size_cell_itu2

0x83dc,	// (0x00078119) bg_popup_window_pane_cp09_ParamLimits

0x83dc,	// (0x00078119) bg_popup_window_pane_cp09

0x83ea,	// (0x00078127) field_vitu2_entry_pane_ParamLimits

0x83ea,	// (0x00078127) field_vitu2_entry_pane

0x8410,	// (0x0007814d) grid_vitu2_function_pane_ParamLimits

0x8410,	// (0x0007814d) grid_vitu2_function_pane

0x8461,	// (0x0007819e) grid_vitu2_itu_pane_ParamLimits

0x8461,	// (0x0007819e) grid_vitu2_itu_pane

0x84f4,	// (0x00078231) cell_vitu2_itu_pane_ParamLimits

0x84f4,	// (0x00078231) cell_vitu2_itu_pane

0x8518,	// (0x00078255) cell_vitu2_function_pane_ParamLimits

0x8518,	// (0x00078255) cell_vitu2_function_pane

0x8557,	// (0x00078294) bg_popup_call_pane_cp08_ParamLimits

0x8557,	// (0x00078294) bg_popup_call_pane_cp08

0x8570,	// (0x000782ad) field_vitu2_entry_pane_g1

0x857c,	// (0x000782b9) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0007f686) field_vitu2_entry_pane_g

0xcdf9,	// (0x0007cb36) field_vitu2_entry_pane_t1_ParamLimits

0xcdf9,	// (0x0007cb36) field_vitu2_entry_pane_t1

0xce28,	// (0x0007cb65) field_vitu2_entry_pane_t2_ParamLimits

0xce28,	// (0x0007cb65) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0007f68d) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0007f68d) field_vitu2_entry_pane_t

0x859e,	// (0x000782db) bg_button_pane_cp010_ParamLimits

0x859e,	// (0x000782db) bg_button_pane_cp010

0x85ac,	// (0x000782e9) cell_vitu2_itu_pane_g1

0x85ca,	// (0x00078307) cell_vitu2_itu_pane_t1_ParamLimits

0x85ca,	// (0x00078307) cell_vitu2_itu_pane_t1

0x1875,	// (0x000715b2) cell_vitu2_itu_pane_t2_ParamLimits

0x1875,	// (0x000715b2) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0007f697) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0007f697) cell_vitu2_itu_pane_t

0xaf36,	// (0x0007ac73) bg_button_pane_cp011

0x8630,	// (0x0007836d) cell_vitu2_function_pane_g1

0x20b1,	// (0x00071dee) main_myfav_hc_pane

0x7e82,	// (0x00077bbf) popup_image3_note_pane_ParamLimits

0x7e82,	// (0x00077bbf) popup_image3_note_pane

0x7e9e,	// (0x00077bdb) popup_image3_tool_bar_pane_ParamLimits

0x7e9e,	// (0x00077bdb) popup_image3_tool_bar_pane

0x18f9,	// (0x00071636) cell_vitu2_itu_pane_t3_ParamLimits

0x18f9,	// (0x00071636) cell_vitu2_itu_pane_t3

0x20b1,	// (0x00071dee) bg_popup_trans_pane

0x8644,	// (0x00078381) grid_image3_tool_bar_pane

0x864e,	// (0x0007838b) bg_popup_trans_pane_g1

0x3e45,	// (0x00073b82) bg_popup_trans_pane_g2

0x8656,	// (0x00078393) bg_popup_trans_pane_g3

0x865e,	// (0x0007839b) bg_popup_trans_pane_g4

0x8666,	// (0x000783a3) bg_popup_trans_pane_g5

0x866e,	// (0x000783ab) bg_popup_trans_pane_g6

0x8676,	// (0x000783b3) bg_popup_trans_pane_g7

0x867e,	// (0x000783bb) bg_popup_trans_pane_g8

0x3e25,	// (0x00073b62) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0007f69e) bg_popup_trans_pane_g

0x8686,	// (0x000783c3) cell_image3_tool_bar_pane_ParamLimits

0x8686,	// (0x000783c3) cell_image3_tool_bar_pane

0x0395,	// (0x000700d2) cell_image3_tool_bar_pane_g1

0x20b1,	// (0x00071dee) bg_popup_trans_pane_cp1

0x869a,	// (0x000783d7) popup_image3_note_pane_t1

0x86a8,	// (0x000783e5) popup_image3_note_pane_t2

0x86b6,	// (0x000783f3) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0007f6b1) popup_image3_note_pane_t

0x86c4,	// (0x00078401) popup_image3_note_pane_t3_copy1

0x86d2,	// (0x0007840f) bg_myfav_hc_instruction_pane_ParamLimits

0x86d2,	// (0x0007840f) bg_myfav_hc_instruction_pane

0x86e6,	// (0x00078423) cell_myfav_contact_pane_ParamLimits

0x86e6,	// (0x00078423) cell_myfav_contact_pane

0x8704,	// (0x00078441) cell_myfav_contact_pane_cp1_ParamLimits

0x8704,	// (0x00078441) cell_myfav_contact_pane_cp1

0x871c,	// (0x00078459) cell_myfav_contact_pane_cp2_ParamLimits

0x871c,	// (0x00078459) cell_myfav_contact_pane_cp2

0x8734,	// (0x00078471) cell_myfav_contact_pane_cp3_ParamLimits

0x8734,	// (0x00078471) cell_myfav_contact_pane_cp3

0x874b,	// (0x00078488) cell_myfav_contact_pane_cp4_ParamLimits

0x874b,	// (0x00078488) cell_myfav_contact_pane_cp4

0x8763,	// (0x000784a0) cell_myfav_contact_pane_cp5_ParamLimits

0x8763,	// (0x000784a0) cell_myfav_contact_pane_cp5

0x8777,	// (0x000784b4) cell_myfav_contact_pane_cp6_ParamLimits

0x8777,	// (0x000784b4) cell_myfav_contact_pane_cp6

0x878d,	// (0x000784ca) cell_myfav_contact_pane_cp7_ParamLimits

0x878d,	// (0x000784ca) cell_myfav_contact_pane_cp7

0x87a7,	// (0x000784e4) listscroll_gen_pane_cp05

0x87b0,	// (0x000784ed) main_myfav_hc_pane_g1_ParamLimits

0x87b0,	// (0x000784ed) main_myfav_hc_pane_g1

0x87ca,	// (0x00078507) main_myfav_hc_pane_g2_ParamLimits

0x87ca,	// (0x00078507) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0007f6b8) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0007f6b8) main_myfav_hc_pane_g

0x87fc,	// (0x00078539) main_myfav_hc_pane_t1_ParamLimits

0x87fc,	// (0x00078539) main_myfav_hc_pane_t1

0x8813,	// (0x00078550) main_myfav_hc_pane_t2_ParamLimits

0x8813,	// (0x00078550) main_myfav_hc_pane_t2

0x8825,	// (0x00078562) main_myfav_hc_pane_t3_ParamLimits

0x8825,	// (0x00078562) main_myfav_hc_pane_t3

0x8837,	// (0x00078574) main_myfav_hc_pane_t4_ParamLimits

0x8837,	// (0x00078574) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0007f6bf) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0007f6bf) main_myfav_hc_pane_t

0x0395,	// (0x000700d2) bg_myfav_hc_instruction_pane_g1

0x885f,	// (0x0007859c) cell_myfav_contact_pane_g1_ParamLimits

0x885f,	// (0x0007859c) cell_myfav_contact_pane_g1

0x885f,	// (0x0007859c) cell_myfav_contact_pane_g2_ParamLimits

0x885f,	// (0x0007859c) cell_myfav_contact_pane_g2

0x886b,	// (0x000785a8) cell_myfav_contact_pane_g3_ParamLimits

0x886b,	// (0x000785a8) cell_myfav_contact_pane_g3

0x065d,	// (0x0007039a) cell_myfav_contact_pane_g4_ParamLimits

0x065d,	// (0x0007039a) cell_myfav_contact_pane_g4

0x8878,	// (0x000785b5) cell_myfav_contact_pane_g5_ParamLimits

0x8878,	// (0x000785b5) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0007f6ca) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0007f6ca) cell_myfav_contact_pane_g

0x87e4,	// (0x00078521) main_myfav_hc_pane_g3_ParamLimits

0x87e4,	// (0x00078521) main_myfav_hc_pane_g3

0x2256,	// (0x00071f93) popup_adpt_find_window

0x8884,	// (0x000785c1) afind_page_pane_ParamLimits

0x8884,	// (0x000785c1) afind_page_pane

0x8899,	// (0x000785d6) aid_size_cell_afind_ParamLimits

0x8899,	// (0x000785d6) aid_size_cell_afind

0x88b7,	// (0x000785f4) bg_popup_sub_pane_cp09_ParamLimits

0x88b7,	// (0x000785f4) bg_popup_sub_pane_cp09

0x88c4,	// (0x00078601) find_pane_cp01_ParamLimits

0x88c4,	// (0x00078601) find_pane_cp01

0x88d1,	// (0x0007860e) grid_afind_control_pane_ParamLimits

0x88d1,	// (0x0007860e) grid_afind_control_pane

0x88e5,	// (0x00078622) grid_afind_pane_ParamLimits

0x88e5,	// (0x00078622) grid_afind_pane

0x8907,	// (0x00078644) cell_afind_pane_ParamLimits

0x8907,	// (0x00078644) cell_afind_pane

0x0395,	// (0x000700d2) afind_page_pane_g1

0x8964,	// (0x000786a1) afind_page_pane_g2

0x896d,	// (0x000786aa) afind_page_pane_g3

0x0002,

0xf998,	// (0x0007f6d5) afind_page_pane_g

0x8976,	// (0x000786b3) afind_page_pane_t1

0x8996,	// (0x000786d3) cell_afind_grid_control_pane_ParamLimits

0x8996,	// (0x000786d3) cell_afind_grid_control_pane

0x7c23,	// (0x00077960) bg_button_pane_cp69_ParamLimits

0x7c23,	// (0x00077960) bg_button_pane_cp69

0x89a5,	// (0x000786e2) cell_afind_pane_g1_ParamLimits

0x89a5,	// (0x000786e2) cell_afind_pane_g1

0x89b2,	// (0x000786ef) cell_afind_pane_t1_ParamLimits

0x89b2,	// (0x000786ef) cell_afind_pane_t1

0x3895,	// (0x000735d2) bg_button_pane_cp72

0x89c4,	// (0x00078701) cell_afind_grid_control_pane_g1

0x53f6,	// (0x00075133) aid_image_placing_area_ParamLimits

0x53f6,	// (0x00075133) aid_image_placing_area

0x7589,	// (0x000772c6) field_vitu_entry_pane_g1_ParamLimits

0x7589,	// (0x000772c6) field_vitu_entry_pane_g1

0x7595,	// (0x000772d2) field_vitu_entry_pane_g2_ParamLimits

0x7595,	// (0x000772d2) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0007f586) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0007f586) field_vitu_entry_pane_g

0x75ea,	// (0x00077327) cell_vitu_itu_pane_g1_ParamLimits

0x762c,	// (0x00077369) cell_vitu_itu_pane_t3_ParamLimits

0x762c,	// (0x00077369) cell_vitu_itu_pane_t3

0x7b2a,	// (0x00077867) mp4_progress_pane_t1_ParamLimits

0x7b43,	// (0x00077880) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0007f61b) mp4_progress_pane_t_ParamLimits

0x7b5c,	// (0x00077899) mup_progress_pane_cp04_ParamLimits

0x884b,	// (0x00078588) main_myfav_hc_pane_t5_ParamLimits

0x884b,	// (0x00078588) main_myfav_hc_pane_t5

0xaf26,	// (0x0007ac63) aid_zoom_text_primary

0x2256,	// (0x00071f93) popup_adpt_find_window_ParamLimits

0xaf36,	// (0x0007ac73) main_cam_set_pane

0x812e,	// (0x00077e6b) cam4_zoom_pane_ParamLimits

0x812e,	// (0x00077e6b) cam4_zoom_pane

0x89cd,	// (0x0007870a) main_cam_set_pane_g1_ParamLimits

0x89cd,	// (0x0007870a) main_cam_set_pane_g1

0x89db,	// (0x00078718) main_cam_set_pane_g2_ParamLimits

0x89db,	// (0x00078718) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0007f6dc) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0007f6dc) main_cam_set_pane_g

0x89fc,	// (0x00078739) main_cam_set_pane_t1_ParamLimits

0x89fc,	// (0x00078739) main_cam_set_pane_t1

0x8a17,	// (0x00078754) main_cset_listscroll_pane_ParamLimits

0x8a17,	// (0x00078754) main_cset_listscroll_pane

0x8a37,	// (0x00078774) main_cset_slider_pane_ParamLimits

0x8a37,	// (0x00078774) main_cset_slider_pane

0x8a65,	// (0x000787a2) main_cset_list_pane_ParamLimits

0x8a65,	// (0x000787a2) main_cset_list_pane

0x8a75,	// (0x000787b2) scroll_pane_cp028

0x8a7e,	// (0x000787bb) aid_area_touch_slider

0x8a9a,	// (0x000787d7) cset_slider_pane

0x8ac4,	// (0x00078801) main_cset_slider_pane_g1

0x8ad9,	// (0x00078816) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0007f6e1) main_cset_slider_pane_g

0x8bc5,	// (0x00078902) main_cset_slider_pane_t1

0x8bf3,	// (0x00078930) main_cset_slider_pane_t2

0x8c0d,	// (0x0007894a) main_cset_slider_pane_t3

0x8c27,	// (0x00078964) main_cset_slider_pane_t4

0x8c41,	// (0x0007897e) main_cset_slider_pane_t5

0x8c5b,	// (0x00078998) main_cset_slider_pane_t6

0x8c70,	// (0x000789ad) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0007f706) main_cset_slider_pane_t

0x8de6,	// (0x00078b23) cset_list_set_pane_ParamLimits

0x8de6,	// (0x00078b23) cset_list_set_pane

0x8df8,	// (0x00078b35) aid_position_infowindow_above

0x8e00,	// (0x00078b3d) aid_position_infowindow_below

0x8e08,	// (0x00078b45) cset_list_set_pane_g1_ParamLimits

0x8e08,	// (0x00078b45) cset_list_set_pane_g1

0xce45,	// (0x0007cb82) cset_list_set_pane_g3_ParamLimits

0xce45,	// (0x0007cb82) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0007f725) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0007f725) cset_list_set_pane_g

0xce54,	// (0x0007cb91) cset_list_set_pane_t1_ParamLimits

0xce54,	// (0x0007cb91) cset_list_set_pane_t1

0xaf36,	// (0x0007ac73) list_highlight_pane_cp021_ParamLimits

0xaf36,	// (0x0007ac73) list_highlight_pane_cp021

0xb973,	// (0x0007b6b0) cset_slider_pane_g1

0xb985,	// (0x0007b6c2) cset_slider_pane_g2

0xb97c,	// (0x0007b6b9) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0007f72a) cset_slider_pane_g

0xefd4,	// (0x0007ed11) aid_area_touch_cam4_zoom

0xefdc,	// (0x0007ed19) cam4_zoom_cont_pane

0xefe4,	// (0x0007ed21) cam4_zoom_pane_g1

0xefec,	// (0x0007ed29) cam4_zoom_pane_g2

0x8e14,	// (0x00078b51) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0007f731) cam4_zoom_pane_g

0xce69,	// (0x0007cba6) cam4_zoom_cont_pane_g1

0xce72,	// (0x0007cbaf) cam4_zoom_cont_pane_g2

0xce7b,	// (0x0007cbb8) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0007f738) cam4_zoom_cont_pane_g

0x7f0b,	// (0x00077c48) call4_image_pane_ParamLimits

0x7f0b,	// (0x00077c48) call4_image_pane

0x7f6b,	// (0x00077ca8) call4_windows_conf_pane_ParamLimits

0x7fac,	// (0x00077ce9) popup_call4_audio_in_window_ParamLimits

0x7fac,	// (0x00077ce9) popup_call4_audio_in_window

0x20b1,	// (0x00071dee) bg_popup_call2_act_pane_cp02

0x80a3,	// (0x00077de0) call4_list_conf_pane

0x0395,	// (0x000700d2) call4_image_pane_g1

0x0395,	// (0x000700d2) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0007f44c) call4_image_pane_g

0x8e1c,	// (0x00078b59) list_single_graphic_popup_conf4_pane_ParamLimits

0x8e1c,	// (0x00078b59) list_single_graphic_popup_conf4_pane

0x20b1,	// (0x00071dee) list_highlight_pane_cp022

0x8e2f,	// (0x00078b6c) list_single_graphic_popup_conf4_pane_g1

0xb632,	// (0x0007b36f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0007f73f) list_single_graphic_popup_conf4_pane_g

0x8e37,	// (0x00078b74) list_single_graphic_popup_conf4_pane_t1

0x3a0e,	// (0x0007374b) popup_vtel_slider_window_ParamLimits

0x3a0e,	// (0x0007374b) popup_vtel_slider_window

0x7bef,	// (0x0007792c) dialer2_ne_pane_t2_ParamLimits

0x7bef,	// (0x0007792c) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0007f620) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0007f620) dialer2_ne_pane_t

0xebf9,	// (0x0007e936) bg_popup_sub_pane_cp010_ParamLimits

0xebf9,	// (0x0007e936) bg_popup_sub_pane_cp010

0x8e45,	// (0x00078b82) popup_vtel_slider_window_g1_ParamLimits

0x8e45,	// (0x00078b82) popup_vtel_slider_window_g1

0x8e58,	// (0x00078b95) popup_vtel_slider_window_g2_ParamLimits

0x8e58,	// (0x00078b95) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0007f744) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0007f744) popup_vtel_slider_window_g

0x8eae,	// (0x00078beb) vtel_slider_pane_ParamLimits

0x8eae,	// (0x00078beb) vtel_slider_pane

0x8ed0,	// (0x00078c0d) vtel_slider_pane_g1_ParamLimits

0x8ed0,	// (0x00078c0d) vtel_slider_pane_g1

0x8ee4,	// (0x00078c21) vtel_slider_pane_g2_ParamLimits

0x8ee4,	// (0x00078c21) vtel_slider_pane_g2

0x8efc,	// (0x00078c39) vtel_slider_pane_g3_ParamLimits

0x8efc,	// (0x00078c39) vtel_slider_pane_g3

0x8ed0,	// (0x00078c0d) vtel_slider_pane_g4_ParamLimits

0x8ed0,	// (0x00078c0d) vtel_slider_pane_g4

0x8f12,	// (0x00078c4f) vtel_slider_pane_g5_ParamLimits

0x8f12,	// (0x00078c4f) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0007f74d) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0007f74d) vtel_slider_pane_g

0x20b1,	// (0x00071dee) main_gallery2_pane

0x83ac,	// (0x000780e9) aid_size_row_itut2_dropdow_list_ParamLimits

0x83ac,	// (0x000780e9) aid_size_row_itut2_dropdow_list

0x8438,	// (0x00078175) grid_vitu2_function_top_pane_ParamLimits

0x8438,	// (0x00078175) grid_vitu2_function_top_pane

0x849d,	// (0x000781da) popup_vitu2_dropdown_list_window_ParamLimits

0x849d,	// (0x000781da) popup_vitu2_dropdown_list_window

0x84c6,	// (0x00078203) popup_vitu2_match_list_window

0x8f28,	// (0x00078c65) cell_vitu2_function_top_pane_ParamLimits

0x8f28,	// (0x00078c65) cell_vitu2_function_top_pane

0x8f46,	// (0x00078c83) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8f46,	// (0x00078c83) cell_vitu2_function_top_pane_cp01

0x8f64,	// (0x00078ca1) cell_vitu2_function_top_wide_pane_ParamLimits

0x8f64,	// (0x00078ca1) cell_vitu2_function_top_wide_pane

0xaf36,	// (0x0007ac73) bg_button_pane_cp012

0x8f82,	// (0x00078cbf) cell_vitu2_function_top_pane_g1

0xeff4,	// (0x0007ed31) bg_button_pane_cp013_ParamLimits

0xeff4,	// (0x0007ed31) bg_button_pane_cp013

0x8f96,	// (0x00078cd3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8f96,	// (0x00078cd3) cell_vitu2_function_top_wide_pane_g1

0xaf36,	// (0x0007ac73) bg_popup_sub_pane_cp20

0x8fae,	// (0x00078ceb) list_vitu2_match_list_pane

0x864e,	// (0x0007838b) bg_popup_sub_pane_cp20_g1

0x8656,	// (0x00078393) bg_popup_sub_pane_cp20_g2

0x3e45,	// (0x00073b82) bg_popup_sub_pane_cp20_g3

0x865e,	// (0x0007839b) bg_popup_sub_pane_cp20_g4

0x3e25,	// (0x00073b62) bg_popup_sub_pane_cp20_g5

0xce92,	// (0x0007cbcf) bg_popup_sub_pane_cp20_g6

0x866e,	// (0x000783ab) bg_popup_sub_pane_cp20_g7

0x8676,	// (0x000783b3) bg_popup_sub_pane_cp20_g8

0x867e,	// (0x000783bb) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0007f758) bg_popup_sub_pane_cp20_g

0xf010,	// (0x0007ed4d) list_vitu2_match_list_item_pane_ParamLimits

0xf010,	// (0x0007ed4d) list_vitu2_match_list_item_pane

0xf022,	// (0x0007ed5f) list_vitu2_match_list_item_pane_t1

0x20b1,	// (0x00071dee) bg_popup_sub_pane_cp21

0xb4e7,	// (0x0007b224) grid_vitu2_dropdown_list_pane

0x8fcc,	// (0x00078d09) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8fcc,	// (0x00078d09) cell_vitu2_dropdown_list_char_pane

0x8fed,	// (0x00078d2a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8fed,	// (0x00078d2a) cell_vitu2_dropdown_list_ctrl_pane

0xceb2,	// (0x0007cbef) cell_vitu2_dropdown_list_char_pane_g1

0xcebb,	// (0x0007cbf8) cell_vitu2_dropdown_list_char_pane_g2

0xcec4,	// (0x0007cc01) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0007f775) cell_vitu2_dropdown_list_char_pane_g

0x9019,	// (0x00078d56) cell_vitu2_dropdown_list_char_pane_t1

0x9027,	// (0x00078d64) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9027,	// (0x00078d64) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9034,	// (0x00078d71) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9034,	// (0x00078d71) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9041,	// (0x00078d7e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9041,	// (0x00078d7e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x904e,	// (0x00078d8b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x904e,	// (0x00078d8b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x05f8,	// (0x00070335) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x05f8,	// (0x00070335) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0007f77c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0007f77c) cell_vitu2_dropdown_list_ctrl_pane_g

0x906a,	// (0x00078da7) aid_size_cell_gallery2_ParamLimits

0x906a,	// (0x00078da7) aid_size_cell_gallery2

0x9080,	// (0x00078dbd) grid_gallery2_pane_ParamLimits

0x9080,	// (0x00078dbd) grid_gallery2_pane

0x9094,	// (0x00078dd1) scroll_pane_cp029_ParamLimits

0x9094,	// (0x00078dd1) scroll_pane_cp029

0x90a0,	// (0x00078ddd) cell_gallery2_pane_ParamLimits

0x90a0,	// (0x00078ddd) cell_gallery2_pane

0xcecd,	// (0x0007cc0a) cell_gallery2_pane_g2

0x90d6,	// (0x00078e13) cell_gallery2_pane_g3

0xced7,	// (0x0007cc14) cell_gallery2_pane_g4

0xcedf,	// (0x0007cc1c) cell_gallery2_pane_g5

0xb81d,	// (0x0007b55a) grid_highlight_pane_cp10

0x84c6,	// (0x00078203) popup_vitu2_match_list_window_ParamLimits

0x84dd,	// (0x0007821a) popup_vitu2_query_window_ParamLimits

0x84dd,	// (0x0007821a) popup_vitu2_query_window

0x20b1,	// (0x00071dee) bg_vitu2_candi_button_pane

0xceb2,	// (0x0007cbef) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcebb,	// (0x0007cbf8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcec4,	// (0x0007cc01) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1982,	// (0x000716bf) bg_button_pane_cp015

0x90de,	// (0x00078e1b) bg_button_pane_cp016

0x90e8,	// (0x00078e25) bg_button_pane_cp017

0xaf36,	// (0x0007ac73) bg_popup_sub_pane_cp22

0xcee7,	// (0x0007cc24) popup_vitu2_query_window_g1

0x1999,	// (0x000716d6) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0007f787) popup_vitu2_query_window_g

0x19a7,	// (0x000716e4) popup_vitu2_query_window_t1_ParamLimits

0x19a7,	// (0x000716e4) popup_vitu2_query_window_t1

0x19cf,	// (0x0007170c) popup_vitu2_query_window_t2_ParamLimits

0x19cf,	// (0x0007170c) popup_vitu2_query_window_t2

0x19e1,	// (0x0007171e) popup_vitu2_query_window_t3_ParamLimits

0x19e1,	// (0x0007171e) popup_vitu2_query_window_t3

0x9103,	// (0x00078e40) popup_vitu2_query_window_t4_ParamLimits

0x9103,	// (0x00078e40) popup_vitu2_query_window_t4

0x9117,	// (0x00078e54) popup_vitu2_query_window_t5_ParamLimits

0x9117,	// (0x00078e54) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0007f78c) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0007f78c) popup_vitu2_query_window_t

0x8a5d,	// (0x0007879a) main_cset_text_pane

0x8a7e,	// (0x000787bb) aid_area_touch_slider_ParamLimits

0x8a9a,	// (0x000787d7) cset_slider_pane_ParamLimits

0x8ac4,	// (0x00078801) main_cset_slider_pane_g1_ParamLimits

0x8ad9,	// (0x00078816) main_cset_slider_pane_g2_ParamLimits

0x8aee,	// (0x0007882b) main_cset_slider_pane_g3_ParamLimits

0x8aee,	// (0x0007882b) main_cset_slider_pane_g3

0x8afa,	// (0x00078837) main_cset_slider_pane_g4_ParamLimits

0x8afa,	// (0x00078837) main_cset_slider_pane_g4

0x8b09,	// (0x00078846) main_cset_slider_pane_g5_ParamLimits

0x8b09,	// (0x00078846) main_cset_slider_pane_g5

0x8b15,	// (0x00078852) main_cset_slider_pane_g6_ParamLimits

0x8b15,	// (0x00078852) main_cset_slider_pane_g6

0xf9a4,	// (0x0007f6e1) main_cset_slider_pane_g_ParamLimits

0x8bc5,	// (0x00078902) main_cset_slider_pane_t1_ParamLimits

0x8bf3,	// (0x00078930) main_cset_slider_pane_t2_ParamLimits

0x8c0d,	// (0x0007894a) main_cset_slider_pane_t3_ParamLimits

0x8c27,	// (0x00078964) main_cset_slider_pane_t4_ParamLimits

0x8c41,	// (0x0007897e) main_cset_slider_pane_t5_ParamLimits

0x8c5b,	// (0x00078998) main_cset_slider_pane_t6_ParamLimits

0x8c70,	// (0x000789ad) main_cset_slider_pane_t7_ParamLimits

0x8c9a,	// (0x000789d7) main_cset_slider_pane_t8_ParamLimits

0x8c9a,	// (0x000789d7) main_cset_slider_pane_t8

0x8cc2,	// (0x000789ff) main_cset_slider_pane_t9_ParamLimits

0x8cc2,	// (0x000789ff) main_cset_slider_pane_t9

0x8cea,	// (0x00078a27) main_cset_slider_pane_t10_ParamLimits

0x8cea,	// (0x00078a27) main_cset_slider_pane_t10

0x8d12,	// (0x00078a4f) main_cset_slider_pane_t11_ParamLimits

0x8d12,	// (0x00078a4f) main_cset_slider_pane_t11

0x8d3a,	// (0x00078a77) main_cset_slider_pane_t12_ParamLimits

0x8d3a,	// (0x00078a77) main_cset_slider_pane_t12

0x8d57,	// (0x00078a94) main_cset_slider_pane_t13_ParamLimits

0x8d57,	// (0x00078a94) main_cset_slider_pane_t13

0xf9c9,	// (0x0007f706) main_cset_slider_pane_t_ParamLimits

0x20b1,	// (0x00071dee) bg_popup_sub_pane_cp011

0xcef3,	// (0x0007cc30) main_cset_text_pane_g1

0xcefb,	// (0x0007cc38) main_cset_text_pane_t1

0xcf09,	// (0x0007cc46) main_cset_text_pane_t2

0xcf17,	// (0x0007cc54) main_cset_text_pane_t3

0xcf25,	// (0x0007cc62) main_cset_text_pane_t4

0xcf33,	// (0x0007cc70) main_cset_text_pane_t5

0xcf41,	// (0x0007cc7e) main_cset_text_pane_t6

0xcf4f,	// (0x0007cc8c) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0007f797) main_cset_text_pane_t

0x20b1,	// (0x00071dee) main_cam4_burst_pane

0x20b1,	// (0x00071dee) main_cam5_pane

0x8984,	// (0x000786c1) bg_button_pane_cp019

0x898d,	// (0x000786ca) bg_button_pane_cp020

0x8b29,	// (0x00078866) main_cset_slider_pane_g7_ParamLimits

0x8b29,	// (0x00078866) main_cset_slider_pane_g7

0x8b35,	// (0x00078872) main_cset_slider_pane_g8_ParamLimits

0x8b35,	// (0x00078872) main_cset_slider_pane_g8

0x8b41,	// (0x0007887e) main_cset_slider_pane_g9_ParamLimits

0x8b41,	// (0x0007887e) main_cset_slider_pane_g9

0x8b4d,	// (0x0007888a) main_cset_slider_pane_g10_ParamLimits

0x8b4d,	// (0x0007888a) main_cset_slider_pane_g10

0x8b59,	// (0x00078896) main_cset_slider_pane_g11_ParamLimits

0x8b59,	// (0x00078896) main_cset_slider_pane_g11

0x8b65,	// (0x000788a2) main_cset_slider_pane_g12_ParamLimits

0x8b65,	// (0x000788a2) main_cset_slider_pane_g12

0x8b71,	// (0x000788ae) main_cset_slider_pane_g13_ParamLimits

0x8b71,	// (0x000788ae) main_cset_slider_pane_g13

0x8b7d,	// (0x000788ba) main_cset_slider_pane_g14_ParamLimits

0x8b7d,	// (0x000788ba) main_cset_slider_pane_g14

0x8b89,	// (0x000788c6) main_cset_slider_pane_g15_ParamLimits

0x8b89,	// (0x000788c6) main_cset_slider_pane_g15

0x8d74,	// (0x00078ab1) main_cset_slider_pane_t14_ParamLimits

0x8d74,	// (0x00078ab1) main_cset_slider_pane_t14

0x8dad,	// (0x00078aea) main_cset_slider_pane_t15_ParamLimits

0x8dad,	// (0x00078aea) main_cset_slider_pane_t15

0x912b,	// (0x00078e68) aid_cam4_burst_size_cell_ParamLimits

0x912b,	// (0x00078e68) aid_cam4_burst_size_cell

0x914b,	// (0x00078e88) grid_cam4_burst_pane_ParamLimits

0x914b,	// (0x00078e88) grid_cam4_burst_pane

0x9183,	// (0x00078ec0) linegrid_cam4_burst_pane_ParamLimits

0x9183,	// (0x00078ec0) linegrid_cam4_burst_pane

0x017c,	// (0x0006feb9) scroll_pane_cp30_ParamLimits

0x017c,	// (0x0006feb9) scroll_pane_cp30

0x91a7,	// (0x00078ee4) cell_cam4_burst_pane_ParamLimits

0x91a7,	// (0x00078ee4) cell_cam4_burst_pane

0xcf5d,	// (0x0007cc9a) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf5d,	// (0x0007cc9a) linegrid_cam4_burst_pane_g1

0x91f4,	// (0x00078f31) linegrid_cam4_burst_pane_g2_ParamLimits

0x91f4,	// (0x00078f31) linegrid_cam4_burst_pane_g2

0xcf6a,	// (0x0007cca7) linegrid_cam4_burst_pane_g3_ParamLimits

0xcf6a,	// (0x0007cca7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0007f7a6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0007f7a6) linegrid_cam4_burst_pane_g

0x9205,	// (0x00078f42) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9205,	// (0x00078f42) linegrid_cam4_burst_pane_g3_copy1

0xcf77,	// (0x0007ccb4) linegrid_cam4_burst_pane_g4_ParamLimits

0xcf77,	// (0x0007ccb4) linegrid_cam4_burst_pane_g4

0x921f,	// (0x00078f5c) linegrid_cam4_burst_pane_g5_ParamLimits

0x921f,	// (0x00078f5c) linegrid_cam4_burst_pane_g5

0x9230,	// (0x00078f6d) linegrid_cam4_burst_pane_g6_ParamLimits

0x9230,	// (0x00078f6d) linegrid_cam4_burst_pane_g6

0xcf84,	// (0x0007ccc1) linegrid_cam4_burst_pane_g7_ParamLimits

0xcf84,	// (0x0007ccc1) linegrid_cam4_burst_pane_g7

0x9247,	// (0x00078f84) cell_cam4_burst_pane_g1

0xcf9d,	// (0x0007ccda) main_cam5_pane_t1_ParamLimits

0xcf9d,	// (0x0007ccda) main_cam5_pane_t1

0xcfaf,	// (0x0007ccec) main_cam5_pane_t2_ParamLimits

0xcfaf,	// (0x0007ccec) main_cam5_pane_t2

0xcfc1,	// (0x0007ccfe) main_cam5_pane_t3_ParamLimits

0xcfc1,	// (0x0007ccfe) main_cam5_pane_t3

0xcfd3,	// (0x0007cd10) main_cam5_pane_t4_ParamLimits

0xcfd3,	// (0x0007cd10) main_cam5_pane_t4

0xcfeb,	// (0x0007cd28) main_cam5_pane_t5_ParamLimits

0xcfeb,	// (0x0007cd28) main_cam5_pane_t5

0xcfff,	// (0x0007cd3c) main_cam5_pane_t6_ParamLimits

0xcfff,	// (0x0007cd3c) main_cam5_pane_t6

0xd013,	// (0x0007cd50) main_cam5_pane_t7_ParamLimits

0xd013,	// (0x0007cd50) main_cam5_pane_t7

0xd025,	// (0x0007cd62) main_cam5_pane_t8_ParamLimits

0xd025,	// (0x0007cd62) main_cam5_pane_t8

0xd041,	// (0x0007cd7e) main_cam5_pane_t9_ParamLimits

0xd041,	// (0x0007cd7e) main_cam5_pane_t9

0xd053,	// (0x0007cd90) main_cam5_pane_t10_ParamLimits

0xd053,	// (0x0007cd90) main_cam5_pane_t10

0xd065,	// (0x0007cda2) main_cam5_pane_t11_ParamLimits

0xd065,	// (0x0007cda2) main_cam5_pane_t11

0xd077,	// (0x0007cdb4) main_cam5_pane_t12_ParamLimits

0xd077,	// (0x0007cdb4) main_cam5_pane_t12

0xd08c,	// (0x0007cdc9) main_cam5_pane_t13_ParamLimits

0xd08c,	// (0x0007cdc9) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0007f7b2) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0007f7b2) main_cam5_pane_t

0x22e3,	// (0x00072020) popup_scut_keymap_window_ParamLimits

0x22e3,	// (0x00072020) popup_scut_keymap_window

0x925a,	// (0x00078f97) aid_size_cell_brow_shortcut

0xb81d,	// (0x0007b55a) bg_popup_window_pane_cp010

0x9266,	// (0x00078fa3) grid_scut_pane

0x9272,	// (0x00078faf) cell_scut_pane_ParamLimits

0x9272,	// (0x00078faf) cell_scut_pane

0x9289,	// (0x00078fc6) cell_scut_pane_g1

0xd0a9,	// (0x0007cde6) cell_scut_pane_t1

0xd0b8,	// (0x0007cdf5) cell_scut_pane_t2

0x9292,	// (0x00078fcf) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0007f7cd) cell_scut_pane_t

0x6a17,	// (0x00076754) main_mup3_pane_g8_ParamLimits

0x6a17,	// (0x00076754) main_mup3_pane_g8

0x83c4,	// (0x00078101) area_vitu2_query_pane_ParamLimits

0x83c4,	// (0x00078101) area_vitu2_query_pane

0x198c,	// (0x000716c9) input_focus_pane_cp08

0xd0c7,	// (0x0007ce04) area_vitu2_query_pane_g1

0x1a09,	// (0x00071746) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0007f7d4) area_vitu2_query_pane_g

0x92a0,	// (0x00078fdd) area_vitu2_query_pane_t1_ParamLimits

0x92a0,	// (0x00078fdd) area_vitu2_query_pane_t1

0x92b4,	// (0x00078ff1) area_vitu2_query_pane_t2_ParamLimits

0x92b4,	// (0x00078ff1) area_vitu2_query_pane_t2

0x1a1a,	// (0x00071757) area_vitu2_query_pane_t3_ParamLimits

0x1a1a,	// (0x00071757) area_vitu2_query_pane_t3

0xd0d3,	// (0x0007ce10) area_vitu2_query_pane_t4_ParamLimits

0xd0d3,	// (0x0007ce10) area_vitu2_query_pane_t4

0xd0fb,	// (0x0007ce38) area_vitu2_query_pane_t5_ParamLimits

0xd0fb,	// (0x0007ce38) area_vitu2_query_pane_t5

0xd123,	// (0x0007ce60) area_vitu2_query_pane_t6_ParamLimits

0xd123,	// (0x0007ce60) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0007f7d9) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0007f7d9) area_vitu2_query_pane_t

0x92c8,	// (0x00079005) bg_button_pane_cp018

0x92d6,	// (0x00079013) bg_button_pane_cp021

0x1a42,	// (0x0007177f) bg_button_pane_cp022

0x1a51,	// (0x0007178e) input_focus_pane_cp09

0x4a89,	// (0x000747c6) aid_size_touch_mv_arrow_left

0x4ab2,	// (0x000747ef) aid_size_touch_mv_arrow_right

0x8ba1,	// (0x000788de) main_cset_slider_pane_g16_ParamLimits

0x8ba1,	// (0x000788de) main_cset_slider_pane_g16

0x8bad,	// (0x000788ea) main_cset_slider_pane_g17_ParamLimits

0x8bad,	// (0x000788ea) main_cset_slider_pane_g17

0x9247,	// (0x00078f84) cell_cam4_burst_pane_g1_ParamLimits

0x20b1,	// (0x00071dee) compa_mode_pane

0x8e68,	// (0x00078ba5) popup_vtel_slider_window_g3_ParamLimits

0x8e68,	// (0x00078ba5) popup_vtel_slider_window_g3

0x8e7f,	// (0x00078bbc) popup_vtel_slider_window_g4_ParamLimits

0x8e7f,	// (0x00078bbc) popup_vtel_slider_window_g4

0x8e96,	// (0x00078bd3) popup_vtel_slider_window_t1_ParamLimits

0x8e96,	// (0x00078bd3) popup_vtel_slider_window_t1

0x20b1,	// (0x00071dee) main_cl_pane

0xcc93,	// (0x0007c9d0) popup_imed_adjust2_window_ParamLimits

0xcc6b,	// (0x0007c9a8) bg_tb_trans_pane_cp05_ParamLimits

0x7361,	// (0x0007709e) popup_imed_adjust2_window_g1_ParamLimits

0x7370,	// (0x000770ad) popup_imed_adjust2_window_g2_ParamLimits

0x7370,	// (0x000770ad) popup_imed_adjust2_window_g2

0x737c,	// (0x000770b9) popup_imed_adjust2_window_g3_ParamLimits

0x737c,	// (0x000770b9) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0007f54a) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0007f54a) popup_imed_adjust2_window_g

0x7388,	// (0x000770c5) popup_imed_adjust2_window_t1_ParamLimits

0x73a0,	// (0x000770dd) slider_imed_adjust_pane_ParamLimits

0x73b4,	// (0x000770f1) slider_imed_adjust_pane_g1_ParamLimits

0x73c4,	// (0x00077101) slider_imed_adjust_pane_g2_ParamLimits

0x73d4,	// (0x00077111) slider_imed_adjust_pane_g3_ParamLimits

0x73e5,	// (0x00077122) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0007f551) slider_imed_adjust_pane_g_ParamLimits

0x80cf,	// (0x00077e0c) aid_touch_area_cam4_ParamLimits

0x80cf,	// (0x00077e0c) aid_touch_area_cam4

0xef61,	// (0x0007ec9e) battery_pane_cp01

0x819f,	// (0x00077edc) main_camera4_pane_g6_ParamLimits

0x819f,	// (0x00077edc) main_camera4_pane_g6

0x81c9,	// (0x00077f06) main_camera4_pane_t2_ParamLimits

0x81c9,	// (0x00077f06) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0007f654) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0007f654) main_camera4_pane_t

0x8210,	// (0x00077f4d) aid_touch_area_vid4_ParamLimits

0x8210,	// (0x00077f4d) aid_touch_area_vid4

0x8277,	// (0x00077fb4) main_video4_pane_g5_ParamLimits

0x8277,	// (0x00077fb4) main_video4_pane_g5

0x82a2,	// (0x00077fdf) vid4_progress_pane_ParamLimits

0x82a2,	// (0x00077fdf) vid4_progress_pane

0x8bb9,	// (0x000788f6) main_cset_slider_pane_g18_ParamLimits

0x8bb9,	// (0x000788f6) main_cset_slider_pane_g18

0xcf91,	// (0x0007ccce) cell_cam4_burst_pane_g2_ParamLimits

0xcf91,	// (0x0007ccce) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0007f7ad) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0007f7ad) cell_cam4_burst_pane_g

0x2da0,	// (0x00072add) bg_cl_pane_ParamLimits

0x2da0,	// (0x00072add) bg_cl_pane

0x92e2,	// (0x0007901f) cl_header_pane_ParamLimits

0x92e2,	// (0x0007901f) cl_header_pane

0x92f6,	// (0x00079033) cl_listscroll_pane_ParamLimits

0x92f6,	// (0x00079033) cl_listscroll_pane

0xd16f,	// (0x0007ceac) bg_cl_pane_g1

0xd177,	// (0x0007ceb4) bg_cl_pane_g2

0xd17f,	// (0x0007cebc) bg_cl_pane_g3

0xd187,	// (0x0007cec4) bg_cl_pane_g4

0xd18f,	// (0x0007cecc) bg_cl_pane_g5

0xd197,	// (0x0007ced4) bg_cl_pane_g6

0xd19f,	// (0x0007cedc) bg_cl_pane_g7

0xd1a7,	// (0x0007cee4) bg_cl_pane_g8

0xd1af,	// (0x0007ceec) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0007f7e8) bg_cl_pane_g

0x9306,	// (0x00079043) aid_height_cl_leading_ParamLimits

0x9306,	// (0x00079043) aid_height_cl_leading

0x9312,	// (0x0007904f) aid_height_cl_text_ParamLimits

0x9312,	// (0x0007904f) aid_height_cl_text

0xaf36,	// (0x0007ac73) bg_cl_header_pane_ParamLimits

0xaf36,	// (0x0007ac73) bg_cl_header_pane

0x9331,	// (0x0007906e) cl_header_pane_g1_ParamLimits

0x9331,	// (0x0007906e) cl_header_pane_g1

0x9347,	// (0x00079084) cl_header_pane_t1_ParamLimits

0x9347,	// (0x00079084) cl_header_pane_t1

0xd1b7,	// (0x0007cef4) cl_list_pane

0x8a75,	// (0x000787b2) hc_scroll_pane_cp01

0x3e25,	// (0x00073b62) bg_cl_header_pane_g1

0x864e,	// (0x0007838b) bg_cl_header_pane_g2

0x3e45,	// (0x00073b82) bg_cl_header_pane_g3

0x865e,	// (0x0007839b) bg_cl_header_pane_g4

0x8656,	// (0x00078393) bg_cl_header_pane_g5

0xce92,	// (0x0007cbcf) bg_cl_header_pane_g6

0x8676,	// (0x000783b3) bg_cl_header_pane_g7

0x867e,	// (0x000783bb) bg_cl_header_pane_g8

0x866e,	// (0x000783ab) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0007f7fb) bg_cl_header_pane_g

0x9360,	// (0x0007909d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9360,	// (0x0007909d) hc_cl_list_double_graphic_heading_pane

0x9371,	// (0x000790ae) hc_cl_list_single_graphic_pane_ParamLimits

0x9371,	// (0x000790ae) hc_cl_list_single_graphic_pane

0x9387,	// (0x000790c4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9387,	// (0x000790c4) hc_cl_list_single_graphic_pane_g1

0x9393,	// (0x000790d0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9393,	// (0x000790d0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0007f80e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0007f80e) hc_cl_list_single_graphic_pane_g

0x93a7,	// (0x000790e4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x93a7,	// (0x000790e4) hc_cl_list_single_graphic_pane_t1

0x9387,	// (0x000790c4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9387,	// (0x000790c4) hc_cl_list_double_graphic_heading_pane_g1

0x93bc,	// (0x000790f9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x93bc,	// (0x000790f9) hc_cl_list_double_graphic_heading_pane_g2

0x93d0,	// (0x0007910d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x93d0,	// (0x0007910d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0007f813) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0007f813) hc_cl_list_double_graphic_heading_pane_g

0x93e4,	// (0x00079121) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x93e4,	// (0x00079121) hc_cl_list_double_graphic_heading_pane_t1

0x93f9,	// (0x00079136) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x93f9,	// (0x00079136) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0007f81a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0007f81a) hc_cl_list_double_graphic_heading_pane_t

0xf038,	// (0x0007ed75) vid4_progress_pane_g1

0xf048,	// (0x0007ed85) vid4_progress_pane_g2

0xb9f6,	// (0x0007b733) vid4_progress_pane_g3

0xf058,	// (0x0007ed95) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0007f81f) vid4_progress_pane_g

0xf076,	// (0x0007edb3) vid4_progress_pane_t1

0xf08b,	// (0x0007edc8) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0007f82a) vid4_progress_pane_t

0xf0b6,	// (0x0007edf3) wait_bar_pane_cp07

0xec07,	// (0x0007e944) blid_firmament_pane_ParamLimits

0xec4a,	// (0x0007e987) popup_blid_sat_info2_window_g1

0xec6e,	// (0x0007e9ab) popup_blid_sat_info2_window_t3

0xec7c,	// (0x0007e9b9) popup_blid_sat_info2_window_t4

0xec8a,	// (0x0007e9c7) popup_blid_sat_info2_window_t5

0xec98,	// (0x0007e9d5) popup_blid_sat_info2_window_t6

0xeca8,	// (0x0007e9e5) popup_blid_sat_info2_window_t7

0xecb6,	// (0x0007e9f3) popup_blid_sat_info2_window_t8

0xecc4,	// (0x0007ea01) popup_blid_sat_info2_window_t9

0x0253,	// (0x0006ff90) popup_blid_sat_info2_window_t10

0x0315,	// (0x00070052) aid_firma_cardinal_ParamLimits

0x0329,	// (0x00070066) blid_firmament_pane_t1_ParamLimits

0x0340,	// (0x0007007d) blid_firmament_pane_t2_ParamLimits

0x0357,	// (0x00070094) blid_firmament_pane_t3_ParamLimits

0x036e,	// (0x000700ab) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0007f443) blid_firmament_pane_t_ParamLimits

0x0385,	// (0x000700c2) blid_sat_info_pane_ParamLimits

0xaf36,	// (0x0007ac73) main_cam_set_pane_ParamLimits

0x7274,	// (0x00076fb1) aid_size_cell_colour_35_ParamLimits

0x7294,	// (0x00076fd1) aid_size_cell_colour_112_ParamLimits

0x72b4,	// (0x00076ff1) aid_size_cell_effect_ParamLimits

0xcc6b,	// (0x0007c9a8) bg_tb_trans_pane_cp02_ParamLimits

0xb284,	// (0x0007afc1) heading_imed_pane_ParamLimits

0x72d4,	// (0x00077011) listscroll_imed_pane_ParamLimits

0xc29d,	// (0x0007bfda) popup_call2_audio_first_window_g5_ParamLimits

0xc29d,	// (0x0007bfda) popup_call2_audio_first_window_g5

0x7c97,	// (0x000779d4) aid_size_touch_image3_arrow_left_ParamLimits

0x7c97,	// (0x000779d4) aid_size_touch_image3_arrow_left

0x7cc3,	// (0x00077a00) aid_size_touch_image3_arrow_right_ParamLimits

0x7cc3,	// (0x00077a00) aid_size_touch_image3_arrow_right

0xf0a1,	// (0x0007edde) vid4_progress_pane_t3

0x78f6,	// (0x00077633) main_hwr_training_symbol_option_pane_ParamLimits

0x78f6,	// (0x00077633) main_hwr_training_symbol_option_pane

0x7916,	// (0x00077653) popup_hwr_training_preview_window_ParamLimits

0x7916,	// (0x00077653) popup_hwr_training_preview_window

0x7963,	// (0x000776a0) hwr_training_navi_pane_g5_ParamLimits

0x7963,	// (0x000776a0) hwr_training_navi_pane_g5

0x8596,	// (0x000782d3) popup_char_count_window

0xaf36,	// (0x0007ac73) bg_popup_sub_pane_cp20_ParamLimits

0x8fae,	// (0x00078ceb) list_vitu2_match_list_pane_ParamLimits

0x8fbd,	// (0x00078cfa) vitu2_page_scroll_pane_ParamLimits

0x8fbd,	// (0x00078cfa) vitu2_page_scroll_pane

0xd212,	// (0x0007cf4f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd212,	// (0x0007cf4f) list_single_hwr_training_symbol_option_pane

0xd225,	// (0x0007cf62) list_single_hwr_training_symbol_option_pane_g1

0xd22d,	// (0x0007cf6a) list_single_hwr_training_symbol_option_pane_t1

0xd23b,	// (0x0007cf78) bg_button_pane_cp023

0xd244,	// (0x0007cf81) bg_button_pane_cp024

0x940e,	// (0x0007914b) vitu2_page_scroll_pane_g1

0x9416,	// (0x00079153) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0007f831) vitu2_page_scroll_pane_g

0x941e,	// (0x0007915b) vitu2_page_scroll_pane_t1

0xd277,	// (0x0007cfb4) popup_char_count_window_g1

0xd280,	// (0x0007cfbd) popup_char_count_window_g2

0xd289,	// (0x0007cfc6) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0007f836) popup_char_count_window_g

0xd292,	// (0x0007cfcf) popup_char_count_window_t1

0x20b1,	// (0x00071dee) main_vded2_pane

0x734d,	// (0x0007708a) aid_size_cell_imed_line

0x7357,	// (0x00077094) grid_imed_line_width_pane

0x8310,	// (0x0007804d) vid4_indicators_pane_g4

0xd2a0,	// (0x0007cfdd) cell_imed_line_width_pane_ParamLimits

0xd2a0,	// (0x0007cfdd) cell_imed_line_width_pane

0xd2b4,	// (0x0007cff1) cell_imed_line_width_pane_g1

0x0875,	// (0x000705b2) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0007f83d) cell_imed_line_width_pane_g

0x942d,	// (0x0007916a) main_vded2_pane_g1_ParamLimits

0x942d,	// (0x0007916a) main_vded2_pane_g1

0x9443,	// (0x00079180) main_vded2_pane_g2_ParamLimits

0x9443,	// (0x00079180) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0007f842) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0007f842) main_vded2_pane_g

0x9455,	// (0x00079192) vded2_slider_pane_ParamLimits

0x9455,	// (0x00079192) vded2_slider_pane

0x9465,	// (0x000791a2) aid_size_touch_vded2_end

0x946f,	// (0x000791ac) aid_size_touch_vded2_playhead

0xd2bd,	// (0x0007cffa) aid_size_touch_vded2_start

0xd2c5,	// (0x0007d002) vded2_slider_bg_pane

0xd2ce,	// (0x0007d00b) vded2_slider_pane_g1

0xd2d7,	// (0x0007d014) vded2_slider_pane_g2

0x9479,	// (0x000791b6) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0007f847) vded2_slider_pane_g

0xd2df,	// (0x0007d01c) vded2_slider_bg_pane_g1

0xd2e8,	// (0x0007d025) vded2_slider_bg_pane_g2

0xd2f1,	// (0x0007d02e) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0007f84e) vded2_slider_bg_pane_g

0x5065,	// (0x00074da2) aid_postcard_touch_down_pane_ParamLimits

0x5065,	// (0x00074da2) aid_postcard_touch_down_pane

0x507b,	// (0x00074db8) aid_postcard_touch_up_pane_ParamLimits

0x507b,	// (0x00074db8) aid_postcard_touch_up_pane

0x20b1,	// (0x00071dee) main_blid2_pane

0xcc79,	// (0x0007c9b6) popup_blid2_search_window

0x20b1,	// (0x00071dee) blid2_gps_pane

0x20b1,	// (0x00071dee) blid2_navig_pane

0x20b1,	// (0x00071dee) blid2_search_pane

0x20b1,	// (0x00071dee) blid2_tripm_pane

0x9484,	// (0x000791c1) blid2_search_pane_g1_ParamLimits

0x9484,	// (0x000791c1) blid2_search_pane_g1

0x949e,	// (0x000791db) blid2_search_pane_t1_ParamLimits

0x949e,	// (0x000791db) blid2_search_pane_t1

0x94b0,	// (0x000791ed) aid_size_cell_blid2_gps_ParamLimits

0x94b0,	// (0x000791ed) aid_size_cell_blid2_gps

0x94c8,	// (0x00079205) blid2_gps_pane_g1_ParamLimits

0x94c8,	// (0x00079205) blid2_gps_pane_g1

0x94dc,	// (0x00079219) grid_blid2_satellite_pane_ParamLimits

0x94dc,	// (0x00079219) grid_blid2_satellite_pane

0x94f6,	// (0x00079233) blid2_navig_pane_g1_ParamLimits

0x94f6,	// (0x00079233) blid2_navig_pane_g1

0x9502,	// (0x0007923f) blid2_navig_pane_t1_ParamLimits

0x9502,	// (0x0007923f) blid2_navig_pane_t1

0x951d,	// (0x0007925a) blid2_navig_pane_t2_ParamLimits

0x951d,	// (0x0007925a) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0007f855) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0007f855) blid2_navig_pane_t

0x9538,	// (0x00079275) blid2_navig_ring_pane_ParamLimits

0x9538,	// (0x00079275) blid2_navig_ring_pane

0x9551,	// (0x0007928e) blid2_speed_pane_ParamLimits

0x9551,	// (0x0007928e) blid2_speed_pane

0x955d,	// (0x0007929a) blid2_tripm_pane_g1_ParamLimits

0x955d,	// (0x0007929a) blid2_tripm_pane_g1

0x9576,	// (0x000792b3) blid2_tripm_pane_g2_ParamLimits

0x9576,	// (0x000792b3) blid2_tripm_pane_g2

0x958a,	// (0x000792c7) blid2_tripm_pane_g3_ParamLimits

0x958a,	// (0x000792c7) blid2_tripm_pane_g3

0x959e,	// (0x000792db) blid2_tripm_pane_g4_ParamLimits

0x959e,	// (0x000792db) blid2_tripm_pane_g4

0x95b2,	// (0x000792ef) blid2_tripm_pane_g5_ParamLimits

0x95b2,	// (0x000792ef) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0007f85a) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0007f85a) blid2_tripm_pane_g

0x95d8,	// (0x00079315) blid2_tripm_pane_t1_ParamLimits

0x95d8,	// (0x00079315) blid2_tripm_pane_t1

0x95f3,	// (0x00079330) blid2_tripm_pane_t2_ParamLimits

0x95f3,	// (0x00079330) blid2_tripm_pane_t2

0x960c,	// (0x00079349) blid2_tripm_pane_t3_ParamLimits

0x960c,	// (0x00079349) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0007f867) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0007f867) blid2_tripm_pane_t

0x9653,	// (0x00079390) cell_blid2_satellite_pane_ParamLimits

0x9653,	// (0x00079390) cell_blid2_satellite_pane

0x9671,	// (0x000793ae) cell_blid2_satellite_pane_g1

0xd2fa,	// (0x0007d037) cell_blid2_satellite_pane_t1

0x0395,	// (0x000700d2) blid2_speed_pane_g1

0xd308,	// (0x0007d045) blid2_speed_pane_t1

0xd316,	// (0x0007d053) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0007f870) blid2_speed_pane_t

0x0395,	// (0x000700d2) blid2_navig_ring_pane_g1

0x967a,	// (0x000793b7) blid2_navig_ring_pane_g2

0x9682,	// (0x000793bf) blid2_navig_ring_pane_g3

0x968a,	// (0x000793c7) blid2_navig_ring_pane_g4

0x9692,	// (0x000793cf) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0007f875) blid2_navig_ring_pane_g

0x20b1,	// (0x00071dee) bg_popup_window_pane_cp011

0xd324,	// (0x0007d061) popup_blid2_search_window_g1

0xd32c,	// (0x0007d069) popup_blid2_search_window_t1

0xd33a,	// (0x0007d077) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0007f880) popup_blid2_search_window_t

0x3cf1,	// (0x00073a2e) main_browser_pane_g1

0x2da0,	// (0x00072add) main_browser_pane_ParamLimits

0xaf36,	// (0x0007ac73) bg_button_pane_cp011_ParamLimits

0x8630,	// (0x0007836d) cell_vitu2_function_pane_g1_ParamLimits

0xaf36,	// (0x0007ac73) bg_popup_sub_pane_cp22_ParamLimits

0x198c,	// (0x000716c9) input_focus_pane_cp08_ParamLimits

0x90f2,	// (0x00078e2f) popup_vitu2_query_button_pane_ParamLimits

0x90f2,	// (0x00078e2f) popup_vitu2_query_button_pane

0x1982,	// (0x000716bf) popup_vitu2_query_input_button_pane

0xcee7,	// (0x0007cc24) popup_vitu2_query_window_g1_ParamLimits

0x1999,	// (0x000716d6) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0007f787) popup_vitu2_query_window_g_ParamLimits

0x20b1,	// (0x00071dee) bg_button_pane_cp026

0x969a,	// (0x000793d7) popup_vitu2_query_input_button_pane_g1

0x20b1,	// (0x00071dee) bg_button_pane_cp025

0xd348,	// (0x0007d085) popup_vitu2_query_button_pane_t1

0x66ff,	// (0x0007643c) main_mp3_pane_t6

0x670d,	// (0x0007644a) popup_slider_window_cp01

0xef71,	// (0x0007ecae) cam4_battery_pane

0xefca,	// (0x0007ed07) cam4_battery_pane_cp02

0xf030,	// (0x0007ed6d) cam4_battery_pane_cp01

0xf030,	// (0x0007ed6d) cam4_battery_pane_cp03

0x0395,	// (0x000700d2) cam4_battery_pane_g1

0x96a2,	// (0x000793df) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0007f885) cam4_battery_pane_g

0x0261,	// (0x0006ff9e) popup_blid_sat_info2_window_t11

0x4a89,	// (0x000747c6) aid_size_touch_mv_arrow_left_ParamLimits

0x4ab2,	// (0x000747ef) aid_size_touch_mv_arrow_right_ParamLimits

0xb77d,	// (0x0007b4ba) navi_pane_g1_ParamLimits

0x4adb,	// (0x00074818) navi_pane_g2_ParamLimits

0x4b09,	// (0x00074846) navi_pane_g3_ParamLimits

0xf418,	// (0x0007f155) navi_pane_g_ParamLimits

0x4b61,	// (0x0007489e) navi_pane_mv_t1_ParamLimits

0x72e0,	// (0x0007701d) grid_imed_effect_pane_ParamLimits

0x393e,	// (0x0007367b) aid_placing_vt_slider_lsc

0x3946,	// (0x00073683) aid_placing_vt_slider_prt

0xaf36,	// (0x0007ac73) bg_tb_trans_pane_cp01_ParamLimits

0x0518,	// (0x00070255) popup_image_details_window_g1_ParamLimits

0x052b,	// (0x00070268) popup_image_details_window_g2_ParamLimits

0x0540,	// (0x0007027d) popup_image_details_window_g3_ParamLimits

0x0540,	// (0x0007027d) popup_image_details_window_g3

0xf74b,	// (0x0007f488) popup_image_details_window_g_ParamLimits

0x0554,	// (0x00070291) popup_image_details_window_t1_ParamLimits

0x0566,	// (0x000702a3) popup_image_details_window_t2_ParamLimits

0x057f,	// (0x000702bc) popup_image_details_window_t3_ParamLimits

0x0593,	// (0x000702d0) popup_image_details_window_t4_ParamLimits

0x05ae,	// (0x000702eb) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0007f48f) popup_image_details_window_t_ParamLimits

0x931e,	// (0x0007905b) cl_header_name_pane_ParamLimits

0x931e,	// (0x0007905b) cl_header_name_pane

0x96ac,	// (0x000793e9) cl_header_name_pane_t1_ParamLimits

0x96ac,	// (0x000793e9) cl_header_name_pane_t1

0x96cd,	// (0x0007940a) cl_header_name_pane_t2_ParamLimits

0x96cd,	// (0x0007940a) cl_header_name_pane_t2

0x970f,	// (0x0007944c) cl_header_name_pane_t3_ParamLimits

0x970f,	// (0x0007944c) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0007f88a) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0007f88a) cl_header_name_pane_t

0x4b32,	// (0x0007486f) navi_pane_mv_g2_ParamLimits

0x8570,	// (0x000782ad) field_vitu2_entry_pane_g1_ParamLimits

0x857c,	// (0x000782b9) field_vitu2_entry_pane_g2_ParamLimits

0x8588,	// (0x000782c5) field_vitu2_entry_pane_g3_ParamLimits

0x8588,	// (0x000782c5) field_vitu2_entry_pane_g3

0xf949,	// (0x0007f686) field_vitu2_entry_pane_g_ParamLimits

0x85ac,	// (0x000782e9) cell_vitu2_itu_pane_g1_ParamLimits

0x85bc,	// (0x000782f9) cell_vitu2_itu_pane_g2_ParamLimits

0x85bc,	// (0x000782f9) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0007f692) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0007f692) cell_vitu2_itu_pane_g

0xaf36,	// (0x0007ac73) bg_vkb2_func_pane_cp05_ParamLimits

0xaf36,	// (0x0007ac73) bg_vkb2_func_pane_cp05

0xaf36,	// (0x0007ac73) bg_vkb2_func_pane_cp03

0xaf36,	// (0x0007ac73) bg_vkb2_func_pane_cp04

0xaf36,	// (0x0007ac73) bg_vkb2_func_pane_cp10_ParamLimits

0xaf36,	// (0x0007ac73) bg_vkb2_func_pane_cp10

0x1a42,	// (0x0007177f) bg_vkb2_func_pane_cp08

0x92c8,	// (0x00079005) bg_vkb2_func_pane_cp06

0x92d6,	// (0x00079013) bg_vkb2_func_pane_cp07

0xd24d,	// (0x0007cf8a) bg_vkb2_func_pane_cp11_ParamLimits

0xd24d,	// (0x0007cf8a) bg_vkb2_func_pane_cp11

0xd262,	// (0x0007cf9f) bg_vkb2_func_pane_cp12_ParamLimits

0xd262,	// (0x0007cf9f) bg_vkb2_func_pane_cp12

0x20b1,	// (0x00071dee) bg_vkb2_func_pane_cp09

0x864e,	// (0x0007838b) bg_vkb2_func_pane_g1

0x3e45,	// (0x00073b82) bg_vkb2_func_pane_g2

0x8656,	// (0x00078393) bg_vkb2_func_pane_g3

0x865e,	// (0x0007839b) bg_vkb2_func_pane_g4

0xce92,	// (0x0007cbcf) bg_vkb2_func_pane_g5

0x8676,	// (0x000783b3) bg_vkb2_func_pane_g6

0x867e,	// (0x000783bb) bg_vkb2_func_pane_g7

0x866e,	// (0x000783ab) bg_vkb2_func_pane_g8

0x3e25,	// (0x00073b62) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0007f891) bg_vkb2_func_pane_g

0x95c6,	// (0x00079303) blid2_tripm_pane_g6_ParamLimits

0x95c6,	// (0x00079303) blid2_tripm_pane_g6

0x7b22,	// (0x0007785f) mp4_progress_pane_g1

0x963f,	// (0x0007937c) blid2_tripm_values_pane_ParamLimits

0x963f,	// (0x0007937c) blid2_tripm_values_pane

0x9740,	// (0x0007947d) blid2_tripm_values_pane_t1

0x974e,	// (0x0007948b) blid2_tripm_values_pane_t2

0x975c,	// (0x00079499) blid2_tripm_values_pane_t3

0x976a,	// (0x000794a7) blid2_tripm_values_pane_t4

0x9778,	// (0x000794b5) blid2_tripm_values_pane_t5

0x9786,	// (0x000794c3) blid2_tripm_values_pane_t6

0x9794,	// (0x000794d1) blid2_tripm_values_pane_t7

0x97a2,	// (0x000794df) blid2_tripm_values_pane_t8

0x97b0,	// (0x000794ed) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0007f8a4) blid2_tripm_values_pane_t

0x397e,	// (0x000736bb) call_video_pane_t1_ParamLimits

0x3990,	// (0x000736cd) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0007efde) call_video_pane_t_ParamLimits

0x17ec,	// (0x00071529) msg_header_pane_g1_ParamLimits

0xb9b8,	// (0x0007b6f5) msg_header_pane_g2_ParamLimits

0xb9b8,	// (0x0007b6f5) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0007f1f8) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0007f1f8) msg_header_pane_g

0x2da0,	// (0x00072add) main_clock2_pane_ParamLimits

0x700c,	// (0x00076d49) grid_clock2_toolbar_pane_ParamLimits

0x700c,	// (0x00076d49) grid_clock2_toolbar_pane

0x700c,	// (0x00076d49) listscroll_clock2_pane_ParamLimits

0x700c,	// (0x00076d49) listscroll_clock2_pane

0x70e8,	// (0x00076e25) main_clock2_pane_t3_ParamLimits

0x70e8,	// (0x00076e25) main_clock2_pane_t3

0x7103,	// (0x00076e40) main_clock2_pane_t4_ParamLimits

0x7103,	// (0x00076e40) main_clock2_pane_t4

0xd356,	// (0x0007d093) cell_clock2_toolbar_pane

0xd35e,	// (0x0007d09b) cell_clock2_toolbar_pane_cp01

0xd35e,	// (0x0007d09b) cell_clock2_toolbar_pane_cp02

0xd366,	// (0x0007d0a3) cell_clock2_toolbar_pane_cp03

0xd36e,	// (0x0007d0ab) list_clock2_pane

0xb6d4,	// (0x0007b411) scroll_pane_cp10

0xd376,	// (0x0007d0b3) list_single_clock2_pane_ParamLimits

0xd376,	// (0x0007d0b3) list_single_clock2_pane

0xb81d,	// (0x0007b55a) list_highlight_pane_cp08

0xd383,	// (0x0007d0c0) list_single_clock2_pane_t1

0xd391,	// (0x0007d0ce) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0007f8b7) list_single_clock2_pane_t

0x20b1,	// (0x00071dee) bg_button_pane_cp10

0xd39f,	// (0x0007d0dc) cell_clock2_toolbar_pane_g1

0x4ff1,	// (0x00074d2e) aid_main_viewer_pane_g1_ParamLimits

0x4ff1,	// (0x00074d2e) aid_main_viewer_pane_g1

0x4fff,	// (0x00074d3c) aid_main_viewer_pane_g2_ParamLimits

0x4fff,	// (0x00074d3c) aid_main_viewer_pane_g2

0x500d,	// (0x00074d4a) aid_main_viewer_pane_g3_ParamLimits

0x500d,	// (0x00074d4a) aid_main_viewer_pane_g3

0x501c,	// (0x00074d59) aid_main_viewer_pane_g4_ParamLimits

0x501c,	// (0x00074d59) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0007f209) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0007f209) aid_main_viewer_pane_g

0x5922,	// (0x0007565f) main_calc_pane_ParamLimits

0x5936,	// (0x00075673) main_dialer2_pane_ParamLimits

0x20b1,	// (0x00071dee) main_cam6_pane

0x20b1,	// (0x00071dee) main_vid6_pane

0x7018,	// (0x00076d55) listscroll_gen_pane_cp06_ParamLimits

0x7018,	// (0x00076d55) listscroll_gen_pane_cp06

0x711e,	// (0x00076e5b) main_clock2_pane_t5_ParamLimits

0x711e,	// (0x00076e5b) main_clock2_pane_t5

0x7175,	// (0x00076eb2) aid_call2_pane_cp10_ParamLimits

0x7187,	// (0x00076ec4) aid_call_pane_cp10_ParamLimits

0xb752,	// (0x0007b48f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb752,	// (0x0007b48f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7199,	// (0x00076ed6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7199,	// (0x00076ed6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb752,	// (0x0007b48f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0007f53f) popup_clock_analogue_window_cp10_g_ParamLimits

0x71ab,	// (0x00076ee8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7c44,	// (0x00077981) cell_dialer2_keypad_pane_g2_ParamLimits

0x7c44,	// (0x00077981) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0007f625) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0007f625) cell_dialer2_keypad_pane_g

0x7c60,	// (0x0007799d) cell_dialer2_keypad_pane_t1

0x8a4f,	// (0x0007878c) main_cset_text2_pane_ParamLimits

0x8a4f,	// (0x0007878c) main_cset_text2_pane

0xd0c7,	// (0x0007ce04) area_vitu2_query_pane_g1_ParamLimits

0x1a09,	// (0x00071746) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0007f7d4) area_vitu2_query_pane_g_ParamLimits

0xd14b,	// (0x0007ce88) area_vitu2_query_pane_t7_ParamLimits

0xd14b,	// (0x0007ce88) area_vitu2_query_pane_t7

0x92c8,	// (0x00079005) bg_button_pane_cp018_ParamLimits

0x92d6,	// (0x00079013) bg_button_pane_cp021_ParamLimits

0x1a42,	// (0x0007177f) bg_button_pane_cp022_ParamLimits

0x1a42,	// (0x0007177f) bg_vkb2_func_pane_cp08_ParamLimits

0x92c8,	// (0x00079005) bg_vkb2_func_pane_cp06_ParamLimits

0x92d6,	// (0x00079013) bg_vkb2_func_pane_cp07_ParamLimits

0x1a51,	// (0x0007178e) input_focus_pane_cp09_ParamLimits

0xf0d0,	// (0x0007ee0d) cam6_autofocus_pane_ParamLimits

0xf0d0,	// (0x0007ee0d) cam6_autofocus_pane

0x97be,	// (0x000794fb) cam6_image_uncrop_pane_ParamLimits

0x97be,	// (0x000794fb) cam6_image_uncrop_pane

0x97cd,	// (0x0007950a) cam6_indi_pane_ParamLimits

0x97cd,	// (0x0007950a) cam6_indi_pane

0x97e3,	// (0x00079520) cam6_mode_pane_ParamLimits

0x97e3,	// (0x00079520) cam6_mode_pane

0x97f5,	// (0x00079532) cam6_timer_pane_ParamLimits

0x97f5,	// (0x00079532) cam6_timer_pane

0x9801,	// (0x0007953e) cam6_zoom_pane_ParamLimits

0x9801,	// (0x0007953e) cam6_zoom_pane

0x980d,	// (0x0007954a) cam6_mode_pane_g1_ParamLimits

0x980d,	// (0x0007954a) cam6_mode_pane_g1

0x981d,	// (0x0007955a) cam6_mode_pane_g2_ParamLimits

0x981d,	// (0x0007955a) cam6_mode_pane_g2

0x982d,	// (0x0007956a) cam6_mode_pane_g3_ParamLimits

0x982d,	// (0x0007956a) cam6_mode_pane_g3

0x983d,	// (0x0007957a) cam6_mode_pane_g4_ParamLimits

0x983d,	// (0x0007957a) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0007f8bc) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0007f8bc) cam6_mode_pane_g

0xd3a7,	// (0x0007d0e4) bg_tb_trans_pane_cp08_ParamLimits

0xd3a7,	// (0x0007d0e4) bg_tb_trans_pane_cp08

0xd3b5,	// (0x0007d0f2) cam6_battery_pane_ParamLimits

0xd3b5,	// (0x0007d0f2) cam6_battery_pane

0xd3cb,	// (0x0007d108) cam6_indi_pane_g1_ParamLimits

0xd3cb,	// (0x0007d108) cam6_indi_pane_g1

0xd3dd,	// (0x0007d11a) cam6_indi_pane_g2_ParamLimits

0xd3dd,	// (0x0007d11a) cam6_indi_pane_g2

0xd3ef,	// (0x0007d12c) cam6_indi_pane_g3_ParamLimits

0xd3ef,	// (0x0007d12c) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0007f8c5) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0007f8c5) cam6_indi_pane_g

0xd401,	// (0x0007d13e) cam6_indi_pane_t1_ParamLimits

0xd401,	// (0x0007d13e) cam6_indi_pane_t1

0x984d,	// (0x0007958a) cam6_autofocus_pane_g1

0x9855,	// (0x00079592) cam6_autofocus_pane_g2

0x985d,	// (0x0007959a) cam6_autofocus_pane_g3

0x9865,	// (0x000795a2) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0007f8cc) cam6_autofocus_pane_g

0xd427,	// (0x0007d164) cam6_timer_pane_g1

0xd42f,	// (0x0007d16c) cam6_timer_pane_t1

0xd43d,	// (0x0007d17a) cam6_zoom_cont_pane

0xd445,	// (0x0007d182) cam6_zoom_pane_g1

0xd44d,	// (0x0007d18a) cam6_zoom_pane_g2

0x986d,	// (0x000795aa) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0007f8d5) cam6_zoom_pane_g

0x0395,	// (0x000700d2) cam6_battery_pane_g1

0x0395,	// (0x000700d2) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0007f44c) cam6_battery_pane_g

0xd455,	// (0x0007d192) cam6_zoom_cont_pane_g1

0xd45e,	// (0x0007d19b) cam6_zoom_cont_pane_g2

0xd467,	// (0x0007d1a4) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0007f8dc) cam6_zoom_cont_pane_g

0x988a,	// (0x000795c7) cam6_mode_pane_cp_ParamLimits

0x988a,	// (0x000795c7) cam6_mode_pane_cp

0x9801,	// (0x0007953e) cam6_zoom_pane_cp_ParamLimits

0x9801,	// (0x0007953e) cam6_zoom_pane_cp

0x989c,	// (0x000795d9) vid6_image_uncrop_cif_pane_ParamLimits

0x989c,	// (0x000795d9) vid6_image_uncrop_cif_pane

0x98ac,	// (0x000795e9) vid6_image_uncrop_nhd_pane_ParamLimits

0x98ac,	// (0x000795e9) vid6_image_uncrop_nhd_pane

0x97be,	// (0x000794fb) vid6_image_uncrop_vga_pane_ParamLimits

0x97be,	// (0x000794fb) vid6_image_uncrop_vga_pane

0x98bb,	// (0x000795f8) vid6_image_uncrop_wvga_pane_ParamLimits

0x98bb,	// (0x000795f8) vid6_image_uncrop_wvga_pane

0x98ca,	// (0x00079607) vid6_indi_pane_ParamLimits

0x98ca,	// (0x00079607) vid6_indi_pane

0xd3a7,	// (0x0007d0e4) bg_tb_trans_pane_cp09_ParamLimits

0xd3a7,	// (0x0007d0e4) bg_tb_trans_pane_cp09

0xd47f,	// (0x0007d1bc) cam6_battery_pane_cp_ParamLimits

0xd47f,	// (0x0007d1bc) cam6_battery_pane_cp

0xd48b,	// (0x0007d1c8) vid6_indi_pane_g1_ParamLimits

0xd48b,	// (0x0007d1c8) vid6_indi_pane_g1

0xd49d,	// (0x0007d1da) vid6_indi_pane_g2_ParamLimits

0xd49d,	// (0x0007d1da) vid6_indi_pane_g2

0xd4af,	// (0x0007d1ec) vid6_indi_pane_g3_ParamLimits

0xd4af,	// (0x0007d1ec) vid6_indi_pane_g3

0xd4c4,	// (0x0007d201) vid6_indi_pane_g4_ParamLimits

0xd4c4,	// (0x0007d201) vid6_indi_pane_g4

0xd4d9,	// (0x0007d216) vid6_indi_pane_g5_ParamLimits

0xd4d9,	// (0x0007d216) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0007f8e3) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0007f8e3) vid6_indi_pane_g

0xd4f3,	// (0x0007d230) vid6_indi_pane_t1_ParamLimits

0xd4f3,	// (0x0007d230) vid6_indi_pane_t1

0xd509,	// (0x0007d246) vid6_indi_pane_t2_ParamLimits

0xd509,	// (0x0007d246) vid6_indi_pane_t2

0xd531,	// (0x0007d26e) vid6_indi_pane_t3_ParamLimits

0xd531,	// (0x0007d26e) vid6_indi_pane_t3

0xd559,	// (0x0007d296) vid6_indi_pane_t4_ParamLimits

0xd559,	// (0x0007d296) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0007f8ee) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0007f8ee) vid6_indi_pane_t

0xd57d,	// (0x0007d2ba) wait_bar_pane_cp08

0x98e2,	// (0x0007961f) main_cset_text2_pane_t1_ParamLimits

0x98e2,	// (0x0007961f) main_cset_text2_pane_t1

0x9875,	// (0x000795b2) listscroll_gen_pane_cp06_t1_ParamLimits

0x9875,	// (0x000795b2) listscroll_gen_pane_cp06_t1

0x20b1,	// (0x00071dee) main_cam6_set_pane

0x05f8,	// (0x00070335) bg_tb_trans_pane_cp06_ParamLimits

0xef79,	// (0x0007ecb6) cam4_indicators_pane_g1_ParamLimits

0xef8a,	// (0x0007ecc7) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0007f662) cam4_indicators_pane_g_ParamLimits

0xefa8,	// (0x0007ece5) cam4_indicators_pane_t1_ParamLimits

0xcdeb,	// (0x0007cb28) bg_tb_trans_pane_cp07_ParamLimits

0x82e9,	// (0x00078026) vid4_indicators_pane_g1_ParamLimits

0x82f6,	// (0x00078033) vid4_indicators_pane_g2_ParamLimits

0x8303,	// (0x00078040) vid4_indicators_pane_g3_ParamLimits

0x8310,	// (0x0007804d) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0007f674) vid4_indicators_pane_g_ParamLimits

0x8328,	// (0x00078065) vid4_indicators_pane_t1_ParamLimits

0xf038,	// (0x0007ed75) vid4_progress_pane_g1_ParamLimits

0xf048,	// (0x0007ed85) vid4_progress_pane_g2_ParamLimits

0xb9f6,	// (0x0007b733) vid4_progress_pane_g3_ParamLimits

0xf058,	// (0x0007ed95) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0007f81f) vid4_progress_pane_g_ParamLimits

0xf076,	// (0x0007edb3) vid4_progress_pane_t1_ParamLimits

0xf08b,	// (0x0007edc8) vid4_progress_pane_t2_ParamLimits

0xf0a1,	// (0x0007edde) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0007f82a) vid4_progress_pane_t_ParamLimits

0xf0b6,	// (0x0007edf3) wait_bar_pane_cp07_ParamLimits

0x98ff,	// (0x0007963c) main_cam6_set_pane_g2_ParamLimits

0x98ff,	// (0x0007963c) main_cam6_set_pane_g2

0x9923,	// (0x00079660) main_cset6_listscroll_pane_ParamLimits

0x9923,	// (0x00079660) main_cset6_listscroll_pane

0x9943,	// (0x00079680) main_cset6_slider_pane_ParamLimits

0x9943,	// (0x00079680) main_cset6_slider_pane

0x9959,	// (0x00079696) main_cset6_text2_pane_ParamLimits

0x9959,	// (0x00079696) main_cset6_text2_pane

0xd58c,	// (0x0007d2c9) main_cset6_text_pane

0xd594,	// (0x0007d2d1) main_cset_list_pane_copy1_ParamLimits

0xd594,	// (0x0007d2d1) main_cset_list_pane_copy1

0xd5a4,	// (0x0007d2e1) scroll_pane_cp028_copy1

0x9967,	// (0x000796a4) cset_list_set_pane_copy1

0x9978,	// (0x000796b5) aid_position_infowindow_above_copy1

0x9980,	// (0x000796bd) aid_position_infowindow_below_copy1

0x9988,	// (0x000796c5) cset_list_set_pane_g1_copy1

0x1a60,	// (0x0007179d) cset_list_set_pane_g3_copy1_ParamLimits

0x1a60,	// (0x0007179d) cset_list_set_pane_g3_copy1

0x1a6f,	// (0x000717ac) cset_list_set_pane_t1_copy1_ParamLimits

0x1a6f,	// (0x000717ac) cset_list_set_pane_t1_copy1

0xaf36,	// (0x0007ac73) list_highlight_pane_cp021_copy1_ParamLimits

0xaf36,	// (0x0007ac73) list_highlight_pane_cp021_copy1

0xd5ad,	// (0x0007d2ea) cset6_slider_pane_ParamLimits

0xd5ad,	// (0x0007d2ea) cset6_slider_pane

0xd5d9,	// (0x0007d316) main_cset6_slider_pane_g1_ParamLimits

0xd5d9,	// (0x0007d316) main_cset6_slider_pane_g1

0x9990,	// (0x000796cd) main_cset6_slider_pane_g2_ParamLimits

0x9990,	// (0x000796cd) main_cset6_slider_pane_g2

0xd601,	// (0x0007d33e) main_cset6_slider_pane_g3_ParamLimits

0xd601,	// (0x0007d33e) main_cset6_slider_pane_g3

0x99b8,	// (0x000796f5) main_cset6_slider_pane_g4_ParamLimits

0x99b8,	// (0x000796f5) main_cset6_slider_pane_g4

0x99c4,	// (0x00079701) main_cset6_slider_pane_g5_ParamLimits

0x99c4,	// (0x00079701) main_cset6_slider_pane_g5

0x8b29,	// (0x00078866) main_cset6_slider_pane_g7_ParamLimits

0x8b29,	// (0x00078866) main_cset6_slider_pane_g7

0x8b35,	// (0x00078872) main_cset6_slider_pane_g8_ParamLimits

0x8b35,	// (0x00078872) main_cset6_slider_pane_g8

0x8b41,	// (0x0007887e) main_cset6_slider_pane_g9_ParamLimits

0x8b41,	// (0x0007887e) main_cset6_slider_pane_g9

0x8b4d,	// (0x0007888a) main_cset6_slider_pane_g10_ParamLimits

0x8b4d,	// (0x0007888a) main_cset6_slider_pane_g10

0x8b59,	// (0x00078896) main_cset6_slider_pane_g11_ParamLimits

0x8b59,	// (0x00078896) main_cset6_slider_pane_g11

0x8b65,	// (0x000788a2) main_cset6_slider_pane_g12_ParamLimits

0x8b65,	// (0x000788a2) main_cset6_slider_pane_g12

0x8b71,	// (0x000788ae) main_cset6_slider_pane_g13_ParamLimits

0x8b71,	// (0x000788ae) main_cset6_slider_pane_g13

0x8b7d,	// (0x000788ba) main_cset6_slider_pane_g14_ParamLimits

0x8b7d,	// (0x000788ba) main_cset6_slider_pane_g14

0x99d0,	// (0x0007970d) main_cset6_slider_pane_g15_ParamLimits

0x99d0,	// (0x0007970d) main_cset6_slider_pane_g15

0x8ba1,	// (0x000788de) main_cset6_slider_pane_g16_ParamLimits

0x8ba1,	// (0x000788de) main_cset6_slider_pane_g16

0x8bad,	// (0x000788ea) main_cset6_slider_pane_g17_ParamLimits

0x8bad,	// (0x000788ea) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0007f8f7) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0007f8f7) main_cset6_slider_pane_g

0xd60d,	// (0x0007d34a) main_cset6_slider_pane_t1_ParamLimits

0xd60d,	// (0x0007d34a) main_cset6_slider_pane_t1

0x9a00,	// (0x0007973d) main_cset6_slider_pane_t2_ParamLimits

0x9a00,	// (0x0007973d) main_cset6_slider_pane_t2

0x9a2b,	// (0x00079768) main_cset6_slider_pane_t3_ParamLimits

0x9a2b,	// (0x00079768) main_cset6_slider_pane_t3

0x9a56,	// (0x00079793) main_cset6_slider_pane_t4_ParamLimits

0x9a56,	// (0x00079793) main_cset6_slider_pane_t4

0x9a81,	// (0x000797be) main_cset6_slider_pane_t5_ParamLimits

0x9a81,	// (0x000797be) main_cset6_slider_pane_t5

0xd64e,	// (0x0007d38b) main_cset6_slider_pane_t7_ParamLimits

0xd64e,	// (0x0007d38b) main_cset6_slider_pane_t7

0x9aac,	// (0x000797e9) main_cset6_slider_pane_t8_ParamLimits

0x9aac,	// (0x000797e9) main_cset6_slider_pane_t8

0x9ad0,	// (0x0007980d) main_cset6_slider_pane_t9_ParamLimits

0x9ad0,	// (0x0007980d) main_cset6_slider_pane_t9

0x9af4,	// (0x00079831) main_cset6_slider_pane_t10_ParamLimits

0x9af4,	// (0x00079831) main_cset6_slider_pane_t10

0x9b18,	// (0x00079855) main_cset6_slider_pane_t11_ParamLimits

0x9b18,	// (0x00079855) main_cset6_slider_pane_t11

0xd684,	// (0x0007d3c1) main_cset6_slider_pane_t14_ParamLimits

0xd684,	// (0x0007d3c1) main_cset6_slider_pane_t14

0xd6bd,	// (0x0007d3fa) main_cset6_slider_pane_t15_ParamLimits

0xd6bd,	// (0x0007d3fa) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0007f91c) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0007f91c) main_cset6_slider_pane_t

0xce69,	// (0x0007cba6) cset_slider_pane_g1_copy1

0xce72,	// (0x0007cbaf) cset_slider_pane_g2_copy1

0xce7b,	// (0x0007cbb8) cset_slider_pane_g3_copy1

0x20b1,	// (0x00071dee) bg_popup_sub_pane_cp011_copy1

0xcef3,	// (0x0007cc30) main_cset_text_pane_g1_copy1

0xcefb,	// (0x0007cc38) main_cset_text_pane_t1_copy1

0xcf09,	// (0x0007cc46) main_cset_text_pane_t2_copy1

0xcf17,	// (0x0007cc54) main_cset_text_pane_t3_copy1

0xcf25,	// (0x0007cc62) main_cset_text_pane_t4_copy1

0xcf33,	// (0x0007cc70) main_cset_text_pane_t5_copy1

0xcf41,	// (0x0007cc7e) main_cset_text_pane_t6_copy1

0xcf4f,	// (0x0007cc8c) main_cset_text_pane_t7_copy1

0x9b3c,	// (0x00079879) main_cset_text2_pane_t1_copy1

0x20b1,	// (0x00071dee) main_ncimui_pane

0x5b78,	// (0x000758b5) popup_query_ncimui_window_ParamLimits

0x5b78,	// (0x000758b5) popup_query_ncimui_window

0xecd2,	// (0x0007ea0f) field_cale_ev2_pane_g4_ParamLimits

0xecd2,	// (0x0007ea0f) field_cale_ev2_pane_g4

0x7aa0,	// (0x000777dd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7aa0,	// (0x000777dd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0007f600) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0007f600) cell_video_dialer_keypad_pane_g

0x7ab8,	// (0x000777f5) cell_video_dialer_keypad_pane_t1

0x20b1,	// (0x00071dee) bg_popup_window_pane_cp012

0xb5b1,	// (0x0007b2ee) heading_pane_cp06

0xd7e5,	// (0x0007d522) ncim_query_content_pane

0x20b1,	// (0x00071dee) bg_popup_heading_pane_cp01

0xd7ed,	// (0x0007d52a) ncim_heading_pane_t1

0xd7fb,	// (0x0007d538) ncim_indicator_popup_pane

0xd80d,	// (0x0007d54a) ncim_query_button_pane

0xd821,	// (0x0007d55e) ncim_query_content_pane_t1

0xd833,	// (0x0007d570) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0007f95b) ncim_query_content_pane_t

0xd86d,	// (0x0007d5aa) ncim_query_list_pane

0xd87f,	// (0x0007d5bc) ncim_query_popup_pane

0xd7fb,	// (0x0007d538) ncim_indicator_popup_pane_ParamLimits

0x9c1e,	// (0x0007995b) ncim_query_content_pane_g1_ParamLimits

0x9c1e,	// (0x0007995b) ncim_query_content_pane_g1

0xd821,	// (0x0007d55e) ncim_query_content_pane_t1_ParamLimits

0xd833,	// (0x0007d570) ncim_query_content_pane_t2_ParamLimits

0x9c2a,	// (0x00079967) ncim_query_content_pane_t3_ParamLimits

0x9c2a,	// (0x00079967) ncim_query_content_pane_t3

0x9c52,	// (0x0007998f) ncim_query_content_pane_t4_ParamLimits

0x9c52,	// (0x0007998f) ncim_query_content_pane_t4

0x9c7a,	// (0x000799b7) ncim_query_content_pane_t5_ParamLimits

0x9c7a,	// (0x000799b7) ncim_query_content_pane_t5

0xd845,	// (0x0007d582) ncim_query_content_pane_t6_ParamLimits

0xd845,	// (0x0007d582) ncim_query_content_pane_t6

0xfc1e,	// (0x0007f95b) ncim_query_content_pane_t_ParamLimits

0xd86d,	// (0x0007d5aa) ncim_query_list_pane_ParamLimits

0xd87f,	// (0x0007d5bc) ncim_query_popup_pane_ParamLimits

0xd893,	// (0x0007d5d0) wait_bar_pane_cp04

0x20b1,	// (0x00071dee) input_focus_pane_cp011

0xd89b,	// (0x0007d5d8) ncim_query_popup_pane_t1

0xd8a9,	// (0x0007d5e6) ncim_list_query_list_pane_ParamLimits

0xd8a9,	// (0x0007d5e6) ncim_list_query_list_pane

0x20b1,	// (0x00071dee) bg_button_pane_cp027

0xd8b6,	// (0x0007d5f3) ncim_query_button_pane_g1

0x20b1,	// (0x00071dee) list_highlight_pane_cp012

0xd8c0,	// (0x0007d5fd) ncim_list_query_list_pane_g1

0xd8c8,	// (0x0007d605) ncim_list_query_list_pane_t1

0xef99,	// (0x0007ecd6) cam4_indicators_pane_g3_ParamLimits

0xef99,	// (0x0007ecd6) cam4_indicators_pane_g3

0x831c,	// (0x00078059) vid4_indicators_pane_g5_ParamLimits

0x831c,	// (0x00078059) vid4_indicators_pane_g5

0xf067,	// (0x0007eda4) vid4_progress_pane_g5_ParamLimits

0xf067,	// (0x0007eda4) vid4_progress_pane_g5

0x9b66,	// (0x000798a3) main_ncimui_pane_g1

0x9bac,	// (0x000798e9) ncimui_group_query_pane_ParamLimits

0x9bac,	// (0x000798e9) ncimui_group_query_pane

0x9be0,	// (0x0007991d) ncimui_list_pane_ParamLimits

0x9be0,	// (0x0007991d) ncimui_list_pane

0x9bfa,	// (0x00079937) ncimui_text_pane_ParamLimits

0x9bfa,	// (0x00079937) ncimui_text_pane

0x9ca2,	// (0x000799df) ncimui_text_pane_t1_ParamLimits

0x9ca2,	// (0x000799df) ncimui_text_pane_t1

0xd8d6,	// (0x0007d613) ncimui_list_single_graphic_pane_ParamLimits

0xd8d6,	// (0x0007d613) ncimui_list_single_graphic_pane

0x9cc8,	// (0x00079a05) ncimui_query_pane_ParamLimits

0x9cc8,	// (0x00079a05) ncimui_query_pane

0x20b1,	// (0x00071dee) list_highlight_pane_cp013

0xd8e6,	// (0x0007d623) ncim_list_query_list_pane_t1_copy1

0xd8c0,	// (0x0007d5fd) ncim_list_single_graphic_pane_g1

0xd8f4,	// (0x0007d631) ncim_query_button_pane_cp01

0xd8fc,	// (0x0007d639) ncim_query_entry_pane_ParamLimits

0xd8fc,	// (0x0007d639) ncim_query_entry_pane

0xd90c,	// (0x0007d649) ncimui_query_pane_g1

0xd914,	// (0x0007d651) ncimui_query_pane_t1_ParamLimits

0xd914,	// (0x0007d651) ncimui_query_pane_t1

0x20b1,	// (0x00071dee) input_focus_pane_cp012

0xd89b,	// (0x0007d5d8) ncim_query_entry_pane_t1

0x2da0,	// (0x00072add) main_im_pane_ParamLimits

0xaf36,	// (0x0007ac73) main_mobtv_pane_ParamLimits

0xaf36,	// (0x0007ac73) main_mobtv_pane

0x99e8,	// (0x00079725) main_cset6_slider_pane_g18_ParamLimits

0x99e8,	// (0x00079725) main_cset6_slider_pane_g18

0x99f4,	// (0x00079731) main_cset6_slider_pane_g19_ParamLimits

0x99f4,	// (0x00079731) main_cset6_slider_pane_g19

0xd92a,	// (0x0007d667) bg_main_mobtv_pane_ParamLimits

0xd92a,	// (0x0007d667) bg_main_mobtv_pane

0x9cd8,	// (0x00079a15) main_mobtv_info_pane

0x9ce1,	// (0x00079a1e) main_mobtv_loading_pane_ParamLimits

0x9ce1,	// (0x00079a1e) main_mobtv_loading_pane

0xd938,	// (0x0007d675) main_mobtv_pg_channel_list_pane

0xd942,	// (0x0007d67f) main_mobtv_pg_hdr_pane

0x9cee,	// (0x00079a2b) main_mobtv_programe_curr_pane_ParamLimits

0x9cee,	// (0x00079a2b) main_mobtv_programe_curr_pane

0x9cfb,	// (0x00079a38) main_mobtv_programe_next_pane_ParamLimits

0x9cfb,	// (0x00079a38) main_mobtv_programe_next_pane

0xd94b,	// (0x0007d688) popup_mobtv_noti_window

0x0395,	// (0x000700d2) main_tv_pg_hdr_pane_g1

0xd953,	// (0x0007d690) main_tv_pg_hdr_pane_g2

0xd95b,	// (0x0007d698) main_tv_pg_hdr_pane_g3

0xd963,	// (0x0007d6a0) main_tv_pg_hdr_pane_g4

0xd96b,	// (0x0007d6a8) main_tv_pg_hdr_pane_g5

0xd975,	// (0x0007d6b2) main_tv_pg_hdr_pane_g6

0xd97f,	// (0x0007d6bc) main_tv_pg_hdr_pane_g7

0xd989,	// (0x0007d6c6) main_tv_pg_hdr_pane_g8

0xd993,	// (0x0007d6d0) main_tv_pg_hdr_pane_g9

0xd99d,	// (0x0007d6da) main_tv_pg_hdr_pane_g10

0xd9a7,	// (0x0007d6e4) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0007f968) main_tv_pg_hdr_pane_g

0xd9b1,	// (0x0007d6ee) main_tv_pg_hdr_pane_t1

0xd9bf,	// (0x0007d6fc) main_tv_pg_hdr_pane_t2

0xd9cd,	// (0x0007d70a) main_tv_pg_hdr_pane_t3

0xd9dd,	// (0x0007d71a) main_tv_pg_hdr_pane_t4

0xd9ed,	// (0x0007d72a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0007f97f) main_tv_pg_hdr_pane_t

0xd9fd,	// (0x0007d73a) single_mobtv_pg_channel_pane_ParamLimits

0xd9fd,	// (0x0007d73a) single_mobtv_pg_channel_pane

0xda0f,	// (0x0007d74c) single_mobtv_pg_channel_table_pane

0xda18,	// (0x0007d755) single_mobtv_pg_channel_thumb_pane

0xda21,	// (0x0007d75e) single_tv_pg_channel_pane_g1

0xda2a,	// (0x0007d767) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0007f98a) single_tv_pg_channel_pane_g

0x05f8,	// (0x00070335) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x05f8,	// (0x00070335) bg_single_mobtv_pg_channel_thumb_pane

0xda33,	// (0x0007d770) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda33,	// (0x0007d770) single_mobtv_pg_channel_thumb_pane_g1

0xda41,	// (0x0007d77e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda41,	// (0x0007d77e) single_mobtv_pg_channel_thumb_pane_g2

0xda4d,	// (0x0007d78a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda4d,	// (0x0007d78a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0007f98f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0007f98f) single_mobtv_pg_channel_thumb_pane_g

0xda59,	// (0x0007d796) single_mobtv_pg_channel_thumb_pane_t1

0xda67,	// (0x0007d7a4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0007f996) single_mobtv_pg_channel_thumb_pane_t

0x0395,	// (0x000700d2) bg_single_mobtv_pg_channel_table_pane_g1

0x0395,	// (0x000700d2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0007f44c) bg_single_mobtv_pg_channel_table_pane_g

0xda75,	// (0x0007d7b2) single_mobtv_pg_channel_table_pane_t1

0xda83,	// (0x0007d7c0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0007f99b) single_mobtv_pg_channel_table_pane_t

0x9d10,	// (0x00079a4d) main_mobtv_info_pane_g1_ParamLimits

0x9d10,	// (0x00079a4d) main_mobtv_info_pane_g1

0x9d2e,	// (0x00079a6b) main_mobtv_info_pane_t1_ParamLimits

0x9d2e,	// (0x00079a6b) main_mobtv_info_pane_t1

0x9da6,	// (0x00079ae3) main_mobtv_info_pane_t2_ParamLimits

0x9da6,	// (0x00079ae3) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0007f9a5) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0007f9a5) main_mobtv_info_pane_t

0x9e35,	// (0x00079b72) wait_bar_pane_cp05

0x9e47,	// (0x00079b84) main_mobtv_loading_pane_g1_ParamLimits

0x9e47,	// (0x00079b84) main_mobtv_loading_pane_g1

0x9e5a,	// (0x00079b97) main_mobtv_loading_pane_g2_ParamLimits

0x9e5a,	// (0x00079b97) main_mobtv_loading_pane_g2

0x9e66,	// (0x00079ba3) main_mobtv_loading_pane_g3_ParamLimits

0x9e66,	// (0x00079ba3) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0007f9ac) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0007f9ac) main_mobtv_loading_pane_g

0xda91,	// (0x0007d7ce) main_mobtv_loading_pane_t1_ParamLimits

0xda91,	// (0x0007d7ce) main_mobtv_loading_pane_t1

0xdaa9,	// (0x0007d7e6) main_mobtv_loading_pane_t2_ParamLimits

0xdaa9,	// (0x0007d7e6) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0007f9b3) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0007f9b3) main_mobtv_loading_pane_t

0x9e79,	// (0x00079bb6) wait_bar_pane_cp06_ParamLimits

0x9e79,	// (0x00079bb6) wait_bar_pane_cp06

0xdacd,	// (0x0007d80a) main_mobtv_programe_curr_pane_t1

0xdadb,	// (0x0007d818) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0007f9b8) main_mobtv_programe_curr_pane_t

0xdae9,	// (0x0007d826) main_mobtv_programe_next_pane_t1

0xdaf7,	// (0x0007d834) main_mobtv_programe_next_pane_t2

0xdb05,	// (0x0007d842) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0007f9bd) main_mobtv_programe_next_pane_t

0x20b1,	// (0x00071dee) bg_popup_mobtv_noti_window_pane

0xdb13,	// (0x0007d850) popup_mobtv_noti_window_g1

0xdb1b,	// (0x0007d858) popup_mobtv_noti_window_t1

0xdb29,	// (0x0007d866) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0007f9c4) popup_mobtv_noti_window_t

0x0395,	// (0x000700d2) bg_popup_mobtv_noti_window_pane_g1

0x20b1,	// (0x00071dee) sc_clock_pane

0x20b1,	// (0x00071dee) main_fs_bigclock_pane

0x9629,	// (0x00079366) blid2_tripm_pane_t4_ParamLimits

0x9629,	// (0x00079366) blid2_tripm_pane_t4

0x9e88,	// (0x00079bc5) sc_clock_pane_g1_ParamLimits

0x9e88,	// (0x00079bc5) sc_clock_pane_g1

0x9e9a,	// (0x00079bd7) sc_clock_pane_t1_ParamLimits

0x9e9a,	// (0x00079bd7) sc_clock_pane_t1

0x9ebc,	// (0x00079bf9) sc_clock_pane_t2_ParamLimits

0x9ebc,	// (0x00079bf9) sc_clock_pane_t2

0x9ed4,	// (0x00079c11) sc_clock_pane_t3_ParamLimits

0x9ed4,	// (0x00079c11) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0007f9c9) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0007f9c9) sc_clock_pane_t

0xa74c,	// (0x0007a489) main_fs_bigclock_indicator_pane_ParamLimits

0xa74c,	// (0x0007a489) main_fs_bigclock_indicator_pane

0x05c8,	// (0x00070305) main_fs_bigclock_pane_g1_ParamLimits

0x05c8,	// (0x00070305) main_fs_bigclock_pane_g1

0xa758,	// (0x0007a495) main_fs_bigclock_pane_t1_ParamLimits

0xa758,	// (0x0007a495) main_fs_bigclock_pane_t1

0xa76a,	// (0x0007a4a7) main_fs_bigclock_pane_t2_ParamLimits

0xa76a,	// (0x0007a4a7) main_fs_bigclock_pane_t2

0xa77e,	// (0x0007a4bb) main_fs_bigclock_pane_t3_ParamLimits

0xa77e,	// (0x0007a4bb) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0007fbc8) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0007fbc8) main_fs_bigclock_pane_t

0xe739,	// (0x0007e476) main_fs_bigclock_indicator_pane_g1

0xd815,	// (0x0007d552) ncim_query_content_pane_g2_ParamLimits

0xd815,	// (0x0007d552) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0007f956) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0007f956) ncim_query_content_pane_g

0x9eeb,	// (0x00079c28) sc_clock_pane_t4_ParamLimits

0x9eeb,	// (0x00079c28) sc_clock_pane_t4

0xaf36,	// (0x0007ac73) main_radioblah_pane

0x8071,	// (0x00077dae) cell_call4_button_pane_t1_copy1_ParamLimits

0x8071,	// (0x00077dae) cell_call4_button_pane_t1_copy1

0x9b6e,	// (0x000798ab) main_ncimui_pane_t1_ParamLimits

0x9b6e,	// (0x000798ab) main_ncimui_pane_t1

0x9b80,	// (0x000798bd) main_ncimui_pane_t2_ParamLimits

0x9b80,	// (0x000798bd) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0007f94f) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0007f94f) main_ncimui_pane_t

0xdc57,	// (0x0007d994) main_radioblah_anim_pane_ParamLimits

0xdc57,	// (0x0007d994) main_radioblah_anim_pane

0xdc68,	// (0x0007d9a5) main_radioblah_info_pane_ParamLimits

0xdc68,	// (0x0007d9a5) main_radioblah_info_pane

0xdc7c,	// (0x0007d9b9) main_radioblah_pane_t1_ParamLimits

0xdc7c,	// (0x0007d9b9) main_radioblah_pane_t1

0xdc98,	// (0x0007d9d5) main_radioblah_pane_t2_ParamLimits

0xdc98,	// (0x0007d9d5) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0007f9ea) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0007f9ea) main_radioblah_pane_t

0x9f94,	// (0x00079cd1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9f94,	// (0x00079cd1) main_radioblah_rocker_ctrl_pane

0xdce0,	// (0x0007da1d) main_radioblah_info_pane_t1_ParamLimits

0xdce0,	// (0x0007da1d) main_radioblah_info_pane_t1

0x9fec,	// (0x00079d29) main_radioblah_info_pane_t2_ParamLimits

0x9fec,	// (0x00079d29) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0007f9f3) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0007f9f3) main_radioblah_info_pane_t

0x0395,	// (0x000700d2) main_radioblah_rocker_ctrl_pane_g1

0xa09c,	// (0x00079dd9) main_radioblah_rocker_ctrl_pane_g2

0xa0a4,	// (0x00079de1) main_radioblah_rocker_ctrl_pane_g3

0xa0ac,	// (0x00079de9) main_radioblah_rocker_ctrl_pane_g4

0xa0b4,	// (0x00079df1) main_radioblah_rocker_ctrl_pane_g5

0xa0bc,	// (0x00079df9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0007f9fc) main_radioblah_rocker_ctrl_pane_g

0x9b3c,	// (0x00079879) main_cset_text2_pane_t1_copy1_ParamLimits

0xef69,	// (0x0007eca6) cam4_image_uncrop_qvga_pane

0xefc2,	// (0x0007ecff) vid4_image_uncrop_qcif_pane

0xf0d0,	// (0x0007ee0d) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0d0,	// (0x0007ee0d) cam6_image_uncrop_qvga_pane

0xd46f,	// (0x0007d1ac) vid6_image_uncrop_qcif_pane_ParamLimits

0xd46f,	// (0x0007d1ac) vid6_image_uncrop_qcif_pane

0x20b1,	// (0x00071dee) bg_popup_preview_window_pane_cp03

0xd7c7,	// (0x0007d504) list_cset_text2_pane

0xd7cf,	// (0x0007d50c) main_cset6_text2_pane_g1

0xd7d7,	// (0x0007d514) main_cset6_text2_pane_t1

0xa0c4,	// (0x00079e01) list_cset_text2_pane_t1_ParamLimits

0xa0c4,	// (0x00079e01) list_cset_text2_pane_t1

0xaf36,	// (0x0007ac73) main_radioblah_pane_ParamLimits

0x9e21,	// (0x00079b5e) main_mobtv_info_pane_t3_ParamLimits

0x9e21,	// (0x00079b5e) main_mobtv_info_pane_t3

0x9f82,	// (0x00079cbf) main_radioblah_pane_g1

0x9fbc,	// (0x00079cf9) main_radioblah_info_pane_g1

0xa041,	// (0x00079d7e) main_radioblah_info_pane_t3_ParamLimits

0xa041,	// (0x00079d7e) main_radioblah_info_pane_t3

0x4690,	// (0x000743cd) highlight_cell_cale_month_pane_ParamLimits

0x4690,	// (0x000743cd) highlight_cell_cale_month_pane

0x20b1,	// (0x00071dee) main_phob_fisheye_pane

0x06da,	// (0x00070417) scroll_pane_cp0031_ParamLimits

0x06da,	// (0x00070417) scroll_pane_cp0031

0xd57d,	// (0x0007d2ba) wait_bar_pane_cp08_ParamLimits

0x9967,	// (0x000796a4) cset_list_set_pane_copy1_ParamLimits

0xdd1a,	// (0x0007da57) highlight_cell_cale_month_pane_g1

0xa0dd,	// (0x00079e1a) highlight_cell_cale_month_pane_t1

0xd1b7,	// (0x0007cef4) list_gen_pane_cp01

0x8a75,	// (0x000787b2) scroll_pane_01

0x1a84,	// (0x000717c1) list_single_double_fisheye_pane

0x1a8d,	// (0x000717ca) list_double_fisheye_pane_g1_ParamLimits

0x1a8d,	// (0x000717ca) list_double_fisheye_pane_g1

0x1a99,	// (0x000717d6) list_double_fisheye_pane_g2_ParamLimits

0x1a99,	// (0x000717d6) list_double_fisheye_pane_g2

0x1aad,	// (0x000717ea) list_double_fisheye_pane_g3_ParamLimits

0x1aad,	// (0x000717ea) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0007fa09) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0007fa09) list_double_fisheye_pane_g

0x1ad6,	// (0x00071813) list_double_fisheye_pane_t1_ParamLimits

0x1ad6,	// (0x00071813) list_double_fisheye_pane_t1

0x1af1,	// (0x0007182e) list_double_fisheye_pane_t2_ParamLimits

0x1af1,	// (0x0007182e) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0007fa14) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0007fa14) list_double_fisheye_pane_t

0x20b1,	// (0x00071dee) main_call5_pane

0x9f16,	// (0x00079c53) sc_swipe_pane_ParamLimits

0x9f16,	// (0x00079c53) sc_swipe_pane

0xa0fe,	// (0x00079e3b) call5_image_pane_ParamLimits

0xa0fe,	// (0x00079e3b) call5_image_pane

0xa11b,	// (0x00079e58) call5_swipe_1_pane_ParamLimits

0xa11b,	// (0x00079e58) call5_swipe_1_pane

0xa12e,	// (0x00079e6b) call5_swipe_2_pane_ParamLimits

0xa12e,	// (0x00079e6b) call5_swipe_2_pane

0xa159,	// (0x00079e96) popup_call5_audio_first_window_ParamLimits

0xa159,	// (0x00079e96) popup_call5_audio_first_window

0x05f8,	// (0x00070335) call5_swipe_1_pane_g1_ParamLimits

0x05f8,	// (0x00070335) call5_swipe_1_pane_g1

0xdd22,	// (0x0007da5f) call5_swipe_1_pane_g2_ParamLimits

0xdd22,	// (0x0007da5f) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0007fa19) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0007fa19) call5_swipe_1_pane_g

0xdd2e,	// (0x0007da6b) call5_swipe_1_pane_t1_ParamLimits

0xdd2e,	// (0x0007da6b) call5_swipe_1_pane_t1

0x05f8,	// (0x00070335) call5_swipe_2_pane_g1_ParamLimits

0x05f8,	// (0x00070335) call5_swipe_2_pane_g1

0xdd43,	// (0x0007da80) call5_swipe_2_pane_g2_ParamLimits

0xdd43,	// (0x0007da80) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0007fa1e) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0007fa1e) call5_swipe_2_pane_g

0xdd4f,	// (0x0007da8c) call5_swipe_2_pane_t1_ParamLimits

0xdd4f,	// (0x0007da8c) call5_swipe_2_pane_t1

0xdd64,	// (0x0007daa1) sc_swipe_pane_g1_ParamLimits

0xdd64,	// (0x0007daa1) sc_swipe_pane_g1

0xdd71,	// (0x0007daae) sc_swipe_pane_g2_ParamLimits

0xdd71,	// (0x0007daae) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0007fa23) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0007fa23) sc_swipe_pane_g

0xdd7d,	// (0x0007daba) sc_swipe_pane_t1_ParamLimits

0xdd7d,	// (0x0007daba) sc_swipe_pane_t1

0x20b1,	// (0x00071dee) main_cmail_launcher_pane

0xa16a,	// (0x00079ea7) aid_size_cell_cmail_l_ParamLimits

0xa16a,	// (0x00079ea7) aid_size_cell_cmail_l

0xa184,	// (0x00079ec1) grid_cmail_l_pane_ParamLimits

0xa184,	// (0x00079ec1) grid_cmail_l_pane

0xa19f,	// (0x00079edc) cell_cmail_l_pane_ParamLimits

0xa19f,	// (0x00079edc) cell_cmail_l_pane

0xa1c5,	// (0x00079f02) cell_cmail_l_pane_g1_ParamLimits

0xa1c5,	// (0x00079f02) cell_cmail_l_pane_g1

0xa1d1,	// (0x00079f0e) cell_cmail_l_pane_t1_ParamLimits

0xa1d1,	// (0x00079f0e) cell_cmail_l_pane_t1

0xdd92,	// (0x0007dacf) cell_cmail_l_pane_t2_ParamLimits

0xdd92,	// (0x0007dacf) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0007fa28) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0007fa28) cell_cmail_l_pane_t

0xaf36,	// (0x0007ac73) grid_highlight_pane_cp018_ParamLimits

0xaf36,	// (0x0007ac73) grid_highlight_pane_cp018

0x21cd,	// (0x00071f0a) main2_pane_ParamLimits

0x21cd,	// (0x00071f0a) main2_pane

0x2fc8,	// (0x00072d05) popup_sp_fs_action_menu_bg_pane_g1

0x2fd0,	// (0x00072d0d) popup_sp_fs_action_menu_bg_pane_g2

0x2fd8,	// (0x00072d15) popup_sp_fs_action_menu_bg_pane_g3

0x2fe0,	// (0x00072d1d) popup_sp_fs_action_menu_bg_pane_g4

0x2fe8,	// (0x00072d25) popup_sp_fs_action_menu_bg_pane_g5

0x2ff0,	// (0x00072d2d) popup_sp_fs_action_menu_bg_pane_g6

0x2ff8,	// (0x00072d35) popup_sp_fs_action_menu_bg_pane_g7

0x3000,	// (0x00072d3d) popup_sp_fs_action_menu_bg_pane_g8

0x3008,	// (0x00072d45) popup_sp_fs_action_menu_bg_pane_g9

0x3010,	// (0x00072d4d) popup_sp_fs_action_menu_bg_pane_g10

0x3010,	// (0x00072d4d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0007eef8) popup_sp_fs_action_menu_bg_pane_g

0xb03c,	// (0x0007ad79) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x2_t3_g3_g1

0xb048,	// (0x0007ad85) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb048,	// (0x0007ad85) list_medium_line_x2_t3_g3_g2

0xb054,	// (0x0007ad91) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb054,	// (0x0007ad91) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0007efa8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0007efa8) list_medium_line_x2_t3_g3_g

0xb060,	// (0x0007ad9d) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb060,	// (0x0007ad9d) list_medium_line_x2_t3_g3_t1

0x16f7,	// (0x00071434) list_medium_line_x2_t3_g3_t2_ParamLimits

0x16f7,	// (0x00071434) list_medium_line_x2_t3_g3_t2

0xb075,	// (0x0007adb2) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb075,	// (0x0007adb2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0007efaf) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0007efaf) list_medium_line_x2_t3_g3_t

0xb03c,	// (0x0007ad79) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x2_t3_g2_g1

0xb054,	// (0x0007ad91) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb054,	// (0x0007ad91) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0007efb6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0007efb6) list_medium_line_x2_t3_g2_g

0xb08a,	// (0x0007adc7) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb08a,	// (0x0007adc7) list_medium_line_x2_t3_g2_t1

0xb0a0,	// (0x0007addd) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb0a0,	// (0x0007addd) list_medium_line_x2_t3_g2_t2

0xb0b2,	// (0x0007adef) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb0b2,	// (0x0007adef) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0007efbb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0007efbb) list_medium_line_x2_t3_g2_t

0xb03c,	// (0x0007ad79) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x2_t4_g4_g1

0xb0cf,	// (0x0007ae0c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb0cf,	// (0x0007ae0c) list_medium_line_x2_t4_g4_g2

0xb048,	// (0x0007ad85) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb048,	// (0x0007ad85) list_medium_line_x2_t4_g4_g3

0xb0db,	// (0x0007ae18) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb0db,	// (0x0007ae18) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0007efc2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0007efc2) list_medium_line_x2_t4_g4_g

0x170b,	// (0x00071448) list_medium_line_x2_t4_g4_t1_ParamLimits

0x170b,	// (0x00071448) list_medium_line_x2_t4_g4_t1

0x1725,	// (0x00071462) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1725,	// (0x00071462) list_medium_line_x2_t4_g4_t2

0x173b,	// (0x00071478) list_medium_line_x2_t4_g4_t3_ParamLimits

0x173b,	// (0x00071478) list_medium_line_x2_t4_g4_t3

0xb0e7,	// (0x0007ae24) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb0e7,	// (0x0007ae24) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0007efcb) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0007efcb) list_medium_line_x2_t4_g4_t

0xb03c,	// (0x0007ad79) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x2_t2_g4_g1

0xb0cf,	// (0x0007ae0c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb0cf,	// (0x0007ae0c) list_medium_line_x2_t2_g4_g2

0xb048,	// (0x0007ad85) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb048,	// (0x0007ad85) list_medium_line_x2_t2_g4_g3

0xb054,	// (0x0007ad91) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb054,	// (0x0007ad91) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0007f032) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0007f032) list_medium_line_x2_t2_g4_g

0xb0f9,	// (0x0007ae36) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb0f9,	// (0x0007ae36) list_medium_line_x2_t2_g4_t1

0xb075,	// (0x0007adb2) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb075,	// (0x0007adb2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0007f03b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0007f03b) list_medium_line_x2_t2_g4_t

0xb03c,	// (0x0007ad79) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x2_t2_g3_g1

0xb048,	// (0x0007ad85) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb048,	// (0x0007ad85) list_medium_line_x2_t2_g3_g2

0xb054,	// (0x0007ad91) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb054,	// (0x0007ad91) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0007efa8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0007efa8) list_medium_line_x2_t2_g3_g

0xb10e,	// (0x0007ae4b) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb10e,	// (0x0007ae4b) list_medium_line_x2_t2_g3_t1

0xb075,	// (0x0007adb2) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb075,	// (0x0007adb2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0007f040) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0007f040) list_medium_line_x2_t2_g3_t

0x47d7,	// (0x00074514) main_sp_fs_list_pane_ParamLimits

0x47d7,	// (0x00074514) main_sp_fs_list_pane

0x47e3,	// (0x00074520) sp_fs_scroll_pane_ParamLimits

0x47e3,	// (0x00074520) sp_fs_scroll_pane

0x1750,	// (0x0007148d) list_medium_line_x2_t3_t1

0x1760,	// (0x0007149d) list_medium_line_x2_t3_t2

0xb352,	// (0x0007b08f) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0007f08b) list_medium_line_x2_t3_t

0x176e,	// (0x000714ab) list_medium_line_x3_t4_t1

0x177e,	// (0x000714bb) list_medium_line_x3_t4_t2

0xb360,	// (0x0007b09d) list_medium_line_x3_t4_t3

0xb352,	// (0x0007b08f) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0007f092) list_medium_line_x3_t4_t

0x178c,	// (0x000714c9) list_medium_line_x4_t5_t1

0x179c,	// (0x000714d9) list_medium_line_x4_t5_t2

0xb360,	// (0x0007b09d) list_medium_line_x4_t5_t3

0xb36e,	// (0x0007b0ab) list_medium_line_x4_t5_t4

0xb352,	// (0x0007b08f) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0007f09b) list_medium_line_x4_t5_t

0xb03c,	// (0x0007ad79) list_medium_line_t4_g4_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_t4_g4_g1

0xb0db,	// (0x0007ae18) list_medium_line_t4_g4_g2_ParamLimits

0xb0db,	// (0x0007ae18) list_medium_line_t4_g4_g2

0xb37c,	// (0x0007b0b9) list_medium_line_t4_g4_g3_ParamLimits

0xb37c,	// (0x0007b0b9) list_medium_line_t4_g4_g3

0xb054,	// (0x0007ad91) list_medium_line_t4_g4_g4_ParamLimits

0xb054,	// (0x0007ad91) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0007f0a6) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0007f0a6) list_medium_line_t4_g4_g

0xb388,	// (0x0007b0c5) list_medium_line_t4_g4_t1_ParamLimits

0xb388,	// (0x0007b0c5) list_medium_line_t4_g4_t1

0xb39d,	// (0x0007b0da) list_medium_line_t4_g4_t2_ParamLimits

0xb39d,	// (0x0007b0da) list_medium_line_t4_g4_t2

0xb3b2,	// (0x0007b0ef) list_medium_line_t4_g4_t3_ParamLimits

0xb3b2,	// (0x0007b0ef) list_medium_line_t4_g4_t3

0xb075,	// (0x0007adb2) list_medium_line_t4_g4_t4_ParamLimits

0xb075,	// (0x0007adb2) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0007f0af) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0007f0af) list_medium_line_t4_g4_t

0x48b2,	// (0x000745ef) chi_dic_find_pane_g1

0x594a,	// (0x00075687) main_tport_pane

0xce84,	// (0x0007cbc1) list_medium_line_plain_t1

0xce9a,	// (0x0007cbd7) list_medium_line_t2_g2_g1_ParamLimits

0xce9a,	// (0x0007cbd7) list_medium_line_t2_g2_g1

0xcea6,	// (0x0007cbe3) list_medium_line_t2_g2_g2_ParamLimits

0xcea6,	// (0x0007cbe3) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0007f76b) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0007f76b) list_medium_line_t2_g2_g

0x1951,	// (0x0007168e) list_medium_line_t2_g2_t1_ParamLimits

0x1951,	// (0x0007168e) list_medium_line_t2_g2_t1

0x196b,	// (0x000716a8) list_medium_line_t2_g2_t2_ParamLimits

0x196b,	// (0x000716a8) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0007f770) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0007f770) list_medium_line_t2_g2_t

0xd1c0,	// (0x0007cefd) aid_sp_fs_list_icon_a_sm

0xf0c8,	// (0x0007ee05) aid_sp_fs_list_icon_d

0xd1c8,	// (0x0007cf05) aid_sp_fs_text_primary

0xd1d1,	// (0x0007cf0e) aid_sp_fs_text_secondary

0xd1da,	// (0x0007cf17) list_medium_line

0xd1da,	// (0x0007cf17) list_medium_line_g2

0xd1da,	// (0x0007cf17) list_medium_line_g3

0xd1da,	// (0x0007cf17) list_medium_line_plain

0xd1da,	// (0x0007cf17) list_medium_line_plain_t2

0xd1da,	// (0x0007cf17) list_medium_line_plain_t3

0xd1da,	// (0x0007cf17) list_medium_line_right_icon

0xd1da,	// (0x0007cf17) list_medium_line_right_iconx2

0xd1da,	// (0x0007cf17) list_medium_line_t2

0xd1da,	// (0x0007cf17) list_medium_line_t2_g2

0xd1da,	// (0x0007cf17) list_medium_line_t2_g3

0xd1da,	// (0x0007cf17) list_medium_line_t2_right_icon

0xd1da,	// (0x0007cf17) list_medium_line_t2_right_iconx2

0xd1da,	// (0x0007cf17) list_medium_line_t3

0xd1da,	// (0x0007cf17) list_medium_line_t3_g2

0xd1da,	// (0x0007cf17) list_medium_line_t3_g3

0xd1da,	// (0x0007cf17) list_medium_line_t3_right_iconx2

0xd1e3,	// (0x0007cf20) list_medium_line_t4_g4

0xd1ec,	// (0x0007cf29) list_medium_line_x2

0xd1ec,	// (0x0007cf29) list_medium_line_x2_t2_g2

0xd1ec,	// (0x0007cf29) list_medium_line_x2_t2_g3

0xd1ec,	// (0x0007cf29) list_medium_line_x2_t2_g4

0xd1ec,	// (0x0007cf29) list_medium_line_x2_t3

0xd1ec,	// (0x0007cf29) list_medium_line_x2_t3_g2

0xd1ec,	// (0x0007cf29) list_medium_line_x2_t3_g3

0xd1ec,	// (0x0007cf29) list_medium_line_x2_t3_g4

0xd1ec,	// (0x0007cf29) list_medium_line_x2_t4_g2

0xd1ec,	// (0x0007cf29) list_medium_line_x2_t4_g4

0xd1f5,	// (0x0007cf32) list_medium_line_x3

0xd1f5,	// (0x0007cf32) list_medium_line_x3_t4

0xd1f5,	// (0x0007cf32) list_medium_line_x3_t4_g4

0xd1e3,	// (0x0007cf20) list_medium_line_x4_t4

0xd1e3,	// (0x0007cf20) list_medium_line_x4_t4_g7

0xd1e3,	// (0x0007cf20) list_medium_line_x4_t5

0xd1fe,	// (0x0007cf3b) list_single_fs_dyc_pane_ParamLimits

0xd1fe,	// (0x0007cf3b) list_single_fs_dyc_pane

0xb03c,	// (0x0007ad79) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x4_t4_g7_g1

0xd6f6,	// (0x0007d433) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd6f6,	// (0x0007d433) list_medium_line_x4_t4_g7_g2

0xd702,	// (0x0007d43f) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd702,	// (0x0007d43f) list_medium_line_x4_t4_g7_g3

0xd711,	// (0x0007d44e) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd711,	// (0x0007d44e) list_medium_line_x4_t4_g7_g4

0xd71d,	// (0x0007d45a) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd71d,	// (0x0007d45a) list_medium_line_x4_t4_g7_g5

0xd72c,	// (0x0007d469) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd72c,	// (0x0007d469) list_medium_line_x4_t4_g7_g6

0xd73b,	// (0x0007d478) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd73b,	// (0x0007d478) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0007f935) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0007f935) list_medium_line_x4_t4_g7_g

0xd747,	// (0x0007d484) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd747,	// (0x0007d484) list_medium_line_x4_t4_g7_t1

0xd75c,	// (0x0007d499) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd75c,	// (0x0007d499) list_medium_line_x4_t4_g7_t2

0xd771,	// (0x0007d4ae) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd771,	// (0x0007d4ae) list_medium_line_x4_t4_g7_t3

0xd786,	// (0x0007d4c3) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd786,	// (0x0007d4c3) list_medium_line_x4_t4_g7_t4

0xd798,	// (0x0007d4d5) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd798,	// (0x0007d4d5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0007f944) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0007f944) list_medium_line_x4_t4_g7_t

0xd7aa,	// (0x0007d4e7) list_single_dyc_row_pane_ParamLimits

0xd7aa,	// (0x0007d4e7) list_single_dyc_row_pane

0xa0eb,	// (0x00079e28) call5_gesture_pane_ParamLimits

0xa0eb,	// (0x00079e28) call5_gesture_pane

0xa141,	// (0x00079e7e) call5_windows_pane_ParamLimits

0xa141,	// (0x00079e7e) call5_windows_pane

0xa1e7,	// (0x00079f24) call5_swipe_1_pane_cp_ParamLimits

0xa1e7,	// (0x00079f24) call5_swipe_1_pane_cp

0xa1f3,	// (0x00079f30) call5_swipe_2_pane_cp_ParamLimits

0xa1f3,	// (0x00079f30) call5_swipe_2_pane_cp

0xb81d,	// (0x0007b55a) call5_image_pane_cp

0xa1ff,	// (0x00079f3c) popup_call5_audio_first_window_cp_ParamLimits

0xa1ff,	// (0x00079f3c) popup_call5_audio_first_window_cp

0xdd64,	// (0x0007daa1) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd64,	// (0x0007daa1) call5_swipe_1_pane_g1_cp

0xdda4,	// (0x0007dae1) call5_swipe_1_pane_g2_cp

0xdd7d,	// (0x0007daba) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd7d,	// (0x0007daba) call5_swipe_1_pane_t1_cp

0xdd64,	// (0x0007daa1) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd64,	// (0x0007daa1) call5_swipe_2_pane_g1_cp

0xddac,	// (0x0007dae9) call5_swipe_2_pane_g2_cp

0xddb4,	// (0x0007daf1) call5_swipe_2_pane_t1_cp_ParamLimits

0xddb4,	// (0x0007daf1) call5_swipe_2_pane_t1_cp

0xaf36,	// (0x0007ac73) main_sp_fs_email_pane

0xddc9,	// (0x0007db06) main_sp_fs_listscroll_pane_te

0xddd2,	// (0x0007db0f) popup_sp_fs_action_menu_pane_ParamLimits

0xddd2,	// (0x0007db0f) popup_sp_fs_action_menu_pane

0x0395,	// (0x000700d2) bg_sp_fs_ctrlbar_pane_g1

0xde16,	// (0x0007db53) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xde1f,	// (0x0007db5c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xde28,	// (0x0007db65) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0395,	// (0x000700d2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0007fa2d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xebf9,	// (0x0007e936) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xebf9,	// (0x0007e936) bg_sp_fs_ctrlbar_ddmenu_pane

0xde31,	// (0x0007db6e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde31,	// (0x0007db6e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde3d,	// (0x0007db7a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde3d,	// (0x0007db7a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0007fa36) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0007fa36) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde49,	// (0x0007db86) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde49,	// (0x0007db86) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xde63,	// (0x0007dba0) list_medium_line_t2_right_icon_g1

0x1b13,	// (0x00071850) list_medium_line_t2_right_icon_t1

0x1b23,	// (0x00071860) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0007fa3b) list_medium_line_t2_right_icon_t

0xcc6b,	// (0x0007c9a8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcc6b,	// (0x0007c9a8) bg_sp_fs_ctrlbar_pane

0xa255,	// (0x00079f92) main_sp_fs_ctrlbar_button_pane_cp01

0xa25d,	// (0x00079f9a) main_sp_fs_ctrlbar_ddmenu_pane

0xdea3,	// (0x0007dbe0) main_sp_fs_ctrlbar_pane_g1

0xdeaf,	// (0x0007dbec) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0007fa40) main_sp_fs_ctrlbar_pane_g

0xdebb,	// (0x0007dbf8) main_sp_fs_ctrlbar_pane_t1

0x1b31,	// (0x0007186e) main_sp_fs_ctrlbar_pane

0x1b55,	// (0x00071892) main_sp_fs_listscroll_pane_te_cp01

0x1b75,	// (0x000718b2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1b75,	// (0x000718b2) popup_sp_fs_action_menu_pane_cp01

0xaf36,	// (0x0007ac73) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaf36,	// (0x0007ac73) bg_sp_fs_highlight_list_pane_cp01

0xded0,	// (0x0007dc0d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xded0,	// (0x0007dc0d) sp_fs_action_menu_list_gene_pane_g1

0xdedf,	// (0x0007dc1c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdedf,	// (0x0007dc1c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0007fa45) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0007fa45) sp_fs_action_menu_list_gene_pane_g

0xdeec,	// (0x0007dc29) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdeec,	// (0x0007dc29) sp_fs_action_menu_list_gene_pane_t1

0xdf04,	// (0x0007dc41) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdf04,	// (0x0007dc41) sp_fs_action_menu_list_gene_pane

0xdf25,	// (0x0007dc62) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdf25,	// (0x0007dc62) popup_sp_fs_action_menu_bg_pane

0xdf33,	// (0x0007dc70) sp_fs_action_menu_list_pane_ParamLimits

0xdf33,	// (0x0007dc70) sp_fs_action_menu_list_pane

0xdf55,	// (0x0007dc92) sp_fs_scroll_pane_cp01_ParamLimits

0xdf55,	// (0x0007dc92) sp_fs_scroll_pane_cp01

0x1b91,	// (0x000718ce) list_medium_line_plain_t2_t1

0x1ba1,	// (0x000718de) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0007fa4a) list_medium_line_plain_t2_t

0x1bb1,	// (0x000718ee) list_medium_line_plain_t3_t1

0x1bc1,	// (0x000718fe) list_medium_line_plain_t3_t2

0x1bcf,	// (0x0007190c) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0007fa4f) list_medium_line_plain_t3_t

0xb03c,	// (0x0007ad79) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x2_t2_g2_g1

0xb054,	// (0x0007ad91) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb054,	// (0x0007ad91) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0007efb6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0007efb6) list_medium_line_x2_t2_g2_g

0xb388,	// (0x0007b0c5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb388,	// (0x0007b0c5) list_medium_line_x2_t2_g2_t1

0xb075,	// (0x0007adb2) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb075,	// (0x0007adb2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0007fa56) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0007fa56) list_medium_line_x2_t2_g2_t

0xb03c,	// (0x0007ad79) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x2_t4_g2_g1

0xdf7b,	// (0x0007dcb8) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdf7b,	// (0x0007dcb8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0007fa5b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0007fa5b) list_medium_line_x2_t4_g2_g

0x1bdd,	// (0x0007191a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1bdd,	// (0x0007191a) list_medium_line_x2_t4_g2_t1

0x1bf7,	// (0x00071934) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1bf7,	// (0x00071934) list_medium_line_x2_t4_g2_t2

0x1c0c,	// (0x00071949) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1c0c,	// (0x00071949) list_medium_line_x2_t4_g2_t3

0xb075,	// (0x0007adb2) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb075,	// (0x0007adb2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x0007fa60) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x0007fa60) list_medium_line_x2_t4_g2_t

0xdf8d,	// (0x0007dcca) list_medium_line_t3_right_iconx2_g1

0xde63,	// (0x0007dba0) list_medium_line_t3_right_iconx2_g2

0x1c21,	// (0x0007195e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0007fa69) list_medium_line_t3_right_iconx2_g

0x1c2b,	// (0x00071968) list_medium_line_t3_right_iconx2_t1

0x1c3b,	// (0x00071978) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x0007fa70) list_medium_line_t3_right_iconx2_t

0xb03c,	// (0x0007ad79) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x3_t4_g4_g1

0xb048,	// (0x0007ad85) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb048,	// (0x0007ad85) list_medium_line_x3_t4_g4_g2

0xb0db,	// (0x0007ae18) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb0db,	// (0x0007ae18) list_medium_line_x3_t4_g4_g3

0xdf95,	// (0x0007dcd2) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdf95,	// (0x0007dcd2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x0007fa75) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x0007fa75) list_medium_line_x3_t4_g4_g

0x1c49,	// (0x00071986) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1c49,	// (0x00071986) list_medium_line_x3_t4_g4_t1

0x1c60,	// (0x0007199d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1c60,	// (0x0007199d) list_medium_line_x3_t4_g4_t2

0xb39d,	// (0x0007b0da) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb39d,	// (0x0007b0da) list_medium_line_x3_t4_g4_t3

0xdfa1,	// (0x0007dcde) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdfa1,	// (0x0007dcde) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x0007fa7e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x0007fa7e) list_medium_line_x3_t4_g4_t

0x1c79,	// (0x000719b6) list_single_dyc_row_text_pane_t1_ParamLimits

0x1c79,	// (0x000719b6) list_single_dyc_row_text_pane_t1

0x1cc2,	// (0x000719ff) list_single_dyc_row_text_pane_t2_ParamLimits

0x1cc2,	// (0x000719ff) list_single_dyc_row_text_pane_t2

0xdfbe,	// (0x0007dcfb) list_single_dyc_row_text_pane_t3_ParamLimits

0xdfbe,	// (0x0007dcfb) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x0007fa87) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x0007fa87) list_single_dyc_row_text_pane_t

0xdfd0,	// (0x0007dd0d) list_single_dyc_row_pane_g1_ParamLimits

0xdfd0,	// (0x0007dd0d) list_single_dyc_row_pane_g1

0xdfdc,	// (0x0007dd19) list_single_dyc_row_pane_g2_ParamLimits

0xdfdc,	// (0x0007dd19) list_single_dyc_row_pane_g2

0xdfe8,	// (0x0007dd25) list_single_dyc_row_pane_g3_ParamLimits

0xdfe8,	// (0x0007dd25) list_single_dyc_row_pane_g3

0xdff4,	// (0x0007dd31) list_single_dyc_row_pane_g4_ParamLimits

0xdff4,	// (0x0007dd31) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x0007fa8e) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x0007fa8e) list_single_dyc_row_pane_g

0xe000,	// (0x0007dd3d) list_single_dyc_row_text_pane_ParamLimits

0xe000,	// (0x0007dd3d) list_single_dyc_row_text_pane

0x20b1,	// (0x00071dee) bg_sp_fs_scroll_pane

0xe01f,	// (0x0007dd5c) thumb_sp_fs_scroll_pane

0xce9a,	// (0x0007cbd7) list_medium_line_g1_ParamLimits

0xce9a,	// (0x0007cbd7) list_medium_line_g1

0xe028,	// (0x0007dd65) list_medium_line_t1_ParamLimits

0xe028,	// (0x0007dd65) list_medium_line_t1

0xb03c,	// (0x0007ad79) list_medium_line_x2_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x2_g1

0xb048,	// (0x0007ad85) list_medium_line_x2_g2_ParamLimits

0xb048,	// (0x0007ad85) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x0007fa97) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x0007fa97) list_medium_line_x2_g

0xe03d,	// (0x0007dd7a) list_medium_line_x2_t1_ParamLimits

0xe03d,	// (0x0007dd7a) list_medium_line_x2_t1

0xb03c,	// (0x0007ad79) list_medium_line_x3_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x3_g1

0xb048,	// (0x0007ad85) list_medium_line_x3_g2_ParamLimits

0xb048,	// (0x0007ad85) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x0007fa97) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x0007fa97) list_medium_line_x3_g

0xe03d,	// (0x0007dd7a) list_medium_line_x3_t1_ParamLimits

0xe03d,	// (0x0007dd7a) list_medium_line_x3_t1

0xe053,	// (0x0007dd90) thumb_sp_fs_scroll_pane_g1

0xe05c,	// (0x0007dd99) thumb_sp_fs_scroll_pane_g2

0xe065,	// (0x0007dda2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0007fa9c) thumb_sp_fs_scroll_pane_g

0xe053,	// (0x0007dd90) bg_sp_fs_scroll_pane_g1

0xe05c,	// (0x0007dd99) bg_sp_fs_scroll_pane_g2

0xe065,	// (0x0007dda2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0007fa9c) bg_sp_fs_scroll_pane_g

0xb03c,	// (0x0007ad79) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb03c,	// (0x0007ad79) list_medium_line_x2_t3_g4_g1

0xb0cf,	// (0x0007ae0c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb0cf,	// (0x0007ae0c) list_medium_line_x2_t3_g4_g2

0xb048,	// (0x0007ad85) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb048,	// (0x0007ad85) list_medium_line_x2_t3_g4_g3

0xb054,	// (0x0007ad91) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb054,	// (0x0007ad91) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0007f032) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0007f032) list_medium_line_x2_t3_g4_g

0x1d1c,	// (0x00071a59) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1d1c,	// (0x00071a59) list_medium_line_x2_t3_g4_t1

0x1d32,	// (0x00071a6f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1d32,	// (0x00071a6f) list_medium_line_x2_t3_g4_t2

0xb075,	// (0x0007adb2) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb075,	// (0x0007adb2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0007faa3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0007faa3) list_medium_line_x2_t3_g4_t

0xce9a,	// (0x0007cbd7) list_medium_line_g2_g1_ParamLimits

0xce9a,	// (0x0007cbd7) list_medium_line_g2_g1

0xcea6,	// (0x0007cbe3) list_medium_line_g2_g2_ParamLimits

0xcea6,	// (0x0007cbe3) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0007f76b) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0007f76b) list_medium_line_g2_g

0xe06e,	// (0x0007ddab) list_medium_line_g2_t1_ParamLimits

0xe06e,	// (0x0007ddab) list_medium_line_g2_t1

0xce9a,	// (0x0007cbd7) list_medium_line_t3_g2_g1_ParamLimits

0xce9a,	// (0x0007cbd7) list_medium_line_t3_g2_g1

0xcea6,	// (0x0007cbe3) list_medium_line_t3_g2_g2_ParamLimits

0xcea6,	// (0x0007cbe3) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0007f76b) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0007f76b) list_medium_line_t3_g2_g

0x1d4c,	// (0x00071a89) list_medium_line_t3_g2_t1_ParamLimits

0x1d4c,	// (0x00071a89) list_medium_line_t3_g2_t1

0x1d63,	// (0x00071aa0) list_medium_line_t3_g2_t2_ParamLimits

0x1d63,	// (0x00071aa0) list_medium_line_t3_g2_t2

0x1d78,	// (0x00071ab5) list_medium_line_t3_g2_t3_ParamLimits

0x1d78,	// (0x00071ab5) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0007faaa) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0007faaa) list_medium_line_t3_g2_t

0xde63,	// (0x0007dba0) list_medium_line_right_icon_g1

0xe083,	// (0x0007ddc0) list_medium_line_right_icon_t1

0xce9a,	// (0x0007cbd7) list_medium_line_t2_g1_ParamLimits

0xce9a,	// (0x0007cbd7) list_medium_line_t2_g1

0x1d91,	// (0x00071ace) list_medium_line_t2_t1_ParamLimits

0x1d91,	// (0x00071ace) list_medium_line_t2_t1

0x1dab,	// (0x00071ae8) list_medium_line_t2_t2_ParamLimits

0x1dab,	// (0x00071ae8) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0007fab1) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0007fab1) list_medium_line_t2_t

0xce9a,	// (0x0007cbd7) list_medium_line_t3_g1_ParamLimits

0xce9a,	// (0x0007cbd7) list_medium_line_t3_g1

0x1dc0,	// (0x00071afd) list_medium_line_t3_t1_ParamLimits

0x1dc0,	// (0x00071afd) list_medium_line_t3_t1

0x1dda,	// (0x00071b17) list_medium_line_t3_t2_ParamLimits

0x1dda,	// (0x00071b17) list_medium_line_t3_t2

0x1def,	// (0x00071b2c) list_medium_line_t3_t3_ParamLimits

0x1def,	// (0x00071b2c) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0007fab6) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0007fab6) list_medium_line_t3_t

0xce9a,	// (0x0007cbd7) list_medium_line_g3_g1_ParamLimits

0xce9a,	// (0x0007cbd7) list_medium_line_g3_g1

0xe091,	// (0x0007ddce) list_medium_line_g3_g2_ParamLimits

0xe091,	// (0x0007ddce) list_medium_line_g3_g2

0xcea6,	// (0x0007cbe3) list_medium_line_g3_g3_ParamLimits

0xcea6,	// (0x0007cbe3) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0007fabd) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0007fabd) list_medium_line_g3_g

0xe09d,	// (0x0007ddda) list_medium_line_g3_t1_ParamLimits

0xe09d,	// (0x0007ddda) list_medium_line_g3_t1

0xce9a,	// (0x0007cbd7) list_medium_line_t2_g3_g1_ParamLimits

0xce9a,	// (0x0007cbd7) list_medium_line_t2_g3_g1

0xe091,	// (0x0007ddce) list_medium_line_t2_g3_g2_ParamLimits

0xe091,	// (0x0007ddce) list_medium_line_t2_g3_g2

0xcea6,	// (0x0007cbe3) list_medium_line_t2_g3_g3_ParamLimits

0xcea6,	// (0x0007cbe3) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0007fabd) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0007fabd) list_medium_line_t2_g3_g

0x1e04,	// (0x00071b41) list_medium_line_t2_g3_t1_ParamLimits

0x1e04,	// (0x00071b41) list_medium_line_t2_g3_t1

0x1e1e,	// (0x00071b5b) list_medium_line_t2_g3_t2_ParamLimits

0x1e1e,	// (0x00071b5b) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0007fac4) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0007fac4) list_medium_line_t2_g3_t

0xce9a,	// (0x0007cbd7) list_medium_line_t3_g3_g1_ParamLimits

0xce9a,	// (0x0007cbd7) list_medium_line_t3_g3_g1

0xe091,	// (0x0007ddce) list_medium_line_t3_g3_g2_ParamLimits

0xe091,	// (0x0007ddce) list_medium_line_t3_g3_g2

0xcea6,	// (0x0007cbe3) list_medium_line_t3_g3_g3_ParamLimits

0xcea6,	// (0x0007cbe3) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0007fabd) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0007fabd) list_medium_line_t3_g3_g

0x1e35,	// (0x00071b72) list_medium_line_t3_g3_t1_ParamLimits

0x1e35,	// (0x00071b72) list_medium_line_t3_g3_t1

0x1e49,	// (0x00071b86) list_medium_line_t3_g3_t2_ParamLimits

0x1e49,	// (0x00071b86) list_medium_line_t3_g3_t2

0x1e5b,	// (0x00071b98) list_medium_line_t3_g3_t3_ParamLimits

0x1e5b,	// (0x00071b98) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0007fac9) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0007fac9) list_medium_line_t3_g3_t

0xdf8d,	// (0x0007dcca) list_medium_line_right_iconx2_g1

0xde63,	// (0x0007dba0) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0007fad0) list_medium_line_right_iconx2_g

0xe0b2,	// (0x0007ddef) list_medium_line_right_iconx2_t1

0xdf8d,	// (0x0007dcca) list_medium_line_t2_right_iconx2_g1

0xde63,	// (0x0007dba0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0007fad0) list_medium_line_t2_right_iconx2_g

0x1e6f,	// (0x00071bac) list_medium_line_t2_right_iconx2_t1

0x1e7f,	// (0x00071bbc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x0007fad5) list_medium_line_t2_right_iconx2_t

0xe0c0,	// (0x0007ddfd) list_medium_line_x4_t4_t1

0x1e8d,	// (0x00071bca) list_medium_line_x4_t4_t2

0x1e9d,	// (0x00071bda) list_medium_line_x4_t4_t3

0x1ead,	// (0x00071bea) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0007fada) list_medium_line_x4_t4_t

0xa2aa,	// (0x00079fe7) tport_appsw_pane_ParamLimits

0xa2aa,	// (0x00079fe7) tport_appsw_pane

0xa2bb,	// (0x00079ff8) tport_contact_pane_ParamLimits

0xa2bb,	// (0x00079ff8) tport_contact_pane

0xa2d4,	// (0x0007a011) tport_listscroll_pane_ParamLimits

0xa2d4,	// (0x0007a011) tport_listscroll_pane

0xa2ef,	// (0x0007a02c) cell_tport_appsw_pane_ParamLimits

0xa2ef,	// (0x0007a02c) cell_tport_appsw_pane

0x8588,	// (0x000782c5) tport_appsw_pane_g1_ParamLimits

0x8588,	// (0x000782c5) tport_appsw_pane_g1

0xe0ce,	// (0x0007de0b) tport_contact_pane_g1

0xd89b,	// (0x0007d5d8) tport_contact_pane_t1

0xe0d7,	// (0x0007de14) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0007fae3) tport_contact_pane_t

0xe0e5,	// (0x0007de22) list_tport_pane

0xe0ee,	// (0x0007de2b) scroll_pane_cp_030

0xe0ff,	// (0x0007de3c) cell_tport_appsw_pane_g1

0xe10f,	// (0x0007de4c) cell_tport_appsw_pane_t1

0x20b1,	// (0x00071dee) grid_highlight_pane_cp019

0xa32f,	// (0x0007a06c) list_tport_double_graphic_pane_ParamLimits

0xa32f,	// (0x0007a06c) list_tport_double_graphic_pane

0xaf36,	// (0x0007ac73) list_highlight_pane_cp023_ParamLimits

0xaf36,	// (0x0007ac73) list_highlight_pane_cp023

0xa33c,	// (0x0007a079) list_tport_double_graphic_pane_g1_ParamLimits

0xa33c,	// (0x0007a079) list_tport_double_graphic_pane_g1

0xa349,	// (0x0007a086) list_tport_double_graphic_pane_t1_ParamLimits

0xa349,	// (0x0007a086) list_tport_double_graphic_pane_t1

0xa35e,	// (0x0007a09b) list_tport_double_graphic_pane_t2_ParamLimits

0xa35e,	// (0x0007a09b) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0007faef) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0007faef) list_tport_double_graphic_pane_t

0x20b1,	// (0x00071dee) main_cale_note_pane

0x853d,	// (0x0007827a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x853d,	// (0x0007827a) cell_vitu2_function_top_wide_pane_cp01

0x9e35,	// (0x00079b72) wait_bar_pane_cp05_ParamLimits

0x20b1,	// (0x00071dee) listscroll_cmail_pane

0xe125,	// (0x0007de62) list_cmail_pane

0xa37a,	// (0x0007a0b7) list_cmail_body_pane

0xe13d,	// (0x0007de7a) list_single_cmail_header_caption_pane

0xa38e,	// (0x0007a0cb) list_single_cmail_header_detail_pane_ParamLimits

0xa38e,	// (0x0007a0cb) list_single_cmail_header_detail_pane

0xa3b8,	// (0x0007a0f5) list_single_cmail_header_caption_pane_t1

0x1ebd,	// (0x00071bfa) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1ebd,	// (0x00071bfa) list_single_cmail_header_detail_pane_g1

0xf0de,	// (0x0007ee1b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0de,	// (0x0007ee1b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0007faf4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0007faf4) list_single_cmail_header_detail_pane_g

0xe16c,	// (0x0007dea9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe16c,	// (0x0007dea9) list_single_cmail_header_detail_pane_t1

0xe1a6,	// (0x0007dee3) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe1a6,	// (0x0007dee3) list_single_cmail_header_editor_pane_bg

0xda2a,	// (0x0007d767) list_cmail_body_pane_g1

0xe1b8,	// (0x0007def5) list_cmail_body_pane_t1

0x864e,	// (0x0007838b) list_single_cmail_header_editor_pane_bg_g1

0x3e45,	// (0x00073b82) list_single_cmail_header_editor_pane_bg_g1_copy1

0x865e,	// (0x0007839b) list_single_cmail_header_editor_pane_bg_g1_copy2

0x8656,	// (0x00078393) list_single_cmail_header_editor_pane_bg_g1_copy3

0xce92,	// (0x0007cbcf) list_single_cmail_header_editor_pane_bg_g1_copy4

0x867e,	// (0x000783bb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x866e,	// (0x000783ab) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x8676,	// (0x000783b3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3e25,	// (0x00073b62) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa3c8,	// (0x0007a105) calenote_gesture_pane_ParamLimits

0xa3c8,	// (0x0007a105) calenote_gesture_pane

0xa3e8,	// (0x0007a125) calenote_window_pane_ParamLimits

0xa3e8,	// (0x0007a125) calenote_window_pane

0xe1c6,	// (0x0007df03) popup_note_window_cp01

0xa404,	// (0x0007a141) calenote_swipe_1_pane_ParamLimits

0xa404,	// (0x0007a141) calenote_swipe_1_pane

0xa1f3,	// (0x00079f30) calenote_swipe_2_pane_ParamLimits

0xa1f3,	// (0x00079f30) calenote_swipe_2_pane

0xdd64,	// (0x0007daa1) calenote_swipe_1_pane_g1_ParamLimits

0xdd64,	// (0x0007daa1) calenote_swipe_1_pane_g1

0xdd71,	// (0x0007daae) calenote_swipe_1_pane_g2_ParamLimits

0xdd71,	// (0x0007daae) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0007fa23) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0007fa23) calenote_swipe_1_pane_g

0xe1d8,	// (0x0007df15) calenote_swipe_1_pane_t1_ParamLimits

0xe1d8,	// (0x0007df15) calenote_swipe_1_pane_t1

0xdd64,	// (0x0007daa1) calenote_swipe_2_pane_g1_ParamLimits

0xdd64,	// (0x0007daa1) calenote_swipe_2_pane_g1

0xe1f7,	// (0x0007df34) calenote_swipe_2_pane_g2_ParamLimits

0xe1f7,	// (0x0007df34) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0007fb00) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0007fb00) calenote_swipe_2_pane_g

0xe203,	// (0x0007df40) calenote_swipe_2_pane_t1_ParamLimits

0xe203,	// (0x0007df40) calenote_swipe_2_pane_t1

0x20b1,	// (0x00071dee) main_mup_navstr_pane

0x6cdc,	// (0x00076a19) main_mup3_pane_t7_ParamLimits

0x6cdc,	// (0x00076a19) main_mup3_pane_t7

0xed93,	// (0x0007ead0) main_mp4_pane_g6_ParamLimits

0xed93,	// (0x0007ead0) main_mp4_pane_g6

0xef37,	// (0x0007ec74) main_image3_pane_t4_ParamLimits

0xef37,	// (0x0007ec74) main_image3_pane_t4

0xa419,	// (0x0007a156) popup_navstr_preview_pane_ParamLimits

0xa419,	// (0x0007a156) popup_navstr_preview_pane

0xa42d,	// (0x0007a16a) scroll_navstr_pane_ParamLimits

0xa42d,	// (0x0007a16a) scroll_navstr_pane

0x20b1,	// (0x00071dee) bg_popup_preview_window_pane_cp04

0xe22a,	// (0x0007df67) popup_navstr_preview_pane_t1

0xa441,	// (0x0007a17e) scroll_navstr_pane_g1_ParamLimits

0xa441,	// (0x0007a17e) scroll_navstr_pane_g1

0xa455,	// (0x0007a192) scroll_navstr_pane_t1_ParamLimits

0xa455,	// (0x0007a192) scroll_navstr_pane_t1

0xe1cf,	// (0x0007df0c) bg_button_pane_cp014

0xe1cf,	// (0x0007df0c) bg_button_pane_cp030

0x1ab9,	// (0x000717f6) list_double_fisheye_pane_g4_ParamLimits

0x1ab9,	// (0x000717f6) list_double_fisheye_pane_g4

0x1ac5,	// (0x00071802) list_double_fisheye_pane_g5_ParamLimits

0x1ac5,	// (0x00071802) list_double_fisheye_pane_g5

0xe12d,	// (0x0007de6a) sp_fs_scroll_pane_cp03

0xdea3,	// (0x0007dbe0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdeaf,	// (0x0007dbec) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0007fa40) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdebb,	// (0x0007dbf8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa370,	// (0x0007a0ad) sp_fs_scroll_pane_cp02

0x3065,	// (0x00072da2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3065,	// (0x00072da2) popup_sp_fs_calendar_preview_list_single_pane

0x20b1,	// (0x00071dee) main_cam6_pano_pane

0xaf36,	// (0x0007ac73) main_mup3_pane_ParamLimits

0x20b1,	// (0x00071dee) main_phacti_pane

0x9d08,	// (0x00079a45) bg_button_pane_cp11

0x9d22,	// (0x00079a5f) main_mobtv_info_pane_g2_ParamLimits

0x9d22,	// (0x00079a5f) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0007f9a0) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0007f9a0) main_mobtv_info_pane_g

0x9efd,	// (0x00079c3a) sc_clock_pane_t5_ParamLimits

0x9efd,	// (0x00079c3a) sc_clock_pane_t5

0x9f82,	// (0x00079cbf) main_radioblah_pane_g1_ParamLimits

0xdcb0,	// (0x0007d9ed) main_radioblah_pane_t3_ParamLimits

0xdcb0,	// (0x0007d9ed) main_radioblah_pane_t3

0xdcc8,	// (0x0007da05) main_radioblah_pane_t4_ParamLimits

0xdcc8,	// (0x0007da05) main_radioblah_pane_t4

0x9faa,	// (0x00079ce7) main_radioblah_text_pane_ParamLimits

0x9faa,	// (0x00079ce7) main_radioblah_text_pane

0x9fbc,	// (0x00079cf9) main_radioblah_info_pane_g1_ParamLimits

0xa055,	// (0x00079d92) main_radioblah_info_pane_t4_ParamLimits

0xa055,	// (0x00079d92) main_radioblah_info_pane_t4

0xaf36,	// (0x0007ac73) main_sp_fs_calendar_pane

0xa46c,	// (0x0007a1a9) main_phacti_pane_g1

0xa474,	// (0x0007a1b1) phacti_note_pane_ParamLimits

0xa474,	// (0x0007a1b1) phacti_note_pane

0xe241,	// (0x0007df7e) phacti_term_pane_ParamLimits

0xe241,	// (0x0007df7e) phacti_term_pane

0xe256,	// (0x0007df93) phacti_note_pane_t1_ParamLimits

0xe256,	// (0x0007df93) phacti_note_pane_t1

0xe26d,	// (0x0007dfaa) phacti_term_pane_g1

0xe275,	// (0x0007dfb2) phacti_term_pane_t1_ParamLimits

0xe275,	// (0x0007dfb2) phacti_term_pane_t1

0xe29f,	// (0x0007dfdc) popup_sp_fs_calendar_preview_list_single_pane_g1

0x389d,	// (0x000735da) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0007fb0a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe2a7,	// (0x0007dfe4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe2a7,	// (0x0007dfe4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe2bc,	// (0x0007dff9) aid_popup_sp_fs_bg_corner_pane

0x0395,	// (0x000700d2) popup_sp_fs_calendar_preview_bg_pane_g1

0x20b1,	// (0x00071dee) popup_sp_fs_calendar_preview_bg_pane

0xe2c4,	// (0x0007e001) popup_sp_fs_calendar_preview_list_pane

0xaf36,	// (0x0007ac73) bg_main_sp_fs_cale_pane_ParamLimits

0xaf36,	// (0x0007ac73) bg_main_sp_fs_cale_pane

0xe2d5,	// (0x0007e012) listscroll_cale_mrui_pane_ParamLimits

0xe2d5,	// (0x0007e012) listscroll_cale_mrui_pane

0xe2e9,	// (0x0007e026) listscroll_sp_fs_schedule_track_pane

0xe2f2,	// (0x0007e02f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe2f2,	// (0x0007e02f) main_sp_fs_ctrlbar_pane_cp01

0xe303,	// (0x0007e040) main_sp_fs_ribbon_pane

0xe30b,	// (0x0007e048) popup_sp_fs_cale_preview_window

0xa4cb,	// (0x0007a208) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa4cb,	// (0x0007a208) list_single_sp_fs_schedule_track_pane

0xaf36,	// (0x0007ac73) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaf36,	// (0x0007ac73) bg_sp_fs_highlight_list_pane_cp03

0xa4de,	// (0x0007a21b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa4de,	// (0x0007a21b) list_single_sp_fs_schedule_track_pane_g1

0xa4ea,	// (0x0007a227) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa4ea,	// (0x0007a227) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0007fb0f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0007fb0f) list_single_sp_fs_schedule_track_pane_g

0xa4f6,	// (0x0007a233) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa4f6,	// (0x0007a233) list_single_sp_fs_schedule_track_pane_t1

0xa510,	// (0x0007a24d) sp_fs_schedule_track_pane_ParamLimits

0xa510,	// (0x0007a24d) sp_fs_schedule_track_pane

0xe31d,	// (0x0007e05a) sp_fs_schedule_track_pane_g1

0xe325,	// (0x0007e062) sp_fs_schedule_track_pane_g2

0xe32d,	// (0x0007e06a) sp_fs_schedule_track_pane_g3

0xe335,	// (0x0007e072) sp_fs_schedule_track_pane_g4

0xe33d,	// (0x0007e07a) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0007fb14) sp_fs_schedule_track_pane_g

0x864e,	// (0x0007838b) bg_sp_fs_schedule_viewer_highlight_g1

0x3e45,	// (0x00073b82) bg_sp_fs_schedule_viewer_highlight_g2

0x8656,	// (0x00078393) bg_sp_fs_schedule_viewer_highlight_g3

0x865e,	// (0x0007839b) bg_sp_fs_schedule_viewer_highlight_g4

0xce92,	// (0x0007cbcf) bg_sp_fs_schedule_viewer_highlight_g5

0x866e,	// (0x000783ab) bg_sp_fs_schedule_viewer_highlight_g6

0x8676,	// (0x000783b3) bg_sp_fs_schedule_viewer_highlight_g7

0x867e,	// (0x000783bb) bg_sp_fs_schedule_viewer_highlight_g8

0x3e25,	// (0x00073b62) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0007fb1f) bg_sp_fs_schedule_viewer_highlight_g

0x20b1,	// (0x00071dee) bg_main_sp_fs_ribbon_pane

0xa521,	// (0x0007a25e) main_sp_fs_ribbon_pane_g1

0xe345,	// (0x0007e082) main_sp_fs_ribbon_pane_t1

0xa52a,	// (0x0007a267) main_sp_fs_ribbon_pane_t2

0xe354,	// (0x0007e091) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0007fb32) main_sp_fs_ribbon_pane_t

0xe363,	// (0x0007e0a0) main_sp_fs_ribbon_scheduler_pane

0xe36b,	// (0x0007e0a8) bg_main_sp_fs_ribbon_pane_g1

0xe374,	// (0x0007e0b1) bg_main_sp_fs_ribbon_pane_g2

0xe37d,	// (0x0007e0ba) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0007fb39) bg_main_sp_fs_ribbon_pane_g

0xe385,	// (0x0007e0c2) main_sp_fs_ribbon_scheduler_pane_g1

0xe38e,	// (0x0007e0cb) main_sp_fs_ribbon_scheduler_pane_g2

0xe397,	// (0x0007e0d4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0007fb40) main_sp_fs_ribbon_scheduler_pane_g

0xe3a0,	// (0x0007e0dd) list_cale_mrui_pane

0xa539,	// (0x0007a276) sp_fs_scroll_pane_cp07_ParamLimits

0xa539,	// (0x0007a276) sp_fs_scroll_pane_cp07

0xa54f,	// (0x0007a28c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa54f,	// (0x0007a28c) bg_sp_fs_schedule_viewer_highlight

0xe3a9,	// (0x0007e0e6) list_single_sp_fs_schedule_track_pane_cp01

0xe3b1,	// (0x0007e0ee) list_sp_fs_schedule_track_pane

0xe3b9,	// (0x0007e0f6) sp_fs_scroll_pane_cp06_ParamLimits

0xe3b9,	// (0x0007e0f6) sp_fs_scroll_pane_cp06

0x0395,	// (0x000700d2) bgmain_sp_fs_calendar_pane_g1

0x1efb,	// (0x00071c38) list_single_cale_mrui_pane_ParamLimits

0x1efb,	// (0x00071c38) list_single_cale_mrui_pane

0xe3cb,	// (0x0007e108) list_single_cale_mrui_row_pane_ParamLimits

0xe3cb,	// (0x0007e108) list_single_cale_mrui_row_pane

0xe3d8,	// (0x0007e115) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe3d8,	// (0x0007e115) list_single_cale_mrui_row_pane_g1

0xe410,	// (0x0007e14d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe410,	// (0x0007e14d) list_single_cale_mrui_row_pane_t1

0x1f1c,	// (0x00071c59) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1f1c,	// (0x00071c59) list_single_cale_mrui_row_pane_t2

0xe422,	// (0x0007e15f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe422,	// (0x0007e15f) list_single_cale_mrui_row_pane_t3

0xe451,	// (0x0007e18e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe451,	// (0x0007e18e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0007fb4c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0007fb4c) list_single_cale_mrui_row_pane_t

0x1f82,	// (0x00071cbf) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1f82,	// (0x00071cbf) list_single_cmail_header_editor_pane_bg_cp01

0x1fa6,	// (0x00071ce3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1fa6,	// (0x00071ce3) list_single_cmail_header_editor_pane_bg_cp02

0xa55f,	// (0x0007a29c) main_radioblah_text_pane_t1_ParamLimits

0xa55f,	// (0x0007a29c) main_radioblah_text_pane_t1

0xe480,	// (0x0007e1bd) cam6_indi_pane_cp01

0xe488,	// (0x0007e1c5) cam6_mode_pane_cp01

0xe490,	// (0x0007e1cd) cam6_pano_pane

0xe499,	// (0x0007e1d6) cam6_zoom_pane_cp01

0xe4a1,	// (0x0007e1de) cam6_pano_image_pane

0xe4ac,	// (0x0007e1e9) cam6_pano_pane_g1

0xda2a,	// (0x0007d767) cam6_pano_pane_g2

0xe4b5,	// (0x0007e1f2) cam6_pano_pane_g3

0xe4be,	// (0x0007e1fb) cam6_pano_pane_g4

0x7489,	// (0x000771c6) cam6_pano_pane_g5

0xe4c7,	// (0x0007e204) cam6_pano_pane_g6

0xe4d1,	// (0x0007e20e) cam6_pano_pane_g7

0xe4d9,	// (0x0007e216) cam6_pano_pane_g8

0xe4e2,	// (0x0007e21f) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x0007fb55) cam6_pano_pane_g

0x20b1,	// (0x00071dee) main_browser_tag_pane

0xe222,	// (0x0007df5f) grid_navstr_albumart_pane

0xe4ed,	// (0x0007e22a) cell_navstr_albumart_pane_ParamLimits

0xe4ed,	// (0x0007e22a) cell_navstr_albumart_pane

0xe510,	// (0x0007e24d) cell_navstr_albumart_pane_g1

0xca88,	// (0x0007c7c5) cell_navstr_albumart_pane_g2

0xca98,	// (0x0007c7d5) cell_navstr_albumart_pane_g3

0xca90,	// (0x0007c7cd) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0007fb68) cell_navstr_albumart_pane_g

0xa579,	// (0x0007a2b6) bt_list_pane_ParamLimits

0xa579,	// (0x0007a2b6) bt_list_pane

0xa58d,	// (0x0007a2ca) bt_list_pane_t1

0xa59c,	// (0x0007a2d9) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0007fb71) bt_list_pane_t

0x20b1,	// (0x00071dee) main_cale_prevew_pane

0xa5ab,	// (0x0007a2e8) popup_cale_preview_window_ParamLimits

0xa5ab,	// (0x0007a2e8) popup_cale_preview_window

0xaf36,	// (0x0007ac73) bg_popup_preview_window_pane_cp05_ParamLimits

0xaf36,	// (0x0007ac73) bg_popup_preview_window_pane_cp05

0xe518,	// (0x0007e255) list_cale_preview_pane_ParamLimits

0xe518,	// (0x0007e255) list_cale_preview_pane

0xa5c4,	// (0x0007a301) list_double_cale_preview_pane_ParamLimits

0xa5c4,	// (0x0007a301) list_double_cale_preview_pane

0xa5d6,	// (0x0007a313) list_single_cale_preview_pane_ParamLimits

0xa5d6,	// (0x0007a313) list_single_cale_preview_pane

0xa5ec,	// (0x0007a329) list_single_cale_preview_pane_g1

0xa5f4,	// (0x0007a331) list_single_cale_preview_pane_t1_ParamLimits

0xa5f4,	// (0x0007a331) list_single_cale_preview_pane_t1

0xa609,	// (0x0007a346) list_double_cale_preview_pane_g1

0xa611,	// (0x0007a34e) list_double_cale_preview_pane_t1_ParamLimits

0xa611,	// (0x0007a34e) list_double_cale_preview_pane_t1

0xa626,	// (0x0007a363) list_double_cale_preview_pane_t2_ParamLimits

0xa626,	// (0x0007a363) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0007fb76) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0007fb76) list_double_cale_preview_pane_t

0x20b1,	// (0x00071dee) main_ezdial_pane

0xaf36,	// (0x0007ac73) main_sp_fs_email_pane_ParamLimits

0xa20d,	// (0x00079f4a) cmail_ddmenu_btn01_pane_ParamLimits

0xa20d,	// (0x00079f4a) cmail_ddmenu_btn01_pane

0xa220,	// (0x00079f5d) cmail_ddmenu_btn02_pane_ParamLimits

0xa220,	// (0x00079f5d) cmail_ddmenu_btn02_pane

0xa243,	// (0x00079f80) cmail_ddmenu_btn03_pane_ParamLimits

0xa243,	// (0x00079f80) cmail_ddmenu_btn03_pane

0x1b31,	// (0x0007186e) main_sp_fs_ctrlbar_pane_ParamLimits

0x1b55,	// (0x00071892) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa37a,	// (0x0007a0b7) list_cmail_body_pane_ParamLimits

0xe156,	// (0x0007de93) bg_button_pane_cp12

0xe15f,	// (0x0007de9c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe15f,	// (0x0007de9c) list_single_cmail_header_detail_pane_g3

0x1ed5,	// (0x00071c12) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1ed5,	// (0x00071c12) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0007fafb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0007fafb) list_single_cmail_header_detail_pane_t

0xe28a,	// (0x0007dfc7) phacti_term_pane_t2_ParamLimits

0xe28a,	// (0x0007dfc7) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x0007fb05) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x0007fb05) phacti_term_pane_t

0xe524,	// (0x0007e261) aid_size_list_single_double

0xa63e,	// (0x0007a37b) popup_ezdial_listscroll_window

0xa65a,	// (0x0007a397) popup_number_entry_window_cp01

0xb81d,	// (0x0007b55a) bg_popup_call_pane_cp09

0xe530,	// (0x0007e26d) ezdial_list_pane

0xe538,	// (0x0007e275) scroll_pane_cp23

0xcc6b,	// (0x0007c9a8) bg_button_pane_cp028_ParamLimits

0xcc6b,	// (0x0007c9a8) bg_button_pane_cp028

0xa668,	// (0x0007a3a5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa668,	// (0x0007a3a5) cmail_ddmenu_btn01_pane_g1

0xa674,	// (0x0007a3b1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa674,	// (0x0007a3b1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0007fb7b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0007fb7b) cmail_ddmenu_btn01_pane_g

0xe540,	// (0x0007e27d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe540,	// (0x0007e27d) cmail_ddmenu_btn01_pane_t1

0xcc6b,	// (0x0007c9a8) bg_button_pane_cp029_ParamLimits

0xcc6b,	// (0x0007c9a8) bg_button_pane_cp029

0xa680,	// (0x0007a3bd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa680,	// (0x0007a3bd) cmail_ddmenu_btn02_pane_g1

0xa698,	// (0x0007a3d5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa698,	// (0x0007a3d5) cmail_ddmenu_btn02_pane_t1

0xaf36,	// (0x0007ac73) bg_button_pane_cp031_ParamLimits

0xaf36,	// (0x0007ac73) bg_button_pane_cp031

0xa680,	// (0x0007a3bd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa680,	// (0x0007a3bd) cmail_ddmenu_btn03_pane_g1

0xa698,	// (0x0007a3d5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa698,	// (0x0007a3d5) cmail_ddmenu_btn03_pane_t1

0x7c60,	// (0x0007799d) cell_dialer2_keypad_pane_t1_ParamLimits

0x7c7a,	// (0x000779b7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7c7a,	// (0x000779b7) cell_dialer2_keypad_pane_t1_copy1

0x9ba4,	// (0x000798e1) ncimui_group_button_pane

0xaf36,	// (0x0007ac73) main_sp_fs_calendar_pane_ParamLimits

0xe13d,	// (0x0007de7a) list_single_cmail_header_caption_pane_ParamLimits

0xe2cc,	// (0x0007e009) aid_recal_txt_sm_pane

0x20b1,	// (0x00071dee) mian_recal_day_pane

0xe30b,	// (0x0007e048) popup_sp_fs_cale_preview_window_ParamLimits

0x20b1,	// (0x00071dee) list_recal_day_pane

0xe577,	// (0x0007e2b4) list_single_recal_day_pane_ParamLimits

0xe577,	// (0x0007e2b4) list_single_recal_day_pane

0xe589,	// (0x0007e2c6) list_single_recal_day_pane_g1_ParamLimits

0xe589,	// (0x0007e2c6) list_single_recal_day_pane_g1

0xe595,	// (0x0007e2d2) list_single_recal_day_pane_g2_ParamLimits

0xe595,	// (0x0007e2d2) list_single_recal_day_pane_g2

0xe5a4,	// (0x0007e2e1) list_single_recal_day_pane_g3_ParamLimits

0xe5a4,	// (0x0007e2e1) list_single_recal_day_pane_g3

0xa6bc,	// (0x0007a3f9) list_single_recal_day_pane_g4_ParamLimits

0xa6bc,	// (0x0007a3f9) list_single_recal_day_pane_g4

0xe5b0,	// (0x0007e2ed) list_single_recal_day_pane_g5_ParamLimits

0xe5b0,	// (0x0007e2ed) list_single_recal_day_pane_g5

0xe5bf,	// (0x0007e2fc) list_single_recal_day_pane_g6_ParamLimits

0xe5bf,	// (0x0007e2fc) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0007fb8a) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0007fb8a) list_single_recal_day_pane_g

0xe5cb,	// (0x0007e308) list_single_recal_day_pane_t1

0xe5d9,	// (0x0007e316) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x0007fb97) list_single_recal_day_pane_t

0xa6cf,	// (0x0007a40c) ncimui_query_button_pane_ParamLimits

0xa6cf,	// (0x0007a40c) ncimui_query_button_pane

0xa6df,	// (0x0007a41c) ncimui_query_button_pane_t1_ParamLimits

0xa6df,	// (0x0007a41c) ncimui_query_button_pane_t1

0xe5e7,	// (0x0007e324) ncimui_query_button_pane_t2_ParamLimits

0xe5e7,	// (0x0007e324) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0007fb9c) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0007fb9c) ncimui_query_button_pane_t

0xa6f2,	// (0x0007a42f) query_button_pane_ParamLimits

0xa6f2,	// (0x0007a42f) query_button_pane

0x20b1,	// (0x00071dee) bg_button_pane_cp0028

0xe5fa,	// (0x0007e337) query_button_pane_t1

0x594a,	// (0x00075687) main_tport_pane_ParamLimits

0xa267,	// (0x00079fa4) bg_popup_window_pane_cp01_ParamLimits

0xa267,	// (0x00079fa4) bg_popup_window_pane_cp01

0xa281,	// (0x00079fbe) heading_pane_cp08_ParamLimits

0xa281,	// (0x00079fbe) heading_pane_cp08

0xa295,	// (0x00079fd2) heading_pane_cp07_ParamLimits

0xa295,	// (0x00079fd2) heading_pane_cp07

0xe0ff,	// (0x0007de3c) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0007fae8) cell_tport_appsw_pane_g

0x17c2,	// (0x000714ff) input_candi_list_open_g1

0xb1ff,	// (0x0007af3c) list_cale_time_pane_g6_ParamLimits

0xb1ff,	// (0x0007af3c) list_cale_time_pane_g6

0x6717,	// (0x00076454) aid_size_touch_calib_1_ParamLimits

0x6717,	// (0x00076454) aid_size_touch_calib_1

0x6723,	// (0x00076460) aid_size_touch_calib_2_ParamLimits

0x6723,	// (0x00076460) aid_size_touch_calib_2

0x6739,	// (0x00076476) aid_size_touch_calib_3_ParamLimits

0x6739,	// (0x00076476) aid_size_touch_calib_3

0x6757,	// (0x00076494) aid_size_touch_calib_4_ParamLimits

0x6757,	// (0x00076494) aid_size_touch_calib_4

0x676d,	// (0x000764aa) main_touch_calib_button_group_pane_ParamLimits

0x676d,	// (0x000764aa) main_touch_calib_button_group_pane

0x6784,	// (0x000764c1) main_touch_calib_pane_g1_ParamLimits

0x6790,	// (0x000764cd) main_touch_calib_pane_g2_ParamLimits

0x679c,	// (0x000764d9) main_touch_calib_pane_g3_ParamLimits

0x67a8,	// (0x000764e5) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0007f4c1) main_touch_calib_pane_g_ParamLimits

0x67b4,	// (0x000764f1) main_touch_calib_pane_t1_ParamLimits

0x67ce,	// (0x0007650b) main_touch_calib_pane_t2_ParamLimits

0x67e8,	// (0x00076525) main_touch_calib_pane_t3_ParamLimits

0x67fc,	// (0x00076539) main_touch_calib_pane_t4_ParamLimits

0x6810,	// (0x0007654d) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0007f4ca) main_touch_calib_pane_t_ParamLimits

0x06fe,	// (0x0007043b) list_single_fp_cale_pane_g3_ParamLimits

0x06fe,	// (0x0007043b) list_single_fp_cale_pane_g3

0xaf36,	// (0x0007ac73) bg_button_pane_cp012_ParamLimits

0xaf36,	// (0x0007ac73) bg_vkb2_func_pane_cp03_ParamLimits

0x8f82,	// (0x00078cbf) cell_vitu2_function_top_pane_g1_ParamLimits

0xaf36,	// (0x0007ac73) bg_vkb2_func_pane_cp04_ParamLimits

0x9b58,	// (0x00079895) main_ncimui_button_group_pane_ParamLimits

0x9b58,	// (0x00079895) main_ncimui_button_group_pane

0x9b92,	// (0x000798cf) main_ncimui_pane_t3_ParamLimits

0x9b92,	// (0x000798cf) main_ncimui_pane_t3

0xe238,	// (0x0007df75) phacti_button_group_pane

0xe524,	// (0x0007e261) aid_size_list_single_double_ParamLimits

0xa63e,	// (0x0007a37b) popup_ezdial_listscroll_window_ParamLimits

0xa65a,	// (0x0007a397) popup_number_entry_window_cp01_ParamLimits

0xa705,	// (0x0007a442) phacti_button_pane_ParamLimits

0xa705,	// (0x0007a442) phacti_button_pane

0x20b1,	// (0x00071dee) bg_button_pane_cp14

0xe608,	// (0x0007e345) phacti_button_pane_t1

0xa716,	// (0x0007a453) main_touch_calib_button_pane_ParamLimits

0xa716,	// (0x0007a453) main_touch_calib_button_pane

0x2da0,	// (0x00072add) bg_button_pane_cp18_ParamLimits

0x2da0,	// (0x00072add) bg_button_pane_cp18

0xe616,	// (0x0007e353) main_touch_calib_button_pane_t1_ParamLimits

0xe616,	// (0x0007e353) main_touch_calib_button_pane_t1

0xe62c,	// (0x0007e369) main_touch_calib_button_pane_t2_ParamLimits

0xe62c,	// (0x0007e369) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0007fba1) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0007fba1) main_touch_calib_button_pane_t

0x20b1,	// (0x00071dee) cell_ncimui_button_pane

0x20b1,	// (0x00071dee) bg_button_pane_cp032

0xe64a,	// (0x0007e387) cell_ncimui_button_pane_t1

0xef17,	// (0x0007ec54) image3_infobar_pane_ParamLimits

0xef17,	// (0x0007ec54) image3_infobar_pane

0x9f29,	// (0x00079c66) fs_bigclock_status_pane_ParamLimits

0x9f29,	// (0x00079c66) fs_bigclock_status_pane

0x9f36,	// (0x00079c73) main_fs_bigclock_clock_pane_ParamLimits

0x9f36,	// (0x00079c73) main_fs_bigclock_clock_pane

0x9f49,	// (0x00079c86) main_fs_bigclock_indi_pane_ParamLimits

0x9f49,	// (0x00079c86) main_fs_bigclock_indi_pane

0x9f61,	// (0x00079c9e) main_fs_bigclock_swipe_pane_ParamLimits

0x9f61,	// (0x00079c9e) main_fs_bigclock_swipe_pane

0x20b1,	// (0x00071dee) main_fs_clock_dumped_data

0xdb37,	// (0x0007d874) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb37,	// (0x0007d874) list_single_fs_bigclock_indicator_pane_g1

0xdb53,	// (0x0007d890) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb53,	// (0x0007d890) list_single_fs_bigclock_indicator_pane_g2

0xdb6d,	// (0x0007d8aa) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb6d,	// (0x0007d8aa) list_single_fs_bigclock_indicator_pane_g3

0xdb87,	// (0x0007d8c4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb87,	// (0x0007d8c4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0007f9d4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0007f9d4) list_single_fs_bigclock_indicator_pane_g

0xdbad,	// (0x0007d8ea) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbad,	// (0x0007d8ea) list_single_fs_bigclock_indicator_pane_t1

0xdbd5,	// (0x0007d912) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdbd5,	// (0x0007d912) list_single_fs_bigclock_indicator_pane_t2

0xdbfd,	// (0x0007d93a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdbfd,	// (0x0007d93a) list_single_fs_bigclock_indicator_pane_t3

0xdc25,	// (0x0007d962) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc25,	// (0x0007d962) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0007f9df) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0007f9df) list_single_fs_bigclock_indicator_pane_t

0xe658,	// (0x0007e395) image3_infobar_fav_pane_ParamLimits

0xe658,	// (0x0007e395) image3_infobar_fav_pane

0xe668,	// (0x0007e3a5) image3_infobar_loc_pane_ParamLimits

0xe668,	// (0x0007e3a5) image3_infobar_loc_pane

0xe67c,	// (0x0007e3b9) image3_infobar_time_pane_ParamLimits

0xe67c,	// (0x0007e3b9) image3_infobar_time_pane

0x0395,	// (0x000700d2) image3_infobar_time_pane_g1

0xe68c,	// (0x0007e3c9) image3_infobar_time_pane_t1

0x0395,	// (0x000700d2) image3_infobar_loc_pane_g1

0xe69a,	// (0x0007e3d7) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x0007fba6) image3_infobar_loc_pane_g

0xe6a2,	// (0x0007e3df) image3_infobar_loc_pane_t1

0x0395,	// (0x000700d2) image3_infobar_fav_pane_g1

0xe6b0,	// (0x0007e3ed) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0007fbab) image3_infobar_fav_pane_g

0xe6b8,	// (0x0007e3f5) fs_bigclock_status_battery_pane

0xe6c1,	// (0x0007e3fe) fs_bigclock_status_signal_pane

0xe6ca,	// (0x0007e407) fs_bigclock_status_title_pane

0xe6d3,	// (0x0007e410) fs_bigclock_status_signal_pane_g1

0xe6dc,	// (0x0007e419) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0007fbb0) fs_bigclock_status_signal_pane_g

0xe6e4,	// (0x0007e421) fs_bigclock_status_battery_pane_g1

0xe6ed,	// (0x0007e42a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x0007fbb5) fs_bigclock_status_battery_pane_g

0xe6f5,	// (0x0007e432) fs_bigclock_status_title_pane_t1

0x0395,	// (0x000700d2) main_fs_bigclock_clock_pane_g1

0xe703,	// (0x0007e440) main_fs_bigclock_clock_pane_g2

0xe703,	// (0x0007e440) main_fs_bigclock_clock_pane_g3

0xe703,	// (0x0007e440) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0007fbba) main_fs_bigclock_clock_pane_g

0xe70b,	// (0x0007e448) main_fs_bigclock_clock_pane_t1

0xe719,	// (0x0007e456) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0007fbc3) main_fs_bigclock_clock_pane_t

0xe728,	// (0x0007e465) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe728,	// (0x0007e465) list_single_fs_bigclock_indicator_pane

0xa72b,	// (0x0007a468) list_single_fs_bigclock_pane_ParamLimits

0xa72b,	// (0x0007a468) list_single_fs_bigclock_pane

0xe742,	// (0x0007e47f) main_fs_bigclock_indicator_pane_t1

0xe751,	// (0x0007e48e) list_single_fs_bigclock_pane_g1

0xe759,	// (0x0007e496) list_single_fs_bigclock_pane_t1

0x0395,	// (0x000700d2) main_fs_bigclock_swipe_pane_g1

0xe797,	// (0x0007e4d4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0007fbd4) main_fs_bigclock_swipe_pane_g

0xe79f,	// (0x0007e4dc) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe79f,	// (0x0007e4dc) main_fs_bigclock_swipe_pane_t1

0x47ef,	// (0x0007452c) call_type_pane_ParamLimits

0x20b1,	// (0x00071dee) main_btmg_pane

0xe404,	// (0x0007e141) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe404,	// (0x0007e141) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0007fb47) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0007fb47) list_single_cale_mrui_row_pane_g

0xe55e,	// (0x0007e29b) list_recal_vselct_arw_lo_pane

0xe566,	// (0x0007e2a3) list_recal_vselct_arw_up_pane

0xe56e,	// (0x0007e2ab) list_recal_vselct_pane

0xe7bc,	// (0x0007e4f9) btmg_button_pane

0xa790,	// (0x0007a4cd) main_btmg_pane_g1

0x20b1,	// (0x00071dee) bg_button_pane_cp044

0xe7c6,	// (0x0007e503) btmg_button_pane_t1

0xcc63,	// (0x0007c9a0) aid_listscroll_gen

0xaf36,	// (0x0007ac73) main_cntbar_detail_pane

0xe11d,	// (0x0007de5a) list_cmail_folder_pane

0xe12d,	// (0x0007de6a) sp_fs_scroll_pane_cp03_ParamLimits

0x1fc4,	// (0x00071d01) list_single_fs_dyc_pane_cp01_ParamLimits

0x1fc4,	// (0x00071d01) list_single_fs_dyc_pane_cp01

0xe7d4,	// (0x0007e511) aid_size_cmail_indent

0xf0ea,	// (0x0007ee27) list_single_dyc_row_pane_cp01

0xa7c6,	// (0x0007a503) cntbar_detail_list_pane_ParamLimits

0xa7c6,	// (0x0007a503) cntbar_detail_list_pane

0xa812,	// (0x0007a54f) main_cntbar_detail_cont_pane_ParamLimits

0xa812,	// (0x0007a54f) main_cntbar_detail_cont_pane

0x47e3,	// (0x00074520) scroll_pane_cp032_ParamLimits

0x47e3,	// (0x00074520) scroll_pane_cp032

0xa826,	// (0x0007a563) cntbar_detail_list_event_pane_ParamLimits

0xa826,	// (0x0007a563) cntbar_detail_list_event_pane

0xa7d6,	// (0x0007a513) cntbar_detail_list_shct_pane

0x3e9b,	// (0x00073bd8) aid_list_gen

0xe7dd,	// (0x0007e51a) aid_scroll

0xe7e6,	// (0x0007e523) aid_size_touch_scroll_bar

0x1fda,	// (0x00071d17) aid_list_double

0xe7ef,	// (0x0007e52c) aid_list_single

0xa836,	// (0x0007a573) aid_list_single_lg

0xe7f8,	// (0x0007e535) aid_list_z_g_a_sm

0xf0f3,	// (0x0007ee30) aid_list_z_g_d

0xe800,	// (0x0007e53d) aid_txt_z_prm

0x1fe3,	// (0x00071d20) aid_txt_z_prm_cp01

0x1ff1,	// (0x00071d2e) aid_txt_z_sec

0xa83f,	// (0x0007a57c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa83f,	// (0x0007a57c) main_cntbar_detail_cont_pane_g1

0xa853,	// (0x0007a590) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa853,	// (0x0007a590) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0007fbd9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0007fbd9) main_cntbar_detail_cont_pane_g

0xe80e,	// (0x0007e54b) main_cntbar_detail_cont_pane_t1

0xe81c,	// (0x0007e559) main_cntbar_detail_cont_pane_t2

0xe82a,	// (0x0007e567) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0007fbde) main_cntbar_detail_cont_pane_t

0xa863,	// (0x0007a5a0) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa863,	// (0x0007a5a0) cell_cntbar_detail_list_shct_pane

0xe838,	// (0x0007e575) cntbar_detail_list_shct_pane_g1

0xe841,	// (0x0007e57e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x0007fbe5) cntbar_detail_list_shct_pane_g

0xa877,	// (0x0007a5b4) cntbar_detail_list_event_pane_g1_ParamLimits

0xa877,	// (0x0007a5b4) cntbar_detail_list_event_pane_g1

0xa883,	// (0x0007a5c0) cntbar_detail_list_event_pane_g2_ParamLimits

0xa883,	// (0x0007a5c0) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0007fbea) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0007fbea) cntbar_detail_list_event_pane_g

0xa8ef,	// (0x0007a62c) cntbar_detail_list_event_pane_t1_ParamLimits

0xa8ef,	// (0x0007a62c) cntbar_detail_list_event_pane_t1

0xa904,	// (0x0007a641) cntbar_detail_list_event_pane_t2_ParamLimits

0xa904,	// (0x0007a641) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0007fbf7) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0007fbf7) cntbar_detail_list_event_pane_t

0x0395,	// (0x000700d2) cell_cntbar_detail_list_shct_pane_g1

0x4b51,	// (0x0007488e) navi_pane_mv_g3

0xaf36,	// (0x0007ac73) main_cntbar_detail_pane_ParamLimits

0x20b1,	// (0x00071dee) main_notif_wgt_pane

0xed2d,	// (0x0007ea6a) aid_tch_main_mp4_pane_g4

0xef0f,	// (0x0007ec4c) popup_slider_window_cp02

0xe555,	// (0x0007e292) list_recal_day_event_pane

0xa79a,	// (0x0007a4d7) cntbar_detail_btn_pane_ParamLimits

0xa79a,	// (0x0007a4d7) cntbar_detail_btn_pane

0xa7b0,	// (0x0007a4ed) cntbar_detail_btn_pane_cp01_ParamLimits

0xa7b0,	// (0x0007a4ed) cntbar_detail_btn_pane_cp01

0xa7d6,	// (0x0007a513) cntbar_detail_list_shct_pane_ParamLimits

0xa7e6,	// (0x0007a523) cntbar_detail_pane_g1_ParamLimits

0xa7e6,	// (0x0007a523) cntbar_detail_pane_g1

0xa7f6,	// (0x0007a533) cntbar_detail_pane_t1_ParamLimits

0xa7f6,	// (0x0007a533) cntbar_detail_pane_t1

0xa88f,	// (0x0007a5cc) cntbar_detail_list_event_pane_g3_ParamLimits

0xa88f,	// (0x0007a5cc) cntbar_detail_list_event_pane_g3

0xa8a7,	// (0x0007a5e4) cntbar_detail_list_event_pane_g4_ParamLimits

0xa8a7,	// (0x0007a5e4) cntbar_detail_list_event_pane_g4

0xa8bf,	// (0x0007a5fc) cntbar_detail_list_event_pane_g5_ParamLimits

0xa8bf,	// (0x0007a5fc) cntbar_detail_list_event_pane_g5

0xa8d7,	// (0x0007a614) cntbar_detail_list_event_pane_g6_ParamLimits

0xa8d7,	// (0x0007a614) cntbar_detail_list_event_pane_g6

0xa919,	// (0x0007a656) cntbar_detail_list_event_pane_t3_ParamLimits

0xa919,	// (0x0007a656) cntbar_detail_list_event_pane_t3

0xa92b,	// (0x0007a668) popup_notif_wgt_window_ParamLimits

0xa92b,	// (0x0007a668) popup_notif_wgt_window

0xa944,	// (0x0007a681) popup_submenu_window_cp01_ParamLimits

0xa944,	// (0x0007a681) popup_submenu_window_cp01

0xb81d,	// (0x0007b55a) bg_popup_window_pane_cp10

0xe84a,	// (0x0007e587) listscroll_notif_wgt_pane

0xe854,	// (0x0007e591) list_notif_wgt_window

0xe85d,	// (0x0007e59a) scroll_pane_cp033

0xe866,	// (0x0007e5a3) list_notif_wgt_row_pane_ParamLimits

0xe866,	// (0x0007e5a3) list_notif_wgt_row_pane

0xe878,	// (0x0007e5b5) aid_size_list_notif_wgt_del

0xe881,	// (0x0007e5be) list_notif_wgt_row_pane_g1

0xe889,	// (0x0007e5c6) list_notif_wgt_row_pane_g2

0xe891,	// (0x0007e5ce) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0007fbfe) list_notif_wgt_row_pane_g

0xe89a,	// (0x0007e5d7) list_notif_wgt_row_pane_t1

0xe8a8,	// (0x0007e5e5) list_notif_wgt_row_pane_t2

0xe8b6,	// (0x0007e5f3) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x0007fc05) list_notif_wgt_row_pane_t

0xceb2,	// (0x0007cbef) list_recal_day_event_pane_g1

0xe8c4,	// (0x0007e601) list_recal_day_event_pane_t1

0x20b1,	// (0x00071dee) bg_button_pane_cp045

0xe8d3,	// (0x0007e610) cntbar_detail_btn_pane_t1

0xcc6b,	// (0x0007c9a8) main_callh_pane_ParamLimits

0xcc6b,	// (0x0007c9a8) main_callh_pane

0x20b1,	// (0x00071dee) main_coverflow0_pane

0x20b1,	// (0x00071dee) main_wgtman_pane

0x9f6f,	// (0x00079cac) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9f6f,	// (0x00079cac) main_fs_bigclock_unlock_btn_pane

0xe0f7,	// (0x0007de34) bg_button_pane_cp16

0xe107,	// (0x0007de44) cell_tport_appsw_pane_g3

0xa956,	// (0x0007a693) cf0_flow_pane_ParamLimits

0xa956,	// (0x0007a693) cf0_flow_pane

0xe8e1,	// (0x0007e61e) listscroll_cf0_pane

0xe8ea,	// (0x0007e627) main_cf0_pane_g1

0xa96b,	// (0x0007a6a8) main_cf0_pane_t1_ParamLimits

0xa96b,	// (0x0007a6a8) main_cf0_pane_t1

0xa983,	// (0x0007a6c0) main_cf0_pane_t2_ParamLimits

0xa983,	// (0x0007a6c0) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0007fc0c) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0007fc0c) main_cf0_pane_t

0xe8f4,	// (0x0007e631) scroll_pane_cp11

0xa99b,	// (0x0007a6d8) cf0_flow_pane_g1

0xa9a3,	// (0x0007a6e0) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0007fc11) cf0_flow_pane_g

0xa9ab,	// (0x0007a6e8) cf0_flow_pane_t1

0x20b1,	// (0x00071dee) main_call6_pane

0x20b1,	// (0x00071dee) main_calllock_pane

0xa9b9,	// (0x0007a6f6) call6_btn_grp_pane_ParamLimits

0xa9b9,	// (0x0007a6f6) call6_btn_grp_pane

0xa9d3,	// (0x0007a710) call6_pane_g1_ParamLimits

0xa9d3,	// (0x0007a710) call6_pane_g1

0xa9e8,	// (0x0007a725) popup_call6_1st_window_ParamLimits

0xa9e8,	// (0x0007a725) popup_call6_1st_window

0xa9f9,	// (0x0007a736) popup_call6_2nd_window_ParamLimits

0xa9f9,	// (0x0007a736) popup_call6_2nd_window

0xaa0a,	// (0x0007a747) cell_call6_btn_pane_ParamLimits

0xaa0a,	// (0x0007a747) cell_call6_btn_pane

0xb81d,	// (0x0007b55a) bg_popup_call2_in_pane_cp03

0xe8ff,	// (0x0007e63c) popup_call6_1st_window_g1

0xe907,	// (0x0007e644) popup_call6_1st_window_g2

0xe90f,	// (0x0007e64c) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0007fc16) popup_call6_1st_window_g

0xe917,	// (0x0007e654) popup_call6_1st_window_t1

0xe926,	// (0x0007e663) popup_call6_1st_window_t2

0xe936,	// (0x0007e673) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0007fc1d) popup_call6_1st_window_t

0xb81d,	// (0x0007b55a) bg_popup_call2_in_pane_cp04

0xe8ff,	// (0x0007e63c) popup_call6_2nd_window_g1

0xe907,	// (0x0007e644) popup_call6_2nd_window_g2

0xe90f,	// (0x0007e64c) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0007fc16) popup_call6_2nd_window_g

0xe917,	// (0x0007e654) popup_call6_2nd_window_t1

0x20b1,	// (0x00071dee) bg_button_pane_cp15

0xe946,	// (0x0007e683) cell_call6_btn_pane_g1

0xe94f,	// (0x0007e68c) cell_call6_btn_pane_t1

0xaa1e,	// (0x0007a75b) listscroll_wgtman_pane_ParamLimits

0xaa1e,	// (0x0007a75b) listscroll_wgtman_pane

0xaa41,	// (0x0007a77e) wgtman_btn_pane_ParamLimits

0xaa41,	// (0x0007a77e) wgtman_btn_pane

0xb6d4,	// (0x0007b411) aid_scroll_copy1

0xe95e,	// (0x0007e69b) list_wgtman_pane

0xaa84,	// (0x0007a7c1) wgtman_btn_pane_g1_ParamLimits

0xaa84,	// (0x0007a7c1) wgtman_btn_pane_g1

0xaab0,	// (0x0007a7ed) wgtman_btn_pane_t1_ParamLimits

0xaab0,	// (0x0007a7ed) wgtman_btn_pane_t1

0xe968,	// (0x0007e6a5) wgtman_btn_pane_t2_ParamLimits

0xe968,	// (0x0007e6a5) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0007fc24) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0007fc24) wgtman_btn_pane_t

0xaaed,	// (0x0007a82a) listrow_wgtman_pane_ParamLimits

0xaaed,	// (0x0007a82a) listrow_wgtman_pane

0xaaff,	// (0x0007a83c) listrow_wgtman_pane_g1

0xab08,	// (0x0007a845) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0007fc29) listrow_wgtman_pane_g

0x1fff,	// (0x00071d3c) listrow_wgtman_pane_t1

0x200d,	// (0x00071d4a) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0007fc2e) listrow_wgtman_pane_t

0x201b,	// (0x00071d58) wait_bar_pane_cp09

0xe97f,	// (0x0007e6bc) main_calllock_btn_pane

0xe989,	// (0x0007e6c6) main_calllock_pane_g1

0x20b1,	// (0x00071dee) bg_button_pane_cp17

0xe995,	// (0x0007e6d2) main_calllock_btn_pane_g1

0xe99e,	// (0x0007e6db) main_calllock_btn_pane_t1

0x20b1,	// (0x00071dee) main_dialer3_pane

0x20b1,	// (0x00071dee) main_fmrd2_pane

0x0395,	// (0x000700d2) main_fs_bigclock_unlock_btn_pane_g1

0xe9b5,	// (0x0007e6f2) main_fs_bigclock_unlock_btn_pane_t1

0xab12,	// (0x0007a84f) area_fmrd2_info_pane_ParamLimits

0xab12,	// (0x0007a84f) area_fmrd2_info_pane

0xab23,	// (0x0007a860) area_fmrd2_visual_pane_ParamLimits

0xab23,	// (0x0007a860) area_fmrd2_visual_pane

0xab31,	// (0x0007a86e) fmrd2_indi_pane_ParamLimits

0xab31,	// (0x0007a86e) fmrd2_indi_pane

0xab3e,	// (0x0007a87b) area_fmrd2_visual_pane_g1

0xab46,	// (0x0007a883) area_fmrd2_visual_pane_t1

0xab56,	// (0x0007a893) area_fmrd2_visual_pane_t2

0xab66,	// (0x0007a8a3) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0007fc38) area_fmrd2_visual_pane_t

0xab76,	// (0x0007a8b3) area_fmrd2_info_pane_g1

0xab7e,	// (0x0007a8bb) area_fmrd2_info_pane_t1

0xab8e,	// (0x0007a8cb) area_fmrd2_info_pane_t2

0xab9e,	// (0x0007a8db) area_fmrd2_info_pane_t3

0xabae,	// (0x0007a8eb) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0007fc3f) area_fmrd2_info_pane_t

0xabbc,	// (0x0007a8f9) fmrd2_indi_pane_t1

0xabcc,	// (0x0007a909) fmrd2_indi_pane_t2

0xabdc,	// (0x0007a919) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0007fc48) fmrd2_indi_pane_t

0xdb96,	// (0x0007d8d3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb96,	// (0x0007d8d3) list_single_fs_bigclock_indicator_pane_g5

0xdc3a,	// (0x0007d977) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc3a,	// (0x0007d977) list_single_fs_bigclock_indicator_pane_t5

0xa488,	// (0x0007a1c5) aid_cell_bcale_month_pane_ParamLimits

0xa488,	// (0x0007a1c5) aid_cell_bcale_month_pane

0xa49a,	// (0x0007a1d7) bcale_month_pane_ParamLimits

0xa49a,	// (0x0007a1d7) bcale_month_pane

0xa4b2,	// (0x0007a1ef) bcale_preview_pane_ParamLimits

0xa4b2,	// (0x0007a1ef) bcale_preview_pane

0xe759,	// (0x0007e496) list_single_fs_bigclock_pane_t1_ParamLimits

0xe773,	// (0x0007e4b0) list_single_fs_bigclock_pane_t2_ParamLimits

0xe773,	// (0x0007e4b0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0007fbcf) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0007fbcf) list_single_fs_bigclock_pane_t

0xe9ad,	// (0x0007e6ea) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0007fc33) main_fs_bigclock_unlock_btn_pane_g

0xabec,	// (0x0007a929) aid_dia3_key_size_ParamLimits

0xabec,	// (0x0007a929) aid_dia3_key_size

0xabfb,	// (0x0007a938) aid_dia3_listrow_size_ParamLimits

0xabfb,	// (0x0007a938) aid_dia3_listrow_size

0xac10,	// (0x0007a94d) dia3_keypad_fun_pane_ParamLimits

0xac10,	// (0x0007a94d) dia3_keypad_fun_pane

0xac2c,	// (0x0007a969) dia3_keypad_num_pane_ParamLimits

0xac2c,	// (0x0007a969) dia3_keypad_num_pane

0xac47,	// (0x0007a984) dia3_listscroll_pane_ParamLimits

0xac47,	// (0x0007a984) dia3_listscroll_pane

0xac5a,	// (0x0007a997) dia3_numentry_pane_ParamLimits

0xac5a,	// (0x0007a997) dia3_numentry_pane

0xe9c3,	// (0x0007e700) dia3_list_pane

0xe9ce,	// (0x0007e70b) scroll_pane_cp12

0x20b1,	// (0x00071dee) bg_dia3_numentry_pane

0xac6e,	// (0x0007a9ab) dia3_numentry_pane_t1

0xac7d,	// (0x0007a9ba) cell_dia3_key_num_pane

0xac85,	// (0x0007a9c2) cell_dia3_key0_fun_pane_ParamLimits

0xac85,	// (0x0007a9c2) cell_dia3_key0_fun_pane

0xac99,	// (0x0007a9d6) cell_dia3_key1_fun_pane_ParamLimits

0xac99,	// (0x0007a9d6) cell_dia3_key1_fun_pane

0xacb1,	// (0x0007a9ee) dia3_listrow_pane

0xd8b6,	// (0x0007d5f3) bg_dia3_numentry_pane_g1

0x20b1,	// (0x00071dee) bg_button_pane_cp21

0xe9d9,	// (0x0007e716) cell_dia3_key_num_pane_t1

0xe9e7,	// (0x0007e724) cell_dia3_key_num_pane_t2

0xe9f6,	// (0x0007e733) cell_dia3_key_num_pane_t3

0xea05,	// (0x0007e742) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0007fc4f) cell_dia3_key_num_pane_t

0x20b1,	// (0x00071dee) bg_button_pane_cp19

0xacc3,	// (0x0007aa00) cell_dia3_key0_fun_pane_g1

0x20b1,	// (0x00071dee) bg_button_pane_cp20

0xaccb,	// (0x0007aa08) cell_dia3_key1_fun_pane_g1

0xacd3,	// (0x0007aa10) area_left_week_number_pane

0xacdc,	// (0x0007aa19) area_top_day_name_pane

0xace5,	// (0x0007aa22) frame_month_view_pane

0xacf1,	// (0x0007aa2e) grid_month_view_pane

0xacfb,	// (0x0007aa38) cell_top_day_name_pane_ParamLimits

0xacfb,	// (0x0007aa38) cell_top_day_name_pane

0x8686,	// (0x000783c3) cell_area_left_week_number_pane_ParamLimits

0x8686,	// (0x000783c3) cell_area_left_week_number_pane

0xad13,	// (0x0007aa50) cell_month_view_pane_ParamLimits

0xad13,	// (0x0007aa50) cell_month_view_pane

0xea14,	// (0x0007e751) frm_month_g1

0xad2e,	// (0x0007aa6b) frm_month_g2

0xad38,	// (0x0007aa75) frm_month_g3

0xad42,	// (0x0007aa7f) frm_month_g4

0xad4c,	// (0x0007aa89) frm_month_g5

0xad56,	// (0x0007aa93) frm_month_g6

0xad60,	// (0x0007aa9d) frm_month_g7

0xea1d,	// (0x0007e75a) frm_month_g8

0xad6c,	// (0x0007aaa9) frm_month_g9

0xad75,	// (0x0007aab2) frm_month_g10

0xad7e,	// (0x0007aabb) frm_month_g11

0xad87,	// (0x0007aac4) frm_month_g12

0xad90,	// (0x0007aacd) frm_month_g13

0xad99,	// (0x0007aad6) frm_month_g14

0xada2,	// (0x0007aadf) frm_month_g15

0xadab,	// (0x0007aae8) frm_month_g16

0x000f,

0xff1b,	// (0x0007fc58) frm_month_g

0xadb6,	// (0x0007aaf3) cell_top_day_name_pane_t1

0xadc5,	// (0x0007ab02) cell_area_left_week_number_pane_g1

0xadb6,	// (0x0007aaf3) cell_area_left_week_number_pane_t1

0x0395,	// (0x000700d2) cell_month_view_pane_g1

0xadcd,	// (0x0007ab0a) cell_month_view_pane_t1

0x20b1,	// (0x00071dee) main_fps_pane

0xde6b,	// (0x0007dba8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde6b,	// (0x0007dba8) cmail_ddmenu_btn02_pane_cp1

0xde87,	// (0x0007dbc4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde87,	// (0x0007dbc4) cmail_ddmenu_btn02_pane_cp2

0xa68c,	// (0x0007a3c9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa68c,	// (0x0007a3c9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x0007fb80) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x0007fb80) cmail_ddmenu_btn02_pane_g

0xa6aa,	// (0x0007a3e7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa6aa,	// (0x0007a3e7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x0007fb85) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x0007fb85) cmail_ddmenu_btn02_pane_t

0xaddc,	// (0x0007ab19) fps_text_pane_ParamLimits

0xaddc,	// (0x0007ab19) fps_text_pane

0xadf3,	// (0x0007ab30) main_fps_pane_g1_ParamLimits

0xadf3,	// (0x0007ab30) main_fps_pane_g1

0xae0d,	// (0x0007ab4a) wait_bar_pane_cp010_ParamLimits

0xae0d,	// (0x0007ab4a) wait_bar_pane_cp010

0xae1e,	// (0x0007ab5b) fps_text_pane_t1_ParamLimits

0xae1e,	// (0x0007ab5b) fps_text_pane_t1

0x81ea,	// (0x00077f27) cam4_image_uncrop_pane_g1

0x81f3,	// (0x00077f30) cam4_image_uncrop_pane_g2

0x81fc,	// (0x00077f39) cam4_image_uncrop_pane_g3

0x8205,	// (0x00077f42) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0007f659) cam4_image_uncrop_pane_g

0xacb1,	// (0x0007a9ee) dia3_listrow_pane_ParamLimits

0x20b1,	// (0x00071dee) main_phob2_pane

0xa300,	// (0x0007a03d) cell_tport_appsw_pane_cp02_ParamLimits

0xa300,	// (0x0007a03d) cell_tport_appsw_pane_cp02

0xa314,	// (0x0007a051) cell_tport_appsw_pane_cp03_ParamLimits

0xa314,	// (0x0007a051) cell_tport_appsw_pane_cp03

0x20b1,	// (0x00071dee) phob2_contact_card_pane

0x20b1,	// (0x00071dee) phob2_listscroll_pane

0x00ab,	// (0x0006fde8) phob2_list_pane

0x00b3,	// (0x0006fdf0) scroll_pane_cp034

0xae36,	// (0x0007ab73) phob2_cc_data_pane_ParamLimits

0xae36,	// (0x0007ab73) phob2_cc_data_pane

0xae55,	// (0x0007ab92) phob2_cc_listscroll_pane_ParamLimits

0xae55,	// (0x0007ab92) phob2_cc_listscroll_pane

0xae73,	// (0x0007abb0) list_double_large_graphic_phob2_pane_ParamLimits

0xae73,	// (0x0007abb0) list_double_large_graphic_phob2_pane

0x010d,	// (0x0006fe4a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x010d,	// (0x0006fe4a) list_double_large_graphic_phob2_pane_g1

0xea26,	// (0x0007e763) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xea26,	// (0x0007e763) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0007fc79) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0007fc79) list_double_large_graphic_phob2_pane_g

0xea32,	// (0x0007e76f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xea32,	// (0x0007e76f) list_double_large_graphic_phob2_pane_t1

0xea47,	// (0x0007e784) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xea47,	// (0x0007e784) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0007fc7e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0007fc7e) list_double_large_graphic_phob2_pane_t

0x20b1,	// (0x00071dee) list_highlight_pane_cp024

0x011a,	// (0x0006fe57) phob2_cc_button_pane

0xae85,	// (0x0007abc2) phob2_cc_data_pane_g1_ParamLimits

0xae85,	// (0x0007abc2) phob2_cc_data_pane_g1

0xae9a,	// (0x0007abd7) phob2_cc_data_pane_g2_ParamLimits

0xae9a,	// (0x0007abd7) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0007fc83) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0007fc83) phob2_cc_data_pane_g

0xaeac,	// (0x0007abe9) phob2_cc_data_pane_t1_ParamLimits

0xaeac,	// (0x0007abe9) phob2_cc_data_pane_t1

0xaec4,	// (0x0007ac01) phob2_cc_data_pane_t2_ParamLimits

0xaec4,	// (0x0007ac01) phob2_cc_data_pane_t2

0xaedc,	// (0x0007ac19) phob2_cc_data_pane_t3_ParamLimits

0xaedc,	// (0x0007ac19) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0007fc88) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0007fc88) phob2_cc_data_pane_t

0x0170,	// (0x0006fead) phob2_cc_list_pane_ParamLimits

0x0170,	// (0x0006fead) phob2_cc_list_pane

0x017c,	// (0x0006feb9) scroll_pane_cp035_ParamLimits

0x017c,	// (0x0006feb9) scroll_pane_cp035

0xaf36,	// (0x0007ac73) bg_button_pane_cp033

0x0188,	// (0x0006fec5) phob2_cc_button_pane_g1

0x0194,	// (0x0006fed1) phob2_cc_button_pane_t1

0x01a9,	// (0x0006fee6) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0007fc8f) phob2_cc_button_pane_t

0xaef4,	// (0x0007ac31) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaef4,	// (0x0007ac31) list_double_large_graphic_phob2_cc_pane

0xaf06,	// (0x0007ac43) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaf06,	// (0x0007ac43) list_double_large_graphic_phob2_cc_pane_g1

0xaf12,	// (0x0007ac4f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaf12,	// (0x0007ac4f) list_double_large_graphic_phob2_cc_pane_g2

0x2023,	// (0x00071d60) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2023,	// (0x00071d60) list_double_large_graphic_phob2_cc_pane_g3

0x202f,	// (0x00071d6c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x202f,	// (0x00071d6c) list_double_large_graphic_phob2_cc_pane_g4

0x203b,	// (0x00071d78) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x203b,	// (0x00071d78) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0007fc94) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0007fc94) list_double_large_graphic_phob2_cc_pane_g

0x2047,	// (0x00071d84) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2047,	// (0x00071d84) list_double_large_graphic_phob2_cc_pane_t1

0x2070,	// (0x00071dad) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x2070,	// (0x00071dad) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0007fc9f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0007fc9f) list_double_large_graphic_phob2_cc_pane_t

0x01f3,	// (0x0006ff30) list_highlight_pane_cp025_ParamLimits

0x01f3,	// (0x0006ff30) list_highlight_pane_cp025

0xaf36,	// (0x0007ac73) bg_button_pane_cp033_ParamLimits

0x0188,	// (0x0006fec5) phob2_cc_button_pane_g1_ParamLimits

0x0194,	// (0x0006fed1) phob2_cc_button_pane_t1_ParamLimits

0x01a9,	// (0x0006fee6) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0007fc8f) phob2_cc_button_pane_t_ParamLimits

0x231d,	// (0x0007205a) popup_wgtman_window

0x8a75,	// (0x000787b2) scroll_pane_cp038

0xaa66,	// (0x0007a7a3) wgtman_btn_pane_cp_01_ParamLimits

0xaa66,	// (0x0007a7a3) wgtman_btn_pane_cp_01

0x0201,	// (0x0006ff3e) wgtman_content_pane

0x020a,	// (0x0006ff47) wgtman_heading_pane

0x20b1,	// (0x00071dee) bg_heading_pane_cp02

0x0213,	// (0x0006ff50) wgtman_heading_pane_g1

0x021b,	// (0x0006ff58) wgtman_heading_pane_t1

0x0229,	// (0x0006ff66) scroll_pane_cp036

0x0231,	// (0x0006ff6e) wgtman_list_pane

0x0239,	// (0x0006ff76) wgtman_list_pane_t1_ParamLimits

0x0239,	// (0x0006ff76) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
