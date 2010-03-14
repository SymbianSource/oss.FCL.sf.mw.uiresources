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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00026070 };

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
0x1d9b,	// (0x00027e0b) Screen

0x1da7,	// (0x00027e17) application_window

0x1e11,	// (0x00027e81) area_bottom_pane_ParamLimits

0x1e11,	// (0x00027e81) area_bottom_pane

0x1e6e,	// (0x00027ede) area_top_pane_ParamLimits

0x1e6e,	// (0x00027ede) area_top_pane

0x1ecb,	// (0x00027f3b) call_video_uplink_pane_ParamLimits

0x1ecb,	// (0x00027f3b) call_video_uplink_pane

0x1ef7,	// (0x00027f67) main_pane_ParamLimits

0x1ef7,	// (0x00027f67) main_pane

0xbd3c,	// (0x00031dac) context_pane

0x69d5,	// (0x0002ca45) navi_pane

0x69fd,	// (0x0002ca6d) popup_cale_events_window_ParamLimits

0x69fd,	// (0x0002ca6d) popup_cale_events_window

0xbd4f,	// (0x00031dbf) popup_mup_playback_window

0x6a15,	// (0x0002ca85) signal_pane

0x2a3a,	// (0x00028aaa) main_browser_pane

0x502d,	// (0x0002b09d) main_burst_pane

0x6727,	// (0x0002c797) main_calc_pane

0x502d,	// (0x0002b09d) main_cale_day_pane

0x2a3a,	// (0x00028aaa) main_cale_month_pane

0x502d,	// (0x0002b09d) main_cale_week_pane

0x502d,	// (0x0002b09d) main_call_pane

0x24fc,	// (0x0002856c) main_call_poc_pane

0x502d,	// (0x0002b09d) main_camera_pane

0x502d,	// (0x0002b09d) main_chi_dic_pane

0x4b96,	// (0x0002ac06) main_clock_pane

0x24fc,	// (0x0002856c) main_fmradio_pane

0x502d,	// (0x0002b09d) main_graph_messa_pane

0x24fc,	// (0x0002856c) main_help_pane

0x2a3a,	// (0x00028aaa) main_im_pane

0x2757,	// (0x000287c7) main_image_pane_ParamLimits

0x2757,	// (0x000287c7) main_image_pane

0x24fc,	// (0x0002856c) main_location2_pane

0x502d,	// (0x0002b09d) main_location_pane

0x24fc,	// (0x0002856c) main_messa_pane

0x24fc,	// (0x0002856c) main_mp2_pane

0x502d,	// (0x0002b09d) main_mp_pane

0x24fc,	// (0x0002856c) main_msg_pane

0x24fc,	// (0x0002856c) main_mup_eq_pane

0x24fc,	// (0x0002856c) main_mup_pane

0x2a3a,	// (0x00028aaa) main_notes_pane

0x24fc,	// (0x0002856c) main_pec_pane

0x24fc,	// (0x0002856c) main_phob_pane

0x24fc,	// (0x0002856c) main_pinb_pane

0x24fc,	// (0x0002856c) main_postcard_pane

0x24fc,	// (0x0002856c) main_qdial_pane

0x502d,	// (0x0002b09d) main_skin_pane

0x24fc,	// (0x0002856c) main_smil2_pane

0x502d,	// (0x0002b09d) main_smil_pane

0x502d,	// (0x0002b09d) main_video_pane

0x502d,	// (0x0002b09d) main_video_tele_pane

0x2757,	// (0x000287c7) main_viewer_pane_ParamLimits

0x2757,	// (0x000287c7) main_viewer_pane

0x502d,	// (0x0002b09d) main_vorec_pane

0x677b,	// (0x0002c7eb) popup_blid_sat_info_window_ParamLimits

0x677b,	// (0x0002c7eb) popup_blid_sat_info_window

0x67d3,	// (0x0002c843) popup_dyc_status_message_window_ParamLimits

0x67d3,	// (0x0002c843) popup_dyc_status_message_window

0x67ed,	// (0x0002c85d) popup_grid_large_graphic_window_ParamLimits

0x67ed,	// (0x0002c85d) popup_grid_large_graphic_window

0x68a9,	// (0x0002c919) popup_loc_request_window_ParamLimits

0x68a9,	// (0x0002c919) popup_loc_request_window

0x69ad,	// (0x0002ca1d) popup_wml_address_window_ParamLimits

0x69ad,	// (0x0002ca1d) popup_wml_address_window

0x6561,	// (0x0002c5d1) call_muted_g1

0x5d98,	// (0x0002be08) popup_call_audio_conf_window_ParamLimits

0x5d98,	// (0x0002be08) popup_call_audio_conf_window

0x6575,	// (0x0002c5e5) popup_call_audio_first_window_ParamLimits

0x6575,	// (0x0002c5e5) popup_call_audio_first_window

0x65eb,	// (0x0002c65b) popup_call_audio_in_window_ParamLimits

0x65eb,	// (0x0002c65b) popup_call_audio_in_window

0x6627,	// (0x0002c697) popup_call_audio_out_window_ParamLimits

0x6627,	// (0x0002c697) popup_call_audio_out_window

0x6661,	// (0x0002c6d1) popup_call_audio_second_window_ParamLimits

0x6661,	// (0x0002c6d1) popup_call_audio_second_window

0x66b7,	// (0x0002c727) popup_call_audio_wait_window_ParamLimits

0x66b7,	// (0x0002c727) popup_call_audio_wait_window

0x66ec,	// (0x0002c75c) popup_number_entry_window_ParamLimits

0x66ec,	// (0x0002c75c) popup_number_entry_window

0x2091,	// (0x00028101) bg_popup_call_pane_cp05_ParamLimits

0x2091,	// (0x00028101) bg_popup_call_pane_cp05

0x20b1,	// (0x00028121) popup_number_entry_window_t1

0x20c4,	// (0x00028134) popup_number_entry_window_t2

0x20d6,	// (0x00028146) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00035157) popup_number_entry_window_t

0x211c,	// (0x0002818c) text_title_cp2

0x212f,	// (0x0002819f) bg_popup_call_pane_cp_ParamLimits

0x212f,	// (0x0002819f) bg_popup_call_pane_cp

0x213d,	// (0x000281ad) call_thumbnail_pane

0x2145,	// (0x000281b5) popup_call_audio_in_window_g1_ParamLimits

0x2145,	// (0x000281b5) popup_call_audio_in_window_g1

0x2151,	// (0x000281c1) popup_call_audio_in_window_g2_ParamLimits

0x2151,	// (0x000281c1) popup_call_audio_in_window_g2

0x215d,	// (0x000281cd) popup_call_audio_in_window_g3_ParamLimits

0x215d,	// (0x000281cd) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00035160) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00035160) popup_call_audio_in_window_g

0x2169,	// (0x000281d9) popup_call_audio_in_window_t1_ParamLimits

0x2169,	// (0x000281d9) popup_call_audio_in_window_t1

0x2185,	// (0x000281f5) popup_call_audio_in_window_t2_ParamLimits

0x2185,	// (0x000281f5) popup_call_audio_in_window_t2

0x21a1,	// (0x00028211) popup_call_audio_in_window_t3_ParamLimits

0x21a1,	// (0x00028211) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00035167) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00035167) popup_call_audio_in_window_t

0x212f,	// (0x0002819f) bg_popup_call_pane_cp01_ParamLimits

0x212f,	// (0x0002819f) bg_popup_call_pane_cp01

0x213d,	// (0x000281ad) call_thumbnail_pane_cp02

0x21b4,	// (0x00028224) call_type_pane_cp022

0x21bc,	// (0x0002822c) popup_call_audio_out_window_g1_ParamLimits

0x21bc,	// (0x0002822c) popup_call_audio_out_window_g1

0x21ce,	// (0x0002823e) popup_call_audio_out_window_g2_ParamLimits

0x21ce,	// (0x0002823e) popup_call_audio_out_window_g2

0x21da,	// (0x0002824a) popup_call_audio_out_window_g3_ParamLimits

0x21da,	// (0x0002824a) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0003516e) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0003516e) popup_call_audio_out_window_g

0x21ec,	// (0x0002825c) popup_call_audio_out_window_t1_ParamLimits

0x21ec,	// (0x0002825c) popup_call_audio_out_window_t1

0x2204,	// (0x00028274) popup_call_audio_out_window_t2_ParamLimits

0x2204,	// (0x00028274) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00035175) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00035175) popup_call_audio_out_window_t

0x2219,	// (0x00028289) bg_popup_call_pane_ParamLimits

0x2219,	// (0x00028289) bg_popup_call_pane

0x229d,	// (0x0002830d) call_thumbnail_pane_cp_ParamLimits

0x229d,	// (0x0002830d) call_thumbnail_pane_cp

0x22c1,	// (0x00028331) call_type_pane_cp01_ParamLimits

0x22c1,	// (0x00028331) call_type_pane_cp01

0x2305,	// (0x00028375) popup_call_audio_first_window_g1_ParamLimits

0x2305,	// (0x00028375) popup_call_audio_first_window_g1

0x2351,	// (0x000283c1) popup_call_audio_first_window_g2_ParamLimits

0x2351,	// (0x000283c1) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0003517a) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0003517a) popup_call_audio_first_window_g

0x2395,	// (0x00028405) popup_call_audio_first_window_t1_ParamLimits

0x2395,	// (0x00028405) popup_call_audio_first_window_t1

0x2441,	// (0x000284b1) popup_call_audio_first_window_t4_ParamLimits

0x2441,	// (0x000284b1) popup_call_audio_first_window_t4

0x24cd,	// (0x0002853d) popup_call_audio_first_window_t5_ParamLimits

0x24cd,	// (0x0002853d) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0003517f) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0003517f) popup_call_audio_first_window_t

0x24fc,	// (0x0002856c) bg_popup_call_pane_cp02

0x2506,	// (0x00028576) call_type_pane_cp023

0x250e,	// (0x0002857e) popup_call_audio_wait_window_g1

0x2516,	// (0x00028586) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00035186) popup_call_audio_wait_window_g

0x251e,	// (0x0002858e) popup_call_audio_wait_window_t3

0x252c,	// (0x0002859c) bg_popup_call_pane_cp03_ParamLimits

0x252c,	// (0x0002859c) bg_popup_call_pane_cp03

0x258c,	// (0x000285fc) call_thumbnail_pane_cp011_ParamLimits

0x258c,	// (0x000285fc) call_thumbnail_pane_cp011

0x2598,	// (0x00028608) call_type_pane_cp034_ParamLimits

0x2598,	// (0x00028608) call_type_pane_cp034

0x25d4,	// (0x00028644) popup_call_audio_second_window_g1_ParamLimits

0x25d4,	// (0x00028644) popup_call_audio_second_window_g1

0x2610,	// (0x00028680) popup_call_audio_second_window_g2_ParamLimits

0x2610,	// (0x00028680) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0003518b) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0003518b) popup_call_audio_second_window_g

0x264c,	// (0x000286bc) popup_call_audio_second_window_t1_ParamLimits

0x264c,	// (0x000286bc) popup_call_audio_second_window_t1

0x26cd,	// (0x0002873d) popup_call_audio_second_window_t2_ParamLimits

0x26cd,	// (0x0002873d) popup_call_audio_second_window_t2

0x2703,	// (0x00028773) popup_call_audio_second_window_t3_ParamLimits

0x2703,	// (0x00028773) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00035190) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00035190) popup_call_audio_second_window_t

0x24fc,	// (0x0002856c) bg_popup_call_pane_cp04

0x2739,	// (0x000287a9) list_conf_pane

0x2741,	// (0x000287b1) popup_call_audio_conf_window_t1

0x274f,	// (0x000287bf) call_thumbnail_pane_g1

0x2757,	// (0x000287c7) bg_pinb_pane_ParamLimits

0x2757,	// (0x000287c7) bg_pinb_pane

0x2765,	// (0x000287d5) find_pinb_pane

0x276e,	// (0x000287de) listscroll_pinb_pane_ParamLimits

0x276e,	// (0x000287de) listscroll_pinb_pane

0x277d,	// (0x000287ed) pinb_bg_pane_g1

0x2787,	// (0x000287f7) pinb_bg_pane_g2

0x2793,	// (0x00028803) pinb_bg_pane_g3

0x279f,	// (0x0002880f) pinb_bg_pane_g4

0x27ab,	// (0x0002881b) pinb_bg_pane_g5

0x27b7,	// (0x00028827) pinb_bg_pane_g6

0x27c2,	// (0x00028832) pinb_bg_pane_g7

0x27cd,	// (0x0002883d) pinb_bg_pane_g8

0x27d8,	// (0x00028848) pinb_bg_pane_g9

0x27e2,	// (0x00028852) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00035197) pinb_bg_pane_g

0x27ff,	// (0x0002886f) grid_pinb_pane

0x2808,	// (0x00028878) list_pinb_pane

0x2811,	// (0x00028881) scroll_pane_cp01_ParamLimits

0x2811,	// (0x00028881) scroll_pane_cp01

0x2823,	// (0x00028893) find_pinb_pane_g1_ParamLimits

0x2823,	// (0x00028893) find_pinb_pane_g1

0x283b,	// (0x000288ab) find_pinb_pane_t1

0x284d,	// (0x000288bd) find_pinb_pane_t2

0x0001,

0xf141,	// (0x000351b1) find_pinb_pane_t

0x2862,	// (0x000288d2) input_focus_pane_cp01_ParamLimits

0x2862,	// (0x000288d2) input_focus_pane_cp01

0x286e,	// (0x000288de) cell_pinb_pane_ParamLimits

0x286e,	// (0x000288de) cell_pinb_pane

0x2897,	// (0x00028907) cell_pinb_pane_g1_ParamLimits

0x2897,	// (0x00028907) cell_pinb_pane_g1

0x28a7,	// (0x00028917) cell_pinb_pane_g2_ParamLimits

0x28a7,	// (0x00028917) cell_pinb_pane_g2

0x28b3,	// (0x00028923) cell_pinb_pane_g3_ParamLimits

0x28b3,	// (0x00028923) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x000351b6) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x000351b6) cell_pinb_pane_g

0x24fc,	// (0x0002856c) grid_highlight_pane_cp01

0x28bf,	// (0x0002892f) list_pinb_item_pane_ParamLimits

0x28bf,	// (0x0002892f) list_pinb_item_pane

0x24fc,	// (0x0002856c) list_highlight_pane_cp02

0x28d1,	// (0x00028941) list_pinb_item_pane_g1_ParamLimits

0x28d1,	// (0x00028941) list_pinb_item_pane_g1

0x28de,	// (0x0002894e) list_pinb_item_pane_g2_ParamLimits

0x28de,	// (0x0002894e) list_pinb_item_pane_g2

0x28ea,	// (0x0002895a) list_pinb_item_pane_g3_ParamLimits

0x28ea,	// (0x0002895a) list_pinb_item_pane_g3

0x28fb,	// (0x0002896b) list_pinb_item_pane_g4_ParamLimits

0x28fb,	// (0x0002896b) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x000351bd) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x000351bd) list_pinb_item_pane_g

0x2907,	// (0x00028977) list_pinb_item_pane_t1_ParamLimits

0x2907,	// (0x00028977) list_pinb_item_pane_t1

0x0b78,	// (0x00026be8) calc_display_pane

0x0ba0,	// (0x00026c10) calc_paper_pane

0x0bc3,	// (0x00026c33) grid_calc_pane

0x24fc,	// (0x0002856c) bg_list_pane_cp01

0x291e,	// (0x0002898e) clock_g1

0x2926,	// (0x00028996) clock_g2

0x0001,

0xf156,	// (0x000351c6) clock_g

0x292e,	// (0x0002899e) clock_t1_ParamLimits

0x292e,	// (0x0002899e) clock_t1

0x2943,	// (0x000289b3) clock_t2_ParamLimits

0x2943,	// (0x000289b3) clock_t2

0x2955,	// (0x000289c5) clock_t3_ParamLimits

0x2955,	// (0x000289c5) clock_t3

0x2967,	// (0x000289d7) clock_t4_ParamLimits

0x2967,	// (0x000289d7) clock_t4

0x2979,	// (0x000289e9) clock_t5_ParamLimits

0x2979,	// (0x000289e9) clock_t5

0x298e,	// (0x000289fe) clock_t6_ParamLimits

0x298e,	// (0x000289fe) clock_t6

0x29a0,	// (0x00028a10) clock_t7_ParamLimits

0x29a0,	// (0x00028a10) clock_t7

0x29b2,	// (0x00028a22) clock_t8_ParamLimits

0x29b2,	// (0x00028a22) clock_t8

0x29c6,	// (0x00028a36) clock_t9_ParamLimits

0x29c6,	// (0x00028a36) clock_t9

0x0008,

0xf15b,	// (0x000351cb) clock_t_ParamLimits

0xf15b,	// (0x000351cb) clock_t

0x29da,	// (0x00028a4a) popup_clock_analogue_window_cp02

0x29da,	// (0x00028a4a) popup_clock_digital_window_cp01

0x29e2,	// (0x00028a52) listscroll_help_pane

0x24fc,	// (0x0002856c) phob_pre_status_pane

0x29ec,	// (0x00028a5c) grid_qdial_pane

0x24fc,	// (0x0002856c) listscroll_mce_pane

0x29f6,	// (0x00028a66) bg_notes_pane

0x2a04,	// (0x00028a74) list_notes_pane

0x2a12,	// (0x00028a82) scroll_pane_cp06

0x2a26,	// (0x00028a96) bg_calc_paper_pane

0xaffe,	// (0x0003106e) list_calc_pane

0x2a3a,	// (0x00028aaa) bg_calc_display_pane

0x0bf1,	// (0x00026c61) calc_display_pane_t1

0x0c03,	// (0x00026c73) calc_display_pane_t2

0xb018,	// (0x00031088) calc_display_pane_t3

0x0002,

0xf16e,	// (0x000351de) calc_display_pane_t

0x0c15,	// (0x00026c85) cell_calc_pane_ParamLimits

0x0c15,	// (0x00026c85) cell_calc_pane

0x2a46,	// (0x00028ab6) bg_calc_paper_pane_g1

0x2a52,	// (0x00028ac2) bg_calc_paper_pane_g2

0x2a5e,	// (0x00028ace) bg_calc_paper_pane_g3

0x2a6a,	// (0x00028ada) bg_calc_paper_pane_g4

0x2a76,	// (0x00028ae6) bg_calc_paper_pane_g5

0x2a82,	// (0x00028af2) bg_calc_paper_pane_g6

0x2a91,	// (0x00028b01) bg_calc_paper_pane_g7

0x2aa0,	// (0x00028b10) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x000351e5) bg_calc_paper_pane_g

0x2ab3,	// (0x00028b23) calc_bg_paper_pane_g9

0x2ac6,	// (0x00028b36) list_calc_item_pane_ParamLimits

0x2ac6,	// (0x00028b36) list_calc_item_pane

0x2ade,	// (0x00028b4e) list_calc_item_pane_g1

0xb02a,	// (0x0003109a) list_calc_item_pane_t1_ParamLimits

0xb02a,	// (0x0003109a) list_calc_item_pane_t1

0x0c4a,	// (0x00026cba) list_calc_item_pane_t2_ParamLimits

0x0c4a,	// (0x00026cba) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x000351f6) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x000351f6) list_calc_item_pane_t

0x2aeb,	// (0x00028b5b) cell_calc_pane_g1

0x2af5,	// (0x00028b65) grid_highlight_pane_cp02

0x2b17,	// (0x00028b87) bg_calc_display_pane_g1

0x0c7c,	// (0x00026cec) bg_calc_display_pane_g2

0x2b20,	// (0x00028b90) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00035200) bg_calc_display_pane_g

0x0c86,	// (0x00026cf6) cell_qdial_pane_ParamLimits

0x0c86,	// (0x00026cf6) cell_qdial_pane

0x2b29,	// (0x00028b99) cell_qdial_pane_g1_ParamLimits

0x2b29,	// (0x00028b99) cell_qdial_pane_g1

0x2b3f,	// (0x00028baf) cell_qdial_pane_g2_ParamLimits

0x2b3f,	// (0x00028baf) cell_qdial_pane_g2

0x2b50,	// (0x00028bc0) cell_qdial_pane_g3_ParamLimits

0x2b50,	// (0x00028bc0) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00035207) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00035207) cell_qdial_pane_g

0x2b72,	// (0x00028be2) cell_qdial_pane_t1_ParamLimits

0x2b72,	// (0x00028be2) cell_qdial_pane_t1

0x2b8a,	// (0x00028bfa) cell_qdial_pane_t2_ParamLimits

0x2b8a,	// (0x00028bfa) cell_qdial_pane_t2

0x2b9d,	// (0x00028c0d) cell_qdial_pane_t3_ParamLimits

0x2b9d,	// (0x00028c0d) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00035210) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00035210) cell_qdial_pane_t

0x24fc,	// (0x0002856c) grid_highlight_pane_cp04

0x2bb0,	// (0x00028c20) thumbnail_qdial_pane_ParamLimits

0x2bb0,	// (0x00028c20) thumbnail_qdial_pane

0x2c0c,	// (0x00028c7c) list_help_pane

0x2c15,	// (0x00028c85) scroll_pane_cp02

0x2c1e,	// (0x00028c8e) help_list_pane_t1_ParamLimits

0x2c1e,	// (0x00028c8e) help_list_pane_t1

0xb03c,	// (0x000310ac) bg_notes_pane_g2

0xb044,	// (0x000310b4) bg_notes_pane_g3

0xb04c,	// (0x000310bc) notes_bg_pane_g1

0xb054,	// (0x000310c4) notes_bg_pane_g4

0xb05c,	// (0x000310cc) notes_bg_pane_g5

0xb064,	// (0x000310d4) notes_bg_pane_g6

0xb06c,	// (0x000310dc) notes_bg_pane_g7

0xb074,	// (0x000310e4) notes_bg_pane_g8

0xb07c,	// (0x000310ec) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0003522e) notes_bg_pane_g

0x2c3b,	// (0x00028cab) list_notes_text_pane_ParamLimits

0x2c3b,	// (0x00028cab) list_notes_text_pane

0x2c50,	// (0x00028cc0) list_notes_text_pane_g1

0x2c59,	// (0x00028cc9) list_notes_text_pane_t1

0x2a3a,	// (0x00028aaa) listscroll_cale_week_pane

0x2c95,	// (0x00028d05) bg_cale_heading_pane

0x2ca9,	// (0x00028d19) bg_cale_pane_cp01

0x2cc2,	// (0x00028d32) cale_week_corner_pane

0x2cd8,	// (0x00028d48) cale_week_day_heading_pane

0x2cec,	// (0x00028d5c) cale_week_scroll_pane_g1

0x2cfd,	// (0x00028d6d) cale_week_scroll_pane_g2

0x2d0e,	// (0x00028d7e) cale_week_scroll_pane_g3

0x2d1f,	// (0x00028d8f) cale_week_scroll_pane_g4

0x2d30,	// (0x00028da0) cale_week_scroll_pane_g5

0x2d43,	// (0x00028db3) cale_week_scroll_pane_g6

0x2d56,	// (0x00028dc6) cale_week_scroll_pane_g7

0x2d69,	// (0x00028dd9) cale_week_scroll_pane_g8

0x2d7c,	// (0x00028dec) cale_week_scroll_pane_g9

0x2d8d,	// (0x00028dfd) cale_week_scroll_pane_g10

0x2d9e,	// (0x00028e0e) cale_week_scroll_pane_g11

0x2daf,	// (0x00028e1f) cale_week_scroll_pane_g12

0x2dc0,	// (0x00028e30) cale_week_scroll_pane_g13

0x2dd1,	// (0x00028e41) cale_week_scroll_pane_g14

0x2de2,	// (0x00028e52) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0003523d) cale_week_scroll_pane_g

0x2df3,	// (0x00028e63) cale_week_time_pane

0x2e06,	// (0x00028e76) grid_cale_week_pane

0x2e2d,	// (0x00028e9d) scroll_pane_cp08

0x2e47,	// (0x00028eb7) cell_cale_week_pane_ParamLimits

0x2e47,	// (0x00028eb7) cell_cale_week_pane

0x2e87,	// (0x00028ef7) cale_week_day_heading_pane_t1

0x2eb1,	// (0x00028f21) cale_week_day_heading_pane_t2

0x2edb,	// (0x00028f4b) cale_week_day_heading_pane_t3

0x2f05,	// (0x00028f75) cale_week_day_heading_pane_t4

0x2f2f,	// (0x00028f9f) cale_week_day_heading_pane_t5

0x2f59,	// (0x00028fc9) cale_week_day_heading_pane_t6

0x2f85,	// (0x00028ff5) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0003525c) cale_week_day_heading_pane_t

0x2faf,	// (0x0002901f) bg_cale_side_pane

0x0c9a,	// (0x00026d0a) cale_week_time_pane_t1

0x0cb2,	// (0x00026d22) cale_week_time_pane_t2

0x0cca,	// (0x00026d3a) cale_week_time_pane_t3

0x0ce2,	// (0x00026d52) cale_week_time_pane_t4

0x0cfa,	// (0x00026d6a) cale_week_time_pane_t5

0x0d12,	// (0x00026d82) cale_week_time_pane_t6

0x0d2a,	// (0x00026d9a) cale_week_time_pane_t7

0x0d42,	// (0x00026db2) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0003526b) cale_week_time_pane_t

0x2fbd,	// (0x0002902d) cell_cale_week_pane_g2

0x2fd6,	// (0x00029046) cell_cale_week_pane_g3_ParamLimits

0x2fd6,	// (0x00029046) cell_cale_week_pane_g3

0x2fee,	// (0x0002905e) grid_highlight_pane_cp07

0x2ff6,	// (0x00029066) listscroll_gms_pane

0x3000,	// (0x00029070) grid_gms_pane

0x3009,	// (0x00029079) listscroll_gms_pane_g1

0x3011,	// (0x00029081) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0003527c) listscroll_gms_pane_g

0x3019,	// (0x00029089) scroll_pane_cp010

0x3024,	// (0x00029094) cell_gms_pane_ParamLimits

0x3024,	// (0x00029094) cell_gms_pane

0x3036,	// (0x000290a6) cell_gms_pane_g1

0x303e,	// (0x000290ae) cell_gms_pane_g2

0x3046,	// (0x000290b6) cell_gms_pane_g3

0x304f,	// (0x000290bf) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00035281) cell_gms_pane_g

0x3058,	// (0x000290c8) grid_highlight_pane_cp09

0x650b,	// (0x0002c57b) phob_pre_status_pane_g1

0x6513,	// (0x0002c583) phob_pre_status_pane_g2

0x651b,	// (0x0002c58b) phob_pre_status_pane_g3

0x6523,	// (0x0002c593) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00035670) phob_pre_status_pane_g

0x6533,	// (0x0002c5a3) phob_pre_status_pane_t1

0x6541,	// (0x0002c5b1) phob_pre_status_pane_t2

0x6551,	// (0x0002c5c1) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0003567b) phob_pre_status_pane_t

0x24fc,	// (0x0002856c) bg_list_pane_cp05

0x0d62,	// (0x00026dd2) grid_vorec_pane

0xb084,	// (0x000310f4) vorec_t1

0xb092,	// (0x00031102) vorec_t2

0xb0a0,	// (0x00031110) vorec_t3

0xb0ae,	// (0x0003111e) vorec_t4

0xb0bc,	// (0x0003112c) vorec_t5

0xb0ca,	// (0x0003113a) vorec_t6

0x0006,

0xf21a,	// (0x0003528a) vorec_t

0xb0e6,	// (0x00031156) wait_bar_pane_cp01

0x3060,	// (0x000290d0) cell_vorec_pane_ParamLimits

0x3060,	// (0x000290d0) cell_vorec_pane

0x3073,	// (0x000290e3) cell_vorec_pane_g1

0x24fc,	// (0x0002856c) grid_highlight_pane_cp05

0x3095,	// (0x00029105) cams_zoom_pane

0x30a4,	// (0x00029114) image_vga_pane

0x30be,	// (0x0002912e) main_camera_pane_g1

0x30d0,	// (0x00029140) main_camera_pane_g2

0x30e0,	// (0x00029150) main_camera_pane_g3

0x30f0,	// (0x00029160) main_camera_pane_g4

0x3100,	// (0x00029170) main_camera_pane_g5

0x3110,	// (0x00029180) main_camera_pane_g6

0x3122,	// (0x00029192) main_camera_pane_g7

0x0007,

0xf229,	// (0x00035299) main_camera_pane_g

0x313e,	// (0x000291ae) main_camera_pane_t1

0x3154,	// (0x000291c4) main_camera_pane_t2

0x0001,

0xf23a,	// (0x000352aa) main_camera_pane_t

0x318e,	// (0x000291fe) cams_zoom_pane_cp_ParamLimits

0x318e,	// (0x000291fe) cams_zoom_pane_cp

0x31b6,	// (0x00029226) image_cif_pane_ParamLimits

0x31b6,	// (0x00029226) image_cif_pane

0x31f1,	// (0x00029261) image_subqcif_pane

0x31f9,	// (0x00029269) main_video_pane_g1_ParamLimits

0x31f9,	// (0x00029269) main_video_pane_g1

0x321d,	// (0x0002928d) main_video_pane_g2_ParamLimits

0x321d,	// (0x0002928d) main_video_pane_g2

0x3251,	// (0x000292c1) main_video_pane_g3_ParamLimits

0x3251,	// (0x000292c1) main_video_pane_g3

0x327f,	// (0x000292ef) main_video_pane_g4_ParamLimits

0x327f,	// (0x000292ef) main_video_pane_g4

0x32ad,	// (0x0002931d) main_video_pane_g5_ParamLimits

0x32ad,	// (0x0002931d) main_video_pane_g5

0x32c5,	// (0x00029335) main_video_pane_g6_ParamLimits

0x32c5,	// (0x00029335) main_video_pane_g6

0x0006,

0xf23f,	// (0x000352af) main_video_pane_g_ParamLimits

0xf23f,	// (0x000352af) main_video_pane_g

0x32f0,	// (0x00029360) main_video_pane_t1_ParamLimits

0x32f0,	// (0x00029360) main_video_pane_t1

0x3339,	// (0x000293a9) cams_zoom_pane_g1

0x3342,	// (0x000293b2) cams_zoom_pane_g2

0x334b,	// (0x000293bb) cams_zoom_pane_g3

0x3354,	// (0x000293c4) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x000352be) cams_zoom_pane_g

0x3371,	// (0x000293e1) grid_cams_pane

0x338b,	// (0x000293fb) linegrid_cams_pane

0x339f,	// (0x0002940f) cell_cams_pane_ParamLimits

0x339f,	// (0x0002940f) cell_cams_pane

0x33bf,	// (0x0002942f) cams_burst_image_pane

0x33c7,	// (0x00029437) cell_cams_pane_g1

0x24fc,	// (0x0002856c) grid_highlight_pane_cp03

0x2aeb,	// (0x00028b5b) mp_bg_pane_g1

0x24fc,	// (0x0002856c) bg_list_pane_cp03

0xbc14,	// (0x00031c84) bg_mp_pane

0xbc1c,	// (0x00031c8c) grid_mp_pane

0xbc24,	// (0x00031c94) media_player_g1

0xbc2c,	// (0x00031c9c) media_player_t1

0xbc3a,	// (0x00031caa) media_player_t2

0xbc48,	// (0x00031cb8) media_player_t3

0xbc56,	// (0x00031cc6) media_player_t4

0xbc64,	// (0x00031cd4) media_player_t5

0xbc72,	// (0x00031ce2) media_player_t6

0xbc80,	// (0x00031cf0) media_player_t7

0x0006,

0xf5ea,	// (0x0003565a) media_player_t

0xbc8e,	// (0x00031cfe) wait_bar_pane_cp02

0xf5cf,	// (0x0003563f) main_usb_pane_t

0x6502,	// (0x0002c572) cell_mp_pane

0x2aeb,	// (0x00028b5b) cell_mp_pane_g1

0x24fc,	// (0x0002856c) grid_highlight_pane_cp06

0x34c1,	// (0x00029531) grid_skin_colour_pane

0x34c9,	// (0x00029539) list_highlight_pane_cp03

0x34d1,	// (0x00029541) skin_g1

0x34d9,	// (0x00029549) skin_t1

0x34e8,	// (0x00029558) skin_t2

0x0001,

0xf283,	// (0x000352f3) skin_t

0x34f6,	// (0x00029566) cell_skin_colour_pane_ParamLimits

0x34f6,	// (0x00029566) cell_skin_colour_pane

0x3516,	// (0x00029586) cell_skin_colour_pane_g1

0x3581,	// (0x000295f1) call_video_g1_ParamLimits

0x3581,	// (0x000295f1) call_video_g1

0x359d,	// (0x0002960d) call_video_g2_ParamLimits

0x359d,	// (0x0002960d) call_video_g2

0x0001,

0xf288,	// (0x000352f8) call_video_g_ParamLimits

0xf288,	// (0x000352f8) call_video_g

0x35ef,	// (0x0002965f) call_video_uplink_pane_cp1_ParamLimits

0x35ef,	// (0x0002965f) call_video_uplink_pane_cp1

0x3654,	// (0x000296c4) call_video_uplink_pane_cp2

0x3696,	// (0x00029706) video_down_crop_pane_ParamLimits

0x3696,	// (0x00029706) video_down_crop_pane

0x378d,	// (0x000297fd) video_down_pane_ParamLimits

0x378d,	// (0x000297fd) video_down_pane

0x3884,	// (0x000298f4) video_down_subqcif_pane_ParamLimits

0x3884,	// (0x000298f4) video_down_subqcif_pane

0x389c,	// (0x0002990c) video_down_subqcif_pane_cp_ParamLimits

0x389c,	// (0x0002990c) video_down_subqcif_pane_cp

0x38d9,	// (0x00029949) im_reading_pane_ParamLimits

0x38d9,	// (0x00029949) im_reading_pane

0x38eb,	// (0x0002995b) im_writing_pane_ParamLimits

0x38eb,	// (0x0002995b) im_writing_pane

0x3909,	// (0x00029979) im_reading_pane_t1

0x3942,	// (0x000299b2) list_im_pane

0x3953,	// (0x000299c3) scroll_pane_cp07

0x396c,	// (0x000299dc) im_writing_pane_t1_ParamLimits

0x396c,	// (0x000299dc) im_writing_pane_t1

0x3981,	// (0x000299f1) im_writing_pane_t2_ParamLimits

0x3981,	// (0x000299f1) im_writing_pane_t2

0x0001,

0xf292,	// (0x00035302) im_writing_pane_t_ParamLimits

0xf292,	// (0x00035302) im_writing_pane_t

0x24fc,	// (0x0002856c) input_focus_pane_cp04

0x24fc,	// (0x0002856c) input_focus_pane_cp05

0x399e,	// (0x00029a0e) list_im_single_pane_ParamLimits

0x399e,	// (0x00029a0e) list_im_single_pane

0x39b2,	// (0x00029a22) list_single_im_pane_t1

0x64c2,	// (0x0002c532) blid_accuracy_pane

0x64ca,	// (0x0002c53a) blid_compass_pane

0x64d4,	// (0x0002c544) main_location_t1

0x64e4,	// (0x0002c554) main_location_t2

0x64f4,	// (0x0002c564) main_location_t3

0x0002,

0xf5f9,	// (0x00035669) main_location_t

0x24fc,	// (0x0002856c) aid_levels_location

0x2aeb,	// (0x00028b5b) blid_accuracy_pane_g1

0x2aeb,	// (0x00028b5b) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00035364) blid_accuracy_pane_g

0x39ec,	// (0x00029a5c) wml_content_pane

0x3a2a,	// (0x00029a9a) wml_button_pane_ParamLimits

0x3a2a,	// (0x00029a9a) wml_button_pane

0x3a3e,	// (0x00029aae) wml_list_single_large_pane_ParamLimits

0x3a3e,	// (0x00029aae) wml_list_single_large_pane

0x3a53,	// (0x00029ac3) wml_list_single_medium_pane_ParamLimits

0x3a53,	// (0x00029ac3) wml_list_single_medium_pane

0x3a69,	// (0x00029ad9) wml_list_single_small_pane_ParamLimits

0x3a69,	// (0x00029ad9) wml_list_single_small_pane

0x3a81,	// (0x00029af1) wml_selection_box_pane_ParamLimits

0x3a81,	// (0x00029af1) wml_selection_box_pane

0x3a94,	// (0x00029b04) wml_list_single_pane_t1

0x3aa3,	// (0x00029b13) wml_list_single_medium_pane_t1

0x3ab2,	// (0x00029b22) wml_list_single_large_pane_t1

0x3ac1,	// (0x00029b31) input_focus_pane_cp02_ParamLimits

0x3ac1,	// (0x00029b31) input_focus_pane_cp02

0x3ad4,	// (0x00029b44) wml_selection_box_pane_g1

0x3add,	// (0x00029b4d) wml_selection_box_pane_t1_ParamLimits

0x3add,	// (0x00029b4d) wml_selection_box_pane_t1

0x2757,	// (0x000287c7) bg_wml_button_pane_ParamLimits

0x2757,	// (0x000287c7) bg_wml_button_pane

0x3af5,	// (0x00029b65) wml_button_pane_g1

0x3afd,	// (0x00029b6d) wml_button_pane_t1

0x3af5,	// (0x00029b65) wml_button_bg_pane_g1

0x3b0d,	// (0x00029b7d) wml_button_bg_pane_g2

0x3b15,	// (0x00029b85) wml_button_bg_pane_g3

0x3b1d,	// (0x00029b8d) wml_button_bg_pane_g4

0x3b25,	// (0x00029b95) wml_button_bg_pane_g5

0x3b2d,	// (0x00029b9d) wml_button_bg_pane_g6

0x3b35,	// (0x00029ba5) wml_button_bg_pane_g7

0x3b3d,	// (0x00029bad) wml_button_bg_pane_g8

0x3b45,	// (0x00029bb5) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x00035307) wml_button_bg_pane_g

0x3b4d,	// (0x00029bbd) bg_list_pane_cp02

0x3b55,	// (0x00029bc5) mce_header_pane_ParamLimits

0x3b55,	// (0x00029bc5) mce_header_pane

0x3b6b,	// (0x00029bdb) mce_icon_pane

0x3b6b,	// (0x00029bdb) mce_image_pane

0x3b74,	// (0x00029be4) mce_text_pane_ParamLimits

0x3b74,	// (0x00029be4) mce_text_pane

0x3b87,	// (0x00029bf7) scroll_pane_cp03

0x3a22,	// (0x00029a92) scroll_pane_cp04

0x3b91,	// (0x00029c01) scroll_pane_cp05_ParamLimits

0x3b91,	// (0x00029c01) scroll_pane_cp05

0x3b9d,	// (0x00029c0d) mce_header_field_pane_ParamLimits

0x3b9d,	// (0x00029c0d) mce_header_field_pane

0x3bb4,	// (0x00029c24) mce_header_field_pane_2_ParamLimits

0x3bb4,	// (0x00029c24) mce_header_field_pane_2

0x3bca,	// (0x00029c3a) mce_header_field_pane_3

0x3bd2,	// (0x00029c42) list_single_mce_message_pane_ParamLimits

0x3bd2,	// (0x00029c42) list_single_mce_message_pane

0x3be7,	// (0x00029c57) list_single_mce_smart_pane_ParamLimits

0x3be7,	// (0x00029c57) list_single_mce_smart_pane

0x3c07,	// (0x00029c77) input_focus_pane_cp03

0x3c10,	// (0x00029c80) list_header_data_pane

0x3c18,	// (0x00029c88) mce_header_field_pane_t1

0x3c28,	// (0x00029c98) list_single_mce_header_pane_ParamLimits

0x3c28,	// (0x00029c98) list_single_mce_header_pane

0x3c3c,	// (0x00029cac) list_single_mce_header_pane_t1

0x3c4b,	// (0x00029cbb) list_single_mce_message_pane_g1

0x3c53,	// (0x00029cc3) list_single_mce_message_pane_t1

0x3c7f,	// (0x00029cef) bg_cale_heading_pane_cp01_ParamLimits

0x3c7f,	// (0x00029cef) bg_cale_heading_pane_cp01

0x3ca2,	// (0x00029d12) bg_cale_pane_cp02_ParamLimits

0x3ca2,	// (0x00029d12) bg_cale_pane_cp02

0x3cc5,	// (0x00029d35) cale_month_corner_pane

0x3cdb,	// (0x00029d4b) cale_month_day_heading_pane_ParamLimits

0x3cdb,	// (0x00029d4b) cale_month_day_heading_pane

0x3d0e,	// (0x00029d7e) cale_month_pane_g1_ParamLimits

0x3d0e,	// (0x00029d7e) cale_month_pane_g1

0x3d2a,	// (0x00029d9a) cale_month_pane_g2_ParamLimits

0x3d2a,	// (0x00029d9a) cale_month_pane_g2

0x3d45,	// (0x00029db5) cale_month_pane_g3_ParamLimits

0x3d45,	// (0x00029db5) cale_month_pane_g3

0x3d71,	// (0x00029de1) cale_month_pane_g4_ParamLimits

0x3d71,	// (0x00029de1) cale_month_pane_g4

0x3d9d,	// (0x00029e0d) cale_month_pane_g5_ParamLimits

0x3d9d,	// (0x00029e0d) cale_month_pane_g5

0x3dd1,	// (0x00029e41) cale_month_pane_g6_ParamLimits

0x3dd1,	// (0x00029e41) cale_month_pane_g6

0x3e0d,	// (0x00029e7d) cale_month_pane_g7_ParamLimits

0x3e0d,	// (0x00029e7d) cale_month_pane_g7

0x3e49,	// (0x00029eb9) cale_month_pane_g8_ParamLimits

0x3e49,	// (0x00029eb9) cale_month_pane_g8

0x3e85,	// (0x00029ef5) cale_month_pane_g9_ParamLimits

0x3e85,	// (0x00029ef5) cale_month_pane_g9

0x3ebf,	// (0x00029f2f) cale_month_pane_g10_ParamLimits

0x3ebf,	// (0x00029f2f) cale_month_pane_g10

0x3ef9,	// (0x00029f69) cale_month_pane_g11_ParamLimits

0x3ef9,	// (0x00029f69) cale_month_pane_g11

0x3f33,	// (0x00029fa3) cale_month_pane_g12_ParamLimits

0x3f33,	// (0x00029fa3) cale_month_pane_g12

0x3f6d,	// (0x00029fdd) cale_month_pane_g13_ParamLimits

0x3f6d,	// (0x00029fdd) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0003531a) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0003531a) cale_month_pane_g

0x3fb9,	// (0x0002a029) cale_month_week_pane

0x3fcc,	// (0x0002a03c) grid_cale_month_pane_ParamLimits

0x3fcc,	// (0x0002a03c) grid_cale_month_pane

0x3ffa,	// (0x0002a06a) cale_month_day_heading_pane_t1

0x4058,	// (0x0002a0c8) cale_month_day_heading_pane_t2

0x40bd,	// (0x0002a12d) cale_month_day_heading_pane_t3

0x4122,	// (0x0002a192) cale_month_day_heading_pane_t4

0x4187,	// (0x0002a1f7) cale_month_day_heading_pane_t5

0x41fc,	// (0x0002a26c) cale_month_day_heading_pane_t6

0x4271,	// (0x0002a2e1) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00035335) cale_month_day_heading_pane_t

0x2faf,	// (0x0002901f) bg_cale_side_pane_cp01

0x42e6,	// (0x0002a356) cale_month_week_pane_t1

0x42fd,	// (0x0002a36d) cale_month_week_pane_t2

0x4314,	// (0x0002a384) cale_month_week_pane_t3

0x432b,	// (0x0002a39b) cale_month_week_pane_t4

0x4342,	// (0x0002a3b2) cale_month_week_pane_t5

0x4359,	// (0x0002a3c9) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00035344) cale_month_week_pane_t

0x4370,	// (0x0002a3e0) cell_cale_month_pane_ParamLimits

0x4370,	// (0x0002a3e0) cell_cale_month_pane

0xb0ee,	// (0x0003115e) cell_cale_month_pane_g1

0x0d6a,	// (0x00026dda) cell_cale_month_pane_t1_ParamLimits

0x0d6a,	// (0x00026dda) cell_cale_month_pane_t1

0x2fee,	// (0x0002905e) grid_highlight_pane_cp08

0x2aeb,	// (0x00028b5b) main_smil_g1

0x4470,	// (0x0002a4e0) smil_status_pane

0x4479,	// (0x0002a4e9) smil_text_pane

0xbb34,	// (0x00031ba4) bg_popup_call3_rect_pane_g8

0xbb3c,	// (0x00031bac) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000355fd) bg_popup_call3_rect_pane_g

0xbdb6,	// (0x00031e26) smil_status_volume_pane_g1

0x448d,	// (0x0002a4fd) smil_status_pane_t1

0xbde9,	// (0x00031e59) volume_smil_pane

0x44a4,	// (0x0002a514) list_smil_text_pane

0x44ae,	// (0x0002a51e) scroll_pane_cp011

0x44b9,	// (0x0002a529) smil_text_list_pane_t1_ParamLimits

0x44b9,	// (0x0002a529) smil_text_list_pane_t1

0xb0fa,	// (0x0003116a) aid_volume_smil_ParamLimits

0xb0fa,	// (0x0003116a) aid_volume_smil

0x2aeb,	// (0x00028b5b) smil_volume_pane_g1

0x2aeb,	// (0x00028b5b) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00035364) smil_volume_pane_g

0x2a3a,	// (0x00028aaa) listscroll_cale_day_pane

0x44ff,	// (0x0002a56f) bg_cale_pane

0x4517,	// (0x0002a587) list_cale_pane

0x4528,	// (0x0002a598) scroll_pane_cp09

0x4539,	// (0x0002a5a9) cale_bg_pane_g1

0x4541,	// (0x0002a5b1) cale_bg_pane_g2

0x4549,	// (0x0002a5b9) cale_bg_pane_g3

0x4551,	// (0x0002a5c1) cale_bg_pane_g4

0x4559,	// (0x0002a5c9) cale_bg_pane_g5

0x4561,	// (0x0002a5d1) cale_bg_pane_g6

0x4569,	// (0x0002a5d9) cale_bg_pane_g7

0x4571,	// (0x0002a5e1) cale_bg_pane_g8

0x4579,	// (0x0002a5e9) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00035369) cale_bg_pane_g

0x4581,	// (0x0002a5f1) list_cale_time_pane_ParamLimits

0x4581,	// (0x0002a5f1) list_cale_time_pane

0x4594,	// (0x0002a604) list_cale_time_pane_g1_ParamLimits

0x4594,	// (0x0002a604) list_cale_time_pane_g1

0x45a0,	// (0x0002a610) list_cale_time_pane_g2_ParamLimits

0x45a0,	// (0x0002a610) list_cale_time_pane_g2

0x45ad,	// (0x0002a61d) list_cale_time_pane_g3_ParamLimits

0x45ad,	// (0x0002a61d) list_cale_time_pane_g3

0x45bb,	// (0x0002a62b) list_cale_time_pane_g4_ParamLimits

0x45bb,	// (0x0002a62b) list_cale_time_pane_g4

0x45c9,	// (0x0002a639) list_cale_time_pane_g5_ParamLimits

0x45c9,	// (0x0002a639) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0003537c) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0003537c) list_cale_time_pane_g

0x45e4,	// (0x0002a654) list_cale_time_pane_t1_ParamLimits

0x45e4,	// (0x0002a654) list_cale_time_pane_t1

0x460c,	// (0x0002a67c) list_cale_time_pane_t2_ParamLimits

0x460c,	// (0x0002a67c) list_cale_time_pane_t2

0x4db1,	// (0x0002ae21) aid_blid_cardinal_pane

0x4dfb,	// (0x0002ae6b) compass_pane_t4

0x4634,	// (0x0002a6a4) list_cale_time_pane_t4_ParamLimits

0x4634,	// (0x0002a6a4) list_cale_time_pane_t4

0x4e09,	// (0x0002ae79) compass_pane_t5

0x4e17,	// (0x0002ae87) compass_pane_t6

0x4e25,	// (0x0002ae95) compass_pane_t7

0x4ebb,	// (0x0002af2b) navi_pane_cc_t1

0x50d4,	// (0x0002b144) aid_phob_thumbnail_center_pane

0x57a3,	// (0x0002b813) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00035389) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00035389) list_cale_time_pane_t

0x212f,	// (0x0002819f) bg_popup_window_pane_cp02_ParamLimits

0x212f,	// (0x0002819f) bg_popup_window_pane_cp02

0x465c,	// (0x0002a6cc) heading_pane_cp01_ParamLimits

0x465c,	// (0x0002a6cc) heading_pane_cp01

0x4668,	// (0x0002a6d8) loc_req_pane_ParamLimits

0x4668,	// (0x0002a6d8) loc_req_pane

0x4678,	// (0x0002a6e8) loc_type_pane_ParamLimits

0x4678,	// (0x0002a6e8) loc_type_pane

0x468a,	// (0x0002a6fa) loc_type_pane_t1_ParamLimits

0x468a,	// (0x0002a6fa) loc_type_pane_t1

0x469c,	// (0x0002a70c) loc_type_pane_t2_ParamLimits

0x469c,	// (0x0002a70c) loc_type_pane_t2

0x46ae,	// (0x0002a71e) loc_type_pane_t3_ParamLimits

0x46ae,	// (0x0002a71e) loc_type_pane_t3

0x0002,

0xf320,	// (0x00035390) loc_type_pane_t_ParamLimits

0xf320,	// (0x00035390) loc_type_pane_t

0x46c0,	// (0x0002a730) list_loc_req_pane

0x46ca,	// (0x0002a73a) scroll_pane_cp012

0x46d5,	// (0x0002a745) list_single_loc_request_popup_menu_pane_ParamLimits

0x46d5,	// (0x0002a745) list_single_loc_request_popup_menu_pane

0x46e2,	// (0x0002a752) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x46e2,	// (0x0002a752) list_single_loc_request_popup_menu_pane_g1

0x46ee,	// (0x0002a75e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x46ee,	// (0x0002a75e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00035397) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00035397) list_single_loc_request_popup_menu_pane_g

0x46fa,	// (0x0002a76a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x46fa,	// (0x0002a76a) list_single_loc_request_popup_menu_pane_t1

0x2757,	// (0x000287c7) bg_popup_window_pane_cp03_ParamLimits

0x2757,	// (0x000287c7) bg_popup_window_pane_cp03

0x4710,	// (0x0002a780) heading_loc_req_pane_ParamLimits

0x4710,	// (0x0002a780) heading_loc_req_pane

0x471c,	// (0x0002a78c) popup_dyc_status_message_window_g1_ParamLimits

0x471c,	// (0x0002a78c) popup_dyc_status_message_window_g1

0x4730,	// (0x0002a7a0) popup_dyc_status_message_window_t1_ParamLimits

0x4730,	// (0x0002a7a0) popup_dyc_status_message_window_t1

0x4745,	// (0x0002a7b5) popup_dyc_status_message_window_t2_ParamLimits

0x4745,	// (0x0002a7b5) popup_dyc_status_message_window_t2

0x475a,	// (0x0002a7ca) popup_dyc_status_message_window_t3_ParamLimits

0x475a,	// (0x0002a7ca) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0003539c) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0003539c) popup_dyc_status_message_window_t

0x24fc,	// (0x0002856c) bg_heading_pane_cp01

0x4776,	// (0x0002a7e6) heading_loc_req_pane_g1

0x477e,	// (0x0002a7ee) heading_loc_req_pane_g2

0x4786,	// (0x0002a7f6) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x000353a3) heading_loc_req_pane_g

0x478e,	// (0x0002a7fe) heading_loc_req_pane_t1

0x4884,	// (0x0002a8f4) bg_popup_sub_pane_cp01_ParamLimits

0x4884,	// (0x0002a8f4) bg_popup_sub_pane_cp01

0x4892,	// (0x0002a902) popup_cale_events_window_g1_ParamLimits

0x4892,	// (0x0002a902) popup_cale_events_window_g1

0x48b2,	// (0x0002a922) popup_cale_events_window_g2_ParamLimits

0x48b2,	// (0x0002a922) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x000353d7) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x000353d7) popup_cale_events_window_g

0x48d2,	// (0x0002a942) popup_cale_events_window_t1_ParamLimits

0x48d2,	// (0x0002a942) popup_cale_events_window_t1

0x48e4,	// (0x0002a954) popup_cale_events_window_t2_ParamLimits

0x48e4,	// (0x0002a954) popup_cale_events_window_t2

0x4922,	// (0x0002a992) popup_cale_events_window_t3_ParamLimits

0x4922,	// (0x0002a992) popup_cale_events_window_t3

0x495c,	// (0x0002a9cc) popup_cale_events_window_t4_ParamLimits

0x495c,	// (0x0002a9cc) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x000353dc) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x000353dc) popup_cale_events_window_t

0x4992,	// (0x0002aa02) call_type_pane

0x49a2,	// (0x0002aa12) popup_call_status_window_g1

0x49b6,	// (0x0002aa26) popup_call_status_window_g2

0x49ca,	// (0x0002aa3a) popup_call_status_window_g3

0x0002,

0xf375,	// (0x000353e5) popup_call_status_window_g

0x49d9,	// (0x0002aa49) call_type_pane_g1

0x49e2,	// (0x0002aa52) call_type_pane_g2

0x0001,

0xf37c,	// (0x000353ec) call_type_pane_g

0x24fc,	// (0x0002856c) bg_popup_sub_pane_cp02

0x49eb,	// (0x0002aa5b) listscroll_popup_wml_pane

0x49f3,	// (0x0002aa63) list_wml_pane

0x49fd,	// (0x0002aa6d) scroll_pane_cp013

0x4a08,	// (0x0002aa78) list_single_graphic_popup_wml_pane_ParamLimits

0x4a08,	// (0x0002aa78) list_single_graphic_popup_wml_pane

0x2aeb,	// (0x00028b5b) list_single_graphic_popup_wml_pane_g1

0x4a1c,	// (0x0002aa8c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000353f1) list_single_graphic_popup_wml_pane_g

0x4a24,	// (0x0002aa94) list_single_graphic_popup_wml_pane_t1

0x4a3a,	// (0x0002aaaa) aid_call_pane

0x274f,	// (0x000287bf) popup_clock_analogue_window_g1

0x274f,	// (0x000287bf) popup_clock_analogue_window_g2

0xb11c,	// (0x0003118c) popup_clock_analogue_window_g3

0xb11c,	// (0x0003118c) popup_clock_analogue_window_g4

0x2aeb,	// (0x00028b5b) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000353f6) popup_clock_analogue_window_g

0xb124,	// (0x00031194) popup_clock_analogue_window_t1

0xb132,	// (0x000311a2) clock_digital_number_pane_ParamLimits

0xb132,	// (0x000311a2) clock_digital_number_pane

0xb13e,	// (0x000311ae) clock_digital_number_pane_cp02_ParamLimits

0xb13e,	// (0x000311ae) clock_digital_number_pane_cp02

0xb14a,	// (0x000311ba) clock_digital_number_pane_cp03_ParamLimits

0xb14a,	// (0x000311ba) clock_digital_number_pane_cp03

0xb156,	// (0x000311c6) clock_digital_number_pane_cp04_ParamLimits

0xb156,	// (0x000311c6) clock_digital_number_pane_cp04

0xb166,	// (0x000311d6) clock_digital_separator_pane_ParamLimits

0xb166,	// (0x000311d6) clock_digital_separator_pane

0xb172,	// (0x000311e2) popup_clock_digital_window_t1

0x2aeb,	// (0x00028b5b) clock_digital_number_pane_g1

0x2aeb,	// (0x00028b5b) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00035364) clock_digital_number_pane_g

0x2aeb,	// (0x00028b5b) clock_digital_separator_pane_g1

0x2aeb,	// (0x00028b5b) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00035364) clock_digital_separator_pane_g

0x24fc,	// (0x0002856c) bg_popup_window_pane_cp04

0x4a42,	// (0x0002aab2) heading_pane_cp03

0x4a4a,	// (0x0002aaba) listscroll_popup_gms_pane

0x4a52,	// (0x0002aac2) grid_large_graphic_popup_pane

0x4a5c,	// (0x0002aacc) listscroll_popup_gms_pane_g1

0x4a64,	// (0x0002aad4) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00035401) listscroll_popup_gms_pane_g

0x3a22,	// (0x00029a92) scroll_pane_cp014

0x4a6c,	// (0x0002aadc) cell_large_graphic_popup_pane_ParamLimits

0x4a6c,	// (0x0002aadc) cell_large_graphic_popup_pane

0x4a84,	// (0x0002aaf4) cell_large_graphic_popup_pane_g1_ParamLimits

0x4a84,	// (0x0002aaf4) cell_large_graphic_popup_pane_g1

0x4a90,	// (0x0002ab00) cell_large_graphic_popup_pane_g2_ParamLimits

0x4a90,	// (0x0002ab00) cell_large_graphic_popup_pane_g2

0x4a9c,	// (0x0002ab0c) cell_large_graphic_popup_pane_g3_ParamLimits

0x4a9c,	// (0x0002ab0c) cell_large_graphic_popup_pane_g3

0x4aa9,	// (0x0002ab19) cell_large_graphic_popup_pane_g4_ParamLimits

0x4aa9,	// (0x0002ab19) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x00035406) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x00035406) cell_large_graphic_popup_pane_g

0x4ab9,	// (0x0002ab29) grid_highlight_pane_cp010

0x2aeb,	// (0x00028b5b) bg_popup_call_pane_g1

0x4ac3,	// (0x0002ab33) list_single_graphic_popup_conf_pane_ParamLimits

0x4ac3,	// (0x0002ab33) list_single_graphic_popup_conf_pane

0x4ad6,	// (0x0002ab46) list_highlight_pane_cp01

0x4adf,	// (0x0002ab4f) list_single_graphic_popup_conf_pane_g1

0x4ae7,	// (0x0002ab57) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0003540f) list_single_graphic_popup_conf_pane_g

0x4aef,	// (0x0002ab5f) list_single_graphic_popup_conf_pane_t1

0x4afd,	// (0x0002ab6d) linegrid_cams_pane_g1

0x4b06,	// (0x0002ab76) linegrid_cams_pane_g2

0x3046,	// (0x000290b6) linegrid_cams_pane_g3

0x4b0f,	// (0x0002ab7f) linegrid_cams_pane_g4

0x4b18,	// (0x0002ab88) linegrid_cams_pane_g5

0x4b21,	// (0x0002ab91) linegrid_cams_pane_g6

0x304f,	// (0x000290bf) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x00035414) linegrid_cams_pane_g

0x4b2c,	// (0x0002ab9c) popup_clock_analogue_window

0x4b2c,	// (0x0002ab9c) popup_clock_digital_window

0x24fc,	// (0x0002856c) popup_phob_thumbnail_window

0x2aeb,	// (0x00028b5b) call_video_uplink_pane_g1

0x4b35,	// (0x0002aba5) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00035423) call_video_uplink_pane_g

0x4b3d,	// (0x0002abad) video_uplink_pane

0x4b45,	// (0x0002abb5) mce_image_pane_g1

0x4b4f,	// (0x0002abbf) mce_image_pane_g2

0x4b59,	// (0x0002abc9) mce_image_pane_g3

0x4b61,	// (0x0002abd1) mce_image_pane_g4

0x4b69,	// (0x0002abd9) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00035428) mce_image_pane_g

0x4b71,	// (0x0002abe1) control_top_pane_stacon_cp01_ParamLimits

0x4b71,	// (0x0002abe1) control_top_pane_stacon_cp01

0x4b85,	// (0x0002abf5) uni_indicator_pane_stacon_cp01_ParamLimits

0x4b85,	// (0x0002abf5) uni_indicator_pane_stacon_cp01

0x4b96,	// (0x0002ac06) bg_popup_sub_pane_cp03

0x4ba0,	// (0x0002ac10) chi_dic_find_pane

0x4ba8,	// (0x0002ac18) listscroll_chi_dic_pane

0x4bb1,	// (0x0002ac21) main_pane_chidic_g1

0x4bc4,	// (0x0002ac34) chi_dic_find_pane_t1

0x4bd2,	// (0x0002ac42) find_chidic_pane

0x4bdb,	// (0x0002ac4b) chi_dic_list_pane_ParamLimits

0x4bdb,	// (0x0002ac4b) chi_dic_list_pane

0x4bec,	// (0x0002ac5c) scroll_pane_cp020

0x4bf4,	// (0x0002ac64) find_chidic_pane_t1

0x24fc,	// (0x0002856c) input_focus_pane_cp06

0x4c03,	// (0x0002ac73) list_chi_dic_pane_ParamLimits

0x4c03,	// (0x0002ac73) list_chi_dic_pane

0x4c15,	// (0x0002ac85) list_chi_dic_pane_t1_ParamLimits

0x4c15,	// (0x0002ac85) list_chi_dic_pane_t1

0x24fc,	// (0x0002856c) list_highlight_pane_cp020

0x4c28,	// (0x0002ac98) bg_cale_heading_pane_g1

0x4c30,	// (0x0002aca0) bg_cale_heading_pane_g2

0x4c38,	// (0x0002aca8) bg_cale_heading_pane_g3

0x4c40,	// (0x0002acb0) bg_cale_heading_pane_g4

0x4c4a,	// (0x0002acba) bg_cale_heading_pane_g5

0x4c54,	// (0x0002acc4) bg_cale_heading_pane_g6

0x4c5c,	// (0x0002accc) bg_cale_heading_pane_g7

0x4c64,	// (0x0002acd4) bg_cale_heading_pane_g8

0x4c6e,	// (0x0002acde) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00035433) bg_cale_heading_pane_g

0x4c28,	// (0x0002ac98) bg_cale_side_pane_g1

0x4c78,	// (0x0002ace8) bg_cale_side_pane_g2

0x4c80,	// (0x0002acf0) bg_cale_side_pane_g3

0x4c88,	// (0x0002acf8) bg_cale_side_pane_g4

0x4c90,	// (0x0002ad00) bg_cale_side_pane_g5

0x4c98,	// (0x0002ad08) bg_cale_side_pane_g6

0x4ca0,	// (0x0002ad10) bg_cale_side_pane_g7

0x4ca8,	// (0x0002ad18) bg_cale_side_pane_g8

0x4cb0,	// (0x0002ad20) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00035446) bg_cale_side_pane_g

0x4cb8,	// (0x0002ad28) popup_call_status_window_ParamLimits

0x4cb8,	// (0x0002ad28) popup_call_status_window

0x4d01,	// (0x0002ad71) stacon_top_pane

0x4d09,	// (0x0002ad79) status_pane_ParamLimits

0x4d09,	// (0x0002ad79) status_pane

0x4d1e,	// (0x0002ad8e) status_small_pane

0x4d26,	// (0x0002ad96) control_pane

0x24fc,	// (0x0002856c) stacon_bottom_pane

0x4d2e,	// (0x0002ad9e) list_single_mce_smart_pane_t1_ParamLimits

0x4d2e,	// (0x0002ad9e) list_single_mce_smart_pane_t1

0x4d41,	// (0x0002adb1) list_single_mce_smart_pane_t2_ParamLimits

0x4d41,	// (0x0002adb1) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00035459) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00035459) list_single_mce_smart_pane_t

0x4d60,	// (0x0002add0) compass_pane

0x4d69,	// (0x0002add9) main_location2_pane_t1

0x4d7b,	// (0x0002adeb) main_location2_pane_t2

0x4d8d,	// (0x0002adfd) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0003545e) main_location2_pane_t

0x4dd1,	// (0x0002ae41) compass_pane_g1_ParamLimits

0x4dd1,	// (0x0002ae41) compass_pane_g1

0x4ddd,	// (0x0002ae4d) compass_pane_t1

0x4dec,	// (0x0002ae5c) compass_pane_t2

0x0005,

0xf3f7,	// (0x00035467) compass_pane_t

0x4e33,	// (0x0002aea3) text_secondary_cp61

0x4eb2,	// (0x0002af22) navi_pane_cams_g5

0x4f2c,	// (0x0002af9c) navi_pane_im_t1

0x4f3a,	// (0x0002afaa) navi_pane_mp_g1_ParamLimits

0x4f3a,	// (0x0002afaa) navi_pane_mp_g1

0x4f4e,	// (0x0002afbe) navi_pane_mp_g2_ParamLimits

0x4f4e,	// (0x0002afbe) navi_pane_mp_g2

0x4f5a,	// (0x0002afca) navi_pane_mp_g3_ParamLimits

0x4f5a,	// (0x0002afca) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0003547b) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0003547b) navi_pane_mp_g

0x4f66,	// (0x0002afd6) navi_pane_mp_t1

0x4f74,	// (0x0002afe4) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00035482) navi_pane_mp_t

0x501d,	// (0x0002b08d) navi_pane_vt_g1

0x4f66,	// (0x0002afd6) navi_pane_vt_t1

0x5025,	// (0x0002b095) navi_slider_pane

0x502d,	// (0x0002b09d) zooming_pane

0x5035,	// (0x0002b0a5) navi_slider_pane_g1

0xb18f,	// (0x000311ff) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00035489) navi_slider_pane_g

0x5059,	// (0x0002b0c9) aid_levels_zoom

0x5061,	// (0x0002b0d1) zooming_pane_g1

0x5069,	// (0x0002b0d9) zooming_pane_g2

0x5069,	// (0x0002b0d9) zooming_pane_g3

0x0002,

0xf428,	// (0x00035498) zooming_pane_g

0x5071,	// (0x0002b0e1) level_10_zoom

0x507a,	// (0x0002b0ea) level_11_zoom

0x5083,	// (0x0002b0f3) level_1_zoom

0x508c,	// (0x0002b0fc) level_2_zoom

0x5095,	// (0x0002b105) level_3_zoom

0x509e,	// (0x0002b10e) level_4_zoom

0x50a7,	// (0x0002b117) level_5_zoom

0x50b0,	// (0x0002b120) level_6_zoom

0x50b9,	// (0x0002b129) level_7_zoom

0x50c2,	// (0x0002b132) level_8_zoom

0x50cb,	// (0x0002b13b) level_9_zoom

0x50dc,	// (0x0002b14c) popup_phob_thumbnail_window_g1

0x50e4,	// (0x0002b154) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0003549f) popup_phob_thumbnail_window_g

0xbc96,	// (0x00031d06) level_1_location

0xbc9e,	// (0x00031d0e) level_2_location

0xbca6,	// (0x00031d16) level_3_location

0xbcae,	// (0x00031d1e) level_4_location

0x502d,	// (0x0002b09d) level_5_location

0x50ec,	// (0x0002b15c) mce_icon_pane_g1

0x50f4,	// (0x0002b164) mce_icon_pane_g2

0x0001,

0xf434,	// (0x000354a4) mce_icon_pane_g

0x50fc,	// (0x0002b16c) main_mup_pane_g1_ParamLimits

0x50fc,	// (0x0002b16c) main_mup_pane_g1

0x5112,	// (0x0002b182) main_mup_pane_g2_ParamLimits

0x5112,	// (0x0002b182) main_mup_pane_g2

0x512a,	// (0x0002b19a) main_mup_pane_g3_ParamLimits

0x512a,	// (0x0002b19a) main_mup_pane_g3

0x5142,	// (0x0002b1b2) main_mup_pane_g4_ParamLimits

0x5142,	// (0x0002b1b2) main_mup_pane_g4

0x515a,	// (0x0002b1ca) main_mup_pane_g5_ParamLimits

0x515a,	// (0x0002b1ca) main_mup_pane_g5

0x5176,	// (0x0002b1e6) main_mup_pane_g6_ParamLimits

0x5176,	// (0x0002b1e6) main_mup_pane_g6

0x518e,	// (0x0002b1fe) main_mup_pane_g7_ParamLimits

0x518e,	// (0x0002b1fe) main_mup_pane_g7

0x51a6,	// (0x0002b216) main_mup_pane_g8_ParamLimits

0x51a6,	// (0x0002b216) main_mup_pane_g8

0x51c0,	// (0x0002b230) main_mup_pane_g9_ParamLimits

0x51c0,	// (0x0002b230) main_mup_pane_g9

0x51da,	// (0x0002b24a) main_mup_pane_g10_ParamLimits

0x51da,	// (0x0002b24a) main_mup_pane_g10

0x51f4,	// (0x0002b264) main_mup_pane_g11_ParamLimits

0x51f4,	// (0x0002b264) main_mup_pane_g11

0x5208,	// (0x0002b278) main_mup_pane_g12_ParamLimits

0x5208,	// (0x0002b278) main_mup_pane_g12

0x521e,	// (0x0002b28e) main_mup_pane_g13_ParamLimits

0x521e,	// (0x0002b28e) main_mup_pane_g13

0x000c,

0xf439,	// (0x000354a9) main_mup_pane_g_ParamLimits

0xf439,	// (0x000354a9) main_mup_pane_g

0x5232,	// (0x0002b2a2) main_mup_pane_t1_ParamLimits

0x5232,	// (0x0002b2a2) main_mup_pane_t1

0x524c,	// (0x0002b2bc) main_mup_pane_t2_ParamLimits

0x524c,	// (0x0002b2bc) main_mup_pane_t2

0x5264,	// (0x0002b2d4) main_mup_pane_t3_ParamLimits

0x5264,	// (0x0002b2d4) main_mup_pane_t3

0x527c,	// (0x0002b2ec) main_mup_pane_t4_ParamLimits

0x527c,	// (0x0002b2ec) main_mup_pane_t4

0x529a,	// (0x0002b30a) main_mup_pane_t5_ParamLimits

0x529a,	// (0x0002b30a) main_mup_pane_t5

0x52af,	// (0x0002b31f) main_mup_pane_t6_ParamLimits

0x52af,	// (0x0002b31f) main_mup_pane_t6

0x0005,

0xf454,	// (0x000354c4) main_mup_pane_t_ParamLimits

0xf454,	// (0x000354c4) main_mup_pane_t

0x52c1,	// (0x0002b331) mup_progress_pane_ParamLimits

0x52c1,	// (0x0002b331) mup_progress_pane

0x52cd,	// (0x0002b33d) mup_visualizer_pane_ParamLimits

0x52cd,	// (0x0002b33d) mup_visualizer_pane

0x52fd,	// (0x0002b36d) mup_volume_pane_ParamLimits

0x52fd,	// (0x0002b36d) mup_volume_pane

0x531b,	// (0x0002b38b) mup_visualizer_pane_g1_ParamLimits

0x531b,	// (0x0002b38b) mup_visualizer_pane_g1

0x531b,	// (0x0002b38b) mup_visualizer_pane_g2_ParamLimits

0x531b,	// (0x0002b38b) mup_visualizer_pane_g2

0x4dd1,	// (0x0002ae41) mup_visualizer_pane_g3_ParamLimits

0x4dd1,	// (0x0002ae41) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x000354d1) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x000354d1) mup_visualizer_pane_g

0x2aeb,	// (0x00028b5b) mup_volume_pane_g1

0x5331,	// (0x0002b3a1) mup_volume_pane_g2

0x0001,

0xf468,	// (0x000354d8) mup_volume_pane_g

0x2aeb,	// (0x00028b5b) mup_progress_pane_g1

0x533a,	// (0x0002b3aa) mup_progress_pane_g2

0x5343,	// (0x0002b3b3) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x000354dd) mup_progress_pane_g

0x24fc,	// (0x0002856c) bg_popup_window_pane_cp05

0x534c,	// (0x0002b3bc) heading_pane_cp02_ParamLimits

0x534c,	// (0x0002b3bc) heading_pane_cp02

0x5366,	// (0x0002b3d6) list_popup_blid_pane

0x536e,	// (0x0002b3de) list_blid_sat_info_pane_ParamLimits

0x536e,	// (0x0002b3de) list_blid_sat_info_pane

0x5381,	// (0x0002b3f1) list_blid_sat_info_pane_g1

0x5389,	// (0x0002b3f9) list_blid_sat_info_pane_t1

0x548f,	// (0x0002b4ff) mup_equalizer_pane_ParamLimits

0x548f,	// (0x0002b4ff) mup_equalizer_pane

0x54a8,	// (0x0002b518) mup_equalizer_pane_cp1_ParamLimits

0x54a8,	// (0x0002b518) mup_equalizer_pane_cp1

0x54c5,	// (0x0002b535) mup_equalizer_pane_cp2_ParamLimits

0x54c5,	// (0x0002b535) mup_equalizer_pane_cp2

0x54e2,	// (0x0002b552) mup_equalizer_pane_cp3_ParamLimits

0x54e2,	// (0x0002b552) mup_equalizer_pane_cp3

0x5503,	// (0x0002b573) mup_equalizer_pane_cp4_ParamLimits

0x5503,	// (0x0002b573) mup_equalizer_pane_cp4

0x5524,	// (0x0002b594) mup_equalizer_pane_cp5

0x5538,	// (0x0002b5a8) mup_equalizer_pane_cp6

0x554c,	// (0x0002b5bc) mup_equalizer_pane_cp7

0xbbb4,	// (0x00031c24) bg_popup_call_poc_act_pane_g9

0xbbbc,	// (0x00031c2c) bg_popup_call_poc_act_pane_g10

0xbbc4,	// (0x00031c34) bg_popup_call_poc_act_pane_g11

0x000a,

0x2757,	// (0x000287c7) mup_scale_pane

0x2aeb,	// (0x00028b5b) mup_scale_pane_g1

0x5560,	// (0x0002b5d0) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000354f9) mup_scale_pane_g

0x5596,	// (0x0002b606) msg_data_pane

0x559e,	// (0x0002b60e) scroll_pane_cp017

0x55a6,	// (0x0002b616) bg_list_pane_cp04_ParamLimits

0x55a6,	// (0x0002b616) bg_list_pane_cp04

0x55c6,	// (0x0002b636) msg_data_pane_g1

0x55ce,	// (0x0002b63e) msg_data_pane_g2

0x55d8,	// (0x0002b648) msg_data_pane_g3

0x55e0,	// (0x0002b650) msg_data_pane_g4

0x55e8,	// (0x0002b658) msg_data_pane_g5

0x55f0,	// (0x0002b660) msg_data_pane_g6

0x55f8,	// (0x0002b668) msg_data_pane_g7

0x0006,

0xf498,	// (0x00035508) msg_data_pane_g

0x5600,	// (0x0002b670) msg_text_pane_ParamLimits

0x5600,	// (0x0002b670) msg_text_pane

0x5624,	// (0x0002b694) qrid_highlight_pane_cp011_ParamLimits

0x5624,	// (0x0002b694) qrid_highlight_pane_cp011

0x24fc,	// (0x0002856c) msg_body_pane

0x24fc,	// (0x0002856c) msg_header_pane

0x5643,	// (0x0002b6b3) input_focus_pane_cp07

0x5666,	// (0x0002b6d6) msg_header_pane_t1_ParamLimits

0x5666,	// (0x0002b6d6) msg_header_pane_t1

0x567a,	// (0x0002b6ea) msg_header_pane_t2_ParamLimits

0x567a,	// (0x0002b6ea) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0003551c) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0003551c) msg_header_pane_t

0x568c,	// (0x0002b6fc) msg_body_pane_g1

0x5694,	// (0x0002b704) msg_body_pane_t1_ParamLimits

0x5694,	// (0x0002b704) msg_body_pane_t1

0x56c5,	// (0x0002b735) msg_body_pane_t2_ParamLimits

0x56c5,	// (0x0002b735) msg_body_pane_t2

0x56d7,	// (0x0002b747) msg_body_pane_t3_ParamLimits

0x56d7,	// (0x0002b747) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00035521) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00035521) msg_body_pane_t

0x0da2,	// (0x00026e12) main_viewer_pane_g1_ParamLimits

0x0da2,	// (0x00026e12) main_viewer_pane_g1

0x0db0,	// (0x00026e20) main_viewer_pane_g2_ParamLimits

0x0db0,	// (0x00026e20) main_viewer_pane_g2

0x5707,	// (0x0002b777) main_viewer_pane_g3_ParamLimits

0x5707,	// (0x0002b777) main_viewer_pane_g3

0x5716,	// (0x0002b786) main_viewer_pane_g4_ParamLimits

0x5716,	// (0x0002b786) main_viewer_pane_g4

0xb1b9,	// (0x00031229) main_viewer_pane_g5_ParamLimits

0xb1b9,	// (0x00031229) main_viewer_pane_g5

0xb1b9,	// (0x00031229) main_viewer_pane_g7_ParamLimits

0xb1b9,	// (0x00031229) main_viewer_pane_g7

0x46e2,	// (0x0002a752) main_viewer_pane_g8_ParamLimits

0x46e2,	// (0x0002a752) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00035531) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00035531) main_viewer_pane_g

0x5725,	// (0x0002b795) viewer_content_pane_ParamLimits

0x5725,	// (0x0002b795) viewer_content_pane

0x5760,	// (0x0002b7d0) main_postcard_pane_g1_ParamLimits

0x5760,	// (0x0002b7d0) main_postcard_pane_g1

0x5776,	// (0x0002b7e6) main_postcard_pane_g2_ParamLimits

0x5776,	// (0x0002b7e6) main_postcard_pane_g2

0x578c,	// (0x0002b7fc) main_postcard_pane_g3_ParamLimits

0x578c,	// (0x0002b7fc) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00035542) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00035542) main_postcard_pane_g

0x57a3,	// (0x0002b813) main_postcard_pane_g4

0xbdc9,	// (0x00031e39) smil_status_volume_pane_g2

0x57e6,	// (0x0002b856) postcard_pane_ParamLimits

0x57e6,	// (0x0002b856) postcard_pane

0x5828,	// (0x0002b898) postcard_pane_g1_ParamLimits

0x5828,	// (0x0002b898) postcard_pane_g1

0x5836,	// (0x0002b8a6) postcard_pane_g2_ParamLimits

0x5836,	// (0x0002b8a6) postcard_pane_g2

0x5842,	// (0x0002b8b2) postcard_pane_g3_ParamLimits

0x5842,	// (0x0002b8b2) postcard_pane_g3

0x584e,	// (0x0002b8be) postcard_pane_g4_ParamLimits

0x584e,	// (0x0002b8be) postcard_pane_g4

0x585c,	// (0x0002b8cc) postcard_pane_g5_ParamLimits

0x585c,	// (0x0002b8cc) postcard_pane_g5

0x5871,	// (0x0002b8e1) postcard_pane_g6_ParamLimits

0x5871,	// (0x0002b8e1) postcard_pane_g6

0x5828,	// (0x0002b898) postcard_pane_g7_ParamLimits

0x5828,	// (0x0002b898) postcard_pane_g7

0x0006,

0xf4df,	// (0x0003554f) postcard_pane_g_ParamLimits

0xf4df,	// (0x0003554f) postcard_pane_g

0x5885,	// (0x0002b8f5) main_mp2_pane_g1_ParamLimits

0x5885,	// (0x0002b8f5) main_mp2_pane_g1

0x5891,	// (0x0002b901) main_mp2_pane_g2_ParamLimits

0x5891,	// (0x0002b901) main_mp2_pane_g2

0x589d,	// (0x0002b90d) main_mp2_pane_g3_ParamLimits

0x589d,	// (0x0002b90d) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0003555e) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0003555e) main_mp2_pane_g

0x58a9,	// (0x0002b919) main_mp2_pane_t1_ParamLimits

0x58a9,	// (0x0002b919) main_mp2_pane_t1

0x58be,	// (0x0002b92e) main_mp2_pane_t2_ParamLimits

0x58be,	// (0x0002b92e) main_mp2_pane_t2

0x58d0,	// (0x0002b940) main_mp2_pane_t3_ParamLimits

0x58d0,	// (0x0002b940) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00035565) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00035565) main_mp2_pane_t

0x58e2,	// (0x0002b952) pec_content_pane_ParamLimits

0x58e2,	// (0x0002b952) pec_content_pane

0x3a22,	// (0x00029a92) scroll_pane_cp015

0x58f4,	// (0x0002b964) pec_attribute_pane_ParamLimits

0x58f4,	// (0x0002b964) pec_attribute_pane

0x5904,	// (0x0002b974) pec_content_pane_g1_ParamLimits

0x5904,	// (0x0002b974) pec_content_pane_g1

0x5910,	// (0x0002b980) pec_content_pane_t1_ParamLimits

0x5910,	// (0x0002b980) pec_content_pane_t1

0x5922,	// (0x0002b992) pec_content_pane_t2_ParamLimits

0x5922,	// (0x0002b992) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0003556c) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0003556c) pec_content_pane_t

0x5934,	// (0x0002b9a4) list_single_graphic_pane_cp01_ParamLimits

0x5934,	// (0x0002b9a4) list_single_graphic_pane_cp01

0x2757,	// (0x000287c7) bg_popup_sub_pane_cp04

0x5949,	// (0x0002b9b9) popup_mup_playback_window_g1

0x5955,	// (0x0002b9c5) popup_mup_playback_window_t1

0x596a,	// (0x0002b9da) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00035571) popup_mup_playback_window_t

0x59bf,	// (0x0002ba2f) main_image_pane_g1_ParamLimits

0x59bf,	// (0x0002ba2f) main_image_pane_g1

0x5a9c,	// (0x0002bb0c) scroll_pane_cp018_ParamLimits

0x5a9c,	// (0x0002bb0c) scroll_pane_cp018

0x5ab4,	// (0x0002bb24) scroll_pane_cp016_ParamLimits

0x5ab4,	// (0x0002bb24) scroll_pane_cp016

0x5ae8,	// (0x0002bb58) smil2_image_pane_ParamLimits

0x5ae8,	// (0x0002bb58) smil2_image_pane

0x5b18,	// (0x0002bb88) smil2_root_pane_ParamLimits

0x5b18,	// (0x0002bb88) smil2_root_pane

0x5b50,	// (0x0002bbc0) smil2_text_pane_ParamLimits

0x5b50,	// (0x0002bbc0) smil2_text_pane

0x24fc,	// (0x0002856c) bg_list_pane_cp06

0x5bd8,	// (0x0002bc48) grid_radio_pane

0x24fc,	// (0x0002856c) bg_popup_window_pane_cp06

0x5be0,	// (0x0002bc50) main_fmradio_pane_t1

0x4a42,	// (0x0002aab2) heading_pane_cp04

0x5bee,	// (0x0002bc5e) main_fmradio_pane_t2

0xbbcc,	// (0x00031c3c) popup_cale_lunar_info_window_g1

0x5bfc,	// (0x0002bc6c) main_fmradio_pane_t3

0xbbd4,	// (0x00031c44) popup_cale_lunar_info_window_g2

0x5c0a,	// (0x0002bc7a) main_fmradio_pane_t4

0x0001,

0x5c18,	// (0x0002bc88) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0003564c) popup_cale_lunar_info_window_g

0xf516,	// (0x00035586) main_fmradio_pane_t

0x5c26,	// (0x0002bc96) wait_bar_pane_cp03

0x5c2e,	// (0x0002bc9e) cell_fmradio_pane_ParamLimits

0x5c2e,	// (0x0002bc9e) cell_fmradio_pane

0x5828,	// (0x0002b898) cell_fmradio_pane_g1_ParamLimits

0x5828,	// (0x0002b898) cell_fmradio_pane_g1

0x24fc,	// (0x0002856c) grid_highlight_pane_cp011

0x5c41,	// (0x0002bcb1) poc_content_pane_ParamLimits

0x5c41,	// (0x0002bcb1) poc_content_pane

0x5c53,	// (0x0002bcc3) scroll_pane_cp019

0x5c5b,	// (0x0002bccb) popup_call_poc_act_window_ParamLimits

0x5c5b,	// (0x0002bccb) popup_call_poc_act_window

0x5c7f,	// (0x0002bcef) popup_call_poc_inact_window_ParamLimits

0x5c7f,	// (0x0002bcef) popup_call_poc_inact_window

0xf5b3,	// (0x00035623) bg_popup_call_poc_act_pane_g

0xbb44,	// (0x00031bb4) bg_popup_call_poc_inact_pane_g1

0xbb4c,	// (0x00031bbc) bg_popup_call_poc_inact_pane_g2

0x5c98,	// (0x0002bd08) popup_call_poc_act_window_g2

0xbb54,	// (0x00031bc4) bg_popup_call_poc_inact_pane_g3

0xbb5c,	// (0x00031bcc) bg_popup_call_poc_inact_pane_g4

0xbb64,	// (0x00031bd4) bg_popup_call_poc_inact_pane_g5

0x5ca0,	// (0x0002bd10) popup_call_poc_act_window_t1_ParamLimits

0x5ca0,	// (0x0002bd10) popup_call_poc_act_window_t1

0x5cc8,	// (0x0002bd38) popup_call_poc_act_window_t2_ParamLimits

0x5cc8,	// (0x0002bd38) popup_call_poc_act_window_t2

0x5cf0,	// (0x0002bd60) popup_call_poc_act_window_t3_ParamLimits

0x5cf0,	// (0x0002bd60) popup_call_poc_act_window_t3

0x5d18,	// (0x0002bd88) popup_call_poc_act_window_t4_ParamLimits

0x5d18,	// (0x0002bd88) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00035591) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00035591) popup_call_poc_act_window_t

0xbb6c,	// (0x00031bdc) bg_popup_call_poc_inact_pane_g6

0xbb74,	// (0x00031be4) bg_popup_call_poc_inact_pane_g7

0xbb7c,	// (0x00031bec) bg_popup_call_poc_inact_pane_g8

0x5d2a,	// (0x0002bd9a) popup_call_poc_inact_window_g2

0xbb84,	// (0x00031bf4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x00035610) bg_popup_call_poc_inact_pane_g

0x5d32,	// (0x0002bda2) popup_call_poc_inact_window_t1_ParamLimits

0x5d32,	// (0x0002bda2) popup_call_poc_inact_window_t1

0x5d47,	// (0x0002bdb7) popup_call_poc_inact_window_t2_ParamLimits

0x5d47,	// (0x0002bdb7) popup_call_poc_inact_window_t2

0x5d5c,	// (0x0002bdcc) popup_call_poc_inact_window_t3_ParamLimits

0x5d5c,	// (0x0002bdcc) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0003559a) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0003559a) popup_call_poc_inact_window_t

0xbd3c,	// (0x00031dac) context_pane_ParamLimits

0x6a15,	// (0x0002ca85) signal_pane_ParamLimits

0x502d,	// (0x0002b09d) main_call2_pane

0xbd2a,	// (0x00031d9a) popup_phob_thumbnail2_window_ParamLimits

0xbd2a,	// (0x00031d9a) popup_phob_thumbnail2_window

0xb1a1,	// (0x00031211) aid_hotspot_pointer_arrow_pane

0xb1a9,	// (0x00031219) aid_hotspot_pointer_hand_pane

0x652b,	// (0x0002c59b) phob_pre_status_pane_g5

0x3095,	// (0x00029105) cams_zoom_pane_ParamLimits

0x30a4,	// (0x00029114) image_vga_pane_ParamLimits

0x30be,	// (0x0002912e) main_camera_pane_g1_ParamLimits

0x30d0,	// (0x00029140) main_camera_pane_g2_ParamLimits

0x30e0,	// (0x00029150) main_camera_pane_g3_ParamLimits

0x30f0,	// (0x00029160) main_camera_pane_g4_ParamLimits

0x3100,	// (0x00029170) main_camera_pane_g5_ParamLimits

0x3110,	// (0x00029180) main_camera_pane_g6_ParamLimits

0x3122,	// (0x00029192) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00035299) main_camera_pane_g_ParamLimits

0x313e,	// (0x000291ae) main_camera_pane_t1_ParamLimits

0x3154,	// (0x000291c4) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x000352aa) main_camera_pane_t_ParamLimits

0x2757,	// (0x000287c7) bg_popup_preview_window_pane_cp01_ParamLimits

0x2757,	// (0x000287c7) bg_popup_preview_window_pane_cp01

0x5d71,	// (0x0002bde1) popup_phob_thumbnail2_window_g1_ParamLimits

0x5d71,	// (0x0002bde1) popup_phob_thumbnail2_window_g1

0x24fc,	// (0x0002856c) call2_cli_visual_pane

0x5d98,	// (0x0002be08) popup_call2_audio_conf_window_ParamLimits

0x5d98,	// (0x0002be08) popup_call2_audio_conf_window

0x5db8,	// (0x0002be28) popup_call2_audio_first_window_ParamLimits

0x5db8,	// (0x0002be28) popup_call2_audio_first_window

0x5e4e,	// (0x0002bebe) popup_call2_audio_in_window_ParamLimits

0x5e4e,	// (0x0002bebe) popup_call2_audio_in_window

0x5e96,	// (0x0002bf06) popup_call2_audio_out_window_ParamLimits

0x5e96,	// (0x0002bf06) popup_call2_audio_out_window

0x5f00,	// (0x0002bf70) popup_call2_audio_second_window_ParamLimits

0x5f00,	// (0x0002bf70) popup_call2_audio_second_window

0x5f66,	// (0x0002bfd6) popup_call2_audio_wait_window_ParamLimits

0x5f66,	// (0x0002bfd6) popup_call2_audio_wait_window

0x24fc,	// (0x0002856c) bg_popup_call2_act_pane_cp03

0x2739,	// (0x000287a9) list_conf_pane_cp

0x5fa0,	// (0x0002c010) popup_call2_audio_conf_window_t1

0x4ac3,	// (0x0002ab33) list_single_graphic_popup_conf2_pane_ParamLimits

0x4ac3,	// (0x0002ab33) list_single_graphic_popup_conf2_pane

0x4ad6,	// (0x0002ab46) list_highlight_pane_cp04

0x5fae,	// (0x0002c01e) list_single_graphic_popup_conf2_pane_g1

0x4ae7,	// (0x0002ab57) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x000355a1) list_single_graphic_popup_conf2_pane_g

0x5fb8,	// (0x0002c028) list_single_graphic_popup_conf2_pane_t1

0x5fc6,	// (0x0002c036) bg_popup_call2_act_pane_cp01_ParamLimits

0x5fc6,	// (0x0002c036) bg_popup_call2_act_pane_cp01

0x6050,	// (0x0002c0c0) call_type_pane_cp05_ParamLimits

0x6050,	// (0x0002c0c0) call_type_pane_cp05

0x60a4,	// (0x0002c114) popup_call2_audio_second_window_g1_ParamLimits

0x60a4,	// (0x0002c114) popup_call2_audio_second_window_g1

0x60f8,	// (0x0002c168) popup_call2_audio_second_window_g2_ParamLimits

0x60f8,	// (0x0002c168) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x000355a6) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x000355a6) popup_call2_audio_second_window_g

0x615d,	// (0x0002c1cd) popup_call2_audio_second_window_t1_ParamLimits

0x615d,	// (0x0002c1cd) popup_call2_audio_second_window_t1

0x6218,	// (0x0002c288) popup_call2_audio_second_window_t2_ParamLimits

0x6218,	// (0x0002c288) popup_call2_audio_second_window_t2

0x626b,	// (0x0002c2db) popup_call2_audio_second_window_t3_ParamLimits

0x626b,	// (0x0002c2db) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x000355ad) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x000355ad) popup_call2_audio_second_window_t

0x24fc,	// (0x0002856c) bg_popup_call2_in_pane_cp02

0x2506,	// (0x00028576) call_type_pane_cp04

0x250e,	// (0x0002857e) popup_call2_audio_wait_window_g1

0x2516,	// (0x00028586) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00035186) popup_call2_audio_wait_window_g

0x251e,	// (0x0002858e) popup_call2_audio_wait_window_t3

0x635e,	// (0x0002c3ce) bg_popup_call2_act_pane_ParamLimits

0x635e,	// (0x0002c3ce) bg_popup_call2_act_pane

0xb1d7,	// (0x00031247) call_type_pane_cp03_ParamLimits

0xb1d7,	// (0x00031247) call_type_pane_cp03

0xb23b,	// (0x000312ab) popup_call2_audio_first_window_g1_ParamLimits

0xb23b,	// (0x000312ab) popup_call2_audio_first_window_g1

0xb2ab,	// (0x0003131b) popup_call2_audio_first_window_g2_ParamLimits

0xb2ab,	// (0x0003131b) popup_call2_audio_first_window_g2

0x531b,	// (0x0002b38b) popup_call2_audio_first_window_g3_ParamLimits

0x531b,	// (0x0002b38b) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x000355b6) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x000355b6) popup_call2_audio_first_window_g

0xb389,	// (0x000313f9) popup_call2_audio_first_window_t1_ParamLimits

0xb389,	// (0x000313f9) popup_call2_audio_first_window_t1

0xb48c,	// (0x000314fc) popup_call2_audio_first_window_t4_ParamLimits

0xb48c,	// (0x000314fc) popup_call2_audio_first_window_t4

0xb56f,	// (0x000315df) popup_call2_audio_first_window_t5_ParamLimits

0xb56f,	// (0x000315df) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x000355c1) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x000355c1) popup_call2_audio_first_window_t

0x274f,	// (0x000287bf) bg_popup_call2_act_pane_g1

0xbbdc,	// (0x00031c4c) popup_cale_lunar_info_window_t1

0xbbea,	// (0x00031c5a) popup_cale_lunar_info_window_t2

0xbbf8,	// (0x00031c68) popup_cale_lunar_info_window_t3

0x24fc,	// (0x0002856c) bg_popup_call2_bubble_pane

0xb670,	// (0x000316e0) bg_popup_call2_in_pane_cp01_ParamLimits

0xb670,	// (0x000316e0) bg_popup_call2_in_pane_cp01

0x21b4,	// (0x00028224) call_type_pane_cp02

0xb6b8,	// (0x00031728) popup_call2_audio_out_window_g1_ParamLimits

0xb6b8,	// (0x00031728) popup_call2_audio_out_window_g1

0xb6e4,	// (0x00031754) popup_call2_audio_out_window_g2_ParamLimits

0xb6e4,	// (0x00031754) popup_call2_audio_out_window_g2

0xb70c,	// (0x0003177c) popup_call2_audio_out_window_g3_ParamLimits

0xb70c,	// (0x0003177c) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x000355ca) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x000355ca) popup_call2_audio_out_window_g

0xb747,	// (0x000317b7) popup_call2_audio_out_window_t1_ParamLimits

0xb747,	// (0x000317b7) popup_call2_audio_out_window_t1

0xb7a6,	// (0x00031816) popup_call2_audio_out_window_t2_ParamLimits

0xb7a6,	// (0x00031816) popup_call2_audio_out_window_t2

0xb7fa,	// (0x0003186a) popup_call2_audio_out_window_t3_ParamLimits

0xb7fa,	// (0x0003186a) popup_call2_audio_out_window_t3

0xb810,	// (0x00031880) popup_call2_audio_out_window_t4_ParamLimits

0xb810,	// (0x00031880) popup_call2_audio_out_window_t4

0xb826,	// (0x00031896) popup_call2_audio_out_window_t5_ParamLimits

0xb826,	// (0x00031896) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x000355d3) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x000355d3) popup_call2_audio_out_window_t

0xb88a,	// (0x000318fa) bg_popup_call2_in_pane_ParamLimits

0xb88a,	// (0x000318fa) bg_popup_call2_in_pane

0xb8e6,	// (0x00031956) popup_call2_audio_in_window_g1_ParamLimits

0xb8e6,	// (0x00031956) popup_call2_audio_in_window_g1

0xb91e,	// (0x0003198e) popup_call2_audio_in_window_g2_ParamLimits

0xb91e,	// (0x0003198e) popup_call2_audio_in_window_g2

0xb956,	// (0x000319c6) popup_call2_audio_in_window_g3_ParamLimits

0xb956,	// (0x000319c6) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x000355e0) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x000355e0) popup_call2_audio_in_window_g

0xb9ae,	// (0x00031a1e) popup_call2_audio_in_window_t1_ParamLimits

0xb9ae,	// (0x00031a1e) popup_call2_audio_in_window_t1

0xba2e,	// (0x00031a9e) popup_call2_audio_in_window_t2_ParamLimits

0xba2e,	// (0x00031a9e) popup_call2_audio_in_window_t2

0xbaae,	// (0x00031b1e) popup_call2_audio_in_window_t3_ParamLimits

0xbaae,	// (0x00031b1e) popup_call2_audio_in_window_t3

0xbac8,	// (0x00031b38) popup_call2_audio_in_window_t4_ParamLimits

0xbac8,	// (0x00031b38) popup_call2_audio_in_window_t4

0xbada,	// (0x00031b4a) popup_call2_audio_in_window_t5_ParamLimits

0xbada,	// (0x00031b4a) popup_call2_audio_in_window_t5

0xbaef,	// (0x00031b5f) popup_call2_audio_in_window_t6_ParamLimits

0xbaef,	// (0x00031b5f) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x000355e9) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x000355e9) popup_call2_audio_in_window_t

0x274f,	// (0x000287bf) bg_popup_call2_in_pane_g1

0xbc06,	// (0x00031c76) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00035651) popup_cale_lunar_info_window_t

0x2757,	// (0x000287c7) bg_popup_call2_rect_pane_ParamLimits

0x2757,	// (0x000287c7) bg_popup_call2_rect_pane

0x24fc,	// (0x0002856c) call2_cli_visual_graphic_pane

0x24fc,	// (0x0002856c) call2_cli_visual_text_pane

0xbddc,	// (0x00031e4c) smil_status_volume_pane_g3

0x0002,

0x2aeb,	// (0x00028b5b) call2_cli_visual_graphic_pane_g1

0x2aeb,	// (0x00028b5b) call2_cli_visual_graphic_pane_g2

0x2aeb,	// (0x00028b5b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000355f6) call2_cli_visual_graphic_pane_g

0xbb04,	// (0x00031b74) bg_popup_call2_rect_pane_g1

0x2c04,	// (0x00028c74) bg_popup_call2_rect_pane_g2

0xbb0c,	// (0x00031b7c) bg_popup_call2_rect_pane_g3

0xbb14,	// (0x00031b84) bg_popup_call2_rect_pane_g4

0xbb1c,	// (0x00031b8c) bg_popup_call2_rect_pane_g5

0xbb24,	// (0x00031b94) bg_popup_call2_rect_pane_g6

0xbb2c,	// (0x00031b9c) bg_popup_call2_rect_pane_g7

0xbb34,	// (0x00031ba4) bg_popup_call2_rect_pane_g8

0xbb3c,	// (0x00031bac) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000355fd) bg_popup_call2_rect_pane_g

0xbb44,	// (0x00031bb4) bg_popup_call2_bubble_pane_g1

0xbb4c,	// (0x00031bbc) bg_popup_call2_bubble_pane_g2

0xbb54,	// (0x00031bc4) bg_popup_call2_bubble_pane_g3

0xbb5c,	// (0x00031bcc) bg_popup_call2_bubble_pane_g4

0xbb64,	// (0x00031bd4) bg_popup_call2_bubble_pane_g5

0xbb6c,	// (0x00031bdc) bg_popup_call2_bubble_pane_g6

0xbb74,	// (0x00031be4) bg_popup_call2_bubble_pane_g7

0xbb7c,	// (0x00031bec) bg_popup_call2_bubble_pane_g8

0xbb84,	// (0x00031bf4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x00035610) bg_popup_call2_bubble_pane_g

0x2c82,	// (0x00028cf2) aid_cale_week_size_cell_pane

0x316a,	// (0x000291da) aid_cams_cif_uncrop_pane_ParamLimits

0x316a,	// (0x000291da) aid_cams_cif_uncrop_pane

0x335d,	// (0x000293cd) aid_cams_size_cell_ParamLimits

0x335d,	// (0x000293cd) aid_cams_size_cell

0x3371,	// (0x000293e1) grid_cams_pane_ParamLimits

0x338b,	// (0x000293fb) linegrid_cams_pane_ParamLimits

0x35b3,	// (0x00029623) call_video_pane_t1

0x35d1,	// (0x00029641) call_video_pane_t2

0x0001,

0xf28d,	// (0x000352fd) call_video_pane_t

0x3c61,	// (0x00029cd1) aid_cale_month_size_cell_pane_ParamLimits

0x3c61,	// (0x00029cd1) aid_cale_month_size_cell_pane

0xf62a,	// (0x0003569a) smil_status_volume_pane_g

0xbde9,	// (0x00031e59) volume_smil_pane_ParamLimits

0x1dc5,	// (0x00027e35) aid_popup2_width_pane

0x2b5c,	// (0x00028bcc) cell_qdial_pane_g4_ParamLimits

0x2b5c,	// (0x00028bcc) cell_qdial_pane_g4

0x4db1,	// (0x0002ae21) aid_blid_cardinal_pane_ParamLimits

0x4dbd,	// (0x0002ae2d) aid_blid_destination_pane_ParamLimits

0x4dbd,	// (0x0002ae2d) aid_blid_destination_pane

0x2757,	// (0x000287c7) bg_popup_call_poc_act_pane_ParamLimits

0x2757,	// (0x000287c7) bg_popup_call_poc_act_pane

0x2757,	// (0x000287c7) bg_popup_call_poc_inact_pane_ParamLimits

0x2757,	// (0x000287c7) bg_popup_call_poc_inact_pane

0xbb8c,	// (0x00031bfc) bg_popup_call_poc_act_pane_g1

0xbb94,	// (0x00031c04) bg_popup_call_poc_act_pane_g2

0xbb9c,	// (0x00031c0c) bg_popup_call_poc_act_pane_g3

0xbb5c,	// (0x00031bcc) bg_popup_call_poc_act_pane_g4

0xbb64,	// (0x00031bd4) bg_popup_call_poc_act_pane_g5

0xbba4,	// (0x00031c14) bg_popup_call_poc_act_pane_g6

0xbb74,	// (0x00031be4) bg_popup_call_poc_act_pane_g7

0xbbac,	// (0x00031c1c) bg_popup_call_poc_act_pane_g8

0x24fc,	// (0x0002856c) main_usb_pane

0xbd05,	// (0x00031d75) popup_cale_lunar_info_window

0x3909,	// (0x00029979) im_reading_pane_t1_ParamLimits

0x3942,	// (0x000299b2) list_im_pane_ParamLimits

0x3953,	// (0x000299c3) scroll_pane_cp07_ParamLimits

0x24fc,	// (0x0002856c) grid_highlight_pane_cp012

0x2757,	// (0x000287c7) mup_scale_pane_ParamLimits

0x5828,	// (0x0002b898) main_usb_pane_g1_ParamLimits

0x5828,	// (0x0002b898) main_usb_pane_g1

0x6440,	// (0x0002c4b0) main_usb_pane_g2_ParamLimits

0x6440,	// (0x0002c4b0) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0003563a) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0003563a) main_usb_pane_g

0x6456,	// (0x0002c4c6) main_usb_pane_t1_ParamLimits

0x6456,	// (0x0002c4c6) main_usb_pane_t1

0x6468,	// (0x0002c4d8) main_usb_pane_t2_ParamLimits

0x6468,	// (0x0002c4d8) main_usb_pane_t2

0x647a,	// (0x0002c4ea) main_usb_pane_t3_ParamLimits

0x647a,	// (0x0002c4ea) main_usb_pane_t3

0x648c,	// (0x0002c4fc) main_usb_pane_t4_ParamLimits

0x648c,	// (0x0002c4fc) main_usb_pane_t4

0x649e,	// (0x0002c50e) main_usb_pane_t5_ParamLimits

0x649e,	// (0x0002c50e) main_usb_pane_t5

0x64b0,	// (0x0002c520) main_usb_pane_t6_ParamLimits

0x64b0,	// (0x0002c520) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0003563f) main_usb_pane_t_ParamLimits

0x4d60,	// (0x0002add0) aid_text_placing

0x4d69,	// (0x0002add9) main_location2_pane_t1_ParamLimits

0x4d7b,	// (0x0002adeb) main_location2_pane_t2_ParamLimits

0x4d8d,	// (0x0002adfd) main_location2_pane_t3_ParamLimits

0x4d9f,	// (0x0002ae0f) main_location2_pane_t4_ParamLimits

0x4d9f,	// (0x0002ae0f) main_location2_pane_t4

0xf3ee,	// (0x0003545e) main_location2_pane_t_ParamLimits

0x282f,	// (0x0002889f) find_pinb_pane_g2_ParamLimits

0x282f,	// (0x0002889f) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x000351ac) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x000351ac) find_pinb_pane_g

0x283b,	// (0x000288ab) find_pinb_pane_t1_ParamLimits

0x284d,	// (0x000288bd) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x000351b1) find_pinb_pane_t_ParamLimits

0x24fc,	// (0x0002856c) main_call3_pane

0x3ffa,	// (0x0002a06a) cale_month_day_heading_pane_t1_ParamLimits

0x4058,	// (0x0002a0c8) cale_month_day_heading_pane_t2_ParamLimits

0x40bd,	// (0x0002a12d) cale_month_day_heading_pane_t3_ParamLimits

0x4122,	// (0x0002a192) cale_month_day_heading_pane_t4_ParamLimits

0x4187,	// (0x0002a1f7) cale_month_day_heading_pane_t5_ParamLimits

0x41fc,	// (0x0002a26c) cale_month_day_heading_pane_t6_ParamLimits

0x4271,	// (0x0002a2e1) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00035335) cale_month_day_heading_pane_t_ParamLimits

0x449b,	// (0x0002a50b) smil_status_volume_pane

0x5804,	// (0x0002b874) postcard_address_pane_ParamLimits

0x5804,	// (0x0002b874) postcard_address_pane

0x5816,	// (0x0002b886) postcard_message_pane_ParamLimits

0x5816,	// (0x0002b886) postcard_message_pane

0x641e,	// (0x0002c48e) call2_cli_visual_pane_t1_ParamLimits

0x641e,	// (0x0002c48e) call2_cli_visual_pane_t1

0x6c42,	// (0x0002ccb2) postcard_message_pane_t1_ParamLimits

0x6c42,	// (0x0002ccb2) postcard_message_pane_t1

0x6c2b,	// (0x0002cc9b) postcard_address_pane_t1_ParamLimits

0x6c2b,	// (0x0002cc9b) postcard_address_pane_t1

0x6c17,	// (0x0002cc87) popup_call3_audio_in_window_ParamLimits

0x6c17,	// (0x0002cc87) popup_call3_audio_in_window

0x6aa2,	// (0x0002cb12) bg_popup_call3_in_pane_ParamLimits

0x6aa2,	// (0x0002cb12) bg_popup_call3_in_pane

0x6b18,	// (0x0002cb88) popup_call3_audio_in_window_g1_ParamLimits

0x6b18,	// (0x0002cb88) popup_call3_audio_in_window_g1

0x6b38,	// (0x0002cba8) popup_call3_audio_in_window_g2_ParamLimits

0x6b38,	// (0x0002cba8) popup_call3_audio_in_window_g2

0x6b58,	// (0x0002cbc8) popup_call3_audio_in_window_g3_ParamLimits

0x6b58,	// (0x0002cbc8) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x000356a1) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x000356a1) popup_call3_audio_in_window_g

0x6b89,	// (0x0002cbf9) popup_call3_audio_in_window_t1_ParamLimits

0x6b89,	// (0x0002cbf9) popup_call3_audio_in_window_t1

0x6bc7,	// (0x0002cc37) popup_call3_audio_in_window_t2_ParamLimits

0x6bc7,	// (0x0002cc37) popup_call3_audio_in_window_t2

0x6c05,	// (0x0002cc75) popup_call3_audio_in_window_t3_ParamLimits

0x6c05,	// (0x0002cc75) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x000356aa) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x000356aa) popup_call3_audio_in_window_t

0x502d,	// (0x0002b09d) bg_popup_call3_rect_pane

0xbb04,	// (0x00031b74) bg_popup_call3_rect_pane_g1

0x2c04,	// (0x00028c74) bg_popup_call3_rect_pane_g2

0xbb0c,	// (0x00031b7c) bg_popup_call3_rect_pane_g3

0xbb14,	// (0x00031b84) bg_popup_call3_rect_pane_g4

0xbb1c,	// (0x00031b8c) bg_popup_call3_rect_pane_g5

0xbb24,	// (0x00031b94) bg_popup_call3_rect_pane_g6

0xbb2c,	// (0x00031b9c) bg_popup_call3_rect_pane_g7

0x5313,	// (0x0002b383) mup_visualizer_osc_pane

0x5329,	// (0x0002b399) mup_visualizer_spec_pane

0x6ad2,	// (0x0002cb42) call3_video_qcif_pane_ParamLimits

0x6ad2,	// (0x0002cb42) call3_video_qcif_pane

0x6ae5,	// (0x0002cb55) call3_video_qcif_uncrop_pane_ParamLimits

0x6ae5,	// (0x0002cb55) call3_video_qcif_uncrop_pane

0x6af3,	// (0x0002cb63) call3_video_subqcif_pane_ParamLimits

0x6af3,	// (0x0002cb63) call3_video_subqcif_pane

0x6b07,	// (0x0002cb77) call3_video_subqcif_uncrop_pane_ParamLimits

0x6b07,	// (0x0002cb77) call3_video_subqcif_uncrop_pane

0x6b78,	// (0x0002cbe8) popup_call3_audio_in_window_g4_ParamLimits

0x6b78,	// (0x0002cbe8) popup_call3_audio_in_window_g4

0x6a91,	// (0x0002cb01) mup_spec_half_pane

0x6a9a,	// (0x0002cb0a) mup_spec_half_pane_cp

0xbd9c,	// (0x00031e0c) mup_osc_middle_pane

0xbda5,	// (0x00031e15) mup_visualizer_osc_pane_g1

0x6a71,	// (0x0002cae1) mup_spec_bar_pane_ParamLimits

0x6a71,	// (0x0002cae1) mup_spec_bar_pane

0xbd89,	// (0x00031df9) mup_spec_bar_pane_g1

0xbd93,	// (0x00031e03) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00035695) mup_spec_bar_pane_g

0x2c82,	// (0x00028cf2) aid_cale_week_size_cell_pane_ParamLimits

0x2c95,	// (0x00028d05) bg_cale_heading_pane_ParamLimits

0x2ca9,	// (0x00028d19) bg_cale_pane_cp01_ParamLimits

0x2cc2,	// (0x00028d32) cale_week_corner_pane_ParamLimits

0x2cd8,	// (0x00028d48) cale_week_day_heading_pane_ParamLimits

0x2cec,	// (0x00028d5c) cale_week_scroll_pane_g1_ParamLimits

0x2cfd,	// (0x00028d6d) cale_week_scroll_pane_g2_ParamLimits

0x2d0e,	// (0x00028d7e) cale_week_scroll_pane_g3_ParamLimits

0x2d1f,	// (0x00028d8f) cale_week_scroll_pane_g4_ParamLimits

0x2d30,	// (0x00028da0) cale_week_scroll_pane_g5_ParamLimits

0x2d43,	// (0x00028db3) cale_week_scroll_pane_g6_ParamLimits

0x2d56,	// (0x00028dc6) cale_week_scroll_pane_g7_ParamLimits

0x2d69,	// (0x00028dd9) cale_week_scroll_pane_g8_ParamLimits

0x2d7c,	// (0x00028dec) cale_week_scroll_pane_g9_ParamLimits

0x2d8d,	// (0x00028dfd) cale_week_scroll_pane_g10_ParamLimits

0x2d9e,	// (0x00028e0e) cale_week_scroll_pane_g11_ParamLimits

0x2daf,	// (0x00028e1f) cale_week_scroll_pane_g12_ParamLimits

0x2dc0,	// (0x00028e30) cale_week_scroll_pane_g13_ParamLimits

0x2dd1,	// (0x00028e41) cale_week_scroll_pane_g14_ParamLimits

0x2de2,	// (0x00028e52) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0003523d) cale_week_scroll_pane_g_ParamLimits

0x2df3,	// (0x00028e63) cale_week_time_pane_ParamLimits

0x2e06,	// (0x00028e76) grid_cale_week_pane_ParamLimits

0x2e1b,	// (0x00028e8b) listscroll_cale_week_pane_t1

0x2e2d,	// (0x00028e9d) scroll_pane_cp08_ParamLimits

0x3cc5,	// (0x00029d35) cale_month_corner_pane_ParamLimits

0x3fa7,	// (0x0002a017) cale_month_pane_t1

0x3fb9,	// (0x0002a029) cale_month_week_pane_ParamLimits

0x49a2,	// (0x0002aa12) popup_call_status_window_g1_ParamLimits

0x49b6,	// (0x0002aa26) popup_call_status_window_g2_ParamLimits

0x49ca,	// (0x0002aa3a) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x000353e5) popup_call_status_window_g_ParamLimits

0x4a32,	// (0x0002aaa2) aid_call2_pane

0x564c,	// (0x0002b6bc) msg_header_pane_g1

0x5804,	// (0x0002b874) postcard_address2_pane_ParamLimits

0x5804,	// (0x0002b874) postcard_address2_pane

0x5816,	// (0x0002b886) postcard_message2_pane_ParamLimits

0x5816,	// (0x0002b886) postcard_message2_pane

0x6a23,	// (0x0002ca93) message2_row_pane_ParamLimits

0x6a23,	// (0x0002ca93) message2_row_pane

0x6a3f,	// (0x0002caaf) address2_row_pane_ParamLimits

0x6a3f,	// (0x0002caaf) address2_row_pane

0xbd57,	// (0x00031dc7) postcard_message2_row_pane_g1

0xbd5f,	// (0x00031dcf) postcard_message2_row_pane_t1

0xbd57,	// (0x00031dc7) address2_row_pane_g1

0xbd5f,	// (0x00031dcf) address2_row_pane_t1

0x0d5a,	// (0x00026dca) aid_size_cell_vorec

0x24fc,	// (0x0002856c) main_rss_pane

0x6a52,	// (0x0002cac2) rss_list_single_pane_ParamLimits

0x6a52,	// (0x0002cac2) rss_list_single_pane

0xbd6d,	// (0x00031ddd) rss_list_single_pane_t1

0xbd7b,	// (0x00031deb) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00035690) rss_list_single_pane_t

0x24fc,	// (0x0002856c) main_camera2_pane

0x24fc,	// (0x0002856c) main_video2_pane

0x0e1c,	// (0x00026e8c) cams_zoom_pane_cp2_ParamLimits

0x0e1c,	// (0x00026e8c) cams_zoom_pane_cp2

0x0e3c,	// (0x00026eac) image2_vga_pane_ParamLimits

0x0e3c,	// (0x00026eac) image2_vga_pane

0x0e8d,	// (0x00026efd) main_camera2_pane_g1_ParamLimits

0x0e8d,	// (0x00026efd) main_camera2_pane_g1

0x0ead,	// (0x00026f1d) main_camera2_pane_g2_ParamLimits

0x0ead,	// (0x00026f1d) main_camera2_pane_g2

0x0ecd,	// (0x00026f3d) main_camera2_pane_g3_ParamLimits

0x0ecd,	// (0x00026f3d) main_camera2_pane_g3

0x0eed,	// (0x00026f5d) main_camera2_pane_g4_ParamLimits

0x0eed,	// (0x00026f5d) main_camera2_pane_g4

0x0f0d,	// (0x00026f7d) main_camera2_pane_g5_ParamLimits

0x0f0d,	// (0x00026f7d) main_camera2_pane_g5

0x0f2d,	// (0x00026f9d) main_camera2_pane_g6_ParamLimits

0x0f2d,	// (0x00026f9d) main_camera2_pane_g6

0x0f4d,	// (0x00026fbd) main_camera2_pane_g7_ParamLimits

0x0f4d,	// (0x00026fbd) main_camera2_pane_g7

0x0f6d,	// (0x00026fdd) main_camera2_pane_g8_ParamLimits

0x0f6d,	// (0x00026fdd) main_camera2_pane_g8

0x0008,

0xf641,	// (0x000356b1) main_camera2_pane_g_ParamLimits

0xf641,	// (0x000356b1) main_camera2_pane_g

0x0fad,	// (0x0002701d) main_camera2_pane_t1_ParamLimits

0x0fad,	// (0x0002701d) main_camera2_pane_t1

0x0fe2,	// (0x00027052) main_camera2_pane_t2_ParamLimits

0x0fe2,	// (0x00027052) main_camera2_pane_t2

0x1008,	// (0x00027078) main_camera2_pane_t3_ParamLimits

0x1008,	// (0x00027078) main_camera2_pane_t3

0x1066,	// (0x000270d6) main_camera2_pane_t4_ParamLimits

0x1066,	// (0x000270d6) main_camera2_pane_t4

0x0006,

0xf654,	// (0x000356c4) main_camera2_pane_t_ParamLimits

0xf654,	// (0x000356c4) main_camera2_pane_t

0x10f8,	// (0x00027168) cams_zoom_pane_cp4_ParamLimits

0x10f8,	// (0x00027168) cams_zoom_pane_cp4

0x110e,	// (0x0002717e) image2_cif_pane_ParamLimits

0x110e,	// (0x0002717e) image2_cif_pane

0x1139,	// (0x000271a9) image2_subqcif_pane_ParamLimits

0x1139,	// (0x000271a9) image2_subqcif_pane

0x1153,	// (0x000271c3) main_video2_pane_g1_ParamLimits

0x1153,	// (0x000271c3) main_video2_pane_g1

0x116d,	// (0x000271dd) main_video2_pane_g2_ParamLimits

0x116d,	// (0x000271dd) main_video2_pane_g2

0x1183,	// (0x000271f3) main_video2_pane_g3_ParamLimits

0x1183,	// (0x000271f3) main_video2_pane_g3

0x1199,	// (0x00027209) main_video2_pane_g4_ParamLimits

0x1199,	// (0x00027209) main_video2_pane_g4

0x11af,	// (0x0002721f) main_video2_pane_g5_ParamLimits

0x11af,	// (0x0002721f) main_video2_pane_g5

0x11c5,	// (0x00027235) main_video2_pane_g6_ParamLimits

0x11c5,	// (0x00027235) main_video2_pane_g6

0x0005,

0xf663,	// (0x000356d3) main_video2_pane_g_ParamLimits

0xf663,	// (0x000356d3) main_video2_pane_g

0x11df,	// (0x0002724f) main_video2_pane_t1_ParamLimits

0x11df,	// (0x0002724f) main_video2_pane_t1

0x1203,	// (0x00027273) main_video2_pane_t2_ParamLimits

0x1203,	// (0x00027273) main_video2_pane_t2

0x1251,	// (0x000272c1) main_video2_pane_t3_ParamLimits

0x1251,	// (0x000272c1) main_video2_pane_t3

0x0002,

0xf670,	// (0x000356e0) main_video2_pane_t_ParamLimits

0xf670,	// (0x000356e0) main_video2_pane_t

0x656b,	// (0x0002c5db) call_muted_g2

0x0001,

0xf612,	// (0x00035682) call_muted_g

0x24fc,	// (0x0002856c) main_mup2_pane

0x6c5d,	// (0x0002cccd) main_mup2_pane_g1_ParamLimits

0x6c5d,	// (0x0002cccd) main_mup2_pane_g1

0x6c69,	// (0x0002ccd9) main_mup2_pane_g2_ParamLimits

0x6c69,	// (0x0002ccd9) main_mup2_pane_g2

0xbf0d,	// (0x00031f7d) main_mup_pane_g13_cp1

0xbf15,	// (0x00031f85) mup_volume_pane_cp1

0x6c85,	// (0x0002ccf5) main_mup2_pane_g4_ParamLimits

0x6c85,	// (0x0002ccf5) main_mup2_pane_g4

0x6c97,	// (0x0002cd07) main_mup2_pane_g5_ParamLimits

0x6c97,	// (0x0002cd07) main_mup2_pane_g5

0x6ca9,	// (0x0002cd19) main_mup2_pane_g6_ParamLimits

0x6ca9,	// (0x0002cd19) main_mup2_pane_g6

0x6cbb,	// (0x0002cd2b) main_mup2_pane_g7_ParamLimits

0x6cbb,	// (0x0002cd2b) main_mup2_pane_g7

0x0006,

0xf677,	// (0x000356e7) main_mup2_pane_g_ParamLimits

0xf677,	// (0x000356e7) main_mup2_pane_g

0x6cd3,	// (0x0002cd43) main_mup2_pane_t1_ParamLimits

0x6cd3,	// (0x0002cd43) main_mup2_pane_t1

0x6ce9,	// (0x0002cd59) main_mup2_pane_t2_ParamLimits

0x6ce9,	// (0x0002cd59) main_mup2_pane_t2

0x6cff,	// (0x0002cd6f) main_mup2_pane_t3_ParamLimits

0x6cff,	// (0x0002cd6f) main_mup2_pane_t3

0x6d15,	// (0x0002cd85) main_mup2_pane_t4_ParamLimits

0x6d15,	// (0x0002cd85) main_mup2_pane_t4

0x6d2d,	// (0x0002cd9d) main_mup2_pane_t5_ParamLimits

0x6d2d,	// (0x0002cd9d) main_mup2_pane_t5

0x6d45,	// (0x0002cdb5) main_mup2_pane_t6_ParamLimits

0x6d45,	// (0x0002cdb5) main_mup2_pane_t6

0x0005,

0xf686,	// (0x000356f6) main_mup2_pane_t_ParamLimits

0xf686,	// (0x000356f6) main_mup2_pane_t

0x6d75,	// (0x0002cde5) mup2_visualizer_pane_ParamLimits

0x6d75,	// (0x0002cde5) mup2_visualizer_pane

0x6da3,	// (0x0002ce13) mup_progress_pane_cp_ParamLimits

0x6da3,	// (0x0002ce13) mup_progress_pane_cp

0xbeef,	// (0x00031f5f) mup_volume_pane_cp_ParamLimits

0xbeef,	// (0x00031f5f) mup_volume_pane_cp

0x6db7,	// (0x0002ce27) mup2_visualizer_pane_g1_ParamLimits

0x6db7,	// (0x0002ce27) mup2_visualizer_pane_g1

0xbe2e,	// (0x00031e9e) mup2_visualizer_pane_g2_ParamLimits

0xbe2e,	// (0x00031e9e) mup2_visualizer_pane_g2

0x6dce,	// (0x0002ce3e) mup2_visualizer_pane_g3_ParamLimits

0x6dce,	// (0x0002ce3e) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x00035703) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x00035703) mup2_visualizer_pane_g

0x5bd0,	// (0x0002bc40) aid_size_cell_fmradio

0x671d,	// (0x0002c78d) aid_height_parent_landcape

0x3a09,	// (0x00029a79) wml_content_pane_cp

0x3a11,	// (0x00029a81) wml_tabs_pane

0x3a1a,	// (0x00029a8a) popup_wml_miniature_window

0x3a22,	// (0x00029a92) scroll_pane_cp021

0x3a36,	// (0x00029aa6) wml_content_pane_comp8

0x24fc,	// (0x0002856c) bg_popup_sub_pane_cp05

0xbe4c,	// (0x00031ebc) popup_wml_miniature_window_g1

0xbe54,	// (0x00031ec4) wml_miniature_view_pane

0x6dda,	// (0x0002ce4a) aid_size_wml_view

0x6de2,	// (0x0002ce52) wml_miniature_view_pane_g1

0x6deb,	// (0x0002ce5b) wml_miniature_view_pane_g2

0x6df4,	// (0x0002ce64) wml_miniature_view_pane_g3

0x6dfc,	// (0x0002ce6c) wml_miniature_view_pane_g4

0x6e04,	// (0x0002ce74) wml_miniature_view_pane_g5

0x6e0c,	// (0x0002ce7c) wml_miniature_view_pane_g6

0x6e14,	// (0x0002ce84) wml_miniature_view_pane_g7

0x6e1c,	// (0x0002ce8c) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0003570a) wml_miniature_view_pane_g

0xbe5c,	// (0x00031ecc) background_graphic_ParamLimits

0xbe5c,	// (0x00031ecc) background_graphic

0xbe68,	// (0x00031ed8) wml_tabs_2_pane

0xbe71,	// (0x00031ee1) wml_tabs_3_pane_ParamLimits

0xbe71,	// (0x00031ee1) wml_tabs_3_pane

0xbe83,	// (0x00031ef3) wml_tabs_4_pane_ParamLimits

0xbe83,	// (0x00031ef3) wml_tabs_4_pane

0xbe99,	// (0x00031f09) wml_tabs_5_pane_ParamLimits

0xbe99,	// (0x00031f09) wml_tabs_5_pane

0xbeb3,	// (0x00031f23) wml_tabs_pane_g2_ParamLimits

0xbeb3,	// (0x00031f23) wml_tabs_pane_g2

0xbec7,	// (0x00031f37) wml_tabs_pane_g3_ParamLimits

0xbec7,	// (0x00031f37) wml_tabs_pane_g3

0x6e24,	// (0x0002ce94) wml_tabs_2_active_pane_ParamLimits

0x6e24,	// (0x0002ce94) wml_tabs_2_active_pane

0x6e38,	// (0x0002cea8) wml_tabs_2_passive_pane_ParamLimits

0x6e38,	// (0x0002cea8) wml_tabs_2_passive_pane

0x6e4c,	// (0x0002cebc) wml_tabs_3_active_pane_cp_ParamLimits

0x6e4c,	// (0x0002cebc) wml_tabs_3_active_pane_cp

0x6e61,	// (0x0002ced1) wml_tabs_3_passive_pane_ParamLimits

0x6e61,	// (0x0002ced1) wml_tabs_3_passive_pane

0x6e74,	// (0x0002cee4) wml_tabs_3_passive_pane_cp_ParamLimits

0x6e74,	// (0x0002cee4) wml_tabs_3_passive_pane_cp

0x6e8b,	// (0x0002cefb) tabs_4_active_pane

0x6e93,	// (0x0002cf03) tabs_4_passive_pane

0x6e9d,	// (0x0002cf0d) tabs_4_passive_pane_cp

0x6ea5,	// (0x0002cf15) tabs_4_passive_pane_cp2

0x6438,	// (0x0002c4a8) aid_height_text

0x52e9,	// (0x0002b359) mup_volume_cont_pane_ParamLimits

0x52e9,	// (0x0002b359) mup_volume_cont_pane

0x27ed,	// (0x0002885d) aid_size_cell_pinb

0x27f7,	// (0x00028867) aid_size_list_pinb

0x6d8f,	// (0x0002cdff) mup2_volume_cont_pane_ParamLimits

0x6d8f,	// (0x0002cdff) mup2_volume_cont_pane

0xbedb,	// (0x00031f4b) mup2_volume_cont_pane_g1_ParamLimits

0xbedb,	// (0x00031f4b) mup2_volume_cont_pane_g1

0x1dd1,	// (0x00027e41) aid_size_cell_touch_ParamLimits

0x1dd1,	// (0x00027e41) aid_size_cell_touch

0x203f,	// (0x000280af) touch_pane_ParamLimits

0x203f,	// (0x000280af) touch_pane

0x1db3,	// (0x00027e23) main_rss2_pane

0xbf1d,	// (0x00031f8d) listscroll_rss2_pane

0xbf26,	// (0x00031f96) rss2_navigation_pane

0xbf2e,	// (0x00031f9e) list_rss2_pane

0x4bec,	// (0x0002ac5c) scroll_pane_cp22

0xbf36,	// (0x00031fa6) rss2_navigation_pane_g1

0xbf3f,	// (0x00031faf) rss2_navigation_pane_g2

0xbf47,	// (0x00031fb7) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0003571b) rss2_navigation_pane_g

0xbf4f,	// (0x00031fbf) rss2_navigation_pane_t1

0x6eaf,	// (0x0002cf1f) rss2_list_single_pane_ParamLimits

0x6eaf,	// (0x0002cf1f) rss2_list_single_pane

0xbf5d,	// (0x00031fcd) rss2_list_single_pane_t2

0xbf6b,	// (0x00031fdb) rss2_list_single_pane_t3_ParamLimits

0xbf6b,	// (0x00031fdb) rss2_list_single_pane_t3

0xbf88,	// (0x00031ff8) rss2_list_single_pane_t4

0x4483,	// (0x0002a4f3) smil_status_pane_g1

0x2025,	// (0x00028095) main_image2_pane_ParamLimits

0x2025,	// (0x00028095) main_image2_pane

0x0f8d,	// (0x00026ffd) main_camera2_pane_g9_ParamLimits

0x0f8d,	// (0x00026ffd) main_camera2_pane_g9

0x10bb,	// (0x0002712b) main_camera2_pane_t5_ParamLimits

0x10bb,	// (0x0002712b) main_camera2_pane_t5

0xbdfe,	// (0x00031e6e) main_camera2_pane_t6_ParamLimits

0xbdfe,	// (0x00031e6e) main_camera2_pane_t6

0x6ec4,	// (0x0002cf34) main_image2_pane_g1_ParamLimits

0x6ec4,	// (0x0002cf34) main_image2_pane_g1

0x5b86,	// (0x0002bbf6) smil2_video_pane_ParamLimits

0x5b86,	// (0x0002bbf6) smil2_video_pane

0x1e01,	// (0x00027e71) aid_zoom_text_primary_cp

0x1fe1,	// (0x00028051) popup_preview_fixed_window

0x3901,	// (0x00029971) im_reading_pane_g1

0x0e04,	// (0x00026e74) cams2_bc_adjust_pane_cp_ParamLimits

0x0e04,	// (0x00026e74) cams2_bc_adjust_pane_cp

0x10ea,	// (0x0002715a) cams2_bc_adjust_pane_ParamLimits

0x10ea,	// (0x0002715a) cams2_bc_adjust_pane

0xbf96,	// (0x00032006) cams2_bc_adjust_pane_g1

0xbf9e,	// (0x0003200e) cams2_slider_pane

0xbfa7,	// (0x00032017) cams2_slider_pane_g1

0xbfb0,	// (0x00032020) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x00035722) cams2_slider_pane_g

0x0b78,	// (0x00026be8) calc_display_pane_ParamLimits

0x0ba0,	// (0x00026c10) calc_paper_pane_ParamLimits

0x0bc3,	// (0x00026c33) grid_calc_pane_ParamLimits

0xb172,	// (0x000311e2) popup_clock_digital_window_t1_ParamLimits

0x5a0d,	// (0x0002ba7d) main_image_pane_t1

0x0b5a,	// (0x00026bca) aid_size_cell_calc_ParamLimits

0x0b5a,	// (0x00026bca) aid_size_cell_calc

0x6763,	// (0x0002c7d3) popup_blid_sat_info2_window_ParamLimits

0x6763,	// (0x0002c7d3) popup_blid_sat_info2_window

0xbfd2,	// (0x00032042) aid_size_cell_blid

0xbfda,	// (0x0003204a) bg_popup_window_pane_cp07

0xbffd,	// (0x0003206d) grid_popup_blid_pane

0xc007,	// (0x00032077) heading_pane_cp05_ParamLimits

0xc007,	// (0x00032077) heading_pane_cp05

0xc0d1,	// (0x00032141) cell_popup_blid_pane_ParamLimits

0xc0d1,	// (0x00032141) cell_popup_blid_pane

0xc0f5,	// (0x00032165) cell_popup_blid_pane_g1

0xc0fd,	// (0x0003216d) cell_popup_blid_pane_t1

0x6d5f,	// (0x0002cdcf) mup2_indicator_pane_ParamLimits

0x6d5f,	// (0x0002cdcf) mup2_indicator_pane

0x502d,	// (0x0002b09d) mup2_visualizer_osc_pane

0xbe3a,	// (0x00031eaa) mup2_visualizer_spec_pane_ParamLimits

0xbe3a,	// (0x00031eaa) mup2_visualizer_spec_pane

0x6eda,	// (0x0002cf4a) mup2_spec_half_pane

0x6ee3,	// (0x0002cf53) mup2_spec_half_pane_cp

0x6eeb,	// (0x0002cf5b) mup2_spec_bar_pane_ParamLimits

0x6eeb,	// (0x0002cf5b) mup2_spec_bar_pane

0xbd89,	// (0x00031df9) mup2_spec_bar_pane_g1

0xbd93,	// (0x00031e03) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00035695) mup2_spec_bar_pane_g

0x6f0b,	// (0x0002cf7b) mup2_osc_middle_pane

0xbda5,	// (0x00031e15) mup2_visualizer_osc_pane_g1

0x20b1,	// (0x00028121) popup_number_entry_window_t1_ParamLimits

0x20c4,	// (0x00028134) popup_number_entry_window_t2_ParamLimits

0x20d6,	// (0x00028146) popup_number_entry_window_t3_ParamLimits

0x20e8,	// (0x00028158) popup_number_entry_window_t5_ParamLimits

0x20e8,	// (0x00028158) popup_number_entry_window_t5

0xf0e7,	// (0x00035157) popup_number_entry_window_t_ParamLimits

0x211c,	// (0x0002818c) text_title_cp2_ParamLimits

0xb1b1,	// (0x00031221) aid_hotspot_pointer_text2_pane

0xb1cb,	// (0x0003123b) main_viewer_pane_g9_ParamLimits

0xb1cb,	// (0x0003123b) main_viewer_pane_g9

0x3fa7,	// (0x0002a017) cale_month_pane_t1_ParamLimits

0x44ff,	// (0x0002a56f) bg_cale_pane_ParamLimits

0x4517,	// (0x0002a587) list_cale_pane_ParamLimits

0x2e1b,	// (0x00028e8b) listscroll_cale_day_pane_t1

0x4528,	// (0x0002a598) scroll_pane_cp09_ParamLimits

0x5397,	// (0x0002b407) main_mup_eq_pane_t1_ParamLimits

0x5397,	// (0x0002b407) main_mup_eq_pane_t1

0x53b1,	// (0x0002b421) main_mup_eq_pane_t2_ParamLimits

0x53b1,	// (0x0002b421) main_mup_eq_pane_t2

0x53cb,	// (0x0002b43b) main_mup_eq_pane_t3_ParamLimits

0x53cb,	// (0x0002b43b) main_mup_eq_pane_t3

0x53e7,	// (0x0002b457) main_mup_eq_pane_t4_ParamLimits

0x53e7,	// (0x0002b457) main_mup_eq_pane_t4

0x5403,	// (0x0002b473) main_mup_eq_pane_t5_ParamLimits

0x5403,	// (0x0002b473) main_mup_eq_pane_t5

0x541f,	// (0x0002b48f) main_mup_eq_pane_t6_ParamLimits

0x541f,	// (0x0002b48f) main_mup_eq_pane_t6

0x5433,	// (0x0002b4a3) main_mup_eq_pane_t7_ParamLimits

0x5433,	// (0x0002b4a3) main_mup_eq_pane_t7

0x5447,	// (0x0002b4b7) main_mup_eq_pane_t8_ParamLimits

0x5447,	// (0x0002b4b7) main_mup_eq_pane_t8

0x545b,	// (0x0002b4cb) main_mup_eq_pane_t9_ParamLimits

0x545b,	// (0x0002b4cb) main_mup_eq_pane_t9

0x5475,	// (0x0002b4e5) main_mup_eq_pane_t10_ParamLimits

0x5475,	// (0x0002b4e5) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x000354e4) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x000354e4) main_mup_eq_pane_t

0x5524,	// (0x0002b594) mup_equalizer_pane_cp5_ParamLimits

0x5538,	// (0x0002b5a8) mup_equalizer_pane_cp6_ParamLimits

0x554c,	// (0x0002b5bc) mup_equalizer_pane_cp7_ParamLimits

0x1db3,	// (0x00027e23) main_gallery_pane

0xbdae,	// (0x00031e1e) smil2_volume_pane

0xbdb6,	// (0x00031e26) smil_status_volume_pane_g1_ParamLimits

0xbdc9,	// (0x00031e39) smil_status_volume_pane_g2_ParamLimits

0xbddc,	// (0x00031e4c) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0003569a) smil_status_volume_pane_g_ParamLimits

0xbfda,	// (0x0003204a) bg_popup_window_pane_cp07_ParamLimits

0xbfe8,	// (0x00032058) blid_firmament_pane

0x6f14,	// (0x0002cf84) aid_size_cell_gallery_ParamLimits

0x6f14,	// (0x0002cf84) aid_size_cell_gallery

0x6f2a,	// (0x0002cf9a) grid_gallery_pane_ParamLimits

0x6f2a,	// (0x0002cf9a) grid_gallery_pane

0x6f43,	// (0x0002cfb3) cell_gallery_pane_ParamLimits

0x6f43,	// (0x0002cfb3) cell_gallery_pane

0xc10b,	// (0x0003217b) bg_cell_gallery_focus_pane_ParamLimits

0xc10b,	// (0x0003217b) bg_cell_gallery_focus_pane

0xc11d,	// (0x0003218d) cell_gallery_pane_g1_ParamLimits

0xc11d,	// (0x0003218d) cell_gallery_pane_g1

0x6f8c,	// (0x0002cffc) cell_gallery_pane_g2_ParamLimits

0x6f8c,	// (0x0002cffc) cell_gallery_pane_g2

0x6f99,	// (0x0002d009) cell_gallery_pane_g3_ParamLimits

0x6f99,	// (0x0002d009) cell_gallery_pane_g3

0xc129,	// (0x00032199) cell_gallery_pane_g4_ParamLimits

0xc129,	// (0x00032199) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00035748) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00035748) cell_gallery_pane_g

0xc135,	// (0x000321a5) bg_cell_gallery_focus_pane_g1

0xc13d,	// (0x000321ad) bg_cell_gallery_focus_pane_g2

0xc145,	// (0x000321b5) bg_cell_gallery_focus_pane_g3

0xc14d,	// (0x000321bd) bg_cell_gallery_focus_pane_g4

0xc155,	// (0x000321c5) bg_cell_gallery_focus_pane_g5

0xc15d,	// (0x000321cd) bg_cell_gallery_focus_pane_g6

0xc165,	// (0x000321d5) bg_cell_gallery_focus_pane_g7

0xc16d,	// (0x000321dd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00035751) bg_cell_gallery_focus_pane_g

0xc175,	// (0x000321e5) aid_firma_cardinal

0xc189,	// (0x000321f9) blid_firmament_pane_t1

0xc1a0,	// (0x00032210) blid_firmament_pane_t2

0xc1b7,	// (0x00032227) blid_firmament_pane_t3

0xc1ce,	// (0x0003223e) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00035762) blid_firmament_pane_t

0xc1e5,	// (0x00032255) blid_sat_info_pane

0xc1f5,	// (0x00032265) blid_sat_info_pane_g1

0xc1f5,	// (0x00032265) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0003576b) blid_sat_info_pane_g

0xc1ff,	// (0x0003226f) blid_sat_info_pane_t1

0xc20d,	// (0x0003227d) smil2_volume_content_pane

0xc216,	// (0x00032286) smil2_volume_pane_g1

0xc21e,	// (0x0003228e) smil2_volume_content_pane_g1

0xc227,	// (0x00032297) smil2_volume_content_pane_g2

0xc230,	// (0x000322a0) smil2_volume_content_pane_g3

0xc239,	// (0x000322a9) smil2_volume_content_pane_g4

0xc242,	// (0x000322b2) smil2_volume_content_pane_g5

0xc24b,	// (0x000322bb) smil2_volume_content_pane_g6

0xc254,	// (0x000322c4) smil2_volume_content_pane_g7

0xc25d,	// (0x000322cd) smil2_volume_content_pane_g8

0xc266,	// (0x000322d6) smil2_volume_content_pane_g9

0xc26f,	// (0x000322df) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00035770) smil2_volume_content_pane_g

0x2e87,	// (0x00028ef7) cale_week_day_heading_pane_t1_ParamLimits

0x2eb1,	// (0x00028f21) cale_week_day_heading_pane_t2_ParamLimits

0x2edb,	// (0x00028f4b) cale_week_day_heading_pane_t3_ParamLimits

0x2f05,	// (0x00028f75) cale_week_day_heading_pane_t4_ParamLimits

0x2f2f,	// (0x00028f9f) cale_week_day_heading_pane_t5_ParamLimits

0x2f59,	// (0x00028fc9) cale_week_day_heading_pane_t6_ParamLimits

0x2f85,	// (0x00028ff5) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0003525c) cale_week_day_heading_pane_t_ParamLimits

0x2faf,	// (0x0002901f) bg_cale_side_pane_ParamLimits

0x0c9a,	// (0x00026d0a) cale_week_time_pane_t1_ParamLimits

0x0cb2,	// (0x00026d22) cale_week_time_pane_t2_ParamLimits

0x0cca,	// (0x00026d3a) cale_week_time_pane_t3_ParamLimits

0x0ce2,	// (0x00026d52) cale_week_time_pane_t4_ParamLimits

0x0cfa,	// (0x00026d6a) cale_week_time_pane_t5_ParamLimits

0x0d12,	// (0x00026d82) cale_week_time_pane_t6_ParamLimits

0x0d2a,	// (0x00026d9a) cale_week_time_pane_t7_ParamLimits

0x0d42,	// (0x00026db2) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0003526b) cale_week_time_pane_t_ParamLimits

0x2fbd,	// (0x0002902d) cell_cale_week_pane_g2_ParamLimits

0x2faf,	// (0x0002901f) bg_cale_side_pane_cp01_ParamLimits

0x42e6,	// (0x0002a356) cale_month_week_pane_t1_ParamLimits

0x42fd,	// (0x0002a36d) cale_month_week_pane_t2_ParamLimits

0x4314,	// (0x0002a384) cale_month_week_pane_t3_ParamLimits

0x432b,	// (0x0002a39b) cale_month_week_pane_t4_ParamLimits

0x4342,	// (0x0002a3b2) cale_month_week_pane_t5_ParamLimits

0x4359,	// (0x0002a3c9) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00035344) cale_month_week_pane_t_ParamLimits

0xb0ee,	// (0x0003115e) cell_cale_month_pane_g1_ParamLimits

0x1db3,	// (0x00027e23) main_cale_event_viewer_pane

0x1db3,	// (0x00027e23) listscroll_cale_event_viewer_pane

0xc278,	// (0x000322e8) list_cale_ev_pane

0xc280,	// (0x000322f0) scroll_pane_cp023

0xc28c,	// (0x000322fc) field_cale_ev_pane_ParamLimits

0xc28c,	// (0x000322fc) field_cale_ev_pane

0xc2aa,	// (0x0003231a) field_cale_ev_content_pane_ParamLimits

0xc2aa,	// (0x0003231a) field_cale_ev_content_pane

0xc2b6,	// (0x00032326) field_cale_ev_pane_g1_ParamLimits

0xc2b6,	// (0x00032326) field_cale_ev_pane_g1

0xc2c2,	// (0x00032332) field_cale_ev_pane_g2_ParamLimits

0xc2c2,	// (0x00032332) field_cale_ev_pane_g2

0xc2da,	// (0x0003234a) field_cale_ev_pane_g3_ParamLimits

0xc2da,	// (0x0003234a) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x00035785) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x00035785) field_cale_ev_pane_g

0xc2f2,	// (0x00032362) field_cale_ev_pane_t1_ParamLimits

0xc2f2,	// (0x00032362) field_cale_ev_pane_t1

0xc309,	// (0x00032379) field_cale_ev_content_pane_t1_ParamLimits

0xc309,	// (0x00032379) field_cale_ev_content_pane_t1

0x563a,	// (0x0002b6aa) bg_button_pane_cp01

0x2a3a,	// (0x00028aaa) listscroll_cale_week_pane_ParamLimits

0x2c78,	// (0x00028ce8) popup_toolbar_window_cp01

0x2e1b,	// (0x00028e8b) listscroll_cale_week_pane_t1_ParamLimits

0x2a3a,	// (0x00028aaa) listscroll_cale_day_pane_ParamLimits

0x44f5,	// (0x0002a565) popup_toolbar_window_cp02

0x2e1b,	// (0x00028e8b) listscroll_cale_day_pane_t1_ParamLimits

0x2a3a,	// (0x00028aaa) main_cale_month_pane_ParamLimits

0x6997,	// (0x0002ca07) popup_toolbar_window_cp03_ParamLimits

0x6997,	// (0x0002ca07) popup_toolbar_window_cp03

0x59eb,	// (0x0002ba5b) main_image_pane_g2_ParamLimits

0x59eb,	// (0x0002ba5b) main_image_pane_g2

0x59fc,	// (0x0002ba6c) main_image_pane_g3_ParamLimits

0x59fc,	// (0x0002ba6c) main_image_pane_g3

0x0002,

0xf506,	// (0x00035576) main_image_pane_g_ParamLimits

0xf506,	// (0x00035576) main_image_pane_g

0x5a0d,	// (0x0002ba7d) main_image_pane_t1_ParamLimits

0x5a24,	// (0x0002ba94) main_image_pane_t2_ParamLimits

0x5a24,	// (0x0002ba94) main_image_pane_t2

0x5a36,	// (0x0002baa6) main_image_pane_t3_ParamLimits

0x5a36,	// (0x0002baa6) main_image_pane_t3

0x5a5e,	// (0x0002bace) main_image_pane_t4_ParamLimits

0x5a5e,	// (0x0002bace) main_image_pane_t4

0x0003,

0xf50d,	// (0x0003557d) main_image_pane_t_ParamLimits

0xf50d,	// (0x0003557d) main_image_pane_t

0x5a7e,	// (0x0002baee) popup_image_details_window_cp01

0x5a88,	// (0x0002baf8) popup_toobar_trans_pane_cp01_ParamLimits

0x5a88,	// (0x0002baf8) popup_toobar_trans_pane_cp01

0x6842,	// (0x0002c8b2) popup_image_details_window_ParamLimits

0x6842,	// (0x0002c8b2) popup_image_details_window

0xbd0f,	// (0x00031d7f) popup_image_focus_window

0x0dbe,	// (0x00026e2e) camera2_autofocus_pane_ParamLimits

0x0dbe,	// (0x00026e2e) camera2_autofocus_pane

0x1db3,	// (0x00027e23) bg_popup_sub_pane_cp06

0xc327,	// (0x00032397) popup_image_focus_window_g1

0xc32f,	// (0x0003239f) popup_image_focus_window_g2

0xc337,	// (0x000323a7) popup_image_focus_window_g3

0xc33f,	// (0x000323af) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0003578c) popup_image_focus_window_g

0xc347,	// (0x000323b7) popup_image_focus_window_t1

0xc355,	// (0x000323c5) popup_image_focus_window_t2

0xc365,	// (0x000323d5) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x00035795) popup_image_focus_window_t

0xc373,	// (0x000323e3) camera2_autofocus_pane_g1

0x2025,	// (0x00028095) bg_tb_trans_pane_cp01

0xc381,	// (0x000323f1) popup_image_details_window_g1

0xc394,	// (0x00032404) popup_image_details_window_g2

0x0002,

0xf737,	// (0x000357a7) popup_image_details_window_g

0xc3bd,	// (0x0003242d) popup_image_details_window_t1

0xc3cf,	// (0x0003243f) popup_image_details_window_t2

0xc3e8,	// (0x00032458) popup_image_details_window_t3

0xc3fc,	// (0x0003246c) popup_image_details_window_t4

0xc417,	// (0x00032487) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x000357ae) popup_image_details_window_t

0x2a26,	// (0x00028a96) bg_calc_paper_pane_ParamLimits

0xaff4,	// (0x00031064) grid_highlight_pane_cp013

0xaffe,	// (0x0003106e) list_calc_pane_ParamLimits

0xb010,	// (0x00031080) scroll_pane_cp024

0x2a3a,	// (0x00028aaa) bg_calc_display_pane_ParamLimits

0x0bf1,	// (0x00026c61) calc_display_pane_t1_ParamLimits

0x0c03,	// (0x00026c73) calc_display_pane_t2_ParamLimits

0xb018,	// (0x00031088) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x000351de) calc_display_pane_t_ParamLimits

0x0c64,	// (0x00026cd4) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x000351fb) cell_calc_pane_g

0x0c6d,	// (0x00026cdd) cell_calc_pane_t1

0x2af5,	// (0x00028b65) grid_highlight_pane_cp02_ParamLimits

0x2b0b,	// (0x00028b7b) toolbar_button_pane_cp01_ParamLimits

0x2b0b,	// (0x00028b7b) toolbar_button_pane_cp01

0x5aca,	// (0x0002bb3a) temp_image_control_pane_ParamLimits

0x5aca,	// (0x0002bb3a) temp_image_control_pane

0x2025,	// (0x00028095) main_mp3_pane

0xc431,	// (0x000324a1) temp_image_control_pane_g1_ParamLimits

0xc431,	// (0x000324a1) temp_image_control_pane_g1

0xc43f,	// (0x000324af) temp_image_control_pane_g2_ParamLimits

0xc43f,	// (0x000324af) temp_image_control_pane_g2

0xc451,	// (0x000324c1) temp_image_control_pane_g3_ParamLimits

0xc451,	// (0x000324c1) temp_image_control_pane_g3

0x6fd6,	// (0x0002d046) temp_image_control_pane_g4_ParamLimits

0x6fd6,	// (0x0002d046) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x000357b9) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x000357b9) temp_image_control_pane_g

0xc431,	// (0x000324a1) main_mp3_pane_g1

0x6fe9,	// (0x0002d059) main_mp3_pane_g2

0x0007,

0xf752,	// (0x000357c2) main_mp3_pane_g

0xc494,	// (0x00032504) main_mp3_pane_t1

0x3132,	// (0x000291a2) main_camera_pane_g8_ParamLimits

0x3132,	// (0x000291a2) main_camera_pane_g8

0x32df,	// (0x0002934f) main_video_pane_g7_ParamLimits

0x32df,	// (0x0002934f) main_video_pane_g7

0xbe1c,	// (0x00031e8c) main_camera2_pane_t7_ParamLimits

0xbe1c,	// (0x00031e8c) main_camera2_pane_t7

0x39c9,	// (0x00029a39) scroll_pane_cp025_ParamLimits

0x39c9,	// (0x00029a39) scroll_pane_cp025

0x39dd,	// (0x00029a4d) scroll_pane_cp026_ParamLimits

0x39dd,	// (0x00029a4d) scroll_pane_cp026

0x39ec,	// (0x00029a5c) wml_content_pane_ParamLimits

0x1db3,	// (0x00027e23) main_touch_calib_pane

0x70b3,	// (0x0002d123) main_touch_calib_pane_g1

0x70bf,	// (0x0002d12f) main_touch_calib_pane_g2

0x70cb,	// (0x0002d13b) main_touch_calib_pane_g3

0x70d7,	// (0x0002d147) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x000357e0) main_touch_calib_pane_g

0x70e3,	// (0x0002d153) main_touch_calib_pane_t1

0x70fd,	// (0x0002d16d) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x000357e9) main_touch_calib_pane_t

0x4e94,	// (0x0002af04) mup_progress_pane_cp02

0x4ec9,	// (0x0002af39) navi_pane_g1

0x4f82,	// (0x0002aff2) navi_pane_mp_t3

0x2025,	// (0x00028095) main_mp3_pane_ParamLimits

0x69d5,	// (0x0002ca45) navi_pane_ParamLimits

0xc431,	// (0x000324a1) main_mp3_pane_g1_ParamLimits

0x6fe9,	// (0x0002d059) main_mp3_pane_g2_ParamLimits

0x6ff7,	// (0x0002d067) main_mp3_pane_g3_ParamLimits

0x6ff7,	// (0x0002d067) main_mp3_pane_g3

0x7005,	// (0x0002d075) main_mp3_pane_g4_ParamLimits

0x7005,	// (0x0002d075) main_mp3_pane_g4

0xc461,	// (0x000324d1) main_mp3_pane_g5_ParamLimits

0xc461,	// (0x000324d1) main_mp3_pane_g5

0xc46f,	// (0x000324df) main_mp3_pane_g6_ParamLimits

0xc46f,	// (0x000324df) main_mp3_pane_g6

0xc47c,	// (0x000324ec) main_mp3_pane_g7_ParamLimits

0xc47c,	// (0x000324ec) main_mp3_pane_g7

0xc488,	// (0x000324f8) main_mp3_pane_g8_ParamLimits

0xc488,	// (0x000324f8) main_mp3_pane_g8

0xf752,	// (0x000357c2) main_mp3_pane_g_ParamLimits

0x7011,	// (0x0002d081) main_mp3_pane_t2

0x701f,	// (0x0002d08f) main_mp3_pane_t3

0xc4a2,	// (0x00032512) main_mp3_pane_t4

0xc4b0,	// (0x00032520) main_mp3_pane_t5

0x0005,

0xf763,	// (0x000357d3) main_mp3_pane_t

0xc4be,	// (0x0003252e) mup_progress_pane_cp01

0x1e01,	// (0x00027e71) aid_zoom_text_secondary2

0xc278,	// (0x000322e8) list_cale_ev2_pane

0xc280,	// (0x000322f0) scroll_pane_cp023_ParamLimits

0x7153,	// (0x0002d1c3) field_cale_ev2_pane_ParamLimits

0x7153,	// (0x0002d1c3) field_cale_ev2_pane

0x7173,	// (0x0002d1e3) field_cale_ev2_pane_g1_ParamLimits

0x7173,	// (0x0002d1e3) field_cale_ev2_pane_g1

0x717f,	// (0x0002d1ef) field_cale_ev2_pane_g2_ParamLimits

0x717f,	// (0x0002d1ef) field_cale_ev2_pane_g2

0x7197,	// (0x0002d207) field_cale_ev2_pane_g3_ParamLimits

0x7197,	// (0x0002d207) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x000357f4) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x000357f4) field_cale_ev2_pane_g

0x71af,	// (0x0002d21f) field_cale_ev2_pane_t1_ParamLimits

0x71af,	// (0x0002d21f) field_cale_ev2_pane_t1

0x71c6,	// (0x0002d236) field_cale_ev2_pane_t2_ParamLimits

0x71c6,	// (0x0002d236) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x000357fd) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x000357fd) field_cale_ev2_pane_t

0x57ba,	// (0x0002b82a) main_postcard_pane_g5_ParamLimits

0x57ba,	// (0x0002b82a) main_postcard_pane_g5

0x57d0,	// (0x0002b840) main_postcard_pane_g6_ParamLimits

0x57d0,	// (0x0002b840) main_postcard_pane_g6

0x307d,	// (0x000290ed) camera2_autofocus_pane_cp_ParamLimits

0x307d,	// (0x000290ed) camera2_autofocus_pane_cp

0x2025,	// (0x00028095) main_mup3_pane

0x71fb,	// (0x0002d26b) main_mup3_pane_g1_ParamLimits

0x71fb,	// (0x0002d26b) main_mup3_pane_g1

0x721d,	// (0x0002d28d) main_mup3_pane_g2_ParamLimits

0x721d,	// (0x0002d28d) main_mup3_pane_g2

0x729b,	// (0x0002d30b) main_mup3_pane_g3_ParamLimits

0x729b,	// (0x0002d30b) main_mup3_pane_g3

0x72e1,	// (0x0002d351) main_mup3_pane_g4_ParamLimits

0x72e1,	// (0x0002d351) main_mup3_pane_g4

0x7327,	// (0x0002d397) main_mup3_pane_g5_ParamLimits

0x7327,	// (0x0002d397) main_mup3_pane_g5

0x736d,	// (0x0002d3dd) main_mup3_pane_g6_ParamLimits

0x736d,	// (0x0002d3dd) main_mup3_pane_g6

0xc4d2,	// (0x00032542) main_mup3_pane_g7_ParamLimits

0xc4d2,	// (0x00032542) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0003580d) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0003580d) main_mup3_pane_g

0x73eb,	// (0x0002d45b) main_mup3_pane_t1_ParamLimits

0x73eb,	// (0x0002d45b) main_mup3_pane_t1

0x745f,	// (0x0002d4cf) main_mup3_pane_t2_ParamLimits

0x745f,	// (0x0002d4cf) main_mup3_pane_t2

0x7533,	// (0x0002d5a3) main_mup3_pane_t4_ParamLimits

0x7533,	// (0x0002d5a3) main_mup3_pane_t4

0x7589,	// (0x0002d5f9) main_mup3_pane_t5_ParamLimits

0x7589,	// (0x0002d5f9) main_mup3_pane_t5

0x7645,	// (0x0002d6b5) main_mup3_pane_t6_ParamLimits

0x7645,	// (0x0002d6b5) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0003581e) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0003581e) main_mup3_pane_t

0x76fd,	// (0x0002d76d) mup3_progress_pane_ParamLimits

0x76fd,	// (0x0002d76d) mup3_progress_pane

0x7793,	// (0x0002d803) popup_mup3_control_window_ParamLimits

0x7793,	// (0x0002d803) popup_mup3_control_window

0xc4e0,	// (0x00032550) popup_mup3_text_window

0x77c5,	// (0x0002d835) mup3_progress_pane_t1

0x77e4,	// (0x0002d854) mup3_progress_pane_t2

0xc4e8,	// (0x00032558) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0003582b) mup3_progress_pane_t

0xc505,	// (0x00032575) mup_progress_pane_cp03

0x1db3,	// (0x00027e23) bg_tb_trans_pane_cp04

0x7803,	// (0x0002d873) mup3_volume_pane

0x780b,	// (0x0002d87b) popup_mup3_control_window_g1

0x7814,	// (0x0002d884) mup3_volume_pane_g1

0x781d,	// (0x0002d88d) mup3_volume_pane_g2

0x7826,	// (0x0002d896) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x00035832) mup3_volume_pane_g

0x1db3,	// (0x00027e23) bg_tb_trans_pane_cp03

0xc515,	// (0x00032585) popup_mup3_text_window_g1

0xc51d,	// (0x0003258d) popup_mup3_text_window_t1

0x2ade,	// (0x00028b4e) list_calc_item_pane_g1_ParamLimits

0xbf04,	// (0x00031f74) mup_volume_pane_cp_g1

0x7117,	// (0x0002d187) main_touch_calib_pane_t3

0x712b,	// (0x0002d19b) main_touch_calib_pane_t4

0x713f,	// (0x0002d1af) main_touch_calib_pane_t5

0x1dbd,	// (0x00027e2d) aid_cell_size_toolbar2

0x1dc5,	// (0x00027e35) aid_popup3_width_pane

0x1e01,	// (0x00027e71) aid_zoom_text_msg_primary

0xb0d8,	// (0x00031148) vorec_t7

0x2a46,	// (0x00028ab6) bg_calc_paper_pane_g1_ParamLimits

0x2a52,	// (0x00028ac2) bg_calc_paper_pane_g2_ParamLimits

0x2a5e,	// (0x00028ace) bg_calc_paper_pane_g3_ParamLimits

0x2a6a,	// (0x00028ada) bg_calc_paper_pane_g4_ParamLimits

0x2a76,	// (0x00028ae6) bg_calc_paper_pane_g5_ParamLimits

0x2a82,	// (0x00028af2) bg_calc_paper_pane_g6_ParamLimits

0x2a91,	// (0x00028b01) bg_calc_paper_pane_g7_ParamLimits

0x2aa0,	// (0x00028b10) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x000351e5) bg_calc_paper_pane_g_ParamLimits

0x2ab3,	// (0x00028b23) calc_bg_paper_pane_g9_ParamLimits

0x31d7,	// (0x00029247) image_qvga_pane_ParamLimits

0x31d7,	// (0x00029247) image_qvga_pane

0x2757,	// (0x000287c7) bg_popup_sub_pane_cp04_ParamLimits

0x5949,	// (0x0002b9b9) popup_mup_playback_window_g1_ParamLimits

0x5955,	// (0x0002b9c5) popup_mup_playback_window_t1_ParamLimits

0x596a,	// (0x0002b9da) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00035571) popup_mup_playback_window_t_ParamLimits

0x6c79,	// (0x0002cce9) main_mup2_pane_g3_ParamLimits

0x6c79,	// (0x0002cce9) main_mup2_pane_g3

0x365c,	// (0x000296cc) popup_toolbar_window_cp04

0x614c,	// (0x0002c1bc) popup_call2_audio_second_window_g3_ParamLimits

0x614c,	// (0x0002c1bc) popup_call2_audio_second_window_g3

0xb30f,	// (0x0003137f) popup_call2_audio_first_window_g4_ParamLimits

0xb30f,	// (0x0003137f) popup_call2_audio_first_window_g4

0xb98e,	// (0x000319fe) popup_call2_audio_in_window_g4_ParamLimits

0xb98e,	// (0x000319fe) popup_call2_audio_in_window_g4

0x597f,	// (0x0002b9ef) aid_area_sk_bg_cut_ParamLimits

0x597f,	// (0x0002b9ef) aid_area_sk_bg_cut

0x599d,	// (0x0002ba0d) aid_area_sk_bg_cut_2_ParamLimits

0x599d,	// (0x0002ba0d) aid_area_sk_bg_cut_2

0x6f7c,	// (0x0002cfec) aid_placing_details_win

0x6f84,	// (0x0002cff4) aid_placing_details_win_2

0xc373,	// (0x000323e3) camera2_autofocus_pane_g1_ParamLimits

0x1fc6,	// (0x00028036) popup_fixed_preview_cale_window_ParamLimits

0x1fc6,	// (0x00028036) popup_fixed_preview_cale_window

0x503e,	// (0x0002b0ae) navi_slider_pane_g3

0x5047,	// (0x0002b0b7) navi_slider_pane_g4

0x5050,	// (0x0002b0c0) navi_slider_pane_g5

0x503e,	// (0x0002b0ae) navi_slider_pane_g6

0xb198,	// (0x00031208) navi_slider_pane_g7

0x5569,	// (0x0002b5d9) mup_scale_pane_g3

0x5572,	// (0x0002b5e2) mup_scale_pane_g4

0x557b,	// (0x0002b5eb) mup_scale_pane_g5

0x5584,	// (0x0002b5f4) mup_scale_pane_g6

0x558d,	// (0x0002b5fd) mup_scale_pane_g7

0x503e,	// (0x0002b0ae) cams2_slider_pane_g3

0xbfb9,	// (0x00032029) cams2_slider_pane_g4

0xbfc1,	// (0x00032031) cams2_slider_pane_g5

0x503e,	// (0x0002b0ae) cams2_slider_pane_g6

0xbfc9,	// (0x00032039) cams2_slider_pane_g7

0xc1f5,	// (0x00032265) camera2_autofocus_pane_cp_g1

0xc52b,	// (0x0003259b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc52b,	// (0x0003259b) bg_popup_preview_window_pane_cp02

0xc537,	// (0x000325a7) list_fp_cale_pane_ParamLimits

0xc537,	// (0x000325a7) list_fp_cale_pane

0xc543,	// (0x000325b3) popup_fixed_preview_cale_window_t1_ParamLimits

0xc543,	// (0x000325b3) popup_fixed_preview_cale_window_t1

0x782f,	// (0x0002d89f) popup_fixed_preview_cale_window_t2_ParamLimits

0x782f,	// (0x0002d89f) popup_fixed_preview_cale_window_t2

0x7844,	// (0x0002d8b4) popup_fixed_preview_cale_window_t3_ParamLimits

0x7844,	// (0x0002d8b4) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00035839) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00035839) popup_fixed_preview_cale_window_t

0x7859,	// (0x0002d8c9) list_single_fp_cale_pane_ParamLimits

0x7859,	// (0x0002d8c9) list_single_fp_cale_pane

0xc561,	// (0x000325d1) list_single_fp_cale_pane_g1_ParamLimits

0xc561,	// (0x000325d1) list_single_fp_cale_pane_g1

0xc56d,	// (0x000325dd) list_single_fp_cale_pane_g2_ParamLimits

0xc56d,	// (0x000325dd) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00035840) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00035840) list_single_fp_cale_pane_g

0xc586,	// (0x000325f6) list_single_fp_cale_pane_t1_ParamLimits

0xc586,	// (0x000325f6) list_single_fp_cale_pane_t1

0xc598,	// (0x00032608) list_single_fp_cale_pane_t2_ParamLimits

0xc598,	// (0x00032608) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x00035847) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x00035847) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1db3,	// (0x00027e23) main_dialer_pane

0x786e,	// (0x0002d8de) aid_cell_size_keypad

0x7878,	// (0x0002d8e8) dialer_ne_pane

0x7880,	// (0x0002d8f0) grid_dialer_command_1_pane

0x7888,	// (0x0002d8f8) grid_dialer_command_2_pane

0x7890,	// (0x0002d900) grid_dialer_keypad_pane

0x78a2,	// (0x0002d912) bg_popup_call_pane_cp06_ParamLimits

0x78a2,	// (0x0002d912) bg_popup_call_pane_cp06

0x78ae,	// (0x0002d91e) dialer_ne_clear_pane_ParamLimits

0x78ae,	// (0x0002d91e) dialer_ne_clear_pane

0xc5cb,	// (0x0003263b) dialer_ne_pane_g1

0xc5d3,	// (0x00032643) dialer_ne_pane_t1_ParamLimits

0xc5d3,	// (0x00032643) dialer_ne_pane_t1

0x78ba,	// (0x0002d92a) dialer_ne_pane_t2_ParamLimits

0x78ba,	// (0x0002d92a) dialer_ne_pane_t2

0x78e4,	// (0x0002d954) dialer_ne_pane_t3_ParamLimits

0x78e4,	// (0x0002d954) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0003584c) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0003584c) dialer_ne_pane_t

0x7914,	// (0x0002d984) dialer_ne_pane_t3_copy1_ParamLimits

0x7914,	// (0x0002d984) dialer_ne_pane_t3_copy1

0x7943,	// (0x0002d9b3) cell_dialer_keypad_pane_ParamLimits

0x7943,	// (0x0002d9b3) cell_dialer_keypad_pane

0x795a,	// (0x0002d9ca) cell_dialer_command_1_pane_ParamLimits

0x795a,	// (0x0002d9ca) cell_dialer_command_1_pane

0x7970,	// (0x0002d9e0) cell_dialer_command_2_pane_ParamLimits

0x7970,	// (0x0002d9e0) cell_dialer_command_2_pane

0xc5e5,	// (0x00032655) bg_button_pane_cp02_ParamLimits

0xc5e5,	// (0x00032655) bg_button_pane_cp02

0x797f,	// (0x0002d9ef) cell_dialer_keypad_pane_g1_ParamLimits

0x797f,	// (0x0002d9ef) cell_dialer_keypad_pane_g1

0xc5e5,	// (0x00032655) bg_button_pane_cp03_ParamLimits

0xc5e5,	// (0x00032655) bg_button_pane_cp03

0x7993,	// (0x0002da03) cell_dialer_command_1_pane_g1_ParamLimits

0x7993,	// (0x0002da03) cell_dialer_command_1_pane_g1

0xc5f1,	// (0x00032661) bg_button_pane_cp04

0x79a7,	// (0x0002da17) cell_dialer_command_2_pane_g1

0x502d,	// (0x0002b09d) bg_button_pane_cp06

0xc5f9,	// (0x00032669) dialer_ne_clear_pane_g1

0x4ed5,	// (0x0002af45) navi_pane_g2

0x4f03,	// (0x0002af73) navi_pane_g3

0x0002,

0xf404,	// (0x00035474) navi_pane_g

0x4f90,	// (0x0002b000) navi_pane_mv_g2

0x4fb7,	// (0x0002b027) navi_pane_mv_g5

0x4fbf,	// (0x0002b02f) navi_pane_mv_t1

0x2a3a,	// (0x00028aaa) main_clock2_pane

0x79df,	// (0x0002da4f) main_clock2_list_pane_ParamLimits

0x79df,	// (0x0002da4f) main_clock2_list_pane

0x7a17,	// (0x0002da87) main_clock2_pane_t1_ParamLimits

0x7a17,	// (0x0002da87) main_clock2_pane_t1

0x7a53,	// (0x0002dac3) main_clock2_pane_t2_ParamLimits

0x7a53,	// (0x0002dac3) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x00035853) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x00035853) main_clock2_pane_t

0x7af0,	// (0x0002db60) popup_clock_analogue_window_cp03_ParamLimits

0x7af0,	// (0x0002db60) popup_clock_analogue_window_cp03

0x7b15,	// (0x0002db85) popup_clock_digital_window_cp02_ParamLimits

0x7b15,	// (0x0002db85) popup_clock_digital_window_cp02

0x7b86,	// (0x0002dbf6) main_clock2_list_single_pane_ParamLimits

0x7b86,	// (0x0002dbf6) main_clock2_list_single_pane

0x502d,	// (0x0002b09d) list_highlight_pane_cp05

0xc601,	// (0x00032671) main_clock2_list_single_pane_t1

0x365c,	// (0x000296cc) popup_toolbar_window_cp04_ParamLimits

0x6fa6,	// (0x0002d016) camera2_autofocus_pane_g2_ParamLimits

0x6fa6,	// (0x0002d016) camera2_autofocus_pane_g2

0x6fb2,	// (0x0002d022) camera2_autofocus_pane_g3_ParamLimits

0x6fb2,	// (0x0002d022) camera2_autofocus_pane_g3

0x6fbe,	// (0x0002d02e) camera2_autofocus_pane_g4_ParamLimits

0x6fbe,	// (0x0002d02e) camera2_autofocus_pane_g4

0x6fca,	// (0x0002d03a) camera2_autofocus_pane_g5_ParamLimits

0x6fca,	// (0x0002d03a) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0003579c) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0003579c) camera2_autofocus_pane_g

0x71db,	// (0x0002d24b) camera2_autofocus_pane_cp_g2

0x71e3,	// (0x0002d253) camera2_autofocus_pane_cp_g3

0x71eb,	// (0x0002d25b) camera2_autofocus_pane_cp_g4

0x71f3,	// (0x0002d263) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x00035802) camera2_autofocus_pane_cp_g

0x789a,	// (0x0002d90a) popup_dialer_spcha_window

0x1db3,	// (0x00027e23) bg_popup_sub_pane_cp07

0xc60f,	// (0x0003267f) list_spcha_pane

0xc617,	// (0x00032687) list_single_spcha_pane_ParamLimits

0xc617,	// (0x00032687) list_single_spcha_pane

0x1db3,	// (0x00027e23) list_highlight_pane_cp06

0xc628,	// (0x00032698) list_single_spcha_pane_t1

0xb738,	// (0x000317a8) popup_call2_audio_out_window_g4_ParamLimits

0xb738,	// (0x000317a8) popup_call2_audio_out_window_g4

0x1db3,	// (0x00027e23) main_imed2_pane

0xbd17,	// (0x00031d87) popup_imed_adjust2_window

0x685a,	// (0x0002c8ca) popup_imed_trans_window_ParamLimits

0x685a,	// (0x0002c8ca) popup_imed_trans_window

0xc033,	// (0x000320a3) popup_blid_sat_info2_window_t1

0xc041,	// (0x000320b1) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00035731) popup_blid_sat_info2_window_t

0x7bb8,	// (0x0002dc28) aid_size_cell_colour_35

0x7bd8,	// (0x0002dc48) aid_size_cell_colour_112

0x7bf8,	// (0x0002dc68) aid_size_cell_effect

0xbcef,	// (0x00031d5f) bg_tb_trans_pane_cp02

0x465c,	// (0x0002a6cc) heading_imed_pane

0x7c18,	// (0x0002dc88) listscroll_imed_pane

0xc636,	// (0x000326a6) heading_imed_pane_g1

0xc63e,	// (0x000326ae) heading_imed_pane_t1

0xc64c,	// (0x000326bc) grid_imed_colour_35_pane_ParamLimits

0xc64c,	// (0x000326bc) grid_imed_colour_35_pane

0x7c24,	// (0x0002dc94) grid_imed_effect_pane

0xc663,	// (0x000326d3) list_imed_aspect_pane

0x7c3a,	// (0x0002dcaa) scroll_pane_cp027_ParamLimits

0x7c3a,	// (0x0002dcaa) scroll_pane_cp027

0x7c4b,	// (0x0002dcbb) cell_imed_effect_pane_ParamLimits

0x7c4b,	// (0x0002dcbb) cell_imed_effect_pane

0xc66b,	// (0x000326db) cell_imed_colour_pane_ParamLimits

0xc66b,	// (0x000326db) cell_imed_colour_pane

0xc6ad,	// (0x0003271d) cell_imed_colour_pane_g1_ParamLimits

0xc6ad,	// (0x0003271d) cell_imed_colour_pane_g1

0xc6be,	// (0x0003272e) hgihlgiht_grid_pane_cp016_ParamLimits

0xc6be,	// (0x0003272e) hgihlgiht_grid_pane_cp016

0x7c72,	// (0x0002dce2) cell_imed_effect_pane_g1

0x7c7a,	// (0x0002dcea) grid_highlight_pane_cp017

0xc6cf,	// (0x0003273f) list_imed_single_pane_ParamLimits

0xc6cf,	// (0x0003273f) list_imed_single_pane

0x1db3,	// (0x00027e23) list_highlight_pane_cp07

0xc6e4,	// (0x00032754) list_imed_aspect_pane_comp1_t1

0xbcef,	// (0x00031d5f) bg_tb_trans_pane_cp05

0xc706,	// (0x00032776) popup_imed_adjust2_window_g1

0xc72d,	// (0x0003279d) popup_imed_adjust2_window_t1

0xc745,	// (0x000327b5) slider_imed_adjust_pane

0xc759,	// (0x000327c9) slider_imed_adjust_pane_g1

0xc769,	// (0x000327d9) slider_imed_adjust_pane_g2

0xc779,	// (0x000327e9) slider_imed_adjust_pane_g3

0xc78a,	// (0x000327fa) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00035870) slider_imed_adjust_pane_g

0x7c83,	// (0x0002dcf3) aid_size_cell_clipart2

0x7c8f,	// (0x0002dcff) grid_imed_clipart_pane

0xc79b,	// (0x0003280b) scroll_pane_cp031

0x7c99,	// (0x0002dd09) cell_imed_clipart_pane_ParamLimits

0x7c99,	// (0x0002dd09) cell_imed_clipart_pane

0x7cbb,	// (0x0002dd2b) cell_imed_clipart_pane_g1

0x1db3,	// (0x00027e23) grid_highlight_pane_cp014

0x79f4,	// (0x0002da64) main_clock2_pane_g1_ParamLimits

0x79f4,	// (0x0002da64) main_clock2_pane_g1

0x7b31,	// (0x0002dba1) aid_call2_pane_cp10

0x7b43,	// (0x0002dbb3) aid_call_pane_cp10

0x4dd1,	// (0x0002ae41) popup_clock_analogue_window_cp10_g1

0x4dd1,	// (0x0002ae41) popup_clock_analogue_window_cp10_g2

0x7b55,	// (0x0002dbc5) popup_clock_analogue_window_cp10_g3

0x7b55,	// (0x0002dbc5) popup_clock_analogue_window_cp10_g4

0x4dd1,	// (0x0002ae41) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0003585e) popup_clock_analogue_window_cp10_g

0x7b67,	// (0x0002dbd7) popup_clock_analogue_window_cp10_t1

0x1295,	// (0x00027305) clock_digital_number_pane_cp10_ParamLimits

0x1295,	// (0x00027305) clock_digital_number_pane_cp10

0x12ad,	// (0x0002731d) clock_digital_number_pane_cp11_ParamLimits

0x12ad,	// (0x0002731d) clock_digital_number_pane_cp11

0x12c5,	// (0x00027335) clock_digital_number_pane_cp12_ParamLimits

0x12c5,	// (0x00027335) clock_digital_number_pane_cp12

0x12dd,	// (0x0002734d) clock_digital_number_pane_cp13_ParamLimits

0x12dd,	// (0x0002734d) clock_digital_number_pane_cp13

0x12f5,	// (0x00027365) clock_digital_separator_pane_cp10_ParamLimits

0x12f5,	// (0x00027365) clock_digital_separator_pane_cp10

0x7b98,	// (0x0002dc08) popup_clock_digital_window_cp02_t1_ParamLimits

0x7b98,	// (0x0002dc08) popup_clock_digital_window_cp02_t1

0x274f,	// (0x000287bf) clock_digital_number_pane_cp10_g1

0x274f,	// (0x000287bf) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00035879) clock_digital_number_pane_cp10_g

0x274f,	// (0x000287bf) clock_digital_separator_pane_cp10_g1

0x274f,	// (0x000287bf) clock_digital_separator_pane_g2_cp10

0x4ffd,	// (0x0002b06d) navi_pane_vded_g4

0x5006,	// (0x0002b076) navi_pane_vded_g5

0x500f,	// (0x0002b07f) navi_pane_vded_t1

0x1db3,	// (0x00027e23) main_vded_pane

0x7cc4,	// (0x0002dd34) main_vded_pane_g1

0x7cce,	// (0x0002dd3e) main_vded_pane_g2

0x7cd8,	// (0x0002dd48) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0003587e) main_vded_pane_g

0x7ce2,	// (0x0002dd52) main_vded_pane_t1

0x7cf0,	// (0x0002dd60) main_vded_pane_t2

0x0001,

0xf815,	// (0x00035885) main_vded_pane_t

0x7cfe,	// (0x0002dd6e) vded_slider_pane

0x7d06,	// (0x0002dd76) vded_video_pane

0xc7a3,	// (0x00032813) vded_video_pane_g1

0x7d0e,	// (0x0002dd7e) vded_video_pane_g2

0xc1f5,	// (0x00032265) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0003588a) vded_video_pane_g

0xc7ad,	// (0x0003281d) vded_slider_pane_g1

0xbf04,	// (0x00031f74) vded_slider_pane_g2

0xc7b6,	// (0x00032826) vded_slider_pane_g3

0xc7bf,	// (0x0003282f) vded_slider_pane_g4

0xc7c8,	// (0x00032838) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00035891) vded_slider_pane_g

0x777b,	// (0x0002d7eb) mup3_rocker_pane_ParamLimits

0x777b,	// (0x0002d7eb) mup3_rocker_pane

0x7d17,	// (0x0002dd87) mup3_control_keys_pane_g1

0x7d1f,	// (0x0002dd8f) mup3_control_keys_pane_g2

0x7d27,	// (0x0002dd97) mup3_control_keys_pane_g3

0x7d2f,	// (0x0002dd9f) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0003589c) mup3_control_keys_pane_g

0x2007,	// (0x00028077) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2007,	// (0x00028077) popup_toolbar2_fixed_window_cp01

0x77af,	// (0x0002d81f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x77af,	// (0x0002d81f) popup_toolbar2_fixed_window_cp02

0x62be,	// (0x0002c32e) popup_call2_audio_second_window_t4_ParamLimits

0x62be,	// (0x0002c32e) popup_call2_audio_second_window_t4

0xb5a5,	// (0x00031615) popup_call2_audio_first_window_t6_ParamLimits

0xb5a5,	// (0x00031615) popup_call2_audio_first_window_t6

0xb83b,	// (0x000318ab) popup_call2_audio_out_window_t6_ParamLimits

0xb83b,	// (0x000318ab) popup_call2_audio_out_window_t6

0x1db3,	// (0x00027e23) main_vitu_pane

0x7d3f,	// (0x0002ddaf) aid_size_cell_itu_ParamLimits

0x7d3f,	// (0x0002ddaf) aid_size_cell_itu

0x2025,	// (0x00028095) bg_popup_window_pane_cp08_ParamLimits

0x2025,	// (0x00028095) bg_popup_window_pane_cp08

0x7d55,	// (0x0002ddc5) field_vitu_entry_pane_ParamLimits

0x7d55,	// (0x0002ddc5) field_vitu_entry_pane

0x7d6c,	// (0x0002dddc) grid_vitu_function_pane_ParamLimits

0x7d6c,	// (0x0002dddc) grid_vitu_function_pane

0x7d87,	// (0x0002ddf7) grid_vitu_itu_pane_ParamLimits

0x7d87,	// (0x0002ddf7) grid_vitu_itu_pane

0x7da5,	// (0x0002de15) cell_vitu_itu_pane_ParamLimits

0x7da5,	// (0x0002de15) cell_vitu_itu_pane

0x7dc7,	// (0x0002de37) cell_vitu_function_pane_ParamLimits

0x7dc7,	// (0x0002de37) cell_vitu_function_pane

0x2025,	// (0x00028095) bg_popup_sub_pane_cp08_ParamLimits

0x2025,	// (0x00028095) bg_popup_sub_pane_cp08

0x7de0,	// (0x0002de50) field_vitu_entry_pane_t1_ParamLimits

0x7de0,	// (0x0002de50) field_vitu_entry_pane_t1

0xc7e9,	// (0x00032859) field_vitu_entry_pane_t2_ParamLimits

0xc7e9,	// (0x00032859) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x000358aa) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x000358aa) field_vitu_entry_pane_t

0xc806,	// (0x00032876) bg_button_pane_cp05_ParamLimits

0xc806,	// (0x00032876) bg_button_pane_cp05

0x7dfe,	// (0x0002de6e) cell_vitu_itu_pane_g1

0x7e16,	// (0x0002de86) cell_vitu_itu_pane_t1_ParamLimits

0x7e16,	// (0x0002de86) cell_vitu_itu_pane_t1

0x7e28,	// (0x0002de98) cell_vitu_itu_pane_t2_ParamLimits

0x7e28,	// (0x0002de98) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x000358af) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x000358af) cell_vitu_itu_pane_t

0xc814,	// (0x00032884) bg_button_pane_cp07

0x7e5d,	// (0x0002decd) cell_vitu_function_pane_g1

0xafec,	// (0x0003105c) main_calc_pane_g1

0x1df5,	// (0x00027e65) aid_visual_content_pane

0x1db3,	// (0x00027e23) main_vradio_pane

0x7e66,	// (0x0002ded6) main_vradio_pane_g1_ParamLimits

0x7e66,	// (0x0002ded6) main_vradio_pane_g1

0xc81e,	// (0x0003288e) main_vradio_pane_g2_ParamLimits

0xc81e,	// (0x0003288e) main_vradio_pane_g2

0x0001,

0xf846,	// (0x000358b6) main_vradio_pane_g_ParamLimits

0xf846,	// (0x000358b6) main_vradio_pane_g

0x7e7f,	// (0x0002deef) main_vradio_pane_t1_ParamLimits

0x7e7f,	// (0x0002deef) main_vradio_pane_t1

0x7e94,	// (0x0002df04) main_vradio_pane_t2_ParamLimits

0x7e94,	// (0x0002df04) main_vradio_pane_t2

0xc82b,	// (0x0003289b) main_vradio_pane_t3_ParamLimits

0xc82b,	// (0x0003289b) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x000358bb) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x000358bb) main_vradio_pane_t

0x7ea9,	// (0x0002df19) vradio_rocker_control_pane_ParamLimits

0x7ea9,	// (0x0002df19) vradio_rocker_control_pane

0x7ebb,	// (0x0002df2b) vradio_station_info_pane_ParamLimits

0x7ebb,	// (0x0002df2b) vradio_station_info_pane

0xc83f,	// (0x000328af) vradio_frequency_info_pane_ParamLimits

0xc83f,	// (0x000328af) vradio_frequency_info_pane

0xc1f5,	// (0x00032265) vradio_station_info_pane_g1

0xc84e,	// (0x000328be) vradio_station_info_pane_t1_ParamLimits

0xc84e,	// (0x000328be) vradio_station_info_pane_t1

0xc870,	// (0x000328e0) vradio_station_info_pane_t2_ParamLimits

0xc870,	// (0x000328e0) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x000358c2) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x000358c2) vradio_station_info_pane_t

0xc882,	// (0x000328f2) vradio_tuning_pane

0xc88a,	// (0x000328fa) vradio_rocker_control_pane_g1

0xc892,	// (0x00032902) vradio_rocker_control_pane_g2

0xc89a,	// (0x0003290a) vradio_rocker_control_pane_g3

0xc8a2,	// (0x00032912) vradio_rocker_control_pane_g4

0xc8aa,	// (0x0003291a) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x000358c7) vradio_rocker_control_pane_g

0x7ecd,	// (0x0002df3d) vradio_frequency_info_pane_g1

0xc8b2,	// (0x00032922) vradio_frequency_info_pane_t1_ParamLimits

0xc8b2,	// (0x00032922) vradio_frequency_info_pane_t1

0x7ed7,	// (0x0002df47) vradio_tuning_pane_g1

0x7ee2,	// (0x0002df52) vradio_tuning_pane_t1

0x1e4a,	// (0x00027eba) area_side_right_pane_ParamLimits

0x1e4a,	// (0x00027eba) area_side_right_pane

0xbcb6,	// (0x00031d26) status_small_pane_g1

0xbcbe,	// (0x00031d2e) status_small_pane_g2

0xbcc7,	// (0x00031d37) status_small_pane_g3

0xbcd0,	// (0x00031d40) status_small_pane_g4

0x0003,

0xf617,	// (0x00035687) status_small_pane_g

0xbcd9,	// (0x00031d49) status_small_pane_t1

0x1db3,	// (0x00027e23) main_video3_pane

0xc8c6,	// (0x00032936) cams_zoom_vslider_pane

0xc8ce,	// (0x0003293e) image3_wide_pane_ParamLimits

0xc8ce,	// (0x0003293e) image3_wide_pane

0xc8e8,	// (0x00032958) image3_wide_small_pane

0xc8f4,	// (0x00032964) main_video3_pane_g1_ParamLimits

0xc8f4,	// (0x00032964) main_video3_pane_g1

0xc910,	// (0x00032980) main_video3_pane_g2_ParamLimits

0xc910,	// (0x00032980) main_video3_pane_g2

0x0001,

0xf862,	// (0x000358d2) main_video3_pane_g_ParamLimits

0xf862,	// (0x000358d2) main_video3_pane_g

0xc92c,	// (0x0003299c) main_video3_pane_t1_ParamLimits

0xc92c,	// (0x0003299c) main_video3_pane_t1

0xc957,	// (0x000329c7) main_video3_pane_t2_ParamLimits

0xc957,	// (0x000329c7) main_video3_pane_t2

0xc982,	// (0x000329f2) main_video3_pane_t3_ParamLimits

0xc982,	// (0x000329f2) main_video3_pane_t3

0x0002,

0xf867,	// (0x000358d7) main_video3_pane_t_ParamLimits

0xf867,	// (0x000358d7) main_video3_pane_t

0xc9af,	// (0x00032a1f) cams_zoom_vslider_pane_g1

0xc9b8,	// (0x00032a28) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x000358de) cams_zoom_vslider_pane_g

0xc9c0,	// (0x00032a30) small_slider_vertical_pane

0xc1f5,	// (0x00032265) small_slider_vertical_pane_g1

0xc1f5,	// (0x00032265) small_slider_vertical_pane_g2

0xc9c8,	// (0x00032a38) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x000358e3) small_slider_vertical_pane_g

0x1db3,	// (0x00027e23) main_hwr_training_pane

0xc9d1,	// (0x00032a41) hwr_training_instruct_pane_ParamLimits

0xc9d1,	// (0x00032a41) hwr_training_instruct_pane

0x7ef1,	// (0x0002df61) hwr_training_navi_pane_ParamLimits

0x7ef1,	// (0x0002df61) hwr_training_navi_pane

0x7f10,	// (0x0002df80) hwr_training_write_pane_ParamLimits

0x7f10,	// (0x0002df80) hwr_training_write_pane

0x1db3,	// (0x00027e23) bg_frame_shadow_pane

0xca08,	// (0x00032a78) hwr_training_write_pane_g1

0xca10,	// (0x00032a80) hwr_training_write_pane_g2

0xca18,	// (0x00032a88) hwr_training_write_pane_g3

0xca20,	// (0x00032a90) hwr_training_write_pane_g4

0xca28,	// (0x00032a98) hwr_training_write_pane_g5

0xca30,	// (0x00032aa0) hwr_training_write_pane_g6

0xca38,	// (0x00032aa8) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x000358ea) hwr_training_write_pane_g

0xca40,	// (0x00032ab0) hwr_training_navi_pane_g1_ParamLimits

0xca40,	// (0x00032ab0) hwr_training_navi_pane_g1

0xca52,	// (0x00032ac2) hwr_training_navi_pane_g2_ParamLimits

0xca52,	// (0x00032ac2) hwr_training_navi_pane_g2

0xca64,	// (0x00032ad4) hwr_training_navi_pane_g3_ParamLimits

0xca64,	// (0x00032ad4) hwr_training_navi_pane_g3

0xca74,	// (0x00032ae4) hwr_training_navi_pane_g4_ParamLimits

0xca74,	// (0x00032ae4) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x000358f9) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x000358f9) hwr_training_navi_pane_g

0xca81,	// (0x00032af1) hwr_training_navi_pane_t1

0x7f4b,	// (0x0002dfbb) list_single_hwr_training_instruct_pane_ParamLimits

0x7f4b,	// (0x0002dfbb) list_single_hwr_training_instruct_pane

0xca8f,	// (0x00032aff) list_single_hwr_training_instruct_pane_t1

0xc135,	// (0x000321a5) bg_frame_shadow_pane_g1

0xca9e,	// (0x00032b0e) bg_frame_shadow_pane_g2

0xcaa6,	// (0x00032b16) bg_frame_shadow_pane_g3

0xcaae,	// (0x00032b1e) bg_frame_shadow_pane_g4

0xcab6,	// (0x00032b26) bg_frame_shadow_pane_g5

0xcabe,	// (0x00032b2e) bg_frame_shadow_pane_g6

0xcac6,	// (0x00032b36) bg_frame_shadow_pane_g7

0x2bdc,	// (0x00028c4c) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x00035904) bg_frame_shadow_pane_g

0x1db3,	// (0x00027e23) main_video_tele_dialer_pane

0x131a,	// (0x0002738a) aid_size_cell_video_keypad_ParamLimits

0x131a,	// (0x0002738a) aid_size_cell_video_keypad

0x1334,	// (0x000273a4) grid_video_dialer_keypad_pane_ParamLimits

0x1334,	// (0x000273a4) grid_video_dialer_keypad_pane

0x137e,	// (0x000273ee) video_down_pane_cp_ParamLimits

0x137e,	// (0x000273ee) video_down_pane_cp

0x138e,	// (0x000273fe) cell_video_dialer_keypad_pane_ParamLimits

0x138e,	// (0x000273fe) cell_video_dialer_keypad_pane

0xcaea,	// (0x00032b5a) bg_button_pane_cp08_ParamLimits

0xcaea,	// (0x00032b5a) bg_button_pane_cp08

0x7f60,	// (0x0002dfd0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7f60,	// (0x0002dfd0) cell_video_dialer_keypad_pane_g1

0x7765,	// (0x0002d7d5) mup3_rocker2_pane_ParamLimits

0x7765,	// (0x0002d7d5) mup3_rocker2_pane

0xc1f5,	// (0x00032265) mup3_rocker2_pane_g1

0x673b,	// (0x0002c7ab) main_dialer2_pane

0x1db3,	// (0x00027e23) main_mp4_pane

0xcafe,	// (0x00032b6e) main_mp4_pane_g1_ParamLimits

0xcafe,	// (0x00032b6e) main_mp4_pane_g1

0xcafe,	// (0x00032b6e) main_mp4_pane_g2_ParamLimits

0xcafe,	// (0x00032b6e) main_mp4_pane_g2

0x13b0,	// (0x00027420) main_mp4_pane_g3_ParamLimits

0x13b0,	// (0x00027420) main_mp4_pane_g3

0xcb0c,	// (0x00032b7c) main_mp4_pane_g4_ParamLimits

0xcb0c,	// (0x00032b7c) main_mp4_pane_g4

0xcb34,	// (0x00032ba4) main_mp4_pane_g5_ParamLimits

0xcb34,	// (0x00032ba4) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00035924) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00035924) main_mp4_pane_g

0xcb84,	// (0x00032bf4) main_mp4_pane_t1_ParamLimits

0xcb84,	// (0x00032bf4) main_mp4_pane_t1

0xcbe0,	// (0x00032c50) main_mp4_pane_t2_ParamLimits

0xcbe0,	// (0x00032c50) main_mp4_pane_t2

0xcc32,	// (0x00032ca2) main_mp4_pane_t3_ParamLimits

0xcc32,	// (0x00032ca2) main_mp4_pane_t3

0xcc52,	// (0x00032cc2) main_mp4_pane_t4_ParamLimits

0xcc52,	// (0x00032cc2) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00035931) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00035931) main_mp4_pane_t

0xcc96,	// (0x00032d06) mp4_progress_pane_ParamLimits

0xcc96,	// (0x00032d06) mp4_progress_pane

0xcce0,	// (0x00032d50) mp4_rocker_pane_ParamLimits

0xcce0,	// (0x00032d50) mp4_rocker_pane

0xcd08,	// (0x00032d78) mp4_progress_pane_t1

0xcd21,	// (0x00032d91) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0003593a) mp4_progress_pane_t

0xcd3a,	// (0x00032daa) mup_progress_pane_cp04

0xcd46,	// (0x00032db6) mp4_rocker_pane_g1

0x13ec,	// (0x0002745c) aid_cell_size_keypad2_ParamLimits

0x13ec,	// (0x0002745c) aid_cell_size_keypad2

0x1402,	// (0x00027472) dialer2_ne_pane_ParamLimits

0x1402,	// (0x00027472) dialer2_ne_pane

0x141c,	// (0x0002748c) grid_dialer2_keypad_pane_ParamLimits

0x141c,	// (0x0002748c) grid_dialer2_keypad_pane

0xbfda,	// (0x0003204a) bg_popup_call_pane_cp07_ParamLimits

0xbfda,	// (0x0003204a) bg_popup_call_pane_cp07

0x7f9a,	// (0x0002e00a) dialer2_ne_pane_t1_ParamLimits

0x7f9a,	// (0x0002e00a) dialer2_ne_pane_t1

0x1438,	// (0x000274a8) cell_dialer2_keypad_pane_ParamLimits

0x1438,	// (0x000274a8) cell_dialer2_keypad_pane

0xcd62,	// (0x00032dd2) bg_button_pane_pane_cp04_ParamLimits

0xcd62,	// (0x00032dd2) bg_button_pane_pane_cp04

0x7fd5,	// (0x0002e045) cell_dialer2_keypad_pane_g1_ParamLimits

0x7fd5,	// (0x0002e045) cell_dialer2_keypad_pane_g1

0x351e,	// (0x0002958e) aid_placing_vt_set_content_ParamLimits

0x351e,	// (0x0002958e) aid_placing_vt_set_content

0x3546,	// (0x000295b6) aid_placing_vt_set_title_ParamLimits

0x3546,	// (0x000295b6) aid_placing_vt_set_title

0x1db3,	// (0x00027e23) main_image3_pane

0x14b8,	// (0x00027528) area_side_right_pane_cp01_ParamLimits

0x14b8,	// (0x00027528) area_side_right_pane_cp01

0xcafe,	// (0x00032b6e) main_image3_pane_g1_ParamLimits

0xcafe,	// (0x00032b6e) main_image3_pane_g1

0x14cf,	// (0x0002753f) main_image3_pane_g2_ParamLimits

0x14cf,	// (0x0002753f) main_image3_pane_g2

0x14f7,	// (0x00027567) main_image3_pane_g3_ParamLimits

0x14f7,	// (0x00027567) main_image3_pane_g3

0x1521,	// (0x00027591) main_image3_pane_g4_ParamLimits

0x1521,	// (0x00027591) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00035949) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00035949) main_image3_pane_g

0x154b,	// (0x000275bb) main_image3_pane_t1_ParamLimits

0x154b,	// (0x000275bb) main_image3_pane_t1

0x15a3,	// (0x00027613) main_image3_pane_t2_ParamLimits

0x15a3,	// (0x00027613) main_image3_pane_t2

0x15f5,	// (0x00027665) main_image3_pane_t3_ParamLimits

0x15f5,	// (0x00027665) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x00035952) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x00035952) main_image3_pane_t

0x2025,	// (0x00028095) grid_sctrl_middle_pane_cp01_ParamLimits

0x2025,	// (0x00028095) grid_sctrl_middle_pane_cp01

0x803d,	// (0x0002e0ad) cell_sctrl_middle_pane_cp01_ParamLimits

0x803d,	// (0x0002e0ad) cell_sctrl_middle_pane_cp01

0x805a,	// (0x0002e0ca) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x805a,	// (0x0002e0ca) cell_sctrl_middle_pane_cp01_g1

0x1db3,	// (0x00027e23) main_call4_pane

0x8070,	// (0x0002e0e0) aid_size_button_call4_ParamLimits

0x8070,	// (0x0002e0e0) aid_size_button_call4

0x80a1,	// (0x0002e111) call4_windows_pane_ParamLimits

0x80a1,	// (0x0002e111) call4_windows_pane

0x80c1,	// (0x0002e131) grid_call4_button_pane_ParamLimits

0x80c1,	// (0x0002e131) grid_call4_button_pane

0xcda0,	// (0x00032e10) call4_windows_conf_pane

0xcdb7,	// (0x00032e27) popup_call4_audio_first_window_ParamLimits

0xcdb7,	// (0x00032e27) popup_call4_audio_first_window

0xce03,	// (0x00032e73) popup_call4_audio_second_window_ParamLimits

0xce03,	// (0x00032e73) popup_call4_audio_second_window

0xce17,	// (0x00032e87) popup_call4_audio_wait_window_ParamLimits

0xce17,	// (0x00032e87) popup_call4_audio_wait_window

0x80ee,	// (0x0002e15e) cell_call4_button_pane_ParamLimits

0x80ee,	// (0x0002e15e) cell_call4_button_pane

0x8117,	// (0x0002e187) bg_button_pane_cp09_ParamLimits

0x8117,	// (0x0002e187) bg_button_pane_cp09

0x8123,	// (0x0002e193) cell_call4_button_pane_g1_ParamLimits

0x8123,	// (0x0002e193) cell_call4_button_pane_g1

0x8149,	// (0x0002e1b9) cell_call4_button_pane_t1_ParamLimits

0x8149,	// (0x0002e1b9) cell_call4_button_pane_t1

0xce5f,	// (0x00032ecf) popup_call4_audio_conf_window_ParamLimits

0xce5f,	// (0x00032ecf) popup_call4_audio_conf_window

0x77c5,	// (0x0002d835) mup3_progress_pane_t1_ParamLimits

0x77e4,	// (0x0002d854) mup3_progress_pane_t2_ParamLimits

0xc4e8,	// (0x00032558) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0003582b) mup3_progress_pane_t_ParamLimits

0xc505,	// (0x00032575) mup_progress_pane_cp03_ParamLimits

0x7d37,	// (0x0002dda7) mup3_control_keys_pane_g4_copy1

0xccc4,	// (0x00032d34) mp4_rocker2_pane_ParamLimits

0xccc4,	// (0x00032d34) mp4_rocker2_pane

0xce73,	// (0x00032ee3) mp4_rocker2_pane_g1

0xce7b,	// (0x00032eeb) mp4_rocker2_pane_g2

0xce83,	// (0x00032ef3) mp4_rocker2_pane_g3

0xce8b,	// (0x00032efb) mp4_rocker2_pane_g4

0xce93,	// (0x00032f03) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0003595b) mp4_rocker2_pane_g

0x1db3,	// (0x00027e23) main_camera4_pane

0x1db3,	// (0x00027e23) main_video4_pane

0x134c,	// (0x000273bc) main_video_tele_dialer_pane_t1_ParamLimits

0x134c,	// (0x000273bc) main_video_tele_dialer_pane_t1

0x1365,	// (0x000273d5) main_video_tele_dialer_pane_t2_ParamLimits

0x1365,	// (0x000273d5) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00035915) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00035915) main_video_tele_dialer_pane_t

0x1695,	// (0x00027705) cam4_autofocus_pane_ParamLimits

0x1695,	// (0x00027705) cam4_autofocus_pane

0x16ab,	// (0x0002771b) cam4_image_uncrop_pane_ParamLimits

0x16ab,	// (0x0002771b) cam4_image_uncrop_pane

0x16c5,	// (0x00027735) cam4_indicators_pane_ParamLimits

0x16c5,	// (0x00027735) cam4_indicators_pane

0x16f0,	// (0x00027760) main_camera4_pane_g1_ParamLimits

0x16f0,	// (0x00027760) main_camera4_pane_g1

0x1703,	// (0x00027773) main_camera4_pane_g2_ParamLimits

0x1703,	// (0x00027773) main_camera4_pane_g2

0x1716,	// (0x00027786) main_camera4_pane_g3_ParamLimits

0x1716,	// (0x00027786) main_camera4_pane_g3

0x1729,	// (0x00027799) main_camera4_pane_g4_ParamLimits

0x1729,	// (0x00027799) main_camera4_pane_g4

0x173c,	// (0x000277ac) main_camera4_pane_g5_ParamLimits

0x173c,	// (0x000277ac) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00035966) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00035966) main_camera4_pane_g

0x1760,	// (0x000277d0) main_camera4_pane_t1_ParamLimits

0x1760,	// (0x000277d0) main_camera4_pane_t1

0xcec9,	// (0x00032f39) bg_tb_trans_pane_cp06

0xcedf,	// (0x00032f4f) cam4_indicators_pane_g1

0xcef0,	// (0x00032f60) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00035981) cam4_indicators_pane_g

0xcf0e,	// (0x00032f7e) cam4_indicators_pane_t1

0x17b0,	// (0x00027820) main_video4_pane_g1_ParamLimits

0x17b0,	// (0x00027820) main_video4_pane_g1

0x17c3,	// (0x00027833) main_video4_pane_g2_ParamLimits

0x17c3,	// (0x00027833) main_video4_pane_g2

0x17d7,	// (0x00027847) main_video4_pane_g3_ParamLimits

0x17d7,	// (0x00027847) main_video4_pane_g3

0x17eb,	// (0x0002785b) main_video4_pane_g4_ParamLimits

0x17eb,	// (0x0002785b) main_video4_pane_g4

0x0004,

0xf918,	// (0x00035988) main_video4_pane_g_ParamLimits

0xf918,	// (0x00035988) main_video4_pane_g

0x1813,	// (0x00027883) vid4_indicators_pane_ParamLimits

0x1813,	// (0x00027883) vid4_indicators_pane

0x1843,	// (0x000278b3) video4_image_uncrop_cif_pane_ParamLimits

0x1843,	// (0x000278b3) video4_image_uncrop_cif_pane

0x185d,	// (0x000278cd) video4_image_uncrop_nhd_pane_ParamLimits

0x185d,	// (0x000278cd) video4_image_uncrop_nhd_pane

0x16ab,	// (0x0002771b) video4_image_uncrop_vga_pane_ParamLimits

0x16ab,	// (0x0002771b) video4_image_uncrop_vga_pane

0xcf30,	// (0x00032fa0) bg_tb_trans_pane_cp07

0x1871,	// (0x000278e1) vid4_indicators_pane_g1

0x187e,	// (0x000278ee) vid4_indicators_pane_g2

0x188b,	// (0x000278fb) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x00035993) vid4_indicators_pane_g

0x18b0,	// (0x00027920) vid4_indicators_pane_t1

0x8183,	// (0x0002e1f3) cam4_autofocus_pane_g1

0x818b,	// (0x0002e1fb) cam4_autofocus_pane_g2

0x8193,	// (0x0002e203) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0003599e) cam4_autofocus_pane_g

0x819b,	// (0x0002e20b) cam4_autofocus_pane_g3_copy1

0xcace,	// (0x00032b3e) video_down_pane_cp_t1

0xcadc,	// (0x00032b4c) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0003591a) video_down_pane_cp_t

0x2025,	// (0x00028095) popup_vitu2_window_ParamLimits

0x2025,	// (0x00028095) popup_vitu2_window

0x18c2,	// (0x00027932) aid_size_cell2_itu2_ParamLimits

0x18c2,	// (0x00027932) aid_size_cell2_itu2

0x18e8,	// (0x00027958) aid_size_cell_itu2_ParamLimits

0x18e8,	// (0x00027958) aid_size_cell_itu2

0x1944,	// (0x000279b4) bg_popup_window_pane_cp09_ParamLimits

0x1944,	// (0x000279b4) bg_popup_window_pane_cp09

0x1952,	// (0x000279c2) field_vitu2_entry_pane_ParamLimits

0x1952,	// (0x000279c2) field_vitu2_entry_pane

0x1978,	// (0x000279e8) grid_vitu2_function_pane_ParamLimits

0x1978,	// (0x000279e8) grid_vitu2_function_pane

0x19c9,	// (0x00027a39) grid_vitu2_itu_pane_ParamLimits

0x19c9,	// (0x00027a39) grid_vitu2_itu_pane

0x1a5c,	// (0x00027acc) cell_vitu2_itu_pane_ParamLimits

0x1a5c,	// (0x00027acc) cell_vitu2_itu_pane

0x1a80,	// (0x00027af0) cell_vitu2_function_pane_ParamLimits

0x1a80,	// (0x00027af0) cell_vitu2_function_pane

0xcf48,	// (0x00032fb8) bg_popup_call_pane_cp08_ParamLimits

0xcf48,	// (0x00032fb8) bg_popup_call_pane_cp08

0xcf61,	// (0x00032fd1) field_vitu2_entry_pane_g1

0xcf6d,	// (0x00032fdd) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x000359a5) field_vitu2_entry_pane_g

0xcf87,	// (0x00032ff7) field_vitu2_entry_pane_t1_ParamLimits

0xcf87,	// (0x00032ff7) field_vitu2_entry_pane_t1

0xcfb6,	// (0x00033026) field_vitu2_entry_pane_t2_ParamLimits

0xcfb6,	// (0x00033026) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x000359ac) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x000359ac) field_vitu2_entry_pane_t

0x1abf,	// (0x00027b2f) bg_button_pane_cp010_ParamLimits

0x1abf,	// (0x00027b2f) bg_button_pane_cp010

0x1acd,	// (0x00027b3d) cell_vitu2_itu_pane_g1

0x1aeb,	// (0x00027b5b) cell_vitu2_itu_pane_t1_ParamLimits

0x1aeb,	// (0x00027b5b) cell_vitu2_itu_pane_t1

0x1b51,	// (0x00027bc1) cell_vitu2_itu_pane_t2_ParamLimits

0x1b51,	// (0x00027bc1) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x000359b6) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x000359b6) cell_vitu2_itu_pane_t

0xcfdb,	// (0x0003304b) bg_button_pane_cp011

0x1c2d,	// (0x00027c9d) cell_vitu2_function_pane_g1

0x1db3,	// (0x00027e23) main_myfav_hc_pane

0x1645,	// (0x000276b5) popup_image3_note_pane_ParamLimits

0x1645,	// (0x000276b5) popup_image3_note_pane

0x1661,	// (0x000276d1) popup_image3_tool_bar_pane_ParamLimits

0x1661,	// (0x000276d1) popup_image3_tool_bar_pane

0x1bd5,	// (0x00027c45) cell_vitu2_itu_pane_t3_ParamLimits

0x1bd5,	// (0x00027c45) cell_vitu2_itu_pane_t3

0x1db3,	// (0x00027e23) bg_popup_trans_pane

0xcfe9,	// (0x00033059) grid_image3_tool_bar_pane

0xcff3,	// (0x00033063) bg_popup_trans_pane_g1

0x3b15,	// (0x00029b85) bg_popup_trans_pane_g2

0xcffb,	// (0x0003306b) bg_popup_trans_pane_g3

0xd003,	// (0x00033073) bg_popup_trans_pane_g4

0xd00b,	// (0x0003307b) bg_popup_trans_pane_g5

0xd013,	// (0x00033083) bg_popup_trans_pane_g6

0xd01b,	// (0x0003308b) bg_popup_trans_pane_g7

0xd023,	// (0x00033093) bg_popup_trans_pane_g8

0x3af5,	// (0x00029b65) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x000359bd) bg_popup_trans_pane_g

0xd02b,	// (0x0003309b) cell_image3_tool_bar_pane_ParamLimits

0xd02b,	// (0x0003309b) cell_image3_tool_bar_pane

0xc1f5,	// (0x00032265) cell_image3_tool_bar_pane_g1

0x1db3,	// (0x00027e23) bg_popup_trans_pane_cp1

0xd03f,	// (0x000330af) popup_image3_note_pane_t1

0xd04d,	// (0x000330bd) popup_image3_note_pane_t2

0xd05b,	// (0x000330cb) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x000359d0) popup_image3_note_pane_t

0xd069,	// (0x000330d9) popup_image3_note_pane_t3_copy1

0x81a3,	// (0x0002e213) bg_myfav_hc_instruction_pane_ParamLimits

0x81a3,	// (0x0002e213) bg_myfav_hc_instruction_pane

0x81b7,	// (0x0002e227) cell_myfav_contact_pane_ParamLimits

0x81b7,	// (0x0002e227) cell_myfav_contact_pane

0x81d5,	// (0x0002e245) cell_myfav_contact_pane_cp1_ParamLimits

0x81d5,	// (0x0002e245) cell_myfav_contact_pane_cp1

0x81ed,	// (0x0002e25d) cell_myfav_contact_pane_cp2_ParamLimits

0x81ed,	// (0x0002e25d) cell_myfav_contact_pane_cp2

0x8205,	// (0x0002e275) cell_myfav_contact_pane_cp3_ParamLimits

0x8205,	// (0x0002e275) cell_myfav_contact_pane_cp3

0x821c,	// (0x0002e28c) cell_myfav_contact_pane_cp4_ParamLimits

0x821c,	// (0x0002e28c) cell_myfav_contact_pane_cp4

0x8234,	// (0x0002e2a4) cell_myfav_contact_pane_cp5_ParamLimits

0x8234,	// (0x0002e2a4) cell_myfav_contact_pane_cp5

0x8248,	// (0x0002e2b8) cell_myfav_contact_pane_cp6_ParamLimits

0x8248,	// (0x0002e2b8) cell_myfav_contact_pane_cp6

0x825e,	// (0x0002e2ce) cell_myfav_contact_pane_cp7_ParamLimits

0x825e,	// (0x0002e2ce) cell_myfav_contact_pane_cp7

0xd077,	// (0x000330e7) listscroll_gen_pane_cp05

0x8278,	// (0x0002e2e8) main_myfav_hc_pane_g1_ParamLimits

0x8278,	// (0x0002e2e8) main_myfav_hc_pane_g1

0x8292,	// (0x0002e302) main_myfav_hc_pane_g2_ParamLimits

0x8292,	// (0x0002e302) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x000359d7) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x000359d7) main_myfav_hc_pane_g

0x82c4,	// (0x0002e334) main_myfav_hc_pane_t1_ParamLimits

0x82c4,	// (0x0002e334) main_myfav_hc_pane_t1

0xd080,	// (0x000330f0) main_myfav_hc_pane_t2_ParamLimits

0xd080,	// (0x000330f0) main_myfav_hc_pane_t2

0xd092,	// (0x00033102) main_myfav_hc_pane_t3_ParamLimits

0xd092,	// (0x00033102) main_myfav_hc_pane_t3

0x82db,	// (0x0002e34b) main_myfav_hc_pane_t4_ParamLimits

0x82db,	// (0x0002e34b) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x000359de) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x000359de) main_myfav_hc_pane_t

0xc1f5,	// (0x00032265) bg_myfav_hc_instruction_pane_g1

0xd0a4,	// (0x00033114) cell_myfav_contact_pane_g1_ParamLimits

0xd0a4,	// (0x00033114) cell_myfav_contact_pane_g1

0xd0a4,	// (0x00033114) cell_myfav_contact_pane_g2_ParamLimits

0xd0a4,	// (0x00033114) cell_myfav_contact_pane_g2

0xd0b0,	// (0x00033120) cell_myfav_contact_pane_g3_ParamLimits

0xd0b0,	// (0x00033120) cell_myfav_contact_pane_g3

0xc4d2,	// (0x00032542) cell_myfav_contact_pane_g4_ParamLimits

0xc4d2,	// (0x00032542) cell_myfav_contact_pane_g4

0xd0bd,	// (0x0003312d) cell_myfav_contact_pane_g5_ParamLimits

0xd0bd,	// (0x0003312d) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x000359e9) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x000359e9) cell_myfav_contact_pane_g

0x82ac,	// (0x0002e31c) main_myfav_hc_pane_g3_ParamLimits

0x82ac,	// (0x0002e31c) main_myfav_hc_pane_g3

0x1f5f,	// (0x00027fcf) popup_adpt_find_window

0x8303,	// (0x0002e373) afind_page_pane_ParamLimits

0x8303,	// (0x0002e373) afind_page_pane

0x8318,	// (0x0002e388) aid_size_cell_afind_ParamLimits

0x8318,	// (0x0002e388) aid_size_cell_afind

0x8336,	// (0x0002e3a6) bg_popup_sub_pane_cp09_ParamLimits

0x8336,	// (0x0002e3a6) bg_popup_sub_pane_cp09

0x8343,	// (0x0002e3b3) find_pane_cp01_ParamLimits

0x8343,	// (0x0002e3b3) find_pane_cp01

0xd0c9,	// (0x00033139) grid_afind_control_pane_ParamLimits

0xd0c9,	// (0x00033139) grid_afind_control_pane

0x8350,	// (0x0002e3c0) grid_afind_pane_ParamLimits

0x8350,	// (0x0002e3c0) grid_afind_pane

0x8372,	// (0x0002e3e2) cell_afind_pane_ParamLimits

0x8372,	// (0x0002e3e2) cell_afind_pane

0xc1f5,	// (0x00032265) afind_page_pane_g1

0x83d3,	// (0x0002e443) afind_page_pane_g2

0x83dc,	// (0x0002e44c) afind_page_pane_g3

0x0002,

0xf984,	// (0x000359f4) afind_page_pane_g

0x83e5,	// (0x0002e455) afind_page_pane_t1

0xd0dd,	// (0x0003314d) cell_afind_grid_control_pane_ParamLimits

0xd0dd,	// (0x0003314d) cell_afind_grid_control_pane

0xcd62,	// (0x00032dd2) bg_button_pane_cp69_ParamLimits

0xcd62,	// (0x00032dd2) bg_button_pane_cp69

0x8405,	// (0x0002e475) cell_afind_pane_g1_ParamLimits

0x8405,	// (0x0002e475) cell_afind_pane_g1

0x8412,	// (0x0002e482) cell_afind_pane_t1_ParamLimits

0x8412,	// (0x0002e482) cell_afind_pane_t1

0x33bf,	// (0x0002942f) bg_button_pane_cp72

0xd0ec,	// (0x0003315c) cell_afind_grid_control_pane_g1

0x5d7d,	// (0x0002bded) aid_image_placing_area_ParamLimits

0x5d7d,	// (0x0002bded) aid_image_placing_area

0xc7d1,	// (0x00032841) field_vitu_entry_pane_g1_ParamLimits

0xc7d1,	// (0x00032841) field_vitu_entry_pane_g1

0xc7dd,	// (0x0003284d) field_vitu_entry_pane_g2_ParamLimits

0xc7dd,	// (0x0003284d) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x000358a5) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x000358a5) field_vitu_entry_pane_g

0x7dfe,	// (0x0002de6e) cell_vitu_itu_pane_g1_ParamLimits

0x7e40,	// (0x0002deb0) cell_vitu_itu_pane_t3_ParamLimits

0x7e40,	// (0x0002deb0) cell_vitu_itu_pane_t3

0xcd08,	// (0x00032d78) mp4_progress_pane_t1_ParamLimits

0xcd21,	// (0x00032d91) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0003593a) mp4_progress_pane_t_ParamLimits

0xcd3a,	// (0x00032daa) mup_progress_pane_cp04_ParamLimits

0x82ef,	// (0x0002e35f) main_myfav_hc_pane_t5_ParamLimits

0x82ef,	// (0x0002e35f) main_myfav_hc_pane_t5

0x1e09,	// (0x00027e79) aid_zoom_text_primary

0x1f5f,	// (0x00027fcf) popup_adpt_find_window_ParamLimits

0x2025,	// (0x00028095) main_cam_set_pane

0x16dc,	// (0x0002774c) cam4_zoom_pane_ParamLimits

0x16dc,	// (0x0002774c) cam4_zoom_pane

0x8424,	// (0x0002e494) main_cam_set_pane_g1_ParamLimits

0x8424,	// (0x0002e494) main_cam_set_pane_g1

0x8432,	// (0x0002e4a2) main_cam_set_pane_g2_ParamLimits

0x8432,	// (0x0002e4a2) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x000359fb) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x000359fb) main_cam_set_pane_g

0x8453,	// (0x0002e4c3) main_cam_set_pane_t1_ParamLimits

0x8453,	// (0x0002e4c3) main_cam_set_pane_t1

0x846e,	// (0x0002e4de) main_cset_listscroll_pane_ParamLimits

0x846e,	// (0x0002e4de) main_cset_listscroll_pane

0x848e,	// (0x0002e4fe) main_cset_slider_pane_ParamLimits

0x848e,	// (0x0002e4fe) main_cset_slider_pane

0xd0fd,	// (0x0003316d) main_cset_list_pane_ParamLimits

0xd0fd,	// (0x0003316d) main_cset_list_pane

0xd10d,	// (0x0003317d) scroll_pane_cp028

0x84b4,	// (0x0002e524) aid_area_touch_slider

0x84d0,	// (0x0002e540) cset_slider_pane

0x84fa,	// (0x0002e56a) main_cset_slider_pane_g1

0x850f,	// (0x0002e57f) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x00035a00) main_cset_slider_pane_g

0xd146,	// (0x000331b6) main_cset_slider_pane_t1

0x85cb,	// (0x0002e63b) main_cset_slider_pane_t2

0x85e5,	// (0x0002e655) main_cset_slider_pane_t3

0x85ff,	// (0x0002e66f) main_cset_slider_pane_t4

0x8619,	// (0x0002e689) main_cset_slider_pane_t5

0x8633,	// (0x0002e6a3) main_cset_slider_pane_t6

0x8648,	// (0x0002e6b8) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00035a25) main_cset_slider_pane_t

0x874c,	// (0x0002e7bc) cset_list_set_pane_ParamLimits

0x874c,	// (0x0002e7bc) cset_list_set_pane

0x875e,	// (0x0002e7ce) aid_position_infowindow_above

0x8766,	// (0x0002e7d6) aid_position_infowindow_below

0xd1e6,	// (0x00033256) cset_list_set_pane_g1_ParamLimits

0xd1e6,	// (0x00033256) cset_list_set_pane_g1

0xd1f2,	// (0x00033262) cset_list_set_pane_g3_ParamLimits

0xd1f2,	// (0x00033262) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x00035a44) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x00035a44) cset_list_set_pane_g

0xd201,	// (0x00033271) cset_list_set_pane_t1_ParamLimits

0xd201,	// (0x00033271) cset_list_set_pane_t1

0x2025,	// (0x00028095) list_highlight_pane_cp021_ParamLimits

0x2025,	// (0x00028095) list_highlight_pane_cp021

0x5569,	// (0x0002b5d9) cset_slider_pane_g1

0x557b,	// (0x0002b5eb) cset_slider_pane_g2

0x5572,	// (0x0002b5e2) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00035a49) cset_slider_pane_g

0xd216,	// (0x00033286) aid_area_touch_cam4_zoom

0xd21e,	// (0x0003328e) cam4_zoom_cont_pane

0xd226,	// (0x00033296) cam4_zoom_pane_g1

0xd22e,	// (0x0003329e) cam4_zoom_pane_g2

0x1c41,	// (0x00027cb1) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00035a50) cam4_zoom_pane_g

0xd236,	// (0x000332a6) cam4_zoom_cont_pane_g1

0xd23f,	// (0x000332af) cam4_zoom_cont_pane_g2

0xd248,	// (0x000332b8) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00035a57) cam4_zoom_cont_pane_g

0x808e,	// (0x0002e0fe) call4_image_pane_ParamLimits

0x808e,	// (0x0002e0fe) call4_image_pane

0xcda0,	// (0x00032e10) call4_windows_conf_pane_ParamLimits

0xcde1,	// (0x00032e51) popup_call4_audio_in_window_ParamLimits

0xcde1,	// (0x00032e51) popup_call4_audio_in_window

0x1db3,	// (0x00027e23) bg_popup_call2_act_pane_cp02

0xce57,	// (0x00032ec7) call4_list_conf_pane

0xc1f5,	// (0x00032265) call4_image_pane_g1

0xc1f5,	// (0x00032265) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0003576b) call4_image_pane_g

0xd251,	// (0x000332c1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd251,	// (0x000332c1) list_single_graphic_popup_conf4_pane

0x1db3,	// (0x00027e23) list_highlight_pane_cp022

0xd264,	// (0x000332d4) list_single_graphic_popup_conf4_pane_g1

0x4ae7,	// (0x0002ab57) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00035a5e) list_single_graphic_popup_conf4_pane_g

0xd26c,	// (0x000332dc) list_single_graphic_popup_conf4_pane_t1

0x367c,	// (0x000296ec) popup_vtel_slider_window_ParamLimits

0x367c,	// (0x000296ec) popup_vtel_slider_window

0xcd50,	// (0x00032dc0) dialer2_ne_pane_t2_ParamLimits

0xcd50,	// (0x00032dc0) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0003593f) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0003593f) dialer2_ne_pane_t

0xbfda,	// (0x0003204a) bg_popup_sub_pane_cp010_ParamLimits

0xbfda,	// (0x0003204a) bg_popup_sub_pane_cp010

0x876e,	// (0x0002e7de) popup_vtel_slider_window_g1_ParamLimits

0x876e,	// (0x0002e7de) popup_vtel_slider_window_g1

0x8781,	// (0x0002e7f1) popup_vtel_slider_window_g2_ParamLimits

0x8781,	// (0x0002e7f1) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00035a63) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00035a63) popup_vtel_slider_window_g

0x87d7,	// (0x0002e847) vtel_slider_pane_ParamLimits

0x87d7,	// (0x0002e847) vtel_slider_pane

0x87f9,	// (0x0002e869) vtel_slider_pane_g1_ParamLimits

0x87f9,	// (0x0002e869) vtel_slider_pane_g1

0x880d,	// (0x0002e87d) vtel_slider_pane_g2_ParamLimits

0x880d,	// (0x0002e87d) vtel_slider_pane_g2

0x8825,	// (0x0002e895) vtel_slider_pane_g3_ParamLimits

0x8825,	// (0x0002e895) vtel_slider_pane_g3

0x87f9,	// (0x0002e869) vtel_slider_pane_g4_ParamLimits

0x87f9,	// (0x0002e869) vtel_slider_pane_g4

0x883b,	// (0x0002e8ab) vtel_slider_pane_g5_ParamLimits

0x883b,	// (0x0002e8ab) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00035a6c) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00035a6c) vtel_slider_pane_g

0x1db3,	// (0x00027e23) main_gallery2_pane

0x1914,	// (0x00027984) aid_size_row_itut2_dropdow_list_ParamLimits

0x1914,	// (0x00027984) aid_size_row_itut2_dropdow_list

0x19a0,	// (0x00027a10) grid_vitu2_function_top_pane_ParamLimits

0x19a0,	// (0x00027a10) grid_vitu2_function_top_pane

0x1a05,	// (0x00027a75) popup_vitu2_dropdown_list_window_ParamLimits

0x1a05,	// (0x00027a75) popup_vitu2_dropdown_list_window

0x1a2e,	// (0x00027a9e) popup_vitu2_match_list_window

0x1c49,	// (0x00027cb9) cell_vitu2_function_top_pane_ParamLimits

0x1c49,	// (0x00027cb9) cell_vitu2_function_top_pane

0x1c67,	// (0x00027cd7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1c67,	// (0x00027cd7) cell_vitu2_function_top_pane_cp01

0x1c85,	// (0x00027cf5) cell_vitu2_function_top_wide_pane_ParamLimits

0x1c85,	// (0x00027cf5) cell_vitu2_function_top_wide_pane

0xcfdb,	// (0x0003304b) bg_button_pane_cp012

0x1ca3,	// (0x00027d13) cell_vitu2_function_top_pane_g1

0xd290,	// (0x00033300) bg_button_pane_cp013_ParamLimits

0xd290,	// (0x00033300) bg_button_pane_cp013

0x8851,	// (0x0002e8c1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8851,	// (0x0002e8c1) cell_vitu2_function_top_wide_pane_g1

0xcfdb,	// (0x0003304b) bg_popup_sub_pane_cp20

0x1cb7,	// (0x00027d27) list_vitu2_match_list_pane

0xcff3,	// (0x00033063) bg_popup_sub_pane_cp20_g1

0xcffb,	// (0x0003306b) bg_popup_sub_pane_cp20_g2

0x3b15,	// (0x00029b85) bg_popup_sub_pane_cp20_g3

0xd003,	// (0x00033073) bg_popup_sub_pane_cp20_g4

0x3af5,	// (0x00029b65) bg_popup_sub_pane_cp20_g5

0xd2ac,	// (0x0003331c) bg_popup_sub_pane_cp20_g6

0xd013,	// (0x00033083) bg_popup_sub_pane_cp20_g7

0xd01b,	// (0x0003308b) bg_popup_sub_pane_cp20_g8

0xd023,	// (0x00033093) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00035a77) bg_popup_sub_pane_cp20_g

0xd2b4,	// (0x00033324) list_vitu2_match_list_item_pane_ParamLimits

0xd2b4,	// (0x00033324) list_vitu2_match_list_item_pane

0xd2c6,	// (0x00033336) list_vitu2_match_list_item_pane_t1

0xaff4,	// (0x00031064) bg_popup_sub_pane_cp21

0xd2ec,	// (0x0003335c) grid_vitu2_dropdown_list_pane

0x1cd5,	// (0x00027d45) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1cd5,	// (0x00027d45) cell_vitu2_dropdown_list_char_pane

0x1cf6,	// (0x00027d66) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1cf6,	// (0x00027d66) cell_vitu2_dropdown_list_ctrl_pane

0xd2f4,	// (0x00033364) cell_vitu2_dropdown_list_char_pane_g1

0xd2fd,	// (0x0003336d) cell_vitu2_dropdown_list_char_pane_g2

0xd306,	// (0x00033376) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00035a94) cell_vitu2_dropdown_list_char_pane_g

0x1d22,	// (0x00027d92) cell_vitu2_dropdown_list_char_pane_t1

0x889e,	// (0x0002e90e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x889e,	// (0x0002e90e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x88ab,	// (0x0002e91b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x88ab,	// (0x0002e91b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x88b8,	// (0x0002e928) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x88b8,	// (0x0002e928) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1d30,	// (0x00027da0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1d30,	// (0x00027da0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcec9,	// (0x00032f39) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcec9,	// (0x00032f39) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00035a9b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00035a9b) cell_vitu2_dropdown_list_ctrl_pane_g

0x88c5,	// (0x0002e935) aid_size_cell_gallery2_ParamLimits

0x88c5,	// (0x0002e935) aid_size_cell_gallery2

0x88db,	// (0x0002e94b) grid_gallery2_pane_ParamLimits

0x88db,	// (0x0002e94b) grid_gallery2_pane

0x88ef,	// (0x0002e95f) scroll_pane_cp029_ParamLimits

0x88ef,	// (0x0002e95f) scroll_pane_cp029

0x88fb,	// (0x0002e96b) cell_gallery2_pane_ParamLimits

0x88fb,	// (0x0002e96b) cell_gallery2_pane

0xd30f,	// (0x0003337f) cell_gallery2_pane_g2

0x8931,	// (0x0002e9a1) cell_gallery2_pane_g3

0xd319,	// (0x00033389) cell_gallery2_pane_g4

0xd321,	// (0x00033391) cell_gallery2_pane_g5

0x502d,	// (0x0002b09d) grid_highlight_pane_cp10

0x1a2e,	// (0x00027a9e) popup_vitu2_match_list_window_ParamLimits

0x1a45,	// (0x00027ab5) popup_vitu2_query_window_ParamLimits

0x1a45,	// (0x00027ab5) popup_vitu2_query_window

0xaff4,	// (0x00031064) bg_vitu2_candi_button_pane

0xd2f4,	// (0x00033364) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2fd,	// (0x0003336d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd306,	// (0x00033376) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8939,	// (0x0002e9a9) bg_button_pane_cp015

0x894b,	// (0x0002e9bb) bg_button_pane_cp016

0x895e,	// (0x0002e9ce) bg_button_pane_cp017

0xbcef,	// (0x00031d5f) bg_popup_sub_pane_cp22

0xd329,	// (0x00033399) popup_vitu2_query_window_g1

0x89a3,	// (0x0002ea13) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00035aa6) popup_vitu2_query_window_g

0x89c2,	// (0x0002ea32) popup_vitu2_query_window_t1_ParamLimits

0x89c2,	// (0x0002ea32) popup_vitu2_query_window_t1

0x89f7,	// (0x0002ea67) popup_vitu2_query_window_t2_ParamLimits

0x89f7,	// (0x0002ea67) popup_vitu2_query_window_t2

0x8a09,	// (0x0002ea79) popup_vitu2_query_window_t3_ParamLimits

0x8a09,	// (0x0002ea79) popup_vitu2_query_window_t3

0x8a31,	// (0x0002eaa1) popup_vitu2_query_window_t4_ParamLimits

0x8a31,	// (0x0002eaa1) popup_vitu2_query_window_t4

0x8a52,	// (0x0002eac2) popup_vitu2_query_window_t5_ParamLimits

0x8a52,	// (0x0002eac2) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00035aad) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00035aad) popup_vitu2_query_window_t

0xd0f5,	// (0x00033165) main_cset_text_pane

0x84b4,	// (0x0002e524) aid_area_touch_slider_ParamLimits

0x84d0,	// (0x0002e540) cset_slider_pane_ParamLimits

0x84fa,	// (0x0002e56a) main_cset_slider_pane_g1_ParamLimits

0x850f,	// (0x0002e57f) main_cset_slider_pane_g2_ParamLimits

0xd116,	// (0x00033186) main_cset_slider_pane_g3_ParamLimits

0xd116,	// (0x00033186) main_cset_slider_pane_g3

0x8524,	// (0x0002e594) main_cset_slider_pane_g4_ParamLimits

0x8524,	// (0x0002e594) main_cset_slider_pane_g4

0x8533,	// (0x0002e5a3) main_cset_slider_pane_g5_ParamLimits

0x8533,	// (0x0002e5a3) main_cset_slider_pane_g5

0x853f,	// (0x0002e5af) main_cset_slider_pane_g6_ParamLimits

0x853f,	// (0x0002e5af) main_cset_slider_pane_g6

0xf990,	// (0x00035a00) main_cset_slider_pane_g_ParamLimits

0xd146,	// (0x000331b6) main_cset_slider_pane_t1_ParamLimits

0x85cb,	// (0x0002e63b) main_cset_slider_pane_t2_ParamLimits

0x85e5,	// (0x0002e655) main_cset_slider_pane_t3_ParamLimits

0x85ff,	// (0x0002e66f) main_cset_slider_pane_t4_ParamLimits

0x8619,	// (0x0002e689) main_cset_slider_pane_t5_ParamLimits

0x8633,	// (0x0002e6a3) main_cset_slider_pane_t6_ParamLimits

0x8648,	// (0x0002e6b8) main_cset_slider_pane_t7_ParamLimits

0x8672,	// (0x0002e6e2) main_cset_slider_pane_t8_ParamLimits

0x8672,	// (0x0002e6e2) main_cset_slider_pane_t8

0x869a,	// (0x0002e70a) main_cset_slider_pane_t9_ParamLimits

0x869a,	// (0x0002e70a) main_cset_slider_pane_t9

0x86c2,	// (0x0002e732) main_cset_slider_pane_t10_ParamLimits

0x86c2,	// (0x0002e732) main_cset_slider_pane_t10

0x86ea,	// (0x0002e75a) main_cset_slider_pane_t11_ParamLimits

0x86ea,	// (0x0002e75a) main_cset_slider_pane_t11

0x8712,	// (0x0002e782) main_cset_slider_pane_t12_ParamLimits

0x8712,	// (0x0002e782) main_cset_slider_pane_t12

0x872f,	// (0x0002e79f) main_cset_slider_pane_t13_ParamLimits

0x872f,	// (0x0002e79f) main_cset_slider_pane_t13

0xf9b5,	// (0x00035a25) main_cset_slider_pane_t_ParamLimits

0x1db3,	// (0x00027e23) bg_popup_sub_pane_cp011

0xd335,	// (0x000333a5) main_cset_text_pane_g1

0xd33d,	// (0x000333ad) main_cset_text_pane_t1

0xd34b,	// (0x000333bb) main_cset_text_pane_t2

0xd359,	// (0x000333c9) main_cset_text_pane_t3

0xd367,	// (0x000333d7) main_cset_text_pane_t4

0xd375,	// (0x000333e5) main_cset_text_pane_t5

0xd383,	// (0x000333f3) main_cset_text_pane_t6

0xd391,	// (0x00033401) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00035abc) main_cset_text_pane_t

0x1db3,	// (0x00027e23) main_cam4_burst_pane

0x1db3,	// (0x00027e23) main_cam5_pane

0x83f3,	// (0x0002e463) bg_button_pane_cp019

0x83fc,	// (0x0002e46c) bg_button_pane_cp020

0xd122,	// (0x00033192) main_cset_slider_pane_g7_ParamLimits

0xd122,	// (0x00033192) main_cset_slider_pane_g7

0xd12e,	// (0x0003319e) main_cset_slider_pane_g8_ParamLimits

0xd12e,	// (0x0003319e) main_cset_slider_pane_g8

0x8553,	// (0x0002e5c3) main_cset_slider_pane_g9_ParamLimits

0x8553,	// (0x0002e5c3) main_cset_slider_pane_g9

0x855f,	// (0x0002e5cf) main_cset_slider_pane_g10_ParamLimits

0x855f,	// (0x0002e5cf) main_cset_slider_pane_g10

0x856b,	// (0x0002e5db) main_cset_slider_pane_g11_ParamLimits

0x856b,	// (0x0002e5db) main_cset_slider_pane_g11

0x8577,	// (0x0002e5e7) main_cset_slider_pane_g12_ParamLimits

0x8577,	// (0x0002e5e7) main_cset_slider_pane_g12

0x8583,	// (0x0002e5f3) main_cset_slider_pane_g13_ParamLimits

0x8583,	// (0x0002e5f3) main_cset_slider_pane_g13

0x858f,	// (0x0002e5ff) main_cset_slider_pane_g14_ParamLimits

0x858f,	// (0x0002e5ff) main_cset_slider_pane_g14

0x859b,	// (0x0002e60b) main_cset_slider_pane_g15_ParamLimits

0x859b,	// (0x0002e60b) main_cset_slider_pane_g15

0xd174,	// (0x000331e4) main_cset_slider_pane_t14_ParamLimits

0xd174,	// (0x000331e4) main_cset_slider_pane_t14

0xd1ad,	// (0x0003321d) main_cset_slider_pane_t15_ParamLimits

0xd1ad,	// (0x0003321d) main_cset_slider_pane_t15

0x8ac9,	// (0x0002eb39) aid_cam4_burst_size_cell_ParamLimits

0x8ac9,	// (0x0002eb39) aid_cam4_burst_size_cell

0x8ae9,	// (0x0002eb59) grid_cam4_burst_pane_ParamLimits

0x8ae9,	// (0x0002eb59) grid_cam4_burst_pane

0x8b21,	// (0x0002eb91) linegrid_cam4_burst_pane_ParamLimits

0x8b21,	// (0x0002eb91) linegrid_cam4_burst_pane

0xd39f,	// (0x0003340f) scroll_pane_cp30_ParamLimits

0xd39f,	// (0x0003340f) scroll_pane_cp30

0x8b45,	// (0x0002ebb5) cell_cam4_burst_pane_ParamLimits

0x8b45,	// (0x0002ebb5) cell_cam4_burst_pane

0xd3ab,	// (0x0003341b) linegrid_cam4_burst_pane_g1_ParamLimits

0xd3ab,	// (0x0003341b) linegrid_cam4_burst_pane_g1

0x8b92,	// (0x0002ec02) linegrid_cam4_burst_pane_g2_ParamLimits

0x8b92,	// (0x0002ec02) linegrid_cam4_burst_pane_g2

0xd3b8,	// (0x00033428) linegrid_cam4_burst_pane_g3_ParamLimits

0xd3b8,	// (0x00033428) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00035acb) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00035acb) linegrid_cam4_burst_pane_g

0x8ba3,	// (0x0002ec13) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8ba3,	// (0x0002ec13) linegrid_cam4_burst_pane_g3_copy1

0xd3c5,	// (0x00033435) linegrid_cam4_burst_pane_g4_ParamLimits

0xd3c5,	// (0x00033435) linegrid_cam4_burst_pane_g4

0x8bbd,	// (0x0002ec2d) linegrid_cam4_burst_pane_g5_ParamLimits

0x8bbd,	// (0x0002ec2d) linegrid_cam4_burst_pane_g5

0x8bce,	// (0x0002ec3e) linegrid_cam4_burst_pane_g6_ParamLimits

0x8bce,	// (0x0002ec3e) linegrid_cam4_burst_pane_g6

0xd3d2,	// (0x00033442) linegrid_cam4_burst_pane_g7_ParamLimits

0xd3d2,	// (0x00033442) linegrid_cam4_burst_pane_g7

0x8be5,	// (0x0002ec55) cell_cam4_burst_pane_g1

0xd3eb,	// (0x0003345b) main_cam5_pane_t1_ParamLimits

0xd3eb,	// (0x0003345b) main_cam5_pane_t1

0xd3fd,	// (0x0003346d) main_cam5_pane_t2_ParamLimits

0xd3fd,	// (0x0003346d) main_cam5_pane_t2

0xd40f,	// (0x0003347f) main_cam5_pane_t3_ParamLimits

0xd40f,	// (0x0003347f) main_cam5_pane_t3

0xd421,	// (0x00033491) main_cam5_pane_t4_ParamLimits

0xd421,	// (0x00033491) main_cam5_pane_t4

0xd439,	// (0x000334a9) main_cam5_pane_t5_ParamLimits

0xd439,	// (0x000334a9) main_cam5_pane_t5

0xd44d,	// (0x000334bd) main_cam5_pane_t6_ParamLimits

0xd44d,	// (0x000334bd) main_cam5_pane_t6

0xd461,	// (0x000334d1) main_cam5_pane_t7_ParamLimits

0xd461,	// (0x000334d1) main_cam5_pane_t7

0xd473,	// (0x000334e3) main_cam5_pane_t8_ParamLimits

0xd473,	// (0x000334e3) main_cam5_pane_t8

0xd48f,	// (0x000334ff) main_cam5_pane_t9_ParamLimits

0xd48f,	// (0x000334ff) main_cam5_pane_t9

0xd4a1,	// (0x00033511) main_cam5_pane_t10_ParamLimits

0xd4a1,	// (0x00033511) main_cam5_pane_t10

0xd4b3,	// (0x00033523) main_cam5_pane_t11_ParamLimits

0xd4b3,	// (0x00033523) main_cam5_pane_t11

0xd4c5,	// (0x00033535) main_cam5_pane_t12_ParamLimits

0xd4c5,	// (0x00033535) main_cam5_pane_t12

0xd4da,	// (0x0003354a) main_cam5_pane_t13_ParamLimits

0xd4da,	// (0x0003354a) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00035ad7) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00035ad7) main_cam5_pane_t

0x1feb,	// (0x0002805b) popup_scut_keymap_window_ParamLimits

0x1feb,	// (0x0002805b) popup_scut_keymap_window

0x8bf8,	// (0x0002ec68) aid_size_cell_brow_shortcut

0x502d,	// (0x0002b09d) bg_popup_window_pane_cp010

0x8c04,	// (0x0002ec74) grid_scut_pane

0x8c10,	// (0x0002ec80) cell_scut_pane_ParamLimits

0x8c10,	// (0x0002ec80) cell_scut_pane

0x8c27,	// (0x0002ec97) cell_scut_pane_g1

0xd4f7,	// (0x00033567) cell_scut_pane_t1

0xd506,	// (0x00033576) cell_scut_pane_t2

0x8c30,	// (0x0002eca0) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00035af2) cell_scut_pane_t

0x737e,	// (0x0002d3ee) main_mup3_pane_g8_ParamLimits

0x737e,	// (0x0002d3ee) main_mup3_pane_g8

0x192c,	// (0x0002799c) area_vitu2_query_pane_ParamLimits

0x192c,	// (0x0002799c) area_vitu2_query_pane

0x8971,	// (0x0002e9e1) input_focus_pane_cp08

0xd515,	// (0x00033585) area_vitu2_query_pane_g1

0x8c3e,	// (0x0002ecae) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00035af9) area_vitu2_query_pane_g

0x8c4f,	// (0x0002ecbf) area_vitu2_query_pane_t1_ParamLimits

0x8c4f,	// (0x0002ecbf) area_vitu2_query_pane_t1

0x8c63,	// (0x0002ecd3) area_vitu2_query_pane_t2_ParamLimits

0x8c63,	// (0x0002ecd3) area_vitu2_query_pane_t2

0x8c77,	// (0x0002ece7) area_vitu2_query_pane_t3_ParamLimits

0x8c77,	// (0x0002ece7) area_vitu2_query_pane_t3

0xd521,	// (0x00033591) area_vitu2_query_pane_t4_ParamLimits

0xd521,	// (0x00033591) area_vitu2_query_pane_t4

0xd549,	// (0x000335b9) area_vitu2_query_pane_t5_ParamLimits

0xd549,	// (0x000335b9) area_vitu2_query_pane_t5

0xd571,	// (0x000335e1) area_vitu2_query_pane_t6_ParamLimits

0xd571,	// (0x000335e1) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x00035afe) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x00035afe) area_vitu2_query_pane_t

0x8c9f,	// (0x0002ed0f) bg_button_pane_cp018

0x8cad,	// (0x0002ed1d) bg_button_pane_cp021

0x8cb9,	// (0x0002ed29) bg_button_pane_cp022

0x8cc8,	// (0x0002ed38) input_focus_pane_cp09

0x4e42,	// (0x0002aeb2) aid_size_touch_mv_arrow_left

0x4e6b,	// (0x0002aedb) aid_size_touch_mv_arrow_right

0x85b3,	// (0x0002e623) main_cset_slider_pane_g16_ParamLimits

0x85b3,	// (0x0002e623) main_cset_slider_pane_g16

0x85bf,	// (0x0002e62f) main_cset_slider_pane_g17_ParamLimits

0x85bf,	// (0x0002e62f) main_cset_slider_pane_g17

0x8be5,	// (0x0002ec55) cell_cam4_burst_pane_g1_ParamLimits

0x1db3,	// (0x00027e23) compa_mode_pane

0x8791,	// (0x0002e801) popup_vtel_slider_window_g3_ParamLimits

0x8791,	// (0x0002e801) popup_vtel_slider_window_g3

0x87a8,	// (0x0002e818) popup_vtel_slider_window_g4_ParamLimits

0x87a8,	// (0x0002e818) popup_vtel_slider_window_g4

0x87bf,	// (0x0002e82f) popup_vtel_slider_window_t1_ParamLimits

0x87bf,	// (0x0002e82f) popup_vtel_slider_window_t1

0x1db3,	// (0x00027e23) main_cl_pane

0xbd17,	// (0x00031d87) popup_imed_adjust2_window_ParamLimits

0xbcef,	// (0x00031d5f) bg_tb_trans_pane_cp05_ParamLimits

0xc706,	// (0x00032776) popup_imed_adjust2_window_g1_ParamLimits

0xc715,	// (0x00032785) popup_imed_adjust2_window_g2_ParamLimits

0xc715,	// (0x00032785) popup_imed_adjust2_window_g2

0xc721,	// (0x00032791) popup_imed_adjust2_window_g3_ParamLimits

0xc721,	// (0x00032791) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00035869) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00035869) popup_imed_adjust2_window_g

0xc72d,	// (0x0003279d) popup_imed_adjust2_window_t1_ParamLimits

0xc745,	// (0x000327b5) slider_imed_adjust_pane_ParamLimits

0xc759,	// (0x000327c9) slider_imed_adjust_pane_g1_ParamLimits

0xc769,	// (0x000327d9) slider_imed_adjust_pane_g2_ParamLimits

0xc779,	// (0x000327e9) slider_imed_adjust_pane_g3_ParamLimits

0xc78a,	// (0x000327fa) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00035870) slider_imed_adjust_pane_g_ParamLimits

0x167d,	// (0x000276ed) aid_touch_area_cam4_ParamLimits

0x167d,	// (0x000276ed) aid_touch_area_cam4

0xce9b,	// (0x00032f0b) battery_pane_cp01

0x174d,	// (0x000277bd) main_camera4_pane_g6_ParamLimits

0x174d,	// (0x000277bd) main_camera4_pane_g6

0x1777,	// (0x000277e7) main_camera4_pane_t2_ParamLimits

0x1777,	// (0x000277e7) main_camera4_pane_t2

0x0001,

0xf903,	// (0x00035973) main_camera4_pane_t_ParamLimits

0xf903,	// (0x00035973) main_camera4_pane_t

0x1798,	// (0x00027808) aid_touch_area_vid4_ParamLimits

0x1798,	// (0x00027808) aid_touch_area_vid4

0x17ff,	// (0x0002786f) main_video4_pane_g5_ParamLimits

0x17ff,	// (0x0002786f) main_video4_pane_g5

0x182a,	// (0x0002789a) vid4_progress_pane_ParamLimits

0x182a,	// (0x0002789a) vid4_progress_pane

0xd13a,	// (0x000331aa) main_cset_slider_pane_g18_ParamLimits

0xd13a,	// (0x000331aa) main_cset_slider_pane_g18

0xd3df,	// (0x0003344f) cell_cam4_burst_pane_g2_ParamLimits

0xd3df,	// (0x0003344f) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00035ad2) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00035ad2) cell_cam4_burst_pane_g

0x2a3a,	// (0x00028aaa) bg_cl_pane_ParamLimits

0x2a3a,	// (0x00028aaa) bg_cl_pane

0x8cd7,	// (0x0002ed47) cl_header_pane_ParamLimits

0x8cd7,	// (0x0002ed47) cl_header_pane

0x8ceb,	// (0x0002ed5b) cl_listscroll_pane_ParamLimits

0x8ceb,	// (0x0002ed5b) cl_listscroll_pane

0xd5bd,	// (0x0003362d) bg_cl_pane_g1

0xd5c5,	// (0x00033635) bg_cl_pane_g2

0xd5cd,	// (0x0003363d) bg_cl_pane_g3

0xd5d5,	// (0x00033645) bg_cl_pane_g4

0xd5dd,	// (0x0003364d) bg_cl_pane_g5

0xd5e5,	// (0x00033655) bg_cl_pane_g6

0xd5ed,	// (0x0003365d) bg_cl_pane_g7

0xd5f5,	// (0x00033665) bg_cl_pane_g8

0xd5fd,	// (0x0003366d) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x00035b0d) bg_cl_pane_g

0x8cfb,	// (0x0002ed6b) aid_height_cl_leading_ParamLimits

0x8cfb,	// (0x0002ed6b) aid_height_cl_leading

0x8d07,	// (0x0002ed77) aid_height_cl_text_ParamLimits

0x8d07,	// (0x0002ed77) aid_height_cl_text

0x2025,	// (0x00028095) bg_cl_header_pane_ParamLimits

0x2025,	// (0x00028095) bg_cl_header_pane

0x8d26,	// (0x0002ed96) cl_header_pane_g1_ParamLimits

0x8d26,	// (0x0002ed96) cl_header_pane_g1

0x8d3c,	// (0x0002edac) cl_header_pane_t1_ParamLimits

0x8d3c,	// (0x0002edac) cl_header_pane_t1

0xd605,	// (0x00033675) cl_list_pane

0xd10d,	// (0x0003317d) hc_scroll_pane_cp01

0x3af5,	// (0x00029b65) bg_cl_header_pane_g1

0xcff3,	// (0x00033063) bg_cl_header_pane_g2

0x3b15,	// (0x00029b85) bg_cl_header_pane_g3

0xd003,	// (0x00033073) bg_cl_header_pane_g4

0xcffb,	// (0x0003306b) bg_cl_header_pane_g5

0xd2ac,	// (0x0003331c) bg_cl_header_pane_g6

0xd01b,	// (0x0003308b) bg_cl_header_pane_g7

0xd023,	// (0x00033093) bg_cl_header_pane_g8

0xd013,	// (0x00033083) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00035b20) bg_cl_header_pane_g

0x8d55,	// (0x0002edc5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8d55,	// (0x0002edc5) hc_cl_list_double_graphic_heading_pane

0x8d66,	// (0x0002edd6) hc_cl_list_single_graphic_pane_ParamLimits

0x8d66,	// (0x0002edd6) hc_cl_list_single_graphic_pane

0x8d7c,	// (0x0002edec) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8d7c,	// (0x0002edec) hc_cl_list_single_graphic_pane_g1

0x8d88,	// (0x0002edf8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8d88,	// (0x0002edf8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00035b33) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00035b33) hc_cl_list_single_graphic_pane_g

0x8d9c,	// (0x0002ee0c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8d9c,	// (0x0002ee0c) hc_cl_list_single_graphic_pane_t1

0x8d7c,	// (0x0002edec) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8d7c,	// (0x0002edec) hc_cl_list_double_graphic_heading_pane_g1

0x8db1,	// (0x0002ee21) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8db1,	// (0x0002ee21) hc_cl_list_double_graphic_heading_pane_g2

0x8dc5,	// (0x0002ee35) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8dc5,	// (0x0002ee35) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00035b38) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00035b38) hc_cl_list_double_graphic_heading_pane_g

0x8dd9,	// (0x0002ee49) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8dd9,	// (0x0002ee49) hc_cl_list_double_graphic_heading_pane_t1

0x8dee,	// (0x0002ee5e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8dee,	// (0x0002ee5e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00035b3f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00035b3f) hc_cl_list_double_graphic_heading_pane_t

0xd616,	// (0x00033686) vid4_progress_pane_g1

0xd626,	// (0x00033696) vid4_progress_pane_g2

0x46e2,	// (0x0002a752) vid4_progress_pane_g3

0xd636,	// (0x000336a6) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00035b44) vid4_progress_pane_g

0xd654,	// (0x000336c4) vid4_progress_pane_t1

0xd669,	// (0x000336d9) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00035b4f) vid4_progress_pane_t

0xd694,	// (0x00033704) wait_bar_pane_cp07

0xbfe8,	// (0x00032058) blid_firmament_pane_ParamLimits

0xc02b,	// (0x0003209b) popup_blid_sat_info2_window_g1

0xc04f,	// (0x000320bf) popup_blid_sat_info2_window_t3

0xc05d,	// (0x000320cd) popup_blid_sat_info2_window_t4

0xc06b,	// (0x000320db) popup_blid_sat_info2_window_t5

0xc079,	// (0x000320e9) popup_blid_sat_info2_window_t6

0xc089,	// (0x000320f9) popup_blid_sat_info2_window_t7

0xc097,	// (0x00032107) popup_blid_sat_info2_window_t8

0xc0a5,	// (0x00032115) popup_blid_sat_info2_window_t9

0xc0b3,	// (0x00032123) popup_blid_sat_info2_window_t10

0xc175,	// (0x000321e5) aid_firma_cardinal_ParamLimits

0xc189,	// (0x000321f9) blid_firmament_pane_t1_ParamLimits

0xc1a0,	// (0x00032210) blid_firmament_pane_t2_ParamLimits

0xc1b7,	// (0x00032227) blid_firmament_pane_t3_ParamLimits

0xc1ce,	// (0x0003223e) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00035762) blid_firmament_pane_t_ParamLimits

0xc1e5,	// (0x00032255) blid_sat_info_pane_ParamLimits

0x2025,	// (0x00028095) main_cam_set_pane_ParamLimits

0x7bb8,	// (0x0002dc28) aid_size_cell_colour_35_ParamLimits

0x7bd8,	// (0x0002dc48) aid_size_cell_colour_112_ParamLimits

0x7bf8,	// (0x0002dc68) aid_size_cell_effect_ParamLimits

0xbcef,	// (0x00031d5f) bg_tb_trans_pane_cp02_ParamLimits

0x465c,	// (0x0002a6cc) heading_imed_pane_ParamLimits

0x7c18,	// (0x0002dc88) listscroll_imed_pane_ParamLimits

0xb321,	// (0x00031391) popup_call2_audio_first_window_g5_ParamLimits

0xb321,	// (0x00031391) popup_call2_audio_first_window_g5

0x145a,	// (0x000274ca) aid_size_touch_image3_arrow_left_ParamLimits

0x145a,	// (0x000274ca) aid_size_touch_image3_arrow_left

0x1486,	// (0x000274f6) aid_size_touch_image3_arrow_right_ParamLimits

0x1486,	// (0x000274f6) aid_size_touch_image3_arrow_right

0xd67f,	// (0x000336ef) vid4_progress_pane_t3

0x7f2b,	// (0x0002df9b) main_hwr_training_symbol_option_pane_ParamLimits

0x7f2b,	// (0x0002df9b) main_hwr_training_symbol_option_pane

0xc9f3,	// (0x00032a63) popup_hwr_training_preview_window_ParamLimits

0xc9f3,	// (0x00032a63) popup_hwr_training_preview_window

0x130d,	// (0x0002737d) hwr_training_navi_pane_g5_ParamLimits

0x130d,	// (0x0002737d) hwr_training_navi_pane_g5

0xcfd3,	// (0x00033043) popup_char_count_window

0xcfdb,	// (0x0003304b) bg_popup_sub_pane_cp20_ParamLimits

0x1cb7,	// (0x00027d27) list_vitu2_match_list_pane_ParamLimits

0x1cc6,	// (0x00027d36) vitu2_page_scroll_pane_ParamLimits

0x1cc6,	// (0x00027d36) vitu2_page_scroll_pane

0xd700,	// (0x00033770) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd700,	// (0x00033770) list_single_hwr_training_symbol_option_pane

0xd713,	// (0x00033783) list_single_hwr_training_symbol_option_pane_g1

0xd71b,	// (0x0003378b) list_single_hwr_training_symbol_option_pane_t1

0xd729,	// (0x00033799) bg_button_pane_cp023

0xd732,	// (0x000337a2) bg_button_pane_cp024

0x8e03,	// (0x0002ee73) vitu2_page_scroll_pane_g1

0x8e0b,	// (0x0002ee7b) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00035b56) vitu2_page_scroll_pane_g

0x8e13,	// (0x0002ee83) vitu2_page_scroll_pane_t1

0xd765,	// (0x000337d5) popup_char_count_window_g1

0xd76e,	// (0x000337de) popup_char_count_window_g2

0xd777,	// (0x000337e7) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00035b5b) popup_char_count_window_g

0xd780,	// (0x000337f0) popup_char_count_window_t1

0x1db3,	// (0x00027e23) main_vded2_pane

0xc6f2,	// (0x00032762) aid_size_cell_imed_line

0xc6fc,	// (0x0003276c) grid_imed_line_width_pane

0x1898,	// (0x00027908) vid4_indicators_pane_g4

0xd78e,	// (0x000337fe) cell_imed_line_width_pane_ParamLimits

0xd78e,	// (0x000337fe) cell_imed_line_width_pane

0xd7a2,	// (0x00033812) cell_imed_line_width_pane_g1

0xbf96,	// (0x00032006) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00035b62) cell_imed_line_width_pane_g

0x8e22,	// (0x0002ee92) main_vded2_pane_g1_ParamLimits

0x8e22,	// (0x0002ee92) main_vded2_pane_g1

0x8e38,	// (0x0002eea8) main_vded2_pane_g2_ParamLimits

0x8e38,	// (0x0002eea8) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00035b67) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00035b67) main_vded2_pane_g

0x8e4a,	// (0x0002eeba) vded2_slider_pane_ParamLimits

0x8e4a,	// (0x0002eeba) vded2_slider_pane

0x8e5a,	// (0x0002eeca) aid_size_touch_vded2_end

0x8e64,	// (0x0002eed4) aid_size_touch_vded2_playhead

0xd7ab,	// (0x0003381b) aid_size_touch_vded2_start

0xd7b3,	// (0x00033823) vded2_slider_bg_pane

0xd7bc,	// (0x0003382c) vded2_slider_pane_g1

0xd7c5,	// (0x00033835) vded2_slider_pane_g2

0x8e6e,	// (0x0002eede) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00035b6c) vded2_slider_pane_g

0xd7cd,	// (0x0003383d) vded2_slider_bg_pane_g1

0xd7d6,	// (0x00033846) vded2_slider_bg_pane_g2

0xd7df,	// (0x0003384f) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x00035b73) vded2_slider_bg_pane_g

0x5733,	// (0x0002b7a3) aid_postcard_touch_down_pane_ParamLimits

0x5733,	// (0x0002b7a3) aid_postcard_touch_down_pane

0x5749,	// (0x0002b7b9) aid_postcard_touch_up_pane_ParamLimits

0x5749,	// (0x0002b7b9) aid_postcard_touch_up_pane

0x1db3,	// (0x00027e23) main_blid2_pane

0xbcfd,	// (0x00031d6d) popup_blid2_search_window

0x1db3,	// (0x00027e23) blid2_gps_pane

0x1db3,	// (0x00027e23) blid2_navig_pane

0x1db3,	// (0x00027e23) blid2_search_pane

0x1db3,	// (0x00027e23) blid2_tripm_pane

0x8e79,	// (0x0002eee9) blid2_search_pane_g1_ParamLimits

0x8e79,	// (0x0002eee9) blid2_search_pane_g1

0x8e93,	// (0x0002ef03) blid2_search_pane_t1_ParamLimits

0x8e93,	// (0x0002ef03) blid2_search_pane_t1

0x8ea5,	// (0x0002ef15) aid_size_cell_blid2_gps_ParamLimits

0x8ea5,	// (0x0002ef15) aid_size_cell_blid2_gps

0x8ebd,	// (0x0002ef2d) blid2_gps_pane_g1_ParamLimits

0x8ebd,	// (0x0002ef2d) blid2_gps_pane_g1

0x8ed1,	// (0x0002ef41) grid_blid2_satellite_pane_ParamLimits

0x8ed1,	// (0x0002ef41) grid_blid2_satellite_pane

0x8eeb,	// (0x0002ef5b) blid2_navig_pane_g1_ParamLimits

0x8eeb,	// (0x0002ef5b) blid2_navig_pane_g1

0x8ef7,	// (0x0002ef67) blid2_navig_pane_t1_ParamLimits

0x8ef7,	// (0x0002ef67) blid2_navig_pane_t1

0x8f12,	// (0x0002ef82) blid2_navig_pane_t2_ParamLimits

0x8f12,	// (0x0002ef82) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00035b7a) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00035b7a) blid2_navig_pane_t

0x8f2d,	// (0x0002ef9d) blid2_navig_ring_pane_ParamLimits

0x8f2d,	// (0x0002ef9d) blid2_navig_ring_pane

0x8f46,	// (0x0002efb6) blid2_speed_pane_ParamLimits

0x8f46,	// (0x0002efb6) blid2_speed_pane

0x8f52,	// (0x0002efc2) blid2_tripm_pane_g1_ParamLimits

0x8f52,	// (0x0002efc2) blid2_tripm_pane_g1

0x8f6b,	// (0x0002efdb) blid2_tripm_pane_g2_ParamLimits

0x8f6b,	// (0x0002efdb) blid2_tripm_pane_g2

0x8f7f,	// (0x0002efef) blid2_tripm_pane_g3_ParamLimits

0x8f7f,	// (0x0002efef) blid2_tripm_pane_g3

0x8f93,	// (0x0002f003) blid2_tripm_pane_g4_ParamLimits

0x8f93,	// (0x0002f003) blid2_tripm_pane_g4

0x8fa7,	// (0x0002f017) blid2_tripm_pane_g5_ParamLimits

0x8fa7,	// (0x0002f017) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00035b7f) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00035b7f) blid2_tripm_pane_g

0x8fcd,	// (0x0002f03d) blid2_tripm_pane_t1_ParamLimits

0x8fcd,	// (0x0002f03d) blid2_tripm_pane_t1

0x8fe8,	// (0x0002f058) blid2_tripm_pane_t2_ParamLimits

0x8fe8,	// (0x0002f058) blid2_tripm_pane_t2

0x9001,	// (0x0002f071) blid2_tripm_pane_t3_ParamLimits

0x9001,	// (0x0002f071) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00035b8c) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00035b8c) blid2_tripm_pane_t

0x9048,	// (0x0002f0b8) cell_blid2_satellite_pane_ParamLimits

0x9048,	// (0x0002f0b8) cell_blid2_satellite_pane

0x9066,	// (0x0002f0d6) cell_blid2_satellite_pane_g1

0xd7e8,	// (0x00033858) cell_blid2_satellite_pane_t1

0xc1f5,	// (0x00032265) blid2_speed_pane_g1

0xd7f6,	// (0x00033866) blid2_speed_pane_t1

0xd804,	// (0x00033874) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x00035b95) blid2_speed_pane_t

0xc1f5,	// (0x00032265) blid2_navig_ring_pane_g1

0x906f,	// (0x0002f0df) blid2_navig_ring_pane_g2

0x9077,	// (0x0002f0e7) blid2_navig_ring_pane_g3

0x907f,	// (0x0002f0ef) blid2_navig_ring_pane_g4

0x9087,	// (0x0002f0f7) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00035b9a) blid2_navig_ring_pane_g

0x1db3,	// (0x00027e23) bg_popup_window_pane_cp011

0xd812,	// (0x00033882) popup_blid2_search_window_g1

0xd81a,	// (0x0003388a) popup_blid2_search_window_t1

0xd828,	// (0x00033898) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00035ba5) popup_blid2_search_window_t

0x39c1,	// (0x00029a31) main_browser_pane_g1

0x2a3a,	// (0x00028aaa) main_browser_pane_ParamLimits

0xcfdb,	// (0x0003304b) bg_button_pane_cp011_ParamLimits

0x1c2d,	// (0x00027c9d) cell_vitu2_function_pane_g1_ParamLimits

0xbcef,	// (0x00031d5f) bg_popup_sub_pane_cp22_ParamLimits

0x8971,	// (0x0002e9e1) input_focus_pane_cp08_ParamLimits

0x8988,	// (0x0002e9f8) popup_vitu2_query_button_pane_ParamLimits

0x8988,	// (0x0002e9f8) popup_vitu2_query_button_pane

0x8999,	// (0x0002ea09) popup_vitu2_query_input_button_pane

0xd329,	// (0x00033399) popup_vitu2_query_window_g1_ParamLimits

0x89a3,	// (0x0002ea13) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00035aa6) popup_vitu2_query_window_g_ParamLimits

0x1db3,	// (0x00027e23) bg_button_pane_cp026

0x908f,	// (0x0002f0ff) popup_vitu2_query_input_button_pane_g1

0x1db3,	// (0x00027e23) bg_button_pane_cp025

0xd836,	// (0x000338a6) popup_vitu2_query_button_pane_t1

0x702d,	// (0x0002d09d) main_mp3_pane_t6

0x703b,	// (0x0002d0ab) popup_slider_window_cp01

0xced7,	// (0x00032f47) cam4_battery_pane

0xcf3e,	// (0x00032fae) cam4_battery_pane_cp02

0xd60e,	// (0x0003367e) cam4_battery_pane_cp01

0xd60e,	// (0x0003367e) cam4_battery_pane_cp03

0xcd46,	// (0x00032db6) cam4_battery_pane_g1

0xc1f5,	// (0x00032265) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00035baa) cam4_battery_pane_g

0xc0c1,	// (0x00032131) popup_blid_sat_info2_window_t11

0x4e42,	// (0x0002aeb2) aid_size_touch_mv_arrow_left_ParamLimits

0x4e6b,	// (0x0002aedb) aid_size_touch_mv_arrow_right_ParamLimits

0x4ec9,	// (0x0002af39) navi_pane_g1_ParamLimits

0x4ed5,	// (0x0002af45) navi_pane_g2_ParamLimits

0x4f03,	// (0x0002af73) navi_pane_g3_ParamLimits

0xf404,	// (0x00035474) navi_pane_g_ParamLimits

0x4fbf,	// (0x0002b02f) navi_pane_mv_t1_ParamLimits

0x7c24,	// (0x0002dc94) grid_imed_effect_pane_ParamLimits

0x3567,	// (0x000295d7) aid_placing_vt_slider_lsc

0x3577,	// (0x000295e7) aid_placing_vt_slider_prt

0x2025,	// (0x00028095) bg_tb_trans_pane_cp01_ParamLimits

0xc381,	// (0x000323f1) popup_image_details_window_g1_ParamLimits

0xc394,	// (0x00032404) popup_image_details_window_g2_ParamLimits

0xc3a9,	// (0x00032419) popup_image_details_window_g3_ParamLimits

0xc3a9,	// (0x00032419) popup_image_details_window_g3

0xf737,	// (0x000357a7) popup_image_details_window_g_ParamLimits

0xc3bd,	// (0x0003242d) popup_image_details_window_t1_ParamLimits

0xc3cf,	// (0x0003243f) popup_image_details_window_t2_ParamLimits

0xc3e8,	// (0x00032458) popup_image_details_window_t3_ParamLimits

0xc3fc,	// (0x0003246c) popup_image_details_window_t4_ParamLimits

0xc417,	// (0x00032487) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x000357ae) popup_image_details_window_t_ParamLimits

0x8d13,	// (0x0002ed83) cl_header_name_pane_ParamLimits

0x8d13,	// (0x0002ed83) cl_header_name_pane

0x9097,	// (0x0002f107) cl_header_name_pane_t1_ParamLimits

0x9097,	// (0x0002f107) cl_header_name_pane_t1

0x90b8,	// (0x0002f128) cl_header_name_pane_t2_ParamLimits

0x90b8,	// (0x0002f128) cl_header_name_pane_t2

0x90fa,	// (0x0002f16a) cl_header_name_pane_t3_ParamLimits

0x90fa,	// (0x0002f16a) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00035baf) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00035baf) cl_header_name_pane_t

0x4f90,	// (0x0002b000) navi_pane_mv_g2_ParamLimits

0xcf61,	// (0x00032fd1) field_vitu2_entry_pane_g1_ParamLimits

0xcf6d,	// (0x00032fdd) field_vitu2_entry_pane_g2_ParamLimits

0xcf79,	// (0x00032fe9) field_vitu2_entry_pane_g3_ParamLimits

0xcf79,	// (0x00032fe9) field_vitu2_entry_pane_g3

0xf935,	// (0x000359a5) field_vitu2_entry_pane_g_ParamLimits

0x1acd,	// (0x00027b3d) cell_vitu2_itu_pane_g1_ParamLimits

0x1add,	// (0x00027b4d) cell_vitu2_itu_pane_g2_ParamLimits

0x1add,	// (0x00027b4d) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x000359b1) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x000359b1) cell_vitu2_itu_pane_g

0xcfdb,	// (0x0003304b) bg_vkb2_func_pane_cp05_ParamLimits

0xcfdb,	// (0x0003304b) bg_vkb2_func_pane_cp05

0xcfdb,	// (0x0003304b) bg_vkb2_func_pane_cp03

0xcfdb,	// (0x0003304b) bg_vkb2_func_pane_cp04

0xcfdb,	// (0x0003304b) bg_vkb2_func_pane_cp10_ParamLimits

0xcfdb,	// (0x0003304b) bg_vkb2_func_pane_cp10

0x8cb9,	// (0x0002ed29) bg_vkb2_func_pane_cp08

0x8c9f,	// (0x0002ed0f) bg_vkb2_func_pane_cp06

0x8cad,	// (0x0002ed1d) bg_vkb2_func_pane_cp07

0xd73b,	// (0x000337ab) bg_vkb2_func_pane_cp11_ParamLimits

0xd73b,	// (0x000337ab) bg_vkb2_func_pane_cp11

0xd750,	// (0x000337c0) bg_vkb2_func_pane_cp12_ParamLimits

0xd750,	// (0x000337c0) bg_vkb2_func_pane_cp12

0x1db3,	// (0x00027e23) bg_vkb2_func_pane_cp09

0xcff3,	// (0x00033063) bg_vkb2_func_pane_g1

0x3b15,	// (0x00029b85) bg_vkb2_func_pane_g2

0xcffb,	// (0x0003306b) bg_vkb2_func_pane_g3

0xd003,	// (0x00033073) bg_vkb2_func_pane_g4

0xd2ac,	// (0x0003331c) bg_vkb2_func_pane_g5

0xd01b,	// (0x0003308b) bg_vkb2_func_pane_g6

0xd023,	// (0x00033093) bg_vkb2_func_pane_g7

0xd013,	// (0x00033083) bg_vkb2_func_pane_g8

0x3af5,	// (0x00029b65) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00035bb6) bg_vkb2_func_pane_g

0x8fbb,	// (0x0002f02b) blid2_tripm_pane_g6_ParamLimits

0x8fbb,	// (0x0002f02b) blid2_tripm_pane_g6

0xcd00,	// (0x00032d70) mp4_progress_pane_g1

0x9034,	// (0x0002f0a4) blid2_tripm_values_pane_ParamLimits

0x9034,	// (0x0002f0a4) blid2_tripm_values_pane

0x912b,	// (0x0002f19b) blid2_tripm_values_pane_t1

0x9139,	// (0x0002f1a9) blid2_tripm_values_pane_t2

0x9147,	// (0x0002f1b7) blid2_tripm_values_pane_t3

0x9155,	// (0x0002f1c5) blid2_tripm_values_pane_t4

0x9163,	// (0x0002f1d3) blid2_tripm_values_pane_t5

0x9171,	// (0x0002f1e1) blid2_tripm_values_pane_t6

0x917f,	// (0x0002f1ef) blid2_tripm_values_pane_t7

0x918d,	// (0x0002f1fd) blid2_tripm_values_pane_t8

0x919b,	// (0x0002f20b) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00035bc9) blid2_tripm_values_pane_t

0x35b3,	// (0x00029623) call_video_pane_t1_ParamLimits

0x35d1,	// (0x00029641) call_video_pane_t2_ParamLimits

0xf28d,	// (0x000352fd) call_video_pane_t_ParamLimits

0x564c,	// (0x0002b6bc) msg_header_pane_g1_ParamLimits

0x565a,	// (0x0002b6ca) msg_header_pane_g2_ParamLimits

0x565a,	// (0x0002b6ca) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x00035517) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x00035517) msg_header_pane_g

0x2a3a,	// (0x00028aaa) main_clock2_pane_ParamLimits

0x79af,	// (0x0002da1f) grid_clock2_toolbar_pane_ParamLimits

0x79af,	// (0x0002da1f) grid_clock2_toolbar_pane

0x79af,	// (0x0002da1f) listscroll_clock2_pane_ParamLimits

0x79af,	// (0x0002da1f) listscroll_clock2_pane

0x7a91,	// (0x0002db01) main_clock2_pane_t3_ParamLimits

0x7a91,	// (0x0002db01) main_clock2_pane_t3

0x7ab4,	// (0x0002db24) main_clock2_pane_t4_ParamLimits

0x7ab4,	// (0x0002db24) main_clock2_pane_t4

0xd844,	// (0x000338b4) cell_clock2_toolbar_pane

0xd84c,	// (0x000338bc) cell_clock2_toolbar_pane_cp01

0xd84c,	// (0x000338bc) cell_clock2_toolbar_pane_cp02

0xd854,	// (0x000338c4) cell_clock2_toolbar_pane_cp03

0xd85c,	// (0x000338cc) list_clock2_pane

0x4bec,	// (0x0002ac5c) scroll_pane_cp10

0xd864,	// (0x000338d4) list_single_clock2_pane_ParamLimits

0xd864,	// (0x000338d4) list_single_clock2_pane

0x502d,	// (0x0002b09d) list_highlight_pane_cp08

0xd871,	// (0x000338e1) list_single_clock2_pane_t1

0xd87f,	// (0x000338ef) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x00035bdc) list_single_clock2_pane_t

0x1db3,	// (0x00027e23) bg_button_pane_cp10

0xd88d,	// (0x000338fd) cell_clock2_toolbar_pane_g1

0x0d86,	// (0x00026df6) aid_main_viewer_pane_g1_ParamLimits

0x0d86,	// (0x00026df6) aid_main_viewer_pane_g1

0x0d94,	// (0x00026e04) aid_main_viewer_pane_g2_ParamLimits

0x0d94,	// (0x00026e04) aid_main_viewer_pane_g2

0x56e9,	// (0x0002b759) aid_main_viewer_pane_g3_ParamLimits

0x56e9,	// (0x0002b759) aid_main_viewer_pane_g3

0x56f8,	// (0x0002b768) aid_main_viewer_pane_g4_ParamLimits

0x56f8,	// (0x0002b768) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x00035528) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x00035528) aid_main_viewer_pane_g

0x6727,	// (0x0002c797) main_calc_pane_ParamLimits

0x673b,	// (0x0002c7ab) main_dialer2_pane_ParamLimits

0x1db3,	// (0x00027e23) main_cam6_pane

0x1db3,	// (0x00027e23) main_vid6_pane

0x79bb,	// (0x0002da2b) listscroll_gen_pane_cp06_ParamLimits

0x79bb,	// (0x0002da2b) listscroll_gen_pane_cp06

0x7ad7,	// (0x0002db47) main_clock2_pane_t5_ParamLimits

0x7ad7,	// (0x0002db47) main_clock2_pane_t5

0x7b31,	// (0x0002dba1) aid_call2_pane_cp10_ParamLimits

0x7b43,	// (0x0002dbb3) aid_call_pane_cp10_ParamLimits

0x4dd1,	// (0x0002ae41) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4dd1,	// (0x0002ae41) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7b55,	// (0x0002dbc5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7b55,	// (0x0002dbc5) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4dd1,	// (0x0002ae41) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0003585e) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b67,	// (0x0002dbd7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7fea,	// (0x0002e05a) cell_dialer2_keypad_pane_g2_ParamLimits

0x7fea,	// (0x0002e05a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x00035944) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x00035944) cell_dialer2_keypad_pane_g

0x8006,	// (0x0002e076) cell_dialer2_keypad_pane_t1

0x84a6,	// (0x0002e516) main_cset_text2_pane_ParamLimits

0x84a6,	// (0x0002e516) main_cset_text2_pane

0xd515,	// (0x00033585) area_vitu2_query_pane_g1_ParamLimits

0x8c3e,	// (0x0002ecae) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00035af9) area_vitu2_query_pane_g_ParamLimits

0xd599,	// (0x00033609) area_vitu2_query_pane_t7_ParamLimits

0xd599,	// (0x00033609) area_vitu2_query_pane_t7

0x8c9f,	// (0x0002ed0f) bg_button_pane_cp018_ParamLimits

0x8cad,	// (0x0002ed1d) bg_button_pane_cp021_ParamLimits

0x8cb9,	// (0x0002ed29) bg_button_pane_cp022_ParamLimits

0x8cb9,	// (0x0002ed29) bg_vkb2_func_pane_cp08_ParamLimits

0x8c9f,	// (0x0002ed0f) bg_vkb2_func_pane_cp06_ParamLimits

0x8cad,	// (0x0002ed1d) bg_vkb2_func_pane_cp07_ParamLimits

0x8cc8,	// (0x0002ed38) input_focus_pane_cp09_ParamLimits

0xd895,	// (0x00033905) cam6_autofocus_pane_ParamLimits

0xd895,	// (0x00033905) cam6_autofocus_pane

0x1d4c,	// (0x00027dbc) cam6_image_uncrop_pane_ParamLimits

0x1d4c,	// (0x00027dbc) cam6_image_uncrop_pane

0x1d5b,	// (0x00027dcb) cam6_indi_pane_ParamLimits

0x1d5b,	// (0x00027dcb) cam6_indi_pane

0x1d71,	// (0x00027de1) cam6_mode_pane_ParamLimits

0x1d71,	// (0x00027de1) cam6_mode_pane

0x1d83,	// (0x00027df3) cam6_timer_pane_ParamLimits

0x1d83,	// (0x00027df3) cam6_timer_pane

0x1d8f,	// (0x00027dff) cam6_zoom_pane_ParamLimits

0x1d8f,	// (0x00027dff) cam6_zoom_pane

0x91a9,	// (0x0002f219) cam6_mode_pane_g1_ParamLimits

0x91a9,	// (0x0002f219) cam6_mode_pane_g1

0x91b9,	// (0x0002f229) cam6_mode_pane_g2_ParamLimits

0x91b9,	// (0x0002f229) cam6_mode_pane_g2

0x91c9,	// (0x0002f239) cam6_mode_pane_g3_ParamLimits

0x91c9,	// (0x0002f239) cam6_mode_pane_g3

0x91d9,	// (0x0002f249) cam6_mode_pane_g4_ParamLimits

0x91d9,	// (0x0002f249) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x00035be1) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x00035be1) cam6_mode_pane_g

0xd8a3,	// (0x00033913) bg_tb_trans_pane_cp08_ParamLimits

0xd8a3,	// (0x00033913) bg_tb_trans_pane_cp08

0xd8b1,	// (0x00033921) cam6_battery_pane_ParamLimits

0xd8b1,	// (0x00033921) cam6_battery_pane

0xd8c7,	// (0x00033937) cam6_indi_pane_g1_ParamLimits

0xd8c7,	// (0x00033937) cam6_indi_pane_g1

0xd8d9,	// (0x00033949) cam6_indi_pane_g2_ParamLimits

0xd8d9,	// (0x00033949) cam6_indi_pane_g2

0xd8eb,	// (0x0003395b) cam6_indi_pane_g3_ParamLimits

0xd8eb,	// (0x0003395b) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x00035bea) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00035bea) cam6_indi_pane_g

0xd8fd,	// (0x0003396d) cam6_indi_pane_t1_ParamLimits

0xd8fd,	// (0x0003396d) cam6_indi_pane_t1

0x91e9,	// (0x0002f259) cam6_autofocus_pane_g1

0x91f1,	// (0x0002f261) cam6_autofocus_pane_g2

0x91f9,	// (0x0002f269) cam6_autofocus_pane_g3

0x9201,	// (0x0002f271) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x00035bf1) cam6_autofocus_pane_g

0xd923,	// (0x00033993) cam6_timer_pane_g1

0xd92b,	// (0x0003399b) cam6_timer_pane_t1

0xd939,	// (0x000339a9) cam6_zoom_cont_pane

0xd941,	// (0x000339b1) cam6_zoom_pane_g1

0xd949,	// (0x000339b9) cam6_zoom_pane_g2

0x9209,	// (0x0002f279) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x00035bfa) cam6_zoom_pane_g

0xc1f5,	// (0x00032265) cam6_battery_pane_g1

0xc1f5,	// (0x00032265) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0003576b) cam6_battery_pane_g

0xd951,	// (0x000339c1) cam6_zoom_cont_pane_g1

0xd95a,	// (0x000339ca) cam6_zoom_cont_pane_g2

0xd963,	// (0x000339d3) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x00035c01) cam6_zoom_cont_pane_g

0x9226,	// (0x0002f296) cam6_mode_pane_cp_ParamLimits

0x9226,	// (0x0002f296) cam6_mode_pane_cp

0x9238,	// (0x0002f2a8) cam6_zoom_pane_cp_ParamLimits

0x9238,	// (0x0002f2a8) cam6_zoom_pane_cp

0x9244,	// (0x0002f2b4) vid6_image_uncrop_cif_pane_ParamLimits

0x9244,	// (0x0002f2b4) vid6_image_uncrop_cif_pane

0x9254,	// (0x0002f2c4) vid6_image_uncrop_nhd_pane_ParamLimits

0x9254,	// (0x0002f2c4) vid6_image_uncrop_nhd_pane

0x9263,	// (0x0002f2d3) vid6_image_uncrop_vga_pane_ParamLimits

0x9263,	// (0x0002f2d3) vid6_image_uncrop_vga_pane

0x9272,	// (0x0002f2e2) vid6_image_uncrop_wvga_pane_ParamLimits

0x9272,	// (0x0002f2e2) vid6_image_uncrop_wvga_pane

0x9281,	// (0x0002f2f1) vid6_indi_pane_ParamLimits

0x9281,	// (0x0002f2f1) vid6_indi_pane

0xd8a3,	// (0x00033913) bg_tb_trans_pane_cp09_ParamLimits

0xd8a3,	// (0x00033913) bg_tb_trans_pane_cp09

0xd97b,	// (0x000339eb) cam6_battery_pane_cp_ParamLimits

0xd97b,	// (0x000339eb) cam6_battery_pane_cp

0xd987,	// (0x000339f7) vid6_indi_pane_g1_ParamLimits

0xd987,	// (0x000339f7) vid6_indi_pane_g1

0xd999,	// (0x00033a09) vid6_indi_pane_g2_ParamLimits

0xd999,	// (0x00033a09) vid6_indi_pane_g2

0xd9ab,	// (0x00033a1b) vid6_indi_pane_g3_ParamLimits

0xd9ab,	// (0x00033a1b) vid6_indi_pane_g3

0xd9c0,	// (0x00033a30) vid6_indi_pane_g4_ParamLimits

0xd9c0,	// (0x00033a30) vid6_indi_pane_g4

0xd9d5,	// (0x00033a45) vid6_indi_pane_g5_ParamLimits

0xd9d5,	// (0x00033a45) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x00035c08) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x00035c08) vid6_indi_pane_g

0xd9ef,	// (0x00033a5f) vid6_indi_pane_t1_ParamLimits

0xd9ef,	// (0x00033a5f) vid6_indi_pane_t1

0xda05,	// (0x00033a75) vid6_indi_pane_t2_ParamLimits

0xda05,	// (0x00033a75) vid6_indi_pane_t2

0xda2d,	// (0x00033a9d) vid6_indi_pane_t3_ParamLimits

0xda2d,	// (0x00033a9d) vid6_indi_pane_t3

0xda55,	// (0x00033ac5) vid6_indi_pane_t4_ParamLimits

0xda55,	// (0x00033ac5) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x00035c13) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x00035c13) vid6_indi_pane_t

0xda79,	// (0x00033ae9) wait_bar_pane_cp08

0x9299,	// (0x0002f309) main_cset_text2_pane_t1_ParamLimits

0x9299,	// (0x0002f309) main_cset_text2_pane_t1

0x9211,	// (0x0002f281) listscroll_gen_pane_cp06_t1_ParamLimits

0x9211,	// (0x0002f281) listscroll_gen_pane_cp06_t1

0x1db3,	// (0x00027e23) main_cam6_set_pane

0xcec9,	// (0x00032f39) bg_tb_trans_pane_cp06_ParamLimits

0xcedf,	// (0x00032f4f) cam4_indicators_pane_g1_ParamLimits

0xcef0,	// (0x00032f60) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00035981) cam4_indicators_pane_g_ParamLimits

0xcf0e,	// (0x00032f7e) cam4_indicators_pane_t1_ParamLimits

0xcf30,	// (0x00032fa0) bg_tb_trans_pane_cp07_ParamLimits

0x1871,	// (0x000278e1) vid4_indicators_pane_g1_ParamLimits

0x187e,	// (0x000278ee) vid4_indicators_pane_g2_ParamLimits

0x188b,	// (0x000278fb) vid4_indicators_pane_g3_ParamLimits

0x1898,	// (0x00027908) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x00035993) vid4_indicators_pane_g_ParamLimits

0x18b0,	// (0x00027920) vid4_indicators_pane_t1_ParamLimits

0xd616,	// (0x00033686) vid4_progress_pane_g1_ParamLimits

0xd626,	// (0x00033696) vid4_progress_pane_g2_ParamLimits

0x46e2,	// (0x0002a752) vid4_progress_pane_g3_ParamLimits

0xd636,	// (0x000336a6) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00035b44) vid4_progress_pane_g_ParamLimits

0xd654,	// (0x000336c4) vid4_progress_pane_t1_ParamLimits

0xd669,	// (0x000336d9) vid4_progress_pane_t2_ParamLimits

0xd67f,	// (0x000336ef) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00035b4f) vid4_progress_pane_t_ParamLimits

0xd694,	// (0x00033704) wait_bar_pane_cp07_ParamLimits

0x92b6,	// (0x0002f326) main_cam6_set_pane_g2_ParamLimits

0x92b6,	// (0x0002f326) main_cam6_set_pane_g2

0x92da,	// (0x0002f34a) main_cset6_listscroll_pane_ParamLimits

0x92da,	// (0x0002f34a) main_cset6_listscroll_pane

0x92fa,	// (0x0002f36a) main_cset6_slider_pane_ParamLimits

0x92fa,	// (0x0002f36a) main_cset6_slider_pane

0x9310,	// (0x0002f380) main_cset6_text2_pane_ParamLimits

0x9310,	// (0x0002f380) main_cset6_text2_pane

0xda88,	// (0x00033af8) main_cset6_text_pane

0xda90,	// (0x00033b00) main_cset_list_pane_copy1_ParamLimits

0xda90,	// (0x00033b00) main_cset_list_pane_copy1

0xdaa0,	// (0x00033b10) scroll_pane_cp028_copy1

0x931e,	// (0x0002f38e) cset_list_set_pane_copy1

0x932f,	// (0x0002f39f) aid_position_infowindow_above_copy1

0x9337,	// (0x0002f3a7) aid_position_infowindow_below_copy1

0x933f,	// (0x0002f3af) cset_list_set_pane_g1_copy1

0x9347,	// (0x0002f3b7) cset_list_set_pane_g3_copy1_ParamLimits

0x9347,	// (0x0002f3b7) cset_list_set_pane_g3_copy1

0x9356,	// (0x0002f3c6) cset_list_set_pane_t1_copy1_ParamLimits

0x9356,	// (0x0002f3c6) cset_list_set_pane_t1_copy1

0x2025,	// (0x00028095) list_highlight_pane_cp021_copy1_ParamLimits

0x2025,	// (0x00028095) list_highlight_pane_cp021_copy1

0xdaa9,	// (0x00033b19) cset6_slider_pane_ParamLimits

0xdaa9,	// (0x00033b19) cset6_slider_pane

0xdad5,	// (0x00033b45) main_cset6_slider_pane_g1_ParamLimits

0xdad5,	// (0x00033b45) main_cset6_slider_pane_g1

0x936b,	// (0x0002f3db) main_cset6_slider_pane_g2_ParamLimits

0x936b,	// (0x0002f3db) main_cset6_slider_pane_g2

0xdafd,	// (0x00033b6d) main_cset6_slider_pane_g3_ParamLimits

0xdafd,	// (0x00033b6d) main_cset6_slider_pane_g3

0x9393,	// (0x0002f403) main_cset6_slider_pane_g4_ParamLimits

0x9393,	// (0x0002f403) main_cset6_slider_pane_g4

0x939f,	// (0x0002f40f) main_cset6_slider_pane_g5_ParamLimits

0x939f,	// (0x0002f40f) main_cset6_slider_pane_g5

0xd122,	// (0x00033192) main_cset6_slider_pane_g7_ParamLimits

0xd122,	// (0x00033192) main_cset6_slider_pane_g7

0xd12e,	// (0x0003319e) main_cset6_slider_pane_g8_ParamLimits

0xd12e,	// (0x0003319e) main_cset6_slider_pane_g8

0x8553,	// (0x0002e5c3) main_cset6_slider_pane_g9_ParamLimits

0x8553,	// (0x0002e5c3) main_cset6_slider_pane_g9

0x855f,	// (0x0002e5cf) main_cset6_slider_pane_g10_ParamLimits

0x855f,	// (0x0002e5cf) main_cset6_slider_pane_g10

0x856b,	// (0x0002e5db) main_cset6_slider_pane_g11_ParamLimits

0x856b,	// (0x0002e5db) main_cset6_slider_pane_g11

0x8577,	// (0x0002e5e7) main_cset6_slider_pane_g12_ParamLimits

0x8577,	// (0x0002e5e7) main_cset6_slider_pane_g12

0x8583,	// (0x0002e5f3) main_cset6_slider_pane_g13_ParamLimits

0x8583,	// (0x0002e5f3) main_cset6_slider_pane_g13

0x858f,	// (0x0002e5ff) main_cset6_slider_pane_g14_ParamLimits

0x858f,	// (0x0002e5ff) main_cset6_slider_pane_g14

0x93ab,	// (0x0002f41b) main_cset6_slider_pane_g15_ParamLimits

0x93ab,	// (0x0002f41b) main_cset6_slider_pane_g15

0x85b3,	// (0x0002e623) main_cset6_slider_pane_g16_ParamLimits

0x85b3,	// (0x0002e623) main_cset6_slider_pane_g16

0x85bf,	// (0x0002e62f) main_cset6_slider_pane_g17_ParamLimits

0x85bf,	// (0x0002e62f) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x00035c1c) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x00035c1c) main_cset6_slider_pane_g

0xdb09,	// (0x00033b79) main_cset6_slider_pane_t1_ParamLimits

0xdb09,	// (0x00033b79) main_cset6_slider_pane_t1

0x93db,	// (0x0002f44b) main_cset6_slider_pane_t2_ParamLimits

0x93db,	// (0x0002f44b) main_cset6_slider_pane_t2

0x9406,	// (0x0002f476) main_cset6_slider_pane_t3_ParamLimits

0x9406,	// (0x0002f476) main_cset6_slider_pane_t3

0x9431,	// (0x0002f4a1) main_cset6_slider_pane_t4_ParamLimits

0x9431,	// (0x0002f4a1) main_cset6_slider_pane_t4

0x945c,	// (0x0002f4cc) main_cset6_slider_pane_t5_ParamLimits

0x945c,	// (0x0002f4cc) main_cset6_slider_pane_t5

0xdb4a,	// (0x00033bba) main_cset6_slider_pane_t7_ParamLimits

0xdb4a,	// (0x00033bba) main_cset6_slider_pane_t7

0x9487,	// (0x0002f4f7) main_cset6_slider_pane_t8_ParamLimits

0x9487,	// (0x0002f4f7) main_cset6_slider_pane_t8

0x94ab,	// (0x0002f51b) main_cset6_slider_pane_t9_ParamLimits

0x94ab,	// (0x0002f51b) main_cset6_slider_pane_t9

0x94cf,	// (0x0002f53f) main_cset6_slider_pane_t10_ParamLimits

0x94cf,	// (0x0002f53f) main_cset6_slider_pane_t10

0x94f3,	// (0x0002f563) main_cset6_slider_pane_t11_ParamLimits

0x94f3,	// (0x0002f563) main_cset6_slider_pane_t11

0xdb80,	// (0x00033bf0) main_cset6_slider_pane_t14_ParamLimits

0xdb80,	// (0x00033bf0) main_cset6_slider_pane_t14

0xdbb9,	// (0x00033c29) main_cset6_slider_pane_t15_ParamLimits

0xdbb9,	// (0x00033c29) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x00035c41) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x00035c41) main_cset6_slider_pane_t

0xdbf2,	// (0x00033c62) cset_slider_pane_g1_copy1

0xdbfb,	// (0x00033c6b) cset_slider_pane_g2_copy1

0xdc04,	// (0x00033c74) cset_slider_pane_g3_copy1

0x1db3,	// (0x00027e23) bg_popup_sub_pane_cp011_copy1

0xd335,	// (0x000333a5) main_cset_text_pane_g1_copy1

0xd33d,	// (0x000333ad) main_cset_text_pane_t1_copy1

0xd34b,	// (0x000333bb) main_cset_text_pane_t2_copy1

0xd359,	// (0x000333c9) main_cset_text_pane_t3_copy1

0xd367,	// (0x000333d7) main_cset_text_pane_t4_copy1

0xd375,	// (0x000333e5) main_cset_text_pane_t5_copy1

0xd383,	// (0x000333f3) main_cset_text_pane_t6_copy1

0xd391,	// (0x00033401) main_cset_text_pane_t7_copy1

0x9299,	// (0x0002f309) main_cset_text2_pane_t1_copy1

0x1db3,	// (0x00027e23) main_ncimui_pane

0x697d,	// (0x0002c9ed) popup_query_ncimui_window_ParamLimits

0x697d,	// (0x0002c9ed) popup_query_ncimui_window

0xc4c6,	// (0x00032536) field_cale_ev2_pane_g4_ParamLimits

0xc4c6,	// (0x00032536) field_cale_ev2_pane_g4

0x7f74,	// (0x0002dfe4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7f74,	// (0x0002dfe4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0003591f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0003591f) cell_video_dialer_keypad_pane_g

0x7f8c,	// (0x0002dffc) cell_video_dialer_keypad_pane_t1

0x1db3,	// (0x00027e23) bg_popup_window_pane_cp012

0x4a42,	// (0x0002aab2) heading_pane_cp06

0xdcfc,	// (0x00033d6c) ncim_query_content_pane

0x1db3,	// (0x00027e23) bg_popup_heading_pane_cp01

0xdd04,	// (0x00033d74) ncim_heading_pane_t1

0xdd12,	// (0x00033d82) ncim_indicator_popup_pane

0xdd24,	// (0x00033d94) ncim_query_button_pane

0xdd38,	// (0x00033da8) ncim_query_content_pane_t1

0xdd4a,	// (0x00033dba) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x00035c80) ncim_query_content_pane_t

0xdd84,	// (0x00033df4) ncim_query_list_pane

0xdd96,	// (0x00033e06) ncim_query_popup_pane

0xdd12,	// (0x00033d82) ncim_indicator_popup_pane_ParamLimits

0x9610,	// (0x0002f680) ncim_query_content_pane_g1_ParamLimits

0x9610,	// (0x0002f680) ncim_query_content_pane_g1

0xdd38,	// (0x00033da8) ncim_query_content_pane_t1_ParamLimits

0xdd4a,	// (0x00033dba) ncim_query_content_pane_t2_ParamLimits

0x961c,	// (0x0002f68c) ncim_query_content_pane_t3_ParamLimits

0x961c,	// (0x0002f68c) ncim_query_content_pane_t3

0x9644,	// (0x0002f6b4) ncim_query_content_pane_t4_ParamLimits

0x9644,	// (0x0002f6b4) ncim_query_content_pane_t4

0x966c,	// (0x0002f6dc) ncim_query_content_pane_t5_ParamLimits

0x966c,	// (0x0002f6dc) ncim_query_content_pane_t5

0xdd5c,	// (0x00033dcc) ncim_query_content_pane_t6_ParamLimits

0xdd5c,	// (0x00033dcc) ncim_query_content_pane_t6

0xfc10,	// (0x00035c80) ncim_query_content_pane_t_ParamLimits

0xdd84,	// (0x00033df4) ncim_query_list_pane_ParamLimits

0xdd96,	// (0x00033e06) ncim_query_popup_pane_ParamLimits

0xddaa,	// (0x00033e1a) wait_bar_pane_cp04

0x1db3,	// (0x00027e23) input_focus_pane_cp011

0xddb2,	// (0x00033e22) ncim_query_popup_pane_t1

0xddc0,	// (0x00033e30) ncim_list_query_list_pane_ParamLimits

0xddc0,	// (0x00033e30) ncim_list_query_list_pane

0x1db3,	// (0x00027e23) bg_button_pane_cp027

0xddcd,	// (0x00033e3d) ncim_query_button_pane_g1

0x1db3,	// (0x00027e23) list_highlight_pane_cp012

0xddd7,	// (0x00033e47) ncim_list_query_list_pane_g1

0xdddf,	// (0x00033e4f) ncim_list_query_list_pane_t1

0xceff,	// (0x00032f6f) cam4_indicators_pane_g3_ParamLimits

0xceff,	// (0x00032f6f) cam4_indicators_pane_g3

0x18a4,	// (0x00027914) vid4_indicators_pane_g5_ParamLimits

0x18a4,	// (0x00027914) vid4_indicators_pane_g5

0xd645,	// (0x000336b5) vid4_progress_pane_g5_ParamLimits

0xd645,	// (0x000336b5) vid4_progress_pane_g5

0x9529,	// (0x0002f599) main_ncimui_pane_g1

0x957f,	// (0x0002f5ef) ncimui_group_query_pane_ParamLimits

0x957f,	// (0x0002f5ef) ncimui_group_query_pane

0x95bb,	// (0x0002f62b) ncimui_list_pane_ParamLimits

0x95bb,	// (0x0002f62b) ncimui_list_pane

0x95dc,	// (0x0002f64c) ncimui_text_pane_ParamLimits

0x95dc,	// (0x0002f64c) ncimui_text_pane

0x9694,	// (0x0002f704) ncimui_text_pane_t1_ParamLimits

0x9694,	// (0x0002f704) ncimui_text_pane_t1

0xdded,	// (0x00033e5d) ncimui_list_single_graphic_pane_ParamLimits

0xdded,	// (0x00033e5d) ncimui_list_single_graphic_pane

0x96b2,	// (0x0002f722) ncimui_query_pane_ParamLimits

0x96b2,	// (0x0002f722) ncimui_query_pane

0x1db3,	// (0x00027e23) list_highlight_pane_cp013

0xddfd,	// (0x00033e6d) ncim_list_query_list_pane_t1_copy1

0xddd7,	// (0x00033e47) ncim_list_single_graphic_pane_g1

0xde0b,	// (0x00033e7b) ncim_query_button_pane_cp01

0xde17,	// (0x00033e87) ncim_query_entry_pane_ParamLimits

0xde17,	// (0x00033e87) ncim_query_entry_pane

0xde2a,	// (0x00033e9a) ncimui_query_pane_g1

0xde36,	// (0x00033ea6) ncimui_query_pane_t1_ParamLimits

0xde36,	// (0x00033ea6) ncimui_query_pane_t1

0x2025,	// (0x00028095) input_focus_pane_cp012

0xde4f,	// (0x00033ebf) ncim_query_entry_pane_t1

0x2a3a,	// (0x00028aaa) main_im_pane_ParamLimits

0x2025,	// (0x00028095) main_mobtv_pane_ParamLimits

0x2025,	// (0x00028095) main_mobtv_pane

0x93c3,	// (0x0002f433) main_cset6_slider_pane_g18_ParamLimits

0x93c3,	// (0x0002f433) main_cset6_slider_pane_g18

0x93cf,	// (0x0002f43f) main_cset6_slider_pane_g19_ParamLimits

0x93cf,	// (0x0002f43f) main_cset6_slider_pane_g19

0xde61,	// (0x00033ed1) bg_main_mobtv_pane_ParamLimits

0xde61,	// (0x00033ed1) bg_main_mobtv_pane

0x96c5,	// (0x0002f735) main_mobtv_info_pane

0x96ce,	// (0x0002f73e) main_mobtv_loading_pane_ParamLimits

0x96ce,	// (0x0002f73e) main_mobtv_loading_pane

0xde6f,	// (0x00033edf) main_mobtv_pg_channel_list_pane

0xde79,	// (0x00033ee9) main_mobtv_pg_hdr_pane

0x96db,	// (0x0002f74b) main_mobtv_programe_curr_pane_ParamLimits

0x96db,	// (0x0002f74b) main_mobtv_programe_curr_pane

0x96e8,	// (0x0002f758) main_mobtv_programe_next_pane_ParamLimits

0x96e8,	// (0x0002f758) main_mobtv_programe_next_pane

0xde82,	// (0x00033ef2) popup_mobtv_noti_window

0xc1f5,	// (0x00032265) main_tv_pg_hdr_pane_g1

0xde8a,	// (0x00033efa) main_tv_pg_hdr_pane_g2

0xde92,	// (0x00033f02) main_tv_pg_hdr_pane_g3

0xde9a,	// (0x00033f0a) main_tv_pg_hdr_pane_g4

0xdea2,	// (0x00033f12) main_tv_pg_hdr_pane_g5

0xdeac,	// (0x00033f1c) main_tv_pg_hdr_pane_g6

0xdeb6,	// (0x00033f26) main_tv_pg_hdr_pane_g7

0xdec0,	// (0x00033f30) main_tv_pg_hdr_pane_g8

0xdeca,	// (0x00033f3a) main_tv_pg_hdr_pane_g9

0xded4,	// (0x00033f44) main_tv_pg_hdr_pane_g10

0xdede,	// (0x00033f4e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00035c8d) main_tv_pg_hdr_pane_g

0xdee8,	// (0x00033f58) main_tv_pg_hdr_pane_t1

0xdef6,	// (0x00033f66) main_tv_pg_hdr_pane_t2

0xdf04,	// (0x00033f74) main_tv_pg_hdr_pane_t3

0xdf14,	// (0x00033f84) main_tv_pg_hdr_pane_t4

0xdf24,	// (0x00033f94) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00035ca4) main_tv_pg_hdr_pane_t

0xdf34,	// (0x00033fa4) single_mobtv_pg_channel_pane_ParamLimits

0xdf34,	// (0x00033fa4) single_mobtv_pg_channel_pane

0xdf46,	// (0x00033fb6) single_mobtv_pg_channel_table_pane

0xdf4f,	// (0x00033fbf) single_mobtv_pg_channel_thumb_pane

0xdf58,	// (0x00033fc8) single_tv_pg_channel_pane_g1

0xdf61,	// (0x00033fd1) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00035caf) single_tv_pg_channel_pane_g

0xc461,	// (0x000324d1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc461,	// (0x000324d1) bg_single_mobtv_pg_channel_thumb_pane

0xdf6a,	// (0x00033fda) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf6a,	// (0x00033fda) single_mobtv_pg_channel_thumb_pane_g1

0xdf78,	// (0x00033fe8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf78,	// (0x00033fe8) single_mobtv_pg_channel_thumb_pane_g2

0xdf84,	// (0x00033ff4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf84,	// (0x00033ff4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00035cb4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00035cb4) single_mobtv_pg_channel_thumb_pane_g

0xdf90,	// (0x00034000) single_mobtv_pg_channel_thumb_pane_t1

0xdf9e,	// (0x0003400e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00035cbb) single_mobtv_pg_channel_thumb_pane_t

0xc1f5,	// (0x00032265) bg_single_mobtv_pg_channel_table_pane_g1

0xc1f5,	// (0x00032265) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0003576b) bg_single_mobtv_pg_channel_table_pane_g

0xdfac,	// (0x0003401c) single_mobtv_pg_channel_table_pane_t1

0xdfba,	// (0x0003402a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x00035cc0) single_mobtv_pg_channel_table_pane_t

0x96fd,	// (0x0002f76d) main_mobtv_info_pane_g1_ParamLimits

0x96fd,	// (0x0002f76d) main_mobtv_info_pane_g1

0x971b,	// (0x0002f78b) main_mobtv_info_pane_t1_ParamLimits

0x971b,	// (0x0002f78b) main_mobtv_info_pane_t1

0x9793,	// (0x0002f803) main_mobtv_info_pane_t2_ParamLimits

0x9793,	// (0x0002f803) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00035cca) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00035cca) main_mobtv_info_pane_t

0x9822,	// (0x0002f892) wait_bar_pane_cp05

0x9834,	// (0x0002f8a4) main_mobtv_loading_pane_g1_ParamLimits

0x9834,	// (0x0002f8a4) main_mobtv_loading_pane_g1

0x9847,	// (0x0002f8b7) main_mobtv_loading_pane_g2_ParamLimits

0x9847,	// (0x0002f8b7) main_mobtv_loading_pane_g2

0x9853,	// (0x0002f8c3) main_mobtv_loading_pane_g3_ParamLimits

0x9853,	// (0x0002f8c3) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x00035cd1) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x00035cd1) main_mobtv_loading_pane_g

0xdfc8,	// (0x00034038) main_mobtv_loading_pane_t1_ParamLimits

0xdfc8,	// (0x00034038) main_mobtv_loading_pane_t1

0xdfe0,	// (0x00034050) main_mobtv_loading_pane_t2_ParamLimits

0xdfe0,	// (0x00034050) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x00035cd8) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x00035cd8) main_mobtv_loading_pane_t

0x9866,	// (0x0002f8d6) wait_bar_pane_cp06_ParamLimits

0x9866,	// (0x0002f8d6) wait_bar_pane_cp06

0xe004,	// (0x00034074) main_mobtv_programe_curr_pane_t1

0xe012,	// (0x00034082) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x00035cdd) main_mobtv_programe_curr_pane_t

0xe020,	// (0x00034090) main_mobtv_programe_next_pane_t1

0xe02e,	// (0x0003409e) main_mobtv_programe_next_pane_t2

0xe03c,	// (0x000340ac) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x00035ce2) main_mobtv_programe_next_pane_t

0x1db3,	// (0x00027e23) bg_popup_mobtv_noti_window_pane

0xe04a,	// (0x000340ba) popup_mobtv_noti_window_g1

0xe052,	// (0x000340c2) popup_mobtv_noti_window_t1

0xe060,	// (0x000340d0) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x00035ce9) popup_mobtv_noti_window_t

0xc1f5,	// (0x00032265) bg_popup_mobtv_noti_window_pane_g1

0x1db3,	// (0x00027e23) sc_clock_pane

0x1db3,	// (0x00027e23) main_fs_bigclock_pane

0x901e,	// (0x0002f08e) blid2_tripm_pane_t4_ParamLimits

0x901e,	// (0x0002f08e) blid2_tripm_pane_t4

0x9875,	// (0x0002f8e5) sc_clock_pane_g1_ParamLimits

0x9875,	// (0x0002f8e5) sc_clock_pane_g1

0x9887,	// (0x0002f8f7) sc_clock_pane_t1_ParamLimits

0x9887,	// (0x0002f8f7) sc_clock_pane_t1

0x98a9,	// (0x0002f919) sc_clock_pane_t2_ParamLimits

0x98a9,	// (0x0002f919) sc_clock_pane_t2

0x98c1,	// (0x0002f931) sc_clock_pane_t3_ParamLimits

0x98c1,	// (0x0002f931) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x00035cee) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x00035cee) sc_clock_pane_t

0xa6c7,	// (0x00030737) main_fs_bigclock_indicator_pane_ParamLimits

0xa6c7,	// (0x00030737) main_fs_bigclock_indicator_pane

0xc431,	// (0x000324a1) main_fs_bigclock_pane_g1_ParamLimits

0xc431,	// (0x000324a1) main_fs_bigclock_pane_g1

0xa6d3,	// (0x00030743) main_fs_bigclock_pane_t1_ParamLimits

0xa6d3,	// (0x00030743) main_fs_bigclock_pane_t1

0xa6e5,	// (0x00030755) main_fs_bigclock_pane_t2_ParamLimits

0xa6e5,	// (0x00030755) main_fs_bigclock_pane_t2

0xa6f9,	// (0x00030769) main_fs_bigclock_pane_t3_ParamLimits

0xa6f9,	// (0x00030769) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00035eed) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00035eed) main_fs_bigclock_pane_t

0xec9b,	// (0x00034d0b) main_fs_bigclock_indicator_pane_g1

0xdd2c,	// (0x00033d9c) ncim_query_content_pane_g2_ParamLimits

0xdd2c,	// (0x00033d9c) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00035c7b) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00035c7b) ncim_query_content_pane_g

0x98da,	// (0x0002f94a) sc_clock_pane_t4_ParamLimits

0x98da,	// (0x0002f94a) sc_clock_pane_t4

0x2025,	// (0x00028095) main_radioblah_pane

0xce25,	// (0x00032e95) cell_call4_button_pane_t1_copy1_ParamLimits

0xce25,	// (0x00032e95) cell_call4_button_pane_t1_copy1

0x9531,	// (0x0002f5a1) main_ncimui_pane_t1_ParamLimits

0x9531,	// (0x0002f5a1) main_ncimui_pane_t1

0x954b,	// (0x0002f5bb) main_ncimui_pane_t2_ParamLimits

0x954b,	// (0x0002f5bb) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x00035c74) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x00035c74) main_ncimui_pane_t

0xe1a6,	// (0x00034216) main_radioblah_anim_pane_ParamLimits

0xe1a6,	// (0x00034216) main_radioblah_anim_pane

0xe1b7,	// (0x00034227) main_radioblah_info_pane_ParamLimits

0xe1b7,	// (0x00034227) main_radioblah_info_pane

0xe1cb,	// (0x0003423b) main_radioblah_pane_t1_ParamLimits

0xe1cb,	// (0x0003423b) main_radioblah_pane_t1

0xe1e7,	// (0x00034257) main_radioblah_pane_t2_ParamLimits

0xe1e7,	// (0x00034257) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x00035d0f) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x00035d0f) main_radioblah_pane_t

0x9988,	// (0x0002f9f8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9988,	// (0x0002f9f8) main_radioblah_rocker_ctrl_pane

0xe22f,	// (0x0003429f) main_radioblah_info_pane_t1_ParamLimits

0xe22f,	// (0x0003429f) main_radioblah_info_pane_t1

0x99e0,	// (0x0002fa50) main_radioblah_info_pane_t2_ParamLimits

0x99e0,	// (0x0002fa50) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x00035d18) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x00035d18) main_radioblah_info_pane_t

0xc1f5,	// (0x00032265) main_radioblah_rocker_ctrl_pane_g1

0x9a90,	// (0x0002fb00) main_radioblah_rocker_ctrl_pane_g2

0x9a98,	// (0x0002fb08) main_radioblah_rocker_ctrl_pane_g3

0x9aa0,	// (0x0002fb10) main_radioblah_rocker_ctrl_pane_g4

0x9aa8,	// (0x0002fb18) main_radioblah_rocker_ctrl_pane_g5

0x9ab0,	// (0x0002fb20) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x00035d21) main_radioblah_rocker_ctrl_pane_g

0x9299,	// (0x0002f309) main_cset_text2_pane_t1_copy1_ParamLimits

0xceaf,	// (0x00032f1f) cam4_image_uncrop_qvga_pane

0xcf28,	// (0x00032f98) vid4_image_uncrop_qcif_pane

0xd895,	// (0x00033905) cam6_image_uncrop_qvga_pane_ParamLimits

0xd895,	// (0x00033905) cam6_image_uncrop_qvga_pane

0xd96b,	// (0x000339db) vid6_image_uncrop_qcif_pane_ParamLimits

0xd96b,	// (0x000339db) vid6_image_uncrop_qcif_pane

0x1db3,	// (0x00027e23) bg_popup_preview_window_pane_cp03

0xdcde,	// (0x00033d4e) list_cset_text2_pane

0xdce6,	// (0x00033d56) main_cset6_text2_pane_g1

0xdcee,	// (0x00033d5e) main_cset6_text2_pane_t1

0x9ab8,	// (0x0002fb28) list_cset_text2_pane_t1_ParamLimits

0x9ab8,	// (0x0002fb28) list_cset_text2_pane_t1

0x2025,	// (0x00028095) main_radioblah_pane_ParamLimits

0x980e,	// (0x0002f87e) main_mobtv_info_pane_t3_ParamLimits

0x980e,	// (0x0002f87e) main_mobtv_info_pane_t3

0x9976,	// (0x0002f9e6) main_radioblah_pane_g1

0x99b0,	// (0x0002fa20) main_radioblah_info_pane_g1

0x9a35,	// (0x0002faa5) main_radioblah_info_pane_t3_ParamLimits

0x9a35,	// (0x0002faa5) main_radioblah_info_pane_t3

0x4428,	// (0x0002a498) highlight_cell_cale_month_pane_ParamLimits

0x4428,	// (0x0002a498) highlight_cell_cale_month_pane

0x1db3,	// (0x00027e23) main_phob_fisheye_pane

0xc555,	// (0x000325c5) scroll_pane_cp0031_ParamLimits

0xc555,	// (0x000325c5) scroll_pane_cp0031

0xda79,	// (0x00033ae9) wait_bar_pane_cp08_ParamLimits

0x931e,	// (0x0002f38e) cset_list_set_pane_copy1_ParamLimits

0xe269,	// (0x000342d9) highlight_cell_cale_month_pane_g1

0x9ad1,	// (0x0002fb41) highlight_cell_cale_month_pane_t1

0xd605,	// (0x00033675) list_gen_pane_cp01

0xd10d,	// (0x0003317d) scroll_pane_01

0x9adf,	// (0x0002fb4f) list_single_double_fisheye_pane

0x9ae8,	// (0x0002fb58) list_double_fisheye_pane_g1_ParamLimits

0x9ae8,	// (0x0002fb58) list_double_fisheye_pane_g1

0x9af4,	// (0x0002fb64) list_double_fisheye_pane_g2_ParamLimits

0x9af4,	// (0x0002fb64) list_double_fisheye_pane_g2

0x9b08,	// (0x0002fb78) list_double_fisheye_pane_g3_ParamLimits

0x9b08,	// (0x0002fb78) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x00035d2e) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x00035d2e) list_double_fisheye_pane_g

0x9b31,	// (0x0002fba1) list_double_fisheye_pane_t1_ParamLimits

0x9b31,	// (0x0002fba1) list_double_fisheye_pane_t1

0x9b4c,	// (0x0002fbbc) list_double_fisheye_pane_t2_ParamLimits

0x9b4c,	// (0x0002fbbc) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x00035d39) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x00035d39) list_double_fisheye_pane_t

0x1db3,	// (0x00027e23) main_call5_pane

0x9905,	// (0x0002f975) sc_swipe_pane_ParamLimits

0x9905,	// (0x0002f975) sc_swipe_pane

0x9b81,	// (0x0002fbf1) call5_image_pane_ParamLimits

0x9b81,	// (0x0002fbf1) call5_image_pane

0x9b9e,	// (0x0002fc0e) call5_swipe_1_pane_ParamLimits

0x9b9e,	// (0x0002fc0e) call5_swipe_1_pane

0x9bb1,	// (0x0002fc21) call5_swipe_2_pane_ParamLimits

0x9bb1,	// (0x0002fc21) call5_swipe_2_pane

0x9bdc,	// (0x0002fc4c) popup_call5_audio_first_window_ParamLimits

0x9bdc,	// (0x0002fc4c) popup_call5_audio_first_window

0xc461,	// (0x000324d1) call5_swipe_1_pane_g1_ParamLimits

0xc461,	// (0x000324d1) call5_swipe_1_pane_g1

0xe271,	// (0x000342e1) call5_swipe_1_pane_g2_ParamLimits

0xe271,	// (0x000342e1) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00035d3e) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00035d3e) call5_swipe_1_pane_g

0xe27d,	// (0x000342ed) call5_swipe_1_pane_t1_ParamLimits

0xe27d,	// (0x000342ed) call5_swipe_1_pane_t1

0xc461,	// (0x000324d1) call5_swipe_2_pane_g1_ParamLimits

0xc461,	// (0x000324d1) call5_swipe_2_pane_g1

0xe292,	// (0x00034302) call5_swipe_2_pane_g2_ParamLimits

0xe292,	// (0x00034302) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x00035d43) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x00035d43) call5_swipe_2_pane_g

0xe29e,	// (0x0003430e) call5_swipe_2_pane_t1_ParamLimits

0xe29e,	// (0x0003430e) call5_swipe_2_pane_t1

0xe2b3,	// (0x00034323) sc_swipe_pane_g1_ParamLimits

0xe2b3,	// (0x00034323) sc_swipe_pane_g1

0xe2c0,	// (0x00034330) sc_swipe_pane_g2_ParamLimits

0xe2c0,	// (0x00034330) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x00035d48) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x00035d48) sc_swipe_pane_g

0xe2cc,	// (0x0003433c) sc_swipe_pane_t1_ParamLimits

0xe2cc,	// (0x0003433c) sc_swipe_pane_t1

0x1db3,	// (0x00027e23) main_cmail_launcher_pane

0x9bed,	// (0x0002fc5d) aid_size_cell_cmail_l_ParamLimits

0x9bed,	// (0x0002fc5d) aid_size_cell_cmail_l

0x9c07,	// (0x0002fc77) grid_cmail_l_pane_ParamLimits

0x9c07,	// (0x0002fc77) grid_cmail_l_pane

0x9c22,	// (0x0002fc92) cell_cmail_l_pane_ParamLimits

0x9c22,	// (0x0002fc92) cell_cmail_l_pane

0x9c48,	// (0x0002fcb8) cell_cmail_l_pane_g1_ParamLimits

0x9c48,	// (0x0002fcb8) cell_cmail_l_pane_g1

0x9c54,	// (0x0002fcc4) cell_cmail_l_pane_t1_ParamLimits

0x9c54,	// (0x0002fcc4) cell_cmail_l_pane_t1

0xe2e1,	// (0x00034351) cell_cmail_l_pane_t2_ParamLimits

0xe2e1,	// (0x00034351) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00035d4d) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00035d4d) cell_cmail_l_pane_t

0x2025,	// (0x00028095) grid_highlight_pane_cp018_ParamLimits

0x2025,	// (0x00028095) grid_highlight_pane_cp018

0x1edf,	// (0x00027f4f) main2_pane_ParamLimits

0x1edf,	// (0x00027f4f) main2_pane

0x2bbc,	// (0x00028c2c) popup_sp_fs_action_menu_bg_pane_g1

0x2bc4,	// (0x00028c34) popup_sp_fs_action_menu_bg_pane_g2

0x2bcc,	// (0x00028c3c) popup_sp_fs_action_menu_bg_pane_g3

0x2bd4,	// (0x00028c44) popup_sp_fs_action_menu_bg_pane_g4

0x2bdc,	// (0x00028c4c) popup_sp_fs_action_menu_bg_pane_g5

0x2be4,	// (0x00028c54) popup_sp_fs_action_menu_bg_pane_g6

0x2bec,	// (0x00028c5c) popup_sp_fs_action_menu_bg_pane_g7

0x2bf4,	// (0x00028c64) popup_sp_fs_action_menu_bg_pane_g8

0x2bfc,	// (0x00028c6c) popup_sp_fs_action_menu_bg_pane_g9

0x2c04,	// (0x00028c74) popup_sp_fs_action_menu_bg_pane_g10

0x2c04,	// (0x00028c74) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00035217) popup_sp_fs_action_menu_bg_pane_g

0x33cf,	// (0x0002943f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x2_t3_g3_g1

0x33db,	// (0x0002944b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x33db,	// (0x0002944b) list_medium_line_x2_t3_g3_g2

0x33e7,	// (0x00029457) list_medium_line_x2_t3_g3_g3_ParamLimits

0x33e7,	// (0x00029457) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x000352c7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x000352c7) list_medium_line_x2_t3_g3_g

0x33f3,	// (0x00029463) list_medium_line_x2_t3_g3_t1_ParamLimits

0x33f3,	// (0x00029463) list_medium_line_x2_t3_g3_t1

0x3408,	// (0x00029478) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3408,	// (0x00029478) list_medium_line_x2_t3_g3_t2

0x341c,	// (0x0002948c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x341c,	// (0x0002948c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x000352ce) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x000352ce) list_medium_line_x2_t3_g3_t

0x33cf,	// (0x0002943f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x2_t3_g2_g1

0x33e7,	// (0x00029457) list_medium_line_x2_t3_g2_g2_ParamLimits

0x33e7,	// (0x00029457) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x000352d5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x000352d5) list_medium_line_x2_t3_g2_g

0x3431,	// (0x000294a1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3431,	// (0x000294a1) list_medium_line_x2_t3_g2_t1

0x3447,	// (0x000294b7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3447,	// (0x000294b7) list_medium_line_x2_t3_g2_t2

0x341c,	// (0x0002948c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x341c,	// (0x0002948c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x000352da) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x000352da) list_medium_line_x2_t3_g2_t

0x33cf,	// (0x0002943f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x2_t4_g4_g1

0x3459,	// (0x000294c9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3459,	// (0x000294c9) list_medium_line_x2_t4_g4_g2

0x33db,	// (0x0002944b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x33db,	// (0x0002944b) list_medium_line_x2_t4_g4_g3

0x3465,	// (0x000294d5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3465,	// (0x000294d5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x000352e1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x000352e1) list_medium_line_x2_t4_g4_g

0x3471,	// (0x000294e1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3471,	// (0x000294e1) list_medium_line_x2_t4_g4_t1

0x3488,	// (0x000294f8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3488,	// (0x000294f8) list_medium_line_x2_t4_g4_t2

0x349d,	// (0x0002950d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x349d,	// (0x0002950d) list_medium_line_x2_t4_g4_t3

0x34af,	// (0x0002951f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x34af,	// (0x0002951f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x000352ea) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x000352ea) list_medium_line_x2_t4_g4_t

0x33cf,	// (0x0002943f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x2_t2_g4_g1

0x3459,	// (0x000294c9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3459,	// (0x000294c9) list_medium_line_x2_t2_g4_g2

0x33db,	// (0x0002944b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x33db,	// (0x0002944b) list_medium_line_x2_t2_g4_g3

0x33e7,	// (0x00029457) list_medium_line_x2_t2_g4_g4_ParamLimits

0x33e7,	// (0x00029457) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00035351) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00035351) list_medium_line_x2_t2_g4_g

0x4446,	// (0x0002a4b6) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4446,	// (0x0002a4b6) list_medium_line_x2_t2_g4_t1

0x341c,	// (0x0002948c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x341c,	// (0x0002948c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0003535a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0003535a) list_medium_line_x2_t2_g4_t

0x33cf,	// (0x0002943f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x2_t2_g3_g1

0x33db,	// (0x0002944b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x33db,	// (0x0002944b) list_medium_line_x2_t2_g3_g2

0x33e7,	// (0x00029457) list_medium_line_x2_t2_g3_g3_ParamLimits

0x33e7,	// (0x00029457) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x000352c7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x000352c7) list_medium_line_x2_t2_g3_g

0x445b,	// (0x0002a4cb) list_medium_line_x2_t2_g3_t1_ParamLimits

0x445b,	// (0x0002a4cb) list_medium_line_x2_t2_g3_t1

0x341c,	// (0x0002948c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x341c,	// (0x0002948c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0003535f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0003535f) list_medium_line_x2_t2_g3_t

0x479d,	// (0x0002a80d) main_sp_fs_list_pane_ParamLimits

0x479d,	// (0x0002a80d) main_sp_fs_list_pane

0x47a9,	// (0x0002a819) sp_fs_scroll_pane_ParamLimits

0x47a9,	// (0x0002a819) sp_fs_scroll_pane

0x47b5,	// (0x0002a825) list_medium_line_x2_t3_t1

0x47c5,	// (0x0002a835) list_medium_line_x2_t3_t2

0x47d3,	// (0x0002a843) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x000353aa) list_medium_line_x2_t3_t

0x47e1,	// (0x0002a851) list_medium_line_x3_t4_t1

0x47f1,	// (0x0002a861) list_medium_line_x3_t4_t2

0x47ff,	// (0x0002a86f) list_medium_line_x3_t4_t3

0x47d3,	// (0x0002a843) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x000353b1) list_medium_line_x3_t4_t

0x480d,	// (0x0002a87d) list_medium_line_x4_t5_t1

0x481d,	// (0x0002a88d) list_medium_line_x4_t5_t2

0x47ff,	// (0x0002a86f) list_medium_line_x4_t5_t3

0x482b,	// (0x0002a89b) list_medium_line_x4_t5_t4

0x47d3,	// (0x0002a843) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x000353ba) list_medium_line_x4_t5_t

0x33cf,	// (0x0002943f) list_medium_line_t4_g4_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_t4_g4_g1

0x3465,	// (0x000294d5) list_medium_line_t4_g4_g2_ParamLimits

0x3465,	// (0x000294d5) list_medium_line_t4_g4_g2

0x4839,	// (0x0002a8a9) list_medium_line_t4_g4_g3_ParamLimits

0x4839,	// (0x0002a8a9) list_medium_line_t4_g4_g3

0x33e7,	// (0x00029457) list_medium_line_t4_g4_g4_ParamLimits

0x33e7,	// (0x00029457) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x000353c5) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x000353c5) list_medium_line_t4_g4_g

0x4845,	// (0x0002a8b5) list_medium_line_t4_g4_t1_ParamLimits

0x4845,	// (0x0002a8b5) list_medium_line_t4_g4_t1

0x485a,	// (0x0002a8ca) list_medium_line_t4_g4_t2_ParamLimits

0x485a,	// (0x0002a8ca) list_medium_line_t4_g4_t2

0x486f,	// (0x0002a8df) list_medium_line_t4_g4_t3_ParamLimits

0x486f,	// (0x0002a8df) list_medium_line_t4_g4_t3

0x341c,	// (0x0002948c) list_medium_line_t4_g4_t4_ParamLimits

0x341c,	// (0x0002948c) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x000353ce) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x000353ce) list_medium_line_t4_g4_t

0x4bb9,	// (0x0002ac29) chi_dic_find_pane_g1

0x674f,	// (0x0002c7bf) main_tport_pane

0xd282,	// (0x000332f2) list_medium_line_plain_t1

0xd2d4,	// (0x00033344) list_medium_line_t2_g2_g1_ParamLimits

0xd2d4,	// (0x00033344) list_medium_line_t2_g2_g1

0xd2e0,	// (0x00033350) list_medium_line_t2_g2_g2_ParamLimits

0xd2e0,	// (0x00033350) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00035a8a) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00035a8a) list_medium_line_t2_g2_g

0x8869,	// (0x0002e8d9) list_medium_line_t2_g2_t1_ParamLimits

0x8869,	// (0x0002e8d9) list_medium_line_t2_g2_t1

0x8883,	// (0x0002e8f3) list_medium_line_t2_g2_t2_ParamLimits

0x8883,	// (0x0002e8f3) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00035a8f) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00035a8f) list_medium_line_t2_g2_t

0xd6a6,	// (0x00033716) aid_sp_fs_list_icon_a_sm

0xd6ae,	// (0x0003371e) aid_sp_fs_list_icon_d

0xd6b6,	// (0x00033726) aid_sp_fs_text_primary

0xd6bf,	// (0x0003372f) aid_sp_fs_text_secondary

0xd6c8,	// (0x00033738) list_medium_line

0xd6c8,	// (0x00033738) list_medium_line_g2

0xd6c8,	// (0x00033738) list_medium_line_g3

0xd6c8,	// (0x00033738) list_medium_line_plain

0xd6c8,	// (0x00033738) list_medium_line_plain_t2

0xd6c8,	// (0x00033738) list_medium_line_plain_t3

0xd6c8,	// (0x00033738) list_medium_line_right_icon

0xd6c8,	// (0x00033738) list_medium_line_right_iconx2

0xd6c8,	// (0x00033738) list_medium_line_t2

0xd6c8,	// (0x00033738) list_medium_line_t2_g2

0xd6c8,	// (0x00033738) list_medium_line_t2_g3

0xd6c8,	// (0x00033738) list_medium_line_t2_right_icon

0xd6c8,	// (0x00033738) list_medium_line_t2_right_iconx2

0xd6c8,	// (0x00033738) list_medium_line_t3

0xd6c8,	// (0x00033738) list_medium_line_t3_g2

0xd6c8,	// (0x00033738) list_medium_line_t3_g3

0xd6c8,	// (0x00033738) list_medium_line_t3_right_iconx2

0xd6d1,	// (0x00033741) list_medium_line_t4_g4

0xd6da,	// (0x0003374a) list_medium_line_x2

0xd6da,	// (0x0003374a) list_medium_line_x2_t2_g2

0xd6da,	// (0x0003374a) list_medium_line_x2_t2_g3

0xd6da,	// (0x0003374a) list_medium_line_x2_t2_g4

0xd6da,	// (0x0003374a) list_medium_line_x2_t3

0xd6da,	// (0x0003374a) list_medium_line_x2_t3_g2

0xd6da,	// (0x0003374a) list_medium_line_x2_t3_g3

0xd6da,	// (0x0003374a) list_medium_line_x2_t3_g4

0xd6da,	// (0x0003374a) list_medium_line_x2_t4_g2

0xd6da,	// (0x0003374a) list_medium_line_x2_t4_g4

0xd6e3,	// (0x00033753) list_medium_line_x3

0xd6e3,	// (0x00033753) list_medium_line_x3_t4

0xd6e3,	// (0x00033753) list_medium_line_x3_t4_g4

0xd6d1,	// (0x00033741) list_medium_line_x4_t4

0xd6d1,	// (0x00033741) list_medium_line_x4_t4_g7

0xd6d1,	// (0x00033741) list_medium_line_x4_t5

0xd6ec,	// (0x0003375c) list_single_fs_dyc_pane_ParamLimits

0xd6ec,	// (0x0003375c) list_single_fs_dyc_pane

0x33cf,	// (0x0002943f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x4_t4_g7_g1

0xdc0d,	// (0x00033c7d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc0d,	// (0x00033c7d) list_medium_line_x4_t4_g7_g2

0xdc19,	// (0x00033c89) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc19,	// (0x00033c89) list_medium_line_x4_t4_g7_g3

0xdc28,	// (0x00033c98) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc28,	// (0x00033c98) list_medium_line_x4_t4_g7_g4

0xdc34,	// (0x00033ca4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc34,	// (0x00033ca4) list_medium_line_x4_t4_g7_g5

0xdc43,	// (0x00033cb3) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc43,	// (0x00033cb3) list_medium_line_x4_t4_g7_g6

0xdc52,	// (0x00033cc2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc52,	// (0x00033cc2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x00035c5a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x00035c5a) list_medium_line_x4_t4_g7_g

0xdc5e,	// (0x00033cce) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc5e,	// (0x00033cce) list_medium_line_x4_t4_g7_t1

0xdc73,	// (0x00033ce3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc73,	// (0x00033ce3) list_medium_line_x4_t4_g7_t2

0xdc88,	// (0x00033cf8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc88,	// (0x00033cf8) list_medium_line_x4_t4_g7_t3

0xdc9d,	// (0x00033d0d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc9d,	// (0x00033d0d) list_medium_line_x4_t4_g7_t4

0xdcaf,	// (0x00033d1f) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdcaf,	// (0x00033d1f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00035c69) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00035c69) list_medium_line_x4_t4_g7_t

0xdcc1,	// (0x00033d31) list_single_dyc_row_pane_ParamLimits

0xdcc1,	// (0x00033d31) list_single_dyc_row_pane

0x9b6e,	// (0x0002fbde) call5_gesture_pane_ParamLimits

0x9b6e,	// (0x0002fbde) call5_gesture_pane

0x9bc4,	// (0x0002fc34) call5_windows_pane_ParamLimits

0x9bc4,	// (0x0002fc34) call5_windows_pane

0x9c6a,	// (0x0002fcda) call5_swipe_1_pane_cp_ParamLimits

0x9c6a,	// (0x0002fcda) call5_swipe_1_pane_cp

0x9c76,	// (0x0002fce6) call5_swipe_2_pane_cp_ParamLimits

0x9c76,	// (0x0002fce6) call5_swipe_2_pane_cp

0x502d,	// (0x0002b09d) call5_image_pane_cp

0x9c82,	// (0x0002fcf2) popup_call5_audio_first_window_cp_ParamLimits

0x9c82,	// (0x0002fcf2) popup_call5_audio_first_window_cp

0xe2b3,	// (0x00034323) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2b3,	// (0x00034323) call5_swipe_1_pane_g1_cp

0xe2f3,	// (0x00034363) call5_swipe_1_pane_g2_cp

0xe2cc,	// (0x0003433c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2cc,	// (0x0003433c) call5_swipe_1_pane_t1_cp

0xe2b3,	// (0x00034323) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2b3,	// (0x00034323) call5_swipe_2_pane_g1_cp

0xe2fb,	// (0x0003436b) call5_swipe_2_pane_g2_cp

0xe303,	// (0x00034373) call5_swipe_2_pane_t1_cp_ParamLimits

0xe303,	// (0x00034373) call5_swipe_2_pane_t1_cp

0x2025,	// (0x00028095) main_sp_fs_email_pane

0xe318,	// (0x00034388) main_sp_fs_listscroll_pane_te

0xe321,	// (0x00034391) popup_sp_fs_action_menu_pane_ParamLimits

0xe321,	// (0x00034391) popup_sp_fs_action_menu_pane

0xc1f5,	// (0x00032265) bg_sp_fs_ctrlbar_pane_g1

0xe365,	// (0x000343d5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe36e,	// (0x000343de) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe377,	// (0x000343e7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc1f5,	// (0x00032265) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x00035d52) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbfda,	// (0x0003204a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbfda,	// (0x0003204a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe380,	// (0x000343f0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe380,	// (0x000343f0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe38c,	// (0x000343fc) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe38c,	// (0x000343fc) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00035d5b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00035d5b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe398,	// (0x00034408) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe398,	// (0x00034408) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe3b2,	// (0x00034422) list_medium_line_t2_right_icon_g1

0x9c90,	// (0x0002fd00) list_medium_line_t2_right_icon_t1

0x9ca0,	// (0x0002fd10) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00035d60) list_medium_line_t2_right_icon_t

0xbcef,	// (0x00031d5f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbcef,	// (0x00031d5f) bg_sp_fs_ctrlbar_pane

0x9cfd,	// (0x0002fd6d) main_sp_fs_ctrlbar_button_pane_cp01

0x9d07,	// (0x0002fd77) main_sp_fs_ctrlbar_ddmenu_pane

0xe3f2,	// (0x00034462) main_sp_fs_ctrlbar_pane_g1

0xe3fe,	// (0x0003446e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x00035d65) main_sp_fs_ctrlbar_pane_g

0xe40a,	// (0x0003447a) main_sp_fs_ctrlbar_pane_t1

0x9d11,	// (0x0002fd81) main_sp_fs_ctrlbar_pane

0x9d35,	// (0x0002fda5) main_sp_fs_listscroll_pane_te_cp01

0x9d55,	// (0x0002fdc5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9d55,	// (0x0002fdc5) popup_sp_fs_action_menu_pane_cp01

0x2025,	// (0x00028095) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2025,	// (0x00028095) bg_sp_fs_highlight_list_pane_cp01

0xe42f,	// (0x0003449f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe42f,	// (0x0003449f) sp_fs_action_menu_list_gene_pane_g1

0xe43e,	// (0x000344ae) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe43e,	// (0x000344ae) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00035d6f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00035d6f) sp_fs_action_menu_list_gene_pane_g

0xe44b,	// (0x000344bb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe44b,	// (0x000344bb) sp_fs_action_menu_list_gene_pane_t1

0xe463,	// (0x000344d3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe463,	// (0x000344d3) sp_fs_action_menu_list_gene_pane

0xe484,	// (0x000344f4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe484,	// (0x000344f4) popup_sp_fs_action_menu_bg_pane

0xe492,	// (0x00034502) sp_fs_action_menu_list_pane_ParamLimits

0xe492,	// (0x00034502) sp_fs_action_menu_list_pane

0xe4b4,	// (0x00034524) sp_fs_scroll_pane_cp01_ParamLimits

0xe4b4,	// (0x00034524) sp_fs_scroll_pane_cp01

0x9d6f,	// (0x0002fddf) list_medium_line_plain_t2_t1

0x9d7f,	// (0x0002fdef) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00035d74) list_medium_line_plain_t2_t

0x9d8f,	// (0x0002fdff) list_medium_line_plain_t3_t1

0x9d9f,	// (0x0002fe0f) list_medium_line_plain_t3_t2

0x9dad,	// (0x0002fe1d) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00035d79) list_medium_line_plain_t3_t

0x33cf,	// (0x0002943f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x2_t2_g2_g1

0x33e7,	// (0x00029457) list_medium_line_x2_t2_g2_g2_ParamLimits

0x33e7,	// (0x00029457) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x000352d5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x000352d5) list_medium_line_x2_t2_g2_g

0x4845,	// (0x0002a8b5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4845,	// (0x0002a8b5) list_medium_line_x2_t2_g2_t1

0x341c,	// (0x0002948c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x341c,	// (0x0002948c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00035d80) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00035d80) list_medium_line_x2_t2_g2_t

0x33cf,	// (0x0002943f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x2_t4_g2_g1

0x33e7,	// (0x00029457) list_medium_line_x2_t4_g2_g2_ParamLimits

0x33e7,	// (0x00029457) list_medium_line_x2_t4_g2_g2

0x0001,

0xf265,	// (0x000352d5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf265,	// (0x000352d5) list_medium_line_x2_t4_g2_g

0x9dbb,	// (0x0002fe2b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9dbb,	// (0x0002fe2b) list_medium_line_x2_t4_g2_t1

0x9dd5,	// (0x0002fe45) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9dd5,	// (0x0002fe45) list_medium_line_x2_t4_g2_t2

0x9dea,	// (0x0002fe5a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9dea,	// (0x0002fe5a) list_medium_line_x2_t4_g2_t3

0x341c,	// (0x0002948c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x341c,	// (0x0002948c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00035d85) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00035d85) list_medium_line_x2_t4_g2_t

0xe4da,	// (0x0003454a) list_medium_line_t3_right_iconx2_g1

0xe3b2,	// (0x00034422) list_medium_line_t3_right_iconx2_g2

0x9dff,	// (0x0002fe6f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00035d8e) list_medium_line_t3_right_iconx2_g

0x9e09,	// (0x0002fe79) list_medium_line_t3_right_iconx2_t1

0x9e19,	// (0x0002fe89) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00035d95) list_medium_line_t3_right_iconx2_t

0x33cf,	// (0x0002943f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x3_t4_g4_g1

0x33db,	// (0x0002944b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x33db,	// (0x0002944b) list_medium_line_x3_t4_g4_g2

0x3465,	// (0x000294d5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3465,	// (0x000294d5) list_medium_line_x3_t4_g4_g3

0xe4e2,	// (0x00034552) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe4e2,	// (0x00034552) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00035d9a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00035d9a) list_medium_line_x3_t4_g4_g

0x9e27,	// (0x0002fe97) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9e27,	// (0x0002fe97) list_medium_line_x3_t4_g4_t1

0x9e3e,	// (0x0002feae) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9e3e,	// (0x0002feae) list_medium_line_x3_t4_g4_t2

0x485a,	// (0x0002a8ca) list_medium_line_x3_t4_g4_t3_ParamLimits

0x485a,	// (0x0002a8ca) list_medium_line_x3_t4_g4_t3

0xe4ee,	// (0x0003455e) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe4ee,	// (0x0003455e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00035da3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00035da3) list_medium_line_x3_t4_g4_t

0x9e59,	// (0x0002fec9) list_single_dyc_row_text_pane_t1_ParamLimits

0x9e59,	// (0x0002fec9) list_single_dyc_row_text_pane_t1

0x9ea2,	// (0x0002ff12) list_single_dyc_row_text_pane_t2_ParamLimits

0x9ea2,	// (0x0002ff12) list_single_dyc_row_text_pane_t2

0xe50b,	// (0x0003457b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe50b,	// (0x0003457b) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00035dac) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00035dac) list_single_dyc_row_text_pane_t

0xe51d,	// (0x0003458d) list_single_dyc_row_pane_g1_ParamLimits

0xe51d,	// (0x0003458d) list_single_dyc_row_pane_g1

0xe529,	// (0x00034599) list_single_dyc_row_pane_g2_ParamLimits

0xe529,	// (0x00034599) list_single_dyc_row_pane_g2

0xe535,	// (0x000345a5) list_single_dyc_row_pane_g3_ParamLimits

0xe535,	// (0x000345a5) list_single_dyc_row_pane_g3

0xe541,	// (0x000345b1) list_single_dyc_row_pane_g4_ParamLimits

0xe541,	// (0x000345b1) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00035db3) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00035db3) list_single_dyc_row_pane_g

0xe54d,	// (0x000345bd) list_single_dyc_row_text_pane_ParamLimits

0xe54d,	// (0x000345bd) list_single_dyc_row_text_pane

0x1db3,	// (0x00027e23) bg_sp_fs_scroll_pane

0xe56c,	// (0x000345dc) thumb_sp_fs_scroll_pane

0xd2d4,	// (0x00033344) list_medium_line_g1_ParamLimits

0xd2d4,	// (0x00033344) list_medium_line_g1

0xe575,	// (0x000345e5) list_medium_line_t1_ParamLimits

0xe575,	// (0x000345e5) list_medium_line_t1

0x33cf,	// (0x0002943f) list_medium_line_x2_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x2_g1

0x33db,	// (0x0002944b) list_medium_line_x2_g2_ParamLimits

0x33db,	// (0x0002944b) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00035dbc) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00035dbc) list_medium_line_x2_g

0xe58a,	// (0x000345fa) list_medium_line_x2_t1_ParamLimits

0xe58a,	// (0x000345fa) list_medium_line_x2_t1

0x33cf,	// (0x0002943f) list_medium_line_x3_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x3_g1

0x33db,	// (0x0002944b) list_medium_line_x3_g2_ParamLimits

0x33db,	// (0x0002944b) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00035dbc) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00035dbc) list_medium_line_x3_g

0xe58a,	// (0x000345fa) list_medium_line_x3_t1_ParamLimits

0xe58a,	// (0x000345fa) list_medium_line_x3_t1

0xe5a0,	// (0x00034610) thumb_sp_fs_scroll_pane_g1

0xe5a9,	// (0x00034619) thumb_sp_fs_scroll_pane_g2

0xe5b2,	// (0x00034622) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00035dc1) thumb_sp_fs_scroll_pane_g

0xe5a0,	// (0x00034610) bg_sp_fs_scroll_pane_g1

0xe5a9,	// (0x00034619) bg_sp_fs_scroll_pane_g2

0xe5b2,	// (0x00034622) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00035dc1) bg_sp_fs_scroll_pane_g

0x33cf,	// (0x0002943f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x33cf,	// (0x0002943f) list_medium_line_x2_t3_g4_g1

0x3459,	// (0x000294c9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3459,	// (0x000294c9) list_medium_line_x2_t3_g4_g2

0x33db,	// (0x0002944b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x33db,	// (0x0002944b) list_medium_line_x2_t3_g4_g3

0x33e7,	// (0x00029457) list_medium_line_x2_t3_g4_g4_ParamLimits

0x33e7,	// (0x00029457) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00035351) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00035351) list_medium_line_x2_t3_g4_g

0x9efc,	// (0x0002ff6c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9efc,	// (0x0002ff6c) list_medium_line_x2_t3_g4_t1

0x9f16,	// (0x0002ff86) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9f16,	// (0x0002ff86) list_medium_line_x2_t3_g4_t2

0x341c,	// (0x0002948c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x341c,	// (0x0002948c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00035dc8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00035dc8) list_medium_line_x2_t3_g4_t

0xd2d4,	// (0x00033344) list_medium_line_g2_g1_ParamLimits

0xd2d4,	// (0x00033344) list_medium_line_g2_g1

0xd2e0,	// (0x00033350) list_medium_line_g2_g2_ParamLimits

0xd2e0,	// (0x00033350) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00035a8a) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00035a8a) list_medium_line_g2_g

0xe5bb,	// (0x0003462b) list_medium_line_g2_t1_ParamLimits

0xe5bb,	// (0x0003462b) list_medium_line_g2_t1

0xd2d4,	// (0x00033344) list_medium_line_t3_g2_g1_ParamLimits

0xd2d4,	// (0x00033344) list_medium_line_t3_g2_g1

0xd2e0,	// (0x00033350) list_medium_line_t3_g2_g2_ParamLimits

0xd2e0,	// (0x00033350) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00035a8a) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00035a8a) list_medium_line_t3_g2_g

0x9f30,	// (0x0002ffa0) list_medium_line_t3_g2_t1_ParamLimits

0x9f30,	// (0x0002ffa0) list_medium_line_t3_g2_t1

0x9f4a,	// (0x0002ffba) list_medium_line_t3_g2_t2_ParamLimits

0x9f4a,	// (0x0002ffba) list_medium_line_t3_g2_t2

0x9f5f,	// (0x0002ffcf) list_medium_line_t3_g2_t3_ParamLimits

0x9f5f,	// (0x0002ffcf) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00035dcf) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00035dcf) list_medium_line_t3_g2_t

0xe3b2,	// (0x00034422) list_medium_line_right_icon_g1

0xe5d0,	// (0x00034640) list_medium_line_right_icon_t1

0xd2d4,	// (0x00033344) list_medium_line_t2_g1_ParamLimits

0xd2d4,	// (0x00033344) list_medium_line_t2_g1

0x9f79,	// (0x0002ffe9) list_medium_line_t2_t1_ParamLimits

0x9f79,	// (0x0002ffe9) list_medium_line_t2_t1

0x9f93,	// (0x00030003) list_medium_line_t2_t2_ParamLimits

0x9f93,	// (0x00030003) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00035dd6) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00035dd6) list_medium_line_t2_t

0xd2d4,	// (0x00033344) list_medium_line_t3_g1_ParamLimits

0xd2d4,	// (0x00033344) list_medium_line_t3_g1

0x9fac,	// (0x0003001c) list_medium_line_t3_t1_ParamLimits

0x9fac,	// (0x0003001c) list_medium_line_t3_t1

0x9fc3,	// (0x00030033) list_medium_line_t3_t2_ParamLimits

0x9fc3,	// (0x00030033) list_medium_line_t3_t2

0x9fd8,	// (0x00030048) list_medium_line_t3_t3_ParamLimits

0x9fd8,	// (0x00030048) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00035ddb) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00035ddb) list_medium_line_t3_t

0xd2d4,	// (0x00033344) list_medium_line_g3_g1_ParamLimits

0xd2d4,	// (0x00033344) list_medium_line_g3_g1

0xe5de,	// (0x0003464e) list_medium_line_g3_g2_ParamLimits

0xe5de,	// (0x0003464e) list_medium_line_g3_g2

0xd2e0,	// (0x00033350) list_medium_line_g3_g3_ParamLimits

0xd2e0,	// (0x00033350) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00035de2) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00035de2) list_medium_line_g3_g

0xe5ea,	// (0x0003465a) list_medium_line_g3_t1_ParamLimits

0xe5ea,	// (0x0003465a) list_medium_line_g3_t1

0xd2d4,	// (0x00033344) list_medium_line_t2_g3_g1_ParamLimits

0xd2d4,	// (0x00033344) list_medium_line_t2_g3_g1

0xe5de,	// (0x0003464e) list_medium_line_t2_g3_g2_ParamLimits

0xe5de,	// (0x0003464e) list_medium_line_t2_g3_g2

0xd2e0,	// (0x00033350) list_medium_line_t2_g3_g3_ParamLimits

0xd2e0,	// (0x00033350) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00035de2) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00035de2) list_medium_line_t2_g3_g

0x9fea,	// (0x0003005a) list_medium_line_t2_g3_t1_ParamLimits

0x9fea,	// (0x0003005a) list_medium_line_t2_g3_t1

0xa004,	// (0x00030074) list_medium_line_t2_g3_t2_ParamLimits

0xa004,	// (0x00030074) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00035de9) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00035de9) list_medium_line_t2_g3_t

0xd2d4,	// (0x00033344) list_medium_line_t3_g3_g1_ParamLimits

0xd2d4,	// (0x00033344) list_medium_line_t3_g3_g1

0xe5de,	// (0x0003464e) list_medium_line_t3_g3_g2_ParamLimits

0xe5de,	// (0x0003464e) list_medium_line_t3_g3_g2

0xd2e0,	// (0x00033350) list_medium_line_t3_g3_g3_ParamLimits

0xd2e0,	// (0x00033350) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00035de2) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00035de2) list_medium_line_t3_g3_g

0xa01f,	// (0x0003008f) list_medium_line_t3_g3_t1_ParamLimits

0xa01f,	// (0x0003008f) list_medium_line_t3_g3_t1

0xa038,	// (0x000300a8) list_medium_line_t3_g3_t2_ParamLimits

0xa038,	// (0x000300a8) list_medium_line_t3_g3_t2

0xa04e,	// (0x000300be) list_medium_line_t3_g3_t3_ParamLimits

0xa04e,	// (0x000300be) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x00035dee) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x00035dee) list_medium_line_t3_g3_t

0xe4da,	// (0x0003454a) list_medium_line_right_iconx2_g1

0xe3b2,	// (0x00034422) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00035df5) list_medium_line_right_iconx2_g

0xe5ff,	// (0x0003466f) list_medium_line_right_iconx2_t1

0xe4da,	// (0x0003454a) list_medium_line_t2_right_iconx2_g1

0xe3b2,	// (0x00034422) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00035df5) list_medium_line_t2_right_iconx2_g

0xa068,	// (0x000300d8) list_medium_line_t2_right_iconx2_t1

0xa078,	// (0x000300e8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x00035dfa) list_medium_line_t2_right_iconx2_t

0xe60d,	// (0x0003467d) list_medium_line_x4_t4_t1

0xa08a,	// (0x000300fa) list_medium_line_x4_t4_t2

0xa09a,	// (0x0003010a) list_medium_line_x4_t4_t3

0xa0aa,	// (0x0003011a) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x00035dff) list_medium_line_x4_t4_t

0xa0fd,	// (0x0003016d) tport_appsw_pane_ParamLimits

0xa0fd,	// (0x0003016d) tport_appsw_pane

0xa10e,	// (0x0003017e) tport_contact_pane_ParamLimits

0xa10e,	// (0x0003017e) tport_contact_pane

0xa127,	// (0x00030197) tport_listscroll_pane_ParamLimits

0xa127,	// (0x00030197) tport_listscroll_pane

0xa142,	// (0x000301b2) cell_tport_appsw_pane_ParamLimits

0xa142,	// (0x000301b2) cell_tport_appsw_pane

0xcf79,	// (0x00032fe9) tport_appsw_pane_g1_ParamLimits

0xcf79,	// (0x00032fe9) tport_appsw_pane_g1

0xe61b,	// (0x0003468b) tport_contact_pane_g1

0xddb2,	// (0x00033e22) tport_contact_pane_t1

0xe624,	// (0x00034694) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00035e08) tport_contact_pane_t

0xe632,	// (0x000346a2) list_tport_pane

0xe63b,	// (0x000346ab) scroll_pane_cp_030

0xe64c,	// (0x000346bc) cell_tport_appsw_pane_g1

0xe65c,	// (0x000346cc) cell_tport_appsw_pane_t1

0x1db3,	// (0x00027e23) grid_highlight_pane_cp019

0xa182,	// (0x000301f2) list_tport_double_graphic_pane_ParamLimits

0xa182,	// (0x000301f2) list_tport_double_graphic_pane

0x2025,	// (0x00028095) list_highlight_pane_cp023_ParamLimits

0x2025,	// (0x00028095) list_highlight_pane_cp023

0xa18f,	// (0x000301ff) list_tport_double_graphic_pane_g1_ParamLimits

0xa18f,	// (0x000301ff) list_tport_double_graphic_pane_g1

0xa19c,	// (0x0003020c) list_tport_double_graphic_pane_t1_ParamLimits

0xa19c,	// (0x0003020c) list_tport_double_graphic_pane_t1

0xa1b1,	// (0x00030221) list_tport_double_graphic_pane_t2_ParamLimits

0xa1b1,	// (0x00030221) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x00035e14) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x00035e14) list_tport_double_graphic_pane_t

0x1db3,	// (0x00027e23) main_cale_note_pane

0x1aa5,	// (0x00027b15) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1aa5,	// (0x00027b15) cell_vitu2_function_top_wide_pane_cp01

0x9822,	// (0x0002f892) wait_bar_pane_cp05_ParamLimits

0x1db3,	// (0x00027e23) listscroll_cmail_pane

0xe672,	// (0x000346e2) list_cmail_pane

0xd251,	// (0x000332c1) list_cmail_body_pane

0xa1cd,	// (0x0003023d) list_single_cmail_header_caption_pane

0xa1e3,	// (0x00030253) list_single_cmail_header_detail_pane_ParamLimits

0xa1e3,	// (0x00030253) list_single_cmail_header_detail_pane

0xa20c,	// (0x0003027c) list_single_cmail_header_caption_pane_t1

0xa21c,	// (0x0003028c) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa21c,	// (0x0003028c) list_single_cmail_header_detail_pane_g1

0xe693,	// (0x00034703) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe693,	// (0x00034703) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00035e19) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00035e19) list_single_cmail_header_detail_pane_g

0xe6ac,	// (0x0003471c) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6ac,	// (0x0003471c) list_single_cmail_header_detail_pane_t1

0xe6e2,	// (0x00034752) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6e2,	// (0x00034752) list_single_cmail_header_editor_pane_bg

0xdf61,	// (0x00033fd1) list_cmail_body_pane_g1

0xe6f4,	// (0x00034764) list_cmail_body_pane_t1

0xcff3,	// (0x00033063) list_single_cmail_header_editor_pane_bg_g1

0x3b15,	// (0x00029b85) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd003,	// (0x00033073) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcffb,	// (0x0003306b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd2ac,	// (0x0003331c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd023,	// (0x00033093) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd013,	// (0x00033083) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd01b,	// (0x0003308b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3af5,	// (0x00029b65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa25a,	// (0x000302ca) calenote_gesture_pane_ParamLimits

0xa25a,	// (0x000302ca) calenote_gesture_pane

0xa27a,	// (0x000302ea) calenote_window_pane_ParamLimits

0xa27a,	// (0x000302ea) calenote_window_pane

0xe702,	// (0x00034772) popup_note_window_cp01

0xa296,	// (0x00030306) calenote_swipe_1_pane_ParamLimits

0xa296,	// (0x00030306) calenote_swipe_1_pane

0x9c76,	// (0x0002fce6) calenote_swipe_2_pane_ParamLimits

0x9c76,	// (0x0002fce6) calenote_swipe_2_pane

0xe2b3,	// (0x00034323) calenote_swipe_1_pane_g1_ParamLimits

0xe2b3,	// (0x00034323) calenote_swipe_1_pane_g1

0xe2c0,	// (0x00034330) calenote_swipe_1_pane_g2_ParamLimits

0xe2c0,	// (0x00034330) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x00035d48) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x00035d48) calenote_swipe_1_pane_g

0xe714,	// (0x00034784) calenote_swipe_1_pane_t1_ParamLimits

0xe714,	// (0x00034784) calenote_swipe_1_pane_t1

0xe2b3,	// (0x00034323) calenote_swipe_2_pane_g1_ParamLimits

0xe2b3,	// (0x00034323) calenote_swipe_2_pane_g1

0xe733,	// (0x000347a3) calenote_swipe_2_pane_g2_ParamLimits

0xe733,	// (0x000347a3) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00035e25) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00035e25) calenote_swipe_2_pane_g

0xe73f,	// (0x000347af) calenote_swipe_2_pane_t1_ParamLimits

0xe73f,	// (0x000347af) calenote_swipe_2_pane_t1

0x1db3,	// (0x00027e23) main_mup_navstr_pane

0x7657,	// (0x0002d6c7) main_mup3_pane_t7_ParamLimits

0x7657,	// (0x0002d6c7) main_mup3_pane_t7

0xcb5c,	// (0x00032bcc) main_mp4_pane_g6_ParamLimits

0xcb5c,	// (0x00032bcc) main_mp4_pane_g6

0xcd8e,	// (0x00032dfe) main_image3_pane_t4_ParamLimits

0xcd8e,	// (0x00032dfe) main_image3_pane_t4

0xa2ab,	// (0x0003031b) popup_navstr_preview_pane_ParamLimits

0xa2ab,	// (0x0003031b) popup_navstr_preview_pane

0xa2bf,	// (0x0003032f) scroll_navstr_pane_ParamLimits

0xa2bf,	// (0x0003032f) scroll_navstr_pane

0x1db3,	// (0x00027e23) bg_popup_preview_window_pane_cp04

0xe766,	// (0x000347d6) popup_navstr_preview_pane_t1

0xa2d3,	// (0x00030343) scroll_navstr_pane_g1_ParamLimits

0xa2d3,	// (0x00030343) scroll_navstr_pane_g1

0xa2e7,	// (0x00030357) scroll_navstr_pane_t1_ParamLimits

0xa2e7,	// (0x00030357) scroll_navstr_pane_t1

0xe70b,	// (0x0003477b) bg_button_pane_cp014

0xe70b,	// (0x0003477b) bg_button_pane_cp030

0x9b14,	// (0x0002fb84) list_double_fisheye_pane_g4_ParamLimits

0x9b14,	// (0x0002fb84) list_double_fisheye_pane_g4

0x9b20,	// (0x0002fb90) list_double_fisheye_pane_g5_ParamLimits

0x9b20,	// (0x0002fb90) list_double_fisheye_pane_g5

0xe67a,	// (0x000346ea) sp_fs_scroll_pane_cp03

0xe3f2,	// (0x00034462) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3fe,	// (0x0003446e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x00035d65) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe40a,	// (0x0003447a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa1c3,	// (0x00030233) sp_fs_scroll_pane_cp02

0x2c67,	// (0x00028cd7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2c67,	// (0x00028cd7) popup_sp_fs_calendar_preview_list_single_pane

0x1db3,	// (0x00027e23) main_cam6_pano_pane

0x2025,	// (0x00028095) main_mup3_pane_ParamLimits

0x1db3,	// (0x00027e23) main_phacti_pane

0x96f5,	// (0x0002f765) bg_button_pane_cp11

0x970f,	// (0x0002f77f) main_mobtv_info_pane_g2_ParamLimits

0x970f,	// (0x0002f77f) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x00035cc5) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x00035cc5) main_mobtv_info_pane_g

0x98ec,	// (0x0002f95c) sc_clock_pane_t5_ParamLimits

0x98ec,	// (0x0002f95c) sc_clock_pane_t5

0x9976,	// (0x0002f9e6) main_radioblah_pane_g1_ParamLimits

0xe1ff,	// (0x0003426f) main_radioblah_pane_t3_ParamLimits

0xe1ff,	// (0x0003426f) main_radioblah_pane_t3

0xe217,	// (0x00034287) main_radioblah_pane_t4_ParamLimits

0xe217,	// (0x00034287) main_radioblah_pane_t4

0x999e,	// (0x0002fa0e) main_radioblah_text_pane_ParamLimits

0x999e,	// (0x0002fa0e) main_radioblah_text_pane

0x99b0,	// (0x0002fa20) main_radioblah_info_pane_g1_ParamLimits

0x9a49,	// (0x0002fab9) main_radioblah_info_pane_t4_ParamLimits

0x9a49,	// (0x0002fab9) main_radioblah_info_pane_t4

0x2025,	// (0x00028095) main_sp_fs_calendar_pane

0xa2fe,	// (0x0003036e) main_phacti_pane_g1

0xa306,	// (0x00030376) phacti_note_pane_ParamLimits

0xa306,	// (0x00030376) phacti_note_pane

0xe77d,	// (0x000347ed) phacti_term_pane_ParamLimits

0xe77d,	// (0x000347ed) phacti_term_pane

0xe792,	// (0x00034802) phacti_note_pane_t1_ParamLimits

0xe792,	// (0x00034802) phacti_note_pane_t1

0xe7a9,	// (0x00034819) phacti_term_pane_g1

0xe7b1,	// (0x00034821) phacti_term_pane_t1_ParamLimits

0xe7b1,	// (0x00034821) phacti_term_pane_t1

0xe7db,	// (0x0003484b) popup_sp_fs_calendar_preview_list_single_pane_g1

0x33c7,	// (0x00029437) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00035e2f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7e3,	// (0x00034853) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7e3,	// (0x00034853) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7f8,	// (0x00034868) aid_popup_sp_fs_bg_corner_pane

0xc1f5,	// (0x00032265) popup_sp_fs_calendar_preview_bg_pane_g1

0x1db3,	// (0x00027e23) popup_sp_fs_calendar_preview_bg_pane

0xe800,	// (0x00034870) popup_sp_fs_calendar_preview_list_pane

0x2025,	// (0x00028095) bg_main_sp_fs_cale_pane_ParamLimits

0x2025,	// (0x00028095) bg_main_sp_fs_cale_pane

0xe811,	// (0x00034881) listscroll_cale_mrui_pane_ParamLimits

0xe811,	// (0x00034881) listscroll_cale_mrui_pane

0xe825,	// (0x00034895) listscroll_sp_fs_schedule_track_pane

0xe82e,	// (0x0003489e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe82e,	// (0x0003489e) main_sp_fs_ctrlbar_pane_cp01

0xe83f,	// (0x000348af) main_sp_fs_ribbon_pane

0xe847,	// (0x000348b7) popup_sp_fs_cale_preview_window

0xa361,	// (0x000303d1) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa361,	// (0x000303d1) list_single_sp_fs_schedule_track_pane

0x2025,	// (0x00028095) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2025,	// (0x00028095) bg_sp_fs_highlight_list_pane_cp03

0xa373,	// (0x000303e3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa373,	// (0x000303e3) list_single_sp_fs_schedule_track_pane_g1

0xa37f,	// (0x000303ef) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa37f,	// (0x000303ef) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00035e34) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00035e34) list_single_sp_fs_schedule_track_pane_g

0xa38b,	// (0x000303fb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa38b,	// (0x000303fb) list_single_sp_fs_schedule_track_pane_t1

0xa3a5,	// (0x00030415) sp_fs_schedule_track_pane_ParamLimits

0xa3a5,	// (0x00030415) sp_fs_schedule_track_pane

0xe859,	// (0x000348c9) sp_fs_schedule_track_pane_g1

0xe861,	// (0x000348d1) sp_fs_schedule_track_pane_g2

0xe869,	// (0x000348d9) sp_fs_schedule_track_pane_g3

0xe871,	// (0x000348e1) sp_fs_schedule_track_pane_g4

0xe879,	// (0x000348e9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00035e39) sp_fs_schedule_track_pane_g

0xcff3,	// (0x00033063) bg_sp_fs_schedule_viewer_highlight_g1

0x3b15,	// (0x00029b85) bg_sp_fs_schedule_viewer_highlight_g2

0xcffb,	// (0x0003306b) bg_sp_fs_schedule_viewer_highlight_g3

0xd003,	// (0x00033073) bg_sp_fs_schedule_viewer_highlight_g4

0xd2ac,	// (0x0003331c) bg_sp_fs_schedule_viewer_highlight_g5

0xd013,	// (0x00033083) bg_sp_fs_schedule_viewer_highlight_g6

0xd01b,	// (0x0003308b) bg_sp_fs_schedule_viewer_highlight_g7

0xd023,	// (0x00033093) bg_sp_fs_schedule_viewer_highlight_g8

0x3af5,	// (0x00029b65) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00035e44) bg_sp_fs_schedule_viewer_highlight_g

0x1db3,	// (0x00027e23) bg_main_sp_fs_ribbon_pane

0xa3b6,	// (0x00030426) main_sp_fs_ribbon_pane_g1

0xe881,	// (0x000348f1) main_sp_fs_ribbon_pane_t1

0xa3bf,	// (0x0003042f) main_sp_fs_ribbon_pane_t2

0xe890,	// (0x00034900) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00035e57) main_sp_fs_ribbon_pane_t

0xe89f,	// (0x0003490f) main_sp_fs_ribbon_scheduler_pane

0xe8a7,	// (0x00034917) bg_main_sp_fs_ribbon_pane_g1

0xe8b0,	// (0x00034920) bg_main_sp_fs_ribbon_pane_g2

0xe8b9,	// (0x00034929) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00035e5e) bg_main_sp_fs_ribbon_pane_g

0xe8c1,	// (0x00034931) main_sp_fs_ribbon_scheduler_pane_g1

0xe8ca,	// (0x0003493a) main_sp_fs_ribbon_scheduler_pane_g2

0xe8d3,	// (0x00034943) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00035e65) main_sp_fs_ribbon_scheduler_pane_g

0xe8dc,	// (0x0003494c) list_cale_mrui_pane

0xa3ce,	// (0x0003043e) sp_fs_scroll_pane_cp07_ParamLimits

0xa3ce,	// (0x0003043e) sp_fs_scroll_pane_cp07

0xa3e2,	// (0x00030452) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa3e2,	// (0x00030452) bg_sp_fs_schedule_viewer_highlight

0xe8e5,	// (0x00034955) list_single_sp_fs_schedule_track_pane_cp01

0xe8ed,	// (0x0003495d) list_sp_fs_schedule_track_pane

0xe8f5,	// (0x00034965) sp_fs_scroll_pane_cp06_ParamLimits

0xe8f5,	// (0x00034965) sp_fs_scroll_pane_cp06

0xc1f5,	// (0x00032265) bgmain_sp_fs_calendar_pane_g1

0xa3f2,	// (0x00030462) list_single_cale_mrui_pane_ParamLimits

0xa3f2,	// (0x00030462) list_single_cale_mrui_pane

0xe907,	// (0x00034977) list_single_cale_mrui_row_pane_ParamLimits

0xe907,	// (0x00034977) list_single_cale_mrui_row_pane

0xe914,	// (0x00034984) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe914,	// (0x00034984) list_single_cale_mrui_row_pane_g1

0xe959,	// (0x000349c9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe959,	// (0x000349c9) list_single_cale_mrui_row_pane_t1

0xa412,	// (0x00030482) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa412,	// (0x00030482) list_single_cale_mrui_row_pane_t2

0xe96b,	// (0x000349db) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe96b,	// (0x000349db) list_single_cale_mrui_row_pane_t3

0xe99a,	// (0x00034a0a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe99a,	// (0x00034a0a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x00035e73) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x00035e73) list_single_cale_mrui_row_pane_t

0xa47a,	// (0x000304ea) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa47a,	// (0x000304ea) list_single_cmail_header_editor_pane_bg_cp01

0xa4a0,	// (0x00030510) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa4a0,	// (0x00030510) list_single_cmail_header_editor_pane_bg_cp02

0xa4c0,	// (0x00030530) main_radioblah_text_pane_t1_ParamLimits

0xa4c0,	// (0x00030530) main_radioblah_text_pane_t1

0xe9c9,	// (0x00034a39) cam6_indi_pane_cp01

0xe9d1,	// (0x00034a41) cam6_mode_pane_cp01

0xe9d9,	// (0x00034a49) cam6_pano_pane

0xe9e2,	// (0x00034a52) cam6_zoom_pane_cp01

0xe9ea,	// (0x00034a5a) cam6_pano_image_pane

0xe9f5,	// (0x00034a65) cam6_pano_pane_g1

0xdf61,	// (0x00033fd1) cam6_pano_pane_g2

0xe9fe,	// (0x00034a6e) cam6_pano_pane_g3

0xea07,	// (0x00034a77) cam6_pano_pane_g4

0xc7a3,	// (0x00032813) cam6_pano_pane_g5

0xea10,	// (0x00034a80) cam6_pano_pane_g6

0xea1a,	// (0x00034a8a) cam6_pano_pane_g7

0xea22,	// (0x00034a92) cam6_pano_pane_g8

0xea2b,	// (0x00034a9b) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x00035e7c) cam6_pano_pane_g

0x1db3,	// (0x00027e23) main_browser_tag_pane

0xe75e,	// (0x000347ce) grid_navstr_albumart_pane

0xea36,	// (0x00034aa6) cell_navstr_albumart_pane_ParamLimits

0xea36,	// (0x00034aa6) cell_navstr_albumart_pane

0xea59,	// (0x00034ac9) cell_navstr_albumart_pane_g1

0xbb0c,	// (0x00031b7c) cell_navstr_albumart_pane_g2

0xbb1c,	// (0x00031b8c) cell_navstr_albumart_pane_g3

0xbb14,	// (0x00031b84) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x00035e8f) cell_navstr_albumart_pane_g

0xa4da,	// (0x0003054a) bt_list_pane_ParamLimits

0xa4da,	// (0x0003054a) bt_list_pane

0xa4ee,	// (0x0003055e) bt_list_pane_t1

0xa4fd,	// (0x0003056d) bt_list_pane_t2

0x0001,

0xfe28,	// (0x00035e98) bt_list_pane_t

0x1db3,	// (0x00027e23) main_cale_prevew_pane

0xa50c,	// (0x0003057c) popup_cale_preview_window_ParamLimits

0xa50c,	// (0x0003057c) popup_cale_preview_window

0x2025,	// (0x00028095) bg_popup_preview_window_pane_cp05_ParamLimits

0x2025,	// (0x00028095) bg_popup_preview_window_pane_cp05

0xea61,	// (0x00034ad1) list_cale_preview_pane_ParamLimits

0xea61,	// (0x00034ad1) list_cale_preview_pane

0xa527,	// (0x00030597) list_double_cale_preview_pane_ParamLimits

0xa527,	// (0x00030597) list_double_cale_preview_pane

0xa539,	// (0x000305a9) list_single_cale_preview_pane_ParamLimits

0xa539,	// (0x000305a9) list_single_cale_preview_pane

0xa54f,	// (0x000305bf) list_single_cale_preview_pane_g1

0xa557,	// (0x000305c7) list_single_cale_preview_pane_t1_ParamLimits

0xa557,	// (0x000305c7) list_single_cale_preview_pane_t1

0xa56c,	// (0x000305dc) list_double_cale_preview_pane_g1

0xa574,	// (0x000305e4) list_double_cale_preview_pane_t1_ParamLimits

0xa574,	// (0x000305e4) list_double_cale_preview_pane_t1

0xa589,	// (0x000305f9) list_double_cale_preview_pane_t2_ParamLimits

0xa589,	// (0x000305f9) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x00035e9d) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x00035e9d) list_double_cale_preview_pane_t

0x1db3,	// (0x00027e23) main_ezdial_pane

0x2025,	// (0x00028095) main_sp_fs_email_pane_ParamLimits

0x9cb2,	// (0x0002fd22) cmail_ddmenu_btn01_pane_ParamLimits

0x9cb2,	// (0x0002fd22) cmail_ddmenu_btn01_pane

0x9cc5,	// (0x0002fd35) cmail_ddmenu_btn02_pane_ParamLimits

0x9cc5,	// (0x0002fd35) cmail_ddmenu_btn02_pane

0x9ce8,	// (0x0002fd58) cmail_ddmenu_btn03_pane_ParamLimits

0x9ce8,	// (0x0002fd58) cmail_ddmenu_btn03_pane

0x9d11,	// (0x0002fd81) main_sp_fs_ctrlbar_pane_ParamLimits

0x9d35,	// (0x0002fda5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd251,	// (0x000332c1) list_cmail_body_pane_ParamLimits

0xe68a,	// (0x000346fa) bg_button_pane_cp12

0xe69f,	// (0x0003470f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe69f,	// (0x0003470f) list_single_cmail_header_detail_pane_g3

0xa234,	// (0x000302a4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa234,	// (0x000302a4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00035e20) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00035e20) list_single_cmail_header_detail_pane_t

0xe7c6,	// (0x00034836) phacti_term_pane_t2_ParamLimits

0xe7c6,	// (0x00034836) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00035e2a) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00035e2a) phacti_term_pane_t

0xea6d,	// (0x00034add) aid_size_list_single_double

0xa5a1,	// (0x00030611) popup_ezdial_listscroll_window

0xa5bd,	// (0x0003062d) popup_number_entry_window_cp01

0x502d,	// (0x0002b09d) bg_popup_call_pane_cp09

0xea79,	// (0x00034ae9) ezdial_list_pane

0xea81,	// (0x00034af1) scroll_pane_cp23

0xbcef,	// (0x00031d5f) bg_button_pane_cp028_ParamLimits

0xbcef,	// (0x00031d5f) bg_button_pane_cp028

0xa5cb,	// (0x0003063b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa5cb,	// (0x0003063b) cmail_ddmenu_btn01_pane_g1

0xa5da,	// (0x0003064a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa5da,	// (0x0003064a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x00035ea2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x00035ea2) cmail_ddmenu_btn01_pane_g

0xea89,	// (0x00034af9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea89,	// (0x00034af9) cmail_ddmenu_btn01_pane_t1

0xbcef,	// (0x00031d5f) bg_button_pane_cp029_ParamLimits

0xbcef,	// (0x00031d5f) bg_button_pane_cp029

0xa5ea,	// (0x0003065a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa5ea,	// (0x0003065a) cmail_ddmenu_btn02_pane_g1

0xa605,	// (0x00030675) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa605,	// (0x00030675) cmail_ddmenu_btn02_pane_t1

0x2025,	// (0x00028095) bg_button_pane_cp031_ParamLimits

0x2025,	// (0x00028095) bg_button_pane_cp031

0xa5ea,	// (0x0003065a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa5ea,	// (0x0003065a) cmail_ddmenu_btn03_pane_g1

0xa605,	// (0x00030675) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa605,	// (0x00030675) cmail_ddmenu_btn03_pane_t1

0x8006,	// (0x0002e076) cell_dialer2_keypad_pane_t1_ParamLimits

0x8020,	// (0x0002e090) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8020,	// (0x0002e090) cell_dialer2_keypad_pane_t1_copy1

0x9577,	// (0x0002f5e7) ncimui_group_button_pane

0x2025,	// (0x00028095) main_sp_fs_calendar_pane_ParamLimits

0xa1cd,	// (0x0003023d) list_single_cmail_header_caption_pane_ParamLimits

0xe808,	// (0x00034878) aid_recal_txt_sm_pane

0x1db3,	// (0x00027e23) mian_recal_day_pane

0xe847,	// (0x000348b7) popup_sp_fs_cale_preview_window_ParamLimits

0x1db3,	// (0x00027e23) list_recal_day_pane

0xeac1,	// (0x00034b31) list_single_recal_day_pane_ParamLimits

0xeac1,	// (0x00034b31) list_single_recal_day_pane

0xead3,	// (0x00034b43) list_single_recal_day_pane_g1_ParamLimits

0xead3,	// (0x00034b43) list_single_recal_day_pane_g1

0xeadf,	// (0x00034b4f) list_single_recal_day_pane_g2_ParamLimits

0xeadf,	// (0x00034b4f) list_single_recal_day_pane_g2

0xeaef,	// (0x00034b5f) list_single_recal_day_pane_g3_ParamLimits

0xeaef,	// (0x00034b5f) list_single_recal_day_pane_g3

0xa62c,	// (0x0003069c) list_single_recal_day_pane_g4_ParamLimits

0xa62c,	// (0x0003069c) list_single_recal_day_pane_g4

0xeafb,	// (0x00034b6b) list_single_recal_day_pane_g5_ParamLimits

0xeafb,	// (0x00034b6b) list_single_recal_day_pane_g5

0xeb0b,	// (0x00034b7b) list_single_recal_day_pane_g6_ParamLimits

0xeb0b,	// (0x00034b7b) list_single_recal_day_pane_g6

0x0004,

0xfe41,	// (0x00035eb1) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x00035eb1) list_single_recal_day_pane_g

0xeb22,	// (0x00034b92) list_single_recal_day_pane_t1

0xeb34,	// (0x00034ba4) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00035ebc) list_single_recal_day_pane_t

0xa64c,	// (0x000306bc) ncimui_query_button_pane_ParamLimits

0xa64c,	// (0x000306bc) ncimui_query_button_pane

0xa65c,	// (0x000306cc) ncimui_query_button_pane_t1_ParamLimits

0xa65c,	// (0x000306cc) ncimui_query_button_pane_t1

0xeb49,	// (0x00034bb9) ncimui_query_button_pane_t2_ParamLimits

0xeb49,	// (0x00034bb9) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00035ec1) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00035ec1) ncimui_query_button_pane_t

0xa66f,	// (0x000306df) query_button_pane_ParamLimits

0xa66f,	// (0x000306df) query_button_pane

0x1db3,	// (0x00027e23) bg_button_pane_cp0028

0xeb5c,	// (0x00034bcc) query_button_pane_t1

0x674f,	// (0x0002c7bf) main_tport_pane_ParamLimits

0xa0ba,	// (0x0003012a) bg_popup_window_pane_cp01_ParamLimits

0xa0ba,	// (0x0003012a) bg_popup_window_pane_cp01

0xa0d4,	// (0x00030144) heading_pane_cp08_ParamLimits

0xa0d4,	// (0x00030144) heading_pane_cp08

0xa0e8,	// (0x00030158) heading_pane_cp07_ParamLimits

0xa0e8,	// (0x00030158) heading_pane_cp07

0xe64c,	// (0x000346bc) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00035e0d) cell_tport_appsw_pane_g

0x55be,	// (0x0002b62e) input_candi_list_open_g1

0x45d7,	// (0x0002a647) list_cale_time_pane_g6_ParamLimits

0x45d7,	// (0x0002a647) list_cale_time_pane_g6

0x7045,	// (0x0002d0b5) aid_size_touch_calib_1_ParamLimits

0x7045,	// (0x0002d0b5) aid_size_touch_calib_1

0x7051,	// (0x0002d0c1) aid_size_touch_calib_2_ParamLimits

0x7051,	// (0x0002d0c1) aid_size_touch_calib_2

0x7067,	// (0x0002d0d7) aid_size_touch_calib_3_ParamLimits

0x7067,	// (0x0002d0d7) aid_size_touch_calib_3

0x7085,	// (0x0002d0f5) aid_size_touch_calib_4_ParamLimits

0x7085,	// (0x0002d0f5) aid_size_touch_calib_4

0x709b,	// (0x0002d10b) main_touch_calib_button_group_pane_ParamLimits

0x709b,	// (0x0002d10b) main_touch_calib_button_group_pane

0x70b3,	// (0x0002d123) main_touch_calib_pane_g1_ParamLimits

0x70bf,	// (0x0002d12f) main_touch_calib_pane_g2_ParamLimits

0x70cb,	// (0x0002d13b) main_touch_calib_pane_g3_ParamLimits

0x70d7,	// (0x0002d147) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x000357e0) main_touch_calib_pane_g_ParamLimits

0x70e3,	// (0x0002d153) main_touch_calib_pane_t1_ParamLimits

0x70fd,	// (0x0002d16d) main_touch_calib_pane_t2_ParamLimits

0x7117,	// (0x0002d187) main_touch_calib_pane_t3_ParamLimits

0x712b,	// (0x0002d19b) main_touch_calib_pane_t4_ParamLimits

0x713f,	// (0x0002d1af) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x000357e9) main_touch_calib_pane_t_ParamLimits

0xc579,	// (0x000325e9) list_single_fp_cale_pane_g3_ParamLimits

0xc579,	// (0x000325e9) list_single_fp_cale_pane_g3

0xcfdb,	// (0x0003304b) bg_button_pane_cp012_ParamLimits

0xcfdb,	// (0x0003304b) bg_vkb2_func_pane_cp03_ParamLimits

0x1ca3,	// (0x00027d13) cell_vitu2_function_top_pane_g1_ParamLimits

0xcfdb,	// (0x0003304b) bg_vkb2_func_pane_cp04_ParamLimits

0x9517,	// (0x0002f587) main_ncimui_button_group_pane_ParamLimits

0x9517,	// (0x0002f587) main_ncimui_button_group_pane

0x9565,	// (0x0002f5d5) main_ncimui_pane_t3_ParamLimits

0x9565,	// (0x0002f5d5) main_ncimui_pane_t3

0xe774,	// (0x000347e4) phacti_button_group_pane

0xea6d,	// (0x00034add) aid_size_list_single_double_ParamLimits

0xa5a1,	// (0x00030611) popup_ezdial_listscroll_window_ParamLimits

0xa5bd,	// (0x0003062d) popup_number_entry_window_cp01_ParamLimits

0xa682,	// (0x000306f2) phacti_button_pane_ParamLimits

0xa682,	// (0x000306f2) phacti_button_pane

0x1db3,	// (0x00027e23) bg_button_pane_cp14

0xeb6a,	// (0x00034bda) phacti_button_pane_t1

0xa693,	// (0x00030703) main_touch_calib_button_pane_ParamLimits

0xa693,	// (0x00030703) main_touch_calib_button_pane

0x2a3a,	// (0x00028aaa) bg_button_pane_cp18_ParamLimits

0x2a3a,	// (0x00028aaa) bg_button_pane_cp18

0xeb78,	// (0x00034be8) main_touch_calib_button_pane_t1_ParamLimits

0xeb78,	// (0x00034be8) main_touch_calib_button_pane_t1

0xeb8e,	// (0x00034bfe) main_touch_calib_button_pane_t2_ParamLimits

0xeb8e,	// (0x00034bfe) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00035ec6) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00035ec6) main_touch_calib_button_pane_t

0x1db3,	// (0x00027e23) cell_ncimui_button_pane

0x1db3,	// (0x00027e23) bg_button_pane_cp032

0xebac,	// (0x00034c1c) cell_ncimui_button_pane_t1

0xcd6e,	// (0x00032dde) image3_infobar_pane_ParamLimits

0xcd6e,	// (0x00032dde) image3_infobar_pane

0x9918,	// (0x0002f988) fs_bigclock_status_pane_ParamLimits

0x9918,	// (0x0002f988) fs_bigclock_status_pane

0x9925,	// (0x0002f995) main_fs_bigclock_clock_pane_ParamLimits

0x9925,	// (0x0002f995) main_fs_bigclock_clock_pane

0x9939,	// (0x0002f9a9) main_fs_bigclock_indi_pane_ParamLimits

0x9939,	// (0x0002f9a9) main_fs_bigclock_indi_pane

0x9952,	// (0x0002f9c2) main_fs_bigclock_swipe_pane_ParamLimits

0x9952,	// (0x0002f9c2) main_fs_bigclock_swipe_pane

0x1db3,	// (0x00027e23) main_fs_clock_dumped_data

0xe06e,	// (0x000340de) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe06e,	// (0x000340de) list_single_fs_bigclock_indicator_pane_g1

0xe094,	// (0x00034104) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe094,	// (0x00034104) list_single_fs_bigclock_indicator_pane_g2

0xe0ae,	// (0x0003411e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0ae,	// (0x0003411e) list_single_fs_bigclock_indicator_pane_g3

0xe0c8,	// (0x00034138) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0c8,	// (0x00034138) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x00035cf9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x00035cf9) list_single_fs_bigclock_indicator_pane_g

0xe0f1,	// (0x00034161) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0f1,	// (0x00034161) list_single_fs_bigclock_indicator_pane_t1

0xe119,	// (0x00034189) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe119,	// (0x00034189) list_single_fs_bigclock_indicator_pane_t2

0xe141,	// (0x000341b1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe141,	// (0x000341b1) list_single_fs_bigclock_indicator_pane_t3

0xe169,	// (0x000341d9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe169,	// (0x000341d9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x00035d04) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x00035d04) list_single_fs_bigclock_indicator_pane_t

0xebba,	// (0x00034c2a) image3_infobar_fav_pane_ParamLimits

0xebba,	// (0x00034c2a) image3_infobar_fav_pane

0xebca,	// (0x00034c3a) image3_infobar_loc_pane_ParamLimits

0xebca,	// (0x00034c3a) image3_infobar_loc_pane

0xebde,	// (0x00034c4e) image3_infobar_time_pane_ParamLimits

0xebde,	// (0x00034c4e) image3_infobar_time_pane

0xc1f5,	// (0x00032265) image3_infobar_time_pane_g1

0xebee,	// (0x00034c5e) image3_infobar_time_pane_t1

0xc1f5,	// (0x00032265) image3_infobar_loc_pane_g1

0xebfc,	// (0x00034c6c) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00035ecb) image3_infobar_loc_pane_g

0xec04,	// (0x00034c74) image3_infobar_loc_pane_t1

0xc1f5,	// (0x00032265) image3_infobar_fav_pane_g1

0xec12,	// (0x00034c82) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00035ed0) image3_infobar_fav_pane_g

0xec1a,	// (0x00034c8a) fs_bigclock_status_battery_pane

0xec23,	// (0x00034c93) fs_bigclock_status_signal_pane

0xec2c,	// (0x00034c9c) fs_bigclock_status_title_pane

0xec35,	// (0x00034ca5) fs_bigclock_status_signal_pane_g1

0xec3e,	// (0x00034cae) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00035ed5) fs_bigclock_status_signal_pane_g

0xec46,	// (0x00034cb6) fs_bigclock_status_battery_pane_g1

0xec4f,	// (0x00034cbf) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x00035eda) fs_bigclock_status_battery_pane_g

0xec57,	// (0x00034cc7) fs_bigclock_status_title_pane_t1

0xc1f5,	// (0x00032265) main_fs_bigclock_clock_pane_g1

0xec65,	// (0x00034cd5) main_fs_bigclock_clock_pane_g2

0xec65,	// (0x00034cd5) main_fs_bigclock_clock_pane_g3

0xec65,	// (0x00034cd5) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00035edf) main_fs_bigclock_clock_pane_g

0xec6d,	// (0x00034cdd) main_fs_bigclock_clock_pane_t1

0xec7b,	// (0x00034ceb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00035ee8) main_fs_bigclock_clock_pane_t

0xec8a,	// (0x00034cfa) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec8a,	// (0x00034cfa) list_single_fs_bigclock_indicator_pane

0xa6a8,	// (0x00030718) list_single_fs_bigclock_pane_ParamLimits

0xa6a8,	// (0x00030718) list_single_fs_bigclock_pane

0xeca4,	// (0x00034d14) main_fs_bigclock_indicator_pane_t1

0xecb3,	// (0x00034d23) list_single_fs_bigclock_pane_g1

0xecbb,	// (0x00034d2b) list_single_fs_bigclock_pane_t1

0xc1f5,	// (0x00032265) main_fs_bigclock_swipe_pane_g1

0xecfe,	// (0x00034d6e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00035ef9) main_fs_bigclock_swipe_pane_g

0xed06,	// (0x00034d76) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed06,	// (0x00034d76) main_fs_bigclock_swipe_pane_t1

0x4992,	// (0x0002aa02) call_type_pane_ParamLimits

0x1db3,	// (0x00027e23) main_btmg_pane

0xe940,	// (0x000349b0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe940,	// (0x000349b0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfc,	// (0x00035e6c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00035e6c) list_single_cale_mrui_row_pane_g

0xeaa8,	// (0x00034b18) list_recal_vselct_arw_lo_pane

0xeab0,	// (0x00034b20) list_recal_vselct_arw_up_pane

0xeab8,	// (0x00034b28) list_recal_vselct_pane

0xed23,	// (0x00034d93) btmg_button_pane

0xa70b,	// (0x0003077b) main_btmg_pane_g1

0x1db3,	// (0x00027e23) bg_button_pane_cp044

0xed2d,	// (0x00034d9d) btmg_button_pane_t1

0xbce7,	// (0x00031d57) aid_listscroll_gen

0x2025,	// (0x00028095) main_cntbar_detail_pane

0xe66a,	// (0x000346da) list_cmail_folder_pane

0xe67a,	// (0x000346ea) sp_fs_scroll_pane_cp03_ParamLimits

0xa1cd,	// (0x0003023d) list_single_fs_dyc_pane_cp01_ParamLimits

0xa1cd,	// (0x0003023d) list_single_fs_dyc_pane_cp01

0xed3b,	// (0x00034dab) aid_size_cmail_indent

0xed44,	// (0x00034db4) list_single_dyc_row_pane_cp01

0xa741,	// (0x000307b1) cntbar_detail_list_pane_ParamLimits

0xa741,	// (0x000307b1) cntbar_detail_list_pane

0xa78d,	// (0x000307fd) main_cntbar_detail_cont_pane_ParamLimits

0xa78d,	// (0x000307fd) main_cntbar_detail_cont_pane

0x47a9,	// (0x0002a819) scroll_pane_cp032_ParamLimits

0x47a9,	// (0x0002a819) scroll_pane_cp032

0xa7a1,	// (0x00030811) cntbar_detail_list_event_pane_ParamLimits

0xa7a1,	// (0x00030811) cntbar_detail_list_event_pane

0xa751,	// (0x000307c1) cntbar_detail_list_shct_pane

0x3b6b,	// (0x00029bdb) aid_list_gen

0xed4d,	// (0x00034dbd) aid_scroll

0xed56,	// (0x00034dc6) aid_size_touch_scroll_bar

0xa7b1,	// (0x00030821) aid_list_double

0xed5f,	// (0x00034dcf) aid_list_single

0xa7b1,	// (0x00030821) aid_list_single_lg

0xed68,	// (0x00034dd8) aid_list_z_g_a_sm

0xed70,	// (0x00034de0) aid_list_z_g_d

0xed78,	// (0x00034de8) aid_txt_z_prm

0xa7ba,	// (0x0003082a) aid_txt_z_prm_cp01

0xa7c8,	// (0x00030838) aid_txt_z_sec

0xa7d6,	// (0x00030846) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa7d6,	// (0x00030846) main_cntbar_detail_cont_pane_g1

0xa7ea,	// (0x0003085a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa7ea,	// (0x0003085a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00035efe) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00035efe) main_cntbar_detail_cont_pane_g

0xed86,	// (0x00034df6) main_cntbar_detail_cont_pane_t1

0xed94,	// (0x00034e04) main_cntbar_detail_cont_pane_t2

0xeda2,	// (0x00034e12) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00035f03) main_cntbar_detail_cont_pane_t

0xa7fa,	// (0x0003086a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa7fa,	// (0x0003086a) cell_cntbar_detail_list_shct_pane

0xedb0,	// (0x00034e20) cntbar_detail_list_shct_pane_g1

0xedb9,	// (0x00034e29) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00035f0a) cntbar_detail_list_shct_pane_g

0xa80e,	// (0x0003087e) cntbar_detail_list_event_pane_g1_ParamLimits

0xa80e,	// (0x0003087e) cntbar_detail_list_event_pane_g1

0xa81a,	// (0x0003088a) cntbar_detail_list_event_pane_g2_ParamLimits

0xa81a,	// (0x0003088a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x00035f0f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x00035f0f) cntbar_detail_list_event_pane_g

0xa886,	// (0x000308f6) cntbar_detail_list_event_pane_t1_ParamLimits

0xa886,	// (0x000308f6) cntbar_detail_list_event_pane_t1

0xa89b,	// (0x0003090b) cntbar_detail_list_event_pane_t2_ParamLimits

0xa89b,	// (0x0003090b) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00035f1c) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00035f1c) cntbar_detail_list_event_pane_t

0xc1f5,	// (0x00032265) cell_cntbar_detail_list_shct_pane_g1

0x4faf,	// (0x0002b01f) navi_pane_mv_g3

0x2025,	// (0x00028095) main_cntbar_detail_pane_ParamLimits

0x1db3,	// (0x00027e23) main_notif_wgt_pane

0xcaf6,	// (0x00032b66) aid_tch_main_mp4_pane_g4

0xccf8,	// (0x00032d68) popup_slider_window_cp02

0xea9e,	// (0x00034b0e) list_recal_day_event_pane

0xa715,	// (0x00030785) cntbar_detail_btn_pane_ParamLimits

0xa715,	// (0x00030785) cntbar_detail_btn_pane

0xa72b,	// (0x0003079b) cntbar_detail_btn_pane_cp01_ParamLimits

0xa72b,	// (0x0003079b) cntbar_detail_btn_pane_cp01

0xa751,	// (0x000307c1) cntbar_detail_list_shct_pane_ParamLimits

0xa761,	// (0x000307d1) cntbar_detail_pane_g1_ParamLimits

0xa761,	// (0x000307d1) cntbar_detail_pane_g1

0xa771,	// (0x000307e1) cntbar_detail_pane_t1_ParamLimits

0xa771,	// (0x000307e1) cntbar_detail_pane_t1

0xa826,	// (0x00030896) cntbar_detail_list_event_pane_g3_ParamLimits

0xa826,	// (0x00030896) cntbar_detail_list_event_pane_g3

0xa83e,	// (0x000308ae) cntbar_detail_list_event_pane_g4_ParamLimits

0xa83e,	// (0x000308ae) cntbar_detail_list_event_pane_g4

0xa856,	// (0x000308c6) cntbar_detail_list_event_pane_g5_ParamLimits

0xa856,	// (0x000308c6) cntbar_detail_list_event_pane_g5

0xa86e,	// (0x000308de) cntbar_detail_list_event_pane_g6_ParamLimits

0xa86e,	// (0x000308de) cntbar_detail_list_event_pane_g6

0xa8b0,	// (0x00030920) cntbar_detail_list_event_pane_t3_ParamLimits

0xa8b0,	// (0x00030920) cntbar_detail_list_event_pane_t3

0xa8c2,	// (0x00030932) popup_notif_wgt_window_ParamLimits

0xa8c2,	// (0x00030932) popup_notif_wgt_window

0xa8db,	// (0x0003094b) popup_submenu_window_cp01_ParamLimits

0xa8db,	// (0x0003094b) popup_submenu_window_cp01

0x502d,	// (0x0002b09d) bg_popup_window_pane_cp10

0xedc2,	// (0x00034e32) listscroll_notif_wgt_pane

0xedcc,	// (0x00034e3c) list_notif_wgt_window

0xedd5,	// (0x00034e45) scroll_pane_cp033

0xedde,	// (0x00034e4e) list_notif_wgt_row_pane_ParamLimits

0xedde,	// (0x00034e4e) list_notif_wgt_row_pane

0xedf0,	// (0x00034e60) aid_size_list_notif_wgt_del

0xedf9,	// (0x00034e69) list_notif_wgt_row_pane_g1

0xee01,	// (0x00034e71) list_notif_wgt_row_pane_g2

0xee09,	// (0x00034e79) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00035f23) list_notif_wgt_row_pane_g

0xee12,	// (0x00034e82) list_notif_wgt_row_pane_t1

0xee20,	// (0x00034e90) list_notif_wgt_row_pane_t2

0xee2e,	// (0x00034e9e) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00035f2a) list_notif_wgt_row_pane_t

0xd306,	// (0x00033376) list_recal_day_event_pane_g1

0xee3c,	// (0x00034eac) list_recal_day_event_pane_t1

0x1db3,	// (0x00027e23) bg_button_pane_cp045

0xee4b,	// (0x00034ebb) cntbar_detail_btn_pane_t1

0xbcef,	// (0x00031d5f) main_callh_pane_ParamLimits

0xbcef,	// (0x00031d5f) main_callh_pane

0x1db3,	// (0x00027e23) main_coverflow0_pane

0x1db3,	// (0x00027e23) main_wgtman_pane

0x9960,	// (0x0002f9d0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9960,	// (0x0002f9d0) main_fs_bigclock_unlock_btn_pane

0xe644,	// (0x000346b4) bg_button_pane_cp16

0xe654,	// (0x000346c4) cell_tport_appsw_pane_g3

0xa8ed,	// (0x0003095d) cf0_flow_pane_ParamLimits

0xa8ed,	// (0x0003095d) cf0_flow_pane

0xee59,	// (0x00034ec9) listscroll_cf0_pane

0xee62,	// (0x00034ed2) main_cf0_pane_g1

0xa902,	// (0x00030972) main_cf0_pane_t1_ParamLimits

0xa902,	// (0x00030972) main_cf0_pane_t1

0xa919,	// (0x00030989) main_cf0_pane_t2_ParamLimits

0xa919,	// (0x00030989) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00035f31) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00035f31) main_cf0_pane_t

0xee6c,	// (0x00034edc) scroll_pane_cp11

0xa930,	// (0x000309a0) cf0_flow_pane_g1

0xa938,	// (0x000309a8) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00035f36) cf0_flow_pane_g

0xa940,	// (0x000309b0) cf0_flow_pane_t1

0x1db3,	// (0x00027e23) main_call6_pane

0x1db3,	// (0x00027e23) main_calllock_pane

0xa94e,	// (0x000309be) call6_btn_grp_pane_ParamLimits

0xa94e,	// (0x000309be) call6_btn_grp_pane

0xa968,	// (0x000309d8) call6_pane_g1_ParamLimits

0xa968,	// (0x000309d8) call6_pane_g1

0xa97d,	// (0x000309ed) popup_call6_1st_window_ParamLimits

0xa97d,	// (0x000309ed) popup_call6_1st_window

0xa98e,	// (0x000309fe) popup_call6_2nd_window_ParamLimits

0xa98e,	// (0x000309fe) popup_call6_2nd_window

0xa99f,	// (0x00030a0f) cell_call6_btn_pane_ParamLimits

0xa99f,	// (0x00030a0f) cell_call6_btn_pane

0x502d,	// (0x0002b09d) bg_popup_call2_in_pane_cp03

0xee77,	// (0x00034ee7) popup_call6_1st_window_g1

0xee7f,	// (0x00034eef) popup_call6_1st_window_g2

0xee87,	// (0x00034ef7) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00035f3b) popup_call6_1st_window_g

0xee8f,	// (0x00034eff) popup_call6_1st_window_t1

0xee9e,	// (0x00034f0e) popup_call6_1st_window_t2

0xeeae,	// (0x00034f1e) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00035f42) popup_call6_1st_window_t

0x502d,	// (0x0002b09d) bg_popup_call2_in_pane_cp04

0xee77,	// (0x00034ee7) popup_call6_2nd_window_g1

0xee7f,	// (0x00034eef) popup_call6_2nd_window_g2

0xee87,	// (0x00034ef7) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00035f3b) popup_call6_2nd_window_g

0xee8f,	// (0x00034eff) popup_call6_2nd_window_t1

0x1db3,	// (0x00027e23) bg_button_pane_cp15

0xeebe,	// (0x00034f2e) cell_call6_btn_pane_g1

0xeec7,	// (0x00034f37) cell_call6_btn_pane_t1

0xa9b3,	// (0x00030a23) listscroll_wgtman_pane_ParamLimits

0xa9b3,	// (0x00030a23) listscroll_wgtman_pane

0xa9d6,	// (0x00030a46) wgtman_btn_pane_ParamLimits

0xa9d6,	// (0x00030a46) wgtman_btn_pane

0x4bec,	// (0x0002ac5c) aid_scroll_copy1

0xeed6,	// (0x00034f46) list_wgtman_pane

0xaa19,	// (0x00030a89) wgtman_btn_pane_g1_ParamLimits

0xaa19,	// (0x00030a89) wgtman_btn_pane_g1

0xaa45,	// (0x00030ab5) wgtman_btn_pane_t1_ParamLimits

0xaa45,	// (0x00030ab5) wgtman_btn_pane_t1

0xeee0,	// (0x00034f50) wgtman_btn_pane_t2_ParamLimits

0xeee0,	// (0x00034f50) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00035f49) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00035f49) wgtman_btn_pane_t

0xaa82,	// (0x00030af2) listrow_wgtman_pane_ParamLimits

0xaa82,	// (0x00030af2) listrow_wgtman_pane

0xaa94,	// (0x00030b04) listrow_wgtman_pane_g1

0xaa9d,	// (0x00030b0d) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00035f4e) listrow_wgtman_pane_g

0xaaa7,	// (0x00030b17) listrow_wgtman_pane_t1

0xaab5,	// (0x00030b25) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00035f53) listrow_wgtman_pane_t

0xaac3,	// (0x00030b33) wait_bar_pane_cp09

0xeef7,	// (0x00034f67) main_calllock_btn_pane

0xef01,	// (0x00034f71) main_calllock_pane_g1

0x1db3,	// (0x00027e23) bg_button_pane_cp17

0xef0d,	// (0x00034f7d) main_calllock_btn_pane_g1

0xef16,	// (0x00034f86) main_calllock_btn_pane_t1

0x1db3,	// (0x00027e23) main_dialer3_pane

0x1db3,	// (0x00027e23) main_fmrd2_pane

0xc1f5,	// (0x00032265) main_fs_bigclock_unlock_btn_pane_g1

0xef2d,	// (0x00034f9d) main_fs_bigclock_unlock_btn_pane_t1

0xaacb,	// (0x00030b3b) area_fmrd2_info_pane_ParamLimits

0xaacb,	// (0x00030b3b) area_fmrd2_info_pane

0xaadc,	// (0x00030b4c) area_fmrd2_visual_pane_ParamLimits

0xaadc,	// (0x00030b4c) area_fmrd2_visual_pane

0xaaea,	// (0x00030b5a) fmrd2_indi_pane_ParamLimits

0xaaea,	// (0x00030b5a) fmrd2_indi_pane

0xaaf7,	// (0x00030b67) area_fmrd2_visual_pane_g1

0xaaff,	// (0x00030b6f) area_fmrd2_visual_pane_t1

0xab0f,	// (0x00030b7f) area_fmrd2_visual_pane_t2

0xab1f,	// (0x00030b8f) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00035f5d) area_fmrd2_visual_pane_t

0xab2f,	// (0x00030b9f) area_fmrd2_info_pane_g1

0xab37,	// (0x00030ba7) area_fmrd2_info_pane_t1

0xab47,	// (0x00030bb7) area_fmrd2_info_pane_t2

0xab57,	// (0x00030bc7) area_fmrd2_info_pane_t3

0xab67,	// (0x00030bd7) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00035f64) area_fmrd2_info_pane_t

0xab75,	// (0x00030be5) fmrd2_indi_pane_t1

0xab85,	// (0x00030bf5) fmrd2_indi_pane_t2

0xab95,	// (0x00030c05) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00035f6d) fmrd2_indi_pane_t

0xe0d7,	// (0x00034147) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0d7,	// (0x00034147) list_single_fs_bigclock_indicator_pane_g5

0xe17e,	// (0x000341ee) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe17e,	// (0x000341ee) list_single_fs_bigclock_indicator_pane_t5

0xa31a,	// (0x0003038a) aid_cell_bcale_month_pane_ParamLimits

0xa31a,	// (0x0003038a) aid_cell_bcale_month_pane

0xa32c,	// (0x0003039c) bcale_month_pane_ParamLimits

0xa32c,	// (0x0003039c) bcale_month_pane

0xa346,	// (0x000303b6) bcale_preview_pane_ParamLimits

0xa346,	// (0x000303b6) bcale_preview_pane

0xecbb,	// (0x00034d2b) list_single_fs_bigclock_pane_t1_ParamLimits

0xecda,	// (0x00034d4a) list_single_fs_bigclock_pane_t2_ParamLimits

0xecda,	// (0x00034d4a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00035ef4) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00035ef4) list_single_fs_bigclock_pane_t

0xef25,	// (0x00034f95) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00035f58) main_fs_bigclock_unlock_btn_pane_g

0xaba5,	// (0x00030c15) aid_dia3_key_size_ParamLimits

0xaba5,	// (0x00030c15) aid_dia3_key_size

0xabb4,	// (0x00030c24) aid_dia3_listrow_size_ParamLimits

0xabb4,	// (0x00030c24) aid_dia3_listrow_size

0xabc9,	// (0x00030c39) dia3_keypad_fun_pane_ParamLimits

0xabc9,	// (0x00030c39) dia3_keypad_fun_pane

0xabe5,	// (0x00030c55) dia3_keypad_num_pane_ParamLimits

0xabe5,	// (0x00030c55) dia3_keypad_num_pane

0xac00,	// (0x00030c70) dia3_listscroll_pane_ParamLimits

0xac00,	// (0x00030c70) dia3_listscroll_pane

0xac13,	// (0x00030c83) dia3_numentry_pane_ParamLimits

0xac13,	// (0x00030c83) dia3_numentry_pane

0xef3b,	// (0x00034fab) dia3_list_pane

0xef46,	// (0x00034fb6) scroll_pane_cp12

0x1db3,	// (0x00027e23) bg_dia3_numentry_pane

0xac27,	// (0x00030c97) dia3_numentry_pane_t1

0xac36,	// (0x00030ca6) cell_dia3_key_num_pane

0xac3e,	// (0x00030cae) cell_dia3_key0_fun_pane_ParamLimits

0xac3e,	// (0x00030cae) cell_dia3_key0_fun_pane

0xac52,	// (0x00030cc2) cell_dia3_key1_fun_pane_ParamLimits

0xac52,	// (0x00030cc2) cell_dia3_key1_fun_pane

0xac6a,	// (0x00030cda) dia3_listrow_pane

0xddcd,	// (0x00033e3d) bg_dia3_numentry_pane_g1

0x1db3,	// (0x00027e23) bg_button_pane_cp21

0xef51,	// (0x00034fc1) cell_dia3_key_num_pane_t1

0xef5f,	// (0x00034fcf) cell_dia3_key_num_pane_t2

0xef6e,	// (0x00034fde) cell_dia3_key_num_pane_t3

0xef7d,	// (0x00034fed) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00035f74) cell_dia3_key_num_pane_t

0x1db3,	// (0x00027e23) bg_button_pane_cp19

0xac7c,	// (0x00030cec) cell_dia3_key0_fun_pane_g1

0x1db3,	// (0x00027e23) bg_button_pane_cp20

0xac84,	// (0x00030cf4) cell_dia3_key1_fun_pane_g1

0xac8c,	// (0x00030cfc) area_left_week_number_pane

0xac95,	// (0x00030d05) area_top_day_name_pane

0xac9e,	// (0x00030d0e) frame_month_view_pane

0xaca6,	// (0x00030d16) grid_month_view_pane

0xacb0,	// (0x00030d20) cell_top_day_name_pane_ParamLimits

0xacb0,	// (0x00030d20) cell_top_day_name_pane

0xacc6,	// (0x00030d36) cell_area_left_week_number_pane_ParamLimits

0xacc6,	// (0x00030d36) cell_area_left_week_number_pane

0xacda,	// (0x00030d4a) cell_month_view_pane_ParamLimits

0xacda,	// (0x00030d4a) cell_month_view_pane

0xef8c,	// (0x00034ffc) frm_month_g1

0xacf5,	// (0x00030d65) frm_month_g2

0xacfd,	// (0x00030d6d) frm_month_g3

0xad05,	// (0x00030d75) frm_month_g4

0xad0d,	// (0x00030d7d) frm_month_g5

0xad15,	// (0x00030d85) frm_month_g6

0xad1d,	// (0x00030d8d) frm_month_g7

0xef95,	// (0x00035005) frm_month_g8

0xad25,	// (0x00030d95) frm_month_g9

0xad2e,	// (0x00030d9e) frm_month_g10

0xad37,	// (0x00030da7) frm_month_g11

0xad40,	// (0x00030db0) frm_month_g12

0xad49,	// (0x00030db9) frm_month_g13

0xad52,	// (0x00030dc2) frm_month_g14

0xad5b,	// (0x00030dcb) frm_month_g15

0xad64,	// (0x00030dd4) frm_month_g16

0x000f,

0xff0d,	// (0x00035f7d) frm_month_g

0xad6d,	// (0x00030ddd) cell_top_day_name_pane_t1

0xad7c,	// (0x00030dec) cell_area_left_week_number_pane_g1

0xad6d,	// (0x00030ddd) cell_area_left_week_number_pane_t1

0xc1f5,	// (0x00032265) cell_month_view_pane_g1

0xad84,	// (0x00030df4) cell_month_view_pane_t1

0x1db3,	// (0x00027e23) main_fps_pane

0xe3ba,	// (0x0003442a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3ba,	// (0x0003442a) cmail_ddmenu_btn02_pane_cp1

0xe3d6,	// (0x00034446) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3d6,	// (0x00034446) cmail_ddmenu_btn02_pane_cp2

0xa5f9,	// (0x00030669) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa5f9,	// (0x00030669) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x00035ea7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x00035ea7) cmail_ddmenu_btn02_pane_g

0xa61a,	// (0x0003068a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa61a,	// (0x0003068a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x00035eac) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x00035eac) cmail_ddmenu_btn02_pane_t

0xad93,	// (0x00030e03) fps_text_pane_ParamLimits

0xad93,	// (0x00030e03) fps_text_pane

0xadaa,	// (0x00030e1a) main_fps_pane_g1_ParamLimits

0xadaa,	// (0x00030e1a) main_fps_pane_g1

0xadc4,	// (0x00030e34) wait_bar_pane_cp010_ParamLimits

0xadc4,	// (0x00030e34) wait_bar_pane_cp010

0xadd5,	// (0x00030e45) fps_text_pane_t1_ParamLimits

0xadd5,	// (0x00030e45) fps_text_pane_t1

0xceb7,	// (0x00032f27) cam4_image_uncrop_pane_g1

0xcec0,	// (0x00032f30) cam4_image_uncrop_pane_g2

0x816f,	// (0x0002e1df) cam4_image_uncrop_pane_g3

0x8178,	// (0x0002e1e8) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00035978) cam4_image_uncrop_pane_g

0xac6a,	// (0x00030cda) dia3_listrow_pane_ParamLimits

0x1db3,	// (0x00027e23) main_phob2_pane

0xa153,	// (0x000301c3) cell_tport_appsw_pane_cp02_ParamLimits

0xa153,	// (0x000301c3) cell_tport_appsw_pane_cp02

0xa167,	// (0x000301d7) cell_tport_appsw_pane_cp03_ParamLimits

0xa167,	// (0x000301d7) cell_tport_appsw_pane_cp03

0x1db3,	// (0x00027e23) phob2_contact_card_pane

0x1db3,	// (0x00027e23) phob2_listscroll_pane

0xef9e,	// (0x0003500e) phob2_list_pane

0xefa6,	// (0x00035016) scroll_pane_cp034

0xaded,	// (0x00030e5d) phob2_cc_data_pane_ParamLimits

0xaded,	// (0x00030e5d) phob2_cc_data_pane

0xae0c,	// (0x00030e7c) phob2_cc_listscroll_pane_ParamLimits

0xae0c,	// (0x00030e7c) phob2_cc_listscroll_pane

0xae2a,	// (0x00030e9a) list_double_large_graphic_phob2_pane_ParamLimits

0xae2a,	// (0x00030e9a) list_double_large_graphic_phob2_pane

0xae3c,	// (0x00030eac) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xae3c,	// (0x00030eac) list_double_large_graphic_phob2_pane_g1

0xefae,	// (0x0003501e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xefae,	// (0x0003501e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00035f9e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00035f9e) list_double_large_graphic_phob2_pane_g

0xae49,	// (0x00030eb9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xae49,	// (0x00030eb9) list_double_large_graphic_phob2_pane_t1

0xae5e,	// (0x00030ece) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xae5e,	// (0x00030ece) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00035fa3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00035fa3) list_double_large_graphic_phob2_pane_t

0x1db3,	// (0x00027e23) list_highlight_pane_cp024

0xefba,	// (0x0003502a) phob2_cc_button_pane

0xae70,	// (0x00030ee0) phob2_cc_data_pane_g1_ParamLimits

0xae70,	// (0x00030ee0) phob2_cc_data_pane_g1

0xae85,	// (0x00030ef5) phob2_cc_data_pane_g2_ParamLimits

0xae85,	// (0x00030ef5) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00035fa8) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00035fa8) phob2_cc_data_pane_g

0xae97,	// (0x00030f07) phob2_cc_data_pane_t1_ParamLimits

0xae97,	// (0x00030f07) phob2_cc_data_pane_t1

0xaeaf,	// (0x00030f1f) phob2_cc_data_pane_t2_ParamLimits

0xaeaf,	// (0x00030f1f) phob2_cc_data_pane_t2

0xaec7,	// (0x00030f37) phob2_cc_data_pane_t3_ParamLimits

0xaec7,	// (0x00030f37) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00035fad) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00035fad) phob2_cc_data_pane_t

0xefc2,	// (0x00035032) phob2_cc_list_pane_ParamLimits

0xefc2,	// (0x00035032) phob2_cc_list_pane

0xd39f,	// (0x0003340f) scroll_pane_cp035_ParamLimits

0xd39f,	// (0x0003340f) scroll_pane_cp035

0x2025,	// (0x00028095) bg_button_pane_cp033

0xefce,	// (0x0003503e) phob2_cc_button_pane_g1

0xefda,	// (0x0003504a) phob2_cc_button_pane_t1

0xefef,	// (0x0003505f) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00035fb4) phob2_cc_button_pane_t

0xaedf,	// (0x00030f4f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaedf,	// (0x00030f4f) list_double_large_graphic_phob2_cc_pane

0xaef1,	// (0x00030f61) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaef1,	// (0x00030f61) list_double_large_graphic_phob2_cc_pane_g1

0xaefd,	// (0x00030f6d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaefd,	// (0x00030f6d) list_double_large_graphic_phob2_cc_pane_g2

0xaf09,	// (0x00030f79) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaf09,	// (0x00030f79) list_double_large_graphic_phob2_cc_pane_g3

0xaf15,	// (0x00030f85) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaf15,	// (0x00030f85) list_double_large_graphic_phob2_cc_pane_g4

0xaf21,	// (0x00030f91) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaf21,	// (0x00030f91) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00035fb9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00035fb9) list_double_large_graphic_phob2_cc_pane_g

0xaf2d,	// (0x00030f9d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaf2d,	// (0x00030f9d) list_double_large_graphic_phob2_cc_pane_t1

0xaf56,	// (0x00030fc6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaf56,	// (0x00030fc6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00035fc4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00035fc4) list_double_large_graphic_phob2_cc_pane_t

0xf001,	// (0x00035071) list_highlight_pane_cp025_ParamLimits

0xf001,	// (0x00035071) list_highlight_pane_cp025

0x2025,	// (0x00028095) bg_button_pane_cp033_ParamLimits

0xefce,	// (0x0003503e) phob2_cc_button_pane_g1_ParamLimits

0xefda,	// (0x0003504a) phob2_cc_button_pane_t1_ParamLimits

0xefef,	// (0x0003505f) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00035fb4) phob2_cc_button_pane_t_ParamLimits

0x2033,	// (0x000280a3) popup_wgtman_window

0xd10d,	// (0x0003317d) scroll_pane_cp038

0xa9fb,	// (0x00030a6b) wgtman_btn_pane_cp_01_ParamLimits

0xa9fb,	// (0x00030a6b) wgtman_btn_pane_cp_01

0xf00f,	// (0x0003507f) wgtman_content_pane

0xf018,	// (0x00035088) wgtman_heading_pane

0x1db3,	// (0x00027e23) bg_heading_pane_cp02

0xf021,	// (0x00035091) wgtman_heading_pane_g1

0xf029,	// (0x00035099) wgtman_heading_pane_t1

0xf037,	// (0x000350a7) scroll_pane_cp036

0xf03f,	// (0x000350af) wgtman_list_pane

0xf047,	// (0x000350b7) wgtman_list_pane_t1_ParamLimits

0xf047,	// (0x000350b7) wgtman_list_pane_t1

0xcea3,	// (0x00032f13) cam4_grid_pane

0x8939,	// (0x0002e9a9) bg_button_pane_cp015_ParamLimits

0x894b,	// (0x0002e9bb) bg_button_pane_cp016_ParamLimits

0x895e,	// (0x0002e9ce) bg_button_pane_cp017_ParamLimits

0x89b6,	// (0x0002ea26) popup_vitu2_query_window_g3_ParamLimits

0x89b6,	// (0x0002ea26) popup_vitu2_query_window_g3

0x8a73,	// (0x0002eae3) popup_vitu2_query_window_t6_ParamLimits

0x8a73,	// (0x0002eae3) popup_vitu2_query_window_t6

0x8a9e,	// (0x0002eb0e) popup_vitu2_query_window_t7_ParamLimits

0x8a9e,	// (0x0002eb0e) popup_vitu2_query_window_t7

0xceb7,	// (0x00032f27) cam4_grid_pane_g1

0xcec0,	// (0x00032f30) cam4_grid_pane_g2

0xf064,	// (0x000350d4) cam4_grid_pane_g3

0xf06d,	// (0x000350dd) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00035fc9) cam4_grid_pane_g

0x3567,	// (0x000295d7) aid_placing_vt_slider_lsc_ParamLimits

0x38c2,	// (0x00029932) vidtel_button_pane_ParamLimits

0x38c2,	// (0x00029932) vidtel_button_pane

0xf078,	// (0x000350e8) bg_button_pane_cp034

0xaf7f,	// (0x00030fef) vidtel_button_pane_g1

0xf082,	// (0x000350f2) vidtel_button_pane_t1

0xd27a,	// (0x000332ea) aid_size_vtel_slider_touch

0xd39f,	// (0x0003340f) scroll_pane_cp039

0xde0b,	// (0x00033e7b) ncim_query_button_pane_cp01_ParamLimits

0xde2a,	// (0x00033e9a) ncimui_query_pane_g1_ParamLimits

0x2025,	// (0x00028095) input_focus_pane_cp012_ParamLimits

0xde4f,	// (0x00033ebf) ncim_query_entry_pane_t1_ParamLimits

0xd39f,	// (0x0003340f) scroll_pane_cp039_ParamLimits

0x4e9c,	// (0x0002af0c) navi_pane_bcale_mc_g1

0x4ea4,	// (0x0002af14) navi_pane_bcale_mc_t1

0xe41f,	// (0x0003448f) main_sp_fs_email_pane_g1

0xe427,	// (0x00034497) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x00035d6a) main_sp_fs_email_pane_g

0xe94c,	// (0x000349bc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe94c,	// (0x000349bc) list_single_cale_mrui_row_pane_g3

0xa642,	// (0x000306b2) list_single_recal_day_pane_g5_event_pane

0xeb1a,	// (0x00034b8a) list_single_recal_day_pane_g7

0xf090,	// (0x00035100) list_recal_day_event_pane_cp01

0xf099,	// (0x00035109) list_recal_vselct_arw_lo_pane_cp01

0xf0a1,	// (0x00035111) list_recal_vselct_arw_up_pane_cp01

0xf0a9,	// (0x00035119) list_recal_vselct_pane_cp01

0xd306,	// (0x00033376) list_recal_day_event_pane_cp01_g1

0xf0b3,	// (0x00035123) list_recal_day_event_pane_cp01_t1

0xeb22,	// (0x00034b92) list_single_recal_day_pane_t1_ParamLimits

0xeb34,	// (0x00034ba4) list_single_recal_day_pane_t2_ParamLimits

0xfe4c,	// (0x00035ebc) list_single_recal_day_pane_t_ParamLimits

0x29f6,	// (0x00028a66) bg_notes_pane_ParamLimits

0x2a04,	// (0x00028a74) list_notes_pane_ParamLimits

0x2a12,	// (0x00028a82) scroll_pane_cp06_ParamLimits

0x2a3a,	// (0x00028aaa) main_notes_pane_ParamLimits

0x1db3,	// (0x00027e23) main_welc_pane

0xaf87,	// (0x00030ff7) main_welc_body_pane_ParamLimits

0xaf87,	// (0x00030ff7) main_welc_body_pane

0xaf9c,	// (0x0003100c) main_welc_opti_pane_ParamLimits

0xaf9c,	// (0x0003100c) main_welc_opti_pane

0xafb1,	// (0x00031021) main_welc_pane_t1_ParamLimits

0xafb1,	// (0x00031021) main_welc_pane_t1

0xafc8,	// (0x00031038) main_welc_body_row_pane_ParamLimits

0xafc8,	// (0x00031038) main_welc_body_row_pane

0xafdc,	// (0x0003104c) main_welc_opti_row_pane_ParamLimits

0xafdc,	// (0x0003104c) main_welc_opti_row_pane

0xf0c1,	// (0x00035131) main_welc_opti_row_pane_g1

0xf0c9,	// (0x00035139) main_welc_opti_row_pane_t1

0xf0d8,	// (0x00035148) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
