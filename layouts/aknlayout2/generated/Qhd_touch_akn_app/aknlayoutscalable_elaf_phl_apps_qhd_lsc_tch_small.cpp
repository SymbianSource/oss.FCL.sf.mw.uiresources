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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003ff34 };

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
0x181c,	// (0x00041750) Screen

0x1828,	// (0x0004175c) application_window

0x1864,	// (0x00041798) area_bottom_pane_ParamLimits

0x1864,	// (0x00041798) area_bottom_pane

0x189d,	// (0x000417d1) area_top_pane_ParamLimits

0x189d,	// (0x000417d1) area_top_pane

0xd6c0,	// (0x0004d5f4) call_video_uplink_pane_ParamLimits

0xd6c0,	// (0x0004d5f4) call_video_uplink_pane

0x1912,	// (0x00041846) main_pane_ParamLimits

0x1912,	// (0x00041846) main_pane

0x55a4,	// (0x000454d8) context_pane

0x55b7,	// (0x000454eb) navi_pane

0x55df,	// (0x00045513) popup_cale_events_window_ParamLimits

0x55df,	// (0x00045513) popup_cale_events_window

0x55f7,	// (0x0004552b) popup_mup_playback_window

0x55ff,	// (0x00045533) signal_pane

0xdf25,	// (0x0004de59) main_browser_pane

0xea04,	// (0x0004e938) main_burst_pane

0x52a9,	// (0x000451dd) main_calc_pane

0xea04,	// (0x0004e938) main_cale_day_pane

0xdf25,	// (0x0004de59) main_cale_month_pane

0xea04,	// (0x0004e938) main_cale_week_pane

0xea04,	// (0x0004e938) main_call_pane

0xdbf3,	// (0x0004db27) main_call_poc_pane

0xea04,	// (0x0004e938) main_camera_pane

0xea04,	// (0x0004e938) main_chi_dic_pane

0xe889,	// (0x0004e7bd) main_clock_pane

0xdbf3,	// (0x0004db27) main_fmradio_pane

0xea04,	// (0x0004e938) main_graph_messa_pane

0xdbf3,	// (0x0004db27) main_help_pane

0xdf25,	// (0x0004de59) main_im_pane

0xde4e,	// (0x0004dd82) main_image_pane_ParamLimits

0xde4e,	// (0x0004dd82) main_image_pane

0xdbf3,	// (0x0004db27) main_location2_pane

0xea04,	// (0x0004e938) main_location_pane

0xdbf3,	// (0x0004db27) main_messa_pane

0xdbf3,	// (0x0004db27) main_mp2_pane

0xea04,	// (0x0004e938) main_mp_pane

0xdbf3,	// (0x0004db27) main_msg_pane

0xdbf3,	// (0x0004db27) main_mup_eq_pane

0xdbf3,	// (0x0004db27) main_mup_pane

0xea04,	// (0x0004e938) main_notes_pane

0xdbf3,	// (0x0004db27) main_pec_pane

0xdbf3,	// (0x0004db27) main_phob_pane

0xdbf3,	// (0x0004db27) main_pinb_pane

0xdbf3,	// (0x0004db27) main_postcard_pane

0xdbf3,	// (0x0004db27) main_qdial_pane

0xea04,	// (0x0004e938) main_skin_pane

0xdbf3,	// (0x0004db27) main_smil2_pane

0xea04,	// (0x0004e938) main_smil_pane

0xea04,	// (0x0004e938) main_video_pane

0xea04,	// (0x0004e938) main_video_tele_pane

0xde4e,	// (0x0004dd82) main_viewer_pane_ParamLimits

0xde4e,	// (0x0004dd82) main_viewer_pane

0xea04,	// (0x0004e938) main_vorec_pane

0x5313,	// (0x00045247) popup_blid_sat_info_window_ParamLimits

0x5313,	// (0x00045247) popup_blid_sat_info_window

0x5375,	// (0x000452a9) popup_dyc_status_message_window_ParamLimits

0x5375,	// (0x000452a9) popup_dyc_status_message_window

0x538f,	// (0x000452c3) popup_grid_large_graphic_window_ParamLimits

0x538f,	// (0x000452c3) popup_grid_large_graphic_window

0x5466,	// (0x0004539a) popup_loc_request_window_ParamLimits

0x5466,	// (0x0004539a) popup_loc_request_window

0x557c,	// (0x000454b0) popup_wml_address_window_ParamLimits

0x557c,	// (0x000454b0) popup_wml_address_window

0x50aa,	// (0x00044fde) call_muted_g1

0x407a,	// (0x00043fae) popup_call_audio_conf_window_ParamLimits

0x407a,	// (0x00043fae) popup_call_audio_conf_window

0x50be,	// (0x00044ff2) popup_call_audio_first_window_ParamLimits

0x50be,	// (0x00044ff2) popup_call_audio_first_window

0x5134,	// (0x00045068) popup_call_audio_in_window_ParamLimits

0x5134,	// (0x00045068) popup_call_audio_in_window

0x5170,	// (0x000450a4) popup_call_audio_out_window_ParamLimits

0x5170,	// (0x000450a4) popup_call_audio_out_window

0x51aa,	// (0x000450de) popup_call_audio_second_window_ParamLimits

0x51aa,	// (0x000450de) popup_call_audio_second_window

0x5200,	// (0x00045134) popup_call_audio_wait_window_ParamLimits

0x5200,	// (0x00045134) popup_call_audio_wait_window

0x5235,	// (0x00045169) popup_number_entry_window_ParamLimits

0x5235,	// (0x00045169) popup_number_entry_window

0xd6de,	// (0x0004d612) bg_popup_call_pane_cp05_ParamLimits

0xd6de,	// (0x0004d612) bg_popup_call_pane_cp05

0xd800,	// (0x0004d734) popup_number_entry_window_t1

0xd813,	// (0x0004d747) popup_number_entry_window_t2

0xd825,	// (0x0004d759) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0004f020) popup_number_entry_window_t

0xd837,	// (0x0004d76b) text_title_cp2

0xd84a,	// (0x0004d77e) bg_popup_call_pane_cp_ParamLimits

0xd84a,	// (0x0004d77e) bg_popup_call_pane_cp

0xd858,	// (0x0004d78c) call_thumbnail_pane

0xd860,	// (0x0004d794) popup_call_audio_in_window_g1_ParamLimits

0xd860,	// (0x0004d794) popup_call_audio_in_window_g1

0xd86c,	// (0x0004d7a0) popup_call_audio_in_window_g2_ParamLimits

0xd86c,	// (0x0004d7a0) popup_call_audio_in_window_g2

0xd878,	// (0x0004d7ac) popup_call_audio_in_window_g3_ParamLimits

0xd878,	// (0x0004d7ac) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0004f029) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0004f029) popup_call_audio_in_window_g

0xd884,	// (0x0004d7b8) popup_call_audio_in_window_t1_ParamLimits

0xd884,	// (0x0004d7b8) popup_call_audio_in_window_t1

0xd8a0,	// (0x0004d7d4) popup_call_audio_in_window_t2_ParamLimits

0xd8a0,	// (0x0004d7d4) popup_call_audio_in_window_t2

0xd8bc,	// (0x0004d7f0) popup_call_audio_in_window_t3_ParamLimits

0xd8bc,	// (0x0004d7f0) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0004f030) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0004f030) popup_call_audio_in_window_t

0xd84a,	// (0x0004d77e) bg_popup_call_pane_cp01_ParamLimits

0xd84a,	// (0x0004d77e) bg_popup_call_pane_cp01

0xd858,	// (0x0004d78c) call_thumbnail_pane_cp02

0xd8cf,	// (0x0004d803) call_type_pane_cp022

0xd8d7,	// (0x0004d80b) popup_call_audio_out_window_g1_ParamLimits

0xd8d7,	// (0x0004d80b) popup_call_audio_out_window_g1

0xd8e9,	// (0x0004d81d) popup_call_audio_out_window_g2_ParamLimits

0xd8e9,	// (0x0004d81d) popup_call_audio_out_window_g2

0xd8f5,	// (0x0004d829) popup_call_audio_out_window_g3_ParamLimits

0xd8f5,	// (0x0004d829) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0004f037) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0004f037) popup_call_audio_out_window_g

0xd907,	// (0x0004d83b) popup_call_audio_out_window_t1_ParamLimits

0xd907,	// (0x0004d83b) popup_call_audio_out_window_t1

0xd91f,	// (0x0004d853) popup_call_audio_out_window_t2_ParamLimits

0xd91f,	// (0x0004d853) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0004f03e) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0004f03e) popup_call_audio_out_window_t

0xd934,	// (0x0004d868) bg_popup_call_pane_ParamLimits

0xd934,	// (0x0004d868) bg_popup_call_pane

0x1abc,	// (0x000419f0) call_thumbnail_pane_cp_ParamLimits

0x1abc,	// (0x000419f0) call_thumbnail_pane_cp

0xd9b8,	// (0x0004d8ec) call_type_pane_cp01_ParamLimits

0xd9b8,	// (0x0004d8ec) call_type_pane_cp01

0xd9fc,	// (0x0004d930) popup_call_audio_first_window_g1_ParamLimits

0xd9fc,	// (0x0004d930) popup_call_audio_first_window_g1

0xda48,	// (0x0004d97c) popup_call_audio_first_window_g2_ParamLimits

0xda48,	// (0x0004d97c) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0004f043) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0004f043) popup_call_audio_first_window_g

0xda8c,	// (0x0004d9c0) popup_call_audio_first_window_t1_ParamLimits

0xda8c,	// (0x0004d9c0) popup_call_audio_first_window_t1

0xdb38,	// (0x0004da6c) popup_call_audio_first_window_t4_ParamLimits

0xdb38,	// (0x0004da6c) popup_call_audio_first_window_t4

0xdbc4,	// (0x0004daf8) popup_call_audio_first_window_t5_ParamLimits

0xdbc4,	// (0x0004daf8) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0004f048) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0004f048) popup_call_audio_first_window_t

0xdbf3,	// (0x0004db27) bg_popup_call_pane_cp02

0xdbfd,	// (0x0004db31) call_type_pane_cp023

0xdc05,	// (0x0004db39) popup_call_audio_wait_window_g1

0xdc0d,	// (0x0004db41) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0004f04f) popup_call_audio_wait_window_g

0xdc15,	// (0x0004db49) popup_call_audio_wait_window_t3

0xdc23,	// (0x0004db57) bg_popup_call_pane_cp03_ParamLimits

0xdc23,	// (0x0004db57) bg_popup_call_pane_cp03

0xdc83,	// (0x0004dbb7) call_thumbnail_pane_cp011_ParamLimits

0xdc83,	// (0x0004dbb7) call_thumbnail_pane_cp011

0xdc8f,	// (0x0004dbc3) call_type_pane_cp034_ParamLimits

0xdc8f,	// (0x0004dbc3) call_type_pane_cp034

0xdccb,	// (0x0004dbff) popup_call_audio_second_window_g1_ParamLimits

0xdccb,	// (0x0004dbff) popup_call_audio_second_window_g1

0xdd07,	// (0x0004dc3b) popup_call_audio_second_window_g2_ParamLimits

0xdd07,	// (0x0004dc3b) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0004f054) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0004f054) popup_call_audio_second_window_g

0xdd43,	// (0x0004dc77) popup_call_audio_second_window_t1_ParamLimits

0xdd43,	// (0x0004dc77) popup_call_audio_second_window_t1

0xddc4,	// (0x0004dcf8) popup_call_audio_second_window_t2_ParamLimits

0xddc4,	// (0x0004dcf8) popup_call_audio_second_window_t2

0xddfa,	// (0x0004dd2e) popup_call_audio_second_window_t3_ParamLimits

0xddfa,	// (0x0004dd2e) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0004f059) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0004f059) popup_call_audio_second_window_t

0xdbf3,	// (0x0004db27) bg_popup_call_pane_cp04

0xde30,	// (0x0004dd64) list_conf_pane

0xde38,	// (0x0004dd6c) popup_call_audio_conf_window_t1

0xde46,	// (0x0004dd7a) call_thumbnail_pane_g1

0xde4e,	// (0x0004dd82) bg_pinb_pane_ParamLimits

0xde4e,	// (0x0004dd82) bg_pinb_pane

0xde5c,	// (0x0004dd90) find_pinb_pane

0xde65,	// (0x0004dd99) listscroll_pinb_pane_ParamLimits

0xde65,	// (0x0004dd99) listscroll_pinb_pane

0xde74,	// (0x0004dda8) pinb_bg_pane_g1

0x1ae0,	// (0x00041a14) pinb_bg_pane_g2

0x1aec,	// (0x00041a20) pinb_bg_pane_g3

0x1af8,	// (0x00041a2c) pinb_bg_pane_g4

0x1b04,	// (0x00041a38) pinb_bg_pane_g5

0x1b10,	// (0x00041a44) pinb_bg_pane_g6

0x1b1b,	// (0x00041a4f) pinb_bg_pane_g7

0x1b26,	// (0x00041a5a) pinb_bg_pane_g8

0x1b31,	// (0x00041a65) pinb_bg_pane_g9

0x1b3b,	// (0x00041a6f) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0004f060) pinb_bg_pane_g

0x1b58,	// (0x00041a8c) grid_pinb_pane

0x1b61,	// (0x00041a95) list_pinb_pane

0x1b6a,	// (0x00041a9e) scroll_pane_cp01_ParamLimits

0x1b6a,	// (0x00041a9e) scroll_pane_cp01

0xde7e,	// (0x0004ddb2) find_pinb_pane_g1_ParamLimits

0xde7e,	// (0x0004ddb2) find_pinb_pane_g1

0xde96,	// (0x0004ddca) find_pinb_pane_t1

0xdea8,	// (0x0004dddc) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0004f07a) find_pinb_pane_t

0xdebd,	// (0x0004ddf1) input_focus_pane_cp01_ParamLimits

0xdebd,	// (0x0004ddf1) input_focus_pane_cp01

0x1b7c,	// (0x00041ab0) cell_pinb_pane_ParamLimits

0x1b7c,	// (0x00041ab0) cell_pinb_pane

0x1ba5,	// (0x00041ad9) cell_pinb_pane_g1_ParamLimits

0x1ba5,	// (0x00041ad9) cell_pinb_pane_g1

0x1bb5,	// (0x00041ae9) cell_pinb_pane_g2_ParamLimits

0x1bb5,	// (0x00041ae9) cell_pinb_pane_g2

0xdec9,	// (0x0004ddfd) cell_pinb_pane_g3_ParamLimits

0xdec9,	// (0x0004ddfd) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0004f07f) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0004f07f) cell_pinb_pane_g

0xdbf3,	// (0x0004db27) grid_highlight_pane_cp01

0x1bc1,	// (0x00041af5) list_pinb_item_pane_ParamLimits

0x1bc1,	// (0x00041af5) list_pinb_item_pane

0xdbf3,	// (0x0004db27) list_highlight_pane_cp02

0x1bd3,	// (0x00041b07) list_pinb_item_pane_g1_ParamLimits

0x1bd3,	// (0x00041b07) list_pinb_item_pane_g1

0xded5,	// (0x0004de09) list_pinb_item_pane_g2_ParamLimits

0xded5,	// (0x0004de09) list_pinb_item_pane_g2

0x1be0,	// (0x00041b14) list_pinb_item_pane_g3_ParamLimits

0x1be0,	// (0x00041b14) list_pinb_item_pane_g3

0x1bf1,	// (0x00041b25) list_pinb_item_pane_g4_ParamLimits

0x1bf1,	// (0x00041b25) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0004f086) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0004f086) list_pinb_item_pane_g

0x1bfd,	// (0x00041b31) list_pinb_item_pane_t1_ParamLimits

0x1bfd,	// (0x00041b31) list_pinb_item_pane_t1

0x1c32,	// (0x00041b66) calc_display_pane

0x1c5a,	// (0x00041b8e) calc_paper_pane

0x1c7d,	// (0x00041bb1) grid_calc_pane

0xdbf3,	// (0x0004db27) bg_list_pane_cp01

0x1ca7,	// (0x00041bdb) clock_g1

0x1caf,	// (0x00041be3) clock_g2

0x0001,

0xf15b,	// (0x0004f08f) clock_g

0x1cb7,	// (0x00041beb) clock_t1_ParamLimits

0x1cb7,	// (0x00041beb) clock_t1

0x1ccc,	// (0x00041c00) clock_t2_ParamLimits

0x1ccc,	// (0x00041c00) clock_t2

0x1cde,	// (0x00041c12) clock_t3_ParamLimits

0x1cde,	// (0x00041c12) clock_t3

0x1cf0,	// (0x00041c24) clock_t4_ParamLimits

0x1cf0,	// (0x00041c24) clock_t4

0x1d02,	// (0x00041c36) clock_t5_ParamLimits

0x1d02,	// (0x00041c36) clock_t5

0x1d17,	// (0x00041c4b) clock_t6_ParamLimits

0x1d17,	// (0x00041c4b) clock_t6

0x1d29,	// (0x00041c5d) clock_t7_ParamLimits

0x1d29,	// (0x00041c5d) clock_t7

0x1d3b,	// (0x00041c6f) clock_t8_ParamLimits

0x1d3b,	// (0x00041c6f) clock_t8

0x1d4f,	// (0x00041c83) clock_t9_ParamLimits

0x1d4f,	// (0x00041c83) clock_t9

0x0008,

0xf160,	// (0x0004f094) clock_t_ParamLimits

0xf160,	// (0x0004f094) clock_t

0xdee1,	// (0x0004de15) popup_clock_analogue_window_cp02

0xdee1,	// (0x0004de15) popup_clock_digital_window_cp01

0xdee9,	// (0x0004de1d) listscroll_help_pane

0xdbf3,	// (0x0004db27) phob_pre_status_pane

0xdef3,	// (0x0004de27) grid_qdial_pane

0xdbf3,	// (0x0004db27) listscroll_mce_pane

0xdefd,	// (0x0004de31) bg_notes_pane

0xdf07,	// (0x0004de3b) list_notes_pane

0x1d63,	// (0x00041c97) scroll_pane_cp06

0xdf11,	// (0x0004de45) bg_calc_paper_pane

0xae15,	// (0x0004ad49) list_calc_pane

0xdf25,	// (0x0004de59) bg_calc_display_pane

0x1d6e,	// (0x00041ca2) calc_display_pane_t1

0x1d80,	// (0x00041cb4) calc_display_pane_t2

0xae2f,	// (0x0004ad63) calc_display_pane_t3

0x0002,

0xf173,	// (0x0004f0a7) calc_display_pane_t

0x1d92,	// (0x00041cc6) cell_calc_pane_ParamLimits

0x1d92,	// (0x00041cc6) cell_calc_pane

0xdf31,	// (0x0004de65) bg_calc_paper_pane_g1

0xdf3d,	// (0x0004de71) bg_calc_paper_pane_g2

0xdf49,	// (0x0004de7d) bg_calc_paper_pane_g3

0xdf55,	// (0x0004de89) bg_calc_paper_pane_g4

0xdf61,	// (0x0004de95) bg_calc_paper_pane_g5

0x1dc7,	// (0x00041cfb) bg_calc_paper_pane_g6

0x1dd6,	// (0x00041d0a) bg_calc_paper_pane_g7

0x1de5,	// (0x00041d19) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0004f0ae) bg_calc_paper_pane_g

0x1df8,	// (0x00041d2c) calc_bg_paper_pane_g9

0x1e0b,	// (0x00041d3f) list_calc_item_pane_ParamLimits

0x1e0b,	// (0x00041d3f) list_calc_item_pane

0xdf6d,	// (0x0004dea1) list_calc_item_pane_g1

0xae41,	// (0x0004ad75) list_calc_item_pane_t1_ParamLimits

0xae41,	// (0x0004ad75) list_calc_item_pane_t1

0x1e1e,	// (0x00041d52) list_calc_item_pane_t2_ParamLimits

0x1e1e,	// (0x00041d52) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0004f0bf) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0004f0bf) list_calc_item_pane_t

0xdf7a,	// (0x0004deae) cell_calc_pane_g1

0xdf84,	// (0x0004deb8) grid_highlight_pane_cp02

0x1e50,	// (0x00041d84) bg_calc_display_pane_g1

0x1e59,	// (0x00041d8d) bg_calc_display_pane_g2

0x1e63,	// (0x00041d97) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0004f0c9) bg_calc_display_pane_g

0x1e6c,	// (0x00041da0) cell_qdial_pane_ParamLimits

0x1e6c,	// (0x00041da0) cell_qdial_pane

0x1e80,	// (0x00041db4) cell_qdial_pane_g1_ParamLimits

0x1e80,	// (0x00041db4) cell_qdial_pane_g1

0x1e96,	// (0x00041dca) cell_qdial_pane_g2_ParamLimits

0x1e96,	// (0x00041dca) cell_qdial_pane_g2

0xdfa6,	// (0x0004deda) cell_qdial_pane_g3_ParamLimits

0xdfa6,	// (0x0004deda) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0004f0d0) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0004f0d0) cell_qdial_pane_g

0x1ebd,	// (0x00041df1) cell_qdial_pane_t1_ParamLimits

0x1ebd,	// (0x00041df1) cell_qdial_pane_t1

0x1ed5,	// (0x00041e09) cell_qdial_pane_t2_ParamLimits

0x1ed5,	// (0x00041e09) cell_qdial_pane_t2

0x1ee8,	// (0x00041e1c) cell_qdial_pane_t3_ParamLimits

0x1ee8,	// (0x00041e1c) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0004f0d9) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0004f0d9) cell_qdial_pane_t

0xdbf3,	// (0x0004db27) grid_highlight_pane_cp04

0xdfb2,	// (0x0004dee6) thumbnail_qdial_pane_ParamLimits

0xdfb2,	// (0x0004dee6) thumbnail_qdial_pane

0xe00e,	// (0x0004df42) list_help_pane

0xe017,	// (0x0004df4b) scroll_pane_cp02

0x1efb,	// (0x00041e2f) help_list_pane_t1_ParamLimits

0x1efb,	// (0x00041e2f) help_list_pane_t1

0xae53,	// (0x0004ad87) bg_notes_pane_g2

0xae5b,	// (0x0004ad8f) bg_notes_pane_g3

0xae63,	// (0x0004ad97) notes_bg_pane_g1

0xae6b,	// (0x0004ad9f) notes_bg_pane_g4

0xae73,	// (0x0004ada7) notes_bg_pane_g5

0xae7b,	// (0x0004adaf) notes_bg_pane_g6

0xae83,	// (0x0004adb7) notes_bg_pane_g7

0xae8b,	// (0x0004adbf) notes_bg_pane_g8

0xae93,	// (0x0004adc7) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0004f0f7) notes_bg_pane_g

0x1f18,	// (0x00041e4c) list_notes_text_pane_ParamLimits

0x1f18,	// (0x00041e4c) list_notes_text_pane

0xe020,	// (0x0004df54) list_notes_text_pane_g1

0x0d55,	// (0x00040c89) list_notes_text_pane_t1

0xdf25,	// (0x0004de59) listscroll_cale_week_pane

0x1f4a,	// (0x00041e7e) bg_cale_heading_pane

0xe03a,	// (0x0004df6e) bg_cale_pane_cp01

0x1f5e,	// (0x00041e92) cale_week_corner_pane

0x1f74,	// (0x00041ea8) cale_week_day_heading_pane

0x1f88,	// (0x00041ebc) cale_week_scroll_pane_g1

0x1f99,	// (0x00041ecd) cale_week_scroll_pane_g2

0x1faa,	// (0x00041ede) cale_week_scroll_pane_g3

0x1fbb,	// (0x00041eef) cale_week_scroll_pane_g4

0x1fcc,	// (0x00041f00) cale_week_scroll_pane_g5

0x1fdf,	// (0x00041f13) cale_week_scroll_pane_g6

0x1ff2,	// (0x00041f26) cale_week_scroll_pane_g7

0x2005,	// (0x00041f39) cale_week_scroll_pane_g8

0x2018,	// (0x00041f4c) cale_week_scroll_pane_g9

0x2029,	// (0x00041f5d) cale_week_scroll_pane_g10

0x203a,	// (0x00041f6e) cale_week_scroll_pane_g11

0x204b,	// (0x00041f7f) cale_week_scroll_pane_g12

0x205c,	// (0x00041f90) cale_week_scroll_pane_g13

0x206d,	// (0x00041fa1) cale_week_scroll_pane_g14

0x207e,	// (0x00041fb2) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0004f106) cale_week_scroll_pane_g

0x208f,	// (0x00041fc3) cale_week_time_pane

0x20a2,	// (0x00041fd6) grid_cale_week_pane

0x20b7,	// (0x00041feb) scroll_pane_cp08

0x20d1,	// (0x00042005) cell_cale_week_pane_ParamLimits

0x20d1,	// (0x00042005) cell_cale_week_pane

0x2111,	// (0x00042045) cale_week_day_heading_pane_t1

0x213e,	// (0x00042072) cale_week_day_heading_pane_t2

0x216b,	// (0x0004209f) cale_week_day_heading_pane_t3

0x2198,	// (0x000420cc) cale_week_day_heading_pane_t4

0x21c5,	// (0x000420f9) cale_week_day_heading_pane_t5

0x21f2,	// (0x00042126) cale_week_day_heading_pane_t6

0x2221,	// (0x00042155) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0004f125) cale_week_day_heading_pane_t

0xe065,	// (0x0004df99) bg_cale_side_pane

0x224e,	// (0x00042182) cale_week_time_pane_t1

0x2266,	// (0x0004219a) cale_week_time_pane_t2

0x227e,	// (0x000421b2) cale_week_time_pane_t3

0x2296,	// (0x000421ca) cale_week_time_pane_t4

0x22ae,	// (0x000421e2) cale_week_time_pane_t5

0x22c6,	// (0x000421fa) cale_week_time_pane_t6

0x22de,	// (0x00042212) cale_week_time_pane_t7

0x22f6,	// (0x0004222a) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0004f134) cale_week_time_pane_t

0x230e,	// (0x00042242) cell_cale_week_pane_g2

0x2327,	// (0x0004225b) cell_cale_week_pane_g3_ParamLimits

0x2327,	// (0x0004225b) cell_cale_week_pane_g3

0xe073,	// (0x0004dfa7) grid_highlight_pane_cp07

0xe07b,	// (0x0004dfaf) listscroll_gms_pane

0xe085,	// (0x0004dfb9) grid_gms_pane

0xe08e,	// (0x0004dfc2) listscroll_gms_pane_g1

0xe096,	// (0x0004dfca) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0004f145) listscroll_gms_pane_g

0x233f,	// (0x00042273) scroll_pane_cp010

0x234a,	// (0x0004227e) cell_gms_pane_ParamLimits

0x234a,	// (0x0004227e) cell_gms_pane

0x235d,	// (0x00042291) cell_gms_pane_g1

0xe09e,	// (0x0004dfd2) cell_gms_pane_g2

0xe0a6,	// (0x0004dfda) cell_gms_pane_g3

0xe0af,	// (0x0004dfe3) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0004f14a) cell_gms_pane_g

0xe0b8,	// (0x0004dfec) grid_highlight_pane_cp09

0x5034,	// (0x00044f68) phob_pre_status_pane_g1

0x503c,	// (0x00044f70) phob_pre_status_pane_g2

0x5044,	// (0x00044f78) phob_pre_status_pane_g3

0x504c,	// (0x00044f80) phob_pre_status_pane_g4

0x0004,

0xf532,	// (0x0004f466) phob_pre_status_pane_g

0x505c,	// (0x00044f90) phob_pre_status_pane_t1

0x506a,	// (0x00044f9e) phob_pre_status_pane_t2

0x507a,	// (0x00044fae) phob_pre_status_pane_t3

0x0002,

0xf53d,	// (0x0004f471) phob_pre_status_pane_t

0xdbf3,	// (0x0004db27) bg_list_pane_cp05

0x236d,	// (0x000422a1) grid_vorec_pane

0xae9b,	// (0x0004adcf) vorec_t1

0xaea9,	// (0x0004addd) vorec_t2

0xaeb7,	// (0x0004adeb) vorec_t3

0xaec5,	// (0x0004adf9) vorec_t4

0xaed3,	// (0x0004ae07) vorec_t5

0xaee1,	// (0x0004ae15) vorec_t6

0x0006,

0xf21f,	// (0x0004f153) vorec_t

0xaefd,	// (0x0004ae31) wait_bar_pane_cp01

0x2375,	// (0x000422a9) cell_vorec_pane_ParamLimits

0x2375,	// (0x000422a9) cell_vorec_pane

0xe0c0,	// (0x0004dff4) cell_vorec_pane_g1

0xdbf3,	// (0x0004db27) grid_highlight_pane_cp05

0x23a0,	// (0x000422d4) cams_zoom_pane

0x23af,	// (0x000422e3) image_vga_pane

0x23c9,	// (0x000422fd) main_camera_pane_g1

0x23db,	// (0x0004230f) main_camera_pane_g2

0x23eb,	// (0x0004231f) main_camera_pane_g3

0x23fb,	// (0x0004232f) main_camera_pane_g4

0x240b,	// (0x0004233f) main_camera_pane_g5

0x241b,	// (0x0004234f) main_camera_pane_g6

0x242d,	// (0x00042361) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0004f162) main_camera_pane_g

0x243d,	// (0x00042371) main_camera_pane_t1

0x2453,	// (0x00042387) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0004f173) main_camera_pane_t

0x248d,	// (0x000423c1) cams_zoom_pane_cp_ParamLimits

0x248d,	// (0x000423c1) cams_zoom_pane_cp

0x24b5,	// (0x000423e9) image_cif_pane_ParamLimits

0x24b5,	// (0x000423e9) image_cif_pane

0x24f0,	// (0x00042424) image_subqcif_pane

0x24f8,	// (0x0004242c) main_video_pane_g1_ParamLimits

0x24f8,	// (0x0004242c) main_video_pane_g1

0x251c,	// (0x00042450) main_video_pane_g2_ParamLimits

0x251c,	// (0x00042450) main_video_pane_g2

0x2550,	// (0x00042484) main_video_pane_g3_ParamLimits

0x2550,	// (0x00042484) main_video_pane_g3

0x257e,	// (0x000424b2) main_video_pane_g4_ParamLimits

0x257e,	// (0x000424b2) main_video_pane_g4

0x25ac,	// (0x000424e0) main_video_pane_g5_ParamLimits

0x25ac,	// (0x000424e0) main_video_pane_g5

0xe0d6,	// (0x0004e00a) main_video_pane_g6_ParamLimits

0xe0d6,	// (0x0004e00a) main_video_pane_g6

0x0006,

0xf244,	// (0x0004f178) main_video_pane_g_ParamLimits

0xf244,	// (0x0004f178) main_video_pane_g

0x25d9,	// (0x0004250d) main_video_pane_t1_ParamLimits

0x25d9,	// (0x0004250d) main_video_pane_t1

0xe0f0,	// (0x0004e024) cams_zoom_pane_g1

0xe0f9,	// (0x0004e02d) cams_zoom_pane_g2

0xe102,	// (0x0004e036) cams_zoom_pane_g3

0xe10b,	// (0x0004e03f) cams_zoom_pane_g4

0x0003,

0x0041,	// (0x0003ff75) cams_zoom_pane_g

0x2636,	// (0x0004256a) grid_cams_pane

0x2650,	// (0x00042584) linegrid_cams_pane

0x2664,	// (0x00042598) cell_cams_pane_ParamLimits

0x2664,	// (0x00042598) cell_cams_pane

0xe114,	// (0x0004e048) cams_burst_image_pane

0xe11c,	// (0x0004e050) cell_cams_pane_g1

0xdbf3,	// (0x0004db27) grid_highlight_pane_cp03

0xdf7a,	// (0x0004deae) mp_bg_pane_g1

0xdbf3,	// (0x0004db27) bg_list_pane_cp03

0x4f69,	// (0x00044e9d) bg_mp_pane

0x4f71,	// (0x00044ea5) grid_mp_pane

0x4f79,	// (0x00044ead) media_player_g1

0x4f81,	// (0x00044eb5) media_player_t1

0x4f8f,	// (0x00044ec3) media_player_t2

0x4f9d,	// (0x00044ed1) media_player_t3

0x4fab,	// (0x00044edf) media_player_t4

0x4fb9,	// (0x00044eed) media_player_t5

0x4fc7,	// (0x00044efb) media_player_t6

0x4fd5,	// (0x00044f09) media_player_t7

0x0006,

0xf51c,	// (0x0004f450) media_player_t

0x4fe3,	// (0x00044f17) wait_bar_pane_cp02

0xf501,	// (0x0004f435) main_usb_pane_t

0x502b,	// (0x00044f5f) cell_mp_pane

0xdf7a,	// (0x0004deae) cell_mp_pane_g1

0xdbf3,	// (0x0004db27) grid_highlight_pane_cp06

0xe124,	// (0x0004e058) grid_skin_colour_pane

0xe12c,	// (0x0004e060) list_highlight_pane_cp03

0x2684,	// (0x000425b8) skin_g1

0xe134,	// (0x0004e068) skin_t1

0xe143,	// (0x0004e077) skin_t2

0x0001,

0x0076,	// (0x0003ffaa) skin_t

0x268c,	// (0x000425c0) cell_skin_colour_pane_ParamLimits

0x268c,	// (0x000425c0) cell_skin_colour_pane

0xe151,	// (0x0004e085) cell_skin_colour_pane_g1

0x2703,	// (0x00042637) call_video_g1_ParamLimits

0x2703,	// (0x00042637) call_video_g1

0x271f,	// (0x00042653) call_video_g2_ParamLimits

0x271f,	// (0x00042653) call_video_g2

0x0001,

0xf27f,	// (0x0004f1b3) call_video_g_ParamLimits

0xf27f,	// (0x0004f1b3) call_video_g

0x2771,	// (0x000426a5) call_video_uplink_pane_cp1_ParamLimits

0x2771,	// (0x000426a5) call_video_uplink_pane_cp1

0xe163,	// (0x0004e097) call_video_uplink_pane_cp2

0x2810,	// (0x00042744) video_down_crop_pane_ParamLimits

0x2810,	// (0x00042744) video_down_crop_pane

0x2907,	// (0x0004283b) video_down_pane_ParamLimits

0x2907,	// (0x0004283b) video_down_pane

0xe16b,	// (0x0004e09f) video_down_subqcif_pane_ParamLimits

0xe16b,	// (0x0004e09f) video_down_subqcif_pane

0xe183,	// (0x0004e0b7) video_down_subqcif_pane_cp_ParamLimits

0xe183,	// (0x0004e0b7) video_down_subqcif_pane_cp

0xe1a7,	// (0x0004e0db) im_reading_pane_ParamLimits

0xe1a7,	// (0x0004e0db) im_reading_pane

0x2a15,	// (0x00042949) im_writing_pane_ParamLimits

0x2a15,	// (0x00042949) im_writing_pane

0x2a2b,	// (0x0004295f) im_reading_pane_t1

0xe1c1,	// (0x0004e0f5) list_im_pane

0xe1d2,	// (0x0004e106) scroll_pane_cp07

0x2a64,	// (0x00042998) im_writing_pane_t1_ParamLimits

0x2a64,	// (0x00042998) im_writing_pane_t1

0xe1eb,	// (0x0004e11f) im_writing_pane_t2_ParamLimits

0xe1eb,	// (0x0004e11f) im_writing_pane_t2

0x0001,

0xf289,	// (0x0004f1bd) im_writing_pane_t_ParamLimits

0xf289,	// (0x0004f1bd) im_writing_pane_t

0xdbf3,	// (0x0004db27) input_focus_pane_cp04

0xdbf3,	// (0x0004db27) input_focus_pane_cp05

0x2a79,	// (0x000429ad) list_im_single_pane_ParamLimits

0x2a79,	// (0x000429ad) list_im_single_pane

0x2a8d,	// (0x000429c1) list_single_im_pane_t1

0x4feb,	// (0x00044f1f) blid_accuracy_pane

0x4ff3,	// (0x00044f27) blid_compass_pane

0x4ffd,	// (0x00044f31) main_location_t1

0x500d,	// (0x00044f41) main_location_t2

0x501d,	// (0x00044f51) main_location_t3

0x0002,

0xf52b,	// (0x0004f45f) main_location_t

0xdbf3,	// (0x0004db27) aid_levels_location

0xdf7a,	// (0x0004deae) blid_accuracy_pane_g1

0xdf7a,	// (0x0004deae) blid_accuracy_pane_g2

0x0001,

0x00e7,	// (0x0004001b) blid_accuracy_pane_g

0xe233,	// (0x0004e167) wml_content_pane

0xe271,	// (0x0004e1a5) wml_button_pane_ParamLimits

0xe271,	// (0x0004e1a5) wml_button_pane

0x2a9c,	// (0x000429d0) wml_list_single_large_pane_ParamLimits

0x2a9c,	// (0x000429d0) wml_list_single_large_pane

0x2ab1,	// (0x000429e5) wml_list_single_medium_pane_ParamLimits

0x2ab1,	// (0x000429e5) wml_list_single_medium_pane

0x2ac7,	// (0x000429fb) wml_list_single_small_pane_ParamLimits

0x2ac7,	// (0x000429fb) wml_list_single_small_pane

0xe285,	// (0x0004e1b9) wml_selection_box_pane_ParamLimits

0xe285,	// (0x0004e1b9) wml_selection_box_pane

0xe298,	// (0x0004e1cc) wml_list_single_pane_t1

0xe2a7,	// (0x0004e1db) wml_list_single_medium_pane_t1

0xe2b6,	// (0x0004e1ea) wml_list_single_large_pane_t1

0xe2c5,	// (0x0004e1f9) input_focus_pane_cp02_ParamLimits

0xe2c5,	// (0x0004e1f9) input_focus_pane_cp02

0xe2d8,	// (0x0004e20c) wml_selection_box_pane_g1

0xe2e1,	// (0x0004e215) wml_selection_box_pane_t1_ParamLimits

0xe2e1,	// (0x0004e215) wml_selection_box_pane_t1

0xde4e,	// (0x0004dd82) bg_wml_button_pane_ParamLimits

0xde4e,	// (0x0004dd82) bg_wml_button_pane

0xe2f9,	// (0x0004e22d) wml_button_pane_g1

0xe301,	// (0x0004e235) wml_button_pane_t1

0xe2f9,	// (0x0004e22d) wml_button_bg_pane_g1

0xe311,	// (0x0004e245) wml_button_bg_pane_g2

0xe319,	// (0x0004e24d) wml_button_bg_pane_g3

0xe321,	// (0x0004e255) wml_button_bg_pane_g4

0xe329,	// (0x0004e25d) wml_button_bg_pane_g5

0xe331,	// (0x0004e265) wml_button_bg_pane_g6

0xe339,	// (0x0004e26d) wml_button_bg_pane_g7

0xe341,	// (0x0004e275) wml_button_bg_pane_g8

0xe349,	// (0x0004e27d) wml_button_bg_pane_g9

0x0008,

0x008a,	// (0x0003ffbe) wml_button_bg_pane_g

0x2adf,	// (0x00042a13) bg_list_pane_cp02

0xe351,	// (0x0004e285) mce_header_pane_ParamLimits

0xe351,	// (0x0004e285) mce_header_pane

0xe367,	// (0x0004e29b) mce_icon_pane

0xe367,	// (0x0004e29b) mce_image_pane

0xe370,	// (0x0004e2a4) mce_text_pane_ParamLimits

0xe370,	// (0x0004e2a4) mce_text_pane

0x2ae7,	// (0x00042a1b) scroll_pane_cp03

0xe269,	// (0x0004e19d) scroll_pane_cp04

0xe383,	// (0x0004e2b7) scroll_pane_cp05_ParamLimits

0xe383,	// (0x0004e2b7) scroll_pane_cp05

0x2af1,	// (0x00042a25) mce_header_field_pane_ParamLimits

0x2af1,	// (0x00042a25) mce_header_field_pane

0x2b08,	// (0x00042a3c) mce_header_field_pane_2_ParamLimits

0x2b08,	// (0x00042a3c) mce_header_field_pane_2

0x2b1e,	// (0x00042a52) mce_header_field_pane_3

0x2b26,	// (0x00042a5a) list_single_mce_message_pane_ParamLimits

0x2b26,	// (0x00042a5a) list_single_mce_message_pane

0x2b3b,	// (0x00042a6f) list_single_mce_smart_pane_ParamLimits

0x2b3b,	// (0x00042a6f) list_single_mce_smart_pane

0xe38f,	// (0x0004e2c3) input_focus_pane_cp03

0xe398,	// (0x0004e2cc) list_header_data_pane

0x2b5b,	// (0x00042a8f) mce_header_field_pane_t1

0x2b6b,	// (0x00042a9f) list_single_mce_header_pane_ParamLimits

0x2b6b,	// (0x00042a9f) list_single_mce_header_pane

0xe3a0,	// (0x0004e2d4) list_single_mce_header_pane_t1

0xe3af,	// (0x0004e2e3) list_single_mce_message_pane_g1

0xe3b7,	// (0x0004e2eb) list_single_mce_message_pane_t1

0x2b9d,	// (0x00042ad1) bg_cale_heading_pane_cp01_ParamLimits

0x2b9d,	// (0x00042ad1) bg_cale_heading_pane_cp01

0xe3c5,	// (0x0004e2f9) bg_cale_pane_cp02_ParamLimits

0xe3c5,	// (0x0004e2f9) bg_cale_pane_cp02

0x2bc0,	// (0x00042af4) cale_month_corner_pane

0x2bd6,	// (0x00042b0a) cale_month_day_heading_pane_ParamLimits

0x2bd6,	// (0x00042b0a) cale_month_day_heading_pane

0x2c09,	// (0x00042b3d) cale_month_pane_g1_ParamLimits

0x2c09,	// (0x00042b3d) cale_month_pane_g1

0x2c25,	// (0x00042b59) cale_month_pane_g2_ParamLimits

0x2c25,	// (0x00042b59) cale_month_pane_g2

0x2c40,	// (0x00042b74) cale_month_pane_g3_ParamLimits

0x2c40,	// (0x00042b74) cale_month_pane_g3

0x2c6c,	// (0x00042ba0) cale_month_pane_g4_ParamLimits

0x2c6c,	// (0x00042ba0) cale_month_pane_g4

0x2c98,	// (0x00042bcc) cale_month_pane_g5_ParamLimits

0x2c98,	// (0x00042bcc) cale_month_pane_g5

0x2ccc,	// (0x00042c00) cale_month_pane_g6_ParamLimits

0x2ccc,	// (0x00042c00) cale_month_pane_g6

0x2d08,	// (0x00042c3c) cale_month_pane_g7_ParamLimits

0x2d08,	// (0x00042c3c) cale_month_pane_g7

0x2d44,	// (0x00042c78) cale_month_pane_g8_ParamLimits

0x2d44,	// (0x00042c78) cale_month_pane_g8

0x2d80,	// (0x00042cb4) cale_month_pane_g9_ParamLimits

0x2d80,	// (0x00042cb4) cale_month_pane_g9

0x2dba,	// (0x00042cee) cale_month_pane_g10_ParamLimits

0x2dba,	// (0x00042cee) cale_month_pane_g10

0x2df4,	// (0x00042d28) cale_month_pane_g11_ParamLimits

0x2df4,	// (0x00042d28) cale_month_pane_g11

0x2e2e,	// (0x00042d62) cale_month_pane_g12_ParamLimits

0x2e2e,	// (0x00042d62) cale_month_pane_g12

0x2e68,	// (0x00042d9c) cale_month_pane_g13_ParamLimits

0x2e68,	// (0x00042d9c) cale_month_pane_g13

0x000c,

0xf28e,	// (0x0004f1c2) cale_month_pane_g_ParamLimits

0xf28e,	// (0x0004f1c2) cale_month_pane_g

0x2ea2,	// (0x00042dd6) cale_month_week_pane

0x2eb5,	// (0x00042de9) grid_cale_month_pane_ParamLimits

0x2eb5,	// (0x00042de9) grid_cale_month_pane

0x2ee3,	// (0x00042e17) cale_month_day_heading_pane_t1

0x2f41,	// (0x00042e75) cale_month_day_heading_pane_t2

0x2fa6,	// (0x00042eda) cale_month_day_heading_pane_t3

0x300b,	// (0x00042f3f) cale_month_day_heading_pane_t4

0x3070,	// (0x00042fa4) cale_month_day_heading_pane_t5

0x30e5,	// (0x00043019) cale_month_day_heading_pane_t6

0x315a,	// (0x0004308e) cale_month_day_heading_pane_t7

0x0006,

0xf2a9,	// (0x0004f1dd) cale_month_day_heading_pane_t

0xe065,	// (0x0004df99) bg_cale_side_pane_cp01

0x31cf,	// (0x00043103) cale_month_week_pane_t1

0x31e6,	// (0x0004311a) cale_month_week_pane_t2

0x31fd,	// (0x00043131) cale_month_week_pane_t3

0x3214,	// (0x00043148) cale_month_week_pane_t4

0x322b,	// (0x0004315f) cale_month_week_pane_t5

0x3242,	// (0x00043176) cale_month_week_pane_t6

0x0005,

0xf2b8,	// (0x0004f1ec) cale_month_week_pane_t

0x3259,	// (0x0004318d) cell_cale_month_pane_ParamLimits

0x3259,	// (0x0004318d) cell_cale_month_pane

0xafcf,	// (0x0004af03) cell_cale_month_pane_g1

0x332f,	// (0x00043263) cell_cale_month_pane_t1_ParamLimits

0x332f,	// (0x00043263) cell_cale_month_pane_t1

0xe073,	// (0x0004dfa7) grid_highlight_pane_cp08

0xdf7a,	// (0x0004deae) main_smil_g1

0x334b,	// (0x0004327f) smil_status_pane

0xe3fa,	// (0x0004e32e) smil_text_pane

0x4dff,	// (0x00044d33) bg_popup_call3_rect_pane_g8

0x4e07,	// (0x00044d3b) bg_popup_call3_rect_pane_g9

0x0008,

0xf4bf,	// (0x0004f3f3) bg_popup_call3_rect_pane_g

0x56eb,	// (0x0004561f) smil_status_volume_pane_g1

0xe404,	// (0x0004e338) smil_status_pane_t1

0xb146,	// (0x0004b07a) volume_smil_pane

0xe41b,	// (0x0004e34f) list_smil_text_pane

0x335e,	// (0x00043292) scroll_pane_cp011

0x3369,	// (0x0004329d) smil_text_list_pane_t1_ParamLimits

0x3369,	// (0x0004329d) smil_text_list_pane_t1

0xafdb,	// (0x0004af0f) aid_volume_smil_ParamLimits

0xafdb,	// (0x0004af0f) aid_volume_smil

0xdf7a,	// (0x0004deae) smil_volume_pane_g1

0xdf7a,	// (0x0004deae) smil_volume_pane_g2

0x0001,

0x00e7,	// (0x0004001b) smil_volume_pane_g

0xdf25,	// (0x0004de59) listscroll_cale_day_pane

0xe425,	// (0x0004e359) bg_cale_pane

0xe43d,	// (0x0004e371) list_cale_pane

0xe44e,	// (0x0004e382) scroll_pane_cp09

0xe45f,	// (0x0004e393) cale_bg_pane_g1

0xe467,	// (0x0004e39b) cale_bg_pane_g2

0xe46f,	// (0x0004e3a3) cale_bg_pane_g3

0xe477,	// (0x0004e3ab) cale_bg_pane_g4

0xe47f,	// (0x0004e3b3) cale_bg_pane_g5

0xe487,	// (0x0004e3bb) cale_bg_pane_g6

0xe48f,	// (0x0004e3c3) cale_bg_pane_g7

0xe497,	// (0x0004e3cb) cale_bg_pane_g8

0xe49f,	// (0x0004e3d3) cale_bg_pane_g9

0x0008,

0x00ec,	// (0x00040020) cale_bg_pane_g

0x2375,	// (0x000422a9) list_cale_time_pane_ParamLimits

0x2375,	// (0x000422a9) list_cale_time_pane

0xe4a7,	// (0x0004e3db) list_cale_time_pane_g1_ParamLimits

0xe4a7,	// (0x0004e3db) list_cale_time_pane_g1

0xe4b3,	// (0x0004e3e7) list_cale_time_pane_g2_ParamLimits

0xe4b3,	// (0x0004e3e7) list_cale_time_pane_g2

0x33af,	// (0x000432e3) list_cale_time_pane_g3_ParamLimits

0x33af,	// (0x000432e3) list_cale_time_pane_g3

0x33bd,	// (0x000432f1) list_cale_time_pane_g4_ParamLimits

0x33bd,	// (0x000432f1) list_cale_time_pane_g4

0x33cb,	// (0x000432ff) list_cale_time_pane_g5_ParamLimits

0x33cb,	// (0x000432ff) list_cale_time_pane_g5

0x0005,

0xf2d8,	// (0x0004f20c) list_cale_time_pane_g_ParamLimits

0xf2d8,	// (0x0004f20c) list_cale_time_pane_g

0xe4cd,	// (0x0004e401) list_cale_time_pane_t1_ParamLimits

0xe4cd,	// (0x0004e401) list_cale_time_pane_t1

0xe4f5,	// (0x0004e429) list_cale_time_pane_t2_ParamLimits

0xe4f5,	// (0x0004e429) list_cale_time_pane_t2

0x366d,	// (0x000435a1) aid_blid_cardinal_pane

0x36ab,	// (0x000435df) compass_pane_t4

0xe51d,	// (0x0004e451) list_cale_time_pane_t4_ParamLimits

0xe51d,	// (0x0004e451) list_cale_time_pane_t4

0x36b9,	// (0x000435ed) compass_pane_t5

0x36c7,	// (0x000435fb) compass_pane_t6

0x36d5,	// (0x00043609) compass_pane_t7

0xe956,	// (0x0004e88a) navi_pane_cc_t1

0xeaab,	// (0x0004e9df) aid_phob_thumbnail_center_pane

0x3d3e,	// (0x00043c72) main_postcard_pane_g4_ParamLimits

0x0002,

0x010c,	// (0x00040040) list_cale_time_pane_t_ParamLimits

0x010c,	// (0x00040040) list_cale_time_pane_t

0xd84a,	// (0x0004d77e) bg_popup_window_pane_cp02_ParamLimits

0xd84a,	// (0x0004d77e) bg_popup_window_pane_cp02

0xe545,	// (0x0004e479) heading_pane_cp01_ParamLimits

0xe545,	// (0x0004e479) heading_pane_cp01

0xe551,	// (0x0004e485) loc_req_pane_ParamLimits

0xe551,	// (0x0004e485) loc_req_pane

0xe561,	// (0x0004e495) loc_type_pane_ParamLimits

0xe561,	// (0x0004e495) loc_type_pane

0xe573,	// (0x0004e4a7) loc_type_pane_t1_ParamLimits

0xe573,	// (0x0004e4a7) loc_type_pane_t1

0xe585,	// (0x0004e4b9) loc_type_pane_t2_ParamLimits

0xe585,	// (0x0004e4b9) loc_type_pane_t2

0xe597,	// (0x0004e4cb) loc_type_pane_t3_ParamLimits

0xe597,	// (0x0004e4cb) loc_type_pane_t3

0x0002,

0x0113,	// (0x00040047) loc_type_pane_t_ParamLimits

0x0113,	// (0x00040047) loc_type_pane_t

0xe5a9,	// (0x0004e4dd) list_loc_req_pane

0xe5b3,	// (0x0004e4e7) scroll_pane_cp012

0x33d9,	// (0x0004330d) list_single_loc_request_popup_menu_pane_ParamLimits

0x33d9,	// (0x0004330d) list_single_loc_request_popup_menu_pane

0xe5be,	// (0x0004e4f2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe5be,	// (0x0004e4f2) list_single_loc_request_popup_menu_pane_g1

0xe5ca,	// (0x0004e4fe) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe5ca,	// (0x0004e4fe) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x011a,	// (0x0004004e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x011a,	// (0x0004004e) list_single_loc_request_popup_menu_pane_g

0xe5d6,	// (0x0004e50a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe5d6,	// (0x0004e50a) list_single_loc_request_popup_menu_pane_t1

0xde4e,	// (0x0004dd82) bg_popup_window_pane_cp03_ParamLimits

0xde4e,	// (0x0004dd82) bg_popup_window_pane_cp03

0xf0e0,	// (0x0004f014) heading_loc_req_pane_ParamLimits

0xf0e0,	// (0x0004f014) heading_loc_req_pane

0x33e6,	// (0x0004331a) popup_dyc_status_message_window_g1_ParamLimits

0x33e6,	// (0x0004331a) popup_dyc_status_message_window_g1

0x33fa,	// (0x0004332e) popup_dyc_status_message_window_t1_ParamLimits

0x33fa,	// (0x0004332e) popup_dyc_status_message_window_t1

0x340f,	// (0x00043343) popup_dyc_status_message_window_t2_ParamLimits

0x340f,	// (0x00043343) popup_dyc_status_message_window_t2

0x3424,	// (0x00043358) popup_dyc_status_message_window_t3_ParamLimits

0x3424,	// (0x00043358) popup_dyc_status_message_window_t3

0x0002,

0xf2e5,	// (0x0004f219) popup_dyc_status_message_window_t_ParamLimits

0xf2e5,	// (0x0004f219) popup_dyc_status_message_window_t

0xdbf3,	// (0x0004db27) bg_heading_pane_cp01

0xe5ec,	// (0x0004e520) heading_loc_req_pane_g1

0xe5f4,	// (0x0004e528) heading_loc_req_pane_g2

0xe5fc,	// (0x0004e530) heading_loc_req_pane_g3

0x0002,

0x0126,	// (0x0004005a) heading_loc_req_pane_g

0xe604,	// (0x0004e538) heading_loc_req_pane_t1

0xe613,	// (0x0004e547) bg_popup_sub_pane_cp01_ParamLimits

0xe613,	// (0x0004e547) bg_popup_sub_pane_cp01

0xe621,	// (0x0004e555) popup_cale_events_window_g1_ParamLimits

0xe621,	// (0x0004e555) popup_cale_events_window_g1

0xe641,	// (0x0004e575) popup_cale_events_window_g2_ParamLimits

0xe641,	// (0x0004e575) popup_cale_events_window_g2

0x0001,

0x015a,	// (0x0004008e) popup_cale_events_window_g_ParamLimits

0x015a,	// (0x0004008e) popup_cale_events_window_g

0xe661,	// (0x0004e595) popup_cale_events_window_t1_ParamLimits

0xe661,	// (0x0004e595) popup_cale_events_window_t1

0xe673,	// (0x0004e5a7) popup_cale_events_window_t2_ParamLimits

0xe673,	// (0x0004e5a7) popup_cale_events_window_t2

0xe6b1,	// (0x0004e5e5) popup_cale_events_window_t3_ParamLimits

0xe6b1,	// (0x0004e5e5) popup_cale_events_window_t3

0xe6eb,	// (0x0004e61f) popup_cale_events_window_t4_ParamLimits

0xe6eb,	// (0x0004e61f) popup_cale_events_window_t4

0x0003,

0x015f,	// (0x00040093) popup_cale_events_window_t_ParamLimits

0x015f,	// (0x00040093) popup_cale_events_window_t

0x3458,	// (0x0004338c) call_type_pane

0x3468,	// (0x0004339c) popup_call_status_window_g1

0x347c,	// (0x000433b0) popup_call_status_window_g2

0x3490,	// (0x000433c4) popup_call_status_window_g3

0x0002,

0xf319,	// (0x0004f24d) popup_call_status_window_g

0xe721,	// (0x0004e655) call_type_pane_g1

0xe72a,	// (0x0004e65e) call_type_pane_g2

0x0001,

0xf320,	// (0x0004f254) call_type_pane_g

0xdbf3,	// (0x0004db27) bg_popup_sub_pane_cp02

0xe733,	// (0x0004e667) listscroll_popup_wml_pane

0xe73b,	// (0x0004e66f) list_wml_pane

0xe745,	// (0x0004e679) scroll_pane_cp013

0xe750,	// (0x0004e684) list_single_graphic_popup_wml_pane_ParamLimits

0xe750,	// (0x0004e684) list_single_graphic_popup_wml_pane

0xdf7a,	// (0x0004deae) list_single_graphic_popup_wml_pane_g1

0xe764,	// (0x0004e698) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf325,	// (0x0004f259) list_single_graphic_popup_wml_pane_g

0xe76c,	// (0x0004e6a0) list_single_graphic_popup_wml_pane_t1

0xe782,	// (0x0004e6b6) aid_call_pane

0xde46,	// (0x0004dd7a) popup_clock_analogue_window_g1

0xde46,	// (0x0004dd7a) popup_clock_analogue_window_g2

0xb072,	// (0x0004afa6) popup_clock_analogue_window_g3

0xb072,	// (0x0004afa6) popup_clock_analogue_window_g4

0xdf7a,	// (0x0004deae) popup_clock_analogue_window_g5

0x0004,

0xf32a,	// (0x0004f25e) popup_clock_analogue_window_g

0xb07a,	// (0x0004afae) popup_clock_analogue_window_t1

0xb088,	// (0x0004afbc) clock_digital_number_pane_ParamLimits

0xb088,	// (0x0004afbc) clock_digital_number_pane

0xb094,	// (0x0004afc8) clock_digital_number_pane_cp02_ParamLimits

0xb094,	// (0x0004afc8) clock_digital_number_pane_cp02

0xb0a0,	// (0x0004afd4) clock_digital_number_pane_cp03_ParamLimits

0xb0a0,	// (0x0004afd4) clock_digital_number_pane_cp03

0xb0ac,	// (0x0004afe0) clock_digital_number_pane_cp04_ParamLimits

0xb0ac,	// (0x0004afe0) clock_digital_number_pane_cp04

0xb0bc,	// (0x0004aff0) clock_digital_separator_pane_ParamLimits

0xb0bc,	// (0x0004aff0) clock_digital_separator_pane

0xb0c8,	// (0x0004affc) popup_clock_digital_window_t1

0xdf7a,	// (0x0004deae) clock_digital_number_pane_g1

0xdf7a,	// (0x0004deae) clock_digital_number_pane_g2

0x0001,

0x00e7,	// (0x0004001b) clock_digital_number_pane_g

0xdf7a,	// (0x0004deae) clock_digital_separator_pane_g1

0xdf7a,	// (0x0004deae) clock_digital_separator_pane_g2

0x0001,

0x00e7,	// (0x0004001b) clock_digital_separator_pane_g

0xdbf3,	// (0x0004db27) bg_popup_window_pane_cp04

0xe78a,	// (0x0004e6be) heading_pane_cp03

0xe7a0,	// (0x0004e6d4) listscroll_popup_gms_pane

0xe7a8,	// (0x0004e6dc) grid_large_graphic_popup_pane

0xe7b2,	// (0x0004e6e6) listscroll_popup_gms_pane_g1

0xe7ba,	// (0x0004e6ee) listscroll_popup_gms_pane_g2

0x0001,

0x0184,	// (0x000400b8) listscroll_popup_gms_pane_g

0xe269,	// (0x0004e19d) scroll_pane_cp014

0x349f,	// (0x000433d3) cell_large_graphic_popup_pane_ParamLimits

0x349f,	// (0x000433d3) cell_large_graphic_popup_pane

0x34b7,	// (0x000433eb) cell_large_graphic_popup_pane_g1_ParamLimits

0x34b7,	// (0x000433eb) cell_large_graphic_popup_pane_g1

0xe7c2,	// (0x0004e6f6) cell_large_graphic_popup_pane_g2_ParamLimits

0xe7c2,	// (0x0004e6f6) cell_large_graphic_popup_pane_g2

0xe7ce,	// (0x0004e702) cell_large_graphic_popup_pane_g3_ParamLimits

0xe7ce,	// (0x0004e702) cell_large_graphic_popup_pane_g3

0xe7db,	// (0x0004e70f) cell_large_graphic_popup_pane_g4_ParamLimits

0xe7db,	// (0x0004e70f) cell_large_graphic_popup_pane_g4

0x0003,

0xf335,	// (0x0004f269) cell_large_graphic_popup_pane_g_ParamLimits

0xf335,	// (0x0004f269) cell_large_graphic_popup_pane_g

0xe7eb,	// (0x0004e71f) grid_highlight_pane_cp010

0xdf7a,	// (0x0004deae) bg_popup_call_pane_g1

0xe7f5,	// (0x0004e729) list_single_graphic_popup_conf_pane_ParamLimits

0xe7f5,	// (0x0004e729) list_single_graphic_popup_conf_pane

0xe808,	// (0x0004e73c) list_highlight_pane_cp01

0xe811,	// (0x0004e745) list_single_graphic_popup_conf_pane_g1

0xe819,	// (0x0004e74d) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0192,	// (0x000400c6) list_single_graphic_popup_conf_pane_g

0xe821,	// (0x0004e755) list_single_graphic_popup_conf_pane_t1

0xe82f,	// (0x0004e763) linegrid_cams_pane_g1

0x34c3,	// (0x000433f7) linegrid_cams_pane_g2

0xe0a6,	// (0x0004dfda) linegrid_cams_pane_g3

0xe838,	// (0x0004e76c) linegrid_cams_pane_g4

0x34cc,	// (0x00043400) linegrid_cams_pane_g5

0x34d5,	// (0x00043409) linegrid_cams_pane_g6

0xe0af,	// (0x0004dfe3) linegrid_cams_pane_g7

0x0006,

0xf33e,	// (0x0004f272) linegrid_cams_pane_g

0xe841,	// (0x0004e775) popup_clock_analogue_window

0xe841,	// (0x0004e775) popup_clock_digital_window

0xdbf3,	// (0x0004db27) popup_phob_thumbnail_window

0xdf7a,	// (0x0004deae) call_video_uplink_pane_g1

0xe84a,	// (0x0004e77e) call_video_uplink_pane_g2

0x0001,

0x01a6,	// (0x000400da) call_video_uplink_pane_g

0xe852,	// (0x0004e786) video_uplink_pane

0xe85a,	// (0x0004e78e) mce_image_pane_g1

0x34e0,	// (0x00043414) mce_image_pane_g2

0x34ea,	// (0x0004341e) mce_image_pane_g3

0x34f2,	// (0x00043426) mce_image_pane_g4

0x34fa,	// (0x0004342e) mce_image_pane_g5

0x0004,

0xf34d,	// (0x0004f281) mce_image_pane_g

0xe864,	// (0x0004e798) control_top_pane_stacon_cp01_ParamLimits

0xe864,	// (0x0004e798) control_top_pane_stacon_cp01

0xe878,	// (0x0004e7ac) uni_indicator_pane_stacon_cp01_ParamLimits

0xe878,	// (0x0004e7ac) uni_indicator_pane_stacon_cp01

0xe889,	// (0x0004e7bd) bg_popup_sub_pane_cp03

0x3502,	// (0x00043436) chi_dic_find_pane

0x350a,	// (0x0004343e) listscroll_chi_dic_pane

0x3513,	// (0x00043447) main_pane_chidic_g1

0xe893,	// (0x0004e7c7) chi_dic_find_pane_t1

0xe8a1,	// (0x0004e7d5) find_chidic_pane

0xe8aa,	// (0x0004e7de) chi_dic_list_pane_ParamLimits

0xe8aa,	// (0x0004e7de) chi_dic_list_pane

0xe8bb,	// (0x0004e7ef) scroll_pane_cp020

0xe8c3,	// (0x0004e7f7) find_chidic_pane_t1

0xdbf3,	// (0x0004db27) input_focus_pane_cp06

0x3526,	// (0x0004345a) list_chi_dic_pane_ParamLimits

0x3526,	// (0x0004345a) list_chi_dic_pane

0x3538,	// (0x0004346c) list_chi_dic_pane_t1_ParamLimits

0x3538,	// (0x0004346c) list_chi_dic_pane_t1

0xdbf3,	// (0x0004db27) list_highlight_pane_cp020

0xe8d2,	// (0x0004e806) bg_cale_heading_pane_g1

0x354b,	// (0x0004347f) bg_cale_heading_pane_g2

0x3553,	// (0x00043487) bg_cale_heading_pane_g3

0x355b,	// (0x0004348f) bg_cale_heading_pane_g4

0x3565,	// (0x00043499) bg_cale_heading_pane_g5

0x356f,	// (0x000434a3) bg_cale_heading_pane_g6

0x3577,	// (0x000434ab) bg_cale_heading_pane_g7

0x357f,	// (0x000434b3) bg_cale_heading_pane_g8

0x3589,	// (0x000434bd) bg_cale_heading_pane_g9

0x0008,

0xf358,	// (0x0004f28c) bg_cale_heading_pane_g

0xe8d2,	// (0x0004e806) bg_cale_side_pane_g1

0x3593,	// (0x000434c7) bg_cale_side_pane_g2

0x359b,	// (0x000434cf) bg_cale_side_pane_g3

0x35a3,	// (0x000434d7) bg_cale_side_pane_g4

0x35ab,	// (0x000434df) bg_cale_side_pane_g5

0x35b3,	// (0x000434e7) bg_cale_side_pane_g6

0x35bb,	// (0x000434ef) bg_cale_side_pane_g7

0x35c3,	// (0x000434f7) bg_cale_side_pane_g8

0x35cb,	// (0x000434ff) bg_cale_side_pane_g9

0x0008,

0xf36b,	// (0x0004f29f) bg_cale_side_pane_g

0x35d3,	// (0x00043507) popup_call_status_window_ParamLimits

0x35d3,	// (0x00043507) popup_call_status_window

0xe8da,	// (0x0004e80e) stacon_top_pane

0xe8e2,	// (0x0004e816) status_pane_ParamLimits

0xe8e2,	// (0x0004e816) status_pane

0xe8f7,	// (0x0004e82b) status_small_pane

0xe8ff,	// (0x0004e833) control_pane

0xdbf3,	// (0x0004db27) stacon_bottom_pane

0xe907,	// (0x0004e83b) list_single_mce_smart_pane_t1_ParamLimits

0xe907,	// (0x0004e83b) list_single_mce_smart_pane_t1

0xe91a,	// (0x0004e84e) list_single_mce_smart_pane_t2_ParamLimits

0xe91a,	// (0x0004e84e) list_single_mce_smart_pane_t2

0x0001,

0x01dc,	// (0x00040110) list_single_mce_smart_pane_t_ParamLimits

0x01dc,	// (0x00040110) list_single_mce_smart_pane_t

0x361c,	// (0x00043550) compass_pane

0x3625,	// (0x00043559) main_location2_pane_t1

0x3637,	// (0x0004356b) main_location2_pane_t2

0x3649,	// (0x0004357d) main_location2_pane_t3

0x0003,

0xf37e,	// (0x0004f2b2) main_location2_pane_t

0xe939,	// (0x0004e86d) compass_pane_g1_ParamLimits

0xe939,	// (0x0004e86d) compass_pane_g1

0x368d,	// (0x000435c1) compass_pane_t1

0x369c,	// (0x000435d0) compass_pane_t2

0x0005,

0xf387,	// (0x0004f2bb) compass_pane_t

0x36e3,	// (0x00043617) text_secondary_cp61

0xe94d,	// (0x0004e881) navi_pane_cams_g5

0xe970,	// (0x0004e8a4) navi_pane_im_t1

0xe97e,	// (0x0004e8b2) navi_pane_mp_g1_ParamLimits

0xe97e,	// (0x0004e8b2) navi_pane_mp_g1

0xe992,	// (0x0004e8c6) navi_pane_mp_g2_ParamLimits

0xe992,	// (0x0004e8c6) navi_pane_mp_g2

0xe99e,	// (0x0004e8d2) navi_pane_mp_g3_ParamLimits

0xe99e,	// (0x0004e8d2) navi_pane_mp_g3

0x0002,

0x01fe,	// (0x00040132) navi_pane_mp_g_ParamLimits

0x01fe,	// (0x00040132) navi_pane_mp_g

0xe9aa,	// (0x0004e8de) navi_pane_mp_t1

0xe9b8,	// (0x0004e8ec) navi_pane_mp_t2

0x0002,

0x0205,	// (0x00040139) navi_pane_mp_t

0xe9f4,	// (0x0004e928) navi_pane_vt_g1

0xe9aa,	// (0x0004e8de) navi_pane_vt_t1

0xe9fc,	// (0x0004e930) navi_slider_pane

0xea04,	// (0x0004e938) zooming_pane

0xea0c,	// (0x0004e940) navi_slider_pane_g1

0xb0e5,	// (0x0004b019) navi_slider_pane_g2

0x0006,

0xf39b,	// (0x0004f2cf) navi_slider_pane_g

0xea30,	// (0x0004e964) aid_levels_zoom

0xea38,	// (0x0004e96c) zooming_pane_g1

0xea40,	// (0x0004e974) zooming_pane_g2

0xea40,	// (0x0004e974) zooming_pane_g3

0x0002,

0x021b,	// (0x0004014f) zooming_pane_g

0xea48,	// (0x0004e97c) level_10_zoom

0xea51,	// (0x0004e985) level_11_zoom

0xea5a,	// (0x0004e98e) level_1_zoom

0xea63,	// (0x0004e997) level_2_zoom

0xea6c,	// (0x0004e9a0) level_3_zoom

0xea75,	// (0x0004e9a9) level_4_zoom

0xea7e,	// (0x0004e9b2) level_5_zoom

0xea87,	// (0x0004e9bb) level_6_zoom

0xea90,	// (0x0004e9c4) level_7_zoom

0xea99,	// (0x0004e9cd) level_8_zoom

0xeaa2,	// (0x0004e9d6) level_9_zoom

0xeab3,	// (0x0004e9e7) popup_phob_thumbnail_window_g1

0xeabb,	// (0x0004e9ef) popup_phob_thumbnail_window_g2

0x0001,

0x0222,	// (0x00040156) popup_phob_thumbnail_window_g

0x508a,	// (0x00044fbe) level_1_location

0x5092,	// (0x00044fc6) level_2_location

0x509a,	// (0x00044fce) level_3_location

0x50a2,	// (0x00044fd6) level_4_location

0xea04,	// (0x0004e938) level_5_location

0x3808,	// (0x0004373c) mce_icon_pane_g1

0x3810,	// (0x00043744) mce_icon_pane_g2

0x0001,

0xf3aa,	// (0x0004f2de) mce_icon_pane_g

0x3818,	// (0x0004374c) main_mup_pane_g1_ParamLimits

0x3818,	// (0x0004374c) main_mup_pane_g1

0x382e,	// (0x00043762) main_mup_pane_g2_ParamLimits

0x382e,	// (0x00043762) main_mup_pane_g2

0x3846,	// (0x0004377a) main_mup_pane_g3_ParamLimits

0x3846,	// (0x0004377a) main_mup_pane_g3

0x385e,	// (0x00043792) main_mup_pane_g4_ParamLimits

0x385e,	// (0x00043792) main_mup_pane_g4

0x3876,	// (0x000437aa) main_mup_pane_g5_ParamLimits

0x3876,	// (0x000437aa) main_mup_pane_g5

0x3892,	// (0x000437c6) main_mup_pane_g6_ParamLimits

0x3892,	// (0x000437c6) main_mup_pane_g6

0x38aa,	// (0x000437de) main_mup_pane_g7_ParamLimits

0x38aa,	// (0x000437de) main_mup_pane_g7

0x38c2,	// (0x000437f6) main_mup_pane_g8_ParamLimits

0x38c2,	// (0x000437f6) main_mup_pane_g8

0x38dc,	// (0x00043810) main_mup_pane_g9_ParamLimits

0x38dc,	// (0x00043810) main_mup_pane_g9

0x38f6,	// (0x0004382a) main_mup_pane_g10_ParamLimits

0x38f6,	// (0x0004382a) main_mup_pane_g10

0x3910,	// (0x00043844) main_mup_pane_g11_ParamLimits

0x3910,	// (0x00043844) main_mup_pane_g11

0x3924,	// (0x00043858) main_mup_pane_g12_ParamLimits

0x3924,	// (0x00043858) main_mup_pane_g12

0x393a,	// (0x0004386e) main_mup_pane_g13_ParamLimits

0x393a,	// (0x0004386e) main_mup_pane_g13

0x000c,

0xf3af,	// (0x0004f2e3) main_mup_pane_g_ParamLimits

0xf3af,	// (0x0004f2e3) main_mup_pane_g

0x394e,	// (0x00043882) main_mup_pane_t1_ParamLimits

0x394e,	// (0x00043882) main_mup_pane_t1

0x3968,	// (0x0004389c) main_mup_pane_t2_ParamLimits

0x3968,	// (0x0004389c) main_mup_pane_t2

0x3980,	// (0x000438b4) main_mup_pane_t3_ParamLimits

0x3980,	// (0x000438b4) main_mup_pane_t3

0x3998,	// (0x000438cc) main_mup_pane_t4_ParamLimits

0x3998,	// (0x000438cc) main_mup_pane_t4

0x39b6,	// (0x000438ea) main_mup_pane_t5_ParamLimits

0x39b6,	// (0x000438ea) main_mup_pane_t5

0x39cb,	// (0x000438ff) main_mup_pane_t6_ParamLimits

0x39cb,	// (0x000438ff) main_mup_pane_t6

0x0005,

0xf3ca,	// (0x0004f2fe) main_mup_pane_t_ParamLimits

0xf3ca,	// (0x0004f2fe) main_mup_pane_t

0x39dd,	// (0x00043911) mup_progress_pane_ParamLimits

0x39dd,	// (0x00043911) mup_progress_pane

0x39e9,	// (0x0004391d) mup_visualizer_pane_ParamLimits

0x39e9,	// (0x0004391d) mup_visualizer_pane

0x3a19,	// (0x0004394d) mup_volume_pane_ParamLimits

0x3a19,	// (0x0004394d) mup_volume_pane

0xe792,	// (0x0004e6c6) mup_visualizer_pane_g1_ParamLimits

0xe792,	// (0x0004e6c6) mup_visualizer_pane_g1

0xe792,	// (0x0004e6c6) mup_visualizer_pane_g2_ParamLimits

0xe792,	// (0x0004e6c6) mup_visualizer_pane_g2

0xe939,	// (0x0004e86d) mup_visualizer_pane_g3_ParamLimits

0xe939,	// (0x0004e86d) mup_visualizer_pane_g3

0x0002,

0xf3d7,	// (0x0004f30b) mup_visualizer_pane_g_ParamLimits

0xf3d7,	// (0x0004f30b) mup_visualizer_pane_g

0xdf7a,	// (0x0004deae) mup_volume_pane_g1

0xeacb,	// (0x0004e9ff) mup_volume_pane_g2

0x0001,

0x025b,	// (0x0004018f) mup_volume_pane_g

0xdf7a,	// (0x0004deae) mup_progress_pane_g1

0xead4,	// (0x0004ea08) mup_progress_pane_g2

0xeadd,	// (0x0004ea11) mup_progress_pane_g3

0x0002,

0x0260,	// (0x00040194) mup_progress_pane_g

0xdbf3,	// (0x0004db27) bg_popup_window_pane_cp05

0xeae6,	// (0x0004ea1a) heading_pane_cp02_ParamLimits

0xeae6,	// (0x0004ea1a) heading_pane_cp02

0xeb00,	// (0x0004ea34) list_popup_blid_pane

0xeb08,	// (0x0004ea3c) list_blid_sat_info_pane_ParamLimits

0xeb08,	// (0x0004ea3c) list_blid_sat_info_pane

0xeb1b,	// (0x0004ea4f) list_blid_sat_info_pane_g1

0xeb23,	// (0x0004ea57) list_blid_sat_info_pane_t1

0x3b2f,	// (0x00043a63) mup_equalizer_pane_ParamLimits

0x3b2f,	// (0x00043a63) mup_equalizer_pane

0x3b48,	// (0x00043a7c) mup_equalizer_pane_cp1_ParamLimits

0x3b48,	// (0x00043a7c) mup_equalizer_pane_cp1

0x3b65,	// (0x00043a99) mup_equalizer_pane_cp2_ParamLimits

0x3b65,	// (0x00043a99) mup_equalizer_pane_cp2

0x3b82,	// (0x00043ab6) mup_equalizer_pane_cp3_ParamLimits

0x3b82,	// (0x00043ab6) mup_equalizer_pane_cp3

0x3ba3,	// (0x00043ad7) mup_equalizer_pane_cp4_ParamLimits

0x3ba3,	// (0x00043ad7) mup_equalizer_pane_cp4

0x3bc4,	// (0x00043af8) mup_equalizer_pane_cp5

0x3bd8,	// (0x00043b0c) mup_equalizer_pane_cp6

0x3bec,	// (0x00043b20) mup_equalizer_pane_cp7

0x4e87,	// (0x00044dbb) bg_popup_call_poc_act_pane_g9

0x4e8f,	// (0x00044dc3) bg_popup_call_poc_act_pane_g10

0x4e97,	// (0x00044dcb) bg_popup_call_poc_act_pane_g11

0x000a,

0xde4e,	// (0x0004dd82) mup_scale_pane

0xdf7a,	// (0x0004deae) mup_scale_pane_g1

0xeb31,	// (0x0004ea65) mup_scale_pane_g2

0x0006,

0xf3f3,	// (0x0004f327) mup_scale_pane_g

0xeb55,	// (0x0004ea89) msg_data_pane

0xeb5d,	// (0x0004ea91) scroll_pane_cp017

0x0e16,	// (0x00040d4a) bg_list_pane_cp04_ParamLimits

0x0e16,	// (0x00040d4a) bg_list_pane_cp04

0xeb65,	// (0x0004ea99) msg_data_pane_g1

0x3c12,	// (0x00043b46) msg_data_pane_g2

0x3c1c,	// (0x00043b50) msg_data_pane_g3

0x3c24,	// (0x00043b58) msg_data_pane_g4

0x3c2c,	// (0x00043b60) msg_data_pane_g5

0x3c34,	// (0x00043b68) msg_data_pane_g6

0x3c3c,	// (0x00043b70) msg_data_pane_g7

0x0006,

0xf402,	// (0x0004f336) msg_data_pane_g

0x0e36,	// (0x00040d6a) msg_text_pane_ParamLimits

0x0e36,	// (0x00040d6a) msg_text_pane

0x3c44,	// (0x00043b78) qrid_highlight_pane_cp011_ParamLimits

0x3c44,	// (0x00043b78) qrid_highlight_pane_cp011

0xdbf3,	// (0x0004db27) msg_body_pane

0xdbf3,	// (0x0004db27) msg_header_pane

0xeb76,	// (0x0004eaaa) input_focus_pane_cp07

0x0e69,	// (0x00040d9d) msg_header_pane_t1_ParamLimits

0x0e69,	// (0x00040d9d) msg_header_pane_t1

0x0e7d,	// (0x00040db1) msg_header_pane_t2_ParamLimits

0x0e7d,	// (0x00040db1) msg_header_pane_t2

0x0001,

0xf416,	// (0x0004f34a) msg_header_pane_t_ParamLimits

0xf416,	// (0x0004f34a) msg_header_pane_t

0xeb8b,	// (0x0004eabf) msg_body_pane_g1

0x0e8f,	// (0x00040dc3) msg_body_pane_t1_ParamLimits

0x0e8f,	// (0x00040dc3) msg_body_pane_t1

0x0ec0,	// (0x00040df4) msg_body_pane_t2_ParamLimits

0x0ec0,	// (0x00040df4) msg_body_pane_t2

0x0ed2,	// (0x00040e06) msg_body_pane_t3_ParamLimits

0x0ed2,	// (0x00040e06) msg_body_pane_t3

0x0002,

0xf41b,	// (0x0004f34f) msg_body_pane_t_ParamLimits

0xf41b,	// (0x0004f34f) msg_body_pane_t

0x3c94,	// (0x00043bc8) main_viewer_pane_g1_ParamLimits

0x3c94,	// (0x00043bc8) main_viewer_pane_g1

0x3ca2,	// (0x00043bd6) main_viewer_pane_g2_ParamLimits

0x3ca2,	// (0x00043bd6) main_viewer_pane_g2

0x3cb0,	// (0x00043be4) main_viewer_pane_g3_ParamLimits

0x3cb0,	// (0x00043be4) main_viewer_pane_g3

0x3cbf,	// (0x00043bf3) main_viewer_pane_g4_ParamLimits

0x3cbf,	// (0x00043bf3) main_viewer_pane_g4

0xb10f,	// (0x0004b043) main_viewer_pane_g5_ParamLimits

0xb10f,	// (0x0004b043) main_viewer_pane_g5

0xb10f,	// (0x0004b043) main_viewer_pane_g7_ParamLimits

0xb10f,	// (0x0004b043) main_viewer_pane_g7

0xb121,	// (0x0004b055) main_viewer_pane_g8_ParamLimits

0xb121,	// (0x0004b055) main_viewer_pane_g8

0x0007,

0xf42b,	// (0x0004f35f) main_viewer_pane_g_ParamLimits

0xf42b,	// (0x0004f35f) main_viewer_pane_g

0xeb93,	// (0x0004eac7) viewer_content_pane_ParamLimits

0xeb93,	// (0x0004eac7) viewer_content_pane

0x3cfb,	// (0x00043c2f) main_postcard_pane_g1_ParamLimits

0x3cfb,	// (0x00043c2f) main_postcard_pane_g1

0x3d11,	// (0x00043c45) main_postcard_pane_g2_ParamLimits

0x3d11,	// (0x00043c45) main_postcard_pane_g2

0x3d27,	// (0x00043c5b) main_postcard_pane_g3_ParamLimits

0x3d27,	// (0x00043c5b) main_postcard_pane_g3

0x0005,

0xf43c,	// (0x0004f370) main_postcard_pane_g_ParamLimits

0xf43c,	// (0x0004f370) main_postcard_pane_g

0x3d3e,	// (0x00043c72) main_postcard_pane_g4

0x56fe,	// (0x00045632) smil_status_volume_pane_g2

0x3d81,	// (0x00043cb5) postcard_pane_ParamLimits

0x3d81,	// (0x00043cb5) postcard_pane

0xeba1,	// (0x0004ead5) postcard_pane_g1_ParamLimits

0xeba1,	// (0x0004ead5) postcard_pane_g1

0x3dc3,	// (0x00043cf7) postcard_pane_g2_ParamLimits

0x3dc3,	// (0x00043cf7) postcard_pane_g2

0x3dcf,	// (0x00043d03) postcard_pane_g3_ParamLimits

0x3dcf,	// (0x00043d03) postcard_pane_g3

0xebaf,	// (0x0004eae3) postcard_pane_g4_ParamLimits

0xebaf,	// (0x0004eae3) postcard_pane_g4

0x3ddb,	// (0x00043d0f) postcard_pane_g5_ParamLimits

0x3ddb,	// (0x00043d0f) postcard_pane_g5

0x3df0,	// (0x00043d24) postcard_pane_g6_ParamLimits

0x3df0,	// (0x00043d24) postcard_pane_g6

0xeba1,	// (0x0004ead5) postcard_pane_g7_ParamLimits

0xeba1,	// (0x0004ead5) postcard_pane_g7

0x0006,

0xf449,	// (0x0004f37d) postcard_pane_g_ParamLimits

0xf449,	// (0x0004f37d) postcard_pane_g

0x3e04,	// (0x00043d38) main_mp2_pane_g1_ParamLimits

0x3e04,	// (0x00043d38) main_mp2_pane_g1

0x3e10,	// (0x00043d44) main_mp2_pane_g2_ParamLimits

0x3e10,	// (0x00043d44) main_mp2_pane_g2

0x3e1c,	// (0x00043d50) main_mp2_pane_g3_ParamLimits

0x3e1c,	// (0x00043d50) main_mp2_pane_g3

0x0002,

0xf458,	// (0x0004f38c) main_mp2_pane_g_ParamLimits

0xf458,	// (0x0004f38c) main_mp2_pane_g

0x3e28,	// (0x00043d5c) main_mp2_pane_t1_ParamLimits

0x3e28,	// (0x00043d5c) main_mp2_pane_t1

0x3e3d,	// (0x00043d71) main_mp2_pane_t2_ParamLimits

0x3e3d,	// (0x00043d71) main_mp2_pane_t2

0x3e4f,	// (0x00043d83) main_mp2_pane_t3_ParamLimits

0x3e4f,	// (0x00043d83) main_mp2_pane_t3

0x0002,

0xf45f,	// (0x0004f393) main_mp2_pane_t_ParamLimits

0xf45f,	// (0x0004f393) main_mp2_pane_t

0xebbd,	// (0x0004eaf1) pec_content_pane_ParamLimits

0xebbd,	// (0x0004eaf1) pec_content_pane

0xe269,	// (0x0004e19d) scroll_pane_cp015

0xebcf,	// (0x0004eb03) pec_attribute_pane_ParamLimits

0xebcf,	// (0x0004eb03) pec_attribute_pane

0x3e61,	// (0x00043d95) pec_content_pane_g1_ParamLimits

0x3e61,	// (0x00043d95) pec_content_pane_g1

0xebdf,	// (0x0004eb13) pec_content_pane_t1_ParamLimits

0xebdf,	// (0x0004eb13) pec_content_pane_t1

0xebf1,	// (0x0004eb25) pec_content_pane_t2_ParamLimits

0xebf1,	// (0x0004eb25) pec_content_pane_t2

0x0001,

0x02ef,	// (0x00040223) pec_content_pane_t_ParamLimits

0x02ef,	// (0x00040223) pec_content_pane_t

0x3e6d,	// (0x00043da1) list_single_graphic_pane_cp01_ParamLimits

0x3e6d,	// (0x00043da1) list_single_graphic_pane_cp01

0xde4e,	// (0x0004dd82) bg_popup_sub_pane_cp04

0xec03,	// (0x0004eb37) popup_mup_playback_window_g1

0xec0f,	// (0x0004eb43) popup_mup_playback_window_t1

0xec24,	// (0x0004eb58) popup_mup_playback_window_t2

0x0001,

0x02f4,	// (0x00040228) popup_mup_playback_window_t

0xec5b,	// (0x0004eb8f) main_image_pane_g1_ParamLimits

0xec5b,	// (0x0004eb8f) main_image_pane_g1

0xec9e,	// (0x0004ebd2) scroll_pane_cp018_ParamLimits

0xec9e,	// (0x0004ebd2) scroll_pane_cp018

0xecb6,	// (0x0004ebea) scroll_pane_cp016_ParamLimits

0xecb6,	// (0x0004ebea) scroll_pane_cp016

0x3f3a,	// (0x00043e6e) smil2_image_pane_ParamLimits

0x3f3a,	// (0x00043e6e) smil2_image_pane

0x3f6a,	// (0x00043e9e) smil2_root_pane_ParamLimits

0x3f6a,	// (0x00043e9e) smil2_root_pane

0x3fa2,	// (0x00043ed6) smil2_text_pane_ParamLimits

0x3fa2,	// (0x00043ed6) smil2_text_pane

0xdbf3,	// (0x0004db27) bg_list_pane_cp06

0xecf2,	// (0x0004ec26) grid_radio_pane

0xdbf3,	// (0x0004db27) bg_popup_window_pane_cp06

0xecfa,	// (0x0004ec2e) main_fmradio_pane_t1

0xe78a,	// (0x0004e6be) heading_pane_cp04

0xed08,	// (0x0004ec3c) main_fmradio_pane_t2

0x4f21,	// (0x00044e55) popup_cale_lunar_info_window_g1

0xed16,	// (0x0004ec4a) main_fmradio_pane_t3

0x4f29,	// (0x00044e5d) popup_cale_lunar_info_window_g2

0xed24,	// (0x0004ec58) main_fmradio_pane_t4

0x0001,

0xed32,	// (0x0004ec66) main_fmradio_pane_t5

0x0004,

0xf50e,	// (0x0004f442) popup_cale_lunar_info_window_g

0x0309,	// (0x0004023d) main_fmradio_pane_t

0xed40,	// (0x0004ec74) wait_bar_pane_cp03

0xed48,	// (0x0004ec7c) cell_fmradio_pane_ParamLimits

0xed48,	// (0x0004ec7c) cell_fmradio_pane

0xeba1,	// (0x0004ead5) cell_fmradio_pane_g1_ParamLimits

0xeba1,	// (0x0004ead5) cell_fmradio_pane_g1

0xdbf3,	// (0x0004db27) grid_highlight_pane_cp011

0xed5b,	// (0x0004ec8f) poc_content_pane_ParamLimits

0xed5b,	// (0x0004ec8f) poc_content_pane

0xed6d,	// (0x0004eca1) scroll_pane_cp019

0x4022,	// (0x00043f56) popup_call_poc_act_window_ParamLimits

0x4022,	// (0x00043f56) popup_call_poc_act_window

0x4046,	// (0x00043f7a) popup_call_poc_inact_window_ParamLimits

0x4046,	// (0x00043f7a) popup_call_poc_inact_window

0xf4e5,	// (0x0004f419) bg_popup_call_poc_act_pane_g

0x4e0f,	// (0x00044d43) bg_popup_call_poc_inact_pane_g1

0x4e17,	// (0x00044d4b) bg_popup_call_poc_inact_pane_g2

0xed75,	// (0x0004eca9) popup_call_poc_act_window_g2

0x4e1f,	// (0x00044d53) bg_popup_call_poc_inact_pane_g3

0x4e27,	// (0x00044d5b) bg_popup_call_poc_inact_pane_g4

0x4e2f,	// (0x00044d63) bg_popup_call_poc_inact_pane_g5

0xed7d,	// (0x0004ecb1) popup_call_poc_act_window_t1_ParamLimits

0xed7d,	// (0x0004ecb1) popup_call_poc_act_window_t1

0xeda5,	// (0x0004ecd9) popup_call_poc_act_window_t2_ParamLimits

0xeda5,	// (0x0004ecd9) popup_call_poc_act_window_t2

0xedcd,	// (0x0004ed01) popup_call_poc_act_window_t3_ParamLimits

0xedcd,	// (0x0004ed01) popup_call_poc_act_window_t3

0xedf5,	// (0x0004ed29) popup_call_poc_act_window_t4_ParamLimits

0xedf5,	// (0x0004ed29) popup_call_poc_act_window_t4

0x0003,

0x0314,	// (0x00040248) popup_call_poc_act_window_t_ParamLimits

0x0314,	// (0x00040248) popup_call_poc_act_window_t

0x4e37,	// (0x00044d6b) bg_popup_call_poc_inact_pane_g6

0x4e3f,	// (0x00044d73) bg_popup_call_poc_inact_pane_g7

0x4e47,	// (0x00044d7b) bg_popup_call_poc_inact_pane_g8

0xee07,	// (0x0004ed3b) popup_call_poc_inact_window_g2

0x4e4f,	// (0x00044d83) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d2,	// (0x0004f406) bg_popup_call_poc_inact_pane_g

0xee0f,	// (0x0004ed43) popup_call_poc_inact_window_t1_ParamLimits

0xee0f,	// (0x0004ed43) popup_call_poc_inact_window_t1

0xee24,	// (0x0004ed58) popup_call_poc_inact_window_t2_ParamLimits

0xee24,	// (0x0004ed58) popup_call_poc_inact_window_t2

0xee39,	// (0x0004ed6d) popup_call_poc_inact_window_t3_ParamLimits

0xee39,	// (0x0004ed6d) popup_call_poc_inact_window_t3

0x0002,

0x031d,	// (0x00040251) popup_call_poc_inact_window_t_ParamLimits

0x031d,	// (0x00040251) popup_call_poc_inact_window_t

0x55a4,	// (0x000454d8) context_pane_ParamLimits

0x55ff,	// (0x00045533) signal_pane_ParamLimits

0xea04,	// (0x0004e938) main_call2_pane

0x553a,	// (0x0004546e) popup_phob_thumbnail2_window_ParamLimits

0x553a,	// (0x0004546e) popup_phob_thumbnail2_window

0xb0f7,	// (0x0004b02b) aid_hotspot_pointer_arrow_pane

0xb0ff,	// (0x0004b033) aid_hotspot_pointer_hand_pane

0x5054,	// (0x00044f88) phob_pre_status_pane_g5

0x23a0,	// (0x000422d4) cams_zoom_pane_ParamLimits

0x23af,	// (0x000422e3) image_vga_pane_ParamLimits

0x23c9,	// (0x000422fd) main_camera_pane_g1_ParamLimits

0x23db,	// (0x0004230f) main_camera_pane_g2_ParamLimits

0x23eb,	// (0x0004231f) main_camera_pane_g3_ParamLimits

0x23fb,	// (0x0004232f) main_camera_pane_g4_ParamLimits

0x240b,	// (0x0004233f) main_camera_pane_g5_ParamLimits

0x241b,	// (0x0004234f) main_camera_pane_g6_ParamLimits

0x242d,	// (0x00042361) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0004f162) main_camera_pane_g_ParamLimits

0x243d,	// (0x00042371) main_camera_pane_t1_ParamLimits

0x2453,	// (0x00042387) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0004f173) main_camera_pane_t_ParamLimits

0xde4e,	// (0x0004dd82) bg_popup_preview_window_pane_cp01_ParamLimits

0xde4e,	// (0x0004dd82) bg_popup_preview_window_pane_cp01

0xee4e,	// (0x0004ed82) popup_phob_thumbnail2_window_g1_ParamLimits

0xee4e,	// (0x0004ed82) popup_phob_thumbnail2_window_g1

0xdbf3,	// (0x0004db27) call2_cli_visual_pane

0x407a,	// (0x00043fae) popup_call2_audio_conf_window_ParamLimits

0x407a,	// (0x00043fae) popup_call2_audio_conf_window

0x409a,	// (0x00043fce) popup_call2_audio_first_window_ParamLimits

0x409a,	// (0x00043fce) popup_call2_audio_first_window

0x4130,	// (0x00044064) popup_call2_audio_in_window_ParamLimits

0x4130,	// (0x00044064) popup_call2_audio_in_window

0x4178,	// (0x000440ac) popup_call2_audio_out_window_ParamLimits

0x4178,	// (0x000440ac) popup_call2_audio_out_window

0x41e2,	// (0x00044116) popup_call2_audio_second_window_ParamLimits

0x41e2,	// (0x00044116) popup_call2_audio_second_window

0x4248,	// (0x0004417c) popup_call2_audio_wait_window_ParamLimits

0x4248,	// (0x0004417c) popup_call2_audio_wait_window

0xdbf3,	// (0x0004db27) bg_popup_call2_act_pane_cp03

0xde30,	// (0x0004dd64) list_conf_pane_cp

0xee5a,	// (0x0004ed8e) popup_call2_audio_conf_window_t1

0xe7f5,	// (0x0004e729) list_single_graphic_popup_conf2_pane_ParamLimits

0xe7f5,	// (0x0004e729) list_single_graphic_popup_conf2_pane

0xe808,	// (0x0004e73c) list_highlight_pane_cp04

0xee68,	// (0x0004ed9c) list_single_graphic_popup_conf2_pane_g1

0xe819,	// (0x0004e74d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0324,	// (0x00040258) list_single_graphic_popup_conf2_pane_g

0xee72,	// (0x0004eda6) list_single_graphic_popup_conf2_pane_t1

0xee80,	// (0x0004edb4) bg_popup_call2_act_pane_cp01_ParamLimits

0xee80,	// (0x0004edb4) bg_popup_call2_act_pane_cp01

0xef0a,	// (0x0004ee3e) call_type_pane_cp05_ParamLimits

0xef0a,	// (0x0004ee3e) call_type_pane_cp05

0xef5e,	// (0x0004ee92) popup_call2_audio_second_window_g1_ParamLimits

0xef5e,	// (0x0004ee92) popup_call2_audio_second_window_g1

0xefb2,	// (0x0004eee6) popup_call2_audio_second_window_g2_ParamLimits

0xefb2,	// (0x0004eee6) popup_call2_audio_second_window_g2

0x0002,

0x0329,	// (0x0004025d) popup_call2_audio_second_window_g_ParamLimits

0x0329,	// (0x0004025d) popup_call2_audio_second_window_g

0xf017,	// (0x0004ef4b) popup_call2_audio_second_window_t1_ParamLimits

0xf017,	// (0x0004ef4b) popup_call2_audio_second_window_t1

0x4282,	// (0x000441b6) popup_call2_audio_second_window_t2_ParamLimits

0x4282,	// (0x000441b6) popup_call2_audio_second_window_t2

0x42d5,	// (0x00044209) popup_call2_audio_second_window_t3_ParamLimits

0x42d5,	// (0x00044209) popup_call2_audio_second_window_t3

0x0003,

0xf476,	// (0x0004f3aa) popup_call2_audio_second_window_t_ParamLimits

0xf476,	// (0x0004f3aa) popup_call2_audio_second_window_t

0xdbf3,	// (0x0004db27) bg_popup_call2_in_pane_cp02

0xdbfd,	// (0x0004db31) call_type_pane_cp04

0xdc05,	// (0x0004db39) popup_call2_audio_wait_window_g1

0xdc0d,	// (0x0004db41) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0004f04f) popup_call2_audio_wait_window_g

0xdc15,	// (0x0004db49) popup_call2_audio_wait_window_t3

0x43c8,	// (0x000442fc) bg_popup_call2_act_pane_ParamLimits

0x43c8,	// (0x000442fc) bg_popup_call2_act_pane

0x4488,	// (0x000443bc) call_type_pane_cp03_ParamLimits

0x4488,	// (0x000443bc) call_type_pane_cp03

0x44ec,	// (0x00044420) popup_call2_audio_first_window_g1_ParamLimits

0x44ec,	// (0x00044420) popup_call2_audio_first_window_g1

0x455c,	// (0x00044490) popup_call2_audio_first_window_g2_ParamLimits

0x455c,	// (0x00044490) popup_call2_audio_first_window_g2

0xe792,	// (0x0004e6c6) popup_call2_audio_first_window_g3_ParamLimits

0xe792,	// (0x0004e6c6) popup_call2_audio_first_window_g3

0x0004,

0xf47f,	// (0x0004f3b3) popup_call2_audio_first_window_g_ParamLimits

0xf47f,	// (0x0004f3b3) popup_call2_audio_first_window_g

0x463a,	// (0x0004456e) popup_call2_audio_first_window_t1_ParamLimits

0x463a,	// (0x0004456e) popup_call2_audio_first_window_t1

0x473d,	// (0x00044671) popup_call2_audio_first_window_t4_ParamLimits

0x473d,	// (0x00044671) popup_call2_audio_first_window_t4

0x4820,	// (0x00044754) popup_call2_audio_first_window_t5_ParamLimits

0x4820,	// (0x00044754) popup_call2_audio_first_window_t5

0x0003,

0xf48a,	// (0x0004f3be) popup_call2_audio_first_window_t_ParamLimits

0xf48a,	// (0x0004f3be) popup_call2_audio_first_window_t

0xde46,	// (0x0004dd7a) bg_popup_call2_act_pane_g1

0x4f31,	// (0x00044e65) popup_cale_lunar_info_window_t1

0x4f3f,	// (0x00044e73) popup_cale_lunar_info_window_t2

0x4f4d,	// (0x00044e81) popup_cale_lunar_info_window_t3

0xdbf3,	// (0x0004db27) bg_popup_call2_bubble_pane

0x4921,	// (0x00044855) bg_popup_call2_in_pane_cp01_ParamLimits

0x4921,	// (0x00044855) bg_popup_call2_in_pane_cp01

0xd8cf,	// (0x0004d803) call_type_pane_cp02

0x4969,	// (0x0004489d) popup_call2_audio_out_window_g1_ParamLimits

0x4969,	// (0x0004489d) popup_call2_audio_out_window_g1

0x4995,	// (0x000448c9) popup_call2_audio_out_window_g2_ParamLimits

0x4995,	// (0x000448c9) popup_call2_audio_out_window_g2

0x49bd,	// (0x000448f1) popup_call2_audio_out_window_g3_ParamLimits

0x49bd,	// (0x000448f1) popup_call2_audio_out_window_g3

0x0003,

0xf493,	// (0x0004f3c7) popup_call2_audio_out_window_g_ParamLimits

0xf493,	// (0x0004f3c7) popup_call2_audio_out_window_g

0x49f8,	// (0x0004492c) popup_call2_audio_out_window_t1_ParamLimits

0x49f8,	// (0x0004492c) popup_call2_audio_out_window_t1

0x4a57,	// (0x0004498b) popup_call2_audio_out_window_t2_ParamLimits

0x4a57,	// (0x0004498b) popup_call2_audio_out_window_t2

0x4aab,	// (0x000449df) popup_call2_audio_out_window_t3_ParamLimits

0x4aab,	// (0x000449df) popup_call2_audio_out_window_t3

0x4ac1,	// (0x000449f5) popup_call2_audio_out_window_t4_ParamLimits

0x4ac1,	// (0x000449f5) popup_call2_audio_out_window_t4

0x4ad7,	// (0x00044a0b) popup_call2_audio_out_window_t5_ParamLimits

0x4ad7,	// (0x00044a0b) popup_call2_audio_out_window_t5

0x0005,

0xf49c,	// (0x0004f3d0) popup_call2_audio_out_window_t_ParamLimits

0xf49c,	// (0x0004f3d0) popup_call2_audio_out_window_t

0x4b3b,	// (0x00044a6f) bg_popup_call2_in_pane_ParamLimits

0x4b3b,	// (0x00044a6f) bg_popup_call2_in_pane

0x4b97,	// (0x00044acb) popup_call2_audio_in_window_g1_ParamLimits

0x4b97,	// (0x00044acb) popup_call2_audio_in_window_g1

0x4bcf,	// (0x00044b03) popup_call2_audio_in_window_g2_ParamLimits

0x4bcf,	// (0x00044b03) popup_call2_audio_in_window_g2

0x4c07,	// (0x00044b3b) popup_call2_audio_in_window_g3_ParamLimits

0x4c07,	// (0x00044b3b) popup_call2_audio_in_window_g3

0x0003,

0xf4a9,	// (0x0004f3dd) popup_call2_audio_in_window_g_ParamLimits

0xf4a9,	// (0x0004f3dd) popup_call2_audio_in_window_g

0x4c5f,	// (0x00044b93) popup_call2_audio_in_window_t1_ParamLimits

0x4c5f,	// (0x00044b93) popup_call2_audio_in_window_t1

0x4cdf,	// (0x00044c13) popup_call2_audio_in_window_t2_ParamLimits

0x4cdf,	// (0x00044c13) popup_call2_audio_in_window_t2

0x4d5f,	// (0x00044c93) popup_call2_audio_in_window_t3_ParamLimits

0x4d5f,	// (0x00044c93) popup_call2_audio_in_window_t3

0x4d79,	// (0x00044cad) popup_call2_audio_in_window_t4_ParamLimits

0x4d79,	// (0x00044cad) popup_call2_audio_in_window_t4

0x4d8b,	// (0x00044cbf) popup_call2_audio_in_window_t5_ParamLimits

0x4d8b,	// (0x00044cbf) popup_call2_audio_in_window_t5

0x4da0,	// (0x00044cd4) popup_call2_audio_in_window_t6_ParamLimits

0x4da0,	// (0x00044cd4) popup_call2_audio_in_window_t6

0x0005,

0xf4b2,	// (0x0004f3e6) popup_call2_audio_in_window_t_ParamLimits

0xf4b2,	// (0x0004f3e6) popup_call2_audio_in_window_t

0xde46,	// (0x0004dd7a) bg_popup_call2_in_pane_g1

0x4f5b,	// (0x00044e8f) popup_cale_lunar_info_window_t4

0x0003,

0xf513,	// (0x0004f447) popup_cale_lunar_info_window_t

0xde4e,	// (0x0004dd82) bg_popup_call2_rect_pane_ParamLimits

0xde4e,	// (0x0004dd82) bg_popup_call2_rect_pane

0xdbf3,	// (0x0004db27) call2_cli_visual_graphic_pane

0xdbf3,	// (0x0004db27) call2_cli_visual_text_pane

0xb139,	// (0x0004b06d) smil_status_volume_pane_g3

0x0002,

0xdf7a,	// (0x0004deae) call2_cli_visual_graphic_pane_g1

0xdf7a,	// (0x0004deae) call2_cli_visual_graphic_pane_g2

0xdf7a,	// (0x0004deae) call2_cli_visual_graphic_pane_g3

0x0002,

0x0379,	// (0x000402ad) call2_cli_visual_graphic_pane_g

0x4dcf,	// (0x00044d03) bg_popup_call2_rect_pane_g1

0xe006,	// (0x0004df3a) bg_popup_call2_rect_pane_g2

0x4dd7,	// (0x00044d0b) bg_popup_call2_rect_pane_g3

0x4ddf,	// (0x00044d13) bg_popup_call2_rect_pane_g4

0x4de7,	// (0x00044d1b) bg_popup_call2_rect_pane_g5

0x4def,	// (0x00044d23) bg_popup_call2_rect_pane_g6

0x4df7,	// (0x00044d2b) bg_popup_call2_rect_pane_g7

0x4dff,	// (0x00044d33) bg_popup_call2_rect_pane_g8

0x4e07,	// (0x00044d3b) bg_popup_call2_rect_pane_g9

0x0008,

0xf4bf,	// (0x0004f3f3) bg_popup_call2_rect_pane_g

0x4e0f,	// (0x00044d43) bg_popup_call2_bubble_pane_g1

0x4e17,	// (0x00044d4b) bg_popup_call2_bubble_pane_g2

0x4e1f,	// (0x00044d53) bg_popup_call2_bubble_pane_g3

0x4e27,	// (0x00044d5b) bg_popup_call2_bubble_pane_g4

0x4e2f,	// (0x00044d63) bg_popup_call2_bubble_pane_g5

0x4e37,	// (0x00044d6b) bg_popup_call2_bubble_pane_g6

0x4e3f,	// (0x00044d73) bg_popup_call2_bubble_pane_g7

0x4e47,	// (0x00044d7b) bg_popup_call2_bubble_pane_g8

0x4e4f,	// (0x00044d83) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d2,	// (0x0004f406) bg_popup_call2_bubble_pane_g

0x1f37,	// (0x00041e6b) aid_cale_week_size_cell_pane

0x2469,	// (0x0004239d) aid_cams_cif_uncrop_pane_ParamLimits

0x2469,	// (0x0004239d) aid_cams_cif_uncrop_pane

0x2622,	// (0x00042556) aid_cams_size_cell_ParamLimits

0x2622,	// (0x00042556) aid_cams_size_cell

0x2636,	// (0x0004256a) grid_cams_pane_ParamLimits

0x2650,	// (0x00042584) linegrid_cams_pane_ParamLimits

0x2735,	// (0x00042669) call_video_pane_t1

0x2753,	// (0x00042687) call_video_pane_t2

0x0001,

0xf284,	// (0x0004f1b8) call_video_pane_t

0x2b7f,	// (0x00042ab3) aid_cale_month_size_cell_pane_ParamLimits

0x2b7f,	// (0x00042ab3) aid_cale_month_size_cell_pane

0xf55c,	// (0x0004f490) smil_status_volume_pane_g

0xb146,	// (0x0004b07a) volume_smil_pane_ParamLimits

0xadc5,	// (0x0004acf9) aid_popup2_width_pane

0x1ea7,	// (0x00041ddb) cell_qdial_pane_g4_ParamLimits

0x1ea7,	// (0x00041ddb) cell_qdial_pane_g4

0x366d,	// (0x000435a1) aid_blid_cardinal_pane_ParamLimits

0x3679,	// (0x000435ad) aid_blid_destination_pane_ParamLimits

0x3679,	// (0x000435ad) aid_blid_destination_pane

0xde4e,	// (0x0004dd82) bg_popup_call_poc_act_pane_ParamLimits

0xde4e,	// (0x0004dd82) bg_popup_call_poc_act_pane

0xde4e,	// (0x0004dd82) bg_popup_call_poc_inact_pane_ParamLimits

0xde4e,	// (0x0004dd82) bg_popup_call_poc_inact_pane

0x4e5f,	// (0x00044d93) bg_popup_call_poc_act_pane_g1

0x4e67,	// (0x00044d9b) bg_popup_call_poc_act_pane_g2

0x4e6f,	// (0x00044da3) bg_popup_call_poc_act_pane_g3

0x4e27,	// (0x00044d5b) bg_popup_call_poc_act_pane_g4

0x4e2f,	// (0x00044d63) bg_popup_call_poc_act_pane_g5

0x4e77,	// (0x00044dab) bg_popup_call_poc_act_pane_g6

0x4e3f,	// (0x00044d73) bg_popup_call_poc_act_pane_g7

0x4e7f,	// (0x00044db3) bg_popup_call_poc_act_pane_g8

0xdbf3,	// (0x0004db27) main_usb_pane

0x536b,	// (0x0004529f) popup_cale_lunar_info_window

0x2a2b,	// (0x0004295f) im_reading_pane_t1_ParamLimits

0xe1c1,	// (0x0004e0f5) list_im_pane_ParamLimits

0xe1d2,	// (0x0004e106) scroll_pane_cp07_ParamLimits

0xdbf3,	// (0x0004db27) grid_highlight_pane_cp012

0xde4e,	// (0x0004dd82) mup_scale_pane_ParamLimits

0xeba1,	// (0x0004ead5) main_usb_pane_g1_ParamLimits

0xeba1,	// (0x0004ead5) main_usb_pane_g1

0x4e9f,	// (0x00044dd3) main_usb_pane_g2_ParamLimits

0x4e9f,	// (0x00044dd3) main_usb_pane_g2

0x0001,

0xf4fc,	// (0x0004f430) main_usb_pane_g_ParamLimits

0xf4fc,	// (0x0004f430) main_usb_pane_g

0x4eb5,	// (0x00044de9) main_usb_pane_t1_ParamLimits

0x4eb5,	// (0x00044de9) main_usb_pane_t1

0x4ec7,	// (0x00044dfb) main_usb_pane_t2_ParamLimits

0x4ec7,	// (0x00044dfb) main_usb_pane_t2

0x4ed9,	// (0x00044e0d) main_usb_pane_t3_ParamLimits

0x4ed9,	// (0x00044e0d) main_usb_pane_t3

0x4eeb,	// (0x00044e1f) main_usb_pane_t4_ParamLimits

0x4eeb,	// (0x00044e1f) main_usb_pane_t4

0x4efd,	// (0x00044e31) main_usb_pane_t5_ParamLimits

0x4efd,	// (0x00044e31) main_usb_pane_t5

0x4f0f,	// (0x00044e43) main_usb_pane_t6_ParamLimits

0x4f0f,	// (0x00044e43) main_usb_pane_t6

0x0005,

0xf501,	// (0x0004f435) main_usb_pane_t_ParamLimits

0x361c,	// (0x00043550) aid_text_placing

0x3625,	// (0x00043559) main_location2_pane_t1_ParamLimits

0x3637,	// (0x0004356b) main_location2_pane_t2_ParamLimits

0x3649,	// (0x0004357d) main_location2_pane_t3_ParamLimits

0x365b,	// (0x0004358f) main_location2_pane_t4_ParamLimits

0x365b,	// (0x0004358f) main_location2_pane_t4

0xf37e,	// (0x0004f2b2) main_location2_pane_t_ParamLimits

0xde8a,	// (0x0004ddbe) find_pinb_pane_g2_ParamLimits

0xde8a,	// (0x0004ddbe) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0004f075) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0004f075) find_pinb_pane_g

0xde96,	// (0x0004ddca) find_pinb_pane_t1_ParamLimits

0xdea8,	// (0x0004dddc) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0004f07a) find_pinb_pane_t_ParamLimits

0xdbf3,	// (0x0004db27) main_call3_pane

0x2ee3,	// (0x00042e17) cale_month_day_heading_pane_t1_ParamLimits

0x2f41,	// (0x00042e75) cale_month_day_heading_pane_t2_ParamLimits

0x2fa6,	// (0x00042eda) cale_month_day_heading_pane_t3_ParamLimits

0x300b,	// (0x00042f3f) cale_month_day_heading_pane_t4_ParamLimits

0x3070,	// (0x00042fa4) cale_month_day_heading_pane_t5_ParamLimits

0x30e5,	// (0x00043019) cale_month_day_heading_pane_t6_ParamLimits

0x315a,	// (0x0004308e) cale_month_day_heading_pane_t7_ParamLimits

0xf2a9,	// (0x0004f1dd) cale_month_day_heading_pane_t_ParamLimits

0xe412,	// (0x0004e346) smil_status_volume_pane

0x3d9f,	// (0x00043cd3) postcard_address_pane_ParamLimits

0x3d9f,	// (0x00043cd3) postcard_address_pane

0x3db1,	// (0x00043ce5) postcard_message_pane_ParamLimits

0x3db1,	// (0x00043ce5) postcard_message_pane

0x4db5,	// (0x00044ce9) call2_cli_visual_pane_t1_ParamLimits

0x4db5,	// (0x00044ce9) call2_cli_visual_pane_t1

0x58b1,	// (0x000457e5) postcard_message_pane_t1_ParamLimits

0x58b1,	// (0x000457e5) postcard_message_pane_t1

0x589a,	// (0x000457ce) postcard_address_pane_t1_ParamLimits

0x589a,	// (0x000457ce) postcard_address_pane_t1

0x5886,	// (0x000457ba) popup_call3_audio_in_window_ParamLimits

0x5886,	// (0x000457ba) popup_call3_audio_in_window

0x5711,	// (0x00045645) bg_popup_call3_in_pane_ParamLimits

0x5711,	// (0x00045645) bg_popup_call3_in_pane

0x5787,	// (0x000456bb) popup_call3_audio_in_window_g1_ParamLimits

0x5787,	// (0x000456bb) popup_call3_audio_in_window_g1

0x57a7,	// (0x000456db) popup_call3_audio_in_window_g2_ParamLimits

0x57a7,	// (0x000456db) popup_call3_audio_in_window_g2

0x57c7,	// (0x000456fb) popup_call3_audio_in_window_g3_ParamLimits

0x57c7,	// (0x000456fb) popup_call3_audio_in_window_g3

0x0003,

0xf563,	// (0x0004f497) popup_call3_audio_in_window_g_ParamLimits

0xf563,	// (0x0004f497) popup_call3_audio_in_window_g

0x57f8,	// (0x0004572c) popup_call3_audio_in_window_t1_ParamLimits

0x57f8,	// (0x0004572c) popup_call3_audio_in_window_t1

0x5836,	// (0x0004576a) popup_call3_audio_in_window_t2_ParamLimits

0x5836,	// (0x0004576a) popup_call3_audio_in_window_t2

0x5874,	// (0x000457a8) popup_call3_audio_in_window_t3_ParamLimits

0x5874,	// (0x000457a8) popup_call3_audio_in_window_t3

0x0002,

0xf56c,	// (0x0004f4a0) popup_call3_audio_in_window_t_ParamLimits

0xf56c,	// (0x0004f4a0) popup_call3_audio_in_window_t

0xea04,	// (0x0004e938) bg_popup_call3_rect_pane

0x4dcf,	// (0x00044d03) bg_popup_call3_rect_pane_g1

0xe006,	// (0x0004df3a) bg_popup_call3_rect_pane_g2

0x4dd7,	// (0x00044d0b) bg_popup_call3_rect_pane_g3

0x4ddf,	// (0x00044d13) bg_popup_call3_rect_pane_g4

0x4de7,	// (0x00044d1b) bg_popup_call3_rect_pane_g5

0x4def,	// (0x00044d23) bg_popup_call3_rect_pane_g6

0x4df7,	// (0x00044d2b) bg_popup_call3_rect_pane_g7

0x3a2f,	// (0x00043963) mup_visualizer_osc_pane

0xeac3,	// (0x0004e9f7) mup_visualizer_spec_pane

0x5741,	// (0x00045675) call3_video_qcif_pane_ParamLimits

0x5741,	// (0x00045675) call3_video_qcif_pane

0x5754,	// (0x00045688) call3_video_qcif_uncrop_pane_ParamLimits

0x5754,	// (0x00045688) call3_video_qcif_uncrop_pane

0x5762,	// (0x00045696) call3_video_subqcif_pane_ParamLimits

0x5762,	// (0x00045696) call3_video_subqcif_pane

0x5776,	// (0x000456aa) call3_video_subqcif_uncrop_pane_ParamLimits

0x5776,	// (0x000456aa) call3_video_subqcif_uncrop_pane

0x57e7,	// (0x0004571b) popup_call3_audio_in_window_g4_ParamLimits

0x57e7,	// (0x0004571b) popup_call3_audio_in_window_g4

0x56d2,	// (0x00045606) mup_spec_half_pane

0x56db,	// (0x0004560f) mup_spec_half_pane_cp

0x56c0,	// (0x000455f4) mup_osc_middle_pane

0x56c9,	// (0x000455fd) mup_visualizer_osc_pane_g1

0x56a0,	// (0x000455d4) mup_spec_bar_pane_ParamLimits

0x56a0,	// (0x000455d4) mup_spec_bar_pane

0x568d,	// (0x000455c1) mup_spec_bar_pane_g1

0x5697,	// (0x000455cb) mup_spec_bar_pane_g2

0x0001,

0xf557,	// (0x0004f48b) mup_spec_bar_pane_g

0x1f37,	// (0x00041e6b) aid_cale_week_size_cell_pane_ParamLimits

0x1f4a,	// (0x00041e7e) bg_cale_heading_pane_ParamLimits

0xe03a,	// (0x0004df6e) bg_cale_pane_cp01_ParamLimits

0x1f5e,	// (0x00041e92) cale_week_corner_pane_ParamLimits

0x1f74,	// (0x00041ea8) cale_week_day_heading_pane_ParamLimits

0x1f88,	// (0x00041ebc) cale_week_scroll_pane_g1_ParamLimits

0x1f99,	// (0x00041ecd) cale_week_scroll_pane_g2_ParamLimits

0x1faa,	// (0x00041ede) cale_week_scroll_pane_g3_ParamLimits

0x1fbb,	// (0x00041eef) cale_week_scroll_pane_g4_ParamLimits

0x1fcc,	// (0x00041f00) cale_week_scroll_pane_g5_ParamLimits

0x1fdf,	// (0x00041f13) cale_week_scroll_pane_g6_ParamLimits

0x1ff2,	// (0x00041f26) cale_week_scroll_pane_g7_ParamLimits

0x2005,	// (0x00041f39) cale_week_scroll_pane_g8_ParamLimits

0x2018,	// (0x00041f4c) cale_week_scroll_pane_g9_ParamLimits

0x2029,	// (0x00041f5d) cale_week_scroll_pane_g10_ParamLimits

0x203a,	// (0x00041f6e) cale_week_scroll_pane_g11_ParamLimits

0x204b,	// (0x00041f7f) cale_week_scroll_pane_g12_ParamLimits

0x205c,	// (0x00041f90) cale_week_scroll_pane_g13_ParamLimits

0x206d,	// (0x00041fa1) cale_week_scroll_pane_g14_ParamLimits

0x207e,	// (0x00041fb2) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0004f106) cale_week_scroll_pane_g_ParamLimits

0x208f,	// (0x00041fc3) cale_week_time_pane_ParamLimits

0x20a2,	// (0x00041fd6) grid_cale_week_pane_ParamLimits

0xe053,	// (0x0004df87) listscroll_cale_week_pane_t1

0x20b7,	// (0x00041feb) scroll_pane_cp08_ParamLimits

0x2bc0,	// (0x00042af4) cale_month_corner_pane_ParamLimits

0xe3e8,	// (0x0004e31c) cale_month_pane_t1

0x2ea2,	// (0x00042dd6) cale_month_week_pane_ParamLimits

0x3468,	// (0x0004339c) popup_call_status_window_g1_ParamLimits

0x347c,	// (0x000433b0) popup_call_status_window_g2_ParamLimits

0x3490,	// (0x000433c4) popup_call_status_window_g3_ParamLimits

0xf319,	// (0x0004f24d) popup_call_status_window_g_ParamLimits

0xe77a,	// (0x0004e6ae) aid_call2_pane

0x0e5b,	// (0x00040d8f) msg_header_pane_g1

0x3d9f,	// (0x00043cd3) postcard_address2_pane_ParamLimits

0x3d9f,	// (0x00043cd3) postcard_address2_pane

0x3db1,	// (0x00043ce5) postcard_message2_pane_ParamLimits

0x3db1,	// (0x00043ce5) postcard_message2_pane

0x560d,	// (0x00045541) message2_row_pane_ParamLimits

0x560d,	// (0x00045541) message2_row_pane

0x5629,	// (0x0004555d) address2_row_pane_ParamLimits

0x5629,	// (0x0004555d) address2_row_pane

0x563c,	// (0x00045570) postcard_message2_row_pane_g1

0x5644,	// (0x00045578) postcard_message2_row_pane_t1

0x563c,	// (0x00045570) address2_row_pane_g1

0x5644,	// (0x00045578) address2_row_pane_t1

0x2365,	// (0x00042299) aid_size_cell_vorec

0xdbf3,	// (0x0004db27) main_rss_pane

0x5652,	// (0x00045586) rss_list_single_pane_ParamLimits

0x5652,	// (0x00045586) rss_list_single_pane

0x5671,	// (0x000455a5) rss_list_single_pane_t1

0x567f,	// (0x000455b3) rss_list_single_pane_t2

0x0001,

0xf552,	// (0x0004f486) rss_list_single_pane_t

0xdbf3,	// (0x0004db27) main_camera2_pane

0xdbf3,	// (0x0004db27) main_video2_pane

0x592a,	// (0x0004585e) cams_zoom_pane_cp2_ParamLimits

0x592a,	// (0x0004585e) cams_zoom_pane_cp2

0x594a,	// (0x0004587e) image2_vga_pane_ParamLimits

0x594a,	// (0x0004587e) image2_vga_pane

0x599b,	// (0x000458cf) main_camera2_pane_g1_ParamLimits

0x599b,	// (0x000458cf) main_camera2_pane_g1

0x59bb,	// (0x000458ef) main_camera2_pane_g2_ParamLimits

0x59bb,	// (0x000458ef) main_camera2_pane_g2

0x59db,	// (0x0004590f) main_camera2_pane_g3_ParamLimits

0x59db,	// (0x0004590f) main_camera2_pane_g3

0x59fb,	// (0x0004592f) main_camera2_pane_g4_ParamLimits

0x59fb,	// (0x0004592f) main_camera2_pane_g4

0x5a1b,	// (0x0004594f) main_camera2_pane_g5_ParamLimits

0x5a1b,	// (0x0004594f) main_camera2_pane_g5

0x5a3b,	// (0x0004596f) main_camera2_pane_g6_ParamLimits

0x5a3b,	// (0x0004596f) main_camera2_pane_g6

0x5a5b,	// (0x0004598f) main_camera2_pane_g7_ParamLimits

0x5a5b,	// (0x0004598f) main_camera2_pane_g7

0x5a7b,	// (0x000459af) main_camera2_pane_g8_ParamLimits

0x5a7b,	// (0x000459af) main_camera2_pane_g8

0x0008,

0xf573,	// (0x0004f4a7) main_camera2_pane_g_ParamLimits

0xf573,	// (0x0004f4a7) main_camera2_pane_g

0x5abb,	// (0x000459ef) main_camera2_pane_t1_ParamLimits

0x5abb,	// (0x000459ef) main_camera2_pane_t1

0x5af0,	// (0x00045a24) main_camera2_pane_t2_ParamLimits

0x5af0,	// (0x00045a24) main_camera2_pane_t2

0x5b16,	// (0x00045a4a) main_camera2_pane_t3_ParamLimits

0x5b16,	// (0x00045a4a) main_camera2_pane_t3

0x5b74,	// (0x00045aa8) main_camera2_pane_t4_ParamLimits

0x5b74,	// (0x00045aa8) main_camera2_pane_t4

0x0006,

0xf586,	// (0x0004f4ba) main_camera2_pane_t_ParamLimits

0xf586,	// (0x0004f4ba) main_camera2_pane_t

0x5c06,	// (0x00045b3a) cams_zoom_pane_cp4_ParamLimits

0x5c06,	// (0x00045b3a) cams_zoom_pane_cp4

0x5c1c,	// (0x00045b50) image2_cif_pane_ParamLimits

0x5c1c,	// (0x00045b50) image2_cif_pane

0x5c47,	// (0x00045b7b) image2_subqcif_pane_ParamLimits

0x5c47,	// (0x00045b7b) image2_subqcif_pane

0x5c61,	// (0x00045b95) main_video2_pane_g1_ParamLimits

0x5c61,	// (0x00045b95) main_video2_pane_g1

0x5c7b,	// (0x00045baf) main_video2_pane_g2_ParamLimits

0x5c7b,	// (0x00045baf) main_video2_pane_g2

0x5c91,	// (0x00045bc5) main_video2_pane_g3_ParamLimits

0x5c91,	// (0x00045bc5) main_video2_pane_g3

0x5ca7,	// (0x00045bdb) main_video2_pane_g4_ParamLimits

0x5ca7,	// (0x00045bdb) main_video2_pane_g4

0x5cbd,	// (0x00045bf1) main_video2_pane_g5_ParamLimits

0x5cbd,	// (0x00045bf1) main_video2_pane_g5

0x5cd3,	// (0x00045c07) main_video2_pane_g6_ParamLimits

0x5cd3,	// (0x00045c07) main_video2_pane_g6

0x0005,

0xf595,	// (0x0004f4c9) main_video2_pane_g_ParamLimits

0xf595,	// (0x0004f4c9) main_video2_pane_g

0x5ced,	// (0x00045c21) main_video2_pane_t1_ParamLimits

0x5ced,	// (0x00045c21) main_video2_pane_t1

0x5d11,	// (0x00045c45) main_video2_pane_t2_ParamLimits

0x5d11,	// (0x00045c45) main_video2_pane_t2

0x5d5f,	// (0x00045c93) main_video2_pane_t3_ParamLimits

0x5d5f,	// (0x00045c93) main_video2_pane_t3

0x0002,

0xf5a2,	// (0x0004f4d6) main_video2_pane_t_ParamLimits

0xf5a2,	// (0x0004f4d6) main_video2_pane_t

0x50b4,	// (0x00044fe8) call_muted_g2

0x0001,

0xf544,	// (0x0004f478) call_muted_g

0xdbf3,	// (0x0004db27) main_mup2_pane

0x5da3,	// (0x00045cd7) main_mup2_pane_g1_ParamLimits

0x5da3,	// (0x00045cd7) main_mup2_pane_g1

0x5daf,	// (0x00045ce3) main_mup2_pane_g2_ParamLimits

0x5daf,	// (0x00045ce3) main_mup2_pane_g2

0xb1b4,	// (0x0004b0e8) main_mup_pane_g13_cp1

0xb1bc,	// (0x0004b0f0) mup_volume_pane_cp1

0x5dcb,	// (0x00045cff) main_mup2_pane_g4_ParamLimits

0x5dcb,	// (0x00045cff) main_mup2_pane_g4

0x5ddd,	// (0x00045d11) main_mup2_pane_g5_ParamLimits

0x5ddd,	// (0x00045d11) main_mup2_pane_g5

0x5def,	// (0x00045d23) main_mup2_pane_g6_ParamLimits

0x5def,	// (0x00045d23) main_mup2_pane_g6

0x5e01,	// (0x00045d35) main_mup2_pane_g7_ParamLimits

0x5e01,	// (0x00045d35) main_mup2_pane_g7

0x0006,

0xf5a9,	// (0x0004f4dd) main_mup2_pane_g_ParamLimits

0xf5a9,	// (0x0004f4dd) main_mup2_pane_g

0x5e19,	// (0x00045d4d) main_mup2_pane_t1_ParamLimits

0x5e19,	// (0x00045d4d) main_mup2_pane_t1

0x5e2f,	// (0x00045d63) main_mup2_pane_t2_ParamLimits

0x5e2f,	// (0x00045d63) main_mup2_pane_t2

0x5e45,	// (0x00045d79) main_mup2_pane_t3_ParamLimits

0x5e45,	// (0x00045d79) main_mup2_pane_t3

0x5e5b,	// (0x00045d8f) main_mup2_pane_t4_ParamLimits

0x5e5b,	// (0x00045d8f) main_mup2_pane_t4

0x5e73,	// (0x00045da7) main_mup2_pane_t5_ParamLimits

0x5e73,	// (0x00045da7) main_mup2_pane_t5

0x5e8b,	// (0x00045dbf) main_mup2_pane_t6_ParamLimits

0x5e8b,	// (0x00045dbf) main_mup2_pane_t6

0x0005,

0xf5b8,	// (0x0004f4ec) main_mup2_pane_t_ParamLimits

0xf5b8,	// (0x0004f4ec) main_mup2_pane_t

0x5ebb,	// (0x00045def) mup2_visualizer_pane_ParamLimits

0x5ebb,	// (0x00045def) mup2_visualizer_pane

0x5ee9,	// (0x00045e1d) mup_progress_pane_cp_ParamLimits

0x5ee9,	// (0x00045e1d) mup_progress_pane_cp

0xb19f,	// (0x0004b0d3) mup_volume_pane_cp_ParamLimits

0xb19f,	// (0x0004b0d3) mup_volume_pane_cp

0x5efd,	// (0x00045e31) mup2_visualizer_pane_g1_ParamLimits

0x5efd,	// (0x00045e31) mup2_visualizer_pane_g1

0x5f14,	// (0x00045e48) mup2_visualizer_pane_g2_ParamLimits

0x5f14,	// (0x00045e48) mup2_visualizer_pane_g2

0x5f20,	// (0x00045e54) mup2_visualizer_pane_g3_ParamLimits

0x5f20,	// (0x00045e54) mup2_visualizer_pane_g3

0x0002,

0xf5c5,	// (0x0004f4f9) mup2_visualizer_pane_g_ParamLimits

0xf5c5,	// (0x0004f4f9) mup2_visualizer_pane_g

0xecea,	// (0x0004ec1e) aid_size_cell_fmradio

0x5297,	// (0x000451cb) aid_height_parent_landcape

0xe250,	// (0x0004e184) wml_content_pane_cp

0xe258,	// (0x0004e18c) wml_tabs_pane

0xe261,	// (0x0004e195) popup_wml_miniature_window

0xe269,	// (0x0004e19d) scroll_pane_cp021

0xe27d,	// (0x0004e1b1) wml_content_pane_comp8

0xdbf3,	// (0x0004db27) bg_popup_sub_pane_cp05

0x5f3e,	// (0x00045e72) popup_wml_miniature_window_g1

0x5f46,	// (0x00045e7a) wml_miniature_view_pane

0x5f4e,	// (0x00045e82) aid_size_wml_view

0x5f56,	// (0x00045e8a) wml_miniature_view_pane_g1

0x5f5f,	// (0x00045e93) wml_miniature_view_pane_g2

0x5f68,	// (0x00045e9c) wml_miniature_view_pane_g3

0x5f70,	// (0x00045ea4) wml_miniature_view_pane_g4

0x5f78,	// (0x00045eac) wml_miniature_view_pane_g5

0x5f80,	// (0x00045eb4) wml_miniature_view_pane_g6

0x5f88,	// (0x00045ebc) wml_miniature_view_pane_g7

0x5f90,	// (0x00045ec4) wml_miniature_view_pane_g8

0x0007,

0xf5cc,	// (0x0004f500) wml_miniature_view_pane_g

0x5f98,	// (0x00045ecc) background_graphic_ParamLimits

0x5f98,	// (0x00045ecc) background_graphic

0x5fa4,	// (0x00045ed8) wml_tabs_2_pane

0x5fad,	// (0x00045ee1) wml_tabs_3_pane_ParamLimits

0x5fad,	// (0x00045ee1) wml_tabs_3_pane

0x5fbf,	// (0x00045ef3) wml_tabs_4_pane_ParamLimits

0x5fbf,	// (0x00045ef3) wml_tabs_4_pane

0x5fd5,	// (0x00045f09) wml_tabs_5_pane_ParamLimits

0x5fd5,	// (0x00045f09) wml_tabs_5_pane

0x5fef,	// (0x00045f23) wml_tabs_pane_g2_ParamLimits

0x5fef,	// (0x00045f23) wml_tabs_pane_g2

0x6003,	// (0x00045f37) wml_tabs_pane_g3_ParamLimits

0x6003,	// (0x00045f37) wml_tabs_pane_g3

0x6017,	// (0x00045f4b) wml_tabs_2_active_pane_ParamLimits

0x6017,	// (0x00045f4b) wml_tabs_2_active_pane

0x602b,	// (0x00045f5f) wml_tabs_2_passive_pane_ParamLimits

0x602b,	// (0x00045f5f) wml_tabs_2_passive_pane

0x603f,	// (0x00045f73) wml_tabs_3_active_pane_cp_ParamLimits

0x603f,	// (0x00045f73) wml_tabs_3_active_pane_cp

0x6054,	// (0x00045f88) wml_tabs_3_passive_pane_ParamLimits

0x6054,	// (0x00045f88) wml_tabs_3_passive_pane

0x6067,	// (0x00045f9b) wml_tabs_3_passive_pane_cp_ParamLimits

0x6067,	// (0x00045f9b) wml_tabs_3_passive_pane_cp

0x607e,	// (0x00045fb2) tabs_4_active_pane

0x6086,	// (0x00045fba) tabs_4_passive_pane

0x6090,	// (0x00045fc4) tabs_4_passive_pane_cp

0x6098,	// (0x00045fcc) tabs_4_passive_pane_cp2

0x4e57,	// (0x00044d8b) aid_height_text

0x3a05,	// (0x00043939) mup_volume_cont_pane_ParamLimits

0x3a05,	// (0x00043939) mup_volume_cont_pane

0x1b46,	// (0x00041a7a) aid_size_cell_pinb

0x1b50,	// (0x00041a84) aid_size_list_pinb

0x5ed5,	// (0x00045e09) mup2_volume_cont_pane_ParamLimits

0x5ed5,	// (0x00045e09) mup2_volume_cont_pane

0xb18b,	// (0x0004b0bf) mup2_volume_cont_pane_g1_ParamLimits

0xb18b,	// (0x0004b0bf) mup2_volume_cont_pane_g1

0x1834,	// (0x00041768) aid_size_cell_touch_ParamLimits

0x1834,	// (0x00041768) aid_size_cell_touch

0x1a36,	// (0x0004196a) touch_pane_ParamLimits

0x1a36,	// (0x0004196a) touch_pane

0xadb3,	// (0x0004ace7) main_rss2_pane

0x60ab,	// (0x00045fdf) listscroll_rss2_pane

0x60b4,	// (0x00045fe8) rss2_navigation_pane

0x60bc,	// (0x00045ff0) list_rss2_pane

0xe8bb,	// (0x0004e7ef) scroll_pane_cp22

0x60c4,	// (0x00045ff8) rss2_navigation_pane_g1

0x60cd,	// (0x00046001) rss2_navigation_pane_g2

0x60d5,	// (0x00046009) rss2_navigation_pane_g3

0x0002,

0xf5dd,	// (0x0004f511) rss2_navigation_pane_g

0x60dd,	// (0x00046011) rss2_navigation_pane_t1

0x60eb,	// (0x0004601f) rss2_list_single_pane_ParamLimits

0x60eb,	// (0x0004601f) rss2_list_single_pane

0x6100,	// (0x00046034) rss2_list_single_pane_t2

0x610e,	// (0x00046042) rss2_list_single_pane_t3_ParamLimits

0x610e,	// (0x00046042) rss2_list_single_pane_t3

0x612b,	// (0x0004605f) rss2_list_single_pane_t4

0x3354,	// (0x00043288) smil_status_pane_g1

0xf0d2,	// (0x0004f006) main_image2_pane_ParamLimits

0xf0d2,	// (0x0004f006) main_image2_pane

0x5a9b,	// (0x000459cf) main_camera2_pane_g9_ParamLimits

0x5a9b,	// (0x000459cf) main_camera2_pane_g9

0x5bc9,	// (0x00045afd) main_camera2_pane_t5_ParamLimits

0x5bc9,	// (0x00045afd) main_camera2_pane_t5

0xb15b,	// (0x0004b08f) main_camera2_pane_t6_ParamLimits

0xb15b,	// (0x0004b08f) main_camera2_pane_t6

0x6139,	// (0x0004606d) main_image2_pane_g1_ParamLimits

0x6139,	// (0x0004606d) main_image2_pane_g1

0x3fd8,	// (0x00043f0c) smil2_video_pane_ParamLimits

0x3fd8,	// (0x00043f0c) smil2_video_pane

0xade1,	// (0x0004ad15) aid_zoom_text_primary_cp

0xd6d4,	// (0x0004d608) popup_preview_fixed_window

0xe1b9,	// (0x0004e0ed) im_reading_pane_g1

0x5912,	// (0x00045846) cams2_bc_adjust_pane_cp_ParamLimits

0x5912,	// (0x00045846) cams2_bc_adjust_pane_cp

0x5bf8,	// (0x00045b2c) cams2_bc_adjust_pane_ParamLimits

0x5bf8,	// (0x00045b2c) cams2_bc_adjust_pane

0xb1c4,	// (0x0004b0f8) cams2_bc_adjust_pane_g1

0xb1cc,	// (0x0004b100) cams2_slider_pane

0xb1d5,	// (0x0004b109) cams2_slider_pane_g1

0xb1de,	// (0x0004b112) cams2_slider_pane_g2

0x0006,

0xf5e4,	// (0x0004f518) cams2_slider_pane_g

0x1c32,	// (0x00041b66) calc_display_pane_ParamLimits

0x1c5a,	// (0x00041b8e) calc_paper_pane_ParamLimits

0x1c7d,	// (0x00041bb1) grid_calc_pane_ParamLimits

0xb0c8,	// (0x0004affc) popup_clock_digital_window_t1_ParamLimits

0xec87,	// (0x0004ebbb) main_image_pane_t1

0x1c14,	// (0x00041b48) aid_size_cell_calc_ParamLimits

0x1c14,	// (0x00041b48) aid_size_cell_calc

0x52fb,	// (0x0004522f) popup_blid_sat_info2_window_ParamLimits

0x52fb,	// (0x0004522f) popup_blid_sat_info2_window

0x6157,	// (0x0004608b) aid_size_cell_blid

0x615f,	// (0x00046093) bg_popup_window_pane_cp07

0x6182,	// (0x000460b6) grid_popup_blid_pane

0x618c,	// (0x000460c0) heading_pane_cp05_ParamLimits

0x618c,	// (0x000460c0) heading_pane_cp05

0x6256,	// (0x0004618a) cell_popup_blid_pane_ParamLimits

0x6256,	// (0x0004618a) cell_popup_blid_pane

0x627a,	// (0x000461ae) cell_popup_blid_pane_g1

0x6282,	// (0x000461b6) cell_popup_blid_pane_t1

0x5ea5,	// (0x00045dd9) mup2_indicator_pane_ParamLimits

0x5ea5,	// (0x00045dd9) mup2_indicator_pane

0xea04,	// (0x0004e938) mup2_visualizer_osc_pane

0x5f2c,	// (0x00045e60) mup2_visualizer_spec_pane_ParamLimits

0x5f2c,	// (0x00045e60) mup2_visualizer_spec_pane

0x6290,	// (0x000461c4) mup2_spec_half_pane

0x6299,	// (0x000461cd) mup2_spec_half_pane_cp

0x62a1,	// (0x000461d5) mup2_spec_bar_pane_ParamLimits

0x62a1,	// (0x000461d5) mup2_spec_bar_pane

0x568d,	// (0x000455c1) mup2_spec_bar_pane_g1

0x5697,	// (0x000455cb) mup2_spec_bar_pane_g2

0x0001,

0xf557,	// (0x0004f48b) mup2_spec_bar_pane_g

0x62c1,	// (0x000461f5) mup2_osc_middle_pane

0x56c9,	// (0x000455fd) mup2_visualizer_osc_pane_g1

0xd800,	// (0x0004d734) popup_number_entry_window_t1_ParamLimits

0xd813,	// (0x0004d747) popup_number_entry_window_t2_ParamLimits

0xd825,	// (0x0004d759) popup_number_entry_window_t3_ParamLimits

0x1a88,	// (0x000419bc) popup_number_entry_window_t5_ParamLimits

0x1a88,	// (0x000419bc) popup_number_entry_window_t5

0xf0ec,	// (0x0004f020) popup_number_entry_window_t_ParamLimits

0xd837,	// (0x0004d76b) text_title_cp2_ParamLimits

0xb107,	// (0x0004b03b) aid_hotspot_pointer_text2_pane

0xb12d,	// (0x0004b061) main_viewer_pane_g9_ParamLimits

0xb12d,	// (0x0004b061) main_viewer_pane_g9

0xe3e8,	// (0x0004e31c) cale_month_pane_t1_ParamLimits

0xe425,	// (0x0004e359) bg_cale_pane_ParamLimits

0xe43d,	// (0x0004e371) list_cale_pane_ParamLimits

0xe053,	// (0x0004df87) listscroll_cale_day_pane_t1

0xe44e,	// (0x0004e382) scroll_pane_cp09_ParamLimits

0x3a37,	// (0x0004396b) main_mup_eq_pane_t1_ParamLimits

0x3a37,	// (0x0004396b) main_mup_eq_pane_t1

0x3a51,	// (0x00043985) main_mup_eq_pane_t2_ParamLimits

0x3a51,	// (0x00043985) main_mup_eq_pane_t2

0x3a6b,	// (0x0004399f) main_mup_eq_pane_t3_ParamLimits

0x3a6b,	// (0x0004399f) main_mup_eq_pane_t3

0x3a87,	// (0x000439bb) main_mup_eq_pane_t4_ParamLimits

0x3a87,	// (0x000439bb) main_mup_eq_pane_t4

0x3aa3,	// (0x000439d7) main_mup_eq_pane_t5_ParamLimits

0x3aa3,	// (0x000439d7) main_mup_eq_pane_t5

0x3abf,	// (0x000439f3) main_mup_eq_pane_t6_ParamLimits

0x3abf,	// (0x000439f3) main_mup_eq_pane_t6

0x3ad3,	// (0x00043a07) main_mup_eq_pane_t7_ParamLimits

0x3ad3,	// (0x00043a07) main_mup_eq_pane_t7

0x3ae7,	// (0x00043a1b) main_mup_eq_pane_t8_ParamLimits

0x3ae7,	// (0x00043a1b) main_mup_eq_pane_t8

0x3afb,	// (0x00043a2f) main_mup_eq_pane_t9_ParamLimits

0x3afb,	// (0x00043a2f) main_mup_eq_pane_t9

0x3b15,	// (0x00043a49) main_mup_eq_pane_t10_ParamLimits

0x3b15,	// (0x00043a49) main_mup_eq_pane_t10

0x0009,

0xf3de,	// (0x0004f312) main_mup_eq_pane_t_ParamLimits

0xf3de,	// (0x0004f312) main_mup_eq_pane_t

0x3bc4,	// (0x00043af8) mup_equalizer_pane_cp5_ParamLimits

0x3bd8,	// (0x00043b0c) mup_equalizer_pane_cp6_ParamLimits

0x3bec,	// (0x00043b20) mup_equalizer_pane_cp7_ParamLimits

0xadb3,	// (0x0004ace7) main_gallery_pane

0x56e3,	// (0x00045617) smil2_volume_pane

0x56eb,	// (0x0004561f) smil_status_volume_pane_g1_ParamLimits

0x56fe,	// (0x00045632) smil_status_volume_pane_g2_ParamLimits

0xb139,	// (0x0004b06d) smil_status_volume_pane_g3_ParamLimits

0xf55c,	// (0x0004f490) smil_status_volume_pane_g_ParamLimits

0x615f,	// (0x00046093) bg_popup_window_pane_cp07_ParamLimits

0x616d,	// (0x000460a1) blid_firmament_pane

0x62ca,	// (0x000461fe) aid_size_cell_gallery_ParamLimits

0x62ca,	// (0x000461fe) aid_size_cell_gallery

0x62e0,	// (0x00046214) grid_gallery_pane_ParamLimits

0x62e0,	// (0x00046214) grid_gallery_pane

0x62f9,	// (0x0004622d) cell_gallery_pane_ParamLimits

0x62f9,	// (0x0004622d) cell_gallery_pane

0x6342,	// (0x00046276) bg_cell_gallery_focus_pane_ParamLimits

0x6342,	// (0x00046276) bg_cell_gallery_focus_pane

0x6354,	// (0x00046288) cell_gallery_pane_g1_ParamLimits

0x6354,	// (0x00046288) cell_gallery_pane_g1

0x6360,	// (0x00046294) cell_gallery_pane_g2_ParamLimits

0x6360,	// (0x00046294) cell_gallery_pane_g2

0x636d,	// (0x000462a1) cell_gallery_pane_g3_ParamLimits

0x636d,	// (0x000462a1) cell_gallery_pane_g3

0x637a,	// (0x000462ae) cell_gallery_pane_g4_ParamLimits

0x637a,	// (0x000462ae) cell_gallery_pane_g4

0x0003,

0xf60a,	// (0x0004f53e) cell_gallery_pane_g_ParamLimits

0xf60a,	// (0x0004f53e) cell_gallery_pane_g

0x6386,	// (0x000462ba) bg_cell_gallery_focus_pane_g1

0x638e,	// (0x000462c2) bg_cell_gallery_focus_pane_g2

0x6396,	// (0x000462ca) bg_cell_gallery_focus_pane_g3

0x639e,	// (0x000462d2) bg_cell_gallery_focus_pane_g4

0x63a6,	// (0x000462da) bg_cell_gallery_focus_pane_g5

0x63ae,	// (0x000462e2) bg_cell_gallery_focus_pane_g6

0x63b6,	// (0x000462ea) bg_cell_gallery_focus_pane_g7

0x63be,	// (0x000462f2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf613,	// (0x0004f547) bg_cell_gallery_focus_pane_g

0x63c6,	// (0x000462fa) aid_firma_cardinal

0x63da,	// (0x0004630e) blid_firmament_pane_t1

0x63f1,	// (0x00046325) blid_firmament_pane_t2

0x6408,	// (0x0004633c) blid_firmament_pane_t3

0x641f,	// (0x00046353) blid_firmament_pane_t4

0x0003,

0xf624,	// (0x0004f558) blid_firmament_pane_t

0x6436,	// (0x0004636a) blid_sat_info_pane

0x6446,	// (0x0004637a) blid_sat_info_pane_g1

0x6446,	// (0x0004637a) blid_sat_info_pane_g2

0x0001,

0xf62d,	// (0x0004f561) blid_sat_info_pane_g

0x6450,	// (0x00046384) blid_sat_info_pane_t1

0x645e,	// (0x00046392) smil2_volume_content_pane

0x6467,	// (0x0004639b) smil2_volume_pane_g1

0x646f,	// (0x000463a3) smil2_volume_content_pane_g1

0x6478,	// (0x000463ac) smil2_volume_content_pane_g2

0x6481,	// (0x000463b5) smil2_volume_content_pane_g3

0x648a,	// (0x000463be) smil2_volume_content_pane_g4

0x6493,	// (0x000463c7) smil2_volume_content_pane_g5

0x649c,	// (0x000463d0) smil2_volume_content_pane_g6

0x64a5,	// (0x000463d9) smil2_volume_content_pane_g7

0x64ae,	// (0x000463e2) smil2_volume_content_pane_g8

0x64b7,	// (0x000463eb) smil2_volume_content_pane_g9

0x64c0,	// (0x000463f4) smil2_volume_content_pane_g10

0x0009,

0xf632,	// (0x0004f566) smil2_volume_content_pane_g

0x2111,	// (0x00042045) cale_week_day_heading_pane_t1_ParamLimits

0x213e,	// (0x00042072) cale_week_day_heading_pane_t2_ParamLimits

0x216b,	// (0x0004209f) cale_week_day_heading_pane_t3_ParamLimits

0x2198,	// (0x000420cc) cale_week_day_heading_pane_t4_ParamLimits

0x21c5,	// (0x000420f9) cale_week_day_heading_pane_t5_ParamLimits

0x21f2,	// (0x00042126) cale_week_day_heading_pane_t6_ParamLimits

0x2221,	// (0x00042155) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0004f125) cale_week_day_heading_pane_t_ParamLimits

0xe065,	// (0x0004df99) bg_cale_side_pane_ParamLimits

0x224e,	// (0x00042182) cale_week_time_pane_t1_ParamLimits

0x2266,	// (0x0004219a) cale_week_time_pane_t2_ParamLimits

0x227e,	// (0x000421b2) cale_week_time_pane_t3_ParamLimits

0x2296,	// (0x000421ca) cale_week_time_pane_t4_ParamLimits

0x22ae,	// (0x000421e2) cale_week_time_pane_t5_ParamLimits

0x22c6,	// (0x000421fa) cale_week_time_pane_t6_ParamLimits

0x22de,	// (0x00042212) cale_week_time_pane_t7_ParamLimits

0x22f6,	// (0x0004222a) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0004f134) cale_week_time_pane_t_ParamLimits

0x230e,	// (0x00042242) cell_cale_week_pane_g2_ParamLimits

0xe065,	// (0x0004df99) bg_cale_side_pane_cp01_ParamLimits

0x31cf,	// (0x00043103) cale_month_week_pane_t1_ParamLimits

0x31e6,	// (0x0004311a) cale_month_week_pane_t2_ParamLimits

0x31fd,	// (0x00043131) cale_month_week_pane_t3_ParamLimits

0x3214,	// (0x00043148) cale_month_week_pane_t4_ParamLimits

0x322b,	// (0x0004315f) cale_month_week_pane_t5_ParamLimits

0x3242,	// (0x00043176) cale_month_week_pane_t6_ParamLimits

0xf2b8,	// (0x0004f1ec) cale_month_week_pane_t_ParamLimits

0xafcf,	// (0x0004af03) cell_cale_month_pane_g1_ParamLimits

0xadb3,	// (0x0004ace7) main_cale_event_viewer_pane

0xadb3,	// (0x0004ace7) listscroll_cale_event_viewer_pane

0x64c9,	// (0x000463fd) list_cale_ev_pane

0x64d1,	// (0x00046405) scroll_pane_cp023

0x64dd,	// (0x00046411) field_cale_ev_pane_ParamLimits

0x64dd,	// (0x00046411) field_cale_ev_pane

0x64fb,	// (0x0004642f) field_cale_ev_content_pane_ParamLimits

0x64fb,	// (0x0004642f) field_cale_ev_content_pane

0x6507,	// (0x0004643b) field_cale_ev_pane_g1_ParamLimits

0x6507,	// (0x0004643b) field_cale_ev_pane_g1

0x6513,	// (0x00046447) field_cale_ev_pane_g2_ParamLimits

0x6513,	// (0x00046447) field_cale_ev_pane_g2

0x652b,	// (0x0004645f) field_cale_ev_pane_g3_ParamLimits

0x652b,	// (0x0004645f) field_cale_ev_pane_g3

0x0002,

0xf647,	// (0x0004f57b) field_cale_ev_pane_g_ParamLimits

0xf647,	// (0x0004f57b) field_cale_ev_pane_g

0x6543,	// (0x00046477) field_cale_ev_pane_t1_ParamLimits

0x6543,	// (0x00046477) field_cale_ev_pane_t1

0x655a,	// (0x0004648e) field_cale_ev_content_pane_t1_ParamLimits

0x655a,	// (0x0004648e) field_cale_ev_content_pane_t1

0xeb6d,	// (0x0004eaa1) bg_button_pane_cp01

0xdf25,	// (0x0004de59) listscroll_cale_week_pane_ParamLimits

0x1f2d,	// (0x00041e61) popup_toolbar_window_cp01

0xe053,	// (0x0004df87) listscroll_cale_week_pane_t1_ParamLimits

0xdf25,	// (0x0004de59) listscroll_cale_day_pane_ParamLimits

0x33a5,	// (0x000432d9) popup_toolbar_window_cp02

0xe053,	// (0x0004df87) listscroll_cale_day_pane_t1_ParamLimits

0xdf25,	// (0x0004de59) main_cale_month_pane_ParamLimits

0x5566,	// (0x0004549a) popup_toolbar_window_cp03_ParamLimits

0x5566,	// (0x0004549a) popup_toolbar_window_cp03

0x3ea0,	// (0x00043dd4) main_image_pane_g2_ParamLimits

0x3ea0,	// (0x00043dd4) main_image_pane_g2

0x3eb1,	// (0x00043de5) main_image_pane_g3_ParamLimits

0x3eb1,	// (0x00043de5) main_image_pane_g3

0x0002,

0xf466,	// (0x0004f39a) main_image_pane_g_ParamLimits

0xf466,	// (0x0004f39a) main_image_pane_g

0xec87,	// (0x0004ebbb) main_image_pane_t1_ParamLimits

0x3ec2,	// (0x00043df6) main_image_pane_t2_ParamLimits

0x3ec2,	// (0x00043df6) main_image_pane_t2

0x3ed4,	// (0x00043e08) main_image_pane_t3_ParamLimits

0x3ed4,	// (0x00043e08) main_image_pane_t3

0x3efc,	// (0x00043e30) main_image_pane_t4_ParamLimits

0x3efc,	// (0x00043e30) main_image_pane_t4

0x0003,

0xf46d,	// (0x0004f3a1) main_image_pane_t_ParamLimits

0xf46d,	// (0x0004f3a1) main_image_pane_t

0x3f1c,	// (0x00043e50) popup_image_details_window_cp01

0x3f26,	// (0x00043e5a) popup_toobar_trans_pane_cp01_ParamLimits

0x3f26,	// (0x00043e5a) popup_toobar_trans_pane_cp01

0x53e4,	// (0x00045318) popup_image_details_window_ParamLimits

0x53e4,	// (0x00045318) popup_image_details_window

0x53fc,	// (0x00045330) popup_image_focus_window

0x58cc,	// (0x00045800) camera2_autofocus_pane_ParamLimits

0x58cc,	// (0x00045800) camera2_autofocus_pane

0xadb3,	// (0x0004ace7) bg_popup_sub_pane_cp06

0x6578,	// (0x000464ac) popup_image_focus_window_g1

0x6580,	// (0x000464b4) popup_image_focus_window_g2

0x6588,	// (0x000464bc) popup_image_focus_window_g3

0x6590,	// (0x000464c4) popup_image_focus_window_g4

0x0003,

0xf64e,	// (0x0004f582) popup_image_focus_window_g

0x6598,	// (0x000464cc) popup_image_focus_window_t1

0x65a6,	// (0x000464da) popup_image_focus_window_t2

0x65b6,	// (0x000464ea) popup_image_focus_window_t3

0x0002,

0xf657,	// (0x0004f58b) popup_image_focus_window_t

0x65c4,	// (0x000464f8) camera2_autofocus_pane_g1

0xf0d2,	// (0x0004f006) bg_tb_trans_pane_cp01

0x6602,	// (0x00046536) popup_image_details_window_g1

0x6615,	// (0x00046549) popup_image_details_window_g2

0x0002,

0xf669,	// (0x0004f59d) popup_image_details_window_g

0x663e,	// (0x00046572) popup_image_details_window_t1

0x6650,	// (0x00046584) popup_image_details_window_t2

0x6669,	// (0x0004659d) popup_image_details_window_t3

0x667d,	// (0x000465b1) popup_image_details_window_t4

0x6698,	// (0x000465cc) popup_image_details_window_t5

0x0004,

0xf670,	// (0x0004f5a4) popup_image_details_window_t

0xdf11,	// (0x0004de45) bg_calc_paper_pane_ParamLimits

0xadb3,	// (0x0004ace7) grid_highlight_pane_cp013

0xae15,	// (0x0004ad49) list_calc_pane_ParamLimits

0xae27,	// (0x0004ad5b) scroll_pane_cp024

0xdf25,	// (0x0004de59) bg_calc_display_pane_ParamLimits

0x1d6e,	// (0x00041ca2) calc_display_pane_t1_ParamLimits

0x1d80,	// (0x00041cb4) calc_display_pane_t2_ParamLimits

0xae2f,	// (0x0004ad63) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0004f0a7) calc_display_pane_t_ParamLimits

0x1e38,	// (0x00041d6c) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0004f0c4) cell_calc_pane_g

0x1e41,	// (0x00041d75) cell_calc_pane_t1

0xdf84,	// (0x0004deb8) grid_highlight_pane_cp02_ParamLimits

0xdf9a,	// (0x0004dece) toolbar_button_pane_cp01_ParamLimits

0xdf9a,	// (0x0004dece) toolbar_button_pane_cp01

0xeccc,	// (0x0004ec00) temp_image_control_pane_ParamLimits

0xeccc,	// (0x0004ec00) temp_image_control_pane

0xf0d2,	// (0x0004f006) main_mp3_pane

0x66b2,	// (0x000465e6) temp_image_control_pane_g1_ParamLimits

0x66b2,	// (0x000465e6) temp_image_control_pane_g1

0x66c0,	// (0x000465f4) temp_image_control_pane_g2_ParamLimits

0x66c0,	// (0x000465f4) temp_image_control_pane_g2

0x66d2,	// (0x00046606) temp_image_control_pane_g3_ParamLimits

0x66d2,	// (0x00046606) temp_image_control_pane_g3

0x66e2,	// (0x00046616) temp_image_control_pane_g4_ParamLimits

0x66e2,	// (0x00046616) temp_image_control_pane_g4

0x0003,

0xf67b,	// (0x0004f5af) temp_image_control_pane_g_ParamLimits

0xf67b,	// (0x0004f5af) temp_image_control_pane_g

0x66b2,	// (0x000465e6) main_mp3_pane_g1

0x66f5,	// (0x00046629) main_mp3_pane_g2

0x0007,

0xf684,	// (0x0004f5b8) main_mp3_pane_g

0x6750,	// (0x00046684) main_mp3_pane_t1

0xe0ca,	// (0x0004dffe) main_camera_pane_g8_ParamLimits

0xe0ca,	// (0x0004dffe) main_camera_pane_g8

0x25c8,	// (0x000424fc) main_video_pane_g7_ParamLimits

0x25c8,	// (0x000424fc) main_video_pane_g7

0xb179,	// (0x0004b0ad) main_camera2_pane_t7_ParamLimits

0xb179,	// (0x0004b0ad) main_camera2_pane_t7

0xe210,	// (0x0004e144) scroll_pane_cp025_ParamLimits

0xe210,	// (0x0004e144) scroll_pane_cp025

0xe224,	// (0x0004e158) scroll_pane_cp026_ParamLimits

0xe224,	// (0x0004e158) scroll_pane_cp026

0xe233,	// (0x0004e167) wml_content_pane_ParamLimits

0xadb3,	// (0x0004ace7) main_touch_calib_pane

0x6824,	// (0x00046758) main_touch_calib_pane_g1

0x6830,	// (0x00046764) main_touch_calib_pane_g2

0x683c,	// (0x00046770) main_touch_calib_pane_g3

0x6848,	// (0x0004677c) main_touch_calib_pane_g4

0x0003,

0xf6a2,	// (0x0004f5d6) main_touch_calib_pane_g

0x6854,	// (0x00046788) main_touch_calib_pane_t1

0x686e,	// (0x000467a2) main_touch_calib_pane_t2

0x0004,

0xf6ab,	// (0x0004f5df) main_touch_calib_pane_t

0xe945,	// (0x0004e879) mup_progress_pane_cp02

0xe964,	// (0x0004e898) navi_pane_g1

0xe9c6,	// (0x0004e8fa) navi_pane_mp_t3

0xf0d2,	// (0x0004f006) main_mp3_pane_ParamLimits

0x55b7,	// (0x000454eb) navi_pane_ParamLimits

0x66b2,	// (0x000465e6) main_mp3_pane_g1_ParamLimits

0x66f5,	// (0x00046629) main_mp3_pane_g2_ParamLimits

0x6703,	// (0x00046637) main_mp3_pane_g3_ParamLimits

0x6703,	// (0x00046637) main_mp3_pane_g3

0x6711,	// (0x00046645) main_mp3_pane_g4_ParamLimits

0x6711,	// (0x00046645) main_mp3_pane_g4

0x671d,	// (0x00046651) main_mp3_pane_g5_ParamLimits

0x671d,	// (0x00046651) main_mp3_pane_g5

0x672b,	// (0x0004665f) main_mp3_pane_g6_ParamLimits

0x672b,	// (0x0004665f) main_mp3_pane_g6

0x6738,	// (0x0004666c) main_mp3_pane_g7_ParamLimits

0x6738,	// (0x0004666c) main_mp3_pane_g7

0x6744,	// (0x00046678) main_mp3_pane_g8_ParamLimits

0x6744,	// (0x00046678) main_mp3_pane_g8

0xf684,	// (0x0004f5b8) main_mp3_pane_g_ParamLimits

0x675e,	// (0x00046692) main_mp3_pane_t2

0x676c,	// (0x000466a0) main_mp3_pane_t3

0x677a,	// (0x000466ae) main_mp3_pane_t4

0x6788,	// (0x000466bc) main_mp3_pane_t5

0x0005,

0xf695,	// (0x0004f5c9) main_mp3_pane_t

0x67a4,	// (0x000466d8) mup_progress_pane_cp01

0xade1,	// (0x0004ad15) aid_zoom_text_secondary2

0x64c9,	// (0x000463fd) list_cale_ev2_pane

0x64d1,	// (0x00046405) scroll_pane_cp023_ParamLimits

0x68c4,	// (0x000467f8) field_cale_ev2_pane_ParamLimits

0x68c4,	// (0x000467f8) field_cale_ev2_pane

0xb1f8,	// (0x0004b12c) field_cale_ev2_pane_g1_ParamLimits

0xb1f8,	// (0x0004b12c) field_cale_ev2_pane_g1

0xb204,	// (0x0004b138) field_cale_ev2_pane_g2_ParamLimits

0xb204,	// (0x0004b138) field_cale_ev2_pane_g2

0xb21c,	// (0x0004b150) field_cale_ev2_pane_g3_ParamLimits

0xb21c,	// (0x0004b150) field_cale_ev2_pane_g3

0x0003,

0xf6b6,	// (0x0004f5ea) field_cale_ev2_pane_g_ParamLimits

0xf6b6,	// (0x0004f5ea) field_cale_ev2_pane_g

0x0ee4,	// (0x00040e18) field_cale_ev2_pane_t1_ParamLimits

0x0ee4,	// (0x00040e18) field_cale_ev2_pane_t1

0x0efb,	// (0x00040e2f) field_cale_ev2_pane_t2_ParamLimits

0x0efb,	// (0x00040e2f) field_cale_ev2_pane_t2

0x0001,

0xf6bf,	// (0x0004f5f3) field_cale_ev2_pane_t_ParamLimits

0xf6bf,	// (0x0004f5f3) field_cale_ev2_pane_t

0x3d55,	// (0x00043c89) main_postcard_pane_g5_ParamLimits

0x3d55,	// (0x00043c89) main_postcard_pane_g5

0x3d6b,	// (0x00043c9f) main_postcard_pane_g6_ParamLimits

0x3d6b,	// (0x00043c9f) main_postcard_pane_g6

0x2388,	// (0x000422bc) camera2_autofocus_pane_cp_ParamLimits

0x2388,	// (0x000422bc) camera2_autofocus_pane_cp

0xf0d2,	// (0x0004f006) main_mup3_pane

0x6904,	// (0x00046838) main_mup3_pane_g1_ParamLimits

0x6904,	// (0x00046838) main_mup3_pane_g1

0x6926,	// (0x0004685a) main_mup3_pane_g2_ParamLimits

0x6926,	// (0x0004685a) main_mup3_pane_g2

0x69a4,	// (0x000468d8) main_mup3_pane_g3_ParamLimits

0x69a4,	// (0x000468d8) main_mup3_pane_g3

0x69e6,	// (0x0004691a) main_mup3_pane_g4_ParamLimits

0x69e6,	// (0x0004691a) main_mup3_pane_g4

0x6a28,	// (0x0004695c) main_mup3_pane_g5_ParamLimits

0x6a28,	// (0x0004695c) main_mup3_pane_g5

0x6a6a,	// (0x0004699e) main_mup3_pane_g6_ParamLimits

0x6a6a,	// (0x0004699e) main_mup3_pane_g6

0x6a7b,	// (0x000469af) main_mup3_pane_g7_ParamLimits

0x6a7b,	// (0x000469af) main_mup3_pane_g7

0x0007,

0xf6cf,	// (0x0004f603) main_mup3_pane_g_ParamLimits

0xf6cf,	// (0x0004f603) main_mup3_pane_g

0x6af2,	// (0x00046a26) main_mup3_pane_t1_ParamLimits

0x6af2,	// (0x00046a26) main_mup3_pane_t1

0x6b62,	// (0x00046a96) main_mup3_pane_t2_ParamLimits

0x6b62,	// (0x00046a96) main_mup3_pane_t2

0x6c32,	// (0x00046b66) main_mup3_pane_t4_ParamLimits

0x6c32,	// (0x00046b66) main_mup3_pane_t4

0x6c88,	// (0x00046bbc) main_mup3_pane_t5_ParamLimits

0x6c88,	// (0x00046bbc) main_mup3_pane_t5

0x6d3c,	// (0x00046c70) main_mup3_pane_t6_ParamLimits

0x6d3c,	// (0x00046c70) main_mup3_pane_t6

0x0005,

0xf6e0,	// (0x0004f614) main_mup3_pane_t_ParamLimits

0xf6e0,	// (0x0004f614) main_mup3_pane_t

0x6df0,	// (0x00046d24) mup3_progress_pane_ParamLimits

0x6df0,	// (0x00046d24) mup3_progress_pane

0x6e72,	// (0x00046da6) popup_mup3_control_window_ParamLimits

0x6e72,	// (0x00046da6) popup_mup3_control_window

0x6e8e,	// (0x00046dc2) popup_mup3_text_window

0x6eac,	// (0x00046de0) mup3_progress_pane_t1

0x6ec3,	// (0x00046df7) mup3_progress_pane_t2

0x6eda,	// (0x00046e0e) mup3_progress_pane_t3

0x0002,

0xf6ed,	// (0x0004f621) mup3_progress_pane_t

0x6ef1,	// (0x00046e25) mup_progress_pane_cp03

0xadb3,	// (0x0004ace7) bg_tb_trans_pane_cp04

0x6f01,	// (0x00046e35) mup3_volume_pane

0x6f09,	// (0x00046e3d) popup_mup3_control_window_g1

0x6f12,	// (0x00046e46) mup3_volume_pane_g1

0x6f1b,	// (0x00046e4f) mup3_volume_pane_g2

0x6f24,	// (0x00046e58) mup3_volume_pane_g3

0x0002,

0xf6f4,	// (0x0004f628) mup3_volume_pane_g

0xadb3,	// (0x0004ace7) bg_tb_trans_pane_cp03

0x6f2d,	// (0x00046e61) popup_mup3_text_window_g1

0x6f35,	// (0x00046e69) popup_mup3_text_window_t1

0xdf6d,	// (0x0004dea1) list_calc_item_pane_g1_ParamLimits

0x60a2,	// (0x00045fd6) mup_volume_pane_cp_g1

0x6888,	// (0x000467bc) main_touch_calib_pane_t3

0x689c,	// (0x000467d0) main_touch_calib_pane_t4

0x68b0,	// (0x000467e4) main_touch_calib_pane_t5

0xadbd,	// (0x0004acf1) aid_cell_size_toolbar2

0xadc5,	// (0x0004acf9) aid_popup3_width_pane

0xadd1,	// (0x0004ad05) aid_zoom_text_msg_primary

0xaeef,	// (0x0004ae23) vorec_t7

0xdf31,	// (0x0004de65) bg_calc_paper_pane_g1_ParamLimits

0xdf3d,	// (0x0004de71) bg_calc_paper_pane_g2_ParamLimits

0xdf49,	// (0x0004de7d) bg_calc_paper_pane_g3_ParamLimits

0xdf55,	// (0x0004de89) bg_calc_paper_pane_g4_ParamLimits

0xdf61,	// (0x0004de95) bg_calc_paper_pane_g5_ParamLimits

0x1dc7,	// (0x00041cfb) bg_calc_paper_pane_g6_ParamLimits

0x1dd6,	// (0x00041d0a) bg_calc_paper_pane_g7_ParamLimits

0x1de5,	// (0x00041d19) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0004f0ae) bg_calc_paper_pane_g_ParamLimits

0x1df8,	// (0x00041d2c) calc_bg_paper_pane_g9_ParamLimits

0x24d6,	// (0x0004240a) image_qvga_pane_ParamLimits

0x24d6,	// (0x0004240a) image_qvga_pane

0xde4e,	// (0x0004dd82) bg_popup_sub_pane_cp04_ParamLimits

0xec03,	// (0x0004eb37) popup_mup_playback_window_g1_ParamLimits

0xec0f,	// (0x0004eb43) popup_mup_playback_window_t1_ParamLimits

0xec24,	// (0x0004eb58) popup_mup_playback_window_t2_ParamLimits

0x02f4,	// (0x00040228) popup_mup_playback_window_t_ParamLimits

0x5dbf,	// (0x00045cf3) main_mup2_pane_g3_ParamLimits

0x5dbf,	// (0x00045cf3) main_mup2_pane_g3

0x27d6,	// (0x0004270a) popup_toolbar_window_cp04

0xf006,	// (0x0004ef3a) popup_call2_audio_second_window_g3_ParamLimits

0xf006,	// (0x0004ef3a) popup_call2_audio_second_window_g3

0x45c0,	// (0x000444f4) popup_call2_audio_first_window_g4_ParamLimits

0x45c0,	// (0x000444f4) popup_call2_audio_first_window_g4

0x4c3f,	// (0x00044b73) popup_call2_audio_in_window_g4_ParamLimits

0x4c3f,	// (0x00044b73) popup_call2_audio_in_window_g4

0x3e82,	// (0x00043db6) aid_area_sk_bg_cut_ParamLimits

0x3e82,	// (0x00043db6) aid_area_sk_bg_cut

0xec39,	// (0x0004eb6d) aid_area_sk_bg_cut_2_ParamLimits

0xec39,	// (0x0004eb6d) aid_area_sk_bg_cut_2

0x6332,	// (0x00046266) aid_placing_details_win

0x633a,	// (0x0004626e) aid_placing_details_win_2

0x65c4,	// (0x000464f8) camera2_autofocus_pane_g1_ParamLimits

0x19e1,	// (0x00041915) popup_fixed_preview_cale_window_ParamLimits

0x19e1,	// (0x00041915) popup_fixed_preview_cale_window

0xea15,	// (0x0004e949) navi_slider_pane_g3

0xea1e,	// (0x0004e952) navi_slider_pane_g4

0xea27,	// (0x0004e95b) navi_slider_pane_g5

0xea15,	// (0x0004e949) navi_slider_pane_g6

0xb0ee,	// (0x0004b022) navi_slider_pane_g7

0xeb3a,	// (0x0004ea6e) mup_scale_pane_g3

0xeb43,	// (0x0004ea77) mup_scale_pane_g4

0xeb4c,	// (0x0004ea80) mup_scale_pane_g5

0x3c00,	// (0x00043b34) mup_scale_pane_g6

0x3c09,	// (0x00043b3d) mup_scale_pane_g7

0xea15,	// (0x0004e949) cams2_slider_pane_g3

0x614f,	// (0x00046083) cams2_slider_pane_g4

0xb1e7,	// (0x0004b11b) cams2_slider_pane_g5

0xea15,	// (0x0004e949) cams2_slider_pane_g6

0xb1ef,	// (0x0004b123) cams2_slider_pane_g7

0x6446,	// (0x0004637a) camera2_autofocus_pane_cp_g1

0x6f43,	// (0x00046e77) bg_popup_preview_window_pane_cp02_ParamLimits

0x6f43,	// (0x00046e77) bg_popup_preview_window_pane_cp02

0x6f4f,	// (0x00046e83) list_fp_cale_pane_ParamLimits

0x6f4f,	// (0x00046e83) list_fp_cale_pane

0x6f5b,	// (0x00046e8f) popup_fixed_preview_cale_window_t1_ParamLimits

0x6f5b,	// (0x00046e8f) popup_fixed_preview_cale_window_t1

0x6f6d,	// (0x00046ea1) popup_fixed_preview_cale_window_t2_ParamLimits

0x6f6d,	// (0x00046ea1) popup_fixed_preview_cale_window_t2

0x6f82,	// (0x00046eb6) popup_fixed_preview_cale_window_t3_ParamLimits

0x6f82,	// (0x00046eb6) popup_fixed_preview_cale_window_t3

0x0002,

0xf6fb,	// (0x0004f62f) popup_fixed_preview_cale_window_t_ParamLimits

0xf6fb,	// (0x0004f62f) popup_fixed_preview_cale_window_t

0x6fa3,	// (0x00046ed7) list_single_fp_cale_pane_ParamLimits

0x6fa3,	// (0x00046ed7) list_single_fp_cale_pane

0x6fb8,	// (0x00046eec) list_single_fp_cale_pane_g1_ParamLimits

0x6fb8,	// (0x00046eec) list_single_fp_cale_pane_g1

0x6fc4,	// (0x00046ef8) list_single_fp_cale_pane_g2_ParamLimits

0x6fc4,	// (0x00046ef8) list_single_fp_cale_pane_g2

0x0002,

0xf702,	// (0x0004f636) list_single_fp_cale_pane_g_ParamLimits

0xf702,	// (0x0004f636) list_single_fp_cale_pane_g

0x6fdd,	// (0x00046f11) list_single_fp_cale_pane_t1_ParamLimits

0x6fdd,	// (0x00046f11) list_single_fp_cale_pane_t1

0x6fef,	// (0x00046f23) list_single_fp_cale_pane_t2_ParamLimits

0x6fef,	// (0x00046f23) list_single_fp_cale_pane_t2

0x0001,

0xf709,	// (0x0004f63d) list_single_fp_cale_pane_t_ParamLimits

0xf709,	// (0x0004f63d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xadb3,	// (0x0004ace7) main_dialer_pane

0x7022,	// (0x00046f56) aid_cell_size_keypad

0x702c,	// (0x00046f60) dialer_ne_pane

0x7034,	// (0x00046f68) grid_dialer_command_1_pane

0x703c,	// (0x00046f70) grid_dialer_command_2_pane

0x7044,	// (0x00046f78) grid_dialer_keypad_pane

0x7056,	// (0x00046f8a) bg_popup_call_pane_cp06_ParamLimits

0x7056,	// (0x00046f8a) bg_popup_call_pane_cp06

0x7062,	// (0x00046f96) dialer_ne_clear_pane_ParamLimits

0x7062,	// (0x00046f96) dialer_ne_clear_pane

0x706e,	// (0x00046fa2) dialer_ne_pane_g1

0x7076,	// (0x00046faa) dialer_ne_pane_t1_ParamLimits

0x7076,	// (0x00046faa) dialer_ne_pane_t1

0x7088,	// (0x00046fbc) dialer_ne_pane_t2_ParamLimits

0x7088,	// (0x00046fbc) dialer_ne_pane_t2

0x70b2,	// (0x00046fe6) dialer_ne_pane_t3_ParamLimits

0x70b2,	// (0x00046fe6) dialer_ne_pane_t3

0x0002,

0xf70e,	// (0x0004f642) dialer_ne_pane_t_ParamLimits

0xf70e,	// (0x0004f642) dialer_ne_pane_t

0x70e2,	// (0x00047016) dialer_ne_pane_t3_copy1_ParamLimits

0x70e2,	// (0x00047016) dialer_ne_pane_t3_copy1

0x7111,	// (0x00047045) cell_dialer_keypad_pane_ParamLimits

0x7111,	// (0x00047045) cell_dialer_keypad_pane

0x7128,	// (0x0004705c) cell_dialer_command_1_pane_ParamLimits

0x7128,	// (0x0004705c) cell_dialer_command_1_pane

0x713e,	// (0x00047072) cell_dialer_command_2_pane_ParamLimits

0x713e,	// (0x00047072) cell_dialer_command_2_pane

0x714d,	// (0x00047081) bg_button_pane_cp02_ParamLimits

0x714d,	// (0x00047081) bg_button_pane_cp02

0x7159,	// (0x0004708d) cell_dialer_keypad_pane_g1_ParamLimits

0x7159,	// (0x0004708d) cell_dialer_keypad_pane_g1

0x714d,	// (0x00047081) bg_button_pane_cp03_ParamLimits

0x714d,	// (0x00047081) bg_button_pane_cp03

0x716d,	// (0x000470a1) cell_dialer_command_1_pane_g1_ParamLimits

0x716d,	// (0x000470a1) cell_dialer_command_1_pane_g1

0x7181,	// (0x000470b5) bg_button_pane_cp04

0x7189,	// (0x000470bd) cell_dialer_command_2_pane_g1

0xea04,	// (0x0004e938) bg_button_pane_cp06

0x7191,	// (0x000470c5) dialer_ne_clear_pane_g1

0x3744,	// (0x00043678) navi_pane_g2

0x3772,	// (0x000436a6) navi_pane_g3

0x0002,

0xf394,	// (0x0004f2c8) navi_pane_g

0x379b,	// (0x000436cf) navi_pane_mv_g2

0x37c2,	// (0x000436f6) navi_pane_mv_g5

0x37ca,	// (0x000436fe) navi_pane_mv_t1

0xdf25,	// (0x0004de59) main_clock2_pane

0x71c5,	// (0x000470f9) main_clock2_list_pane_ParamLimits

0x71c5,	// (0x000470f9) main_clock2_list_pane

0x71fb,	// (0x0004712f) main_clock2_pane_t1_ParamLimits

0x71fb,	// (0x0004712f) main_clock2_pane_t1

0x7237,	// (0x0004716b) main_clock2_pane_t2_ParamLimits

0x7237,	// (0x0004716b) main_clock2_pane_t2

0x0004,

0xf715,	// (0x0004f649) main_clock2_pane_t_ParamLimits

0xf715,	// (0x0004f649) main_clock2_pane_t

0x72c1,	// (0x000471f5) popup_clock_analogue_window_cp03_ParamLimits

0x72c1,	// (0x000471f5) popup_clock_analogue_window_cp03

0x72e6,	// (0x0004721a) popup_clock_digital_window_cp02_ParamLimits

0x72e6,	// (0x0004721a) popup_clock_digital_window_cp02

0x7357,	// (0x0004728b) main_clock2_list_single_pane_ParamLimits

0x7357,	// (0x0004728b) main_clock2_list_single_pane

0xea04,	// (0x0004e938) list_highlight_pane_cp05

0x7369,	// (0x0004729d) main_clock2_list_single_pane_t1

0x27d6,	// (0x0004270a) popup_toolbar_window_cp04_ParamLimits

0x65d2,	// (0x00046506) camera2_autofocus_pane_g2_ParamLimits

0x65d2,	// (0x00046506) camera2_autofocus_pane_g2

0x65de,	// (0x00046512) camera2_autofocus_pane_g3_ParamLimits

0x65de,	// (0x00046512) camera2_autofocus_pane_g3

0x65ea,	// (0x0004651e) camera2_autofocus_pane_g4_ParamLimits

0x65ea,	// (0x0004651e) camera2_autofocus_pane_g4

0x65f6,	// (0x0004652a) camera2_autofocus_pane_g5_ParamLimits

0x65f6,	// (0x0004652a) camera2_autofocus_pane_g5

0x0004,

0xf65e,	// (0x0004f592) camera2_autofocus_pane_g_ParamLimits

0xf65e,	// (0x0004f592) camera2_autofocus_pane_g

0x68e4,	// (0x00046818) camera2_autofocus_pane_cp_g2

0x68ec,	// (0x00046820) camera2_autofocus_pane_cp_g3

0x68f4,	// (0x00046828) camera2_autofocus_pane_cp_g4

0x68fc,	// (0x00046830) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c4,	// (0x0004f5f8) camera2_autofocus_pane_cp_g

0x704e,	// (0x00046f82) popup_dialer_spcha_window

0xadb3,	// (0x0004ace7) bg_popup_sub_pane_cp07

0x740f,	// (0x00047343) list_spcha_pane

0x7417,	// (0x0004734b) list_single_spcha_pane_ParamLimits

0x7417,	// (0x0004734b) list_single_spcha_pane

0xadb3,	// (0x0004ace7) list_highlight_pane_cp06

0x7428,	// (0x0004735c) list_single_spcha_pane_t1

0x49e9,	// (0x0004491d) popup_call2_audio_out_window_g4_ParamLimits

0x49e9,	// (0x0004491d) popup_call2_audio_out_window_g4

0xadb3,	// (0x0004ace7) main_imed2_pane

0x5404,	// (0x00045338) popup_imed_adjust2_window

0x5417,	// (0x0004534b) popup_imed_trans_window_ParamLimits

0x5417,	// (0x0004534b) popup_imed_trans_window

0x61b8,	// (0x000460ec) popup_blid_sat_info2_window_t1

0x61c6,	// (0x000460fa) popup_blid_sat_info2_window_t2

0x000a,

0xf5f3,	// (0x0004f527) popup_blid_sat_info2_window_t

0x7436,	// (0x0004736a) aid_size_cell_colour_35

0x7456,	// (0x0004738a) aid_size_cell_colour_112

0x7476,	// (0x000473aa) aid_size_cell_effect

0x52bd,	// (0x000451f1) bg_tb_trans_pane_cp02

0xe545,	// (0x0004e479) heading_imed_pane

0x7496,	// (0x000473ca) listscroll_imed_pane

0x74a2,	// (0x000473d6) heading_imed_pane_g1

0x74aa,	// (0x000473de) heading_imed_pane_t1

0x74b8,	// (0x000473ec) grid_imed_colour_35_pane_ParamLimits

0x74b8,	// (0x000473ec) grid_imed_colour_35_pane

0x74cf,	// (0x00047403) grid_imed_effect_pane

0x74e5,	// (0x00047419) list_imed_aspect_pane

0x74ed,	// (0x00047421) scroll_pane_cp027_ParamLimits

0x74ed,	// (0x00047421) scroll_pane_cp027

0x74fe,	// (0x00047432) cell_imed_effect_pane_ParamLimits

0x74fe,	// (0x00047432) cell_imed_effect_pane

0x7525,	// (0x00047459) cell_imed_colour_pane_ParamLimits

0x7525,	// (0x00047459) cell_imed_colour_pane

0x7567,	// (0x0004749b) cell_imed_colour_pane_g1_ParamLimits

0x7567,	// (0x0004749b) cell_imed_colour_pane_g1

0x7578,	// (0x000474ac) hgihlgiht_grid_pane_cp016_ParamLimits

0x7578,	// (0x000474ac) hgihlgiht_grid_pane_cp016

0x7589,	// (0x000474bd) cell_imed_effect_pane_g1

0x7591,	// (0x000474c5) grid_highlight_pane_cp017

0x759a,	// (0x000474ce) list_imed_single_pane_ParamLimits

0x759a,	// (0x000474ce) list_imed_single_pane

0xadb3,	// (0x0004ace7) list_highlight_pane_cp07

0x75af,	// (0x000474e3) list_imed_aspect_pane_comp1_t1

0x52bd,	// (0x000451f1) bg_tb_trans_pane_cp05

0x75d1,	// (0x00047505) popup_imed_adjust2_window_g1

0x75f8,	// (0x0004752c) popup_imed_adjust2_window_t1

0x7610,	// (0x00047544) slider_imed_adjust_pane

0x7624,	// (0x00047558) slider_imed_adjust_pane_g1

0x7634,	// (0x00047568) slider_imed_adjust_pane_g2

0x7644,	// (0x00047578) slider_imed_adjust_pane_g3

0x7655,	// (0x00047589) slider_imed_adjust_pane_g4

0x0003,

0xf732,	// (0x0004f666) slider_imed_adjust_pane_g

0x7666,	// (0x0004759a) aid_size_cell_clipart2

0x7672,	// (0x000475a6) grid_imed_clipart_pane

0x767c,	// (0x000475b0) scroll_pane_cp031

0x7684,	// (0x000475b8) cell_imed_clipart_pane_ParamLimits

0x7684,	// (0x000475b8) cell_imed_clipart_pane

0x76a6,	// (0x000475da) cell_imed_clipart_pane_g1

0xadb3,	// (0x0004ace7) grid_highlight_pane_cp014

0x71da,	// (0x0004710e) main_clock2_pane_g1_ParamLimits

0x71da,	// (0x0004710e) main_clock2_pane_g1

0x7302,	// (0x00047236) aid_call2_pane_cp10

0x7314,	// (0x00047248) aid_call_pane_cp10

0xe939,	// (0x0004e86d) popup_clock_analogue_window_cp10_g1

0xe939,	// (0x0004e86d) popup_clock_analogue_window_cp10_g2

0x7326,	// (0x0004725a) popup_clock_analogue_window_cp10_g3

0x7326,	// (0x0004725a) popup_clock_analogue_window_cp10_g4

0xe939,	// (0x0004e86d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf720,	// (0x0004f654) popup_clock_analogue_window_cp10_g

0x7338,	// (0x0004726c) popup_clock_analogue_window_cp10_t1

0x7377,	// (0x000472ab) clock_digital_number_pane_cp10_ParamLimits

0x7377,	// (0x000472ab) clock_digital_number_pane_cp10

0x738f,	// (0x000472c3) clock_digital_number_pane_cp11_ParamLimits

0x738f,	// (0x000472c3) clock_digital_number_pane_cp11

0x73a7,	// (0x000472db) clock_digital_number_pane_cp12_ParamLimits

0x73a7,	// (0x000472db) clock_digital_number_pane_cp12

0x73bf,	// (0x000472f3) clock_digital_number_pane_cp13_ParamLimits

0x73bf,	// (0x000472f3) clock_digital_number_pane_cp13

0x73d7,	// (0x0004730b) clock_digital_separator_pane_cp10_ParamLimits

0x73d7,	// (0x0004730b) clock_digital_separator_pane_cp10

0x73ef,	// (0x00047323) popup_clock_digital_window_cp02_t1_ParamLimits

0x73ef,	// (0x00047323) popup_clock_digital_window_cp02_t1

0xde46,	// (0x0004dd7a) clock_digital_number_pane_cp10_g1

0xde46,	// (0x0004dd7a) clock_digital_number_pane_cp10_g2

0x0001,

0x05fc,	// (0x00040530) clock_digital_number_pane_cp10_g

0xde46,	// (0x0004dd7a) clock_digital_separator_pane_cp10_g1

0xde46,	// (0x0004dd7a) clock_digital_separator_pane_g2_cp10

0xe9d4,	// (0x0004e908) navi_pane_vded_g4

0xe9dd,	// (0x0004e911) navi_pane_vded_g5

0xe9e6,	// (0x0004e91a) navi_pane_vded_t1

0xadb3,	// (0x0004ace7) main_vded_pane

0x76af,	// (0x000475e3) main_vded_pane_g1

0x76b9,	// (0x000475ed) main_vded_pane_g2

0x76c3,	// (0x000475f7) main_vded_pane_g3

0x0002,

0xf73b,	// (0x0004f66f) main_vded_pane_g

0x76cd,	// (0x00047601) main_vded_pane_t1

0x76db,	// (0x0004760f) main_vded_pane_t2

0x0001,

0xf742,	// (0x0004f676) main_vded_pane_t

0x76e9,	// (0x0004761d) vded_slider_pane

0x76f1,	// (0x00047625) vded_video_pane

0x76f9,	// (0x0004762d) vded_video_pane_g1

0x7703,	// (0x00047637) vded_video_pane_g2

0x6446,	// (0x0004637a) vded_video_pane_g3

0x0002,

0xf747,	// (0x0004f67b) vded_video_pane_g

0x770c,	// (0x00047640) vded_slider_pane_g1

0x60a2,	// (0x00045fd6) vded_slider_pane_g2

0x7715,	// (0x00047649) vded_slider_pane_g3

0x771e,	// (0x00047652) vded_slider_pane_g4

0x7727,	// (0x0004765b) vded_slider_pane_g5

0x0004,

0xf74e,	// (0x0004f682) vded_slider_pane_g

0x6e5a,	// (0x00046d8e) mup3_rocker_pane_ParamLimits

0x6e5a,	// (0x00046d8e) mup3_rocker_pane

0x7730,	// (0x00047664) mup3_control_keys_pane_g1

0x7738,	// (0x0004766c) mup3_control_keys_pane_g2

0x7740,	// (0x00047674) mup3_control_keys_pane_g3

0x7748,	// (0x0004767c) mup3_control_keys_pane_g4

0x0003,

0xf759,	// (0x0004f68d) mup3_control_keys_pane_g

0x1a18,	// (0x0004194c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1a18,	// (0x0004194c) popup_toolbar2_fixed_window_cp01

0x6e96,	// (0x00046dca) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6e96,	// (0x00046dca) popup_toolbar2_fixed_window_cp02

0x4328,	// (0x0004425c) popup_call2_audio_second_window_t4_ParamLimits

0x4328,	// (0x0004425c) popup_call2_audio_second_window_t4

0x4856,	// (0x0004478a) popup_call2_audio_first_window_t6_ParamLimits

0x4856,	// (0x0004478a) popup_call2_audio_first_window_t6

0x4aec,	// (0x00044a20) popup_call2_audio_out_window_t6_ParamLimits

0x4aec,	// (0x00044a20) popup_call2_audio_out_window_t6

0xadb3,	// (0x0004ace7) main_vitu_pane

0x7758,	// (0x0004768c) aid_size_cell_itu_ParamLimits

0x7758,	// (0x0004768c) aid_size_cell_itu

0xf0d2,	// (0x0004f006) bg_popup_window_pane_cp08_ParamLimits

0xf0d2,	// (0x0004f006) bg_popup_window_pane_cp08

0x776e,	// (0x000476a2) field_vitu_entry_pane_ParamLimits

0x776e,	// (0x000476a2) field_vitu_entry_pane

0x7785,	// (0x000476b9) grid_vitu_function_pane_ParamLimits

0x7785,	// (0x000476b9) grid_vitu_function_pane

0x77a0,	// (0x000476d4) grid_vitu_itu_pane_ParamLimits

0x77a0,	// (0x000476d4) grid_vitu_itu_pane

0x77be,	// (0x000476f2) cell_vitu_itu_pane_ParamLimits

0x77be,	// (0x000476f2) cell_vitu_itu_pane

0x77e0,	// (0x00047714) cell_vitu_function_pane_ParamLimits

0x77e0,	// (0x00047714) cell_vitu_function_pane

0xf0d2,	// (0x0004f006) bg_popup_sub_pane_cp08_ParamLimits

0xf0d2,	// (0x0004f006) bg_popup_sub_pane_cp08

0x7811,	// (0x00047745) field_vitu_entry_pane_t1_ParamLimits

0x7811,	// (0x00047745) field_vitu_entry_pane_t1

0x782f,	// (0x00047763) field_vitu_entry_pane_t2_ParamLimits

0x782f,	// (0x00047763) field_vitu_entry_pane_t2

0x0001,

0xf767,	// (0x0004f69b) field_vitu_entry_pane_t_ParamLimits

0xf767,	// (0x0004f69b) field_vitu_entry_pane_t

0x784c,	// (0x00047780) bg_button_pane_cp05_ParamLimits

0x784c,	// (0x00047780) bg_button_pane_cp05

0x785a,	// (0x0004778e) cell_vitu_itu_pane_g1

0x7872,	// (0x000477a6) cell_vitu_itu_pane_t1_ParamLimits

0x7872,	// (0x000477a6) cell_vitu_itu_pane_t1

0x7884,	// (0x000477b8) cell_vitu_itu_pane_t2_ParamLimits

0x7884,	// (0x000477b8) cell_vitu_itu_pane_t2

0x0002,

0xf76c,	// (0x0004f6a0) cell_vitu_itu_pane_t_ParamLimits

0xf76c,	// (0x0004f6a0) cell_vitu_itu_pane_t

0x78b9,	// (0x000477ed) bg_button_pane_cp07

0x78c3,	// (0x000477f7) cell_vitu_function_pane_g1

0xae0d,	// (0x0004ad41) main_calc_pane_g1

0x1858,	// (0x0004178c) aid_visual_content_pane

0xadb3,	// (0x0004ace7) main_vradio_pane

0x78cc,	// (0x00047800) main_vradio_pane_g1_ParamLimits

0x78cc,	// (0x00047800) main_vradio_pane_g1

0x78e5,	// (0x00047819) main_vradio_pane_g2_ParamLimits

0x78e5,	// (0x00047819) main_vradio_pane_g2

0x0001,

0xf773,	// (0x0004f6a7) main_vradio_pane_g_ParamLimits

0xf773,	// (0x0004f6a7) main_vradio_pane_g

0x78f2,	// (0x00047826) main_vradio_pane_t1_ParamLimits

0x78f2,	// (0x00047826) main_vradio_pane_t1

0x7907,	// (0x0004783b) main_vradio_pane_t2_ParamLimits

0x7907,	// (0x0004783b) main_vradio_pane_t2

0x791c,	// (0x00047850) main_vradio_pane_t3_ParamLimits

0x791c,	// (0x00047850) main_vradio_pane_t3

0x0002,

0xf778,	// (0x0004f6ac) main_vradio_pane_t_ParamLimits

0xf778,	// (0x0004f6ac) main_vradio_pane_t

0x7930,	// (0x00047864) vradio_rocker_control_pane_ParamLimits

0x7930,	// (0x00047864) vradio_rocker_control_pane

0x7942,	// (0x00047876) vradio_station_info_pane_ParamLimits

0x7942,	// (0x00047876) vradio_station_info_pane

0x7954,	// (0x00047888) vradio_frequency_info_pane_ParamLimits

0x7954,	// (0x00047888) vradio_frequency_info_pane

0x6446,	// (0x0004637a) vradio_station_info_pane_g1

0x7963,	// (0x00047897) vradio_station_info_pane_t1_ParamLimits

0x7963,	// (0x00047897) vradio_station_info_pane_t1

0x7985,	// (0x000478b9) vradio_station_info_pane_t2_ParamLimits

0x7985,	// (0x000478b9) vradio_station_info_pane_t2

0x0001,

0xf77f,	// (0x0004f6b3) vradio_station_info_pane_t_ParamLimits

0xf77f,	// (0x0004f6b3) vradio_station_info_pane_t

0x7997,	// (0x000478cb) vradio_tuning_pane

0x799f,	// (0x000478d3) vradio_rocker_control_pane_g1

0x79a7,	// (0x000478db) vradio_rocker_control_pane_g2

0x79af,	// (0x000478e3) vradio_rocker_control_pane_g3

0x79b7,	// (0x000478eb) vradio_rocker_control_pane_g4

0x79bf,	// (0x000478f3) vradio_rocker_control_pane_g5

0x0004,

0xf784,	// (0x0004f6b8) vradio_rocker_control_pane_g

0x79c7,	// (0x000478fb) vradio_frequency_info_pane_g1

0x79d1,	// (0x00047905) vradio_frequency_info_pane_t1_ParamLimits

0x79d1,	// (0x00047905) vradio_frequency_info_pane_t1

0x79e5,	// (0x00047919) vradio_tuning_pane_g1

0x79f0,	// (0x00047924) vradio_tuning_pane_t1

0xade9,	// (0x0004ad1d) area_side_right_pane_ParamLimits

0xade9,	// (0x0004ad1d) area_side_right_pane

0x5266,	// (0x0004519a) status_small_pane_g1

0x526e,	// (0x000451a2) status_small_pane_g2

0x5277,	// (0x000451ab) status_small_pane_g3

0x5280,	// (0x000451b4) status_small_pane_g4

0x0003,

0xf549,	// (0x0004f47d) status_small_pane_g

0x5289,	// (0x000451bd) status_small_pane_t1

0xadb3,	// (0x0004ace7) main_video3_pane

0x79ff,	// (0x00047933) cams_zoom_vslider_pane

0x7a07,	// (0x0004793b) image3_wide_pane_ParamLimits

0x7a07,	// (0x0004793b) image3_wide_pane

0x7a21,	// (0x00047955) image3_wide_small_pane

0x7a2d,	// (0x00047961) main_video3_pane_g1_ParamLimits

0x7a2d,	// (0x00047961) main_video3_pane_g1

0x7a49,	// (0x0004797d) main_video3_pane_g2_ParamLimits

0x7a49,	// (0x0004797d) main_video3_pane_g2

0x0001,

0xf78f,	// (0x0004f6c3) main_video3_pane_g_ParamLimits

0xf78f,	// (0x0004f6c3) main_video3_pane_g

0xb240,	// (0x0004b174) main_video3_pane_t1_ParamLimits

0xb240,	// (0x0004b174) main_video3_pane_t1

0xb26b,	// (0x0004b19f) main_video3_pane_t2_ParamLimits

0xb26b,	// (0x0004b19f) main_video3_pane_t2

0xb296,	// (0x0004b1ca) main_video3_pane_t3_ParamLimits

0xb296,	// (0x0004b1ca) main_video3_pane_t3

0x0002,

0xf794,	// (0x0004f6c8) main_video3_pane_t_ParamLimits

0xf794,	// (0x0004f6c8) main_video3_pane_t

0xb2c3,	// (0x0004b1f7) cams_zoom_vslider_pane_g1

0xb2cc,	// (0x0004b200) cams_zoom_vslider_pane_g2

0x0001,

0xf79b,	// (0x0004f6cf) cams_zoom_vslider_pane_g

0xb2d4,	// (0x0004b208) small_slider_vertical_pane

0x6446,	// (0x0004637a) small_slider_vertical_pane_g1

0x6446,	// (0x0004637a) small_slider_vertical_pane_g2

0xb2dc,	// (0x0004b210) small_slider_vertical_pane_g3

0x0002,

0xf7a0,	// (0x0004f6d4) small_slider_vertical_pane_g

0xadb3,	// (0x0004ace7) main_hwr_training_pane

0xb2e5,	// (0x0004b219) hwr_training_instruct_pane_ParamLimits

0xb2e5,	// (0x0004b219) hwr_training_instruct_pane

0x7a65,	// (0x00047999) hwr_training_navi_pane_ParamLimits

0x7a65,	// (0x00047999) hwr_training_navi_pane

0x7a84,	// (0x000479b8) hwr_training_write_pane_ParamLimits

0x7a84,	// (0x000479b8) hwr_training_write_pane

0xadb3,	// (0x0004ace7) bg_frame_shadow_pane

0xb31c,	// (0x0004b250) hwr_training_write_pane_g1

0xb324,	// (0x0004b258) hwr_training_write_pane_g2

0xb32c,	// (0x0004b260) hwr_training_write_pane_g3

0xb334,	// (0x0004b268) hwr_training_write_pane_g4

0xb33c,	// (0x0004b270) hwr_training_write_pane_g5

0xb344,	// (0x0004b278) hwr_training_write_pane_g6

0xb34c,	// (0x0004b280) hwr_training_write_pane_g7

0x0006,

0xf7a7,	// (0x0004f6db) hwr_training_write_pane_g

0xb354,	// (0x0004b288) hwr_training_navi_pane_g1_ParamLimits

0xb354,	// (0x0004b288) hwr_training_navi_pane_g1

0xb366,	// (0x0004b29a) hwr_training_navi_pane_g2_ParamLimits

0xb366,	// (0x0004b29a) hwr_training_navi_pane_g2

0xb378,	// (0x0004b2ac) hwr_training_navi_pane_g3_ParamLimits

0xb378,	// (0x0004b2ac) hwr_training_navi_pane_g3

0xb388,	// (0x0004b2bc) hwr_training_navi_pane_g4_ParamLimits

0xb388,	// (0x0004b2bc) hwr_training_navi_pane_g4

0x0004,

0xf7b6,	// (0x0004f6ea) hwr_training_navi_pane_g_ParamLimits

0xf7b6,	// (0x0004f6ea) hwr_training_navi_pane_g

0xb395,	// (0x0004b2c9) hwr_training_navi_pane_t1

0x7acc,	// (0x00047a00) list_single_hwr_training_instruct_pane_ParamLimits

0x7acc,	// (0x00047a00) list_single_hwr_training_instruct_pane

0xb3a3,	// (0x0004b2d7) list_single_hwr_training_instruct_pane_t1

0x6386,	// (0x000462ba) bg_frame_shadow_pane_g1

0xb3b2,	// (0x0004b2e6) bg_frame_shadow_pane_g2

0xb3ba,	// (0x0004b2ee) bg_frame_shadow_pane_g3

0xb3c2,	// (0x0004b2f6) bg_frame_shadow_pane_g4

0xb3ca,	// (0x0004b2fe) bg_frame_shadow_pane_g5

0xb3d2,	// (0x0004b306) bg_frame_shadow_pane_g6

0xb3da,	// (0x0004b30e) bg_frame_shadow_pane_g7

0xdfde,	// (0x0004df12) bg_frame_shadow_pane_g8

0x0007,

0xf7c1,	// (0x0004f6f5) bg_frame_shadow_pane_g

0xadb3,	// (0x0004ace7) main_video_tele_dialer_pane

0x7ae1,	// (0x00047a15) aid_size_cell_video_keypad_ParamLimits

0x7ae1,	// (0x00047a15) aid_size_cell_video_keypad

0x7afb,	// (0x00047a2f) grid_video_dialer_keypad_pane_ParamLimits

0x7afb,	// (0x00047a2f) grid_video_dialer_keypad_pane

0x7b45,	// (0x00047a79) video_down_pane_cp_ParamLimits

0x7b45,	// (0x00047a79) video_down_pane_cp

0x7b55,	// (0x00047a89) cell_video_dialer_keypad_pane_ParamLimits

0x7b55,	// (0x00047a89) cell_video_dialer_keypad_pane

0xb3fe,	// (0x0004b332) bg_button_pane_cp08_ParamLimits

0xb3fe,	// (0x0004b332) bg_button_pane_cp08

0x7b77,	// (0x00047aab) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7b77,	// (0x00047aab) cell_video_dialer_keypad_pane_g1

0x6e44,	// (0x00046d78) mup3_rocker2_pane_ParamLimits

0x6e44,	// (0x00046d78) mup3_rocker2_pane

0x6446,	// (0x0004637a) mup3_rocker2_pane_g1

0x52cb,	// (0x000451ff) main_dialer2_pane

0xadb3,	// (0x0004ace7) main_mp4_pane

0xb412,	// (0x0004b346) main_mp4_pane_g1_ParamLimits

0xb412,	// (0x0004b346) main_mp4_pane_g1

0xb412,	// (0x0004b346) main_mp4_pane_g2_ParamLimits

0xb412,	// (0x0004b346) main_mp4_pane_g2

0x7bb1,	// (0x00047ae5) main_mp4_pane_g3_ParamLimits

0x7bb1,	// (0x00047ae5) main_mp4_pane_g3

0xb420,	// (0x0004b354) main_mp4_pane_g4_ParamLimits

0xb420,	// (0x0004b354) main_mp4_pane_g4

0xb448,	// (0x0004b37c) main_mp4_pane_g5_ParamLimits

0xb448,	// (0x0004b37c) main_mp4_pane_g5

0x0005,

0xf7e1,	// (0x0004f715) main_mp4_pane_g_ParamLimits

0xf7e1,	// (0x0004f715) main_mp4_pane_g

0xb498,	// (0x0004b3cc) main_mp4_pane_t1_ParamLimits

0xb498,	// (0x0004b3cc) main_mp4_pane_t1

0xb4f4,	// (0x0004b428) main_mp4_pane_t2_ParamLimits

0xb4f4,	// (0x0004b428) main_mp4_pane_t2

0xb546,	// (0x0004b47a) main_mp4_pane_t3_ParamLimits

0xb546,	// (0x0004b47a) main_mp4_pane_t3

0xb566,	// (0x0004b49a) main_mp4_pane_t4_ParamLimits

0xb566,	// (0x0004b49a) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x0004f722) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x0004f722) main_mp4_pane_t

0xb5aa,	// (0x0004b4de) mp4_progress_pane_ParamLimits

0xb5aa,	// (0x0004b4de) mp4_progress_pane

0xb5f4,	// (0x0004b528) mp4_rocker_pane_ParamLimits

0xb5f4,	// (0x0004b528) mp4_rocker_pane

0xb61c,	// (0x0004b550) mp4_progress_pane_t1

0xb635,	// (0x0004b569) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x0004f72b) mp4_progress_pane_t

0xb64e,	// (0x0004b582) mup_progress_pane_cp04

0x6446,	// (0x0004637a) mp4_rocker_pane_g1

0x7bed,	// (0x00047b21) aid_cell_size_keypad2_ParamLimits

0x7bed,	// (0x00047b21) aid_cell_size_keypad2

0x7c03,	// (0x00047b37) dialer2_ne_pane_ParamLimits

0x7c03,	// (0x00047b37) dialer2_ne_pane

0x7c1d,	// (0x00047b51) grid_dialer2_keypad_pane_ParamLimits

0x7c1d,	// (0x00047b51) grid_dialer2_keypad_pane

0x615f,	// (0x00046093) bg_popup_call_pane_cp07_ParamLimits

0x615f,	// (0x00046093) bg_popup_call_pane_cp07

0x7c39,	// (0x00047b6d) dialer2_ne_pane_t1_ParamLimits

0x7c39,	// (0x00047b6d) dialer2_ne_pane_t1

0x7c74,	// (0x00047ba8) cell_dialer2_keypad_pane_ParamLimits

0x7c74,	// (0x00047ba8) cell_dialer2_keypad_pane

0xb66c,	// (0x0004b5a0) bg_button_pane_pane_cp04_ParamLimits

0xb66c,	// (0x0004b5a0) bg_button_pane_pane_cp04

0x7c96,	// (0x00047bca) cell_dialer2_keypad_pane_g1_ParamLimits

0x7c96,	// (0x00047bca) cell_dialer2_keypad_pane_g1

0x26ac,	// (0x000425e0) aid_placing_vt_set_content_ParamLimits

0x26ac,	// (0x000425e0) aid_placing_vt_set_content

0x26d2,	// (0x00042606) aid_placing_vt_set_title_ParamLimits

0x26d2,	// (0x00042606) aid_placing_vt_set_title

0xadb3,	// (0x0004ace7) main_image3_pane

0x7d5c,	// (0x00047c90) area_side_right_pane_cp01_ParamLimits

0x7d5c,	// (0x00047c90) area_side_right_pane_cp01

0xb412,	// (0x0004b346) main_image3_pane_g1_ParamLimits

0xb412,	// (0x0004b346) main_image3_pane_g1

0x7d73,	// (0x00047ca7) main_image3_pane_g2_ParamLimits

0x7d73,	// (0x00047ca7) main_image3_pane_g2

0x7d9b,	// (0x00047ccf) main_image3_pane_g3_ParamLimits

0x7d9b,	// (0x00047ccf) main_image3_pane_g3

0x7dc5,	// (0x00047cf9) main_image3_pane_g4_ParamLimits

0x7dc5,	// (0x00047cf9) main_image3_pane_g4

0x0003,

0xf806,	// (0x0004f73a) main_image3_pane_g_ParamLimits

0xf806,	// (0x0004f73a) main_image3_pane_g

0x7def,	// (0x00047d23) main_image3_pane_t1_ParamLimits

0x7def,	// (0x00047d23) main_image3_pane_t1

0x7e47,	// (0x00047d7b) main_image3_pane_t2_ParamLimits

0x7e47,	// (0x00047d7b) main_image3_pane_t2

0x7e99,	// (0x00047dcd) main_image3_pane_t3_ParamLimits

0x7e99,	// (0x00047dcd) main_image3_pane_t3

0x0003,

0xf80f,	// (0x0004f743) main_image3_pane_t_ParamLimits

0xf80f,	// (0x0004f743) main_image3_pane_t

0xf0d2,	// (0x0004f006) grid_sctrl_middle_pane_cp01_ParamLimits

0xf0d2,	// (0x0004f006) grid_sctrl_middle_pane_cp01

0x7f21,	// (0x00047e55) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f21,	// (0x00047e55) cell_sctrl_middle_pane_cp01

0x7f3e,	// (0x00047e72) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7f3e,	// (0x00047e72) cell_sctrl_middle_pane_cp01_g1

0xadb3,	// (0x0004ace7) main_call4_pane

0x7f54,	// (0x00047e88) aid_size_button_call4_ParamLimits

0x7f54,	// (0x00047e88) aid_size_button_call4

0x7f85,	// (0x00047eb9) call4_windows_pane_ParamLimits

0x7f85,	// (0x00047eb9) call4_windows_pane

0x7fa5,	// (0x00047ed9) grid_call4_button_pane_ParamLimits

0x7fa5,	// (0x00047ed9) grid_call4_button_pane

0xb6aa,	// (0x0004b5de) call4_windows_conf_pane

0xb6c1,	// (0x0004b5f5) popup_call4_audio_first_window_ParamLimits

0xb6c1,	// (0x0004b5f5) popup_call4_audio_first_window

0xb70d,	// (0x0004b641) popup_call4_audio_second_window_ParamLimits

0xb70d,	// (0x0004b641) popup_call4_audio_second_window

0xb721,	// (0x0004b655) popup_call4_audio_wait_window_ParamLimits

0xb721,	// (0x0004b655) popup_call4_audio_wait_window

0x7fd2,	// (0x00047f06) cell_call4_button_pane_ParamLimits

0x7fd2,	// (0x00047f06) cell_call4_button_pane

0x7ffb,	// (0x00047f2f) bg_button_pane_cp09_ParamLimits

0x7ffb,	// (0x00047f2f) bg_button_pane_cp09

0x8007,	// (0x00047f3b) cell_call4_button_pane_g1_ParamLimits

0x8007,	// (0x00047f3b) cell_call4_button_pane_g1

0x802d,	// (0x00047f61) cell_call4_button_pane_t1_ParamLimits

0x802d,	// (0x00047f61) cell_call4_button_pane_t1

0xb769,	// (0x0004b69d) popup_call4_audio_conf_window_ParamLimits

0xb769,	// (0x0004b69d) popup_call4_audio_conf_window

0x6eac,	// (0x00046de0) mup3_progress_pane_t1_ParamLimits

0x6ec3,	// (0x00046df7) mup3_progress_pane_t2_ParamLimits

0x6eda,	// (0x00046e0e) mup3_progress_pane_t3_ParamLimits

0xf6ed,	// (0x0004f621) mup3_progress_pane_t_ParamLimits

0x6ef1,	// (0x00046e25) mup_progress_pane_cp03_ParamLimits

0x7750,	// (0x00047684) mup3_control_keys_pane_g4_copy1

0xb5d8,	// (0x0004b50c) mp4_rocker2_pane_ParamLimits

0xb5d8,	// (0x0004b50c) mp4_rocker2_pane

0xb77d,	// (0x0004b6b1) mp4_rocker2_pane_g1

0xb785,	// (0x0004b6b9) mp4_rocker2_pane_g2

0xb78d,	// (0x0004b6c1) mp4_rocker2_pane_g3

0xb795,	// (0x0004b6c9) mp4_rocker2_pane_g4

0xb79d,	// (0x0004b6d1) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x0004f74c) mp4_rocker2_pane_g

0xadb3,	// (0x0004ace7) main_camera4_pane

0xadb3,	// (0x0004ace7) main_video4_pane

0x7b13,	// (0x00047a47) main_video_tele_dialer_pane_t1_ParamLimits

0x7b13,	// (0x00047a47) main_video_tele_dialer_pane_t1

0x7b2c,	// (0x00047a60) main_video_tele_dialer_pane_t2_ParamLimits

0x7b2c,	// (0x00047a60) main_video_tele_dialer_pane_t2

0x0001,

0xf7d2,	// (0x0004f706) main_video_tele_dialer_pane_t_ParamLimits

0xf7d2,	// (0x0004f706) main_video_tele_dialer_pane_t

0x806b,	// (0x00047f9f) cam4_autofocus_pane_ParamLimits

0x806b,	// (0x00047f9f) cam4_autofocus_pane

0x8081,	// (0x00047fb5) cam4_image_uncrop_pane_ParamLimits

0x8081,	// (0x00047fb5) cam4_image_uncrop_pane

0x809b,	// (0x00047fcf) cam4_indicators_pane_ParamLimits

0x809b,	// (0x00047fcf) cam4_indicators_pane

0x80c6,	// (0x00047ffa) main_camera4_pane_g1_ParamLimits

0x80c6,	// (0x00047ffa) main_camera4_pane_g1

0x80d9,	// (0x0004800d) main_camera4_pane_g2_ParamLimits

0x80d9,	// (0x0004800d) main_camera4_pane_g2

0x80ec,	// (0x00048020) main_camera4_pane_g3_ParamLimits

0x80ec,	// (0x00048020) main_camera4_pane_g3

0x80ff,	// (0x00048033) main_camera4_pane_g4_ParamLimits

0x80ff,	// (0x00048033) main_camera4_pane_g4

0x8112,	// (0x00048046) main_camera4_pane_g5_ParamLimits

0x8112,	// (0x00048046) main_camera4_pane_g5

0x0005,

0xf823,	// (0x0004f757) main_camera4_pane_g_ParamLimits

0xf823,	// (0x0004f757) main_camera4_pane_g

0x8136,	// (0x0004806a) main_camera4_pane_t1_ParamLimits

0x8136,	// (0x0004806a) main_camera4_pane_t1

0x671d,	// (0x00046651) bg_tb_trans_pane_cp06

0xb7db,	// (0x0004b70f) cam4_indicators_pane_g1

0xb7ec,	// (0x0004b720) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x0004f772) cam4_indicators_pane_g

0xb80a,	// (0x0004b73e) cam4_indicators_pane_t1

0x819a,	// (0x000480ce) main_video4_pane_g1_ParamLimits

0x819a,	// (0x000480ce) main_video4_pane_g1

0x81ad,	// (0x000480e1) main_video4_pane_g2_ParamLimits

0x81ad,	// (0x000480e1) main_video4_pane_g2

0x81c1,	// (0x000480f5) main_video4_pane_g3_ParamLimits

0x81c1,	// (0x000480f5) main_video4_pane_g3

0x81d5,	// (0x00048109) main_video4_pane_g4_ParamLimits

0x81d5,	// (0x00048109) main_video4_pane_g4

0x0004,

0xf845,	// (0x0004f779) main_video4_pane_g_ParamLimits

0xf845,	// (0x0004f779) main_video4_pane_g

0x81fd,	// (0x00048131) vid4_indicators_pane_ParamLimits

0x81fd,	// (0x00048131) vid4_indicators_pane

0x822d,	// (0x00048161) video4_image_uncrop_cif_pane_ParamLimits

0x822d,	// (0x00048161) video4_image_uncrop_cif_pane

0x8247,	// (0x0004817b) video4_image_uncrop_nhd_pane_ParamLimits

0x8247,	// (0x0004817b) video4_image_uncrop_nhd_pane

0x8081,	// (0x00047fb5) video4_image_uncrop_vga_pane_ParamLimits

0x8081,	// (0x00047fb5) video4_image_uncrop_vga_pane

0xb82c,	// (0x0004b760) bg_tb_trans_pane_cp07

0x825b,	// (0x0004818f) vid4_indicators_pane_g1

0x8268,	// (0x0004819c) vid4_indicators_pane_g2

0x8275,	// (0x000481a9) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x0004f784) vid4_indicators_pane_g

0x829a,	// (0x000481ce) vid4_indicators_pane_t1

0x82ac,	// (0x000481e0) cam4_autofocus_pane_g1

0x82b4,	// (0x000481e8) cam4_autofocus_pane_g2

0x82bc,	// (0x000481f0) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x0004f78f) cam4_autofocus_pane_g

0x82c4,	// (0x000481f8) cam4_autofocus_pane_g3_copy1

0xb3e2,	// (0x0004b316) video_down_pane_cp_t1

0xb3f0,	// (0x0004b324) video_down_pane_cp_t2

0x0001,

0xf7d7,	// (0x0004f70b) video_down_pane_cp_t

0xf0d2,	// (0x0004f006) popup_vitu2_window_ParamLimits

0xf0d2,	// (0x0004f006) popup_vitu2_window

0x82cc,	// (0x00048200) aid_size_cell2_itu2_ParamLimits

0x82cc,	// (0x00048200) aid_size_cell2_itu2

0x82f2,	// (0x00048226) aid_size_cell_itu2_ParamLimits

0x82f2,	// (0x00048226) aid_size_cell_itu2

0x834e,	// (0x00048282) bg_popup_window_pane_cp09_ParamLimits

0x834e,	// (0x00048282) bg_popup_window_pane_cp09

0x835c,	// (0x00048290) field_vitu2_entry_pane_ParamLimits

0x835c,	// (0x00048290) field_vitu2_entry_pane

0x8382,	// (0x000482b6) grid_vitu2_function_pane_ParamLimits

0x8382,	// (0x000482b6) grid_vitu2_function_pane

0x83d3,	// (0x00048307) grid_vitu2_itu_pane_ParamLimits

0x83d3,	// (0x00048307) grid_vitu2_itu_pane

0x8466,	// (0x0004839a) cell_vitu2_itu_pane_ParamLimits

0x8466,	// (0x0004839a) cell_vitu2_itu_pane

0x848a,	// (0x000483be) cell_vitu2_function_pane_ParamLimits

0x848a,	// (0x000483be) cell_vitu2_function_pane

0xb844,	// (0x0004b778) bg_popup_call_pane_cp08_ParamLimits

0xb844,	// (0x0004b778) bg_popup_call_pane_cp08

0xb85d,	// (0x0004b791) field_vitu2_entry_pane_g1

0xb869,	// (0x0004b79d) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x0004f796) field_vitu2_entry_pane_g

0x0f10,	// (0x00040e44) field_vitu2_entry_pane_t1_ParamLimits

0x0f10,	// (0x00040e44) field_vitu2_entry_pane_t1

0xb883,	// (0x0004b7b7) field_vitu2_entry_pane_t2_ParamLimits

0xb883,	// (0x0004b7b7) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x0004f79d) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x0004f79d) field_vitu2_entry_pane_t

0x84c9,	// (0x000483fd) bg_button_pane_cp010_ParamLimits

0x84c9,	// (0x000483fd) bg_button_pane_cp010

0x84d7,	// (0x0004840b) cell_vitu2_itu_pane_g1

0x84f5,	// (0x00048429) cell_vitu2_itu_pane_t1_ParamLimits

0x84f5,	// (0x00048429) cell_vitu2_itu_pane_t1

0x0f3f,	// (0x00040e73) cell_vitu2_itu_pane_t2_ParamLimits

0x0f3f,	// (0x00040e73) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x0004f7a7) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x0004f7a7) cell_vitu2_itu_pane_t

0xf0d2,	// (0x0004f006) bg_button_pane_cp011

0x855b,	// (0x0004848f) cell_vitu2_function_pane_g1

0xadb3,	// (0x0004ace7) main_myfav_hc_pane

0x7ee9,	// (0x00047e1d) popup_image3_note_pane_ParamLimits

0x7ee9,	// (0x00047e1d) popup_image3_note_pane

0x7f05,	// (0x00047e39) popup_image3_tool_bar_pane_ParamLimits

0x7f05,	// (0x00047e39) popup_image3_tool_bar_pane

0x0fc3,	// (0x00040ef7) cell_vitu2_itu_pane_t3_ParamLimits

0x0fc3,	// (0x00040ef7) cell_vitu2_itu_pane_t3

0xadb3,	// (0x0004ace7) bg_popup_trans_pane

0xb8a8,	// (0x0004b7dc) grid_image3_tool_bar_pane

0xb8b2,	// (0x0004b7e6) bg_popup_trans_pane_g1

0xe319,	// (0x0004e24d) bg_popup_trans_pane_g2

0xb8ba,	// (0x0004b7ee) bg_popup_trans_pane_g3

0xb8c2,	// (0x0004b7f6) bg_popup_trans_pane_g4

0xb8ca,	// (0x0004b7fe) bg_popup_trans_pane_g5

0xb8d2,	// (0x0004b806) bg_popup_trans_pane_g6

0xb8da,	// (0x0004b80e) bg_popup_trans_pane_g7

0xb8e2,	// (0x0004b816) bg_popup_trans_pane_g8

0xe2f9,	// (0x0004e22d) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x0004f7ae) bg_popup_trans_pane_g

0xb8ea,	// (0x0004b81e) cell_image3_tool_bar_pane_ParamLimits

0xb8ea,	// (0x0004b81e) cell_image3_tool_bar_pane

0x6446,	// (0x0004637a) cell_image3_tool_bar_pane_g1

0xadb3,	// (0x0004ace7) bg_popup_trans_pane_cp1

0xb8fe,	// (0x0004b832) popup_image3_note_pane_t1

0xb90c,	// (0x0004b840) popup_image3_note_pane_t2

0xb91a,	// (0x0004b84e) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x0004f7c1) popup_image3_note_pane_t

0xb928,	// (0x0004b85c) popup_image3_note_pane_t3_copy1

0x856f,	// (0x000484a3) bg_myfav_hc_instruction_pane_ParamLimits

0x856f,	// (0x000484a3) bg_myfav_hc_instruction_pane

0x8583,	// (0x000484b7) cell_myfav_contact_pane_ParamLimits

0x8583,	// (0x000484b7) cell_myfav_contact_pane

0x85a1,	// (0x000484d5) cell_myfav_contact_pane_cp1_ParamLimits

0x85a1,	// (0x000484d5) cell_myfav_contact_pane_cp1

0x85b9,	// (0x000484ed) cell_myfav_contact_pane_cp2_ParamLimits

0x85b9,	// (0x000484ed) cell_myfav_contact_pane_cp2

0x85d1,	// (0x00048505) cell_myfav_contact_pane_cp3_ParamLimits

0x85d1,	// (0x00048505) cell_myfav_contact_pane_cp3

0x85e8,	// (0x0004851c) cell_myfav_contact_pane_cp4_ParamLimits

0x85e8,	// (0x0004851c) cell_myfav_contact_pane_cp4

0x8600,	// (0x00048534) cell_myfav_contact_pane_cp5_ParamLimits

0x8600,	// (0x00048534) cell_myfav_contact_pane_cp5

0x8614,	// (0x00048548) cell_myfav_contact_pane_cp6_ParamLimits

0x8614,	// (0x00048548) cell_myfav_contact_pane_cp6

0x862a,	// (0x0004855e) cell_myfav_contact_pane_cp7_ParamLimits

0x862a,	// (0x0004855e) cell_myfav_contact_pane_cp7

0xb936,	// (0x0004b86a) listscroll_gen_pane_cp05

0x8644,	// (0x00048578) main_myfav_hc_pane_g1_ParamLimits

0x8644,	// (0x00048578) main_myfav_hc_pane_g1

0x865e,	// (0x00048592) main_myfav_hc_pane_g2_ParamLimits

0x865e,	// (0x00048592) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x0004f7c8) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x0004f7c8) main_myfav_hc_pane_g

0x8690,	// (0x000485c4) main_myfav_hc_pane_t1_ParamLimits

0x8690,	// (0x000485c4) main_myfav_hc_pane_t1

0xb93f,	// (0x0004b873) main_myfav_hc_pane_t2_ParamLimits

0xb93f,	// (0x0004b873) main_myfav_hc_pane_t2

0xb951,	// (0x0004b885) main_myfav_hc_pane_t3_ParamLimits

0xb951,	// (0x0004b885) main_myfav_hc_pane_t3

0x86a7,	// (0x000485db) main_myfav_hc_pane_t4_ParamLimits

0x86a7,	// (0x000485db) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x0004f7cf) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x0004f7cf) main_myfav_hc_pane_t

0x6446,	// (0x0004637a) bg_myfav_hc_instruction_pane_g1

0xb963,	// (0x0004b897) cell_myfav_contact_pane_g1_ParamLimits

0xb963,	// (0x0004b897) cell_myfav_contact_pane_g1

0xb963,	// (0x0004b897) cell_myfav_contact_pane_g2_ParamLimits

0xb963,	// (0x0004b897) cell_myfav_contact_pane_g2

0xb96f,	// (0x0004b8a3) cell_myfav_contact_pane_g3_ParamLimits

0xb96f,	// (0x0004b8a3) cell_myfav_contact_pane_g3

0x6a7b,	// (0x000469af) cell_myfav_contact_pane_g4_ParamLimits

0x6a7b,	// (0x000469af) cell_myfav_contact_pane_g4

0xb97c,	// (0x0004b8b0) cell_myfav_contact_pane_g5_ParamLimits

0xb97c,	// (0x0004b8b0) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x0004f7da) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x0004f7da) cell_myfav_contact_pane_g

0x8678,	// (0x000485ac) main_myfav_hc_pane_g3_ParamLimits

0x8678,	// (0x000485ac) main_myfav_hc_pane_g3

0x197a,	// (0x000418ae) popup_adpt_find_window

0x86cf,	// (0x00048603) afind_page_pane_ParamLimits

0x86cf,	// (0x00048603) afind_page_pane

0x86e4,	// (0x00048618) aid_size_cell_afind_ParamLimits

0x86e4,	// (0x00048618) aid_size_cell_afind

0x8702,	// (0x00048636) bg_popup_sub_pane_cp09_ParamLimits

0x8702,	// (0x00048636) bg_popup_sub_pane_cp09

0x870f,	// (0x00048643) find_pane_cp01_ParamLimits

0x870f,	// (0x00048643) find_pane_cp01

0xb988,	// (0x0004b8bc) grid_afind_control_pane_ParamLimits

0xb988,	// (0x0004b8bc) grid_afind_control_pane

0x871c,	// (0x00048650) grid_afind_pane_ParamLimits

0x871c,	// (0x00048650) grid_afind_pane

0x873e,	// (0x00048672) cell_afind_pane_ParamLimits

0x873e,	// (0x00048672) cell_afind_pane

0x6446,	// (0x0004637a) afind_page_pane_g1

0x879f,	// (0x000486d3) afind_page_pane_g2

0x87a8,	// (0x000486dc) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x0004f7e5) afind_page_pane_g

0x87b1,	// (0x000486e5) afind_page_pane_t1

0xb99c,	// (0x0004b8d0) cell_afind_grid_control_pane_ParamLimits

0xb99c,	// (0x0004b8d0) cell_afind_grid_control_pane

0xb66c,	// (0x0004b5a0) bg_button_pane_cp69_ParamLimits

0xb66c,	// (0x0004b5a0) bg_button_pane_cp69

0x87d1,	// (0x00048705) cell_afind_pane_g1_ParamLimits

0x87d1,	// (0x00048705) cell_afind_pane_g1

0x87de,	// (0x00048712) cell_afind_pane_t1_ParamLimits

0x87de,	// (0x00048712) cell_afind_pane_t1

0xe114,	// (0x0004e048) bg_button_pane_cp72

0xb9ab,	// (0x0004b8df) cell_afind_grid_control_pane_g1

0x405f,	// (0x00043f93) aid_image_placing_area_ParamLimits

0x405f,	// (0x00043f93) aid_image_placing_area

0x77f9,	// (0x0004772d) field_vitu_entry_pane_g1_ParamLimits

0x77f9,	// (0x0004772d) field_vitu_entry_pane_g1

0x7805,	// (0x00047739) field_vitu_entry_pane_g2_ParamLimits

0x7805,	// (0x00047739) field_vitu_entry_pane_g2

0x0001,

0xf762,	// (0x0004f696) field_vitu_entry_pane_g_ParamLimits

0xf762,	// (0x0004f696) field_vitu_entry_pane_g

0x785a,	// (0x0004778e) cell_vitu_itu_pane_g1_ParamLimits

0x789c,	// (0x000477d0) cell_vitu_itu_pane_t3_ParamLimits

0x789c,	// (0x000477d0) cell_vitu_itu_pane_t3

0xb61c,	// (0x0004b550) mp4_progress_pane_t1_ParamLimits

0xb635,	// (0x0004b569) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x0004f72b) mp4_progress_pane_t_ParamLimits

0xb64e,	// (0x0004b582) mup_progress_pane_cp04_ParamLimits

0x86bb,	// (0x000485ef) main_myfav_hc_pane_t5_ParamLimits

0x86bb,	// (0x000485ef) main_myfav_hc_pane_t5

0xadd9,	// (0x0004ad0d) aid_zoom_text_primary

0x197a,	// (0x000418ae) popup_adpt_find_window_ParamLimits

0xf0d2,	// (0x0004f006) main_cam_set_pane

0x80b2,	// (0x00047fe6) cam4_zoom_pane_ParamLimits

0x80b2,	// (0x00047fe6) cam4_zoom_pane

0x87f0,	// (0x00048724) main_cam_set_pane_g1_ParamLimits

0x87f0,	// (0x00048724) main_cam_set_pane_g1

0x87fe,	// (0x00048732) main_cam_set_pane_g2_ParamLimits

0x87fe,	// (0x00048732) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x0004f7ec) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x0004f7ec) main_cam_set_pane_g

0x881f,	// (0x00048753) main_cam_set_pane_t1_ParamLimits

0x881f,	// (0x00048753) main_cam_set_pane_t1

0x883a,	// (0x0004876e) main_cset_listscroll_pane_ParamLimits

0x883a,	// (0x0004876e) main_cset_listscroll_pane

0x885a,	// (0x0004878e) main_cset_slider_pane_ParamLimits

0x885a,	// (0x0004878e) main_cset_slider_pane

0xb9bc,	// (0x0004b8f0) main_cset_list_pane_ParamLimits

0xb9bc,	// (0x0004b8f0) main_cset_list_pane

0xb9cc,	// (0x0004b900) scroll_pane_cp028

0x8880,	// (0x000487b4) aid_area_touch_slider

0x889c,	// (0x000487d0) cset_slider_pane

0x88c6,	// (0x000487fa) main_cset_slider_pane_g1

0x88db,	// (0x0004880f) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x0004f7f1) main_cset_slider_pane_g

0xba05,	// (0x0004b939) main_cset_slider_pane_t1

0x8997,	// (0x000488cb) main_cset_slider_pane_t2

0x89b1,	// (0x000488e5) main_cset_slider_pane_t3

0x89cb,	// (0x000488ff) main_cset_slider_pane_t4

0x89e5,	// (0x00048919) main_cset_slider_pane_t5

0x89ff,	// (0x00048933) main_cset_slider_pane_t6

0x8a14,	// (0x00048948) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x0004f816) main_cset_slider_pane_t

0x8b18,	// (0x00048a4c) cset_list_set_pane_ParamLimits

0x8b18,	// (0x00048a4c) cset_list_set_pane

0x8b2a,	// (0x00048a5e) aid_position_infowindow_above

0x8b32,	// (0x00048a66) aid_position_infowindow_below

0xbaa5,	// (0x0004b9d9) cset_list_set_pane_g1_ParamLimits

0xbaa5,	// (0x0004b9d9) cset_list_set_pane_g1

0xbab1,	// (0x0004b9e5) cset_list_set_pane_g3_ParamLimits

0xbab1,	// (0x0004b9e5) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x0004f835) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x0004f835) cset_list_set_pane_g

0x101b,	// (0x00040f4f) cset_list_set_pane_t1_ParamLimits

0x101b,	// (0x00040f4f) cset_list_set_pane_t1

0xf0d2,	// (0x0004f006) list_highlight_pane_cp021_ParamLimits

0xf0d2,	// (0x0004f006) list_highlight_pane_cp021

0xeb3a,	// (0x0004ea6e) cset_slider_pane_g1

0xeb4c,	// (0x0004ea80) cset_slider_pane_g2

0xeb43,	// (0x0004ea77) cset_slider_pane_g3

0x0002,

0x07cc,	// (0x00040700) cset_slider_pane_g

0xd6fe,	// (0x0004d632) aid_area_touch_cam4_zoom

0xd706,	// (0x0004d63a) cam4_zoom_cont_pane

0xd70e,	// (0x0004d642) cam4_zoom_pane_g1

0xd716,	// (0x0004d64a) cam4_zoom_pane_g2

0x8b3a,	// (0x00048a6e) cam4_zoom_pane_g3

0x0002,

0xf906,	// (0x0004f83a) cam4_zoom_pane_g

0xbac0,	// (0x0004b9f4) cam4_zoom_cont_pane_g1

0xbac9,	// (0x0004b9fd) cam4_zoom_cont_pane_g2

0xbad2,	// (0x0004ba06) cam4_zoom_cont_pane_g3

0x0002,

0xf90d,	// (0x0004f841) cam4_zoom_cont_pane_g

0x7f72,	// (0x00047ea6) call4_image_pane_ParamLimits

0x7f72,	// (0x00047ea6) call4_image_pane

0xb6aa,	// (0x0004b5de) call4_windows_conf_pane_ParamLimits

0xb6eb,	// (0x0004b61f) popup_call4_audio_in_window_ParamLimits

0xb6eb,	// (0x0004b61f) popup_call4_audio_in_window

0xadb3,	// (0x0004ace7) bg_popup_call2_act_pane_cp02

0xb761,	// (0x0004b695) call4_list_conf_pane

0x6446,	// (0x0004637a) call4_image_pane_g1

0x6446,	// (0x0004637a) call4_image_pane_g2

0x0001,

0xf62d,	// (0x0004f561) call4_image_pane_g

0xbadb,	// (0x0004ba0f) list_single_graphic_popup_conf4_pane_ParamLimits

0xbadb,	// (0x0004ba0f) list_single_graphic_popup_conf4_pane

0xadb3,	// (0x0004ace7) list_highlight_pane_cp022

0xbaee,	// (0x0004ba22) list_single_graphic_popup_conf4_pane_g1

0xe819,	// (0x0004e74d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf914,	// (0x0004f848) list_single_graphic_popup_conf4_pane_g

0xbaf6,	// (0x0004ba2a) list_single_graphic_popup_conf4_pane_t1

0x27f6,	// (0x0004272a) popup_vtel_slider_window_ParamLimits

0x27f6,	// (0x0004272a) popup_vtel_slider_window

0xb65a,	// (0x0004b58e) dialer2_ne_pane_t2_ParamLimits

0xb65a,	// (0x0004b58e) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x0004f730) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x0004f730) dialer2_ne_pane_t

0x615f,	// (0x00046093) bg_popup_sub_pane_cp010_ParamLimits

0x615f,	// (0x00046093) bg_popup_sub_pane_cp010

0x8b42,	// (0x00048a76) popup_vtel_slider_window_g1_ParamLimits

0x8b42,	// (0x00048a76) popup_vtel_slider_window_g1

0x8b55,	// (0x00048a89) popup_vtel_slider_window_g2_ParamLimits

0x8b55,	// (0x00048a89) popup_vtel_slider_window_g2

0x0003,

0xf919,	// (0x0004f84d) popup_vtel_slider_window_g_ParamLimits

0xf919,	// (0x0004f84d) popup_vtel_slider_window_g

0x8bab,	// (0x00048adf) vtel_slider_pane_ParamLimits

0x8bab,	// (0x00048adf) vtel_slider_pane

0x8bcd,	// (0x00048b01) vtel_slider_pane_g1_ParamLimits

0x8bcd,	// (0x00048b01) vtel_slider_pane_g1

0x8be1,	// (0x00048b15) vtel_slider_pane_g2_ParamLimits

0x8be1,	// (0x00048b15) vtel_slider_pane_g2

0x8bf9,	// (0x00048b2d) vtel_slider_pane_g3_ParamLimits

0x8bf9,	// (0x00048b2d) vtel_slider_pane_g3

0x8bcd,	// (0x00048b01) vtel_slider_pane_g4_ParamLimits

0x8bcd,	// (0x00048b01) vtel_slider_pane_g4

0x8c0f,	// (0x00048b43) vtel_slider_pane_g5_ParamLimits

0x8c0f,	// (0x00048b43) vtel_slider_pane_g5

0x0004,

0xf922,	// (0x0004f856) vtel_slider_pane_g_ParamLimits

0xf922,	// (0x0004f856) vtel_slider_pane_g

0xadb3,	// (0x0004ace7) main_gallery2_pane

0x831e,	// (0x00048252) aid_size_row_itut2_dropdow_list_ParamLimits

0x831e,	// (0x00048252) aid_size_row_itut2_dropdow_list

0x83aa,	// (0x000482de) grid_vitu2_function_top_pane_ParamLimits

0x83aa,	// (0x000482de) grid_vitu2_function_top_pane

0x840f,	// (0x00048343) popup_vitu2_dropdown_list_window_ParamLimits

0x840f,	// (0x00048343) popup_vitu2_dropdown_list_window

0x8438,	// (0x0004836c) popup_vitu2_match_list_window

0x8c25,	// (0x00048b59) cell_vitu2_function_top_pane_ParamLimits

0x8c25,	// (0x00048b59) cell_vitu2_function_top_pane

0x8c43,	// (0x00048b77) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8c43,	// (0x00048b77) cell_vitu2_function_top_pane_cp01

0x8c61,	// (0x00048b95) cell_vitu2_function_top_wide_pane_ParamLimits

0x8c61,	// (0x00048b95) cell_vitu2_function_top_wide_pane

0xf0d2,	// (0x0004f006) bg_button_pane_cp012

0x8c7f,	// (0x00048bb3) cell_vitu2_function_top_pane_g1

0xd71e,	// (0x0004d652) bg_button_pane_cp013_ParamLimits

0xd71e,	// (0x0004d652) bg_button_pane_cp013

0x8c93,	// (0x00048bc7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8c93,	// (0x00048bc7) cell_vitu2_function_top_wide_pane_g1

0xf0d2,	// (0x0004f006) bg_popup_sub_pane_cp20

0x8cab,	// (0x00048bdf) list_vitu2_match_list_pane

0xb8b2,	// (0x0004b7e6) bg_popup_sub_pane_cp20_g1

0xb8ba,	// (0x0004b7ee) bg_popup_sub_pane_cp20_g2

0xe319,	// (0x0004e24d) bg_popup_sub_pane_cp20_g3

0xb8c2,	// (0x0004b7f6) bg_popup_sub_pane_cp20_g4

0xe2f9,	// (0x0004e22d) bg_popup_sub_pane_cp20_g5

0xbb1a,	// (0x0004ba4e) bg_popup_sub_pane_cp20_g6

0xb8d2,	// (0x0004b806) bg_popup_sub_pane_cp20_g7

0xb8da,	// (0x0004b80e) bg_popup_sub_pane_cp20_g8

0xb8e2,	// (0x0004b816) bg_popup_sub_pane_cp20_g9

0x0008,

0xf92d,	// (0x0004f861) bg_popup_sub_pane_cp20_g

0xd73a,	// (0x0004d66e) list_vitu2_match_list_item_pane_ParamLimits

0xd73a,	// (0x0004d66e) list_vitu2_match_list_item_pane

0xd74c,	// (0x0004d680) list_vitu2_match_list_item_pane_t1

0xadb3,	// (0x0004ace7) bg_popup_sub_pane_cp21

0xe733,	// (0x0004e667) grid_vitu2_dropdown_list_pane

0x8cc9,	// (0x00048bfd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8cc9,	// (0x00048bfd) cell_vitu2_dropdown_list_char_pane

0x8cea,	// (0x00048c1e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8cea,	// (0x00048c1e) cell_vitu2_dropdown_list_ctrl_pane

0xbb3a,	// (0x0004ba6e) cell_vitu2_dropdown_list_char_pane_g1

0xbb43,	// (0x0004ba77) cell_vitu2_dropdown_list_char_pane_g2

0xbb4c,	// (0x0004ba80) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf94a,	// (0x0004f87e) cell_vitu2_dropdown_list_char_pane_g

0x8d16,	// (0x00048c4a) cell_vitu2_dropdown_list_char_pane_t1

0x8d24,	// (0x00048c58) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8d24,	// (0x00048c58) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8d31,	// (0x00048c65) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8d31,	// (0x00048c65) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8d3e,	// (0x00048c72) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8d3e,	// (0x00048c72) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8d4b,	// (0x00048c7f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8d4b,	// (0x00048c7f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x671d,	// (0x00046651) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x671d,	// (0x00046651) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf951,	// (0x0004f885) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf951,	// (0x0004f885) cell_vitu2_dropdown_list_ctrl_pane_g

0x8d67,	// (0x00048c9b) aid_size_cell_gallery2_ParamLimits

0x8d67,	// (0x00048c9b) aid_size_cell_gallery2

0x8d7d,	// (0x00048cb1) grid_gallery2_pane_ParamLimits

0x8d7d,	// (0x00048cb1) grid_gallery2_pane

0x8d91,	// (0x00048cc5) scroll_pane_cp029_ParamLimits

0x8d91,	// (0x00048cc5) scroll_pane_cp029

0x8d9d,	// (0x00048cd1) cell_gallery2_pane_ParamLimits

0x8d9d,	// (0x00048cd1) cell_gallery2_pane

0xbb55,	// (0x0004ba89) cell_gallery2_pane_g2

0x8dd3,	// (0x00048d07) cell_gallery2_pane_g3

0xbb5f,	// (0x0004ba93) cell_gallery2_pane_g4

0xbb67,	// (0x0004ba9b) cell_gallery2_pane_g5

0xea04,	// (0x0004e938) grid_highlight_pane_cp10

0x8438,	// (0x0004836c) popup_vitu2_match_list_window_ParamLimits

0x844f,	// (0x00048383) popup_vitu2_query_window_ParamLimits

0x844f,	// (0x00048383) popup_vitu2_query_window

0xadb3,	// (0x0004ace7) bg_vitu2_candi_button_pane

0xbb3a,	// (0x0004ba6e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xbb43,	// (0x0004ba77) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xbb4c,	// (0x0004ba80) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1065,	// (0x00040f99) bg_button_pane_cp015

0x8ddb,	// (0x00048d0f) bg_button_pane_cp016

0x8dee,	// (0x00048d22) bg_button_pane_cp017

0x52bd,	// (0x000451f1) bg_popup_sub_pane_cp22

0xbb6f,	// (0x0004baa3) popup_vitu2_query_window_g1

0x1098,	// (0x00040fcc) popup_vitu2_query_window_g2

0x0002,

0xf95c,	// (0x0004f890) popup_vitu2_query_window_g

0x10b7,	// (0x00040feb) popup_vitu2_query_window_t1_ParamLimits

0x10b7,	// (0x00040feb) popup_vitu2_query_window_t1

0x10ec,	// (0x00041020) popup_vitu2_query_window_t2_ParamLimits

0x10ec,	// (0x00041020) popup_vitu2_query_window_t2

0x10fe,	// (0x00041032) popup_vitu2_query_window_t3_ParamLimits

0x10fe,	// (0x00041032) popup_vitu2_query_window_t3

0x8e12,	// (0x00048d46) popup_vitu2_query_window_t4_ParamLimits

0x8e12,	// (0x00048d46) popup_vitu2_query_window_t4

0x8e33,	// (0x00048d67) popup_vitu2_query_window_t5_ParamLimits

0x8e33,	// (0x00048d67) popup_vitu2_query_window_t5

0x0006,

0xf963,	// (0x0004f897) popup_vitu2_query_window_t_ParamLimits

0xf963,	// (0x0004f897) popup_vitu2_query_window_t

0xb9b4,	// (0x0004b8e8) main_cset_text_pane

0x8880,	// (0x000487b4) aid_area_touch_slider_ParamLimits

0x889c,	// (0x000487d0) cset_slider_pane_ParamLimits

0x88c6,	// (0x000487fa) main_cset_slider_pane_g1_ParamLimits

0x88db,	// (0x0004880f) main_cset_slider_pane_g2_ParamLimits

0xb9d5,	// (0x0004b909) main_cset_slider_pane_g3_ParamLimits

0xb9d5,	// (0x0004b909) main_cset_slider_pane_g3

0x88f0,	// (0x00048824) main_cset_slider_pane_g4_ParamLimits

0x88f0,	// (0x00048824) main_cset_slider_pane_g4

0x88ff,	// (0x00048833) main_cset_slider_pane_g5_ParamLimits

0x88ff,	// (0x00048833) main_cset_slider_pane_g5

0x890b,	// (0x0004883f) main_cset_slider_pane_g6_ParamLimits

0x890b,	// (0x0004883f) main_cset_slider_pane_g6

0xf8bd,	// (0x0004f7f1) main_cset_slider_pane_g_ParamLimits

0xba05,	// (0x0004b939) main_cset_slider_pane_t1_ParamLimits

0x8997,	// (0x000488cb) main_cset_slider_pane_t2_ParamLimits

0x89b1,	// (0x000488e5) main_cset_slider_pane_t3_ParamLimits

0x89cb,	// (0x000488ff) main_cset_slider_pane_t4_ParamLimits

0x89e5,	// (0x00048919) main_cset_slider_pane_t5_ParamLimits

0x89ff,	// (0x00048933) main_cset_slider_pane_t6_ParamLimits

0x8a14,	// (0x00048948) main_cset_slider_pane_t7_ParamLimits

0x8a3e,	// (0x00048972) main_cset_slider_pane_t8_ParamLimits

0x8a3e,	// (0x00048972) main_cset_slider_pane_t8

0x8a66,	// (0x0004899a) main_cset_slider_pane_t9_ParamLimits

0x8a66,	// (0x0004899a) main_cset_slider_pane_t9

0x8a8e,	// (0x000489c2) main_cset_slider_pane_t10_ParamLimits

0x8a8e,	// (0x000489c2) main_cset_slider_pane_t10

0x8ab6,	// (0x000489ea) main_cset_slider_pane_t11_ParamLimits

0x8ab6,	// (0x000489ea) main_cset_slider_pane_t11

0x8ade,	// (0x00048a12) main_cset_slider_pane_t12_ParamLimits

0x8ade,	// (0x00048a12) main_cset_slider_pane_t12

0x8afb,	// (0x00048a2f) main_cset_slider_pane_t13_ParamLimits

0x8afb,	// (0x00048a2f) main_cset_slider_pane_t13

0xf8e2,	// (0x0004f816) main_cset_slider_pane_t_ParamLimits

0xadb3,	// (0x0004ace7) bg_popup_sub_pane_cp011

0xbb7b,	// (0x0004baaf) main_cset_text_pane_g1

0xbb83,	// (0x0004bab7) main_cset_text_pane_t1

0xbb91,	// (0x0004bac5) main_cset_text_pane_t2

0xbb9f,	// (0x0004bad3) main_cset_text_pane_t3

0xbbad,	// (0x0004bae1) main_cset_text_pane_t4

0xbbbb,	// (0x0004baef) main_cset_text_pane_t5

0xbbc9,	// (0x0004bafd) main_cset_text_pane_t6

0xbbd7,	// (0x0004bb0b) main_cset_text_pane_t7

0x0006,

0xf972,	// (0x0004f8a6) main_cset_text_pane_t

0xadb3,	// (0x0004ace7) main_cam4_burst_pane

0xadb3,	// (0x0004ace7) main_cam5_pane

0x87bf,	// (0x000486f3) bg_button_pane_cp019

0x87c8,	// (0x000486fc) bg_button_pane_cp020

0xb9e1,	// (0x0004b915) main_cset_slider_pane_g7_ParamLimits

0xb9e1,	// (0x0004b915) main_cset_slider_pane_g7

0xb9ed,	// (0x0004b921) main_cset_slider_pane_g8_ParamLimits

0xb9ed,	// (0x0004b921) main_cset_slider_pane_g8

0x891f,	// (0x00048853) main_cset_slider_pane_g9_ParamLimits

0x891f,	// (0x00048853) main_cset_slider_pane_g9

0x892b,	// (0x0004885f) main_cset_slider_pane_g10_ParamLimits

0x892b,	// (0x0004885f) main_cset_slider_pane_g10

0x8937,	// (0x0004886b) main_cset_slider_pane_g11_ParamLimits

0x8937,	// (0x0004886b) main_cset_slider_pane_g11

0x8943,	// (0x00048877) main_cset_slider_pane_g12_ParamLimits

0x8943,	// (0x00048877) main_cset_slider_pane_g12

0x894f,	// (0x00048883) main_cset_slider_pane_g13_ParamLimits

0x894f,	// (0x00048883) main_cset_slider_pane_g13

0x895b,	// (0x0004888f) main_cset_slider_pane_g14_ParamLimits

0x895b,	// (0x0004888f) main_cset_slider_pane_g14

0x8967,	// (0x0004889b) main_cset_slider_pane_g15_ParamLimits

0x8967,	// (0x0004889b) main_cset_slider_pane_g15

0xba33,	// (0x0004b967) main_cset_slider_pane_t14_ParamLimits

0xba33,	// (0x0004b967) main_cset_slider_pane_t14

0xba6c,	// (0x0004b9a0) main_cset_slider_pane_t15_ParamLimits

0xba6c,	// (0x0004b9a0) main_cset_slider_pane_t15

0x8e54,	// (0x00048d88) aid_cam4_burst_size_cell_ParamLimits

0x8e54,	// (0x00048d88) aid_cam4_burst_size_cell

0x8e74,	// (0x00048da8) grid_cam4_burst_pane_ParamLimits

0x8e74,	// (0x00048da8) grid_cam4_burst_pane

0x8eac,	// (0x00048de0) linegrid_cam4_burst_pane_ParamLimits

0x8eac,	// (0x00048de0) linegrid_cam4_burst_pane

0xbbe5,	// (0x0004bb19) scroll_pane_cp30_ParamLimits

0xbbe5,	// (0x0004bb19) scroll_pane_cp30

0x8ed0,	// (0x00048e04) cell_cam4_burst_pane_ParamLimits

0x8ed0,	// (0x00048e04) cell_cam4_burst_pane

0xbbf1,	// (0x0004bb25) linegrid_cam4_burst_pane_g1_ParamLimits

0xbbf1,	// (0x0004bb25) linegrid_cam4_burst_pane_g1

0x8f1d,	// (0x00048e51) linegrid_cam4_burst_pane_g2_ParamLimits

0x8f1d,	// (0x00048e51) linegrid_cam4_burst_pane_g2

0xbbfe,	// (0x0004bb32) linegrid_cam4_burst_pane_g3_ParamLimits

0xbbfe,	// (0x0004bb32) linegrid_cam4_burst_pane_g3

0x0002,

0xf981,	// (0x0004f8b5) linegrid_cam4_burst_pane_g_ParamLimits

0xf981,	// (0x0004f8b5) linegrid_cam4_burst_pane_g

0x8f2e,	// (0x00048e62) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8f2e,	// (0x00048e62) linegrid_cam4_burst_pane_g3_copy1

0xbc0b,	// (0x0004bb3f) linegrid_cam4_burst_pane_g4_ParamLimits

0xbc0b,	// (0x0004bb3f) linegrid_cam4_burst_pane_g4

0x8f48,	// (0x00048e7c) linegrid_cam4_burst_pane_g5_ParamLimits

0x8f48,	// (0x00048e7c) linegrid_cam4_burst_pane_g5

0x8f59,	// (0x00048e8d) linegrid_cam4_burst_pane_g6_ParamLimits

0x8f59,	// (0x00048e8d) linegrid_cam4_burst_pane_g6

0xbc18,	// (0x0004bb4c) linegrid_cam4_burst_pane_g7_ParamLimits

0xbc18,	// (0x0004bb4c) linegrid_cam4_burst_pane_g7

0x8f70,	// (0x00048ea4) cell_cam4_burst_pane_g1

0xbc31,	// (0x0004bb65) main_cam5_pane_t1_ParamLimits

0xbc31,	// (0x0004bb65) main_cam5_pane_t1

0xbc43,	// (0x0004bb77) main_cam5_pane_t2_ParamLimits

0xbc43,	// (0x0004bb77) main_cam5_pane_t2

0xbc55,	// (0x0004bb89) main_cam5_pane_t3_ParamLimits

0xbc55,	// (0x0004bb89) main_cam5_pane_t3

0xbc67,	// (0x0004bb9b) main_cam5_pane_t4_ParamLimits

0xbc67,	// (0x0004bb9b) main_cam5_pane_t4

0xbc7f,	// (0x0004bbb3) main_cam5_pane_t5_ParamLimits

0xbc7f,	// (0x0004bbb3) main_cam5_pane_t5

0xbc93,	// (0x0004bbc7) main_cam5_pane_t6_ParamLimits

0xbc93,	// (0x0004bbc7) main_cam5_pane_t6

0xbca7,	// (0x0004bbdb) main_cam5_pane_t7_ParamLimits

0xbca7,	// (0x0004bbdb) main_cam5_pane_t7

0xbcb9,	// (0x0004bbed) main_cam5_pane_t8_ParamLimits

0xbcb9,	// (0x0004bbed) main_cam5_pane_t8

0xbcd5,	// (0x0004bc09) main_cam5_pane_t9_ParamLimits

0xbcd5,	// (0x0004bc09) main_cam5_pane_t9

0xbce7,	// (0x0004bc1b) main_cam5_pane_t10_ParamLimits

0xbce7,	// (0x0004bc1b) main_cam5_pane_t10

0xbcf9,	// (0x0004bc2d) main_cam5_pane_t11_ParamLimits

0xbcf9,	// (0x0004bc2d) main_cam5_pane_t11

0xbd0b,	// (0x0004bc3f) main_cam5_pane_t12_ParamLimits

0xbd0b,	// (0x0004bc3f) main_cam5_pane_t12

0xbd20,	// (0x0004bc54) main_cam5_pane_t13_ParamLimits

0xbd20,	// (0x0004bc54) main_cam5_pane_t13

0x000c,

0xf98d,	// (0x0004f8c1) main_cam5_pane_t_ParamLimits

0xf98d,	// (0x0004f8c1) main_cam5_pane_t

0x19fc,	// (0x00041930) popup_scut_keymap_window_ParamLimits

0x19fc,	// (0x00041930) popup_scut_keymap_window

0x8f83,	// (0x00048eb7) aid_size_cell_brow_shortcut

0xea04,	// (0x0004e938) bg_popup_window_pane_cp010

0x8f8f,	// (0x00048ec3) grid_scut_pane

0x8f9b,	// (0x00048ecf) cell_scut_pane_ParamLimits

0x8f9b,	// (0x00048ecf) cell_scut_pane

0x8fb2,	// (0x00048ee6) cell_scut_pane_g1

0xbd3d,	// (0x0004bc71) cell_scut_pane_t1

0xbd4c,	// (0x0004bc80) cell_scut_pane_t2

0x8fbb,	// (0x00048eef) cell_scut_pane_t3

0x0002,

0xf9a8,	// (0x0004f8dc) cell_scut_pane_t

0x6a89,	// (0x000469bd) main_mup3_pane_g8_ParamLimits

0x6a89,	// (0x000469bd) main_mup3_pane_g8

0x8336,	// (0x0004826a) area_vitu2_query_pane_ParamLimits

0x8336,	// (0x0004826a) area_vitu2_query_pane

0x1077,	// (0x00040fab) input_focus_pane_cp08

0xbd5b,	// (0x0004bc8f) area_vitu2_query_pane_g1

0x117c,	// (0x000410b0) area_vitu2_query_pane_g2

0x0001,

0xf9af,	// (0x0004f8e3) area_vitu2_query_pane_g

0x8fc9,	// (0x00048efd) area_vitu2_query_pane_t1_ParamLimits

0x8fc9,	// (0x00048efd) area_vitu2_query_pane_t1

0x8fdd,	// (0x00048f11) area_vitu2_query_pane_t2_ParamLimits

0x8fdd,	// (0x00048f11) area_vitu2_query_pane_t2

0x118d,	// (0x000410c1) area_vitu2_query_pane_t3_ParamLimits

0x118d,	// (0x000410c1) area_vitu2_query_pane_t3

0xbd67,	// (0x0004bc9b) area_vitu2_query_pane_t4_ParamLimits

0xbd67,	// (0x0004bc9b) area_vitu2_query_pane_t4

0xbd8f,	// (0x0004bcc3) area_vitu2_query_pane_t5_ParamLimits

0xbd8f,	// (0x0004bcc3) area_vitu2_query_pane_t5

0xbdb7,	// (0x0004bceb) area_vitu2_query_pane_t6_ParamLimits

0xbdb7,	// (0x0004bceb) area_vitu2_query_pane_t6

0x0006,

0xf9b4,	// (0x0004f8e8) area_vitu2_query_pane_t_ParamLimits

0xf9b4,	// (0x0004f8e8) area_vitu2_query_pane_t

0x8ff1,	// (0x00048f25) bg_button_pane_cp018

0x8fff,	// (0x00048f33) bg_button_pane_cp021

0x11b5,	// (0x000410e9) bg_button_pane_cp022

0x11c4,	// (0x000410f8) input_focus_pane_cp09

0x36f2,	// (0x00043626) aid_size_touch_mv_arrow_left

0x371b,	// (0x0004364f) aid_size_touch_mv_arrow_right

0x897f,	// (0x000488b3) main_cset_slider_pane_g16_ParamLimits

0x897f,	// (0x000488b3) main_cset_slider_pane_g16

0x898b,	// (0x000488bf) main_cset_slider_pane_g17_ParamLimits

0x898b,	// (0x000488bf) main_cset_slider_pane_g17

0x8f70,	// (0x00048ea4) cell_cam4_burst_pane_g1_ParamLimits

0xadb3,	// (0x0004ace7) compa_mode_pane

0x8b65,	// (0x00048a99) popup_vtel_slider_window_g3_ParamLimits

0x8b65,	// (0x00048a99) popup_vtel_slider_window_g3

0x8b7c,	// (0x00048ab0) popup_vtel_slider_window_g4_ParamLimits

0x8b7c,	// (0x00048ab0) popup_vtel_slider_window_g4

0x8b93,	// (0x00048ac7) popup_vtel_slider_window_t1_ParamLimits

0x8b93,	// (0x00048ac7) popup_vtel_slider_window_t1

0xadb3,	// (0x0004ace7) main_cl_pane

0x5404,	// (0x00045338) popup_imed_adjust2_window_ParamLimits

0x52bd,	// (0x000451f1) bg_tb_trans_pane_cp05_ParamLimits

0x75d1,	// (0x00047505) popup_imed_adjust2_window_g1_ParamLimits

0x75e0,	// (0x00047514) popup_imed_adjust2_window_g2_ParamLimits

0x75e0,	// (0x00047514) popup_imed_adjust2_window_g2

0x75ec,	// (0x00047520) popup_imed_adjust2_window_g3_ParamLimits

0x75ec,	// (0x00047520) popup_imed_adjust2_window_g3

0x0002,

0xf72b,	// (0x0004f65f) popup_imed_adjust2_window_g_ParamLimits

0xf72b,	// (0x0004f65f) popup_imed_adjust2_window_g

0x75f8,	// (0x0004752c) popup_imed_adjust2_window_t1_ParamLimits

0x7610,	// (0x00047544) slider_imed_adjust_pane_ParamLimits

0x7624,	// (0x00047558) slider_imed_adjust_pane_g1_ParamLimits

0x7634,	// (0x00047568) slider_imed_adjust_pane_g2_ParamLimits

0x7644,	// (0x00047578) slider_imed_adjust_pane_g3_ParamLimits

0x7655,	// (0x00047589) slider_imed_adjust_pane_g4_ParamLimits

0xf732,	// (0x0004f666) slider_imed_adjust_pane_g_ParamLimits

0x8053,	// (0x00047f87) aid_touch_area_cam4_ParamLimits

0x8053,	// (0x00047f87) aid_touch_area_cam4

0xb7a5,	// (0x0004b6d9) battery_pane_cp01

0x8123,	// (0x00048057) main_camera4_pane_g6_ParamLimits

0x8123,	// (0x00048057) main_camera4_pane_g6

0x814d,	// (0x00048081) main_camera4_pane_t2_ParamLimits

0x814d,	// (0x00048081) main_camera4_pane_t2

0x0001,

0xf830,	// (0x0004f764) main_camera4_pane_t_ParamLimits

0xf830,	// (0x0004f764) main_camera4_pane_t

0x8182,	// (0x000480b6) aid_touch_area_vid4_ParamLimits

0x8182,	// (0x000480b6) aid_touch_area_vid4

0x81e9,	// (0x0004811d) main_video4_pane_g5_ParamLimits

0x81e9,	// (0x0004811d) main_video4_pane_g5

0x8214,	// (0x00048148) vid4_progress_pane_ParamLimits

0x8214,	// (0x00048148) vid4_progress_pane

0xb9f9,	// (0x0004b92d) main_cset_slider_pane_g18_ParamLimits

0xb9f9,	// (0x0004b92d) main_cset_slider_pane_g18

0xbc25,	// (0x0004bb59) cell_cam4_burst_pane_g2_ParamLimits

0xbc25,	// (0x0004bb59) cell_cam4_burst_pane_g2

0x0001,

0xf988,	// (0x0004f8bc) cell_cam4_burst_pane_g_ParamLimits

0xf988,	// (0x0004f8bc) cell_cam4_burst_pane_g

0xdf25,	// (0x0004de59) bg_cl_pane_ParamLimits

0xdf25,	// (0x0004de59) bg_cl_pane

0x900b,	// (0x00048f3f) cl_header_pane_ParamLimits

0x900b,	// (0x00048f3f) cl_header_pane

0x901f,	// (0x00048f53) cl_listscroll_pane_ParamLimits

0x901f,	// (0x00048f53) cl_listscroll_pane

0xbe03,	// (0x0004bd37) bg_cl_pane_g1

0xbe0b,	// (0x0004bd3f) bg_cl_pane_g2

0xbe13,	// (0x0004bd47) bg_cl_pane_g3

0xbe1b,	// (0x0004bd4f) bg_cl_pane_g4

0xbe23,	// (0x0004bd57) bg_cl_pane_g5

0xbe2b,	// (0x0004bd5f) bg_cl_pane_g6

0xbe33,	// (0x0004bd67) bg_cl_pane_g7

0xbe3b,	// (0x0004bd6f) bg_cl_pane_g8

0xbe43,	// (0x0004bd77) bg_cl_pane_g9

0x0008,

0xf9c3,	// (0x0004f8f7) bg_cl_pane_g

0x902f,	// (0x00048f63) aid_height_cl_leading_ParamLimits

0x902f,	// (0x00048f63) aid_height_cl_leading

0x903b,	// (0x00048f6f) aid_height_cl_text_ParamLimits

0x903b,	// (0x00048f6f) aid_height_cl_text

0xf0d2,	// (0x0004f006) bg_cl_header_pane_ParamLimits

0xf0d2,	// (0x0004f006) bg_cl_header_pane

0x905a,	// (0x00048f8e) cl_header_pane_g1_ParamLimits

0x905a,	// (0x00048f8e) cl_header_pane_g1

0x9070,	// (0x00048fa4) cl_header_pane_t1_ParamLimits

0x9070,	// (0x00048fa4) cl_header_pane_t1

0xbe4b,	// (0x0004bd7f) cl_list_pane

0xb9cc,	// (0x0004b900) hc_scroll_pane_cp01

0xe2f9,	// (0x0004e22d) bg_cl_header_pane_g1

0xb8b2,	// (0x0004b7e6) bg_cl_header_pane_g2

0xe319,	// (0x0004e24d) bg_cl_header_pane_g3

0xb8c2,	// (0x0004b7f6) bg_cl_header_pane_g4

0xb8ba,	// (0x0004b7ee) bg_cl_header_pane_g5

0xbb1a,	// (0x0004ba4e) bg_cl_header_pane_g6

0xb8da,	// (0x0004b80e) bg_cl_header_pane_g7

0xb8e2,	// (0x0004b816) bg_cl_header_pane_g8

0xb8d2,	// (0x0004b806) bg_cl_header_pane_g9

0x0008,

0xf9d6,	// (0x0004f90a) bg_cl_header_pane_g

0x9089,	// (0x00048fbd) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9089,	// (0x00048fbd) hc_cl_list_double_graphic_heading_pane

0x909a,	// (0x00048fce) hc_cl_list_single_graphic_pane_ParamLimits

0x909a,	// (0x00048fce) hc_cl_list_single_graphic_pane

0x90b0,	// (0x00048fe4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x90b0,	// (0x00048fe4) hc_cl_list_single_graphic_pane_g1

0x90bc,	// (0x00048ff0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x90bc,	// (0x00048ff0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0004f91d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0004f91d) hc_cl_list_single_graphic_pane_g

0x90d0,	// (0x00049004) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x90d0,	// (0x00049004) hc_cl_list_single_graphic_pane_t1

0x90b0,	// (0x00048fe4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x90b0,	// (0x00048fe4) hc_cl_list_double_graphic_heading_pane_g1

0x90e5,	// (0x00049019) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x90e5,	// (0x00049019) hc_cl_list_double_graphic_heading_pane_g2

0x90f9,	// (0x0004902d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x90f9,	// (0x0004902d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9ee,	// (0x0004f922) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9ee,	// (0x0004f922) hc_cl_list_double_graphic_heading_pane_g

0x910d,	// (0x00049041) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x910d,	// (0x00049041) hc_cl_list_double_graphic_heading_pane_t1

0x9122,	// (0x00049056) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9122,	// (0x00049056) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f5,	// (0x0004f929) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f5,	// (0x0004f929) hc_cl_list_double_graphic_heading_pane_t

0xd762,	// (0x0004d696) vid4_progress_pane_g1

0xd772,	// (0x0004d6a6) vid4_progress_pane_g2

0xb121,	// (0x0004b055) vid4_progress_pane_g3

0xd782,	// (0x0004d6b6) vid4_progress_pane_g4

0x0004,

0xf9fa,	// (0x0004f92e) vid4_progress_pane_g

0xd7a0,	// (0x0004d6d4) vid4_progress_pane_t1

0xd7b5,	// (0x0004d6e9) vid4_progress_pane_t2

0x0002,

0xfa05,	// (0x0004f939) vid4_progress_pane_t

0xd7e0,	// (0x0004d714) wait_bar_pane_cp07

0x616d,	// (0x000460a1) blid_firmament_pane_ParamLimits

0x61b0,	// (0x000460e4) popup_blid_sat_info2_window_g1

0x61d4,	// (0x00046108) popup_blid_sat_info2_window_t3

0x61e2,	// (0x00046116) popup_blid_sat_info2_window_t4

0x61f0,	// (0x00046124) popup_blid_sat_info2_window_t5

0x61fe,	// (0x00046132) popup_blid_sat_info2_window_t6

0x620e,	// (0x00046142) popup_blid_sat_info2_window_t7

0x621c,	// (0x00046150) popup_blid_sat_info2_window_t8

0x622a,	// (0x0004615e) popup_blid_sat_info2_window_t9

0x6238,	// (0x0004616c) popup_blid_sat_info2_window_t10

0x63c6,	// (0x000462fa) aid_firma_cardinal_ParamLimits

0x63da,	// (0x0004630e) blid_firmament_pane_t1_ParamLimits

0x63f1,	// (0x00046325) blid_firmament_pane_t2_ParamLimits

0x6408,	// (0x0004633c) blid_firmament_pane_t3_ParamLimits

0x641f,	// (0x00046353) blid_firmament_pane_t4_ParamLimits

0xf624,	// (0x0004f558) blid_firmament_pane_t_ParamLimits

0x6436,	// (0x0004636a) blid_sat_info_pane_ParamLimits

0xf0d2,	// (0x0004f006) main_cam_set_pane_ParamLimits

0x7436,	// (0x0004736a) aid_size_cell_colour_35_ParamLimits

0x7456,	// (0x0004738a) aid_size_cell_colour_112_ParamLimits

0x7476,	// (0x000473aa) aid_size_cell_effect_ParamLimits

0x52bd,	// (0x000451f1) bg_tb_trans_pane_cp02_ParamLimits

0xe545,	// (0x0004e479) heading_imed_pane_ParamLimits

0x7496,	// (0x000473ca) listscroll_imed_pane_ParamLimits

0x45d2,	// (0x00044506) popup_call2_audio_first_window_g5_ParamLimits

0x45d2,	// (0x00044506) popup_call2_audio_first_window_g5

0x7cfe,	// (0x00047c32) aid_size_touch_image3_arrow_left_ParamLimits

0x7cfe,	// (0x00047c32) aid_size_touch_image3_arrow_left

0x7d2a,	// (0x00047c5e) aid_size_touch_image3_arrow_right_ParamLimits

0x7d2a,	// (0x00047c5e) aid_size_touch_image3_arrow_right

0xd7cb,	// (0x0004d6ff) vid4_progress_pane_t3

0x7a9f,	// (0x000479d3) main_hwr_training_symbol_option_pane_ParamLimits

0x7a9f,	// (0x000479d3) main_hwr_training_symbol_option_pane

0xb307,	// (0x0004b23b) popup_hwr_training_preview_window_ParamLimits

0xb307,	// (0x0004b23b) popup_hwr_training_preview_window

0x7abf,	// (0x000479f3) hwr_training_navi_pane_g5_ParamLimits

0x7abf,	// (0x000479f3) hwr_training_navi_pane_g5

0xb8a0,	// (0x0004b7d4) popup_char_count_window

0xf0d2,	// (0x0004f006) bg_popup_sub_pane_cp20_ParamLimits

0x8cab,	// (0x00048bdf) list_vitu2_match_list_pane_ParamLimits

0x8cba,	// (0x00048bee) vitu2_page_scroll_pane_ParamLimits

0x8cba,	// (0x00048bee) vitu2_page_scroll_pane

0xbeae,	// (0x0004bde2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbeae,	// (0x0004bde2) list_single_hwr_training_symbol_option_pane

0xbec1,	// (0x0004bdf5) list_single_hwr_training_symbol_option_pane_g1

0xbec9,	// (0x0004bdfd) list_single_hwr_training_symbol_option_pane_t1

0xbed7,	// (0x0004be0b) bg_button_pane_cp023

0xbee0,	// (0x0004be14) bg_button_pane_cp024

0x9137,	// (0x0004906b) vitu2_page_scroll_pane_g1

0x913f,	// (0x00049073) vitu2_page_scroll_pane_g2

0x0001,

0xfa0c,	// (0x0004f940) vitu2_page_scroll_pane_g

0x9147,	// (0x0004907b) vitu2_page_scroll_pane_t1

0xbf13,	// (0x0004be47) popup_char_count_window_g1

0xbf1c,	// (0x0004be50) popup_char_count_window_g2

0xbf25,	// (0x0004be59) popup_char_count_window_g3

0x0002,

0xfa11,	// (0x0004f945) popup_char_count_window_g

0xbf2e,	// (0x0004be62) popup_char_count_window_t1

0xadb3,	// (0x0004ace7) main_vded2_pane

0x75bd,	// (0x000474f1) aid_size_cell_imed_line

0x75c7,	// (0x000474fb) grid_imed_line_width_pane

0x8282,	// (0x000481b6) vid4_indicators_pane_g4

0xbf3c,	// (0x0004be70) cell_imed_line_width_pane_ParamLimits

0xbf3c,	// (0x0004be70) cell_imed_line_width_pane

0xbf50,	// (0x0004be84) cell_imed_line_width_pane_g1

0x9156,	// (0x0004908a) cell_imed_line_width_pane_g2

0x0001,

0xfa18,	// (0x0004f94c) cell_imed_line_width_pane_g

0x915e,	// (0x00049092) main_vded2_pane_g1_ParamLimits

0x915e,	// (0x00049092) main_vded2_pane_g1

0x9174,	// (0x000490a8) main_vded2_pane_g2_ParamLimits

0x9174,	// (0x000490a8) main_vded2_pane_g2

0x0001,

0xfa1d,	// (0x0004f951) main_vded2_pane_g_ParamLimits

0xfa1d,	// (0x0004f951) main_vded2_pane_g

0x9186,	// (0x000490ba) vded2_slider_pane_ParamLimits

0x9186,	// (0x000490ba) vded2_slider_pane

0x9196,	// (0x000490ca) aid_size_touch_vded2_end

0x91a0,	// (0x000490d4) aid_size_touch_vded2_playhead

0xbf59,	// (0x0004be8d) aid_size_touch_vded2_start

0xbf61,	// (0x0004be95) vded2_slider_bg_pane

0xbf6a,	// (0x0004be9e) vded2_slider_pane_g1

0xbf73,	// (0x0004bea7) vded2_slider_pane_g2

0x91aa,	// (0x000490de) vded2_slider_pane_g3

0x0002,

0xfa22,	// (0x0004f956) vded2_slider_pane_g

0xbf7b,	// (0x0004beaf) vded2_slider_bg_pane_g1

0xbf84,	// (0x0004beb8) vded2_slider_bg_pane_g2

0xbf8d,	// (0x0004bec1) vded2_slider_bg_pane_g3

0x0002,

0xfa29,	// (0x0004f95d) vded2_slider_bg_pane_g

0x3cce,	// (0x00043c02) aid_postcard_touch_down_pane_ParamLimits

0x3cce,	// (0x00043c02) aid_postcard_touch_down_pane

0x3ce4,	// (0x00043c18) aid_postcard_touch_up_pane_ParamLimits

0x3ce4,	// (0x00043c18) aid_postcard_touch_up_pane

0xadb3,	// (0x0004ace7) main_blid2_pane

0x52f3,	// (0x00045227) popup_blid2_search_window

0xadb3,	// (0x0004ace7) blid2_gps_pane

0xadb3,	// (0x0004ace7) blid2_navig_pane

0xadb3,	// (0x0004ace7) blid2_search_pane

0xadb3,	// (0x0004ace7) blid2_tripm_pane

0x91b5,	// (0x000490e9) blid2_search_pane_g1_ParamLimits

0x91b5,	// (0x000490e9) blid2_search_pane_g1

0x91cf,	// (0x00049103) blid2_search_pane_t1_ParamLimits

0x91cf,	// (0x00049103) blid2_search_pane_t1

0x91e1,	// (0x00049115) aid_size_cell_blid2_gps_ParamLimits

0x91e1,	// (0x00049115) aid_size_cell_blid2_gps

0x91f9,	// (0x0004912d) blid2_gps_pane_g1_ParamLimits

0x91f9,	// (0x0004912d) blid2_gps_pane_g1

0x920d,	// (0x00049141) grid_blid2_satellite_pane_ParamLimits

0x920d,	// (0x00049141) grid_blid2_satellite_pane

0x9227,	// (0x0004915b) blid2_navig_pane_g1_ParamLimits

0x9227,	// (0x0004915b) blid2_navig_pane_g1

0x9233,	// (0x00049167) blid2_navig_pane_t1_ParamLimits

0x9233,	// (0x00049167) blid2_navig_pane_t1

0x924e,	// (0x00049182) blid2_navig_pane_t2_ParamLimits

0x924e,	// (0x00049182) blid2_navig_pane_t2

0x0001,

0xfa30,	// (0x0004f964) blid2_navig_pane_t_ParamLimits

0xfa30,	// (0x0004f964) blid2_navig_pane_t

0x9269,	// (0x0004919d) blid2_navig_ring_pane_ParamLimits

0x9269,	// (0x0004919d) blid2_navig_ring_pane

0x9282,	// (0x000491b6) blid2_speed_pane_ParamLimits

0x9282,	// (0x000491b6) blid2_speed_pane

0x928e,	// (0x000491c2) blid2_tripm_pane_g1_ParamLimits

0x928e,	// (0x000491c2) blid2_tripm_pane_g1

0x92a7,	// (0x000491db) blid2_tripm_pane_g2_ParamLimits

0x92a7,	// (0x000491db) blid2_tripm_pane_g2

0x92bb,	// (0x000491ef) blid2_tripm_pane_g3_ParamLimits

0x92bb,	// (0x000491ef) blid2_tripm_pane_g3

0x92cf,	// (0x00049203) blid2_tripm_pane_g4_ParamLimits

0x92cf,	// (0x00049203) blid2_tripm_pane_g4

0x92e3,	// (0x00049217) blid2_tripm_pane_g5_ParamLimits

0x92e3,	// (0x00049217) blid2_tripm_pane_g5

0x0005,

0xfa35,	// (0x0004f969) blid2_tripm_pane_g_ParamLimits

0xfa35,	// (0x0004f969) blid2_tripm_pane_g

0x9309,	// (0x0004923d) blid2_tripm_pane_t1_ParamLimits

0x9309,	// (0x0004923d) blid2_tripm_pane_t1

0x9324,	// (0x00049258) blid2_tripm_pane_t2_ParamLimits

0x9324,	// (0x00049258) blid2_tripm_pane_t2

0x933d,	// (0x00049271) blid2_tripm_pane_t3_ParamLimits

0x933d,	// (0x00049271) blid2_tripm_pane_t3

0x0003,

0xfa42,	// (0x0004f976) blid2_tripm_pane_t_ParamLimits

0xfa42,	// (0x0004f976) blid2_tripm_pane_t

0x9384,	// (0x000492b8) cell_blid2_satellite_pane_ParamLimits

0x9384,	// (0x000492b8) cell_blid2_satellite_pane

0x93a2,	// (0x000492d6) cell_blid2_satellite_pane_g1

0xbf96,	// (0x0004beca) cell_blid2_satellite_pane_t1

0x6446,	// (0x0004637a) blid2_speed_pane_g1

0xbfa4,	// (0x0004bed8) blid2_speed_pane_t1

0xbfb2,	// (0x0004bee6) blid2_speed_pane_t2

0x0001,

0xfa4b,	// (0x0004f97f) blid2_speed_pane_t

0x6446,	// (0x0004637a) blid2_navig_ring_pane_g1

0x93ab,	// (0x000492df) blid2_navig_ring_pane_g2

0x93b3,	// (0x000492e7) blid2_navig_ring_pane_g3

0x93bb,	// (0x000492ef) blid2_navig_ring_pane_g4

0x93c3,	// (0x000492f7) blid2_navig_ring_pane_g5

0x0004,

0xfa50,	// (0x0004f984) blid2_navig_ring_pane_g

0xadb3,	// (0x0004ace7) bg_popup_window_pane_cp011

0xbfc0,	// (0x0004bef4) popup_blid2_search_window_g1

0xbfc8,	// (0x0004befc) popup_blid2_search_window_t1

0xbfd6,	// (0x0004bf0a) popup_blid2_search_window_t2

0x0001,

0xfa5b,	// (0x0004f98f) popup_blid2_search_window_t

0xe208,	// (0x0004e13c) main_browser_pane_g1

0xdf25,	// (0x0004de59) main_browser_pane_ParamLimits

0xf0d2,	// (0x0004f006) bg_button_pane_cp011_ParamLimits

0x855b,	// (0x0004848f) cell_vitu2_function_pane_g1_ParamLimits

0x52bd,	// (0x000451f1) bg_popup_sub_pane_cp22_ParamLimits

0x1077,	// (0x00040fab) input_focus_pane_cp08_ParamLimits

0x8e01,	// (0x00048d35) popup_vitu2_query_button_pane_ParamLimits

0x8e01,	// (0x00048d35) popup_vitu2_query_button_pane

0x108e,	// (0x00040fc2) popup_vitu2_query_input_button_pane

0xbb6f,	// (0x0004baa3) popup_vitu2_query_window_g1_ParamLimits

0x1098,	// (0x00040fcc) popup_vitu2_query_window_g2_ParamLimits

0xf95c,	// (0x0004f890) popup_vitu2_query_window_g_ParamLimits

0xadb3,	// (0x0004ace7) bg_button_pane_cp026

0x93cb,	// (0x000492ff) popup_vitu2_query_input_button_pane_g1

0xadb3,	// (0x0004ace7) bg_button_pane_cp025

0xbfe4,	// (0x0004bf18) popup_vitu2_query_button_pane_t1

0x6796,	// (0x000466ca) main_mp3_pane_t6

0x67ac,	// (0x000466e0) popup_slider_window_cp01

0xb7d3,	// (0x0004b707) cam4_battery_pane

0xb83a,	// (0x0004b76e) cam4_battery_pane_cp02

0xd75a,	// (0x0004d68e) cam4_battery_pane_cp01

0xd75a,	// (0x0004d68e) cam4_battery_pane_cp03

0x6446,	// (0x0004637a) cam4_battery_pane_g1

0xbff2,	// (0x0004bf26) cam4_battery_pane_g2

0x0001,

0xfa60,	// (0x0004f994) cam4_battery_pane_g

0x6246,	// (0x0004617a) popup_blid_sat_info2_window_t11

0x36f2,	// (0x00043626) aid_size_touch_mv_arrow_left_ParamLimits

0x371b,	// (0x0004364f) aid_size_touch_mv_arrow_right_ParamLimits

0xe964,	// (0x0004e898) navi_pane_g1_ParamLimits

0x3744,	// (0x00043678) navi_pane_g2_ParamLimits

0x3772,	// (0x000436a6) navi_pane_g3_ParamLimits

0xf394,	// (0x0004f2c8) navi_pane_g_ParamLimits

0x37ca,	// (0x000436fe) navi_pane_mv_t1_ParamLimits

0x74cf,	// (0x00047403) grid_imed_effect_pane_ParamLimits

0x26f3,	// (0x00042627) aid_placing_vt_slider_lsc

0xe159,	// (0x0004e08d) aid_placing_vt_slider_prt

0xf0d2,	// (0x0004f006) bg_tb_trans_pane_cp01_ParamLimits

0x6602,	// (0x00046536) popup_image_details_window_g1_ParamLimits

0x6615,	// (0x00046549) popup_image_details_window_g2_ParamLimits

0x662a,	// (0x0004655e) popup_image_details_window_g3_ParamLimits

0x662a,	// (0x0004655e) popup_image_details_window_g3

0xf669,	// (0x0004f59d) popup_image_details_window_g_ParamLimits

0x663e,	// (0x00046572) popup_image_details_window_t1_ParamLimits

0x6650,	// (0x00046584) popup_image_details_window_t2_ParamLimits

0x6669,	// (0x0004659d) popup_image_details_window_t3_ParamLimits

0x667d,	// (0x000465b1) popup_image_details_window_t4_ParamLimits

0x6698,	// (0x000465cc) popup_image_details_window_t5_ParamLimits

0xf670,	// (0x0004f5a4) popup_image_details_window_t_ParamLimits

0x9047,	// (0x00048f7b) cl_header_name_pane_ParamLimits

0x9047,	// (0x00048f7b) cl_header_name_pane

0x93d3,	// (0x00049307) cl_header_name_pane_t1_ParamLimits

0x93d3,	// (0x00049307) cl_header_name_pane_t1

0x93f4,	// (0x00049328) cl_header_name_pane_t2_ParamLimits

0x93f4,	// (0x00049328) cl_header_name_pane_t2

0x9436,	// (0x0004936a) cl_header_name_pane_t3_ParamLimits

0x9436,	// (0x0004936a) cl_header_name_pane_t3

0x0002,

0xfa65,	// (0x0004f999) cl_header_name_pane_t_ParamLimits

0xfa65,	// (0x0004f999) cl_header_name_pane_t

0x379b,	// (0x000436cf) navi_pane_mv_g2_ParamLimits

0xb85d,	// (0x0004b791) field_vitu2_entry_pane_g1_ParamLimits

0xb869,	// (0x0004b79d) field_vitu2_entry_pane_g2_ParamLimits

0xb875,	// (0x0004b7a9) field_vitu2_entry_pane_g3_ParamLimits

0xb875,	// (0x0004b7a9) field_vitu2_entry_pane_g3

0xf862,	// (0x0004f796) field_vitu2_entry_pane_g_ParamLimits

0x84d7,	// (0x0004840b) cell_vitu2_itu_pane_g1_ParamLimits

0x84e7,	// (0x0004841b) cell_vitu2_itu_pane_g2_ParamLimits

0x84e7,	// (0x0004841b) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x0004f7a2) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x0004f7a2) cell_vitu2_itu_pane_g

0xf0d2,	// (0x0004f006) bg_vkb2_func_pane_cp05_ParamLimits

0xf0d2,	// (0x0004f006) bg_vkb2_func_pane_cp05

0xf0d2,	// (0x0004f006) bg_vkb2_func_pane_cp03

0xf0d2,	// (0x0004f006) bg_vkb2_func_pane_cp04

0xf0d2,	// (0x0004f006) bg_vkb2_func_pane_cp10_ParamLimits

0xf0d2,	// (0x0004f006) bg_vkb2_func_pane_cp10

0x11b5,	// (0x000410e9) bg_vkb2_func_pane_cp08

0x8ff1,	// (0x00048f25) bg_vkb2_func_pane_cp06

0x8fff,	// (0x00048f33) bg_vkb2_func_pane_cp07

0xbee9,	// (0x0004be1d) bg_vkb2_func_pane_cp11_ParamLimits

0xbee9,	// (0x0004be1d) bg_vkb2_func_pane_cp11

0xbefe,	// (0x0004be32) bg_vkb2_func_pane_cp12_ParamLimits

0xbefe,	// (0x0004be32) bg_vkb2_func_pane_cp12

0xadb3,	// (0x0004ace7) bg_vkb2_func_pane_cp09

0xb8b2,	// (0x0004b7e6) bg_vkb2_func_pane_g1

0xe319,	// (0x0004e24d) bg_vkb2_func_pane_g2

0xb8ba,	// (0x0004b7ee) bg_vkb2_func_pane_g3

0xb8c2,	// (0x0004b7f6) bg_vkb2_func_pane_g4

0xbb1a,	// (0x0004ba4e) bg_vkb2_func_pane_g5

0xb8da,	// (0x0004b80e) bg_vkb2_func_pane_g6

0xb8e2,	// (0x0004b816) bg_vkb2_func_pane_g7

0xb8d2,	// (0x0004b806) bg_vkb2_func_pane_g8

0xe2f9,	// (0x0004e22d) bg_vkb2_func_pane_g9

0x0008,

0xfa6c,	// (0x0004f9a0) bg_vkb2_func_pane_g

0x92f7,	// (0x0004922b) blid2_tripm_pane_g6_ParamLimits

0x92f7,	// (0x0004922b) blid2_tripm_pane_g6

0xb614,	// (0x0004b548) mp4_progress_pane_g1

0x9370,	// (0x000492a4) blid2_tripm_values_pane_ParamLimits

0x9370,	// (0x000492a4) blid2_tripm_values_pane

0x9467,	// (0x0004939b) blid2_tripm_values_pane_t1

0x9475,	// (0x000493a9) blid2_tripm_values_pane_t2

0x9483,	// (0x000493b7) blid2_tripm_values_pane_t3

0x9491,	// (0x000493c5) blid2_tripm_values_pane_t4

0x949f,	// (0x000493d3) blid2_tripm_values_pane_t5

0x94ad,	// (0x000493e1) blid2_tripm_values_pane_t6

0x94bb,	// (0x000493ef) blid2_tripm_values_pane_t7

0x94c9,	// (0x000493fd) blid2_tripm_values_pane_t8

0x94d7,	// (0x0004940b) blid2_tripm_values_pane_t9

0x0008,

0xfa7f,	// (0x0004f9b3) blid2_tripm_values_pane_t

0x2735,	// (0x00042669) call_video_pane_t1_ParamLimits

0x2753,	// (0x00042687) call_video_pane_t2_ParamLimits

0xf284,	// (0x0004f1b8) call_video_pane_t_ParamLimits

0x0e5b,	// (0x00040d8f) msg_header_pane_g1_ParamLimits

0xeb7f,	// (0x0004eab3) msg_header_pane_g2_ParamLimits

0xeb7f,	// (0x0004eab3) msg_header_pane_g2

0x0001,

0xf411,	// (0x0004f345) msg_header_pane_g_ParamLimits

0xf411,	// (0x0004f345) msg_header_pane_g

0xdf25,	// (0x0004de59) main_clock2_pane_ParamLimits

0x7199,	// (0x000470cd) grid_clock2_toolbar_pane_ParamLimits

0x7199,	// (0x000470cd) grid_clock2_toolbar_pane

0x7199,	// (0x000470cd) listscroll_clock2_pane_ParamLimits

0x7199,	// (0x000470cd) listscroll_clock2_pane

0x7275,	// (0x000471a9) main_clock2_pane_t3_ParamLimits

0x7275,	// (0x000471a9) main_clock2_pane_t3

0x7290,	// (0x000471c4) main_clock2_pane_t4_ParamLimits

0x7290,	// (0x000471c4) main_clock2_pane_t4

0xbffc,	// (0x0004bf30) cell_clock2_toolbar_pane

0xc004,	// (0x0004bf38) cell_clock2_toolbar_pane_cp01

0xc004,	// (0x0004bf38) cell_clock2_toolbar_pane_cp02

0xc00c,	// (0x0004bf40) cell_clock2_toolbar_pane_cp03

0xc014,	// (0x0004bf48) list_clock2_pane

0xe8bb,	// (0x0004e7ef) scroll_pane_cp10

0xc01c,	// (0x0004bf50) list_single_clock2_pane_ParamLimits

0xc01c,	// (0x0004bf50) list_single_clock2_pane

0xea04,	// (0x0004e938) list_highlight_pane_cp08

0xc029,	// (0x0004bf5d) list_single_clock2_pane_t1

0xc037,	// (0x0004bf6b) list_single_clock2_pane_t2

0x0001,

0xfa92,	// (0x0004f9c6) list_single_clock2_pane_t

0xadb3,	// (0x0004ace7) bg_button_pane_cp10

0xc045,	// (0x0004bf79) cell_clock2_toolbar_pane_g1

0x3c5a,	// (0x00043b8e) aid_main_viewer_pane_g1_ParamLimits

0x3c5a,	// (0x00043b8e) aid_main_viewer_pane_g1

0x3c68,	// (0x00043b9c) aid_main_viewer_pane_g2_ParamLimits

0x3c68,	// (0x00043b9c) aid_main_viewer_pane_g2

0x3c76,	// (0x00043baa) aid_main_viewer_pane_g3_ParamLimits

0x3c76,	// (0x00043baa) aid_main_viewer_pane_g3

0x3c85,	// (0x00043bb9) aid_main_viewer_pane_g4_ParamLimits

0x3c85,	// (0x00043bb9) aid_main_viewer_pane_g4

0x0003,

0xf422,	// (0x0004f356) aid_main_viewer_pane_g_ParamLimits

0xf422,	// (0x0004f356) aid_main_viewer_pane_g

0x52a9,	// (0x000451dd) main_calc_pane_ParamLimits

0x52cb,	// (0x000451ff) main_dialer2_pane_ParamLimits

0xadb3,	// (0x0004ace7) main_cam6_pane

0xadb3,	// (0x0004ace7) main_vid6_pane

0x71a5,	// (0x000470d9) listscroll_gen_pane_cp06_ParamLimits

0x71a5,	// (0x000470d9) listscroll_gen_pane_cp06

0x72ab,	// (0x000471df) main_clock2_pane_t5_ParamLimits

0x72ab,	// (0x000471df) main_clock2_pane_t5

0x7302,	// (0x00047236) aid_call2_pane_cp10_ParamLimits

0x7314,	// (0x00047248) aid_call_pane_cp10_ParamLimits

0xe939,	// (0x0004e86d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe939,	// (0x0004e86d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7326,	// (0x0004725a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7326,	// (0x0004725a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe939,	// (0x0004e86d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf720,	// (0x0004f654) popup_clock_analogue_window_cp10_g_ParamLimits

0x7338,	// (0x0004726c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7cab,	// (0x00047bdf) cell_dialer2_keypad_pane_g2_ParamLimits

0x7cab,	// (0x00047bdf) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x0004f735) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x0004f735) cell_dialer2_keypad_pane_g

0x7cc7,	// (0x00047bfb) cell_dialer2_keypad_pane_t1

0x8872,	// (0x000487a6) main_cset_text2_pane_ParamLimits

0x8872,	// (0x000487a6) main_cset_text2_pane

0xbd5b,	// (0x0004bc8f) area_vitu2_query_pane_g1_ParamLimits

0x117c,	// (0x000410b0) area_vitu2_query_pane_g2_ParamLimits

0xf9af,	// (0x0004f8e3) area_vitu2_query_pane_g_ParamLimits

0xbddf,	// (0x0004bd13) area_vitu2_query_pane_t7_ParamLimits

0xbddf,	// (0x0004bd13) area_vitu2_query_pane_t7

0x8ff1,	// (0x00048f25) bg_button_pane_cp018_ParamLimits

0x8fff,	// (0x00048f33) bg_button_pane_cp021_ParamLimits

0x11b5,	// (0x000410e9) bg_button_pane_cp022_ParamLimits

0x11b5,	// (0x000410e9) bg_vkb2_func_pane_cp08_ParamLimits

0x8ff1,	// (0x00048f25) bg_vkb2_func_pane_cp06_ParamLimits

0x8fff,	// (0x00048f33) bg_vkb2_func_pane_cp07_ParamLimits

0x11c4,	// (0x000410f8) input_focus_pane_cp09_ParamLimits

0xd7f2,	// (0x0004d726) cam6_autofocus_pane_ParamLimits

0xd7f2,	// (0x0004d726) cam6_autofocus_pane

0x94e5,	// (0x00049419) cam6_image_uncrop_pane_ParamLimits

0x94e5,	// (0x00049419) cam6_image_uncrop_pane

0x94f4,	// (0x00049428) cam6_indi_pane_ParamLimits

0x94f4,	// (0x00049428) cam6_indi_pane

0x950a,	// (0x0004943e) cam6_mode_pane_ParamLimits

0x950a,	// (0x0004943e) cam6_mode_pane

0x951c,	// (0x00049450) cam6_timer_pane_ParamLimits

0x951c,	// (0x00049450) cam6_timer_pane

0x9528,	// (0x0004945c) cam6_zoom_pane_ParamLimits

0x9528,	// (0x0004945c) cam6_zoom_pane

0x9534,	// (0x00049468) cam6_mode_pane_g1_ParamLimits

0x9534,	// (0x00049468) cam6_mode_pane_g1

0x9544,	// (0x00049478) cam6_mode_pane_g2_ParamLimits

0x9544,	// (0x00049478) cam6_mode_pane_g2

0x9554,	// (0x00049488) cam6_mode_pane_g3_ParamLimits

0x9554,	// (0x00049488) cam6_mode_pane_g3

0x9564,	// (0x00049498) cam6_mode_pane_g4_ParamLimits

0x9564,	// (0x00049498) cam6_mode_pane_g4

0x0003,

0xfa97,	// (0x0004f9cb) cam6_mode_pane_g_ParamLimits

0xfa97,	// (0x0004f9cb) cam6_mode_pane_g

0xc04d,	// (0x0004bf81) bg_tb_trans_pane_cp08_ParamLimits

0xc04d,	// (0x0004bf81) bg_tb_trans_pane_cp08

0xc05b,	// (0x0004bf8f) cam6_battery_pane_ParamLimits

0xc05b,	// (0x0004bf8f) cam6_battery_pane

0xc071,	// (0x0004bfa5) cam6_indi_pane_g1_ParamLimits

0xc071,	// (0x0004bfa5) cam6_indi_pane_g1

0xc083,	// (0x0004bfb7) cam6_indi_pane_g2_ParamLimits

0xc083,	// (0x0004bfb7) cam6_indi_pane_g2

0xc095,	// (0x0004bfc9) cam6_indi_pane_g3_ParamLimits

0xc095,	// (0x0004bfc9) cam6_indi_pane_g3

0x0002,

0xfaa0,	// (0x0004f9d4) cam6_indi_pane_g_ParamLimits

0xfaa0,	// (0x0004f9d4) cam6_indi_pane_g

0xc0a7,	// (0x0004bfdb) cam6_indi_pane_t1_ParamLimits

0xc0a7,	// (0x0004bfdb) cam6_indi_pane_t1

0x9574,	// (0x000494a8) cam6_autofocus_pane_g1

0x957c,	// (0x000494b0) cam6_autofocus_pane_g2

0x9584,	// (0x000494b8) cam6_autofocus_pane_g3

0x958c,	// (0x000494c0) cam6_autofocus_pane_g4

0x0003,

0xfaa7,	// (0x0004f9db) cam6_autofocus_pane_g

0xc0cd,	// (0x0004c001) cam6_timer_pane_g1

0xc0d5,	// (0x0004c009) cam6_timer_pane_t1

0xc0e3,	// (0x0004c017) cam6_zoom_cont_pane

0xc0eb,	// (0x0004c01f) cam6_zoom_pane_g1

0xc0f3,	// (0x0004c027) cam6_zoom_pane_g2

0x9594,	// (0x000494c8) cam6_zoom_pane_g3

0x0002,

0xfab0,	// (0x0004f9e4) cam6_zoom_pane_g

0x6446,	// (0x0004637a) cam6_battery_pane_g1

0x6446,	// (0x0004637a) cam6_battery_pane_g2

0x0001,

0xf62d,	// (0x0004f561) cam6_battery_pane_g

0xc0fb,	// (0x0004c02f) cam6_zoom_cont_pane_g1

0xc104,	// (0x0004c038) cam6_zoom_cont_pane_g2

0xc10d,	// (0x0004c041) cam6_zoom_cont_pane_g3

0x0002,

0xfab7,	// (0x0004f9eb) cam6_zoom_cont_pane_g

0x95b1,	// (0x000494e5) cam6_mode_pane_cp_ParamLimits

0x95b1,	// (0x000494e5) cam6_mode_pane_cp

0x9528,	// (0x0004945c) cam6_zoom_pane_cp_ParamLimits

0x9528,	// (0x0004945c) cam6_zoom_pane_cp

0x95c3,	// (0x000494f7) vid6_image_uncrop_cif_pane_ParamLimits

0x95c3,	// (0x000494f7) vid6_image_uncrop_cif_pane

0x95d3,	// (0x00049507) vid6_image_uncrop_nhd_pane_ParamLimits

0x95d3,	// (0x00049507) vid6_image_uncrop_nhd_pane

0x94e5,	// (0x00049419) vid6_image_uncrop_vga_pane_ParamLimits

0x94e5,	// (0x00049419) vid6_image_uncrop_vga_pane

0x95e2,	// (0x00049516) vid6_image_uncrop_wvga_pane_ParamLimits

0x95e2,	// (0x00049516) vid6_image_uncrop_wvga_pane

0x95f1,	// (0x00049525) vid6_indi_pane_ParamLimits

0x95f1,	// (0x00049525) vid6_indi_pane

0xc04d,	// (0x0004bf81) bg_tb_trans_pane_cp09_ParamLimits

0xc04d,	// (0x0004bf81) bg_tb_trans_pane_cp09

0xc125,	// (0x0004c059) cam6_battery_pane_cp_ParamLimits

0xc125,	// (0x0004c059) cam6_battery_pane_cp

0xc131,	// (0x0004c065) vid6_indi_pane_g1_ParamLimits

0xc131,	// (0x0004c065) vid6_indi_pane_g1

0xc143,	// (0x0004c077) vid6_indi_pane_g2_ParamLimits

0xc143,	// (0x0004c077) vid6_indi_pane_g2

0xc155,	// (0x0004c089) vid6_indi_pane_g3_ParamLimits

0xc155,	// (0x0004c089) vid6_indi_pane_g3

0xc16a,	// (0x0004c09e) vid6_indi_pane_g4_ParamLimits

0xc16a,	// (0x0004c09e) vid6_indi_pane_g4

0xc17f,	// (0x0004c0b3) vid6_indi_pane_g5_ParamLimits

0xc17f,	// (0x0004c0b3) vid6_indi_pane_g5

0x0004,

0xfabe,	// (0x0004f9f2) vid6_indi_pane_g_ParamLimits

0xfabe,	// (0x0004f9f2) vid6_indi_pane_g

0xc199,	// (0x0004c0cd) vid6_indi_pane_t1_ParamLimits

0xc199,	// (0x0004c0cd) vid6_indi_pane_t1

0xc1af,	// (0x0004c0e3) vid6_indi_pane_t2_ParamLimits

0xc1af,	// (0x0004c0e3) vid6_indi_pane_t2

0xc1d7,	// (0x0004c10b) vid6_indi_pane_t3_ParamLimits

0xc1d7,	// (0x0004c10b) vid6_indi_pane_t3

0xc1ff,	// (0x0004c133) vid6_indi_pane_t4_ParamLimits

0xc1ff,	// (0x0004c133) vid6_indi_pane_t4

0x0003,

0xfac9,	// (0x0004f9fd) vid6_indi_pane_t_ParamLimits

0xfac9,	// (0x0004f9fd) vid6_indi_pane_t

0xc223,	// (0x0004c157) wait_bar_pane_cp08

0x9609,	// (0x0004953d) main_cset_text2_pane_t1_ParamLimits

0x9609,	// (0x0004953d) main_cset_text2_pane_t1

0x959c,	// (0x000494d0) listscroll_gen_pane_cp06_t1_ParamLimits

0x959c,	// (0x000494d0) listscroll_gen_pane_cp06_t1

0xadb3,	// (0x0004ace7) main_cam6_set_pane

0x671d,	// (0x00046651) bg_tb_trans_pane_cp06_ParamLimits

0xb7db,	// (0x0004b70f) cam4_indicators_pane_g1_ParamLimits

0xb7ec,	// (0x0004b720) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x0004f772) cam4_indicators_pane_g_ParamLimits

0xb80a,	// (0x0004b73e) cam4_indicators_pane_t1_ParamLimits

0xb82c,	// (0x0004b760) bg_tb_trans_pane_cp07_ParamLimits

0x825b,	// (0x0004818f) vid4_indicators_pane_g1_ParamLimits

0x8268,	// (0x0004819c) vid4_indicators_pane_g2_ParamLimits

0x8275,	// (0x000481a9) vid4_indicators_pane_g3_ParamLimits

0x8282,	// (0x000481b6) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x0004f784) vid4_indicators_pane_g_ParamLimits

0x829a,	// (0x000481ce) vid4_indicators_pane_t1_ParamLimits

0xd762,	// (0x0004d696) vid4_progress_pane_g1_ParamLimits

0xd772,	// (0x0004d6a6) vid4_progress_pane_g2_ParamLimits

0xb121,	// (0x0004b055) vid4_progress_pane_g3_ParamLimits

0xd782,	// (0x0004d6b6) vid4_progress_pane_g4_ParamLimits

0xf9fa,	// (0x0004f92e) vid4_progress_pane_g_ParamLimits

0xd7a0,	// (0x0004d6d4) vid4_progress_pane_t1_ParamLimits

0xd7b5,	// (0x0004d6e9) vid4_progress_pane_t2_ParamLimits

0xd7cb,	// (0x0004d6ff) vid4_progress_pane_t3_ParamLimits

0xfa05,	// (0x0004f939) vid4_progress_pane_t_ParamLimits

0xd7e0,	// (0x0004d714) wait_bar_pane_cp07_ParamLimits

0x9626,	// (0x0004955a) main_cam6_set_pane_g2_ParamLimits

0x9626,	// (0x0004955a) main_cam6_set_pane_g2

0x964a,	// (0x0004957e) main_cset6_listscroll_pane_ParamLimits

0x964a,	// (0x0004957e) main_cset6_listscroll_pane

0x966a,	// (0x0004959e) main_cset6_slider_pane_ParamLimits

0x966a,	// (0x0004959e) main_cset6_slider_pane

0x9680,	// (0x000495b4) main_cset6_text2_pane_ParamLimits

0x9680,	// (0x000495b4) main_cset6_text2_pane

0xc232,	// (0x0004c166) main_cset6_text_pane

0xc23a,	// (0x0004c16e) main_cset_list_pane_copy1_ParamLimits

0xc23a,	// (0x0004c16e) main_cset_list_pane_copy1

0xc24a,	// (0x0004c17e) scroll_pane_cp028_copy1

0x968e,	// (0x000495c2) cset_list_set_pane_copy1

0x969f,	// (0x000495d3) aid_position_infowindow_above_copy1

0x96a7,	// (0x000495db) aid_position_infowindow_below_copy1

0x11d3,	// (0x00041107) cset_list_set_pane_g1_copy1

0x11db,	// (0x0004110f) cset_list_set_pane_g3_copy1_ParamLimits

0x11db,	// (0x0004110f) cset_list_set_pane_g3_copy1

0x11ea,	// (0x0004111e) cset_list_set_pane_t1_copy1_ParamLimits

0x11ea,	// (0x0004111e) cset_list_set_pane_t1_copy1

0xf0d2,	// (0x0004f006) list_highlight_pane_cp021_copy1_ParamLimits

0xf0d2,	// (0x0004f006) list_highlight_pane_cp021_copy1

0xc253,	// (0x0004c187) cset6_slider_pane_ParamLimits

0xc253,	// (0x0004c187) cset6_slider_pane

0xc27f,	// (0x0004c1b3) main_cset6_slider_pane_g1_ParamLimits

0xc27f,	// (0x0004c1b3) main_cset6_slider_pane_g1

0x96af,	// (0x000495e3) main_cset6_slider_pane_g2_ParamLimits

0x96af,	// (0x000495e3) main_cset6_slider_pane_g2

0xc2a7,	// (0x0004c1db) main_cset6_slider_pane_g3_ParamLimits

0xc2a7,	// (0x0004c1db) main_cset6_slider_pane_g3

0x96d7,	// (0x0004960b) main_cset6_slider_pane_g4_ParamLimits

0x96d7,	// (0x0004960b) main_cset6_slider_pane_g4

0x96e3,	// (0x00049617) main_cset6_slider_pane_g5_ParamLimits

0x96e3,	// (0x00049617) main_cset6_slider_pane_g5

0xb9e1,	// (0x0004b915) main_cset6_slider_pane_g7_ParamLimits

0xb9e1,	// (0x0004b915) main_cset6_slider_pane_g7

0xb9ed,	// (0x0004b921) main_cset6_slider_pane_g8_ParamLimits

0xb9ed,	// (0x0004b921) main_cset6_slider_pane_g8

0x891f,	// (0x00048853) main_cset6_slider_pane_g9_ParamLimits

0x891f,	// (0x00048853) main_cset6_slider_pane_g9

0x892b,	// (0x0004885f) main_cset6_slider_pane_g10_ParamLimits

0x892b,	// (0x0004885f) main_cset6_slider_pane_g10

0x8937,	// (0x0004886b) main_cset6_slider_pane_g11_ParamLimits

0x8937,	// (0x0004886b) main_cset6_slider_pane_g11

0x8943,	// (0x00048877) main_cset6_slider_pane_g12_ParamLimits

0x8943,	// (0x00048877) main_cset6_slider_pane_g12

0x894f,	// (0x00048883) main_cset6_slider_pane_g13_ParamLimits

0x894f,	// (0x00048883) main_cset6_slider_pane_g13

0x895b,	// (0x0004888f) main_cset6_slider_pane_g14_ParamLimits

0x895b,	// (0x0004888f) main_cset6_slider_pane_g14

0x96ef,	// (0x00049623) main_cset6_slider_pane_g15_ParamLimits

0x96ef,	// (0x00049623) main_cset6_slider_pane_g15

0x897f,	// (0x000488b3) main_cset6_slider_pane_g16_ParamLimits

0x897f,	// (0x000488b3) main_cset6_slider_pane_g16

0x898b,	// (0x000488bf) main_cset6_slider_pane_g17_ParamLimits

0x898b,	// (0x000488bf) main_cset6_slider_pane_g17

0x0011,

0xfad2,	// (0x0004fa06) main_cset6_slider_pane_g_ParamLimits

0xfad2,	// (0x0004fa06) main_cset6_slider_pane_g

0xc2b3,	// (0x0004c1e7) main_cset6_slider_pane_t1_ParamLimits

0xc2b3,	// (0x0004c1e7) main_cset6_slider_pane_t1

0x971f,	// (0x00049653) main_cset6_slider_pane_t2_ParamLimits

0x971f,	// (0x00049653) main_cset6_slider_pane_t2

0x974a,	// (0x0004967e) main_cset6_slider_pane_t3_ParamLimits

0x974a,	// (0x0004967e) main_cset6_slider_pane_t3

0x9775,	// (0x000496a9) main_cset6_slider_pane_t4_ParamLimits

0x9775,	// (0x000496a9) main_cset6_slider_pane_t4

0x97a0,	// (0x000496d4) main_cset6_slider_pane_t5_ParamLimits

0x97a0,	// (0x000496d4) main_cset6_slider_pane_t5

0xc2f4,	// (0x0004c228) main_cset6_slider_pane_t7_ParamLimits

0xc2f4,	// (0x0004c228) main_cset6_slider_pane_t7

0x97cb,	// (0x000496ff) main_cset6_slider_pane_t8_ParamLimits

0x97cb,	// (0x000496ff) main_cset6_slider_pane_t8

0x97ef,	// (0x00049723) main_cset6_slider_pane_t9_ParamLimits

0x97ef,	// (0x00049723) main_cset6_slider_pane_t9

0x9813,	// (0x00049747) main_cset6_slider_pane_t10_ParamLimits

0x9813,	// (0x00049747) main_cset6_slider_pane_t10

0x9837,	// (0x0004976b) main_cset6_slider_pane_t11_ParamLimits

0x9837,	// (0x0004976b) main_cset6_slider_pane_t11

0xc32a,	// (0x0004c25e) main_cset6_slider_pane_t14_ParamLimits

0xc32a,	// (0x0004c25e) main_cset6_slider_pane_t14

0xc363,	// (0x0004c297) main_cset6_slider_pane_t15_ParamLimits

0xc363,	// (0x0004c297) main_cset6_slider_pane_t15

0x000b,

0xfaf7,	// (0x0004fa2b) main_cset6_slider_pane_t_ParamLimits

0xfaf7,	// (0x0004fa2b) main_cset6_slider_pane_t

0xbac0,	// (0x0004b9f4) cset_slider_pane_g1_copy1

0xbac9,	// (0x0004b9fd) cset_slider_pane_g2_copy1

0xbad2,	// (0x0004ba06) cset_slider_pane_g3_copy1

0xadb3,	// (0x0004ace7) bg_popup_sub_pane_cp011_copy1

0xbb7b,	// (0x0004baaf) main_cset_text_pane_g1_copy1

0xbb83,	// (0x0004bab7) main_cset_text_pane_t1_copy1

0xbb91,	// (0x0004bac5) main_cset_text_pane_t2_copy1

0xbb9f,	// (0x0004bad3) main_cset_text_pane_t3_copy1

0xbbad,	// (0x0004bae1) main_cset_text_pane_t4_copy1

0xbbbb,	// (0x0004baef) main_cset_text_pane_t5_copy1

0xbbc9,	// (0x0004bafd) main_cset_text_pane_t6_copy1

0xbbd7,	// (0x0004bb0b) main_cset_text_pane_t7_copy1

0x985b,	// (0x0004978f) main_cset_text2_pane_t1_copy1

0xadb3,	// (0x0004ace7) main_ncimui_pane

0x554c,	// (0x00045480) popup_query_ncimui_window_ParamLimits

0x554c,	// (0x00045480) popup_query_ncimui_window

0xb234,	// (0x0004b168) field_cale_ev2_pane_g4_ParamLimits

0xb234,	// (0x0004b168) field_cale_ev2_pane_g4

0x7b8b,	// (0x00047abf) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7b8b,	// (0x00047abf) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7dc,	// (0x0004f710) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7dc,	// (0x0004f710) cell_video_dialer_keypad_pane_g

0x7ba3,	// (0x00047ad7) cell_video_dialer_keypad_pane_t1

0xadb3,	// (0x0004ace7) bg_popup_window_pane_cp012

0xe78a,	// (0x0004e6be) heading_pane_cp06

0xc48b,	// (0x0004c3bf) ncim_query_content_pane

0xadb3,	// (0x0004ace7) bg_popup_heading_pane_cp01

0xc493,	// (0x0004c3c7) ncim_heading_pane_t1

0xc4a1,	// (0x0004c3d5) ncim_indicator_popup_pane

0xc4b3,	// (0x0004c3e7) ncim_query_button_pane

0xc4c7,	// (0x0004c3fb) ncim_query_content_pane_t1

0xc4d9,	// (0x0004c40d) ncim_query_content_pane_t2

0x0005,

0xfb36,	// (0x0004fa6a) ncim_query_content_pane_t

0xc513,	// (0x0004c447) ncim_query_list_pane

0xc525,	// (0x0004c459) ncim_query_popup_pane

0xc4a1,	// (0x0004c3d5) ncim_indicator_popup_pane_ParamLimits

0x9970,	// (0x000498a4) ncim_query_content_pane_g1_ParamLimits

0x9970,	// (0x000498a4) ncim_query_content_pane_g1

0xc4c7,	// (0x0004c3fb) ncim_query_content_pane_t1_ParamLimits

0xc4d9,	// (0x0004c40d) ncim_query_content_pane_t2_ParamLimits

0x997c,	// (0x000498b0) ncim_query_content_pane_t3_ParamLimits

0x997c,	// (0x000498b0) ncim_query_content_pane_t3

0x99a4,	// (0x000498d8) ncim_query_content_pane_t4_ParamLimits

0x99a4,	// (0x000498d8) ncim_query_content_pane_t4

0x99cc,	// (0x00049900) ncim_query_content_pane_t5_ParamLimits

0x99cc,	// (0x00049900) ncim_query_content_pane_t5

0xc4eb,	// (0x0004c41f) ncim_query_content_pane_t6_ParamLimits

0xc4eb,	// (0x0004c41f) ncim_query_content_pane_t6

0xfb36,	// (0x0004fa6a) ncim_query_content_pane_t_ParamLimits

0xc513,	// (0x0004c447) ncim_query_list_pane_ParamLimits

0xc525,	// (0x0004c459) ncim_query_popup_pane_ParamLimits

0xc539,	// (0x0004c46d) wait_bar_pane_cp04

0xadb3,	// (0x0004ace7) input_focus_pane_cp011

0xc541,	// (0x0004c475) ncim_query_popup_pane_t1

0xc54f,	// (0x0004c483) ncim_list_query_list_pane_ParamLimits

0xc54f,	// (0x0004c483) ncim_list_query_list_pane

0xadb3,	// (0x0004ace7) bg_button_pane_cp027

0xc55c,	// (0x0004c490) ncim_query_button_pane_g1

0xadb3,	// (0x0004ace7) list_highlight_pane_cp012

0xc566,	// (0x0004c49a) ncim_list_query_list_pane_g1

0xc56e,	// (0x0004c4a2) ncim_list_query_list_pane_t1

0xb7fb,	// (0x0004b72f) cam4_indicators_pane_g3_ParamLimits

0xb7fb,	// (0x0004b72f) cam4_indicators_pane_g3

0x828e,	// (0x000481c2) vid4_indicators_pane_g5_ParamLimits

0x828e,	// (0x000481c2) vid4_indicators_pane_g5

0xd791,	// (0x0004d6c5) vid4_progress_pane_g5_ParamLimits

0xd791,	// (0x0004d6c5) vid4_progress_pane_g5

0x9889,	// (0x000497bd) main_ncimui_pane_g1

0x98df,	// (0x00049813) ncimui_group_query_pane_ParamLimits

0x98df,	// (0x00049813) ncimui_group_query_pane

0x991b,	// (0x0004984f) ncimui_list_pane_ParamLimits

0x991b,	// (0x0004984f) ncimui_list_pane

0x993c,	// (0x00049870) ncimui_text_pane_ParamLimits

0x993c,	// (0x00049870) ncimui_text_pane

0x99f4,	// (0x00049928) ncimui_text_pane_t1_ParamLimits

0x99f4,	// (0x00049928) ncimui_text_pane_t1

0xc57c,	// (0x0004c4b0) ncimui_list_single_graphic_pane_ParamLimits

0xc57c,	// (0x0004c4b0) ncimui_list_single_graphic_pane

0x9a12,	// (0x00049946) ncimui_query_pane_ParamLimits

0x9a12,	// (0x00049946) ncimui_query_pane

0xadb3,	// (0x0004ace7) list_highlight_pane_cp013

0xc58c,	// (0x0004c4c0) ncim_list_query_list_pane_t1_copy1

0xc566,	// (0x0004c49a) ncim_list_single_graphic_pane_g1

0xc59a,	// (0x0004c4ce) ncim_query_button_pane_cp01

0xc5a6,	// (0x0004c4da) ncim_query_entry_pane_ParamLimits

0xc5a6,	// (0x0004c4da) ncim_query_entry_pane

0xc5b9,	// (0x0004c4ed) ncimui_query_pane_g1

0xc5c5,	// (0x0004c4f9) ncimui_query_pane_t1_ParamLimits

0xc5c5,	// (0x0004c4f9) ncimui_query_pane_t1

0xf0d2,	// (0x0004f006) input_focus_pane_cp012

0xc5de,	// (0x0004c512) ncim_query_entry_pane_t1

0xdf25,	// (0x0004de59) main_im_pane_ParamLimits

0xf0d2,	// (0x0004f006) main_mobtv_pane_ParamLimits

0xf0d2,	// (0x0004f006) main_mobtv_pane

0x9707,	// (0x0004963b) main_cset6_slider_pane_g18_ParamLimits

0x9707,	// (0x0004963b) main_cset6_slider_pane_g18

0x9713,	// (0x00049647) main_cset6_slider_pane_g19_ParamLimits

0x9713,	// (0x00049647) main_cset6_slider_pane_g19

0xc5f0,	// (0x0004c524) bg_main_mobtv_pane_ParamLimits

0xc5f0,	// (0x0004c524) bg_main_mobtv_pane

0x9a25,	// (0x00049959) main_mobtv_info_pane

0x9a2e,	// (0x00049962) main_mobtv_loading_pane_ParamLimits

0x9a2e,	// (0x00049962) main_mobtv_loading_pane

0xc5fe,	// (0x0004c532) main_mobtv_pg_channel_list_pane

0xc608,	// (0x0004c53c) main_mobtv_pg_hdr_pane

0x9a3b,	// (0x0004996f) main_mobtv_programe_curr_pane_ParamLimits

0x9a3b,	// (0x0004996f) main_mobtv_programe_curr_pane

0x9a48,	// (0x0004997c) main_mobtv_programe_next_pane_ParamLimits

0x9a48,	// (0x0004997c) main_mobtv_programe_next_pane

0xc611,	// (0x0004c545) popup_mobtv_noti_window

0x6446,	// (0x0004637a) main_tv_pg_hdr_pane_g1

0xc619,	// (0x0004c54d) main_tv_pg_hdr_pane_g2

0xc621,	// (0x0004c555) main_tv_pg_hdr_pane_g3

0xc629,	// (0x0004c55d) main_tv_pg_hdr_pane_g4

0xc631,	// (0x0004c565) main_tv_pg_hdr_pane_g5

0xc63b,	// (0x0004c56f) main_tv_pg_hdr_pane_g6

0xc645,	// (0x0004c579) main_tv_pg_hdr_pane_g7

0xc64f,	// (0x0004c583) main_tv_pg_hdr_pane_g8

0xc659,	// (0x0004c58d) main_tv_pg_hdr_pane_g9

0xc663,	// (0x0004c597) main_tv_pg_hdr_pane_g10

0xc66d,	// (0x0004c5a1) main_tv_pg_hdr_pane_g11

0x000a,

0xfb43,	// (0x0004fa77) main_tv_pg_hdr_pane_g

0xc677,	// (0x0004c5ab) main_tv_pg_hdr_pane_t1

0xc685,	// (0x0004c5b9) main_tv_pg_hdr_pane_t2

0xc693,	// (0x0004c5c7) main_tv_pg_hdr_pane_t3

0xc6a3,	// (0x0004c5d7) main_tv_pg_hdr_pane_t4

0xc6b3,	// (0x0004c5e7) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5a,	// (0x0004fa8e) main_tv_pg_hdr_pane_t

0xc6c3,	// (0x0004c5f7) single_mobtv_pg_channel_pane_ParamLimits

0xc6c3,	// (0x0004c5f7) single_mobtv_pg_channel_pane

0xc6d5,	// (0x0004c609) single_mobtv_pg_channel_table_pane

0xc6de,	// (0x0004c612) single_mobtv_pg_channel_thumb_pane

0xc6e7,	// (0x0004c61b) single_tv_pg_channel_pane_g1

0xc6f0,	// (0x0004c624) single_tv_pg_channel_pane_g2

0x0001,

0xfb65,	// (0x0004fa99) single_tv_pg_channel_pane_g

0x671d,	// (0x00046651) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x671d,	// (0x00046651) bg_single_mobtv_pg_channel_thumb_pane

0xc6f9,	// (0x0004c62d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc6f9,	// (0x0004c62d) single_mobtv_pg_channel_thumb_pane_g1

0xc707,	// (0x0004c63b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc707,	// (0x0004c63b) single_mobtv_pg_channel_thumb_pane_g2

0xc713,	// (0x0004c647) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc713,	// (0x0004c647) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6a,	// (0x0004fa9e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6a,	// (0x0004fa9e) single_mobtv_pg_channel_thumb_pane_g

0xc71f,	// (0x0004c653) single_mobtv_pg_channel_thumb_pane_t1

0xc72d,	// (0x0004c661) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb71,	// (0x0004faa5) single_mobtv_pg_channel_thumb_pane_t

0x6446,	// (0x0004637a) bg_single_mobtv_pg_channel_table_pane_g1

0x6446,	// (0x0004637a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf62d,	// (0x0004f561) bg_single_mobtv_pg_channel_table_pane_g

0xc73b,	// (0x0004c66f) single_mobtv_pg_channel_table_pane_t1

0xc749,	// (0x0004c67d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb76,	// (0x0004faaa) single_mobtv_pg_channel_table_pane_t

0x9a5d,	// (0x00049991) main_mobtv_info_pane_g1_ParamLimits

0x9a5d,	// (0x00049991) main_mobtv_info_pane_g1

0x9a7b,	// (0x000499af) main_mobtv_info_pane_t1_ParamLimits

0x9a7b,	// (0x000499af) main_mobtv_info_pane_t1

0x9af3,	// (0x00049a27) main_mobtv_info_pane_t2_ParamLimits

0x9af3,	// (0x00049a27) main_mobtv_info_pane_t2

0x0002,

0xfb80,	// (0x0004fab4) main_mobtv_info_pane_t_ParamLimits

0xfb80,	// (0x0004fab4) main_mobtv_info_pane_t

0x9b82,	// (0x00049ab6) wait_bar_pane_cp05

0x9b94,	// (0x00049ac8) main_mobtv_loading_pane_g1_ParamLimits

0x9b94,	// (0x00049ac8) main_mobtv_loading_pane_g1

0x9ba7,	// (0x00049adb) main_mobtv_loading_pane_g2_ParamLimits

0x9ba7,	// (0x00049adb) main_mobtv_loading_pane_g2

0x9bb3,	// (0x00049ae7) main_mobtv_loading_pane_g3_ParamLimits

0x9bb3,	// (0x00049ae7) main_mobtv_loading_pane_g3

0x0002,

0xfb87,	// (0x0004fabb) main_mobtv_loading_pane_g_ParamLimits

0xfb87,	// (0x0004fabb) main_mobtv_loading_pane_g

0xc757,	// (0x0004c68b) main_mobtv_loading_pane_t1_ParamLimits

0xc757,	// (0x0004c68b) main_mobtv_loading_pane_t1

0xc76f,	// (0x0004c6a3) main_mobtv_loading_pane_t2_ParamLimits

0xc76f,	// (0x0004c6a3) main_mobtv_loading_pane_t2

0x0001,

0xfb8e,	// (0x0004fac2) main_mobtv_loading_pane_t_ParamLimits

0xfb8e,	// (0x0004fac2) main_mobtv_loading_pane_t

0x9bc6,	// (0x00049afa) wait_bar_pane_cp06_ParamLimits

0x9bc6,	// (0x00049afa) wait_bar_pane_cp06

0xc793,	// (0x0004c6c7) main_mobtv_programe_curr_pane_t1

0xc7a1,	// (0x0004c6d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb93,	// (0x0004fac7) main_mobtv_programe_curr_pane_t

0xc7af,	// (0x0004c6e3) main_mobtv_programe_next_pane_t1

0xc7bd,	// (0x0004c6f1) main_mobtv_programe_next_pane_t2

0xc7cb,	// (0x0004c6ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfb98,	// (0x0004facc) main_mobtv_programe_next_pane_t

0xadb3,	// (0x0004ace7) bg_popup_mobtv_noti_window_pane

0xc7d9,	// (0x0004c70d) popup_mobtv_noti_window_g1

0xc7e1,	// (0x0004c715) popup_mobtv_noti_window_t1

0xc7ef,	// (0x0004c723) popup_mobtv_noti_window_t2

0x0001,

0xfb9f,	// (0x0004fad3) popup_mobtv_noti_window_t

0x6446,	// (0x0004637a) bg_popup_mobtv_noti_window_pane_g1

0xadb3,	// (0x0004ace7) sc_clock_pane

0xadb3,	// (0x0004ace7) main_fs_bigclock_pane

0x935a,	// (0x0004928e) blid2_tripm_pane_t4_ParamLimits

0x935a,	// (0x0004928e) blid2_tripm_pane_t4

0x9bd5,	// (0x00049b09) sc_clock_pane_g1_ParamLimits

0x9bd5,	// (0x00049b09) sc_clock_pane_g1

0x9be7,	// (0x00049b1b) sc_clock_pane_t1_ParamLimits

0x9be7,	// (0x00049b1b) sc_clock_pane_t1

0x9c09,	// (0x00049b3d) sc_clock_pane_t2_ParamLimits

0x9c09,	// (0x00049b3d) sc_clock_pane_t2

0x9c21,	// (0x00049b55) sc_clock_pane_t3_ParamLimits

0x9c21,	// (0x00049b55) sc_clock_pane_t3

0x0004,

0xfba4,	// (0x0004fad8) sc_clock_pane_t_ParamLimits

0xfba4,	// (0x0004fad8) sc_clock_pane_t

0xa5e9,	// (0x0004a51d) main_fs_bigclock_indicator_pane_ParamLimits

0xa5e9,	// (0x0004a51d) main_fs_bigclock_indicator_pane

0x66b2,	// (0x000465e6) main_fs_bigclock_pane_g1_ParamLimits

0x66b2,	// (0x000465e6) main_fs_bigclock_pane_g1

0xa5f5,	// (0x0004a529) main_fs_bigclock_pane_t1_ParamLimits

0xa5f5,	// (0x0004a529) main_fs_bigclock_pane_t1

0xa607,	// (0x0004a53b) main_fs_bigclock_pane_t2_ParamLimits

0xa607,	// (0x0004a53b) main_fs_bigclock_pane_t2

0xa61b,	// (0x0004a54f) main_fs_bigclock_pane_t3_ParamLimits

0xa61b,	// (0x0004a54f) main_fs_bigclock_pane_t3

0x0002,

0xfda3,	// (0x0004fcd7) main_fs_bigclock_pane_t_ParamLimits

0xfda3,	// (0x0004fcd7) main_fs_bigclock_pane_t

0xd2a4,	// (0x0004d1d8) main_fs_bigclock_indicator_pane_g1

0xc4bb,	// (0x0004c3ef) ncim_query_content_pane_g2_ParamLimits

0xc4bb,	// (0x0004c3ef) ncim_query_content_pane_g2

0x0001,

0xfb31,	// (0x0004fa65) ncim_query_content_pane_g_ParamLimits

0xfb31,	// (0x0004fa65) ncim_query_content_pane_g

0x9c3a,	// (0x00049b6e) sc_clock_pane_t4_ParamLimits

0x9c3a,	// (0x00049b6e) sc_clock_pane_t4

0xf0d2,	// (0x0004f006) main_radioblah_pane

0xb72f,	// (0x0004b663) cell_call4_button_pane_t1_copy1_ParamLimits

0xb72f,	// (0x0004b663) cell_call4_button_pane_t1_copy1

0x9891,	// (0x000497c5) main_ncimui_pane_t1_ParamLimits

0x9891,	// (0x000497c5) main_ncimui_pane_t1

0x98ab,	// (0x000497df) main_ncimui_pane_t2_ParamLimits

0x98ab,	// (0x000497df) main_ncimui_pane_t2

0x0002,

0xfb2a,	// (0x0004fa5e) main_ncimui_pane_t_ParamLimits

0xfb2a,	// (0x0004fa5e) main_ncimui_pane_t

0xc7fd,	// (0x0004c731) main_radioblah_anim_pane_ParamLimits

0xc7fd,	// (0x0004c731) main_radioblah_anim_pane

0xc80e,	// (0x0004c742) main_radioblah_info_pane_ParamLimits

0xc80e,	// (0x0004c742) main_radioblah_info_pane

0xc822,	// (0x0004c756) main_radioblah_pane_t1_ParamLimits

0xc822,	// (0x0004c756) main_radioblah_pane_t1

0xc83e,	// (0x0004c772) main_radioblah_pane_t2_ParamLimits

0xc83e,	// (0x0004c772) main_radioblah_pane_t2

0x0003,

0xfbc5,	// (0x0004faf9) main_radioblah_pane_t_ParamLimits

0xfbc5,	// (0x0004faf9) main_radioblah_pane_t

0x9e06,	// (0x00049d3a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9e06,	// (0x00049d3a) main_radioblah_rocker_ctrl_pane

0xc886,	// (0x0004c7ba) main_radioblah_info_pane_t1_ParamLimits

0xc886,	// (0x0004c7ba) main_radioblah_info_pane_t1

0x9e5e,	// (0x00049d92) main_radioblah_info_pane_t2_ParamLimits

0x9e5e,	// (0x00049d92) main_radioblah_info_pane_t2

0x0003,

0xfbce,	// (0x0004fb02) main_radioblah_info_pane_t_ParamLimits

0xfbce,	// (0x0004fb02) main_radioblah_info_pane_t

0x6446,	// (0x0004637a) main_radioblah_rocker_ctrl_pane_g1

0x9f0e,	// (0x00049e42) main_radioblah_rocker_ctrl_pane_g2

0x9f16,	// (0x00049e4a) main_radioblah_rocker_ctrl_pane_g3

0x9f1e,	// (0x00049e52) main_radioblah_rocker_ctrl_pane_g4

0x9f26,	// (0x00049e5a) main_radioblah_rocker_ctrl_pane_g5

0x9f2e,	// (0x00049e62) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd7,	// (0x0004fb0b) main_radioblah_rocker_ctrl_pane_g

0x985b,	// (0x0004978f) main_cset_text2_pane_t1_copy1_ParamLimits

0xb7b9,	// (0x0004b6ed) cam4_image_uncrop_qvga_pane

0xb824,	// (0x0004b758) vid4_image_uncrop_qcif_pane

0xd7f2,	// (0x0004d726) cam6_image_uncrop_qvga_pane_ParamLimits

0xd7f2,	// (0x0004d726) cam6_image_uncrop_qvga_pane

0xc115,	// (0x0004c049) vid6_image_uncrop_qcif_pane_ParamLimits

0xc115,	// (0x0004c049) vid6_image_uncrop_qcif_pane

0xadb3,	// (0x0004ace7) bg_popup_preview_window_pane_cp03

0xc46d,	// (0x0004c3a1) list_cset_text2_pane

0xc475,	// (0x0004c3a9) main_cset6_text2_pane_g1

0xc47d,	// (0x0004c3b1) main_cset6_text2_pane_t1

0x9f36,	// (0x00049e6a) list_cset_text2_pane_t1_ParamLimits

0x9f36,	// (0x00049e6a) list_cset_text2_pane_t1

0xf0d2,	// (0x0004f006) main_radioblah_pane_ParamLimits

0x9b6e,	// (0x00049aa2) main_mobtv_info_pane_t3_ParamLimits

0x9b6e,	// (0x00049aa2) main_mobtv_info_pane_t3

0x9df4,	// (0x00049d28) main_radioblah_pane_g1

0x9e2e,	// (0x00049d62) main_radioblah_info_pane_g1

0x9eb3,	// (0x00049de7) main_radioblah_info_pane_t3_ParamLimits

0x9eb3,	// (0x00049de7) main_radioblah_info_pane_t3

0x3311,	// (0x00043245) highlight_cell_cale_month_pane_ParamLimits

0x3311,	// (0x00043245) highlight_cell_cale_month_pane

0xadb3,	// (0x0004ace7) main_phob_fisheye_pane

0x6f97,	// (0x00046ecb) scroll_pane_cp0031_ParamLimits

0x6f97,	// (0x00046ecb) scroll_pane_cp0031

0xc223,	// (0x0004c157) wait_bar_pane_cp08_ParamLimits

0x968e,	// (0x000495c2) cset_list_set_pane_copy1_ParamLimits

0xc8c0,	// (0x0004c7f4) highlight_cell_cale_month_pane_g1

0x9f4f,	// (0x00049e83) highlight_cell_cale_month_pane_t1

0xbe4b,	// (0x0004bd7f) list_gen_pane_cp01

0xb9cc,	// (0x0004b900) scroll_pane_01

0xc8c8,	// (0x0004c7fc) list_single_double_fisheye_pane

0x11ff,	// (0x00041133) list_double_fisheye_pane_g1_ParamLimits

0x11ff,	// (0x00041133) list_double_fisheye_pane_g1

0x120b,	// (0x0004113f) list_double_fisheye_pane_g2_ParamLimits

0x120b,	// (0x0004113f) list_double_fisheye_pane_g2

0x9f5d,	// (0x00049e91) list_double_fisheye_pane_g3_ParamLimits

0x9f5d,	// (0x00049e91) list_double_fisheye_pane_g3

0x0004,

0xfbe4,	// (0x0004fb18) list_double_fisheye_pane_g_ParamLimits

0xfbe4,	// (0x0004fb18) list_double_fisheye_pane_g

0x123c,	// (0x00041170) list_double_fisheye_pane_t1_ParamLimits

0x123c,	// (0x00041170) list_double_fisheye_pane_t1

0x1257,	// (0x0004118b) list_double_fisheye_pane_t2_ParamLimits

0x1257,	// (0x0004118b) list_double_fisheye_pane_t2

0x0001,

0xfbef,	// (0x0004fb23) list_double_fisheye_pane_t_ParamLimits

0xfbef,	// (0x0004fb23) list_double_fisheye_pane_t

0xadb3,	// (0x0004ace7) main_call5_pane

0x9c65,	// (0x00049b99) sc_swipe_pane_ParamLimits

0x9c65,	// (0x00049b99) sc_swipe_pane

0x9f7c,	// (0x00049eb0) call5_image_pane_ParamLimits

0x9f7c,	// (0x00049eb0) call5_image_pane

0x9f99,	// (0x00049ecd) call5_swipe_1_pane_ParamLimits

0x9f99,	// (0x00049ecd) call5_swipe_1_pane

0x9fac,	// (0x00049ee0) call5_swipe_2_pane_ParamLimits

0x9fac,	// (0x00049ee0) call5_swipe_2_pane

0x9fd7,	// (0x00049f0b) popup_call5_audio_first_window_ParamLimits

0x9fd7,	// (0x00049f0b) popup_call5_audio_first_window

0x671d,	// (0x00046651) call5_swipe_1_pane_g1_ParamLimits

0x671d,	// (0x00046651) call5_swipe_1_pane_g1

0xc8d1,	// (0x0004c805) call5_swipe_1_pane_g2_ParamLimits

0xc8d1,	// (0x0004c805) call5_swipe_1_pane_g2

0x0001,

0xfbf4,	// (0x0004fb28) call5_swipe_1_pane_g_ParamLimits

0xfbf4,	// (0x0004fb28) call5_swipe_1_pane_g

0xc8dd,	// (0x0004c811) call5_swipe_1_pane_t1_ParamLimits

0xc8dd,	// (0x0004c811) call5_swipe_1_pane_t1

0x671d,	// (0x00046651) call5_swipe_2_pane_g1_ParamLimits

0x671d,	// (0x00046651) call5_swipe_2_pane_g1

0xc8f2,	// (0x0004c826) call5_swipe_2_pane_g2_ParamLimits

0xc8f2,	// (0x0004c826) call5_swipe_2_pane_g2

0x0001,

0xfbf9,	// (0x0004fb2d) call5_swipe_2_pane_g_ParamLimits

0xfbf9,	// (0x0004fb2d) call5_swipe_2_pane_g

0xc8fe,	// (0x0004c832) call5_swipe_2_pane_t1_ParamLimits

0xc8fe,	// (0x0004c832) call5_swipe_2_pane_t1

0xc913,	// (0x0004c847) sc_swipe_pane_g1_ParamLimits

0xc913,	// (0x0004c847) sc_swipe_pane_g1

0xc920,	// (0x0004c854) sc_swipe_pane_g2_ParamLimits

0xc920,	// (0x0004c854) sc_swipe_pane_g2

0x0001,

0xfbfe,	// (0x0004fb32) sc_swipe_pane_g_ParamLimits

0xfbfe,	// (0x0004fb32) sc_swipe_pane_g

0xc92c,	// (0x0004c860) sc_swipe_pane_t1_ParamLimits

0xc92c,	// (0x0004c860) sc_swipe_pane_t1

0xadb3,	// (0x0004ace7) main_cmail_launcher_pane

0x9fe8,	// (0x00049f1c) aid_size_cell_cmail_l_ParamLimits

0x9fe8,	// (0x00049f1c) aid_size_cell_cmail_l

0xa002,	// (0x00049f36) grid_cmail_l_pane_ParamLimits

0xa002,	// (0x00049f36) grid_cmail_l_pane

0xa01d,	// (0x00049f51) cell_cmail_l_pane_ParamLimits

0xa01d,	// (0x00049f51) cell_cmail_l_pane

0xa043,	// (0x00049f77) cell_cmail_l_pane_g1_ParamLimits

0xa043,	// (0x00049f77) cell_cmail_l_pane_g1

0xa04f,	// (0x00049f83) cell_cmail_l_pane_t1_ParamLimits

0xa04f,	// (0x00049f83) cell_cmail_l_pane_t1

0xc941,	// (0x0004c875) cell_cmail_l_pane_t2_ParamLimits

0xc941,	// (0x0004c875) cell_cmail_l_pane_t2

0x0001,

0xfc03,	// (0x0004fb37) cell_cmail_l_pane_t_ParamLimits

0xfc03,	// (0x0004fb37) cell_cmail_l_pane_t

0xf0d2,	// (0x0004f006) grid_highlight_pane_cp018_ParamLimits

0xf0d2,	// (0x0004f006) grid_highlight_pane_cp018

0x18fa,	// (0x0004182e) main2_pane_ParamLimits

0x18fa,	// (0x0004182e) main2_pane

0xdfbe,	// (0x0004def2) popup_sp_fs_action_menu_bg_pane_g1

0xdfc6,	// (0x0004defa) popup_sp_fs_action_menu_bg_pane_g2

0xdfce,	// (0x0004df02) popup_sp_fs_action_menu_bg_pane_g3

0xdfd6,	// (0x0004df0a) popup_sp_fs_action_menu_bg_pane_g4

0xdfde,	// (0x0004df12) popup_sp_fs_action_menu_bg_pane_g5

0xdfe6,	// (0x0004df1a) popup_sp_fs_action_menu_bg_pane_g6

0xdfee,	// (0x0004df22) popup_sp_fs_action_menu_bg_pane_g7

0xdff6,	// (0x0004df2a) popup_sp_fs_action_menu_bg_pane_g8

0xdffe,	// (0x0004df32) popup_sp_fs_action_menu_bg_pane_g9

0xe006,	// (0x0004df3a) popup_sp_fs_action_menu_bg_pane_g10

0xe006,	// (0x0004df3a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0004f0e0) popup_sp_fs_action_menu_bg_pane_g

0xaf05,	// (0x0004ae39) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x2_t3_g3_g1

0xaf11,	// (0x0004ae45) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaf11,	// (0x0004ae45) list_medium_line_x2_t3_g3_g2

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t3_g3_g3

0x0002,

0xf253,	// (0x0004f187) list_medium_line_x2_t3_g3_g_ParamLimits

0xf253,	// (0x0004f187) list_medium_line_x2_t3_g3_g

0xaf29,	// (0x0004ae5d) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaf29,	// (0x0004ae5d) list_medium_line_x2_t3_g3_t1

0x0d63,	// (0x00040c97) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d63,	// (0x00040c97) list_medium_line_x2_t3_g3_t2

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25a,	// (0x0004f18e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25a,	// (0x0004f18e) list_medium_line_x2_t3_g3_t

0xaf05,	// (0x0004ae39) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x2_t3_g2_g1

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t3_g2_g2

0x0001,

0xf261,	// (0x0004f195) list_medium_line_x2_t3_g2_g_ParamLimits

0xf261,	// (0x0004f195) list_medium_line_x2_t3_g2_g

0xaf53,	// (0x0004ae87) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaf53,	// (0x0004ae87) list_medium_line_x2_t3_g2_t1

0xaf69,	// (0x0004ae9d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaf69,	// (0x0004ae9d) list_medium_line_x2_t3_g2_t2

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t3_g2_t3

0x0002,

0xf266,	// (0x0004f19a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf266,	// (0x0004f19a) list_medium_line_x2_t3_g2_t

0xaf05,	// (0x0004ae39) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x2_t4_g4_g1

0xaf7b,	// (0x0004aeaf) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaf7b,	// (0x0004aeaf) list_medium_line_x2_t4_g4_g2

0xaf11,	// (0x0004ae45) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaf11,	// (0x0004ae45) list_medium_line_x2_t4_g4_g3

0xaf87,	// (0x0004aebb) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaf87,	// (0x0004aebb) list_medium_line_x2_t4_g4_g4

0x0003,

0xf26d,	// (0x0004f1a1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf26d,	// (0x0004f1a1) list_medium_line_x2_t4_g4_g

0x0d77,	// (0x00040cab) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d77,	// (0x00040cab) list_medium_line_x2_t4_g4_t1

0x0d91,	// (0x00040cc5) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d91,	// (0x00040cc5) list_medium_line_x2_t4_g4_t2

0x0da7,	// (0x00040cdb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0da7,	// (0x00040cdb) list_medium_line_x2_t4_g4_t3

0xaf93,	// (0x0004aec7) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaf93,	// (0x0004aec7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf276,	// (0x0004f1aa) list_medium_line_x2_t4_g4_t_ParamLimits

0xf276,	// (0x0004f1aa) list_medium_line_x2_t4_g4_t

0xaf05,	// (0x0004ae39) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x2_t2_g4_g1

0xaf7b,	// (0x0004aeaf) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaf7b,	// (0x0004aeaf) list_medium_line_x2_t2_g4_g2

0xaf11,	// (0x0004ae45) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaf11,	// (0x0004ae45) list_medium_line_x2_t2_g4_g3

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c5,	// (0x0004f1f9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c5,	// (0x0004f1f9) list_medium_line_x2_t2_g4_g

0xafa5,	// (0x0004aed9) list_medium_line_x2_t2_g4_t1_ParamLimits

0xafa5,	// (0x0004aed9) list_medium_line_x2_t2_g4_t1

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ce,	// (0x0004f202) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ce,	// (0x0004f202) list_medium_line_x2_t2_g4_t

0xaf05,	// (0x0004ae39) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x2_t2_g3_g1

0xaf11,	// (0x0004ae45) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaf11,	// (0x0004ae45) list_medium_line_x2_t2_g3_g2

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t2_g3_g3

0x0002,

0xf253,	// (0x0004f187) list_medium_line_x2_t2_g3_g_ParamLimits

0xf253,	// (0x0004f187) list_medium_line_x2_t2_g3_g

0xafba,	// (0x0004aeee) list_medium_line_x2_t2_g3_t1_ParamLimits

0xafba,	// (0x0004aeee) list_medium_line_x2_t2_g3_t1

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d3,	// (0x0004f207) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d3,	// (0x0004f207) list_medium_line_x2_t2_g3_t

0x3440,	// (0x00043374) main_sp_fs_list_pane_ParamLimits

0x3440,	// (0x00043374) main_sp_fs_list_pane

0x344c,	// (0x00043380) sp_fs_scroll_pane_ParamLimits

0x344c,	// (0x00043380) sp_fs_scroll_pane

0x0dbc,	// (0x00040cf0) list_medium_line_x2_t3_t1

0x0dcc,	// (0x00040d00) list_medium_line_x2_t3_t2

0xaffd,	// (0x0004af31) list_medium_line_x2_t3_t3

0x0002,

0xf2ec,	// (0x0004f220) list_medium_line_x2_t3_t

0x0dda,	// (0x00040d0e) list_medium_line_x3_t4_t1

0x0dea,	// (0x00040d1e) list_medium_line_x3_t4_t2

0xb00b,	// (0x0004af3f) list_medium_line_x3_t4_t3

0xaffd,	// (0x0004af31) list_medium_line_x3_t4_t4

0x0003,

0xf2f3,	// (0x0004f227) list_medium_line_x3_t4_t

0x0df8,	// (0x00040d2c) list_medium_line_x4_t5_t1

0x0e08,	// (0x00040d3c) list_medium_line_x4_t5_t2

0xb00b,	// (0x0004af3f) list_medium_line_x4_t5_t3

0xb019,	// (0x0004af4d) list_medium_line_x4_t5_t4

0xaffd,	// (0x0004af31) list_medium_line_x4_t5_t5

0x0004,

0xf2fc,	// (0x0004f230) list_medium_line_x4_t5_t

0xaf05,	// (0x0004ae39) list_medium_line_t4_g4_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_t4_g4_g1

0xaf87,	// (0x0004aebb) list_medium_line_t4_g4_g2_ParamLimits

0xaf87,	// (0x0004aebb) list_medium_line_t4_g4_g2

0xb027,	// (0x0004af5b) list_medium_line_t4_g4_g3_ParamLimits

0xb027,	// (0x0004af5b) list_medium_line_t4_g4_g3

0xaf1d,	// (0x0004ae51) list_medium_line_t4_g4_g4_ParamLimits

0xaf1d,	// (0x0004ae51) list_medium_line_t4_g4_g4

0x0003,

0xf307,	// (0x0004f23b) list_medium_line_t4_g4_g_ParamLimits

0xf307,	// (0x0004f23b) list_medium_line_t4_g4_g

0xb033,	// (0x0004af67) list_medium_line_t4_g4_t1_ParamLimits

0xb033,	// (0x0004af67) list_medium_line_t4_g4_t1

0xb048,	// (0x0004af7c) list_medium_line_t4_g4_t2_ParamLimits

0xb048,	// (0x0004af7c) list_medium_line_t4_g4_t2

0xb05d,	// (0x0004af91) list_medium_line_t4_g4_t3_ParamLimits

0xb05d,	// (0x0004af91) list_medium_line_t4_g4_t3

0xaf3e,	// (0x0004ae72) list_medium_line_t4_g4_t4_ParamLimits

0xaf3e,	// (0x0004ae72) list_medium_line_t4_g4_t4

0x0003,

0xf310,	// (0x0004f244) list_medium_line_t4_g4_t_ParamLimits

0xf310,	// (0x0004f244) list_medium_line_t4_g4_t

0x351b,	// (0x0004344f) chi_dic_find_pane_g1

0x52df,	// (0x00045213) main_tport_pane

0xbb0c,	// (0x0004ba40) list_medium_line_plain_t1

0xbb22,	// (0x0004ba56) list_medium_line_t2_g2_g1_ParamLimits

0xbb22,	// (0x0004ba56) list_medium_line_t2_g2_g1

0xbb2e,	// (0x0004ba62) list_medium_line_t2_g2_g2_ParamLimits

0xbb2e,	// (0x0004ba62) list_medium_line_t2_g2_g2

0x0001,

0xf940,	// (0x0004f874) list_medium_line_t2_g2_g_ParamLimits

0xf940,	// (0x0004f874) list_medium_line_t2_g2_g

0x1030,	// (0x00040f64) list_medium_line_t2_g2_t1_ParamLimits

0x1030,	// (0x00040f64) list_medium_line_t2_g2_t1

0x104a,	// (0x00040f7e) list_medium_line_t2_g2_t2_ParamLimits

0x104a,	// (0x00040f7e) list_medium_line_t2_g2_t2

0x0001,

0xf945,	// (0x0004f879) list_medium_line_t2_g2_t_ParamLimits

0xf945,	// (0x0004f879) list_medium_line_t2_g2_t

0xbe54,	// (0x0004bd88) aid_sp_fs_list_icon_a_sm

0xbe5c,	// (0x0004bd90) aid_sp_fs_list_icon_d

0xbe64,	// (0x0004bd98) aid_sp_fs_text_primary

0xbe6d,	// (0x0004bda1) aid_sp_fs_text_secondary

0xbe76,	// (0x0004bdaa) list_medium_line

0xbe76,	// (0x0004bdaa) list_medium_line_g2

0xbe76,	// (0x0004bdaa) list_medium_line_g3

0xbe76,	// (0x0004bdaa) list_medium_line_plain

0xbe76,	// (0x0004bdaa) list_medium_line_plain_t2

0xbe76,	// (0x0004bdaa) list_medium_line_plain_t3

0xbe76,	// (0x0004bdaa) list_medium_line_right_icon

0xbe76,	// (0x0004bdaa) list_medium_line_right_iconx2

0xbe76,	// (0x0004bdaa) list_medium_line_t2

0xbe76,	// (0x0004bdaa) list_medium_line_t2_g2

0xbe76,	// (0x0004bdaa) list_medium_line_t2_g3

0xbe76,	// (0x0004bdaa) list_medium_line_t2_right_icon

0xbe76,	// (0x0004bdaa) list_medium_line_t2_right_iconx2

0xbe76,	// (0x0004bdaa) list_medium_line_t3

0xbe76,	// (0x0004bdaa) list_medium_line_t3_g2

0xbe76,	// (0x0004bdaa) list_medium_line_t3_g3

0xbe76,	// (0x0004bdaa) list_medium_line_t3_right_iconx2

0xbe7f,	// (0x0004bdb3) list_medium_line_t4_g4

0xbe88,	// (0x0004bdbc) list_medium_line_x2

0xbe88,	// (0x0004bdbc) list_medium_line_x2_t2_g2

0xbe88,	// (0x0004bdbc) list_medium_line_x2_t2_g3

0xbe88,	// (0x0004bdbc) list_medium_line_x2_t2_g4

0xbe88,	// (0x0004bdbc) list_medium_line_x2_t3

0xbe88,	// (0x0004bdbc) list_medium_line_x2_t3_g2

0xbe88,	// (0x0004bdbc) list_medium_line_x2_t3_g3

0xbe88,	// (0x0004bdbc) list_medium_line_x2_t3_g4

0xbe88,	// (0x0004bdbc) list_medium_line_x2_t4_g2

0xbe88,	// (0x0004bdbc) list_medium_line_x2_t4_g4

0xbe91,	// (0x0004bdc5) list_medium_line_x3

0xbe91,	// (0x0004bdc5) list_medium_line_x3_t4

0xbe91,	// (0x0004bdc5) list_medium_line_x3_t4_g4

0xbe7f,	// (0x0004bdb3) list_medium_line_x4_t4

0xbe7f,	// (0x0004bdb3) list_medium_line_x4_t4_g7

0xbe7f,	// (0x0004bdb3) list_medium_line_x4_t5

0xbe9a,	// (0x0004bdce) list_single_fs_dyc_pane_ParamLimits

0xbe9a,	// (0x0004bdce) list_single_fs_dyc_pane

0xaf05,	// (0x0004ae39) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x4_t4_g7_g1

0xc39c,	// (0x0004c2d0) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc39c,	// (0x0004c2d0) list_medium_line_x4_t4_g7_g2

0xc3a8,	// (0x0004c2dc) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc3a8,	// (0x0004c2dc) list_medium_line_x4_t4_g7_g3

0xc3b7,	// (0x0004c2eb) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc3b7,	// (0x0004c2eb) list_medium_line_x4_t4_g7_g4

0xc3c3,	// (0x0004c2f7) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc3c3,	// (0x0004c2f7) list_medium_line_x4_t4_g7_g5

0xc3d2,	// (0x0004c306) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc3d2,	// (0x0004c306) list_medium_line_x4_t4_g7_g6

0xc3e1,	// (0x0004c315) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc3e1,	// (0x0004c315) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb10,	// (0x0004fa44) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb10,	// (0x0004fa44) list_medium_line_x4_t4_g7_g

0xc3ed,	// (0x0004c321) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc3ed,	// (0x0004c321) list_medium_line_x4_t4_g7_t1

0xc402,	// (0x0004c336) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc402,	// (0x0004c336) list_medium_line_x4_t4_g7_t2

0xc417,	// (0x0004c34b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc417,	// (0x0004c34b) list_medium_line_x4_t4_g7_t3

0xc42c,	// (0x0004c360) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc42c,	// (0x0004c360) list_medium_line_x4_t4_g7_t4

0xc43e,	// (0x0004c372) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc43e,	// (0x0004c372) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1f,	// (0x0004fa53) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1f,	// (0x0004fa53) list_medium_line_x4_t4_g7_t

0xc450,	// (0x0004c384) list_single_dyc_row_pane_ParamLimits

0xc450,	// (0x0004c384) list_single_dyc_row_pane

0x9f69,	// (0x00049e9d) call5_gesture_pane_ParamLimits

0x9f69,	// (0x00049e9d) call5_gesture_pane

0x9fbf,	// (0x00049ef3) call5_windows_pane_ParamLimits

0x9fbf,	// (0x00049ef3) call5_windows_pane

0xa065,	// (0x00049f99) call5_swipe_1_pane_cp_ParamLimits

0xa065,	// (0x00049f99) call5_swipe_1_pane_cp

0xa071,	// (0x00049fa5) call5_swipe_2_pane_cp_ParamLimits

0xa071,	// (0x00049fa5) call5_swipe_2_pane_cp

0xea04,	// (0x0004e938) call5_image_pane_cp

0xa07d,	// (0x00049fb1) popup_call5_audio_first_window_cp_ParamLimits

0xa07d,	// (0x00049fb1) popup_call5_audio_first_window_cp

0xc913,	// (0x0004c847) call5_swipe_1_pane_g1_cp_ParamLimits

0xc913,	// (0x0004c847) call5_swipe_1_pane_g1_cp

0xc953,	// (0x0004c887) call5_swipe_1_pane_g2_cp

0xc92c,	// (0x0004c860) call5_swipe_1_pane_t1_cp_ParamLimits

0xc92c,	// (0x0004c860) call5_swipe_1_pane_t1_cp

0xc913,	// (0x0004c847) call5_swipe_2_pane_g1_cp_ParamLimits

0xc913,	// (0x0004c847) call5_swipe_2_pane_g1_cp

0xc95b,	// (0x0004c88f) call5_swipe_2_pane_g2_cp

0xc963,	// (0x0004c897) call5_swipe_2_pane_t1_cp_ParamLimits

0xc963,	// (0x0004c897) call5_swipe_2_pane_t1_cp

0xf0d2,	// (0x0004f006) main_sp_fs_email_pane

0xc978,	// (0x0004c8ac) main_sp_fs_listscroll_pane_te

0xc981,	// (0x0004c8b5) popup_sp_fs_action_menu_pane_ParamLimits

0xc981,	// (0x0004c8b5) popup_sp_fs_action_menu_pane

0x6446,	// (0x0004637a) bg_sp_fs_ctrlbar_pane_g1

0xc9c5,	// (0x0004c8f9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc9ce,	// (0x0004c902) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc9d7,	// (0x0004c90b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x6446,	// (0x0004637a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc08,	// (0x0004fb3c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x615f,	// (0x00046093) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x615f,	// (0x00046093) bg_sp_fs_ctrlbar_ddmenu_pane

0xc9e0,	// (0x0004c914) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc9e0,	// (0x0004c914) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc9ec,	// (0x0004c920) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc9ec,	// (0x0004c920) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc11,	// (0x0004fb45) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc11,	// (0x0004fb45) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc9f8,	// (0x0004c92c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc9f8,	// (0x0004c92c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xca12,	// (0x0004c946) list_medium_line_t2_right_icon_g1

0x1279,	// (0x000411ad) list_medium_line_t2_right_icon_t1

0x1289,	// (0x000411bd) list_medium_line_t2_right_icon_t2

0x0001,

0xfc16,	// (0x0004fb4a) list_medium_line_t2_right_icon_t

0x52bd,	// (0x000451f1) bg_sp_fs_ctrlbar_pane_ParamLimits

0x52bd,	// (0x000451f1) bg_sp_fs_ctrlbar_pane

0xa0d3,	// (0x0004a007) main_sp_fs_ctrlbar_button_pane_cp01

0xa0dd,	// (0x0004a011) main_sp_fs_ctrlbar_ddmenu_pane

0xca52,	// (0x0004c986) main_sp_fs_ctrlbar_pane_g1

0xca5e,	// (0x0004c992) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc1b,	// (0x0004fb4f) main_sp_fs_ctrlbar_pane_g

0xca6a,	// (0x0004c99e) main_sp_fs_ctrlbar_pane_t1

0x129b,	// (0x000411cf) main_sp_fs_ctrlbar_pane

0x12bf,	// (0x000411f3) main_sp_fs_listscroll_pane_te_cp01

0x12df,	// (0x00041213) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x12df,	// (0x00041213) popup_sp_fs_action_menu_pane_cp01

0xf0d2,	// (0x0004f006) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0d2,	// (0x0004f006) bg_sp_fs_highlight_list_pane_cp01

0xca7f,	// (0x0004c9b3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xca7f,	// (0x0004c9b3) sp_fs_action_menu_list_gene_pane_g1

0xca8e,	// (0x0004c9c2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xca8e,	// (0x0004c9c2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc20,	// (0x0004fb54) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc20,	// (0x0004fb54) sp_fs_action_menu_list_gene_pane_g

0xca9b,	// (0x0004c9cf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xca9b,	// (0x0004c9cf) sp_fs_action_menu_list_gene_pane_t1

0xcab3,	// (0x0004c9e7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcab3,	// (0x0004c9e7) sp_fs_action_menu_list_gene_pane

0xcad2,	// (0x0004ca06) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcad2,	// (0x0004ca06) popup_sp_fs_action_menu_bg_pane

0xcae0,	// (0x0004ca14) sp_fs_action_menu_list_pane_ParamLimits

0xcae0,	// (0x0004ca14) sp_fs_action_menu_list_pane

0xcb00,	// (0x0004ca34) sp_fs_scroll_pane_cp01_ParamLimits

0xcb00,	// (0x0004ca34) sp_fs_scroll_pane_cp01

0x12f9,	// (0x0004122d) list_medium_line_plain_t2_t1

0x1309,	// (0x0004123d) list_medium_line_plain_t2_t2

0x0001,

0xfc25,	// (0x0004fb59) list_medium_line_plain_t2_t

0x1319,	// (0x0004124d) list_medium_line_plain_t3_t1

0x1329,	// (0x0004125d) list_medium_line_plain_t3_t2

0x1337,	// (0x0004126b) list_medium_line_plain_t3_t3

0x0002,

0xfc2a,	// (0x0004fb5e) list_medium_line_plain_t3_t

0xaf05,	// (0x0004ae39) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x2_t2_g2_g1

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t2_g2_g2

0x0001,

0xf261,	// (0x0004f195) list_medium_line_x2_t2_g2_g_ParamLimits

0xf261,	// (0x0004f195) list_medium_line_x2_t2_g2_g

0xb033,	// (0x0004af67) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb033,	// (0x0004af67) list_medium_line_x2_t2_g2_t1

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc31,	// (0x0004fb65) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc31,	// (0x0004fb65) list_medium_line_x2_t2_g2_t

0xaf05,	// (0x0004ae39) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x2_t4_g2_g1

0xcb26,	// (0x0004ca5a) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcb26,	// (0x0004ca5a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc36,	// (0x0004fb6a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc36,	// (0x0004fb6a) list_medium_line_x2_t4_g2_g

0x1345,	// (0x00041279) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1345,	// (0x00041279) list_medium_line_x2_t4_g2_t1

0x135c,	// (0x00041290) list_medium_line_x2_t4_g2_t2_ParamLimits

0x135c,	// (0x00041290) list_medium_line_x2_t4_g2_t2

0x1371,	// (0x000412a5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1371,	// (0x000412a5) list_medium_line_x2_t4_g2_t3

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc3b,	// (0x0004fb6f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc3b,	// (0x0004fb6f) list_medium_line_x2_t4_g2_t

0xcb38,	// (0x0004ca6c) list_medium_line_t3_right_iconx2_g1

0xca12,	// (0x0004c946) list_medium_line_t3_right_iconx2_g2

0x1383,	// (0x000412b7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc44,	// (0x0004fb78) list_medium_line_t3_right_iconx2_g

0x138d,	// (0x000412c1) list_medium_line_t3_right_iconx2_t1

0x139d,	// (0x000412d1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc4b,	// (0x0004fb7f) list_medium_line_t3_right_iconx2_t

0xaf05,	// (0x0004ae39) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x3_t4_g4_g1

0xaf11,	// (0x0004ae45) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaf11,	// (0x0004ae45) list_medium_line_x3_t4_g4_g2

0xaf87,	// (0x0004aebb) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaf87,	// (0x0004aebb) list_medium_line_x3_t4_g4_g3

0xcb40,	// (0x0004ca74) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcb40,	// (0x0004ca74) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc50,	// (0x0004fb84) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc50,	// (0x0004fb84) list_medium_line_x3_t4_g4_g

0x13ab,	// (0x000412df) list_medium_line_x3_t4_g4_t1_ParamLimits

0x13ab,	// (0x000412df) list_medium_line_x3_t4_g4_t1

0x13c2,	// (0x000412f6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x13c2,	// (0x000412f6) list_medium_line_x3_t4_g4_t2

0xb048,	// (0x0004af7c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb048,	// (0x0004af7c) list_medium_line_x3_t4_g4_t3

0xcb4c,	// (0x0004ca80) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcb4c,	// (0x0004ca80) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc59,	// (0x0004fb8d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc59,	// (0x0004fb8d) list_medium_line_x3_t4_g4_t

0x13dd,	// (0x00041311) list_single_dyc_row_text_pane_t1_ParamLimits

0x13dd,	// (0x00041311) list_single_dyc_row_text_pane_t1

0x1426,	// (0x0004135a) list_single_dyc_row_text_pane_t2_ParamLimits

0x1426,	// (0x0004135a) list_single_dyc_row_text_pane_t2

0xcb69,	// (0x0004ca9d) list_single_dyc_row_text_pane_t3_ParamLimits

0xcb69,	// (0x0004ca9d) list_single_dyc_row_text_pane_t3

0x0002,

0xfc62,	// (0x0004fb96) list_single_dyc_row_text_pane_t_ParamLimits

0xfc62,	// (0x0004fb96) list_single_dyc_row_text_pane_t

0xcb7b,	// (0x0004caaf) list_single_dyc_row_pane_g1_ParamLimits

0xcb7b,	// (0x0004caaf) list_single_dyc_row_pane_g1

0xcb87,	// (0x0004cabb) list_single_dyc_row_pane_g2_ParamLimits

0xcb87,	// (0x0004cabb) list_single_dyc_row_pane_g2

0xcb93,	// (0x0004cac7) list_single_dyc_row_pane_g3_ParamLimits

0xcb93,	// (0x0004cac7) list_single_dyc_row_pane_g3

0xcb9f,	// (0x0004cad3) list_single_dyc_row_pane_g4_ParamLimits

0xcb9f,	// (0x0004cad3) list_single_dyc_row_pane_g4

0x0003,

0xfc69,	// (0x0004fb9d) list_single_dyc_row_pane_g_ParamLimits

0xfc69,	// (0x0004fb9d) list_single_dyc_row_pane_g

0xcbab,	// (0x0004cadf) list_single_dyc_row_text_pane_ParamLimits

0xcbab,	// (0x0004cadf) list_single_dyc_row_text_pane

0xadb3,	// (0x0004ace7) bg_sp_fs_scroll_pane

0xcbca,	// (0x0004cafe) thumb_sp_fs_scroll_pane

0xbb22,	// (0x0004ba56) list_medium_line_g1_ParamLimits

0xbb22,	// (0x0004ba56) list_medium_line_g1

0xcbd3,	// (0x0004cb07) list_medium_line_t1_ParamLimits

0xcbd3,	// (0x0004cb07) list_medium_line_t1

0xaf05,	// (0x0004ae39) list_medium_line_x2_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x2_g1

0xaf11,	// (0x0004ae45) list_medium_line_x2_g2_ParamLimits

0xaf11,	// (0x0004ae45) list_medium_line_x2_g2

0x0001,

0xfc72,	// (0x0004fba6) list_medium_line_x2_g_ParamLimits

0xfc72,	// (0x0004fba6) list_medium_line_x2_g

0xcbe8,	// (0x0004cb1c) list_medium_line_x2_t1_ParamLimits

0xcbe8,	// (0x0004cb1c) list_medium_line_x2_t1

0xaf05,	// (0x0004ae39) list_medium_line_x3_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x3_g1

0xaf11,	// (0x0004ae45) list_medium_line_x3_g2_ParamLimits

0xaf11,	// (0x0004ae45) list_medium_line_x3_g2

0x0001,

0xfc72,	// (0x0004fba6) list_medium_line_x3_g_ParamLimits

0xfc72,	// (0x0004fba6) list_medium_line_x3_g

0xcbe8,	// (0x0004cb1c) list_medium_line_x3_t1_ParamLimits

0xcbe8,	// (0x0004cb1c) list_medium_line_x3_t1

0xcbfe,	// (0x0004cb32) thumb_sp_fs_scroll_pane_g1

0xcc07,	// (0x0004cb3b) thumb_sp_fs_scroll_pane_g2

0xcc10,	// (0x0004cb44) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc77,	// (0x0004fbab) thumb_sp_fs_scroll_pane_g

0xcbfe,	// (0x0004cb32) bg_sp_fs_scroll_pane_g1

0xcc07,	// (0x0004cb3b) bg_sp_fs_scroll_pane_g2

0xcc10,	// (0x0004cb44) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc77,	// (0x0004fbab) bg_sp_fs_scroll_pane_g

0xaf05,	// (0x0004ae39) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaf05,	// (0x0004ae39) list_medium_line_x2_t3_g4_g1

0xaf7b,	// (0x0004aeaf) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaf7b,	// (0x0004aeaf) list_medium_line_x2_t3_g4_g2

0xaf11,	// (0x0004ae45) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaf11,	// (0x0004ae45) list_medium_line_x2_t3_g4_g3

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaf1d,	// (0x0004ae51) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c5,	// (0x0004f1f9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c5,	// (0x0004f1f9) list_medium_line_x2_t3_g4_g

0x1480,	// (0x000413b4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1480,	// (0x000413b4) list_medium_line_x2_t3_g4_t1

0x149a,	// (0x000413ce) list_medium_line_x2_t3_g4_t2_ParamLimits

0x149a,	// (0x000413ce) list_medium_line_x2_t3_g4_t2

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaf3e,	// (0x0004ae72) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc7e,	// (0x0004fbb2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc7e,	// (0x0004fbb2) list_medium_line_x2_t3_g4_t

0xbb22,	// (0x0004ba56) list_medium_line_g2_g1_ParamLimits

0xbb22,	// (0x0004ba56) list_medium_line_g2_g1

0xbb2e,	// (0x0004ba62) list_medium_line_g2_g2_ParamLimits

0xbb2e,	// (0x0004ba62) list_medium_line_g2_g2

0x0001,

0xf940,	// (0x0004f874) list_medium_line_g2_g_ParamLimits

0xf940,	// (0x0004f874) list_medium_line_g2_g

0xcc19,	// (0x0004cb4d) list_medium_line_g2_t1_ParamLimits

0xcc19,	// (0x0004cb4d) list_medium_line_g2_t1

0xbb22,	// (0x0004ba56) list_medium_line_t3_g2_g1_ParamLimits

0xbb22,	// (0x0004ba56) list_medium_line_t3_g2_g1

0xbb2e,	// (0x0004ba62) list_medium_line_t3_g2_g2_ParamLimits

0xbb2e,	// (0x0004ba62) list_medium_line_t3_g2_g2

0x0001,

0xf940,	// (0x0004f874) list_medium_line_t3_g2_g_ParamLimits

0xf940,	// (0x0004f874) list_medium_line_t3_g2_g

0x14b4,	// (0x000413e8) list_medium_line_t3_g2_t1_ParamLimits

0x14b4,	// (0x000413e8) list_medium_line_t3_g2_t1

0x14ce,	// (0x00041402) list_medium_line_t3_g2_t2_ParamLimits

0x14ce,	// (0x00041402) list_medium_line_t3_g2_t2

0x14e3,	// (0x00041417) list_medium_line_t3_g2_t3_ParamLimits

0x14e3,	// (0x00041417) list_medium_line_t3_g2_t3

0x0002,

0xfc85,	// (0x0004fbb9) list_medium_line_t3_g2_t_ParamLimits

0xfc85,	// (0x0004fbb9) list_medium_line_t3_g2_t

0xca12,	// (0x0004c946) list_medium_line_right_icon_g1

0xcc2e,	// (0x0004cb62) list_medium_line_right_icon_t1

0xbb22,	// (0x0004ba56) list_medium_line_t2_g1_ParamLimits

0xbb22,	// (0x0004ba56) list_medium_line_t2_g1

0x14fd,	// (0x00041431) list_medium_line_t2_t1_ParamLimits

0x14fd,	// (0x00041431) list_medium_line_t2_t1

0x1517,	// (0x0004144b) list_medium_line_t2_t2_ParamLimits

0x1517,	// (0x0004144b) list_medium_line_t2_t2

0x0001,

0xfc8c,	// (0x0004fbc0) list_medium_line_t2_t_ParamLimits

0xfc8c,	// (0x0004fbc0) list_medium_line_t2_t

0xbb22,	// (0x0004ba56) list_medium_line_t3_g1_ParamLimits

0xbb22,	// (0x0004ba56) list_medium_line_t3_g1

0x1530,	// (0x00041464) list_medium_line_t3_t1_ParamLimits

0x1530,	// (0x00041464) list_medium_line_t3_t1

0x1547,	// (0x0004147b) list_medium_line_t3_t2_ParamLimits

0x1547,	// (0x0004147b) list_medium_line_t3_t2

0x155c,	// (0x00041490) list_medium_line_t3_t3_ParamLimits

0x155c,	// (0x00041490) list_medium_line_t3_t3

0x0002,

0xfc91,	// (0x0004fbc5) list_medium_line_t3_t_ParamLimits

0xfc91,	// (0x0004fbc5) list_medium_line_t3_t

0xbb22,	// (0x0004ba56) list_medium_line_g3_g1_ParamLimits

0xbb22,	// (0x0004ba56) list_medium_line_g3_g1

0xcc3c,	// (0x0004cb70) list_medium_line_g3_g2_ParamLimits

0xcc3c,	// (0x0004cb70) list_medium_line_g3_g2

0xbb2e,	// (0x0004ba62) list_medium_line_g3_g3_ParamLimits

0xbb2e,	// (0x0004ba62) list_medium_line_g3_g3

0x0002,

0xfc98,	// (0x0004fbcc) list_medium_line_g3_g_ParamLimits

0xfc98,	// (0x0004fbcc) list_medium_line_g3_g

0xcc48,	// (0x0004cb7c) list_medium_line_g3_t1_ParamLimits

0xcc48,	// (0x0004cb7c) list_medium_line_g3_t1

0xbb22,	// (0x0004ba56) list_medium_line_t2_g3_g1_ParamLimits

0xbb22,	// (0x0004ba56) list_medium_line_t2_g3_g1

0xcc3c,	// (0x0004cb70) list_medium_line_t2_g3_g2_ParamLimits

0xcc3c,	// (0x0004cb70) list_medium_line_t2_g3_g2

0xbb2e,	// (0x0004ba62) list_medium_line_t2_g3_g3_ParamLimits

0xbb2e,	// (0x0004ba62) list_medium_line_t2_g3_g3

0x0002,

0xfc98,	// (0x0004fbcc) list_medium_line_t2_g3_g_ParamLimits

0xfc98,	// (0x0004fbcc) list_medium_line_t2_g3_g

0x156e,	// (0x000414a2) list_medium_line_t2_g3_t1_ParamLimits

0x156e,	// (0x000414a2) list_medium_line_t2_g3_t1

0x1588,	// (0x000414bc) list_medium_line_t2_g3_t2_ParamLimits

0x1588,	// (0x000414bc) list_medium_line_t2_g3_t2

0x0001,

0xfc9f,	// (0x0004fbd3) list_medium_line_t2_g3_t_ParamLimits

0xfc9f,	// (0x0004fbd3) list_medium_line_t2_g3_t

0xbb22,	// (0x0004ba56) list_medium_line_t3_g3_g1_ParamLimits

0xbb22,	// (0x0004ba56) list_medium_line_t3_g3_g1

0xcc3c,	// (0x0004cb70) list_medium_line_t3_g3_g2_ParamLimits

0xcc3c,	// (0x0004cb70) list_medium_line_t3_g3_g2

0xbb2e,	// (0x0004ba62) list_medium_line_t3_g3_g3_ParamLimits

0xbb2e,	// (0x0004ba62) list_medium_line_t3_g3_g3

0x0002,

0xfc98,	// (0x0004fbcc) list_medium_line_t3_g3_g_ParamLimits

0xfc98,	// (0x0004fbcc) list_medium_line_t3_g3_g

0x15a3,	// (0x000414d7) list_medium_line_t3_g3_t1_ParamLimits

0x15a3,	// (0x000414d7) list_medium_line_t3_g3_t1

0x15b7,	// (0x000414eb) list_medium_line_t3_g3_t2_ParamLimits

0x15b7,	// (0x000414eb) list_medium_line_t3_g3_t2

0x15c9,	// (0x000414fd) list_medium_line_t3_g3_t3_ParamLimits

0x15c9,	// (0x000414fd) list_medium_line_t3_g3_t3

0x0002,

0xfca4,	// (0x0004fbd8) list_medium_line_t3_g3_t_ParamLimits

0xfca4,	// (0x0004fbd8) list_medium_line_t3_g3_t

0xcb38,	// (0x0004ca6c) list_medium_line_right_iconx2_g1

0xca12,	// (0x0004c946) list_medium_line_right_iconx2_g2

0x0001,

0xfcab,	// (0x0004fbdf) list_medium_line_right_iconx2_g

0xcc5d,	// (0x0004cb91) list_medium_line_right_iconx2_t1

0xcb38,	// (0x0004ca6c) list_medium_line_t2_right_iconx2_g1

0xca12,	// (0x0004c946) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcab,	// (0x0004fbdf) list_medium_line_t2_right_iconx2_g

0x15dd,	// (0x00041511) list_medium_line_t2_right_iconx2_t1

0x15ed,	// (0x00041521) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcb0,	// (0x0004fbe4) list_medium_line_t2_right_iconx2_t

0xcc6b,	// (0x0004cb9f) list_medium_line_x4_t4_t1

0x15ff,	// (0x00041533) list_medium_line_x4_t4_t2

0x160f,	// (0x00041543) list_medium_line_x4_t4_t3

0x161f,	// (0x00041553) list_medium_line_x4_t4_t4

0x0003,

0xfcb5,	// (0x0004fbe9) list_medium_line_x4_t4_t

0xa12a,	// (0x0004a05e) tport_appsw_pane_ParamLimits

0xa12a,	// (0x0004a05e) tport_appsw_pane

0xa13b,	// (0x0004a06f) tport_contact_pane_ParamLimits

0xa13b,	// (0x0004a06f) tport_contact_pane

0xa154,	// (0x0004a088) tport_listscroll_pane_ParamLimits

0xa154,	// (0x0004a088) tport_listscroll_pane

0xa16f,	// (0x0004a0a3) cell_tport_appsw_pane_ParamLimits

0xa16f,	// (0x0004a0a3) cell_tport_appsw_pane

0xb875,	// (0x0004b7a9) tport_appsw_pane_g1_ParamLimits

0xb875,	// (0x0004b7a9) tport_appsw_pane_g1

0xcc79,	// (0x0004cbad) tport_contact_pane_g1

0xc541,	// (0x0004c475) tport_contact_pane_t1

0xcc82,	// (0x0004cbb6) tport_contact_pane_t2

0x0001,

0xfcbe,	// (0x0004fbf2) tport_contact_pane_t

0xcc90,	// (0x0004cbc4) list_tport_pane

0xcc99,	// (0x0004cbcd) scroll_pane_cp_030

0xccaa,	// (0x0004cbde) cell_tport_appsw_pane_g1

0xccba,	// (0x0004cbee) cell_tport_appsw_pane_t1

0xadb3,	// (0x0004ace7) grid_highlight_pane_cp019

0xa1af,	// (0x0004a0e3) list_tport_double_graphic_pane_ParamLimits

0xa1af,	// (0x0004a0e3) list_tport_double_graphic_pane

0xf0d2,	// (0x0004f006) list_highlight_pane_cp023_ParamLimits

0xf0d2,	// (0x0004f006) list_highlight_pane_cp023

0xa1bc,	// (0x0004a0f0) list_tport_double_graphic_pane_g1_ParamLimits

0xa1bc,	// (0x0004a0f0) list_tport_double_graphic_pane_g1

0xa1c9,	// (0x0004a0fd) list_tport_double_graphic_pane_t1_ParamLimits

0xa1c9,	// (0x0004a0fd) list_tport_double_graphic_pane_t1

0xa1de,	// (0x0004a112) list_tport_double_graphic_pane_t2_ParamLimits

0xa1de,	// (0x0004a112) list_tport_double_graphic_pane_t2

0x0001,

0xfcca,	// (0x0004fbfe) list_tport_double_graphic_pane_t_ParamLimits

0xfcca,	// (0x0004fbfe) list_tport_double_graphic_pane_t

0xadb3,	// (0x0004ace7) main_cale_note_pane

0x84af,	// (0x000483e3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x84af,	// (0x000483e3) cell_vitu2_function_top_wide_pane_cp01

0x9b82,	// (0x00049ab6) wait_bar_pane_cp05_ParamLimits

0xadb3,	// (0x0004ace7) listscroll_cmail_pane

0xccd0,	// (0x0004cc04) list_cmail_pane

0xbadb,	// (0x0004ba0f) list_cmail_body_pane

0xa1fa,	// (0x0004a12e) list_single_cmail_header_caption_pane

0xa210,	// (0x0004a144) list_single_cmail_header_detail_pane_ParamLimits

0xa210,	// (0x0004a144) list_single_cmail_header_detail_pane

0xa239,	// (0x0004a16d) list_single_cmail_header_caption_pane_t1

0x162f,	// (0x00041563) list_single_cmail_header_detail_pane_g1_ParamLimits

0x162f,	// (0x00041563) list_single_cmail_header_detail_pane_g1

0xccf1,	// (0x0004cc25) list_single_cmail_header_detail_pane_g2_ParamLimits

0xccf1,	// (0x0004cc25) list_single_cmail_header_detail_pane_g2

0x0002,

0xfccf,	// (0x0004fc03) list_single_cmail_header_detail_pane_g_ParamLimits

0xfccf,	// (0x0004fc03) list_single_cmail_header_detail_pane_g

0xcd0a,	// (0x0004cc3e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcd0a,	// (0x0004cc3e) list_single_cmail_header_detail_pane_t1

0xcd40,	// (0x0004cc74) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcd40,	// (0x0004cc74) list_single_cmail_header_editor_pane_bg

0xc6f0,	// (0x0004c624) list_cmail_body_pane_g1

0xcd52,	// (0x0004cc86) list_cmail_body_pane_t1

0xb8b2,	// (0x0004b7e6) list_single_cmail_header_editor_pane_bg_g1

0xe319,	// (0x0004e24d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb8c2,	// (0x0004b7f6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb8ba,	// (0x0004b7ee) list_single_cmail_header_editor_pane_bg_g1_copy3

0xbb1a,	// (0x0004ba4e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb8e2,	// (0x0004b816) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb8d2,	// (0x0004b806) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb8da,	// (0x0004b80e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe2f9,	// (0x0004e22d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa249,	// (0x0004a17d) calenote_gesture_pane_ParamLimits

0xa249,	// (0x0004a17d) calenote_gesture_pane

0xa269,	// (0x0004a19d) calenote_window_pane_ParamLimits

0xa269,	// (0x0004a19d) calenote_window_pane

0xcd60,	// (0x0004cc94) popup_note_window_cp01

0xa285,	// (0x0004a1b9) calenote_swipe_1_pane_ParamLimits

0xa285,	// (0x0004a1b9) calenote_swipe_1_pane

0xa071,	// (0x00049fa5) calenote_swipe_2_pane_ParamLimits

0xa071,	// (0x00049fa5) calenote_swipe_2_pane

0xc913,	// (0x0004c847) calenote_swipe_1_pane_g1_ParamLimits

0xc913,	// (0x0004c847) calenote_swipe_1_pane_g1

0xc920,	// (0x0004c854) calenote_swipe_1_pane_g2_ParamLimits

0xc920,	// (0x0004c854) calenote_swipe_1_pane_g2

0x0001,

0xfbfe,	// (0x0004fb32) calenote_swipe_1_pane_g_ParamLimits

0xfbfe,	// (0x0004fb32) calenote_swipe_1_pane_g

0xcd72,	// (0x0004cca6) calenote_swipe_1_pane_t1_ParamLimits

0xcd72,	// (0x0004cca6) calenote_swipe_1_pane_t1

0xc913,	// (0x0004c847) calenote_swipe_2_pane_g1_ParamLimits

0xc913,	// (0x0004c847) calenote_swipe_2_pane_g1

0xcd91,	// (0x0004ccc5) calenote_swipe_2_pane_g2_ParamLimits

0xcd91,	// (0x0004ccc5) calenote_swipe_2_pane_g2

0x0001,

0xfcdb,	// (0x0004fc0f) calenote_swipe_2_pane_g_ParamLimits

0xfcdb,	// (0x0004fc0f) calenote_swipe_2_pane_g

0xcd9d,	// (0x0004ccd1) calenote_swipe_2_pane_t1_ParamLimits

0xcd9d,	// (0x0004ccd1) calenote_swipe_2_pane_t1

0xadb3,	// (0x0004ace7) main_mup_navstr_pane

0x6d4e,	// (0x00046c82) main_mup3_pane_t7_ParamLimits

0x6d4e,	// (0x00046c82) main_mup3_pane_t7

0xb470,	// (0x0004b3a4) main_mp4_pane_g6_ParamLimits

0xb470,	// (0x0004b3a4) main_mp4_pane_g6

0xb698,	// (0x0004b5cc) main_image3_pane_t4_ParamLimits

0xb698,	// (0x0004b5cc) main_image3_pane_t4

0xa29a,	// (0x0004a1ce) popup_navstr_preview_pane_ParamLimits

0xa29a,	// (0x0004a1ce) popup_navstr_preview_pane

0xa2ae,	// (0x0004a1e2) scroll_navstr_pane_ParamLimits

0xa2ae,	// (0x0004a1e2) scroll_navstr_pane

0xadb3,	// (0x0004ace7) bg_popup_preview_window_pane_cp04

0xcdc4,	// (0x0004ccf8) popup_navstr_preview_pane_t1

0xa2c2,	// (0x0004a1f6) scroll_navstr_pane_g1_ParamLimits

0xa2c2,	// (0x0004a1f6) scroll_navstr_pane_g1

0xa2d6,	// (0x0004a20a) scroll_navstr_pane_t1_ParamLimits

0xa2d6,	// (0x0004a20a) scroll_navstr_pane_t1

0xcd69,	// (0x0004cc9d) bg_button_pane_cp014

0xcd69,	// (0x0004cc9d) bg_button_pane_cp030

0x121f,	// (0x00041153) list_double_fisheye_pane_g4_ParamLimits

0x121f,	// (0x00041153) list_double_fisheye_pane_g4

0x122b,	// (0x0004115f) list_double_fisheye_pane_g5_ParamLimits

0x122b,	// (0x0004115f) list_double_fisheye_pane_g5

0xccd8,	// (0x0004cc0c) sp_fs_scroll_pane_cp03

0xca52,	// (0x0004c986) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xca5e,	// (0x0004c992) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1b,	// (0x0004fb4f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xca6a,	// (0x0004c99e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa1f0,	// (0x0004a124) sp_fs_scroll_pane_cp02

0xe029,	// (0x0004df5d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe029,	// (0x0004df5d) popup_sp_fs_calendar_preview_list_single_pane

0xadb3,	// (0x0004ace7) main_cam6_pano_pane

0xf0d2,	// (0x0004f006) main_mup3_pane_ParamLimits

0xadb3,	// (0x0004ace7) main_phacti_pane

0x9a55,	// (0x00049989) bg_button_pane_cp11

0x9a6f,	// (0x000499a3) main_mobtv_info_pane_g2_ParamLimits

0x9a6f,	// (0x000499a3) main_mobtv_info_pane_g2

0x0001,

0xfb7b,	// (0x0004faaf) main_mobtv_info_pane_g_ParamLimits

0xfb7b,	// (0x0004faaf) main_mobtv_info_pane_g

0x9c4c,	// (0x00049b80) sc_clock_pane_t5_ParamLimits

0x9c4c,	// (0x00049b80) sc_clock_pane_t5

0x9df4,	// (0x00049d28) main_radioblah_pane_g1_ParamLimits

0xc856,	// (0x0004c78a) main_radioblah_pane_t3_ParamLimits

0xc856,	// (0x0004c78a) main_radioblah_pane_t3

0xc86e,	// (0x0004c7a2) main_radioblah_pane_t4_ParamLimits

0xc86e,	// (0x0004c7a2) main_radioblah_pane_t4

0x9e1c,	// (0x00049d50) main_radioblah_text_pane_ParamLimits

0x9e1c,	// (0x00049d50) main_radioblah_text_pane

0x9e2e,	// (0x00049d62) main_radioblah_info_pane_g1_ParamLimits

0x9ec7,	// (0x00049dfb) main_radioblah_info_pane_t4_ParamLimits

0x9ec7,	// (0x00049dfb) main_radioblah_info_pane_t4

0xf0d2,	// (0x0004f006) main_sp_fs_calendar_pane

0xa2ed,	// (0x0004a221) main_phacti_pane_g1

0xa2f5,	// (0x0004a229) phacti_note_pane_ParamLimits

0xa2f5,	// (0x0004a229) phacti_note_pane

0xcddb,	// (0x0004cd0f) phacti_term_pane_ParamLimits

0xcddb,	// (0x0004cd0f) phacti_term_pane

0xcdf0,	// (0x0004cd24) phacti_note_pane_t1_ParamLimits

0xcdf0,	// (0x0004cd24) phacti_note_pane_t1

0xce07,	// (0x0004cd3b) phacti_term_pane_g1

0xce0f,	// (0x0004cd43) phacti_term_pane_t1_ParamLimits

0xce0f,	// (0x0004cd43) phacti_term_pane_t1

0xce39,	// (0x0004cd6d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe11c,	// (0x0004e050) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfce5,	// (0x0004fc19) popup_sp_fs_calendar_preview_list_single_pane_g

0xce41,	// (0x0004cd75) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce41,	// (0x0004cd75) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce56,	// (0x0004cd8a) aid_popup_sp_fs_bg_corner_pane

0x6446,	// (0x0004637a) popup_sp_fs_calendar_preview_bg_pane_g1

0xadb3,	// (0x0004ace7) popup_sp_fs_calendar_preview_bg_pane

0xce5e,	// (0x0004cd92) popup_sp_fs_calendar_preview_list_pane

0xf0d2,	// (0x0004f006) bg_main_sp_fs_cale_pane_ParamLimits

0xf0d2,	// (0x0004f006) bg_main_sp_fs_cale_pane

0xce66,	// (0x0004cd9a) listscroll_cale_mrui_pane_ParamLimits

0xce66,	// (0x0004cd9a) listscroll_cale_mrui_pane

0xce7a,	// (0x0004cdae) listscroll_sp_fs_schedule_track_pane

0xce83,	// (0x0004cdb7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xce83,	// (0x0004cdb7) main_sp_fs_ctrlbar_pane_cp01

0xce94,	// (0x0004cdc8) main_sp_fs_ribbon_pane

0xce9c,	// (0x0004cdd0) popup_sp_fs_cale_preview_window

0xa34c,	// (0x0004a280) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa34c,	// (0x0004a280) list_single_sp_fs_schedule_track_pane

0xf0d2,	// (0x0004f006) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xf0d2,	// (0x0004f006) bg_sp_fs_highlight_list_pane_cp03

0xa35e,	// (0x0004a292) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa35e,	// (0x0004a292) list_single_sp_fs_schedule_track_pane_g1

0xa36a,	// (0x0004a29e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa36a,	// (0x0004a29e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcea,	// (0x0004fc1e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcea,	// (0x0004fc1e) list_single_sp_fs_schedule_track_pane_g

0xa376,	// (0x0004a2aa) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa376,	// (0x0004a2aa) list_single_sp_fs_schedule_track_pane_t1

0xa390,	// (0x0004a2c4) sp_fs_schedule_track_pane_ParamLimits

0xa390,	// (0x0004a2c4) sp_fs_schedule_track_pane

0xceae,	// (0x0004cde2) sp_fs_schedule_track_pane_g1

0xceb6,	// (0x0004cdea) sp_fs_schedule_track_pane_g2

0xcebe,	// (0x0004cdf2) sp_fs_schedule_track_pane_g3

0xcec6,	// (0x0004cdfa) sp_fs_schedule_track_pane_g4

0xcece,	// (0x0004ce02) sp_fs_schedule_track_pane_g5

0x0004,

0xfcef,	// (0x0004fc23) sp_fs_schedule_track_pane_g

0xb8b2,	// (0x0004b7e6) bg_sp_fs_schedule_viewer_highlight_g1

0xe319,	// (0x0004e24d) bg_sp_fs_schedule_viewer_highlight_g2

0xb8ba,	// (0x0004b7ee) bg_sp_fs_schedule_viewer_highlight_g3

0xb8c2,	// (0x0004b7f6) bg_sp_fs_schedule_viewer_highlight_g4

0xbb1a,	// (0x0004ba4e) bg_sp_fs_schedule_viewer_highlight_g5

0xb8d2,	// (0x0004b806) bg_sp_fs_schedule_viewer_highlight_g6

0xb8da,	// (0x0004b80e) bg_sp_fs_schedule_viewer_highlight_g7

0xb8e2,	// (0x0004b816) bg_sp_fs_schedule_viewer_highlight_g8

0xe2f9,	// (0x0004e22d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcfa,	// (0x0004fc2e) bg_sp_fs_schedule_viewer_highlight_g

0xadb3,	// (0x0004ace7) bg_main_sp_fs_ribbon_pane

0xa3a1,	// (0x0004a2d5) main_sp_fs_ribbon_pane_g1

0xced6,	// (0x0004ce0a) main_sp_fs_ribbon_pane_t1

0xa3aa,	// (0x0004a2de) main_sp_fs_ribbon_pane_t2

0xcee5,	// (0x0004ce19) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd0d,	// (0x0004fc41) main_sp_fs_ribbon_pane_t

0xcef4,	// (0x0004ce28) main_sp_fs_ribbon_scheduler_pane

0xcefc,	// (0x0004ce30) bg_main_sp_fs_ribbon_pane_g1

0xcf05,	// (0x0004ce39) bg_main_sp_fs_ribbon_pane_g2

0xcf0e,	// (0x0004ce42) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd14,	// (0x0004fc48) bg_main_sp_fs_ribbon_pane_g

0xcf16,	// (0x0004ce4a) main_sp_fs_ribbon_scheduler_pane_g1

0xcf1f,	// (0x0004ce53) main_sp_fs_ribbon_scheduler_pane_g2

0xcf28,	// (0x0004ce5c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd1b,	// (0x0004fc4f) main_sp_fs_ribbon_scheduler_pane_g

0xcf31,	// (0x0004ce65) list_cale_mrui_pane

0xa3b9,	// (0x0004a2ed) sp_fs_scroll_pane_cp07_ParamLimits

0xa3b9,	// (0x0004a2ed) sp_fs_scroll_pane_cp07

0xa3cd,	// (0x0004a301) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa3cd,	// (0x0004a301) bg_sp_fs_schedule_viewer_highlight

0xcf3a,	// (0x0004ce6e) list_single_sp_fs_schedule_track_pane_cp01

0xcf42,	// (0x0004ce76) list_sp_fs_schedule_track_pane

0xcf4a,	// (0x0004ce7e) sp_fs_scroll_pane_cp06_ParamLimits

0xcf4a,	// (0x0004ce7e) sp_fs_scroll_pane_cp06

0x6446,	// (0x0004637a) bgmain_sp_fs_calendar_pane_g1

0x166d,	// (0x000415a1) list_single_cale_mrui_pane_ParamLimits

0x166d,	// (0x000415a1) list_single_cale_mrui_pane

0xcf5c,	// (0x0004ce90) list_single_cale_mrui_row_pane_ParamLimits

0xcf5c,	// (0x0004ce90) list_single_cale_mrui_row_pane

0xcf69,	// (0x0004ce9d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcf69,	// (0x0004ce9d) list_single_cale_mrui_row_pane_g1

0xcfa1,	// (0x0004ced5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcfa1,	// (0x0004ced5) list_single_cale_mrui_row_pane_t1

0x168d,	// (0x000415c1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x168d,	// (0x000415c1) list_single_cale_mrui_row_pane_t2

0xcfb3,	// (0x0004cee7) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcfb3,	// (0x0004cee7) list_single_cale_mrui_row_pane_t3

0xcfe2,	// (0x0004cf16) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcfe2,	// (0x0004cf16) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd27,	// (0x0004fc5b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd27,	// (0x0004fc5b) list_single_cale_mrui_row_pane_t

0x16f5,	// (0x00041629) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x16f5,	// (0x00041629) list_single_cmail_header_editor_pane_bg_cp01

0x171b,	// (0x0004164f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x171b,	// (0x0004164f) list_single_cmail_header_editor_pane_bg_cp02

0xa3dd,	// (0x0004a311) main_radioblah_text_pane_t1_ParamLimits

0xa3dd,	// (0x0004a311) main_radioblah_text_pane_t1

0xd011,	// (0x0004cf45) cam6_indi_pane_cp01

0xd019,	// (0x0004cf4d) cam6_mode_pane_cp01

0xd021,	// (0x0004cf55) cam6_pano_pane

0xd02a,	// (0x0004cf5e) cam6_zoom_pane_cp01

0xd032,	// (0x0004cf66) cam6_pano_image_pane

0xd03d,	// (0x0004cf71) cam6_pano_pane_g1

0xc6f0,	// (0x0004c624) cam6_pano_pane_g2

0xd046,	// (0x0004cf7a) cam6_pano_pane_g3

0xd04f,	// (0x0004cf83) cam6_pano_pane_g4

0x76f9,	// (0x0004762d) cam6_pano_pane_g5

0xd058,	// (0x0004cf8c) cam6_pano_pane_g6

0xd062,	// (0x0004cf96) cam6_pano_pane_g7

0xd06a,	// (0x0004cf9e) cam6_pano_pane_g8

0xd073,	// (0x0004cfa7) cam6_pano_pane_g9

0x0008,

0xfd30,	// (0x0004fc64) cam6_pano_pane_g

0xadb3,	// (0x0004ace7) main_browser_tag_pane

0xcdbc,	// (0x0004ccf0) grid_navstr_albumart_pane

0xd07e,	// (0x0004cfb2) cell_navstr_albumart_pane_ParamLimits

0xd07e,	// (0x0004cfb2) cell_navstr_albumart_pane

0xd0a1,	// (0x0004cfd5) cell_navstr_albumart_pane_g1

0x4dd7,	// (0x00044d0b) cell_navstr_albumart_pane_g2

0x4de7,	// (0x00044d1b) cell_navstr_albumart_pane_g3

0x4ddf,	// (0x00044d13) cell_navstr_albumart_pane_g4

0x0003,

0xfd43,	// (0x0004fc77) cell_navstr_albumart_pane_g

0xa3f7,	// (0x0004a32b) bt_list_pane_ParamLimits

0xa3f7,	// (0x0004a32b) bt_list_pane

0xa40b,	// (0x0004a33f) bt_list_pane_t1

0xa41a,	// (0x0004a34e) bt_list_pane_t2

0x0001,

0xfd4c,	// (0x0004fc80) bt_list_pane_t

0xadb3,	// (0x0004ace7) main_cale_prevew_pane

0xa429,	// (0x0004a35d) popup_cale_preview_window_ParamLimits

0xa429,	// (0x0004a35d) popup_cale_preview_window

0xf0d2,	// (0x0004f006) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0d2,	// (0x0004f006) bg_popup_preview_window_pane_cp05

0xd0a9,	// (0x0004cfdd) list_cale_preview_pane_ParamLimits

0xd0a9,	// (0x0004cfdd) list_cale_preview_pane

0xa444,	// (0x0004a378) list_double_cale_preview_pane_ParamLimits

0xa444,	// (0x0004a378) list_double_cale_preview_pane

0xa456,	// (0x0004a38a) list_single_cale_preview_pane_ParamLimits

0xa456,	// (0x0004a38a) list_single_cale_preview_pane

0xa46c,	// (0x0004a3a0) list_single_cale_preview_pane_g1

0xa474,	// (0x0004a3a8) list_single_cale_preview_pane_t1_ParamLimits

0xa474,	// (0x0004a3a8) list_single_cale_preview_pane_t1

0xa489,	// (0x0004a3bd) list_double_cale_preview_pane_g1

0xa491,	// (0x0004a3c5) list_double_cale_preview_pane_t1_ParamLimits

0xa491,	// (0x0004a3c5) list_double_cale_preview_pane_t1

0xa4a6,	// (0x0004a3da) list_double_cale_preview_pane_t2_ParamLimits

0xa4a6,	// (0x0004a3da) list_double_cale_preview_pane_t2

0x0001,

0xfd51,	// (0x0004fc85) list_double_cale_preview_pane_t_ParamLimits

0xfd51,	// (0x0004fc85) list_double_cale_preview_pane_t

0xadb3,	// (0x0004ace7) main_ezdial_pane

0xf0d2,	// (0x0004f006) main_sp_fs_email_pane_ParamLimits

0xa08b,	// (0x00049fbf) cmail_ddmenu_btn01_pane_ParamLimits

0xa08b,	// (0x00049fbf) cmail_ddmenu_btn01_pane

0xa09e,	// (0x00049fd2) cmail_ddmenu_btn02_pane_ParamLimits

0xa09e,	// (0x00049fd2) cmail_ddmenu_btn02_pane

0xa0c1,	// (0x00049ff5) cmail_ddmenu_btn03_pane_ParamLimits

0xa0c1,	// (0x00049ff5) cmail_ddmenu_btn03_pane

0x129b,	// (0x000411cf) main_sp_fs_ctrlbar_pane_ParamLimits

0x12bf,	// (0x000411f3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xbadb,	// (0x0004ba0f) list_cmail_body_pane_ParamLimits

0xcce8,	// (0x0004cc1c) bg_button_pane_cp12

0xccfd,	// (0x0004cc31) list_single_cmail_header_detail_pane_g3_ParamLimits

0xccfd,	// (0x0004cc31) list_single_cmail_header_detail_pane_g3

0x1647,	// (0x0004157b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1647,	// (0x0004157b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcd6,	// (0x0004fc0a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcd6,	// (0x0004fc0a) list_single_cmail_header_detail_pane_t

0xce24,	// (0x0004cd58) phacti_term_pane_t2_ParamLimits

0xce24,	// (0x0004cd58) phacti_term_pane_t2

0x0001,

0xfce0,	// (0x0004fc14) phacti_term_pane_t_ParamLimits

0xfce0,	// (0x0004fc14) phacti_term_pane_t

0xd0b5,	// (0x0004cfe9) aid_size_list_single_double

0xa4be,	// (0x0004a3f2) popup_ezdial_listscroll_window

0xa4da,	// (0x0004a40e) popup_number_entry_window_cp01

0xea04,	// (0x0004e938) bg_popup_call_pane_cp09

0xd0c1,	// (0x0004cff5) ezdial_list_pane

0xd0c9,	// (0x0004cffd) scroll_pane_cp23

0x52bd,	// (0x000451f1) bg_button_pane_cp028_ParamLimits

0x52bd,	// (0x000451f1) bg_button_pane_cp028

0xa4e8,	// (0x0004a41c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa4e8,	// (0x0004a41c) cmail_ddmenu_btn01_pane_g1

0xa4f4,	// (0x0004a428) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa4f4,	// (0x0004a428) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd56,	// (0x0004fc8a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd56,	// (0x0004fc8a) cmail_ddmenu_btn01_pane_g

0xd0d1,	// (0x0004d005) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd0d1,	// (0x0004d005) cmail_ddmenu_btn01_pane_t1

0x52bd,	// (0x000451f1) bg_button_pane_cp029_ParamLimits

0x52bd,	// (0x000451f1) bg_button_pane_cp029

0xa500,	// (0x0004a434) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa500,	// (0x0004a434) cmail_ddmenu_btn02_pane_g1

0xa518,	// (0x0004a44c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa518,	// (0x0004a44c) cmail_ddmenu_btn02_pane_t1

0xf0d2,	// (0x0004f006) bg_button_pane_cp031_ParamLimits

0xf0d2,	// (0x0004f006) bg_button_pane_cp031

0xa500,	// (0x0004a434) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa500,	// (0x0004a434) cmail_ddmenu_btn03_pane_g1

0xa518,	// (0x0004a44c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa518,	// (0x0004a44c) cmail_ddmenu_btn03_pane_t1

0x7cc7,	// (0x00047bfb) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ce1,	// (0x00047c15) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ce1,	// (0x00047c15) cell_dialer2_keypad_pane_t1_copy1

0x98d7,	// (0x0004980b) ncimui_group_button_pane

0xf0d2,	// (0x0004f006) main_sp_fs_calendar_pane_ParamLimits

0xa1fa,	// (0x0004a12e) list_single_cmail_header_caption_pane_ParamLimits

0xbe6d,	// (0x0004bda1) aid_recal_txt_sm_pane

0xadb3,	// (0x0004ace7) mian_recal_day_pane

0xce9c,	// (0x0004cdd0) popup_sp_fs_cale_preview_window_ParamLimits

0xadb3,	// (0x0004ace7) list_recal_day_pane

0xd0ff,	// (0x0004d033) list_single_recal_day_pane_ParamLimits

0xd0ff,	// (0x0004d033) list_single_recal_day_pane

0xd111,	// (0x0004d045) list_single_recal_day_pane_g1_ParamLimits

0xd111,	// (0x0004d045) list_single_recal_day_pane_g1

0xd11d,	// (0x0004d051) list_single_recal_day_pane_g2_ParamLimits

0xd11d,	// (0x0004d051) list_single_recal_day_pane_g2

0xd12c,	// (0x0004d060) list_single_recal_day_pane_g3_ParamLimits

0xd12c,	// (0x0004d060) list_single_recal_day_pane_g3

0xa53c,	// (0x0004a470) list_single_recal_day_pane_g4_ParamLimits

0xa53c,	// (0x0004a470) list_single_recal_day_pane_g4

0xd138,	// (0x0004d06c) list_single_recal_day_pane_g5_ParamLimits

0xd138,	// (0x0004d06c) list_single_recal_day_pane_g5

0xd147,	// (0x0004d07b) list_single_recal_day_pane_g6_ParamLimits

0xd147,	// (0x0004d07b) list_single_recal_day_pane_g6

0x0005,

0xfd65,	// (0x0004fc99) list_single_recal_day_pane_g_ParamLimits

0xfd65,	// (0x0004fc99) list_single_recal_day_pane_g

0xd153,	// (0x0004d087) list_single_recal_day_pane_t1

0xd161,	// (0x0004d095) list_single_recal_day_pane_t2

0x0001,

0xfd72,	// (0x0004fca6) list_single_recal_day_pane_t

0xa54f,	// (0x0004a483) ncimui_query_button_pane_ParamLimits

0xa54f,	// (0x0004a483) ncimui_query_button_pane

0xa55f,	// (0x0004a493) ncimui_query_button_pane_t1_ParamLimits

0xa55f,	// (0x0004a493) ncimui_query_button_pane_t1

0xd16f,	// (0x0004d0a3) ncimui_query_button_pane_t2_ParamLimits

0xd16f,	// (0x0004d0a3) ncimui_query_button_pane_t2

0x0001,

0xfd77,	// (0x0004fcab) ncimui_query_button_pane_t_ParamLimits

0xfd77,	// (0x0004fcab) ncimui_query_button_pane_t

0xa572,	// (0x0004a4a6) query_button_pane_ParamLimits

0xa572,	// (0x0004a4a6) query_button_pane

0xadb3,	// (0x0004ace7) bg_button_pane_cp0028

0xd182,	// (0x0004d0b6) query_button_pane_t1

0x52df,	// (0x00045213) main_tport_pane_ParamLimits

0xa0e7,	// (0x0004a01b) bg_popup_window_pane_cp01_ParamLimits

0xa0e7,	// (0x0004a01b) bg_popup_window_pane_cp01

0xa101,	// (0x0004a035) heading_pane_cp08_ParamLimits

0xa101,	// (0x0004a035) heading_pane_cp08

0xa115,	// (0x0004a049) heading_pane_cp07_ParamLimits

0xa115,	// (0x0004a049) heading_pane_cp07

0xccaa,	// (0x0004cbde) cell_tport_appsw_pane_g2

0x0002,

0xfcc3,	// (0x0004fbf7) cell_tport_appsw_pane_g

0x0e2e,	// (0x00040d62) input_candi_list_open_g1

0xe4c0,	// (0x0004e3f4) list_cale_time_pane_g6_ParamLimits

0xe4c0,	// (0x0004e3f4) list_cale_time_pane_g6

0x67b6,	// (0x000466ea) aid_size_touch_calib_1_ParamLimits

0x67b6,	// (0x000466ea) aid_size_touch_calib_1

0x67c2,	// (0x000466f6) aid_size_touch_calib_2_ParamLimits

0x67c2,	// (0x000466f6) aid_size_touch_calib_2

0x67d8,	// (0x0004670c) aid_size_touch_calib_3_ParamLimits

0x67d8,	// (0x0004670c) aid_size_touch_calib_3

0x67f6,	// (0x0004672a) aid_size_touch_calib_4_ParamLimits

0x67f6,	// (0x0004672a) aid_size_touch_calib_4

0x680c,	// (0x00046740) main_touch_calib_button_group_pane_ParamLimits

0x680c,	// (0x00046740) main_touch_calib_button_group_pane

0x6824,	// (0x00046758) main_touch_calib_pane_g1_ParamLimits

0x6830,	// (0x00046764) main_touch_calib_pane_g2_ParamLimits

0x683c,	// (0x00046770) main_touch_calib_pane_g3_ParamLimits

0x6848,	// (0x0004677c) main_touch_calib_pane_g4_ParamLimits

0xf6a2,	// (0x0004f5d6) main_touch_calib_pane_g_ParamLimits

0x6854,	// (0x00046788) main_touch_calib_pane_t1_ParamLimits

0x686e,	// (0x000467a2) main_touch_calib_pane_t2_ParamLimits

0x6888,	// (0x000467bc) main_touch_calib_pane_t3_ParamLimits

0x689c,	// (0x000467d0) main_touch_calib_pane_t4_ParamLimits

0x68b0,	// (0x000467e4) main_touch_calib_pane_t5_ParamLimits

0xf6ab,	// (0x0004f5df) main_touch_calib_pane_t_ParamLimits

0x6fd0,	// (0x00046f04) list_single_fp_cale_pane_g3_ParamLimits

0x6fd0,	// (0x00046f04) list_single_fp_cale_pane_g3

0xf0d2,	// (0x0004f006) bg_button_pane_cp012_ParamLimits

0xf0d2,	// (0x0004f006) bg_vkb2_func_pane_cp03_ParamLimits

0x8c7f,	// (0x00048bb3) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0d2,	// (0x0004f006) bg_vkb2_func_pane_cp04_ParamLimits

0x9877,	// (0x000497ab) main_ncimui_button_group_pane_ParamLimits

0x9877,	// (0x000497ab) main_ncimui_button_group_pane

0x98c5,	// (0x000497f9) main_ncimui_pane_t3_ParamLimits

0x98c5,	// (0x000497f9) main_ncimui_pane_t3

0xcdd2,	// (0x0004cd06) phacti_button_group_pane

0xd0b5,	// (0x0004cfe9) aid_size_list_single_double_ParamLimits

0xa4be,	// (0x0004a3f2) popup_ezdial_listscroll_window_ParamLimits

0xa4da,	// (0x0004a40e) popup_number_entry_window_cp01_ParamLimits

0xa585,	// (0x0004a4b9) phacti_button_pane_ParamLimits

0xa585,	// (0x0004a4b9) phacti_button_pane

0xadb3,	// (0x0004ace7) bg_button_pane_cp14

0xd190,	// (0x0004d0c4) phacti_button_pane_t1

0xa596,	// (0x0004a4ca) main_touch_calib_button_pane_ParamLimits

0xa596,	// (0x0004a4ca) main_touch_calib_button_pane

0xdf25,	// (0x0004de59) bg_button_pane_cp18_ParamLimits

0xdf25,	// (0x0004de59) bg_button_pane_cp18

0xd19e,	// (0x0004d0d2) main_touch_calib_button_pane_t1_ParamLimits

0xd19e,	// (0x0004d0d2) main_touch_calib_button_pane_t1

0xd1b4,	// (0x0004d0e8) main_touch_calib_button_pane_t2_ParamLimits

0xd1b4,	// (0x0004d0e8) main_touch_calib_button_pane_t2

0x0001,

0xfd7c,	// (0x0004fcb0) main_touch_calib_button_pane_t_ParamLimits

0xfd7c,	// (0x0004fcb0) main_touch_calib_button_pane_t

0xadb3,	// (0x0004ace7) cell_ncimui_button_pane

0xadb3,	// (0x0004ace7) bg_button_pane_cp032

0xd1d2,	// (0x0004d106) cell_ncimui_button_pane_t1

0xb678,	// (0x0004b5ac) image3_infobar_pane_ParamLimits

0xb678,	// (0x0004b5ac) image3_infobar_pane

0x9c78,	// (0x00049bac) fs_bigclock_status_pane_ParamLimits

0x9c78,	// (0x00049bac) fs_bigclock_status_pane

0x9c85,	// (0x00049bb9) main_fs_bigclock_clock_pane_ParamLimits

0x9c85,	// (0x00049bb9) main_fs_bigclock_clock_pane

0x9c98,	// (0x00049bcc) main_fs_bigclock_indi_pane_ParamLimits

0x9c98,	// (0x00049bcc) main_fs_bigclock_indi_pane

0x9cb3,	// (0x00049be7) main_fs_bigclock_swipe_pane_ParamLimits

0x9cb3,	// (0x00049be7) main_fs_bigclock_swipe_pane

0xadb3,	// (0x0004ace7) main_fs_clock_dumped_data

0x9cd4,	// (0x00049c08) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9cd4,	// (0x00049c08) list_single_fs_bigclock_indicator_pane_g1

0x9cf0,	// (0x00049c24) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9cf0,	// (0x00049c24) list_single_fs_bigclock_indicator_pane_g2

0x9d0a,	// (0x00049c3e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9d0a,	// (0x00049c3e) list_single_fs_bigclock_indicator_pane_g3

0x9d24,	// (0x00049c58) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9d24,	// (0x00049c58) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbaf,	// (0x0004fae3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbaf,	// (0x0004fae3) list_single_fs_bigclock_indicator_pane_g

0x9d4a,	// (0x00049c7e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9d4a,	// (0x00049c7e) list_single_fs_bigclock_indicator_pane_t1

0x9d72,	// (0x00049ca6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9d72,	// (0x00049ca6) list_single_fs_bigclock_indicator_pane_t2

0x9d9a,	// (0x00049cce) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9d9a,	// (0x00049cce) list_single_fs_bigclock_indicator_pane_t3

0x9dc2,	// (0x00049cf6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9dc2,	// (0x00049cf6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbba,	// (0x0004faee) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbba,	// (0x0004faee) list_single_fs_bigclock_indicator_pane_t

0xd1e0,	// (0x0004d114) image3_infobar_fav_pane_ParamLimits

0xd1e0,	// (0x0004d114) image3_infobar_fav_pane

0xd1f0,	// (0x0004d124) image3_infobar_loc_pane_ParamLimits

0xd1f0,	// (0x0004d124) image3_infobar_loc_pane

0xd204,	// (0x0004d138) image3_infobar_time_pane_ParamLimits

0xd204,	// (0x0004d138) image3_infobar_time_pane

0x6446,	// (0x0004637a) image3_infobar_time_pane_g1

0xd214,	// (0x0004d148) image3_infobar_time_pane_t1

0x6446,	// (0x0004637a) image3_infobar_loc_pane_g1

0xd222,	// (0x0004d156) image3_infobar_loc_pane_g2

0x0001,

0xfd81,	// (0x0004fcb5) image3_infobar_loc_pane_g

0xd22a,	// (0x0004d15e) image3_infobar_loc_pane_t1

0x6446,	// (0x0004637a) image3_infobar_fav_pane_g1

0xd238,	// (0x0004d16c) image3_infobar_fav_pane_g2

0x0001,

0xfd86,	// (0x0004fcba) image3_infobar_fav_pane_g

0xd240,	// (0x0004d174) fs_bigclock_status_battery_pane

0xd249,	// (0x0004d17d) fs_bigclock_status_signal_pane

0xd252,	// (0x0004d186) fs_bigclock_status_title_pane

0xd25b,	// (0x0004d18f) fs_bigclock_status_signal_pane_g1

0xd264,	// (0x0004d198) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd8b,	// (0x0004fcbf) fs_bigclock_status_signal_pane_g

0xd26c,	// (0x0004d1a0) fs_bigclock_status_battery_pane_g1

0xd275,	// (0x0004d1a9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd90,	// (0x0004fcc4) fs_bigclock_status_battery_pane_g

0xd27d,	// (0x0004d1b1) fs_bigclock_status_title_pane_t1

0x6446,	// (0x0004637a) main_fs_bigclock_clock_pane_g1

0xd28b,	// (0x0004d1bf) main_fs_bigclock_clock_pane_g2

0xd28b,	// (0x0004d1bf) main_fs_bigclock_clock_pane_g3

0xd28b,	// (0x0004d1bf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd95,	// (0x0004fcc9) main_fs_bigclock_clock_pane_g

0xa5ab,	// (0x0004a4df) main_fs_bigclock_clock_pane_t1

0xa5b9,	// (0x0004a4ed) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd9e,	// (0x0004fcd2) main_fs_bigclock_clock_pane_t

0xd293,	// (0x0004d1c7) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd293,	// (0x0004d1c7) list_single_fs_bigclock_indicator_pane

0xa5c8,	// (0x0004a4fc) list_single_fs_bigclock_pane_ParamLimits

0xa5c8,	// (0x0004a4fc) list_single_fs_bigclock_pane

0xd2ad,	// (0x0004d1e1) main_fs_bigclock_indicator_pane_t1

0xd2bc,	// (0x0004d1f0) list_single_fs_bigclock_pane_g1

0xd2c4,	// (0x0004d1f8) list_single_fs_bigclock_pane_t1

0x6446,	// (0x0004637a) main_fs_bigclock_swipe_pane_g1

0xd304,	// (0x0004d238) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdaf,	// (0x0004fce3) main_fs_bigclock_swipe_pane_g

0xd30c,	// (0x0004d240) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd30c,	// (0x0004d240) main_fs_bigclock_swipe_pane_t1

0x3458,	// (0x0004338c) call_type_pane_ParamLimits

0xadb3,	// (0x0004ace7) main_btmg_pane

0xcf95,	// (0x0004cec9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcf95,	// (0x0004cec9) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd22,	// (0x0004fc56) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd22,	// (0x0004fc56) list_single_cale_mrui_row_pane_g

0xd0ef,	// (0x0004d023) list_recal_vselct_arw_lo_pane

0xd0f7,	// (0x0004d02b) list_recal_vselct_arw_up_pane

0xbe64,	// (0x0004bd98) list_recal_vselct_pane

0xd329,	// (0x0004d25d) btmg_button_pane

0xa62d,	// (0x0004a561) main_btmg_pane_g1

0xadb3,	// (0x0004ace7) bg_button_pane_cp044

0xd333,	// (0x0004d267) btmg_button_pane_t1

0x52a1,	// (0x000451d5) aid_listscroll_gen

0xf0d2,	// (0x0004f006) main_cntbar_detail_pane

0xccc8,	// (0x0004cbfc) list_cmail_folder_pane

0xccd8,	// (0x0004cc0c) sp_fs_scroll_pane_cp03_ParamLimits

0x173b,	// (0x0004166f) list_single_fs_dyc_pane_cp01_ParamLimits

0x173b,	// (0x0004166f) list_single_fs_dyc_pane_cp01

0xd341,	// (0x0004d275) aid_size_cmail_indent

0xd34a,	// (0x0004d27e) list_single_dyc_row_pane_cp01

0xa663,	// (0x0004a597) cntbar_detail_list_pane_ParamLimits

0xa663,	// (0x0004a597) cntbar_detail_list_pane

0xa6af,	// (0x0004a5e3) main_cntbar_detail_cont_pane_ParamLimits

0xa6af,	// (0x0004a5e3) main_cntbar_detail_cont_pane

0x344c,	// (0x00043380) scroll_pane_cp032_ParamLimits

0x344c,	// (0x00043380) scroll_pane_cp032

0xa6c3,	// (0x0004a5f7) cntbar_detail_list_event_pane_ParamLimits

0xa6c3,	// (0x0004a5f7) cntbar_detail_list_event_pane

0xa673,	// (0x0004a5a7) cntbar_detail_list_shct_pane

0xe367,	// (0x0004e29b) aid_list_gen

0xd353,	// (0x0004d287) aid_scroll

0xd35c,	// (0x0004d290) aid_size_touch_scroll_bar

0xa6d3,	// (0x0004a607) aid_list_double

0xd365,	// (0x0004d299) aid_list_single

0x1751,	// (0x00041685) aid_list_single_lg

0xd36e,	// (0x0004d2a2) aid_list_z_g_a_sm

0xd376,	// (0x0004d2aa) aid_list_z_g_d

0xd37e,	// (0x0004d2b2) aid_txt_z_prm

0x175a,	// (0x0004168e) aid_txt_z_prm_cp01

0x1768,	// (0x0004169c) aid_txt_z_sec

0xa6dc,	// (0x0004a610) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa6dc,	// (0x0004a610) main_cntbar_detail_cont_pane_g1

0xa6f0,	// (0x0004a624) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa6f0,	// (0x0004a624) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdb4,	// (0x0004fce8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdb4,	// (0x0004fce8) main_cntbar_detail_cont_pane_g

0xd38c,	// (0x0004d2c0) main_cntbar_detail_cont_pane_t1

0xd39a,	// (0x0004d2ce) main_cntbar_detail_cont_pane_t2

0xd3a8,	// (0x0004d2dc) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdb9,	// (0x0004fced) main_cntbar_detail_cont_pane_t

0xa700,	// (0x0004a634) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa700,	// (0x0004a634) cell_cntbar_detail_list_shct_pane

0xd3b6,	// (0x0004d2ea) cntbar_detail_list_shct_pane_g1

0xd3bf,	// (0x0004d2f3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdc0,	// (0x0004fcf4) cntbar_detail_list_shct_pane_g

0xa714,	// (0x0004a648) cntbar_detail_list_event_pane_g1_ParamLimits

0xa714,	// (0x0004a648) cntbar_detail_list_event_pane_g1

0xa720,	// (0x0004a654) cntbar_detail_list_event_pane_g2_ParamLimits

0xa720,	// (0x0004a654) cntbar_detail_list_event_pane_g2

0x0005,

0xfdc5,	// (0x0004fcf9) cntbar_detail_list_event_pane_g_ParamLimits

0xfdc5,	// (0x0004fcf9) cntbar_detail_list_event_pane_g

0xa78c,	// (0x0004a6c0) cntbar_detail_list_event_pane_t1_ParamLimits

0xa78c,	// (0x0004a6c0) cntbar_detail_list_event_pane_t1

0xa7a1,	// (0x0004a6d5) cntbar_detail_list_event_pane_t2_ParamLimits

0xa7a1,	// (0x0004a6d5) cntbar_detail_list_event_pane_t2

0x0002,

0xfdd2,	// (0x0004fd06) cntbar_detail_list_event_pane_t_ParamLimits

0xfdd2,	// (0x0004fd06) cntbar_detail_list_event_pane_t

0x6446,	// (0x0004637a) cell_cntbar_detail_list_shct_pane_g1

0x37ba,	// (0x000436ee) navi_pane_mv_g3

0xf0d2,	// (0x0004f006) main_cntbar_detail_pane_ParamLimits

0xadb3,	// (0x0004ace7) main_notif_wgt_pane

0xb40a,	// (0x0004b33e) aid_tch_main_mp4_pane_g4

0xb60c,	// (0x0004b540) popup_slider_window_cp02

0xd0e6,	// (0x0004d01a) list_recal_day_event_pane

0xa637,	// (0x0004a56b) cntbar_detail_btn_pane_ParamLimits

0xa637,	// (0x0004a56b) cntbar_detail_btn_pane

0xa64d,	// (0x0004a581) cntbar_detail_btn_pane_cp01_ParamLimits

0xa64d,	// (0x0004a581) cntbar_detail_btn_pane_cp01

0xa673,	// (0x0004a5a7) cntbar_detail_list_shct_pane_ParamLimits

0xa683,	// (0x0004a5b7) cntbar_detail_pane_g1_ParamLimits

0xa683,	// (0x0004a5b7) cntbar_detail_pane_g1

0xa693,	// (0x0004a5c7) cntbar_detail_pane_t1_ParamLimits

0xa693,	// (0x0004a5c7) cntbar_detail_pane_t1

0xa72c,	// (0x0004a660) cntbar_detail_list_event_pane_g3_ParamLimits

0xa72c,	// (0x0004a660) cntbar_detail_list_event_pane_g3

0xa744,	// (0x0004a678) cntbar_detail_list_event_pane_g4_ParamLimits

0xa744,	// (0x0004a678) cntbar_detail_list_event_pane_g4

0xa75c,	// (0x0004a690) cntbar_detail_list_event_pane_g5_ParamLimits

0xa75c,	// (0x0004a690) cntbar_detail_list_event_pane_g5

0xa774,	// (0x0004a6a8) cntbar_detail_list_event_pane_g6_ParamLimits

0xa774,	// (0x0004a6a8) cntbar_detail_list_event_pane_g6

0xa7b6,	// (0x0004a6ea) cntbar_detail_list_event_pane_t3_ParamLimits

0xa7b6,	// (0x0004a6ea) cntbar_detail_list_event_pane_t3

0xa7c8,	// (0x0004a6fc) popup_notif_wgt_window_ParamLimits

0xa7c8,	// (0x0004a6fc) popup_notif_wgt_window

0xa7e1,	// (0x0004a715) popup_submenu_window_cp01_ParamLimits

0xa7e1,	// (0x0004a715) popup_submenu_window_cp01

0xea04,	// (0x0004e938) bg_popup_window_pane_cp10

0xd3c8,	// (0x0004d2fc) listscroll_notif_wgt_pane

0xd3d2,	// (0x0004d306) list_notif_wgt_window

0xd3db,	// (0x0004d30f) scroll_pane_cp033

0xd3e4,	// (0x0004d318) list_notif_wgt_row_pane_ParamLimits

0xd3e4,	// (0x0004d318) list_notif_wgt_row_pane

0xd3f6,	// (0x0004d32a) aid_size_list_notif_wgt_del

0xd3ff,	// (0x0004d333) list_notif_wgt_row_pane_g1

0xd407,	// (0x0004d33b) list_notif_wgt_row_pane_g2

0xd40f,	// (0x0004d343) list_notif_wgt_row_pane_g3

0x0002,

0xfdd9,	// (0x0004fd0d) list_notif_wgt_row_pane_g

0xd418,	// (0x0004d34c) list_notif_wgt_row_pane_t1

0xd426,	// (0x0004d35a) list_notif_wgt_row_pane_t2

0xd434,	// (0x0004d368) list_notif_wgt_row_pane_t3

0x0002,

0xfde0,	// (0x0004fd14) list_notif_wgt_row_pane_t

0xbb3a,	// (0x0004ba6e) list_recal_day_event_pane_g1

0xd442,	// (0x0004d376) list_recal_day_event_pane_t1

0xadb3,	// (0x0004ace7) bg_button_pane_cp045

0xd451,	// (0x0004d385) cntbar_detail_btn_pane_t1

0x52bd,	// (0x000451f1) main_callh_pane_ParamLimits

0x52bd,	// (0x000451f1) main_callh_pane

0xadb3,	// (0x0004ace7) main_coverflow0_pane

0xadb3,	// (0x0004ace7) main_wgtman_pane

0x9cc1,	// (0x00049bf5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9cc1,	// (0x00049bf5) main_fs_bigclock_unlock_btn_pane

0xcca2,	// (0x0004cbd6) bg_button_pane_cp16

0xccb2,	// (0x0004cbe6) cell_tport_appsw_pane_g3

0xa7f3,	// (0x0004a727) cf0_flow_pane_ParamLimits

0xa7f3,	// (0x0004a727) cf0_flow_pane

0xd45f,	// (0x0004d393) listscroll_cf0_pane

0xd468,	// (0x0004d39c) main_cf0_pane_g1

0xa808,	// (0x0004a73c) main_cf0_pane_t1_ParamLimits

0xa808,	// (0x0004a73c) main_cf0_pane_t1

0xa81f,	// (0x0004a753) main_cf0_pane_t2_ParamLimits

0xa81f,	// (0x0004a753) main_cf0_pane_t2

0x0001,

0xfde7,	// (0x0004fd1b) main_cf0_pane_t_ParamLimits

0xfde7,	// (0x0004fd1b) main_cf0_pane_t

0xd472,	// (0x0004d3a6) scroll_pane_cp11

0xa836,	// (0x0004a76a) cf0_flow_pane_g1

0xa83e,	// (0x0004a772) cf0_flow_pane_g2

0x0001,

0xfdec,	// (0x0004fd20) cf0_flow_pane_g

0xa846,	// (0x0004a77a) cf0_flow_pane_t1

0xadb3,	// (0x0004ace7) main_call6_pane

0xadb3,	// (0x0004ace7) main_calllock_pane

0xa854,	// (0x0004a788) call6_btn_grp_pane_ParamLimits

0xa854,	// (0x0004a788) call6_btn_grp_pane

0xa86e,	// (0x0004a7a2) call6_pane_g1_ParamLimits

0xa86e,	// (0x0004a7a2) call6_pane_g1

0xa883,	// (0x0004a7b7) popup_call6_1st_window_ParamLimits

0xa883,	// (0x0004a7b7) popup_call6_1st_window

0xa894,	// (0x0004a7c8) popup_call6_2nd_window_ParamLimits

0xa894,	// (0x0004a7c8) popup_call6_2nd_window

0xa8a5,	// (0x0004a7d9) cell_call6_btn_pane_ParamLimits

0xa8a5,	// (0x0004a7d9) cell_call6_btn_pane

0xea04,	// (0x0004e938) bg_popup_call2_in_pane_cp03

0xd47d,	// (0x0004d3b1) popup_call6_1st_window_g1

0xd485,	// (0x0004d3b9) popup_call6_1st_window_g2

0xd48d,	// (0x0004d3c1) popup_call6_1st_window_g3

0x0002,

0xfdf1,	// (0x0004fd25) popup_call6_1st_window_g

0xd495,	// (0x0004d3c9) popup_call6_1st_window_t1

0xd4a4,	// (0x0004d3d8) popup_call6_1st_window_t2

0xd4b4,	// (0x0004d3e8) popup_call6_1st_window_t3

0x0002,

0xfdf8,	// (0x0004fd2c) popup_call6_1st_window_t

0xea04,	// (0x0004e938) bg_popup_call2_in_pane_cp04

0xd47d,	// (0x0004d3b1) popup_call6_2nd_window_g1

0xd485,	// (0x0004d3b9) popup_call6_2nd_window_g2

0xd48d,	// (0x0004d3c1) popup_call6_2nd_window_g3

0x0002,

0xfdf1,	// (0x0004fd25) popup_call6_2nd_window_g

0xd495,	// (0x0004d3c9) popup_call6_2nd_window_t1

0xadb3,	// (0x0004ace7) bg_button_pane_cp15

0xd4c4,	// (0x0004d3f8) cell_call6_btn_pane_g1

0xd4cd,	// (0x0004d401) cell_call6_btn_pane_t1

0xa8b9,	// (0x0004a7ed) listscroll_wgtman_pane_ParamLimits

0xa8b9,	// (0x0004a7ed) listscroll_wgtman_pane

0xa8dc,	// (0x0004a810) wgtman_btn_pane_ParamLimits

0xa8dc,	// (0x0004a810) wgtman_btn_pane

0xe8bb,	// (0x0004e7ef) aid_scroll_copy1

0xd4dc,	// (0x0004d410) list_wgtman_pane

0xa91f,	// (0x0004a853) wgtman_btn_pane_g1_ParamLimits

0xa91f,	// (0x0004a853) wgtman_btn_pane_g1

0xa94b,	// (0x0004a87f) wgtman_btn_pane_t1_ParamLimits

0xa94b,	// (0x0004a87f) wgtman_btn_pane_t1

0xd4e6,	// (0x0004d41a) wgtman_btn_pane_t2_ParamLimits

0xd4e6,	// (0x0004d41a) wgtman_btn_pane_t2

0x0001,

0xfdff,	// (0x0004fd33) wgtman_btn_pane_t_ParamLimits

0xfdff,	// (0x0004fd33) wgtman_btn_pane_t

0xa988,	// (0x0004a8bc) listrow_wgtman_pane_ParamLimits

0xa988,	// (0x0004a8bc) listrow_wgtman_pane

0xa99a,	// (0x0004a8ce) listrow_wgtman_pane_g1

0xa9a3,	// (0x0004a8d7) listrow_wgtman_pane_g2

0x0001,

0xfe04,	// (0x0004fd38) listrow_wgtman_pane_g

0x1776,	// (0x000416aa) listrow_wgtman_pane_t1

0x1784,	// (0x000416b8) listrow_wgtman_pane_t2

0x0001,

0xfe09,	// (0x0004fd3d) listrow_wgtman_pane_t

0x1792,	// (0x000416c6) wait_bar_pane_cp09

0xd4fd,	// (0x0004d431) main_calllock_btn_pane

0xd507,	// (0x0004d43b) main_calllock_pane_g1

0xadb3,	// (0x0004ace7) bg_button_pane_cp17

0xd513,	// (0x0004d447) main_calllock_btn_pane_g1

0xd51c,	// (0x0004d450) main_calllock_btn_pane_t1

0xadb3,	// (0x0004ace7) main_dialer3_pane

0xadb3,	// (0x0004ace7) main_fmrd2_pane

0x6446,	// (0x0004637a) main_fs_bigclock_unlock_btn_pane_g1

0xd533,	// (0x0004d467) main_fs_bigclock_unlock_btn_pane_t1

0xa9ad,	// (0x0004a8e1) area_fmrd2_info_pane_ParamLimits

0xa9ad,	// (0x0004a8e1) area_fmrd2_info_pane

0xa9be,	// (0x0004a8f2) area_fmrd2_visual_pane_ParamLimits

0xa9be,	// (0x0004a8f2) area_fmrd2_visual_pane

0xa9cc,	// (0x0004a900) fmrd2_indi_pane_ParamLimits

0xa9cc,	// (0x0004a900) fmrd2_indi_pane

0xa9d9,	// (0x0004a90d) area_fmrd2_visual_pane_g1

0xa9e1,	// (0x0004a915) area_fmrd2_visual_pane_t1

0xa9f1,	// (0x0004a925) area_fmrd2_visual_pane_t2

0xaa01,	// (0x0004a935) area_fmrd2_visual_pane_t3

0x0002,

0xfe13,	// (0x0004fd47) area_fmrd2_visual_pane_t

0xaa11,	// (0x0004a945) area_fmrd2_info_pane_g1

0xaa19,	// (0x0004a94d) area_fmrd2_info_pane_t1

0xaa29,	// (0x0004a95d) area_fmrd2_info_pane_t2

0xaa39,	// (0x0004a96d) area_fmrd2_info_pane_t3

0xaa49,	// (0x0004a97d) area_fmrd2_info_pane_t4

0x0003,

0xfe1a,	// (0x0004fd4e) area_fmrd2_info_pane_t

0xaa57,	// (0x0004a98b) fmrd2_indi_pane_t1

0xaa67,	// (0x0004a99b) fmrd2_indi_pane_t2

0xaa77,	// (0x0004a9ab) fmrd2_indi_pane_t3

0x0002,

0xfe23,	// (0x0004fd57) fmrd2_indi_pane_t

0x9d33,	// (0x00049c67) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9d33,	// (0x00049c67) list_single_fs_bigclock_indicator_pane_g5

0x9dd7,	// (0x00049d0b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9dd7,	// (0x00049d0b) list_single_fs_bigclock_indicator_pane_t5

0xa309,	// (0x0004a23d) aid_cell_bcale_month_pane_ParamLimits

0xa309,	// (0x0004a23d) aid_cell_bcale_month_pane

0xa31b,	// (0x0004a24f) bcale_month_pane_ParamLimits

0xa31b,	// (0x0004a24f) bcale_month_pane

0xa333,	// (0x0004a267) bcale_preview_pane_ParamLimits

0xa333,	// (0x0004a267) bcale_preview_pane

0xd2c4,	// (0x0004d1f8) list_single_fs_bigclock_pane_t1_ParamLimits

0xd2e0,	// (0x0004d214) list_single_fs_bigclock_pane_t2_ParamLimits

0xd2e0,	// (0x0004d214) list_single_fs_bigclock_pane_t2

0x0001,

0xfdaa,	// (0x0004fcde) list_single_fs_bigclock_pane_t_ParamLimits

0xfdaa,	// (0x0004fcde) list_single_fs_bigclock_pane_t

0xd52b,	// (0x0004d45f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe0e,	// (0x0004fd42) main_fs_bigclock_unlock_btn_pane_g

0xaa87,	// (0x0004a9bb) aid_dia3_key_size_ParamLimits

0xaa87,	// (0x0004a9bb) aid_dia3_key_size

0xaa96,	// (0x0004a9ca) aid_dia3_listrow_size_ParamLimits

0xaa96,	// (0x0004a9ca) aid_dia3_listrow_size

0xaaab,	// (0x0004a9df) dia3_keypad_fun_pane_ParamLimits

0xaaab,	// (0x0004a9df) dia3_keypad_fun_pane

0xaac7,	// (0x0004a9fb) dia3_keypad_num_pane_ParamLimits

0xaac7,	// (0x0004a9fb) dia3_keypad_num_pane

0xaae2,	// (0x0004aa16) dia3_listscroll_pane_ParamLimits

0xaae2,	// (0x0004aa16) dia3_listscroll_pane

0xaaf5,	// (0x0004aa29) dia3_numentry_pane_ParamLimits

0xaaf5,	// (0x0004aa29) dia3_numentry_pane

0xd541,	// (0x0004d475) dia3_list_pane

0xd54c,	// (0x0004d480) scroll_pane_cp12

0xadb3,	// (0x0004ace7) bg_dia3_numentry_pane

0xab09,	// (0x0004aa3d) dia3_numentry_pane_t1

0xab18,	// (0x0004aa4c) cell_dia3_key_num_pane

0xab20,	// (0x0004aa54) cell_dia3_key0_fun_pane_ParamLimits

0xab20,	// (0x0004aa54) cell_dia3_key0_fun_pane

0xab34,	// (0x0004aa68) cell_dia3_key1_fun_pane_ParamLimits

0xab34,	// (0x0004aa68) cell_dia3_key1_fun_pane

0xab4c,	// (0x0004aa80) dia3_listrow_pane

0xc55c,	// (0x0004c490) bg_dia3_numentry_pane_g1

0xadb3,	// (0x0004ace7) bg_button_pane_cp21

0xd557,	// (0x0004d48b) cell_dia3_key_num_pane_t1

0xd565,	// (0x0004d499) cell_dia3_key_num_pane_t2

0xd574,	// (0x0004d4a8) cell_dia3_key_num_pane_t3

0xd583,	// (0x0004d4b7) cell_dia3_key_num_pane_t4

0x0003,

0xfe2a,	// (0x0004fd5e) cell_dia3_key_num_pane_t

0xadb3,	// (0x0004ace7) bg_button_pane_cp19

0xab5e,	// (0x0004aa92) cell_dia3_key0_fun_pane_g1

0xadb3,	// (0x0004ace7) bg_button_pane_cp20

0xab66,	// (0x0004aa9a) cell_dia3_key1_fun_pane_g1

0xab6e,	// (0x0004aaa2) area_left_week_number_pane

0xab77,	// (0x0004aaab) area_top_day_name_pane

0xab80,	// (0x0004aab4) frame_month_view_pane

0xab88,	// (0x0004aabc) grid_month_view_pane

0xab92,	// (0x0004aac6) cell_top_day_name_pane_ParamLimits

0xab92,	// (0x0004aac6) cell_top_day_name_pane

0xaba8,	// (0x0004aadc) cell_area_left_week_number_pane_ParamLimits

0xaba8,	// (0x0004aadc) cell_area_left_week_number_pane

0xabbc,	// (0x0004aaf0) cell_month_view_pane_ParamLimits

0xabbc,	// (0x0004aaf0) cell_month_view_pane

0xd592,	// (0x0004d4c6) frm_month_g1

0xabd7,	// (0x0004ab0b) frm_month_g2

0xabdf,	// (0x0004ab13) frm_month_g3

0xabe7,	// (0x0004ab1b) frm_month_g4

0xabef,	// (0x0004ab23) frm_month_g5

0xabf7,	// (0x0004ab2b) frm_month_g6

0xabff,	// (0x0004ab33) frm_month_g7

0xd59b,	// (0x0004d4cf) frm_month_g8

0xac07,	// (0x0004ab3b) frm_month_g9

0xac10,	// (0x0004ab44) frm_month_g10

0xac19,	// (0x0004ab4d) frm_month_g11

0xac22,	// (0x0004ab56) frm_month_g12

0xac2b,	// (0x0004ab5f) frm_month_g13

0xac34,	// (0x0004ab68) frm_month_g14

0xac3d,	// (0x0004ab71) frm_month_g15

0xac46,	// (0x0004ab7a) frm_month_g16

0x000f,

0xfe33,	// (0x0004fd67) frm_month_g

0xac4f,	// (0x0004ab83) cell_top_day_name_pane_t1

0xac5e,	// (0x0004ab92) cell_area_left_week_number_pane_g1

0xac4f,	// (0x0004ab83) cell_area_left_week_number_pane_t1

0x6446,	// (0x0004637a) cell_month_view_pane_g1

0xac66,	// (0x0004ab9a) cell_month_view_pane_t1

0xadb3,	// (0x0004ace7) main_fps_pane

0xca1a,	// (0x0004c94e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xca1a,	// (0x0004c94e) cmail_ddmenu_btn02_pane_cp1

0xca36,	// (0x0004c96a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xca36,	// (0x0004c96a) cmail_ddmenu_btn02_pane_cp2

0xa50c,	// (0x0004a440) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa50c,	// (0x0004a440) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd5b,	// (0x0004fc8f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd5b,	// (0x0004fc8f) cmail_ddmenu_btn02_pane_g

0xa52a,	// (0x0004a45e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa52a,	// (0x0004a45e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd60,	// (0x0004fc94) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd60,	// (0x0004fc94) cmail_ddmenu_btn02_pane_t

0xac75,	// (0x0004aba9) fps_text_pane_ParamLimits

0xac75,	// (0x0004aba9) fps_text_pane

0xac8c,	// (0x0004abc0) main_fps_pane_g1_ParamLimits

0xac8c,	// (0x0004abc0) main_fps_pane_g1

0xaca6,	// (0x0004abda) wait_bar_pane_cp010_ParamLimits

0xaca6,	// (0x0004abda) wait_bar_pane_cp010

0xacb7,	// (0x0004abeb) fps_text_pane_t1_ParamLimits

0xacb7,	// (0x0004abeb) fps_text_pane_t1

0xb7c1,	// (0x0004b6f5) cam4_image_uncrop_pane_g1

0xb7ca,	// (0x0004b6fe) cam4_image_uncrop_pane_g2

0x816e,	// (0x000480a2) cam4_image_uncrop_pane_g3

0x8177,	// (0x000480ab) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x0004f769) cam4_image_uncrop_pane_g

0xab4c,	// (0x0004aa80) dia3_listrow_pane_ParamLimits

0xadb3,	// (0x0004ace7) main_phob2_pane

0xa180,	// (0x0004a0b4) cell_tport_appsw_pane_cp02_ParamLimits

0xa180,	// (0x0004a0b4) cell_tport_appsw_pane_cp02

0xa194,	// (0x0004a0c8) cell_tport_appsw_pane_cp03_ParamLimits

0xa194,	// (0x0004a0c8) cell_tport_appsw_pane_cp03

0xadb3,	// (0x0004ace7) phob2_contact_card_pane

0xadb3,	// (0x0004ace7) phob2_listscroll_pane

0xd5a4,	// (0x0004d4d8) phob2_list_pane

0xd5ac,	// (0x0004d4e0) scroll_pane_cp034

0xaccf,	// (0x0004ac03) phob2_cc_data_pane_ParamLimits

0xaccf,	// (0x0004ac03) phob2_cc_data_pane

0xacee,	// (0x0004ac22) phob2_cc_listscroll_pane_ParamLimits

0xacee,	// (0x0004ac22) phob2_cc_listscroll_pane

0xad0c,	// (0x0004ac40) list_double_large_graphic_phob2_pane_ParamLimits

0xad0c,	// (0x0004ac40) list_double_large_graphic_phob2_pane

0xd5b4,	// (0x0004d4e8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd5b4,	// (0x0004d4e8) list_double_large_graphic_phob2_pane_g1

0xd5c1,	// (0x0004d4f5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd5c1,	// (0x0004d4f5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe54,	// (0x0004fd88) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe54,	// (0x0004fd88) list_double_large_graphic_phob2_pane_g

0xd5cd,	// (0x0004d501) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd5cd,	// (0x0004d501) list_double_large_graphic_phob2_pane_t1

0xd5e2,	// (0x0004d516) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd5e2,	// (0x0004d516) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe59,	// (0x0004fd8d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe59,	// (0x0004fd8d) list_double_large_graphic_phob2_pane_t

0xadb3,	// (0x0004ace7) list_highlight_pane_cp024

0xd5f4,	// (0x0004d528) phob2_cc_button_pane

0xad1e,	// (0x0004ac52) phob2_cc_data_pane_g1_ParamLimits

0xad1e,	// (0x0004ac52) phob2_cc_data_pane_g1

0xad33,	// (0x0004ac67) phob2_cc_data_pane_g2_ParamLimits

0xad33,	// (0x0004ac67) phob2_cc_data_pane_g2

0x0001,

0xfe5e,	// (0x0004fd92) phob2_cc_data_pane_g_ParamLimits

0xfe5e,	// (0x0004fd92) phob2_cc_data_pane_g

0xad45,	// (0x0004ac79) phob2_cc_data_pane_t1_ParamLimits

0xad45,	// (0x0004ac79) phob2_cc_data_pane_t1

0xad5d,	// (0x0004ac91) phob2_cc_data_pane_t2_ParamLimits

0xad5d,	// (0x0004ac91) phob2_cc_data_pane_t2

0xad75,	// (0x0004aca9) phob2_cc_data_pane_t3_ParamLimits

0xad75,	// (0x0004aca9) phob2_cc_data_pane_t3

0x0002,

0xfe63,	// (0x0004fd97) phob2_cc_data_pane_t_ParamLimits

0xfe63,	// (0x0004fd97) phob2_cc_data_pane_t

0xd5fc,	// (0x0004d530) phob2_cc_list_pane_ParamLimits

0xd5fc,	// (0x0004d530) phob2_cc_list_pane

0xbbe5,	// (0x0004bb19) scroll_pane_cp035_ParamLimits

0xbbe5,	// (0x0004bb19) scroll_pane_cp035

0xf0d2,	// (0x0004f006) bg_button_pane_cp033

0xd608,	// (0x0004d53c) phob2_cc_button_pane_g1

0xd614,	// (0x0004d548) phob2_cc_button_pane_t1

0xd629,	// (0x0004d55d) phob2_cc_button_pane_t2

0x0001,

0xfe6a,	// (0x0004fd9e) phob2_cc_button_pane_t

0xad8d,	// (0x0004acc1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xad8d,	// (0x0004acc1) list_double_large_graphic_phob2_cc_pane

0xad9f,	// (0x0004acd3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xad9f,	// (0x0004acd3) list_double_large_graphic_phob2_cc_pane_g1

0x179a,	// (0x000416ce) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x179a,	// (0x000416ce) list_double_large_graphic_phob2_cc_pane_g2

0x17a6,	// (0x000416da) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x17a6,	// (0x000416da) list_double_large_graphic_phob2_cc_pane_g3

0x17b2,	// (0x000416e6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x17b2,	// (0x000416e6) list_double_large_graphic_phob2_cc_pane_g4

0x17be,	// (0x000416f2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x17be,	// (0x000416f2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe6f,	// (0x0004fda3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe6f,	// (0x0004fda3) list_double_large_graphic_phob2_cc_pane_g

0x17ca,	// (0x000416fe) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x17ca,	// (0x000416fe) list_double_large_graphic_phob2_cc_pane_t1

0x17f3,	// (0x00041727) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x17f3,	// (0x00041727) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe7a,	// (0x0004fdae) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe7a,	// (0x0004fdae) list_double_large_graphic_phob2_cc_pane_t

0xd63b,	// (0x0004d56f) list_highlight_pane_cp025_ParamLimits

0xd63b,	// (0x0004d56f) list_highlight_pane_cp025

0xf0d2,	// (0x0004f006) bg_button_pane_cp033_ParamLimits

0xd608,	// (0x0004d53c) phob2_cc_button_pane_g1_ParamLimits

0xd614,	// (0x0004d548) phob2_cc_button_pane_t1_ParamLimits

0xd629,	// (0x0004d55d) phob2_cc_button_pane_t2_ParamLimits

0xfe6a,	// (0x0004fd9e) phob2_cc_button_pane_t_ParamLimits

0x1858,	// (0x0004178c) popup_wgtman_window

0xb9cc,	// (0x0004b900) scroll_pane_cp038

0xa901,	// (0x0004a835) wgtman_btn_pane_cp_01_ParamLimits

0xa901,	// (0x0004a835) wgtman_btn_pane_cp_01

0xd649,	// (0x0004d57d) wgtman_content_pane

0xd652,	// (0x0004d586) wgtman_heading_pane

0xadb3,	// (0x0004ace7) bg_heading_pane_cp02

0xd65b,	// (0x0004d58f) wgtman_heading_pane_g1

0xd663,	// (0x0004d597) wgtman_heading_pane_t1

0xd671,	// (0x0004d5a5) scroll_pane_cp036

0xd679,	// (0x0004d5ad) wgtman_list_pane

0xd681,	// (0x0004d5b5) wgtman_list_pane_t1_ParamLimits

0xd681,	// (0x0004d5b5) wgtman_list_pane_t1

0xb7ad,	// (0x0004b6e1) cam4_grid_pane

0x1065,	// (0x00040f99) bg_button_pane_cp015_ParamLimits

0x8ddb,	// (0x00048d0f) bg_button_pane_cp016_ParamLimits

0x8dee,	// (0x00048d22) bg_button_pane_cp017_ParamLimits

0x10ab,	// (0x00040fdf) popup_vitu2_query_window_g3_ParamLimits

0x10ab,	// (0x00040fdf) popup_vitu2_query_window_g3

0x1126,	// (0x0004105a) popup_vitu2_query_window_t6_ParamLimits

0x1126,	// (0x0004105a) popup_vitu2_query_window_t6

0x1151,	// (0x00041085) popup_vitu2_query_window_t7_ParamLimits

0x1151,	// (0x00041085) popup_vitu2_query_window_t7

0xb7c1,	// (0x0004b6f5) cam4_grid_pane_g1

0xb7ca,	// (0x0004b6fe) cam4_grid_pane_g2

0xd69e,	// (0x0004d5d2) cam4_grid_pane_g3

0xd6a7,	// (0x0004d5db) cam4_grid_pane_g4

0x0003,

0xfe7f,	// (0x0004fdb3) cam4_grid_pane_g

0x26f3,	// (0x00042627) aid_placing_vt_slider_lsc_ParamLimits

0x29fe,	// (0x00042932) vidtel_button_pane_ParamLimits

0x29fe,	// (0x00042932) vidtel_button_pane

0xadb3,	// (0x0004ace7) bg_button_pane_cp034

0xadab,	// (0x0004acdf) vidtel_button_pane_g1

0xd6b2,	// (0x0004d5e6) vidtel_button_pane_t1

0xbb04,	// (0x0004ba38) aid_size_vtel_slider_touch

0xbbe5,	// (0x0004bb19) scroll_pane_cp039

0xc59a,	// (0x0004c4ce) ncim_query_button_pane_cp01_ParamLimits

0xc5b9,	// (0x0004c4ed) ncimui_query_pane_g1_ParamLimits

0xf0d2,	// (0x0004f006) input_focus_pane_cp012_ParamLimits

0xc5de,	// (0x0004c512) ncim_query_entry_pane_t1_ParamLimits

0xbbe5,	// (0x0004bb19) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
