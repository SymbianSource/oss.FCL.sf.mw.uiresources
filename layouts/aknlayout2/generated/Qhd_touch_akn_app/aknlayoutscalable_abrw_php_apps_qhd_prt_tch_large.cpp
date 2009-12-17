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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007727c };

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
0x5cd0,	// (0x0007cf4c) Screen

0x5cdc,	// (0x0007cf58) application_window

0x5d1c,	// (0x0007cf98) area_bottom_pane_ParamLimits

0x5d1c,	// (0x0007cf98) area_bottom_pane

0x5d51,	// (0x0007cfcd) area_top_pane_ParamLimits

0x5d51,	// (0x0007cfcd) area_top_pane

0xe1d7,	// (0x00085453) call_video_uplink_pane_ParamLimits

0xe1d7,	// (0x00085453) call_video_uplink_pane

0x5ddf,	// (0x0007d05b) main_pane_ParamLimits

0x5ddf,	// (0x0007d05b) main_pane

0xeafa,	// (0x00085d76) context_pane

0x9366,	// (0x000805e2) navi_pane

0x9386,	// (0x00080602) popup_cale_events_window_ParamLimits

0x9386,	// (0x00080602) popup_cale_events_window

0xeb0d,	// (0x00085d89) popup_mup_playback_window

0x939e,	// (0x0008061a) signal_pane

0x0b9a,	// (0x00077e16) main_browser_pane

0x1946,	// (0x00078bc2) main_burst_pane

0x9222,	// (0x0008049e) main_calc_pane

0x1946,	// (0x00078bc2) main_cale_day_pane

0x0b9a,	// (0x00077e16) main_cale_month_pane

0x1946,	// (0x00078bc2) main_cale_week_pane

0x1946,	// (0x00078bc2) main_call_pane

0xe608,	// (0x00085884) main_call_poc_pane

0x1946,	// (0x00078bc2) main_camera_pane

0x1946,	// (0x00078bc2) main_chi_dic_pane

0x17cb,	// (0x00078a47) main_clock_pane

0xe608,	// (0x00085884) main_fmradio_pane

0x1946,	// (0x00078bc2) main_graph_messa_pane

0xe608,	// (0x00085884) main_help_pane

0x0b9a,	// (0x00077e16) main_im_pane

0x0aa1,	// (0x00077d1d) main_image_pane_ParamLimits

0x0aa1,	// (0x00077d1d) main_image_pane

0xe608,	// (0x00085884) main_location2_pane

0x1946,	// (0x00078bc2) main_location_pane

0xe608,	// (0x00085884) main_messa_pane

0xe608,	// (0x00085884) main_mp2_pane

0x1946,	// (0x00078bc2) main_mp_pane

0xe608,	// (0x00085884) main_msg_pane

0xe608,	// (0x00085884) main_mup_eq_pane

0xe608,	// (0x00085884) main_mup_pane

0x1946,	// (0x00078bc2) main_notes_pane

0xe608,	// (0x00085884) main_pec_pane

0xe608,	// (0x00085884) main_phob_pane

0xe608,	// (0x00085884) main_pinb_pane

0xe608,	// (0x00085884) main_postcard_pane

0xe608,	// (0x00085884) main_qdial_pane

0x1946,	// (0x00078bc2) main_skin_pane

0xe608,	// (0x00085884) main_smil2_pane

0x1946,	// (0x00078bc2) main_smil_pane

0x1946,	// (0x00078bc2) main_video_pane

0x1946,	// (0x00078bc2) main_video_tele_pane

0x0aa1,	// (0x00077d1d) main_viewer_pane_ParamLimits

0x0aa1,	// (0x00077d1d) main_viewer_pane

0x1946,	// (0x00078bc2) main_vorec_pane

0x9266,	// (0x000804e2) popup_blid_sat_info_window_ParamLimits

0x9266,	// (0x000804e2) popup_blid_sat_info_window

0x927c,	// (0x000804f8) popup_dyc_status_message_window_ParamLimits

0x927c,	// (0x000804f8) popup_dyc_status_message_window

0x928c,	// (0x00080508) popup_grid_large_graphic_window_ParamLimits

0x928c,	// (0x00080508) popup_grid_large_graphic_window

0x9302,	// (0x0008057e) popup_loc_request_window_ParamLimits

0x9302,	// (0x0008057e) popup_loc_request_window

0x933e,	// (0x000805ba) popup_wml_address_window_ParamLimits

0x933e,	// (0x000805ba) popup_wml_address_window

0x90fa,	// (0x00080376) call_muted_g1

0x879a,	// (0x0007fa16) popup_call_audio_conf_window_ParamLimits

0x879a,	// (0x0007fa16) popup_call_audio_conf_window

0x910a,	// (0x00080386) popup_call_audio_first_window_ParamLimits

0x910a,	// (0x00080386) popup_call_audio_first_window

0x914a,	// (0x000803c6) popup_call_audio_in_window_ParamLimits

0x914a,	// (0x000803c6) popup_call_audio_in_window

0x916e,	// (0x000803ea) popup_call_audio_out_window_ParamLimits

0x916e,	// (0x000803ea) popup_call_audio_out_window

0x9190,	// (0x0008040c) popup_call_audio_second_window_ParamLimits

0x9190,	// (0x0008040c) popup_call_audio_second_window

0x91c0,	// (0x0008043c) popup_call_audio_wait_window_ParamLimits

0x91c0,	// (0x0008043c) popup_call_audio_wait_window

0x91e1,	// (0x0008045d) popup_number_entry_window_ParamLimits

0x91e1,	// (0x0008045d) popup_number_entry_window

0xe1f5,	// (0x00085471) bg_popup_call_pane_cp05_ParamLimits

0xe1f5,	// (0x00085471) bg_popup_call_pane_cp05

0xe215,	// (0x00085491) popup_number_entry_window_t1

0xe228,	// (0x000854a4) popup_number_entry_window_t2

0xe23a,	// (0x000854b6) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x000863ab) popup_number_entry_window_t

0xe24c,	// (0x000854c8) text_title_cp2

0xe25f,	// (0x000854db) bg_popup_call_pane_cp_ParamLimits

0xe25f,	// (0x000854db) bg_popup_call_pane_cp

0xe26d,	// (0x000854e9) call_thumbnail_pane

0xe275,	// (0x000854f1) popup_call_audio_in_window_g1_ParamLimits

0xe275,	// (0x000854f1) popup_call_audio_in_window_g1

0xe281,	// (0x000854fd) popup_call_audio_in_window_g2_ParamLimits

0xe281,	// (0x000854fd) popup_call_audio_in_window_g2

0xe28d,	// (0x00085509) popup_call_audio_in_window_g3_ParamLimits

0xe28d,	// (0x00085509) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x000863b4) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x000863b4) popup_call_audio_in_window_g

0xe299,	// (0x00085515) popup_call_audio_in_window_t1_ParamLimits

0xe299,	// (0x00085515) popup_call_audio_in_window_t1

0xe2b5,	// (0x00085531) popup_call_audio_in_window_t2_ParamLimits

0xe2b5,	// (0x00085531) popup_call_audio_in_window_t2

0xe2d1,	// (0x0008554d) popup_call_audio_in_window_t3_ParamLimits

0xe2d1,	// (0x0008554d) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x000863bb) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x000863bb) popup_call_audio_in_window_t

0xe25f,	// (0x000854db) bg_popup_call_pane_cp01_ParamLimits

0xe25f,	// (0x000854db) bg_popup_call_pane_cp01

0xe26d,	// (0x000854e9) call_thumbnail_pane_cp02

0xe2e4,	// (0x00085560) call_type_pane_cp022

0xe2ec,	// (0x00085568) popup_call_audio_out_window_g1_ParamLimits

0xe2ec,	// (0x00085568) popup_call_audio_out_window_g1

0xe2fe,	// (0x0008557a) popup_call_audio_out_window_g2_ParamLimits

0xe2fe,	// (0x0008557a) popup_call_audio_out_window_g2

0xe30a,	// (0x00085586) popup_call_audio_out_window_g3_ParamLimits

0xe30a,	// (0x00085586) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x000863c2) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x000863c2) popup_call_audio_out_window_g

0xe31c,	// (0x00085598) popup_call_audio_out_window_t1_ParamLimits

0xe31c,	// (0x00085598) popup_call_audio_out_window_t1

0xe334,	// (0x000855b0) popup_call_audio_out_window_t2_ParamLimits

0xe334,	// (0x000855b0) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x000863c9) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x000863c9) popup_call_audio_out_window_t

0xe349,	// (0x000855c5) bg_popup_call_pane_ParamLimits

0xe349,	// (0x000855c5) bg_popup_call_pane

0x5fc5,	// (0x0007d241) call_thumbnail_pane_cp_ParamLimits

0x5fc5,	// (0x0007d241) call_thumbnail_pane_cp

0xe3cd,	// (0x00085649) call_type_pane_cp01_ParamLimits

0xe3cd,	// (0x00085649) call_type_pane_cp01

0xe411,	// (0x0008568d) popup_call_audio_first_window_g1_ParamLimits

0xe411,	// (0x0008568d) popup_call_audio_first_window_g1

0xe45d,	// (0x000856d9) popup_call_audio_first_window_g2_ParamLimits

0xe45d,	// (0x000856d9) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x000863ce) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x000863ce) popup_call_audio_first_window_g

0xe4a1,	// (0x0008571d) popup_call_audio_first_window_t1_ParamLimits

0xe4a1,	// (0x0008571d) popup_call_audio_first_window_t1

0xe54d,	// (0x000857c9) popup_call_audio_first_window_t4_ParamLimits

0xe54d,	// (0x000857c9) popup_call_audio_first_window_t4

0xe5d9,	// (0x00085855) popup_call_audio_first_window_t5_ParamLimits

0xe5d9,	// (0x00085855) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x000863d3) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x000863d3) popup_call_audio_first_window_t

0xe608,	// (0x00085884) bg_popup_call_pane_cp02

0xe612,	// (0x0008588e) call_type_pane_cp023

0xe61a,	// (0x00085896) popup_call_audio_wait_window_g1

0xe622,	// (0x0008589e) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x000863da) popup_call_audio_wait_window_g

0xe62a,	// (0x000858a6) popup_call_audio_wait_window_t3

0xe638,	// (0x000858b4) bg_popup_call_pane_cp03_ParamLimits

0xe638,	// (0x000858b4) bg_popup_call_pane_cp03

0xe698,	// (0x00085914) call_thumbnail_pane_cp011_ParamLimits

0xe698,	// (0x00085914) call_thumbnail_pane_cp011

0xe6a4,	// (0x00085920) call_type_pane_cp034_ParamLimits

0xe6a4,	// (0x00085920) call_type_pane_cp034

0xe6e0,	// (0x0008595c) popup_call_audio_second_window_g1_ParamLimits

0xe6e0,	// (0x0008595c) popup_call_audio_second_window_g1

0xe71c,	// (0x00085998) popup_call_audio_second_window_g2_ParamLimits

0xe71c,	// (0x00085998) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x000863df) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x000863df) popup_call_audio_second_window_g

0xe758,	// (0x000859d4) popup_call_audio_second_window_t1_ParamLimits

0xe758,	// (0x000859d4) popup_call_audio_second_window_t1

0xe7d9,	// (0x00085a55) popup_call_audio_second_window_t2_ParamLimits

0xe7d9,	// (0x00085a55) popup_call_audio_second_window_t2

0xe80f,	// (0x00085a8b) popup_call_audio_second_window_t3_ParamLimits

0xe80f,	// (0x00085a8b) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x000863e4) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x000863e4) popup_call_audio_second_window_t

0xe608,	// (0x00085884) bg_popup_call_pane_cp04

0xe845,	// (0x00085ac1) list_conf_pane

0xe84d,	// (0x00085ac9) popup_call_audio_conf_window_t1

0xe85b,	// (0x00085ad7) call_thumbnail_pane_g1

0x0aa1,	// (0x00077d1d) bg_pinb_pane_ParamLimits

0x0aa1,	// (0x00077d1d) bg_pinb_pane

0x0aaf,	// (0x00077d2b) find_pinb_pane

0x0ab8,	// (0x00077d34) listscroll_pinb_pane_ParamLimits

0x0ab8,	// (0x00077d34) listscroll_pinb_pane

0x0ac7,	// (0x00077d43) pinb_bg_pane_g1

0x5fe9,	// (0x0007d265) pinb_bg_pane_g2

0x5ff5,	// (0x0007d271) pinb_bg_pane_g3

0x6001,	// (0x0007d27d) pinb_bg_pane_g4

0x600d,	// (0x0007d289) pinb_bg_pane_g5

0x6019,	// (0x0007d295) pinb_bg_pane_g6

0x6024,	// (0x0007d2a0) pinb_bg_pane_g7

0x602f,	// (0x0007d2ab) pinb_bg_pane_g8

0x603a,	// (0x0007d2b6) pinb_bg_pane_g9

0x6044,	// (0x0007d2c0) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x000863eb) pinb_bg_pane_g

0x6061,	// (0x0007d2dd) grid_pinb_pane

0x606c,	// (0x0007d2e8) list_pinb_pane

0x6077,	// (0x0007d2f3) scroll_pane_cp01_ParamLimits

0x6077,	// (0x0007d2f3) scroll_pane_cp01

0x0ad1,	// (0x00077d4d) find_pinb_pane_g1_ParamLimits

0x0ad1,	// (0x00077d4d) find_pinb_pane_g1

0x0ae9,	// (0x00077d65) find_pinb_pane_t1

0x0afb,	// (0x00077d77) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00086405) find_pinb_pane_t

0x0b10,	// (0x00077d8c) input_focus_pane_cp01_ParamLimits

0x0b10,	// (0x00077d8c) input_focus_pane_cp01

0x6089,	// (0x0007d305) cell_pinb_pane_ParamLimits

0x6089,	// (0x0007d305) cell_pinb_pane

0x60ae,	// (0x0007d32a) cell_pinb_pane_g1_ParamLimits

0x60ae,	// (0x0007d32a) cell_pinb_pane_g1

0x60c3,	// (0x0007d33f) cell_pinb_pane_g2_ParamLimits

0x60c3,	// (0x0007d33f) cell_pinb_pane_g2

0x0b1c,	// (0x00077d98) cell_pinb_pane_g3_ParamLimits

0x0b1c,	// (0x00077d98) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0008640a) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0008640a) cell_pinb_pane_g

0xe608,	// (0x00085884) grid_highlight_pane_cp01

0x60cf,	// (0x0007d34b) list_pinb_item_pane_ParamLimits

0x60cf,	// (0x0007d34b) list_pinb_item_pane

0xe608,	// (0x00085884) list_highlight_pane_cp02

0x60ef,	// (0x0007d36b) list_pinb_item_pane_g1_ParamLimits

0x60ef,	// (0x0007d36b) list_pinb_item_pane_g1

0x0b28,	// (0x00077da4) list_pinb_item_pane_g2_ParamLimits

0x0b28,	// (0x00077da4) list_pinb_item_pane_g2

0x60fc,	// (0x0007d378) list_pinb_item_pane_g3_ParamLimits

0x60fc,	// (0x0007d378) list_pinb_item_pane_g3

0x610d,	// (0x0007d389) list_pinb_item_pane_g4_ParamLimits

0x610d,	// (0x0007d389) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00086411) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00086411) list_pinb_item_pane_g

0x6119,	// (0x0007d395) list_pinb_item_pane_t1_ParamLimits

0x6119,	// (0x0007d395) list_pinb_item_pane_t1

0x614a,	// (0x0007d3c6) calc_display_pane

0x6168,	// (0x0007d3e4) calc_paper_pane

0x6184,	// (0x0007d400) grid_calc_pane

0xe608,	// (0x00085884) bg_list_pane_cp01

0x61ae,	// (0x0007d42a) clock_g1

0x61b6,	// (0x0007d432) clock_g2

0x0001,

0xf19e,	// (0x0008641a) clock_g

0x61c0,	// (0x0007d43c) clock_t1_ParamLimits

0x61c0,	// (0x0007d43c) clock_t1

0x61d5,	// (0x0007d451) clock_t2_ParamLimits

0x61d5,	// (0x0007d451) clock_t2

0x61e7,	// (0x0007d463) clock_t3_ParamLimits

0x61e7,	// (0x0007d463) clock_t3

0x61f9,	// (0x0007d475) clock_t4_ParamLimits

0x61f9,	// (0x0007d475) clock_t4

0x620b,	// (0x0007d487) clock_t5_ParamLimits

0x620b,	// (0x0007d487) clock_t5

0x6220,	// (0x0007d49c) clock_t6_ParamLimits

0x6220,	// (0x0007d49c) clock_t6

0x6232,	// (0x0007d4ae) clock_t7_ParamLimits

0x6232,	// (0x0007d4ae) clock_t7

0x6244,	// (0x0007d4c0) clock_t8_ParamLimits

0x6244,	// (0x0007d4c0) clock_t8

0x625a,	// (0x0007d4d6) clock_t9_ParamLimits

0x625a,	// (0x0007d4d6) clock_t9

0x0008,

0xf1a3,	// (0x0008641f) clock_t_ParamLimits

0xf1a3,	// (0x0008641f) clock_t

0x0b3c,	// (0x00077db8) popup_clock_analogue_window_cp02

0x0b3c,	// (0x00077db8) popup_clock_digital_window_cp01

0x0b44,	// (0x00077dc0) listscroll_help_pane

0xe608,	// (0x00085884) phob_pre_status_pane

0x0b4e,	// (0x00077dca) grid_qdial_pane

0xe608,	// (0x00085884) listscroll_mce_pane

0x0b58,	// (0x00077dd4) bg_notes_pane

0x0b62,	// (0x00077dde) list_notes_pane

0x6270,	// (0x0007d4ec) scroll_pane_cp06

0x0b6c,	// (0x00077de8) bg_calc_paper_pane

0x6285,	// (0x0007d501) list_calc_pane

0x0b9a,	// (0x00077e16) bg_calc_display_pane

0x629f,	// (0x0007d51b) calc_display_pane_t1

0x62b4,	// (0x0007d530) calc_display_pane_t2

0x62c9,	// (0x0007d545) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00086432) calc_display_pane_t

0x62db,	// (0x0007d557) cell_calc_pane_ParamLimits

0x62db,	// (0x0007d557) cell_calc_pane

0x0bb8,	// (0x00077e34) bg_calc_paper_pane_g1

0x0bd0,	// (0x00077e4c) bg_calc_paper_pane_g2

0x0bc4,	// (0x00077e40) bg_calc_paper_pane_g3

0x0be8,	// (0x00077e64) bg_calc_paper_pane_g4

0x0bdc,	// (0x00077e58) bg_calc_paper_pane_g5

0x6308,	// (0x0007d584) bg_calc_paper_pane_g6

0x6319,	// (0x0007d595) bg_calc_paper_pane_g7

0x632a,	// (0x0007d5a6) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00086439) bg_calc_paper_pane_g

0x633b,	// (0x0007d5b7) calc_bg_paper_pane_g9

0x634c,	// (0x0007d5c8) list_calc_item_pane_ParamLimits

0x634c,	// (0x0007d5c8) list_calc_item_pane

0x0bf4,	// (0x00077e70) list_calc_item_pane_g1

0x637b,	// (0x0007d5f7) list_calc_item_pane_t1_ParamLimits

0x637b,	// (0x0007d5f7) list_calc_item_pane_t1

0x638d,	// (0x0007d609) list_calc_item_pane_t2_ParamLimits

0x638d,	// (0x0007d609) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0008644a) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0008644a) list_calc_item_pane_t

0x0c13,	// (0x00077e8f) cell_calc_pane_g1

0x0c1d,	// (0x00077e99) grid_highlight_pane_cp02

0x63bd,	// (0x0007d639) bg_calc_display_pane_g1

0x63c6,	// (0x0007d642) bg_calc_display_pane_g2

0xe863,	// (0x00085adf) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00086454) bg_calc_display_pane_g

0x63d0,	// (0x0007d64c) cell_qdial_pane_ParamLimits

0x63d0,	// (0x0007d64c) cell_qdial_pane

0x63e4,	// (0x0007d660) cell_qdial_pane_g1_ParamLimits

0x63e4,	// (0x0007d660) cell_qdial_pane_g1

0x63f1,	// (0x0007d66d) cell_qdial_pane_g2_ParamLimits

0x63f1,	// (0x0007d66d) cell_qdial_pane_g2

0x0c3f,	// (0x00077ebb) cell_qdial_pane_g3_ParamLimits

0x0c3f,	// (0x00077ebb) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0008645b) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0008645b) cell_qdial_pane_g

0x640f,	// (0x0007d68b) cell_qdial_pane_t1_ParamLimits

0x640f,	// (0x0007d68b) cell_qdial_pane_t1

0x6427,	// (0x0007d6a3) cell_qdial_pane_t2_ParamLimits

0x6427,	// (0x0007d6a3) cell_qdial_pane_t2

0x643a,	// (0x0007d6b6) cell_qdial_pane_t3_ParamLimits

0x643a,	// (0x0007d6b6) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00086464) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00086464) cell_qdial_pane_t

0xe608,	// (0x00085884) grid_highlight_pane_cp04

0x0c4b,	// (0x00077ec7) thumbnail_qdial_pane_ParamLimits

0x0c4b,	// (0x00077ec7) thumbnail_qdial_pane

0x0ca7,	// (0x00077f23) list_help_pane

0x0cb0,	// (0x00077f2c) scroll_pane_cp02

0x644d,	// (0x0007d6c9) help_list_pane_t1_ParamLimits

0x644d,	// (0x0007d6c9) help_list_pane_t1

0x6480,	// (0x0007d6fc) bg_notes_pane_g2

0x6488,	// (0x0007d704) bg_notes_pane_g3

0x6490,	// (0x0007d70c) notes_bg_pane_g1

0x6498,	// (0x0007d714) notes_bg_pane_g4

0x64a0,	// (0x0007d71c) notes_bg_pane_g5

0x64a8,	// (0x0007d724) notes_bg_pane_g6

0x64b0,	// (0x0007d72c) notes_bg_pane_g7

0x64b8,	// (0x0007d734) notes_bg_pane_g8

0x64c0,	// (0x0007d73c) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00086482) notes_bg_pane_g

0x64c8,	// (0x0007d744) list_notes_text_pane_ParamLimits

0x64c8,	// (0x0007d744) list_notes_text_pane

0x0d01,	// (0x00077f7d) list_notes_text_pane_g1

0x64ed,	// (0x0007d769) list_notes_text_pane_t1

0x0b9a,	// (0x00077e16) listscroll_cale_week_pane

0x6518,	// (0x0007d794) bg_cale_heading_pane

0x0d1b,	// (0x00077f97) bg_cale_pane_cp01

0x652c,	// (0x0007d7a8) cale_week_corner_pane

0x6542,	// (0x0007d7be) cale_week_day_heading_pane

0x6556,	// (0x0007d7d2) cale_week_scroll_pane_g1

0x6567,	// (0x0007d7e3) cale_week_scroll_pane_g2

0x6578,	// (0x0007d7f4) cale_week_scroll_pane_g3

0x6589,	// (0x0007d805) cale_week_scroll_pane_g4

0x659a,	// (0x0007d816) cale_week_scroll_pane_g5

0x65ab,	// (0x0007d827) cale_week_scroll_pane_g6

0x65bc,	// (0x0007d838) cale_week_scroll_pane_g7

0x65cf,	// (0x0007d84b) cale_week_scroll_pane_g8

0x65e2,	// (0x0007d85e) cale_week_scroll_pane_g9

0x65f3,	// (0x0007d86f) cale_week_scroll_pane_g10

0x6604,	// (0x0007d880) cale_week_scroll_pane_g11

0x6615,	// (0x0007d891) cale_week_scroll_pane_g12

0x6626,	// (0x0007d8a2) cale_week_scroll_pane_g13

0x6637,	// (0x0007d8b3) cale_week_scroll_pane_g14

0x6648,	// (0x0007d8c4) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00086491) cale_week_scroll_pane_g

0x6659,	// (0x0007d8d5) cale_week_time_pane

0x666c,	// (0x0007d8e8) grid_cale_week_pane

0x6681,	// (0x0007d8fd) scroll_pane_cp08

0x669b,	// (0x0007d917) cell_cale_week_pane_ParamLimits

0x669b,	// (0x0007d917) cell_cale_week_pane

0x66d7,	// (0x0007d953) cale_week_day_heading_pane_t1

0x6704,	// (0x0007d980) cale_week_day_heading_pane_t2

0x6731,	// (0x0007d9ad) cale_week_day_heading_pane_t3

0x675e,	// (0x0007d9da) cale_week_day_heading_pane_t4

0x678b,	// (0x0007da07) cale_week_day_heading_pane_t5

0x67b8,	// (0x0007da34) cale_week_day_heading_pane_t6

0x67e5,	// (0x0007da61) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x000864b0) cale_week_day_heading_pane_t

0x0d46,	// (0x00077fc2) bg_cale_side_pane

0x6812,	// (0x0007da8e) cale_week_time_pane_t1

0x682a,	// (0x0007daa6) cale_week_time_pane_t2

0x6842,	// (0x0007dabe) cale_week_time_pane_t3

0x685a,	// (0x0007dad6) cale_week_time_pane_t4

0x6872,	// (0x0007daee) cale_week_time_pane_t5

0x688a,	// (0x0007db06) cale_week_time_pane_t6

0x68a2,	// (0x0007db1e) cale_week_time_pane_t7

0x68ba,	// (0x0007db36) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x000864bf) cale_week_time_pane_t

0x68d2,	// (0x0007db4e) cell_cale_week_pane_g2

0x68eb,	// (0x0007db67) cell_cale_week_pane_g3_ParamLimits

0x68eb,	// (0x0007db67) cell_cale_week_pane_g3

0x0d54,	// (0x00077fd0) grid_highlight_pane_cp07

0x0d5c,	// (0x00077fd8) listscroll_gms_pane

0x0d66,	// (0x00077fe2) grid_gms_pane

0x0d6f,	// (0x00077feb) listscroll_gms_pane_g1

0x0d77,	// (0x00077ff3) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x000864d0) listscroll_gms_pane_g

0x6903,	// (0x0007db7f) scroll_pane_cp010

0x690e,	// (0x0007db8a) cell_gms_pane_ParamLimits

0x690e,	// (0x0007db8a) cell_gms_pane

0x6921,	// (0x0007db9d) cell_gms_pane_g1

0x0d7f,	// (0x00077ffb) cell_gms_pane_g2

0x0d87,	// (0x00078003) cell_gms_pane_g3

0x0d90,	// (0x0007800c) cell_gms_pane_g4

0x0003,

0xf259,	// (0x000864d5) cell_gms_pane_g

0x0d99,	// (0x00078015) grid_highlight_pane_cp09

0x90a2,	// (0x0008031e) phob_pre_status_pane_g1

0x90aa,	// (0x00080326) phob_pre_status_pane_g2

0x90b2,	// (0x0008032e) phob_pre_status_pane_g3

0x90ba,	// (0x00080336) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x000868c4) phob_pre_status_pane_g

0x90ca,	// (0x00080346) phob_pre_status_pane_t1

0x90da,	// (0x00080356) phob_pre_status_pane_t2

0x90ea,	// (0x00080366) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x000868cf) phob_pre_status_pane_t

0xe608,	// (0x00085884) bg_list_pane_cp05

0x6931,	// (0x0007dbad) grid_vorec_pane

0x693b,	// (0x0007dbb7) vorec_t1

0x6949,	// (0x0007dbc5) vorec_t2

0x6957,	// (0x0007dbd3) vorec_t3

0x6965,	// (0x0007dbe1) vorec_t4

0x6973,	// (0x0007dbef) vorec_t5

0x6981,	// (0x0007dbfd) vorec_t6

0x0006,

0xf262,	// (0x000864de) vorec_t

0x699d,	// (0x0007dc19) wait_bar_pane_cp01

0x69a5,	// (0x0007dc21) cell_vorec_pane_ParamLimits

0x69a5,	// (0x0007dc21) cell_vorec_pane

0x0e0b,	// (0x00078087) cell_vorec_pane_g1

0xe608,	// (0x00085884) grid_highlight_pane_cp05

0x69c8,	// (0x0007dc44) cams_zoom_pane

0x69d4,	// (0x0007dc50) image_vga_pane

0x69e3,	// (0x0007dc5f) main_camera_pane_g1

0x69f1,	// (0x0007dc6d) main_camera_pane_g2

0x69fd,	// (0x0007dc79) main_camera_pane_g3

0x6a09,	// (0x0007dc85) main_camera_pane_g4

0x6a15,	// (0x0007dc91) main_camera_pane_g5

0x6a21,	// (0x0007dc9d) main_camera_pane_g6

0x6a2d,	// (0x0007dca9) main_camera_pane_g7

0x0007,

0xf271,	// (0x000864ed) main_camera_pane_g

0x6a39,	// (0x0007dcb5) main_camera_pane_t1

0x6a4b,	// (0x0007dcc7) main_camera_pane_t2

0x0001,

0xf282,	// (0x000864fe) main_camera_pane_t

0x6a6c,	// (0x0007dce8) cams_zoom_pane_cp_ParamLimits

0x6a6c,	// (0x0007dce8) cams_zoom_pane_cp

0x6a90,	// (0x0007dd0c) image_cif_pane_ParamLimits

0x6a90,	// (0x0007dd0c) image_cif_pane

0x6aae,	// (0x0007dd2a) image_subqcif_pane

0x6ab6,	// (0x0007dd32) main_video_pane_g1_ParamLimits

0x6ab6,	// (0x0007dd32) main_video_pane_g1

0x6ad6,	// (0x0007dd52) main_video_pane_g2_ParamLimits

0x6ad6,	// (0x0007dd52) main_video_pane_g2

0x6b06,	// (0x0007dd82) main_video_pane_g3_ParamLimits

0x6b06,	// (0x0007dd82) main_video_pane_g3

0x6b2f,	// (0x0007ddab) main_video_pane_g4_ParamLimits

0x6b2f,	// (0x0007ddab) main_video_pane_g4

0x6b58,	// (0x0007ddd4) main_video_pane_g5_ParamLimits

0x6b58,	// (0x0007ddd4) main_video_pane_g5

0x0e21,	// (0x0007809d) main_video_pane_g6_ParamLimits

0x0e21,	// (0x0007809d) main_video_pane_g6

0x0006,

0xf287,	// (0x00086503) main_video_pane_g_ParamLimits

0xf287,	// (0x00086503) main_video_pane_g

0x6b7c,	// (0x0007ddf8) main_video_pane_t1_ParamLimits

0x6b7c,	// (0x0007ddf8) main_video_pane_t1

0x0e3b,	// (0x000780b7) cams_zoom_pane_g1

0x0e44,	// (0x000780c0) cams_zoom_pane_g2

0x0e4d,	// (0x000780c9) cams_zoom_pane_g3

0x0e56,	// (0x000780d2) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00086512) cams_zoom_pane_g

0x6bc6,	// (0x0007de42) grid_cams_pane

0x6bd4,	// (0x0007de50) linegrid_cams_pane

0x6be2,	// (0x0007de5e) cell_cams_pane_ParamLimits

0x6be2,	// (0x0007de5e) cell_cams_pane

0x0e5f,	// (0x000780db) cams_burst_image_pane

0x0e67,	// (0x000780e3) cell_cams_pane_g1

0xe608,	// (0x00085884) grid_highlight_pane_cp03

0x0c13,	// (0x00077e8f) mp_bg_pane_g1

0xe608,	// (0x00085884) bg_list_pane_cp03

0xe9d2,	// (0x00085c4e) bg_mp_pane

0xe9da,	// (0x00085c56) grid_mp_pane

0xe9e2,	// (0x00085c5e) media_player_g1

0xe9ea,	// (0x00085c66) media_player_t1

0xe9f8,	// (0x00085c74) media_player_t2

0xea06,	// (0x00085c82) media_player_t3

0xea14,	// (0x00085c90) media_player_t4

0xea22,	// (0x00085c9e) media_player_t5

0xea30,	// (0x00085cac) media_player_t6

0xea3e,	// (0x00085cba) media_player_t7

0x0006,

0xf632,	// (0x000868ae) media_player_t

0xea4c,	// (0x00085cc8) wait_bar_pane_cp02

0xf617,	// (0x00086893) main_usb_pane_t

0x9099,	// (0x00080315) cell_mp_pane

0x0c13,	// (0x00077e8f) cell_mp_pane_g1

0xe608,	// (0x00085884) grid_highlight_pane_cp06

0x0f2c,	// (0x000781a8) grid_skin_colour_pane

0x0f34,	// (0x000781b0) list_highlight_pane_cp03

0x6c4c,	// (0x0007dec8) skin_g1

0x0f3c,	// (0x000781b8) skin_t1

0x0f4b,	// (0x000781c7) skin_t2

0x0001,

0xf2cb,	// (0x00086547) skin_t

0x6c56,	// (0x0007ded2) cell_skin_colour_pane_ParamLimits

0x6c56,	// (0x0007ded2) cell_skin_colour_pane

0x0f59,	// (0x000781d5) cell_skin_colour_pane_g1

0x6cab,	// (0x0007df27) call_video_g1_ParamLimits

0x6cab,	// (0x0007df27) call_video_g1

0x6cbb,	// (0x0007df37) call_video_g2_ParamLimits

0x6cbb,	// (0x0007df37) call_video_g2

0x0001,

0xf2d0,	// (0x0008654c) call_video_g_ParamLimits

0xf2d0,	// (0x0008654c) call_video_g

0x6cfb,	// (0x0007df77) call_video_uplink_pane_cp1_ParamLimits

0x6cfb,	// (0x0007df77) call_video_uplink_pane_cp1

0x0f73,	// (0x000781ef) call_video_uplink_pane_cp2

0x6da7,	// (0x0007e023) video_down_crop_pane_ParamLimits

0x6da7,	// (0x0007e023) video_down_crop_pane

0x6e8d,	// (0x0007e109) video_down_pane_ParamLimits

0x6e8d,	// (0x0007e109) video_down_pane

0x0f7b,	// (0x000781f7) video_down_subqcif_pane_ParamLimits

0x0f7b,	// (0x000781f7) video_down_subqcif_pane

0x0f93,	// (0x0007820f) video_down_subqcif_pane_cp_ParamLimits

0x0f93,	// (0x0007820f) video_down_subqcif_pane_cp

0x0fb7,	// (0x00078233) im_reading_pane_ParamLimits

0x0fb7,	// (0x00078233) im_reading_pane

0x6f6f,	// (0x0007e1eb) im_writing_pane_ParamLimits

0x6f6f,	// (0x0007e1eb) im_writing_pane

0x6f8d,	// (0x0007e209) im_reading_pane_t1

0x0fd1,	// (0x0007824d) list_im_pane

0x0fe2,	// (0x0007825e) scroll_pane_cp07

0x6fe1,	// (0x0007e25d) im_writing_pane_t1_ParamLimits

0x6fe1,	// (0x0007e25d) im_writing_pane_t1

0x0ffb,	// (0x00078277) im_writing_pane_t2_ParamLimits

0x0ffb,	// (0x00078277) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00086556) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00086556) im_writing_pane_t

0xe608,	// (0x00085884) input_focus_pane_cp04

0xe608,	// (0x00085884) input_focus_pane_cp05

0x6ff6,	// (0x0007e272) list_im_single_pane_ParamLimits

0x6ff6,	// (0x0007e272) list_im_single_pane

0x701a,	// (0x0007e296) list_single_im_pane_t1

0x905d,	// (0x000802d9) blid_accuracy_pane

0x9065,	// (0x000802e1) blid_compass_pane

0x906f,	// (0x000802eb) main_location_t1

0x907d,	// (0x000802f9) main_location_t2

0x908b,	// (0x00080307) main_location_t3

0x0002,

0xf641,	// (0x000868bd) main_location_t

0xe608,	// (0x00085884) aid_levels_location

0x0c13,	// (0x00077e8f) blid_accuracy_pane_g1

0x0c13,	// (0x00077e8f) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x000865b8) blid_accuracy_pane_g

0x1043,	// (0x000782bf) wml_content_pane

0x1081,	// (0x000782fd) wml_button_pane_ParamLimits

0x1081,	// (0x000782fd) wml_button_pane

0x7029,	// (0x0007e2a5) wml_list_single_large_pane_ParamLimits

0x7029,	// (0x0007e2a5) wml_list_single_large_pane

0x7053,	// (0x0007e2cf) wml_list_single_medium_pane_ParamLimits

0x7053,	// (0x0007e2cf) wml_list_single_medium_pane

0x7084,	// (0x0007e300) wml_list_single_small_pane_ParamLimits

0x7084,	// (0x0007e300) wml_list_single_small_pane

0x1095,	// (0x00078311) wml_selection_box_pane_ParamLimits

0x1095,	// (0x00078311) wml_selection_box_pane

0x10a8,	// (0x00078324) wml_list_single_pane_t1

0x10b7,	// (0x00078333) wml_list_single_medium_pane_t1

0x10c6,	// (0x00078342) wml_list_single_large_pane_t1

0x10d5,	// (0x00078351) input_focus_pane_cp02_ParamLimits

0x10d5,	// (0x00078351) input_focus_pane_cp02

0x10e8,	// (0x00078364) wml_selection_box_pane_g1

0x10f1,	// (0x0007836d) wml_selection_box_pane_t1_ParamLimits

0x10f1,	// (0x0007836d) wml_selection_box_pane_t1

0x0aa1,	// (0x00077d1d) bg_wml_button_pane_ParamLimits

0x0aa1,	// (0x00077d1d) bg_wml_button_pane

0x1109,	// (0x00078385) wml_button_pane_g1

0x1111,	// (0x0007838d) wml_button_pane_t1

0x1109,	// (0x00078385) wml_button_bg_pane_g1

0x1121,	// (0x0007839d) wml_button_bg_pane_g2

0x1129,	// (0x000783a5) wml_button_bg_pane_g3

0x1131,	// (0x000783ad) wml_button_bg_pane_g4

0x1139,	// (0x000783b5) wml_button_bg_pane_g5

0x1141,	// (0x000783bd) wml_button_bg_pane_g6

0x1149,	// (0x000783c5) wml_button_bg_pane_g7

0x1151,	// (0x000783cd) wml_button_bg_pane_g8

0x1159,	// (0x000783d5) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0008655b) wml_button_bg_pane_g

0x70be,	// (0x0007e33a) bg_list_pane_cp02

0x1161,	// (0x000783dd) mce_header_pane_ParamLimits

0x1161,	// (0x000783dd) mce_header_pane

0x1177,	// (0x000783f3) mce_icon_pane

0x1177,	// (0x000783f3) mce_image_pane

0x1180,	// (0x000783fc) mce_text_pane_ParamLimits

0x1180,	// (0x000783fc) mce_text_pane

0x70c8,	// (0x0007e344) scroll_pane_cp03

0x1079,	// (0x000782f5) scroll_pane_cp04

0x1193,	// (0x0007840f) scroll_pane_cp05_ParamLimits

0x1193,	// (0x0007840f) scroll_pane_cp05

0x70d2,	// (0x0007e34e) mce_header_field_pane_ParamLimits

0x70d2,	// (0x0007e34e) mce_header_field_pane

0x70f2,	// (0x0007e36e) mce_header_field_pane_2_ParamLimits

0x70f2,	// (0x0007e36e) mce_header_field_pane_2

0x7108,	// (0x0007e384) mce_header_field_pane_3

0x7110,	// (0x0007e38c) list_single_mce_message_pane_ParamLimits

0x7110,	// (0x0007e38c) list_single_mce_message_pane

0x7135,	// (0x0007e3b1) list_single_mce_smart_pane_ParamLimits

0x7135,	// (0x0007e3b1) list_single_mce_smart_pane

0x119f,	// (0x0007841b) input_focus_pane_cp03

0x11a8,	// (0x00078424) list_header_data_pane

0x7165,	// (0x0007e3e1) mce_header_field_pane_t1

0x7173,	// (0x0007e3ef) list_single_mce_header_pane_ParamLimits

0x7173,	// (0x0007e3ef) list_single_mce_header_pane

0x11b0,	// (0x0007842c) list_single_mce_header_pane_t1

0x11bf,	// (0x0007843b) list_single_mce_message_pane_g1

0x11c7,	// (0x00078443) list_single_mce_message_pane_t1

0x71b7,	// (0x0007e433) bg_cale_heading_pane_cp01_ParamLimits

0x71b7,	// (0x0007e433) bg_cale_heading_pane_cp01

0x11d5,	// (0x00078451) bg_cale_pane_cp02_ParamLimits

0x11d5,	// (0x00078451) bg_cale_pane_cp02

0x71da,	// (0x0007e456) cale_month_corner_pane

0x71f0,	// (0x0007e46c) cale_month_day_heading_pane_ParamLimits

0x71f0,	// (0x0007e46c) cale_month_day_heading_pane

0x7223,	// (0x0007e49f) cale_month_pane_g1_ParamLimits

0x7223,	// (0x0007e49f) cale_month_pane_g1

0x723f,	// (0x0007e4bb) cale_month_pane_g2_ParamLimits

0x723f,	// (0x0007e4bb) cale_month_pane_g2

0x725a,	// (0x0007e4d6) cale_month_pane_g3_ParamLimits

0x725a,	// (0x0007e4d6) cale_month_pane_g3

0x7286,	// (0x0007e502) cale_month_pane_g4_ParamLimits

0x7286,	// (0x0007e502) cale_month_pane_g4

0x72b2,	// (0x0007e52e) cale_month_pane_g5_ParamLimits

0x72b2,	// (0x0007e52e) cale_month_pane_g5

0x72de,	// (0x0007e55a) cale_month_pane_g6_ParamLimits

0x72de,	// (0x0007e55a) cale_month_pane_g6

0x730a,	// (0x0007e586) cale_month_pane_g7_ParamLimits

0x730a,	// (0x0007e586) cale_month_pane_g7

0x7346,	// (0x0007e5c2) cale_month_pane_g8_ParamLimits

0x7346,	// (0x0007e5c2) cale_month_pane_g8

0x7382,	// (0x0007e5fe) cale_month_pane_g9_ParamLimits

0x7382,	// (0x0007e5fe) cale_month_pane_g9

0x73bc,	// (0x0007e638) cale_month_pane_g10_ParamLimits

0x73bc,	// (0x0007e638) cale_month_pane_g10

0x73f6,	// (0x0007e672) cale_month_pane_g11_ParamLimits

0x73f6,	// (0x0007e672) cale_month_pane_g11

0x7430,	// (0x0007e6ac) cale_month_pane_g12_ParamLimits

0x7430,	// (0x0007e6ac) cale_month_pane_g12

0x746a,	// (0x0007e6e6) cale_month_pane_g13_ParamLimits

0x746a,	// (0x0007e6e6) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0008656e) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0008656e) cale_month_pane_g

0x74a4,	// (0x0007e720) cale_month_week_pane

0x74b7,	// (0x0007e733) grid_cale_month_pane_ParamLimits

0x74b7,	// (0x0007e733) grid_cale_month_pane

0x74e5,	// (0x0007e761) cale_month_day_heading_pane_t1

0x7543,	// (0x0007e7bf) cale_month_day_heading_pane_t2

0x75a8,	// (0x0007e824) cale_month_day_heading_pane_t3

0x760d,	// (0x0007e889) cale_month_day_heading_pane_t4

0x7672,	// (0x0007e8ee) cale_month_day_heading_pane_t5

0x76d7,	// (0x0007e953) cale_month_day_heading_pane_t6

0x773c,	// (0x0007e9b8) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00086589) cale_month_day_heading_pane_t

0x0d46,	// (0x00077fc2) bg_cale_side_pane_cp01

0x77b1,	// (0x0007ea2d) cale_month_week_pane_t1

0x77c8,	// (0x0007ea44) cale_month_week_pane_t2

0x77df,	// (0x0007ea5b) cale_month_week_pane_t3

0x77f6,	// (0x0007ea72) cale_month_week_pane_t4

0x780d,	// (0x0007ea89) cale_month_week_pane_t5

0x7824,	// (0x0007eaa0) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00086598) cale_month_week_pane_t

0x783b,	// (0x0007eab7) cell_cale_month_pane_ParamLimits

0x783b,	// (0x0007eab7) cell_cale_month_pane

0x78f1,	// (0x0007eb6d) cell_cale_month_pane_g1

0x78fd,	// (0x0007eb79) cell_cale_month_pane_t1_ParamLimits

0x78fd,	// (0x0007eb79) cell_cale_month_pane_t1

0x0d54,	// (0x00077fd0) grid_highlight_pane_cp08

0x0c13,	// (0x00077e8f) main_smil_g1

0x7919,	// (0x0007eb95) smil_status_pane

0x1240,	// (0x000784bc) smil_text_pane

0xe8f2,	// (0x00085b6e) bg_popup_call3_rect_pane_g8

0xe8fa,	// (0x00085b76) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00086851) bg_popup_call3_rect_pane_g

0xeb74,	// (0x00085df0) smil_status_volume_pane_g1

0x124a,	// (0x000784c6) smil_status_pane_t1

0x9451,	// (0x000806cd) volume_smil_pane

0x1261,	// (0x000784dd) list_smil_text_pane

0x792c,	// (0x0007eba8) scroll_pane_cp011

0x7937,	// (0x0007ebb3) smil_text_list_pane_t1_ParamLimits

0x7937,	// (0x0007ebb3) smil_text_list_pane_t1

0x79af,	// (0x0007ec2b) aid_volume_smil_ParamLimits

0x79af,	// (0x0007ec2b) aid_volume_smil

0x0c13,	// (0x00077e8f) smil_volume_pane_g1

0x0c13,	// (0x00077e8f) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x000865b8) smil_volume_pane_g

0x0b9a,	// (0x00077e16) listscroll_cale_day_pane

0x128d,	// (0x00078509) bg_cale_pane

0x12a5,	// (0x00078521) list_cale_pane

0x12b6,	// (0x00078532) scroll_pane_cp09

0x12c7,	// (0x00078543) cale_bg_pane_g1

0x12cf,	// (0x0007854b) cale_bg_pane_g2

0x12d7,	// (0x00078553) cale_bg_pane_g3

0x12df,	// (0x0007855b) cale_bg_pane_g4

0x12e7,	// (0x00078563) cale_bg_pane_g5

0x12ef,	// (0x0007856b) cale_bg_pane_g6

0x12f7,	// (0x00078573) cale_bg_pane_g7

0x12ff,	// (0x0007857b) cale_bg_pane_g8

0x1307,	// (0x00078583) cale_bg_pane_g9

0x0008,

0xf341,	// (0x000865bd) cale_bg_pane_g

0x79d1,	// (0x0007ec4d) list_cale_time_pane_ParamLimits

0x79d1,	// (0x0007ec4d) list_cale_time_pane

0x130f,	// (0x0007858b) list_cale_time_pane_g1_ParamLimits

0x130f,	// (0x0007858b) list_cale_time_pane_g1

0x131b,	// (0x00078597) list_cale_time_pane_g2_ParamLimits

0x131b,	// (0x00078597) list_cale_time_pane_g2

0x79ed,	// (0x0007ec69) list_cale_time_pane_g3_ParamLimits

0x79ed,	// (0x0007ec69) list_cale_time_pane_g3

0x79fb,	// (0x0007ec77) list_cale_time_pane_g4_ParamLimits

0x79fb,	// (0x0007ec77) list_cale_time_pane_g4

0x7a09,	// (0x0007ec85) list_cale_time_pane_g5_ParamLimits

0x7a09,	// (0x0007ec85) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x000865d0) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x000865d0) list_cale_time_pane_g

0x1335,	// (0x000785b1) list_cale_time_pane_t1_ParamLimits

0x1335,	// (0x000785b1) list_cale_time_pane_t1

0x135d,	// (0x000785d9) list_cale_time_pane_t2_ParamLimits

0x135d,	// (0x000785d9) list_cale_time_pane_t2

0x7d2e,	// (0x0007efaa) aid_blid_cardinal_pane

0x7d70,	// (0x0007efec) compass_pane_t4

0x1385,	// (0x00078601) list_cale_time_pane_t4_ParamLimits

0x1385,	// (0x00078601) list_cale_time_pane_t4

0x7d7e,	// (0x0007effa) compass_pane_t5

0x7d8e,	// (0x0007f00a) compass_pane_t6

0x7d9c,	// (0x0007f018) compass_pane_t7

0x1898,	// (0x00078b14) navi_pane_cc_t1

0x19ff,	// (0x00078c7b) aid_phob_thumbnail_center_pane

0x8541,	// (0x0007f7bd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x000865dd) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x000865dd) list_cale_time_pane_t

0xe25f,	// (0x000854db) bg_popup_window_pane_cp02_ParamLimits

0xe25f,	// (0x000854db) bg_popup_window_pane_cp02

0x13ad,	// (0x00078629) heading_pane_cp01_ParamLimits

0x13ad,	// (0x00078629) heading_pane_cp01

0x13b9,	// (0x00078635) loc_req_pane_ParamLimits

0x13b9,	// (0x00078635) loc_req_pane

0x13c9,	// (0x00078645) loc_type_pane_ParamLimits

0x13c9,	// (0x00078645) loc_type_pane

0x13db,	// (0x00078657) loc_type_pane_t1_ParamLimits

0x13db,	// (0x00078657) loc_type_pane_t1

0x13ed,	// (0x00078669) loc_type_pane_t2_ParamLimits

0x13ed,	// (0x00078669) loc_type_pane_t2

0x13ff,	// (0x0007867b) loc_type_pane_t3_ParamLimits

0x13ff,	// (0x0007867b) loc_type_pane_t3

0x0002,

0xf368,	// (0x000865e4) loc_type_pane_t_ParamLimits

0xf368,	// (0x000865e4) loc_type_pane_t

0x1411,	// (0x0007868d) list_loc_req_pane

0x141b,	// (0x00078697) scroll_pane_cp012

0x7a17,	// (0x0007ec93) list_single_loc_request_popup_menu_pane_ParamLimits

0x7a17,	// (0x0007ec93) list_single_loc_request_popup_menu_pane

0x1426,	// (0x000786a2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1426,	// (0x000786a2) list_single_loc_request_popup_menu_pane_g1

0x1432,	// (0x000786ae) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1432,	// (0x000786ae) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x000865eb) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x000865eb) list_single_loc_request_popup_menu_pane_g

0x143e,	// (0x000786ba) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x143e,	// (0x000786ba) list_single_loc_request_popup_menu_pane_t1

0x7a29,	// (0x0007eca5) bg_popup_window_pane_cp03_ParamLimits

0x7a29,	// (0x0007eca5) bg_popup_window_pane_cp03

0x7a37,	// (0x0007ecb3) heading_loc_req_pane_ParamLimits

0x7a37,	// (0x0007ecb3) heading_loc_req_pane

0x7a43,	// (0x0007ecbf) popup_dyc_status_message_window_g1_ParamLimits

0x7a43,	// (0x0007ecbf) popup_dyc_status_message_window_g1

0x7a4f,	// (0x0007eccb) popup_dyc_status_message_window_t1_ParamLimits

0x7a4f,	// (0x0007eccb) popup_dyc_status_message_window_t1

0x7a61,	// (0x0007ecdd) popup_dyc_status_message_window_t2_ParamLimits

0x7a61,	// (0x0007ecdd) popup_dyc_status_message_window_t2

0x7a73,	// (0x0007ecef) popup_dyc_status_message_window_t3_ParamLimits

0x7a73,	// (0x0007ecef) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x000865f0) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x000865f0) popup_dyc_status_message_window_t

0xe608,	// (0x00085884) bg_heading_pane_cp01

0x1454,	// (0x000786d0) heading_loc_req_pane_g1

0x145c,	// (0x000786d8) heading_loc_req_pane_g2

0x1464,	// (0x000786e0) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x000865f7) heading_loc_req_pane_g

0x146c,	// (0x000786e8) heading_loc_req_pane_t1

0x14f0,	// (0x0007876c) bg_popup_sub_pane_cp01_ParamLimits

0x14f0,	// (0x0007876c) bg_popup_sub_pane_cp01

0x14fe,	// (0x0007877a) popup_cale_events_window_g1_ParamLimits

0x14fe,	// (0x0007877a) popup_cale_events_window_g1

0x151e,	// (0x0007879a) popup_cale_events_window_g2_ParamLimits

0x151e,	// (0x0007879a) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0008662b) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0008662b) popup_cale_events_window_g

0x153e,	// (0x000787ba) popup_cale_events_window_t1_ParamLimits

0x153e,	// (0x000787ba) popup_cale_events_window_t1

0x1550,	// (0x000787cc) popup_cale_events_window_t2_ParamLimits

0x1550,	// (0x000787cc) popup_cale_events_window_t2

0x158e,	// (0x0007880a) popup_cale_events_window_t3_ParamLimits

0x158e,	// (0x0007880a) popup_cale_events_window_t3

0x15c8,	// (0x00078844) popup_cale_events_window_t4_ParamLimits

0x15c8,	// (0x00078844) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00086630) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00086630) popup_cale_events_window_t

0x7af7,	// (0x0007ed73) call_type_pane

0x1a17,	// (0x00078c93) popup_call_status_window_g1

0x7b03,	// (0x0007ed7f) popup_call_status_window_g2

0x7b0f,	// (0x0007ed8b) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00086639) popup_call_status_window_g

0x15fe,	// (0x0007887a) call_type_pane_g1

0x1607,	// (0x00078883) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00086640) call_type_pane_g

0xe608,	// (0x00085884) bg_popup_sub_pane_cp02

0x1610,	// (0x0007888c) listscroll_popup_wml_pane

0x1618,	// (0x00078894) list_wml_pane

0x1622,	// (0x0007889e) scroll_pane_cp013

0x162d,	// (0x000788a9) list_single_graphic_popup_wml_pane_ParamLimits

0x162d,	// (0x000788a9) list_single_graphic_popup_wml_pane

0x0c13,	// (0x00077e8f) list_single_graphic_popup_wml_pane_g1

0x1641,	// (0x000788bd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00086645) list_single_graphic_popup_wml_pane_g

0x1649,	// (0x000788c5) list_single_graphic_popup_wml_pane_t1

0x1657,	// (0x000788d3) aid_call_pane

0xe85b,	// (0x00085ad7) popup_clock_analogue_window_g1

0xe85b,	// (0x00085ad7) popup_clock_analogue_window_g2

0x7b1b,	// (0x0007ed97) popup_clock_analogue_window_g3

0x7b1b,	// (0x0007ed97) popup_clock_analogue_window_g4

0x0c13,	// (0x00077e8f) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0008664a) popup_clock_analogue_window_g

0x7b23,	// (0x0007ed9f) popup_clock_analogue_window_t1

0x7b31,	// (0x0007edad) clock_digital_number_pane_ParamLimits

0x7b31,	// (0x0007edad) clock_digital_number_pane

0x7b3d,	// (0x0007edb9) clock_digital_number_pane_cp02_ParamLimits

0x7b3d,	// (0x0007edb9) clock_digital_number_pane_cp02

0x7b49,	// (0x0007edc5) clock_digital_number_pane_cp03_ParamLimits

0x7b49,	// (0x0007edc5) clock_digital_number_pane_cp03

0x7b55,	// (0x0007edd1) clock_digital_number_pane_cp04_ParamLimits

0x7b55,	// (0x0007edd1) clock_digital_number_pane_cp04

0x7b65,	// (0x0007ede1) clock_digital_separator_pane_ParamLimits

0x7b65,	// (0x0007ede1) clock_digital_separator_pane

0x7b71,	// (0x0007eded) popup_clock_digital_window_t1

0x0c13,	// (0x00077e8f) clock_digital_number_pane_g1

0x0c13,	// (0x00077e8f) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x000865b8) clock_digital_number_pane_g

0x0c13,	// (0x00077e8f) clock_digital_separator_pane_g1

0x0c13,	// (0x00077e8f) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x000865b8) clock_digital_separator_pane_g

0xe608,	// (0x00085884) bg_popup_window_pane_cp04

0x16da,	// (0x00078956) heading_pane_cp03

0x16e2,	// (0x0007895e) listscroll_popup_gms_pane

0x16ea,	// (0x00078966) grid_large_graphic_popup_pane

0x16f4,	// (0x00078970) listscroll_popup_gms_pane_g1

0x16fc,	// (0x00078978) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00086655) listscroll_popup_gms_pane_g

0x1079,	// (0x000782f5) scroll_pane_cp014

0x7b8e,	// (0x0007ee0a) cell_large_graphic_popup_pane_ParamLimits

0x7b8e,	// (0x0007ee0a) cell_large_graphic_popup_pane

0x7ba6,	// (0x0007ee22) cell_large_graphic_popup_pane_g1_ParamLimits

0x7ba6,	// (0x0007ee22) cell_large_graphic_popup_pane_g1

0x1704,	// (0x00078980) cell_large_graphic_popup_pane_g2_ParamLimits

0x1704,	// (0x00078980) cell_large_graphic_popup_pane_g2

0x1710,	// (0x0007898c) cell_large_graphic_popup_pane_g3_ParamLimits

0x1710,	// (0x0007898c) cell_large_graphic_popup_pane_g3

0x171d,	// (0x00078999) cell_large_graphic_popup_pane_g4_ParamLimits

0x171d,	// (0x00078999) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0008665a) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0008665a) cell_large_graphic_popup_pane_g

0x172d,	// (0x000789a9) grid_highlight_pane_cp010

0x0c13,	// (0x00077e8f) bg_popup_call_pane_g1

0x1737,	// (0x000789b3) list_single_graphic_popup_conf_pane_ParamLimits

0x1737,	// (0x000789b3) list_single_graphic_popup_conf_pane

0x174a,	// (0x000789c6) list_highlight_pane_cp01

0x1753,	// (0x000789cf) list_single_graphic_popup_conf_pane_g1

0x175b,	// (0x000789d7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00086663) list_single_graphic_popup_conf_pane_g

0x1763,	// (0x000789df) list_single_graphic_popup_conf_pane_t1

0x1771,	// (0x000789ed) linegrid_cams_pane_g1

0x7bb2,	// (0x0007ee2e) linegrid_cams_pane_g2

0x0d87,	// (0x00078003) linegrid_cams_pane_g3

0x177a,	// (0x000789f6) linegrid_cams_pane_g4

0x7bbb,	// (0x0007ee37) linegrid_cams_pane_g5

0x7bc4,	// (0x0007ee40) linegrid_cams_pane_g6

0x0d90,	// (0x0007800c) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00086668) linegrid_cams_pane_g

0x1783,	// (0x000789ff) popup_clock_analogue_window

0x1783,	// (0x000789ff) popup_clock_digital_window

0xe608,	// (0x00085884) popup_phob_thumbnail_window

0x0c13,	// (0x00077e8f) call_video_uplink_pane_g1

0x178c,	// (0x00078a08) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00086677) call_video_uplink_pane_g

0x1794,	// (0x00078a10) video_uplink_pane

0x179c,	// (0x00078a18) mce_image_pane_g1

0x7bcd,	// (0x0007ee49) mce_image_pane_g2

0x7bd7,	// (0x0007ee53) mce_image_pane_g3

0x7bdf,	// (0x0007ee5b) mce_image_pane_g4

0x7be7,	// (0x0007ee63) mce_image_pane_g5

0x0004,

0xf400,	// (0x0008667c) mce_image_pane_g

0x17a6,	// (0x00078a22) control_top_pane_stacon_cp01_ParamLimits

0x17a6,	// (0x00078a22) control_top_pane_stacon_cp01

0x17ba,	// (0x00078a36) uni_indicator_pane_stacon_cp01_ParamLimits

0x17ba,	// (0x00078a36) uni_indicator_pane_stacon_cp01

0x17cb,	// (0x00078a47) bg_popup_sub_pane_cp03

0x7bef,	// (0x0007ee6b) chi_dic_find_pane

0x7bf7,	// (0x0007ee73) listscroll_chi_dic_pane

0x7c00,	// (0x0007ee7c) main_pane_chidic_g1

0x17d5,	// (0x00078a51) chi_dic_find_pane_t1

0x17e3,	// (0x00078a5f) find_chidic_pane

0x17ec,	// (0x00078a68) chi_dic_list_pane_ParamLimits

0x17ec,	// (0x00078a68) chi_dic_list_pane

0x17fd,	// (0x00078a79) scroll_pane_cp020

0x1805,	// (0x00078a81) find_chidic_pane_t1

0xe608,	// (0x00085884) input_focus_pane_cp06

0x7c13,	// (0x0007ee8f) list_chi_dic_pane_ParamLimits

0x7c13,	// (0x0007ee8f) list_chi_dic_pane

0x7c2d,	// (0x0007eea9) list_chi_dic_pane_t1_ParamLimits

0x7c2d,	// (0x0007eea9) list_chi_dic_pane_t1

0xe608,	// (0x00085884) list_highlight_pane_cp020

0x1814,	// (0x00078a90) bg_cale_heading_pane_g1

0x7c40,	// (0x0007eebc) bg_cale_heading_pane_g2

0x7c48,	// (0x0007eec4) bg_cale_heading_pane_g3

0x7c50,	// (0x0007eecc) bg_cale_heading_pane_g4

0x7c5a,	// (0x0007eed6) bg_cale_heading_pane_g5

0x7c64,	// (0x0007eee0) bg_cale_heading_pane_g6

0x7c6c,	// (0x0007eee8) bg_cale_heading_pane_g7

0x7c74,	// (0x0007eef0) bg_cale_heading_pane_g8

0x7c7e,	// (0x0007eefa) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00086687) bg_cale_heading_pane_g

0x1814,	// (0x00078a90) bg_cale_side_pane_g1

0x7c88,	// (0x0007ef04) bg_cale_side_pane_g2

0x7c90,	// (0x0007ef0c) bg_cale_side_pane_g3

0x7c98,	// (0x0007ef14) bg_cale_side_pane_g4

0x7ca0,	// (0x0007ef1c) bg_cale_side_pane_g5

0x7ca8,	// (0x0007ef24) bg_cale_side_pane_g6

0x7cb0,	// (0x0007ef2c) bg_cale_side_pane_g7

0x7cb8,	// (0x0007ef34) bg_cale_side_pane_g8

0x7cc0,	// (0x0007ef3c) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0008669a) bg_cale_side_pane_g

0x7cc8,	// (0x0007ef44) popup_call_status_window_ParamLimits

0x7cc8,	// (0x0007ef44) popup_call_status_window

0x181c,	// (0x00078a98) stacon_top_pane

0x1824,	// (0x00078aa0) status_pane_ParamLimits

0x1824,	// (0x00078aa0) status_pane

0x1839,	// (0x00078ab5) status_small_pane

0x1841,	// (0x00078abd) control_pane

0xe608,	// (0x00085884) stacon_bottom_pane

0x1849,	// (0x00078ac5) list_single_mce_smart_pane_t1_ParamLimits

0x1849,	// (0x00078ac5) list_single_mce_smart_pane_t1

0x185c,	// (0x00078ad8) list_single_mce_smart_pane_t2_ParamLimits

0x185c,	// (0x00078ad8) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x000866ad) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x000866ad) list_single_mce_smart_pane_t

0x7cd4,	// (0x0007ef50) compass_pane

0x7ce0,	// (0x0007ef5c) main_location2_pane_t1

0x7cf4,	// (0x0007ef70) main_location2_pane_t2

0x7d08,	// (0x0007ef84) main_location2_pane_t3

0x0003,

0xf436,	// (0x000866b2) main_location2_pane_t

0x187b,	// (0x00078af7) compass_pane_g1_ParamLimits

0x187b,	// (0x00078af7) compass_pane_g1

0x7d52,	// (0x0007efce) compass_pane_t1

0x7d61,	// (0x0007efdd) compass_pane_t2

0x0005,

0xf43f,	// (0x000866bb) compass_pane_t

0x7dac,	// (0x0007f028) text_secondary_cp61

0x188f,	// (0x00078b0b) navi_pane_cams_g5

0x18b2,	// (0x00078b2e) navi_pane_im_t1

0x18c0,	// (0x00078b3c) navi_pane_mp_g1_ParamLimits

0x18c0,	// (0x00078b3c) navi_pane_mp_g1

0x18d4,	// (0x00078b50) navi_pane_mp_g2_ParamLimits

0x18d4,	// (0x00078b50) navi_pane_mp_g2

0x18e0,	// (0x00078b5c) navi_pane_mp_g3_ParamLimits

0x18e0,	// (0x00078b5c) navi_pane_mp_g3

0x0002,

0xf453,	// (0x000866cf) navi_pane_mp_g_ParamLimits

0xf453,	// (0x000866cf) navi_pane_mp_g

0x18ec,	// (0x00078b68) navi_pane_mp_t1

0x18fa,	// (0x00078b76) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x000866d6) navi_pane_mp_t

0x1936,	// (0x00078bb2) navi_pane_vt_g1

0x18ec,	// (0x00078b68) navi_pane_vt_t1

0x193e,	// (0x00078bba) navi_slider_pane

0x1946,	// (0x00078bc2) zooming_pane

0x194e,	// (0x00078bca) navi_slider_pane_g1

0x7ec1,	// (0x0007f13d) navi_slider_pane_g2

0x0006,

0xf461,	// (0x000866dd) navi_slider_pane_g

0x1984,	// (0x00078c00) aid_levels_zoom

0x198c,	// (0x00078c08) zooming_pane_g1

0x1994,	// (0x00078c10) zooming_pane_g2

0x1994,	// (0x00078c10) zooming_pane_g3

0x0002,

0xf470,	// (0x000866ec) zooming_pane_g

0x199c,	// (0x00078c18) level_10_zoom

0x19a5,	// (0x00078c21) level_11_zoom

0x19ae,	// (0x00078c2a) level_1_zoom

0x19b7,	// (0x00078c33) level_2_zoom

0x19c0,	// (0x00078c3c) level_3_zoom

0x19c9,	// (0x00078c45) level_4_zoom

0x19d2,	// (0x00078c4e) level_5_zoom

0x19db,	// (0x00078c57) level_6_zoom

0x19e4,	// (0x00078c60) level_7_zoom

0x19ed,	// (0x00078c69) level_8_zoom

0x19f6,	// (0x00078c72) level_9_zoom

0x1a07,	// (0x00078c83) popup_phob_thumbnail_window_g1

0x1a0f,	// (0x00078c8b) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x000866f3) popup_phob_thumbnail_window_g

0xea54,	// (0x00085cd0) level_1_location

0xea5c,	// (0x00085cd8) level_2_location

0xea64,	// (0x00085ce0) level_3_location

0xea6c,	// (0x00085ce8) level_4_location

0x1946,	// (0x00078bc2) level_5_location

0x7ed3,	// (0x0007f14f) mce_icon_pane_g1

0x7edb,	// (0x0007f157) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x000866f8) mce_icon_pane_g

0x7ee3,	// (0x0007f15f) main_mup_pane_g1_ParamLimits

0x7ee3,	// (0x0007f15f) main_mup_pane_g1

0x7efb,	// (0x0007f177) main_mup_pane_g2_ParamLimits

0x7efb,	// (0x0007f177) main_mup_pane_g2

0x7f17,	// (0x0007f193) main_mup_pane_g3_ParamLimits

0x7f17,	// (0x0007f193) main_mup_pane_g3

0x7f33,	// (0x0007f1af) main_mup_pane_g4_ParamLimits

0x7f33,	// (0x0007f1af) main_mup_pane_g4

0x7f4f,	// (0x0007f1cb) main_mup_pane_g5_ParamLimits

0x7f4f,	// (0x0007f1cb) main_mup_pane_g5

0x7f70,	// (0x0007f1ec) main_mup_pane_g6_ParamLimits

0x7f70,	// (0x0007f1ec) main_mup_pane_g6

0x7f8c,	// (0x0007f208) main_mup_pane_g7_ParamLimits

0x7f8c,	// (0x0007f208) main_mup_pane_g7

0x7fa8,	// (0x0007f224) main_mup_pane_g8_ParamLimits

0x7fa8,	// (0x0007f224) main_mup_pane_g8

0x7fc8,	// (0x0007f244) main_mup_pane_g9_ParamLimits

0x7fc8,	// (0x0007f244) main_mup_pane_g9

0x7fe7,	// (0x0007f263) main_mup_pane_g10_ParamLimits

0x7fe7,	// (0x0007f263) main_mup_pane_g10

0x8006,	// (0x0007f282) main_mup_pane_g11_ParamLimits

0x8006,	// (0x0007f282) main_mup_pane_g11

0x801e,	// (0x0007f29a) main_mup_pane_g12_ParamLimits

0x801e,	// (0x0007f29a) main_mup_pane_g12

0x802c,	// (0x0007f2a8) main_mup_pane_g13_ParamLimits

0x802c,	// (0x0007f2a8) main_mup_pane_g13

0x000c,

0xf481,	// (0x000866fd) main_mup_pane_g_ParamLimits

0xf481,	// (0x000866fd) main_mup_pane_g

0x8042,	// (0x0007f2be) main_mup_pane_t1_ParamLimits

0x8042,	// (0x0007f2be) main_mup_pane_t1

0x805f,	// (0x0007f2db) main_mup_pane_t2_ParamLimits

0x805f,	// (0x0007f2db) main_mup_pane_t2

0x8079,	// (0x0007f2f5) main_mup_pane_t3_ParamLimits

0x8079,	// (0x0007f2f5) main_mup_pane_t3

0x8093,	// (0x0007f30f) main_mup_pane_t4_ParamLimits

0x8093,	// (0x0007f30f) main_mup_pane_t4

0x80a5,	// (0x0007f321) main_mup_pane_t5_ParamLimits

0x80a5,	// (0x0007f321) main_mup_pane_t5

0x80b7,	// (0x0007f333) main_mup_pane_t6_ParamLimits

0x80b7,	// (0x0007f333) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00086718) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00086718) main_mup_pane_t

0x80cd,	// (0x0007f349) mup_progress_pane_ParamLimits

0x80cd,	// (0x0007f349) mup_progress_pane

0x80d9,	// (0x0007f355) mup_visualizer_pane_ParamLimits

0x80d9,	// (0x0007f355) mup_visualizer_pane

0x8113,	// (0x0007f38f) mup_volume_pane_ParamLimits

0x8113,	// (0x0007f38f) mup_volume_pane

0x1a17,	// (0x00078c93) mup_visualizer_pane_g1_ParamLimits

0x1a17,	// (0x00078c93) mup_visualizer_pane_g1

0x1a17,	// (0x00078c93) mup_visualizer_pane_g2_ParamLimits

0x1a17,	// (0x00078c93) mup_visualizer_pane_g2

0x187b,	// (0x00078af7) mup_visualizer_pane_g3_ParamLimits

0x187b,	// (0x00078af7) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00086725) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00086725) mup_visualizer_pane_g

0x0c13,	// (0x00077e8f) mup_volume_pane_g1

0x1a2d,	// (0x00078ca9) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0008672c) mup_volume_pane_g

0x0c13,	// (0x00077e8f) mup_progress_pane_g1

0x1a36,	// (0x00078cb2) mup_progress_pane_g2

0x1a3f,	// (0x00078cbb) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00086731) mup_progress_pane_g

0xe608,	// (0x00085884) bg_popup_window_pane_cp05

0x1a48,	// (0x00078cc4) heading_pane_cp02_ParamLimits

0x1a48,	// (0x00078cc4) heading_pane_cp02

0x1a62,	// (0x00078cde) list_popup_blid_pane

0x1a6a,	// (0x00078ce6) list_blid_sat_info_pane_ParamLimits

0x1a6a,	// (0x00078ce6) list_blid_sat_info_pane

0x1a7d,	// (0x00078cf9) list_blid_sat_info_pane_g1

0x1a85,	// (0x00078d01) list_blid_sat_info_pane_t1

0x8220,	// (0x0007f49c) mup_equalizer_pane_ParamLimits

0x8220,	// (0x0007f49c) mup_equalizer_pane

0x8241,	// (0x0007f4bd) mup_equalizer_pane_cp1_ParamLimits

0x8241,	// (0x0007f4bd) mup_equalizer_pane_cp1

0x8262,	// (0x0007f4de) mup_equalizer_pane_cp2_ParamLimits

0x8262,	// (0x0007f4de) mup_equalizer_pane_cp2

0x8283,	// (0x0007f4ff) mup_equalizer_pane_cp3_ParamLimits

0x8283,	// (0x0007f4ff) mup_equalizer_pane_cp3

0x82a4,	// (0x0007f520) mup_equalizer_pane_cp4_ParamLimits

0x82a4,	// (0x0007f520) mup_equalizer_pane_cp4

0x82c5,	// (0x0007f541) mup_equalizer_pane_cp5

0x82db,	// (0x0007f557) mup_equalizer_pane_cp6

0x82f3,	// (0x0007f56f) mup_equalizer_pane_cp7

0xe972,	// (0x00085bee) bg_popup_call_poc_act_pane_g9

0xe97a,	// (0x00085bf6) bg_popup_call_poc_act_pane_g10

0xe982,	// (0x00085bfe) bg_popup_call_poc_act_pane_g11

0x000a,

0x0aa1,	// (0x00077d1d) mup_scale_pane

0x0c13,	// (0x00077e8f) mup_scale_pane_g1

0x1a93,	// (0x00078d0f) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0008674d) mup_scale_pane_g

0x1ab7,	// (0x00078d33) msg_data_pane

0x1abf,	// (0x00078d3b) scroll_pane_cp017

0x831d,	// (0x0007f599) bg_list_pane_cp04_ParamLimits

0x831d,	// (0x0007f599) bg_list_pane_cp04

0x1ac7,	// (0x00078d43) msg_data_pane_g1

0x8343,	// (0x0007f5bf) msg_data_pane_g2

0x834d,	// (0x0007f5c9) msg_data_pane_g3

0x8355,	// (0x0007f5d1) msg_data_pane_g4

0x835d,	// (0x0007f5d9) msg_data_pane_g5

0x8365,	// (0x0007f5e1) msg_data_pane_g6

0x836d,	// (0x0007f5e9) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0008675c) msg_data_pane_g

0x8375,	// (0x0007f5f1) msg_text_pane_ParamLimits

0x8375,	// (0x0007f5f1) msg_text_pane

0x83ac,	// (0x0007f628) qrid_highlight_pane_cp011_ParamLimits

0x83ac,	// (0x0007f628) qrid_highlight_pane_cp011

0xe608,	// (0x00085884) msg_body_pane

0xe608,	// (0x00085884) msg_header_pane

0x1ad8,	// (0x00078d54) input_focus_pane_cp07

0x83d2,	// (0x0007f64e) msg_header_pane_t1_ParamLimits

0x83d2,	// (0x0007f64e) msg_header_pane_t1

0x83e4,	// (0x0007f660) msg_header_pane_t2_ParamLimits

0x83e4,	// (0x0007f660) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00086770) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00086770) msg_header_pane_t

0x1aed,	// (0x00078d69) msg_body_pane_g1

0x83f6,	// (0x0007f672) msg_body_pane_t1_ParamLimits

0x83f6,	// (0x0007f672) msg_body_pane_t1

0x8427,	// (0x0007f6a3) msg_body_pane_t2_ParamLimits

0x8427,	// (0x0007f6a3) msg_body_pane_t2

0x8439,	// (0x0007f6b5) msg_body_pane_t3_ParamLimits

0x8439,	// (0x0007f6b5) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00086775) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00086775) msg_body_pane_t

0x849d,	// (0x0007f719) main_viewer_pane_g1_ParamLimits

0x849d,	// (0x0007f719) main_viewer_pane_g1

0x84a9,	// (0x0007f725) main_viewer_pane_g2_ParamLimits

0x84a9,	// (0x0007f725) main_viewer_pane_g2

0x84b5,	// (0x0007f731) main_viewer_pane_g3_ParamLimits

0x84b5,	// (0x0007f731) main_viewer_pane_g3

0x84c6,	// (0x0007f742) main_viewer_pane_g4_ParamLimits

0x84c6,	// (0x0007f742) main_viewer_pane_g4

0x84d7,	// (0x0007f753) main_viewer_pane_g5_ParamLimits

0x84d7,	// (0x0007f753) main_viewer_pane_g5

0x84d7,	// (0x0007f753) main_viewer_pane_g7_ParamLimits

0x84d7,	// (0x0007f753) main_viewer_pane_g7

0x1426,	// (0x000786a2) main_viewer_pane_g8_ParamLimits

0x1426,	// (0x000786a2) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00086785) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00086785) main_viewer_pane_g

0x1b37,	// (0x00078db3) viewer_content_pane_ParamLimits

0x1b37,	// (0x00078db3) viewer_content_pane

0x8515,	// (0x0007f791) main_postcard_pane_g1_ParamLimits

0x8515,	// (0x0007f791) main_postcard_pane_g1

0x8523,	// (0x0007f79f) main_postcard_pane_g2_ParamLimits

0x8523,	// (0x0007f79f) main_postcard_pane_g2

0x8531,	// (0x0007f7ad) main_postcard_pane_g3_ParamLimits

0x8531,	// (0x0007f7ad) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00086796) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00086796) main_postcard_pane_g

0x8541,	// (0x0007f7bd) main_postcard_pane_g4

0xeb87,	// (0x00085e03) smil_status_volume_pane_g2

0x856d,	// (0x0007f7e9) postcard_pane_ParamLimits

0x856d,	// (0x0007f7e9) postcard_pane

0x1a17,	// (0x00078c93) postcard_pane_g1_ParamLimits

0x1a17,	// (0x00078c93) postcard_pane_g1

0x859f,	// (0x0007f81b) postcard_pane_g2_ParamLimits

0x859f,	// (0x0007f81b) postcard_pane_g2

0x85ab,	// (0x0007f827) postcard_pane_g3_ParamLimits

0x85ab,	// (0x0007f827) postcard_pane_g3

0x1b53,	// (0x00078dcf) postcard_pane_g4_ParamLimits

0x1b53,	// (0x00078dcf) postcard_pane_g4

0x85b7,	// (0x0007f833) postcard_pane_g5_ParamLimits

0x85b7,	// (0x0007f833) postcard_pane_g5

0x85c3,	// (0x0007f83f) postcard_pane_g6_ParamLimits

0x85c3,	// (0x0007f83f) postcard_pane_g6

0x1b45,	// (0x00078dc1) postcard_pane_g7_ParamLimits

0x1b45,	// (0x00078dc1) postcard_pane_g7

0x0006,

0xf527,	// (0x000867a3) postcard_pane_g_ParamLimits

0xf527,	// (0x000867a3) postcard_pane_g

0x85cf,	// (0x0007f84b) main_mp2_pane_g1_ParamLimits

0x85cf,	// (0x0007f84b) main_mp2_pane_g1

0x85db,	// (0x0007f857) main_mp2_pane_g2_ParamLimits

0x85db,	// (0x0007f857) main_mp2_pane_g2

0x85e7,	// (0x0007f863) main_mp2_pane_g3_ParamLimits

0x85e7,	// (0x0007f863) main_mp2_pane_g3

0x0002,

0xf536,	// (0x000867b2) main_mp2_pane_g_ParamLimits

0xf536,	// (0x000867b2) main_mp2_pane_g

0x85f3,	// (0x0007f86f) main_mp2_pane_t1_ParamLimits

0x85f3,	// (0x0007f86f) main_mp2_pane_t1

0x860a,	// (0x0007f886) main_mp2_pane_t2_ParamLimits

0x860a,	// (0x0007f886) main_mp2_pane_t2

0x861e,	// (0x0007f89a) main_mp2_pane_t3_ParamLimits

0x861e,	// (0x0007f89a) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x000867b9) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x000867b9) main_mp2_pane_t

0x1b61,	// (0x00078ddd) pec_content_pane_ParamLimits

0x1b61,	// (0x00078ddd) pec_content_pane

0x1079,	// (0x000782f5) scroll_pane_cp015

0x1b73,	// (0x00078def) pec_attribute_pane_ParamLimits

0x1b73,	// (0x00078def) pec_attribute_pane

0x8630,	// (0x0007f8ac) pec_content_pane_g1_ParamLimits

0x8630,	// (0x0007f8ac) pec_content_pane_g1

0x1b83,	// (0x00078dff) pec_content_pane_t1_ParamLimits

0x1b83,	// (0x00078dff) pec_content_pane_t1

0x1b95,	// (0x00078e11) pec_content_pane_t2_ParamLimits

0x1b95,	// (0x00078e11) pec_content_pane_t2

0x0001,

0xf544,	// (0x000867c0) pec_content_pane_t_ParamLimits

0xf544,	// (0x000867c0) pec_content_pane_t

0x863c,	// (0x0007f8b8) list_single_graphic_pane_cp01_ParamLimits

0x863c,	// (0x0007f8b8) list_single_graphic_pane_cp01

0x0aa1,	// (0x00077d1d) bg_popup_sub_pane_cp04

0x1ba7,	// (0x00078e23) popup_mup_playback_window_g1

0x1bb3,	// (0x00078e2f) popup_mup_playback_window_t1

0x1bc8,	// (0x00078e44) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x000867c5) popup_mup_playback_window_t

0x1bff,	// (0x00078e7b) main_image_pane_g1_ParamLimits

0x1bff,	// (0x00078e7b) main_image_pane_g1

0x1c42,	// (0x00078ebe) scroll_pane_cp018_ParamLimits

0x1c42,	// (0x00078ebe) scroll_pane_cp018

0x1c5a,	// (0x00078ed6) scroll_pane_cp016_ParamLimits

0x1c5a,	// (0x00078ed6) scroll_pane_cp016

0x86d5,	// (0x0007f951) smil2_image_pane_ParamLimits

0x86d5,	// (0x0007f951) smil2_image_pane

0x8705,	// (0x0007f981) smil2_root_pane_ParamLimits

0x8705,	// (0x0007f981) smil2_root_pane

0x8731,	// (0x0007f9ad) smil2_text_pane_ParamLimits

0x8731,	// (0x0007f9ad) smil2_text_pane

0xe608,	// (0x00085884) bg_list_pane_cp06

0x1c96,	// (0x00078f12) grid_radio_pane

0xe608,	// (0x00085884) bg_popup_window_pane_cp06

0x1c9e,	// (0x00078f1a) main_fmradio_pane_t1

0x16da,	// (0x00078956) heading_pane_cp04

0x1cac,	// (0x00078f28) main_fmradio_pane_t2

0xe98a,	// (0x00085c06) popup_cale_lunar_info_window_g1

0x1cba,	// (0x00078f36) main_fmradio_pane_t3

0xe992,	// (0x00085c0e) popup_cale_lunar_info_window_g2

0x1cc8,	// (0x00078f44) main_fmradio_pane_t4

0x0001,

0x1cd6,	// (0x00078f52) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x000868a0) popup_cale_lunar_info_window_g

0xf55e,	// (0x000867da) main_fmradio_pane_t

0x1ce4,	// (0x00078f60) wait_bar_pane_cp03

0x1cec,	// (0x00078f68) cell_fmradio_pane_ParamLimits

0x1cec,	// (0x00078f68) cell_fmradio_pane

0x1b45,	// (0x00078dc1) cell_fmradio_pane_g1_ParamLimits

0x1b45,	// (0x00078dc1) cell_fmradio_pane_g1

0xe608,	// (0x00085884) grid_highlight_pane_cp011

0x1cff,	// (0x00078f7b) poc_content_pane_ParamLimits

0x1cff,	// (0x00078f7b) poc_content_pane

0x1d11,	// (0x00078f8d) scroll_pane_cp019

0x8771,	// (0x0007f9ed) popup_call_poc_act_window_ParamLimits

0x8771,	// (0x0007f9ed) popup_call_poc_act_window

0x877e,	// (0x0007f9fa) popup_call_poc_inact_window_ParamLimits

0x877e,	// (0x0007f9fa) popup_call_poc_inact_window

0xf5fb,	// (0x00086877) bg_popup_call_poc_act_pane_g

0xe902,	// (0x00085b7e) bg_popup_call_poc_inact_pane_g1

0xe90a,	// (0x00085b86) bg_popup_call_poc_inact_pane_g2

0x1d19,	// (0x00078f95) popup_call_poc_act_window_g2

0xe912,	// (0x00085b8e) bg_popup_call_poc_inact_pane_g3

0xe91a,	// (0x00085b96) bg_popup_call_poc_inact_pane_g4

0xe922,	// (0x00085b9e) bg_popup_call_poc_inact_pane_g5

0x1d21,	// (0x00078f9d) popup_call_poc_act_window_t1_ParamLimits

0x1d21,	// (0x00078f9d) popup_call_poc_act_window_t1

0x1d49,	// (0x00078fc5) popup_call_poc_act_window_t2_ParamLimits

0x1d49,	// (0x00078fc5) popup_call_poc_act_window_t2

0x1d71,	// (0x00078fed) popup_call_poc_act_window_t3_ParamLimits

0x1d71,	// (0x00078fed) popup_call_poc_act_window_t3

0x1d99,	// (0x00079015) popup_call_poc_act_window_t4_ParamLimits

0x1d99,	// (0x00079015) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x000867e5) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x000867e5) popup_call_poc_act_window_t

0xe92a,	// (0x00085ba6) bg_popup_call_poc_inact_pane_g6

0xe932,	// (0x00085bae) bg_popup_call_poc_inact_pane_g7

0xe93a,	// (0x00085bb6) bg_popup_call_poc_inact_pane_g8

0x1dab,	// (0x00079027) popup_call_poc_inact_window_g2

0xe942,	// (0x00085bbe) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00086864) bg_popup_call_poc_inact_pane_g

0x1db3,	// (0x0007902f) popup_call_poc_inact_window_t1_ParamLimits

0x1db3,	// (0x0007902f) popup_call_poc_inact_window_t1

0x1dc8,	// (0x00079044) popup_call_poc_inact_window_t2_ParamLimits

0x1dc8,	// (0x00079044) popup_call_poc_inact_window_t2

0x1ddd,	// (0x00079059) popup_call_poc_inact_window_t3_ParamLimits

0x1ddd,	// (0x00079059) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x000867ee) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x000867ee) popup_call_poc_inact_window_t

0xeafa,	// (0x00085d76) context_pane_ParamLimits

0x939e,	// (0x0008061a) signal_pane_ParamLimits

0x1946,	// (0x00078bc2) main_call2_pane

0xeae8,	// (0x00085d64) popup_phob_thumbnail2_window_ParamLimits

0xeae8,	// (0x00085d64) popup_phob_thumbnail2_window

0x844b,	// (0x0007f6c7) aid_hotspot_pointer_arrow_pane

0x8453,	// (0x0007f6cf) aid_hotspot_pointer_hand_pane

0x90c2,	// (0x0008033e) phob_pre_status_pane_g5

0x69c8,	// (0x0007dc44) cams_zoom_pane_ParamLimits

0x69d4,	// (0x0007dc50) image_vga_pane_ParamLimits

0x69e3,	// (0x0007dc5f) main_camera_pane_g1_ParamLimits

0x69f1,	// (0x0007dc6d) main_camera_pane_g2_ParamLimits

0x69fd,	// (0x0007dc79) main_camera_pane_g3_ParamLimits

0x6a09,	// (0x0007dc85) main_camera_pane_g4_ParamLimits

0x6a15,	// (0x0007dc91) main_camera_pane_g5_ParamLimits

0x6a21,	// (0x0007dc9d) main_camera_pane_g6_ParamLimits

0x6a2d,	// (0x0007dca9) main_camera_pane_g7_ParamLimits

0xf271,	// (0x000864ed) main_camera_pane_g_ParamLimits

0x6a39,	// (0x0007dcb5) main_camera_pane_t1_ParamLimits

0x6a4b,	// (0x0007dcc7) main_camera_pane_t2_ParamLimits

0xf282,	// (0x000864fe) main_camera_pane_t_ParamLimits

0x0aa1,	// (0x00077d1d) bg_popup_preview_window_pane_cp01_ParamLimits

0x0aa1,	// (0x00077d1d) bg_popup_preview_window_pane_cp01

0x1df2,	// (0x0007906e) popup_phob_thumbnail2_window_g1_ParamLimits

0x1df2,	// (0x0007906e) popup_phob_thumbnail2_window_g1

0xe608,	// (0x00085884) call2_cli_visual_pane

0x879a,	// (0x0007fa16) popup_call2_audio_conf_window_ParamLimits

0x879a,	// (0x0007fa16) popup_call2_audio_conf_window

0x87af,	// (0x0007fa2b) popup_call2_audio_first_window_ParamLimits

0x87af,	// (0x0007fa2b) popup_call2_audio_first_window

0x884d,	// (0x0007fac9) popup_call2_audio_in_window_ParamLimits

0x884d,	// (0x0007fac9) popup_call2_audio_in_window

0x888f,	// (0x0007fb0b) popup_call2_audio_out_window_ParamLimits

0x888f,	// (0x0007fb0b) popup_call2_audio_out_window

0x88f1,	// (0x0007fb6d) popup_call2_audio_second_window_ParamLimits

0x88f1,	// (0x0007fb6d) popup_call2_audio_second_window

0x894f,	// (0x0007fbcb) popup_call2_audio_wait_window_ParamLimits

0x894f,	// (0x0007fbcb) popup_call2_audio_wait_window

0xe608,	// (0x00085884) bg_popup_call2_act_pane_cp03

0xe845,	// (0x00085ac1) list_conf_pane_cp

0x1dfe,	// (0x0007907a) popup_call2_audio_conf_window_t1

0x1737,	// (0x000789b3) list_single_graphic_popup_conf2_pane_ParamLimits

0x1737,	// (0x000789b3) list_single_graphic_popup_conf2_pane

0x174a,	// (0x000789c6) list_highlight_pane_cp04

0x1e0c,	// (0x00079088) list_single_graphic_popup_conf2_pane_g1

0x175b,	// (0x000789d7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x000867f5) list_single_graphic_popup_conf2_pane_g

0x1e16,	// (0x00079092) list_single_graphic_popup_conf2_pane_t1

0x1e24,	// (0x000790a0) bg_popup_call2_act_pane_cp01_ParamLimits

0x1e24,	// (0x000790a0) bg_popup_call2_act_pane_cp01

0x1eae,	// (0x0007912a) call_type_pane_cp05_ParamLimits

0x1eae,	// (0x0007912a) call_type_pane_cp05

0x1f02,	// (0x0007917e) popup_call2_audio_second_window_g1_ParamLimits

0x1f02,	// (0x0007917e) popup_call2_audio_second_window_g1

0x1f56,	// (0x000791d2) popup_call2_audio_second_window_g2_ParamLimits

0x1f56,	// (0x000791d2) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x000867fa) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x000867fa) popup_call2_audio_second_window_g

0x1fbb,	// (0x00079237) popup_call2_audio_second_window_t1_ParamLimits

0x1fbb,	// (0x00079237) popup_call2_audio_second_window_t1

0x2076,	// (0x000792f2) popup_call2_audio_second_window_t2_ParamLimits

0x2076,	// (0x000792f2) popup_call2_audio_second_window_t2

0x20c9,	// (0x00079345) popup_call2_audio_second_window_t3_ParamLimits

0x20c9,	// (0x00079345) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00086801) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00086801) popup_call2_audio_second_window_t

0xe608,	// (0x00085884) bg_popup_call2_in_pane_cp02

0xe612,	// (0x0008588e) call_type_pane_cp04

0xe61a,	// (0x00085896) popup_call2_audio_wait_window_g1

0xe622,	// (0x0008589e) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x000863da) popup_call2_audio_wait_window_g

0xe62a,	// (0x000858a6) popup_call2_audio_wait_window_t3

0x21bc,	// (0x00079438) bg_popup_call2_act_pane_ParamLimits

0x21bc,	// (0x00079438) bg_popup_call2_act_pane

0x227c,	// (0x000794f8) call_type_pane_cp03_ParamLimits

0x227c,	// (0x000794f8) call_type_pane_cp03

0x22e0,	// (0x0007955c) popup_call2_audio_first_window_g1_ParamLimits

0x22e0,	// (0x0007955c) popup_call2_audio_first_window_g1

0x2350,	// (0x000795cc) popup_call2_audio_first_window_g2_ParamLimits

0x2350,	// (0x000795cc) popup_call2_audio_first_window_g2

0x1a17,	// (0x00078c93) popup_call2_audio_first_window_g3_ParamLimits

0x1a17,	// (0x00078c93) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0008680a) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0008680a) popup_call2_audio_first_window_g

0x242e,	// (0x000796aa) popup_call2_audio_first_window_t1_ParamLimits

0x242e,	// (0x000796aa) popup_call2_audio_first_window_t1

0x898e,	// (0x0007fc0a) popup_call2_audio_first_window_t4_ParamLimits

0x898e,	// (0x0007fc0a) popup_call2_audio_first_window_t4

0x8a71,	// (0x0007fced) popup_call2_audio_first_window_t5_ParamLimits

0x8a71,	// (0x0007fced) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00086815) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00086815) popup_call2_audio_first_window_t

0xe85b,	// (0x00085ad7) bg_popup_call2_act_pane_g1

0xe99a,	// (0x00085c16) popup_cale_lunar_info_window_t1

0xe9a8,	// (0x00085c24) popup_cale_lunar_info_window_t2

0xe9b6,	// (0x00085c32) popup_cale_lunar_info_window_t3

0xe608,	// (0x00085884) bg_popup_call2_bubble_pane

0x8b72,	// (0x0007fdee) bg_popup_call2_in_pane_cp01_ParamLimits

0x8b72,	// (0x0007fdee) bg_popup_call2_in_pane_cp01

0xe2e4,	// (0x00085560) call_type_pane_cp02

0x8bba,	// (0x0007fe36) popup_call2_audio_out_window_g1_ParamLimits

0x8bba,	// (0x0007fe36) popup_call2_audio_out_window_g1

0x8be6,	// (0x0007fe62) popup_call2_audio_out_window_g2_ParamLimits

0x8be6,	// (0x0007fe62) popup_call2_audio_out_window_g2

0x8c0e,	// (0x0007fe8a) popup_call2_audio_out_window_g3_ParamLimits

0x8c0e,	// (0x0007fe8a) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0008681e) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0008681e) popup_call2_audio_out_window_g

0x8c49,	// (0x0007fec5) popup_call2_audio_out_window_t1_ParamLimits

0x8c49,	// (0x0007fec5) popup_call2_audio_out_window_t1

0x8ca8,	// (0x0007ff24) popup_call2_audio_out_window_t2_ParamLimits

0x8ca8,	// (0x0007ff24) popup_call2_audio_out_window_t2

0x8cfc,	// (0x0007ff78) popup_call2_audio_out_window_t3_ParamLimits

0x8cfc,	// (0x0007ff78) popup_call2_audio_out_window_t3

0x8d12,	// (0x0007ff8e) popup_call2_audio_out_window_t4_ParamLimits

0x8d12,	// (0x0007ff8e) popup_call2_audio_out_window_t4

0x8d28,	// (0x0007ffa4) popup_call2_audio_out_window_t5_ParamLimits

0x8d28,	// (0x0007ffa4) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00086827) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00086827) popup_call2_audio_out_window_t

0x8d8c,	// (0x00080008) bg_popup_call2_in_pane_ParamLimits

0x8d8c,	// (0x00080008) bg_popup_call2_in_pane

0x8de8,	// (0x00080064) popup_call2_audio_in_window_g1_ParamLimits

0x8de8,	// (0x00080064) popup_call2_audio_in_window_g1

0x8e20,	// (0x0008009c) popup_call2_audio_in_window_g2_ParamLimits

0x8e20,	// (0x0008009c) popup_call2_audio_in_window_g2

0x8e58,	// (0x000800d4) popup_call2_audio_in_window_g3_ParamLimits

0x8e58,	// (0x000800d4) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00086834) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00086834) popup_call2_audio_in_window_g

0x8eb0,	// (0x0008012c) popup_call2_audio_in_window_t1_ParamLimits

0x8eb0,	// (0x0008012c) popup_call2_audio_in_window_t1

0x8f30,	// (0x000801ac) popup_call2_audio_in_window_t2_ParamLimits

0x8f30,	// (0x000801ac) popup_call2_audio_in_window_t2

0xe86c,	// (0x00085ae8) popup_call2_audio_in_window_t3_ParamLimits

0xe86c,	// (0x00085ae8) popup_call2_audio_in_window_t3

0xe886,	// (0x00085b02) popup_call2_audio_in_window_t4_ParamLimits

0xe886,	// (0x00085b02) popup_call2_audio_in_window_t4

0xe898,	// (0x00085b14) popup_call2_audio_in_window_t5_ParamLimits

0xe898,	// (0x00085b14) popup_call2_audio_in_window_t5

0xe8ad,	// (0x00085b29) popup_call2_audio_in_window_t6_ParamLimits

0xe8ad,	// (0x00085b29) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0008683d) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0008683d) popup_call2_audio_in_window_t

0xe85b,	// (0x00085ad7) bg_popup_call2_in_pane_g1

0xe9c4,	// (0x00085c40) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x000868a5) popup_cale_lunar_info_window_t

0x0aa1,	// (0x00077d1d) bg_popup_call2_rect_pane_ParamLimits

0x0aa1,	// (0x00077d1d) bg_popup_call2_rect_pane

0xe608,	// (0x00085884) call2_cli_visual_graphic_pane

0xe608,	// (0x00085884) call2_cli_visual_text_pane

0x9444,	// (0x000806c0) smil_status_volume_pane_g3

0x0002,

0x0c13,	// (0x00077e8f) call2_cli_visual_graphic_pane_g1

0x0c13,	// (0x00077e8f) call2_cli_visual_graphic_pane_g2

0x0c13,	// (0x00077e8f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0008684a) call2_cli_visual_graphic_pane_g

0xe8c2,	// (0x00085b3e) bg_popup_call2_rect_pane_g1

0x0c9f,	// (0x00077f1b) bg_popup_call2_rect_pane_g2

0xe8ca,	// (0x00085b46) bg_popup_call2_rect_pane_g3

0xe8d2,	// (0x00085b4e) bg_popup_call2_rect_pane_g4

0xe8da,	// (0x00085b56) bg_popup_call2_rect_pane_g5

0xe8e2,	// (0x00085b5e) bg_popup_call2_rect_pane_g6

0xe8ea,	// (0x00085b66) bg_popup_call2_rect_pane_g7

0xe8f2,	// (0x00085b6e) bg_popup_call2_rect_pane_g8

0xe8fa,	// (0x00085b76) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00086851) bg_popup_call2_rect_pane_g

0xe902,	// (0x00085b7e) bg_popup_call2_bubble_pane_g1

0xe90a,	// (0x00085b86) bg_popup_call2_bubble_pane_g2

0xe912,	// (0x00085b8e) bg_popup_call2_bubble_pane_g3

0xe91a,	// (0x00085b96) bg_popup_call2_bubble_pane_g4

0xe922,	// (0x00085b9e) bg_popup_call2_bubble_pane_g5

0xe92a,	// (0x00085ba6) bg_popup_call2_bubble_pane_g6

0xe932,	// (0x00085bae) bg_popup_call2_bubble_pane_g7

0xe93a,	// (0x00085bb6) bg_popup_call2_bubble_pane_g8

0xe942,	// (0x00085bbe) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00086864) bg_popup_call2_bubble_pane_g

0x6505,	// (0x0007d781) aid_cale_week_size_cell_pane

0x6a5d,	// (0x0007dcd9) aid_cams_cif_uncrop_pane_ParamLimits

0x6a5d,	// (0x0007dcd9) aid_cams_cif_uncrop_pane

0x6bba,	// (0x0007de36) aid_cams_size_cell_ParamLimits

0x6bba,	// (0x0007de36) aid_cams_size_cell

0x6bc6,	// (0x0007de42) grid_cams_pane_ParamLimits

0x6bd4,	// (0x0007de50) linegrid_cams_pane_ParamLimits

0x6cc7,	// (0x0007df43) call_video_pane_t1

0x6ce1,	// (0x0007df5d) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00086551) call_video_pane_t

0x7199,	// (0x0007e415) aid_cale_month_size_cell_pane_ParamLimits

0x7199,	// (0x0007e415) aid_cale_month_size_cell_pane

0xf672,	// (0x000868ee) smil_status_volume_pane_g

0x9451,	// (0x000806cd) volume_smil_pane_ParamLimits

0xe1a7,	// (0x00085423) aid_popup2_width_pane

0x6402,	// (0x0007d67e) cell_qdial_pane_g4_ParamLimits

0x6402,	// (0x0007d67e) cell_qdial_pane_g4

0x7d2e,	// (0x0007efaa) aid_blid_cardinal_pane_ParamLimits

0x7d3e,	// (0x0007efba) aid_blid_destination_pane_ParamLimits

0x7d3e,	// (0x0007efba) aid_blid_destination_pane

0x0aa1,	// (0x00077d1d) bg_popup_call_poc_act_pane_ParamLimits

0x0aa1,	// (0x00077d1d) bg_popup_call_poc_act_pane

0x0aa1,	// (0x00077d1d) bg_popup_call_poc_inact_pane_ParamLimits

0x0aa1,	// (0x00077d1d) bg_popup_call_poc_inact_pane

0xe94a,	// (0x00085bc6) bg_popup_call_poc_act_pane_g1

0xe952,	// (0x00085bce) bg_popup_call_poc_act_pane_g2

0xe95a,	// (0x00085bd6) bg_popup_call_poc_act_pane_g3

0xe91a,	// (0x00085b96) bg_popup_call_poc_act_pane_g4

0xe922,	// (0x00085b9e) bg_popup_call_poc_act_pane_g5

0xe962,	// (0x00085bde) bg_popup_call_poc_act_pane_g6

0xe932,	// (0x00085bae) bg_popup_call_poc_act_pane_g7

0xe96a,	// (0x00085be6) bg_popup_call_poc_act_pane_g8

0xe608,	// (0x00085884) main_usb_pane

0xeac3,	// (0x00085d3f) popup_cale_lunar_info_window

0x6f8d,	// (0x0007e209) im_reading_pane_t1_ParamLimits

0x0fd1,	// (0x0007824d) list_im_pane_ParamLimits

0x0fe2,	// (0x0007825e) scroll_pane_cp07_ParamLimits

0xe608,	// (0x00085884) grid_highlight_pane_cp012

0x0aa1,	// (0x00077d1d) mup_scale_pane_ParamLimits

0x1a17,	// (0x00078c93) main_usb_pane_g1_ParamLimits

0x1a17,	// (0x00078c93) main_usb_pane_g1

0x8fe5,	// (0x00080261) main_usb_pane_g2_ParamLimits

0x8fe5,	// (0x00080261) main_usb_pane_g2

0x0001,

0xf612,	// (0x0008688e) main_usb_pane_g_ParamLimits

0xf612,	// (0x0008688e) main_usb_pane_g

0x8ff1,	// (0x0008026d) main_usb_pane_t1_ParamLimits

0x8ff1,	// (0x0008026d) main_usb_pane_t1

0x9003,	// (0x0008027f) main_usb_pane_t2_ParamLimits

0x9003,	// (0x0008027f) main_usb_pane_t2

0x9015,	// (0x00080291) main_usb_pane_t3_ParamLimits

0x9015,	// (0x00080291) main_usb_pane_t3

0x9027,	// (0x000802a3) main_usb_pane_t4_ParamLimits

0x9027,	// (0x000802a3) main_usb_pane_t4

0x9039,	// (0x000802b5) main_usb_pane_t5_ParamLimits

0x9039,	// (0x000802b5) main_usb_pane_t5

0x904b,	// (0x000802c7) main_usb_pane_t6_ParamLimits

0x904b,	// (0x000802c7) main_usb_pane_t6

0x0005,

0xf617,	// (0x00086893) main_usb_pane_t_ParamLimits

0x7cd4,	// (0x0007ef50) aid_text_placing

0x7ce0,	// (0x0007ef5c) main_location2_pane_t1_ParamLimits

0x7cf4,	// (0x0007ef70) main_location2_pane_t2_ParamLimits

0x7d08,	// (0x0007ef84) main_location2_pane_t3_ParamLimits

0x7d1c,	// (0x0007ef98) main_location2_pane_t4_ParamLimits

0x7d1c,	// (0x0007ef98) main_location2_pane_t4

0xf436,	// (0x000866b2) main_location2_pane_t_ParamLimits

0x0add,	// (0x00077d59) find_pinb_pane_g2_ParamLimits

0x0add,	// (0x00077d59) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00086400) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00086400) find_pinb_pane_g

0x0ae9,	// (0x00077d65) find_pinb_pane_t1_ParamLimits

0x0afb,	// (0x00077d77) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00086405) find_pinb_pane_t_ParamLimits

0xe608,	// (0x00085884) main_call3_pane

0x74e5,	// (0x0007e761) cale_month_day_heading_pane_t1_ParamLimits

0x7543,	// (0x0007e7bf) cale_month_day_heading_pane_t2_ParamLimits

0x75a8,	// (0x0007e824) cale_month_day_heading_pane_t3_ParamLimits

0x760d,	// (0x0007e889) cale_month_day_heading_pane_t4_ParamLimits

0x7672,	// (0x0007e8ee) cale_month_day_heading_pane_t5_ParamLimits

0x76d7,	// (0x0007e953) cale_month_day_heading_pane_t6_ParamLimits

0x773c,	// (0x0007e9b8) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00086589) cale_month_day_heading_pane_t_ParamLimits

0x1258,	// (0x000784d4) smil_status_volume_pane

0x8587,	// (0x0007f803) postcard_address_pane_ParamLimits

0x8587,	// (0x0007f803) postcard_address_pane

0x8593,	// (0x0007f80f) postcard_message_pane_ParamLimits

0x8593,	// (0x0007f80f) postcard_message_pane

0x8fb0,	// (0x0008022c) call2_cli_visual_pane_t1_ParamLimits

0x8fb0,	// (0x0008022c) call2_cli_visual_pane_t1

0x95a8,	// (0x00080824) postcard_message_pane_t1_ParamLimits

0x95a8,	// (0x00080824) postcard_message_pane_t1

0x9591,	// (0x0008080d) postcard_address_pane_t1_ParamLimits

0x9591,	// (0x0008080d) postcard_address_pane_t1

0x9582,	// (0x000807fe) popup_call3_audio_in_window_ParamLimits

0x9582,	// (0x000807fe) popup_call3_audio_in_window

0x9466,	// (0x000806e2) bg_popup_call3_in_pane_ParamLimits

0x9466,	// (0x000806e2) bg_popup_call3_in_pane

0x94c8,	// (0x00080744) popup_call3_audio_in_window_g1_ParamLimits

0x94c8,	// (0x00080744) popup_call3_audio_in_window_g1

0x94e0,	// (0x0008075c) popup_call3_audio_in_window_g2_ParamLimits

0x94e0,	// (0x0008075c) popup_call3_audio_in_window_g2

0x94f8,	// (0x00080774) popup_call3_audio_in_window_g3_ParamLimits

0x94f8,	// (0x00080774) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x000868f5) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x000868f5) popup_call3_audio_in_window_g

0x9520,	// (0x0008079c) popup_call3_audio_in_window_t1_ParamLimits

0x9520,	// (0x0008079c) popup_call3_audio_in_window_t1

0x9548,	// (0x000807c4) popup_call3_audio_in_window_t2_ParamLimits

0x9548,	// (0x000807c4) popup_call3_audio_in_window_t2

0x9570,	// (0x000807ec) popup_call3_audio_in_window_t3_ParamLimits

0x9570,	// (0x000807ec) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x000868fe) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x000868fe) popup_call3_audio_in_window_t

0x1946,	// (0x00078bc2) bg_popup_call3_rect_pane

0xe8c2,	// (0x00085b3e) bg_popup_call3_rect_pane_g1

0x0c9f,	// (0x00077f1b) bg_popup_call3_rect_pane_g2

0xe8ca,	// (0x00085b46) bg_popup_call3_rect_pane_g3

0xe8d2,	// (0x00085b4e) bg_popup_call3_rect_pane_g4

0xe8da,	// (0x00085b56) bg_popup_call3_rect_pane_g5

0xe8e2,	// (0x00085b5e) bg_popup_call3_rect_pane_g6

0xe8ea,	// (0x00085b66) bg_popup_call3_rect_pane_g7

0x812e,	// (0x0007f3aa) mup_visualizer_osc_pane

0x1a25,	// (0x00078ca1) mup_visualizer_spec_pane

0x9486,	// (0x00080702) call3_video_qcif_pane_ParamLimits

0x9486,	// (0x00080702) call3_video_qcif_pane

0x9498,	// (0x00080714) call3_video_qcif_uncrop_pane_ParamLimits

0x9498,	// (0x00080714) call3_video_qcif_uncrop_pane

0x94a6,	// (0x00080722) call3_video_subqcif_pane_ParamLimits

0x94a6,	// (0x00080722) call3_video_subqcif_pane

0x94b8,	// (0x00080734) call3_video_subqcif_uncrop_pane_ParamLimits

0x94b8,	// (0x00080734) call3_video_subqcif_uncrop_pane

0x9510,	// (0x0008078c) popup_call3_audio_in_window_g4_ParamLimits

0x9510,	// (0x0008078c) popup_call3_audio_in_window_g4

0x9433,	// (0x000806af) mup_spec_half_pane

0x943c,	// (0x000806b8) mup_spec_half_pane_cp

0xeb5a,	// (0x00085dd6) mup_osc_middle_pane

0xeb63,	// (0x00085ddf) mup_visualizer_osc_pane_g1

0x9414,	// (0x00080690) mup_spec_bar_pane_ParamLimits

0x9414,	// (0x00080690) mup_spec_bar_pane

0xeb47,	// (0x00085dc3) mup_spec_bar_pane_g1

0xeb51,	// (0x00085dcd) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000868e9) mup_spec_bar_pane_g

0x6505,	// (0x0007d781) aid_cale_week_size_cell_pane_ParamLimits

0x6518,	// (0x0007d794) bg_cale_heading_pane_ParamLimits

0x0d1b,	// (0x00077f97) bg_cale_pane_cp01_ParamLimits

0x652c,	// (0x0007d7a8) cale_week_corner_pane_ParamLimits

0x6542,	// (0x0007d7be) cale_week_day_heading_pane_ParamLimits

0x6556,	// (0x0007d7d2) cale_week_scroll_pane_g1_ParamLimits

0x6567,	// (0x0007d7e3) cale_week_scroll_pane_g2_ParamLimits

0x6578,	// (0x0007d7f4) cale_week_scroll_pane_g3_ParamLimits

0x6589,	// (0x0007d805) cale_week_scroll_pane_g4_ParamLimits

0x659a,	// (0x0007d816) cale_week_scroll_pane_g5_ParamLimits

0x65ab,	// (0x0007d827) cale_week_scroll_pane_g6_ParamLimits

0x65bc,	// (0x0007d838) cale_week_scroll_pane_g7_ParamLimits

0x65cf,	// (0x0007d84b) cale_week_scroll_pane_g8_ParamLimits

0x65e2,	// (0x0007d85e) cale_week_scroll_pane_g9_ParamLimits

0x65f3,	// (0x0007d86f) cale_week_scroll_pane_g10_ParamLimits

0x6604,	// (0x0007d880) cale_week_scroll_pane_g11_ParamLimits

0x6615,	// (0x0007d891) cale_week_scroll_pane_g12_ParamLimits

0x6626,	// (0x0007d8a2) cale_week_scroll_pane_g13_ParamLimits

0x6637,	// (0x0007d8b3) cale_week_scroll_pane_g14_ParamLimits

0x6648,	// (0x0007d8c4) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00086491) cale_week_scroll_pane_g_ParamLimits

0x6659,	// (0x0007d8d5) cale_week_time_pane_ParamLimits

0x666c,	// (0x0007d8e8) grid_cale_week_pane_ParamLimits

0x0d34,	// (0x00077fb0) listscroll_cale_week_pane_t1

0x6681,	// (0x0007d8fd) scroll_pane_cp08_ParamLimits

0x71da,	// (0x0007e456) cale_month_corner_pane_ParamLimits

0x11f8,	// (0x00078474) cale_month_pane_t1

0x74a4,	// (0x0007e720) cale_month_week_pane_ParamLimits

0x1a17,	// (0x00078c93) popup_call_status_window_g1_ParamLimits

0x7b03,	// (0x0007ed7f) popup_call_status_window_g2_ParamLimits

0x7b0f,	// (0x0007ed8b) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00086639) popup_call_status_window_g_ParamLimits

0x165f,	// (0x000788db) aid_call2_pane

0x83c6,	// (0x0007f642) msg_header_pane_g1

0x8587,	// (0x0007f803) postcard_address2_pane_ParamLimits

0x8587,	// (0x0007f803) postcard_address2_pane

0x8593,	// (0x0007f80f) postcard_message2_pane_ParamLimits

0x8593,	// (0x0007f80f) postcard_message2_pane

0x93ac,	// (0x00080628) message2_row_pane_ParamLimits

0x93ac,	// (0x00080628) message2_row_pane

0x93c7,	// (0x00080643) address2_row_pane_ParamLimits

0x93c7,	// (0x00080643) address2_row_pane

0xeb15,	// (0x00085d91) postcard_message2_row_pane_g1

0xeb1d,	// (0x00085d99) postcard_message2_row_pane_t1

0xeb15,	// (0x00085d91) address2_row_pane_g1

0xeb1d,	// (0x00085d99) address2_row_pane_t1

0x6929,	// (0x0007dba5) aid_size_cell_vorec

0xe608,	// (0x00085884) main_rss_pane

0x93da,	// (0x00080656) rss_list_single_pane_ParamLimits

0x93da,	// (0x00080656) rss_list_single_pane

0xeb2b,	// (0x00085da7) rss_list_single_pane_t1

0xeb39,	// (0x00085db5) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x000868e4) rss_list_single_pane_t

0xe608,	// (0x00085884) main_camera2_pane

0xe608,	// (0x00085884) main_video2_pane

0x960c,	// (0x00080888) cams_zoom_pane_cp2_ParamLimits

0x960c,	// (0x00080888) cams_zoom_pane_cp2

0x9618,	// (0x00080894) image2_vga_pane_ParamLimits

0x9618,	// (0x00080894) image2_vga_pane

0x9627,	// (0x000808a3) main_camera2_pane_g1_ParamLimits

0x9627,	// (0x000808a3) main_camera2_pane_g1

0x9633,	// (0x000808af) main_camera2_pane_g2_ParamLimits

0x9633,	// (0x000808af) main_camera2_pane_g2

0x963f,	// (0x000808bb) main_camera2_pane_g3_ParamLimits

0x963f,	// (0x000808bb) main_camera2_pane_g3

0x964b,	// (0x000808c7) main_camera2_pane_g4_ParamLimits

0x964b,	// (0x000808c7) main_camera2_pane_g4

0x9657,	// (0x000808d3) main_camera2_pane_g5_ParamLimits

0x9657,	// (0x000808d3) main_camera2_pane_g5

0x9663,	// (0x000808df) main_camera2_pane_g6_ParamLimits

0x9663,	// (0x000808df) main_camera2_pane_g6

0x966f,	// (0x000808eb) main_camera2_pane_g7_ParamLimits

0x966f,	// (0x000808eb) main_camera2_pane_g7

0x967b,	// (0x000808f7) main_camera2_pane_g8_ParamLimits

0x967b,	// (0x000808f7) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00086905) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00086905) main_camera2_pane_g

0x9693,	// (0x0008090f) main_camera2_pane_t1_ParamLimits

0x9693,	// (0x0008090f) main_camera2_pane_t1

0x96a5,	// (0x00080921) main_camera2_pane_t2_ParamLimits

0x96a5,	// (0x00080921) main_camera2_pane_t2

0x96b7,	// (0x00080933) main_camera2_pane_t3_ParamLimits

0x96b7,	// (0x00080933) main_camera2_pane_t3

0x96c9,	// (0x00080945) main_camera2_pane_t4_ParamLimits

0x96c9,	// (0x00080945) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00086918) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00086918) main_camera2_pane_t

0x972b,	// (0x000809a7) cams_zoom_pane_cp4_ParamLimits

0x972b,	// (0x000809a7) cams_zoom_pane_cp4

0x973b,	// (0x000809b7) image2_cif_pane_ParamLimits

0x973b,	// (0x000809b7) image2_cif_pane

0x9750,	// (0x000809cc) image2_subqcif_pane_ParamLimits

0x9750,	// (0x000809cc) image2_subqcif_pane

0x975f,	// (0x000809db) main_video2_pane_g1_ParamLimits

0x975f,	// (0x000809db) main_video2_pane_g1

0x9771,	// (0x000809ed) main_video2_pane_g2_ParamLimits

0x9771,	// (0x000809ed) main_video2_pane_g2

0x9781,	// (0x000809fd) main_video2_pane_g3_ParamLimits

0x9781,	// (0x000809fd) main_video2_pane_g3

0x9791,	// (0x00080a0d) main_video2_pane_g4_ParamLimits

0x9791,	// (0x00080a0d) main_video2_pane_g4

0x97a1,	// (0x00080a1d) main_video2_pane_g5_ParamLimits

0x97a1,	// (0x00080a1d) main_video2_pane_g5

0x97b1,	// (0x00080a2d) main_video2_pane_g6_ParamLimits

0x97b1,	// (0x00080a2d) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00086927) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00086927) main_video2_pane_g

0x97c3,	// (0x00080a3f) main_video2_pane_t1_ParamLimits

0x97c3,	// (0x00080a3f) main_video2_pane_t1

0x97dd,	// (0x00080a59) main_video2_pane_t2_ParamLimits

0x97dd,	// (0x00080a59) main_video2_pane_t2

0x9803,	// (0x00080a7f) main_video2_pane_t3_ParamLimits

0x9803,	// (0x00080a7f) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00086934) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00086934) main_video2_pane_t

0x9102,	// (0x0008037e) call_muted_g2

0x0001,

0xf65a,	// (0x000868d6) call_muted_g

0xe608,	// (0x00085884) main_mup2_pane

0xeb9a,	// (0x00085e16) main_mup2_pane_g1_ParamLimits

0xeb9a,	// (0x00085e16) main_mup2_pane_g1

0x9829,	// (0x00080aa5) main_mup2_pane_g2_ParamLimits

0x9829,	// (0x00080aa5) main_mup2_pane_g2

0x9aab,	// (0x00080d27) main_mup_pane_g13_cp1

0x9ab3,	// (0x00080d2f) mup_volume_pane_cp1

0x9849,	// (0x00080ac5) main_mup2_pane_g4_ParamLimits

0x9849,	// (0x00080ac5) main_mup2_pane_g4

0x985e,	// (0x00080ada) main_mup2_pane_g5_ParamLimits

0x985e,	// (0x00080ada) main_mup2_pane_g5

0x9873,	// (0x00080aef) main_mup2_pane_g6_ParamLimits

0x9873,	// (0x00080aef) main_mup2_pane_g6

0x9888,	// (0x00080b04) main_mup2_pane_g7_ParamLimits

0x9888,	// (0x00080b04) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0008693b) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0008693b) main_mup2_pane_g

0x98a4,	// (0x00080b20) main_mup2_pane_t1_ParamLimits

0x98a4,	// (0x00080b20) main_mup2_pane_t1

0x98bb,	// (0x00080b37) main_mup2_pane_t2_ParamLimits

0x98bb,	// (0x00080b37) main_mup2_pane_t2

0x98d2,	// (0x00080b4e) main_mup2_pane_t3_ParamLimits

0x98d2,	// (0x00080b4e) main_mup2_pane_t3

0x98e9,	// (0x00080b65) main_mup2_pane_t4_ParamLimits

0x98e9,	// (0x00080b65) main_mup2_pane_t4

0x9903,	// (0x00080b7f) main_mup2_pane_t5_ParamLimits

0x9903,	// (0x00080b7f) main_mup2_pane_t5

0x991d,	// (0x00080b99) main_mup2_pane_t6_ParamLimits

0x991d,	// (0x00080b99) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0008694a) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0008694a) main_mup2_pane_t

0x9955,	// (0x00080bd1) mup2_visualizer_pane_ParamLimits

0x9955,	// (0x00080bd1) mup2_visualizer_pane

0x998b,	// (0x00080c07) mup_progress_pane_cp_ParamLimits

0x998b,	// (0x00080c07) mup_progress_pane_cp

0x9a96,	// (0x00080d12) mup_volume_pane_cp_ParamLimits

0x9a96,	// (0x00080d12) mup_volume_pane_cp

0x99a2,	// (0x00080c1e) mup2_visualizer_pane_g1_ParamLimits

0x99a2,	// (0x00080c1e) mup2_visualizer_pane_g1

0xeba6,	// (0x00085e22) mup2_visualizer_pane_g2_ParamLimits

0xeba6,	// (0x00085e22) mup2_visualizer_pane_g2

0x99b7,	// (0x00080c33) mup2_visualizer_pane_g3_ParamLimits

0x99b7,	// (0x00080c33) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00086957) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00086957) mup2_visualizer_pane_g

0x1c8e,	// (0x00078f0a) aid_size_cell_fmradio

0x9218,	// (0x00080494) aid_height_parent_landcape

0x1060,	// (0x000782dc) wml_content_pane_cp

0x1068,	// (0x000782e4) wml_tabs_pane

0x1071,	// (0x000782ed) popup_wml_miniature_window

0x1079,	// (0x000782f5) scroll_pane_cp021

0x108d,	// (0x00078309) wml_content_pane_comp8

0xe608,	// (0x00085884) bg_popup_sub_pane_cp05

0xebc4,	// (0x00085e40) popup_wml_miniature_window_g1

0xebcc,	// (0x00085e48) wml_miniature_view_pane

0x99c5,	// (0x00080c41) aid_size_wml_view

0x99cd,	// (0x00080c49) wml_miniature_view_pane_g1

0x99d6,	// (0x00080c52) wml_miniature_view_pane_g2

0x99df,	// (0x00080c5b) wml_miniature_view_pane_g3

0x99e7,	// (0x00080c63) wml_miniature_view_pane_g4

0x99ef,	// (0x00080c6b) wml_miniature_view_pane_g5

0x99f7,	// (0x00080c73) wml_miniature_view_pane_g6

0x99ff,	// (0x00080c7b) wml_miniature_view_pane_g7

0x9a07,	// (0x00080c83) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0008695e) wml_miniature_view_pane_g

0xeb9a,	// (0x00085e16) background_graphic_ParamLimits

0xeb9a,	// (0x00085e16) background_graphic

0xebd4,	// (0x00085e50) wml_tabs_2_pane

0xebdd,	// (0x00085e59) wml_tabs_3_pane_ParamLimits

0xebdd,	// (0x00085e59) wml_tabs_3_pane

0xebef,	// (0x00085e6b) wml_tabs_4_pane_ParamLimits

0xebef,	// (0x00085e6b) wml_tabs_4_pane

0xec05,	// (0x00085e81) wml_tabs_5_pane_ParamLimits

0xec05,	// (0x00085e81) wml_tabs_5_pane

0xec1f,	// (0x00085e9b) wml_tabs_pane_g2_ParamLimits

0xec1f,	// (0x00085e9b) wml_tabs_pane_g2

0xec33,	// (0x00085eaf) wml_tabs_pane_g3_ParamLimits

0xec33,	// (0x00085eaf) wml_tabs_pane_g3

0x9a0f,	// (0x00080c8b) wml_tabs_2_active_pane_ParamLimits

0x9a0f,	// (0x00080c8b) wml_tabs_2_active_pane

0x9a1f,	// (0x00080c9b) wml_tabs_2_passive_pane_ParamLimits

0x9a1f,	// (0x00080c9b) wml_tabs_2_passive_pane

0x9a2f,	// (0x00080cab) wml_tabs_3_active_pane_cp_ParamLimits

0x9a2f,	// (0x00080cab) wml_tabs_3_active_pane_cp

0x9a40,	// (0x00080cbc) wml_tabs_3_passive_pane_ParamLimits

0x9a40,	// (0x00080cbc) wml_tabs_3_passive_pane

0x9a51,	// (0x00080ccd) wml_tabs_3_passive_pane_cp_ParamLimits

0x9a51,	// (0x00080ccd) wml_tabs_3_passive_pane_cp

0x9a62,	// (0x00080cde) tabs_4_active_pane

0x9a6a,	// (0x00080ce6) tabs_4_passive_pane

0x9a72,	// (0x00080cee) tabs_4_passive_pane_cp

0x9a7a,	// (0x00080cf6) tabs_4_passive_pane_cp2

0x8fdd,	// (0x00080259) aid_height_text

0x80fb,	// (0x0007f377) mup_volume_cont_pane_ParamLimits

0x80fb,	// (0x0007f377) mup_volume_cont_pane

0x604f,	// (0x0007d2cb) aid_size_cell_pinb

0x6059,	// (0x0007d2d5) aid_size_list_pinb

0x9974,	// (0x00080bf0) mup2_volume_cont_pane_ParamLimits

0x9974,	// (0x00080bf0) mup2_volume_cont_pane

0x9a82,	// (0x00080cfe) mup2_volume_cont_pane_g1_ParamLimits

0x9a82,	// (0x00080cfe) mup2_volume_cont_pane_g1

0x5ce8,	// (0x0007cf64) aid_size_cell_touch_ParamLimits

0x5ce8,	// (0x0007cf64) aid_size_cell_touch

0x5f35,	// (0x0007d1b1) touch_pane_ParamLimits

0x5f35,	// (0x0007d1b1) touch_pane

0xe195,	// (0x00085411) main_rss2_pane

0xec50,	// (0x00085ecc) listscroll_rss2_pane

0xec59,	// (0x00085ed5) rss2_navigation_pane

0xec61,	// (0x00085edd) list_rss2_pane

0x17fd,	// (0x00078a79) scroll_pane_cp22

0xec69,	// (0x00085ee5) rss2_navigation_pane_g1

0xec72,	// (0x00085eee) rss2_navigation_pane_g2

0xec7a,	// (0x00085ef6) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0008696f) rss2_navigation_pane_g

0xec82,	// (0x00085efe) rss2_navigation_pane_t1

0x9abb,	// (0x00080d37) rss2_list_single_pane_ParamLimits

0x9abb,	// (0x00080d37) rss2_list_single_pane

0xec90,	// (0x00085f0c) rss2_list_single_pane_t2

0xec9e,	// (0x00085f1a) rss2_list_single_pane_t3_ParamLimits

0xec9e,	// (0x00085f1a) rss2_list_single_pane_t3

0xecbb,	// (0x00085f37) rss2_list_single_pane_t4

0x7924,	// (0x0007eba0) smil_status_pane_g1

0x922f,	// (0x000804ab) main_image2_pane_ParamLimits

0x922f,	// (0x000804ab) main_image2_pane

0x9687,	// (0x00080903) main_camera2_pane_g9_ParamLimits

0x9687,	// (0x00080903) main_camera2_pane_g9

0x96db,	// (0x00080957) main_camera2_pane_t5_ParamLimits

0x96db,	// (0x00080957) main_camera2_pane_t5

0x96ed,	// (0x00080969) main_camera2_pane_t6_ParamLimits

0x96ed,	// (0x00080969) main_camera2_pane_t6

0x9aec,	// (0x00080d68) main_image2_pane_g1_ParamLimits

0x9aec,	// (0x00080d68) main_image2_pane_g1

0x875b,	// (0x0007f9d7) smil2_video_pane_ParamLimits

0x875b,	// (0x0007f9d7) smil2_video_pane

0x0a99,	// (0x00077d15) aid_zoom_text_primary_cp

0xe1eb,	// (0x00085467) popup_preview_fixed_window

0x0fc9,	// (0x00078245) im_reading_pane_g1

0x95d1,	// (0x0008084d) cams2_bc_adjust_pane_cp_ParamLimits

0x95d1,	// (0x0008084d) cams2_bc_adjust_pane_cp

0x971d,	// (0x00080999) cams2_bc_adjust_pane_ParamLimits

0x971d,	// (0x00080999) cams2_bc_adjust_pane

0xf127,	// (0x000863a3) cams2_bc_adjust_pane_g1

0x9af8,	// (0x00080d74) cams2_slider_pane

0x9b01,	// (0x00080d7d) cams2_slider_pane_g1

0x9b0a,	// (0x00080d86) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00086976) cams2_slider_pane_g

0x614a,	// (0x0007d3c6) calc_display_pane_ParamLimits

0x6168,	// (0x0007d3e4) calc_paper_pane_ParamLimits

0x6184,	// (0x0007d400) grid_calc_pane_ParamLimits

0x7b71,	// (0x0007eded) popup_clock_digital_window_t1_ParamLimits

0x1c2b,	// (0x00078ea7) main_image_pane_t1

0x6130,	// (0x0007d3ac) aid_size_cell_calc_ParamLimits

0x6130,	// (0x0007d3ac) aid_size_cell_calc

0x9258,	// (0x000804d4) popup_blid_sat_info2_window_ParamLimits

0x9258,	// (0x000804d4) popup_blid_sat_info2_window

0xecd1,	// (0x00085f4d) aid_size_cell_blid

0xecd9,	// (0x00085f55) bg_popup_window_pane_cp07

0xecfc,	// (0x00085f78) grid_popup_blid_pane

0xed06,	// (0x00085f82) heading_pane_cp05_ParamLimits

0xed06,	// (0x00085f82) heading_pane_cp05

0xedd0,	// (0x0008604c) cell_popup_blid_pane_ParamLimits

0xedd0,	// (0x0008604c) cell_popup_blid_pane

0xedf4,	// (0x00086070) cell_popup_blid_pane_g1

0xedfc,	// (0x00086078) cell_popup_blid_pane_t1

0x993a,	// (0x00080bb6) mup2_indicator_pane_ParamLimits

0x993a,	// (0x00080bb6) mup2_indicator_pane

0x1946,	// (0x00078bc2) mup2_visualizer_osc_pane

0xebb2,	// (0x00085e2e) mup2_visualizer_spec_pane_ParamLimits

0xebb2,	// (0x00085e2e) mup2_visualizer_spec_pane

0x9b24,	// (0x00080da0) mup2_spec_half_pane

0x9b2d,	// (0x00080da9) mup2_spec_half_pane_cp

0x9b37,	// (0x00080db3) mup2_spec_bar_pane_ParamLimits

0x9b37,	// (0x00080db3) mup2_spec_bar_pane

0xeb47,	// (0x00085dc3) mup2_spec_bar_pane_g1

0xeb51,	// (0x00085dcd) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000868e9) mup2_spec_bar_pane_g

0x9b56,	// (0x00080dd2) mup2_osc_middle_pane

0xeb63,	// (0x00085ddf) mup2_visualizer_osc_pane_g1

0xe215,	// (0x00085491) popup_number_entry_window_t1_ParamLimits

0xe228,	// (0x000854a4) popup_number_entry_window_t2_ParamLimits

0xe23a,	// (0x000854b6) popup_number_entry_window_t3_ParamLimits

0x5f8c,	// (0x0007d208) popup_number_entry_window_t5_ParamLimits

0x5f8c,	// (0x0007d208) popup_number_entry_window_t5

0xf12f,	// (0x000863ab) popup_number_entry_window_t_ParamLimits

0xe24c,	// (0x000854c8) text_title_cp2_ParamLimits

0x845b,	// (0x0007f6d7) aid_hotspot_pointer_text2_pane

0x84e9,	// (0x0007f765) main_viewer_pane_g9_ParamLimits

0x84e9,	// (0x0007f765) main_viewer_pane_g9

0x11f8,	// (0x00078474) cale_month_pane_t1_ParamLimits

0x128d,	// (0x00078509) bg_cale_pane_ParamLimits

0x12a5,	// (0x00078521) list_cale_pane_ParamLimits

0x0d34,	// (0x00077fb0) listscroll_cale_day_pane_t1

0x12b6,	// (0x00078532) scroll_pane_cp09_ParamLimits

0x8136,	// (0x0007f3b2) main_mup_eq_pane_t1_ParamLimits

0x8136,	// (0x0007f3b2) main_mup_eq_pane_t1

0x8150,	// (0x0007f3cc) main_mup_eq_pane_t2_ParamLimits

0x8150,	// (0x0007f3cc) main_mup_eq_pane_t2

0x816a,	// (0x0007f3e6) main_mup_eq_pane_t3_ParamLimits

0x816a,	// (0x0007f3e6) main_mup_eq_pane_t3

0x8182,	// (0x0007f3fe) main_mup_eq_pane_t4_ParamLimits

0x8182,	// (0x0007f3fe) main_mup_eq_pane_t4

0x819a,	// (0x0007f416) main_mup_eq_pane_t5_ParamLimits

0x819a,	// (0x0007f416) main_mup_eq_pane_t5

0x81b2,	// (0x0007f42e) main_mup_eq_pane_t6_ParamLimits

0x81b2,	// (0x0007f42e) main_mup_eq_pane_t6

0x81c6,	// (0x0007f442) main_mup_eq_pane_t7_ParamLimits

0x81c6,	// (0x0007f442) main_mup_eq_pane_t7

0x81da,	// (0x0007f456) main_mup_eq_pane_t8_ParamLimits

0x81da,	// (0x0007f456) main_mup_eq_pane_t8

0x81f0,	// (0x0007f46c) main_mup_eq_pane_t9_ParamLimits

0x81f0,	// (0x0007f46c) main_mup_eq_pane_t9

0x8208,	// (0x0007f484) main_mup_eq_pane_t10_ParamLimits

0x8208,	// (0x0007f484) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00086738) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00086738) main_mup_eq_pane_t

0x82c5,	// (0x0007f541) mup_equalizer_pane_cp5_ParamLimits

0x82db,	// (0x0007f557) mup_equalizer_pane_cp6_ParamLimits

0x82f3,	// (0x0007f56f) mup_equalizer_pane_cp7_ParamLimits

0xe195,	// (0x00085411) main_gallery_pane

0xeb6c,	// (0x00085de8) smil2_volume_pane

0xeb74,	// (0x00085df0) smil_status_volume_pane_g1_ParamLimits

0xeb87,	// (0x00085e03) smil_status_volume_pane_g2_ParamLimits

0x9444,	// (0x000806c0) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x000868ee) smil_status_volume_pane_g_ParamLimits

0xecd9,	// (0x00085f55) bg_popup_window_pane_cp07_ParamLimits

0xece7,	// (0x00085f63) blid_firmament_pane

0x9b5f,	// (0x00080ddb) aid_size_cell_gallery_ParamLimits

0x9b5f,	// (0x00080ddb) aid_size_cell_gallery

0x9b6d,	// (0x00080de9) grid_gallery_pane_ParamLimits

0x9b6d,	// (0x00080de9) grid_gallery_pane

0x9b7d,	// (0x00080df9) cell_gallery_pane_ParamLimits

0x9b7d,	// (0x00080df9) cell_gallery_pane

0xee0a,	// (0x00086086) bg_cell_gallery_focus_pane_ParamLimits

0xee0a,	// (0x00086086) bg_cell_gallery_focus_pane

0xee1c,	// (0x00086098) cell_gallery_pane_g1_ParamLimits

0xee1c,	// (0x00086098) cell_gallery_pane_g1

0x9bcb,	// (0x00080e47) cell_gallery_pane_g2_ParamLimits

0x9bcb,	// (0x00080e47) cell_gallery_pane_g2

0x9bd8,	// (0x00080e54) cell_gallery_pane_g3_ParamLimits

0x9bd8,	// (0x00080e54) cell_gallery_pane_g3

0xee28,	// (0x000860a4) cell_gallery_pane_g4_ParamLimits

0xee28,	// (0x000860a4) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0008699c) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0008699c) cell_gallery_pane_g

0xee34,	// (0x000860b0) bg_cell_gallery_focus_pane_g1

0xee3c,	// (0x000860b8) bg_cell_gallery_focus_pane_g2

0xee44,	// (0x000860c0) bg_cell_gallery_focus_pane_g3

0xee4c,	// (0x000860c8) bg_cell_gallery_focus_pane_g4

0xee54,	// (0x000860d0) bg_cell_gallery_focus_pane_g5

0xee5c,	// (0x000860d8) bg_cell_gallery_focus_pane_g6

0xee64,	// (0x000860e0) bg_cell_gallery_focus_pane_g7

0xee6c,	// (0x000860e8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x000869a5) bg_cell_gallery_focus_pane_g

0xee74,	// (0x000860f0) aid_firma_cardinal

0xee88,	// (0x00086104) blid_firmament_pane_t1

0xee9f,	// (0x0008611b) blid_firmament_pane_t2

0xeeb6,	// (0x00086132) blid_firmament_pane_t3

0xeecd,	// (0x00086149) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x000869b6) blid_firmament_pane_t

0xeee4,	// (0x00086160) blid_sat_info_pane

0xeef4,	// (0x00086170) blid_sat_info_pane_g1

0xeef4,	// (0x00086170) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x000869bf) blid_sat_info_pane_g

0xeefe,	// (0x0008617a) blid_sat_info_pane_t1

0xef0c,	// (0x00086188) smil2_volume_content_pane

0xef15,	// (0x00086191) smil2_volume_pane_g1

0xe863,	// (0x00085adf) smil2_volume_content_pane_g1

0xef1d,	// (0x00086199) smil2_volume_content_pane_g2

0xef26,	// (0x000861a2) smil2_volume_content_pane_g3

0xef2f,	// (0x000861ab) smil2_volume_content_pane_g4

0xef38,	// (0x000861b4) smil2_volume_content_pane_g5

0xef41,	// (0x000861bd) smil2_volume_content_pane_g6

0xef4a,	// (0x000861c6) smil2_volume_content_pane_g7

0xef53,	// (0x000861cf) smil2_volume_content_pane_g8

0xef5c,	// (0x000861d8) smil2_volume_content_pane_g9

0xef65,	// (0x000861e1) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x000869c4) smil2_volume_content_pane_g

0x66d7,	// (0x0007d953) cale_week_day_heading_pane_t1_ParamLimits

0x6704,	// (0x0007d980) cale_week_day_heading_pane_t2_ParamLimits

0x6731,	// (0x0007d9ad) cale_week_day_heading_pane_t3_ParamLimits

0x675e,	// (0x0007d9da) cale_week_day_heading_pane_t4_ParamLimits

0x678b,	// (0x0007da07) cale_week_day_heading_pane_t5_ParamLimits

0x67b8,	// (0x0007da34) cale_week_day_heading_pane_t6_ParamLimits

0x67e5,	// (0x0007da61) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x000864b0) cale_week_day_heading_pane_t_ParamLimits

0x0d46,	// (0x00077fc2) bg_cale_side_pane_ParamLimits

0x6812,	// (0x0007da8e) cale_week_time_pane_t1_ParamLimits

0x682a,	// (0x0007daa6) cale_week_time_pane_t2_ParamLimits

0x6842,	// (0x0007dabe) cale_week_time_pane_t3_ParamLimits

0x685a,	// (0x0007dad6) cale_week_time_pane_t4_ParamLimits

0x6872,	// (0x0007daee) cale_week_time_pane_t5_ParamLimits

0x688a,	// (0x0007db06) cale_week_time_pane_t6_ParamLimits

0x68a2,	// (0x0007db1e) cale_week_time_pane_t7_ParamLimits

0x68ba,	// (0x0007db36) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x000864bf) cale_week_time_pane_t_ParamLimits

0x68d2,	// (0x0007db4e) cell_cale_week_pane_g2_ParamLimits

0x0d46,	// (0x00077fc2) bg_cale_side_pane_cp01_ParamLimits

0x77b1,	// (0x0007ea2d) cale_month_week_pane_t1_ParamLimits

0x77c8,	// (0x0007ea44) cale_month_week_pane_t2_ParamLimits

0x77df,	// (0x0007ea5b) cale_month_week_pane_t3_ParamLimits

0x77f6,	// (0x0007ea72) cale_month_week_pane_t4_ParamLimits

0x780d,	// (0x0007ea89) cale_month_week_pane_t5_ParamLimits

0x7824,	// (0x0007eaa0) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00086598) cale_month_week_pane_t_ParamLimits

0x78f1,	// (0x0007eb6d) cell_cale_month_pane_g1_ParamLimits

0xe195,	// (0x00085411) main_cale_event_viewer_pane

0xe195,	// (0x00085411) listscroll_cale_event_viewer_pane

0xef6e,	// (0x000861ea) list_cale_ev_pane

0xef76,	// (0x000861f2) scroll_pane_cp023

0xef82,	// (0x000861fe) field_cale_ev_pane_ParamLimits

0xef82,	// (0x000861fe) field_cale_ev_pane

0xefa0,	// (0x0008621c) field_cale_ev_content_pane_ParamLimits

0xefa0,	// (0x0008621c) field_cale_ev_content_pane

0xefac,	// (0x00086228) field_cale_ev_pane_g1_ParamLimits

0xefac,	// (0x00086228) field_cale_ev_pane_g1

0xefb8,	// (0x00086234) field_cale_ev_pane_g2_ParamLimits

0xefb8,	// (0x00086234) field_cale_ev_pane_g2

0xefd0,	// (0x0008624c) field_cale_ev_pane_g3_ParamLimits

0xefd0,	// (0x0008624c) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x000869d9) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x000869d9) field_cale_ev_pane_g

0xefe8,	// (0x00086264) field_cale_ev_pane_t1_ParamLimits

0xefe8,	// (0x00086264) field_cale_ev_pane_t1

0xefff,	// (0x0008627b) field_cale_ev_content_pane_t1_ParamLimits

0xefff,	// (0x0008627b) field_cale_ev_content_pane_t1

0x1acf,	// (0x00078d4b) bg_button_pane_cp01

0x0b9a,	// (0x00077e16) listscroll_cale_week_pane_ParamLimits

0x64fb,	// (0x0007d777) popup_toolbar_window_cp01

0x0d34,	// (0x00077fb0) listscroll_cale_week_pane_t1_ParamLimits

0x0b9a,	// (0x00077e16) listscroll_cale_day_pane_ParamLimits

0x64fb,	// (0x0007d777) popup_toolbar_window_cp02

0x0d34,	// (0x00077fb0) listscroll_cale_day_pane_t1_ParamLimits

0x0b9a,	// (0x00077e16) main_cale_month_pane_ParamLimits

0x9328,	// (0x000805a4) popup_toolbar_window_cp03_ParamLimits

0x9328,	// (0x000805a4) popup_toolbar_window_cp03

0x8671,	// (0x0007f8ed) main_image_pane_g2_ParamLimits

0x8671,	// (0x0007f8ed) main_image_pane_g2

0x867d,	// (0x0007f8f9) main_image_pane_g3_ParamLimits

0x867d,	// (0x0007f8f9) main_image_pane_g3

0x0002,

0xf54e,	// (0x000867ca) main_image_pane_g_ParamLimits

0xf54e,	// (0x000867ca) main_image_pane_g

0x1c2b,	// (0x00078ea7) main_image_pane_t1_ParamLimits

0x8689,	// (0x0007f905) main_image_pane_t2_ParamLimits

0x8689,	// (0x0007f905) main_image_pane_t2

0x869b,	// (0x0007f917) main_image_pane_t3_ParamLimits

0x869b,	// (0x0007f917) main_image_pane_t3

0x86ad,	// (0x0007f929) main_image_pane_t4_ParamLimits

0x86ad,	// (0x0007f929) main_image_pane_t4

0x0003,

0xf555,	// (0x000867d1) main_image_pane_t_ParamLimits

0xf555,	// (0x000867d1) main_image_pane_t

0x86bf,	// (0x0007f93b) popup_image_details_window_cp01

0x86c9,	// (0x0007f945) popup_toobar_trans_pane_cp01_ParamLimits

0x86c9,	// (0x0007f945) popup_toobar_trans_pane_cp01

0x92a5,	// (0x00080521) popup_image_details_window_ParamLimits

0x92a5,	// (0x00080521) popup_image_details_window

0xeacd,	// (0x00085d49) popup_image_focus_window

0x95c3,	// (0x0008083f) camera2_autofocus_pane_ParamLimits

0x95c3,	// (0x0008083f) camera2_autofocus_pane

0xe195,	// (0x00085411) bg_popup_sub_pane_cp06

0xf01d,	// (0x00086299) popup_image_focus_window_g1

0xf025,	// (0x000862a1) popup_image_focus_window_g2

0xf02d,	// (0x000862a9) popup_image_focus_window_g3

0xf035,	// (0x000862b1) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x000869e0) popup_image_focus_window_g

0xf03d,	// (0x000862b9) popup_image_focus_window_t1

0xf04b,	// (0x000862c7) popup_image_focus_window_t2

0xf05b,	// (0x000862d7) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x000869e9) popup_image_focus_window_t

0xf069,	// (0x000862e5) camera2_autofocus_pane_g1

0x922f,	// (0x000804ab) bg_tb_trans_pane_cp01

0xf077,	// (0x000862f3) popup_image_details_window_g1

0xf08a,	// (0x00086306) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x000869fb) popup_image_details_window_g

0xf0b3,	// (0x0008632f) popup_image_details_window_t1

0xf0c5,	// (0x00086341) popup_image_details_window_t2

0xf0de,	// (0x0008635a) popup_image_details_window_t3

0xf0f2,	// (0x0008636e) popup_image_details_window_t4

0xf10d,	// (0x00086389) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00086a02) popup_image_details_window_t

0x0b6c,	// (0x00077de8) bg_calc_paper_pane_ParamLimits

0x627b,	// (0x0007d4f7) grid_highlight_pane_cp013

0x6285,	// (0x0007d501) list_calc_pane_ParamLimits

0x6297,	// (0x0007d513) scroll_pane_cp024

0x0b9a,	// (0x00077e16) bg_calc_display_pane_ParamLimits

0x629f,	// (0x0007d51b) calc_display_pane_t1_ParamLimits

0x62b4,	// (0x0007d530) calc_display_pane_t2_ParamLimits

0x62c9,	// (0x0007d545) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00086432) calc_display_pane_t_ParamLimits

0x63a5,	// (0x0007d621) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0008644f) cell_calc_pane_g

0x63ae,	// (0x0007d62a) cell_calc_pane_t1

0x0c1d,	// (0x00077e99) grid_highlight_pane_cp02_ParamLimits

0x0c33,	// (0x00077eaf) toolbar_button_pane_cp01_ParamLimits

0x0c33,	// (0x00077eaf) toolbar_button_pane_cp01

0x1c70,	// (0x00078eec) temp_image_control_pane_ParamLimits

0x1c70,	// (0x00078eec) temp_image_control_pane

0x922f,	// (0x000804ab) main_mp3_pane

0x2531,	// (0x000797ad) temp_image_control_pane_g1_ParamLimits

0x2531,	// (0x000797ad) temp_image_control_pane_g1

0x253f,	// (0x000797bb) temp_image_control_pane_g2_ParamLimits

0x253f,	// (0x000797bb) temp_image_control_pane_g2

0x2551,	// (0x000797cd) temp_image_control_pane_g3_ParamLimits

0x2551,	// (0x000797cd) temp_image_control_pane_g3

0x9c15,	// (0x00080e91) temp_image_control_pane_g4_ParamLimits

0x9c15,	// (0x00080e91) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00086a0d) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00086a0d) temp_image_control_pane_g

0x2531,	// (0x000797ad) main_mp3_pane_g1

0x9c26,	// (0x00080ea2) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00086a16) main_mp3_pane_g

0x2594,	// (0x00079810) main_mp3_pane_t1

0x0e15,	// (0x00078091) main_camera_pane_g8_ParamLimits

0x0e15,	// (0x00078091) main_camera_pane_g8

0x6b70,	// (0x0007ddec) main_video_pane_g7_ParamLimits

0x6b70,	// (0x0007ddec) main_video_pane_g7

0x970b,	// (0x00080987) main_camera2_pane_t7_ParamLimits

0x970b,	// (0x00080987) main_camera2_pane_t7

0x1020,	// (0x0007829c) scroll_pane_cp025_ParamLimits

0x1020,	// (0x0007829c) scroll_pane_cp025

0x1034,	// (0x000782b0) scroll_pane_cp026_ParamLimits

0x1034,	// (0x000782b0) scroll_pane_cp026

0x1043,	// (0x000782bf) wml_content_pane_ParamLimits

0xe195,	// (0x00085411) main_touch_calib_pane

0x9cca,	// (0x00080f46) main_touch_calib_pane_g1

0x9cd6,	// (0x00080f52) main_touch_calib_pane_g2

0x9ce2,	// (0x00080f5e) main_touch_calib_pane_g3

0x9cee,	// (0x00080f6a) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00086a34) main_touch_calib_pane_g

0x9cfa,	// (0x00080f76) main_touch_calib_pane_t1

0x9d11,	// (0x00080f8d) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x00086a3d) main_touch_calib_pane_t

0x1887,	// (0x00078b03) mup_progress_pane_cp02

0x18a6,	// (0x00078b22) navi_pane_g1

0x1908,	// (0x00078b84) navi_pane_mp_t3

0x922f,	// (0x000804ab) main_mp3_pane_ParamLimits

0x9366,	// (0x000805e2) navi_pane_ParamLimits

0x2531,	// (0x000797ad) main_mp3_pane_g1_ParamLimits

0x9c26,	// (0x00080ea2) main_mp3_pane_g2_ParamLimits

0x9c32,	// (0x00080eae) main_mp3_pane_g3_ParamLimits

0x9c32,	// (0x00080eae) main_mp3_pane_g3

0x9c3e,	// (0x00080eba) main_mp3_pane_g4_ParamLimits

0x9c3e,	// (0x00080eba) main_mp3_pane_g4

0x2561,	// (0x000797dd) main_mp3_pane_g5_ParamLimits

0x2561,	// (0x000797dd) main_mp3_pane_g5

0x256f,	// (0x000797eb) main_mp3_pane_g6_ParamLimits

0x256f,	// (0x000797eb) main_mp3_pane_g6

0x257c,	// (0x000797f8) main_mp3_pane_g7_ParamLimits

0x257c,	// (0x000797f8) main_mp3_pane_g7

0x2588,	// (0x00079804) main_mp3_pane_g8_ParamLimits

0x2588,	// (0x00079804) main_mp3_pane_g8

0xf79a,	// (0x00086a16) main_mp3_pane_g_ParamLimits

0x9c4a,	// (0x00080ec6) main_mp3_pane_t2

0x9c5a,	// (0x00080ed6) main_mp3_pane_t3

0x25a2,	// (0x0007981e) main_mp3_pane_t4

0x25b0,	// (0x0007982c) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00086a27) main_mp3_pane_t

0x25be,	// (0x0007983a) mup_progress_pane_cp01

0x0a99,	// (0x00077d15) aid_zoom_text_secondary2

0xef6e,	// (0x000861ea) list_cale_ev2_pane

0xef76,	// (0x000861f2) scroll_pane_cp023_ParamLimits

0x9d66,	// (0x00080fe2) field_cale_ev2_pane_ParamLimits

0x9d66,	// (0x00080fe2) field_cale_ev2_pane

0x9d8f,	// (0x0008100b) field_cale_ev2_pane_g1_ParamLimits

0x9d8f,	// (0x0008100b) field_cale_ev2_pane_g1

0x9d9b,	// (0x00081017) field_cale_ev2_pane_g2_ParamLimits

0x9d9b,	// (0x00081017) field_cale_ev2_pane_g2

0x9db3,	// (0x0008102f) field_cale_ev2_pane_g3_ParamLimits

0x9db3,	// (0x0008102f) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00086a48) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00086a48) field_cale_ev2_pane_g

0x25c6,	// (0x00079842) field_cale_ev2_pane_t1_ParamLimits

0x25c6,	// (0x00079842) field_cale_ev2_pane_t1

0x25dd,	// (0x00079859) field_cale_ev2_pane_t2_ParamLimits

0x25dd,	// (0x00079859) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00086a51) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00086a51) field_cale_ev2_pane_t

0x8551,	// (0x0007f7cd) main_postcard_pane_g5_ParamLimits

0x8551,	// (0x0007f7cd) main_postcard_pane_g5

0x855f,	// (0x0007f7db) main_postcard_pane_g6_ParamLimits

0x855f,	// (0x0007f7db) main_postcard_pane_g6

0x69b8,	// (0x0007dc34) camera2_autofocus_pane_cp_ParamLimits

0x69b8,	// (0x0007dc34) camera2_autofocus_pane_cp

0x922f,	// (0x000804ab) main_mup3_pane

0x9deb,	// (0x00081067) main_mup3_pane_g1_ParamLimits

0x9deb,	// (0x00081067) main_mup3_pane_g1

0x9e0c,	// (0x00081088) main_mup3_pane_g2_ParamLimits

0x9e0c,	// (0x00081088) main_mup3_pane_g2

0x9e84,	// (0x00081100) main_mup3_pane_g3_ParamLimits

0x9e84,	// (0x00081100) main_mup3_pane_g3

0x9ec3,	// (0x0008113f) main_mup3_pane_g4_ParamLimits

0x9ec3,	// (0x0008113f) main_mup3_pane_g4

0x9f02,	// (0x0008117e) main_mup3_pane_g5_ParamLimits

0x9f02,	// (0x0008117e) main_mup3_pane_g5

0x9f41,	// (0x000811bd) main_mup3_pane_g6_ParamLimits

0x9f41,	// (0x000811bd) main_mup3_pane_g6

0x25f2,	// (0x0007986e) main_mup3_pane_g7_ParamLimits

0x25f2,	// (0x0007986e) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00086a61) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00086a61) main_mup3_pane_g

0x9fb3,	// (0x0008122f) main_mup3_pane_t1_ParamLimits

0x9fb3,	// (0x0008122f) main_mup3_pane_t1

0xa01e,	// (0x0008129a) main_mup3_pane_t2_ParamLimits

0xa01e,	// (0x0008129a) main_mup3_pane_t2

0xa0e3,	// (0x0008135f) main_mup3_pane_t4_ParamLimits

0xa0e3,	// (0x0008135f) main_mup3_pane_t4

0xa131,	// (0x000813ad) main_mup3_pane_t5_ParamLimits

0xa131,	// (0x000813ad) main_mup3_pane_t5

0xa1d9,	// (0x00081455) main_mup3_pane_t6_ParamLimits

0xa1d9,	// (0x00081455) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00086a72) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00086a72) main_mup3_pane_t

0xa281,	// (0x000814fd) mup3_progress_pane_ParamLimits

0xa281,	// (0x000814fd) mup3_progress_pane

0xa2ec,	// (0x00081568) popup_mup3_control_window_ParamLimits

0xa2ec,	// (0x00081568) popup_mup3_control_window

0x2600,	// (0x0007987c) popup_mup3_text_window

0xa305,	// (0x00081581) mup3_progress_pane_t1

0xa31c,	// (0x00081598) mup3_progress_pane_t2

0x2608,	// (0x00079884) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00086a7f) mup3_progress_pane_t

0x261f,	// (0x0007989b) mup_progress_pane_cp03

0xe195,	// (0x00085411) bg_tb_trans_pane_cp04

0xa333,	// (0x000815af) mup3_volume_pane

0xa33b,	// (0x000815b7) popup_mup3_control_window_g1

0xa344,	// (0x000815c0) mup3_volume_pane_g1

0xa34d,	// (0x000815c9) mup3_volume_pane_g2

0xa356,	// (0x000815d2) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00086a86) mup3_volume_pane_g

0xe195,	// (0x00085411) bg_tb_trans_pane_cp03

0x262f,	// (0x000798ab) popup_mup3_text_window_g1

0x2637,	// (0x000798b3) popup_mup3_text_window_t1

0x0bf4,	// (0x00077e70) list_calc_item_pane_g1_ParamLimits

0xec47,	// (0x00085ec3) mup_volume_pane_cp_g1

0x9d28,	// (0x00080fa4) main_touch_calib_pane_t3

0x9d3c,	// (0x00080fb8) main_touch_calib_pane_t4

0x9d50,	// (0x00080fcc) main_touch_calib_pane_t5

0xe19f,	// (0x0008541b) aid_cell_size_toolbar2

0xe1a7,	// (0x00085423) aid_popup3_width_pane

0x0a89,	// (0x00077d05) aid_zoom_text_msg_primary

0x698f,	// (0x0007dc0b) vorec_t7

0x0bb8,	// (0x00077e34) bg_calc_paper_pane_g1_ParamLimits

0x0bd0,	// (0x00077e4c) bg_calc_paper_pane_g2_ParamLimits

0x0bc4,	// (0x00077e40) bg_calc_paper_pane_g3_ParamLimits

0x0be8,	// (0x00077e64) bg_calc_paper_pane_g4_ParamLimits

0x0bdc,	// (0x00077e58) bg_calc_paper_pane_g5_ParamLimits

0x6308,	// (0x0007d584) bg_calc_paper_pane_g6_ParamLimits

0x6319,	// (0x0007d595) bg_calc_paper_pane_g7_ParamLimits

0x632a,	// (0x0007d5a6) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00086439) bg_calc_paper_pane_g_ParamLimits

0x633b,	// (0x0007d5b7) calc_bg_paper_pane_g9_ParamLimits

0x6a9f,	// (0x0007dd1b) image_qvga_pane_ParamLimits

0x6a9f,	// (0x0007dd1b) image_qvga_pane

0x0aa1,	// (0x00077d1d) bg_popup_sub_pane_cp04_ParamLimits

0x1ba7,	// (0x00078e23) popup_mup_playback_window_g1_ParamLimits

0x1bb3,	// (0x00078e2f) popup_mup_playback_window_t1_ParamLimits

0x1bc8,	// (0x00078e44) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x000867c5) popup_mup_playback_window_t_ParamLimits

0x983a,	// (0x00080ab6) main_mup2_pane_g3_ParamLimits

0x983a,	// (0x00080ab6) main_mup2_pane_g3

0x6d47,	// (0x0007dfc3) popup_toolbar_window_cp04

0x1faa,	// (0x00079226) popup_call2_audio_second_window_g3_ParamLimits

0x1faa,	// (0x00079226) popup_call2_audio_second_window_g3

0x23b4,	// (0x00079630) popup_call2_audio_first_window_g4_ParamLimits

0x23b4,	// (0x00079630) popup_call2_audio_first_window_g4

0x8e90,	// (0x0008010c) popup_call2_audio_in_window_g4_ParamLimits

0x8e90,	// (0x0008010c) popup_call2_audio_in_window_g4

0x8664,	// (0x0007f8e0) aid_area_sk_bg_cut_ParamLimits

0x8664,	// (0x0007f8e0) aid_area_sk_bg_cut

0x1bdd,	// (0x00078e59) aid_area_sk_bg_cut_2_ParamLimits

0x1bdd,	// (0x00078e59) aid_area_sk_bg_cut_2

0x9bbb,	// (0x00080e37) aid_placing_details_win

0x9bc3,	// (0x00080e3f) aid_placing_details_win_2

0xf069,	// (0x000862e5) camera2_autofocus_pane_g1_ParamLimits

0x5eef,	// (0x0007d16b) popup_fixed_preview_cale_window_ParamLimits

0x5eef,	// (0x0007d16b) popup_fixed_preview_cale_window

0x1972,	// (0x00078bee) navi_slider_pane_g3

0x1969,	// (0x00078be5) navi_slider_pane_g4

0x1960,	// (0x00078bdc) navi_slider_pane_g5

0x1972,	// (0x00078bee) navi_slider_pane_g6

0x7eca,	// (0x0007f146) navi_slider_pane_g7

0x1a9c,	// (0x00078d18) mup_scale_pane_g3

0x1aa5,	// (0x00078d21) mup_scale_pane_g4

0x1aae,	// (0x00078d2a) mup_scale_pane_g5

0x830b,	// (0x0007f587) mup_scale_pane_g6

0x8314,	// (0x0007f590) mup_scale_pane_g7

0x1972,	// (0x00078bee) cams2_slider_pane_g3

0xecc9,	// (0x00085f45) cams2_slider_pane_g4

0x9b13,	// (0x00080d8f) cams2_slider_pane_g5

0x1972,	// (0x00078bee) cams2_slider_pane_g6

0x9b1b,	// (0x00080d97) cams2_slider_pane_g7

0xeef4,	// (0x00086170) camera2_autofocus_pane_cp_g1

0x2645,	// (0x000798c1) bg_popup_preview_window_pane_cp02_ParamLimits

0x2645,	// (0x000798c1) bg_popup_preview_window_pane_cp02

0x2651,	// (0x000798cd) list_fp_cale_pane_ParamLimits

0x2651,	// (0x000798cd) list_fp_cale_pane

0x265d,	// (0x000798d9) popup_fixed_preview_cale_window_t1_ParamLimits

0x265d,	// (0x000798d9) popup_fixed_preview_cale_window_t1

0xa35f,	// (0x000815db) popup_fixed_preview_cale_window_t2_ParamLimits

0xa35f,	// (0x000815db) popup_fixed_preview_cale_window_t2

0xa374,	// (0x000815f0) popup_fixed_preview_cale_window_t3_ParamLimits

0xa374,	// (0x000815f0) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00086a8d) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00086a8d) popup_fixed_preview_cale_window_t

0xa389,	// (0x00081605) list_single_fp_cale_pane_ParamLimits

0xa389,	// (0x00081605) list_single_fp_cale_pane

0x267b,	// (0x000798f7) list_single_fp_cale_pane_g1_ParamLimits

0x267b,	// (0x000798f7) list_single_fp_cale_pane_g1

0x2687,	// (0x00079903) list_single_fp_cale_pane_g2_ParamLimits

0x2687,	// (0x00079903) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00086a94) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00086a94) list_single_fp_cale_pane_g

0x26a0,	// (0x0007991c) list_single_fp_cale_pane_t1_ParamLimits

0x26a0,	// (0x0007991c) list_single_fp_cale_pane_t1

0x26b2,	// (0x0007992e) list_single_fp_cale_pane_t2_ParamLimits

0x26b2,	// (0x0007992e) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00086a9b) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00086a9b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe195,	// (0x00085411) main_dialer_pane

0xa39b,	// (0x00081617) aid_cell_size_keypad

0xa3a5,	// (0x00081621) dialer_ne_pane

0xa3af,	// (0x0008162b) grid_dialer_command_1_pane

0xa3b7,	// (0x00081633) grid_dialer_command_2_pane

0xa3bf,	// (0x0008163b) grid_dialer_keypad_pane

0xa3d1,	// (0x0008164d) bg_popup_call_pane_cp06_ParamLimits

0xa3d1,	// (0x0008164d) bg_popup_call_pane_cp06

0xa3dd,	// (0x00081659) dialer_ne_clear_pane_ParamLimits

0xa3dd,	// (0x00081659) dialer_ne_clear_pane

0x26e5,	// (0x00079961) dialer_ne_pane_g1

0x26ed,	// (0x00079969) dialer_ne_pane_t1_ParamLimits

0x26ed,	// (0x00079969) dialer_ne_pane_t1

0xa3e9,	// (0x00081665) dialer_ne_pane_t2_ParamLimits

0xa3e9,	// (0x00081665) dialer_ne_pane_t2

0xa406,	// (0x00081682) dialer_ne_pane_t3_ParamLimits

0xa406,	// (0x00081682) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x00086aa0) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x00086aa0) dialer_ne_pane_t

0xa42a,	// (0x000816a6) dialer_ne_pane_t3_copy1_ParamLimits

0xa42a,	// (0x000816a6) dialer_ne_pane_t3_copy1

0xa44e,	// (0x000816ca) cell_dialer_keypad_pane_ParamLimits

0xa44e,	// (0x000816ca) cell_dialer_keypad_pane

0xa465,	// (0x000816e1) cell_dialer_command_1_pane_ParamLimits

0xa465,	// (0x000816e1) cell_dialer_command_1_pane

0xa47b,	// (0x000816f7) cell_dialer_command_2_pane_ParamLimits

0xa47b,	// (0x000816f7) cell_dialer_command_2_pane

0x26ff,	// (0x0007997b) bg_button_pane_cp02_ParamLimits

0x26ff,	// (0x0007997b) bg_button_pane_cp02

0xa48a,	// (0x00081706) cell_dialer_keypad_pane_g1_ParamLimits

0xa48a,	// (0x00081706) cell_dialer_keypad_pane_g1

0x26ff,	// (0x0007997b) bg_button_pane_cp03_ParamLimits

0x26ff,	// (0x0007997b) bg_button_pane_cp03

0xa49f,	// (0x0008171b) cell_dialer_command_1_pane_g1_ParamLimits

0xa49f,	// (0x0008171b) cell_dialer_command_1_pane_g1

0x270b,	// (0x00079987) bg_button_pane_cp04

0xa4b3,	// (0x0008172f) cell_dialer_command_2_pane_g1

0x1946,	// (0x00078bc2) bg_button_pane_cp06

0x2713,	// (0x0007998f) dialer_ne_clear_pane_g1

0x7e0d,	// (0x0007f089) navi_pane_g2

0x7e3b,	// (0x0007f0b7) navi_pane_g3

0x0002,

0xf44c,	// (0x000866c8) navi_pane_g

0x7e66,	// (0x0007f0e2) navi_pane_mv_g2

0x7e8d,	// (0x0007f109) navi_pane_mv_g5

0x7e95,	// (0x0007f111) navi_pane_mv_t1

0x0b9a,	// (0x00077e16) main_clock2_pane

0xa4e2,	// (0x0008175e) main_clock2_list_pane_ParamLimits

0xa4e2,	// (0x0008175e) main_clock2_list_pane

0xa50a,	// (0x00081786) main_clock2_pane_t1_ParamLimits

0xa50a,	// (0x00081786) main_clock2_pane_t1

0xa538,	// (0x000817b4) main_clock2_pane_t2_ParamLimits

0xa538,	// (0x000817b4) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00086aa7) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00086aa7) main_clock2_pane_t

0xa59f,	// (0x0008181b) popup_clock_analogue_window_cp03_ParamLimits

0xa59f,	// (0x0008181b) popup_clock_analogue_window_cp03

0xa5bd,	// (0x00081839) popup_clock_digital_window_cp02_ParamLimits

0xa5bd,	// (0x00081839) popup_clock_digital_window_cp02

0xa62a,	// (0x000818a6) main_clock2_list_single_pane_ParamLimits

0xa62a,	// (0x000818a6) main_clock2_list_single_pane

0x1946,	// (0x00078bc2) list_highlight_pane_cp05

0x271b,	// (0x00079997) main_clock2_list_single_pane_t1

0x6d47,	// (0x0007dfc3) popup_toolbar_window_cp04_ParamLimits

0x9be5,	// (0x00080e61) camera2_autofocus_pane_g2_ParamLimits

0x9be5,	// (0x00080e61) camera2_autofocus_pane_g2

0x9bf1,	// (0x00080e6d) camera2_autofocus_pane_g3_ParamLimits

0x9bf1,	// (0x00080e6d) camera2_autofocus_pane_g3

0x9bfd,	// (0x00080e79) camera2_autofocus_pane_g4_ParamLimits

0x9bfd,	// (0x00080e79) camera2_autofocus_pane_g4

0x9c09,	// (0x00080e85) camera2_autofocus_pane_g5_ParamLimits

0x9c09,	// (0x00080e85) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x000869f0) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x000869f0) camera2_autofocus_pane_g

0x9dcb,	// (0x00081047) camera2_autofocus_pane_cp_g2

0x9dd3,	// (0x0008104f) camera2_autofocus_pane_cp_g3

0x9ddb,	// (0x00081057) camera2_autofocus_pane_cp_g4

0x9de3,	// (0x0008105f) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00086a56) camera2_autofocus_pane_cp_g

0xa3c9,	// (0x00081645) popup_dialer_spcha_window

0xe195,	// (0x00085411) bg_popup_sub_pane_cp07

0x2729,	// (0x000799a5) list_spcha_pane

0x2731,	// (0x000799ad) list_single_spcha_pane_ParamLimits

0x2731,	// (0x000799ad) list_single_spcha_pane

0xe195,	// (0x00085411) list_highlight_pane_cp06

0x2742,	// (0x000799be) list_single_spcha_pane_t1

0x8c3a,	// (0x0007feb6) popup_call2_audio_out_window_g4_ParamLimits

0x8c3a,	// (0x0007feb6) popup_call2_audio_out_window_g4

0xe195,	// (0x00085411) main_imed2_pane

0xead5,	// (0x00085d51) popup_imed_adjust2_window

0x92b3,	// (0x0008052f) popup_imed_trans_window_ParamLimits

0x92b3,	// (0x0008052f) popup_imed_trans_window

0xed32,	// (0x00085fae) popup_blid_sat_info2_window_t1

0xed40,	// (0x00085fbc) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00086985) popup_blid_sat_info2_window_t

0xa6d4,	// (0x00081950) aid_size_cell_colour_35

0xa6ee,	// (0x0008196a) aid_size_cell_colour_112

0xa705,	// (0x00081981) aid_size_cell_effect

0x922f,	// (0x000804ab) bg_tb_trans_pane_cp02

0xa71f,	// (0x0008199b) heading_imed_pane

0xa72b,	// (0x000819a7) listscroll_imed_pane

0x2750,	// (0x000799cc) heading_imed_pane_g1

0x2758,	// (0x000799d4) heading_imed_pane_t1

0x2766,	// (0x000799e2) grid_imed_colour_35_pane_ParamLimits

0x2766,	// (0x000799e2) grid_imed_colour_35_pane

0xa737,	// (0x000819b3) grid_imed_effect_pane

0x277d,	// (0x000799f9) list_imed_aspect_pane

0xa747,	// (0x000819c3) scroll_pane_cp027_ParamLimits

0xa747,	// (0x000819c3) scroll_pane_cp027

0xa753,	// (0x000819cf) cell_imed_effect_pane_ParamLimits

0xa753,	// (0x000819cf) cell_imed_effect_pane

0x2785,	// (0x00079a01) cell_imed_colour_pane_ParamLimits

0x2785,	// (0x00079a01) cell_imed_colour_pane

0x27c7,	// (0x00079a43) cell_imed_colour_pane_g1_ParamLimits

0x27c7,	// (0x00079a43) cell_imed_colour_pane_g1

0x27d8,	// (0x00079a54) hgihlgiht_grid_pane_cp016_ParamLimits

0x27d8,	// (0x00079a54) hgihlgiht_grid_pane_cp016

0xa76b,	// (0x000819e7) cell_imed_effect_pane_g1

0xa773,	// (0x000819ef) grid_highlight_pane_cp017

0x27e9,	// (0x00079a65) list_imed_single_pane_ParamLimits

0x27e9,	// (0x00079a65) list_imed_single_pane

0xe195,	// (0x00085411) list_highlight_pane_cp07

0x27fe,	// (0x00079a7a) list_imed_aspect_pane_comp1_t1

0xeaad,	// (0x00085d29) bg_tb_trans_pane_cp05

0x2820,	// (0x00079a9c) popup_imed_adjust2_window_g1

0x2847,	// (0x00079ac3) popup_imed_adjust2_window_t1

0x285f,	// (0x00079adb) slider_imed_adjust_pane

0x2873,	// (0x00079aef) slider_imed_adjust_pane_g1

0x2883,	// (0x00079aff) slider_imed_adjust_pane_g2

0x2893,	// (0x00079b0f) slider_imed_adjust_pane_g3

0x28a4,	// (0x00079b20) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00086ac4) slider_imed_adjust_pane_g

0xa77c,	// (0x000819f8) aid_size_cell_clipart2

0xa788,	// (0x00081a04) grid_imed_clipart_pane

0x28b5,	// (0x00079b31) scroll_pane_cp031

0xa792,	// (0x00081a0e) cell_imed_clipart_pane_ParamLimits

0xa792,	// (0x00081a0e) cell_imed_clipart_pane

0xa7b4,	// (0x00081a30) cell_imed_clipart_pane_g1

0xe195,	// (0x00085411) grid_highlight_pane_cp014

0xa4ee,	// (0x0008176a) main_clock2_pane_g1_ParamLimits

0xa4ee,	// (0x0008176a) main_clock2_pane_g1

0xa5d5,	// (0x00081851) aid_call2_pane_cp10

0xa5e7,	// (0x00081863) aid_call_pane_cp10

0x187b,	// (0x00078af7) popup_clock_analogue_window_cp10_g1

0x187b,	// (0x00078af7) popup_clock_analogue_window_cp10_g2

0xa5f9,	// (0x00081875) popup_clock_analogue_window_cp10_g3

0xa5f9,	// (0x00081875) popup_clock_analogue_window_cp10_g4

0x187b,	// (0x00078af7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x00086ab2) popup_clock_analogue_window_cp10_g

0xa60b,	// (0x00081887) popup_clock_analogue_window_cp10_t1

0xa63c,	// (0x000818b8) clock_digital_number_pane_cp10_ParamLimits

0xa63c,	// (0x000818b8) clock_digital_number_pane_cp10

0xa654,	// (0x000818d0) clock_digital_number_pane_cp11_ParamLimits

0xa654,	// (0x000818d0) clock_digital_number_pane_cp11

0xa66c,	// (0x000818e8) clock_digital_number_pane_cp12_ParamLimits

0xa66c,	// (0x000818e8) clock_digital_number_pane_cp12

0xa684,	// (0x00081900) clock_digital_number_pane_cp13_ParamLimits

0xa684,	// (0x00081900) clock_digital_number_pane_cp13

0xa69c,	// (0x00081918) clock_digital_separator_pane_cp10_ParamLimits

0xa69c,	// (0x00081918) clock_digital_separator_pane_cp10

0xa6b4,	// (0x00081930) popup_clock_digital_window_cp02_t1_ParamLimits

0xa6b4,	// (0x00081930) popup_clock_digital_window_cp02_t1

0xe85b,	// (0x00085ad7) clock_digital_number_pane_cp10_g1

0xe85b,	// (0x00085ad7) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x00086acd) clock_digital_number_pane_cp10_g

0xe85b,	// (0x00085ad7) clock_digital_separator_pane_cp10_g1

0xe85b,	// (0x00085ad7) clock_digital_separator_pane_g2_cp10

0x1916,	// (0x00078b92) navi_pane_vded_g4

0x191f,	// (0x00078b9b) navi_pane_vded_g5

0x1928,	// (0x00078ba4) navi_pane_vded_t1

0xe195,	// (0x00085411) main_vded_pane

0xa7bd,	// (0x00081a39) main_vded_pane_g1

0xa7c9,	// (0x00081a45) main_vded_pane_g2

0xa7d3,	// (0x00081a4f) main_vded_pane_g3

0x0002,

0xf856,	// (0x00086ad2) main_vded_pane_g

0xa7dd,	// (0x00081a59) main_vded_pane_t1

0xa7eb,	// (0x00081a67) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00086ad9) main_vded_pane_t

0xa7f9,	// (0x00081a75) vded_slider_pane

0xa803,	// (0x00081a7f) vded_video_pane

0x28bd,	// (0x00079b39) vded_video_pane_g1

0xa80d,	// (0x00081a89) vded_video_pane_g2

0xeef4,	// (0x00086170) vded_video_pane_g3

0x0002,

0xf862,	// (0x00086ade) vded_video_pane_g

0x28c7,	// (0x00079b43) vded_slider_pane_g1

0xec47,	// (0x00085ec3) vded_slider_pane_g2

0x28d0,	// (0x00079b4c) vded_slider_pane_g3

0x28d9,	// (0x00079b55) vded_slider_pane_g4

0x28e2,	// (0x00079b5e) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00086ae5) vded_slider_pane_g

0xa2de,	// (0x0008155a) mup3_rocker_pane_ParamLimits

0xa2de,	// (0x0008155a) mup3_rocker_pane

0xa816,	// (0x00081a92) mup3_control_keys_pane_g1

0xa81e,	// (0x00081a9a) mup3_control_keys_pane_g2

0xa826,	// (0x00081aa2) mup3_control_keys_pane_g3

0xa82e,	// (0x00081aaa) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x00086af0) mup3_control_keys_pane_g

0x5f0d,	// (0x0007d189) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5f0d,	// (0x0007d189) popup_toolbar2_fixed_window_cp01

0xa2f8,	// (0x00081574) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa2f8,	// (0x00081574) popup_toolbar2_fixed_window_cp02

0x211c,	// (0x00079398) popup_call2_audio_second_window_t4_ParamLimits

0x211c,	// (0x00079398) popup_call2_audio_second_window_t4

0x8aa7,	// (0x0007fd23) popup_call2_audio_first_window_t6_ParamLimits

0x8aa7,	// (0x0007fd23) popup_call2_audio_first_window_t6

0x8d3d,	// (0x0007ffb9) popup_call2_audio_out_window_t6_ParamLimits

0x8d3d,	// (0x0007ffb9) popup_call2_audio_out_window_t6

0xe195,	// (0x00085411) main_vitu_pane

0xa83e,	// (0x00081aba) aid_size_cell_itu_ParamLimits

0xa83e,	// (0x00081aba) aid_size_cell_itu

0x2d0c,	// (0x00079f88) bg_popup_window_pane_cp08_ParamLimits

0x2d0c,	// (0x00079f88) bg_popup_window_pane_cp08

0xa84c,	// (0x00081ac8) field_vitu_entry_pane_ParamLimits

0xa84c,	// (0x00081ac8) field_vitu_entry_pane

0xa85b,	// (0x00081ad7) grid_vitu_function_pane_ParamLimits

0xa85b,	// (0x00081ad7) grid_vitu_function_pane

0xa86b,	// (0x00081ae7) grid_vitu_itu_pane_ParamLimits

0xa86b,	// (0x00081ae7) grid_vitu_itu_pane

0xa87b,	// (0x00081af7) cell_vitu_itu_pane_ParamLimits

0xa87b,	// (0x00081af7) cell_vitu_itu_pane

0xa890,	// (0x00081b0c) cell_vitu_function_pane_ParamLimits

0xa890,	// (0x00081b0c) cell_vitu_function_pane

0x922f,	// (0x000804ab) bg_popup_sub_pane_cp08_ParamLimits

0x922f,	// (0x000804ab) bg_popup_sub_pane_cp08

0xa8a2,	// (0x00081b1e) field_vitu_entry_pane_t1_ParamLimits

0xa8a2,	// (0x00081b1e) field_vitu_entry_pane_t1

0x2903,	// (0x00079b7f) field_vitu_entry_pane_t2_ParamLimits

0x2903,	// (0x00079b7f) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x00086afe) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x00086afe) field_vitu_entry_pane_t

0x2920,	// (0x00079b9c) bg_button_pane_cp05_ParamLimits

0x2920,	// (0x00079b9c) bg_button_pane_cp05

0xa8bd,	// (0x00081b39) cell_vitu_itu_pane_g1

0xa8d5,	// (0x00081b51) cell_vitu_itu_pane_t1_ParamLimits

0xa8d5,	// (0x00081b51) cell_vitu_itu_pane_t1

0xa8e7,	// (0x00081b63) cell_vitu_itu_pane_t2_ParamLimits

0xa8e7,	// (0x00081b63) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00086b03) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00086b03) cell_vitu_itu_pane_t

0x292e,	// (0x00079baa) bg_button_pane_cp07

0xa91c,	// (0x00081b98) cell_vitu_function_pane_g1

0x61a6,	// (0x0007d422) main_calc_pane_g1

0x5d10,	// (0x0007cf8c) aid_visual_content_pane

0xe195,	// (0x00085411) main_vradio_pane

0xa925,	// (0x00081ba1) main_vradio_pane_g1_ParamLimits

0xa925,	// (0x00081ba1) main_vradio_pane_g1

0x2938,	// (0x00079bb4) main_vradio_pane_g2_ParamLimits

0x2938,	// (0x00079bb4) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00086b0a) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00086b0a) main_vradio_pane_g

0xa935,	// (0x00081bb1) main_vradio_pane_t1_ParamLimits

0xa935,	// (0x00081bb1) main_vradio_pane_t1

0xa947,	// (0x00081bc3) main_vradio_pane_t2_ParamLimits

0xa947,	// (0x00081bc3) main_vradio_pane_t2

0x2945,	// (0x00079bc1) main_vradio_pane_t3_ParamLimits

0x2945,	// (0x00079bc1) main_vradio_pane_t3

0x0002,

0xf893,	// (0x00086b0f) main_vradio_pane_t_ParamLimits

0xf893,	// (0x00086b0f) main_vradio_pane_t

0xa959,	// (0x00081bd5) vradio_rocker_control_pane_ParamLimits

0xa959,	// (0x00081bd5) vradio_rocker_control_pane

0xa965,	// (0x00081be1) vradio_station_info_pane_ParamLimits

0xa965,	// (0x00081be1) vradio_station_info_pane

0x2959,	// (0x00079bd5) vradio_frequency_info_pane_ParamLimits

0x2959,	// (0x00079bd5) vradio_frequency_info_pane

0xeef4,	// (0x00086170) vradio_station_info_pane_g1

0x2968,	// (0x00079be4) vradio_station_info_pane_t1_ParamLimits

0x2968,	// (0x00079be4) vradio_station_info_pane_t1

0x298a,	// (0x00079c06) vradio_station_info_pane_t2_ParamLimits

0x298a,	// (0x00079c06) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00086b16) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00086b16) vradio_station_info_pane_t

0x299c,	// (0x00079c18) vradio_tuning_pane

0x29a4,	// (0x00079c20) vradio_rocker_control_pane_g1

0x29ac,	// (0x00079c28) vradio_rocker_control_pane_g2

0x29b4,	// (0x00079c30) vradio_rocker_control_pane_g3

0x29bc,	// (0x00079c38) vradio_rocker_control_pane_g4

0x29c4,	// (0x00079c40) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00086b1b) vradio_rocker_control_pane_g

0xa974,	// (0x00081bf0) vradio_frequency_info_pane_g1

0x29cc,	// (0x00079c48) vradio_frequency_info_pane_t1_ParamLimits

0x29cc,	// (0x00079c48) vradio_frequency_info_pane_t1

0xa97e,	// (0x00081bfa) vradio_tuning_pane_g1

0xa987,	// (0x00081c03) vradio_tuning_pane_t1

0xe1b3,	// (0x0008542f) area_side_right_pane_ParamLimits

0xe1b3,	// (0x0008542f) area_side_right_pane

0xea74,	// (0x00085cf0) status_small_pane_g1

0xea7c,	// (0x00085cf8) status_small_pane_g2

0xea85,	// (0x00085d01) status_small_pane_g3

0xea8e,	// (0x00085d0a) status_small_pane_g4

0x0003,

0xf65f,	// (0x000868db) status_small_pane_g

0xea97,	// (0x00085d13) status_small_pane_t1

0xe195,	// (0x00085411) main_video3_pane

0x29e0,	// (0x00079c5c) cams_zoom_vslider_pane

0x29e8,	// (0x00079c64) image3_wide_pane_ParamLimits

0x29e8,	// (0x00079c64) image3_wide_pane

0x2a02,	// (0x00079c7e) image3_wide_small_pane

0x2a0e,	// (0x00079c8a) main_video3_pane_g1_ParamLimits

0x2a0e,	// (0x00079c8a) main_video3_pane_g1

0x2a2a,	// (0x00079ca6) main_video3_pane_g2_ParamLimits

0x2a2a,	// (0x00079ca6) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00086b26) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00086b26) main_video3_pane_g

0x2a46,	// (0x00079cc2) main_video3_pane_t1_ParamLimits

0x2a46,	// (0x00079cc2) main_video3_pane_t1

0x2a71,	// (0x00079ced) main_video3_pane_t2_ParamLimits

0x2a71,	// (0x00079ced) main_video3_pane_t2

0x2a9c,	// (0x00079d18) main_video3_pane_t3_ParamLimits

0x2a9c,	// (0x00079d18) main_video3_pane_t3

0x0002,

0xf8af,	// (0x00086b2b) main_video3_pane_t_ParamLimits

0xf8af,	// (0x00086b2b) main_video3_pane_t

0x2ac9,	// (0x00079d45) cams_zoom_vslider_pane_g1

0x2ad2,	// (0x00079d4e) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00086b32) cams_zoom_vslider_pane_g

0x2ada,	// (0x00079d56) small_slider_vertical_pane

0xeef4,	// (0x00086170) small_slider_vertical_pane_g1

0xeef4,	// (0x00086170) small_slider_vertical_pane_g2

0x2ae2,	// (0x00079d5e) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00086b37) small_slider_vertical_pane_g

0xe195,	// (0x00085411) main_hwr_training_pane

0x2aeb,	// (0x00079d67) hwr_training_instruct_pane_ParamLimits

0x2aeb,	// (0x00079d67) hwr_training_instruct_pane

0xa996,	// (0x00081c12) hwr_training_navi_pane_ParamLimits

0xa996,	// (0x00081c12) hwr_training_navi_pane

0xa9b0,	// (0x00081c2c) hwr_training_write_pane_ParamLimits

0xa9b0,	// (0x00081c2c) hwr_training_write_pane

0xe195,	// (0x00085411) bg_frame_shadow_pane

0x2b22,	// (0x00079d9e) hwr_training_write_pane_g1

0x2b2a,	// (0x00079da6) hwr_training_write_pane_g2

0x2b32,	// (0x00079dae) hwr_training_write_pane_g3

0x2b3a,	// (0x00079db6) hwr_training_write_pane_g4

0x2b42,	// (0x00079dbe) hwr_training_write_pane_g5

0x2b4a,	// (0x00079dc6) hwr_training_write_pane_g6

0x2b52,	// (0x00079dce) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x00086b3e) hwr_training_write_pane_g

0xa9e8,	// (0x00081c64) hwr_training_navi_pane_g1_ParamLimits

0xa9e8,	// (0x00081c64) hwr_training_navi_pane_g1

0xa9fa,	// (0x00081c76) hwr_training_navi_pane_g2_ParamLimits

0xa9fa,	// (0x00081c76) hwr_training_navi_pane_g2

0xaa0c,	// (0x00081c88) hwr_training_navi_pane_g3_ParamLimits

0xaa0c,	// (0x00081c88) hwr_training_navi_pane_g3

0xaa1c,	// (0x00081c98) hwr_training_navi_pane_g4_ParamLimits

0xaa1c,	// (0x00081c98) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x00086b4d) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x00086b4d) hwr_training_navi_pane_g

0xaa36,	// (0x00081cb2) hwr_training_navi_pane_t1

0xaa44,	// (0x00081cc0) list_single_hwr_training_instruct_pane_ParamLimits

0xaa44,	// (0x00081cc0) list_single_hwr_training_instruct_pane

0x2b5a,	// (0x00079dd6) list_single_hwr_training_instruct_pane_t1

0xee34,	// (0x000860b0) bg_frame_shadow_pane_g1

0x2b69,	// (0x00079de5) bg_frame_shadow_pane_g2

0x2b71,	// (0x00079ded) bg_frame_shadow_pane_g3

0x2b79,	// (0x00079df5) bg_frame_shadow_pane_g4

0x2b81,	// (0x00079dfd) bg_frame_shadow_pane_g5

0x2b89,	// (0x00079e05) bg_frame_shadow_pane_g6

0x2b91,	// (0x00079e0d) bg_frame_shadow_pane_g7

0x0c77,	// (0x00077ef3) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00086b58) bg_frame_shadow_pane_g

0xe195,	// (0x00085411) main_video_tele_dialer_pane

0xaa69,	// (0x00081ce5) aid_size_cell_video_keypad_ParamLimits

0xaa69,	// (0x00081ce5) aid_size_cell_video_keypad

0xaa79,	// (0x00081cf5) grid_video_dialer_keypad_pane_ParamLimits

0xaa79,	// (0x00081cf5) grid_video_dialer_keypad_pane

0xaaad,	// (0x00081d29) video_down_pane_cp_ParamLimits

0xaaad,	// (0x00081d29) video_down_pane_cp

0xaad7,	// (0x00081d53) cell_video_dialer_keypad_pane_ParamLimits

0xaad7,	// (0x00081d53) cell_video_dialer_keypad_pane

0x2b99,	// (0x00079e15) bg_button_pane_cp08_ParamLimits

0x2b99,	// (0x00079e15) bg_button_pane_cp08

0xaaec,	// (0x00081d68) cell_video_dialer_keypad_pane_g1_ParamLimits

0xaaec,	// (0x00081d68) cell_video_dialer_keypad_pane_g1

0xa2d2,	// (0x0008154e) mup3_rocker2_pane_ParamLimits

0xa2d2,	// (0x0008154e) mup3_rocker2_pane

0xeef4,	// (0x00086170) mup3_rocker2_pane_g1

0x923d,	// (0x000804b9) main_dialer2_pane

0xe195,	// (0x00085411) main_mp4_pane

0xab2b,	// (0x00081da7) main_mp4_pane_g1_ParamLimits

0xab2b,	// (0x00081da7) main_mp4_pane_g1

0xab39,	// (0x00081db5) main_mp4_pane_g2_ParamLimits

0xab39,	// (0x00081db5) main_mp4_pane_g2

0xab47,	// (0x00081dc3) main_mp4_pane_g3_ParamLimits

0xab47,	// (0x00081dc3) main_mp4_pane_g3

0xab8c,	// (0x00081e08) main_mp4_pane_g4_ParamLimits

0xab8c,	// (0x00081e08) main_mp4_pane_g4

0xaba6,	// (0x00081e22) main_mp4_pane_g5_ParamLimits

0xaba6,	// (0x00081e22) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00086b78) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00086b78) main_mp4_pane_g

0xabda,	// (0x00081e56) main_mp4_pane_t1_ParamLimits

0xabda,	// (0x00081e56) main_mp4_pane_t1

0xac36,	// (0x00081eb2) main_mp4_pane_t2_ParamLimits

0xac36,	// (0x00081eb2) main_mp4_pane_t2

0x2ba5,	// (0x00079e21) main_mp4_pane_t3_ParamLimits

0x2ba5,	// (0x00079e21) main_mp4_pane_t3

0xac88,	// (0x00081f04) main_mp4_pane_t4_ParamLimits

0xac88,	// (0x00081f04) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00086b85) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00086b85) main_mp4_pane_t

0xaccc,	// (0x00081f48) mp4_progress_pane_ParamLimits

0xaccc,	// (0x00081f48) mp4_progress_pane

0xad16,	// (0x00081f92) mp4_rocker_pane_ParamLimits

0xad16,	// (0x00081f92) mp4_rocker_pane

0x2bcd,	// (0x00079e49) mp4_progress_pane_t1

0x2be6,	// (0x00079e62) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x00086b8e) mp4_progress_pane_t

0x2bff,	// (0x00079e7b) mup_progress_pane_cp04

0x34d2,	// (0x0007a74e) mp4_rocker_pane_g1

0xad36,	// (0x00081fb2) aid_cell_size_keypad2_ParamLimits

0xad36,	// (0x00081fb2) aid_cell_size_keypad2

0xad46,	// (0x00081fc2) dialer2_ne_pane_ParamLimits

0xad46,	// (0x00081fc2) dialer2_ne_pane

0xad54,	// (0x00081fd0) grid_dialer2_keypad_pane_ParamLimits

0xad54,	// (0x00081fd0) grid_dialer2_keypad_pane

0x352d,	// (0x0007a7a9) bg_popup_call_pane_cp07_ParamLimits

0x352d,	// (0x0007a7a9) bg_popup_call_pane_cp07

0xad64,	// (0x00081fe0) dialer2_ne_pane_t1_ParamLimits

0xad64,	// (0x00081fe0) dialer2_ne_pane_t1

0xad89,	// (0x00082005) cell_dialer2_keypad_pane_ParamLimits

0xad89,	// (0x00082005) cell_dialer2_keypad_pane

0x2c1d,	// (0x00079e99) bg_button_pane_pane_cp04_ParamLimits

0x2c1d,	// (0x00079e99) bg_button_pane_pane_cp04

0xad9e,	// (0x0008201a) cell_dialer2_keypad_pane_g1_ParamLimits

0xad9e,	// (0x0008201a) cell_dialer2_keypad_pane_g1

0x6c72,	// (0x0007deee) aid_placing_vt_set_content_ParamLimits

0x6c72,	// (0x0007deee) aid_placing_vt_set_content

0x6c90,	// (0x0007df0c) aid_placing_vt_set_title_ParamLimits

0x6c90,	// (0x0007df0c) aid_placing_vt_set_title

0xe195,	// (0x00085411) main_image3_pane

0xae38,	// (0x000820b4) area_side_right_pane_cp01_ParamLimits

0xae38,	// (0x000820b4) area_side_right_pane_cp01

0xae65,	// (0x000820e1) main_image3_pane_g1_ParamLimits

0xae65,	// (0x000820e1) main_image3_pane_g1

0xae73,	// (0x000820ef) main_image3_pane_g2_ParamLimits

0xae73,	// (0x000820ef) main_image3_pane_g2

0xae8c,	// (0x00082108) main_image3_pane_g3_ParamLimits

0xae8c,	// (0x00082108) main_image3_pane_g3

0xaea5,	// (0x00082121) main_image3_pane_g4_ParamLimits

0xaea5,	// (0x00082121) main_image3_pane_g4

0x0003,

0xf921,	// (0x00086b9d) main_image3_pane_g_ParamLimits

0xf921,	// (0x00086b9d) main_image3_pane_g

0xaebe,	// (0x0008213a) main_image3_pane_t1_ParamLimits

0xaebe,	// (0x0008213a) main_image3_pane_t1

0xaee3,	// (0x0008215f) main_image3_pane_t2_ParamLimits

0xaee3,	// (0x0008215f) main_image3_pane_t2

0xaf02,	// (0x0008217e) main_image3_pane_t3_ParamLimits

0xaf02,	// (0x0008217e) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00086ba6) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00086ba6) main_image3_pane_t

0x2d0c,	// (0x00079f88) grid_sctrl_middle_pane_cp01_ParamLimits

0x2d0c,	// (0x00079f88) grid_sctrl_middle_pane_cp01

0xaf63,	// (0x000821df) cell_sctrl_middle_pane_cp01_ParamLimits

0xaf63,	// (0x000821df) cell_sctrl_middle_pane_cp01

0xaf74,	// (0x000821f0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaf74,	// (0x000821f0) cell_sctrl_middle_pane_cp01_g1

0xe195,	// (0x00085411) main_call4_pane

0xaf81,	// (0x000821fd) aid_size_button_call4_ParamLimits

0xaf81,	// (0x000821fd) aid_size_button_call4

0xafb1,	// (0x0008222d) call4_windows_pane_ParamLimits

0xafb1,	// (0x0008222d) call4_windows_pane

0xafcb,	// (0x00082247) grid_call4_button_pane_ParamLimits

0xafcb,	// (0x00082247) grid_call4_button_pane

0x2c29,	// (0x00079ea5) call4_windows_conf_pane

0x2c40,	// (0x00079ebc) popup_call4_audio_first_window_ParamLimits

0x2c40,	// (0x00079ebc) popup_call4_audio_first_window

0x2c8c,	// (0x00079f08) popup_call4_audio_second_window_ParamLimits

0x2c8c,	// (0x00079f08) popup_call4_audio_second_window

0x2ca0,	// (0x00079f1c) popup_call4_audio_wait_window_ParamLimits

0x2ca0,	// (0x00079f1c) popup_call4_audio_wait_window

0xafef,	// (0x0008226b) cell_call4_button_pane_ParamLimits

0xafef,	// (0x0008226b) cell_call4_button_pane

0xb014,	// (0x00082290) bg_button_pane_cp09_ParamLimits

0xb014,	// (0x00082290) bg_button_pane_cp09

0xb020,	// (0x0008229c) cell_call4_button_pane_g1_ParamLimits

0xb020,	// (0x0008229c) cell_call4_button_pane_g1

0xb02d,	// (0x000822a9) cell_call4_button_pane_t1_ParamLimits

0xb02d,	// (0x000822a9) cell_call4_button_pane_t1

0x2ce8,	// (0x00079f64) popup_call4_audio_conf_window_ParamLimits

0x2ce8,	// (0x00079f64) popup_call4_audio_conf_window

0xa305,	// (0x00081581) mup3_progress_pane_t1_ParamLimits

0xa31c,	// (0x00081598) mup3_progress_pane_t2_ParamLimits

0x2608,	// (0x00079884) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00086a7f) mup3_progress_pane_t_ParamLimits

0x261f,	// (0x0007989b) mup_progress_pane_cp03_ParamLimits

0xa836,	// (0x00081ab2) mup3_control_keys_pane_g4_copy1

0xacfa,	// (0x00081f76) mp4_rocker2_pane_ParamLimits

0xacfa,	// (0x00081f76) mp4_rocker2_pane

0x2d04,	// (0x00079f80) mp4_rocker2_pane_g1

0x2cfc,	// (0x00079f78) mp4_rocker2_pane_g2

0xb03f,	// (0x000822bb) mp4_rocker2_pane_g3

0xb047,	// (0x000822c3) mp4_rocker2_pane_g4

0xb04f,	// (0x000822cb) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x00086baf) mp4_rocker2_pane_g

0xe195,	// (0x00085411) main_camera4_pane

0xe195,	// (0x00085411) main_video4_pane

0xaa89,	// (0x00081d05) main_video_tele_dialer_pane_t1_ParamLimits

0xaa89,	// (0x00081d05) main_video_tele_dialer_pane_t1

0xaa9b,	// (0x00081d17) main_video_tele_dialer_pane_t2_ParamLimits

0xaa9b,	// (0x00081d17) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x00086b69) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x00086b69) main_video_tele_dialer_pane_t

0xb06f,	// (0x000822eb) cam4_autofocus_pane_ParamLimits

0xb06f,	// (0x000822eb) cam4_autofocus_pane

0xb07d,	// (0x000822f9) cam4_image_uncrop_pane_ParamLimits

0xb07d,	// (0x000822f9) cam4_image_uncrop_pane

0xb094,	// (0x00082310) cam4_indicators_pane_ParamLimits

0xb094,	// (0x00082310) cam4_indicators_pane

0xb0b0,	// (0x0008232c) main_camera4_pane_g1_ParamLimits

0xb0b0,	// (0x0008232c) main_camera4_pane_g1

0xb0bc,	// (0x00082338) main_camera4_pane_g2_ParamLimits

0xb0bc,	// (0x00082338) main_camera4_pane_g2

0xb0c8,	// (0x00082344) main_camera4_pane_g3_ParamLimits

0xb0c8,	// (0x00082344) main_camera4_pane_g3

0xb0d4,	// (0x00082350) main_camera4_pane_g4_ParamLimits

0xb0d4,	// (0x00082350) main_camera4_pane_g4

0xb0e0,	// (0x0008235c) main_camera4_pane_g5_ParamLimits

0xb0e0,	// (0x0008235c) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00086bba) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00086bba) main_camera4_pane_g

0xb0fa,	// (0x00082376) main_camera4_pane_t1_ParamLimits

0xb0fa,	// (0x00082376) main_camera4_pane_t1

0xb11e,	// (0x0008239a) bg_tb_trans_pane_cp06

0xb134,	// (0x000823b0) cam4_indicators_pane_g1

0xb141,	// (0x000823bd) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00086bcc) cam4_indicators_pane_g

0xb161,	// (0x000823dd) cam4_indicators_pane_t1

0xb18b,	// (0x00082407) main_video4_pane_g1_ParamLimits

0xb18b,	// (0x00082407) main_video4_pane_g1

0xb197,	// (0x00082413) main_video4_pane_g2_ParamLimits

0xb197,	// (0x00082413) main_video4_pane_g2

0xb1a3,	// (0x0008241f) main_video4_pane_g3_ParamLimits

0xb1a3,	// (0x0008241f) main_video4_pane_g3

0xb1af,	// (0x0008242b) main_video4_pane_g4_ParamLimits

0xb1af,	// (0x0008242b) main_video4_pane_g4

0x0004,

0xf957,	// (0x00086bd3) main_video4_pane_g_ParamLimits

0xf957,	// (0x00086bd3) main_video4_pane_g

0xb1cf,	// (0x0008244b) vid4_indicators_pane_ParamLimits

0xb1cf,	// (0x0008244b) vid4_indicators_pane

0xb1ed,	// (0x00082469) video4_image_uncrop_cif_pane_ParamLimits

0xb1ed,	// (0x00082469) video4_image_uncrop_cif_pane

0xb1fc,	// (0x00082478) video4_image_uncrop_nhd_pane_ParamLimits

0xb1fc,	// (0x00082478) video4_image_uncrop_nhd_pane

0xb07d,	// (0x000822f9) video4_image_uncrop_vga_pane_ParamLimits

0xb07d,	// (0x000822f9) video4_image_uncrop_vga_pane

0xb209,	// (0x00082485) bg_tb_trans_pane_cp07

0xb134,	// (0x000823b0) vid4_indicators_pane_g1

0xb221,	// (0x0008249d) vid4_indicators_pane_g2

0xb22e,	// (0x000824aa) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x00086bde) vid4_indicators_pane_g

0xb25b,	// (0x000824d7) vid4_indicators_pane_t1

0xb275,	// (0x000824f1) cam4_autofocus_pane_g1

0xb27d,	// (0x000824f9) cam4_autofocus_pane_g2

0xb285,	// (0x00082501) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00086be9) cam4_autofocus_pane_g

0xb28d,	// (0x00082509) cam4_autofocus_pane_g3_copy1

0xaabb,	// (0x00081d37) video_down_pane_cp_t1

0xaac9,	// (0x00081d45) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x00086b6e) video_down_pane_cp_t

0x2d0c,	// (0x00079f88) popup_vitu2_window_ParamLimits

0x2d0c,	// (0x00079f88) popup_vitu2_window

0xb295,	// (0x00082511) aid_size_cell2_itu2_ParamLimits

0xb295,	// (0x00082511) aid_size_cell2_itu2

0xb2b7,	// (0x00082533) aid_size_cell_itu2_ParamLimits

0xb2b7,	// (0x00082533) aid_size_cell_itu2

0xb2fb,	// (0x00082577) bg_popup_window_pane_cp09_ParamLimits

0xb2fb,	// (0x00082577) bg_popup_window_pane_cp09

0xb309,	// (0x00082585) field_vitu2_entry_pane_ParamLimits

0xb309,	// (0x00082585) field_vitu2_entry_pane

0xb329,	// (0x000825a5) grid_vitu2_function_pane_ParamLimits

0xb329,	// (0x000825a5) grid_vitu2_function_pane

0xb36d,	// (0x000825e9) grid_vitu2_itu_pane_ParamLimits

0xb36d,	// (0x000825e9) grid_vitu2_itu_pane

0xb3e5,	// (0x00082661) cell_vitu2_itu_pane_ParamLimits

0xb3e5,	// (0x00082661) cell_vitu2_itu_pane

0xb3fa,	// (0x00082676) cell_vitu2_function_pane_ParamLimits

0xb3fa,	// (0x00082676) cell_vitu2_function_pane

0x2d1a,	// (0x00079f96) bg_popup_call_pane_cp08_ParamLimits

0x2d1a,	// (0x00079f96) bg_popup_call_pane_cp08

0x2d33,	// (0x00079faf) field_vitu2_entry_pane_g1

0x2d3f,	// (0x00079fbb) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x00086bf0) field_vitu2_entry_pane_g

0x2d59,	// (0x00079fd5) field_vitu2_entry_pane_t1_ParamLimits

0x2d59,	// (0x00079fd5) field_vitu2_entry_pane_t1

0x2d76,	// (0x00079ff2) field_vitu2_entry_pane_t2_ParamLimits

0x2d76,	// (0x00079ff2) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00086bf7) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00086bf7) field_vitu2_entry_pane_t

0xb439,	// (0x000826b5) bg_button_pane_cp010_ParamLimits

0xb439,	// (0x000826b5) bg_button_pane_cp010

0xb447,	// (0x000826c3) cell_vitu2_itu_pane_g1

0xb465,	// (0x000826e1) cell_vitu2_itu_pane_t1_ParamLimits

0xb465,	// (0x000826e1) cell_vitu2_itu_pane_t1

0x5c15,	// (0x0007ce91) cell_vitu2_itu_pane_t2_ParamLimits

0x5c15,	// (0x0007ce91) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x00086c01) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x00086c01) cell_vitu2_itu_pane_t

0xb209,	// (0x00082485) bg_button_pane_cp011

0xb4b7,	// (0x00082733) cell_vitu2_function_pane_g1

0xe195,	// (0x00085411) main_myfav_hc_pane

0xaf44,	// (0x000821c0) popup_image3_note_pane_ParamLimits

0xaf44,	// (0x000821c0) popup_image3_note_pane

0xaf52,	// (0x000821ce) popup_image3_tool_bar_pane_ParamLimits

0xaf52,	// (0x000821ce) popup_image3_tool_bar_pane

0x5c83,	// (0x0007ceff) cell_vitu2_itu_pane_t3_ParamLimits

0x5c83,	// (0x0007ceff) cell_vitu2_itu_pane_t3

0xe195,	// (0x00085411) bg_popup_trans_pane

0x2d9b,	// (0x0007a017) grid_image3_tool_bar_pane

0x2da5,	// (0x0007a021) bg_popup_trans_pane_g1

0x1129,	// (0x000783a5) bg_popup_trans_pane_g2

0x2dad,	// (0x0007a029) bg_popup_trans_pane_g3

0x2db5,	// (0x0007a031) bg_popup_trans_pane_g4

0x2dbd,	// (0x0007a039) bg_popup_trans_pane_g5

0x2dc5,	// (0x0007a041) bg_popup_trans_pane_g6

0x2dcd,	// (0x0007a049) bg_popup_trans_pane_g7

0x2dd5,	// (0x0007a051) bg_popup_trans_pane_g8

0x1109,	// (0x00078385) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00086c08) bg_popup_trans_pane_g

0x2ddd,	// (0x0007a059) cell_image3_tool_bar_pane_ParamLimits

0x2ddd,	// (0x0007a059) cell_image3_tool_bar_pane

0xeef4,	// (0x00086170) cell_image3_tool_bar_pane_g1

0xe195,	// (0x00085411) bg_popup_trans_pane_cp1

0x2df1,	// (0x0007a06d) popup_image3_note_pane_t1

0x2dff,	// (0x0007a07b) popup_image3_note_pane_t2

0x2e0d,	// (0x0007a089) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00086c1b) popup_image3_note_pane_t

0x2e1b,	// (0x0007a097) popup_image3_note_pane_t3_copy1

0xb4cb,	// (0x00082747) bg_myfav_hc_instruction_pane_ParamLimits

0xb4cb,	// (0x00082747) bg_myfav_hc_instruction_pane

0xb4e3,	// (0x0008275f) cell_myfav_contact_pane_ParamLimits

0xb4e3,	// (0x0008275f) cell_myfav_contact_pane

0xb4fd,	// (0x00082779) cell_myfav_contact_pane_cp1_ParamLimits

0xb4fd,	// (0x00082779) cell_myfav_contact_pane_cp1

0xb515,	// (0x00082791) cell_myfav_contact_pane_cp2_ParamLimits

0xb515,	// (0x00082791) cell_myfav_contact_pane_cp2

0xb52d,	// (0x000827a9) cell_myfav_contact_pane_cp3_ParamLimits

0xb52d,	// (0x000827a9) cell_myfav_contact_pane_cp3

0xb544,	// (0x000827c0) cell_myfav_contact_pane_cp4_ParamLimits

0xb544,	// (0x000827c0) cell_myfav_contact_pane_cp4

0xb55a,	// (0x000827d6) cell_myfav_contact_pane_cp5_ParamLimits

0xb55a,	// (0x000827d6) cell_myfav_contact_pane_cp5

0xb56e,	// (0x000827ea) cell_myfav_contact_pane_cp6_ParamLimits

0xb56e,	// (0x000827ea) cell_myfav_contact_pane_cp6

0xb582,	// (0x000827fe) cell_myfav_contact_pane_cp7_ParamLimits

0xb582,	// (0x000827fe) cell_myfav_contact_pane_cp7

0x2e29,	// (0x0007a0a5) listscroll_gen_pane_cp05

0xb59a,	// (0x00082816) main_myfav_hc_pane_g1_ParamLimits

0xb59a,	// (0x00082816) main_myfav_hc_pane_g1

0xb5b0,	// (0x0008282c) main_myfav_hc_pane_g2_ParamLimits

0xb5b0,	// (0x0008282c) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00086c22) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00086c22) main_myfav_hc_pane_g

0xb5de,	// (0x0008285a) main_myfav_hc_pane_t1_ParamLimits

0xb5de,	// (0x0008285a) main_myfav_hc_pane_t1

0x2e32,	// (0x0007a0ae) main_myfav_hc_pane_t2_ParamLimits

0x2e32,	// (0x0007a0ae) main_myfav_hc_pane_t2

0x2e44,	// (0x0007a0c0) main_myfav_hc_pane_t3_ParamLimits

0x2e44,	// (0x0007a0c0) main_myfav_hc_pane_t3

0xb5f5,	// (0x00082871) main_myfav_hc_pane_t4_ParamLimits

0xb5f5,	// (0x00082871) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00086c29) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00086c29) main_myfav_hc_pane_t

0xeef4,	// (0x00086170) bg_myfav_hc_instruction_pane_g1

0x2e56,	// (0x0007a0d2) cell_myfav_contact_pane_g1_ParamLimits

0x2e56,	// (0x0007a0d2) cell_myfav_contact_pane_g1

0x2e56,	// (0x0007a0d2) cell_myfav_contact_pane_g2_ParamLimits

0x2e56,	// (0x0007a0d2) cell_myfav_contact_pane_g2

0x2e62,	// (0x0007a0de) cell_myfav_contact_pane_g3_ParamLimits

0x2e62,	// (0x0007a0de) cell_myfav_contact_pane_g3

0x25f2,	// (0x0007986e) cell_myfav_contact_pane_g4_ParamLimits

0x25f2,	// (0x0007986e) cell_myfav_contact_pane_g4

0x2e6f,	// (0x0007a0eb) cell_myfav_contact_pane_g5_ParamLimits

0x2e6f,	// (0x0007a0eb) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00086c34) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00086c34) cell_myfav_contact_pane_g

0xb5c6,	// (0x00082842) main_myfav_hc_pane_g3_ParamLimits

0xb5c6,	// (0x00082842) main_myfav_hc_pane_g3

0x5e51,	// (0x0007d0cd) popup_adpt_find_window

0xb61f,	// (0x0008289b) afind_page_pane_ParamLimits

0xb61f,	// (0x0008289b) afind_page_pane

0xb62c,	// (0x000828a8) aid_size_cell_afind_ParamLimits

0xb62c,	// (0x000828a8) aid_size_cell_afind

0xb646,	// (0x000828c2) bg_popup_sub_pane_cp09_ParamLimits

0xb646,	// (0x000828c2) bg_popup_sub_pane_cp09

0xb653,	// (0x000828cf) find_pane_cp01_ParamLimits

0xb653,	// (0x000828cf) find_pane_cp01

0x2e7b,	// (0x0007a0f7) grid_afind_control_pane_ParamLimits

0x2e7b,	// (0x0007a0f7) grid_afind_control_pane

0xb660,	// (0x000828dc) grid_afind_pane_ParamLimits

0xb660,	// (0x000828dc) grid_afind_pane

0xb67c,	// (0x000828f8) cell_afind_pane_ParamLimits

0xb67c,	// (0x000828f8) cell_afind_pane

0xeef4,	// (0x00086170) afind_page_pane_g1

0xb6c2,	// (0x0008293e) afind_page_pane_g2

0xb6cb,	// (0x00082947) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x00086c3f) afind_page_pane_g

0xb6d4,	// (0x00082950) afind_page_pane_t1

0x2e8f,	// (0x0007a10b) cell_afind_grid_control_pane_ParamLimits

0x2e8f,	// (0x0007a10b) cell_afind_grid_control_pane

0x2c1d,	// (0x00079e99) bg_button_pane_cp69_ParamLimits

0x2c1d,	// (0x00079e99) bg_button_pane_cp69

0xb6f4,	// (0x00082970) cell_afind_pane_g1_ParamLimits

0xb6f4,	// (0x00082970) cell_afind_pane_g1

0xb701,	// (0x0008297d) cell_afind_pane_t1_ParamLimits

0xb701,	// (0x0008297d) cell_afind_pane_t1

0x0e5f,	// (0x000780db) bg_button_pane_cp72

0x2e9e,	// (0x0007a11a) cell_afind_grid_control_pane_g1

0x878b,	// (0x0007fa07) aid_image_placing_area_ParamLimits

0x878b,	// (0x0007fa07) aid_image_placing_area

0x28eb,	// (0x00079b67) field_vitu_entry_pane_g1_ParamLimits

0x28eb,	// (0x00079b67) field_vitu_entry_pane_g1

0x28f7,	// (0x00079b73) field_vitu_entry_pane_g2_ParamLimits

0x28f7,	// (0x00079b73) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00086af9) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00086af9) field_vitu_entry_pane_g

0xa8bd,	// (0x00081b39) cell_vitu_itu_pane_g1_ParamLimits

0xa8ff,	// (0x00081b7b) cell_vitu_itu_pane_t3_ParamLimits

0xa8ff,	// (0x00081b7b) cell_vitu_itu_pane_t3

0x2bcd,	// (0x00079e49) mp4_progress_pane_t1_ParamLimits

0x2be6,	// (0x00079e62) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x00086b8e) mp4_progress_pane_t_ParamLimits

0x2bff,	// (0x00079e7b) mup_progress_pane_cp04_ParamLimits

0xb609,	// (0x00082885) main_myfav_hc_pane_t5_ParamLimits

0xb609,	// (0x00082885) main_myfav_hc_pane_t5

0x0a91,	// (0x00077d0d) aid_zoom_text_primary

0x5e51,	// (0x0007d0cd) popup_adpt_find_window_ParamLimits

0x922f,	// (0x000804ab) main_cam_set_pane

0xb0a2,	// (0x0008231e) cam4_zoom_pane_ParamLimits

0xb0a2,	// (0x0008231e) cam4_zoom_pane

0xb713,	// (0x0008298f) main_cam_set_pane_g1_ParamLimits

0xb713,	// (0x0008298f) main_cam_set_pane_g1

0xb721,	// (0x0008299d) main_cam_set_pane_g2_ParamLimits

0xb721,	// (0x0008299d) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00086c46) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00086c46) main_cam_set_pane_g

0xb72d,	// (0x000829a9) main_cam_set_pane_t1_ParamLimits

0xb72d,	// (0x000829a9) main_cam_set_pane_t1

0xb749,	// (0x000829c5) main_cset_listscroll_pane_ParamLimits

0xb749,	// (0x000829c5) main_cset_listscroll_pane

0xb776,	// (0x000829f2) main_cset_slider_pane_ParamLimits

0xb776,	// (0x000829f2) main_cset_slider_pane

0x2eaf,	// (0x0007a12b) main_cset_list_pane_ParamLimits

0x2eaf,	// (0x0007a12b) main_cset_list_pane

0x2ebf,	// (0x0007a13b) scroll_pane_cp028

0xb795,	// (0x00082a11) aid_area_touch_slider

0xb7b1,	// (0x00082a2d) cset_slider_pane

0xb7db,	// (0x00082a57) main_cset_slider_pane_g1

0xb7f0,	// (0x00082a6c) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x00086c4b) main_cset_slider_pane_g

0x2ef8,	// (0x0007a174) main_cset_slider_pane_t1

0xb8b2,	// (0x00082b2e) main_cset_slider_pane_t2

0xb8cc,	// (0x00082b48) main_cset_slider_pane_t3

0xb8e6,	// (0x00082b62) main_cset_slider_pane_t4

0xb900,	// (0x00082b7c) main_cset_slider_pane_t5

0xb91e,	// (0x00082b9a) main_cset_slider_pane_t6

0xb935,	// (0x00082bb1) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x00086c70) main_cset_slider_pane_t

0xba41,	// (0x00082cbd) cset_list_set_pane_ParamLimits

0xba41,	// (0x00082cbd) cset_list_set_pane

0xba57,	// (0x00082cd3) aid_position_infowindow_above

0xba5f,	// (0x00082cdb) aid_position_infowindow_below

0xba67,	// (0x00082ce3) cset_list_set_pane_g1_ParamLimits

0xba67,	// (0x00082ce3) cset_list_set_pane_g1

0x2f98,	// (0x0007a214) cset_list_set_pane_g3_ParamLimits

0x2f98,	// (0x0007a214) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x00086c8f) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x00086c8f) cset_list_set_pane_g

0x2fa7,	// (0x0007a223) cset_list_set_pane_t1_ParamLimits

0x2fa7,	// (0x0007a223) cset_list_set_pane_t1

0x922f,	// (0x000804ab) list_highlight_pane_cp021_ParamLimits

0x922f,	// (0x000804ab) list_highlight_pane_cp021

0x1a9c,	// (0x00078d18) cset_slider_pane_g1

0x1aae,	// (0x00078d2a) cset_slider_pane_g2

0x1aa5,	// (0x00078d21) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00086c94) cset_slider_pane_g

0xba73,	// (0x00082cef) aid_area_touch_cam4_zoom

0xba7b,	// (0x00082cf7) cam4_zoom_cont_pane

0xba83,	// (0x00082cff) cam4_zoom_pane_g1

0xba8b,	// (0x00082d07) cam4_zoom_pane_g2

0xba93,	// (0x00082d0f) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00086c9b) cam4_zoom_pane_g

0xba9b,	// (0x00082d17) cam4_zoom_cont_pane_g1

0xbaa4,	// (0x00082d20) cam4_zoom_cont_pane_g2

0xbaad,	// (0x00082d29) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x00086ca2) cam4_zoom_cont_pane_g

0xaf9b,	// (0x00082217) call4_image_pane_ParamLimits

0xaf9b,	// (0x00082217) call4_image_pane

0x2c29,	// (0x00079ea5) call4_windows_conf_pane_ParamLimits

0x2c6a,	// (0x00079ee6) popup_call4_audio_in_window_ParamLimits

0x2c6a,	// (0x00079ee6) popup_call4_audio_in_window

0xe195,	// (0x00085411) bg_popup_call2_act_pane_cp02

0x2ce0,	// (0x00079f5c) call4_list_conf_pane

0xeef4,	// (0x00086170) call4_image_pane_g1

0xeef4,	// (0x00086170) call4_image_pane_g2

0x0001,

0xf743,	// (0x000869bf) call4_image_pane_g

0x2fd7,	// (0x0007a253) list_single_graphic_popup_conf4_pane_ParamLimits

0x2fd7,	// (0x0007a253) list_single_graphic_popup_conf4_pane

0xe195,	// (0x00085411) list_highlight_pane_cp022

0x2fea,	// (0x0007a266) list_single_graphic_popup_conf4_pane_g1

0x175b,	// (0x000789d7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00086ca9) list_single_graphic_popup_conf4_pane_g

0x2ff2,	// (0x0007a26e) list_single_graphic_popup_conf4_pane_t1

0x6d99,	// (0x0007e015) popup_vtel_slider_window_ParamLimits

0x6d99,	// (0x0007e015) popup_vtel_slider_window

0x2c0b,	// (0x00079e87) dialer2_ne_pane_t2_ParamLimits

0x2c0b,	// (0x00079e87) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00086b93) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00086b93) dialer2_ne_pane_t

0x922f,	// (0x000804ab) bg_popup_sub_pane_cp010_ParamLimits

0x922f,	// (0x000804ab) bg_popup_sub_pane_cp010

0xbab6,	// (0x00082d32) popup_vtel_slider_window_g1_ParamLimits

0xbab6,	// (0x00082d32) popup_vtel_slider_window_g1

0xbac2,	// (0x00082d3e) popup_vtel_slider_window_g2_ParamLimits

0xbac2,	// (0x00082d3e) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x00086cae) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x00086cae) popup_vtel_slider_window_g

0xbb0a,	// (0x00082d86) vtel_slider_pane_ParamLimits

0xbb0a,	// (0x00082d86) vtel_slider_pane

0xbb19,	// (0x00082d95) vtel_slider_pane_g1_ParamLimits

0xbb19,	// (0x00082d95) vtel_slider_pane_g1

0xbb26,	// (0x00082da2) vtel_slider_pane_g2_ParamLimits

0xbb26,	// (0x00082da2) vtel_slider_pane_g2

0xbb33,	// (0x00082daf) vtel_slider_pane_g3_ParamLimits

0xbb33,	// (0x00082daf) vtel_slider_pane_g3

0xbb19,	// (0x00082d95) vtel_slider_pane_g4_ParamLimits

0xbb19,	// (0x00082d95) vtel_slider_pane_g4

0xbb40,	// (0x00082dbc) vtel_slider_pane_g5_ParamLimits

0xbb40,	// (0x00082dbc) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00086cb7) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00086cb7) vtel_slider_pane_g

0xe195,	// (0x00085411) main_gallery2_pane

0xb2dd,	// (0x00082559) aid_size_row_itut2_dropdow_list_ParamLimits

0xb2dd,	// (0x00082559) aid_size_row_itut2_dropdow_list

0xb34b,	// (0x000825c7) grid_vitu2_function_top_pane_ParamLimits

0xb34b,	// (0x000825c7) grid_vitu2_function_top_pane

0xb3a1,	// (0x0008261d) popup_vitu2_dropdown_list_window_ParamLimits

0xb3a1,	// (0x0008261d) popup_vitu2_dropdown_list_window

0xb3c1,	// (0x0008263d) popup_vitu2_match_list_window

0xbb4d,	// (0x00082dc9) cell_vitu2_function_top_pane_ParamLimits

0xbb4d,	// (0x00082dc9) cell_vitu2_function_top_pane

0xbb6d,	// (0x00082de9) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbb6d,	// (0x00082de9) cell_vitu2_function_top_pane_cp01

0xbb8b,	// (0x00082e07) cell_vitu2_function_top_wide_pane_ParamLimits

0xbb8b,	// (0x00082e07) cell_vitu2_function_top_wide_pane

0xb209,	// (0x00082485) bg_button_pane_cp012

0xbba9,	// (0x00082e25) cell_vitu2_function_top_pane_g1

0xbbb8,	// (0x00082e34) bg_button_pane_cp013_ParamLimits

0xbbb8,	// (0x00082e34) bg_button_pane_cp013

0xbbd4,	// (0x00082e50) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbbd4,	// (0x00082e50) cell_vitu2_function_top_wide_pane_g1

0xbbec,	// (0x00082e68) bg_popup_sub_pane_cp20

0xbbfa,	// (0x00082e76) list_vitu2_match_list_pane

0x2da5,	// (0x0007a021) bg_popup_sub_pane_cp20_g1

0x2dad,	// (0x0007a029) bg_popup_sub_pane_cp20_g2

0x1129,	// (0x000783a5) bg_popup_sub_pane_cp20_g3

0x2db5,	// (0x0007a031) bg_popup_sub_pane_cp20_g4

0x1109,	// (0x00078385) bg_popup_sub_pane_cp20_g5

0x300e,	// (0x0007a28a) bg_popup_sub_pane_cp20_g6

0x2dc5,	// (0x0007a041) bg_popup_sub_pane_cp20_g7

0x2dcd,	// (0x0007a049) bg_popup_sub_pane_cp20_g8

0x2dd5,	// (0x0007a051) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x00086cc2) bg_popup_sub_pane_cp20_g

0xbc12,	// (0x00082e8e) list_vitu2_match_list_item_pane_ParamLimits

0xbc12,	// (0x00082e8e) list_vitu2_match_list_item_pane

0xbc24,	// (0x00082ea0) list_vitu2_match_list_item_pane_t1

0x627b,	// (0x0007d4f7) bg_popup_sub_pane_cp21

0xbc61,	// (0x00082edd) grid_vitu2_dropdown_list_pane

0xbc69,	// (0x00082ee5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbc69,	// (0x00082ee5) cell_vitu2_dropdown_list_char_pane

0xbc8a,	// (0x00082f06) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbc8a,	// (0x00082f06) cell_vitu2_dropdown_list_ctrl_pane

0x3040,	// (0x0007a2bc) cell_vitu2_dropdown_list_char_pane_g1

0x3037,	// (0x0007a2b3) cell_vitu2_dropdown_list_char_pane_g2

0x302e,	// (0x0007a2aa) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x00086cdf) cell_vitu2_dropdown_list_char_pane_g

0xbcb6,	// (0x00082f32) cell_vitu2_dropdown_list_char_pane_t1

0xbcc4,	// (0x00082f40) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbcc4,	// (0x00082f40) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbcd4,	// (0x00082f50) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbcd4,	// (0x00082f50) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbce5,	// (0x00082f61) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbce5,	// (0x00082f61) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbcf5,	// (0x00082f71) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbcf5,	// (0x00082f71) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb11e,	// (0x0008239a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb11e,	// (0x0008239a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00086ce6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00086ce6) cell_vitu2_dropdown_list_ctrl_pane_g

0xbd11,	// (0x00082f8d) aid_size_cell_gallery2_ParamLimits

0xbd11,	// (0x00082f8d) aid_size_cell_gallery2

0xbd1f,	// (0x00082f9b) grid_gallery2_pane_ParamLimits

0xbd1f,	// (0x00082f9b) grid_gallery2_pane

0xbd2e,	// (0x00082faa) scroll_pane_cp029_ParamLimits

0xbd2e,	// (0x00082faa) scroll_pane_cp029

0xbd3a,	// (0x00082fb6) cell_gallery2_pane_ParamLimits

0xbd3a,	// (0x00082fb6) cell_gallery2_pane

0x3049,	// (0x0007a2c5) cell_gallery2_pane_g2

0x463f,	// (0x0007b8bb) cell_gallery2_pane_g3

0x3053,	// (0x0007a2cf) cell_gallery2_pane_g4

0x305b,	// (0x0007a2d7) cell_gallery2_pane_g5

0x1946,	// (0x00078bc2) grid_highlight_pane_cp10

0xb3c1,	// (0x0008263d) popup_vitu2_match_list_window_ParamLimits

0xb3d5,	// (0x00082651) popup_vitu2_query_window_ParamLimits

0xb3d5,	// (0x00082651) popup_vitu2_query_window

0x627b,	// (0x0007d4f7) bg_vitu2_candi_button_pane

0x3040,	// (0x0007a2bc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3037,	// (0x0007a2b3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x302e,	// (0x0007a2aa) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xbd68,	// (0x00082fe4) bg_button_pane_cp015

0xbd72,	// (0x00082fee) bg_button_pane_cp016

0xbd7c,	// (0x00082ff8) bg_button_pane_cp017

0x922f,	// (0x000804ab) bg_popup_sub_pane_cp22

0x3063,	// (0x0007a2df) popup_vitu2_query_window_g1

0xbda4,	// (0x00083020) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00086cf1) popup_vitu2_query_window_g

0xbdb2,	// (0x0008302e) popup_vitu2_query_window_t1_ParamLimits

0xbdb2,	// (0x0008302e) popup_vitu2_query_window_t1

0xbdda,	// (0x00083056) popup_vitu2_query_window_t2_ParamLimits

0xbdda,	// (0x00083056) popup_vitu2_query_window_t2

0xbdec,	// (0x00083068) popup_vitu2_query_window_t3_ParamLimits

0xbdec,	// (0x00083068) popup_vitu2_query_window_t3

0xbe14,	// (0x00083090) popup_vitu2_query_window_t4_ParamLimits

0xbe14,	// (0x00083090) popup_vitu2_query_window_t4

0xbe28,	// (0x000830a4) popup_vitu2_query_window_t5_ParamLimits

0xbe28,	// (0x000830a4) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00086cf6) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00086cf6) popup_vitu2_query_window_t

0x2ea7,	// (0x0007a123) main_cset_text_pane

0xb795,	// (0x00082a11) aid_area_touch_slider_ParamLimits

0xb7b1,	// (0x00082a2d) cset_slider_pane_ParamLimits

0xb7db,	// (0x00082a57) main_cset_slider_pane_g1_ParamLimits

0xb7f0,	// (0x00082a6c) main_cset_slider_pane_g2_ParamLimits

0x2ec8,	// (0x0007a144) main_cset_slider_pane_g3_ParamLimits

0x2ec8,	// (0x0007a144) main_cset_slider_pane_g3

0xb805,	// (0x00082a81) main_cset_slider_pane_g4_ParamLimits

0xb805,	// (0x00082a81) main_cset_slider_pane_g4

0xb814,	// (0x00082a90) main_cset_slider_pane_g5_ParamLimits

0xb814,	// (0x00082a90) main_cset_slider_pane_g5

0xb822,	// (0x00082a9e) main_cset_slider_pane_g6_ParamLimits

0xb822,	// (0x00082a9e) main_cset_slider_pane_g6

0xf9cf,	// (0x00086c4b) main_cset_slider_pane_g_ParamLimits

0x2ef8,	// (0x0007a174) main_cset_slider_pane_t1_ParamLimits

0xb8b2,	// (0x00082b2e) main_cset_slider_pane_t2_ParamLimits

0xb8cc,	// (0x00082b48) main_cset_slider_pane_t3_ParamLimits

0xb8e6,	// (0x00082b62) main_cset_slider_pane_t4_ParamLimits

0xb900,	// (0x00082b7c) main_cset_slider_pane_t5_ParamLimits

0xb91e,	// (0x00082b9a) main_cset_slider_pane_t6_ParamLimits

0xb935,	// (0x00082bb1) main_cset_slider_pane_t7_ParamLimits

0xb963,	// (0x00082bdf) main_cset_slider_pane_t8_ParamLimits

0xb963,	// (0x00082bdf) main_cset_slider_pane_t8

0xb98b,	// (0x00082c07) main_cset_slider_pane_t9_ParamLimits

0xb98b,	// (0x00082c07) main_cset_slider_pane_t9

0xb9b3,	// (0x00082c2f) main_cset_slider_pane_t10_ParamLimits

0xb9b3,	// (0x00082c2f) main_cset_slider_pane_t10

0xb9db,	// (0x00082c57) main_cset_slider_pane_t11_ParamLimits

0xb9db,	// (0x00082c57) main_cset_slider_pane_t11

0xba05,	// (0x00082c81) main_cset_slider_pane_t12_ParamLimits

0xba05,	// (0x00082c81) main_cset_slider_pane_t12

0xba22,	// (0x00082c9e) main_cset_slider_pane_t13_ParamLimits

0xba22,	// (0x00082c9e) main_cset_slider_pane_t13

0xf9f4,	// (0x00086c70) main_cset_slider_pane_t_ParamLimits

0xe195,	// (0x00085411) bg_popup_sub_pane_cp011

0x306f,	// (0x0007a2eb) main_cset_text_pane_g1

0x3077,	// (0x0007a2f3) main_cset_text_pane_t1

0x3085,	// (0x0007a301) main_cset_text_pane_t2

0x3093,	// (0x0007a30f) main_cset_text_pane_t3

0x30a1,	// (0x0007a31d) main_cset_text_pane_t4

0x30af,	// (0x0007a32b) main_cset_text_pane_t5

0x30bd,	// (0x0007a339) main_cset_text_pane_t6

0x30cb,	// (0x0007a347) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x00086d01) main_cset_text_pane_t

0xe195,	// (0x00085411) main_cam4_burst_pane

0xe195,	// (0x00085411) main_cam5_pane

0xb6e2,	// (0x0008295e) bg_button_pane_cp019

0xb6eb,	// (0x00082967) bg_button_pane_cp020

0x2ed4,	// (0x0007a150) main_cset_slider_pane_g7_ParamLimits

0x2ed4,	// (0x0007a150) main_cset_slider_pane_g7

0x2ee0,	// (0x0007a15c) main_cset_slider_pane_g8_ParamLimits

0x2ee0,	// (0x0007a15c) main_cset_slider_pane_g8

0xb836,	// (0x00082ab2) main_cset_slider_pane_g9_ParamLimits

0xb836,	// (0x00082ab2) main_cset_slider_pane_g9

0xb842,	// (0x00082abe) main_cset_slider_pane_g10_ParamLimits

0xb842,	// (0x00082abe) main_cset_slider_pane_g10

0xb84e,	// (0x00082aca) main_cset_slider_pane_g11_ParamLimits

0xb84e,	// (0x00082aca) main_cset_slider_pane_g11

0xb85a,	// (0x00082ad6) main_cset_slider_pane_g12_ParamLimits

0xb85a,	// (0x00082ad6) main_cset_slider_pane_g12

0xb866,	// (0x00082ae2) main_cset_slider_pane_g13_ParamLimits

0xb866,	// (0x00082ae2) main_cset_slider_pane_g13

0xb872,	// (0x00082aee) main_cset_slider_pane_g14_ParamLimits

0xb872,	// (0x00082aee) main_cset_slider_pane_g14

0xb87e,	// (0x00082afa) main_cset_slider_pane_g15_ParamLimits

0xb87e,	// (0x00082afa) main_cset_slider_pane_g15

0x2f26,	// (0x0007a1a2) main_cset_slider_pane_t14_ParamLimits

0x2f26,	// (0x0007a1a2) main_cset_slider_pane_t14

0x2f5f,	// (0x0007a1db) main_cset_slider_pane_t15_ParamLimits

0x2f5f,	// (0x0007a1db) main_cset_slider_pane_t15

0xbe3c,	// (0x000830b8) aid_cam4_burst_size_cell_ParamLimits

0xbe3c,	// (0x000830b8) aid_cam4_burst_size_cell

0xbe58,	// (0x000830d4) grid_cam4_burst_pane_ParamLimits

0xbe58,	// (0x000830d4) grid_cam4_burst_pane

0xbe88,	// (0x00083104) linegrid_cam4_burst_pane_ParamLimits

0xbe88,	// (0x00083104) linegrid_cam4_burst_pane

0xbea8,	// (0x00083124) scroll_pane_cp30_ParamLimits

0xbea8,	// (0x00083124) scroll_pane_cp30

0xbeb4,	// (0x00083130) cell_cam4_burst_pane_ParamLimits

0xbeb4,	// (0x00083130) cell_cam4_burst_pane

0x30d9,	// (0x0007a355) linegrid_cam4_burst_pane_g1_ParamLimits

0x30d9,	// (0x0007a355) linegrid_cam4_burst_pane_g1

0xbef0,	// (0x0008316c) linegrid_cam4_burst_pane_g2_ParamLimits

0xbef0,	// (0x0008316c) linegrid_cam4_burst_pane_g2

0x30e6,	// (0x0007a362) linegrid_cam4_burst_pane_g3_ParamLimits

0x30e6,	// (0x0007a362) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x00086d10) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x00086d10) linegrid_cam4_burst_pane_g

0xbf01,	// (0x0008317d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbf01,	// (0x0008317d) linegrid_cam4_burst_pane_g3_copy1

0x30f3,	// (0x0007a36f) linegrid_cam4_burst_pane_g4_ParamLimits

0x30f3,	// (0x0007a36f) linegrid_cam4_burst_pane_g4

0xbf1b,	// (0x00083197) linegrid_cam4_burst_pane_g5_ParamLimits

0xbf1b,	// (0x00083197) linegrid_cam4_burst_pane_g5

0xbf2c,	// (0x000831a8) linegrid_cam4_burst_pane_g6_ParamLimits

0xbf2c,	// (0x000831a8) linegrid_cam4_burst_pane_g6

0x3100,	// (0x0007a37c) linegrid_cam4_burst_pane_g7_ParamLimits

0x3100,	// (0x0007a37c) linegrid_cam4_burst_pane_g7

0xbf3d,	// (0x000831b9) cell_cam4_burst_pane_g1

0x3119,	// (0x0007a395) main_cam5_pane_t1_ParamLimits

0x3119,	// (0x0007a395) main_cam5_pane_t1

0x312b,	// (0x0007a3a7) main_cam5_pane_t2_ParamLimits

0x312b,	// (0x0007a3a7) main_cam5_pane_t2

0x313d,	// (0x0007a3b9) main_cam5_pane_t3_ParamLimits

0x313d,	// (0x0007a3b9) main_cam5_pane_t3

0x314f,	// (0x0007a3cb) main_cam5_pane_t4_ParamLimits

0x314f,	// (0x0007a3cb) main_cam5_pane_t4

0x3167,	// (0x0007a3e3) main_cam5_pane_t5_ParamLimits

0x3167,	// (0x0007a3e3) main_cam5_pane_t5

0x317b,	// (0x0007a3f7) main_cam5_pane_t6_ParamLimits

0x317b,	// (0x0007a3f7) main_cam5_pane_t6

0x318f,	// (0x0007a40b) main_cam5_pane_t7_ParamLimits

0x318f,	// (0x0007a40b) main_cam5_pane_t7

0x31a1,	// (0x0007a41d) main_cam5_pane_t8_ParamLimits

0x31a1,	// (0x0007a41d) main_cam5_pane_t8

0x31bd,	// (0x0007a439) main_cam5_pane_t9_ParamLimits

0x31bd,	// (0x0007a439) main_cam5_pane_t9

0x31cf,	// (0x0007a44b) main_cam5_pane_t10_ParamLimits

0x31cf,	// (0x0007a44b) main_cam5_pane_t10

0x31e1,	// (0x0007a45d) main_cam5_pane_t11_ParamLimits

0x31e1,	// (0x0007a45d) main_cam5_pane_t11

0x31f3,	// (0x0007a46f) main_cam5_pane_t12_ParamLimits

0x31f3,	// (0x0007a46f) main_cam5_pane_t12

0x3208,	// (0x0007a484) main_cam5_pane_t13_ParamLimits

0x3208,	// (0x0007a484) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00086d1c) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00086d1c) main_cam5_pane_t

0x5efe,	// (0x0007d17a) popup_scut_keymap_window_ParamLimits

0x5efe,	// (0x0007d17a) popup_scut_keymap_window

0xbf50,	// (0x000831cc) aid_size_cell_brow_shortcut

0x1946,	// (0x00078bc2) bg_popup_window_pane_cp010

0xbf5c,	// (0x000831d8) grid_scut_pane

0xbf68,	// (0x000831e4) cell_scut_pane_ParamLimits

0xbf68,	// (0x000831e4) cell_scut_pane

0xbf7f,	// (0x000831fb) cell_scut_pane_g1

0x3225,	// (0x0007a4a1) cell_scut_pane_t1

0x3234,	// (0x0007a4b0) cell_scut_pane_t2

0xbf88,	// (0x00083204) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00086d37) cell_scut_pane_t

0x9f4f,	// (0x000811cb) main_mup3_pane_g8_ParamLimits

0x9f4f,	// (0x000811cb) main_mup3_pane_g8

0xb2eb,	// (0x00082567) area_vitu2_query_pane_ParamLimits

0xb2eb,	// (0x00082567) area_vitu2_query_pane

0xbd86,	// (0x00083002) input_focus_pane_cp08

0x3243,	// (0x0007a4bf) area_vitu2_query_pane_g1

0xbf96,	// (0x00083212) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x00086d3e) area_vitu2_query_pane_g

0xbfa7,	// (0x00083223) area_vitu2_query_pane_t1_ParamLimits

0xbfa7,	// (0x00083223) area_vitu2_query_pane_t1

0xbfbb,	// (0x00083237) area_vitu2_query_pane_t2_ParamLimits

0xbfbb,	// (0x00083237) area_vitu2_query_pane_t2

0xbfcf,	// (0x0008324b) area_vitu2_query_pane_t3_ParamLimits

0xbfcf,	// (0x0008324b) area_vitu2_query_pane_t3

0x324f,	// (0x0007a4cb) area_vitu2_query_pane_t4_ParamLimits

0x324f,	// (0x0007a4cb) area_vitu2_query_pane_t4

0x3277,	// (0x0007a4f3) area_vitu2_query_pane_t5_ParamLimits

0x3277,	// (0x0007a4f3) area_vitu2_query_pane_t5

0x329f,	// (0x0007a51b) area_vitu2_query_pane_t6_ParamLimits

0x329f,	// (0x0007a51b) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00086d43) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00086d43) area_vitu2_query_pane_t

0xbff7,	// (0x00083273) bg_button_pane_cp018

0xc005,	// (0x00083281) bg_button_pane_cp021

0xc011,	// (0x0008328d) bg_button_pane_cp022

0xc022,	// (0x0008329e) input_focus_pane_cp09

0x7dbb,	// (0x0007f037) aid_size_touch_mv_arrow_left

0x7de4,	// (0x0007f060) aid_size_touch_mv_arrow_right

0xb896,	// (0x00082b12) main_cset_slider_pane_g16_ParamLimits

0xb896,	// (0x00082b12) main_cset_slider_pane_g16

0xb8a4,	// (0x00082b20) main_cset_slider_pane_g17_ParamLimits

0xb8a4,	// (0x00082b20) main_cset_slider_pane_g17

0xbf3d,	// (0x000831b9) cell_cam4_burst_pane_g1_ParamLimits

0xe195,	// (0x00085411) compa_mode_pane

0xbace,	// (0x00082d4a) popup_vtel_slider_window_g3_ParamLimits

0xbace,	// (0x00082d4a) popup_vtel_slider_window_g3

0xbae2,	// (0x00082d5e) popup_vtel_slider_window_g4_ParamLimits

0xbae2,	// (0x00082d5e) popup_vtel_slider_window_g4

0xbaf6,	// (0x00082d72) popup_vtel_slider_window_t1_ParamLimits

0xbaf6,	// (0x00082d72) popup_vtel_slider_window_t1

0xe195,	// (0x00085411) main_cl_pane

0xead5,	// (0x00085d51) popup_imed_adjust2_window_ParamLimits

0xeaad,	// (0x00085d29) bg_tb_trans_pane_cp05_ParamLimits

0x2820,	// (0x00079a9c) popup_imed_adjust2_window_g1_ParamLimits

0x282f,	// (0x00079aab) popup_imed_adjust2_window_g2_ParamLimits

0x282f,	// (0x00079aab) popup_imed_adjust2_window_g2

0x283b,	// (0x00079ab7) popup_imed_adjust2_window_g3_ParamLimits

0x283b,	// (0x00079ab7) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x00086abd) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x00086abd) popup_imed_adjust2_window_g

0x2847,	// (0x00079ac3) popup_imed_adjust2_window_t1_ParamLimits

0x285f,	// (0x00079adb) slider_imed_adjust_pane_ParamLimits

0x2873,	// (0x00079aef) slider_imed_adjust_pane_g1_ParamLimits

0x2883,	// (0x00079aff) slider_imed_adjust_pane_g2_ParamLimits

0x2893,	// (0x00079b0f) slider_imed_adjust_pane_g3_ParamLimits

0x28a4,	// (0x00079b20) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00086ac4) slider_imed_adjust_pane_g_ParamLimits

0xb057,	// (0x000822d3) aid_touch_area_cam4_ParamLimits

0xb057,	// (0x000822d3) aid_touch_area_cam4

0xb067,	// (0x000822e3) battery_pane_cp01

0xb0ee,	// (0x0008236a) main_camera4_pane_g6_ParamLimits

0xb0ee,	// (0x0008236a) main_camera4_pane_g6

0xb10c,	// (0x00082388) main_camera4_pane_t2_ParamLimits

0xb10c,	// (0x00082388) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00086bc7) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00086bc7) main_camera4_pane_t

0xb17b,	// (0x000823f7) aid_touch_area_vid4_ParamLimits

0xb17b,	// (0x000823f7) aid_touch_area_vid4

0xb1bb,	// (0x00082437) main_video4_pane_g5_ParamLimits

0xb1bb,	// (0x00082437) main_video4_pane_g5

0xb1dd,	// (0x00082459) vid4_progress_pane_ParamLimits

0xb1dd,	// (0x00082459) vid4_progress_pane

0x2eec,	// (0x0007a168) main_cset_slider_pane_g18_ParamLimits

0x2eec,	// (0x0007a168) main_cset_slider_pane_g18

0x310d,	// (0x0007a389) cell_cam4_burst_pane_g2_ParamLimits

0x310d,	// (0x0007a389) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00086d17) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00086d17) cell_cam4_burst_pane_g

0xc033,	// (0x000832af) bg_cl_pane_ParamLimits

0xc033,	// (0x000832af) bg_cl_pane

0xc03f,	// (0x000832bb) cl_header_pane_ParamLimits

0xc03f,	// (0x000832bb) cl_header_pane

0xc04b,	// (0x000832c7) cl_listscroll_pane_ParamLimits

0xc04b,	// (0x000832c7) cl_listscroll_pane

0x32eb,	// (0x0007a567) bg_cl_pane_g1

0x32f3,	// (0x0007a56f) bg_cl_pane_g2

0x32fb,	// (0x0007a577) bg_cl_pane_g3

0x3303,	// (0x0007a57f) bg_cl_pane_g4

0x330b,	// (0x0007a587) bg_cl_pane_g5

0x3313,	// (0x0007a58f) bg_cl_pane_g6

0x331b,	// (0x0007a597) bg_cl_pane_g7

0x3323,	// (0x0007a59f) bg_cl_pane_g8

0x332b,	// (0x0007a5a7) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x00086d52) bg_cl_pane_g

0xc057,	// (0x000832d3) aid_height_cl_leading_ParamLimits

0xc057,	// (0x000832d3) aid_height_cl_leading

0xc063,	// (0x000832df) aid_height_cl_text_ParamLimits

0xc063,	// (0x000832df) aid_height_cl_text

0x2d0c,	// (0x00079f88) bg_cl_header_pane_ParamLimits

0x2d0c,	// (0x00079f88) bg_cl_header_pane

0xc07b,	// (0x000832f7) cl_header_pane_g1_ParamLimits

0xc07b,	// (0x000832f7) cl_header_pane_g1

0xc088,	// (0x00083304) cl_header_pane_t1_ParamLimits

0xc088,	// (0x00083304) cl_header_pane_t1

0x3333,	// (0x0007a5af) cl_list_pane

0x2ebf,	// (0x0007a13b) hc_scroll_pane_cp01

0x1109,	// (0x00078385) bg_cl_header_pane_g1

0x2da5,	// (0x0007a021) bg_cl_header_pane_g2

0x1129,	// (0x000783a5) bg_cl_header_pane_g3

0x2db5,	// (0x0007a031) bg_cl_header_pane_g4

0x2dad,	// (0x0007a029) bg_cl_header_pane_g5

0x300e,	// (0x0007a28a) bg_cl_header_pane_g6

0x2dcd,	// (0x0007a049) bg_cl_header_pane_g7

0x2dd5,	// (0x0007a051) bg_cl_header_pane_g8

0x2dc5,	// (0x0007a041) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00086d65) bg_cl_header_pane_g

0xc09a,	// (0x00083316) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc09a,	// (0x00083316) hc_cl_list_double_graphic_heading_pane

0xc0ab,	// (0x00083327) hc_cl_list_single_graphic_pane_ParamLimits

0xc0ab,	// (0x00083327) hc_cl_list_single_graphic_pane

0xc0c4,	// (0x00083340) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc0c4,	// (0x00083340) hc_cl_list_single_graphic_pane_g1

0xc0d0,	// (0x0008334c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc0d0,	// (0x0008334c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00086d78) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00086d78) hc_cl_list_single_graphic_pane_g

0xc0e4,	// (0x00083360) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc0e4,	// (0x00083360) hc_cl_list_single_graphic_pane_t1

0xc0c4,	// (0x00083340) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc0c4,	// (0x00083340) hc_cl_list_double_graphic_heading_pane_g1

0xc0f9,	// (0x00083375) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc0f9,	// (0x00083375) hc_cl_list_double_graphic_heading_pane_g2

0xc10d,	// (0x00083389) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc10d,	// (0x00083389) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x00086d7d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x00086d7d) hc_cl_list_double_graphic_heading_pane_g

0xc121,	// (0x0008339d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc121,	// (0x0008339d) hc_cl_list_double_graphic_heading_pane_t1

0xc136,	// (0x000833b2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc136,	// (0x000833b2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00086d84) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00086d84) hc_cl_list_double_graphic_heading_pane_t

0xc15d,	// (0x000833d9) vid4_progress_pane_g1

0xc169,	// (0x000833e5) vid4_progress_pane_g2

0xc175,	// (0x000833f1) vid4_progress_pane_g3

0xc184,	// (0x00083400) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00086d89) vid4_progress_pane_g

0xc1a2,	// (0x0008341e) vid4_progress_pane_t1

0xc1b8,	// (0x00083434) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00086d94) vid4_progress_pane_t

0xc1e3,	// (0x0008345f) wait_bar_pane_cp07

0xece7,	// (0x00085f63) blid_firmament_pane_ParamLimits

0xed2a,	// (0x00085fa6) popup_blid_sat_info2_window_g1

0xed4e,	// (0x00085fca) popup_blid_sat_info2_window_t3

0xed5c,	// (0x00085fd8) popup_blid_sat_info2_window_t4

0xed6a,	// (0x00085fe6) popup_blid_sat_info2_window_t5

0xed78,	// (0x00085ff4) popup_blid_sat_info2_window_t6

0xed88,	// (0x00086004) popup_blid_sat_info2_window_t7

0xed96,	// (0x00086012) popup_blid_sat_info2_window_t8

0xeda4,	// (0x00086020) popup_blid_sat_info2_window_t9

0xedb2,	// (0x0008602e) popup_blid_sat_info2_window_t10

0xee74,	// (0x000860f0) aid_firma_cardinal_ParamLimits

0xee88,	// (0x00086104) blid_firmament_pane_t1_ParamLimits

0xee9f,	// (0x0008611b) blid_firmament_pane_t2_ParamLimits

0xeeb6,	// (0x00086132) blid_firmament_pane_t3_ParamLimits

0xeecd,	// (0x00086149) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x000869b6) blid_firmament_pane_t_ParamLimits

0xeee4,	// (0x00086160) blid_sat_info_pane_ParamLimits

0x922f,	// (0x000804ab) main_cam_set_pane_ParamLimits

0xa6d4,	// (0x00081950) aid_size_cell_colour_35_ParamLimits

0xa6ee,	// (0x0008196a) aid_size_cell_colour_112_ParamLimits

0xa705,	// (0x00081981) aid_size_cell_effect_ParamLimits

0x922f,	// (0x000804ab) bg_tb_trans_pane_cp02_ParamLimits

0xa71f,	// (0x0008199b) heading_imed_pane_ParamLimits

0xa72b,	// (0x000819a7) listscroll_imed_pane_ParamLimits

0x23c6,	// (0x00079642) popup_call2_audio_first_window_g5_ParamLimits

0x23c6,	// (0x00079642) popup_call2_audio_first_window_g5

0xae06,	// (0x00082082) aid_size_touch_image3_arrow_left_ParamLimits

0xae06,	// (0x00082082) aid_size_touch_image3_arrow_left

0xae1c,	// (0x00082098) aid_size_touch_image3_arrow_right_ParamLimits

0xae1c,	// (0x00082098) aid_size_touch_image3_arrow_right

0xc1ce,	// (0x0008344a) vid4_progress_pane_t3

0xa9c8,	// (0x00081c44) main_hwr_training_symbol_option_pane_ParamLimits

0xa9c8,	// (0x00081c44) main_hwr_training_symbol_option_pane

0x2b0d,	// (0x00079d89) popup_hwr_training_preview_window_ParamLimits

0x2b0d,	// (0x00079d89) popup_hwr_training_preview_window

0xaa29,	// (0x00081ca5) hwr_training_navi_pane_g5_ParamLimits

0xaa29,	// (0x00081ca5) hwr_training_navi_pane_g5

0x2d93,	// (0x0007a00f) popup_char_count_window

0xbbec,	// (0x00082e68) bg_popup_sub_pane_cp20_ParamLimits

0xbbfa,	// (0x00082e76) list_vitu2_match_list_pane_ParamLimits

0xbc06,	// (0x00082e82) vitu2_page_scroll_pane_ParamLimits

0xbc06,	// (0x00082e82) vitu2_page_scroll_pane

0x338e,	// (0x0007a60a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x338e,	// (0x0007a60a) list_single_hwr_training_symbol_option_pane

0x33a1,	// (0x0007a61d) list_single_hwr_training_symbol_option_pane_g1

0x33a9,	// (0x0007a625) list_single_hwr_training_symbol_option_pane_t1

0x33b7,	// (0x0007a633) bg_button_pane_cp023

0x33c0,	// (0x0007a63c) bg_button_pane_cp024

0xc1f3,	// (0x0008346f) vitu2_page_scroll_pane_g1

0xc1fb,	// (0x00083477) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00086d9b) vitu2_page_scroll_pane_g

0xc203,	// (0x0008347f) vitu2_page_scroll_pane_t1

0x33f3,	// (0x0007a66f) popup_char_count_window_g1

0x33fc,	// (0x0007a678) popup_char_count_window_g2

0x3405,	// (0x0007a681) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x00086da0) popup_char_count_window_g

0x340e,	// (0x0007a68a) popup_char_count_window_t1

0xe195,	// (0x00085411) main_vded2_pane

0x280c,	// (0x00079a88) aid_size_cell_imed_line

0x2816,	// (0x00079a92) grid_imed_line_width_pane

0xb23f,	// (0x000824bb) vid4_indicators_pane_g4

0x341c,	// (0x0007a698) cell_imed_line_width_pane_ParamLimits

0x341c,	// (0x0007a698) cell_imed_line_width_pane

0x3430,	// (0x0007a6ac) cell_imed_line_width_pane_g1

0xf127,	// (0x000863a3) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00086da7) cell_imed_line_width_pane_g

0xc212,	// (0x0008348e) main_vded2_pane_g1_ParamLimits

0xc212,	// (0x0008348e) main_vded2_pane_g1

0xc21f,	// (0x0008349b) main_vded2_pane_g2_ParamLimits

0xc21f,	// (0x0008349b) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00086dac) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00086dac) main_vded2_pane_g

0xc22d,	// (0x000834a9) vded2_slider_pane_ParamLimits

0xc22d,	// (0x000834a9) vded2_slider_pane

0xc23a,	// (0x000834b6) aid_size_touch_vded2_end

0xc244,	// (0x000834c0) aid_size_touch_vded2_playhead

0x3439,	// (0x0007a6b5) aid_size_touch_vded2_start

0x3441,	// (0x0007a6bd) vded2_slider_bg_pane

0x344a,	// (0x0007a6c6) vded2_slider_pane_g1

0x3453,	// (0x0007a6cf) vded2_slider_pane_g2

0xc24c,	// (0x000834c8) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x00086db1) vded2_slider_pane_g

0x345b,	// (0x0007a6d7) vded2_slider_bg_pane_g1

0x3464,	// (0x0007a6e0) vded2_slider_bg_pane_g2

0x346d,	// (0x0007a6e9) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00086db8) vded2_slider_bg_pane_g

0x84f5,	// (0x0007f771) aid_postcard_touch_down_pane_ParamLimits

0x84f5,	// (0x0007f771) aid_postcard_touch_down_pane

0x8505,	// (0x0007f781) aid_postcard_touch_up_pane_ParamLimits

0x8505,	// (0x0007f781) aid_postcard_touch_up_pane

0xe195,	// (0x00085411) main_blid2_pane

0xeabb,	// (0x00085d37) popup_blid2_search_window

0xe195,	// (0x00085411) blid2_gps_pane

0xe195,	// (0x00085411) blid2_navig_pane

0xe195,	// (0x00085411) blid2_search_pane

0xe195,	// (0x00085411) blid2_tripm_pane

0xc255,	// (0x000834d1) blid2_search_pane_g1_ParamLimits

0xc255,	// (0x000834d1) blid2_search_pane_g1

0xc265,	// (0x000834e1) blid2_search_pane_t1_ParamLimits

0xc265,	// (0x000834e1) blid2_search_pane_t1

0xc277,	// (0x000834f3) aid_size_cell_blid2_gps_ParamLimits

0xc277,	// (0x000834f3) aid_size_cell_blid2_gps

0xc287,	// (0x00083503) blid2_gps_pane_g1_ParamLimits

0xc287,	// (0x00083503) blid2_gps_pane_g1

0xc293,	// (0x0008350f) grid_blid2_satellite_pane_ParamLimits

0xc293,	// (0x0008350f) grid_blid2_satellite_pane

0xc2a3,	// (0x0008351f) blid2_navig_pane_g1_ParamLimits

0xc2a3,	// (0x0008351f) blid2_navig_pane_g1

0xc2af,	// (0x0008352b) blid2_navig_pane_t1_ParamLimits

0xc2af,	// (0x0008352b) blid2_navig_pane_t1

0xc2c1,	// (0x0008353d) blid2_navig_pane_t2_ParamLimits

0xc2c1,	// (0x0008353d) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x00086dbf) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x00086dbf) blid2_navig_pane_t

0xc2d3,	// (0x0008354f) blid2_navig_ring_pane_ParamLimits

0xc2d3,	// (0x0008354f) blid2_navig_ring_pane

0xc2e3,	// (0x0008355f) blid2_speed_pane_ParamLimits

0xc2e3,	// (0x0008355f) blid2_speed_pane

0xc2ef,	// (0x0008356b) blid2_tripm_pane_g1_ParamLimits

0xc2ef,	// (0x0008356b) blid2_tripm_pane_g1

0xc2ff,	// (0x0008357b) blid2_tripm_pane_g2_ParamLimits

0xc2ff,	// (0x0008357b) blid2_tripm_pane_g2

0xc30b,	// (0x00083587) blid2_tripm_pane_g3_ParamLimits

0xc30b,	// (0x00083587) blid2_tripm_pane_g3

0xc317,	// (0x00083593) blid2_tripm_pane_g4_ParamLimits

0xc317,	// (0x00083593) blid2_tripm_pane_g4

0xc323,	// (0x0008359f) blid2_tripm_pane_g5_ParamLimits

0xc323,	// (0x0008359f) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x00086dc4) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x00086dc4) blid2_tripm_pane_g

0xc33f,	// (0x000835bb) blid2_tripm_pane_t1_ParamLimits

0xc33f,	// (0x000835bb) blid2_tripm_pane_t1

0xc353,	// (0x000835cf) blid2_tripm_pane_t2_ParamLimits

0xc353,	// (0x000835cf) blid2_tripm_pane_t2

0xc365,	// (0x000835e1) blid2_tripm_pane_t3_ParamLimits

0xc365,	// (0x000835e1) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x00086dd1) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x00086dd1) blid2_tripm_pane_t

0xc397,	// (0x00083613) cell_blid2_satellite_pane_ParamLimits

0xc397,	// (0x00083613) cell_blid2_satellite_pane

0xc3b1,	// (0x0008362d) cell_blid2_satellite_pane_g1

0x3476,	// (0x0007a6f2) cell_blid2_satellite_pane_t1

0xeef4,	// (0x00086170) blid2_speed_pane_g1

0x3484,	// (0x0007a700) blid2_speed_pane_t1

0x3492,	// (0x0007a70e) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x00086dda) blid2_speed_pane_t

0xeef4,	// (0x00086170) blid2_navig_ring_pane_g1

0xc3ba,	// (0x00083636) blid2_navig_ring_pane_g2

0xc3c2,	// (0x0008363e) blid2_navig_ring_pane_g3

0xc3ca,	// (0x00083646) blid2_navig_ring_pane_g4

0xc3d2,	// (0x0008364e) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x00086ddf) blid2_navig_ring_pane_g

0xe195,	// (0x00085411) bg_popup_window_pane_cp011

0x34a0,	// (0x0007a71c) popup_blid2_search_window_g1

0x34a8,	// (0x0007a724) popup_blid2_search_window_t1

0x34b6,	// (0x0007a732) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x00086dea) popup_blid2_search_window_t

0x1018,	// (0x00078294) main_browser_pane_g1

0x0b9a,	// (0x00077e16) main_browser_pane_ParamLimits

0xb209,	// (0x00082485) bg_button_pane_cp011_ParamLimits

0xb4b7,	// (0x00082733) cell_vitu2_function_pane_g1_ParamLimits

0x922f,	// (0x000804ab) bg_popup_sub_pane_cp22_ParamLimits

0xbd86,	// (0x00083002) input_focus_pane_cp08_ParamLimits

0xbd93,	// (0x0008300f) popup_vitu2_query_button_pane_ParamLimits

0xbd93,	// (0x0008300f) popup_vitu2_query_button_pane

0xbd68,	// (0x00082fe4) popup_vitu2_query_input_button_pane

0x3063,	// (0x0007a2df) popup_vitu2_query_window_g1_ParamLimits

0xbda4,	// (0x00083020) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00086cf1) popup_vitu2_query_window_g_ParamLimits

0xe195,	// (0x00085411) bg_button_pane_cp026

0xc3da,	// (0x00083656) popup_vitu2_query_input_button_pane_g1

0xe195,	// (0x00085411) bg_button_pane_cp025

0x34c4,	// (0x0007a740) popup_vitu2_query_button_pane_t1

0x9c6a,	// (0x00080ee6) main_mp3_pane_t6

0x9c7a,	// (0x00080ef6) popup_slider_window_cp01

0xb12c,	// (0x000823a8) cam4_battery_pane

0xb217,	// (0x00082493) cam4_battery_pane_cp02

0xc14b,	// (0x000833c7) cam4_battery_pane_cp01

0xc155,	// (0x000833d1) cam4_battery_pane_cp03

0x34d2,	// (0x0007a74e) cam4_battery_pane_g1

0xeef4,	// (0x00086170) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x00086def) cam4_battery_pane_g

0xedc0,	// (0x0008603c) popup_blid_sat_info2_window_t11

0x7dbb,	// (0x0007f037) aid_size_touch_mv_arrow_left_ParamLimits

0x7de4,	// (0x0007f060) aid_size_touch_mv_arrow_right_ParamLimits

0x18a6,	// (0x00078b22) navi_pane_g1_ParamLimits

0x7e0d,	// (0x0007f089) navi_pane_g2_ParamLimits

0x7e3b,	// (0x0007f0b7) navi_pane_g3_ParamLimits

0xf44c,	// (0x000866c8) navi_pane_g_ParamLimits

0x7e95,	// (0x0007f111) navi_pane_mv_t1_ParamLimits

0xa737,	// (0x000819b3) grid_imed_effect_pane_ParamLimits

0x0f61,	// (0x000781dd) aid_placing_vt_slider_lsc

0x0f69,	// (0x000781e5) aid_placing_vt_slider_prt

0x922f,	// (0x000804ab) bg_tb_trans_pane_cp01_ParamLimits

0xf077,	// (0x000862f3) popup_image_details_window_g1_ParamLimits

0xf08a,	// (0x00086306) popup_image_details_window_g2_ParamLimits

0xf09f,	// (0x0008631b) popup_image_details_window_g3_ParamLimits

0xf09f,	// (0x0008631b) popup_image_details_window_g3

0xf77f,	// (0x000869fb) popup_image_details_window_g_ParamLimits

0xf0b3,	// (0x0008632f) popup_image_details_window_t1_ParamLimits

0xf0c5,	// (0x00086341) popup_image_details_window_t2_ParamLimits

0xf0de,	// (0x0008635a) popup_image_details_window_t3_ParamLimits

0xf0f2,	// (0x0008636e) popup_image_details_window_t4_ParamLimits

0xf10d,	// (0x00086389) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00086a02) popup_image_details_window_t_ParamLimits

0xc06f,	// (0x000832eb) cl_header_name_pane_ParamLimits

0xc06f,	// (0x000832eb) cl_header_name_pane

0xc3e2,	// (0x0008365e) cl_header_name_pane_t1_ParamLimits

0xc3e2,	// (0x0008365e) cl_header_name_pane_t1

0xc3f9,	// (0x00083675) cl_header_name_pane_t2_ParamLimits

0xc3f9,	// (0x00083675) cl_header_name_pane_t2

0xc423,	// (0x0008369f) cl_header_name_pane_t3_ParamLimits

0xc423,	// (0x0008369f) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x00086df4) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x00086df4) cl_header_name_pane_t

0x7e66,	// (0x0007f0e2) navi_pane_mv_g2_ParamLimits

0x2d33,	// (0x00079faf) field_vitu2_entry_pane_g1_ParamLimits

0x2d3f,	// (0x00079fbb) field_vitu2_entry_pane_g2_ParamLimits

0x2d4b,	// (0x00079fc7) field_vitu2_entry_pane_g3_ParamLimits

0x2d4b,	// (0x00079fc7) field_vitu2_entry_pane_g3

0xf974,	// (0x00086bf0) field_vitu2_entry_pane_g_ParamLimits

0xb447,	// (0x000826c3) cell_vitu2_itu_pane_g1_ParamLimits

0xb457,	// (0x000826d3) cell_vitu2_itu_pane_g2_ParamLimits

0xb457,	// (0x000826d3) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00086bfc) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00086bfc) cell_vitu2_itu_pane_g

0xb209,	// (0x00082485) bg_vkb2_func_pane_cp05_ParamLimits

0xb209,	// (0x00082485) bg_vkb2_func_pane_cp05

0xb209,	// (0x00082485) bg_vkb2_func_pane_cp03

0xb209,	// (0x00082485) bg_vkb2_func_pane_cp04

0xb209,	// (0x00082485) bg_vkb2_func_pane_cp10_ParamLimits

0xb209,	// (0x00082485) bg_vkb2_func_pane_cp10

0xc011,	// (0x0008328d) bg_vkb2_func_pane_cp08

0xbff7,	// (0x00083273) bg_vkb2_func_pane_cp06

0xc005,	// (0x00083281) bg_vkb2_func_pane_cp07

0x33c9,	// (0x0007a645) bg_vkb2_func_pane_cp11_ParamLimits

0x33c9,	// (0x0007a645) bg_vkb2_func_pane_cp11

0x33de,	// (0x0007a65a) bg_vkb2_func_pane_cp12_ParamLimits

0x33de,	// (0x0007a65a) bg_vkb2_func_pane_cp12

0xe195,	// (0x00085411) bg_vkb2_func_pane_cp09

0x2da5,	// (0x0007a021) bg_vkb2_func_pane_g1

0x1129,	// (0x000783a5) bg_vkb2_func_pane_g2

0x2dad,	// (0x0007a029) bg_vkb2_func_pane_g3

0x2db5,	// (0x0007a031) bg_vkb2_func_pane_g4

0x300e,	// (0x0007a28a) bg_vkb2_func_pane_g5

0x2dcd,	// (0x0007a049) bg_vkb2_func_pane_g6

0x2dd5,	// (0x0007a051) bg_vkb2_func_pane_g7

0x2dc5,	// (0x0007a041) bg_vkb2_func_pane_g8

0x1109,	// (0x00078385) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x00086dfb) bg_vkb2_func_pane_g

0xc331,	// (0x000835ad) blid2_tripm_pane_g6_ParamLimits

0xc331,	// (0x000835ad) blid2_tripm_pane_g6

0x2bc5,	// (0x00079e41) mp4_progress_pane_g1

0xc38b,	// (0x00083607) blid2_tripm_values_pane_ParamLimits

0xc38b,	// (0x00083607) blid2_tripm_values_pane

0xc448,	// (0x000836c4) blid2_tripm_values_pane_t1

0xc456,	// (0x000836d2) blid2_tripm_values_pane_t2

0xc464,	// (0x000836e0) blid2_tripm_values_pane_t3

0xc472,	// (0x000836ee) blid2_tripm_values_pane_t4

0xc480,	// (0x000836fc) blid2_tripm_values_pane_t5

0xc48e,	// (0x0008370a) blid2_tripm_values_pane_t6

0xc49c,	// (0x00083718) blid2_tripm_values_pane_t7

0xc4aa,	// (0x00083726) blid2_tripm_values_pane_t8

0xc4b8,	// (0x00083734) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x00086e0e) blid2_tripm_values_pane_t

0x6cc7,	// (0x0007df43) call_video_pane_t1_ParamLimits

0x6ce1,	// (0x0007df5d) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00086551) call_video_pane_t_ParamLimits

0x83c6,	// (0x0007f642) msg_header_pane_g1_ParamLimits

0x1ae1,	// (0x00078d5d) msg_header_pane_g2_ParamLimits

0x1ae1,	// (0x00078d5d) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0008676b) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0008676b) msg_header_pane_g

0x0b9a,	// (0x00077e16) main_clock2_pane_ParamLimits

0xa4bb,	// (0x00081737) grid_clock2_toolbar_pane_ParamLimits

0xa4bb,	// (0x00081737) grid_clock2_toolbar_pane

0xa4bb,	// (0x00081737) listscroll_clock2_pane_ParamLimits

0xa4bb,	// (0x00081737) listscroll_clock2_pane

0xa568,	// (0x000817e4) main_clock2_pane_t3_ParamLimits

0xa568,	// (0x000817e4) main_clock2_pane_t3

0xa57a,	// (0x000817f6) main_clock2_pane_t4_ParamLimits

0xa57a,	// (0x000817f6) main_clock2_pane_t4

0x34dc,	// (0x0007a758) cell_clock2_toolbar_pane

0x34e4,	// (0x0007a760) cell_clock2_toolbar_pane_cp01

0x34e4,	// (0x0007a760) cell_clock2_toolbar_pane_cp02

0x34ec,	// (0x0007a768) cell_clock2_toolbar_pane_cp03

0x34f4,	// (0x0007a770) list_clock2_pane

0x17fd,	// (0x00078a79) scroll_pane_cp10

0x34fc,	// (0x0007a778) list_single_clock2_pane_ParamLimits

0x34fc,	// (0x0007a778) list_single_clock2_pane

0x1946,	// (0x00078bc2) list_highlight_pane_cp08

0x3509,	// (0x0007a785) list_single_clock2_pane_t1

0x3517,	// (0x0007a793) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x00086e21) list_single_clock2_pane_t

0xe195,	// (0x00085411) bg_button_pane_cp10

0x3525,	// (0x0007a7a1) cell_clock2_toolbar_pane_g1

0x8463,	// (0x0007f6df) aid_main_viewer_pane_g1_ParamLimits

0x8463,	// (0x0007f6df) aid_main_viewer_pane_g1

0x846f,	// (0x0007f6eb) aid_main_viewer_pane_g2_ParamLimits

0x846f,	// (0x0007f6eb) aid_main_viewer_pane_g2

0x847b,	// (0x0007f6f7) aid_main_viewer_pane_g3_ParamLimits

0x847b,	// (0x0007f6f7) aid_main_viewer_pane_g3

0x848c,	// (0x0007f708) aid_main_viewer_pane_g4_ParamLimits

0x848c,	// (0x0007f708) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0008677c) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0008677c) aid_main_viewer_pane_g

0x9222,	// (0x0008049e) main_calc_pane_ParamLimits

0x923d,	// (0x000804b9) main_dialer2_pane_ParamLimits

0xe195,	// (0x00085411) main_cam6_pane

0xe195,	// (0x00085411) main_vid6_pane

0xa4c7,	// (0x00081743) listscroll_gen_pane_cp06_ParamLimits

0xa4c7,	// (0x00081743) listscroll_gen_pane_cp06

0xa58c,	// (0x00081808) main_clock2_pane_t5_ParamLimits

0xa58c,	// (0x00081808) main_clock2_pane_t5

0xa5d5,	// (0x00081851) aid_call2_pane_cp10_ParamLimits

0xa5e7,	// (0x00081863) aid_call_pane_cp10_ParamLimits

0x187b,	// (0x00078af7) popup_clock_analogue_window_cp10_g1_ParamLimits

0x187b,	// (0x00078af7) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa5f9,	// (0x00081875) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa5f9,	// (0x00081875) popup_clock_analogue_window_cp10_g4_ParamLimits

0x187b,	// (0x00078af7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x00086ab2) popup_clock_analogue_window_cp10_g_ParamLimits

0xa60b,	// (0x00081887) popup_clock_analogue_window_cp10_t1_ParamLimits

0xadb3,	// (0x0008202f) cell_dialer2_keypad_pane_g2_ParamLimits

0xadb3,	// (0x0008202f) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00086b98) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00086b98) cell_dialer2_keypad_pane_g

0xadcf,	// (0x0008204b) cell_dialer2_keypad_pane_t1

0xb782,	// (0x000829fe) main_cset_text2_pane_ParamLimits

0xb782,	// (0x000829fe) main_cset_text2_pane

0x3243,	// (0x0007a4bf) area_vitu2_query_pane_g1_ParamLimits

0xbf96,	// (0x00083212) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x00086d3e) area_vitu2_query_pane_g_ParamLimits

0x32c7,	// (0x0007a543) area_vitu2_query_pane_t7_ParamLimits

0x32c7,	// (0x0007a543) area_vitu2_query_pane_t7

0xbff7,	// (0x00083273) bg_button_pane_cp018_ParamLimits

0xc005,	// (0x00083281) bg_button_pane_cp021_ParamLimits

0xc011,	// (0x0008328d) bg_button_pane_cp022_ParamLimits

0xc011,	// (0x0008328d) bg_vkb2_func_pane_cp08_ParamLimits

0xbff7,	// (0x00083273) bg_vkb2_func_pane_cp06_ParamLimits

0xc005,	// (0x00083281) bg_vkb2_func_pane_cp07_ParamLimits

0xc022,	// (0x0008329e) input_focus_pane_cp09_ParamLimits

0xc4c6,	// (0x00083742) cam6_autofocus_pane_ParamLimits

0xc4c6,	// (0x00083742) cam6_autofocus_pane

0xc4e8,	// (0x00083764) cam6_image_uncrop_pane_ParamLimits

0xc4e8,	// (0x00083764) cam6_image_uncrop_pane

0xc515,	// (0x00083791) cam6_indi_pane_ParamLimits

0xc515,	// (0x00083791) cam6_indi_pane

0xc52f,	// (0x000837ab) cam6_mode_pane_ParamLimits

0xc52f,	// (0x000837ab) cam6_mode_pane

0xc543,	// (0x000837bf) cam6_timer_pane_ParamLimits

0xc543,	// (0x000837bf) cam6_timer_pane

0xc54f,	// (0x000837cb) cam6_zoom_pane_ParamLimits

0xc54f,	// (0x000837cb) cam6_zoom_pane

0xc567,	// (0x000837e3) cam6_mode_pane_g1_ParamLimits

0xc567,	// (0x000837e3) cam6_mode_pane_g1

0xc573,	// (0x000837ef) cam6_mode_pane_g2_ParamLimits

0xc573,	// (0x000837ef) cam6_mode_pane_g2

0xc57f,	// (0x000837fb) cam6_mode_pane_g3_ParamLimits

0xc57f,	// (0x000837fb) cam6_mode_pane_g3

0xc58b,	// (0x00083807) cam6_mode_pane_g4_ParamLimits

0xc58b,	// (0x00083807) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x00086e26) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x00086e26) cam6_mode_pane_g

0x352d,	// (0x0007a7a9) bg_tb_trans_pane_cp08_ParamLimits

0x352d,	// (0x0007a7a9) bg_tb_trans_pane_cp08

0x353b,	// (0x0007a7b7) cam6_battery_pane_ParamLimits

0x353b,	// (0x0007a7b7) cam6_battery_pane

0x3551,	// (0x0007a7cd) cam6_indi_pane_g1_ParamLimits

0x3551,	// (0x0007a7cd) cam6_indi_pane_g1

0x3563,	// (0x0007a7df) cam6_indi_pane_g2_ParamLimits

0x3563,	// (0x0007a7df) cam6_indi_pane_g2

0x3575,	// (0x0007a7f1) cam6_indi_pane_g3_ParamLimits

0x3575,	// (0x0007a7f1) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x00086e2f) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x00086e2f) cam6_indi_pane_g

0x3587,	// (0x0007a803) cam6_indi_pane_t1_ParamLimits

0x3587,	// (0x0007a803) cam6_indi_pane_t1

0xb27d,	// (0x000824f9) cam6_autofocus_pane_g1

0xb275,	// (0x000824f1) cam6_autofocus_pane_g2

0xb28d,	// (0x00082509) cam6_autofocus_pane_g3

0xb285,	// (0x00082501) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x00086e36) cam6_autofocus_pane_g

0x35ad,	// (0x0007a829) cam6_timer_pane_g1

0x35b5,	// (0x0007a831) cam6_timer_pane_t1

0x35c3,	// (0x0007a83f) cam6_zoom_cont_pane

0x35cb,	// (0x0007a847) cam6_zoom_pane_g1

0x35d3,	// (0x0007a84f) cam6_zoom_pane_g2

0xc597,	// (0x00083813) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x00086e3f) cam6_zoom_pane_g

0xeef4,	// (0x00086170) cam6_battery_pane_g1

0xeef4,	// (0x00086170) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x000869bf) cam6_battery_pane_g

0x35db,	// (0x0007a857) cam6_zoom_cont_pane_g1

0x35e4,	// (0x0007a860) cam6_zoom_cont_pane_g2

0x35ed,	// (0x0007a869) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x00086e46) cam6_zoom_cont_pane_g

0xc5b4,	// (0x00083830) cam6_mode_pane_cp_ParamLimits

0xc5b4,	// (0x00083830) cam6_mode_pane_cp

0xc5c8,	// (0x00083844) cam6_zoom_pane_cp_ParamLimits

0xc5c8,	// (0x00083844) cam6_zoom_pane_cp

0xc5e0,	// (0x0008385c) vid6_image_uncrop_cif_pane_ParamLimits

0xc5e0,	// (0x0008385c) vid6_image_uncrop_cif_pane

0xc60c,	// (0x00083888) vid6_image_uncrop_nhd_pane_ParamLimits

0xc60c,	// (0x00083888) vid6_image_uncrop_nhd_pane

0xc629,	// (0x000838a5) vid6_image_uncrop_vga_pane_ParamLimits

0xc629,	// (0x000838a5) vid6_image_uncrop_vga_pane

0xc648,	// (0x000838c4) vid6_image_uncrop_wvga_pane_ParamLimits

0xc648,	// (0x000838c4) vid6_image_uncrop_wvga_pane

0xc665,	// (0x000838e1) vid6_indi_pane_ParamLimits

0xc665,	// (0x000838e1) vid6_indi_pane

0x352d,	// (0x0007a7a9) bg_tb_trans_pane_cp09_ParamLimits

0x352d,	// (0x0007a7a9) bg_tb_trans_pane_cp09

0x3605,	// (0x0007a881) cam6_battery_pane_cp_ParamLimits

0x3605,	// (0x0007a881) cam6_battery_pane_cp

0x3611,	// (0x0007a88d) vid6_indi_pane_g1_ParamLimits

0x3611,	// (0x0007a88d) vid6_indi_pane_g1

0x3623,	// (0x0007a89f) vid6_indi_pane_g2_ParamLimits

0x3623,	// (0x0007a89f) vid6_indi_pane_g2

0x3635,	// (0x0007a8b1) vid6_indi_pane_g3_ParamLimits

0x3635,	// (0x0007a8b1) vid6_indi_pane_g3

0x364a,	// (0x0007a8c6) vid6_indi_pane_g4_ParamLimits

0x364a,	// (0x0007a8c6) vid6_indi_pane_g4

0x365f,	// (0x0007a8db) vid6_indi_pane_g5_ParamLimits

0x365f,	// (0x0007a8db) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x00086e4d) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x00086e4d) vid6_indi_pane_g

0x3679,	// (0x0007a8f5) vid6_indi_pane_t1_ParamLimits

0x3679,	// (0x0007a8f5) vid6_indi_pane_t1

0x368f,	// (0x0007a90b) vid6_indi_pane_t2_ParamLimits

0x368f,	// (0x0007a90b) vid6_indi_pane_t2

0x36b7,	// (0x0007a933) vid6_indi_pane_t3_ParamLimits

0x36b7,	// (0x0007a933) vid6_indi_pane_t3

0x36df,	// (0x0007a95b) vid6_indi_pane_t4_ParamLimits

0x36df,	// (0x0007a95b) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x00086e58) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x00086e58) vid6_indi_pane_t

0x3703,	// (0x0007a97f) wait_bar_pane_cp08

0xc68a,	// (0x00083906) main_cset_text2_pane_t1_ParamLimits

0xc68a,	// (0x00083906) main_cset_text2_pane_t1

0xc59f,	// (0x0008381b) listscroll_gen_pane_cp06_t1_ParamLimits

0xc59f,	// (0x0008381b) listscroll_gen_pane_cp06_t1

0xe195,	// (0x00085411) main_cam6_set_pane

0xb11e,	// (0x0008239a) bg_tb_trans_pane_cp06_ParamLimits

0xb134,	// (0x000823b0) cam4_indicators_pane_g1_ParamLimits

0xb141,	// (0x000823bd) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00086bcc) cam4_indicators_pane_g_ParamLimits

0xb161,	// (0x000823dd) cam4_indicators_pane_t1_ParamLimits

0xb209,	// (0x00082485) bg_tb_trans_pane_cp07_ParamLimits

0xb134,	// (0x000823b0) vid4_indicators_pane_g1_ParamLimits

0xb221,	// (0x0008249d) vid4_indicators_pane_g2_ParamLimits

0xb22e,	// (0x000824aa) vid4_indicators_pane_g3_ParamLimits

0xb23f,	// (0x000824bb) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x00086bde) vid4_indicators_pane_g_ParamLimits

0xb25b,	// (0x000824d7) vid4_indicators_pane_t1_ParamLimits

0xc15d,	// (0x000833d9) vid4_progress_pane_g1_ParamLimits

0xc169,	// (0x000833e5) vid4_progress_pane_g2_ParamLimits

0xc175,	// (0x000833f1) vid4_progress_pane_g3_ParamLimits

0xc184,	// (0x00083400) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00086d89) vid4_progress_pane_g_ParamLimits

0xc1a2,	// (0x0008341e) vid4_progress_pane_t1_ParamLimits

0xc1b8,	// (0x00083434) vid4_progress_pane_t2_ParamLimits

0xc1ce,	// (0x0008344a) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00086d94) vid4_progress_pane_t_ParamLimits

0xc1e3,	// (0x0008345f) wait_bar_pane_cp07_ParamLimits

0xc6bd,	// (0x00083939) main_cam6_set_pane_g2_ParamLimits

0xc6bd,	// (0x00083939) main_cam6_set_pane_g2

0xc6c9,	// (0x00083945) main_cset6_listscroll_pane_ParamLimits

0xc6c9,	// (0x00083945) main_cset6_listscroll_pane

0xc6f4,	// (0x00083970) main_cset6_slider_pane_ParamLimits

0xc6f4,	// (0x00083970) main_cset6_slider_pane

0xc700,	// (0x0008397c) main_cset6_text2_pane_ParamLimits

0xc700,	// (0x0008397c) main_cset6_text2_pane

0x3712,	// (0x0007a98e) main_cset6_text_pane

0x371a,	// (0x0007a996) main_cset_list_pane_copy1_ParamLimits

0x371a,	// (0x0007a996) main_cset_list_pane_copy1

0x372a,	// (0x0007a9a6) scroll_pane_cp028_copy1

0xc713,	// (0x0008398f) cset_list_set_pane_copy1

0xc726,	// (0x000839a2) aid_position_infowindow_above_copy1

0xc72e,	// (0x000839aa) aid_position_infowindow_below_copy1

0xc736,	// (0x000839b2) cset_list_set_pane_g1_copy1

0x2f98,	// (0x0007a214) cset_list_set_pane_g3_copy1_ParamLimits

0x2f98,	// (0x0007a214) cset_list_set_pane_g3_copy1

0x2fa7,	// (0x0007a223) cset_list_set_pane_t1_copy1_ParamLimits

0x2fa7,	// (0x0007a223) cset_list_set_pane_t1_copy1

0x922f,	// (0x000804ab) list_highlight_pane_cp021_copy1_ParamLimits

0x922f,	// (0x000804ab) list_highlight_pane_cp021_copy1

0x3733,	// (0x0007a9af) cset6_slider_pane_ParamLimits

0x3733,	// (0x0007a9af) cset6_slider_pane

0x375f,	// (0x0007a9db) main_cset6_slider_pane_g1_ParamLimits

0x375f,	// (0x0007a9db) main_cset6_slider_pane_g1

0xc73e,	// (0x000839ba) main_cset6_slider_pane_g2_ParamLimits

0xc73e,	// (0x000839ba) main_cset6_slider_pane_g2

0x3787,	// (0x0007aa03) main_cset6_slider_pane_g3_ParamLimits

0x3787,	// (0x0007aa03) main_cset6_slider_pane_g3

0xc766,	// (0x000839e2) main_cset6_slider_pane_g4_ParamLimits

0xc766,	// (0x000839e2) main_cset6_slider_pane_g4

0xc772,	// (0x000839ee) main_cset6_slider_pane_g5_ParamLimits

0xc772,	// (0x000839ee) main_cset6_slider_pane_g5

0x2ed4,	// (0x0007a150) main_cset6_slider_pane_g7_ParamLimits

0x2ed4,	// (0x0007a150) main_cset6_slider_pane_g7

0x2ee0,	// (0x0007a15c) main_cset6_slider_pane_g8_ParamLimits

0x2ee0,	// (0x0007a15c) main_cset6_slider_pane_g8

0xc780,	// (0x000839fc) main_cset6_slider_pane_g9_ParamLimits

0xc780,	// (0x000839fc) main_cset6_slider_pane_g9

0xc78c,	// (0x00083a08) main_cset6_slider_pane_g10_ParamLimits

0xc78c,	// (0x00083a08) main_cset6_slider_pane_g10

0xc798,	// (0x00083a14) main_cset6_slider_pane_g11_ParamLimits

0xc798,	// (0x00083a14) main_cset6_slider_pane_g11

0xc7a4,	// (0x00083a20) main_cset6_slider_pane_g12_ParamLimits

0xc7a4,	// (0x00083a20) main_cset6_slider_pane_g12

0xc7b0,	// (0x00083a2c) main_cset6_slider_pane_g13_ParamLimits

0xc7b0,	// (0x00083a2c) main_cset6_slider_pane_g13

0xc7bc,	// (0x00083a38) main_cset6_slider_pane_g14_ParamLimits

0xc7bc,	// (0x00083a38) main_cset6_slider_pane_g14

0xc7c8,	// (0x00083a44) main_cset6_slider_pane_g15_ParamLimits

0xc7c8,	// (0x00083a44) main_cset6_slider_pane_g15

0xc7e0,	// (0x00083a5c) main_cset6_slider_pane_g16_ParamLimits

0xc7e0,	// (0x00083a5c) main_cset6_slider_pane_g16

0xc7ee,	// (0x00083a6a) main_cset6_slider_pane_g17_ParamLimits

0xc7ee,	// (0x00083a6a) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x00086e61) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x00086e61) main_cset6_slider_pane_g

0x3793,	// (0x0007aa0f) main_cset6_slider_pane_t1_ParamLimits

0x3793,	// (0x0007aa0f) main_cset6_slider_pane_t1

0xc814,	// (0x00083a90) main_cset6_slider_pane_t2_ParamLimits

0xc814,	// (0x00083a90) main_cset6_slider_pane_t2

0xc83f,	// (0x00083abb) main_cset6_slider_pane_t3_ParamLimits

0xc83f,	// (0x00083abb) main_cset6_slider_pane_t3

0xc86a,	// (0x00083ae6) main_cset6_slider_pane_t4_ParamLimits

0xc86a,	// (0x00083ae6) main_cset6_slider_pane_t4

0xc895,	// (0x00083b11) main_cset6_slider_pane_t5_ParamLimits

0xc895,	// (0x00083b11) main_cset6_slider_pane_t5

0x37d4,	// (0x0007aa50) main_cset6_slider_pane_t7_ParamLimits

0x37d4,	// (0x0007aa50) main_cset6_slider_pane_t7

0xc8c2,	// (0x00083b3e) main_cset6_slider_pane_t8_ParamLimits

0xc8c2,	// (0x00083b3e) main_cset6_slider_pane_t8

0xc8e6,	// (0x00083b62) main_cset6_slider_pane_t9_ParamLimits

0xc8e6,	// (0x00083b62) main_cset6_slider_pane_t9

0xc90a,	// (0x00083b86) main_cset6_slider_pane_t10_ParamLimits

0xc90a,	// (0x00083b86) main_cset6_slider_pane_t10

0xc92e,	// (0x00083baa) main_cset6_slider_pane_t11_ParamLimits

0xc92e,	// (0x00083baa) main_cset6_slider_pane_t11

0x380a,	// (0x0007aa86) main_cset6_slider_pane_t14_ParamLimits

0x380a,	// (0x0007aa86) main_cset6_slider_pane_t14

0x3843,	// (0x0007aabf) main_cset6_slider_pane_t15_ParamLimits

0x3843,	// (0x0007aabf) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00086e86) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00086e86) main_cset6_slider_pane_t

0x2fbc,	// (0x0007a238) cset_slider_pane_g1_copy1

0x2fc5,	// (0x0007a241) cset_slider_pane_g2_copy1

0x2fce,	// (0x0007a24a) cset_slider_pane_g3_copy1

0xe195,	// (0x00085411) bg_popup_sub_pane_cp011_copy1

0x306f,	// (0x0007a2eb) main_cset_text_pane_g1_copy1

0x3077,	// (0x0007a2f3) main_cset_text_pane_t1_copy1

0x3085,	// (0x0007a301) main_cset_text_pane_t2_copy1

0x3093,	// (0x0007a30f) main_cset_text_pane_t3_copy1

0x30a1,	// (0x0007a31d) main_cset_text_pane_t4_copy1

0x30af,	// (0x0007a32b) main_cset_text_pane_t5_copy1

0x30bd,	// (0x0007a339) main_cset_text_pane_t6_copy1

0x30cb,	// (0x0007a347) main_cset_text_pane_t7_copy1

0xc952,	// (0x00083bce) main_cset_text2_pane_t1_copy1

0xe195,	// (0x00085411) main_ncimui_pane

0x927c,	// (0x000804f8) popup_query_ncimui_window_ParamLimits

0x927c,	// (0x000804f8) popup_query_ncimui_window

0x4a32,	// (0x0007bcae) field_cale_ev2_pane_g4_ParamLimits

0x4a32,	// (0x0007bcae) field_cale_ev2_pane_g4

0xaafd,	// (0x00081d79) cell_video_dialer_keypad_pane_g2_ParamLimits

0xaafd,	// (0x00081d79) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00086b73) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00086b73) cell_video_dialer_keypad_pane_g

0xab15,	// (0x00081d91) cell_video_dialer_keypad_pane_t1

0xe195,	// (0x00085411) bg_popup_window_pane_cp012

0x16da,	// (0x00078956) heading_pane_cp06

0x396b,	// (0x0007abe7) ncim_query_content_pane

0xe195,	// (0x00085411) bg_popup_heading_pane_cp01

0x3973,	// (0x0007abef) ncim_heading_pane_t1

0x3981,	// (0x0007abfd) ncim_indicator_popup_pane

0x3993,	// (0x0007ac0f) ncim_query_button_pane

0x39a7,	// (0x0007ac23) ncim_query_content_pane_t1

0x39b9,	// (0x0007ac35) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x00086ec5) ncim_query_content_pane_t

0x39f3,	// (0x0007ac6f) ncim_query_list_pane

0x3a05,	// (0x0007ac81) ncim_query_popup_pane

0x3981,	// (0x0007abfd) ncim_indicator_popup_pane_ParamLimits

0xca42,	// (0x00083cbe) ncim_query_content_pane_g1_ParamLimits

0xca42,	// (0x00083cbe) ncim_query_content_pane_g1

0x39a7,	// (0x0007ac23) ncim_query_content_pane_t1_ParamLimits

0x39b9,	// (0x0007ac35) ncim_query_content_pane_t2_ParamLimits

0xca4e,	// (0x00083cca) ncim_query_content_pane_t3_ParamLimits

0xca4e,	// (0x00083cca) ncim_query_content_pane_t3

0xca6b,	// (0x00083ce7) ncim_query_content_pane_t4_ParamLimits

0xca6b,	// (0x00083ce7) ncim_query_content_pane_t4

0xca88,	// (0x00083d04) ncim_query_content_pane_t5_ParamLimits

0xca88,	// (0x00083d04) ncim_query_content_pane_t5

0x39cb,	// (0x0007ac47) ncim_query_content_pane_t6_ParamLimits

0x39cb,	// (0x0007ac47) ncim_query_content_pane_t6

0xfc49,	// (0x00086ec5) ncim_query_content_pane_t_ParamLimits

0x39f3,	// (0x0007ac6f) ncim_query_list_pane_ParamLimits

0x3a05,	// (0x0007ac81) ncim_query_popup_pane_ParamLimits

0x3a19,	// (0x0007ac95) wait_bar_pane_cp04

0xe195,	// (0x00085411) input_focus_pane_cp011

0x3a21,	// (0x0007ac9d) ncim_query_popup_pane_t1

0x3a2f,	// (0x0007acab) ncim_list_query_list_pane_ParamLimits

0x3a2f,	// (0x0007acab) ncim_list_query_list_pane

0xe195,	// (0x00085411) bg_button_pane_cp027

0x3a3c,	// (0x0007acb8) ncim_query_button_pane_g1

0xe195,	// (0x00085411) list_highlight_pane_cp012

0x3a46,	// (0x0007acc2) ncim_list_query_list_pane_g1

0x3a4e,	// (0x0007acca) ncim_list_query_list_pane_t1

0xb151,	// (0x000823cd) cam4_indicators_pane_g3_ParamLimits

0xb151,	// (0x000823cd) cam4_indicators_pane_g3

0xb24b,	// (0x000824c7) vid4_indicators_pane_g5_ParamLimits

0xb24b,	// (0x000824c7) vid4_indicators_pane_g5

0xc193,	// (0x0008340f) vid4_progress_pane_g5_ParamLimits

0xc193,	// (0x0008340f) vid4_progress_pane_g5

0xc98a,	// (0x00083c06) main_ncimui_pane_g1

0xc9d0,	// (0x00083c4c) ncimui_group_query_pane_ParamLimits

0xc9d0,	// (0x00083c4c) ncimui_group_query_pane

0xca04,	// (0x00083c80) ncimui_list_pane_ParamLimits

0xca04,	// (0x00083c80) ncimui_list_pane

0xca1e,	// (0x00083c9a) ncimui_text_pane_ParamLimits

0xca1e,	// (0x00083c9a) ncimui_text_pane

0xcaa5,	// (0x00083d21) ncimui_text_pane_t1_ParamLimits

0xcaa5,	// (0x00083d21) ncimui_text_pane_t1

0x3a5c,	// (0x0007acd8) ncimui_list_single_graphic_pane_ParamLimits

0x3a5c,	// (0x0007acd8) ncimui_list_single_graphic_pane

0xcac4,	// (0x00083d40) ncimui_query_pane_ParamLimits

0xcac4,	// (0x00083d40) ncimui_query_pane

0xe195,	// (0x00085411) list_highlight_pane_cp013

0x3a6c,	// (0x0007ace8) ncim_list_query_list_pane_t1_copy1

0x3a46,	// (0x0007acc2) ncim_list_single_graphic_pane_g1

0x3a7a,	// (0x0007acf6) ncim_query_button_pane_cp01

0x3a82,	// (0x0007acfe) ncim_query_entry_pane_ParamLimits

0x3a82,	// (0x0007acfe) ncim_query_entry_pane

0x3a92,	// (0x0007ad0e) ncimui_query_pane_g1

0x3a9a,	// (0x0007ad16) ncimui_query_pane_t1_ParamLimits

0x3a9a,	// (0x0007ad16) ncimui_query_pane_t1

0xe195,	// (0x00085411) input_focus_pane_cp012

0x3a21,	// (0x0007ac9d) ncim_query_entry_pane_t1

0x0b9a,	// (0x00077e16) main_im_pane_ParamLimits

0x922f,	// (0x000804ab) main_mobtv_pane_ParamLimits

0x922f,	// (0x000804ab) main_mobtv_pane

0xc7fc,	// (0x00083a78) main_cset6_slider_pane_g18_ParamLimits

0xc7fc,	// (0x00083a78) main_cset6_slider_pane_g18

0xc808,	// (0x00083a84) main_cset6_slider_pane_g19_ParamLimits

0xc808,	// (0x00083a84) main_cset6_slider_pane_g19

0x2d4b,	// (0x00079fc7) bg_main_mobtv_pane_ParamLimits

0x2d4b,	// (0x00079fc7) bg_main_mobtv_pane

0xcad4,	// (0x00083d50) main_mobtv_info_pane

0xcadf,	// (0x00083d5b) main_mobtv_loading_pane_ParamLimits

0xcadf,	// (0x00083d5b) main_mobtv_loading_pane

0x3abe,	// (0x0007ad3a) main_mobtv_pg_channel_list_pane

0x3ac8,	// (0x0007ad44) main_mobtv_pg_hdr_pane

0xcaec,	// (0x00083d68) main_mobtv_programe_curr_pane_ParamLimits

0xcaec,	// (0x00083d68) main_mobtv_programe_curr_pane

0xcaf9,	// (0x00083d75) main_mobtv_programe_next_pane_ParamLimits

0xcaf9,	// (0x00083d75) main_mobtv_programe_next_pane

0x3ad1,	// (0x0007ad4d) popup_mobtv_noti_window

0xeef4,	// (0x00086170) main_tv_pg_hdr_pane_g1

0x3ad9,	// (0x0007ad55) main_tv_pg_hdr_pane_g2

0x3ae1,	// (0x0007ad5d) main_tv_pg_hdr_pane_g3

0x3ae9,	// (0x0007ad65) main_tv_pg_hdr_pane_g4

0x3af1,	// (0x0007ad6d) main_tv_pg_hdr_pane_g5

0x3afb,	// (0x0007ad77) main_tv_pg_hdr_pane_g6

0x3b05,	// (0x0007ad81) main_tv_pg_hdr_pane_g7

0x3b0f,	// (0x0007ad8b) main_tv_pg_hdr_pane_g8

0x3b19,	// (0x0007ad95) main_tv_pg_hdr_pane_g9

0x3b23,	// (0x0007ad9f) main_tv_pg_hdr_pane_g10

0x3b2d,	// (0x0007ada9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x00086ed2) main_tv_pg_hdr_pane_g

0x3b37,	// (0x0007adb3) main_tv_pg_hdr_pane_t1

0x3b45,	// (0x0007adc1) main_tv_pg_hdr_pane_t2

0x3b53,	// (0x0007adcf) main_tv_pg_hdr_pane_t3

0x3b63,	// (0x0007addf) main_tv_pg_hdr_pane_t4

0x3b73,	// (0x0007adef) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x00086ee9) main_tv_pg_hdr_pane_t

0x3b83,	// (0x0007adff) single_mobtv_pg_channel_pane_ParamLimits

0x3b83,	// (0x0007adff) single_mobtv_pg_channel_pane

0x3b95,	// (0x0007ae11) single_mobtv_pg_channel_table_pane

0x3b9e,	// (0x0007ae1a) single_mobtv_pg_channel_thumb_pane

0x3ba7,	// (0x0007ae23) single_tv_pg_channel_pane_g1

0x3bb0,	// (0x0007ae2c) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x00086ef4) single_tv_pg_channel_pane_g

0x2561,	// (0x000797dd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2561,	// (0x000797dd) bg_single_mobtv_pg_channel_thumb_pane

0x3bb9,	// (0x0007ae35) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3bb9,	// (0x0007ae35) single_mobtv_pg_channel_thumb_pane_g1

0x3bc7,	// (0x0007ae43) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3bc7,	// (0x0007ae43) single_mobtv_pg_channel_thumb_pane_g2

0x3bd3,	// (0x0007ae4f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3bd3,	// (0x0007ae4f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x00086ef9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x00086ef9) single_mobtv_pg_channel_thumb_pane_g

0x3bdf,	// (0x0007ae5b) single_mobtv_pg_channel_thumb_pane_t1

0x3bed,	// (0x0007ae69) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x00086f00) single_mobtv_pg_channel_thumb_pane_t

0xeef4,	// (0x00086170) bg_single_mobtv_pg_channel_table_pane_g1

0xeef4,	// (0x00086170) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x000869bf) bg_single_mobtv_pg_channel_table_pane_g

0x3bfb,	// (0x0007ae77) single_mobtv_pg_channel_table_pane_t1

0x3c09,	// (0x0007ae85) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x00086f05) single_mobtv_pg_channel_table_pane_t

0xcb0e,	// (0x00083d8a) main_mobtv_info_pane_g1_ParamLimits

0xcb0e,	// (0x00083d8a) main_mobtv_info_pane_g1

0xcb2a,	// (0x00083da6) main_mobtv_info_pane_t1_ParamLimits

0xcb2a,	// (0x00083da6) main_mobtv_info_pane_t1

0xcba2,	// (0x00083e1e) main_mobtv_info_pane_t2_ParamLimits

0xcba2,	// (0x00083e1e) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x00086f0f) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x00086f0f) main_mobtv_info_pane_t

0xcc31,	// (0x00083ead) wait_bar_pane_cp05

0xcc43,	// (0x00083ebf) main_mobtv_loading_pane_g1_ParamLimits

0xcc43,	// (0x00083ebf) main_mobtv_loading_pane_g1

0xcc51,	// (0x00083ecd) main_mobtv_loading_pane_g2_ParamLimits

0xcc51,	// (0x00083ecd) main_mobtv_loading_pane_g2

0xcc5d,	// (0x00083ed9) main_mobtv_loading_pane_g3_ParamLimits

0xcc5d,	// (0x00083ed9) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x00086f16) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x00086f16) main_mobtv_loading_pane_g

0x3c17,	// (0x0007ae93) main_mobtv_loading_pane_t1_ParamLimits

0x3c17,	// (0x0007ae93) main_mobtv_loading_pane_t1

0x3c2f,	// (0x0007aeab) main_mobtv_loading_pane_t2_ParamLimits

0x3c2f,	// (0x0007aeab) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x00086f1d) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x00086f1d) main_mobtv_loading_pane_t

0xcc6b,	// (0x00083ee7) wait_bar_pane_cp06_ParamLimits

0xcc6b,	// (0x00083ee7) wait_bar_pane_cp06

0x3c53,	// (0x0007aecf) main_mobtv_programe_curr_pane_t1

0x3c61,	// (0x0007aedd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x00086f22) main_mobtv_programe_curr_pane_t

0x3c6f,	// (0x0007aeeb) main_mobtv_programe_next_pane_t1

0x3c7d,	// (0x0007aef9) main_mobtv_programe_next_pane_t2

0x3c8b,	// (0x0007af07) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x00086f27) main_mobtv_programe_next_pane_t

0xe195,	// (0x00085411) bg_popup_mobtv_noti_window_pane

0x3c99,	// (0x0007af15) popup_mobtv_noti_window_g1

0x3ca1,	// (0x0007af1d) popup_mobtv_noti_window_t1

0x3caf,	// (0x0007af2b) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x00086f2e) popup_mobtv_noti_window_t

0xeef4,	// (0x00086170) bg_popup_mobtv_noti_window_pane_g1

0xe195,	// (0x00085411) sc_clock_pane

0xe195,	// (0x00085411) main_fs_bigclock_pane

0xc379,	// (0x000835f5) blid2_tripm_pane_t4_ParamLimits

0xc379,	// (0x000835f5) blid2_tripm_pane_t4

0xcc77,	// (0x00083ef3) sc_clock_pane_g1_ParamLimits

0xcc77,	// (0x00083ef3) sc_clock_pane_g1

0xcc85,	// (0x00083f01) sc_clock_pane_t1_ParamLimits

0xcc85,	// (0x00083f01) sc_clock_pane_t1

0xcc98,	// (0x00083f14) sc_clock_pane_t2_ParamLimits

0xcc98,	// (0x00083f14) sc_clock_pane_t2

0xccaa,	// (0x00083f26) sc_clock_pane_t3_ParamLimits

0xccaa,	// (0x00083f26) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x00086f33) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x00086f33) sc_clock_pane_t

0xd95c,	// (0x00084bd8) main_fs_bigclock_indicator_pane_ParamLimits

0xd95c,	// (0x00084bd8) main_fs_bigclock_indicator_pane

0xcd2e,	// (0x00083faa) main_fs_bigclock_pane_g1_ParamLimits

0xcd2e,	// (0x00083faa) main_fs_bigclock_pane_g1

0xd968,	// (0x00084be4) main_fs_bigclock_pane_t1_ParamLimits

0xd968,	// (0x00084be4) main_fs_bigclock_pane_t1

0xd97a,	// (0x00084bf6) main_fs_bigclock_pane_t2_ParamLimits

0xd97a,	// (0x00084bf6) main_fs_bigclock_pane_t2

0xd98e,	// (0x00084c0a) main_fs_bigclock_pane_t3_ParamLimits

0xd98e,	// (0x00084c0a) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x00087132) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x00087132) main_fs_bigclock_pane_t

0x48a7,	// (0x0007bb23) main_fs_bigclock_indicator_pane_g1

0x399b,	// (0x0007ac17) ncim_query_content_pane_g2_ParamLimits

0x399b,	// (0x0007ac17) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x00086ec0) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x00086ec0) ncim_query_content_pane_g

0xccbe,	// (0x00083f3a) sc_clock_pane_t4_ParamLimits

0xccbe,	// (0x00083f3a) sc_clock_pane_t4

0x922f,	// (0x000804ab) main_radioblah_pane

0x2cae,	// (0x00079f2a) cell_call4_button_pane_t1_copy1_ParamLimits

0x2cae,	// (0x00079f2a) cell_call4_button_pane_t1_copy1

0xc992,	// (0x00083c0e) main_ncimui_pane_t1_ParamLimits

0xc992,	// (0x00083c0e) main_ncimui_pane_t1

0xc9a4,	// (0x00083c20) main_ncimui_pane_t2_ParamLimits

0xc9a4,	// (0x00083c20) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00086eb9) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00086eb9) main_ncimui_pane_t

0x3ddd,	// (0x0007b059) main_radioblah_anim_pane_ParamLimits

0x3ddd,	// (0x0007b059) main_radioblah_anim_pane

0x3dee,	// (0x0007b06a) main_radioblah_info_pane_ParamLimits

0x3dee,	// (0x0007b06a) main_radioblah_info_pane

0x3e02,	// (0x0007b07e) main_radioblah_pane_t1_ParamLimits

0x3e02,	// (0x0007b07e) main_radioblah_pane_t1

0x3e1e,	// (0x0007b09a) main_radioblah_pane_t2_ParamLimits

0x3e1e,	// (0x0007b09a) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x00086f54) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x00086f54) main_radioblah_pane_t

0xcd80,	// (0x00083ffc) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcd80,	// (0x00083ffc) main_radioblah_rocker_ctrl_pane

0x3e66,	// (0x0007b0e2) main_radioblah_info_pane_t1_ParamLimits

0x3e66,	// (0x0007b0e2) main_radioblah_info_pane_t1

0xcdc5,	// (0x00084041) main_radioblah_info_pane_t2_ParamLimits

0xcdc5,	// (0x00084041) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x00086f5d) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x00086f5d) main_radioblah_info_pane_t

0xeef4,	// (0x00086170) main_radioblah_rocker_ctrl_pane_g1

0xce75,	// (0x000840f1) main_radioblah_rocker_ctrl_pane_g2

0xce7d,	// (0x000840f9) main_radioblah_rocker_ctrl_pane_g3

0xce85,	// (0x00084101) main_radioblah_rocker_ctrl_pane_g4

0xce8d,	// (0x00084109) main_radioblah_rocker_ctrl_pane_g5

0xce95,	// (0x00084111) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x00086f66) main_radioblah_rocker_ctrl_pane_g

0xc952,	// (0x00083bce) main_cset_text2_pane_t1_copy1_ParamLimits

0xb08c,	// (0x00082308) cam4_image_uncrop_qvga_pane

0xb1c7,	// (0x00082443) vid4_image_uncrop_qcif_pane

0xc507,	// (0x00083783) cam6_image_uncrop_qvga_pane_ParamLimits

0xc507,	// (0x00083783) cam6_image_uncrop_qvga_pane

0x35f5,	// (0x0007a871) vid6_image_uncrop_qcif_pane_ParamLimits

0x35f5,	// (0x0007a871) vid6_image_uncrop_qcif_pane

0xe195,	// (0x00085411) bg_popup_preview_window_pane_cp03

0x394d,	// (0x0007abc9) list_cset_text2_pane

0x3955,	// (0x0007abd1) main_cset6_text2_pane_g1

0x395d,	// (0x0007abd9) main_cset6_text2_pane_t1

0xce9d,	// (0x00084119) list_cset_text2_pane_t1_ParamLimits

0xce9d,	// (0x00084119) list_cset_text2_pane_t1

0x922f,	// (0x000804ab) main_radioblah_pane_ParamLimits

0xcc1d,	// (0x00083e99) main_mobtv_info_pane_t3_ParamLimits

0xcc1d,	// (0x00083e99) main_mobtv_info_pane_t3

0xcd6e,	// (0x00083fea) main_radioblah_pane_g1

0xcd99,	// (0x00084015) main_radioblah_info_pane_g1

0xce1a,	// (0x00084096) main_radioblah_info_pane_t3_ParamLimits

0xce1a,	// (0x00084096) main_radioblah_info_pane_t3

0x78d3,	// (0x0007eb4f) highlight_cell_cale_month_pane_ParamLimits

0x78d3,	// (0x0007eb4f) highlight_cell_cale_month_pane

0xe195,	// (0x00085411) main_phob_fisheye_pane

0x266f,	// (0x000798eb) scroll_pane_cp0031_ParamLimits

0x266f,	// (0x000798eb) scroll_pane_cp0031

0x3703,	// (0x0007a97f) wait_bar_pane_cp08_ParamLimits

0xc713,	// (0x0008398f) cset_list_set_pane_copy1_ParamLimits

0x3ea0,	// (0x0007b11c) highlight_cell_cale_month_pane_g1

0xceba,	// (0x00084136) highlight_cell_cale_month_pane_t1

0x3333,	// (0x0007a5af) list_gen_pane_cp01

0x2ebf,	// (0x0007a13b) scroll_pane_01

0xcec8,	// (0x00084144) list_single_double_fisheye_pane

0xced1,	// (0x0008414d) list_double_fisheye_pane_g1_ParamLimits

0xced1,	// (0x0008414d) list_double_fisheye_pane_g1

0xcedd,	// (0x00084159) list_double_fisheye_pane_g2_ParamLimits

0xcedd,	// (0x00084159) list_double_fisheye_pane_g2

0xcef1,	// (0x0008416d) list_double_fisheye_pane_g3_ParamLimits

0xcef1,	// (0x0008416d) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00086f73) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00086f73) list_double_fisheye_pane_g

0xcf1a,	// (0x00084196) list_double_fisheye_pane_t1_ParamLimits

0xcf1a,	// (0x00084196) list_double_fisheye_pane_t1

0xcf35,	// (0x000841b1) list_double_fisheye_pane_t2_ParamLimits

0xcf35,	// (0x000841b1) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x00086f7e) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x00086f7e) list_double_fisheye_pane_t

0xe195,	// (0x00085411) main_call5_pane

0xcce4,	// (0x00083f60) sc_swipe_pane_ParamLimits

0xcce4,	// (0x00083f60) sc_swipe_pane

0xcf63,	// (0x000841df) call5_image_pane_ParamLimits

0xcf63,	// (0x000841df) call5_image_pane

0xcf73,	// (0x000841ef) call5_swipe_1_pane_ParamLimits

0xcf73,	// (0x000841ef) call5_swipe_1_pane

0xcf7f,	// (0x000841fb) call5_swipe_2_pane_ParamLimits

0xcf7f,	// (0x000841fb) call5_swipe_2_pane

0xcf99,	// (0x00084215) popup_call5_audio_first_window_ParamLimits

0xcf99,	// (0x00084215) popup_call5_audio_first_window

0x2561,	// (0x000797dd) call5_swipe_1_pane_g1_ParamLimits

0x2561,	// (0x000797dd) call5_swipe_1_pane_g1

0x3ea8,	// (0x0007b124) call5_swipe_1_pane_g2_ParamLimits

0x3ea8,	// (0x0007b124) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x00086f83) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x00086f83) call5_swipe_1_pane_g

0x3eb4,	// (0x0007b130) call5_swipe_1_pane_t1_ParamLimits

0x3eb4,	// (0x0007b130) call5_swipe_1_pane_t1

0x2561,	// (0x000797dd) call5_swipe_2_pane_g1_ParamLimits

0x2561,	// (0x000797dd) call5_swipe_2_pane_g1

0x3ec9,	// (0x0007b145) call5_swipe_2_pane_g2_ParamLimits

0x3ec9,	// (0x0007b145) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00086f88) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00086f88) call5_swipe_2_pane_g

0x3ed5,	// (0x0007b151) call5_swipe_2_pane_t1_ParamLimits

0x3ed5,	// (0x0007b151) call5_swipe_2_pane_t1

0x3eea,	// (0x0007b166) sc_swipe_pane_g1_ParamLimits

0x3eea,	// (0x0007b166) sc_swipe_pane_g1

0x3ef7,	// (0x0007b173) sc_swipe_pane_g2_ParamLimits

0x3ef7,	// (0x0007b173) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x00086f8d) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x00086f8d) sc_swipe_pane_g

0x3f03,	// (0x0007b17f) sc_swipe_pane_t1_ParamLimits

0x3f03,	// (0x0007b17f) sc_swipe_pane_t1

0xe195,	// (0x00085411) main_cmail_launcher_pane

0xcfa7,	// (0x00084223) aid_size_cell_cmail_l_ParamLimits

0xcfa7,	// (0x00084223) aid_size_cell_cmail_l

0xcfb7,	// (0x00084233) grid_cmail_l_pane_ParamLimits

0xcfb7,	// (0x00084233) grid_cmail_l_pane

0xcfc7,	// (0x00084243) cell_cmail_l_pane_ParamLimits

0xcfc7,	// (0x00084243) cell_cmail_l_pane

0xcfdb,	// (0x00084257) cell_cmail_l_pane_g1_ParamLimits

0xcfdb,	// (0x00084257) cell_cmail_l_pane_g1

0xcfe7,	// (0x00084263) cell_cmail_l_pane_t1_ParamLimits

0xcfe7,	// (0x00084263) cell_cmail_l_pane_t1

0x3f18,	// (0x0007b194) cell_cmail_l_pane_t2_ParamLimits

0x3f18,	// (0x0007b194) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x00086f92) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x00086f92) cell_cmail_l_pane_t

0x922f,	// (0x000804ab) grid_highlight_pane_cp018_ParamLimits

0x922f,	// (0x000804ab) grid_highlight_pane_cp018

0x5db5,	// (0x0007d031) main2_pane_ParamLimits

0x5db5,	// (0x0007d031) main2_pane

0x0c57,	// (0x00077ed3) popup_sp_fs_action_menu_bg_pane_g1

0x0c5f,	// (0x00077edb) popup_sp_fs_action_menu_bg_pane_g2

0x0c67,	// (0x00077ee3) popup_sp_fs_action_menu_bg_pane_g3

0x0c6f,	// (0x00077eeb) popup_sp_fs_action_menu_bg_pane_g4

0x0c77,	// (0x00077ef3) popup_sp_fs_action_menu_bg_pane_g5

0x0c7f,	// (0x00077efb) popup_sp_fs_action_menu_bg_pane_g6

0x0c87,	// (0x00077f03) popup_sp_fs_action_menu_bg_pane_g7

0x0c8f,	// (0x00077f0b) popup_sp_fs_action_menu_bg_pane_g8

0x0c97,	// (0x00077f13) popup_sp_fs_action_menu_bg_pane_g9

0x0c9f,	// (0x00077f1b) popup_sp_fs_action_menu_bg_pane_g10

0x0c9f,	// (0x00077f1b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0008646b) popup_sp_fs_action_menu_bg_pane_g

0x0e6f,	// (0x000780eb) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x2_t3_g3_g1

0x0e7b,	// (0x000780f7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0e7b,	// (0x000780f7) list_medium_line_x2_t3_g3_g2

0x0e87,	// (0x00078103) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0e87,	// (0x00078103) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0008651b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0008651b) list_medium_line_x2_t3_g3_g

0x0e93,	// (0x0007810f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0e93,	// (0x0007810f) list_medium_line_x2_t3_g3_t1

0x6bf5,	// (0x0007de71) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6bf5,	// (0x0007de71) list_medium_line_x2_t3_g3_t2

0x0ea8,	// (0x00078124) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ea8,	// (0x00078124) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00086522) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00086522) list_medium_line_x2_t3_g3_t

0x0e6f,	// (0x000780eb) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x2_t3_g2_g1

0x0e87,	// (0x00078103) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0e87,	// (0x00078103) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00086529) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00086529) list_medium_line_x2_t3_g2_g

0x0ebd,	// (0x00078139) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0ebd,	// (0x00078139) list_medium_line_x2_t3_g2_t1

0x0ed3,	// (0x0007814f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ed3,	// (0x0007814f) list_medium_line_x2_t3_g2_t2

0x0ee5,	// (0x00078161) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ee5,	// (0x00078161) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0008652e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0008652e) list_medium_line_x2_t3_g2_t

0x0e6f,	// (0x000780eb) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x2_t4_g4_g1

0x0f02,	// (0x0007817e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0f02,	// (0x0007817e) list_medium_line_x2_t4_g4_g2

0x0e7b,	// (0x000780f7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0e7b,	// (0x000780f7) list_medium_line_x2_t4_g4_g3

0x0f0e,	// (0x0007818a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0f0e,	// (0x0007818a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00086535) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00086535) list_medium_line_x2_t4_g4_g

0x6c07,	// (0x0007de83) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6c07,	// (0x0007de83) list_medium_line_x2_t4_g4_t1

0x6c21,	// (0x0007de9d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6c21,	// (0x0007de9d) list_medium_line_x2_t4_g4_t2

0x6c37,	// (0x0007deb3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6c37,	// (0x0007deb3) list_medium_line_x2_t4_g4_t3

0x0f1a,	// (0x00078196) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f1a,	// (0x00078196) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0008653e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0008653e) list_medium_line_x2_t4_g4_t

0x0e6f,	// (0x000780eb) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x2_t2_g4_g1

0x0f02,	// (0x0007817e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0f02,	// (0x0007817e) list_medium_line_x2_t2_g4_g2

0x0e7b,	// (0x000780f7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0e7b,	// (0x000780f7) list_medium_line_x2_t2_g4_g3

0x0e87,	// (0x00078103) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0e87,	// (0x00078103) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x000865a5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x000865a5) list_medium_line_x2_t2_g4_g

0x120a,	// (0x00078486) list_medium_line_x2_t2_g4_t1_ParamLimits

0x120a,	// (0x00078486) list_medium_line_x2_t2_g4_t1

0x0ea8,	// (0x00078124) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ea8,	// (0x00078124) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x000865ae) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x000865ae) list_medium_line_x2_t2_g4_t

0x0e6f,	// (0x000780eb) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x2_t2_g3_g1

0x0e7b,	// (0x000780f7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0e7b,	// (0x000780f7) list_medium_line_x2_t2_g3_g2

0x0e87,	// (0x00078103) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0e87,	// (0x00078103) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0008651b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0008651b) list_medium_line_x2_t2_g3_g

0x121f,	// (0x0007849b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x121f,	// (0x0007849b) list_medium_line_x2_t2_g3_t1

0x0ea8,	// (0x00078124) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ea8,	// (0x00078124) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x000865b3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x000865b3) list_medium_line_x2_t2_g3_t

0x7a85,	// (0x0007ed01) main_sp_fs_list_pane_ParamLimits

0x7a85,	// (0x0007ed01) main_sp_fs_list_pane

0x7a91,	// (0x0007ed0d) sp_fs_scroll_pane_ParamLimits

0x7a91,	// (0x0007ed0d) sp_fs_scroll_pane

0x7a9d,	// (0x0007ed19) list_medium_line_x2_t3_t1

0x7aad,	// (0x0007ed29) list_medium_line_x2_t3_t2

0x147b,	// (0x000786f7) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x000865fe) list_medium_line_x2_t3_t

0x7abb,	// (0x0007ed37) list_medium_line_x3_t4_t1

0x7acb,	// (0x0007ed47) list_medium_line_x3_t4_t2

0x1489,	// (0x00078705) list_medium_line_x3_t4_t3

0x147b,	// (0x000786f7) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00086605) list_medium_line_x3_t4_t

0x7ad9,	// (0x0007ed55) list_medium_line_x4_t5_t1

0x7ae9,	// (0x0007ed65) list_medium_line_x4_t5_t2

0x1489,	// (0x00078705) list_medium_line_x4_t5_t3

0x1497,	// (0x00078713) list_medium_line_x4_t5_t4

0x147b,	// (0x000786f7) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0008660e) list_medium_line_x4_t5_t

0x0e6f,	// (0x000780eb) list_medium_line_t4_g4_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_t4_g4_g1

0x0f0e,	// (0x0007818a) list_medium_line_t4_g4_g2_ParamLimits

0x0f0e,	// (0x0007818a) list_medium_line_t4_g4_g2

0x14a5,	// (0x00078721) list_medium_line_t4_g4_g3_ParamLimits

0x14a5,	// (0x00078721) list_medium_line_t4_g4_g3

0x0e87,	// (0x00078103) list_medium_line_t4_g4_g4_ParamLimits

0x0e87,	// (0x00078103) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00086619) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00086619) list_medium_line_t4_g4_g

0x14b1,	// (0x0007872d) list_medium_line_t4_g4_t1_ParamLimits

0x14b1,	// (0x0007872d) list_medium_line_t4_g4_t1

0x14c6,	// (0x00078742) list_medium_line_t4_g4_t2_ParamLimits

0x14c6,	// (0x00078742) list_medium_line_t4_g4_t2

0x14db,	// (0x00078757) list_medium_line_t4_g4_t3_ParamLimits

0x14db,	// (0x00078757) list_medium_line_t4_g4_t3

0x0ea8,	// (0x00078124) list_medium_line_t4_g4_t4_ParamLimits

0x0ea8,	// (0x00078124) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00086622) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00086622) list_medium_line_t4_g4_t

0x7c08,	// (0x0007ee84) chi_dic_find_pane_g1

0x924b,	// (0x000804c7) main_tport_pane

0x3000,	// (0x0007a27c) list_medium_line_plain_t1

0x3016,	// (0x0007a292) list_medium_line_t2_g2_g1_ParamLimits

0x3016,	// (0x0007a292) list_medium_line_t2_g2_g1

0x3022,	// (0x0007a29e) list_medium_line_t2_g2_g2_ParamLimits

0x3022,	// (0x0007a29e) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00086cd5) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00086cd5) list_medium_line_t2_g2_g

0xbc32,	// (0x00082eae) list_medium_line_t2_g2_t1_ParamLimits

0xbc32,	// (0x00082eae) list_medium_line_t2_g2_t1

0xbc4c,	// (0x00082ec8) list_medium_line_t2_g2_t2_ParamLimits

0xbc4c,	// (0x00082ec8) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00086cda) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00086cda) list_medium_line_t2_g2_t

0x333c,	// (0x0007a5b8) aid_sp_fs_list_icon_a_sm

0x4dbb,	// (0x0007c037) aid_sp_fs_list_icon_d

0x3344,	// (0x0007a5c0) aid_sp_fs_text_primary

0x334d,	// (0x0007a5c9) aid_sp_fs_text_secondary

0x3356,	// (0x0007a5d2) list_medium_line

0x3356,	// (0x0007a5d2) list_medium_line_g2

0x3356,	// (0x0007a5d2) list_medium_line_g3

0x3356,	// (0x0007a5d2) list_medium_line_plain

0x3356,	// (0x0007a5d2) list_medium_line_plain_t2

0x3356,	// (0x0007a5d2) list_medium_line_plain_t3

0x3356,	// (0x0007a5d2) list_medium_line_right_icon

0x3356,	// (0x0007a5d2) list_medium_line_right_iconx2

0x3356,	// (0x0007a5d2) list_medium_line_t2

0x3356,	// (0x0007a5d2) list_medium_line_t2_g2

0x3356,	// (0x0007a5d2) list_medium_line_t2_g3

0x3356,	// (0x0007a5d2) list_medium_line_t2_right_icon

0x3356,	// (0x0007a5d2) list_medium_line_t2_right_iconx2

0x3356,	// (0x0007a5d2) list_medium_line_t3

0x3356,	// (0x0007a5d2) list_medium_line_t3_g2

0x3356,	// (0x0007a5d2) list_medium_line_t3_g3

0x3356,	// (0x0007a5d2) list_medium_line_t3_right_iconx2

0x335f,	// (0x0007a5db) list_medium_line_t4_g4

0x3368,	// (0x0007a5e4) list_medium_line_x2

0x3368,	// (0x0007a5e4) list_medium_line_x2_t2_g2

0x3368,	// (0x0007a5e4) list_medium_line_x2_t2_g3

0x3368,	// (0x0007a5e4) list_medium_line_x2_t2_g4

0x3368,	// (0x0007a5e4) list_medium_line_x2_t3

0x3368,	// (0x0007a5e4) list_medium_line_x2_t3_g2

0x3368,	// (0x0007a5e4) list_medium_line_x2_t3_g3

0x3368,	// (0x0007a5e4) list_medium_line_x2_t3_g4

0x3368,	// (0x0007a5e4) list_medium_line_x2_t4_g2

0x3368,	// (0x0007a5e4) list_medium_line_x2_t4_g4

0x3371,	// (0x0007a5ed) list_medium_line_x3

0x3371,	// (0x0007a5ed) list_medium_line_x3_t4

0x3371,	// (0x0007a5ed) list_medium_line_x3_t4_g4

0x335f,	// (0x0007a5db) list_medium_line_x4_t4

0x335f,	// (0x0007a5db) list_medium_line_x4_t4_g7

0x335f,	// (0x0007a5db) list_medium_line_x4_t5

0x337a,	// (0x0007a5f6) list_single_fs_dyc_pane_ParamLimits

0x337a,	// (0x0007a5f6) list_single_fs_dyc_pane

0x0e6f,	// (0x000780eb) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x4_t4_g7_g1

0x387c,	// (0x0007aaf8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x387c,	// (0x0007aaf8) list_medium_line_x4_t4_g7_g2

0x3888,	// (0x0007ab04) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3888,	// (0x0007ab04) list_medium_line_x4_t4_g7_g3

0x3897,	// (0x0007ab13) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3897,	// (0x0007ab13) list_medium_line_x4_t4_g7_g4

0x38a3,	// (0x0007ab1f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x38a3,	// (0x0007ab1f) list_medium_line_x4_t4_g7_g5

0x38b2,	// (0x0007ab2e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x38b2,	// (0x0007ab2e) list_medium_line_x4_t4_g7_g6

0x38c1,	// (0x0007ab3d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x38c1,	// (0x0007ab3d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x00086e9f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x00086e9f) list_medium_line_x4_t4_g7_g

0x38cd,	// (0x0007ab49) list_medium_line_x4_t4_g7_t1_ParamLimits

0x38cd,	// (0x0007ab49) list_medium_line_x4_t4_g7_t1

0x38e2,	// (0x0007ab5e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x38e2,	// (0x0007ab5e) list_medium_line_x4_t4_g7_t2

0x38f7,	// (0x0007ab73) list_medium_line_x4_t4_g7_t3_ParamLimits

0x38f7,	// (0x0007ab73) list_medium_line_x4_t4_g7_t3

0x390c,	// (0x0007ab88) list_medium_line_x4_t4_g7_t4_ParamLimits

0x390c,	// (0x0007ab88) list_medium_line_x4_t4_g7_t4

0x391e,	// (0x0007ab9a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x391e,	// (0x0007ab9a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x00086eae) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x00086eae) list_medium_line_x4_t4_g7_t

0x3930,	// (0x0007abac) list_single_dyc_row_pane_ParamLimits

0x3930,	// (0x0007abac) list_single_dyc_row_pane

0xcf57,	// (0x000841d3) call5_gesture_pane_ParamLimits

0xcf57,	// (0x000841d3) call5_gesture_pane

0xcf8b,	// (0x00084207) call5_windows_pane_ParamLimits

0xcf8b,	// (0x00084207) call5_windows_pane

0xcffd,	// (0x00084279) call5_swipe_1_pane_cp_ParamLimits

0xcffd,	// (0x00084279) call5_swipe_1_pane_cp

0xd009,	// (0x00084285) call5_swipe_2_pane_cp_ParamLimits

0xd009,	// (0x00084285) call5_swipe_2_pane_cp

0x1946,	// (0x00078bc2) call5_image_pane_cp

0xd015,	// (0x00084291) popup_call5_audio_first_window_cp_ParamLimits

0xd015,	// (0x00084291) popup_call5_audio_first_window_cp

0x3eea,	// (0x0007b166) call5_swipe_1_pane_g1_cp_ParamLimits

0x3eea,	// (0x0007b166) call5_swipe_1_pane_g1_cp

0x3f2a,	// (0x0007b1a6) call5_swipe_1_pane_g2_cp

0x3f03,	// (0x0007b17f) call5_swipe_1_pane_t1_cp_ParamLimits

0x3f03,	// (0x0007b17f) call5_swipe_1_pane_t1_cp

0x3eea,	// (0x0007b166) call5_swipe_2_pane_g1_cp_ParamLimits

0x3eea,	// (0x0007b166) call5_swipe_2_pane_g1_cp

0x3f32,	// (0x0007b1ae) call5_swipe_2_pane_g2_cp

0x3f3a,	// (0x0007b1b6) call5_swipe_2_pane_t1_cp_ParamLimits

0x3f3a,	// (0x0007b1b6) call5_swipe_2_pane_t1_cp

0x922f,	// (0x000804ab) main_sp_fs_email_pane

0x3f4f,	// (0x0007b1cb) main_sp_fs_listscroll_pane_te

0x3f58,	// (0x0007b1d4) popup_sp_fs_action_menu_pane_ParamLimits

0x3f58,	// (0x0007b1d4) popup_sp_fs_action_menu_pane

0xeef4,	// (0x00086170) bg_sp_fs_ctrlbar_pane_g1

0x3f9c,	// (0x0007b218) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3fa5,	// (0x0007b221) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3fae,	// (0x0007b22a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xeef4,	// (0x00086170) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00086f97) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xecd9,	// (0x00085f55) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xecd9,	// (0x00085f55) bg_sp_fs_ctrlbar_ddmenu_pane

0x3fb7,	// (0x0007b233) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3fb7,	// (0x0007b233) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3fc3,	// (0x0007b23f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3fc3,	// (0x0007b23f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x00086fa0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x00086fa0) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3fcf,	// (0x0007b24b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3fcf,	// (0x0007b24b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3fe9,	// (0x0007b265) list_medium_line_t2_right_icon_g1

0xd023,	// (0x0008429f) list_medium_line_t2_right_icon_t1

0xd033,	// (0x000842af) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x00086fa5) list_medium_line_t2_right_icon_t

0xeaad,	// (0x00085d29) bg_sp_fs_ctrlbar_pane_ParamLimits

0xeaad,	// (0x00085d29) bg_sp_fs_ctrlbar_pane

0xd098,	// (0x00084314) main_sp_fs_ctrlbar_button_pane_cp01

0xd0a0,	// (0x0008431c) main_sp_fs_ctrlbar_ddmenu_pane

0x4029,	// (0x0007b2a5) main_sp_fs_ctrlbar_pane_g1

0x4035,	// (0x0007b2b1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x00086faa) main_sp_fs_ctrlbar_pane_g

0x4041,	// (0x0007b2bd) main_sp_fs_ctrlbar_pane_t1

0xd0aa,	// (0x00084326) main_sp_fs_ctrlbar_pane

0xd0c6,	// (0x00084342) main_sp_fs_listscroll_pane_te_cp01

0xd0d7,	// (0x00084353) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd0d7,	// (0x00084353) popup_sp_fs_action_menu_pane_cp01

0x922f,	// (0x000804ab) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x922f,	// (0x000804ab) bg_sp_fs_highlight_list_pane_cp01

0x4056,	// (0x0007b2d2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4056,	// (0x0007b2d2) sp_fs_action_menu_list_gene_pane_g1

0x4065,	// (0x0007b2e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4065,	// (0x0007b2e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x00086faf) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x00086faf) sp_fs_action_menu_list_gene_pane_g

0x4072,	// (0x0007b2ee) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4072,	// (0x0007b2ee) sp_fs_action_menu_list_gene_pane_t1

0x408a,	// (0x0007b306) sp_fs_action_menu_list_gene_pane_ParamLimits

0x408a,	// (0x0007b306) sp_fs_action_menu_list_gene_pane

0x40ab,	// (0x0007b327) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x40ab,	// (0x0007b327) popup_sp_fs_action_menu_bg_pane

0x40b9,	// (0x0007b335) sp_fs_action_menu_list_pane_ParamLimits

0x40b9,	// (0x0007b335) sp_fs_action_menu_list_pane

0x40db,	// (0x0007b357) sp_fs_scroll_pane_cp01_ParamLimits

0x40db,	// (0x0007b357) sp_fs_scroll_pane_cp01

0xd0f1,	// (0x0008436d) list_medium_line_plain_t2_t1

0xd101,	// (0x0008437d) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x00086fb4) list_medium_line_plain_t2_t

0xd10f,	// (0x0008438b) list_medium_line_plain_t3_t1

0xd11f,	// (0x0008439b) list_medium_line_plain_t3_t2

0xd12d,	// (0x000843a9) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00086fb9) list_medium_line_plain_t3_t

0x0e6f,	// (0x000780eb) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x2_t2_g2_g1

0x0e87,	// (0x00078103) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0e87,	// (0x00078103) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00086529) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00086529) list_medium_line_x2_t2_g2_g

0x14b1,	// (0x0007872d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x14b1,	// (0x0007872d) list_medium_line_x2_t2_g2_t1

0x0ea8,	// (0x00078124) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ea8,	// (0x00078124) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x00086fc0) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x00086fc0) list_medium_line_x2_t2_g2_t

0x0e6f,	// (0x000780eb) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x2_t4_g2_g1

0x4101,	// (0x0007b37d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4101,	// (0x0007b37d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x00086fc5) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x00086fc5) list_medium_line_x2_t4_g2_g

0xd13b,	// (0x000843b7) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd13b,	// (0x000843b7) list_medium_line_x2_t4_g2_t1

0xd152,	// (0x000843ce) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd152,	// (0x000843ce) list_medium_line_x2_t4_g2_t2

0xd167,	// (0x000843e3) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd167,	// (0x000843e3) list_medium_line_x2_t4_g2_t3

0x0ea8,	// (0x00078124) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ea8,	// (0x00078124) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x00086fca) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x00086fca) list_medium_line_x2_t4_g2_t

0x4113,	// (0x0007b38f) list_medium_line_t3_right_iconx2_g1

0x3fe9,	// (0x0007b265) list_medium_line_t3_right_iconx2_g2

0xd179,	// (0x000843f5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x00086fd3) list_medium_line_t3_right_iconx2_g

0xd181,	// (0x000843fd) list_medium_line_t3_right_iconx2_t1

0xd191,	// (0x0008440d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x00086fda) list_medium_line_t3_right_iconx2_t

0x0e6f,	// (0x000780eb) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x3_t4_g4_g1

0x0e7b,	// (0x000780f7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0e7b,	// (0x000780f7) list_medium_line_x3_t4_g4_g2

0x0f0e,	// (0x0007818a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f0e,	// (0x0007818a) list_medium_line_x3_t4_g4_g3

0x411b,	// (0x0007b397) list_medium_line_x3_t4_g4_g4_ParamLimits

0x411b,	// (0x0007b397) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x00086fdf) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x00086fdf) list_medium_line_x3_t4_g4_g

0xd19f,	// (0x0008441b) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd19f,	// (0x0008441b) list_medium_line_x3_t4_g4_t1

0xd1b6,	// (0x00084432) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd1b6,	// (0x00084432) list_medium_line_x3_t4_g4_t2

0x14c6,	// (0x00078742) list_medium_line_x3_t4_g4_t3_ParamLimits

0x14c6,	// (0x00078742) list_medium_line_x3_t4_g4_t3

0x4127,	// (0x0007b3a3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4127,	// (0x0007b3a3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x00086fe8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x00086fe8) list_medium_line_x3_t4_g4_t

0xd1cb,	// (0x00084447) list_single_dyc_row_text_pane_t1_ParamLimits

0xd1cb,	// (0x00084447) list_single_dyc_row_text_pane_t1

0xd202,	// (0x0008447e) list_single_dyc_row_text_pane_t2_ParamLimits

0xd202,	// (0x0008447e) list_single_dyc_row_text_pane_t2

0x4144,	// (0x0007b3c0) list_single_dyc_row_text_pane_t3_ParamLimits

0x4144,	// (0x0007b3c0) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x00086ff1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x00086ff1) list_single_dyc_row_text_pane_t

0x4156,	// (0x0007b3d2) list_single_dyc_row_pane_g1_ParamLimits

0x4156,	// (0x0007b3d2) list_single_dyc_row_pane_g1

0x4162,	// (0x0007b3de) list_single_dyc_row_pane_g2_ParamLimits

0x4162,	// (0x0007b3de) list_single_dyc_row_pane_g2

0x416e,	// (0x0007b3ea) list_single_dyc_row_pane_g3_ParamLimits

0x416e,	// (0x0007b3ea) list_single_dyc_row_pane_g3

0x417a,	// (0x0007b3f6) list_single_dyc_row_pane_g4_ParamLimits

0x417a,	// (0x0007b3f6) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x00086ff8) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x00086ff8) list_single_dyc_row_pane_g

0x4186,	// (0x0007b402) list_single_dyc_row_text_pane_ParamLimits

0x4186,	// (0x0007b402) list_single_dyc_row_text_pane

0xe195,	// (0x00085411) bg_sp_fs_scroll_pane

0x41a5,	// (0x0007b421) thumb_sp_fs_scroll_pane

0x3016,	// (0x0007a292) list_medium_line_g1_ParamLimits

0x3016,	// (0x0007a292) list_medium_line_g1

0x41ae,	// (0x0007b42a) list_medium_line_t1_ParamLimits

0x41ae,	// (0x0007b42a) list_medium_line_t1

0x0e6f,	// (0x000780eb) list_medium_line_x2_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x2_g1

0x0e7b,	// (0x000780f7) list_medium_line_x2_g2_ParamLimits

0x0e7b,	// (0x000780f7) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x00087001) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x00087001) list_medium_line_x2_g

0x41c3,	// (0x0007b43f) list_medium_line_x2_t1_ParamLimits

0x41c3,	// (0x0007b43f) list_medium_line_x2_t1

0x0e6f,	// (0x000780eb) list_medium_line_x3_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x3_g1

0x0e7b,	// (0x000780f7) list_medium_line_x3_g2_ParamLimits

0x0e7b,	// (0x000780f7) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x00087001) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x00087001) list_medium_line_x3_g

0x41c3,	// (0x0007b43f) list_medium_line_x3_t1_ParamLimits

0x41c3,	// (0x0007b43f) list_medium_line_x3_t1

0x41d9,	// (0x0007b455) thumb_sp_fs_scroll_pane_g1

0x41e2,	// (0x0007b45e) thumb_sp_fs_scroll_pane_g2

0x41eb,	// (0x0007b467) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00087006) thumb_sp_fs_scroll_pane_g

0x41d9,	// (0x0007b455) bg_sp_fs_scroll_pane_g1

0x41e2,	// (0x0007b45e) bg_sp_fs_scroll_pane_g2

0x41eb,	// (0x0007b467) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x00087006) bg_sp_fs_scroll_pane_g

0x0e6f,	// (0x000780eb) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0e6f,	// (0x000780eb) list_medium_line_x2_t3_g4_g1

0x0f02,	// (0x0007817e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0f02,	// (0x0007817e) list_medium_line_x2_t3_g4_g2

0x0e7b,	// (0x000780f7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0e7b,	// (0x000780f7) list_medium_line_x2_t3_g4_g3

0x0e87,	// (0x00078103) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0e87,	// (0x00078103) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x000865a5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x000865a5) list_medium_line_x2_t3_g4_g

0xd25c,	// (0x000844d8) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd25c,	// (0x000844d8) list_medium_line_x2_t3_g4_t1

0xd272,	// (0x000844ee) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd272,	// (0x000844ee) list_medium_line_x2_t3_g4_t2

0x0ea8,	// (0x00078124) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ea8,	// (0x00078124) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0008700d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0008700d) list_medium_line_x2_t3_g4_t

0x3016,	// (0x0007a292) list_medium_line_g2_g1_ParamLimits

0x3016,	// (0x0007a292) list_medium_line_g2_g1

0x3022,	// (0x0007a29e) list_medium_line_g2_g2_ParamLimits

0x3022,	// (0x0007a29e) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00086cd5) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00086cd5) list_medium_line_g2_g

0x41f4,	// (0x0007b470) list_medium_line_g2_t1_ParamLimits

0x41f4,	// (0x0007b470) list_medium_line_g2_t1

0x3016,	// (0x0007a292) list_medium_line_t3_g2_g1_ParamLimits

0x3016,	// (0x0007a292) list_medium_line_t3_g2_g1

0x3022,	// (0x0007a29e) list_medium_line_t3_g2_g2_ParamLimits

0x3022,	// (0x0007a29e) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00086cd5) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00086cd5) list_medium_line_t3_g2_g

0xd28c,	// (0x00084508) list_medium_line_t3_g2_t1_ParamLimits

0xd28c,	// (0x00084508) list_medium_line_t3_g2_t1

0xd2a3,	// (0x0008451f) list_medium_line_t3_g2_t2_ParamLimits

0xd2a3,	// (0x0008451f) list_medium_line_t3_g2_t2

0xd2b8,	// (0x00084534) list_medium_line_t3_g2_t3_ParamLimits

0xd2b8,	// (0x00084534) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x00087014) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x00087014) list_medium_line_t3_g2_t

0x3fe9,	// (0x0007b265) list_medium_line_right_icon_g1

0x4209,	// (0x0007b485) list_medium_line_right_icon_t1

0x3016,	// (0x0007a292) list_medium_line_t2_g1_ParamLimits

0x3016,	// (0x0007a292) list_medium_line_t2_g1

0xd2cd,	// (0x00084549) list_medium_line_t2_t1_ParamLimits

0xd2cd,	// (0x00084549) list_medium_line_t2_t1

0xd2e7,	// (0x00084563) list_medium_line_t2_t2_ParamLimits

0xd2e7,	// (0x00084563) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0008701b) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0008701b) list_medium_line_t2_t

0x3016,	// (0x0007a292) list_medium_line_t3_g1_ParamLimits

0x3016,	// (0x0007a292) list_medium_line_t3_g1

0xd2fc,	// (0x00084578) list_medium_line_t3_t1_ParamLimits

0xd2fc,	// (0x00084578) list_medium_line_t3_t1

0xd313,	// (0x0008458f) list_medium_line_t3_t2_ParamLimits

0xd313,	// (0x0008458f) list_medium_line_t3_t2

0xd328,	// (0x000845a4) list_medium_line_t3_t3_ParamLimits

0xd328,	// (0x000845a4) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x00087020) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x00087020) list_medium_line_t3_t

0x3016,	// (0x0007a292) list_medium_line_g3_g1_ParamLimits

0x3016,	// (0x0007a292) list_medium_line_g3_g1

0x4217,	// (0x0007b493) list_medium_line_g3_g2_ParamLimits

0x4217,	// (0x0007b493) list_medium_line_g3_g2

0x3022,	// (0x0007a29e) list_medium_line_g3_g3_ParamLimits

0x3022,	// (0x0007a29e) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x00087027) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x00087027) list_medium_line_g3_g

0x4223,	// (0x0007b49f) list_medium_line_g3_t1_ParamLimits

0x4223,	// (0x0007b49f) list_medium_line_g3_t1

0x3016,	// (0x0007a292) list_medium_line_t2_g3_g1_ParamLimits

0x3016,	// (0x0007a292) list_medium_line_t2_g3_g1

0x4217,	// (0x0007b493) list_medium_line_t2_g3_g2_ParamLimits

0x4217,	// (0x0007b493) list_medium_line_t2_g3_g2

0x3022,	// (0x0007a29e) list_medium_line_t2_g3_g3_ParamLimits

0x3022,	// (0x0007a29e) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x00087027) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x00087027) list_medium_line_t2_g3_g

0xd33a,	// (0x000845b6) list_medium_line_t2_g3_t1_ParamLimits

0xd33a,	// (0x000845b6) list_medium_line_t2_g3_t1

0xd354,	// (0x000845d0) list_medium_line_t2_g3_t2_ParamLimits

0xd354,	// (0x000845d0) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0008702e) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0008702e) list_medium_line_t2_g3_t

0x3016,	// (0x0007a292) list_medium_line_t3_g3_g1_ParamLimits

0x3016,	// (0x0007a292) list_medium_line_t3_g3_g1

0x4217,	// (0x0007b493) list_medium_line_t3_g3_g2_ParamLimits

0x4217,	// (0x0007b493) list_medium_line_t3_g3_g2

0x3022,	// (0x0007a29e) list_medium_line_t3_g3_g3_ParamLimits

0x3022,	// (0x0007a29e) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x00087027) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x00087027) list_medium_line_t3_g3_g

0xd369,	// (0x000845e5) list_medium_line_t3_g3_t1_ParamLimits

0xd369,	// (0x000845e5) list_medium_line_t3_g3_t1

0xd37d,	// (0x000845f9) list_medium_line_t3_g3_t2_ParamLimits

0xd37d,	// (0x000845f9) list_medium_line_t3_g3_t2

0xd38f,	// (0x0008460b) list_medium_line_t3_g3_t3_ParamLimits

0xd38f,	// (0x0008460b) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x00087033) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x00087033) list_medium_line_t3_g3_t

0x4113,	// (0x0007b38f) list_medium_line_right_iconx2_g1

0x3fe9,	// (0x0007b265) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0008703a) list_medium_line_right_iconx2_g

0x4238,	// (0x0007b4b4) list_medium_line_right_iconx2_t1

0x4113,	// (0x0007b38f) list_medium_line_t2_right_iconx2_g1

0x3fe9,	// (0x0007b265) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0008703a) list_medium_line_t2_right_iconx2_g

0xd3a1,	// (0x0008461d) list_medium_line_t2_right_iconx2_t1

0xd3b1,	// (0x0008462d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0008703f) list_medium_line_t2_right_iconx2_t

0x4246,	// (0x0007b4c2) list_medium_line_x4_t4_t1

0xd3bf,	// (0x0008463b) list_medium_line_x4_t4_t2

0xd3cf,	// (0x0008464b) list_medium_line_x4_t4_t3

0xd3df,	// (0x0008465b) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x00087044) list_medium_line_x4_t4_t

0xd418,	// (0x00084694) tport_appsw_pane_ParamLimits

0xd418,	// (0x00084694) tport_appsw_pane

0xd424,	// (0x000846a0) tport_contact_pane_ParamLimits

0xd424,	// (0x000846a0) tport_contact_pane

0xd434,	// (0x000846b0) tport_listscroll_pane_ParamLimits

0xd434,	// (0x000846b0) tport_listscroll_pane

0xd444,	// (0x000846c0) cell_tport_appsw_pane_ParamLimits

0xd444,	// (0x000846c0) cell_tport_appsw_pane

0x25f2,	// (0x0007986e) tport_appsw_pane_g1_ParamLimits

0x25f2,	// (0x0007986e) tport_appsw_pane_g1

0x4254,	// (0x0007b4d0) tport_contact_pane_g1

0x3a21,	// (0x0007ac9d) tport_contact_pane_t1

0x425d,	// (0x0007b4d9) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0008704d) tport_contact_pane_t

0x426b,	// (0x0007b4e7) list_tport_pane

0x4274,	// (0x0007b4f0) scroll_pane_cp_030

0xd459,	// (0x000846d5) cell_tport_appsw_pane_g1

0x427d,	// (0x0007b4f9) cell_tport_appsw_pane_t1

0xe195,	// (0x00085411) grid_highlight_pane_cp019

0xd471,	// (0x000846ed) list_tport_double_graphic_pane_ParamLimits

0xd471,	// (0x000846ed) list_tport_double_graphic_pane

0x922f,	// (0x000804ab) list_highlight_pane_cp023_ParamLimits

0x922f,	// (0x000804ab) list_highlight_pane_cp023

0xd483,	// (0x000846ff) list_tport_double_graphic_pane_g1_ParamLimits

0xd483,	// (0x000846ff) list_tport_double_graphic_pane_g1

0xd490,	// (0x0008470c) list_tport_double_graphic_pane_t1_ParamLimits

0xd490,	// (0x0008470c) list_tport_double_graphic_pane_t1

0xd4a5,	// (0x00084721) list_tport_double_graphic_pane_t2_ParamLimits

0xd4a5,	// (0x00084721) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x00087059) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x00087059) list_tport_double_graphic_pane_t

0xe195,	// (0x00085411) main_cale_note_pane

0xb41f,	// (0x0008269b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb41f,	// (0x0008269b) cell_vitu2_function_top_wide_pane_cp01

0xcc31,	// (0x00083ead) wait_bar_pane_cp05_ParamLimits

0xe195,	// (0x00085411) listscroll_cmail_pane

0x4293,	// (0x0007b50f) list_cmail_pane

0xd4c1,	// (0x0008473d) list_cmail_body_pane

0xd4de,	// (0x0008475a) list_single_cmail_header_caption_pane

0xd503,	// (0x0008477f) list_single_cmail_header_detail_pane_ParamLimits

0xd503,	// (0x0008477f) list_single_cmail_header_detail_pane

0xd536,	// (0x000847b2) list_single_cmail_header_caption_pane_t1

0xd544,	// (0x000847c0) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd544,	// (0x000847c0) list_single_cmail_header_detail_pane_g1

0x4dd1,	// (0x0007c04d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4dd1,	// (0x0007c04d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0008705e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0008705e) list_single_cmail_header_detail_pane_g

0x42da,	// (0x0007b556) list_single_cmail_header_detail_pane_t1_ParamLimits

0x42da,	// (0x0007b556) list_single_cmail_header_detail_pane_t1

0x4314,	// (0x0007b590) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4314,	// (0x0007b590) list_single_cmail_header_editor_pane_bg

0x3bb0,	// (0x0007ae2c) list_cmail_body_pane_g1

0x4326,	// (0x0007b5a2) list_cmail_body_pane_t1

0x2da5,	// (0x0007a021) list_single_cmail_header_editor_pane_bg_g1

0x1129,	// (0x000783a5) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2db5,	// (0x0007a031) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2dad,	// (0x0007a029) list_single_cmail_header_editor_pane_bg_g1_copy3

0x300e,	// (0x0007a28a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2dd5,	// (0x0007a051) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2dc5,	// (0x0007a041) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2dcd,	// (0x0007a049) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1109,	// (0x00078385) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd57e,	// (0x000847fa) calenote_gesture_pane_ParamLimits

0xd57e,	// (0x000847fa) calenote_gesture_pane

0xd598,	// (0x00084814) calenote_window_pane_ParamLimits

0xd598,	// (0x00084814) calenote_window_pane

0x4334,	// (0x0007b5b0) popup_note_window_cp01

0xd5b0,	// (0x0008482c) calenote_swipe_1_pane_ParamLimits

0xd5b0,	// (0x0008482c) calenote_swipe_1_pane

0xd009,	// (0x00084285) calenote_swipe_2_pane_ParamLimits

0xd009,	// (0x00084285) calenote_swipe_2_pane

0x3eea,	// (0x0007b166) calenote_swipe_1_pane_g1_ParamLimits

0x3eea,	// (0x0007b166) calenote_swipe_1_pane_g1

0x3ef7,	// (0x0007b173) calenote_swipe_1_pane_g2_ParamLimits

0x3ef7,	// (0x0007b173) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x00086f8d) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x00086f8d) calenote_swipe_1_pane_g

0x4346,	// (0x0007b5c2) calenote_swipe_1_pane_t1_ParamLimits

0x4346,	// (0x0007b5c2) calenote_swipe_1_pane_t1

0x3eea,	// (0x0007b166) calenote_swipe_2_pane_g1_ParamLimits

0x3eea,	// (0x0007b166) calenote_swipe_2_pane_g1

0x4365,	// (0x0007b5e1) calenote_swipe_2_pane_g2_ParamLimits

0x4365,	// (0x0007b5e1) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0008706a) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0008706a) calenote_swipe_2_pane_g

0x4371,	// (0x0007b5ed) calenote_swipe_2_pane_t1_ParamLimits

0x4371,	// (0x0007b5ed) calenote_swipe_2_pane_t1

0xe195,	// (0x00085411) main_mup_navstr_pane

0xa1eb,	// (0x00081467) main_mup3_pane_t7_ParamLimits

0xa1eb,	// (0x00081467) main_mup3_pane_t7

0xabc0,	// (0x00081e3c) main_mp4_pane_g6_ParamLimits

0xabc0,	// (0x00081e3c) main_mp4_pane_g6

0xaf32,	// (0x000821ae) main_image3_pane_t4_ParamLimits

0xaf32,	// (0x000821ae) main_image3_pane_t4

0xd5c3,	// (0x0008483f) popup_navstr_preview_pane_ParamLimits

0xd5c3,	// (0x0008483f) popup_navstr_preview_pane

0xd5cf,	// (0x0008484b) scroll_navstr_pane_ParamLimits

0xd5cf,	// (0x0008484b) scroll_navstr_pane

0xe195,	// (0x00085411) bg_popup_preview_window_pane_cp04

0x4398,	// (0x0007b614) popup_navstr_preview_pane_t1

0xd5db,	// (0x00084857) scroll_navstr_pane_g1_ParamLimits

0xd5db,	// (0x00084857) scroll_navstr_pane_g1

0xd5e8,	// (0x00084864) scroll_navstr_pane_t1_ParamLimits

0xd5e8,	// (0x00084864) scroll_navstr_pane_t1

0x433d,	// (0x0007b5b9) bg_button_pane_cp014

0x433d,	// (0x0007b5b9) bg_button_pane_cp030

0xcefd,	// (0x00084179) list_double_fisheye_pane_g4_ParamLimits

0xcefd,	// (0x00084179) list_double_fisheye_pane_g4

0xcf09,	// (0x00084185) list_double_fisheye_pane_g5_ParamLimits

0xcf09,	// (0x00084185) list_double_fisheye_pane_g5

0x429b,	// (0x0007b517) sp_fs_scroll_pane_cp03

0x4029,	// (0x0007b2a5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4035,	// (0x0007b2b1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x00086faa) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x4041,	// (0x0007b2bd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd4b7,	// (0x00084733) sp_fs_scroll_pane_cp02

0x0d0a,	// (0x00077f86) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0d0a,	// (0x00077f86) popup_sp_fs_calendar_preview_list_single_pane

0xe195,	// (0x00085411) main_cam6_pano_pane

0x922f,	// (0x000804ab) main_mup3_pane_ParamLimits

0xe195,	// (0x00085411) main_phacti_pane

0xcb06,	// (0x00083d82) bg_button_pane_cp11

0xcb1e,	// (0x00083d9a) main_mobtv_info_pane_g2_ParamLimits

0xcb1e,	// (0x00083d9a) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x00086f0a) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x00086f0a) main_mobtv_info_pane_g

0xccd0,	// (0x00083f4c) sc_clock_pane_t5_ParamLimits

0xccd0,	// (0x00083f4c) sc_clock_pane_t5

0xcd6e,	// (0x00083fea) main_radioblah_pane_g1_ParamLimits

0x3e36,	// (0x0007b0b2) main_radioblah_pane_t3_ParamLimits

0x3e36,	// (0x0007b0b2) main_radioblah_pane_t3

0x3e4e,	// (0x0007b0ca) main_radioblah_pane_t4_ParamLimits

0x3e4e,	// (0x0007b0ca) main_radioblah_pane_t4

0xcd8c,	// (0x00084008) main_radioblah_text_pane_ParamLimits

0xcd8c,	// (0x00084008) main_radioblah_text_pane

0xcd99,	// (0x00084015) main_radioblah_info_pane_g1_ParamLimits

0xce2e,	// (0x000840aa) main_radioblah_info_pane_t4_ParamLimits

0xce2e,	// (0x000840aa) main_radioblah_info_pane_t4

0x922f,	// (0x000804ab) main_sp_fs_calendar_pane

0xd5fa,	// (0x00084876) main_phacti_pane_g1

0xd602,	// (0x0008487e) phacti_note_pane_ParamLimits

0xd602,	// (0x0008487e) phacti_note_pane

0x43af,	// (0x0007b62b) phacti_term_pane_ParamLimits

0x43af,	// (0x0007b62b) phacti_term_pane

0x43c4,	// (0x0007b640) phacti_note_pane_t1_ParamLimits

0x43c4,	// (0x0007b640) phacti_note_pane_t1

0x43db,	// (0x0007b657) phacti_term_pane_g1

0x43e3,	// (0x0007b65f) phacti_term_pane_t1_ParamLimits

0x43e3,	// (0x0007b65f) phacti_term_pane_t1

0x440d,	// (0x0007b689) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0e67,	// (0x000780e3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x00087074) popup_sp_fs_calendar_preview_list_single_pane_g

0x4415,	// (0x0007b691) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x4415,	// (0x0007b691) popup_sp_fs_calendar_preview_list_single_pane_t1

0x442a,	// (0x0007b6a6) aid_popup_sp_fs_bg_corner_pane

0xeef4,	// (0x00086170) popup_sp_fs_calendar_preview_bg_pane_g1

0xe195,	// (0x00085411) popup_sp_fs_calendar_preview_bg_pane

0x4432,	// (0x0007b6ae) popup_sp_fs_calendar_preview_list_pane

0x922f,	// (0x000804ab) bg_main_sp_fs_cale_pane_ParamLimits

0x922f,	// (0x000804ab) bg_main_sp_fs_cale_pane

0x4443,	// (0x0007b6bf) listscroll_cale_mrui_pane_ParamLimits

0x4443,	// (0x0007b6bf) listscroll_cale_mrui_pane

0x4457,	// (0x0007b6d3) listscroll_sp_fs_schedule_track_pane

0x4460,	// (0x0007b6dc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4460,	// (0x0007b6dc) main_sp_fs_ctrlbar_pane_cp01

0x4471,	// (0x0007b6ed) main_sp_fs_ribbon_pane

0x4479,	// (0x0007b6f5) popup_sp_fs_cale_preview_window

0x42ab,	// (0x0007b527) list_single_sp_fs_schedule_track_pane_ParamLimits

0x42ab,	// (0x0007b527) list_single_sp_fs_schedule_track_pane

0x2d0c,	// (0x00079f88) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2d0c,	// (0x00079f88) bg_sp_fs_highlight_list_pane_cp03

0xd641,	// (0x000848bd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd641,	// (0x000848bd) list_single_sp_fs_schedule_track_pane_g1

0xd64d,	// (0x000848c9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd64d,	// (0x000848c9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x00087079) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x00087079) list_single_sp_fs_schedule_track_pane_g

0xd659,	// (0x000848d5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd659,	// (0x000848d5) list_single_sp_fs_schedule_track_pane_t1

0xd671,	// (0x000848ed) sp_fs_schedule_track_pane_ParamLimits

0xd671,	// (0x000848ed) sp_fs_schedule_track_pane

0x448b,	// (0x0007b707) sp_fs_schedule_track_pane_g1

0x4493,	// (0x0007b70f) sp_fs_schedule_track_pane_g2

0x449b,	// (0x0007b717) sp_fs_schedule_track_pane_g3

0x44a3,	// (0x0007b71f) sp_fs_schedule_track_pane_g4

0x44ab,	// (0x0007b727) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0008707e) sp_fs_schedule_track_pane_g

0x2da5,	// (0x0007a021) bg_sp_fs_schedule_viewer_highlight_g1

0x1129,	// (0x000783a5) bg_sp_fs_schedule_viewer_highlight_g2

0x2dad,	// (0x0007a029) bg_sp_fs_schedule_viewer_highlight_g3

0x2db5,	// (0x0007a031) bg_sp_fs_schedule_viewer_highlight_g4

0x300e,	// (0x0007a28a) bg_sp_fs_schedule_viewer_highlight_g5

0x2dc5,	// (0x0007a041) bg_sp_fs_schedule_viewer_highlight_g6

0x2dcd,	// (0x0007a049) bg_sp_fs_schedule_viewer_highlight_g7

0x2dd5,	// (0x0007a051) bg_sp_fs_schedule_viewer_highlight_g8

0x1109,	// (0x00078385) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x00087089) bg_sp_fs_schedule_viewer_highlight_g

0xe195,	// (0x00085411) bg_main_sp_fs_ribbon_pane

0xd681,	// (0x000848fd) main_sp_fs_ribbon_pane_g1

0x44b3,	// (0x0007b72f) main_sp_fs_ribbon_pane_t1

0xd68a,	// (0x00084906) main_sp_fs_ribbon_pane_t2

0x44c2,	// (0x0007b73e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0008709c) main_sp_fs_ribbon_pane_t

0x44d1,	// (0x0007b74d) main_sp_fs_ribbon_scheduler_pane

0x44d9,	// (0x0007b755) bg_main_sp_fs_ribbon_pane_g1

0x44e2,	// (0x0007b75e) bg_main_sp_fs_ribbon_pane_g2

0x44eb,	// (0x0007b767) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x000870a3) bg_main_sp_fs_ribbon_pane_g

0x44f3,	// (0x0007b76f) main_sp_fs_ribbon_scheduler_pane_g1

0x44fc,	// (0x0007b778) main_sp_fs_ribbon_scheduler_pane_g2

0x4505,	// (0x0007b781) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x000870aa) main_sp_fs_ribbon_scheduler_pane_g

0x450e,	// (0x0007b78a) list_cale_mrui_pane

0xd699,	// (0x00084915) sp_fs_scroll_pane_cp07_ParamLimits

0xd699,	// (0x00084915) sp_fs_scroll_pane_cp07

0xd6af,	// (0x0008492b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd6af,	// (0x0008492b) bg_sp_fs_schedule_viewer_highlight

0x4517,	// (0x0007b793) list_single_sp_fs_schedule_track_pane_cp01

0x451f,	// (0x0007b79b) list_sp_fs_schedule_track_pane

0x4527,	// (0x0007b7a3) sp_fs_scroll_pane_cp06_ParamLimits

0x4527,	// (0x0007b7a3) sp_fs_scroll_pane_cp06

0xeef4,	// (0x00086170) bgmain_sp_fs_calendar_pane_g1

0xd6bc,	// (0x00084938) list_single_cale_mrui_pane_ParamLimits

0xd6bc,	// (0x00084938) list_single_cale_mrui_pane

0x4539,	// (0x0007b7b5) list_single_cale_mrui_row_pane_ParamLimits

0x4539,	// (0x0007b7b5) list_single_cale_mrui_row_pane

0x4546,	// (0x0007b7c2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4546,	// (0x0007b7c2) list_single_cale_mrui_row_pane_g1

0x457e,	// (0x0007b7fa) list_single_cale_mrui_row_pane_t1_ParamLimits

0x457e,	// (0x0007b7fa) list_single_cale_mrui_row_pane_t1

0xd6e1,	// (0x0008495d) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd6e1,	// (0x0008495d) list_single_cale_mrui_row_pane_t2

0x4590,	// (0x0007b80c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4590,	// (0x0007b80c) list_single_cale_mrui_row_pane_t3

0x45bf,	// (0x0007b83b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x45bf,	// (0x0007b83b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x000870b6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x000870b6) list_single_cale_mrui_row_pane_t

0xd747,	// (0x000849c3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd747,	// (0x000849c3) list_single_cmail_header_editor_pane_bg_cp01

0xd767,	// (0x000849e3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd767,	// (0x000849e3) list_single_cmail_header_editor_pane_bg_cp02

0xd783,	// (0x000849ff) main_radioblah_text_pane_t1_ParamLimits

0xd783,	// (0x000849ff) main_radioblah_text_pane_t1

0x45ee,	// (0x0007b86a) cam6_indi_pane_cp01

0x45f6,	// (0x0007b872) cam6_mode_pane_cp01

0x45fe,	// (0x0007b87a) cam6_pano_pane

0x4607,	// (0x0007b883) cam6_zoom_pane_cp01

0x460f,	// (0x0007b88b) cam6_pano_image_pane

0x461a,	// (0x0007b896) cam6_pano_pane_g1

0x3bb0,	// (0x0007ae2c) cam6_pano_pane_g2

0x4623,	// (0x0007b89f) cam6_pano_pane_g3

0x462c,	// (0x0007b8a8) cam6_pano_pane_g4

0x28bd,	// (0x00079b39) cam6_pano_pane_g5

0x4635,	// (0x0007b8b1) cam6_pano_pane_g6

0x463f,	// (0x0007b8bb) cam6_pano_pane_g7

0x4647,	// (0x0007b8c3) cam6_pano_pane_g8

0x4650,	// (0x0007b8cc) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x000870bf) cam6_pano_pane_g

0xe195,	// (0x00085411) main_browser_tag_pane

0x4390,	// (0x0007b60c) grid_navstr_albumart_pane

0x465b,	// (0x0007b8d7) cell_navstr_albumart_pane_ParamLimits

0x465b,	// (0x0007b8d7) cell_navstr_albumart_pane

0x467e,	// (0x0007b8fa) cell_navstr_albumart_pane_g1

0xe8ca,	// (0x00085b46) cell_navstr_albumart_pane_g2

0xe8da,	// (0x00085b56) cell_navstr_albumart_pane_g3

0xe8d2,	// (0x00085b4e) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x000870d2) cell_navstr_albumart_pane_g

0xd79e,	// (0x00084a1a) bt_list_pane_ParamLimits

0xd79e,	// (0x00084a1a) bt_list_pane

0xd7be,	// (0x00084a3a) bt_list_pane_t1

0xd7cd,	// (0x00084a49) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x000870db) bt_list_pane_t

0xe195,	// (0x00085411) main_cale_prevew_pane

0xd7dc,	// (0x00084a58) popup_cale_preview_window_ParamLimits

0xd7dc,	// (0x00084a58) popup_cale_preview_window

0x922f,	// (0x000804ab) bg_popup_preview_window_pane_cp05_ParamLimits

0x922f,	// (0x000804ab) bg_popup_preview_window_pane_cp05

0x4686,	// (0x0007b902) list_cale_preview_pane_ParamLimits

0x4686,	// (0x0007b902) list_cale_preview_pane

0x4961,	// (0x0007bbdd) list_double_cale_preview_pane_ParamLimits

0x4961,	// (0x0007bbdd) list_double_cale_preview_pane

0xd7f5,	// (0x00084a71) list_single_cale_preview_pane_ParamLimits

0xd7f5,	// (0x00084a71) list_single_cale_preview_pane

0xd80b,	// (0x00084a87) list_single_cale_preview_pane_g1

0xd813,	// (0x00084a8f) list_single_cale_preview_pane_t1_ParamLimits

0xd813,	// (0x00084a8f) list_single_cale_preview_pane_t1

0xd828,	// (0x00084aa4) list_double_cale_preview_pane_g1

0xd830,	// (0x00084aac) list_double_cale_preview_pane_t1_ParamLimits

0xd830,	// (0x00084aac) list_double_cale_preview_pane_t1

0xd845,	// (0x00084ac1) list_double_cale_preview_pane_t2_ParamLimits

0xd845,	// (0x00084ac1) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x000870e0) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x000870e0) list_double_cale_preview_pane_t

0xe195,	// (0x00085411) main_ezdial_pane

0x922f,	// (0x000804ab) main_sp_fs_email_pane_ParamLimits

0xd041,	// (0x000842bd) cmail_ddmenu_btn01_pane_ParamLimits

0xd041,	// (0x000842bd) cmail_ddmenu_btn01_pane

0xd05e,	// (0x000842da) cmail_ddmenu_btn02_pane_ParamLimits

0xd05e,	// (0x000842da) cmail_ddmenu_btn02_pane

0xd07c,	// (0x000842f8) cmail_ddmenu_btn03_pane_ParamLimits

0xd07c,	// (0x000842f8) cmail_ddmenu_btn03_pane

0xd0aa,	// (0x00084326) main_sp_fs_ctrlbar_pane_ParamLimits

0xd0c6,	// (0x00084342) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd4c1,	// (0x0008473d) list_cmail_body_pane_ParamLimits

0x42c4,	// (0x0007b540) bg_button_pane_cp12

0x42cd,	// (0x0007b549) list_single_cmail_header_detail_pane_g3_ParamLimits

0x42cd,	// (0x0007b549) list_single_cmail_header_detail_pane_g3

0xd55a,	// (0x000847d6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd55a,	// (0x000847d6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x00087065) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x00087065) list_single_cmail_header_detail_pane_t

0x43f8,	// (0x0007b674) phacti_term_pane_t2_ParamLimits

0x43f8,	// (0x0007b674) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0008706f) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0008706f) phacti_term_pane_t

0x4692,	// (0x0007b90e) aid_size_list_single_double

0xd85d,	// (0x00084ad9) popup_ezdial_listscroll_window

0xd87d,	// (0x00084af9) popup_number_entry_window_cp01

0x1946,	// (0x00078bc2) bg_popup_call_pane_cp09

0x469e,	// (0x0007b91a) ezdial_list_pane

0x46a6,	// (0x0007b922) scroll_pane_cp23

0xecd9,	// (0x00085f55) bg_button_pane_cp028_ParamLimits

0xecd9,	// (0x00085f55) bg_button_pane_cp028

0xd88b,	// (0x00084b07) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd88b,	// (0x00084b07) cmail_ddmenu_btn01_pane_g1

0xd89b,	// (0x00084b17) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd89b,	// (0x00084b17) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x000870e5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x000870e5) cmail_ddmenu_btn01_pane_g

0x46ae,	// (0x0007b92a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x46ae,	// (0x0007b92a) cmail_ddmenu_btn01_pane_t1

0xeaad,	// (0x00085d29) bg_button_pane_cp029_ParamLimits

0xeaad,	// (0x00085d29) bg_button_pane_cp029

0xd89b,	// (0x00084b17) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd89b,	// (0x00084b17) cmail_ddmenu_btn02_pane_g1

0xd8b3,	// (0x00084b2f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd8b3,	// (0x00084b2f) cmail_ddmenu_btn02_pane_t1

0x2d0c,	// (0x00079f88) bg_button_pane_cp031_ParamLimits

0x2d0c,	// (0x00079f88) bg_button_pane_cp031

0xd89b,	// (0x00084b17) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd89b,	// (0x00084b17) cmail_ddmenu_btn03_pane_g1

0xd8b3,	// (0x00084b2f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd8b3,	// (0x00084b2f) cmail_ddmenu_btn03_pane_t1

0xadcf,	// (0x0008204b) cell_dialer2_keypad_pane_t1_ParamLimits

0xade9,	// (0x00082065) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xade9,	// (0x00082065) cell_dialer2_keypad_pane_t1_copy1

0xc9c8,	// (0x00083c44) ncimui_group_button_pane

0x922f,	// (0x000804ab) main_sp_fs_calendar_pane_ParamLimits

0xd4de,	// (0x0008475a) list_single_cmail_header_caption_pane_ParamLimits

0x443a,	// (0x0007b6b6) aid_recal_txt_sm_pane

0xe195,	// (0x00085411) mian_recal_day_pane

0x4479,	// (0x0007b6f5) popup_sp_fs_cale_preview_window_ParamLimits

0xe195,	// (0x00085411) list_recal_day_pane

0x46e5,	// (0x0007b961) list_single_recal_day_pane_ParamLimits

0x46e5,	// (0x0007b961) list_single_recal_day_pane

0x46f7,	// (0x0007b973) list_single_recal_day_pane_g1_ParamLimits

0x46f7,	// (0x0007b973) list_single_recal_day_pane_g1

0x4703,	// (0x0007b97f) list_single_recal_day_pane_g2_ParamLimits

0x4703,	// (0x0007b97f) list_single_recal_day_pane_g2

0x4712,	// (0x0007b98e) list_single_recal_day_pane_g3_ParamLimits

0x4712,	// (0x0007b98e) list_single_recal_day_pane_g3

0xd8d7,	// (0x00084b53) list_single_recal_day_pane_g4_ParamLimits

0xd8d7,	// (0x00084b53) list_single_recal_day_pane_g4

0x471e,	// (0x0007b99a) list_single_recal_day_pane_g5_ParamLimits

0x471e,	// (0x0007b99a) list_single_recal_day_pane_g5

0x472d,	// (0x0007b9a9) list_single_recal_day_pane_g6_ParamLimits

0x472d,	// (0x0007b9a9) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x000870f4) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x000870f4) list_single_recal_day_pane_g

0x4739,	// (0x0007b9b5) list_single_recal_day_pane_t1

0x4747,	// (0x0007b9c3) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x00087101) list_single_recal_day_pane_t

0xd8ea,	// (0x00084b66) ncimui_query_button_pane_ParamLimits

0xd8ea,	// (0x00084b66) ncimui_query_button_pane

0xd8fa,	// (0x00084b76) ncimui_query_button_pane_t1_ParamLimits

0xd8fa,	// (0x00084b76) ncimui_query_button_pane_t1

0x4755,	// (0x0007b9d1) ncimui_query_button_pane_t2_ParamLimits

0x4755,	// (0x0007b9d1) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x00087106) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x00087106) ncimui_query_button_pane_t

0xd90d,	// (0x00084b89) query_button_pane_ParamLimits

0xd90d,	// (0x00084b89) query_button_pane

0xe195,	// (0x00085411) bg_button_pane_cp0028

0x4768,	// (0x0007b9e4) query_button_pane_t1

0x924b,	// (0x000804c7) main_tport_pane_ParamLimits

0xd3ef,	// (0x0008466b) bg_popup_window_pane_cp01_ParamLimits

0xd3ef,	// (0x0008466b) bg_popup_window_pane_cp01

0xd3fc,	// (0x00084678) heading_pane_cp08_ParamLimits

0xd3fc,	// (0x00084678) heading_pane_cp08

0xd40a,	// (0x00084686) heading_pane_cp07_ParamLimits

0xd40a,	// (0x00084686) heading_pane_cp07

0xd461,	// (0x000846dd) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x00087052) cell_tport_appsw_pane_g

0x833b,	// (0x0007f5b7) input_candi_list_open_g1

0x1328,	// (0x000785a4) list_cale_time_pane_g6_ParamLimits

0x1328,	// (0x000785a4) list_cale_time_pane_g6

0x9c84,	// (0x00080f00) aid_size_touch_calib_1_ParamLimits

0x9c84,	// (0x00080f00) aid_size_touch_calib_1

0x9c90,	// (0x00080f0c) aid_size_touch_calib_2_ParamLimits

0x9c90,	// (0x00080f0c) aid_size_touch_calib_2

0x9c9e,	// (0x00080f1a) aid_size_touch_calib_3_ParamLimits

0x9c9e,	// (0x00080f1a) aid_size_touch_calib_3

0x9cae,	// (0x00080f2a) aid_size_touch_calib_4_ParamLimits

0x9cae,	// (0x00080f2a) aid_size_touch_calib_4

0x9cbc,	// (0x00080f38) main_touch_calib_button_group_pane_ParamLimits

0x9cbc,	// (0x00080f38) main_touch_calib_button_group_pane

0x9cca,	// (0x00080f46) main_touch_calib_pane_g1_ParamLimits

0x9cd6,	// (0x00080f52) main_touch_calib_pane_g2_ParamLimits

0x9ce2,	// (0x00080f5e) main_touch_calib_pane_g3_ParamLimits

0x9cee,	// (0x00080f6a) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00086a34) main_touch_calib_pane_g_ParamLimits

0x9cfa,	// (0x00080f76) main_touch_calib_pane_t1_ParamLimits

0x9d11,	// (0x00080f8d) main_touch_calib_pane_t2_ParamLimits

0x9d28,	// (0x00080fa4) main_touch_calib_pane_t3_ParamLimits

0x9d3c,	// (0x00080fb8) main_touch_calib_pane_t4_ParamLimits

0x9d50,	// (0x00080fcc) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x00086a3d) main_touch_calib_pane_t_ParamLimits

0x2693,	// (0x0007990f) list_single_fp_cale_pane_g3_ParamLimits

0x2693,	// (0x0007990f) list_single_fp_cale_pane_g3

0xb209,	// (0x00082485) bg_button_pane_cp012_ParamLimits

0xb209,	// (0x00082485) bg_vkb2_func_pane_cp03_ParamLimits

0xbba9,	// (0x00082e25) cell_vitu2_function_top_pane_g1_ParamLimits

0xb209,	// (0x00082485) bg_vkb2_func_pane_cp04_ParamLimits

0xc979,	// (0x00083bf5) main_ncimui_button_group_pane_ParamLimits

0xc979,	// (0x00083bf5) main_ncimui_button_group_pane

0xc9b6,	// (0x00083c32) main_ncimui_pane_t3_ParamLimits

0xc9b6,	// (0x00083c32) main_ncimui_pane_t3

0x43a6,	// (0x0007b622) phacti_button_group_pane

0x4692,	// (0x0007b90e) aid_size_list_single_double_ParamLimits

0xd85d,	// (0x00084ad9) popup_ezdial_listscroll_window_ParamLimits

0xd87d,	// (0x00084af9) popup_number_entry_window_cp01_ParamLimits

0xd91a,	// (0x00084b96) phacti_button_pane_ParamLimits

0xd91a,	// (0x00084b96) phacti_button_pane

0xe195,	// (0x00085411) bg_button_pane_cp14

0x4776,	// (0x0007b9f2) phacti_button_pane_t1

0xd92b,	// (0x00084ba7) main_touch_calib_button_pane_ParamLimits

0xd92b,	// (0x00084ba7) main_touch_calib_button_pane

0x0b9a,	// (0x00077e16) bg_button_pane_cp18_ParamLimits

0x0b9a,	// (0x00077e16) bg_button_pane_cp18

0x4784,	// (0x0007ba00) main_touch_calib_button_pane_t1_ParamLimits

0x4784,	// (0x0007ba00) main_touch_calib_button_pane_t1

0x479a,	// (0x0007ba16) main_touch_calib_button_pane_t2_ParamLimits

0x479a,	// (0x0007ba16) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0008710b) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0008710b) main_touch_calib_button_pane_t

0xe195,	// (0x00085411) cell_ncimui_button_pane

0xe195,	// (0x00085411) bg_button_pane_cp032

0x47b8,	// (0x0007ba34) cell_ncimui_button_pane_t1

0xae45,	// (0x000820c1) image3_infobar_pane_ParamLimits

0xae45,	// (0x000820c1) image3_infobar_pane

0xccf2,	// (0x00083f6e) fs_bigclock_status_pane_ParamLimits

0xccf2,	// (0x00083f6e) fs_bigclock_status_pane

0xccff,	// (0x00083f7b) main_fs_bigclock_clock_pane_ParamLimits

0xccff,	// (0x00083f7b) main_fs_bigclock_clock_pane

0xcd0f,	// (0x00083f8b) main_fs_bigclock_indi_pane_ParamLimits

0xcd0f,	// (0x00083f8b) main_fs_bigclock_indi_pane

0xcd3c,	// (0x00083fb8) main_fs_bigclock_swipe_pane_ParamLimits

0xcd3c,	// (0x00083fb8) main_fs_bigclock_swipe_pane

0xe195,	// (0x00085411) main_fs_clock_dumped_data

0x3cbd,	// (0x0007af39) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3cbd,	// (0x0007af39) list_single_fs_bigclock_indicator_pane_g1

0x3cd9,	// (0x0007af55) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3cd9,	// (0x0007af55) list_single_fs_bigclock_indicator_pane_g2

0x3cf3,	// (0x0007af6f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3cf3,	// (0x0007af6f) list_single_fs_bigclock_indicator_pane_g3

0x3d0d,	// (0x0007af89) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3d0d,	// (0x0007af89) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x00086f3e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x00086f3e) list_single_fs_bigclock_indicator_pane_g

0x3d33,	// (0x0007afaf) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3d33,	// (0x0007afaf) list_single_fs_bigclock_indicator_pane_t1

0x3d5b,	// (0x0007afd7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3d5b,	// (0x0007afd7) list_single_fs_bigclock_indicator_pane_t2

0x3d83,	// (0x0007afff) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3d83,	// (0x0007afff) list_single_fs_bigclock_indicator_pane_t3

0x3dab,	// (0x0007b027) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3dab,	// (0x0007b027) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x00086f49) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x00086f49) list_single_fs_bigclock_indicator_pane_t

0x47c6,	// (0x0007ba42) image3_infobar_fav_pane_ParamLimits

0x47c6,	// (0x0007ba42) image3_infobar_fav_pane

0x47d6,	// (0x0007ba52) image3_infobar_loc_pane_ParamLimits

0x47d6,	// (0x0007ba52) image3_infobar_loc_pane

0x47ea,	// (0x0007ba66) image3_infobar_time_pane_ParamLimits

0x47ea,	// (0x0007ba66) image3_infobar_time_pane

0xeef4,	// (0x00086170) image3_infobar_time_pane_g1

0x47fa,	// (0x0007ba76) image3_infobar_time_pane_t1

0xeef4,	// (0x00086170) image3_infobar_loc_pane_g1

0x4808,	// (0x0007ba84) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x00087110) image3_infobar_loc_pane_g

0x4810,	// (0x0007ba8c) image3_infobar_loc_pane_t1

0xeef4,	// (0x00086170) image3_infobar_fav_pane_g1

0x481e,	// (0x0007ba9a) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x00087115) image3_infobar_fav_pane_g

0x4826,	// (0x0007baa2) fs_bigclock_status_battery_pane

0x482f,	// (0x0007baab) fs_bigclock_status_signal_pane

0x4838,	// (0x0007bab4) fs_bigclock_status_title_pane

0x4841,	// (0x0007babd) fs_bigclock_status_signal_pane_g1

0x484a,	// (0x0007bac6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0008711a) fs_bigclock_status_signal_pane_g

0x4852,	// (0x0007bace) fs_bigclock_status_battery_pane_g1

0x485b,	// (0x0007bad7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0008711f) fs_bigclock_status_battery_pane_g

0x4863,	// (0x0007badf) fs_bigclock_status_title_pane_t1

0xeef4,	// (0x00086170) main_fs_bigclock_clock_pane_g1

0x4871,	// (0x0007baed) main_fs_bigclock_clock_pane_g2

0x4871,	// (0x0007baed) main_fs_bigclock_clock_pane_g3

0x4871,	// (0x0007baed) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x00087124) main_fs_bigclock_clock_pane_g

0x4879,	// (0x0007baf5) main_fs_bigclock_clock_pane_t1

0x4887,	// (0x0007bb03) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0008712d) main_fs_bigclock_clock_pane_t

0x4896,	// (0x0007bb12) list_single_fs_bigclock_indicator_pane_ParamLimits

0x4896,	// (0x0007bb12) list_single_fs_bigclock_indicator_pane

0xd93d,	// (0x00084bb9) list_single_fs_bigclock_pane_ParamLimits

0xd93d,	// (0x00084bb9) list_single_fs_bigclock_pane

0x48b0,	// (0x0007bb2c) main_fs_bigclock_indicator_pane_t1

0x48bf,	// (0x0007bb3b) list_single_fs_bigclock_pane_g1

0x48c7,	// (0x0007bb43) list_single_fs_bigclock_pane_t1

0xeef4,	// (0x00086170) main_fs_bigclock_swipe_pane_g1

0x4905,	// (0x0007bb81) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0008713e) main_fs_bigclock_swipe_pane_g

0x490d,	// (0x0007bb89) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x490d,	// (0x0007bb89) main_fs_bigclock_swipe_pane_t1

0x7af7,	// (0x0007ed73) call_type_pane_ParamLimits

0xe195,	// (0x00085411) main_btmg_pane

0x4572,	// (0x0007b7ee) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4572,	// (0x0007b7ee) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x000870b1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x000870b1) list_single_cale_mrui_row_pane_g

0x46cc,	// (0x0007b948) list_recal_vselct_arw_lo_pane

0x46d4,	// (0x0007b950) list_recal_vselct_arw_up_pane

0x46dc,	// (0x0007b958) list_recal_vselct_pane

0x492a,	// (0x0007bba6) btmg_button_pane

0xd9a0,	// (0x00084c1c) main_btmg_pane_g1

0xe195,	// (0x00085411) bg_button_pane_cp044

0x4934,	// (0x0007bbb0) btmg_button_pane_t1

0xeaa5,	// (0x00085d21) aid_listscroll_gen

0x922f,	// (0x000804ab) main_cntbar_detail_pane

0x428b,	// (0x0007b507) list_cmail_folder_pane

0x429b,	// (0x0007b517) sp_fs_scroll_pane_cp03_ParamLimits

0xd9a8,	// (0x00084c24) list_single_fs_dyc_pane_cp01_ParamLimits

0xd9a8,	// (0x00084c24) list_single_fs_dyc_pane_cp01

0x4942,	// (0x0007bbbe) aid_size_cmail_indent

0xd9ca,	// (0x00084c46) list_single_dyc_row_pane_cp01

0xd9f3,	// (0x00084c6f) cntbar_detail_list_pane_ParamLimits

0xd9f3,	// (0x00084c6f) cntbar_detail_list_pane

0xda2d,	// (0x00084ca9) main_cntbar_detail_cont_pane_ParamLimits

0xda2d,	// (0x00084ca9) main_cntbar_detail_cont_pane

0x7a91,	// (0x0007ed0d) scroll_pane_cp032_ParamLimits

0x7a91,	// (0x0007ed0d) scroll_pane_cp032

0xda39,	// (0x00084cb5) cntbar_detail_list_event_pane_ParamLimits

0xda39,	// (0x00084cb5) cntbar_detail_list_event_pane

0xd9ff,	// (0x00084c7b) cntbar_detail_list_shct_pane

0x1177,	// (0x000783f3) aid_list_gen

0xda4d,	// (0x00084cc9) aid_scroll

0xda56,	// (0x00084cd2) aid_size_touch_scroll_bar

0xda5f,	// (0x00084cdb) aid_list_double

0xda68,	// (0x00084ce4) aid_list_single

0xda71,	// (0x00084ced) aid_list_single_lg

0x494b,	// (0x0007bbc7) aid_list_z_g_a_sm

0xda7a,	// (0x00084cf6) aid_list_z_g_d

0x4953,	// (0x0007bbcf) aid_txt_z_prm

0xda82,	// (0x00084cfe) aid_txt_z_prm_cp01

0xda90,	// (0x00084d0c) aid_txt_z_sec

0xda9e,	// (0x00084d1a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xda9e,	// (0x00084d1a) main_cntbar_detail_cont_pane_g1

0xdaab,	// (0x00084d27) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdaab,	// (0x00084d27) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x00087143) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x00087143) main_cntbar_detail_cont_pane_g

0xdab7,	// (0x00084d33) main_cntbar_detail_cont_pane_t1

0xdac5,	// (0x00084d41) main_cntbar_detail_cont_pane_t2

0xdad3,	// (0x00084d4f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x00087148) main_cntbar_detail_cont_pane_t

0xdae1,	// (0x00084d5d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdae1,	// (0x00084d5d) cell_cntbar_detail_list_shct_pane

0xdaf5,	// (0x00084d71) cntbar_detail_list_shct_pane_g1

0xdafe,	// (0x00084d7a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0008714f) cntbar_detail_list_shct_pane_g

0xdb07,	// (0x00084d83) cntbar_detail_list_event_pane_g1_ParamLimits

0xdb07,	// (0x00084d83) cntbar_detail_list_event_pane_g1

0xdb13,	// (0x00084d8f) cntbar_detail_list_event_pane_g2_ParamLimits

0xdb13,	// (0x00084d8f) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x00087154) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x00087154) cntbar_detail_list_event_pane_g

0xdb7f,	// (0x00084dfb) cntbar_detail_list_event_pane_t1_ParamLimits

0xdb7f,	// (0x00084dfb) cntbar_detail_list_event_pane_t1

0xdb94,	// (0x00084e10) cntbar_detail_list_event_pane_t2_ParamLimits

0xdb94,	// (0x00084e10) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x00087161) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x00087161) cntbar_detail_list_event_pane_t

0xeef4,	// (0x00086170) cell_cntbar_detail_list_shct_pane_g1

0x7e85,	// (0x0007f101) navi_pane_mv_g3

0x922f,	// (0x000804ab) main_cntbar_detail_pane_ParamLimits

0xe195,	// (0x00085411) main_notif_wgt_pane

0xab23,	// (0x00081d9f) aid_tch_main_mp4_pane_g4

0xad2e,	// (0x00081faa) popup_slider_window_cp02

0x46c3,	// (0x0007b93f) list_recal_day_event_pane

0xd9d3,	// (0x00084c4f) cntbar_detail_btn_pane_ParamLimits

0xd9d3,	// (0x00084c4f) cntbar_detail_btn_pane

0xd9e3,	// (0x00084c5f) cntbar_detail_btn_pane_cp01_ParamLimits

0xd9e3,	// (0x00084c5f) cntbar_detail_btn_pane_cp01

0xd9ff,	// (0x00084c7b) cntbar_detail_list_shct_pane_ParamLimits

0xda0b,	// (0x00084c87) cntbar_detail_pane_g1_ParamLimits

0xda0b,	// (0x00084c87) cntbar_detail_pane_g1

0xda17,	// (0x00084c93) cntbar_detail_pane_t1_ParamLimits

0xda17,	// (0x00084c93) cntbar_detail_pane_t1

0xdb1f,	// (0x00084d9b) cntbar_detail_list_event_pane_g3_ParamLimits

0xdb1f,	// (0x00084d9b) cntbar_detail_list_event_pane_g3

0xdb37,	// (0x00084db3) cntbar_detail_list_event_pane_g4_ParamLimits

0xdb37,	// (0x00084db3) cntbar_detail_list_event_pane_g4

0xdb4f,	// (0x00084dcb) cntbar_detail_list_event_pane_g5_ParamLimits

0xdb4f,	// (0x00084dcb) cntbar_detail_list_event_pane_g5

0xdb67,	// (0x00084de3) cntbar_detail_list_event_pane_g6_ParamLimits

0xdb67,	// (0x00084de3) cntbar_detail_list_event_pane_g6

0xdba9,	// (0x00084e25) cntbar_detail_list_event_pane_t3_ParamLimits

0xdba9,	// (0x00084e25) cntbar_detail_list_event_pane_t3

0xdbbb,	// (0x00084e37) popup_notif_wgt_window_ParamLimits

0xdbbb,	// (0x00084e37) popup_notif_wgt_window

0xdbcb,	// (0x00084e47) popup_submenu_window_cp01_ParamLimits

0xdbcb,	// (0x00084e47) popup_submenu_window_cp01

0x1946,	// (0x00078bc2) bg_popup_window_pane_cp10

0xdbd9,	// (0x00084e55) listscroll_notif_wgt_pane

0xdbe3,	// (0x00084e5f) list_notif_wgt_window

0xdbec,	// (0x00084e68) scroll_pane_cp033

0x4961,	// (0x0007bbdd) list_notif_wgt_row_pane_ParamLimits

0x4961,	// (0x0007bbdd) list_notif_wgt_row_pane

0xdbf5,	// (0x00084e71) aid_size_list_notif_wgt_del

0xdbfe,	// (0x00084e7a) list_notif_wgt_row_pane_g1

0xdc06,	// (0x00084e82) list_notif_wgt_row_pane_g2

0xdc0e,	// (0x00084e8a) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x00087168) list_notif_wgt_row_pane_g

0xdc17,	// (0x00084e93) list_notif_wgt_row_pane_t1

0xdc25,	// (0x00084ea1) list_notif_wgt_row_pane_t2

0xdc33,	// (0x00084eaf) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0008716f) list_notif_wgt_row_pane_t

0x302e,	// (0x0007a2aa) list_recal_day_event_pane_g1

0xdc41,	// (0x00084ebd) list_recal_day_event_pane_t1

0xe195,	// (0x00085411) bg_button_pane_cp045

0xdc50,	// (0x00084ecc) cntbar_detail_btn_pane_t1

0xeaad,	// (0x00085d29) main_callh_pane_ParamLimits

0xeaad,	// (0x00085d29) main_callh_pane

0xe195,	// (0x00085411) main_coverflow0_pane

0xe195,	// (0x00085411) main_wgtman_pane

0xcd54,	// (0x00083fd0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcd54,	// (0x00083fd0) main_fs_bigclock_unlock_btn_pane

0xd451,	// (0x000846cd) bg_button_pane_cp16

0xd469,	// (0x000846e5) cell_tport_appsw_pane_g3

0xdc5e,	// (0x00084eda) cf0_flow_pane_ParamLimits

0xdc5e,	// (0x00084eda) cf0_flow_pane

0xdc6d,	// (0x00084ee9) listscroll_cf0_pane

0xdc76,	// (0x00084ef2) main_cf0_pane_g1

0xdc80,	// (0x00084efc) main_cf0_pane_t1_ParamLimits

0xdc80,	// (0x00084efc) main_cf0_pane_t1

0xdc94,	// (0x00084f10) main_cf0_pane_t2_ParamLimits

0xdc94,	// (0x00084f10) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x00087176) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x00087176) main_cf0_pane_t

0xdca8,	// (0x00084f24) scroll_pane_cp11

0xdcb3,	// (0x00084f2f) cf0_flow_pane_g1

0xdcbb,	// (0x00084f37) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0008717b) cf0_flow_pane_g

0xdcc3,	// (0x00084f3f) cf0_flow_pane_t1

0xe195,	// (0x00085411) main_call6_pane

0xe195,	// (0x00085411) main_calllock_pane

0xdcd1,	// (0x00084f4d) call6_btn_grp_pane_ParamLimits

0xdcd1,	// (0x00084f4d) call6_btn_grp_pane

0xdce0,	// (0x00084f5c) call6_pane_g1_ParamLimits

0xdce0,	// (0x00084f5c) call6_pane_g1

0xdcef,	// (0x00084f6b) popup_call6_1st_window_ParamLimits

0xdcef,	// (0x00084f6b) popup_call6_1st_window

0xdcfd,	// (0x00084f79) popup_call6_2nd_window_ParamLimits

0xdcfd,	// (0x00084f79) popup_call6_2nd_window

0xdd0b,	// (0x00084f87) cell_call6_btn_pane_ParamLimits

0xdd0b,	// (0x00084f87) cell_call6_btn_pane

0x1946,	// (0x00078bc2) bg_popup_call2_in_pane_cp03

0xdd1a,	// (0x00084f96) popup_call6_1st_window_g1

0xdd22,	// (0x00084f9e) popup_call6_1st_window_g2

0xdd2a,	// (0x00084fa6) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x00087180) popup_call6_1st_window_g

0xdd32,	// (0x00084fae) popup_call6_1st_window_t1

0xdd41,	// (0x00084fbd) popup_call6_1st_window_t2

0xdd51,	// (0x00084fcd) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x00087187) popup_call6_1st_window_t

0x1946,	// (0x00078bc2) bg_popup_call2_in_pane_cp04

0xdd1a,	// (0x00084f96) popup_call6_2nd_window_g1

0xdd22,	// (0x00084f9e) popup_call6_2nd_window_g2

0xdd2a,	// (0x00084fa6) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x00087180) popup_call6_2nd_window_g

0xdd32,	// (0x00084fae) popup_call6_2nd_window_t1

0xe195,	// (0x00085411) bg_button_pane_cp15

0xdd61,	// (0x00084fdd) cell_call6_btn_pane_g1

0xdd6a,	// (0x00084fe6) cell_call6_btn_pane_t1

0xdd79,	// (0x00084ff5) listscroll_wgtman_pane_ParamLimits

0xdd79,	// (0x00084ff5) listscroll_wgtman_pane

0xdd88,	// (0x00085004) wgtman_btn_pane_ParamLimits

0xdd88,	// (0x00085004) wgtman_btn_pane

0x17fd,	// (0x00078a79) aid_scroll_copy1

0xdd96,	// (0x00085012) list_wgtman_pane

0xdda0,	// (0x0008501c) wgtman_btn_pane_g1_ParamLimits

0xdda0,	// (0x0008501c) wgtman_btn_pane_g1

0xddac,	// (0x00085028) wgtman_btn_pane_t1_ParamLimits

0xddac,	// (0x00085028) wgtman_btn_pane_t1

0xddbe,	// (0x0008503a) wgtman_btn_pane_t2_ParamLimits

0xddbe,	// (0x0008503a) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0008718e) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0008718e) wgtman_btn_pane_t

0xddd0,	// (0x0008504c) listrow_wgtman_pane_ParamLimits

0xddd0,	// (0x0008504c) listrow_wgtman_pane

0xddeb,	// (0x00085067) listrow_wgtman_pane_g1

0xddf4,	// (0x00085070) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x00087193) listrow_wgtman_pane_g

0xddfe,	// (0x0008507a) listrow_wgtman_pane_t1

0xde0c,	// (0x00085088) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x00087198) listrow_wgtman_pane_t

0xde1a,	// (0x00085096) wait_bar_pane_cp09

0xde22,	// (0x0008509e) main_calllock_btn_pane

0xde2c,	// (0x000850a8) main_calllock_pane_g1

0xe195,	// (0x00085411) bg_button_pane_cp17

0xde38,	// (0x000850b4) main_calllock_btn_pane_g1

0xde41,	// (0x000850bd) main_calllock_btn_pane_t1

0xe195,	// (0x00085411) main_dialer3_pane

0xe195,	// (0x00085411) main_fmrd2_pane

0xeef4,	// (0x00086170) main_fs_bigclock_unlock_btn_pane_g1

0xde58,	// (0x000850d4) main_fs_bigclock_unlock_btn_pane_t1

0xde66,	// (0x000850e2) area_fmrd2_info_pane_ParamLimits

0xde66,	// (0x000850e2) area_fmrd2_info_pane

0xde75,	// (0x000850f1) area_fmrd2_visual_pane_ParamLimits

0xde75,	// (0x000850f1) area_fmrd2_visual_pane

0xde83,	// (0x000850ff) fmrd2_indi_pane_ParamLimits

0xde83,	// (0x000850ff) fmrd2_indi_pane

0xde90,	// (0x0008510c) area_fmrd2_visual_pane_g1

0xde98,	// (0x00085114) area_fmrd2_visual_pane_t1

0xdea8,	// (0x00085124) area_fmrd2_visual_pane_t2

0xdeb8,	// (0x00085134) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x000871a2) area_fmrd2_visual_pane_t

0xdec8,	// (0x00085144) area_fmrd2_info_pane_g1

0xded0,	// (0x0008514c) area_fmrd2_info_pane_t1

0xdee0,	// (0x0008515c) area_fmrd2_info_pane_t2

0xdef0,	// (0x0008516c) area_fmrd2_info_pane_t3

0xdf00,	// (0x0008517c) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x000871a9) area_fmrd2_info_pane_t

0xdf0e,	// (0x0008518a) fmrd2_indi_pane_t1

0xdf1e,	// (0x0008519a) fmrd2_indi_pane_t2

0xdf2e,	// (0x000851aa) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x000871b2) fmrd2_indi_pane_t

0x3d1c,	// (0x0007af98) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3d1c,	// (0x0007af98) list_single_fs_bigclock_indicator_pane_g5

0x3dc0,	// (0x0007b03c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3dc0,	// (0x0007b03c) list_single_fs_bigclock_indicator_pane_t5

0xd618,	// (0x00084894) aid_cell_bcale_month_pane_ParamLimits

0xd618,	// (0x00084894) aid_cell_bcale_month_pane

0xd624,	// (0x000848a0) bcale_month_pane_ParamLimits

0xd624,	// (0x000848a0) bcale_month_pane

0xd632,	// (0x000848ae) bcale_preview_pane_ParamLimits

0xd632,	// (0x000848ae) bcale_preview_pane

0x48c7,	// (0x0007bb43) list_single_fs_bigclock_pane_t1_ParamLimits

0x48e1,	// (0x0007bb5d) list_single_fs_bigclock_pane_t2_ParamLimits

0x48e1,	// (0x0007bb5d) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x00087139) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x00087139) list_single_fs_bigclock_pane_t

0xde50,	// (0x000850cc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0008719d) main_fs_bigclock_unlock_btn_pane_g

0xdf3c,	// (0x000851b8) aid_dia3_key_size_ParamLimits

0xdf3c,	// (0x000851b8) aid_dia3_key_size

0xdf48,	// (0x000851c4) aid_dia3_listrow_size_ParamLimits

0xdf48,	// (0x000851c4) aid_dia3_listrow_size

0xdf56,	// (0x000851d2) dia3_keypad_fun_pane_ParamLimits

0xdf56,	// (0x000851d2) dia3_keypad_fun_pane

0xdf66,	// (0x000851e2) dia3_keypad_num_pane_ParamLimits

0xdf66,	// (0x000851e2) dia3_keypad_num_pane

0xdf76,	// (0x000851f2) dia3_listscroll_pane_ParamLimits

0xdf76,	// (0x000851f2) dia3_listscroll_pane

0xdf84,	// (0x00085200) dia3_numentry_pane_ParamLimits

0xdf84,	// (0x00085200) dia3_numentry_pane

0xdf92,	// (0x0008520e) dia3_list_pane

0xdf9d,	// (0x00085219) scroll_pane_cp12

0xe195,	// (0x00085411) bg_dia3_numentry_pane

0xdfa8,	// (0x00085224) dia3_numentry_pane_t1

0xdfb7,	// (0x00085233) cell_dia3_key_num_pane

0xdfbf,	// (0x0008523b) cell_dia3_key0_fun_pane_ParamLimits

0xdfbf,	// (0x0008523b) cell_dia3_key0_fun_pane

0xdfcc,	// (0x00085248) cell_dia3_key1_fun_pane_ParamLimits

0xdfcc,	// (0x00085248) cell_dia3_key1_fun_pane

0xdfd9,	// (0x00085255) dia3_listrow_pane

0x3a3c,	// (0x0007acb8) bg_dia3_numentry_pane_g1

0xe195,	// (0x00085411) bg_button_pane_cp21

0xdfe2,	// (0x0008525e) cell_dia3_key_num_pane_t1

0xdff0,	// (0x0008526c) cell_dia3_key_num_pane_t2

0xdfff,	// (0x0008527b) cell_dia3_key_num_pane_t3

0xe00e,	// (0x0008528a) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x000871b9) cell_dia3_key_num_pane_t

0xe195,	// (0x00085411) bg_button_pane_cp19

0xe01d,	// (0x00085299) cell_dia3_key0_fun_pane_g1

0xe195,	// (0x00085411) bg_button_pane_cp20

0xe025,	// (0x000852a1) cell_dia3_key1_fun_pane_g1

0xe02d,	// (0x000852a9) area_left_week_number_pane

0xd9ca,	// (0x00084c46) area_top_day_name_pane

0xe036,	// (0x000852b2) frame_month_view_pane

0xe040,	// (0x000852bc) grid_month_view_pane

0xe04a,	// (0x000852c6) cell_top_day_name_pane_ParamLimits

0xe04a,	// (0x000852c6) cell_top_day_name_pane

0xe064,	// (0x000852e0) cell_area_left_week_number_pane_ParamLimits

0xe064,	// (0x000852e0) cell_area_left_week_number_pane

0xe078,	// (0x000852f4) cell_month_view_pane_ParamLimits

0xe078,	// (0x000852f4) cell_month_view_pane

0xe095,	// (0x00085311) frm_month_g1

0xe09e,	// (0x0008531a) frm_month_g2

0xe0a8,	// (0x00085324) frm_month_g3

0xe0b2,	// (0x0008532e) frm_month_g4

0xe0bc,	// (0x00085338) frm_month_g5

0xe0c6,	// (0x00085342) frm_month_g6

0xe0d0,	// (0x0008534c) frm_month_g7

0xe0da,	// (0x00085356) frm_month_g8

0xe0e3,	// (0x0008535f) frm_month_g9

0xe0ec,	// (0x00085368) frm_month_g10

0xe0f5,	// (0x00085371) frm_month_g11

0xe0fe,	// (0x0008537a) frm_month_g12

0xe107,	// (0x00085383) frm_month_g13

0xe110,	// (0x0008538c) frm_month_g14

0xe119,	// (0x00085395) frm_month_g15

0xe124,	// (0x000853a0) frm_month_g16

0x000f,

0xff46,	// (0x000871c2) frm_month_g

0xe12f,	// (0x000853ab) cell_top_day_name_pane_t1

0xe13e,	// (0x000853ba) cell_area_left_week_number_pane_g1

0xe12f,	// (0x000853ab) cell_area_left_week_number_pane_t1

0xeef4,	// (0x00086170) cell_month_view_pane_g1

0xe146,	// (0x000853c2) cell_month_view_pane_t1

0xe195,	// (0x00085411) main_fps_pane

0x3ff1,	// (0x0007b26d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3ff1,	// (0x0007b26d) cmail_ddmenu_btn02_pane_cp1

0x400d,	// (0x0007b289) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x400d,	// (0x0007b289) cmail_ddmenu_btn02_pane_cp2

0xd8a7,	// (0x00084b23) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd8a7,	// (0x00084b23) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x000870ea) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x000870ea) cmail_ddmenu_btn02_pane_g

0xd8c5,	// (0x00084b41) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd8c5,	// (0x00084b41) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x000870ef) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x000870ef) cmail_ddmenu_btn02_pane_t

0xe155,	// (0x000853d1) fps_text_pane_ParamLimits

0xe155,	// (0x000853d1) fps_text_pane

0xe162,	// (0x000853de) main_fps_pane_g1_ParamLimits

0xe162,	// (0x000853de) main_fps_pane_g1

0xe170,	// (0x000853ec) wait_bar_pane_cp010_ParamLimits

0xe170,	// (0x000853ec) wait_bar_pane_cp010

0xe17c,	// (0x000853f8) fps_text_pane_t1_ParamLimits

0xe17c,	// (0x000853f8) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
