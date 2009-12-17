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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006cf2a };

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
0x2586,	// (0x0006f4b0) Screen

0x2592,	// (0x0006f4bc) application_window

0x25ec,	// (0x0006f516) area_bottom_pane_ParamLimits

0x25ec,	// (0x0006f516) area_bottom_pane

0x2649,	// (0x0006f573) area_top_pane_ParamLimits

0x2649,	// (0x0006f573) area_top_pane

0x26a6,	// (0x0006f5d0) call_video_uplink_pane_ParamLimits

0x26a6,	// (0x0006f5d0) call_video_uplink_pane

0x26d7,	// (0x0006f601) main_pane_ParamLimits

0x26d7,	// (0x0006f601) main_pane

0x5d81,	// (0x00072cab) context_pane

0x5d94,	// (0x00072cbe) navi_pane

0x5dbc,	// (0x00072ce6) popup_cale_events_window_ParamLimits

0x5dbc,	// (0x00072ce6) popup_cale_events_window

0x5dd4,	// (0x00072cfe) popup_mup_playback_window

0x5ddc,	// (0x00072d06) signal_pane

0xaeec,	// (0x00077e16) main_browser_pane

0xbc98,	// (0x00078bc2) main_burst_pane

0x5a86,	// (0x000729b0) main_calc_pane

0xbc98,	// (0x00078bc2) main_cale_day_pane

0xaeec,	// (0x00077e16) main_cale_month_pane

0xbc98,	// (0x00078bc2) main_cale_week_pane

0xbc98,	// (0x00078bc2) main_call_pane

0x2cc7,	// (0x0006fbf1) main_call_poc_pane

0xbc98,	// (0x00078bc2) main_camera_pane

0xbc98,	// (0x00078bc2) main_chi_dic_pane

0xbb1d,	// (0x00078a47) main_clock_pane

0x2cc7,	// (0x0006fbf1) main_fmradio_pane

0xbc98,	// (0x00078bc2) main_graph_messa_pane

0x2cc7,	// (0x0006fbf1) main_help_pane

0xaeec,	// (0x00077e16) main_im_pane

0xadf3,	// (0x00077d1d) main_image_pane_ParamLimits

0xadf3,	// (0x00077d1d) main_image_pane

0x2cc7,	// (0x0006fbf1) main_location2_pane

0xbc98,	// (0x00078bc2) main_location_pane

0x2cc7,	// (0x0006fbf1) main_messa_pane

0x2cc7,	// (0x0006fbf1) main_mp2_pane

0xbc98,	// (0x00078bc2) main_mp_pane

0x2cc7,	// (0x0006fbf1) main_msg_pane

0x2cc7,	// (0x0006fbf1) main_mup_eq_pane

0x2cc7,	// (0x0006fbf1) main_mup_pane

0xbc98,	// (0x00078bc2) main_notes_pane

0x2cc7,	// (0x0006fbf1) main_pec_pane

0x2cc7,	// (0x0006fbf1) main_phob_pane

0x2cc7,	// (0x0006fbf1) main_pinb_pane

0x2cc7,	// (0x0006fbf1) main_postcard_pane

0x2cc7,	// (0x0006fbf1) main_qdial_pane

0xbc98,	// (0x00078bc2) main_skin_pane

0x2cc7,	// (0x0006fbf1) main_smil2_pane

0xbc98,	// (0x00078bc2) main_smil_pane

0xbc98,	// (0x00078bc2) main_video_pane

0xbc98,	// (0x00078bc2) main_video_tele_pane

0xadf3,	// (0x00077d1d) main_viewer_pane_ParamLimits

0xadf3,	// (0x00077d1d) main_viewer_pane

0xbc98,	// (0x00078bc2) main_vorec_pane

0x5af0,	// (0x00072a1a) popup_blid_sat_info_window_ParamLimits

0x5af0,	// (0x00072a1a) popup_blid_sat_info_window

0x5b52,	// (0x00072a7c) popup_dyc_status_message_window_ParamLimits

0x5b52,	// (0x00072a7c) popup_dyc_status_message_window

0x5b6c,	// (0x00072a96) popup_grid_large_graphic_window_ParamLimits

0x5b6c,	// (0x00072a96) popup_grid_large_graphic_window

0x5c43,	// (0x00072b6d) popup_loc_request_window_ParamLimits

0x5c43,	// (0x00072b6d) popup_loc_request_window

0x5d59,	// (0x00072c83) popup_wml_address_window_ParamLimits

0x5d59,	// (0x00072c83) popup_wml_address_window

0x5887,	// (0x000727b1) call_muted_g1

0x5334,	// (0x0007225e) popup_call_audio_conf_window_ParamLimits

0x5334,	// (0x0007225e) popup_call_audio_conf_window

0x589b,	// (0x000727c5) popup_call_audio_first_window_ParamLimits

0x589b,	// (0x000727c5) popup_call_audio_first_window

0x5911,	// (0x0007283b) popup_call_audio_in_window_ParamLimits

0x5911,	// (0x0007283b) popup_call_audio_in_window

0x594d,	// (0x00072877) popup_call_audio_out_window_ParamLimits

0x594d,	// (0x00072877) popup_call_audio_out_window

0x5987,	// (0x000728b1) popup_call_audio_second_window_ParamLimits

0x5987,	// (0x000728b1) popup_call_audio_second_window

0x59dd,	// (0x00072907) popup_call_audio_wait_window_ParamLimits

0x59dd,	// (0x00072907) popup_call_audio_wait_window

0x5a12,	// (0x0007293c) popup_number_entry_window_ParamLimits

0x5a12,	// (0x0007293c) popup_number_entry_window

0x285c,	// (0x0006f786) bg_popup_call_pane_cp05_ParamLimits

0x285c,	// (0x0006f786) bg_popup_call_pane_cp05

0x287c,	// (0x0006f7a6) popup_number_entry_window_t1

0x288f,	// (0x0006f7b9) popup_number_entry_window_t2

0x28a1,	// (0x0006f7cb) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0007c059) popup_number_entry_window_t

0x28e7,	// (0x0006f811) text_title_cp2

0x28fa,	// (0x0006f824) bg_popup_call_pane_cp_ParamLimits

0x28fa,	// (0x0006f824) bg_popup_call_pane_cp

0x2908,	// (0x0006f832) call_thumbnail_pane

0x2910,	// (0x0006f83a) popup_call_audio_in_window_g1_ParamLimits

0x2910,	// (0x0006f83a) popup_call_audio_in_window_g1

0x291c,	// (0x0006f846) popup_call_audio_in_window_g2_ParamLimits

0x291c,	// (0x0006f846) popup_call_audio_in_window_g2

0x2928,	// (0x0006f852) popup_call_audio_in_window_g3_ParamLimits

0x2928,	// (0x0006f852) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0007c062) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0007c062) popup_call_audio_in_window_g

0x2934,	// (0x0006f85e) popup_call_audio_in_window_t1_ParamLimits

0x2934,	// (0x0006f85e) popup_call_audio_in_window_t1

0x2950,	// (0x0006f87a) popup_call_audio_in_window_t2_ParamLimits

0x2950,	// (0x0006f87a) popup_call_audio_in_window_t2

0x296c,	// (0x0006f896) popup_call_audio_in_window_t3_ParamLimits

0x296c,	// (0x0006f896) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0007c069) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0007c069) popup_call_audio_in_window_t

0x28fa,	// (0x0006f824) bg_popup_call_pane_cp01_ParamLimits

0x28fa,	// (0x0006f824) bg_popup_call_pane_cp01

0x2908,	// (0x0006f832) call_thumbnail_pane_cp02

0x297f,	// (0x0006f8a9) call_type_pane_cp022

0x2987,	// (0x0006f8b1) popup_call_audio_out_window_g1_ParamLimits

0x2987,	// (0x0006f8b1) popup_call_audio_out_window_g1

0x2999,	// (0x0006f8c3) popup_call_audio_out_window_g2_ParamLimits

0x2999,	// (0x0006f8c3) popup_call_audio_out_window_g2

0x29a5,	// (0x0006f8cf) popup_call_audio_out_window_g3_ParamLimits

0x29a5,	// (0x0006f8cf) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0007c070) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0007c070) popup_call_audio_out_window_g

0x29b7,	// (0x0006f8e1) popup_call_audio_out_window_t1_ParamLimits

0x29b7,	// (0x0006f8e1) popup_call_audio_out_window_t1

0x29cf,	// (0x0006f8f9) popup_call_audio_out_window_t2_ParamLimits

0x29cf,	// (0x0006f8f9) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0007c077) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0007c077) popup_call_audio_out_window_t

0x29e4,	// (0x0006f90e) bg_popup_call_pane_ParamLimits

0x29e4,	// (0x0006f90e) bg_popup_call_pane

0x2a68,	// (0x0006f992) call_thumbnail_pane_cp_ParamLimits

0x2a68,	// (0x0006f992) call_thumbnail_pane_cp

0x2a8c,	// (0x0006f9b6) call_type_pane_cp01_ParamLimits

0x2a8c,	// (0x0006f9b6) call_type_pane_cp01

0x2ad0,	// (0x0006f9fa) popup_call_audio_first_window_g1_ParamLimits

0x2ad0,	// (0x0006f9fa) popup_call_audio_first_window_g1

0x2b1c,	// (0x0006fa46) popup_call_audio_first_window_g2_ParamLimits

0x2b1c,	// (0x0006fa46) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0007c07c) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0007c07c) popup_call_audio_first_window_g

0x2b60,	// (0x0006fa8a) popup_call_audio_first_window_t1_ParamLimits

0x2b60,	// (0x0006fa8a) popup_call_audio_first_window_t1

0x2c0c,	// (0x0006fb36) popup_call_audio_first_window_t4_ParamLimits

0x2c0c,	// (0x0006fb36) popup_call_audio_first_window_t4

0x2c98,	// (0x0006fbc2) popup_call_audio_first_window_t5_ParamLimits

0x2c98,	// (0x0006fbc2) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0007c081) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0007c081) popup_call_audio_first_window_t

0x2cc7,	// (0x0006fbf1) bg_popup_call_pane_cp02

0x2cd1,	// (0x0006fbfb) call_type_pane_cp023

0x2cd9,	// (0x0006fc03) popup_call_audio_wait_window_g1

0x2ce1,	// (0x0006fc0b) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0007c088) popup_call_audio_wait_window_g

0x2ce9,	// (0x0006fc13) popup_call_audio_wait_window_t3

0x2cf7,	// (0x0006fc21) bg_popup_call_pane_cp03_ParamLimits

0x2cf7,	// (0x0006fc21) bg_popup_call_pane_cp03

0x2d57,	// (0x0006fc81) call_thumbnail_pane_cp011_ParamLimits

0x2d57,	// (0x0006fc81) call_thumbnail_pane_cp011

0x2d63,	// (0x0006fc8d) call_type_pane_cp034_ParamLimits

0x2d63,	// (0x0006fc8d) call_type_pane_cp034

0x2d9f,	// (0x0006fcc9) popup_call_audio_second_window_g1_ParamLimits

0x2d9f,	// (0x0006fcc9) popup_call_audio_second_window_g1

0x2ddb,	// (0x0006fd05) popup_call_audio_second_window_g2_ParamLimits

0x2ddb,	// (0x0006fd05) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0007c08d) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0007c08d) popup_call_audio_second_window_g

0x2e17,	// (0x0006fd41) popup_call_audio_second_window_t1_ParamLimits

0x2e17,	// (0x0006fd41) popup_call_audio_second_window_t1

0x2e98,	// (0x0006fdc2) popup_call_audio_second_window_t2_ParamLimits

0x2e98,	// (0x0006fdc2) popup_call_audio_second_window_t2

0x2ece,	// (0x0006fdf8) popup_call_audio_second_window_t3_ParamLimits

0x2ece,	// (0x0006fdf8) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0007c092) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0007c092) popup_call_audio_second_window_t

0x2cc7,	// (0x0006fbf1) bg_popup_call_pane_cp04

0x2f04,	// (0x0006fe2e) list_conf_pane

0x2f0c,	// (0x0006fe36) popup_call_audio_conf_window_t1

0x2f1a,	// (0x0006fe44) call_thumbnail_pane_g1

0xadf3,	// (0x00077d1d) bg_pinb_pane_ParamLimits

0xadf3,	// (0x00077d1d) bg_pinb_pane

0xae01,	// (0x00077d2b) find_pinb_pane

0xae0a,	// (0x00077d34) listscroll_pinb_pane_ParamLimits

0xae0a,	// (0x00077d34) listscroll_pinb_pane

0xae19,	// (0x00077d43) pinb_bg_pane_g1

0x2f22,	// (0x0006fe4c) pinb_bg_pane_g2

0x2f2e,	// (0x0006fe58) pinb_bg_pane_g3

0x2f3a,	// (0x0006fe64) pinb_bg_pane_g4

0x2f46,	// (0x0006fe70) pinb_bg_pane_g5

0x2f52,	// (0x0006fe7c) pinb_bg_pane_g6

0x2f5d,	// (0x0006fe87) pinb_bg_pane_g7

0x2f68,	// (0x0006fe92) pinb_bg_pane_g8

0x2f73,	// (0x0006fe9d) pinb_bg_pane_g9

0x2f7d,	// (0x0006fea7) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0007c099) pinb_bg_pane_g

0x2f9a,	// (0x0006fec4) grid_pinb_pane

0x2fa3,	// (0x0006fecd) list_pinb_pane

0x2fac,	// (0x0006fed6) scroll_pane_cp01_ParamLimits

0x2fac,	// (0x0006fed6) scroll_pane_cp01

0xae23,	// (0x00077d4d) find_pinb_pane_g1_ParamLimits

0xae23,	// (0x00077d4d) find_pinb_pane_g1

0xae3b,	// (0x00077d65) find_pinb_pane_t1

0xae4d,	// (0x00077d77) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0007c0b3) find_pinb_pane_t

0xae62,	// (0x00077d8c) input_focus_pane_cp01_ParamLimits

0xae62,	// (0x00077d8c) input_focus_pane_cp01

0x2fbe,	// (0x0006fee8) cell_pinb_pane_ParamLimits

0x2fbe,	// (0x0006fee8) cell_pinb_pane

0x2fe7,	// (0x0006ff11) cell_pinb_pane_g1_ParamLimits

0x2fe7,	// (0x0006ff11) cell_pinb_pane_g1

0x2ff7,	// (0x0006ff21) cell_pinb_pane_g2_ParamLimits

0x2ff7,	// (0x0006ff21) cell_pinb_pane_g2

0xae6e,	// (0x00077d98) cell_pinb_pane_g3_ParamLimits

0xae6e,	// (0x00077d98) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0007c0b8) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0007c0b8) cell_pinb_pane_g

0x2cc7,	// (0x0006fbf1) grid_highlight_pane_cp01

0x3003,	// (0x0006ff2d) list_pinb_item_pane_ParamLimits

0x3003,	// (0x0006ff2d) list_pinb_item_pane

0x2cc7,	// (0x0006fbf1) list_highlight_pane_cp02

0x3015,	// (0x0006ff3f) list_pinb_item_pane_g1_ParamLimits

0x3015,	// (0x0006ff3f) list_pinb_item_pane_g1

0xae7a,	// (0x00077da4) list_pinb_item_pane_g2_ParamLimits

0xae7a,	// (0x00077da4) list_pinb_item_pane_g2

0x3022,	// (0x0006ff4c) list_pinb_item_pane_g3_ParamLimits

0x3022,	// (0x0006ff4c) list_pinb_item_pane_g3

0x3033,	// (0x0006ff5d) list_pinb_item_pane_g4_ParamLimits

0x3033,	// (0x0006ff5d) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0007c0bf) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0007c0bf) list_pinb_item_pane_g

0x303f,	// (0x0006ff69) list_pinb_item_pane_t1_ParamLimits

0x303f,	// (0x0006ff69) list_pinb_item_pane_t1

0x3074,	// (0x0006ff9e) calc_display_pane

0x309a,	// (0x0006ffc4) calc_paper_pane

0x30bb,	// (0x0006ffe5) grid_calc_pane

0x2cc7,	// (0x0006fbf1) bg_list_pane_cp01

0x30e3,	// (0x0007000d) clock_g1

0x30eb,	// (0x00070015) clock_g2

0x0001,

0xf19e,	// (0x0007c0c8) clock_g

0x30f3,	// (0x0007001d) clock_t1_ParamLimits

0x30f3,	// (0x0007001d) clock_t1

0x3108,	// (0x00070032) clock_t2_ParamLimits

0x3108,	// (0x00070032) clock_t2

0x311a,	// (0x00070044) clock_t3_ParamLimits

0x311a,	// (0x00070044) clock_t3

0x312c,	// (0x00070056) clock_t4_ParamLimits

0x312c,	// (0x00070056) clock_t4

0x313e,	// (0x00070068) clock_t5_ParamLimits

0x313e,	// (0x00070068) clock_t5

0x3153,	// (0x0007007d) clock_t6_ParamLimits

0x3153,	// (0x0007007d) clock_t6

0x3165,	// (0x0007008f) clock_t7_ParamLimits

0x3165,	// (0x0007008f) clock_t7

0x3177,	// (0x000700a1) clock_t8_ParamLimits

0x3177,	// (0x000700a1) clock_t8

0x318b,	// (0x000700b5) clock_t9_ParamLimits

0x318b,	// (0x000700b5) clock_t9

0x0008,

0xf1a3,	// (0x0007c0cd) clock_t_ParamLimits

0xf1a3,	// (0x0007c0cd) clock_t

0xae8e,	// (0x00077db8) popup_clock_analogue_window_cp02

0xae8e,	// (0x00077db8) popup_clock_digital_window_cp01

0xae96,	// (0x00077dc0) listscroll_help_pane

0x2cc7,	// (0x0006fbf1) phob_pre_status_pane

0xaea0,	// (0x00077dca) grid_qdial_pane

0x2cc7,	// (0x0006fbf1) listscroll_mce_pane

0xaeaa,	// (0x00077dd4) bg_notes_pane

0xaeb4,	// (0x00077dde) list_notes_pane

0x319f,	// (0x000700c9) scroll_pane_cp06

0xaebe,	// (0x00077de8) bg_calc_paper_pane

0xaed2,	// (0x00077dfc) list_calc_pane

0xaeec,	// (0x00077e16) bg_calc_display_pane

0x31aa,	// (0x000700d4) calc_display_pane_t1

0x31bc,	// (0x000700e6) calc_display_pane_t2

0xaef8,	// (0x00077e22) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0007c0e0) calc_display_pane_t

0x31ce,	// (0x000700f8) cell_calc_pane_ParamLimits

0x31ce,	// (0x000700f8) cell_calc_pane

0xaf0a,	// (0x00077e34) bg_calc_paper_pane_g1

0xaf16,	// (0x00077e40) bg_calc_paper_pane_g2

0xaf22,	// (0x00077e4c) bg_calc_paper_pane_g3

0xaf2e,	// (0x00077e58) bg_calc_paper_pane_g4

0xaf3a,	// (0x00077e64) bg_calc_paper_pane_g5

0x3203,	// (0x0007012d) bg_calc_paper_pane_g6

0x3212,	// (0x0007013c) bg_calc_paper_pane_g7

0x3221,	// (0x0007014b) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0007c0e7) bg_calc_paper_pane_g

0x3234,	// (0x0007015e) calc_bg_paper_pane_g9

0x3247,	// (0x00070171) list_calc_item_pane_ParamLimits

0x3247,	// (0x00070171) list_calc_item_pane

0xaf46,	// (0x00077e70) list_calc_item_pane_g1

0xaf53,	// (0x00077e7d) list_calc_item_pane_t1_ParamLimits

0xaf53,	// (0x00077e7d) list_calc_item_pane_t1

0x325a,	// (0x00070184) list_calc_item_pane_t2_ParamLimits

0x325a,	// (0x00070184) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0007c0f8) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0007c0f8) list_calc_item_pane_t

0xaf65,	// (0x00077e8f) cell_calc_pane_g1

0xaf6f,	// (0x00077e99) grid_highlight_pane_cp02

0x328e,	// (0x000701b8) bg_calc_display_pane_g1

0x3297,	// (0x000701c1) bg_calc_display_pane_g2

0x32a1,	// (0x000701cb) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0007c102) bg_calc_display_pane_g

0x32aa,	// (0x000701d4) cell_qdial_pane_ParamLimits

0x32aa,	// (0x000701d4) cell_qdial_pane

0x32be,	// (0x000701e8) cell_qdial_pane_g1_ParamLimits

0x32be,	// (0x000701e8) cell_qdial_pane_g1

0x32d4,	// (0x000701fe) cell_qdial_pane_g2_ParamLimits

0x32d4,	// (0x000701fe) cell_qdial_pane_g2

0xaf91,	// (0x00077ebb) cell_qdial_pane_g3_ParamLimits

0xaf91,	// (0x00077ebb) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0007c109) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0007c109) cell_qdial_pane_g

0x32fb,	// (0x00070225) cell_qdial_pane_t1_ParamLimits

0x32fb,	// (0x00070225) cell_qdial_pane_t1

0x3313,	// (0x0007023d) cell_qdial_pane_t2_ParamLimits

0x3313,	// (0x0007023d) cell_qdial_pane_t2

0x3326,	// (0x00070250) cell_qdial_pane_t3_ParamLimits

0x3326,	// (0x00070250) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0007c112) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0007c112) cell_qdial_pane_t

0x2cc7,	// (0x0006fbf1) grid_highlight_pane_cp04

0xaf9d,	// (0x00077ec7) thumbnail_qdial_pane_ParamLimits

0xaf9d,	// (0x00077ec7) thumbnail_qdial_pane

0xaff9,	// (0x00077f23) list_help_pane

0xb002,	// (0x00077f2c) scroll_pane_cp02

0x3339,	// (0x00070263) help_list_pane_t1_ParamLimits

0x3339,	// (0x00070263) help_list_pane_t1

0xb00b,	// (0x00077f35) bg_notes_pane_g2

0xb013,	// (0x00077f3d) bg_notes_pane_g3

0xb01b,	// (0x00077f45) notes_bg_pane_g1

0xb023,	// (0x00077f4d) notes_bg_pane_g4

0xb02b,	// (0x00077f55) notes_bg_pane_g5

0xb033,	// (0x00077f5d) notes_bg_pane_g6

0xb03b,	// (0x00077f65) notes_bg_pane_g7

0xb043,	// (0x00077f6d) notes_bg_pane_g8

0xb04b,	// (0x00077f75) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0007c130) notes_bg_pane_g

0x3356,	// (0x00070280) list_notes_text_pane_ParamLimits

0x3356,	// (0x00070280) list_notes_text_pane

0xb053,	// (0x00077f7d) list_notes_text_pane_g1

0x1c4c,	// (0x0006eb76) list_notes_text_pane_t1

0xaeec,	// (0x00077e16) listscroll_cale_week_pane

0x3388,	// (0x000702b2) bg_cale_heading_pane

0xb06d,	// (0x00077f97) bg_cale_pane_cp01

0x339c,	// (0x000702c6) cale_week_corner_pane

0x33b2,	// (0x000702dc) cale_week_day_heading_pane

0x33c6,	// (0x000702f0) cale_week_scroll_pane_g1

0x33d7,	// (0x00070301) cale_week_scroll_pane_g2

0x33e8,	// (0x00070312) cale_week_scroll_pane_g3

0x33f9,	// (0x00070323) cale_week_scroll_pane_g4

0x340a,	// (0x00070334) cale_week_scroll_pane_g5

0x341b,	// (0x00070345) cale_week_scroll_pane_g6

0x342c,	// (0x00070356) cale_week_scroll_pane_g7

0x343d,	// (0x00070367) cale_week_scroll_pane_g8

0x344e,	// (0x00070378) cale_week_scroll_pane_g9

0x345f,	// (0x00070389) cale_week_scroll_pane_g10

0x3470,	// (0x0007039a) cale_week_scroll_pane_g11

0x3481,	// (0x000703ab) cale_week_scroll_pane_g12

0x3492,	// (0x000703bc) cale_week_scroll_pane_g13

0x34a3,	// (0x000703cd) cale_week_scroll_pane_g14

0x34b4,	// (0x000703de) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0007c13f) cale_week_scroll_pane_g

0x34c5,	// (0x000703ef) cale_week_time_pane

0x34d6,	// (0x00070400) grid_cale_week_pane

0x34e9,	// (0x00070413) scroll_pane_cp08

0x3503,	// (0x0007042d) cell_cale_week_pane_ParamLimits

0x3503,	// (0x0007042d) cell_cale_week_pane

0x353f,	// (0x00070469) cale_week_day_heading_pane_t1

0x356c,	// (0x00070496) cale_week_day_heading_pane_t2

0x3599,	// (0x000704c3) cale_week_day_heading_pane_t3

0x35c6,	// (0x000704f0) cale_week_day_heading_pane_t4

0x35f3,	// (0x0007051d) cale_week_day_heading_pane_t5

0x3620,	// (0x0007054a) cale_week_day_heading_pane_t6

0x364d,	// (0x00070577) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0007c15e) cale_week_day_heading_pane_t

0xb098,	// (0x00077fc2) bg_cale_side_pane

0x367a,	// (0x000705a4) cale_week_time_pane_t1

0x3692,	// (0x000705bc) cale_week_time_pane_t2

0x36aa,	// (0x000705d4) cale_week_time_pane_t3

0x36c2,	// (0x000705ec) cale_week_time_pane_t4

0x36da,	// (0x00070604) cale_week_time_pane_t5

0x36f2,	// (0x0007061c) cale_week_time_pane_t6

0x370a,	// (0x00070634) cale_week_time_pane_t7

0x3722,	// (0x0007064c) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0007c16d) cale_week_time_pane_t

0x373a,	// (0x00070664) cell_cale_week_pane_g2

0x3753,	// (0x0007067d) cell_cale_week_pane_g3_ParamLimits

0x3753,	// (0x0007067d) cell_cale_week_pane_g3

0xb0a6,	// (0x00077fd0) grid_highlight_pane_cp07

0xb0ae,	// (0x00077fd8) listscroll_gms_pane

0xb0b8,	// (0x00077fe2) grid_gms_pane

0xb0c1,	// (0x00077feb) listscroll_gms_pane_g1

0xb0c9,	// (0x00077ff3) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0007c17e) listscroll_gms_pane_g

0x376b,	// (0x00070695) scroll_pane_cp010

0x3776,	// (0x000706a0) cell_gms_pane_ParamLimits

0x3776,	// (0x000706a0) cell_gms_pane

0x3789,	// (0x000706b3) cell_gms_pane_g1

0xb0d1,	// (0x00077ffb) cell_gms_pane_g2

0xb0d9,	// (0x00078003) cell_gms_pane_g3

0xb0e2,	// (0x0007800c) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0007c183) cell_gms_pane_g

0xb0eb,	// (0x00078015) grid_highlight_pane_cp09

0x5811,	// (0x0007273b) phob_pre_status_pane_g1

0x5819,	// (0x00072743) phob_pre_status_pane_g2

0x5821,	// (0x0007274b) phob_pre_status_pane_g3

0x5829,	// (0x00072753) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0007c572) phob_pre_status_pane_g

0x5839,	// (0x00072763) phob_pre_status_pane_t1

0x5847,	// (0x00072771) phob_pre_status_pane_t2

0x5857,	// (0x00072781) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0007c57d) phob_pre_status_pane_t

0x2cc7,	// (0x0006fbf1) bg_list_pane_cp05

0x3799,	// (0x000706c3) grid_vorec_pane

0xb0f3,	// (0x0007801d) vorec_t1

0xb101,	// (0x0007802b) vorec_t2

0xb10f,	// (0x00078039) vorec_t3

0xb11d,	// (0x00078047) vorec_t4

0xb12b,	// (0x00078055) vorec_t5

0xb139,	// (0x00078063) vorec_t6

0x0006,

0xf262,	// (0x0007c18c) vorec_t

0xb155,	// (0x0007807f) wait_bar_pane_cp01

0x37a1,	// (0x000706cb) cell_vorec_pane_ParamLimits

0x37a1,	// (0x000706cb) cell_vorec_pane

0xb15d,	// (0x00078087) cell_vorec_pane_g1

0x2cc7,	// (0x0006fbf1) grid_highlight_pane_cp05

0x37cc,	// (0x000706f6) cams_zoom_pane

0x37db,	// (0x00070705) image_vga_pane

0x37f5,	// (0x0007071f) main_camera_pane_g1

0x3807,	// (0x00070731) main_camera_pane_g2

0x3817,	// (0x00070741) main_camera_pane_g3

0x3827,	// (0x00070751) main_camera_pane_g4

0x3837,	// (0x00070761) main_camera_pane_g5

0x3847,	// (0x00070771) main_camera_pane_g6

0x3859,	// (0x00070783) main_camera_pane_g7

0x0007,

0xf271,	// (0x0007c19b) main_camera_pane_g

0x3869,	// (0x00070793) main_camera_pane_t1

0x387f,	// (0x000707a9) main_camera_pane_t2

0x0001,

0xf282,	// (0x0007c1ac) main_camera_pane_t

0x38b9,	// (0x000707e3) cams_zoom_pane_cp_ParamLimits

0x38b9,	// (0x000707e3) cams_zoom_pane_cp

0x38e1,	// (0x0007080b) image_cif_pane_ParamLimits

0x38e1,	// (0x0007080b) image_cif_pane

0x391c,	// (0x00070846) image_subqcif_pane

0x3924,	// (0x0007084e) main_video_pane_g1_ParamLimits

0x3924,	// (0x0007084e) main_video_pane_g1

0x3948,	// (0x00070872) main_video_pane_g2_ParamLimits

0x3948,	// (0x00070872) main_video_pane_g2

0x397c,	// (0x000708a6) main_video_pane_g3_ParamLimits

0x397c,	// (0x000708a6) main_video_pane_g3

0x39aa,	// (0x000708d4) main_video_pane_g4_ParamLimits

0x39aa,	// (0x000708d4) main_video_pane_g4

0x39d8,	// (0x00070902) main_video_pane_g5_ParamLimits

0x39d8,	// (0x00070902) main_video_pane_g5

0xb173,	// (0x0007809d) main_video_pane_g6_ParamLimits

0xb173,	// (0x0007809d) main_video_pane_g6

0x0006,

0xf287,	// (0x0007c1b1) main_video_pane_g_ParamLimits

0xf287,	// (0x0007c1b1) main_video_pane_g

0x3a05,	// (0x0007092f) main_video_pane_t1_ParamLimits

0x3a05,	// (0x0007092f) main_video_pane_t1

0xb18d,	// (0x000780b7) cams_zoom_pane_g1

0xb196,	// (0x000780c0) cams_zoom_pane_g2

0xb19f,	// (0x000780c9) cams_zoom_pane_g3

0xb1a8,	// (0x000780d2) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0007c1c0) cams_zoom_pane_g

0x3a62,	// (0x0007098c) grid_cams_pane

0x3a7c,	// (0x000709a6) linegrid_cams_pane

0x3a90,	// (0x000709ba) cell_cams_pane_ParamLimits

0x3a90,	// (0x000709ba) cell_cams_pane

0xb1b1,	// (0x000780db) cams_burst_image_pane

0xb1b9,	// (0x000780e3) cell_cams_pane_g1

0x2cc7,	// (0x0006fbf1) grid_highlight_pane_cp03

0xaf65,	// (0x00077e8f) mp_bg_pane_g1

0x2cc7,	// (0x0006fbf1) bg_list_pane_cp03

0x5746,	// (0x00072670) bg_mp_pane

0x574e,	// (0x00072678) grid_mp_pane

0x5756,	// (0x00072680) media_player_g1

0x575e,	// (0x00072688) media_player_t1

0x576c,	// (0x00072696) media_player_t2

0x577a,	// (0x000726a4) media_player_t3

0x5788,	// (0x000726b2) media_player_t4

0x5796,	// (0x000726c0) media_player_t5

0x57a4,	// (0x000726ce) media_player_t6

0x57b2,	// (0x000726dc) media_player_t7

0x0006,

0xf632,	// (0x0007c55c) media_player_t

0x57c0,	// (0x000726ea) wait_bar_pane_cp02

0xf617,	// (0x0007c541) main_usb_pane_t

0x5808,	// (0x00072732) cell_mp_pane

0xaf65,	// (0x00077e8f) cell_mp_pane_g1

0x2cc7,	// (0x0006fbf1) grid_highlight_pane_cp06

0xb27e,	// (0x000781a8) grid_skin_colour_pane

0xb286,	// (0x000781b0) list_highlight_pane_cp03

0x3ab0,	// (0x000709da) skin_g1

0xb28e,	// (0x000781b8) skin_t1

0xb29d,	// (0x000781c7) skin_t2

0x0001,

0xf2cb,	// (0x0007c1f5) skin_t

0x3ab8,	// (0x000709e2) cell_skin_colour_pane_ParamLimits

0x3ab8,	// (0x000709e2) cell_skin_colour_pane

0xb2ab,	// (0x000781d5) cell_skin_colour_pane_g1

0x3b1c,	// (0x00070a46) call_video_g1_ParamLimits

0x3b1c,	// (0x00070a46) call_video_g1

0x3b38,	// (0x00070a62) call_video_g2_ParamLimits

0x3b38,	// (0x00070a62) call_video_g2

0x0001,

0xf2d0,	// (0x0007c1fa) call_video_g_ParamLimits

0xf2d0,	// (0x0007c1fa) call_video_g

0x3b72,	// (0x00070a9c) call_video_uplink_pane_cp1_ParamLimits

0x3b72,	// (0x00070a9c) call_video_uplink_pane_cp1

0xb2c5,	// (0x000781ef) call_video_uplink_pane_cp2

0x3bf0,	// (0x00070b1a) video_down_crop_pane_ParamLimits

0x3bf0,	// (0x00070b1a) video_down_crop_pane

0x3cc6,	// (0x00070bf0) video_down_pane_ParamLimits

0x3cc6,	// (0x00070bf0) video_down_pane

0xb2cd,	// (0x000781f7) video_down_subqcif_pane_ParamLimits

0xb2cd,	// (0x000781f7) video_down_subqcif_pane

0xb2e5,	// (0x0007820f) video_down_subqcif_pane_cp_ParamLimits

0xb2e5,	// (0x0007820f) video_down_subqcif_pane_cp

0xb309,	// (0x00078233) im_reading_pane_ParamLimits

0xb309,	// (0x00078233) im_reading_pane

0x3d97,	// (0x00070cc1) im_writing_pane_ParamLimits

0x3d97,	// (0x00070cc1) im_writing_pane

0x3dad,	// (0x00070cd7) im_reading_pane_t1

0xb323,	// (0x0007824d) list_im_pane

0xb334,	// (0x0007825e) scroll_pane_cp07

0x3de6,	// (0x00070d10) im_writing_pane_t1_ParamLimits

0x3de6,	// (0x00070d10) im_writing_pane_t1

0xb34d,	// (0x00078277) im_writing_pane_t2_ParamLimits

0xb34d,	// (0x00078277) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0007c204) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0007c204) im_writing_pane_t

0x2cc7,	// (0x0006fbf1) input_focus_pane_cp04

0x2cc7,	// (0x0006fbf1) input_focus_pane_cp05

0x3dfb,	// (0x00070d25) list_im_single_pane_ParamLimits

0x3dfb,	// (0x00070d25) list_im_single_pane

0x3e0f,	// (0x00070d39) list_single_im_pane_t1

0x57c8,	// (0x000726f2) blid_accuracy_pane

0x57d0,	// (0x000726fa) blid_compass_pane

0x57da,	// (0x00072704) main_location_t1

0x57ea,	// (0x00072714) main_location_t2

0x57fa,	// (0x00072724) main_location_t3

0x0002,

0xf641,	// (0x0007c56b) main_location_t

0x2cc7,	// (0x0006fbf1) aid_levels_location

0xaf65,	// (0x00077e8f) blid_accuracy_pane_g1

0xaf65,	// (0x00077e8f) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0007c266) blid_accuracy_pane_g

0xb395,	// (0x000782bf) wml_content_pane

0xb3d3,	// (0x000782fd) wml_button_pane_ParamLimits

0xb3d3,	// (0x000782fd) wml_button_pane

0x3e1e,	// (0x00070d48) wml_list_single_large_pane_ParamLimits

0x3e1e,	// (0x00070d48) wml_list_single_large_pane

0x3e33,	// (0x00070d5d) wml_list_single_medium_pane_ParamLimits

0x3e33,	// (0x00070d5d) wml_list_single_medium_pane

0x3e49,	// (0x00070d73) wml_list_single_small_pane_ParamLimits

0x3e49,	// (0x00070d73) wml_list_single_small_pane

0xb3e7,	// (0x00078311) wml_selection_box_pane_ParamLimits

0xb3e7,	// (0x00078311) wml_selection_box_pane

0xb3fa,	// (0x00078324) wml_list_single_pane_t1

0xb409,	// (0x00078333) wml_list_single_medium_pane_t1

0xb418,	// (0x00078342) wml_list_single_large_pane_t1

0xb427,	// (0x00078351) input_focus_pane_cp02_ParamLimits

0xb427,	// (0x00078351) input_focus_pane_cp02

0xb43a,	// (0x00078364) wml_selection_box_pane_g1

0xb443,	// (0x0007836d) wml_selection_box_pane_t1_ParamLimits

0xb443,	// (0x0007836d) wml_selection_box_pane_t1

0xadf3,	// (0x00077d1d) bg_wml_button_pane_ParamLimits

0xadf3,	// (0x00077d1d) bg_wml_button_pane

0xb45b,	// (0x00078385) wml_button_pane_g1

0xb463,	// (0x0007838d) wml_button_pane_t1

0xb45b,	// (0x00078385) wml_button_bg_pane_g1

0xb473,	// (0x0007839d) wml_button_bg_pane_g2

0xb47b,	// (0x000783a5) wml_button_bg_pane_g3

0xb483,	// (0x000783ad) wml_button_bg_pane_g4

0xb48b,	// (0x000783b5) wml_button_bg_pane_g5

0xb493,	// (0x000783bd) wml_button_bg_pane_g6

0xb49b,	// (0x000783c5) wml_button_bg_pane_g7

0xb4a3,	// (0x000783cd) wml_button_bg_pane_g8

0xb4ab,	// (0x000783d5) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0007c209) wml_button_bg_pane_g

0x3e61,	// (0x00070d8b) bg_list_pane_cp02

0xb4b3,	// (0x000783dd) mce_header_pane_ParamLimits

0xb4b3,	// (0x000783dd) mce_header_pane

0xb4c9,	// (0x000783f3) mce_icon_pane

0xb4c9,	// (0x000783f3) mce_image_pane

0xb4d2,	// (0x000783fc) mce_text_pane_ParamLimits

0xb4d2,	// (0x000783fc) mce_text_pane

0x3e69,	// (0x00070d93) scroll_pane_cp03

0xb3cb,	// (0x000782f5) scroll_pane_cp04

0xb4e5,	// (0x0007840f) scroll_pane_cp05_ParamLimits

0xb4e5,	// (0x0007840f) scroll_pane_cp05

0x3e73,	// (0x00070d9d) mce_header_field_pane_ParamLimits

0x3e73,	// (0x00070d9d) mce_header_field_pane

0x3e8a,	// (0x00070db4) mce_header_field_pane_2_ParamLimits

0x3e8a,	// (0x00070db4) mce_header_field_pane_2

0x3ea0,	// (0x00070dca) mce_header_field_pane_3

0x3ea8,	// (0x00070dd2) list_single_mce_message_pane_ParamLimits

0x3ea8,	// (0x00070dd2) list_single_mce_message_pane

0x3ebd,	// (0x00070de7) list_single_mce_smart_pane_ParamLimits

0x3ebd,	// (0x00070de7) list_single_mce_smart_pane

0xb4f1,	// (0x0007841b) input_focus_pane_cp03

0xb4fa,	// (0x00078424) list_header_data_pane

0x3edd,	// (0x00070e07) mce_header_field_pane_t1

0x3eed,	// (0x00070e17) list_single_mce_header_pane_ParamLimits

0x3eed,	// (0x00070e17) list_single_mce_header_pane

0xb502,	// (0x0007842c) list_single_mce_header_pane_t1

0xb511,	// (0x0007843b) list_single_mce_message_pane_g1

0xb519,	// (0x00078443) list_single_mce_message_pane_t1

0x3f1f,	// (0x00070e49) bg_cale_heading_pane_cp01_ParamLimits

0x3f1f,	// (0x00070e49) bg_cale_heading_pane_cp01

0xb527,	// (0x00078451) bg_cale_pane_cp02_ParamLimits

0xb527,	// (0x00078451) bg_cale_pane_cp02

0x3f42,	// (0x00070e6c) cale_month_corner_pane

0x3f58,	// (0x00070e82) cale_month_day_heading_pane_ParamLimits

0x3f58,	// (0x00070e82) cale_month_day_heading_pane

0x3f83,	// (0x00070ead) cale_month_pane_g1_ParamLimits

0x3f83,	// (0x00070ead) cale_month_pane_g1

0x3f9f,	// (0x00070ec9) cale_month_pane_g2_ParamLimits

0x3f9f,	// (0x00070ec9) cale_month_pane_g2

0x3fba,	// (0x00070ee4) cale_month_pane_g3_ParamLimits

0x3fba,	// (0x00070ee4) cale_month_pane_g3

0x3fe6,	// (0x00070f10) cale_month_pane_g4_ParamLimits

0x3fe6,	// (0x00070f10) cale_month_pane_g4

0x4012,	// (0x00070f3c) cale_month_pane_g5_ParamLimits

0x4012,	// (0x00070f3c) cale_month_pane_g5

0x403e,	// (0x00070f68) cale_month_pane_g6_ParamLimits

0x403e,	// (0x00070f68) cale_month_pane_g6

0x406a,	// (0x00070f94) cale_month_pane_g7_ParamLimits

0x406a,	// (0x00070f94) cale_month_pane_g7

0x4096,	// (0x00070fc0) cale_month_pane_g8_ParamLimits

0x4096,	// (0x00070fc0) cale_month_pane_g8

0x40ca,	// (0x00070ff4) cale_month_pane_g9_ParamLimits

0x40ca,	// (0x00070ff4) cale_month_pane_g9

0x40fc,	// (0x00071026) cale_month_pane_g10_ParamLimits

0x40fc,	// (0x00071026) cale_month_pane_g10

0x412e,	// (0x00071058) cale_month_pane_g11_ParamLimits

0x412e,	// (0x00071058) cale_month_pane_g11

0x4160,	// (0x0007108a) cale_month_pane_g12_ParamLimits

0x4160,	// (0x0007108a) cale_month_pane_g12

0x4192,	// (0x000710bc) cale_month_pane_g13_ParamLimits

0x4192,	// (0x000710bc) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0007c21c) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0007c21c) cale_month_pane_g

0x41c4,	// (0x000710ee) cale_month_week_pane

0x41d7,	// (0x00071101) grid_cale_month_pane_ParamLimits

0x41d7,	// (0x00071101) grid_cale_month_pane

0x41fd,	// (0x00071127) cale_month_day_heading_pane_t1

0x425b,	// (0x00071185) cale_month_day_heading_pane_t2

0x42c0,	// (0x000711ea) cale_month_day_heading_pane_t3

0x4325,	// (0x0007124f) cale_month_day_heading_pane_t4

0x438a,	// (0x000712b4) cale_month_day_heading_pane_t5

0x43ef,	// (0x00071319) cale_month_day_heading_pane_t6

0x4454,	// (0x0007137e) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0007c237) cale_month_day_heading_pane_t

0xb098,	// (0x00077fc2) bg_cale_side_pane_cp01

0x44b9,	// (0x000713e3) cale_month_week_pane_t1

0x44d0,	// (0x000713fa) cale_month_week_pane_t2

0x44e7,	// (0x00071411) cale_month_week_pane_t3

0x44fe,	// (0x00071428) cale_month_week_pane_t4

0x4515,	// (0x0007143f) cale_month_week_pane_t5

0x452c,	// (0x00071456) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0007c246) cale_month_week_pane_t

0x4543,	// (0x0007146d) cell_cale_month_pane_ParamLimits

0x4543,	// (0x0007146d) cell_cale_month_pane

0xb586,	// (0x000784b0) cell_cale_month_pane_g1

0x45e9,	// (0x00071513) cell_cale_month_pane_t1_ParamLimits

0x45e9,	// (0x00071513) cell_cale_month_pane_t1

0xb0a6,	// (0x00077fd0) grid_highlight_pane_cp08

0xaf65,	// (0x00077e8f) main_smil_g1

0x4605,	// (0x0007152f) smil_status_pane

0xb592,	// (0x000784bc) smil_text_pane

0x55dc,	// (0x00072506) bg_popup_call3_rect_pane_g8

0x55e4,	// (0x0007250e) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0007c4ff) bg_popup_call3_rect_pane_g

0x5ec8,	// (0x00072df2) smil_status_volume_pane_g1

0xb59c,	// (0x000784c6) smil_status_pane_t1

0xecd2,	// (0x0007bbfc) volume_smil_pane

0xb5b3,	// (0x000784dd) list_smil_text_pane

0x4618,	// (0x00071542) scroll_pane_cp011

0x4623,	// (0x0007154d) smil_text_list_pane_t1_ParamLimits

0x4623,	// (0x0007154d) smil_text_list_pane_t1

0xb5bd,	// (0x000784e7) aid_volume_smil_ParamLimits

0xb5bd,	// (0x000784e7) aid_volume_smil

0xaf65,	// (0x00077e8f) smil_volume_pane_g1

0xaf65,	// (0x00077e8f) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0007c266) smil_volume_pane_g

0xaeec,	// (0x00077e16) listscroll_cale_day_pane

0xb5df,	// (0x00078509) bg_cale_pane

0xb5f7,	// (0x00078521) list_cale_pane

0xb608,	// (0x00078532) scroll_pane_cp09

0xb619,	// (0x00078543) cale_bg_pane_g1

0xb621,	// (0x0007854b) cale_bg_pane_g2

0xb629,	// (0x00078553) cale_bg_pane_g3

0xb631,	// (0x0007855b) cale_bg_pane_g4

0xb639,	// (0x00078563) cale_bg_pane_g5

0xb641,	// (0x0007856b) cale_bg_pane_g6

0xb649,	// (0x00078573) cale_bg_pane_g7

0xb651,	// (0x0007857b) cale_bg_pane_g8

0xb659,	// (0x00078583) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0007c26b) cale_bg_pane_g

0x37a1,	// (0x000706cb) list_cale_time_pane_ParamLimits

0x37a1,	// (0x000706cb) list_cale_time_pane

0xb661,	// (0x0007858b) list_cale_time_pane_g1_ParamLimits

0xb661,	// (0x0007858b) list_cale_time_pane_g1

0xb66d,	// (0x00078597) list_cale_time_pane_g2_ParamLimits

0xb66d,	// (0x00078597) list_cale_time_pane_g2

0x4669,	// (0x00071593) list_cale_time_pane_g3_ParamLimits

0x4669,	// (0x00071593) list_cale_time_pane_g3

0x4677,	// (0x000715a1) list_cale_time_pane_g4_ParamLimits

0x4677,	// (0x000715a1) list_cale_time_pane_g4

0x4685,	// (0x000715af) list_cale_time_pane_g5_ParamLimits

0x4685,	// (0x000715af) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0007c27e) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0007c27e) list_cale_time_pane_g

0xb687,	// (0x000785b1) list_cale_time_pane_t1_ParamLimits

0xb687,	// (0x000785b1) list_cale_time_pane_t1

0xb6af,	// (0x000785d9) list_cale_time_pane_t2_ParamLimits

0xb6af,	// (0x000785d9) list_cale_time_pane_t2

0x4927,	// (0x00071851) aid_blid_cardinal_pane

0x4965,	// (0x0007188f) compass_pane_t4

0xb6d7,	// (0x00078601) list_cale_time_pane_t4_ParamLimits

0xb6d7,	// (0x00078601) list_cale_time_pane_t4

0x4973,	// (0x0007189d) compass_pane_t5

0x4981,	// (0x000718ab) compass_pane_t6

0x498f,	// (0x000718b9) compass_pane_t7

0xbbea,	// (0x00078b14) navi_pane_cc_t1

0xbd51,	// (0x00078c7b) aid_phob_thumbnail_center_pane

0x4ff8,	// (0x00071f22) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0007c28b) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0007c28b) list_cale_time_pane_t

0x28fa,	// (0x0006f824) bg_popup_window_pane_cp02_ParamLimits

0x28fa,	// (0x0006f824) bg_popup_window_pane_cp02

0xb6ff,	// (0x00078629) heading_pane_cp01_ParamLimits

0xb6ff,	// (0x00078629) heading_pane_cp01

0xb70b,	// (0x00078635) loc_req_pane_ParamLimits

0xb70b,	// (0x00078635) loc_req_pane

0xb71b,	// (0x00078645) loc_type_pane_ParamLimits

0xb71b,	// (0x00078645) loc_type_pane

0xb72d,	// (0x00078657) loc_type_pane_t1_ParamLimits

0xb72d,	// (0x00078657) loc_type_pane_t1

0xb73f,	// (0x00078669) loc_type_pane_t2_ParamLimits

0xb73f,	// (0x00078669) loc_type_pane_t2

0xb751,	// (0x0007867b) loc_type_pane_t3_ParamLimits

0xb751,	// (0x0007867b) loc_type_pane_t3

0x0002,

0xf368,	// (0x0007c292) loc_type_pane_t_ParamLimits

0xf368,	// (0x0007c292) loc_type_pane_t

0xb763,	// (0x0007868d) list_loc_req_pane

0xb76d,	// (0x00078697) scroll_pane_cp012

0x4693,	// (0x000715bd) list_single_loc_request_popup_menu_pane_ParamLimits

0x4693,	// (0x000715bd) list_single_loc_request_popup_menu_pane

0xb778,	// (0x000786a2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb778,	// (0x000786a2) list_single_loc_request_popup_menu_pane_g1

0xb784,	// (0x000786ae) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb784,	// (0x000786ae) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0007c299) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0007c299) list_single_loc_request_popup_menu_pane_g

0xb790,	// (0x000786ba) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb790,	// (0x000786ba) list_single_loc_request_popup_menu_pane_t1

0xadf3,	// (0x00077d1d) bg_popup_window_pane_cp03_ParamLimits

0xadf3,	// (0x00077d1d) bg_popup_window_pane_cp03

0x0e08,	// (0x0006dd32) heading_loc_req_pane_ParamLimits

0x0e08,	// (0x0006dd32) heading_loc_req_pane

0x46a0,	// (0x000715ca) popup_dyc_status_message_window_g1_ParamLimits

0x46a0,	// (0x000715ca) popup_dyc_status_message_window_g1

0x46b4,	// (0x000715de) popup_dyc_status_message_window_t1_ParamLimits

0x46b4,	// (0x000715de) popup_dyc_status_message_window_t1

0x46c9,	// (0x000715f3) popup_dyc_status_message_window_t2_ParamLimits

0x46c9,	// (0x000715f3) popup_dyc_status_message_window_t2

0x46de,	// (0x00071608) popup_dyc_status_message_window_t3_ParamLimits

0x46de,	// (0x00071608) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0007c29e) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0007c29e) popup_dyc_status_message_window_t

0x2cc7,	// (0x0006fbf1) bg_heading_pane_cp01

0xb7a6,	// (0x000786d0) heading_loc_req_pane_g1

0xb7ae,	// (0x000786d8) heading_loc_req_pane_g2

0xb7b6,	// (0x000786e0) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0007c2a5) heading_loc_req_pane_g

0xb7be,	// (0x000786e8) heading_loc_req_pane_t1

0xb842,	// (0x0007876c) bg_popup_sub_pane_cp01_ParamLimits

0xb842,	// (0x0007876c) bg_popup_sub_pane_cp01

0xb850,	// (0x0007877a) popup_cale_events_window_g1_ParamLimits

0xb850,	// (0x0007877a) popup_cale_events_window_g1

0xb870,	// (0x0007879a) popup_cale_events_window_g2_ParamLimits

0xb870,	// (0x0007879a) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0007c2d9) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0007c2d9) popup_cale_events_window_g

0xb890,	// (0x000787ba) popup_cale_events_window_t1_ParamLimits

0xb890,	// (0x000787ba) popup_cale_events_window_t1

0xb8a2,	// (0x000787cc) popup_cale_events_window_t2_ParamLimits

0xb8a2,	// (0x000787cc) popup_cale_events_window_t2

0xb8e0,	// (0x0007880a) popup_cale_events_window_t3_ParamLimits

0xb8e0,	// (0x0007880a) popup_cale_events_window_t3

0xb91a,	// (0x00078844) popup_cale_events_window_t4_ParamLimits

0xb91a,	// (0x00078844) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0007c2de) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0007c2de) popup_cale_events_window_t

0x4712,	// (0x0007163c) call_type_pane

0x4722,	// (0x0007164c) popup_call_status_window_g1

0x4736,	// (0x00071660) popup_call_status_window_g2

0x474a,	// (0x00071674) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0007c2e7) popup_call_status_window_g

0xb950,	// (0x0007887a) call_type_pane_g1

0xb959,	// (0x00078883) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0007c2ee) call_type_pane_g

0x2cc7,	// (0x0006fbf1) bg_popup_sub_pane_cp02

0xb962,	// (0x0007888c) listscroll_popup_wml_pane

0xb96a,	// (0x00078894) list_wml_pane

0xb974,	// (0x0007889e) scroll_pane_cp013

0xb97f,	// (0x000788a9) list_single_graphic_popup_wml_pane_ParamLimits

0xb97f,	// (0x000788a9) list_single_graphic_popup_wml_pane

0xaf65,	// (0x00077e8f) list_single_graphic_popup_wml_pane_g1

0xb993,	// (0x000788bd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0007c2f3) list_single_graphic_popup_wml_pane_g

0xb99b,	// (0x000788c5) list_single_graphic_popup_wml_pane_t1

0xb9b1,	// (0x000788db) aid_call_pane

0x2f1a,	// (0x0006fe44) popup_clock_analogue_window_g1

0x2f1a,	// (0x0006fe44) popup_clock_analogue_window_g2

0xb9b9,	// (0x000788e3) popup_clock_analogue_window_g3

0xb9b9,	// (0x000788e3) popup_clock_analogue_window_g4

0xaf65,	// (0x00077e8f) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0007c2f8) popup_clock_analogue_window_g

0xb9c1,	// (0x000788eb) popup_clock_analogue_window_t1

0xb9cf,	// (0x000788f9) clock_digital_number_pane_ParamLimits

0xb9cf,	// (0x000788f9) clock_digital_number_pane

0xb9db,	// (0x00078905) clock_digital_number_pane_cp02_ParamLimits

0xb9db,	// (0x00078905) clock_digital_number_pane_cp02

0xb9e7,	// (0x00078911) clock_digital_number_pane_cp03_ParamLimits

0xb9e7,	// (0x00078911) clock_digital_number_pane_cp03

0xb9f3,	// (0x0007891d) clock_digital_number_pane_cp04_ParamLimits

0xb9f3,	// (0x0007891d) clock_digital_number_pane_cp04

0xba03,	// (0x0007892d) clock_digital_separator_pane_ParamLimits

0xba03,	// (0x0007892d) clock_digital_separator_pane

0xba0f,	// (0x00078939) popup_clock_digital_window_t1

0xaf65,	// (0x00077e8f) clock_digital_number_pane_g1

0xaf65,	// (0x00077e8f) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0007c266) clock_digital_number_pane_g

0xaf65,	// (0x00077e8f) clock_digital_separator_pane_g1

0xaf65,	// (0x00077e8f) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0007c266) clock_digital_separator_pane_g

0x2cc7,	// (0x0006fbf1) bg_popup_window_pane_cp04

0xba2c,	// (0x00078956) heading_pane_cp03

0xba34,	// (0x0007895e) listscroll_popup_gms_pane

0xba3c,	// (0x00078966) grid_large_graphic_popup_pane

0xba46,	// (0x00078970) listscroll_popup_gms_pane_g1

0xba4e,	// (0x00078978) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0007c303) listscroll_popup_gms_pane_g

0xb3cb,	// (0x000782f5) scroll_pane_cp014

0x4759,	// (0x00071683) cell_large_graphic_popup_pane_ParamLimits

0x4759,	// (0x00071683) cell_large_graphic_popup_pane

0x4771,	// (0x0007169b) cell_large_graphic_popup_pane_g1_ParamLimits

0x4771,	// (0x0007169b) cell_large_graphic_popup_pane_g1

0xba56,	// (0x00078980) cell_large_graphic_popup_pane_g2_ParamLimits

0xba56,	// (0x00078980) cell_large_graphic_popup_pane_g2

0xba62,	// (0x0007898c) cell_large_graphic_popup_pane_g3_ParamLimits

0xba62,	// (0x0007898c) cell_large_graphic_popup_pane_g3

0xba6f,	// (0x00078999) cell_large_graphic_popup_pane_g4_ParamLimits

0xba6f,	// (0x00078999) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0007c308) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0007c308) cell_large_graphic_popup_pane_g

0xba7f,	// (0x000789a9) grid_highlight_pane_cp010

0xaf65,	// (0x00077e8f) bg_popup_call_pane_g1

0xba89,	// (0x000789b3) list_single_graphic_popup_conf_pane_ParamLimits

0xba89,	// (0x000789b3) list_single_graphic_popup_conf_pane

0xba9c,	// (0x000789c6) list_highlight_pane_cp01

0xbaa5,	// (0x000789cf) list_single_graphic_popup_conf_pane_g1

0xbaad,	// (0x000789d7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0007c311) list_single_graphic_popup_conf_pane_g

0xbab5,	// (0x000789df) list_single_graphic_popup_conf_pane_t1

0xbac3,	// (0x000789ed) linegrid_cams_pane_g1

0x477d,	// (0x000716a7) linegrid_cams_pane_g2

0xb0d9,	// (0x00078003) linegrid_cams_pane_g3

0xbacc,	// (0x000789f6) linegrid_cams_pane_g4

0x4786,	// (0x000716b0) linegrid_cams_pane_g5

0x478f,	// (0x000716b9) linegrid_cams_pane_g6

0xb0e2,	// (0x0007800c) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0007c316) linegrid_cams_pane_g

0xbad5,	// (0x000789ff) popup_clock_analogue_window

0xbad5,	// (0x000789ff) popup_clock_digital_window

0x2cc7,	// (0x0006fbf1) popup_phob_thumbnail_window

0xaf65,	// (0x00077e8f) call_video_uplink_pane_g1

0xbade,	// (0x00078a08) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0007c325) call_video_uplink_pane_g

0xbae6,	// (0x00078a10) video_uplink_pane

0xbaee,	// (0x00078a18) mce_image_pane_g1

0x479a,	// (0x000716c4) mce_image_pane_g2

0x47a4,	// (0x000716ce) mce_image_pane_g3

0x47ac,	// (0x000716d6) mce_image_pane_g4

0x47b4,	// (0x000716de) mce_image_pane_g5

0x0004,

0xf400,	// (0x0007c32a) mce_image_pane_g

0xbaf8,	// (0x00078a22) control_top_pane_stacon_cp01_ParamLimits

0xbaf8,	// (0x00078a22) control_top_pane_stacon_cp01

0xbb0c,	// (0x00078a36) uni_indicator_pane_stacon_cp01_ParamLimits

0xbb0c,	// (0x00078a36) uni_indicator_pane_stacon_cp01

0xbb1d,	// (0x00078a47) bg_popup_sub_pane_cp03

0x47bc,	// (0x000716e6) chi_dic_find_pane

0x47c4,	// (0x000716ee) listscroll_chi_dic_pane

0x47cd,	// (0x000716f7) main_pane_chidic_g1

0xbb27,	// (0x00078a51) chi_dic_find_pane_t1

0xbb35,	// (0x00078a5f) find_chidic_pane

0xbb3e,	// (0x00078a68) chi_dic_list_pane_ParamLimits

0xbb3e,	// (0x00078a68) chi_dic_list_pane

0xbb4f,	// (0x00078a79) scroll_pane_cp020

0xbb57,	// (0x00078a81) find_chidic_pane_t1

0x2cc7,	// (0x0006fbf1) input_focus_pane_cp06

0x47e0,	// (0x0007170a) list_chi_dic_pane_ParamLimits

0x47e0,	// (0x0007170a) list_chi_dic_pane

0x47f2,	// (0x0007171c) list_chi_dic_pane_t1_ParamLimits

0x47f2,	// (0x0007171c) list_chi_dic_pane_t1

0x2cc7,	// (0x0006fbf1) list_highlight_pane_cp020

0xbb66,	// (0x00078a90) bg_cale_heading_pane_g1

0x4805,	// (0x0007172f) bg_cale_heading_pane_g2

0x480d,	// (0x00071737) bg_cale_heading_pane_g3

0x4815,	// (0x0007173f) bg_cale_heading_pane_g4

0x481f,	// (0x00071749) bg_cale_heading_pane_g5

0x4829,	// (0x00071753) bg_cale_heading_pane_g6

0x4831,	// (0x0007175b) bg_cale_heading_pane_g7

0x4839,	// (0x00071763) bg_cale_heading_pane_g8

0x4843,	// (0x0007176d) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0007c335) bg_cale_heading_pane_g

0xbb66,	// (0x00078a90) bg_cale_side_pane_g1

0x484d,	// (0x00071777) bg_cale_side_pane_g2

0x4855,	// (0x0007177f) bg_cale_side_pane_g3

0x485d,	// (0x00071787) bg_cale_side_pane_g4

0x4865,	// (0x0007178f) bg_cale_side_pane_g5

0x486d,	// (0x00071797) bg_cale_side_pane_g6

0x4875,	// (0x0007179f) bg_cale_side_pane_g7

0x487d,	// (0x000717a7) bg_cale_side_pane_g8

0x4885,	// (0x000717af) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0007c348) bg_cale_side_pane_g

0x488d,	// (0x000717b7) popup_call_status_window_ParamLimits

0x488d,	// (0x000717b7) popup_call_status_window

0xbb6e,	// (0x00078a98) stacon_top_pane

0xbb76,	// (0x00078aa0) status_pane_ParamLimits

0xbb76,	// (0x00078aa0) status_pane

0xbb8b,	// (0x00078ab5) status_small_pane

0xbb93,	// (0x00078abd) control_pane

0x2cc7,	// (0x0006fbf1) stacon_bottom_pane

0xbb9b,	// (0x00078ac5) list_single_mce_smart_pane_t1_ParamLimits

0xbb9b,	// (0x00078ac5) list_single_mce_smart_pane_t1

0xbbae,	// (0x00078ad8) list_single_mce_smart_pane_t2_ParamLimits

0xbbae,	// (0x00078ad8) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0007c35b) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0007c35b) list_single_mce_smart_pane_t

0x48d6,	// (0x00071800) compass_pane

0x48df,	// (0x00071809) main_location2_pane_t1

0x48f1,	// (0x0007181b) main_location2_pane_t2

0x4903,	// (0x0007182d) main_location2_pane_t3

0x0003,

0xf436,	// (0x0007c360) main_location2_pane_t

0xbbcd,	// (0x00078af7) compass_pane_g1_ParamLimits

0xbbcd,	// (0x00078af7) compass_pane_g1

0x4947,	// (0x00071871) compass_pane_t1

0x4956,	// (0x00071880) compass_pane_t2

0x0005,

0xf43f,	// (0x0007c369) compass_pane_t

0x499d,	// (0x000718c7) text_secondary_cp61

0xbbe1,	// (0x00078b0b) navi_pane_cams_g5

0xbc04,	// (0x00078b2e) navi_pane_im_t1

0xbc12,	// (0x00078b3c) navi_pane_mp_g1_ParamLimits

0xbc12,	// (0x00078b3c) navi_pane_mp_g1

0xbc26,	// (0x00078b50) navi_pane_mp_g2_ParamLimits

0xbc26,	// (0x00078b50) navi_pane_mp_g2

0xbc32,	// (0x00078b5c) navi_pane_mp_g3_ParamLimits

0xbc32,	// (0x00078b5c) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0007c37d) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0007c37d) navi_pane_mp_g

0xbc3e,	// (0x00078b68) navi_pane_mp_t1

0xbc4c,	// (0x00078b76) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0007c384) navi_pane_mp_t

0xbc88,	// (0x00078bb2) navi_pane_vt_g1

0xbc3e,	// (0x00078b68) navi_pane_vt_t1

0xbc90,	// (0x00078bba) navi_slider_pane

0xbc98,	// (0x00078bc2) zooming_pane

0xbca0,	// (0x00078bca) navi_slider_pane_g1

0xbca9,	// (0x00078bd3) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0007c38b) navi_slider_pane_g

0xbcd6,	// (0x00078c00) aid_levels_zoom

0xbcde,	// (0x00078c08) zooming_pane_g1

0xbce6,	// (0x00078c10) zooming_pane_g2

0xbce6,	// (0x00078c10) zooming_pane_g3

0x0002,

0xf470,	// (0x0007c39a) zooming_pane_g

0xbcee,	// (0x00078c18) level_10_zoom

0xbcf7,	// (0x00078c21) level_11_zoom

0xbd00,	// (0x00078c2a) level_1_zoom

0xbd09,	// (0x00078c33) level_2_zoom

0xbd12,	// (0x00078c3c) level_3_zoom

0xbd1b,	// (0x00078c45) level_4_zoom

0xbd24,	// (0x00078c4e) level_5_zoom

0xbd2d,	// (0x00078c57) level_6_zoom

0xbd36,	// (0x00078c60) level_7_zoom

0xbd3f,	// (0x00078c69) level_8_zoom

0xbd48,	// (0x00078c72) level_9_zoom

0xbd59,	// (0x00078c83) popup_phob_thumbnail_window_g1

0xbd61,	// (0x00078c8b) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0007c3a1) popup_phob_thumbnail_window_g

0x5867,	// (0x00072791) level_1_location

0x586f,	// (0x00072799) level_2_location

0x5877,	// (0x000727a1) level_3_location

0x587f,	// (0x000727a9) level_4_location

0xbc98,	// (0x00078bc2) level_5_location

0x4ac2,	// (0x000719ec) mce_icon_pane_g1

0x4aca,	// (0x000719f4) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0007c3a6) mce_icon_pane_g

0x4ad2,	// (0x000719fc) main_mup_pane_g1_ParamLimits

0x4ad2,	// (0x000719fc) main_mup_pane_g1

0x4ae8,	// (0x00071a12) main_mup_pane_g2_ParamLimits

0x4ae8,	// (0x00071a12) main_mup_pane_g2

0x4b00,	// (0x00071a2a) main_mup_pane_g3_ParamLimits

0x4b00,	// (0x00071a2a) main_mup_pane_g3

0x4b18,	// (0x00071a42) main_mup_pane_g4_ParamLimits

0x4b18,	// (0x00071a42) main_mup_pane_g4

0x4b30,	// (0x00071a5a) main_mup_pane_g5_ParamLimits

0x4b30,	// (0x00071a5a) main_mup_pane_g5

0x4b4c,	// (0x00071a76) main_mup_pane_g6_ParamLimits

0x4b4c,	// (0x00071a76) main_mup_pane_g6

0x4b64,	// (0x00071a8e) main_mup_pane_g7_ParamLimits

0x4b64,	// (0x00071a8e) main_mup_pane_g7

0x4b7c,	// (0x00071aa6) main_mup_pane_g8_ParamLimits

0x4b7c,	// (0x00071aa6) main_mup_pane_g8

0x4b96,	// (0x00071ac0) main_mup_pane_g9_ParamLimits

0x4b96,	// (0x00071ac0) main_mup_pane_g9

0x4bb0,	// (0x00071ada) main_mup_pane_g10_ParamLimits

0x4bb0,	// (0x00071ada) main_mup_pane_g10

0x4bca,	// (0x00071af4) main_mup_pane_g11_ParamLimits

0x4bca,	// (0x00071af4) main_mup_pane_g11

0x4bde,	// (0x00071b08) main_mup_pane_g12_ParamLimits

0x4bde,	// (0x00071b08) main_mup_pane_g12

0x4bf4,	// (0x00071b1e) main_mup_pane_g13_ParamLimits

0x4bf4,	// (0x00071b1e) main_mup_pane_g13

0x000c,

0xf481,	// (0x0007c3ab) main_mup_pane_g_ParamLimits

0xf481,	// (0x0007c3ab) main_mup_pane_g

0x4c08,	// (0x00071b32) main_mup_pane_t1_ParamLimits

0x4c08,	// (0x00071b32) main_mup_pane_t1

0x4c22,	// (0x00071b4c) main_mup_pane_t2_ParamLimits

0x4c22,	// (0x00071b4c) main_mup_pane_t2

0x4c3a,	// (0x00071b64) main_mup_pane_t3_ParamLimits

0x4c3a,	// (0x00071b64) main_mup_pane_t3

0x4c52,	// (0x00071b7c) main_mup_pane_t4_ParamLimits

0x4c52,	// (0x00071b7c) main_mup_pane_t4

0x4c70,	// (0x00071b9a) main_mup_pane_t5_ParamLimits

0x4c70,	// (0x00071b9a) main_mup_pane_t5

0x4c85,	// (0x00071baf) main_mup_pane_t6_ParamLimits

0x4c85,	// (0x00071baf) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0007c3c6) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0007c3c6) main_mup_pane_t

0x4c97,	// (0x00071bc1) mup_progress_pane_ParamLimits

0x4c97,	// (0x00071bc1) mup_progress_pane

0x4ca3,	// (0x00071bcd) mup_visualizer_pane_ParamLimits

0x4ca3,	// (0x00071bcd) mup_visualizer_pane

0x4cd3,	// (0x00071bfd) mup_volume_pane_ParamLimits

0x4cd3,	// (0x00071bfd) mup_volume_pane

0xbd69,	// (0x00078c93) mup_visualizer_pane_g1_ParamLimits

0xbd69,	// (0x00078c93) mup_visualizer_pane_g1

0xbd69,	// (0x00078c93) mup_visualizer_pane_g2_ParamLimits

0xbd69,	// (0x00078c93) mup_visualizer_pane_g2

0xbbcd,	// (0x00078af7) mup_visualizer_pane_g3_ParamLimits

0xbbcd,	// (0x00078af7) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0007c3d3) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0007c3d3) mup_visualizer_pane_g

0xaf65,	// (0x00077e8f) mup_volume_pane_g1

0xbd7f,	// (0x00078ca9) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0007c3da) mup_volume_pane_g

0xaf65,	// (0x00077e8f) mup_progress_pane_g1

0xbd88,	// (0x00078cb2) mup_progress_pane_g2

0xbd91,	// (0x00078cbb) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0007c3df) mup_progress_pane_g

0x2cc7,	// (0x0006fbf1) bg_popup_window_pane_cp05

0xbd9a,	// (0x00078cc4) heading_pane_cp02_ParamLimits

0xbd9a,	// (0x00078cc4) heading_pane_cp02

0xbdb4,	// (0x00078cde) list_popup_blid_pane

0xbdbc,	// (0x00078ce6) list_blid_sat_info_pane_ParamLimits

0xbdbc,	// (0x00078ce6) list_blid_sat_info_pane

0xbdcf,	// (0x00078cf9) list_blid_sat_info_pane_g1

0xbdd7,	// (0x00078d01) list_blid_sat_info_pane_t1

0x4de9,	// (0x00071d13) mup_equalizer_pane_ParamLimits

0x4de9,	// (0x00071d13) mup_equalizer_pane

0x4e02,	// (0x00071d2c) mup_equalizer_pane_cp1_ParamLimits

0x4e02,	// (0x00071d2c) mup_equalizer_pane_cp1

0x4e1f,	// (0x00071d49) mup_equalizer_pane_cp2_ParamLimits

0x4e1f,	// (0x00071d49) mup_equalizer_pane_cp2

0x4e3c,	// (0x00071d66) mup_equalizer_pane_cp3_ParamLimits

0x4e3c,	// (0x00071d66) mup_equalizer_pane_cp3

0x4e5d,	// (0x00071d87) mup_equalizer_pane_cp4_ParamLimits

0x4e5d,	// (0x00071d87) mup_equalizer_pane_cp4

0x4e7e,	// (0x00071da8) mup_equalizer_pane_cp5

0x4e92,	// (0x00071dbc) mup_equalizer_pane_cp6

0x4ea6,	// (0x00071dd0) mup_equalizer_pane_cp7

0x5664,	// (0x0007258e) bg_popup_call_poc_act_pane_g9

0x566c,	// (0x00072596) bg_popup_call_poc_act_pane_g10

0x5674,	// (0x0007259e) bg_popup_call_poc_act_pane_g11

0x000a,

0xadf3,	// (0x00077d1d) mup_scale_pane

0xaf65,	// (0x00077e8f) mup_scale_pane_g1

0xbde5,	// (0x00078d0f) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0007c3fb) mup_scale_pane_g

0xbe09,	// (0x00078d33) msg_data_pane

0xbe11,	// (0x00078d3b) scroll_pane_cp017

0x1d0d,	// (0x0006ec37) bg_list_pane_cp04_ParamLimits

0x1d0d,	// (0x0006ec37) bg_list_pane_cp04

0xbe19,	// (0x00078d43) msg_data_pane_g1

0x4ecc,	// (0x00071df6) msg_data_pane_g2

0x4ed6,	// (0x00071e00) msg_data_pane_g3

0x4ede,	// (0x00071e08) msg_data_pane_g4

0x4ee6,	// (0x00071e10) msg_data_pane_g5

0x4eee,	// (0x00071e18) msg_data_pane_g6

0x4ef6,	// (0x00071e20) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0007c40a) msg_data_pane_g

0x1d2d,	// (0x0006ec57) msg_text_pane_ParamLimits

0x1d2d,	// (0x0006ec57) msg_text_pane

0x4efe,	// (0x00071e28) qrid_highlight_pane_cp011_ParamLimits

0x4efe,	// (0x00071e28) qrid_highlight_pane_cp011

0x2cc7,	// (0x0006fbf1) msg_body_pane

0x2cc7,	// (0x0006fbf1) msg_header_pane

0xbe2a,	// (0x00078d54) input_focus_pane_cp07

0x1d5d,	// (0x0006ec87) msg_header_pane_t1_ParamLimits

0x1d5d,	// (0x0006ec87) msg_header_pane_t1

0x1d71,	// (0x0006ec9b) msg_header_pane_t2_ParamLimits

0x1d71,	// (0x0006ec9b) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0007c41e) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0007c41e) msg_header_pane_t

0xbe3f,	// (0x00078d69) msg_body_pane_g1

0x1d83,	// (0x0006ecad) msg_body_pane_t1_ParamLimits

0x1d83,	// (0x0006ecad) msg_body_pane_t1

0x1db4,	// (0x0006ecde) msg_body_pane_t2_ParamLimits

0x1db4,	// (0x0006ecde) msg_body_pane_t2

0x1dc6,	// (0x0006ecf0) msg_body_pane_t3_ParamLimits

0x1dc6,	// (0x0006ecf0) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0007c423) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0007c423) msg_body_pane_t

0x4f4e,	// (0x00071e78) main_viewer_pane_g1_ParamLimits

0x4f4e,	// (0x00071e78) main_viewer_pane_g1

0x4f5c,	// (0x00071e86) main_viewer_pane_g2_ParamLimits

0x4f5c,	// (0x00071e86) main_viewer_pane_g2

0x4f6a,	// (0x00071e94) main_viewer_pane_g3_ParamLimits

0x4f6a,	// (0x00071e94) main_viewer_pane_g3

0x4f79,	// (0x00071ea3) main_viewer_pane_g4_ParamLimits

0x4f79,	// (0x00071ea3) main_viewer_pane_g4

0xbe5f,	// (0x00078d89) main_viewer_pane_g5_ParamLimits

0xbe5f,	// (0x00078d89) main_viewer_pane_g5

0xbe5f,	// (0x00078d89) main_viewer_pane_g7_ParamLimits

0xbe5f,	// (0x00078d89) main_viewer_pane_g7

0xbe71,	// (0x00078d9b) main_viewer_pane_g8_ParamLimits

0xbe71,	// (0x00078d9b) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0007c433) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0007c433) main_viewer_pane_g

0xbe89,	// (0x00078db3) viewer_content_pane_ParamLimits

0xbe89,	// (0x00078db3) viewer_content_pane

0x4fb5,	// (0x00071edf) main_postcard_pane_g1_ParamLimits

0x4fb5,	// (0x00071edf) main_postcard_pane_g1

0x4fcb,	// (0x00071ef5) main_postcard_pane_g2_ParamLimits

0x4fcb,	// (0x00071ef5) main_postcard_pane_g2

0x4fe1,	// (0x00071f0b) main_postcard_pane_g3_ParamLimits

0x4fe1,	// (0x00071f0b) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0007c444) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0007c444) main_postcard_pane_g

0x4ff8,	// (0x00071f22) main_postcard_pane_g4

0x5edb,	// (0x00072e05) smil_status_volume_pane_g2

0x503b,	// (0x00071f65) postcard_pane_ParamLimits

0x503b,	// (0x00071f65) postcard_pane

0xbe97,	// (0x00078dc1) postcard_pane_g1_ParamLimits

0xbe97,	// (0x00078dc1) postcard_pane_g1

0x507d,	// (0x00071fa7) postcard_pane_g2_ParamLimits

0x507d,	// (0x00071fa7) postcard_pane_g2

0x5089,	// (0x00071fb3) postcard_pane_g3_ParamLimits

0x5089,	// (0x00071fb3) postcard_pane_g3

0xbea5,	// (0x00078dcf) postcard_pane_g4_ParamLimits

0xbea5,	// (0x00078dcf) postcard_pane_g4

0x5095,	// (0x00071fbf) postcard_pane_g5_ParamLimits

0x5095,	// (0x00071fbf) postcard_pane_g5

0x50aa,	// (0x00071fd4) postcard_pane_g6_ParamLimits

0x50aa,	// (0x00071fd4) postcard_pane_g6

0xbe97,	// (0x00078dc1) postcard_pane_g7_ParamLimits

0xbe97,	// (0x00078dc1) postcard_pane_g7

0x0006,

0xf527,	// (0x0007c451) postcard_pane_g_ParamLimits

0xf527,	// (0x0007c451) postcard_pane_g

0x50be,	// (0x00071fe8) main_mp2_pane_g1_ParamLimits

0x50be,	// (0x00071fe8) main_mp2_pane_g1

0x50ca,	// (0x00071ff4) main_mp2_pane_g2_ParamLimits

0x50ca,	// (0x00071ff4) main_mp2_pane_g2

0x50d6,	// (0x00072000) main_mp2_pane_g3_ParamLimits

0x50d6,	// (0x00072000) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0007c460) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0007c460) main_mp2_pane_g

0x50e2,	// (0x0007200c) main_mp2_pane_t1_ParamLimits

0x50e2,	// (0x0007200c) main_mp2_pane_t1

0x50f7,	// (0x00072021) main_mp2_pane_t2_ParamLimits

0x50f7,	// (0x00072021) main_mp2_pane_t2

0x5109,	// (0x00072033) main_mp2_pane_t3_ParamLimits

0x5109,	// (0x00072033) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0007c467) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0007c467) main_mp2_pane_t

0xbeb3,	// (0x00078ddd) pec_content_pane_ParamLimits

0xbeb3,	// (0x00078ddd) pec_content_pane

0xb3cb,	// (0x000782f5) scroll_pane_cp015

0xbec5,	// (0x00078def) pec_attribute_pane_ParamLimits

0xbec5,	// (0x00078def) pec_attribute_pane

0x511b,	// (0x00072045) pec_content_pane_g1_ParamLimits

0x511b,	// (0x00072045) pec_content_pane_g1

0xbed5,	// (0x00078dff) pec_content_pane_t1_ParamLimits

0xbed5,	// (0x00078dff) pec_content_pane_t1

0xbee7,	// (0x00078e11) pec_content_pane_t2_ParamLimits

0xbee7,	// (0x00078e11) pec_content_pane_t2

0x0001,

0xf544,	// (0x0007c46e) pec_content_pane_t_ParamLimits

0xf544,	// (0x0007c46e) pec_content_pane_t

0x5127,	// (0x00072051) list_single_graphic_pane_cp01_ParamLimits

0x5127,	// (0x00072051) list_single_graphic_pane_cp01

0xadf3,	// (0x00077d1d) bg_popup_sub_pane_cp04

0xbef9,	// (0x00078e23) popup_mup_playback_window_g1

0xbf05,	// (0x00078e2f) popup_mup_playback_window_t1

0xbf1a,	// (0x00078e44) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0007c473) popup_mup_playback_window_t

0xbf51,	// (0x00078e7b) main_image_pane_g1_ParamLimits

0xbf51,	// (0x00078e7b) main_image_pane_g1

0xbf94,	// (0x00078ebe) scroll_pane_cp018_ParamLimits

0xbf94,	// (0x00078ebe) scroll_pane_cp018

0xbfac,	// (0x00078ed6) scroll_pane_cp016_ParamLimits

0xbfac,	// (0x00078ed6) scroll_pane_cp016

0x51f4,	// (0x0007211e) smil2_image_pane_ParamLimits

0x51f4,	// (0x0007211e) smil2_image_pane

0x5224,	// (0x0007214e) smil2_root_pane_ParamLimits

0x5224,	// (0x0007214e) smil2_root_pane

0x525c,	// (0x00072186) smil2_text_pane_ParamLimits

0x525c,	// (0x00072186) smil2_text_pane

0x2cc7,	// (0x0006fbf1) bg_list_pane_cp06

0xbfe8,	// (0x00078f12) grid_radio_pane

0x2cc7,	// (0x0006fbf1) bg_popup_window_pane_cp06

0xbff0,	// (0x00078f1a) main_fmradio_pane_t1

0xba2c,	// (0x00078956) heading_pane_cp04

0xbffe,	// (0x00078f28) main_fmradio_pane_t2

0x56fe,	// (0x00072628) popup_cale_lunar_info_window_g1

0xc00c,	// (0x00078f36) main_fmradio_pane_t3

0x5706,	// (0x00072630) popup_cale_lunar_info_window_g2

0xc01a,	// (0x00078f44) main_fmradio_pane_t4

0x0001,

0xc028,	// (0x00078f52) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0007c54e) popup_cale_lunar_info_window_g

0xf55e,	// (0x0007c488) main_fmradio_pane_t

0xc036,	// (0x00078f60) wait_bar_pane_cp03

0xc03e,	// (0x00078f68) cell_fmradio_pane_ParamLimits

0xc03e,	// (0x00078f68) cell_fmradio_pane

0xbe97,	// (0x00078dc1) cell_fmradio_pane_g1_ParamLimits

0xbe97,	// (0x00078dc1) cell_fmradio_pane_g1

0x2cc7,	// (0x0006fbf1) grid_highlight_pane_cp011

0xc051,	// (0x00078f7b) poc_content_pane_ParamLimits

0xc051,	// (0x00078f7b) poc_content_pane

0xc063,	// (0x00078f8d) scroll_pane_cp019

0x52dc,	// (0x00072206) popup_call_poc_act_window_ParamLimits

0x52dc,	// (0x00072206) popup_call_poc_act_window

0x5300,	// (0x0007222a) popup_call_poc_inact_window_ParamLimits

0x5300,	// (0x0007222a) popup_call_poc_inact_window

0xf5fb,	// (0x0007c525) bg_popup_call_poc_act_pane_g

0x55ec,	// (0x00072516) bg_popup_call_poc_inact_pane_g1

0x55f4,	// (0x0007251e) bg_popup_call_poc_inact_pane_g2

0xc06b,	// (0x00078f95) popup_call_poc_act_window_g2

0x55fc,	// (0x00072526) bg_popup_call_poc_inact_pane_g3

0x5604,	// (0x0007252e) bg_popup_call_poc_inact_pane_g4

0x560c,	// (0x00072536) bg_popup_call_poc_inact_pane_g5

0xc073,	// (0x00078f9d) popup_call_poc_act_window_t1_ParamLimits

0xc073,	// (0x00078f9d) popup_call_poc_act_window_t1

0xc09b,	// (0x00078fc5) popup_call_poc_act_window_t2_ParamLimits

0xc09b,	// (0x00078fc5) popup_call_poc_act_window_t2

0xc0c3,	// (0x00078fed) popup_call_poc_act_window_t3_ParamLimits

0xc0c3,	// (0x00078fed) popup_call_poc_act_window_t3

0xc0eb,	// (0x00079015) popup_call_poc_act_window_t4_ParamLimits

0xc0eb,	// (0x00079015) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0007c493) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0007c493) popup_call_poc_act_window_t

0x5614,	// (0x0007253e) bg_popup_call_poc_inact_pane_g6

0x561c,	// (0x00072546) bg_popup_call_poc_inact_pane_g7

0x5624,	// (0x0007254e) bg_popup_call_poc_inact_pane_g8

0xc0fd,	// (0x00079027) popup_call_poc_inact_window_g2

0x562c,	// (0x00072556) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0007c512) bg_popup_call_poc_inact_pane_g

0xc105,	// (0x0007902f) popup_call_poc_inact_window_t1_ParamLimits

0xc105,	// (0x0007902f) popup_call_poc_inact_window_t1

0xc11a,	// (0x00079044) popup_call_poc_inact_window_t2_ParamLimits

0xc11a,	// (0x00079044) popup_call_poc_inact_window_t2

0xc12f,	// (0x00079059) popup_call_poc_inact_window_t3_ParamLimits

0xc12f,	// (0x00079059) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0007c49c) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0007c49c) popup_call_poc_inact_window_t

0x5d81,	// (0x00072cab) context_pane_ParamLimits

0x5ddc,	// (0x00072d06) signal_pane_ParamLimits

0xbc98,	// (0x00078bc2) main_call2_pane

0x5d17,	// (0x00072c41) popup_phob_thumbnail2_window_ParamLimits

0x5d17,	// (0x00072c41) popup_phob_thumbnail2_window

0xbe47,	// (0x00078d71) aid_hotspot_pointer_arrow_pane

0xbe4f,	// (0x00078d79) aid_hotspot_pointer_hand_pane

0x5831,	// (0x0007275b) phob_pre_status_pane_g5

0x37cc,	// (0x000706f6) cams_zoom_pane_ParamLimits

0x37db,	// (0x00070705) image_vga_pane_ParamLimits

0x37f5,	// (0x0007071f) main_camera_pane_g1_ParamLimits

0x3807,	// (0x00070731) main_camera_pane_g2_ParamLimits

0x3817,	// (0x00070741) main_camera_pane_g3_ParamLimits

0x3827,	// (0x00070751) main_camera_pane_g4_ParamLimits

0x3837,	// (0x00070761) main_camera_pane_g5_ParamLimits

0x3847,	// (0x00070771) main_camera_pane_g6_ParamLimits

0x3859,	// (0x00070783) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0007c19b) main_camera_pane_g_ParamLimits

0x3869,	// (0x00070793) main_camera_pane_t1_ParamLimits

0x387f,	// (0x000707a9) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0007c1ac) main_camera_pane_t_ParamLimits

0xadf3,	// (0x00077d1d) bg_popup_preview_window_pane_cp01_ParamLimits

0xadf3,	// (0x00077d1d) bg_popup_preview_window_pane_cp01

0xc144,	// (0x0007906e) popup_phob_thumbnail2_window_g1_ParamLimits

0xc144,	// (0x0007906e) popup_phob_thumbnail2_window_g1

0x2cc7,	// (0x0006fbf1) call2_cli_visual_pane

0x5334,	// (0x0007225e) popup_call2_audio_conf_window_ParamLimits

0x5334,	// (0x0007225e) popup_call2_audio_conf_window

0x5354,	// (0x0007227e) popup_call2_audio_first_window_ParamLimits

0x5354,	// (0x0007227e) popup_call2_audio_first_window

0x53ea,	// (0x00072314) popup_call2_audio_in_window_ParamLimits

0x53ea,	// (0x00072314) popup_call2_audio_in_window

0x5432,	// (0x0007235c) popup_call2_audio_out_window_ParamLimits

0x5432,	// (0x0007235c) popup_call2_audio_out_window

0x549c,	// (0x000723c6) popup_call2_audio_second_window_ParamLimits

0x549c,	// (0x000723c6) popup_call2_audio_second_window

0x5502,	// (0x0007242c) popup_call2_audio_wait_window_ParamLimits

0x5502,	// (0x0007242c) popup_call2_audio_wait_window

0x2cc7,	// (0x0006fbf1) bg_popup_call2_act_pane_cp03

0x2f04,	// (0x0006fe2e) list_conf_pane_cp

0xc150,	// (0x0007907a) popup_call2_audio_conf_window_t1

0xba89,	// (0x000789b3) list_single_graphic_popup_conf2_pane_ParamLimits

0xba89,	// (0x000789b3) list_single_graphic_popup_conf2_pane

0xba9c,	// (0x000789c6) list_highlight_pane_cp04

0xc15e,	// (0x00079088) list_single_graphic_popup_conf2_pane_g1

0xbaad,	// (0x000789d7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0007c4a3) list_single_graphic_popup_conf2_pane_g

0xc168,	// (0x00079092) list_single_graphic_popup_conf2_pane_t1

0xc176,	// (0x000790a0) bg_popup_call2_act_pane_cp01_ParamLimits

0xc176,	// (0x000790a0) bg_popup_call2_act_pane_cp01

0xc200,	// (0x0007912a) call_type_pane_cp05_ParamLimits

0xc200,	// (0x0007912a) call_type_pane_cp05

0xc254,	// (0x0007917e) popup_call2_audio_second_window_g1_ParamLimits

0xc254,	// (0x0007917e) popup_call2_audio_second_window_g1

0xc2a8,	// (0x000791d2) popup_call2_audio_second_window_g2_ParamLimits

0xc2a8,	// (0x000791d2) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0007c4a8) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0007c4a8) popup_call2_audio_second_window_g

0xc30d,	// (0x00079237) popup_call2_audio_second_window_t1_ParamLimits

0xc30d,	// (0x00079237) popup_call2_audio_second_window_t1

0xc3c8,	// (0x000792f2) popup_call2_audio_second_window_t2_ParamLimits

0xc3c8,	// (0x000792f2) popup_call2_audio_second_window_t2

0xc41b,	// (0x00079345) popup_call2_audio_second_window_t3_ParamLimits

0xc41b,	// (0x00079345) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0007c4af) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0007c4af) popup_call2_audio_second_window_t

0x2cc7,	// (0x0006fbf1) bg_popup_call2_in_pane_cp02

0x2cd1,	// (0x0006fbfb) call_type_pane_cp04

0x2cd9,	// (0x0006fc03) popup_call2_audio_wait_window_g1

0x2ce1,	// (0x0006fc0b) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0007c088) popup_call2_audio_wait_window_g

0x2ce9,	// (0x0006fc13) popup_call2_audio_wait_window_t3

0xc50e,	// (0x00079438) bg_popup_call2_act_pane_ParamLimits

0xc50e,	// (0x00079438) bg_popup_call2_act_pane

0xc5ce,	// (0x000794f8) call_type_pane_cp03_ParamLimits

0xc5ce,	// (0x000794f8) call_type_pane_cp03

0xc632,	// (0x0007955c) popup_call2_audio_first_window_g1_ParamLimits

0xc632,	// (0x0007955c) popup_call2_audio_first_window_g1

0xc6a2,	// (0x000795cc) popup_call2_audio_first_window_g2_ParamLimits

0xc6a2,	// (0x000795cc) popup_call2_audio_first_window_g2

0xbd69,	// (0x00078c93) popup_call2_audio_first_window_g3_ParamLimits

0xbd69,	// (0x00078c93) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0007c4b8) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0007c4b8) popup_call2_audio_first_window_g

0xc780,	// (0x000796aa) popup_call2_audio_first_window_t1_ParamLimits

0xc780,	// (0x000796aa) popup_call2_audio_first_window_t1

0x07d8,	// (0x0006d702) popup_call2_audio_first_window_t4_ParamLimits

0x07d8,	// (0x0006d702) popup_call2_audio_first_window_t4

0x08bb,	// (0x0006d7e5) popup_call2_audio_first_window_t5_ParamLimits

0x08bb,	// (0x0006d7e5) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0007c4c3) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0007c4c3) popup_call2_audio_first_window_t

0x2f1a,	// (0x0006fe44) bg_popup_call2_act_pane_g1

0x570e,	// (0x00072638) popup_cale_lunar_info_window_t1

0x571c,	// (0x00072646) popup_cale_lunar_info_window_t2

0x572a,	// (0x00072654) popup_cale_lunar_info_window_t3

0x2cc7,	// (0x0006fbf1) bg_popup_call2_bubble_pane

0x09bc,	// (0x0006d8e6) bg_popup_call2_in_pane_cp01_ParamLimits

0x09bc,	// (0x0006d8e6) bg_popup_call2_in_pane_cp01

0x297f,	// (0x0006f8a9) call_type_pane_cp02

0x0a04,	// (0x0006d92e) popup_call2_audio_out_window_g1_ParamLimits

0x0a04,	// (0x0006d92e) popup_call2_audio_out_window_g1

0x0a30,	// (0x0006d95a) popup_call2_audio_out_window_g2_ParamLimits

0x0a30,	// (0x0006d95a) popup_call2_audio_out_window_g2

0x0a58,	// (0x0006d982) popup_call2_audio_out_window_g3_ParamLimits

0x0a58,	// (0x0006d982) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0007c4cc) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0007c4cc) popup_call2_audio_out_window_g

0x0a93,	// (0x0006d9bd) popup_call2_audio_out_window_t1_ParamLimits

0x0a93,	// (0x0006d9bd) popup_call2_audio_out_window_t1

0x0af2,	// (0x0006da1c) popup_call2_audio_out_window_t2_ParamLimits

0x0af2,	// (0x0006da1c) popup_call2_audio_out_window_t2

0x0b46,	// (0x0006da70) popup_call2_audio_out_window_t3_ParamLimits

0x0b46,	// (0x0006da70) popup_call2_audio_out_window_t3

0x0b5c,	// (0x0006da86) popup_call2_audio_out_window_t4_ParamLimits

0x0b5c,	// (0x0006da86) popup_call2_audio_out_window_t4

0x0b72,	// (0x0006da9c) popup_call2_audio_out_window_t5_ParamLimits

0x0b72,	// (0x0006da9c) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0007c4d5) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0007c4d5) popup_call2_audio_out_window_t

0x0bd6,	// (0x0006db00) bg_popup_call2_in_pane_ParamLimits

0x0bd6,	// (0x0006db00) bg_popup_call2_in_pane

0x0c32,	// (0x0006db5c) popup_call2_audio_in_window_g1_ParamLimits

0x0c32,	// (0x0006db5c) popup_call2_audio_in_window_g1

0x0c6a,	// (0x0006db94) popup_call2_audio_in_window_g2_ParamLimits

0x0c6a,	// (0x0006db94) popup_call2_audio_in_window_g2

0x0ca2,	// (0x0006dbcc) popup_call2_audio_in_window_g3_ParamLimits

0x0ca2,	// (0x0006dbcc) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0007c4e2) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0007c4e2) popup_call2_audio_in_window_g

0x0cfa,	// (0x0006dc24) popup_call2_audio_in_window_t1_ParamLimits

0x0cfa,	// (0x0006dc24) popup_call2_audio_in_window_t1

0x0d7a,	// (0x0006dca4) popup_call2_audio_in_window_t2_ParamLimits

0x0d7a,	// (0x0006dca4) popup_call2_audio_in_window_t2

0x553c,	// (0x00072466) popup_call2_audio_in_window_t3_ParamLimits

0x553c,	// (0x00072466) popup_call2_audio_in_window_t3

0x5556,	// (0x00072480) popup_call2_audio_in_window_t4_ParamLimits

0x5556,	// (0x00072480) popup_call2_audio_in_window_t4

0x5568,	// (0x00072492) popup_call2_audio_in_window_t5_ParamLimits

0x5568,	// (0x00072492) popup_call2_audio_in_window_t5

0x557d,	// (0x000724a7) popup_call2_audio_in_window_t6_ParamLimits

0x557d,	// (0x000724a7) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0007c4eb) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0007c4eb) popup_call2_audio_in_window_t

0x2f1a,	// (0x0006fe44) bg_popup_call2_in_pane_g1

0x5738,	// (0x00072662) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0007c553) popup_cale_lunar_info_window_t

0xadf3,	// (0x00077d1d) bg_popup_call2_rect_pane_ParamLimits

0xadf3,	// (0x00077d1d) bg_popup_call2_rect_pane

0x2cc7,	// (0x0006fbf1) call2_cli_visual_graphic_pane

0x2cc7,	// (0x0006fbf1) call2_cli_visual_text_pane

0xecc5,	// (0x0007bbef) smil_status_volume_pane_g3

0x0002,

0xaf65,	// (0x00077e8f) call2_cli_visual_graphic_pane_g1

0xaf65,	// (0x00077e8f) call2_cli_visual_graphic_pane_g2

0xaf65,	// (0x00077e8f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0007c4f8) call2_cli_visual_graphic_pane_g

0x55ac,	// (0x000724d6) bg_popup_call2_rect_pane_g1

0xaff1,	// (0x00077f1b) bg_popup_call2_rect_pane_g2

0x55b4,	// (0x000724de) bg_popup_call2_rect_pane_g3

0x55bc,	// (0x000724e6) bg_popup_call2_rect_pane_g4

0x55c4,	// (0x000724ee) bg_popup_call2_rect_pane_g5

0x55cc,	// (0x000724f6) bg_popup_call2_rect_pane_g6

0x55d4,	// (0x000724fe) bg_popup_call2_rect_pane_g7

0x55dc,	// (0x00072506) bg_popup_call2_rect_pane_g8

0x55e4,	// (0x0007250e) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0007c4ff) bg_popup_call2_rect_pane_g

0x55ec,	// (0x00072516) bg_popup_call2_bubble_pane_g1

0x55f4,	// (0x0007251e) bg_popup_call2_bubble_pane_g2

0x55fc,	// (0x00072526) bg_popup_call2_bubble_pane_g3

0x5604,	// (0x0007252e) bg_popup_call2_bubble_pane_g4

0x560c,	// (0x00072536) bg_popup_call2_bubble_pane_g5

0x5614,	// (0x0007253e) bg_popup_call2_bubble_pane_g6

0x561c,	// (0x00072546) bg_popup_call2_bubble_pane_g7

0x5624,	// (0x0007254e) bg_popup_call2_bubble_pane_g8

0x562c,	// (0x00072556) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0007c512) bg_popup_call2_bubble_pane_g

0x3375,	// (0x0007029f) aid_cale_week_size_cell_pane

0x3895,	// (0x000707bf) aid_cams_cif_uncrop_pane_ParamLimits

0x3895,	// (0x000707bf) aid_cams_cif_uncrop_pane

0x3a4e,	// (0x00070978) aid_cams_size_cell_ParamLimits

0x3a4e,	// (0x00070978) aid_cams_size_cell

0x3a62,	// (0x0007098c) grid_cams_pane_ParamLimits

0x3a7c,	// (0x000709a6) linegrid_cams_pane_ParamLimits

0x3b4a,	// (0x00070a74) call_video_pane_t1

0x3b5e,	// (0x00070a88) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0007c1ff) call_video_pane_t

0x3f01,	// (0x00070e2b) aid_cale_month_size_cell_pane_ParamLimits

0x3f01,	// (0x00070e2b) aid_cale_month_size_cell_pane

0xf672,	// (0x0007c59c) smil_status_volume_pane_g

0xecd2,	// (0x0007bbfc) volume_smil_pane_ParamLimits

0x25b0,	// (0x0006f4da) aid_popup2_width_pane

0x32e5,	// (0x0007020f) cell_qdial_pane_g4_ParamLimits

0x32e5,	// (0x0007020f) cell_qdial_pane_g4

0x4927,	// (0x00071851) aid_blid_cardinal_pane_ParamLimits

0x4933,	// (0x0007185d) aid_blid_destination_pane_ParamLimits

0x4933,	// (0x0007185d) aid_blid_destination_pane

0xadf3,	// (0x00077d1d) bg_popup_call_poc_act_pane_ParamLimits

0xadf3,	// (0x00077d1d) bg_popup_call_poc_act_pane

0xadf3,	// (0x00077d1d) bg_popup_call_poc_inact_pane_ParamLimits

0xadf3,	// (0x00077d1d) bg_popup_call_poc_inact_pane

0x563c,	// (0x00072566) bg_popup_call_poc_act_pane_g1

0x5644,	// (0x0007256e) bg_popup_call_poc_act_pane_g2

0x564c,	// (0x00072576) bg_popup_call_poc_act_pane_g3

0x5604,	// (0x0007252e) bg_popup_call_poc_act_pane_g4

0x560c,	// (0x00072536) bg_popup_call_poc_act_pane_g5

0x5654,	// (0x0007257e) bg_popup_call_poc_act_pane_g6

0x561c,	// (0x00072546) bg_popup_call_poc_act_pane_g7

0x565c,	// (0x00072586) bg_popup_call_poc_act_pane_g8

0x2cc7,	// (0x0006fbf1) main_usb_pane

0x5b48,	// (0x00072a72) popup_cale_lunar_info_window

0x3dad,	// (0x00070cd7) im_reading_pane_t1_ParamLimits

0xb323,	// (0x0007824d) list_im_pane_ParamLimits

0xb334,	// (0x0007825e) scroll_pane_cp07_ParamLimits

0x2cc7,	// (0x0006fbf1) grid_highlight_pane_cp012

0xadf3,	// (0x00077d1d) mup_scale_pane_ParamLimits

0xbe97,	// (0x00078dc1) main_usb_pane_g1_ParamLimits

0xbe97,	// (0x00078dc1) main_usb_pane_g1

0x567c,	// (0x000725a6) main_usb_pane_g2_ParamLimits

0x567c,	// (0x000725a6) main_usb_pane_g2

0x0001,

0xf612,	// (0x0007c53c) main_usb_pane_g_ParamLimits

0xf612,	// (0x0007c53c) main_usb_pane_g

0x5692,	// (0x000725bc) main_usb_pane_t1_ParamLimits

0x5692,	// (0x000725bc) main_usb_pane_t1

0x56a4,	// (0x000725ce) main_usb_pane_t2_ParamLimits

0x56a4,	// (0x000725ce) main_usb_pane_t2

0x56b6,	// (0x000725e0) main_usb_pane_t3_ParamLimits

0x56b6,	// (0x000725e0) main_usb_pane_t3

0x56c8,	// (0x000725f2) main_usb_pane_t4_ParamLimits

0x56c8,	// (0x000725f2) main_usb_pane_t4

0x56da,	// (0x00072604) main_usb_pane_t5_ParamLimits

0x56da,	// (0x00072604) main_usb_pane_t5

0x56ec,	// (0x00072616) main_usb_pane_t6_ParamLimits

0x56ec,	// (0x00072616) main_usb_pane_t6

0x0005,

0xf617,	// (0x0007c541) main_usb_pane_t_ParamLimits

0x48d6,	// (0x00071800) aid_text_placing

0x48df,	// (0x00071809) main_location2_pane_t1_ParamLimits

0x48f1,	// (0x0007181b) main_location2_pane_t2_ParamLimits

0x4903,	// (0x0007182d) main_location2_pane_t3_ParamLimits

0x4915,	// (0x0007183f) main_location2_pane_t4_ParamLimits

0x4915,	// (0x0007183f) main_location2_pane_t4

0xf436,	// (0x0007c360) main_location2_pane_t_ParamLimits

0xae2f,	// (0x00077d59) find_pinb_pane_g2_ParamLimits

0xae2f,	// (0x00077d59) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0007c0ae) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0007c0ae) find_pinb_pane_g

0xae3b,	// (0x00077d65) find_pinb_pane_t1_ParamLimits

0xae4d,	// (0x00077d77) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0007c0b3) find_pinb_pane_t_ParamLimits

0x2cc7,	// (0x0006fbf1) main_call3_pane

0x41fd,	// (0x00071127) cale_month_day_heading_pane_t1_ParamLimits

0x425b,	// (0x00071185) cale_month_day_heading_pane_t2_ParamLimits

0x42c0,	// (0x000711ea) cale_month_day_heading_pane_t3_ParamLimits

0x4325,	// (0x0007124f) cale_month_day_heading_pane_t4_ParamLimits

0x438a,	// (0x000712b4) cale_month_day_heading_pane_t5_ParamLimits

0x43ef,	// (0x00071319) cale_month_day_heading_pane_t6_ParamLimits

0x4454,	// (0x0007137e) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0007c237) cale_month_day_heading_pane_t_ParamLimits

0xb5aa,	// (0x000784d4) smil_status_volume_pane

0x5059,	// (0x00071f83) postcard_address_pane_ParamLimits

0x5059,	// (0x00071f83) postcard_address_pane

0x506b,	// (0x00071f95) postcard_message_pane_ParamLimits

0x506b,	// (0x00071f95) postcard_message_pane

0x5592,	// (0x000724bc) call2_cli_visual_pane_t1_ParamLimits

0x5592,	// (0x000724bc) call2_cli_visual_pane_t1

0x608e,	// (0x00072fb8) postcard_message_pane_t1_ParamLimits

0x608e,	// (0x00072fb8) postcard_message_pane_t1

0x6077,	// (0x00072fa1) postcard_address_pane_t1_ParamLimits

0x6077,	// (0x00072fa1) postcard_address_pane_t1

0x6063,	// (0x00072f8d) popup_call3_audio_in_window_ParamLimits

0x6063,	// (0x00072f8d) popup_call3_audio_in_window

0x5eee,	// (0x00072e18) bg_popup_call3_in_pane_ParamLimits

0x5eee,	// (0x00072e18) bg_popup_call3_in_pane

0x5f64,	// (0x00072e8e) popup_call3_audio_in_window_g1_ParamLimits

0x5f64,	// (0x00072e8e) popup_call3_audio_in_window_g1

0x5f84,	// (0x00072eae) popup_call3_audio_in_window_g2_ParamLimits

0x5f84,	// (0x00072eae) popup_call3_audio_in_window_g2

0x5fa4,	// (0x00072ece) popup_call3_audio_in_window_g3_ParamLimits

0x5fa4,	// (0x00072ece) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0007c5a3) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0007c5a3) popup_call3_audio_in_window_g

0x5fd5,	// (0x00072eff) popup_call3_audio_in_window_t1_ParamLimits

0x5fd5,	// (0x00072eff) popup_call3_audio_in_window_t1

0x6013,	// (0x00072f3d) popup_call3_audio_in_window_t2_ParamLimits

0x6013,	// (0x00072f3d) popup_call3_audio_in_window_t2

0x6051,	// (0x00072f7b) popup_call3_audio_in_window_t3_ParamLimits

0x6051,	// (0x00072f7b) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0007c5ac) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0007c5ac) popup_call3_audio_in_window_t

0xbc98,	// (0x00078bc2) bg_popup_call3_rect_pane

0x55ac,	// (0x000724d6) bg_popup_call3_rect_pane_g1

0xaff1,	// (0x00077f1b) bg_popup_call3_rect_pane_g2

0x55b4,	// (0x000724de) bg_popup_call3_rect_pane_g3

0x55bc,	// (0x000724e6) bg_popup_call3_rect_pane_g4

0x55c4,	// (0x000724ee) bg_popup_call3_rect_pane_g5

0x55cc,	// (0x000724f6) bg_popup_call3_rect_pane_g6

0x55d4,	// (0x000724fe) bg_popup_call3_rect_pane_g7

0x4ce9,	// (0x00071c13) mup_visualizer_osc_pane

0xbd77,	// (0x00078ca1) mup_visualizer_spec_pane

0x5f1e,	// (0x00072e48) call3_video_qcif_pane_ParamLimits

0x5f1e,	// (0x00072e48) call3_video_qcif_pane

0x5f31,	// (0x00072e5b) call3_video_qcif_uncrop_pane_ParamLimits

0x5f31,	// (0x00072e5b) call3_video_qcif_uncrop_pane

0x5f3f,	// (0x00072e69) call3_video_subqcif_pane_ParamLimits

0x5f3f,	// (0x00072e69) call3_video_subqcif_pane

0x5f53,	// (0x00072e7d) call3_video_subqcif_uncrop_pane_ParamLimits

0x5f53,	// (0x00072e7d) call3_video_subqcif_uncrop_pane

0x5fc4,	// (0x00072eee) popup_call3_audio_in_window_g4_ParamLimits

0x5fc4,	// (0x00072eee) popup_call3_audio_in_window_g4

0x5eaf,	// (0x00072dd9) mup_spec_half_pane

0x5eb8,	// (0x00072de2) mup_spec_half_pane_cp

0x5e9d,	// (0x00072dc7) mup_osc_middle_pane

0x5ea6,	// (0x00072dd0) mup_visualizer_osc_pane_g1

0x5e7d,	// (0x00072da7) mup_spec_bar_pane_ParamLimits

0x5e7d,	// (0x00072da7) mup_spec_bar_pane

0x5e6a,	// (0x00072d94) mup_spec_bar_pane_g1

0x5e74,	// (0x00072d9e) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0007c597) mup_spec_bar_pane_g

0x3375,	// (0x0007029f) aid_cale_week_size_cell_pane_ParamLimits

0x3388,	// (0x000702b2) bg_cale_heading_pane_ParamLimits

0xb06d,	// (0x00077f97) bg_cale_pane_cp01_ParamLimits

0x339c,	// (0x000702c6) cale_week_corner_pane_ParamLimits

0x33b2,	// (0x000702dc) cale_week_day_heading_pane_ParamLimits

0x33c6,	// (0x000702f0) cale_week_scroll_pane_g1_ParamLimits

0x33d7,	// (0x00070301) cale_week_scroll_pane_g2_ParamLimits

0x33e8,	// (0x00070312) cale_week_scroll_pane_g3_ParamLimits

0x33f9,	// (0x00070323) cale_week_scroll_pane_g4_ParamLimits

0x340a,	// (0x00070334) cale_week_scroll_pane_g5_ParamLimits

0x341b,	// (0x00070345) cale_week_scroll_pane_g6_ParamLimits

0x342c,	// (0x00070356) cale_week_scroll_pane_g7_ParamLimits

0x343d,	// (0x00070367) cale_week_scroll_pane_g8_ParamLimits

0x344e,	// (0x00070378) cale_week_scroll_pane_g9_ParamLimits

0x345f,	// (0x00070389) cale_week_scroll_pane_g10_ParamLimits

0x3470,	// (0x0007039a) cale_week_scroll_pane_g11_ParamLimits

0x3481,	// (0x000703ab) cale_week_scroll_pane_g12_ParamLimits

0x3492,	// (0x000703bc) cale_week_scroll_pane_g13_ParamLimits

0x34a3,	// (0x000703cd) cale_week_scroll_pane_g14_ParamLimits

0x34b4,	// (0x000703de) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0007c13f) cale_week_scroll_pane_g_ParamLimits

0x34c5,	// (0x000703ef) cale_week_time_pane_ParamLimits

0x34d6,	// (0x00070400) grid_cale_week_pane_ParamLimits

0xb086,	// (0x00077fb0) listscroll_cale_week_pane_t1

0x34e9,	// (0x00070413) scroll_pane_cp08_ParamLimits

0x3f42,	// (0x00070e6c) cale_month_corner_pane_ParamLimits

0xb54a,	// (0x00078474) cale_month_pane_t1

0x41c4,	// (0x000710ee) cale_month_week_pane_ParamLimits

0x4722,	// (0x0007164c) popup_call_status_window_g1_ParamLimits

0x4736,	// (0x00071660) popup_call_status_window_g2_ParamLimits

0x474a,	// (0x00071674) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0007c2e7) popup_call_status_window_g_ParamLimits

0xb9a9,	// (0x000788d3) aid_call2_pane

0x1d4f,	// (0x0006ec79) msg_header_pane_g1

0x5059,	// (0x00071f83) postcard_address2_pane_ParamLimits

0x5059,	// (0x00071f83) postcard_address2_pane

0x506b,	// (0x00071f95) postcard_message2_pane_ParamLimits

0x506b,	// (0x00071f95) postcard_message2_pane

0x5dea,	// (0x00072d14) message2_row_pane_ParamLimits

0x5dea,	// (0x00072d14) message2_row_pane

0x5e06,	// (0x00072d30) address2_row_pane_ParamLimits

0x5e06,	// (0x00072d30) address2_row_pane

0x5e19,	// (0x00072d43) postcard_message2_row_pane_g1

0x5e21,	// (0x00072d4b) postcard_message2_row_pane_t1

0x5e19,	// (0x00072d43) address2_row_pane_g1

0x5e21,	// (0x00072d4b) address2_row_pane_t1

0x3791,	// (0x000706bb) aid_size_cell_vorec

0x2cc7,	// (0x0006fbf1) main_rss_pane

0x5e2f,	// (0x00072d59) rss_list_single_pane_ParamLimits

0x5e2f,	// (0x00072d59) rss_list_single_pane

0x5e4e,	// (0x00072d78) rss_list_single_pane_t1

0x5e5c,	// (0x00072d86) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0007c592) rss_list_single_pane_t

0x2cc7,	// (0x0006fbf1) main_camera2_pane

0x2cc7,	// (0x0006fbf1) main_video2_pane

0x6107,	// (0x00073031) cams_zoom_pane_cp2_ParamLimits

0x6107,	// (0x00073031) cams_zoom_pane_cp2

0x6127,	// (0x00073051) image2_vga_pane_ParamLimits

0x6127,	// (0x00073051) image2_vga_pane

0x6178,	// (0x000730a2) main_camera2_pane_g1_ParamLimits

0x6178,	// (0x000730a2) main_camera2_pane_g1

0x6198,	// (0x000730c2) main_camera2_pane_g2_ParamLimits

0x6198,	// (0x000730c2) main_camera2_pane_g2

0x61b8,	// (0x000730e2) main_camera2_pane_g3_ParamLimits

0x61b8,	// (0x000730e2) main_camera2_pane_g3

0x61d8,	// (0x00073102) main_camera2_pane_g4_ParamLimits

0x61d8,	// (0x00073102) main_camera2_pane_g4

0x61f8,	// (0x00073122) main_camera2_pane_g5_ParamLimits

0x61f8,	// (0x00073122) main_camera2_pane_g5

0x6218,	// (0x00073142) main_camera2_pane_g6_ParamLimits

0x6218,	// (0x00073142) main_camera2_pane_g6

0x6238,	// (0x00073162) main_camera2_pane_g7_ParamLimits

0x6238,	// (0x00073162) main_camera2_pane_g7

0x6258,	// (0x00073182) main_camera2_pane_g8_ParamLimits

0x6258,	// (0x00073182) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0007c5b3) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0007c5b3) main_camera2_pane_g

0x6298,	// (0x000731c2) main_camera2_pane_t1_ParamLimits

0x6298,	// (0x000731c2) main_camera2_pane_t1

0x62cd,	// (0x000731f7) main_camera2_pane_t2_ParamLimits

0x62cd,	// (0x000731f7) main_camera2_pane_t2

0x62f3,	// (0x0007321d) main_camera2_pane_t3_ParamLimits

0x62f3,	// (0x0007321d) main_camera2_pane_t3

0x6351,	// (0x0007327b) main_camera2_pane_t4_ParamLimits

0x6351,	// (0x0007327b) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0007c5c6) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0007c5c6) main_camera2_pane_t

0x63e3,	// (0x0007330d) cams_zoom_pane_cp4_ParamLimits

0x63e3,	// (0x0007330d) cams_zoom_pane_cp4

0x63f9,	// (0x00073323) image2_cif_pane_ParamLimits

0x63f9,	// (0x00073323) image2_cif_pane

0x6424,	// (0x0007334e) image2_subqcif_pane_ParamLimits

0x6424,	// (0x0007334e) image2_subqcif_pane

0x643e,	// (0x00073368) main_video2_pane_g1_ParamLimits

0x643e,	// (0x00073368) main_video2_pane_g1

0x6458,	// (0x00073382) main_video2_pane_g2_ParamLimits

0x6458,	// (0x00073382) main_video2_pane_g2

0x646e,	// (0x00073398) main_video2_pane_g3_ParamLimits

0x646e,	// (0x00073398) main_video2_pane_g3

0x6484,	// (0x000733ae) main_video2_pane_g4_ParamLimits

0x6484,	// (0x000733ae) main_video2_pane_g4

0x649a,	// (0x000733c4) main_video2_pane_g5_ParamLimits

0x649a,	// (0x000733c4) main_video2_pane_g5

0x64b0,	// (0x000733da) main_video2_pane_g6_ParamLimits

0x64b0,	// (0x000733da) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0007c5d5) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0007c5d5) main_video2_pane_g

0x64ca,	// (0x000733f4) main_video2_pane_t1_ParamLimits

0x64ca,	// (0x000733f4) main_video2_pane_t1

0x64ee,	// (0x00073418) main_video2_pane_t2_ParamLimits

0x64ee,	// (0x00073418) main_video2_pane_t2

0x653c,	// (0x00073466) main_video2_pane_t3_ParamLimits

0x653c,	// (0x00073466) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0007c5e2) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0007c5e2) main_video2_pane_t

0x5891,	// (0x000727bb) call_muted_g2

0x0001,

0xf65a,	// (0x0007c584) call_muted_g

0x2cc7,	// (0x0006fbf1) main_mup2_pane

0x6580,	// (0x000734aa) main_mup2_pane_g1_ParamLimits

0x6580,	// (0x000734aa) main_mup2_pane_g1

0x658c,	// (0x000734b6) main_mup2_pane_g2_ParamLimits

0x658c,	// (0x000734b6) main_mup2_pane_g2

0xed40,	// (0x0007bc6a) main_mup_pane_g13_cp1

0xed48,	// (0x0007bc72) mup_volume_pane_cp1

0x65a8,	// (0x000734d2) main_mup2_pane_g4_ParamLimits

0x65a8,	// (0x000734d2) main_mup2_pane_g4

0x65ba,	// (0x000734e4) main_mup2_pane_g5_ParamLimits

0x65ba,	// (0x000734e4) main_mup2_pane_g5

0x65cc,	// (0x000734f6) main_mup2_pane_g6_ParamLimits

0x65cc,	// (0x000734f6) main_mup2_pane_g6

0x65de,	// (0x00073508) main_mup2_pane_g7_ParamLimits

0x65de,	// (0x00073508) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0007c5e9) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0007c5e9) main_mup2_pane_g

0x65f6,	// (0x00073520) main_mup2_pane_t1_ParamLimits

0x65f6,	// (0x00073520) main_mup2_pane_t1

0x660c,	// (0x00073536) main_mup2_pane_t2_ParamLimits

0x660c,	// (0x00073536) main_mup2_pane_t2

0x6622,	// (0x0007354c) main_mup2_pane_t3_ParamLimits

0x6622,	// (0x0007354c) main_mup2_pane_t3

0x6638,	// (0x00073562) main_mup2_pane_t4_ParamLimits

0x6638,	// (0x00073562) main_mup2_pane_t4

0x6650,	// (0x0007357a) main_mup2_pane_t5_ParamLimits

0x6650,	// (0x0007357a) main_mup2_pane_t5

0x6668,	// (0x00073592) main_mup2_pane_t6_ParamLimits

0x6668,	// (0x00073592) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0007c5f8) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0007c5f8) main_mup2_pane_t

0x6698,	// (0x000735c2) mup2_visualizer_pane_ParamLimits

0x6698,	// (0x000735c2) mup2_visualizer_pane

0x66c6,	// (0x000735f0) mup_progress_pane_cp_ParamLimits

0x66c6,	// (0x000735f0) mup_progress_pane_cp

0xed2b,	// (0x0007bc55) mup_volume_pane_cp_ParamLimits

0xed2b,	// (0x0007bc55) mup_volume_pane_cp

0x66da,	// (0x00073604) mup2_visualizer_pane_g1_ParamLimits

0x66da,	// (0x00073604) mup2_visualizer_pane_g1

0x66f1,	// (0x0007361b) mup2_visualizer_pane_g2_ParamLimits

0x66f1,	// (0x0007361b) mup2_visualizer_pane_g2

0x66fd,	// (0x00073627) mup2_visualizer_pane_g3_ParamLimits

0x66fd,	// (0x00073627) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0007c605) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0007c605) mup2_visualizer_pane_g

0xbfe0,	// (0x00078f0a) aid_size_cell_fmradio

0x5a74,	// (0x0007299e) aid_height_parent_landcape

0xb3b2,	// (0x000782dc) wml_content_pane_cp

0xb3ba,	// (0x000782e4) wml_tabs_pane

0xb3c3,	// (0x000782ed) popup_wml_miniature_window

0xb3cb,	// (0x000782f5) scroll_pane_cp021

0xb3df,	// (0x00078309) wml_content_pane_comp8

0x2cc7,	// (0x0006fbf1) bg_popup_sub_pane_cp05

0x671b,	// (0x00073645) popup_wml_miniature_window_g1

0x6723,	// (0x0007364d) wml_miniature_view_pane

0x672b,	// (0x00073655) aid_size_wml_view

0x6733,	// (0x0007365d) wml_miniature_view_pane_g1

0x673c,	// (0x00073666) wml_miniature_view_pane_g2

0x6745,	// (0x0007366f) wml_miniature_view_pane_g3

0x674d,	// (0x00073677) wml_miniature_view_pane_g4

0x6755,	// (0x0007367f) wml_miniature_view_pane_g5

0x675d,	// (0x00073687) wml_miniature_view_pane_g6

0x6765,	// (0x0007368f) wml_miniature_view_pane_g7

0x676d,	// (0x00073697) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0007c60c) wml_miniature_view_pane_g

0x6775,	// (0x0007369f) background_graphic_ParamLimits

0x6775,	// (0x0007369f) background_graphic

0x6781,	// (0x000736ab) wml_tabs_2_pane

0x678a,	// (0x000736b4) wml_tabs_3_pane_ParamLimits

0x678a,	// (0x000736b4) wml_tabs_3_pane

0x679c,	// (0x000736c6) wml_tabs_4_pane_ParamLimits

0x679c,	// (0x000736c6) wml_tabs_4_pane

0x67b2,	// (0x000736dc) wml_tabs_5_pane_ParamLimits

0x67b2,	// (0x000736dc) wml_tabs_5_pane

0x67cc,	// (0x000736f6) wml_tabs_pane_g2_ParamLimits

0x67cc,	// (0x000736f6) wml_tabs_pane_g2

0x67e0,	// (0x0007370a) wml_tabs_pane_g3_ParamLimits

0x67e0,	// (0x0007370a) wml_tabs_pane_g3

0x67f4,	// (0x0007371e) wml_tabs_2_active_pane_ParamLimits

0x67f4,	// (0x0007371e) wml_tabs_2_active_pane

0x6808,	// (0x00073732) wml_tabs_2_passive_pane_ParamLimits

0x6808,	// (0x00073732) wml_tabs_2_passive_pane

0x681c,	// (0x00073746) wml_tabs_3_active_pane_cp_ParamLimits

0x681c,	// (0x00073746) wml_tabs_3_active_pane_cp

0x6831,	// (0x0007375b) wml_tabs_3_passive_pane_ParamLimits

0x6831,	// (0x0007375b) wml_tabs_3_passive_pane

0x6844,	// (0x0007376e) wml_tabs_3_passive_pane_cp_ParamLimits

0x6844,	// (0x0007376e) wml_tabs_3_passive_pane_cp

0x685b,	// (0x00073785) tabs_4_active_pane

0x6863,	// (0x0007378d) tabs_4_passive_pane

0x686d,	// (0x00073797) tabs_4_passive_pane_cp

0x6875,	// (0x0007379f) tabs_4_passive_pane_cp2

0x5634,	// (0x0007255e) aid_height_text

0x4cbf,	// (0x00071be9) mup_volume_cont_pane_ParamLimits

0x4cbf,	// (0x00071be9) mup_volume_cont_pane

0x2f88,	// (0x0006feb2) aid_size_cell_pinb

0x2f92,	// (0x0006febc) aid_size_list_pinb

0x66b2,	// (0x000735dc) mup2_volume_cont_pane_ParamLimits

0x66b2,	// (0x000735dc) mup2_volume_cont_pane

0xed17,	// (0x0007bc41) mup2_volume_cont_pane_g1_ParamLimits

0xed17,	// (0x0007bc41) mup2_volume_cont_pane_g1

0x25bc,	// (0x0006f4e6) aid_size_cell_touch_ParamLimits

0x25bc,	// (0x0006f4e6) aid_size_cell_touch

0x280a,	// (0x0006f734) touch_pane_ParamLimits

0x280a,	// (0x0006f734) touch_pane

0x259e,	// (0x0006f4c8) main_rss2_pane

0x6888,	// (0x000737b2) listscroll_rss2_pane

0x6891,	// (0x000737bb) rss2_navigation_pane

0x6899,	// (0x000737c3) list_rss2_pane

0xbb4f,	// (0x00078a79) scroll_pane_cp22

0x68a1,	// (0x000737cb) rss2_navigation_pane_g1

0x68aa,	// (0x000737d4) rss2_navigation_pane_g2

0x68b2,	// (0x000737dc) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0007c61d) rss2_navigation_pane_g

0x68ba,	// (0x000737e4) rss2_navigation_pane_t1

0x68c8,	// (0x000737f2) rss2_list_single_pane_ParamLimits

0x68c8,	// (0x000737f2) rss2_list_single_pane

0x68dd,	// (0x00073807) rss2_list_single_pane_t2

0x68eb,	// (0x00073815) rss2_list_single_pane_t3_ParamLimits

0x68eb,	// (0x00073815) rss2_list_single_pane_t3

0x6908,	// (0x00073832) rss2_list_single_pane_t4

0x460e,	// (0x00071538) smil_status_pane_g1

0x0dfa,	// (0x0006dd24) main_image2_pane_ParamLimits

0x0dfa,	// (0x0006dd24) main_image2_pane

0x6278,	// (0x000731a2) main_camera2_pane_g9_ParamLimits

0x6278,	// (0x000731a2) main_camera2_pane_g9

0x63a6,	// (0x000732d0) main_camera2_pane_t5_ParamLimits

0x63a6,	// (0x000732d0) main_camera2_pane_t5

0xece7,	// (0x0007bc11) main_camera2_pane_t6_ParamLimits

0xece7,	// (0x0007bc11) main_camera2_pane_t6

0x6916,	// (0x00073840) main_image2_pane_g1_ParamLimits

0x6916,	// (0x00073840) main_image2_pane_g1

0x5292,	// (0x000721bc) smil2_video_pane_ParamLimits

0x5292,	// (0x000721bc) smil2_video_pane

0xadeb,	// (0x00077d15) aid_zoom_text_primary_cp

0x27c6,	// (0x0006f6f0) popup_preview_fixed_window

0xb31b,	// (0x00078245) im_reading_pane_g1

0x60ef,	// (0x00073019) cams2_bc_adjust_pane_cp_ParamLimits

0x60ef,	// (0x00073019) cams2_bc_adjust_pane_cp

0x63d5,	// (0x000732ff) cams2_bc_adjust_pane_ParamLimits

0x63d5,	// (0x000732ff) cams2_bc_adjust_pane

0xed50,	// (0x0007bc7a) cams2_bc_adjust_pane_g1

0xed58,	// (0x0007bc82) cams2_slider_pane

0xed61,	// (0x0007bc8b) cams2_slider_pane_g1

0xed6a,	// (0x0007bc94) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0007c624) cams2_slider_pane_g

0x3074,	// (0x0006ff9e) calc_display_pane_ParamLimits

0x309a,	// (0x0006ffc4) calc_paper_pane_ParamLimits

0x30bb,	// (0x0006ffe5) grid_calc_pane_ParamLimits

0xba0f,	// (0x00078939) popup_clock_digital_window_t1_ParamLimits

0xbf7d,	// (0x00078ea7) main_image_pane_t1

0x3056,	// (0x0006ff80) aid_size_cell_calc_ParamLimits

0x3056,	// (0x0006ff80) aid_size_cell_calc

0x5ad8,	// (0x00072a02) popup_blid_sat_info2_window_ParamLimits

0x5ad8,	// (0x00072a02) popup_blid_sat_info2_window

0x6934,	// (0x0007385e) aid_size_cell_blid

0x693c,	// (0x00073866) bg_popup_window_pane_cp07

0x695f,	// (0x00073889) grid_popup_blid_pane

0x6969,	// (0x00073893) heading_pane_cp05_ParamLimits

0x6969,	// (0x00073893) heading_pane_cp05

0x6a33,	// (0x0007395d) cell_popup_blid_pane_ParamLimits

0x6a33,	// (0x0007395d) cell_popup_blid_pane

0x6a57,	// (0x00073981) cell_popup_blid_pane_g1

0x6a5f,	// (0x00073989) cell_popup_blid_pane_t1

0x6682,	// (0x000735ac) mup2_indicator_pane_ParamLimits

0x6682,	// (0x000735ac) mup2_indicator_pane

0xbc98,	// (0x00078bc2) mup2_visualizer_osc_pane

0x6709,	// (0x00073633) mup2_visualizer_spec_pane_ParamLimits

0x6709,	// (0x00073633) mup2_visualizer_spec_pane

0x6a6d,	// (0x00073997) mup2_spec_half_pane

0x6a76,	// (0x000739a0) mup2_spec_half_pane_cp

0x6a7e,	// (0x000739a8) mup2_spec_bar_pane_ParamLimits

0x6a7e,	// (0x000739a8) mup2_spec_bar_pane

0x5e6a,	// (0x00072d94) mup2_spec_bar_pane_g1

0x5e74,	// (0x00072d9e) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0007c597) mup2_spec_bar_pane_g

0x6a9e,	// (0x000739c8) mup2_osc_middle_pane

0x5ea6,	// (0x00072dd0) mup2_visualizer_osc_pane_g1

0x287c,	// (0x0006f7a6) popup_number_entry_window_t1_ParamLimits

0x288f,	// (0x0006f7b9) popup_number_entry_window_t2_ParamLimits

0x28a1,	// (0x0006f7cb) popup_number_entry_window_t3_ParamLimits

0x28b3,	// (0x0006f7dd) popup_number_entry_window_t5_ParamLimits

0x28b3,	// (0x0006f7dd) popup_number_entry_window_t5

0xf12f,	// (0x0007c059) popup_number_entry_window_t_ParamLimits

0x28e7,	// (0x0006f811) text_title_cp2_ParamLimits

0xbe57,	// (0x00078d81) aid_hotspot_pointer_text2_pane

0xbe7d,	// (0x00078da7) main_viewer_pane_g9_ParamLimits

0xbe7d,	// (0x00078da7) main_viewer_pane_g9

0xb54a,	// (0x00078474) cale_month_pane_t1_ParamLimits

0xb5df,	// (0x00078509) bg_cale_pane_ParamLimits

0xb5f7,	// (0x00078521) list_cale_pane_ParamLimits

0xb086,	// (0x00077fb0) listscroll_cale_day_pane_t1

0xb608,	// (0x00078532) scroll_pane_cp09_ParamLimits

0x4cf1,	// (0x00071c1b) main_mup_eq_pane_t1_ParamLimits

0x4cf1,	// (0x00071c1b) main_mup_eq_pane_t1

0x4d0b,	// (0x00071c35) main_mup_eq_pane_t2_ParamLimits

0x4d0b,	// (0x00071c35) main_mup_eq_pane_t2

0x4d25,	// (0x00071c4f) main_mup_eq_pane_t3_ParamLimits

0x4d25,	// (0x00071c4f) main_mup_eq_pane_t3

0x4d41,	// (0x00071c6b) main_mup_eq_pane_t4_ParamLimits

0x4d41,	// (0x00071c6b) main_mup_eq_pane_t4

0x4d5d,	// (0x00071c87) main_mup_eq_pane_t5_ParamLimits

0x4d5d,	// (0x00071c87) main_mup_eq_pane_t5

0x4d79,	// (0x00071ca3) main_mup_eq_pane_t6_ParamLimits

0x4d79,	// (0x00071ca3) main_mup_eq_pane_t6

0x4d8d,	// (0x00071cb7) main_mup_eq_pane_t7_ParamLimits

0x4d8d,	// (0x00071cb7) main_mup_eq_pane_t7

0x4da1,	// (0x00071ccb) main_mup_eq_pane_t8_ParamLimits

0x4da1,	// (0x00071ccb) main_mup_eq_pane_t8

0x4db5,	// (0x00071cdf) main_mup_eq_pane_t9_ParamLimits

0x4db5,	// (0x00071cdf) main_mup_eq_pane_t9

0x4dcf,	// (0x00071cf9) main_mup_eq_pane_t10_ParamLimits

0x4dcf,	// (0x00071cf9) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0007c3e6) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0007c3e6) main_mup_eq_pane_t

0x4e7e,	// (0x00071da8) mup_equalizer_pane_cp5_ParamLimits

0x4e92,	// (0x00071dbc) mup_equalizer_pane_cp6_ParamLimits

0x4ea6,	// (0x00071dd0) mup_equalizer_pane_cp7_ParamLimits

0x259e,	// (0x0006f4c8) main_gallery_pane

0x5ec0,	// (0x00072dea) smil2_volume_pane

0x5ec8,	// (0x00072df2) smil_status_volume_pane_g1_ParamLimits

0x5edb,	// (0x00072e05) smil_status_volume_pane_g2_ParamLimits

0xecc5,	// (0x0007bbef) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0007c59c) smil_status_volume_pane_g_ParamLimits

0x693c,	// (0x00073866) bg_popup_window_pane_cp07_ParamLimits

0x694a,	// (0x00073874) blid_firmament_pane

0x6aa7,	// (0x000739d1) aid_size_cell_gallery_ParamLimits

0x6aa7,	// (0x000739d1) aid_size_cell_gallery

0x6abd,	// (0x000739e7) grid_gallery_pane_ParamLimits

0x6abd,	// (0x000739e7) grid_gallery_pane

0x6ad6,	// (0x00073a00) cell_gallery_pane_ParamLimits

0x6ad6,	// (0x00073a00) cell_gallery_pane

0x6b1f,	// (0x00073a49) bg_cell_gallery_focus_pane_ParamLimits

0x6b1f,	// (0x00073a49) bg_cell_gallery_focus_pane

0x6b31,	// (0x00073a5b) cell_gallery_pane_g1_ParamLimits

0x6b31,	// (0x00073a5b) cell_gallery_pane_g1

0x6b3d,	// (0x00073a67) cell_gallery_pane_g2_ParamLimits

0x6b3d,	// (0x00073a67) cell_gallery_pane_g2

0x6b4a,	// (0x00073a74) cell_gallery_pane_g3_ParamLimits

0x6b4a,	// (0x00073a74) cell_gallery_pane_g3

0x6b57,	// (0x00073a81) cell_gallery_pane_g4_ParamLimits

0x6b57,	// (0x00073a81) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0007c64a) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0007c64a) cell_gallery_pane_g

0x6b63,	// (0x00073a8d) bg_cell_gallery_focus_pane_g1

0x6b6b,	// (0x00073a95) bg_cell_gallery_focus_pane_g2

0x6b73,	// (0x00073a9d) bg_cell_gallery_focus_pane_g3

0x6b7b,	// (0x00073aa5) bg_cell_gallery_focus_pane_g4

0x6b83,	// (0x00073aad) bg_cell_gallery_focus_pane_g5

0x6b8b,	// (0x00073ab5) bg_cell_gallery_focus_pane_g6

0x6b93,	// (0x00073abd) bg_cell_gallery_focus_pane_g7

0x6b9b,	// (0x00073ac5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0007c653) bg_cell_gallery_focus_pane_g

0x6ba3,	// (0x00073acd) aid_firma_cardinal

0x6bb7,	// (0x00073ae1) blid_firmament_pane_t1

0x6bce,	// (0x00073af8) blid_firmament_pane_t2

0x6be5,	// (0x00073b0f) blid_firmament_pane_t3

0x6bfc,	// (0x00073b26) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0007c664) blid_firmament_pane_t

0x6c13,	// (0x00073b3d) blid_sat_info_pane

0x6c23,	// (0x00073b4d) blid_sat_info_pane_g1

0x6c23,	// (0x00073b4d) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0007c66d) blid_sat_info_pane_g

0x6c2d,	// (0x00073b57) blid_sat_info_pane_t1

0x6c3b,	// (0x00073b65) smil2_volume_content_pane

0x6c44,	// (0x00073b6e) smil2_volume_pane_g1

0x6c4c,	// (0x00073b76) smil2_volume_content_pane_g1

0x6c55,	// (0x00073b7f) smil2_volume_content_pane_g2

0x6c5e,	// (0x00073b88) smil2_volume_content_pane_g3

0x6c67,	// (0x00073b91) smil2_volume_content_pane_g4

0x6c70,	// (0x00073b9a) smil2_volume_content_pane_g5

0x6c79,	// (0x00073ba3) smil2_volume_content_pane_g6

0x6c82,	// (0x00073bac) smil2_volume_content_pane_g7

0x6c8b,	// (0x00073bb5) smil2_volume_content_pane_g8

0x6c94,	// (0x00073bbe) smil2_volume_content_pane_g9

0x6c9d,	// (0x00073bc7) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0007c672) smil2_volume_content_pane_g

0x353f,	// (0x00070469) cale_week_day_heading_pane_t1_ParamLimits

0x356c,	// (0x00070496) cale_week_day_heading_pane_t2_ParamLimits

0x3599,	// (0x000704c3) cale_week_day_heading_pane_t3_ParamLimits

0x35c6,	// (0x000704f0) cale_week_day_heading_pane_t4_ParamLimits

0x35f3,	// (0x0007051d) cale_week_day_heading_pane_t5_ParamLimits

0x3620,	// (0x0007054a) cale_week_day_heading_pane_t6_ParamLimits

0x364d,	// (0x00070577) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0007c15e) cale_week_day_heading_pane_t_ParamLimits

0xb098,	// (0x00077fc2) bg_cale_side_pane_ParamLimits

0x367a,	// (0x000705a4) cale_week_time_pane_t1_ParamLimits

0x3692,	// (0x000705bc) cale_week_time_pane_t2_ParamLimits

0x36aa,	// (0x000705d4) cale_week_time_pane_t3_ParamLimits

0x36c2,	// (0x000705ec) cale_week_time_pane_t4_ParamLimits

0x36da,	// (0x00070604) cale_week_time_pane_t5_ParamLimits

0x36f2,	// (0x0007061c) cale_week_time_pane_t6_ParamLimits

0x370a,	// (0x00070634) cale_week_time_pane_t7_ParamLimits

0x3722,	// (0x0007064c) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0007c16d) cale_week_time_pane_t_ParamLimits

0x373a,	// (0x00070664) cell_cale_week_pane_g2_ParamLimits

0xb098,	// (0x00077fc2) bg_cale_side_pane_cp01_ParamLimits

0x44b9,	// (0x000713e3) cale_month_week_pane_t1_ParamLimits

0x44d0,	// (0x000713fa) cale_month_week_pane_t2_ParamLimits

0x44e7,	// (0x00071411) cale_month_week_pane_t3_ParamLimits

0x44fe,	// (0x00071428) cale_month_week_pane_t4_ParamLimits

0x4515,	// (0x0007143f) cale_month_week_pane_t5_ParamLimits

0x452c,	// (0x00071456) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0007c246) cale_month_week_pane_t_ParamLimits

0xb586,	// (0x000784b0) cell_cale_month_pane_g1_ParamLimits

0x259e,	// (0x0006f4c8) main_cale_event_viewer_pane

0x259e,	// (0x0006f4c8) listscroll_cale_event_viewer_pane

0x6ca6,	// (0x00073bd0) list_cale_ev_pane

0x6cae,	// (0x00073bd8) scroll_pane_cp023

0x6cba,	// (0x00073be4) field_cale_ev_pane_ParamLimits

0x6cba,	// (0x00073be4) field_cale_ev_pane

0x6cd8,	// (0x00073c02) field_cale_ev_content_pane_ParamLimits

0x6cd8,	// (0x00073c02) field_cale_ev_content_pane

0x6ce4,	// (0x00073c0e) field_cale_ev_pane_g1_ParamLimits

0x6ce4,	// (0x00073c0e) field_cale_ev_pane_g1

0x6cf0,	// (0x00073c1a) field_cale_ev_pane_g2_ParamLimits

0x6cf0,	// (0x00073c1a) field_cale_ev_pane_g2

0x6d08,	// (0x00073c32) field_cale_ev_pane_g3_ParamLimits

0x6d08,	// (0x00073c32) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0007c687) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0007c687) field_cale_ev_pane_g

0x6d20,	// (0x00073c4a) field_cale_ev_pane_t1_ParamLimits

0x6d20,	// (0x00073c4a) field_cale_ev_pane_t1

0x6d37,	// (0x00073c61) field_cale_ev_content_pane_t1_ParamLimits

0x6d37,	// (0x00073c61) field_cale_ev_content_pane_t1

0xbe21,	// (0x00078d4b) bg_button_pane_cp01

0xaeec,	// (0x00077e16) listscroll_cale_week_pane_ParamLimits

0x336b,	// (0x00070295) popup_toolbar_window_cp01

0xb086,	// (0x00077fb0) listscroll_cale_week_pane_t1_ParamLimits

0xaeec,	// (0x00077e16) listscroll_cale_day_pane_ParamLimits

0x465f,	// (0x00071589) popup_toolbar_window_cp02

0xb086,	// (0x00077fb0) listscroll_cale_day_pane_t1_ParamLimits

0xaeec,	// (0x00077e16) main_cale_month_pane_ParamLimits

0x5d43,	// (0x00072c6d) popup_toolbar_window_cp03_ParamLimits

0x5d43,	// (0x00072c6d) popup_toolbar_window_cp03

0x515a,	// (0x00072084) main_image_pane_g2_ParamLimits

0x515a,	// (0x00072084) main_image_pane_g2

0x516b,	// (0x00072095) main_image_pane_g3_ParamLimits

0x516b,	// (0x00072095) main_image_pane_g3

0x0002,

0xf54e,	// (0x0007c478) main_image_pane_g_ParamLimits

0xf54e,	// (0x0007c478) main_image_pane_g

0xbf7d,	// (0x00078ea7) main_image_pane_t1_ParamLimits

0x517c,	// (0x000720a6) main_image_pane_t2_ParamLimits

0x517c,	// (0x000720a6) main_image_pane_t2

0x518e,	// (0x000720b8) main_image_pane_t3_ParamLimits

0x518e,	// (0x000720b8) main_image_pane_t3

0x51b6,	// (0x000720e0) main_image_pane_t4_ParamLimits

0x51b6,	// (0x000720e0) main_image_pane_t4

0x0003,

0xf555,	// (0x0007c47f) main_image_pane_t_ParamLimits

0xf555,	// (0x0007c47f) main_image_pane_t

0x51d6,	// (0x00072100) popup_image_details_window_cp01

0x51e0,	// (0x0007210a) popup_toobar_trans_pane_cp01_ParamLimits

0x51e0,	// (0x0007210a) popup_toobar_trans_pane_cp01

0x5bc1,	// (0x00072aeb) popup_image_details_window_ParamLimits

0x5bc1,	// (0x00072aeb) popup_image_details_window

0x5bd9,	// (0x00072b03) popup_image_focus_window

0x60a9,	// (0x00072fd3) camera2_autofocus_pane_ParamLimits

0x60a9,	// (0x00072fd3) camera2_autofocus_pane

0x259e,	// (0x0006f4c8) bg_popup_sub_pane_cp06

0x6d55,	// (0x00073c7f) popup_image_focus_window_g1

0x6d5d,	// (0x00073c87) popup_image_focus_window_g2

0x6d65,	// (0x00073c8f) popup_image_focus_window_g3

0x6d6d,	// (0x00073c97) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0007c68e) popup_image_focus_window_g

0x6d75,	// (0x00073c9f) popup_image_focus_window_t1

0x6d83,	// (0x00073cad) popup_image_focus_window_t2

0x6d93,	// (0x00073cbd) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0007c697) popup_image_focus_window_t

0x6da1,	// (0x00073ccb) camera2_autofocus_pane_g1

0x0dfa,	// (0x0006dd24) bg_tb_trans_pane_cp01

0x6ddf,	// (0x00073d09) popup_image_details_window_g1

0x6df2,	// (0x00073d1c) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0007c6a9) popup_image_details_window_g

0x6e1b,	// (0x00073d45) popup_image_details_window_t1

0x6e2d,	// (0x00073d57) popup_image_details_window_t2

0x6e46,	// (0x00073d70) popup_image_details_window_t3

0x6e5a,	// (0x00073d84) popup_image_details_window_t4

0x6e75,	// (0x00073d9f) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0007c6b0) popup_image_details_window_t

0xaebe,	// (0x00077de8) bg_calc_paper_pane_ParamLimits

0x259e,	// (0x0006f4c8) grid_highlight_pane_cp013

0xaed2,	// (0x00077dfc) list_calc_pane_ParamLimits

0xaee4,	// (0x00077e0e) scroll_pane_cp024

0xaeec,	// (0x00077e16) bg_calc_display_pane_ParamLimits

0x31aa,	// (0x000700d4) calc_display_pane_t1_ParamLimits

0x31bc,	// (0x000700e6) calc_display_pane_t2_ParamLimits

0xaef8,	// (0x00077e22) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0007c0e0) calc_display_pane_t_ParamLimits

0x3276,	// (0x000701a0) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0007c0fd) cell_calc_pane_g

0x327f,	// (0x000701a9) cell_calc_pane_t1

0xaf6f,	// (0x00077e99) grid_highlight_pane_cp02_ParamLimits

0xaf85,	// (0x00077eaf) toolbar_button_pane_cp01_ParamLimits

0xaf85,	// (0x00077eaf) toolbar_button_pane_cp01

0xbfc2,	// (0x00078eec) temp_image_control_pane_ParamLimits

0xbfc2,	// (0x00078eec) temp_image_control_pane

0x0dfa,	// (0x0006dd24) main_mp3_pane

0xc883,	// (0x000797ad) temp_image_control_pane_g1_ParamLimits

0xc883,	// (0x000797ad) temp_image_control_pane_g1

0xc891,	// (0x000797bb) temp_image_control_pane_g2_ParamLimits

0xc891,	// (0x000797bb) temp_image_control_pane_g2

0xc8a3,	// (0x000797cd) temp_image_control_pane_g3_ParamLimits

0xc8a3,	// (0x000797cd) temp_image_control_pane_g3

0x6e8f,	// (0x00073db9) temp_image_control_pane_g4_ParamLimits

0x6e8f,	// (0x00073db9) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0007c6bb) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0007c6bb) temp_image_control_pane_g

0xc883,	// (0x000797ad) main_mp3_pane_g1

0x6ea2,	// (0x00073dcc) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0007c6c4) main_mp3_pane_g

0xc8e6,	// (0x00079810) main_mp3_pane_t1

0xb167,	// (0x00078091) main_camera_pane_g8_ParamLimits

0xb167,	// (0x00078091) main_camera_pane_g8

0x39f4,	// (0x0007091e) main_video_pane_g7_ParamLimits

0x39f4,	// (0x0007091e) main_video_pane_g7

0xed05,	// (0x0007bc2f) main_camera2_pane_t7_ParamLimits

0xed05,	// (0x0007bc2f) main_camera2_pane_t7

0xb372,	// (0x0007829c) scroll_pane_cp025_ParamLimits

0xb372,	// (0x0007829c) scroll_pane_cp025

0xb386,	// (0x000782b0) scroll_pane_cp026_ParamLimits

0xb386,	// (0x000782b0) scroll_pane_cp026

0xb395,	// (0x000782bf) wml_content_pane_ParamLimits

0x259e,	// (0x0006f4c8) main_touch_calib_pane

0x6f6b,	// (0x00073e95) main_touch_calib_pane_g1

0x6f77,	// (0x00073ea1) main_touch_calib_pane_g2

0x6f83,	// (0x00073ead) main_touch_calib_pane_g3

0x6f8f,	// (0x00073eb9) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0007c6e2) main_touch_calib_pane_g

0x6f9b,	// (0x00073ec5) main_touch_calib_pane_t1

0x6fb5,	// (0x00073edf) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0007c6eb) main_touch_calib_pane_t

0xbbd9,	// (0x00078b03) mup_progress_pane_cp02

0xbbf8,	// (0x00078b22) navi_pane_g1

0xbc5a,	// (0x00078b84) navi_pane_mp_t3

0x0dfa,	// (0x0006dd24) main_mp3_pane_ParamLimits

0x5d94,	// (0x00072cbe) navi_pane_ParamLimits

0xc883,	// (0x000797ad) main_mp3_pane_g1_ParamLimits

0x6ea2,	// (0x00073dcc) main_mp3_pane_g2_ParamLimits

0x6eb0,	// (0x00073dda) main_mp3_pane_g3_ParamLimits

0x6eb0,	// (0x00073dda) main_mp3_pane_g3

0x6ebe,	// (0x00073de8) main_mp3_pane_g4_ParamLimits

0x6ebe,	// (0x00073de8) main_mp3_pane_g4

0xc8b3,	// (0x000797dd) main_mp3_pane_g5_ParamLimits

0xc8b3,	// (0x000797dd) main_mp3_pane_g5

0xc8c1,	// (0x000797eb) main_mp3_pane_g6_ParamLimits

0xc8c1,	// (0x000797eb) main_mp3_pane_g6

0xc8ce,	// (0x000797f8) main_mp3_pane_g7_ParamLimits

0xc8ce,	// (0x000797f8) main_mp3_pane_g7

0xc8da,	// (0x00079804) main_mp3_pane_g8_ParamLimits

0xc8da,	// (0x00079804) main_mp3_pane_g8

0xf79a,	// (0x0007c6c4) main_mp3_pane_g_ParamLimits

0x6eca,	// (0x00073df4) main_mp3_pane_t2

0x6ed8,	// (0x00073e02) main_mp3_pane_t3

0xc8f4,	// (0x0007981e) main_mp3_pane_t4

0xc902,	// (0x0007982c) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0007c6d5) main_mp3_pane_t

0xc910,	// (0x0007983a) mup_progress_pane_cp01

0xadeb,	// (0x00077d15) aid_zoom_text_secondary2

0x6ca6,	// (0x00073bd0) list_cale_ev2_pane

0x6cae,	// (0x00073bd8) scroll_pane_cp023_ParamLimits

0x700b,	// (0x00073f35) field_cale_ev2_pane_ParamLimits

0x700b,	// (0x00073f35) field_cale_ev2_pane

0x702b,	// (0x00073f55) field_cale_ev2_pane_g1_ParamLimits

0x702b,	// (0x00073f55) field_cale_ev2_pane_g1

0x7037,	// (0x00073f61) field_cale_ev2_pane_g2_ParamLimits

0x7037,	// (0x00073f61) field_cale_ev2_pane_g2

0x704f,	// (0x00073f79) field_cale_ev2_pane_g3_ParamLimits

0x704f,	// (0x00073f79) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0007c6f6) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0007c6f6) field_cale_ev2_pane_g

0xc918,	// (0x00079842) field_cale_ev2_pane_t1_ParamLimits

0xc918,	// (0x00079842) field_cale_ev2_pane_t1

0xc92f,	// (0x00079859) field_cale_ev2_pane_t2_ParamLimits

0xc92f,	// (0x00079859) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0007c6ff) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0007c6ff) field_cale_ev2_pane_t

0x500f,	// (0x00071f39) main_postcard_pane_g5_ParamLimits

0x500f,	// (0x00071f39) main_postcard_pane_g5

0x5025,	// (0x00071f4f) main_postcard_pane_g6_ParamLimits

0x5025,	// (0x00071f4f) main_postcard_pane_g6

0x37b4,	// (0x000706de) camera2_autofocus_pane_cp_ParamLimits

0x37b4,	// (0x000706de) camera2_autofocus_pane_cp

0x0dfa,	// (0x0006dd24) main_mup3_pane

0x7087,	// (0x00073fb1) main_mup3_pane_g1_ParamLimits

0x7087,	// (0x00073fb1) main_mup3_pane_g1

0x70a9,	// (0x00073fd3) main_mup3_pane_g2_ParamLimits

0x70a9,	// (0x00073fd3) main_mup3_pane_g2

0x7127,	// (0x00074051) main_mup3_pane_g3_ParamLimits

0x7127,	// (0x00074051) main_mup3_pane_g3

0x7169,	// (0x00074093) main_mup3_pane_g4_ParamLimits

0x7169,	// (0x00074093) main_mup3_pane_g4

0x71ab,	// (0x000740d5) main_mup3_pane_g5_ParamLimits

0x71ab,	// (0x000740d5) main_mup3_pane_g5

0x71ed,	// (0x00074117) main_mup3_pane_g6_ParamLimits

0x71ed,	// (0x00074117) main_mup3_pane_g6

0xc944,	// (0x0007986e) main_mup3_pane_g7_ParamLimits

0xc944,	// (0x0007986e) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0007c70f) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0007c70f) main_mup3_pane_g

0x7267,	// (0x00074191) main_mup3_pane_t1_ParamLimits

0x7267,	// (0x00074191) main_mup3_pane_t1

0x72d7,	// (0x00074201) main_mup3_pane_t2_ParamLimits

0x72d7,	// (0x00074201) main_mup3_pane_t2

0x73a7,	// (0x000742d1) main_mup3_pane_t4_ParamLimits

0x73a7,	// (0x000742d1) main_mup3_pane_t4

0x73fd,	// (0x00074327) main_mup3_pane_t5_ParamLimits

0x73fd,	// (0x00074327) main_mup3_pane_t5

0x74b1,	// (0x000743db) main_mup3_pane_t6_ParamLimits

0x74b1,	// (0x000743db) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0007c720) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0007c720) main_mup3_pane_t

0x7565,	// (0x0007448f) mup3_progress_pane_ParamLimits

0x7565,	// (0x0007448f) mup3_progress_pane

0x75e7,	// (0x00074511) popup_mup3_control_window_ParamLimits

0x75e7,	// (0x00074511) popup_mup3_control_window

0xc952,	// (0x0007987c) popup_mup3_text_window

0x7619,	// (0x00074543) mup3_progress_pane_t1

0x7630,	// (0x0007455a) mup3_progress_pane_t2

0xc95a,	// (0x00079884) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0007c72d) mup3_progress_pane_t

0xc971,	// (0x0007989b) mup_progress_pane_cp03

0x259e,	// (0x0006f4c8) bg_tb_trans_pane_cp04

0x7647,	// (0x00074571) mup3_volume_pane

0x764f,	// (0x00074579) popup_mup3_control_window_g1

0x7658,	// (0x00074582) mup3_volume_pane_g1

0x7661,	// (0x0007458b) mup3_volume_pane_g2

0x766a,	// (0x00074594) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0007c734) mup3_volume_pane_g

0x259e,	// (0x0006f4c8) bg_tb_trans_pane_cp03

0xc981,	// (0x000798ab) popup_mup3_text_window_g1

0xc989,	// (0x000798b3) popup_mup3_text_window_t1

0xaf46,	// (0x00077e70) list_calc_item_pane_g1_ParamLimits

0x687f,	// (0x000737a9) mup_volume_pane_cp_g1

0x6fcf,	// (0x00073ef9) main_touch_calib_pane_t3

0x6fe3,	// (0x00073f0d) main_touch_calib_pane_t4

0x6ff7,	// (0x00073f21) main_touch_calib_pane_t5

0x25a8,	// (0x0006f4d2) aid_cell_size_toolbar2

0x25b0,	// (0x0006f4da) aid_popup3_width_pane

0xaddb,	// (0x00077d05) aid_zoom_text_msg_primary

0xb147,	// (0x00078071) vorec_t7

0xaf0a,	// (0x00077e34) bg_calc_paper_pane_g1_ParamLimits

0xaf16,	// (0x00077e40) bg_calc_paper_pane_g2_ParamLimits

0xaf22,	// (0x00077e4c) bg_calc_paper_pane_g3_ParamLimits

0xaf2e,	// (0x00077e58) bg_calc_paper_pane_g4_ParamLimits

0xaf3a,	// (0x00077e64) bg_calc_paper_pane_g5_ParamLimits

0x3203,	// (0x0007012d) bg_calc_paper_pane_g6_ParamLimits

0x3212,	// (0x0007013c) bg_calc_paper_pane_g7_ParamLimits

0x3221,	// (0x0007014b) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0007c0e7) bg_calc_paper_pane_g_ParamLimits

0x3234,	// (0x0007015e) calc_bg_paper_pane_g9_ParamLimits

0x3902,	// (0x0007082c) image_qvga_pane_ParamLimits

0x3902,	// (0x0007082c) image_qvga_pane

0xadf3,	// (0x00077d1d) bg_popup_sub_pane_cp04_ParamLimits

0xbef9,	// (0x00078e23) popup_mup_playback_window_g1_ParamLimits

0xbf05,	// (0x00078e2f) popup_mup_playback_window_t1_ParamLimits

0xbf1a,	// (0x00078e44) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0007c473) popup_mup_playback_window_t_ParamLimits

0x659c,	// (0x000734c6) main_mup2_pane_g3_ParamLimits

0x659c,	// (0x000734c6) main_mup2_pane_g3

0x3bb6,	// (0x00070ae0) popup_toolbar_window_cp04

0xc2fc,	// (0x00079226) popup_call2_audio_second_window_g3_ParamLimits

0xc2fc,	// (0x00079226) popup_call2_audio_second_window_g3

0xc706,	// (0x00079630) popup_call2_audio_first_window_g4_ParamLimits

0xc706,	// (0x00079630) popup_call2_audio_first_window_g4

0x0cda,	// (0x0006dc04) popup_call2_audio_in_window_g4_ParamLimits

0x0cda,	// (0x0006dc04) popup_call2_audio_in_window_g4

0x513c,	// (0x00072066) aid_area_sk_bg_cut_ParamLimits

0x513c,	// (0x00072066) aid_area_sk_bg_cut

0xbf2f,	// (0x00078e59) aid_area_sk_bg_cut_2_ParamLimits

0xbf2f,	// (0x00078e59) aid_area_sk_bg_cut_2

0x6b0f,	// (0x00073a39) aid_placing_details_win

0x6b17,	// (0x00073a41) aid_placing_details_win_2

0x6da1,	// (0x00073ccb) camera2_autofocus_pane_g1_ParamLimits

0x27ab,	// (0x0006f6d5) popup_fixed_preview_cale_window_ParamLimits

0x27ab,	// (0x0006f6d5) popup_fixed_preview_cale_window

0xbcb2,	// (0x00078bdc) navi_slider_pane_g3

0xbcbb,	// (0x00078be5) navi_slider_pane_g4

0xbcc4,	// (0x00078bee) navi_slider_pane_g5

0xbcb2,	// (0x00078bdc) navi_slider_pane_g6

0xbccd,	// (0x00078bf7) navi_slider_pane_g7

0xbdee,	// (0x00078d18) mup_scale_pane_g3

0xbdf7,	// (0x00078d21) mup_scale_pane_g4

0xbe00,	// (0x00078d2a) mup_scale_pane_g5

0x4eba,	// (0x00071de4) mup_scale_pane_g6

0x4ec3,	// (0x00071ded) mup_scale_pane_g7

0xbcb2,	// (0x00078bdc) cams2_slider_pane_g3

0x692c,	// (0x00073856) cams2_slider_pane_g4

0xed73,	// (0x0007bc9d) cams2_slider_pane_g5

0xbcb2,	// (0x00078bdc) cams2_slider_pane_g6

0xed7b,	// (0x0007bca5) cams2_slider_pane_g7

0x6c23,	// (0x00073b4d) camera2_autofocus_pane_cp_g1

0xc997,	// (0x000798c1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc997,	// (0x000798c1) bg_popup_preview_window_pane_cp02

0xc9a3,	// (0x000798cd) list_fp_cale_pane_ParamLimits

0xc9a3,	// (0x000798cd) list_fp_cale_pane

0xc9af,	// (0x000798d9) popup_fixed_preview_cale_window_t1_ParamLimits

0xc9af,	// (0x000798d9) popup_fixed_preview_cale_window_t1

0x7673,	// (0x0007459d) popup_fixed_preview_cale_window_t2_ParamLimits

0x7673,	// (0x0007459d) popup_fixed_preview_cale_window_t2

0x7688,	// (0x000745b2) popup_fixed_preview_cale_window_t3_ParamLimits

0x7688,	// (0x000745b2) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0007c73b) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0007c73b) popup_fixed_preview_cale_window_t

0x769d,	// (0x000745c7) list_single_fp_cale_pane_ParamLimits

0x769d,	// (0x000745c7) list_single_fp_cale_pane

0xc9cd,	// (0x000798f7) list_single_fp_cale_pane_g1_ParamLimits

0xc9cd,	// (0x000798f7) list_single_fp_cale_pane_g1

0xc9d9,	// (0x00079903) list_single_fp_cale_pane_g2_ParamLimits

0xc9d9,	// (0x00079903) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0007c742) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0007c742) list_single_fp_cale_pane_g

0xc9f2,	// (0x0007991c) list_single_fp_cale_pane_t1_ParamLimits

0xc9f2,	// (0x0007991c) list_single_fp_cale_pane_t1

0xca04,	// (0x0007992e) list_single_fp_cale_pane_t2_ParamLimits

0xca04,	// (0x0007992e) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0007c749) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0007c749) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x259e,	// (0x0006f4c8) main_dialer_pane

0x76b2,	// (0x000745dc) aid_cell_size_keypad

0x76bc,	// (0x000745e6) dialer_ne_pane

0x76c4,	// (0x000745ee) grid_dialer_command_1_pane

0x76cc,	// (0x000745f6) grid_dialer_command_2_pane

0x76d4,	// (0x000745fe) grid_dialer_keypad_pane

0x76e6,	// (0x00074610) bg_popup_call_pane_cp06_ParamLimits

0x76e6,	// (0x00074610) bg_popup_call_pane_cp06

0x76f2,	// (0x0007461c) dialer_ne_clear_pane_ParamLimits

0x76f2,	// (0x0007461c) dialer_ne_clear_pane

0xca37,	// (0x00079961) dialer_ne_pane_g1

0xca3f,	// (0x00079969) dialer_ne_pane_t1_ParamLimits

0xca3f,	// (0x00079969) dialer_ne_pane_t1

0x76fe,	// (0x00074628) dialer_ne_pane_t2_ParamLimits

0x76fe,	// (0x00074628) dialer_ne_pane_t2

0x7728,	// (0x00074652) dialer_ne_pane_t3_ParamLimits

0x7728,	// (0x00074652) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0007c74e) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0007c74e) dialer_ne_pane_t

0x7758,	// (0x00074682) dialer_ne_pane_t3_copy1_ParamLimits

0x7758,	// (0x00074682) dialer_ne_pane_t3_copy1

0x7787,	// (0x000746b1) cell_dialer_keypad_pane_ParamLimits

0x7787,	// (0x000746b1) cell_dialer_keypad_pane

0x779e,	// (0x000746c8) cell_dialer_command_1_pane_ParamLimits

0x779e,	// (0x000746c8) cell_dialer_command_1_pane

0x77b4,	// (0x000746de) cell_dialer_command_2_pane_ParamLimits

0x77b4,	// (0x000746de) cell_dialer_command_2_pane

0xca51,	// (0x0007997b) bg_button_pane_cp02_ParamLimits

0xca51,	// (0x0007997b) bg_button_pane_cp02

0x77c3,	// (0x000746ed) cell_dialer_keypad_pane_g1_ParamLimits

0x77c3,	// (0x000746ed) cell_dialer_keypad_pane_g1

0xca51,	// (0x0007997b) bg_button_pane_cp03_ParamLimits

0xca51,	// (0x0007997b) bg_button_pane_cp03

0x77d7,	// (0x00074701) cell_dialer_command_1_pane_g1_ParamLimits

0x77d7,	// (0x00074701) cell_dialer_command_1_pane_g1

0xca5d,	// (0x00079987) bg_button_pane_cp04

0x77eb,	// (0x00074715) cell_dialer_command_2_pane_g1

0xbc98,	// (0x00078bc2) bg_button_pane_cp06

0xca65,	// (0x0007998f) dialer_ne_clear_pane_g1

0x49fe,	// (0x00071928) navi_pane_g2

0x4a2c,	// (0x00071956) navi_pane_g3

0x0002,

0xf44c,	// (0x0007c376) navi_pane_g

0x4a55,	// (0x0007197f) navi_pane_mv_g2

0x4a7c,	// (0x000719a6) navi_pane_mv_g5

0x4a84,	// (0x000719ae) navi_pane_mv_t1

0xaeec,	// (0x00077e16) main_clock2_pane

0x781f,	// (0x00074749) main_clock2_list_pane_ParamLimits

0x781f,	// (0x00074749) main_clock2_list_pane

0x7855,	// (0x0007477f) main_clock2_pane_t1_ParamLimits

0x7855,	// (0x0007477f) main_clock2_pane_t1

0x7891,	// (0x000747bb) main_clock2_pane_t2_ParamLimits

0x7891,	// (0x000747bb) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0007c755) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0007c755) main_clock2_pane_t

0x791b,	// (0x00074845) popup_clock_analogue_window_cp03_ParamLimits

0x791b,	// (0x00074845) popup_clock_analogue_window_cp03

0x7940,	// (0x0007486a) popup_clock_digital_window_cp02_ParamLimits

0x7940,	// (0x0007486a) popup_clock_digital_window_cp02

0x79b1,	// (0x000748db) main_clock2_list_single_pane_ParamLimits

0x79b1,	// (0x000748db) main_clock2_list_single_pane

0xbc98,	// (0x00078bc2) list_highlight_pane_cp05

0xca6d,	// (0x00079997) main_clock2_list_single_pane_t1

0x3bb6,	// (0x00070ae0) popup_toolbar_window_cp04_ParamLimits

0x6daf,	// (0x00073cd9) camera2_autofocus_pane_g2_ParamLimits

0x6daf,	// (0x00073cd9) camera2_autofocus_pane_g2

0x6dbb,	// (0x00073ce5) camera2_autofocus_pane_g3_ParamLimits

0x6dbb,	// (0x00073ce5) camera2_autofocus_pane_g3

0x6dc7,	// (0x00073cf1) camera2_autofocus_pane_g4_ParamLimits

0x6dc7,	// (0x00073cf1) camera2_autofocus_pane_g4

0x6dd3,	// (0x00073cfd) camera2_autofocus_pane_g5_ParamLimits

0x6dd3,	// (0x00073cfd) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0007c69e) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0007c69e) camera2_autofocus_pane_g

0x7067,	// (0x00073f91) camera2_autofocus_pane_cp_g2

0x706f,	// (0x00073f99) camera2_autofocus_pane_cp_g3

0x7077,	// (0x00073fa1) camera2_autofocus_pane_cp_g4

0x707f,	// (0x00073fa9) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0007c704) camera2_autofocus_pane_cp_g

0x76de,	// (0x00074608) popup_dialer_spcha_window

0x259e,	// (0x0006f4c8) bg_popup_sub_pane_cp07

0xca7b,	// (0x000799a5) list_spcha_pane

0xca83,	// (0x000799ad) list_single_spcha_pane_ParamLimits

0xca83,	// (0x000799ad) list_single_spcha_pane

0x259e,	// (0x0006f4c8) list_highlight_pane_cp06

0xca94,	// (0x000799be) list_single_spcha_pane_t1

0x0a84,	// (0x0006d9ae) popup_call2_audio_out_window_g4_ParamLimits

0x0a84,	// (0x0006d9ae) popup_call2_audio_out_window_g4

0x259e,	// (0x0006f4c8) main_imed2_pane

0x5be1,	// (0x00072b0b) popup_imed_adjust2_window

0x5bf4,	// (0x00072b1e) popup_imed_trans_window_ParamLimits

0x5bf4,	// (0x00072b1e) popup_imed_trans_window

0x6995,	// (0x000738bf) popup_blid_sat_info2_window_t1

0x69a3,	// (0x000738cd) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0007c633) popup_blid_sat_info2_window_t

0x7a5b,	// (0x00074985) aid_size_cell_colour_35

0x7a7b,	// (0x000749a5) aid_size_cell_colour_112

0x7a9b,	// (0x000749c5) aid_size_cell_effect

0x5a9a,	// (0x000729c4) bg_tb_trans_pane_cp02

0xb6ff,	// (0x00078629) heading_imed_pane

0x7abb,	// (0x000749e5) listscroll_imed_pane

0xcaa2,	// (0x000799cc) heading_imed_pane_g1

0xcaaa,	// (0x000799d4) heading_imed_pane_t1

0xcab8,	// (0x000799e2) grid_imed_colour_35_pane_ParamLimits

0xcab8,	// (0x000799e2) grid_imed_colour_35_pane

0x7ac7,	// (0x000749f1) grid_imed_effect_pane

0xcacf,	// (0x000799f9) list_imed_aspect_pane

0x7add,	// (0x00074a07) scroll_pane_cp027_ParamLimits

0x7add,	// (0x00074a07) scroll_pane_cp027

0x7aee,	// (0x00074a18) cell_imed_effect_pane_ParamLimits

0x7aee,	// (0x00074a18) cell_imed_effect_pane

0xcad7,	// (0x00079a01) cell_imed_colour_pane_ParamLimits

0xcad7,	// (0x00079a01) cell_imed_colour_pane

0xcb19,	// (0x00079a43) cell_imed_colour_pane_g1_ParamLimits

0xcb19,	// (0x00079a43) cell_imed_colour_pane_g1

0xcb2a,	// (0x00079a54) hgihlgiht_grid_pane_cp016_ParamLimits

0xcb2a,	// (0x00079a54) hgihlgiht_grid_pane_cp016

0x7b15,	// (0x00074a3f) cell_imed_effect_pane_g1

0x7b1d,	// (0x00074a47) grid_highlight_pane_cp017

0xcb3b,	// (0x00079a65) list_imed_single_pane_ParamLimits

0xcb3b,	// (0x00079a65) list_imed_single_pane

0x259e,	// (0x0006f4c8) list_highlight_pane_cp07

0xcb50,	// (0x00079a7a) list_imed_aspect_pane_comp1_t1

0x5a9a,	// (0x000729c4) bg_tb_trans_pane_cp05

0xcb72,	// (0x00079a9c) popup_imed_adjust2_window_g1

0xcb99,	// (0x00079ac3) popup_imed_adjust2_window_t1

0xcbb1,	// (0x00079adb) slider_imed_adjust_pane

0xcbc5,	// (0x00079aef) slider_imed_adjust_pane_g1

0xcbd5,	// (0x00079aff) slider_imed_adjust_pane_g2

0xcbe5,	// (0x00079b0f) slider_imed_adjust_pane_g3

0xcbf6,	// (0x00079b20) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0007c772) slider_imed_adjust_pane_g

0x7b26,	// (0x00074a50) aid_size_cell_clipart2

0x7b32,	// (0x00074a5c) grid_imed_clipart_pane

0xcc07,	// (0x00079b31) scroll_pane_cp031

0x7b3c,	// (0x00074a66) cell_imed_clipart_pane_ParamLimits

0x7b3c,	// (0x00074a66) cell_imed_clipart_pane

0x7b5e,	// (0x00074a88) cell_imed_clipart_pane_g1

0x259e,	// (0x0006f4c8) grid_highlight_pane_cp014

0x7834,	// (0x0007475e) main_clock2_pane_g1_ParamLimits

0x7834,	// (0x0007475e) main_clock2_pane_g1

0x795c,	// (0x00074886) aid_call2_pane_cp10

0x796e,	// (0x00074898) aid_call_pane_cp10

0xbbcd,	// (0x00078af7) popup_clock_analogue_window_cp10_g1

0xbbcd,	// (0x00078af7) popup_clock_analogue_window_cp10_g2

0x7980,	// (0x000748aa) popup_clock_analogue_window_cp10_g3

0x7980,	// (0x000748aa) popup_clock_analogue_window_cp10_g4

0xbbcd,	// (0x00078af7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0007c760) popup_clock_analogue_window_cp10_g

0x7992,	// (0x000748bc) popup_clock_analogue_window_cp10_t1

0x79c3,	// (0x000748ed) clock_digital_number_pane_cp10_ParamLimits

0x79c3,	// (0x000748ed) clock_digital_number_pane_cp10

0x79db,	// (0x00074905) clock_digital_number_pane_cp11_ParamLimits

0x79db,	// (0x00074905) clock_digital_number_pane_cp11

0x79f3,	// (0x0007491d) clock_digital_number_pane_cp12_ParamLimits

0x79f3,	// (0x0007491d) clock_digital_number_pane_cp12

0x7a0b,	// (0x00074935) clock_digital_number_pane_cp13_ParamLimits

0x7a0b,	// (0x00074935) clock_digital_number_pane_cp13

0x7a23,	// (0x0007494d) clock_digital_separator_pane_cp10_ParamLimits

0x7a23,	// (0x0007494d) clock_digital_separator_pane_cp10

0x7a3b,	// (0x00074965) popup_clock_digital_window_cp02_t1_ParamLimits

0x7a3b,	// (0x00074965) popup_clock_digital_window_cp02_t1

0x2f1a,	// (0x0006fe44) clock_digital_number_pane_cp10_g1

0x2f1a,	// (0x0006fe44) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0007c77b) clock_digital_number_pane_cp10_g

0x2f1a,	// (0x0006fe44) clock_digital_separator_pane_cp10_g1

0x2f1a,	// (0x0006fe44) clock_digital_separator_pane_g2_cp10

0xbc68,	// (0x00078b92) navi_pane_vded_g4

0xbc71,	// (0x00078b9b) navi_pane_vded_g5

0xbc7a,	// (0x00078ba4) navi_pane_vded_t1

0x259e,	// (0x0006f4c8) main_vded_pane

0x7b67,	// (0x00074a91) main_vded_pane_g1

0x7b71,	// (0x00074a9b) main_vded_pane_g2

0x7b7b,	// (0x00074aa5) main_vded_pane_g3

0x0002,

0xf856,	// (0x0007c780) main_vded_pane_g

0x7b85,	// (0x00074aaf) main_vded_pane_t1

0x7b93,	// (0x00074abd) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0007c787) main_vded_pane_t

0x7ba1,	// (0x00074acb) vded_slider_pane

0x7ba9,	// (0x00074ad3) vded_video_pane

0xcc0f,	// (0x00079b39) vded_video_pane_g1

0x7bb1,	// (0x00074adb) vded_video_pane_g2

0x6c23,	// (0x00073b4d) vded_video_pane_g3

0x0002,

0xf862,	// (0x0007c78c) vded_video_pane_g

0xcc19,	// (0x00079b43) vded_slider_pane_g1

0x687f,	// (0x000737a9) vded_slider_pane_g2

0xcc22,	// (0x00079b4c) vded_slider_pane_g3

0xcc2b,	// (0x00079b55) vded_slider_pane_g4

0xcc34,	// (0x00079b5e) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0007c793) vded_slider_pane_g

0x75cf,	// (0x000744f9) mup3_rocker_pane_ParamLimits

0x75cf,	// (0x000744f9) mup3_rocker_pane

0x7bba,	// (0x00074ae4) mup3_control_keys_pane_g1

0x7bc2,	// (0x00074aec) mup3_control_keys_pane_g2

0x7bca,	// (0x00074af4) mup3_control_keys_pane_g3

0x7bd2,	// (0x00074afc) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0007c79e) mup3_control_keys_pane_g

0x27ec,	// (0x0006f716) popup_toolbar2_fixed_window_cp01_ParamLimits

0x27ec,	// (0x0006f716) popup_toolbar2_fixed_window_cp01

0x7603,	// (0x0007452d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7603,	// (0x0007452d) popup_toolbar2_fixed_window_cp02

0xc46e,	// (0x00079398) popup_call2_audio_second_window_t4_ParamLimits

0xc46e,	// (0x00079398) popup_call2_audio_second_window_t4

0x08f1,	// (0x0006d81b) popup_call2_audio_first_window_t6_ParamLimits

0x08f1,	// (0x0006d81b) popup_call2_audio_first_window_t6

0x0b87,	// (0x0006dab1) popup_call2_audio_out_window_t6_ParamLimits

0x0b87,	// (0x0006dab1) popup_call2_audio_out_window_t6

0x259e,	// (0x0006f4c8) main_vitu_pane

0x7be2,	// (0x00074b0c) aid_size_cell_itu_ParamLimits

0x7be2,	// (0x00074b0c) aid_size_cell_itu

0x0dfa,	// (0x0006dd24) bg_popup_window_pane_cp08_ParamLimits

0x0dfa,	// (0x0006dd24) bg_popup_window_pane_cp08

0x7bf8,	// (0x00074b22) field_vitu_entry_pane_ParamLimits

0x7bf8,	// (0x00074b22) field_vitu_entry_pane

0x7c0f,	// (0x00074b39) grid_vitu_function_pane_ParamLimits

0x7c0f,	// (0x00074b39) grid_vitu_function_pane

0x7c2a,	// (0x00074b54) grid_vitu_itu_pane_ParamLimits

0x7c2a,	// (0x00074b54) grid_vitu_itu_pane

0x7c48,	// (0x00074b72) cell_vitu_itu_pane_ParamLimits

0x7c48,	// (0x00074b72) cell_vitu_itu_pane

0x7c6a,	// (0x00074b94) cell_vitu_function_pane_ParamLimits

0x7c6a,	// (0x00074b94) cell_vitu_function_pane

0x0dfa,	// (0x0006dd24) bg_popup_sub_pane_cp08_ParamLimits

0x0dfa,	// (0x0006dd24) bg_popup_sub_pane_cp08

0x7c83,	// (0x00074bad) field_vitu_entry_pane_t1_ParamLimits

0x7c83,	// (0x00074bad) field_vitu_entry_pane_t1

0xcc55,	// (0x00079b7f) field_vitu_entry_pane_t2_ParamLimits

0xcc55,	// (0x00079b7f) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0007c7ac) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0007c7ac) field_vitu_entry_pane_t

0xcc72,	// (0x00079b9c) bg_button_pane_cp05_ParamLimits

0xcc72,	// (0x00079b9c) bg_button_pane_cp05

0x7ca1,	// (0x00074bcb) cell_vitu_itu_pane_g1

0x7cb9,	// (0x00074be3) cell_vitu_itu_pane_t1_ParamLimits

0x7cb9,	// (0x00074be3) cell_vitu_itu_pane_t1

0x7ccb,	// (0x00074bf5) cell_vitu_itu_pane_t2_ParamLimits

0x7ccb,	// (0x00074bf5) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0007c7b1) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0007c7b1) cell_vitu_itu_pane_t

0xcc80,	// (0x00079baa) bg_button_pane_cp07

0x7d00,	// (0x00074c2a) cell_vitu_function_pane_g1

0xae86,	// (0x00077db0) main_calc_pane_g1

0x25e0,	// (0x0006f50a) aid_visual_content_pane

0x259e,	// (0x0006f4c8) main_vradio_pane

0x7d09,	// (0x00074c33) main_vradio_pane_g1_ParamLimits

0x7d09,	// (0x00074c33) main_vradio_pane_g1

0xcc8a,	// (0x00079bb4) main_vradio_pane_g2_ParamLimits

0xcc8a,	// (0x00079bb4) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0007c7b8) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0007c7b8) main_vradio_pane_g

0x7d22,	// (0x00074c4c) main_vradio_pane_t1_ParamLimits

0x7d22,	// (0x00074c4c) main_vradio_pane_t1

0x7d37,	// (0x00074c61) main_vradio_pane_t2_ParamLimits

0x7d37,	// (0x00074c61) main_vradio_pane_t2

0xcc97,	// (0x00079bc1) main_vradio_pane_t3_ParamLimits

0xcc97,	// (0x00079bc1) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0007c7bd) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0007c7bd) main_vradio_pane_t

0x7d4c,	// (0x00074c76) vradio_rocker_control_pane_ParamLimits

0x7d4c,	// (0x00074c76) vradio_rocker_control_pane

0x7d5e,	// (0x00074c88) vradio_station_info_pane_ParamLimits

0x7d5e,	// (0x00074c88) vradio_station_info_pane

0xccab,	// (0x00079bd5) vradio_frequency_info_pane_ParamLimits

0xccab,	// (0x00079bd5) vradio_frequency_info_pane

0x6c23,	// (0x00073b4d) vradio_station_info_pane_g1

0xccba,	// (0x00079be4) vradio_station_info_pane_t1_ParamLimits

0xccba,	// (0x00079be4) vradio_station_info_pane_t1

0xccdc,	// (0x00079c06) vradio_station_info_pane_t2_ParamLimits

0xccdc,	// (0x00079c06) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0007c7c4) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0007c7c4) vradio_station_info_pane_t

0xccee,	// (0x00079c18) vradio_tuning_pane

0xccf6,	// (0x00079c20) vradio_rocker_control_pane_g1

0xccfe,	// (0x00079c28) vradio_rocker_control_pane_g2

0xcd06,	// (0x00079c30) vradio_rocker_control_pane_g3

0xcd0e,	// (0x00079c38) vradio_rocker_control_pane_g4

0xcd16,	// (0x00079c40) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0007c7c9) vradio_rocker_control_pane_g

0x7d70,	// (0x00074c9a) vradio_frequency_info_pane_g1

0xcd1e,	// (0x00079c48) vradio_frequency_info_pane_t1_ParamLimits

0xcd1e,	// (0x00079c48) vradio_frequency_info_pane_t1

0x7d7a,	// (0x00074ca4) vradio_tuning_pane_g1

0x7d85,	// (0x00074caf) vradio_tuning_pane_t1

0x2625,	// (0x0006f54f) area_side_right_pane_ParamLimits

0x2625,	// (0x0006f54f) area_side_right_pane

0x5a43,	// (0x0007296d) status_small_pane_g1

0x5a4b,	// (0x00072975) status_small_pane_g2

0x5a54,	// (0x0007297e) status_small_pane_g3

0x5a5d,	// (0x00072987) status_small_pane_g4

0x0003,

0xf65f,	// (0x0007c589) status_small_pane_g

0x5a66,	// (0x00072990) status_small_pane_t1

0x259e,	// (0x0006f4c8) main_video3_pane

0xcd32,	// (0x00079c5c) cams_zoom_vslider_pane

0xcd3a,	// (0x00079c64) image3_wide_pane_ParamLimits

0xcd3a,	// (0x00079c64) image3_wide_pane

0xcd54,	// (0x00079c7e) image3_wide_small_pane

0xcd60,	// (0x00079c8a) main_video3_pane_g1_ParamLimits

0xcd60,	// (0x00079c8a) main_video3_pane_g1

0xcd7c,	// (0x00079ca6) main_video3_pane_g2_ParamLimits

0xcd7c,	// (0x00079ca6) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0007c7d4) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0007c7d4) main_video3_pane_g

0xcd98,	// (0x00079cc2) main_video3_pane_t1_ParamLimits

0xcd98,	// (0x00079cc2) main_video3_pane_t1

0xcdc3,	// (0x00079ced) main_video3_pane_t2_ParamLimits

0xcdc3,	// (0x00079ced) main_video3_pane_t2

0xcdee,	// (0x00079d18) main_video3_pane_t3_ParamLimits

0xcdee,	// (0x00079d18) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0007c7d9) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0007c7d9) main_video3_pane_t

0xce1b,	// (0x00079d45) cams_zoom_vslider_pane_g1

0xce24,	// (0x00079d4e) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0007c7e0) cams_zoom_vslider_pane_g

0xce2c,	// (0x00079d56) small_slider_vertical_pane

0x6c23,	// (0x00073b4d) small_slider_vertical_pane_g1

0x6c23,	// (0x00073b4d) small_slider_vertical_pane_g2

0xce34,	// (0x00079d5e) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0007c7e5) small_slider_vertical_pane_g

0x259e,	// (0x0006f4c8) main_hwr_training_pane

0xce3d,	// (0x00079d67) hwr_training_instruct_pane_ParamLimits

0xce3d,	// (0x00079d67) hwr_training_instruct_pane

0x7d94,	// (0x00074cbe) hwr_training_navi_pane_ParamLimits

0x7d94,	// (0x00074cbe) hwr_training_navi_pane

0x7db3,	// (0x00074cdd) hwr_training_write_pane_ParamLimits

0x7db3,	// (0x00074cdd) hwr_training_write_pane

0x259e,	// (0x0006f4c8) bg_frame_shadow_pane

0xce74,	// (0x00079d9e) hwr_training_write_pane_g1

0xce7c,	// (0x00079da6) hwr_training_write_pane_g2

0xce84,	// (0x00079dae) hwr_training_write_pane_g3

0xce8c,	// (0x00079db6) hwr_training_write_pane_g4

0xce94,	// (0x00079dbe) hwr_training_write_pane_g5

0xce9c,	// (0x00079dc6) hwr_training_write_pane_g6

0xcea4,	// (0x00079dce) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0007c7ec) hwr_training_write_pane_g

0xed90,	// (0x0007bcba) hwr_training_navi_pane_g1_ParamLimits

0xed90,	// (0x0007bcba) hwr_training_navi_pane_g1

0xeda2,	// (0x0007bccc) hwr_training_navi_pane_g2_ParamLimits

0xeda2,	// (0x0007bccc) hwr_training_navi_pane_g2

0xedb4,	// (0x0007bcde) hwr_training_navi_pane_g3_ParamLimits

0xedb4,	// (0x0007bcde) hwr_training_navi_pane_g3

0xedc4,	// (0x0007bcee) hwr_training_navi_pane_g4_ParamLimits

0xedc4,	// (0x0007bcee) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0007c7fb) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0007c7fb) hwr_training_navi_pane_g

0xedd1,	// (0x0007bcfb) hwr_training_navi_pane_t1

0x7dfb,	// (0x00074d25) list_single_hwr_training_instruct_pane_ParamLimits

0x7dfb,	// (0x00074d25) list_single_hwr_training_instruct_pane

0xceac,	// (0x00079dd6) list_single_hwr_training_instruct_pane_t1

0x6b63,	// (0x00073a8d) bg_frame_shadow_pane_g1

0xcebb,	// (0x00079de5) bg_frame_shadow_pane_g2

0xcec3,	// (0x00079ded) bg_frame_shadow_pane_g3

0xcecb,	// (0x00079df5) bg_frame_shadow_pane_g4

0xced3,	// (0x00079dfd) bg_frame_shadow_pane_g5

0xcedb,	// (0x00079e05) bg_frame_shadow_pane_g6

0xcee3,	// (0x00079e0d) bg_frame_shadow_pane_g7

0xafc9,	// (0x00077ef3) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0007c806) bg_frame_shadow_pane_g

0x259e,	// (0x0006f4c8) main_video_tele_dialer_pane

0x7e10,	// (0x00074d3a) aid_size_cell_video_keypad_ParamLimits

0x7e10,	// (0x00074d3a) aid_size_cell_video_keypad

0x7e2a,	// (0x00074d54) grid_video_dialer_keypad_pane_ParamLimits

0x7e2a,	// (0x00074d54) grid_video_dialer_keypad_pane

0x7e76,	// (0x00074da0) video_down_pane_cp_ParamLimits

0x7e76,	// (0x00074da0) video_down_pane_cp

0x7eaa,	// (0x00074dd4) cell_video_dialer_keypad_pane_ParamLimits

0x7eaa,	// (0x00074dd4) cell_video_dialer_keypad_pane

0xceeb,	// (0x00079e15) bg_button_pane_cp08_ParamLimits

0xceeb,	// (0x00079e15) bg_button_pane_cp08

0x7ecc,	// (0x00074df6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7ecc,	// (0x00074df6) cell_video_dialer_keypad_pane_g1

0x75b9,	// (0x000744e3) mup3_rocker2_pane_ParamLimits

0x75b9,	// (0x000744e3) mup3_rocker2_pane

0x6c23,	// (0x00073b4d) mup3_rocker2_pane_g1

0x5aa8,	// (0x000729d2) main_dialer2_pane

0x259e,	// (0x0006f4c8) main_mp4_pane

0xede7,	// (0x0007bd11) main_mp4_pane_g1_ParamLimits

0xede7,	// (0x0007bd11) main_mp4_pane_g1

0xede7,	// (0x0007bd11) main_mp4_pane_g2_ParamLimits

0xede7,	// (0x0007bd11) main_mp4_pane_g2

0x7f06,	// (0x00074e30) main_mp4_pane_g3_ParamLimits

0x7f06,	// (0x00074e30) main_mp4_pane_g3

0xedf5,	// (0x0007bd1f) main_mp4_pane_g4_ParamLimits

0xedf5,	// (0x0007bd1f) main_mp4_pane_g4

0xee0f,	// (0x0007bd39) main_mp4_pane_g5_ParamLimits

0xee0f,	// (0x0007bd39) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0007c826) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0007c826) main_mp4_pane_g

0xee43,	// (0x0007bd6d) main_mp4_pane_t1_ParamLimits

0xee43,	// (0x0007bd6d) main_mp4_pane_t1

0xee9f,	// (0x0007bdc9) main_mp4_pane_t2_ParamLimits

0xee9f,	// (0x0007bdc9) main_mp4_pane_t2

0xcef7,	// (0x00079e21) main_mp4_pane_t3_ParamLimits

0xcef7,	// (0x00079e21) main_mp4_pane_t3

0xeef1,	// (0x0007be1b) main_mp4_pane_t4_ParamLimits

0xeef1,	// (0x0007be1b) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0007c833) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0007c833) main_mp4_pane_t

0xef35,	// (0x0007be5f) mp4_progress_pane_ParamLimits

0xef35,	// (0x0007be5f) mp4_progress_pane

0xef7f,	// (0x0007bea9) mp4_rocker_pane_ParamLimits

0xef7f,	// (0x0007bea9) mp4_rocker_pane

0xcf1f,	// (0x00079e49) mp4_progress_pane_t1

0xcf38,	// (0x00079e62) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0007c83c) mp4_progress_pane_t

0xcf51,	// (0x00079e7b) mup_progress_pane_cp04

0x6c23,	// (0x00073b4d) mp4_rocker_pane_g1

0x7f42,	// (0x00074e6c) aid_cell_size_keypad2_ParamLimits

0x7f42,	// (0x00074e6c) aid_cell_size_keypad2

0x7f58,	// (0x00074e82) dialer2_ne_pane_ParamLimits

0x7f58,	// (0x00074e82) dialer2_ne_pane

0x7f72,	// (0x00074e9c) grid_dialer2_keypad_pane_ParamLimits

0x7f72,	// (0x00074e9c) grid_dialer2_keypad_pane

0x693c,	// (0x00073866) bg_popup_call_pane_cp07_ParamLimits

0x693c,	// (0x00073866) bg_popup_call_pane_cp07

0x7f8e,	// (0x00074eb8) dialer2_ne_pane_t1_ParamLimits

0x7f8e,	// (0x00074eb8) dialer2_ne_pane_t1

0x7fc9,	// (0x00074ef3) cell_dialer2_keypad_pane_ParamLimits

0x7fc9,	// (0x00074ef3) cell_dialer2_keypad_pane

0xcf6f,	// (0x00079e99) bg_button_pane_pane_cp04_ParamLimits

0xcf6f,	// (0x00079e99) bg_button_pane_pane_cp04

0x7feb,	// (0x00074f15) cell_dialer2_keypad_pane_g1_ParamLimits

0x7feb,	// (0x00074f15) cell_dialer2_keypad_pane_g1

0x3ad8,	// (0x00070a02) aid_placing_vt_set_content_ParamLimits

0x3ad8,	// (0x00070a02) aid_placing_vt_set_content

0x3afc,	// (0x00070a26) aid_placing_vt_set_title_ParamLimits

0x3afc,	// (0x00070a26) aid_placing_vt_set_title

0x259e,	// (0x0006f4c8) main_image3_pane

0x80b1,	// (0x00074fdb) area_side_right_pane_cp01_ParamLimits

0x80b1,	// (0x00074fdb) area_side_right_pane_cp01

0xede7,	// (0x0007bd11) main_image3_pane_g1_ParamLimits

0xede7,	// (0x0007bd11) main_image3_pane_g1

0x80c8,	// (0x00074ff2) main_image3_pane_g2_ParamLimits

0x80c8,	// (0x00074ff2) main_image3_pane_g2

0x80f0,	// (0x0007501a) main_image3_pane_g3_ParamLimits

0x80f0,	// (0x0007501a) main_image3_pane_g3

0x811a,	// (0x00075044) main_image3_pane_g4_ParamLimits

0x811a,	// (0x00075044) main_image3_pane_g4

0x0003,

0xf921,	// (0x0007c84b) main_image3_pane_g_ParamLimits

0xf921,	// (0x0007c84b) main_image3_pane_g

0x8144,	// (0x0007506e) main_image3_pane_t1_ParamLimits

0x8144,	// (0x0007506e) main_image3_pane_t1

0x819c,	// (0x000750c6) main_image3_pane_t2_ParamLimits

0x819c,	// (0x000750c6) main_image3_pane_t2

0x81ee,	// (0x00075118) main_image3_pane_t3_ParamLimits

0x81ee,	// (0x00075118) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0007c854) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0007c854) main_image3_pane_t

0x0dfa,	// (0x0006dd24) grid_sctrl_middle_pane_cp01_ParamLimits

0x0dfa,	// (0x0006dd24) grid_sctrl_middle_pane_cp01

0x8276,	// (0x000751a0) cell_sctrl_middle_pane_cp01_ParamLimits

0x8276,	// (0x000751a0) cell_sctrl_middle_pane_cp01

0x8293,	// (0x000751bd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8293,	// (0x000751bd) cell_sctrl_middle_pane_cp01_g1

0x259e,	// (0x0006f4c8) main_call4_pane

0x82a9,	// (0x000751d3) aid_size_button_call4_ParamLimits

0x82a9,	// (0x000751d3) aid_size_button_call4

0x82da,	// (0x00075204) call4_windows_pane_ParamLimits

0x82da,	// (0x00075204) call4_windows_pane

0x82fa,	// (0x00075224) grid_call4_button_pane_ParamLimits

0x82fa,	// (0x00075224) grid_call4_button_pane

0xcf7b,	// (0x00079ea5) call4_windows_conf_pane

0xcf92,	// (0x00079ebc) popup_call4_audio_first_window_ParamLimits

0xcf92,	// (0x00079ebc) popup_call4_audio_first_window

0xcfde,	// (0x00079f08) popup_call4_audio_second_window_ParamLimits

0xcfde,	// (0x00079f08) popup_call4_audio_second_window

0xcff2,	// (0x00079f1c) popup_call4_audio_wait_window_ParamLimits

0xcff2,	// (0x00079f1c) popup_call4_audio_wait_window

0x8327,	// (0x00075251) cell_call4_button_pane_ParamLimits

0x8327,	// (0x00075251) cell_call4_button_pane

0x8350,	// (0x0007527a) bg_button_pane_cp09_ParamLimits

0x8350,	// (0x0007527a) bg_button_pane_cp09

0x835c,	// (0x00075286) cell_call4_button_pane_g1_ParamLimits

0x835c,	// (0x00075286) cell_call4_button_pane_g1

0x8382,	// (0x000752ac) cell_call4_button_pane_t1_ParamLimits

0x8382,	// (0x000752ac) cell_call4_button_pane_t1

0xd03a,	// (0x00079f64) popup_call4_audio_conf_window_ParamLimits

0xd03a,	// (0x00079f64) popup_call4_audio_conf_window

0x7619,	// (0x00074543) mup3_progress_pane_t1_ParamLimits

0x7630,	// (0x0007455a) mup3_progress_pane_t2_ParamLimits

0xc95a,	// (0x00079884) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0007c72d) mup3_progress_pane_t_ParamLimits

0xc971,	// (0x0007989b) mup_progress_pane_cp03_ParamLimits

0x7bda,	// (0x00074b04) mup3_control_keys_pane_g4_copy1

0xef63,	// (0x0007be8d) mp4_rocker2_pane_ParamLimits

0xef63,	// (0x0007be8d) mp4_rocker2_pane

0xd04e,	// (0x00079f78) mp4_rocker2_pane_g1

0xd056,	// (0x00079f80) mp4_rocker2_pane_g2

0xefd1,	// (0x0007befb) mp4_rocker2_pane_g3

0xefd9,	// (0x0007bf03) mp4_rocker2_pane_g4

0xefe1,	// (0x0007bf0b) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0007c85d) mp4_rocker2_pane_g

0x259e,	// (0x0006f4c8) main_camera4_pane

0x259e,	// (0x0006f4c8) main_video4_pane

0x7e44,	// (0x00074d6e) main_video_tele_dialer_pane_t1_ParamLimits

0x7e44,	// (0x00074d6e) main_video_tele_dialer_pane_t1

0x7e5d,	// (0x00074d87) main_video_tele_dialer_pane_t2_ParamLimits

0x7e5d,	// (0x00074d87) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0007c817) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0007c817) main_video_tele_dialer_pane_t

0x83c0,	// (0x000752ea) cam4_autofocus_pane_ParamLimits

0x83c0,	// (0x000752ea) cam4_autofocus_pane

0x83d6,	// (0x00075300) cam4_image_uncrop_pane_ParamLimits

0x83d6,	// (0x00075300) cam4_image_uncrop_pane

0x83f0,	// (0x0007531a) cam4_indicators_pane_ParamLimits

0x83f0,	// (0x0007531a) cam4_indicators_pane

0x841b,	// (0x00075345) main_camera4_pane_g1_ParamLimits

0x841b,	// (0x00075345) main_camera4_pane_g1

0x8427,	// (0x00075351) main_camera4_pane_g2_ParamLimits

0x8427,	// (0x00075351) main_camera4_pane_g2

0x8433,	// (0x0007535d) main_camera4_pane_g3_ParamLimits

0x8433,	// (0x0007535d) main_camera4_pane_g3

0x843f,	// (0x00075369) main_camera4_pane_g4_ParamLimits

0x843f,	// (0x00075369) main_camera4_pane_g4

0x844b,	// (0x00075375) main_camera4_pane_g5_ParamLimits

0x844b,	// (0x00075375) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0007c868) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0007c868) main_camera4_pane_g

0x8468,	// (0x00075392) main_camera4_pane_t1_ParamLimits

0x8468,	// (0x00075392) main_camera4_pane_t1

0xc944,	// (0x0007986e) bg_tb_trans_pane_cp06

0x84a0,	// (0x000753ca) cam4_indicators_pane_g1

0x84ad,	// (0x000753d7) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0007c87a) cam4_indicators_pane_g

0x84c5,	// (0x000753ef) cam4_indicators_pane_t1

0x84ef,	// (0x00075419) main_video4_pane_g1_ParamLimits

0x84ef,	// (0x00075419) main_video4_pane_g1

0x8501,	// (0x0007542b) main_video4_pane_g2_ParamLimits

0x8501,	// (0x0007542b) main_video4_pane_g2

0x8515,	// (0x0007543f) main_video4_pane_g3_ParamLimits

0x8515,	// (0x0007543f) main_video4_pane_g3

0x8525,	// (0x0007544f) main_video4_pane_g4_ParamLimits

0x8525,	// (0x0007544f) main_video4_pane_g4

0x0004,

0xf957,	// (0x0007c881) main_video4_pane_g_ParamLimits

0xf957,	// (0x0007c881) main_video4_pane_g

0x8545,	// (0x0007546f) vid4_indicators_pane_ParamLimits

0x8545,	// (0x0007546f) vid4_indicators_pane

0x8575,	// (0x0007549f) video4_image_uncrop_cif_pane_ParamLimits

0x8575,	// (0x0007549f) video4_image_uncrop_cif_pane

0x858f,	// (0x000754b9) video4_image_uncrop_nhd_pane_ParamLimits

0x858f,	// (0x000754b9) video4_image_uncrop_nhd_pane

0x83d6,	// (0x00075300) video4_image_uncrop_vga_pane_ParamLimits

0x83d6,	// (0x00075300) video4_image_uncrop_vga_pane

0xd05e,	// (0x00079f88) bg_tb_trans_pane_cp07

0x84a0,	// (0x000753ca) vid4_indicators_pane_g1

0x85a3,	// (0x000754cd) vid4_indicators_pane_g2

0x85b0,	// (0x000754da) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0007c88c) vid4_indicators_pane_g

0x85d5,	// (0x000754ff) vid4_indicators_pane_t1

0x85e7,	// (0x00075511) cam4_autofocus_pane_g1

0x85ef,	// (0x00075519) cam4_autofocus_pane_g2

0x85f7,	// (0x00075521) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0007c897) cam4_autofocus_pane_g

0x85ff,	// (0x00075529) cam4_autofocus_pane_g3_copy1

0x7e8e,	// (0x00074db8) video_down_pane_cp_t1

0x7e9c,	// (0x00074dc6) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0007c81c) video_down_pane_cp_t

0x0dfa,	// (0x0006dd24) popup_vitu2_window_ParamLimits

0x0dfa,	// (0x0006dd24) popup_vitu2_window

0x8607,	// (0x00075531) aid_size_cell2_itu2_ParamLimits

0x8607,	// (0x00075531) aid_size_cell2_itu2

0x862d,	// (0x00075557) aid_size_cell_itu2_ParamLimits

0x862d,	// (0x00075557) aid_size_cell_itu2

0x8689,	// (0x000755b3) bg_popup_window_pane_cp09_ParamLimits

0x8689,	// (0x000755b3) bg_popup_window_pane_cp09

0x8697,	// (0x000755c1) field_vitu2_entry_pane_ParamLimits

0x8697,	// (0x000755c1) field_vitu2_entry_pane

0x86bd,	// (0x000755e7) grid_vitu2_function_pane_ParamLimits

0x86bd,	// (0x000755e7) grid_vitu2_function_pane

0x870e,	// (0x00075638) grid_vitu2_itu_pane_ParamLimits

0x870e,	// (0x00075638) grid_vitu2_itu_pane

0x87a1,	// (0x000756cb) cell_vitu2_itu_pane_ParamLimits

0x87a1,	// (0x000756cb) cell_vitu2_itu_pane

0x87c5,	// (0x000756ef) cell_vitu2_function_pane_ParamLimits

0x87c5,	// (0x000756ef) cell_vitu2_function_pane

0xd06c,	// (0x00079f96) bg_popup_call_pane_cp08_ParamLimits

0xd06c,	// (0x00079f96) bg_popup_call_pane_cp08

0xd085,	// (0x00079faf) field_vitu2_entry_pane_g1

0xd091,	// (0x00079fbb) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0007c89e) field_vitu2_entry_pane_g

0xd0ab,	// (0x00079fd5) field_vitu2_entry_pane_t1_ParamLimits

0xd0ab,	// (0x00079fd5) field_vitu2_entry_pane_t1

0xd0c8,	// (0x00079ff2) field_vitu2_entry_pane_t2_ParamLimits

0xd0c8,	// (0x00079ff2) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0007c8a5) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0007c8a5) field_vitu2_entry_pane_t

0x8804,	// (0x0007572e) bg_button_pane_cp010_ParamLimits

0x8804,	// (0x0007572e) bg_button_pane_cp010

0x8812,	// (0x0007573c) cell_vitu2_itu_pane_g1

0x8830,	// (0x0007575a) cell_vitu2_itu_pane_t1_ParamLimits

0x8830,	// (0x0007575a) cell_vitu2_itu_pane_t1

0x1dd8,	// (0x0006ed02) cell_vitu2_itu_pane_t2_ParamLimits

0x1dd8,	// (0x0006ed02) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0007c8af) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0007c8af) cell_vitu2_itu_pane_t

0x0dfa,	// (0x0006dd24) bg_button_pane_cp011

0x8896,	// (0x000757c0) cell_vitu2_function_pane_g1

0x259e,	// (0x0006f4c8) main_myfav_hc_pane

0x823e,	// (0x00075168) popup_image3_note_pane_ParamLimits

0x823e,	// (0x00075168) popup_image3_note_pane

0x825a,	// (0x00075184) popup_image3_tool_bar_pane_ParamLimits

0x825a,	// (0x00075184) popup_image3_tool_bar_pane

0x1e5c,	// (0x0006ed86) cell_vitu2_itu_pane_t3_ParamLimits

0x1e5c,	// (0x0006ed86) cell_vitu2_itu_pane_t3

0x259e,	// (0x0006f4c8) bg_popup_trans_pane

0xd0ed,	// (0x0007a017) grid_image3_tool_bar_pane

0xd0f7,	// (0x0007a021) bg_popup_trans_pane_g1

0xb47b,	// (0x000783a5) bg_popup_trans_pane_g2

0xd0ff,	// (0x0007a029) bg_popup_trans_pane_g3

0xd107,	// (0x0007a031) bg_popup_trans_pane_g4

0xd10f,	// (0x0007a039) bg_popup_trans_pane_g5

0xd117,	// (0x0007a041) bg_popup_trans_pane_g6

0xd11f,	// (0x0007a049) bg_popup_trans_pane_g7

0xd127,	// (0x0007a051) bg_popup_trans_pane_g8

0xb45b,	// (0x00078385) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0007c8b6) bg_popup_trans_pane_g

0xd12f,	// (0x0007a059) cell_image3_tool_bar_pane_ParamLimits

0xd12f,	// (0x0007a059) cell_image3_tool_bar_pane

0x6c23,	// (0x00073b4d) cell_image3_tool_bar_pane_g1

0x259e,	// (0x0006f4c8) bg_popup_trans_pane_cp1

0xd143,	// (0x0007a06d) popup_image3_note_pane_t1

0xd151,	// (0x0007a07b) popup_image3_note_pane_t2

0xd15f,	// (0x0007a089) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0007c8c9) popup_image3_note_pane_t

0xd16d,	// (0x0007a097) popup_image3_note_pane_t3_copy1

0x88aa,	// (0x000757d4) bg_myfav_hc_instruction_pane_ParamLimits

0x88aa,	// (0x000757d4) bg_myfav_hc_instruction_pane

0x88be,	// (0x000757e8) cell_myfav_contact_pane_ParamLimits

0x88be,	// (0x000757e8) cell_myfav_contact_pane

0x88dc,	// (0x00075806) cell_myfav_contact_pane_cp1_ParamLimits

0x88dc,	// (0x00075806) cell_myfav_contact_pane_cp1

0x88f4,	// (0x0007581e) cell_myfav_contact_pane_cp2_ParamLimits

0x88f4,	// (0x0007581e) cell_myfav_contact_pane_cp2

0x890c,	// (0x00075836) cell_myfav_contact_pane_cp3_ParamLimits

0x890c,	// (0x00075836) cell_myfav_contact_pane_cp3

0x8923,	// (0x0007584d) cell_myfav_contact_pane_cp4_ParamLimits

0x8923,	// (0x0007584d) cell_myfav_contact_pane_cp4

0x893b,	// (0x00075865) cell_myfav_contact_pane_cp5_ParamLimits

0x893b,	// (0x00075865) cell_myfav_contact_pane_cp5

0x894f,	// (0x00075879) cell_myfav_contact_pane_cp6_ParamLimits

0x894f,	// (0x00075879) cell_myfav_contact_pane_cp6

0x8965,	// (0x0007588f) cell_myfav_contact_pane_cp7_ParamLimits

0x8965,	// (0x0007588f) cell_myfav_contact_pane_cp7

0xd17b,	// (0x0007a0a5) listscroll_gen_pane_cp05

0x897f,	// (0x000758a9) main_myfav_hc_pane_g1_ParamLimits

0x897f,	// (0x000758a9) main_myfav_hc_pane_g1

0x8999,	// (0x000758c3) main_myfav_hc_pane_g2_ParamLimits

0x8999,	// (0x000758c3) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0007c8d0) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0007c8d0) main_myfav_hc_pane_g

0x89cb,	// (0x000758f5) main_myfav_hc_pane_t1_ParamLimits

0x89cb,	// (0x000758f5) main_myfav_hc_pane_t1

0xd184,	// (0x0007a0ae) main_myfav_hc_pane_t2_ParamLimits

0xd184,	// (0x0007a0ae) main_myfav_hc_pane_t2

0xd196,	// (0x0007a0c0) main_myfav_hc_pane_t3_ParamLimits

0xd196,	// (0x0007a0c0) main_myfav_hc_pane_t3

0x89e2,	// (0x0007590c) main_myfav_hc_pane_t4_ParamLimits

0x89e2,	// (0x0007590c) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0007c8d7) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0007c8d7) main_myfav_hc_pane_t

0x6c23,	// (0x00073b4d) bg_myfav_hc_instruction_pane_g1

0xd1a8,	// (0x0007a0d2) cell_myfav_contact_pane_g1_ParamLimits

0xd1a8,	// (0x0007a0d2) cell_myfav_contact_pane_g1

0xd1a8,	// (0x0007a0d2) cell_myfav_contact_pane_g2_ParamLimits

0xd1a8,	// (0x0007a0d2) cell_myfav_contact_pane_g2

0xd1b4,	// (0x0007a0de) cell_myfav_contact_pane_g3_ParamLimits

0xd1b4,	// (0x0007a0de) cell_myfav_contact_pane_g3

0xc944,	// (0x0007986e) cell_myfav_contact_pane_g4_ParamLimits

0xc944,	// (0x0007986e) cell_myfav_contact_pane_g4

0xd1c1,	// (0x0007a0eb) cell_myfav_contact_pane_g5_ParamLimits

0xd1c1,	// (0x0007a0eb) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0007c8e2) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0007c8e2) cell_myfav_contact_pane_g

0x89b3,	// (0x000758dd) main_myfav_hc_pane_g3_ParamLimits

0x89b3,	// (0x000758dd) main_myfav_hc_pane_g3

0x2743,	// (0x0006f66d) popup_adpt_find_window

0x8a0a,	// (0x00075934) afind_page_pane_ParamLimits

0x8a0a,	// (0x00075934) afind_page_pane

0x8a1f,	// (0x00075949) aid_size_cell_afind_ParamLimits

0x8a1f,	// (0x00075949) aid_size_cell_afind

0x8a3d,	// (0x00075967) bg_popup_sub_pane_cp09_ParamLimits

0x8a3d,	// (0x00075967) bg_popup_sub_pane_cp09

0x8a4a,	// (0x00075974) find_pane_cp01_ParamLimits

0x8a4a,	// (0x00075974) find_pane_cp01

0xd1cd,	// (0x0007a0f7) grid_afind_control_pane_ParamLimits

0xd1cd,	// (0x0007a0f7) grid_afind_control_pane

0x8a57,	// (0x00075981) grid_afind_pane_ParamLimits

0x8a57,	// (0x00075981) grid_afind_pane

0x8a79,	// (0x000759a3) cell_afind_pane_ParamLimits

0x8a79,	// (0x000759a3) cell_afind_pane

0x6c23,	// (0x00073b4d) afind_page_pane_g1

0x8ad6,	// (0x00075a00) afind_page_pane_g2

0x8adf,	// (0x00075a09) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0007c8ed) afind_page_pane_g

0x8ae8,	// (0x00075a12) afind_page_pane_t1

0xd1e1,	// (0x0007a10b) cell_afind_grid_control_pane_ParamLimits

0xd1e1,	// (0x0007a10b) cell_afind_grid_control_pane

0xcf6f,	// (0x00079e99) bg_button_pane_cp69_ParamLimits

0xcf6f,	// (0x00079e99) bg_button_pane_cp69

0x8b08,	// (0x00075a32) cell_afind_pane_g1_ParamLimits

0x8b08,	// (0x00075a32) cell_afind_pane_g1

0x8b15,	// (0x00075a3f) cell_afind_pane_t1_ParamLimits

0x8b15,	// (0x00075a3f) cell_afind_pane_t1

0xb1b1,	// (0x000780db) bg_button_pane_cp72

0xd1f0,	// (0x0007a11a) cell_afind_grid_control_pane_g1

0x5319,	// (0x00072243) aid_image_placing_area_ParamLimits

0x5319,	// (0x00072243) aid_image_placing_area

0xcc3d,	// (0x00079b67) field_vitu_entry_pane_g1_ParamLimits

0xcc3d,	// (0x00079b67) field_vitu_entry_pane_g1

0xcc49,	// (0x00079b73) field_vitu_entry_pane_g2_ParamLimits

0xcc49,	// (0x00079b73) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0007c7a7) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0007c7a7) field_vitu_entry_pane_g

0x7ca1,	// (0x00074bcb) cell_vitu_itu_pane_g1_ParamLimits

0x7ce3,	// (0x00074c0d) cell_vitu_itu_pane_t3_ParamLimits

0x7ce3,	// (0x00074c0d) cell_vitu_itu_pane_t3

0xcf1f,	// (0x00079e49) mp4_progress_pane_t1_ParamLimits

0xcf38,	// (0x00079e62) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0007c83c) mp4_progress_pane_t_ParamLimits

0xcf51,	// (0x00079e7b) mup_progress_pane_cp04_ParamLimits

0x89f6,	// (0x00075920) main_myfav_hc_pane_t5_ParamLimits

0x89f6,	// (0x00075920) main_myfav_hc_pane_t5

0xade3,	// (0x00077d0d) aid_zoom_text_primary

0x2743,	// (0x0006f66d) popup_adpt_find_window_ParamLimits

0x0dfa,	// (0x0006dd24) main_cam_set_pane

0x8407,	// (0x00075331) cam4_zoom_pane_ParamLimits

0x8407,	// (0x00075331) cam4_zoom_pane

0x8b27,	// (0x00075a51) main_cam_set_pane_g1_ParamLimits

0x8b27,	// (0x00075a51) main_cam_set_pane_g1

0x8b35,	// (0x00075a5f) main_cam_set_pane_g2_ParamLimits

0x8b35,	// (0x00075a5f) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0007c8f4) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0007c8f4) main_cam_set_pane_g

0x8b58,	// (0x00075a82) main_cam_set_pane_t1_ParamLimits

0x8b58,	// (0x00075a82) main_cam_set_pane_t1

0x8b73,	// (0x00075a9d) main_cset_listscroll_pane_ParamLimits

0x8b73,	// (0x00075a9d) main_cset_listscroll_pane

0x8b95,	// (0x00075abf) main_cset_slider_pane_ParamLimits

0x8b95,	// (0x00075abf) main_cset_slider_pane

0xd201,	// (0x0007a12b) main_cset_list_pane_ParamLimits

0xd201,	// (0x0007a12b) main_cset_list_pane

0xd211,	// (0x0007a13b) scroll_pane_cp028

0x8bbb,	// (0x00075ae5) aid_area_touch_slider

0x8bd7,	// (0x00075b01) cset_slider_pane

0x8c01,	// (0x00075b2b) main_cset_slider_pane_g1

0x8c16,	// (0x00075b40) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0007c8f9) main_cset_slider_pane_g

0xd24a,	// (0x0007a174) main_cset_slider_pane_t1

0x8cd2,	// (0x00075bfc) main_cset_slider_pane_t2

0x8cec,	// (0x00075c16) main_cset_slider_pane_t3

0x8d06,	// (0x00075c30) main_cset_slider_pane_t4

0x8d20,	// (0x00075c4a) main_cset_slider_pane_t5

0x8d3a,	// (0x00075c64) main_cset_slider_pane_t6

0x8d4f,	// (0x00075c79) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0007c91e) main_cset_slider_pane_t

0x8e53,	// (0x00075d7d) cset_list_set_pane_ParamLimits

0x8e53,	// (0x00075d7d) cset_list_set_pane

0x8e65,	// (0x00075d8f) aid_position_infowindow_above

0x8e6d,	// (0x00075d97) aid_position_infowindow_below

0x8e75,	// (0x00075d9f) cset_list_set_pane_g1_ParamLimits

0x8e75,	// (0x00075d9f) cset_list_set_pane_g1

0xd2ea,	// (0x0007a214) cset_list_set_pane_g3_ParamLimits

0xd2ea,	// (0x0007a214) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0007c93d) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0007c93d) cset_list_set_pane_g

0xd2f9,	// (0x0007a223) cset_list_set_pane_t1_ParamLimits

0xd2f9,	// (0x0007a223) cset_list_set_pane_t1

0x0dfa,	// (0x0006dd24) list_highlight_pane_cp021_ParamLimits

0x0dfa,	// (0x0006dd24) list_highlight_pane_cp021

0xbdee,	// (0x00078d18) cset_slider_pane_g1

0xbe00,	// (0x00078d2a) cset_slider_pane_g2

0xbdf7,	// (0x00078d21) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0007c942) cset_slider_pane_g

0xf013,	// (0x0007bf3d) aid_area_touch_cam4_zoom

0xf01b,	// (0x0007bf45) cam4_zoom_cont_pane

0xf023,	// (0x0007bf4d) cam4_zoom_pane_g1

0xf02b,	// (0x0007bf55) cam4_zoom_pane_g2

0x8e81,	// (0x00075dab) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0007c949) cam4_zoom_pane_g

0xd30e,	// (0x0007a238) cam4_zoom_cont_pane_g1

0xd317,	// (0x0007a241) cam4_zoom_cont_pane_g2

0xd320,	// (0x0007a24a) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0007c950) cam4_zoom_cont_pane_g

0x82c7,	// (0x000751f1) call4_image_pane_ParamLimits

0x82c7,	// (0x000751f1) call4_image_pane

0xcf7b,	// (0x00079ea5) call4_windows_conf_pane_ParamLimits

0xcfbc,	// (0x00079ee6) popup_call4_audio_in_window_ParamLimits

0xcfbc,	// (0x00079ee6) popup_call4_audio_in_window

0x259e,	// (0x0006f4c8) bg_popup_call2_act_pane_cp02

0xd032,	// (0x00079f5c) call4_list_conf_pane

0x6c23,	// (0x00073b4d) call4_image_pane_g1

0x6c23,	// (0x00073b4d) call4_image_pane_g2

0x0001,

0xf743,	// (0x0007c66d) call4_image_pane_g

0xd329,	// (0x0007a253) list_single_graphic_popup_conf4_pane_ParamLimits

0xd329,	// (0x0007a253) list_single_graphic_popup_conf4_pane

0x259e,	// (0x0006f4c8) list_highlight_pane_cp022

0xd33c,	// (0x0007a266) list_single_graphic_popup_conf4_pane_g1

0xbaad,	// (0x000789d7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0007c957) list_single_graphic_popup_conf4_pane_g

0xd344,	// (0x0007a26e) list_single_graphic_popup_conf4_pane_t1

0x3bd6,	// (0x00070b00) popup_vtel_slider_window_ParamLimits

0x3bd6,	// (0x00070b00) popup_vtel_slider_window

0xcf5d,	// (0x00079e87) dialer2_ne_pane_t2_ParamLimits

0xcf5d,	// (0x00079e87) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0007c841) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0007c841) dialer2_ne_pane_t

0x693c,	// (0x00073866) bg_popup_sub_pane_cp010_ParamLimits

0x693c,	// (0x00073866) bg_popup_sub_pane_cp010

0x8e89,	// (0x00075db3) popup_vtel_slider_window_g1_ParamLimits

0x8e89,	// (0x00075db3) popup_vtel_slider_window_g1

0x8e9c,	// (0x00075dc6) popup_vtel_slider_window_g2_ParamLimits

0x8e9c,	// (0x00075dc6) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0007c95c) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0007c95c) popup_vtel_slider_window_g

0x8ef2,	// (0x00075e1c) vtel_slider_pane_ParamLimits

0x8ef2,	// (0x00075e1c) vtel_slider_pane

0x8f14,	// (0x00075e3e) vtel_slider_pane_g1_ParamLimits

0x8f14,	// (0x00075e3e) vtel_slider_pane_g1

0x8f28,	// (0x00075e52) vtel_slider_pane_g2_ParamLimits

0x8f28,	// (0x00075e52) vtel_slider_pane_g2

0x8f40,	// (0x00075e6a) vtel_slider_pane_g3_ParamLimits

0x8f40,	// (0x00075e6a) vtel_slider_pane_g3

0x8f14,	// (0x00075e3e) vtel_slider_pane_g4_ParamLimits

0x8f14,	// (0x00075e3e) vtel_slider_pane_g4

0x8f56,	// (0x00075e80) vtel_slider_pane_g5_ParamLimits

0x8f56,	// (0x00075e80) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0007c965) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0007c965) vtel_slider_pane_g

0x259e,	// (0x0006f4c8) main_gallery2_pane

0x8659,	// (0x00075583) aid_size_row_itut2_dropdow_list_ParamLimits

0x8659,	// (0x00075583) aid_size_row_itut2_dropdow_list

0x86e5,	// (0x0007560f) grid_vitu2_function_top_pane_ParamLimits

0x86e5,	// (0x0007560f) grid_vitu2_function_top_pane

0x874a,	// (0x00075674) popup_vitu2_dropdown_list_window_ParamLimits

0x874a,	// (0x00075674) popup_vitu2_dropdown_list_window

0x8773,	// (0x0007569d) popup_vitu2_match_list_window

0x8f6c,	// (0x00075e96) cell_vitu2_function_top_pane_ParamLimits

0x8f6c,	// (0x00075e96) cell_vitu2_function_top_pane

0x8f8a,	// (0x00075eb4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8f8a,	// (0x00075eb4) cell_vitu2_function_top_pane_cp01

0x8fa8,	// (0x00075ed2) cell_vitu2_function_top_wide_pane_ParamLimits

0x8fa8,	// (0x00075ed2) cell_vitu2_function_top_wide_pane

0x0dfa,	// (0x0006dd24) bg_button_pane_cp012

0x8fc6,	// (0x00075ef0) cell_vitu2_function_top_pane_g1

0xf033,	// (0x0007bf5d) bg_button_pane_cp013_ParamLimits

0xf033,	// (0x0007bf5d) bg_button_pane_cp013

0x8fda,	// (0x00075f04) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8fda,	// (0x00075f04) cell_vitu2_function_top_wide_pane_g1

0x0dfa,	// (0x0006dd24) bg_popup_sub_pane_cp20

0x8ff2,	// (0x00075f1c) list_vitu2_match_list_pane

0xd0f7,	// (0x0007a021) bg_popup_sub_pane_cp20_g1

0xd0ff,	// (0x0007a029) bg_popup_sub_pane_cp20_g2

0xb47b,	// (0x000783a5) bg_popup_sub_pane_cp20_g3

0xd107,	// (0x0007a031) bg_popup_sub_pane_cp20_g4

0xb45b,	// (0x00078385) bg_popup_sub_pane_cp20_g5

0xd360,	// (0x0007a28a) bg_popup_sub_pane_cp20_g6

0xd117,	// (0x0007a041) bg_popup_sub_pane_cp20_g7

0xd11f,	// (0x0007a049) bg_popup_sub_pane_cp20_g8

0xd127,	// (0x0007a051) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0007c970) bg_popup_sub_pane_cp20_g

0xf04f,	// (0x0007bf79) list_vitu2_match_list_item_pane_ParamLimits

0xf04f,	// (0x0007bf79) list_vitu2_match_list_item_pane

0xf061,	// (0x0007bf8b) list_vitu2_match_list_item_pane_t1

0x259e,	// (0x0006f4c8) bg_popup_sub_pane_cp21

0xb962,	// (0x0007888c) grid_vitu2_dropdown_list_pane

0x9010,	// (0x00075f3a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9010,	// (0x00075f3a) cell_vitu2_dropdown_list_char_pane

0x9031,	// (0x00075f5b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9031,	// (0x00075f5b) cell_vitu2_dropdown_list_ctrl_pane

0xd380,	// (0x0007a2aa) cell_vitu2_dropdown_list_char_pane_g1

0xd389,	// (0x0007a2b3) cell_vitu2_dropdown_list_char_pane_g2

0xd392,	// (0x0007a2bc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0007c98d) cell_vitu2_dropdown_list_char_pane_g

0x905d,	// (0x00075f87) cell_vitu2_dropdown_list_char_pane_t1

0x906b,	// (0x00075f95) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x906b,	// (0x00075f95) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9078,	// (0x00075fa2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9078,	// (0x00075fa2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9085,	// (0x00075faf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9085,	// (0x00075faf) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9092,	// (0x00075fbc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9092,	// (0x00075fbc) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc8b3,	// (0x000797dd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc8b3,	// (0x000797dd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0007c994) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0007c994) cell_vitu2_dropdown_list_ctrl_pane_g

0x90ae,	// (0x00075fd8) aid_size_cell_gallery2_ParamLimits

0x90ae,	// (0x00075fd8) aid_size_cell_gallery2

0x90c4,	// (0x00075fee) grid_gallery2_pane_ParamLimits

0x90c4,	// (0x00075fee) grid_gallery2_pane

0x90d8,	// (0x00076002) scroll_pane_cp029_ParamLimits

0x90d8,	// (0x00076002) scroll_pane_cp029

0x90e4,	// (0x0007600e) cell_gallery2_pane_ParamLimits

0x90e4,	// (0x0007600e) cell_gallery2_pane

0xd39b,	// (0x0007a2c5) cell_gallery2_pane_g2

0x911a,	// (0x00076044) cell_gallery2_pane_g3

0xd3a5,	// (0x0007a2cf) cell_gallery2_pane_g4

0xd3ad,	// (0x0007a2d7) cell_gallery2_pane_g5

0xbc98,	// (0x00078bc2) grid_highlight_pane_cp10

0x8773,	// (0x0007569d) popup_vitu2_match_list_window_ParamLimits

0x878a,	// (0x000756b4) popup_vitu2_query_window_ParamLimits

0x878a,	// (0x000756b4) popup_vitu2_query_window

0x259e,	// (0x0006f4c8) bg_vitu2_candi_button_pane

0xd380,	// (0x0007a2aa) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd389,	// (0x0007a2b3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd392,	// (0x0007a2bc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1ee5,	// (0x0006ee0f) bg_button_pane_cp015

0x9122,	// (0x0007604c) bg_button_pane_cp016

0x912c,	// (0x00076056) bg_button_pane_cp017

0x0dfa,	// (0x0006dd24) bg_popup_sub_pane_cp22

0xd3b5,	// (0x0007a2df) popup_vitu2_query_window_g1

0x1efc,	// (0x0006ee26) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0007c99f) popup_vitu2_query_window_g

0x1f0a,	// (0x0006ee34) popup_vitu2_query_window_t1_ParamLimits

0x1f0a,	// (0x0006ee34) popup_vitu2_query_window_t1

0x1f32,	// (0x0006ee5c) popup_vitu2_query_window_t2_ParamLimits

0x1f32,	// (0x0006ee5c) popup_vitu2_query_window_t2

0x1f44,	// (0x0006ee6e) popup_vitu2_query_window_t3_ParamLimits

0x1f44,	// (0x0006ee6e) popup_vitu2_query_window_t3

0x9147,	// (0x00076071) popup_vitu2_query_window_t4_ParamLimits

0x9147,	// (0x00076071) popup_vitu2_query_window_t4

0x915b,	// (0x00076085) popup_vitu2_query_window_t5_ParamLimits

0x915b,	// (0x00076085) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0007c9a4) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0007c9a4) popup_vitu2_query_window_t

0xd1f9,	// (0x0007a123) main_cset_text_pane

0x8bbb,	// (0x00075ae5) aid_area_touch_slider_ParamLimits

0x8bd7,	// (0x00075b01) cset_slider_pane_ParamLimits

0x8c01,	// (0x00075b2b) main_cset_slider_pane_g1_ParamLimits

0x8c16,	// (0x00075b40) main_cset_slider_pane_g2_ParamLimits

0xd21a,	// (0x0007a144) main_cset_slider_pane_g3_ParamLimits

0xd21a,	// (0x0007a144) main_cset_slider_pane_g3

0x8c2b,	// (0x00075b55) main_cset_slider_pane_g4_ParamLimits

0x8c2b,	// (0x00075b55) main_cset_slider_pane_g4

0x8c3a,	// (0x00075b64) main_cset_slider_pane_g5_ParamLimits

0x8c3a,	// (0x00075b64) main_cset_slider_pane_g5

0x8c46,	// (0x00075b70) main_cset_slider_pane_g6_ParamLimits

0x8c46,	// (0x00075b70) main_cset_slider_pane_g6

0xf9cf,	// (0x0007c8f9) main_cset_slider_pane_g_ParamLimits

0xd24a,	// (0x0007a174) main_cset_slider_pane_t1_ParamLimits

0x8cd2,	// (0x00075bfc) main_cset_slider_pane_t2_ParamLimits

0x8cec,	// (0x00075c16) main_cset_slider_pane_t3_ParamLimits

0x8d06,	// (0x00075c30) main_cset_slider_pane_t4_ParamLimits

0x8d20,	// (0x00075c4a) main_cset_slider_pane_t5_ParamLimits

0x8d3a,	// (0x00075c64) main_cset_slider_pane_t6_ParamLimits

0x8d4f,	// (0x00075c79) main_cset_slider_pane_t7_ParamLimits

0x8d79,	// (0x00075ca3) main_cset_slider_pane_t8_ParamLimits

0x8d79,	// (0x00075ca3) main_cset_slider_pane_t8

0x8da1,	// (0x00075ccb) main_cset_slider_pane_t9_ParamLimits

0x8da1,	// (0x00075ccb) main_cset_slider_pane_t9

0x8dc9,	// (0x00075cf3) main_cset_slider_pane_t10_ParamLimits

0x8dc9,	// (0x00075cf3) main_cset_slider_pane_t10

0x8df1,	// (0x00075d1b) main_cset_slider_pane_t11_ParamLimits

0x8df1,	// (0x00075d1b) main_cset_slider_pane_t11

0x8e19,	// (0x00075d43) main_cset_slider_pane_t12_ParamLimits

0x8e19,	// (0x00075d43) main_cset_slider_pane_t12

0x8e36,	// (0x00075d60) main_cset_slider_pane_t13_ParamLimits

0x8e36,	// (0x00075d60) main_cset_slider_pane_t13

0xf9f4,	// (0x0007c91e) main_cset_slider_pane_t_ParamLimits

0x259e,	// (0x0006f4c8) bg_popup_sub_pane_cp011

0xd3c1,	// (0x0007a2eb) main_cset_text_pane_g1

0xd3c9,	// (0x0007a2f3) main_cset_text_pane_t1

0xd3d7,	// (0x0007a301) main_cset_text_pane_t2

0xd3e5,	// (0x0007a30f) main_cset_text_pane_t3

0xd3f3,	// (0x0007a31d) main_cset_text_pane_t4

0xd401,	// (0x0007a32b) main_cset_text_pane_t5

0xd40f,	// (0x0007a339) main_cset_text_pane_t6

0xd41d,	// (0x0007a347) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0007c9af) main_cset_text_pane_t

0x259e,	// (0x0006f4c8) main_cam4_burst_pane

0x259e,	// (0x0006f4c8) main_cam5_pane

0x8af6,	// (0x00075a20) bg_button_pane_cp019

0x8aff,	// (0x00075a29) bg_button_pane_cp020

0xd226,	// (0x0007a150) main_cset_slider_pane_g7_ParamLimits

0xd226,	// (0x0007a150) main_cset_slider_pane_g7

0xd232,	// (0x0007a15c) main_cset_slider_pane_g8_ParamLimits

0xd232,	// (0x0007a15c) main_cset_slider_pane_g8

0x8c5a,	// (0x00075b84) main_cset_slider_pane_g9_ParamLimits

0x8c5a,	// (0x00075b84) main_cset_slider_pane_g9

0x8c66,	// (0x00075b90) main_cset_slider_pane_g10_ParamLimits

0x8c66,	// (0x00075b90) main_cset_slider_pane_g10

0x8c72,	// (0x00075b9c) main_cset_slider_pane_g11_ParamLimits

0x8c72,	// (0x00075b9c) main_cset_slider_pane_g11

0x8c7e,	// (0x00075ba8) main_cset_slider_pane_g12_ParamLimits

0x8c7e,	// (0x00075ba8) main_cset_slider_pane_g12

0x8c8a,	// (0x00075bb4) main_cset_slider_pane_g13_ParamLimits

0x8c8a,	// (0x00075bb4) main_cset_slider_pane_g13

0x8c96,	// (0x00075bc0) main_cset_slider_pane_g14_ParamLimits

0x8c96,	// (0x00075bc0) main_cset_slider_pane_g14

0x8ca2,	// (0x00075bcc) main_cset_slider_pane_g15_ParamLimits

0x8ca2,	// (0x00075bcc) main_cset_slider_pane_g15

0xd278,	// (0x0007a1a2) main_cset_slider_pane_t14_ParamLimits

0xd278,	// (0x0007a1a2) main_cset_slider_pane_t14

0xd2b1,	// (0x0007a1db) main_cset_slider_pane_t15_ParamLimits

0xd2b1,	// (0x0007a1db) main_cset_slider_pane_t15

0x916f,	// (0x00076099) aid_cam4_burst_size_cell_ParamLimits

0x916f,	// (0x00076099) aid_cam4_burst_size_cell

0x918f,	// (0x000760b9) grid_cam4_burst_pane_ParamLimits

0x918f,	// (0x000760b9) grid_cam4_burst_pane

0x91c7,	// (0x000760f1) linegrid_cam4_burst_pane_ParamLimits

0x91c7,	// (0x000760f1) linegrid_cam4_burst_pane

0x91eb,	// (0x00076115) scroll_pane_cp30_ParamLimits

0x91eb,	// (0x00076115) scroll_pane_cp30

0x91f7,	// (0x00076121) cell_cam4_burst_pane_ParamLimits

0x91f7,	// (0x00076121) cell_cam4_burst_pane

0xd42b,	// (0x0007a355) linegrid_cam4_burst_pane_g1_ParamLimits

0xd42b,	// (0x0007a355) linegrid_cam4_burst_pane_g1

0x9244,	// (0x0007616e) linegrid_cam4_burst_pane_g2_ParamLimits

0x9244,	// (0x0007616e) linegrid_cam4_burst_pane_g2

0xd438,	// (0x0007a362) linegrid_cam4_burst_pane_g3_ParamLimits

0xd438,	// (0x0007a362) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0007c9be) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0007c9be) linegrid_cam4_burst_pane_g

0x9255,	// (0x0007617f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9255,	// (0x0007617f) linegrid_cam4_burst_pane_g3_copy1

0xd445,	// (0x0007a36f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd445,	// (0x0007a36f) linegrid_cam4_burst_pane_g4

0x926f,	// (0x00076199) linegrid_cam4_burst_pane_g5_ParamLimits

0x926f,	// (0x00076199) linegrid_cam4_burst_pane_g5

0x9280,	// (0x000761aa) linegrid_cam4_burst_pane_g6_ParamLimits

0x9280,	// (0x000761aa) linegrid_cam4_burst_pane_g6

0xd452,	// (0x0007a37c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd452,	// (0x0007a37c) linegrid_cam4_burst_pane_g7

0x9297,	// (0x000761c1) cell_cam4_burst_pane_g1

0xd46b,	// (0x0007a395) main_cam5_pane_t1_ParamLimits

0xd46b,	// (0x0007a395) main_cam5_pane_t1

0xd47d,	// (0x0007a3a7) main_cam5_pane_t2_ParamLimits

0xd47d,	// (0x0007a3a7) main_cam5_pane_t2

0xd48f,	// (0x0007a3b9) main_cam5_pane_t3_ParamLimits

0xd48f,	// (0x0007a3b9) main_cam5_pane_t3

0xd4a1,	// (0x0007a3cb) main_cam5_pane_t4_ParamLimits

0xd4a1,	// (0x0007a3cb) main_cam5_pane_t4

0xd4b9,	// (0x0007a3e3) main_cam5_pane_t5_ParamLimits

0xd4b9,	// (0x0007a3e3) main_cam5_pane_t5

0xd4cd,	// (0x0007a3f7) main_cam5_pane_t6_ParamLimits

0xd4cd,	// (0x0007a3f7) main_cam5_pane_t6

0xd4e1,	// (0x0007a40b) main_cam5_pane_t7_ParamLimits

0xd4e1,	// (0x0007a40b) main_cam5_pane_t7

0xd4f3,	// (0x0007a41d) main_cam5_pane_t8_ParamLimits

0xd4f3,	// (0x0007a41d) main_cam5_pane_t8

0xd50f,	// (0x0007a439) main_cam5_pane_t9_ParamLimits

0xd50f,	// (0x0007a439) main_cam5_pane_t9

0xd521,	// (0x0007a44b) main_cam5_pane_t10_ParamLimits

0xd521,	// (0x0007a44b) main_cam5_pane_t10

0xd533,	// (0x0007a45d) main_cam5_pane_t11_ParamLimits

0xd533,	// (0x0007a45d) main_cam5_pane_t11

0xd545,	// (0x0007a46f) main_cam5_pane_t12_ParamLimits

0xd545,	// (0x0007a46f) main_cam5_pane_t12

0xd55a,	// (0x0007a484) main_cam5_pane_t13_ParamLimits

0xd55a,	// (0x0007a484) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0007c9ca) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0007c9ca) main_cam5_pane_t

0x27d0,	// (0x0006f6fa) popup_scut_keymap_window_ParamLimits

0x27d0,	// (0x0006f6fa) popup_scut_keymap_window

0x92aa,	// (0x000761d4) aid_size_cell_brow_shortcut

0xbc98,	// (0x00078bc2) bg_popup_window_pane_cp010

0x92b6,	// (0x000761e0) grid_scut_pane

0x92c2,	// (0x000761ec) cell_scut_pane_ParamLimits

0x92c2,	// (0x000761ec) cell_scut_pane

0x92d9,	// (0x00076203) cell_scut_pane_g1

0xd577,	// (0x0007a4a1) cell_scut_pane_t1

0xd586,	// (0x0007a4b0) cell_scut_pane_t2

0x92e2,	// (0x0007620c) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0007c9e5) cell_scut_pane_t

0x71fe,	// (0x00074128) main_mup3_pane_g8_ParamLimits

0x71fe,	// (0x00074128) main_mup3_pane_g8

0x8671,	// (0x0007559b) area_vitu2_query_pane_ParamLimits

0x8671,	// (0x0007559b) area_vitu2_query_pane

0x1eef,	// (0x0006ee19) input_focus_pane_cp08

0xd595,	// (0x0007a4bf) area_vitu2_query_pane_g1

0x1f6c,	// (0x0006ee96) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0007c9ec) area_vitu2_query_pane_g

0x92f0,	// (0x0007621a) area_vitu2_query_pane_t1_ParamLimits

0x92f0,	// (0x0007621a) area_vitu2_query_pane_t1

0x9304,	// (0x0007622e) area_vitu2_query_pane_t2_ParamLimits

0x9304,	// (0x0007622e) area_vitu2_query_pane_t2

0x1f7d,	// (0x0006eea7) area_vitu2_query_pane_t3_ParamLimits

0x1f7d,	// (0x0006eea7) area_vitu2_query_pane_t3

0xd5a1,	// (0x0007a4cb) area_vitu2_query_pane_t4_ParamLimits

0xd5a1,	// (0x0007a4cb) area_vitu2_query_pane_t4

0xd5c9,	// (0x0007a4f3) area_vitu2_query_pane_t5_ParamLimits

0xd5c9,	// (0x0007a4f3) area_vitu2_query_pane_t5

0xd5f1,	// (0x0007a51b) area_vitu2_query_pane_t6_ParamLimits

0xd5f1,	// (0x0007a51b) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0007c9f1) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0007c9f1) area_vitu2_query_pane_t

0x9318,	// (0x00076242) bg_button_pane_cp018

0x9326,	// (0x00076250) bg_button_pane_cp021

0x1fa5,	// (0x0006eecf) bg_button_pane_cp022

0x1fb4,	// (0x0006eede) input_focus_pane_cp09

0x49ac,	// (0x000718d6) aid_size_touch_mv_arrow_left

0x49d5,	// (0x000718ff) aid_size_touch_mv_arrow_right

0x8cba,	// (0x00075be4) main_cset_slider_pane_g16_ParamLimits

0x8cba,	// (0x00075be4) main_cset_slider_pane_g16

0x8cc6,	// (0x00075bf0) main_cset_slider_pane_g17_ParamLimits

0x8cc6,	// (0x00075bf0) main_cset_slider_pane_g17

0x9297,	// (0x000761c1) cell_cam4_burst_pane_g1_ParamLimits

0x259e,	// (0x0006f4c8) compa_mode_pane

0x8eac,	// (0x00075dd6) popup_vtel_slider_window_g3_ParamLimits

0x8eac,	// (0x00075dd6) popup_vtel_slider_window_g3

0x8ec3,	// (0x00075ded) popup_vtel_slider_window_g4_ParamLimits

0x8ec3,	// (0x00075ded) popup_vtel_slider_window_g4

0x8eda,	// (0x00075e04) popup_vtel_slider_window_t1_ParamLimits

0x8eda,	// (0x00075e04) popup_vtel_slider_window_t1

0x259e,	// (0x0006f4c8) main_cl_pane

0x5be1,	// (0x00072b0b) popup_imed_adjust2_window_ParamLimits

0x5a9a,	// (0x000729c4) bg_tb_trans_pane_cp05_ParamLimits

0xcb72,	// (0x00079a9c) popup_imed_adjust2_window_g1_ParamLimits

0xcb81,	// (0x00079aab) popup_imed_adjust2_window_g2_ParamLimits

0xcb81,	// (0x00079aab) popup_imed_adjust2_window_g2

0xcb8d,	// (0x00079ab7) popup_imed_adjust2_window_g3_ParamLimits

0xcb8d,	// (0x00079ab7) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0007c76b) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0007c76b) popup_imed_adjust2_window_g

0xcb99,	// (0x00079ac3) popup_imed_adjust2_window_t1_ParamLimits

0xcbb1,	// (0x00079adb) slider_imed_adjust_pane_ParamLimits

0xcbc5,	// (0x00079aef) slider_imed_adjust_pane_g1_ParamLimits

0xcbd5,	// (0x00079aff) slider_imed_adjust_pane_g2_ParamLimits

0xcbe5,	// (0x00079b0f) slider_imed_adjust_pane_g3_ParamLimits

0xcbf6,	// (0x00079b20) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0007c772) slider_imed_adjust_pane_g_ParamLimits

0x83a8,	// (0x000752d2) aid_touch_area_cam4_ParamLimits

0x83a8,	// (0x000752d2) aid_touch_area_cam4

0xefe9,	// (0x0007bf13) battery_pane_cp01

0x845c,	// (0x00075386) main_camera4_pane_g6_ParamLimits

0x845c,	// (0x00075386) main_camera4_pane_g6

0x847f,	// (0x000753a9) main_camera4_pane_t2_ParamLimits

0x847f,	// (0x000753a9) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0007c875) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0007c875) main_camera4_pane_t

0x84d7,	// (0x00075401) aid_touch_area_vid4_ParamLimits

0x84d7,	// (0x00075401) aid_touch_area_vid4

0x8535,	// (0x0007545f) main_video4_pane_g5_ParamLimits

0x8535,	// (0x0007545f) main_video4_pane_g5

0x855c,	// (0x00075486) vid4_progress_pane_ParamLimits

0x855c,	// (0x00075486) vid4_progress_pane

0xd23e,	// (0x0007a168) main_cset_slider_pane_g18_ParamLimits

0xd23e,	// (0x0007a168) main_cset_slider_pane_g18

0xd45f,	// (0x0007a389) cell_cam4_burst_pane_g2_ParamLimits

0xd45f,	// (0x0007a389) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0007c9c5) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0007c9c5) cell_cam4_burst_pane_g

0xaeec,	// (0x00077e16) bg_cl_pane_ParamLimits

0xaeec,	// (0x00077e16) bg_cl_pane

0x9332,	// (0x0007625c) cl_header_pane_ParamLimits

0x9332,	// (0x0007625c) cl_header_pane

0x9346,	// (0x00076270) cl_listscroll_pane_ParamLimits

0x9346,	// (0x00076270) cl_listscroll_pane

0xd63d,	// (0x0007a567) bg_cl_pane_g1

0xd645,	// (0x0007a56f) bg_cl_pane_g2

0xd64d,	// (0x0007a577) bg_cl_pane_g3

0xd655,	// (0x0007a57f) bg_cl_pane_g4

0xd65d,	// (0x0007a587) bg_cl_pane_g5

0xd665,	// (0x0007a58f) bg_cl_pane_g6

0xd66d,	// (0x0007a597) bg_cl_pane_g7

0xd675,	// (0x0007a59f) bg_cl_pane_g8

0xd67d,	// (0x0007a5a7) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0007ca00) bg_cl_pane_g

0x9356,	// (0x00076280) aid_height_cl_leading_ParamLimits

0x9356,	// (0x00076280) aid_height_cl_leading

0x9362,	// (0x0007628c) aid_height_cl_text_ParamLimits

0x9362,	// (0x0007628c) aid_height_cl_text

0x0dfa,	// (0x0006dd24) bg_cl_header_pane_ParamLimits

0x0dfa,	// (0x0006dd24) bg_cl_header_pane

0x9381,	// (0x000762ab) cl_header_pane_g1_ParamLimits

0x9381,	// (0x000762ab) cl_header_pane_g1

0x9397,	// (0x000762c1) cl_header_pane_t1_ParamLimits

0x9397,	// (0x000762c1) cl_header_pane_t1

0xd685,	// (0x0007a5af) cl_list_pane

0xd211,	// (0x0007a13b) hc_scroll_pane_cp01

0xb45b,	// (0x00078385) bg_cl_header_pane_g1

0xd0f7,	// (0x0007a021) bg_cl_header_pane_g2

0xb47b,	// (0x000783a5) bg_cl_header_pane_g3

0xd107,	// (0x0007a031) bg_cl_header_pane_g4

0xd0ff,	// (0x0007a029) bg_cl_header_pane_g5

0xd360,	// (0x0007a28a) bg_cl_header_pane_g6

0xd11f,	// (0x0007a049) bg_cl_header_pane_g7

0xd127,	// (0x0007a051) bg_cl_header_pane_g8

0xd117,	// (0x0007a041) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0007ca13) bg_cl_header_pane_g

0x93b0,	// (0x000762da) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x93b0,	// (0x000762da) hc_cl_list_double_graphic_heading_pane

0x93c1,	// (0x000762eb) hc_cl_list_single_graphic_pane_ParamLimits

0x93c1,	// (0x000762eb) hc_cl_list_single_graphic_pane

0x93d7,	// (0x00076301) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x93d7,	// (0x00076301) hc_cl_list_single_graphic_pane_g1

0x93e3,	// (0x0007630d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x93e3,	// (0x0007630d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0007ca26) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0007ca26) hc_cl_list_single_graphic_pane_g

0x93f7,	// (0x00076321) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x93f7,	// (0x00076321) hc_cl_list_single_graphic_pane_t1

0x93d7,	// (0x00076301) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x93d7,	// (0x00076301) hc_cl_list_double_graphic_heading_pane_g1

0x940c,	// (0x00076336) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x940c,	// (0x00076336) hc_cl_list_double_graphic_heading_pane_g2

0x9420,	// (0x0007634a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9420,	// (0x0007634a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0007ca2b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0007ca2b) hc_cl_list_double_graphic_heading_pane_g

0x9434,	// (0x0007635e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9434,	// (0x0007635e) hc_cl_list_double_graphic_heading_pane_t1

0x9449,	// (0x00076373) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9449,	// (0x00076373) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0007ca32) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0007ca32) hc_cl_list_double_graphic_heading_pane_t

0xf077,	// (0x0007bfa1) vid4_progress_pane_g1

0xf083,	// (0x0007bfad) vid4_progress_pane_g2

0xf08f,	// (0x0007bfb9) vid4_progress_pane_g3

0xf09e,	// (0x0007bfc8) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0007ca37) vid4_progress_pane_g

0xf0bc,	// (0x0007bfe6) vid4_progress_pane_t1

0xf0d2,	// (0x0007bffc) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0007ca42) vid4_progress_pane_t

0xf0fd,	// (0x0007c027) wait_bar_pane_cp07

0x694a,	// (0x00073874) blid_firmament_pane_ParamLimits

0x698d,	// (0x000738b7) popup_blid_sat_info2_window_g1

0x69b1,	// (0x000738db) popup_blid_sat_info2_window_t3

0x69bf,	// (0x000738e9) popup_blid_sat_info2_window_t4

0x69cd,	// (0x000738f7) popup_blid_sat_info2_window_t5

0x69db,	// (0x00073905) popup_blid_sat_info2_window_t6

0x69eb,	// (0x00073915) popup_blid_sat_info2_window_t7

0x69f9,	// (0x00073923) popup_blid_sat_info2_window_t8

0x6a07,	// (0x00073931) popup_blid_sat_info2_window_t9

0x6a15,	// (0x0007393f) popup_blid_sat_info2_window_t10

0x6ba3,	// (0x00073acd) aid_firma_cardinal_ParamLimits

0x6bb7,	// (0x00073ae1) blid_firmament_pane_t1_ParamLimits

0x6bce,	// (0x00073af8) blid_firmament_pane_t2_ParamLimits

0x6be5,	// (0x00073b0f) blid_firmament_pane_t3_ParamLimits

0x6bfc,	// (0x00073b26) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0007c664) blid_firmament_pane_t_ParamLimits

0x6c13,	// (0x00073b3d) blid_sat_info_pane_ParamLimits

0x0dfa,	// (0x0006dd24) main_cam_set_pane_ParamLimits

0x7a5b,	// (0x00074985) aid_size_cell_colour_35_ParamLimits

0x7a7b,	// (0x000749a5) aid_size_cell_colour_112_ParamLimits

0x7a9b,	// (0x000749c5) aid_size_cell_effect_ParamLimits

0x5a9a,	// (0x000729c4) bg_tb_trans_pane_cp02_ParamLimits

0xb6ff,	// (0x00078629) heading_imed_pane_ParamLimits

0x7abb,	// (0x000749e5) listscroll_imed_pane_ParamLimits

0xc718,	// (0x00079642) popup_call2_audio_first_window_g5_ParamLimits

0xc718,	// (0x00079642) popup_call2_audio_first_window_g5

0x8053,	// (0x00074f7d) aid_size_touch_image3_arrow_left_ParamLimits

0x8053,	// (0x00074f7d) aid_size_touch_image3_arrow_left

0x807f,	// (0x00074fa9) aid_size_touch_image3_arrow_right_ParamLimits

0x807f,	// (0x00074fa9) aid_size_touch_image3_arrow_right

0xf0e8,	// (0x0007c012) vid4_progress_pane_t3

0x7dce,	// (0x00074cf8) main_hwr_training_symbol_option_pane_ParamLimits

0x7dce,	// (0x00074cf8) main_hwr_training_symbol_option_pane

0xce5f,	// (0x00079d89) popup_hwr_training_preview_window_ParamLimits

0xce5f,	// (0x00079d89) popup_hwr_training_preview_window

0x7dee,	// (0x00074d18) hwr_training_navi_pane_g5_ParamLimits

0x7dee,	// (0x00074d18) hwr_training_navi_pane_g5

0xd0e5,	// (0x0007a00f) popup_char_count_window

0x0dfa,	// (0x0006dd24) bg_popup_sub_pane_cp20_ParamLimits

0x8ff2,	// (0x00075f1c) list_vitu2_match_list_pane_ParamLimits

0x9001,	// (0x00075f2b) vitu2_page_scroll_pane_ParamLimits

0x9001,	// (0x00075f2b) vitu2_page_scroll_pane

0xd6e0,	// (0x0007a60a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd6e0,	// (0x0007a60a) list_single_hwr_training_symbol_option_pane

0xd6f3,	// (0x0007a61d) list_single_hwr_training_symbol_option_pane_g1

0xd6fb,	// (0x0007a625) list_single_hwr_training_symbol_option_pane_t1

0xd709,	// (0x0007a633) bg_button_pane_cp023

0xd712,	// (0x0007a63c) bg_button_pane_cp024

0x9468,	// (0x00076392) vitu2_page_scroll_pane_g1

0x9470,	// (0x0007639a) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0007ca49) vitu2_page_scroll_pane_g

0x9478,	// (0x000763a2) vitu2_page_scroll_pane_t1

0xd745,	// (0x0007a66f) popup_char_count_window_g1

0xd74e,	// (0x0007a678) popup_char_count_window_g2

0xd757,	// (0x0007a681) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0007ca4e) popup_char_count_window_g

0xd760,	// (0x0007a68a) popup_char_count_window_t1

0x259e,	// (0x0006f4c8) main_vded2_pane

0xcb5e,	// (0x00079a88) aid_size_cell_imed_line

0xcb68,	// (0x00079a92) grid_imed_line_width_pane

0x85bd,	// (0x000754e7) vid4_indicators_pane_g4

0xd76e,	// (0x0007a698) cell_imed_line_width_pane_ParamLimits

0xd76e,	// (0x0007a698) cell_imed_line_width_pane

0xd782,	// (0x0007a6ac) cell_imed_line_width_pane_g1

0x9487,	// (0x000763b1) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0007ca55) cell_imed_line_width_pane_g

0x948f,	// (0x000763b9) main_vded2_pane_g1_ParamLimits

0x948f,	// (0x000763b9) main_vded2_pane_g1

0x94a5,	// (0x000763cf) main_vded2_pane_g2_ParamLimits

0x94a5,	// (0x000763cf) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0007ca5a) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0007ca5a) main_vded2_pane_g

0x94b7,	// (0x000763e1) vded2_slider_pane_ParamLimits

0x94b7,	// (0x000763e1) vded2_slider_pane

0x94c7,	// (0x000763f1) aid_size_touch_vded2_end

0x94d1,	// (0x000763fb) aid_size_touch_vded2_playhead

0xd78b,	// (0x0007a6b5) aid_size_touch_vded2_start

0xd793,	// (0x0007a6bd) vded2_slider_bg_pane

0xd79c,	// (0x0007a6c6) vded2_slider_pane_g1

0xd7a5,	// (0x0007a6cf) vded2_slider_pane_g2

0x94db,	// (0x00076405) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0007ca5f) vded2_slider_pane_g

0xd7ad,	// (0x0007a6d7) vded2_slider_bg_pane_g1

0xd7b6,	// (0x0007a6e0) vded2_slider_bg_pane_g2

0xd7bf,	// (0x0007a6e9) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0007ca66) vded2_slider_bg_pane_g

0x4f88,	// (0x00071eb2) aid_postcard_touch_down_pane_ParamLimits

0x4f88,	// (0x00071eb2) aid_postcard_touch_down_pane

0x4f9e,	// (0x00071ec8) aid_postcard_touch_up_pane_ParamLimits

0x4f9e,	// (0x00071ec8) aid_postcard_touch_up_pane

0x259e,	// (0x0006f4c8) main_blid2_pane

0x5ad0,	// (0x000729fa) popup_blid2_search_window

0x259e,	// (0x0006f4c8) blid2_gps_pane

0x259e,	// (0x0006f4c8) blid2_navig_pane

0x259e,	// (0x0006f4c8) blid2_search_pane

0x259e,	// (0x0006f4c8) blid2_tripm_pane

0x94e6,	// (0x00076410) blid2_search_pane_g1_ParamLimits

0x94e6,	// (0x00076410) blid2_search_pane_g1

0x9500,	// (0x0007642a) blid2_search_pane_t1_ParamLimits

0x9500,	// (0x0007642a) blid2_search_pane_t1

0x9512,	// (0x0007643c) aid_size_cell_blid2_gps_ParamLimits

0x9512,	// (0x0007643c) aid_size_cell_blid2_gps

0x952a,	// (0x00076454) blid2_gps_pane_g1_ParamLimits

0x952a,	// (0x00076454) blid2_gps_pane_g1

0x953e,	// (0x00076468) grid_blid2_satellite_pane_ParamLimits

0x953e,	// (0x00076468) grid_blid2_satellite_pane

0x9558,	// (0x00076482) blid2_navig_pane_g1_ParamLimits

0x9558,	// (0x00076482) blid2_navig_pane_g1

0x9564,	// (0x0007648e) blid2_navig_pane_t1_ParamLimits

0x9564,	// (0x0007648e) blid2_navig_pane_t1

0x957f,	// (0x000764a9) blid2_navig_pane_t2_ParamLimits

0x957f,	// (0x000764a9) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0007ca6d) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0007ca6d) blid2_navig_pane_t

0x959a,	// (0x000764c4) blid2_navig_ring_pane_ParamLimits

0x959a,	// (0x000764c4) blid2_navig_ring_pane

0x95b3,	// (0x000764dd) blid2_speed_pane_ParamLimits

0x95b3,	// (0x000764dd) blid2_speed_pane

0x95bf,	// (0x000764e9) blid2_tripm_pane_g1_ParamLimits

0x95bf,	// (0x000764e9) blid2_tripm_pane_g1

0x95d8,	// (0x00076502) blid2_tripm_pane_g2_ParamLimits

0x95d8,	// (0x00076502) blid2_tripm_pane_g2

0x95ec,	// (0x00076516) blid2_tripm_pane_g3_ParamLimits

0x95ec,	// (0x00076516) blid2_tripm_pane_g3

0x9600,	// (0x0007652a) blid2_tripm_pane_g4_ParamLimits

0x9600,	// (0x0007652a) blid2_tripm_pane_g4

0x9614,	// (0x0007653e) blid2_tripm_pane_g5_ParamLimits

0x9614,	// (0x0007653e) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0007ca72) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0007ca72) blid2_tripm_pane_g

0x963a,	// (0x00076564) blid2_tripm_pane_t1_ParamLimits

0x963a,	// (0x00076564) blid2_tripm_pane_t1

0x9655,	// (0x0007657f) blid2_tripm_pane_t2_ParamLimits

0x9655,	// (0x0007657f) blid2_tripm_pane_t2

0x966e,	// (0x00076598) blid2_tripm_pane_t3_ParamLimits

0x966e,	// (0x00076598) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0007ca7f) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0007ca7f) blid2_tripm_pane_t

0x96b5,	// (0x000765df) cell_blid2_satellite_pane_ParamLimits

0x96b5,	// (0x000765df) cell_blid2_satellite_pane

0x96d3,	// (0x000765fd) cell_blid2_satellite_pane_g1

0xd7c8,	// (0x0007a6f2) cell_blid2_satellite_pane_t1

0x6c23,	// (0x00073b4d) blid2_speed_pane_g1

0xd7d6,	// (0x0007a700) blid2_speed_pane_t1

0xd7e4,	// (0x0007a70e) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0007ca88) blid2_speed_pane_t

0x6c23,	// (0x00073b4d) blid2_navig_ring_pane_g1

0x96dc,	// (0x00076606) blid2_navig_ring_pane_g2

0x96e4,	// (0x0007660e) blid2_navig_ring_pane_g3

0x96ec,	// (0x00076616) blid2_navig_ring_pane_g4

0x96f4,	// (0x0007661e) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0007ca8d) blid2_navig_ring_pane_g

0x259e,	// (0x0006f4c8) bg_popup_window_pane_cp011

0xd7f2,	// (0x0007a71c) popup_blid2_search_window_g1

0xd7fa,	// (0x0007a724) popup_blid2_search_window_t1

0xd808,	// (0x0007a732) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0007ca98) popup_blid2_search_window_t

0xb36a,	// (0x00078294) main_browser_pane_g1

0xaeec,	// (0x00077e16) main_browser_pane_ParamLimits

0x0dfa,	// (0x0006dd24) bg_button_pane_cp011_ParamLimits

0x8896,	// (0x000757c0) cell_vitu2_function_pane_g1_ParamLimits

0x0dfa,	// (0x0006dd24) bg_popup_sub_pane_cp22_ParamLimits

0x1eef,	// (0x0006ee19) input_focus_pane_cp08_ParamLimits

0x9136,	// (0x00076060) popup_vitu2_query_button_pane_ParamLimits

0x9136,	// (0x00076060) popup_vitu2_query_button_pane

0x1ee5,	// (0x0006ee0f) popup_vitu2_query_input_button_pane

0xd3b5,	// (0x0007a2df) popup_vitu2_query_window_g1_ParamLimits

0x1efc,	// (0x0006ee26) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0007c99f) popup_vitu2_query_window_g_ParamLimits

0x259e,	// (0x0006f4c8) bg_button_pane_cp026

0x96fc,	// (0x00076626) popup_vitu2_query_input_button_pane_g1

0x259e,	// (0x0006f4c8) bg_button_pane_cp025

0xd816,	// (0x0007a740) popup_vitu2_query_button_pane_t1

0x6ee6,	// (0x00073e10) main_mp3_pane_t6

0x6ef4,	// (0x00073e1e) popup_slider_window_cp01

0xeff9,	// (0x0007bf23) cam4_battery_pane

0xf009,	// (0x0007bf33) cam4_battery_pane_cp02

0x945e,	// (0x00076388) cam4_battery_pane_cp01

0xf06f,	// (0x0007bf99) cam4_battery_pane_cp03

0x6c23,	// (0x00073b4d) cam4_battery_pane_g1

0xd824,	// (0x0007a74e) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0007ca9d) cam4_battery_pane_g

0x6a23,	// (0x0007394d) popup_blid_sat_info2_window_t11

0x49ac,	// (0x000718d6) aid_size_touch_mv_arrow_left_ParamLimits

0x49d5,	// (0x000718ff) aid_size_touch_mv_arrow_right_ParamLimits

0xbbf8,	// (0x00078b22) navi_pane_g1_ParamLimits

0x49fe,	// (0x00071928) navi_pane_g2_ParamLimits

0x4a2c,	// (0x00071956) navi_pane_g3_ParamLimits

0xf44c,	// (0x0007c376) navi_pane_g_ParamLimits

0x4a84,	// (0x000719ae) navi_pane_mv_t1_ParamLimits

0x7ac7,	// (0x000749f1) grid_imed_effect_pane_ParamLimits

0xb2b3,	// (0x000781dd) aid_placing_vt_slider_lsc

0xb2bb,	// (0x000781e5) aid_placing_vt_slider_prt

0x0dfa,	// (0x0006dd24) bg_tb_trans_pane_cp01_ParamLimits

0x6ddf,	// (0x00073d09) popup_image_details_window_g1_ParamLimits

0x6df2,	// (0x00073d1c) popup_image_details_window_g2_ParamLimits

0x6e07,	// (0x00073d31) popup_image_details_window_g3_ParamLimits

0x6e07,	// (0x00073d31) popup_image_details_window_g3

0xf77f,	// (0x0007c6a9) popup_image_details_window_g_ParamLimits

0x6e1b,	// (0x00073d45) popup_image_details_window_t1_ParamLimits

0x6e2d,	// (0x00073d57) popup_image_details_window_t2_ParamLimits

0x6e46,	// (0x00073d70) popup_image_details_window_t3_ParamLimits

0x6e5a,	// (0x00073d84) popup_image_details_window_t4_ParamLimits

0x6e75,	// (0x00073d9f) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0007c6b0) popup_image_details_window_t_ParamLimits

0x936e,	// (0x00076298) cl_header_name_pane_ParamLimits

0x936e,	// (0x00076298) cl_header_name_pane

0x9704,	// (0x0007662e) cl_header_name_pane_t1_ParamLimits

0x9704,	// (0x0007662e) cl_header_name_pane_t1

0x9725,	// (0x0007664f) cl_header_name_pane_t2_ParamLimits

0x9725,	// (0x0007664f) cl_header_name_pane_t2

0x9767,	// (0x00076691) cl_header_name_pane_t3_ParamLimits

0x9767,	// (0x00076691) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0007caa2) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0007caa2) cl_header_name_pane_t

0x4a55,	// (0x0007197f) navi_pane_mv_g2_ParamLimits

0xd085,	// (0x00079faf) field_vitu2_entry_pane_g1_ParamLimits

0xd091,	// (0x00079fbb) field_vitu2_entry_pane_g2_ParamLimits

0xd09d,	// (0x00079fc7) field_vitu2_entry_pane_g3_ParamLimits

0xd09d,	// (0x00079fc7) field_vitu2_entry_pane_g3

0xf974,	// (0x0007c89e) field_vitu2_entry_pane_g_ParamLimits

0x8812,	// (0x0007573c) cell_vitu2_itu_pane_g1_ParamLimits

0x8822,	// (0x0007574c) cell_vitu2_itu_pane_g2_ParamLimits

0x8822,	// (0x0007574c) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0007c8aa) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0007c8aa) cell_vitu2_itu_pane_g

0x0dfa,	// (0x0006dd24) bg_vkb2_func_pane_cp05_ParamLimits

0x0dfa,	// (0x0006dd24) bg_vkb2_func_pane_cp05

0x0dfa,	// (0x0006dd24) bg_vkb2_func_pane_cp03

0x0dfa,	// (0x0006dd24) bg_vkb2_func_pane_cp04

0x0dfa,	// (0x0006dd24) bg_vkb2_func_pane_cp10_ParamLimits

0x0dfa,	// (0x0006dd24) bg_vkb2_func_pane_cp10

0x1fa5,	// (0x0006eecf) bg_vkb2_func_pane_cp08

0x9318,	// (0x00076242) bg_vkb2_func_pane_cp06

0x9326,	// (0x00076250) bg_vkb2_func_pane_cp07

0xd71b,	// (0x0007a645) bg_vkb2_func_pane_cp11_ParamLimits

0xd71b,	// (0x0007a645) bg_vkb2_func_pane_cp11

0xd730,	// (0x0007a65a) bg_vkb2_func_pane_cp12_ParamLimits

0xd730,	// (0x0007a65a) bg_vkb2_func_pane_cp12

0x259e,	// (0x0006f4c8) bg_vkb2_func_pane_cp09

0xd0f7,	// (0x0007a021) bg_vkb2_func_pane_g1

0xb47b,	// (0x000783a5) bg_vkb2_func_pane_g2

0xd0ff,	// (0x0007a029) bg_vkb2_func_pane_g3

0xd107,	// (0x0007a031) bg_vkb2_func_pane_g4

0xd360,	// (0x0007a28a) bg_vkb2_func_pane_g5

0xd11f,	// (0x0007a049) bg_vkb2_func_pane_g6

0xd127,	// (0x0007a051) bg_vkb2_func_pane_g7

0xd117,	// (0x0007a041) bg_vkb2_func_pane_g8

0xb45b,	// (0x00078385) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0007caa9) bg_vkb2_func_pane_g

0x9628,	// (0x00076552) blid2_tripm_pane_g6_ParamLimits

0x9628,	// (0x00076552) blid2_tripm_pane_g6

0xcf17,	// (0x00079e41) mp4_progress_pane_g1

0x96a1,	// (0x000765cb) blid2_tripm_values_pane_ParamLimits

0x96a1,	// (0x000765cb) blid2_tripm_values_pane

0x9798,	// (0x000766c2) blid2_tripm_values_pane_t1

0x97a6,	// (0x000766d0) blid2_tripm_values_pane_t2

0x97b4,	// (0x000766de) blid2_tripm_values_pane_t3

0x97c2,	// (0x000766ec) blid2_tripm_values_pane_t4

0x97d0,	// (0x000766fa) blid2_tripm_values_pane_t5

0x97de,	// (0x00076708) blid2_tripm_values_pane_t6

0x97ec,	// (0x00076716) blid2_tripm_values_pane_t7

0x97fa,	// (0x00076724) blid2_tripm_values_pane_t8

0x9808,	// (0x00076732) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0007cabc) blid2_tripm_values_pane_t

0x3b4a,	// (0x00070a74) call_video_pane_t1_ParamLimits

0x3b5e,	// (0x00070a88) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0007c1ff) call_video_pane_t_ParamLimits

0x1d4f,	// (0x0006ec79) msg_header_pane_g1_ParamLimits

0xbe33,	// (0x00078d5d) msg_header_pane_g2_ParamLimits

0xbe33,	// (0x00078d5d) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0007c419) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0007c419) msg_header_pane_g

0xaeec,	// (0x00077e16) main_clock2_pane_ParamLimits

0x77f3,	// (0x0007471d) grid_clock2_toolbar_pane_ParamLimits

0x77f3,	// (0x0007471d) grid_clock2_toolbar_pane

0x77f3,	// (0x0007471d) listscroll_clock2_pane_ParamLimits

0x77f3,	// (0x0007471d) listscroll_clock2_pane

0x78cf,	// (0x000747f9) main_clock2_pane_t3_ParamLimits

0x78cf,	// (0x000747f9) main_clock2_pane_t3

0x78ea,	// (0x00074814) main_clock2_pane_t4_ParamLimits

0x78ea,	// (0x00074814) main_clock2_pane_t4

0xd82e,	// (0x0007a758) cell_clock2_toolbar_pane

0xd836,	// (0x0007a760) cell_clock2_toolbar_pane_cp01

0xd836,	// (0x0007a760) cell_clock2_toolbar_pane_cp02

0xd83e,	// (0x0007a768) cell_clock2_toolbar_pane_cp03

0xd846,	// (0x0007a770) list_clock2_pane

0xbb4f,	// (0x00078a79) scroll_pane_cp10

0xd84e,	// (0x0007a778) list_single_clock2_pane_ParamLimits

0xd84e,	// (0x0007a778) list_single_clock2_pane

0xbc98,	// (0x00078bc2) list_highlight_pane_cp08

0xd85b,	// (0x0007a785) list_single_clock2_pane_t1

0xd869,	// (0x0007a793) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0007cacf) list_single_clock2_pane_t

0x259e,	// (0x0006f4c8) bg_button_pane_cp10

0xd877,	// (0x0007a7a1) cell_clock2_toolbar_pane_g1

0x4f14,	// (0x00071e3e) aid_main_viewer_pane_g1_ParamLimits

0x4f14,	// (0x00071e3e) aid_main_viewer_pane_g1

0x4f22,	// (0x00071e4c) aid_main_viewer_pane_g2_ParamLimits

0x4f22,	// (0x00071e4c) aid_main_viewer_pane_g2

0x4f30,	// (0x00071e5a) aid_main_viewer_pane_g3_ParamLimits

0x4f30,	// (0x00071e5a) aid_main_viewer_pane_g3

0x4f3f,	// (0x00071e69) aid_main_viewer_pane_g4_ParamLimits

0x4f3f,	// (0x00071e69) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0007c42a) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0007c42a) aid_main_viewer_pane_g

0x5a86,	// (0x000729b0) main_calc_pane_ParamLimits

0x5aa8,	// (0x000729d2) main_dialer2_pane_ParamLimits

0x259e,	// (0x0006f4c8) main_cam6_pane

0x259e,	// (0x0006f4c8) main_vid6_pane

0x77ff,	// (0x00074729) listscroll_gen_pane_cp06_ParamLimits

0x77ff,	// (0x00074729) listscroll_gen_pane_cp06

0x7905,	// (0x0007482f) main_clock2_pane_t5_ParamLimits

0x7905,	// (0x0007482f) main_clock2_pane_t5

0x795c,	// (0x00074886) aid_call2_pane_cp10_ParamLimits

0x796e,	// (0x00074898) aid_call_pane_cp10_ParamLimits

0xbbcd,	// (0x00078af7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xbbcd,	// (0x00078af7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7980,	// (0x000748aa) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7980,	// (0x000748aa) popup_clock_analogue_window_cp10_g4_ParamLimits

0xbbcd,	// (0x00078af7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0007c760) popup_clock_analogue_window_cp10_g_ParamLimits

0x7992,	// (0x000748bc) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8000,	// (0x00074f2a) cell_dialer2_keypad_pane_g2_ParamLimits

0x8000,	// (0x00074f2a) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0007c846) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0007c846) cell_dialer2_keypad_pane_g

0x801c,	// (0x00074f46) cell_dialer2_keypad_pane_t1

0x8bad,	// (0x00075ad7) main_cset_text2_pane_ParamLimits

0x8bad,	// (0x00075ad7) main_cset_text2_pane

0xd595,	// (0x0007a4bf) area_vitu2_query_pane_g1_ParamLimits

0x1f6c,	// (0x0006ee96) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0007c9ec) area_vitu2_query_pane_g_ParamLimits

0xd619,	// (0x0007a543) area_vitu2_query_pane_t7_ParamLimits

0xd619,	// (0x0007a543) area_vitu2_query_pane_t7

0x9318,	// (0x00076242) bg_button_pane_cp018_ParamLimits

0x9326,	// (0x00076250) bg_button_pane_cp021_ParamLimits

0x1fa5,	// (0x0006eecf) bg_button_pane_cp022_ParamLimits

0x1fa5,	// (0x0006eecf) bg_vkb2_func_pane_cp08_ParamLimits

0x9318,	// (0x00076242) bg_vkb2_func_pane_cp06_ParamLimits

0x9326,	// (0x00076250) bg_vkb2_func_pane_cp07_ParamLimits

0x1fb4,	// (0x0006eede) input_focus_pane_cp09_ParamLimits

0xf115,	// (0x0007c03f) cam6_autofocus_pane_ParamLimits

0xf115,	// (0x0007c03f) cam6_autofocus_pane

0x9816,	// (0x00076740) cam6_image_uncrop_pane_ParamLimits

0x9816,	// (0x00076740) cam6_image_uncrop_pane

0x9825,	// (0x0007674f) cam6_indi_pane_ParamLimits

0x9825,	// (0x0007674f) cam6_indi_pane

0x983b,	// (0x00076765) cam6_mode_pane_ParamLimits

0x983b,	// (0x00076765) cam6_mode_pane

0x984d,	// (0x00076777) cam6_timer_pane_ParamLimits

0x984d,	// (0x00076777) cam6_timer_pane

0x9859,	// (0x00076783) cam6_zoom_pane_ParamLimits

0x9859,	// (0x00076783) cam6_zoom_pane

0x9865,	// (0x0007678f) cam6_mode_pane_g1_ParamLimits

0x9865,	// (0x0007678f) cam6_mode_pane_g1

0x9875,	// (0x0007679f) cam6_mode_pane_g2_ParamLimits

0x9875,	// (0x0007679f) cam6_mode_pane_g2

0x9885,	// (0x000767af) cam6_mode_pane_g3_ParamLimits

0x9885,	// (0x000767af) cam6_mode_pane_g3

0x9895,	// (0x000767bf) cam6_mode_pane_g4_ParamLimits

0x9895,	// (0x000767bf) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0007cad4) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0007cad4) cam6_mode_pane_g

0xd87f,	// (0x0007a7a9) bg_tb_trans_pane_cp08_ParamLimits

0xd87f,	// (0x0007a7a9) bg_tb_trans_pane_cp08

0xd88d,	// (0x0007a7b7) cam6_battery_pane_ParamLimits

0xd88d,	// (0x0007a7b7) cam6_battery_pane

0xd8a3,	// (0x0007a7cd) cam6_indi_pane_g1_ParamLimits

0xd8a3,	// (0x0007a7cd) cam6_indi_pane_g1

0xd8b5,	// (0x0007a7df) cam6_indi_pane_g2_ParamLimits

0xd8b5,	// (0x0007a7df) cam6_indi_pane_g2

0xd8c7,	// (0x0007a7f1) cam6_indi_pane_g3_ParamLimits

0xd8c7,	// (0x0007a7f1) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0007cadd) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0007cadd) cam6_indi_pane_g

0xd8d9,	// (0x0007a803) cam6_indi_pane_t1_ParamLimits

0xd8d9,	// (0x0007a803) cam6_indi_pane_t1

0x98a5,	// (0x000767cf) cam6_autofocus_pane_g1

0x98ad,	// (0x000767d7) cam6_autofocus_pane_g2

0x98b5,	// (0x000767df) cam6_autofocus_pane_g3

0x98bd,	// (0x000767e7) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0007cae4) cam6_autofocus_pane_g

0xd8ff,	// (0x0007a829) cam6_timer_pane_g1

0xd907,	// (0x0007a831) cam6_timer_pane_t1

0xd915,	// (0x0007a83f) cam6_zoom_cont_pane

0xd91d,	// (0x0007a847) cam6_zoom_pane_g1

0xd925,	// (0x0007a84f) cam6_zoom_pane_g2

0x98c5,	// (0x000767ef) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0007caed) cam6_zoom_pane_g

0x6c23,	// (0x00073b4d) cam6_battery_pane_g1

0x6c23,	// (0x00073b4d) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0007c66d) cam6_battery_pane_g

0xd92d,	// (0x0007a857) cam6_zoom_cont_pane_g1

0xd936,	// (0x0007a860) cam6_zoom_cont_pane_g2

0xd93f,	// (0x0007a869) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0007caf4) cam6_zoom_cont_pane_g

0x98e2,	// (0x0007680c) cam6_mode_pane_cp_ParamLimits

0x98e2,	// (0x0007680c) cam6_mode_pane_cp

0x9859,	// (0x00076783) cam6_zoom_pane_cp_ParamLimits

0x9859,	// (0x00076783) cam6_zoom_pane_cp

0x98f4,	// (0x0007681e) vid6_image_uncrop_cif_pane_ParamLimits

0x98f4,	// (0x0007681e) vid6_image_uncrop_cif_pane

0x9904,	// (0x0007682e) vid6_image_uncrop_nhd_pane_ParamLimits

0x9904,	// (0x0007682e) vid6_image_uncrop_nhd_pane

0x9816,	// (0x00076740) vid6_image_uncrop_vga_pane_ParamLimits

0x9816,	// (0x00076740) vid6_image_uncrop_vga_pane

0x9913,	// (0x0007683d) vid6_image_uncrop_wvga_pane_ParamLimits

0x9913,	// (0x0007683d) vid6_image_uncrop_wvga_pane

0x9922,	// (0x0007684c) vid6_indi_pane_ParamLimits

0x9922,	// (0x0007684c) vid6_indi_pane

0xd87f,	// (0x0007a7a9) bg_tb_trans_pane_cp09_ParamLimits

0xd87f,	// (0x0007a7a9) bg_tb_trans_pane_cp09

0xd957,	// (0x0007a881) cam6_battery_pane_cp_ParamLimits

0xd957,	// (0x0007a881) cam6_battery_pane_cp

0xd963,	// (0x0007a88d) vid6_indi_pane_g1_ParamLimits

0xd963,	// (0x0007a88d) vid6_indi_pane_g1

0xd975,	// (0x0007a89f) vid6_indi_pane_g2_ParamLimits

0xd975,	// (0x0007a89f) vid6_indi_pane_g2

0xd987,	// (0x0007a8b1) vid6_indi_pane_g3_ParamLimits

0xd987,	// (0x0007a8b1) vid6_indi_pane_g3

0xd99c,	// (0x0007a8c6) vid6_indi_pane_g4_ParamLimits

0xd99c,	// (0x0007a8c6) vid6_indi_pane_g4

0xd9b1,	// (0x0007a8db) vid6_indi_pane_g5_ParamLimits

0xd9b1,	// (0x0007a8db) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0007cafb) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0007cafb) vid6_indi_pane_g

0xd9cb,	// (0x0007a8f5) vid6_indi_pane_t1_ParamLimits

0xd9cb,	// (0x0007a8f5) vid6_indi_pane_t1

0xd9e1,	// (0x0007a90b) vid6_indi_pane_t2_ParamLimits

0xd9e1,	// (0x0007a90b) vid6_indi_pane_t2

0xda09,	// (0x0007a933) vid6_indi_pane_t3_ParamLimits

0xda09,	// (0x0007a933) vid6_indi_pane_t3

0xda31,	// (0x0007a95b) vid6_indi_pane_t4_ParamLimits

0xda31,	// (0x0007a95b) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0007cb06) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0007cb06) vid6_indi_pane_t

0xda55,	// (0x0007a97f) wait_bar_pane_cp08

0x993a,	// (0x00076864) main_cset_text2_pane_t1_ParamLimits

0x993a,	// (0x00076864) main_cset_text2_pane_t1

0x98cd,	// (0x000767f7) listscroll_gen_pane_cp06_t1_ParamLimits

0x98cd,	// (0x000767f7) listscroll_gen_pane_cp06_t1

0x259e,	// (0x0006f4c8) main_cam6_set_pane

0xc944,	// (0x0007986e) bg_tb_trans_pane_cp06_ParamLimits

0x84a0,	// (0x000753ca) cam4_indicators_pane_g1_ParamLimits

0x84ad,	// (0x000753d7) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0007c87a) cam4_indicators_pane_g_ParamLimits

0x84c5,	// (0x000753ef) cam4_indicators_pane_t1_ParamLimits

0xd05e,	// (0x00079f88) bg_tb_trans_pane_cp07_ParamLimits

0x84a0,	// (0x000753ca) vid4_indicators_pane_g1_ParamLimits

0x85a3,	// (0x000754cd) vid4_indicators_pane_g2_ParamLimits

0x85b0,	// (0x000754da) vid4_indicators_pane_g3_ParamLimits

0x85bd,	// (0x000754e7) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0007c88c) vid4_indicators_pane_g_ParamLimits

0x85d5,	// (0x000754ff) vid4_indicators_pane_t1_ParamLimits

0xf077,	// (0x0007bfa1) vid4_progress_pane_g1_ParamLimits

0xf083,	// (0x0007bfad) vid4_progress_pane_g2_ParamLimits

0xf08f,	// (0x0007bfb9) vid4_progress_pane_g3_ParamLimits

0xf09e,	// (0x0007bfc8) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0007ca37) vid4_progress_pane_g_ParamLimits

0xf0bc,	// (0x0007bfe6) vid4_progress_pane_t1_ParamLimits

0xf0d2,	// (0x0007bffc) vid4_progress_pane_t2_ParamLimits

0xf0e8,	// (0x0007c012) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0007ca42) vid4_progress_pane_t_ParamLimits

0xf0fd,	// (0x0007c027) wait_bar_pane_cp07_ParamLimits

0x9957,	// (0x00076881) main_cam6_set_pane_g2_ParamLimits

0x9957,	// (0x00076881) main_cam6_set_pane_g2

0x997b,	// (0x000768a5) main_cset6_listscroll_pane_ParamLimits

0x997b,	// (0x000768a5) main_cset6_listscroll_pane

0x999b,	// (0x000768c5) main_cset6_slider_pane_ParamLimits

0x999b,	// (0x000768c5) main_cset6_slider_pane

0x99b1,	// (0x000768db) main_cset6_text2_pane_ParamLimits

0x99b1,	// (0x000768db) main_cset6_text2_pane

0xda64,	// (0x0007a98e) main_cset6_text_pane

0xda6c,	// (0x0007a996) main_cset_list_pane_copy1_ParamLimits

0xda6c,	// (0x0007a996) main_cset_list_pane_copy1

0xda7c,	// (0x0007a9a6) scroll_pane_cp028_copy1

0x99bf,	// (0x000768e9) cset_list_set_pane_copy1

0x99d0,	// (0x000768fa) aid_position_infowindow_above_copy1

0x99d8,	// (0x00076902) aid_position_infowindow_below_copy1

0x99e0,	// (0x0007690a) cset_list_set_pane_g1_copy1

0x1fc3,	// (0x0006eeed) cset_list_set_pane_g3_copy1_ParamLimits

0x1fc3,	// (0x0006eeed) cset_list_set_pane_g3_copy1

0x1fd2,	// (0x0006eefc) cset_list_set_pane_t1_copy1_ParamLimits

0x1fd2,	// (0x0006eefc) cset_list_set_pane_t1_copy1

0x0dfa,	// (0x0006dd24) list_highlight_pane_cp021_copy1_ParamLimits

0x0dfa,	// (0x0006dd24) list_highlight_pane_cp021_copy1

0xda85,	// (0x0007a9af) cset6_slider_pane_ParamLimits

0xda85,	// (0x0007a9af) cset6_slider_pane

0xdab1,	// (0x0007a9db) main_cset6_slider_pane_g1_ParamLimits

0xdab1,	// (0x0007a9db) main_cset6_slider_pane_g1

0x99e8,	// (0x00076912) main_cset6_slider_pane_g2_ParamLimits

0x99e8,	// (0x00076912) main_cset6_slider_pane_g2

0xdad9,	// (0x0007aa03) main_cset6_slider_pane_g3_ParamLimits

0xdad9,	// (0x0007aa03) main_cset6_slider_pane_g3

0x9a10,	// (0x0007693a) main_cset6_slider_pane_g4_ParamLimits

0x9a10,	// (0x0007693a) main_cset6_slider_pane_g4

0x9a1c,	// (0x00076946) main_cset6_slider_pane_g5_ParamLimits

0x9a1c,	// (0x00076946) main_cset6_slider_pane_g5

0xd226,	// (0x0007a150) main_cset6_slider_pane_g7_ParamLimits

0xd226,	// (0x0007a150) main_cset6_slider_pane_g7

0xd232,	// (0x0007a15c) main_cset6_slider_pane_g8_ParamLimits

0xd232,	// (0x0007a15c) main_cset6_slider_pane_g8

0x8c5a,	// (0x00075b84) main_cset6_slider_pane_g9_ParamLimits

0x8c5a,	// (0x00075b84) main_cset6_slider_pane_g9

0x8c66,	// (0x00075b90) main_cset6_slider_pane_g10_ParamLimits

0x8c66,	// (0x00075b90) main_cset6_slider_pane_g10

0x8c72,	// (0x00075b9c) main_cset6_slider_pane_g11_ParamLimits

0x8c72,	// (0x00075b9c) main_cset6_slider_pane_g11

0x8c7e,	// (0x00075ba8) main_cset6_slider_pane_g12_ParamLimits

0x8c7e,	// (0x00075ba8) main_cset6_slider_pane_g12

0x8c8a,	// (0x00075bb4) main_cset6_slider_pane_g13_ParamLimits

0x8c8a,	// (0x00075bb4) main_cset6_slider_pane_g13

0x8c96,	// (0x00075bc0) main_cset6_slider_pane_g14_ParamLimits

0x8c96,	// (0x00075bc0) main_cset6_slider_pane_g14

0x9a28,	// (0x00076952) main_cset6_slider_pane_g15_ParamLimits

0x9a28,	// (0x00076952) main_cset6_slider_pane_g15

0x8cba,	// (0x00075be4) main_cset6_slider_pane_g16_ParamLimits

0x8cba,	// (0x00075be4) main_cset6_slider_pane_g16

0x8cc6,	// (0x00075bf0) main_cset6_slider_pane_g17_ParamLimits

0x8cc6,	// (0x00075bf0) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0007cb0f) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0007cb0f) main_cset6_slider_pane_g

0xdae5,	// (0x0007aa0f) main_cset6_slider_pane_t1_ParamLimits

0xdae5,	// (0x0007aa0f) main_cset6_slider_pane_t1

0x9a58,	// (0x00076982) main_cset6_slider_pane_t2_ParamLimits

0x9a58,	// (0x00076982) main_cset6_slider_pane_t2

0x9a83,	// (0x000769ad) main_cset6_slider_pane_t3_ParamLimits

0x9a83,	// (0x000769ad) main_cset6_slider_pane_t3

0x9aae,	// (0x000769d8) main_cset6_slider_pane_t4_ParamLimits

0x9aae,	// (0x000769d8) main_cset6_slider_pane_t4

0x9ad9,	// (0x00076a03) main_cset6_slider_pane_t5_ParamLimits

0x9ad9,	// (0x00076a03) main_cset6_slider_pane_t5

0xdb26,	// (0x0007aa50) main_cset6_slider_pane_t7_ParamLimits

0xdb26,	// (0x0007aa50) main_cset6_slider_pane_t7

0x9b04,	// (0x00076a2e) main_cset6_slider_pane_t8_ParamLimits

0x9b04,	// (0x00076a2e) main_cset6_slider_pane_t8

0x9b28,	// (0x00076a52) main_cset6_slider_pane_t9_ParamLimits

0x9b28,	// (0x00076a52) main_cset6_slider_pane_t9

0x9b4c,	// (0x00076a76) main_cset6_slider_pane_t10_ParamLimits

0x9b4c,	// (0x00076a76) main_cset6_slider_pane_t10

0x9b70,	// (0x00076a9a) main_cset6_slider_pane_t11_ParamLimits

0x9b70,	// (0x00076a9a) main_cset6_slider_pane_t11

0xdb5c,	// (0x0007aa86) main_cset6_slider_pane_t14_ParamLimits

0xdb5c,	// (0x0007aa86) main_cset6_slider_pane_t14

0xdb95,	// (0x0007aabf) main_cset6_slider_pane_t15_ParamLimits

0xdb95,	// (0x0007aabf) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0007cb34) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0007cb34) main_cset6_slider_pane_t

0xd30e,	// (0x0007a238) cset_slider_pane_g1_copy1

0xd317,	// (0x0007a241) cset_slider_pane_g2_copy1

0xd320,	// (0x0007a24a) cset_slider_pane_g3_copy1

0x259e,	// (0x0006f4c8) bg_popup_sub_pane_cp011_copy1

0xd3c1,	// (0x0007a2eb) main_cset_text_pane_g1_copy1

0xd3c9,	// (0x0007a2f3) main_cset_text_pane_t1_copy1

0xd3d7,	// (0x0007a301) main_cset_text_pane_t2_copy1

0xd3e5,	// (0x0007a30f) main_cset_text_pane_t3_copy1

0xd3f3,	// (0x0007a31d) main_cset_text_pane_t4_copy1

0xd401,	// (0x0007a32b) main_cset_text_pane_t5_copy1

0xd40f,	// (0x0007a339) main_cset_text_pane_t6_copy1

0xd41d,	// (0x0007a347) main_cset_text_pane_t7_copy1

0x9b94,	// (0x00076abe) main_cset_text2_pane_t1_copy1

0x259e,	// (0x0006f4c8) main_ncimui_pane

0x5d29,	// (0x00072c53) popup_query_ncimui_window_ParamLimits

0x5d29,	// (0x00072c53) popup_query_ncimui_window

0xed84,	// (0x0007bcae) field_cale_ev2_pane_g4_ParamLimits

0xed84,	// (0x0007bcae) field_cale_ev2_pane_g4

0x7ee0,	// (0x00074e0a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7ee0,	// (0x00074e0a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0007c821) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0007c821) cell_video_dialer_keypad_pane_g

0x7ef8,	// (0x00074e22) cell_video_dialer_keypad_pane_t1

0x259e,	// (0x0006f4c8) bg_popup_window_pane_cp012

0xba2c,	// (0x00078956) heading_pane_cp06

0xdcbd,	// (0x0007abe7) ncim_query_content_pane

0x259e,	// (0x0006f4c8) bg_popup_heading_pane_cp01

0xdcc5,	// (0x0007abef) ncim_heading_pane_t1

0xdcd3,	// (0x0007abfd) ncim_indicator_popup_pane

0xdce5,	// (0x0007ac0f) ncim_query_button_pane

0xdcf9,	// (0x0007ac23) ncim_query_content_pane_t1

0xdd0b,	// (0x0007ac35) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0007cb73) ncim_query_content_pane_t

0xdd45,	// (0x0007ac6f) ncim_query_list_pane

0xdd57,	// (0x0007ac81) ncim_query_popup_pane

0xdcd3,	// (0x0007abfd) ncim_indicator_popup_pane_ParamLimits

0x9c76,	// (0x00076ba0) ncim_query_content_pane_g1_ParamLimits

0x9c76,	// (0x00076ba0) ncim_query_content_pane_g1

0xdcf9,	// (0x0007ac23) ncim_query_content_pane_t1_ParamLimits

0xdd0b,	// (0x0007ac35) ncim_query_content_pane_t2_ParamLimits

0x9c82,	// (0x00076bac) ncim_query_content_pane_t3_ParamLimits

0x9c82,	// (0x00076bac) ncim_query_content_pane_t3

0x9caa,	// (0x00076bd4) ncim_query_content_pane_t4_ParamLimits

0x9caa,	// (0x00076bd4) ncim_query_content_pane_t4

0x9cd2,	// (0x00076bfc) ncim_query_content_pane_t5_ParamLimits

0x9cd2,	// (0x00076bfc) ncim_query_content_pane_t5

0xdd1d,	// (0x0007ac47) ncim_query_content_pane_t6_ParamLimits

0xdd1d,	// (0x0007ac47) ncim_query_content_pane_t6

0xfc49,	// (0x0007cb73) ncim_query_content_pane_t_ParamLimits

0xdd45,	// (0x0007ac6f) ncim_query_list_pane_ParamLimits

0xdd57,	// (0x0007ac81) ncim_query_popup_pane_ParamLimits

0xdd6b,	// (0x0007ac95) wait_bar_pane_cp04

0x259e,	// (0x0006f4c8) input_focus_pane_cp011

0xdd73,	// (0x0007ac9d) ncim_query_popup_pane_t1

0xdd81,	// (0x0007acab) ncim_list_query_list_pane_ParamLimits

0xdd81,	// (0x0007acab) ncim_list_query_list_pane

0x259e,	// (0x0006f4c8) bg_button_pane_cp027

0xdd8e,	// (0x0007acb8) ncim_query_button_pane_g1

0x259e,	// (0x0006f4c8) list_highlight_pane_cp012

0xdd98,	// (0x0007acc2) ncim_list_query_list_pane_g1

0xdda0,	// (0x0007acca) ncim_list_query_list_pane_t1

0x84b9,	// (0x000753e3) cam4_indicators_pane_g3_ParamLimits

0x84b9,	// (0x000753e3) cam4_indicators_pane_g3

0x85c9,	// (0x000754f3) vid4_indicators_pane_g5_ParamLimits

0x85c9,	// (0x000754f3) vid4_indicators_pane_g5

0xf0ad,	// (0x0007bfd7) vid4_progress_pane_g5_ParamLimits

0xf0ad,	// (0x0007bfd7) vid4_progress_pane_g5

0x9bbe,	// (0x00076ae8) main_ncimui_pane_g1

0x9c04,	// (0x00076b2e) ncimui_group_query_pane_ParamLimits

0x9c04,	// (0x00076b2e) ncimui_group_query_pane

0x9c38,	// (0x00076b62) ncimui_list_pane_ParamLimits

0x9c38,	// (0x00076b62) ncimui_list_pane

0x9c52,	// (0x00076b7c) ncimui_text_pane_ParamLimits

0x9c52,	// (0x00076b7c) ncimui_text_pane

0x9cfa,	// (0x00076c24) ncimui_text_pane_t1_ParamLimits

0x9cfa,	// (0x00076c24) ncimui_text_pane_t1

0xddae,	// (0x0007acd8) ncimui_list_single_graphic_pane_ParamLimits

0xddae,	// (0x0007acd8) ncimui_list_single_graphic_pane

0x9d17,	// (0x00076c41) ncimui_query_pane_ParamLimits

0x9d17,	// (0x00076c41) ncimui_query_pane

0x259e,	// (0x0006f4c8) list_highlight_pane_cp013

0xddbe,	// (0x0007ace8) ncim_list_query_list_pane_t1_copy1

0xdd98,	// (0x0007acc2) ncim_list_single_graphic_pane_g1

0xddcc,	// (0x0007acf6) ncim_query_button_pane_cp01

0xddd4,	// (0x0007acfe) ncim_query_entry_pane_ParamLimits

0xddd4,	// (0x0007acfe) ncim_query_entry_pane

0xdde4,	// (0x0007ad0e) ncimui_query_pane_g1

0xddec,	// (0x0007ad16) ncimui_query_pane_t1_ParamLimits

0xddec,	// (0x0007ad16) ncimui_query_pane_t1

0x259e,	// (0x0006f4c8) input_focus_pane_cp012

0xdd73,	// (0x0007ac9d) ncim_query_entry_pane_t1

0xaeec,	// (0x00077e16) main_im_pane_ParamLimits

0x0dfa,	// (0x0006dd24) main_mobtv_pane_ParamLimits

0x0dfa,	// (0x0006dd24) main_mobtv_pane

0x9a40,	// (0x0007696a) main_cset6_slider_pane_g18_ParamLimits

0x9a40,	// (0x0007696a) main_cset6_slider_pane_g18

0x9a4c,	// (0x00076976) main_cset6_slider_pane_g19_ParamLimits

0x9a4c,	// (0x00076976) main_cset6_slider_pane_g19

0xde02,	// (0x0007ad2c) bg_main_mobtv_pane_ParamLimits

0xde02,	// (0x0007ad2c) bg_main_mobtv_pane

0x9d27,	// (0x00076c51) main_mobtv_info_pane

0x9d30,	// (0x00076c5a) main_mobtv_loading_pane_ParamLimits

0x9d30,	// (0x00076c5a) main_mobtv_loading_pane

0xde10,	// (0x0007ad3a) main_mobtv_pg_channel_list_pane

0xde1a,	// (0x0007ad44) main_mobtv_pg_hdr_pane

0x9d3d,	// (0x00076c67) main_mobtv_programe_curr_pane_ParamLimits

0x9d3d,	// (0x00076c67) main_mobtv_programe_curr_pane

0x9d4a,	// (0x00076c74) main_mobtv_programe_next_pane_ParamLimits

0x9d4a,	// (0x00076c74) main_mobtv_programe_next_pane

0xde23,	// (0x0007ad4d) popup_mobtv_noti_window

0x6c23,	// (0x00073b4d) main_tv_pg_hdr_pane_g1

0xde2b,	// (0x0007ad55) main_tv_pg_hdr_pane_g2

0xde33,	// (0x0007ad5d) main_tv_pg_hdr_pane_g3

0xde3b,	// (0x0007ad65) main_tv_pg_hdr_pane_g4

0xde43,	// (0x0007ad6d) main_tv_pg_hdr_pane_g5

0xde4d,	// (0x0007ad77) main_tv_pg_hdr_pane_g6

0xde57,	// (0x0007ad81) main_tv_pg_hdr_pane_g7

0xde61,	// (0x0007ad8b) main_tv_pg_hdr_pane_g8

0xde6b,	// (0x0007ad95) main_tv_pg_hdr_pane_g9

0xde75,	// (0x0007ad9f) main_tv_pg_hdr_pane_g10

0xde7f,	// (0x0007ada9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0007cb80) main_tv_pg_hdr_pane_g

0xde89,	// (0x0007adb3) main_tv_pg_hdr_pane_t1

0xde97,	// (0x0007adc1) main_tv_pg_hdr_pane_t2

0xdea5,	// (0x0007adcf) main_tv_pg_hdr_pane_t3

0xdeb5,	// (0x0007addf) main_tv_pg_hdr_pane_t4

0xdec5,	// (0x0007adef) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0007cb97) main_tv_pg_hdr_pane_t

0xded5,	// (0x0007adff) single_mobtv_pg_channel_pane_ParamLimits

0xded5,	// (0x0007adff) single_mobtv_pg_channel_pane

0xdee7,	// (0x0007ae11) single_mobtv_pg_channel_table_pane

0xdef0,	// (0x0007ae1a) single_mobtv_pg_channel_thumb_pane

0xdef9,	// (0x0007ae23) single_tv_pg_channel_pane_g1

0xdf02,	// (0x0007ae2c) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0007cba2) single_tv_pg_channel_pane_g

0xc8b3,	// (0x000797dd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc8b3,	// (0x000797dd) bg_single_mobtv_pg_channel_thumb_pane

0xdf0b,	// (0x0007ae35) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf0b,	// (0x0007ae35) single_mobtv_pg_channel_thumb_pane_g1

0xdf19,	// (0x0007ae43) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf19,	// (0x0007ae43) single_mobtv_pg_channel_thumb_pane_g2

0xdf25,	// (0x0007ae4f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf25,	// (0x0007ae4f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0007cba7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0007cba7) single_mobtv_pg_channel_thumb_pane_g

0xdf31,	// (0x0007ae5b) single_mobtv_pg_channel_thumb_pane_t1

0xdf3f,	// (0x0007ae69) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0007cbae) single_mobtv_pg_channel_thumb_pane_t

0x6c23,	// (0x00073b4d) bg_single_mobtv_pg_channel_table_pane_g1

0x6c23,	// (0x00073b4d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0007c66d) bg_single_mobtv_pg_channel_table_pane_g

0xdf4d,	// (0x0007ae77) single_mobtv_pg_channel_table_pane_t1

0xdf5b,	// (0x0007ae85) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0007cbb3) single_mobtv_pg_channel_table_pane_t

0x9d5f,	// (0x00076c89) main_mobtv_info_pane_g1_ParamLimits

0x9d5f,	// (0x00076c89) main_mobtv_info_pane_g1

0x9d7d,	// (0x00076ca7) main_mobtv_info_pane_t1_ParamLimits

0x9d7d,	// (0x00076ca7) main_mobtv_info_pane_t1

0x9df5,	// (0x00076d1f) main_mobtv_info_pane_t2_ParamLimits

0x9df5,	// (0x00076d1f) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0007cbbd) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0007cbbd) main_mobtv_info_pane_t

0x9e84,	// (0x00076dae) wait_bar_pane_cp05

0x9e96,	// (0x00076dc0) main_mobtv_loading_pane_g1_ParamLimits

0x9e96,	// (0x00076dc0) main_mobtv_loading_pane_g1

0x9ea9,	// (0x00076dd3) main_mobtv_loading_pane_g2_ParamLimits

0x9ea9,	// (0x00076dd3) main_mobtv_loading_pane_g2

0x9eb5,	// (0x00076ddf) main_mobtv_loading_pane_g3_ParamLimits

0x9eb5,	// (0x00076ddf) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0007cbc4) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0007cbc4) main_mobtv_loading_pane_g

0xdf69,	// (0x0007ae93) main_mobtv_loading_pane_t1_ParamLimits

0xdf69,	// (0x0007ae93) main_mobtv_loading_pane_t1

0xdf81,	// (0x0007aeab) main_mobtv_loading_pane_t2_ParamLimits

0xdf81,	// (0x0007aeab) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0007cbcb) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0007cbcb) main_mobtv_loading_pane_t

0x9ec8,	// (0x00076df2) wait_bar_pane_cp06_ParamLimits

0x9ec8,	// (0x00076df2) wait_bar_pane_cp06

0xdfa5,	// (0x0007aecf) main_mobtv_programe_curr_pane_t1

0xdfb3,	// (0x0007aedd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0007cbd0) main_mobtv_programe_curr_pane_t

0xdfc1,	// (0x0007aeeb) main_mobtv_programe_next_pane_t1

0xdfcf,	// (0x0007aef9) main_mobtv_programe_next_pane_t2

0xdfdd,	// (0x0007af07) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0007cbd5) main_mobtv_programe_next_pane_t

0x259e,	// (0x0006f4c8) bg_popup_mobtv_noti_window_pane

0xdfeb,	// (0x0007af15) popup_mobtv_noti_window_g1

0xdff3,	// (0x0007af1d) popup_mobtv_noti_window_t1

0xe001,	// (0x0007af2b) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0007cbdc) popup_mobtv_noti_window_t

0x6c23,	// (0x00073b4d) bg_popup_mobtv_noti_window_pane_g1

0x259e,	// (0x0006f4c8) sc_clock_pane

0x259e,	// (0x0006f4c8) main_fs_bigclock_pane

0x968b,	// (0x000765b5) blid2_tripm_pane_t4_ParamLimits

0x968b,	// (0x000765b5) blid2_tripm_pane_t4

0x9ed7,	// (0x00076e01) sc_clock_pane_g1_ParamLimits

0x9ed7,	// (0x00076e01) sc_clock_pane_g1

0x9ee9,	// (0x00076e13) sc_clock_pane_t1_ParamLimits

0x9ee9,	// (0x00076e13) sc_clock_pane_t1

0x9f0b,	// (0x00076e35) sc_clock_pane_t2_ParamLimits

0x9f0b,	// (0x00076e35) sc_clock_pane_t2

0x9f23,	// (0x00076e4d) sc_clock_pane_t3_ParamLimits

0x9f23,	// (0x00076e4d) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0007cbe1) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0007cbe1) sc_clock_pane_t

0xa78e,	// (0x000776b8) main_fs_bigclock_indicator_pane_ParamLimits

0xa78e,	// (0x000776b8) main_fs_bigclock_indicator_pane

0xc883,	// (0x000797ad) main_fs_bigclock_pane_g1_ParamLimits

0xc883,	// (0x000797ad) main_fs_bigclock_pane_g1

0xa79a,	// (0x000776c4) main_fs_bigclock_pane_t1_ParamLimits

0xa79a,	// (0x000776c4) main_fs_bigclock_pane_t1

0xa7ac,	// (0x000776d6) main_fs_bigclock_pane_t2_ParamLimits

0xa7ac,	// (0x000776d6) main_fs_bigclock_pane_t2

0xa7c0,	// (0x000776ea) main_fs_bigclock_pane_t3_ParamLimits

0xa7c0,	// (0x000776ea) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0007cde0) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0007cde0) main_fs_bigclock_pane_t

0xebf9,	// (0x0007bb23) main_fs_bigclock_indicator_pane_g1

0xdced,	// (0x0007ac17) ncim_query_content_pane_g2_ParamLimits

0xdced,	// (0x0007ac17) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0007cb6e) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0007cb6e) ncim_query_content_pane_g

0x9f3a,	// (0x00076e64) sc_clock_pane_t4_ParamLimits

0x9f3a,	// (0x00076e64) sc_clock_pane_t4

0x0dfa,	// (0x0006dd24) main_radioblah_pane

0xd000,	// (0x00079f2a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd000,	// (0x00079f2a) cell_call4_button_pane_t1_copy1

0x9bc6,	// (0x00076af0) main_ncimui_pane_t1_ParamLimits

0x9bc6,	// (0x00076af0) main_ncimui_pane_t1

0x9bd8,	// (0x00076b02) main_ncimui_pane_t2_ParamLimits

0x9bd8,	// (0x00076b02) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0007cb67) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0007cb67) main_ncimui_pane_t

0xe12f,	// (0x0007b059) main_radioblah_anim_pane_ParamLimits

0xe12f,	// (0x0007b059) main_radioblah_anim_pane

0xe140,	// (0x0007b06a) main_radioblah_info_pane_ParamLimits

0xe140,	// (0x0007b06a) main_radioblah_info_pane

0xe154,	// (0x0007b07e) main_radioblah_pane_t1_ParamLimits

0xe154,	// (0x0007b07e) main_radioblah_pane_t1

0xe170,	// (0x0007b09a) main_radioblah_pane_t2_ParamLimits

0xe170,	// (0x0007b09a) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0007cc02) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0007cc02) main_radioblah_pane_t

0x9fe3,	// (0x00076f0d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9fe3,	// (0x00076f0d) main_radioblah_rocker_ctrl_pane

0xe1b8,	// (0x0007b0e2) main_radioblah_info_pane_t1_ParamLimits

0xe1b8,	// (0x0007b0e2) main_radioblah_info_pane_t1

0xa03b,	// (0x00076f65) main_radioblah_info_pane_t2_ParamLimits

0xa03b,	// (0x00076f65) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0007cc0b) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0007cc0b) main_radioblah_info_pane_t

0x6c23,	// (0x00073b4d) main_radioblah_rocker_ctrl_pane_g1

0xa0eb,	// (0x00077015) main_radioblah_rocker_ctrl_pane_g2

0xa0f3,	// (0x0007701d) main_radioblah_rocker_ctrl_pane_g3

0xa0fb,	// (0x00077025) main_radioblah_rocker_ctrl_pane_g4

0xa103,	// (0x0007702d) main_radioblah_rocker_ctrl_pane_g5

0xa10b,	// (0x00077035) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0007cc14) main_radioblah_rocker_ctrl_pane_g

0x9b94,	// (0x00076abe) main_cset_text2_pane_t1_copy1_ParamLimits

0xeff1,	// (0x0007bf1b) cam4_image_uncrop_qvga_pane

0xf001,	// (0x0007bf2b) vid4_image_uncrop_qcif_pane

0xf115,	// (0x0007c03f) cam6_image_uncrop_qvga_pane_ParamLimits

0xf115,	// (0x0007c03f) cam6_image_uncrop_qvga_pane

0xd947,	// (0x0007a871) vid6_image_uncrop_qcif_pane_ParamLimits

0xd947,	// (0x0007a871) vid6_image_uncrop_qcif_pane

0x259e,	// (0x0006f4c8) bg_popup_preview_window_pane_cp03

0xdc9f,	// (0x0007abc9) list_cset_text2_pane

0xdca7,	// (0x0007abd1) main_cset6_text2_pane_g1

0xdcaf,	// (0x0007abd9) main_cset6_text2_pane_t1

0xa113,	// (0x0007703d) list_cset_text2_pane_t1_ParamLimits

0xa113,	// (0x0007703d) list_cset_text2_pane_t1

0x0dfa,	// (0x0006dd24) main_radioblah_pane_ParamLimits

0x9e70,	// (0x00076d9a) main_mobtv_info_pane_t3_ParamLimits

0x9e70,	// (0x00076d9a) main_mobtv_info_pane_t3

0x9fd1,	// (0x00076efb) main_radioblah_pane_g1

0xa00b,	// (0x00076f35) main_radioblah_info_pane_g1

0xa090,	// (0x00076fba) main_radioblah_info_pane_t3_ParamLimits

0xa090,	// (0x00076fba) main_radioblah_info_pane_t3

0x45cb,	// (0x000714f5) highlight_cell_cale_month_pane_ParamLimits

0x45cb,	// (0x000714f5) highlight_cell_cale_month_pane

0x259e,	// (0x0006f4c8) main_phob_fisheye_pane

0xc9c1,	// (0x000798eb) scroll_pane_cp0031_ParamLimits

0xc9c1,	// (0x000798eb) scroll_pane_cp0031

0xda55,	// (0x0007a97f) wait_bar_pane_cp08_ParamLimits

0x99bf,	// (0x000768e9) cset_list_set_pane_copy1_ParamLimits

0xe1f2,	// (0x0007b11c) highlight_cell_cale_month_pane_g1

0xa12c,	// (0x00077056) highlight_cell_cale_month_pane_t1

0xd685,	// (0x0007a5af) list_gen_pane_cp01

0xd211,	// (0x0007a13b) scroll_pane_01

0x1fe7,	// (0x0006ef11) list_single_double_fisheye_pane

0x1ff0,	// (0x0006ef1a) list_double_fisheye_pane_g1_ParamLimits

0x1ff0,	// (0x0006ef1a) list_double_fisheye_pane_g1

0x1ffc,	// (0x0006ef26) list_double_fisheye_pane_g2_ParamLimits

0x1ffc,	// (0x0006ef26) list_double_fisheye_pane_g2

0x2010,	// (0x0006ef3a) list_double_fisheye_pane_g3_ParamLimits

0x2010,	// (0x0006ef3a) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0007cc21) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0007cc21) list_double_fisheye_pane_g

0x2039,	// (0x0006ef63) list_double_fisheye_pane_t1_ParamLimits

0x2039,	// (0x0006ef63) list_double_fisheye_pane_t1

0x2054,	// (0x0006ef7e) list_double_fisheye_pane_t2_ParamLimits

0x2054,	// (0x0006ef7e) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0007cc2c) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0007cc2c) list_double_fisheye_pane_t

0x259e,	// (0x0006f4c8) main_call5_pane

0x9f65,	// (0x00076e8f) sc_swipe_pane_ParamLimits

0x9f65,	// (0x00076e8f) sc_swipe_pane

0xa14d,	// (0x00077077) call5_image_pane_ParamLimits

0xa14d,	// (0x00077077) call5_image_pane

0xa16a,	// (0x00077094) call5_swipe_1_pane_ParamLimits

0xa16a,	// (0x00077094) call5_swipe_1_pane

0xa17d,	// (0x000770a7) call5_swipe_2_pane_ParamLimits

0xa17d,	// (0x000770a7) call5_swipe_2_pane

0xa1a8,	// (0x000770d2) popup_call5_audio_first_window_ParamLimits

0xa1a8,	// (0x000770d2) popup_call5_audio_first_window

0xc8b3,	// (0x000797dd) call5_swipe_1_pane_g1_ParamLimits

0xc8b3,	// (0x000797dd) call5_swipe_1_pane_g1

0xe1fa,	// (0x0007b124) call5_swipe_1_pane_g2_ParamLimits

0xe1fa,	// (0x0007b124) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0007cc31) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0007cc31) call5_swipe_1_pane_g

0xe206,	// (0x0007b130) call5_swipe_1_pane_t1_ParamLimits

0xe206,	// (0x0007b130) call5_swipe_1_pane_t1

0xc8b3,	// (0x000797dd) call5_swipe_2_pane_g1_ParamLimits

0xc8b3,	// (0x000797dd) call5_swipe_2_pane_g1

0xe21b,	// (0x0007b145) call5_swipe_2_pane_g2_ParamLimits

0xe21b,	// (0x0007b145) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0007cc36) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0007cc36) call5_swipe_2_pane_g

0xe227,	// (0x0007b151) call5_swipe_2_pane_t1_ParamLimits

0xe227,	// (0x0007b151) call5_swipe_2_pane_t1

0xe23c,	// (0x0007b166) sc_swipe_pane_g1_ParamLimits

0xe23c,	// (0x0007b166) sc_swipe_pane_g1

0xe249,	// (0x0007b173) sc_swipe_pane_g2_ParamLimits

0xe249,	// (0x0007b173) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0007cc3b) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0007cc3b) sc_swipe_pane_g

0xe255,	// (0x0007b17f) sc_swipe_pane_t1_ParamLimits

0xe255,	// (0x0007b17f) sc_swipe_pane_t1

0x259e,	// (0x0006f4c8) main_cmail_launcher_pane

0xa1b9,	// (0x000770e3) aid_size_cell_cmail_l_ParamLimits

0xa1b9,	// (0x000770e3) aid_size_cell_cmail_l

0xa1d3,	// (0x000770fd) grid_cmail_l_pane_ParamLimits

0xa1d3,	// (0x000770fd) grid_cmail_l_pane

0xa1ee,	// (0x00077118) cell_cmail_l_pane_ParamLimits

0xa1ee,	// (0x00077118) cell_cmail_l_pane

0xa214,	// (0x0007713e) cell_cmail_l_pane_g1_ParamLimits

0xa214,	// (0x0007713e) cell_cmail_l_pane_g1

0xa220,	// (0x0007714a) cell_cmail_l_pane_t1_ParamLimits

0xa220,	// (0x0007714a) cell_cmail_l_pane_t1

0xe26a,	// (0x0007b194) cell_cmail_l_pane_t2_ParamLimits

0xe26a,	// (0x0007b194) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0007cc40) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0007cc40) cell_cmail_l_pane_t

0x0dfa,	// (0x0006dd24) grid_highlight_pane_cp018_ParamLimits

0x0dfa,	// (0x0006dd24) grid_highlight_pane_cp018

0x26ba,	// (0x0006f5e4) main2_pane_ParamLimits

0x26ba,	// (0x0006f5e4) main2_pane

0xafa9,	// (0x00077ed3) popup_sp_fs_action_menu_bg_pane_g1

0xafb1,	// (0x00077edb) popup_sp_fs_action_menu_bg_pane_g2

0xafb9,	// (0x00077ee3) popup_sp_fs_action_menu_bg_pane_g3

0xafc1,	// (0x00077eeb) popup_sp_fs_action_menu_bg_pane_g4

0xafc9,	// (0x00077ef3) popup_sp_fs_action_menu_bg_pane_g5

0xafd1,	// (0x00077efb) popup_sp_fs_action_menu_bg_pane_g6

0xafd9,	// (0x00077f03) popup_sp_fs_action_menu_bg_pane_g7

0xafe1,	// (0x00077f0b) popup_sp_fs_action_menu_bg_pane_g8

0xafe9,	// (0x00077f13) popup_sp_fs_action_menu_bg_pane_g9

0xaff1,	// (0x00077f1b) popup_sp_fs_action_menu_bg_pane_g10

0xaff1,	// (0x00077f1b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0007c119) popup_sp_fs_action_menu_bg_pane_g

0xb1c1,	// (0x000780eb) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x2_t3_g3_g1

0xb1cd,	// (0x000780f7) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb1cd,	// (0x000780f7) list_medium_line_x2_t3_g3_g2

0xb1d9,	// (0x00078103) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb1d9,	// (0x00078103) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0007c1c9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0007c1c9) list_medium_line_x2_t3_g3_g

0xb1e5,	// (0x0007810f) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb1e5,	// (0x0007810f) list_medium_line_x2_t3_g3_t1

0x1c5a,	// (0x0006eb84) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c5a,	// (0x0006eb84) list_medium_line_x2_t3_g3_t2

0xb1fa,	// (0x00078124) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb1fa,	// (0x00078124) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0007c1d0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0007c1d0) list_medium_line_x2_t3_g3_t

0xb1c1,	// (0x000780eb) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x2_t3_g2_g1

0xb1d9,	// (0x00078103) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb1d9,	// (0x00078103) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0007c1d7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0007c1d7) list_medium_line_x2_t3_g2_g

0xb20f,	// (0x00078139) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb20f,	// (0x00078139) list_medium_line_x2_t3_g2_t1

0xb225,	// (0x0007814f) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb225,	// (0x0007814f) list_medium_line_x2_t3_g2_t2

0xb237,	// (0x00078161) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb237,	// (0x00078161) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0007c1dc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0007c1dc) list_medium_line_x2_t3_g2_t

0xb1c1,	// (0x000780eb) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x2_t4_g4_g1

0xb254,	// (0x0007817e) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb254,	// (0x0007817e) list_medium_line_x2_t4_g4_g2

0xb1cd,	// (0x000780f7) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb1cd,	// (0x000780f7) list_medium_line_x2_t4_g4_g3

0xb260,	// (0x0007818a) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb260,	// (0x0007818a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0007c1e3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0007c1e3) list_medium_line_x2_t4_g4_g

0x1c6e,	// (0x0006eb98) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1c6e,	// (0x0006eb98) list_medium_line_x2_t4_g4_t1

0x1c88,	// (0x0006ebb2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1c88,	// (0x0006ebb2) list_medium_line_x2_t4_g4_t2

0x1c9e,	// (0x0006ebc8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1c9e,	// (0x0006ebc8) list_medium_line_x2_t4_g4_t3

0xb26c,	// (0x00078196) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb26c,	// (0x00078196) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0007c1ec) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0007c1ec) list_medium_line_x2_t4_g4_t

0xb1c1,	// (0x000780eb) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x2_t2_g4_g1

0xb254,	// (0x0007817e) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb254,	// (0x0007817e) list_medium_line_x2_t2_g4_g2

0xb1cd,	// (0x000780f7) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb1cd,	// (0x000780f7) list_medium_line_x2_t2_g4_g3

0xb1d9,	// (0x00078103) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb1d9,	// (0x00078103) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0007c253) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0007c253) list_medium_line_x2_t2_g4_g

0xb55c,	// (0x00078486) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb55c,	// (0x00078486) list_medium_line_x2_t2_g4_t1

0xb1fa,	// (0x00078124) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb1fa,	// (0x00078124) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0007c25c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0007c25c) list_medium_line_x2_t2_g4_t

0xb1c1,	// (0x000780eb) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x2_t2_g3_g1

0xb1cd,	// (0x000780f7) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb1cd,	// (0x000780f7) list_medium_line_x2_t2_g3_g2

0xb1d9,	// (0x00078103) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb1d9,	// (0x00078103) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0007c1c9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0007c1c9) list_medium_line_x2_t2_g3_g

0xb571,	// (0x0007849b) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb571,	// (0x0007849b) list_medium_line_x2_t2_g3_t1

0xb1fa,	// (0x00078124) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb1fa,	// (0x00078124) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0007c261) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0007c261) list_medium_line_x2_t2_g3_t

0x46fa,	// (0x00071624) main_sp_fs_list_pane_ParamLimits

0x46fa,	// (0x00071624) main_sp_fs_list_pane

0x4706,	// (0x00071630) sp_fs_scroll_pane_ParamLimits

0x4706,	// (0x00071630) sp_fs_scroll_pane

0x1cb3,	// (0x0006ebdd) list_medium_line_x2_t3_t1

0x1cc3,	// (0x0006ebed) list_medium_line_x2_t3_t2

0xb7cd,	// (0x000786f7) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0007c2ac) list_medium_line_x2_t3_t

0x1cd1,	// (0x0006ebfb) list_medium_line_x3_t4_t1

0x1ce1,	// (0x0006ec0b) list_medium_line_x3_t4_t2

0xb7db,	// (0x00078705) list_medium_line_x3_t4_t3

0xb7cd,	// (0x000786f7) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0007c2b3) list_medium_line_x3_t4_t

0x1cef,	// (0x0006ec19) list_medium_line_x4_t5_t1

0x1cff,	// (0x0006ec29) list_medium_line_x4_t5_t2

0xb7db,	// (0x00078705) list_medium_line_x4_t5_t3

0xb7e9,	// (0x00078713) list_medium_line_x4_t5_t4

0xb7cd,	// (0x000786f7) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0007c2bc) list_medium_line_x4_t5_t

0xb1c1,	// (0x000780eb) list_medium_line_t4_g4_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_t4_g4_g1

0xb260,	// (0x0007818a) list_medium_line_t4_g4_g2_ParamLimits

0xb260,	// (0x0007818a) list_medium_line_t4_g4_g2

0xb7f7,	// (0x00078721) list_medium_line_t4_g4_g3_ParamLimits

0xb7f7,	// (0x00078721) list_medium_line_t4_g4_g3

0xb1d9,	// (0x00078103) list_medium_line_t4_g4_g4_ParamLimits

0xb1d9,	// (0x00078103) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0007c2c7) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0007c2c7) list_medium_line_t4_g4_g

0xb803,	// (0x0007872d) list_medium_line_t4_g4_t1_ParamLimits

0xb803,	// (0x0007872d) list_medium_line_t4_g4_t1

0xb818,	// (0x00078742) list_medium_line_t4_g4_t2_ParamLimits

0xb818,	// (0x00078742) list_medium_line_t4_g4_t2

0xb82d,	// (0x00078757) list_medium_line_t4_g4_t3_ParamLimits

0xb82d,	// (0x00078757) list_medium_line_t4_g4_t3

0xb1fa,	// (0x00078124) list_medium_line_t4_g4_t4_ParamLimits

0xb1fa,	// (0x00078124) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0007c2d0) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0007c2d0) list_medium_line_t4_g4_t

0x47d5,	// (0x000716ff) chi_dic_find_pane_g1

0x5abc,	// (0x000729e6) main_tport_pane

0xd352,	// (0x0007a27c) list_medium_line_plain_t1

0xd368,	// (0x0007a292) list_medium_line_t2_g2_g1_ParamLimits

0xd368,	// (0x0007a292) list_medium_line_t2_g2_g1

0xd374,	// (0x0007a29e) list_medium_line_t2_g2_g2_ParamLimits

0xd374,	// (0x0007a29e) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0007c983) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0007c983) list_medium_line_t2_g2_g

0x1eb4,	// (0x0006edde) list_medium_line_t2_g2_t1_ParamLimits

0x1eb4,	// (0x0006edde) list_medium_line_t2_g2_t1

0x1ece,	// (0x0006edf8) list_medium_line_t2_g2_t2_ParamLimits

0x1ece,	// (0x0006edf8) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0007c988) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0007c988) list_medium_line_t2_g2_t

0xd68e,	// (0x0007a5b8) aid_sp_fs_list_icon_a_sm

0xf10d,	// (0x0007c037) aid_sp_fs_list_icon_d

0xd696,	// (0x0007a5c0) aid_sp_fs_text_primary

0xd69f,	// (0x0007a5c9) aid_sp_fs_text_secondary

0xd6a8,	// (0x0007a5d2) list_medium_line

0xd6a8,	// (0x0007a5d2) list_medium_line_g2

0xd6a8,	// (0x0007a5d2) list_medium_line_g3

0xd6a8,	// (0x0007a5d2) list_medium_line_plain

0xd6a8,	// (0x0007a5d2) list_medium_line_plain_t2

0xd6a8,	// (0x0007a5d2) list_medium_line_plain_t3

0xd6a8,	// (0x0007a5d2) list_medium_line_right_icon

0xd6a8,	// (0x0007a5d2) list_medium_line_right_iconx2

0xd6a8,	// (0x0007a5d2) list_medium_line_t2

0xd6a8,	// (0x0007a5d2) list_medium_line_t2_g2

0xd6a8,	// (0x0007a5d2) list_medium_line_t2_g3

0xd6a8,	// (0x0007a5d2) list_medium_line_t2_right_icon

0xd6a8,	// (0x0007a5d2) list_medium_line_t2_right_iconx2

0xd6a8,	// (0x0007a5d2) list_medium_line_t3

0xd6a8,	// (0x0007a5d2) list_medium_line_t3_g2

0xd6a8,	// (0x0007a5d2) list_medium_line_t3_g3

0xd6a8,	// (0x0007a5d2) list_medium_line_t3_right_iconx2

0xd6b1,	// (0x0007a5db) list_medium_line_t4_g4

0xd6ba,	// (0x0007a5e4) list_medium_line_x2

0xd6ba,	// (0x0007a5e4) list_medium_line_x2_t2_g2

0xd6ba,	// (0x0007a5e4) list_medium_line_x2_t2_g3

0xd6ba,	// (0x0007a5e4) list_medium_line_x2_t2_g4

0xd6ba,	// (0x0007a5e4) list_medium_line_x2_t3

0xd6ba,	// (0x0007a5e4) list_medium_line_x2_t3_g2

0xd6ba,	// (0x0007a5e4) list_medium_line_x2_t3_g3

0xd6ba,	// (0x0007a5e4) list_medium_line_x2_t3_g4

0xd6ba,	// (0x0007a5e4) list_medium_line_x2_t4_g2

0xd6ba,	// (0x0007a5e4) list_medium_line_x2_t4_g4

0xd6c3,	// (0x0007a5ed) list_medium_line_x3

0xd6c3,	// (0x0007a5ed) list_medium_line_x3_t4

0xd6c3,	// (0x0007a5ed) list_medium_line_x3_t4_g4

0xd6b1,	// (0x0007a5db) list_medium_line_x4_t4

0xd6b1,	// (0x0007a5db) list_medium_line_x4_t4_g7

0xd6b1,	// (0x0007a5db) list_medium_line_x4_t5

0xd6cc,	// (0x0007a5f6) list_single_fs_dyc_pane_ParamLimits

0xd6cc,	// (0x0007a5f6) list_single_fs_dyc_pane

0xb1c1,	// (0x000780eb) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x4_t4_g7_g1

0xdbce,	// (0x0007aaf8) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdbce,	// (0x0007aaf8) list_medium_line_x4_t4_g7_g2

0xdbda,	// (0x0007ab04) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdbda,	// (0x0007ab04) list_medium_line_x4_t4_g7_g3

0xdbe9,	// (0x0007ab13) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdbe9,	// (0x0007ab13) list_medium_line_x4_t4_g7_g4

0xdbf5,	// (0x0007ab1f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdbf5,	// (0x0007ab1f) list_medium_line_x4_t4_g7_g5

0xdc04,	// (0x0007ab2e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc04,	// (0x0007ab2e) list_medium_line_x4_t4_g7_g6

0xdc13,	// (0x0007ab3d) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc13,	// (0x0007ab3d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0007cb4d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0007cb4d) list_medium_line_x4_t4_g7_g

0xdc1f,	// (0x0007ab49) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc1f,	// (0x0007ab49) list_medium_line_x4_t4_g7_t1

0xdc34,	// (0x0007ab5e) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc34,	// (0x0007ab5e) list_medium_line_x4_t4_g7_t2

0xdc49,	// (0x0007ab73) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc49,	// (0x0007ab73) list_medium_line_x4_t4_g7_t3

0xdc5e,	// (0x0007ab88) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc5e,	// (0x0007ab88) list_medium_line_x4_t4_g7_t4

0xdc70,	// (0x0007ab9a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc70,	// (0x0007ab9a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0007cb5c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0007cb5c) list_medium_line_x4_t4_g7_t

0xdc82,	// (0x0007abac) list_single_dyc_row_pane_ParamLimits

0xdc82,	// (0x0007abac) list_single_dyc_row_pane

0xa13a,	// (0x00077064) call5_gesture_pane_ParamLimits

0xa13a,	// (0x00077064) call5_gesture_pane

0xa190,	// (0x000770ba) call5_windows_pane_ParamLimits

0xa190,	// (0x000770ba) call5_windows_pane

0xa236,	// (0x00077160) call5_swipe_1_pane_cp_ParamLimits

0xa236,	// (0x00077160) call5_swipe_1_pane_cp

0xa242,	// (0x0007716c) call5_swipe_2_pane_cp_ParamLimits

0xa242,	// (0x0007716c) call5_swipe_2_pane_cp

0xbc98,	// (0x00078bc2) call5_image_pane_cp

0xa24e,	// (0x00077178) popup_call5_audio_first_window_cp_ParamLimits

0xa24e,	// (0x00077178) popup_call5_audio_first_window_cp

0xe23c,	// (0x0007b166) call5_swipe_1_pane_g1_cp_ParamLimits

0xe23c,	// (0x0007b166) call5_swipe_1_pane_g1_cp

0xe27c,	// (0x0007b1a6) call5_swipe_1_pane_g2_cp

0xe255,	// (0x0007b17f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe255,	// (0x0007b17f) call5_swipe_1_pane_t1_cp

0xe23c,	// (0x0007b166) call5_swipe_2_pane_g1_cp_ParamLimits

0xe23c,	// (0x0007b166) call5_swipe_2_pane_g1_cp

0xe284,	// (0x0007b1ae) call5_swipe_2_pane_g2_cp

0xe28c,	// (0x0007b1b6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe28c,	// (0x0007b1b6) call5_swipe_2_pane_t1_cp

0x0dfa,	// (0x0006dd24) main_sp_fs_email_pane

0xe2a1,	// (0x0007b1cb) main_sp_fs_listscroll_pane_te

0xe2aa,	// (0x0007b1d4) popup_sp_fs_action_menu_pane_ParamLimits

0xe2aa,	// (0x0007b1d4) popup_sp_fs_action_menu_pane

0x6c23,	// (0x00073b4d) bg_sp_fs_ctrlbar_pane_g1

0xe2ee,	// (0x0007b218) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2f7,	// (0x0007b221) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe300,	// (0x0007b22a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x6c23,	// (0x00073b4d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0007cc45) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x693c,	// (0x00073866) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x693c,	// (0x00073866) bg_sp_fs_ctrlbar_ddmenu_pane

0xe309,	// (0x0007b233) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe309,	// (0x0007b233) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe315,	// (0x0007b23f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe315,	// (0x0007b23f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0007cc4e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0007cc4e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe321,	// (0x0007b24b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe321,	// (0x0007b24b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe33b,	// (0x0007b265) list_medium_line_t2_right_icon_g1

0x2076,	// (0x0006efa0) list_medium_line_t2_right_icon_t1

0x2086,	// (0x0006efb0) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0007cc53) list_medium_line_t2_right_icon_t

0x5a9a,	// (0x000729c4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5a9a,	// (0x000729c4) bg_sp_fs_ctrlbar_pane

0xa2a4,	// (0x000771ce) main_sp_fs_ctrlbar_button_pane_cp01

0xa2ac,	// (0x000771d6) main_sp_fs_ctrlbar_ddmenu_pane

0xe37b,	// (0x0007b2a5) main_sp_fs_ctrlbar_pane_g1

0xe387,	// (0x0007b2b1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0007cc58) main_sp_fs_ctrlbar_pane_g

0xe393,	// (0x0007b2bd) main_sp_fs_ctrlbar_pane_t1

0x2094,	// (0x0006efbe) main_sp_fs_ctrlbar_pane

0x20b8,	// (0x0006efe2) main_sp_fs_listscroll_pane_te_cp01

0x20d8,	// (0x0006f002) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x20d8,	// (0x0006f002) popup_sp_fs_action_menu_pane_cp01

0x0dfa,	// (0x0006dd24) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0dfa,	// (0x0006dd24) bg_sp_fs_highlight_list_pane_cp01

0xe3a8,	// (0x0007b2d2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3a8,	// (0x0007b2d2) sp_fs_action_menu_list_gene_pane_g1

0xe3b7,	// (0x0007b2e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3b7,	// (0x0007b2e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0007cc5d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0007cc5d) sp_fs_action_menu_list_gene_pane_g

0xe3c4,	// (0x0007b2ee) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3c4,	// (0x0007b2ee) sp_fs_action_menu_list_gene_pane_t1

0xe3dc,	// (0x0007b306) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3dc,	// (0x0007b306) sp_fs_action_menu_list_gene_pane

0xe3fd,	// (0x0007b327) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3fd,	// (0x0007b327) popup_sp_fs_action_menu_bg_pane

0xe40b,	// (0x0007b335) sp_fs_action_menu_list_pane_ParamLimits

0xe40b,	// (0x0007b335) sp_fs_action_menu_list_pane

0xe42d,	// (0x0007b357) sp_fs_scroll_pane_cp01_ParamLimits

0xe42d,	// (0x0007b357) sp_fs_scroll_pane_cp01

0x20f4,	// (0x0006f01e) list_medium_line_plain_t2_t1

0x2104,	// (0x0006f02e) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0007cc62) list_medium_line_plain_t2_t

0x2114,	// (0x0006f03e) list_medium_line_plain_t3_t1

0x2124,	// (0x0006f04e) list_medium_line_plain_t3_t2

0x2132,	// (0x0006f05c) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0007cc67) list_medium_line_plain_t3_t

0xb1c1,	// (0x000780eb) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x2_t2_g2_g1

0xb1d9,	// (0x00078103) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb1d9,	// (0x00078103) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0007c1d7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0007c1d7) list_medium_line_x2_t2_g2_g

0xb803,	// (0x0007872d) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb803,	// (0x0007872d) list_medium_line_x2_t2_g2_t1

0xb1fa,	// (0x00078124) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb1fa,	// (0x00078124) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0007cc6e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0007cc6e) list_medium_line_x2_t2_g2_t

0xb1c1,	// (0x000780eb) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x2_t4_g2_g1

0xe453,	// (0x0007b37d) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe453,	// (0x0007b37d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0007cc73) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0007cc73) list_medium_line_x2_t4_g2_g

0x2140,	// (0x0006f06a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2140,	// (0x0006f06a) list_medium_line_x2_t4_g2_t1

0x215a,	// (0x0006f084) list_medium_line_x2_t4_g2_t2_ParamLimits

0x215a,	// (0x0006f084) list_medium_line_x2_t4_g2_t2

0x216f,	// (0x0006f099) list_medium_line_x2_t4_g2_t3_ParamLimits

0x216f,	// (0x0006f099) list_medium_line_x2_t4_g2_t3

0xb1fa,	// (0x00078124) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb1fa,	// (0x00078124) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0007cc78) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0007cc78) list_medium_line_x2_t4_g2_t

0xe465,	// (0x0007b38f) list_medium_line_t3_right_iconx2_g1

0xe33b,	// (0x0007b265) list_medium_line_t3_right_iconx2_g2

0x2184,	// (0x0006f0ae) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0007cc81) list_medium_line_t3_right_iconx2_g

0x218e,	// (0x0006f0b8) list_medium_line_t3_right_iconx2_t1

0x219e,	// (0x0006f0c8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0007cc88) list_medium_line_t3_right_iconx2_t

0xb1c1,	// (0x000780eb) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x3_t4_g4_g1

0xb1cd,	// (0x000780f7) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb1cd,	// (0x000780f7) list_medium_line_x3_t4_g4_g2

0xb260,	// (0x0007818a) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb260,	// (0x0007818a) list_medium_line_x3_t4_g4_g3

0xe46d,	// (0x0007b397) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe46d,	// (0x0007b397) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0007cc8d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0007cc8d) list_medium_line_x3_t4_g4_g

0x21ac,	// (0x0006f0d6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x21ac,	// (0x0006f0d6) list_medium_line_x3_t4_g4_t1

0x21c3,	// (0x0006f0ed) list_medium_line_x3_t4_g4_t2_ParamLimits

0x21c3,	// (0x0006f0ed) list_medium_line_x3_t4_g4_t2

0xb818,	// (0x00078742) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb818,	// (0x00078742) list_medium_line_x3_t4_g4_t3

0xe479,	// (0x0007b3a3) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe479,	// (0x0007b3a3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0007cc96) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0007cc96) list_medium_line_x3_t4_g4_t

0x21dc,	// (0x0006f106) list_single_dyc_row_text_pane_t1_ParamLimits

0x21dc,	// (0x0006f106) list_single_dyc_row_text_pane_t1

0x2225,	// (0x0006f14f) list_single_dyc_row_text_pane_t2_ParamLimits

0x2225,	// (0x0006f14f) list_single_dyc_row_text_pane_t2

0xe496,	// (0x0007b3c0) list_single_dyc_row_text_pane_t3_ParamLimits

0xe496,	// (0x0007b3c0) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0007cc9f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0007cc9f) list_single_dyc_row_text_pane_t

0xe4a8,	// (0x0007b3d2) list_single_dyc_row_pane_g1_ParamLimits

0xe4a8,	// (0x0007b3d2) list_single_dyc_row_pane_g1

0xe4b4,	// (0x0007b3de) list_single_dyc_row_pane_g2_ParamLimits

0xe4b4,	// (0x0007b3de) list_single_dyc_row_pane_g2

0xe4c0,	// (0x0007b3ea) list_single_dyc_row_pane_g3_ParamLimits

0xe4c0,	// (0x0007b3ea) list_single_dyc_row_pane_g3

0xe4cc,	// (0x0007b3f6) list_single_dyc_row_pane_g4_ParamLimits

0xe4cc,	// (0x0007b3f6) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0007cca6) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0007cca6) list_single_dyc_row_pane_g

0xe4d8,	// (0x0007b402) list_single_dyc_row_text_pane_ParamLimits

0xe4d8,	// (0x0007b402) list_single_dyc_row_text_pane

0x259e,	// (0x0006f4c8) bg_sp_fs_scroll_pane

0xe4f7,	// (0x0007b421) thumb_sp_fs_scroll_pane

0xd368,	// (0x0007a292) list_medium_line_g1_ParamLimits

0xd368,	// (0x0007a292) list_medium_line_g1

0xe500,	// (0x0007b42a) list_medium_line_t1_ParamLimits

0xe500,	// (0x0007b42a) list_medium_line_t1

0xb1c1,	// (0x000780eb) list_medium_line_x2_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x2_g1

0xb1cd,	// (0x000780f7) list_medium_line_x2_g2_ParamLimits

0xb1cd,	// (0x000780f7) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0007ccaf) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0007ccaf) list_medium_line_x2_g

0xe515,	// (0x0007b43f) list_medium_line_x2_t1_ParamLimits

0xe515,	// (0x0007b43f) list_medium_line_x2_t1

0xb1c1,	// (0x000780eb) list_medium_line_x3_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x3_g1

0xb1cd,	// (0x000780f7) list_medium_line_x3_g2_ParamLimits

0xb1cd,	// (0x000780f7) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0007ccaf) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0007ccaf) list_medium_line_x3_g

0xe515,	// (0x0007b43f) list_medium_line_x3_t1_ParamLimits

0xe515,	// (0x0007b43f) list_medium_line_x3_t1

0xe52b,	// (0x0007b455) thumb_sp_fs_scroll_pane_g1

0xe534,	// (0x0007b45e) thumb_sp_fs_scroll_pane_g2

0xe53d,	// (0x0007b467) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0007ccb4) thumb_sp_fs_scroll_pane_g

0xe52b,	// (0x0007b455) bg_sp_fs_scroll_pane_g1

0xe534,	// (0x0007b45e) bg_sp_fs_scroll_pane_g2

0xe53d,	// (0x0007b467) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0007ccb4) bg_sp_fs_scroll_pane_g

0xb1c1,	// (0x000780eb) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb1c1,	// (0x000780eb) list_medium_line_x2_t3_g4_g1

0xb254,	// (0x0007817e) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb254,	// (0x0007817e) list_medium_line_x2_t3_g4_g2

0xb1cd,	// (0x000780f7) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb1cd,	// (0x000780f7) list_medium_line_x2_t3_g4_g3

0xb1d9,	// (0x00078103) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb1d9,	// (0x00078103) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0007c253) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0007c253) list_medium_line_x2_t3_g4_g

0x227f,	// (0x0006f1a9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x227f,	// (0x0006f1a9) list_medium_line_x2_t3_g4_t1

0x2295,	// (0x0006f1bf) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2295,	// (0x0006f1bf) list_medium_line_x2_t3_g4_t2

0xb1fa,	// (0x00078124) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb1fa,	// (0x00078124) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0007ccbb) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0007ccbb) list_medium_line_x2_t3_g4_t

0xd368,	// (0x0007a292) list_medium_line_g2_g1_ParamLimits

0xd368,	// (0x0007a292) list_medium_line_g2_g1

0xd374,	// (0x0007a29e) list_medium_line_g2_g2_ParamLimits

0xd374,	// (0x0007a29e) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0007c983) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0007c983) list_medium_line_g2_g

0xe546,	// (0x0007b470) list_medium_line_g2_t1_ParamLimits

0xe546,	// (0x0007b470) list_medium_line_g2_t1

0xd368,	// (0x0007a292) list_medium_line_t3_g2_g1_ParamLimits

0xd368,	// (0x0007a292) list_medium_line_t3_g2_g1

0xd374,	// (0x0007a29e) list_medium_line_t3_g2_g2_ParamLimits

0xd374,	// (0x0007a29e) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0007c983) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0007c983) list_medium_line_t3_g2_g

0x22af,	// (0x0006f1d9) list_medium_line_t3_g2_t1_ParamLimits

0x22af,	// (0x0006f1d9) list_medium_line_t3_g2_t1

0x22c6,	// (0x0006f1f0) list_medium_line_t3_g2_t2_ParamLimits

0x22c6,	// (0x0006f1f0) list_medium_line_t3_g2_t2

0x22db,	// (0x0006f205) list_medium_line_t3_g2_t3_ParamLimits

0x22db,	// (0x0006f205) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0007ccc2) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0007ccc2) list_medium_line_t3_g2_t

0xe33b,	// (0x0007b265) list_medium_line_right_icon_g1

0xe55b,	// (0x0007b485) list_medium_line_right_icon_t1

0xd368,	// (0x0007a292) list_medium_line_t2_g1_ParamLimits

0xd368,	// (0x0007a292) list_medium_line_t2_g1

0x22f4,	// (0x0006f21e) list_medium_line_t2_t1_ParamLimits

0x22f4,	// (0x0006f21e) list_medium_line_t2_t1

0x230e,	// (0x0006f238) list_medium_line_t2_t2_ParamLimits

0x230e,	// (0x0006f238) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0007ccc9) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0007ccc9) list_medium_line_t2_t

0xd368,	// (0x0007a292) list_medium_line_t3_g1_ParamLimits

0xd368,	// (0x0007a292) list_medium_line_t3_g1

0x2323,	// (0x0006f24d) list_medium_line_t3_t1_ParamLimits

0x2323,	// (0x0006f24d) list_medium_line_t3_t1

0x233d,	// (0x0006f267) list_medium_line_t3_t2_ParamLimits

0x233d,	// (0x0006f267) list_medium_line_t3_t2

0x2352,	// (0x0006f27c) list_medium_line_t3_t3_ParamLimits

0x2352,	// (0x0006f27c) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0007ccce) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0007ccce) list_medium_line_t3_t

0xd368,	// (0x0007a292) list_medium_line_g3_g1_ParamLimits

0xd368,	// (0x0007a292) list_medium_line_g3_g1

0xe569,	// (0x0007b493) list_medium_line_g3_g2_ParamLimits

0xe569,	// (0x0007b493) list_medium_line_g3_g2

0xd374,	// (0x0007a29e) list_medium_line_g3_g3_ParamLimits

0xd374,	// (0x0007a29e) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0007ccd5) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0007ccd5) list_medium_line_g3_g

0xe575,	// (0x0007b49f) list_medium_line_g3_t1_ParamLimits

0xe575,	// (0x0007b49f) list_medium_line_g3_t1

0xd368,	// (0x0007a292) list_medium_line_t2_g3_g1_ParamLimits

0xd368,	// (0x0007a292) list_medium_line_t2_g3_g1

0xe569,	// (0x0007b493) list_medium_line_t2_g3_g2_ParamLimits

0xe569,	// (0x0007b493) list_medium_line_t2_g3_g2

0xd374,	// (0x0007a29e) list_medium_line_t2_g3_g3_ParamLimits

0xd374,	// (0x0007a29e) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0007ccd5) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0007ccd5) list_medium_line_t2_g3_g

0x2367,	// (0x0006f291) list_medium_line_t2_g3_t1_ParamLimits

0x2367,	// (0x0006f291) list_medium_line_t2_g3_t1

0x2381,	// (0x0006f2ab) list_medium_line_t2_g3_t2_ParamLimits

0x2381,	// (0x0006f2ab) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0007ccdc) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0007ccdc) list_medium_line_t2_g3_t

0xd368,	// (0x0007a292) list_medium_line_t3_g3_g1_ParamLimits

0xd368,	// (0x0007a292) list_medium_line_t3_g3_g1

0xe569,	// (0x0007b493) list_medium_line_t3_g3_g2_ParamLimits

0xe569,	// (0x0007b493) list_medium_line_t3_g3_g2

0xd374,	// (0x0007a29e) list_medium_line_t3_g3_g3_ParamLimits

0xd374,	// (0x0007a29e) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0007ccd5) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0007ccd5) list_medium_line_t3_g3_g

0x2398,	// (0x0006f2c2) list_medium_line_t3_g3_t1_ParamLimits

0x2398,	// (0x0006f2c2) list_medium_line_t3_g3_t1

0x23ac,	// (0x0006f2d6) list_medium_line_t3_g3_t2_ParamLimits

0x23ac,	// (0x0006f2d6) list_medium_line_t3_g3_t2

0x23be,	// (0x0006f2e8) list_medium_line_t3_g3_t3_ParamLimits

0x23be,	// (0x0006f2e8) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0007cce1) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0007cce1) list_medium_line_t3_g3_t

0xe465,	// (0x0007b38f) list_medium_line_right_iconx2_g1

0xe33b,	// (0x0007b265) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0007cce8) list_medium_line_right_iconx2_g

0xe58a,	// (0x0007b4b4) list_medium_line_right_iconx2_t1

0xe465,	// (0x0007b38f) list_medium_line_t2_right_iconx2_g1

0xe33b,	// (0x0007b265) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0007cce8) list_medium_line_t2_right_iconx2_g

0x23d2,	// (0x0006f2fc) list_medium_line_t2_right_iconx2_t1

0x23e2,	// (0x0006f30c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0007cced) list_medium_line_t2_right_iconx2_t

0xe598,	// (0x0007b4c2) list_medium_line_x4_t4_t1

0x23f0,	// (0x0006f31a) list_medium_line_x4_t4_t2

0x2400,	// (0x0006f32a) list_medium_line_x4_t4_t3

0x2410,	// (0x0006f33a) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0007ccf2) list_medium_line_x4_t4_t

0xa2f9,	// (0x00077223) tport_appsw_pane_ParamLimits

0xa2f9,	// (0x00077223) tport_appsw_pane

0xa30a,	// (0x00077234) tport_contact_pane_ParamLimits

0xa30a,	// (0x00077234) tport_contact_pane

0xa323,	// (0x0007724d) tport_listscroll_pane_ParamLimits

0xa323,	// (0x0007724d) tport_listscroll_pane

0xa33e,	// (0x00077268) cell_tport_appsw_pane_ParamLimits

0xa33e,	// (0x00077268) cell_tport_appsw_pane

0xd09d,	// (0x00079fc7) tport_appsw_pane_g1_ParamLimits

0xd09d,	// (0x00079fc7) tport_appsw_pane_g1

0xe5a6,	// (0x0007b4d0) tport_contact_pane_g1

0xdd73,	// (0x0007ac9d) tport_contact_pane_t1

0xe5af,	// (0x0007b4d9) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0007ccfb) tport_contact_pane_t

0xe5bd,	// (0x0007b4e7) list_tport_pane

0xe5c6,	// (0x0007b4f0) scroll_pane_cp_030

0xa359,	// (0x00077283) cell_tport_appsw_pane_g1

0xe5cf,	// (0x0007b4f9) cell_tport_appsw_pane_t1

0x259e,	// (0x0006f4c8) grid_highlight_pane_cp019

0xa371,	// (0x0007729b) list_tport_double_graphic_pane_ParamLimits

0xa371,	// (0x0007729b) list_tport_double_graphic_pane

0x0dfa,	// (0x0006dd24) list_highlight_pane_cp023_ParamLimits

0x0dfa,	// (0x0006dd24) list_highlight_pane_cp023

0xa37e,	// (0x000772a8) list_tport_double_graphic_pane_g1_ParamLimits

0xa37e,	// (0x000772a8) list_tport_double_graphic_pane_g1

0xa38b,	// (0x000772b5) list_tport_double_graphic_pane_t1_ParamLimits

0xa38b,	// (0x000772b5) list_tport_double_graphic_pane_t1

0xa3a0,	// (0x000772ca) list_tport_double_graphic_pane_t2_ParamLimits

0xa3a0,	// (0x000772ca) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0007cd07) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0007cd07) list_tport_double_graphic_pane_t

0x259e,	// (0x0006f4c8) main_cale_note_pane

0x87ea,	// (0x00075714) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x87ea,	// (0x00075714) cell_vitu2_function_top_wide_pane_cp01

0x9e84,	// (0x00076dae) wait_bar_pane_cp05_ParamLimits

0x259e,	// (0x0006f4c8) listscroll_cmail_pane

0xe5e5,	// (0x0007b50f) list_cmail_pane

0xa3bc,	// (0x000772e6) list_cmail_body_pane

0xe5fd,	// (0x0007b527) list_single_cmail_header_caption_pane

0xa3d0,	// (0x000772fa) list_single_cmail_header_detail_pane_ParamLimits

0xa3d0,	// (0x000772fa) list_single_cmail_header_detail_pane

0xa3fa,	// (0x00077324) list_single_cmail_header_caption_pane_t1

0x2420,	// (0x0006f34a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2420,	// (0x0006f34a) list_single_cmail_header_detail_pane_g1

0xf123,	// (0x0007c04d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf123,	// (0x0007c04d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0007cd0c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0007cd0c) list_single_cmail_header_detail_pane_g

0xe62c,	// (0x0007b556) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe62c,	// (0x0007b556) list_single_cmail_header_detail_pane_t1

0xe666,	// (0x0007b590) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe666,	// (0x0007b590) list_single_cmail_header_editor_pane_bg

0xdf02,	// (0x0007ae2c) list_cmail_body_pane_g1

0xe678,	// (0x0007b5a2) list_cmail_body_pane_t1

0xd0f7,	// (0x0007a021) list_single_cmail_header_editor_pane_bg_g1

0xb47b,	// (0x000783a5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd107,	// (0x0007a031) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd0ff,	// (0x0007a029) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd360,	// (0x0007a28a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd127,	// (0x0007a051) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd117,	// (0x0007a041) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd11f,	// (0x0007a049) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb45b,	// (0x00078385) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa40a,	// (0x00077334) calenote_gesture_pane_ParamLimits

0xa40a,	// (0x00077334) calenote_gesture_pane

0xa42a,	// (0x00077354) calenote_window_pane_ParamLimits

0xa42a,	// (0x00077354) calenote_window_pane

0xe686,	// (0x0007b5b0) popup_note_window_cp01

0xa446,	// (0x00077370) calenote_swipe_1_pane_ParamLimits

0xa446,	// (0x00077370) calenote_swipe_1_pane

0xa242,	// (0x0007716c) calenote_swipe_2_pane_ParamLimits

0xa242,	// (0x0007716c) calenote_swipe_2_pane

0xe23c,	// (0x0007b166) calenote_swipe_1_pane_g1_ParamLimits

0xe23c,	// (0x0007b166) calenote_swipe_1_pane_g1

0xe249,	// (0x0007b173) calenote_swipe_1_pane_g2_ParamLimits

0xe249,	// (0x0007b173) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0007cc3b) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0007cc3b) calenote_swipe_1_pane_g

0xe698,	// (0x0007b5c2) calenote_swipe_1_pane_t1_ParamLimits

0xe698,	// (0x0007b5c2) calenote_swipe_1_pane_t1

0xe23c,	// (0x0007b166) calenote_swipe_2_pane_g1_ParamLimits

0xe23c,	// (0x0007b166) calenote_swipe_2_pane_g1

0xe6b7,	// (0x0007b5e1) calenote_swipe_2_pane_g2_ParamLimits

0xe6b7,	// (0x0007b5e1) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0007cd18) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0007cd18) calenote_swipe_2_pane_g

0xe6c3,	// (0x0007b5ed) calenote_swipe_2_pane_t1_ParamLimits

0xe6c3,	// (0x0007b5ed) calenote_swipe_2_pane_t1

0x259e,	// (0x0006f4c8) main_mup_navstr_pane

0x74c3,	// (0x000743ed) main_mup3_pane_t7_ParamLimits

0x74c3,	// (0x000743ed) main_mup3_pane_t7

0xee29,	// (0x0007bd53) main_mp4_pane_g6_ParamLimits

0xee29,	// (0x0007bd53) main_mp4_pane_g6

0xefbf,	// (0x0007bee9) main_image3_pane_t4_ParamLimits

0xefbf,	// (0x0007bee9) main_image3_pane_t4

0xa45b,	// (0x00077385) popup_navstr_preview_pane_ParamLimits

0xa45b,	// (0x00077385) popup_navstr_preview_pane

0xa46f,	// (0x00077399) scroll_navstr_pane_ParamLimits

0xa46f,	// (0x00077399) scroll_navstr_pane

0x259e,	// (0x0006f4c8) bg_popup_preview_window_pane_cp04

0xe6ea,	// (0x0007b614) popup_navstr_preview_pane_t1

0xa483,	// (0x000773ad) scroll_navstr_pane_g1_ParamLimits

0xa483,	// (0x000773ad) scroll_navstr_pane_g1

0xa497,	// (0x000773c1) scroll_navstr_pane_t1_ParamLimits

0xa497,	// (0x000773c1) scroll_navstr_pane_t1

0xe68f,	// (0x0007b5b9) bg_button_pane_cp014

0xe68f,	// (0x0007b5b9) bg_button_pane_cp030

0x201c,	// (0x0006ef46) list_double_fisheye_pane_g4_ParamLimits

0x201c,	// (0x0006ef46) list_double_fisheye_pane_g4

0x2028,	// (0x0006ef52) list_double_fisheye_pane_g5_ParamLimits

0x2028,	// (0x0006ef52) list_double_fisheye_pane_g5

0xe5ed,	// (0x0007b517) sp_fs_scroll_pane_cp03

0xe37b,	// (0x0007b2a5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe387,	// (0x0007b2b1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0007cc58) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe393,	// (0x0007b2bd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa3b2,	// (0x000772dc) sp_fs_scroll_pane_cp02

0xb05c,	// (0x00077f86) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb05c,	// (0x00077f86) popup_sp_fs_calendar_preview_list_single_pane

0x259e,	// (0x0006f4c8) main_cam6_pano_pane

0x0dfa,	// (0x0006dd24) main_mup3_pane_ParamLimits

0x259e,	// (0x0006f4c8) main_phacti_pane

0x9d57,	// (0x00076c81) bg_button_pane_cp11

0x9d71,	// (0x00076c9b) main_mobtv_info_pane_g2_ParamLimits

0x9d71,	// (0x00076c9b) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0007cbb8) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0007cbb8) main_mobtv_info_pane_g

0x9f4c,	// (0x00076e76) sc_clock_pane_t5_ParamLimits

0x9f4c,	// (0x00076e76) sc_clock_pane_t5

0x9fd1,	// (0x00076efb) main_radioblah_pane_g1_ParamLimits

0xe188,	// (0x0007b0b2) main_radioblah_pane_t3_ParamLimits

0xe188,	// (0x0007b0b2) main_radioblah_pane_t3

0xe1a0,	// (0x0007b0ca) main_radioblah_pane_t4_ParamLimits

0xe1a0,	// (0x0007b0ca) main_radioblah_pane_t4

0x9ff9,	// (0x00076f23) main_radioblah_text_pane_ParamLimits

0x9ff9,	// (0x00076f23) main_radioblah_text_pane

0xa00b,	// (0x00076f35) main_radioblah_info_pane_g1_ParamLimits

0xa0a4,	// (0x00076fce) main_radioblah_info_pane_t4_ParamLimits

0xa0a4,	// (0x00076fce) main_radioblah_info_pane_t4

0x0dfa,	// (0x0006dd24) main_sp_fs_calendar_pane

0xa4ae,	// (0x000773d8) main_phacti_pane_g1

0xa4b6,	// (0x000773e0) phacti_note_pane_ParamLimits

0xa4b6,	// (0x000773e0) phacti_note_pane

0xe701,	// (0x0007b62b) phacti_term_pane_ParamLimits

0xe701,	// (0x0007b62b) phacti_term_pane

0xe716,	// (0x0007b640) phacti_note_pane_t1_ParamLimits

0xe716,	// (0x0007b640) phacti_note_pane_t1

0xe72d,	// (0x0007b657) phacti_term_pane_g1

0xe735,	// (0x0007b65f) phacti_term_pane_t1_ParamLimits

0xe735,	// (0x0007b65f) phacti_term_pane_t1

0xe75f,	// (0x0007b689) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb1b9,	// (0x000780e3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0007cd22) popup_sp_fs_calendar_preview_list_single_pane_g

0xe767,	// (0x0007b691) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe767,	// (0x0007b691) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe77c,	// (0x0007b6a6) aid_popup_sp_fs_bg_corner_pane

0x6c23,	// (0x00073b4d) popup_sp_fs_calendar_preview_bg_pane_g1

0x259e,	// (0x0006f4c8) popup_sp_fs_calendar_preview_bg_pane

0xe784,	// (0x0007b6ae) popup_sp_fs_calendar_preview_list_pane

0x0dfa,	// (0x0006dd24) bg_main_sp_fs_cale_pane_ParamLimits

0x0dfa,	// (0x0006dd24) bg_main_sp_fs_cale_pane

0xe795,	// (0x0007b6bf) listscroll_cale_mrui_pane_ParamLimits

0xe795,	// (0x0007b6bf) listscroll_cale_mrui_pane

0xe7a9,	// (0x0007b6d3) listscroll_sp_fs_schedule_track_pane

0xe7b2,	// (0x0007b6dc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7b2,	// (0x0007b6dc) main_sp_fs_ctrlbar_pane_cp01

0xe7c3,	// (0x0007b6ed) main_sp_fs_ribbon_pane

0xe7cb,	// (0x0007b6f5) popup_sp_fs_cale_preview_window

0xa50d,	// (0x00077437) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa50d,	// (0x00077437) list_single_sp_fs_schedule_track_pane

0x0dfa,	// (0x0006dd24) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0dfa,	// (0x0006dd24) bg_sp_fs_highlight_list_pane_cp03

0xa520,	// (0x0007744a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa520,	// (0x0007744a) list_single_sp_fs_schedule_track_pane_g1

0xa52c,	// (0x00077456) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa52c,	// (0x00077456) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0007cd27) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0007cd27) list_single_sp_fs_schedule_track_pane_g

0xa538,	// (0x00077462) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa538,	// (0x00077462) list_single_sp_fs_schedule_track_pane_t1

0xa552,	// (0x0007747c) sp_fs_schedule_track_pane_ParamLimits

0xa552,	// (0x0007747c) sp_fs_schedule_track_pane

0xe7dd,	// (0x0007b707) sp_fs_schedule_track_pane_g1

0xe7e5,	// (0x0007b70f) sp_fs_schedule_track_pane_g2

0xe7ed,	// (0x0007b717) sp_fs_schedule_track_pane_g3

0xe7f5,	// (0x0007b71f) sp_fs_schedule_track_pane_g4

0xe7fd,	// (0x0007b727) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0007cd2c) sp_fs_schedule_track_pane_g

0xd0f7,	// (0x0007a021) bg_sp_fs_schedule_viewer_highlight_g1

0xb47b,	// (0x000783a5) bg_sp_fs_schedule_viewer_highlight_g2

0xd0ff,	// (0x0007a029) bg_sp_fs_schedule_viewer_highlight_g3

0xd107,	// (0x0007a031) bg_sp_fs_schedule_viewer_highlight_g4

0xd360,	// (0x0007a28a) bg_sp_fs_schedule_viewer_highlight_g5

0xd117,	// (0x0007a041) bg_sp_fs_schedule_viewer_highlight_g6

0xd11f,	// (0x0007a049) bg_sp_fs_schedule_viewer_highlight_g7

0xd127,	// (0x0007a051) bg_sp_fs_schedule_viewer_highlight_g8

0xb45b,	// (0x00078385) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0007cd37) bg_sp_fs_schedule_viewer_highlight_g

0x259e,	// (0x0006f4c8) bg_main_sp_fs_ribbon_pane

0xa563,	// (0x0007748d) main_sp_fs_ribbon_pane_g1

0xe805,	// (0x0007b72f) main_sp_fs_ribbon_pane_t1

0xa56c,	// (0x00077496) main_sp_fs_ribbon_pane_t2

0xe814,	// (0x0007b73e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0007cd4a) main_sp_fs_ribbon_pane_t

0xe823,	// (0x0007b74d) main_sp_fs_ribbon_scheduler_pane

0xe82b,	// (0x0007b755) bg_main_sp_fs_ribbon_pane_g1

0xe834,	// (0x0007b75e) bg_main_sp_fs_ribbon_pane_g2

0xe83d,	// (0x0007b767) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0007cd51) bg_main_sp_fs_ribbon_pane_g

0xe845,	// (0x0007b76f) main_sp_fs_ribbon_scheduler_pane_g1

0xe84e,	// (0x0007b778) main_sp_fs_ribbon_scheduler_pane_g2

0xe857,	// (0x0007b781) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0007cd58) main_sp_fs_ribbon_scheduler_pane_g

0xe860,	// (0x0007b78a) list_cale_mrui_pane

0xa57b,	// (0x000774a5) sp_fs_scroll_pane_cp07_ParamLimits

0xa57b,	// (0x000774a5) sp_fs_scroll_pane_cp07

0xa591,	// (0x000774bb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa591,	// (0x000774bb) bg_sp_fs_schedule_viewer_highlight

0xe869,	// (0x0007b793) list_single_sp_fs_schedule_track_pane_cp01

0xe871,	// (0x0007b79b) list_sp_fs_schedule_track_pane

0xe879,	// (0x0007b7a3) sp_fs_scroll_pane_cp06_ParamLimits

0xe879,	// (0x0007b7a3) sp_fs_scroll_pane_cp06

0x6c23,	// (0x00073b4d) bgmain_sp_fs_calendar_pane_g1

0x245e,	// (0x0006f388) list_single_cale_mrui_pane_ParamLimits

0x245e,	// (0x0006f388) list_single_cale_mrui_pane

0xe88b,	// (0x0007b7b5) list_single_cale_mrui_row_pane_ParamLimits

0xe88b,	// (0x0007b7b5) list_single_cale_mrui_row_pane

0xe898,	// (0x0007b7c2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe898,	// (0x0007b7c2) list_single_cale_mrui_row_pane_g1

0xe8d0,	// (0x0007b7fa) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8d0,	// (0x0007b7fa) list_single_cale_mrui_row_pane_t1

0x247f,	// (0x0006f3a9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x247f,	// (0x0006f3a9) list_single_cale_mrui_row_pane_t2

0xe8e2,	// (0x0007b80c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8e2,	// (0x0007b80c) list_single_cale_mrui_row_pane_t3

0xe911,	// (0x0007b83b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe911,	// (0x0007b83b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0007cd64) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0007cd64) list_single_cale_mrui_row_pane_t

0x24e5,	// (0x0006f40f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x24e5,	// (0x0006f40f) list_single_cmail_header_editor_pane_bg_cp01

0x2509,	// (0x0006f433) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x2509,	// (0x0006f433) list_single_cmail_header_editor_pane_bg_cp02

0xa5a1,	// (0x000774cb) main_radioblah_text_pane_t1_ParamLimits

0xa5a1,	// (0x000774cb) main_radioblah_text_pane_t1

0xe940,	// (0x0007b86a) cam6_indi_pane_cp01

0xe948,	// (0x0007b872) cam6_mode_pane_cp01

0xe950,	// (0x0007b87a) cam6_pano_pane

0xe959,	// (0x0007b883) cam6_zoom_pane_cp01

0xe961,	// (0x0007b88b) cam6_pano_image_pane

0xe96c,	// (0x0007b896) cam6_pano_pane_g1

0xdf02,	// (0x0007ae2c) cam6_pano_pane_g2

0xe975,	// (0x0007b89f) cam6_pano_pane_g3

0xe97e,	// (0x0007b8a8) cam6_pano_pane_g4

0xcc0f,	// (0x00079b39) cam6_pano_pane_g5

0xe987,	// (0x0007b8b1) cam6_pano_pane_g6

0xe991,	// (0x0007b8bb) cam6_pano_pane_g7

0xe999,	// (0x0007b8c3) cam6_pano_pane_g8

0xe9a2,	// (0x0007b8cc) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0007cd6d) cam6_pano_pane_g

0x259e,	// (0x0006f4c8) main_browser_tag_pane

0xe6e2,	// (0x0007b60c) grid_navstr_albumart_pane

0xe9ad,	// (0x0007b8d7) cell_navstr_albumart_pane_ParamLimits

0xe9ad,	// (0x0007b8d7) cell_navstr_albumart_pane

0xe9d0,	// (0x0007b8fa) cell_navstr_albumart_pane_g1

0x55b4,	// (0x000724de) cell_navstr_albumart_pane_g2

0x55c4,	// (0x000724ee) cell_navstr_albumart_pane_g3

0x55bc,	// (0x000724e6) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0007cd80) cell_navstr_albumart_pane_g

0xa5bb,	// (0x000774e5) bt_list_pane_ParamLimits

0xa5bb,	// (0x000774e5) bt_list_pane

0xa5cf,	// (0x000774f9) bt_list_pane_t1

0xa5de,	// (0x00077508) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0007cd89) bt_list_pane_t

0x259e,	// (0x0006f4c8) main_cale_prevew_pane

0xa5ed,	// (0x00077517) popup_cale_preview_window_ParamLimits

0xa5ed,	// (0x00077517) popup_cale_preview_window

0x0dfa,	// (0x0006dd24) bg_popup_preview_window_pane_cp05_ParamLimits

0x0dfa,	// (0x0006dd24) bg_popup_preview_window_pane_cp05

0xe9d8,	// (0x0007b902) list_cale_preview_pane_ParamLimits

0xe9d8,	// (0x0007b902) list_cale_preview_pane

0xa606,	// (0x00077530) list_double_cale_preview_pane_ParamLimits

0xa606,	// (0x00077530) list_double_cale_preview_pane

0xa618,	// (0x00077542) list_single_cale_preview_pane_ParamLimits

0xa618,	// (0x00077542) list_single_cale_preview_pane

0xa62e,	// (0x00077558) list_single_cale_preview_pane_g1

0xa636,	// (0x00077560) list_single_cale_preview_pane_t1_ParamLimits

0xa636,	// (0x00077560) list_single_cale_preview_pane_t1

0xa64b,	// (0x00077575) list_double_cale_preview_pane_g1

0xa653,	// (0x0007757d) list_double_cale_preview_pane_t1_ParamLimits

0xa653,	// (0x0007757d) list_double_cale_preview_pane_t1

0xa668,	// (0x00077592) list_double_cale_preview_pane_t2_ParamLimits

0xa668,	// (0x00077592) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0007cd8e) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0007cd8e) list_double_cale_preview_pane_t

0x259e,	// (0x0006f4c8) main_ezdial_pane

0x0dfa,	// (0x0006dd24) main_sp_fs_email_pane_ParamLimits

0xa25c,	// (0x00077186) cmail_ddmenu_btn01_pane_ParamLimits

0xa25c,	// (0x00077186) cmail_ddmenu_btn01_pane

0xa26f,	// (0x00077199) cmail_ddmenu_btn02_pane_ParamLimits

0xa26f,	// (0x00077199) cmail_ddmenu_btn02_pane

0xa292,	// (0x000771bc) cmail_ddmenu_btn03_pane_ParamLimits

0xa292,	// (0x000771bc) cmail_ddmenu_btn03_pane

0x2094,	// (0x0006efbe) main_sp_fs_ctrlbar_pane_ParamLimits

0x20b8,	// (0x0006efe2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa3bc,	// (0x000772e6) list_cmail_body_pane_ParamLimits

0xe616,	// (0x0007b540) bg_button_pane_cp12

0xe61f,	// (0x0007b549) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe61f,	// (0x0007b549) list_single_cmail_header_detail_pane_g3

0x2438,	// (0x0006f362) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2438,	// (0x0006f362) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0007cd13) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0007cd13) list_single_cmail_header_detail_pane_t

0xe74a,	// (0x0007b674) phacti_term_pane_t2_ParamLimits

0xe74a,	// (0x0007b674) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0007cd1d) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0007cd1d) phacti_term_pane_t

0xe9e4,	// (0x0007b90e) aid_size_list_single_double

0xa680,	// (0x000775aa) popup_ezdial_listscroll_window

0xa69c,	// (0x000775c6) popup_number_entry_window_cp01

0xbc98,	// (0x00078bc2) bg_popup_call_pane_cp09

0xe9f0,	// (0x0007b91a) ezdial_list_pane

0xe9f8,	// (0x0007b922) scroll_pane_cp23

0x5a9a,	// (0x000729c4) bg_button_pane_cp028_ParamLimits

0x5a9a,	// (0x000729c4) bg_button_pane_cp028

0xa6aa,	// (0x000775d4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa6aa,	// (0x000775d4) cmail_ddmenu_btn01_pane_g1

0xa6b6,	// (0x000775e0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa6b6,	// (0x000775e0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0007cd93) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0007cd93) cmail_ddmenu_btn01_pane_g

0xea00,	// (0x0007b92a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea00,	// (0x0007b92a) cmail_ddmenu_btn01_pane_t1

0x5a9a,	// (0x000729c4) bg_button_pane_cp029_ParamLimits

0x5a9a,	// (0x000729c4) bg_button_pane_cp029

0xa6c2,	// (0x000775ec) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa6c2,	// (0x000775ec) cmail_ddmenu_btn02_pane_g1

0xa6da,	// (0x00077604) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa6da,	// (0x00077604) cmail_ddmenu_btn02_pane_t1

0x0dfa,	// (0x0006dd24) bg_button_pane_cp031_ParamLimits

0x0dfa,	// (0x0006dd24) bg_button_pane_cp031

0xa6c2,	// (0x000775ec) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa6c2,	// (0x000775ec) cmail_ddmenu_btn03_pane_g1

0xa6da,	// (0x00077604) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa6da,	// (0x00077604) cmail_ddmenu_btn03_pane_t1

0x801c,	// (0x00074f46) cell_dialer2_keypad_pane_t1_ParamLimits

0x8036,	// (0x00074f60) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8036,	// (0x00074f60) cell_dialer2_keypad_pane_t1_copy1

0x9bfc,	// (0x00076b26) ncimui_group_button_pane

0x0dfa,	// (0x0006dd24) main_sp_fs_calendar_pane_ParamLimits

0xe5fd,	// (0x0007b527) list_single_cmail_header_caption_pane_ParamLimits

0xe78c,	// (0x0007b6b6) aid_recal_txt_sm_pane

0x259e,	// (0x0006f4c8) mian_recal_day_pane

0xe7cb,	// (0x0007b6f5) popup_sp_fs_cale_preview_window_ParamLimits

0x259e,	// (0x0006f4c8) list_recal_day_pane

0xea37,	// (0x0007b961) list_single_recal_day_pane_ParamLimits

0xea37,	// (0x0007b961) list_single_recal_day_pane

0xea49,	// (0x0007b973) list_single_recal_day_pane_g1_ParamLimits

0xea49,	// (0x0007b973) list_single_recal_day_pane_g1

0xea55,	// (0x0007b97f) list_single_recal_day_pane_g2_ParamLimits

0xea55,	// (0x0007b97f) list_single_recal_day_pane_g2

0xea64,	// (0x0007b98e) list_single_recal_day_pane_g3_ParamLimits

0xea64,	// (0x0007b98e) list_single_recal_day_pane_g3

0xa6fe,	// (0x00077628) list_single_recal_day_pane_g4_ParamLimits

0xa6fe,	// (0x00077628) list_single_recal_day_pane_g4

0xea70,	// (0x0007b99a) list_single_recal_day_pane_g5_ParamLimits

0xea70,	// (0x0007b99a) list_single_recal_day_pane_g5

0xea7f,	// (0x0007b9a9) list_single_recal_day_pane_g6_ParamLimits

0xea7f,	// (0x0007b9a9) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0007cda2) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0007cda2) list_single_recal_day_pane_g

0xea8b,	// (0x0007b9b5) list_single_recal_day_pane_t1

0xea99,	// (0x0007b9c3) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0007cdaf) list_single_recal_day_pane_t

0xa711,	// (0x0007763b) ncimui_query_button_pane_ParamLimits

0xa711,	// (0x0007763b) ncimui_query_button_pane

0xa721,	// (0x0007764b) ncimui_query_button_pane_t1_ParamLimits

0xa721,	// (0x0007764b) ncimui_query_button_pane_t1

0xeaa7,	// (0x0007b9d1) ncimui_query_button_pane_t2_ParamLimits

0xeaa7,	// (0x0007b9d1) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0007cdb4) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0007cdb4) ncimui_query_button_pane_t

0xa734,	// (0x0007765e) query_button_pane_ParamLimits

0xa734,	// (0x0007765e) query_button_pane

0x259e,	// (0x0006f4c8) bg_button_pane_cp0028

0xeaba,	// (0x0007b9e4) query_button_pane_t1

0x5abc,	// (0x000729e6) main_tport_pane_ParamLimits

0xa2b6,	// (0x000771e0) bg_popup_window_pane_cp01_ParamLimits

0xa2b6,	// (0x000771e0) bg_popup_window_pane_cp01

0xa2d0,	// (0x000771fa) heading_pane_cp08_ParamLimits

0xa2d0,	// (0x000771fa) heading_pane_cp08

0xa2e4,	// (0x0007720e) heading_pane_cp07_ParamLimits

0xa2e4,	// (0x0007720e) heading_pane_cp07

0xa361,	// (0x0007728b) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0007cd00) cell_tport_appsw_pane_g

0x1d25,	// (0x0006ec4f) input_candi_list_open_g1

0xb67a,	// (0x000785a4) list_cale_time_pane_g6_ParamLimits

0xb67a,	// (0x000785a4) list_cale_time_pane_g6

0x6efe,	// (0x00073e28) aid_size_touch_calib_1_ParamLimits

0x6efe,	// (0x00073e28) aid_size_touch_calib_1

0x6f0a,	// (0x00073e34) aid_size_touch_calib_2_ParamLimits

0x6f0a,	// (0x00073e34) aid_size_touch_calib_2

0x6f20,	// (0x00073e4a) aid_size_touch_calib_3_ParamLimits

0x6f20,	// (0x00073e4a) aid_size_touch_calib_3

0x6f3e,	// (0x00073e68) aid_size_touch_calib_4_ParamLimits

0x6f3e,	// (0x00073e68) aid_size_touch_calib_4

0x6f54,	// (0x00073e7e) main_touch_calib_button_group_pane_ParamLimits

0x6f54,	// (0x00073e7e) main_touch_calib_button_group_pane

0x6f6b,	// (0x00073e95) main_touch_calib_pane_g1_ParamLimits

0x6f77,	// (0x00073ea1) main_touch_calib_pane_g2_ParamLimits

0x6f83,	// (0x00073ead) main_touch_calib_pane_g3_ParamLimits

0x6f8f,	// (0x00073eb9) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0007c6e2) main_touch_calib_pane_g_ParamLimits

0x6f9b,	// (0x00073ec5) main_touch_calib_pane_t1_ParamLimits

0x6fb5,	// (0x00073edf) main_touch_calib_pane_t2_ParamLimits

0x6fcf,	// (0x00073ef9) main_touch_calib_pane_t3_ParamLimits

0x6fe3,	// (0x00073f0d) main_touch_calib_pane_t4_ParamLimits

0x6ff7,	// (0x00073f21) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0007c6eb) main_touch_calib_pane_t_ParamLimits

0xc9e5,	// (0x0007990f) list_single_fp_cale_pane_g3_ParamLimits

0xc9e5,	// (0x0007990f) list_single_fp_cale_pane_g3

0x0dfa,	// (0x0006dd24) bg_button_pane_cp012_ParamLimits

0x0dfa,	// (0x0006dd24) bg_vkb2_func_pane_cp03_ParamLimits

0x8fc6,	// (0x00075ef0) cell_vitu2_function_top_pane_g1_ParamLimits

0x0dfa,	// (0x0006dd24) bg_vkb2_func_pane_cp04_ParamLimits

0x9bb0,	// (0x00076ada) main_ncimui_button_group_pane_ParamLimits

0x9bb0,	// (0x00076ada) main_ncimui_button_group_pane

0x9bea,	// (0x00076b14) main_ncimui_pane_t3_ParamLimits

0x9bea,	// (0x00076b14) main_ncimui_pane_t3

0xe6f8,	// (0x0007b622) phacti_button_group_pane

0xe9e4,	// (0x0007b90e) aid_size_list_single_double_ParamLimits

0xa680,	// (0x000775aa) popup_ezdial_listscroll_window_ParamLimits

0xa69c,	// (0x000775c6) popup_number_entry_window_cp01_ParamLimits

0xa747,	// (0x00077671) phacti_button_pane_ParamLimits

0xa747,	// (0x00077671) phacti_button_pane

0x259e,	// (0x0006f4c8) bg_button_pane_cp14

0xeac8,	// (0x0007b9f2) phacti_button_pane_t1

0xa758,	// (0x00077682) main_touch_calib_button_pane_ParamLimits

0xa758,	// (0x00077682) main_touch_calib_button_pane

0xaeec,	// (0x00077e16) bg_button_pane_cp18_ParamLimits

0xaeec,	// (0x00077e16) bg_button_pane_cp18

0xead6,	// (0x0007ba00) main_touch_calib_button_pane_t1_ParamLimits

0xead6,	// (0x0007ba00) main_touch_calib_button_pane_t1

0xeaec,	// (0x0007ba16) main_touch_calib_button_pane_t2_ParamLimits

0xeaec,	// (0x0007ba16) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0007cdb9) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0007cdb9) main_touch_calib_button_pane_t

0x259e,	// (0x0006f4c8) cell_ncimui_button_pane

0x259e,	// (0x0006f4c8) bg_button_pane_cp032

0xeb0a,	// (0x0007ba34) cell_ncimui_button_pane_t1

0xef9f,	// (0x0007bec9) image3_infobar_pane_ParamLimits

0xef9f,	// (0x0007bec9) image3_infobar_pane

0x9f78,	// (0x00076ea2) fs_bigclock_status_pane_ParamLimits

0x9f78,	// (0x00076ea2) fs_bigclock_status_pane

0x9f85,	// (0x00076eaf) main_fs_bigclock_clock_pane_ParamLimits

0x9f85,	// (0x00076eaf) main_fs_bigclock_clock_pane

0x9f98,	// (0x00076ec2) main_fs_bigclock_indi_pane_ParamLimits

0x9f98,	// (0x00076ec2) main_fs_bigclock_indi_pane

0x9fb0,	// (0x00076eda) main_fs_bigclock_swipe_pane_ParamLimits

0x9fb0,	// (0x00076eda) main_fs_bigclock_swipe_pane

0x259e,	// (0x0006f4c8) main_fs_clock_dumped_data

0xe00f,	// (0x0007af39) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe00f,	// (0x0007af39) list_single_fs_bigclock_indicator_pane_g1

0xe02b,	// (0x0007af55) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe02b,	// (0x0007af55) list_single_fs_bigclock_indicator_pane_g2

0xe045,	// (0x0007af6f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe045,	// (0x0007af6f) list_single_fs_bigclock_indicator_pane_g3

0xe05f,	// (0x0007af89) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe05f,	// (0x0007af89) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0007cbec) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0007cbec) list_single_fs_bigclock_indicator_pane_g

0xe085,	// (0x0007afaf) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe085,	// (0x0007afaf) list_single_fs_bigclock_indicator_pane_t1

0xe0ad,	// (0x0007afd7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0ad,	// (0x0007afd7) list_single_fs_bigclock_indicator_pane_t2

0xe0d5,	// (0x0007afff) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0d5,	// (0x0007afff) list_single_fs_bigclock_indicator_pane_t3

0xe0fd,	// (0x0007b027) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0fd,	// (0x0007b027) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0007cbf7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0007cbf7) list_single_fs_bigclock_indicator_pane_t

0xeb18,	// (0x0007ba42) image3_infobar_fav_pane_ParamLimits

0xeb18,	// (0x0007ba42) image3_infobar_fav_pane

0xeb28,	// (0x0007ba52) image3_infobar_loc_pane_ParamLimits

0xeb28,	// (0x0007ba52) image3_infobar_loc_pane

0xeb3c,	// (0x0007ba66) image3_infobar_time_pane_ParamLimits

0xeb3c,	// (0x0007ba66) image3_infobar_time_pane

0x6c23,	// (0x00073b4d) image3_infobar_time_pane_g1

0xeb4c,	// (0x0007ba76) image3_infobar_time_pane_t1

0x6c23,	// (0x00073b4d) image3_infobar_loc_pane_g1

0xeb5a,	// (0x0007ba84) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0007cdbe) image3_infobar_loc_pane_g

0xeb62,	// (0x0007ba8c) image3_infobar_loc_pane_t1

0x6c23,	// (0x00073b4d) image3_infobar_fav_pane_g1

0xeb70,	// (0x0007ba9a) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0007cdc3) image3_infobar_fav_pane_g

0xeb78,	// (0x0007baa2) fs_bigclock_status_battery_pane

0xeb81,	// (0x0007baab) fs_bigclock_status_signal_pane

0xeb8a,	// (0x0007bab4) fs_bigclock_status_title_pane

0xeb93,	// (0x0007babd) fs_bigclock_status_signal_pane_g1

0xeb9c,	// (0x0007bac6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0007cdc8) fs_bigclock_status_signal_pane_g

0xeba4,	// (0x0007bace) fs_bigclock_status_battery_pane_g1

0xebad,	// (0x0007bad7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0007cdcd) fs_bigclock_status_battery_pane_g

0xebb5,	// (0x0007badf) fs_bigclock_status_title_pane_t1

0x6c23,	// (0x00073b4d) main_fs_bigclock_clock_pane_g1

0xebc3,	// (0x0007baed) main_fs_bigclock_clock_pane_g2

0xebc3,	// (0x0007baed) main_fs_bigclock_clock_pane_g3

0xebc3,	// (0x0007baed) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0007cdd2) main_fs_bigclock_clock_pane_g

0xebcb,	// (0x0007baf5) main_fs_bigclock_clock_pane_t1

0xebd9,	// (0x0007bb03) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0007cddb) main_fs_bigclock_clock_pane_t

0xebe8,	// (0x0007bb12) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebe8,	// (0x0007bb12) list_single_fs_bigclock_indicator_pane

0xa76d,	// (0x00077697) list_single_fs_bigclock_pane_ParamLimits

0xa76d,	// (0x00077697) list_single_fs_bigclock_pane

0xec02,	// (0x0007bb2c) main_fs_bigclock_indicator_pane_t1

0xec11,	// (0x0007bb3b) list_single_fs_bigclock_pane_g1

0xec19,	// (0x0007bb43) list_single_fs_bigclock_pane_t1

0x6c23,	// (0x00073b4d) main_fs_bigclock_swipe_pane_g1

0xec57,	// (0x0007bb81) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0007cdec) main_fs_bigclock_swipe_pane_g

0xec5f,	// (0x0007bb89) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec5f,	// (0x0007bb89) main_fs_bigclock_swipe_pane_t1

0x4712,	// (0x0007163c) call_type_pane_ParamLimits

0x259e,	// (0x0006f4c8) main_btmg_pane

0xe8c4,	// (0x0007b7ee) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c4,	// (0x0007b7ee) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0007cd5f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0007cd5f) list_single_cale_mrui_row_pane_g

0xea1e,	// (0x0007b948) list_recal_vselct_arw_lo_pane

0xea26,	// (0x0007b950) list_recal_vselct_arw_up_pane

0xea2e,	// (0x0007b958) list_recal_vselct_pane

0xec7c,	// (0x0007bba6) btmg_button_pane

0xa7d2,	// (0x000776fc) main_btmg_pane_g1

0x259e,	// (0x0006f4c8) bg_button_pane_cp044

0xec86,	// (0x0007bbb0) btmg_button_pane_t1

0x5a7e,	// (0x000729a8) aid_listscroll_gen

0x0dfa,	// (0x0006dd24) main_cntbar_detail_pane

0xe5dd,	// (0x0007b507) list_cmail_folder_pane

0xe5ed,	// (0x0007b517) sp_fs_scroll_pane_cp03_ParamLimits

0x2527,	// (0x0006f451) list_single_fs_dyc_pane_cp01_ParamLimits

0x2527,	// (0x0006f451) list_single_fs_dyc_pane_cp01

0xec94,	// (0x0007bbbe) aid_size_cmail_indent

0x004e,	// (0x0006cf78) list_single_dyc_row_pane_cp01

0xa808,	// (0x00077732) cntbar_detail_list_pane_ParamLimits

0xa808,	// (0x00077732) cntbar_detail_list_pane

0xa854,	// (0x0007777e) main_cntbar_detail_cont_pane_ParamLimits

0xa854,	// (0x0007777e) main_cntbar_detail_cont_pane

0x4706,	// (0x00071630) scroll_pane_cp032_ParamLimits

0x4706,	// (0x00071630) scroll_pane_cp032

0xa868,	// (0x00077792) cntbar_detail_list_event_pane_ParamLimits

0xa868,	// (0x00077792) cntbar_detail_list_event_pane

0xa818,	// (0x00077742) cntbar_detail_list_shct_pane

0xb4c9,	// (0x000783f3) aid_list_gen

0x00d1,	// (0x0006cffb) aid_scroll

0x00da,	// (0x0006d004) aid_size_touch_scroll_bar

0x253d,	// (0x0006f467) aid_list_double

0x00e3,	// (0x0006d00d) aid_list_single

0xa878,	// (0x000777a2) aid_list_single_lg

0xec9d,	// (0x0007bbc7) aid_list_z_g_a_sm

0x00f5,	// (0x0006d01f) aid_list_z_g_d

0xeca5,	// (0x0007bbcf) aid_txt_z_prm

0x2546,	// (0x0006f470) aid_txt_z_prm_cp01

0x2554,	// (0x0006f47e) aid_txt_z_sec

0xa881,	// (0x000777ab) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa881,	// (0x000777ab) main_cntbar_detail_cont_pane_g1

0xa895,	// (0x000777bf) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa895,	// (0x000777bf) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0007cdf1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0007cdf1) main_cntbar_detail_cont_pane_g

0x0116,	// (0x0006d040) main_cntbar_detail_cont_pane_t1

0x0124,	// (0x0006d04e) main_cntbar_detail_cont_pane_t2

0x0132,	// (0x0006d05c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0007cdf6) main_cntbar_detail_cont_pane_t

0xa8a5,	// (0x000777cf) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa8a5,	// (0x000777cf) cell_cntbar_detail_list_shct_pane

0x0154,	// (0x0006d07e) cntbar_detail_list_shct_pane_g1

0x015d,	// (0x0006d087) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0007cdfd) cntbar_detail_list_shct_pane_g

0xa8b9,	// (0x000777e3) cntbar_detail_list_event_pane_g1_ParamLimits

0xa8b9,	// (0x000777e3) cntbar_detail_list_event_pane_g1

0xa8c5,	// (0x000777ef) cntbar_detail_list_event_pane_g2_ParamLimits

0xa8c5,	// (0x000777ef) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0007ce02) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0007ce02) cntbar_detail_list_event_pane_g

0xa931,	// (0x0007785b) cntbar_detail_list_event_pane_t1_ParamLimits

0xa931,	// (0x0007785b) cntbar_detail_list_event_pane_t1

0xa946,	// (0x00077870) cntbar_detail_list_event_pane_t2_ParamLimits

0xa946,	// (0x00077870) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0007ce0f) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0007ce0f) cntbar_detail_list_event_pane_t

0x6c23,	// (0x00073b4d) cell_cntbar_detail_list_shct_pane_g1

0x4a74,	// (0x0007199e) navi_pane_mv_g3

0x0dfa,	// (0x0006dd24) main_cntbar_detail_pane_ParamLimits

0x259e,	// (0x0006f4c8) main_notif_wgt_pane

0xeddf,	// (0x0007bd09) aid_tch_main_mp4_pane_g4

0xef97,	// (0x0007bec1) popup_slider_window_cp02

0xea15,	// (0x0007b93f) list_recal_day_event_pane

0xa7dc,	// (0x00077706) cntbar_detail_btn_pane_ParamLimits

0xa7dc,	// (0x00077706) cntbar_detail_btn_pane

0xa7f2,	// (0x0007771c) cntbar_detail_btn_pane_cp01_ParamLimits

0xa7f2,	// (0x0007771c) cntbar_detail_btn_pane_cp01

0xa818,	// (0x00077742) cntbar_detail_list_shct_pane_ParamLimits

0xa828,	// (0x00077752) cntbar_detail_pane_g1_ParamLimits

0xa828,	// (0x00077752) cntbar_detail_pane_g1

0xa838,	// (0x00077762) cntbar_detail_pane_t1_ParamLimits

0xa838,	// (0x00077762) cntbar_detail_pane_t1

0xa8d1,	// (0x000777fb) cntbar_detail_list_event_pane_g3_ParamLimits

0xa8d1,	// (0x000777fb) cntbar_detail_list_event_pane_g3

0xa8e9,	// (0x00077813) cntbar_detail_list_event_pane_g4_ParamLimits

0xa8e9,	// (0x00077813) cntbar_detail_list_event_pane_g4

0xa901,	// (0x0007782b) cntbar_detail_list_event_pane_g5_ParamLimits

0xa901,	// (0x0007782b) cntbar_detail_list_event_pane_g5

0xa919,	// (0x00077843) cntbar_detail_list_event_pane_g6_ParamLimits

0xa919,	// (0x00077843) cntbar_detail_list_event_pane_g6

0xa95b,	// (0x00077885) cntbar_detail_list_event_pane_t3_ParamLimits

0xa95b,	// (0x00077885) cntbar_detail_list_event_pane_t3

0xa96d,	// (0x00077897) popup_notif_wgt_window_ParamLimits

0xa96d,	// (0x00077897) popup_notif_wgt_window

0xa986,	// (0x000778b0) popup_submenu_window_cp01_ParamLimits

0xa986,	// (0x000778b0) popup_submenu_window_cp01

0xbc98,	// (0x00078bc2) bg_popup_window_pane_cp10

0x0238,	// (0x0006d162) listscroll_notif_wgt_pane

0x0242,	// (0x0006d16c) list_notif_wgt_window

0x024b,	// (0x0006d175) scroll_pane_cp033

0xecb3,	// (0x0007bbdd) list_notif_wgt_row_pane_ParamLimits

0xecb3,	// (0x0007bbdd) list_notif_wgt_row_pane

0x0254,	// (0x0006d17e) aid_size_list_notif_wgt_del

0x025d,	// (0x0006d187) list_notif_wgt_row_pane_g1

0x0265,	// (0x0006d18f) list_notif_wgt_row_pane_g2

0x026d,	// (0x0006d197) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0007ce16) list_notif_wgt_row_pane_g

0x0276,	// (0x0006d1a0) list_notif_wgt_row_pane_t1

0x0284,	// (0x0006d1ae) list_notif_wgt_row_pane_t2

0x0292,	// (0x0006d1bc) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0007ce1d) list_notif_wgt_row_pane_t

0xd380,	// (0x0007a2aa) list_recal_day_event_pane_g1

0x02a0,	// (0x0006d1ca) list_recal_day_event_pane_t1

0x259e,	// (0x0006f4c8) bg_button_pane_cp045

0x02af,	// (0x0006d1d9) cntbar_detail_btn_pane_t1

0x5a9a,	// (0x000729c4) main_callh_pane_ParamLimits

0x5a9a,	// (0x000729c4) main_callh_pane

0x259e,	// (0x0006f4c8) main_coverflow0_pane

0x259e,	// (0x0006f4c8) main_wgtman_pane

0x9fbe,	// (0x00076ee8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9fbe,	// (0x00076ee8) main_fs_bigclock_unlock_btn_pane

0xa351,	// (0x0007727b) bg_button_pane_cp16

0xa369,	// (0x00077293) cell_tport_appsw_pane_g3

0xa998,	// (0x000778c2) cf0_flow_pane_ParamLimits

0xa998,	// (0x000778c2) cf0_flow_pane

0x02cc,	// (0x0006d1f6) listscroll_cf0_pane

0x02d5,	// (0x0006d1ff) main_cf0_pane_g1

0xa9ad,	// (0x000778d7) main_cf0_pane_t1_ParamLimits

0xa9ad,	// (0x000778d7) main_cf0_pane_t1

0xa9c5,	// (0x000778ef) main_cf0_pane_t2_ParamLimits

0xa9c5,	// (0x000778ef) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0007ce24) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0007ce24) main_cf0_pane_t

0x0307,	// (0x0006d231) scroll_pane_cp11

0xa9dd,	// (0x00077907) cf0_flow_pane_g1

0xa9e5,	// (0x0007790f) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0007ce29) cf0_flow_pane_g

0xa9ed,	// (0x00077917) cf0_flow_pane_t1

0x259e,	// (0x0006f4c8) main_call6_pane

0x259e,	// (0x0006f4c8) main_calllock_pane

0xa9fb,	// (0x00077925) call6_btn_grp_pane_ParamLimits

0xa9fb,	// (0x00077925) call6_btn_grp_pane

0xaa15,	// (0x0007793f) call6_pane_g1_ParamLimits

0xaa15,	// (0x0007793f) call6_pane_g1

0xaa2a,	// (0x00077954) popup_call6_1st_window_ParamLimits

0xaa2a,	// (0x00077954) popup_call6_1st_window

0xaa3b,	// (0x00077965) popup_call6_2nd_window_ParamLimits

0xaa3b,	// (0x00077965) popup_call6_2nd_window

0xaa4c,	// (0x00077976) cell_call6_btn_pane_ParamLimits

0xaa4c,	// (0x00077976) cell_call6_btn_pane

0xbc98,	// (0x00078bc2) bg_popup_call2_in_pane_cp03

0x0379,	// (0x0006d2a3) popup_call6_1st_window_g1

0x0381,	// (0x0006d2ab) popup_call6_1st_window_g2

0x0389,	// (0x0006d2b3) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0007ce2e) popup_call6_1st_window_g

0x0391,	// (0x0006d2bb) popup_call6_1st_window_t1

0x03a0,	// (0x0006d2ca) popup_call6_1st_window_t2

0x03b0,	// (0x0006d2da) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0007ce35) popup_call6_1st_window_t

0xbc98,	// (0x00078bc2) bg_popup_call2_in_pane_cp04

0x0379,	// (0x0006d2a3) popup_call6_2nd_window_g1

0x0381,	// (0x0006d2ab) popup_call6_2nd_window_g2

0x0389,	// (0x0006d2b3) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0007ce2e) popup_call6_2nd_window_g

0x0391,	// (0x0006d2bb) popup_call6_2nd_window_t1

0x259e,	// (0x0006f4c8) bg_button_pane_cp15

0x03c0,	// (0x0006d2ea) cell_call6_btn_pane_g1

0x03c9,	// (0x0006d2f3) cell_call6_btn_pane_t1

0xaa60,	// (0x0007798a) listscroll_wgtman_pane_ParamLimits

0xaa60,	// (0x0007798a) listscroll_wgtman_pane

0xaa78,	// (0x000779a2) wgtman_btn_pane_ParamLimits

0xaa78,	// (0x000779a2) wgtman_btn_pane

0xbb4f,	// (0x00078a79) aid_scroll_copy1

0x03f5,	// (0x0006d31f) list_wgtman_pane

0xaa91,	// (0x000779bb) wgtman_btn_pane_g1_ParamLimits

0xaa91,	// (0x000779bb) wgtman_btn_pane_g1

0xaaa5,	// (0x000779cf) wgtman_btn_pane_t1_ParamLimits

0xaaa5,	// (0x000779cf) wgtman_btn_pane_t1

0x041d,	// (0x0006d347) wgtman_btn_pane_t2_ParamLimits

0x041d,	// (0x0006d347) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0007ce3c) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0007ce3c) wgtman_btn_pane_t

0xaac0,	// (0x000779ea) listrow_wgtman_pane_ParamLimits

0xaac0,	// (0x000779ea) listrow_wgtman_pane

0xaad2,	// (0x000779fc) listrow_wgtman_pane_g1

0xaadb,	// (0x00077a05) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0007ce41) listrow_wgtman_pane_g

0x2562,	// (0x0006f48c) listrow_wgtman_pane_t1

0x2570,	// (0x0006f49a) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0007ce46) listrow_wgtman_pane_t

0x257e,	// (0x0006f4a8) wait_bar_pane_cp09

0x0465,	// (0x0006d38f) main_calllock_btn_pane

0x046f,	// (0x0006d399) main_calllock_pane_g1

0x259e,	// (0x0006f4c8) bg_button_pane_cp17

0x047b,	// (0x0006d3a5) main_calllock_btn_pane_g1

0x0484,	// (0x0006d3ae) main_calllock_btn_pane_t1

0x259e,	// (0x0006f4c8) main_dialer3_pane

0x259e,	// (0x0006f4c8) main_fmrd2_pane

0x6c23,	// (0x00073b4d) main_fs_bigclock_unlock_btn_pane_g1

0x049b,	// (0x0006d3c5) main_fs_bigclock_unlock_btn_pane_t1

0xaae5,	// (0x00077a0f) area_fmrd2_info_pane_ParamLimits

0xaae5,	// (0x00077a0f) area_fmrd2_info_pane

0xaaf7,	// (0x00077a21) area_fmrd2_visual_pane_ParamLimits

0xaaf7,	// (0x00077a21) area_fmrd2_visual_pane

0xab05,	// (0x00077a2f) fmrd2_indi_pane_ParamLimits

0xab05,	// (0x00077a2f) fmrd2_indi_pane

0xab12,	// (0x00077a3c) area_fmrd2_visual_pane_g1

0xab1a,	// (0x00077a44) area_fmrd2_visual_pane_t1

0xab2a,	// (0x00077a54) area_fmrd2_visual_pane_t2

0xab3a,	// (0x00077a64) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0007ce50) area_fmrd2_visual_pane_t

0xab4a,	// (0x00077a74) area_fmrd2_info_pane_g1

0xab52,	// (0x00077a7c) area_fmrd2_info_pane_t1

0xab62,	// (0x00077a8c) area_fmrd2_info_pane_t2

0xab72,	// (0x00077a9c) area_fmrd2_info_pane_t3

0xab82,	// (0x00077aac) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0007ce57) area_fmrd2_info_pane_t

0xab90,	// (0x00077aba) fmrd2_indi_pane_t1

0xaba0,	// (0x00077aca) fmrd2_indi_pane_t2

0xabb0,	// (0x00077ada) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0007ce60) fmrd2_indi_pane_t

0xe06e,	// (0x0007af98) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe06e,	// (0x0007af98) list_single_fs_bigclock_indicator_pane_g5

0xe112,	// (0x0007b03c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe112,	// (0x0007b03c) list_single_fs_bigclock_indicator_pane_t5

0xa4ca,	// (0x000773f4) aid_cell_bcale_month_pane_ParamLimits

0xa4ca,	// (0x000773f4) aid_cell_bcale_month_pane

0xa4dc,	// (0x00077406) bcale_month_pane_ParamLimits

0xa4dc,	// (0x00077406) bcale_month_pane

0xa4f4,	// (0x0007741e) bcale_preview_pane_ParamLimits

0xa4f4,	// (0x0007741e) bcale_preview_pane

0xec19,	// (0x0007bb43) list_single_fs_bigclock_pane_t1_ParamLimits

0xec33,	// (0x0007bb5d) list_single_fs_bigclock_pane_t2_ParamLimits

0xec33,	// (0x0007bb5d) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0007cde7) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0007cde7) list_single_fs_bigclock_pane_t

0x0493,	// (0x0006d3bd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0007ce4b) main_fs_bigclock_unlock_btn_pane_g

0xabc0,	// (0x00077aea) aid_dia3_key_size_ParamLimits

0xabc0,	// (0x00077aea) aid_dia3_key_size

0xabcf,	// (0x00077af9) aid_dia3_listrow_size_ParamLimits

0xabcf,	// (0x00077af9) aid_dia3_listrow_size

0xabdd,	// (0x00077b07) dia3_keypad_fun_pane_ParamLimits

0xabdd,	// (0x00077b07) dia3_keypad_fun_pane

0xabf7,	// (0x00077b21) dia3_keypad_num_pane_ParamLimits

0xabf7,	// (0x00077b21) dia3_keypad_num_pane

0xac10,	// (0x00077b3a) dia3_listscroll_pane_ParamLimits

0xac10,	// (0x00077b3a) dia3_listscroll_pane

0xac23,	// (0x00077b4d) dia3_numentry_pane_ParamLimits

0xac23,	// (0x00077b4d) dia3_numentry_pane

0x05d5,	// (0x0006d4ff) dia3_list_pane

0x05e0,	// (0x0006d50a) scroll_pane_cp12

0x259e,	// (0x0006f4c8) bg_dia3_numentry_pane

0x05eb,	// (0x0006d515) dia3_numentry_pane_t1

0xac34,	// (0x00077b5e) cell_dia3_key_num_pane

0xac3c,	// (0x00077b66) cell_dia3_key0_fun_pane_ParamLimits

0xac3c,	// (0x00077b66) cell_dia3_key0_fun_pane

0xac50,	// (0x00077b7a) cell_dia3_key1_fun_pane_ParamLimits

0xac50,	// (0x00077b7a) cell_dia3_key1_fun_pane

0x004e,	// (0x0006cf78) dia3_listrow_pane

0xdd8e,	// (0x0007acb8) bg_dia3_numentry_pane_g1

0x259e,	// (0x0006f4c8) bg_button_pane_cp21

0x0625,	// (0x0006d54f) cell_dia3_key_num_pane_t1

0x0633,	// (0x0006d55d) cell_dia3_key_num_pane_t2

0x0642,	// (0x0006d56c) cell_dia3_key_num_pane_t3

0x0651,	// (0x0006d57b) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0007ce67) cell_dia3_key_num_pane_t

0x259e,	// (0x0006f4c8) bg_button_pane_cp19

0xac68,	// (0x00077b92) cell_dia3_key0_fun_pane_g1

0x259e,	// (0x0006f4c8) bg_button_pane_cp20

0xac70,	// (0x00077b9a) cell_dia3_key1_fun_pane_g1

0xac78,	// (0x00077ba2) area_left_week_number_pane

0xac81,	// (0x00077bab) area_top_day_name_pane

0xac8a,	// (0x00077bb4) frame_month_view_pane

0xac96,	// (0x00077bc0) grid_month_view_pane

0xaca0,	// (0x00077bca) cell_top_day_name_pane_ParamLimits

0xaca0,	// (0x00077bca) cell_top_day_name_pane

0xd12f,	// (0x0007a059) cell_area_left_week_number_pane_ParamLimits

0xd12f,	// (0x0007a059) cell_area_left_week_number_pane

0xacb8,	// (0x00077be2) cell_month_view_pane_ParamLimits

0xacb8,	// (0x00077be2) cell_month_view_pane

0x06d8,	// (0x0006d602) frm_month_g1

0xacd3,	// (0x00077bfd) frm_month_g2

0xacdd,	// (0x00077c07) frm_month_g3

0xace7,	// (0x00077c11) frm_month_g4

0xacf1,	// (0x00077c1b) frm_month_g5

0xacfb,	// (0x00077c25) frm_month_g6

0xad05,	// (0x00077c2f) frm_month_g7

0x071d,	// (0x0006d647) frm_month_g8

0xad11,	// (0x00077c3b) frm_month_g9

0xad1a,	// (0x00077c44) frm_month_g10

0xad23,	// (0x00077c4d) frm_month_g11

0xad2c,	// (0x00077c56) frm_month_g12

0xad35,	// (0x00077c5f) frm_month_g13

0xad3e,	// (0x00077c68) frm_month_g14

0xad47,	// (0x00077c71) frm_month_g15

0xad50,	// (0x00077c7a) frm_month_g16

0x000f,

0xff46,	// (0x0007ce70) frm_month_g

0xad5b,	// (0x00077c85) cell_top_day_name_pane_t1

0xad6a,	// (0x00077c94) cell_area_left_week_number_pane_g1

0xad5b,	// (0x00077c85) cell_area_left_week_number_pane_t1

0x6c23,	// (0x00073b4d) cell_month_view_pane_g1

0xad72,	// (0x00077c9c) cell_month_view_pane_t1

0x259e,	// (0x0006f4c8) main_fps_pane

0xe343,	// (0x0007b26d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe343,	// (0x0007b26d) cmail_ddmenu_btn02_pane_cp1

0xe35f,	// (0x0007b289) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe35f,	// (0x0007b289) cmail_ddmenu_btn02_pane_cp2

0xa6ce,	// (0x000775f8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa6ce,	// (0x000775f8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0007cd98) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0007cd98) cmail_ddmenu_btn02_pane_g

0xa6ec,	// (0x00077616) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa6ec,	// (0x00077616) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0007cd9d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0007cd9d) cmail_ddmenu_btn02_pane_t

0xad81,	// (0x00077cab) fps_text_pane_ParamLimits

0xad81,	// (0x00077cab) fps_text_pane

0xad98,	// (0x00077cc2) main_fps_pane_g1_ParamLimits

0xad98,	// (0x00077cc2) main_fps_pane_g1

0xadb2,	// (0x00077cdc) wait_bar_pane_cp010_ParamLimits

0xadb2,	// (0x00077cdc) wait_bar_pane_cp010

0xadc3,	// (0x00077ced) fps_text_pane_t1_ParamLimits

0xadc3,	// (0x00077ced) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
