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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006b7bf };

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
0x021c,	// (0x0006b9db) Screen

0x0228,	// (0x0006b9e7) application_window

0x0264,	// (0x0006ba23) area_bottom_pane_ParamLimits

0x0264,	// (0x0006ba23) area_bottom_pane

0x029d,	// (0x0006ba5c) area_top_pane_ParamLimits

0x029d,	// (0x0006ba5c) area_top_pane

0x94cb,	// (0x00074c8a) call_video_uplink_pane_ParamLimits

0x94cb,	// (0x00074c8a) call_video_uplink_pane

0x032b,	// (0x0006baea) main_pane_ParamLimits

0x032b,	// (0x0006baea) main_pane

0xc882,	// (0x00078041) context_pane

0x3970,	// (0x0006f12f) navi_pane

0x39a2,	// (0x0006f161) popup_cale_events_window_ParamLimits

0x39a2,	// (0x0006f161) popup_cale_events_window

0xc895,	// (0x00078054) popup_mup_playback_window

0x39ba,	// (0x0006f179) signal_pane

0xa347,	// (0x00075b06) main_browser_pane

0xa9f6,	// (0x000761b5) main_burst_pane

0x36be,	// (0x0006ee7d) main_calc_pane

0xc868,	// (0x00078027) main_cale_day_pane

0x36d2,	// (0x0006ee91) main_cale_month_pane

0xc868,	// (0x00078027) main_cale_week_pane

0xa9f6,	// (0x000761b5) main_call_pane

0xa027,	// (0x000757e6) main_call_poc_pane

0xa9f6,	// (0x000761b5) main_camera_pane

0xa9f6,	// (0x000761b5) main_chi_dic_pane

0xb1d9,	// (0x00076998) main_clock_pane

0xa027,	// (0x000757e6) main_fmradio_pane

0xa9f6,	// (0x000761b5) main_graph_messa_pane

0xa027,	// (0x000757e6) main_help_pane

0xa347,	// (0x00075b06) main_im_pane

0xa282,	// (0x00075a41) main_image_pane_ParamLimits

0xa282,	// (0x00075a41) main_image_pane

0xa027,	// (0x000757e6) main_location2_pane

0xa9f6,	// (0x000761b5) main_location_pane

0xa282,	// (0x00075a41) main_messa_pane

0xa027,	// (0x000757e6) main_mp2_pane

0xa9f6,	// (0x000761b5) main_mp_pane

0xa027,	// (0x000757e6) main_msg_pane

0xa027,	// (0x000757e6) main_mup_eq_pane

0xa027,	// (0x000757e6) main_mup_pane

0xa347,	// (0x00075b06) main_notes_pane

0xa027,	// (0x000757e6) main_pec_pane

0xa027,	// (0x000757e6) main_phob_pane

0xa027,	// (0x000757e6) main_pinb_pane

0xa027,	// (0x000757e6) main_postcard_pane

0xa027,	// (0x000757e6) main_qdial_pane

0xa9f6,	// (0x000761b5) main_skin_pane

0xa027,	// (0x000757e6) main_smil2_pane

0xa9f6,	// (0x000761b5) main_smil_pane

0xa9f6,	// (0x000761b5) main_video_pane

0xa9f6,	// (0x000761b5) main_video_tele_pane

0xa282,	// (0x00075a41) main_viewer_pane_ParamLimits

0xa282,	// (0x00075a41) main_viewer_pane

0xa9f6,	// (0x000761b5) main_vorec_pane

0x3724,	// (0x0006eee3) popup_blid_sat_info_window_ParamLimits

0x3724,	// (0x0006eee3) popup_blid_sat_info_window

0x377c,	// (0x0006ef3b) popup_dyc_status_message_window_ParamLimits

0x377c,	// (0x0006ef3b) popup_dyc_status_message_window

0x3796,	// (0x0006ef55) popup_grid_large_graphic_window_ParamLimits

0x3796,	// (0x0006ef55) popup_grid_large_graphic_window

0x3852,	// (0x0006f011) popup_loc_request_window_ParamLimits

0x3852,	// (0x0006f011) popup_loc_request_window

0x3948,	// (0x0006f107) popup_wml_address_window_ParamLimits

0x3948,	// (0x0006f107) popup_wml_address_window

0x34f8,	// (0x0006ecb7) call_muted_g1

0x31ad,	// (0x0006e96c) popup_call_audio_conf_window_ParamLimits

0x31ad,	// (0x0006e96c) popup_call_audio_conf_window

0x350c,	// (0x0006eccb) popup_call_audio_first_window_ParamLimits

0x350c,	// (0x0006eccb) popup_call_audio_first_window

0x3582,	// (0x0006ed41) popup_call_audio_in_window_ParamLimits

0x3582,	// (0x0006ed41) popup_call_audio_in_window

0x35be,	// (0x0006ed7d) popup_call_audio_out_window_ParamLimits

0x35be,	// (0x0006ed7d) popup_call_audio_out_window

0x35f8,	// (0x0006edb7) popup_call_audio_second_window_ParamLimits

0x35f8,	// (0x0006edb7) popup_call_audio_second_window

0x364e,	// (0x0006ee0d) popup_call_audio_wait_window_ParamLimits

0x364e,	// (0x0006ee0d) popup_call_audio_wait_window

0x3683,	// (0x0006ee42) popup_number_entry_window_ParamLimits

0x3683,	// (0x0006ee42) popup_number_entry_window

0x9501,	// (0x00074cc0) bg_popup_call_pane_cp05_ParamLimits

0x9501,	// (0x00074cc0) bg_popup_call_pane_cp05

0x9521,	// (0x00074ce0) popup_number_entry_window_t1

0x9534,	// (0x00074cf3) popup_number_entry_window_t2

0x9546,	// (0x00074d05) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0007a889) popup_number_entry_window_t

0x9558,	// (0x00074d17) text_title_cp2

0x956b,	// (0x00074d2a) bg_popup_call_pane_cp_ParamLimits

0x956b,	// (0x00074d2a) bg_popup_call_pane_cp

0x9579,	// (0x00074d38) call_thumbnail_pane

0x9581,	// (0x00074d40) popup_call_audio_in_window_g1_ParamLimits

0x9581,	// (0x00074d40) popup_call_audio_in_window_g1

0x958d,	// (0x00074d4c) popup_call_audio_in_window_g2_ParamLimits

0x958d,	// (0x00074d4c) popup_call_audio_in_window_g2

0x9599,	// (0x00074d58) popup_call_audio_in_window_g3_ParamLimits

0x9599,	// (0x00074d58) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0007a892) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0007a892) popup_call_audio_in_window_g

0x95a5,	// (0x00074d64) popup_call_audio_in_window_t1_ParamLimits

0x95a5,	// (0x00074d64) popup_call_audio_in_window_t1

0x95c1,	// (0x00074d80) popup_call_audio_in_window_t2_ParamLimits

0x95c1,	// (0x00074d80) popup_call_audio_in_window_t2

0x95dd,	// (0x00074d9c) popup_call_audio_in_window_t3_ParamLimits

0x95dd,	// (0x00074d9c) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0007a899) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0007a899) popup_call_audio_in_window_t

0x956b,	// (0x00074d2a) bg_popup_call_pane_cp01_ParamLimits

0x956b,	// (0x00074d2a) bg_popup_call_pane_cp01

0x9579,	// (0x00074d38) call_thumbnail_pane_cp02

0x95f0,	// (0x00074daf) call_type_pane_cp022

0x95f8,	// (0x00074db7) popup_call_audio_out_window_g1_ParamLimits

0x95f8,	// (0x00074db7) popup_call_audio_out_window_g1

0x960a,	// (0x00074dc9) popup_call_audio_out_window_g2_ParamLimits

0x960a,	// (0x00074dc9) popup_call_audio_out_window_g2

0x9616,	// (0x00074dd5) popup_call_audio_out_window_g3_ParamLimits

0x9616,	// (0x00074dd5) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007a8a0) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007a8a0) popup_call_audio_out_window_g

0x9628,	// (0x00074de7) popup_call_audio_out_window_t1_ParamLimits

0x9628,	// (0x00074de7) popup_call_audio_out_window_t1

0x9640,	// (0x00074dff) popup_call_audio_out_window_t2_ParamLimits

0x9640,	// (0x00074dff) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0007a8a7) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0007a8a7) popup_call_audio_out_window_t

0x9655,	// (0x00074e14) bg_popup_call_pane_ParamLimits

0x9655,	// (0x00074e14) bg_popup_call_pane

0x04e7,	// (0x0006bca6) call_thumbnail_pane_cp_ParamLimits

0x04e7,	// (0x0006bca6) call_thumbnail_pane_cp

0x96d9,	// (0x00074e98) call_type_pane_cp01_ParamLimits

0x96d9,	// (0x00074e98) call_type_pane_cp01

0x971d,	// (0x00074edc) popup_call_audio_first_window_g1_ParamLimits

0x971d,	// (0x00074edc) popup_call_audio_first_window_g1

0x9769,	// (0x00074f28) popup_call_audio_first_window_g2_ParamLimits

0x9769,	// (0x00074f28) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007a8ac) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007a8ac) popup_call_audio_first_window_g

0x9ec0,	// (0x0007567f) popup_call_audio_first_window_t1_ParamLimits

0x9ec0,	// (0x0007567f) popup_call_audio_first_window_t1

0x9f6c,	// (0x0007572b) popup_call_audio_first_window_t4_ParamLimits

0x9f6c,	// (0x0007572b) popup_call_audio_first_window_t4

0x9ff8,	// (0x000757b7) popup_call_audio_first_window_t5_ParamLimits

0x9ff8,	// (0x000757b7) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007a8b1) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007a8b1) popup_call_audio_first_window_t

0xa027,	// (0x000757e6) bg_popup_call_pane_cp02

0xa031,	// (0x000757f0) call_type_pane_cp023

0xa039,	// (0x000757f8) popup_call_audio_wait_window_g1

0xa041,	// (0x00075800) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007a8b8) popup_call_audio_wait_window_g

0xa049,	// (0x00075808) popup_call_audio_wait_window_t3

0xa057,	// (0x00075816) bg_popup_call_pane_cp03_ParamLimits

0xa057,	// (0x00075816) bg_popup_call_pane_cp03

0xa0b7,	// (0x00075876) call_thumbnail_pane_cp011_ParamLimits

0xa0b7,	// (0x00075876) call_thumbnail_pane_cp011

0xa0c3,	// (0x00075882) call_type_pane_cp034_ParamLimits

0xa0c3,	// (0x00075882) call_type_pane_cp034

0xa0ff,	// (0x000758be) popup_call_audio_second_window_g1_ParamLimits

0xa0ff,	// (0x000758be) popup_call_audio_second_window_g1

0xa13b,	// (0x000758fa) popup_call_audio_second_window_g2_ParamLimits

0xa13b,	// (0x000758fa) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007a8bd) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007a8bd) popup_call_audio_second_window_g

0xa177,	// (0x00075936) popup_call_audio_second_window_t1_ParamLimits

0xa177,	// (0x00075936) popup_call_audio_second_window_t1

0xa1f8,	// (0x000759b7) popup_call_audio_second_window_t2_ParamLimits

0xa1f8,	// (0x000759b7) popup_call_audio_second_window_t2

0xa22e,	// (0x000759ed) popup_call_audio_second_window_t3_ParamLimits

0xa22e,	// (0x000759ed) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0007a8c2) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0007a8c2) popup_call_audio_second_window_t

0xa027,	// (0x000757e6) bg_popup_call_pane_cp04

0xa264,	// (0x00075a23) list_conf_pane

0xa26c,	// (0x00075a2b) popup_call_audio_conf_window_t1

0xa27a,	// (0x00075a39) call_thumbnail_pane_g1

0xa282,	// (0x00075a41) bg_pinb_pane_ParamLimits

0xa282,	// (0x00075a41) bg_pinb_pane

0xa290,	// (0x00075a4f) find_pinb_pane

0xa299,	// (0x00075a58) listscroll_pinb_pane_ParamLimits

0xa299,	// (0x00075a58) listscroll_pinb_pane

0xa2a8,	// (0x00075a67) pinb_bg_pane_g1

0x050b,	// (0x0006bcca) pinb_bg_pane_g2

0x0517,	// (0x0006bcd6) pinb_bg_pane_g3

0x0523,	// (0x0006bce2) pinb_bg_pane_g4

0x052f,	// (0x0006bcee) pinb_bg_pane_g5

0x053b,	// (0x0006bcfa) pinb_bg_pane_g6

0x0546,	// (0x0006bd05) pinb_bg_pane_g7

0x0551,	// (0x0006bd10) pinb_bg_pane_g8

0x055c,	// (0x0006bd1b) pinb_bg_pane_g9

0x0566,	// (0x0006bd25) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0007a8c9) pinb_bg_pane_g

0x0583,	// (0x0006bd42) grid_pinb_pane

0x058c,	// (0x0006bd4b) list_pinb_pane

0x0595,	// (0x0006bd54) scroll_pane_cp01_ParamLimits

0x0595,	// (0x0006bd54) scroll_pane_cp01

0xa2b2,	// (0x00075a71) find_pinb_pane_g1_ParamLimits

0xa2b2,	// (0x00075a71) find_pinb_pane_g1

0xa2ca,	// (0x00075a89) find_pinb_pane_t1

0xa2dc,	// (0x00075a9b) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0007a8e3) find_pinb_pane_t

0xa2f1,	// (0x00075ab0) input_focus_pane_cp01_ParamLimits

0xa2f1,	// (0x00075ab0) input_focus_pane_cp01

0x05a7,	// (0x0006bd66) cell_pinb_pane_ParamLimits

0x05a7,	// (0x0006bd66) cell_pinb_pane

0x05d0,	// (0x0006bd8f) cell_pinb_pane_g1_ParamLimits

0x05d0,	// (0x0006bd8f) cell_pinb_pane_g1

0x05e0,	// (0x0006bd9f) cell_pinb_pane_g2_ParamLimits

0x05e0,	// (0x0006bd9f) cell_pinb_pane_g2

0xa2fd,	// (0x00075abc) cell_pinb_pane_g3_ParamLimits

0xa2fd,	// (0x00075abc) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007a8e8) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007a8e8) cell_pinb_pane_g

0xa027,	// (0x000757e6) grid_highlight_pane_cp01

0x05ec,	// (0x0006bdab) list_pinb_item_pane_ParamLimits

0x05ec,	// (0x0006bdab) list_pinb_item_pane

0xa027,	// (0x000757e6) list_highlight_pane_cp02

0x05fe,	// (0x0006bdbd) list_pinb_item_pane_g1_ParamLimits

0x05fe,	// (0x0006bdbd) list_pinb_item_pane_g1

0x060b,	// (0x0006bdca) list_pinb_item_pane_g2_ParamLimits

0x060b,	// (0x0006bdca) list_pinb_item_pane_g2

0x0617,	// (0x0006bdd6) list_pinb_item_pane_g3_ParamLimits

0x0617,	// (0x0006bdd6) list_pinb_item_pane_g3

0x0628,	// (0x0006bde7) list_pinb_item_pane_g4_ParamLimits

0x0628,	// (0x0006bde7) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007a8ef) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007a8ef) list_pinb_item_pane_g

0x0634,	// (0x0006bdf3) list_pinb_item_pane_t1_ParamLimits

0x0634,	// (0x0006bdf3) list_pinb_item_pane_t1

0x0669,	// (0x0006be28) calc_display_pane

0x0691,	// (0x0006be50) calc_paper_pane

0x06b4,	// (0x0006be73) grid_calc_pane

0xa027,	// (0x000757e6) bg_list_pane_cp01

0x06e2,	// (0x0006bea1) clock_g1

0x06ea,	// (0x0006bea9) clock_g2

0x0001,

0xf139,	// (0x0007a8f8) clock_g

0x06f2,	// (0x0006beb1) clock_t1_ParamLimits

0x06f2,	// (0x0006beb1) clock_t1

0x0707,	// (0x0006bec6) clock_t2_ParamLimits

0x0707,	// (0x0006bec6) clock_t2

0x0719,	// (0x0006bed8) clock_t3_ParamLimits

0x0719,	// (0x0006bed8) clock_t3

0x072b,	// (0x0006beea) clock_t4_ParamLimits

0x072b,	// (0x0006beea) clock_t4

0x073d,	// (0x0006befc) clock_t5_ParamLimits

0x073d,	// (0x0006befc) clock_t5

0x0752,	// (0x0006bf11) clock_t6_ParamLimits

0x0752,	// (0x0006bf11) clock_t6

0x0764,	// (0x0006bf23) clock_t7_ParamLimits

0x0764,	// (0x0006bf23) clock_t7

0x0776,	// (0x0006bf35) clock_t8_ParamLimits

0x0776,	// (0x0006bf35) clock_t8

0x078a,	// (0x0006bf49) clock_t9_ParamLimits

0x078a,	// (0x0006bf49) clock_t9

0x0008,

0xf13e,	// (0x0007a8fd) clock_t_ParamLimits

0xf13e,	// (0x0007a8fd) clock_t

0xa309,	// (0x00075ac8) popup_clock_analogue_window_cp02

0xa309,	// (0x00075ac8) popup_clock_digital_window_cp01

0xa311,	// (0x00075ad0) listscroll_help_pane

0xa027,	// (0x000757e6) phob_pre_status_pane

0xa31b,	// (0x00075ada) grid_qdial_pane

0xa282,	// (0x00075a41) listscroll_mce_pane

0xa282,	// (0x00075a41) bg_notes_pane

0xa325,	// (0x00075ae4) list_notes_pane

0x079e,	// (0x0006bf5d) scroll_pane_cp06

0xa333,	// (0x00075af2) bg_calc_paper_pane

0x97b5,	// (0x00074f74) list_calc_pane

0xa347,	// (0x00075b06) bg_calc_display_pane

0x07b2,	// (0x0006bf71) calc_display_pane_t1

0x07c4,	// (0x0006bf83) calc_display_pane_t2

0x97cf,	// (0x00074f8e) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007a910) calc_display_pane_t

0x07d6,	// (0x0006bf95) cell_calc_pane_ParamLimits

0x07d6,	// (0x0006bf95) cell_calc_pane

0xa353,	// (0x00075b12) bg_calc_paper_pane_g1

0xa35f,	// (0x00075b1e) bg_calc_paper_pane_g2

0xa36b,	// (0x00075b2a) bg_calc_paper_pane_g3

0xa377,	// (0x00075b36) bg_calc_paper_pane_g4

0xa383,	// (0x00075b42) bg_calc_paper_pane_g5

0x080b,	// (0x0006bfca) bg_calc_paper_pane_g6

0x081a,	// (0x0006bfd9) bg_calc_paper_pane_g7

0x0829,	// (0x0006bfe8) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007a917) bg_calc_paper_pane_g

0x083c,	// (0x0006bffb) calc_bg_paper_pane_g9

0x084f,	// (0x0006c00e) list_calc_item_pane_ParamLimits

0x084f,	// (0x0006c00e) list_calc_item_pane

0xa38f,	// (0x00075b4e) list_calc_item_pane_g1

0x97e1,	// (0x00074fa0) list_calc_item_pane_t1_ParamLimits

0x97e1,	// (0x00074fa0) list_calc_item_pane_t1

0x0864,	// (0x0006c023) list_calc_item_pane_t2_ParamLimits

0x0864,	// (0x0006c023) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007a928) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007a928) list_calc_item_pane_t

0xa39c,	// (0x00075b5b) cell_calc_pane_g1

0xa3a6,	// (0x00075b65) grid_highlight_pane_cp02

0x0896,	// (0x0006c055) bg_calc_display_pane_g1

0x089f,	// (0x0006c05e) bg_calc_display_pane_g2

0x08a9,	// (0x0006c068) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0007a932) bg_calc_display_pane_g

0x08b2,	// (0x0006c071) cell_qdial_pane_ParamLimits

0x08b2,	// (0x0006c071) cell_qdial_pane

0x08c6,	// (0x0006c085) cell_qdial_pane_g1_ParamLimits

0x08c6,	// (0x0006c085) cell_qdial_pane_g1

0x08dc,	// (0x0006c09b) cell_qdial_pane_g2_ParamLimits

0x08dc,	// (0x0006c09b) cell_qdial_pane_g2

0xa3c8,	// (0x00075b87) cell_qdial_pane_g3_ParamLimits

0xa3c8,	// (0x00075b87) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007a939) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007a939) cell_qdial_pane_g

0x0903,	// (0x0006c0c2) cell_qdial_pane_t1_ParamLimits

0x0903,	// (0x0006c0c2) cell_qdial_pane_t1

0x091b,	// (0x0006c0da) cell_qdial_pane_t2_ParamLimits

0x091b,	// (0x0006c0da) cell_qdial_pane_t2

0x092e,	// (0x0006c0ed) cell_qdial_pane_t3_ParamLimits

0x092e,	// (0x0006c0ed) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0007a942) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0007a942) cell_qdial_pane_t

0xa027,	// (0x000757e6) grid_highlight_pane_cp04

0xa3d4,	// (0x00075b93) thumbnail_qdial_pane_ParamLimits

0xa3d4,	// (0x00075b93) thumbnail_qdial_pane

0xa91a,	// (0x000760d9) list_help_pane

0xa923,	// (0x000760e2) scroll_pane_cp02

0x0941,	// (0x0006c100) help_list_pane_t1_ParamLimits

0x0941,	// (0x0006c100) help_list_pane_t1

0x97f3,	// (0x00074fb2) bg_notes_pane_g2

0x97fb,	// (0x00074fba) bg_notes_pane_g3

0x9803,	// (0x00074fc2) notes_bg_pane_g1

0x980b,	// (0x00074fca) notes_bg_pane_g4

0x9813,	// (0x00074fd2) notes_bg_pane_g5

0x981b,	// (0x00074fda) notes_bg_pane_g6

0x9823,	// (0x00074fe2) notes_bg_pane_g7

0x982b,	// (0x00074fea) notes_bg_pane_g8

0x9833,	// (0x00074ff2) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0007a960) notes_bg_pane_g

0x095e,	// (0x0006c11d) list_notes_text_pane_ParamLimits

0x095e,	// (0x0006c11d) list_notes_text_pane

0xa92c,	// (0x000760eb) list_notes_text_pane_g1

0x0973,	// (0x0006c132) list_notes_text_pane_t1

0x0981,	// (0x0006c140) listscroll_cale_week_pane

0x09ad,	// (0x0006c16c) bg_cale_heading_pane

0xa94f,	// (0x0007610e) bg_cale_pane_cp01

0x09c5,	// (0x0006c184) cale_week_corner_pane

0x09e4,	// (0x0006c1a3) cale_week_day_heading_pane

0x0a01,	// (0x0006c1c0) cale_week_scroll_pane_g1

0x0a14,	// (0x0006c1d3) cale_week_scroll_pane_g2

0x0a2c,	// (0x0006c1eb) cale_week_scroll_pane_g3

0x0a44,	// (0x0006c203) cale_week_scroll_pane_g4

0x0a5c,	// (0x0006c21b) cale_week_scroll_pane_g5

0x0a7c,	// (0x0006c23b) cale_week_scroll_pane_g6

0x0a9c,	// (0x0006c25b) cale_week_scroll_pane_g7

0x0abc,	// (0x0006c27b) cale_week_scroll_pane_g8

0x0ae0,	// (0x0006c29f) cale_week_scroll_pane_g9

0x0af8,	// (0x0006c2b7) cale_week_scroll_pane_g10

0x0b10,	// (0x0006c2cf) cale_week_scroll_pane_g11

0x0b28,	// (0x0006c2e7) cale_week_scroll_pane_g12

0x0b40,	// (0x0006c2ff) cale_week_scroll_pane_g13

0x0b40,	// (0x0006c2ff) cale_week_scroll_pane_g14

0x0b40,	// (0x0006c2ff) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0007a96f) cale_week_scroll_pane_g

0x0b7c,	// (0x0006c33b) cale_week_time_pane

0x0ba0,	// (0x0006c35f) grid_cale_week_pane

0xa97e,	// (0x0007613d) scroll_pane_cp08

0x0bc6,	// (0x0006c385) cell_cale_week_pane_ParamLimits

0x0bc6,	// (0x0006c385) cell_cale_week_pane

0x0c54,	// (0x0006c413) cale_week_day_heading_pane_t1

0x0c99,	// (0x0006c458) cale_week_day_heading_pane_t2

0x0ce3,	// (0x0006c4a2) cale_week_day_heading_pane_t3

0x0d2d,	// (0x0006c4ec) cale_week_day_heading_pane_t4

0x0d77,	// (0x0006c536) cale_week_day_heading_pane_t5

0x0dc9,	// (0x0006c588) cale_week_day_heading_pane_t6

0x0e1b,	// (0x0006c5da) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007a990) cale_week_day_heading_pane_t

0xa99b,	// (0x0007615a) bg_cale_side_pane

0x0e60,	// (0x0006c61f) cale_week_time_pane_t1

0x0e7a,	// (0x0006c639) cale_week_time_pane_t2

0x0e94,	// (0x0006c653) cale_week_time_pane_t3

0x0eae,	// (0x0006c66d) cale_week_time_pane_t4

0x0ec8,	// (0x0006c687) cale_week_time_pane_t5

0x0ee2,	// (0x0006c6a1) cale_week_time_pane_t6

0x0efc,	// (0x0006c6bb) cale_week_time_pane_t7

0x0f16,	// (0x0006c6d5) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007a99f) cale_week_time_pane_t

0x0f36,	// (0x0006c6f5) cell_cale_week_pane_g2

0x0f55,	// (0x0006c714) cell_cale_week_pane_g3_ParamLimits

0x0f55,	// (0x0006c714) cell_cale_week_pane_g3

0xa9a9,	// (0x00076168) grid_highlight_pane_cp07

0xa9b1,	// (0x00076170) listscroll_gms_pane

0xa9bb,	// (0x0007617a) grid_gms_pane

0xa9c4,	// (0x00076183) listscroll_gms_pane_g1

0xa9cc,	// (0x0007618b) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007a9b0) listscroll_gms_pane_g

0x0f6d,	// (0x0006c72c) scroll_pane_cp010

0x0f78,	// (0x0006c737) cell_gms_pane_ParamLimits

0x0f78,	// (0x0006c737) cell_gms_pane

0x0f8b,	// (0x0006c74a) cell_gms_pane_g1

0xa9d4,	// (0x00076193) cell_gms_pane_g2

0xa9dc,	// (0x0007619b) cell_gms_pane_g3

0xa9e5,	// (0x000761a4) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0007a9b5) cell_gms_pane_g

0xa9ee,	// (0x000761ad) grid_highlight_pane_cp09

0x34a2,	// (0x0006ec61) phob_pre_status_pane_g1

0x34aa,	// (0x0006ec69) phob_pre_status_pane_g2

0x34b2,	// (0x0006ec71) phob_pre_status_pane_g3

0x34ba,	// (0x0006ec79) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0007ada0) phob_pre_status_pane_g

0x34ca,	// (0x0006ec89) phob_pre_status_pane_t1

0x34d8,	// (0x0006ec97) phob_pre_status_pane_t2

0x34e8,	// (0x0006eca7) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007adab) phob_pre_status_pane_t

0xa9f6,	// (0x000761b5) bg_list_pane_cp05

0x0f9b,	// (0x0006c75a) grid_vorec_pane

0x0fa3,	// (0x0006c762) vorec_t1

0x0fb1,	// (0x0006c770) vorec_t2

0x0fbf,	// (0x0006c77e) vorec_t3

0x0fcd,	// (0x0006c78c) vorec_t4

0x944b,	// (0x00074c0a) vorec_t5

0x9459,	// (0x00074c18) vorec_t6

0x0004,

0xf1ff,	// (0x0007a9be) vorec_t

0x9467,	// (0x00074c26) wait_bar_pane_cp01

0x0fe9,	// (0x0006c7a8) cell_vorec_pane_ParamLimits

0x0fe9,	// (0x0006c7a8) cell_vorec_pane

0x983b,	// (0x00074ffa) cell_vorec_pane_g1

0xa027,	// (0x000757e6) grid_highlight_pane_cp05

0x1011,	// (0x0006c7d0) cams_zoom_pane

0x1020,	// (0x0006c7df) image_vga_pane

0x103a,	// (0x0006c7f9) main_camera_pane_g1

0x104c,	// (0x0006c80b) main_camera_pane_g2

0x105c,	// (0x0006c81b) main_camera_pane_g3

0x106c,	// (0x0006c82b) main_camera_pane_g4

0x107c,	// (0x0006c83b) main_camera_pane_g5

0x108c,	// (0x0006c84b) main_camera_pane_g6

0x109e,	// (0x0006c85d) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007a9c9) main_camera_pane_g

0x10ae,	// (0x0006c86d) main_camera_pane_t1

0x10c4,	// (0x0006c883) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007a9da) main_camera_pane_t

0x10fe,	// (0x0006c8bd) cams_zoom_pane_cp_ParamLimits

0x10fe,	// (0x0006c8bd) cams_zoom_pane_cp

0x1126,	// (0x0006c8e5) image_cif_pane_ParamLimits

0x1126,	// (0x0006c8e5) image_cif_pane

0x115c,	// (0x0006c91b) image_subqcif_pane

0x1164,	// (0x0006c923) main_video_pane_g1_ParamLimits

0x1164,	// (0x0006c923) main_video_pane_g1

0x1188,	// (0x0006c947) main_video_pane_g2_ParamLimits

0x1188,	// (0x0006c947) main_video_pane_g2

0x11bc,	// (0x0006c97b) main_video_pane_g3_ParamLimits

0x11bc,	// (0x0006c97b) main_video_pane_g3

0x11ea,	// (0x0006c9a9) main_video_pane_g4_ParamLimits

0x11ea,	// (0x0006c9a9) main_video_pane_g4

0x1218,	// (0x0006c9d7) main_video_pane_g5_ParamLimits

0x1218,	// (0x0006c9d7) main_video_pane_g5

0xaa0a,	// (0x000761c9) main_video_pane_g6_ParamLimits

0xaa0a,	// (0x000761c9) main_video_pane_g6

0x0006,

0xf220,	// (0x0007a9df) main_video_pane_g_ParamLimits

0xf220,	// (0x0007a9df) main_video_pane_g

0x1241,	// (0x0006ca00) main_video_pane_t1_ParamLimits

0x1241,	// (0x0006ca00) main_video_pane_t1

0xaa24,	// (0x000761e3) cams_zoom_pane_g1

0xaa2d,	// (0x000761ec) cams_zoom_pane_g2

0xaa36,	// (0x000761f5) cams_zoom_pane_g3

0xaa3f,	// (0x000761fe) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007a9ee) cams_zoom_pane_g

0x129e,	// (0x0006ca5d) grid_cams_pane

0x12b8,	// (0x0006ca77) linegrid_cams_pane

0x12cc,	// (0x0006ca8b) cell_cams_pane_ParamLimits

0x12cc,	// (0x0006ca8b) cell_cams_pane

0xaa48,	// (0x00076207) cams_burst_image_pane

0xaa50,	// (0x0007620f) cell_cams_pane_g1

0xa027,	// (0x000757e6) grid_highlight_pane_cp03

0xa39c,	// (0x00075b5b) mp_bg_pane_g1

0xa027,	// (0x000757e6) bg_list_pane_cp03

0xc78d,	// (0x00077f4c) bg_mp_pane

0xc795,	// (0x00077f54) grid_mp_pane

0xc79d,	// (0x00077f5c) media_player_g1

0xc7a5,	// (0x00077f64) media_player_t1

0xc7b3,	// (0x00077f72) media_player_t2

0xc7c1,	// (0x00077f80) media_player_t3

0xc7cf,	// (0x00077f8e) media_player_t4

0xc7dd,	// (0x00077f9c) media_player_t5

0xc7eb,	// (0x00077faa) media_player_t6

0xc7f9,	// (0x00077fb8) media_player_t7

0x0006,

0xf5cb,	// (0x0007ad8a) media_player_t

0xc807,	// (0x00077fc6) wait_bar_pane_cp02

0xf5b0,	// (0x0007ad6f) main_usb_pane_t

0x3499,	// (0x0006ec58) cell_mp_pane

0xa39c,	// (0x00075b5b) cell_mp_pane_g1

0xa027,	// (0x000757e6) grid_highlight_pane_cp06

0xaa58,	// (0x00076217) grid_skin_colour_pane

0xaa60,	// (0x0007621f) list_highlight_pane_cp03

0x1402,	// (0x0006cbc1) skin_g1

0xaa68,	// (0x00076227) skin_t1

0xaa77,	// (0x00076236) skin_t2

0x0001,

0xf264,	// (0x0007aa23) skin_t

0x140a,	// (0x0006cbc9) cell_skin_colour_pane_ParamLimits

0x140a,	// (0x0006cbc9) cell_skin_colour_pane

0xaa85,	// (0x00076244) cell_skin_colour_pane_g1

0x1483,	// (0x0006cc42) call_video_g1_ParamLimits

0x1483,	// (0x0006cc42) call_video_g1

0x149f,	// (0x0006cc5e) call_video_g2_ParamLimits

0x149f,	// (0x0006cc5e) call_video_g2

0x0001,

0xf269,	// (0x0007aa28) call_video_g_ParamLimits

0xf269,	// (0x0007aa28) call_video_g

0x14f1,	// (0x0006ccb0) call_video_uplink_pane_cp1_ParamLimits

0x14f1,	// (0x0006ccb0) call_video_uplink_pane_cp1

0xaa97,	// (0x00076256) call_video_uplink_pane_cp2

0x1590,	// (0x0006cd4f) video_down_crop_pane_ParamLimits

0x1590,	// (0x0006cd4f) video_down_crop_pane

0x1687,	// (0x0006ce46) video_down_pane_ParamLimits

0x1687,	// (0x0006ce46) video_down_pane

0xaa9f,	// (0x0007625e) video_down_subqcif_pane_ParamLimits

0xaa9f,	// (0x0007625e) video_down_subqcif_pane

0xaab7,	// (0x00076276) video_down_subqcif_pane_cp_ParamLimits

0xaab7,	// (0x00076276) video_down_subqcif_pane_cp

0xaadd,	// (0x0007629c) im_reading_pane_ParamLimits

0xaadd,	// (0x0007629c) im_reading_pane

0x1795,	// (0x0006cf54) im_writing_pane_ParamLimits

0x1795,	// (0x0006cf54) im_writing_pane

0x17ab,	// (0x0006cf6a) im_reading_pane_t1

0xaaf7,	// (0x000762b6) list_im_pane

0xab08,	// (0x000762c7) scroll_pane_cp07

0x17e4,	// (0x0006cfa3) im_writing_pane_t1_ParamLimits

0x17e4,	// (0x0006cfa3) im_writing_pane_t1

0xab21,	// (0x000762e0) im_writing_pane_t2_ParamLimits

0xab21,	// (0x000762e0) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007aa32) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007aa32) im_writing_pane_t

0xa027,	// (0x000757e6) input_focus_pane_cp04

0xa027,	// (0x000757e6) input_focus_pane_cp05

0x17f9,	// (0x0006cfb8) list_im_single_pane_ParamLimits

0x17f9,	// (0x0006cfb8) list_im_single_pane

0x180d,	// (0x0006cfcc) list_single_im_pane_t1

0x3459,	// (0x0006ec18) blid_accuracy_pane

0x3461,	// (0x0006ec20) blid_compass_pane

0x346b,	// (0x0006ec2a) main_location_t1

0x347b,	// (0x0006ec3a) main_location_t2

0x348b,	// (0x0006ec4a) main_location_t3

0x0002,

0xf5da,	// (0x0007ad99) main_location_t

0xa027,	// (0x000757e6) aid_levels_location

0xa39c,	// (0x00075b5b) blid_accuracy_pane_g1

0xa39c,	// (0x00075b5b) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007aa94) blid_accuracy_pane_g

0xab69,	// (0x00076328) wml_content_pane

0xaba7,	// (0x00076366) wml_button_pane_ParamLimits

0xaba7,	// (0x00076366) wml_button_pane

0x181c,	// (0x0006cfdb) wml_list_single_large_pane_ParamLimits

0x181c,	// (0x0006cfdb) wml_list_single_large_pane

0x1831,	// (0x0006cff0) wml_list_single_medium_pane_ParamLimits

0x1831,	// (0x0006cff0) wml_list_single_medium_pane

0x1847,	// (0x0006d006) wml_list_single_small_pane_ParamLimits

0x1847,	// (0x0006d006) wml_list_single_small_pane

0xabbb,	// (0x0007637a) wml_selection_box_pane_ParamLimits

0xabbb,	// (0x0007637a) wml_selection_box_pane

0xabce,	// (0x0007638d) wml_list_single_pane_t1

0xabdd,	// (0x0007639c) wml_list_single_medium_pane_t1

0xabec,	// (0x000763ab) wml_list_single_large_pane_t1

0xabfb,	// (0x000763ba) input_focus_pane_cp02_ParamLimits

0xabfb,	// (0x000763ba) input_focus_pane_cp02

0xac0e,	// (0x000763cd) wml_selection_box_pane_g1

0xac17,	// (0x000763d6) wml_selection_box_pane_t1_ParamLimits

0xac17,	// (0x000763d6) wml_selection_box_pane_t1

0xa282,	// (0x00075a41) bg_wml_button_pane_ParamLimits

0xa282,	// (0x00075a41) bg_wml_button_pane

0xac2f,	// (0x000763ee) wml_button_pane_g1

0xac37,	// (0x000763f6) wml_button_pane_t1

0xac2f,	// (0x000763ee) wml_button_bg_pane_g1

0xac47,	// (0x00076406) wml_button_bg_pane_g2

0xac4f,	// (0x0007640e) wml_button_bg_pane_g3

0xac57,	// (0x00076416) wml_button_bg_pane_g4

0xac5f,	// (0x0007641e) wml_button_bg_pane_g5

0xac67,	// (0x00076426) wml_button_bg_pane_g6

0xac6f,	// (0x0007642e) wml_button_bg_pane_g7

0xac77,	// (0x00076436) wml_button_bg_pane_g8

0xac7f,	// (0x0007643e) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007aa37) wml_button_bg_pane_g

0x185f,	// (0x0006d01e) bg_list_pane_cp02

0xac87,	// (0x00076446) mce_header_pane_ParamLimits

0xac87,	// (0x00076446) mce_header_pane

0xac9d,	// (0x0007645c) mce_icon_pane

0xac9d,	// (0x0007645c) mce_image_pane

0xaca6,	// (0x00076465) mce_text_pane_ParamLimits

0xaca6,	// (0x00076465) mce_text_pane

0x1867,	// (0x0006d026) scroll_pane_cp03

0xab9f,	// (0x0007635e) scroll_pane_cp04

0xacb9,	// (0x00076478) scroll_pane_cp05_ParamLimits

0xacb9,	// (0x00076478) scroll_pane_cp05

0x1871,	// (0x0006d030) mce_header_field_pane_ParamLimits

0x1871,	// (0x0006d030) mce_header_field_pane

0x1888,	// (0x0006d047) mce_header_field_pane_2_ParamLimits

0x1888,	// (0x0006d047) mce_header_field_pane_2

0x189e,	// (0x0006d05d) mce_header_field_pane_3

0x18a6,	// (0x0006d065) list_single_mce_message_pane_ParamLimits

0x18a6,	// (0x0006d065) list_single_mce_message_pane

0x18bb,	// (0x0006d07a) list_single_mce_smart_pane_ParamLimits

0x18bb,	// (0x0006d07a) list_single_mce_smart_pane

0xacc5,	// (0x00076484) input_focus_pane_cp03

0xacce,	// (0x0007648d) list_header_data_pane

0x18db,	// (0x0006d09a) mce_header_field_pane_t1

0x18eb,	// (0x0006d0aa) list_single_mce_header_pane_ParamLimits

0x18eb,	// (0x0006d0aa) list_single_mce_header_pane

0xacd6,	// (0x00076495) list_single_mce_header_pane_t1

0xace5,	// (0x000764a4) list_single_mce_message_pane_g1

0xaced,	// (0x000764ac) list_single_mce_message_pane_t1

0x1925,	// (0x0006d0e4) bg_cale_heading_pane_cp01_ParamLimits

0x1925,	// (0x0006d0e4) bg_cale_heading_pane_cp01

0xacfb,	// (0x000764ba) bg_cale_pane_cp02_ParamLimits

0xacfb,	// (0x000764ba) bg_cale_pane_cp02

0x1954,	// (0x0006d113) cale_month_corner_pane

0x1973,	// (0x0006d132) cale_month_day_heading_pane_ParamLimits

0x1973,	// (0x0006d132) cale_month_day_heading_pane

0x19ba,	// (0x0006d179) cale_month_pane_g1_ParamLimits

0x19ba,	// (0x0006d179) cale_month_pane_g1

0x19de,	// (0x0006d19d) cale_month_pane_g2_ParamLimits

0x19de,	// (0x0006d19d) cale_month_pane_g2

0x1a0e,	// (0x0006d1cd) cale_month_pane_g3_ParamLimits

0x1a0e,	// (0x0006d1cd) cale_month_pane_g3

0x1a4a,	// (0x0006d209) cale_month_pane_g4_ParamLimits

0x1a4a,	// (0x0006d209) cale_month_pane_g4

0x1a86,	// (0x0006d245) cale_month_pane_g5_ParamLimits

0x1a86,	// (0x0006d245) cale_month_pane_g5

0x1ace,	// (0x0006d28d) cale_month_pane_g6_ParamLimits

0x1ace,	// (0x0006d28d) cale_month_pane_g6

0x1b1a,	// (0x0006d2d9) cale_month_pane_g7_ParamLimits

0x1b1a,	// (0x0006d2d9) cale_month_pane_g7

0x1b6e,	// (0x0006d32d) cale_month_pane_g8_ParamLimits

0x1b6e,	// (0x0006d32d) cale_month_pane_g8

0x1bc2,	// (0x0006d381) cale_month_pane_g9_ParamLimits

0x1bc2,	// (0x0006d381) cale_month_pane_g9

0x1c14,	// (0x0006d3d3) cale_month_pane_g10_ParamLimits

0x1c14,	// (0x0006d3d3) cale_month_pane_g10

0x1c66,	// (0x0006d425) cale_month_pane_g11_ParamLimits

0x1c66,	// (0x0006d425) cale_month_pane_g11

0x1cb8,	// (0x0006d477) cale_month_pane_g12_ParamLimits

0x1cb8,	// (0x0006d477) cale_month_pane_g12

0x1d0a,	// (0x0006d4c9) cale_month_pane_g13_ParamLimits

0x1d0a,	// (0x0006d4c9) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007aa4a) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007aa4a) cale_month_pane_g

0x1d5c,	// (0x0006d51b) cale_month_week_pane

0x1d80,	// (0x0006d53f) grid_cale_month_pane_ParamLimits

0x1d80,	// (0x0006d53f) grid_cale_month_pane

0x1dbe,	// (0x0006d57d) cale_month_day_heading_pane_t1

0x1e44,	// (0x0006d603) cale_month_day_heading_pane_t2

0x1ed5,	// (0x0006d694) cale_month_day_heading_pane_t3

0x1f66,	// (0x0006d725) cale_month_day_heading_pane_t4

0x1ffb,	// (0x0006d7ba) cale_month_day_heading_pane_t5

0x209c,	// (0x0006d85b) cale_month_day_heading_pane_t6

0x213d,	// (0x0006d8fc) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007aa65) cale_month_day_heading_pane_t

0xa99b,	// (0x0007615a) bg_cale_side_pane_cp01

0x21e6,	// (0x0006d9a5) cale_month_week_pane_t1

0x21ff,	// (0x0006d9be) cale_month_week_pane_t2

0x2218,	// (0x0006d9d7) cale_month_week_pane_t3

0x2231,	// (0x0006d9f0) cale_month_week_pane_t4

0x224a,	// (0x0006da09) cale_month_week_pane_t5

0x2263,	// (0x0006da22) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007aa74) cale_month_week_pane_t

0x227c,	// (0x0006da3b) cell_cale_month_pane_ParamLimits

0x227c,	// (0x0006da3b) cell_cale_month_pane

0x9845,	// (0x00075004) cell_cale_month_pane_g1

0x23d0,	// (0x0006db8f) cell_cale_month_pane_t1_ParamLimits

0x23d0,	// (0x0006db8f) cell_cale_month_pane_t1

0xa9a9,	// (0x00076168) grid_highlight_pane_cp08

0xa39c,	// (0x00075b5b) main_smil_g1

0x23f0,	// (0x0006dbaf) smil_status_pane

0xad3a,	// (0x000764f9) smil_text_pane

0xc6a1,	// (0x00077e60) bg_popup_call3_rect_pane_g8

0xc6a9,	// (0x00077e68) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ad2d) bg_popup_call3_rect_pane_g

0xc8fc,	// (0x000780bb) smil_status_volume_pane_g1

0xad44,	// (0x00076503) smil_status_pane_t1

0x998f,	// (0x0007514e) volume_smil_pane

0xad5b,	// (0x0007651a) list_smil_text_pane

0x2403,	// (0x0006dbc2) scroll_pane_cp011

0x240e,	// (0x0006dbcd) smil_text_list_pane_t1_ParamLimits

0x240e,	// (0x0006dbcd) smil_text_list_pane_t1

0x9851,	// (0x00075010) aid_volume_smil_ParamLimits

0x9851,	// (0x00075010) aid_volume_smil

0xa39c,	// (0x00075b5b) smil_volume_pane_g1

0xa39c,	// (0x00075b5b) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007aa94) smil_volume_pane_g

0x0981,	// (0x0006c140) listscroll_cale_day_pane

0xad65,	// (0x00076524) bg_cale_pane

0xad7d,	// (0x0007653c) list_cale_pane

0xada0,	// (0x0007655f) scroll_pane_cp09

0xadb1,	// (0x00076570) cale_bg_pane_g1

0xadb9,	// (0x00076578) cale_bg_pane_g2

0xadc1,	// (0x00076580) cale_bg_pane_g3

0xadc9,	// (0x00076588) cale_bg_pane_g4

0xadd1,	// (0x00076590) cale_bg_pane_g5

0xadd9,	// (0x00076598) cale_bg_pane_g6

0xade1,	// (0x000765a0) cale_bg_pane_g7

0xade9,	// (0x000765a8) cale_bg_pane_g8

0xadf1,	// (0x000765b0) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007aa99) cale_bg_pane_g

0x2452,	// (0x0006dc11) list_cale_time_pane_ParamLimits

0x2452,	// (0x0006dc11) list_cale_time_pane

0xadf9,	// (0x000765b8) list_cale_time_pane_g1_ParamLimits

0xadf9,	// (0x000765b8) list_cale_time_pane_g1

0xae05,	// (0x000765c4) list_cale_time_pane_g2_ParamLimits

0xae05,	// (0x000765c4) list_cale_time_pane_g2

0x2467,	// (0x0006dc26) list_cale_time_pane_g3_ParamLimits

0x2467,	// (0x0006dc26) list_cale_time_pane_g3

0x2475,	// (0x0006dc34) list_cale_time_pane_g4_ParamLimits

0x2475,	// (0x0006dc34) list_cale_time_pane_g4

0x2483,	// (0x0006dc42) list_cale_time_pane_g5_ParamLimits

0x2483,	// (0x0006dc42) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007aaac) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007aaac) list_cale_time_pane_g

0xae1f,	// (0x000765de) list_cale_time_pane_t1_ParamLimits

0xae1f,	// (0x000765de) list_cale_time_pane_t1

0xae47,	// (0x00076606) list_cale_time_pane_t2_ParamLimits

0xae47,	// (0x00076606) list_cale_time_pane_t2

0x27e4,	// (0x0006dfa3) aid_blid_cardinal_pane

0x2822,	// (0x0006dfe1) compass_pane_t4

0xae6f,	// (0x0007662e) list_cale_time_pane_t4_ParamLimits

0xae6f,	// (0x0007662e) list_cale_time_pane_t4

0x2830,	// (0x0006dfef) compass_pane_t5

0x283e,	// (0x0006dffd) compass_pane_t6

0x284c,	// (0x0006e00b) compass_pane_t7

0xb32c,	// (0x00076aeb) navi_pane_cc_t1

0xb509,	// (0x00076cc8) aid_phob_thumbnail_center_pane

0x2e71,	// (0x0006e630) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007aab9) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007aab9) list_cale_time_pane_t

0x956b,	// (0x00074d2a) bg_popup_window_pane_cp02_ParamLimits

0x956b,	// (0x00074d2a) bg_popup_window_pane_cp02

0xae97,	// (0x00076656) heading_pane_cp01_ParamLimits

0xae97,	// (0x00076656) heading_pane_cp01

0xaea3,	// (0x00076662) loc_req_pane_ParamLimits

0xaea3,	// (0x00076662) loc_req_pane

0xaeb3,	// (0x00076672) loc_type_pane_ParamLimits

0xaeb3,	// (0x00076672) loc_type_pane

0xaec5,	// (0x00076684) loc_type_pane_t1_ParamLimits

0xaec5,	// (0x00076684) loc_type_pane_t1

0xaed7,	// (0x00076696) loc_type_pane_t2_ParamLimits

0xaed7,	// (0x00076696) loc_type_pane_t2

0xaee9,	// (0x000766a8) loc_type_pane_t3_ParamLimits

0xaee9,	// (0x000766a8) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007aac0) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007aac0) loc_type_pane_t

0xaefb,	// (0x000766ba) list_loc_req_pane

0xaf05,	// (0x000766c4) scroll_pane_cp012

0x2491,	// (0x0006dc50) list_single_loc_request_popup_menu_pane_ParamLimits

0x2491,	// (0x0006dc50) list_single_loc_request_popup_menu_pane

0xaf10,	// (0x000766cf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf10,	// (0x000766cf) list_single_loc_request_popup_menu_pane_g1

0xaf1c,	// (0x000766db) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf1c,	// (0x000766db) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007aac7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007aac7) list_single_loc_request_popup_menu_pane_g

0xaf28,	// (0x000766e7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf28,	// (0x000766e7) list_single_loc_request_popup_menu_pane_t1

0xa282,	// (0x00075a41) bg_popup_window_pane_cp03_ParamLimits

0xa282,	// (0x00075a41) bg_popup_window_pane_cp03

0xaf3e,	// (0x000766fd) heading_loc_req_pane_ParamLimits

0xaf3e,	// (0x000766fd) heading_loc_req_pane

0x249e,	// (0x0006dc5d) popup_dyc_status_message_window_g1_ParamLimits

0x249e,	// (0x0006dc5d) popup_dyc_status_message_window_g1

0x24b2,	// (0x0006dc71) popup_dyc_status_message_window_t1_ParamLimits

0x24b2,	// (0x0006dc71) popup_dyc_status_message_window_t1

0x24c7,	// (0x0006dc86) popup_dyc_status_message_window_t2_ParamLimits

0x24c7,	// (0x0006dc86) popup_dyc_status_message_window_t2

0x24dc,	// (0x0006dc9b) popup_dyc_status_message_window_t3_ParamLimits

0x24dc,	// (0x0006dc9b) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007aacc) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007aacc) popup_dyc_status_message_window_t

0xa027,	// (0x000757e6) bg_heading_pane_cp01

0xaf4a,	// (0x00076709) heading_loc_req_pane_g1

0xaf52,	// (0x00076711) heading_loc_req_pane_g2

0xaf5a,	// (0x00076719) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007aad3) heading_loc_req_pane_g

0xaf62,	// (0x00076721) heading_loc_req_pane_t1

0xaf71,	// (0x00076730) bg_popup_sub_pane_cp01_ParamLimits

0xaf71,	// (0x00076730) bg_popup_sub_pane_cp01

0xaf7f,	// (0x0007673e) popup_cale_events_window_g1_ParamLimits

0xaf7f,	// (0x0007673e) popup_cale_events_window_g1

0xaf9f,	// (0x0007675e) popup_cale_events_window_g2_ParamLimits

0xaf9f,	// (0x0007675e) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007ab07) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007ab07) popup_cale_events_window_g

0xafbf,	// (0x0007677e) popup_cale_events_window_t1_ParamLimits

0xafbf,	// (0x0007677e) popup_cale_events_window_t1

0xafd1,	// (0x00076790) popup_cale_events_window_t2_ParamLimits

0xafd1,	// (0x00076790) popup_cale_events_window_t2

0xb00f,	// (0x000767ce) popup_cale_events_window_t3_ParamLimits

0xb00f,	// (0x000767ce) popup_cale_events_window_t3

0xb049,	// (0x00076808) popup_cale_events_window_t4_ParamLimits

0xb049,	// (0x00076808) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007ab0c) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007ab0c) popup_cale_events_window_t

0x25df,	// (0x0006dd9e) call_type_pane

0x25ef,	// (0x0006ddae) popup_call_status_window_g1

0x2603,	// (0x0006ddc2) popup_call_status_window_g2

0x2617,	// (0x0006ddd6) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007ab15) popup_call_status_window_g

0xb07f,	// (0x0007683e) call_type_pane_g1

0xb088,	// (0x00076847) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007ab1c) call_type_pane_g

0xa027,	// (0x000757e6) bg_popup_sub_pane_cp02

0xb091,	// (0x00076850) listscroll_popup_wml_pane

0xb099,	// (0x00076858) list_wml_pane

0xb0a3,	// (0x00076862) scroll_pane_cp013

0xb0ae,	// (0x0007686d) list_single_graphic_popup_wml_pane_ParamLimits

0xb0ae,	// (0x0007686d) list_single_graphic_popup_wml_pane

0xa39c,	// (0x00075b5b) list_single_graphic_popup_wml_pane_g1

0xb0c2,	// (0x00076881) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007ab21) list_single_graphic_popup_wml_pane_g

0xb0ca,	// (0x00076889) list_single_graphic_popup_wml_pane_t1

0xb0e0,	// (0x0007689f) aid_call_pane

0xa27a,	// (0x00075a39) popup_clock_analogue_window_g1

0xa27a,	// (0x00075a39) popup_clock_analogue_window_g2

0x9873,	// (0x00075032) popup_clock_analogue_window_g3

0x9873,	// (0x00075032) popup_clock_analogue_window_g4

0xa39c,	// (0x00075b5b) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007ab26) popup_clock_analogue_window_g

0x987b,	// (0x0007503a) popup_clock_analogue_window_t1

0x9889,	// (0x00075048) clock_digital_number_pane_ParamLimits

0x9889,	// (0x00075048) clock_digital_number_pane

0x9895,	// (0x00075054) clock_digital_number_pane_cp02_ParamLimits

0x9895,	// (0x00075054) clock_digital_number_pane_cp02

0x98a1,	// (0x00075060) clock_digital_number_pane_cp03_ParamLimits

0x98a1,	// (0x00075060) clock_digital_number_pane_cp03

0x98ad,	// (0x0007506c) clock_digital_number_pane_cp04_ParamLimits

0x98ad,	// (0x0007506c) clock_digital_number_pane_cp04

0x98bd,	// (0x0007507c) clock_digital_separator_pane_ParamLimits

0x98bd,	// (0x0007507c) clock_digital_separator_pane

0x98c9,	// (0x00075088) popup_clock_digital_window_t1

0xa39c,	// (0x00075b5b) clock_digital_number_pane_g1

0xa39c,	// (0x00075b5b) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007aa94) clock_digital_number_pane_g

0xa39c,	// (0x00075b5b) clock_digital_separator_pane_g1

0xa39c,	// (0x00075b5b) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007aa94) clock_digital_separator_pane_g

0xa027,	// (0x000757e6) bg_popup_window_pane_cp04

0xb0e8,	// (0x000768a7) heading_pane_cp03

0xb0f0,	// (0x000768af) listscroll_popup_gms_pane

0xb0f8,	// (0x000768b7) grid_large_graphic_popup_pane

0xb102,	// (0x000768c1) listscroll_popup_gms_pane_g1

0xb10a,	// (0x000768c9) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007ab31) listscroll_popup_gms_pane_g

0xab9f,	// (0x0007635e) scroll_pane_cp014

0x2626,	// (0x0006dde5) cell_large_graphic_popup_pane_ParamLimits

0x2626,	// (0x0006dde5) cell_large_graphic_popup_pane

0x263e,	// (0x0006ddfd) cell_large_graphic_popup_pane_g1_ParamLimits

0x263e,	// (0x0006ddfd) cell_large_graphic_popup_pane_g1

0xb112,	// (0x000768d1) cell_large_graphic_popup_pane_g2_ParamLimits

0xb112,	// (0x000768d1) cell_large_graphic_popup_pane_g2

0xb11e,	// (0x000768dd) cell_large_graphic_popup_pane_g3_ParamLimits

0xb11e,	// (0x000768dd) cell_large_graphic_popup_pane_g3

0xb12b,	// (0x000768ea) cell_large_graphic_popup_pane_g4_ParamLimits

0xb12b,	// (0x000768ea) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007ab36) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007ab36) cell_large_graphic_popup_pane_g

0xb13b,	// (0x000768fa) grid_highlight_pane_cp010

0xa39c,	// (0x00075b5b) bg_popup_call_pane_g1

0xb145,	// (0x00076904) list_single_graphic_popup_conf_pane_ParamLimits

0xb145,	// (0x00076904) list_single_graphic_popup_conf_pane

0xb158,	// (0x00076917) list_highlight_pane_cp01

0xb161,	// (0x00076920) list_single_graphic_popup_conf_pane_g1

0xb169,	// (0x00076928) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007ab3f) list_single_graphic_popup_conf_pane_g

0xb171,	// (0x00076930) list_single_graphic_popup_conf_pane_t1

0xb17f,	// (0x0007693e) linegrid_cams_pane_g1

0x264a,	// (0x0006de09) linegrid_cams_pane_g2

0xa9dc,	// (0x0007619b) linegrid_cams_pane_g3

0xb188,	// (0x00076947) linegrid_cams_pane_g4

0x2653,	// (0x0006de12) linegrid_cams_pane_g5

0x265c,	// (0x0006de1b) linegrid_cams_pane_g6

0xa9e5,	// (0x000761a4) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007ab44) linegrid_cams_pane_g

0xb191,	// (0x00076950) popup_clock_analogue_window

0xb191,	// (0x00076950) popup_clock_digital_window

0xa027,	// (0x000757e6) popup_phob_thumbnail_window

0xa39c,	// (0x00075b5b) call_video_uplink_pane_g1

0xb19a,	// (0x00076959) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007ab53) call_video_uplink_pane_g

0xb1a2,	// (0x00076961) video_uplink_pane

0xb1aa,	// (0x00076969) mce_image_pane_g1

0x2667,	// (0x0006de26) mce_image_pane_g2

0x2671,	// (0x0006de30) mce_image_pane_g3

0x2679,	// (0x0006de38) mce_image_pane_g4

0x2681,	// (0x0006de40) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007ab58) mce_image_pane_g

0xb1b4,	// (0x00076973) control_top_pane_stacon_cp01_ParamLimits

0xb1b4,	// (0x00076973) control_top_pane_stacon_cp01

0xb1c8,	// (0x00076987) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1c8,	// (0x00076987) uni_indicator_pane_stacon_cp01

0xb1d9,	// (0x00076998) bg_popup_sub_pane_cp03

0xb1e3,	// (0x000769a2) chi_dic_find_pane

0x2689,	// (0x0006de48) listscroll_chi_dic_pane

0xb1eb,	// (0x000769aa) main_pane_chidic_g1

0xb1f3,	// (0x000769b2) chi_dic_find_pane_t1

0xb201,	// (0x000769c0) find_chidic_pane

0xb20a,	// (0x000769c9) chi_dic_list_pane_ParamLimits

0xb20a,	// (0x000769c9) chi_dic_list_pane

0xb21b,	// (0x000769da) scroll_pane_cp020

0xb223,	// (0x000769e2) find_chidic_pane_t1

0xa027,	// (0x000757e6) input_focus_pane_cp06

0x269d,	// (0x0006de5c) list_chi_dic_pane_ParamLimits

0x269d,	// (0x0006de5c) list_chi_dic_pane

0x26af,	// (0x0006de6e) list_chi_dic_pane_t1_ParamLimits

0x26af,	// (0x0006de6e) list_chi_dic_pane_t1

0xa027,	// (0x000757e6) list_highlight_pane_cp020

0xb232,	// (0x000769f1) bg_cale_heading_pane_g1

0x26c2,	// (0x0006de81) bg_cale_heading_pane_g2

0x26ca,	// (0x0006de89) bg_cale_heading_pane_g3

0x26d2,	// (0x0006de91) bg_cale_heading_pane_g4

0x26dc,	// (0x0006de9b) bg_cale_heading_pane_g5

0x26e6,	// (0x0006dea5) bg_cale_heading_pane_g6

0x26ee,	// (0x0006dead) bg_cale_heading_pane_g7

0x26f6,	// (0x0006deb5) bg_cale_heading_pane_g8

0x2700,	// (0x0006debf) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007ab63) bg_cale_heading_pane_g

0xb232,	// (0x000769f1) bg_cale_side_pane_g1

0x270a,	// (0x0006dec9) bg_cale_side_pane_g2

0x2712,	// (0x0006ded1) bg_cale_side_pane_g3

0x271a,	// (0x0006ded9) bg_cale_side_pane_g4

0x2722,	// (0x0006dee1) bg_cale_side_pane_g5

0x272a,	// (0x0006dee9) bg_cale_side_pane_g6

0x2732,	// (0x0006def1) bg_cale_side_pane_g7

0x273a,	// (0x0006def9) bg_cale_side_pane_g8

0x2742,	// (0x0006df01) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007ab76) bg_cale_side_pane_g

0x274a,	// (0x0006df09) popup_call_status_window_ParamLimits

0x274a,	// (0x0006df09) popup_call_status_window

0xb23a,	// (0x000769f9) stacon_top_pane

0xb242,	// (0x00076a01) status_pane_ParamLimits

0xb242,	// (0x00076a01) status_pane

0xb257,	// (0x00076a16) status_small_pane

0xb25f,	// (0x00076a1e) control_pane

0xa027,	// (0x000757e6) stacon_bottom_pane

0xb267,	// (0x00076a26) list_single_mce_smart_pane_t1_ParamLimits

0xb267,	// (0x00076a26) list_single_mce_smart_pane_t1

0xb27a,	// (0x00076a39) list_single_mce_smart_pane_t2_ParamLimits

0xb27a,	// (0x00076a39) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007ab89) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007ab89) list_single_mce_smart_pane_t

0x2793,	// (0x0006df52) compass_pane

0x279c,	// (0x0006df5b) main_location2_pane_t1

0x27ae,	// (0x0006df6d) main_location2_pane_t2

0x27c0,	// (0x0006df7f) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007ab8e) main_location2_pane_t

0xb299,	// (0x00076a58) compass_pane_g1_ParamLimits

0xb299,	// (0x00076a58) compass_pane_g1

0x2804,	// (0x0006dfc3) compass_pane_t1

0x2813,	// (0x0006dfd2) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007ab97) compass_pane_t

0x285a,	// (0x0006e019) text_secondary_cp61

0xb323,	// (0x00076ae2) navi_pane_cams_g5

0xb39f,	// (0x00076b5e) navi_pane_im_t1

0xb3ad,	// (0x00076b6c) navi_pane_mp_g1_ParamLimits

0xb3ad,	// (0x00076b6c) navi_pane_mp_g1

0xb3c1,	// (0x00076b80) navi_pane_mp_g2_ParamLimits

0xb3c1,	// (0x00076b80) navi_pane_mp_g2

0xb3cd,	// (0x00076b8c) navi_pane_mp_g3_ParamLimits

0xb3cd,	// (0x00076b8c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007abab) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007abab) navi_pane_mp_g

0xb3d9,	// (0x00076b98) navi_pane_mp_t1

0xb3e7,	// (0x00076ba6) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007abb2) navi_pane_mp_t

0xb452,	// (0x00076c11) navi_pane_vt_g1

0xb3d9,	// (0x00076b98) navi_pane_vt_t1

0xb45a,	// (0x00076c19) navi_slider_pane

0xa9f6,	// (0x000761b5) zooming_pane

0xb46a,	// (0x00076c29) navi_slider_pane_g1

0x98e6,	// (0x000750a5) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007abb9) navi_slider_pane_g

0xb48e,	// (0x00076c4d) aid_levels_zoom

0xb496,	// (0x00076c55) zooming_pane_g1

0xb49e,	// (0x00076c5d) zooming_pane_g2

0xb49e,	// (0x00076c5d) zooming_pane_g3

0x0002,

0xf409,	// (0x0007abc8) zooming_pane_g

0xb4a6,	// (0x00076c65) level_10_zoom

0xb4af,	// (0x00076c6e) level_11_zoom

0xb4b8,	// (0x00076c77) level_1_zoom

0xb4c1,	// (0x00076c80) level_2_zoom

0xb4ca,	// (0x00076c89) level_3_zoom

0xb4d3,	// (0x00076c92) level_4_zoom

0xb4dc,	// (0x00076c9b) level_5_zoom

0xb4e5,	// (0x00076ca4) level_6_zoom

0xb4ee,	// (0x00076cad) level_7_zoom

0xb4f7,	// (0x00076cb6) level_8_zoom

0xb500,	// (0x00076cbf) level_9_zoom

0xb511,	// (0x00076cd0) popup_phob_thumbnail_window_g1

0xb519,	// (0x00076cd8) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007abcf) popup_phob_thumbnail_window_g

0xc80f,	// (0x00077fce) level_1_location

0xc817,	// (0x00077fd6) level_2_location

0xc81f,	// (0x00077fde) level_3_location

0xc827,	// (0x00077fe6) level_4_location

0xa9f6,	// (0x000761b5) level_5_location

0x28ab,	// (0x0006e06a) mce_icon_pane_g1

0x28b5,	// (0x0006e074) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007abd4) mce_icon_pane_g

0x28bd,	// (0x0006e07c) main_mup_pane_g1_ParamLimits

0x28bd,	// (0x0006e07c) main_mup_pane_g1

0x28d3,	// (0x0006e092) main_mup_pane_g2_ParamLimits

0x28d3,	// (0x0006e092) main_mup_pane_g2

0x28eb,	// (0x0006e0aa) main_mup_pane_g3_ParamLimits

0x28eb,	// (0x0006e0aa) main_mup_pane_g3

0x2903,	// (0x0006e0c2) main_mup_pane_g4_ParamLimits

0x2903,	// (0x0006e0c2) main_mup_pane_g4

0x291b,	// (0x0006e0da) main_mup_pane_g5_ParamLimits

0x291b,	// (0x0006e0da) main_mup_pane_g5

0x2937,	// (0x0006e0f6) main_mup_pane_g6_ParamLimits

0x2937,	// (0x0006e0f6) main_mup_pane_g6

0x294f,	// (0x0006e10e) main_mup_pane_g7_ParamLimits

0x294f,	// (0x0006e10e) main_mup_pane_g7

0x2967,	// (0x0006e126) main_mup_pane_g8_ParamLimits

0x2967,	// (0x0006e126) main_mup_pane_g8

0x2981,	// (0x0006e140) main_mup_pane_g9_ParamLimits

0x2981,	// (0x0006e140) main_mup_pane_g9

0x299b,	// (0x0006e15a) main_mup_pane_g10_ParamLimits

0x299b,	// (0x0006e15a) main_mup_pane_g10

0x29b5,	// (0x0006e174) main_mup_pane_g11_ParamLimits

0x29b5,	// (0x0006e174) main_mup_pane_g11

0x29c9,	// (0x0006e188) main_mup_pane_g12_ParamLimits

0x29c9,	// (0x0006e188) main_mup_pane_g12

0x29df,	// (0x0006e19e) main_mup_pane_g13_ParamLimits

0x29df,	// (0x0006e19e) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007abd9) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007abd9) main_mup_pane_g

0x29f3,	// (0x0006e1b2) main_mup_pane_t1_ParamLimits

0x29f3,	// (0x0006e1b2) main_mup_pane_t1

0x2a0d,	// (0x0006e1cc) main_mup_pane_t2_ParamLimits

0x2a0d,	// (0x0006e1cc) main_mup_pane_t2

0x2a25,	// (0x0006e1e4) main_mup_pane_t3_ParamLimits

0x2a25,	// (0x0006e1e4) main_mup_pane_t3

0x2a3d,	// (0x0006e1fc) main_mup_pane_t4_ParamLimits

0x2a3d,	// (0x0006e1fc) main_mup_pane_t4

0x2a5b,	// (0x0006e21a) main_mup_pane_t5_ParamLimits

0x2a5b,	// (0x0006e21a) main_mup_pane_t5

0x2a70,	// (0x0006e22f) main_mup_pane_t6_ParamLimits

0x2a70,	// (0x0006e22f) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007abf4) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007abf4) main_mup_pane_t

0x2a82,	// (0x0006e241) mup_progress_pane_ParamLimits

0x2a82,	// (0x0006e241) mup_progress_pane

0x2a8e,	// (0x0006e24d) mup_visualizer_pane_ParamLimits

0x2a8e,	// (0x0006e24d) mup_visualizer_pane

0x2abe,	// (0x0006e27d) mup_volume_pane_ParamLimits

0x2abe,	// (0x0006e27d) mup_volume_pane

0xb521,	// (0x00076ce0) mup_visualizer_pane_g1_ParamLimits

0xb521,	// (0x00076ce0) mup_visualizer_pane_g1

0xb521,	// (0x00076ce0) mup_visualizer_pane_g2_ParamLimits

0xb521,	// (0x00076ce0) mup_visualizer_pane_g2

0xb299,	// (0x00076a58) mup_visualizer_pane_g3_ParamLimits

0xb299,	// (0x00076a58) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007ac01) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007ac01) mup_visualizer_pane_g

0xa39c,	// (0x00075b5b) mup_volume_pane_g1

0xb537,	// (0x00076cf6) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007ac08) mup_volume_pane_g

0xa39c,	// (0x00075b5b) mup_progress_pane_g1

0xb540,	// (0x00076cff) mup_progress_pane_g2

0xb549,	// (0x00076d08) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007ac0d) mup_progress_pane_g

0xa027,	// (0x000757e6) bg_popup_window_pane_cp05

0xb552,	// (0x00076d11) heading_pane_cp02_ParamLimits

0xb552,	// (0x00076d11) heading_pane_cp02

0xb56c,	// (0x00076d2b) list_popup_blid_pane

0xb574,	// (0x00076d33) list_blid_sat_info_pane_ParamLimits

0xb574,	// (0x00076d33) list_blid_sat_info_pane

0xb587,	// (0x00076d46) list_blid_sat_info_pane_g1

0xb58f,	// (0x00076d4e) list_blid_sat_info_pane_t1

0x2bd4,	// (0x0006e393) mup_equalizer_pane_ParamLimits

0x2bd4,	// (0x0006e393) mup_equalizer_pane

0x2bed,	// (0x0006e3ac) mup_equalizer_pane_cp1_ParamLimits

0x2bed,	// (0x0006e3ac) mup_equalizer_pane_cp1

0x2c0a,	// (0x0006e3c9) mup_equalizer_pane_cp2_ParamLimits

0x2c0a,	// (0x0006e3c9) mup_equalizer_pane_cp2

0x2c27,	// (0x0006e3e6) mup_equalizer_pane_cp3_ParamLimits

0x2c27,	// (0x0006e3e6) mup_equalizer_pane_cp3

0x2c48,	// (0x0006e407) mup_equalizer_pane_cp4_ParamLimits

0x2c48,	// (0x0006e407) mup_equalizer_pane_cp4

0x2c69,	// (0x0006e428) mup_equalizer_pane_cp5

0x2c7d,	// (0x0006e43c) mup_equalizer_pane_cp6

0x2c91,	// (0x0006e450) mup_equalizer_pane_cp7

0xc721,	// (0x00077ee0) bg_popup_call_poc_act_pane_g9

0xc729,	// (0x00077ee8) bg_popup_call_poc_act_pane_g10

0xc731,	// (0x00077ef0) bg_popup_call_poc_act_pane_g11

0x000a,

0xa282,	// (0x00075a41) mup_scale_pane

0xa39c,	// (0x00075b5b) mup_scale_pane_g1

0xb59d,	// (0x00076d5c) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007ac29) mup_scale_pane_g

0xb5c1,	// (0x00076d80) msg_data_pane

0xb5c9,	// (0x00076d88) scroll_pane_cp017

0x2cb7,	// (0x0006e476) bg_list_pane_cp04_ParamLimits

0x2cb7,	// (0x0006e476) bg_list_pane_cp04

0xb5d1,	// (0x00076d90) msg_data_pane_g1

0x2ccf,	// (0x0006e48e) msg_data_pane_g2

0x2cd9,	// (0x0006e498) msg_data_pane_g3

0x2ce1,	// (0x0006e4a0) msg_data_pane_g4

0x2ce9,	// (0x0006e4a8) msg_data_pane_g5

0x2cf1,	// (0x0006e4b0) msg_data_pane_g6

0x2cf9,	// (0x0006e4b8) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007ac38) msg_data_pane_g

0x2d01,	// (0x0006e4c0) msg_text_pane_ParamLimits

0x2d01,	// (0x0006e4c0) msg_text_pane

0x2d26,	// (0x0006e4e5) qrid_highlight_pane_cp011_ParamLimits

0x2d26,	// (0x0006e4e5) qrid_highlight_pane_cp011

0xa027,	// (0x000757e6) msg_body_pane

0xa027,	// (0x000757e6) msg_header_pane

0xb5e2,	// (0x00076da1) input_focus_pane_cp07

0x2d4a,	// (0x0006e509) msg_header_pane_t1_ParamLimits

0x2d4a,	// (0x0006e509) msg_header_pane_t1

0xa400,	// (0x00075bbf) msg_header_pane_t2_ParamLimits

0xa400,	// (0x00075bbf) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007ac4c) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007ac4c) msg_header_pane_t

0xb5f7,	// (0x00076db6) msg_body_pane_g1

0x2d5c,	// (0x0006e51b) msg_body_pane_t1_ParamLimits

0x2d5c,	// (0x0006e51b) msg_body_pane_t1

0xa412,	// (0x00075bd1) msg_body_pane_t2_ParamLimits

0xa412,	// (0x00075bd1) msg_body_pane_t2

0xa424,	// (0x00075be3) msg_body_pane_t3_ParamLimits

0xa424,	// (0x00075be3) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007ac51) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007ac51) msg_body_pane_t

0x2dc7,	// (0x0006e586) main_viewer_pane_g1_ParamLimits

0x2dc7,	// (0x0006e586) main_viewer_pane_g1

0x2dd5,	// (0x0006e594) main_viewer_pane_g2_ParamLimits

0x2dd5,	// (0x0006e594) main_viewer_pane_g2

0x2de3,	// (0x0006e5a2) main_viewer_pane_g3_ParamLimits

0x2de3,	// (0x0006e5a2) main_viewer_pane_g3

0x2df2,	// (0x0006e5b1) main_viewer_pane_g4_ParamLimits

0x2df2,	// (0x0006e5b1) main_viewer_pane_g4

0x9910,	// (0x000750cf) main_viewer_pane_g5_ParamLimits

0x9910,	// (0x000750cf) main_viewer_pane_g5

0x9910,	// (0x000750cf) main_viewer_pane_g7_ParamLimits

0x9910,	// (0x000750cf) main_viewer_pane_g7

0xaf10,	// (0x000766cf) main_viewer_pane_g8_ParamLimits

0xaf10,	// (0x000766cf) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007ac61) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007ac61) main_viewer_pane_g

0xb5ff,	// (0x00076dbe) viewer_content_pane_ParamLimits

0xb5ff,	// (0x00076dbe) viewer_content_pane

0x2e2e,	// (0x0006e5ed) main_postcard_pane_g1_ParamLimits

0x2e2e,	// (0x0006e5ed) main_postcard_pane_g1

0x2e44,	// (0x0006e603) main_postcard_pane_g2_ParamLimits

0x2e44,	// (0x0006e603) main_postcard_pane_g2

0x2e5a,	// (0x0006e619) main_postcard_pane_g3_ParamLimits

0x2e5a,	// (0x0006e619) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007ac72) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007ac72) main_postcard_pane_g

0x2e71,	// (0x0006e630) main_postcard_pane_g4

0xc90f,	// (0x000780ce) smil_status_volume_pane_g2

0x2eb4,	// (0x0006e673) postcard_pane_ParamLimits

0x2eb4,	// (0x0006e673) postcard_pane

0xb60d,	// (0x00076dcc) postcard_pane_g1_ParamLimits

0xb60d,	// (0x00076dcc) postcard_pane_g1

0x2ef6,	// (0x0006e6b5) postcard_pane_g2_ParamLimits

0x2ef6,	// (0x0006e6b5) postcard_pane_g2

0x2f02,	// (0x0006e6c1) postcard_pane_g3_ParamLimits

0x2f02,	// (0x0006e6c1) postcard_pane_g3

0xb61b,	// (0x00076dda) postcard_pane_g4_ParamLimits

0xb61b,	// (0x00076dda) postcard_pane_g4

0x2f0e,	// (0x0006e6cd) postcard_pane_g5_ParamLimits

0x2f0e,	// (0x0006e6cd) postcard_pane_g5

0x2f23,	// (0x0006e6e2) postcard_pane_g6_ParamLimits

0x2f23,	// (0x0006e6e2) postcard_pane_g6

0xb60d,	// (0x00076dcc) postcard_pane_g7_ParamLimits

0xb60d,	// (0x00076dcc) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007ac7f) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007ac7f) postcard_pane_g

0x2f37,	// (0x0006e6f6) main_mp2_pane_g1_ParamLimits

0x2f37,	// (0x0006e6f6) main_mp2_pane_g1

0x2f43,	// (0x0006e702) main_mp2_pane_g2_ParamLimits

0x2f43,	// (0x0006e702) main_mp2_pane_g2

0x2f4f,	// (0x0006e70e) main_mp2_pane_g3_ParamLimits

0x2f4f,	// (0x0006e70e) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007ac8e) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007ac8e) main_mp2_pane_g

0x2f5b,	// (0x0006e71a) main_mp2_pane_t1_ParamLimits

0x2f5b,	// (0x0006e71a) main_mp2_pane_t1

0x2f70,	// (0x0006e72f) main_mp2_pane_t2_ParamLimits

0x2f70,	// (0x0006e72f) main_mp2_pane_t2

0x2f82,	// (0x0006e741) main_mp2_pane_t3_ParamLimits

0x2f82,	// (0x0006e741) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007ac95) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007ac95) main_mp2_pane_t

0xb629,	// (0x00076de8) pec_content_pane_ParamLimits

0xb629,	// (0x00076de8) pec_content_pane

0xab9f,	// (0x0007635e) scroll_pane_cp015

0xb63b,	// (0x00076dfa) pec_attribute_pane_ParamLimits

0xb63b,	// (0x00076dfa) pec_attribute_pane

0x2f94,	// (0x0006e753) pec_content_pane_g1_ParamLimits

0x2f94,	// (0x0006e753) pec_content_pane_g1

0xb64b,	// (0x00076e0a) pec_content_pane_t1_ParamLimits

0xb64b,	// (0x00076e0a) pec_content_pane_t1

0xb65d,	// (0x00076e1c) pec_content_pane_t2_ParamLimits

0xb65d,	// (0x00076e1c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007ac9c) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007ac9c) pec_content_pane_t

0x2fa0,	// (0x0006e75f) list_single_graphic_pane_cp01_ParamLimits

0x2fa0,	// (0x0006e75f) list_single_graphic_pane_cp01

0xa282,	// (0x00075a41) bg_popup_sub_pane_cp04

0xb66f,	// (0x00076e2e) popup_mup_playback_window_g1

0xb67b,	// (0x00076e3a) popup_mup_playback_window_t1

0xb690,	// (0x00076e4f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007aca1) popup_mup_playback_window_t

0xb6c7,	// (0x00076e86) main_image_pane_g1_ParamLimits

0xb6c7,	// (0x00076e86) main_image_pane_g1

0xb70a,	// (0x00076ec9) scroll_pane_cp018_ParamLimits

0xb70a,	// (0x00076ec9) scroll_pane_cp018

0xb722,	// (0x00076ee1) scroll_pane_cp016_ParamLimits

0xb722,	// (0x00076ee1) scroll_pane_cp016

0x306d,	// (0x0006e82c) smil2_image_pane_ParamLimits

0x306d,	// (0x0006e82c) smil2_image_pane

0x309d,	// (0x0006e85c) smil2_root_pane_ParamLimits

0x309d,	// (0x0006e85c) smil2_root_pane

0x30d5,	// (0x0006e894) smil2_text_pane_ParamLimits

0x30d5,	// (0x0006e894) smil2_text_pane

0xa027,	// (0x000757e6) bg_list_pane_cp06

0xb75e,	// (0x00076f1d) grid_radio_pane

0xa027,	// (0x000757e6) bg_popup_window_pane_cp06

0xb766,	// (0x00076f25) main_fmradio_pane_t1

0xb0e8,	// (0x000768a7) heading_pane_cp04

0xb774,	// (0x00076f33) main_fmradio_pane_t2

0xc739,	// (0x00077ef8) popup_cale_lunar_info_window_g1

0xb782,	// (0x00076f41) main_fmradio_pane_t3

0xc741,	// (0x00077f00) popup_cale_lunar_info_window_g2

0xb790,	// (0x00076f4f) main_fmradio_pane_t4

0x0001,

0xb79e,	// (0x00076f5d) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007ad7c) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007acb6) main_fmradio_pane_t

0xb7ac,	// (0x00076f6b) wait_bar_pane_cp03

0xb7b4,	// (0x00076f73) cell_fmradio_pane_ParamLimits

0xb7b4,	// (0x00076f73) cell_fmradio_pane

0xb60d,	// (0x00076dcc) cell_fmradio_pane_g1_ParamLimits

0xb60d,	// (0x00076dcc) cell_fmradio_pane_g1

0xa027,	// (0x000757e6) grid_highlight_pane_cp011

0xb7c7,	// (0x00076f86) poc_content_pane_ParamLimits

0xb7c7,	// (0x00076f86) poc_content_pane

0xb7d9,	// (0x00076f98) scroll_pane_cp019

0x3155,	// (0x0006e914) popup_call_poc_act_window_ParamLimits

0x3155,	// (0x0006e914) popup_call_poc_act_window

0x3179,	// (0x0006e938) popup_call_poc_inact_window_ParamLimits

0x3179,	// (0x0006e938) popup_call_poc_inact_window

0xf594,	// (0x0007ad53) bg_popup_call_poc_act_pane_g

0xc6b1,	// (0x00077e70) bg_popup_call_poc_inact_pane_g1

0xc6b9,	// (0x00077e78) bg_popup_call_poc_inact_pane_g2

0xb7e1,	// (0x00076fa0) popup_call_poc_act_window_g2

0xc6c1,	// (0x00077e80) bg_popup_call_poc_inact_pane_g3

0xc6c9,	// (0x00077e88) bg_popup_call_poc_inact_pane_g4

0xc6d1,	// (0x00077e90) bg_popup_call_poc_inact_pane_g5

0xb7e9,	// (0x00076fa8) popup_call_poc_act_window_t1_ParamLimits

0xb7e9,	// (0x00076fa8) popup_call_poc_act_window_t1

0xb811,	// (0x00076fd0) popup_call_poc_act_window_t2_ParamLimits

0xb811,	// (0x00076fd0) popup_call_poc_act_window_t2

0xb839,	// (0x00076ff8) popup_call_poc_act_window_t3_ParamLimits

0xb839,	// (0x00076ff8) popup_call_poc_act_window_t3

0xb861,	// (0x00077020) popup_call_poc_act_window_t4_ParamLimits

0xb861,	// (0x00077020) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007acc1) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007acc1) popup_call_poc_act_window_t

0xc6d9,	// (0x00077e98) bg_popup_call_poc_inact_pane_g6

0xc6e1,	// (0x00077ea0) bg_popup_call_poc_inact_pane_g7

0xc6e9,	// (0x00077ea8) bg_popup_call_poc_inact_pane_g8

0xb873,	// (0x00077032) popup_call_poc_inact_window_g2

0xc6f1,	// (0x00077eb0) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0007ad40) bg_popup_call_poc_inact_pane_g

0xb87b,	// (0x0007703a) popup_call_poc_inact_window_t1_ParamLimits

0xb87b,	// (0x0007703a) popup_call_poc_inact_window_t1

0xb890,	// (0x0007704f) popup_call_poc_inact_window_t2_ParamLimits

0xb890,	// (0x0007704f) popup_call_poc_inact_window_t2

0xb8a5,	// (0x00077064) popup_call_poc_inact_window_t3_ParamLimits

0xb8a5,	// (0x00077064) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007acca) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007acca) popup_call_poc_inact_window_t

0xc882,	// (0x00078041) context_pane_ParamLimits

0x39ba,	// (0x0006f179) signal_pane_ParamLimits

0xa9f6,	// (0x000761b5) main_call2_pane

0x995b,	// (0x0007511a) popup_phob_thumbnail2_window_ParamLimits

0x995b,	// (0x0007511a) popup_phob_thumbnail2_window

0x98f8,	// (0x000750b7) aid_hotspot_pointer_arrow_pane

0x9900,	// (0x000750bf) aid_hotspot_pointer_hand_pane

0x34c2,	// (0x0006ec81) phob_pre_status_pane_g5

0x1011,	// (0x0006c7d0) cams_zoom_pane_ParamLimits

0x1020,	// (0x0006c7df) image_vga_pane_ParamLimits

0x103a,	// (0x0006c7f9) main_camera_pane_g1_ParamLimits

0x104c,	// (0x0006c80b) main_camera_pane_g2_ParamLimits

0x105c,	// (0x0006c81b) main_camera_pane_g3_ParamLimits

0x106c,	// (0x0006c82b) main_camera_pane_g4_ParamLimits

0x107c,	// (0x0006c83b) main_camera_pane_g5_ParamLimits

0x108c,	// (0x0006c84b) main_camera_pane_g6_ParamLimits

0x109e,	// (0x0006c85d) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007a9c9) main_camera_pane_g_ParamLimits

0x10ae,	// (0x0006c86d) main_camera_pane_t1_ParamLimits

0x10c4,	// (0x0006c883) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007a9da) main_camera_pane_t_ParamLimits

0xa282,	// (0x00075a41) bg_popup_preview_window_pane_cp01_ParamLimits

0xa282,	// (0x00075a41) bg_popup_preview_window_pane_cp01

0xb8ba,	// (0x00077079) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ba,	// (0x00077079) popup_phob_thumbnail2_window_g1

0xa027,	// (0x000757e6) call2_cli_visual_pane

0x31ad,	// (0x0006e96c) popup_call2_audio_conf_window_ParamLimits

0x31ad,	// (0x0006e96c) popup_call2_audio_conf_window

0x31cd,	// (0x0006e98c) popup_call2_audio_first_window_ParamLimits

0x31cd,	// (0x0006e98c) popup_call2_audio_first_window

0x3263,	// (0x0006ea22) popup_call2_audio_in_window_ParamLimits

0x3263,	// (0x0006ea22) popup_call2_audio_in_window

0x32ab,	// (0x0006ea6a) popup_call2_audio_out_window_ParamLimits

0x32ab,	// (0x0006ea6a) popup_call2_audio_out_window

0x3315,	// (0x0006ead4) popup_call2_audio_second_window_ParamLimits

0x3315,	// (0x0006ead4) popup_call2_audio_second_window

0x337b,	// (0x0006eb3a) popup_call2_audio_wait_window_ParamLimits

0x337b,	// (0x0006eb3a) popup_call2_audio_wait_window

0xa027,	// (0x000757e6) bg_popup_call2_act_pane_cp03

0xa264,	// (0x00075a23) list_conf_pane_cp

0xb8c6,	// (0x00077085) popup_call2_audio_conf_window_t1

0xb145,	// (0x00076904) list_single_graphic_popup_conf2_pane_ParamLimits

0xb145,	// (0x00076904) list_single_graphic_popup_conf2_pane

0xb158,	// (0x00076917) list_highlight_pane_cp04

0xb8d4,	// (0x00077093) list_single_graphic_popup_conf2_pane_g1

0xb169,	// (0x00076928) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007acd1) list_single_graphic_popup_conf2_pane_g

0xb8de,	// (0x0007709d) list_single_graphic_popup_conf2_pane_t1

0xb8ec,	// (0x000770ab) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8ec,	// (0x000770ab) bg_popup_call2_act_pane_cp01

0xb976,	// (0x00077135) call_type_pane_cp05_ParamLimits

0xb976,	// (0x00077135) call_type_pane_cp05

0xb9ca,	// (0x00077189) popup_call2_audio_second_window_g1_ParamLimits

0xb9ca,	// (0x00077189) popup_call2_audio_second_window_g1

0xba1e,	// (0x000771dd) popup_call2_audio_second_window_g2_ParamLimits

0xba1e,	// (0x000771dd) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007acd6) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007acd6) popup_call2_audio_second_window_g

0xba83,	// (0x00077242) popup_call2_audio_second_window_t1_ParamLimits

0xba83,	// (0x00077242) popup_call2_audio_second_window_t1

0xbb3e,	// (0x000772fd) popup_call2_audio_second_window_t2_ParamLimits

0xbb3e,	// (0x000772fd) popup_call2_audio_second_window_t2

0xbb91,	// (0x00077350) popup_call2_audio_second_window_t3_ParamLimits

0xbb91,	// (0x00077350) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007acdd) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007acdd) popup_call2_audio_second_window_t

0xa027,	// (0x000757e6) bg_popup_call2_in_pane_cp02

0xa031,	// (0x000757f0) call_type_pane_cp04

0xa039,	// (0x000757f8) popup_call2_audio_wait_window_g1

0xa041,	// (0x00075800) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007a8b8) popup_call2_audio_wait_window_g

0xa049,	// (0x00075808) popup_call2_audio_wait_window_t3

0xbc84,	// (0x00077443) bg_popup_call2_act_pane_ParamLimits

0xbc84,	// (0x00077443) bg_popup_call2_act_pane

0xbd44,	// (0x00077503) call_type_pane_cp03_ParamLimits

0xbd44,	// (0x00077503) call_type_pane_cp03

0xbda8,	// (0x00077567) popup_call2_audio_first_window_g1_ParamLimits

0xbda8,	// (0x00077567) popup_call2_audio_first_window_g1

0xbe18,	// (0x000775d7) popup_call2_audio_first_window_g2_ParamLimits

0xbe18,	// (0x000775d7) popup_call2_audio_first_window_g2

0xb521,	// (0x00076ce0) popup_call2_audio_first_window_g3_ParamLimits

0xb521,	// (0x00076ce0) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007ace6) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007ace6) popup_call2_audio_first_window_g

0xbef6,	// (0x000776b5) popup_call2_audio_first_window_t1_ParamLimits

0xbef6,	// (0x000776b5) popup_call2_audio_first_window_t1

0xbff9,	// (0x000777b8) popup_call2_audio_first_window_t4_ParamLimits

0xbff9,	// (0x000777b8) popup_call2_audio_first_window_t4

0xc0dc,	// (0x0007789b) popup_call2_audio_first_window_t5_ParamLimits

0xc0dc,	// (0x0007789b) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007acf1) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007acf1) popup_call2_audio_first_window_t

0xa27a,	// (0x00075a39) bg_popup_call2_act_pane_g1

0xc749,	// (0x00077f08) popup_cale_lunar_info_window_t1

0xc757,	// (0x00077f16) popup_cale_lunar_info_window_t2

0xc771,	// (0x00077f30) popup_cale_lunar_info_window_t3

0xa027,	// (0x000757e6) bg_popup_call2_bubble_pane

0xc1dd,	// (0x0007799c) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1dd,	// (0x0007799c) bg_popup_call2_in_pane_cp01

0x95f0,	// (0x00074daf) call_type_pane_cp02

0xc225,	// (0x000779e4) popup_call2_audio_out_window_g1_ParamLimits

0xc225,	// (0x000779e4) popup_call2_audio_out_window_g1

0xc251,	// (0x00077a10) popup_call2_audio_out_window_g2_ParamLimits

0xc251,	// (0x00077a10) popup_call2_audio_out_window_g2

0xc279,	// (0x00077a38) popup_call2_audio_out_window_g3_ParamLimits

0xc279,	// (0x00077a38) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007acfa) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007acfa) popup_call2_audio_out_window_g

0xc2b4,	// (0x00077a73) popup_call2_audio_out_window_t1_ParamLimits

0xc2b4,	// (0x00077a73) popup_call2_audio_out_window_t1

0xc313,	// (0x00077ad2) popup_call2_audio_out_window_t2_ParamLimits

0xc313,	// (0x00077ad2) popup_call2_audio_out_window_t2

0xc367,	// (0x00077b26) popup_call2_audio_out_window_t3_ParamLimits

0xc367,	// (0x00077b26) popup_call2_audio_out_window_t3

0xc37d,	// (0x00077b3c) popup_call2_audio_out_window_t4_ParamLimits

0xc37d,	// (0x00077b3c) popup_call2_audio_out_window_t4

0xc393,	// (0x00077b52) popup_call2_audio_out_window_t5_ParamLimits

0xc393,	// (0x00077b52) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007ad03) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007ad03) popup_call2_audio_out_window_t

0xc3f7,	// (0x00077bb6) bg_popup_call2_in_pane_ParamLimits

0xc3f7,	// (0x00077bb6) bg_popup_call2_in_pane

0xc453,	// (0x00077c12) popup_call2_audio_in_window_g1_ParamLimits

0xc453,	// (0x00077c12) popup_call2_audio_in_window_g1

0xc48b,	// (0x00077c4a) popup_call2_audio_in_window_g2_ParamLimits

0xc48b,	// (0x00077c4a) popup_call2_audio_in_window_g2

0xc4c3,	// (0x00077c82) popup_call2_audio_in_window_g3_ParamLimits

0xc4c3,	// (0x00077c82) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007ad10) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007ad10) popup_call2_audio_in_window_g

0xc51b,	// (0x00077cda) popup_call2_audio_in_window_t1_ParamLimits

0xc51b,	// (0x00077cda) popup_call2_audio_in_window_t1

0xc59b,	// (0x00077d5a) popup_call2_audio_in_window_t2_ParamLimits

0xc59b,	// (0x00077d5a) popup_call2_audio_in_window_t2

0xc61b,	// (0x00077dda) popup_call2_audio_in_window_t3_ParamLimits

0xc61b,	// (0x00077dda) popup_call2_audio_in_window_t3

0xc635,	// (0x00077df4) popup_call2_audio_in_window_t4_ParamLimits

0xc635,	// (0x00077df4) popup_call2_audio_in_window_t4

0xc647,	// (0x00077e06) popup_call2_audio_in_window_t5_ParamLimits

0xc647,	// (0x00077e06) popup_call2_audio_in_window_t5

0xc65c,	// (0x00077e1b) popup_call2_audio_in_window_t6_ParamLimits

0xc65c,	// (0x00077e1b) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007ad19) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007ad19) popup_call2_audio_in_window_t

0xa27a,	// (0x00075a39) bg_popup_call2_in_pane_g1

0xc77f,	// (0x00077f3e) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0007ad81) popup_cale_lunar_info_window_t

0xa282,	// (0x00075a41) bg_popup_call2_rect_pane_ParamLimits

0xa282,	// (0x00075a41) bg_popup_call2_rect_pane

0xa027,	// (0x000757e6) call2_cli_visual_graphic_pane

0xa027,	// (0x000757e6) call2_cli_visual_text_pane

0x9982,	// (0x00075141) smil_status_volume_pane_g3

0x0002,

0xa39c,	// (0x00075b5b) call2_cli_visual_graphic_pane_g1

0xa39c,	// (0x00075b5b) call2_cli_visual_graphic_pane_g2

0xa39c,	// (0x00075b5b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007ad26) call2_cli_visual_graphic_pane_g

0xc671,	// (0x00077e30) bg_popup_call2_rect_pane_g1

0xa912,	// (0x000760d1) bg_popup_call2_rect_pane_g2

0xc679,	// (0x00077e38) bg_popup_call2_rect_pane_g3

0xc681,	// (0x00077e40) bg_popup_call2_rect_pane_g4

0xc689,	// (0x00077e48) bg_popup_call2_rect_pane_g5

0xc691,	// (0x00077e50) bg_popup_call2_rect_pane_g6

0xc699,	// (0x00077e58) bg_popup_call2_rect_pane_g7

0xc6a1,	// (0x00077e60) bg_popup_call2_rect_pane_g8

0xc6a9,	// (0x00077e68) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ad2d) bg_popup_call2_rect_pane_g

0xc6b1,	// (0x00077e70) bg_popup_call2_bubble_pane_g1

0xc6b9,	// (0x00077e78) bg_popup_call2_bubble_pane_g2

0xc6c1,	// (0x00077e80) bg_popup_call2_bubble_pane_g3

0xc6c9,	// (0x00077e88) bg_popup_call2_bubble_pane_g4

0xc6d1,	// (0x00077e90) bg_popup_call2_bubble_pane_g5

0xc6d9,	// (0x00077e98) bg_popup_call2_bubble_pane_g6

0xc6e1,	// (0x00077ea0) bg_popup_call2_bubble_pane_g7

0xc6e9,	// (0x00077ea8) bg_popup_call2_bubble_pane_g8

0xc6f1,	// (0x00077eb0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007ad40) bg_popup_call2_bubble_pane_g

0x0993,	// (0x0006c152) aid_cale_week_size_cell_pane

0x10da,	// (0x0006c899) aid_cams_cif_uncrop_pane_ParamLimits

0x10da,	// (0x0006c899) aid_cams_cif_uncrop_pane

0x128a,	// (0x0006ca49) aid_cams_size_cell_ParamLimits

0x128a,	// (0x0006ca49) aid_cams_size_cell

0x129e,	// (0x0006ca5d) grid_cams_pane_ParamLimits

0x12b8,	// (0x0006ca77) linegrid_cams_pane_ParamLimits

0x14b5,	// (0x0006cc74) call_video_pane_t1

0x14d3,	// (0x0006cc92) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007aa2d) call_video_pane_t

0x18ff,	// (0x0006d0be) aid_cale_month_size_cell_pane_ParamLimits

0x18ff,	// (0x0006d0be) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007adca) smil_status_volume_pane_g

0x998f,	// (0x0007514e) volume_smil_pane_ParamLimits

0x9483,	// (0x00074c42) aid_popup2_width_pane

0x08ed,	// (0x0006c0ac) cell_qdial_pane_g4_ParamLimits

0x08ed,	// (0x0006c0ac) cell_qdial_pane_g4

0x27e4,	// (0x0006dfa3) aid_blid_cardinal_pane_ParamLimits

0x27f0,	// (0x0006dfaf) aid_blid_destination_pane_ParamLimits

0x27f0,	// (0x0006dfaf) aid_blid_destination_pane

0xa282,	// (0x00075a41) bg_popup_call_poc_act_pane_ParamLimits

0xa282,	// (0x00075a41) bg_popup_call_poc_act_pane

0xa282,	// (0x00075a41) bg_popup_call_poc_inact_pane_ParamLimits

0xa282,	// (0x00075a41) bg_popup_call_poc_inact_pane

0xc6f9,	// (0x00077eb8) bg_popup_call_poc_act_pane_g1

0xc701,	// (0x00077ec0) bg_popup_call_poc_act_pane_g2

0xc709,	// (0x00077ec8) bg_popup_call_poc_act_pane_g3

0xc6c9,	// (0x00077e88) bg_popup_call_poc_act_pane_g4

0xc6d1,	// (0x00077e90) bg_popup_call_poc_act_pane_g5

0xc711,	// (0x00077ed0) bg_popup_call_poc_act_pane_g6

0xc6e1,	// (0x00077ea0) bg_popup_call_poc_act_pane_g7

0xc719,	// (0x00077ed8) bg_popup_call_poc_act_pane_g8

0xa027,	// (0x000757e6) main_usb_pane

0x9936,	// (0x000750f5) popup_cale_lunar_info_window

0x17ab,	// (0x0006cf6a) im_reading_pane_t1_ParamLimits

0xaaf7,	// (0x000762b6) list_im_pane_ParamLimits

0xab08,	// (0x000762c7) scroll_pane_cp07_ParamLimits

0xa027,	// (0x000757e6) grid_highlight_pane_cp012

0xa282,	// (0x00075a41) mup_scale_pane_ParamLimits

0xb60d,	// (0x00076dcc) main_usb_pane_g1_ParamLimits

0xb60d,	// (0x00076dcc) main_usb_pane_g1

0x33d7,	// (0x0006eb96) main_usb_pane_g2_ParamLimits

0x33d7,	// (0x0006eb96) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0007ad6a) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0007ad6a) main_usb_pane_g

0x33ed,	// (0x0006ebac) main_usb_pane_t1_ParamLimits

0x33ed,	// (0x0006ebac) main_usb_pane_t1

0x33ff,	// (0x0006ebbe) main_usb_pane_t2_ParamLimits

0x33ff,	// (0x0006ebbe) main_usb_pane_t2

0x3411,	// (0x0006ebd0) main_usb_pane_t3_ParamLimits

0x3411,	// (0x0006ebd0) main_usb_pane_t3

0x3423,	// (0x0006ebe2) main_usb_pane_t4_ParamLimits

0x3423,	// (0x0006ebe2) main_usb_pane_t4

0x3435,	// (0x0006ebf4) main_usb_pane_t5_ParamLimits

0x3435,	// (0x0006ebf4) main_usb_pane_t5

0x3447,	// (0x0006ec06) main_usb_pane_t6_ParamLimits

0x3447,	// (0x0006ec06) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0007ad6f) main_usb_pane_t_ParamLimits

0x2793,	// (0x0006df52) aid_text_placing

0x279c,	// (0x0006df5b) main_location2_pane_t1_ParamLimits

0x27ae,	// (0x0006df6d) main_location2_pane_t2_ParamLimits

0x27c0,	// (0x0006df7f) main_location2_pane_t3_ParamLimits

0x27d2,	// (0x0006df91) main_location2_pane_t4_ParamLimits

0x27d2,	// (0x0006df91) main_location2_pane_t4

0xf3cf,	// (0x0007ab8e) main_location2_pane_t_ParamLimits

0xa2be,	// (0x00075a7d) find_pinb_pane_g2_ParamLimits

0xa2be,	// (0x00075a7d) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007a8de) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007a8de) find_pinb_pane_g

0xa2ca,	// (0x00075a89) find_pinb_pane_t1_ParamLimits

0xa2dc,	// (0x00075a9b) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0007a8e3) find_pinb_pane_t_ParamLimits

0xa027,	// (0x000757e6) main_call3_pane

0x1dbe,	// (0x0006d57d) cale_month_day_heading_pane_t1_ParamLimits

0x1e44,	// (0x0006d603) cale_month_day_heading_pane_t2_ParamLimits

0x1ed5,	// (0x0006d694) cale_month_day_heading_pane_t3_ParamLimits

0x1f66,	// (0x0006d725) cale_month_day_heading_pane_t4_ParamLimits

0x1ffb,	// (0x0006d7ba) cale_month_day_heading_pane_t5_ParamLimits

0x209c,	// (0x0006d85b) cale_month_day_heading_pane_t6_ParamLimits

0x213d,	// (0x0006d8fc) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007aa65) cale_month_day_heading_pane_t_ParamLimits

0xad52,	// (0x00076511) smil_status_volume_pane

0x2ed2,	// (0x0006e691) postcard_address_pane_ParamLimits

0x2ed2,	// (0x0006e691) postcard_address_pane

0x2ee4,	// (0x0006e6a3) postcard_message_pane_ParamLimits

0x2ee4,	// (0x0006e6a3) postcard_message_pane

0x33b5,	// (0x0006eb74) call2_cli_visual_pane_t1_ParamLimits

0x33b5,	// (0x0006eb74) call2_cli_visual_pane_t1

0x3be7,	// (0x0006f3a6) postcard_message_pane_t1_ParamLimits

0x3be7,	// (0x0006f3a6) postcard_message_pane_t1

0x3bd0,	// (0x0006f38f) postcard_address_pane_t1_ParamLimits

0x3bd0,	// (0x0006f38f) postcard_address_pane_t1

0x3bbc,	// (0x0006f37b) popup_call3_audio_in_window_ParamLimits

0x3bbc,	// (0x0006f37b) popup_call3_audio_in_window

0x3a47,	// (0x0006f206) bg_popup_call3_in_pane_ParamLimits

0x3a47,	// (0x0006f206) bg_popup_call3_in_pane

0x3abd,	// (0x0006f27c) popup_call3_audio_in_window_g1_ParamLimits

0x3abd,	// (0x0006f27c) popup_call3_audio_in_window_g1

0x3add,	// (0x0006f29c) popup_call3_audio_in_window_g2_ParamLimits

0x3add,	// (0x0006f29c) popup_call3_audio_in_window_g2

0x3afd,	// (0x0006f2bc) popup_call3_audio_in_window_g3_ParamLimits

0x3afd,	// (0x0006f2bc) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0007add1) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0007add1) popup_call3_audio_in_window_g

0x3b2e,	// (0x0006f2ed) popup_call3_audio_in_window_t1_ParamLimits

0x3b2e,	// (0x0006f2ed) popup_call3_audio_in_window_t1

0x3b6c,	// (0x0006f32b) popup_call3_audio_in_window_t2_ParamLimits

0x3b6c,	// (0x0006f32b) popup_call3_audio_in_window_t2

0x3baa,	// (0x0006f369) popup_call3_audio_in_window_t3_ParamLimits

0x3baa,	// (0x0006f369) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007adda) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007adda) popup_call3_audio_in_window_t

0xa9f6,	// (0x000761b5) bg_popup_call3_rect_pane

0xc671,	// (0x00077e30) bg_popup_call3_rect_pane_g1

0xa912,	// (0x000760d1) bg_popup_call3_rect_pane_g2

0xc679,	// (0x00077e38) bg_popup_call3_rect_pane_g3

0xc681,	// (0x00077e40) bg_popup_call3_rect_pane_g4

0xc689,	// (0x00077e48) bg_popup_call3_rect_pane_g5

0xc691,	// (0x00077e50) bg_popup_call3_rect_pane_g6

0xc699,	// (0x00077e58) bg_popup_call3_rect_pane_g7

0x2ad4,	// (0x0006e293) mup_visualizer_osc_pane

0xb52f,	// (0x00076cee) mup_visualizer_spec_pane

0x3a77,	// (0x0006f236) call3_video_qcif_pane_ParamLimits

0x3a77,	// (0x0006f236) call3_video_qcif_pane

0x3a8a,	// (0x0006f249) call3_video_qcif_uncrop_pane_ParamLimits

0x3a8a,	// (0x0006f249) call3_video_qcif_uncrop_pane

0x3a98,	// (0x0006f257) call3_video_subqcif_pane_ParamLimits

0x3a98,	// (0x0006f257) call3_video_subqcif_pane

0x3aac,	// (0x0006f26b) call3_video_subqcif_uncrop_pane_ParamLimits

0x3aac,	// (0x0006f26b) call3_video_subqcif_uncrop_pane

0x3b1d,	// (0x0006f2dc) popup_call3_audio_in_window_g4_ParamLimits

0x3b1d,	// (0x0006f2dc) popup_call3_audio_in_window_g4

0x3a36,	// (0x0006f1f5) mup_spec_half_pane

0x3a3f,	// (0x0006f1fe) mup_spec_half_pane_cp

0xc8e2,	// (0x000780a1) mup_osc_middle_pane

0xc8eb,	// (0x000780aa) mup_visualizer_osc_pane_g1

0x3a16,	// (0x0006f1d5) mup_spec_bar_pane_ParamLimits

0x3a16,	// (0x0006f1d5) mup_spec_bar_pane

0xc8cf,	// (0x0007808e) mup_spec_bar_pane_g1

0xc8d9,	// (0x00078098) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007adc5) mup_spec_bar_pane_g

0x0993,	// (0x0006c152) aid_cale_week_size_cell_pane_ParamLimits

0x09ad,	// (0x0006c16c) bg_cale_heading_pane_ParamLimits

0xa94f,	// (0x0007610e) bg_cale_pane_cp01_ParamLimits

0x09c5,	// (0x0006c184) cale_week_corner_pane_ParamLimits

0x09e4,	// (0x0006c1a3) cale_week_day_heading_pane_ParamLimits

0x0a01,	// (0x0006c1c0) cale_week_scroll_pane_g1_ParamLimits

0x0a14,	// (0x0006c1d3) cale_week_scroll_pane_g2_ParamLimits

0x0a2c,	// (0x0006c1eb) cale_week_scroll_pane_g3_ParamLimits

0x0a44,	// (0x0006c203) cale_week_scroll_pane_g4_ParamLimits

0x0a5c,	// (0x0006c21b) cale_week_scroll_pane_g5_ParamLimits

0x0a7c,	// (0x0006c23b) cale_week_scroll_pane_g6_ParamLimits

0x0a9c,	// (0x0006c25b) cale_week_scroll_pane_g7_ParamLimits

0x0abc,	// (0x0006c27b) cale_week_scroll_pane_g8_ParamLimits

0x0ae0,	// (0x0006c29f) cale_week_scroll_pane_g9_ParamLimits

0x0af8,	// (0x0006c2b7) cale_week_scroll_pane_g10_ParamLimits

0x0b10,	// (0x0006c2cf) cale_week_scroll_pane_g11_ParamLimits

0x0b28,	// (0x0006c2e7) cale_week_scroll_pane_g12_ParamLimits

0x0b40,	// (0x0006c2ff) cale_week_scroll_pane_g13_ParamLimits

0x0b40,	// (0x0006c2ff) cale_week_scroll_pane_g14_ParamLimits

0x0b40,	// (0x0006c2ff) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0007a96f) cale_week_scroll_pane_g_ParamLimits

0x0b7c,	// (0x0006c33b) cale_week_time_pane_ParamLimits

0x0ba0,	// (0x0006c35f) grid_cale_week_pane_ParamLimits

0xa96c,	// (0x0007612b) listscroll_cale_week_pane_t1

0xa97e,	// (0x0007613d) scroll_pane_cp08_ParamLimits

0x1954,	// (0x0006d113) cale_month_corner_pane_ParamLimits

0xad28,	// (0x000764e7) cale_month_pane_t1

0x1d5c,	// (0x0006d51b) cale_month_week_pane_ParamLimits

0x25ef,	// (0x0006ddae) popup_call_status_window_g1_ParamLimits

0x2603,	// (0x0006ddc2) popup_call_status_window_g2_ParamLimits

0x2617,	// (0x0006ddd6) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007ab15) popup_call_status_window_g_ParamLimits

0xb0d8,	// (0x00076897) aid_call2_pane

0x2d3c,	// (0x0006e4fb) msg_header_pane_g1

0x2ed2,	// (0x0006e691) postcard_address2_pane_ParamLimits

0x2ed2,	// (0x0006e691) postcard_address2_pane

0x2ee4,	// (0x0006e6a3) postcard_message2_pane_ParamLimits

0x2ee4,	// (0x0006e6a3) postcard_message2_pane

0x39c8,	// (0x0006f187) message2_row_pane_ParamLimits

0x39c8,	// (0x0006f187) message2_row_pane

0x39e4,	// (0x0006f1a3) address2_row_pane_ParamLimits

0x39e4,	// (0x0006f1a3) address2_row_pane

0xc89d,	// (0x0007805c) postcard_message2_row_pane_g1

0xc8a5,	// (0x00078064) postcard_message2_row_pane_t1

0xc89d,	// (0x0007805c) address2_row_pane_g1

0xc8a5,	// (0x00078064) address2_row_pane_t1

0x0f93,	// (0x0006c752) aid_size_cell_vorec

0xa027,	// (0x000757e6) main_rss_pane

0x39f7,	// (0x0006f1b6) rss_list_single_pane_ParamLimits

0x39f7,	// (0x0006f1b6) rss_list_single_pane

0xc8b3,	// (0x00078072) rss_list_single_pane_t1

0xc8c1,	// (0x00078080) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0007adc0) rss_list_single_pane_t

0xa027,	// (0x000757e6) main_camera2_pane

0xa027,	// (0x000757e6) main_video2_pane

0x3c60,	// (0x0006f41f) cams_zoom_pane_cp2_ParamLimits

0x3c60,	// (0x0006f41f) cams_zoom_pane_cp2

0x3c80,	// (0x0006f43f) image2_vga_pane_ParamLimits

0x3c80,	// (0x0006f43f) image2_vga_pane

0x3cd1,	// (0x0006f490) main_camera2_pane_g1_ParamLimits

0x3cd1,	// (0x0006f490) main_camera2_pane_g1

0x3cf1,	// (0x0006f4b0) main_camera2_pane_g2_ParamLimits

0x3cf1,	// (0x0006f4b0) main_camera2_pane_g2

0x3d11,	// (0x0006f4d0) main_camera2_pane_g3_ParamLimits

0x3d11,	// (0x0006f4d0) main_camera2_pane_g3

0x3d31,	// (0x0006f4f0) main_camera2_pane_g4_ParamLimits

0x3d31,	// (0x0006f4f0) main_camera2_pane_g4

0x3d51,	// (0x0006f510) main_camera2_pane_g5_ParamLimits

0x3d51,	// (0x0006f510) main_camera2_pane_g5

0x3d71,	// (0x0006f530) main_camera2_pane_g6_ParamLimits

0x3d71,	// (0x0006f530) main_camera2_pane_g6

0x3d91,	// (0x0006f550) main_camera2_pane_g7_ParamLimits

0x3d91,	// (0x0006f550) main_camera2_pane_g7

0x3db1,	// (0x0006f570) main_camera2_pane_g8_ParamLimits

0x3db1,	// (0x0006f570) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0007ade1) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0007ade1) main_camera2_pane_g

0x3df1,	// (0x0006f5b0) main_camera2_pane_t1_ParamLimits

0x3df1,	// (0x0006f5b0) main_camera2_pane_t1

0x3e26,	// (0x0006f5e5) main_camera2_pane_t2_ParamLimits

0x3e26,	// (0x0006f5e5) main_camera2_pane_t2

0x3e4c,	// (0x0006f60b) main_camera2_pane_t3_ParamLimits

0x3e4c,	// (0x0006f60b) main_camera2_pane_t3

0x3eaa,	// (0x0006f669) main_camera2_pane_t4_ParamLimits

0x3eaa,	// (0x0006f669) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0007adf4) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0007adf4) main_camera2_pane_t

0x3f3c,	// (0x0006f6fb) cams_zoom_pane_cp4_ParamLimits

0x3f3c,	// (0x0006f6fb) cams_zoom_pane_cp4

0x3f52,	// (0x0006f711) image2_cif_pane_ParamLimits

0x3f52,	// (0x0006f711) image2_cif_pane

0x3f7d,	// (0x0006f73c) image2_subqcif_pane_ParamLimits

0x3f7d,	// (0x0006f73c) image2_subqcif_pane

0x3f97,	// (0x0006f756) main_video2_pane_g1_ParamLimits

0x3f97,	// (0x0006f756) main_video2_pane_g1

0x3fb1,	// (0x0006f770) main_video2_pane_g2_ParamLimits

0x3fb1,	// (0x0006f770) main_video2_pane_g2

0x3fc7,	// (0x0006f786) main_video2_pane_g3_ParamLimits

0x3fc7,	// (0x0006f786) main_video2_pane_g3

0x3fdd,	// (0x0006f79c) main_video2_pane_g4_ParamLimits

0x3fdd,	// (0x0006f79c) main_video2_pane_g4

0x3ff3,	// (0x0006f7b2) main_video2_pane_g5_ParamLimits

0x3ff3,	// (0x0006f7b2) main_video2_pane_g5

0x4009,	// (0x0006f7c8) main_video2_pane_g6_ParamLimits

0x4009,	// (0x0006f7c8) main_video2_pane_g6

0x0005,

0xf644,	// (0x0007ae03) main_video2_pane_g_ParamLimits

0xf644,	// (0x0007ae03) main_video2_pane_g

0x4023,	// (0x0006f7e2) main_video2_pane_t1_ParamLimits

0x4023,	// (0x0006f7e2) main_video2_pane_t1

0x4047,	// (0x0006f806) main_video2_pane_t2_ParamLimits

0x4047,	// (0x0006f806) main_video2_pane_t2

0x4095,	// (0x0006f854) main_video2_pane_t3_ParamLimits

0x4095,	// (0x0006f854) main_video2_pane_t3

0x0002,

0xf651,	// (0x0007ae10) main_video2_pane_t_ParamLimits

0xf651,	// (0x0007ae10) main_video2_pane_t

0x3502,	// (0x0006ecc1) call_muted_g2

0x0001,

0xf5f3,	// (0x0007adb2) call_muted_g

0xa027,	// (0x000757e6) main_mup2_pane

0x40d9,	// (0x0006f898) main_mup2_pane_g1_ParamLimits

0x40d9,	// (0x0006f898) main_mup2_pane_g1

0x40e5,	// (0x0006f8a4) main_mup2_pane_g2_ParamLimits

0x40e5,	// (0x0006f8a4) main_mup2_pane_g2

0x99fd,	// (0x000751bc) main_mup_pane_g13_cp1

0x9a05,	// (0x000751c4) mup_volume_pane_cp1

0x4101,	// (0x0006f8c0) main_mup2_pane_g4_ParamLimits

0x4101,	// (0x0006f8c0) main_mup2_pane_g4

0x4113,	// (0x0006f8d2) main_mup2_pane_g5_ParamLimits

0x4113,	// (0x0006f8d2) main_mup2_pane_g5

0x4125,	// (0x0006f8e4) main_mup2_pane_g6_ParamLimits

0x4125,	// (0x0006f8e4) main_mup2_pane_g6

0x4137,	// (0x0006f8f6) main_mup2_pane_g7_ParamLimits

0x4137,	// (0x0006f8f6) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0007ae17) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0007ae17) main_mup2_pane_g

0x414f,	// (0x0006f90e) main_mup2_pane_t1_ParamLimits

0x414f,	// (0x0006f90e) main_mup2_pane_t1

0x4165,	// (0x0006f924) main_mup2_pane_t2_ParamLimits

0x4165,	// (0x0006f924) main_mup2_pane_t2

0x417b,	// (0x0006f93a) main_mup2_pane_t3_ParamLimits

0x417b,	// (0x0006f93a) main_mup2_pane_t3

0x4191,	// (0x0006f950) main_mup2_pane_t4_ParamLimits

0x4191,	// (0x0006f950) main_mup2_pane_t4

0x41a9,	// (0x0006f968) main_mup2_pane_t5_ParamLimits

0x41a9,	// (0x0006f968) main_mup2_pane_t5

0x41c1,	// (0x0006f980) main_mup2_pane_t6_ParamLimits

0x41c1,	// (0x0006f980) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0007ae26) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0007ae26) main_mup2_pane_t

0x41f1,	// (0x0006f9b0) mup2_visualizer_pane_ParamLimits

0x41f1,	// (0x0006f9b0) mup2_visualizer_pane

0x421f,	// (0x0006f9de) mup_progress_pane_cp_ParamLimits

0x421f,	// (0x0006f9de) mup_progress_pane_cp

0x99e8,	// (0x000751a7) mup_volume_pane_cp_ParamLimits

0x99e8,	// (0x000751a7) mup_volume_pane_cp

0x4233,	// (0x0006f9f2) mup2_visualizer_pane_g1_ParamLimits

0x4233,	// (0x0006f9f2) mup2_visualizer_pane_g1

0xc922,	// (0x000780e1) mup2_visualizer_pane_g2_ParamLimits

0xc922,	// (0x000780e1) mup2_visualizer_pane_g2

0x424a,	// (0x0006fa09) mup2_visualizer_pane_g3_ParamLimits

0x424a,	// (0x0006fa09) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0007ae33) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0007ae33) mup2_visualizer_pane_g

0xb756,	// (0x00076f15) aid_size_cell_fmradio

0x36b4,	// (0x0006ee73) aid_height_parent_landcape

0xab86,	// (0x00076345) wml_content_pane_cp

0xab8e,	// (0x0007634d) wml_tabs_pane

0xab97,	// (0x00076356) popup_wml_miniature_window

0xab9f,	// (0x0007635e) scroll_pane_cp021

0xabb3,	// (0x00076372) wml_content_pane_comp8

0xa027,	// (0x000757e6) bg_popup_sub_pane_cp05

0xc940,	// (0x000780ff) popup_wml_miniature_window_g1

0xc948,	// (0x00078107) wml_miniature_view_pane

0x4256,	// (0x0006fa15) aid_size_wml_view

0x425e,	// (0x0006fa1d) wml_miniature_view_pane_g1

0x4267,	// (0x0006fa26) wml_miniature_view_pane_g2

0x4270,	// (0x0006fa2f) wml_miniature_view_pane_g3

0x4278,	// (0x0006fa37) wml_miniature_view_pane_g4

0x4280,	// (0x0006fa3f) wml_miniature_view_pane_g5

0x4288,	// (0x0006fa47) wml_miniature_view_pane_g6

0x4290,	// (0x0006fa4f) wml_miniature_view_pane_g7

0x4298,	// (0x0006fa57) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0007ae3a) wml_miniature_view_pane_g

0xc950,	// (0x0007810f) background_graphic_ParamLimits

0xc950,	// (0x0007810f) background_graphic

0xc95c,	// (0x0007811b) wml_tabs_2_pane

0xc965,	// (0x00078124) wml_tabs_3_pane_ParamLimits

0xc965,	// (0x00078124) wml_tabs_3_pane

0xc977,	// (0x00078136) wml_tabs_4_pane_ParamLimits

0xc977,	// (0x00078136) wml_tabs_4_pane

0xc98d,	// (0x0007814c) wml_tabs_5_pane_ParamLimits

0xc98d,	// (0x0007814c) wml_tabs_5_pane

0xc9a7,	// (0x00078166) wml_tabs_pane_g2_ParamLimits

0xc9a7,	// (0x00078166) wml_tabs_pane_g2

0xc9bb,	// (0x0007817a) wml_tabs_pane_g3_ParamLimits

0xc9bb,	// (0x0007817a) wml_tabs_pane_g3

0x42a0,	// (0x0006fa5f) wml_tabs_2_active_pane_ParamLimits

0x42a0,	// (0x0006fa5f) wml_tabs_2_active_pane

0x42b4,	// (0x0006fa73) wml_tabs_2_passive_pane_ParamLimits

0x42b4,	// (0x0006fa73) wml_tabs_2_passive_pane

0x42c8,	// (0x0006fa87) wml_tabs_3_active_pane_cp_ParamLimits

0x42c8,	// (0x0006fa87) wml_tabs_3_active_pane_cp

0x42dd,	// (0x0006fa9c) wml_tabs_3_passive_pane_ParamLimits

0x42dd,	// (0x0006fa9c) wml_tabs_3_passive_pane

0x42f0,	// (0x0006faaf) wml_tabs_3_passive_pane_cp_ParamLimits

0x42f0,	// (0x0006faaf) wml_tabs_3_passive_pane_cp

0x4307,	// (0x0006fac6) tabs_4_active_pane

0x430f,	// (0x0006face) tabs_4_passive_pane

0x4319,	// (0x0006fad8) tabs_4_passive_pane_cp

0x4321,	// (0x0006fae0) tabs_4_passive_pane_cp2

0x33cf,	// (0x0006eb8e) aid_height_text

0x2aaa,	// (0x0006e269) mup_volume_cont_pane_ParamLimits

0x2aaa,	// (0x0006e269) mup_volume_cont_pane

0x0571,	// (0x0006bd30) aid_size_cell_pinb

0x057b,	// (0x0006bd3a) aid_size_list_pinb

0x420b,	// (0x0006f9ca) mup2_volume_cont_pane_ParamLimits

0x420b,	// (0x0006f9ca) mup2_volume_cont_pane

0x99d4,	// (0x00075193) mup2_volume_cont_pane_g1_ParamLimits

0x99d4,	// (0x00075193) mup2_volume_cont_pane_g1

0x0234,	// (0x0006b9f3) aid_size_cell_touch_ParamLimits

0x0234,	// (0x0006b9f3) aid_size_cell_touch

0x0461,	// (0x0006bc20) touch_pane_ParamLimits

0x0461,	// (0x0006bc20) touch_pane

0x94f7,	// (0x00074cb6) main_rss2_pane

0xc9d8,	// (0x00078197) listscroll_rss2_pane

0xc9e1,	// (0x000781a0) rss2_navigation_pane

0xc9e9,	// (0x000781a8) list_rss2_pane

0xb21b,	// (0x000769da) scroll_pane_cp22

0xc9f1,	// (0x000781b0) rss2_navigation_pane_g1

0xc9fa,	// (0x000781b9) rss2_navigation_pane_g2

0xca02,	// (0x000781c1) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0007ae4b) rss2_navigation_pane_g

0xca0a,	// (0x000781c9) rss2_navigation_pane_t1

0x432b,	// (0x0006faea) rss2_list_single_pane_ParamLimits

0x432b,	// (0x0006faea) rss2_list_single_pane

0xca18,	// (0x000781d7) rss2_list_single_pane_t2

0xca26,	// (0x000781e5) rss2_list_single_pane_t3_ParamLimits

0xca26,	// (0x000781e5) rss2_list_single_pane_t3

0xca43,	// (0x00078202) rss2_list_single_pane_t4

0x23f9,	// (0x0006dbb8) smil_status_pane_g1

0x94e9,	// (0x00074ca8) main_image2_pane_ParamLimits

0x94e9,	// (0x00074ca8) main_image2_pane

0x3dd1,	// (0x0006f590) main_camera2_pane_g9_ParamLimits

0x3dd1,	// (0x0006f590) main_camera2_pane_g9

0x3eff,	// (0x0006f6be) main_camera2_pane_t5_ParamLimits

0x3eff,	// (0x0006f6be) main_camera2_pane_t5

0x99a4,	// (0x00075163) main_camera2_pane_t6_ParamLimits

0x99a4,	// (0x00075163) main_camera2_pane_t6

0x4340,	// (0x0006faff) main_image2_pane_g1_ParamLimits

0x4340,	// (0x0006faff) main_image2_pane_g1

0x310b,	// (0x0006e8ca) smil2_video_pane_ParamLimits

0x310b,	// (0x0006e8ca) smil2_video_pane

0x949f,	// (0x00074c5e) aid_zoom_text_primary_cp

0x94df,	// (0x00074c9e) popup_preview_fixed_window

0xaaef,	// (0x000762ae) im_reading_pane_g1

0x3c48,	// (0x0006f407) cams2_bc_adjust_pane_cp_ParamLimits

0x3c48,	// (0x0006f407) cams2_bc_adjust_pane_cp

0x3f2e,	// (0x0006f6ed) cams2_bc_adjust_pane_ParamLimits

0x3f2e,	// (0x0006f6ed) cams2_bc_adjust_pane

0xdbb8,	// (0x00079377) cams2_bc_adjust_pane_g1

0x9a0d,	// (0x000751cc) cams2_slider_pane

0x9a16,	// (0x000751d5) cams2_slider_pane_g1

0x9a1f,	// (0x000751de) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0007ae52) cams2_slider_pane_g

0x0669,	// (0x0006be28) calc_display_pane_ParamLimits

0x0691,	// (0x0006be50) calc_paper_pane_ParamLimits

0x06b4,	// (0x0006be73) grid_calc_pane_ParamLimits

0x98c9,	// (0x00075088) popup_clock_digital_window_t1_ParamLimits

0xb6f3,	// (0x00076eb2) main_image_pane_t1

0x064b,	// (0x0006be0a) aid_size_cell_calc_ParamLimits

0x064b,	// (0x0006be0a) aid_size_cell_calc

0x370c,	// (0x0006eecb) popup_blid_sat_info2_window_ParamLimits

0x370c,	// (0x0006eecb) popup_blid_sat_info2_window

0xca59,	// (0x00078218) aid_size_cell_blid

0xca61,	// (0x00078220) bg_popup_window_pane_cp07

0xca84,	// (0x00078243) grid_popup_blid_pane

0xca8e,	// (0x0007824d) heading_pane_cp05_ParamLimits

0xca8e,	// (0x0007824d) heading_pane_cp05

0xcb58,	// (0x00078317) cell_popup_blid_pane_ParamLimits

0xcb58,	// (0x00078317) cell_popup_blid_pane

0xcb7c,	// (0x0007833b) cell_popup_blid_pane_g1

0xcb84,	// (0x00078343) cell_popup_blid_pane_t1

0x41db,	// (0x0006f99a) mup2_indicator_pane_ParamLimits

0x41db,	// (0x0006f99a) mup2_indicator_pane

0xa9f6,	// (0x000761b5) mup2_visualizer_osc_pane

0xc92e,	// (0x000780ed) mup2_visualizer_spec_pane_ParamLimits

0xc92e,	// (0x000780ed) mup2_visualizer_spec_pane

0x4356,	// (0x0006fb15) mup2_spec_half_pane

0x435f,	// (0x0006fb1e) mup2_spec_half_pane_cp

0x4367,	// (0x0006fb26) mup2_spec_bar_pane_ParamLimits

0x4367,	// (0x0006fb26) mup2_spec_bar_pane

0xc8cf,	// (0x0007808e) mup2_spec_bar_pane_g1

0xc8d9,	// (0x00078098) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007adc5) mup2_spec_bar_pane_g

0x4387,	// (0x0006fb46) mup2_osc_middle_pane

0xc8eb,	// (0x000780aa) mup2_visualizer_osc_pane_g1

0x9521,	// (0x00074ce0) popup_number_entry_window_t1_ParamLimits

0x9534,	// (0x00074cf3) popup_number_entry_window_t2_ParamLimits

0x9546,	// (0x00074d05) popup_number_entry_window_t3_ParamLimits

0x04b3,	// (0x0006bc72) popup_number_entry_window_t5_ParamLimits

0x04b3,	// (0x0006bc72) popup_number_entry_window_t5

0xf0ca,	// (0x0007a889) popup_number_entry_window_t_ParamLimits

0x9558,	// (0x00074d17) text_title_cp2_ParamLimits

0x9908,	// (0x000750c7) aid_hotspot_pointer_text2_pane

0x9922,	// (0x000750e1) main_viewer_pane_g9_ParamLimits

0x9922,	// (0x000750e1) main_viewer_pane_g9

0xad28,	// (0x000764e7) cale_month_pane_t1_ParamLimits

0xad65,	// (0x00076524) bg_cale_pane_ParamLimits

0xad7d,	// (0x0007653c) list_cale_pane_ParamLimits

0xad8e,	// (0x0007654d) listscroll_cale_day_pane_t1

0xada0,	// (0x0007655f) scroll_pane_cp09_ParamLimits

0x2adc,	// (0x0006e29b) main_mup_eq_pane_t1_ParamLimits

0x2adc,	// (0x0006e29b) main_mup_eq_pane_t1

0x2af6,	// (0x0006e2b5) main_mup_eq_pane_t2_ParamLimits

0x2af6,	// (0x0006e2b5) main_mup_eq_pane_t2

0x2b10,	// (0x0006e2cf) main_mup_eq_pane_t3_ParamLimits

0x2b10,	// (0x0006e2cf) main_mup_eq_pane_t3

0x2b2c,	// (0x0006e2eb) main_mup_eq_pane_t4_ParamLimits

0x2b2c,	// (0x0006e2eb) main_mup_eq_pane_t4

0x2b48,	// (0x0006e307) main_mup_eq_pane_t5_ParamLimits

0x2b48,	// (0x0006e307) main_mup_eq_pane_t5

0x2b64,	// (0x0006e323) main_mup_eq_pane_t6_ParamLimits

0x2b64,	// (0x0006e323) main_mup_eq_pane_t6

0x2b78,	// (0x0006e337) main_mup_eq_pane_t7_ParamLimits

0x2b78,	// (0x0006e337) main_mup_eq_pane_t7

0x2b8c,	// (0x0006e34b) main_mup_eq_pane_t8_ParamLimits

0x2b8c,	// (0x0006e34b) main_mup_eq_pane_t8

0x2ba0,	// (0x0006e35f) main_mup_eq_pane_t9_ParamLimits

0x2ba0,	// (0x0006e35f) main_mup_eq_pane_t9

0x2bba,	// (0x0006e379) main_mup_eq_pane_t10_ParamLimits

0x2bba,	// (0x0006e379) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007ac14) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007ac14) main_mup_eq_pane_t

0x2c69,	// (0x0006e428) mup_equalizer_pane_cp5_ParamLimits

0x2c7d,	// (0x0006e43c) mup_equalizer_pane_cp6_ParamLimits

0x2c91,	// (0x0006e450) mup_equalizer_pane_cp7_ParamLimits

0x94f7,	// (0x00074cb6) main_gallery_pane

0xc8f4,	// (0x000780b3) smil2_volume_pane

0xc8fc,	// (0x000780bb) smil_status_volume_pane_g1_ParamLimits

0xc90f,	// (0x000780ce) smil_status_volume_pane_g2_ParamLimits

0x9982,	// (0x00075141) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007adca) smil_status_volume_pane_g_ParamLimits

0xca61,	// (0x00078220) bg_popup_window_pane_cp07_ParamLimits

0xca6f,	// (0x0007822e) blid_firmament_pane

0x4390,	// (0x0006fb4f) aid_size_cell_gallery_ParamLimits

0x4390,	// (0x0006fb4f) aid_size_cell_gallery

0x43a6,	// (0x0006fb65) grid_gallery_pane_ParamLimits

0x43a6,	// (0x0006fb65) grid_gallery_pane

0x43bf,	// (0x0006fb7e) cell_gallery_pane_ParamLimits

0x43bf,	// (0x0006fb7e) cell_gallery_pane

0xcb92,	// (0x00078351) bg_cell_gallery_focus_pane_ParamLimits

0xcb92,	// (0x00078351) bg_cell_gallery_focus_pane

0xcba4,	// (0x00078363) cell_gallery_pane_g1_ParamLimits

0xcba4,	// (0x00078363) cell_gallery_pane_g1

0x4408,	// (0x0006fbc7) cell_gallery_pane_g2_ParamLimits

0x4408,	// (0x0006fbc7) cell_gallery_pane_g2

0x4415,	// (0x0006fbd4) cell_gallery_pane_g3_ParamLimits

0x4415,	// (0x0006fbd4) cell_gallery_pane_g3

0xcbb0,	// (0x0007836f) cell_gallery_pane_g4_ParamLimits

0xcbb0,	// (0x0007836f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0007ae78) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0007ae78) cell_gallery_pane_g

0xcbbc,	// (0x0007837b) bg_cell_gallery_focus_pane_g1

0xcbc4,	// (0x00078383) bg_cell_gallery_focus_pane_g2

0xcbcc,	// (0x0007838b) bg_cell_gallery_focus_pane_g3

0xcbd4,	// (0x00078393) bg_cell_gallery_focus_pane_g4

0xcbdc,	// (0x0007839b) bg_cell_gallery_focus_pane_g5

0xcbe4,	// (0x000783a3) bg_cell_gallery_focus_pane_g6

0xcbec,	// (0x000783ab) bg_cell_gallery_focus_pane_g7

0xcbf4,	// (0x000783b3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0007ae81) bg_cell_gallery_focus_pane_g

0xcbfc,	// (0x000783bb) aid_firma_cardinal

0xcc10,	// (0x000783cf) blid_firmament_pane_t1

0xcc27,	// (0x000783e6) blid_firmament_pane_t2

0xcc3e,	// (0x000783fd) blid_firmament_pane_t3

0xcc55,	// (0x00078414) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0007ae92) blid_firmament_pane_t

0xcc6c,	// (0x0007842b) blid_sat_info_pane

0xcc7c,	// (0x0007843b) blid_sat_info_pane_g1

0xcc7c,	// (0x0007843b) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007ae9b) blid_sat_info_pane_g

0xcc86,	// (0x00078445) blid_sat_info_pane_t1

0xcc94,	// (0x00078453) smil2_volume_content_pane

0xcc9d,	// (0x0007845c) smil2_volume_pane_g1

0xcca5,	// (0x00078464) smil2_volume_content_pane_g1

0xccae,	// (0x0007846d) smil2_volume_content_pane_g2

0xccb7,	// (0x00078476) smil2_volume_content_pane_g3

0xccc0,	// (0x0007847f) smil2_volume_content_pane_g4

0xccc9,	// (0x00078488) smil2_volume_content_pane_g5

0xccd2,	// (0x00078491) smil2_volume_content_pane_g6

0xccdb,	// (0x0007849a) smil2_volume_content_pane_g7

0xcce4,	// (0x000784a3) smil2_volume_content_pane_g8

0xcced,	// (0x000784ac) smil2_volume_content_pane_g9

0xccf6,	// (0x000784b5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0007aea0) smil2_volume_content_pane_g

0x0c54,	// (0x0006c413) cale_week_day_heading_pane_t1_ParamLimits

0x0c99,	// (0x0006c458) cale_week_day_heading_pane_t2_ParamLimits

0x0ce3,	// (0x0006c4a2) cale_week_day_heading_pane_t3_ParamLimits

0x0d2d,	// (0x0006c4ec) cale_week_day_heading_pane_t4_ParamLimits

0x0d77,	// (0x0006c536) cale_week_day_heading_pane_t5_ParamLimits

0x0dc9,	// (0x0006c588) cale_week_day_heading_pane_t6_ParamLimits

0x0e1b,	// (0x0006c5da) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007a990) cale_week_day_heading_pane_t_ParamLimits

0xa99b,	// (0x0007615a) bg_cale_side_pane_ParamLimits

0x0e60,	// (0x0006c61f) cale_week_time_pane_t1_ParamLimits

0x0e7a,	// (0x0006c639) cale_week_time_pane_t2_ParamLimits

0x0e94,	// (0x0006c653) cale_week_time_pane_t3_ParamLimits

0x0eae,	// (0x0006c66d) cale_week_time_pane_t4_ParamLimits

0x0ec8,	// (0x0006c687) cale_week_time_pane_t5_ParamLimits

0x0ee2,	// (0x0006c6a1) cale_week_time_pane_t6_ParamLimits

0x0efc,	// (0x0006c6bb) cale_week_time_pane_t7_ParamLimits

0x0f16,	// (0x0006c6d5) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007a99f) cale_week_time_pane_t_ParamLimits

0x0f36,	// (0x0006c6f5) cell_cale_week_pane_g2_ParamLimits

0xa99b,	// (0x0007615a) bg_cale_side_pane_cp01_ParamLimits

0x21e6,	// (0x0006d9a5) cale_month_week_pane_t1_ParamLimits

0x21ff,	// (0x0006d9be) cale_month_week_pane_t2_ParamLimits

0x2218,	// (0x0006d9d7) cale_month_week_pane_t3_ParamLimits

0x2231,	// (0x0006d9f0) cale_month_week_pane_t4_ParamLimits

0x224a,	// (0x0006da09) cale_month_week_pane_t5_ParamLimits

0x2263,	// (0x0006da22) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007aa74) cale_month_week_pane_t_ParamLimits

0x9845,	// (0x00075004) cell_cale_month_pane_g1_ParamLimits

0x94f7,	// (0x00074cb6) main_cale_event_viewer_pane

0x9471,	// (0x00074c30) listscroll_cale_event_viewer_pane

0xccff,	// (0x000784be) list_cale_ev_pane

0xcd07,	// (0x000784c6) scroll_pane_cp023

0xcd13,	// (0x000784d2) field_cale_ev_pane_ParamLimits

0xcd13,	// (0x000784d2) field_cale_ev_pane

0xcd31,	// (0x000784f0) field_cale_ev_content_pane_ParamLimits

0xcd31,	// (0x000784f0) field_cale_ev_content_pane

0xcd3d,	// (0x000784fc) field_cale_ev_pane_g1_ParamLimits

0xcd3d,	// (0x000784fc) field_cale_ev_pane_g1

0xcd49,	// (0x00078508) field_cale_ev_pane_g2_ParamLimits

0xcd49,	// (0x00078508) field_cale_ev_pane_g2

0xcd61,	// (0x00078520) field_cale_ev_pane_g3_ParamLimits

0xcd61,	// (0x00078520) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0007aeb5) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0007aeb5) field_cale_ev_pane_g

0xcd79,	// (0x00078538) field_cale_ev_pane_t1_ParamLimits

0xcd79,	// (0x00078538) field_cale_ev_pane_t1

0xcd90,	// (0x0007854f) field_cale_ev_content_pane_t1_ParamLimits

0xcd90,	// (0x0007854f) field_cale_ev_content_pane_t1

0xb5d9,	// (0x00076d98) bg_button_pane_cp01

0x0981,	// (0x0006c140) listscroll_cale_week_pane_ParamLimits

0xa946,	// (0x00076105) popup_toolbar_window_cp01

0xa96c,	// (0x0007612b) listscroll_cale_week_pane_t1_ParamLimits

0x0981,	// (0x0006c140) listscroll_cale_day_pane_ParamLimits

0xa946,	// (0x00076105) popup_toolbar_window_cp02

0xad8e,	// (0x0007654d) listscroll_cale_day_pane_t1_ParamLimits

0x36d2,	// (0x0006ee91) main_cale_month_pane_ParamLimits

0x996d,	// (0x0007512c) popup_toolbar_window_cp03_ParamLimits

0x996d,	// (0x0007512c) popup_toolbar_window_cp03

0x2fd3,	// (0x0006e792) main_image_pane_g2_ParamLimits

0x2fd3,	// (0x0006e792) main_image_pane_g2

0x2fe4,	// (0x0006e7a3) main_image_pane_g3_ParamLimits

0x2fe4,	// (0x0006e7a3) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007aca6) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007aca6) main_image_pane_g

0xb6f3,	// (0x00076eb2) main_image_pane_t1_ParamLimits

0x2ff5,	// (0x0006e7b4) main_image_pane_t2_ParamLimits

0x2ff5,	// (0x0006e7b4) main_image_pane_t2

0x3007,	// (0x0006e7c6) main_image_pane_t3_ParamLimits

0x3007,	// (0x0006e7c6) main_image_pane_t3

0x302f,	// (0x0006e7ee) main_image_pane_t4_ParamLimits

0x302f,	// (0x0006e7ee) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007acad) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007acad) main_image_pane_t

0x304f,	// (0x0006e80e) popup_image_details_window_cp01

0x3059,	// (0x0006e818) popup_toobar_trans_pane_cp01_ParamLimits

0x3059,	// (0x0006e818) popup_toobar_trans_pane_cp01

0x37eb,	// (0x0006efaa) popup_image_details_window_ParamLimits

0x37eb,	// (0x0006efaa) popup_image_details_window

0x9940,	// (0x000750ff) popup_image_focus_window

0x3c02,	// (0x0006f3c1) camera2_autofocus_pane_ParamLimits

0x3c02,	// (0x0006f3c1) camera2_autofocus_pane

0x9471,	// (0x00074c30) bg_popup_sub_pane_cp06

0xcdae,	// (0x0007856d) popup_image_focus_window_g1

0xcdb6,	// (0x00078575) popup_image_focus_window_g2

0xcdbe,	// (0x0007857d) popup_image_focus_window_g3

0xcdc6,	// (0x00078585) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007aebc) popup_image_focus_window_g

0xcdce,	// (0x0007858d) popup_image_focus_window_t1

0xcddc,	// (0x0007859b) popup_image_focus_window_t2

0xcdec,	// (0x000785ab) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0007aec5) popup_image_focus_window_t

0xcdfa,	// (0x000785b9) camera2_autofocus_pane_g1

0xb2f7,	// (0x00076ab6) bg_tb_trans_pane_cp01

0xce08,	// (0x000785c7) popup_image_details_window_g1

0xce1b,	// (0x000785da) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0007aed7) popup_image_details_window_g

0xce44,	// (0x00078603) popup_image_details_window_t1

0xce56,	// (0x00078615) popup_image_details_window_t2

0xce6f,	// (0x0007862e) popup_image_details_window_t3

0xce83,	// (0x00078642) popup_image_details_window_t4

0xce9e,	// (0x0007865d) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007aede) popup_image_details_window_t

0xa333,	// (0x00075af2) bg_calc_paper_pane_ParamLimits

0x94f7,	// (0x00074cb6) grid_highlight_pane_cp013

0x97b5,	// (0x00074f74) list_calc_pane_ParamLimits

0x97c7,	// (0x00074f86) scroll_pane_cp024

0xa347,	// (0x00075b06) bg_calc_display_pane_ParamLimits

0x07b2,	// (0x0006bf71) calc_display_pane_t1_ParamLimits

0x07c4,	// (0x0006bf83) calc_display_pane_t2_ParamLimits

0x97cf,	// (0x00074f8e) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007a910) calc_display_pane_t_ParamLimits

0x087e,	// (0x0006c03d) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0007a92d) cell_calc_pane_g

0x0887,	// (0x0006c046) cell_calc_pane_t1

0xa3a6,	// (0x00075b65) grid_highlight_pane_cp02_ParamLimits

0xa3bc,	// (0x00075b7b) toolbar_button_pane_cp01_ParamLimits

0xa3bc,	// (0x00075b7b) toolbar_button_pane_cp01

0xb738,	// (0x00076ef7) temp_image_control_pane_ParamLimits

0xb738,	// (0x00076ef7) temp_image_control_pane

0x94e9,	// (0x00074ca8) main_mp3_pane

0xceb8,	// (0x00078677) temp_image_control_pane_g1_ParamLimits

0xceb8,	// (0x00078677) temp_image_control_pane_g1

0xcec6,	// (0x00078685) temp_image_control_pane_g2_ParamLimits

0xcec6,	// (0x00078685) temp_image_control_pane_g2

0xced8,	// (0x00078697) temp_image_control_pane_g3_ParamLimits

0xced8,	// (0x00078697) temp_image_control_pane_g3

0x4452,	// (0x0006fc11) temp_image_control_pane_g4_ParamLimits

0x4452,	// (0x0006fc11) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0007aee9) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0007aee9) temp_image_control_pane_g

0xceb8,	// (0x00078677) main_mp3_pane_g1

0x4465,	// (0x0006fc24) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0007aef2) main_mp3_pane_g

0xcf1b,	// (0x000786da) main_mp3_pane_t1

0xa9fe,	// (0x000761bd) main_camera_pane_g8_ParamLimits

0xa9fe,	// (0x000761bd) main_camera_pane_g8

0x1230,	// (0x0006c9ef) main_video_pane_g7_ParamLimits

0x1230,	// (0x0006c9ef) main_video_pane_g7

0x99c2,	// (0x00075181) main_camera2_pane_t7_ParamLimits

0x99c2,	// (0x00075181) main_camera2_pane_t7

0xab46,	// (0x00076305) scroll_pane_cp025_ParamLimits

0xab46,	// (0x00076305) scroll_pane_cp025

0xab5a,	// (0x00076319) scroll_pane_cp026_ParamLimits

0xab5a,	// (0x00076319) scroll_pane_cp026

0xab69,	// (0x00076328) wml_content_pane_ParamLimits

0x94f7,	// (0x00074cb6) main_touch_calib_pane

0x4539,	// (0x0006fcf8) main_touch_calib_pane_g1

0x454b,	// (0x0006fd0a) main_touch_calib_pane_g2

0x455d,	// (0x0006fd1c) main_touch_calib_pane_g3

0x456f,	// (0x0006fd2e) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0007af10) main_touch_calib_pane_g

0x4581,	// (0x0006fd40) main_touch_calib_pane_t1

0x459b,	// (0x0006fd5a) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0007af19) main_touch_calib_pane_t

0xb305,	// (0x00076ac4) mup_progress_pane_cp02

0xb33a,	// (0x00076af9) navi_pane_g1

0xb3f5,	// (0x00076bb4) navi_pane_mp_t3

0x94e9,	// (0x00074ca8) main_mp3_pane_ParamLimits

0x3970,	// (0x0006f12f) navi_pane_ParamLimits

0xceb8,	// (0x00078677) main_mp3_pane_g1_ParamLimits

0x4465,	// (0x0006fc24) main_mp3_pane_g2_ParamLimits

0x4473,	// (0x0006fc32) main_mp3_pane_g3_ParamLimits

0x4473,	// (0x0006fc32) main_mp3_pane_g3

0x4481,	// (0x0006fc40) main_mp3_pane_g4_ParamLimits

0x4481,	// (0x0006fc40) main_mp3_pane_g4

0xcee8,	// (0x000786a7) main_mp3_pane_g5_ParamLimits

0xcee8,	// (0x000786a7) main_mp3_pane_g5

0xcef6,	// (0x000786b5) main_mp3_pane_g6_ParamLimits

0xcef6,	// (0x000786b5) main_mp3_pane_g6

0xcf03,	// (0x000786c2) main_mp3_pane_g7_ParamLimits

0xcf03,	// (0x000786c2) main_mp3_pane_g7

0xcf0f,	// (0x000786ce) main_mp3_pane_g8_ParamLimits

0xcf0f,	// (0x000786ce) main_mp3_pane_g8

0xf733,	// (0x0007aef2) main_mp3_pane_g_ParamLimits

0x448d,	// (0x0006fc4c) main_mp3_pane_t2

0x449b,	// (0x0006fc5a) main_mp3_pane_t3

0xcf29,	// (0x000786e8) main_mp3_pane_t4

0xcf37,	// (0x000786f6) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0007af03) main_mp3_pane_t

0xcf45,	// (0x00078704) mup_progress_pane_cp01

0x949f,	// (0x00074c5e) aid_zoom_text_secondary2

0xccff,	// (0x000784be) list_cale_ev2_pane

0xcd07,	// (0x000784c6) scroll_pane_cp023_ParamLimits

0x45f1,	// (0x0006fdb0) field_cale_ev2_pane_ParamLimits

0x45f1,	// (0x0006fdb0) field_cale_ev2_pane

0xa436,	// (0x00075bf5) field_cale_ev2_pane_g1_ParamLimits

0xa436,	// (0x00075bf5) field_cale_ev2_pane_g1

0xa442,	// (0x00075c01) field_cale_ev2_pane_g2_ParamLimits

0xa442,	// (0x00075c01) field_cale_ev2_pane_g2

0xa45a,	// (0x00075c19) field_cale_ev2_pane_g3_ParamLimits

0xa45a,	// (0x00075c19) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0007af24) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0007af24) field_cale_ev2_pane_g

0x4611,	// (0x0006fdd0) field_cale_ev2_pane_t1_ParamLimits

0x4611,	// (0x0006fdd0) field_cale_ev2_pane_t1

0x4628,	// (0x0006fde7) field_cale_ev2_pane_t2_ParamLimits

0x4628,	// (0x0006fde7) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0007af2d) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0007af2d) field_cale_ev2_pane_t

0x2e88,	// (0x0006e647) main_postcard_pane_g5_ParamLimits

0x2e88,	// (0x0006e647) main_postcard_pane_g5

0x2e9e,	// (0x0006e65d) main_postcard_pane_g6_ParamLimits

0x2e9e,	// (0x0006e65d) main_postcard_pane_g6

0x0ffc,	// (0x0006c7bb) camera2_autofocus_pane_cp_ParamLimits

0x0ffc,	// (0x0006c7bb) camera2_autofocus_pane_cp

0x94e9,	// (0x00074ca8) main_mup3_pane

0x463d,	// (0x0006fdfc) main_mup3_pane_g1_ParamLimits

0x463d,	// (0x0006fdfc) main_mup3_pane_g1

0x465f,	// (0x0006fe1e) main_mup3_pane_g2_ParamLimits

0x465f,	// (0x0006fe1e) main_mup3_pane_g2

0x46dd,	// (0x0006fe9c) main_mup3_pane_g3_ParamLimits

0x46dd,	// (0x0006fe9c) main_mup3_pane_g3

0x4723,	// (0x0006fee2) main_mup3_pane_g4_ParamLimits

0x4723,	// (0x0006fee2) main_mup3_pane_g4

0x4769,	// (0x0006ff28) main_mup3_pane_g5_ParamLimits

0x4769,	// (0x0006ff28) main_mup3_pane_g5

0x47af,	// (0x0006ff6e) main_mup3_pane_g6_ParamLimits

0x47af,	// (0x0006ff6e) main_mup3_pane_g6

0xcf6d,	// (0x0007872c) main_mup3_pane_g7_ParamLimits

0xcf6d,	// (0x0007872c) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0007af3d) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0007af3d) main_mup3_pane_g

0x482d,	// (0x0006ffec) main_mup3_pane_t1_ParamLimits

0x482d,	// (0x0006ffec) main_mup3_pane_t1

0x48a1,	// (0x00070060) main_mup3_pane_t2_ParamLimits

0x48a1,	// (0x00070060) main_mup3_pane_t2

0x4975,	// (0x00070134) main_mup3_pane_t4_ParamLimits

0x4975,	// (0x00070134) main_mup3_pane_t4

0x49cb,	// (0x0007018a) main_mup3_pane_t5_ParamLimits

0x49cb,	// (0x0007018a) main_mup3_pane_t5

0x4a87,	// (0x00070246) main_mup3_pane_t6_ParamLimits

0x4a87,	// (0x00070246) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0007af4e) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0007af4e) main_mup3_pane_t

0x4b3f,	// (0x000702fe) mup3_progress_pane_ParamLimits

0x4b3f,	// (0x000702fe) mup3_progress_pane

0x4bd5,	// (0x00070394) popup_mup3_control_window_ParamLimits

0x4bd5,	// (0x00070394) popup_mup3_control_window

0xcf7b,	// (0x0007873a) popup_mup3_text_window

0x4c07,	// (0x000703c6) mup3_progress_pane_t1

0x4c26,	// (0x000703e5) mup3_progress_pane_t2

0xcf83,	// (0x00078742) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0007af5b) mup3_progress_pane_t

0xcfa0,	// (0x0007875f) mup_progress_pane_cp03

0x9471,	// (0x00074c30) bg_tb_trans_pane_cp04

0x4c45,	// (0x00070404) mup3_volume_pane

0x4c4d,	// (0x0007040c) popup_mup3_control_window_g1

0x4c56,	// (0x00070415) mup3_volume_pane_g1

0x4c5f,	// (0x0007041e) mup3_volume_pane_g2

0x4c68,	// (0x00070427) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0007af62) mup3_volume_pane_g

0x9471,	// (0x00074c30) bg_tb_trans_pane_cp03

0xcfb0,	// (0x0007876f) popup_mup3_text_window_g1

0xcfb8,	// (0x00078777) popup_mup3_text_window_t1

0xa38f,	// (0x00075b4e) list_calc_item_pane_g1_ParamLimits

0xc9cf,	// (0x0007818e) mup_volume_pane_cp_g1

0x45b5,	// (0x0006fd74) main_touch_calib_pane_t3

0x45c9,	// (0x0006fd88) main_touch_calib_pane_t4

0x45dd,	// (0x0006fd9c) main_touch_calib_pane_t5

0x947b,	// (0x00074c3a) aid_cell_size_toolbar2

0x9483,	// (0x00074c42) aid_popup3_width_pane

0x948f,	// (0x00074c4e) aid_zoom_text_msg_primary

0x0fdb,	// (0x0006c79a) vorec_t7

0xa353,	// (0x00075b12) bg_calc_paper_pane_g1_ParamLimits

0xa35f,	// (0x00075b1e) bg_calc_paper_pane_g2_ParamLimits

0xa36b,	// (0x00075b2a) bg_calc_paper_pane_g3_ParamLimits

0xa377,	// (0x00075b36) bg_calc_paper_pane_g4_ParamLimits

0xa383,	// (0x00075b42) bg_calc_paper_pane_g5_ParamLimits

0x080b,	// (0x0006bfca) bg_calc_paper_pane_g6_ParamLimits

0x081a,	// (0x0006bfd9) bg_calc_paper_pane_g7_ParamLimits

0x0829,	// (0x0006bfe8) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007a917) bg_calc_paper_pane_g_ParamLimits

0x083c,	// (0x0006bffb) calc_bg_paper_pane_g9_ParamLimits

0x1147,	// (0x0006c906) image_qvga_pane_ParamLimits

0x1147,	// (0x0006c906) image_qvga_pane

0xa282,	// (0x00075a41) bg_popup_sub_pane_cp04_ParamLimits

0xb66f,	// (0x00076e2e) popup_mup_playback_window_g1_ParamLimits

0xb67b,	// (0x00076e3a) popup_mup_playback_window_t1_ParamLimits

0xb690,	// (0x00076e4f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007aca1) popup_mup_playback_window_t_ParamLimits

0x40f5,	// (0x0006f8b4) main_mup2_pane_g3_ParamLimits

0x40f5,	// (0x0006f8b4) main_mup2_pane_g3

0x1556,	// (0x0006cd15) popup_toolbar_window_cp04

0xba72,	// (0x00077231) popup_call2_audio_second_window_g3_ParamLimits

0xba72,	// (0x00077231) popup_call2_audio_second_window_g3

0xbe7c,	// (0x0007763b) popup_call2_audio_first_window_g4_ParamLimits

0xbe7c,	// (0x0007763b) popup_call2_audio_first_window_g4

0xc4fb,	// (0x00077cba) popup_call2_audio_in_window_g4_ParamLimits

0xc4fb,	// (0x00077cba) popup_call2_audio_in_window_g4

0x2fb5,	// (0x0006e774) aid_area_sk_bg_cut_ParamLimits

0x2fb5,	// (0x0006e774) aid_area_sk_bg_cut

0xb6a5,	// (0x00076e64) aid_area_sk_bg_cut_2_ParamLimits

0xb6a5,	// (0x00076e64) aid_area_sk_bg_cut_2

0x43f8,	// (0x0006fbb7) aid_placing_details_win

0x4400,	// (0x0006fbbf) aid_placing_details_win_2

0xcdfa,	// (0x000785b9) camera2_autofocus_pane_g1_ParamLimits

0x03fa,	// (0x0006bbb9) popup_fixed_preview_cale_window_ParamLimits

0x03fa,	// (0x0006bbb9) popup_fixed_preview_cale_window

0xb473,	// (0x00076c32) navi_slider_pane_g3

0xb47c,	// (0x00076c3b) navi_slider_pane_g4

0xb485,	// (0x00076c44) navi_slider_pane_g5

0xb473,	// (0x00076c32) navi_slider_pane_g6

0x98ef,	// (0x000750ae) navi_slider_pane_g7

0xb5a6,	// (0x00076d65) mup_scale_pane_g3

0xb5af,	// (0x00076d6e) mup_scale_pane_g4

0xb5b8,	// (0x00076d77) mup_scale_pane_g5

0x2ca5,	// (0x0006e464) mup_scale_pane_g6

0x2cae,	// (0x0006e46d) mup_scale_pane_g7

0xb473,	// (0x00076c32) cams2_slider_pane_g3

0xca51,	// (0x00078210) cams2_slider_pane_g4

0x9a28,	// (0x000751e7) cams2_slider_pane_g5

0xb473,	// (0x00076c32) cams2_slider_pane_g6

0x9a30,	// (0x000751ef) cams2_slider_pane_g7

0xcc7c,	// (0x0007843b) camera2_autofocus_pane_cp_g1

0xc868,	// (0x00078027) bg_popup_preview_window_pane_cp02_ParamLimits

0xc868,	// (0x00078027) bg_popup_preview_window_pane_cp02

0xcfc6,	// (0x00078785) list_fp_cale_pane_ParamLimits

0xcfc6,	// (0x00078785) list_fp_cale_pane

0xcfd2,	// (0x00078791) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfd2,	// (0x00078791) popup_fixed_preview_cale_window_t1

0x4c71,	// (0x00070430) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c71,	// (0x00070430) popup_fixed_preview_cale_window_t2

0x4c86,	// (0x00070445) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c86,	// (0x00070445) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0007af69) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0007af69) popup_fixed_preview_cale_window_t

0x4c9b,	// (0x0007045a) list_single_fp_cale_pane_ParamLimits

0x4c9b,	// (0x0007045a) list_single_fp_cale_pane

0xcff0,	// (0x000787af) list_single_fp_cale_pane_g1_ParamLimits

0xcff0,	// (0x000787af) list_single_fp_cale_pane_g1

0xcffc,	// (0x000787bb) list_single_fp_cale_pane_g2_ParamLimits

0xcffc,	// (0x000787bb) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0007af70) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0007af70) list_single_fp_cale_pane_g

0xd015,	// (0x000787d4) list_single_fp_cale_pane_t1_ParamLimits

0xd015,	// (0x000787d4) list_single_fp_cale_pane_t1

0xd027,	// (0x000787e6) list_single_fp_cale_pane_t2_ParamLimits

0xd027,	// (0x000787e6) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0007af77) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0007af77) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94f7,	// (0x00074cb6) main_dialer_pane

0x4cb0,	// (0x0007046f) aid_cell_size_keypad

0x4cba,	// (0x00070479) dialer_ne_pane

0x4cc2,	// (0x00070481) grid_dialer_command_1_pane

0x4cca,	// (0x00070489) grid_dialer_command_2_pane

0x4cd2,	// (0x00070491) grid_dialer_keypad_pane

0x4ce4,	// (0x000704a3) bg_popup_call_pane_cp06_ParamLimits

0x4ce4,	// (0x000704a3) bg_popup_call_pane_cp06

0x4cf0,	// (0x000704af) dialer_ne_clear_pane_ParamLimits

0x4cf0,	// (0x000704af) dialer_ne_clear_pane

0xd05a,	// (0x00078819) dialer_ne_pane_g1

0xd062,	// (0x00078821) dialer_ne_pane_t1_ParamLimits

0xd062,	// (0x00078821) dialer_ne_pane_t1

0x4cfc,	// (0x000704bb) dialer_ne_pane_t2_ParamLimits

0x4cfc,	// (0x000704bb) dialer_ne_pane_t2

0x4d26,	// (0x000704e5) dialer_ne_pane_t3_ParamLimits

0x4d26,	// (0x000704e5) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007af7c) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007af7c) dialer_ne_pane_t

0x4d56,	// (0x00070515) dialer_ne_pane_t3_copy1_ParamLimits

0x4d56,	// (0x00070515) dialer_ne_pane_t3_copy1

0x4d85,	// (0x00070544) cell_dialer_keypad_pane_ParamLimits

0x4d85,	// (0x00070544) cell_dialer_keypad_pane

0x4d9c,	// (0x0007055b) cell_dialer_command_1_pane_ParamLimits

0x4d9c,	// (0x0007055b) cell_dialer_command_1_pane

0x4db2,	// (0x00070571) cell_dialer_command_2_pane_ParamLimits

0x4db2,	// (0x00070571) cell_dialer_command_2_pane

0xd074,	// (0x00078833) bg_button_pane_cp02_ParamLimits

0xd074,	// (0x00078833) bg_button_pane_cp02

0x4dc1,	// (0x00070580) cell_dialer_keypad_pane_g1_ParamLimits

0x4dc1,	// (0x00070580) cell_dialer_keypad_pane_g1

0xd074,	// (0x00078833) bg_button_pane_cp03_ParamLimits

0xd074,	// (0x00078833) bg_button_pane_cp03

0x4dd5,	// (0x00070594) cell_dialer_command_1_pane_g1_ParamLimits

0x4dd5,	// (0x00070594) cell_dialer_command_1_pane_g1

0xd080,	// (0x0007883f) bg_button_pane_cp04

0x4de9,	// (0x000705a8) cell_dialer_command_2_pane_g1

0xa9f6,	// (0x000761b5) bg_button_pane_cp06

0xd088,	// (0x00078847) dialer_ne_clear_pane_g1

0xb346,	// (0x00076b05) navi_pane_g2

0xb374,	// (0x00076b33) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007aba4) navi_pane_g

0xb403,	// (0x00076bc2) navi_pane_mv_g2

0xb42a,	// (0x00076be9) navi_pane_mv_g5

0x2869,	// (0x0006e028) navi_pane_mv_t1

0xa347,	// (0x00075b06) main_clock2_pane

0x4e34,	// (0x000705f3) main_clock2_list_pane_ParamLimits

0x4e34,	// (0x000705f3) main_clock2_list_pane

0x4e6a,	// (0x00070629) main_clock2_pane_t1_ParamLimits

0x4e6a,	// (0x00070629) main_clock2_pane_t1

0x4ea6,	// (0x00070665) main_clock2_pane_t2_ParamLimits

0x4ea6,	// (0x00070665) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007af88) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007af88) main_clock2_pane_t

0x4f44,	// (0x00070703) popup_clock_analogue_window_cp03_ParamLimits

0x4f44,	// (0x00070703) popup_clock_analogue_window_cp03

0x4f69,	// (0x00070728) popup_clock_digital_window_cp02_ParamLimits

0x4f69,	// (0x00070728) popup_clock_digital_window_cp02

0x4fda,	// (0x00070799) main_clock2_list_single_pane_ParamLimits

0x4fda,	// (0x00070799) main_clock2_list_single_pane

0xa9f6,	// (0x000761b5) list_highlight_pane_cp05

0xd0c6,	// (0x00078885) main_clock2_list_single_pane_t1

0x1556,	// (0x0006cd15) popup_toolbar_window_cp04_ParamLimits

0x4422,	// (0x0006fbe1) camera2_autofocus_pane_g2_ParamLimits

0x4422,	// (0x0006fbe1) camera2_autofocus_pane_g2

0x442e,	// (0x0006fbed) camera2_autofocus_pane_g3_ParamLimits

0x442e,	// (0x0006fbed) camera2_autofocus_pane_g3

0x443a,	// (0x0006fbf9) camera2_autofocus_pane_g4_ParamLimits

0x443a,	// (0x0006fbf9) camera2_autofocus_pane_g4

0x4446,	// (0x0006fc05) camera2_autofocus_pane_g5_ParamLimits

0x4446,	// (0x0006fc05) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007aecc) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007aecc) camera2_autofocus_pane_g

0xcf4d,	// (0x0007870c) camera2_autofocus_pane_cp_g2

0xcf55,	// (0x00078714) camera2_autofocus_pane_cp_g3

0xcf5d,	// (0x0007871c) camera2_autofocus_pane_cp_g4

0xcf65,	// (0x00078724) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0007af32) camera2_autofocus_pane_cp_g

0x4cdc,	// (0x0007049b) popup_dialer_spcha_window

0x9471,	// (0x00074c30) bg_popup_sub_pane_cp07

0xd0d4,	// (0x00078893) list_spcha_pane

0xd0dc,	// (0x0007889b) list_single_spcha_pane_ParamLimits

0xd0dc,	// (0x0007889b) list_single_spcha_pane

0x9471,	// (0x00074c30) list_highlight_pane_cp06

0xd0ed,	// (0x000788ac) list_single_spcha_pane_t1

0xc2a5,	// (0x00077a64) popup_call2_audio_out_window_g4_ParamLimits

0xc2a5,	// (0x00077a64) popup_call2_audio_out_window_g4

0x94f7,	// (0x00074cb6) main_imed2_pane

0x9948,	// (0x00075107) popup_imed_adjust2_window

0x3803,	// (0x0006efc2) popup_imed_trans_window_ParamLimits

0x3803,	// (0x0006efc2) popup_imed_trans_window

0xcaba,	// (0x00078279) popup_blid_sat_info2_window_t1

0xcac8,	// (0x00078287) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0007ae61) popup_blid_sat_info2_window_t

0x5084,	// (0x00070843) aid_size_cell_colour_35

0x50a4,	// (0x00070863) aid_size_cell_colour_112

0x50c4,	// (0x00070883) aid_size_cell_effect

0xc874,	// (0x00078033) bg_tb_trans_pane_cp02

0xae97,	// (0x00076656) heading_imed_pane

0x50e4,	// (0x000708a3) listscroll_imed_pane

0xd0fb,	// (0x000788ba) heading_imed_pane_g1

0xd103,	// (0x000788c2) heading_imed_pane_t1

0xd111,	// (0x000788d0) grid_imed_colour_35_pane_ParamLimits

0xd111,	// (0x000788d0) grid_imed_colour_35_pane

0x50f0,	// (0x000708af) grid_imed_effect_pane

0xd128,	// (0x000788e7) list_imed_aspect_pane

0x5106,	// (0x000708c5) scroll_pane_cp027_ParamLimits

0x5106,	// (0x000708c5) scroll_pane_cp027

0x5117,	// (0x000708d6) cell_imed_effect_pane_ParamLimits

0x5117,	// (0x000708d6) cell_imed_effect_pane

0xd130,	// (0x000788ef) cell_imed_colour_pane_ParamLimits

0xd130,	// (0x000788ef) cell_imed_colour_pane

0xd172,	// (0x00078931) cell_imed_colour_pane_g1_ParamLimits

0xd172,	// (0x00078931) cell_imed_colour_pane_g1

0xd183,	// (0x00078942) hgihlgiht_grid_pane_cp016_ParamLimits

0xd183,	// (0x00078942) hgihlgiht_grid_pane_cp016

0x513e,	// (0x000708fd) cell_imed_effect_pane_g1

0x5146,	// (0x00070905) grid_highlight_pane_cp017

0xd194,	// (0x00078953) list_imed_single_pane_ParamLimits

0xd194,	// (0x00078953) list_imed_single_pane

0x9471,	// (0x00074c30) list_highlight_pane_cp07

0xd1a9,	// (0x00078968) list_imed_aspect_pane_comp1_t1

0xc874,	// (0x00078033) bg_tb_trans_pane_cp05

0xd1cb,	// (0x0007898a) popup_imed_adjust2_window_g1

0xd1f2,	// (0x000789b1) popup_imed_adjust2_window_t1

0xd20a,	// (0x000789c9) slider_imed_adjust_pane

0xd21e,	// (0x000789dd) slider_imed_adjust_pane_g1

0xd22e,	// (0x000789ed) slider_imed_adjust_pane_g2

0xd23e,	// (0x000789fd) slider_imed_adjust_pane_g3

0xd24f,	// (0x00078a0e) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007afa5) slider_imed_adjust_pane_g

0x514f,	// (0x0007090e) aid_size_cell_clipart2

0x515b,	// (0x0007091a) grid_imed_clipart_pane

0xd260,	// (0x00078a1f) scroll_pane_cp031

0x5165,	// (0x00070924) cell_imed_clipart_pane_ParamLimits

0x5165,	// (0x00070924) cell_imed_clipart_pane

0x5187,	// (0x00070946) cell_imed_clipart_pane_g1

0x9471,	// (0x00074c30) grid_highlight_pane_cp014

0x4e49,	// (0x00070608) main_clock2_pane_g1_ParamLimits

0x4e49,	// (0x00070608) main_clock2_pane_g1

0x4f85,	// (0x00070744) aid_call2_pane_cp10

0x4f97,	// (0x00070756) aid_call_pane_cp10

0xb299,	// (0x00076a58) popup_clock_analogue_window_cp10_g1

0xb299,	// (0x00076a58) popup_clock_analogue_window_cp10_g2

0x4fa9,	// (0x00070768) popup_clock_analogue_window_cp10_g3

0x4fa9,	// (0x00070768) popup_clock_analogue_window_cp10_g4

0xb299,	// (0x00076a58) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007af93) popup_clock_analogue_window_cp10_g

0x4fbb,	// (0x0007077a) popup_clock_analogue_window_cp10_t1

0x4fec,	// (0x000707ab) clock_digital_number_pane_cp10_ParamLimits

0x4fec,	// (0x000707ab) clock_digital_number_pane_cp10

0x5004,	// (0x000707c3) clock_digital_number_pane_cp11_ParamLimits

0x5004,	// (0x000707c3) clock_digital_number_pane_cp11

0x501c,	// (0x000707db) clock_digital_number_pane_cp12_ParamLimits

0x501c,	// (0x000707db) clock_digital_number_pane_cp12

0x5034,	// (0x000707f3) clock_digital_number_pane_cp13_ParamLimits

0x5034,	// (0x000707f3) clock_digital_number_pane_cp13

0x504c,	// (0x0007080b) clock_digital_separator_pane_cp10_ParamLimits

0x504c,	// (0x0007080b) clock_digital_separator_pane_cp10

0x5064,	// (0x00070823) popup_clock_digital_window_cp02_t1_ParamLimits

0x5064,	// (0x00070823) popup_clock_digital_window_cp02_t1

0xa27a,	// (0x00075a39) clock_digital_number_pane_cp10_g1

0xa27a,	// (0x00075a39) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007afae) clock_digital_number_pane_cp10_g

0xa27a,	// (0x00075a39) clock_digital_separator_pane_cp10_g1

0xa27a,	// (0x00075a39) clock_digital_separator_pane_g2_cp10

0xb432,	// (0x00076bf1) navi_pane_vded_g4

0xb43b,	// (0x00076bfa) navi_pane_vded_g5

0xb444,	// (0x00076c03) navi_pane_vded_t1

0x94f7,	// (0x00074cb6) main_vded_pane

0x5190,	// (0x0007094f) main_vded_pane_g1

0x519a,	// (0x00070959) main_vded_pane_g2

0x51a4,	// (0x00070963) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007afb3) main_vded_pane_g

0x51ae,	// (0x0007096d) main_vded_pane_t1

0x51bc,	// (0x0007097b) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007afba) main_vded_pane_t

0x51ca,	// (0x00070989) vded_slider_pane

0x51d2,	// (0x00070991) vded_video_pane

0xd268,	// (0x00078a27) vded_video_pane_g1

0x51da,	// (0x00070999) vded_video_pane_g2

0xcc7c,	// (0x0007843b) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007afbf) vded_video_pane_g

0xd272,	// (0x00078a31) vded_slider_pane_g1

0xc9cf,	// (0x0007818e) vded_slider_pane_g2

0xd27b,	// (0x00078a3a) vded_slider_pane_g3

0xd284,	// (0x00078a43) vded_slider_pane_g4

0xd28d,	// (0x00078a4c) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007afc6) vded_slider_pane_g

0x4bbd,	// (0x0007037c) mup3_rocker_pane_ParamLimits

0x4bbd,	// (0x0007037c) mup3_rocker_pane

0x51e3,	// (0x000709a2) mup3_control_keys_pane_g1

0x51eb,	// (0x000709aa) mup3_control_keys_pane_g2

0x51f3,	// (0x000709b2) mup3_control_keys_pane_g3

0x51fb,	// (0x000709ba) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007afd1) mup3_control_keys_pane_g

0x0431,	// (0x0006bbf0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0431,	// (0x0006bbf0) popup_toolbar2_fixed_window_cp01

0x4bf1,	// (0x000703b0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bf1,	// (0x000703b0) popup_toolbar2_fixed_window_cp02

0xbbe4,	// (0x000773a3) popup_call2_audio_second_window_t4_ParamLimits

0xbbe4,	// (0x000773a3) popup_call2_audio_second_window_t4

0xc112,	// (0x000778d1) popup_call2_audio_first_window_t6_ParamLimits

0xc112,	// (0x000778d1) popup_call2_audio_first_window_t6

0xc3a8,	// (0x00077b67) popup_call2_audio_out_window_t6_ParamLimits

0xc3a8,	// (0x00077b67) popup_call2_audio_out_window_t6

0x94f7,	// (0x00074cb6) main_vitu_pane

0x520b,	// (0x000709ca) aid_size_cell_itu_ParamLimits

0x520b,	// (0x000709ca) aid_size_cell_itu

0xb2f7,	// (0x00076ab6) bg_popup_window_pane_cp08_ParamLimits

0xb2f7,	// (0x00076ab6) bg_popup_window_pane_cp08

0x5221,	// (0x000709e0) field_vitu_entry_pane_ParamLimits

0x5221,	// (0x000709e0) field_vitu_entry_pane

0x5238,	// (0x000709f7) grid_vitu_function_pane_ParamLimits

0x5238,	// (0x000709f7) grid_vitu_function_pane

0x5253,	// (0x00070a12) grid_vitu_itu_pane_ParamLimits

0x5253,	// (0x00070a12) grid_vitu_itu_pane

0x5271,	// (0x00070a30) cell_vitu_itu_pane_ParamLimits

0x5271,	// (0x00070a30) cell_vitu_itu_pane

0x5293,	// (0x00070a52) cell_vitu_function_pane_ParamLimits

0x5293,	// (0x00070a52) cell_vitu_function_pane

0xb2f7,	// (0x00076ab6) bg_popup_sub_pane_cp08_ParamLimits

0xb2f7,	// (0x00076ab6) bg_popup_sub_pane_cp08

0x52ac,	// (0x00070a6b) field_vitu_entry_pane_t1_ParamLimits

0x52ac,	// (0x00070a6b) field_vitu_entry_pane_t1

0xd2ae,	// (0x00078a6d) field_vitu_entry_pane_t2_ParamLimits

0xd2ae,	// (0x00078a6d) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007afdf) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007afdf) field_vitu_entry_pane_t

0xd2cb,	// (0x00078a8a) bg_button_pane_cp05_ParamLimits

0xd2cb,	// (0x00078a8a) bg_button_pane_cp05

0x52ca,	// (0x00070a89) cell_vitu_itu_pane_g1

0x52e2,	// (0x00070aa1) cell_vitu_itu_pane_t1_ParamLimits

0x52e2,	// (0x00070aa1) cell_vitu_itu_pane_t1

0x52f4,	// (0x00070ab3) cell_vitu_itu_pane_t2_ParamLimits

0x52f4,	// (0x00070ab3) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007afe4) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007afe4) cell_vitu_itu_pane_t

0xd2d9,	// (0x00078a98) bg_button_pane_cp07

0x5329,	// (0x00070ae8) cell_vitu_function_pane_g1

0x97ad,	// (0x00074f6c) main_calc_pane_g1

0x0258,	// (0x0006ba17) aid_visual_content_pane

0x94f7,	// (0x00074cb6) main_vradio_pane

0x5332,	// (0x00070af1) main_vradio_pane_g1_ParamLimits

0x5332,	// (0x00070af1) main_vradio_pane_g1

0xd2e3,	// (0x00078aa2) main_vradio_pane_g2_ParamLimits

0xd2e3,	// (0x00078aa2) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007afeb) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007afeb) main_vradio_pane_g

0x534b,	// (0x00070b0a) main_vradio_pane_t1_ParamLimits

0x534b,	// (0x00070b0a) main_vradio_pane_t1

0x5360,	// (0x00070b1f) main_vradio_pane_t2_ParamLimits

0x5360,	// (0x00070b1f) main_vradio_pane_t2

0xd2f0,	// (0x00078aaf) main_vradio_pane_t3_ParamLimits

0xd2f0,	// (0x00078aaf) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007aff0) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007aff0) main_vradio_pane_t

0x5375,	// (0x00070b34) vradio_rocker_control_pane_ParamLimits

0x5375,	// (0x00070b34) vradio_rocker_control_pane

0x5387,	// (0x00070b46) vradio_station_info_pane_ParamLimits

0x5387,	// (0x00070b46) vradio_station_info_pane

0xd304,	// (0x00078ac3) vradio_frequency_info_pane_ParamLimits

0xd304,	// (0x00078ac3) vradio_frequency_info_pane

0xcc7c,	// (0x0007843b) vradio_station_info_pane_g1

0xd313,	// (0x00078ad2) vradio_station_info_pane_t1_ParamLimits

0xd313,	// (0x00078ad2) vradio_station_info_pane_t1

0xd335,	// (0x00078af4) vradio_station_info_pane_t2_ParamLimits

0xd335,	// (0x00078af4) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007aff7) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007aff7) vradio_station_info_pane_t

0xd347,	// (0x00078b06) vradio_tuning_pane

0xd34f,	// (0x00078b0e) vradio_rocker_control_pane_g1

0xd357,	// (0x00078b16) vradio_rocker_control_pane_g2

0xd35f,	// (0x00078b1e) vradio_rocker_control_pane_g3

0xd367,	// (0x00078b26) vradio_rocker_control_pane_g4

0xd36f,	// (0x00078b2e) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007affc) vradio_rocker_control_pane_g

0x5399,	// (0x00070b58) vradio_frequency_info_pane_g1

0xd377,	// (0x00078b36) vradio_frequency_info_pane_t1_ParamLimits

0xd377,	// (0x00078b36) vradio_frequency_info_pane_t1

0x53a3,	// (0x00070b62) vradio_tuning_pane_g1

0x53ae,	// (0x00070b6d) vradio_tuning_pane_t1

0x94a7,	// (0x00074c66) area_side_right_pane_ParamLimits

0x94a7,	// (0x00074c66) area_side_right_pane

0xc82f,	// (0x00077fee) status_small_pane_g1

0xc837,	// (0x00077ff6) status_small_pane_g2

0xc840,	// (0x00077fff) status_small_pane_g3

0xc849,	// (0x00078008) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0007adb7) status_small_pane_g

0xc852,	// (0x00078011) status_small_pane_t1

0x94f7,	// (0x00074cb6) main_video3_pane

0xd38b,	// (0x00078b4a) cams_zoom_vslider_pane

0xd393,	// (0x00078b52) image3_wide_pane_ParamLimits

0xd393,	// (0x00078b52) image3_wide_pane

0xd3ad,	// (0x00078b6c) image3_wide_small_pane

0xd3b9,	// (0x00078b78) main_video3_pane_g1_ParamLimits

0xd3b9,	// (0x00078b78) main_video3_pane_g1

0xd3d5,	// (0x00078b94) main_video3_pane_g2_ParamLimits

0xd3d5,	// (0x00078b94) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007b007) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007b007) main_video3_pane_g

0xd3f1,	// (0x00078bb0) main_video3_pane_t1_ParamLimits

0xd3f1,	// (0x00078bb0) main_video3_pane_t1

0xd41c,	// (0x00078bdb) main_video3_pane_t2_ParamLimits

0xd41c,	// (0x00078bdb) main_video3_pane_t2

0xd447,	// (0x00078c06) main_video3_pane_t3_ParamLimits

0xd447,	// (0x00078c06) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007b00c) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007b00c) main_video3_pane_t

0xd474,	// (0x00078c33) cams_zoom_vslider_pane_g1

0xd47d,	// (0x00078c3c) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007b013) cams_zoom_vslider_pane_g

0xd485,	// (0x00078c44) small_slider_vertical_pane

0xcc7c,	// (0x0007843b) small_slider_vertical_pane_g1

0xcc7c,	// (0x0007843b) small_slider_vertical_pane_g2

0xd48d,	// (0x00078c4c) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007b018) small_slider_vertical_pane_g

0x94f7,	// (0x00074cb6) main_hwr_training_pane

0xd496,	// (0x00078c55) hwr_training_instruct_pane_ParamLimits

0xd496,	// (0x00078c55) hwr_training_instruct_pane

0x53bd,	// (0x00070b7c) hwr_training_navi_pane_ParamLimits

0x53bd,	// (0x00070b7c) hwr_training_navi_pane

0x53dc,	// (0x00070b9b) hwr_training_write_pane_ParamLimits

0x53dc,	// (0x00070b9b) hwr_training_write_pane

0x9471,	// (0x00074c30) bg_frame_shadow_pane

0xd4cd,	// (0x00078c8c) hwr_training_write_pane_g1

0xd4d5,	// (0x00078c94) hwr_training_write_pane_g2

0xd4dd,	// (0x00078c9c) hwr_training_write_pane_g3

0xd4e5,	// (0x00078ca4) hwr_training_write_pane_g4

0xd4ed,	// (0x00078cac) hwr_training_write_pane_g5

0xd4f5,	// (0x00078cb4) hwr_training_write_pane_g6

0xd4fd,	// (0x00078cbc) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007b01f) hwr_training_write_pane_g

0x9a39,	// (0x000751f8) hwr_training_navi_pane_g1_ParamLimits

0x9a39,	// (0x000751f8) hwr_training_navi_pane_g1

0x9a4b,	// (0x0007520a) hwr_training_navi_pane_g2_ParamLimits

0x9a4b,	// (0x0007520a) hwr_training_navi_pane_g2

0x9a5d,	// (0x0007521c) hwr_training_navi_pane_g3_ParamLimits

0x9a5d,	// (0x0007521c) hwr_training_navi_pane_g3

0x9a6d,	// (0x0007522c) hwr_training_navi_pane_g4_ParamLimits

0x9a6d,	// (0x0007522c) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007b02e) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007b02e) hwr_training_navi_pane_g

0x9a7a,	// (0x00075239) hwr_training_navi_pane_t1

0x5424,	// (0x00070be3) list_single_hwr_training_instruct_pane_ParamLimits

0x5424,	// (0x00070be3) list_single_hwr_training_instruct_pane

0xd505,	// (0x00078cc4) list_single_hwr_training_instruct_pane_t1

0xcbbc,	// (0x0007837b) bg_frame_shadow_pane_g1

0xd514,	// (0x00078cd3) bg_frame_shadow_pane_g2

0xd51c,	// (0x00078cdb) bg_frame_shadow_pane_g3

0xd524,	// (0x00078ce3) bg_frame_shadow_pane_g4

0xd52c,	// (0x00078ceb) bg_frame_shadow_pane_g5

0xd534,	// (0x00078cf3) bg_frame_shadow_pane_g6

0xd53c,	// (0x00078cfb) bg_frame_shadow_pane_g7

0xa8ea,	// (0x000760a9) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007b039) bg_frame_shadow_pane_g

0x94f7,	// (0x00074cb6) main_video_tele_dialer_pane

0x5439,	// (0x00070bf8) aid_size_cell_video_keypad_ParamLimits

0x5439,	// (0x00070bf8) aid_size_cell_video_keypad

0x5453,	// (0x00070c12) grid_video_dialer_keypad_pane_ParamLimits

0x5453,	// (0x00070c12) grid_video_dialer_keypad_pane

0x549f,	// (0x00070c5e) video_down_pane_cp_ParamLimits

0x549f,	// (0x00070c5e) video_down_pane_cp

0x54d1,	// (0x00070c90) cell_video_dialer_keypad_pane_ParamLimits

0x54d1,	// (0x00070c90) cell_video_dialer_keypad_pane

0xd544,	// (0x00078d03) bg_button_pane_cp08_ParamLimits

0xd544,	// (0x00078d03) bg_button_pane_cp08

0x54f3,	// (0x00070cb2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54f3,	// (0x00070cb2) cell_video_dialer_keypad_pane_g1

0x4ba7,	// (0x00070366) mup3_rocker2_pane_ParamLimits

0x4ba7,	// (0x00070366) mup3_rocker2_pane

0xcc7c,	// (0x0007843b) mup3_rocker2_pane_g1

0x36e4,	// (0x0006eea3) main_dialer2_pane

0x94f7,	// (0x00074cb6) main_mp4_pane

0x9a90,	// (0x0007524f) main_mp4_pane_g1_ParamLimits

0x9a90,	// (0x0007524f) main_mp4_pane_g1

0x9a90,	// (0x0007524f) main_mp4_pane_g2_ParamLimits

0x9a90,	// (0x0007524f) main_mp4_pane_g2

0x552a,	// (0x00070ce9) main_mp4_pane_g3_ParamLimits

0x552a,	// (0x00070ce9) main_mp4_pane_g3

0x9a9e,	// (0x0007525d) main_mp4_pane_g4_ParamLimits

0x9a9e,	// (0x0007525d) main_mp4_pane_g4

0x9ac6,	// (0x00075285) main_mp4_pane_g5_ParamLimits

0x9ac6,	// (0x00075285) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007b059) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007b059) main_mp4_pane_g

0x9b16,	// (0x000752d5) main_mp4_pane_t1_ParamLimits

0x9b16,	// (0x000752d5) main_mp4_pane_t1

0x9b72,	// (0x00075331) main_mp4_pane_t2_ParamLimits

0x9b72,	// (0x00075331) main_mp4_pane_t2

0xd550,	// (0x00078d0f) main_mp4_pane_t3_ParamLimits

0xd550,	// (0x00078d0f) main_mp4_pane_t3

0x9bc4,	// (0x00075383) main_mp4_pane_t4_ParamLimits

0x9bc4,	// (0x00075383) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007b066) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007b066) main_mp4_pane_t

0x9c08,	// (0x000753c7) mp4_progress_pane_ParamLimits

0x9c08,	// (0x000753c7) mp4_progress_pane

0x9c52,	// (0x00075411) mp4_rocker_pane_ParamLimits

0x9c52,	// (0x00075411) mp4_rocker_pane

0xd578,	// (0x00078d37) mp4_progress_pane_t1

0xd591,	// (0x00078d50) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007b06f) mp4_progress_pane_t

0xd5aa,	// (0x00078d69) mup_progress_pane_cp04

0xdbc0,	// (0x0007937f) mp4_rocker_pane_g1

0x5566,	// (0x00070d25) aid_cell_size_keypad2_ParamLimits

0x5566,	// (0x00070d25) aid_cell_size_keypad2

0x557c,	// (0x00070d3b) dialer2_ne_pane_ParamLimits

0x557c,	// (0x00070d3b) dialer2_ne_pane

0x5596,	// (0x00070d55) grid_dialer2_keypad_pane_ParamLimits

0x5596,	// (0x00070d55) grid_dialer2_keypad_pane

0xca61,	// (0x00078220) bg_popup_call_pane_cp07_ParamLimits

0xca61,	// (0x00078220) bg_popup_call_pane_cp07

0x55b2,	// (0x00070d71) dialer2_ne_pane_t1_ParamLimits

0x55b2,	// (0x00070d71) dialer2_ne_pane_t1

0x55ed,	// (0x00070dac) cell_dialer2_keypad_pane_ParamLimits

0x55ed,	// (0x00070dac) cell_dialer2_keypad_pane

0xd5c8,	// (0x00078d87) bg_button_pane_pane_cp04_ParamLimits

0xd5c8,	// (0x00078d87) bg_button_pane_pane_cp04

0x560f,	// (0x00070dce) cell_dialer2_keypad_pane_g1_ParamLimits

0x560f,	// (0x00070dce) cell_dialer2_keypad_pane_g1

0x142a,	// (0x0006cbe9) aid_placing_vt_set_content_ParamLimits

0x142a,	// (0x0006cbe9) aid_placing_vt_set_content

0x1452,	// (0x0006cc11) aid_placing_vt_set_title_ParamLimits

0x1452,	// (0x0006cc11) aid_placing_vt_set_title

0x94f7,	// (0x00074cb6) main_image3_pane

0x56d5,	// (0x00070e94) area_side_right_pane_cp01_ParamLimits

0x56d5,	// (0x00070e94) area_side_right_pane_cp01

0x9a90,	// (0x0007524f) main_image3_pane_g1_ParamLimits

0x9a90,	// (0x0007524f) main_image3_pane_g1

0x56ec,	// (0x00070eab) main_image3_pane_g2_ParamLimits

0x56ec,	// (0x00070eab) main_image3_pane_g2

0x5714,	// (0x00070ed3) main_image3_pane_g3_ParamLimits

0x5714,	// (0x00070ed3) main_image3_pane_g3

0x573e,	// (0x00070efd) main_image3_pane_g4_ParamLimits

0x573e,	// (0x00070efd) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007b07e) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007b07e) main_image3_pane_g

0x5768,	// (0x00070f27) main_image3_pane_t1_ParamLimits

0x5768,	// (0x00070f27) main_image3_pane_t1

0x57c0,	// (0x00070f7f) main_image3_pane_t2_ParamLimits

0x57c0,	// (0x00070f7f) main_image3_pane_t2

0x5812,	// (0x00070fd1) main_image3_pane_t3_ParamLimits

0x5812,	// (0x00070fd1) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007b087) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007b087) main_image3_pane_t

0xb2f7,	// (0x00076ab6) grid_sctrl_middle_pane_cp01_ParamLimits

0xb2f7,	// (0x00076ab6) grid_sctrl_middle_pane_cp01

0x589a,	// (0x00071059) cell_sctrl_middle_pane_cp01_ParamLimits

0x589a,	// (0x00071059) cell_sctrl_middle_pane_cp01

0x58b7,	// (0x00071076) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58b7,	// (0x00071076) cell_sctrl_middle_pane_cp01_g1

0x94f7,	// (0x00074cb6) main_call4_pane

0x58cd,	// (0x0007108c) aid_size_button_call4_ParamLimits

0x58cd,	// (0x0007108c) aid_size_button_call4

0x58fe,	// (0x000710bd) call4_windows_pane_ParamLimits

0x58fe,	// (0x000710bd) call4_windows_pane

0x591e,	// (0x000710dd) grid_call4_button_pane_ParamLimits

0x591e,	// (0x000710dd) grid_call4_button_pane

0xd5d4,	// (0x00078d93) call4_windows_conf_pane

0xd5eb,	// (0x00078daa) popup_call4_audio_first_window_ParamLimits

0xd5eb,	// (0x00078daa) popup_call4_audio_first_window

0xd637,	// (0x00078df6) popup_call4_audio_second_window_ParamLimits

0xd637,	// (0x00078df6) popup_call4_audio_second_window

0xd64b,	// (0x00078e0a) popup_call4_audio_wait_window_ParamLimits

0xd64b,	// (0x00078e0a) popup_call4_audio_wait_window

0x594b,	// (0x0007110a) cell_call4_button_pane_ParamLimits

0x594b,	// (0x0007110a) cell_call4_button_pane

0x5974,	// (0x00071133) bg_button_pane_cp09_ParamLimits

0x5974,	// (0x00071133) bg_button_pane_cp09

0x5980,	// (0x0007113f) cell_call4_button_pane_g1_ParamLimits

0x5980,	// (0x0007113f) cell_call4_button_pane_g1

0x59a6,	// (0x00071165) cell_call4_button_pane_t1_ParamLimits

0x59a6,	// (0x00071165) cell_call4_button_pane_t1

0xd693,	// (0x00078e52) popup_call4_audio_conf_window_ParamLimits

0xd693,	// (0x00078e52) popup_call4_audio_conf_window

0x4c07,	// (0x000703c6) mup3_progress_pane_t1_ParamLimits

0x4c26,	// (0x000703e5) mup3_progress_pane_t2_ParamLimits

0xcf83,	// (0x00078742) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0007af5b) mup3_progress_pane_t_ParamLimits

0xcfa0,	// (0x0007875f) mup_progress_pane_cp03_ParamLimits

0x5203,	// (0x000709c2) mup3_control_keys_pane_g4_copy1

0x9c36,	// (0x000753f5) mp4_rocker2_pane_ParamLimits

0x9c36,	// (0x000753f5) mp4_rocker2_pane

0xd6a7,	// (0x00078e66) mp4_rocker2_pane_g1

0xd6af,	// (0x00078e6e) mp4_rocker2_pane_g2

0x9ca4,	// (0x00075463) mp4_rocker2_pane_g3

0x9cac,	// (0x0007546b) mp4_rocker2_pane_g4

0x9cb4,	// (0x00075473) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007b090) mp4_rocker2_pane_g

0x94f7,	// (0x00074cb6) main_camera4_pane

0x94f7,	// (0x00074cb6) main_video4_pane

0x546d,	// (0x00070c2c) main_video_tele_dialer_pane_t1_ParamLimits

0x546d,	// (0x00070c2c) main_video_tele_dialer_pane_t1

0x5486,	// (0x00070c45) main_video_tele_dialer_pane_t2_ParamLimits

0x5486,	// (0x00070c45) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007b04a) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007b04a) main_video_tele_dialer_pane_t

0x59e4,	// (0x000711a3) cam4_autofocus_pane_ParamLimits

0x59e4,	// (0x000711a3) cam4_autofocus_pane

0x59fa,	// (0x000711b9) cam4_image_uncrop_pane_ParamLimits

0x59fa,	// (0x000711b9) cam4_image_uncrop_pane

0x5a14,	// (0x000711d3) cam4_indicators_pane_ParamLimits

0x5a14,	// (0x000711d3) cam4_indicators_pane

0x5a3f,	// (0x000711fe) main_camera4_pane_g1_ParamLimits

0x5a3f,	// (0x000711fe) main_camera4_pane_g1

0x5a51,	// (0x00071210) main_camera4_pane_g2_ParamLimits

0x5a51,	// (0x00071210) main_camera4_pane_g2

0x5a64,	// (0x00071223) main_camera4_pane_g3_ParamLimits

0x5a64,	// (0x00071223) main_camera4_pane_g3

0x5a77,	// (0x00071236) main_camera4_pane_g4_ParamLimits

0x5a77,	// (0x00071236) main_camera4_pane_g4

0x5a8a,	// (0x00071249) main_camera4_pane_g5_ParamLimits

0x5a8a,	// (0x00071249) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007b09b) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007b09b) main_camera4_pane_g

0x5aae,	// (0x0007126d) main_camera4_pane_t1_ParamLimits

0x5aae,	// (0x0007126d) main_camera4_pane_t1

0x9cd8,	// (0x00075497) bg_tb_trans_pane_cp06

0x9cee,	// (0x000754ad) cam4_indicators_pane_g1

0x9cff,	// (0x000754be) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007b0b6) cam4_indicators_pane_g

0x9d1d,	// (0x000754dc) cam4_indicators_pane_t1

0x5b12,	// (0x000712d1) main_video4_pane_g1_ParamLimits

0x5b12,	// (0x000712d1) main_video4_pane_g1

0x5b21,	// (0x000712e0) main_video4_pane_g2_ParamLimits

0x5b21,	// (0x000712e0) main_video4_pane_g2

0x5b30,	// (0x000712ef) main_video4_pane_g3_ParamLimits

0x5b30,	// (0x000712ef) main_video4_pane_g3

0x5b3f,	// (0x000712fe) main_video4_pane_g4_ParamLimits

0x5b3f,	// (0x000712fe) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007b0bd) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007b0bd) main_video4_pane_g

0x5b5d,	// (0x0007131c) vid4_indicators_pane_ParamLimits

0x5b5d,	// (0x0007131c) vid4_indicators_pane

0x5b8b,	// (0x0007134a) video4_image_uncrop_cif_pane_ParamLimits

0x5b8b,	// (0x0007134a) video4_image_uncrop_cif_pane

0x5ba5,	// (0x00071364) video4_image_uncrop_nhd_pane_ParamLimits

0x5ba5,	// (0x00071364) video4_image_uncrop_nhd_pane

0x59fa,	// (0x000711b9) video4_image_uncrop_vga_pane_ParamLimits

0x59fa,	// (0x000711b9) video4_image_uncrop_vga_pane

0x94e9,	// (0x00074ca8) bg_tb_trans_pane_cp07

0x9d49,	// (0x00075508) vid4_indicators_pane_g1

0x9d5d,	// (0x0007551c) vid4_indicators_pane_g2

0x9d71,	// (0x00075530) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007b0c8) vid4_indicators_pane_g

0x9da0,	// (0x0007555f) vid4_indicators_pane_t1

0x5bb9,	// (0x00071378) cam4_autofocus_pane_g1

0x5bc1,	// (0x00071380) cam4_autofocus_pane_g2

0x5bc9,	// (0x00071388) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007b0d3) cam4_autofocus_pane_g

0x5bd1,	// (0x00071390) cam4_autofocus_pane_g3_copy1

0x54b5,	// (0x00070c74) video_down_pane_cp_t1

0x54c3,	// (0x00070c82) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007b04f) video_down_pane_cp_t

0x94e9,	// (0x00074ca8) popup_vitu2_window_ParamLimits

0x94e9,	// (0x00074ca8) popup_vitu2_window

0x5bd9,	// (0x00071398) aid_size_cell2_itu2_ParamLimits

0x5bd9,	// (0x00071398) aid_size_cell2_itu2

0x5bff,	// (0x000713be) aid_size_cell_itu2_ParamLimits

0x5bff,	// (0x000713be) aid_size_cell_itu2

0x5c5b,	// (0x0007141a) bg_popup_window_pane_cp09_ParamLimits

0x5c5b,	// (0x0007141a) bg_popup_window_pane_cp09

0x5c69,	// (0x00071428) field_vitu2_entry_pane_ParamLimits

0x5c69,	// (0x00071428) field_vitu2_entry_pane

0x5c8f,	// (0x0007144e) grid_vitu2_function_pane_ParamLimits

0x5c8f,	// (0x0007144e) grid_vitu2_function_pane

0x5ce0,	// (0x0007149f) grid_vitu2_itu_pane_ParamLimits

0x5ce0,	// (0x0007149f) grid_vitu2_itu_pane

0x5d78,	// (0x00071537) cell_vitu2_itu_pane_ParamLimits

0x5d78,	// (0x00071537) cell_vitu2_itu_pane

0x5da4,	// (0x00071563) cell_vitu2_function_pane_ParamLimits

0x5da4,	// (0x00071563) cell_vitu2_function_pane

0xd6b7,	// (0x00078e76) bg_popup_call_pane_cp08_ParamLimits

0xd6b7,	// (0x00078e76) bg_popup_call_pane_cp08

0xd6ce,	// (0x00078e8d) field_vitu2_entry_pane_g1

0xd6da,	// (0x00078e99) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007b0da) field_vitu2_entry_pane_g

0x5de3,	// (0x000715a2) field_vitu2_entry_pane_t1_ParamLimits

0x5de3,	// (0x000715a2) field_vitu2_entry_pane_t1

0xa47e,	// (0x00075c3d) field_vitu2_entry_pane_t2_ParamLimits

0xa47e,	// (0x00075c3d) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007b0e1) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007b0e1) field_vitu2_entry_pane_t

0x5e13,	// (0x000715d2) bg_button_pane_cp010_ParamLimits

0x5e13,	// (0x000715d2) bg_button_pane_cp010

0x9db7,	// (0x00075576) cell_vitu2_itu_pane_g1

0x5e2f,	// (0x000715ee) cell_vitu2_itu_pane_t1_ParamLimits

0x5e2f,	// (0x000715ee) cell_vitu2_itu_pane_t1

0x0130,	// (0x0006b8ef) cell_vitu2_itu_pane_t2_ParamLimits

0x0130,	// (0x0006b8ef) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007b0eb) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007b0eb) cell_vitu2_itu_pane_t

0x94e9,	// (0x00074ca8) bg_button_pane_cp011

0x5e8d,	// (0x0007164c) cell_vitu2_function_pane_g1

0x94f7,	// (0x00074cb6) main_myfav_hc_pane

0x5862,	// (0x00071021) popup_image3_note_pane_ParamLimits

0x5862,	// (0x00071021) popup_image3_note_pane

0x587e,	// (0x0007103d) popup_image3_tool_bar_pane_ParamLimits

0x587e,	// (0x0007103d) popup_image3_tool_bar_pane

0x01be,	// (0x0006b97d) cell_vitu2_itu_pane_t3_ParamLimits

0x01be,	// (0x0006b97d) cell_vitu2_itu_pane_t3

0x9471,	// (0x00074c30) bg_popup_trans_pane

0xd6fc,	// (0x00078ebb) grid_image3_tool_bar_pane

0xd706,	// (0x00078ec5) bg_popup_trans_pane_g1

0xac4f,	// (0x0007640e) bg_popup_trans_pane_g2

0xd70e,	// (0x00078ecd) bg_popup_trans_pane_g3

0xd716,	// (0x00078ed5) bg_popup_trans_pane_g4

0xd71e,	// (0x00078edd) bg_popup_trans_pane_g5

0xd726,	// (0x00078ee5) bg_popup_trans_pane_g6

0xd72e,	// (0x00078eed) bg_popup_trans_pane_g7

0xd736,	// (0x00078ef5) bg_popup_trans_pane_g8

0xac2f,	// (0x000763ee) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007b0f2) bg_popup_trans_pane_g

0xd73e,	// (0x00078efd) cell_image3_tool_bar_pane_ParamLimits

0xd73e,	// (0x00078efd) cell_image3_tool_bar_pane

0xcc7c,	// (0x0007843b) cell_image3_tool_bar_pane_g1

0x9471,	// (0x00074c30) bg_popup_trans_pane_cp1

0xd752,	// (0x00078f11) popup_image3_note_pane_t1

0xd760,	// (0x00078f1f) popup_image3_note_pane_t2

0xd76e,	// (0x00078f2d) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007b105) popup_image3_note_pane_t

0xd77c,	// (0x00078f3b) popup_image3_note_pane_t3_copy1

0x5ea1,	// (0x00071660) bg_myfav_hc_instruction_pane_ParamLimits

0x5ea1,	// (0x00071660) bg_myfav_hc_instruction_pane

0x5eb5,	// (0x00071674) cell_myfav_contact_pane_ParamLimits

0x5eb5,	// (0x00071674) cell_myfav_contact_pane

0x5ed3,	// (0x00071692) cell_myfav_contact_pane_cp1_ParamLimits

0x5ed3,	// (0x00071692) cell_myfav_contact_pane_cp1

0x5eeb,	// (0x000716aa) cell_myfav_contact_pane_cp2_ParamLimits

0x5eeb,	// (0x000716aa) cell_myfav_contact_pane_cp2

0x5f03,	// (0x000716c2) cell_myfav_contact_pane_cp3_ParamLimits

0x5f03,	// (0x000716c2) cell_myfav_contact_pane_cp3

0x5f1a,	// (0x000716d9) cell_myfav_contact_pane_cp4_ParamLimits

0x5f1a,	// (0x000716d9) cell_myfav_contact_pane_cp4

0x5f32,	// (0x000716f1) cell_myfav_contact_pane_cp5_ParamLimits

0x5f32,	// (0x000716f1) cell_myfav_contact_pane_cp5

0x5f46,	// (0x00071705) cell_myfav_contact_pane_cp6_ParamLimits

0x5f46,	// (0x00071705) cell_myfav_contact_pane_cp6

0x5f5c,	// (0x0007171b) cell_myfav_contact_pane_cp7_ParamLimits

0x5f5c,	// (0x0007171b) cell_myfav_contact_pane_cp7

0xd78a,	// (0x00078f49) listscroll_gen_pane_cp05

0x5f76,	// (0x00071735) main_myfav_hc_pane_g1_ParamLimits

0x5f76,	// (0x00071735) main_myfav_hc_pane_g1

0x5f90,	// (0x0007174f) main_myfav_hc_pane_g2_ParamLimits

0x5f90,	// (0x0007174f) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007b10c) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007b10c) main_myfav_hc_pane_g

0x5fc2,	// (0x00071781) main_myfav_hc_pane_t1_ParamLimits

0x5fc2,	// (0x00071781) main_myfav_hc_pane_t1

0xd793,	// (0x00078f52) main_myfav_hc_pane_t2_ParamLimits

0xd793,	// (0x00078f52) main_myfav_hc_pane_t2

0xd7a5,	// (0x00078f64) main_myfav_hc_pane_t3_ParamLimits

0xd7a5,	// (0x00078f64) main_myfav_hc_pane_t3

0x5fd9,	// (0x00071798) main_myfav_hc_pane_t4_ParamLimits

0x5fd9,	// (0x00071798) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007b113) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007b113) main_myfav_hc_pane_t

0xcc7c,	// (0x0007843b) bg_myfav_hc_instruction_pane_g1

0xd7b7,	// (0x00078f76) cell_myfav_contact_pane_g1_ParamLimits

0xd7b7,	// (0x00078f76) cell_myfav_contact_pane_g1

0xd7b7,	// (0x00078f76) cell_myfav_contact_pane_g2_ParamLimits

0xd7b7,	// (0x00078f76) cell_myfav_contact_pane_g2

0xd7c3,	// (0x00078f82) cell_myfav_contact_pane_g3_ParamLimits

0xd7c3,	// (0x00078f82) cell_myfav_contact_pane_g3

0xcf6d,	// (0x0007872c) cell_myfav_contact_pane_g4_ParamLimits

0xcf6d,	// (0x0007872c) cell_myfav_contact_pane_g4

0xd7d0,	// (0x00078f8f) cell_myfav_contact_pane_g5_ParamLimits

0xd7d0,	// (0x00078f8f) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007b11e) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007b11e) cell_myfav_contact_pane_g

0x5faa,	// (0x00071769) main_myfav_hc_pane_g3_ParamLimits

0x5faa,	// (0x00071769) main_myfav_hc_pane_g3

0x0393,	// (0x0006bb52) popup_adpt_find_window

0x6001,	// (0x000717c0) afind_page_pane_ParamLimits

0x6001,	// (0x000717c0) afind_page_pane

0x6016,	// (0x000717d5) aid_size_cell_afind_ParamLimits

0x6016,	// (0x000717d5) aid_size_cell_afind

0x6034,	// (0x000717f3) bg_popup_sub_pane_cp09_ParamLimits

0x6034,	// (0x000717f3) bg_popup_sub_pane_cp09

0x6041,	// (0x00071800) find_pane_cp01_ParamLimits

0x6041,	// (0x00071800) find_pane_cp01

0xd7dc,	// (0x00078f9b) grid_afind_control_pane_ParamLimits

0xd7dc,	// (0x00078f9b) grid_afind_control_pane

0x604e,	// (0x0007180d) grid_afind_pane_ParamLimits

0x604e,	// (0x0007180d) grid_afind_pane

0x6070,	// (0x0007182f) cell_afind_pane_ParamLimits

0x6070,	// (0x0007182f) cell_afind_pane

0xcc7c,	// (0x0007843b) afind_page_pane_g1

0x60d7,	// (0x00071896) afind_page_pane_g2

0x60e0,	// (0x0007189f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007b129) afind_page_pane_g

0x60e9,	// (0x000718a8) afind_page_pane_t1

0xd7f0,	// (0x00078faf) cell_afind_grid_control_pane_ParamLimits

0xd7f0,	// (0x00078faf) cell_afind_grid_control_pane

0xd5c8,	// (0x00078d87) bg_button_pane_cp69_ParamLimits

0xd5c8,	// (0x00078d87) bg_button_pane_cp69

0x6109,	// (0x000718c8) cell_afind_pane_g1_ParamLimits

0x6109,	// (0x000718c8) cell_afind_pane_g1

0x6116,	// (0x000718d5) cell_afind_pane_t1_ParamLimits

0x6116,	// (0x000718d5) cell_afind_pane_t1

0xaa48,	// (0x00076207) bg_button_pane_cp72

0xd7ff,	// (0x00078fbe) cell_afind_grid_control_pane_g1

0x3192,	// (0x0006e951) aid_image_placing_area_ParamLimits

0x3192,	// (0x0006e951) aid_image_placing_area

0xd296,	// (0x00078a55) field_vitu_entry_pane_g1_ParamLimits

0xd296,	// (0x00078a55) field_vitu_entry_pane_g1

0xd2a2,	// (0x00078a61) field_vitu_entry_pane_g2_ParamLimits

0xd2a2,	// (0x00078a61) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007afda) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007afda) field_vitu_entry_pane_g

0x52ca,	// (0x00070a89) cell_vitu_itu_pane_g1_ParamLimits

0x530c,	// (0x00070acb) cell_vitu_itu_pane_t3_ParamLimits

0x530c,	// (0x00070acb) cell_vitu_itu_pane_t3

0xd578,	// (0x00078d37) mp4_progress_pane_t1_ParamLimits

0xd591,	// (0x00078d50) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007b06f) mp4_progress_pane_t_ParamLimits

0xd5aa,	// (0x00078d69) mup_progress_pane_cp04_ParamLimits

0x5fed,	// (0x000717ac) main_myfav_hc_pane_t5_ParamLimits

0x5fed,	// (0x000717ac) main_myfav_hc_pane_t5

0x9497,	// (0x00074c56) aid_zoom_text_primary

0x0393,	// (0x0006bb52) popup_adpt_find_window_ParamLimits

0x94e9,	// (0x00074ca8) main_cam_set_pane

0x5a2b,	// (0x000711ea) cam4_zoom_pane_ParamLimits

0x5a2b,	// (0x000711ea) cam4_zoom_pane

0x6128,	// (0x000718e7) main_cam_set_pane_g1_ParamLimits

0x6128,	// (0x000718e7) main_cam_set_pane_g1

0x6136,	// (0x000718f5) main_cam_set_pane_g2_ParamLimits

0x6136,	// (0x000718f5) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007b130) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007b130) main_cam_set_pane_g

0x6157,	// (0x00071916) main_cam_set_pane_t1_ParamLimits

0x6157,	// (0x00071916) main_cam_set_pane_t1

0x6172,	// (0x00071931) main_cset_listscroll_pane_ParamLimits

0x6172,	// (0x00071931) main_cset_listscroll_pane

0x6192,	// (0x00071951) main_cset_slider_pane_ParamLimits

0x6192,	// (0x00071951) main_cset_slider_pane

0xd810,	// (0x00078fcf) main_cset_list_pane_ParamLimits

0xd810,	// (0x00078fcf) main_cset_list_pane

0xd820,	// (0x00078fdf) scroll_pane_cp028

0x61b8,	// (0x00071977) aid_area_touch_slider

0x61d4,	// (0x00071993) cset_slider_pane

0x61fe,	// (0x000719bd) main_cset_slider_pane_g1

0x6213,	// (0x000719d2) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007b135) main_cset_slider_pane_g

0xd859,	// (0x00079018) main_cset_slider_pane_t1

0x62cf,	// (0x00071a8e) main_cset_slider_pane_t2

0x62e9,	// (0x00071aa8) main_cset_slider_pane_t3

0x6303,	// (0x00071ac2) main_cset_slider_pane_t4

0x631d,	// (0x00071adc) main_cset_slider_pane_t5

0x6337,	// (0x00071af6) main_cset_slider_pane_t6

0x634c,	// (0x00071b0b) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007b15a) main_cset_slider_pane_t

0x6450,	// (0x00071c0f) cset_list_set_pane_ParamLimits

0x6450,	// (0x00071c0f) cset_list_set_pane

0x6462,	// (0x00071c21) aid_position_infowindow_above

0x646a,	// (0x00071c29) aid_position_infowindow_below

0xa49b,	// (0x00075c5a) cset_list_set_pane_g1_ParamLimits

0xa49b,	// (0x00075c5a) cset_list_set_pane_g1

0xa4a7,	// (0x00075c66) cset_list_set_pane_g3_ParamLimits

0xa4a7,	// (0x00075c66) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007b179) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007b179) cset_list_set_pane_g

0xa4b6,	// (0x00075c75) cset_list_set_pane_t1_ParamLimits

0xa4b6,	// (0x00075c75) cset_list_set_pane_t1

0xb2f7,	// (0x00076ab6) list_highlight_pane_cp021_ParamLimits

0xb2f7,	// (0x00076ab6) list_highlight_pane_cp021

0xb5a6,	// (0x00076d65) cset_slider_pane_g1

0xb5b8,	// (0x00076d77) cset_slider_pane_g2

0xb5af,	// (0x00076d6e) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007b17e) cset_slider_pane_g

0x9dc9,	// (0x00075588) aid_area_touch_cam4_zoom

0x9dd1,	// (0x00075590) cam4_zoom_cont_pane

0x9dd9,	// (0x00075598) cam4_zoom_pane_g1

0x9de1,	// (0x000755a0) cam4_zoom_pane_g2

0x6472,	// (0x00071c31) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007b185) cam4_zoom_pane_g

0x9de9,	// (0x000755a8) cam4_zoom_cont_pane_g1

0x9df2,	// (0x000755b1) cam4_zoom_cont_pane_g2

0x9dfb,	// (0x000755ba) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007b18c) cam4_zoom_cont_pane_g

0x58eb,	// (0x000710aa) call4_image_pane_ParamLimits

0x58eb,	// (0x000710aa) call4_image_pane

0xd5d4,	// (0x00078d93) call4_windows_conf_pane_ParamLimits

0xd615,	// (0x00078dd4) popup_call4_audio_in_window_ParamLimits

0xd615,	// (0x00078dd4) popup_call4_audio_in_window

0x9471,	// (0x00074c30) bg_popup_call2_act_pane_cp02

0xd68b,	// (0x00078e4a) call4_list_conf_pane

0xcc7c,	// (0x0007843b) call4_image_pane_g1

0xcc7c,	// (0x0007843b) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007ae9b) call4_image_pane_g

0xd8f9,	// (0x000790b8) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8f9,	// (0x000790b8) list_single_graphic_popup_conf4_pane

0x9471,	// (0x00074c30) list_highlight_pane_cp022

0xd90c,	// (0x000790cb) list_single_graphic_popup_conf4_pane_g1

0xb169,	// (0x00076928) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007b193) list_single_graphic_popup_conf4_pane_g

0xd914,	// (0x000790d3) list_single_graphic_popup_conf4_pane_t1

0x1576,	// (0x0006cd35) popup_vtel_slider_window_ParamLimits

0x1576,	// (0x0006cd35) popup_vtel_slider_window

0xd5b6,	// (0x00078d75) dialer2_ne_pane_t2_ParamLimits

0xd5b6,	// (0x00078d75) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007b074) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007b074) dialer2_ne_pane_t

0xca61,	// (0x00078220) bg_popup_sub_pane_cp010_ParamLimits

0xca61,	// (0x00078220) bg_popup_sub_pane_cp010

0x647a,	// (0x00071c39) popup_vtel_slider_window_g1_ParamLimits

0x647a,	// (0x00071c39) popup_vtel_slider_window_g1

0x648d,	// (0x00071c4c) popup_vtel_slider_window_g2_ParamLimits

0x648d,	// (0x00071c4c) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007b198) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007b198) popup_vtel_slider_window_g

0x64e3,	// (0x00071ca2) vtel_slider_pane_ParamLimits

0x64e3,	// (0x00071ca2) vtel_slider_pane

0x6505,	// (0x00071cc4) vtel_slider_pane_g1_ParamLimits

0x6505,	// (0x00071cc4) vtel_slider_pane_g1

0x6519,	// (0x00071cd8) vtel_slider_pane_g2_ParamLimits

0x6519,	// (0x00071cd8) vtel_slider_pane_g2

0x6531,	// (0x00071cf0) vtel_slider_pane_g3_ParamLimits

0x6531,	// (0x00071cf0) vtel_slider_pane_g3

0x6505,	// (0x00071cc4) vtel_slider_pane_g4_ParamLimits

0x6505,	// (0x00071cc4) vtel_slider_pane_g4

0x6547,	// (0x00071d06) vtel_slider_pane_g5_ParamLimits

0x6547,	// (0x00071d06) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007b1a1) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007b1a1) vtel_slider_pane_g

0x94e9,	// (0x00074ca8) main_gallery2_pane

0x5c2b,	// (0x000713ea) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c2b,	// (0x000713ea) aid_size_row_itut2_dropdow_list

0x5cb7,	// (0x00071476) grid_vitu2_function_top_pane_ParamLimits

0x5cb7,	// (0x00071476) grid_vitu2_function_top_pane

0x5d21,	// (0x000714e0) popup_vitu2_dropdown_list_window_ParamLimits

0x5d21,	// (0x000714e0) popup_vitu2_dropdown_list_window

0x5d4a,	// (0x00071509) popup_vitu2_match_list_window

0x656b,	// (0x00071d2a) cell_vitu2_function_top_pane_ParamLimits

0x656b,	// (0x00071d2a) cell_vitu2_function_top_pane

0x6583,	// (0x00071d42) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6583,	// (0x00071d42) cell_vitu2_function_top_pane_cp01

0x659f,	// (0x00071d5e) cell_vitu2_function_top_wide_pane_ParamLimits

0x659f,	// (0x00071d5e) cell_vitu2_function_top_wide_pane

0x94e9,	// (0x00074ca8) bg_button_pane_cp012

0x65bb,	// (0x00071d7a) cell_vitu2_function_top_pane_g1

0x9e04,	// (0x000755c3) bg_button_pane_cp013_ParamLimits

0x9e04,	// (0x000755c3) bg_button_pane_cp013

0x65cf,	// (0x00071d8e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65cf,	// (0x00071d8e) cell_vitu2_function_top_wide_pane_g1

0x94e9,	// (0x00074ca8) bg_popup_sub_pane_cp20

0x65e7,	// (0x00071da6) list_vitu2_match_list_pane

0xd706,	// (0x00078ec5) bg_popup_sub_pane_cp20_g1

0xd70e,	// (0x00078ecd) bg_popup_sub_pane_cp20_g2

0xac4f,	// (0x0007640e) bg_popup_sub_pane_cp20_g3

0xd716,	// (0x00078ed5) bg_popup_sub_pane_cp20_g4

0xac2f,	// (0x000763ee) bg_popup_sub_pane_cp20_g5

0xd92a,	// (0x000790e9) bg_popup_sub_pane_cp20_g6

0xd726,	// (0x00078ee5) bg_popup_sub_pane_cp20_g7

0xd72e,	// (0x00078eed) bg_popup_sub_pane_cp20_g8

0xd736,	// (0x00078ef5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007b1ac) bg_popup_sub_pane_cp20_g

0x9e20,	// (0x000755df) list_vitu2_match_list_item_pane_ParamLimits

0x9e20,	// (0x000755df) list_vitu2_match_list_item_pane

0x9e32,	// (0x000755f1) list_vitu2_match_list_item_pane_t1

0x94f7,	// (0x00074cb6) bg_popup_sub_pane_cp21

0x9e40,	// (0x000755ff) grid_vitu2_dropdown_list_pane

0x664f,	// (0x00071e0e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x664f,	// (0x00071e0e) cell_vitu2_dropdown_list_char_pane

0x6670,	// (0x00071e2f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6670,	// (0x00071e2f) cell_vitu2_dropdown_list_ctrl_pane

0xd932,	// (0x000790f1) cell_vitu2_dropdown_list_char_pane_g1

0xd93b,	// (0x000790fa) cell_vitu2_dropdown_list_char_pane_g2

0xd944,	// (0x00079103) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007b1c9) cell_vitu2_dropdown_list_char_pane_g

0x669c,	// (0x00071e5b) cell_vitu2_dropdown_list_char_pane_t1

0x66aa,	// (0x00071e69) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66aa,	// (0x00071e69) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66b7,	// (0x00071e76) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66b7,	// (0x00071e76) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66c4,	// (0x00071e83) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66c4,	// (0x00071e83) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66d1,	// (0x00071e90) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66d1,	// (0x00071e90) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9cd8,	// (0x00075497) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9cd8,	// (0x00075497) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007b1d0) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007b1d0) cell_vitu2_dropdown_list_ctrl_pane_g

0x66ed,	// (0x00071eac) aid_size_cell_gallery2_ParamLimits

0x66ed,	// (0x00071eac) aid_size_cell_gallery2

0x670b,	// (0x00071eca) grid_gallery2_pane_ParamLimits

0x670b,	// (0x00071eca) grid_gallery2_pane

0x6725,	// (0x00071ee4) scroll_pane_cp029_ParamLimits

0x6725,	// (0x00071ee4) scroll_pane_cp029

0x6731,	// (0x00071ef0) cell_gallery2_pane_ParamLimits

0x6731,	// (0x00071ef0) cell_gallery2_pane

0xd94d,	// (0x0007910c) cell_gallery2_pane_g2

0x678c,	// (0x00071f4b) cell_gallery2_pane_g3

0xd955,	// (0x00079114) cell_gallery2_pane_g4

0xd95d,	// (0x0007911c) cell_gallery2_pane_g5

0xa9f6,	// (0x000761b5) grid_highlight_pane_cp10

0x5d4a,	// (0x00071509) popup_vitu2_match_list_window_ParamLimits

0x5d61,	// (0x00071520) popup_vitu2_query_window_ParamLimits

0x5d61,	// (0x00071520) popup_vitu2_query_window

0x94f7,	// (0x00074cb6) bg_vitu2_candi_button_pane

0xd932,	// (0x000790f1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd93b,	// (0x000790fa) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd944,	// (0x00079103) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6794,	// (0x00071f53) bg_button_pane_cp015

0x67a6,	// (0x00071f65) bg_button_pane_cp016

0x67b9,	// (0x00071f78) bg_button_pane_cp017

0xc874,	// (0x00078033) bg_popup_sub_pane_cp22

0xd965,	// (0x00079124) popup_vitu2_query_window_g1

0x67fe,	// (0x00071fbd) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007b1db) popup_vitu2_query_window_g

0x681d,	// (0x00071fdc) popup_vitu2_query_window_t1_ParamLimits

0x681d,	// (0x00071fdc) popup_vitu2_query_window_t1

0x6852,	// (0x00072011) popup_vitu2_query_window_t2_ParamLimits

0x6852,	// (0x00072011) popup_vitu2_query_window_t2

0x6864,	// (0x00072023) popup_vitu2_query_window_t3_ParamLimits

0x6864,	// (0x00072023) popup_vitu2_query_window_t3

0x688c,	// (0x0007204b) popup_vitu2_query_window_t4_ParamLimits

0x688c,	// (0x0007204b) popup_vitu2_query_window_t4

0x68ad,	// (0x0007206c) popup_vitu2_query_window_t5_ParamLimits

0x68ad,	// (0x0007206c) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007b1e2) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007b1e2) popup_vitu2_query_window_t

0xd808,	// (0x00078fc7) main_cset_text_pane

0x61b8,	// (0x00071977) aid_area_touch_slider_ParamLimits

0x61d4,	// (0x00071993) cset_slider_pane_ParamLimits

0x61fe,	// (0x000719bd) main_cset_slider_pane_g1_ParamLimits

0x6213,	// (0x000719d2) main_cset_slider_pane_g2_ParamLimits

0xd829,	// (0x00078fe8) main_cset_slider_pane_g3_ParamLimits

0xd829,	// (0x00078fe8) main_cset_slider_pane_g3

0x6228,	// (0x000719e7) main_cset_slider_pane_g4_ParamLimits

0x6228,	// (0x000719e7) main_cset_slider_pane_g4

0x6237,	// (0x000719f6) main_cset_slider_pane_g5_ParamLimits

0x6237,	// (0x000719f6) main_cset_slider_pane_g5

0x6243,	// (0x00071a02) main_cset_slider_pane_g6_ParamLimits

0x6243,	// (0x00071a02) main_cset_slider_pane_g6

0xf976,	// (0x0007b135) main_cset_slider_pane_g_ParamLimits

0xd859,	// (0x00079018) main_cset_slider_pane_t1_ParamLimits

0x62cf,	// (0x00071a8e) main_cset_slider_pane_t2_ParamLimits

0x62e9,	// (0x00071aa8) main_cset_slider_pane_t3_ParamLimits

0x6303,	// (0x00071ac2) main_cset_slider_pane_t4_ParamLimits

0x631d,	// (0x00071adc) main_cset_slider_pane_t5_ParamLimits

0x6337,	// (0x00071af6) main_cset_slider_pane_t6_ParamLimits

0x634c,	// (0x00071b0b) main_cset_slider_pane_t7_ParamLimits

0x6376,	// (0x00071b35) main_cset_slider_pane_t8_ParamLimits

0x6376,	// (0x00071b35) main_cset_slider_pane_t8

0x639e,	// (0x00071b5d) main_cset_slider_pane_t9_ParamLimits

0x639e,	// (0x00071b5d) main_cset_slider_pane_t9

0x63c6,	// (0x00071b85) main_cset_slider_pane_t10_ParamLimits

0x63c6,	// (0x00071b85) main_cset_slider_pane_t10

0x63ee,	// (0x00071bad) main_cset_slider_pane_t11_ParamLimits

0x63ee,	// (0x00071bad) main_cset_slider_pane_t11

0x6416,	// (0x00071bd5) main_cset_slider_pane_t12_ParamLimits

0x6416,	// (0x00071bd5) main_cset_slider_pane_t12

0x6433,	// (0x00071bf2) main_cset_slider_pane_t13_ParamLimits

0x6433,	// (0x00071bf2) main_cset_slider_pane_t13

0xf99b,	// (0x0007b15a) main_cset_slider_pane_t_ParamLimits

0x9471,	// (0x00074c30) bg_popup_sub_pane_cp011

0xd971,	// (0x00079130) main_cset_text_pane_g1

0xd979,	// (0x00079138) main_cset_text_pane_t1

0xd987,	// (0x00079146) main_cset_text_pane_t2

0xd995,	// (0x00079154) main_cset_text_pane_t3

0xd9a3,	// (0x00079162) main_cset_text_pane_t4

0xd9b1,	// (0x00079170) main_cset_text_pane_t5

0xd9bf,	// (0x0007917e) main_cset_text_pane_t6

0xd9cd,	// (0x0007918c) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007b1f1) main_cset_text_pane_t

0x94f7,	// (0x00074cb6) main_cam4_burst_pane

0x94f7,	// (0x00074cb6) main_cam5_pane

0x60f7,	// (0x000718b6) bg_button_pane_cp019

0x6100,	// (0x000718bf) bg_button_pane_cp020

0xd835,	// (0x00078ff4) main_cset_slider_pane_g7_ParamLimits

0xd835,	// (0x00078ff4) main_cset_slider_pane_g7

0xd841,	// (0x00079000) main_cset_slider_pane_g8_ParamLimits

0xd841,	// (0x00079000) main_cset_slider_pane_g8

0x6257,	// (0x00071a16) main_cset_slider_pane_g9_ParamLimits

0x6257,	// (0x00071a16) main_cset_slider_pane_g9

0x6263,	// (0x00071a22) main_cset_slider_pane_g10_ParamLimits

0x6263,	// (0x00071a22) main_cset_slider_pane_g10

0x626f,	// (0x00071a2e) main_cset_slider_pane_g11_ParamLimits

0x626f,	// (0x00071a2e) main_cset_slider_pane_g11

0x627b,	// (0x00071a3a) main_cset_slider_pane_g12_ParamLimits

0x627b,	// (0x00071a3a) main_cset_slider_pane_g12

0x6287,	// (0x00071a46) main_cset_slider_pane_g13_ParamLimits

0x6287,	// (0x00071a46) main_cset_slider_pane_g13

0x6293,	// (0x00071a52) main_cset_slider_pane_g14_ParamLimits

0x6293,	// (0x00071a52) main_cset_slider_pane_g14

0x629f,	// (0x00071a5e) main_cset_slider_pane_g15_ParamLimits

0x629f,	// (0x00071a5e) main_cset_slider_pane_g15

0xd887,	// (0x00079046) main_cset_slider_pane_t14_ParamLimits

0xd887,	// (0x00079046) main_cset_slider_pane_t14

0xd8c0,	// (0x0007907f) main_cset_slider_pane_t15_ParamLimits

0xd8c0,	// (0x0007907f) main_cset_slider_pane_t15

0x6924,	// (0x000720e3) aid_cam4_burst_size_cell_ParamLimits

0x6924,	// (0x000720e3) aid_cam4_burst_size_cell

0x6944,	// (0x00072103) grid_cam4_burst_pane_ParamLimits

0x6944,	// (0x00072103) grid_cam4_burst_pane

0x697c,	// (0x0007213b) linegrid_cam4_burst_pane_ParamLimits

0x697c,	// (0x0007213b) linegrid_cam4_burst_pane

0xd9db,	// (0x0007919a) scroll_pane_cp30_ParamLimits

0xd9db,	// (0x0007919a) scroll_pane_cp30

0x69a0,	// (0x0007215f) cell_cam4_burst_pane_ParamLimits

0x69a0,	// (0x0007215f) cell_cam4_burst_pane

0xd9e7,	// (0x000791a6) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9e7,	// (0x000791a6) linegrid_cam4_burst_pane_g1

0x69ed,	// (0x000721ac) linegrid_cam4_burst_pane_g2_ParamLimits

0x69ed,	// (0x000721ac) linegrid_cam4_burst_pane_g2

0xd9f4,	// (0x000791b3) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9f4,	// (0x000791b3) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007b200) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007b200) linegrid_cam4_burst_pane_g

0x69fe,	// (0x000721bd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x69fe,	// (0x000721bd) linegrid_cam4_burst_pane_g3_copy1

0xda01,	// (0x000791c0) linegrid_cam4_burst_pane_g4_ParamLimits

0xda01,	// (0x000791c0) linegrid_cam4_burst_pane_g4

0x6a18,	// (0x000721d7) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a18,	// (0x000721d7) linegrid_cam4_burst_pane_g5

0x6a29,	// (0x000721e8) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a29,	// (0x000721e8) linegrid_cam4_burst_pane_g6

0xda0e,	// (0x000791cd) linegrid_cam4_burst_pane_g7_ParamLimits

0xda0e,	// (0x000791cd) linegrid_cam4_burst_pane_g7

0x6a40,	// (0x000721ff) cell_cam4_burst_pane_g1

0xda27,	// (0x000791e6) main_cam5_pane_t1_ParamLimits

0xda27,	// (0x000791e6) main_cam5_pane_t1

0xda39,	// (0x000791f8) main_cam5_pane_t2_ParamLimits

0xda39,	// (0x000791f8) main_cam5_pane_t2

0xda4b,	// (0x0007920a) main_cam5_pane_t3_ParamLimits

0xda4b,	// (0x0007920a) main_cam5_pane_t3

0xda5d,	// (0x0007921c) main_cam5_pane_t4_ParamLimits

0xda5d,	// (0x0007921c) main_cam5_pane_t4

0xda75,	// (0x00079234) main_cam5_pane_t5_ParamLimits

0xda75,	// (0x00079234) main_cam5_pane_t5

0xda89,	// (0x00079248) main_cam5_pane_t6_ParamLimits

0xda89,	// (0x00079248) main_cam5_pane_t6

0xda9d,	// (0x0007925c) main_cam5_pane_t7_ParamLimits

0xda9d,	// (0x0007925c) main_cam5_pane_t7

0xdaaf,	// (0x0007926e) main_cam5_pane_t8_ParamLimits

0xdaaf,	// (0x0007926e) main_cam5_pane_t8

0xdacb,	// (0x0007928a) main_cam5_pane_t9_ParamLimits

0xdacb,	// (0x0007928a) main_cam5_pane_t9

0xdadd,	// (0x0007929c) main_cam5_pane_t10_ParamLimits

0xdadd,	// (0x0007929c) main_cam5_pane_t10

0xdaef,	// (0x000792ae) main_cam5_pane_t11_ParamLimits

0xdaef,	// (0x000792ae) main_cam5_pane_t11

0xdb01,	// (0x000792c0) main_cam5_pane_t12_ParamLimits

0xdb01,	// (0x000792c0) main_cam5_pane_t12

0xdb16,	// (0x000792d5) main_cam5_pane_t13_ParamLimits

0xdb16,	// (0x000792d5) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007b20c) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007b20c) main_cam5_pane_t

0x0415,	// (0x0006bbd4) popup_scut_keymap_window_ParamLimits

0x0415,	// (0x0006bbd4) popup_scut_keymap_window

0x6a53,	// (0x00072212) aid_size_cell_brow_shortcut

0xa9f6,	// (0x000761b5) bg_popup_window_pane_cp010

0x6a5f,	// (0x0007221e) grid_scut_pane

0x6a6b,	// (0x0007222a) cell_scut_pane_ParamLimits

0x6a6b,	// (0x0007222a) cell_scut_pane

0x6a82,	// (0x00072241) cell_scut_pane_g1

0xdb33,	// (0x000792f2) cell_scut_pane_t1

0xdb42,	// (0x00079301) cell_scut_pane_t2

0x6a8b,	// (0x0007224a) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007b227) cell_scut_pane_t

0x47c0,	// (0x0006ff7f) main_mup3_pane_g8_ParamLimits

0x47c0,	// (0x0006ff7f) main_mup3_pane_g8

0x5c43,	// (0x00071402) area_vitu2_query_pane_ParamLimits

0x5c43,	// (0x00071402) area_vitu2_query_pane

0x67cc,	// (0x00071f8b) input_focus_pane_cp08

0xdb51,	// (0x00079310) area_vitu2_query_pane_g1

0x6a99,	// (0x00072258) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007b22e) area_vitu2_query_pane_g

0x6aaa,	// (0x00072269) area_vitu2_query_pane_t1_ParamLimits

0x6aaa,	// (0x00072269) area_vitu2_query_pane_t1

0x6abe,	// (0x0007227d) area_vitu2_query_pane_t2_ParamLimits

0x6abe,	// (0x0007227d) area_vitu2_query_pane_t2

0x6ad2,	// (0x00072291) area_vitu2_query_pane_t3_ParamLimits

0x6ad2,	// (0x00072291) area_vitu2_query_pane_t3

0xa4cb,	// (0x00075c8a) area_vitu2_query_pane_t4_ParamLimits

0xa4cb,	// (0x00075c8a) area_vitu2_query_pane_t4

0xa4f3,	// (0x00075cb2) area_vitu2_query_pane_t5_ParamLimits

0xa4f3,	// (0x00075cb2) area_vitu2_query_pane_t5

0xa51b,	// (0x00075cda) area_vitu2_query_pane_t6_ParamLimits

0xa51b,	// (0x00075cda) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007b233) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007b233) area_vitu2_query_pane_t

0x6afa,	// (0x000722b9) bg_button_pane_cp018

0x6b08,	// (0x000722c7) bg_button_pane_cp021

0x6b14,	// (0x000722d3) bg_button_pane_cp022

0x6b23,	// (0x000722e2) input_focus_pane_cp09

0xb2a5,	// (0x00076a64) aid_size_touch_mv_arrow_left

0xb2ce,	// (0x00076a8d) aid_size_touch_mv_arrow_right

0x62b7,	// (0x00071a76) main_cset_slider_pane_g16_ParamLimits

0x62b7,	// (0x00071a76) main_cset_slider_pane_g16

0x62c3,	// (0x00071a82) main_cset_slider_pane_g17_ParamLimits

0x62c3,	// (0x00071a82) main_cset_slider_pane_g17

0x6a40,	// (0x000721ff) cell_cam4_burst_pane_g1_ParamLimits

0x9471,	// (0x00074c30) compa_mode_pane

0x649d,	// (0x00071c5c) popup_vtel_slider_window_g3_ParamLimits

0x649d,	// (0x00071c5c) popup_vtel_slider_window_g3

0x64b4,	// (0x00071c73) popup_vtel_slider_window_g4_ParamLimits

0x64b4,	// (0x00071c73) popup_vtel_slider_window_g4

0x64cb,	// (0x00071c8a) popup_vtel_slider_window_t1_ParamLimits

0x64cb,	// (0x00071c8a) popup_vtel_slider_window_t1

0x94f7,	// (0x00074cb6) main_cl_pane

0x9948,	// (0x00075107) popup_imed_adjust2_window_ParamLimits

0xc874,	// (0x00078033) bg_tb_trans_pane_cp05_ParamLimits

0xd1cb,	// (0x0007898a) popup_imed_adjust2_window_g1_ParamLimits

0xd1da,	// (0x00078999) popup_imed_adjust2_window_g2_ParamLimits

0xd1da,	// (0x00078999) popup_imed_adjust2_window_g2

0xd1e6,	// (0x000789a5) popup_imed_adjust2_window_g3_ParamLimits

0xd1e6,	// (0x000789a5) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007af9e) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007af9e) popup_imed_adjust2_window_g

0xd1f2,	// (0x000789b1) popup_imed_adjust2_window_t1_ParamLimits

0xd20a,	// (0x000789c9) slider_imed_adjust_pane_ParamLimits

0xd21e,	// (0x000789dd) slider_imed_adjust_pane_g1_ParamLimits

0xd22e,	// (0x000789ed) slider_imed_adjust_pane_g2_ParamLimits

0xd23e,	// (0x000789fd) slider_imed_adjust_pane_g3_ParamLimits

0xd24f,	// (0x00078a0e) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007afa5) slider_imed_adjust_pane_g_ParamLimits

0x59cc,	// (0x0007118b) aid_touch_area_cam4_ParamLimits

0x59cc,	// (0x0007118b) aid_touch_area_cam4

0x9cbc,	// (0x0007547b) battery_pane_cp01

0x5a9b,	// (0x0007125a) main_camera4_pane_g6_ParamLimits

0x5a9b,	// (0x0007125a) main_camera4_pane_g6

0x5ac5,	// (0x00071284) main_camera4_pane_t2_ParamLimits

0x5ac5,	// (0x00071284) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007b0a8) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007b0a8) main_camera4_pane_t

0x5afa,	// (0x000712b9) aid_touch_area_vid4_ParamLimits

0x5afa,	// (0x000712b9) aid_touch_area_vid4

0x5b4e,	// (0x0007130d) main_video4_pane_g5_ParamLimits

0x5b4e,	// (0x0007130d) main_video4_pane_g5

0x5b73,	// (0x00071332) vid4_progress_pane_ParamLimits

0x5b73,	// (0x00071332) vid4_progress_pane

0xd84d,	// (0x0007900c) main_cset_slider_pane_g18_ParamLimits

0xd84d,	// (0x0007900c) main_cset_slider_pane_g18

0xda1b,	// (0x000791da) cell_cam4_burst_pane_g2_ParamLimits

0xda1b,	// (0x000791da) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007b207) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007b207) cell_cam4_burst_pane_g

0xa347,	// (0x00075b06) bg_cl_pane_ParamLimits

0xa347,	// (0x00075b06) bg_cl_pane

0x6b32,	// (0x000722f1) cl_header_pane_ParamLimits

0x6b32,	// (0x000722f1) cl_header_pane

0x6b46,	// (0x00072305) cl_listscroll_pane_ParamLimits

0x6b46,	// (0x00072305) cl_listscroll_pane

0xdb5d,	// (0x0007931c) bg_cl_pane_g1

0xdb65,	// (0x00079324) bg_cl_pane_g2

0xdb6d,	// (0x0007932c) bg_cl_pane_g3

0xdb75,	// (0x00079334) bg_cl_pane_g4

0xdb7d,	// (0x0007933c) bg_cl_pane_g5

0xdb85,	// (0x00079344) bg_cl_pane_g6

0xdb8d,	// (0x0007934c) bg_cl_pane_g7

0xdb95,	// (0x00079354) bg_cl_pane_g8

0xdbca,	// (0x00079389) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007b242) bg_cl_pane_g

0x6b56,	// (0x00072315) aid_height_cl_leading_ParamLimits

0x6b56,	// (0x00072315) aid_height_cl_leading

0x6b62,	// (0x00072321) aid_height_cl_text_ParamLimits

0x6b62,	// (0x00072321) aid_height_cl_text

0xb2f7,	// (0x00076ab6) bg_cl_header_pane_ParamLimits

0xb2f7,	// (0x00076ab6) bg_cl_header_pane

0x6b81,	// (0x00072340) cl_header_pane_g1_ParamLimits

0x6b81,	// (0x00072340) cl_header_pane_g1

0x6b97,	// (0x00072356) cl_header_pane_t1_ParamLimits

0x6b97,	// (0x00072356) cl_header_pane_t1

0xdbd2,	// (0x00079391) cl_list_pane

0xd820,	// (0x00078fdf) hc_scroll_pane_cp01

0xac2f,	// (0x000763ee) bg_cl_header_pane_g1

0xd706,	// (0x00078ec5) bg_cl_header_pane_g2

0xac4f,	// (0x0007640e) bg_cl_header_pane_g3

0xd716,	// (0x00078ed5) bg_cl_header_pane_g4

0xd70e,	// (0x00078ecd) bg_cl_header_pane_g5

0xd92a,	// (0x000790e9) bg_cl_header_pane_g6

0xd72e,	// (0x00078eed) bg_cl_header_pane_g7

0xd736,	// (0x00078ef5) bg_cl_header_pane_g8

0xd726,	// (0x00078ee5) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007b255) bg_cl_header_pane_g

0x6bb0,	// (0x0007236f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bb0,	// (0x0007236f) hc_cl_list_double_graphic_heading_pane

0x6bc1,	// (0x00072380) hc_cl_list_single_graphic_pane_ParamLimits

0x6bc1,	// (0x00072380) hc_cl_list_single_graphic_pane

0x6bd7,	// (0x00072396) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6bd7,	// (0x00072396) hc_cl_list_single_graphic_pane_g1

0x6be3,	// (0x000723a2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6be3,	// (0x000723a2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007b268) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007b268) hc_cl_list_single_graphic_pane_g

0x6bf7,	// (0x000723b6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6bf7,	// (0x000723b6) hc_cl_list_single_graphic_pane_t1

0x6bd7,	// (0x00072396) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6bd7,	// (0x00072396) hc_cl_list_double_graphic_heading_pane_g1

0x6c0c,	// (0x000723cb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c0c,	// (0x000723cb) hc_cl_list_double_graphic_heading_pane_g2

0x6c20,	// (0x000723df) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c20,	// (0x000723df) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007b26d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007b26d) hc_cl_list_double_graphic_heading_pane_g

0x6c34,	// (0x000723f3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c34,	// (0x000723f3) hc_cl_list_double_graphic_heading_pane_t1

0x6c49,	// (0x00072408) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c49,	// (0x00072408) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007b274) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007b274) hc_cl_list_double_graphic_heading_pane_t

0x9e50,	// (0x0007560f) vid4_progress_pane_g1

0x9e60,	// (0x0007561f) vid4_progress_pane_g2

0x6c5e,	// (0x0007241d) vid4_progress_pane_g3

0x9e70,	// (0x0007562f) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007b279) vid4_progress_pane_g

0x6c70,	// (0x0007242f) vid4_progress_pane_t1

0x9e88,	// (0x00075647) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007b284) vid4_progress_pane_t

0x6c88,	// (0x00072447) wait_bar_pane_cp07

0xca6f,	// (0x0007822e) blid_firmament_pane_ParamLimits

0xcab2,	// (0x00078271) popup_blid_sat_info2_window_g1

0xcad6,	// (0x00078295) popup_blid_sat_info2_window_t3

0xcae4,	// (0x000782a3) popup_blid_sat_info2_window_t4

0xcaf2,	// (0x000782b1) popup_blid_sat_info2_window_t5

0xcb00,	// (0x000782bf) popup_blid_sat_info2_window_t6

0xcb10,	// (0x000782cf) popup_blid_sat_info2_window_t7

0xcb1e,	// (0x000782dd) popup_blid_sat_info2_window_t8

0xcb2c,	// (0x000782eb) popup_blid_sat_info2_window_t9

0xcb3a,	// (0x000782f9) popup_blid_sat_info2_window_t10

0xcbfc,	// (0x000783bb) aid_firma_cardinal_ParamLimits

0xcc10,	// (0x000783cf) blid_firmament_pane_t1_ParamLimits

0xcc27,	// (0x000783e6) blid_firmament_pane_t2_ParamLimits

0xcc3e,	// (0x000783fd) blid_firmament_pane_t3_ParamLimits

0xcc55,	// (0x00078414) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0007ae92) blid_firmament_pane_t_ParamLimits

0xcc6c,	// (0x0007842b) blid_sat_info_pane_ParamLimits

0x94e9,	// (0x00074ca8) main_cam_set_pane_ParamLimits

0x5084,	// (0x00070843) aid_size_cell_colour_35_ParamLimits

0x50a4,	// (0x00070863) aid_size_cell_colour_112_ParamLimits

0x50c4,	// (0x00070883) aid_size_cell_effect_ParamLimits

0xc874,	// (0x00078033) bg_tb_trans_pane_cp02_ParamLimits

0xae97,	// (0x00076656) heading_imed_pane_ParamLimits

0x50e4,	// (0x000708a3) listscroll_imed_pane_ParamLimits

0xbe8e,	// (0x0007764d) popup_call2_audio_first_window_g5_ParamLimits

0xbe8e,	// (0x0007764d) popup_call2_audio_first_window_g5

0x5677,	// (0x00070e36) aid_size_touch_image3_arrow_left_ParamLimits

0x5677,	// (0x00070e36) aid_size_touch_image3_arrow_left

0x56a3,	// (0x00070e62) aid_size_touch_image3_arrow_right_ParamLimits

0x56a3,	// (0x00070e62) aid_size_touch_image3_arrow_right

0x9e9d,	// (0x0007565c) vid4_progress_pane_t3

0x53f7,	// (0x00070bb6) main_hwr_training_symbol_option_pane_ParamLimits

0x53f7,	// (0x00070bb6) main_hwr_training_symbol_option_pane

0xd4b8,	// (0x00078c77) popup_hwr_training_preview_window_ParamLimits

0xd4b8,	// (0x00078c77) popup_hwr_training_preview_window

0x5417,	// (0x00070bd6) hwr_training_navi_pane_g5_ParamLimits

0x5417,	// (0x00070bd6) hwr_training_navi_pane_g5

0xd6f4,	// (0x00078eb3) popup_char_count_window

0x94e9,	// (0x00074ca8) bg_popup_sub_pane_cp20_ParamLimits

0x65e7,	// (0x00071da6) list_vitu2_match_list_pane_ParamLimits

0x65f6,	// (0x00071db5) vitu2_page_scroll_pane_ParamLimits

0x65f6,	// (0x00071db5) vitu2_page_scroll_pane

0xdbdb,	// (0x0007939a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbdb,	// (0x0007939a) list_single_hwr_training_symbol_option_pane

0xdbee,	// (0x000793ad) list_single_hwr_training_symbol_option_pane_g1

0xdbf6,	// (0x000793b5) list_single_hwr_training_symbol_option_pane_t1

0xdc04,	// (0x000793c3) bg_button_pane_cp023

0xdc0d,	// (0x000793cc) bg_button_pane_cp024

0x6cd3,	// (0x00072492) vitu2_page_scroll_pane_g1

0x6cdb,	// (0x0007249a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007b28b) vitu2_page_scroll_pane_g

0x6ce3,	// (0x000724a2) vitu2_page_scroll_pane_t1

0xc9cf,	// (0x0007818e) popup_char_count_window_g1

0xdc40,	// (0x000793ff) popup_char_count_window_g2

0xdc49,	// (0x00079408) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007b290) popup_char_count_window_g

0xdc52,	// (0x00079411) popup_char_count_window_t1

0x94f7,	// (0x00074cb6) main_vded2_pane

0xd1b7,	// (0x00078976) aid_size_cell_imed_line

0xd1c1,	// (0x00078980) grid_imed_line_width_pane

0x9d82,	// (0x00075541) vid4_indicators_pane_g4

0xdc60,	// (0x0007941f) cell_imed_line_width_pane_ParamLimits

0xdc60,	// (0x0007941f) cell_imed_line_width_pane

0xdc74,	// (0x00079433) cell_imed_line_width_pane_g1

0xdbb8,	// (0x00079377) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007b297) cell_imed_line_width_pane_g

0x6cf2,	// (0x000724b1) main_vded2_pane_g1_ParamLimits

0x6cf2,	// (0x000724b1) main_vded2_pane_g1

0x6d08,	// (0x000724c7) main_vded2_pane_g2_ParamLimits

0x6d08,	// (0x000724c7) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007b29c) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007b29c) main_vded2_pane_g

0x6d1a,	// (0x000724d9) vded2_slider_pane_ParamLimits

0x6d1a,	// (0x000724d9) vded2_slider_pane

0x6d2a,	// (0x000724e9) aid_size_touch_vded2_end

0x6d34,	// (0x000724f3) aid_size_touch_vded2_playhead

0xdc7d,	// (0x0007943c) aid_size_touch_vded2_start

0xdc85,	// (0x00079444) vded2_slider_bg_pane

0xdc8e,	// (0x0007944d) vded2_slider_pane_g1

0xdc97,	// (0x00079456) vded2_slider_pane_g2

0x6d3e,	// (0x000724fd) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007b2a1) vded2_slider_pane_g

0xdc9f,	// (0x0007945e) vded2_slider_bg_pane_g1

0xdca8,	// (0x00079467) vded2_slider_bg_pane_g2

0xdcb1,	// (0x00079470) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007b2a8) vded2_slider_bg_pane_g

0x2e01,	// (0x0006e5c0) aid_postcard_touch_down_pane_ParamLimits

0x2e01,	// (0x0006e5c0) aid_postcard_touch_down_pane

0x2e17,	// (0x0006e5d6) aid_postcard_touch_up_pane_ParamLimits

0x2e17,	// (0x0006e5d6) aid_postcard_touch_up_pane

0x94f7,	// (0x00074cb6) main_blid2_pane

0x992e,	// (0x000750ed) popup_blid2_search_window

0x9471,	// (0x00074c30) blid2_gps_pane

0x9471,	// (0x00074c30) blid2_navig_pane

0x9471,	// (0x00074c30) blid2_search_pane

0x9471,	// (0x00074c30) blid2_tripm_pane

0x6d49,	// (0x00072508) blid2_search_pane_g1_ParamLimits

0x6d49,	// (0x00072508) blid2_search_pane_g1

0x6d63,	// (0x00072522) blid2_search_pane_t1_ParamLimits

0x6d63,	// (0x00072522) blid2_search_pane_t1

0x6d75,	// (0x00072534) aid_size_cell_blid2_gps_ParamLimits

0x6d75,	// (0x00072534) aid_size_cell_blid2_gps

0x6d8d,	// (0x0007254c) blid2_gps_pane_g1_ParamLimits

0x6d8d,	// (0x0007254c) blid2_gps_pane_g1

0x6da1,	// (0x00072560) grid_blid2_satellite_pane_ParamLimits

0x6da1,	// (0x00072560) grid_blid2_satellite_pane

0x6dbb,	// (0x0007257a) blid2_navig_pane_g1_ParamLimits

0x6dbb,	// (0x0007257a) blid2_navig_pane_g1

0x6dc7,	// (0x00072586) blid2_navig_pane_t1_ParamLimits

0x6dc7,	// (0x00072586) blid2_navig_pane_t1

0x6de2,	// (0x000725a1) blid2_navig_pane_t2_ParamLimits

0x6de2,	// (0x000725a1) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007b2af) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007b2af) blid2_navig_pane_t

0x6dfd,	// (0x000725bc) blid2_navig_ring_pane_ParamLimits

0x6dfd,	// (0x000725bc) blid2_navig_ring_pane

0x6e16,	// (0x000725d5) blid2_speed_pane_ParamLimits

0x6e16,	// (0x000725d5) blid2_speed_pane

0x6e22,	// (0x000725e1) blid2_tripm_pane_g1_ParamLimits

0x6e22,	// (0x000725e1) blid2_tripm_pane_g1

0x6e3b,	// (0x000725fa) blid2_tripm_pane_g2_ParamLimits

0x6e3b,	// (0x000725fa) blid2_tripm_pane_g2

0x6e4f,	// (0x0007260e) blid2_tripm_pane_g3_ParamLimits

0x6e4f,	// (0x0007260e) blid2_tripm_pane_g3

0x6e63,	// (0x00072622) blid2_tripm_pane_g4_ParamLimits

0x6e63,	// (0x00072622) blid2_tripm_pane_g4

0x6e77,	// (0x00072636) blid2_tripm_pane_g5_ParamLimits

0x6e77,	// (0x00072636) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007b2b4) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007b2b4) blid2_tripm_pane_g

0x6e9d,	// (0x0007265c) blid2_tripm_pane_t1_ParamLimits

0x6e9d,	// (0x0007265c) blid2_tripm_pane_t1

0x6eb8,	// (0x00072677) blid2_tripm_pane_t2_ParamLimits

0x6eb8,	// (0x00072677) blid2_tripm_pane_t2

0x6ed1,	// (0x00072690) blid2_tripm_pane_t3_ParamLimits

0x6ed1,	// (0x00072690) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007b2c1) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007b2c1) blid2_tripm_pane_t

0x6f18,	// (0x000726d7) cell_blid2_satellite_pane_ParamLimits

0x6f18,	// (0x000726d7) cell_blid2_satellite_pane

0x6f36,	// (0x000726f5) cell_blid2_satellite_pane_g1

0xdcba,	// (0x00079479) cell_blid2_satellite_pane_t1

0xcc7c,	// (0x0007843b) blid2_speed_pane_g1

0xdcc8,	// (0x00079487) blid2_speed_pane_t1

0xdcd6,	// (0x00079495) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007b2ca) blid2_speed_pane_t

0xcc7c,	// (0x0007843b) blid2_navig_ring_pane_g1

0x6f3f,	// (0x000726fe) blid2_navig_ring_pane_g2

0x6f47,	// (0x00072706) blid2_navig_ring_pane_g3

0x6f4f,	// (0x0007270e) blid2_navig_ring_pane_g4

0x6f57,	// (0x00072716) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007b2cf) blid2_navig_ring_pane_g

0x9471,	// (0x00074c30) bg_popup_window_pane_cp011

0xdce4,	// (0x000794a3) popup_blid2_search_window_g1

0xdcec,	// (0x000794ab) popup_blid2_search_window_t1

0xdcfa,	// (0x000794b9) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007b2da) popup_blid2_search_window_t

0xab3e,	// (0x000762fd) main_browser_pane_g1

0xa347,	// (0x00075b06) main_browser_pane_ParamLimits

0x94e9,	// (0x00074ca8) bg_button_pane_cp011_ParamLimits

0x5e8d,	// (0x0007164c) cell_vitu2_function_pane_g1_ParamLimits

0xc874,	// (0x00078033) bg_popup_sub_pane_cp22_ParamLimits

0x67cc,	// (0x00071f8b) input_focus_pane_cp08_ParamLimits

0x67e3,	// (0x00071fa2) popup_vitu2_query_button_pane_ParamLimits

0x67e3,	// (0x00071fa2) popup_vitu2_query_button_pane

0x67f4,	// (0x00071fb3) popup_vitu2_query_input_button_pane

0xd965,	// (0x00079124) popup_vitu2_query_window_g1_ParamLimits

0x67fe,	// (0x00071fbd) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007b1db) popup_vitu2_query_window_g_ParamLimits

0x9471,	// (0x00074c30) bg_button_pane_cp026

0x6f5f,	// (0x0007271e) popup_vitu2_query_input_button_pane_g1

0x9471,	// (0x00074c30) bg_button_pane_cp025

0xdd08,	// (0x000794c7) popup_vitu2_query_button_pane_t1

0x44a9,	// (0x0006fc68) main_mp3_pane_t6

0x44b7,	// (0x0006fc76) popup_slider_window_cp01

0x9ce6,	// (0x000754a5) cam4_battery_pane

0x9d3f,	// (0x000754fe) cam4_battery_pane_cp02

0x9e48,	// (0x00075607) cam4_battery_pane_cp01

0x9e48,	// (0x00075607) cam4_battery_pane_cp03

0xdbc0,	// (0x0007937f) cam4_battery_pane_g1

0xcc7c,	// (0x0007843b) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007b2df) cam4_battery_pane_g

0xcb48,	// (0x00078307) popup_blid_sat_info2_window_t11

0xb2a5,	// (0x00076a64) aid_size_touch_mv_arrow_left_ParamLimits

0xb2ce,	// (0x00076a8d) aid_size_touch_mv_arrow_right_ParamLimits

0xb33a,	// (0x00076af9) navi_pane_g1_ParamLimits

0xb346,	// (0x00076b05) navi_pane_g2_ParamLimits

0xb374,	// (0x00076b33) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007aba4) navi_pane_g_ParamLimits

0x2869,	// (0x0006e028) navi_pane_mv_t1_ParamLimits

0x50f0,	// (0x000708af) grid_imed_effect_pane_ParamLimits

0x1473,	// (0x0006cc32) aid_placing_vt_slider_lsc

0xaa8d,	// (0x0007624c) aid_placing_vt_slider_prt

0xb2f7,	// (0x00076ab6) bg_tb_trans_pane_cp01_ParamLimits

0xce08,	// (0x000785c7) popup_image_details_window_g1_ParamLimits

0xce1b,	// (0x000785da) popup_image_details_window_g2_ParamLimits

0xce30,	// (0x000785ef) popup_image_details_window_g3_ParamLimits

0xce30,	// (0x000785ef) popup_image_details_window_g3

0xf718,	// (0x0007aed7) popup_image_details_window_g_ParamLimits

0xce44,	// (0x00078603) popup_image_details_window_t1_ParamLimits

0xce56,	// (0x00078615) popup_image_details_window_t2_ParamLimits

0xce6f,	// (0x0007862e) popup_image_details_window_t3_ParamLimits

0xce83,	// (0x00078642) popup_image_details_window_t4_ParamLimits

0xce9e,	// (0x0007865d) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007aede) popup_image_details_window_t_ParamLimits

0x6b6e,	// (0x0007232d) cl_header_name_pane_ParamLimits

0x6b6e,	// (0x0007232d) cl_header_name_pane

0x6f67,	// (0x00072726) cl_header_name_pane_t1_ParamLimits

0x6f67,	// (0x00072726) cl_header_name_pane_t1

0x6f88,	// (0x00072747) cl_header_name_pane_t2_ParamLimits

0x6f88,	// (0x00072747) cl_header_name_pane_t2

0x6fca,	// (0x00072789) cl_header_name_pane_t3_ParamLimits

0x6fca,	// (0x00072789) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007b2e4) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007b2e4) cl_header_name_pane_t

0xb403,	// (0x00076bc2) navi_pane_mv_g2_ParamLimits

0xd6ce,	// (0x00078e8d) field_vitu2_entry_pane_g1_ParamLimits

0xd6da,	// (0x00078e99) field_vitu2_entry_pane_g2_ParamLimits

0xd6e6,	// (0x00078ea5) field_vitu2_entry_pane_g3_ParamLimits

0xd6e6,	// (0x00078ea5) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007b0da) field_vitu2_entry_pane_g_ParamLimits

0x9db7,	// (0x00075576) cell_vitu2_itu_pane_g1_ParamLimits

0x5e21,	// (0x000715e0) cell_vitu2_itu_pane_g2_ParamLimits

0x5e21,	// (0x000715e0) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007b0e6) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007b0e6) cell_vitu2_itu_pane_g

0x94e9,	// (0x00074ca8) bg_vkb2_func_pane_cp05_ParamLimits

0x94e9,	// (0x00074ca8) bg_vkb2_func_pane_cp05

0x94e9,	// (0x00074ca8) bg_vkb2_func_pane_cp03

0x94e9,	// (0x00074ca8) bg_vkb2_func_pane_cp04

0x94e9,	// (0x00074ca8) bg_vkb2_func_pane_cp10_ParamLimits

0x94e9,	// (0x00074ca8) bg_vkb2_func_pane_cp10

0x6b14,	// (0x000722d3) bg_vkb2_func_pane_cp08

0x6afa,	// (0x000722b9) bg_vkb2_func_pane_cp06

0x6b08,	// (0x000722c7) bg_vkb2_func_pane_cp07

0xdc16,	// (0x000793d5) bg_vkb2_func_pane_cp11_ParamLimits

0xdc16,	// (0x000793d5) bg_vkb2_func_pane_cp11

0xdc2b,	// (0x000793ea) bg_vkb2_func_pane_cp12_ParamLimits

0xdc2b,	// (0x000793ea) bg_vkb2_func_pane_cp12

0x9471,	// (0x00074c30) bg_vkb2_func_pane_cp09

0xd706,	// (0x00078ec5) bg_vkb2_func_pane_g1

0xac4f,	// (0x0007640e) bg_vkb2_func_pane_g2

0xd70e,	// (0x00078ecd) bg_vkb2_func_pane_g3

0xd716,	// (0x00078ed5) bg_vkb2_func_pane_g4

0xd92a,	// (0x000790e9) bg_vkb2_func_pane_g5

0xd72e,	// (0x00078eed) bg_vkb2_func_pane_g6

0xd736,	// (0x00078ef5) bg_vkb2_func_pane_g7

0xd726,	// (0x00078ee5) bg_vkb2_func_pane_g8

0xac2f,	// (0x000763ee) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007b2eb) bg_vkb2_func_pane_g

0x6e8b,	// (0x0007264a) blid2_tripm_pane_g6_ParamLimits

0x6e8b,	// (0x0007264a) blid2_tripm_pane_g6

0xd570,	// (0x00078d2f) mp4_progress_pane_g1

0x6f04,	// (0x000726c3) blid2_tripm_values_pane_ParamLimits

0x6f04,	// (0x000726c3) blid2_tripm_values_pane

0x6ffb,	// (0x000727ba) blid2_tripm_values_pane_t1

0x7009,	// (0x000727c8) blid2_tripm_values_pane_t2

0x7017,	// (0x000727d6) blid2_tripm_values_pane_t3

0x7025,	// (0x000727e4) blid2_tripm_values_pane_t4

0x7033,	// (0x000727f2) blid2_tripm_values_pane_t5

0x7041,	// (0x00072800) blid2_tripm_values_pane_t6

0x704f,	// (0x0007280e) blid2_tripm_values_pane_t7

0x705d,	// (0x0007281c) blid2_tripm_values_pane_t8

0x706b,	// (0x0007282a) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007b2fe) blid2_tripm_values_pane_t

0x14b5,	// (0x0006cc74) call_video_pane_t1_ParamLimits

0x14d3,	// (0x0006cc92) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007aa2d) call_video_pane_t_ParamLimits

0x2d3c,	// (0x0006e4fb) msg_header_pane_g1_ParamLimits

0xb5eb,	// (0x00076daa) msg_header_pane_g2_ParamLimits

0xb5eb,	// (0x00076daa) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007ac47) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007ac47) msg_header_pane_g

0xa347,	// (0x00075b06) main_clock2_pane_ParamLimits

0x4df1,	// (0x000705b0) grid_clock2_toolbar_pane_ParamLimits

0x4df1,	// (0x000705b0) grid_clock2_toolbar_pane

0x4df1,	// (0x000705b0) listscroll_clock2_pane_ParamLimits

0x4df1,	// (0x000705b0) listscroll_clock2_pane

0x4ee4,	// (0x000706a3) main_clock2_pane_t3_ParamLimits

0x4ee4,	// (0x000706a3) main_clock2_pane_t3

0x4f08,	// (0x000706c7) main_clock2_pane_t4_ParamLimits

0x4f08,	// (0x000706c7) main_clock2_pane_t4

0xdd16,	// (0x000794d5) cell_clock2_toolbar_pane

0xdd1e,	// (0x000794dd) cell_clock2_toolbar_pane_cp01

0xdd1e,	// (0x000794dd) cell_clock2_toolbar_pane_cp02

0xdd26,	// (0x000794e5) cell_clock2_toolbar_pane_cp03

0xdd2e,	// (0x000794ed) list_clock2_pane

0xb21b,	// (0x000769da) scroll_pane_cp10

0xdd36,	// (0x000794f5) list_single_clock2_pane_ParamLimits

0xdd36,	// (0x000794f5) list_single_clock2_pane

0xa9f6,	// (0x000761b5) list_highlight_pane_cp08

0xdd43,	// (0x00079502) list_single_clock2_pane_t1

0xdd51,	// (0x00079510) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007b311) list_single_clock2_pane_t

0x9471,	// (0x00074c30) bg_button_pane_cp10

0xdd5f,	// (0x0007951e) cell_clock2_toolbar_pane_g1

0x2d8d,	// (0x0006e54c) aid_main_viewer_pane_g1_ParamLimits

0x2d8d,	// (0x0006e54c) aid_main_viewer_pane_g1

0x2d9b,	// (0x0006e55a) aid_main_viewer_pane_g2_ParamLimits

0x2d9b,	// (0x0006e55a) aid_main_viewer_pane_g2

0x2da9,	// (0x0006e568) aid_main_viewer_pane_g3_ParamLimits

0x2da9,	// (0x0006e568) aid_main_viewer_pane_g3

0x2db8,	// (0x0006e577) aid_main_viewer_pane_g4_ParamLimits

0x2db8,	// (0x0006e577) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007ac58) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007ac58) aid_main_viewer_pane_g

0x36be,	// (0x0006ee7d) main_calc_pane_ParamLimits

0x36e4,	// (0x0006eea3) main_dialer2_pane_ParamLimits

0x94f7,	// (0x00074cb6) main_cam6_pane

0x94f7,	// (0x00074cb6) main_vid6_pane

0x4dfd,	// (0x000705bc) listscroll_gen_pane_cp06_ParamLimits

0x4dfd,	// (0x000705bc) listscroll_gen_pane_cp06

0x4f2b,	// (0x000706ea) main_clock2_pane_t5_ParamLimits

0x4f2b,	// (0x000706ea) main_clock2_pane_t5

0x4f85,	// (0x00070744) aid_call2_pane_cp10_ParamLimits

0x4f97,	// (0x00070756) aid_call_pane_cp10_ParamLimits

0xb299,	// (0x00076a58) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb299,	// (0x00076a58) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4fa9,	// (0x00070768) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4fa9,	// (0x00070768) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb299,	// (0x00076a58) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007af93) popup_clock_analogue_window_cp10_g_ParamLimits

0x4fbb,	// (0x0007077a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5624,	// (0x00070de3) cell_dialer2_keypad_pane_g2_ParamLimits

0x5624,	// (0x00070de3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007b079) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007b079) cell_dialer2_keypad_pane_g

0x5640,	// (0x00070dff) cell_dialer2_keypad_pane_t1

0x61aa,	// (0x00071969) main_cset_text2_pane_ParamLimits

0x61aa,	// (0x00071969) main_cset_text2_pane

0xdb51,	// (0x00079310) area_vitu2_query_pane_g1_ParamLimits

0x6a99,	// (0x00072258) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007b22e) area_vitu2_query_pane_g_ParamLimits

0xa543,	// (0x00075d02) area_vitu2_query_pane_t7_ParamLimits

0xa543,	// (0x00075d02) area_vitu2_query_pane_t7

0x6afa,	// (0x000722b9) bg_button_pane_cp018_ParamLimits

0x6b08,	// (0x000722c7) bg_button_pane_cp021_ParamLimits

0x6b14,	// (0x000722d3) bg_button_pane_cp022_ParamLimits

0x6b14,	// (0x000722d3) bg_vkb2_func_pane_cp08_ParamLimits

0x6afa,	// (0x000722b9) bg_vkb2_func_pane_cp06_ParamLimits

0x6b08,	// (0x000722c7) bg_vkb2_func_pane_cp07_ParamLimits

0x6b23,	// (0x000722e2) input_focus_pane_cp09_ParamLimits

0x9eb2,	// (0x00075671) cam6_autofocus_pane_ParamLimits

0x9eb2,	// (0x00075671) cam6_autofocus_pane

0x7079,	// (0x00072838) cam6_image_uncrop_pane_ParamLimits

0x7079,	// (0x00072838) cam6_image_uncrop_pane

0x7088,	// (0x00072847) cam6_indi_pane_ParamLimits

0x7088,	// (0x00072847) cam6_indi_pane

0x709e,	// (0x0007285d) cam6_mode_pane_ParamLimits

0x709e,	// (0x0007285d) cam6_mode_pane

0x70b0,	// (0x0007286f) cam6_timer_pane_ParamLimits

0x70b0,	// (0x0007286f) cam6_timer_pane

0x70bc,	// (0x0007287b) cam6_zoom_pane_ParamLimits

0x70bc,	// (0x0007287b) cam6_zoom_pane

0x70c8,	// (0x00072887) cam6_mode_pane_g1_ParamLimits

0x70c8,	// (0x00072887) cam6_mode_pane_g1

0x70d8,	// (0x00072897) cam6_mode_pane_g2_ParamLimits

0x70d8,	// (0x00072897) cam6_mode_pane_g2

0x70e8,	// (0x000728a7) cam6_mode_pane_g3_ParamLimits

0x70e8,	// (0x000728a7) cam6_mode_pane_g3

0x70f8,	// (0x000728b7) cam6_mode_pane_g4_ParamLimits

0x70f8,	// (0x000728b7) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007b316) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007b316) cam6_mode_pane_g

0xdd67,	// (0x00079526) bg_tb_trans_pane_cp08_ParamLimits

0xdd67,	// (0x00079526) bg_tb_trans_pane_cp08

0xdd75,	// (0x00079534) cam6_battery_pane_ParamLimits

0xdd75,	// (0x00079534) cam6_battery_pane

0xdd8b,	// (0x0007954a) cam6_indi_pane_g1_ParamLimits

0xdd8b,	// (0x0007954a) cam6_indi_pane_g1

0xdd9d,	// (0x0007955c) cam6_indi_pane_g2_ParamLimits

0xdd9d,	// (0x0007955c) cam6_indi_pane_g2

0xddaf,	// (0x0007956e) cam6_indi_pane_g3_ParamLimits

0xddaf,	// (0x0007956e) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007b31f) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007b31f) cam6_indi_pane_g

0xddc1,	// (0x00079580) cam6_indi_pane_t1_ParamLimits

0xddc1,	// (0x00079580) cam6_indi_pane_t1

0x7108,	// (0x000728c7) cam6_autofocus_pane_g1

0x7110,	// (0x000728cf) cam6_autofocus_pane_g2

0x7118,	// (0x000728d7) cam6_autofocus_pane_g3

0x7120,	// (0x000728df) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007b326) cam6_autofocus_pane_g

0xdde7,	// (0x000795a6) cam6_timer_pane_g1

0xddef,	// (0x000795ae) cam6_timer_pane_t1

0xddfd,	// (0x000795bc) cam6_zoom_cont_pane

0xde05,	// (0x000795c4) cam6_zoom_pane_g1

0xde0d,	// (0x000795cc) cam6_zoom_pane_g2

0x7128,	// (0x000728e7) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007b32f) cam6_zoom_pane_g

0xcc7c,	// (0x0007843b) cam6_battery_pane_g1

0xcc7c,	// (0x0007843b) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007ae9b) cam6_battery_pane_g

0xde15,	// (0x000795d4) cam6_zoom_cont_pane_g1

0xde1e,	// (0x000795dd) cam6_zoom_cont_pane_g2

0xde27,	// (0x000795e6) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007b336) cam6_zoom_cont_pane_g

0x7145,	// (0x00072904) cam6_mode_pane_cp_ParamLimits

0x7145,	// (0x00072904) cam6_mode_pane_cp

0x7157,	// (0x00072916) cam6_zoom_pane_cp_ParamLimits

0x7157,	// (0x00072916) cam6_zoom_pane_cp

0x7163,	// (0x00072922) vid6_image_uncrop_cif_pane_ParamLimits

0x7163,	// (0x00072922) vid6_image_uncrop_cif_pane

0x7173,	// (0x00072932) vid6_image_uncrop_nhd_pane_ParamLimits

0x7173,	// (0x00072932) vid6_image_uncrop_nhd_pane

0x7182,	// (0x00072941) vid6_image_uncrop_vga_pane_ParamLimits

0x7182,	// (0x00072941) vid6_image_uncrop_vga_pane

0x7191,	// (0x00072950) vid6_image_uncrop_wvga_pane_ParamLimits

0x7191,	// (0x00072950) vid6_image_uncrop_wvga_pane

0x71a0,	// (0x0007295f) vid6_indi_pane_ParamLimits

0x71a0,	// (0x0007295f) vid6_indi_pane

0xdd67,	// (0x00079526) bg_tb_trans_pane_cp09_ParamLimits

0xdd67,	// (0x00079526) bg_tb_trans_pane_cp09

0xde3f,	// (0x000795fe) cam6_battery_pane_cp_ParamLimits

0xde3f,	// (0x000795fe) cam6_battery_pane_cp

0xde4b,	// (0x0007960a) vid6_indi_pane_g1_ParamLimits

0xde4b,	// (0x0007960a) vid6_indi_pane_g1

0xde5d,	// (0x0007961c) vid6_indi_pane_g2_ParamLimits

0xde5d,	// (0x0007961c) vid6_indi_pane_g2

0xde6f,	// (0x0007962e) vid6_indi_pane_g3_ParamLimits

0xde6f,	// (0x0007962e) vid6_indi_pane_g3

0xde84,	// (0x00079643) vid6_indi_pane_g4_ParamLimits

0xde84,	// (0x00079643) vid6_indi_pane_g4

0xde99,	// (0x00079658) vid6_indi_pane_g5_ParamLimits

0xde99,	// (0x00079658) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007b33d) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007b33d) vid6_indi_pane_g

0xdeb3,	// (0x00079672) vid6_indi_pane_t1_ParamLimits

0xdeb3,	// (0x00079672) vid6_indi_pane_t1

0xdec9,	// (0x00079688) vid6_indi_pane_t2_ParamLimits

0xdec9,	// (0x00079688) vid6_indi_pane_t2

0xdef1,	// (0x000796b0) vid6_indi_pane_t3_ParamLimits

0xdef1,	// (0x000796b0) vid6_indi_pane_t3

0xdf19,	// (0x000796d8) vid6_indi_pane_t4_ParamLimits

0xdf19,	// (0x000796d8) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007b348) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007b348) vid6_indi_pane_t

0xdf3d,	// (0x000796fc) wait_bar_pane_cp08

0x71b8,	// (0x00072977) main_cset_text2_pane_t1_ParamLimits

0x71b8,	// (0x00072977) main_cset_text2_pane_t1

0x7130,	// (0x000728ef) listscroll_gen_pane_cp06_t1_ParamLimits

0x7130,	// (0x000728ef) listscroll_gen_pane_cp06_t1

0x94f7,	// (0x00074cb6) main_cam6_set_pane

0x9cd8,	// (0x00075497) bg_tb_trans_pane_cp06_ParamLimits

0x9cee,	// (0x000754ad) cam4_indicators_pane_g1_ParamLimits

0x9cff,	// (0x000754be) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007b0b6) cam4_indicators_pane_g_ParamLimits

0x9d1d,	// (0x000754dc) cam4_indicators_pane_t1_ParamLimits

0x94e9,	// (0x00074ca8) bg_tb_trans_pane_cp07_ParamLimits

0x9d49,	// (0x00075508) vid4_indicators_pane_g1_ParamLimits

0x9d5d,	// (0x0007551c) vid4_indicators_pane_g2_ParamLimits

0x9d71,	// (0x00075530) vid4_indicators_pane_g3_ParamLimits

0x9d82,	// (0x00075541) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007b0c8) vid4_indicators_pane_g_ParamLimits

0x9da0,	// (0x0007555f) vid4_indicators_pane_t1_ParamLimits

0x9e50,	// (0x0007560f) vid4_progress_pane_g1_ParamLimits

0x9e60,	// (0x0007561f) vid4_progress_pane_g2_ParamLimits

0x6c5e,	// (0x0007241d) vid4_progress_pane_g3_ParamLimits

0x9e70,	// (0x0007562f) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007b279) vid4_progress_pane_g_ParamLimits

0x6c70,	// (0x0007242f) vid4_progress_pane_t1_ParamLimits

0x9e88,	// (0x00075647) vid4_progress_pane_t2_ParamLimits

0x9e9d,	// (0x0007565c) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007b284) vid4_progress_pane_t_ParamLimits

0x6c88,	// (0x00072447) wait_bar_pane_cp07_ParamLimits

0x71d5,	// (0x00072994) main_cam6_set_pane_g2_ParamLimits

0x71d5,	// (0x00072994) main_cam6_set_pane_g2

0x71f9,	// (0x000729b8) main_cset6_listscroll_pane_ParamLimits

0x71f9,	// (0x000729b8) main_cset6_listscroll_pane

0x7219,	// (0x000729d8) main_cset6_slider_pane_ParamLimits

0x7219,	// (0x000729d8) main_cset6_slider_pane

0x722f,	// (0x000729ee) main_cset6_text2_pane_ParamLimits

0x722f,	// (0x000729ee) main_cset6_text2_pane

0xdf4c,	// (0x0007970b) main_cset6_text_pane

0xdf54,	// (0x00079713) main_cset_list_pane_copy1_ParamLimits

0xdf54,	// (0x00079713) main_cset_list_pane_copy1

0xdf64,	// (0x00079723) scroll_pane_cp028_copy1

0x723d,	// (0x000729fc) cset_list_set_pane_copy1

0x724e,	// (0x00072a0d) aid_position_infowindow_above_copy1

0x7256,	// (0x00072a15) aid_position_infowindow_below_copy1

0x725e,	// (0x00072a1d) cset_list_set_pane_g1_copy1

0x7266,	// (0x00072a25) cset_list_set_pane_g3_copy1_ParamLimits

0x7266,	// (0x00072a25) cset_list_set_pane_g3_copy1

0x7275,	// (0x00072a34) cset_list_set_pane_t1_copy1_ParamLimits

0x7275,	// (0x00072a34) cset_list_set_pane_t1_copy1

0xb2f7,	// (0x00076ab6) list_highlight_pane_cp021_copy1_ParamLimits

0xb2f7,	// (0x00076ab6) list_highlight_pane_cp021_copy1

0xdf6d,	// (0x0007972c) cset6_slider_pane_ParamLimits

0xdf6d,	// (0x0007972c) cset6_slider_pane

0xdf99,	// (0x00079758) main_cset6_slider_pane_g1_ParamLimits

0xdf99,	// (0x00079758) main_cset6_slider_pane_g1

0x728a,	// (0x00072a49) main_cset6_slider_pane_g2_ParamLimits

0x728a,	// (0x00072a49) main_cset6_slider_pane_g2

0xdfc1,	// (0x00079780) main_cset6_slider_pane_g3_ParamLimits

0xdfc1,	// (0x00079780) main_cset6_slider_pane_g3

0x72b2,	// (0x00072a71) main_cset6_slider_pane_g4_ParamLimits

0x72b2,	// (0x00072a71) main_cset6_slider_pane_g4

0x72be,	// (0x00072a7d) main_cset6_slider_pane_g5_ParamLimits

0x72be,	// (0x00072a7d) main_cset6_slider_pane_g5

0xd835,	// (0x00078ff4) main_cset6_slider_pane_g7_ParamLimits

0xd835,	// (0x00078ff4) main_cset6_slider_pane_g7

0xd841,	// (0x00079000) main_cset6_slider_pane_g8_ParamLimits

0xd841,	// (0x00079000) main_cset6_slider_pane_g8

0x6257,	// (0x00071a16) main_cset6_slider_pane_g9_ParamLimits

0x6257,	// (0x00071a16) main_cset6_slider_pane_g9

0x6263,	// (0x00071a22) main_cset6_slider_pane_g10_ParamLimits

0x6263,	// (0x00071a22) main_cset6_slider_pane_g10

0x626f,	// (0x00071a2e) main_cset6_slider_pane_g11_ParamLimits

0x626f,	// (0x00071a2e) main_cset6_slider_pane_g11

0x627b,	// (0x00071a3a) main_cset6_slider_pane_g12_ParamLimits

0x627b,	// (0x00071a3a) main_cset6_slider_pane_g12

0x6287,	// (0x00071a46) main_cset6_slider_pane_g13_ParamLimits

0x6287,	// (0x00071a46) main_cset6_slider_pane_g13

0x6293,	// (0x00071a52) main_cset6_slider_pane_g14_ParamLimits

0x6293,	// (0x00071a52) main_cset6_slider_pane_g14

0x72ca,	// (0x00072a89) main_cset6_slider_pane_g15_ParamLimits

0x72ca,	// (0x00072a89) main_cset6_slider_pane_g15

0x62b7,	// (0x00071a76) main_cset6_slider_pane_g16_ParamLimits

0x62b7,	// (0x00071a76) main_cset6_slider_pane_g16

0x62c3,	// (0x00071a82) main_cset6_slider_pane_g17_ParamLimits

0x62c3,	// (0x00071a82) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007b351) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007b351) main_cset6_slider_pane_g

0xdfcd,	// (0x0007978c) main_cset6_slider_pane_t1_ParamLimits

0xdfcd,	// (0x0007978c) main_cset6_slider_pane_t1

0x72fa,	// (0x00072ab9) main_cset6_slider_pane_t2_ParamLimits

0x72fa,	// (0x00072ab9) main_cset6_slider_pane_t2

0x7325,	// (0x00072ae4) main_cset6_slider_pane_t3_ParamLimits

0x7325,	// (0x00072ae4) main_cset6_slider_pane_t3

0x7350,	// (0x00072b0f) main_cset6_slider_pane_t4_ParamLimits

0x7350,	// (0x00072b0f) main_cset6_slider_pane_t4

0x737b,	// (0x00072b3a) main_cset6_slider_pane_t5_ParamLimits

0x737b,	// (0x00072b3a) main_cset6_slider_pane_t5

0xe00e,	// (0x000797cd) main_cset6_slider_pane_t7_ParamLimits

0xe00e,	// (0x000797cd) main_cset6_slider_pane_t7

0x73a6,	// (0x00072b65) main_cset6_slider_pane_t8_ParamLimits

0x73a6,	// (0x00072b65) main_cset6_slider_pane_t8

0x73ca,	// (0x00072b89) main_cset6_slider_pane_t9_ParamLimits

0x73ca,	// (0x00072b89) main_cset6_slider_pane_t9

0x73ee,	// (0x00072bad) main_cset6_slider_pane_t10_ParamLimits

0x73ee,	// (0x00072bad) main_cset6_slider_pane_t10

0x7412,	// (0x00072bd1) main_cset6_slider_pane_t11_ParamLimits

0x7412,	// (0x00072bd1) main_cset6_slider_pane_t11

0xe044,	// (0x00079803) main_cset6_slider_pane_t14_ParamLimits

0xe044,	// (0x00079803) main_cset6_slider_pane_t14

0xe07d,	// (0x0007983c) main_cset6_slider_pane_t15_ParamLimits

0xe07d,	// (0x0007983c) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007b376) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007b376) main_cset6_slider_pane_t

0xdb9d,	// (0x0007935c) cset_slider_pane_g1_copy1

0xdba6,	// (0x00079365) cset_slider_pane_g2_copy1

0xdbaf,	// (0x0007936e) cset_slider_pane_g3_copy1

0x9471,	// (0x00074c30) bg_popup_sub_pane_cp011_copy1

0xe0b6,	// (0x00079875) main_cset_text_pane_g1_copy1

0xd979,	// (0x00079138) main_cset_text_pane_t1_copy1

0xd987,	// (0x00079146) main_cset_text_pane_t2_copy1

0xd995,	// (0x00079154) main_cset_text_pane_t3_copy1

0xd9a3,	// (0x00079162) main_cset_text_pane_t4_copy1

0xd9b1,	// (0x00079170) main_cset_text_pane_t5_copy1

0xe0be,	// (0x0007987d) main_cset_text_pane_t6_copy1

0xd9cd,	// (0x0007918c) main_cset_text_pane_t7_copy1

0x71b8,	// (0x00072977) main_cset_text2_pane_t1_copy1

0x94e9,	// (0x00074ca8) main_ncimui_pane

0x392e,	// (0x0006f0ed) popup_query_ncimui_window_ParamLimits

0x392e,	// (0x0006f0ed) popup_query_ncimui_window

0xa472,	// (0x00075c31) field_cale_ev2_pane_g4_ParamLimits

0xa472,	// (0x00075c31) field_cale_ev2_pane_g4

0x5504,	// (0x00070cc3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5504,	// (0x00070cc3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007b054) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007b054) cell_video_dialer_keypad_pane_g

0x551c,	// (0x00070cdb) cell_video_dialer_keypad_pane_t1

0x9471,	// (0x00074c30) bg_popup_window_pane_cp012

0xb0e8,	// (0x000768a7) heading_pane_cp06

0xe0ea,	// (0x000798a9) ncim_query_content_pane

0x9471,	// (0x00074c30) bg_popup_heading_pane_cp01

0xe0f2,	// (0x000798b1) ncim_heading_pane_t1

0xe100,	// (0x000798bf) ncim_indicator_popup_pane

0xe112,	// (0x000798d1) ncim_query_button_pane

0xe126,	// (0x000798e5) ncim_query_content_pane_t1

0xe138,	// (0x000798f7) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007b3ba) ncim_query_content_pane_t

0xe172,	// (0x00079931) ncim_query_list_pane

0xe184,	// (0x00079943) ncim_query_popup_pane

0xe100,	// (0x000798bf) ncim_indicator_popup_pane_ParamLimits

0x762d,	// (0x00072dec) ncim_query_content_pane_g1_ParamLimits

0x762d,	// (0x00072dec) ncim_query_content_pane_g1

0xe126,	// (0x000798e5) ncim_query_content_pane_t1_ParamLimits

0xe138,	// (0x000798f7) ncim_query_content_pane_t2_ParamLimits

0x7639,	// (0x00072df8) ncim_query_content_pane_t3_ParamLimits

0x7639,	// (0x00072df8) ncim_query_content_pane_t3

0x7661,	// (0x00072e20) ncim_query_content_pane_t4_ParamLimits

0x7661,	// (0x00072e20) ncim_query_content_pane_t4

0x7689,	// (0x00072e48) ncim_query_content_pane_t5_ParamLimits

0x7689,	// (0x00072e48) ncim_query_content_pane_t5

0xe14a,	// (0x00079909) ncim_query_content_pane_t6_ParamLimits

0xe14a,	// (0x00079909) ncim_query_content_pane_t6

0xfbfb,	// (0x0007b3ba) ncim_query_content_pane_t_ParamLimits

0xe172,	// (0x00079931) ncim_query_list_pane_ParamLimits

0xe184,	// (0x00079943) ncim_query_popup_pane_ParamLimits

0xe198,	// (0x00079957) wait_bar_pane_cp04

0x9471,	// (0x00074c30) input_focus_pane_cp011

0xe1a0,	// (0x0007995f) ncim_query_popup_pane_t1

0xe1ae,	// (0x0007996d) ncim_list_query_list_pane_ParamLimits

0xe1ae,	// (0x0007996d) ncim_list_query_list_pane

0x9471,	// (0x00074c30) bg_button_pane_cp027

0xe1bb,	// (0x0007997a) ncim_query_button_pane_g1

0x9471,	// (0x00074c30) list_highlight_pane_cp012

0xe1c5,	// (0x00079984) ncim_list_query_list_pane_g1

0xe1cd,	// (0x0007998c) ncim_list_query_list_pane_t1

0x9d0e,	// (0x000754cd) cam4_indicators_pane_g3_ParamLimits

0x9d0e,	// (0x000754cd) cam4_indicators_pane_g3

0x9d8e,	// (0x0007554d) vid4_indicators_pane_g5_ParamLimits

0x9d8e,	// (0x0007554d) vid4_indicators_pane_g5

0x9e7c,	// (0x0007563b) vid4_progress_pane_g5_ParamLimits

0x9e7c,	// (0x0007563b) vid4_progress_pane_g5

0x751b,	// (0x00072cda) main_ncimui_pane_g1

0x7581,	// (0x00072d40) ncimui_group_query_pane_ParamLimits

0x7581,	// (0x00072d40) ncimui_group_query_pane

0x75c9,	// (0x00072d88) ncimui_list_pane_ParamLimits

0x75c9,	// (0x00072d88) ncimui_list_pane

0x75f0,	// (0x00072daf) ncimui_text_pane_ParamLimits

0x75f0,	// (0x00072daf) ncimui_text_pane

0x76b1,	// (0x00072e70) ncimui_text_pane_t1_ParamLimits

0x76b1,	// (0x00072e70) ncimui_text_pane_t1

0xe1db,	// (0x0007999a) ncimui_list_single_graphic_pane_ParamLimits

0xe1db,	// (0x0007999a) ncimui_list_single_graphic_pane

0x76cf,	// (0x00072e8e) ncimui_query_pane_ParamLimits

0x76cf,	// (0x00072e8e) ncimui_query_pane

0x9471,	// (0x00074c30) list_highlight_pane_cp013

0xe1eb,	// (0x000799aa) ncim_list_query_list_pane_t1_copy1

0xe1c5,	// (0x00079984) ncim_list_single_graphic_pane_g1

0xe1f9,	// (0x000799b8) ncim_query_button_pane_cp01

0xe205,	// (0x000799c4) ncim_query_entry_pane_ParamLimits

0xe205,	// (0x000799c4) ncim_query_entry_pane

0xe218,	// (0x000799d7) ncimui_query_pane_g1

0xe224,	// (0x000799e3) ncimui_query_pane_t1_ParamLimits

0xe224,	// (0x000799e3) ncimui_query_pane_t1

0xb2f7,	// (0x00076ab6) input_focus_pane_cp012

0xe23d,	// (0x000799fc) ncim_query_entry_pane_t1

0xa347,	// (0x00075b06) main_im_pane_ParamLimits

0x94e9,	// (0x00074ca8) main_mobtv_pane_ParamLimits

0x94e9,	// (0x00074ca8) main_mobtv_pane

0x72e2,	// (0x00072aa1) main_cset6_slider_pane_g18_ParamLimits

0x72e2,	// (0x00072aa1) main_cset6_slider_pane_g18

0x72ee,	// (0x00072aad) main_cset6_slider_pane_g19_ParamLimits

0x72ee,	// (0x00072aad) main_cset6_slider_pane_g19

0x76e2,	// (0x00072ea1) bg_main_mobtv_pane_ParamLimits

0x76e2,	// (0x00072ea1) bg_main_mobtv_pane

0x76f0,	// (0x00072eaf) main_mobtv_info_pane

0x76f9,	// (0x00072eb8) main_mobtv_loading_pane_ParamLimits

0x76f9,	// (0x00072eb8) main_mobtv_loading_pane

0xe24f,	// (0x00079a0e) main_mobtv_pg_channel_list_pane

0xe259,	// (0x00079a18) main_mobtv_pg_hdr_pane

0x7706,	// (0x00072ec5) main_mobtv_programe_curr_pane_ParamLimits

0x7706,	// (0x00072ec5) main_mobtv_programe_curr_pane

0x7713,	// (0x00072ed2) main_mobtv_programe_next_pane_ParamLimits

0x7713,	// (0x00072ed2) main_mobtv_programe_next_pane

0xe262,	// (0x00079a21) popup_mobtv_noti_window

0xcc7c,	// (0x0007843b) main_tv_pg_hdr_pane_g1

0xe26a,	// (0x00079a29) main_tv_pg_hdr_pane_g2

0xe272,	// (0x00079a31) main_tv_pg_hdr_pane_g3

0xe27a,	// (0x00079a39) main_tv_pg_hdr_pane_g4

0xe282,	// (0x00079a41) main_tv_pg_hdr_pane_g5

0xe28c,	// (0x00079a4b) main_tv_pg_hdr_pane_g6

0xe296,	// (0x00079a55) main_tv_pg_hdr_pane_g7

0xe2a0,	// (0x00079a5f) main_tv_pg_hdr_pane_g8

0xe2aa,	// (0x00079a69) main_tv_pg_hdr_pane_g9

0xe2b4,	// (0x00079a73) main_tv_pg_hdr_pane_g10

0xe2be,	// (0x00079a7d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007b3c7) main_tv_pg_hdr_pane_g

0xe2c8,	// (0x00079a87) main_tv_pg_hdr_pane_t1

0xe2d6,	// (0x00079a95) main_tv_pg_hdr_pane_t2

0xe2e4,	// (0x00079aa3) main_tv_pg_hdr_pane_t3

0xe2f4,	// (0x00079ab3) main_tv_pg_hdr_pane_t4

0xe304,	// (0x00079ac3) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007b3de) main_tv_pg_hdr_pane_t

0xe314,	// (0x00079ad3) single_mobtv_pg_channel_pane_ParamLimits

0xe314,	// (0x00079ad3) single_mobtv_pg_channel_pane

0xe326,	// (0x00079ae5) single_mobtv_pg_channel_table_pane

0xe32f,	// (0x00079aee) single_mobtv_pg_channel_thumb_pane

0xe338,	// (0x00079af7) single_tv_pg_channel_pane_g1

0xe341,	// (0x00079b00) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007b3e9) single_tv_pg_channel_pane_g

0xcee8,	// (0x000786a7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcee8,	// (0x000786a7) bg_single_mobtv_pg_channel_thumb_pane

0xe34a,	// (0x00079b09) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe34a,	// (0x00079b09) single_mobtv_pg_channel_thumb_pane_g1

0xe358,	// (0x00079b17) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe358,	// (0x00079b17) single_mobtv_pg_channel_thumb_pane_g2

0xe364,	// (0x00079b23) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe364,	// (0x00079b23) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007b3ee) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007b3ee) single_mobtv_pg_channel_thumb_pane_g

0xe370,	// (0x00079b2f) single_mobtv_pg_channel_thumb_pane_t1

0xe37e,	// (0x00079b3d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007b3f5) single_mobtv_pg_channel_thumb_pane_t

0xcc7c,	// (0x0007843b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc7c,	// (0x0007843b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007ae9b) bg_single_mobtv_pg_channel_table_pane_g

0xe38c,	// (0x00079b4b) single_mobtv_pg_channel_table_pane_t1

0xe39a,	// (0x00079b59) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007b3fa) single_mobtv_pg_channel_table_pane_t

0x7728,	// (0x00072ee7) main_mobtv_info_pane_g1_ParamLimits

0x7728,	// (0x00072ee7) main_mobtv_info_pane_g1

0x7746,	// (0x00072f05) main_mobtv_info_pane_t1_ParamLimits

0x7746,	// (0x00072f05) main_mobtv_info_pane_t1

0x77be,	// (0x00072f7d) main_mobtv_info_pane_t2_ParamLimits

0x77be,	// (0x00072f7d) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007b404) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007b404) main_mobtv_info_pane_t

0x784d,	// (0x0007300c) wait_bar_pane_cp05

0x785f,	// (0x0007301e) main_mobtv_loading_pane_g1_ParamLimits

0x785f,	// (0x0007301e) main_mobtv_loading_pane_g1

0x7872,	// (0x00073031) main_mobtv_loading_pane_g2_ParamLimits

0x7872,	// (0x00073031) main_mobtv_loading_pane_g2

0x787e,	// (0x0007303d) main_mobtv_loading_pane_g3_ParamLimits

0x787e,	// (0x0007303d) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007b40b) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007b40b) main_mobtv_loading_pane_g

0xe3a8,	// (0x00079b67) main_mobtv_loading_pane_t1_ParamLimits

0xe3a8,	// (0x00079b67) main_mobtv_loading_pane_t1

0xe3c0,	// (0x00079b7f) main_mobtv_loading_pane_t2_ParamLimits

0xe3c0,	// (0x00079b7f) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007b412) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007b412) main_mobtv_loading_pane_t

0x7891,	// (0x00073050) wait_bar_pane_cp06_ParamLimits

0x7891,	// (0x00073050) wait_bar_pane_cp06

0xe3e4,	// (0x00079ba3) main_mobtv_programe_curr_pane_t1

0xe3f2,	// (0x00079bb1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007b417) main_mobtv_programe_curr_pane_t

0xe400,	// (0x00079bbf) main_mobtv_programe_next_pane_t1

0xe40e,	// (0x00079bcd) main_mobtv_programe_next_pane_t2

0xe41c,	// (0x00079bdb) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007b41c) main_mobtv_programe_next_pane_t

0x9471,	// (0x00074c30) bg_popup_mobtv_noti_window_pane

0xe42a,	// (0x00079be9) popup_mobtv_noti_window_g1

0xe432,	// (0x00079bf1) popup_mobtv_noti_window_t1

0xe440,	// (0x00079bff) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007b423) popup_mobtv_noti_window_t

0xcc7c,	// (0x0007843b) bg_popup_mobtv_noti_window_pane_g1

0x94f7,	// (0x00074cb6) sc_clock_pane

0x94f7,	// (0x00074cb6) main_fs_bigclock_pane

0x6eee,	// (0x000726ad) blid2_tripm_pane_t4_ParamLimits

0x6eee,	// (0x000726ad) blid2_tripm_pane_t4

0x78a0,	// (0x0007305f) sc_clock_pane_g1_ParamLimits

0x78a0,	// (0x0007305f) sc_clock_pane_g1

0x78b2,	// (0x00073071) sc_clock_pane_t1_ParamLimits

0x78b2,	// (0x00073071) sc_clock_pane_t1

0x78d4,	// (0x00073093) sc_clock_pane_t2_ParamLimits

0x78d4,	// (0x00073093) sc_clock_pane_t2

0x78ec,	// (0x000730ab) sc_clock_pane_t3_ParamLimits

0x78ec,	// (0x000730ab) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007b428) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007b428) sc_clock_pane_t

0x8926,	// (0x000740e5) main_fs_bigclock_indicator_pane_ParamLimits

0x8926,	// (0x000740e5) main_fs_bigclock_indicator_pane

0x798c,	// (0x0007314b) main_fs_bigclock_pane_g1_ParamLimits

0x798c,	// (0x0007314b) main_fs_bigclock_pane_g1

0x8932,	// (0x000740f1) main_fs_bigclock_pane_t1_ParamLimits

0x8932,	// (0x000740f1) main_fs_bigclock_pane_t1

0x8944,	// (0x00074103) main_fs_bigclock_pane_t2_ParamLimits

0x8944,	// (0x00074103) main_fs_bigclock_pane_t2

0x8958,	// (0x00074117) main_fs_bigclock_pane_t3_ParamLimits

0x8958,	// (0x00074117) main_fs_bigclock_pane_t3

0x0002,

0xfe64,	// (0x0007b623) main_fs_bigclock_pane_t_ParamLimits

0xfe64,	// (0x0007b623) main_fs_bigclock_pane_t

0xec85,	// (0x0007a444) main_fs_bigclock_indicator_pane_g1

0xe11a,	// (0x000798d9) ncim_query_content_pane_g2_ParamLimits

0xe11a,	// (0x000798d9) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007b3b5) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007b3b5) ncim_query_content_pane_g

0x7905,	// (0x000730c4) sc_clock_pane_t4_ParamLimits

0x7905,	// (0x000730c4) sc_clock_pane_t4

0x94e9,	// (0x00074ca8) main_radioblah_pane

0xd659,	// (0x00078e18) cell_call4_button_pane_t1_copy1_ParamLimits

0xd659,	// (0x00078e18) cell_call4_button_pane_t1_copy1

0x7533,	// (0x00072cf2) main_ncimui_pane_t1_ParamLimits

0x7533,	// (0x00072cf2) main_ncimui_pane_t1

0x754d,	// (0x00072d0c) main_ncimui_pane_t2_ParamLimits

0x754d,	// (0x00072d0c) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007b3ae) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007b3ae) main_ncimui_pane_t

0xe584,	// (0x00079d43) main_radioblah_anim_pane_ParamLimits

0xe584,	// (0x00079d43) main_radioblah_anim_pane

0xe595,	// (0x00079d54) main_radioblah_info_pane_ParamLimits

0xe595,	// (0x00079d54) main_radioblah_info_pane

0xe5a9,	// (0x00079d68) main_radioblah_pane_t1_ParamLimits

0xe5a9,	// (0x00079d68) main_radioblah_pane_t1

0xe5c5,	// (0x00079d84) main_radioblah_pane_t2_ParamLimits

0xe5c5,	// (0x00079d84) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007b449) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007b449) main_radioblah_pane_t

0x79e4,	// (0x000731a3) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79e4,	// (0x000731a3) main_radioblah_rocker_ctrl_pane

0xe62d,	// (0x00079dec) main_radioblah_info_pane_t1_ParamLimits

0xe62d,	// (0x00079dec) main_radioblah_info_pane_t1

0x7a3c,	// (0x000731fb) main_radioblah_info_pane_t2_ParamLimits

0x7a3c,	// (0x000731fb) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007b452) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007b452) main_radioblah_info_pane_t

0xcc7c,	// (0x0007843b) main_radioblah_rocker_ctrl_pane_g1

0x7aec,	// (0x000732ab) main_radioblah_rocker_ctrl_pane_g2

0x7af4,	// (0x000732b3) main_radioblah_rocker_ctrl_pane_g3

0x7afc,	// (0x000732bb) main_radioblah_rocker_ctrl_pane_g4

0x7b04,	// (0x000732c3) main_radioblah_rocker_ctrl_pane_g5

0x7b0c,	// (0x000732cb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007b45b) main_radioblah_rocker_ctrl_pane_g

0x71b8,	// (0x00072977) main_cset_text2_pane_t1_copy1_ParamLimits

0x9cd0,	// (0x0007548f) cam4_image_uncrop_qvga_pane

0x9d37,	// (0x000754f6) vid4_image_uncrop_qcif_pane

0x9eb2,	// (0x00075671) cam6_image_uncrop_qvga_pane_ParamLimits

0x9eb2,	// (0x00075671) cam6_image_uncrop_qvga_pane

0xde2f,	// (0x000795ee) vid6_image_uncrop_qcif_pane_ParamLimits

0xde2f,	// (0x000795ee) vid6_image_uncrop_qcif_pane

0x9471,	// (0x00074c30) bg_popup_preview_window_pane_cp03

0xe0cc,	// (0x0007988b) list_cset_text2_pane

0xe0d4,	// (0x00079893) main_cset6_text2_pane_g1

0xe0dc,	// (0x0007989b) main_cset6_text2_pane_t1

0x7b14,	// (0x000732d3) list_cset_text2_pane_t1_ParamLimits

0x7b14,	// (0x000732d3) list_cset_text2_pane_t1

0x94e9,	// (0x00074ca8) main_radioblah_pane_ParamLimits

0x7839,	// (0x00072ff8) main_mobtv_info_pane_t3_ParamLimits

0x7839,	// (0x00072ff8) main_mobtv_info_pane_t3

0x79d2,	// (0x00073191) main_radioblah_pane_g1

0x7a0c,	// (0x000731cb) main_radioblah_info_pane_g1

0x7a91,	// (0x00073250) main_radioblah_info_pane_t3_ParamLimits

0x7a91,	// (0x00073250) main_radioblah_info_pane_t3

0x2380,	// (0x0006db3f) highlight_cell_cale_month_pane_ParamLimits

0x2380,	// (0x0006db3f) highlight_cell_cale_month_pane

0x94f7,	// (0x00074cb6) main_phob_fisheye_pane

0xcfe4,	// (0x000787a3) scroll_pane_cp0031_ParamLimits

0xcfe4,	// (0x000787a3) scroll_pane_cp0031

0xdf3d,	// (0x000796fc) wait_bar_pane_cp08_ParamLimits

0x723d,	// (0x000729fc) cset_list_set_pane_copy1_ParamLimits

0xe667,	// (0x00079e26) highlight_cell_cale_month_pane_g1

0x7b2d,	// (0x000732ec) highlight_cell_cale_month_pane_t1

0xdbd2,	// (0x00079391) list_gen_pane_cp01

0xd820,	// (0x00078fdf) scroll_pane_01

0x7b3b,	// (0x000732fa) list_single_double_fisheye_pane

0x7b44,	// (0x00073303) list_double_fisheye_pane_g1_ParamLimits

0x7b44,	// (0x00073303) list_double_fisheye_pane_g1

0x7b50,	// (0x0007330f) list_double_fisheye_pane_g2_ParamLimits

0x7b50,	// (0x0007330f) list_double_fisheye_pane_g2

0x7b64,	// (0x00073323) list_double_fisheye_pane_g3_ParamLimits

0x7b64,	// (0x00073323) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007b468) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007b468) list_double_fisheye_pane_g

0x7b8d,	// (0x0007334c) list_double_fisheye_pane_t1_ParamLimits

0x7b8d,	// (0x0007334c) list_double_fisheye_pane_t1

0x7ba8,	// (0x00073367) list_double_fisheye_pane_t2_ParamLimits

0x7ba8,	// (0x00073367) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007b473) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007b473) list_double_fisheye_pane_t

0x94f7,	// (0x00074cb6) main_call5_pane

0x7930,	// (0x000730ef) sc_swipe_pane_ParamLimits

0x7930,	// (0x000730ef) sc_swipe_pane

0x7bdd,	// (0x0007339c) call5_image_pane_ParamLimits

0x7bdd,	// (0x0007339c) call5_image_pane

0x7bfa,	// (0x000733b9) call5_swipe_1_pane_ParamLimits

0x7bfa,	// (0x000733b9) call5_swipe_1_pane

0x7c0d,	// (0x000733cc) call5_swipe_2_pane_ParamLimits

0x7c0d,	// (0x000733cc) call5_swipe_2_pane

0x7c38,	// (0x000733f7) popup_call5_audio_first_window_ParamLimits

0x7c38,	// (0x000733f7) popup_call5_audio_first_window

0xcee8,	// (0x000786a7) call5_swipe_1_pane_g1_ParamLimits

0xcee8,	// (0x000786a7) call5_swipe_1_pane_g1

0xe66f,	// (0x00079e2e) call5_swipe_1_pane_g2_ParamLimits

0xe66f,	// (0x00079e2e) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007b478) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007b478) call5_swipe_1_pane_g

0xe67b,	// (0x00079e3a) call5_swipe_1_pane_t1_ParamLimits

0xe67b,	// (0x00079e3a) call5_swipe_1_pane_t1

0xcee8,	// (0x000786a7) call5_swipe_2_pane_g1_ParamLimits

0xcee8,	// (0x000786a7) call5_swipe_2_pane_g1

0xe690,	// (0x00079e4f) call5_swipe_2_pane_g2_ParamLimits

0xe690,	// (0x00079e4f) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007b47d) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007b47d) call5_swipe_2_pane_g

0xe69c,	// (0x00079e5b) call5_swipe_2_pane_t1_ParamLimits

0xe69c,	// (0x00079e5b) call5_swipe_2_pane_t1

0xe6b1,	// (0x00079e70) sc_swipe_pane_g1_ParamLimits

0xe6b1,	// (0x00079e70) sc_swipe_pane_g1

0xe6be,	// (0x00079e7d) sc_swipe_pane_g2_ParamLimits

0xe6be,	// (0x00079e7d) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007b482) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007b482) sc_swipe_pane_g

0xe6ca,	// (0x00079e89) sc_swipe_pane_t1_ParamLimits

0xe6ca,	// (0x00079e89) sc_swipe_pane_t1

0x94f7,	// (0x00074cb6) main_cmail_launcher_pane

0x7c49,	// (0x00073408) aid_size_cell_cmail_l_ParamLimits

0x7c49,	// (0x00073408) aid_size_cell_cmail_l

0x7c63,	// (0x00073422) grid_cmail_l_pane_ParamLimits

0x7c63,	// (0x00073422) grid_cmail_l_pane

0x7c7e,	// (0x0007343d) cell_cmail_l_pane_ParamLimits

0x7c7e,	// (0x0007343d) cell_cmail_l_pane

0x7ca4,	// (0x00073463) cell_cmail_l_pane_g1_ParamLimits

0x7ca4,	// (0x00073463) cell_cmail_l_pane_g1

0x7cb0,	// (0x0007346f) cell_cmail_l_pane_t1_ParamLimits

0x7cb0,	// (0x0007346f) cell_cmail_l_pane_t1

0xe6df,	// (0x00079e9e) cell_cmail_l_pane_t2_ParamLimits

0xe6df,	// (0x00079e9e) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007b487) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007b487) cell_cmail_l_pane_t

0xb2f7,	// (0x00076ab6) grid_highlight_pane_cp018_ParamLimits

0xb2f7,	// (0x00076ab6) grid_highlight_pane_cp018

0x02fa,	// (0x0006bab9) main2_pane_ParamLimits

0x02fa,	// (0x0006bab9) main2_pane

0xa3e0,	// (0x00075b9f) popup_sp_fs_action_menu_bg_pane_g1

0xa3e8,	// (0x00075ba7) popup_sp_fs_action_menu_bg_pane_g2

0xa3f0,	// (0x00075baf) popup_sp_fs_action_menu_bg_pane_g3

0xa8e2,	// (0x000760a1) popup_sp_fs_action_menu_bg_pane_g4

0xa8ea,	// (0x000760a9) popup_sp_fs_action_menu_bg_pane_g5

0xa8f2,	// (0x000760b1) popup_sp_fs_action_menu_bg_pane_g6

0xa8fa,	// (0x000760b9) popup_sp_fs_action_menu_bg_pane_g7

0xa902,	// (0x000760c1) popup_sp_fs_action_menu_bg_pane_g8

0xa90a,	// (0x000760c9) popup_sp_fs_action_menu_bg_pane_g9

0xa912,	// (0x000760d1) popup_sp_fs_action_menu_bg_pane_g10

0xa912,	// (0x000760d1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007a949) popup_sp_fs_action_menu_bg_pane_g

0x12ec,	// (0x0006caab) list_medium_line_x2_t3_g3_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x2_t3_g3_g1

0x12f8,	// (0x0006cab7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x12f8,	// (0x0006cab7) list_medium_line_x2_t3_g3_g2

0x1304,	// (0x0006cac3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1304,	// (0x0006cac3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007a9f7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007a9f7) list_medium_line_x2_t3_g3_g

0x1310,	// (0x0006cacf) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1310,	// (0x0006cacf) list_medium_line_x2_t3_g3_t1

0x1325,	// (0x0006cae4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1325,	// (0x0006cae4) list_medium_line_x2_t3_g3_t2

0x1339,	// (0x0006caf8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1339,	// (0x0006caf8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007a9fe) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007a9fe) list_medium_line_x2_t3_g3_t

0x12ec,	// (0x0006caab) list_medium_line_x2_t3_g2_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x2_t3_g2_g1

0x1304,	// (0x0006cac3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1304,	// (0x0006cac3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007aa05) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007aa05) list_medium_line_x2_t3_g2_g

0x134e,	// (0x0006cb0d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x134e,	// (0x0006cb0d) list_medium_line_x2_t3_g2_t1

0x1364,	// (0x0006cb23) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1364,	// (0x0006cb23) list_medium_line_x2_t3_g2_t2

0x1376,	// (0x0006cb35) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1376,	// (0x0006cb35) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007aa0a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007aa0a) list_medium_line_x2_t3_g2_t

0x12ec,	// (0x0006caab) list_medium_line_x2_t4_g4_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x2_t4_g4_g1

0x1393,	// (0x0006cb52) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1393,	// (0x0006cb52) list_medium_line_x2_t4_g4_g2

0x12f8,	// (0x0006cab7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x12f8,	// (0x0006cab7) list_medium_line_x2_t4_g4_g3

0x139f,	// (0x0006cb5e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x139f,	// (0x0006cb5e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007aa11) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007aa11) list_medium_line_x2_t4_g4_g

0x13ab,	// (0x0006cb6a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x13ab,	// (0x0006cb6a) list_medium_line_x2_t4_g4_t1

0x13c5,	// (0x0006cb84) list_medium_line_x2_t4_g4_t2_ParamLimits

0x13c5,	// (0x0006cb84) list_medium_line_x2_t4_g4_t2

0x13db,	// (0x0006cb9a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x13db,	// (0x0006cb9a) list_medium_line_x2_t4_g4_t3

0x13f0,	// (0x0006cbaf) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13f0,	// (0x0006cbaf) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007aa1a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007aa1a) list_medium_line_x2_t4_g4_t

0x12ec,	// (0x0006caab) list_medium_line_x2_t2_g4_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x2_t2_g4_g1

0x1393,	// (0x0006cb52) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1393,	// (0x0006cb52) list_medium_line_x2_t2_g4_g2

0x12f8,	// (0x0006cab7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x12f8,	// (0x0006cab7) list_medium_line_x2_t2_g4_g3

0x1304,	// (0x0006cac3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1304,	// (0x0006cac3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007aa81) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007aa81) list_medium_line_x2_t2_g4_g

0x23a6,	// (0x0006db65) list_medium_line_x2_t2_g4_t1_ParamLimits

0x23a6,	// (0x0006db65) list_medium_line_x2_t2_g4_t1

0x1339,	// (0x0006caf8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1339,	// (0x0006caf8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007aa8a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007aa8a) list_medium_line_x2_t2_g4_t

0x12ec,	// (0x0006caab) list_medium_line_x2_t2_g3_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x2_t2_g3_g1

0x12f8,	// (0x0006cab7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x12f8,	// (0x0006cab7) list_medium_line_x2_t2_g3_g2

0x1304,	// (0x0006cac3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1304,	// (0x0006cac3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007a9f7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007a9f7) list_medium_line_x2_t2_g3_g

0x23bb,	// (0x0006db7a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x23bb,	// (0x0006db7a) list_medium_line_x2_t2_g3_t1

0x1339,	// (0x0006caf8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1339,	// (0x0006caf8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007aa8f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007aa8f) list_medium_line_x2_t2_g3_t

0x24f8,	// (0x0006dcb7) main_sp_fs_list_pane_ParamLimits

0x24f8,	// (0x0006dcb7) main_sp_fs_list_pane

0xc765,	// (0x00077f24) sp_fs_scroll_pane_ParamLimits

0xc765,	// (0x00077f24) sp_fs_scroll_pane

0x2504,	// (0x0006dcc3) list_medium_line_x2_t3_t1

0x2514,	// (0x0006dcd3) list_medium_line_x2_t3_t2

0x2522,	// (0x0006dce1) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007aada) list_medium_line_x2_t3_t

0x2530,	// (0x0006dcef) list_medium_line_x3_t4_t1

0x2540,	// (0x0006dcff) list_medium_line_x3_t4_t2

0x254e,	// (0x0006dd0d) list_medium_line_x3_t4_t3

0x2522,	// (0x0006dce1) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007aae1) list_medium_line_x3_t4_t

0x255c,	// (0x0006dd1b) list_medium_line_x4_t5_t1

0x256c,	// (0x0006dd2b) list_medium_line_x4_t5_t2

0x254e,	// (0x0006dd0d) list_medium_line_x4_t5_t3

0x257a,	// (0x0006dd39) list_medium_line_x4_t5_t4

0x2522,	// (0x0006dce1) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007aaea) list_medium_line_x4_t5_t

0x12ec,	// (0x0006caab) list_medium_line_t4_g4_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_t4_g4_g1

0x2588,	// (0x0006dd47) list_medium_line_t4_g4_g2_ParamLimits

0x2588,	// (0x0006dd47) list_medium_line_t4_g4_g2

0x2594,	// (0x0006dd53) list_medium_line_t4_g4_g3_ParamLimits

0x2594,	// (0x0006dd53) list_medium_line_t4_g4_g3

0x1304,	// (0x0006cac3) list_medium_line_t4_g4_g4_ParamLimits

0x1304,	// (0x0006cac3) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007aaf5) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007aaf5) list_medium_line_t4_g4_g

0x25a0,	// (0x0006dd5f) list_medium_line_t4_g4_t1_ParamLimits

0x25a0,	// (0x0006dd5f) list_medium_line_t4_g4_t1

0x25b5,	// (0x0006dd74) list_medium_line_t4_g4_t2_ParamLimits

0x25b5,	// (0x0006dd74) list_medium_line_t4_g4_t2

0x25ca,	// (0x0006dd89) list_medium_line_t4_g4_t3_ParamLimits

0x25ca,	// (0x0006dd89) list_medium_line_t4_g4_t3

0x1339,	// (0x0006caf8) list_medium_line_t4_g4_t4_ParamLimits

0x1339,	// (0x0006caf8) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007aafe) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007aafe) list_medium_line_t4_g4_t

0x2692,	// (0x0006de51) chi_dic_find_pane_g1

0x36f8,	// (0x0006eeb7) main_tport_pane

0x655d,	// (0x00071d1c) list_medium_line_plain_t1

0x6605,	// (0x00071dc4) list_medium_line_t2_g2_g1_ParamLimits

0x6605,	// (0x00071dc4) list_medium_line_t2_g2_g1

0x6611,	// (0x00071dd0) list_medium_line_t2_g2_g2_ParamLimits

0x6611,	// (0x00071dd0) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007b1bf) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007b1bf) list_medium_line_t2_g2_g

0x661d,	// (0x00071ddc) list_medium_line_t2_g2_t1_ParamLimits

0x661d,	// (0x00071ddc) list_medium_line_t2_g2_t1

0x6634,	// (0x00071df3) list_medium_line_t2_g2_t2_ParamLimits

0x6634,	// (0x00071df3) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007b1c4) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007b1c4) list_medium_line_t2_g2_t

0xa567,	// (0x00075d26) aid_sp_fs_list_icon_a_sm

0xa56f,	// (0x00075d2e) aid_sp_fs_list_icon_d

0xa577,	// (0x00075d36) aid_sp_fs_text_primary

0xa580,	// (0x00075d3f) aid_sp_fs_text_secondary

0x6c9b,	// (0x0007245a) list_medium_line

0x6c9b,	// (0x0007245a) list_medium_line_g2

0x6c9b,	// (0x0007245a) list_medium_line_g3

0x6c9b,	// (0x0007245a) list_medium_line_plain

0x6c9b,	// (0x0007245a) list_medium_line_plain_t2

0x6c9b,	// (0x0007245a) list_medium_line_plain_t3

0x6c9b,	// (0x0007245a) list_medium_line_right_icon

0x6c9b,	// (0x0007245a) list_medium_line_right_iconx2

0x6c9b,	// (0x0007245a) list_medium_line_t2

0x6c9b,	// (0x0007245a) list_medium_line_t2_g2

0x6c9b,	// (0x0007245a) list_medium_line_t2_g3

0x6c9b,	// (0x0007245a) list_medium_line_t2_right_icon

0x6c9b,	// (0x0007245a) list_medium_line_t2_right_iconx2

0x6c9b,	// (0x0007245a) list_medium_line_t3

0x6c9b,	// (0x0007245a) list_medium_line_t3_g2

0x6c9b,	// (0x0007245a) list_medium_line_t3_g3

0x6c9b,	// (0x0007245a) list_medium_line_t3_right_iconx2

0x6ca4,	// (0x00072463) list_medium_line_t4_g4

0x6cad,	// (0x0007246c) list_medium_line_x2

0x6cad,	// (0x0007246c) list_medium_line_x2_t2_g2

0x6cad,	// (0x0007246c) list_medium_line_x2_t2_g3

0x6cad,	// (0x0007246c) list_medium_line_x2_t2_g4

0x6cad,	// (0x0007246c) list_medium_line_x2_t3

0x6cad,	// (0x0007246c) list_medium_line_x2_t3_g2

0x6cad,	// (0x0007246c) list_medium_line_x2_t3_g3

0x6cad,	// (0x0007246c) list_medium_line_x2_t3_g4

0x6cad,	// (0x0007246c) list_medium_line_x2_t4_g2

0x6cad,	// (0x0007246c) list_medium_line_x2_t4_g4

0x6cb6,	// (0x00072475) list_medium_line_x3

0x6cb6,	// (0x00072475) list_medium_line_x3_t4

0x6cb6,	// (0x00072475) list_medium_line_x3_t4_g4

0x6ca4,	// (0x00072463) list_medium_line_x4_t4

0x6ca4,	// (0x00072463) list_medium_line_x4_t4_g7

0x6ca4,	// (0x00072463) list_medium_line_x4_t5

0x6cbf,	// (0x0007247e) list_single_fs_dyc_pane_ParamLimits

0x6cbf,	// (0x0007247e) list_single_fs_dyc_pane

0x12ec,	// (0x0006caab) list_medium_line_x4_t4_g7_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x4_t4_g7_g1

0x7436,	// (0x00072bf5) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7436,	// (0x00072bf5) list_medium_line_x4_t4_g7_g2

0x7442,	// (0x00072c01) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7442,	// (0x00072c01) list_medium_line_x4_t4_g7_g3

0x7451,	// (0x00072c10) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7451,	// (0x00072c10) list_medium_line_x4_t4_g7_g4

0x745d,	// (0x00072c1c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x745d,	// (0x00072c1c) list_medium_line_x4_t4_g7_g5

0x746c,	// (0x00072c2b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x746c,	// (0x00072c2b) list_medium_line_x4_t4_g7_g6

0x747b,	// (0x00072c3a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x747b,	// (0x00072c3a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007b38f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007b38f) list_medium_line_x4_t4_g7_g

0x7487,	// (0x00072c46) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7487,	// (0x00072c46) list_medium_line_x4_t4_g7_t1

0x749c,	// (0x00072c5b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x749c,	// (0x00072c5b) list_medium_line_x4_t4_g7_t2

0x74b1,	// (0x00072c70) list_medium_line_x4_t4_g7_t3_ParamLimits

0x74b1,	// (0x00072c70) list_medium_line_x4_t4_g7_t3

0x74c6,	// (0x00072c85) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74c6,	// (0x00072c85) list_medium_line_x4_t4_g7_t4

0x74d8,	// (0x00072c97) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74d8,	// (0x00072c97) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007b39e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007b39e) list_medium_line_x4_t4_g7_t

0x74ea,	// (0x00072ca9) list_single_dyc_row_pane_ParamLimits

0x74ea,	// (0x00072ca9) list_single_dyc_row_pane

0x7bca,	// (0x00073389) call5_gesture_pane_ParamLimits

0x7bca,	// (0x00073389) call5_gesture_pane

0x7c20,	// (0x000733df) call5_windows_pane_ParamLimits

0x7c20,	// (0x000733df) call5_windows_pane

0x7cc6,	// (0x00073485) call5_swipe_1_pane_cp_ParamLimits

0x7cc6,	// (0x00073485) call5_swipe_1_pane_cp

0x7cd2,	// (0x00073491) call5_swipe_2_pane_cp_ParamLimits

0x7cd2,	// (0x00073491) call5_swipe_2_pane_cp

0xa9f6,	// (0x000761b5) call5_image_pane_cp

0x7cde,	// (0x0007349d) popup_call5_audio_first_window_cp_ParamLimits

0x7cde,	// (0x0007349d) popup_call5_audio_first_window_cp

0xe6b1,	// (0x00079e70) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6b1,	// (0x00079e70) call5_swipe_1_pane_g1_cp

0xe6f1,	// (0x00079eb0) call5_swipe_1_pane_g2_cp

0xe6ca,	// (0x00079e89) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6ca,	// (0x00079e89) call5_swipe_1_pane_t1_cp

0xe6b1,	// (0x00079e70) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6b1,	// (0x00079e70) call5_swipe_2_pane_g1_cp

0xe6f9,	// (0x00079eb8) call5_swipe_2_pane_g2_cp

0xe701,	// (0x00079ec0) call5_swipe_2_pane_t1_cp_ParamLimits

0xe701,	// (0x00079ec0) call5_swipe_2_pane_t1_cp

0xb2f7,	// (0x00076ab6) main_sp_fs_email_pane

0xe716,	// (0x00079ed5) main_sp_fs_listscroll_pane_te

0x7cec,	// (0x000734ab) popup_sp_fs_action_menu_pane_ParamLimits

0x7cec,	// (0x000734ab) popup_sp_fs_action_menu_pane

0xcc7c,	// (0x0007843b) bg_sp_fs_ctrlbar_pane_g1

0xd27b,	// (0x00078a3a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd28d,	// (0x00078a4c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd284,	// (0x00078a43) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc7c,	// (0x0007843b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007b48c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca61,	// (0x00078220) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca61,	// (0x00078220) bg_sp_fs_ctrlbar_ddmenu_pane

0xe71f,	// (0x00079ede) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe71f,	// (0x00079ede) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72b,	// (0x00079eea) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72b,	// (0x00079eea) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007b495) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007b495) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe737,	// (0x00079ef6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe737,	// (0x00079ef6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d30,	// (0x000734ef) list_medium_line_t2_right_icon_g1

0x7d38,	// (0x000734f7) list_medium_line_t2_right_icon_t1

0x7d48,	// (0x00073507) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007b49a) list_medium_line_t2_right_icon_t

0xc874,	// (0x00078033) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc874,	// (0x00078033) bg_sp_fs_ctrlbar_pane

0x7da2,	// (0x00073561) main_sp_fs_ctrlbar_button_pane_cp01

0x7dac,	// (0x0007356b) main_sp_fs_ctrlbar_ddmenu_pane

0xe789,	// (0x00079f48) main_sp_fs_ctrlbar_pane_g1

0xe795,	// (0x00079f54) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007b49f) main_sp_fs_ctrlbar_pane_g

0xe7a1,	// (0x00079f60) main_sp_fs_ctrlbar_pane_t1

0x7db6,	// (0x00073575) main_sp_fs_ctrlbar_pane

0x7dda,	// (0x00073599) main_sp_fs_listscroll_pane_te_cp01

0x7dfa,	// (0x000735b9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7dfa,	// (0x000735b9) popup_sp_fs_action_menu_pane_cp01

0xb2f7,	// (0x00076ab6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb2f7,	// (0x00076ab6) bg_sp_fs_highlight_list_pane_cp01

0xa589,	// (0x00075d48) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa589,	// (0x00075d48) sp_fs_action_menu_list_gene_pane_g1

0xe7d1,	// (0x00079f90) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d1,	// (0x00079f90) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007b4a9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007b4a9) sp_fs_action_menu_list_gene_pane_g

0xa598,	// (0x00075d57) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa598,	// (0x00075d57) sp_fs_action_menu_list_gene_pane_t1

0xa5b0,	// (0x00075d6f) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa5b0,	// (0x00075d6f) sp_fs_action_menu_list_gene_pane

0xe7de,	// (0x00079f9d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7de,	// (0x00079f9d) popup_sp_fs_action_menu_bg_pane

0xa5cf,	// (0x00075d8e) sp_fs_action_menu_list_pane_ParamLimits

0xa5cf,	// (0x00075d8e) sp_fs_action_menu_list_pane

0x7e2a,	// (0x000735e9) sp_fs_scroll_pane_cp01_ParamLimits

0x7e2a,	// (0x000735e9) sp_fs_scroll_pane_cp01

0x7e50,	// (0x0007360f) list_medium_line_plain_t2_t1

0x7e60,	// (0x0007361f) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007b4ae) list_medium_line_plain_t2_t

0x7e70,	// (0x0007362f) list_medium_line_plain_t3_t1

0x7e80,	// (0x0007363f) list_medium_line_plain_t3_t2

0x7e8e,	// (0x0007364d) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007b4b3) list_medium_line_plain_t3_t

0x12ec,	// (0x0006caab) list_medium_line_x2_t2_g2_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x2_t2_g2_g1

0x1304,	// (0x0006cac3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1304,	// (0x0006cac3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007aa05) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007aa05) list_medium_line_x2_t2_g2_g

0x25a0,	// (0x0006dd5f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x25a0,	// (0x0006dd5f) list_medium_line_x2_t2_g2_t1

0x1339,	// (0x0006caf8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1339,	// (0x0006caf8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007b4ba) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007b4ba) list_medium_line_x2_t2_g2_t

0x12ec,	// (0x0006caab) list_medium_line_x2_t4_g2_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x2_t4_g2_g1

0x7e9c,	// (0x0007365b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7e9c,	// (0x0007365b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007b4bf) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007b4bf) list_medium_line_x2_t4_g2_g

0x7ead,	// (0x0007366c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ead,	// (0x0007366c) list_medium_line_x2_t4_g2_t1

0x7ec4,	// (0x00073683) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ec4,	// (0x00073683) list_medium_line_x2_t4_g2_t2

0x7ed9,	// (0x00073698) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ed9,	// (0x00073698) list_medium_line_x2_t4_g2_t3

0x1339,	// (0x0006caf8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1339,	// (0x0006caf8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007b4c4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007b4c4) list_medium_line_x2_t4_g2_t

0x7eeb,	// (0x000736aa) list_medium_line_t3_right_iconx2_g1

0x7d30,	// (0x000734ef) list_medium_line_t3_right_iconx2_g2

0x7ef3,	// (0x000736b2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007b4cd) list_medium_line_t3_right_iconx2_g

0x7efd,	// (0x000736bc) list_medium_line_t3_right_iconx2_t1

0x7f0d,	// (0x000736cc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007b4d4) list_medium_line_t3_right_iconx2_t

0x12ec,	// (0x0006caab) list_medium_line_x3_t4_g4_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x3_t4_g4_g1

0x12f8,	// (0x0006cab7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x12f8,	// (0x0006cab7) list_medium_line_x3_t4_g4_g2

0x2588,	// (0x0006dd47) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2588,	// (0x0006dd47) list_medium_line_x3_t4_g4_g3

0x7f1b,	// (0x000736da) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f1b,	// (0x000736da) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007b4d9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007b4d9) list_medium_line_x3_t4_g4_g

0x7f27,	// (0x000736e6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f27,	// (0x000736e6) list_medium_line_x3_t4_g4_t1

0x7f3e,	// (0x000736fd) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f3e,	// (0x000736fd) list_medium_line_x3_t4_g4_t2

0x25b5,	// (0x0006dd74) list_medium_line_x3_t4_g4_t3_ParamLimits

0x25b5,	// (0x0006dd74) list_medium_line_x3_t4_g4_t3

0x7f59,	// (0x00073718) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f59,	// (0x00073718) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007b4e2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007b4e2) list_medium_line_x3_t4_g4_t

0x7f76,	// (0x00073735) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f76,	// (0x00073735) list_single_dyc_row_text_pane_t1

0x7fbf,	// (0x0007377e) list_single_dyc_row_text_pane_t2_ParamLimits

0x7fbf,	// (0x0007377e) list_single_dyc_row_text_pane_t2

0xa5ef,	// (0x00075dae) list_single_dyc_row_text_pane_t3_ParamLimits

0xa5ef,	// (0x00075dae) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007b4eb) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007b4eb) list_single_dyc_row_text_pane_t

0xa613,	// (0x00075dd2) list_single_dyc_row_pane_g1_ParamLimits

0xa613,	// (0x00075dd2) list_single_dyc_row_pane_g1

0xa61f,	// (0x00075dde) list_single_dyc_row_pane_g2_ParamLimits

0xa61f,	// (0x00075dde) list_single_dyc_row_pane_g2

0xa62b,	// (0x00075dea) list_single_dyc_row_pane_g3_ParamLimits

0xa62b,	// (0x00075dea) list_single_dyc_row_pane_g3

0xa637,	// (0x00075df6) list_single_dyc_row_pane_g4_ParamLimits

0xa637,	// (0x00075df6) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007b4f8) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007b4f8) list_single_dyc_row_pane_g

0xa643,	// (0x00075e02) list_single_dyc_row_text_pane_ParamLimits

0xa643,	// (0x00075e02) list_single_dyc_row_text_pane

0x9471,	// (0x00074c30) bg_sp_fs_scroll_pane

0xe7ec,	// (0x00079fab) thumb_sp_fs_scroll_pane

0x6605,	// (0x00071dc4) list_medium_line_g1_ParamLimits

0x6605,	// (0x00071dc4) list_medium_line_g1

0x80f4,	// (0x000738b3) list_medium_line_t1_ParamLimits

0x80f4,	// (0x000738b3) list_medium_line_t1

0x12ec,	// (0x0006caab) list_medium_line_x2_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x2_g1

0x12f8,	// (0x0006cab7) list_medium_line_x2_g2_ParamLimits

0x12f8,	// (0x0006cab7) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007b501) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007b501) list_medium_line_x2_g

0xa662,	// (0x00075e21) list_medium_line_x2_t1_ParamLimits

0xa662,	// (0x00075e21) list_medium_line_x2_t1

0x12ec,	// (0x0006caab) list_medium_line_x3_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x3_g1

0x12f8,	// (0x0006cab7) list_medium_line_x3_g2_ParamLimits

0x12f8,	// (0x0006cab7) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007b501) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007b501) list_medium_line_x3_g

0xa662,	// (0x00075e21) list_medium_line_x3_t1_ParamLimits

0xa662,	// (0x00075e21) list_medium_line_x3_t1

0xe7f5,	// (0x00079fb4) thumb_sp_fs_scroll_pane_g1

0xe7fe,	// (0x00079fbd) thumb_sp_fs_scroll_pane_g2

0xe807,	// (0x00079fc6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007b506) thumb_sp_fs_scroll_pane_g

0xe7f5,	// (0x00079fb4) bg_sp_fs_scroll_pane_g1

0xe7fe,	// (0x00079fbd) bg_sp_fs_scroll_pane_g2

0xe807,	// (0x00079fc6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007b506) bg_sp_fs_scroll_pane_g

0x12ec,	// (0x0006caab) list_medium_line_x2_t3_g4_g1_ParamLimits

0x12ec,	// (0x0006caab) list_medium_line_x2_t3_g4_g1

0x1393,	// (0x0006cb52) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1393,	// (0x0006cb52) list_medium_line_x2_t3_g4_g2

0x12f8,	// (0x0006cab7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x12f8,	// (0x0006cab7) list_medium_line_x2_t3_g4_g3

0x1304,	// (0x0006cac3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1304,	// (0x0006cac3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007aa81) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007aa81) list_medium_line_x2_t3_g4_g

0x8109,	// (0x000738c8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8109,	// (0x000738c8) list_medium_line_x2_t3_g4_t1

0x8123,	// (0x000738e2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8123,	// (0x000738e2) list_medium_line_x2_t3_g4_t2

0x1339,	// (0x0006caf8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1339,	// (0x0006caf8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007b50d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007b50d) list_medium_line_x2_t3_g4_t

0x6605,	// (0x00071dc4) list_medium_line_g2_g1_ParamLimits

0x6605,	// (0x00071dc4) list_medium_line_g2_g1

0x6611,	// (0x00071dd0) list_medium_line_g2_g2_ParamLimits

0x6611,	// (0x00071dd0) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007b1bf) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007b1bf) list_medium_line_g2_g

0x813d,	// (0x000738fc) list_medium_line_g2_t1_ParamLimits

0x813d,	// (0x000738fc) list_medium_line_g2_t1

0x6605,	// (0x00071dc4) list_medium_line_t3_g2_g1_ParamLimits

0x6605,	// (0x00071dc4) list_medium_line_t3_g2_g1

0x6611,	// (0x00071dd0) list_medium_line_t3_g2_g2_ParamLimits

0x6611,	// (0x00071dd0) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007b1bf) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007b1bf) list_medium_line_t3_g2_g

0x8152,	// (0x00073911) list_medium_line_t3_g2_t1_ParamLimits

0x8152,	// (0x00073911) list_medium_line_t3_g2_t1

0x8169,	// (0x00073928) list_medium_line_t3_g2_t2_ParamLimits

0x8169,	// (0x00073928) list_medium_line_t3_g2_t2

0x817e,	// (0x0007393d) list_medium_line_t3_g2_t3_ParamLimits

0x817e,	// (0x0007393d) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007b514) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007b514) list_medium_line_t3_g2_t

0x7d30,	// (0x000734ef) list_medium_line_right_icon_g1

0x8197,	// (0x00073956) list_medium_line_right_icon_t1

0x6605,	// (0x00071dc4) list_medium_line_t2_g1_ParamLimits

0x6605,	// (0x00071dc4) list_medium_line_t2_g1

0x81a5,	// (0x00073964) list_medium_line_t2_t1_ParamLimits

0x81a5,	// (0x00073964) list_medium_line_t2_t1

0x81bf,	// (0x0007397e) list_medium_line_t2_t2_ParamLimits

0x81bf,	// (0x0007397e) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007b51b) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007b51b) list_medium_line_t2_t

0x6605,	// (0x00071dc4) list_medium_line_t3_g1_ParamLimits

0x6605,	// (0x00071dc4) list_medium_line_t3_g1

0x81d8,	// (0x00073997) list_medium_line_t3_t1_ParamLimits

0x81d8,	// (0x00073997) list_medium_line_t3_t1

0x81ef,	// (0x000739ae) list_medium_line_t3_t2_ParamLimits

0x81ef,	// (0x000739ae) list_medium_line_t3_t2

0x8204,	// (0x000739c3) list_medium_line_t3_t3_ParamLimits

0x8204,	// (0x000739c3) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007b520) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007b520) list_medium_line_t3_t

0x6605,	// (0x00071dc4) list_medium_line_g3_g1_ParamLimits

0x6605,	// (0x00071dc4) list_medium_line_g3_g1

0x8216,	// (0x000739d5) list_medium_line_g3_g2_ParamLimits

0x8216,	// (0x000739d5) list_medium_line_g3_g2

0x6611,	// (0x00071dd0) list_medium_line_g3_g3_ParamLimits

0x6611,	// (0x00071dd0) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007b527) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007b527) list_medium_line_g3_g

0x8222,	// (0x000739e1) list_medium_line_g3_t1_ParamLimits

0x8222,	// (0x000739e1) list_medium_line_g3_t1

0x6605,	// (0x00071dc4) list_medium_line_t2_g3_g1_ParamLimits

0x6605,	// (0x00071dc4) list_medium_line_t2_g3_g1

0x8216,	// (0x000739d5) list_medium_line_t2_g3_g2_ParamLimits

0x8216,	// (0x000739d5) list_medium_line_t2_g3_g2

0x6611,	// (0x00071dd0) list_medium_line_t2_g3_g3_ParamLimits

0x6611,	// (0x00071dd0) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007b527) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007b527) list_medium_line_t2_g3_g

0x8237,	// (0x000739f6) list_medium_line_t2_g3_t1_ParamLimits

0x8237,	// (0x000739f6) list_medium_line_t2_g3_t1

0x8251,	// (0x00073a10) list_medium_line_t2_g3_t2_ParamLimits

0x8251,	// (0x00073a10) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007b52e) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007b52e) list_medium_line_t2_g3_t

0x6605,	// (0x00071dc4) list_medium_line_t3_g3_g1_ParamLimits

0x6605,	// (0x00071dc4) list_medium_line_t3_g3_g1

0x8216,	// (0x000739d5) list_medium_line_t3_g3_g2_ParamLimits

0x8216,	// (0x000739d5) list_medium_line_t3_g3_g2

0x6611,	// (0x00071dd0) list_medium_line_t3_g3_g3_ParamLimits

0x6611,	// (0x00071dd0) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007b527) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007b527) list_medium_line_t3_g3_g

0x826c,	// (0x00073a2b) list_medium_line_t3_g3_t1_ParamLimits

0x826c,	// (0x00073a2b) list_medium_line_t3_g3_t1

0x8280,	// (0x00073a3f) list_medium_line_t3_g3_t2_ParamLimits

0x8280,	// (0x00073a3f) list_medium_line_t3_g3_t2

0x8292,	// (0x00073a51) list_medium_line_t3_g3_t3_ParamLimits

0x8292,	// (0x00073a51) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007b533) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007b533) list_medium_line_t3_g3_t

0x7eeb,	// (0x000736aa) list_medium_line_right_iconx2_g1

0x7d30,	// (0x000734ef) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007b53a) list_medium_line_right_iconx2_g

0x82a6,	// (0x00073a65) list_medium_line_right_iconx2_t1

0x7eeb,	// (0x000736aa) list_medium_line_t2_right_iconx2_g1

0x7d30,	// (0x000734ef) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007b53a) list_medium_line_t2_right_iconx2_g

0x82b4,	// (0x00073a73) list_medium_line_t2_right_iconx2_t1

0x82c4,	// (0x00073a83) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007b53f) list_medium_line_t2_right_iconx2_t

0x82d6,	// (0x00073a95) list_medium_line_x4_t4_t1

0x82e4,	// (0x00073aa3) list_medium_line_x4_t4_t2

0x82f4,	// (0x00073ab3) list_medium_line_x4_t4_t3

0x8304,	// (0x00073ac3) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007b544) list_medium_line_x4_t4_t

0x8357,	// (0x00073b16) tport_appsw_pane_ParamLimits

0x8357,	// (0x00073b16) tport_appsw_pane

0x836f,	// (0x00073b2e) tport_contact_pane_ParamLimits

0x836f,	// (0x00073b2e) tport_contact_pane

0x8387,	// (0x00073b46) tport_listscroll_pane_ParamLimits

0x8387,	// (0x00073b46) tport_listscroll_pane

0x83a1,	// (0x00073b60) cell_tport_appsw_pane_ParamLimits

0x83a1,	// (0x00073b60) cell_tport_appsw_pane

0xd6e6,	// (0x00078ea5) tport_appsw_pane_g1_ParamLimits

0xd6e6,	// (0x00078ea5) tport_appsw_pane_g1

0xe810,	// (0x00079fcf) tport_contact_pane_g1

0xe1a0,	// (0x0007995f) tport_contact_pane_t1

0xe819,	// (0x00079fd8) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007b54d) tport_contact_pane_t

0xe827,	// (0x00079fe6) list_tport_pane

0xe830,	// (0x00079fef) scroll_pane_cp_030

0x83e9,	// (0x00073ba8) cell_tport_appsw_pane_g1

0x83f9,	// (0x00073bb8) cell_tport_appsw_pane_t1

0x8407,	// (0x00073bc6) grid_highlight_pane_cp019

0x840f,	// (0x00073bce) list_tport_double_graphic_pane_ParamLimits

0x840f,	// (0x00073bce) list_tport_double_graphic_pane

0xb2f7,	// (0x00076ab6) list_highlight_pane_cp023_ParamLimits

0xb2f7,	// (0x00076ab6) list_highlight_pane_cp023

0x841c,	// (0x00073bdb) list_tport_double_graphic_pane_g1_ParamLimits

0x841c,	// (0x00073bdb) list_tport_double_graphic_pane_g1

0x8429,	// (0x00073be8) list_tport_double_graphic_pane_t1_ParamLimits

0x8429,	// (0x00073be8) list_tport_double_graphic_pane_t1

0x843e,	// (0x00073bfd) list_tport_double_graphic_pane_t2_ParamLimits

0x843e,	// (0x00073bfd) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007b559) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007b559) list_tport_double_graphic_pane_t

0x9471,	// (0x00074c30) main_cale_note_pane

0x5dc9,	// (0x00071588) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5dc9,	// (0x00071588) cell_vitu2_function_top_wide_pane_cp01

0x784d,	// (0x0007300c) wait_bar_pane_cp05_ParamLimits

0xb2f7,	// (0x00076ab6) listscroll_cmail_pane

0xe839,	// (0x00079ff8) list_cmail_pane

0xd73e,	// (0x00078efd) list_cmail_body_pane

0x8450,	// (0x00073c0f) list_single_cmail_header_caption_pane

0x8467,	// (0x00073c26) list_single_cmail_header_detail_pane_ParamLimits

0x8467,	// (0x00073c26) list_single_cmail_header_detail_pane

0xe849,	// (0x0007a008) list_single_cmail_header_caption_pane_t1

0x8491,	// (0x00073c50) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8491,	// (0x00073c50) list_single_cmail_header_detail_pane_g1

0xa678,	// (0x00075e37) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa678,	// (0x00075e37) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007b55e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007b55e) list_single_cmail_header_detail_pane_g

0xa684,	// (0x00075e43) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa684,	// (0x00075e43) list_single_cmail_header_detail_pane_t1

0xa6e4,	// (0x00075ea3) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa6e4,	// (0x00075ea3) list_single_cmail_header_editor_pane_bg

0xe341,	// (0x00079b00) list_cmail_body_pane_g1

0xe86d,	// (0x0007a02c) list_cmail_body_pane_t1

0xd706,	// (0x00078ec5) list_single_cmail_header_editor_pane_bg_g1

0xac4f,	// (0x0007640e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd716,	// (0x00078ed5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd70e,	// (0x00078ecd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd92a,	// (0x000790e9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd736,	// (0x00078ef5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd726,	// (0x00078ee5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd72e,	// (0x00078eed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac2f,	// (0x000763ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84a9,	// (0x00073c68) calenote_gesture_pane_ParamLimits

0x84a9,	// (0x00073c68) calenote_gesture_pane

0x84c9,	// (0x00073c88) calenote_window_pane_ParamLimits

0x84c9,	// (0x00073c88) calenote_window_pane

0xe87b,	// (0x0007a03a) popup_note_window_cp01

0x84e5,	// (0x00073ca4) calenote_swipe_1_pane_ParamLimits

0x84e5,	// (0x00073ca4) calenote_swipe_1_pane

0x7cd2,	// (0x00073491) calenote_swipe_2_pane_ParamLimits

0x7cd2,	// (0x00073491) calenote_swipe_2_pane

0xe6b1,	// (0x00079e70) calenote_swipe_1_pane_g1_ParamLimits

0xe6b1,	// (0x00079e70) calenote_swipe_1_pane_g1

0xe6be,	// (0x00079e7d) calenote_swipe_1_pane_g2_ParamLimits

0xe6be,	// (0x00079e7d) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007b482) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007b482) calenote_swipe_1_pane_g

0xe88d,	// (0x0007a04c) calenote_swipe_1_pane_t1_ParamLimits

0xe88d,	// (0x0007a04c) calenote_swipe_1_pane_t1

0xe6b1,	// (0x00079e70) calenote_swipe_2_pane_g1_ParamLimits

0xe6b1,	// (0x00079e70) calenote_swipe_2_pane_g1

0xe8ac,	// (0x0007a06b) calenote_swipe_2_pane_g2_ParamLimits

0xe8ac,	// (0x0007a06b) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007b56a) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007b56a) calenote_swipe_2_pane_g

0xe8b8,	// (0x0007a077) calenote_swipe_2_pane_t1_ParamLimits

0xe8b8,	// (0x0007a077) calenote_swipe_2_pane_t1

0x9471,	// (0x00074c30) main_mup_navstr_pane

0x4a99,	// (0x00070258) main_mup3_pane_t7_ParamLimits

0x4a99,	// (0x00070258) main_mup3_pane_t7

0x9aee,	// (0x000752ad) main_mp4_pane_g6_ParamLimits

0x9aee,	// (0x000752ad) main_mp4_pane_g6

0x9c92,	// (0x00075451) main_image3_pane_t4_ParamLimits

0x9c92,	// (0x00075451) main_image3_pane_t4

0x84fa,	// (0x00073cb9) popup_navstr_preview_pane_ParamLimits

0x84fa,	// (0x00073cb9) popup_navstr_preview_pane

0x850e,	// (0x00073ccd) scroll_navstr_pane_ParamLimits

0x850e,	// (0x00073ccd) scroll_navstr_pane

0x9471,	// (0x00074c30) bg_popup_preview_window_pane_cp04

0xe8df,	// (0x0007a09e) popup_navstr_preview_pane_t1

0x8522,	// (0x00073ce1) scroll_navstr_pane_g1_ParamLimits

0x8522,	// (0x00073ce1) scroll_navstr_pane_g1

0x8536,	// (0x00073cf5) scroll_navstr_pane_t1_ParamLimits

0x8536,	// (0x00073cf5) scroll_navstr_pane_t1

0xe884,	// (0x0007a043) bg_button_pane_cp014

0xe884,	// (0x0007a043) bg_button_pane_cp030

0x7b70,	// (0x0007332f) list_double_fisheye_pane_g4_ParamLimits

0x7b70,	// (0x0007332f) list_double_fisheye_pane_g4

0x7b7c,	// (0x0007333b) list_double_fisheye_pane_g5_ParamLimits

0x7b7c,	// (0x0007333b) list_double_fisheye_pane_g5

0xc765,	// (0x00077f24) sp_fs_scroll_pane_cp03

0xe789,	// (0x00079f48) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe795,	// (0x00079f54) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007b49f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a1,	// (0x00079f60) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe841,	// (0x0007a000) sp_fs_scroll_pane_cp02

0xa935,	// (0x000760f4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa935,	// (0x000760f4) popup_sp_fs_calendar_preview_list_single_pane

0x9471,	// (0x00074c30) main_cam6_pano_pane

0x94e9,	// (0x00074ca8) main_mup3_pane_ParamLimits

0x9471,	// (0x00074c30) main_phacti_pane

0x7720,	// (0x00072edf) bg_button_pane_cp11

0x773a,	// (0x00072ef9) main_mobtv_info_pane_g2_ParamLimits

0x773a,	// (0x00072ef9) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007b3ff) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007b3ff) main_mobtv_info_pane_g

0x7917,	// (0x000730d6) sc_clock_pane_t5_ParamLimits

0x7917,	// (0x000730d6) sc_clock_pane_t5

0x79d2,	// (0x00073191) main_radioblah_pane_g1_ParamLimits

0xe5fd,	// (0x00079dbc) main_radioblah_pane_t3_ParamLimits

0xe5fd,	// (0x00079dbc) main_radioblah_pane_t3

0xe615,	// (0x00079dd4) main_radioblah_pane_t4_ParamLimits

0xe615,	// (0x00079dd4) main_radioblah_pane_t4

0x79fa,	// (0x000731b9) main_radioblah_text_pane_ParamLimits

0x79fa,	// (0x000731b9) main_radioblah_text_pane

0x7a0c,	// (0x000731cb) main_radioblah_info_pane_g1_ParamLimits

0x7aa5,	// (0x00073264) main_radioblah_info_pane_t4_ParamLimits

0x7aa5,	// (0x00073264) main_radioblah_info_pane_t4

0xb2f7,	// (0x00076ab6) main_sp_fs_calendar_pane

0x854d,	// (0x00073d0c) main_phacti_pane_g1

0x8555,	// (0x00073d14) phacti_note_pane_ParamLimits

0x8555,	// (0x00073d14) phacti_note_pane

0xe8f6,	// (0x0007a0b5) phacti_term_pane_ParamLimits

0xe8f6,	// (0x0007a0b5) phacti_term_pane

0xe90b,	// (0x0007a0ca) phacti_note_pane_t1_ParamLimits

0xe90b,	// (0x0007a0ca) phacti_note_pane_t1

0xa6fb,	// (0x00075eba) phacti_term_pane_g1

0xa703,	// (0x00075ec2) phacti_term_pane_t1_ParamLimits

0xa703,	// (0x00075ec2) phacti_term_pane_t1

0xe922,	// (0x0007a0e1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa50,	// (0x0007620f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007b574) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92a,	// (0x0007a0e9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92a,	// (0x0007a0e9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93f,	// (0x0007a0fe) aid_popup_sp_fs_bg_corner_pane

0xcc7c,	// (0x0007843b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9471,	// (0x00074c30) popup_sp_fs_calendar_preview_bg_pane

0xe947,	// (0x0007a106) popup_sp_fs_calendar_preview_list_pane

0xc874,	// (0x00078033) bg_main_sp_fs_cale_pane_ParamLimits

0xc874,	// (0x00078033) bg_main_sp_fs_cale_pane

0xa736,	// (0x00075ef5) listscroll_cale_mrui_pane_ParamLimits

0xa736,	// (0x00075ef5) listscroll_cale_mrui_pane

0xa74b,	// (0x00075f0a) listscroll_sp_fs_schedule_track_pane

0xa754,	// (0x00075f13) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa754,	// (0x00075f13) main_sp_fs_ctrlbar_pane_cp01

0xe94f,	// (0x0007a10e) main_sp_fs_ribbon_pane

0xa767,	// (0x00075f26) popup_sp_fs_cale_preview_window

0x85ca,	// (0x00073d89) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85ca,	// (0x00073d89) list_single_sp_fs_schedule_track_pane

0xb2f7,	// (0x00076ab6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb2f7,	// (0x00076ab6) bg_sp_fs_highlight_list_pane_cp03

0x85de,	// (0x00073d9d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85de,	// (0x00073d9d) list_single_sp_fs_schedule_track_pane_g1

0x85ea,	// (0x00073da9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85ea,	// (0x00073da9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007b579) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007b579) list_single_sp_fs_schedule_track_pane_g

0x85f6,	// (0x00073db5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85f6,	// (0x00073db5) list_single_sp_fs_schedule_track_pane_t1

0x8610,	// (0x00073dcf) sp_fs_schedule_track_pane_ParamLimits

0x8610,	// (0x00073dcf) sp_fs_schedule_track_pane

0xe957,	// (0x0007a116) sp_fs_schedule_track_pane_g1

0xe95f,	// (0x0007a11e) sp_fs_schedule_track_pane_g2

0xe967,	// (0x0007a126) sp_fs_schedule_track_pane_g3

0xe96f,	// (0x0007a12e) sp_fs_schedule_track_pane_g4

0xe977,	// (0x0007a136) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007b57e) sp_fs_schedule_track_pane_g

0xd706,	// (0x00078ec5) bg_sp_fs_schedule_viewer_highlight_g1

0xac4f,	// (0x0007640e) bg_sp_fs_schedule_viewer_highlight_g2

0xd70e,	// (0x00078ecd) bg_sp_fs_schedule_viewer_highlight_g3

0xd716,	// (0x00078ed5) bg_sp_fs_schedule_viewer_highlight_g4

0xd92a,	// (0x000790e9) bg_sp_fs_schedule_viewer_highlight_g5

0xd726,	// (0x00078ee5) bg_sp_fs_schedule_viewer_highlight_g6

0xd72e,	// (0x00078eed) bg_sp_fs_schedule_viewer_highlight_g7

0xd736,	// (0x00078ef5) bg_sp_fs_schedule_viewer_highlight_g8

0xac2f,	// (0x000763ee) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007b589) bg_sp_fs_schedule_viewer_highlight_g

0x9471,	// (0x00074c30) bg_main_sp_fs_ribbon_pane

0x8621,	// (0x00073de0) main_sp_fs_ribbon_pane_g1

0xe97f,	// (0x0007a13e) main_sp_fs_ribbon_pane_t1

0x862a,	// (0x00073de9) main_sp_fs_ribbon_pane_t2

0xe98e,	// (0x0007a14d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007b59c) main_sp_fs_ribbon_pane_t

0xe99d,	// (0x0007a15c) main_sp_fs_ribbon_scheduler_pane

0xe9a5,	// (0x0007a164) bg_main_sp_fs_ribbon_pane_g1

0xe9ae,	// (0x0007a16d) bg_main_sp_fs_ribbon_pane_g2

0xe9b7,	// (0x0007a176) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007b5a3) bg_main_sp_fs_ribbon_pane_g

0xe9bf,	// (0x0007a17e) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c8,	// (0x0007a187) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d1,	// (0x0007a190) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007b5aa) main_sp_fs_ribbon_scheduler_pane_g

0xe9da,	// (0x0007a199) list_cale_mrui_pane

0x8639,	// (0x00073df8) sp_fs_scroll_pane_cp07_ParamLimits

0x8639,	// (0x00073df8) sp_fs_scroll_pane_cp07

0x8655,	// (0x00073e14) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8655,	// (0x00073e14) bg_sp_fs_schedule_viewer_highlight

0xe9e7,	// (0x0007a1a6) list_single_sp_fs_schedule_track_pane_cp01

0xe9ef,	// (0x0007a1ae) list_sp_fs_schedule_track_pane

0xe9f7,	// (0x0007a1b6) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f7,	// (0x0007a1b6) sp_fs_scroll_pane_cp06

0xcc7c,	// (0x0007843b) bgmain_sp_fs_calendar_pane_g1

0x8665,	// (0x00073e24) list_single_cale_mrui_pane_ParamLimits

0x8665,	// (0x00073e24) list_single_cale_mrui_pane

0xa779,	// (0x00075f38) list_single_cale_mrui_row_pane_ParamLimits

0xa779,	// (0x00075f38) list_single_cale_mrui_row_pane

0xa786,	// (0x00075f45) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa786,	// (0x00075f45) list_single_cale_mrui_row_pane_g1

0xa7be,	// (0x00075f7d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa7be,	// (0x00075f7d) list_single_cale_mrui_row_pane_t1

0x8686,	// (0x00073e45) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8686,	// (0x00073e45) list_single_cale_mrui_row_pane_t2

0xa7d0,	// (0x00075f8f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa7d0,	// (0x00075f8f) list_single_cale_mrui_row_pane_t3

0xa7ff,	// (0x00075fbe) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa7ff,	// (0x00075fbe) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007b5b8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007b5b8) list_single_cale_mrui_row_pane_t

0x86ee,	// (0x00073ead) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86ee,	// (0x00073ead) list_single_cmail_header_editor_pane_bg_cp01

0x8714,	// (0x00073ed3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8714,	// (0x00073ed3) list_single_cmail_header_editor_pane_bg_cp02

0x8734,	// (0x00073ef3) main_radioblah_text_pane_t1_ParamLimits

0x8734,	// (0x00073ef3) main_radioblah_text_pane_t1

0xea16,	// (0x0007a1d5) cam6_indi_pane_cp01

0xea1e,	// (0x0007a1dd) cam6_mode_pane_cp01

0xea26,	// (0x0007a1e5) cam6_pano_pane

0xea2f,	// (0x0007a1ee) cam6_zoom_pane_cp01

0xea37,	// (0x0007a1f6) cam6_pano_image_pane

0xea42,	// (0x0007a201) cam6_pano_pane_g1

0xe341,	// (0x00079b00) cam6_pano_pane_g2

0xea4b,	// (0x0007a20a) cam6_pano_pane_g3

0xea54,	// (0x0007a213) cam6_pano_pane_g4

0xd268,	// (0x00078a27) cam6_pano_pane_g5

0xea5d,	// (0x0007a21c) cam6_pano_pane_g6

0xea67,	// (0x0007a226) cam6_pano_pane_g7

0xea6f,	// (0x0007a22e) cam6_pano_pane_g8

0xea78,	// (0x0007a237) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007b5c1) cam6_pano_pane_g

0x9471,	// (0x00074c30) main_browser_tag_pane

0xe8d7,	// (0x0007a096) grid_navstr_albumart_pane

0xea83,	// (0x0007a242) cell_navstr_albumart_pane_ParamLimits

0xea83,	// (0x0007a242) cell_navstr_albumart_pane

0xeaa3,	// (0x0007a262) cell_navstr_albumart_pane_g1

0xc679,	// (0x00077e38) cell_navstr_albumart_pane_g2

0xc689,	// (0x00077e48) cell_navstr_albumart_pane_g3

0xc681,	// (0x00077e40) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007b5d4) cell_navstr_albumart_pane_g

0x874e,	// (0x00073f0d) bt_list_pane_ParamLimits

0x874e,	// (0x00073f0d) bt_list_pane

0x8762,	// (0x00073f21) bt_list_pane_t1

0x8771,	// (0x00073f30) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007b5dd) bt_list_pane_t

0x9471,	// (0x00074c30) main_cale_prevew_pane

0x8780,	// (0x00073f3f) popup_cale_preview_window_ParamLimits

0x8780,	// (0x00073f3f) popup_cale_preview_window

0xb2f7,	// (0x00076ab6) bg_popup_preview_window_pane_cp05_ParamLimits

0xb2f7,	// (0x00076ab6) bg_popup_preview_window_pane_cp05

0xeaab,	// (0x0007a26a) list_cale_preview_pane_ParamLimits

0xeaab,	// (0x0007a26a) list_cale_preview_pane

0x879b,	// (0x00073f5a) list_double_cale_preview_pane_ParamLimits

0x879b,	// (0x00073f5a) list_double_cale_preview_pane

0x87ad,	// (0x00073f6c) list_single_cale_preview_pane_ParamLimits

0x87ad,	// (0x00073f6c) list_single_cale_preview_pane

0x87c3,	// (0x00073f82) list_single_cale_preview_pane_g1

0x87cb,	// (0x00073f8a) list_single_cale_preview_pane_t1_ParamLimits

0x87cb,	// (0x00073f8a) list_single_cale_preview_pane_t1

0x87e0,	// (0x00073f9f) list_double_cale_preview_pane_g1

0x87e8,	// (0x00073fa7) list_double_cale_preview_pane_t1_ParamLimits

0x87e8,	// (0x00073fa7) list_double_cale_preview_pane_t1

0x87fd,	// (0x00073fbc) list_double_cale_preview_pane_t2_ParamLimits

0x87fd,	// (0x00073fbc) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007b5e2) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007b5e2) list_double_cale_preview_pane_t

0x9471,	// (0x00074c30) main_ezdial_pane

0xb2f7,	// (0x00076ab6) main_sp_fs_email_pane_ParamLimits

0x7d5a,	// (0x00073519) cmail_ddmenu_btn01_pane_ParamLimits

0x7d5a,	// (0x00073519) cmail_ddmenu_btn01_pane

0x7d6d,	// (0x0007352c) cmail_ddmenu_btn02_pane_ParamLimits

0x7d6d,	// (0x0007352c) cmail_ddmenu_btn02_pane

0x7d90,	// (0x0007354f) cmail_ddmenu_btn03_pane_ParamLimits

0x7d90,	// (0x0007354f) cmail_ddmenu_btn03_pane

0x7db6,	// (0x00073575) main_sp_fs_ctrlbar_pane_ParamLimits

0x7dda,	// (0x00073599) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd73e,	// (0x00078efd) list_cmail_body_pane_ParamLimits

0xe857,	// (0x0007a016) bg_button_pane_cp12

0xe860,	// (0x0007a01f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe860,	// (0x0007a01f) list_single_cmail_header_detail_pane_g3

0xa6c0,	// (0x00075e7f) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa6c0,	// (0x00075e7f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007b565) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007b565) list_single_cmail_header_detail_pane_t

0xa718,	// (0x00075ed7) phacti_term_pane_t2_ParamLimits

0xa718,	// (0x00075ed7) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007b56f) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007b56f) phacti_term_pane_t

0xeab7,	// (0x0007a276) aid_size_list_single_double

0x8815,	// (0x00073fd4) popup_ezdial_listscroll_window

0x8831,	// (0x00073ff0) popup_number_entry_window_cp01

0xa9f6,	// (0x000761b5) bg_popup_call_pane_cp09

0xeac3,	// (0x0007a282) ezdial_list_pane

0xeacb,	// (0x0007a28a) scroll_pane_cp23

0xc874,	// (0x00078033) bg_button_pane_cp028_ParamLimits

0xc874,	// (0x00078033) bg_button_pane_cp028

0x883f,	// (0x00073ffe) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x883f,	// (0x00073ffe) cmail_ddmenu_btn01_pane_g1

0x884b,	// (0x0007400a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x884b,	// (0x0007400a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007b5e7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007b5e7) cmail_ddmenu_btn01_pane_g

0xead3,	// (0x0007a292) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead3,	// (0x0007a292) cmail_ddmenu_btn01_pane_t1

0xc874,	// (0x00078033) bg_button_pane_cp029_ParamLimits

0xc874,	// (0x00078033) bg_button_pane_cp029

0x885f,	// (0x0007401e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x885f,	// (0x0007401e) cmail_ddmenu_btn02_pane_g1

0x8877,	// (0x00074036) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8877,	// (0x00074036) cmail_ddmenu_btn02_pane_t1

0xb2f7,	// (0x00076ab6) bg_button_pane_cp031_ParamLimits

0xb2f7,	// (0x00076ab6) bg_button_pane_cp031

0x885f,	// (0x0007401e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x885f,	// (0x0007401e) cmail_ddmenu_btn03_pane_g1

0x8877,	// (0x00074036) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8877,	// (0x00074036) cmail_ddmenu_btn03_pane_t1

0x5640,	// (0x00070dff) cell_dialer2_keypad_pane_t1_ParamLimits

0x565a,	// (0x00070e19) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x565a,	// (0x00070e19) cell_dialer2_keypad_pane_t1_copy1

0x7579,	// (0x00072d38) ncimui_group_button_pane

0xb2f7,	// (0x00076ab6) main_sp_fs_calendar_pane_ParamLimits

0x8450,	// (0x00073c0f) list_single_cmail_header_caption_pane_ParamLimits

0xa72d,	// (0x00075eec) aid_recal_txt_sm_pane

0x9471,	// (0x00074c30) mian_recal_day_pane

0xa767,	// (0x00075f26) popup_sp_fs_cale_preview_window_ParamLimits

0xeae9,	// (0x0007a2a8) list_recal_day_pane

0xa849,	// (0x00076008) list_single_recal_day_pane_ParamLimits

0xa849,	// (0x00076008) list_single_recal_day_pane

0xeb10,	// (0x0007a2cf) list_single_recal_day_pane_g1_ParamLimits

0xeb10,	// (0x0007a2cf) list_single_recal_day_pane_g1

0xa85b,	// (0x0007601a) list_single_recal_day_pane_g2_ParamLimits

0xa85b,	// (0x0007601a) list_single_recal_day_pane_g2

0xa86b,	// (0x0007602a) list_single_recal_day_pane_g3_ParamLimits

0xa86b,	// (0x0007602a) list_single_recal_day_pane_g3

0x889b,	// (0x0007405a) list_single_recal_day_pane_g4_ParamLimits

0x889b,	// (0x0007405a) list_single_recal_day_pane_g4

0xa877,	// (0x00076036) list_single_recal_day_pane_g5_ParamLimits

0xa877,	// (0x00076036) list_single_recal_day_pane_g5

0xa887,	// (0x00076046) list_single_recal_day_pane_g6_ParamLimits

0xa887,	// (0x00076046) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007b5f6) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007b5f6) list_single_recal_day_pane_g

0xa89b,	// (0x0007605a) list_single_recal_day_pane_t1

0xa8ad,	// (0x0007606c) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007b601) list_single_recal_day_pane_t

0x88bb,	// (0x0007407a) ncimui_query_button_pane_ParamLimits

0x88bb,	// (0x0007407a) ncimui_query_button_pane

0x88cb,	// (0x0007408a) ncimui_query_button_pane_t1_ParamLimits

0x88cb,	// (0x0007408a) ncimui_query_button_pane_t1

0xeb1c,	// (0x0007a2db) ncimui_query_button_pane_t2_ParamLimits

0xeb1c,	// (0x0007a2db) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007b606) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007b606) ncimui_query_button_pane_t

0x88de,	// (0x0007409d) query_button_pane_ParamLimits

0x88de,	// (0x0007409d) query_button_pane

0x9471,	// (0x00074c30) bg_button_pane_cp0028

0xeb2f,	// (0x0007a2ee) query_button_pane_t1

0x36f8,	// (0x0006eeb7) main_tport_pane_ParamLimits

0x8314,	// (0x00073ad3) bg_popup_window_pane_cp01_ParamLimits

0x8314,	// (0x00073ad3) bg_popup_window_pane_cp01

0x832f,	// (0x00073aee) heading_pane_cp08_ParamLimits

0x832f,	// (0x00073aee) heading_pane_cp08

0x8342,	// (0x00073b01) heading_pane_cp07_ParamLimits

0x8342,	// (0x00073b01) heading_pane_cp07

0x83e9,	// (0x00073ba8) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007b552) cell_tport_appsw_pane_g

0xa3f8,	// (0x00075bb7) input_candi_list_open_g1

0xae12,	// (0x000765d1) list_cale_time_pane_g6_ParamLimits

0xae12,	// (0x000765d1) list_cale_time_pane_g6

0x44c1,	// (0x0006fc80) aid_size_touch_calib_1_ParamLimits

0x44c1,	// (0x0006fc80) aid_size_touch_calib_1

0x44d3,	// (0x0006fc92) aid_size_touch_calib_2_ParamLimits

0x44d3,	// (0x0006fc92) aid_size_touch_calib_2

0x44eb,	// (0x0006fcaa) aid_size_touch_calib_3_ParamLimits

0x44eb,	// (0x0006fcaa) aid_size_touch_calib_3

0x4509,	// (0x0006fcc8) aid_size_touch_calib_4_ParamLimits

0x4509,	// (0x0006fcc8) aid_size_touch_calib_4

0x4521,	// (0x0006fce0) main_touch_calib_button_group_pane_ParamLimits

0x4521,	// (0x0006fce0) main_touch_calib_button_group_pane

0x4539,	// (0x0006fcf8) main_touch_calib_pane_g1_ParamLimits

0x454b,	// (0x0006fd0a) main_touch_calib_pane_g2_ParamLimits

0x455d,	// (0x0006fd1c) main_touch_calib_pane_g3_ParamLimits

0x456f,	// (0x0006fd2e) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0007af10) main_touch_calib_pane_g_ParamLimits

0x4581,	// (0x0006fd40) main_touch_calib_pane_t1_ParamLimits

0x459b,	// (0x0006fd5a) main_touch_calib_pane_t2_ParamLimits

0x45b5,	// (0x0006fd74) main_touch_calib_pane_t3_ParamLimits

0x45c9,	// (0x0006fd88) main_touch_calib_pane_t4_ParamLimits

0x45dd,	// (0x0006fd9c) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0007af19) main_touch_calib_pane_t_ParamLimits

0xd008,	// (0x000787c7) list_single_fp_cale_pane_g3_ParamLimits

0xd008,	// (0x000787c7) list_single_fp_cale_pane_g3

0x94e9,	// (0x00074ca8) bg_button_pane_cp012_ParamLimits

0x94e9,	// (0x00074ca8) bg_vkb2_func_pane_cp03_ParamLimits

0x65bb,	// (0x00071d7a) cell_vitu2_function_top_pane_g1_ParamLimits

0x94e9,	// (0x00074ca8) bg_vkb2_func_pane_cp04_ParamLimits

0x7507,	// (0x00072cc6) main_ncimui_button_group_pane_ParamLimits

0x7507,	// (0x00072cc6) main_ncimui_button_group_pane

0x7567,	// (0x00072d26) main_ncimui_pane_t3_ParamLimits

0x7567,	// (0x00072d26) main_ncimui_pane_t3

0xe8ed,	// (0x0007a0ac) phacti_button_group_pane

0xeab7,	// (0x0007a276) aid_size_list_single_double_ParamLimits

0x8815,	// (0x00073fd4) popup_ezdial_listscroll_window_ParamLimits

0x8831,	// (0x00073ff0) popup_number_entry_window_cp01_ParamLimits

0x88f1,	// (0x000740b0) phacti_button_pane_ParamLimits

0x88f1,	// (0x000740b0) phacti_button_pane

0x9471,	// (0x00074c30) bg_button_pane_cp14

0xeb3d,	// (0x0007a2fc) phacti_button_pane_t1

0x8902,	// (0x000740c1) main_touch_calib_button_pane_ParamLimits

0x8902,	// (0x000740c1) main_touch_calib_button_pane

0xa347,	// (0x00075b06) bg_button_pane_cp18_ParamLimits

0xa347,	// (0x00075b06) bg_button_pane_cp18

0xeb4b,	// (0x0007a30a) main_touch_calib_button_pane_t1_ParamLimits

0xeb4b,	// (0x0007a30a) main_touch_calib_button_pane_t1

0xeb61,	// (0x0007a320) main_touch_calib_button_pane_t2_ParamLimits

0xeb61,	// (0x0007a320) main_touch_calib_button_pane_t2

0x0001,

0x0032,	// (0x0006b7f1) main_touch_calib_button_pane_t_ParamLimits

0x0032,	// (0x0006b7f1) main_touch_calib_button_pane_t

0x9471,	// (0x00074c30) cell_ncimui_button_pane

0x9471,	// (0x00074c30) bg_button_pane_cp032

0xeb7f,	// (0x0007a33e) cell_ncimui_button_pane_t1

0x9c72,	// (0x00075431) image3_infobar_pane_ParamLimits

0x9c72,	// (0x00075431) image3_infobar_pane

0x7943,	// (0x00073102) fs_bigclock_status_pane_ParamLimits

0x7943,	// (0x00073102) fs_bigclock_status_pane

0x7950,	// (0x0007310f) main_fs_bigclock_clock_pane_ParamLimits

0x7950,	// (0x0007310f) main_fs_bigclock_clock_pane

0x7970,	// (0x0007312f) main_fs_bigclock_indi_pane_ParamLimits

0x7970,	// (0x0007312f) main_fs_bigclock_indi_pane

0x799a,	// (0x00073159) main_fs_bigclock_swipe_pane_ParamLimits

0x799a,	// (0x00073159) main_fs_bigclock_swipe_pane

0x9471,	// (0x00074c30) main_fs_clock_dumped_data

0xe44e,	// (0x00079c0d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe44e,	// (0x00079c0d) list_single_fs_bigclock_indicator_pane_g1

0xe469,	// (0x00079c28) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe469,	// (0x00079c28) list_single_fs_bigclock_indicator_pane_g2

0xe483,	// (0x00079c42) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe483,	// (0x00079c42) list_single_fs_bigclock_indicator_pane_g3

0xe49d,	// (0x00079c5c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe49d,	// (0x00079c5c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007b433) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007b433) list_single_fs_bigclock_indicator_pane_g

0xe4c8,	// (0x00079c87) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4c8,	// (0x00079c87) list_single_fs_bigclock_indicator_pane_t1

0xe4f0,	// (0x00079caf) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4f0,	// (0x00079caf) list_single_fs_bigclock_indicator_pane_t2

0xe518,	// (0x00079cd7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe518,	// (0x00079cd7) list_single_fs_bigclock_indicator_pane_t3

0xe540,	// (0x00079cff) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe540,	// (0x00079cff) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007b43e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007b43e) list_single_fs_bigclock_indicator_pane_t

0xeb8d,	// (0x0007a34c) image3_infobar_fav_pane_ParamLimits

0xeb8d,	// (0x0007a34c) image3_infobar_fav_pane

0xeb9d,	// (0x0007a35c) image3_infobar_loc_pane_ParamLimits

0xeb9d,	// (0x0007a35c) image3_infobar_loc_pane

0xebb1,	// (0x0007a370) image3_infobar_time_pane_ParamLimits

0xebb1,	// (0x0007a370) image3_infobar_time_pane

0xcc7c,	// (0x0007843b) image3_infobar_time_pane_g1

0xebc1,	// (0x0007a380) image3_infobar_time_pane_t1

0xcc7c,	// (0x0007843b) image3_infobar_loc_pane_g1

0xebcf,	// (0x0007a38e) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0007b60b) image3_infobar_loc_pane_g

0xebd7,	// (0x0007a396) image3_infobar_loc_pane_t1

0xcc7c,	// (0x0007843b) image3_infobar_fav_pane_g1

0xebe5,	// (0x0007a3a4) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0007b610) image3_infobar_fav_pane_g

0xebed,	// (0x0007a3ac) fs_bigclock_status_battery_pane

0xebf6,	// (0x0007a3b5) fs_bigclock_status_signal_pane

0xebff,	// (0x0007a3be) fs_bigclock_status_title_pane

0xec08,	// (0x0007a3c7) fs_bigclock_status_signal_pane_g1

0xec11,	// (0x0007a3d0) fs_bigclock_status_signal_pane_g2

0x0001,

0x0037,	// (0x0006b7f6) fs_bigclock_status_signal_pane_g

0xec19,	// (0x0007a3d8) fs_bigclock_status_battery_pane_g1

0xec22,	// (0x0007a3e1) fs_bigclock_status_battery_pane_g2

0x0001,

0x003c,	// (0x0006b7fb) fs_bigclock_status_battery_pane_g

0xec2a,	// (0x0007a3e9) fs_bigclock_status_title_pane_t1

0xcc7c,	// (0x0007843b) main_fs_bigclock_clock_pane_g1

0xec38,	// (0x0007a3f7) main_fs_bigclock_clock_pane_g2

0xec41,	// (0x0007a400) main_fs_bigclock_clock_pane_g3

0xec41,	// (0x0007a400) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe56,	// (0x0007b615) main_fs_bigclock_clock_pane_g

0xec49,	// (0x0007a408) main_fs_bigclock_clock_pane_t1

0x8917,	// (0x000740d6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5f,	// (0x0007b61e) main_fs_bigclock_clock_pane_t

0xec57,	// (0x0007a416) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec57,	// (0x0007a416) list_single_fs_bigclock_indicator_pane

0xec68,	// (0x0007a427) list_single_fs_bigclock_pane_ParamLimits

0xec68,	// (0x0007a427) list_single_fs_bigclock_pane

0xec8e,	// (0x0007a44d) main_fs_bigclock_indicator_pane_t1

0xec9d,	// (0x0007a45c) list_single_fs_bigclock_pane_g1

0xeca5,	// (0x0007a464) list_single_fs_bigclock_pane_t1

0xcc7c,	// (0x0007843b) main_fs_bigclock_swipe_pane_g1

0xece8,	// (0x0007a4a7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6b,	// (0x0007b62a) main_fs_bigclock_swipe_pane_g

0xecf0,	// (0x0007a4af) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf0,	// (0x0007a4af) main_fs_bigclock_swipe_pane_t1

0x25df,	// (0x0006dd9e) call_type_pane_ParamLimits

0x9471,	// (0x00074c30) main_btmg_pane

0xa7b2,	// (0x00075f71) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa7b2,	// (0x00075f71) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007b5b1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007b5b1) list_single_cale_mrui_row_pane_g

0xa838,	// (0x00075ff7) list_recal_vselct_arw_lo_pane

0xeb08,	// (0x0007a2c7) list_recal_vselct_arw_up_pane

0xa840,	// (0x00075fff) list_recal_vselct_pane

0x896a,	// (0x00074129) btmg_button_pane

0x8974,	// (0x00074133) main_btmg_pane_g1

0x9471,	// (0x00074c30) bg_button_pane_cp044

0xed0d,	// (0x0007a4cc) btmg_button_pane_t1

0xc860,	// (0x0007801f) aid_listscroll_gen

0xb2f7,	// (0x00076ab6) main_cntbar_detail_pane

0xe839,	// (0x00079ff8) list_cmail_folder_pane

0xc765,	// (0x00077f24) sp_fs_scroll_pane_cp03_ParamLimits

0x897e,	// (0x0007413d) list_single_fs_dyc_pane_cp01_ParamLimits

0x897e,	// (0x0007413d) list_single_fs_dyc_pane_cp01

0xed1b,	// (0x0007a4da) aid_size_cmail_indent

0xa8bf,	// (0x0007607e) list_single_dyc_row_pane_cp01

0x89c7,	// (0x00074186) cntbar_detail_list_pane_ParamLimits

0x89c7,	// (0x00074186) cntbar_detail_list_pane

0x8a13,	// (0x000741d2) main_cntbar_detail_cont_pane_ParamLimits

0x8a13,	// (0x000741d2) main_cntbar_detail_cont_pane

0xc765,	// (0x00077f24) scroll_pane_cp032_ParamLimits

0xc765,	// (0x00077f24) scroll_pane_cp032

0x8a27,	// (0x000741e6) cntbar_detail_list_event_pane_ParamLimits

0x8a27,	// (0x000741e6) cntbar_detail_list_event_pane

0x89d7,	// (0x00074196) cntbar_detail_list_shct_pane

0xac9d,	// (0x0007645c) aid_list_gen

0xed24,	// (0x0007a4e3) aid_scroll

0xed2d,	// (0x0007a4ec) aid_size_touch_scroll_bar

0x6cad,	// (0x0007246c) aid_list_double

0x6c9b,	// (0x0007245a) aid_list_single

0x6c9b,	// (0x0007245a) aid_list_single_lg

0x8a37,	// (0x000741f6) aid_list_z_g_a_sm

0x8a3f,	// (0x000741fe) aid_list_z_g_d

0x8a47,	// (0x00074206) aid_txt_z_prm

0x8a55,	// (0x00074214) aid_txt_z_prm_cp01

0x8a63,	// (0x00074222) aid_txt_z_sec

0x8a71,	// (0x00074230) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a71,	// (0x00074230) main_cntbar_detail_cont_pane_g1

0x8a85,	// (0x00074244) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a85,	// (0x00074244) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe70,	// (0x0007b62f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe70,	// (0x0007b62f) main_cntbar_detail_cont_pane_g

0xed36,	// (0x0007a4f5) main_cntbar_detail_cont_pane_t1

0xed44,	// (0x0007a503) main_cntbar_detail_cont_pane_t2

0xed52,	// (0x0007a511) main_cntbar_detail_cont_pane_t3

0x0002,

0x0057,	// (0x0006b816) main_cntbar_detail_cont_pane_t

0x8a95,	// (0x00074254) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a95,	// (0x00074254) cell_cntbar_detail_list_shct_pane

0xed60,	// (0x0007a51f) cntbar_detail_list_shct_pane_g1

0xed69,	// (0x0007a528) cntbar_detail_list_shct_pane_g2

0x0001,

0x005e,	// (0x0006b81d) cntbar_detail_list_shct_pane_g

0x8aa9,	// (0x00074268) cntbar_detail_list_event_pane_g1_ParamLimits

0x8aa9,	// (0x00074268) cntbar_detail_list_event_pane_g1

0x8ab5,	// (0x00074274) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ab5,	// (0x00074274) cntbar_detail_list_event_pane_g2

0x0005,

0xfe75,	// (0x0007b634) cntbar_detail_list_event_pane_g_ParamLimits

0xfe75,	// (0x0007b634) cntbar_detail_list_event_pane_g

0x8b21,	// (0x000742e0) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b21,	// (0x000742e0) cntbar_detail_list_event_pane_t1

0x8b36,	// (0x000742f5) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b36,	// (0x000742f5) cntbar_detail_list_event_pane_t2

0x0002,

0xfe82,	// (0x0007b641) cntbar_detail_list_event_pane_t_ParamLimits

0xfe82,	// (0x0007b641) cntbar_detail_list_event_pane_t

0xcc7c,	// (0x0007843b) cell_cntbar_detail_list_shct_pane_g1

0xb422,	// (0x00076be1) navi_pane_mv_g3

0xb2f7,	// (0x00076ab6) main_cntbar_detail_pane_ParamLimits

0x9471,	// (0x00074c30) main_notif_wgt_pane

0x9a88,	// (0x00075247) aid_tch_main_mp4_pane_g4

0x9c6a,	// (0x00075429) popup_slider_window_cp02

0xa82e,	// (0x00075fed) list_recal_day_event_pane

0x8995,	// (0x00074154) cntbar_detail_btn_pane_ParamLimits

0x8995,	// (0x00074154) cntbar_detail_btn_pane

0x89ae,	// (0x0007416d) cntbar_detail_btn_pane_cp01_ParamLimits

0x89ae,	// (0x0007416d) cntbar_detail_btn_pane_cp01

0x89d7,	// (0x00074196) cntbar_detail_list_shct_pane_ParamLimits

0x89e7,	// (0x000741a6) cntbar_detail_pane_g1_ParamLimits

0x89e7,	// (0x000741a6) cntbar_detail_pane_g1

0x89f7,	// (0x000741b6) cntbar_detail_pane_t1_ParamLimits

0x89f7,	// (0x000741b6) cntbar_detail_pane_t1

0x8ac1,	// (0x00074280) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ac1,	// (0x00074280) cntbar_detail_list_event_pane_g3

0x8ad9,	// (0x00074298) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ad9,	// (0x00074298) cntbar_detail_list_event_pane_g4

0x8af1,	// (0x000742b0) cntbar_detail_list_event_pane_g5_ParamLimits

0x8af1,	// (0x000742b0) cntbar_detail_list_event_pane_g5

0x8b09,	// (0x000742c8) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b09,	// (0x000742c8) cntbar_detail_list_event_pane_g6

0x8b4b,	// (0x0007430a) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b4b,	// (0x0007430a) cntbar_detail_list_event_pane_t3

0x8b5d,	// (0x0007431c) popup_notif_wgt_window_ParamLimits

0x8b5d,	// (0x0007431c) popup_notif_wgt_window

0x8b76,	// (0x00074335) popup_submenu_window_cp01_ParamLimits

0x8b76,	// (0x00074335) popup_submenu_window_cp01

0xa9f6,	// (0x000761b5) bg_popup_window_pane_cp10

0xed72,	// (0x0007a531) listscroll_notif_wgt_pane

0xed84,	// (0x0007a543) list_notif_wgt_window

0xed8d,	// (0x0007a54c) scroll_pane_cp033

0x8b8c,	// (0x0007434b) list_notif_wgt_row_pane_ParamLimits

0x8b8c,	// (0x0007434b) list_notif_wgt_row_pane

0xed96,	// (0x0007a555) aid_size_list_notif_wgt_del

0xeda3,	// (0x0007a562) list_notif_wgt_row_pane_g1

0xedaf,	// (0x0007a56e) list_notif_wgt_row_pane_g2

0xedc3,	// (0x0007a582) list_notif_wgt_row_pane_g3

0x0002,

0x0077,	// (0x0006b836) list_notif_wgt_row_pane_g

0xedd0,	// (0x0007a58f) list_notif_wgt_row_pane_t1

0xede6,	// (0x0007a5a5) list_notif_wgt_row_pane_t2

0xedf8,	// (0x0007a5b7) list_notif_wgt_row_pane_t3

0x0002,

0x007e,	// (0x0006b83d) list_notif_wgt_row_pane_t

0xd944,	// (0x00079103) list_recal_day_event_pane_g1

0xee0a,	// (0x0007a5c9) list_recal_day_event_pane_t1

0x9471,	// (0x00074c30) bg_button_pane_cp045

0x8b9c,	// (0x0007435b) cntbar_detail_btn_pane_t1

0xc874,	// (0x00078033) main_callh_pane_ParamLimits

0xc874,	// (0x00078033) main_callh_pane

0x9471,	// (0x00074c30) main_coverflow0_pane

0x9471,	// (0x00074c30) main_wgtman_pane

0x79b2,	// (0x00073171) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79b2,	// (0x00073171) main_fs_bigclock_unlock_btn_pane

0x83e1,	// (0x00073ba0) bg_button_pane_cp16

0x83f1,	// (0x00073bb0) cell_tport_appsw_pane_g3

0x8baa,	// (0x00074369) cf0_flow_pane_ParamLimits

0x8baa,	// (0x00074369) cf0_flow_pane

0xee19,	// (0x0007a5d8) listscroll_cf0_pane

0xee24,	// (0x0007a5e3) main_cf0_pane_g1

0x8bbf,	// (0x0007437e) main_cf0_pane_t1_ParamLimits

0x8bbf,	// (0x0007437e) main_cf0_pane_t1

0x8bd6,	// (0x00074395) main_cf0_pane_t2_ParamLimits

0x8bd6,	// (0x00074395) main_cf0_pane_t2

0x0001,

0xfe89,	// (0x0007b648) main_cf0_pane_t_ParamLimits

0xfe89,	// (0x0007b648) main_cf0_pane_t

0xee36,	// (0x0007a5f5) scroll_pane_cp11

0x8bed,	// (0x000743ac) cf0_flow_pane_g1

0x8bf5,	// (0x000743b4) cf0_flow_pane_g2

0x0001,

0xfe8e,	// (0x0007b64d) cf0_flow_pane_g

0x8bfd,	// (0x000743bc) cf0_flow_pane_t1

0x9471,	// (0x00074c30) main_call6_pane

0x9471,	// (0x00074c30) main_calllock_pane

0x8c0b,	// (0x000743ca) call6_btn_grp_pane_ParamLimits

0x8c0b,	// (0x000743ca) call6_btn_grp_pane

0x8c25,	// (0x000743e4) call6_pane_g1_ParamLimits

0x8c25,	// (0x000743e4) call6_pane_g1

0x8c3a,	// (0x000743f9) popup_call6_1st_window_ParamLimits

0x8c3a,	// (0x000743f9) popup_call6_1st_window

0x8c4b,	// (0x0007440a) popup_call6_2nd_window_ParamLimits

0x8c4b,	// (0x0007440a) popup_call6_2nd_window

0x8c5c,	// (0x0007441b) cell_call6_btn_pane_ParamLimits

0x8c5c,	// (0x0007441b) cell_call6_btn_pane

0xa9f6,	// (0x000761b5) bg_popup_call2_in_pane_cp03

0xee41,	// (0x0007a600) popup_call6_1st_window_g1

0xee49,	// (0x0007a608) popup_call6_1st_window_g2

0xee51,	// (0x0007a610) popup_call6_1st_window_g3

0x0002,

0x0094,	// (0x0006b853) popup_call6_1st_window_g

0xee59,	// (0x0007a618) popup_call6_1st_window_t1

0xee68,	// (0x0007a627) popup_call6_1st_window_t2

0xee78,	// (0x0007a637) popup_call6_1st_window_t3

0x0002,

0x009b,	// (0x0006b85a) popup_call6_1st_window_t

0xa9f6,	// (0x000761b5) bg_popup_call2_in_pane_cp04

0xee41,	// (0x0007a600) popup_call6_2nd_window_g1

0xee49,	// (0x0007a608) popup_call6_2nd_window_g2

0xee51,	// (0x0007a610) popup_call6_2nd_window_g3

0x0002,

0x0094,	// (0x0006b853) popup_call6_2nd_window_g

0xee59,	// (0x0007a618) popup_call6_2nd_window_t1

0x9471,	// (0x00074c30) bg_button_pane_cp15

0xee88,	// (0x0007a647) cell_call6_btn_pane_g1

0xee91,	// (0x0007a650) cell_call6_btn_pane_t1

0x8c70,	// (0x0007442f) listscroll_wgtman_pane_ParamLimits

0x8c70,	// (0x0007442f) listscroll_wgtman_pane

0x8c91,	// (0x00074450) wgtman_btn_pane_ParamLimits

0x8c91,	// (0x00074450) wgtman_btn_pane

0xb21b,	// (0x000769da) aid_scroll_copy1

0xeea0,	// (0x0007a65f) list_wgtman_pane

0x8cd4,	// (0x00074493) wgtman_btn_pane_g1_ParamLimits

0x8cd4,	// (0x00074493) wgtman_btn_pane_g1

0x8d00,	// (0x000744bf) wgtman_btn_pane_t1_ParamLimits

0x8d00,	// (0x000744bf) wgtman_btn_pane_t1

0xeeaa,	// (0x0007a669) wgtman_btn_pane_t2_ParamLimits

0xeeaa,	// (0x0007a669) wgtman_btn_pane_t2

0x0001,

0xfe93,	// (0x0007b652) wgtman_btn_pane_t_ParamLimits

0xfe93,	// (0x0007b652) wgtman_btn_pane_t

0x8d3d,	// (0x000744fc) listrow_wgtman_pane_ParamLimits

0x8d3d,	// (0x000744fc) listrow_wgtman_pane

0x8d4f,	// (0x0007450e) listrow_wgtman_pane_g1

0x8d5c,	// (0x0007451b) listrow_wgtman_pane_g2

0x0001,

0xfe98,	// (0x0007b657) listrow_wgtman_pane_g

0x8d7a,	// (0x00074539) listrow_wgtman_pane_t1

0x8d92,	// (0x00074551) listrow_wgtman_pane_t2

0x0001,

0xfe9d,	// (0x0007b65c) listrow_wgtman_pane_t

0x8db8,	// (0x00074577) wait_bar_pane_cp09

0xeec1,	// (0x0007a680) main_calllock_btn_pane

0xeecb,	// (0x0007a68a) main_calllock_pane_g1

0x9471,	// (0x00074c30) bg_button_pane_cp17

0xeed7,	// (0x0007a696) main_calllock_btn_pane_g1

0xeee0,	// (0x0007a69f) main_calllock_btn_pane_t1

0x9471,	// (0x00074c30) main_dialer3_pane

0x9471,	// (0x00074c30) main_fmrd2_pane

0xcc7c,	// (0x0007843b) main_fs_bigclock_unlock_btn_pane_g1

0xeef7,	// (0x0007a6b6) main_fs_bigclock_unlock_btn_pane_t1

0x8dca,	// (0x00074589) area_fmrd2_info_pane_ParamLimits

0x8dca,	// (0x00074589) area_fmrd2_info_pane

0x8ddb,	// (0x0007459a) area_fmrd2_visual_pane_ParamLimits

0x8ddb,	// (0x0007459a) area_fmrd2_visual_pane

0x8de9,	// (0x000745a8) fmrd2_indi_pane_ParamLimits

0x8de9,	// (0x000745a8) fmrd2_indi_pane

0x8df6,	// (0x000745b5) area_fmrd2_visual_pane_g1

0x8dfe,	// (0x000745bd) area_fmrd2_visual_pane_t1

0x8e0e,	// (0x000745cd) area_fmrd2_visual_pane_t2

0x8e1e,	// (0x000745dd) area_fmrd2_visual_pane_t3

0x0002,

0xfea7,	// (0x0007b666) area_fmrd2_visual_pane_t

0x8e2e,	// (0x000745ed) area_fmrd2_info_pane_g1

0x8e36,	// (0x000745f5) area_fmrd2_info_pane_t1

0x8e46,	// (0x00074605) area_fmrd2_info_pane_t2

0x8e56,	// (0x00074615) area_fmrd2_info_pane_t3

0x8e66,	// (0x00074625) area_fmrd2_info_pane_t4

0x0003,

0xfeae,	// (0x0007b66d) area_fmrd2_info_pane_t

0x8e74,	// (0x00074633) fmrd2_indi_pane_t1

0x8e84,	// (0x00074643) fmrd2_indi_pane_t2

0x8e94,	// (0x00074653) fmrd2_indi_pane_t3

0x0002,

0xfeb7,	// (0x0007b676) fmrd2_indi_pane_t

0xe4ac,	// (0x00079c6b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4ac,	// (0x00079c6b) list_single_fs_bigclock_indicator_pane_g5

0xe55c,	// (0x00079d1b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe55c,	// (0x00079d1b) list_single_fs_bigclock_indicator_pane_t5

0x8569,	// (0x00073d28) aid_cell_bcale_month_pane_ParamLimits

0x8569,	// (0x00073d28) aid_cell_bcale_month_pane

0x8587,	// (0x00073d46) bcale_month_pane_ParamLimits

0x8587,	// (0x00073d46) bcale_month_pane

0x85ab,	// (0x00073d6a) bcale_preview_pane_ParamLimits

0x85ab,	// (0x00073d6a) bcale_preview_pane

0xeca5,	// (0x0007a464) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc4,	// (0x0007a483) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc4,	// (0x0007a483) list_single_fs_bigclock_pane_t2

0x0001,

0x004d,	// (0x0006b80c) list_single_fs_bigclock_pane_t_ParamLimits

0x004d,	// (0x0006b80c) list_single_fs_bigclock_pane_t

0xeeef,	// (0x0007a6ae) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfea2,	// (0x0007b661) main_fs_bigclock_unlock_btn_pane_g

0x8ea4,	// (0x00074663) aid_dia3_key_size_ParamLimits

0x8ea4,	// (0x00074663) aid_dia3_key_size

0x8eb3,	// (0x00074672) aid_dia3_listrow_size_ParamLimits

0x8eb3,	// (0x00074672) aid_dia3_listrow_size

0x8ec8,	// (0x00074687) dia3_keypad_fun_pane_ParamLimits

0x8ec8,	// (0x00074687) dia3_keypad_fun_pane

0x8ee4,	// (0x000746a3) dia3_keypad_num_pane_ParamLimits

0x8ee4,	// (0x000746a3) dia3_keypad_num_pane

0x8eff,	// (0x000746be) dia3_listscroll_pane_ParamLimits

0x8eff,	// (0x000746be) dia3_listscroll_pane

0x8f12,	// (0x000746d1) dia3_numentry_pane_ParamLimits

0x8f12,	// (0x000746d1) dia3_numentry_pane

0xef05,	// (0x0007a6c4) dia3_list_pane

0xef10,	// (0x0007a6cf) scroll_pane_cp12

0x9471,	// (0x00074c30) bg_dia3_numentry_pane

0x8f26,	// (0x000746e5) dia3_numentry_pane_t1

0x8f35,	// (0x000746f4) cell_dia3_key_num_pane

0x8f3d,	// (0x000746fc) cell_dia3_key0_fun_pane_ParamLimits

0x8f3d,	// (0x000746fc) cell_dia3_key0_fun_pane

0x8f51,	// (0x00074710) cell_dia3_key1_fun_pane_ParamLimits

0x8f51,	// (0x00074710) cell_dia3_key1_fun_pane

0x8f69,	// (0x00074728) dia3_listrow_pane

0xe1bb,	// (0x0007997a) bg_dia3_numentry_pane_g1

0x9471,	// (0x00074c30) bg_button_pane_cp21

0xef1b,	// (0x0007a6da) cell_dia3_key_num_pane_t1

0xef29,	// (0x0007a6e8) cell_dia3_key_num_pane_t2

0xef38,	// (0x0007a6f7) cell_dia3_key_num_pane_t3

0xef47,	// (0x0007a706) cell_dia3_key_num_pane_t4

0x0003,

0x00c8,	// (0x0006b887) cell_dia3_key_num_pane_t

0x9471,	// (0x00074c30) bg_button_pane_cp19

0x8f7b,	// (0x0007473a) cell_dia3_key0_fun_pane_g1

0x9471,	// (0x00074c30) bg_button_pane_cp20

0x8f83,	// (0x00074742) cell_dia3_key1_fun_pane_g1

0x8f8b,	// (0x0007474a) area_left_week_number_pane

0x8f97,	// (0x00074756) area_top_day_name_pane

0x8faa,	// (0x00074769) frame_month_view_pane

0xef56,	// (0x0007a715) grid_month_view_pane

0x8fbd,	// (0x0007477c) cell_top_day_name_pane_ParamLimits

0x8fbd,	// (0x0007477c) cell_top_day_name_pane

0x8fea,	// (0x000747a9) cell_area_left_week_number_pane_ParamLimits

0x8fea,	// (0x000747a9) cell_area_left_week_number_pane

0x8ffe,	// (0x000747bd) cell_month_view_pane_ParamLimits

0x8ffe,	// (0x000747bd) cell_month_view_pane

0xef64,	// (0x0007a723) frm_month_g1

0x902b,	// (0x000747ea) frm_month_g2

0x903e,	// (0x000747fd) frm_month_g3

0x9051,	// (0x00074810) frm_month_g4

0x9064,	// (0x00074823) frm_month_g5

0x9077,	// (0x00074836) frm_month_g6

0x908a,	// (0x00074849) frm_month_g7

0xef71,	// (0x0007a730) frm_month_g8

0x909d,	// (0x0007485c) frm_month_g9

0x90ad,	// (0x0007486c) frm_month_g10

0x90bd,	// (0x0007487c) frm_month_g11

0x90cd,	// (0x0007488c) frm_month_g12

0x90df,	// (0x0007489e) frm_month_g13

0x90f1,	// (0x000748b0) frm_month_g14

0x9105,	// (0x000748c4) frm_month_g15

0x9119,	// (0x000748d8) frm_month_g16

0x000f,

0xfebe,	// (0x0007b67d) frm_month_g

0xef7e,	// (0x0007a73d) cell_top_day_name_pane_t1

0x912d,	// (0x000748ec) cell_area_left_week_number_pane_g1

0x9139,	// (0x000748f8) cell_area_left_week_number_pane_t1

0xcee8,	// (0x000786a7) cell_month_view_pane_g1

0x914c,	// (0x0007490b) cell_month_view_pane_t1

0x9471,	// (0x00074c30) main_fps_pane

0xe751,	// (0x00079f10) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe751,	// (0x00079f10) cmail_ddmenu_btn02_pane_cp1

0xe76d,	// (0x00079f2c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76d,	// (0x00079f2c) cmail_ddmenu_btn02_pane_cp2

0x886b,	// (0x0007402a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x886b,	// (0x0007402a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007b5ec) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007b5ec) cmail_ddmenu_btn02_pane_g

0x8889,	// (0x00074048) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8889,	// (0x00074048) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007b5f1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007b5f1) cmail_ddmenu_btn02_pane_t

0x915f,	// (0x0007491e) fps_text_pane_ParamLimits

0x915f,	// (0x0007491e) fps_text_pane

0x9176,	// (0x00074935) main_fps_pane_g1_ParamLimits

0x9176,	// (0x00074935) main_fps_pane_g1

0x9190,	// (0x0007494f) wait_bar_pane_cp010_ParamLimits

0x9190,	// (0x0007494f) wait_bar_pane_cp010

0x91a1,	// (0x00074960) fps_text_pane_t1_ParamLimits

0x91a1,	// (0x00074960) fps_text_pane_t1

0xe5eb,	// (0x00079daa) cam4_image_uncrop_pane_g1

0xe5f4,	// (0x00079db3) cam4_image_uncrop_pane_g2

0x5ae6,	// (0x000712a5) cam4_image_uncrop_pane_g3

0x5aef,	// (0x000712ae) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007b0ad) cam4_image_uncrop_pane_g

0x8f69,	// (0x00074728) dia3_listrow_pane_ParamLimits

0x9471,	// (0x00074c30) main_phob2_pane

0x83b2,	// (0x00073b71) cell_tport_appsw_pane_cp02_ParamLimits

0x83b2,	// (0x00073b71) cell_tport_appsw_pane_cp02

0x83c6,	// (0x00073b85) cell_tport_appsw_pane_cp03_ParamLimits

0x83c6,	// (0x00073b85) cell_tport_appsw_pane_cp03

0x9471,	// (0x00074c30) phob2_contact_card_pane

0x9471,	// (0x00074c30) phob2_listscroll_pane

0xef91,	// (0x0007a750) phob2_list_pane

0xef99,	// (0x0007a758) scroll_pane_cp034

0x91b9,	// (0x00074978) phob2_cc_data_pane_ParamLimits

0x91b9,	// (0x00074978) phob2_cc_data_pane

0x91d8,	// (0x00074997) phob2_cc_listscroll_pane_ParamLimits

0x91d8,	// (0x00074997) phob2_cc_listscroll_pane

0x91f6,	// (0x000749b5) list_double_large_graphic_phob2_pane_ParamLimits

0x91f6,	// (0x000749b5) list_double_large_graphic_phob2_pane

0x9208,	// (0x000749c7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9208,	// (0x000749c7) list_double_large_graphic_phob2_pane_g1

0x921e,	// (0x000749dd) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x921e,	// (0x000749dd) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfedf,	// (0x0007b69e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfedf,	// (0x0007b69e) list_double_large_graphic_phob2_pane_g

0x922a,	// (0x000749e9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x922a,	// (0x000749e9) list_double_large_graphic_phob2_pane_t1

0x923f,	// (0x000749fe) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x923f,	// (0x000749fe) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee4,	// (0x0007b6a3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee4,	// (0x0007b6a3) list_double_large_graphic_phob2_pane_t

0x9471,	// (0x00074c30) list_highlight_pane_cp024

0x9251,	// (0x00074a10) phob2_cc_button_pane

0x9259,	// (0x00074a18) phob2_cc_data_pane_g1_ParamLimits

0x9259,	// (0x00074a18) phob2_cc_data_pane_g1

0x926e,	// (0x00074a2d) phob2_cc_data_pane_g2_ParamLimits

0x926e,	// (0x00074a2d) phob2_cc_data_pane_g2

0x0001,

0xfee9,	// (0x0007b6a8) phob2_cc_data_pane_g_ParamLimits

0xfee9,	// (0x0007b6a8) phob2_cc_data_pane_g

0x927e,	// (0x00074a3d) phob2_cc_data_pane_t1_ParamLimits

0x927e,	// (0x00074a3d) phob2_cc_data_pane_t1

0x9296,	// (0x00074a55) phob2_cc_data_pane_t2_ParamLimits

0x9296,	// (0x00074a55) phob2_cc_data_pane_t2

0x92ae,	// (0x00074a6d) phob2_cc_data_pane_t3_ParamLimits

0x92ae,	// (0x00074a6d) phob2_cc_data_pane_t3

0x0002,

0xfeee,	// (0x0007b6ad) phob2_cc_data_pane_t_ParamLimits

0xfeee,	// (0x0007b6ad) phob2_cc_data_pane_t

0xefa1,	// (0x0007a760) phob2_cc_list_pane_ParamLimits

0xefa1,	// (0x0007a760) phob2_cc_list_pane

0xd9db,	// (0x0007919a) scroll_pane_cp035_ParamLimits

0xd9db,	// (0x0007919a) scroll_pane_cp035

0xb2f7,	// (0x00076ab6) bg_button_pane_cp033

0xefad,	// (0x0007a76c) phob2_cc_button_pane_g1

0xefb9,	// (0x0007a778) phob2_cc_button_pane_t1

0xefce,	// (0x0007a78d) phob2_cc_button_pane_t2

0x0001,

0x0108,	// (0x0006b8c7) phob2_cc_button_pane_t

0x92c6,	// (0x00074a85) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92c6,	// (0x00074a85) list_double_large_graphic_phob2_cc_pane

0x92d8,	// (0x00074a97) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92d8,	// (0x00074a97) list_double_large_graphic_phob2_cc_pane_g1

0x92e4,	// (0x00074aa3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x92e4,	// (0x00074aa3) list_double_large_graphic_phob2_cc_pane_g2

0x92f0,	// (0x00074aaf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x92f0,	// (0x00074aaf) list_double_large_graphic_phob2_cc_pane_g3

0x92fc,	// (0x00074abb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x92fc,	// (0x00074abb) list_double_large_graphic_phob2_cc_pane_g4

0xa8c8,	// (0x00076087) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa8c8,	// (0x00076087) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfef5,	// (0x0007b6b4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfef5,	// (0x0007b6b4) list_double_large_graphic_phob2_cc_pane_g

0x9308,	// (0x00074ac7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9308,	// (0x00074ac7) list_double_large_graphic_phob2_cc_pane_t1

0x9331,	// (0x00074af0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9331,	// (0x00074af0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff00,	// (0x0007b6bf) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff00,	// (0x0007b6bf) list_double_large_graphic_phob2_cc_pane_t

0xefe0,	// (0x0007a79f) list_highlight_pane_cp025_ParamLimits

0xefe0,	// (0x0007a79f) list_highlight_pane_cp025

0xb2f7,	// (0x00076ab6) bg_button_pane_cp033_ParamLimits

0xefad,	// (0x0007a76c) phob2_cc_button_pane_g1_ParamLimits

0xefb9,	// (0x0007a778) phob2_cc_button_pane_t1_ParamLimits

0xefce,	// (0x0007a78d) phob2_cc_button_pane_t2_ParamLimits

0x0108,	// (0x0006b8c7) phob2_cc_button_pane_t_ParamLimits

0x0455,	// (0x0006bc14) popup_wgtman_window

0xd820,	// (0x00078fdf) scroll_pane_cp038

0x8cb6,	// (0x00074475) wgtman_btn_pane_cp_01_ParamLimits

0x8cb6,	// (0x00074475) wgtman_btn_pane_cp_01

0xefee,	// (0x0007a7ad) wgtman_content_pane

0xeff7,	// (0x0007a7b6) wgtman_heading_pane

0x9471,	// (0x00074c30) bg_heading_pane_cp02

0xf000,	// (0x0007a7bf) wgtman_heading_pane_g1

0xf008,	// (0x0007a7c7) wgtman_heading_pane_t1

0xf016,	// (0x0007a7d5) scroll_pane_cp036

0xf01e,	// (0x0007a7dd) wgtman_list_pane

0xf026,	// (0x0007a7e5) wgtman_list_pane_t1_ParamLimits

0xf026,	// (0x0007a7e5) wgtman_list_pane_t1

0x9cc4,	// (0x00075483) cam4_grid_pane

0x6794,	// (0x00071f53) bg_button_pane_cp015_ParamLimits

0x67a6,	// (0x00071f65) bg_button_pane_cp016_ParamLimits

0x67b9,	// (0x00071f78) bg_button_pane_cp017_ParamLimits

0x6811,	// (0x00071fd0) popup_vitu2_query_window_g3_ParamLimits

0x6811,	// (0x00071fd0) popup_vitu2_query_window_g3

0x68ce,	// (0x0007208d) popup_vitu2_query_window_t6_ParamLimits

0x68ce,	// (0x0007208d) popup_vitu2_query_window_t6

0x68f9,	// (0x000720b8) popup_vitu2_query_window_t7_ParamLimits

0x68f9,	// (0x000720b8) popup_vitu2_query_window_t7

0xe5eb,	// (0x00079daa) cam4_grid_pane_g1

0xe5f4,	// (0x00079db3) cam4_grid_pane_g2

0xf040,	// (0x0007a7ff) cam4_grid_pane_g3

0xf049,	// (0x0007a808) cam4_grid_pane_g4

0x0003,

0xff05,	// (0x0007b6c4) cam4_grid_pane_g

0x1473,	// (0x0006cc32) aid_placing_vt_slider_lsc_ParamLimits

0x177e,	// (0x0006cf3d) vidtel_button_pane_ParamLimits

0x177e,	// (0x0006cf3d) vidtel_button_pane

0xf054,	// (0x0007a813) bg_button_pane_cp034

0x935a,	// (0x00074b19) vidtel_button_pane_g1

0xf05e,	// (0x0007a81d) vidtel_button_pane_t1

0xd922,	// (0x000790e1) aid_size_vtel_slider_touch

0xd9db,	// (0x0007919a) scroll_pane_cp039

0xe1f9,	// (0x000799b8) ncim_query_button_pane_cp01_ParamLimits

0xe218,	// (0x000799d7) ncimui_query_pane_g1_ParamLimits

0xb2f7,	// (0x00076ab6) input_focus_pane_cp012_ParamLimits

0xe23d,	// (0x000799fc) ncim_query_entry_pane_t1_ParamLimits

0xd9db,	// (0x0007919a) scroll_pane_cp039_ParamLimits

0xb30d,	// (0x00076acc) navi_pane_bcale_mc_g1

0xb315,	// (0x00076ad4) navi_pane_bcale_mc_t1

0xe7b6,	// (0x00079f75) main_sp_fs_email_pane_g1

0xe7c2,	// (0x00079f81) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007b4a4) main_sp_fs_email_pane_g

0xea09,	// (0x0007a1c8) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea09,	// (0x0007a1c8) list_single_cale_mrui_row_pane_g3

0x88b1,	// (0x00074070) list_single_recal_day_pane_g5_event_pane

0xa893,	// (0x00076052) list_single_recal_day_pane_g7

0xf06c,	// (0x0007a82b) list_recal_day_event_pane_cp01

0xf075,	// (0x0007a834) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0007a83c) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0007a844) list_recal_vselct_pane_cp01

0xd944,	// (0x00079103) list_recal_day_event_pane_cp01_g1

0xa8d4,	// (0x00076093) list_recal_day_event_pane_cp01_t1

0xa89b,	// (0x0007605a) list_single_recal_day_pane_t1_ParamLimits

0xa8ad,	// (0x0007606c) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007b601) list_single_recal_day_pane_t_ParamLimits

0xa282,	// (0x00075a41) bg_notes_pane_ParamLimits

0xa325,	// (0x00075ae4) list_notes_pane_ParamLimits

0x079e,	// (0x0006bf5d) scroll_pane_cp06_ParamLimits

0xa347,	// (0x00075b06) main_notes_pane_ParamLimits

0x9471,	// (0x00074c30) main_welc_pane

0x9362,	// (0x00074b21) main_welc_body_pane_ParamLimits

0x9362,	// (0x00074b21) main_welc_body_pane

0x9380,	// (0x00074b3f) main_welc_opti_pane_ParamLimits

0x9380,	// (0x00074b3f) main_welc_opti_pane

0x93c5,	// (0x00074b84) main_welc_pane_t1_ParamLimits

0x93c5,	// (0x00074b84) main_welc_pane_t1

0x93e3,	// (0x00074ba2) main_welc_body_row_pane_ParamLimits

0x93e3,	// (0x00074ba2) main_welc_body_row_pane

0xe5dd,	// (0x00079d9c) main_welc_opti_row_pane_ParamLimits

0xe5dd,	// (0x00079d9c) main_welc_opti_row_pane

0xf08f,	// (0x0007a84e) main_welc_opti_row_pane_g1

0x93f7,	// (0x00074bb6) main_welc_opti_row_pane_t1

0xf097,	// (0x0007a856) main_welc_body_row_pane_t1

0xed7c,	// (0x0007a53b) popup_notif_wgt_heading_pane

0xed96,	// (0x0007a555) aid_size_list_notif_wgt_del_ParamLimits

0xeda3,	// (0x0007a562) list_notif_wgt_row_pane_g1_ParamLimits

0xedaf,	// (0x0007a56e) list_notif_wgt_row_pane_g2_ParamLimits

0xedc3,	// (0x0007a582) list_notif_wgt_row_pane_g3_ParamLimits

0x0077,	// (0x0006b836) list_notif_wgt_row_pane_g_ParamLimits

0xedd0,	// (0x0007a58f) list_notif_wgt_row_pane_t1_ParamLimits

0xede6,	// (0x0007a5a5) list_notif_wgt_row_pane_t2_ParamLimits

0xedf8,	// (0x0007a5b7) list_notif_wgt_row_pane_t3_ParamLimits

0x007e,	// (0x0006b83d) list_notif_wgt_row_pane_t_ParamLimits

0x8d4f,	// (0x0007450e) listrow_wgtman_pane_g1_ParamLimits

0x8d5c,	// (0x0007451b) listrow_wgtman_pane_g2_ParamLimits

0xfe98,	// (0x0007b657) listrow_wgtman_pane_g_ParamLimits

0x8d7a,	// (0x00074539) listrow_wgtman_pane_t1_ParamLimits

0x8d92,	// (0x00074551) listrow_wgtman_pane_t2_ParamLimits

0xfe9d,	// (0x0007b65c) listrow_wgtman_pane_t_ParamLimits

0x8db8,	// (0x00074577) wait_bar_pane_cp09_ParamLimits

0x9471,	// (0x00074c30) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0007a865) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0007a86d) popup_notif_wgt_heading_pane_t1

0x9471,	// (0x00074c30) main_vids_pane

0x9471,	// (0x00074c30) vids_listscroll_pane

0x9406,	// (0x00074bc5) scroll_pane_cp040

0x9471,	// (0x00074c30) vids_list_pane

0x9411,	// (0x00074bd0) vids_list_double_pane_ParamLimits

0x9411,	// (0x00074bd0) vids_list_double_pane

0x9422,	// (0x00074be1) vids_list_double_pane_g1

0x942b,	// (0x00074bea) vids_list_double_pane_t1

0x943b,	// (0x00074bfa) vids_list_double_pane_t2

0x0001,

0xff13,	// (0x0007b6d2) vids_list_double_pane_t

0x94e9,	// (0x00074ca8) main_ncimui_pane_ParamLimits

0x751b,	// (0x00072cda) main_ncimui_pane_g1_ParamLimits

0x7527,	// (0x00072ce6) main_ncimui_pane_g2_ParamLimits

0x7527,	// (0x00072ce6) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007b3a9) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007b3a9) main_ncimui_pane_g

0x939b,	// (0x00074b5a) main_welc_pane_g1_ParamLimits

0x939b,	// (0x00074b5a) main_welc_pane_g1

0x93b0,	// (0x00074b6f) main_welc_pane_g2_ParamLimits

0x93b0,	// (0x00074b6f) main_welc_pane_g2

0x0001,

0xff0e,	// (0x0007b6cd) main_welc_pane_g_ParamLimits

0xff0e,	// (0x0007b6cd) main_welc_pane_g

0xa282,	// (0x00075a41) listscroll_mce_pane_ParamLimits

0xb462,	// (0x00076c21) wait_bar_pane_cp10

0xc868,	// (0x00078027) main_cale_day_pane_ParamLimits

0xc868,	// (0x00078027) main_cale_week_pane_ParamLimits

0xa282,	// (0x00075a41) main_messa_pane_ParamLimits

0x4e22,	// (0x000705e1) main_clock2_btn_pane_ParamLimits

0x4e22,	// (0x000705e1) main_clock2_btn_pane

0xd090,	// (0x0007884f) main_clock2_btn_pane_cp01_ParamLimits

0xd090,	// (0x0007884f) main_clock2_btn_pane_cp01

0xe9da,	// (0x0007a199) list_cale_mrui_pane_ParamLimits

0xee2e,	// (0x0007a5ed) main_cf0_pane_g2

0x0001,

0x0085,	// (0x0006b844) main_cf0_pane_g

0x8f8b,	// (0x0007474a) area_left_week_number_pane_ParamLimits

0x8f97,	// (0x00074756) area_top_day_name_pane_ParamLimits

0x8faa,	// (0x00074769) frame_month_view_pane_ParamLimits

0xef56,	// (0x0007a715) grid_month_view_pane_ParamLimits

0xef64,	// (0x0007a723) frm_month_g1_ParamLimits

0x902b,	// (0x000747ea) frm_month_g2_ParamLimits

0x903e,	// (0x000747fd) frm_month_g3_ParamLimits

0x9051,	// (0x00074810) frm_month_g4_ParamLimits

0x9064,	// (0x00074823) frm_month_g5_ParamLimits

0x9077,	// (0x00074836) frm_month_g6_ParamLimits

0x908a,	// (0x00074849) frm_month_g7_ParamLimits

0xef71,	// (0x0007a730) frm_month_g8_ParamLimits

0x909d,	// (0x0007485c) frm_month_g9_ParamLimits

0x90ad,	// (0x0007486c) frm_month_g10_ParamLimits

0x90bd,	// (0x0007487c) frm_month_g11_ParamLimits

0x90cd,	// (0x0007488c) frm_month_g12_ParamLimits

0x90df,	// (0x0007489e) frm_month_g13_ParamLimits

0x90f1,	// (0x000748b0) frm_month_g14_ParamLimits

0x9105,	// (0x000748c4) frm_month_g15_ParamLimits

0x9119,	// (0x000748d8) frm_month_g16_ParamLimits

0xfebe,	// (0x0007b67d) frm_month_g_ParamLimits

0xef7e,	// (0x0007a73d) cell_top_day_name_pane_t1_ParamLimits

0x912d,	// (0x000748ec) cell_area_left_week_number_pane_g1_ParamLimits

0x9139,	// (0x000748f8) cell_area_left_week_number_pane_t1_ParamLimits

0xcee8,	// (0x000786a7) cell_month_view_pane_g1_ParamLimits

0x914c,	// (0x0007490b) cell_month_view_pane_t1_ParamLimits

0xa27a,	// (0x00075a39) main_clock2_btn_pane_g1

0xf0bc,	// (0x0007a87b) main_clock2_btn_pane_t1

0xb2f7,	// (0x00076ab6) listscroll_cmail_pane_ParamLimits

0xe7b6,	// (0x00079f75) main_sp_fs_email_pane_g1_ParamLimits

0xe7c2,	// (0x00079f81) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007b4a4) main_sp_fs_email_pane_g_ParamLimits

0xeae9,	// (0x0007a2a8) list_recal_day_pane_ParamLimits

0xeafa,	// (0x0007a2b9) mian_recal_day_pane_t1

0x8035,	// (0x000737f4) list_single_dyc_row_text_pane_t4_ParamLimits

0x8035,	// (0x000737f4) list_single_dyc_row_text_pane_t4

0x807e,	// (0x0007383d) list_single_dyc_row_text_pane_t5_ParamLimits

0x807e,	// (0x0007383d) list_single_dyc_row_text_pane_t5

0xa601,	// (0x00075dc0) list_single_dyc_row_text_pane_t6_ParamLimits

0xa601,	// (0x00075dc0) list_single_dyc_row_text_pane_t6

0x244a,	// (0x0006dc09) aid_mgn_list_cale_time_pane

0x94e9,	// (0x00074ca8) main_gallery2_pane_ParamLimits

0xd0a6,	// (0x00078865) main_clock2_pane_cp01_t1

0xd0b6,	// (0x00078875) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0007af83) main_clock2_pane_cp01_t

0x0b58,	// (0x0006c317) cale_week_scroll_pane_g16_ParamLimits

0x0b58,	// (0x0006c317) cale_week_scroll_pane_g16

0xa9f6,	// (0x000761b5) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
