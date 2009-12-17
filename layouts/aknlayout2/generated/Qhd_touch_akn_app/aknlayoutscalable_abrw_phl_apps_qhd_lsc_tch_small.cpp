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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00053a72 };

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
0x32e7,	// (0x00056d59) Screen

0x32f3,	// (0x00056d65) application_window

0x333f,	// (0x00056db1) area_bottom_pane_ParamLimits

0x333f,	// (0x00056db1) area_bottom_pane

0x3378,	// (0x00056dea) area_top_pane_ParamLimits

0x3378,	// (0x00056dea) area_top_pane

0xb728,	// (0x0005f19a) call_video_uplink_pane_ParamLimits

0xb728,	// (0x0005f19a) call_video_uplink_pane

0x33f2,	// (0x00056e64) main_pane_ParamLimits

0x33f2,	// (0x00056e64) main_pane

0xc22d,	// (0x0005fc9f) context_pane

0x65bc,	// (0x0005a02e) navi_pane

0x65e4,	// (0x0005a056) popup_cale_events_window_ParamLimits

0x65e4,	// (0x0005a056) popup_cale_events_window

0xc240,	// (0x0005fcb2) popup_mup_playback_window

0x65fc,	// (0x0005a06e) signal_pane

0x087f,	// (0x000542f1) main_browser_pane

0x1366,	// (0x00054dd8) main_burst_pane

0x630e,	// (0x00059d80) main_calc_pane

0x1366,	// (0x00054dd8) main_cale_day_pane

0x087f,	// (0x000542f1) main_cale_month_pane

0x1366,	// (0x00054dd8) main_cale_week_pane

0x1366,	// (0x00054dd8) main_call_pane

0xbb59,	// (0x0005f5cb) main_call_poc_pane

0x1366,	// (0x00054dd8) main_camera_pane

0x1366,	// (0x00054dd8) main_chi_dic_pane

0x11eb,	// (0x00054c5d) main_clock_pane

0xbb59,	// (0x0005f5cb) main_fmradio_pane

0x1366,	// (0x00054dd8) main_graph_messa_pane

0xbb59,	// (0x0005f5cb) main_help_pane

0x087f,	// (0x000542f1) main_im_pane

0x07a8,	// (0x0005421a) main_image_pane_ParamLimits

0x07a8,	// (0x0005421a) main_image_pane

0xbb59,	// (0x0005f5cb) main_location2_pane

0x1366,	// (0x00054dd8) main_location_pane

0xbb59,	// (0x0005f5cb) main_messa_pane

0xbb59,	// (0x0005f5cb) main_mp2_pane

0x1366,	// (0x00054dd8) main_mp_pane

0xbb59,	// (0x0005f5cb) main_msg_pane

0xbb59,	// (0x0005f5cb) main_mup_eq_pane

0xbb59,	// (0x0005f5cb) main_mup_pane

0x1366,	// (0x00054dd8) main_notes_pane

0xbb59,	// (0x0005f5cb) main_pec_pane

0xbb59,	// (0x0005f5cb) main_phob_pane

0xbb59,	// (0x0005f5cb) main_pinb_pane

0xbb59,	// (0x0005f5cb) main_postcard_pane

0xbb59,	// (0x0005f5cb) main_qdial_pane

0x1366,	// (0x00054dd8) main_skin_pane

0xbb59,	// (0x0005f5cb) main_smil2_pane

0x1366,	// (0x00054dd8) main_smil_pane

0x1366,	// (0x00054dd8) main_video_pane

0x1366,	// (0x00054dd8) main_video_tele_pane

0x07a8,	// (0x0005421a) main_viewer_pane_ParamLimits

0x07a8,	// (0x0005421a) main_viewer_pane

0x1366,	// (0x00054dd8) main_vorec_pane

0x6362,	// (0x00059dd4) popup_blid_sat_info_window_ParamLimits

0x6362,	// (0x00059dd4) popup_blid_sat_info_window

0x63ba,	// (0x00059e2c) popup_dyc_status_message_window_ParamLimits

0x63ba,	// (0x00059e2c) popup_dyc_status_message_window

0x63d4,	// (0x00059e46) popup_grid_large_graphic_window_ParamLimits

0x63d4,	// (0x00059e46) popup_grid_large_graphic_window

0x6490,	// (0x00059f02) popup_loc_request_window_ParamLimits

0x6490,	// (0x00059f02) popup_loc_request_window

0x6594,	// (0x0005a006) popup_wml_address_window_ParamLimits

0x6594,	// (0x0005a006) popup_wml_address_window

0x6148,	// (0x00059bba) call_muted_g1

0x5ca5,	// (0x00059717) popup_call_audio_conf_window_ParamLimits

0x5ca5,	// (0x00059717) popup_call_audio_conf_window

0x615c,	// (0x00059bce) popup_call_audio_first_window_ParamLimits

0x615c,	// (0x00059bce) popup_call_audio_first_window

0x61d2,	// (0x00059c44) popup_call_audio_in_window_ParamLimits

0x61d2,	// (0x00059c44) popup_call_audio_in_window

0x620e,	// (0x00059c80) popup_call_audio_out_window_ParamLimits

0x620e,	// (0x00059c80) popup_call_audio_out_window

0x6248,	// (0x00059cba) popup_call_audio_second_window_ParamLimits

0x6248,	// (0x00059cba) popup_call_audio_second_window

0x629e,	// (0x00059d10) popup_call_audio_wait_window_ParamLimits

0x629e,	// (0x00059d10) popup_call_audio_wait_window

0x62d3,	// (0x00059d45) popup_number_entry_window_ParamLimits

0x62d3,	// (0x00059d45) popup_number_entry_window

0xb746,	// (0x0005f1b8) bg_popup_call_pane_cp05_ParamLimits

0xb746,	// (0x0005f1b8) bg_popup_call_pane_cp05

0xb766,	// (0x0005f1d8) popup_number_entry_window_t1

0xb779,	// (0x0005f1eb) popup_number_entry_window_t2

0xb78b,	// (0x0005f1fd) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00062ba1) popup_number_entry_window_t

0xb79d,	// (0x0005f20f) text_title_cp2

0xb7b0,	// (0x0005f222) bg_popup_call_pane_cp_ParamLimits

0xb7b0,	// (0x0005f222) bg_popup_call_pane_cp

0xb7be,	// (0x0005f230) call_thumbnail_pane

0xb7c6,	// (0x0005f238) popup_call_audio_in_window_g1_ParamLimits

0xb7c6,	// (0x0005f238) popup_call_audio_in_window_g1

0xb7d2,	// (0x0005f244) popup_call_audio_in_window_g2_ParamLimits

0xb7d2,	// (0x0005f244) popup_call_audio_in_window_g2

0xb7de,	// (0x0005f250) popup_call_audio_in_window_g3_ParamLimits

0xb7de,	// (0x0005f250) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00062baa) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00062baa) popup_call_audio_in_window_g

0xb7ea,	// (0x0005f25c) popup_call_audio_in_window_t1_ParamLimits

0xb7ea,	// (0x0005f25c) popup_call_audio_in_window_t1

0xb806,	// (0x0005f278) popup_call_audio_in_window_t2_ParamLimits

0xb806,	// (0x0005f278) popup_call_audio_in_window_t2

0xb822,	// (0x0005f294) popup_call_audio_in_window_t3_ParamLimits

0xb822,	// (0x0005f294) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00062bb1) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00062bb1) popup_call_audio_in_window_t

0xb7b0,	// (0x0005f222) bg_popup_call_pane_cp01_ParamLimits

0xb7b0,	// (0x0005f222) bg_popup_call_pane_cp01

0xb7be,	// (0x0005f230) call_thumbnail_pane_cp02

0xb835,	// (0x0005f2a7) call_type_pane_cp022

0xb83d,	// (0x0005f2af) popup_call_audio_out_window_g1_ParamLimits

0xb83d,	// (0x0005f2af) popup_call_audio_out_window_g1

0xb84f,	// (0x0005f2c1) popup_call_audio_out_window_g2_ParamLimits

0xb84f,	// (0x0005f2c1) popup_call_audio_out_window_g2

0xb85b,	// (0x0005f2cd) popup_call_audio_out_window_g3_ParamLimits

0xb85b,	// (0x0005f2cd) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00062bb8) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00062bb8) popup_call_audio_out_window_g

0xb86d,	// (0x0005f2df) popup_call_audio_out_window_t1_ParamLimits

0xb86d,	// (0x0005f2df) popup_call_audio_out_window_t1

0xb885,	// (0x0005f2f7) popup_call_audio_out_window_t2_ParamLimits

0xb885,	// (0x0005f2f7) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00062bbf) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00062bbf) popup_call_audio_out_window_t

0xb89a,	// (0x0005f30c) bg_popup_call_pane_ParamLimits

0xb89a,	// (0x0005f30c) bg_popup_call_pane

0x35a1,	// (0x00057013) call_thumbnail_pane_cp_ParamLimits

0x35a1,	// (0x00057013) call_thumbnail_pane_cp

0xb91e,	// (0x0005f390) call_type_pane_cp01_ParamLimits

0xb91e,	// (0x0005f390) call_type_pane_cp01

0xb962,	// (0x0005f3d4) popup_call_audio_first_window_g1_ParamLimits

0xb962,	// (0x0005f3d4) popup_call_audio_first_window_g1

0xb9ae,	// (0x0005f420) popup_call_audio_first_window_g2_ParamLimits

0xb9ae,	// (0x0005f420) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00062bc4) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00062bc4) popup_call_audio_first_window_g

0xb9f2,	// (0x0005f464) popup_call_audio_first_window_t1_ParamLimits

0xb9f2,	// (0x0005f464) popup_call_audio_first_window_t1

0xba9e,	// (0x0005f510) popup_call_audio_first_window_t4_ParamLimits

0xba9e,	// (0x0005f510) popup_call_audio_first_window_t4

0xbb2a,	// (0x0005f59c) popup_call_audio_first_window_t5_ParamLimits

0xbb2a,	// (0x0005f59c) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00062bc9) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00062bc9) popup_call_audio_first_window_t

0xbb59,	// (0x0005f5cb) bg_popup_call_pane_cp02

0xbb63,	// (0x0005f5d5) call_type_pane_cp023

0xbb6b,	// (0x0005f5dd) popup_call_audio_wait_window_g1

0xbb73,	// (0x0005f5e5) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00062bd0) popup_call_audio_wait_window_g

0xbb7b,	// (0x0005f5ed) popup_call_audio_wait_window_t3

0xbb89,	// (0x0005f5fb) bg_popup_call_pane_cp03_ParamLimits

0xbb89,	// (0x0005f5fb) bg_popup_call_pane_cp03

0xbbe9,	// (0x0005f65b) call_thumbnail_pane_cp011_ParamLimits

0xbbe9,	// (0x0005f65b) call_thumbnail_pane_cp011

0xbbf5,	// (0x0005f667) call_type_pane_cp034_ParamLimits

0xbbf5,	// (0x0005f667) call_type_pane_cp034

0xbc31,	// (0x0005f6a3) popup_call_audio_second_window_g1_ParamLimits

0xbc31,	// (0x0005f6a3) popup_call_audio_second_window_g1

0xbc6d,	// (0x0005f6df) popup_call_audio_second_window_g2_ParamLimits

0xbc6d,	// (0x0005f6df) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00062bd5) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00062bd5) popup_call_audio_second_window_g

0xbca9,	// (0x0005f71b) popup_call_audio_second_window_t1_ParamLimits

0xbca9,	// (0x0005f71b) popup_call_audio_second_window_t1

0xbd2a,	// (0x0005f79c) popup_call_audio_second_window_t2_ParamLimits

0xbd2a,	// (0x0005f79c) popup_call_audio_second_window_t2

0xbd60,	// (0x0005f7d2) popup_call_audio_second_window_t3_ParamLimits

0xbd60,	// (0x0005f7d2) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00062bda) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00062bda) popup_call_audio_second_window_t

0xbb59,	// (0x0005f5cb) bg_popup_call_pane_cp04

0xbd96,	// (0x0005f808) list_conf_pane

0xbd9e,	// (0x0005f810) popup_call_audio_conf_window_t1

0xbdac,	// (0x0005f81e) call_thumbnail_pane_g1

0x07a8,	// (0x0005421a) bg_pinb_pane_ParamLimits

0x07a8,	// (0x0005421a) bg_pinb_pane

0x07b6,	// (0x00054228) find_pinb_pane

0x07bf,	// (0x00054231) listscroll_pinb_pane_ParamLimits

0x07bf,	// (0x00054231) listscroll_pinb_pane

0x07ce,	// (0x00054240) pinb_bg_pane_g1

0x35c5,	// (0x00057037) pinb_bg_pane_g2

0x35d1,	// (0x00057043) pinb_bg_pane_g3

0x35dd,	// (0x0005704f) pinb_bg_pane_g4

0x35e9,	// (0x0005705b) pinb_bg_pane_g5

0x35f5,	// (0x00057067) pinb_bg_pane_g6

0x3600,	// (0x00057072) pinb_bg_pane_g7

0x360b,	// (0x0005707d) pinb_bg_pane_g8

0x3616,	// (0x00057088) pinb_bg_pane_g9

0x3620,	// (0x00057092) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00062be1) pinb_bg_pane_g

0x363d,	// (0x000570af) grid_pinb_pane

0x3646,	// (0x000570b8) list_pinb_pane

0x364f,	// (0x000570c1) scroll_pane_cp01_ParamLimits

0x364f,	// (0x000570c1) scroll_pane_cp01

0x07d8,	// (0x0005424a) find_pinb_pane_g1_ParamLimits

0x07d8,	// (0x0005424a) find_pinb_pane_g1

0x07f0,	// (0x00054262) find_pinb_pane_t1

0x0802,	// (0x00054274) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00062bfb) find_pinb_pane_t

0x0817,	// (0x00054289) input_focus_pane_cp01_ParamLimits

0x0817,	// (0x00054289) input_focus_pane_cp01

0x3661,	// (0x000570d3) cell_pinb_pane_ParamLimits

0x3661,	// (0x000570d3) cell_pinb_pane

0x368a,	// (0x000570fc) cell_pinb_pane_g1_ParamLimits

0x368a,	// (0x000570fc) cell_pinb_pane_g1

0x369a,	// (0x0005710c) cell_pinb_pane_g2_ParamLimits

0x369a,	// (0x0005710c) cell_pinb_pane_g2

0x0823,	// (0x00054295) cell_pinb_pane_g3_ParamLimits

0x0823,	// (0x00054295) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00062c00) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00062c00) cell_pinb_pane_g

0xbb59,	// (0x0005f5cb) grid_highlight_pane_cp01

0x36a6,	// (0x00057118) list_pinb_item_pane_ParamLimits

0x36a6,	// (0x00057118) list_pinb_item_pane

0xbb59,	// (0x0005f5cb) list_highlight_pane_cp02

0x36b8,	// (0x0005712a) list_pinb_item_pane_g1_ParamLimits

0x36b8,	// (0x0005712a) list_pinb_item_pane_g1

0x082f,	// (0x000542a1) list_pinb_item_pane_g2_ParamLimits

0x082f,	// (0x000542a1) list_pinb_item_pane_g2

0x36c5,	// (0x00057137) list_pinb_item_pane_g3_ParamLimits

0x36c5,	// (0x00057137) list_pinb_item_pane_g3

0x36d6,	// (0x00057148) list_pinb_item_pane_g4_ParamLimits

0x36d6,	// (0x00057148) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00062c07) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00062c07) list_pinb_item_pane_g

0x36e2,	// (0x00057154) list_pinb_item_pane_t1_ParamLimits

0x36e2,	// (0x00057154) list_pinb_item_pane_t1

0x3717,	// (0x00057189) calc_display_pane

0x373d,	// (0x000571af) calc_paper_pane

0x375e,	// (0x000571d0) grid_calc_pane

0xbb59,	// (0x0005f5cb) bg_list_pane_cp01

0x3786,	// (0x000571f8) clock_g1

0x378e,	// (0x00057200) clock_g2

0x0001,

0xf19e,	// (0x00062c10) clock_g

0x3796,	// (0x00057208) clock_t1_ParamLimits

0x3796,	// (0x00057208) clock_t1

0x37ab,	// (0x0005721d) clock_t2_ParamLimits

0x37ab,	// (0x0005721d) clock_t2

0x37bd,	// (0x0005722f) clock_t3_ParamLimits

0x37bd,	// (0x0005722f) clock_t3

0x37cf,	// (0x00057241) clock_t4_ParamLimits

0x37cf,	// (0x00057241) clock_t4

0x37e1,	// (0x00057253) clock_t5_ParamLimits

0x37e1,	// (0x00057253) clock_t5

0x37f6,	// (0x00057268) clock_t6_ParamLimits

0x37f6,	// (0x00057268) clock_t6

0x3808,	// (0x0005727a) clock_t7_ParamLimits

0x3808,	// (0x0005727a) clock_t7

0x381a,	// (0x0005728c) clock_t8_ParamLimits

0x381a,	// (0x0005728c) clock_t8

0x382e,	// (0x000572a0) clock_t9_ParamLimits

0x382e,	// (0x000572a0) clock_t9

0x0008,

0xf1a3,	// (0x00062c15) clock_t_ParamLimits

0xf1a3,	// (0x00062c15) clock_t

0x083b,	// (0x000542ad) popup_clock_analogue_window_cp02

0x083b,	// (0x000542ad) popup_clock_digital_window_cp01

0x0843,	// (0x000542b5) listscroll_help_pane

0xbb59,	// (0x0005f5cb) phob_pre_status_pane

0x084d,	// (0x000542bf) grid_qdial_pane

0xbb59,	// (0x0005f5cb) listscroll_mce_pane

0x0857,	// (0x000542c9) bg_notes_pane

0x0861,	// (0x000542d3) list_notes_pane

0x3842,	// (0x000572b4) scroll_pane_cp06

0x086b,	// (0x000542dd) bg_calc_paper_pane

0xbdc6,	// (0x0005f838) list_calc_pane

0x087f,	// (0x000542f1) bg_calc_display_pane

0x384d,	// (0x000572bf) calc_display_pane_t1

0x385f,	// (0x000572d1) calc_display_pane_t2

0xbde0,	// (0x0005f852) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00062c28) calc_display_pane_t

0x3871,	// (0x000572e3) cell_calc_pane_ParamLimits

0x3871,	// (0x000572e3) cell_calc_pane

0x088b,	// (0x000542fd) bg_calc_paper_pane_g1

0x0897,	// (0x00054309) bg_calc_paper_pane_g2

0x08a3,	// (0x00054315) bg_calc_paper_pane_g3

0x08af,	// (0x00054321) bg_calc_paper_pane_g4

0x08bb,	// (0x0005432d) bg_calc_paper_pane_g5

0x38a6,	// (0x00057318) bg_calc_paper_pane_g6

0x38b5,	// (0x00057327) bg_calc_paper_pane_g7

0x38c4,	// (0x00057336) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00062c2f) bg_calc_paper_pane_g

0x38d7,	// (0x00057349) calc_bg_paper_pane_g9

0x38ea,	// (0x0005735c) list_calc_item_pane_ParamLimits

0x38ea,	// (0x0005735c) list_calc_item_pane

0x08c7,	// (0x00054339) list_calc_item_pane_g1

0xbdf2,	// (0x0005f864) list_calc_item_pane_t1_ParamLimits

0xbdf2,	// (0x0005f864) list_calc_item_pane_t1

0x38fd,	// (0x0005736f) list_calc_item_pane_t2_ParamLimits

0x38fd,	// (0x0005736f) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00062c40) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00062c40) list_calc_item_pane_t

0x08d4,	// (0x00054346) cell_calc_pane_g1

0x08de,	// (0x00054350) grid_highlight_pane_cp02

0x3931,	// (0x000573a3) bg_calc_display_pane_g1

0x393a,	// (0x000573ac) bg_calc_display_pane_g2

0x3944,	// (0x000573b6) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00062c4a) bg_calc_display_pane_g

0x394d,	// (0x000573bf) cell_qdial_pane_ParamLimits

0x394d,	// (0x000573bf) cell_qdial_pane

0x3961,	// (0x000573d3) cell_qdial_pane_g1_ParamLimits

0x3961,	// (0x000573d3) cell_qdial_pane_g1

0x3977,	// (0x000573e9) cell_qdial_pane_g2_ParamLimits

0x3977,	// (0x000573e9) cell_qdial_pane_g2

0x0900,	// (0x00054372) cell_qdial_pane_g3_ParamLimits

0x0900,	// (0x00054372) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00062c51) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00062c51) cell_qdial_pane_g

0x399e,	// (0x00057410) cell_qdial_pane_t1_ParamLimits

0x399e,	// (0x00057410) cell_qdial_pane_t1

0x39b6,	// (0x00057428) cell_qdial_pane_t2_ParamLimits

0x39b6,	// (0x00057428) cell_qdial_pane_t2

0x39c9,	// (0x0005743b) cell_qdial_pane_t3_ParamLimits

0x39c9,	// (0x0005743b) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00062c5a) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00062c5a) cell_qdial_pane_t

0xbb59,	// (0x0005f5cb) grid_highlight_pane_cp04

0x090c,	// (0x0005437e) thumbnail_qdial_pane_ParamLimits

0x090c,	// (0x0005437e) thumbnail_qdial_pane

0x0968,	// (0x000543da) list_help_pane

0x0971,	// (0x000543e3) scroll_pane_cp02

0x39dc,	// (0x0005744e) help_list_pane_t1_ParamLimits

0x39dc,	// (0x0005744e) help_list_pane_t1

0xbe04,	// (0x0005f876) bg_notes_pane_g2

0xbe0c,	// (0x0005f87e) bg_notes_pane_g3

0xbe14,	// (0x0005f886) notes_bg_pane_g1

0xbe1c,	// (0x0005f88e) notes_bg_pane_g4

0xbe24,	// (0x0005f896) notes_bg_pane_g5

0xbe2c,	// (0x0005f89e) notes_bg_pane_g6

0xbe34,	// (0x0005f8a6) notes_bg_pane_g7

0xbe3c,	// (0x0005f8ae) notes_bg_pane_g8

0xbe44,	// (0x0005f8b6) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00062c78) notes_bg_pane_g

0x39f9,	// (0x0005746b) list_notes_text_pane_ParamLimits

0x39f9,	// (0x0005746b) list_notes_text_pane

0x097a,	// (0x000543ec) list_notes_text_pane_g1

0x3a0e,	// (0x00057480) list_notes_text_pane_t1

0x087f,	// (0x000542f1) listscroll_cale_week_pane

0x3a39,	// (0x000574ab) bg_cale_heading_pane

0x0994,	// (0x00054406) bg_cale_pane_cp01

0x3a4d,	// (0x000574bf) cale_week_corner_pane

0x3a63,	// (0x000574d5) cale_week_day_heading_pane

0x3a77,	// (0x000574e9) cale_week_scroll_pane_g1

0x3a88,	// (0x000574fa) cale_week_scroll_pane_g2

0x3a99,	// (0x0005750b) cale_week_scroll_pane_g3

0x3aaa,	// (0x0005751c) cale_week_scroll_pane_g4

0x3abb,	// (0x0005752d) cale_week_scroll_pane_g5

0x3acc,	// (0x0005753e) cale_week_scroll_pane_g6

0x3add,	// (0x0005754f) cale_week_scroll_pane_g7

0x3aee,	// (0x00057560) cale_week_scroll_pane_g8

0x3aff,	// (0x00057571) cale_week_scroll_pane_g9

0x3b10,	// (0x00057582) cale_week_scroll_pane_g10

0x3b21,	// (0x00057593) cale_week_scroll_pane_g11

0x3b32,	// (0x000575a4) cale_week_scroll_pane_g12

0x3b43,	// (0x000575b5) cale_week_scroll_pane_g13

0x3b54,	// (0x000575c6) cale_week_scroll_pane_g14

0x3b65,	// (0x000575d7) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00062c87) cale_week_scroll_pane_g

0x3b76,	// (0x000575e8) cale_week_time_pane

0x3b87,	// (0x000575f9) grid_cale_week_pane

0x3b9a,	// (0x0005760c) scroll_pane_cp08

0x3bb4,	// (0x00057626) cell_cale_week_pane_ParamLimits

0x3bb4,	// (0x00057626) cell_cale_week_pane

0x3bf0,	// (0x00057662) cale_week_day_heading_pane_t1

0x3c1d,	// (0x0005768f) cale_week_day_heading_pane_t2

0x3c4a,	// (0x000576bc) cale_week_day_heading_pane_t3

0x3c77,	// (0x000576e9) cale_week_day_heading_pane_t4

0x3ca4,	// (0x00057716) cale_week_day_heading_pane_t5

0x3cd1,	// (0x00057743) cale_week_day_heading_pane_t6

0x3cfe,	// (0x00057770) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00062ca6) cale_week_day_heading_pane_t

0x09bf,	// (0x00054431) bg_cale_side_pane

0x3d2b,	// (0x0005779d) cale_week_time_pane_t1

0x3d43,	// (0x000577b5) cale_week_time_pane_t2

0x3d5b,	// (0x000577cd) cale_week_time_pane_t3

0x3d73,	// (0x000577e5) cale_week_time_pane_t4

0x3d8b,	// (0x000577fd) cale_week_time_pane_t5

0x3da3,	// (0x00057815) cale_week_time_pane_t6

0x3dbb,	// (0x0005782d) cale_week_time_pane_t7

0x3dd3,	// (0x00057845) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00062cb5) cale_week_time_pane_t

0x3deb,	// (0x0005785d) cell_cale_week_pane_g2

0x3e04,	// (0x00057876) cell_cale_week_pane_g3_ParamLimits

0x3e04,	// (0x00057876) cell_cale_week_pane_g3

0x09cd,	// (0x0005443f) grid_highlight_pane_cp07

0x09d5,	// (0x00054447) listscroll_gms_pane

0x09df,	// (0x00054451) grid_gms_pane

0x09e8,	// (0x0005445a) listscroll_gms_pane_g1

0x09f0,	// (0x00054462) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00062cc6) listscroll_gms_pane_g

0x3e1c,	// (0x0005788e) scroll_pane_cp010

0x3e27,	// (0x00057899) cell_gms_pane_ParamLimits

0x3e27,	// (0x00057899) cell_gms_pane

0x3e3a,	// (0x000578ac) cell_gms_pane_g1

0x09f8,	// (0x0005446a) cell_gms_pane_g2

0x0a00,	// (0x00054472) cell_gms_pane_g3

0x0a09,	// (0x0005447b) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00062ccb) cell_gms_pane_g

0x0a12,	// (0x00054484) grid_highlight_pane_cp09

0x60f2,	// (0x00059b64) phob_pre_status_pane_g1

0x60fa,	// (0x00059b6c) phob_pre_status_pane_g2

0x6102,	// (0x00059b74) phob_pre_status_pane_g3

0x610a,	// (0x00059b7c) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x000630ba) phob_pre_status_pane_g

0x611a,	// (0x00059b8c) phob_pre_status_pane_t1

0x6128,	// (0x00059b9a) phob_pre_status_pane_t2

0x6138,	// (0x00059baa) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x000630c5) phob_pre_status_pane_t

0xbb59,	// (0x0005f5cb) bg_list_pane_cp05

0x3e4a,	// (0x000578bc) grid_vorec_pane

0xbe4c,	// (0x0005f8be) vorec_t1

0xbe5a,	// (0x0005f8cc) vorec_t2

0xbe68,	// (0x0005f8da) vorec_t3

0xbe76,	// (0x0005f8e8) vorec_t4

0xbe84,	// (0x0005f8f6) vorec_t5

0xbe92,	// (0x0005f904) vorec_t6

0x0006,

0xf262,	// (0x00062cd4) vorec_t

0xbeae,	// (0x0005f920) wait_bar_pane_cp01

0x3e52,	// (0x000578c4) cell_vorec_pane_ParamLimits

0x3e52,	// (0x000578c4) cell_vorec_pane

0x0a1a,	// (0x0005448c) cell_vorec_pane_g1

0xbb59,	// (0x0005f5cb) grid_highlight_pane_cp05

0x3e7d,	// (0x000578ef) cams_zoom_pane

0x3e8c,	// (0x000578fe) image_vga_pane

0x3ea6,	// (0x00057918) main_camera_pane_g1

0x3eb8,	// (0x0005792a) main_camera_pane_g2

0x3ec8,	// (0x0005793a) main_camera_pane_g3

0x3ed8,	// (0x0005794a) main_camera_pane_g4

0x3ee8,	// (0x0005795a) main_camera_pane_g5

0x3ef8,	// (0x0005796a) main_camera_pane_g6

0x3f0a,	// (0x0005797c) main_camera_pane_g7

0x0007,

0xf271,	// (0x00062ce3) main_camera_pane_g

0x3f1a,	// (0x0005798c) main_camera_pane_t1

0x3f30,	// (0x000579a2) main_camera_pane_t2

0x0001,

0xf282,	// (0x00062cf4) main_camera_pane_t

0x3f6a,	// (0x000579dc) cams_zoom_pane_cp_ParamLimits

0x3f6a,	// (0x000579dc) cams_zoom_pane_cp

0x3f92,	// (0x00057a04) image_cif_pane_ParamLimits

0x3f92,	// (0x00057a04) image_cif_pane

0x3fcd,	// (0x00057a3f) image_subqcif_pane

0x3fd5,	// (0x00057a47) main_video_pane_g1_ParamLimits

0x3fd5,	// (0x00057a47) main_video_pane_g1

0x3ff9,	// (0x00057a6b) main_video_pane_g2_ParamLimits

0x3ff9,	// (0x00057a6b) main_video_pane_g2

0x402d,	// (0x00057a9f) main_video_pane_g3_ParamLimits

0x402d,	// (0x00057a9f) main_video_pane_g3

0x405b,	// (0x00057acd) main_video_pane_g4_ParamLimits

0x405b,	// (0x00057acd) main_video_pane_g4

0x4089,	// (0x00057afb) main_video_pane_g5_ParamLimits

0x4089,	// (0x00057afb) main_video_pane_g5

0x0a30,	// (0x000544a2) main_video_pane_g6_ParamLimits

0x0a30,	// (0x000544a2) main_video_pane_g6

0x0006,

0xf287,	// (0x00062cf9) main_video_pane_g_ParamLimits

0xf287,	// (0x00062cf9) main_video_pane_g

0x40b6,	// (0x00057b28) main_video_pane_t1_ParamLimits

0x40b6,	// (0x00057b28) main_video_pane_t1

0x0a4a,	// (0x000544bc) cams_zoom_pane_g1

0x0a53,	// (0x000544c5) cams_zoom_pane_g2

0x0a5c,	// (0x000544ce) cams_zoom_pane_g3

0x0a65,	// (0x000544d7) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00062d08) cams_zoom_pane_g

0x4113,	// (0x00057b85) grid_cams_pane

0x412d,	// (0x00057b9f) linegrid_cams_pane

0x4141,	// (0x00057bb3) cell_cams_pane_ParamLimits

0x4141,	// (0x00057bb3) cell_cams_pane

0x0a6e,	// (0x000544e0) cams_burst_image_pane

0x0a76,	// (0x000544e8) cell_cams_pane_g1

0xbb59,	// (0x0005f5cb) grid_highlight_pane_cp03

0x08d4,	// (0x00054346) mp_bg_pane_g1

0xbb59,	// (0x0005f5cb) bg_list_pane_cp03

0xc105,	// (0x0005fb77) bg_mp_pane

0xc10d,	// (0x0005fb7f) grid_mp_pane

0xc115,	// (0x0005fb87) media_player_g1

0xc11d,	// (0x0005fb8f) media_player_t1

0xc12b,	// (0x0005fb9d) media_player_t2

0xc139,	// (0x0005fbab) media_player_t3

0xc147,	// (0x0005fbb9) media_player_t4

0xc155,	// (0x0005fbc7) media_player_t5

0xc163,	// (0x0005fbd5) media_player_t6

0xc171,	// (0x0005fbe3) media_player_t7

0x0006,

0xf632,	// (0x000630a4) media_player_t

0xc17f,	// (0x0005fbf1) wait_bar_pane_cp02

0xf617,	// (0x00063089) main_usb_pane_t

0x60e9,	// (0x00059b5b) cell_mp_pane

0x08d4,	// (0x00054346) cell_mp_pane_g1

0xbb59,	// (0x0005f5cb) grid_highlight_pane_cp06

0x0a7e,	// (0x000544f0) grid_skin_colour_pane

0x0a86,	// (0x000544f8) list_highlight_pane_cp03

0x425a,	// (0x00057ccc) skin_g1

0x0a8e,	// (0x00054500) skin_t1

0x0a9d,	// (0x0005450f) skin_t2

0x0001,

0xf2cb,	// (0x00062d3d) skin_t

0x4262,	// (0x00057cd4) cell_skin_colour_pane_ParamLimits

0x4262,	// (0x00057cd4) cell_skin_colour_pane

0x0aab,	// (0x0005451d) cell_skin_colour_pane_g1

0x42c6,	// (0x00057d38) call_video_g1_ParamLimits

0x42c6,	// (0x00057d38) call_video_g1

0x42e2,	// (0x00057d54) call_video_g2_ParamLimits

0x42e2,	// (0x00057d54) call_video_g2

0x0001,

0xf2d0,	// (0x00062d42) call_video_g_ParamLimits

0xf2d0,	// (0x00062d42) call_video_g

0x431c,	// (0x00057d8e) call_video_uplink_pane_cp1_ParamLimits

0x431c,	// (0x00057d8e) call_video_uplink_pane_cp1

0x0ac5,	// (0x00054537) call_video_uplink_pane_cp2

0x439a,	// (0x00057e0c) video_down_crop_pane_ParamLimits

0x439a,	// (0x00057e0c) video_down_crop_pane

0x4470,	// (0x00057ee2) video_down_pane_ParamLimits

0x4470,	// (0x00057ee2) video_down_pane

0x0acd,	// (0x0005453f) video_down_subqcif_pane_ParamLimits

0x0acd,	// (0x0005453f) video_down_subqcif_pane

0x0ae5,	// (0x00054557) video_down_subqcif_pane_cp_ParamLimits

0x0ae5,	// (0x00054557) video_down_subqcif_pane_cp

0x0b09,	// (0x0005457b) im_reading_pane_ParamLimits

0x0b09,	// (0x0005457b) im_reading_pane

0x4541,	// (0x00057fb3) im_writing_pane_ParamLimits

0x4541,	// (0x00057fb3) im_writing_pane

0x4557,	// (0x00057fc9) im_reading_pane_t1

0x0b23,	// (0x00054595) list_im_pane

0x0b34,	// (0x000545a6) scroll_pane_cp07

0x4590,	// (0x00058002) im_writing_pane_t1_ParamLimits

0x4590,	// (0x00058002) im_writing_pane_t1

0x0b4d,	// (0x000545bf) im_writing_pane_t2_ParamLimits

0x0b4d,	// (0x000545bf) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00062d4c) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00062d4c) im_writing_pane_t

0xbb59,	// (0x0005f5cb) input_focus_pane_cp04

0xbb59,	// (0x0005f5cb) input_focus_pane_cp05

0x45a5,	// (0x00058017) list_im_single_pane_ParamLimits

0x45a5,	// (0x00058017) list_im_single_pane

0x45b9,	// (0x0005802b) list_single_im_pane_t1

0x60a9,	// (0x00059b1b) blid_accuracy_pane

0x60b1,	// (0x00059b23) blid_compass_pane

0x60bb,	// (0x00059b2d) main_location_t1

0x60cb,	// (0x00059b3d) main_location_t2

0x60db,	// (0x00059b4d) main_location_t3

0x0002,

0xf641,	// (0x000630b3) main_location_t

0xbb59,	// (0x0005f5cb) aid_levels_location

0x08d4,	// (0x00054346) blid_accuracy_pane_g1

0x08d4,	// (0x00054346) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00062dae) blid_accuracy_pane_g

0x0b95,	// (0x00054607) wml_content_pane

0x0bd3,	// (0x00054645) wml_button_pane_ParamLimits

0x0bd3,	// (0x00054645) wml_button_pane

0x45c8,	// (0x0005803a) wml_list_single_large_pane_ParamLimits

0x45c8,	// (0x0005803a) wml_list_single_large_pane

0x45dd,	// (0x0005804f) wml_list_single_medium_pane_ParamLimits

0x45dd,	// (0x0005804f) wml_list_single_medium_pane

0x45f3,	// (0x00058065) wml_list_single_small_pane_ParamLimits

0x45f3,	// (0x00058065) wml_list_single_small_pane

0x0be7,	// (0x00054659) wml_selection_box_pane_ParamLimits

0x0be7,	// (0x00054659) wml_selection_box_pane

0x0bfa,	// (0x0005466c) wml_list_single_pane_t1

0x0c09,	// (0x0005467b) wml_list_single_medium_pane_t1

0x0c18,	// (0x0005468a) wml_list_single_large_pane_t1

0x0c27,	// (0x00054699) input_focus_pane_cp02_ParamLimits

0x0c27,	// (0x00054699) input_focus_pane_cp02

0x0c3a,	// (0x000546ac) wml_selection_box_pane_g1

0x0c43,	// (0x000546b5) wml_selection_box_pane_t1_ParamLimits

0x0c43,	// (0x000546b5) wml_selection_box_pane_t1

0x07a8,	// (0x0005421a) bg_wml_button_pane_ParamLimits

0x07a8,	// (0x0005421a) bg_wml_button_pane

0x0c5b,	// (0x000546cd) wml_button_pane_g1

0x0c63,	// (0x000546d5) wml_button_pane_t1

0x0c5b,	// (0x000546cd) wml_button_bg_pane_g1

0x0c73,	// (0x000546e5) wml_button_bg_pane_g2

0x0c7b,	// (0x000546ed) wml_button_bg_pane_g3

0x0c83,	// (0x000546f5) wml_button_bg_pane_g4

0x0c8b,	// (0x000546fd) wml_button_bg_pane_g5

0x0c93,	// (0x00054705) wml_button_bg_pane_g6

0x0c9b,	// (0x0005470d) wml_button_bg_pane_g7

0x0ca3,	// (0x00054715) wml_button_bg_pane_g8

0x0cab,	// (0x0005471d) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00062d51) wml_button_bg_pane_g

0x460b,	// (0x0005807d) bg_list_pane_cp02

0x0cb3,	// (0x00054725) mce_header_pane_ParamLimits

0x0cb3,	// (0x00054725) mce_header_pane

0x0cc9,	// (0x0005473b) mce_icon_pane

0x0cc9,	// (0x0005473b) mce_image_pane

0x0cd2,	// (0x00054744) mce_text_pane_ParamLimits

0x0cd2,	// (0x00054744) mce_text_pane

0x4613,	// (0x00058085) scroll_pane_cp03

0x0bcb,	// (0x0005463d) scroll_pane_cp04

0x0ce5,	// (0x00054757) scroll_pane_cp05_ParamLimits

0x0ce5,	// (0x00054757) scroll_pane_cp05

0x461d,	// (0x0005808f) mce_header_field_pane_ParamLimits

0x461d,	// (0x0005808f) mce_header_field_pane

0x4634,	// (0x000580a6) mce_header_field_pane_2_ParamLimits

0x4634,	// (0x000580a6) mce_header_field_pane_2

0x464a,	// (0x000580bc) mce_header_field_pane_3

0x4652,	// (0x000580c4) list_single_mce_message_pane_ParamLimits

0x4652,	// (0x000580c4) list_single_mce_message_pane

0x4667,	// (0x000580d9) list_single_mce_smart_pane_ParamLimits

0x4667,	// (0x000580d9) list_single_mce_smart_pane

0x0cf1,	// (0x00054763) input_focus_pane_cp03

0x0cfa,	// (0x0005476c) list_header_data_pane

0x4687,	// (0x000580f9) mce_header_field_pane_t1

0x4697,	// (0x00058109) list_single_mce_header_pane_ParamLimits

0x4697,	// (0x00058109) list_single_mce_header_pane

0x0d02,	// (0x00054774) list_single_mce_header_pane_t1

0x0d11,	// (0x00054783) list_single_mce_message_pane_g1

0x0d19,	// (0x0005478b) list_single_mce_message_pane_t1

0x46c9,	// (0x0005813b) bg_cale_heading_pane_cp01_ParamLimits

0x46c9,	// (0x0005813b) bg_cale_heading_pane_cp01

0x0d27,	// (0x00054799) bg_cale_pane_cp02_ParamLimits

0x0d27,	// (0x00054799) bg_cale_pane_cp02

0x46ec,	// (0x0005815e) cale_month_corner_pane

0x4702,	// (0x00058174) cale_month_day_heading_pane_ParamLimits

0x4702,	// (0x00058174) cale_month_day_heading_pane

0x472d,	// (0x0005819f) cale_month_pane_g1_ParamLimits

0x472d,	// (0x0005819f) cale_month_pane_g1

0x4749,	// (0x000581bb) cale_month_pane_g2_ParamLimits

0x4749,	// (0x000581bb) cale_month_pane_g2

0x4764,	// (0x000581d6) cale_month_pane_g3_ParamLimits

0x4764,	// (0x000581d6) cale_month_pane_g3

0x4790,	// (0x00058202) cale_month_pane_g4_ParamLimits

0x4790,	// (0x00058202) cale_month_pane_g4

0x47bc,	// (0x0005822e) cale_month_pane_g5_ParamLimits

0x47bc,	// (0x0005822e) cale_month_pane_g5

0x47e8,	// (0x0005825a) cale_month_pane_g6_ParamLimits

0x47e8,	// (0x0005825a) cale_month_pane_g6

0x4814,	// (0x00058286) cale_month_pane_g7_ParamLimits

0x4814,	// (0x00058286) cale_month_pane_g7

0x4840,	// (0x000582b2) cale_month_pane_g8_ParamLimits

0x4840,	// (0x000582b2) cale_month_pane_g8

0x4874,	// (0x000582e6) cale_month_pane_g9_ParamLimits

0x4874,	// (0x000582e6) cale_month_pane_g9

0x48a6,	// (0x00058318) cale_month_pane_g10_ParamLimits

0x48a6,	// (0x00058318) cale_month_pane_g10

0x48d8,	// (0x0005834a) cale_month_pane_g11_ParamLimits

0x48d8,	// (0x0005834a) cale_month_pane_g11

0x490a,	// (0x0005837c) cale_month_pane_g12_ParamLimits

0x490a,	// (0x0005837c) cale_month_pane_g12

0x493c,	// (0x000583ae) cale_month_pane_g13_ParamLimits

0x493c,	// (0x000583ae) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00062d64) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00062d64) cale_month_pane_g

0x496e,	// (0x000583e0) cale_month_week_pane

0x4981,	// (0x000583f3) grid_cale_month_pane_ParamLimits

0x4981,	// (0x000583f3) grid_cale_month_pane

0x49a7,	// (0x00058419) cale_month_day_heading_pane_t1

0x4a05,	// (0x00058477) cale_month_day_heading_pane_t2

0x4a6a,	// (0x000584dc) cale_month_day_heading_pane_t3

0x4acf,	// (0x00058541) cale_month_day_heading_pane_t4

0x4b34,	// (0x000585a6) cale_month_day_heading_pane_t5

0x4b99,	// (0x0005860b) cale_month_day_heading_pane_t6

0x4bfe,	// (0x00058670) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00062d7f) cale_month_day_heading_pane_t

0x09bf,	// (0x00054431) bg_cale_side_pane_cp01

0x4c63,	// (0x000586d5) cale_month_week_pane_t1

0x4c7a,	// (0x000586ec) cale_month_week_pane_t2

0x4c91,	// (0x00058703) cale_month_week_pane_t3

0x4ca8,	// (0x0005871a) cale_month_week_pane_t4

0x4cbf,	// (0x00058731) cale_month_week_pane_t5

0x4cd6,	// (0x00058748) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00062d8e) cale_month_week_pane_t

0x4ced,	// (0x0005875f) cell_cale_month_pane_ParamLimits

0x4ced,	// (0x0005875f) cell_cale_month_pane

0xbeb6,	// (0x0005f928) cell_cale_month_pane_g1

0x4dbd,	// (0x0005882f) cell_cale_month_pane_t1_ParamLimits

0x4dbd,	// (0x0005882f) cell_cale_month_pane_t1

0x09cd,	// (0x0005443f) grid_highlight_pane_cp08

0x08d4,	// (0x00054346) main_smil_g1

0x4dd9,	// (0x0005884b) smil_status_pane

0x0d5c,	// (0x000547ce) smil_text_pane

0xc025,	// (0x0005fa97) bg_popup_call3_rect_pane_g8

0xc02d,	// (0x0005fa9f) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00063047) bg_popup_call3_rect_pane_g

0xc2a7,	// (0x0005fd19) smil_status_volume_pane_g1

0x0d66,	// (0x000547d8) smil_status_pane_t1

0xc2da,	// (0x0005fd4c) volume_smil_pane

0x0d7d,	// (0x000547ef) list_smil_text_pane

0x4dec,	// (0x0005885e) scroll_pane_cp011

0x4df7,	// (0x00058869) smil_text_list_pane_t1_ParamLimits

0x4df7,	// (0x00058869) smil_text_list_pane_t1

0xbec2,	// (0x0005f934) aid_volume_smil_ParamLimits

0xbec2,	// (0x0005f934) aid_volume_smil

0x08d4,	// (0x00054346) smil_volume_pane_g1

0x08d4,	// (0x00054346) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00062dae) smil_volume_pane_g

0x087f,	// (0x000542f1) listscroll_cale_day_pane

0x0d87,	// (0x000547f9) bg_cale_pane

0x0d9f,	// (0x00054811) list_cale_pane

0x0db0,	// (0x00054822) scroll_pane_cp09

0x0dc1,	// (0x00054833) cale_bg_pane_g1

0x0dc9,	// (0x0005483b) cale_bg_pane_g2

0x0dd1,	// (0x00054843) cale_bg_pane_g3

0x0dd9,	// (0x0005484b) cale_bg_pane_g4

0x0de1,	// (0x00054853) cale_bg_pane_g5

0x0de9,	// (0x0005485b) cale_bg_pane_g6

0x0df1,	// (0x00054863) cale_bg_pane_g7

0x0df9,	// (0x0005486b) cale_bg_pane_g8

0x0e01,	// (0x00054873) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00062db3) cale_bg_pane_g

0x3e52,	// (0x000578c4) list_cale_time_pane_ParamLimits

0x3e52,	// (0x000578c4) list_cale_time_pane

0x0e09,	// (0x0005487b) list_cale_time_pane_g1_ParamLimits

0x0e09,	// (0x0005487b) list_cale_time_pane_g1

0x0e15,	// (0x00054887) list_cale_time_pane_g2_ParamLimits

0x0e15,	// (0x00054887) list_cale_time_pane_g2

0x4e3d,	// (0x000588af) list_cale_time_pane_g3_ParamLimits

0x4e3d,	// (0x000588af) list_cale_time_pane_g3

0x4e4b,	// (0x000588bd) list_cale_time_pane_g4_ParamLimits

0x4e4b,	// (0x000588bd) list_cale_time_pane_g4

0x4e59,	// (0x000588cb) list_cale_time_pane_g5_ParamLimits

0x4e59,	// (0x000588cb) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00062dc6) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00062dc6) list_cale_time_pane_g

0x0e2f,	// (0x000548a1) list_cale_time_pane_t1_ParamLimits

0x0e2f,	// (0x000548a1) list_cale_time_pane_t1

0x0e57,	// (0x000548c9) list_cale_time_pane_t2_ParamLimits

0x0e57,	// (0x000548c9) list_cale_time_pane_t2

0x51ca,	// (0x00058c3c) aid_blid_cardinal_pane

0x5208,	// (0x00058c7a) compass_pane_t4

0x0e7f,	// (0x000548f1) list_cale_time_pane_t4_ParamLimits

0x0e7f,	// (0x000548f1) list_cale_time_pane_t4

0x5216,	// (0x00058c88) compass_pane_t5

0x5224,	// (0x00058c96) compass_pane_t6

0x5232,	// (0x00058ca4) compass_pane_t7

0x12b8,	// (0x00054d2a) navi_pane_cc_t1

0x140d,	// (0x00054e7f) aid_phob_thumbnail_center_pane

0x5969,	// (0x000593db) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00062dd3) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00062dd3) list_cale_time_pane_t

0xb7b0,	// (0x0005f222) bg_popup_window_pane_cp02_ParamLimits

0xb7b0,	// (0x0005f222) bg_popup_window_pane_cp02

0x0ea7,	// (0x00054919) heading_pane_cp01_ParamLimits

0x0ea7,	// (0x00054919) heading_pane_cp01

0x0eb3,	// (0x00054925) loc_req_pane_ParamLimits

0x0eb3,	// (0x00054925) loc_req_pane

0x0ec3,	// (0x00054935) loc_type_pane_ParamLimits

0x0ec3,	// (0x00054935) loc_type_pane

0x0ed5,	// (0x00054947) loc_type_pane_t1_ParamLimits

0x0ed5,	// (0x00054947) loc_type_pane_t1

0x0ee7,	// (0x00054959) loc_type_pane_t2_ParamLimits

0x0ee7,	// (0x00054959) loc_type_pane_t2

0x0ef9,	// (0x0005496b) loc_type_pane_t3_ParamLimits

0x0ef9,	// (0x0005496b) loc_type_pane_t3

0x0002,

0xf368,	// (0x00062dda) loc_type_pane_t_ParamLimits

0xf368,	// (0x00062dda) loc_type_pane_t

0x0f0b,	// (0x0005497d) list_loc_req_pane

0x0f15,	// (0x00054987) scroll_pane_cp012

0x4e67,	// (0x000588d9) list_single_loc_request_popup_menu_pane_ParamLimits

0x4e67,	// (0x000588d9) list_single_loc_request_popup_menu_pane

0x0f20,	// (0x00054992) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0f20,	// (0x00054992) list_single_loc_request_popup_menu_pane_g1

0x0f2c,	// (0x0005499e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0f2c,	// (0x0005499e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00062de1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00062de1) list_single_loc_request_popup_menu_pane_g

0x0f38,	// (0x000549aa) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0f38,	// (0x000549aa) list_single_loc_request_popup_menu_pane_t1

0x07a8,	// (0x0005421a) bg_popup_window_pane_cp03_ParamLimits

0x07a8,	// (0x0005421a) bg_popup_window_pane_cp03

0x23c7,	// (0x00055e39) heading_loc_req_pane_ParamLimits

0x23c7,	// (0x00055e39) heading_loc_req_pane

0x4e74,	// (0x000588e6) popup_dyc_status_message_window_g1_ParamLimits

0x4e74,	// (0x000588e6) popup_dyc_status_message_window_g1

0x4e88,	// (0x000588fa) popup_dyc_status_message_window_t1_ParamLimits

0x4e88,	// (0x000588fa) popup_dyc_status_message_window_t1

0x4e9d,	// (0x0005890f) popup_dyc_status_message_window_t2_ParamLimits

0x4e9d,	// (0x0005890f) popup_dyc_status_message_window_t2

0x4eb2,	// (0x00058924) popup_dyc_status_message_window_t3_ParamLimits

0x4eb2,	// (0x00058924) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00062de6) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00062de6) popup_dyc_status_message_window_t

0xbb59,	// (0x0005f5cb) bg_heading_pane_cp01

0x0f4e,	// (0x000549c0) heading_loc_req_pane_g1

0x0f56,	// (0x000549c8) heading_loc_req_pane_g2

0x0f5e,	// (0x000549d0) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00062ded) heading_loc_req_pane_g

0x0f66,	// (0x000549d8) heading_loc_req_pane_t1

0x0f75,	// (0x000549e7) bg_popup_sub_pane_cp01_ParamLimits

0x0f75,	// (0x000549e7) bg_popup_sub_pane_cp01

0x0f83,	// (0x000549f5) popup_cale_events_window_g1_ParamLimits

0x0f83,	// (0x000549f5) popup_cale_events_window_g1

0x0fa3,	// (0x00054a15) popup_cale_events_window_g2_ParamLimits

0x0fa3,	// (0x00054a15) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x00062e21) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x00062e21) popup_cale_events_window_g

0x0fc3,	// (0x00054a35) popup_cale_events_window_t1_ParamLimits

0x0fc3,	// (0x00054a35) popup_cale_events_window_t1

0x0fd5,	// (0x00054a47) popup_cale_events_window_t2_ParamLimits

0x0fd5,	// (0x00054a47) popup_cale_events_window_t2

0x1013,	// (0x00054a85) popup_cale_events_window_t3_ParamLimits

0x1013,	// (0x00054a85) popup_cale_events_window_t3

0x104d,	// (0x00054abf) popup_cale_events_window_t4_ParamLimits

0x104d,	// (0x00054abf) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00062e26) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00062e26) popup_cale_events_window_t

0x4fb5,	// (0x00058a27) call_type_pane

0x4fc5,	// (0x00058a37) popup_call_status_window_g1

0x4fd9,	// (0x00058a4b) popup_call_status_window_g2

0x4fed,	// (0x00058a5f) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00062e2f) popup_call_status_window_g

0x1091,	// (0x00054b03) call_type_pane_g1

0x109a,	// (0x00054b0c) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00062e36) call_type_pane_g

0xbb59,	// (0x0005f5cb) bg_popup_sub_pane_cp02

0x10a3,	// (0x00054b15) listscroll_popup_wml_pane

0x10ab,	// (0x00054b1d) list_wml_pane

0x10b5,	// (0x00054b27) scroll_pane_cp013

0x10c0,	// (0x00054b32) list_single_graphic_popup_wml_pane_ParamLimits

0x10c0,	// (0x00054b32) list_single_graphic_popup_wml_pane

0x08d4,	// (0x00054346) list_single_graphic_popup_wml_pane_g1

0x10d4,	// (0x00054b46) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00062e3b) list_single_graphic_popup_wml_pane_g

0x10dc,	// (0x00054b4e) list_single_graphic_popup_wml_pane_t1

0x10f2,	// (0x00054b64) aid_call_pane

0xbdac,	// (0x0005f81e) popup_clock_analogue_window_g1

0xbdac,	// (0x0005f81e) popup_clock_analogue_window_g2

0xbee4,	// (0x0005f956) popup_clock_analogue_window_g3

0xbee4,	// (0x0005f956) popup_clock_analogue_window_g4

0x08d4,	// (0x00054346) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00062e40) popup_clock_analogue_window_g

0xbeec,	// (0x0005f95e) popup_clock_analogue_window_t1

0xbefa,	// (0x0005f96c) clock_digital_number_pane_ParamLimits

0xbefa,	// (0x0005f96c) clock_digital_number_pane

0xbf06,	// (0x0005f978) clock_digital_number_pane_cp02_ParamLimits

0xbf06,	// (0x0005f978) clock_digital_number_pane_cp02

0xbf12,	// (0x0005f984) clock_digital_number_pane_cp03_ParamLimits

0xbf12,	// (0x0005f984) clock_digital_number_pane_cp03

0xbf1e,	// (0x0005f990) clock_digital_number_pane_cp04_ParamLimits

0xbf1e,	// (0x0005f990) clock_digital_number_pane_cp04

0xbf2e,	// (0x0005f9a0) clock_digital_separator_pane_ParamLimits

0xbf2e,	// (0x0005f9a0) clock_digital_separator_pane

0xbf3a,	// (0x0005f9ac) popup_clock_digital_window_t1

0x08d4,	// (0x00054346) clock_digital_number_pane_g1

0x08d4,	// (0x00054346) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00062dae) clock_digital_number_pane_g

0x08d4,	// (0x00054346) clock_digital_separator_pane_g1

0x08d4,	// (0x00054346) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00062dae) clock_digital_separator_pane_g

0xbb59,	// (0x0005f5cb) bg_popup_window_pane_cp04

0x10fa,	// (0x00054b6c) heading_pane_cp03

0x1102,	// (0x00054b74) listscroll_popup_gms_pane

0x110a,	// (0x00054b7c) grid_large_graphic_popup_pane

0x1114,	// (0x00054b86) listscroll_popup_gms_pane_g1

0x111c,	// (0x00054b8e) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00062e4b) listscroll_popup_gms_pane_g

0x0bcb,	// (0x0005463d) scroll_pane_cp014

0x4ffc,	// (0x00058a6e) cell_large_graphic_popup_pane_ParamLimits

0x4ffc,	// (0x00058a6e) cell_large_graphic_popup_pane

0x5014,	// (0x00058a86) cell_large_graphic_popup_pane_g1_ParamLimits

0x5014,	// (0x00058a86) cell_large_graphic_popup_pane_g1

0x1124,	// (0x00054b96) cell_large_graphic_popup_pane_g2_ParamLimits

0x1124,	// (0x00054b96) cell_large_graphic_popup_pane_g2

0x1130,	// (0x00054ba2) cell_large_graphic_popup_pane_g3_ParamLimits

0x1130,	// (0x00054ba2) cell_large_graphic_popup_pane_g3

0x113d,	// (0x00054baf) cell_large_graphic_popup_pane_g4_ParamLimits

0x113d,	// (0x00054baf) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00062e50) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00062e50) cell_large_graphic_popup_pane_g

0x114d,	// (0x00054bbf) grid_highlight_pane_cp010

0x08d4,	// (0x00054346) bg_popup_call_pane_g1

0x1157,	// (0x00054bc9) list_single_graphic_popup_conf_pane_ParamLimits

0x1157,	// (0x00054bc9) list_single_graphic_popup_conf_pane

0x116a,	// (0x00054bdc) list_highlight_pane_cp01

0x1173,	// (0x00054be5) list_single_graphic_popup_conf_pane_g1

0x117b,	// (0x00054bed) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00062e59) list_single_graphic_popup_conf_pane_g

0x1183,	// (0x00054bf5) list_single_graphic_popup_conf_pane_t1

0x1191,	// (0x00054c03) linegrid_cams_pane_g1

0x5020,	// (0x00058a92) linegrid_cams_pane_g2

0x0a00,	// (0x00054472) linegrid_cams_pane_g3

0x119a,	// (0x00054c0c) linegrid_cams_pane_g4

0x5029,	// (0x00058a9b) linegrid_cams_pane_g5

0x5032,	// (0x00058aa4) linegrid_cams_pane_g6

0x0a09,	// (0x0005447b) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00062e5e) linegrid_cams_pane_g

0x11a3,	// (0x00054c15) popup_clock_analogue_window

0x11a3,	// (0x00054c15) popup_clock_digital_window

0xbb59,	// (0x0005f5cb) popup_phob_thumbnail_window

0x08d4,	// (0x00054346) call_video_uplink_pane_g1

0x11ac,	// (0x00054c1e) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00062e6d) call_video_uplink_pane_g

0x11b4,	// (0x00054c26) video_uplink_pane

0x11bc,	// (0x00054c2e) mce_image_pane_g1

0x503d,	// (0x00058aaf) mce_image_pane_g2

0x5047,	// (0x00058ab9) mce_image_pane_g3

0x504f,	// (0x00058ac1) mce_image_pane_g4

0x5057,	// (0x00058ac9) mce_image_pane_g5

0x0004,

0xf400,	// (0x00062e72) mce_image_pane_g

0x11c6,	// (0x00054c38) control_top_pane_stacon_cp01_ParamLimits

0x11c6,	// (0x00054c38) control_top_pane_stacon_cp01

0x11da,	// (0x00054c4c) uni_indicator_pane_stacon_cp01_ParamLimits

0x11da,	// (0x00054c4c) uni_indicator_pane_stacon_cp01

0x11eb,	// (0x00054c5d) bg_popup_sub_pane_cp03

0x505f,	// (0x00058ad1) chi_dic_find_pane

0x5067,	// (0x00058ad9) listscroll_chi_dic_pane

0x5070,	// (0x00058ae2) main_pane_chidic_g1

0x11f5,	// (0x00054c67) chi_dic_find_pane_t1

0x1203,	// (0x00054c75) find_chidic_pane

0x120c,	// (0x00054c7e) chi_dic_list_pane_ParamLimits

0x120c,	// (0x00054c7e) chi_dic_list_pane

0x121d,	// (0x00054c8f) scroll_pane_cp020

0x1225,	// (0x00054c97) find_chidic_pane_t1

0xbb59,	// (0x0005f5cb) input_focus_pane_cp06

0x5083,	// (0x00058af5) list_chi_dic_pane_ParamLimits

0x5083,	// (0x00058af5) list_chi_dic_pane

0x5095,	// (0x00058b07) list_chi_dic_pane_t1_ParamLimits

0x5095,	// (0x00058b07) list_chi_dic_pane_t1

0xbb59,	// (0x0005f5cb) list_highlight_pane_cp020

0x1234,	// (0x00054ca6) bg_cale_heading_pane_g1

0x50a8,	// (0x00058b1a) bg_cale_heading_pane_g2

0x50b0,	// (0x00058b22) bg_cale_heading_pane_g3

0x50b8,	// (0x00058b2a) bg_cale_heading_pane_g4

0x50c2,	// (0x00058b34) bg_cale_heading_pane_g5

0x50cc,	// (0x00058b3e) bg_cale_heading_pane_g6

0x50d4,	// (0x00058b46) bg_cale_heading_pane_g7

0x50dc,	// (0x00058b4e) bg_cale_heading_pane_g8

0x50e6,	// (0x00058b58) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00062e7d) bg_cale_heading_pane_g

0x1234,	// (0x00054ca6) bg_cale_side_pane_g1

0x50f0,	// (0x00058b62) bg_cale_side_pane_g2

0x50f8,	// (0x00058b6a) bg_cale_side_pane_g3

0x5100,	// (0x00058b72) bg_cale_side_pane_g4

0x5108,	// (0x00058b7a) bg_cale_side_pane_g5

0x5110,	// (0x00058b82) bg_cale_side_pane_g6

0x5118,	// (0x00058b8a) bg_cale_side_pane_g7

0x5120,	// (0x00058b92) bg_cale_side_pane_g8

0x5128,	// (0x00058b9a) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00062e90) bg_cale_side_pane_g

0x5130,	// (0x00058ba2) popup_call_status_window_ParamLimits

0x5130,	// (0x00058ba2) popup_call_status_window

0x123c,	// (0x00054cae) stacon_top_pane

0x1244,	// (0x00054cb6) status_pane_ParamLimits

0x1244,	// (0x00054cb6) status_pane

0x1259,	// (0x00054ccb) status_small_pane

0x1261,	// (0x00054cd3) control_pane

0xbb59,	// (0x0005f5cb) stacon_bottom_pane

0x1269,	// (0x00054cdb) list_single_mce_smart_pane_t1_ParamLimits

0x1269,	// (0x00054cdb) list_single_mce_smart_pane_t1

0x127c,	// (0x00054cee) list_single_mce_smart_pane_t2_ParamLimits

0x127c,	// (0x00054cee) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00062ea3) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00062ea3) list_single_mce_smart_pane_t

0x5179,	// (0x00058beb) compass_pane

0x5182,	// (0x00058bf4) main_location2_pane_t1

0x5194,	// (0x00058c06) main_location2_pane_t2

0x51a6,	// (0x00058c18) main_location2_pane_t3

0x0003,

0xf436,	// (0x00062ea8) main_location2_pane_t

0x129b,	// (0x00054d0d) compass_pane_g1_ParamLimits

0x129b,	// (0x00054d0d) compass_pane_g1

0x51ea,	// (0x00058c5c) compass_pane_t1

0x51f9,	// (0x00058c6b) compass_pane_t2

0x0005,

0xf43f,	// (0x00062eb1) compass_pane_t

0x5240,	// (0x00058cb2) text_secondary_cp61

0x12af,	// (0x00054d21) navi_pane_cams_g5

0x12d2,	// (0x00054d44) navi_pane_im_t1

0x12e0,	// (0x00054d52) navi_pane_mp_g1_ParamLimits

0x12e0,	// (0x00054d52) navi_pane_mp_g1

0x12f4,	// (0x00054d66) navi_pane_mp_g2_ParamLimits

0x12f4,	// (0x00054d66) navi_pane_mp_g2

0x1300,	// (0x00054d72) navi_pane_mp_g3_ParamLimits

0x1300,	// (0x00054d72) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00062ec5) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00062ec5) navi_pane_mp_g

0x130c,	// (0x00054d7e) navi_pane_mp_t1

0x131a,	// (0x00054d8c) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00062ecc) navi_pane_mp_t

0x1356,	// (0x00054dc8) navi_pane_vt_g1

0x130c,	// (0x00054d7e) navi_pane_vt_t1

0x135e,	// (0x00054dd0) navi_slider_pane

0x1366,	// (0x00054dd8) zooming_pane

0x136e,	// (0x00054de0) navi_slider_pane_g1

0xbf57,	// (0x0005f9c9) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00062ed3) navi_slider_pane_g

0x1392,	// (0x00054e04) aid_levels_zoom

0x139a,	// (0x00054e0c) zooming_pane_g1

0x13a2,	// (0x00054e14) zooming_pane_g2

0x13a2,	// (0x00054e14) zooming_pane_g3

0x0002,

0xf470,	// (0x00062ee2) zooming_pane_g

0x13aa,	// (0x00054e1c) level_10_zoom

0x13b3,	// (0x00054e25) level_11_zoom

0x13bc,	// (0x00054e2e) level_1_zoom

0x13c5,	// (0x00054e37) level_2_zoom

0x13ce,	// (0x00054e40) level_3_zoom

0x13d7,	// (0x00054e49) level_4_zoom

0x13e0,	// (0x00054e52) level_5_zoom

0x13e9,	// (0x00054e5b) level_6_zoom

0x13f2,	// (0x00054e64) level_7_zoom

0x13fb,	// (0x00054e6d) level_8_zoom

0x1404,	// (0x00054e76) level_9_zoom

0x1415,	// (0x00054e87) popup_phob_thumbnail_window_g1

0x141d,	// (0x00054e8f) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00062ee9) popup_phob_thumbnail_window_g

0xc187,	// (0x0005fbf9) level_1_location

0xc18f,	// (0x0005fc01) level_2_location

0xc197,	// (0x0005fc09) level_3_location

0xc19f,	// (0x0005fc11) level_4_location

0x1366,	// (0x00054dd8) level_5_location

0x5365,	// (0x00058dd7) mce_icon_pane_g1

0x536d,	// (0x00058ddf) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00062eee) mce_icon_pane_g

0x5375,	// (0x00058de7) main_mup_pane_g1_ParamLimits

0x5375,	// (0x00058de7) main_mup_pane_g1

0x538b,	// (0x00058dfd) main_mup_pane_g2_ParamLimits

0x538b,	// (0x00058dfd) main_mup_pane_g2

0x53a3,	// (0x00058e15) main_mup_pane_g3_ParamLimits

0x53a3,	// (0x00058e15) main_mup_pane_g3

0x53bb,	// (0x00058e2d) main_mup_pane_g4_ParamLimits

0x53bb,	// (0x00058e2d) main_mup_pane_g4

0x53d3,	// (0x00058e45) main_mup_pane_g5_ParamLimits

0x53d3,	// (0x00058e45) main_mup_pane_g5

0x53ef,	// (0x00058e61) main_mup_pane_g6_ParamLimits

0x53ef,	// (0x00058e61) main_mup_pane_g6

0x5407,	// (0x00058e79) main_mup_pane_g7_ParamLimits

0x5407,	// (0x00058e79) main_mup_pane_g7

0x541f,	// (0x00058e91) main_mup_pane_g8_ParamLimits

0x541f,	// (0x00058e91) main_mup_pane_g8

0x5439,	// (0x00058eab) main_mup_pane_g9_ParamLimits

0x5439,	// (0x00058eab) main_mup_pane_g9

0x5453,	// (0x00058ec5) main_mup_pane_g10_ParamLimits

0x5453,	// (0x00058ec5) main_mup_pane_g10

0x546d,	// (0x00058edf) main_mup_pane_g11_ParamLimits

0x546d,	// (0x00058edf) main_mup_pane_g11

0x5481,	// (0x00058ef3) main_mup_pane_g12_ParamLimits

0x5481,	// (0x00058ef3) main_mup_pane_g12

0x5497,	// (0x00058f09) main_mup_pane_g13_ParamLimits

0x5497,	// (0x00058f09) main_mup_pane_g13

0x000c,

0xf481,	// (0x00062ef3) main_mup_pane_g_ParamLimits

0xf481,	// (0x00062ef3) main_mup_pane_g

0x54ab,	// (0x00058f1d) main_mup_pane_t1_ParamLimits

0x54ab,	// (0x00058f1d) main_mup_pane_t1

0x54c5,	// (0x00058f37) main_mup_pane_t2_ParamLimits

0x54c5,	// (0x00058f37) main_mup_pane_t2

0x54dd,	// (0x00058f4f) main_mup_pane_t3_ParamLimits

0x54dd,	// (0x00058f4f) main_mup_pane_t3

0x54f5,	// (0x00058f67) main_mup_pane_t4_ParamLimits

0x54f5,	// (0x00058f67) main_mup_pane_t4

0x5513,	// (0x00058f85) main_mup_pane_t5_ParamLimits

0x5513,	// (0x00058f85) main_mup_pane_t5

0x5528,	// (0x00058f9a) main_mup_pane_t6_ParamLimits

0x5528,	// (0x00058f9a) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00062f0e) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00062f0e) main_mup_pane_t

0x553a,	// (0x00058fac) mup_progress_pane_ParamLimits

0x553a,	// (0x00058fac) mup_progress_pane

0x5546,	// (0x00058fb8) mup_visualizer_pane_ParamLimits

0x5546,	// (0x00058fb8) mup_visualizer_pane

0x5576,	// (0x00058fe8) mup_volume_pane_ParamLimits

0x5576,	// (0x00058fe8) mup_volume_pane

0x1083,	// (0x00054af5) mup_visualizer_pane_g1_ParamLimits

0x1083,	// (0x00054af5) mup_visualizer_pane_g1

0x1083,	// (0x00054af5) mup_visualizer_pane_g2_ParamLimits

0x1083,	// (0x00054af5) mup_visualizer_pane_g2

0x129b,	// (0x00054d0d) mup_visualizer_pane_g3_ParamLimits

0x129b,	// (0x00054d0d) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00062f1b) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00062f1b) mup_visualizer_pane_g

0x08d4,	// (0x00054346) mup_volume_pane_g1

0x142d,	// (0x00054e9f) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00062f22) mup_volume_pane_g

0x08d4,	// (0x00054346) mup_progress_pane_g1

0x1436,	// (0x00054ea8) mup_progress_pane_g2

0x143f,	// (0x00054eb1) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00062f27) mup_progress_pane_g

0xbb59,	// (0x0005f5cb) bg_popup_window_pane_cp05

0x1448,	// (0x00054eba) heading_pane_cp02_ParamLimits

0x1448,	// (0x00054eba) heading_pane_cp02

0x1462,	// (0x00054ed4) list_popup_blid_pane

0x146a,	// (0x00054edc) list_blid_sat_info_pane_ParamLimits

0x146a,	// (0x00054edc) list_blid_sat_info_pane

0x147d,	// (0x00054eef) list_blid_sat_info_pane_g1

0x1485,	// (0x00054ef7) list_blid_sat_info_pane_t1

0x568c,	// (0x000590fe) mup_equalizer_pane_ParamLimits

0x568c,	// (0x000590fe) mup_equalizer_pane

0x56a5,	// (0x00059117) mup_equalizer_pane_cp1_ParamLimits

0x56a5,	// (0x00059117) mup_equalizer_pane_cp1

0x56c2,	// (0x00059134) mup_equalizer_pane_cp2_ParamLimits

0x56c2,	// (0x00059134) mup_equalizer_pane_cp2

0x56df,	// (0x00059151) mup_equalizer_pane_cp3_ParamLimits

0x56df,	// (0x00059151) mup_equalizer_pane_cp3

0x5700,	// (0x00059172) mup_equalizer_pane_cp4_ParamLimits

0x5700,	// (0x00059172) mup_equalizer_pane_cp4

0x5721,	// (0x00059193) mup_equalizer_pane_cp5

0x5735,	// (0x000591a7) mup_equalizer_pane_cp6

0x5749,	// (0x000591bb) mup_equalizer_pane_cp7

0xc0a5,	// (0x0005fb17) bg_popup_call_poc_act_pane_g9

0xc0ad,	// (0x0005fb1f) bg_popup_call_poc_act_pane_g10

0xc0b5,	// (0x0005fb27) bg_popup_call_poc_act_pane_g11

0x000a,

0x07a8,	// (0x0005421a) mup_scale_pane

0x08d4,	// (0x00054346) mup_scale_pane_g1

0x1493,	// (0x00054f05) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00062f43) mup_scale_pane_g

0x14b7,	// (0x00054f29) msg_data_pane

0x14bf,	// (0x00054f31) scroll_pane_cp017

0x576f,	// (0x000591e1) bg_list_pane_cp04_ParamLimits

0x576f,	// (0x000591e1) bg_list_pane_cp04

0x14c7,	// (0x00054f39) msg_data_pane_g1

0x578f,	// (0x00059201) msg_data_pane_g2

0x5799,	// (0x0005920b) msg_data_pane_g3

0x57a1,	// (0x00059213) msg_data_pane_g4

0x57a9,	// (0x0005921b) msg_data_pane_g5

0x57b1,	// (0x00059223) msg_data_pane_g6

0x57b9,	// (0x0005922b) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00062f52) msg_data_pane_g

0x57c1,	// (0x00059233) msg_text_pane_ParamLimits

0x57c1,	// (0x00059233) msg_text_pane

0x57e6,	// (0x00059258) qrid_highlight_pane_cp011_ParamLimits

0x57e6,	// (0x00059258) qrid_highlight_pane_cp011

0xbb59,	// (0x0005f5cb) msg_body_pane

0xbb59,	// (0x0005f5cb) msg_header_pane

0x14d8,	// (0x00054f4a) input_focus_pane_cp07

0x580a,	// (0x0005927c) msg_header_pane_t1_ParamLimits

0x580a,	// (0x0005927c) msg_header_pane_t1

0x581e,	// (0x00059290) msg_header_pane_t2_ParamLimits

0x581e,	// (0x00059290) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00062f66) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00062f66) msg_header_pane_t

0x14ed,	// (0x00054f5f) msg_body_pane_g1

0x5830,	// (0x000592a2) msg_body_pane_t1_ParamLimits

0x5830,	// (0x000592a2) msg_body_pane_t1

0x5861,	// (0x000592d3) msg_body_pane_t2_ParamLimits

0x5861,	// (0x000592d3) msg_body_pane_t2

0x5873,	// (0x000592e5) msg_body_pane_t3_ParamLimits

0x5873,	// (0x000592e5) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00062f6b) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00062f6b) msg_body_pane_t

0x58bf,	// (0x00059331) main_viewer_pane_g1_ParamLimits

0x58bf,	// (0x00059331) main_viewer_pane_g1

0x58cd,	// (0x0005933f) main_viewer_pane_g2_ParamLimits

0x58cd,	// (0x0005933f) main_viewer_pane_g2

0x58db,	// (0x0005934d) main_viewer_pane_g3_ParamLimits

0x58db,	// (0x0005934d) main_viewer_pane_g3

0x58ea,	// (0x0005935c) main_viewer_pane_g4_ParamLimits

0x58ea,	// (0x0005935c) main_viewer_pane_g4

0xbf81,	// (0x0005f9f3) main_viewer_pane_g5_ParamLimits

0xbf81,	// (0x0005f9f3) main_viewer_pane_g5

0xbf81,	// (0x0005f9f3) main_viewer_pane_g7_ParamLimits

0xbf81,	// (0x0005f9f3) main_viewer_pane_g7

0x0f20,	// (0x00054992) main_viewer_pane_g8_ParamLimits

0x0f20,	// (0x00054992) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00062f7b) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00062f7b) main_viewer_pane_g

0x14f5,	// (0x00054f67) viewer_content_pane_ParamLimits

0x14f5,	// (0x00054f67) viewer_content_pane

0x5926,	// (0x00059398) main_postcard_pane_g1_ParamLimits

0x5926,	// (0x00059398) main_postcard_pane_g1

0x593c,	// (0x000593ae) main_postcard_pane_g2_ParamLimits

0x593c,	// (0x000593ae) main_postcard_pane_g2

0x5952,	// (0x000593c4) main_postcard_pane_g3_ParamLimits

0x5952,	// (0x000593c4) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00062f8c) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00062f8c) main_postcard_pane_g

0x5969,	// (0x000593db) main_postcard_pane_g4

0xc2ba,	// (0x0005fd2c) smil_status_volume_pane_g2

0x59ac,	// (0x0005941e) postcard_pane_ParamLimits

0x59ac,	// (0x0005941e) postcard_pane

0x1511,	// (0x00054f83) postcard_pane_g1_ParamLimits

0x1511,	// (0x00054f83) postcard_pane_g1

0x59ee,	// (0x00059460) postcard_pane_g2_ParamLimits

0x59ee,	// (0x00059460) postcard_pane_g2

0x59fa,	// (0x0005946c) postcard_pane_g3_ParamLimits

0x59fa,	// (0x0005946c) postcard_pane_g3

0x1503,	// (0x00054f75) postcard_pane_g4_ParamLimits

0x1503,	// (0x00054f75) postcard_pane_g4

0x5a06,	// (0x00059478) postcard_pane_g5_ParamLimits

0x5a06,	// (0x00059478) postcard_pane_g5

0x5a1b,	// (0x0005948d) postcard_pane_g6_ParamLimits

0x5a1b,	// (0x0005948d) postcard_pane_g6

0x1511,	// (0x00054f83) postcard_pane_g7_ParamLimits

0x1511,	// (0x00054f83) postcard_pane_g7

0x0006,

0xf527,	// (0x00062f99) postcard_pane_g_ParamLimits

0xf527,	// (0x00062f99) postcard_pane_g

0x5a2f,	// (0x000594a1) main_mp2_pane_g1_ParamLimits

0x5a2f,	// (0x000594a1) main_mp2_pane_g1

0x5a3b,	// (0x000594ad) main_mp2_pane_g2_ParamLimits

0x5a3b,	// (0x000594ad) main_mp2_pane_g2

0x5a47,	// (0x000594b9) main_mp2_pane_g3_ParamLimits

0x5a47,	// (0x000594b9) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00062fa8) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00062fa8) main_mp2_pane_g

0x5a53,	// (0x000594c5) main_mp2_pane_t1_ParamLimits

0x5a53,	// (0x000594c5) main_mp2_pane_t1

0x5a68,	// (0x000594da) main_mp2_pane_t2_ParamLimits

0x5a68,	// (0x000594da) main_mp2_pane_t2

0x5a7a,	// (0x000594ec) main_mp2_pane_t3_ParamLimits

0x5a7a,	// (0x000594ec) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00062faf) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00062faf) main_mp2_pane_t

0x151f,	// (0x00054f91) pec_content_pane_ParamLimits

0x151f,	// (0x00054f91) pec_content_pane

0x0bcb,	// (0x0005463d) scroll_pane_cp015

0x1531,	// (0x00054fa3) pec_attribute_pane_ParamLimits

0x1531,	// (0x00054fa3) pec_attribute_pane

0x5a8c,	// (0x000594fe) pec_content_pane_g1_ParamLimits

0x5a8c,	// (0x000594fe) pec_content_pane_g1

0x1541,	// (0x00054fb3) pec_content_pane_t1_ParamLimits

0x1541,	// (0x00054fb3) pec_content_pane_t1

0x1553,	// (0x00054fc5) pec_content_pane_t2_ParamLimits

0x1553,	// (0x00054fc5) pec_content_pane_t2

0x0001,

0xf544,	// (0x00062fb6) pec_content_pane_t_ParamLimits

0xf544,	// (0x00062fb6) pec_content_pane_t

0x5a98,	// (0x0005950a) list_single_graphic_pane_cp01_ParamLimits

0x5a98,	// (0x0005950a) list_single_graphic_pane_cp01

0x07a8,	// (0x0005421a) bg_popup_sub_pane_cp04

0x1565,	// (0x00054fd7) popup_mup_playback_window_g1

0x1571,	// (0x00054fe3) popup_mup_playback_window_t1

0x1586,	// (0x00054ff8) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00062fbb) popup_mup_playback_window_t

0x15bd,	// (0x0005502f) main_image_pane_g1_ParamLimits

0x15bd,	// (0x0005502f) main_image_pane_g1

0x1600,	// (0x00055072) scroll_pane_cp018_ParamLimits

0x1600,	// (0x00055072) scroll_pane_cp018

0x1618,	// (0x0005508a) scroll_pane_cp016_ParamLimits

0x1618,	// (0x0005508a) scroll_pane_cp016

0x5b65,	// (0x000595d7) smil2_image_pane_ParamLimits

0x5b65,	// (0x000595d7) smil2_image_pane

0x5b95,	// (0x00059607) smil2_root_pane_ParamLimits

0x5b95,	// (0x00059607) smil2_root_pane

0x5bcd,	// (0x0005963f) smil2_text_pane_ParamLimits

0x5bcd,	// (0x0005963f) smil2_text_pane

0xbb59,	// (0x0005f5cb) bg_list_pane_cp06

0x1654,	// (0x000550c6) grid_radio_pane

0xbb59,	// (0x0005f5cb) bg_popup_window_pane_cp06

0x165c,	// (0x000550ce) main_fmradio_pane_t1

0x10fa,	// (0x00054b6c) heading_pane_cp04

0x166a,	// (0x000550dc) main_fmradio_pane_t2

0xc0bd,	// (0x0005fb2f) popup_cale_lunar_info_window_g1

0x1678,	// (0x000550ea) main_fmradio_pane_t3

0xc0c5,	// (0x0005fb37) popup_cale_lunar_info_window_g2

0x1686,	// (0x000550f8) main_fmradio_pane_t4

0x0001,

0x1694,	// (0x00055106) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00063096) popup_cale_lunar_info_window_g

0xf55e,	// (0x00062fd0) main_fmradio_pane_t

0x16a2,	// (0x00055114) wait_bar_pane_cp03

0x16aa,	// (0x0005511c) cell_fmradio_pane_ParamLimits

0x16aa,	// (0x0005511c) cell_fmradio_pane

0x1511,	// (0x00054f83) cell_fmradio_pane_g1_ParamLimits

0x1511,	// (0x00054f83) cell_fmradio_pane_g1

0xbb59,	// (0x0005f5cb) grid_highlight_pane_cp011

0x16bd,	// (0x0005512f) poc_content_pane_ParamLimits

0x16bd,	// (0x0005512f) poc_content_pane

0x16cf,	// (0x00055141) scroll_pane_cp019

0x5c4d,	// (0x000596bf) popup_call_poc_act_window_ParamLimits

0x5c4d,	// (0x000596bf) popup_call_poc_act_window

0x5c71,	// (0x000596e3) popup_call_poc_inact_window_ParamLimits

0x5c71,	// (0x000596e3) popup_call_poc_inact_window

0xf5fb,	// (0x0006306d) bg_popup_call_poc_act_pane_g

0xc035,	// (0x0005faa7) bg_popup_call_poc_inact_pane_g1

0xc03d,	// (0x0005faaf) bg_popup_call_poc_inact_pane_g2

0x16d7,	// (0x00055149) popup_call_poc_act_window_g2

0xc045,	// (0x0005fab7) bg_popup_call_poc_inact_pane_g3

0xc04d,	// (0x0005fabf) bg_popup_call_poc_inact_pane_g4

0xc055,	// (0x0005fac7) bg_popup_call_poc_inact_pane_g5

0x16df,	// (0x00055151) popup_call_poc_act_window_t1_ParamLimits

0x16df,	// (0x00055151) popup_call_poc_act_window_t1

0x1707,	// (0x00055179) popup_call_poc_act_window_t2_ParamLimits

0x1707,	// (0x00055179) popup_call_poc_act_window_t2

0x172f,	// (0x000551a1) popup_call_poc_act_window_t3_ParamLimits

0x172f,	// (0x000551a1) popup_call_poc_act_window_t3

0x1757,	// (0x000551c9) popup_call_poc_act_window_t4_ParamLimits

0x1757,	// (0x000551c9) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00062fdb) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00062fdb) popup_call_poc_act_window_t

0xc05d,	// (0x0005facf) bg_popup_call_poc_inact_pane_g6

0xc065,	// (0x0005fad7) bg_popup_call_poc_inact_pane_g7

0xc06d,	// (0x0005fadf) bg_popup_call_poc_inact_pane_g8

0x1769,	// (0x000551db) popup_call_poc_inact_window_g2

0xc075,	// (0x0005fae7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0006305a) bg_popup_call_poc_inact_pane_g

0x1771,	// (0x000551e3) popup_call_poc_inact_window_t1_ParamLimits

0x1771,	// (0x000551e3) popup_call_poc_inact_window_t1

0x1786,	// (0x000551f8) popup_call_poc_inact_window_t2_ParamLimits

0x1786,	// (0x000551f8) popup_call_poc_inact_window_t2

0x179b,	// (0x0005520d) popup_call_poc_inact_window_t3_ParamLimits

0x179b,	// (0x0005520d) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00062fe4) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00062fe4) popup_call_poc_inact_window_t

0xc22d,	// (0x0005fc9f) context_pane_ParamLimits

0x65fc,	// (0x0005a06e) signal_pane_ParamLimits

0x1366,	// (0x00054dd8) main_call2_pane

0xc21b,	// (0x0005fc8d) popup_phob_thumbnail2_window_ParamLimits

0xc21b,	// (0x0005fc8d) popup_phob_thumbnail2_window

0xbf69,	// (0x0005f9db) aid_hotspot_pointer_arrow_pane

0xbf71,	// (0x0005f9e3) aid_hotspot_pointer_hand_pane

0x6112,	// (0x00059b84) phob_pre_status_pane_g5

0x3e7d,	// (0x000578ef) cams_zoom_pane_ParamLimits

0x3e8c,	// (0x000578fe) image_vga_pane_ParamLimits

0x3ea6,	// (0x00057918) main_camera_pane_g1_ParamLimits

0x3eb8,	// (0x0005792a) main_camera_pane_g2_ParamLimits

0x3ec8,	// (0x0005793a) main_camera_pane_g3_ParamLimits

0x3ed8,	// (0x0005794a) main_camera_pane_g4_ParamLimits

0x3ee8,	// (0x0005795a) main_camera_pane_g5_ParamLimits

0x3ef8,	// (0x0005796a) main_camera_pane_g6_ParamLimits

0x3f0a,	// (0x0005797c) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00062ce3) main_camera_pane_g_ParamLimits

0x3f1a,	// (0x0005798c) main_camera_pane_t1_ParamLimits

0x3f30,	// (0x000579a2) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00062cf4) main_camera_pane_t_ParamLimits

0x07a8,	// (0x0005421a) bg_popup_preview_window_pane_cp01_ParamLimits

0x07a8,	// (0x0005421a) bg_popup_preview_window_pane_cp01

0x17b0,	// (0x00055222) popup_phob_thumbnail2_window_g1_ParamLimits

0x17b0,	// (0x00055222) popup_phob_thumbnail2_window_g1

0xbb59,	// (0x0005f5cb) call2_cli_visual_pane

0x5ca5,	// (0x00059717) popup_call2_audio_conf_window_ParamLimits

0x5ca5,	// (0x00059717) popup_call2_audio_conf_window

0x5cc5,	// (0x00059737) popup_call2_audio_first_window_ParamLimits

0x5cc5,	// (0x00059737) popup_call2_audio_first_window

0x5d5b,	// (0x000597cd) popup_call2_audio_in_window_ParamLimits

0x5d5b,	// (0x000597cd) popup_call2_audio_in_window

0x5da3,	// (0x00059815) popup_call2_audio_out_window_ParamLimits

0x5da3,	// (0x00059815) popup_call2_audio_out_window

0x5e0d,	// (0x0005987f) popup_call2_audio_second_window_ParamLimits

0x5e0d,	// (0x0005987f) popup_call2_audio_second_window

0x5e73,	// (0x000598e5) popup_call2_audio_wait_window_ParamLimits

0x5e73,	// (0x000598e5) popup_call2_audio_wait_window

0xbb59,	// (0x0005f5cb) bg_popup_call2_act_pane_cp03

0xbd96,	// (0x0005f808) list_conf_pane_cp

0x17bc,	// (0x0005522e) popup_call2_audio_conf_window_t1

0x1157,	// (0x00054bc9) list_single_graphic_popup_conf2_pane_ParamLimits

0x1157,	// (0x00054bc9) list_single_graphic_popup_conf2_pane

0x116a,	// (0x00054bdc) list_highlight_pane_cp04

0x17ca,	// (0x0005523c) list_single_graphic_popup_conf2_pane_g1

0x117b,	// (0x00054bed) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00062feb) list_single_graphic_popup_conf2_pane_g

0x17d4,	// (0x00055246) list_single_graphic_popup_conf2_pane_t1

0x17e2,	// (0x00055254) bg_popup_call2_act_pane_cp01_ParamLimits

0x17e2,	// (0x00055254) bg_popup_call2_act_pane_cp01

0x186c,	// (0x000552de) call_type_pane_cp05_ParamLimits

0x186c,	// (0x000552de) call_type_pane_cp05

0x18c0,	// (0x00055332) popup_call2_audio_second_window_g1_ParamLimits

0x18c0,	// (0x00055332) popup_call2_audio_second_window_g1

0x1914,	// (0x00055386) popup_call2_audio_second_window_g2_ParamLimits

0x1914,	// (0x00055386) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00062ff0) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00062ff0) popup_call2_audio_second_window_g

0x1979,	// (0x000553eb) popup_call2_audio_second_window_t1_ParamLimits

0x1979,	// (0x000553eb) popup_call2_audio_second_window_t1

0x1a34,	// (0x000554a6) popup_call2_audio_second_window_t2_ParamLimits

0x1a34,	// (0x000554a6) popup_call2_audio_second_window_t2

0x1a87,	// (0x000554f9) popup_call2_audio_second_window_t3_ParamLimits

0x1a87,	// (0x000554f9) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00062ff7) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00062ff7) popup_call2_audio_second_window_t

0xbb59,	// (0x0005f5cb) bg_popup_call2_in_pane_cp02

0xbb63,	// (0x0005f5d5) call_type_pane_cp04

0xbb6b,	// (0x0005f5dd) popup_call2_audio_wait_window_g1

0xbb73,	// (0x0005f5e5) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00062bd0) popup_call2_audio_wait_window_g

0xbb7b,	// (0x0005f5ed) popup_call2_audio_wait_window_t3

0x1b7a,	// (0x000555ec) bg_popup_call2_act_pane_ParamLimits

0x1b7a,	// (0x000555ec) bg_popup_call2_act_pane

0x1c3a,	// (0x000556ac) call_type_pane_cp03_ParamLimits

0x1c3a,	// (0x000556ac) call_type_pane_cp03

0x1c9e,	// (0x00055710) popup_call2_audio_first_window_g1_ParamLimits

0x1c9e,	// (0x00055710) popup_call2_audio_first_window_g1

0x1d0e,	// (0x00055780) popup_call2_audio_first_window_g2_ParamLimits

0x1d0e,	// (0x00055780) popup_call2_audio_first_window_g2

0x1083,	// (0x00054af5) popup_call2_audio_first_window_g3_ParamLimits

0x1083,	// (0x00054af5) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00063000) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00063000) popup_call2_audio_first_window_g

0x1dec,	// (0x0005585e) popup_call2_audio_first_window_t1_ParamLimits

0x1dec,	// (0x0005585e) popup_call2_audio_first_window_t1

0x1eef,	// (0x00055961) popup_call2_audio_first_window_t4_ParamLimits

0x1eef,	// (0x00055961) popup_call2_audio_first_window_t4

0x1fd2,	// (0x00055a44) popup_call2_audio_first_window_t5_ParamLimits

0x1fd2,	// (0x00055a44) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0006300b) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0006300b) popup_call2_audio_first_window_t

0xbdac,	// (0x0005f81e) bg_popup_call2_act_pane_g1

0xc0cd,	// (0x0005fb3f) popup_cale_lunar_info_window_t1

0xc0db,	// (0x0005fb4d) popup_cale_lunar_info_window_t2

0xc0e9,	// (0x0005fb5b) popup_cale_lunar_info_window_t3

0xbb59,	// (0x0005f5cb) bg_popup_call2_bubble_pane

0x20d3,	// (0x00055b45) bg_popup_call2_in_pane_cp01_ParamLimits

0x20d3,	// (0x00055b45) bg_popup_call2_in_pane_cp01

0xb835,	// (0x0005f2a7) call_type_pane_cp02

0x211b,	// (0x00055b8d) popup_call2_audio_out_window_g1_ParamLimits

0x211b,	// (0x00055b8d) popup_call2_audio_out_window_g1

0x2147,	// (0x00055bb9) popup_call2_audio_out_window_g2_ParamLimits

0x2147,	// (0x00055bb9) popup_call2_audio_out_window_g2

0x216f,	// (0x00055be1) popup_call2_audio_out_window_g3_ParamLimits

0x216f,	// (0x00055be1) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00063014) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00063014) popup_call2_audio_out_window_g

0x21aa,	// (0x00055c1c) popup_call2_audio_out_window_t1_ParamLimits

0x21aa,	// (0x00055c1c) popup_call2_audio_out_window_t1

0x2209,	// (0x00055c7b) popup_call2_audio_out_window_t2_ParamLimits

0x2209,	// (0x00055c7b) popup_call2_audio_out_window_t2

0x225d,	// (0x00055ccf) popup_call2_audio_out_window_t3_ParamLimits

0x225d,	// (0x00055ccf) popup_call2_audio_out_window_t3

0x2273,	// (0x00055ce5) popup_call2_audio_out_window_t4_ParamLimits

0x2273,	// (0x00055ce5) popup_call2_audio_out_window_t4

0x2289,	// (0x00055cfb) popup_call2_audio_out_window_t5_ParamLimits

0x2289,	// (0x00055cfb) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0006301d) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0006301d) popup_call2_audio_out_window_t

0x22ed,	// (0x00055d5f) bg_popup_call2_in_pane_ParamLimits

0x22ed,	// (0x00055d5f) bg_popup_call2_in_pane

0x2349,	// (0x00055dbb) popup_call2_audio_in_window_g1_ParamLimits

0x2349,	// (0x00055dbb) popup_call2_audio_in_window_g1

0x2381,	// (0x00055df3) popup_call2_audio_in_window_g2_ParamLimits

0x2381,	// (0x00055df3) popup_call2_audio_in_window_g2

0x5ead,	// (0x0005991f) popup_call2_audio_in_window_g3_ParamLimits

0x5ead,	// (0x0005991f) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0006302a) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0006302a) popup_call2_audio_in_window_g

0x5f05,	// (0x00059977) popup_call2_audio_in_window_t1_ParamLimits

0x5f05,	// (0x00059977) popup_call2_audio_in_window_t1

0x5f85,	// (0x000599f7) popup_call2_audio_in_window_t2_ParamLimits

0x5f85,	// (0x000599f7) popup_call2_audio_in_window_t2

0xbf9f,	// (0x0005fa11) popup_call2_audio_in_window_t3_ParamLimits

0xbf9f,	// (0x0005fa11) popup_call2_audio_in_window_t3

0xbfb9,	// (0x0005fa2b) popup_call2_audio_in_window_t4_ParamLimits

0xbfb9,	// (0x0005fa2b) popup_call2_audio_in_window_t4

0xbfcb,	// (0x0005fa3d) popup_call2_audio_in_window_t5_ParamLimits

0xbfcb,	// (0x0005fa3d) popup_call2_audio_in_window_t5

0xbfe0,	// (0x0005fa52) popup_call2_audio_in_window_t6_ParamLimits

0xbfe0,	// (0x0005fa52) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00063033) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00063033) popup_call2_audio_in_window_t

0xbdac,	// (0x0005f81e) bg_popup_call2_in_pane_g1

0xc0f7,	// (0x0005fb69) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0006309b) popup_cale_lunar_info_window_t

0x07a8,	// (0x0005421a) bg_popup_call2_rect_pane_ParamLimits

0x07a8,	// (0x0005421a) bg_popup_call2_rect_pane

0xbb59,	// (0x0005f5cb) call2_cli_visual_graphic_pane

0xbb59,	// (0x0005f5cb) call2_cli_visual_text_pane

0xc2cd,	// (0x0005fd3f) smil_status_volume_pane_g3

0x0002,

0x08d4,	// (0x00054346) call2_cli_visual_graphic_pane_g1

0x08d4,	// (0x00054346) call2_cli_visual_graphic_pane_g2

0x08d4,	// (0x00054346) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00063040) call2_cli_visual_graphic_pane_g

0xbff5,	// (0x0005fa67) bg_popup_call2_rect_pane_g1

0x0960,	// (0x000543d2) bg_popup_call2_rect_pane_g2

0xbffd,	// (0x0005fa6f) bg_popup_call2_rect_pane_g3

0xc005,	// (0x0005fa77) bg_popup_call2_rect_pane_g4

0xc00d,	// (0x0005fa7f) bg_popup_call2_rect_pane_g5

0xc015,	// (0x0005fa87) bg_popup_call2_rect_pane_g6

0xc01d,	// (0x0005fa8f) bg_popup_call2_rect_pane_g7

0xc025,	// (0x0005fa97) bg_popup_call2_rect_pane_g8

0xc02d,	// (0x0005fa9f) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00063047) bg_popup_call2_rect_pane_g

0xc035,	// (0x0005faa7) bg_popup_call2_bubble_pane_g1

0xc03d,	// (0x0005faaf) bg_popup_call2_bubble_pane_g2

0xc045,	// (0x0005fab7) bg_popup_call2_bubble_pane_g3

0xc04d,	// (0x0005fabf) bg_popup_call2_bubble_pane_g4

0xc055,	// (0x0005fac7) bg_popup_call2_bubble_pane_g5

0xc05d,	// (0x0005facf) bg_popup_call2_bubble_pane_g6

0xc065,	// (0x0005fad7) bg_popup_call2_bubble_pane_g7

0xc06d,	// (0x0005fadf) bg_popup_call2_bubble_pane_g8

0xc075,	// (0x0005fae7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0006305a) bg_popup_call2_bubble_pane_g

0x3a26,	// (0x00057498) aid_cale_week_size_cell_pane

0x3f46,	// (0x000579b8) aid_cams_cif_uncrop_pane_ParamLimits

0x3f46,	// (0x000579b8) aid_cams_cif_uncrop_pane

0x40ff,	// (0x00057b71) aid_cams_size_cell_ParamLimits

0x40ff,	// (0x00057b71) aid_cams_size_cell

0x4113,	// (0x00057b85) grid_cams_pane_ParamLimits

0x412d,	// (0x00057b9f) linegrid_cams_pane_ParamLimits

0x42f4,	// (0x00057d66) call_video_pane_t1

0x4308,	// (0x00057d7a) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00062d47) call_video_pane_t

0x46ab,	// (0x0005811d) aid_cale_month_size_cell_pane_ParamLimits

0x46ab,	// (0x0005811d) aid_cale_month_size_cell_pane

0xf672,	// (0x000630e4) smil_status_volume_pane_g

0xc2da,	// (0x0005fd4c) volume_smil_pane_ParamLimits

0xb6f0,	// (0x0005f162) aid_popup2_width_pane

0x3988,	// (0x000573fa) cell_qdial_pane_g4_ParamLimits

0x3988,	// (0x000573fa) cell_qdial_pane_g4

0x51ca,	// (0x00058c3c) aid_blid_cardinal_pane_ParamLimits

0x51d6,	// (0x00058c48) aid_blid_destination_pane_ParamLimits

0x51d6,	// (0x00058c48) aid_blid_destination_pane

0x07a8,	// (0x0005421a) bg_popup_call_poc_act_pane_ParamLimits

0x07a8,	// (0x0005421a) bg_popup_call_poc_act_pane

0x07a8,	// (0x0005421a) bg_popup_call_poc_inact_pane_ParamLimits

0x07a8,	// (0x0005421a) bg_popup_call_poc_inact_pane

0xc07d,	// (0x0005faef) bg_popup_call_poc_act_pane_g1

0xc085,	// (0x0005faf7) bg_popup_call_poc_act_pane_g2

0xc08d,	// (0x0005faff) bg_popup_call_poc_act_pane_g3

0xc04d,	// (0x0005fabf) bg_popup_call_poc_act_pane_g4

0xc055,	// (0x0005fac7) bg_popup_call_poc_act_pane_g5

0xc095,	// (0x0005fb07) bg_popup_call_poc_act_pane_g6

0xc065,	// (0x0005fad7) bg_popup_call_poc_act_pane_g7

0xc09d,	// (0x0005fb0f) bg_popup_call_poc_act_pane_g8

0xbb59,	// (0x0005f5cb) main_usb_pane

0xc1f6,	// (0x0005fc68) popup_cale_lunar_info_window

0x4557,	// (0x00057fc9) im_reading_pane_t1_ParamLimits

0x0b23,	// (0x00054595) list_im_pane_ParamLimits

0x0b34,	// (0x000545a6) scroll_pane_cp07_ParamLimits

0xbb59,	// (0x0005f5cb) grid_highlight_pane_cp012

0x07a8,	// (0x0005421a) mup_scale_pane_ParamLimits

0x1511,	// (0x00054f83) main_usb_pane_g1_ParamLimits

0x1511,	// (0x00054f83) main_usb_pane_g1

0x6027,	// (0x00059a99) main_usb_pane_g2_ParamLimits

0x6027,	// (0x00059a99) main_usb_pane_g2

0x0001,

0xf612,	// (0x00063084) main_usb_pane_g_ParamLimits

0xf612,	// (0x00063084) main_usb_pane_g

0x603d,	// (0x00059aaf) main_usb_pane_t1_ParamLimits

0x603d,	// (0x00059aaf) main_usb_pane_t1

0x604f,	// (0x00059ac1) main_usb_pane_t2_ParamLimits

0x604f,	// (0x00059ac1) main_usb_pane_t2

0x6061,	// (0x00059ad3) main_usb_pane_t3_ParamLimits

0x6061,	// (0x00059ad3) main_usb_pane_t3

0x6073,	// (0x00059ae5) main_usb_pane_t4_ParamLimits

0x6073,	// (0x00059ae5) main_usb_pane_t4

0x6085,	// (0x00059af7) main_usb_pane_t5_ParamLimits

0x6085,	// (0x00059af7) main_usb_pane_t5

0x6097,	// (0x00059b09) main_usb_pane_t6_ParamLimits

0x6097,	// (0x00059b09) main_usb_pane_t6

0x0005,

0xf617,	// (0x00063089) main_usb_pane_t_ParamLimits

0x5179,	// (0x00058beb) aid_text_placing

0x5182,	// (0x00058bf4) main_location2_pane_t1_ParamLimits

0x5194,	// (0x00058c06) main_location2_pane_t2_ParamLimits

0x51a6,	// (0x00058c18) main_location2_pane_t3_ParamLimits

0x51b8,	// (0x00058c2a) main_location2_pane_t4_ParamLimits

0x51b8,	// (0x00058c2a) main_location2_pane_t4

0xf436,	// (0x00062ea8) main_location2_pane_t_ParamLimits

0x07e4,	// (0x00054256) find_pinb_pane_g2_ParamLimits

0x07e4,	// (0x00054256) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00062bf6) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00062bf6) find_pinb_pane_g

0x07f0,	// (0x00054262) find_pinb_pane_t1_ParamLimits

0x0802,	// (0x00054274) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00062bfb) find_pinb_pane_t_ParamLimits

0xbb59,	// (0x0005f5cb) main_call3_pane

0x49a7,	// (0x00058419) cale_month_day_heading_pane_t1_ParamLimits

0x4a05,	// (0x00058477) cale_month_day_heading_pane_t2_ParamLimits

0x4a6a,	// (0x000584dc) cale_month_day_heading_pane_t3_ParamLimits

0x4acf,	// (0x00058541) cale_month_day_heading_pane_t4_ParamLimits

0x4b34,	// (0x000585a6) cale_month_day_heading_pane_t5_ParamLimits

0x4b99,	// (0x0005860b) cale_month_day_heading_pane_t6_ParamLimits

0x4bfe,	// (0x00058670) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00062d7f) cale_month_day_heading_pane_t_ParamLimits

0x0d74,	// (0x000547e6) smil_status_volume_pane

0x59ca,	// (0x0005943c) postcard_address_pane_ParamLimits

0x59ca,	// (0x0005943c) postcard_address_pane

0x59dc,	// (0x0005944e) postcard_message_pane_ParamLimits

0x59dc,	// (0x0005944e) postcard_message_pane

0x6005,	// (0x00059a77) call2_cli_visual_pane_t1_ParamLimits

0x6005,	// (0x00059a77) call2_cli_visual_pane_t1

0x6829,	// (0x0005a29b) postcard_message_pane_t1_ParamLimits

0x6829,	// (0x0005a29b) postcard_message_pane_t1

0x6812,	// (0x0005a284) postcard_address_pane_t1_ParamLimits

0x6812,	// (0x0005a284) postcard_address_pane_t1

0x67fe,	// (0x0005a270) popup_call3_audio_in_window_ParamLimits

0x67fe,	// (0x0005a270) popup_call3_audio_in_window

0x6689,	// (0x0005a0fb) bg_popup_call3_in_pane_ParamLimits

0x6689,	// (0x0005a0fb) bg_popup_call3_in_pane

0x66ff,	// (0x0005a171) popup_call3_audio_in_window_g1_ParamLimits

0x66ff,	// (0x0005a171) popup_call3_audio_in_window_g1

0x671f,	// (0x0005a191) popup_call3_audio_in_window_g2_ParamLimits

0x671f,	// (0x0005a191) popup_call3_audio_in_window_g2

0x673f,	// (0x0005a1b1) popup_call3_audio_in_window_g3_ParamLimits

0x673f,	// (0x0005a1b1) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x000630eb) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x000630eb) popup_call3_audio_in_window_g

0x6770,	// (0x0005a1e2) popup_call3_audio_in_window_t1_ParamLimits

0x6770,	// (0x0005a1e2) popup_call3_audio_in_window_t1

0x67ae,	// (0x0005a220) popup_call3_audio_in_window_t2_ParamLimits

0x67ae,	// (0x0005a220) popup_call3_audio_in_window_t2

0x67ec,	// (0x0005a25e) popup_call3_audio_in_window_t3_ParamLimits

0x67ec,	// (0x0005a25e) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x000630f4) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x000630f4) popup_call3_audio_in_window_t

0x1366,	// (0x00054dd8) bg_popup_call3_rect_pane

0xbff5,	// (0x0005fa67) bg_popup_call3_rect_pane_g1

0x0960,	// (0x000543d2) bg_popup_call3_rect_pane_g2

0xbffd,	// (0x0005fa6f) bg_popup_call3_rect_pane_g3

0xc005,	// (0x0005fa77) bg_popup_call3_rect_pane_g4

0xc00d,	// (0x0005fa7f) bg_popup_call3_rect_pane_g5

0xc015,	// (0x0005fa87) bg_popup_call3_rect_pane_g6

0xc01d,	// (0x0005fa8f) bg_popup_call3_rect_pane_g7

0x558c,	// (0x00058ffe) mup_visualizer_osc_pane

0x1425,	// (0x00054e97) mup_visualizer_spec_pane

0x66b9,	// (0x0005a12b) call3_video_qcif_pane_ParamLimits

0x66b9,	// (0x0005a12b) call3_video_qcif_pane

0x66cc,	// (0x0005a13e) call3_video_qcif_uncrop_pane_ParamLimits

0x66cc,	// (0x0005a13e) call3_video_qcif_uncrop_pane

0x66da,	// (0x0005a14c) call3_video_subqcif_pane_ParamLimits

0x66da,	// (0x0005a14c) call3_video_subqcif_pane

0x66ee,	// (0x0005a160) call3_video_subqcif_uncrop_pane_ParamLimits

0x66ee,	// (0x0005a160) call3_video_subqcif_uncrop_pane

0x675f,	// (0x0005a1d1) popup_call3_audio_in_window_g4_ParamLimits

0x675f,	// (0x0005a1d1) popup_call3_audio_in_window_g4

0x6678,	// (0x0005a0ea) mup_spec_half_pane

0x6681,	// (0x0005a0f3) mup_spec_half_pane_cp

0xc28d,	// (0x0005fcff) mup_osc_middle_pane

0xc296,	// (0x0005fd08) mup_visualizer_osc_pane_g1

0x6658,	// (0x0005a0ca) mup_spec_bar_pane_ParamLimits

0x6658,	// (0x0005a0ca) mup_spec_bar_pane

0xc27a,	// (0x0005fcec) mup_spec_bar_pane_g1

0xc284,	// (0x0005fcf6) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000630df) mup_spec_bar_pane_g

0x3a26,	// (0x00057498) aid_cale_week_size_cell_pane_ParamLimits

0x3a39,	// (0x000574ab) bg_cale_heading_pane_ParamLimits

0x0994,	// (0x00054406) bg_cale_pane_cp01_ParamLimits

0x3a4d,	// (0x000574bf) cale_week_corner_pane_ParamLimits

0x3a63,	// (0x000574d5) cale_week_day_heading_pane_ParamLimits

0x3a77,	// (0x000574e9) cale_week_scroll_pane_g1_ParamLimits

0x3a88,	// (0x000574fa) cale_week_scroll_pane_g2_ParamLimits

0x3a99,	// (0x0005750b) cale_week_scroll_pane_g3_ParamLimits

0x3aaa,	// (0x0005751c) cale_week_scroll_pane_g4_ParamLimits

0x3abb,	// (0x0005752d) cale_week_scroll_pane_g5_ParamLimits

0x3acc,	// (0x0005753e) cale_week_scroll_pane_g6_ParamLimits

0x3add,	// (0x0005754f) cale_week_scroll_pane_g7_ParamLimits

0x3aee,	// (0x00057560) cale_week_scroll_pane_g8_ParamLimits

0x3aff,	// (0x00057571) cale_week_scroll_pane_g9_ParamLimits

0x3b10,	// (0x00057582) cale_week_scroll_pane_g10_ParamLimits

0x3b21,	// (0x00057593) cale_week_scroll_pane_g11_ParamLimits

0x3b32,	// (0x000575a4) cale_week_scroll_pane_g12_ParamLimits

0x3b43,	// (0x000575b5) cale_week_scroll_pane_g13_ParamLimits

0x3b54,	// (0x000575c6) cale_week_scroll_pane_g14_ParamLimits

0x3b65,	// (0x000575d7) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00062c87) cale_week_scroll_pane_g_ParamLimits

0x3b76,	// (0x000575e8) cale_week_time_pane_ParamLimits

0x3b87,	// (0x000575f9) grid_cale_week_pane_ParamLimits

0x09ad,	// (0x0005441f) listscroll_cale_week_pane_t1

0x3b9a,	// (0x0005760c) scroll_pane_cp08_ParamLimits

0x46ec,	// (0x0005815e) cale_month_corner_pane_ParamLimits

0x0d4a,	// (0x000547bc) cale_month_pane_t1

0x496e,	// (0x000583e0) cale_month_week_pane_ParamLimits

0x4fc5,	// (0x00058a37) popup_call_status_window_g1_ParamLimits

0x4fd9,	// (0x00058a4b) popup_call_status_window_g2_ParamLimits

0x4fed,	// (0x00058a5f) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00062e2f) popup_call_status_window_g_ParamLimits

0x10ea,	// (0x00054b5c) aid_call2_pane

0x57fc,	// (0x0005926e) msg_header_pane_g1

0x59ca,	// (0x0005943c) postcard_address2_pane_ParamLimits

0x59ca,	// (0x0005943c) postcard_address2_pane

0x59dc,	// (0x0005944e) postcard_message2_pane_ParamLimits

0x59dc,	// (0x0005944e) postcard_message2_pane

0x660a,	// (0x0005a07c) message2_row_pane_ParamLimits

0x660a,	// (0x0005a07c) message2_row_pane

0x6626,	// (0x0005a098) address2_row_pane_ParamLimits

0x6626,	// (0x0005a098) address2_row_pane

0xc248,	// (0x0005fcba) postcard_message2_row_pane_g1

0xc250,	// (0x0005fcc2) postcard_message2_row_pane_t1

0xc248,	// (0x0005fcba) address2_row_pane_g1

0xc250,	// (0x0005fcc2) address2_row_pane_t1

0x3e42,	// (0x000578b4) aid_size_cell_vorec

0xbb59,	// (0x0005f5cb) main_rss_pane

0x6639,	// (0x0005a0ab) rss_list_single_pane_ParamLimits

0x6639,	// (0x0005a0ab) rss_list_single_pane

0xc25e,	// (0x0005fcd0) rss_list_single_pane_t1

0xc26c,	// (0x0005fcde) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x000630da) rss_list_single_pane_t

0xbb59,	// (0x0005f5cb) main_camera2_pane

0xbb59,	// (0x0005f5cb) main_video2_pane

0x68a2,	// (0x0005a314) cams_zoom_pane_cp2_ParamLimits

0x68a2,	// (0x0005a314) cams_zoom_pane_cp2

0x68c2,	// (0x0005a334) image2_vga_pane_ParamLimits

0x68c2,	// (0x0005a334) image2_vga_pane

0x6913,	// (0x0005a385) main_camera2_pane_g1_ParamLimits

0x6913,	// (0x0005a385) main_camera2_pane_g1

0x6933,	// (0x0005a3a5) main_camera2_pane_g2_ParamLimits

0x6933,	// (0x0005a3a5) main_camera2_pane_g2

0x6953,	// (0x0005a3c5) main_camera2_pane_g3_ParamLimits

0x6953,	// (0x0005a3c5) main_camera2_pane_g3

0x6973,	// (0x0005a3e5) main_camera2_pane_g4_ParamLimits

0x6973,	// (0x0005a3e5) main_camera2_pane_g4

0x6993,	// (0x0005a405) main_camera2_pane_g5_ParamLimits

0x6993,	// (0x0005a405) main_camera2_pane_g5

0x69b3,	// (0x0005a425) main_camera2_pane_g6_ParamLimits

0x69b3,	// (0x0005a425) main_camera2_pane_g6

0x69d3,	// (0x0005a445) main_camera2_pane_g7_ParamLimits

0x69d3,	// (0x0005a445) main_camera2_pane_g7

0x69f3,	// (0x0005a465) main_camera2_pane_g8_ParamLimits

0x69f3,	// (0x0005a465) main_camera2_pane_g8

0x0008,

0xf689,	// (0x000630fb) main_camera2_pane_g_ParamLimits

0xf689,	// (0x000630fb) main_camera2_pane_g

0x6a33,	// (0x0005a4a5) main_camera2_pane_t1_ParamLimits

0x6a33,	// (0x0005a4a5) main_camera2_pane_t1

0x6a68,	// (0x0005a4da) main_camera2_pane_t2_ParamLimits

0x6a68,	// (0x0005a4da) main_camera2_pane_t2

0x6a8e,	// (0x0005a500) main_camera2_pane_t3_ParamLimits

0x6a8e,	// (0x0005a500) main_camera2_pane_t3

0x6aec,	// (0x0005a55e) main_camera2_pane_t4_ParamLimits

0x6aec,	// (0x0005a55e) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0006310e) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0006310e) main_camera2_pane_t

0x6b7e,	// (0x0005a5f0) cams_zoom_pane_cp4_ParamLimits

0x6b7e,	// (0x0005a5f0) cams_zoom_pane_cp4

0x6b94,	// (0x0005a606) image2_cif_pane_ParamLimits

0x6b94,	// (0x0005a606) image2_cif_pane

0x6bbf,	// (0x0005a631) image2_subqcif_pane_ParamLimits

0x6bbf,	// (0x0005a631) image2_subqcif_pane

0x6bd9,	// (0x0005a64b) main_video2_pane_g1_ParamLimits

0x6bd9,	// (0x0005a64b) main_video2_pane_g1

0x6bf3,	// (0x0005a665) main_video2_pane_g2_ParamLimits

0x6bf3,	// (0x0005a665) main_video2_pane_g2

0x6c09,	// (0x0005a67b) main_video2_pane_g3_ParamLimits

0x6c09,	// (0x0005a67b) main_video2_pane_g3

0x6c1f,	// (0x0005a691) main_video2_pane_g4_ParamLimits

0x6c1f,	// (0x0005a691) main_video2_pane_g4

0x6c35,	// (0x0005a6a7) main_video2_pane_g5_ParamLimits

0x6c35,	// (0x0005a6a7) main_video2_pane_g5

0x6c4b,	// (0x0005a6bd) main_video2_pane_g6_ParamLimits

0x6c4b,	// (0x0005a6bd) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0006311d) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0006311d) main_video2_pane_g

0x6c65,	// (0x0005a6d7) main_video2_pane_t1_ParamLimits

0x6c65,	// (0x0005a6d7) main_video2_pane_t1

0x6c89,	// (0x0005a6fb) main_video2_pane_t2_ParamLimits

0x6c89,	// (0x0005a6fb) main_video2_pane_t2

0x6cd7,	// (0x0005a749) main_video2_pane_t3_ParamLimits

0x6cd7,	// (0x0005a749) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0006312a) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0006312a) main_video2_pane_t

0x6152,	// (0x00059bc4) call_muted_g2

0x0001,

0xf65a,	// (0x000630cc) call_muted_g

0xbb59,	// (0x0005f5cb) main_mup2_pane

0x6d1b,	// (0x0005a78d) main_mup2_pane_g1_ParamLimits

0x6d1b,	// (0x0005a78d) main_mup2_pane_g1

0x6d27,	// (0x0005a799) main_mup2_pane_g2_ParamLimits

0x6d27,	// (0x0005a799) main_mup2_pane_g2

0xc3fe,	// (0x0005fe70) main_mup_pane_g13_cp1

0xc406,	// (0x0005fe78) mup_volume_pane_cp1

0x6d43,	// (0x0005a7b5) main_mup2_pane_g4_ParamLimits

0x6d43,	// (0x0005a7b5) main_mup2_pane_g4

0x6d55,	// (0x0005a7c7) main_mup2_pane_g5_ParamLimits

0x6d55,	// (0x0005a7c7) main_mup2_pane_g5

0x6d67,	// (0x0005a7d9) main_mup2_pane_g6_ParamLimits

0x6d67,	// (0x0005a7d9) main_mup2_pane_g6

0x6d79,	// (0x0005a7eb) main_mup2_pane_g7_ParamLimits

0x6d79,	// (0x0005a7eb) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x00063131) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x00063131) main_mup2_pane_g

0x6d91,	// (0x0005a803) main_mup2_pane_t1_ParamLimits

0x6d91,	// (0x0005a803) main_mup2_pane_t1

0x6da7,	// (0x0005a819) main_mup2_pane_t2_ParamLimits

0x6da7,	// (0x0005a819) main_mup2_pane_t2

0x6dbd,	// (0x0005a82f) main_mup2_pane_t3_ParamLimits

0x6dbd,	// (0x0005a82f) main_mup2_pane_t3

0x6dd3,	// (0x0005a845) main_mup2_pane_t4_ParamLimits

0x6dd3,	// (0x0005a845) main_mup2_pane_t4

0x6deb,	// (0x0005a85d) main_mup2_pane_t5_ParamLimits

0x6deb,	// (0x0005a85d) main_mup2_pane_t5

0x6e03,	// (0x0005a875) main_mup2_pane_t6_ParamLimits

0x6e03,	// (0x0005a875) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x00063140) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x00063140) main_mup2_pane_t

0x6e33,	// (0x0005a8a5) mup2_visualizer_pane_ParamLimits

0x6e33,	// (0x0005a8a5) mup2_visualizer_pane

0x6e61,	// (0x0005a8d3) mup_progress_pane_cp_ParamLimits

0x6e61,	// (0x0005a8d3) mup_progress_pane_cp

0xc3e0,	// (0x0005fe52) mup_volume_pane_cp_ParamLimits

0xc3e0,	// (0x0005fe52) mup_volume_pane_cp

0x6e75,	// (0x0005a8e7) mup2_visualizer_pane_g1_ParamLimits

0x6e75,	// (0x0005a8e7) mup2_visualizer_pane_g1

0xc31f,	// (0x0005fd91) mup2_visualizer_pane_g2_ParamLimits

0xc31f,	// (0x0005fd91) mup2_visualizer_pane_g2

0x6e8c,	// (0x0005a8fe) mup2_visualizer_pane_g3_ParamLimits

0x6e8c,	// (0x0005a8fe) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0006314d) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0006314d) mup2_visualizer_pane_g

0x164c,	// (0x000550be) aid_size_cell_fmradio

0x6304,	// (0x00059d76) aid_height_parent_landcape

0x0bb2,	// (0x00054624) wml_content_pane_cp

0x0bba,	// (0x0005462c) wml_tabs_pane

0x0bc3,	// (0x00054635) popup_wml_miniature_window

0x0bcb,	// (0x0005463d) scroll_pane_cp021

0x0bdf,	// (0x00054651) wml_content_pane_comp8

0xbb59,	// (0x0005f5cb) bg_popup_sub_pane_cp05

0xc33d,	// (0x0005fdaf) popup_wml_miniature_window_g1

0xc345,	// (0x0005fdb7) wml_miniature_view_pane

0x6e98,	// (0x0005a90a) aid_size_wml_view

0x6ea0,	// (0x0005a912) wml_miniature_view_pane_g1

0x6ea9,	// (0x0005a91b) wml_miniature_view_pane_g2

0x6eb2,	// (0x0005a924) wml_miniature_view_pane_g3

0x6eba,	// (0x0005a92c) wml_miniature_view_pane_g4

0x6ec2,	// (0x0005a934) wml_miniature_view_pane_g5

0x6eca,	// (0x0005a93c) wml_miniature_view_pane_g6

0x6ed2,	// (0x0005a944) wml_miniature_view_pane_g7

0x6eda,	// (0x0005a94c) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00063154) wml_miniature_view_pane_g

0xc34d,	// (0x0005fdbf) background_graphic_ParamLimits

0xc34d,	// (0x0005fdbf) background_graphic

0xc359,	// (0x0005fdcb) wml_tabs_2_pane

0xc362,	// (0x0005fdd4) wml_tabs_3_pane_ParamLimits

0xc362,	// (0x0005fdd4) wml_tabs_3_pane

0xc374,	// (0x0005fde6) wml_tabs_4_pane_ParamLimits

0xc374,	// (0x0005fde6) wml_tabs_4_pane

0xc38a,	// (0x0005fdfc) wml_tabs_5_pane_ParamLimits

0xc38a,	// (0x0005fdfc) wml_tabs_5_pane

0xc3a4,	// (0x0005fe16) wml_tabs_pane_g2_ParamLimits

0xc3a4,	// (0x0005fe16) wml_tabs_pane_g2

0xc3b8,	// (0x0005fe2a) wml_tabs_pane_g3_ParamLimits

0xc3b8,	// (0x0005fe2a) wml_tabs_pane_g3

0x6ee2,	// (0x0005a954) wml_tabs_2_active_pane_ParamLimits

0x6ee2,	// (0x0005a954) wml_tabs_2_active_pane

0x6ef6,	// (0x0005a968) wml_tabs_2_passive_pane_ParamLimits

0x6ef6,	// (0x0005a968) wml_tabs_2_passive_pane

0x6f0a,	// (0x0005a97c) wml_tabs_3_active_pane_cp_ParamLimits

0x6f0a,	// (0x0005a97c) wml_tabs_3_active_pane_cp

0x6f1f,	// (0x0005a991) wml_tabs_3_passive_pane_ParamLimits

0x6f1f,	// (0x0005a991) wml_tabs_3_passive_pane

0x6f32,	// (0x0005a9a4) wml_tabs_3_passive_pane_cp_ParamLimits

0x6f32,	// (0x0005a9a4) wml_tabs_3_passive_pane_cp

0x6f49,	// (0x0005a9bb) tabs_4_active_pane

0x6f51,	// (0x0005a9c3) tabs_4_passive_pane

0x6f5b,	// (0x0005a9cd) tabs_4_passive_pane_cp

0x6f63,	// (0x0005a9d5) tabs_4_passive_pane_cp2

0x601f,	// (0x00059a91) aid_height_text

0x5562,	// (0x00058fd4) mup_volume_cont_pane_ParamLimits

0x5562,	// (0x00058fd4) mup_volume_cont_pane

0x362b,	// (0x0005709d) aid_size_cell_pinb

0x3635,	// (0x000570a7) aid_size_list_pinb

0x6e4d,	// (0x0005a8bf) mup2_volume_cont_pane_ParamLimits

0x6e4d,	// (0x0005a8bf) mup2_volume_cont_pane

0xc3cc,	// (0x0005fe3e) mup2_volume_cont_pane_g1_ParamLimits

0xc3cc,	// (0x0005fe3e) mup2_volume_cont_pane_g1

0x32ff,	// (0x00056d71) aid_size_cell_touch_ParamLimits

0x32ff,	// (0x00056d71) aid_size_cell_touch

0x351b,	// (0x00056f8d) touch_pane_ParamLimits

0x351b,	// (0x00056f8d) touch_pane

0xb6de,	// (0x0005f150) main_rss2_pane

0xc40e,	// (0x0005fe80) listscroll_rss2_pane

0xc417,	// (0x0005fe89) rss2_navigation_pane

0xc41f,	// (0x0005fe91) list_rss2_pane

0x121d,	// (0x00054c8f) scroll_pane_cp22

0xc427,	// (0x0005fe99) rss2_navigation_pane_g1

0xc430,	// (0x0005fea2) rss2_navigation_pane_g2

0xc438,	// (0x0005feaa) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00063165) rss2_navigation_pane_g

0xc440,	// (0x0005feb2) rss2_navigation_pane_t1

0x6f6d,	// (0x0005a9df) rss2_list_single_pane_ParamLimits

0x6f6d,	// (0x0005a9df) rss2_list_single_pane

0xc44e,	// (0x0005fec0) rss2_list_single_pane_t2

0xc45c,	// (0x0005fece) rss2_list_single_pane_t3_ParamLimits

0xc45c,	// (0x0005fece) rss2_list_single_pane_t3

0xc479,	// (0x0005feeb) rss2_list_single_pane_t4

0x4de2,	// (0x00058854) smil_status_pane_g1

0x23b9,	// (0x00055e2b) main_image2_pane_ParamLimits

0x23b9,	// (0x00055e2b) main_image2_pane

0x6a13,	// (0x0005a485) main_camera2_pane_g9_ParamLimits

0x6a13,	// (0x0005a485) main_camera2_pane_g9

0x6b41,	// (0x0005a5b3) main_camera2_pane_t5_ParamLimits

0x6b41,	// (0x0005a5b3) main_camera2_pane_t5

0xc2ef,	// (0x0005fd61) main_camera2_pane_t6_ParamLimits

0xc2ef,	// (0x0005fd61) main_camera2_pane_t6

0x6f82,	// (0x0005a9f4) main_image2_pane_g1_ParamLimits

0x6f82,	// (0x0005a9f4) main_image2_pane_g1

0x5c03,	// (0x00059675) smil2_video_pane_ParamLimits

0x5c03,	// (0x00059675) smil2_video_pane

0x3337,	// (0x00056da9) aid_zoom_text_primary_cp

0xb73c,	// (0x0005f1ae) popup_preview_fixed_window

0x0b1b,	// (0x0005458d) im_reading_pane_g1

0x688a,	// (0x0005a2fc) cams2_bc_adjust_pane_cp_ParamLimits

0x688a,	// (0x0005a2fc) cams2_bc_adjust_pane_cp

0x6b70,	// (0x0005a5e2) cams2_bc_adjust_pane_ParamLimits

0x6b70,	// (0x0005a5e2) cams2_bc_adjust_pane

0xc487,	// (0x0005fef9) cams2_bc_adjust_pane_g1

0xc48f,	// (0x0005ff01) cams2_slider_pane

0xc498,	// (0x0005ff0a) cams2_slider_pane_g1

0xc4a1,	// (0x0005ff13) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0006316c) cams2_slider_pane_g

0x3717,	// (0x00057189) calc_display_pane_ParamLimits

0x373d,	// (0x000571af) calc_paper_pane_ParamLimits

0x375e,	// (0x000571d0) grid_calc_pane_ParamLimits

0xbf3a,	// (0x0005f9ac) popup_clock_digital_window_t1_ParamLimits

0x15e9,	// (0x0005505b) main_image_pane_t1

0x36f9,	// (0x0005716b) aid_size_cell_calc_ParamLimits

0x36f9,	// (0x0005716b) aid_size_cell_calc

0x634a,	// (0x00059dbc) popup_blid_sat_info2_window_ParamLimits

0x634a,	// (0x00059dbc) popup_blid_sat_info2_window

0xc4c3,	// (0x0005ff35) aid_size_cell_blid

0xc4cb,	// (0x0005ff3d) bg_popup_window_pane_cp07

0xc4ee,	// (0x0005ff60) grid_popup_blid_pane

0xc4f8,	// (0x0005ff6a) heading_pane_cp05_ParamLimits

0xc4f8,	// (0x0005ff6a) heading_pane_cp05

0xc5c2,	// (0x00060034) cell_popup_blid_pane_ParamLimits

0xc5c2,	// (0x00060034) cell_popup_blid_pane

0xc5e6,	// (0x00060058) cell_popup_blid_pane_g1

0xc5ee,	// (0x00060060) cell_popup_blid_pane_t1

0x6e1d,	// (0x0005a88f) mup2_indicator_pane_ParamLimits

0x6e1d,	// (0x0005a88f) mup2_indicator_pane

0x1366,	// (0x00054dd8) mup2_visualizer_osc_pane

0xc32b,	// (0x0005fd9d) mup2_visualizer_spec_pane_ParamLimits

0xc32b,	// (0x0005fd9d) mup2_visualizer_spec_pane

0x6f98,	// (0x0005aa0a) mup2_spec_half_pane

0x6fa1,	// (0x0005aa13) mup2_spec_half_pane_cp

0x6fa9,	// (0x0005aa1b) mup2_spec_bar_pane_ParamLimits

0x6fa9,	// (0x0005aa1b) mup2_spec_bar_pane

0xc27a,	// (0x0005fcec) mup2_spec_bar_pane_g1

0xc284,	// (0x0005fcf6) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x000630df) mup2_spec_bar_pane_g

0x6fc9,	// (0x0005aa3b) mup2_osc_middle_pane

0xc296,	// (0x0005fd08) mup2_visualizer_osc_pane_g1

0xb766,	// (0x0005f1d8) popup_number_entry_window_t1_ParamLimits

0xb779,	// (0x0005f1eb) popup_number_entry_window_t2_ParamLimits

0xb78b,	// (0x0005f1fd) popup_number_entry_window_t3_ParamLimits

0x356d,	// (0x00056fdf) popup_number_entry_window_t5_ParamLimits

0x356d,	// (0x00056fdf) popup_number_entry_window_t5

0xf12f,	// (0x00062ba1) popup_number_entry_window_t_ParamLimits

0xb79d,	// (0x0005f20f) text_title_cp2_ParamLimits

0xbf79,	// (0x0005f9eb) aid_hotspot_pointer_text2_pane

0xbf93,	// (0x0005fa05) main_viewer_pane_g9_ParamLimits

0xbf93,	// (0x0005fa05) main_viewer_pane_g9

0x0d4a,	// (0x000547bc) cale_month_pane_t1_ParamLimits

0x0d87,	// (0x000547f9) bg_cale_pane_ParamLimits

0x0d9f,	// (0x00054811) list_cale_pane_ParamLimits

0x09ad,	// (0x0005441f) listscroll_cale_day_pane_t1

0x0db0,	// (0x00054822) scroll_pane_cp09_ParamLimits

0x5594,	// (0x00059006) main_mup_eq_pane_t1_ParamLimits

0x5594,	// (0x00059006) main_mup_eq_pane_t1

0x55ae,	// (0x00059020) main_mup_eq_pane_t2_ParamLimits

0x55ae,	// (0x00059020) main_mup_eq_pane_t2

0x55c8,	// (0x0005903a) main_mup_eq_pane_t3_ParamLimits

0x55c8,	// (0x0005903a) main_mup_eq_pane_t3

0x55e4,	// (0x00059056) main_mup_eq_pane_t4_ParamLimits

0x55e4,	// (0x00059056) main_mup_eq_pane_t4

0x5600,	// (0x00059072) main_mup_eq_pane_t5_ParamLimits

0x5600,	// (0x00059072) main_mup_eq_pane_t5

0x561c,	// (0x0005908e) main_mup_eq_pane_t6_ParamLimits

0x561c,	// (0x0005908e) main_mup_eq_pane_t6

0x5630,	// (0x000590a2) main_mup_eq_pane_t7_ParamLimits

0x5630,	// (0x000590a2) main_mup_eq_pane_t7

0x5644,	// (0x000590b6) main_mup_eq_pane_t8_ParamLimits

0x5644,	// (0x000590b6) main_mup_eq_pane_t8

0x5658,	// (0x000590ca) main_mup_eq_pane_t9_ParamLimits

0x5658,	// (0x000590ca) main_mup_eq_pane_t9

0x5672,	// (0x000590e4) main_mup_eq_pane_t10_ParamLimits

0x5672,	// (0x000590e4) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00062f2e) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00062f2e) main_mup_eq_pane_t

0x5721,	// (0x00059193) mup_equalizer_pane_cp5_ParamLimits

0x5735,	// (0x000591a7) mup_equalizer_pane_cp6_ParamLimits

0x5749,	// (0x000591bb) mup_equalizer_pane_cp7_ParamLimits

0xb6de,	// (0x0005f150) main_gallery_pane

0xc29f,	// (0x0005fd11) smil2_volume_pane

0xc2a7,	// (0x0005fd19) smil_status_volume_pane_g1_ParamLimits

0xc2ba,	// (0x0005fd2c) smil_status_volume_pane_g2_ParamLimits

0xc2cd,	// (0x0005fd3f) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x000630e4) smil_status_volume_pane_g_ParamLimits

0xc4cb,	// (0x0005ff3d) bg_popup_window_pane_cp07_ParamLimits

0xc4d9,	// (0x0005ff4b) blid_firmament_pane

0x6fd2,	// (0x0005aa44) aid_size_cell_gallery_ParamLimits

0x6fd2,	// (0x0005aa44) aid_size_cell_gallery

0x6fe8,	// (0x0005aa5a) grid_gallery_pane_ParamLimits

0x6fe8,	// (0x0005aa5a) grid_gallery_pane

0x7001,	// (0x0005aa73) cell_gallery_pane_ParamLimits

0x7001,	// (0x0005aa73) cell_gallery_pane

0xc5fc,	// (0x0006006e) bg_cell_gallery_focus_pane_ParamLimits

0xc5fc,	// (0x0006006e) bg_cell_gallery_focus_pane

0xc60e,	// (0x00060080) cell_gallery_pane_g1_ParamLimits

0xc60e,	// (0x00060080) cell_gallery_pane_g1

0x704a,	// (0x0005aabc) cell_gallery_pane_g2_ParamLimits

0x704a,	// (0x0005aabc) cell_gallery_pane_g2

0x7057,	// (0x0005aac9) cell_gallery_pane_g3_ParamLimits

0x7057,	// (0x0005aac9) cell_gallery_pane_g3

0xc61a,	// (0x0006008c) cell_gallery_pane_g4_ParamLimits

0xc61a,	// (0x0006008c) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00063192) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00063192) cell_gallery_pane_g

0xc626,	// (0x00060098) bg_cell_gallery_focus_pane_g1

0xc62e,	// (0x000600a0) bg_cell_gallery_focus_pane_g2

0xc636,	// (0x000600a8) bg_cell_gallery_focus_pane_g3

0xc63e,	// (0x000600b0) bg_cell_gallery_focus_pane_g4

0xc646,	// (0x000600b8) bg_cell_gallery_focus_pane_g5

0xc64e,	// (0x000600c0) bg_cell_gallery_focus_pane_g6

0xc656,	// (0x000600c8) bg_cell_gallery_focus_pane_g7

0xc65e,	// (0x000600d0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0006319b) bg_cell_gallery_focus_pane_g

0xc666,	// (0x000600d8) aid_firma_cardinal

0xc67a,	// (0x000600ec) blid_firmament_pane_t1

0xc691,	// (0x00060103) blid_firmament_pane_t2

0xc6a8,	// (0x0006011a) blid_firmament_pane_t3

0xc6bf,	// (0x00060131) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x000631ac) blid_firmament_pane_t

0xc6d6,	// (0x00060148) blid_sat_info_pane

0xc6e6,	// (0x00060158) blid_sat_info_pane_g1

0xc6e6,	// (0x00060158) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x000631b5) blid_sat_info_pane_g

0xc6f0,	// (0x00060162) blid_sat_info_pane_t1

0xc6fe,	// (0x00060170) smil2_volume_content_pane

0xc707,	// (0x00060179) smil2_volume_pane_g1

0xc70f,	// (0x00060181) smil2_volume_content_pane_g1

0xc718,	// (0x0006018a) smil2_volume_content_pane_g2

0xc721,	// (0x00060193) smil2_volume_content_pane_g3

0xc72a,	// (0x0006019c) smil2_volume_content_pane_g4

0xc733,	// (0x000601a5) smil2_volume_content_pane_g5

0xc73c,	// (0x000601ae) smil2_volume_content_pane_g6

0xc745,	// (0x000601b7) smil2_volume_content_pane_g7

0xc74e,	// (0x000601c0) smil2_volume_content_pane_g8

0xc757,	// (0x000601c9) smil2_volume_content_pane_g9

0xc760,	// (0x000601d2) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x000631ba) smil2_volume_content_pane_g

0x3bf0,	// (0x00057662) cale_week_day_heading_pane_t1_ParamLimits

0x3c1d,	// (0x0005768f) cale_week_day_heading_pane_t2_ParamLimits

0x3c4a,	// (0x000576bc) cale_week_day_heading_pane_t3_ParamLimits

0x3c77,	// (0x000576e9) cale_week_day_heading_pane_t4_ParamLimits

0x3ca4,	// (0x00057716) cale_week_day_heading_pane_t5_ParamLimits

0x3cd1,	// (0x00057743) cale_week_day_heading_pane_t6_ParamLimits

0x3cfe,	// (0x00057770) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00062ca6) cale_week_day_heading_pane_t_ParamLimits

0x09bf,	// (0x00054431) bg_cale_side_pane_ParamLimits

0x3d2b,	// (0x0005779d) cale_week_time_pane_t1_ParamLimits

0x3d43,	// (0x000577b5) cale_week_time_pane_t2_ParamLimits

0x3d5b,	// (0x000577cd) cale_week_time_pane_t3_ParamLimits

0x3d73,	// (0x000577e5) cale_week_time_pane_t4_ParamLimits

0x3d8b,	// (0x000577fd) cale_week_time_pane_t5_ParamLimits

0x3da3,	// (0x00057815) cale_week_time_pane_t6_ParamLimits

0x3dbb,	// (0x0005782d) cale_week_time_pane_t7_ParamLimits

0x3dd3,	// (0x00057845) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00062cb5) cale_week_time_pane_t_ParamLimits

0x3deb,	// (0x0005785d) cell_cale_week_pane_g2_ParamLimits

0x09bf,	// (0x00054431) bg_cale_side_pane_cp01_ParamLimits

0x4c63,	// (0x000586d5) cale_month_week_pane_t1_ParamLimits

0x4c7a,	// (0x000586ec) cale_month_week_pane_t2_ParamLimits

0x4c91,	// (0x00058703) cale_month_week_pane_t3_ParamLimits

0x4ca8,	// (0x0005871a) cale_month_week_pane_t4_ParamLimits

0x4cbf,	// (0x00058731) cale_month_week_pane_t5_ParamLimits

0x4cd6,	// (0x00058748) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00062d8e) cale_month_week_pane_t_ParamLimits

0xbeb6,	// (0x0005f928) cell_cale_month_pane_g1_ParamLimits

0xb6de,	// (0x0005f150) main_cale_event_viewer_pane

0xb6de,	// (0x0005f150) listscroll_cale_event_viewer_pane

0xc769,	// (0x000601db) list_cale_ev_pane

0xc771,	// (0x000601e3) scroll_pane_cp023

0xc77d,	// (0x000601ef) field_cale_ev_pane_ParamLimits

0xc77d,	// (0x000601ef) field_cale_ev_pane

0xc79b,	// (0x0006020d) field_cale_ev_content_pane_ParamLimits

0xc79b,	// (0x0006020d) field_cale_ev_content_pane

0xc7a7,	// (0x00060219) field_cale_ev_pane_g1_ParamLimits

0xc7a7,	// (0x00060219) field_cale_ev_pane_g1

0xc7b3,	// (0x00060225) field_cale_ev_pane_g2_ParamLimits

0xc7b3,	// (0x00060225) field_cale_ev_pane_g2

0xc7cb,	// (0x0006023d) field_cale_ev_pane_g3_ParamLimits

0xc7cb,	// (0x0006023d) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x000631cf) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x000631cf) field_cale_ev_pane_g

0xc7e3,	// (0x00060255) field_cale_ev_pane_t1_ParamLimits

0xc7e3,	// (0x00060255) field_cale_ev_pane_t1

0xc7fa,	// (0x0006026c) field_cale_ev_content_pane_t1_ParamLimits

0xc7fa,	// (0x0006026c) field_cale_ev_content_pane_t1

0x14cf,	// (0x00054f41) bg_button_pane_cp01

0x087f,	// (0x000542f1) listscroll_cale_week_pane_ParamLimits

0x3a1c,	// (0x0005748e) popup_toolbar_window_cp01

0x09ad,	// (0x0005441f) listscroll_cale_week_pane_t1_ParamLimits

0x087f,	// (0x000542f1) listscroll_cale_day_pane_ParamLimits

0x4e33,	// (0x000588a5) popup_toolbar_window_cp02

0x09ad,	// (0x0005441f) listscroll_cale_day_pane_t1_ParamLimits

0x087f,	// (0x000542f1) main_cale_month_pane_ParamLimits

0x657e,	// (0x00059ff0) popup_toolbar_window_cp03_ParamLimits

0x657e,	// (0x00059ff0) popup_toolbar_window_cp03

0x5acb,	// (0x0005953d) main_image_pane_g2_ParamLimits

0x5acb,	// (0x0005953d) main_image_pane_g2

0x5adc,	// (0x0005954e) main_image_pane_g3_ParamLimits

0x5adc,	// (0x0005954e) main_image_pane_g3

0x0002,

0xf54e,	// (0x00062fc0) main_image_pane_g_ParamLimits

0xf54e,	// (0x00062fc0) main_image_pane_g

0x15e9,	// (0x0005505b) main_image_pane_t1_ParamLimits

0x5aed,	// (0x0005955f) main_image_pane_t2_ParamLimits

0x5aed,	// (0x0005955f) main_image_pane_t2

0x5aff,	// (0x00059571) main_image_pane_t3_ParamLimits

0x5aff,	// (0x00059571) main_image_pane_t3

0x5b27,	// (0x00059599) main_image_pane_t4_ParamLimits

0x5b27,	// (0x00059599) main_image_pane_t4

0x0003,

0xf555,	// (0x00062fc7) main_image_pane_t_ParamLimits

0xf555,	// (0x00062fc7) main_image_pane_t

0x5b47,	// (0x000595b9) popup_image_details_window_cp01

0x5b51,	// (0x000595c3) popup_toobar_trans_pane_cp01_ParamLimits

0x5b51,	// (0x000595c3) popup_toobar_trans_pane_cp01

0x6429,	// (0x00059e9b) popup_image_details_window_ParamLimits

0x6429,	// (0x00059e9b) popup_image_details_window

0xc200,	// (0x0005fc72) popup_image_focus_window

0x6844,	// (0x0005a2b6) camera2_autofocus_pane_ParamLimits

0x6844,	// (0x0005a2b6) camera2_autofocus_pane

0xb6de,	// (0x0005f150) bg_popup_sub_pane_cp06

0xc818,	// (0x0006028a) popup_image_focus_window_g1

0xc820,	// (0x00060292) popup_image_focus_window_g2

0xc828,	// (0x0006029a) popup_image_focus_window_g3

0xc830,	// (0x000602a2) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x000631d6) popup_image_focus_window_g

0xc838,	// (0x000602aa) popup_image_focus_window_t1

0xc846,	// (0x000602b8) popup_image_focus_window_t2

0xc856,	// (0x000602c8) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x000631df) popup_image_focus_window_t

0xc864,	// (0x000602d6) camera2_autofocus_pane_g1

0x23b9,	// (0x00055e2b) bg_tb_trans_pane_cp01

0xc872,	// (0x000602e4) popup_image_details_window_g1

0xc885,	// (0x000602f7) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x000631f1) popup_image_details_window_g

0xc8ae,	// (0x00060320) popup_image_details_window_t1

0xc8c0,	// (0x00060332) popup_image_details_window_t2

0xc8d9,	// (0x0006034b) popup_image_details_window_t3

0xc8ed,	// (0x0006035f) popup_image_details_window_t4

0xc908,	// (0x0006037a) popup_image_details_window_t5

0x0004,

0xf786,	// (0x000631f8) popup_image_details_window_t

0x086b,	// (0x000542dd) bg_calc_paper_pane_ParamLimits

0xbdbc,	// (0x0005f82e) grid_highlight_pane_cp013

0xbdc6,	// (0x0005f838) list_calc_pane_ParamLimits

0xbdd8,	// (0x0005f84a) scroll_pane_cp024

0x087f,	// (0x000542f1) bg_calc_display_pane_ParamLimits

0x384d,	// (0x000572bf) calc_display_pane_t1_ParamLimits

0x385f,	// (0x000572d1) calc_display_pane_t2_ParamLimits

0xbde0,	// (0x0005f852) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00062c28) calc_display_pane_t_ParamLimits

0x3919,	// (0x0005738b) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00062c45) cell_calc_pane_g

0x3922,	// (0x00057394) cell_calc_pane_t1

0x08de,	// (0x00054350) grid_highlight_pane_cp02_ParamLimits

0x08f4,	// (0x00054366) toolbar_button_pane_cp01_ParamLimits

0x08f4,	// (0x00054366) toolbar_button_pane_cp01

0x162e,	// (0x000550a0) temp_image_control_pane_ParamLimits

0x162e,	// (0x000550a0) temp_image_control_pane

0x23b9,	// (0x00055e2b) main_mp3_pane

0xc922,	// (0x00060394) temp_image_control_pane_g1_ParamLimits

0xc922,	// (0x00060394) temp_image_control_pane_g1

0xc930,	// (0x000603a2) temp_image_control_pane_g2_ParamLimits

0xc930,	// (0x000603a2) temp_image_control_pane_g2

0xc942,	// (0x000603b4) temp_image_control_pane_g3_ParamLimits

0xc942,	// (0x000603b4) temp_image_control_pane_g3

0x7094,	// (0x0005ab06) temp_image_control_pane_g4_ParamLimits

0x7094,	// (0x0005ab06) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00063203) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00063203) temp_image_control_pane_g

0xc922,	// (0x00060394) main_mp3_pane_g1

0x70a7,	// (0x0005ab19) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0006320c) main_mp3_pane_g

0xc985,	// (0x000603f7) main_mp3_pane_t1

0x0a24,	// (0x00054496) main_camera_pane_g8_ParamLimits

0x0a24,	// (0x00054496) main_camera_pane_g8

0x40a5,	// (0x00057b17) main_video_pane_g7_ParamLimits

0x40a5,	// (0x00057b17) main_video_pane_g7

0xc30d,	// (0x0005fd7f) main_camera2_pane_t7_ParamLimits

0xc30d,	// (0x0005fd7f) main_camera2_pane_t7

0x0b72,	// (0x000545e4) scroll_pane_cp025_ParamLimits

0x0b72,	// (0x000545e4) scroll_pane_cp025

0x0b86,	// (0x000545f8) scroll_pane_cp026_ParamLimits

0x0b86,	// (0x000545f8) scroll_pane_cp026

0x0b95,	// (0x00054607) wml_content_pane_ParamLimits

0xb6de,	// (0x0005f150) main_touch_calib_pane

0x7170,	// (0x0005abe2) main_touch_calib_pane_g1

0x717c,	// (0x0005abee) main_touch_calib_pane_g2

0x7188,	// (0x0005abfa) main_touch_calib_pane_g3

0x7194,	// (0x0005ac06) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0006322a) main_touch_calib_pane_g

0x71a0,	// (0x0005ac12) main_touch_calib_pane_t1

0x71ba,	// (0x0005ac2c) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x00063233) main_touch_calib_pane_t

0x12a7,	// (0x00054d19) mup_progress_pane_cp02

0x12c6,	// (0x00054d38) navi_pane_g1

0x1328,	// (0x00054d9a) navi_pane_mp_t3

0x23b9,	// (0x00055e2b) main_mp3_pane_ParamLimits

0x65bc,	// (0x0005a02e) navi_pane_ParamLimits

0xc922,	// (0x00060394) main_mp3_pane_g1_ParamLimits

0x70a7,	// (0x0005ab19) main_mp3_pane_g2_ParamLimits

0x70b5,	// (0x0005ab27) main_mp3_pane_g3_ParamLimits

0x70b5,	// (0x0005ab27) main_mp3_pane_g3

0x70c3,	// (0x0005ab35) main_mp3_pane_g4_ParamLimits

0x70c3,	// (0x0005ab35) main_mp3_pane_g4

0xc952,	// (0x000603c4) main_mp3_pane_g5_ParamLimits

0xc952,	// (0x000603c4) main_mp3_pane_g5

0xc960,	// (0x000603d2) main_mp3_pane_g6_ParamLimits

0xc960,	// (0x000603d2) main_mp3_pane_g6

0xc96d,	// (0x000603df) main_mp3_pane_g7_ParamLimits

0xc96d,	// (0x000603df) main_mp3_pane_g7

0xc979,	// (0x000603eb) main_mp3_pane_g8_ParamLimits

0xc979,	// (0x000603eb) main_mp3_pane_g8

0xf79a,	// (0x0006320c) main_mp3_pane_g_ParamLimits

0x70cf,	// (0x0005ab41) main_mp3_pane_t2

0x70dd,	// (0x0005ab4f) main_mp3_pane_t3

0xc993,	// (0x00060405) main_mp3_pane_t4

0xc9a1,	// (0x00060413) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0006321d) main_mp3_pane_t

0xc9af,	// (0x00060421) mup_progress_pane_cp01

0x3337,	// (0x00056da9) aid_zoom_text_secondary2

0xc769,	// (0x000601db) list_cale_ev2_pane

0xc771,	// (0x000601e3) scroll_pane_cp023_ParamLimits

0x7210,	// (0x0005ac82) field_cale_ev2_pane_ParamLimits

0x7210,	// (0x0005ac82) field_cale_ev2_pane

0xc9b7,	// (0x00060429) field_cale_ev2_pane_g1_ParamLimits

0xc9b7,	// (0x00060429) field_cale_ev2_pane_g1

0xc9c3,	// (0x00060435) field_cale_ev2_pane_g2_ParamLimits

0xc9c3,	// (0x00060435) field_cale_ev2_pane_g2

0xc9db,	// (0x0006044d) field_cale_ev2_pane_g3_ParamLimits

0xc9db,	// (0x0006044d) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0006323e) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0006323e) field_cale_ev2_pane_g

0x7230,	// (0x0005aca2) field_cale_ev2_pane_t1_ParamLimits

0x7230,	// (0x0005aca2) field_cale_ev2_pane_t1

0x7247,	// (0x0005acb9) field_cale_ev2_pane_t2_ParamLimits

0x7247,	// (0x0005acb9) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00063247) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00063247) field_cale_ev2_pane_t

0x5980,	// (0x000593f2) main_postcard_pane_g5_ParamLimits

0x5980,	// (0x000593f2) main_postcard_pane_g5

0x5996,	// (0x00059408) main_postcard_pane_g6_ParamLimits

0x5996,	// (0x00059408) main_postcard_pane_g6

0x3e65,	// (0x000578d7) camera2_autofocus_pane_cp_ParamLimits

0x3e65,	// (0x000578d7) camera2_autofocus_pane_cp

0x23b9,	// (0x00055e2b) main_mup3_pane

0x727c,	// (0x0005acee) main_mup3_pane_g1_ParamLimits

0x727c,	// (0x0005acee) main_mup3_pane_g1

0x729e,	// (0x0005ad10) main_mup3_pane_g2_ParamLimits

0x729e,	// (0x0005ad10) main_mup3_pane_g2

0x731c,	// (0x0005ad8e) main_mup3_pane_g3_ParamLimits

0x731c,	// (0x0005ad8e) main_mup3_pane_g3

0x735e,	// (0x0005add0) main_mup3_pane_g4_ParamLimits

0x735e,	// (0x0005add0) main_mup3_pane_g4

0x73a0,	// (0x0005ae12) main_mup3_pane_g5_ParamLimits

0x73a0,	// (0x0005ae12) main_mup3_pane_g5

0x73e2,	// (0x0005ae54) main_mup3_pane_g6_ParamLimits

0x73e2,	// (0x0005ae54) main_mup3_pane_g6

0xc9ff,	// (0x00060471) main_mup3_pane_g7_ParamLimits

0xc9ff,	// (0x00060471) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00063257) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00063257) main_mup3_pane_g

0x745c,	// (0x0005aece) main_mup3_pane_t1_ParamLimits

0x745c,	// (0x0005aece) main_mup3_pane_t1

0x74cc,	// (0x0005af3e) main_mup3_pane_t2_ParamLimits

0x74cc,	// (0x0005af3e) main_mup3_pane_t2

0x759c,	// (0x0005b00e) main_mup3_pane_t4_ParamLimits

0x759c,	// (0x0005b00e) main_mup3_pane_t4

0x75f2,	// (0x0005b064) main_mup3_pane_t5_ParamLimits

0x75f2,	// (0x0005b064) main_mup3_pane_t5

0x76a6,	// (0x0005b118) main_mup3_pane_t6_ParamLimits

0x76a6,	// (0x0005b118) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00063268) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00063268) main_mup3_pane_t

0x775a,	// (0x0005b1cc) mup3_progress_pane_ParamLimits

0x775a,	// (0x0005b1cc) mup3_progress_pane

0x77dc,	// (0x0005b24e) popup_mup3_control_window_ParamLimits

0x77dc,	// (0x0005b24e) popup_mup3_control_window

0xca0d,	// (0x0006047f) popup_mup3_text_window

0x780e,	// (0x0005b280) mup3_progress_pane_t1

0x7825,	// (0x0005b297) mup3_progress_pane_t2

0xca15,	// (0x00060487) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00063275) mup3_progress_pane_t

0xca2c,	// (0x0006049e) mup_progress_pane_cp03

0xb6de,	// (0x0005f150) bg_tb_trans_pane_cp04

0x783c,	// (0x0005b2ae) mup3_volume_pane

0x7844,	// (0x0005b2b6) popup_mup3_control_window_g1

0x784d,	// (0x0005b2bf) mup3_volume_pane_g1

0x7856,	// (0x0005b2c8) mup3_volume_pane_g2

0x785f,	// (0x0005b2d1) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0006327c) mup3_volume_pane_g

0xb6de,	// (0x0005f150) bg_tb_trans_pane_cp03

0xca3c,	// (0x000604ae) popup_mup3_text_window_g1

0xca44,	// (0x000604b6) popup_mup3_text_window_t1

0x08c7,	// (0x00054339) list_calc_item_pane_g1_ParamLimits

0xc3f5,	// (0x0005fe67) mup_volume_pane_cp_g1

0x71d4,	// (0x0005ac46) main_touch_calib_pane_t3

0x71e8,	// (0x0005ac5a) main_touch_calib_pane_t4

0x71fc,	// (0x0005ac6e) main_touch_calib_pane_t5

0xb6e8,	// (0x0005f15a) aid_cell_size_toolbar2

0xb6f0,	// (0x0005f162) aid_popup3_width_pane

0x332f,	// (0x00056da1) aid_zoom_text_msg_primary

0xbea0,	// (0x0005f912) vorec_t7

0x088b,	// (0x000542fd) bg_calc_paper_pane_g1_ParamLimits

0x0897,	// (0x00054309) bg_calc_paper_pane_g2_ParamLimits

0x08a3,	// (0x00054315) bg_calc_paper_pane_g3_ParamLimits

0x08af,	// (0x00054321) bg_calc_paper_pane_g4_ParamLimits

0x08bb,	// (0x0005432d) bg_calc_paper_pane_g5_ParamLimits

0x38a6,	// (0x00057318) bg_calc_paper_pane_g6_ParamLimits

0x38b5,	// (0x00057327) bg_calc_paper_pane_g7_ParamLimits

0x38c4,	// (0x00057336) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00062c2f) bg_calc_paper_pane_g_ParamLimits

0x38d7,	// (0x00057349) calc_bg_paper_pane_g9_ParamLimits

0x3fb3,	// (0x00057a25) image_qvga_pane_ParamLimits

0x3fb3,	// (0x00057a25) image_qvga_pane

0x07a8,	// (0x0005421a) bg_popup_sub_pane_cp04_ParamLimits

0x1565,	// (0x00054fd7) popup_mup_playback_window_g1_ParamLimits

0x1571,	// (0x00054fe3) popup_mup_playback_window_t1_ParamLimits

0x1586,	// (0x00054ff8) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00062fbb) popup_mup_playback_window_t_ParamLimits

0x6d37,	// (0x0005a7a9) main_mup2_pane_g3_ParamLimits

0x6d37,	// (0x0005a7a9) main_mup2_pane_g3

0x4360,	// (0x00057dd2) popup_toolbar_window_cp04

0x1968,	// (0x000553da) popup_call2_audio_second_window_g3_ParamLimits

0x1968,	// (0x000553da) popup_call2_audio_second_window_g3

0x1d72,	// (0x000557e4) popup_call2_audio_first_window_g4_ParamLimits

0x1d72,	// (0x000557e4) popup_call2_audio_first_window_g4

0x5ee5,	// (0x00059957) popup_call2_audio_in_window_g4_ParamLimits

0x5ee5,	// (0x00059957) popup_call2_audio_in_window_g4

0x5aad,	// (0x0005951f) aid_area_sk_bg_cut_ParamLimits

0x5aad,	// (0x0005951f) aid_area_sk_bg_cut

0x159b,	// (0x0005500d) aid_area_sk_bg_cut_2_ParamLimits

0x159b,	// (0x0005500d) aid_area_sk_bg_cut_2

0x703a,	// (0x0005aaac) aid_placing_details_win

0x7042,	// (0x0005aab4) aid_placing_details_win_2

0xc864,	// (0x000602d6) camera2_autofocus_pane_g1_ParamLimits

0x34c6,	// (0x00056f38) popup_fixed_preview_cale_window_ParamLimits

0x34c6,	// (0x00056f38) popup_fixed_preview_cale_window

0x1377,	// (0x00054de9) navi_slider_pane_g3

0x1380,	// (0x00054df2) navi_slider_pane_g4

0x1389,	// (0x00054dfb) navi_slider_pane_g5

0x1377,	// (0x00054de9) navi_slider_pane_g6

0xbf60,	// (0x0005f9d2) navi_slider_pane_g7

0x149c,	// (0x00054f0e) mup_scale_pane_g3

0x14a5,	// (0x00054f17) mup_scale_pane_g4

0x14ae,	// (0x00054f20) mup_scale_pane_g5

0x575d,	// (0x000591cf) mup_scale_pane_g6

0x5766,	// (0x000591d8) mup_scale_pane_g7

0x1377,	// (0x00054de9) cams2_slider_pane_g3

0xc4aa,	// (0x0005ff1c) cams2_slider_pane_g4

0xc4b2,	// (0x0005ff24) cams2_slider_pane_g5

0x1377,	// (0x00054de9) cams2_slider_pane_g6

0xc4ba,	// (0x0005ff2c) cams2_slider_pane_g7

0xc6e6,	// (0x00060158) camera2_autofocus_pane_cp_g1

0xca52,	// (0x000604c4) bg_popup_preview_window_pane_cp02_ParamLimits

0xca52,	// (0x000604c4) bg_popup_preview_window_pane_cp02

0xca5e,	// (0x000604d0) list_fp_cale_pane_ParamLimits

0xca5e,	// (0x000604d0) list_fp_cale_pane

0xca6a,	// (0x000604dc) popup_fixed_preview_cale_window_t1_ParamLimits

0xca6a,	// (0x000604dc) popup_fixed_preview_cale_window_t1

0x7868,	// (0x0005b2da) popup_fixed_preview_cale_window_t2_ParamLimits

0x7868,	// (0x0005b2da) popup_fixed_preview_cale_window_t2

0x787d,	// (0x0005b2ef) popup_fixed_preview_cale_window_t3_ParamLimits

0x787d,	// (0x0005b2ef) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00063283) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00063283) popup_fixed_preview_cale_window_t

0x7892,	// (0x0005b304) list_single_fp_cale_pane_ParamLimits

0x7892,	// (0x0005b304) list_single_fp_cale_pane

0xca88,	// (0x000604fa) list_single_fp_cale_pane_g1_ParamLimits

0xca88,	// (0x000604fa) list_single_fp_cale_pane_g1

0xca94,	// (0x00060506) list_single_fp_cale_pane_g2_ParamLimits

0xca94,	// (0x00060506) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0006328a) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0006328a) list_single_fp_cale_pane_g

0xcaad,	// (0x0006051f) list_single_fp_cale_pane_t1_ParamLimits

0xcaad,	// (0x0006051f) list_single_fp_cale_pane_t1

0xcabf,	// (0x00060531) list_single_fp_cale_pane_t2_ParamLimits

0xcabf,	// (0x00060531) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00063291) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00063291) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb6de,	// (0x0005f150) main_dialer_pane

0x78a7,	// (0x0005b319) aid_cell_size_keypad

0x78b1,	// (0x0005b323) dialer_ne_pane

0x78b9,	// (0x0005b32b) grid_dialer_command_1_pane

0x78c1,	// (0x0005b333) grid_dialer_command_2_pane

0x78c9,	// (0x0005b33b) grid_dialer_keypad_pane

0x78db,	// (0x0005b34d) bg_popup_call_pane_cp06_ParamLimits

0x78db,	// (0x0005b34d) bg_popup_call_pane_cp06

0x78e7,	// (0x0005b359) dialer_ne_clear_pane_ParamLimits

0x78e7,	// (0x0005b359) dialer_ne_clear_pane

0xcaf2,	// (0x00060564) dialer_ne_pane_g1

0xcafa,	// (0x0006056c) dialer_ne_pane_t1_ParamLimits

0xcafa,	// (0x0006056c) dialer_ne_pane_t1

0x78f3,	// (0x0005b365) dialer_ne_pane_t2_ParamLimits

0x78f3,	// (0x0005b365) dialer_ne_pane_t2

0x791d,	// (0x0005b38f) dialer_ne_pane_t3_ParamLimits

0x791d,	// (0x0005b38f) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x00063296) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x00063296) dialer_ne_pane_t

0x794d,	// (0x0005b3bf) dialer_ne_pane_t3_copy1_ParamLimits

0x794d,	// (0x0005b3bf) dialer_ne_pane_t3_copy1

0x797c,	// (0x0005b3ee) cell_dialer_keypad_pane_ParamLimits

0x797c,	// (0x0005b3ee) cell_dialer_keypad_pane

0x7993,	// (0x0005b405) cell_dialer_command_1_pane_ParamLimits

0x7993,	// (0x0005b405) cell_dialer_command_1_pane

0x79a9,	// (0x0005b41b) cell_dialer_command_2_pane_ParamLimits

0x79a9,	// (0x0005b41b) cell_dialer_command_2_pane

0xcb0c,	// (0x0006057e) bg_button_pane_cp02_ParamLimits

0xcb0c,	// (0x0006057e) bg_button_pane_cp02

0x79b8,	// (0x0005b42a) cell_dialer_keypad_pane_g1_ParamLimits

0x79b8,	// (0x0005b42a) cell_dialer_keypad_pane_g1

0xcb0c,	// (0x0006057e) bg_button_pane_cp03_ParamLimits

0xcb0c,	// (0x0006057e) bg_button_pane_cp03

0x79cc,	// (0x0005b43e) cell_dialer_command_1_pane_g1_ParamLimits

0x79cc,	// (0x0005b43e) cell_dialer_command_1_pane_g1

0xcb18,	// (0x0006058a) bg_button_pane_cp04

0x79e0,	// (0x0005b452) cell_dialer_command_2_pane_g1

0x1366,	// (0x00054dd8) bg_button_pane_cp06

0xcb20,	// (0x00060592) dialer_ne_clear_pane_g1

0x52a1,	// (0x00058d13) navi_pane_g2

0x52cf,	// (0x00058d41) navi_pane_g3

0x0002,

0xf44c,	// (0x00062ebe) navi_pane_g

0x52f8,	// (0x00058d6a) navi_pane_mv_g2

0x531f,	// (0x00058d91) navi_pane_mv_g5

0x5327,	// (0x00058d99) navi_pane_mv_t1

0x087f,	// (0x000542f1) main_clock2_pane

0x7a14,	// (0x0005b486) main_clock2_list_pane_ParamLimits

0x7a14,	// (0x0005b486) main_clock2_list_pane

0x7a4a,	// (0x0005b4bc) main_clock2_pane_t1_ParamLimits

0x7a4a,	// (0x0005b4bc) main_clock2_pane_t1

0x7a86,	// (0x0005b4f8) main_clock2_pane_t2_ParamLimits

0x7a86,	// (0x0005b4f8) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0006329d) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0006329d) main_clock2_pane_t

0x7b10,	// (0x0005b582) popup_clock_analogue_window_cp03_ParamLimits

0x7b10,	// (0x0005b582) popup_clock_analogue_window_cp03

0x7b35,	// (0x0005b5a7) popup_clock_digital_window_cp02_ParamLimits

0x7b35,	// (0x0005b5a7) popup_clock_digital_window_cp02

0x7ba6,	// (0x0005b618) main_clock2_list_single_pane_ParamLimits

0x7ba6,	// (0x0005b618) main_clock2_list_single_pane

0x1366,	// (0x00054dd8) list_highlight_pane_cp05

0xcb28,	// (0x0006059a) main_clock2_list_single_pane_t1

0x4360,	// (0x00057dd2) popup_toolbar_window_cp04_ParamLimits

0x7064,	// (0x0005aad6) camera2_autofocus_pane_g2_ParamLimits

0x7064,	// (0x0005aad6) camera2_autofocus_pane_g2

0x7070,	// (0x0005aae2) camera2_autofocus_pane_g3_ParamLimits

0x7070,	// (0x0005aae2) camera2_autofocus_pane_g3

0x707c,	// (0x0005aaee) camera2_autofocus_pane_g4_ParamLimits

0x707c,	// (0x0005aaee) camera2_autofocus_pane_g4

0x7088,	// (0x0005aafa) camera2_autofocus_pane_g5_ParamLimits

0x7088,	// (0x0005aafa) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x000631e6) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x000631e6) camera2_autofocus_pane_g

0x725c,	// (0x0005acce) camera2_autofocus_pane_cp_g2

0x7264,	// (0x0005acd6) camera2_autofocus_pane_cp_g3

0x726c,	// (0x0005acde) camera2_autofocus_pane_cp_g4

0x7274,	// (0x0005ace6) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0006324c) camera2_autofocus_pane_cp_g

0x78d3,	// (0x0005b345) popup_dialer_spcha_window

0xb6de,	// (0x0005f150) bg_popup_sub_pane_cp07

0xcb36,	// (0x000605a8) list_spcha_pane

0xcb3e,	// (0x000605b0) list_single_spcha_pane_ParamLimits

0xcb3e,	// (0x000605b0) list_single_spcha_pane

0xb6de,	// (0x0005f150) list_highlight_pane_cp06

0xcb4f,	// (0x000605c1) list_single_spcha_pane_t1

0x219b,	// (0x00055c0d) popup_call2_audio_out_window_g4_ParamLimits

0x219b,	// (0x00055c0d) popup_call2_audio_out_window_g4

0xb6de,	// (0x0005f150) main_imed2_pane

0xc208,	// (0x0005fc7a) popup_imed_adjust2_window

0x6441,	// (0x00059eb3) popup_imed_trans_window_ParamLimits

0x6441,	// (0x00059eb3) popup_imed_trans_window

0xc524,	// (0x0005ff96) popup_blid_sat_info2_window_t1

0xc532,	// (0x0005ffa4) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0006317b) popup_blid_sat_info2_window_t

0x7c50,	// (0x0005b6c2) aid_size_cell_colour_35

0x7c70,	// (0x0005b6e2) aid_size_cell_colour_112

0x7c90,	// (0x0005b702) aid_size_cell_effect

0xc1e0,	// (0x0005fc52) bg_tb_trans_pane_cp02

0x0ea7,	// (0x00054919) heading_imed_pane

0x7cb0,	// (0x0005b722) listscroll_imed_pane

0xcb5d,	// (0x000605cf) heading_imed_pane_g1

0xcb65,	// (0x000605d7) heading_imed_pane_t1

0xcb73,	// (0x000605e5) grid_imed_colour_35_pane_ParamLimits

0xcb73,	// (0x000605e5) grid_imed_colour_35_pane

0x7cbc,	// (0x0005b72e) grid_imed_effect_pane

0xcb8a,	// (0x000605fc) list_imed_aspect_pane

0x7cd2,	// (0x0005b744) scroll_pane_cp027_ParamLimits

0x7cd2,	// (0x0005b744) scroll_pane_cp027

0x7ce3,	// (0x0005b755) cell_imed_effect_pane_ParamLimits

0x7ce3,	// (0x0005b755) cell_imed_effect_pane

0xcb92,	// (0x00060604) cell_imed_colour_pane_ParamLimits

0xcb92,	// (0x00060604) cell_imed_colour_pane

0xcbd4,	// (0x00060646) cell_imed_colour_pane_g1_ParamLimits

0xcbd4,	// (0x00060646) cell_imed_colour_pane_g1

0xcbe5,	// (0x00060657) hgihlgiht_grid_pane_cp016_ParamLimits

0xcbe5,	// (0x00060657) hgihlgiht_grid_pane_cp016

0x7d0a,	// (0x0005b77c) cell_imed_effect_pane_g1

0x7d12,	// (0x0005b784) grid_highlight_pane_cp017

0xcbf6,	// (0x00060668) list_imed_single_pane_ParamLimits

0xcbf6,	// (0x00060668) list_imed_single_pane

0xb6de,	// (0x0005f150) list_highlight_pane_cp07

0xcc0b,	// (0x0006067d) list_imed_aspect_pane_comp1_t1

0xc1e0,	// (0x0005fc52) bg_tb_trans_pane_cp05

0xcc2d,	// (0x0006069f) popup_imed_adjust2_window_g1

0xcc54,	// (0x000606c6) popup_imed_adjust2_window_t1

0xcc6c,	// (0x000606de) slider_imed_adjust_pane

0xcc80,	// (0x000606f2) slider_imed_adjust_pane_g1

0xcc90,	// (0x00060702) slider_imed_adjust_pane_g2

0xcca0,	// (0x00060712) slider_imed_adjust_pane_g3

0xccb1,	// (0x00060723) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x000632ba) slider_imed_adjust_pane_g

0x7d1b,	// (0x0005b78d) aid_size_cell_clipart2

0x7d27,	// (0x0005b799) grid_imed_clipart_pane

0xccc2,	// (0x00060734) scroll_pane_cp031

0x7d31,	// (0x0005b7a3) cell_imed_clipart_pane_ParamLimits

0x7d31,	// (0x0005b7a3) cell_imed_clipart_pane

0x7d53,	// (0x0005b7c5) cell_imed_clipart_pane_g1

0xb6de,	// (0x0005f150) grid_highlight_pane_cp014

0x7a29,	// (0x0005b49b) main_clock2_pane_g1_ParamLimits

0x7a29,	// (0x0005b49b) main_clock2_pane_g1

0x7b51,	// (0x0005b5c3) aid_call2_pane_cp10

0x7b63,	// (0x0005b5d5) aid_call_pane_cp10

0x129b,	// (0x00054d0d) popup_clock_analogue_window_cp10_g1

0x129b,	// (0x00054d0d) popup_clock_analogue_window_cp10_g2

0x7b75,	// (0x0005b5e7) popup_clock_analogue_window_cp10_g3

0x7b75,	// (0x0005b5e7) popup_clock_analogue_window_cp10_g4

0x129b,	// (0x00054d0d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x000632a8) popup_clock_analogue_window_cp10_g

0x7b87,	// (0x0005b5f9) popup_clock_analogue_window_cp10_t1

0x7bb8,	// (0x0005b62a) clock_digital_number_pane_cp10_ParamLimits

0x7bb8,	// (0x0005b62a) clock_digital_number_pane_cp10

0x7bd0,	// (0x0005b642) clock_digital_number_pane_cp11_ParamLimits

0x7bd0,	// (0x0005b642) clock_digital_number_pane_cp11

0x7be8,	// (0x0005b65a) clock_digital_number_pane_cp12_ParamLimits

0x7be8,	// (0x0005b65a) clock_digital_number_pane_cp12

0x7c00,	// (0x0005b672) clock_digital_number_pane_cp13_ParamLimits

0x7c00,	// (0x0005b672) clock_digital_number_pane_cp13

0x7c18,	// (0x0005b68a) clock_digital_separator_pane_cp10_ParamLimits

0x7c18,	// (0x0005b68a) clock_digital_separator_pane_cp10

0x7c30,	// (0x0005b6a2) popup_clock_digital_window_cp02_t1_ParamLimits

0x7c30,	// (0x0005b6a2) popup_clock_digital_window_cp02_t1

0xbdac,	// (0x0005f81e) clock_digital_number_pane_cp10_g1

0xbdac,	// (0x0005f81e) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x000632c3) clock_digital_number_pane_cp10_g

0xbdac,	// (0x0005f81e) clock_digital_separator_pane_cp10_g1

0xbdac,	// (0x0005f81e) clock_digital_separator_pane_g2_cp10

0x1336,	// (0x00054da8) navi_pane_vded_g4

0x133f,	// (0x00054db1) navi_pane_vded_g5

0x1348,	// (0x00054dba) navi_pane_vded_t1

0xb6de,	// (0x0005f150) main_vded_pane

0x7d5c,	// (0x0005b7ce) main_vded_pane_g1

0x7d66,	// (0x0005b7d8) main_vded_pane_g2

0x7d70,	// (0x0005b7e2) main_vded_pane_g3

0x0002,

0xf856,	// (0x000632c8) main_vded_pane_g

0x7d7a,	// (0x0005b7ec) main_vded_pane_t1

0x7d88,	// (0x0005b7fa) main_vded_pane_t2

0x0001,

0xf85d,	// (0x000632cf) main_vded_pane_t

0x7d96,	// (0x0005b808) vded_slider_pane

0x7d9e,	// (0x0005b810) vded_video_pane

0xccca,	// (0x0006073c) vded_video_pane_g1

0x7da6,	// (0x0005b818) vded_video_pane_g2

0xc6e6,	// (0x00060158) vded_video_pane_g3

0x0002,

0xf862,	// (0x000632d4) vded_video_pane_g

0xccd4,	// (0x00060746) vded_slider_pane_g1

0xc3f5,	// (0x0005fe67) vded_slider_pane_g2

0xccdd,	// (0x0006074f) vded_slider_pane_g3

0xcce6,	// (0x00060758) vded_slider_pane_g4

0xccef,	// (0x00060761) vded_slider_pane_g5

0x0004,

0xf869,	// (0x000632db) vded_slider_pane_g

0x77c4,	// (0x0005b236) mup3_rocker_pane_ParamLimits

0x77c4,	// (0x0005b236) mup3_rocker_pane

0x7daf,	// (0x0005b821) mup3_control_keys_pane_g1

0x7db7,	// (0x0005b829) mup3_control_keys_pane_g2

0x7dbf,	// (0x0005b831) mup3_control_keys_pane_g3

0x7dc7,	// (0x0005b839) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x000632e6) mup3_control_keys_pane_g

0x34fd,	// (0x00056f6f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x34fd,	// (0x00056f6f) popup_toolbar2_fixed_window_cp01

0x77f8,	// (0x0005b26a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x77f8,	// (0x0005b26a) popup_toolbar2_fixed_window_cp02

0x1ada,	// (0x0005554c) popup_call2_audio_second_window_t4_ParamLimits

0x1ada,	// (0x0005554c) popup_call2_audio_second_window_t4

0x2008,	// (0x00055a7a) popup_call2_audio_first_window_t6_ParamLimits

0x2008,	// (0x00055a7a) popup_call2_audio_first_window_t6

0x229e,	// (0x00055d10) popup_call2_audio_out_window_t6_ParamLimits

0x229e,	// (0x00055d10) popup_call2_audio_out_window_t6

0xb6de,	// (0x0005f150) main_vitu_pane

0x7dd7,	// (0x0005b849) aid_size_cell_itu_ParamLimits

0x7dd7,	// (0x0005b849) aid_size_cell_itu

0x23b9,	// (0x00055e2b) bg_popup_window_pane_cp08_ParamLimits

0x23b9,	// (0x00055e2b) bg_popup_window_pane_cp08

0x7ded,	// (0x0005b85f) field_vitu_entry_pane_ParamLimits

0x7ded,	// (0x0005b85f) field_vitu_entry_pane

0x7e04,	// (0x0005b876) grid_vitu_function_pane_ParamLimits

0x7e04,	// (0x0005b876) grid_vitu_function_pane

0x7e1f,	// (0x0005b891) grid_vitu_itu_pane_ParamLimits

0x7e1f,	// (0x0005b891) grid_vitu_itu_pane

0x7e3d,	// (0x0005b8af) cell_vitu_itu_pane_ParamLimits

0x7e3d,	// (0x0005b8af) cell_vitu_itu_pane

0x7e5f,	// (0x0005b8d1) cell_vitu_function_pane_ParamLimits

0x7e5f,	// (0x0005b8d1) cell_vitu_function_pane

0x23b9,	// (0x00055e2b) bg_popup_sub_pane_cp08_ParamLimits

0x23b9,	// (0x00055e2b) bg_popup_sub_pane_cp08

0x7e78,	// (0x0005b8ea) field_vitu_entry_pane_t1_ParamLimits

0x7e78,	// (0x0005b8ea) field_vitu_entry_pane_t1

0xcd10,	// (0x00060782) field_vitu_entry_pane_t2_ParamLimits

0xcd10,	// (0x00060782) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x000632f4) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x000632f4) field_vitu_entry_pane_t

0xcd2d,	// (0x0006079f) bg_button_pane_cp05_ParamLimits

0xcd2d,	// (0x0006079f) bg_button_pane_cp05

0x7e96,	// (0x0005b908) cell_vitu_itu_pane_g1

0x7eae,	// (0x0005b920) cell_vitu_itu_pane_t1_ParamLimits

0x7eae,	// (0x0005b920) cell_vitu_itu_pane_t1

0x7ec0,	// (0x0005b932) cell_vitu_itu_pane_t2_ParamLimits

0x7ec0,	// (0x0005b932) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x000632f9) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x000632f9) cell_vitu_itu_pane_t

0xcd3b,	// (0x000607ad) bg_button_pane_cp07

0x7ef5,	// (0x0005b967) cell_vitu_function_pane_g1

0xbdb4,	// (0x0005f826) main_calc_pane_g1

0x3323,	// (0x00056d95) aid_visual_content_pane

0xb6de,	// (0x0005f150) main_vradio_pane

0x7efe,	// (0x0005b970) main_vradio_pane_g1_ParamLimits

0x7efe,	// (0x0005b970) main_vradio_pane_g1

0xcd45,	// (0x000607b7) main_vradio_pane_g2_ParamLimits

0xcd45,	// (0x000607b7) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00063300) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00063300) main_vradio_pane_g

0x7f17,	// (0x0005b989) main_vradio_pane_t1_ParamLimits

0x7f17,	// (0x0005b989) main_vradio_pane_t1

0x7f2c,	// (0x0005b99e) main_vradio_pane_t2_ParamLimits

0x7f2c,	// (0x0005b99e) main_vradio_pane_t2

0xcd52,	// (0x000607c4) main_vradio_pane_t3_ParamLimits

0xcd52,	// (0x000607c4) main_vradio_pane_t3

0x0002,

0xf893,	// (0x00063305) main_vradio_pane_t_ParamLimits

0xf893,	// (0x00063305) main_vradio_pane_t

0x7f41,	// (0x0005b9b3) vradio_rocker_control_pane_ParamLimits

0x7f41,	// (0x0005b9b3) vradio_rocker_control_pane

0x7f53,	// (0x0005b9c5) vradio_station_info_pane_ParamLimits

0x7f53,	// (0x0005b9c5) vradio_station_info_pane

0xcd66,	// (0x000607d8) vradio_frequency_info_pane_ParamLimits

0xcd66,	// (0x000607d8) vradio_frequency_info_pane

0xc6e6,	// (0x00060158) vradio_station_info_pane_g1

0xcd75,	// (0x000607e7) vradio_station_info_pane_t1_ParamLimits

0xcd75,	// (0x000607e7) vradio_station_info_pane_t1

0xcd97,	// (0x00060809) vradio_station_info_pane_t2_ParamLimits

0xcd97,	// (0x00060809) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0006330c) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0006330c) vradio_station_info_pane_t

0xcda9,	// (0x0006081b) vradio_tuning_pane

0xcdb1,	// (0x00060823) vradio_rocker_control_pane_g1

0xcdb9,	// (0x0006082b) vradio_rocker_control_pane_g2

0xcdc1,	// (0x00060833) vradio_rocker_control_pane_g3

0xcdc9,	// (0x0006083b) vradio_rocker_control_pane_g4

0xcdd1,	// (0x00060843) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00063311) vradio_rocker_control_pane_g

0x7f65,	// (0x0005b9d7) vradio_frequency_info_pane_g1

0xcdd9,	// (0x0006084b) vradio_frequency_info_pane_t1_ParamLimits

0xcdd9,	// (0x0006084b) vradio_frequency_info_pane_t1

0x7f6f,	// (0x0005b9e1) vradio_tuning_pane_g1

0x7f7a,	// (0x0005b9ec) vradio_tuning_pane_t1

0xb704,	// (0x0005f176) area_side_right_pane_ParamLimits

0xb704,	// (0x0005f176) area_side_right_pane

0xc1a7,	// (0x0005fc19) status_small_pane_g1

0xc1af,	// (0x0005fc21) status_small_pane_g2

0xc1b8,	// (0x0005fc2a) status_small_pane_g3

0xc1c1,	// (0x0005fc33) status_small_pane_g4

0x0003,

0xf65f,	// (0x000630d1) status_small_pane_g

0xc1ca,	// (0x0005fc3c) status_small_pane_t1

0xb6de,	// (0x0005f150) main_video3_pane

0xcded,	// (0x0006085f) cams_zoom_vslider_pane

0xcdf5,	// (0x00060867) image3_wide_pane_ParamLimits

0xcdf5,	// (0x00060867) image3_wide_pane

0xce0f,	// (0x00060881) image3_wide_small_pane

0xce1b,	// (0x0006088d) main_video3_pane_g1_ParamLimits

0xce1b,	// (0x0006088d) main_video3_pane_g1

0xce37,	// (0x000608a9) main_video3_pane_g2_ParamLimits

0xce37,	// (0x000608a9) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0006331c) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0006331c) main_video3_pane_g

0xce53,	// (0x000608c5) main_video3_pane_t1_ParamLimits

0xce53,	// (0x000608c5) main_video3_pane_t1

0xce7e,	// (0x000608f0) main_video3_pane_t2_ParamLimits

0xce7e,	// (0x000608f0) main_video3_pane_t2

0xcea9,	// (0x0006091b) main_video3_pane_t3_ParamLimits

0xcea9,	// (0x0006091b) main_video3_pane_t3

0x0002,

0xf8af,	// (0x00063321) main_video3_pane_t_ParamLimits

0xf8af,	// (0x00063321) main_video3_pane_t

0xced6,	// (0x00060948) cams_zoom_vslider_pane_g1

0xcedf,	// (0x00060951) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00063328) cams_zoom_vslider_pane_g

0xcee7,	// (0x00060959) small_slider_vertical_pane

0xc6e6,	// (0x00060158) small_slider_vertical_pane_g1

0xc6e6,	// (0x00060158) small_slider_vertical_pane_g2

0xceef,	// (0x00060961) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0006332d) small_slider_vertical_pane_g

0xb6de,	// (0x0005f150) main_hwr_training_pane

0xcef8,	// (0x0006096a) hwr_training_instruct_pane_ParamLimits

0xcef8,	// (0x0006096a) hwr_training_instruct_pane

0x7f89,	// (0x0005b9fb) hwr_training_navi_pane_ParamLimits

0x7f89,	// (0x0005b9fb) hwr_training_navi_pane

0x7fa8,	// (0x0005ba1a) hwr_training_write_pane_ParamLimits

0x7fa8,	// (0x0005ba1a) hwr_training_write_pane

0xb6de,	// (0x0005f150) bg_frame_shadow_pane

0xcf2f,	// (0x000609a1) hwr_training_write_pane_g1

0xcf37,	// (0x000609a9) hwr_training_write_pane_g2

0xcf3f,	// (0x000609b1) hwr_training_write_pane_g3

0xcf47,	// (0x000609b9) hwr_training_write_pane_g4

0xcf4f,	// (0x000609c1) hwr_training_write_pane_g5

0xcf57,	// (0x000609c9) hwr_training_write_pane_g6

0xcf5f,	// (0x000609d1) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x00063334) hwr_training_write_pane_g

0xed40,	// (0x000627b2) hwr_training_navi_pane_g1_ParamLimits

0xed40,	// (0x000627b2) hwr_training_navi_pane_g1

0xed52,	// (0x000627c4) hwr_training_navi_pane_g2_ParamLimits

0xed52,	// (0x000627c4) hwr_training_navi_pane_g2

0xed64,	// (0x000627d6) hwr_training_navi_pane_g3_ParamLimits

0xed64,	// (0x000627d6) hwr_training_navi_pane_g3

0xed74,	// (0x000627e6) hwr_training_navi_pane_g4_ParamLimits

0xed74,	// (0x000627e6) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x00063343) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x00063343) hwr_training_navi_pane_g

0xed81,	// (0x000627f3) hwr_training_navi_pane_t1

0x7ff0,	// (0x0005ba62) list_single_hwr_training_instruct_pane_ParamLimits

0x7ff0,	// (0x0005ba62) list_single_hwr_training_instruct_pane

0xcf67,	// (0x000609d9) list_single_hwr_training_instruct_pane_t1

0xc626,	// (0x00060098) bg_frame_shadow_pane_g1

0xcf76,	// (0x000609e8) bg_frame_shadow_pane_g2

0xcf7e,	// (0x000609f0) bg_frame_shadow_pane_g3

0xcf86,	// (0x000609f8) bg_frame_shadow_pane_g4

0xcf8e,	// (0x00060a00) bg_frame_shadow_pane_g5

0xcf96,	// (0x00060a08) bg_frame_shadow_pane_g6

0xcf9e,	// (0x00060a10) bg_frame_shadow_pane_g7

0x0938,	// (0x000543aa) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0006334e) bg_frame_shadow_pane_g

0xb6de,	// (0x0005f150) main_video_tele_dialer_pane

0x8005,	// (0x0005ba77) aid_size_cell_video_keypad_ParamLimits

0x8005,	// (0x0005ba77) aid_size_cell_video_keypad

0x801f,	// (0x0005ba91) grid_video_dialer_keypad_pane_ParamLimits

0x801f,	// (0x0005ba91) grid_video_dialer_keypad_pane

0x806b,	// (0x0005badd) video_down_pane_cp_ParamLimits

0x806b,	// (0x0005badd) video_down_pane_cp

0x809f,	// (0x0005bb11) cell_video_dialer_keypad_pane_ParamLimits

0x809f,	// (0x0005bb11) cell_video_dialer_keypad_pane

0xcfa6,	// (0x00060a18) bg_button_pane_cp08_ParamLimits

0xcfa6,	// (0x00060a18) bg_button_pane_cp08

0x80c1,	// (0x0005bb33) cell_video_dialer_keypad_pane_g1_ParamLimits

0x80c1,	// (0x0005bb33) cell_video_dialer_keypad_pane_g1

0x77ae,	// (0x0005b220) mup3_rocker2_pane_ParamLimits

0x77ae,	// (0x0005b220) mup3_rocker2_pane

0xc6e6,	// (0x00060158) mup3_rocker2_pane_g1

0x6322,	// (0x00059d94) main_dialer2_pane

0xb6de,	// (0x0005f150) main_mp4_pane

0xed97,	// (0x00062809) main_mp4_pane_g1_ParamLimits

0xed97,	// (0x00062809) main_mp4_pane_g1

0xed97,	// (0x00062809) main_mp4_pane_g2_ParamLimits

0xed97,	// (0x00062809) main_mp4_pane_g2

0x80fb,	// (0x0005bb6d) main_mp4_pane_g3_ParamLimits

0x80fb,	// (0x0005bb6d) main_mp4_pane_g3

0xeda5,	// (0x00062817) main_mp4_pane_g4_ParamLimits

0xeda5,	// (0x00062817) main_mp4_pane_g4

0xedbf,	// (0x00062831) main_mp4_pane_g5_ParamLimits

0xedbf,	// (0x00062831) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0006336e) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0006336e) main_mp4_pane_g

0xedf3,	// (0x00062865) main_mp4_pane_t1_ParamLimits

0xedf3,	// (0x00062865) main_mp4_pane_t1

0xee4f,	// (0x000628c1) main_mp4_pane_t2_ParamLimits

0xee4f,	// (0x000628c1) main_mp4_pane_t2

0xcfb2,	// (0x00060a24) main_mp4_pane_t3_ParamLimits

0xcfb2,	// (0x00060a24) main_mp4_pane_t3

0xeea1,	// (0x00062913) main_mp4_pane_t4_ParamLimits

0xeea1,	// (0x00062913) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0006337b) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0006337b) main_mp4_pane_t

0xeee5,	// (0x00062957) mp4_progress_pane_ParamLimits

0xeee5,	// (0x00062957) mp4_progress_pane

0xef2f,	// (0x000629a1) mp4_rocker_pane_ParamLimits

0xef2f,	// (0x000629a1) mp4_rocker_pane

0xcfda,	// (0x00060a4c) mp4_progress_pane_t1

0xcff3,	// (0x00060a65) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x00063384) mp4_progress_pane_t

0xd00c,	// (0x00060a7e) mup_progress_pane_cp04

0xd018,	// (0x00060a8a) mp4_rocker_pane_g1

0x8137,	// (0x0005bba9) aid_cell_size_keypad2_ParamLimits

0x8137,	// (0x0005bba9) aid_cell_size_keypad2

0x814d,	// (0x0005bbbf) dialer2_ne_pane_ParamLimits

0x814d,	// (0x0005bbbf) dialer2_ne_pane

0x8167,	// (0x0005bbd9) grid_dialer2_keypad_pane_ParamLimits

0x8167,	// (0x0005bbd9) grid_dialer2_keypad_pane

0xc4cb,	// (0x0005ff3d) bg_popup_call_pane_cp07_ParamLimits

0xc4cb,	// (0x0005ff3d) bg_popup_call_pane_cp07

0x8183,	// (0x0005bbf5) dialer2_ne_pane_t1_ParamLimits

0x8183,	// (0x0005bbf5) dialer2_ne_pane_t1

0x81be,	// (0x0005bc30) cell_dialer2_keypad_pane_ParamLimits

0x81be,	// (0x0005bc30) cell_dialer2_keypad_pane

0xd034,	// (0x00060aa6) bg_button_pane_pane_cp04_ParamLimits

0xd034,	// (0x00060aa6) bg_button_pane_pane_cp04

0x81e0,	// (0x0005bc52) cell_dialer2_keypad_pane_g1_ParamLimits

0x81e0,	// (0x0005bc52) cell_dialer2_keypad_pane_g1

0x4282,	// (0x00057cf4) aid_placing_vt_set_content_ParamLimits

0x4282,	// (0x00057cf4) aid_placing_vt_set_content

0x42a6,	// (0x00057d18) aid_placing_vt_set_title_ParamLimits

0x42a6,	// (0x00057d18) aid_placing_vt_set_title

0xb6de,	// (0x0005f150) main_image3_pane

0x82a6,	// (0x0005bd18) area_side_right_pane_cp01_ParamLimits

0x82a6,	// (0x0005bd18) area_side_right_pane_cp01

0xed97,	// (0x00062809) main_image3_pane_g1_ParamLimits

0xed97,	// (0x00062809) main_image3_pane_g1

0x82bd,	// (0x0005bd2f) main_image3_pane_g2_ParamLimits

0x82bd,	// (0x0005bd2f) main_image3_pane_g2

0x82e5,	// (0x0005bd57) main_image3_pane_g3_ParamLimits

0x82e5,	// (0x0005bd57) main_image3_pane_g3

0x830f,	// (0x0005bd81) main_image3_pane_g4_ParamLimits

0x830f,	// (0x0005bd81) main_image3_pane_g4

0x0003,

0xf921,	// (0x00063393) main_image3_pane_g_ParamLimits

0xf921,	// (0x00063393) main_image3_pane_g

0x8339,	// (0x0005bdab) main_image3_pane_t1_ParamLimits

0x8339,	// (0x0005bdab) main_image3_pane_t1

0x8391,	// (0x0005be03) main_image3_pane_t2_ParamLimits

0x8391,	// (0x0005be03) main_image3_pane_t2

0x83e3,	// (0x0005be55) main_image3_pane_t3_ParamLimits

0x83e3,	// (0x0005be55) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0006339c) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0006339c) main_image3_pane_t

0x23b9,	// (0x00055e2b) grid_sctrl_middle_pane_cp01_ParamLimits

0x23b9,	// (0x00055e2b) grid_sctrl_middle_pane_cp01

0x846b,	// (0x0005bedd) cell_sctrl_middle_pane_cp01_ParamLimits

0x846b,	// (0x0005bedd) cell_sctrl_middle_pane_cp01

0x8488,	// (0x0005befa) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8488,	// (0x0005befa) cell_sctrl_middle_pane_cp01_g1

0xb6de,	// (0x0005f150) main_call4_pane

0x849e,	// (0x0005bf10) aid_size_button_call4_ParamLimits

0x849e,	// (0x0005bf10) aid_size_button_call4

0x84cf,	// (0x0005bf41) call4_windows_pane_ParamLimits

0x84cf,	// (0x0005bf41) call4_windows_pane

0x84ef,	// (0x0005bf61) grid_call4_button_pane_ParamLimits

0x84ef,	// (0x0005bf61) grid_call4_button_pane

0xd040,	// (0x00060ab2) call4_windows_conf_pane

0xd057,	// (0x00060ac9) popup_call4_audio_first_window_ParamLimits

0xd057,	// (0x00060ac9) popup_call4_audio_first_window

0xd0a3,	// (0x00060b15) popup_call4_audio_second_window_ParamLimits

0xd0a3,	// (0x00060b15) popup_call4_audio_second_window

0xd0b7,	// (0x00060b29) popup_call4_audio_wait_window_ParamLimits

0xd0b7,	// (0x00060b29) popup_call4_audio_wait_window

0x851c,	// (0x0005bf8e) cell_call4_button_pane_ParamLimits

0x851c,	// (0x0005bf8e) cell_call4_button_pane

0x8545,	// (0x0005bfb7) bg_button_pane_cp09_ParamLimits

0x8545,	// (0x0005bfb7) bg_button_pane_cp09

0x8551,	// (0x0005bfc3) cell_call4_button_pane_g1_ParamLimits

0x8551,	// (0x0005bfc3) cell_call4_button_pane_g1

0x8577,	// (0x0005bfe9) cell_call4_button_pane_t1_ParamLimits

0x8577,	// (0x0005bfe9) cell_call4_button_pane_t1

0xd0ff,	// (0x00060b71) popup_call4_audio_conf_window_ParamLimits

0xd0ff,	// (0x00060b71) popup_call4_audio_conf_window

0x780e,	// (0x0005b280) mup3_progress_pane_t1_ParamLimits

0x7825,	// (0x0005b297) mup3_progress_pane_t2_ParamLimits

0xca15,	// (0x00060487) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00063275) mup3_progress_pane_t_ParamLimits

0xca2c,	// (0x0006049e) mup_progress_pane_cp03_ParamLimits

0x7dcf,	// (0x0005b841) mup3_control_keys_pane_g4_copy1

0xef13,	// (0x00062985) mp4_rocker2_pane_ParamLimits

0xef13,	// (0x00062985) mp4_rocker2_pane

0xd113,	// (0x00060b85) mp4_rocker2_pane_g1

0xd11b,	// (0x00060b8d) mp4_rocker2_pane_g2

0xef81,	// (0x000629f3) mp4_rocker2_pane_g3

0xef89,	// (0x000629fb) mp4_rocker2_pane_g4

0xef91,	// (0x00062a03) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x000633a5) mp4_rocker2_pane_g

0xb6de,	// (0x0005f150) main_camera4_pane

0xb6de,	// (0x0005f150) main_video4_pane

0x8039,	// (0x0005baab) main_video_tele_dialer_pane_t1_ParamLimits

0x8039,	// (0x0005baab) main_video_tele_dialer_pane_t1

0x8052,	// (0x0005bac4) main_video_tele_dialer_pane_t2_ParamLimits

0x8052,	// (0x0005bac4) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0006335f) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0006335f) main_video_tele_dialer_pane_t

0x85b5,	// (0x0005c027) cam4_autofocus_pane_ParamLimits

0x85b5,	// (0x0005c027) cam4_autofocus_pane

0x85cb,	// (0x0005c03d) cam4_image_uncrop_pane_ParamLimits

0x85cb,	// (0x0005c03d) cam4_image_uncrop_pane

0x85e5,	// (0x0005c057) cam4_indicators_pane_ParamLimits

0x85e5,	// (0x0005c057) cam4_indicators_pane

0x8610,	// (0x0005c082) main_camera4_pane_g1_ParamLimits

0x8610,	// (0x0005c082) main_camera4_pane_g1

0x861c,	// (0x0005c08e) main_camera4_pane_g2_ParamLimits

0x861c,	// (0x0005c08e) main_camera4_pane_g2

0x8628,	// (0x0005c09a) main_camera4_pane_g3_ParamLimits

0x8628,	// (0x0005c09a) main_camera4_pane_g3

0x8634,	// (0x0005c0a6) main_camera4_pane_g4_ParamLimits

0x8634,	// (0x0005c0a6) main_camera4_pane_g4

0x8640,	// (0x0005c0b2) main_camera4_pane_g5_ParamLimits

0x8640,	// (0x0005c0b2) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x000633b0) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x000633b0) main_camera4_pane_g

0x865d,	// (0x0005c0cf) main_camera4_pane_t1_ParamLimits

0x865d,	// (0x0005c0cf) main_camera4_pane_t1

0x8695,	// (0x0005c107) bg_tb_trans_pane_cp06

0x86a3,	// (0x0005c115) cam4_indicators_pane_g1

0x86b0,	// (0x0005c122) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x000633c2) cam4_indicators_pane_g

0x86c8,	// (0x0005c13a) cam4_indicators_pane_t1

0x86f2,	// (0x0005c164) main_video4_pane_g1_ParamLimits

0x86f2,	// (0x0005c164) main_video4_pane_g1

0x8704,	// (0x0005c176) main_video4_pane_g2_ParamLimits

0x8704,	// (0x0005c176) main_video4_pane_g2

0x8718,	// (0x0005c18a) main_video4_pane_g3_ParamLimits

0x8718,	// (0x0005c18a) main_video4_pane_g3

0x8728,	// (0x0005c19a) main_video4_pane_g4_ParamLimits

0x8728,	// (0x0005c19a) main_video4_pane_g4

0x0004,

0xf957,	// (0x000633c9) main_video4_pane_g_ParamLimits

0xf957,	// (0x000633c9) main_video4_pane_g

0x8748,	// (0x0005c1ba) vid4_indicators_pane_ParamLimits

0x8748,	// (0x0005c1ba) vid4_indicators_pane

0x8778,	// (0x0005c1ea) video4_image_uncrop_cif_pane_ParamLimits

0x8778,	// (0x0005c1ea) video4_image_uncrop_cif_pane

0x8792,	// (0x0005c204) video4_image_uncrop_nhd_pane_ParamLimits

0x8792,	// (0x0005c204) video4_image_uncrop_nhd_pane

0x85cb,	// (0x0005c03d) video4_image_uncrop_vga_pane_ParamLimits

0x85cb,	// (0x0005c03d) video4_image_uncrop_vga_pane

0xefb9,	// (0x00062a2b) bg_tb_trans_pane_cp07

0x86a3,	// (0x0005c115) vid4_indicators_pane_g1

0x87a6,	// (0x0005c218) vid4_indicators_pane_g2

0x87b3,	// (0x0005c225) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x000633d4) vid4_indicators_pane_g

0x87d8,	// (0x0005c24a) vid4_indicators_pane_t1

0x87ea,	// (0x0005c25c) cam4_autofocus_pane_g1

0x87f2,	// (0x0005c264) cam4_autofocus_pane_g2

0x87fa,	// (0x0005c26c) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x000633df) cam4_autofocus_pane_g

0x8802,	// (0x0005c274) cam4_autofocus_pane_g3_copy1

0x8083,	// (0x0005baf5) video_down_pane_cp_t1

0x8091,	// (0x0005bb03) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x00063364) video_down_pane_cp_t

0x23b9,	// (0x00055e2b) popup_vitu2_window_ParamLimits

0x23b9,	// (0x00055e2b) popup_vitu2_window

0x880a,	// (0x0005c27c) aid_size_cell2_itu2_ParamLimits

0x880a,	// (0x0005c27c) aid_size_cell2_itu2

0x8830,	// (0x0005c2a2) aid_size_cell_itu2_ParamLimits

0x8830,	// (0x0005c2a2) aid_size_cell_itu2

0x888c,	// (0x0005c2fe) bg_popup_window_pane_cp09_ParamLimits

0x888c,	// (0x0005c2fe) bg_popup_window_pane_cp09

0x889a,	// (0x0005c30c) field_vitu2_entry_pane_ParamLimits

0x889a,	// (0x0005c30c) field_vitu2_entry_pane

0x88c0,	// (0x0005c332) grid_vitu2_function_pane_ParamLimits

0x88c0,	// (0x0005c332) grid_vitu2_function_pane

0x8911,	// (0x0005c383) grid_vitu2_itu_pane_ParamLimits

0x8911,	// (0x0005c383) grid_vitu2_itu_pane

0x89a4,	// (0x0005c416) cell_vitu2_itu_pane_ParamLimits

0x89a4,	// (0x0005c416) cell_vitu2_itu_pane

0x89c8,	// (0x0005c43a) cell_vitu2_function_pane_ParamLimits

0x89c8,	// (0x0005c43a) cell_vitu2_function_pane

0xd123,	// (0x00060b95) bg_popup_call_pane_cp08_ParamLimits

0xd123,	// (0x00060b95) bg_popup_call_pane_cp08

0xd13c,	// (0x00060bae) field_vitu2_entry_pane_g1

0xd148,	// (0x00060bba) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x000633e6) field_vitu2_entry_pane_g

0x8a07,	// (0x0005c479) field_vitu2_entry_pane_t1_ParamLimits

0x8a07,	// (0x0005c479) field_vitu2_entry_pane_t1

0xd162,	// (0x00060bd4) field_vitu2_entry_pane_t2_ParamLimits

0xd162,	// (0x00060bd4) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x000633ed) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x000633ed) field_vitu2_entry_pane_t

0x8a24,	// (0x0005c496) bg_button_pane_cp010_ParamLimits

0x8a24,	// (0x0005c496) bg_button_pane_cp010

0x8a32,	// (0x0005c4a4) cell_vitu2_itu_pane_g1

0x8a50,	// (0x0005c4c2) cell_vitu2_itu_pane_t1_ParamLimits

0x8a50,	// (0x0005c4c2) cell_vitu2_itu_pane_t1

0x320b,	// (0x00056c7d) cell_vitu2_itu_pane_t2_ParamLimits

0x320b,	// (0x00056c7d) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x000633f7) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x000633f7) cell_vitu2_itu_pane_t

0xefd1,	// (0x00062a43) bg_button_pane_cp011

0x8ab6,	// (0x0005c528) cell_vitu2_function_pane_g1

0xb6de,	// (0x0005f150) main_myfav_hc_pane

0x8433,	// (0x0005bea5) popup_image3_note_pane_ParamLimits

0x8433,	// (0x0005bea5) popup_image3_note_pane

0x844f,	// (0x0005bec1) popup_image3_tool_bar_pane_ParamLimits

0x844f,	// (0x0005bec1) popup_image3_tool_bar_pane

0x328f,	// (0x00056d01) cell_vitu2_itu_pane_t3_ParamLimits

0x328f,	// (0x00056d01) cell_vitu2_itu_pane_t3

0xb6de,	// (0x0005f150) bg_popup_trans_pane

0xd187,	// (0x00060bf9) grid_image3_tool_bar_pane

0xd191,	// (0x00060c03) bg_popup_trans_pane_g1

0x0c7b,	// (0x000546ed) bg_popup_trans_pane_g2

0xd199,	// (0x00060c0b) bg_popup_trans_pane_g3

0xd1a1,	// (0x00060c13) bg_popup_trans_pane_g4

0xd1a9,	// (0x00060c1b) bg_popup_trans_pane_g5

0xd1b1,	// (0x00060c23) bg_popup_trans_pane_g6

0xd1b9,	// (0x00060c2b) bg_popup_trans_pane_g7

0xd1c1,	// (0x00060c33) bg_popup_trans_pane_g8

0x0c5b,	// (0x000546cd) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x000633fe) bg_popup_trans_pane_g

0xd1c9,	// (0x00060c3b) cell_image3_tool_bar_pane_ParamLimits

0xd1c9,	// (0x00060c3b) cell_image3_tool_bar_pane

0xc6e6,	// (0x00060158) cell_image3_tool_bar_pane_g1

0xb6de,	// (0x0005f150) bg_popup_trans_pane_cp1

0xd1dd,	// (0x00060c4f) popup_image3_note_pane_t1

0xd1eb,	// (0x00060c5d) popup_image3_note_pane_t2

0xd1f9,	// (0x00060c6b) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00063411) popup_image3_note_pane_t

0xd207,	// (0x00060c79) popup_image3_note_pane_t3_copy1

0x8aca,	// (0x0005c53c) bg_myfav_hc_instruction_pane_ParamLimits

0x8aca,	// (0x0005c53c) bg_myfav_hc_instruction_pane

0x8ade,	// (0x0005c550) cell_myfav_contact_pane_ParamLimits

0x8ade,	// (0x0005c550) cell_myfav_contact_pane

0x8afc,	// (0x0005c56e) cell_myfav_contact_pane_cp1_ParamLimits

0x8afc,	// (0x0005c56e) cell_myfav_contact_pane_cp1

0x8b14,	// (0x0005c586) cell_myfav_contact_pane_cp2_ParamLimits

0x8b14,	// (0x0005c586) cell_myfav_contact_pane_cp2

0x8b2c,	// (0x0005c59e) cell_myfav_contact_pane_cp3_ParamLimits

0x8b2c,	// (0x0005c59e) cell_myfav_contact_pane_cp3

0x8b43,	// (0x0005c5b5) cell_myfav_contact_pane_cp4_ParamLimits

0x8b43,	// (0x0005c5b5) cell_myfav_contact_pane_cp4

0x8b5b,	// (0x0005c5cd) cell_myfav_contact_pane_cp5_ParamLimits

0x8b5b,	// (0x0005c5cd) cell_myfav_contact_pane_cp5

0x8b6f,	// (0x0005c5e1) cell_myfav_contact_pane_cp6_ParamLimits

0x8b6f,	// (0x0005c5e1) cell_myfav_contact_pane_cp6

0x8b85,	// (0x0005c5f7) cell_myfav_contact_pane_cp7_ParamLimits

0x8b85,	// (0x0005c5f7) cell_myfav_contact_pane_cp7

0xd215,	// (0x00060c87) listscroll_gen_pane_cp05

0x8b9f,	// (0x0005c611) main_myfav_hc_pane_g1_ParamLimits

0x8b9f,	// (0x0005c611) main_myfav_hc_pane_g1

0x8bb9,	// (0x0005c62b) main_myfav_hc_pane_g2_ParamLimits

0x8bb9,	// (0x0005c62b) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00063418) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00063418) main_myfav_hc_pane_g

0x8beb,	// (0x0005c65d) main_myfav_hc_pane_t1_ParamLimits

0x8beb,	// (0x0005c65d) main_myfav_hc_pane_t1

0xd21e,	// (0x00060c90) main_myfav_hc_pane_t2_ParamLimits

0xd21e,	// (0x00060c90) main_myfav_hc_pane_t2

0xd230,	// (0x00060ca2) main_myfav_hc_pane_t3_ParamLimits

0xd230,	// (0x00060ca2) main_myfav_hc_pane_t3

0x8c02,	// (0x0005c674) main_myfav_hc_pane_t4_ParamLimits

0x8c02,	// (0x0005c674) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0006341f) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0006341f) main_myfav_hc_pane_t

0xc6e6,	// (0x00060158) bg_myfav_hc_instruction_pane_g1

0xd242,	// (0x00060cb4) cell_myfav_contact_pane_g1_ParamLimits

0xd242,	// (0x00060cb4) cell_myfav_contact_pane_g1

0xd242,	// (0x00060cb4) cell_myfav_contact_pane_g2_ParamLimits

0xd242,	// (0x00060cb4) cell_myfav_contact_pane_g2

0xd24e,	// (0x00060cc0) cell_myfav_contact_pane_g3_ParamLimits

0xd24e,	// (0x00060cc0) cell_myfav_contact_pane_g3

0xc9ff,	// (0x00060471) cell_myfav_contact_pane_g4_ParamLimits

0xc9ff,	// (0x00060471) cell_myfav_contact_pane_g4

0xd25b,	// (0x00060ccd) cell_myfav_contact_pane_g5_ParamLimits

0xd25b,	// (0x00060ccd) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0006342a) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0006342a) cell_myfav_contact_pane_g

0x8bd3,	// (0x0005c645) main_myfav_hc_pane_g3_ParamLimits

0x8bd3,	// (0x0005c645) main_myfav_hc_pane_g3

0x345e,	// (0x00056ed0) popup_adpt_find_window

0x8c2a,	// (0x0005c69c) afind_page_pane_ParamLimits

0x8c2a,	// (0x0005c69c) afind_page_pane

0x8c3f,	// (0x0005c6b1) aid_size_cell_afind_ParamLimits

0x8c3f,	// (0x0005c6b1) aid_size_cell_afind

0x8c5d,	// (0x0005c6cf) bg_popup_sub_pane_cp09_ParamLimits

0x8c5d,	// (0x0005c6cf) bg_popup_sub_pane_cp09

0x8c6a,	// (0x0005c6dc) find_pane_cp01_ParamLimits

0x8c6a,	// (0x0005c6dc) find_pane_cp01

0xd267,	// (0x00060cd9) grid_afind_control_pane_ParamLimits

0xd267,	// (0x00060cd9) grid_afind_control_pane

0x8c77,	// (0x0005c6e9) grid_afind_pane_ParamLimits

0x8c77,	// (0x0005c6e9) grid_afind_pane

0x8c99,	// (0x0005c70b) cell_afind_pane_ParamLimits

0x8c99,	// (0x0005c70b) cell_afind_pane

0xc6e6,	// (0x00060158) afind_page_pane_g1

0x8cf6,	// (0x0005c768) afind_page_pane_g2

0x8cff,	// (0x0005c771) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x00063435) afind_page_pane_g

0x8d08,	// (0x0005c77a) afind_page_pane_t1

0xd27b,	// (0x00060ced) cell_afind_grid_control_pane_ParamLimits

0xd27b,	// (0x00060ced) cell_afind_grid_control_pane

0xd034,	// (0x00060aa6) bg_button_pane_cp69_ParamLimits

0xd034,	// (0x00060aa6) bg_button_pane_cp69

0x8d28,	// (0x0005c79a) cell_afind_pane_g1_ParamLimits

0x8d28,	// (0x0005c79a) cell_afind_pane_g1

0x8d35,	// (0x0005c7a7) cell_afind_pane_t1_ParamLimits

0x8d35,	// (0x0005c7a7) cell_afind_pane_t1

0x0a6e,	// (0x000544e0) bg_button_pane_cp72

0xd28a,	// (0x00060cfc) cell_afind_grid_control_pane_g1

0x5c8a,	// (0x000596fc) aid_image_placing_area_ParamLimits

0x5c8a,	// (0x000596fc) aid_image_placing_area

0xccf8,	// (0x0006076a) field_vitu_entry_pane_g1_ParamLimits

0xccf8,	// (0x0006076a) field_vitu_entry_pane_g1

0xcd04,	// (0x00060776) field_vitu_entry_pane_g2_ParamLimits

0xcd04,	// (0x00060776) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x000632ef) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x000632ef) field_vitu_entry_pane_g

0x7e96,	// (0x0005b908) cell_vitu_itu_pane_g1_ParamLimits

0x7ed8,	// (0x0005b94a) cell_vitu_itu_pane_t3_ParamLimits

0x7ed8,	// (0x0005b94a) cell_vitu_itu_pane_t3

0xcfda,	// (0x00060a4c) mp4_progress_pane_t1_ParamLimits

0xcff3,	// (0x00060a65) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x00063384) mp4_progress_pane_t_ParamLimits

0xd00c,	// (0x00060a7e) mup_progress_pane_cp04_ParamLimits

0x8c16,	// (0x0005c688) main_myfav_hc_pane_t5_ParamLimits

0x8c16,	// (0x0005c688) main_myfav_hc_pane_t5

0xb6fc,	// (0x0005f16e) aid_zoom_text_primary

0x345e,	// (0x00056ed0) popup_adpt_find_window_ParamLimits

0x23b9,	// (0x00055e2b) main_cam_set_pane

0x85fc,	// (0x0005c06e) cam4_zoom_pane_ParamLimits

0x85fc,	// (0x0005c06e) cam4_zoom_pane

0x8d47,	// (0x0005c7b9) main_cam_set_pane_g1_ParamLimits

0x8d47,	// (0x0005c7b9) main_cam_set_pane_g1

0x8d55,	// (0x0005c7c7) main_cam_set_pane_g2_ParamLimits

0x8d55,	// (0x0005c7c7) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0006343c) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0006343c) main_cam_set_pane_g

0x8d78,	// (0x0005c7ea) main_cam_set_pane_t1_ParamLimits

0x8d78,	// (0x0005c7ea) main_cam_set_pane_t1

0x8d93,	// (0x0005c805) main_cset_listscroll_pane_ParamLimits

0x8d93,	// (0x0005c805) main_cset_listscroll_pane

0x8db5,	// (0x0005c827) main_cset_slider_pane_ParamLimits

0x8db5,	// (0x0005c827) main_cset_slider_pane

0xd29b,	// (0x00060d0d) main_cset_list_pane_ParamLimits

0xd29b,	// (0x00060d0d) main_cset_list_pane

0xd2ab,	// (0x00060d1d) scroll_pane_cp028

0x8ddb,	// (0x0005c84d) aid_area_touch_slider

0x8df7,	// (0x0005c869) cset_slider_pane

0x8e21,	// (0x0005c893) main_cset_slider_pane_g1

0x8e36,	// (0x0005c8a8) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x00063441) main_cset_slider_pane_g

0xd2e4,	// (0x00060d56) main_cset_slider_pane_t1

0x8ef2,	// (0x0005c964) main_cset_slider_pane_t2

0x8f0c,	// (0x0005c97e) main_cset_slider_pane_t3

0x8f26,	// (0x0005c998) main_cset_slider_pane_t4

0x8f40,	// (0x0005c9b2) main_cset_slider_pane_t5

0x8f5a,	// (0x0005c9cc) main_cset_slider_pane_t6

0x8f6f,	// (0x0005c9e1) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x00063466) main_cset_slider_pane_t

0x9073,	// (0x0005cae5) cset_list_set_pane_ParamLimits

0x9073,	// (0x0005cae5) cset_list_set_pane

0x9085,	// (0x0005caf7) aid_position_infowindow_above

0x908d,	// (0x0005caff) aid_position_infowindow_below

0xd384,	// (0x00060df6) cset_list_set_pane_g1_ParamLimits

0xd384,	// (0x00060df6) cset_list_set_pane_g1

0xd390,	// (0x00060e02) cset_list_set_pane_g3_ParamLimits

0xd390,	// (0x00060e02) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x00063485) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x00063485) cset_list_set_pane_g

0x9095,	// (0x0005cb07) cset_list_set_pane_t1_ParamLimits

0x9095,	// (0x0005cb07) cset_list_set_pane_t1

0x23b9,	// (0x00055e2b) list_highlight_pane_cp021_ParamLimits

0x23b9,	// (0x00055e2b) list_highlight_pane_cp021

0x149c,	// (0x00054f0e) cset_slider_pane_g1

0x14ae,	// (0x00054f20) cset_slider_pane_g2

0x14a5,	// (0x00054f17) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0006348a) cset_slider_pane_g

0xefdf,	// (0x00062a51) aid_area_touch_cam4_zoom

0xefe7,	// (0x00062a59) cam4_zoom_cont_pane

0xefef,	// (0x00062a61) cam4_zoom_pane_g1

0xeff7,	// (0x00062a69) cam4_zoom_pane_g2

0x90aa,	// (0x0005cb1c) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00063491) cam4_zoom_pane_g

0xefff,	// (0x00062a71) cam4_zoom_cont_pane_g1

0xf008,	// (0x00062a7a) cam4_zoom_cont_pane_g2

0xf011,	// (0x00062a83) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x00063498) cam4_zoom_cont_pane_g

0x84bc,	// (0x0005bf2e) call4_image_pane_ParamLimits

0x84bc,	// (0x0005bf2e) call4_image_pane

0xd040,	// (0x00060ab2) call4_windows_conf_pane_ParamLimits

0xd081,	// (0x00060af3) popup_call4_audio_in_window_ParamLimits

0xd081,	// (0x00060af3) popup_call4_audio_in_window

0xb6de,	// (0x0005f150) bg_popup_call2_act_pane_cp02

0xd0f7,	// (0x00060b69) call4_list_conf_pane

0xc6e6,	// (0x00060158) call4_image_pane_g1

0xc6e6,	// (0x00060158) call4_image_pane_g2

0x0001,

0xf743,	// (0x000631b5) call4_image_pane_g

0xd39f,	// (0x00060e11) list_single_graphic_popup_conf4_pane_ParamLimits

0xd39f,	// (0x00060e11) list_single_graphic_popup_conf4_pane

0xb6de,	// (0x0005f150) list_highlight_pane_cp022

0xd3b2,	// (0x00060e24) list_single_graphic_popup_conf4_pane_g1

0x117b,	// (0x00054bed) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0006349f) list_single_graphic_popup_conf4_pane_g

0xd3ba,	// (0x00060e2c) list_single_graphic_popup_conf4_pane_t1

0x4380,	// (0x00057df2) popup_vtel_slider_window_ParamLimits

0x4380,	// (0x00057df2) popup_vtel_slider_window

0xd022,	// (0x00060a94) dialer2_ne_pane_t2_ParamLimits

0xd022,	// (0x00060a94) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00063389) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00063389) dialer2_ne_pane_t

0xc4cb,	// (0x0005ff3d) bg_popup_sub_pane_cp010_ParamLimits

0xc4cb,	// (0x0005ff3d) bg_popup_sub_pane_cp010

0x90b2,	// (0x0005cb24) popup_vtel_slider_window_g1_ParamLimits

0x90b2,	// (0x0005cb24) popup_vtel_slider_window_g1

0x90c5,	// (0x0005cb37) popup_vtel_slider_window_g2_ParamLimits

0x90c5,	// (0x0005cb37) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x000634a4) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x000634a4) popup_vtel_slider_window_g

0x911b,	// (0x0005cb8d) vtel_slider_pane_ParamLimits

0x911b,	// (0x0005cb8d) vtel_slider_pane

0x913d,	// (0x0005cbaf) vtel_slider_pane_g1_ParamLimits

0x913d,	// (0x0005cbaf) vtel_slider_pane_g1

0x9151,	// (0x0005cbc3) vtel_slider_pane_g2_ParamLimits

0x9151,	// (0x0005cbc3) vtel_slider_pane_g2

0x9169,	// (0x0005cbdb) vtel_slider_pane_g3_ParamLimits

0x9169,	// (0x0005cbdb) vtel_slider_pane_g3

0x913d,	// (0x0005cbaf) vtel_slider_pane_g4_ParamLimits

0x913d,	// (0x0005cbaf) vtel_slider_pane_g4

0x917f,	// (0x0005cbf1) vtel_slider_pane_g5_ParamLimits

0x917f,	// (0x0005cbf1) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x000634ad) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x000634ad) vtel_slider_pane_g

0xb6de,	// (0x0005f150) main_gallery2_pane

0x885c,	// (0x0005c2ce) aid_size_row_itut2_dropdow_list_ParamLimits

0x885c,	// (0x0005c2ce) aid_size_row_itut2_dropdow_list

0x88e8,	// (0x0005c35a) grid_vitu2_function_top_pane_ParamLimits

0x88e8,	// (0x0005c35a) grid_vitu2_function_top_pane

0x894d,	// (0x0005c3bf) popup_vitu2_dropdown_list_window_ParamLimits

0x894d,	// (0x0005c3bf) popup_vitu2_dropdown_list_window

0x8976,	// (0x0005c3e8) popup_vitu2_match_list_window

0x9195,	// (0x0005cc07) cell_vitu2_function_top_pane_ParamLimits

0x9195,	// (0x0005cc07) cell_vitu2_function_top_pane

0x91b3,	// (0x0005cc25) cell_vitu2_function_top_pane_cp01_ParamLimits

0x91b3,	// (0x0005cc25) cell_vitu2_function_top_pane_cp01

0x91d1,	// (0x0005cc43) cell_vitu2_function_top_wide_pane_ParamLimits

0x91d1,	// (0x0005cc43) cell_vitu2_function_top_wide_pane

0xefd1,	// (0x00062a43) bg_button_pane_cp012

0x91ef,	// (0x0005cc61) cell_vitu2_function_top_pane_g1

0xf01a,	// (0x00062a8c) bg_button_pane_cp013_ParamLimits

0xf01a,	// (0x00062a8c) bg_button_pane_cp013

0x9203,	// (0x0005cc75) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9203,	// (0x0005cc75) cell_vitu2_function_top_wide_pane_g1

0xefd1,	// (0x00062a43) bg_popup_sub_pane_cp20

0x921b,	// (0x0005cc8d) list_vitu2_match_list_pane

0xd191,	// (0x00060c03) bg_popup_sub_pane_cp20_g1

0xd199,	// (0x00060c0b) bg_popup_sub_pane_cp20_g2

0x0c7b,	// (0x000546ed) bg_popup_sub_pane_cp20_g3

0xd1a1,	// (0x00060c13) bg_popup_sub_pane_cp20_g4

0x0c5b,	// (0x000546cd) bg_popup_sub_pane_cp20_g5

0xd3d6,	// (0x00060e48) bg_popup_sub_pane_cp20_g6

0xd1b1,	// (0x00060c23) bg_popup_sub_pane_cp20_g7

0xd1b9,	// (0x00060c2b) bg_popup_sub_pane_cp20_g8

0xd1c1,	// (0x00060c33) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x000634b8) bg_popup_sub_pane_cp20_g

0xf036,	// (0x00062aa8) list_vitu2_match_list_item_pane_ParamLimits

0xf036,	// (0x00062aa8) list_vitu2_match_list_item_pane

0xf048,	// (0x00062aba) list_vitu2_match_list_item_pane_t1

0xbdbc,	// (0x0005f82e) bg_popup_sub_pane_cp21

0xf056,	// (0x00062ac8) grid_vitu2_dropdown_list_pane

0x926a,	// (0x0005ccdc) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x926a,	// (0x0005ccdc) cell_vitu2_dropdown_list_char_pane

0x928b,	// (0x0005ccfd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x928b,	// (0x0005ccfd) cell_vitu2_dropdown_list_ctrl_pane

0xd3f6,	// (0x00060e68) cell_vitu2_dropdown_list_char_pane_g1

0xd3ff,	// (0x00060e71) cell_vitu2_dropdown_list_char_pane_g2

0xd408,	// (0x00060e7a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x000634d5) cell_vitu2_dropdown_list_char_pane_g

0x92b7,	// (0x0005cd29) cell_vitu2_dropdown_list_char_pane_t1

0x92c5,	// (0x0005cd37) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x92c5,	// (0x0005cd37) cell_vitu2_dropdown_list_ctrl_pane_g1

0x92d2,	// (0x0005cd44) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x92d2,	// (0x0005cd44) cell_vitu2_dropdown_list_ctrl_pane_g2

0x92df,	// (0x0005cd51) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x92df,	// (0x0005cd51) cell_vitu2_dropdown_list_ctrl_pane_g3

0x92ec,	// (0x0005cd5e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x92ec,	// (0x0005cd5e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xf05e,	// (0x00062ad0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xf05e,	// (0x00062ad0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x000634dc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x000634dc) cell_vitu2_dropdown_list_ctrl_pane_g

0x9308,	// (0x0005cd7a) aid_size_cell_gallery2_ParamLimits

0x9308,	// (0x0005cd7a) aid_size_cell_gallery2

0x931e,	// (0x0005cd90) grid_gallery2_pane_ParamLimits

0x931e,	// (0x0005cd90) grid_gallery2_pane

0x9332,	// (0x0005cda4) scroll_pane_cp029_ParamLimits

0x9332,	// (0x0005cda4) scroll_pane_cp029

0x933e,	// (0x0005cdb0) cell_gallery2_pane_ParamLimits

0x933e,	// (0x0005cdb0) cell_gallery2_pane

0xd411,	// (0x00060e83) cell_gallery2_pane_g2

0x9374,	// (0x0005cde6) cell_gallery2_pane_g3

0xd41b,	// (0x00060e8d) cell_gallery2_pane_g4

0xd423,	// (0x00060e95) cell_gallery2_pane_g5

0x1366,	// (0x00054dd8) grid_highlight_pane_cp10

0x8976,	// (0x0005c3e8) popup_vitu2_match_list_window_ParamLimits

0x898d,	// (0x0005c3ff) popup_vitu2_query_window_ParamLimits

0x898d,	// (0x0005c3ff) popup_vitu2_query_window

0xbdbc,	// (0x0005f82e) bg_vitu2_candi_button_pane

0xd3f6,	// (0x00060e68) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3ff,	// (0x00060e71) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd408,	// (0x00060e7a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x937c,	// (0x0005cdee) bg_button_pane_cp015

0x9386,	// (0x0005cdf8) bg_button_pane_cp016

0x9390,	// (0x0005ce02) bg_button_pane_cp017

0x23b9,	// (0x00055e2b) bg_popup_sub_pane_cp22

0xd42b,	// (0x00060e9d) popup_vitu2_query_window_g1

0x93b8,	// (0x0005ce2a) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x000634e7) popup_vitu2_query_window_g

0x93c6,	// (0x0005ce38) popup_vitu2_query_window_t1_ParamLimits

0x93c6,	// (0x0005ce38) popup_vitu2_query_window_t1

0x93ee,	// (0x0005ce60) popup_vitu2_query_window_t2_ParamLimits

0x93ee,	// (0x0005ce60) popup_vitu2_query_window_t2

0x9400,	// (0x0005ce72) popup_vitu2_query_window_t3_ParamLimits

0x9400,	// (0x0005ce72) popup_vitu2_query_window_t3

0x9428,	// (0x0005ce9a) popup_vitu2_query_window_t4_ParamLimits

0x9428,	// (0x0005ce9a) popup_vitu2_query_window_t4

0x943c,	// (0x0005ceae) popup_vitu2_query_window_t5_ParamLimits

0x943c,	// (0x0005ceae) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x000634ec) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x000634ec) popup_vitu2_query_window_t

0xd293,	// (0x00060d05) main_cset_text_pane

0x8ddb,	// (0x0005c84d) aid_area_touch_slider_ParamLimits

0x8df7,	// (0x0005c869) cset_slider_pane_ParamLimits

0x8e21,	// (0x0005c893) main_cset_slider_pane_g1_ParamLimits

0x8e36,	// (0x0005c8a8) main_cset_slider_pane_g2_ParamLimits

0xd2b4,	// (0x00060d26) main_cset_slider_pane_g3_ParamLimits

0xd2b4,	// (0x00060d26) main_cset_slider_pane_g3

0x8e4b,	// (0x0005c8bd) main_cset_slider_pane_g4_ParamLimits

0x8e4b,	// (0x0005c8bd) main_cset_slider_pane_g4

0x8e5a,	// (0x0005c8cc) main_cset_slider_pane_g5_ParamLimits

0x8e5a,	// (0x0005c8cc) main_cset_slider_pane_g5

0x8e66,	// (0x0005c8d8) main_cset_slider_pane_g6_ParamLimits

0x8e66,	// (0x0005c8d8) main_cset_slider_pane_g6

0xf9cf,	// (0x00063441) main_cset_slider_pane_g_ParamLimits

0xd2e4,	// (0x00060d56) main_cset_slider_pane_t1_ParamLimits

0x8ef2,	// (0x0005c964) main_cset_slider_pane_t2_ParamLimits

0x8f0c,	// (0x0005c97e) main_cset_slider_pane_t3_ParamLimits

0x8f26,	// (0x0005c998) main_cset_slider_pane_t4_ParamLimits

0x8f40,	// (0x0005c9b2) main_cset_slider_pane_t5_ParamLimits

0x8f5a,	// (0x0005c9cc) main_cset_slider_pane_t6_ParamLimits

0x8f6f,	// (0x0005c9e1) main_cset_slider_pane_t7_ParamLimits

0x8f99,	// (0x0005ca0b) main_cset_slider_pane_t8_ParamLimits

0x8f99,	// (0x0005ca0b) main_cset_slider_pane_t8

0x8fc1,	// (0x0005ca33) main_cset_slider_pane_t9_ParamLimits

0x8fc1,	// (0x0005ca33) main_cset_slider_pane_t9

0x8fe9,	// (0x0005ca5b) main_cset_slider_pane_t10_ParamLimits

0x8fe9,	// (0x0005ca5b) main_cset_slider_pane_t10

0x9011,	// (0x0005ca83) main_cset_slider_pane_t11_ParamLimits

0x9011,	// (0x0005ca83) main_cset_slider_pane_t11

0x9039,	// (0x0005caab) main_cset_slider_pane_t12_ParamLimits

0x9039,	// (0x0005caab) main_cset_slider_pane_t12

0x9056,	// (0x0005cac8) main_cset_slider_pane_t13_ParamLimits

0x9056,	// (0x0005cac8) main_cset_slider_pane_t13

0xf9f4,	// (0x00063466) main_cset_slider_pane_t_ParamLimits

0xb6de,	// (0x0005f150) bg_popup_sub_pane_cp011

0xd437,	// (0x00060ea9) main_cset_text_pane_g1

0xd43f,	// (0x00060eb1) main_cset_text_pane_t1

0xd44d,	// (0x00060ebf) main_cset_text_pane_t2

0xd45b,	// (0x00060ecd) main_cset_text_pane_t3

0xd469,	// (0x00060edb) main_cset_text_pane_t4

0xd477,	// (0x00060ee9) main_cset_text_pane_t5

0xd485,	// (0x00060ef7) main_cset_text_pane_t6

0xd493,	// (0x00060f05) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x000634f7) main_cset_text_pane_t

0xb6de,	// (0x0005f150) main_cam4_burst_pane

0xb6de,	// (0x0005f150) main_cam5_pane

0x8d16,	// (0x0005c788) bg_button_pane_cp019

0x8d1f,	// (0x0005c791) bg_button_pane_cp020

0xd2c0,	// (0x00060d32) main_cset_slider_pane_g7_ParamLimits

0xd2c0,	// (0x00060d32) main_cset_slider_pane_g7

0xd2cc,	// (0x00060d3e) main_cset_slider_pane_g8_ParamLimits

0xd2cc,	// (0x00060d3e) main_cset_slider_pane_g8

0x8e7a,	// (0x0005c8ec) main_cset_slider_pane_g9_ParamLimits

0x8e7a,	// (0x0005c8ec) main_cset_slider_pane_g9

0x8e86,	// (0x0005c8f8) main_cset_slider_pane_g10_ParamLimits

0x8e86,	// (0x0005c8f8) main_cset_slider_pane_g10

0x8e92,	// (0x0005c904) main_cset_slider_pane_g11_ParamLimits

0x8e92,	// (0x0005c904) main_cset_slider_pane_g11

0x8e9e,	// (0x0005c910) main_cset_slider_pane_g12_ParamLimits

0x8e9e,	// (0x0005c910) main_cset_slider_pane_g12

0x8eaa,	// (0x0005c91c) main_cset_slider_pane_g13_ParamLimits

0x8eaa,	// (0x0005c91c) main_cset_slider_pane_g13

0x8eb6,	// (0x0005c928) main_cset_slider_pane_g14_ParamLimits

0x8eb6,	// (0x0005c928) main_cset_slider_pane_g14

0x8ec2,	// (0x0005c934) main_cset_slider_pane_g15_ParamLimits

0x8ec2,	// (0x0005c934) main_cset_slider_pane_g15

0xd312,	// (0x00060d84) main_cset_slider_pane_t14_ParamLimits

0xd312,	// (0x00060d84) main_cset_slider_pane_t14

0xd34b,	// (0x00060dbd) main_cset_slider_pane_t15_ParamLimits

0xd34b,	// (0x00060dbd) main_cset_slider_pane_t15

0x9450,	// (0x0005cec2) aid_cam4_burst_size_cell_ParamLimits

0x9450,	// (0x0005cec2) aid_cam4_burst_size_cell

0x9470,	// (0x0005cee2) grid_cam4_burst_pane_ParamLimits

0x9470,	// (0x0005cee2) grid_cam4_burst_pane

0x94a8,	// (0x0005cf1a) linegrid_cam4_burst_pane_ParamLimits

0x94a8,	// (0x0005cf1a) linegrid_cam4_burst_pane

0x94cc,	// (0x0005cf3e) scroll_pane_cp30_ParamLimits

0x94cc,	// (0x0005cf3e) scroll_pane_cp30

0x94d8,	// (0x0005cf4a) cell_cam4_burst_pane_ParamLimits

0x94d8,	// (0x0005cf4a) cell_cam4_burst_pane

0xd4a1,	// (0x00060f13) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4a1,	// (0x00060f13) linegrid_cam4_burst_pane_g1

0x9525,	// (0x0005cf97) linegrid_cam4_burst_pane_g2_ParamLimits

0x9525,	// (0x0005cf97) linegrid_cam4_burst_pane_g2

0xd4ae,	// (0x00060f20) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4ae,	// (0x00060f20) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x00063506) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x00063506) linegrid_cam4_burst_pane_g

0x9536,	// (0x0005cfa8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9536,	// (0x0005cfa8) linegrid_cam4_burst_pane_g3_copy1

0xd4bb,	// (0x00060f2d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4bb,	// (0x00060f2d) linegrid_cam4_burst_pane_g4

0x9550,	// (0x0005cfc2) linegrid_cam4_burst_pane_g5_ParamLimits

0x9550,	// (0x0005cfc2) linegrid_cam4_burst_pane_g5

0x9561,	// (0x0005cfd3) linegrid_cam4_burst_pane_g6_ParamLimits

0x9561,	// (0x0005cfd3) linegrid_cam4_burst_pane_g6

0xd4c8,	// (0x00060f3a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4c8,	// (0x00060f3a) linegrid_cam4_burst_pane_g7

0x9578,	// (0x0005cfea) cell_cam4_burst_pane_g1

0xd4e1,	// (0x00060f53) main_cam5_pane_t1_ParamLimits

0xd4e1,	// (0x00060f53) main_cam5_pane_t1

0xd4f3,	// (0x00060f65) main_cam5_pane_t2_ParamLimits

0xd4f3,	// (0x00060f65) main_cam5_pane_t2

0xd505,	// (0x00060f77) main_cam5_pane_t3_ParamLimits

0xd505,	// (0x00060f77) main_cam5_pane_t3

0xd517,	// (0x00060f89) main_cam5_pane_t4_ParamLimits

0xd517,	// (0x00060f89) main_cam5_pane_t4

0xd52f,	// (0x00060fa1) main_cam5_pane_t5_ParamLimits

0xd52f,	// (0x00060fa1) main_cam5_pane_t5

0xd543,	// (0x00060fb5) main_cam5_pane_t6_ParamLimits

0xd543,	// (0x00060fb5) main_cam5_pane_t6

0xd557,	// (0x00060fc9) main_cam5_pane_t7_ParamLimits

0xd557,	// (0x00060fc9) main_cam5_pane_t7

0xd569,	// (0x00060fdb) main_cam5_pane_t8_ParamLimits

0xd569,	// (0x00060fdb) main_cam5_pane_t8

0xd585,	// (0x00060ff7) main_cam5_pane_t9_ParamLimits

0xd585,	// (0x00060ff7) main_cam5_pane_t9

0xd597,	// (0x00061009) main_cam5_pane_t10_ParamLimits

0xd597,	// (0x00061009) main_cam5_pane_t10

0xd5a9,	// (0x0006101b) main_cam5_pane_t11_ParamLimits

0xd5a9,	// (0x0006101b) main_cam5_pane_t11

0xd5bb,	// (0x0006102d) main_cam5_pane_t12_ParamLimits

0xd5bb,	// (0x0006102d) main_cam5_pane_t12

0xd5d0,	// (0x00061042) main_cam5_pane_t13_ParamLimits

0xd5d0,	// (0x00061042) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00063512) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00063512) main_cam5_pane_t

0x34e1,	// (0x00056f53) popup_scut_keymap_window_ParamLimits

0x34e1,	// (0x00056f53) popup_scut_keymap_window

0x958b,	// (0x0005cffd) aid_size_cell_brow_shortcut

0x1366,	// (0x00054dd8) bg_popup_window_pane_cp010

0x9597,	// (0x0005d009) grid_scut_pane

0x95a3,	// (0x0005d015) cell_scut_pane_ParamLimits

0x95a3,	// (0x0005d015) cell_scut_pane

0x95ba,	// (0x0005d02c) cell_scut_pane_g1

0xd5ed,	// (0x0006105f) cell_scut_pane_t1

0xd5fc,	// (0x0006106e) cell_scut_pane_t2

0x95c3,	// (0x0005d035) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0006352d) cell_scut_pane_t

0x73f3,	// (0x0005ae65) main_mup3_pane_g8_ParamLimits

0x73f3,	// (0x0005ae65) main_mup3_pane_g8

0x8874,	// (0x0005c2e6) area_vitu2_query_pane_ParamLimits

0x8874,	// (0x0005c2e6) area_vitu2_query_pane

0x939a,	// (0x0005ce0c) input_focus_pane_cp08

0xd60b,	// (0x0006107d) area_vitu2_query_pane_g1

0x95d1,	// (0x0005d043) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x00063534) area_vitu2_query_pane_g

0x95e2,	// (0x0005d054) area_vitu2_query_pane_t1_ParamLimits

0x95e2,	// (0x0005d054) area_vitu2_query_pane_t1

0x95f6,	// (0x0005d068) area_vitu2_query_pane_t2_ParamLimits

0x95f6,	// (0x0005d068) area_vitu2_query_pane_t2

0x960a,	// (0x0005d07c) area_vitu2_query_pane_t3_ParamLimits

0x960a,	// (0x0005d07c) area_vitu2_query_pane_t3

0xd617,	// (0x00061089) area_vitu2_query_pane_t4_ParamLimits

0xd617,	// (0x00061089) area_vitu2_query_pane_t4

0xd63f,	// (0x000610b1) area_vitu2_query_pane_t5_ParamLimits

0xd63f,	// (0x000610b1) area_vitu2_query_pane_t5

0xd667,	// (0x000610d9) area_vitu2_query_pane_t6_ParamLimits

0xd667,	// (0x000610d9) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00063539) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00063539) area_vitu2_query_pane_t

0x9632,	// (0x0005d0a4) bg_button_pane_cp018

0x9640,	// (0x0005d0b2) bg_button_pane_cp021

0x964c,	// (0x0005d0be) bg_button_pane_cp022

0x965b,	// (0x0005d0cd) input_focus_pane_cp09

0x524f,	// (0x00058cc1) aid_size_touch_mv_arrow_left

0x5278,	// (0x00058cea) aid_size_touch_mv_arrow_right

0x8eda,	// (0x0005c94c) main_cset_slider_pane_g16_ParamLimits

0x8eda,	// (0x0005c94c) main_cset_slider_pane_g16

0x8ee6,	// (0x0005c958) main_cset_slider_pane_g17_ParamLimits

0x8ee6,	// (0x0005c958) main_cset_slider_pane_g17

0x9578,	// (0x0005cfea) cell_cam4_burst_pane_g1_ParamLimits

0xb6de,	// (0x0005f150) compa_mode_pane

0x90d5,	// (0x0005cb47) popup_vtel_slider_window_g3_ParamLimits

0x90d5,	// (0x0005cb47) popup_vtel_slider_window_g3

0x90ec,	// (0x0005cb5e) popup_vtel_slider_window_g4_ParamLimits

0x90ec,	// (0x0005cb5e) popup_vtel_slider_window_g4

0x9103,	// (0x0005cb75) popup_vtel_slider_window_t1_ParamLimits

0x9103,	// (0x0005cb75) popup_vtel_slider_window_t1

0xb6de,	// (0x0005f150) main_cl_pane

0xc208,	// (0x0005fc7a) popup_imed_adjust2_window_ParamLimits

0xc1e0,	// (0x0005fc52) bg_tb_trans_pane_cp05_ParamLimits

0xcc2d,	// (0x0006069f) popup_imed_adjust2_window_g1_ParamLimits

0xcc3c,	// (0x000606ae) popup_imed_adjust2_window_g2_ParamLimits

0xcc3c,	// (0x000606ae) popup_imed_adjust2_window_g2

0xcc48,	// (0x000606ba) popup_imed_adjust2_window_g3_ParamLimits

0xcc48,	// (0x000606ba) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x000632b3) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x000632b3) popup_imed_adjust2_window_g

0xcc54,	// (0x000606c6) popup_imed_adjust2_window_t1_ParamLimits

0xcc6c,	// (0x000606de) slider_imed_adjust_pane_ParamLimits

0xcc80,	// (0x000606f2) slider_imed_adjust_pane_g1_ParamLimits

0xcc90,	// (0x00060702) slider_imed_adjust_pane_g2_ParamLimits

0xcca0,	// (0x00060712) slider_imed_adjust_pane_g3_ParamLimits

0xccb1,	// (0x00060723) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x000632ba) slider_imed_adjust_pane_g_ParamLimits

0x859d,	// (0x0005c00f) aid_touch_area_cam4_ParamLimits

0x859d,	// (0x0005c00f) aid_touch_area_cam4

0xef99,	// (0x00062a0b) battery_pane_cp01

0x8651,	// (0x0005c0c3) main_camera4_pane_g6_ParamLimits

0x8651,	// (0x0005c0c3) main_camera4_pane_g6

0x8674,	// (0x0005c0e6) main_camera4_pane_t2_ParamLimits

0x8674,	// (0x0005c0e6) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x000633bd) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x000633bd) main_camera4_pane_t

0x86da,	// (0x0005c14c) aid_touch_area_vid4_ParamLimits

0x86da,	// (0x0005c14c) aid_touch_area_vid4

0x8738,	// (0x0005c1aa) main_video4_pane_g5_ParamLimits

0x8738,	// (0x0005c1aa) main_video4_pane_g5

0x875f,	// (0x0005c1d1) vid4_progress_pane_ParamLimits

0x875f,	// (0x0005c1d1) vid4_progress_pane

0xd2d8,	// (0x00060d4a) main_cset_slider_pane_g18_ParamLimits

0xd2d8,	// (0x00060d4a) main_cset_slider_pane_g18

0xd4d5,	// (0x00060f47) cell_cam4_burst_pane_g2_ParamLimits

0xd4d5,	// (0x00060f47) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0006350d) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0006350d) cell_cam4_burst_pane_g

0x087f,	// (0x000542f1) bg_cl_pane_ParamLimits

0x087f,	// (0x000542f1) bg_cl_pane

0x966a,	// (0x0005d0dc) cl_header_pane_ParamLimits

0x966a,	// (0x0005d0dc) cl_header_pane

0x967e,	// (0x0005d0f0) cl_listscroll_pane_ParamLimits

0x967e,	// (0x0005d0f0) cl_listscroll_pane

0xd6b3,	// (0x00061125) bg_cl_pane_g1

0xd6bb,	// (0x0006112d) bg_cl_pane_g2

0xd6c3,	// (0x00061135) bg_cl_pane_g3

0xd6cb,	// (0x0006113d) bg_cl_pane_g4

0xd6d3,	// (0x00061145) bg_cl_pane_g5

0xd6db,	// (0x0006114d) bg_cl_pane_g6

0xd6e3,	// (0x00061155) bg_cl_pane_g7

0xd6eb,	// (0x0006115d) bg_cl_pane_g8

0xd6f3,	// (0x00061165) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x00063548) bg_cl_pane_g

0x968e,	// (0x0005d100) aid_height_cl_leading_ParamLimits

0x968e,	// (0x0005d100) aid_height_cl_leading

0x969a,	// (0x0005d10c) aid_height_cl_text_ParamLimits

0x969a,	// (0x0005d10c) aid_height_cl_text

0x23b9,	// (0x00055e2b) bg_cl_header_pane_ParamLimits

0x23b9,	// (0x00055e2b) bg_cl_header_pane

0x96b9,	// (0x0005d12b) cl_header_pane_g1_ParamLimits

0x96b9,	// (0x0005d12b) cl_header_pane_g1

0x96cf,	// (0x0005d141) cl_header_pane_t1_ParamLimits

0x96cf,	// (0x0005d141) cl_header_pane_t1

0xd6fb,	// (0x0006116d) cl_list_pane

0xd2ab,	// (0x00060d1d) hc_scroll_pane_cp01

0x0c5b,	// (0x000546cd) bg_cl_header_pane_g1

0xd191,	// (0x00060c03) bg_cl_header_pane_g2

0x0c7b,	// (0x000546ed) bg_cl_header_pane_g3

0xd1a1,	// (0x00060c13) bg_cl_header_pane_g4

0xd199,	// (0x00060c0b) bg_cl_header_pane_g5

0xd3d6,	// (0x00060e48) bg_cl_header_pane_g6

0xd1b9,	// (0x00060c2b) bg_cl_header_pane_g7

0xd1c1,	// (0x00060c33) bg_cl_header_pane_g8

0xd1b1,	// (0x00060c23) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0006355b) bg_cl_header_pane_g

0x96e8,	// (0x0005d15a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x96e8,	// (0x0005d15a) hc_cl_list_double_graphic_heading_pane

0x96f9,	// (0x0005d16b) hc_cl_list_single_graphic_pane_ParamLimits

0x96f9,	// (0x0005d16b) hc_cl_list_single_graphic_pane

0x970f,	// (0x0005d181) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x970f,	// (0x0005d181) hc_cl_list_single_graphic_pane_g1

0x971b,	// (0x0005d18d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x971b,	// (0x0005d18d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0006356e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0006356e) hc_cl_list_single_graphic_pane_g

0x972f,	// (0x0005d1a1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x972f,	// (0x0005d1a1) hc_cl_list_single_graphic_pane_t1

0x970f,	// (0x0005d181) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x970f,	// (0x0005d181) hc_cl_list_double_graphic_heading_pane_g1

0x9744,	// (0x0005d1b6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9744,	// (0x0005d1b6) hc_cl_list_double_graphic_heading_pane_g2

0x9758,	// (0x0005d1ca) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9758,	// (0x0005d1ca) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x00063573) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x00063573) hc_cl_list_double_graphic_heading_pane_g

0x976c,	// (0x0005d1de) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x976c,	// (0x0005d1de) hc_cl_list_double_graphic_heading_pane_t1

0x9781,	// (0x0005d1f3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9781,	// (0x0005d1f3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0006357a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0006357a) hc_cl_list_double_graphic_heading_pane_t

0xf074,	// (0x00062ae6) vid4_progress_pane_g1

0xf080,	// (0x00062af2) vid4_progress_pane_g2

0xf08c,	// (0x00062afe) vid4_progress_pane_g3

0xf09b,	// (0x00062b0d) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0006357f) vid4_progress_pane_g

0xf0b9,	// (0x00062b2b) vid4_progress_pane_t1

0xf0cf,	// (0x00062b41) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0006358a) vid4_progress_pane_t

0xf0fa,	// (0x00062b6c) wait_bar_pane_cp07

0xc4d9,	// (0x0005ff4b) blid_firmament_pane_ParamLimits

0xc51c,	// (0x0005ff8e) popup_blid_sat_info2_window_g1

0xc540,	// (0x0005ffb2) popup_blid_sat_info2_window_t3

0xc54e,	// (0x0005ffc0) popup_blid_sat_info2_window_t4

0xc55c,	// (0x0005ffce) popup_blid_sat_info2_window_t5

0xc56a,	// (0x0005ffdc) popup_blid_sat_info2_window_t6

0xc57a,	// (0x0005ffec) popup_blid_sat_info2_window_t7

0xc588,	// (0x0005fffa) popup_blid_sat_info2_window_t8

0xc596,	// (0x00060008) popup_blid_sat_info2_window_t9

0xc5a4,	// (0x00060016) popup_blid_sat_info2_window_t10

0xc666,	// (0x000600d8) aid_firma_cardinal_ParamLimits

0xc67a,	// (0x000600ec) blid_firmament_pane_t1_ParamLimits

0xc691,	// (0x00060103) blid_firmament_pane_t2_ParamLimits

0xc6a8,	// (0x0006011a) blid_firmament_pane_t3_ParamLimits

0xc6bf,	// (0x00060131) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x000631ac) blid_firmament_pane_t_ParamLimits

0xc6d6,	// (0x00060148) blid_sat_info_pane_ParamLimits

0x23b9,	// (0x00055e2b) main_cam_set_pane_ParamLimits

0x7c50,	// (0x0005b6c2) aid_size_cell_colour_35_ParamLimits

0x7c70,	// (0x0005b6e2) aid_size_cell_colour_112_ParamLimits

0x7c90,	// (0x0005b702) aid_size_cell_effect_ParamLimits

0xc1e0,	// (0x0005fc52) bg_tb_trans_pane_cp02_ParamLimits

0x0ea7,	// (0x00054919) heading_imed_pane_ParamLimits

0x7cb0,	// (0x0005b722) listscroll_imed_pane_ParamLimits

0x1d84,	// (0x000557f6) popup_call2_audio_first_window_g5_ParamLimits

0x1d84,	// (0x000557f6) popup_call2_audio_first_window_g5

0x8248,	// (0x0005bcba) aid_size_touch_image3_arrow_left_ParamLimits

0x8248,	// (0x0005bcba) aid_size_touch_image3_arrow_left

0x8274,	// (0x0005bce6) aid_size_touch_image3_arrow_right_ParamLimits

0x8274,	// (0x0005bce6) aid_size_touch_image3_arrow_right

0xf0e5,	// (0x00062b57) vid4_progress_pane_t3

0x7fc3,	// (0x0005ba35) main_hwr_training_symbol_option_pane_ParamLimits

0x7fc3,	// (0x0005ba35) main_hwr_training_symbol_option_pane

0xcf1a,	// (0x0006098c) popup_hwr_training_preview_window_ParamLimits

0xcf1a,	// (0x0006098c) popup_hwr_training_preview_window

0x7fe3,	// (0x0005ba55) hwr_training_navi_pane_g5_ParamLimits

0x7fe3,	// (0x0005ba55) hwr_training_navi_pane_g5

0xd17f,	// (0x00060bf1) popup_char_count_window

0xefd1,	// (0x00062a43) bg_popup_sub_pane_cp20_ParamLimits

0x921b,	// (0x0005cc8d) list_vitu2_match_list_pane_ParamLimits

0x922a,	// (0x0005cc9c) vitu2_page_scroll_pane_ParamLimits

0x922a,	// (0x0005cc9c) vitu2_page_scroll_pane

0xd75e,	// (0x000611d0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd75e,	// (0x000611d0) list_single_hwr_training_symbol_option_pane

0xd771,	// (0x000611e3) list_single_hwr_training_symbol_option_pane_g1

0xd779,	// (0x000611eb) list_single_hwr_training_symbol_option_pane_t1

0xd787,	// (0x000611f9) bg_button_pane_cp023

0xd790,	// (0x00061202) bg_button_pane_cp024

0x97a0,	// (0x0005d212) vitu2_page_scroll_pane_g1

0x97a8,	// (0x0005d21a) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00063591) vitu2_page_scroll_pane_g

0x97b0,	// (0x0005d222) vitu2_page_scroll_pane_t1

0xd7c3,	// (0x00061235) popup_char_count_window_g1

0xd7cc,	// (0x0006123e) popup_char_count_window_g2

0xd7d5,	// (0x00061247) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x00063596) popup_char_count_window_g

0xd7de,	// (0x00061250) popup_char_count_window_t1

0xb6de,	// (0x0005f150) main_vded2_pane

0xcc19,	// (0x0006068b) aid_size_cell_imed_line

0xcc23,	// (0x00060695) grid_imed_line_width_pane

0x87c0,	// (0x0005c232) vid4_indicators_pane_g4

0xd7ec,	// (0x0006125e) cell_imed_line_width_pane_ParamLimits

0xd7ec,	// (0x0006125e) cell_imed_line_width_pane

0xd800,	// (0x00061272) cell_imed_line_width_pane_g1

0xc487,	// (0x0005fef9) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0006359d) cell_imed_line_width_pane_g

0x97bf,	// (0x0005d231) main_vded2_pane_g1_ParamLimits

0x97bf,	// (0x0005d231) main_vded2_pane_g1

0x97d5,	// (0x0005d247) main_vded2_pane_g2_ParamLimits

0x97d5,	// (0x0005d247) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x000635a2) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x000635a2) main_vded2_pane_g

0x97e7,	// (0x0005d259) vded2_slider_pane_ParamLimits

0x97e7,	// (0x0005d259) vded2_slider_pane

0x97f7,	// (0x0005d269) aid_size_touch_vded2_end

0x9801,	// (0x0005d273) aid_size_touch_vded2_playhead

0xd809,	// (0x0006127b) aid_size_touch_vded2_start

0xd811,	// (0x00061283) vded2_slider_bg_pane

0xd81a,	// (0x0006128c) vded2_slider_pane_g1

0xd823,	// (0x00061295) vded2_slider_pane_g2

0x980b,	// (0x0005d27d) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x000635a7) vded2_slider_pane_g

0xd82b,	// (0x0006129d) vded2_slider_bg_pane_g1

0xd834,	// (0x000612a6) vded2_slider_bg_pane_g2

0xd83d,	// (0x000612af) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x000635ae) vded2_slider_bg_pane_g

0x58f9,	// (0x0005936b) aid_postcard_touch_down_pane_ParamLimits

0x58f9,	// (0x0005936b) aid_postcard_touch_down_pane

0x590f,	// (0x00059381) aid_postcard_touch_up_pane_ParamLimits

0x590f,	// (0x00059381) aid_postcard_touch_up_pane

0xb6de,	// (0x0005f150) main_blid2_pane

0xc1ee,	// (0x0005fc60) popup_blid2_search_window

0xb6de,	// (0x0005f150) blid2_gps_pane

0xb6de,	// (0x0005f150) blid2_navig_pane

0xb6de,	// (0x0005f150) blid2_search_pane

0xb6de,	// (0x0005f150) blid2_tripm_pane

0x9816,	// (0x0005d288) blid2_search_pane_g1_ParamLimits

0x9816,	// (0x0005d288) blid2_search_pane_g1

0x9830,	// (0x0005d2a2) blid2_search_pane_t1_ParamLimits

0x9830,	// (0x0005d2a2) blid2_search_pane_t1

0x9842,	// (0x0005d2b4) aid_size_cell_blid2_gps_ParamLimits

0x9842,	// (0x0005d2b4) aid_size_cell_blid2_gps

0x985a,	// (0x0005d2cc) blid2_gps_pane_g1_ParamLimits

0x985a,	// (0x0005d2cc) blid2_gps_pane_g1

0x986e,	// (0x0005d2e0) grid_blid2_satellite_pane_ParamLimits

0x986e,	// (0x0005d2e0) grid_blid2_satellite_pane

0x9888,	// (0x0005d2fa) blid2_navig_pane_g1_ParamLimits

0x9888,	// (0x0005d2fa) blid2_navig_pane_g1

0x9894,	// (0x0005d306) blid2_navig_pane_t1_ParamLimits

0x9894,	// (0x0005d306) blid2_navig_pane_t1

0x98af,	// (0x0005d321) blid2_navig_pane_t2_ParamLimits

0x98af,	// (0x0005d321) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x000635b5) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x000635b5) blid2_navig_pane_t

0x98ca,	// (0x0005d33c) blid2_navig_ring_pane_ParamLimits

0x98ca,	// (0x0005d33c) blid2_navig_ring_pane

0x98e3,	// (0x0005d355) blid2_speed_pane_ParamLimits

0x98e3,	// (0x0005d355) blid2_speed_pane

0x98ef,	// (0x0005d361) blid2_tripm_pane_g1_ParamLimits

0x98ef,	// (0x0005d361) blid2_tripm_pane_g1

0x9908,	// (0x0005d37a) blid2_tripm_pane_g2_ParamLimits

0x9908,	// (0x0005d37a) blid2_tripm_pane_g2

0x991c,	// (0x0005d38e) blid2_tripm_pane_g3_ParamLimits

0x991c,	// (0x0005d38e) blid2_tripm_pane_g3

0x9930,	// (0x0005d3a2) blid2_tripm_pane_g4_ParamLimits

0x9930,	// (0x0005d3a2) blid2_tripm_pane_g4

0x9944,	// (0x0005d3b6) blid2_tripm_pane_g5_ParamLimits

0x9944,	// (0x0005d3b6) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x000635ba) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x000635ba) blid2_tripm_pane_g

0x996a,	// (0x0005d3dc) blid2_tripm_pane_t1_ParamLimits

0x996a,	// (0x0005d3dc) blid2_tripm_pane_t1

0x9985,	// (0x0005d3f7) blid2_tripm_pane_t2_ParamLimits

0x9985,	// (0x0005d3f7) blid2_tripm_pane_t2

0x999e,	// (0x0005d410) blid2_tripm_pane_t3_ParamLimits

0x999e,	// (0x0005d410) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x000635c7) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x000635c7) blid2_tripm_pane_t

0x99e5,	// (0x0005d457) cell_blid2_satellite_pane_ParamLimits

0x99e5,	// (0x0005d457) cell_blid2_satellite_pane

0x9a03,	// (0x0005d475) cell_blid2_satellite_pane_g1

0xd846,	// (0x000612b8) cell_blid2_satellite_pane_t1

0xc6e6,	// (0x00060158) blid2_speed_pane_g1

0xd854,	// (0x000612c6) blid2_speed_pane_t1

0xd862,	// (0x000612d4) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x000635d0) blid2_speed_pane_t

0xc6e6,	// (0x00060158) blid2_navig_ring_pane_g1

0x9a0c,	// (0x0005d47e) blid2_navig_ring_pane_g2

0x9a14,	// (0x0005d486) blid2_navig_ring_pane_g3

0x9a1c,	// (0x0005d48e) blid2_navig_ring_pane_g4

0x9a24,	// (0x0005d496) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x000635d5) blid2_navig_ring_pane_g

0xb6de,	// (0x0005f150) bg_popup_window_pane_cp011

0xd870,	// (0x000612e2) popup_blid2_search_window_g1

0xd878,	// (0x000612ea) popup_blid2_search_window_t1

0xd886,	// (0x000612f8) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x000635e0) popup_blid2_search_window_t

0x0b6a,	// (0x000545dc) main_browser_pane_g1

0x087f,	// (0x000542f1) main_browser_pane_ParamLimits

0xefd1,	// (0x00062a43) bg_button_pane_cp011_ParamLimits

0x8ab6,	// (0x0005c528) cell_vitu2_function_pane_g1_ParamLimits

0x23b9,	// (0x00055e2b) bg_popup_sub_pane_cp22_ParamLimits

0x939a,	// (0x0005ce0c) input_focus_pane_cp08_ParamLimits

0x93a7,	// (0x0005ce19) popup_vitu2_query_button_pane_ParamLimits

0x93a7,	// (0x0005ce19) popup_vitu2_query_button_pane

0x937c,	// (0x0005cdee) popup_vitu2_query_input_button_pane

0xd42b,	// (0x00060e9d) popup_vitu2_query_window_g1_ParamLimits

0x93b8,	// (0x0005ce2a) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x000634e7) popup_vitu2_query_window_g_ParamLimits

0xb6de,	// (0x0005f150) bg_button_pane_cp026

0x9a2c,	// (0x0005d49e) popup_vitu2_query_input_button_pane_g1

0xb6de,	// (0x0005f150) bg_button_pane_cp025

0xd894,	// (0x00061306) popup_vitu2_query_button_pane_t1

0x70eb,	// (0x0005ab5d) main_mp3_pane_t6

0x70f9,	// (0x0005ab6b) popup_slider_window_cp01

0xefa9,	// (0x00062a1b) cam4_battery_pane

0xefc7,	// (0x00062a39) cam4_battery_pane_cp02

0x9796,	// (0x0005d208) cam4_battery_pane_cp01

0xf06c,	// (0x00062ade) cam4_battery_pane_cp03

0xd018,	// (0x00060a8a) cam4_battery_pane_g1

0xc6e6,	// (0x00060158) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x000635e5) cam4_battery_pane_g

0xc5b2,	// (0x00060024) popup_blid_sat_info2_window_t11

0x524f,	// (0x00058cc1) aid_size_touch_mv_arrow_left_ParamLimits

0x5278,	// (0x00058cea) aid_size_touch_mv_arrow_right_ParamLimits

0x12c6,	// (0x00054d38) navi_pane_g1_ParamLimits

0x52a1,	// (0x00058d13) navi_pane_g2_ParamLimits

0x52cf,	// (0x00058d41) navi_pane_g3_ParamLimits

0xf44c,	// (0x00062ebe) navi_pane_g_ParamLimits

0x5327,	// (0x00058d99) navi_pane_mv_t1_ParamLimits

0x7cbc,	// (0x0005b72e) grid_imed_effect_pane_ParamLimits

0x0ab3,	// (0x00054525) aid_placing_vt_slider_lsc

0x0abb,	// (0x0005452d) aid_placing_vt_slider_prt

0x23b9,	// (0x00055e2b) bg_tb_trans_pane_cp01_ParamLimits

0xc872,	// (0x000602e4) popup_image_details_window_g1_ParamLimits

0xc885,	// (0x000602f7) popup_image_details_window_g2_ParamLimits

0xc89a,	// (0x0006030c) popup_image_details_window_g3_ParamLimits

0xc89a,	// (0x0006030c) popup_image_details_window_g3

0xf77f,	// (0x000631f1) popup_image_details_window_g_ParamLimits

0xc8ae,	// (0x00060320) popup_image_details_window_t1_ParamLimits

0xc8c0,	// (0x00060332) popup_image_details_window_t2_ParamLimits

0xc8d9,	// (0x0006034b) popup_image_details_window_t3_ParamLimits

0xc8ed,	// (0x0006035f) popup_image_details_window_t4_ParamLimits

0xc908,	// (0x0006037a) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x000631f8) popup_image_details_window_t_ParamLimits

0x96a6,	// (0x0005d118) cl_header_name_pane_ParamLimits

0x96a6,	// (0x0005d118) cl_header_name_pane

0x9a34,	// (0x0005d4a6) cl_header_name_pane_t1_ParamLimits

0x9a34,	// (0x0005d4a6) cl_header_name_pane_t1

0x9a55,	// (0x0005d4c7) cl_header_name_pane_t2_ParamLimits

0x9a55,	// (0x0005d4c7) cl_header_name_pane_t2

0x9a97,	// (0x0005d509) cl_header_name_pane_t3_ParamLimits

0x9a97,	// (0x0005d509) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x000635ea) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x000635ea) cl_header_name_pane_t

0x52f8,	// (0x00058d6a) navi_pane_mv_g2_ParamLimits

0xd13c,	// (0x00060bae) field_vitu2_entry_pane_g1_ParamLimits

0xd148,	// (0x00060bba) field_vitu2_entry_pane_g2_ParamLimits

0xd154,	// (0x00060bc6) field_vitu2_entry_pane_g3_ParamLimits

0xd154,	// (0x00060bc6) field_vitu2_entry_pane_g3

0xf974,	// (0x000633e6) field_vitu2_entry_pane_g_ParamLimits

0x8a32,	// (0x0005c4a4) cell_vitu2_itu_pane_g1_ParamLimits

0x8a42,	// (0x0005c4b4) cell_vitu2_itu_pane_g2_ParamLimits

0x8a42,	// (0x0005c4b4) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x000633f2) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x000633f2) cell_vitu2_itu_pane_g

0xefd1,	// (0x00062a43) bg_vkb2_func_pane_cp05_ParamLimits

0xefd1,	// (0x00062a43) bg_vkb2_func_pane_cp05

0xefd1,	// (0x00062a43) bg_vkb2_func_pane_cp03

0xefd1,	// (0x00062a43) bg_vkb2_func_pane_cp04

0xefd1,	// (0x00062a43) bg_vkb2_func_pane_cp10_ParamLimits

0xefd1,	// (0x00062a43) bg_vkb2_func_pane_cp10

0x964c,	// (0x0005d0be) bg_vkb2_func_pane_cp08

0x9632,	// (0x0005d0a4) bg_vkb2_func_pane_cp06

0x9640,	// (0x0005d0b2) bg_vkb2_func_pane_cp07

0xd799,	// (0x0006120b) bg_vkb2_func_pane_cp11_ParamLimits

0xd799,	// (0x0006120b) bg_vkb2_func_pane_cp11

0xd7ae,	// (0x00061220) bg_vkb2_func_pane_cp12_ParamLimits

0xd7ae,	// (0x00061220) bg_vkb2_func_pane_cp12

0xb6de,	// (0x0005f150) bg_vkb2_func_pane_cp09

0xd191,	// (0x00060c03) bg_vkb2_func_pane_g1

0x0c7b,	// (0x000546ed) bg_vkb2_func_pane_g2

0xd199,	// (0x00060c0b) bg_vkb2_func_pane_g3

0xd1a1,	// (0x00060c13) bg_vkb2_func_pane_g4

0xd3d6,	// (0x00060e48) bg_vkb2_func_pane_g5

0xd1b9,	// (0x00060c2b) bg_vkb2_func_pane_g6

0xd1c1,	// (0x00060c33) bg_vkb2_func_pane_g7

0xd1b1,	// (0x00060c23) bg_vkb2_func_pane_g8

0x0c5b,	// (0x000546cd) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x000635f1) bg_vkb2_func_pane_g

0x9958,	// (0x0005d3ca) blid2_tripm_pane_g6_ParamLimits

0x9958,	// (0x0005d3ca) blid2_tripm_pane_g6

0xcfd2,	// (0x00060a44) mp4_progress_pane_g1

0x99d1,	// (0x0005d443) blid2_tripm_values_pane_ParamLimits

0x99d1,	// (0x0005d443) blid2_tripm_values_pane

0x9ac8,	// (0x0005d53a) blid2_tripm_values_pane_t1

0x9ad6,	// (0x0005d548) blid2_tripm_values_pane_t2

0x9ae4,	// (0x0005d556) blid2_tripm_values_pane_t3

0x9af2,	// (0x0005d564) blid2_tripm_values_pane_t4

0x9b00,	// (0x0005d572) blid2_tripm_values_pane_t5

0x9b0e,	// (0x0005d580) blid2_tripm_values_pane_t6

0x9b1c,	// (0x0005d58e) blid2_tripm_values_pane_t7

0x9b2a,	// (0x0005d59c) blid2_tripm_values_pane_t8

0x9b38,	// (0x0005d5aa) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x00063604) blid2_tripm_values_pane_t

0x42f4,	// (0x00057d66) call_video_pane_t1_ParamLimits

0x4308,	// (0x00057d7a) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00062d47) call_video_pane_t_ParamLimits

0x57fc,	// (0x0005926e) msg_header_pane_g1_ParamLimits

0x14e1,	// (0x00054f53) msg_header_pane_g2_ParamLimits

0x14e1,	// (0x00054f53) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00062f61) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00062f61) msg_header_pane_g

0x087f,	// (0x000542f1) main_clock2_pane_ParamLimits

0x79e8,	// (0x0005b45a) grid_clock2_toolbar_pane_ParamLimits

0x79e8,	// (0x0005b45a) grid_clock2_toolbar_pane

0x79e8,	// (0x0005b45a) listscroll_clock2_pane_ParamLimits

0x79e8,	// (0x0005b45a) listscroll_clock2_pane

0x7ac4,	// (0x0005b536) main_clock2_pane_t3_ParamLimits

0x7ac4,	// (0x0005b536) main_clock2_pane_t3

0x7adf,	// (0x0005b551) main_clock2_pane_t4_ParamLimits

0x7adf,	// (0x0005b551) main_clock2_pane_t4

0xd8a2,	// (0x00061314) cell_clock2_toolbar_pane

0xd8aa,	// (0x0006131c) cell_clock2_toolbar_pane_cp01

0xd8aa,	// (0x0006131c) cell_clock2_toolbar_pane_cp02

0xd8b2,	// (0x00061324) cell_clock2_toolbar_pane_cp03

0xd8ba,	// (0x0006132c) list_clock2_pane

0x121d,	// (0x00054c8f) scroll_pane_cp10

0xd8c2,	// (0x00061334) list_single_clock2_pane_ParamLimits

0xd8c2,	// (0x00061334) list_single_clock2_pane

0x1366,	// (0x00054dd8) list_highlight_pane_cp08

0xd8cf,	// (0x00061341) list_single_clock2_pane_t1

0xd8dd,	// (0x0006134f) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x00063617) list_single_clock2_pane_t

0xb6de,	// (0x0005f150) bg_button_pane_cp10

0xd8eb,	// (0x0006135d) cell_clock2_toolbar_pane_g1

0x5885,	// (0x000592f7) aid_main_viewer_pane_g1_ParamLimits

0x5885,	// (0x000592f7) aid_main_viewer_pane_g1

0x5893,	// (0x00059305) aid_main_viewer_pane_g2_ParamLimits

0x5893,	// (0x00059305) aid_main_viewer_pane_g2

0x58a1,	// (0x00059313) aid_main_viewer_pane_g3_ParamLimits

0x58a1,	// (0x00059313) aid_main_viewer_pane_g3

0x58b0,	// (0x00059322) aid_main_viewer_pane_g4_ParamLimits

0x58b0,	// (0x00059322) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00062f72) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00062f72) aid_main_viewer_pane_g

0x630e,	// (0x00059d80) main_calc_pane_ParamLimits

0x6322,	// (0x00059d94) main_dialer2_pane_ParamLimits

0xb6de,	// (0x0005f150) main_cam6_pane

0xb6de,	// (0x0005f150) main_vid6_pane

0x79f4,	// (0x0005b466) listscroll_gen_pane_cp06_ParamLimits

0x79f4,	// (0x0005b466) listscroll_gen_pane_cp06

0x7afa,	// (0x0005b56c) main_clock2_pane_t5_ParamLimits

0x7afa,	// (0x0005b56c) main_clock2_pane_t5

0x7b51,	// (0x0005b5c3) aid_call2_pane_cp10_ParamLimits

0x7b63,	// (0x0005b5d5) aid_call_pane_cp10_ParamLimits

0x129b,	// (0x00054d0d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x129b,	// (0x00054d0d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7b75,	// (0x0005b5e7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7b75,	// (0x0005b5e7) popup_clock_analogue_window_cp10_g4_ParamLimits

0x129b,	// (0x00054d0d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x000632a8) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b87,	// (0x0005b5f9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x81f5,	// (0x0005bc67) cell_dialer2_keypad_pane_g2_ParamLimits

0x81f5,	// (0x0005bc67) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0006338e) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0006338e) cell_dialer2_keypad_pane_g

0x8211,	// (0x0005bc83) cell_dialer2_keypad_pane_t1

0x8dcd,	// (0x0005c83f) main_cset_text2_pane_ParamLimits

0x8dcd,	// (0x0005c83f) main_cset_text2_pane

0xd60b,	// (0x0006107d) area_vitu2_query_pane_g1_ParamLimits

0x95d1,	// (0x0005d043) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x00063534) area_vitu2_query_pane_g_ParamLimits

0xd68f,	// (0x00061101) area_vitu2_query_pane_t7_ParamLimits

0xd68f,	// (0x00061101) area_vitu2_query_pane_t7

0x9632,	// (0x0005d0a4) bg_button_pane_cp018_ParamLimits

0x9640,	// (0x0005d0b2) bg_button_pane_cp021_ParamLimits

0x964c,	// (0x0005d0be) bg_button_pane_cp022_ParamLimits

0x964c,	// (0x0005d0be) bg_vkb2_func_pane_cp08_ParamLimits

0x9632,	// (0x0005d0a4) bg_vkb2_func_pane_cp06_ParamLimits

0x9640,	// (0x0005d0b2) bg_vkb2_func_pane_cp07_ParamLimits

0x965b,	// (0x0005d0cd) input_focus_pane_cp09_ParamLimits

0xf10a,	// (0x00062b7c) cam6_autofocus_pane_ParamLimits

0xf10a,	// (0x00062b7c) cam6_autofocus_pane

0x9b46,	// (0x0005d5b8) cam6_image_uncrop_pane_ParamLimits

0x9b46,	// (0x0005d5b8) cam6_image_uncrop_pane

0x9b55,	// (0x0005d5c7) cam6_indi_pane_ParamLimits

0x9b55,	// (0x0005d5c7) cam6_indi_pane

0x9b6b,	// (0x0005d5dd) cam6_mode_pane_ParamLimits

0x9b6b,	// (0x0005d5dd) cam6_mode_pane

0x9b7d,	// (0x0005d5ef) cam6_timer_pane_ParamLimits

0x9b7d,	// (0x0005d5ef) cam6_timer_pane

0x9b89,	// (0x0005d5fb) cam6_zoom_pane_ParamLimits

0x9b89,	// (0x0005d5fb) cam6_zoom_pane

0x9b95,	// (0x0005d607) cam6_mode_pane_g1_ParamLimits

0x9b95,	// (0x0005d607) cam6_mode_pane_g1

0x9ba5,	// (0x0005d617) cam6_mode_pane_g2_ParamLimits

0x9ba5,	// (0x0005d617) cam6_mode_pane_g2

0x9bb5,	// (0x0005d627) cam6_mode_pane_g3_ParamLimits

0x9bb5,	// (0x0005d627) cam6_mode_pane_g3

0x9bc5,	// (0x0005d637) cam6_mode_pane_g4_ParamLimits

0x9bc5,	// (0x0005d637) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0006361c) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0006361c) cam6_mode_pane_g

0xd8f3,	// (0x00061365) bg_tb_trans_pane_cp08_ParamLimits

0xd8f3,	// (0x00061365) bg_tb_trans_pane_cp08

0xd901,	// (0x00061373) cam6_battery_pane_ParamLimits

0xd901,	// (0x00061373) cam6_battery_pane

0xd917,	// (0x00061389) cam6_indi_pane_g1_ParamLimits

0xd917,	// (0x00061389) cam6_indi_pane_g1

0xd929,	// (0x0006139b) cam6_indi_pane_g2_ParamLimits

0xd929,	// (0x0006139b) cam6_indi_pane_g2

0xd93b,	// (0x000613ad) cam6_indi_pane_g3_ParamLimits

0xd93b,	// (0x000613ad) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x00063625) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x00063625) cam6_indi_pane_g

0xd94d,	// (0x000613bf) cam6_indi_pane_t1_ParamLimits

0xd94d,	// (0x000613bf) cam6_indi_pane_t1

0x9bd5,	// (0x0005d647) cam6_autofocus_pane_g1

0x9bdd,	// (0x0005d64f) cam6_autofocus_pane_g2

0x9be5,	// (0x0005d657) cam6_autofocus_pane_g3

0x9bed,	// (0x0005d65f) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0006362c) cam6_autofocus_pane_g

0xd973,	// (0x000613e5) cam6_timer_pane_g1

0xd97b,	// (0x000613ed) cam6_timer_pane_t1

0xd989,	// (0x000613fb) cam6_zoom_cont_pane

0xd991,	// (0x00061403) cam6_zoom_pane_g1

0xd999,	// (0x0006140b) cam6_zoom_pane_g2

0x9bf5,	// (0x0005d667) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x00063635) cam6_zoom_pane_g

0xc6e6,	// (0x00060158) cam6_battery_pane_g1

0xc6e6,	// (0x00060158) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x000631b5) cam6_battery_pane_g

0xd9a1,	// (0x00061413) cam6_zoom_cont_pane_g1

0xd9aa,	// (0x0006141c) cam6_zoom_cont_pane_g2

0xd9b3,	// (0x00061425) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0006363c) cam6_zoom_cont_pane_g

0x9c12,	// (0x0005d684) cam6_mode_pane_cp_ParamLimits

0x9c12,	// (0x0005d684) cam6_mode_pane_cp

0x9c24,	// (0x0005d696) cam6_zoom_pane_cp_ParamLimits

0x9c24,	// (0x0005d696) cam6_zoom_pane_cp

0x9c30,	// (0x0005d6a2) vid6_image_uncrop_cif_pane_ParamLimits

0x9c30,	// (0x0005d6a2) vid6_image_uncrop_cif_pane

0x9c40,	// (0x0005d6b2) vid6_image_uncrop_nhd_pane_ParamLimits

0x9c40,	// (0x0005d6b2) vid6_image_uncrop_nhd_pane

0x9c4f,	// (0x0005d6c1) vid6_image_uncrop_vga_pane_ParamLimits

0x9c4f,	// (0x0005d6c1) vid6_image_uncrop_vga_pane

0x9c5e,	// (0x0005d6d0) vid6_image_uncrop_wvga_pane_ParamLimits

0x9c5e,	// (0x0005d6d0) vid6_image_uncrop_wvga_pane

0x9c6d,	// (0x0005d6df) vid6_indi_pane_ParamLimits

0x9c6d,	// (0x0005d6df) vid6_indi_pane

0xd8f3,	// (0x00061365) bg_tb_trans_pane_cp09_ParamLimits

0xd8f3,	// (0x00061365) bg_tb_trans_pane_cp09

0xd9cb,	// (0x0006143d) cam6_battery_pane_cp_ParamLimits

0xd9cb,	// (0x0006143d) cam6_battery_pane_cp

0xd9d7,	// (0x00061449) vid6_indi_pane_g1_ParamLimits

0xd9d7,	// (0x00061449) vid6_indi_pane_g1

0xd9e9,	// (0x0006145b) vid6_indi_pane_g2_ParamLimits

0xd9e9,	// (0x0006145b) vid6_indi_pane_g2

0xd9fb,	// (0x0006146d) vid6_indi_pane_g3_ParamLimits

0xd9fb,	// (0x0006146d) vid6_indi_pane_g3

0xda10,	// (0x00061482) vid6_indi_pane_g4_ParamLimits

0xda10,	// (0x00061482) vid6_indi_pane_g4

0xda25,	// (0x00061497) vid6_indi_pane_g5_ParamLimits

0xda25,	// (0x00061497) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x00063643) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x00063643) vid6_indi_pane_g

0xda3f,	// (0x000614b1) vid6_indi_pane_t1_ParamLimits

0xda3f,	// (0x000614b1) vid6_indi_pane_t1

0xda55,	// (0x000614c7) vid6_indi_pane_t2_ParamLimits

0xda55,	// (0x000614c7) vid6_indi_pane_t2

0xda7d,	// (0x000614ef) vid6_indi_pane_t3_ParamLimits

0xda7d,	// (0x000614ef) vid6_indi_pane_t3

0xdaa5,	// (0x00061517) vid6_indi_pane_t4_ParamLimits

0xdaa5,	// (0x00061517) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0006364e) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0006364e) vid6_indi_pane_t

0xdac9,	// (0x0006153b) wait_bar_pane_cp08

0x9c85,	// (0x0005d6f7) main_cset_text2_pane_t1_ParamLimits

0x9c85,	// (0x0005d6f7) main_cset_text2_pane_t1

0x9bfd,	// (0x0005d66f) listscroll_gen_pane_cp06_t1_ParamLimits

0x9bfd,	// (0x0005d66f) listscroll_gen_pane_cp06_t1

0xb6de,	// (0x0005f150) main_cam6_set_pane

0x8695,	// (0x0005c107) bg_tb_trans_pane_cp06_ParamLimits

0x86a3,	// (0x0005c115) cam4_indicators_pane_g1_ParamLimits

0x86b0,	// (0x0005c122) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x000633c2) cam4_indicators_pane_g_ParamLimits

0x86c8,	// (0x0005c13a) cam4_indicators_pane_t1_ParamLimits

0xefb9,	// (0x00062a2b) bg_tb_trans_pane_cp07_ParamLimits

0x86a3,	// (0x0005c115) vid4_indicators_pane_g1_ParamLimits

0x87a6,	// (0x0005c218) vid4_indicators_pane_g2_ParamLimits

0x87b3,	// (0x0005c225) vid4_indicators_pane_g3_ParamLimits

0x87c0,	// (0x0005c232) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x000633d4) vid4_indicators_pane_g_ParamLimits

0x87d8,	// (0x0005c24a) vid4_indicators_pane_t1_ParamLimits

0xf074,	// (0x00062ae6) vid4_progress_pane_g1_ParamLimits

0xf080,	// (0x00062af2) vid4_progress_pane_g2_ParamLimits

0xf08c,	// (0x00062afe) vid4_progress_pane_g3_ParamLimits

0xf09b,	// (0x00062b0d) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0006357f) vid4_progress_pane_g_ParamLimits

0xf0b9,	// (0x00062b2b) vid4_progress_pane_t1_ParamLimits

0xf0cf,	// (0x00062b41) vid4_progress_pane_t2_ParamLimits

0xf0e5,	// (0x00062b57) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0006358a) vid4_progress_pane_t_ParamLimits

0xf0fa,	// (0x00062b6c) wait_bar_pane_cp07_ParamLimits

0x9ca2,	// (0x0005d714) main_cam6_set_pane_g2_ParamLimits

0x9ca2,	// (0x0005d714) main_cam6_set_pane_g2

0x9cc6,	// (0x0005d738) main_cset6_listscroll_pane_ParamLimits

0x9cc6,	// (0x0005d738) main_cset6_listscroll_pane

0x9ce6,	// (0x0005d758) main_cset6_slider_pane_ParamLimits

0x9ce6,	// (0x0005d758) main_cset6_slider_pane

0x9cfc,	// (0x0005d76e) main_cset6_text2_pane_ParamLimits

0x9cfc,	// (0x0005d76e) main_cset6_text2_pane

0xdad8,	// (0x0006154a) main_cset6_text_pane

0xdae0,	// (0x00061552) main_cset_list_pane_copy1_ParamLimits

0xdae0,	// (0x00061552) main_cset_list_pane_copy1

0xdaf0,	// (0x00061562) scroll_pane_cp028_copy1

0x9d0a,	// (0x0005d77c) cset_list_set_pane_copy1

0x9d1b,	// (0x0005d78d) aid_position_infowindow_above_copy1

0x9d23,	// (0x0005d795) aid_position_infowindow_below_copy1

0x9d2b,	// (0x0005d79d) cset_list_set_pane_g1_copy1

0x9d33,	// (0x0005d7a5) cset_list_set_pane_g3_copy1_ParamLimits

0x9d33,	// (0x0005d7a5) cset_list_set_pane_g3_copy1

0x9d42,	// (0x0005d7b4) cset_list_set_pane_t1_copy1_ParamLimits

0x9d42,	// (0x0005d7b4) cset_list_set_pane_t1_copy1

0x23b9,	// (0x00055e2b) list_highlight_pane_cp021_copy1_ParamLimits

0x23b9,	// (0x00055e2b) list_highlight_pane_cp021_copy1

0xdaf9,	// (0x0006156b) cset6_slider_pane_ParamLimits

0xdaf9,	// (0x0006156b) cset6_slider_pane

0xdb25,	// (0x00061597) main_cset6_slider_pane_g1_ParamLimits

0xdb25,	// (0x00061597) main_cset6_slider_pane_g1

0x9d57,	// (0x0005d7c9) main_cset6_slider_pane_g2_ParamLimits

0x9d57,	// (0x0005d7c9) main_cset6_slider_pane_g2

0xdb4d,	// (0x000615bf) main_cset6_slider_pane_g3_ParamLimits

0xdb4d,	// (0x000615bf) main_cset6_slider_pane_g3

0x9d7f,	// (0x0005d7f1) main_cset6_slider_pane_g4_ParamLimits

0x9d7f,	// (0x0005d7f1) main_cset6_slider_pane_g4

0x9d8b,	// (0x0005d7fd) main_cset6_slider_pane_g5_ParamLimits

0x9d8b,	// (0x0005d7fd) main_cset6_slider_pane_g5

0xd2c0,	// (0x00060d32) main_cset6_slider_pane_g7_ParamLimits

0xd2c0,	// (0x00060d32) main_cset6_slider_pane_g7

0xd2cc,	// (0x00060d3e) main_cset6_slider_pane_g8_ParamLimits

0xd2cc,	// (0x00060d3e) main_cset6_slider_pane_g8

0x8e7a,	// (0x0005c8ec) main_cset6_slider_pane_g9_ParamLimits

0x8e7a,	// (0x0005c8ec) main_cset6_slider_pane_g9

0x8e86,	// (0x0005c8f8) main_cset6_slider_pane_g10_ParamLimits

0x8e86,	// (0x0005c8f8) main_cset6_slider_pane_g10

0x8e92,	// (0x0005c904) main_cset6_slider_pane_g11_ParamLimits

0x8e92,	// (0x0005c904) main_cset6_slider_pane_g11

0x8e9e,	// (0x0005c910) main_cset6_slider_pane_g12_ParamLimits

0x8e9e,	// (0x0005c910) main_cset6_slider_pane_g12

0x8eaa,	// (0x0005c91c) main_cset6_slider_pane_g13_ParamLimits

0x8eaa,	// (0x0005c91c) main_cset6_slider_pane_g13

0x8eb6,	// (0x0005c928) main_cset6_slider_pane_g14_ParamLimits

0x8eb6,	// (0x0005c928) main_cset6_slider_pane_g14

0x9d97,	// (0x0005d809) main_cset6_slider_pane_g15_ParamLimits

0x9d97,	// (0x0005d809) main_cset6_slider_pane_g15

0x8eda,	// (0x0005c94c) main_cset6_slider_pane_g16_ParamLimits

0x8eda,	// (0x0005c94c) main_cset6_slider_pane_g16

0x8ee6,	// (0x0005c958) main_cset6_slider_pane_g17_ParamLimits

0x8ee6,	// (0x0005c958) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x00063657) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x00063657) main_cset6_slider_pane_g

0xdb59,	// (0x000615cb) main_cset6_slider_pane_t1_ParamLimits

0xdb59,	// (0x000615cb) main_cset6_slider_pane_t1

0x9dc7,	// (0x0005d839) main_cset6_slider_pane_t2_ParamLimits

0x9dc7,	// (0x0005d839) main_cset6_slider_pane_t2

0x9df2,	// (0x0005d864) main_cset6_slider_pane_t3_ParamLimits

0x9df2,	// (0x0005d864) main_cset6_slider_pane_t3

0x9e1d,	// (0x0005d88f) main_cset6_slider_pane_t4_ParamLimits

0x9e1d,	// (0x0005d88f) main_cset6_slider_pane_t4

0x9e48,	// (0x0005d8ba) main_cset6_slider_pane_t5_ParamLimits

0x9e48,	// (0x0005d8ba) main_cset6_slider_pane_t5

0xdb9a,	// (0x0006160c) main_cset6_slider_pane_t7_ParamLimits

0xdb9a,	// (0x0006160c) main_cset6_slider_pane_t7

0x9e73,	// (0x0005d8e5) main_cset6_slider_pane_t8_ParamLimits

0x9e73,	// (0x0005d8e5) main_cset6_slider_pane_t8

0x9e97,	// (0x0005d909) main_cset6_slider_pane_t9_ParamLimits

0x9e97,	// (0x0005d909) main_cset6_slider_pane_t9

0x9ebb,	// (0x0005d92d) main_cset6_slider_pane_t10_ParamLimits

0x9ebb,	// (0x0005d92d) main_cset6_slider_pane_t10

0x9edf,	// (0x0005d951) main_cset6_slider_pane_t11_ParamLimits

0x9edf,	// (0x0005d951) main_cset6_slider_pane_t11

0xdbd0,	// (0x00061642) main_cset6_slider_pane_t14_ParamLimits

0xdbd0,	// (0x00061642) main_cset6_slider_pane_t14

0xdc09,	// (0x0006167b) main_cset6_slider_pane_t15_ParamLimits

0xdc09,	// (0x0006167b) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0006367c) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0006367c) main_cset6_slider_pane_t

0xdc42,	// (0x000616b4) cset_slider_pane_g1_copy1

0xdc4b,	// (0x000616bd) cset_slider_pane_g2_copy1

0xdc54,	// (0x000616c6) cset_slider_pane_g3_copy1

0xb6de,	// (0x0005f150) bg_popup_sub_pane_cp011_copy1

0xd437,	// (0x00060ea9) main_cset_text_pane_g1_copy1

0xd43f,	// (0x00060eb1) main_cset_text_pane_t1_copy1

0xd44d,	// (0x00060ebf) main_cset_text_pane_t2_copy1

0xd45b,	// (0x00060ecd) main_cset_text_pane_t3_copy1

0xd469,	// (0x00060edb) main_cset_text_pane_t4_copy1

0xd477,	// (0x00060ee9) main_cset_text_pane_t5_copy1

0xd485,	// (0x00060ef7) main_cset_text_pane_t6_copy1

0xd493,	// (0x00060f05) main_cset_text_pane_t7_copy1

0x9f03,	// (0x0005d975) main_cset_text2_pane_t1_copy1

0xb6de,	// (0x0005f150) main_ncimui_pane

0x6564,	// (0x00059fd6) popup_query_ncimui_window_ParamLimits

0x6564,	// (0x00059fd6) popup_query_ncimui_window

0xc9f3,	// (0x00060465) field_cale_ev2_pane_g4_ParamLimits

0xc9f3,	// (0x00060465) field_cale_ev2_pane_g4

0x80d5,	// (0x0005bb47) cell_video_dialer_keypad_pane_g2_ParamLimits

0x80d5,	// (0x0005bb47) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00063369) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00063369) cell_video_dialer_keypad_pane_g

0x80ed,	// (0x0005bb5f) cell_video_dialer_keypad_pane_t1

0xb6de,	// (0x0005f150) bg_popup_window_pane_cp012

0x10fa,	// (0x00054b6c) heading_pane_cp06

0xdd4c,	// (0x000617be) ncim_query_content_pane

0xb6de,	// (0x0005f150) bg_popup_heading_pane_cp01

0xdd54,	// (0x000617c6) ncim_heading_pane_t1

0xdd62,	// (0x000617d4) ncim_indicator_popup_pane

0xdd74,	// (0x000617e6) ncim_query_button_pane

0xdd88,	// (0x000617fa) ncim_query_content_pane_t1

0xdd9a,	// (0x0006180c) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x000636bb) ncim_query_content_pane_t

0xddd4,	// (0x00061846) ncim_query_list_pane

0xdde6,	// (0x00061858) ncim_query_popup_pane

0xdd62,	// (0x000617d4) ncim_indicator_popup_pane_ParamLimits

0x9fe5,	// (0x0005da57) ncim_query_content_pane_g1_ParamLimits

0x9fe5,	// (0x0005da57) ncim_query_content_pane_g1

0xdd88,	// (0x000617fa) ncim_query_content_pane_t1_ParamLimits

0xdd9a,	// (0x0006180c) ncim_query_content_pane_t2_ParamLimits

0x9ff1,	// (0x0005da63) ncim_query_content_pane_t3_ParamLimits

0x9ff1,	// (0x0005da63) ncim_query_content_pane_t3

0xa019,	// (0x0005da8b) ncim_query_content_pane_t4_ParamLimits

0xa019,	// (0x0005da8b) ncim_query_content_pane_t4

0xa041,	// (0x0005dab3) ncim_query_content_pane_t5_ParamLimits

0xa041,	// (0x0005dab3) ncim_query_content_pane_t5

0xddac,	// (0x0006181e) ncim_query_content_pane_t6_ParamLimits

0xddac,	// (0x0006181e) ncim_query_content_pane_t6

0xfc49,	// (0x000636bb) ncim_query_content_pane_t_ParamLimits

0xddd4,	// (0x00061846) ncim_query_list_pane_ParamLimits

0xdde6,	// (0x00061858) ncim_query_popup_pane_ParamLimits

0xddfa,	// (0x0006186c) wait_bar_pane_cp04

0xb6de,	// (0x0005f150) input_focus_pane_cp011

0xde02,	// (0x00061874) ncim_query_popup_pane_t1

0xde10,	// (0x00061882) ncim_list_query_list_pane_ParamLimits

0xde10,	// (0x00061882) ncim_list_query_list_pane

0xb6de,	// (0x0005f150) bg_button_pane_cp027

0xde1d,	// (0x0006188f) ncim_query_button_pane_g1

0xb6de,	// (0x0005f150) list_highlight_pane_cp012

0xde27,	// (0x00061899) ncim_list_query_list_pane_g1

0xde2f,	// (0x000618a1) ncim_list_query_list_pane_t1

0x86bc,	// (0x0005c12e) cam4_indicators_pane_g3_ParamLimits

0x86bc,	// (0x0005c12e) cam4_indicators_pane_g3

0x87cc,	// (0x0005c23e) vid4_indicators_pane_g5_ParamLimits

0x87cc,	// (0x0005c23e) vid4_indicators_pane_g5

0xf0aa,	// (0x00062b1c) vid4_progress_pane_g5_ParamLimits

0xf0aa,	// (0x00062b1c) vid4_progress_pane_g5

0x9f2d,	// (0x0005d99f) main_ncimui_pane_g1

0x9f73,	// (0x0005d9e5) ncimui_group_query_pane_ParamLimits

0x9f73,	// (0x0005d9e5) ncimui_group_query_pane

0x9fa7,	// (0x0005da19) ncimui_list_pane_ParamLimits

0x9fa7,	// (0x0005da19) ncimui_list_pane

0x9fc1,	// (0x0005da33) ncimui_text_pane_ParamLimits

0x9fc1,	// (0x0005da33) ncimui_text_pane

0xa069,	// (0x0005dadb) ncimui_text_pane_t1_ParamLimits

0xa069,	// (0x0005dadb) ncimui_text_pane_t1

0xde3d,	// (0x000618af) ncimui_list_single_graphic_pane_ParamLimits

0xde3d,	// (0x000618af) ncimui_list_single_graphic_pane

0xa086,	// (0x0005daf8) ncimui_query_pane_ParamLimits

0xa086,	// (0x0005daf8) ncimui_query_pane

0xb6de,	// (0x0005f150) list_highlight_pane_cp013

0xde4d,	// (0x000618bf) ncim_list_query_list_pane_t1_copy1

0xde27,	// (0x00061899) ncim_list_single_graphic_pane_g1

0xde5b,	// (0x000618cd) ncim_query_button_pane_cp01

0xde63,	// (0x000618d5) ncim_query_entry_pane_ParamLimits

0xde63,	// (0x000618d5) ncim_query_entry_pane

0xde73,	// (0x000618e5) ncimui_query_pane_g1

0xde7b,	// (0x000618ed) ncimui_query_pane_t1_ParamLimits

0xde7b,	// (0x000618ed) ncimui_query_pane_t1

0xb6de,	// (0x0005f150) input_focus_pane_cp012

0xde02,	// (0x00061874) ncim_query_entry_pane_t1

0x087f,	// (0x000542f1) main_im_pane_ParamLimits

0x23b9,	// (0x00055e2b) main_mobtv_pane_ParamLimits

0x23b9,	// (0x00055e2b) main_mobtv_pane

0x9daf,	// (0x0005d821) main_cset6_slider_pane_g18_ParamLimits

0x9daf,	// (0x0005d821) main_cset6_slider_pane_g18

0x9dbb,	// (0x0005d82d) main_cset6_slider_pane_g19_ParamLimits

0x9dbb,	// (0x0005d82d) main_cset6_slider_pane_g19

0xde91,	// (0x00061903) bg_main_mobtv_pane_ParamLimits

0xde91,	// (0x00061903) bg_main_mobtv_pane

0xa096,	// (0x0005db08) main_mobtv_info_pane

0xa09f,	// (0x0005db11) main_mobtv_loading_pane_ParamLimits

0xa09f,	// (0x0005db11) main_mobtv_loading_pane

0xde9f,	// (0x00061911) main_mobtv_pg_channel_list_pane

0xdea9,	// (0x0006191b) main_mobtv_pg_hdr_pane

0xa0ac,	// (0x0005db1e) main_mobtv_programe_curr_pane_ParamLimits

0xa0ac,	// (0x0005db1e) main_mobtv_programe_curr_pane

0xa0b9,	// (0x0005db2b) main_mobtv_programe_next_pane_ParamLimits

0xa0b9,	// (0x0005db2b) main_mobtv_programe_next_pane

0xdeb2,	// (0x00061924) popup_mobtv_noti_window

0xc6e6,	// (0x00060158) main_tv_pg_hdr_pane_g1

0xdeba,	// (0x0006192c) main_tv_pg_hdr_pane_g2

0xdec2,	// (0x00061934) main_tv_pg_hdr_pane_g3

0xdeca,	// (0x0006193c) main_tv_pg_hdr_pane_g4

0xded2,	// (0x00061944) main_tv_pg_hdr_pane_g5

0xdedc,	// (0x0006194e) main_tv_pg_hdr_pane_g6

0xdee6,	// (0x00061958) main_tv_pg_hdr_pane_g7

0xdef0,	// (0x00061962) main_tv_pg_hdr_pane_g8

0xdefa,	// (0x0006196c) main_tv_pg_hdr_pane_g9

0xdf04,	// (0x00061976) main_tv_pg_hdr_pane_g10

0xdf0e,	// (0x00061980) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x000636c8) main_tv_pg_hdr_pane_g

0xdf18,	// (0x0006198a) main_tv_pg_hdr_pane_t1

0xdf26,	// (0x00061998) main_tv_pg_hdr_pane_t2

0xdf34,	// (0x000619a6) main_tv_pg_hdr_pane_t3

0xdf44,	// (0x000619b6) main_tv_pg_hdr_pane_t4

0xdf54,	// (0x000619c6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x000636df) main_tv_pg_hdr_pane_t

0xdf64,	// (0x000619d6) single_mobtv_pg_channel_pane_ParamLimits

0xdf64,	// (0x000619d6) single_mobtv_pg_channel_pane

0xdf76,	// (0x000619e8) single_mobtv_pg_channel_table_pane

0xdf7f,	// (0x000619f1) single_mobtv_pg_channel_thumb_pane

0xdf88,	// (0x000619fa) single_tv_pg_channel_pane_g1

0xdf91,	// (0x00061a03) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x000636ea) single_tv_pg_channel_pane_g

0xc952,	// (0x000603c4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc952,	// (0x000603c4) bg_single_mobtv_pg_channel_thumb_pane

0xdf9a,	// (0x00061a0c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf9a,	// (0x00061a0c) single_mobtv_pg_channel_thumb_pane_g1

0xdfa8,	// (0x00061a1a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfa8,	// (0x00061a1a) single_mobtv_pg_channel_thumb_pane_g2

0xdfb4,	// (0x00061a26) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfb4,	// (0x00061a26) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x000636ef) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x000636ef) single_mobtv_pg_channel_thumb_pane_g

0xdfc0,	// (0x00061a32) single_mobtv_pg_channel_thumb_pane_t1

0xdfce,	// (0x00061a40) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x000636f6) single_mobtv_pg_channel_thumb_pane_t

0xc6e6,	// (0x00060158) bg_single_mobtv_pg_channel_table_pane_g1

0xc6e6,	// (0x00060158) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x000631b5) bg_single_mobtv_pg_channel_table_pane_g

0xdfdc,	// (0x00061a4e) single_mobtv_pg_channel_table_pane_t1

0xdfea,	// (0x00061a5c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x000636fb) single_mobtv_pg_channel_table_pane_t

0xa0ce,	// (0x0005db40) main_mobtv_info_pane_g1_ParamLimits

0xa0ce,	// (0x0005db40) main_mobtv_info_pane_g1

0xa0ec,	// (0x0005db5e) main_mobtv_info_pane_t1_ParamLimits

0xa0ec,	// (0x0005db5e) main_mobtv_info_pane_t1

0xa164,	// (0x0005dbd6) main_mobtv_info_pane_t2_ParamLimits

0xa164,	// (0x0005dbd6) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x00063705) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x00063705) main_mobtv_info_pane_t

0xa1f3,	// (0x0005dc65) wait_bar_pane_cp05

0xa205,	// (0x0005dc77) main_mobtv_loading_pane_g1_ParamLimits

0xa205,	// (0x0005dc77) main_mobtv_loading_pane_g1

0xa218,	// (0x0005dc8a) main_mobtv_loading_pane_g2_ParamLimits

0xa218,	// (0x0005dc8a) main_mobtv_loading_pane_g2

0xa224,	// (0x0005dc96) main_mobtv_loading_pane_g3_ParamLimits

0xa224,	// (0x0005dc96) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0006370c) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0006370c) main_mobtv_loading_pane_g

0xdff8,	// (0x00061a6a) main_mobtv_loading_pane_t1_ParamLimits

0xdff8,	// (0x00061a6a) main_mobtv_loading_pane_t1

0xe010,	// (0x00061a82) main_mobtv_loading_pane_t2_ParamLimits

0xe010,	// (0x00061a82) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x00063713) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x00063713) main_mobtv_loading_pane_t

0xa237,	// (0x0005dca9) wait_bar_pane_cp06_ParamLimits

0xa237,	// (0x0005dca9) wait_bar_pane_cp06

0xe034,	// (0x00061aa6) main_mobtv_programe_curr_pane_t1

0xe042,	// (0x00061ab4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x00063718) main_mobtv_programe_curr_pane_t

0xe050,	// (0x00061ac2) main_mobtv_programe_next_pane_t1

0xe05e,	// (0x00061ad0) main_mobtv_programe_next_pane_t2

0xe06c,	// (0x00061ade) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0006371d) main_mobtv_programe_next_pane_t

0xb6de,	// (0x0005f150) bg_popup_mobtv_noti_window_pane

0xe07a,	// (0x00061aec) popup_mobtv_noti_window_g1

0xe082,	// (0x00061af4) popup_mobtv_noti_window_t1

0xe090,	// (0x00061b02) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x00063724) popup_mobtv_noti_window_t

0xc6e6,	// (0x00060158) bg_popup_mobtv_noti_window_pane_g1

0xb6de,	// (0x0005f150) sc_clock_pane

0xb6de,	// (0x0005f150) main_fs_bigclock_pane

0x99bb,	// (0x0005d42d) blid2_tripm_pane_t4_ParamLimits

0x99bb,	// (0x0005d42d) blid2_tripm_pane_t4

0xa246,	// (0x0005dcb8) sc_clock_pane_g1_ParamLimits

0xa246,	// (0x0005dcb8) sc_clock_pane_g1

0xa258,	// (0x0005dcca) sc_clock_pane_t1_ParamLimits

0xa258,	// (0x0005dcca) sc_clock_pane_t1

0xa27a,	// (0x0005dcec) sc_clock_pane_t2_ParamLimits

0xa27a,	// (0x0005dcec) sc_clock_pane_t2

0xa292,	// (0x0005dd04) sc_clock_pane_t3_ParamLimits

0xa292,	// (0x0005dd04) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x00063729) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x00063729) sc_clock_pane_t

0xb02e,	// (0x0005eaa0) main_fs_bigclock_indicator_pane_ParamLimits

0xb02e,	// (0x0005eaa0) main_fs_bigclock_indicator_pane

0xc922,	// (0x00060394) main_fs_bigclock_pane_g1_ParamLimits

0xc922,	// (0x00060394) main_fs_bigclock_pane_g1

0xb03a,	// (0x0005eaac) main_fs_bigclock_pane_t1_ParamLimits

0xb03a,	// (0x0005eaac) main_fs_bigclock_pane_t1

0xb04c,	// (0x0005eabe) main_fs_bigclock_pane_t2_ParamLimits

0xb04c,	// (0x0005eabe) main_fs_bigclock_pane_t2

0xb060,	// (0x0005ead2) main_fs_bigclock_pane_t3_ParamLimits

0xb060,	// (0x0005ead2) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x00063928) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x00063928) main_fs_bigclock_pane_t

0xec7a,	// (0x000626ec) main_fs_bigclock_indicator_pane_g1

0xdd7c,	// (0x000617ee) ncim_query_content_pane_g2_ParamLimits

0xdd7c,	// (0x000617ee) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x000636b6) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x000636b6) ncim_query_content_pane_g

0xa2a9,	// (0x0005dd1b) sc_clock_pane_t4_ParamLimits

0xa2a9,	// (0x0005dd1b) sc_clock_pane_t4

0x23b9,	// (0x00055e2b) main_radioblah_pane

0xd0c5,	// (0x00060b37) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0c5,	// (0x00060b37) cell_call4_button_pane_t1_copy1

0x9f35,	// (0x0005d9a7) main_ncimui_pane_t1_ParamLimits

0x9f35,	// (0x0005d9a7) main_ncimui_pane_t1

0x9f47,	// (0x0005d9b9) main_ncimui_pane_t2_ParamLimits

0x9f47,	// (0x0005d9b9) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x000636af) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x000636af) main_ncimui_pane_t

0xe1be,	// (0x00061c30) main_radioblah_anim_pane_ParamLimits

0xe1be,	// (0x00061c30) main_radioblah_anim_pane

0xe1cf,	// (0x00061c41) main_radioblah_info_pane_ParamLimits

0xe1cf,	// (0x00061c41) main_radioblah_info_pane

0xe1e3,	// (0x00061c55) main_radioblah_pane_t1_ParamLimits

0xe1e3,	// (0x00061c55) main_radioblah_pane_t1

0xe1ff,	// (0x00061c71) main_radioblah_pane_t2_ParamLimits

0xe1ff,	// (0x00061c71) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0006374a) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0006374a) main_radioblah_pane_t

0xa352,	// (0x0005ddc4) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa352,	// (0x0005ddc4) main_radioblah_rocker_ctrl_pane

0xe247,	// (0x00061cb9) main_radioblah_info_pane_t1_ParamLimits

0xe247,	// (0x00061cb9) main_radioblah_info_pane_t1

0xa3aa,	// (0x0005de1c) main_radioblah_info_pane_t2_ParamLimits

0xa3aa,	// (0x0005de1c) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x00063753) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x00063753) main_radioblah_info_pane_t

0xc6e6,	// (0x00060158) main_radioblah_rocker_ctrl_pane_g1

0xa45a,	// (0x0005decc) main_radioblah_rocker_ctrl_pane_g2

0xa462,	// (0x0005ded4) main_radioblah_rocker_ctrl_pane_g3

0xa46a,	// (0x0005dedc) main_radioblah_rocker_ctrl_pane_g4

0xa472,	// (0x0005dee4) main_radioblah_rocker_ctrl_pane_g5

0xa47a,	// (0x0005deec) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0006375c) main_radioblah_rocker_ctrl_pane_g

0x9f03,	// (0x0005d975) main_cset_text2_pane_t1_copy1_ParamLimits

0xefa1,	// (0x00062a13) cam4_image_uncrop_qvga_pane

0xefb1,	// (0x00062a23) vid4_image_uncrop_qcif_pane

0xf10a,	// (0x00062b7c) cam6_image_uncrop_qvga_pane_ParamLimits

0xf10a,	// (0x00062b7c) cam6_image_uncrop_qvga_pane

0xd9bb,	// (0x0006142d) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9bb,	// (0x0006142d) vid6_image_uncrop_qcif_pane

0xb6de,	// (0x0005f150) bg_popup_preview_window_pane_cp03

0xdd2e,	// (0x000617a0) list_cset_text2_pane

0xdd36,	// (0x000617a8) main_cset6_text2_pane_g1

0xdd3e,	// (0x000617b0) main_cset6_text2_pane_t1

0xa482,	// (0x0005def4) list_cset_text2_pane_t1_ParamLimits

0xa482,	// (0x0005def4) list_cset_text2_pane_t1

0x23b9,	// (0x00055e2b) main_radioblah_pane_ParamLimits

0xa1df,	// (0x0005dc51) main_mobtv_info_pane_t3_ParamLimits

0xa1df,	// (0x0005dc51) main_mobtv_info_pane_t3

0xa340,	// (0x0005ddb2) main_radioblah_pane_g1

0xa37a,	// (0x0005ddec) main_radioblah_info_pane_g1

0xa3ff,	// (0x0005de71) main_radioblah_info_pane_t3_ParamLimits

0xa3ff,	// (0x0005de71) main_radioblah_info_pane_t3

0x4d75,	// (0x000587e7) highlight_cell_cale_month_pane_ParamLimits

0x4d75,	// (0x000587e7) highlight_cell_cale_month_pane

0xb6de,	// (0x0005f150) main_phob_fisheye_pane

0xca7c,	// (0x000604ee) scroll_pane_cp0031_ParamLimits

0xca7c,	// (0x000604ee) scroll_pane_cp0031

0xdac9,	// (0x0006153b) wait_bar_pane_cp08_ParamLimits

0x9d0a,	// (0x0005d77c) cset_list_set_pane_copy1_ParamLimits

0xe281,	// (0x00061cf3) highlight_cell_cale_month_pane_g1

0xa49b,	// (0x0005df0d) highlight_cell_cale_month_pane_t1

0xd6fb,	// (0x0006116d) list_gen_pane_cp01

0xd2ab,	// (0x00060d1d) scroll_pane_01

0x0071,	// (0x00053ae3) list_single_double_fisheye_pane

0xa4a9,	// (0x0005df1b) list_double_fisheye_pane_g1_ParamLimits

0xa4a9,	// (0x0005df1b) list_double_fisheye_pane_g1

0xa4b5,	// (0x0005df27) list_double_fisheye_pane_g2_ParamLimits

0xa4b5,	// (0x0005df27) list_double_fisheye_pane_g2

0xa4c9,	// (0x0005df3b) list_double_fisheye_pane_g3_ParamLimits

0xa4c9,	// (0x0005df3b) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00063769) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00063769) list_double_fisheye_pane_g

0xa4f2,	// (0x0005df64) list_double_fisheye_pane_t1_ParamLimits

0xa4f2,	// (0x0005df64) list_double_fisheye_pane_t1

0xa50d,	// (0x0005df7f) list_double_fisheye_pane_t2_ParamLimits

0xa50d,	// (0x0005df7f) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x00063774) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x00063774) list_double_fisheye_pane_t

0xb6de,	// (0x0005f150) main_call5_pane

0xa2d4,	// (0x0005dd46) sc_swipe_pane_ParamLimits

0xa2d4,	// (0x0005dd46) sc_swipe_pane

0xa542,	// (0x0005dfb4) call5_image_pane_ParamLimits

0xa542,	// (0x0005dfb4) call5_image_pane

0xa55f,	// (0x0005dfd1) call5_swipe_1_pane_ParamLimits

0xa55f,	// (0x0005dfd1) call5_swipe_1_pane

0xa572,	// (0x0005dfe4) call5_swipe_2_pane_ParamLimits

0xa572,	// (0x0005dfe4) call5_swipe_2_pane

0xa59d,	// (0x0005e00f) popup_call5_audio_first_window_ParamLimits

0xa59d,	// (0x0005e00f) popup_call5_audio_first_window

0xc952,	// (0x000603c4) call5_swipe_1_pane_g1_ParamLimits

0xc952,	// (0x000603c4) call5_swipe_1_pane_g1

0xe289,	// (0x00061cfb) call5_swipe_1_pane_g2_ParamLimits

0xe289,	// (0x00061cfb) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x00063779) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x00063779) call5_swipe_1_pane_g

0xe295,	// (0x00061d07) call5_swipe_1_pane_t1_ParamLimits

0xe295,	// (0x00061d07) call5_swipe_1_pane_t1

0xc952,	// (0x000603c4) call5_swipe_2_pane_g1_ParamLimits

0xc952,	// (0x000603c4) call5_swipe_2_pane_g1

0xe2aa,	// (0x00061d1c) call5_swipe_2_pane_g2_ParamLimits

0xe2aa,	// (0x00061d1c) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0006377e) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0006377e) call5_swipe_2_pane_g

0xe2b6,	// (0x00061d28) call5_swipe_2_pane_t1_ParamLimits

0xe2b6,	// (0x00061d28) call5_swipe_2_pane_t1

0xe2cb,	// (0x00061d3d) sc_swipe_pane_g1_ParamLimits

0xe2cb,	// (0x00061d3d) sc_swipe_pane_g1

0xe2d8,	// (0x00061d4a) sc_swipe_pane_g2_ParamLimits

0xe2d8,	// (0x00061d4a) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x00063783) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x00063783) sc_swipe_pane_g

0xe2e4,	// (0x00061d56) sc_swipe_pane_t1_ParamLimits

0xe2e4,	// (0x00061d56) sc_swipe_pane_t1

0xb6de,	// (0x0005f150) main_cmail_launcher_pane

0xa5ae,	// (0x0005e020) aid_size_cell_cmail_l_ParamLimits

0xa5ae,	// (0x0005e020) aid_size_cell_cmail_l

0xa5c8,	// (0x0005e03a) grid_cmail_l_pane_ParamLimits

0xa5c8,	// (0x0005e03a) grid_cmail_l_pane

0xa5e3,	// (0x0005e055) cell_cmail_l_pane_ParamLimits

0xa5e3,	// (0x0005e055) cell_cmail_l_pane

0xa609,	// (0x0005e07b) cell_cmail_l_pane_g1_ParamLimits

0xa609,	// (0x0005e07b) cell_cmail_l_pane_g1

0xa615,	// (0x0005e087) cell_cmail_l_pane_t1_ParamLimits

0xa615,	// (0x0005e087) cell_cmail_l_pane_t1

0xe2f9,	// (0x00061d6b) cell_cmail_l_pane_t2_ParamLimits

0xe2f9,	// (0x00061d6b) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x00063788) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x00063788) cell_cmail_l_pane_t

0x23b9,	// (0x00055e2b) grid_highlight_pane_cp018_ParamLimits

0x23b9,	// (0x00055e2b) grid_highlight_pane_cp018

0x33d5,	// (0x00056e47) main2_pane_ParamLimits

0x33d5,	// (0x00056e47) main2_pane

0x0918,	// (0x0005438a) popup_sp_fs_action_menu_bg_pane_g1

0x0920,	// (0x00054392) popup_sp_fs_action_menu_bg_pane_g2

0x0928,	// (0x0005439a) popup_sp_fs_action_menu_bg_pane_g3

0x0930,	// (0x000543a2) popup_sp_fs_action_menu_bg_pane_g4

0x0938,	// (0x000543aa) popup_sp_fs_action_menu_bg_pane_g5

0x0940,	// (0x000543b2) popup_sp_fs_action_menu_bg_pane_g6

0x0948,	// (0x000543ba) popup_sp_fs_action_menu_bg_pane_g7

0x0950,	// (0x000543c2) popup_sp_fs_action_menu_bg_pane_g8

0x0958,	// (0x000543ca) popup_sp_fs_action_menu_bg_pane_g9

0x0960,	// (0x000543d2) popup_sp_fs_action_menu_bg_pane_g10

0x0960,	// (0x000543d2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00062c61) popup_sp_fs_action_menu_bg_pane_g

0x4161,	// (0x00057bd3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x2_t3_g3_g1

0x416d,	// (0x00057bdf) list_medium_line_x2_t3_g3_g2_ParamLimits

0x416d,	// (0x00057bdf) list_medium_line_x2_t3_g3_g2

0x4179,	// (0x00057beb) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4179,	// (0x00057beb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00062d11) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00062d11) list_medium_line_x2_t3_g3_g

0x4185,	// (0x00057bf7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4185,	// (0x00057bf7) list_medium_line_x2_t3_g3_t1

0x419a,	// (0x00057c0c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x419a,	// (0x00057c0c) list_medium_line_x2_t3_g3_t2

0x41ae,	// (0x00057c20) list_medium_line_x2_t3_g3_t3_ParamLimits

0x41ae,	// (0x00057c20) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00062d18) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00062d18) list_medium_line_x2_t3_g3_t

0x4161,	// (0x00057bd3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x2_t3_g2_g1

0x4179,	// (0x00057beb) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4179,	// (0x00057beb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00062d1f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00062d1f) list_medium_line_x2_t3_g2_g

0x41c3,	// (0x00057c35) list_medium_line_x2_t3_g2_t1_ParamLimits

0x41c3,	// (0x00057c35) list_medium_line_x2_t3_g2_t1

0x41d9,	// (0x00057c4b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x41d9,	// (0x00057c4b) list_medium_line_x2_t3_g2_t2

0x41ae,	// (0x00057c20) list_medium_line_x2_t3_g2_t3_ParamLimits

0x41ae,	// (0x00057c20) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00062d24) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00062d24) list_medium_line_x2_t3_g2_t

0x4161,	// (0x00057bd3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x2_t4_g4_g1

0x41eb,	// (0x00057c5d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x41eb,	// (0x00057c5d) list_medium_line_x2_t4_g4_g2

0x416d,	// (0x00057bdf) list_medium_line_x2_t4_g4_g3_ParamLimits

0x416d,	// (0x00057bdf) list_medium_line_x2_t4_g4_g3

0x41f7,	// (0x00057c69) list_medium_line_x2_t4_g4_g4_ParamLimits

0x41f7,	// (0x00057c69) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00062d2b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00062d2b) list_medium_line_x2_t4_g4_g

0x4203,	// (0x00057c75) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4203,	// (0x00057c75) list_medium_line_x2_t4_g4_t1

0x421d,	// (0x00057c8f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x421d,	// (0x00057c8f) list_medium_line_x2_t4_g4_t2

0x4233,	// (0x00057ca5) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4233,	// (0x00057ca5) list_medium_line_x2_t4_g4_t3

0x4248,	// (0x00057cba) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4248,	// (0x00057cba) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00062d34) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00062d34) list_medium_line_x2_t4_g4_t

0x4161,	// (0x00057bd3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x2_t2_g4_g1

0x41eb,	// (0x00057c5d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x41eb,	// (0x00057c5d) list_medium_line_x2_t2_g4_g2

0x416d,	// (0x00057bdf) list_medium_line_x2_t2_g4_g3_ParamLimits

0x416d,	// (0x00057bdf) list_medium_line_x2_t2_g4_g3

0x4179,	// (0x00057beb) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4179,	// (0x00057beb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00062d9b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00062d9b) list_medium_line_x2_t2_g4_g

0x4d93,	// (0x00058805) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4d93,	// (0x00058805) list_medium_line_x2_t2_g4_t1

0x41ae,	// (0x00057c20) list_medium_line_x2_t2_g4_t2_ParamLimits

0x41ae,	// (0x00057c20) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00062da4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00062da4) list_medium_line_x2_t2_g4_t

0x4161,	// (0x00057bd3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x2_t2_g3_g1

0x416d,	// (0x00057bdf) list_medium_line_x2_t2_g3_g2_ParamLimits

0x416d,	// (0x00057bdf) list_medium_line_x2_t2_g3_g2

0x4179,	// (0x00057beb) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4179,	// (0x00057beb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00062d11) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00062d11) list_medium_line_x2_t2_g3_g

0x4da8,	// (0x0005881a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4da8,	// (0x0005881a) list_medium_line_x2_t2_g3_t1

0x41ae,	// (0x00057c20) list_medium_line_x2_t2_g3_t2_ParamLimits

0x41ae,	// (0x00057c20) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00062da9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00062da9) list_medium_line_x2_t2_g3_t

0x4ece,	// (0x00058940) main_sp_fs_list_pane_ParamLimits

0x4ece,	// (0x00058940) main_sp_fs_list_pane

0x4eda,	// (0x0005894c) sp_fs_scroll_pane_ParamLimits

0x4eda,	// (0x0005894c) sp_fs_scroll_pane

0x4ee6,	// (0x00058958) list_medium_line_x2_t3_t1

0x4ef6,	// (0x00058968) list_medium_line_x2_t3_t2

0x4f04,	// (0x00058976) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00062df4) list_medium_line_x2_t3_t

0x4f12,	// (0x00058984) list_medium_line_x3_t4_t1

0x4f22,	// (0x00058994) list_medium_line_x3_t4_t2

0x4f30,	// (0x000589a2) list_medium_line_x3_t4_t3

0x4f04,	// (0x00058976) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00062dfb) list_medium_line_x3_t4_t

0x4f3e,	// (0x000589b0) list_medium_line_x4_t5_t1

0x4f4e,	// (0x000589c0) list_medium_line_x4_t5_t2

0x4f30,	// (0x000589a2) list_medium_line_x4_t5_t3

0x4f5c,	// (0x000589ce) list_medium_line_x4_t5_t4

0x4f04,	// (0x00058976) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00062e04) list_medium_line_x4_t5_t

0x4161,	// (0x00057bd3) list_medium_line_t4_g4_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_t4_g4_g1

0x41f7,	// (0x00057c69) list_medium_line_t4_g4_g2_ParamLimits

0x41f7,	// (0x00057c69) list_medium_line_t4_g4_g2

0x4f6a,	// (0x000589dc) list_medium_line_t4_g4_g3_ParamLimits

0x4f6a,	// (0x000589dc) list_medium_line_t4_g4_g3

0x4179,	// (0x00057beb) list_medium_line_t4_g4_g4_ParamLimits

0x4179,	// (0x00057beb) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00062e0f) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00062e0f) list_medium_line_t4_g4_g

0x4f76,	// (0x000589e8) list_medium_line_t4_g4_t1_ParamLimits

0x4f76,	// (0x000589e8) list_medium_line_t4_g4_t1

0x4f8b,	// (0x000589fd) list_medium_line_t4_g4_t2_ParamLimits

0x4f8b,	// (0x000589fd) list_medium_line_t4_g4_t2

0x4fa0,	// (0x00058a12) list_medium_line_t4_g4_t3_ParamLimits

0x4fa0,	// (0x00058a12) list_medium_line_t4_g4_t3

0x41ae,	// (0x00057c20) list_medium_line_t4_g4_t4_ParamLimits

0x41ae,	// (0x00057c20) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00062e18) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00062e18) list_medium_line_t4_g4_t

0x5078,	// (0x00058aea) chi_dic_find_pane_g1

0x6336,	// (0x00059da8) main_tport_pane

0xd3c8,	// (0x00060e3a) list_medium_line_plain_t1

0xd3de,	// (0x00060e50) list_medium_line_t2_g2_g1_ParamLimits

0xd3de,	// (0x00060e50) list_medium_line_t2_g2_g1

0xd3ea,	// (0x00060e5c) list_medium_line_t2_g2_g2_ParamLimits

0xd3ea,	// (0x00060e5c) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x000634cb) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x000634cb) list_medium_line_t2_g2_g

0x9239,	// (0x0005ccab) list_medium_line_t2_g2_t1_ParamLimits

0x9239,	// (0x0005ccab) list_medium_line_t2_g2_t1

0x9253,	// (0x0005ccc5) list_medium_line_t2_g2_t2_ParamLimits

0x9253,	// (0x0005ccc5) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x000634d0) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x000634d0) list_medium_line_t2_g2_t

0xd704,	// (0x00061176) aid_sp_fs_list_icon_a_sm

0xd70c,	// (0x0006117e) aid_sp_fs_list_icon_d

0xd714,	// (0x00061186) aid_sp_fs_text_primary

0xd71d,	// (0x0006118f) aid_sp_fs_text_secondary

0xd726,	// (0x00061198) list_medium_line

0xd726,	// (0x00061198) list_medium_line_g2

0xd726,	// (0x00061198) list_medium_line_g3

0xd726,	// (0x00061198) list_medium_line_plain

0xd726,	// (0x00061198) list_medium_line_plain_t2

0xd726,	// (0x00061198) list_medium_line_plain_t3

0xd726,	// (0x00061198) list_medium_line_right_icon

0xd726,	// (0x00061198) list_medium_line_right_iconx2

0xd726,	// (0x00061198) list_medium_line_t2

0xd726,	// (0x00061198) list_medium_line_t2_g2

0xd726,	// (0x00061198) list_medium_line_t2_g3

0xd726,	// (0x00061198) list_medium_line_t2_right_icon

0xd726,	// (0x00061198) list_medium_line_t2_right_iconx2

0xd726,	// (0x00061198) list_medium_line_t3

0xd726,	// (0x00061198) list_medium_line_t3_g2

0xd726,	// (0x00061198) list_medium_line_t3_g3

0xd726,	// (0x00061198) list_medium_line_t3_right_iconx2

0xd72f,	// (0x000611a1) list_medium_line_t4_g4

0xd738,	// (0x000611aa) list_medium_line_x2

0xd738,	// (0x000611aa) list_medium_line_x2_t2_g2

0xd738,	// (0x000611aa) list_medium_line_x2_t2_g3

0xd738,	// (0x000611aa) list_medium_line_x2_t2_g4

0xd738,	// (0x000611aa) list_medium_line_x2_t3

0xd738,	// (0x000611aa) list_medium_line_x2_t3_g2

0xd738,	// (0x000611aa) list_medium_line_x2_t3_g3

0xd738,	// (0x000611aa) list_medium_line_x2_t3_g4

0xd738,	// (0x000611aa) list_medium_line_x2_t4_g2

0xd738,	// (0x000611aa) list_medium_line_x2_t4_g4

0xd741,	// (0x000611b3) list_medium_line_x3

0xd741,	// (0x000611b3) list_medium_line_x3_t4

0xd741,	// (0x000611b3) list_medium_line_x3_t4_g4

0xd72f,	// (0x000611a1) list_medium_line_x4_t4

0xd72f,	// (0x000611a1) list_medium_line_x4_t4_g7

0xd72f,	// (0x000611a1) list_medium_line_x4_t5

0xd74a,	// (0x000611bc) list_single_fs_dyc_pane_ParamLimits

0xd74a,	// (0x000611bc) list_single_fs_dyc_pane

0x4161,	// (0x00057bd3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x4_t4_g7_g1

0xdc5d,	// (0x000616cf) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc5d,	// (0x000616cf) list_medium_line_x4_t4_g7_g2

0xdc69,	// (0x000616db) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc69,	// (0x000616db) list_medium_line_x4_t4_g7_g3

0xdc78,	// (0x000616ea) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc78,	// (0x000616ea) list_medium_line_x4_t4_g7_g4

0xdc84,	// (0x000616f6) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc84,	// (0x000616f6) list_medium_line_x4_t4_g7_g5

0xdc93,	// (0x00061705) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc93,	// (0x00061705) list_medium_line_x4_t4_g7_g6

0xdca2,	// (0x00061714) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdca2,	// (0x00061714) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x00063695) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x00063695) list_medium_line_x4_t4_g7_g

0xdcae,	// (0x00061720) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdcae,	// (0x00061720) list_medium_line_x4_t4_g7_t1

0xdcc3,	// (0x00061735) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdcc3,	// (0x00061735) list_medium_line_x4_t4_g7_t2

0xdcd8,	// (0x0006174a) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdcd8,	// (0x0006174a) list_medium_line_x4_t4_g7_t3

0xdced,	// (0x0006175f) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdced,	// (0x0006175f) list_medium_line_x4_t4_g7_t4

0xdcff,	// (0x00061771) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdcff,	// (0x00061771) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x000636a4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x000636a4) list_medium_line_x4_t4_g7_t

0xdd11,	// (0x00061783) list_single_dyc_row_pane_ParamLimits

0xdd11,	// (0x00061783) list_single_dyc_row_pane

0xa52f,	// (0x0005dfa1) call5_gesture_pane_ParamLimits

0xa52f,	// (0x0005dfa1) call5_gesture_pane

0xa585,	// (0x0005dff7) call5_windows_pane_ParamLimits

0xa585,	// (0x0005dff7) call5_windows_pane

0xa62b,	// (0x0005e09d) call5_swipe_1_pane_cp_ParamLimits

0xa62b,	// (0x0005e09d) call5_swipe_1_pane_cp

0xa637,	// (0x0005e0a9) call5_swipe_2_pane_cp_ParamLimits

0xa637,	// (0x0005e0a9) call5_swipe_2_pane_cp

0x1366,	// (0x00054dd8) call5_image_pane_cp

0xa643,	// (0x0005e0b5) popup_call5_audio_first_window_cp_ParamLimits

0xa643,	// (0x0005e0b5) popup_call5_audio_first_window_cp

0xe2cb,	// (0x00061d3d) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2cb,	// (0x00061d3d) call5_swipe_1_pane_g1_cp

0xe30b,	// (0x00061d7d) call5_swipe_1_pane_g2_cp

0xe2e4,	// (0x00061d56) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2e4,	// (0x00061d56) call5_swipe_1_pane_t1_cp

0xe2cb,	// (0x00061d3d) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2cb,	// (0x00061d3d) call5_swipe_2_pane_g1_cp

0xe313,	// (0x00061d85) call5_swipe_2_pane_g2_cp

0xe31b,	// (0x00061d8d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe31b,	// (0x00061d8d) call5_swipe_2_pane_t1_cp

0x23b9,	// (0x00055e2b) main_sp_fs_email_pane

0xe330,	// (0x00061da2) main_sp_fs_listscroll_pane_te

0xe339,	// (0x00061dab) popup_sp_fs_action_menu_pane_ParamLimits

0xe339,	// (0x00061dab) popup_sp_fs_action_menu_pane

0xc6e6,	// (0x00060158) bg_sp_fs_ctrlbar_pane_g1

0xe37d,	// (0x00061def) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe386,	// (0x00061df8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe38f,	// (0x00061e01) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc6e6,	// (0x00060158) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0006378d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc4cb,	// (0x0005ff3d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc4cb,	// (0x0005ff3d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe398,	// (0x00061e0a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe398,	// (0x00061e0a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3a4,	// (0x00061e16) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3a4,	// (0x00061e16) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x00063796) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x00063796) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3b0,	// (0x00061e22) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3b0,	// (0x00061e22) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe3ca,	// (0x00061e3c) list_medium_line_t2_right_icon_g1

0xa651,	// (0x0005e0c3) list_medium_line_t2_right_icon_t1

0xa661,	// (0x0005e0d3) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0006379b) list_medium_line_t2_right_icon_t

0xc1e0,	// (0x0005fc52) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc1e0,	// (0x0005fc52) bg_sp_fs_ctrlbar_pane

0xa6b7,	// (0x0005e129) main_sp_fs_ctrlbar_button_pane_cp01

0xa6bf,	// (0x0005e131) main_sp_fs_ctrlbar_ddmenu_pane

0xe40a,	// (0x00061e7c) main_sp_fs_ctrlbar_pane_g1

0xe416,	// (0x00061e88) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x000637a0) main_sp_fs_ctrlbar_pane_g

0xe422,	// (0x00061e94) main_sp_fs_ctrlbar_pane_t1

0xa6c9,	// (0x0005e13b) main_sp_fs_ctrlbar_pane

0xa6ed,	// (0x0005e15f) main_sp_fs_listscroll_pane_te_cp01

0xa70d,	// (0x0005e17f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa70d,	// (0x0005e17f) popup_sp_fs_action_menu_pane_cp01

0x23b9,	// (0x00055e2b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x23b9,	// (0x00055e2b) bg_sp_fs_highlight_list_pane_cp01

0xe437,	// (0x00061ea9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe437,	// (0x00061ea9) sp_fs_action_menu_list_gene_pane_g1

0xe446,	// (0x00061eb8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe446,	// (0x00061eb8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x000637a5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x000637a5) sp_fs_action_menu_list_gene_pane_g

0xe453,	// (0x00061ec5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe453,	// (0x00061ec5) sp_fs_action_menu_list_gene_pane_t1

0xe46b,	// (0x00061edd) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe46b,	// (0x00061edd) sp_fs_action_menu_list_gene_pane

0xe48a,	// (0x00061efc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe48a,	// (0x00061efc) popup_sp_fs_action_menu_bg_pane

0xe498,	// (0x00061f0a) sp_fs_action_menu_list_pane_ParamLimits

0xe498,	// (0x00061f0a) sp_fs_action_menu_list_pane

0xe4b8,	// (0x00061f2a) sp_fs_scroll_pane_cp01_ParamLimits

0xe4b8,	// (0x00061f2a) sp_fs_scroll_pane_cp01

0xa727,	// (0x0005e199) list_medium_line_plain_t2_t1

0xa737,	// (0x0005e1a9) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x000637aa) list_medium_line_plain_t2_t

0xa747,	// (0x0005e1b9) list_medium_line_plain_t3_t1

0xa757,	// (0x0005e1c9) list_medium_line_plain_t3_t2

0xa765,	// (0x0005e1d7) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x000637af) list_medium_line_plain_t3_t

0x4161,	// (0x00057bd3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x2_t2_g2_g1

0x4179,	// (0x00057beb) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4179,	// (0x00057beb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00062d1f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00062d1f) list_medium_line_x2_t2_g2_g

0x4f76,	// (0x000589e8) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4f76,	// (0x000589e8) list_medium_line_x2_t2_g2_t1

0x41ae,	// (0x00057c20) list_medium_line_x2_t2_g2_t2_ParamLimits

0x41ae,	// (0x00057c20) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x000637b6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x000637b6) list_medium_line_x2_t2_g2_t

0x4161,	// (0x00057bd3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x2_t4_g2_g1

0xe4de,	// (0x00061f50) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe4de,	// (0x00061f50) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x000637bb) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x000637bb) list_medium_line_x2_t4_g2_g

0xa773,	// (0x0005e1e5) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa773,	// (0x0005e1e5) list_medium_line_x2_t4_g2_t1

0xa78a,	// (0x0005e1fc) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa78a,	// (0x0005e1fc) list_medium_line_x2_t4_g2_t2

0xa79f,	// (0x0005e211) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa79f,	// (0x0005e211) list_medium_line_x2_t4_g2_t3

0x41ae,	// (0x00057c20) list_medium_line_x2_t4_g2_t4_ParamLimits

0x41ae,	// (0x00057c20) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x000637c0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x000637c0) list_medium_line_x2_t4_g2_t

0xe4f0,	// (0x00061f62) list_medium_line_t3_right_iconx2_g1

0xe3ca,	// (0x00061e3c) list_medium_line_t3_right_iconx2_g2

0xa7b1,	// (0x0005e223) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x000637c9) list_medium_line_t3_right_iconx2_g

0xa7bb,	// (0x0005e22d) list_medium_line_t3_right_iconx2_t1

0xa7cb,	// (0x0005e23d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x000637d0) list_medium_line_t3_right_iconx2_t

0x4161,	// (0x00057bd3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x3_t4_g4_g1

0x416d,	// (0x00057bdf) list_medium_line_x3_t4_g4_g2_ParamLimits

0x416d,	// (0x00057bdf) list_medium_line_x3_t4_g4_g2

0x41f7,	// (0x00057c69) list_medium_line_x3_t4_g4_g3_ParamLimits

0x41f7,	// (0x00057c69) list_medium_line_x3_t4_g4_g3

0xe4f8,	// (0x00061f6a) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe4f8,	// (0x00061f6a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x000637d5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x000637d5) list_medium_line_x3_t4_g4_g

0xa7d9,	// (0x0005e24b) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa7d9,	// (0x0005e24b) list_medium_line_x3_t4_g4_t1

0xa7f0,	// (0x0005e262) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa7f0,	// (0x0005e262) list_medium_line_x3_t4_g4_t2

0x4f8b,	// (0x000589fd) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4f8b,	// (0x000589fd) list_medium_line_x3_t4_g4_t3

0xe504,	// (0x00061f76) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe504,	// (0x00061f76) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x000637de) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x000637de) list_medium_line_x3_t4_g4_t

0xa809,	// (0x0005e27b) list_single_dyc_row_text_pane_t1_ParamLimits

0xa809,	// (0x0005e27b) list_single_dyc_row_text_pane_t1

0xa852,	// (0x0005e2c4) list_single_dyc_row_text_pane_t2_ParamLimits

0xa852,	// (0x0005e2c4) list_single_dyc_row_text_pane_t2

0xe521,	// (0x00061f93) list_single_dyc_row_text_pane_t3_ParamLimits

0xe521,	// (0x00061f93) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x000637e7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x000637e7) list_single_dyc_row_text_pane_t

0xe533,	// (0x00061fa5) list_single_dyc_row_pane_g1_ParamLimits

0xe533,	// (0x00061fa5) list_single_dyc_row_pane_g1

0xe53f,	// (0x00061fb1) list_single_dyc_row_pane_g2_ParamLimits

0xe53f,	// (0x00061fb1) list_single_dyc_row_pane_g2

0xe54b,	// (0x00061fbd) list_single_dyc_row_pane_g3_ParamLimits

0xe54b,	// (0x00061fbd) list_single_dyc_row_pane_g3

0xe557,	// (0x00061fc9) list_single_dyc_row_pane_g4_ParamLimits

0xe557,	// (0x00061fc9) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x000637ee) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x000637ee) list_single_dyc_row_pane_g

0xe563,	// (0x00061fd5) list_single_dyc_row_text_pane_ParamLimits

0xe563,	// (0x00061fd5) list_single_dyc_row_text_pane

0xb6de,	// (0x0005f150) bg_sp_fs_scroll_pane

0xe582,	// (0x00061ff4) thumb_sp_fs_scroll_pane

0xd3de,	// (0x00060e50) list_medium_line_g1_ParamLimits

0xd3de,	// (0x00060e50) list_medium_line_g1

0xe58b,	// (0x00061ffd) list_medium_line_t1_ParamLimits

0xe58b,	// (0x00061ffd) list_medium_line_t1

0x4161,	// (0x00057bd3) list_medium_line_x2_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x2_g1

0x416d,	// (0x00057bdf) list_medium_line_x2_g2_ParamLimits

0x416d,	// (0x00057bdf) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x000637f7) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x000637f7) list_medium_line_x2_g

0xe5a0,	// (0x00062012) list_medium_line_x2_t1_ParamLimits

0xe5a0,	// (0x00062012) list_medium_line_x2_t1

0x4161,	// (0x00057bd3) list_medium_line_x3_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x3_g1

0x416d,	// (0x00057bdf) list_medium_line_x3_g2_ParamLimits

0x416d,	// (0x00057bdf) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x000637f7) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x000637f7) list_medium_line_x3_g

0xe5a0,	// (0x00062012) list_medium_line_x3_t1_ParamLimits

0xe5a0,	// (0x00062012) list_medium_line_x3_t1

0xe5b6,	// (0x00062028) thumb_sp_fs_scroll_pane_g1

0xe5bf,	// (0x00062031) thumb_sp_fs_scroll_pane_g2

0xe5c8,	// (0x0006203a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x000637fc) thumb_sp_fs_scroll_pane_g

0xe5b6,	// (0x00062028) bg_sp_fs_scroll_pane_g1

0xe5bf,	// (0x00062031) bg_sp_fs_scroll_pane_g2

0xe5c8,	// (0x0006203a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x000637fc) bg_sp_fs_scroll_pane_g

0x4161,	// (0x00057bd3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4161,	// (0x00057bd3) list_medium_line_x2_t3_g4_g1

0x41eb,	// (0x00057c5d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x41eb,	// (0x00057c5d) list_medium_line_x2_t3_g4_g2

0x416d,	// (0x00057bdf) list_medium_line_x2_t3_g4_g3_ParamLimits

0x416d,	// (0x00057bdf) list_medium_line_x2_t3_g4_g3

0x4179,	// (0x00057beb) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4179,	// (0x00057beb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00062d9b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00062d9b) list_medium_line_x2_t3_g4_g

0xa8ac,	// (0x0005e31e) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa8ac,	// (0x0005e31e) list_medium_line_x2_t3_g4_t1

0xa8c2,	// (0x0005e334) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa8c2,	// (0x0005e334) list_medium_line_x2_t3_g4_t2

0x41ae,	// (0x00057c20) list_medium_line_x2_t3_g4_t3_ParamLimits

0x41ae,	// (0x00057c20) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x00063803) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x00063803) list_medium_line_x2_t3_g4_t

0xd3de,	// (0x00060e50) list_medium_line_g2_g1_ParamLimits

0xd3de,	// (0x00060e50) list_medium_line_g2_g1

0xd3ea,	// (0x00060e5c) list_medium_line_g2_g2_ParamLimits

0xd3ea,	// (0x00060e5c) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x000634cb) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x000634cb) list_medium_line_g2_g

0xe5d1,	// (0x00062043) list_medium_line_g2_t1_ParamLimits

0xe5d1,	// (0x00062043) list_medium_line_g2_t1

0xd3de,	// (0x00060e50) list_medium_line_t3_g2_g1_ParamLimits

0xd3de,	// (0x00060e50) list_medium_line_t3_g2_g1

0xd3ea,	// (0x00060e5c) list_medium_line_t3_g2_g2_ParamLimits

0xd3ea,	// (0x00060e5c) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x000634cb) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x000634cb) list_medium_line_t3_g2_g

0xa8dc,	// (0x0005e34e) list_medium_line_t3_g2_t1_ParamLimits

0xa8dc,	// (0x0005e34e) list_medium_line_t3_g2_t1

0xa8f6,	// (0x0005e368) list_medium_line_t3_g2_t2_ParamLimits

0xa8f6,	// (0x0005e368) list_medium_line_t3_g2_t2

0xa90b,	// (0x0005e37d) list_medium_line_t3_g2_t3_ParamLimits

0xa90b,	// (0x0005e37d) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0006380a) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0006380a) list_medium_line_t3_g2_t

0xe3ca,	// (0x00061e3c) list_medium_line_right_icon_g1

0xe5e6,	// (0x00062058) list_medium_line_right_icon_t1

0xd3de,	// (0x00060e50) list_medium_line_t2_g1_ParamLimits

0xd3de,	// (0x00060e50) list_medium_line_t2_g1

0xa925,	// (0x0005e397) list_medium_line_t2_t1_ParamLimits

0xa925,	// (0x0005e397) list_medium_line_t2_t1

0xa93f,	// (0x0005e3b1) list_medium_line_t2_t2_ParamLimits

0xa93f,	// (0x0005e3b1) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x00063811) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x00063811) list_medium_line_t2_t

0xd3de,	// (0x00060e50) list_medium_line_t3_g1_ParamLimits

0xd3de,	// (0x00060e50) list_medium_line_t3_g1

0xa954,	// (0x0005e3c6) list_medium_line_t3_t1_ParamLimits

0xa954,	// (0x0005e3c6) list_medium_line_t3_t1

0xa96b,	// (0x0005e3dd) list_medium_line_t3_t2_ParamLimits

0xa96b,	// (0x0005e3dd) list_medium_line_t3_t2

0xa980,	// (0x0005e3f2) list_medium_line_t3_t3_ParamLimits

0xa980,	// (0x0005e3f2) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x00063816) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x00063816) list_medium_line_t3_t

0xd3de,	// (0x00060e50) list_medium_line_g3_g1_ParamLimits

0xd3de,	// (0x00060e50) list_medium_line_g3_g1

0xe5f4,	// (0x00062066) list_medium_line_g3_g2_ParamLimits

0xe5f4,	// (0x00062066) list_medium_line_g3_g2

0xd3ea,	// (0x00060e5c) list_medium_line_g3_g3_ParamLimits

0xd3ea,	// (0x00060e5c) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0006381d) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0006381d) list_medium_line_g3_g

0xe600,	// (0x00062072) list_medium_line_g3_t1_ParamLimits

0xe600,	// (0x00062072) list_medium_line_g3_t1

0xd3de,	// (0x00060e50) list_medium_line_t2_g3_g1_ParamLimits

0xd3de,	// (0x00060e50) list_medium_line_t2_g3_g1

0xe5f4,	// (0x00062066) list_medium_line_t2_g3_g2_ParamLimits

0xe5f4,	// (0x00062066) list_medium_line_t2_g3_g2

0xd3ea,	// (0x00060e5c) list_medium_line_t2_g3_g3_ParamLimits

0xd3ea,	// (0x00060e5c) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0006381d) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0006381d) list_medium_line_t2_g3_g

0xa992,	// (0x0005e404) list_medium_line_t2_g3_t1_ParamLimits

0xa992,	// (0x0005e404) list_medium_line_t2_g3_t1

0xa9ac,	// (0x0005e41e) list_medium_line_t2_g3_t2_ParamLimits

0xa9ac,	// (0x0005e41e) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x00063824) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x00063824) list_medium_line_t2_g3_t

0xd3de,	// (0x00060e50) list_medium_line_t3_g3_g1_ParamLimits

0xd3de,	// (0x00060e50) list_medium_line_t3_g3_g1

0xe5f4,	// (0x00062066) list_medium_line_t3_g3_g2_ParamLimits

0xe5f4,	// (0x00062066) list_medium_line_t3_g3_g2

0xd3ea,	// (0x00060e5c) list_medium_line_t3_g3_g3_ParamLimits

0xd3ea,	// (0x00060e5c) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0006381d) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0006381d) list_medium_line_t3_g3_g

0xa9c1,	// (0x0005e433) list_medium_line_t3_g3_t1_ParamLimits

0xa9c1,	// (0x0005e433) list_medium_line_t3_g3_t1

0xa9d5,	// (0x0005e447) list_medium_line_t3_g3_t2_ParamLimits

0xa9d5,	// (0x0005e447) list_medium_line_t3_g3_t2

0xa9e7,	// (0x0005e459) list_medium_line_t3_g3_t3_ParamLimits

0xa9e7,	// (0x0005e459) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x00063829) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x00063829) list_medium_line_t3_g3_t

0xe4f0,	// (0x00061f62) list_medium_line_right_iconx2_g1

0xe3ca,	// (0x00061e3c) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00063830) list_medium_line_right_iconx2_g

0xe615,	// (0x00062087) list_medium_line_right_iconx2_t1

0xe4f0,	// (0x00061f62) list_medium_line_t2_right_iconx2_g1

0xe3ca,	// (0x00061e3c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00063830) list_medium_line_t2_right_iconx2_g

0xa9fb,	// (0x0005e46d) list_medium_line_t2_right_iconx2_t1

0xaa0b,	// (0x0005e47d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x00063835) list_medium_line_t2_right_iconx2_t

0xe623,	// (0x00062095) list_medium_line_x4_t4_t1

0xaa19,	// (0x0005e48b) list_medium_line_x4_t4_t2

0xaa29,	// (0x0005e49b) list_medium_line_x4_t4_t3

0xaa39,	// (0x0005e4ab) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0006383a) list_medium_line_x4_t4_t

0xaa8c,	// (0x0005e4fe) tport_appsw_pane_ParamLimits

0xaa8c,	// (0x0005e4fe) tport_appsw_pane

0xaa9d,	// (0x0005e50f) tport_contact_pane_ParamLimits

0xaa9d,	// (0x0005e50f) tport_contact_pane

0xaab6,	// (0x0005e528) tport_listscroll_pane_ParamLimits

0xaab6,	// (0x0005e528) tport_listscroll_pane

0xaad1,	// (0x0005e543) cell_tport_appsw_pane_ParamLimits

0xaad1,	// (0x0005e543) cell_tport_appsw_pane

0xd154,	// (0x00060bc6) tport_appsw_pane_g1_ParamLimits

0xd154,	// (0x00060bc6) tport_appsw_pane_g1

0xe631,	// (0x000620a3) tport_contact_pane_g1

0xde02,	// (0x00061874) tport_contact_pane_t1

0xe63a,	// (0x000620ac) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x00063843) tport_contact_pane_t

0xe648,	// (0x000620ba) list_tport_pane

0xe651,	// (0x000620c3) scroll_pane_cp_030

0xaaec,	// (0x0005e55e) cell_tport_appsw_pane_g1

0xe65a,	// (0x000620cc) cell_tport_appsw_pane_t1

0xb6de,	// (0x0005f150) grid_highlight_pane_cp019

0xab04,	// (0x0005e576) list_tport_double_graphic_pane_ParamLimits

0xab04,	// (0x0005e576) list_tport_double_graphic_pane

0x23b9,	// (0x00055e2b) list_highlight_pane_cp023_ParamLimits

0x23b9,	// (0x00055e2b) list_highlight_pane_cp023

0xab11,	// (0x0005e583) list_tport_double_graphic_pane_g1_ParamLimits

0xab11,	// (0x0005e583) list_tport_double_graphic_pane_g1

0xab1e,	// (0x0005e590) list_tport_double_graphic_pane_t1_ParamLimits

0xab1e,	// (0x0005e590) list_tport_double_graphic_pane_t1

0xab33,	// (0x0005e5a5) list_tport_double_graphic_pane_t2_ParamLimits

0xab33,	// (0x0005e5a5) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0006384f) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0006384f) list_tport_double_graphic_pane_t

0xb6de,	// (0x0005f150) main_cale_note_pane

0x89ed,	// (0x0005c45f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x89ed,	// (0x0005c45f) cell_vitu2_function_top_wide_pane_cp01

0xa1f3,	// (0x0005dc65) wait_bar_pane_cp05_ParamLimits

0xb6de,	// (0x0005f150) listscroll_cmail_pane

0xe670,	// (0x000620e2) list_cmail_pane

0xab4f,	// (0x0005e5c1) list_cmail_body_pane

0xe688,	// (0x000620fa) list_single_cmail_header_caption_pane

0xab63,	// (0x0005e5d5) list_single_cmail_header_detail_pane_ParamLimits

0xab63,	// (0x0005e5d5) list_single_cmail_header_detail_pane

0xab8d,	// (0x0005e5ff) list_single_cmail_header_caption_pane_t1

0xab9d,	// (0x0005e60f) list_single_cmail_header_detail_pane_g1_ParamLimits

0xab9d,	// (0x0005e60f) list_single_cmail_header_detail_pane_g1

0xe6aa,	// (0x0006211c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6aa,	// (0x0006211c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x00063854) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x00063854) list_single_cmail_header_detail_pane_g

0xe6c3,	// (0x00062135) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6c3,	// (0x00062135) list_single_cmail_header_detail_pane_t1

0xe6f9,	// (0x0006216b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6f9,	// (0x0006216b) list_single_cmail_header_editor_pane_bg

0xdf91,	// (0x00061a03) list_cmail_body_pane_g1

0xe70b,	// (0x0006217d) list_cmail_body_pane_t1

0xd191,	// (0x00060c03) list_single_cmail_header_editor_pane_bg_g1

0x0c7b,	// (0x000546ed) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1a1,	// (0x00060c13) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd199,	// (0x00060c0b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3d6,	// (0x00060e48) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1c1,	// (0x00060c33) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1b1,	// (0x00060c23) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1b9,	// (0x00060c2b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0c5b,	// (0x000546cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xabdb,	// (0x0005e64d) calenote_gesture_pane_ParamLimits

0xabdb,	// (0x0005e64d) calenote_gesture_pane

0xabfb,	// (0x0005e66d) calenote_window_pane_ParamLimits

0xabfb,	// (0x0005e66d) calenote_window_pane

0xe719,	// (0x0006218b) popup_note_window_cp01

0xac17,	// (0x0005e689) calenote_swipe_1_pane_ParamLimits

0xac17,	// (0x0005e689) calenote_swipe_1_pane

0xa637,	// (0x0005e0a9) calenote_swipe_2_pane_ParamLimits

0xa637,	// (0x0005e0a9) calenote_swipe_2_pane

0xe2cb,	// (0x00061d3d) calenote_swipe_1_pane_g1_ParamLimits

0xe2cb,	// (0x00061d3d) calenote_swipe_1_pane_g1

0xe2d8,	// (0x00061d4a) calenote_swipe_1_pane_g2_ParamLimits

0xe2d8,	// (0x00061d4a) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x00063783) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x00063783) calenote_swipe_1_pane_g

0xe72b,	// (0x0006219d) calenote_swipe_1_pane_t1_ParamLimits

0xe72b,	// (0x0006219d) calenote_swipe_1_pane_t1

0xe2cb,	// (0x00061d3d) calenote_swipe_2_pane_g1_ParamLimits

0xe2cb,	// (0x00061d3d) calenote_swipe_2_pane_g1

0xe74a,	// (0x000621bc) calenote_swipe_2_pane_g2_ParamLimits

0xe74a,	// (0x000621bc) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x00063860) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x00063860) calenote_swipe_2_pane_g

0xe756,	// (0x000621c8) calenote_swipe_2_pane_t1_ParamLimits

0xe756,	// (0x000621c8) calenote_swipe_2_pane_t1

0xb6de,	// (0x0005f150) main_mup_navstr_pane

0x76b8,	// (0x0005b12a) main_mup3_pane_t7_ParamLimits

0x76b8,	// (0x0005b12a) main_mup3_pane_t7

0xedd9,	// (0x0006284b) main_mp4_pane_g6_ParamLimits

0xedd9,	// (0x0006284b) main_mp4_pane_g6

0xef6f,	// (0x000629e1) main_image3_pane_t4_ParamLimits

0xef6f,	// (0x000629e1) main_image3_pane_t4

0xac2c,	// (0x0005e69e) popup_navstr_preview_pane_ParamLimits

0xac2c,	// (0x0005e69e) popup_navstr_preview_pane

0xac40,	// (0x0005e6b2) scroll_navstr_pane_ParamLimits

0xac40,	// (0x0005e6b2) scroll_navstr_pane

0xb6de,	// (0x0005f150) bg_popup_preview_window_pane_cp04

0xe77d,	// (0x000621ef) popup_navstr_preview_pane_t1

0xac54,	// (0x0005e6c6) scroll_navstr_pane_g1_ParamLimits

0xac54,	// (0x0005e6c6) scroll_navstr_pane_g1

0xac68,	// (0x0005e6da) scroll_navstr_pane_t1_ParamLimits

0xac68,	// (0x0005e6da) scroll_navstr_pane_t1

0xe722,	// (0x00062194) bg_button_pane_cp014

0xe722,	// (0x00062194) bg_button_pane_cp030

0xa4d5,	// (0x0005df47) list_double_fisheye_pane_g4_ParamLimits

0xa4d5,	// (0x0005df47) list_double_fisheye_pane_g4

0xa4e1,	// (0x0005df53) list_double_fisheye_pane_g5_ParamLimits

0xa4e1,	// (0x0005df53) list_double_fisheye_pane_g5

0xe678,	// (0x000620ea) sp_fs_scroll_pane_cp03

0xe40a,	// (0x00061e7c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe416,	// (0x00061e88) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x000637a0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe422,	// (0x00061e94) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xab45,	// (0x0005e5b7) sp_fs_scroll_pane_cp02

0x0983,	// (0x000543f5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0983,	// (0x000543f5) popup_sp_fs_calendar_preview_list_single_pane

0xb6de,	// (0x0005f150) main_cam6_pano_pane

0x23b9,	// (0x00055e2b) main_mup3_pane_ParamLimits

0xb6de,	// (0x0005f150) main_phacti_pane

0xa0c6,	// (0x0005db38) bg_button_pane_cp11

0xa0e0,	// (0x0005db52) main_mobtv_info_pane_g2_ParamLimits

0xa0e0,	// (0x0005db52) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x00063700) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x00063700) main_mobtv_info_pane_g

0xa2bb,	// (0x0005dd2d) sc_clock_pane_t5_ParamLimits

0xa2bb,	// (0x0005dd2d) sc_clock_pane_t5

0xa340,	// (0x0005ddb2) main_radioblah_pane_g1_ParamLimits

0xe217,	// (0x00061c89) main_radioblah_pane_t3_ParamLimits

0xe217,	// (0x00061c89) main_radioblah_pane_t3

0xe22f,	// (0x00061ca1) main_radioblah_pane_t4_ParamLimits

0xe22f,	// (0x00061ca1) main_radioblah_pane_t4

0xa368,	// (0x0005ddda) main_radioblah_text_pane_ParamLimits

0xa368,	// (0x0005ddda) main_radioblah_text_pane

0xa37a,	// (0x0005ddec) main_radioblah_info_pane_g1_ParamLimits

0xa413,	// (0x0005de85) main_radioblah_info_pane_t4_ParamLimits

0xa413,	// (0x0005de85) main_radioblah_info_pane_t4

0x23b9,	// (0x00055e2b) main_sp_fs_calendar_pane

0xac7f,	// (0x0005e6f1) main_phacti_pane_g1

0xac87,	// (0x0005e6f9) phacti_note_pane_ParamLimits

0xac87,	// (0x0005e6f9) phacti_note_pane

0xe794,	// (0x00062206) phacti_term_pane_ParamLimits

0xe794,	// (0x00062206) phacti_term_pane

0xe7a9,	// (0x0006221b) phacti_note_pane_t1_ParamLimits

0xe7a9,	// (0x0006221b) phacti_note_pane_t1

0xe7c0,	// (0x00062232) phacti_term_pane_g1

0xe7c8,	// (0x0006223a) phacti_term_pane_t1_ParamLimits

0xe7c8,	// (0x0006223a) phacti_term_pane_t1

0xe7f2,	// (0x00062264) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0a76,	// (0x000544e8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0006386a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7fa,	// (0x0006226c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7fa,	// (0x0006226c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe80f,	// (0x00062281) aid_popup_sp_fs_bg_corner_pane

0xc6e6,	// (0x00060158) popup_sp_fs_calendar_preview_bg_pane_g1

0xb6de,	// (0x0005f150) popup_sp_fs_calendar_preview_bg_pane

0xe817,	// (0x00062289) popup_sp_fs_calendar_preview_list_pane

0x23b9,	// (0x00055e2b) bg_main_sp_fs_cale_pane_ParamLimits

0x23b9,	// (0x00055e2b) bg_main_sp_fs_cale_pane

0xe81f,	// (0x00062291) listscroll_cale_mrui_pane_ParamLimits

0xe81f,	// (0x00062291) listscroll_cale_mrui_pane

0xe833,	// (0x000622a5) listscroll_sp_fs_schedule_track_pane

0xe83c,	// (0x000622ae) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe83c,	// (0x000622ae) main_sp_fs_ctrlbar_pane_cp01

0xe84d,	// (0x000622bf) main_sp_fs_ribbon_pane

0xe855,	// (0x000622c7) popup_sp_fs_cale_preview_window

0xacde,	// (0x0005e750) list_single_sp_fs_schedule_track_pane_ParamLimits

0xacde,	// (0x0005e750) list_single_sp_fs_schedule_track_pane

0x23b9,	// (0x00055e2b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x23b9,	// (0x00055e2b) bg_sp_fs_highlight_list_pane_cp03

0xacf1,	// (0x0005e763) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xacf1,	// (0x0005e763) list_single_sp_fs_schedule_track_pane_g1

0xacfd,	// (0x0005e76f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xacfd,	// (0x0005e76f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0006386f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0006386f) list_single_sp_fs_schedule_track_pane_g

0xad09,	// (0x0005e77b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xad09,	// (0x0005e77b) list_single_sp_fs_schedule_track_pane_t1

0xad23,	// (0x0005e795) sp_fs_schedule_track_pane_ParamLimits

0xad23,	// (0x0005e795) sp_fs_schedule_track_pane

0xe867,	// (0x000622d9) sp_fs_schedule_track_pane_g1

0xe86f,	// (0x000622e1) sp_fs_schedule_track_pane_g2

0xe877,	// (0x000622e9) sp_fs_schedule_track_pane_g3

0xe87f,	// (0x000622f1) sp_fs_schedule_track_pane_g4

0xe887,	// (0x000622f9) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x00063874) sp_fs_schedule_track_pane_g

0xd191,	// (0x00060c03) bg_sp_fs_schedule_viewer_highlight_g1

0x0c7b,	// (0x000546ed) bg_sp_fs_schedule_viewer_highlight_g2

0xd199,	// (0x00060c0b) bg_sp_fs_schedule_viewer_highlight_g3

0xd1a1,	// (0x00060c13) bg_sp_fs_schedule_viewer_highlight_g4

0xd3d6,	// (0x00060e48) bg_sp_fs_schedule_viewer_highlight_g5

0xd1b1,	// (0x00060c23) bg_sp_fs_schedule_viewer_highlight_g6

0xd1b9,	// (0x00060c2b) bg_sp_fs_schedule_viewer_highlight_g7

0xd1c1,	// (0x00060c33) bg_sp_fs_schedule_viewer_highlight_g8

0x0c5b,	// (0x000546cd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0006387f) bg_sp_fs_schedule_viewer_highlight_g

0xb6de,	// (0x0005f150) bg_main_sp_fs_ribbon_pane

0xad34,	// (0x0005e7a6) main_sp_fs_ribbon_pane_g1

0xe88f,	// (0x00062301) main_sp_fs_ribbon_pane_t1

0xad3d,	// (0x0005e7af) main_sp_fs_ribbon_pane_t2

0xe89e,	// (0x00062310) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x00063892) main_sp_fs_ribbon_pane_t

0xe8ad,	// (0x0006231f) main_sp_fs_ribbon_scheduler_pane

0xe8b5,	// (0x00062327) bg_main_sp_fs_ribbon_pane_g1

0xe8be,	// (0x00062330) bg_main_sp_fs_ribbon_pane_g2

0xe8c7,	// (0x00062339) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x00063899) bg_main_sp_fs_ribbon_pane_g

0xe8cf,	// (0x00062341) main_sp_fs_ribbon_scheduler_pane_g1

0xe8d8,	// (0x0006234a) main_sp_fs_ribbon_scheduler_pane_g2

0xe8e1,	// (0x00062353) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x000638a0) main_sp_fs_ribbon_scheduler_pane_g

0xe8ea,	// (0x0006235c) list_cale_mrui_pane

0xad4c,	// (0x0005e7be) sp_fs_scroll_pane_cp07_ParamLimits

0xad4c,	// (0x0005e7be) sp_fs_scroll_pane_cp07

0xad62,	// (0x0005e7d4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xad62,	// (0x0005e7d4) bg_sp_fs_schedule_viewer_highlight

0xe8f3,	// (0x00062365) list_single_sp_fs_schedule_track_pane_cp01

0xe8fb,	// (0x0006236d) list_sp_fs_schedule_track_pane

0xe903,	// (0x00062375) sp_fs_scroll_pane_cp06_ParamLimits

0xe903,	// (0x00062375) sp_fs_scroll_pane_cp06

0xc6e6,	// (0x00060158) bgmain_sp_fs_calendar_pane_g1

0xad72,	// (0x0005e7e4) list_single_cale_mrui_pane_ParamLimits

0xad72,	// (0x0005e7e4) list_single_cale_mrui_pane

0xe915,	// (0x00062387) list_single_cale_mrui_row_pane_ParamLimits

0xe915,	// (0x00062387) list_single_cale_mrui_row_pane

0xe922,	// (0x00062394) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe922,	// (0x00062394) list_single_cale_mrui_row_pane_g1

0xe95a,	// (0x000623cc) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe95a,	// (0x000623cc) list_single_cale_mrui_row_pane_t1

0xad93,	// (0x0005e805) list_single_cale_mrui_row_pane_t2_ParamLimits

0xad93,	// (0x0005e805) list_single_cale_mrui_row_pane_t2

0xe96c,	// (0x000623de) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe96c,	// (0x000623de) list_single_cale_mrui_row_pane_t3

0xe99b,	// (0x0006240d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe99b,	// (0x0006240d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x000638ac) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x000638ac) list_single_cale_mrui_row_pane_t

0xadfb,	// (0x0005e86d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xadfb,	// (0x0005e86d) list_single_cmail_header_editor_pane_bg_cp01

0xae21,	// (0x0005e893) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xae21,	// (0x0005e893) list_single_cmail_header_editor_pane_bg_cp02

0xae41,	// (0x0005e8b3) main_radioblah_text_pane_t1_ParamLimits

0xae41,	// (0x0005e8b3) main_radioblah_text_pane_t1

0xe9ca,	// (0x0006243c) cam6_indi_pane_cp01

0xe9d2,	// (0x00062444) cam6_mode_pane_cp01

0xe9da,	// (0x0006244c) cam6_pano_pane

0xe9e3,	// (0x00062455) cam6_zoom_pane_cp01

0xe9eb,	// (0x0006245d) cam6_pano_image_pane

0xe9f6,	// (0x00062468) cam6_pano_pane_g1

0xdf91,	// (0x00061a03) cam6_pano_pane_g2

0xe9ff,	// (0x00062471) cam6_pano_pane_g3

0xea08,	// (0x0006247a) cam6_pano_pane_g4

0xccca,	// (0x0006073c) cam6_pano_pane_g5

0xea11,	// (0x00062483) cam6_pano_pane_g6

0xea1b,	// (0x0006248d) cam6_pano_pane_g7

0xea23,	// (0x00062495) cam6_pano_pane_g8

0xea2c,	// (0x0006249e) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x000638b5) cam6_pano_pane_g

0xb6de,	// (0x0005f150) main_browser_tag_pane

0xe775,	// (0x000621e7) grid_navstr_albumart_pane

0xea37,	// (0x000624a9) cell_navstr_albumart_pane_ParamLimits

0xea37,	// (0x000624a9) cell_navstr_albumart_pane

0xea5a,	// (0x000624cc) cell_navstr_albumart_pane_g1

0xbffd,	// (0x0005fa6f) cell_navstr_albumart_pane_g2

0xc00d,	// (0x0005fa7f) cell_navstr_albumart_pane_g3

0xc005,	// (0x0005fa77) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x000638c8) cell_navstr_albumart_pane_g

0xae5b,	// (0x0005e8cd) bt_list_pane_ParamLimits

0xae5b,	// (0x0005e8cd) bt_list_pane

0xae6f,	// (0x0005e8e1) bt_list_pane_t1

0xae7e,	// (0x0005e8f0) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x000638d1) bt_list_pane_t

0xb6de,	// (0x0005f150) main_cale_prevew_pane

0xae8d,	// (0x0005e8ff) popup_cale_preview_window_ParamLimits

0xae8d,	// (0x0005e8ff) popup_cale_preview_window

0x23b9,	// (0x00055e2b) bg_popup_preview_window_pane_cp05_ParamLimits

0x23b9,	// (0x00055e2b) bg_popup_preview_window_pane_cp05

0xea62,	// (0x000624d4) list_cale_preview_pane_ParamLimits

0xea62,	// (0x000624d4) list_cale_preview_pane

0xaea6,	// (0x0005e918) list_double_cale_preview_pane_ParamLimits

0xaea6,	// (0x0005e918) list_double_cale_preview_pane

0xaeb8,	// (0x0005e92a) list_single_cale_preview_pane_ParamLimits

0xaeb8,	// (0x0005e92a) list_single_cale_preview_pane

0xaece,	// (0x0005e940) list_single_cale_preview_pane_g1

0xaed6,	// (0x0005e948) list_single_cale_preview_pane_t1_ParamLimits

0xaed6,	// (0x0005e948) list_single_cale_preview_pane_t1

0xaeeb,	// (0x0005e95d) list_double_cale_preview_pane_g1

0xaef3,	// (0x0005e965) list_double_cale_preview_pane_t1_ParamLimits

0xaef3,	// (0x0005e965) list_double_cale_preview_pane_t1

0xaf08,	// (0x0005e97a) list_double_cale_preview_pane_t2_ParamLimits

0xaf08,	// (0x0005e97a) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x000638d6) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x000638d6) list_double_cale_preview_pane_t

0xb6de,	// (0x0005f150) main_ezdial_pane

0x23b9,	// (0x00055e2b) main_sp_fs_email_pane_ParamLimits

0xa66f,	// (0x0005e0e1) cmail_ddmenu_btn01_pane_ParamLimits

0xa66f,	// (0x0005e0e1) cmail_ddmenu_btn01_pane

0xa682,	// (0x0005e0f4) cmail_ddmenu_btn02_pane_ParamLimits

0xa682,	// (0x0005e0f4) cmail_ddmenu_btn02_pane

0xa6a5,	// (0x0005e117) cmail_ddmenu_btn03_pane_ParamLimits

0xa6a5,	// (0x0005e117) cmail_ddmenu_btn03_pane

0xa6c9,	// (0x0005e13b) main_sp_fs_ctrlbar_pane_ParamLimits

0xa6ed,	// (0x0005e15f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xab4f,	// (0x0005e5c1) list_cmail_body_pane_ParamLimits

0xe6a1,	// (0x00062113) bg_button_pane_cp12

0xe6b6,	// (0x00062128) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6b6,	// (0x00062128) list_single_cmail_header_detail_pane_g3

0xabb5,	// (0x0005e627) list_single_cmail_header_detail_pane_t2_ParamLimits

0xabb5,	// (0x0005e627) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0006385b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0006385b) list_single_cmail_header_detail_pane_t

0xe7dd,	// (0x0006224f) phacti_term_pane_t2_ParamLimits

0xe7dd,	// (0x0006224f) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x00063865) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x00063865) phacti_term_pane_t

0xea6e,	// (0x000624e0) aid_size_list_single_double

0xaf20,	// (0x0005e992) popup_ezdial_listscroll_window

0xaf3c,	// (0x0005e9ae) popup_number_entry_window_cp01

0x1366,	// (0x00054dd8) bg_popup_call_pane_cp09

0xea7a,	// (0x000624ec) ezdial_list_pane

0xea82,	// (0x000624f4) scroll_pane_cp23

0xc1e0,	// (0x0005fc52) bg_button_pane_cp028_ParamLimits

0xc1e0,	// (0x0005fc52) bg_button_pane_cp028

0xaf4a,	// (0x0005e9bc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xaf4a,	// (0x0005e9bc) cmail_ddmenu_btn01_pane_g1

0xaf56,	// (0x0005e9c8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xaf56,	// (0x0005e9c8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x000638db) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x000638db) cmail_ddmenu_btn01_pane_g

0xea8a,	// (0x000624fc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea8a,	// (0x000624fc) cmail_ddmenu_btn01_pane_t1

0xc1e0,	// (0x0005fc52) bg_button_pane_cp029_ParamLimits

0xc1e0,	// (0x0005fc52) bg_button_pane_cp029

0xaf62,	// (0x0005e9d4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xaf62,	// (0x0005e9d4) cmail_ddmenu_btn02_pane_g1

0xaf7a,	// (0x0005e9ec) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xaf7a,	// (0x0005e9ec) cmail_ddmenu_btn02_pane_t1

0x23b9,	// (0x00055e2b) bg_button_pane_cp031_ParamLimits

0x23b9,	// (0x00055e2b) bg_button_pane_cp031

0xaf62,	// (0x0005e9d4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xaf62,	// (0x0005e9d4) cmail_ddmenu_btn03_pane_g1

0xaf7a,	// (0x0005e9ec) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xaf7a,	// (0x0005e9ec) cmail_ddmenu_btn03_pane_t1

0x8211,	// (0x0005bc83) cell_dialer2_keypad_pane_t1_ParamLimits

0x822b,	// (0x0005bc9d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x822b,	// (0x0005bc9d) cell_dialer2_keypad_pane_t1_copy1

0x9f6b,	// (0x0005d9dd) ncimui_group_button_pane

0x23b9,	// (0x00055e2b) main_sp_fs_calendar_pane_ParamLimits

0xe688,	// (0x000620fa) list_single_cmail_header_caption_pane_ParamLimits

0xd71d,	// (0x0006118f) aid_recal_txt_sm_pane

0xb6de,	// (0x0005f150) mian_recal_day_pane

0xe855,	// (0x000622c7) popup_sp_fs_cale_preview_window_ParamLimits

0xb6de,	// (0x0005f150) list_recal_day_pane

0xeab8,	// (0x0006252a) list_single_recal_day_pane_ParamLimits

0xeab8,	// (0x0006252a) list_single_recal_day_pane

0xeaca,	// (0x0006253c) list_single_recal_day_pane_g1_ParamLimits

0xeaca,	// (0x0006253c) list_single_recal_day_pane_g1

0xead6,	// (0x00062548) list_single_recal_day_pane_g2_ParamLimits

0xead6,	// (0x00062548) list_single_recal_day_pane_g2

0xeae5,	// (0x00062557) list_single_recal_day_pane_g3_ParamLimits

0xeae5,	// (0x00062557) list_single_recal_day_pane_g3

0xaf9e,	// (0x0005ea10) list_single_recal_day_pane_g4_ParamLimits

0xaf9e,	// (0x0005ea10) list_single_recal_day_pane_g4

0xeaf1,	// (0x00062563) list_single_recal_day_pane_g5_ParamLimits

0xeaf1,	// (0x00062563) list_single_recal_day_pane_g5

0xeb00,	// (0x00062572) list_single_recal_day_pane_g6_ParamLimits

0xeb00,	// (0x00062572) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x000638ea) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x000638ea) list_single_recal_day_pane_g

0xeb0c,	// (0x0006257e) list_single_recal_day_pane_t1

0xeb1a,	// (0x0006258c) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x000638f7) list_single_recal_day_pane_t

0xafb1,	// (0x0005ea23) ncimui_query_button_pane_ParamLimits

0xafb1,	// (0x0005ea23) ncimui_query_button_pane

0xafc1,	// (0x0005ea33) ncimui_query_button_pane_t1_ParamLimits

0xafc1,	// (0x0005ea33) ncimui_query_button_pane_t1

0xeb28,	// (0x0006259a) ncimui_query_button_pane_t2_ParamLimits

0xeb28,	// (0x0006259a) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x000638fc) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x000638fc) ncimui_query_button_pane_t

0xafd4,	// (0x0005ea46) query_button_pane_ParamLimits

0xafd4,	// (0x0005ea46) query_button_pane

0xb6de,	// (0x0005f150) bg_button_pane_cp0028

0xeb3b,	// (0x000625ad) query_button_pane_t1

0x6336,	// (0x00059da8) main_tport_pane_ParamLimits

0xaa49,	// (0x0005e4bb) bg_popup_window_pane_cp01_ParamLimits

0xaa49,	// (0x0005e4bb) bg_popup_window_pane_cp01

0xaa63,	// (0x0005e4d5) heading_pane_cp08_ParamLimits

0xaa63,	// (0x0005e4d5) heading_pane_cp08

0xaa77,	// (0x0005e4e9) heading_pane_cp07_ParamLimits

0xaa77,	// (0x0005e4e9) heading_pane_cp07

0xaaf4,	// (0x0005e566) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x00063848) cell_tport_appsw_pane_g

0x5787,	// (0x000591f9) input_candi_list_open_g1

0x0e22,	// (0x00054894) list_cale_time_pane_g6_ParamLimits

0x0e22,	// (0x00054894) list_cale_time_pane_g6

0x7103,	// (0x0005ab75) aid_size_touch_calib_1_ParamLimits

0x7103,	// (0x0005ab75) aid_size_touch_calib_1

0x710f,	// (0x0005ab81) aid_size_touch_calib_2_ParamLimits

0x710f,	// (0x0005ab81) aid_size_touch_calib_2

0x7125,	// (0x0005ab97) aid_size_touch_calib_3_ParamLimits

0x7125,	// (0x0005ab97) aid_size_touch_calib_3

0x7143,	// (0x0005abb5) aid_size_touch_calib_4_ParamLimits

0x7143,	// (0x0005abb5) aid_size_touch_calib_4

0x7159,	// (0x0005abcb) main_touch_calib_button_group_pane_ParamLimits

0x7159,	// (0x0005abcb) main_touch_calib_button_group_pane

0x7170,	// (0x0005abe2) main_touch_calib_pane_g1_ParamLimits

0x717c,	// (0x0005abee) main_touch_calib_pane_g2_ParamLimits

0x7188,	// (0x0005abfa) main_touch_calib_pane_g3_ParamLimits

0x7194,	// (0x0005ac06) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0006322a) main_touch_calib_pane_g_ParamLimits

0x71a0,	// (0x0005ac12) main_touch_calib_pane_t1_ParamLimits

0x71ba,	// (0x0005ac2c) main_touch_calib_pane_t2_ParamLimits

0x71d4,	// (0x0005ac46) main_touch_calib_pane_t3_ParamLimits

0x71e8,	// (0x0005ac5a) main_touch_calib_pane_t4_ParamLimits

0x71fc,	// (0x0005ac6e) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x00063233) main_touch_calib_pane_t_ParamLimits

0xcaa0,	// (0x00060512) list_single_fp_cale_pane_g3_ParamLimits

0xcaa0,	// (0x00060512) list_single_fp_cale_pane_g3

0xefd1,	// (0x00062a43) bg_button_pane_cp012_ParamLimits

0xefd1,	// (0x00062a43) bg_vkb2_func_pane_cp03_ParamLimits

0x91ef,	// (0x0005cc61) cell_vitu2_function_top_pane_g1_ParamLimits

0xefd1,	// (0x00062a43) bg_vkb2_func_pane_cp04_ParamLimits

0x9f1f,	// (0x0005d991) main_ncimui_button_group_pane_ParamLimits

0x9f1f,	// (0x0005d991) main_ncimui_button_group_pane

0x9f59,	// (0x0005d9cb) main_ncimui_pane_t3_ParamLimits

0x9f59,	// (0x0005d9cb) main_ncimui_pane_t3

0xe78b,	// (0x000621fd) phacti_button_group_pane

0xea6e,	// (0x000624e0) aid_size_list_single_double_ParamLimits

0xaf20,	// (0x0005e992) popup_ezdial_listscroll_window_ParamLimits

0xaf3c,	// (0x0005e9ae) popup_number_entry_window_cp01_ParamLimits

0xafe7,	// (0x0005ea59) phacti_button_pane_ParamLimits

0xafe7,	// (0x0005ea59) phacti_button_pane

0xb6de,	// (0x0005f150) bg_button_pane_cp14

0xeb49,	// (0x000625bb) phacti_button_pane_t1

0xaff8,	// (0x0005ea6a) main_touch_calib_button_pane_ParamLimits

0xaff8,	// (0x0005ea6a) main_touch_calib_button_pane

0x087f,	// (0x000542f1) bg_button_pane_cp18_ParamLimits

0x087f,	// (0x000542f1) bg_button_pane_cp18

0xeb57,	// (0x000625c9) main_touch_calib_button_pane_t1_ParamLimits

0xeb57,	// (0x000625c9) main_touch_calib_button_pane_t1

0xeb6d,	// (0x000625df) main_touch_calib_button_pane_t2_ParamLimits

0xeb6d,	// (0x000625df) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x00063901) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x00063901) main_touch_calib_button_pane_t

0xb6de,	// (0x0005f150) cell_ncimui_button_pane

0xb6de,	// (0x0005f150) bg_button_pane_cp032

0xeb8b,	// (0x000625fd) cell_ncimui_button_pane_t1

0xef4f,	// (0x000629c1) image3_infobar_pane_ParamLimits

0xef4f,	// (0x000629c1) image3_infobar_pane

0xa2e7,	// (0x0005dd59) fs_bigclock_status_pane_ParamLimits

0xa2e7,	// (0x0005dd59) fs_bigclock_status_pane

0xa2f4,	// (0x0005dd66) main_fs_bigclock_clock_pane_ParamLimits

0xa2f4,	// (0x0005dd66) main_fs_bigclock_clock_pane

0xa307,	// (0x0005dd79) main_fs_bigclock_indi_pane_ParamLimits

0xa307,	// (0x0005dd79) main_fs_bigclock_indi_pane

0xa31f,	// (0x0005dd91) main_fs_bigclock_swipe_pane_ParamLimits

0xa31f,	// (0x0005dd91) main_fs_bigclock_swipe_pane

0xb6de,	// (0x0005f150) main_fs_clock_dumped_data

0xe09e,	// (0x00061b10) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe09e,	// (0x00061b10) list_single_fs_bigclock_indicator_pane_g1

0xe0ba,	// (0x00061b2c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0ba,	// (0x00061b2c) list_single_fs_bigclock_indicator_pane_g2

0xe0d4,	// (0x00061b46) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0d4,	// (0x00061b46) list_single_fs_bigclock_indicator_pane_g3

0xe0ee,	// (0x00061b60) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0ee,	// (0x00061b60) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x00063734) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x00063734) list_single_fs_bigclock_indicator_pane_g

0xe114,	// (0x00061b86) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe114,	// (0x00061b86) list_single_fs_bigclock_indicator_pane_t1

0xe13c,	// (0x00061bae) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe13c,	// (0x00061bae) list_single_fs_bigclock_indicator_pane_t2

0xe164,	// (0x00061bd6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe164,	// (0x00061bd6) list_single_fs_bigclock_indicator_pane_t3

0xe18c,	// (0x00061bfe) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe18c,	// (0x00061bfe) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0006373f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0006373f) list_single_fs_bigclock_indicator_pane_t

0xeb99,	// (0x0006260b) image3_infobar_fav_pane_ParamLimits

0xeb99,	// (0x0006260b) image3_infobar_fav_pane

0xeba9,	// (0x0006261b) image3_infobar_loc_pane_ParamLimits

0xeba9,	// (0x0006261b) image3_infobar_loc_pane

0xebbd,	// (0x0006262f) image3_infobar_time_pane_ParamLimits

0xebbd,	// (0x0006262f) image3_infobar_time_pane

0xc6e6,	// (0x00060158) image3_infobar_time_pane_g1

0xebcd,	// (0x0006263f) image3_infobar_time_pane_t1

0xc6e6,	// (0x00060158) image3_infobar_loc_pane_g1

0xebdb,	// (0x0006264d) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x00063906) image3_infobar_loc_pane_g

0xebe3,	// (0x00062655) image3_infobar_loc_pane_t1

0xc6e6,	// (0x00060158) image3_infobar_fav_pane_g1

0xebf1,	// (0x00062663) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0006390b) image3_infobar_fav_pane_g

0xebf9,	// (0x0006266b) fs_bigclock_status_battery_pane

0xec02,	// (0x00062674) fs_bigclock_status_signal_pane

0xec0b,	// (0x0006267d) fs_bigclock_status_title_pane

0xec14,	// (0x00062686) fs_bigclock_status_signal_pane_g1

0xec1d,	// (0x0006268f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x00063910) fs_bigclock_status_signal_pane_g

0xec25,	// (0x00062697) fs_bigclock_status_battery_pane_g1

0xec2e,	// (0x000626a0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x00063915) fs_bigclock_status_battery_pane_g

0xec36,	// (0x000626a8) fs_bigclock_status_title_pane_t1

0xc6e6,	// (0x00060158) main_fs_bigclock_clock_pane_g1

0xec44,	// (0x000626b6) main_fs_bigclock_clock_pane_g2

0xec44,	// (0x000626b6) main_fs_bigclock_clock_pane_g3

0xec44,	// (0x000626b6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0006391a) main_fs_bigclock_clock_pane_g

0xec4c,	// (0x000626be) main_fs_bigclock_clock_pane_t1

0xec5a,	// (0x000626cc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x00063923) main_fs_bigclock_clock_pane_t

0xec69,	// (0x000626db) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec69,	// (0x000626db) list_single_fs_bigclock_indicator_pane

0xb00d,	// (0x0005ea7f) list_single_fs_bigclock_pane_ParamLimits

0xb00d,	// (0x0005ea7f) list_single_fs_bigclock_pane

0xec83,	// (0x000626f5) main_fs_bigclock_indicator_pane_t1

0xec92,	// (0x00062704) list_single_fs_bigclock_pane_g1

0xec9a,	// (0x0006270c) list_single_fs_bigclock_pane_t1

0xc6e6,	// (0x00060158) main_fs_bigclock_swipe_pane_g1

0xecd8,	// (0x0006274a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x00063934) main_fs_bigclock_swipe_pane_g

0xece0,	// (0x00062752) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xece0,	// (0x00062752) main_fs_bigclock_swipe_pane_t1

0x4fb5,	// (0x00058a27) call_type_pane_ParamLimits

0xb6de,	// (0x0005f150) main_btmg_pane

0xe94e,	// (0x000623c0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe94e,	// (0x000623c0) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x000638a7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x000638a7) list_single_cale_mrui_row_pane_g

0xeaa8,	// (0x0006251a) list_recal_vselct_arw_lo_pane

0xeab0,	// (0x00062522) list_recal_vselct_arw_up_pane

0xd714,	// (0x00061186) list_recal_vselct_pane

0xecfd,	// (0x0006276f) btmg_button_pane

0xb072,	// (0x0005eae4) main_btmg_pane_g1

0xb6de,	// (0x0005f150) bg_button_pane_cp044

0xf118,	// (0x00062b8a) btmg_button_pane_t1

0xc1d8,	// (0x0005fc4a) aid_listscroll_gen

0x23b9,	// (0x00055e2b) main_cntbar_detail_pane

0xe668,	// (0x000620da) list_cmail_folder_pane

0xe678,	// (0x000620ea) sp_fs_scroll_pane_cp03_ParamLimits

0xb07c,	// (0x0005eaee) list_single_fs_dyc_pane_cp01_ParamLimits

0xb07c,	// (0x0005eaee) list_single_fs_dyc_pane_cp01

0xf126,	// (0x00062b98) aid_size_cmail_indent

0xed07,	// (0x00062779) list_single_dyc_row_pane_cp01

0xb0c2,	// (0x0005eb34) cntbar_detail_list_pane_ParamLimits

0xb0c2,	// (0x0005eb34) cntbar_detail_list_pane

0xb10e,	// (0x0005eb80) main_cntbar_detail_cont_pane_ParamLimits

0xb10e,	// (0x0005eb80) main_cntbar_detail_cont_pane

0x4eda,	// (0x0005894c) scroll_pane_cp032_ParamLimits

0x4eda,	// (0x0005894c) scroll_pane_cp032

0xb122,	// (0x0005eb94) cntbar_detail_list_event_pane_ParamLimits

0xb122,	// (0x0005eb94) cntbar_detail_list_event_pane

0xb0d2,	// (0x0005eb44) cntbar_detail_list_shct_pane

0x0cc9,	// (0x0005473b) aid_list_gen

0x005f,	// (0x00053ad1) aid_scroll

0x0068,	// (0x00053ada) aid_size_touch_scroll_bar

0xb132,	// (0x0005eba4) aid_list_double

0x007a,	// (0x00053aec) aid_list_single

0xb13b,	// (0x0005ebad) aid_list_single_lg

0xed10,	// (0x00062782) aid_list_z_g_a_sm

0xed18,	// (0x0006278a) aid_list_z_g_d

0xed20,	// (0x00062792) aid_txt_z_prm

0xb144,	// (0x0005ebb6) aid_txt_z_prm_cp01

0xb152,	// (0x0005ebc4) aid_txt_z_sec

0xb160,	// (0x0005ebd2) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb160,	// (0x0005ebd2) main_cntbar_detail_cont_pane_g1

0xb174,	// (0x0005ebe6) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb174,	// (0x0005ebe6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x00063939) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x00063939) main_cntbar_detail_cont_pane_g

0x00c1,	// (0x00053b33) main_cntbar_detail_cont_pane_t1

0x00cf,	// (0x00053b41) main_cntbar_detail_cont_pane_t2

0x00dd,	// (0x00053b4f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0006393e) main_cntbar_detail_cont_pane_t

0xb184,	// (0x0005ebf6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb184,	// (0x0005ebf6) cell_cntbar_detail_list_shct_pane

0x00ff,	// (0x00053b71) cntbar_detail_list_shct_pane_g1

0x0108,	// (0x00053b7a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x00063945) cntbar_detail_list_shct_pane_g

0xb198,	// (0x0005ec0a) cntbar_detail_list_event_pane_g1_ParamLimits

0xb198,	// (0x0005ec0a) cntbar_detail_list_event_pane_g1

0xb1a4,	// (0x0005ec16) cntbar_detail_list_event_pane_g2_ParamLimits

0xb1a4,	// (0x0005ec16) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0006394a) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0006394a) cntbar_detail_list_event_pane_g

0xb210,	// (0x0005ec82) cntbar_detail_list_event_pane_t1_ParamLimits

0xb210,	// (0x0005ec82) cntbar_detail_list_event_pane_t1

0xb225,	// (0x0005ec97) cntbar_detail_list_event_pane_t2_ParamLimits

0xb225,	// (0x0005ec97) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x00063957) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x00063957) cntbar_detail_list_event_pane_t

0xc6e6,	// (0x00060158) cell_cntbar_detail_list_shct_pane_g1

0x5317,	// (0x00058d89) navi_pane_mv_g3

0x23b9,	// (0x00055e2b) main_cntbar_detail_pane_ParamLimits

0xb6de,	// (0x0005f150) main_notif_wgt_pane

0xed8f,	// (0x00062801) aid_tch_main_mp4_pane_g4

0xef47,	// (0x000629b9) popup_slider_window_cp02

0xea9f,	// (0x00062511) list_recal_day_event_pane

0xb096,	// (0x0005eb08) cntbar_detail_btn_pane_ParamLimits

0xb096,	// (0x0005eb08) cntbar_detail_btn_pane

0xb0ac,	// (0x0005eb1e) cntbar_detail_btn_pane_cp01_ParamLimits

0xb0ac,	// (0x0005eb1e) cntbar_detail_btn_pane_cp01

0xb0d2,	// (0x0005eb44) cntbar_detail_list_shct_pane_ParamLimits

0xb0e2,	// (0x0005eb54) cntbar_detail_pane_g1_ParamLimits

0xb0e2,	// (0x0005eb54) cntbar_detail_pane_g1

0xb0f2,	// (0x0005eb64) cntbar_detail_pane_t1_ParamLimits

0xb0f2,	// (0x0005eb64) cntbar_detail_pane_t1

0xb1b0,	// (0x0005ec22) cntbar_detail_list_event_pane_g3_ParamLimits

0xb1b0,	// (0x0005ec22) cntbar_detail_list_event_pane_g3

0xb1c8,	// (0x0005ec3a) cntbar_detail_list_event_pane_g4_ParamLimits

0xb1c8,	// (0x0005ec3a) cntbar_detail_list_event_pane_g4

0xb1e0,	// (0x0005ec52) cntbar_detail_list_event_pane_g5_ParamLimits

0xb1e0,	// (0x0005ec52) cntbar_detail_list_event_pane_g5

0xb1f8,	// (0x0005ec6a) cntbar_detail_list_event_pane_g6_ParamLimits

0xb1f8,	// (0x0005ec6a) cntbar_detail_list_event_pane_g6

0xb23a,	// (0x0005ecac) cntbar_detail_list_event_pane_t3_ParamLimits

0xb23a,	// (0x0005ecac) cntbar_detail_list_event_pane_t3

0xb24c,	// (0x0005ecbe) popup_notif_wgt_window_ParamLimits

0xb24c,	// (0x0005ecbe) popup_notif_wgt_window

0xb265,	// (0x0005ecd7) popup_submenu_window_cp01_ParamLimits

0xb265,	// (0x0005ecd7) popup_submenu_window_cp01

0x1366,	// (0x00054dd8) bg_popup_window_pane_cp10

0x01e3,	// (0x00053c55) listscroll_notif_wgt_pane

0x01ed,	// (0x00053c5f) list_notif_wgt_window

0x01f6,	// (0x00053c68) scroll_pane_cp033

0xed2e,	// (0x000627a0) list_notif_wgt_row_pane_ParamLimits

0xed2e,	// (0x000627a0) list_notif_wgt_row_pane

0x01ff,	// (0x00053c71) aid_size_list_notif_wgt_del

0x0208,	// (0x00053c7a) list_notif_wgt_row_pane_g1

0x0210,	// (0x00053c82) list_notif_wgt_row_pane_g2

0x0218,	// (0x00053c8a) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0006395e) list_notif_wgt_row_pane_g

0x0221,	// (0x00053c93) list_notif_wgt_row_pane_t1

0x022f,	// (0x00053ca1) list_notif_wgt_row_pane_t2

0x023d,	// (0x00053caf) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x00063965) list_notif_wgt_row_pane_t

0xd408,	// (0x00060e7a) list_recal_day_event_pane_g1

0x024b,	// (0x00053cbd) list_recal_day_event_pane_t1

0xb6de,	// (0x0005f150) bg_button_pane_cp045

0x025a,	// (0x00053ccc) cntbar_detail_btn_pane_t1

0xc1e0,	// (0x0005fc52) main_callh_pane_ParamLimits

0xc1e0,	// (0x0005fc52) main_callh_pane

0xb6de,	// (0x0005f150) main_coverflow0_pane

0xb6de,	// (0x0005f150) main_wgtman_pane

0xa32d,	// (0x0005dd9f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa32d,	// (0x0005dd9f) main_fs_bigclock_unlock_btn_pane

0xaae4,	// (0x0005e556) bg_button_pane_cp16

0xaafc,	// (0x0005e56e) cell_tport_appsw_pane_g3

0xb277,	// (0x0005ece9) cf0_flow_pane_ParamLimits

0xb277,	// (0x0005ece9) cf0_flow_pane

0x0277,	// (0x00053ce9) listscroll_cf0_pane

0x0280,	// (0x00053cf2) main_cf0_pane_g1

0xb28c,	// (0x0005ecfe) main_cf0_pane_t1_ParamLimits

0xb28c,	// (0x0005ecfe) main_cf0_pane_t1

0xb2a4,	// (0x0005ed16) main_cf0_pane_t2_ParamLimits

0xb2a4,	// (0x0005ed16) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0006396c) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0006396c) main_cf0_pane_t

0x02b2,	// (0x00053d24) scroll_pane_cp11

0xb2bc,	// (0x0005ed2e) cf0_flow_pane_g1

0xb2c4,	// (0x0005ed36) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x00063971) cf0_flow_pane_g

0xb2cc,	// (0x0005ed3e) cf0_flow_pane_t1

0xb6de,	// (0x0005f150) main_call6_pane

0xb6de,	// (0x0005f150) main_calllock_pane

0xb2da,	// (0x0005ed4c) call6_btn_grp_pane_ParamLimits

0xb2da,	// (0x0005ed4c) call6_btn_grp_pane

0xb2f4,	// (0x0005ed66) call6_pane_g1_ParamLimits

0xb2f4,	// (0x0005ed66) call6_pane_g1

0xb309,	// (0x0005ed7b) popup_call6_1st_window_ParamLimits

0xb309,	// (0x0005ed7b) popup_call6_1st_window

0xb31a,	// (0x0005ed8c) popup_call6_2nd_window_ParamLimits

0xb31a,	// (0x0005ed8c) popup_call6_2nd_window

0xb32b,	// (0x0005ed9d) cell_call6_btn_pane_ParamLimits

0xb32b,	// (0x0005ed9d) cell_call6_btn_pane

0x1366,	// (0x00054dd8) bg_popup_call2_in_pane_cp03

0x0324,	// (0x00053d96) popup_call6_1st_window_g1

0x032c,	// (0x00053d9e) popup_call6_1st_window_g2

0x0334,	// (0x00053da6) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x00063976) popup_call6_1st_window_g

0x033c,	// (0x00053dae) popup_call6_1st_window_t1

0x034b,	// (0x00053dbd) popup_call6_1st_window_t2

0x035b,	// (0x00053dcd) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0006397d) popup_call6_1st_window_t

0x1366,	// (0x00054dd8) bg_popup_call2_in_pane_cp04

0x0324,	// (0x00053d96) popup_call6_2nd_window_g1

0x032c,	// (0x00053d9e) popup_call6_2nd_window_g2

0x0334,	// (0x00053da6) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x00063976) popup_call6_2nd_window_g

0x033c,	// (0x00053dae) popup_call6_2nd_window_t1

0xb6de,	// (0x0005f150) bg_button_pane_cp15

0x036b,	// (0x00053ddd) cell_call6_btn_pane_g1

0x0374,	// (0x00053de6) cell_call6_btn_pane_t1

0xb33f,	// (0x0005edb1) listscroll_wgtman_pane_ParamLimits

0xb33f,	// (0x0005edb1) listscroll_wgtman_pane

0xb357,	// (0x0005edc9) wgtman_btn_pane_ParamLimits

0xb357,	// (0x0005edc9) wgtman_btn_pane

0x121d,	// (0x00054c8f) aid_scroll_copy1

0x03a0,	// (0x00053e12) list_wgtman_pane

0xb370,	// (0x0005ede2) wgtman_btn_pane_g1_ParamLimits

0xb370,	// (0x0005ede2) wgtman_btn_pane_g1

0xb384,	// (0x0005edf6) wgtman_btn_pane_t1_ParamLimits

0xb384,	// (0x0005edf6) wgtman_btn_pane_t1

0x03c8,	// (0x00053e3a) wgtman_btn_pane_t2_ParamLimits

0x03c8,	// (0x00053e3a) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x00063984) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x00063984) wgtman_btn_pane_t

0xb39f,	// (0x0005ee11) listrow_wgtman_pane_ParamLimits

0xb39f,	// (0x0005ee11) listrow_wgtman_pane

0xb3b1,	// (0x0005ee23) listrow_wgtman_pane_g1

0xb3ba,	// (0x0005ee2c) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x00063989) listrow_wgtman_pane_g

0xb3c4,	// (0x0005ee36) listrow_wgtman_pane_t1

0xb3d2,	// (0x0005ee44) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0006398e) listrow_wgtman_pane_t

0xb3e0,	// (0x0005ee52) wait_bar_pane_cp09

0x042c,	// (0x00053e9e) main_calllock_btn_pane

0x0436,	// (0x00053ea8) main_calllock_pane_g1

0xb6de,	// (0x0005f150) bg_button_pane_cp17

0x0442,	// (0x00053eb4) main_calllock_btn_pane_g1

0x044b,	// (0x00053ebd) main_calllock_btn_pane_t1

0xb6de,	// (0x0005f150) main_dialer3_pane

0xb6de,	// (0x0005f150) main_fmrd2_pane

0xc6e6,	// (0x00060158) main_fs_bigclock_unlock_btn_pane_g1

0x0462,	// (0x00053ed4) main_fs_bigclock_unlock_btn_pane_t1

0xb3e8,	// (0x0005ee5a) area_fmrd2_info_pane_ParamLimits

0xb3e8,	// (0x0005ee5a) area_fmrd2_info_pane

0xb3fa,	// (0x0005ee6c) area_fmrd2_visual_pane_ParamLimits

0xb3fa,	// (0x0005ee6c) area_fmrd2_visual_pane

0xb408,	// (0x0005ee7a) fmrd2_indi_pane_ParamLimits

0xb408,	// (0x0005ee7a) fmrd2_indi_pane

0xb415,	// (0x0005ee87) area_fmrd2_visual_pane_g1

0xb41d,	// (0x0005ee8f) area_fmrd2_visual_pane_t1

0xb42d,	// (0x0005ee9f) area_fmrd2_visual_pane_t2

0xb43d,	// (0x0005eeaf) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x00063998) area_fmrd2_visual_pane_t

0xb44d,	// (0x0005eebf) area_fmrd2_info_pane_g1

0xb455,	// (0x0005eec7) area_fmrd2_info_pane_t1

0xb465,	// (0x0005eed7) area_fmrd2_info_pane_t2

0xb475,	// (0x0005eee7) area_fmrd2_info_pane_t3

0xb485,	// (0x0005eef7) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0006399f) area_fmrd2_info_pane_t

0xb493,	// (0x0005ef05) fmrd2_indi_pane_t1

0xb4a3,	// (0x0005ef15) fmrd2_indi_pane_t2

0xb4b3,	// (0x0005ef25) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x000639a8) fmrd2_indi_pane_t

0xe0fd,	// (0x00061b6f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0fd,	// (0x00061b6f) list_single_fs_bigclock_indicator_pane_g5

0xe1a1,	// (0x00061c13) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1a1,	// (0x00061c13) list_single_fs_bigclock_indicator_pane_t5

0xac9b,	// (0x0005e70d) aid_cell_bcale_month_pane_ParamLimits

0xac9b,	// (0x0005e70d) aid_cell_bcale_month_pane

0xacad,	// (0x0005e71f) bcale_month_pane_ParamLimits

0xacad,	// (0x0005e71f) bcale_month_pane

0xacc5,	// (0x0005e737) bcale_preview_pane_ParamLimits

0xacc5,	// (0x0005e737) bcale_preview_pane

0xec9a,	// (0x0006270c) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb4,	// (0x00062726) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb4,	// (0x00062726) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0006392f) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0006392f) list_single_fs_bigclock_pane_t

0x045a,	// (0x00053ecc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x00063993) main_fs_bigclock_unlock_btn_pane_g

0xb4c3,	// (0x0005ef35) aid_dia3_key_size_ParamLimits

0xb4c3,	// (0x0005ef35) aid_dia3_key_size

0xb4d2,	// (0x0005ef44) aid_dia3_listrow_size_ParamLimits

0xb4d2,	// (0x0005ef44) aid_dia3_listrow_size

0xb4e0,	// (0x0005ef52) dia3_keypad_fun_pane_ParamLimits

0xb4e0,	// (0x0005ef52) dia3_keypad_fun_pane

0xb4fa,	// (0x0005ef6c) dia3_keypad_num_pane_ParamLimits

0xb4fa,	// (0x0005ef6c) dia3_keypad_num_pane

0xb513,	// (0x0005ef85) dia3_listscroll_pane_ParamLimits

0xb513,	// (0x0005ef85) dia3_listscroll_pane

0xb526,	// (0x0005ef98) dia3_numentry_pane_ParamLimits

0xb526,	// (0x0005ef98) dia3_numentry_pane

0x059c,	// (0x0005400e) dia3_list_pane

0x05a7,	// (0x00054019) scroll_pane_cp12

0xb6de,	// (0x0005f150) bg_dia3_numentry_pane

0x05b2,	// (0x00054024) dia3_numentry_pane_t1

0xb537,	// (0x0005efa9) cell_dia3_key_num_pane

0xb53f,	// (0x0005efb1) cell_dia3_key0_fun_pane_ParamLimits

0xb53f,	// (0x0005efb1) cell_dia3_key0_fun_pane

0xb553,	// (0x0005efc5) cell_dia3_key1_fun_pane_ParamLimits

0xb553,	// (0x0005efc5) cell_dia3_key1_fun_pane

0x0640,	// (0x000540b2) dia3_listrow_pane

0xde1d,	// (0x0006188f) bg_dia3_numentry_pane_g1

0xb6de,	// (0x0005f150) bg_button_pane_cp21

0x05ec,	// (0x0005405e) cell_dia3_key_num_pane_t1

0x05fa,	// (0x0005406c) cell_dia3_key_num_pane_t2

0x0609,	// (0x0005407b) cell_dia3_key_num_pane_t3

0x0618,	// (0x0005408a) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x000639af) cell_dia3_key_num_pane_t

0xb6de,	// (0x0005f150) bg_button_pane_cp19

0xb56b,	// (0x0005efdd) cell_dia3_key0_fun_pane_g1

0xb6de,	// (0x0005f150) bg_button_pane_cp20

0xb573,	// (0x0005efe5) cell_dia3_key1_fun_pane_g1

0xb57b,	// (0x0005efed) area_left_week_number_pane

0xb584,	// (0x0005eff6) area_top_day_name_pane

0xb58d,	// (0x0005efff) frame_month_view_pane

0xb599,	// (0x0005f00b) grid_month_view_pane

0xb5a3,	// (0x0005f015) cell_top_day_name_pane_ParamLimits

0xb5a3,	// (0x0005f015) cell_top_day_name_pane

0xd1c9,	// (0x00060c3b) cell_area_left_week_number_pane_ParamLimits

0xd1c9,	// (0x00060c3b) cell_area_left_week_number_pane

0xb5bb,	// (0x0005f02d) cell_month_view_pane_ParamLimits

0xb5bb,	// (0x0005f02d) cell_month_view_pane

0x06a8,	// (0x0005411a) frm_month_g1

0xb5d6,	// (0x0005f048) frm_month_g2

0xb5e0,	// (0x0005f052) frm_month_g3

0xb5ea,	// (0x0005f05c) frm_month_g4

0xb5f4,	// (0x0005f066) frm_month_g5

0xb5fe,	// (0x0005f070) frm_month_g6

0xb608,	// (0x0005f07a) frm_month_g7

0x06ed,	// (0x0005415f) frm_month_g8

0xb614,	// (0x0005f086) frm_month_g9

0xb61d,	// (0x0005f08f) frm_month_g10

0xb626,	// (0x0005f098) frm_month_g11

0xb62f,	// (0x0005f0a1) frm_month_g12

0xb638,	// (0x0005f0aa) frm_month_g13

0xb641,	// (0x0005f0b3) frm_month_g14

0xb64a,	// (0x0005f0bc) frm_month_g15

0xb653,	// (0x0005f0c5) frm_month_g16

0x000f,

0xff46,	// (0x000639b8) frm_month_g

0xb65e,	// (0x0005f0d0) cell_top_day_name_pane_t1

0xb66d,	// (0x0005f0df) cell_area_left_week_number_pane_g1

0xb65e,	// (0x0005f0d0) cell_area_left_week_number_pane_t1

0xc6e6,	// (0x00060158) cell_month_view_pane_g1

0xb675,	// (0x0005f0e7) cell_month_view_pane_t1

0xb6de,	// (0x0005f150) main_fps_pane

0xe3d2,	// (0x00061e44) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3d2,	// (0x00061e44) cmail_ddmenu_btn02_pane_cp1

0xe3ee,	// (0x00061e60) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3ee,	// (0x00061e60) cmail_ddmenu_btn02_pane_cp2

0xaf6e,	// (0x0005e9e0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xaf6e,	// (0x0005e9e0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x000638e0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x000638e0) cmail_ddmenu_btn02_pane_g

0xaf8c,	// (0x0005e9fe) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xaf8c,	// (0x0005e9fe) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x000638e5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x000638e5) cmail_ddmenu_btn02_pane_t

0xb684,	// (0x0005f0f6) fps_text_pane_ParamLimits

0xb684,	// (0x0005f0f6) fps_text_pane

0xb69b,	// (0x0005f10d) main_fps_pane_g1_ParamLimits

0xb69b,	// (0x0005f10d) main_fps_pane_g1

0xb6b5,	// (0x0005f127) wait_bar_pane_cp010_ParamLimits

0xb6b5,	// (0x0005f127) wait_bar_pane_cp010

0xb6c6,	// (0x0005f138) fps_text_pane_t1_ParamLimits

0xb6c6,	// (0x0005f138) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
