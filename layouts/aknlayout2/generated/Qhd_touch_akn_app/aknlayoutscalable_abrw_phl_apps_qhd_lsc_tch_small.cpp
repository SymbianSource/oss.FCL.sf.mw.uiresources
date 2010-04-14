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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006b7fc };

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
0x020e,	// (0x0006ba0a) Screen

0x021a,	// (0x0006ba16) application_window

0x0256,	// (0x0006ba52) area_bottom_pane_ParamLimits

0x0256,	// (0x0006ba52) area_bottom_pane

0x028f,	// (0x0006ba8b) area_top_pane_ParamLimits

0x028f,	// (0x0006ba8b) area_top_pane

0x9514,	// (0x00074d10) call_video_uplink_pane_ParamLimits

0x9514,	// (0x00074d10) call_video_uplink_pane

0x031d,	// (0x0006bb19) main_pane_ParamLimits

0x031d,	// (0x0006bb19) main_pane

0xc869,	// (0x00078065) context_pane

0x3978,	// (0x0006f174) navi_pane

0x39aa,	// (0x0006f1a6) popup_cale_events_window_ParamLimits

0x39aa,	// (0x0006f1a6) popup_cale_events_window

0xc87c,	// (0x00078078) popup_mup_playback_window

0x39c2,	// (0x0006f1be) signal_pane

0xa38c,	// (0x00075b88) main_browser_pane

0xb455,	// (0x00076c51) main_burst_pane

0x36c6,	// (0x0006eec2) main_calc_pane

0xc84f,	// (0x0007804b) main_cale_day_pane

0x36da,	// (0x0006eed6) main_cale_month_pane

0xc84f,	// (0x0007804b) main_cale_week_pane

0xb455,	// (0x00076c51) main_call_pane

0xa06c,	// (0x00075868) main_call_poc_pane

0xb455,	// (0x00076c51) main_camera_pane

0xb455,	// (0x00076c51) main_chi_dic_pane

0xb1d2,	// (0x000769ce) main_clock_pane

0xa06c,	// (0x00075868) main_fmradio_pane

0xb455,	// (0x00076c51) main_graph_messa_pane

0xa06c,	// (0x00075868) main_help_pane

0xa38c,	// (0x00075b88) main_im_pane

0xa2c7,	// (0x00075ac3) main_image_pane_ParamLimits

0xa2c7,	// (0x00075ac3) main_image_pane

0xa06c,	// (0x00075868) main_location2_pane

0xb455,	// (0x00076c51) main_location_pane

0xa2c7,	// (0x00075ac3) main_messa_pane

0xa06c,	// (0x00075868) main_mp2_pane

0xb455,	// (0x00076c51) main_mp_pane

0xa06c,	// (0x00075868) main_msg_pane

0xa06c,	// (0x00075868) main_mup_eq_pane

0xa06c,	// (0x00075868) main_mup_pane

0xa38c,	// (0x00075b88) main_notes_pane

0xa06c,	// (0x00075868) main_pec_pane

0xa06c,	// (0x00075868) main_phob_pane

0xa06c,	// (0x00075868) main_pinb_pane

0xa06c,	// (0x00075868) main_postcard_pane

0xa06c,	// (0x00075868) main_qdial_pane

0xb455,	// (0x00076c51) main_skin_pane

0xa06c,	// (0x00075868) main_smil2_pane

0xb455,	// (0x00076c51) main_smil_pane

0xb455,	// (0x00076c51) main_video_pane

0xb455,	// (0x00076c51) main_video_tele_pane

0xa2c7,	// (0x00075ac3) main_viewer_pane_ParamLimits

0xa2c7,	// (0x00075ac3) main_viewer_pane

0xb455,	// (0x00076c51) main_vorec_pane

0x372c,	// (0x0006ef28) popup_blid_sat_info_window_ParamLimits

0x372c,	// (0x0006ef28) popup_blid_sat_info_window

0x3784,	// (0x0006ef80) popup_dyc_status_message_window_ParamLimits

0x3784,	// (0x0006ef80) popup_dyc_status_message_window

0x379e,	// (0x0006ef9a) popup_grid_large_graphic_window_ParamLimits

0x379e,	// (0x0006ef9a) popup_grid_large_graphic_window

0x385a,	// (0x0006f056) popup_loc_request_window_ParamLimits

0x385a,	// (0x0006f056) popup_loc_request_window

0x3950,	// (0x0006f14c) popup_wml_address_window_ParamLimits

0x3950,	// (0x0006f14c) popup_wml_address_window

0x3500,	// (0x0006ecfc) call_muted_g1

0x31b5,	// (0x0006e9b1) popup_call_audio_conf_window_ParamLimits

0x31b5,	// (0x0006e9b1) popup_call_audio_conf_window

0x3514,	// (0x0006ed10) popup_call_audio_first_window_ParamLimits

0x3514,	// (0x0006ed10) popup_call_audio_first_window

0x358a,	// (0x0006ed86) popup_call_audio_in_window_ParamLimits

0x358a,	// (0x0006ed86) popup_call_audio_in_window

0x35c6,	// (0x0006edc2) popup_call_audio_out_window_ParamLimits

0x35c6,	// (0x0006edc2) popup_call_audio_out_window

0x3600,	// (0x0006edfc) popup_call_audio_second_window_ParamLimits

0x3600,	// (0x0006edfc) popup_call_audio_second_window

0x3656,	// (0x0006ee52) popup_call_audio_wait_window_ParamLimits

0x3656,	// (0x0006ee52) popup_call_audio_wait_window

0x368b,	// (0x0006ee87) popup_number_entry_window_ParamLimits

0x368b,	// (0x0006ee87) popup_number_entry_window

0x954a,	// (0x00074d46) bg_popup_call_pane_cp05_ParamLimits

0x954a,	// (0x00074d46) bg_popup_call_pane_cp05

0x956a,	// (0x00074d66) popup_number_entry_window_t1

0x957d,	// (0x00074d79) popup_number_entry_window_t2

0x958f,	// (0x00074d8b) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0007a8c2) popup_number_entry_window_t

0x95a1,	// (0x00074d9d) text_title_cp2

0x95b4,	// (0x00074db0) bg_popup_call_pane_cp_ParamLimits

0x95b4,	// (0x00074db0) bg_popup_call_pane_cp

0x95c2,	// (0x00074dbe) call_thumbnail_pane

0x95ca,	// (0x00074dc6) popup_call_audio_in_window_g1_ParamLimits

0x95ca,	// (0x00074dc6) popup_call_audio_in_window_g1

0x95d6,	// (0x00074dd2) popup_call_audio_in_window_g2_ParamLimits

0x95d6,	// (0x00074dd2) popup_call_audio_in_window_g2

0x95e2,	// (0x00074dde) popup_call_audio_in_window_g3_ParamLimits

0x95e2,	// (0x00074dde) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0007a8cb) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0007a8cb) popup_call_audio_in_window_g

0x95ee,	// (0x00074dea) popup_call_audio_in_window_t1_ParamLimits

0x95ee,	// (0x00074dea) popup_call_audio_in_window_t1

0x960a,	// (0x00074e06) popup_call_audio_in_window_t2_ParamLimits

0x960a,	// (0x00074e06) popup_call_audio_in_window_t2

0x9626,	// (0x00074e22) popup_call_audio_in_window_t3_ParamLimits

0x9626,	// (0x00074e22) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0007a8d2) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0007a8d2) popup_call_audio_in_window_t

0x95b4,	// (0x00074db0) bg_popup_call_pane_cp01_ParamLimits

0x95b4,	// (0x00074db0) bg_popup_call_pane_cp01

0x95c2,	// (0x00074dbe) call_thumbnail_pane_cp02

0x9639,	// (0x00074e35) call_type_pane_cp022

0x9641,	// (0x00074e3d) popup_call_audio_out_window_g1_ParamLimits

0x9641,	// (0x00074e3d) popup_call_audio_out_window_g1

0x9653,	// (0x00074e4f) popup_call_audio_out_window_g2_ParamLimits

0x9653,	// (0x00074e4f) popup_call_audio_out_window_g2

0x965f,	// (0x00074e5b) popup_call_audio_out_window_g3_ParamLimits

0x965f,	// (0x00074e5b) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0007a8d9) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0007a8d9) popup_call_audio_out_window_g

0x9671,	// (0x00074e6d) popup_call_audio_out_window_t1_ParamLimits

0x9671,	// (0x00074e6d) popup_call_audio_out_window_t1

0x9689,	// (0x00074e85) popup_call_audio_out_window_t2_ParamLimits

0x9689,	// (0x00074e85) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0007a8e0) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0007a8e0) popup_call_audio_out_window_t

0x969e,	// (0x00074e9a) bg_popup_call_pane_ParamLimits

0x969e,	// (0x00074e9a) bg_popup_call_pane

0x04d9,	// (0x0006bcd5) call_thumbnail_pane_cp_ParamLimits

0x04d9,	// (0x0006bcd5) call_thumbnail_pane_cp

0x9722,	// (0x00074f1e) call_type_pane_cp01_ParamLimits

0x9722,	// (0x00074f1e) call_type_pane_cp01

0x9766,	// (0x00074f62) popup_call_audio_first_window_g1_ParamLimits

0x9766,	// (0x00074f62) popup_call_audio_first_window_g1

0x97b2,	// (0x00074fae) popup_call_audio_first_window_g2_ParamLimits

0x97b2,	// (0x00074fae) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0007a8e5) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0007a8e5) popup_call_audio_first_window_g

0x97f6,	// (0x00074ff2) popup_call_audio_first_window_t1_ParamLimits

0x97f6,	// (0x00074ff2) popup_call_audio_first_window_t1

0x9fb1,	// (0x000757ad) popup_call_audio_first_window_t4_ParamLimits

0x9fb1,	// (0x000757ad) popup_call_audio_first_window_t4

0xa03d,	// (0x00075839) popup_call_audio_first_window_t5_ParamLimits

0xa03d,	// (0x00075839) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0007a8ea) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0007a8ea) popup_call_audio_first_window_t

0xa06c,	// (0x00075868) bg_popup_call_pane_cp02

0xa076,	// (0x00075872) call_type_pane_cp023

0xa07e,	// (0x0007587a) popup_call_audio_wait_window_g1

0xa086,	// (0x00075882) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007a8f1) popup_call_audio_wait_window_g

0xa08e,	// (0x0007588a) popup_call_audio_wait_window_t3

0xa09c,	// (0x00075898) bg_popup_call_pane_cp03_ParamLimits

0xa09c,	// (0x00075898) bg_popup_call_pane_cp03

0xa0fc,	// (0x000758f8) call_thumbnail_pane_cp011_ParamLimits

0xa0fc,	// (0x000758f8) call_thumbnail_pane_cp011

0xa108,	// (0x00075904) call_type_pane_cp034_ParamLimits

0xa108,	// (0x00075904) call_type_pane_cp034

0xa144,	// (0x00075940) popup_call_audio_second_window_g1_ParamLimits

0xa144,	// (0x00075940) popup_call_audio_second_window_g1

0xa180,	// (0x0007597c) popup_call_audio_second_window_g2_ParamLimits

0xa180,	// (0x0007597c) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0007a8f6) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0007a8f6) popup_call_audio_second_window_g

0xa1bc,	// (0x000759b8) popup_call_audio_second_window_t1_ParamLimits

0xa1bc,	// (0x000759b8) popup_call_audio_second_window_t1

0xa23d,	// (0x00075a39) popup_call_audio_second_window_t2_ParamLimits

0xa23d,	// (0x00075a39) popup_call_audio_second_window_t2

0xa273,	// (0x00075a6f) popup_call_audio_second_window_t3_ParamLimits

0xa273,	// (0x00075a6f) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0007a8fb) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0007a8fb) popup_call_audio_second_window_t

0xa06c,	// (0x00075868) bg_popup_call_pane_cp04

0xa2a9,	// (0x00075aa5) list_conf_pane

0xa2b1,	// (0x00075aad) popup_call_audio_conf_window_t1

0xa2bf,	// (0x00075abb) call_thumbnail_pane_g1

0xa2c7,	// (0x00075ac3) bg_pinb_pane_ParamLimits

0xa2c7,	// (0x00075ac3) bg_pinb_pane

0xa2d5,	// (0x00075ad1) find_pinb_pane

0xa2de,	// (0x00075ada) listscroll_pinb_pane_ParamLimits

0xa2de,	// (0x00075ada) listscroll_pinb_pane

0xa2ed,	// (0x00075ae9) pinb_bg_pane_g1

0x04fd,	// (0x0006bcf9) pinb_bg_pane_g2

0x0509,	// (0x0006bd05) pinb_bg_pane_g3

0x0515,	// (0x0006bd11) pinb_bg_pane_g4

0x0521,	// (0x0006bd1d) pinb_bg_pane_g5

0x052d,	// (0x0006bd29) pinb_bg_pane_g6

0x0538,	// (0x0006bd34) pinb_bg_pane_g7

0x0543,	// (0x0006bd3f) pinb_bg_pane_g8

0x054e,	// (0x0006bd4a) pinb_bg_pane_g9

0x0558,	// (0x0006bd54) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0007a902) pinb_bg_pane_g

0x0575,	// (0x0006bd71) grid_pinb_pane

0x057e,	// (0x0006bd7a) list_pinb_pane

0x0587,	// (0x0006bd83) scroll_pane_cp01_ParamLimits

0x0587,	// (0x0006bd83) scroll_pane_cp01

0xa2f7,	// (0x00075af3) find_pinb_pane_g1_ParamLimits

0xa2f7,	// (0x00075af3) find_pinb_pane_g1

0xa30f,	// (0x00075b0b) find_pinb_pane_t1

0xa321,	// (0x00075b1d) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0007a91c) find_pinb_pane_t

0xa336,	// (0x00075b32) input_focus_pane_cp01_ParamLimits

0xa336,	// (0x00075b32) input_focus_pane_cp01

0x0599,	// (0x0006bd95) cell_pinb_pane_ParamLimits

0x0599,	// (0x0006bd95) cell_pinb_pane

0x05c2,	// (0x0006bdbe) cell_pinb_pane_g1_ParamLimits

0x05c2,	// (0x0006bdbe) cell_pinb_pane_g1

0x05d2,	// (0x0006bdce) cell_pinb_pane_g2_ParamLimits

0x05d2,	// (0x0006bdce) cell_pinb_pane_g2

0xa342,	// (0x00075b3e) cell_pinb_pane_g3_ParamLimits

0xa342,	// (0x00075b3e) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0007a921) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0007a921) cell_pinb_pane_g

0xa06c,	// (0x00075868) grid_highlight_pane_cp01

0x05de,	// (0x0006bdda) list_pinb_item_pane_ParamLimits

0x05de,	// (0x0006bdda) list_pinb_item_pane

0xa06c,	// (0x00075868) list_highlight_pane_cp02

0x05f0,	// (0x0006bdec) list_pinb_item_pane_g1_ParamLimits

0x05f0,	// (0x0006bdec) list_pinb_item_pane_g1

0x05fd,	// (0x0006bdf9) list_pinb_item_pane_g2_ParamLimits

0x05fd,	// (0x0006bdf9) list_pinb_item_pane_g2

0x0609,	// (0x0006be05) list_pinb_item_pane_g3_ParamLimits

0x0609,	// (0x0006be05) list_pinb_item_pane_g3

0x061a,	// (0x0006be16) list_pinb_item_pane_g4_ParamLimits

0x061a,	// (0x0006be16) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0007a928) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0007a928) list_pinb_item_pane_g

0x0626,	// (0x0006be22) list_pinb_item_pane_t1_ParamLimits

0x0626,	// (0x0006be22) list_pinb_item_pane_t1

0x065b,	// (0x0006be57) calc_display_pane

0x0683,	// (0x0006be7f) calc_paper_pane

0x06a6,	// (0x0006bea2) grid_calc_pane

0xa06c,	// (0x00075868) bg_list_pane_cp01

0x06d4,	// (0x0006bed0) clock_g1

0x06dc,	// (0x0006bed8) clock_g2

0x0001,

0xf135,	// (0x0007a931) clock_g

0x06e4,	// (0x0006bee0) clock_t1_ParamLimits

0x06e4,	// (0x0006bee0) clock_t1

0x06f9,	// (0x0006bef5) clock_t2_ParamLimits

0x06f9,	// (0x0006bef5) clock_t2

0x070b,	// (0x0006bf07) clock_t3_ParamLimits

0x070b,	// (0x0006bf07) clock_t3

0x071d,	// (0x0006bf19) clock_t4_ParamLimits

0x071d,	// (0x0006bf19) clock_t4

0x072f,	// (0x0006bf2b) clock_t5_ParamLimits

0x072f,	// (0x0006bf2b) clock_t5

0x0744,	// (0x0006bf40) clock_t6_ParamLimits

0x0744,	// (0x0006bf40) clock_t6

0x0756,	// (0x0006bf52) clock_t7_ParamLimits

0x0756,	// (0x0006bf52) clock_t7

0x0768,	// (0x0006bf64) clock_t8_ParamLimits

0x0768,	// (0x0006bf64) clock_t8

0x077c,	// (0x0006bf78) clock_t9_ParamLimits

0x077c,	// (0x0006bf78) clock_t9

0x0008,

0xf13a,	// (0x0007a936) clock_t_ParamLimits

0xf13a,	// (0x0007a936) clock_t

0xa34e,	// (0x00075b4a) popup_clock_analogue_window_cp02

0xa34e,	// (0x00075b4a) popup_clock_digital_window_cp01

0xa356,	// (0x00075b52) listscroll_help_pane

0xa06c,	// (0x00075868) phob_pre_status_pane

0xa360,	// (0x00075b5c) grid_qdial_pane

0xa2c7,	// (0x00075ac3) listscroll_mce_pane

0xa2c7,	// (0x00075ac3) bg_notes_pane

0xa36a,	// (0x00075b66) list_notes_pane

0x0790,	// (0x0006bf8c) scroll_pane_cp06

0xa378,	// (0x00075b74) bg_calc_paper_pane

0x98aa,	// (0x000750a6) list_calc_pane

0xa38c,	// (0x00075b88) bg_calc_display_pane

0x07a4,	// (0x0006bfa0) calc_display_pane_t1

0x07b6,	// (0x0006bfb2) calc_display_pane_t2

0x98c4,	// (0x000750c0) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0007a949) calc_display_pane_t

0x07c8,	// (0x0006bfc4) cell_calc_pane_ParamLimits

0x07c8,	// (0x0006bfc4) cell_calc_pane

0xa398,	// (0x00075b94) bg_calc_paper_pane_g1

0xa3a4,	// (0x00075ba0) bg_calc_paper_pane_g2

0xa3b0,	// (0x00075bac) bg_calc_paper_pane_g3

0xa3bc,	// (0x00075bb8) bg_calc_paper_pane_g4

0xa3c8,	// (0x00075bc4) bg_calc_paper_pane_g5

0x07fd,	// (0x0006bff9) bg_calc_paper_pane_g6

0x080c,	// (0x0006c008) bg_calc_paper_pane_g7

0x081b,	// (0x0006c017) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0007a950) bg_calc_paper_pane_g

0x082e,	// (0x0006c02a) calc_bg_paper_pane_g9

0x0841,	// (0x0006c03d) list_calc_item_pane_ParamLimits

0x0841,	// (0x0006c03d) list_calc_item_pane

0xa3d4,	// (0x00075bd0) list_calc_item_pane_g1

0x98d6,	// (0x000750d2) list_calc_item_pane_t1_ParamLimits

0x98d6,	// (0x000750d2) list_calc_item_pane_t1

0x0856,	// (0x0006c052) list_calc_item_pane_t2_ParamLimits

0x0856,	// (0x0006c052) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0007a961) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0007a961) list_calc_item_pane_t

0xa3e1,	// (0x00075bdd) cell_calc_pane_g1

0xa3eb,	// (0x00075be7) grid_highlight_pane_cp02

0x0888,	// (0x0006c084) bg_calc_display_pane_g1

0x0891,	// (0x0006c08d) bg_calc_display_pane_g2

0x089b,	// (0x0006c097) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0007a96b) bg_calc_display_pane_g

0x08a4,	// (0x0006c0a0) cell_qdial_pane_ParamLimits

0x08a4,	// (0x0006c0a0) cell_qdial_pane

0x08b8,	// (0x0006c0b4) cell_qdial_pane_g1_ParamLimits

0x08b8,	// (0x0006c0b4) cell_qdial_pane_g1

0x08ce,	// (0x0006c0ca) cell_qdial_pane_g2_ParamLimits

0x08ce,	// (0x0006c0ca) cell_qdial_pane_g2

0xa40d,	// (0x00075c09) cell_qdial_pane_g3_ParamLimits

0xa40d,	// (0x00075c09) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0007a972) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0007a972) cell_qdial_pane_g

0x08f5,	// (0x0006c0f1) cell_qdial_pane_t1_ParamLimits

0x08f5,	// (0x0006c0f1) cell_qdial_pane_t1

0x090d,	// (0x0006c109) cell_qdial_pane_t2_ParamLimits

0x090d,	// (0x0006c109) cell_qdial_pane_t2

0x0920,	// (0x0006c11c) cell_qdial_pane_t3_ParamLimits

0x0920,	// (0x0006c11c) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0007a97b) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0007a97b) cell_qdial_pane_t

0xa06c,	// (0x00075868) grid_highlight_pane_cp04

0xa419,	// (0x00075c15) thumbnail_qdial_pane_ParamLimits

0xa419,	// (0x00075c15) thumbnail_qdial_pane

0xa475,	// (0x00075c71) list_help_pane

0xa47e,	// (0x00075c7a) scroll_pane_cp02

0x0933,	// (0x0006c12f) help_list_pane_t1_ParamLimits

0x0933,	// (0x0006c12f) help_list_pane_t1

0x98e8,	// (0x000750e4) bg_notes_pane_g2

0x98f0,	// (0x000750ec) bg_notes_pane_g3

0x98f8,	// (0x000750f4) notes_bg_pane_g1

0x9900,	// (0x000750fc) notes_bg_pane_g4

0x9908,	// (0x00075104) notes_bg_pane_g5

0x9910,	// (0x0007510c) notes_bg_pane_g6

0x9918,	// (0x00075114) notes_bg_pane_g7

0x9920,	// (0x0007511c) notes_bg_pane_g8

0x9928,	// (0x00075124) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0007a999) notes_bg_pane_g

0x0950,	// (0x0006c14c) list_notes_text_pane_ParamLimits

0x0950,	// (0x0006c14c) list_notes_text_pane

0xa487,	// (0x00075c83) list_notes_text_pane_g1

0x0965,	// (0x0006c161) list_notes_text_pane_t1

0x0973,	// (0x0006c16f) listscroll_cale_week_pane

0x099f,	// (0x0006c19b) bg_cale_heading_pane

0xa4aa,	// (0x00075ca6) bg_cale_pane_cp01

0x09b7,	// (0x0006c1b3) cale_week_corner_pane

0x09d6,	// (0x0006c1d2) cale_week_day_heading_pane

0x09f3,	// (0x0006c1ef) cale_week_scroll_pane_g1

0x0a06,	// (0x0006c202) cale_week_scroll_pane_g2

0x0a1e,	// (0x0006c21a) cale_week_scroll_pane_g3

0x0a36,	// (0x0006c232) cale_week_scroll_pane_g4

0x0a4e,	// (0x0006c24a) cale_week_scroll_pane_g5

0x0a6e,	// (0x0006c26a) cale_week_scroll_pane_g6

0x0a8e,	// (0x0006c28a) cale_week_scroll_pane_g7

0x0aae,	// (0x0006c2aa) cale_week_scroll_pane_g8

0x0ad2,	// (0x0006c2ce) cale_week_scroll_pane_g9

0x0aea,	// (0x0006c2e6) cale_week_scroll_pane_g10

0x0b02,	// (0x0006c2fe) cale_week_scroll_pane_g11

0x0b1a,	// (0x0006c316) cale_week_scroll_pane_g12

0x0b32,	// (0x0006c32e) cale_week_scroll_pane_g13

0x0b32,	// (0x0006c32e) cale_week_scroll_pane_g14

0x0b32,	// (0x0006c32e) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0007a9a8) cale_week_scroll_pane_g

0x0b6e,	// (0x0006c36a) cale_week_time_pane

0x0b92,	// (0x0006c38e) grid_cale_week_pane

0xa4da,	// (0x00075cd6) scroll_pane_cp08

0x0bb8,	// (0x0006c3b4) cell_cale_week_pane_ParamLimits

0x0bb8,	// (0x0006c3b4) cell_cale_week_pane

0x0c46,	// (0x0006c442) cale_week_day_heading_pane_t1

0x0c8b,	// (0x0006c487) cale_week_day_heading_pane_t2

0x0cd5,	// (0x0006c4d1) cale_week_day_heading_pane_t3

0x0d1f,	// (0x0006c51b) cale_week_day_heading_pane_t4

0x0d69,	// (0x0006c565) cale_week_day_heading_pane_t5

0x0dbb,	// (0x0006c5b7) cale_week_day_heading_pane_t6

0x0e0d,	// (0x0006c609) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0007a9c9) cale_week_day_heading_pane_t

0xa4f7,	// (0x00075cf3) bg_cale_side_pane

0x0e52,	// (0x0006c64e) cale_week_time_pane_t1

0x0e6c,	// (0x0006c668) cale_week_time_pane_t2

0x0e86,	// (0x0006c682) cale_week_time_pane_t3

0x0ea0,	// (0x0006c69c) cale_week_time_pane_t4

0x0eba,	// (0x0006c6b6) cale_week_time_pane_t5

0x0ed4,	// (0x0006c6d0) cale_week_time_pane_t6

0x0eee,	// (0x0006c6ea) cale_week_time_pane_t7

0x0f08,	// (0x0006c704) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0007a9d8) cale_week_time_pane_t

0x0f28,	// (0x0006c724) cell_cale_week_pane_g2

0x0f47,	// (0x0006c743) cell_cale_week_pane_g3_ParamLimits

0x0f47,	// (0x0006c743) cell_cale_week_pane_g3

0xa505,	// (0x00075d01) grid_highlight_pane_cp07

0xa50d,	// (0x00075d09) listscroll_gms_pane

0xa517,	// (0x00075d13) grid_gms_pane

0xa520,	// (0x00075d1c) listscroll_gms_pane_g1

0xa528,	// (0x00075d24) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0007a9e9) listscroll_gms_pane_g

0x0f5f,	// (0x0006c75b) scroll_pane_cp010

0x0f6a,	// (0x0006c766) cell_gms_pane_ParamLimits

0x0f6a,	// (0x0006c766) cell_gms_pane

0x0f7d,	// (0x0006c779) cell_gms_pane_g1

0xa530,	// (0x00075d2c) cell_gms_pane_g2

0xa538,	// (0x00075d34) cell_gms_pane_g3

0xa541,	// (0x00075d3d) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0007a9ee) cell_gms_pane_g

0xa54a,	// (0x00075d46) grid_highlight_pane_cp09

0x34aa,	// (0x0006eca6) phob_pre_status_pane_g1

0x34b2,	// (0x0006ecae) phob_pre_status_pane_g2

0x34ba,	// (0x0006ecb6) phob_pre_status_pane_g3

0x34c2,	// (0x0006ecbe) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0007addd) phob_pre_status_pane_g

0x34d2,	// (0x0006ecce) phob_pre_status_pane_t1

0x34e0,	// (0x0006ecdc) phob_pre_status_pane_t2

0x34f0,	// (0x0006ecec) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007ade8) phob_pre_status_pane_t

0xa06c,	// (0x00075868) bg_list_pane_cp05

0x0f8d,	// (0x0006c789) grid_vorec_pane

0x0f95,	// (0x0006c791) vorec_t1

0x0fa3,	// (0x0006c79f) vorec_t2

0x0fb1,	// (0x0006c7ad) vorec_t3

0x0fbf,	// (0x0006c7bb) vorec_t4

0x9930,	// (0x0007512c) vorec_t5

0x0fcd,	// (0x0006c7c9) vorec_t6

0x0006,

0xf1fb,	// (0x0007a9f7) vorec_t

0x0fe9,	// (0x0006c7e5) wait_bar_pane_cp01

0x0ff1,	// (0x0006c7ed) cell_vorec_pane_ParamLimits

0x0ff1,	// (0x0006c7ed) cell_vorec_pane

0x993e,	// (0x0007513a) cell_vorec_pane_g1

0xa06c,	// (0x00075868) grid_highlight_pane_cp05

0x1019,	// (0x0006c815) cams_zoom_pane

0x1028,	// (0x0006c824) image_vga_pane

0x1042,	// (0x0006c83e) main_camera_pane_g1

0x1054,	// (0x0006c850) main_camera_pane_g2

0x1064,	// (0x0006c860) main_camera_pane_g3

0x1074,	// (0x0006c870) main_camera_pane_g4

0x1084,	// (0x0006c880) main_camera_pane_g5

0x1094,	// (0x0006c890) main_camera_pane_g6

0x10a6,	// (0x0006c8a2) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007aa06) main_camera_pane_g

0x10b6,	// (0x0006c8b2) main_camera_pane_t1

0x10cc,	// (0x0006c8c8) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007aa17) main_camera_pane_t

0x1106,	// (0x0006c902) cams_zoom_pane_cp_ParamLimits

0x1106,	// (0x0006c902) cams_zoom_pane_cp

0x112e,	// (0x0006c92a) image_cif_pane_ParamLimits

0x112e,	// (0x0006c92a) image_cif_pane

0x1164,	// (0x0006c960) image_subqcif_pane

0x116c,	// (0x0006c968) main_video_pane_g1_ParamLimits

0x116c,	// (0x0006c968) main_video_pane_g1

0x1190,	// (0x0006c98c) main_video_pane_g2_ParamLimits

0x1190,	// (0x0006c98c) main_video_pane_g2

0x11c4,	// (0x0006c9c0) main_video_pane_g3_ParamLimits

0x11c4,	// (0x0006c9c0) main_video_pane_g3

0x11f2,	// (0x0006c9ee) main_video_pane_g4_ParamLimits

0x11f2,	// (0x0006c9ee) main_video_pane_g4

0x1220,	// (0x0006ca1c) main_video_pane_g5_ParamLimits

0x1220,	// (0x0006ca1c) main_video_pane_g5

0xa55e,	// (0x00075d5a) main_video_pane_g6_ParamLimits

0xa55e,	// (0x00075d5a) main_video_pane_g6

0x0006,

0xf220,	// (0x0007aa1c) main_video_pane_g_ParamLimits

0xf220,	// (0x0007aa1c) main_video_pane_g

0x1249,	// (0x0006ca45) main_video_pane_t1_ParamLimits

0x1249,	// (0x0006ca45) main_video_pane_t1

0xaa1d,	// (0x00076219) cams_zoom_pane_g1

0xaa26,	// (0x00076222) cams_zoom_pane_g2

0xaa2f,	// (0x0007622b) cams_zoom_pane_g3

0xaa38,	// (0x00076234) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007aa2b) cams_zoom_pane_g

0x12a6,	// (0x0006caa2) grid_cams_pane

0x12c0,	// (0x0006cabc) linegrid_cams_pane

0x12d4,	// (0x0006cad0) cell_cams_pane_ParamLimits

0x12d4,	// (0x0006cad0) cell_cams_pane

0xaa41,	// (0x0007623d) cams_burst_image_pane

0xaa49,	// (0x00076245) cell_cams_pane_g1

0xa06c,	// (0x00075868) grid_highlight_pane_cp03

0xa3e1,	// (0x00075bdd) mp_bg_pane_g1

0xa06c,	// (0x00075868) bg_list_pane_cp03

0xc774,	// (0x00077f70) bg_mp_pane

0xc77c,	// (0x00077f78) grid_mp_pane

0xc784,	// (0x00077f80) media_player_g1

0xc78c,	// (0x00077f88) media_player_t1

0xc79a,	// (0x00077f96) media_player_t2

0xc7a8,	// (0x00077fa4) media_player_t3

0xc7b6,	// (0x00077fb2) media_player_t4

0xc7c4,	// (0x00077fc0) media_player_t5

0xc7d2,	// (0x00077fce) media_player_t6

0xc7e0,	// (0x00077fdc) media_player_t7

0x0006,

0xf5cb,	// (0x0007adc7) media_player_t

0xc7ee,	// (0x00077fea) wait_bar_pane_cp02

0xf5b0,	// (0x0007adac) main_usb_pane_t

0x34a1,	// (0x0006ec9d) cell_mp_pane

0xa3e1,	// (0x00075bdd) cell_mp_pane_g1

0xa06c,	// (0x00075868) grid_highlight_pane_cp06

0xaa51,	// (0x0007624d) grid_skin_colour_pane

0xaa59,	// (0x00076255) list_highlight_pane_cp03

0x140a,	// (0x0006cc06) skin_g1

0xaa61,	// (0x0007625d) skin_t1

0xaa70,	// (0x0007626c) skin_t2

0x0001,

0xf264,	// (0x0007aa60) skin_t

0x1412,	// (0x0006cc0e) cell_skin_colour_pane_ParamLimits

0x1412,	// (0x0006cc0e) cell_skin_colour_pane

0xaa7e,	// (0x0007627a) cell_skin_colour_pane_g1

0x148b,	// (0x0006cc87) call_video_g1_ParamLimits

0x148b,	// (0x0006cc87) call_video_g1

0x14a7,	// (0x0006cca3) call_video_g2_ParamLimits

0x14a7,	// (0x0006cca3) call_video_g2

0x0001,

0xf269,	// (0x0007aa65) call_video_g_ParamLimits

0xf269,	// (0x0007aa65) call_video_g

0x14f9,	// (0x0006ccf5) call_video_uplink_pane_cp1_ParamLimits

0x14f9,	// (0x0006ccf5) call_video_uplink_pane_cp1

0xaa90,	// (0x0007628c) call_video_uplink_pane_cp2

0x1598,	// (0x0006cd94) video_down_crop_pane_ParamLimits

0x1598,	// (0x0006cd94) video_down_crop_pane

0x168f,	// (0x0006ce8b) video_down_pane_ParamLimits

0x168f,	// (0x0006ce8b) video_down_pane

0xaa98,	// (0x00076294) video_down_subqcif_pane_ParamLimits

0xaa98,	// (0x00076294) video_down_subqcif_pane

0xaab0,	// (0x000762ac) video_down_subqcif_pane_cp_ParamLimits

0xaab0,	// (0x000762ac) video_down_subqcif_pane_cp

0xaad6,	// (0x000762d2) im_reading_pane_ParamLimits

0xaad6,	// (0x000762d2) im_reading_pane

0x179d,	// (0x0006cf99) im_writing_pane_ParamLimits

0x179d,	// (0x0006cf99) im_writing_pane

0x17b3,	// (0x0006cfaf) im_reading_pane_t1

0xaaf0,	// (0x000762ec) list_im_pane

0xab01,	// (0x000762fd) scroll_pane_cp07

0x17ec,	// (0x0006cfe8) im_writing_pane_t1_ParamLimits

0x17ec,	// (0x0006cfe8) im_writing_pane_t1

0xab1a,	// (0x00076316) im_writing_pane_t2_ParamLimits

0xab1a,	// (0x00076316) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007aa6f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007aa6f) im_writing_pane_t

0xa06c,	// (0x00075868) input_focus_pane_cp04

0xa06c,	// (0x00075868) input_focus_pane_cp05

0x1801,	// (0x0006cffd) list_im_single_pane_ParamLimits

0x1801,	// (0x0006cffd) list_im_single_pane

0x1815,	// (0x0006d011) list_single_im_pane_t1

0x3461,	// (0x0006ec5d) blid_accuracy_pane

0x3469,	// (0x0006ec65) blid_compass_pane

0x3473,	// (0x0006ec6f) main_location_t1

0x3483,	// (0x0006ec7f) main_location_t2

0x3493,	// (0x0006ec8f) main_location_t3

0x0002,

0xf5da,	// (0x0007add6) main_location_t

0xa06c,	// (0x00075868) aid_levels_location

0xa3e1,	// (0x00075bdd) blid_accuracy_pane_g1

0xa3e1,	// (0x00075bdd) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007aad1) blid_accuracy_pane_g

0xab62,	// (0x0007635e) wml_content_pane

0xaba0,	// (0x0007639c) wml_button_pane_ParamLimits

0xaba0,	// (0x0007639c) wml_button_pane

0x1824,	// (0x0006d020) wml_list_single_large_pane_ParamLimits

0x1824,	// (0x0006d020) wml_list_single_large_pane

0x1839,	// (0x0006d035) wml_list_single_medium_pane_ParamLimits

0x1839,	// (0x0006d035) wml_list_single_medium_pane

0x184f,	// (0x0006d04b) wml_list_single_small_pane_ParamLimits

0x184f,	// (0x0006d04b) wml_list_single_small_pane

0xabb4,	// (0x000763b0) wml_selection_box_pane_ParamLimits

0xabb4,	// (0x000763b0) wml_selection_box_pane

0xabc7,	// (0x000763c3) wml_list_single_pane_t1

0xabd6,	// (0x000763d2) wml_list_single_medium_pane_t1

0xabe5,	// (0x000763e1) wml_list_single_large_pane_t1

0xabf4,	// (0x000763f0) input_focus_pane_cp02_ParamLimits

0xabf4,	// (0x000763f0) input_focus_pane_cp02

0xac07,	// (0x00076403) wml_selection_box_pane_g1

0xac10,	// (0x0007640c) wml_selection_box_pane_t1_ParamLimits

0xac10,	// (0x0007640c) wml_selection_box_pane_t1

0xa2c7,	// (0x00075ac3) bg_wml_button_pane_ParamLimits

0xa2c7,	// (0x00075ac3) bg_wml_button_pane

0xac28,	// (0x00076424) wml_button_pane_g1

0xac30,	// (0x0007642c) wml_button_pane_t1

0xac28,	// (0x00076424) wml_button_bg_pane_g1

0xac40,	// (0x0007643c) wml_button_bg_pane_g2

0xac48,	// (0x00076444) wml_button_bg_pane_g3

0xac50,	// (0x0007644c) wml_button_bg_pane_g4

0xac58,	// (0x00076454) wml_button_bg_pane_g5

0xac60,	// (0x0007645c) wml_button_bg_pane_g6

0xac68,	// (0x00076464) wml_button_bg_pane_g7

0xac70,	// (0x0007646c) wml_button_bg_pane_g8

0xac78,	// (0x00076474) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007aa74) wml_button_bg_pane_g

0x1867,	// (0x0006d063) bg_list_pane_cp02

0xac80,	// (0x0007647c) mce_header_pane_ParamLimits

0xac80,	// (0x0007647c) mce_header_pane

0xac96,	// (0x00076492) mce_icon_pane

0xac96,	// (0x00076492) mce_image_pane

0xac9f,	// (0x0007649b) mce_text_pane_ParamLimits

0xac9f,	// (0x0007649b) mce_text_pane

0x186f,	// (0x0006d06b) scroll_pane_cp03

0xab98,	// (0x00076394) scroll_pane_cp04

0xacb2,	// (0x000764ae) scroll_pane_cp05_ParamLimits

0xacb2,	// (0x000764ae) scroll_pane_cp05

0x1879,	// (0x0006d075) mce_header_field_pane_ParamLimits

0x1879,	// (0x0006d075) mce_header_field_pane

0x1890,	// (0x0006d08c) mce_header_field_pane_2_ParamLimits

0x1890,	// (0x0006d08c) mce_header_field_pane_2

0x18a6,	// (0x0006d0a2) mce_header_field_pane_3

0x18ae,	// (0x0006d0aa) list_single_mce_message_pane_ParamLimits

0x18ae,	// (0x0006d0aa) list_single_mce_message_pane

0x18c3,	// (0x0006d0bf) list_single_mce_smart_pane_ParamLimits

0x18c3,	// (0x0006d0bf) list_single_mce_smart_pane

0xacbe,	// (0x000764ba) input_focus_pane_cp03

0xacc7,	// (0x000764c3) list_header_data_pane

0x18e3,	// (0x0006d0df) mce_header_field_pane_t1

0x18f3,	// (0x0006d0ef) list_single_mce_header_pane_ParamLimits

0x18f3,	// (0x0006d0ef) list_single_mce_header_pane

0xaccf,	// (0x000764cb) list_single_mce_header_pane_t1

0xacde,	// (0x000764da) list_single_mce_message_pane_g1

0xace6,	// (0x000764e2) list_single_mce_message_pane_t1

0x192d,	// (0x0006d129) bg_cale_heading_pane_cp01_ParamLimits

0x192d,	// (0x0006d129) bg_cale_heading_pane_cp01

0xacf4,	// (0x000764f0) bg_cale_pane_cp02_ParamLimits

0xacf4,	// (0x000764f0) bg_cale_pane_cp02

0x195c,	// (0x0006d158) cale_month_corner_pane

0x197b,	// (0x0006d177) cale_month_day_heading_pane_ParamLimits

0x197b,	// (0x0006d177) cale_month_day_heading_pane

0x19c2,	// (0x0006d1be) cale_month_pane_g1_ParamLimits

0x19c2,	// (0x0006d1be) cale_month_pane_g1

0x19e6,	// (0x0006d1e2) cale_month_pane_g2_ParamLimits

0x19e6,	// (0x0006d1e2) cale_month_pane_g2

0x1a16,	// (0x0006d212) cale_month_pane_g3_ParamLimits

0x1a16,	// (0x0006d212) cale_month_pane_g3

0x1a52,	// (0x0006d24e) cale_month_pane_g4_ParamLimits

0x1a52,	// (0x0006d24e) cale_month_pane_g4

0x1a8e,	// (0x0006d28a) cale_month_pane_g5_ParamLimits

0x1a8e,	// (0x0006d28a) cale_month_pane_g5

0x1ad6,	// (0x0006d2d2) cale_month_pane_g6_ParamLimits

0x1ad6,	// (0x0006d2d2) cale_month_pane_g6

0x1b22,	// (0x0006d31e) cale_month_pane_g7_ParamLimits

0x1b22,	// (0x0006d31e) cale_month_pane_g7

0x1b76,	// (0x0006d372) cale_month_pane_g8_ParamLimits

0x1b76,	// (0x0006d372) cale_month_pane_g8

0x1bca,	// (0x0006d3c6) cale_month_pane_g9_ParamLimits

0x1bca,	// (0x0006d3c6) cale_month_pane_g9

0x1c1c,	// (0x0006d418) cale_month_pane_g10_ParamLimits

0x1c1c,	// (0x0006d418) cale_month_pane_g10

0x1c6e,	// (0x0006d46a) cale_month_pane_g11_ParamLimits

0x1c6e,	// (0x0006d46a) cale_month_pane_g11

0x1cc0,	// (0x0006d4bc) cale_month_pane_g12_ParamLimits

0x1cc0,	// (0x0006d4bc) cale_month_pane_g12

0x1d12,	// (0x0006d50e) cale_month_pane_g13_ParamLimits

0x1d12,	// (0x0006d50e) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007aa87) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007aa87) cale_month_pane_g

0x1d64,	// (0x0006d560) cale_month_week_pane

0x1d88,	// (0x0006d584) grid_cale_month_pane_ParamLimits

0x1d88,	// (0x0006d584) grid_cale_month_pane

0x1dc6,	// (0x0006d5c2) cale_month_day_heading_pane_t1

0x1e4c,	// (0x0006d648) cale_month_day_heading_pane_t2

0x1edd,	// (0x0006d6d9) cale_month_day_heading_pane_t3

0x1f6e,	// (0x0006d76a) cale_month_day_heading_pane_t4

0x2003,	// (0x0006d7ff) cale_month_day_heading_pane_t5

0x20a4,	// (0x0006d8a0) cale_month_day_heading_pane_t6

0x2145,	// (0x0006d941) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007aaa2) cale_month_day_heading_pane_t

0xa4f7,	// (0x00075cf3) bg_cale_side_pane_cp01

0x21ee,	// (0x0006d9ea) cale_month_week_pane_t1

0x2207,	// (0x0006da03) cale_month_week_pane_t2

0x2220,	// (0x0006da1c) cale_month_week_pane_t3

0x2239,	// (0x0006da35) cale_month_week_pane_t4

0x2252,	// (0x0006da4e) cale_month_week_pane_t5

0x226b,	// (0x0006da67) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007aab1) cale_month_week_pane_t

0x2284,	// (0x0006da80) cell_cale_month_pane_ParamLimits

0x2284,	// (0x0006da80) cell_cale_month_pane

0x9948,	// (0x00075144) cell_cale_month_pane_g1

0x23d8,	// (0x0006dbd4) cell_cale_month_pane_t1_ParamLimits

0x23d8,	// (0x0006dbd4) cell_cale_month_pane_t1

0xa505,	// (0x00075d01) grid_highlight_pane_cp08

0xa3e1,	// (0x00075bdd) main_smil_g1

0x23f8,	// (0x0006dbf4) smil_status_pane

0xad33,	// (0x0007652f) smil_text_pane

0xc694,	// (0x00077e90) bg_popup_call3_rect_pane_g8

0xc69c,	// (0x00077e98) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ad6a) bg_popup_call3_rect_pane_g

0xc8e3,	// (0x000780df) smil_status_volume_pane_g1

0xad3d,	// (0x00076539) smil_status_pane_t1

0x9a92,	// (0x0007528e) volume_smil_pane

0xad54,	// (0x00076550) list_smil_text_pane

0x240b,	// (0x0006dc07) scroll_pane_cp011

0x2416,	// (0x0006dc12) smil_text_list_pane_t1_ParamLimits

0x2416,	// (0x0006dc12) smil_text_list_pane_t1

0x9954,	// (0x00075150) aid_volume_smil_ParamLimits

0x9954,	// (0x00075150) aid_volume_smil

0xa3e1,	// (0x00075bdd) smil_volume_pane_g1

0xa3e1,	// (0x00075bdd) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007aad1) smil_volume_pane_g

0x0973,	// (0x0006c16f) listscroll_cale_day_pane

0xad5e,	// (0x0007655a) bg_cale_pane

0xad76,	// (0x00076572) list_cale_pane

0xad99,	// (0x00076595) scroll_pane_cp09

0xadaa,	// (0x000765a6) cale_bg_pane_g1

0xadb2,	// (0x000765ae) cale_bg_pane_g2

0xadba,	// (0x000765b6) cale_bg_pane_g3

0xadc2,	// (0x000765be) cale_bg_pane_g4

0xadca,	// (0x000765c6) cale_bg_pane_g5

0xadd2,	// (0x000765ce) cale_bg_pane_g6

0xadda,	// (0x000765d6) cale_bg_pane_g7

0xade2,	// (0x000765de) cale_bg_pane_g8

0xadea,	// (0x000765e6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007aad6) cale_bg_pane_g

0x245a,	// (0x0006dc56) list_cale_time_pane_ParamLimits

0x245a,	// (0x0006dc56) list_cale_time_pane

0xadf2,	// (0x000765ee) list_cale_time_pane_g1_ParamLimits

0xadf2,	// (0x000765ee) list_cale_time_pane_g1

0xadfe,	// (0x000765fa) list_cale_time_pane_g2_ParamLimits

0xadfe,	// (0x000765fa) list_cale_time_pane_g2

0x246f,	// (0x0006dc6b) list_cale_time_pane_g3_ParamLimits

0x246f,	// (0x0006dc6b) list_cale_time_pane_g3

0x247d,	// (0x0006dc79) list_cale_time_pane_g4_ParamLimits

0x247d,	// (0x0006dc79) list_cale_time_pane_g4

0x248b,	// (0x0006dc87) list_cale_time_pane_g5_ParamLimits

0x248b,	// (0x0006dc87) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007aae9) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007aae9) list_cale_time_pane_g

0xae18,	// (0x00076614) list_cale_time_pane_t1_ParamLimits

0xae18,	// (0x00076614) list_cale_time_pane_t1

0xae40,	// (0x0007663c) list_cale_time_pane_t2_ParamLimits

0xae40,	// (0x0007663c) list_cale_time_pane_t2

0x27ec,	// (0x0006dfe8) aid_blid_cardinal_pane

0x282a,	// (0x0006e026) compass_pane_t4

0xae68,	// (0x00076664) list_cale_time_pane_t4_ParamLimits

0xae68,	// (0x00076664) list_cale_time_pane_t4

0x2838,	// (0x0006e034) compass_pane_t5

0x2846,	// (0x0006e042) compass_pane_t6

0x2854,	// (0x0006e050) compass_pane_t7

0xb317,	// (0x00076b13) navi_pane_cc_t1

0xb50a,	// (0x00076d06) aid_phob_thumbnail_center_pane

0x2e79,	// (0x0006e675) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007aaf6) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007aaf6) list_cale_time_pane_t

0x95b4,	// (0x00074db0) bg_popup_window_pane_cp02_ParamLimits

0x95b4,	// (0x00074db0) bg_popup_window_pane_cp02

0xae90,	// (0x0007668c) heading_pane_cp01_ParamLimits

0xae90,	// (0x0007668c) heading_pane_cp01

0xae9c,	// (0x00076698) loc_req_pane_ParamLimits

0xae9c,	// (0x00076698) loc_req_pane

0xaeac,	// (0x000766a8) loc_type_pane_ParamLimits

0xaeac,	// (0x000766a8) loc_type_pane

0xaebe,	// (0x000766ba) loc_type_pane_t1_ParamLimits

0xaebe,	// (0x000766ba) loc_type_pane_t1

0xaed0,	// (0x000766cc) loc_type_pane_t2_ParamLimits

0xaed0,	// (0x000766cc) loc_type_pane_t2

0xaee2,	// (0x000766de) loc_type_pane_t3_ParamLimits

0xaee2,	// (0x000766de) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007aafd) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007aafd) loc_type_pane_t

0xaef4,	// (0x000766f0) list_loc_req_pane

0xaefe,	// (0x000766fa) scroll_pane_cp012

0x2499,	// (0x0006dc95) list_single_loc_request_popup_menu_pane_ParamLimits

0x2499,	// (0x0006dc95) list_single_loc_request_popup_menu_pane

0xaf09,	// (0x00076705) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf09,	// (0x00076705) list_single_loc_request_popup_menu_pane_g1

0xaf15,	// (0x00076711) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf15,	// (0x00076711) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007ab04) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007ab04) list_single_loc_request_popup_menu_pane_g

0xaf21,	// (0x0007671d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf21,	// (0x0007671d) list_single_loc_request_popup_menu_pane_t1

0xa2c7,	// (0x00075ac3) bg_popup_window_pane_cp03_ParamLimits

0xa2c7,	// (0x00075ac3) bg_popup_window_pane_cp03

0xaf37,	// (0x00076733) heading_loc_req_pane_ParamLimits

0xaf37,	// (0x00076733) heading_loc_req_pane

0x24a6,	// (0x0006dca2) popup_dyc_status_message_window_g1_ParamLimits

0x24a6,	// (0x0006dca2) popup_dyc_status_message_window_g1

0x24ba,	// (0x0006dcb6) popup_dyc_status_message_window_t1_ParamLimits

0x24ba,	// (0x0006dcb6) popup_dyc_status_message_window_t1

0x24cf,	// (0x0006dccb) popup_dyc_status_message_window_t2_ParamLimits

0x24cf,	// (0x0006dccb) popup_dyc_status_message_window_t2

0x24e4,	// (0x0006dce0) popup_dyc_status_message_window_t3_ParamLimits

0x24e4,	// (0x0006dce0) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007ab09) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007ab09) popup_dyc_status_message_window_t

0xa06c,	// (0x00075868) bg_heading_pane_cp01

0xaf43,	// (0x0007673f) heading_loc_req_pane_g1

0xaf4b,	// (0x00076747) heading_loc_req_pane_g2

0xaf53,	// (0x0007674f) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007ab10) heading_loc_req_pane_g

0xaf5b,	// (0x00076757) heading_loc_req_pane_t1

0xaf6a,	// (0x00076766) bg_popup_sub_pane_cp01_ParamLimits

0xaf6a,	// (0x00076766) bg_popup_sub_pane_cp01

0xaf78,	// (0x00076774) popup_cale_events_window_g1_ParamLimits

0xaf78,	// (0x00076774) popup_cale_events_window_g1

0xaf98,	// (0x00076794) popup_cale_events_window_g2_ParamLimits

0xaf98,	// (0x00076794) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007ab44) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007ab44) popup_cale_events_window_g

0xafb8,	// (0x000767b4) popup_cale_events_window_t1_ParamLimits

0xafb8,	// (0x000767b4) popup_cale_events_window_t1

0xafca,	// (0x000767c6) popup_cale_events_window_t2_ParamLimits

0xafca,	// (0x000767c6) popup_cale_events_window_t2

0xb008,	// (0x00076804) popup_cale_events_window_t3_ParamLimits

0xb008,	// (0x00076804) popup_cale_events_window_t3

0xb042,	// (0x0007683e) popup_cale_events_window_t4_ParamLimits

0xb042,	// (0x0007683e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007ab49) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007ab49) popup_cale_events_window_t

0x25e7,	// (0x0006dde3) call_type_pane

0x25f7,	// (0x0006ddf3) popup_call_status_window_g1

0x260b,	// (0x0006de07) popup_call_status_window_g2

0x261f,	// (0x0006de1b) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007ab52) popup_call_status_window_g

0xb078,	// (0x00076874) call_type_pane_g1

0xb081,	// (0x0007687d) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007ab59) call_type_pane_g

0xa06c,	// (0x00075868) bg_popup_sub_pane_cp02

0xb08a,	// (0x00076886) listscroll_popup_wml_pane

0xb092,	// (0x0007688e) list_wml_pane

0xb09c,	// (0x00076898) scroll_pane_cp013

0xb0a7,	// (0x000768a3) list_single_graphic_popup_wml_pane_ParamLimits

0xb0a7,	// (0x000768a3) list_single_graphic_popup_wml_pane

0xa3e1,	// (0x00075bdd) list_single_graphic_popup_wml_pane_g1

0xb0bb,	// (0x000768b7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007ab5e) list_single_graphic_popup_wml_pane_g

0xb0c3,	// (0x000768bf) list_single_graphic_popup_wml_pane_t1

0xb0d9,	// (0x000768d5) aid_call_pane

0xa2bf,	// (0x00075abb) popup_clock_analogue_window_g1

0xa2bf,	// (0x00075abb) popup_clock_analogue_window_g2

0x9976,	// (0x00075172) popup_clock_analogue_window_g3

0x9976,	// (0x00075172) popup_clock_analogue_window_g4

0xa3e1,	// (0x00075bdd) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007ab63) popup_clock_analogue_window_g

0x997e,	// (0x0007517a) popup_clock_analogue_window_t1

0x998c,	// (0x00075188) clock_digital_number_pane_ParamLimits

0x998c,	// (0x00075188) clock_digital_number_pane

0x9998,	// (0x00075194) clock_digital_number_pane_cp02_ParamLimits

0x9998,	// (0x00075194) clock_digital_number_pane_cp02

0x99a4,	// (0x000751a0) clock_digital_number_pane_cp03_ParamLimits

0x99a4,	// (0x000751a0) clock_digital_number_pane_cp03

0x99b0,	// (0x000751ac) clock_digital_number_pane_cp04_ParamLimits

0x99b0,	// (0x000751ac) clock_digital_number_pane_cp04

0x99c0,	// (0x000751bc) clock_digital_separator_pane_ParamLimits

0x99c0,	// (0x000751bc) clock_digital_separator_pane

0x99cc,	// (0x000751c8) popup_clock_digital_window_t1

0xa3e1,	// (0x00075bdd) clock_digital_number_pane_g1

0xa3e1,	// (0x00075bdd) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007aad1) clock_digital_number_pane_g

0xa3e1,	// (0x00075bdd) clock_digital_separator_pane_g1

0xa3e1,	// (0x00075bdd) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007aad1) clock_digital_separator_pane_g

0xa06c,	// (0x00075868) bg_popup_window_pane_cp04

0xb0e1,	// (0x000768dd) heading_pane_cp03

0xb0e9,	// (0x000768e5) listscroll_popup_gms_pane

0xb0f1,	// (0x000768ed) grid_large_graphic_popup_pane

0xb0fb,	// (0x000768f7) listscroll_popup_gms_pane_g1

0xb103,	// (0x000768ff) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007ab6e) listscroll_popup_gms_pane_g

0xab98,	// (0x00076394) scroll_pane_cp014

0x262e,	// (0x0006de2a) cell_large_graphic_popup_pane_ParamLimits

0x262e,	// (0x0006de2a) cell_large_graphic_popup_pane

0x2646,	// (0x0006de42) cell_large_graphic_popup_pane_g1_ParamLimits

0x2646,	// (0x0006de42) cell_large_graphic_popup_pane_g1

0xb10b,	// (0x00076907) cell_large_graphic_popup_pane_g2_ParamLimits

0xb10b,	// (0x00076907) cell_large_graphic_popup_pane_g2

0xb117,	// (0x00076913) cell_large_graphic_popup_pane_g3_ParamLimits

0xb117,	// (0x00076913) cell_large_graphic_popup_pane_g3

0xb124,	// (0x00076920) cell_large_graphic_popup_pane_g4_ParamLimits

0xb124,	// (0x00076920) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007ab73) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007ab73) cell_large_graphic_popup_pane_g

0xb134,	// (0x00076930) grid_highlight_pane_cp010

0xa3e1,	// (0x00075bdd) bg_popup_call_pane_g1

0xb13e,	// (0x0007693a) list_single_graphic_popup_conf_pane_ParamLimits

0xb13e,	// (0x0007693a) list_single_graphic_popup_conf_pane

0xb151,	// (0x0007694d) list_highlight_pane_cp01

0xb15a,	// (0x00076956) list_single_graphic_popup_conf_pane_g1

0xb162,	// (0x0007695e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007ab7c) list_single_graphic_popup_conf_pane_g

0xb16a,	// (0x00076966) list_single_graphic_popup_conf_pane_t1

0xb178,	// (0x00076974) linegrid_cams_pane_g1

0x2652,	// (0x0006de4e) linegrid_cams_pane_g2

0xa538,	// (0x00075d34) linegrid_cams_pane_g3

0xb181,	// (0x0007697d) linegrid_cams_pane_g4

0x265b,	// (0x0006de57) linegrid_cams_pane_g5

0x2664,	// (0x0006de60) linegrid_cams_pane_g6

0xa541,	// (0x00075d3d) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007ab81) linegrid_cams_pane_g

0xb18a,	// (0x00076986) popup_clock_analogue_window

0xb18a,	// (0x00076986) popup_clock_digital_window

0xa06c,	// (0x00075868) popup_phob_thumbnail_window

0xa3e1,	// (0x00075bdd) call_video_uplink_pane_g1

0xb193,	// (0x0007698f) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007ab90) call_video_uplink_pane_g

0xb19b,	// (0x00076997) video_uplink_pane

0xb1a3,	// (0x0007699f) mce_image_pane_g1

0x266f,	// (0x0006de6b) mce_image_pane_g2

0x2679,	// (0x0006de75) mce_image_pane_g3

0x2681,	// (0x0006de7d) mce_image_pane_g4

0x2689,	// (0x0006de85) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007ab95) mce_image_pane_g

0xb1ad,	// (0x000769a9) control_top_pane_stacon_cp01_ParamLimits

0xb1ad,	// (0x000769a9) control_top_pane_stacon_cp01

0xb1c1,	// (0x000769bd) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1c1,	// (0x000769bd) uni_indicator_pane_stacon_cp01

0xb1d2,	// (0x000769ce) bg_popup_sub_pane_cp03

0xb1dc,	// (0x000769d8) chi_dic_find_pane

0x2691,	// (0x0006de8d) listscroll_chi_dic_pane

0xb1e4,	// (0x000769e0) main_pane_chidic_g1

0xb1ec,	// (0x000769e8) chi_dic_find_pane_t1

0xb1fa,	// (0x000769f6) find_chidic_pane

0xb203,	// (0x000769ff) chi_dic_list_pane_ParamLimits

0xb203,	// (0x000769ff) chi_dic_list_pane

0xb214,	// (0x00076a10) scroll_pane_cp020

0xb21c,	// (0x00076a18) find_chidic_pane_t1

0xa06c,	// (0x00075868) input_focus_pane_cp06

0x26a5,	// (0x0006dea1) list_chi_dic_pane_ParamLimits

0x26a5,	// (0x0006dea1) list_chi_dic_pane

0x26b7,	// (0x0006deb3) list_chi_dic_pane_t1_ParamLimits

0x26b7,	// (0x0006deb3) list_chi_dic_pane_t1

0xa06c,	// (0x00075868) list_highlight_pane_cp020

0xb22b,	// (0x00076a27) bg_cale_heading_pane_g1

0x26ca,	// (0x0006dec6) bg_cale_heading_pane_g2

0x26d2,	// (0x0006dece) bg_cale_heading_pane_g3

0x26da,	// (0x0006ded6) bg_cale_heading_pane_g4

0x26e4,	// (0x0006dee0) bg_cale_heading_pane_g5

0x26ee,	// (0x0006deea) bg_cale_heading_pane_g6

0x26f6,	// (0x0006def2) bg_cale_heading_pane_g7

0x26fe,	// (0x0006defa) bg_cale_heading_pane_g8

0x2708,	// (0x0006df04) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007aba0) bg_cale_heading_pane_g

0xb22b,	// (0x00076a27) bg_cale_side_pane_g1

0x2712,	// (0x0006df0e) bg_cale_side_pane_g2

0x271a,	// (0x0006df16) bg_cale_side_pane_g3

0x2722,	// (0x0006df1e) bg_cale_side_pane_g4

0x272a,	// (0x0006df26) bg_cale_side_pane_g5

0x2732,	// (0x0006df2e) bg_cale_side_pane_g6

0x273a,	// (0x0006df36) bg_cale_side_pane_g7

0x2742,	// (0x0006df3e) bg_cale_side_pane_g8

0x274a,	// (0x0006df46) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007abb3) bg_cale_side_pane_g

0x2752,	// (0x0006df4e) popup_call_status_window_ParamLimits

0x2752,	// (0x0006df4e) popup_call_status_window

0xb233,	// (0x00076a2f) stacon_top_pane

0xb23b,	// (0x00076a37) status_pane_ParamLimits

0xb23b,	// (0x00076a37) status_pane

0xb250,	// (0x00076a4c) status_small_pane

0xb258,	// (0x00076a54) control_pane

0xa06c,	// (0x00075868) stacon_bottom_pane

0xb260,	// (0x00076a5c) list_single_mce_smart_pane_t1_ParamLimits

0xb260,	// (0x00076a5c) list_single_mce_smart_pane_t1

0xb273,	// (0x00076a6f) list_single_mce_smart_pane_t2_ParamLimits

0xb273,	// (0x00076a6f) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007abc6) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007abc6) list_single_mce_smart_pane_t

0x279b,	// (0x0006df97) compass_pane

0x27a4,	// (0x0006dfa0) main_location2_pane_t1

0x27b6,	// (0x0006dfb2) main_location2_pane_t2

0x27c8,	// (0x0006dfc4) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007abcb) main_location2_pane_t

0xb292,	// (0x00076a8e) compass_pane_g1_ParamLimits

0xb292,	// (0x00076a8e) compass_pane_g1

0x280c,	// (0x0006e008) compass_pane_t1

0x281b,	// (0x0006e017) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007abd4) compass_pane_t

0x2862,	// (0x0006e05e) text_secondary_cp61

0xb30e,	// (0x00076b0a) navi_pane_cams_g5

0xb38a,	// (0x00076b86) navi_pane_im_t1

0xb398,	// (0x00076b94) navi_pane_mp_g1_ParamLimits

0xb398,	// (0x00076b94) navi_pane_mp_g1

0xb3ac,	// (0x00076ba8) navi_pane_mp_g2_ParamLimits

0xb3ac,	// (0x00076ba8) navi_pane_mp_g2

0xb3b8,	// (0x00076bb4) navi_pane_mp_g3_ParamLimits

0xb3b8,	// (0x00076bb4) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007abe8) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007abe8) navi_pane_mp_g

0xb3c4,	// (0x00076bc0) navi_pane_mp_t1

0xb3d2,	// (0x00076bce) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007abef) navi_pane_mp_t

0xb43d,	// (0x00076c39) navi_pane_vt_g1

0xb3c4,	// (0x00076bc0) navi_pane_vt_t1

0xb445,	// (0x00076c41) navi_slider_pane

0xb455,	// (0x00076c51) zooming_pane

0xb45d,	// (0x00076c59) navi_slider_pane_g1

0x99e9,	// (0x000751e5) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007abf6) navi_slider_pane_g

0xb48f,	// (0x00076c8b) aid_levels_zoom

0xb497,	// (0x00076c93) zooming_pane_g1

0xb49f,	// (0x00076c9b) zooming_pane_g2

0xb49f,	// (0x00076c9b) zooming_pane_g3

0x0002,

0xf409,	// (0x0007ac05) zooming_pane_g

0xb4a7,	// (0x00076ca3) level_10_zoom

0xb4b0,	// (0x00076cac) level_11_zoom

0xb4b9,	// (0x00076cb5) level_1_zoom

0xb4c2,	// (0x00076cbe) level_2_zoom

0xb4cb,	// (0x00076cc7) level_3_zoom

0xb4d4,	// (0x00076cd0) level_4_zoom

0xb4dd,	// (0x00076cd9) level_5_zoom

0xb4e6,	// (0x00076ce2) level_6_zoom

0xb4ef,	// (0x00076ceb) level_7_zoom

0xb4f8,	// (0x00076cf4) level_8_zoom

0xb501,	// (0x00076cfd) level_9_zoom

0xb512,	// (0x00076d0e) popup_phob_thumbnail_window_g1

0xb51a,	// (0x00076d16) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007ac0c) popup_phob_thumbnail_window_g

0xc7f6,	// (0x00077ff2) level_1_location

0xc7fe,	// (0x00077ffa) level_2_location

0xc806,	// (0x00078002) level_3_location

0xc80e,	// (0x0007800a) level_4_location

0xb455,	// (0x00076c51) level_5_location

0x28b3,	// (0x0006e0af) mce_icon_pane_g1

0x28bd,	// (0x0006e0b9) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007ac11) mce_icon_pane_g

0x28c5,	// (0x0006e0c1) main_mup_pane_g1_ParamLimits

0x28c5,	// (0x0006e0c1) main_mup_pane_g1

0x28db,	// (0x0006e0d7) main_mup_pane_g2_ParamLimits

0x28db,	// (0x0006e0d7) main_mup_pane_g2

0x28f3,	// (0x0006e0ef) main_mup_pane_g3_ParamLimits

0x28f3,	// (0x0006e0ef) main_mup_pane_g3

0x290b,	// (0x0006e107) main_mup_pane_g4_ParamLimits

0x290b,	// (0x0006e107) main_mup_pane_g4

0x2923,	// (0x0006e11f) main_mup_pane_g5_ParamLimits

0x2923,	// (0x0006e11f) main_mup_pane_g5

0x293f,	// (0x0006e13b) main_mup_pane_g6_ParamLimits

0x293f,	// (0x0006e13b) main_mup_pane_g6

0x2957,	// (0x0006e153) main_mup_pane_g7_ParamLimits

0x2957,	// (0x0006e153) main_mup_pane_g7

0x296f,	// (0x0006e16b) main_mup_pane_g8_ParamLimits

0x296f,	// (0x0006e16b) main_mup_pane_g8

0x2989,	// (0x0006e185) main_mup_pane_g9_ParamLimits

0x2989,	// (0x0006e185) main_mup_pane_g9

0x29a3,	// (0x0006e19f) main_mup_pane_g10_ParamLimits

0x29a3,	// (0x0006e19f) main_mup_pane_g10

0x29bd,	// (0x0006e1b9) main_mup_pane_g11_ParamLimits

0x29bd,	// (0x0006e1b9) main_mup_pane_g11

0x29d1,	// (0x0006e1cd) main_mup_pane_g12_ParamLimits

0x29d1,	// (0x0006e1cd) main_mup_pane_g12

0x29e7,	// (0x0006e1e3) main_mup_pane_g13_ParamLimits

0x29e7,	// (0x0006e1e3) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007ac16) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007ac16) main_mup_pane_g

0x29fb,	// (0x0006e1f7) main_mup_pane_t1_ParamLimits

0x29fb,	// (0x0006e1f7) main_mup_pane_t1

0x2a15,	// (0x0006e211) main_mup_pane_t2_ParamLimits

0x2a15,	// (0x0006e211) main_mup_pane_t2

0x2a2d,	// (0x0006e229) main_mup_pane_t3_ParamLimits

0x2a2d,	// (0x0006e229) main_mup_pane_t3

0x2a45,	// (0x0006e241) main_mup_pane_t4_ParamLimits

0x2a45,	// (0x0006e241) main_mup_pane_t4

0x2a63,	// (0x0006e25f) main_mup_pane_t5_ParamLimits

0x2a63,	// (0x0006e25f) main_mup_pane_t5

0x2a78,	// (0x0006e274) main_mup_pane_t6_ParamLimits

0x2a78,	// (0x0006e274) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007ac31) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007ac31) main_mup_pane_t

0x2a8a,	// (0x0006e286) mup_progress_pane_ParamLimits

0x2a8a,	// (0x0006e286) mup_progress_pane

0x2a96,	// (0x0006e292) mup_visualizer_pane_ParamLimits

0x2a96,	// (0x0006e292) mup_visualizer_pane

0x2ac6,	// (0x0006e2c2) mup_volume_pane_ParamLimits

0x2ac6,	// (0x0006e2c2) mup_volume_pane

0xb46f,	// (0x00076c6b) mup_visualizer_pane_g1_ParamLimits

0xb46f,	// (0x00076c6b) mup_visualizer_pane_g1

0xb46f,	// (0x00076c6b) mup_visualizer_pane_g2_ParamLimits

0xb46f,	// (0x00076c6b) mup_visualizer_pane_g2

0xb292,	// (0x00076a8e) mup_visualizer_pane_g3_ParamLimits

0xb292,	// (0x00076a8e) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007ac3e) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007ac3e) mup_visualizer_pane_g

0xa3e1,	// (0x00075bdd) mup_volume_pane_g1

0xb52a,	// (0x00076d26) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007ac45) mup_volume_pane_g

0xa3e1,	// (0x00075bdd) mup_progress_pane_g1

0xb533,	// (0x00076d2f) mup_progress_pane_g2

0xb53c,	// (0x00076d38) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007ac4a) mup_progress_pane_g

0xa06c,	// (0x00075868) bg_popup_window_pane_cp05

0xb545,	// (0x00076d41) heading_pane_cp02_ParamLimits

0xb545,	// (0x00076d41) heading_pane_cp02

0xb55f,	// (0x00076d5b) list_popup_blid_pane

0xb567,	// (0x00076d63) list_blid_sat_info_pane_ParamLimits

0xb567,	// (0x00076d63) list_blid_sat_info_pane

0xb57a,	// (0x00076d76) list_blid_sat_info_pane_g1

0xb582,	// (0x00076d7e) list_blid_sat_info_pane_t1

0x2bdc,	// (0x0006e3d8) mup_equalizer_pane_ParamLimits

0x2bdc,	// (0x0006e3d8) mup_equalizer_pane

0x2bf5,	// (0x0006e3f1) mup_equalizer_pane_cp1_ParamLimits

0x2bf5,	// (0x0006e3f1) mup_equalizer_pane_cp1

0x2c12,	// (0x0006e40e) mup_equalizer_pane_cp2_ParamLimits

0x2c12,	// (0x0006e40e) mup_equalizer_pane_cp2

0x2c2f,	// (0x0006e42b) mup_equalizer_pane_cp3_ParamLimits

0x2c2f,	// (0x0006e42b) mup_equalizer_pane_cp3

0x2c50,	// (0x0006e44c) mup_equalizer_pane_cp4_ParamLimits

0x2c50,	// (0x0006e44c) mup_equalizer_pane_cp4

0x2c71,	// (0x0006e46d) mup_equalizer_pane_cp5

0x2c85,	// (0x0006e481) mup_equalizer_pane_cp6

0x2c99,	// (0x0006e495) mup_equalizer_pane_cp7

0xc714,	// (0x00077f10) bg_popup_call_poc_act_pane_g9

0xc71c,	// (0x00077f18) bg_popup_call_poc_act_pane_g10

0xc724,	// (0x00077f20) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2c7,	// (0x00075ac3) mup_scale_pane

0xa3e1,	// (0x00075bdd) mup_scale_pane_g1

0xb590,	// (0x00076d8c) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007ac66) mup_scale_pane_g

0xb5b4,	// (0x00076db0) msg_data_pane

0xb5bc,	// (0x00076db8) scroll_pane_cp017

0x2cbf,	// (0x0006e4bb) bg_list_pane_cp04_ParamLimits

0x2cbf,	// (0x0006e4bb) bg_list_pane_cp04

0xb5c4,	// (0x00076dc0) msg_data_pane_g1

0x2cd7,	// (0x0006e4d3) msg_data_pane_g2

0x2ce1,	// (0x0006e4dd) msg_data_pane_g3

0x2ce9,	// (0x0006e4e5) msg_data_pane_g4

0x2cf1,	// (0x0006e4ed) msg_data_pane_g5

0x2cf9,	// (0x0006e4f5) msg_data_pane_g6

0x2d01,	// (0x0006e4fd) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007ac75) msg_data_pane_g

0x2d09,	// (0x0006e505) msg_text_pane_ParamLimits

0x2d09,	// (0x0006e505) msg_text_pane

0x2d2e,	// (0x0006e52a) qrid_highlight_pane_cp011_ParamLimits

0x2d2e,	// (0x0006e52a) qrid_highlight_pane_cp011

0xa06c,	// (0x00075868) msg_body_pane

0xa06c,	// (0x00075868) msg_header_pane

0xb5d5,	// (0x00076dd1) input_focus_pane_cp07

0x2d52,	// (0x0006e54e) msg_header_pane_t1_ParamLimits

0x2d52,	// (0x0006e54e) msg_header_pane_t1

0xa580,	// (0x00075d7c) msg_header_pane_t2_ParamLimits

0xa580,	// (0x00075d7c) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007ac89) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007ac89) msg_header_pane_t

0xb5ea,	// (0x00076de6) msg_body_pane_g1

0x2d64,	// (0x0006e560) msg_body_pane_t1_ParamLimits

0x2d64,	// (0x0006e560) msg_body_pane_t1

0xa592,	// (0x00075d8e) msg_body_pane_t2_ParamLimits

0xa592,	// (0x00075d8e) msg_body_pane_t2

0xa5a4,	// (0x00075da0) msg_body_pane_t3_ParamLimits

0xa5a4,	// (0x00075da0) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007ac8e) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007ac8e) msg_body_pane_t

0x2dcf,	// (0x0006e5cb) main_viewer_pane_g1_ParamLimits

0x2dcf,	// (0x0006e5cb) main_viewer_pane_g1

0x2ddd,	// (0x0006e5d9) main_viewer_pane_g2_ParamLimits

0x2ddd,	// (0x0006e5d9) main_viewer_pane_g2

0x2deb,	// (0x0006e5e7) main_viewer_pane_g3_ParamLimits

0x2deb,	// (0x0006e5e7) main_viewer_pane_g3

0x2dfa,	// (0x0006e5f6) main_viewer_pane_g4_ParamLimits

0x2dfa,	// (0x0006e5f6) main_viewer_pane_g4

0x9a13,	// (0x0007520f) main_viewer_pane_g5_ParamLimits

0x9a13,	// (0x0007520f) main_viewer_pane_g5

0x9a13,	// (0x0007520f) main_viewer_pane_g7_ParamLimits

0x9a13,	// (0x0007520f) main_viewer_pane_g7

0xaf09,	// (0x00076705) main_viewer_pane_g8_ParamLimits

0xaf09,	// (0x00076705) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007ac9e) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007ac9e) main_viewer_pane_g

0xb5f2,	// (0x00076dee) viewer_content_pane_ParamLimits

0xb5f2,	// (0x00076dee) viewer_content_pane

0x2e36,	// (0x0006e632) main_postcard_pane_g1_ParamLimits

0x2e36,	// (0x0006e632) main_postcard_pane_g1

0x2e4c,	// (0x0006e648) main_postcard_pane_g2_ParamLimits

0x2e4c,	// (0x0006e648) main_postcard_pane_g2

0x2e62,	// (0x0006e65e) main_postcard_pane_g3_ParamLimits

0x2e62,	// (0x0006e65e) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007acaf) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007acaf) main_postcard_pane_g

0x2e79,	// (0x0006e675) main_postcard_pane_g4

0xc8f6,	// (0x000780f2) smil_status_volume_pane_g2

0x2ebc,	// (0x0006e6b8) postcard_pane_ParamLimits

0x2ebc,	// (0x0006e6b8) postcard_pane

0xb600,	// (0x00076dfc) postcard_pane_g1_ParamLimits

0xb600,	// (0x00076dfc) postcard_pane_g1

0x2efe,	// (0x0006e6fa) postcard_pane_g2_ParamLimits

0x2efe,	// (0x0006e6fa) postcard_pane_g2

0x2f0a,	// (0x0006e706) postcard_pane_g3_ParamLimits

0x2f0a,	// (0x0006e706) postcard_pane_g3

0xb60e,	// (0x00076e0a) postcard_pane_g4_ParamLimits

0xb60e,	// (0x00076e0a) postcard_pane_g4

0x2f16,	// (0x0006e712) postcard_pane_g5_ParamLimits

0x2f16,	// (0x0006e712) postcard_pane_g5

0x2f2b,	// (0x0006e727) postcard_pane_g6_ParamLimits

0x2f2b,	// (0x0006e727) postcard_pane_g6

0xb600,	// (0x00076dfc) postcard_pane_g7_ParamLimits

0xb600,	// (0x00076dfc) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007acbc) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007acbc) postcard_pane_g

0x2f3f,	// (0x0006e73b) main_mp2_pane_g1_ParamLimits

0x2f3f,	// (0x0006e73b) main_mp2_pane_g1

0x2f4b,	// (0x0006e747) main_mp2_pane_g2_ParamLimits

0x2f4b,	// (0x0006e747) main_mp2_pane_g2

0x2f57,	// (0x0006e753) main_mp2_pane_g3_ParamLimits

0x2f57,	// (0x0006e753) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007accb) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007accb) main_mp2_pane_g

0x2f63,	// (0x0006e75f) main_mp2_pane_t1_ParamLimits

0x2f63,	// (0x0006e75f) main_mp2_pane_t1

0x2f78,	// (0x0006e774) main_mp2_pane_t2_ParamLimits

0x2f78,	// (0x0006e774) main_mp2_pane_t2

0x2f8a,	// (0x0006e786) main_mp2_pane_t3_ParamLimits

0x2f8a,	// (0x0006e786) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007acd2) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007acd2) main_mp2_pane_t

0xb61c,	// (0x00076e18) pec_content_pane_ParamLimits

0xb61c,	// (0x00076e18) pec_content_pane

0xab98,	// (0x00076394) scroll_pane_cp015

0xb62e,	// (0x00076e2a) pec_attribute_pane_ParamLimits

0xb62e,	// (0x00076e2a) pec_attribute_pane

0x2f9c,	// (0x0006e798) pec_content_pane_g1_ParamLimits

0x2f9c,	// (0x0006e798) pec_content_pane_g1

0xb63e,	// (0x00076e3a) pec_content_pane_t1_ParamLimits

0xb63e,	// (0x00076e3a) pec_content_pane_t1

0xb650,	// (0x00076e4c) pec_content_pane_t2_ParamLimits

0xb650,	// (0x00076e4c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007acd9) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007acd9) pec_content_pane_t

0x2fa8,	// (0x0006e7a4) list_single_graphic_pane_cp01_ParamLimits

0x2fa8,	// (0x0006e7a4) list_single_graphic_pane_cp01

0xa2c7,	// (0x00075ac3) bg_popup_sub_pane_cp04

0xb662,	// (0x00076e5e) popup_mup_playback_window_g1

0xb66e,	// (0x00076e6a) popup_mup_playback_window_t1

0xb683,	// (0x00076e7f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007acde) popup_mup_playback_window_t

0xb6ba,	// (0x00076eb6) main_image_pane_g1_ParamLimits

0xb6ba,	// (0x00076eb6) main_image_pane_g1

0xb6fd,	// (0x00076ef9) scroll_pane_cp018_ParamLimits

0xb6fd,	// (0x00076ef9) scroll_pane_cp018

0xb715,	// (0x00076f11) scroll_pane_cp016_ParamLimits

0xb715,	// (0x00076f11) scroll_pane_cp016

0x3075,	// (0x0006e871) smil2_image_pane_ParamLimits

0x3075,	// (0x0006e871) smil2_image_pane

0x30a5,	// (0x0006e8a1) smil2_root_pane_ParamLimits

0x30a5,	// (0x0006e8a1) smil2_root_pane

0x30dd,	// (0x0006e8d9) smil2_text_pane_ParamLimits

0x30dd,	// (0x0006e8d9) smil2_text_pane

0xa06c,	// (0x00075868) bg_list_pane_cp06

0xb751,	// (0x00076f4d) grid_radio_pane

0xa06c,	// (0x00075868) bg_popup_window_pane_cp06

0xb759,	// (0x00076f55) main_fmradio_pane_t1

0xb0e1,	// (0x000768dd) heading_pane_cp04

0xb767,	// (0x00076f63) main_fmradio_pane_t2

0xc72c,	// (0x00077f28) popup_cale_lunar_info_window_g1

0xb775,	// (0x00076f71) main_fmradio_pane_t3

0xc734,	// (0x00077f30) popup_cale_lunar_info_window_g2

0xb783,	// (0x00076f7f) main_fmradio_pane_t4

0x0001,

0xb791,	// (0x00076f8d) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007adb9) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007acf3) main_fmradio_pane_t

0xb79f,	// (0x00076f9b) wait_bar_pane_cp03

0xb7a7,	// (0x00076fa3) cell_fmradio_pane_ParamLimits

0xb7a7,	// (0x00076fa3) cell_fmradio_pane

0xb600,	// (0x00076dfc) cell_fmradio_pane_g1_ParamLimits

0xb600,	// (0x00076dfc) cell_fmradio_pane_g1

0xa06c,	// (0x00075868) grid_highlight_pane_cp011

0xb7ba,	// (0x00076fb6) poc_content_pane_ParamLimits

0xb7ba,	// (0x00076fb6) poc_content_pane

0xb7cc,	// (0x00076fc8) scroll_pane_cp019

0x315d,	// (0x0006e959) popup_call_poc_act_window_ParamLimits

0x315d,	// (0x0006e959) popup_call_poc_act_window

0x3181,	// (0x0006e97d) popup_call_poc_inact_window_ParamLimits

0x3181,	// (0x0006e97d) popup_call_poc_inact_window

0xf594,	// (0x0007ad90) bg_popup_call_poc_act_pane_g

0xc6a4,	// (0x00077ea0) bg_popup_call_poc_inact_pane_g1

0xc6ac,	// (0x00077ea8) bg_popup_call_poc_inact_pane_g2

0xb7d4,	// (0x00076fd0) popup_call_poc_act_window_g2

0xc6b4,	// (0x00077eb0) bg_popup_call_poc_inact_pane_g3

0xc6bc,	// (0x00077eb8) bg_popup_call_poc_inact_pane_g4

0xc6c4,	// (0x00077ec0) bg_popup_call_poc_inact_pane_g5

0xb7dc,	// (0x00076fd8) popup_call_poc_act_window_t1_ParamLimits

0xb7dc,	// (0x00076fd8) popup_call_poc_act_window_t1

0xb804,	// (0x00077000) popup_call_poc_act_window_t2_ParamLimits

0xb804,	// (0x00077000) popup_call_poc_act_window_t2

0xb82c,	// (0x00077028) popup_call_poc_act_window_t3_ParamLimits

0xb82c,	// (0x00077028) popup_call_poc_act_window_t3

0xb854,	// (0x00077050) popup_call_poc_act_window_t4_ParamLimits

0xb854,	// (0x00077050) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007acfe) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007acfe) popup_call_poc_act_window_t

0xc6cc,	// (0x00077ec8) bg_popup_call_poc_inact_pane_g6

0xc6d4,	// (0x00077ed0) bg_popup_call_poc_inact_pane_g7

0xc6dc,	// (0x00077ed8) bg_popup_call_poc_inact_pane_g8

0xb866,	// (0x00077062) popup_call_poc_inact_window_g2

0xc6e4,	// (0x00077ee0) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0007ad7d) bg_popup_call_poc_inact_pane_g

0xb86e,	// (0x0007706a) popup_call_poc_inact_window_t1_ParamLimits

0xb86e,	// (0x0007706a) popup_call_poc_inact_window_t1

0xb883,	// (0x0007707f) popup_call_poc_inact_window_t2_ParamLimits

0xb883,	// (0x0007707f) popup_call_poc_inact_window_t2

0xb898,	// (0x00077094) popup_call_poc_inact_window_t3_ParamLimits

0xb898,	// (0x00077094) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007ad07) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007ad07) popup_call_poc_inact_window_t

0xc869,	// (0x00078065) context_pane_ParamLimits

0x39c2,	// (0x0006f1be) signal_pane_ParamLimits

0xb455,	// (0x00076c51) main_call2_pane

0x9a5e,	// (0x0007525a) popup_phob_thumbnail2_window_ParamLimits

0x9a5e,	// (0x0007525a) popup_phob_thumbnail2_window

0x99fb,	// (0x000751f7) aid_hotspot_pointer_arrow_pane

0x9a03,	// (0x000751ff) aid_hotspot_pointer_hand_pane

0x34ca,	// (0x0006ecc6) phob_pre_status_pane_g5

0x1019,	// (0x0006c815) cams_zoom_pane_ParamLimits

0x1028,	// (0x0006c824) image_vga_pane_ParamLimits

0x1042,	// (0x0006c83e) main_camera_pane_g1_ParamLimits

0x1054,	// (0x0006c850) main_camera_pane_g2_ParamLimits

0x1064,	// (0x0006c860) main_camera_pane_g3_ParamLimits

0x1074,	// (0x0006c870) main_camera_pane_g4_ParamLimits

0x1084,	// (0x0006c880) main_camera_pane_g5_ParamLimits

0x1094,	// (0x0006c890) main_camera_pane_g6_ParamLimits

0x10a6,	// (0x0006c8a2) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007aa06) main_camera_pane_g_ParamLimits

0x10b6,	// (0x0006c8b2) main_camera_pane_t1_ParamLimits

0x10cc,	// (0x0006c8c8) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007aa17) main_camera_pane_t_ParamLimits

0xa2c7,	// (0x00075ac3) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2c7,	// (0x00075ac3) bg_popup_preview_window_pane_cp01

0xb8ad,	// (0x000770a9) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ad,	// (0x000770a9) popup_phob_thumbnail2_window_g1

0xa06c,	// (0x00075868) call2_cli_visual_pane

0x31b5,	// (0x0006e9b1) popup_call2_audio_conf_window_ParamLimits

0x31b5,	// (0x0006e9b1) popup_call2_audio_conf_window

0x31d5,	// (0x0006e9d1) popup_call2_audio_first_window_ParamLimits

0x31d5,	// (0x0006e9d1) popup_call2_audio_first_window

0x326b,	// (0x0006ea67) popup_call2_audio_in_window_ParamLimits

0x326b,	// (0x0006ea67) popup_call2_audio_in_window

0x32b3,	// (0x0006eaaf) popup_call2_audio_out_window_ParamLimits

0x32b3,	// (0x0006eaaf) popup_call2_audio_out_window

0x331d,	// (0x0006eb19) popup_call2_audio_second_window_ParamLimits

0x331d,	// (0x0006eb19) popup_call2_audio_second_window

0x3383,	// (0x0006eb7f) popup_call2_audio_wait_window_ParamLimits

0x3383,	// (0x0006eb7f) popup_call2_audio_wait_window

0xa06c,	// (0x00075868) bg_popup_call2_act_pane_cp03

0xa2a9,	// (0x00075aa5) list_conf_pane_cp

0xb8b9,	// (0x000770b5) popup_call2_audio_conf_window_t1

0xb13e,	// (0x0007693a) list_single_graphic_popup_conf2_pane_ParamLimits

0xb13e,	// (0x0007693a) list_single_graphic_popup_conf2_pane

0xb151,	// (0x0007694d) list_highlight_pane_cp04

0xb8c7,	// (0x000770c3) list_single_graphic_popup_conf2_pane_g1

0xb162,	// (0x0007695e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007ad0e) list_single_graphic_popup_conf2_pane_g

0xb8d1,	// (0x000770cd) list_single_graphic_popup_conf2_pane_t1

0xb8df,	// (0x000770db) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8df,	// (0x000770db) bg_popup_call2_act_pane_cp01

0xb969,	// (0x00077165) call_type_pane_cp05_ParamLimits

0xb969,	// (0x00077165) call_type_pane_cp05

0xb9bd,	// (0x000771b9) popup_call2_audio_second_window_g1_ParamLimits

0xb9bd,	// (0x000771b9) popup_call2_audio_second_window_g1

0xba11,	// (0x0007720d) popup_call2_audio_second_window_g2_ParamLimits

0xba11,	// (0x0007720d) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007ad13) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007ad13) popup_call2_audio_second_window_g

0xba76,	// (0x00077272) popup_call2_audio_second_window_t1_ParamLimits

0xba76,	// (0x00077272) popup_call2_audio_second_window_t1

0xbb31,	// (0x0007732d) popup_call2_audio_second_window_t2_ParamLimits

0xbb31,	// (0x0007732d) popup_call2_audio_second_window_t2

0xbb84,	// (0x00077380) popup_call2_audio_second_window_t3_ParamLimits

0xbb84,	// (0x00077380) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007ad1a) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007ad1a) popup_call2_audio_second_window_t

0xa06c,	// (0x00075868) bg_popup_call2_in_pane_cp02

0xa076,	// (0x00075872) call_type_pane_cp04

0xa07e,	// (0x0007587a) popup_call2_audio_wait_window_g1

0xa086,	// (0x00075882) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007a8f1) popup_call2_audio_wait_window_g

0xa08e,	// (0x0007588a) popup_call2_audio_wait_window_t3

0xbc77,	// (0x00077473) bg_popup_call2_act_pane_ParamLimits

0xbc77,	// (0x00077473) bg_popup_call2_act_pane

0xbd37,	// (0x00077533) call_type_pane_cp03_ParamLimits

0xbd37,	// (0x00077533) call_type_pane_cp03

0xbd9b,	// (0x00077597) popup_call2_audio_first_window_g1_ParamLimits

0xbd9b,	// (0x00077597) popup_call2_audio_first_window_g1

0xbe0b,	// (0x00077607) popup_call2_audio_first_window_g2_ParamLimits

0xbe0b,	// (0x00077607) popup_call2_audio_first_window_g2

0xb46f,	// (0x00076c6b) popup_call2_audio_first_window_g3_ParamLimits

0xb46f,	// (0x00076c6b) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007ad23) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007ad23) popup_call2_audio_first_window_g

0xbee9,	// (0x000776e5) popup_call2_audio_first_window_t1_ParamLimits

0xbee9,	// (0x000776e5) popup_call2_audio_first_window_t1

0xbfec,	// (0x000777e8) popup_call2_audio_first_window_t4_ParamLimits

0xbfec,	// (0x000777e8) popup_call2_audio_first_window_t4

0xc0cf,	// (0x000778cb) popup_call2_audio_first_window_t5_ParamLimits

0xc0cf,	// (0x000778cb) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007ad2e) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007ad2e) popup_call2_audio_first_window_t

0xa2bf,	// (0x00075abb) bg_popup_call2_act_pane_g1

0xc73c,	// (0x00077f38) popup_cale_lunar_info_window_t1

0xc74a,	// (0x00077f46) popup_cale_lunar_info_window_t2

0xc758,	// (0x00077f54) popup_cale_lunar_info_window_t3

0xa06c,	// (0x00075868) bg_popup_call2_bubble_pane

0xc1d0,	// (0x000779cc) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1d0,	// (0x000779cc) bg_popup_call2_in_pane_cp01

0x9639,	// (0x00074e35) call_type_pane_cp02

0xc218,	// (0x00077a14) popup_call2_audio_out_window_g1_ParamLimits

0xc218,	// (0x00077a14) popup_call2_audio_out_window_g1

0xc244,	// (0x00077a40) popup_call2_audio_out_window_g2_ParamLimits

0xc244,	// (0x00077a40) popup_call2_audio_out_window_g2

0xc26c,	// (0x00077a68) popup_call2_audio_out_window_g3_ParamLimits

0xc26c,	// (0x00077a68) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007ad37) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007ad37) popup_call2_audio_out_window_g

0xc2a7,	// (0x00077aa3) popup_call2_audio_out_window_t1_ParamLimits

0xc2a7,	// (0x00077aa3) popup_call2_audio_out_window_t1

0xc306,	// (0x00077b02) popup_call2_audio_out_window_t2_ParamLimits

0xc306,	// (0x00077b02) popup_call2_audio_out_window_t2

0xc35a,	// (0x00077b56) popup_call2_audio_out_window_t3_ParamLimits

0xc35a,	// (0x00077b56) popup_call2_audio_out_window_t3

0xc370,	// (0x00077b6c) popup_call2_audio_out_window_t4_ParamLimits

0xc370,	// (0x00077b6c) popup_call2_audio_out_window_t4

0xc386,	// (0x00077b82) popup_call2_audio_out_window_t5_ParamLimits

0xc386,	// (0x00077b82) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007ad40) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007ad40) popup_call2_audio_out_window_t

0xc3ea,	// (0x00077be6) bg_popup_call2_in_pane_ParamLimits

0xc3ea,	// (0x00077be6) bg_popup_call2_in_pane

0xc446,	// (0x00077c42) popup_call2_audio_in_window_g1_ParamLimits

0xc446,	// (0x00077c42) popup_call2_audio_in_window_g1

0xc47e,	// (0x00077c7a) popup_call2_audio_in_window_g2_ParamLimits

0xc47e,	// (0x00077c7a) popup_call2_audio_in_window_g2

0xc4b6,	// (0x00077cb2) popup_call2_audio_in_window_g3_ParamLimits

0xc4b6,	// (0x00077cb2) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007ad4d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007ad4d) popup_call2_audio_in_window_g

0xc50e,	// (0x00077d0a) popup_call2_audio_in_window_t1_ParamLimits

0xc50e,	// (0x00077d0a) popup_call2_audio_in_window_t1

0xc58e,	// (0x00077d8a) popup_call2_audio_in_window_t2_ParamLimits

0xc58e,	// (0x00077d8a) popup_call2_audio_in_window_t2

0xc60e,	// (0x00077e0a) popup_call2_audio_in_window_t3_ParamLimits

0xc60e,	// (0x00077e0a) popup_call2_audio_in_window_t3

0xc628,	// (0x00077e24) popup_call2_audio_in_window_t4_ParamLimits

0xc628,	// (0x00077e24) popup_call2_audio_in_window_t4

0xc63a,	// (0x00077e36) popup_call2_audio_in_window_t5_ParamLimits

0xc63a,	// (0x00077e36) popup_call2_audio_in_window_t5

0xc64f,	// (0x00077e4b) popup_call2_audio_in_window_t6_ParamLimits

0xc64f,	// (0x00077e4b) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007ad56) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007ad56) popup_call2_audio_in_window_t

0xa2bf,	// (0x00075abb) bg_popup_call2_in_pane_g1

0xc766,	// (0x00077f62) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0007adbe) popup_cale_lunar_info_window_t

0xa2c7,	// (0x00075ac3) bg_popup_call2_rect_pane_ParamLimits

0xa2c7,	// (0x00075ac3) bg_popup_call2_rect_pane

0xa06c,	// (0x00075868) call2_cli_visual_graphic_pane

0xa06c,	// (0x00075868) call2_cli_visual_text_pane

0x9a85,	// (0x00075281) smil_status_volume_pane_g3

0x0002,

0xa3e1,	// (0x00075bdd) call2_cli_visual_graphic_pane_g1

0xa3e1,	// (0x00075bdd) call2_cli_visual_graphic_pane_g2

0xa3e1,	// (0x00075bdd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007ad63) call2_cli_visual_graphic_pane_g

0xc664,	// (0x00077e60) bg_popup_call2_rect_pane_g1

0xa46d,	// (0x00075c69) bg_popup_call2_rect_pane_g2

0xc66c,	// (0x00077e68) bg_popup_call2_rect_pane_g3

0xc674,	// (0x00077e70) bg_popup_call2_rect_pane_g4

0xc67c,	// (0x00077e78) bg_popup_call2_rect_pane_g5

0xc684,	// (0x00077e80) bg_popup_call2_rect_pane_g6

0xc68c,	// (0x00077e88) bg_popup_call2_rect_pane_g7

0xc694,	// (0x00077e90) bg_popup_call2_rect_pane_g8

0xc69c,	// (0x00077e98) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ad6a) bg_popup_call2_rect_pane_g

0xc6a4,	// (0x00077ea0) bg_popup_call2_bubble_pane_g1

0xc6ac,	// (0x00077ea8) bg_popup_call2_bubble_pane_g2

0xc6b4,	// (0x00077eb0) bg_popup_call2_bubble_pane_g3

0xc6bc,	// (0x00077eb8) bg_popup_call2_bubble_pane_g4

0xc6c4,	// (0x00077ec0) bg_popup_call2_bubble_pane_g5

0xc6cc,	// (0x00077ec8) bg_popup_call2_bubble_pane_g6

0xc6d4,	// (0x00077ed0) bg_popup_call2_bubble_pane_g7

0xc6dc,	// (0x00077ed8) bg_popup_call2_bubble_pane_g8

0xc6e4,	// (0x00077ee0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007ad7d) bg_popup_call2_bubble_pane_g

0x0985,	// (0x0006c181) aid_cale_week_size_cell_pane

0x10e2,	// (0x0006c8de) aid_cams_cif_uncrop_pane_ParamLimits

0x10e2,	// (0x0006c8de) aid_cams_cif_uncrop_pane

0x1292,	// (0x0006ca8e) aid_cams_size_cell_ParamLimits

0x1292,	// (0x0006ca8e) aid_cams_size_cell

0x12a6,	// (0x0006caa2) grid_cams_pane_ParamLimits

0x12c0,	// (0x0006cabc) linegrid_cams_pane_ParamLimits

0x14bd,	// (0x0006ccb9) call_video_pane_t1

0x14db,	// (0x0006ccd7) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007aa6a) call_video_pane_t

0x1907,	// (0x0006d103) aid_cale_month_size_cell_pane_ParamLimits

0x1907,	// (0x0006d103) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007ae07) smil_status_volume_pane_g

0x9a92,	// (0x0007528e) volume_smil_pane_ParamLimits

0x94cc,	// (0x00074cc8) aid_popup2_width_pane

0x08df,	// (0x0006c0db) cell_qdial_pane_g4_ParamLimits

0x08df,	// (0x0006c0db) cell_qdial_pane_g4

0x27ec,	// (0x0006dfe8) aid_blid_cardinal_pane_ParamLimits

0x27f8,	// (0x0006dff4) aid_blid_destination_pane_ParamLimits

0x27f8,	// (0x0006dff4) aid_blid_destination_pane

0xa2c7,	// (0x00075ac3) bg_popup_call_poc_act_pane_ParamLimits

0xa2c7,	// (0x00075ac3) bg_popup_call_poc_act_pane

0xa2c7,	// (0x00075ac3) bg_popup_call_poc_inact_pane_ParamLimits

0xa2c7,	// (0x00075ac3) bg_popup_call_poc_inact_pane

0xc6ec,	// (0x00077ee8) bg_popup_call_poc_act_pane_g1

0xc6f4,	// (0x00077ef0) bg_popup_call_poc_act_pane_g2

0xc6fc,	// (0x00077ef8) bg_popup_call_poc_act_pane_g3

0xc6bc,	// (0x00077eb8) bg_popup_call_poc_act_pane_g4

0xc6c4,	// (0x00077ec0) bg_popup_call_poc_act_pane_g5

0xc704,	// (0x00077f00) bg_popup_call_poc_act_pane_g6

0xc6d4,	// (0x00077ed0) bg_popup_call_poc_act_pane_g7

0xc70c,	// (0x00077f08) bg_popup_call_poc_act_pane_g8

0xa06c,	// (0x00075868) main_usb_pane

0x9a39,	// (0x00075235) popup_cale_lunar_info_window

0x17b3,	// (0x0006cfaf) im_reading_pane_t1_ParamLimits

0xaaf0,	// (0x000762ec) list_im_pane_ParamLimits

0xab01,	// (0x000762fd) scroll_pane_cp07_ParamLimits

0xa06c,	// (0x00075868) grid_highlight_pane_cp012

0xa2c7,	// (0x00075ac3) mup_scale_pane_ParamLimits

0xb600,	// (0x00076dfc) main_usb_pane_g1_ParamLimits

0xb600,	// (0x00076dfc) main_usb_pane_g1

0x33df,	// (0x0006ebdb) main_usb_pane_g2_ParamLimits

0x33df,	// (0x0006ebdb) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0007ada7) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0007ada7) main_usb_pane_g

0x33f5,	// (0x0006ebf1) main_usb_pane_t1_ParamLimits

0x33f5,	// (0x0006ebf1) main_usb_pane_t1

0x3407,	// (0x0006ec03) main_usb_pane_t2_ParamLimits

0x3407,	// (0x0006ec03) main_usb_pane_t2

0x3419,	// (0x0006ec15) main_usb_pane_t3_ParamLimits

0x3419,	// (0x0006ec15) main_usb_pane_t3

0x342b,	// (0x0006ec27) main_usb_pane_t4_ParamLimits

0x342b,	// (0x0006ec27) main_usb_pane_t4

0x343d,	// (0x0006ec39) main_usb_pane_t5_ParamLimits

0x343d,	// (0x0006ec39) main_usb_pane_t5

0x344f,	// (0x0006ec4b) main_usb_pane_t6_ParamLimits

0x344f,	// (0x0006ec4b) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0007adac) main_usb_pane_t_ParamLimits

0x279b,	// (0x0006df97) aid_text_placing

0x27a4,	// (0x0006dfa0) main_location2_pane_t1_ParamLimits

0x27b6,	// (0x0006dfb2) main_location2_pane_t2_ParamLimits

0x27c8,	// (0x0006dfc4) main_location2_pane_t3_ParamLimits

0x27da,	// (0x0006dfd6) main_location2_pane_t4_ParamLimits

0x27da,	// (0x0006dfd6) main_location2_pane_t4

0xf3cf,	// (0x0007abcb) main_location2_pane_t_ParamLimits

0xa303,	// (0x00075aff) find_pinb_pane_g2_ParamLimits

0xa303,	// (0x00075aff) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0007a917) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0007a917) find_pinb_pane_g

0xa30f,	// (0x00075b0b) find_pinb_pane_t1_ParamLimits

0xa321,	// (0x00075b1d) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0007a91c) find_pinb_pane_t_ParamLimits

0xa06c,	// (0x00075868) main_call3_pane

0x1dc6,	// (0x0006d5c2) cale_month_day_heading_pane_t1_ParamLimits

0x1e4c,	// (0x0006d648) cale_month_day_heading_pane_t2_ParamLimits

0x1edd,	// (0x0006d6d9) cale_month_day_heading_pane_t3_ParamLimits

0x1f6e,	// (0x0006d76a) cale_month_day_heading_pane_t4_ParamLimits

0x2003,	// (0x0006d7ff) cale_month_day_heading_pane_t5_ParamLimits

0x20a4,	// (0x0006d8a0) cale_month_day_heading_pane_t6_ParamLimits

0x2145,	// (0x0006d941) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007aaa2) cale_month_day_heading_pane_t_ParamLimits

0xad4b,	// (0x00076547) smil_status_volume_pane

0x2eda,	// (0x0006e6d6) postcard_address_pane_ParamLimits

0x2eda,	// (0x0006e6d6) postcard_address_pane

0x2eec,	// (0x0006e6e8) postcard_message_pane_ParamLimits

0x2eec,	// (0x0006e6e8) postcard_message_pane

0x33bd,	// (0x0006ebb9) call2_cli_visual_pane_t1_ParamLimits

0x33bd,	// (0x0006ebb9) call2_cli_visual_pane_t1

0x3bef,	// (0x0006f3eb) postcard_message_pane_t1_ParamLimits

0x3bef,	// (0x0006f3eb) postcard_message_pane_t1

0x3bd8,	// (0x0006f3d4) postcard_address_pane_t1_ParamLimits

0x3bd8,	// (0x0006f3d4) postcard_address_pane_t1

0x3bc4,	// (0x0006f3c0) popup_call3_audio_in_window_ParamLimits

0x3bc4,	// (0x0006f3c0) popup_call3_audio_in_window

0x3a4f,	// (0x0006f24b) bg_popup_call3_in_pane_ParamLimits

0x3a4f,	// (0x0006f24b) bg_popup_call3_in_pane

0x3ac5,	// (0x0006f2c1) popup_call3_audio_in_window_g1_ParamLimits

0x3ac5,	// (0x0006f2c1) popup_call3_audio_in_window_g1

0x3ae5,	// (0x0006f2e1) popup_call3_audio_in_window_g2_ParamLimits

0x3ae5,	// (0x0006f2e1) popup_call3_audio_in_window_g2

0x3b05,	// (0x0006f301) popup_call3_audio_in_window_g3_ParamLimits

0x3b05,	// (0x0006f301) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0007ae0e) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0007ae0e) popup_call3_audio_in_window_g

0x3b36,	// (0x0006f332) popup_call3_audio_in_window_t1_ParamLimits

0x3b36,	// (0x0006f332) popup_call3_audio_in_window_t1

0x3b74,	// (0x0006f370) popup_call3_audio_in_window_t2_ParamLimits

0x3b74,	// (0x0006f370) popup_call3_audio_in_window_t2

0x3bb2,	// (0x0006f3ae) popup_call3_audio_in_window_t3_ParamLimits

0x3bb2,	// (0x0006f3ae) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007ae17) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007ae17) popup_call3_audio_in_window_t

0xb455,	// (0x00076c51) bg_popup_call3_rect_pane

0xc664,	// (0x00077e60) bg_popup_call3_rect_pane_g1

0xa46d,	// (0x00075c69) bg_popup_call3_rect_pane_g2

0xc66c,	// (0x00077e68) bg_popup_call3_rect_pane_g3

0xc674,	// (0x00077e70) bg_popup_call3_rect_pane_g4

0xc67c,	// (0x00077e78) bg_popup_call3_rect_pane_g5

0xc684,	// (0x00077e80) bg_popup_call3_rect_pane_g6

0xc68c,	// (0x00077e88) bg_popup_call3_rect_pane_g7

0x2adc,	// (0x0006e2d8) mup_visualizer_osc_pane

0xb522,	// (0x00076d1e) mup_visualizer_spec_pane

0x3a7f,	// (0x0006f27b) call3_video_qcif_pane_ParamLimits

0x3a7f,	// (0x0006f27b) call3_video_qcif_pane

0x3a92,	// (0x0006f28e) call3_video_qcif_uncrop_pane_ParamLimits

0x3a92,	// (0x0006f28e) call3_video_qcif_uncrop_pane

0x3aa0,	// (0x0006f29c) call3_video_subqcif_pane_ParamLimits

0x3aa0,	// (0x0006f29c) call3_video_subqcif_pane

0x3ab4,	// (0x0006f2b0) call3_video_subqcif_uncrop_pane_ParamLimits

0x3ab4,	// (0x0006f2b0) call3_video_subqcif_uncrop_pane

0x3b25,	// (0x0006f321) popup_call3_audio_in_window_g4_ParamLimits

0x3b25,	// (0x0006f321) popup_call3_audio_in_window_g4

0x3a3e,	// (0x0006f23a) mup_spec_half_pane

0x3a47,	// (0x0006f243) mup_spec_half_pane_cp

0xc8c9,	// (0x000780c5) mup_osc_middle_pane

0xc8d2,	// (0x000780ce) mup_visualizer_osc_pane_g1

0x3a1e,	// (0x0006f21a) mup_spec_bar_pane_ParamLimits

0x3a1e,	// (0x0006f21a) mup_spec_bar_pane

0xc8b6,	// (0x000780b2) mup_spec_bar_pane_g1

0xc8c0,	// (0x000780bc) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007ae02) mup_spec_bar_pane_g

0x0985,	// (0x0006c181) aid_cale_week_size_cell_pane_ParamLimits

0x099f,	// (0x0006c19b) bg_cale_heading_pane_ParamLimits

0xa4aa,	// (0x00075ca6) bg_cale_pane_cp01_ParamLimits

0x09b7,	// (0x0006c1b3) cale_week_corner_pane_ParamLimits

0x09d6,	// (0x0006c1d2) cale_week_day_heading_pane_ParamLimits

0x09f3,	// (0x0006c1ef) cale_week_scroll_pane_g1_ParamLimits

0x0a06,	// (0x0006c202) cale_week_scroll_pane_g2_ParamLimits

0x0a1e,	// (0x0006c21a) cale_week_scroll_pane_g3_ParamLimits

0x0a36,	// (0x0006c232) cale_week_scroll_pane_g4_ParamLimits

0x0a4e,	// (0x0006c24a) cale_week_scroll_pane_g5_ParamLimits

0x0a6e,	// (0x0006c26a) cale_week_scroll_pane_g6_ParamLimits

0x0a8e,	// (0x0006c28a) cale_week_scroll_pane_g7_ParamLimits

0x0aae,	// (0x0006c2aa) cale_week_scroll_pane_g8_ParamLimits

0x0ad2,	// (0x0006c2ce) cale_week_scroll_pane_g9_ParamLimits

0x0aea,	// (0x0006c2e6) cale_week_scroll_pane_g10_ParamLimits

0x0b02,	// (0x0006c2fe) cale_week_scroll_pane_g11_ParamLimits

0x0b1a,	// (0x0006c316) cale_week_scroll_pane_g12_ParamLimits

0x0b32,	// (0x0006c32e) cale_week_scroll_pane_g13_ParamLimits

0x0b32,	// (0x0006c32e) cale_week_scroll_pane_g14_ParamLimits

0x0b32,	// (0x0006c32e) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0007a9a8) cale_week_scroll_pane_g_ParamLimits

0x0b6e,	// (0x0006c36a) cale_week_time_pane_ParamLimits

0x0b92,	// (0x0006c38e) grid_cale_week_pane_ParamLimits

0xa4c8,	// (0x00075cc4) listscroll_cale_week_pane_t1

0xa4da,	// (0x00075cd6) scroll_pane_cp08_ParamLimits

0x195c,	// (0x0006d158) cale_month_corner_pane_ParamLimits

0xad21,	// (0x0007651d) cale_month_pane_t1

0x1d64,	// (0x0006d560) cale_month_week_pane_ParamLimits

0x25f7,	// (0x0006ddf3) popup_call_status_window_g1_ParamLimits

0x260b,	// (0x0006de07) popup_call_status_window_g2_ParamLimits

0x261f,	// (0x0006de1b) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007ab52) popup_call_status_window_g_ParamLimits

0xb0d1,	// (0x000768cd) aid_call2_pane

0x2d44,	// (0x0006e540) msg_header_pane_g1

0x2eda,	// (0x0006e6d6) postcard_address2_pane_ParamLimits

0x2eda,	// (0x0006e6d6) postcard_address2_pane

0x2eec,	// (0x0006e6e8) postcard_message2_pane_ParamLimits

0x2eec,	// (0x0006e6e8) postcard_message2_pane

0x39d0,	// (0x0006f1cc) message2_row_pane_ParamLimits

0x39d0,	// (0x0006f1cc) message2_row_pane

0x39ec,	// (0x0006f1e8) address2_row_pane_ParamLimits

0x39ec,	// (0x0006f1e8) address2_row_pane

0xc884,	// (0x00078080) postcard_message2_row_pane_g1

0xc88c,	// (0x00078088) postcard_message2_row_pane_t1

0xc884,	// (0x00078080) address2_row_pane_g1

0xc88c,	// (0x00078088) address2_row_pane_t1

0x0f85,	// (0x0006c781) aid_size_cell_vorec

0xa06c,	// (0x00075868) main_rss_pane

0x39ff,	// (0x0006f1fb) rss_list_single_pane_ParamLimits

0x39ff,	// (0x0006f1fb) rss_list_single_pane

0xc89a,	// (0x00078096) rss_list_single_pane_t1

0xc8a8,	// (0x000780a4) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0007adfd) rss_list_single_pane_t

0xa06c,	// (0x00075868) main_camera2_pane

0xa06c,	// (0x00075868) main_video2_pane

0x3c68,	// (0x0006f464) cams_zoom_pane_cp2_ParamLimits

0x3c68,	// (0x0006f464) cams_zoom_pane_cp2

0x3c88,	// (0x0006f484) image2_vga_pane_ParamLimits

0x3c88,	// (0x0006f484) image2_vga_pane

0x3cd9,	// (0x0006f4d5) main_camera2_pane_g1_ParamLimits

0x3cd9,	// (0x0006f4d5) main_camera2_pane_g1

0x3cf9,	// (0x0006f4f5) main_camera2_pane_g2_ParamLimits

0x3cf9,	// (0x0006f4f5) main_camera2_pane_g2

0x3d19,	// (0x0006f515) main_camera2_pane_g3_ParamLimits

0x3d19,	// (0x0006f515) main_camera2_pane_g3

0x3d39,	// (0x0006f535) main_camera2_pane_g4_ParamLimits

0x3d39,	// (0x0006f535) main_camera2_pane_g4

0x3d59,	// (0x0006f555) main_camera2_pane_g5_ParamLimits

0x3d59,	// (0x0006f555) main_camera2_pane_g5

0x3d79,	// (0x0006f575) main_camera2_pane_g6_ParamLimits

0x3d79,	// (0x0006f575) main_camera2_pane_g6

0x3d99,	// (0x0006f595) main_camera2_pane_g7_ParamLimits

0x3d99,	// (0x0006f595) main_camera2_pane_g7

0x3db9,	// (0x0006f5b5) main_camera2_pane_g8_ParamLimits

0x3db9,	// (0x0006f5b5) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0007ae1e) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0007ae1e) main_camera2_pane_g

0x3df9,	// (0x0006f5f5) main_camera2_pane_t1_ParamLimits

0x3df9,	// (0x0006f5f5) main_camera2_pane_t1

0x3e2e,	// (0x0006f62a) main_camera2_pane_t2_ParamLimits

0x3e2e,	// (0x0006f62a) main_camera2_pane_t2

0x3e54,	// (0x0006f650) main_camera2_pane_t3_ParamLimits

0x3e54,	// (0x0006f650) main_camera2_pane_t3

0x3eb2,	// (0x0006f6ae) main_camera2_pane_t4_ParamLimits

0x3eb2,	// (0x0006f6ae) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0007ae31) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0007ae31) main_camera2_pane_t

0x3f44,	// (0x0006f740) cams_zoom_pane_cp4_ParamLimits

0x3f44,	// (0x0006f740) cams_zoom_pane_cp4

0x3f5a,	// (0x0006f756) image2_cif_pane_ParamLimits

0x3f5a,	// (0x0006f756) image2_cif_pane

0x3f85,	// (0x0006f781) image2_subqcif_pane_ParamLimits

0x3f85,	// (0x0006f781) image2_subqcif_pane

0x3f9f,	// (0x0006f79b) main_video2_pane_g1_ParamLimits

0x3f9f,	// (0x0006f79b) main_video2_pane_g1

0x3fb9,	// (0x0006f7b5) main_video2_pane_g2_ParamLimits

0x3fb9,	// (0x0006f7b5) main_video2_pane_g2

0x3fcf,	// (0x0006f7cb) main_video2_pane_g3_ParamLimits

0x3fcf,	// (0x0006f7cb) main_video2_pane_g3

0x3fe5,	// (0x0006f7e1) main_video2_pane_g4_ParamLimits

0x3fe5,	// (0x0006f7e1) main_video2_pane_g4

0x3ffb,	// (0x0006f7f7) main_video2_pane_g5_ParamLimits

0x3ffb,	// (0x0006f7f7) main_video2_pane_g5

0x4011,	// (0x0006f80d) main_video2_pane_g6_ParamLimits

0x4011,	// (0x0006f80d) main_video2_pane_g6

0x0005,

0xf644,	// (0x0007ae40) main_video2_pane_g_ParamLimits

0xf644,	// (0x0007ae40) main_video2_pane_g

0x402b,	// (0x0006f827) main_video2_pane_t1_ParamLimits

0x402b,	// (0x0006f827) main_video2_pane_t1

0x404f,	// (0x0006f84b) main_video2_pane_t2_ParamLimits

0x404f,	// (0x0006f84b) main_video2_pane_t2

0x409d,	// (0x0006f899) main_video2_pane_t3_ParamLimits

0x409d,	// (0x0006f899) main_video2_pane_t3

0x0002,

0xf651,	// (0x0007ae4d) main_video2_pane_t_ParamLimits

0xf651,	// (0x0007ae4d) main_video2_pane_t

0x350a,	// (0x0006ed06) call_muted_g2

0x0001,

0xf5f3,	// (0x0007adef) call_muted_g

0xa06c,	// (0x00075868) main_mup2_pane

0x40e1,	// (0x0006f8dd) main_mup2_pane_g1_ParamLimits

0x40e1,	// (0x0006f8dd) main_mup2_pane_g1

0x40ed,	// (0x0006f8e9) main_mup2_pane_g2_ParamLimits

0x40ed,	// (0x0006f8e9) main_mup2_pane_g2

0x9b00,	// (0x000752fc) main_mup_pane_g13_cp1

0x9b08,	// (0x00075304) mup_volume_pane_cp1

0x4109,	// (0x0006f905) main_mup2_pane_g4_ParamLimits

0x4109,	// (0x0006f905) main_mup2_pane_g4

0x411b,	// (0x0006f917) main_mup2_pane_g5_ParamLimits

0x411b,	// (0x0006f917) main_mup2_pane_g5

0x412d,	// (0x0006f929) main_mup2_pane_g6_ParamLimits

0x412d,	// (0x0006f929) main_mup2_pane_g6

0x413f,	// (0x0006f93b) main_mup2_pane_g7_ParamLimits

0x413f,	// (0x0006f93b) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0007ae54) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0007ae54) main_mup2_pane_g

0x4157,	// (0x0006f953) main_mup2_pane_t1_ParamLimits

0x4157,	// (0x0006f953) main_mup2_pane_t1

0x416d,	// (0x0006f969) main_mup2_pane_t2_ParamLimits

0x416d,	// (0x0006f969) main_mup2_pane_t2

0x4183,	// (0x0006f97f) main_mup2_pane_t3_ParamLimits

0x4183,	// (0x0006f97f) main_mup2_pane_t3

0x4199,	// (0x0006f995) main_mup2_pane_t4_ParamLimits

0x4199,	// (0x0006f995) main_mup2_pane_t4

0x41b1,	// (0x0006f9ad) main_mup2_pane_t5_ParamLimits

0x41b1,	// (0x0006f9ad) main_mup2_pane_t5

0x41c9,	// (0x0006f9c5) main_mup2_pane_t6_ParamLimits

0x41c9,	// (0x0006f9c5) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0007ae63) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0007ae63) main_mup2_pane_t

0x41f9,	// (0x0006f9f5) mup2_visualizer_pane_ParamLimits

0x41f9,	// (0x0006f9f5) mup2_visualizer_pane

0x4227,	// (0x0006fa23) mup_progress_pane_cp_ParamLimits

0x4227,	// (0x0006fa23) mup_progress_pane_cp

0x9aeb,	// (0x000752e7) mup_volume_pane_cp_ParamLimits

0x9aeb,	// (0x000752e7) mup_volume_pane_cp

0x423b,	// (0x0006fa37) mup2_visualizer_pane_g1_ParamLimits

0x423b,	// (0x0006fa37) mup2_visualizer_pane_g1

0xc909,	// (0x00078105) mup2_visualizer_pane_g2_ParamLimits

0xc909,	// (0x00078105) mup2_visualizer_pane_g2

0x4252,	// (0x0006fa4e) mup2_visualizer_pane_g3_ParamLimits

0x4252,	// (0x0006fa4e) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0007ae70) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0007ae70) mup2_visualizer_pane_g

0xb749,	// (0x00076f45) aid_size_cell_fmradio

0x36bc,	// (0x0006eeb8) aid_height_parent_landcape

0xab7f,	// (0x0007637b) wml_content_pane_cp

0xab87,	// (0x00076383) wml_tabs_pane

0xab90,	// (0x0007638c) popup_wml_miniature_window

0xab98,	// (0x00076394) scroll_pane_cp021

0xabac,	// (0x000763a8) wml_content_pane_comp8

0xa06c,	// (0x00075868) bg_popup_sub_pane_cp05

0xc927,	// (0x00078123) popup_wml_miniature_window_g1

0xc92f,	// (0x0007812b) wml_miniature_view_pane

0x425e,	// (0x0006fa5a) aid_size_wml_view

0x4266,	// (0x0006fa62) wml_miniature_view_pane_g1

0x426f,	// (0x0006fa6b) wml_miniature_view_pane_g2

0x4278,	// (0x0006fa74) wml_miniature_view_pane_g3

0x4280,	// (0x0006fa7c) wml_miniature_view_pane_g4

0x4288,	// (0x0006fa84) wml_miniature_view_pane_g5

0x4290,	// (0x0006fa8c) wml_miniature_view_pane_g6

0x4298,	// (0x0006fa94) wml_miniature_view_pane_g7

0x42a0,	// (0x0006fa9c) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0007ae77) wml_miniature_view_pane_g

0xc937,	// (0x00078133) background_graphic_ParamLimits

0xc937,	// (0x00078133) background_graphic

0xc943,	// (0x0007813f) wml_tabs_2_pane

0xc958,	// (0x00078154) wml_tabs_3_pane_ParamLimits

0xc958,	// (0x00078154) wml_tabs_3_pane

0xc96a,	// (0x00078166) wml_tabs_4_pane_ParamLimits

0xc96a,	// (0x00078166) wml_tabs_4_pane

0xc980,	// (0x0007817c) wml_tabs_5_pane_ParamLimits

0xc980,	// (0x0007817c) wml_tabs_5_pane

0xc99a,	// (0x00078196) wml_tabs_pane_g2_ParamLimits

0xc99a,	// (0x00078196) wml_tabs_pane_g2

0xc9ae,	// (0x000781aa) wml_tabs_pane_g3_ParamLimits

0xc9ae,	// (0x000781aa) wml_tabs_pane_g3

0x42a8,	// (0x0006faa4) wml_tabs_2_active_pane_ParamLimits

0x42a8,	// (0x0006faa4) wml_tabs_2_active_pane

0x42bc,	// (0x0006fab8) wml_tabs_2_passive_pane_ParamLimits

0x42bc,	// (0x0006fab8) wml_tabs_2_passive_pane

0x42d0,	// (0x0006facc) wml_tabs_3_active_pane_cp_ParamLimits

0x42d0,	// (0x0006facc) wml_tabs_3_active_pane_cp

0x42e5,	// (0x0006fae1) wml_tabs_3_passive_pane_ParamLimits

0x42e5,	// (0x0006fae1) wml_tabs_3_passive_pane

0x42f8,	// (0x0006faf4) wml_tabs_3_passive_pane_cp_ParamLimits

0x42f8,	// (0x0006faf4) wml_tabs_3_passive_pane_cp

0x430f,	// (0x0006fb0b) tabs_4_active_pane

0x4317,	// (0x0006fb13) tabs_4_passive_pane

0x4321,	// (0x0006fb1d) tabs_4_passive_pane_cp

0x4329,	// (0x0006fb25) tabs_4_passive_pane_cp2

0x33d7,	// (0x0006ebd3) aid_height_text

0x2ab2,	// (0x0006e2ae) mup_volume_cont_pane_ParamLimits

0x2ab2,	// (0x0006e2ae) mup_volume_cont_pane

0x0563,	// (0x0006bd5f) aid_size_cell_pinb

0x056d,	// (0x0006bd69) aid_size_list_pinb

0x4213,	// (0x0006fa0f) mup2_volume_cont_pane_ParamLimits

0x4213,	// (0x0006fa0f) mup2_volume_cont_pane

0x9ad7,	// (0x000752d3) mup2_volume_cont_pane_g1_ParamLimits

0x9ad7,	// (0x000752d3) mup2_volume_cont_pane_g1

0x0226,	// (0x0006ba22) aid_size_cell_touch_ParamLimits

0x0226,	// (0x0006ba22) aid_size_cell_touch

0x0453,	// (0x0006bc4f) touch_pane_ParamLimits

0x0453,	// (0x0006bc4f) touch_pane

0x9540,	// (0x00074d3c) main_rss2_pane

0xc9cb,	// (0x000781c7) listscroll_rss2_pane

0xc9d4,	// (0x000781d0) rss2_navigation_pane

0xc9dc,	// (0x000781d8) list_rss2_pane

0xb214,	// (0x00076a10) scroll_pane_cp22

0xc9e4,	// (0x000781e0) rss2_navigation_pane_g1

0xc9ed,	// (0x000781e9) rss2_navigation_pane_g2

0xc9f5,	// (0x000781f1) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0007ae88) rss2_navigation_pane_g

0xc9fd,	// (0x000781f9) rss2_navigation_pane_t1

0x4333,	// (0x0006fb2f) rss2_list_single_pane_ParamLimits

0x4333,	// (0x0006fb2f) rss2_list_single_pane

0xca0b,	// (0x00078207) rss2_list_single_pane_t2

0xca19,	// (0x00078215) rss2_list_single_pane_t3_ParamLimits

0xca19,	// (0x00078215) rss2_list_single_pane_t3

0xca36,	// (0x00078232) rss2_list_single_pane_t4

0x2401,	// (0x0006dbfd) smil_status_pane_g1

0x9532,	// (0x00074d2e) main_image2_pane_ParamLimits

0x9532,	// (0x00074d2e) main_image2_pane

0x3dd9,	// (0x0006f5d5) main_camera2_pane_g9_ParamLimits

0x3dd9,	// (0x0006f5d5) main_camera2_pane_g9

0x3f07,	// (0x0006f703) main_camera2_pane_t5_ParamLimits

0x3f07,	// (0x0006f703) main_camera2_pane_t5

0x9aa7,	// (0x000752a3) main_camera2_pane_t6_ParamLimits

0x9aa7,	// (0x000752a3) main_camera2_pane_t6

0x4348,	// (0x0006fb44) main_image2_pane_g1_ParamLimits

0x4348,	// (0x0006fb44) main_image2_pane_g1

0x3113,	// (0x0006e90f) smil2_video_pane_ParamLimits

0x3113,	// (0x0006e90f) smil2_video_pane

0x94e8,	// (0x00074ce4) aid_zoom_text_primary_cp

0x9528,	// (0x00074d24) popup_preview_fixed_window

0xaae8,	// (0x000762e4) im_reading_pane_g1

0x3c50,	// (0x0006f44c) cams2_bc_adjust_pane_cp_ParamLimits

0x3c50,	// (0x0006f44c) cams2_bc_adjust_pane_cp

0x3f36,	// (0x0006f732) cams2_bc_adjust_pane_ParamLimits

0x3f36,	// (0x0006f732) cams2_bc_adjust_pane

0xd3ac,	// (0x00078ba8) cams2_bc_adjust_pane_g1

0x9b10,	// (0x0007530c) cams2_slider_pane

0x9b19,	// (0x00075315) cams2_slider_pane_g1

0x9b22,	// (0x0007531e) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0007ae8f) cams2_slider_pane_g

0x065b,	// (0x0006be57) calc_display_pane_ParamLimits

0x0683,	// (0x0006be7f) calc_paper_pane_ParamLimits

0x06a6,	// (0x0006bea2) grid_calc_pane_ParamLimits

0x99cc,	// (0x000751c8) popup_clock_digital_window_t1_ParamLimits

0xb6e6,	// (0x00076ee2) main_image_pane_t1

0x063d,	// (0x0006be39) aid_size_cell_calc_ParamLimits

0x063d,	// (0x0006be39) aid_size_cell_calc

0x3714,	// (0x0006ef10) popup_blid_sat_info2_window_ParamLimits

0x3714,	// (0x0006ef10) popup_blid_sat_info2_window

0xca4c,	// (0x00078248) aid_size_cell_blid

0xca54,	// (0x00078250) bg_popup_window_pane_cp07

0xca77,	// (0x00078273) grid_popup_blid_pane

0xca81,	// (0x0007827d) heading_pane_cp05_ParamLimits

0xca81,	// (0x0007827d) heading_pane_cp05

0xcb4b,	// (0x00078347) cell_popup_blid_pane_ParamLimits

0xcb4b,	// (0x00078347) cell_popup_blid_pane

0xcb6f,	// (0x0007836b) cell_popup_blid_pane_g1

0xcb77,	// (0x00078373) cell_popup_blid_pane_t1

0x41e3,	// (0x0006f9df) mup2_indicator_pane_ParamLimits

0x41e3,	// (0x0006f9df) mup2_indicator_pane

0xb455,	// (0x00076c51) mup2_visualizer_osc_pane

0xc915,	// (0x00078111) mup2_visualizer_spec_pane_ParamLimits

0xc915,	// (0x00078111) mup2_visualizer_spec_pane

0x435e,	// (0x0006fb5a) mup2_spec_half_pane

0x4367,	// (0x0006fb63) mup2_spec_half_pane_cp

0x436f,	// (0x0006fb6b) mup2_spec_bar_pane_ParamLimits

0x436f,	// (0x0006fb6b) mup2_spec_bar_pane

0xc8b6,	// (0x000780b2) mup2_spec_bar_pane_g1

0xc8c0,	// (0x000780bc) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007ae02) mup2_spec_bar_pane_g

0x438f,	// (0x0006fb8b) mup2_osc_middle_pane

0xc8d2,	// (0x000780ce) mup2_visualizer_osc_pane_g1

0x956a,	// (0x00074d66) popup_number_entry_window_t1_ParamLimits

0x957d,	// (0x00074d79) popup_number_entry_window_t2_ParamLimits

0x958f,	// (0x00074d8b) popup_number_entry_window_t3_ParamLimits

0x04a5,	// (0x0006bca1) popup_number_entry_window_t5_ParamLimits

0x04a5,	// (0x0006bca1) popup_number_entry_window_t5

0xf0c6,	// (0x0007a8c2) popup_number_entry_window_t_ParamLimits

0x95a1,	// (0x00074d9d) text_title_cp2_ParamLimits

0x9a0b,	// (0x00075207) aid_hotspot_pointer_text2_pane

0x9a25,	// (0x00075221) main_viewer_pane_g9_ParamLimits

0x9a25,	// (0x00075221) main_viewer_pane_g9

0xad21,	// (0x0007651d) cale_month_pane_t1_ParamLimits

0xad5e,	// (0x0007655a) bg_cale_pane_ParamLimits

0xad76,	// (0x00076572) list_cale_pane_ParamLimits

0xad87,	// (0x00076583) listscroll_cale_day_pane_t1

0xad99,	// (0x00076595) scroll_pane_cp09_ParamLimits

0x2ae4,	// (0x0006e2e0) main_mup_eq_pane_t1_ParamLimits

0x2ae4,	// (0x0006e2e0) main_mup_eq_pane_t1

0x2afe,	// (0x0006e2fa) main_mup_eq_pane_t2_ParamLimits

0x2afe,	// (0x0006e2fa) main_mup_eq_pane_t2

0x2b18,	// (0x0006e314) main_mup_eq_pane_t3_ParamLimits

0x2b18,	// (0x0006e314) main_mup_eq_pane_t3

0x2b34,	// (0x0006e330) main_mup_eq_pane_t4_ParamLimits

0x2b34,	// (0x0006e330) main_mup_eq_pane_t4

0x2b50,	// (0x0006e34c) main_mup_eq_pane_t5_ParamLimits

0x2b50,	// (0x0006e34c) main_mup_eq_pane_t5

0x2b6c,	// (0x0006e368) main_mup_eq_pane_t6_ParamLimits

0x2b6c,	// (0x0006e368) main_mup_eq_pane_t6

0x2b80,	// (0x0006e37c) main_mup_eq_pane_t7_ParamLimits

0x2b80,	// (0x0006e37c) main_mup_eq_pane_t7

0x2b94,	// (0x0006e390) main_mup_eq_pane_t8_ParamLimits

0x2b94,	// (0x0006e390) main_mup_eq_pane_t8

0x2ba8,	// (0x0006e3a4) main_mup_eq_pane_t9_ParamLimits

0x2ba8,	// (0x0006e3a4) main_mup_eq_pane_t9

0x2bc2,	// (0x0006e3be) main_mup_eq_pane_t10_ParamLimits

0x2bc2,	// (0x0006e3be) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007ac51) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007ac51) main_mup_eq_pane_t

0x2c71,	// (0x0006e46d) mup_equalizer_pane_cp5_ParamLimits

0x2c85,	// (0x0006e481) mup_equalizer_pane_cp6_ParamLimits

0x2c99,	// (0x0006e495) mup_equalizer_pane_cp7_ParamLimits

0x9540,	// (0x00074d3c) main_gallery_pane

0xc8db,	// (0x000780d7) smil2_volume_pane

0xc8e3,	// (0x000780df) smil_status_volume_pane_g1_ParamLimits

0xc8f6,	// (0x000780f2) smil_status_volume_pane_g2_ParamLimits

0x9a85,	// (0x00075281) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007ae07) smil_status_volume_pane_g_ParamLimits

0xca54,	// (0x00078250) bg_popup_window_pane_cp07_ParamLimits

0xca62,	// (0x0007825e) blid_firmament_pane

0x4398,	// (0x0006fb94) aid_size_cell_gallery_ParamLimits

0x4398,	// (0x0006fb94) aid_size_cell_gallery

0x43ae,	// (0x0006fbaa) grid_gallery_pane_ParamLimits

0x43ae,	// (0x0006fbaa) grid_gallery_pane

0x43c7,	// (0x0006fbc3) cell_gallery_pane_ParamLimits

0x43c7,	// (0x0006fbc3) cell_gallery_pane

0xcb85,	// (0x00078381) bg_cell_gallery_focus_pane_ParamLimits

0xcb85,	// (0x00078381) bg_cell_gallery_focus_pane

0xcb97,	// (0x00078393) cell_gallery_pane_g1_ParamLimits

0xcb97,	// (0x00078393) cell_gallery_pane_g1

0x4410,	// (0x0006fc0c) cell_gallery_pane_g2_ParamLimits

0x4410,	// (0x0006fc0c) cell_gallery_pane_g2

0x441d,	// (0x0006fc19) cell_gallery_pane_g3_ParamLimits

0x441d,	// (0x0006fc19) cell_gallery_pane_g3

0xcba3,	// (0x0007839f) cell_gallery_pane_g4_ParamLimits

0xcba3,	// (0x0007839f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0007aeb5) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0007aeb5) cell_gallery_pane_g

0xcbaf,	// (0x000783ab) bg_cell_gallery_focus_pane_g1

0xcbb7,	// (0x000783b3) bg_cell_gallery_focus_pane_g2

0xcbbf,	// (0x000783bb) bg_cell_gallery_focus_pane_g3

0xcbc7,	// (0x000783c3) bg_cell_gallery_focus_pane_g4

0xcbcf,	// (0x000783cb) bg_cell_gallery_focus_pane_g5

0xcbd7,	// (0x000783d3) bg_cell_gallery_focus_pane_g6

0xcbdf,	// (0x000783db) bg_cell_gallery_focus_pane_g7

0xcbe7,	// (0x000783e3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0007aebe) bg_cell_gallery_focus_pane_g

0xcbef,	// (0x000783eb) aid_firma_cardinal

0xcc03,	// (0x000783ff) blid_firmament_pane_t1

0xcc1a,	// (0x00078416) blid_firmament_pane_t2

0xcc31,	// (0x0007842d) blid_firmament_pane_t3

0xcc48,	// (0x00078444) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0007aecf) blid_firmament_pane_t

0xcc5f,	// (0x0007845b) blid_sat_info_pane

0xcc6f,	// (0x0007846b) blid_sat_info_pane_g1

0xcc6f,	// (0x0007846b) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007aed8) blid_sat_info_pane_g

0xcc79,	// (0x00078475) blid_sat_info_pane_t1

0xcc87,	// (0x00078483) smil2_volume_content_pane

0xcc90,	// (0x0007848c) smil2_volume_pane_g1

0xcc98,	// (0x00078494) smil2_volume_content_pane_g1

0xcca1,	// (0x0007849d) smil2_volume_content_pane_g2

0xccaa,	// (0x000784a6) smil2_volume_content_pane_g3

0xccb3,	// (0x000784af) smil2_volume_content_pane_g4

0xccbc,	// (0x000784b8) smil2_volume_content_pane_g5

0xccc5,	// (0x000784c1) smil2_volume_content_pane_g6

0xccce,	// (0x000784ca) smil2_volume_content_pane_g7

0xccd7,	// (0x000784d3) smil2_volume_content_pane_g8

0xcce0,	// (0x000784dc) smil2_volume_content_pane_g9

0xcce9,	// (0x000784e5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0007aedd) smil2_volume_content_pane_g

0x0c46,	// (0x0006c442) cale_week_day_heading_pane_t1_ParamLimits

0x0c8b,	// (0x0006c487) cale_week_day_heading_pane_t2_ParamLimits

0x0cd5,	// (0x0006c4d1) cale_week_day_heading_pane_t3_ParamLimits

0x0d1f,	// (0x0006c51b) cale_week_day_heading_pane_t4_ParamLimits

0x0d69,	// (0x0006c565) cale_week_day_heading_pane_t5_ParamLimits

0x0dbb,	// (0x0006c5b7) cale_week_day_heading_pane_t6_ParamLimits

0x0e0d,	// (0x0006c609) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0007a9c9) cale_week_day_heading_pane_t_ParamLimits

0xa4f7,	// (0x00075cf3) bg_cale_side_pane_ParamLimits

0x0e52,	// (0x0006c64e) cale_week_time_pane_t1_ParamLimits

0x0e6c,	// (0x0006c668) cale_week_time_pane_t2_ParamLimits

0x0e86,	// (0x0006c682) cale_week_time_pane_t3_ParamLimits

0x0ea0,	// (0x0006c69c) cale_week_time_pane_t4_ParamLimits

0x0eba,	// (0x0006c6b6) cale_week_time_pane_t5_ParamLimits

0x0ed4,	// (0x0006c6d0) cale_week_time_pane_t6_ParamLimits

0x0eee,	// (0x0006c6ea) cale_week_time_pane_t7_ParamLimits

0x0f08,	// (0x0006c704) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0007a9d8) cale_week_time_pane_t_ParamLimits

0x0f28,	// (0x0006c724) cell_cale_week_pane_g2_ParamLimits

0xa4f7,	// (0x00075cf3) bg_cale_side_pane_cp01_ParamLimits

0x21ee,	// (0x0006d9ea) cale_month_week_pane_t1_ParamLimits

0x2207,	// (0x0006da03) cale_month_week_pane_t2_ParamLimits

0x2220,	// (0x0006da1c) cale_month_week_pane_t3_ParamLimits

0x2239,	// (0x0006da35) cale_month_week_pane_t4_ParamLimits

0x2252,	// (0x0006da4e) cale_month_week_pane_t5_ParamLimits

0x226b,	// (0x0006da67) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007aab1) cale_month_week_pane_t_ParamLimits

0x9948,	// (0x00075144) cell_cale_month_pane_g1_ParamLimits

0x9540,	// (0x00074d3c) main_cale_event_viewer_pane

0x94ba,	// (0x00074cb6) listscroll_cale_event_viewer_pane

0xccf2,	// (0x000784ee) list_cale_ev_pane

0xccfa,	// (0x000784f6) scroll_pane_cp023

0xcd06,	// (0x00078502) field_cale_ev_pane_ParamLimits

0xcd06,	// (0x00078502) field_cale_ev_pane

0xcd24,	// (0x00078520) field_cale_ev_content_pane_ParamLimits

0xcd24,	// (0x00078520) field_cale_ev_content_pane

0xcd30,	// (0x0007852c) field_cale_ev_pane_g1_ParamLimits

0xcd30,	// (0x0007852c) field_cale_ev_pane_g1

0xcd3c,	// (0x00078538) field_cale_ev_pane_g2_ParamLimits

0xcd3c,	// (0x00078538) field_cale_ev_pane_g2

0xcd54,	// (0x00078550) field_cale_ev_pane_g3_ParamLimits

0xcd54,	// (0x00078550) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0007aef2) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0007aef2) field_cale_ev_pane_g

0xcd6c,	// (0x00078568) field_cale_ev_pane_t1_ParamLimits

0xcd6c,	// (0x00078568) field_cale_ev_pane_t1

0xcd83,	// (0x0007857f) field_cale_ev_content_pane_t1_ParamLimits

0xcd83,	// (0x0007857f) field_cale_ev_content_pane_t1

0xb5cc,	// (0x00076dc8) bg_button_pane_cp01

0x0973,	// (0x0006c16f) listscroll_cale_week_pane_ParamLimits

0xa4a1,	// (0x00075c9d) popup_toolbar_window_cp01

0xa4c8,	// (0x00075cc4) listscroll_cale_week_pane_t1_ParamLimits

0x0973,	// (0x0006c16f) listscroll_cale_day_pane_ParamLimits

0xa4a1,	// (0x00075c9d) popup_toolbar_window_cp02

0xad87,	// (0x00076583) listscroll_cale_day_pane_t1_ParamLimits

0x36da,	// (0x0006eed6) main_cale_month_pane_ParamLimits

0x9a70,	// (0x0007526c) popup_toolbar_window_cp03_ParamLimits

0x9a70,	// (0x0007526c) popup_toolbar_window_cp03

0x2fdb,	// (0x0006e7d7) main_image_pane_g2_ParamLimits

0x2fdb,	// (0x0006e7d7) main_image_pane_g2

0x2fec,	// (0x0006e7e8) main_image_pane_g3_ParamLimits

0x2fec,	// (0x0006e7e8) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007ace3) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007ace3) main_image_pane_g

0xb6e6,	// (0x00076ee2) main_image_pane_t1_ParamLimits

0x2ffd,	// (0x0006e7f9) main_image_pane_t2_ParamLimits

0x2ffd,	// (0x0006e7f9) main_image_pane_t2

0x300f,	// (0x0006e80b) main_image_pane_t3_ParamLimits

0x300f,	// (0x0006e80b) main_image_pane_t3

0x3037,	// (0x0006e833) main_image_pane_t4_ParamLimits

0x3037,	// (0x0006e833) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007acea) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007acea) main_image_pane_t

0x3057,	// (0x0006e853) popup_image_details_window_cp01

0x3061,	// (0x0006e85d) popup_toobar_trans_pane_cp01_ParamLimits

0x3061,	// (0x0006e85d) popup_toobar_trans_pane_cp01

0x37f3,	// (0x0006efef) popup_image_details_window_ParamLimits

0x37f3,	// (0x0006efef) popup_image_details_window

0x9a43,	// (0x0007523f) popup_image_focus_window

0x3c0a,	// (0x0006f406) camera2_autofocus_pane_ParamLimits

0x3c0a,	// (0x0006f406) camera2_autofocus_pane

0x94ba,	// (0x00074cb6) bg_popup_sub_pane_cp06

0xcda1,	// (0x0007859d) popup_image_focus_window_g1

0xcda9,	// (0x000785a5) popup_image_focus_window_g2

0xcdb1,	// (0x000785ad) popup_image_focus_window_g3

0xcdb9,	// (0x000785b5) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007aef9) popup_image_focus_window_g

0xcdc1,	// (0x000785bd) popup_image_focus_window_t1

0xcdcf,	// (0x000785cb) popup_image_focus_window_t2

0xcddf,	// (0x000785db) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0007af02) popup_image_focus_window_t

0xcded,	// (0x000785e9) camera2_autofocus_pane_g1

0xa5b6,	// (0x00075db2) bg_tb_trans_pane_cp01

0xcdfb,	// (0x000785f7) popup_image_details_window_g1

0xce0e,	// (0x0007860a) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0007af14) popup_image_details_window_g

0xce37,	// (0x00078633) popup_image_details_window_t1

0xce49,	// (0x00078645) popup_image_details_window_t2

0xce62,	// (0x0007865e) popup_image_details_window_t3

0xce76,	// (0x00078672) popup_image_details_window_t4

0xce91,	// (0x0007868d) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007af1b) popup_image_details_window_t

0xa378,	// (0x00075b74) bg_calc_paper_pane_ParamLimits

0x9540,	// (0x00074d3c) grid_highlight_pane_cp013

0x98aa,	// (0x000750a6) list_calc_pane_ParamLimits

0x98bc,	// (0x000750b8) scroll_pane_cp024

0xa38c,	// (0x00075b88) bg_calc_display_pane_ParamLimits

0x07a4,	// (0x0006bfa0) calc_display_pane_t1_ParamLimits

0x07b6,	// (0x0006bfb2) calc_display_pane_t2_ParamLimits

0x98c4,	// (0x000750c0) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0007a949) calc_display_pane_t_ParamLimits

0x0870,	// (0x0006c06c) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0007a966) cell_calc_pane_g

0x0879,	// (0x0006c075) cell_calc_pane_t1

0xa3eb,	// (0x00075be7) grid_highlight_pane_cp02_ParamLimits

0xa401,	// (0x00075bfd) toolbar_button_pane_cp01_ParamLimits

0xa401,	// (0x00075bfd) toolbar_button_pane_cp01

0xb72b,	// (0x00076f27) temp_image_control_pane_ParamLimits

0xb72b,	// (0x00076f27) temp_image_control_pane

0x9532,	// (0x00074d2e) main_mp3_pane

0xceab,	// (0x000786a7) temp_image_control_pane_g1_ParamLimits

0xceab,	// (0x000786a7) temp_image_control_pane_g1

0xceb9,	// (0x000786b5) temp_image_control_pane_g2_ParamLimits

0xceb9,	// (0x000786b5) temp_image_control_pane_g2

0xcecb,	// (0x000786c7) temp_image_control_pane_g3_ParamLimits

0xcecb,	// (0x000786c7) temp_image_control_pane_g3

0x445a,	// (0x0006fc56) temp_image_control_pane_g4_ParamLimits

0x445a,	// (0x0006fc56) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0007af26) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0007af26) temp_image_control_pane_g

0xceab,	// (0x000786a7) main_mp3_pane_g1

0x446d,	// (0x0006fc69) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0007af2f) main_mp3_pane_g

0xcf0e,	// (0x0007870a) main_mp3_pane_t1

0xa552,	// (0x00075d4e) main_camera_pane_g8_ParamLimits

0xa552,	// (0x00075d4e) main_camera_pane_g8

0x1238,	// (0x0006ca34) main_video_pane_g7_ParamLimits

0x1238,	// (0x0006ca34) main_video_pane_g7

0x9ac5,	// (0x000752c1) main_camera2_pane_t7_ParamLimits

0x9ac5,	// (0x000752c1) main_camera2_pane_t7

0xab3f,	// (0x0007633b) scroll_pane_cp025_ParamLimits

0xab3f,	// (0x0007633b) scroll_pane_cp025

0xab53,	// (0x0007634f) scroll_pane_cp026_ParamLimits

0xab53,	// (0x0007634f) scroll_pane_cp026

0xab62,	// (0x0007635e) wml_content_pane_ParamLimits

0x9540,	// (0x00074d3c) main_touch_calib_pane

0x4541,	// (0x0006fd3d) main_touch_calib_pane_g1

0x4553,	// (0x0006fd4f) main_touch_calib_pane_g2

0x4565,	// (0x0006fd61) main_touch_calib_pane_g3

0x4577,	// (0x0006fd73) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0007af4d) main_touch_calib_pane_g

0x4589,	// (0x0006fd85) main_touch_calib_pane_t1

0x45a3,	// (0x0006fd9f) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0007af56) main_touch_calib_pane_t

0xb2f0,	// (0x00076aec) mup_progress_pane_cp02

0xb325,	// (0x00076b21) navi_pane_g1

0xb3e0,	// (0x00076bdc) navi_pane_mp_t3

0x9532,	// (0x00074d2e) main_mp3_pane_ParamLimits

0x3978,	// (0x0006f174) navi_pane_ParamLimits

0xceab,	// (0x000786a7) main_mp3_pane_g1_ParamLimits

0x446d,	// (0x0006fc69) main_mp3_pane_g2_ParamLimits

0x447b,	// (0x0006fc77) main_mp3_pane_g3_ParamLimits

0x447b,	// (0x0006fc77) main_mp3_pane_g3

0x4489,	// (0x0006fc85) main_mp3_pane_g4_ParamLimits

0x4489,	// (0x0006fc85) main_mp3_pane_g4

0xcedb,	// (0x000786d7) main_mp3_pane_g5_ParamLimits

0xcedb,	// (0x000786d7) main_mp3_pane_g5

0xcee9,	// (0x000786e5) main_mp3_pane_g6_ParamLimits

0xcee9,	// (0x000786e5) main_mp3_pane_g6

0xcef6,	// (0x000786f2) main_mp3_pane_g7_ParamLimits

0xcef6,	// (0x000786f2) main_mp3_pane_g7

0xcf02,	// (0x000786fe) main_mp3_pane_g8_ParamLimits

0xcf02,	// (0x000786fe) main_mp3_pane_g8

0xf733,	// (0x0007af2f) main_mp3_pane_g_ParamLimits

0x4495,	// (0x0006fc91) main_mp3_pane_t2

0x44a3,	// (0x0006fc9f) main_mp3_pane_t3

0xcf1c,	// (0x00078718) main_mp3_pane_t4

0xcf2a,	// (0x00078726) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0007af40) main_mp3_pane_t

0xcf38,	// (0x00078734) mup_progress_pane_cp01

0x94e8,	// (0x00074ce4) aid_zoom_text_secondary2

0xccf2,	// (0x000784ee) list_cale_ev2_pane

0xccfa,	// (0x000784f6) scroll_pane_cp023_ParamLimits

0x45f9,	// (0x0006fdf5) field_cale_ev2_pane_ParamLimits

0x45f9,	// (0x0006fdf5) field_cale_ev2_pane

0xa5c4,	// (0x00075dc0) field_cale_ev2_pane_g1_ParamLimits

0xa5c4,	// (0x00075dc0) field_cale_ev2_pane_g1

0xa5d0,	// (0x00075dcc) field_cale_ev2_pane_g2_ParamLimits

0xa5d0,	// (0x00075dcc) field_cale_ev2_pane_g2

0xa5e8,	// (0x00075de4) field_cale_ev2_pane_g3_ParamLimits

0xa5e8,	// (0x00075de4) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0007af61) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0007af61) field_cale_ev2_pane_g

0x4619,	// (0x0006fe15) field_cale_ev2_pane_t1_ParamLimits

0x4619,	// (0x0006fe15) field_cale_ev2_pane_t1

0x4630,	// (0x0006fe2c) field_cale_ev2_pane_t2_ParamLimits

0x4630,	// (0x0006fe2c) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0007af6a) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0007af6a) field_cale_ev2_pane_t

0x2e90,	// (0x0006e68c) main_postcard_pane_g5_ParamLimits

0x2e90,	// (0x0006e68c) main_postcard_pane_g5

0x2ea6,	// (0x0006e6a2) main_postcard_pane_g6_ParamLimits

0x2ea6,	// (0x0006e6a2) main_postcard_pane_g6

0x1004,	// (0x0006c800) camera2_autofocus_pane_cp_ParamLimits

0x1004,	// (0x0006c800) camera2_autofocus_pane_cp

0x9532,	// (0x00074d2e) main_mup3_pane

0x4645,	// (0x0006fe41) main_mup3_pane_g1_ParamLimits

0x4645,	// (0x0006fe41) main_mup3_pane_g1

0x4667,	// (0x0006fe63) main_mup3_pane_g2_ParamLimits

0x4667,	// (0x0006fe63) main_mup3_pane_g2

0x46e5,	// (0x0006fee1) main_mup3_pane_g3_ParamLimits

0x46e5,	// (0x0006fee1) main_mup3_pane_g3

0x472b,	// (0x0006ff27) main_mup3_pane_g4_ParamLimits

0x472b,	// (0x0006ff27) main_mup3_pane_g4

0x4771,	// (0x0006ff6d) main_mup3_pane_g5_ParamLimits

0x4771,	// (0x0006ff6d) main_mup3_pane_g5

0x47b7,	// (0x0006ffb3) main_mup3_pane_g6_ParamLimits

0x47b7,	// (0x0006ffb3) main_mup3_pane_g6

0xcf60,	// (0x0007875c) main_mup3_pane_g7_ParamLimits

0xcf60,	// (0x0007875c) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0007af7a) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0007af7a) main_mup3_pane_g

0x4835,	// (0x00070031) main_mup3_pane_t1_ParamLimits

0x4835,	// (0x00070031) main_mup3_pane_t1

0x48a9,	// (0x000700a5) main_mup3_pane_t2_ParamLimits

0x48a9,	// (0x000700a5) main_mup3_pane_t2

0x497d,	// (0x00070179) main_mup3_pane_t4_ParamLimits

0x497d,	// (0x00070179) main_mup3_pane_t4

0x49d3,	// (0x000701cf) main_mup3_pane_t5_ParamLimits

0x49d3,	// (0x000701cf) main_mup3_pane_t5

0x4a8f,	// (0x0007028b) main_mup3_pane_t6_ParamLimits

0x4a8f,	// (0x0007028b) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0007af8b) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0007af8b) main_mup3_pane_t

0x4b47,	// (0x00070343) mup3_progress_pane_ParamLimits

0x4b47,	// (0x00070343) mup3_progress_pane

0x4bdd,	// (0x000703d9) popup_mup3_control_window_ParamLimits

0x4bdd,	// (0x000703d9) popup_mup3_control_window

0xcf6e,	// (0x0007876a) popup_mup3_text_window

0x4c0f,	// (0x0007040b) mup3_progress_pane_t1

0x4c2e,	// (0x0007042a) mup3_progress_pane_t2

0xcf76,	// (0x00078772) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0007af98) mup3_progress_pane_t

0xcf93,	// (0x0007878f) mup_progress_pane_cp03

0x94ba,	// (0x00074cb6) bg_tb_trans_pane_cp04

0x4c4d,	// (0x00070449) mup3_volume_pane

0x4c55,	// (0x00070451) popup_mup3_control_window_g1

0x4c5e,	// (0x0007045a) mup3_volume_pane_g1

0x4c67,	// (0x00070463) mup3_volume_pane_g2

0x4c70,	// (0x0007046c) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0007af9f) mup3_volume_pane_g

0x94ba,	// (0x00074cb6) bg_tb_trans_pane_cp03

0xcfa3,	// (0x0007879f) popup_mup3_text_window_g1

0xcfab,	// (0x000787a7) popup_mup3_text_window_t1

0xa3d4,	// (0x00075bd0) list_calc_item_pane_g1_ParamLimits

0xc9c2,	// (0x000781be) mup_volume_pane_cp_g1

0x45bd,	// (0x0006fdb9) main_touch_calib_pane_t3

0x45d1,	// (0x0006fdcd) main_touch_calib_pane_t4

0x45e5,	// (0x0006fde1) main_touch_calib_pane_t5

0x94c4,	// (0x00074cc0) aid_cell_size_toolbar2

0x94cc,	// (0x00074cc8) aid_popup3_width_pane

0x94d8,	// (0x00074cd4) aid_zoom_text_msg_primary

0x0fdb,	// (0x0006c7d7) vorec_t7

0xa398,	// (0x00075b94) bg_calc_paper_pane_g1_ParamLimits

0xa3a4,	// (0x00075ba0) bg_calc_paper_pane_g2_ParamLimits

0xa3b0,	// (0x00075bac) bg_calc_paper_pane_g3_ParamLimits

0xa3bc,	// (0x00075bb8) bg_calc_paper_pane_g4_ParamLimits

0xa3c8,	// (0x00075bc4) bg_calc_paper_pane_g5_ParamLimits

0x07fd,	// (0x0006bff9) bg_calc_paper_pane_g6_ParamLimits

0x080c,	// (0x0006c008) bg_calc_paper_pane_g7_ParamLimits

0x081b,	// (0x0006c017) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0007a950) bg_calc_paper_pane_g_ParamLimits

0x082e,	// (0x0006c02a) calc_bg_paper_pane_g9_ParamLimits

0x114f,	// (0x0006c94b) image_qvga_pane_ParamLimits

0x114f,	// (0x0006c94b) image_qvga_pane

0xa2c7,	// (0x00075ac3) bg_popup_sub_pane_cp04_ParamLimits

0xb662,	// (0x00076e5e) popup_mup_playback_window_g1_ParamLimits

0xb66e,	// (0x00076e6a) popup_mup_playback_window_t1_ParamLimits

0xb683,	// (0x00076e7f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007acde) popup_mup_playback_window_t_ParamLimits

0x40fd,	// (0x0006f8f9) main_mup2_pane_g3_ParamLimits

0x40fd,	// (0x0006f8f9) main_mup2_pane_g3

0x155e,	// (0x0006cd5a) popup_toolbar_window_cp04

0xba65,	// (0x00077261) popup_call2_audio_second_window_g3_ParamLimits

0xba65,	// (0x00077261) popup_call2_audio_second_window_g3

0xbe6f,	// (0x0007766b) popup_call2_audio_first_window_g4_ParamLimits

0xbe6f,	// (0x0007766b) popup_call2_audio_first_window_g4

0xc4ee,	// (0x00077cea) popup_call2_audio_in_window_g4_ParamLimits

0xc4ee,	// (0x00077cea) popup_call2_audio_in_window_g4

0x2fbd,	// (0x0006e7b9) aid_area_sk_bg_cut_ParamLimits

0x2fbd,	// (0x0006e7b9) aid_area_sk_bg_cut

0xb698,	// (0x00076e94) aid_area_sk_bg_cut_2_ParamLimits

0xb698,	// (0x00076e94) aid_area_sk_bg_cut_2

0x4400,	// (0x0006fbfc) aid_placing_details_win

0x4408,	// (0x0006fc04) aid_placing_details_win_2

0xcded,	// (0x000785e9) camera2_autofocus_pane_g1_ParamLimits

0x03ec,	// (0x0006bbe8) popup_fixed_preview_cale_window_ParamLimits

0x03ec,	// (0x0006bbe8) popup_fixed_preview_cale_window

0xb466,	// (0x00076c62) navi_slider_pane_g3

0xb47d,	// (0x00076c79) navi_slider_pane_g4

0xb486,	// (0x00076c82) navi_slider_pane_g5

0xb466,	// (0x00076c62) navi_slider_pane_g6

0x99f2,	// (0x000751ee) navi_slider_pane_g7

0xb599,	// (0x00076d95) mup_scale_pane_g3

0xb5a2,	// (0x00076d9e) mup_scale_pane_g4

0xb5ab,	// (0x00076da7) mup_scale_pane_g5

0x2cad,	// (0x0006e4a9) mup_scale_pane_g6

0x2cb6,	// (0x0006e4b2) mup_scale_pane_g7

0xb466,	// (0x00076c62) cams2_slider_pane_g3

0xca44,	// (0x00078240) cams2_slider_pane_g4

0x9b2b,	// (0x00075327) cams2_slider_pane_g5

0xb466,	// (0x00076c62) cams2_slider_pane_g6

0x9b33,	// (0x0007532f) cams2_slider_pane_g7

0xcc6f,	// (0x0007846b) camera2_autofocus_pane_cp_g1

0xc84f,	// (0x0007804b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84f,	// (0x0007804b) bg_popup_preview_window_pane_cp02

0xcfb9,	// (0x000787b5) list_fp_cale_pane_ParamLimits

0xcfb9,	// (0x000787b5) list_fp_cale_pane

0xcfc5,	// (0x000787c1) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfc5,	// (0x000787c1) popup_fixed_preview_cale_window_t1

0x4c79,	// (0x00070475) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c79,	// (0x00070475) popup_fixed_preview_cale_window_t2

0x4c8e,	// (0x0007048a) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c8e,	// (0x0007048a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0007afa6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0007afa6) popup_fixed_preview_cale_window_t

0x4ca3,	// (0x0007049f) list_single_fp_cale_pane_ParamLimits

0x4ca3,	// (0x0007049f) list_single_fp_cale_pane

0xcfe3,	// (0x000787df) list_single_fp_cale_pane_g1_ParamLimits

0xcfe3,	// (0x000787df) list_single_fp_cale_pane_g1

0xcfef,	// (0x000787eb) list_single_fp_cale_pane_g2_ParamLimits

0xcfef,	// (0x000787eb) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0007afad) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0007afad) list_single_fp_cale_pane_g

0xd008,	// (0x00078804) list_single_fp_cale_pane_t1_ParamLimits

0xd008,	// (0x00078804) list_single_fp_cale_pane_t1

0xd01a,	// (0x00078816) list_single_fp_cale_pane_t2_ParamLimits

0xd01a,	// (0x00078816) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0007afb4) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0007afb4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9540,	// (0x00074d3c) main_dialer_pane

0x4cb8,	// (0x000704b4) aid_cell_size_keypad

0x4cc2,	// (0x000704be) dialer_ne_pane

0x4cca,	// (0x000704c6) grid_dialer_command_1_pane

0x4cd2,	// (0x000704ce) grid_dialer_command_2_pane

0x4cda,	// (0x000704d6) grid_dialer_keypad_pane

0x4cec,	// (0x000704e8) bg_popup_call_pane_cp06_ParamLimits

0x4cec,	// (0x000704e8) bg_popup_call_pane_cp06

0x4cf8,	// (0x000704f4) dialer_ne_clear_pane_ParamLimits

0x4cf8,	// (0x000704f4) dialer_ne_clear_pane

0xd04d,	// (0x00078849) dialer_ne_pane_g1

0xd055,	// (0x00078851) dialer_ne_pane_t1_ParamLimits

0xd055,	// (0x00078851) dialer_ne_pane_t1

0x4d04,	// (0x00070500) dialer_ne_pane_t2_ParamLimits

0x4d04,	// (0x00070500) dialer_ne_pane_t2

0x4d2e,	// (0x0007052a) dialer_ne_pane_t3_ParamLimits

0x4d2e,	// (0x0007052a) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007afb9) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007afb9) dialer_ne_pane_t

0x4d5e,	// (0x0007055a) dialer_ne_pane_t3_copy1_ParamLimits

0x4d5e,	// (0x0007055a) dialer_ne_pane_t3_copy1

0x4d8d,	// (0x00070589) cell_dialer_keypad_pane_ParamLimits

0x4d8d,	// (0x00070589) cell_dialer_keypad_pane

0x4da4,	// (0x000705a0) cell_dialer_command_1_pane_ParamLimits

0x4da4,	// (0x000705a0) cell_dialer_command_1_pane

0x4dba,	// (0x000705b6) cell_dialer_command_2_pane_ParamLimits

0x4dba,	// (0x000705b6) cell_dialer_command_2_pane

0xd067,	// (0x00078863) bg_button_pane_cp02_ParamLimits

0xd067,	// (0x00078863) bg_button_pane_cp02

0x4dc9,	// (0x000705c5) cell_dialer_keypad_pane_g1_ParamLimits

0x4dc9,	// (0x000705c5) cell_dialer_keypad_pane_g1

0xd067,	// (0x00078863) bg_button_pane_cp03_ParamLimits

0xd067,	// (0x00078863) bg_button_pane_cp03

0x4ddd,	// (0x000705d9) cell_dialer_command_1_pane_g1_ParamLimits

0x4ddd,	// (0x000705d9) cell_dialer_command_1_pane_g1

0xd073,	// (0x0007886f) bg_button_pane_cp04

0x4df1,	// (0x000705ed) cell_dialer_command_2_pane_g1

0xb455,	// (0x00076c51) bg_button_pane_cp06

0xd07b,	// (0x00078877) dialer_ne_clear_pane_g1

0xb331,	// (0x00076b2d) navi_pane_g2

0xb35f,	// (0x00076b5b) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007abe1) navi_pane_g

0xb3ee,	// (0x00076bea) navi_pane_mv_g2

0xb415,	// (0x00076c11) navi_pane_mv_g5

0x2871,	// (0x0006e06d) navi_pane_mv_t1

0xa38c,	// (0x00075b88) main_clock2_pane

0x4e3c,	// (0x00070638) main_clock2_list_pane_ParamLimits

0x4e3c,	// (0x00070638) main_clock2_list_pane

0x4e72,	// (0x0007066e) main_clock2_pane_t1_ParamLimits

0x4e72,	// (0x0007066e) main_clock2_pane_t1

0x4eae,	// (0x000706aa) main_clock2_pane_t2_ParamLimits

0x4eae,	// (0x000706aa) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007afc5) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007afc5) main_clock2_pane_t

0x4f4c,	// (0x00070748) popup_clock_analogue_window_cp03_ParamLimits

0x4f4c,	// (0x00070748) popup_clock_analogue_window_cp03

0x4f71,	// (0x0007076d) popup_clock_digital_window_cp02_ParamLimits

0x4f71,	// (0x0007076d) popup_clock_digital_window_cp02

0x4fe2,	// (0x000707de) main_clock2_list_single_pane_ParamLimits

0x4fe2,	// (0x000707de) main_clock2_list_single_pane

0xb455,	// (0x00076c51) list_highlight_pane_cp05

0xd0b9,	// (0x000788b5) main_clock2_list_single_pane_t1

0x155e,	// (0x0006cd5a) popup_toolbar_window_cp04_ParamLimits

0x442a,	// (0x0006fc26) camera2_autofocus_pane_g2_ParamLimits

0x442a,	// (0x0006fc26) camera2_autofocus_pane_g2

0x4436,	// (0x0006fc32) camera2_autofocus_pane_g3_ParamLimits

0x4436,	// (0x0006fc32) camera2_autofocus_pane_g3

0x4442,	// (0x0006fc3e) camera2_autofocus_pane_g4_ParamLimits

0x4442,	// (0x0006fc3e) camera2_autofocus_pane_g4

0x444e,	// (0x0006fc4a) camera2_autofocus_pane_g5_ParamLimits

0x444e,	// (0x0006fc4a) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007af09) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007af09) camera2_autofocus_pane_g

0xcf40,	// (0x0007873c) camera2_autofocus_pane_cp_g2

0xcf48,	// (0x00078744) camera2_autofocus_pane_cp_g3

0xcf50,	// (0x0007874c) camera2_autofocus_pane_cp_g4

0xcf58,	// (0x00078754) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0007af6f) camera2_autofocus_pane_cp_g

0x4ce4,	// (0x000704e0) popup_dialer_spcha_window

0x94ba,	// (0x00074cb6) bg_popup_sub_pane_cp07

0xd0c7,	// (0x000788c3) list_spcha_pane

0xd0cf,	// (0x000788cb) list_single_spcha_pane_ParamLimits

0xd0cf,	// (0x000788cb) list_single_spcha_pane

0x94ba,	// (0x00074cb6) list_highlight_pane_cp06

0xd0e0,	// (0x000788dc) list_single_spcha_pane_t1

0xc298,	// (0x00077a94) popup_call2_audio_out_window_g4_ParamLimits

0xc298,	// (0x00077a94) popup_call2_audio_out_window_g4

0x9540,	// (0x00074d3c) main_imed2_pane

0x9a4b,	// (0x00075247) popup_imed_adjust2_window

0x380b,	// (0x0006f007) popup_imed_trans_window_ParamLimits

0x380b,	// (0x0006f007) popup_imed_trans_window

0xcaad,	// (0x000782a9) popup_blid_sat_info2_window_t1

0xcabb,	// (0x000782b7) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0007ae9e) popup_blid_sat_info2_window_t

0x508c,	// (0x00070888) aid_size_cell_colour_35

0x50ac,	// (0x000708a8) aid_size_cell_colour_112

0x50cc,	// (0x000708c8) aid_size_cell_effect

0xc85b,	// (0x00078057) bg_tb_trans_pane_cp02

0xae90,	// (0x0007668c) heading_imed_pane

0x50ec,	// (0x000708e8) listscroll_imed_pane

0xd0ee,	// (0x000788ea) heading_imed_pane_g1

0xd0f6,	// (0x000788f2) heading_imed_pane_t1

0xd104,	// (0x00078900) grid_imed_colour_35_pane_ParamLimits

0xd104,	// (0x00078900) grid_imed_colour_35_pane

0x50f8,	// (0x000708f4) grid_imed_effect_pane

0xd11b,	// (0x00078917) list_imed_aspect_pane

0x510e,	// (0x0007090a) scroll_pane_cp027_ParamLimits

0x510e,	// (0x0007090a) scroll_pane_cp027

0x511f,	// (0x0007091b) cell_imed_effect_pane_ParamLimits

0x511f,	// (0x0007091b) cell_imed_effect_pane

0xd123,	// (0x0007891f) cell_imed_colour_pane_ParamLimits

0xd123,	// (0x0007891f) cell_imed_colour_pane

0xd165,	// (0x00078961) cell_imed_colour_pane_g1_ParamLimits

0xd165,	// (0x00078961) cell_imed_colour_pane_g1

0xd176,	// (0x00078972) hgihlgiht_grid_pane_cp016_ParamLimits

0xd176,	// (0x00078972) hgihlgiht_grid_pane_cp016

0x5146,	// (0x00070942) cell_imed_effect_pane_g1

0x514e,	// (0x0007094a) grid_highlight_pane_cp017

0xd187,	// (0x00078983) list_imed_single_pane_ParamLimits

0xd187,	// (0x00078983) list_imed_single_pane

0x94ba,	// (0x00074cb6) list_highlight_pane_cp07

0xd19c,	// (0x00078998) list_imed_aspect_pane_comp1_t1

0xc85b,	// (0x00078057) bg_tb_trans_pane_cp05

0xd1be,	// (0x000789ba) popup_imed_adjust2_window_g1

0xd1e5,	// (0x000789e1) popup_imed_adjust2_window_t1

0xd1fd,	// (0x000789f9) slider_imed_adjust_pane

0xd211,	// (0x00078a0d) slider_imed_adjust_pane_g1

0xd221,	// (0x00078a1d) slider_imed_adjust_pane_g2

0xd231,	// (0x00078a2d) slider_imed_adjust_pane_g3

0xd242,	// (0x00078a3e) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007afe2) slider_imed_adjust_pane_g

0x5157,	// (0x00070953) aid_size_cell_clipart2

0x5163,	// (0x0007095f) grid_imed_clipart_pane

0xd253,	// (0x00078a4f) scroll_pane_cp031

0x516d,	// (0x00070969) cell_imed_clipart_pane_ParamLimits

0x516d,	// (0x00070969) cell_imed_clipart_pane

0x518f,	// (0x0007098b) cell_imed_clipart_pane_g1

0x94ba,	// (0x00074cb6) grid_highlight_pane_cp014

0x4e51,	// (0x0007064d) main_clock2_pane_g1_ParamLimits

0x4e51,	// (0x0007064d) main_clock2_pane_g1

0x4f8d,	// (0x00070789) aid_call2_pane_cp10

0x4f9f,	// (0x0007079b) aid_call_pane_cp10

0xb292,	// (0x00076a8e) popup_clock_analogue_window_cp10_g1

0xb292,	// (0x00076a8e) popup_clock_analogue_window_cp10_g2

0x4fb1,	// (0x000707ad) popup_clock_analogue_window_cp10_g3

0x4fb1,	// (0x000707ad) popup_clock_analogue_window_cp10_g4

0xb292,	// (0x00076a8e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007afd0) popup_clock_analogue_window_cp10_g

0x4fc3,	// (0x000707bf) popup_clock_analogue_window_cp10_t1

0x4ff4,	// (0x000707f0) clock_digital_number_pane_cp10_ParamLimits

0x4ff4,	// (0x000707f0) clock_digital_number_pane_cp10

0x500c,	// (0x00070808) clock_digital_number_pane_cp11_ParamLimits

0x500c,	// (0x00070808) clock_digital_number_pane_cp11

0x5024,	// (0x00070820) clock_digital_number_pane_cp12_ParamLimits

0x5024,	// (0x00070820) clock_digital_number_pane_cp12

0x503c,	// (0x00070838) clock_digital_number_pane_cp13_ParamLimits

0x503c,	// (0x00070838) clock_digital_number_pane_cp13

0x5054,	// (0x00070850) clock_digital_separator_pane_cp10_ParamLimits

0x5054,	// (0x00070850) clock_digital_separator_pane_cp10

0x506c,	// (0x00070868) popup_clock_digital_window_cp02_t1_ParamLimits

0x506c,	// (0x00070868) popup_clock_digital_window_cp02_t1

0xa2bf,	// (0x00075abb) clock_digital_number_pane_cp10_g1

0xa2bf,	// (0x00075abb) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007afeb) clock_digital_number_pane_cp10_g

0xa2bf,	// (0x00075abb) clock_digital_separator_pane_cp10_g1

0xa2bf,	// (0x00075abb) clock_digital_separator_pane_g2_cp10

0xb41d,	// (0x00076c19) navi_pane_vded_g4

0xb426,	// (0x00076c22) navi_pane_vded_g5

0xb42f,	// (0x00076c2b) navi_pane_vded_t1

0x9540,	// (0x00074d3c) main_vded_pane

0x5198,	// (0x00070994) main_vded_pane_g1

0x51a2,	// (0x0007099e) main_vded_pane_g2

0x51ac,	// (0x000709a8) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007aff0) main_vded_pane_g

0x51b6,	// (0x000709b2) main_vded_pane_t1

0x51c4,	// (0x000709c0) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007aff7) main_vded_pane_t

0x51d2,	// (0x000709ce) vded_slider_pane

0x51da,	// (0x000709d6) vded_video_pane

0xd25b,	// (0x00078a57) vded_video_pane_g1

0x51e2,	// (0x000709de) vded_video_pane_g2

0xcc6f,	// (0x0007846b) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007affc) vded_video_pane_g

0xd265,	// (0x00078a61) vded_slider_pane_g1

0xc9c2,	// (0x000781be) vded_slider_pane_g2

0xd26e,	// (0x00078a6a) vded_slider_pane_g3

0xd277,	// (0x00078a73) vded_slider_pane_g4

0xd280,	// (0x00078a7c) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007b003) vded_slider_pane_g

0x4bc5,	// (0x000703c1) mup3_rocker_pane_ParamLimits

0x4bc5,	// (0x000703c1) mup3_rocker_pane

0x51eb,	// (0x000709e7) mup3_control_keys_pane_g1

0x51f3,	// (0x000709ef) mup3_control_keys_pane_g2

0x51fb,	// (0x000709f7) mup3_control_keys_pane_g3

0x5203,	// (0x000709ff) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007b00e) mup3_control_keys_pane_g

0x0423,	// (0x0006bc1f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0423,	// (0x0006bc1f) popup_toolbar2_fixed_window_cp01

0x4bf9,	// (0x000703f5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bf9,	// (0x000703f5) popup_toolbar2_fixed_window_cp02

0xbbd7,	// (0x000773d3) popup_call2_audio_second_window_t4_ParamLimits

0xbbd7,	// (0x000773d3) popup_call2_audio_second_window_t4

0xc105,	// (0x00077901) popup_call2_audio_first_window_t6_ParamLimits

0xc105,	// (0x00077901) popup_call2_audio_first_window_t6

0xc39b,	// (0x00077b97) popup_call2_audio_out_window_t6_ParamLimits

0xc39b,	// (0x00077b97) popup_call2_audio_out_window_t6

0x9540,	// (0x00074d3c) main_vitu_pane

0x5213,	// (0x00070a0f) aid_size_cell_itu_ParamLimits

0x5213,	// (0x00070a0f) aid_size_cell_itu

0xa5b6,	// (0x00075db2) bg_popup_window_pane_cp08_ParamLimits

0xa5b6,	// (0x00075db2) bg_popup_window_pane_cp08

0x5229,	// (0x00070a25) field_vitu_entry_pane_ParamLimits

0x5229,	// (0x00070a25) field_vitu_entry_pane

0x5240,	// (0x00070a3c) grid_vitu_function_pane_ParamLimits

0x5240,	// (0x00070a3c) grid_vitu_function_pane

0x525b,	// (0x00070a57) grid_vitu_itu_pane_ParamLimits

0x525b,	// (0x00070a57) grid_vitu_itu_pane

0x5279,	// (0x00070a75) cell_vitu_itu_pane_ParamLimits

0x5279,	// (0x00070a75) cell_vitu_itu_pane

0x529b,	// (0x00070a97) cell_vitu_function_pane_ParamLimits

0x529b,	// (0x00070a97) cell_vitu_function_pane

0xa5b6,	// (0x00075db2) bg_popup_sub_pane_cp08_ParamLimits

0xa5b6,	// (0x00075db2) bg_popup_sub_pane_cp08

0x52b4,	// (0x00070ab0) field_vitu_entry_pane_t1_ParamLimits

0x52b4,	// (0x00070ab0) field_vitu_entry_pane_t1

0xd2a1,	// (0x00078a9d) field_vitu_entry_pane_t2_ParamLimits

0xd2a1,	// (0x00078a9d) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007b01c) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007b01c) field_vitu_entry_pane_t

0xd2be,	// (0x00078aba) bg_button_pane_cp05_ParamLimits

0xd2be,	// (0x00078aba) bg_button_pane_cp05

0x52d2,	// (0x00070ace) cell_vitu_itu_pane_g1

0x52ea,	// (0x00070ae6) cell_vitu_itu_pane_t1_ParamLimits

0x52ea,	// (0x00070ae6) cell_vitu_itu_pane_t1

0x52fc,	// (0x00070af8) cell_vitu_itu_pane_t2_ParamLimits

0x52fc,	// (0x00070af8) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007b021) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007b021) cell_vitu_itu_pane_t

0xd2cc,	// (0x00078ac8) bg_button_pane_cp07

0x5331,	// (0x00070b2d) cell_vitu_function_pane_g1

0x98a2,	// (0x0007509e) main_calc_pane_g1

0x024a,	// (0x0006ba46) aid_visual_content_pane

0x9540,	// (0x00074d3c) main_vradio_pane

0x533a,	// (0x00070b36) main_vradio_pane_g1_ParamLimits

0x533a,	// (0x00070b36) main_vradio_pane_g1

0xd2d6,	// (0x00078ad2) main_vradio_pane_g2_ParamLimits

0xd2d6,	// (0x00078ad2) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007b028) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007b028) main_vradio_pane_g

0x5353,	// (0x00070b4f) main_vradio_pane_t1_ParamLimits

0x5353,	// (0x00070b4f) main_vradio_pane_t1

0x5368,	// (0x00070b64) main_vradio_pane_t2_ParamLimits

0x5368,	// (0x00070b64) main_vradio_pane_t2

0xd2e3,	// (0x00078adf) main_vradio_pane_t3_ParamLimits

0xd2e3,	// (0x00078adf) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007b02d) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007b02d) main_vradio_pane_t

0x537d,	// (0x00070b79) vradio_rocker_control_pane_ParamLimits

0x537d,	// (0x00070b79) vradio_rocker_control_pane

0x538f,	// (0x00070b8b) vradio_station_info_pane_ParamLimits

0x538f,	// (0x00070b8b) vradio_station_info_pane

0xd2f7,	// (0x00078af3) vradio_frequency_info_pane_ParamLimits

0xd2f7,	// (0x00078af3) vradio_frequency_info_pane

0xcc6f,	// (0x0007846b) vradio_station_info_pane_g1

0xd306,	// (0x00078b02) vradio_station_info_pane_t1_ParamLimits

0xd306,	// (0x00078b02) vradio_station_info_pane_t1

0xd328,	// (0x00078b24) vradio_station_info_pane_t2_ParamLimits

0xd328,	// (0x00078b24) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007b034) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007b034) vradio_station_info_pane_t

0xd33a,	// (0x00078b36) vradio_tuning_pane

0xd342,	// (0x00078b3e) vradio_rocker_control_pane_g1

0xd34a,	// (0x00078b46) vradio_rocker_control_pane_g2

0xd352,	// (0x00078b4e) vradio_rocker_control_pane_g3

0xd35a,	// (0x00078b56) vradio_rocker_control_pane_g4

0xd362,	// (0x00078b5e) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007b039) vradio_rocker_control_pane_g

0x53a1,	// (0x00070b9d) vradio_frequency_info_pane_g1

0xd36a,	// (0x00078b66) vradio_frequency_info_pane_t1_ParamLimits

0xd36a,	// (0x00078b66) vradio_frequency_info_pane_t1

0x53ab,	// (0x00070ba7) vradio_tuning_pane_g1

0x53b6,	// (0x00070bb2) vradio_tuning_pane_t1

0x94f0,	// (0x00074cec) area_side_right_pane_ParamLimits

0x94f0,	// (0x00074cec) area_side_right_pane

0xc816,	// (0x00078012) status_small_pane_g1

0xc81e,	// (0x0007801a) status_small_pane_g2

0xc827,	// (0x00078023) status_small_pane_g3

0xc830,	// (0x0007802c) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0007adf4) status_small_pane_g

0xc839,	// (0x00078035) status_small_pane_t1

0x9540,	// (0x00074d3c) main_video3_pane

0xd37e,	// (0x00078b7a) cams_zoom_vslider_pane

0xd386,	// (0x00078b82) image3_wide_pane_ParamLimits

0xd386,	// (0x00078b82) image3_wide_pane

0xd3a0,	// (0x00078b9c) image3_wide_small_pane

0xd3b4,	// (0x00078bb0) main_video3_pane_g1_ParamLimits

0xd3b4,	// (0x00078bb0) main_video3_pane_g1

0xd3d0,	// (0x00078bcc) main_video3_pane_g2_ParamLimits

0xd3d0,	// (0x00078bcc) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007b044) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007b044) main_video3_pane_g

0xd3ec,	// (0x00078be8) main_video3_pane_t1_ParamLimits

0xd3ec,	// (0x00078be8) main_video3_pane_t1

0xd417,	// (0x00078c13) main_video3_pane_t2_ParamLimits

0xd417,	// (0x00078c13) main_video3_pane_t2

0xd442,	// (0x00078c3e) main_video3_pane_t3_ParamLimits

0xd442,	// (0x00078c3e) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007b049) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007b049) main_video3_pane_t

0xd46f,	// (0x00078c6b) cams_zoom_vslider_pane_g1

0xd478,	// (0x00078c74) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007b050) cams_zoom_vslider_pane_g

0xd480,	// (0x00078c7c) small_slider_vertical_pane

0xcc6f,	// (0x0007846b) small_slider_vertical_pane_g1

0xcc6f,	// (0x0007846b) small_slider_vertical_pane_g2

0xd488,	// (0x00078c84) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007b055) small_slider_vertical_pane_g

0x9540,	// (0x00074d3c) main_hwr_training_pane

0xd491,	// (0x00078c8d) hwr_training_instruct_pane_ParamLimits

0xd491,	// (0x00078c8d) hwr_training_instruct_pane

0x53c5,	// (0x00070bc1) hwr_training_navi_pane_ParamLimits

0x53c5,	// (0x00070bc1) hwr_training_navi_pane

0x53e4,	// (0x00070be0) hwr_training_write_pane_ParamLimits

0x53e4,	// (0x00070be0) hwr_training_write_pane

0x94ba,	// (0x00074cb6) bg_frame_shadow_pane

0xd4c8,	// (0x00078cc4) hwr_training_write_pane_g1

0xd4d0,	// (0x00078ccc) hwr_training_write_pane_g2

0xd4d8,	// (0x00078cd4) hwr_training_write_pane_g3

0xd4e0,	// (0x00078cdc) hwr_training_write_pane_g4

0xd4e8,	// (0x00078ce4) hwr_training_write_pane_g5

0xd4f0,	// (0x00078cec) hwr_training_write_pane_g6

0xd4f8,	// (0x00078cf4) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007b05c) hwr_training_write_pane_g

0x9b3c,	// (0x00075338) hwr_training_navi_pane_g1_ParamLimits

0x9b3c,	// (0x00075338) hwr_training_navi_pane_g1

0x9b4e,	// (0x0007534a) hwr_training_navi_pane_g2_ParamLimits

0x9b4e,	// (0x0007534a) hwr_training_navi_pane_g2

0x9b60,	// (0x0007535c) hwr_training_navi_pane_g3_ParamLimits

0x9b60,	// (0x0007535c) hwr_training_navi_pane_g3

0x9b70,	// (0x0007536c) hwr_training_navi_pane_g4_ParamLimits

0x9b70,	// (0x0007536c) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007b06b) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007b06b) hwr_training_navi_pane_g

0x9b7d,	// (0x00075379) hwr_training_navi_pane_t1

0x542c,	// (0x00070c28) list_single_hwr_training_instruct_pane_ParamLimits

0x542c,	// (0x00070c28) list_single_hwr_training_instruct_pane

0xd500,	// (0x00078cfc) list_single_hwr_training_instruct_pane_t1

0xcbaf,	// (0x000783ab) bg_frame_shadow_pane_g1

0xd50f,	// (0x00078d0b) bg_frame_shadow_pane_g2

0xd517,	// (0x00078d13) bg_frame_shadow_pane_g3

0xd51f,	// (0x00078d1b) bg_frame_shadow_pane_g4

0xd527,	// (0x00078d23) bg_frame_shadow_pane_g5

0xd52f,	// (0x00078d2b) bg_frame_shadow_pane_g6

0xd537,	// (0x00078d33) bg_frame_shadow_pane_g7

0xa445,	// (0x00075c41) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007b076) bg_frame_shadow_pane_g

0x9540,	// (0x00074d3c) main_video_tele_dialer_pane

0x5441,	// (0x00070c3d) aid_size_cell_video_keypad_ParamLimits

0x5441,	// (0x00070c3d) aid_size_cell_video_keypad

0x545b,	// (0x00070c57) grid_video_dialer_keypad_pane_ParamLimits

0x545b,	// (0x00070c57) grid_video_dialer_keypad_pane

0x54a7,	// (0x00070ca3) video_down_pane_cp_ParamLimits

0x54a7,	// (0x00070ca3) video_down_pane_cp

0x54d9,	// (0x00070cd5) cell_video_dialer_keypad_pane_ParamLimits

0x54d9,	// (0x00070cd5) cell_video_dialer_keypad_pane

0xd53f,	// (0x00078d3b) bg_button_pane_cp08_ParamLimits

0xd53f,	// (0x00078d3b) bg_button_pane_cp08

0x54fb,	// (0x00070cf7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54fb,	// (0x00070cf7) cell_video_dialer_keypad_pane_g1

0x4baf,	// (0x000703ab) mup3_rocker2_pane_ParamLimits

0x4baf,	// (0x000703ab) mup3_rocker2_pane

0xcc6f,	// (0x0007846b) mup3_rocker2_pane_g1

0x36ec,	// (0x0006eee8) main_dialer2_pane

0x9540,	// (0x00074d3c) main_mp4_pane

0x9b93,	// (0x0007538f) main_mp4_pane_g1_ParamLimits

0x9b93,	// (0x0007538f) main_mp4_pane_g1

0x9b93,	// (0x0007538f) main_mp4_pane_g2_ParamLimits

0x9b93,	// (0x0007538f) main_mp4_pane_g2

0x5532,	// (0x00070d2e) main_mp4_pane_g3_ParamLimits

0x5532,	// (0x00070d2e) main_mp4_pane_g3

0x9ba1,	// (0x0007539d) main_mp4_pane_g4_ParamLimits

0x9ba1,	// (0x0007539d) main_mp4_pane_g4

0x9bc9,	// (0x000753c5) main_mp4_pane_g5_ParamLimits

0x9bc9,	// (0x000753c5) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007b096) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007b096) main_mp4_pane_g

0x9c19,	// (0x00075415) main_mp4_pane_t1_ParamLimits

0x9c19,	// (0x00075415) main_mp4_pane_t1

0x9c75,	// (0x00075471) main_mp4_pane_t2_ParamLimits

0x9c75,	// (0x00075471) main_mp4_pane_t2

0xd54b,	// (0x00078d47) main_mp4_pane_t3_ParamLimits

0xd54b,	// (0x00078d47) main_mp4_pane_t3

0x9cc7,	// (0x000754c3) main_mp4_pane_t4_ParamLimits

0x9cc7,	// (0x000754c3) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007b0a3) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007b0a3) main_mp4_pane_t

0x9d0b,	// (0x00075507) mp4_progress_pane_ParamLimits

0x9d0b,	// (0x00075507) mp4_progress_pane

0x9d55,	// (0x00075551) mp4_rocker_pane_ParamLimits

0x9d55,	// (0x00075551) mp4_rocker_pane

0xd573,	// (0x00078d6f) mp4_progress_pane_t1

0xd58c,	// (0x00078d88) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007b0ac) mp4_progress_pane_t

0xd5a5,	// (0x00078da1) mup_progress_pane_cp04

0xd5b1,	// (0x00078dad) mp4_rocker_pane_g1

0x556e,	// (0x00070d6a) aid_cell_size_keypad2_ParamLimits

0x556e,	// (0x00070d6a) aid_cell_size_keypad2

0x5584,	// (0x00070d80) dialer2_ne_pane_ParamLimits

0x5584,	// (0x00070d80) dialer2_ne_pane

0x559e,	// (0x00070d9a) grid_dialer2_keypad_pane_ParamLimits

0x559e,	// (0x00070d9a) grid_dialer2_keypad_pane

0xca54,	// (0x00078250) bg_popup_call_pane_cp07_ParamLimits

0xca54,	// (0x00078250) bg_popup_call_pane_cp07

0x55ba,	// (0x00070db6) dialer2_ne_pane_t1_ParamLimits

0x55ba,	// (0x00070db6) dialer2_ne_pane_t1

0x55f5,	// (0x00070df1) cell_dialer2_keypad_pane_ParamLimits

0x55f5,	// (0x00070df1) cell_dialer2_keypad_pane

0xd5cd,	// (0x00078dc9) bg_button_pane_pane_cp04_ParamLimits

0xd5cd,	// (0x00078dc9) bg_button_pane_pane_cp04

0x5617,	// (0x00070e13) cell_dialer2_keypad_pane_g1_ParamLimits

0x5617,	// (0x00070e13) cell_dialer2_keypad_pane_g1

0x1432,	// (0x0006cc2e) aid_placing_vt_set_content_ParamLimits

0x1432,	// (0x0006cc2e) aid_placing_vt_set_content

0x145a,	// (0x0006cc56) aid_placing_vt_set_title_ParamLimits

0x145a,	// (0x0006cc56) aid_placing_vt_set_title

0x9540,	// (0x00074d3c) main_image3_pane

0x56dd,	// (0x00070ed9) area_side_right_pane_cp01_ParamLimits

0x56dd,	// (0x00070ed9) area_side_right_pane_cp01

0x9b93,	// (0x0007538f) main_image3_pane_g1_ParamLimits

0x9b93,	// (0x0007538f) main_image3_pane_g1

0x56f4,	// (0x00070ef0) main_image3_pane_g2_ParamLimits

0x56f4,	// (0x00070ef0) main_image3_pane_g2

0x571c,	// (0x00070f18) main_image3_pane_g3_ParamLimits

0x571c,	// (0x00070f18) main_image3_pane_g3

0x5746,	// (0x00070f42) main_image3_pane_g4_ParamLimits

0x5746,	// (0x00070f42) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007b0bb) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007b0bb) main_image3_pane_g

0x5770,	// (0x00070f6c) main_image3_pane_t1_ParamLimits

0x5770,	// (0x00070f6c) main_image3_pane_t1

0x57c8,	// (0x00070fc4) main_image3_pane_t2_ParamLimits

0x57c8,	// (0x00070fc4) main_image3_pane_t2

0x581a,	// (0x00071016) main_image3_pane_t3_ParamLimits

0x581a,	// (0x00071016) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007b0c4) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007b0c4) main_image3_pane_t

0xa5b6,	// (0x00075db2) grid_sctrl_middle_pane_cp01_ParamLimits

0xa5b6,	// (0x00075db2) grid_sctrl_middle_pane_cp01

0x58a2,	// (0x0007109e) cell_sctrl_middle_pane_cp01_ParamLimits

0x58a2,	// (0x0007109e) cell_sctrl_middle_pane_cp01

0x58bf,	// (0x000710bb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58bf,	// (0x000710bb) cell_sctrl_middle_pane_cp01_g1

0x9540,	// (0x00074d3c) main_call4_pane

0x58d5,	// (0x000710d1) aid_size_button_call4_ParamLimits

0x58d5,	// (0x000710d1) aid_size_button_call4

0x5906,	// (0x00071102) call4_windows_pane_ParamLimits

0x5906,	// (0x00071102) call4_windows_pane

0x5926,	// (0x00071122) grid_call4_button_pane_ParamLimits

0x5926,	// (0x00071122) grid_call4_button_pane

0xd5d9,	// (0x00078dd5) call4_windows_conf_pane

0xd5f0,	// (0x00078dec) popup_call4_audio_first_window_ParamLimits

0xd5f0,	// (0x00078dec) popup_call4_audio_first_window

0xd63c,	// (0x00078e38) popup_call4_audio_second_window_ParamLimits

0xd63c,	// (0x00078e38) popup_call4_audio_second_window

0xd650,	// (0x00078e4c) popup_call4_audio_wait_window_ParamLimits

0xd650,	// (0x00078e4c) popup_call4_audio_wait_window

0x5953,	// (0x0007114f) cell_call4_button_pane_ParamLimits

0x5953,	// (0x0007114f) cell_call4_button_pane

0x597c,	// (0x00071178) bg_button_pane_cp09_ParamLimits

0x597c,	// (0x00071178) bg_button_pane_cp09

0x5988,	// (0x00071184) cell_call4_button_pane_g1_ParamLimits

0x5988,	// (0x00071184) cell_call4_button_pane_g1

0x59ae,	// (0x000711aa) cell_call4_button_pane_t1_ParamLimits

0x59ae,	// (0x000711aa) cell_call4_button_pane_t1

0xd698,	// (0x00078e94) popup_call4_audio_conf_window_ParamLimits

0xd698,	// (0x00078e94) popup_call4_audio_conf_window

0x4c0f,	// (0x0007040b) mup3_progress_pane_t1_ParamLimits

0x4c2e,	// (0x0007042a) mup3_progress_pane_t2_ParamLimits

0xcf76,	// (0x00078772) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0007af98) mup3_progress_pane_t_ParamLimits

0xcf93,	// (0x0007878f) mup_progress_pane_cp03_ParamLimits

0x520b,	// (0x00070a07) mup3_control_keys_pane_g4_copy1

0x9d39,	// (0x00075535) mp4_rocker2_pane_ParamLimits

0x9d39,	// (0x00075535) mp4_rocker2_pane

0xd6ac,	// (0x00078ea8) mp4_rocker2_pane_g1

0xd6b4,	// (0x00078eb0) mp4_rocker2_pane_g2

0x9da7,	// (0x000755a3) mp4_rocker2_pane_g3

0x9daf,	// (0x000755ab) mp4_rocker2_pane_g4

0x9db7,	// (0x000755b3) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007b0cd) mp4_rocker2_pane_g

0x9540,	// (0x00074d3c) main_camera4_pane

0x9540,	// (0x00074d3c) main_video4_pane

0x5475,	// (0x00070c71) main_video_tele_dialer_pane_t1_ParamLimits

0x5475,	// (0x00070c71) main_video_tele_dialer_pane_t1

0x548e,	// (0x00070c8a) main_video_tele_dialer_pane_t2_ParamLimits

0x548e,	// (0x00070c8a) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007b087) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007b087) main_video_tele_dialer_pane_t

0x59ec,	// (0x000711e8) cam4_autofocus_pane_ParamLimits

0x59ec,	// (0x000711e8) cam4_autofocus_pane

0x5a02,	// (0x000711fe) cam4_image_uncrop_pane_ParamLimits

0x5a02,	// (0x000711fe) cam4_image_uncrop_pane

0x5a1c,	// (0x00071218) cam4_indicators_pane_ParamLimits

0x5a1c,	// (0x00071218) cam4_indicators_pane

0x5a47,	// (0x00071243) main_camera4_pane_g1_ParamLimits

0x5a47,	// (0x00071243) main_camera4_pane_g1

0x5a59,	// (0x00071255) main_camera4_pane_g2_ParamLimits

0x5a59,	// (0x00071255) main_camera4_pane_g2

0x5a6c,	// (0x00071268) main_camera4_pane_g3_ParamLimits

0x5a6c,	// (0x00071268) main_camera4_pane_g3

0x5a7f,	// (0x0007127b) main_camera4_pane_g4_ParamLimits

0x5a7f,	// (0x0007127b) main_camera4_pane_g4

0x5a92,	// (0x0007128e) main_camera4_pane_g5_ParamLimits

0x5a92,	// (0x0007128e) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007b0d8) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007b0d8) main_camera4_pane_g

0x5ab6,	// (0x000712b2) main_camera4_pane_t1_ParamLimits

0x5ab6,	// (0x000712b2) main_camera4_pane_t1

0x9ddb,	// (0x000755d7) bg_tb_trans_pane_cp06

0x9df1,	// (0x000755ed) cam4_indicators_pane_g1

0x9e02,	// (0x000755fe) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007b0f3) cam4_indicators_pane_g

0x9e20,	// (0x0007561c) cam4_indicators_pane_t1

0x5b1a,	// (0x00071316) main_video4_pane_g1_ParamLimits

0x5b1a,	// (0x00071316) main_video4_pane_g1

0x5b29,	// (0x00071325) main_video4_pane_g2_ParamLimits

0x5b29,	// (0x00071325) main_video4_pane_g2

0x5b38,	// (0x00071334) main_video4_pane_g3_ParamLimits

0x5b38,	// (0x00071334) main_video4_pane_g3

0x5b47,	// (0x00071343) main_video4_pane_g4_ParamLimits

0x5b47,	// (0x00071343) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007b0fa) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007b0fa) main_video4_pane_g

0x5b65,	// (0x00071361) vid4_indicators_pane_ParamLimits

0x5b65,	// (0x00071361) vid4_indicators_pane

0x5b93,	// (0x0007138f) video4_image_uncrop_cif_pane_ParamLimits

0x5b93,	// (0x0007138f) video4_image_uncrop_cif_pane

0x5bad,	// (0x000713a9) video4_image_uncrop_nhd_pane_ParamLimits

0x5bad,	// (0x000713a9) video4_image_uncrop_nhd_pane

0x5a02,	// (0x000711fe) video4_image_uncrop_vga_pane_ParamLimits

0x5a02,	// (0x000711fe) video4_image_uncrop_vga_pane

0x9532,	// (0x00074d2e) bg_tb_trans_pane_cp07

0x9e4c,	// (0x00075648) vid4_indicators_pane_g1

0x9e60,	// (0x0007565c) vid4_indicators_pane_g2

0x9e74,	// (0x00075670) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007b105) vid4_indicators_pane_g

0x9ea3,	// (0x0007569f) vid4_indicators_pane_t1

0x5bc1,	// (0x000713bd) cam4_autofocus_pane_g1

0x5bc9,	// (0x000713c5) cam4_autofocus_pane_g2

0x5bd1,	// (0x000713cd) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007b110) cam4_autofocus_pane_g

0x5bd9,	// (0x000713d5) cam4_autofocus_pane_g3_copy1

0x54bd,	// (0x00070cb9) video_down_pane_cp_t1

0x54cb,	// (0x00070cc7) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007b08c) video_down_pane_cp_t

0x9532,	// (0x00074d2e) popup_vitu2_window_ParamLimits

0x9532,	// (0x00074d2e) popup_vitu2_window

0x5be1,	// (0x000713dd) aid_size_cell2_itu2_ParamLimits

0x5be1,	// (0x000713dd) aid_size_cell2_itu2

0x5c07,	// (0x00071403) aid_size_cell_itu2_ParamLimits

0x5c07,	// (0x00071403) aid_size_cell_itu2

0x5c63,	// (0x0007145f) bg_popup_window_pane_cp09_ParamLimits

0x5c63,	// (0x0007145f) bg_popup_window_pane_cp09

0x5c71,	// (0x0007146d) field_vitu2_entry_pane_ParamLimits

0x5c71,	// (0x0007146d) field_vitu2_entry_pane

0x5c97,	// (0x00071493) grid_vitu2_function_pane_ParamLimits

0x5c97,	// (0x00071493) grid_vitu2_function_pane

0x5ce8,	// (0x000714e4) grid_vitu2_itu_pane_ParamLimits

0x5ce8,	// (0x000714e4) grid_vitu2_itu_pane

0x5d7b,	// (0x00071577) cell_vitu2_itu_pane_ParamLimits

0x5d7b,	// (0x00071577) cell_vitu2_itu_pane

0x5d9f,	// (0x0007159b) cell_vitu2_function_pane_ParamLimits

0x5d9f,	// (0x0007159b) cell_vitu2_function_pane

0xd6bc,	// (0x00078eb8) bg_popup_call_pane_cp08_ParamLimits

0xd6bc,	// (0x00078eb8) bg_popup_call_pane_cp08

0xd6d3,	// (0x00078ecf) field_vitu2_entry_pane_g1

0xd6df,	// (0x00078edb) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007b117) field_vitu2_entry_pane_g

0x5dde,	// (0x000715da) field_vitu2_entry_pane_t1_ParamLimits

0x5dde,	// (0x000715da) field_vitu2_entry_pane_t1

0xa60c,	// (0x00075e08) field_vitu2_entry_pane_t2_ParamLimits

0xa60c,	// (0x00075e08) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007b11e) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007b11e) field_vitu2_entry_pane_t

0x5e0a,	// (0x00071606) bg_button_pane_cp010_ParamLimits

0x5e0a,	// (0x00071606) bg_button_pane_cp010

0x5e18,	// (0x00071614) cell_vitu2_itu_pane_g1

0x5e43,	// (0x0007163f) cell_vitu2_itu_pane_t1_ParamLimits

0x5e43,	// (0x0007163f) cell_vitu2_itu_pane_t1

0x0132,	// (0x0006b92e) cell_vitu2_itu_pane_t2_ParamLimits

0x0132,	// (0x0006b92e) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007b128) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007b128) cell_vitu2_itu_pane_t

0x9532,	// (0x00074d2e) bg_button_pane_cp011

0x5ea1,	// (0x0007169d) cell_vitu2_function_pane_g1

0x9540,	// (0x00074d3c) main_myfav_hc_pane

0x586a,	// (0x00071066) popup_image3_note_pane_ParamLimits

0x586a,	// (0x00071066) popup_image3_note_pane

0x5886,	// (0x00071082) popup_image3_tool_bar_pane_ParamLimits

0x5886,	// (0x00071082) popup_image3_tool_bar_pane

0x01b6,	// (0x0006b9b2) cell_vitu2_itu_pane_t3_ParamLimits

0x01b6,	// (0x0006b9b2) cell_vitu2_itu_pane_t3

0x94ba,	// (0x00074cb6) bg_popup_trans_pane

0xd701,	// (0x00078efd) grid_image3_tool_bar_pane

0xd70b,	// (0x00078f07) bg_popup_trans_pane_g1

0xac48,	// (0x00076444) bg_popup_trans_pane_g2

0xd713,	// (0x00078f0f) bg_popup_trans_pane_g3

0xd71b,	// (0x00078f17) bg_popup_trans_pane_g4

0xd723,	// (0x00078f1f) bg_popup_trans_pane_g5

0xd72b,	// (0x00078f27) bg_popup_trans_pane_g6

0xd733,	// (0x00078f2f) bg_popup_trans_pane_g7

0xd73b,	// (0x00078f37) bg_popup_trans_pane_g8

0xac28,	// (0x00076424) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007b12f) bg_popup_trans_pane_g

0xd743,	// (0x00078f3f) cell_image3_tool_bar_pane_ParamLimits

0xd743,	// (0x00078f3f) cell_image3_tool_bar_pane

0xcc6f,	// (0x0007846b) cell_image3_tool_bar_pane_g1

0x94ba,	// (0x00074cb6) bg_popup_trans_pane_cp1

0xd757,	// (0x00078f53) popup_image3_note_pane_t1

0xd765,	// (0x00078f61) popup_image3_note_pane_t2

0xd773,	// (0x00078f6f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007b142) popup_image3_note_pane_t

0xd781,	// (0x00078f7d) popup_image3_note_pane_t3_copy1

0x5eb5,	// (0x000716b1) bg_myfav_hc_instruction_pane_ParamLimits

0x5eb5,	// (0x000716b1) bg_myfav_hc_instruction_pane

0x5ec9,	// (0x000716c5) cell_myfav_contact_pane_ParamLimits

0x5ec9,	// (0x000716c5) cell_myfav_contact_pane

0x5ee7,	// (0x000716e3) cell_myfav_contact_pane_cp1_ParamLimits

0x5ee7,	// (0x000716e3) cell_myfav_contact_pane_cp1

0x5eff,	// (0x000716fb) cell_myfav_contact_pane_cp2_ParamLimits

0x5eff,	// (0x000716fb) cell_myfav_contact_pane_cp2

0x5f17,	// (0x00071713) cell_myfav_contact_pane_cp3_ParamLimits

0x5f17,	// (0x00071713) cell_myfav_contact_pane_cp3

0x5f2e,	// (0x0007172a) cell_myfav_contact_pane_cp4_ParamLimits

0x5f2e,	// (0x0007172a) cell_myfav_contact_pane_cp4

0x5f46,	// (0x00071742) cell_myfav_contact_pane_cp5_ParamLimits

0x5f46,	// (0x00071742) cell_myfav_contact_pane_cp5

0x5f5a,	// (0x00071756) cell_myfav_contact_pane_cp6_ParamLimits

0x5f5a,	// (0x00071756) cell_myfav_contact_pane_cp6

0x5f70,	// (0x0007176c) cell_myfav_contact_pane_cp7_ParamLimits

0x5f70,	// (0x0007176c) cell_myfav_contact_pane_cp7

0xd78f,	// (0x00078f8b) listscroll_gen_pane_cp05

0x5f8a,	// (0x00071786) main_myfav_hc_pane_g1_ParamLimits

0x5f8a,	// (0x00071786) main_myfav_hc_pane_g1

0x5fa4,	// (0x000717a0) main_myfav_hc_pane_g2_ParamLimits

0x5fa4,	// (0x000717a0) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007b149) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007b149) main_myfav_hc_pane_g

0x5fd6,	// (0x000717d2) main_myfav_hc_pane_t1_ParamLimits

0x5fd6,	// (0x000717d2) main_myfav_hc_pane_t1

0xd798,	// (0x00078f94) main_myfav_hc_pane_t2_ParamLimits

0xd798,	// (0x00078f94) main_myfav_hc_pane_t2

0xd7aa,	// (0x00078fa6) main_myfav_hc_pane_t3_ParamLimits

0xd7aa,	// (0x00078fa6) main_myfav_hc_pane_t3

0x5fed,	// (0x000717e9) main_myfav_hc_pane_t4_ParamLimits

0x5fed,	// (0x000717e9) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007b150) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007b150) main_myfav_hc_pane_t

0xcc6f,	// (0x0007846b) bg_myfav_hc_instruction_pane_g1

0xd7bc,	// (0x00078fb8) cell_myfav_contact_pane_g1_ParamLimits

0xd7bc,	// (0x00078fb8) cell_myfav_contact_pane_g1

0xd7bc,	// (0x00078fb8) cell_myfav_contact_pane_g2_ParamLimits

0xd7bc,	// (0x00078fb8) cell_myfav_contact_pane_g2

0xd7c8,	// (0x00078fc4) cell_myfav_contact_pane_g3_ParamLimits

0xd7c8,	// (0x00078fc4) cell_myfav_contact_pane_g3

0xcf60,	// (0x0007875c) cell_myfav_contact_pane_g4_ParamLimits

0xcf60,	// (0x0007875c) cell_myfav_contact_pane_g4

0xd7d5,	// (0x00078fd1) cell_myfav_contact_pane_g5_ParamLimits

0xd7d5,	// (0x00078fd1) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007b15b) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007b15b) cell_myfav_contact_pane_g

0x5fbe,	// (0x000717ba) main_myfav_hc_pane_g3_ParamLimits

0x5fbe,	// (0x000717ba) main_myfav_hc_pane_g3

0x0385,	// (0x0006bb81) popup_adpt_find_window

0x6015,	// (0x00071811) afind_page_pane_ParamLimits

0x6015,	// (0x00071811) afind_page_pane

0x602a,	// (0x00071826) aid_size_cell_afind_ParamLimits

0x602a,	// (0x00071826) aid_size_cell_afind

0x6048,	// (0x00071844) bg_popup_sub_pane_cp09_ParamLimits

0x6048,	// (0x00071844) bg_popup_sub_pane_cp09

0x6055,	// (0x00071851) find_pane_cp01_ParamLimits

0x6055,	// (0x00071851) find_pane_cp01

0xd7e1,	// (0x00078fdd) grid_afind_control_pane_ParamLimits

0xd7e1,	// (0x00078fdd) grid_afind_control_pane

0x6062,	// (0x0007185e) grid_afind_pane_ParamLimits

0x6062,	// (0x0007185e) grid_afind_pane

0x6084,	// (0x00071880) cell_afind_pane_ParamLimits

0x6084,	// (0x00071880) cell_afind_pane

0xcc6f,	// (0x0007846b) afind_page_pane_g1

0x60e5,	// (0x000718e1) afind_page_pane_g2

0x60ee,	// (0x000718ea) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007b166) afind_page_pane_g

0x60f7,	// (0x000718f3) afind_page_pane_t1

0xd7f5,	// (0x00078ff1) cell_afind_grid_control_pane_ParamLimits

0xd7f5,	// (0x00078ff1) cell_afind_grid_control_pane

0xd5cd,	// (0x00078dc9) bg_button_pane_cp69_ParamLimits

0xd5cd,	// (0x00078dc9) bg_button_pane_cp69

0x6117,	// (0x00071913) cell_afind_pane_g1_ParamLimits

0x6117,	// (0x00071913) cell_afind_pane_g1

0x6124,	// (0x00071920) cell_afind_pane_t1_ParamLimits

0x6124,	// (0x00071920) cell_afind_pane_t1

0xaa41,	// (0x0007623d) bg_button_pane_cp72

0xd804,	// (0x00079000) cell_afind_grid_control_pane_g1

0x319a,	// (0x0006e996) aid_image_placing_area_ParamLimits

0x319a,	// (0x0006e996) aid_image_placing_area

0xd289,	// (0x00078a85) field_vitu_entry_pane_g1_ParamLimits

0xd289,	// (0x00078a85) field_vitu_entry_pane_g1

0xd295,	// (0x00078a91) field_vitu_entry_pane_g2_ParamLimits

0xd295,	// (0x00078a91) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007b017) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007b017) field_vitu_entry_pane_g

0x52d2,	// (0x00070ace) cell_vitu_itu_pane_g1_ParamLimits

0x5314,	// (0x00070b10) cell_vitu_itu_pane_t3_ParamLimits

0x5314,	// (0x00070b10) cell_vitu_itu_pane_t3

0xd573,	// (0x00078d6f) mp4_progress_pane_t1_ParamLimits

0xd58c,	// (0x00078d88) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007b0ac) mp4_progress_pane_t_ParamLimits

0xd5a5,	// (0x00078da1) mup_progress_pane_cp04_ParamLimits

0x6001,	// (0x000717fd) main_myfav_hc_pane_t5_ParamLimits

0x6001,	// (0x000717fd) main_myfav_hc_pane_t5

0x94e0,	// (0x00074cdc) aid_zoom_text_primary

0x0385,	// (0x0006bb81) popup_adpt_find_window_ParamLimits

0x9532,	// (0x00074d2e) main_cam_set_pane

0x5a33,	// (0x0007122f) cam4_zoom_pane_ParamLimits

0x5a33,	// (0x0007122f) cam4_zoom_pane

0x6136,	// (0x00071932) main_cam_set_pane_g1_ParamLimits

0x6136,	// (0x00071932) main_cam_set_pane_g1

0x6144,	// (0x00071940) main_cam_set_pane_g2_ParamLimits

0x6144,	// (0x00071940) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007b16d) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007b16d) main_cam_set_pane_g

0x6165,	// (0x00071961) main_cam_set_pane_t1_ParamLimits

0x6165,	// (0x00071961) main_cam_set_pane_t1

0x6180,	// (0x0007197c) main_cset_listscroll_pane_ParamLimits

0x6180,	// (0x0007197c) main_cset_listscroll_pane

0x61a0,	// (0x0007199c) main_cset_slider_pane_ParamLimits

0x61a0,	// (0x0007199c) main_cset_slider_pane

0xd815,	// (0x00079011) main_cset_list_pane_ParamLimits

0xd815,	// (0x00079011) main_cset_list_pane

0xd825,	// (0x00079021) scroll_pane_cp028

0x61c6,	// (0x000719c2) aid_area_touch_slider

0x61e2,	// (0x000719de) cset_slider_pane

0x620c,	// (0x00071a08) main_cset_slider_pane_g1

0x6221,	// (0x00071a1d) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007b172) main_cset_slider_pane_g

0xd85e,	// (0x0007905a) main_cset_slider_pane_t1

0x62dd,	// (0x00071ad9) main_cset_slider_pane_t2

0x62f7,	// (0x00071af3) main_cset_slider_pane_t3

0x6311,	// (0x00071b0d) main_cset_slider_pane_t4

0x632b,	// (0x00071b27) main_cset_slider_pane_t5

0x6345,	// (0x00071b41) main_cset_slider_pane_t6

0x635a,	// (0x00071b56) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007b197) main_cset_slider_pane_t

0x645e,	// (0x00071c5a) cset_list_set_pane_ParamLimits

0x645e,	// (0x00071c5a) cset_list_set_pane

0x6470,	// (0x00071c6c) aid_position_infowindow_above

0x6478,	// (0x00071c74) aid_position_infowindow_below

0xa629,	// (0x00075e25) cset_list_set_pane_g1_ParamLimits

0xa629,	// (0x00075e25) cset_list_set_pane_g1

0xa635,	// (0x00075e31) cset_list_set_pane_g3_ParamLimits

0xa635,	// (0x00075e31) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007b1b6) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007b1b6) cset_list_set_pane_g

0xa644,	// (0x00075e40) cset_list_set_pane_t1_ParamLimits

0xa644,	// (0x00075e40) cset_list_set_pane_t1

0xa5b6,	// (0x00075db2) list_highlight_pane_cp021_ParamLimits

0xa5b6,	// (0x00075db2) list_highlight_pane_cp021

0xb599,	// (0x00076d95) cset_slider_pane_g1

0xb5ab,	// (0x00076da7) cset_slider_pane_g2

0xb5a2,	// (0x00076d9e) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007b1bb) cset_slider_pane_g

0x9eba,	// (0x000756b6) aid_area_touch_cam4_zoom

0x9ec2,	// (0x000756be) cam4_zoom_cont_pane

0x9eca,	// (0x000756c6) cam4_zoom_pane_g1

0x9ed2,	// (0x000756ce) cam4_zoom_pane_g2

0x6480,	// (0x00071c7c) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007b1c2) cam4_zoom_pane_g

0x9eda,	// (0x000756d6) cam4_zoom_cont_pane_g1

0x9ee3,	// (0x000756df) cam4_zoom_cont_pane_g2

0x9eec,	// (0x000756e8) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007b1c9) cam4_zoom_cont_pane_g

0x58f3,	// (0x000710ef) call4_image_pane_ParamLimits

0x58f3,	// (0x000710ef) call4_image_pane

0xd5d9,	// (0x00078dd5) call4_windows_conf_pane_ParamLimits

0xd61a,	// (0x00078e16) popup_call4_audio_in_window_ParamLimits

0xd61a,	// (0x00078e16) popup_call4_audio_in_window

0x94ba,	// (0x00074cb6) bg_popup_call2_act_pane_cp02

0xd690,	// (0x00078e8c) call4_list_conf_pane

0xcc6f,	// (0x0007846b) call4_image_pane_g1

0xcc6f,	// (0x0007846b) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007aed8) call4_image_pane_g

0xd8fe,	// (0x000790fa) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8fe,	// (0x000790fa) list_single_graphic_popup_conf4_pane

0x94ba,	// (0x00074cb6) list_highlight_pane_cp022

0xd911,	// (0x0007910d) list_single_graphic_popup_conf4_pane_g1

0xb162,	// (0x0007695e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007b1d0) list_single_graphic_popup_conf4_pane_g

0xd919,	// (0x00079115) list_single_graphic_popup_conf4_pane_t1

0x157e,	// (0x0006cd7a) popup_vtel_slider_window_ParamLimits

0x157e,	// (0x0006cd7a) popup_vtel_slider_window

0xd5bb,	// (0x00078db7) dialer2_ne_pane_t2_ParamLimits

0xd5bb,	// (0x00078db7) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007b0b1) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007b0b1) dialer2_ne_pane_t

0xca54,	// (0x00078250) bg_popup_sub_pane_cp010_ParamLimits

0xca54,	// (0x00078250) bg_popup_sub_pane_cp010

0x6488,	// (0x00071c84) popup_vtel_slider_window_g1_ParamLimits

0x6488,	// (0x00071c84) popup_vtel_slider_window_g1

0x649b,	// (0x00071c97) popup_vtel_slider_window_g2_ParamLimits

0x649b,	// (0x00071c97) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007b1d5) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007b1d5) popup_vtel_slider_window_g

0x64f1,	// (0x00071ced) vtel_slider_pane_ParamLimits

0x64f1,	// (0x00071ced) vtel_slider_pane

0x6513,	// (0x00071d0f) vtel_slider_pane_g1_ParamLimits

0x6513,	// (0x00071d0f) vtel_slider_pane_g1

0x6527,	// (0x00071d23) vtel_slider_pane_g2_ParamLimits

0x6527,	// (0x00071d23) vtel_slider_pane_g2

0x653f,	// (0x00071d3b) vtel_slider_pane_g3_ParamLimits

0x653f,	// (0x00071d3b) vtel_slider_pane_g3

0x6513,	// (0x00071d0f) vtel_slider_pane_g4_ParamLimits

0x6513,	// (0x00071d0f) vtel_slider_pane_g4

0x6555,	// (0x00071d51) vtel_slider_pane_g5_ParamLimits

0x6555,	// (0x00071d51) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007b1de) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007b1de) vtel_slider_pane_g

0x9532,	// (0x00074d2e) main_gallery2_pane

0x5c33,	// (0x0007142f) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c33,	// (0x0007142f) aid_size_row_itut2_dropdow_list

0x5cbf,	// (0x000714bb) grid_vitu2_function_top_pane_ParamLimits

0x5cbf,	// (0x000714bb) grid_vitu2_function_top_pane

0x5d24,	// (0x00071520) popup_vitu2_dropdown_list_window_ParamLimits

0x5d24,	// (0x00071520) popup_vitu2_dropdown_list_window

0x5d4d,	// (0x00071549) popup_vitu2_match_list_window

0x6579,	// (0x00071d75) cell_vitu2_function_top_pane_ParamLimits

0x6579,	// (0x00071d75) cell_vitu2_function_top_pane

0x6597,	// (0x00071d93) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6597,	// (0x00071d93) cell_vitu2_function_top_pane_cp01

0x65b5,	// (0x00071db1) cell_vitu2_function_top_wide_pane_ParamLimits

0x65b5,	// (0x00071db1) cell_vitu2_function_top_wide_pane

0x9532,	// (0x00074d2e) bg_button_pane_cp012

0x65d3,	// (0x00071dcf) cell_vitu2_function_top_pane_g1

0x9ef5,	// (0x000756f1) bg_button_pane_cp013_ParamLimits

0x9ef5,	// (0x000756f1) bg_button_pane_cp013

0x65e7,	// (0x00071de3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65e7,	// (0x00071de3) cell_vitu2_function_top_wide_pane_g1

0x9532,	// (0x00074d2e) bg_popup_sub_pane_cp20

0x65ff,	// (0x00071dfb) list_vitu2_match_list_pane

0xd70b,	// (0x00078f07) bg_popup_sub_pane_cp20_g1

0xd713,	// (0x00078f0f) bg_popup_sub_pane_cp20_g2

0xac48,	// (0x00076444) bg_popup_sub_pane_cp20_g3

0xd71b,	// (0x00078f17) bg_popup_sub_pane_cp20_g4

0xac28,	// (0x00076424) bg_popup_sub_pane_cp20_g5

0xd92f,	// (0x0007912b) bg_popup_sub_pane_cp20_g6

0xd72b,	// (0x00078f27) bg_popup_sub_pane_cp20_g7

0xd733,	// (0x00078f2f) bg_popup_sub_pane_cp20_g8

0xd73b,	// (0x00078f37) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007b1e9) bg_popup_sub_pane_cp20_g

0x9f11,	// (0x0007570d) list_vitu2_match_list_item_pane_ParamLimits

0x9f11,	// (0x0007570d) list_vitu2_match_list_item_pane

0x9f23,	// (0x0007571f) list_vitu2_match_list_item_pane_t1

0x9540,	// (0x00074d3c) bg_popup_sub_pane_cp21

0x9f31,	// (0x0007572d) grid_vitu2_dropdown_list_pane

0x6667,	// (0x00071e63) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6667,	// (0x00071e63) cell_vitu2_dropdown_list_char_pane

0x6688,	// (0x00071e84) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6688,	// (0x00071e84) cell_vitu2_dropdown_list_ctrl_pane

0xd937,	// (0x00079133) cell_vitu2_dropdown_list_char_pane_g1

0xd940,	// (0x0007913c) cell_vitu2_dropdown_list_char_pane_g2

0xd949,	// (0x00079145) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007b206) cell_vitu2_dropdown_list_char_pane_g

0x66b4,	// (0x00071eb0) cell_vitu2_dropdown_list_char_pane_t1

0x66c2,	// (0x00071ebe) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66c2,	// (0x00071ebe) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66cf,	// (0x00071ecb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66cf,	// (0x00071ecb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66dc,	// (0x00071ed8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66dc,	// (0x00071ed8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66e9,	// (0x00071ee5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66e9,	// (0x00071ee5) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9ddb,	// (0x000755d7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9ddb,	// (0x000755d7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007b20d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007b20d) cell_vitu2_dropdown_list_ctrl_pane_g

0x6705,	// (0x00071f01) aid_size_cell_gallery2_ParamLimits

0x6705,	// (0x00071f01) aid_size_cell_gallery2

0x6723,	// (0x00071f1f) grid_gallery2_pane_ParamLimits

0x6723,	// (0x00071f1f) grid_gallery2_pane

0x673d,	// (0x00071f39) scroll_pane_cp029_ParamLimits

0x673d,	// (0x00071f39) scroll_pane_cp029

0x6749,	// (0x00071f45) cell_gallery2_pane_ParamLimits

0x6749,	// (0x00071f45) cell_gallery2_pane

0xd952,	// (0x0007914e) cell_gallery2_pane_g2

0x67a4,	// (0x00071fa0) cell_gallery2_pane_g3

0xd95a,	// (0x00079156) cell_gallery2_pane_g4

0xd962,	// (0x0007915e) cell_gallery2_pane_g5

0xb455,	// (0x00076c51) grid_highlight_pane_cp10

0x5d4d,	// (0x00071549) popup_vitu2_match_list_window_ParamLimits

0x5d64,	// (0x00071560) popup_vitu2_query_window_ParamLimits

0x5d64,	// (0x00071560) popup_vitu2_query_window

0x9540,	// (0x00074d3c) bg_vitu2_candi_button_pane

0xd937,	// (0x00079133) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd940,	// (0x0007913c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd949,	// (0x00079145) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67ac,	// (0x00071fa8) bg_button_pane_cp015

0x67be,	// (0x00071fba) bg_button_pane_cp016

0x67d1,	// (0x00071fcd) bg_button_pane_cp017

0xc85b,	// (0x00078057) bg_popup_sub_pane_cp22

0xd96a,	// (0x00079166) popup_vitu2_query_window_g1

0x6816,	// (0x00072012) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007b218) popup_vitu2_query_window_g

0x6835,	// (0x00072031) popup_vitu2_query_window_t1_ParamLimits

0x6835,	// (0x00072031) popup_vitu2_query_window_t1

0x686a,	// (0x00072066) popup_vitu2_query_window_t2_ParamLimits

0x686a,	// (0x00072066) popup_vitu2_query_window_t2

0x687c,	// (0x00072078) popup_vitu2_query_window_t3_ParamLimits

0x687c,	// (0x00072078) popup_vitu2_query_window_t3

0x68a4,	// (0x000720a0) popup_vitu2_query_window_t4_ParamLimits

0x68a4,	// (0x000720a0) popup_vitu2_query_window_t4

0x68c5,	// (0x000720c1) popup_vitu2_query_window_t5_ParamLimits

0x68c5,	// (0x000720c1) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007b21f) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007b21f) popup_vitu2_query_window_t

0xd80d,	// (0x00079009) main_cset_text_pane

0x61c6,	// (0x000719c2) aid_area_touch_slider_ParamLimits

0x61e2,	// (0x000719de) cset_slider_pane_ParamLimits

0x620c,	// (0x00071a08) main_cset_slider_pane_g1_ParamLimits

0x6221,	// (0x00071a1d) main_cset_slider_pane_g2_ParamLimits

0xd82e,	// (0x0007902a) main_cset_slider_pane_g3_ParamLimits

0xd82e,	// (0x0007902a) main_cset_slider_pane_g3

0x6236,	// (0x00071a32) main_cset_slider_pane_g4_ParamLimits

0x6236,	// (0x00071a32) main_cset_slider_pane_g4

0x6245,	// (0x00071a41) main_cset_slider_pane_g5_ParamLimits

0x6245,	// (0x00071a41) main_cset_slider_pane_g5

0x6251,	// (0x00071a4d) main_cset_slider_pane_g6_ParamLimits

0x6251,	// (0x00071a4d) main_cset_slider_pane_g6

0xf976,	// (0x0007b172) main_cset_slider_pane_g_ParamLimits

0xd85e,	// (0x0007905a) main_cset_slider_pane_t1_ParamLimits

0x62dd,	// (0x00071ad9) main_cset_slider_pane_t2_ParamLimits

0x62f7,	// (0x00071af3) main_cset_slider_pane_t3_ParamLimits

0x6311,	// (0x00071b0d) main_cset_slider_pane_t4_ParamLimits

0x632b,	// (0x00071b27) main_cset_slider_pane_t5_ParamLimits

0x6345,	// (0x00071b41) main_cset_slider_pane_t6_ParamLimits

0x635a,	// (0x00071b56) main_cset_slider_pane_t7_ParamLimits

0x6384,	// (0x00071b80) main_cset_slider_pane_t8_ParamLimits

0x6384,	// (0x00071b80) main_cset_slider_pane_t8

0x63ac,	// (0x00071ba8) main_cset_slider_pane_t9_ParamLimits

0x63ac,	// (0x00071ba8) main_cset_slider_pane_t9

0x63d4,	// (0x00071bd0) main_cset_slider_pane_t10_ParamLimits

0x63d4,	// (0x00071bd0) main_cset_slider_pane_t10

0x63fc,	// (0x00071bf8) main_cset_slider_pane_t11_ParamLimits

0x63fc,	// (0x00071bf8) main_cset_slider_pane_t11

0x6424,	// (0x00071c20) main_cset_slider_pane_t12_ParamLimits

0x6424,	// (0x00071c20) main_cset_slider_pane_t12

0x6441,	// (0x00071c3d) main_cset_slider_pane_t13_ParamLimits

0x6441,	// (0x00071c3d) main_cset_slider_pane_t13

0xf99b,	// (0x0007b197) main_cset_slider_pane_t_ParamLimits

0x94ba,	// (0x00074cb6) bg_popup_sub_pane_cp011

0xd976,	// (0x00079172) main_cset_text_pane_g1

0xd97e,	// (0x0007917a) main_cset_text_pane_t1

0xd98c,	// (0x00079188) main_cset_text_pane_t2

0xd99a,	// (0x00079196) main_cset_text_pane_t3

0xd9a8,	// (0x000791a4) main_cset_text_pane_t4

0xd9b6,	// (0x000791b2) main_cset_text_pane_t5

0xd9c4,	// (0x000791c0) main_cset_text_pane_t6

0xd9d2,	// (0x000791ce) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007b22e) main_cset_text_pane_t

0x9540,	// (0x00074d3c) main_cam4_burst_pane

0x9540,	// (0x00074d3c) main_cam5_pane

0x6105,	// (0x00071901) bg_button_pane_cp019

0x610e,	// (0x0007190a) bg_button_pane_cp020

0xd83a,	// (0x00079036) main_cset_slider_pane_g7_ParamLimits

0xd83a,	// (0x00079036) main_cset_slider_pane_g7

0xd846,	// (0x00079042) main_cset_slider_pane_g8_ParamLimits

0xd846,	// (0x00079042) main_cset_slider_pane_g8

0x6265,	// (0x00071a61) main_cset_slider_pane_g9_ParamLimits

0x6265,	// (0x00071a61) main_cset_slider_pane_g9

0x6271,	// (0x00071a6d) main_cset_slider_pane_g10_ParamLimits

0x6271,	// (0x00071a6d) main_cset_slider_pane_g10

0x627d,	// (0x00071a79) main_cset_slider_pane_g11_ParamLimits

0x627d,	// (0x00071a79) main_cset_slider_pane_g11

0x6289,	// (0x00071a85) main_cset_slider_pane_g12_ParamLimits

0x6289,	// (0x00071a85) main_cset_slider_pane_g12

0x6295,	// (0x00071a91) main_cset_slider_pane_g13_ParamLimits

0x6295,	// (0x00071a91) main_cset_slider_pane_g13

0x62a1,	// (0x00071a9d) main_cset_slider_pane_g14_ParamLimits

0x62a1,	// (0x00071a9d) main_cset_slider_pane_g14

0x62ad,	// (0x00071aa9) main_cset_slider_pane_g15_ParamLimits

0x62ad,	// (0x00071aa9) main_cset_slider_pane_g15

0xd88c,	// (0x00079088) main_cset_slider_pane_t14_ParamLimits

0xd88c,	// (0x00079088) main_cset_slider_pane_t14

0xd8c5,	// (0x000790c1) main_cset_slider_pane_t15_ParamLimits

0xd8c5,	// (0x000790c1) main_cset_slider_pane_t15

0x693c,	// (0x00072138) aid_cam4_burst_size_cell_ParamLimits

0x693c,	// (0x00072138) aid_cam4_burst_size_cell

0x695c,	// (0x00072158) grid_cam4_burst_pane_ParamLimits

0x695c,	// (0x00072158) grid_cam4_burst_pane

0x6994,	// (0x00072190) linegrid_cam4_burst_pane_ParamLimits

0x6994,	// (0x00072190) linegrid_cam4_burst_pane

0xd9e0,	// (0x000791dc) scroll_pane_cp30_ParamLimits

0xd9e0,	// (0x000791dc) scroll_pane_cp30

0x69b8,	// (0x000721b4) cell_cam4_burst_pane_ParamLimits

0x69b8,	// (0x000721b4) cell_cam4_burst_pane

0xd9ec,	// (0x000791e8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9ec,	// (0x000791e8) linegrid_cam4_burst_pane_g1

0x6a05,	// (0x00072201) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a05,	// (0x00072201) linegrid_cam4_burst_pane_g2

0xd9f9,	// (0x000791f5) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9f9,	// (0x000791f5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007b23d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007b23d) linegrid_cam4_burst_pane_g

0x6a16,	// (0x00072212) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a16,	// (0x00072212) linegrid_cam4_burst_pane_g3_copy1

0xda06,	// (0x00079202) linegrid_cam4_burst_pane_g4_ParamLimits

0xda06,	// (0x00079202) linegrid_cam4_burst_pane_g4

0x6a30,	// (0x0007222c) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a30,	// (0x0007222c) linegrid_cam4_burst_pane_g5

0x6a41,	// (0x0007223d) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a41,	// (0x0007223d) linegrid_cam4_burst_pane_g6

0xda13,	// (0x0007920f) linegrid_cam4_burst_pane_g7_ParamLimits

0xda13,	// (0x0007920f) linegrid_cam4_burst_pane_g7

0x6a58,	// (0x00072254) cell_cam4_burst_pane_g1

0xda2c,	// (0x00079228) main_cam5_pane_t1_ParamLimits

0xda2c,	// (0x00079228) main_cam5_pane_t1

0xda3e,	// (0x0007923a) main_cam5_pane_t2_ParamLimits

0xda3e,	// (0x0007923a) main_cam5_pane_t2

0xda50,	// (0x0007924c) main_cam5_pane_t3_ParamLimits

0xda50,	// (0x0007924c) main_cam5_pane_t3

0xda62,	// (0x0007925e) main_cam5_pane_t4_ParamLimits

0xda62,	// (0x0007925e) main_cam5_pane_t4

0xda7a,	// (0x00079276) main_cam5_pane_t5_ParamLimits

0xda7a,	// (0x00079276) main_cam5_pane_t5

0xda8e,	// (0x0007928a) main_cam5_pane_t6_ParamLimits

0xda8e,	// (0x0007928a) main_cam5_pane_t6

0xdaa2,	// (0x0007929e) main_cam5_pane_t7_ParamLimits

0xdaa2,	// (0x0007929e) main_cam5_pane_t7

0xdab4,	// (0x000792b0) main_cam5_pane_t8_ParamLimits

0xdab4,	// (0x000792b0) main_cam5_pane_t8

0xdad0,	// (0x000792cc) main_cam5_pane_t9_ParamLimits

0xdad0,	// (0x000792cc) main_cam5_pane_t9

0xdae2,	// (0x000792de) main_cam5_pane_t10_ParamLimits

0xdae2,	// (0x000792de) main_cam5_pane_t10

0xdaf4,	// (0x000792f0) main_cam5_pane_t11_ParamLimits

0xdaf4,	// (0x000792f0) main_cam5_pane_t11

0xdb06,	// (0x00079302) main_cam5_pane_t12_ParamLimits

0xdb06,	// (0x00079302) main_cam5_pane_t12

0xdb1b,	// (0x00079317) main_cam5_pane_t13_ParamLimits

0xdb1b,	// (0x00079317) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007b249) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007b249) main_cam5_pane_t

0x0407,	// (0x0006bc03) popup_scut_keymap_window_ParamLimits

0x0407,	// (0x0006bc03) popup_scut_keymap_window

0x6a6b,	// (0x00072267) aid_size_cell_brow_shortcut

0xb455,	// (0x00076c51) bg_popup_window_pane_cp010

0x6a77,	// (0x00072273) grid_scut_pane

0x6a83,	// (0x0007227f) cell_scut_pane_ParamLimits

0x6a83,	// (0x0007227f) cell_scut_pane

0x6a9a,	// (0x00072296) cell_scut_pane_g1

0xdb38,	// (0x00079334) cell_scut_pane_t1

0xdb47,	// (0x00079343) cell_scut_pane_t2

0x6aa3,	// (0x0007229f) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007b264) cell_scut_pane_t

0x47c8,	// (0x0006ffc4) main_mup3_pane_g8_ParamLimits

0x47c8,	// (0x0006ffc4) main_mup3_pane_g8

0x5c4b,	// (0x00071447) area_vitu2_query_pane_ParamLimits

0x5c4b,	// (0x00071447) area_vitu2_query_pane

0x67e4,	// (0x00071fe0) input_focus_pane_cp08

0xdb56,	// (0x00079352) area_vitu2_query_pane_g1

0x6ab1,	// (0x000722ad) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007b26b) area_vitu2_query_pane_g

0x6ac2,	// (0x000722be) area_vitu2_query_pane_t1_ParamLimits

0x6ac2,	// (0x000722be) area_vitu2_query_pane_t1

0x6ad6,	// (0x000722d2) area_vitu2_query_pane_t2_ParamLimits

0x6ad6,	// (0x000722d2) area_vitu2_query_pane_t2

0x6aea,	// (0x000722e6) area_vitu2_query_pane_t3_ParamLimits

0x6aea,	// (0x000722e6) area_vitu2_query_pane_t3

0xa659,	// (0x00075e55) area_vitu2_query_pane_t4_ParamLimits

0xa659,	// (0x00075e55) area_vitu2_query_pane_t4

0xa681,	// (0x00075e7d) area_vitu2_query_pane_t5_ParamLimits

0xa681,	// (0x00075e7d) area_vitu2_query_pane_t5

0xa6a9,	// (0x00075ea5) area_vitu2_query_pane_t6_ParamLimits

0xa6a9,	// (0x00075ea5) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007b270) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007b270) area_vitu2_query_pane_t

0x6b12,	// (0x0007230e) bg_button_pane_cp018

0x6b20,	// (0x0007231c) bg_button_pane_cp021

0x6b2c,	// (0x00072328) bg_button_pane_cp022

0x6b3b,	// (0x00072337) input_focus_pane_cp09

0xb29e,	// (0x00076a9a) aid_size_touch_mv_arrow_left

0xb2c7,	// (0x00076ac3) aid_size_touch_mv_arrow_right

0x62c5,	// (0x00071ac1) main_cset_slider_pane_g16_ParamLimits

0x62c5,	// (0x00071ac1) main_cset_slider_pane_g16

0x62d1,	// (0x00071acd) main_cset_slider_pane_g17_ParamLimits

0x62d1,	// (0x00071acd) main_cset_slider_pane_g17

0x6a58,	// (0x00072254) cell_cam4_burst_pane_g1_ParamLimits

0x94ba,	// (0x00074cb6) compa_mode_pane

0x64ab,	// (0x00071ca7) popup_vtel_slider_window_g3_ParamLimits

0x64ab,	// (0x00071ca7) popup_vtel_slider_window_g3

0x64c2,	// (0x00071cbe) popup_vtel_slider_window_g4_ParamLimits

0x64c2,	// (0x00071cbe) popup_vtel_slider_window_g4

0x64d9,	// (0x00071cd5) popup_vtel_slider_window_t1_ParamLimits

0x64d9,	// (0x00071cd5) popup_vtel_slider_window_t1

0x9540,	// (0x00074d3c) main_cl_pane

0x9a4b,	// (0x00075247) popup_imed_adjust2_window_ParamLimits

0xc85b,	// (0x00078057) bg_tb_trans_pane_cp05_ParamLimits

0xd1be,	// (0x000789ba) popup_imed_adjust2_window_g1_ParamLimits

0xd1cd,	// (0x000789c9) popup_imed_adjust2_window_g2_ParamLimits

0xd1cd,	// (0x000789c9) popup_imed_adjust2_window_g2

0xd1d9,	// (0x000789d5) popup_imed_adjust2_window_g3_ParamLimits

0xd1d9,	// (0x000789d5) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007afdb) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007afdb) popup_imed_adjust2_window_g

0xd1e5,	// (0x000789e1) popup_imed_adjust2_window_t1_ParamLimits

0xd1fd,	// (0x000789f9) slider_imed_adjust_pane_ParamLimits

0xd211,	// (0x00078a0d) slider_imed_adjust_pane_g1_ParamLimits

0xd221,	// (0x00078a1d) slider_imed_adjust_pane_g2_ParamLimits

0xd231,	// (0x00078a2d) slider_imed_adjust_pane_g3_ParamLimits

0xd242,	// (0x00078a3e) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007afe2) slider_imed_adjust_pane_g_ParamLimits

0x59d4,	// (0x000711d0) aid_touch_area_cam4_ParamLimits

0x59d4,	// (0x000711d0) aid_touch_area_cam4

0x9dbf,	// (0x000755bb) battery_pane_cp01

0x5aa3,	// (0x0007129f) main_camera4_pane_g6_ParamLimits

0x5aa3,	// (0x0007129f) main_camera4_pane_g6

0x5acd,	// (0x000712c9) main_camera4_pane_t2_ParamLimits

0x5acd,	// (0x000712c9) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007b0e5) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007b0e5) main_camera4_pane_t

0x5b02,	// (0x000712fe) aid_touch_area_vid4_ParamLimits

0x5b02,	// (0x000712fe) aid_touch_area_vid4

0x5b56,	// (0x00071352) main_video4_pane_g5_ParamLimits

0x5b56,	// (0x00071352) main_video4_pane_g5

0x5b7b,	// (0x00071377) vid4_progress_pane_ParamLimits

0x5b7b,	// (0x00071377) vid4_progress_pane

0xd852,	// (0x0007904e) main_cset_slider_pane_g18_ParamLimits

0xd852,	// (0x0007904e) main_cset_slider_pane_g18

0xda20,	// (0x0007921c) cell_cam4_burst_pane_g2_ParamLimits

0xda20,	// (0x0007921c) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007b244) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007b244) cell_cam4_burst_pane_g

0xa38c,	// (0x00075b88) bg_cl_pane_ParamLimits

0xa38c,	// (0x00075b88) bg_cl_pane

0x6b4a,	// (0x00072346) cl_header_pane_ParamLimits

0x6b4a,	// (0x00072346) cl_header_pane

0x6b5e,	// (0x0007235a) cl_listscroll_pane_ParamLimits

0x6b5e,	// (0x0007235a) cl_listscroll_pane

0xdb62,	// (0x0007935e) bg_cl_pane_g1

0xdb6a,	// (0x00079366) bg_cl_pane_g2

0xdb72,	// (0x0007936e) bg_cl_pane_g3

0xdb7a,	// (0x00079376) bg_cl_pane_g4

0xdb82,	// (0x0007937e) bg_cl_pane_g5

0xdb8a,	// (0x00079386) bg_cl_pane_g6

0xdb92,	// (0x0007938e) bg_cl_pane_g7

0xdb9a,	// (0x00079396) bg_cl_pane_g8

0xdba2,	// (0x0007939e) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007b27f) bg_cl_pane_g

0x6b6e,	// (0x0007236a) aid_height_cl_leading_ParamLimits

0x6b6e,	// (0x0007236a) aid_height_cl_leading

0x6b7a,	// (0x00072376) aid_height_cl_text_ParamLimits

0x6b7a,	// (0x00072376) aid_height_cl_text

0xa5b6,	// (0x00075db2) bg_cl_header_pane_ParamLimits

0xa5b6,	// (0x00075db2) bg_cl_header_pane

0x6b99,	// (0x00072395) cl_header_pane_g1_ParamLimits

0x6b99,	// (0x00072395) cl_header_pane_g1

0x6baf,	// (0x000723ab) cl_header_pane_t1_ParamLimits

0x6baf,	// (0x000723ab) cl_header_pane_t1

0xdbaa,	// (0x000793a6) cl_list_pane

0xd825,	// (0x00079021) hc_scroll_pane_cp01

0xac28,	// (0x00076424) bg_cl_header_pane_g1

0xd70b,	// (0x00078f07) bg_cl_header_pane_g2

0xac48,	// (0x00076444) bg_cl_header_pane_g3

0xd71b,	// (0x00078f17) bg_cl_header_pane_g4

0xd713,	// (0x00078f0f) bg_cl_header_pane_g5

0xd92f,	// (0x0007912b) bg_cl_header_pane_g6

0xd733,	// (0x00078f2f) bg_cl_header_pane_g7

0xd73b,	// (0x00078f37) bg_cl_header_pane_g8

0xd72b,	// (0x00078f27) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007b292) bg_cl_header_pane_g

0x6bc8,	// (0x000723c4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bc8,	// (0x000723c4) hc_cl_list_double_graphic_heading_pane

0x6bd9,	// (0x000723d5) hc_cl_list_single_graphic_pane_ParamLimits

0x6bd9,	// (0x000723d5) hc_cl_list_single_graphic_pane

0x6bef,	// (0x000723eb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6bef,	// (0x000723eb) hc_cl_list_single_graphic_pane_g1

0x6bfb,	// (0x000723f7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6bfb,	// (0x000723f7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007b2a5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007b2a5) hc_cl_list_single_graphic_pane_g

0x6c0f,	// (0x0007240b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c0f,	// (0x0007240b) hc_cl_list_single_graphic_pane_t1

0x6bef,	// (0x000723eb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6bef,	// (0x000723eb) hc_cl_list_double_graphic_heading_pane_g1

0x6c24,	// (0x00072420) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c24,	// (0x00072420) hc_cl_list_double_graphic_heading_pane_g2

0x6c38,	// (0x00072434) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c38,	// (0x00072434) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007b2aa) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007b2aa) hc_cl_list_double_graphic_heading_pane_g

0x6c4c,	// (0x00072448) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c4c,	// (0x00072448) hc_cl_list_double_graphic_heading_pane_t1

0x6c61,	// (0x0007245d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c61,	// (0x0007245d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007b2b1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007b2b1) hc_cl_list_double_graphic_heading_pane_t

0x9f41,	// (0x0007573d) vid4_progress_pane_g1

0x9f51,	// (0x0007574d) vid4_progress_pane_g2

0x6c76,	// (0x00072472) vid4_progress_pane_g3

0x9f61,	// (0x0007575d) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007b2b6) vid4_progress_pane_g

0x6c88,	// (0x00072484) vid4_progress_pane_t1

0x9f79,	// (0x00075775) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007b2c1) vid4_progress_pane_t

0x6ca0,	// (0x0007249c) wait_bar_pane_cp07

0xca62,	// (0x0007825e) blid_firmament_pane_ParamLimits

0xcaa5,	// (0x000782a1) popup_blid_sat_info2_window_g1

0xcac9,	// (0x000782c5) popup_blid_sat_info2_window_t3

0xcad7,	// (0x000782d3) popup_blid_sat_info2_window_t4

0xcae5,	// (0x000782e1) popup_blid_sat_info2_window_t5

0xcaf3,	// (0x000782ef) popup_blid_sat_info2_window_t6

0xcb03,	// (0x000782ff) popup_blid_sat_info2_window_t7

0xcb11,	// (0x0007830d) popup_blid_sat_info2_window_t8

0xcb1f,	// (0x0007831b) popup_blid_sat_info2_window_t9

0xcb2d,	// (0x00078329) popup_blid_sat_info2_window_t10

0xcbef,	// (0x000783eb) aid_firma_cardinal_ParamLimits

0xcc03,	// (0x000783ff) blid_firmament_pane_t1_ParamLimits

0xcc1a,	// (0x00078416) blid_firmament_pane_t2_ParamLimits

0xcc31,	// (0x0007842d) blid_firmament_pane_t3_ParamLimits

0xcc48,	// (0x00078444) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0007aecf) blid_firmament_pane_t_ParamLimits

0xcc5f,	// (0x0007845b) blid_sat_info_pane_ParamLimits

0x9532,	// (0x00074d2e) main_cam_set_pane_ParamLimits

0x508c,	// (0x00070888) aid_size_cell_colour_35_ParamLimits

0x50ac,	// (0x000708a8) aid_size_cell_colour_112_ParamLimits

0x50cc,	// (0x000708c8) aid_size_cell_effect_ParamLimits

0xc85b,	// (0x00078057) bg_tb_trans_pane_cp02_ParamLimits

0xae90,	// (0x0007668c) heading_imed_pane_ParamLimits

0x50ec,	// (0x000708e8) listscroll_imed_pane_ParamLimits

0xbe81,	// (0x0007767d) popup_call2_audio_first_window_g5_ParamLimits

0xbe81,	// (0x0007767d) popup_call2_audio_first_window_g5

0x567f,	// (0x00070e7b) aid_size_touch_image3_arrow_left_ParamLimits

0x567f,	// (0x00070e7b) aid_size_touch_image3_arrow_left

0x56ab,	// (0x00070ea7) aid_size_touch_image3_arrow_right_ParamLimits

0x56ab,	// (0x00070ea7) aid_size_touch_image3_arrow_right

0x9f8e,	// (0x0007578a) vid4_progress_pane_t3

0x53ff,	// (0x00070bfb) main_hwr_training_symbol_option_pane_ParamLimits

0x53ff,	// (0x00070bfb) main_hwr_training_symbol_option_pane

0xd4b3,	// (0x00078caf) popup_hwr_training_preview_window_ParamLimits

0xd4b3,	// (0x00078caf) popup_hwr_training_preview_window

0x541f,	// (0x00070c1b) hwr_training_navi_pane_g5_ParamLimits

0x541f,	// (0x00070c1b) hwr_training_navi_pane_g5

0xd6f9,	// (0x00078ef5) popup_char_count_window

0x9532,	// (0x00074d2e) bg_popup_sub_pane_cp20_ParamLimits

0x65ff,	// (0x00071dfb) list_vitu2_match_list_pane_ParamLimits

0x660e,	// (0x00071e0a) vitu2_page_scroll_pane_ParamLimits

0x660e,	// (0x00071e0a) vitu2_page_scroll_pane

0xdbb3,	// (0x000793af) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbb3,	// (0x000793af) list_single_hwr_training_symbol_option_pane

0xdbc6,	// (0x000793c2) list_single_hwr_training_symbol_option_pane_g1

0xdbce,	// (0x000793ca) list_single_hwr_training_symbol_option_pane_t1

0xdbdc,	// (0x000793d8) bg_button_pane_cp023

0xdbe5,	// (0x000793e1) bg_button_pane_cp024

0x6ceb,	// (0x000724e7) vitu2_page_scroll_pane_g1

0x6cf3,	// (0x000724ef) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007b2c8) vitu2_page_scroll_pane_g

0x6cfb,	// (0x000724f7) vitu2_page_scroll_pane_t1

0xdc18,	// (0x00079414) popup_char_count_window_g1

0xdc21,	// (0x0007941d) popup_char_count_window_g2

0xdc2a,	// (0x00079426) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007b2cd) popup_char_count_window_g

0xdc33,	// (0x0007942f) popup_char_count_window_t1

0x9540,	// (0x00074d3c) main_vded2_pane

0xd1aa,	// (0x000789a6) aid_size_cell_imed_line

0xd1b4,	// (0x000789b0) grid_imed_line_width_pane

0x9e85,	// (0x00075681) vid4_indicators_pane_g4

0xdc41,	// (0x0007943d) cell_imed_line_width_pane_ParamLimits

0xdc41,	// (0x0007943d) cell_imed_line_width_pane

0xdc55,	// (0x00079451) cell_imed_line_width_pane_g1

0xd3ac,	// (0x00078ba8) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007b2d4) cell_imed_line_width_pane_g

0x6d0a,	// (0x00072506) main_vded2_pane_g1_ParamLimits

0x6d0a,	// (0x00072506) main_vded2_pane_g1

0x6d20,	// (0x0007251c) main_vded2_pane_g2_ParamLimits

0x6d20,	// (0x0007251c) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007b2d9) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007b2d9) main_vded2_pane_g

0x6d32,	// (0x0007252e) vded2_slider_pane_ParamLimits

0x6d32,	// (0x0007252e) vded2_slider_pane

0x6d42,	// (0x0007253e) aid_size_touch_vded2_end

0x6d4c,	// (0x00072548) aid_size_touch_vded2_playhead

0xdc5e,	// (0x0007945a) aid_size_touch_vded2_start

0xdc66,	// (0x00079462) vded2_slider_bg_pane

0xdc6f,	// (0x0007946b) vded2_slider_pane_g1

0xdc78,	// (0x00079474) vded2_slider_pane_g2

0x6d56,	// (0x00072552) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007b2de) vded2_slider_pane_g

0xdc80,	// (0x0007947c) vded2_slider_bg_pane_g1

0xdc89,	// (0x00079485) vded2_slider_bg_pane_g2

0xdc92,	// (0x0007948e) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007b2e5) vded2_slider_bg_pane_g

0x2e09,	// (0x0006e605) aid_postcard_touch_down_pane_ParamLimits

0x2e09,	// (0x0006e605) aid_postcard_touch_down_pane

0x2e1f,	// (0x0006e61b) aid_postcard_touch_up_pane_ParamLimits

0x2e1f,	// (0x0006e61b) aid_postcard_touch_up_pane

0x9540,	// (0x00074d3c) main_blid2_pane

0x9a31,	// (0x0007522d) popup_blid2_search_window

0x94ba,	// (0x00074cb6) blid2_gps_pane

0x94ba,	// (0x00074cb6) blid2_navig_pane

0x94ba,	// (0x00074cb6) blid2_search_pane

0x94ba,	// (0x00074cb6) blid2_tripm_pane

0x6d61,	// (0x0007255d) blid2_search_pane_g1_ParamLimits

0x6d61,	// (0x0007255d) blid2_search_pane_g1

0x6d7b,	// (0x00072577) blid2_search_pane_t1_ParamLimits

0x6d7b,	// (0x00072577) blid2_search_pane_t1

0x6d8d,	// (0x00072589) aid_size_cell_blid2_gps_ParamLimits

0x6d8d,	// (0x00072589) aid_size_cell_blid2_gps

0x6da5,	// (0x000725a1) blid2_gps_pane_g1_ParamLimits

0x6da5,	// (0x000725a1) blid2_gps_pane_g1

0x6db9,	// (0x000725b5) grid_blid2_satellite_pane_ParamLimits

0x6db9,	// (0x000725b5) grid_blid2_satellite_pane

0x6dd3,	// (0x000725cf) blid2_navig_pane_g1_ParamLimits

0x6dd3,	// (0x000725cf) blid2_navig_pane_g1

0x6ddf,	// (0x000725db) blid2_navig_pane_t1_ParamLimits

0x6ddf,	// (0x000725db) blid2_navig_pane_t1

0x6dfa,	// (0x000725f6) blid2_navig_pane_t2_ParamLimits

0x6dfa,	// (0x000725f6) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007b2ec) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007b2ec) blid2_navig_pane_t

0x6e15,	// (0x00072611) blid2_navig_ring_pane_ParamLimits

0x6e15,	// (0x00072611) blid2_navig_ring_pane

0x6e2e,	// (0x0007262a) blid2_speed_pane_ParamLimits

0x6e2e,	// (0x0007262a) blid2_speed_pane

0x6e3a,	// (0x00072636) blid2_tripm_pane_g1_ParamLimits

0x6e3a,	// (0x00072636) blid2_tripm_pane_g1

0x6e53,	// (0x0007264f) blid2_tripm_pane_g2_ParamLimits

0x6e53,	// (0x0007264f) blid2_tripm_pane_g2

0x6e67,	// (0x00072663) blid2_tripm_pane_g3_ParamLimits

0x6e67,	// (0x00072663) blid2_tripm_pane_g3

0x6e7b,	// (0x00072677) blid2_tripm_pane_g4_ParamLimits

0x6e7b,	// (0x00072677) blid2_tripm_pane_g4

0x6e8f,	// (0x0007268b) blid2_tripm_pane_g5_ParamLimits

0x6e8f,	// (0x0007268b) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007b2f1) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007b2f1) blid2_tripm_pane_g

0x6eb5,	// (0x000726b1) blid2_tripm_pane_t1_ParamLimits

0x6eb5,	// (0x000726b1) blid2_tripm_pane_t1

0x6ed0,	// (0x000726cc) blid2_tripm_pane_t2_ParamLimits

0x6ed0,	// (0x000726cc) blid2_tripm_pane_t2

0x6ee9,	// (0x000726e5) blid2_tripm_pane_t3_ParamLimits

0x6ee9,	// (0x000726e5) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007b2fe) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007b2fe) blid2_tripm_pane_t

0x6f30,	// (0x0007272c) cell_blid2_satellite_pane_ParamLimits

0x6f30,	// (0x0007272c) cell_blid2_satellite_pane

0x6f4e,	// (0x0007274a) cell_blid2_satellite_pane_g1

0xdc9b,	// (0x00079497) cell_blid2_satellite_pane_t1

0xcc6f,	// (0x0007846b) blid2_speed_pane_g1

0xdca9,	// (0x000794a5) blid2_speed_pane_t1

0xdcb7,	// (0x000794b3) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007b307) blid2_speed_pane_t

0xcc6f,	// (0x0007846b) blid2_navig_ring_pane_g1

0x6f57,	// (0x00072753) blid2_navig_ring_pane_g2

0x6f5f,	// (0x0007275b) blid2_navig_ring_pane_g3

0x6f67,	// (0x00072763) blid2_navig_ring_pane_g4

0x6f6f,	// (0x0007276b) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007b30c) blid2_navig_ring_pane_g

0x94ba,	// (0x00074cb6) bg_popup_window_pane_cp011

0xdcc5,	// (0x000794c1) popup_blid2_search_window_g1

0xdccd,	// (0x000794c9) popup_blid2_search_window_t1

0xdcdb,	// (0x000794d7) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007b317) popup_blid2_search_window_t

0xab37,	// (0x00076333) main_browser_pane_g1

0xa38c,	// (0x00075b88) main_browser_pane_ParamLimits

0x9532,	// (0x00074d2e) bg_button_pane_cp011_ParamLimits

0x5ea1,	// (0x0007169d) cell_vitu2_function_pane_g1_ParamLimits

0xc85b,	// (0x00078057) bg_popup_sub_pane_cp22_ParamLimits

0x67e4,	// (0x00071fe0) input_focus_pane_cp08_ParamLimits

0x67fb,	// (0x00071ff7) popup_vitu2_query_button_pane_ParamLimits

0x67fb,	// (0x00071ff7) popup_vitu2_query_button_pane

0x680c,	// (0x00072008) popup_vitu2_query_input_button_pane

0xd96a,	// (0x00079166) popup_vitu2_query_window_g1_ParamLimits

0x6816,	// (0x00072012) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007b218) popup_vitu2_query_window_g_ParamLimits

0x94ba,	// (0x00074cb6) bg_button_pane_cp026

0x6f77,	// (0x00072773) popup_vitu2_query_input_button_pane_g1

0x94ba,	// (0x00074cb6) bg_button_pane_cp025

0xdce9,	// (0x000794e5) popup_vitu2_query_button_pane_t1

0x44b1,	// (0x0006fcad) main_mp3_pane_t6

0x44bf,	// (0x0006fcbb) popup_slider_window_cp01

0x9de9,	// (0x000755e5) cam4_battery_pane

0x9e42,	// (0x0007563e) cam4_battery_pane_cp02

0x9f39,	// (0x00075735) cam4_battery_pane_cp01

0x9f39,	// (0x00075735) cam4_battery_pane_cp03

0xd5b1,	// (0x00078dad) cam4_battery_pane_g1

0xcc6f,	// (0x0007846b) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007b31c) cam4_battery_pane_g

0xcb3b,	// (0x00078337) popup_blid_sat_info2_window_t11

0xb29e,	// (0x00076a9a) aid_size_touch_mv_arrow_left_ParamLimits

0xb2c7,	// (0x00076ac3) aid_size_touch_mv_arrow_right_ParamLimits

0xb325,	// (0x00076b21) navi_pane_g1_ParamLimits

0xb331,	// (0x00076b2d) navi_pane_g2_ParamLimits

0xb35f,	// (0x00076b5b) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007abe1) navi_pane_g_ParamLimits

0x2871,	// (0x0006e06d) navi_pane_mv_t1_ParamLimits

0x50f8,	// (0x000708f4) grid_imed_effect_pane_ParamLimits

0x147b,	// (0x0006cc77) aid_placing_vt_slider_lsc

0xaa86,	// (0x00076282) aid_placing_vt_slider_prt

0xa5b6,	// (0x00075db2) bg_tb_trans_pane_cp01_ParamLimits

0xcdfb,	// (0x000785f7) popup_image_details_window_g1_ParamLimits

0xce0e,	// (0x0007860a) popup_image_details_window_g2_ParamLimits

0xce23,	// (0x0007861f) popup_image_details_window_g3_ParamLimits

0xce23,	// (0x0007861f) popup_image_details_window_g3

0xf718,	// (0x0007af14) popup_image_details_window_g_ParamLimits

0xce37,	// (0x00078633) popup_image_details_window_t1_ParamLimits

0xce49,	// (0x00078645) popup_image_details_window_t2_ParamLimits

0xce62,	// (0x0007865e) popup_image_details_window_t3_ParamLimits

0xce76,	// (0x00078672) popup_image_details_window_t4_ParamLimits

0xce91,	// (0x0007868d) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007af1b) popup_image_details_window_t_ParamLimits

0x6b86,	// (0x00072382) cl_header_name_pane_ParamLimits

0x6b86,	// (0x00072382) cl_header_name_pane

0x6f7f,	// (0x0007277b) cl_header_name_pane_t1_ParamLimits

0x6f7f,	// (0x0007277b) cl_header_name_pane_t1

0x6fa0,	// (0x0007279c) cl_header_name_pane_t2_ParamLimits

0x6fa0,	// (0x0007279c) cl_header_name_pane_t2

0x6fe2,	// (0x000727de) cl_header_name_pane_t3_ParamLimits

0x6fe2,	// (0x000727de) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007b321) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007b321) cl_header_name_pane_t

0xb3ee,	// (0x00076bea) navi_pane_mv_g2_ParamLimits

0xd6d3,	// (0x00078ecf) field_vitu2_entry_pane_g1_ParamLimits

0xd6df,	// (0x00078edb) field_vitu2_entry_pane_g2_ParamLimits

0xd6eb,	// (0x00078ee7) field_vitu2_entry_pane_g3_ParamLimits

0xd6eb,	// (0x00078ee7) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007b117) field_vitu2_entry_pane_g_ParamLimits

0x5e18,	// (0x00071614) cell_vitu2_itu_pane_g1_ParamLimits

0x5e28,	// (0x00071624) cell_vitu2_itu_pane_g2_ParamLimits

0x5e28,	// (0x00071624) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007b123) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007b123) cell_vitu2_itu_pane_g

0x9532,	// (0x00074d2e) bg_vkb2_func_pane_cp05_ParamLimits

0x9532,	// (0x00074d2e) bg_vkb2_func_pane_cp05

0x9532,	// (0x00074d2e) bg_vkb2_func_pane_cp03

0x9532,	// (0x00074d2e) bg_vkb2_func_pane_cp04

0x9532,	// (0x00074d2e) bg_vkb2_func_pane_cp10_ParamLimits

0x9532,	// (0x00074d2e) bg_vkb2_func_pane_cp10

0x6b2c,	// (0x00072328) bg_vkb2_func_pane_cp08

0x6b12,	// (0x0007230e) bg_vkb2_func_pane_cp06

0x6b20,	// (0x0007231c) bg_vkb2_func_pane_cp07

0xdbee,	// (0x000793ea) bg_vkb2_func_pane_cp11_ParamLimits

0xdbee,	// (0x000793ea) bg_vkb2_func_pane_cp11

0xdc03,	// (0x000793ff) bg_vkb2_func_pane_cp12_ParamLimits

0xdc03,	// (0x000793ff) bg_vkb2_func_pane_cp12

0x94ba,	// (0x00074cb6) bg_vkb2_func_pane_cp09

0xd70b,	// (0x00078f07) bg_vkb2_func_pane_g1

0xac48,	// (0x00076444) bg_vkb2_func_pane_g2

0xd713,	// (0x00078f0f) bg_vkb2_func_pane_g3

0xd71b,	// (0x00078f17) bg_vkb2_func_pane_g4

0xd92f,	// (0x0007912b) bg_vkb2_func_pane_g5

0xd733,	// (0x00078f2f) bg_vkb2_func_pane_g6

0xd73b,	// (0x00078f37) bg_vkb2_func_pane_g7

0xd72b,	// (0x00078f27) bg_vkb2_func_pane_g8

0xac28,	// (0x00076424) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007b328) bg_vkb2_func_pane_g

0x6ea3,	// (0x0007269f) blid2_tripm_pane_g6_ParamLimits

0x6ea3,	// (0x0007269f) blid2_tripm_pane_g6

0xd56b,	// (0x00078d67) mp4_progress_pane_g1

0x6f1c,	// (0x00072718) blid2_tripm_values_pane_ParamLimits

0x6f1c,	// (0x00072718) blid2_tripm_values_pane

0x7013,	// (0x0007280f) blid2_tripm_values_pane_t1

0x7021,	// (0x0007281d) blid2_tripm_values_pane_t2

0x702f,	// (0x0007282b) blid2_tripm_values_pane_t3

0x703d,	// (0x00072839) blid2_tripm_values_pane_t4

0x704b,	// (0x00072847) blid2_tripm_values_pane_t5

0x7059,	// (0x00072855) blid2_tripm_values_pane_t6

0x7067,	// (0x00072863) blid2_tripm_values_pane_t7

0x7075,	// (0x00072871) blid2_tripm_values_pane_t8

0x7083,	// (0x0007287f) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007b33b) blid2_tripm_values_pane_t

0x14bd,	// (0x0006ccb9) call_video_pane_t1_ParamLimits

0x14db,	// (0x0006ccd7) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007aa6a) call_video_pane_t_ParamLimits

0x2d44,	// (0x0006e540) msg_header_pane_g1_ParamLimits

0xb5de,	// (0x00076dda) msg_header_pane_g2_ParamLimits

0xb5de,	// (0x00076dda) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007ac84) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007ac84) msg_header_pane_g

0xa38c,	// (0x00075b88) main_clock2_pane_ParamLimits

0x4df9,	// (0x000705f5) grid_clock2_toolbar_pane_ParamLimits

0x4df9,	// (0x000705f5) grid_clock2_toolbar_pane

0x4df9,	// (0x000705f5) listscroll_clock2_pane_ParamLimits

0x4df9,	// (0x000705f5) listscroll_clock2_pane

0x4eec,	// (0x000706e8) main_clock2_pane_t3_ParamLimits

0x4eec,	// (0x000706e8) main_clock2_pane_t3

0x4f10,	// (0x0007070c) main_clock2_pane_t4_ParamLimits

0x4f10,	// (0x0007070c) main_clock2_pane_t4

0xdcf7,	// (0x000794f3) cell_clock2_toolbar_pane

0xdcff,	// (0x000794fb) cell_clock2_toolbar_pane_cp01

0xdcff,	// (0x000794fb) cell_clock2_toolbar_pane_cp02

0xdd07,	// (0x00079503) cell_clock2_toolbar_pane_cp03

0xdd0f,	// (0x0007950b) list_clock2_pane

0xb214,	// (0x00076a10) scroll_pane_cp10

0xdd17,	// (0x00079513) list_single_clock2_pane_ParamLimits

0xdd17,	// (0x00079513) list_single_clock2_pane

0xb455,	// (0x00076c51) list_highlight_pane_cp08

0xdd24,	// (0x00079520) list_single_clock2_pane_t1

0xdd32,	// (0x0007952e) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007b34e) list_single_clock2_pane_t

0x94ba,	// (0x00074cb6) bg_button_pane_cp10

0xdd40,	// (0x0007953c) cell_clock2_toolbar_pane_g1

0x2d95,	// (0x0006e591) aid_main_viewer_pane_g1_ParamLimits

0x2d95,	// (0x0006e591) aid_main_viewer_pane_g1

0x2da3,	// (0x0006e59f) aid_main_viewer_pane_g2_ParamLimits

0x2da3,	// (0x0006e59f) aid_main_viewer_pane_g2

0x2db1,	// (0x0006e5ad) aid_main_viewer_pane_g3_ParamLimits

0x2db1,	// (0x0006e5ad) aid_main_viewer_pane_g3

0x2dc0,	// (0x0006e5bc) aid_main_viewer_pane_g4_ParamLimits

0x2dc0,	// (0x0006e5bc) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007ac95) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007ac95) aid_main_viewer_pane_g

0x36c6,	// (0x0006eec2) main_calc_pane_ParamLimits

0x36ec,	// (0x0006eee8) main_dialer2_pane_ParamLimits

0x9540,	// (0x00074d3c) main_cam6_pane

0x9540,	// (0x00074d3c) main_vid6_pane

0x4e05,	// (0x00070601) listscroll_gen_pane_cp06_ParamLimits

0x4e05,	// (0x00070601) listscroll_gen_pane_cp06

0x4f33,	// (0x0007072f) main_clock2_pane_t5_ParamLimits

0x4f33,	// (0x0007072f) main_clock2_pane_t5

0x4f8d,	// (0x00070789) aid_call2_pane_cp10_ParamLimits

0x4f9f,	// (0x0007079b) aid_call_pane_cp10_ParamLimits

0xb292,	// (0x00076a8e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb292,	// (0x00076a8e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4fb1,	// (0x000707ad) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4fb1,	// (0x000707ad) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb292,	// (0x00076a8e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007afd0) popup_clock_analogue_window_cp10_g_ParamLimits

0x4fc3,	// (0x000707bf) popup_clock_analogue_window_cp10_t1_ParamLimits

0x562c,	// (0x00070e28) cell_dialer2_keypad_pane_g2_ParamLimits

0x562c,	// (0x00070e28) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007b0b6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007b0b6) cell_dialer2_keypad_pane_g

0x5648,	// (0x00070e44) cell_dialer2_keypad_pane_t1

0x61b8,	// (0x000719b4) main_cset_text2_pane_ParamLimits

0x61b8,	// (0x000719b4) main_cset_text2_pane

0xdb56,	// (0x00079352) area_vitu2_query_pane_g1_ParamLimits

0x6ab1,	// (0x000722ad) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007b26b) area_vitu2_query_pane_g_ParamLimits

0xa6d1,	// (0x00075ecd) area_vitu2_query_pane_t7_ParamLimits

0xa6d1,	// (0x00075ecd) area_vitu2_query_pane_t7

0x6b12,	// (0x0007230e) bg_button_pane_cp018_ParamLimits

0x6b20,	// (0x0007231c) bg_button_pane_cp021_ParamLimits

0x6b2c,	// (0x00072328) bg_button_pane_cp022_ParamLimits

0x6b2c,	// (0x00072328) bg_vkb2_func_pane_cp08_ParamLimits

0x6b12,	// (0x0007230e) bg_vkb2_func_pane_cp06_ParamLimits

0x6b20,	// (0x0007231c) bg_vkb2_func_pane_cp07_ParamLimits

0x6b3b,	// (0x00072337) input_focus_pane_cp09_ParamLimits

0x9fa3,	// (0x0007579f) cam6_autofocus_pane_ParamLimits

0x9fa3,	// (0x0007579f) cam6_autofocus_pane

0x7091,	// (0x0007288d) cam6_image_uncrop_pane_ParamLimits

0x7091,	// (0x0007288d) cam6_image_uncrop_pane

0x70a0,	// (0x0007289c) cam6_indi_pane_ParamLimits

0x70a0,	// (0x0007289c) cam6_indi_pane

0x70b6,	// (0x000728b2) cam6_mode_pane_ParamLimits

0x70b6,	// (0x000728b2) cam6_mode_pane

0x70c8,	// (0x000728c4) cam6_timer_pane_ParamLimits

0x70c8,	// (0x000728c4) cam6_timer_pane

0x70d4,	// (0x000728d0) cam6_zoom_pane_ParamLimits

0x70d4,	// (0x000728d0) cam6_zoom_pane

0x70e0,	// (0x000728dc) cam6_mode_pane_g1_ParamLimits

0x70e0,	// (0x000728dc) cam6_mode_pane_g1

0x70f0,	// (0x000728ec) cam6_mode_pane_g2_ParamLimits

0x70f0,	// (0x000728ec) cam6_mode_pane_g2

0x7100,	// (0x000728fc) cam6_mode_pane_g3_ParamLimits

0x7100,	// (0x000728fc) cam6_mode_pane_g3

0x7110,	// (0x0007290c) cam6_mode_pane_g4_ParamLimits

0x7110,	// (0x0007290c) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007b353) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007b353) cam6_mode_pane_g

0xdd48,	// (0x00079544) bg_tb_trans_pane_cp08_ParamLimits

0xdd48,	// (0x00079544) bg_tb_trans_pane_cp08

0xdd56,	// (0x00079552) cam6_battery_pane_ParamLimits

0xdd56,	// (0x00079552) cam6_battery_pane

0xdd6c,	// (0x00079568) cam6_indi_pane_g1_ParamLimits

0xdd6c,	// (0x00079568) cam6_indi_pane_g1

0xdd7e,	// (0x0007957a) cam6_indi_pane_g2_ParamLimits

0xdd7e,	// (0x0007957a) cam6_indi_pane_g2

0xdd90,	// (0x0007958c) cam6_indi_pane_g3_ParamLimits

0xdd90,	// (0x0007958c) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007b35c) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007b35c) cam6_indi_pane_g

0xdda2,	// (0x0007959e) cam6_indi_pane_t1_ParamLimits

0xdda2,	// (0x0007959e) cam6_indi_pane_t1

0x7120,	// (0x0007291c) cam6_autofocus_pane_g1

0x7128,	// (0x00072924) cam6_autofocus_pane_g2

0x7130,	// (0x0007292c) cam6_autofocus_pane_g3

0x7138,	// (0x00072934) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007b363) cam6_autofocus_pane_g

0xddc8,	// (0x000795c4) cam6_timer_pane_g1

0xddd0,	// (0x000795cc) cam6_timer_pane_t1

0xddde,	// (0x000795da) cam6_zoom_cont_pane

0xdde6,	// (0x000795e2) cam6_zoom_pane_g1

0xddee,	// (0x000795ea) cam6_zoom_pane_g2

0x7140,	// (0x0007293c) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007b36c) cam6_zoom_pane_g

0xcc6f,	// (0x0007846b) cam6_battery_pane_g1

0xcc6f,	// (0x0007846b) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007aed8) cam6_battery_pane_g

0xde23,	// (0x0007961f) cam6_zoom_cont_pane_g1

0xde2c,	// (0x00079628) cam6_zoom_cont_pane_g2

0xde35,	// (0x00079631) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007b373) cam6_zoom_cont_pane_g

0x715d,	// (0x00072959) cam6_mode_pane_cp_ParamLimits

0x715d,	// (0x00072959) cam6_mode_pane_cp

0x716f,	// (0x0007296b) cam6_zoom_pane_cp_ParamLimits

0x716f,	// (0x0007296b) cam6_zoom_pane_cp

0x717b,	// (0x00072977) vid6_image_uncrop_cif_pane_ParamLimits

0x717b,	// (0x00072977) vid6_image_uncrop_cif_pane

0x718b,	// (0x00072987) vid6_image_uncrop_nhd_pane_ParamLimits

0x718b,	// (0x00072987) vid6_image_uncrop_nhd_pane

0x719a,	// (0x00072996) vid6_image_uncrop_vga_pane_ParamLimits

0x719a,	// (0x00072996) vid6_image_uncrop_vga_pane

0x71a9,	// (0x000729a5) vid6_image_uncrop_wvga_pane_ParamLimits

0x71a9,	// (0x000729a5) vid6_image_uncrop_wvga_pane

0x71b8,	// (0x000729b4) vid6_indi_pane_ParamLimits

0x71b8,	// (0x000729b4) vid6_indi_pane

0xdd48,	// (0x00079544) bg_tb_trans_pane_cp09_ParamLimits

0xdd48,	// (0x00079544) bg_tb_trans_pane_cp09

0xde4d,	// (0x00079649) cam6_battery_pane_cp_ParamLimits

0xde4d,	// (0x00079649) cam6_battery_pane_cp

0xde59,	// (0x00079655) vid6_indi_pane_g1_ParamLimits

0xde59,	// (0x00079655) vid6_indi_pane_g1

0xde6b,	// (0x00079667) vid6_indi_pane_g2_ParamLimits

0xde6b,	// (0x00079667) vid6_indi_pane_g2

0xde7d,	// (0x00079679) vid6_indi_pane_g3_ParamLimits

0xde7d,	// (0x00079679) vid6_indi_pane_g3

0xde92,	// (0x0007968e) vid6_indi_pane_g4_ParamLimits

0xde92,	// (0x0007968e) vid6_indi_pane_g4

0xdea7,	// (0x000796a3) vid6_indi_pane_g5_ParamLimits

0xdea7,	// (0x000796a3) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007b37a) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007b37a) vid6_indi_pane_g

0xdec1,	// (0x000796bd) vid6_indi_pane_t1_ParamLimits

0xdec1,	// (0x000796bd) vid6_indi_pane_t1

0xded7,	// (0x000796d3) vid6_indi_pane_t2_ParamLimits

0xded7,	// (0x000796d3) vid6_indi_pane_t2

0xdeff,	// (0x000796fb) vid6_indi_pane_t3_ParamLimits

0xdeff,	// (0x000796fb) vid6_indi_pane_t3

0xdf27,	// (0x00079723) vid6_indi_pane_t4_ParamLimits

0xdf27,	// (0x00079723) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007b385) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007b385) vid6_indi_pane_t

0xdf4b,	// (0x00079747) wait_bar_pane_cp08

0x71d0,	// (0x000729cc) main_cset_text2_pane_t1_ParamLimits

0x71d0,	// (0x000729cc) main_cset_text2_pane_t1

0x7148,	// (0x00072944) listscroll_gen_pane_cp06_t1_ParamLimits

0x7148,	// (0x00072944) listscroll_gen_pane_cp06_t1

0x9540,	// (0x00074d3c) main_cam6_set_pane

0x9ddb,	// (0x000755d7) bg_tb_trans_pane_cp06_ParamLimits

0x9df1,	// (0x000755ed) cam4_indicators_pane_g1_ParamLimits

0x9e02,	// (0x000755fe) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007b0f3) cam4_indicators_pane_g_ParamLimits

0x9e20,	// (0x0007561c) cam4_indicators_pane_t1_ParamLimits

0x9532,	// (0x00074d2e) bg_tb_trans_pane_cp07_ParamLimits

0x9e4c,	// (0x00075648) vid4_indicators_pane_g1_ParamLimits

0x9e60,	// (0x0007565c) vid4_indicators_pane_g2_ParamLimits

0x9e74,	// (0x00075670) vid4_indicators_pane_g3_ParamLimits

0x9e85,	// (0x00075681) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007b105) vid4_indicators_pane_g_ParamLimits

0x9ea3,	// (0x0007569f) vid4_indicators_pane_t1_ParamLimits

0x9f41,	// (0x0007573d) vid4_progress_pane_g1_ParamLimits

0x9f51,	// (0x0007574d) vid4_progress_pane_g2_ParamLimits

0x6c76,	// (0x00072472) vid4_progress_pane_g3_ParamLimits

0x9f61,	// (0x0007575d) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007b2b6) vid4_progress_pane_g_ParamLimits

0x6c88,	// (0x00072484) vid4_progress_pane_t1_ParamLimits

0x9f79,	// (0x00075775) vid4_progress_pane_t2_ParamLimits

0x9f8e,	// (0x0007578a) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007b2c1) vid4_progress_pane_t_ParamLimits

0x6ca0,	// (0x0007249c) wait_bar_pane_cp07_ParamLimits

0x71ed,	// (0x000729e9) main_cam6_set_pane_g2_ParamLimits

0x71ed,	// (0x000729e9) main_cam6_set_pane_g2

0x7211,	// (0x00072a0d) main_cset6_listscroll_pane_ParamLimits

0x7211,	// (0x00072a0d) main_cset6_listscroll_pane

0x7231,	// (0x00072a2d) main_cset6_slider_pane_ParamLimits

0x7231,	// (0x00072a2d) main_cset6_slider_pane

0x7247,	// (0x00072a43) main_cset6_text2_pane_ParamLimits

0x7247,	// (0x00072a43) main_cset6_text2_pane

0xdf5a,	// (0x00079756) main_cset6_text_pane

0xdf62,	// (0x0007975e) main_cset_list_pane_copy1_ParamLimits

0xdf62,	// (0x0007975e) main_cset_list_pane_copy1

0xdf72,	// (0x0007976e) scroll_pane_cp028_copy1

0x7255,	// (0x00072a51) cset_list_set_pane_copy1

0x7266,	// (0x00072a62) aid_position_infowindow_above_copy1

0x726e,	// (0x00072a6a) aid_position_infowindow_below_copy1

0x7276,	// (0x00072a72) cset_list_set_pane_g1_copy1

0x727e,	// (0x00072a7a) cset_list_set_pane_g3_copy1_ParamLimits

0x727e,	// (0x00072a7a) cset_list_set_pane_g3_copy1

0x728d,	// (0x00072a89) cset_list_set_pane_t1_copy1_ParamLimits

0x728d,	// (0x00072a89) cset_list_set_pane_t1_copy1

0xa5b6,	// (0x00075db2) list_highlight_pane_cp021_copy1_ParamLimits

0xa5b6,	// (0x00075db2) list_highlight_pane_cp021_copy1

0xdf7b,	// (0x00079777) cset6_slider_pane_ParamLimits

0xdf7b,	// (0x00079777) cset6_slider_pane

0xdfa7,	// (0x000797a3) main_cset6_slider_pane_g1_ParamLimits

0xdfa7,	// (0x000797a3) main_cset6_slider_pane_g1

0x72a2,	// (0x00072a9e) main_cset6_slider_pane_g2_ParamLimits

0x72a2,	// (0x00072a9e) main_cset6_slider_pane_g2

0xdfcf,	// (0x000797cb) main_cset6_slider_pane_g3_ParamLimits

0xdfcf,	// (0x000797cb) main_cset6_slider_pane_g3

0x72ca,	// (0x00072ac6) main_cset6_slider_pane_g4_ParamLimits

0x72ca,	// (0x00072ac6) main_cset6_slider_pane_g4

0x72d6,	// (0x00072ad2) main_cset6_slider_pane_g5_ParamLimits

0x72d6,	// (0x00072ad2) main_cset6_slider_pane_g5

0xd83a,	// (0x00079036) main_cset6_slider_pane_g7_ParamLimits

0xd83a,	// (0x00079036) main_cset6_slider_pane_g7

0xd846,	// (0x00079042) main_cset6_slider_pane_g8_ParamLimits

0xd846,	// (0x00079042) main_cset6_slider_pane_g8

0x6265,	// (0x00071a61) main_cset6_slider_pane_g9_ParamLimits

0x6265,	// (0x00071a61) main_cset6_slider_pane_g9

0x6271,	// (0x00071a6d) main_cset6_slider_pane_g10_ParamLimits

0x6271,	// (0x00071a6d) main_cset6_slider_pane_g10

0x627d,	// (0x00071a79) main_cset6_slider_pane_g11_ParamLimits

0x627d,	// (0x00071a79) main_cset6_slider_pane_g11

0x6289,	// (0x00071a85) main_cset6_slider_pane_g12_ParamLimits

0x6289,	// (0x00071a85) main_cset6_slider_pane_g12

0x6295,	// (0x00071a91) main_cset6_slider_pane_g13_ParamLimits

0x6295,	// (0x00071a91) main_cset6_slider_pane_g13

0x62a1,	// (0x00071a9d) main_cset6_slider_pane_g14_ParamLimits

0x62a1,	// (0x00071a9d) main_cset6_slider_pane_g14

0x72e2,	// (0x00072ade) main_cset6_slider_pane_g15_ParamLimits

0x72e2,	// (0x00072ade) main_cset6_slider_pane_g15

0x62c5,	// (0x00071ac1) main_cset6_slider_pane_g16_ParamLimits

0x62c5,	// (0x00071ac1) main_cset6_slider_pane_g16

0x62d1,	// (0x00071acd) main_cset6_slider_pane_g17_ParamLimits

0x62d1,	// (0x00071acd) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007b38e) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007b38e) main_cset6_slider_pane_g

0xdfdb,	// (0x000797d7) main_cset6_slider_pane_t1_ParamLimits

0xdfdb,	// (0x000797d7) main_cset6_slider_pane_t1

0x7312,	// (0x00072b0e) main_cset6_slider_pane_t2_ParamLimits

0x7312,	// (0x00072b0e) main_cset6_slider_pane_t2

0x733d,	// (0x00072b39) main_cset6_slider_pane_t3_ParamLimits

0x733d,	// (0x00072b39) main_cset6_slider_pane_t3

0x7368,	// (0x00072b64) main_cset6_slider_pane_t4_ParamLimits

0x7368,	// (0x00072b64) main_cset6_slider_pane_t4

0x7393,	// (0x00072b8f) main_cset6_slider_pane_t5_ParamLimits

0x7393,	// (0x00072b8f) main_cset6_slider_pane_t5

0xe01c,	// (0x00079818) main_cset6_slider_pane_t7_ParamLimits

0xe01c,	// (0x00079818) main_cset6_slider_pane_t7

0x73be,	// (0x00072bba) main_cset6_slider_pane_t8_ParamLimits

0x73be,	// (0x00072bba) main_cset6_slider_pane_t8

0x73e2,	// (0x00072bde) main_cset6_slider_pane_t9_ParamLimits

0x73e2,	// (0x00072bde) main_cset6_slider_pane_t9

0x7406,	// (0x00072c02) main_cset6_slider_pane_t10_ParamLimits

0x7406,	// (0x00072c02) main_cset6_slider_pane_t10

0x742a,	// (0x00072c26) main_cset6_slider_pane_t11_ParamLimits

0x742a,	// (0x00072c26) main_cset6_slider_pane_t11

0xe052,	// (0x0007984e) main_cset6_slider_pane_t14_ParamLimits

0xe052,	// (0x0007984e) main_cset6_slider_pane_t14

0xe08b,	// (0x00079887) main_cset6_slider_pane_t15_ParamLimits

0xe08b,	// (0x00079887) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007b3b3) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007b3b3) main_cset6_slider_pane_t

0xddf6,	// (0x000795f2) cset_slider_pane_g1_copy1

0xddff,	// (0x000795fb) cset_slider_pane_g2_copy1

0xde08,	// (0x00079604) cset_slider_pane_g3_copy1

0x94ba,	// (0x00074cb6) bg_popup_sub_pane_cp011_copy1

0xe0c4,	// (0x000798c0) main_cset_text_pane_g1_copy1

0xd97e,	// (0x0007917a) main_cset_text_pane_t1_copy1

0xd98c,	// (0x00079188) main_cset_text_pane_t2_copy1

0xd99a,	// (0x00079196) main_cset_text_pane_t3_copy1

0xd9a8,	// (0x000791a4) main_cset_text_pane_t4_copy1

0xd9b6,	// (0x000791b2) main_cset_text_pane_t5_copy1

0xe0cc,	// (0x000798c8) main_cset_text_pane_t6_copy1

0xd9d2,	// (0x000791ce) main_cset_text_pane_t7_copy1

0x71d0,	// (0x000729cc) main_cset_text2_pane_t1_copy1

0x9532,	// (0x00074d2e) main_ncimui_pane

0x3936,	// (0x0006f132) popup_query_ncimui_window_ParamLimits

0x3936,	// (0x0006f132) popup_query_ncimui_window

0xa600,	// (0x00075dfc) field_cale_ev2_pane_g4_ParamLimits

0xa600,	// (0x00075dfc) field_cale_ev2_pane_g4

0x550c,	// (0x00070d08) cell_video_dialer_keypad_pane_g2_ParamLimits

0x550c,	// (0x00070d08) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007b091) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007b091) cell_video_dialer_keypad_pane_g

0x5524,	// (0x00070d20) cell_video_dialer_keypad_pane_t1

0x94ba,	// (0x00074cb6) bg_popup_window_pane_cp012

0xb0e1,	// (0x000768dd) heading_pane_cp06

0xe0f8,	// (0x000798f4) ncim_query_content_pane

0x94ba,	// (0x00074cb6) bg_popup_heading_pane_cp01

0xe100,	// (0x000798fc) ncim_heading_pane_t1

0xe10e,	// (0x0007990a) ncim_indicator_popup_pane

0xe120,	// (0x0007991c) ncim_query_button_pane

0xe134,	// (0x00079930) ncim_query_content_pane_t1

0xe146,	// (0x00079942) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007b3f7) ncim_query_content_pane_t

0xe180,	// (0x0007997c) ncim_query_list_pane

0xe192,	// (0x0007998e) ncim_query_popup_pane

0xe10e,	// (0x0007990a) ncim_indicator_popup_pane_ParamLimits

0x7645,	// (0x00072e41) ncim_query_content_pane_g1_ParamLimits

0x7645,	// (0x00072e41) ncim_query_content_pane_g1

0xe134,	// (0x00079930) ncim_query_content_pane_t1_ParamLimits

0xe146,	// (0x00079942) ncim_query_content_pane_t2_ParamLimits

0x7651,	// (0x00072e4d) ncim_query_content_pane_t3_ParamLimits

0x7651,	// (0x00072e4d) ncim_query_content_pane_t3

0x7679,	// (0x00072e75) ncim_query_content_pane_t4_ParamLimits

0x7679,	// (0x00072e75) ncim_query_content_pane_t4

0x76a1,	// (0x00072e9d) ncim_query_content_pane_t5_ParamLimits

0x76a1,	// (0x00072e9d) ncim_query_content_pane_t5

0xe158,	// (0x00079954) ncim_query_content_pane_t6_ParamLimits

0xe158,	// (0x00079954) ncim_query_content_pane_t6

0xfbfb,	// (0x0007b3f7) ncim_query_content_pane_t_ParamLimits

0xe180,	// (0x0007997c) ncim_query_list_pane_ParamLimits

0xe192,	// (0x0007998e) ncim_query_popup_pane_ParamLimits

0xe1a6,	// (0x000799a2) wait_bar_pane_cp04

0x94ba,	// (0x00074cb6) input_focus_pane_cp011

0xe1ae,	// (0x000799aa) ncim_query_popup_pane_t1

0xe1bc,	// (0x000799b8) ncim_list_query_list_pane_ParamLimits

0xe1bc,	// (0x000799b8) ncim_list_query_list_pane

0x94ba,	// (0x00074cb6) bg_button_pane_cp027

0xe1c9,	// (0x000799c5) ncim_query_button_pane_g1

0x94ba,	// (0x00074cb6) list_highlight_pane_cp012

0xe1d3,	// (0x000799cf) ncim_list_query_list_pane_g1

0xe1db,	// (0x000799d7) ncim_list_query_list_pane_t1

0x9e11,	// (0x0007560d) cam4_indicators_pane_g3_ParamLimits

0x9e11,	// (0x0007560d) cam4_indicators_pane_g3

0x9e91,	// (0x0007568d) vid4_indicators_pane_g5_ParamLimits

0x9e91,	// (0x0007568d) vid4_indicators_pane_g5

0x9f6d,	// (0x00075769) vid4_progress_pane_g5_ParamLimits

0x9f6d,	// (0x00075769) vid4_progress_pane_g5

0x7533,	// (0x00072d2f) main_ncimui_pane_g1

0x7599,	// (0x00072d95) ncimui_group_query_pane_ParamLimits

0x7599,	// (0x00072d95) ncimui_group_query_pane

0x75e1,	// (0x00072ddd) ncimui_list_pane_ParamLimits

0x75e1,	// (0x00072ddd) ncimui_list_pane

0x7608,	// (0x00072e04) ncimui_text_pane_ParamLimits

0x7608,	// (0x00072e04) ncimui_text_pane

0x76c9,	// (0x00072ec5) ncimui_text_pane_t1_ParamLimits

0x76c9,	// (0x00072ec5) ncimui_text_pane_t1

0xe1e9,	// (0x000799e5) ncimui_list_single_graphic_pane_ParamLimits

0xe1e9,	// (0x000799e5) ncimui_list_single_graphic_pane

0x76e7,	// (0x00072ee3) ncimui_query_pane_ParamLimits

0x76e7,	// (0x00072ee3) ncimui_query_pane

0x94ba,	// (0x00074cb6) list_highlight_pane_cp013

0xe1f9,	// (0x000799f5) ncim_list_query_list_pane_t1_copy1

0xe1d3,	// (0x000799cf) ncim_list_single_graphic_pane_g1

0xe207,	// (0x00079a03) ncim_query_button_pane_cp01

0xe213,	// (0x00079a0f) ncim_query_entry_pane_ParamLimits

0xe213,	// (0x00079a0f) ncim_query_entry_pane

0xe226,	// (0x00079a22) ncimui_query_pane_g1

0xe232,	// (0x00079a2e) ncimui_query_pane_t1_ParamLimits

0xe232,	// (0x00079a2e) ncimui_query_pane_t1

0xa5b6,	// (0x00075db2) input_focus_pane_cp012

0xe24b,	// (0x00079a47) ncim_query_entry_pane_t1

0xa38c,	// (0x00075b88) main_im_pane_ParamLimits

0x9532,	// (0x00074d2e) main_mobtv_pane_ParamLimits

0x9532,	// (0x00074d2e) main_mobtv_pane

0x72fa,	// (0x00072af6) main_cset6_slider_pane_g18_ParamLimits

0x72fa,	// (0x00072af6) main_cset6_slider_pane_g18

0x7306,	// (0x00072b02) main_cset6_slider_pane_g19_ParamLimits

0x7306,	// (0x00072b02) main_cset6_slider_pane_g19

0x76fa,	// (0x00072ef6) bg_main_mobtv_pane_ParamLimits

0x76fa,	// (0x00072ef6) bg_main_mobtv_pane

0x7708,	// (0x00072f04) main_mobtv_info_pane

0x7711,	// (0x00072f0d) main_mobtv_loading_pane_ParamLimits

0x7711,	// (0x00072f0d) main_mobtv_loading_pane

0xe25d,	// (0x00079a59) main_mobtv_pg_channel_list_pane

0xe267,	// (0x00079a63) main_mobtv_pg_hdr_pane

0x771e,	// (0x00072f1a) main_mobtv_programe_curr_pane_ParamLimits

0x771e,	// (0x00072f1a) main_mobtv_programe_curr_pane

0x772b,	// (0x00072f27) main_mobtv_programe_next_pane_ParamLimits

0x772b,	// (0x00072f27) main_mobtv_programe_next_pane

0xe270,	// (0x00079a6c) popup_mobtv_noti_window

0xcc6f,	// (0x0007846b) main_tv_pg_hdr_pane_g1

0xe278,	// (0x00079a74) main_tv_pg_hdr_pane_g2

0xe280,	// (0x00079a7c) main_tv_pg_hdr_pane_g3

0xe288,	// (0x00079a84) main_tv_pg_hdr_pane_g4

0xe290,	// (0x00079a8c) main_tv_pg_hdr_pane_g5

0xe29a,	// (0x00079a96) main_tv_pg_hdr_pane_g6

0xe2a4,	// (0x00079aa0) main_tv_pg_hdr_pane_g7

0xe2ae,	// (0x00079aaa) main_tv_pg_hdr_pane_g8

0xe2b8,	// (0x00079ab4) main_tv_pg_hdr_pane_g9

0xe2c2,	// (0x00079abe) main_tv_pg_hdr_pane_g10

0xe2cc,	// (0x00079ac8) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007b404) main_tv_pg_hdr_pane_g

0xe2d6,	// (0x00079ad2) main_tv_pg_hdr_pane_t1

0xe2e4,	// (0x00079ae0) main_tv_pg_hdr_pane_t2

0xe2f2,	// (0x00079aee) main_tv_pg_hdr_pane_t3

0xe302,	// (0x00079afe) main_tv_pg_hdr_pane_t4

0xe312,	// (0x00079b0e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007b41b) main_tv_pg_hdr_pane_t

0xe322,	// (0x00079b1e) single_mobtv_pg_channel_pane_ParamLimits

0xe322,	// (0x00079b1e) single_mobtv_pg_channel_pane

0xe334,	// (0x00079b30) single_mobtv_pg_channel_table_pane

0xe33d,	// (0x00079b39) single_mobtv_pg_channel_thumb_pane

0xe346,	// (0x00079b42) single_tv_pg_channel_pane_g1

0xe34f,	// (0x00079b4b) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007b426) single_tv_pg_channel_pane_g

0xcedb,	// (0x000786d7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcedb,	// (0x000786d7) bg_single_mobtv_pg_channel_thumb_pane

0xe358,	// (0x00079b54) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe358,	// (0x00079b54) single_mobtv_pg_channel_thumb_pane_g1

0xe366,	// (0x00079b62) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe366,	// (0x00079b62) single_mobtv_pg_channel_thumb_pane_g2

0xe372,	// (0x00079b6e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe372,	// (0x00079b6e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007b42b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007b42b) single_mobtv_pg_channel_thumb_pane_g

0xe37e,	// (0x00079b7a) single_mobtv_pg_channel_thumb_pane_t1

0xe38c,	// (0x00079b88) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007b432) single_mobtv_pg_channel_thumb_pane_t

0xcc6f,	// (0x0007846b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6f,	// (0x0007846b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007aed8) bg_single_mobtv_pg_channel_table_pane_g

0xe39a,	// (0x00079b96) single_mobtv_pg_channel_table_pane_t1

0xe3a8,	// (0x00079ba4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007b437) single_mobtv_pg_channel_table_pane_t

0x7740,	// (0x00072f3c) main_mobtv_info_pane_g1_ParamLimits

0x7740,	// (0x00072f3c) main_mobtv_info_pane_g1

0x775e,	// (0x00072f5a) main_mobtv_info_pane_t1_ParamLimits

0x775e,	// (0x00072f5a) main_mobtv_info_pane_t1

0x77d6,	// (0x00072fd2) main_mobtv_info_pane_t2_ParamLimits

0x77d6,	// (0x00072fd2) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007b441) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007b441) main_mobtv_info_pane_t

0x7865,	// (0x00073061) wait_bar_pane_cp05

0x7877,	// (0x00073073) main_mobtv_loading_pane_g1_ParamLimits

0x7877,	// (0x00073073) main_mobtv_loading_pane_g1

0x788a,	// (0x00073086) main_mobtv_loading_pane_g2_ParamLimits

0x788a,	// (0x00073086) main_mobtv_loading_pane_g2

0x7896,	// (0x00073092) main_mobtv_loading_pane_g3_ParamLimits

0x7896,	// (0x00073092) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007b448) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007b448) main_mobtv_loading_pane_g

0xe3b6,	// (0x00079bb2) main_mobtv_loading_pane_t1_ParamLimits

0xe3b6,	// (0x00079bb2) main_mobtv_loading_pane_t1

0xe3ce,	// (0x00079bca) main_mobtv_loading_pane_t2_ParamLimits

0xe3ce,	// (0x00079bca) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007b44f) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007b44f) main_mobtv_loading_pane_t

0x78a9,	// (0x000730a5) wait_bar_pane_cp06_ParamLimits

0x78a9,	// (0x000730a5) wait_bar_pane_cp06

0xe3f2,	// (0x00079bee) main_mobtv_programe_curr_pane_t1

0xe400,	// (0x00079bfc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007b454) main_mobtv_programe_curr_pane_t

0xe40e,	// (0x00079c0a) main_mobtv_programe_next_pane_t1

0xe41c,	// (0x00079c18) main_mobtv_programe_next_pane_t2

0xe42a,	// (0x00079c26) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007b459) main_mobtv_programe_next_pane_t

0x94ba,	// (0x00074cb6) bg_popup_mobtv_noti_window_pane

0xe438,	// (0x00079c34) popup_mobtv_noti_window_g1

0xe440,	// (0x00079c3c) popup_mobtv_noti_window_t1

0xe44e,	// (0x00079c4a) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007b460) popup_mobtv_noti_window_t

0xcc6f,	// (0x0007846b) bg_popup_mobtv_noti_window_pane_g1

0x9540,	// (0x00074d3c) sc_clock_pane

0x9540,	// (0x00074d3c) main_fs_bigclock_pane

0x6f06,	// (0x00072702) blid2_tripm_pane_t4_ParamLimits

0x6f06,	// (0x00072702) blid2_tripm_pane_t4

0x78b8,	// (0x000730b4) sc_clock_pane_g1_ParamLimits

0x78b8,	// (0x000730b4) sc_clock_pane_g1

0x78ca,	// (0x000730c6) sc_clock_pane_t1_ParamLimits

0x78ca,	// (0x000730c6) sc_clock_pane_t1

0x78ec,	// (0x000730e8) sc_clock_pane_t2_ParamLimits

0x78ec,	// (0x000730e8) sc_clock_pane_t2

0x7904,	// (0x00073100) sc_clock_pane_t3_ParamLimits

0x7904,	// (0x00073100) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007b465) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007b465) sc_clock_pane_t

0x8995,	// (0x00074191) main_fs_bigclock_indicator_pane_ParamLimits

0x8995,	// (0x00074191) main_fs_bigclock_indicator_pane

0x79a4,	// (0x000731a0) main_fs_bigclock_pane_g1_ParamLimits

0x79a4,	// (0x000731a0) main_fs_bigclock_pane_g1

0x89a1,	// (0x0007419d) main_fs_bigclock_pane_t1_ParamLimits

0x89a1,	// (0x0007419d) main_fs_bigclock_pane_t1

0x89b3,	// (0x000741af) main_fs_bigclock_pane_t2_ParamLimits

0x89b3,	// (0x000741af) main_fs_bigclock_pane_t2

0x89c7,	// (0x000741c3) main_fs_bigclock_pane_t3_ParamLimits

0x89c7,	// (0x000741c3) main_fs_bigclock_pane_t3

0x0002,

0xfe64,	// (0x0007b660) main_fs_bigclock_pane_t_ParamLimits

0xfe64,	// (0x0007b660) main_fs_bigclock_pane_t

0xec81,	// (0x0007a47d) main_fs_bigclock_indicator_pane_g1

0xe128,	// (0x00079924) ncim_query_content_pane_g2_ParamLimits

0xe128,	// (0x00079924) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007b3f2) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007b3f2) ncim_query_content_pane_g

0x791d,	// (0x00073119) sc_clock_pane_t4_ParamLimits

0x791d,	// (0x00073119) sc_clock_pane_t4

0x9532,	// (0x00074d2e) main_radioblah_pane

0xd65e,	// (0x00078e5a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd65e,	// (0x00078e5a) cell_call4_button_pane_t1_copy1

0x754b,	// (0x00072d47) main_ncimui_pane_t1_ParamLimits

0x754b,	// (0x00072d47) main_ncimui_pane_t1

0x7565,	// (0x00072d61) main_ncimui_pane_t2_ParamLimits

0x7565,	// (0x00072d61) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007b3eb) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007b3eb) main_ncimui_pane_t

0xe592,	// (0x00079d8e) main_radioblah_anim_pane_ParamLimits

0xe592,	// (0x00079d8e) main_radioblah_anim_pane

0xe5a3,	// (0x00079d9f) main_radioblah_info_pane_ParamLimits

0xe5a3,	// (0x00079d9f) main_radioblah_info_pane

0xe5b7,	// (0x00079db3) main_radioblah_pane_t1_ParamLimits

0xe5b7,	// (0x00079db3) main_radioblah_pane_t1

0xe5d3,	// (0x00079dcf) main_radioblah_pane_t2_ParamLimits

0xe5d3,	// (0x00079dcf) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007b486) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007b486) main_radioblah_pane_t

0x79fc,	// (0x000731f8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79fc,	// (0x000731f8) main_radioblah_rocker_ctrl_pane

0xe61b,	// (0x00079e17) main_radioblah_info_pane_t1_ParamLimits

0xe61b,	// (0x00079e17) main_radioblah_info_pane_t1

0x7a54,	// (0x00073250) main_radioblah_info_pane_t2_ParamLimits

0x7a54,	// (0x00073250) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007b48f) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007b48f) main_radioblah_info_pane_t

0xcc6f,	// (0x0007846b) main_radioblah_rocker_ctrl_pane_g1

0x7b04,	// (0x00073300) main_radioblah_rocker_ctrl_pane_g2

0x7b0c,	// (0x00073308) main_radioblah_rocker_ctrl_pane_g3

0x7b14,	// (0x00073310) main_radioblah_rocker_ctrl_pane_g4

0x7b1c,	// (0x00073318) main_radioblah_rocker_ctrl_pane_g5

0x7b24,	// (0x00073320) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007b498) main_radioblah_rocker_ctrl_pane_g

0x71d0,	// (0x000729cc) main_cset_text2_pane_t1_copy1_ParamLimits

0x9dd3,	// (0x000755cf) cam4_image_uncrop_qvga_pane

0x9e3a,	// (0x00075636) vid4_image_uncrop_qcif_pane

0x9fa3,	// (0x0007579f) cam6_image_uncrop_qvga_pane_ParamLimits

0x9fa3,	// (0x0007579f) cam6_image_uncrop_qvga_pane

0xde3d,	// (0x00079639) vid6_image_uncrop_qcif_pane_ParamLimits

0xde3d,	// (0x00079639) vid6_image_uncrop_qcif_pane

0x94ba,	// (0x00074cb6) bg_popup_preview_window_pane_cp03

0xe0da,	// (0x000798d6) list_cset_text2_pane

0xe0e2,	// (0x000798de) main_cset6_text2_pane_g1

0xe0ea,	// (0x000798e6) main_cset6_text2_pane_t1

0x7b2c,	// (0x00073328) list_cset_text2_pane_t1_ParamLimits

0x7b2c,	// (0x00073328) list_cset_text2_pane_t1

0x9532,	// (0x00074d2e) main_radioblah_pane_ParamLimits

0x7851,	// (0x0007304d) main_mobtv_info_pane_t3_ParamLimits

0x7851,	// (0x0007304d) main_mobtv_info_pane_t3

0x79ea,	// (0x000731e6) main_radioblah_pane_g1

0x7a24,	// (0x00073220) main_radioblah_info_pane_g1

0x7aa9,	// (0x000732a5) main_radioblah_info_pane_t3_ParamLimits

0x7aa9,	// (0x000732a5) main_radioblah_info_pane_t3

0x2388,	// (0x0006db84) highlight_cell_cale_month_pane_ParamLimits

0x2388,	// (0x0006db84) highlight_cell_cale_month_pane

0x9540,	// (0x00074d3c) main_phob_fisheye_pane

0xcfd7,	// (0x000787d3) scroll_pane_cp0031_ParamLimits

0xcfd7,	// (0x000787d3) scroll_pane_cp0031

0xdf4b,	// (0x00079747) wait_bar_pane_cp08_ParamLimits

0x7255,	// (0x00072a51) cset_list_set_pane_copy1_ParamLimits

0xe655,	// (0x00079e51) highlight_cell_cale_month_pane_g1

0x7b45,	// (0x00073341) highlight_cell_cale_month_pane_t1

0xdbaa,	// (0x000793a6) list_gen_pane_cp01

0xd825,	// (0x00079021) scroll_pane_01

0x7b53,	// (0x0007334f) list_single_double_fisheye_pane

0x7b5c,	// (0x00073358) list_double_fisheye_pane_g1_ParamLimits

0x7b5c,	// (0x00073358) list_double_fisheye_pane_g1

0x7b68,	// (0x00073364) list_double_fisheye_pane_g2_ParamLimits

0x7b68,	// (0x00073364) list_double_fisheye_pane_g2

0x7b7c,	// (0x00073378) list_double_fisheye_pane_g3_ParamLimits

0x7b7c,	// (0x00073378) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007b4a5) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007b4a5) list_double_fisheye_pane_g

0x7ba5,	// (0x000733a1) list_double_fisheye_pane_t1_ParamLimits

0x7ba5,	// (0x000733a1) list_double_fisheye_pane_t1

0x7bc0,	// (0x000733bc) list_double_fisheye_pane_t2_ParamLimits

0x7bc0,	// (0x000733bc) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007b4b0) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007b4b0) list_double_fisheye_pane_t

0x9540,	// (0x00074d3c) main_call5_pane

0x7948,	// (0x00073144) sc_swipe_pane_ParamLimits

0x7948,	// (0x00073144) sc_swipe_pane

0x7bf5,	// (0x000733f1) call5_image_pane_ParamLimits

0x7bf5,	// (0x000733f1) call5_image_pane

0x7c12,	// (0x0007340e) call5_swipe_1_pane_ParamLimits

0x7c12,	// (0x0007340e) call5_swipe_1_pane

0x7c25,	// (0x00073421) call5_swipe_2_pane_ParamLimits

0x7c25,	// (0x00073421) call5_swipe_2_pane

0x7c50,	// (0x0007344c) popup_call5_audio_first_window_ParamLimits

0x7c50,	// (0x0007344c) popup_call5_audio_first_window

0xcedb,	// (0x000786d7) call5_swipe_1_pane_g1_ParamLimits

0xcedb,	// (0x000786d7) call5_swipe_1_pane_g1

0xe65d,	// (0x00079e59) call5_swipe_1_pane_g2_ParamLimits

0xe65d,	// (0x00079e59) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007b4b5) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007b4b5) call5_swipe_1_pane_g

0xe669,	// (0x00079e65) call5_swipe_1_pane_t1_ParamLimits

0xe669,	// (0x00079e65) call5_swipe_1_pane_t1

0xcedb,	// (0x000786d7) call5_swipe_2_pane_g1_ParamLimits

0xcedb,	// (0x000786d7) call5_swipe_2_pane_g1

0xe67e,	// (0x00079e7a) call5_swipe_2_pane_g2_ParamLimits

0xe67e,	// (0x00079e7a) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007b4ba) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007b4ba) call5_swipe_2_pane_g

0xe68a,	// (0x00079e86) call5_swipe_2_pane_t1_ParamLimits

0xe68a,	// (0x00079e86) call5_swipe_2_pane_t1

0xe69f,	// (0x00079e9b) sc_swipe_pane_g1_ParamLimits

0xe69f,	// (0x00079e9b) sc_swipe_pane_g1

0xe6ac,	// (0x00079ea8) sc_swipe_pane_g2_ParamLimits

0xe6ac,	// (0x00079ea8) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007b4bf) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007b4bf) sc_swipe_pane_g

0xe6b8,	// (0x00079eb4) sc_swipe_pane_t1_ParamLimits

0xe6b8,	// (0x00079eb4) sc_swipe_pane_t1

0x9540,	// (0x00074d3c) main_cmail_launcher_pane

0x7c61,	// (0x0007345d) aid_size_cell_cmail_l_ParamLimits

0x7c61,	// (0x0007345d) aid_size_cell_cmail_l

0x7c7b,	// (0x00073477) grid_cmail_l_pane_ParamLimits

0x7c7b,	// (0x00073477) grid_cmail_l_pane

0x7c96,	// (0x00073492) cell_cmail_l_pane_ParamLimits

0x7c96,	// (0x00073492) cell_cmail_l_pane

0x7cbc,	// (0x000734b8) cell_cmail_l_pane_g1_ParamLimits

0x7cbc,	// (0x000734b8) cell_cmail_l_pane_g1

0x7cc8,	// (0x000734c4) cell_cmail_l_pane_t1_ParamLimits

0x7cc8,	// (0x000734c4) cell_cmail_l_pane_t1

0xe6cd,	// (0x00079ec9) cell_cmail_l_pane_t2_ParamLimits

0xe6cd,	// (0x00079ec9) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007b4c4) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007b4c4) cell_cmail_l_pane_t

0xa5b6,	// (0x00075db2) grid_highlight_pane_cp018_ParamLimits

0xa5b6,	// (0x00075db2) grid_highlight_pane_cp018

0x02ec,	// (0x0006bae8) main2_pane_ParamLimits

0x02ec,	// (0x0006bae8) main2_pane

0xa425,	// (0x00075c21) popup_sp_fs_action_menu_bg_pane_g1

0xa42d,	// (0x00075c29) popup_sp_fs_action_menu_bg_pane_g2

0xa435,	// (0x00075c31) popup_sp_fs_action_menu_bg_pane_g3

0xa43d,	// (0x00075c39) popup_sp_fs_action_menu_bg_pane_g4

0xa445,	// (0x00075c41) popup_sp_fs_action_menu_bg_pane_g5

0xa44d,	// (0x00075c49) popup_sp_fs_action_menu_bg_pane_g6

0xa455,	// (0x00075c51) popup_sp_fs_action_menu_bg_pane_g7

0xa45d,	// (0x00075c59) popup_sp_fs_action_menu_bg_pane_g8

0xa465,	// (0x00075c61) popup_sp_fs_action_menu_bg_pane_g9

0xa46d,	// (0x00075c69) popup_sp_fs_action_menu_bg_pane_g10

0xa46d,	// (0x00075c69) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0007a982) popup_sp_fs_action_menu_bg_pane_g

0x12f4,	// (0x0006caf0) list_medium_line_x2_t3_g3_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x2_t3_g3_g1

0x1300,	// (0x0006cafc) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1300,	// (0x0006cafc) list_medium_line_x2_t3_g3_g2

0x130c,	// (0x0006cb08) list_medium_line_x2_t3_g3_g3_ParamLimits

0x130c,	// (0x0006cb08) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007aa34) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007aa34) list_medium_line_x2_t3_g3_g

0x1318,	// (0x0006cb14) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1318,	// (0x0006cb14) list_medium_line_x2_t3_g3_t1

0x132d,	// (0x0006cb29) list_medium_line_x2_t3_g3_t2_ParamLimits

0x132d,	// (0x0006cb29) list_medium_line_x2_t3_g3_t2

0x1341,	// (0x0006cb3d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1341,	// (0x0006cb3d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007aa3b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007aa3b) list_medium_line_x2_t3_g3_t

0x12f4,	// (0x0006caf0) list_medium_line_x2_t3_g2_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x2_t3_g2_g1

0x130c,	// (0x0006cb08) list_medium_line_x2_t3_g2_g2_ParamLimits

0x130c,	// (0x0006cb08) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007aa42) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007aa42) list_medium_line_x2_t3_g2_g

0x1356,	// (0x0006cb52) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1356,	// (0x0006cb52) list_medium_line_x2_t3_g2_t1

0x136c,	// (0x0006cb68) list_medium_line_x2_t3_g2_t2_ParamLimits

0x136c,	// (0x0006cb68) list_medium_line_x2_t3_g2_t2

0x137e,	// (0x0006cb7a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x137e,	// (0x0006cb7a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007aa47) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007aa47) list_medium_line_x2_t3_g2_t

0x12f4,	// (0x0006caf0) list_medium_line_x2_t4_g4_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x2_t4_g4_g1

0x139b,	// (0x0006cb97) list_medium_line_x2_t4_g4_g2_ParamLimits

0x139b,	// (0x0006cb97) list_medium_line_x2_t4_g4_g2

0x1300,	// (0x0006cafc) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1300,	// (0x0006cafc) list_medium_line_x2_t4_g4_g3

0x13a7,	// (0x0006cba3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x13a7,	// (0x0006cba3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007aa4e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007aa4e) list_medium_line_x2_t4_g4_g

0x13b3,	// (0x0006cbaf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x13b3,	// (0x0006cbaf) list_medium_line_x2_t4_g4_t1

0x13cd,	// (0x0006cbc9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x13cd,	// (0x0006cbc9) list_medium_line_x2_t4_g4_t2

0x13e3,	// (0x0006cbdf) list_medium_line_x2_t4_g4_t3_ParamLimits

0x13e3,	// (0x0006cbdf) list_medium_line_x2_t4_g4_t3

0x13f8,	// (0x0006cbf4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13f8,	// (0x0006cbf4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007aa57) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007aa57) list_medium_line_x2_t4_g4_t

0x12f4,	// (0x0006caf0) list_medium_line_x2_t2_g4_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x2_t2_g4_g1

0x139b,	// (0x0006cb97) list_medium_line_x2_t2_g4_g2_ParamLimits

0x139b,	// (0x0006cb97) list_medium_line_x2_t2_g4_g2

0x1300,	// (0x0006cafc) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1300,	// (0x0006cafc) list_medium_line_x2_t2_g4_g3

0x130c,	// (0x0006cb08) list_medium_line_x2_t2_g4_g4_ParamLimits

0x130c,	// (0x0006cb08) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007aabe) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007aabe) list_medium_line_x2_t2_g4_g

0x23ae,	// (0x0006dbaa) list_medium_line_x2_t2_g4_t1_ParamLimits

0x23ae,	// (0x0006dbaa) list_medium_line_x2_t2_g4_t1

0x1341,	// (0x0006cb3d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1341,	// (0x0006cb3d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007aac7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007aac7) list_medium_line_x2_t2_g4_t

0x12f4,	// (0x0006caf0) list_medium_line_x2_t2_g3_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x2_t2_g3_g1

0x1300,	// (0x0006cafc) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1300,	// (0x0006cafc) list_medium_line_x2_t2_g3_g2

0x130c,	// (0x0006cb08) list_medium_line_x2_t2_g3_g3_ParamLimits

0x130c,	// (0x0006cb08) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007aa34) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007aa34) list_medium_line_x2_t2_g3_g

0x23c3,	// (0x0006dbbf) list_medium_line_x2_t2_g3_t1_ParamLimits

0x23c3,	// (0x0006dbbf) list_medium_line_x2_t2_g3_t1

0x1341,	// (0x0006cb3d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1341,	// (0x0006cb3d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007aacc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007aacc) list_medium_line_x2_t2_g3_t

0x2500,	// (0x0006dcfc) main_sp_fs_list_pane_ParamLimits

0x2500,	// (0x0006dcfc) main_sp_fs_list_pane

0xc94c,	// (0x00078148) sp_fs_scroll_pane_ParamLimits

0xc94c,	// (0x00078148) sp_fs_scroll_pane

0x250c,	// (0x0006dd08) list_medium_line_x2_t3_t1

0x251c,	// (0x0006dd18) list_medium_line_x2_t3_t2

0x252a,	// (0x0006dd26) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007ab17) list_medium_line_x2_t3_t

0x2538,	// (0x0006dd34) list_medium_line_x3_t4_t1

0x2548,	// (0x0006dd44) list_medium_line_x3_t4_t2

0x2556,	// (0x0006dd52) list_medium_line_x3_t4_t3

0x252a,	// (0x0006dd26) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007ab1e) list_medium_line_x3_t4_t

0x2564,	// (0x0006dd60) list_medium_line_x4_t5_t1

0x2574,	// (0x0006dd70) list_medium_line_x4_t5_t2

0x2556,	// (0x0006dd52) list_medium_line_x4_t5_t3

0x2582,	// (0x0006dd7e) list_medium_line_x4_t5_t4

0x252a,	// (0x0006dd26) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007ab27) list_medium_line_x4_t5_t

0x12f4,	// (0x0006caf0) list_medium_line_t4_g4_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_t4_g4_g1

0x2590,	// (0x0006dd8c) list_medium_line_t4_g4_g2_ParamLimits

0x2590,	// (0x0006dd8c) list_medium_line_t4_g4_g2

0x259c,	// (0x0006dd98) list_medium_line_t4_g4_g3_ParamLimits

0x259c,	// (0x0006dd98) list_medium_line_t4_g4_g3

0x130c,	// (0x0006cb08) list_medium_line_t4_g4_g4_ParamLimits

0x130c,	// (0x0006cb08) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007ab32) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007ab32) list_medium_line_t4_g4_g

0x25a8,	// (0x0006dda4) list_medium_line_t4_g4_t1_ParamLimits

0x25a8,	// (0x0006dda4) list_medium_line_t4_g4_t1

0x25bd,	// (0x0006ddb9) list_medium_line_t4_g4_t2_ParamLimits

0x25bd,	// (0x0006ddb9) list_medium_line_t4_g4_t2

0x25d2,	// (0x0006ddce) list_medium_line_t4_g4_t3_ParamLimits

0x25d2,	// (0x0006ddce) list_medium_line_t4_g4_t3

0x1341,	// (0x0006cb3d) list_medium_line_t4_g4_t4_ParamLimits

0x1341,	// (0x0006cb3d) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007ab3b) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007ab3b) list_medium_line_t4_g4_t

0x269a,	// (0x0006de96) chi_dic_find_pane_g1

0x3700,	// (0x0006eefc) main_tport_pane

0x656b,	// (0x00071d67) list_medium_line_plain_t1

0x661d,	// (0x00071e19) list_medium_line_t2_g2_g1_ParamLimits

0x661d,	// (0x00071e19) list_medium_line_t2_g2_g1

0x6629,	// (0x00071e25) list_medium_line_t2_g2_g2_ParamLimits

0x6629,	// (0x00071e25) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007b1fc) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007b1fc) list_medium_line_t2_g2_g

0x6635,	// (0x00071e31) list_medium_line_t2_g2_t1_ParamLimits

0x6635,	// (0x00071e31) list_medium_line_t2_g2_t1

0x664c,	// (0x00071e48) list_medium_line_t2_g2_t2_ParamLimits

0x664c,	// (0x00071e48) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007b201) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007b201) list_medium_line_t2_g2_t

0xa6f5,	// (0x00075ef1) aid_sp_fs_list_icon_a_sm

0xa6fd,	// (0x00075ef9) aid_sp_fs_list_icon_d

0xa705,	// (0x00075f01) aid_sp_fs_text_primary

0xa70e,	// (0x00075f0a) aid_sp_fs_text_secondary

0x6cb3,	// (0x000724af) list_medium_line

0x6cb3,	// (0x000724af) list_medium_line_g2

0x6cb3,	// (0x000724af) list_medium_line_g3

0x6cb3,	// (0x000724af) list_medium_line_plain

0x6cb3,	// (0x000724af) list_medium_line_plain_t2

0x6cb3,	// (0x000724af) list_medium_line_plain_t3

0x6cb3,	// (0x000724af) list_medium_line_right_icon

0x6cb3,	// (0x000724af) list_medium_line_right_iconx2

0x6cb3,	// (0x000724af) list_medium_line_t2

0x6cb3,	// (0x000724af) list_medium_line_t2_g2

0x6cb3,	// (0x000724af) list_medium_line_t2_g3

0x6cb3,	// (0x000724af) list_medium_line_t2_right_icon

0x6cb3,	// (0x000724af) list_medium_line_t2_right_iconx2

0x6cb3,	// (0x000724af) list_medium_line_t3

0x6cb3,	// (0x000724af) list_medium_line_t3_g2

0x6cb3,	// (0x000724af) list_medium_line_t3_g3

0x6cb3,	// (0x000724af) list_medium_line_t3_right_iconx2

0x6cbc,	// (0x000724b8) list_medium_line_t4_g4

0x6cc5,	// (0x000724c1) list_medium_line_x2

0x6cc5,	// (0x000724c1) list_medium_line_x2_t2_g2

0x6cc5,	// (0x000724c1) list_medium_line_x2_t2_g3

0x6cc5,	// (0x000724c1) list_medium_line_x2_t2_g4

0x6cc5,	// (0x000724c1) list_medium_line_x2_t3

0x6cc5,	// (0x000724c1) list_medium_line_x2_t3_g2

0x6cc5,	// (0x000724c1) list_medium_line_x2_t3_g3

0x6cc5,	// (0x000724c1) list_medium_line_x2_t3_g4

0x6cc5,	// (0x000724c1) list_medium_line_x2_t4_g2

0x6cc5,	// (0x000724c1) list_medium_line_x2_t4_g4

0x6cce,	// (0x000724ca) list_medium_line_x3

0x6cce,	// (0x000724ca) list_medium_line_x3_t4

0x6cce,	// (0x000724ca) list_medium_line_x3_t4_g4

0x6cbc,	// (0x000724b8) list_medium_line_x4_t4

0x6cbc,	// (0x000724b8) list_medium_line_x4_t4_g7

0x6cbc,	// (0x000724b8) list_medium_line_x4_t5

0x6cd7,	// (0x000724d3) list_single_fs_dyc_pane_ParamLimits

0x6cd7,	// (0x000724d3) list_single_fs_dyc_pane

0x12f4,	// (0x0006caf0) list_medium_line_x4_t4_g7_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x4_t4_g7_g1

0x744e,	// (0x00072c4a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x744e,	// (0x00072c4a) list_medium_line_x4_t4_g7_g2

0x745a,	// (0x00072c56) list_medium_line_x4_t4_g7_g3_ParamLimits

0x745a,	// (0x00072c56) list_medium_line_x4_t4_g7_g3

0x7469,	// (0x00072c65) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7469,	// (0x00072c65) list_medium_line_x4_t4_g7_g4

0x7475,	// (0x00072c71) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7475,	// (0x00072c71) list_medium_line_x4_t4_g7_g5

0x7484,	// (0x00072c80) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7484,	// (0x00072c80) list_medium_line_x4_t4_g7_g6

0x7493,	// (0x00072c8f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7493,	// (0x00072c8f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007b3cc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007b3cc) list_medium_line_x4_t4_g7_g

0x749f,	// (0x00072c9b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x749f,	// (0x00072c9b) list_medium_line_x4_t4_g7_t1

0x74b4,	// (0x00072cb0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x74b4,	// (0x00072cb0) list_medium_line_x4_t4_g7_t2

0x74c9,	// (0x00072cc5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x74c9,	// (0x00072cc5) list_medium_line_x4_t4_g7_t3

0x74de,	// (0x00072cda) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74de,	// (0x00072cda) list_medium_line_x4_t4_g7_t4

0x74f0,	// (0x00072cec) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74f0,	// (0x00072cec) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007b3db) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007b3db) list_medium_line_x4_t4_g7_t

0x7502,	// (0x00072cfe) list_single_dyc_row_pane_ParamLimits

0x7502,	// (0x00072cfe) list_single_dyc_row_pane

0x7be2,	// (0x000733de) call5_gesture_pane_ParamLimits

0x7be2,	// (0x000733de) call5_gesture_pane

0x7c38,	// (0x00073434) call5_windows_pane_ParamLimits

0x7c38,	// (0x00073434) call5_windows_pane

0x7cde,	// (0x000734da) call5_swipe_1_pane_cp_ParamLimits

0x7cde,	// (0x000734da) call5_swipe_1_pane_cp

0x7cea,	// (0x000734e6) call5_swipe_2_pane_cp_ParamLimits

0x7cea,	// (0x000734e6) call5_swipe_2_pane_cp

0xb455,	// (0x00076c51) call5_image_pane_cp

0x7cf6,	// (0x000734f2) popup_call5_audio_first_window_cp_ParamLimits

0x7cf6,	// (0x000734f2) popup_call5_audio_first_window_cp

0xe69f,	// (0x00079e9b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe69f,	// (0x00079e9b) call5_swipe_1_pane_g1_cp

0xe6df,	// (0x00079edb) call5_swipe_1_pane_g2_cp

0xe6b8,	// (0x00079eb4) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b8,	// (0x00079eb4) call5_swipe_1_pane_t1_cp

0xe69f,	// (0x00079e9b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe69f,	// (0x00079e9b) call5_swipe_2_pane_g1_cp

0xe6e7,	// (0x00079ee3) call5_swipe_2_pane_g2_cp

0xe6ef,	// (0x00079eeb) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6ef,	// (0x00079eeb) call5_swipe_2_pane_t1_cp

0xa5b6,	// (0x00075db2) main_sp_fs_email_pane

0xe704,	// (0x00079f00) main_sp_fs_listscroll_pane_te

0x7d04,	// (0x00073500) popup_sp_fs_action_menu_pane_ParamLimits

0x7d04,	// (0x00073500) popup_sp_fs_action_menu_pane

0xcc6f,	// (0x0007846b) bg_sp_fs_ctrlbar_pane_g1

0xd26e,	// (0x00078a6a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd280,	// (0x00078a7c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd277,	// (0x00078a73) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6f,	// (0x0007846b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007b4c9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca54,	// (0x00078250) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca54,	// (0x00078250) bg_sp_fs_ctrlbar_ddmenu_pane

0xe70d,	// (0x00079f09) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe70d,	// (0x00079f09) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe719,	// (0x00079f15) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe719,	// (0x00079f15) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007b4d2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007b4d2) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe725,	// (0x00079f21) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe725,	// (0x00079f21) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d48,	// (0x00073544) list_medium_line_t2_right_icon_g1

0x7d50,	// (0x0007354c) list_medium_line_t2_right_icon_t1

0x7d60,	// (0x0007355c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007b4d7) list_medium_line_t2_right_icon_t

0xc85b,	// (0x00078057) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc85b,	// (0x00078057) bg_sp_fs_ctrlbar_pane

0x7dba,	// (0x000735b6) main_sp_fs_ctrlbar_button_pane_cp01

0x7dc4,	// (0x000735c0) main_sp_fs_ctrlbar_ddmenu_pane

0xe777,	// (0x00079f73) main_sp_fs_ctrlbar_pane_g1

0xe783,	// (0x00079f7f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007b4dc) main_sp_fs_ctrlbar_pane_g

0xe78f,	// (0x00079f8b) main_sp_fs_ctrlbar_pane_t1

0x7dce,	// (0x000735ca) main_sp_fs_ctrlbar_pane

0x7df2,	// (0x000735ee) main_sp_fs_listscroll_pane_te_cp01

0x7e12,	// (0x0007360e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e12,	// (0x0007360e) popup_sp_fs_action_menu_pane_cp01

0xa5b6,	// (0x00075db2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa5b6,	// (0x00075db2) bg_sp_fs_highlight_list_pane_cp01

0xa717,	// (0x00075f13) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa717,	// (0x00075f13) sp_fs_action_menu_list_gene_pane_g1

0xe7bf,	// (0x00079fbb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7bf,	// (0x00079fbb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007b4e6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007b4e6) sp_fs_action_menu_list_gene_pane_g

0xa726,	// (0x00075f22) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa726,	// (0x00075f22) sp_fs_action_menu_list_gene_pane_t1

0xa73e,	// (0x00075f3a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa73e,	// (0x00075f3a) sp_fs_action_menu_list_gene_pane

0xe7cc,	// (0x00079fc8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7cc,	// (0x00079fc8) popup_sp_fs_action_menu_bg_pane

0xa75d,	// (0x00075f59) sp_fs_action_menu_list_pane_ParamLimits

0xa75d,	// (0x00075f59) sp_fs_action_menu_list_pane

0x7e42,	// (0x0007363e) sp_fs_scroll_pane_cp01_ParamLimits

0x7e42,	// (0x0007363e) sp_fs_scroll_pane_cp01

0x7e68,	// (0x00073664) list_medium_line_plain_t2_t1

0x7e78,	// (0x00073674) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007b4eb) list_medium_line_plain_t2_t

0x7e88,	// (0x00073684) list_medium_line_plain_t3_t1

0x7e98,	// (0x00073694) list_medium_line_plain_t3_t2

0x7ea6,	// (0x000736a2) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007b4f0) list_medium_line_plain_t3_t

0x12f4,	// (0x0006caf0) list_medium_line_x2_t2_g2_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x2_t2_g2_g1

0x130c,	// (0x0006cb08) list_medium_line_x2_t2_g2_g2_ParamLimits

0x130c,	// (0x0006cb08) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007aa42) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007aa42) list_medium_line_x2_t2_g2_g

0x25a8,	// (0x0006dda4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x25a8,	// (0x0006dda4) list_medium_line_x2_t2_g2_t1

0x1341,	// (0x0006cb3d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1341,	// (0x0006cb3d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007b4f7) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007b4f7) list_medium_line_x2_t2_g2_t

0x12f4,	// (0x0006caf0) list_medium_line_x2_t4_g2_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x2_t4_g2_g1

0x7eb4,	// (0x000736b0) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7eb4,	// (0x000736b0) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007b4fc) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007b4fc) list_medium_line_x2_t4_g2_g

0x7ec5,	// (0x000736c1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ec5,	// (0x000736c1) list_medium_line_x2_t4_g2_t1

0x7edc,	// (0x000736d8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7edc,	// (0x000736d8) list_medium_line_x2_t4_g2_t2

0x7ef1,	// (0x000736ed) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ef1,	// (0x000736ed) list_medium_line_x2_t4_g2_t3

0x1341,	// (0x0006cb3d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1341,	// (0x0006cb3d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007b501) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007b501) list_medium_line_x2_t4_g2_t

0x7f03,	// (0x000736ff) list_medium_line_t3_right_iconx2_g1

0x7d48,	// (0x00073544) list_medium_line_t3_right_iconx2_g2

0x7f0b,	// (0x00073707) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007b50a) list_medium_line_t3_right_iconx2_g

0x7f15,	// (0x00073711) list_medium_line_t3_right_iconx2_t1

0x7f25,	// (0x00073721) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007b511) list_medium_line_t3_right_iconx2_t

0x12f4,	// (0x0006caf0) list_medium_line_x3_t4_g4_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x3_t4_g4_g1

0x1300,	// (0x0006cafc) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1300,	// (0x0006cafc) list_medium_line_x3_t4_g4_g2

0x2590,	// (0x0006dd8c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2590,	// (0x0006dd8c) list_medium_line_x3_t4_g4_g3

0x7f33,	// (0x0007372f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f33,	// (0x0007372f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007b516) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007b516) list_medium_line_x3_t4_g4_g

0x7f3f,	// (0x0007373b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f3f,	// (0x0007373b) list_medium_line_x3_t4_g4_t1

0x7f56,	// (0x00073752) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f56,	// (0x00073752) list_medium_line_x3_t4_g4_t2

0x25bd,	// (0x0006ddb9) list_medium_line_x3_t4_g4_t3_ParamLimits

0x25bd,	// (0x0006ddb9) list_medium_line_x3_t4_g4_t3

0x7f71,	// (0x0007376d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f71,	// (0x0007376d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007b51f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007b51f) list_medium_line_x3_t4_g4_t

0x7f8e,	// (0x0007378a) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f8e,	// (0x0007378a) list_single_dyc_row_text_pane_t1

0x7fd7,	// (0x000737d3) list_single_dyc_row_text_pane_t2_ParamLimits

0x7fd7,	// (0x000737d3) list_single_dyc_row_text_pane_t2

0xa77d,	// (0x00075f79) list_single_dyc_row_text_pane_t3_ParamLimits

0xa77d,	// (0x00075f79) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007b528) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007b528) list_single_dyc_row_text_pane_t

0xa7a1,	// (0x00075f9d) list_single_dyc_row_pane_g1_ParamLimits

0xa7a1,	// (0x00075f9d) list_single_dyc_row_pane_g1

0xa7ad,	// (0x00075fa9) list_single_dyc_row_pane_g2_ParamLimits

0xa7ad,	// (0x00075fa9) list_single_dyc_row_pane_g2

0xa7b9,	// (0x00075fb5) list_single_dyc_row_pane_g3_ParamLimits

0xa7b9,	// (0x00075fb5) list_single_dyc_row_pane_g3

0xa7c5,	// (0x00075fc1) list_single_dyc_row_pane_g4_ParamLimits

0xa7c5,	// (0x00075fc1) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007b535) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007b535) list_single_dyc_row_pane_g

0xa7d1,	// (0x00075fcd) list_single_dyc_row_text_pane_ParamLimits

0xa7d1,	// (0x00075fcd) list_single_dyc_row_text_pane

0x94ba,	// (0x00074cb6) bg_sp_fs_scroll_pane

0xe7da,	// (0x00079fd6) thumb_sp_fs_scroll_pane

0x661d,	// (0x00071e19) list_medium_line_g1_ParamLimits

0x661d,	// (0x00071e19) list_medium_line_g1

0x810c,	// (0x00073908) list_medium_line_t1_ParamLimits

0x810c,	// (0x00073908) list_medium_line_t1

0x12f4,	// (0x0006caf0) list_medium_line_x2_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x2_g1

0x1300,	// (0x0006cafc) list_medium_line_x2_g2_ParamLimits

0x1300,	// (0x0006cafc) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007b53e) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007b53e) list_medium_line_x2_g

0xa7f0,	// (0x00075fec) list_medium_line_x2_t1_ParamLimits

0xa7f0,	// (0x00075fec) list_medium_line_x2_t1

0x12f4,	// (0x0006caf0) list_medium_line_x3_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x3_g1

0x1300,	// (0x0006cafc) list_medium_line_x3_g2_ParamLimits

0x1300,	// (0x0006cafc) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007b53e) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007b53e) list_medium_line_x3_g

0xa7f0,	// (0x00075fec) list_medium_line_x3_t1_ParamLimits

0xa7f0,	// (0x00075fec) list_medium_line_x3_t1

0xe7e3,	// (0x00079fdf) thumb_sp_fs_scroll_pane_g1

0xe7ec,	// (0x00079fe8) thumb_sp_fs_scroll_pane_g2

0xe7f5,	// (0x00079ff1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007b543) thumb_sp_fs_scroll_pane_g

0xe7e3,	// (0x00079fdf) bg_sp_fs_scroll_pane_g1

0xe7ec,	// (0x00079fe8) bg_sp_fs_scroll_pane_g2

0xe7f5,	// (0x00079ff1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007b543) bg_sp_fs_scroll_pane_g

0x12f4,	// (0x0006caf0) list_medium_line_x2_t3_g4_g1_ParamLimits

0x12f4,	// (0x0006caf0) list_medium_line_x2_t3_g4_g1

0x139b,	// (0x0006cb97) list_medium_line_x2_t3_g4_g2_ParamLimits

0x139b,	// (0x0006cb97) list_medium_line_x2_t3_g4_g2

0x1300,	// (0x0006cafc) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1300,	// (0x0006cafc) list_medium_line_x2_t3_g4_g3

0x130c,	// (0x0006cb08) list_medium_line_x2_t3_g4_g4_ParamLimits

0x130c,	// (0x0006cb08) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007aabe) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007aabe) list_medium_line_x2_t3_g4_g

0x8121,	// (0x0007391d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8121,	// (0x0007391d) list_medium_line_x2_t3_g4_t1

0x813b,	// (0x00073937) list_medium_line_x2_t3_g4_t2_ParamLimits

0x813b,	// (0x00073937) list_medium_line_x2_t3_g4_t2

0x1341,	// (0x0006cb3d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1341,	// (0x0006cb3d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007b54a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007b54a) list_medium_line_x2_t3_g4_t

0x661d,	// (0x00071e19) list_medium_line_g2_g1_ParamLimits

0x661d,	// (0x00071e19) list_medium_line_g2_g1

0x6629,	// (0x00071e25) list_medium_line_g2_g2_ParamLimits

0x6629,	// (0x00071e25) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007b1fc) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007b1fc) list_medium_line_g2_g

0x8155,	// (0x00073951) list_medium_line_g2_t1_ParamLimits

0x8155,	// (0x00073951) list_medium_line_g2_t1

0x661d,	// (0x00071e19) list_medium_line_t3_g2_g1_ParamLimits

0x661d,	// (0x00071e19) list_medium_line_t3_g2_g1

0x6629,	// (0x00071e25) list_medium_line_t3_g2_g2_ParamLimits

0x6629,	// (0x00071e25) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007b1fc) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007b1fc) list_medium_line_t3_g2_g

0x816a,	// (0x00073966) list_medium_line_t3_g2_t1_ParamLimits

0x816a,	// (0x00073966) list_medium_line_t3_g2_t1

0x8181,	// (0x0007397d) list_medium_line_t3_g2_t2_ParamLimits

0x8181,	// (0x0007397d) list_medium_line_t3_g2_t2

0x8196,	// (0x00073992) list_medium_line_t3_g2_t3_ParamLimits

0x8196,	// (0x00073992) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007b551) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007b551) list_medium_line_t3_g2_t

0x7d48,	// (0x00073544) list_medium_line_right_icon_g1

0x81af,	// (0x000739ab) list_medium_line_right_icon_t1

0x661d,	// (0x00071e19) list_medium_line_t2_g1_ParamLimits

0x661d,	// (0x00071e19) list_medium_line_t2_g1

0x81bd,	// (0x000739b9) list_medium_line_t2_t1_ParamLimits

0x81bd,	// (0x000739b9) list_medium_line_t2_t1

0x81d7,	// (0x000739d3) list_medium_line_t2_t2_ParamLimits

0x81d7,	// (0x000739d3) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007b558) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007b558) list_medium_line_t2_t

0x661d,	// (0x00071e19) list_medium_line_t3_g1_ParamLimits

0x661d,	// (0x00071e19) list_medium_line_t3_g1

0x81f0,	// (0x000739ec) list_medium_line_t3_t1_ParamLimits

0x81f0,	// (0x000739ec) list_medium_line_t3_t1

0x8207,	// (0x00073a03) list_medium_line_t3_t2_ParamLimits

0x8207,	// (0x00073a03) list_medium_line_t3_t2

0x821c,	// (0x00073a18) list_medium_line_t3_t3_ParamLimits

0x821c,	// (0x00073a18) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007b55d) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007b55d) list_medium_line_t3_t

0x661d,	// (0x00071e19) list_medium_line_g3_g1_ParamLimits

0x661d,	// (0x00071e19) list_medium_line_g3_g1

0x822e,	// (0x00073a2a) list_medium_line_g3_g2_ParamLimits

0x822e,	// (0x00073a2a) list_medium_line_g3_g2

0x6629,	// (0x00071e25) list_medium_line_g3_g3_ParamLimits

0x6629,	// (0x00071e25) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007b564) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007b564) list_medium_line_g3_g

0x823a,	// (0x00073a36) list_medium_line_g3_t1_ParamLimits

0x823a,	// (0x00073a36) list_medium_line_g3_t1

0x661d,	// (0x00071e19) list_medium_line_t2_g3_g1_ParamLimits

0x661d,	// (0x00071e19) list_medium_line_t2_g3_g1

0x822e,	// (0x00073a2a) list_medium_line_t2_g3_g2_ParamLimits

0x822e,	// (0x00073a2a) list_medium_line_t2_g3_g2

0x6629,	// (0x00071e25) list_medium_line_t2_g3_g3_ParamLimits

0x6629,	// (0x00071e25) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007b564) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007b564) list_medium_line_t2_g3_g

0x824f,	// (0x00073a4b) list_medium_line_t2_g3_t1_ParamLimits

0x824f,	// (0x00073a4b) list_medium_line_t2_g3_t1

0x8269,	// (0x00073a65) list_medium_line_t2_g3_t2_ParamLimits

0x8269,	// (0x00073a65) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007b56b) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007b56b) list_medium_line_t2_g3_t

0x661d,	// (0x00071e19) list_medium_line_t3_g3_g1_ParamLimits

0x661d,	// (0x00071e19) list_medium_line_t3_g3_g1

0x822e,	// (0x00073a2a) list_medium_line_t3_g3_g2_ParamLimits

0x822e,	// (0x00073a2a) list_medium_line_t3_g3_g2

0x6629,	// (0x00071e25) list_medium_line_t3_g3_g3_ParamLimits

0x6629,	// (0x00071e25) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007b564) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007b564) list_medium_line_t3_g3_g

0x8284,	// (0x00073a80) list_medium_line_t3_g3_t1_ParamLimits

0x8284,	// (0x00073a80) list_medium_line_t3_g3_t1

0x8298,	// (0x00073a94) list_medium_line_t3_g3_t2_ParamLimits

0x8298,	// (0x00073a94) list_medium_line_t3_g3_t2

0x82aa,	// (0x00073aa6) list_medium_line_t3_g3_t3_ParamLimits

0x82aa,	// (0x00073aa6) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007b570) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007b570) list_medium_line_t3_g3_t

0x7f03,	// (0x000736ff) list_medium_line_right_iconx2_g1

0x7d48,	// (0x00073544) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007b577) list_medium_line_right_iconx2_g

0x82be,	// (0x00073aba) list_medium_line_right_iconx2_t1

0x7f03,	// (0x000736ff) list_medium_line_t2_right_iconx2_g1

0x7d48,	// (0x00073544) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007b577) list_medium_line_t2_right_iconx2_g

0x82cc,	// (0x00073ac8) list_medium_line_t2_right_iconx2_t1

0x82dc,	// (0x00073ad8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007b57c) list_medium_line_t2_right_iconx2_t

0x82ee,	// (0x00073aea) list_medium_line_x4_t4_t1

0x82fc,	// (0x00073af8) list_medium_line_x4_t4_t2

0x830c,	// (0x00073b08) list_medium_line_x4_t4_t3

0x831c,	// (0x00073b18) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007b581) list_medium_line_x4_t4_t

0x836f,	// (0x00073b6b) tport_appsw_pane_ParamLimits

0x836f,	// (0x00073b6b) tport_appsw_pane

0x8387,	// (0x00073b83) tport_contact_pane_ParamLimits

0x8387,	// (0x00073b83) tport_contact_pane

0x839f,	// (0x00073b9b) tport_listscroll_pane_ParamLimits

0x839f,	// (0x00073b9b) tport_listscroll_pane

0x83b9,	// (0x00073bb5) cell_tport_appsw_pane_ParamLimits

0x83b9,	// (0x00073bb5) cell_tport_appsw_pane

0xd6eb,	// (0x00078ee7) tport_appsw_pane_g1_ParamLimits

0xd6eb,	// (0x00078ee7) tport_appsw_pane_g1

0xe7fe,	// (0x00079ffa) tport_contact_pane_g1

0xe1ae,	// (0x000799aa) tport_contact_pane_t1

0xe807,	// (0x0007a003) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007b58a) tport_contact_pane_t

0xe815,	// (0x0007a011) list_tport_pane

0xe81e,	// (0x0007a01a) scroll_pane_cp_030

0x8401,	// (0x00073bfd) cell_tport_appsw_pane_g1

0x8411,	// (0x00073c0d) cell_tport_appsw_pane_t1

0x841f,	// (0x00073c1b) grid_highlight_pane_cp019

0x8427,	// (0x00073c23) list_tport_double_graphic_pane_ParamLimits

0x8427,	// (0x00073c23) list_tport_double_graphic_pane

0xa5b6,	// (0x00075db2) list_highlight_pane_cp023_ParamLimits

0xa5b6,	// (0x00075db2) list_highlight_pane_cp023

0x8434,	// (0x00073c30) list_tport_double_graphic_pane_g1_ParamLimits

0x8434,	// (0x00073c30) list_tport_double_graphic_pane_g1

0x8441,	// (0x00073c3d) list_tport_double_graphic_pane_t1_ParamLimits

0x8441,	// (0x00073c3d) list_tport_double_graphic_pane_t1

0x8456,	// (0x00073c52) list_tport_double_graphic_pane_t2_ParamLimits

0x8456,	// (0x00073c52) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007b596) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007b596) list_tport_double_graphic_pane_t

0x94ba,	// (0x00074cb6) main_cale_note_pane

0x5dc4,	// (0x000715c0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5dc4,	// (0x000715c0) cell_vitu2_function_top_wide_pane_cp01

0x7865,	// (0x00073061) wait_bar_pane_cp05_ParamLimits

0xa5b6,	// (0x00075db2) listscroll_cmail_pane

0xe827,	// (0x0007a023) list_cmail_pane

0xd743,	// (0x00078f3f) list_cmail_body_pane

0x8468,	// (0x00073c64) list_single_cmail_header_caption_pane

0x847f,	// (0x00073c7b) list_single_cmail_header_detail_pane_ParamLimits

0x847f,	// (0x00073c7b) list_single_cmail_header_detail_pane

0xe837,	// (0x0007a033) list_single_cmail_header_caption_pane_t1

0x84a9,	// (0x00073ca5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84a9,	// (0x00073ca5) list_single_cmail_header_detail_pane_g1

0xa806,	// (0x00076002) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa806,	// (0x00076002) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007b59b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007b59b) list_single_cmail_header_detail_pane_g

0x84c1,	// (0x00073cbd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x84c1,	// (0x00073cbd) list_single_cmail_header_detail_pane_t1

0x84ff,	// (0x00073cfb) list_single_cmail_header_editor_pane_bg_ParamLimits

0x84ff,	// (0x00073cfb) list_single_cmail_header_editor_pane_bg

0xe34f,	// (0x00079b4b) list_cmail_body_pane_g1

0xe85b,	// (0x0007a057) list_cmail_body_pane_t1

0xd70b,	// (0x00078f07) list_single_cmail_header_editor_pane_bg_g1

0xac48,	// (0x00076444) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd71b,	// (0x00078f17) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd713,	// (0x00078f0f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd92f,	// (0x0007912b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd73b,	// (0x00078f37) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd72b,	// (0x00078f27) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd733,	// (0x00078f2f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac28,	// (0x00076424) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8518,	// (0x00073d14) calenote_gesture_pane_ParamLimits

0x8518,	// (0x00073d14) calenote_gesture_pane

0x8538,	// (0x00073d34) calenote_window_pane_ParamLimits

0x8538,	// (0x00073d34) calenote_window_pane

0xe877,	// (0x0007a073) popup_note_window_cp01

0x8554,	// (0x00073d50) calenote_swipe_1_pane_ParamLimits

0x8554,	// (0x00073d50) calenote_swipe_1_pane

0x7cea,	// (0x000734e6) calenote_swipe_2_pane_ParamLimits

0x7cea,	// (0x000734e6) calenote_swipe_2_pane

0xe69f,	// (0x00079e9b) calenote_swipe_1_pane_g1_ParamLimits

0xe69f,	// (0x00079e9b) calenote_swipe_1_pane_g1

0xe6ac,	// (0x00079ea8) calenote_swipe_1_pane_g2_ParamLimits

0xe6ac,	// (0x00079ea8) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007b4bf) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007b4bf) calenote_swipe_1_pane_g

0xe889,	// (0x0007a085) calenote_swipe_1_pane_t1_ParamLimits

0xe889,	// (0x0007a085) calenote_swipe_1_pane_t1

0xe69f,	// (0x00079e9b) calenote_swipe_2_pane_g1_ParamLimits

0xe69f,	// (0x00079e9b) calenote_swipe_2_pane_g1

0xe8a8,	// (0x0007a0a4) calenote_swipe_2_pane_g2_ParamLimits

0xe8a8,	// (0x0007a0a4) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007b5a7) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007b5a7) calenote_swipe_2_pane_g

0xe8b4,	// (0x0007a0b0) calenote_swipe_2_pane_t1_ParamLimits

0xe8b4,	// (0x0007a0b0) calenote_swipe_2_pane_t1

0x94ba,	// (0x00074cb6) main_mup_navstr_pane

0x4aa1,	// (0x0007029d) main_mup3_pane_t7_ParamLimits

0x4aa1,	// (0x0007029d) main_mup3_pane_t7

0x9bf1,	// (0x000753ed) main_mp4_pane_g6_ParamLimits

0x9bf1,	// (0x000753ed) main_mp4_pane_g6

0x9d95,	// (0x00075591) main_image3_pane_t4_ParamLimits

0x9d95,	// (0x00075591) main_image3_pane_t4

0x8569,	// (0x00073d65) popup_navstr_preview_pane_ParamLimits

0x8569,	// (0x00073d65) popup_navstr_preview_pane

0x857d,	// (0x00073d79) scroll_navstr_pane_ParamLimits

0x857d,	// (0x00073d79) scroll_navstr_pane

0x94ba,	// (0x00074cb6) bg_popup_preview_window_pane_cp04

0xe8db,	// (0x0007a0d7) popup_navstr_preview_pane_t1

0x8591,	// (0x00073d8d) scroll_navstr_pane_g1_ParamLimits

0x8591,	// (0x00073d8d) scroll_navstr_pane_g1

0x85a5,	// (0x00073da1) scroll_navstr_pane_t1_ParamLimits

0x85a5,	// (0x00073da1) scroll_navstr_pane_t1

0xe880,	// (0x0007a07c) bg_button_pane_cp014

0xe880,	// (0x0007a07c) bg_button_pane_cp030

0x7b88,	// (0x00073384) list_double_fisheye_pane_g4_ParamLimits

0x7b88,	// (0x00073384) list_double_fisheye_pane_g4

0x7b94,	// (0x00073390) list_double_fisheye_pane_g5_ParamLimits

0x7b94,	// (0x00073390) list_double_fisheye_pane_g5

0xc94c,	// (0x00078148) sp_fs_scroll_pane_cp03

0xe777,	// (0x00079f73) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe783,	// (0x00079f7f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007b4dc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe78f,	// (0x00079f8b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe82f,	// (0x0007a02b) sp_fs_scroll_pane_cp02

0xa490,	// (0x00075c8c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa490,	// (0x00075c8c) popup_sp_fs_calendar_preview_list_single_pane

0x94ba,	// (0x00074cb6) main_cam6_pano_pane

0x9532,	// (0x00074d2e) main_mup3_pane_ParamLimits

0x94ba,	// (0x00074cb6) main_phacti_pane

0x7738,	// (0x00072f34) bg_button_pane_cp11

0x7752,	// (0x00072f4e) main_mobtv_info_pane_g2_ParamLimits

0x7752,	// (0x00072f4e) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007b43c) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007b43c) main_mobtv_info_pane_g

0x792f,	// (0x0007312b) sc_clock_pane_t5_ParamLimits

0x792f,	// (0x0007312b) sc_clock_pane_t5

0x79ea,	// (0x000731e6) main_radioblah_pane_g1_ParamLimits

0xe5eb,	// (0x00079de7) main_radioblah_pane_t3_ParamLimits

0xe5eb,	// (0x00079de7) main_radioblah_pane_t3

0xe603,	// (0x00079dff) main_radioblah_pane_t4_ParamLimits

0xe603,	// (0x00079dff) main_radioblah_pane_t4

0x7a12,	// (0x0007320e) main_radioblah_text_pane_ParamLimits

0x7a12,	// (0x0007320e) main_radioblah_text_pane

0x7a24,	// (0x00073220) main_radioblah_info_pane_g1_ParamLimits

0x7abd,	// (0x000732b9) main_radioblah_info_pane_t4_ParamLimits

0x7abd,	// (0x000732b9) main_radioblah_info_pane_t4

0xa5b6,	// (0x00075db2) main_sp_fs_calendar_pane

0x85bc,	// (0x00073db8) main_phacti_pane_g1

0x85c4,	// (0x00073dc0) phacti_note_pane_ParamLimits

0x85c4,	// (0x00073dc0) phacti_note_pane

0xe8f2,	// (0x0007a0ee) phacti_term_pane_ParamLimits

0xe8f2,	// (0x0007a0ee) phacti_term_pane

0xe907,	// (0x0007a103) phacti_note_pane_t1_ParamLimits

0xe907,	// (0x0007a103) phacti_note_pane_t1

0xa836,	// (0x00076032) phacti_term_pane_g1

0xa83e,	// (0x0007603a) phacti_term_pane_t1_ParamLimits

0xa83e,	// (0x0007603a) phacti_term_pane_t1

0xe91e,	// (0x0007a11a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa49,	// (0x00076245) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007b5b1) popup_sp_fs_calendar_preview_list_single_pane_g

0xe926,	// (0x0007a122) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe926,	// (0x0007a122) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93b,	// (0x0007a137) aid_popup_sp_fs_bg_corner_pane

0xcc6f,	// (0x0007846b) popup_sp_fs_calendar_preview_bg_pane_g1

0x94ba,	// (0x00074cb6) popup_sp_fs_calendar_preview_bg_pane

0xe943,	// (0x0007a13f) popup_sp_fs_calendar_preview_list_pane

0xc85b,	// (0x00078057) bg_main_sp_fs_cale_pane_ParamLimits

0xc85b,	// (0x00078057) bg_main_sp_fs_cale_pane

0xa871,	// (0x0007606d) listscroll_cale_mrui_pane_ParamLimits

0xa871,	// (0x0007606d) listscroll_cale_mrui_pane

0xa886,	// (0x00076082) listscroll_sp_fs_schedule_track_pane

0xa88f,	// (0x0007608b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa88f,	// (0x0007608b) main_sp_fs_ctrlbar_pane_cp01

0xe94b,	// (0x0007a147) main_sp_fs_ribbon_pane

0xa8a2,	// (0x0007609e) popup_sp_fs_cale_preview_window

0x8639,	// (0x00073e35) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8639,	// (0x00073e35) list_single_sp_fs_schedule_track_pane

0xa5b6,	// (0x00075db2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa5b6,	// (0x00075db2) bg_sp_fs_highlight_list_pane_cp03

0x864d,	// (0x00073e49) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x864d,	// (0x00073e49) list_single_sp_fs_schedule_track_pane_g1

0x8659,	// (0x00073e55) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8659,	// (0x00073e55) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007b5b6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007b5b6) list_single_sp_fs_schedule_track_pane_g

0x8665,	// (0x00073e61) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8665,	// (0x00073e61) list_single_sp_fs_schedule_track_pane_t1

0x867f,	// (0x00073e7b) sp_fs_schedule_track_pane_ParamLimits

0x867f,	// (0x00073e7b) sp_fs_schedule_track_pane

0xe953,	// (0x0007a14f) sp_fs_schedule_track_pane_g1

0xe95b,	// (0x0007a157) sp_fs_schedule_track_pane_g2

0xe963,	// (0x0007a15f) sp_fs_schedule_track_pane_g3

0xe96b,	// (0x0007a167) sp_fs_schedule_track_pane_g4

0xe973,	// (0x0007a16f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007b5bb) sp_fs_schedule_track_pane_g

0xd70b,	// (0x00078f07) bg_sp_fs_schedule_viewer_highlight_g1

0xac48,	// (0x00076444) bg_sp_fs_schedule_viewer_highlight_g2

0xd713,	// (0x00078f0f) bg_sp_fs_schedule_viewer_highlight_g3

0xd71b,	// (0x00078f17) bg_sp_fs_schedule_viewer_highlight_g4

0xd92f,	// (0x0007912b) bg_sp_fs_schedule_viewer_highlight_g5

0xd72b,	// (0x00078f27) bg_sp_fs_schedule_viewer_highlight_g6

0xd733,	// (0x00078f2f) bg_sp_fs_schedule_viewer_highlight_g7

0xd73b,	// (0x00078f37) bg_sp_fs_schedule_viewer_highlight_g8

0xac28,	// (0x00076424) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007b5c6) bg_sp_fs_schedule_viewer_highlight_g

0x94ba,	// (0x00074cb6) bg_main_sp_fs_ribbon_pane

0x8690,	// (0x00073e8c) main_sp_fs_ribbon_pane_g1

0xe97b,	// (0x0007a177) main_sp_fs_ribbon_pane_t1

0x8699,	// (0x00073e95) main_sp_fs_ribbon_pane_t2

0xe98a,	// (0x0007a186) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007b5d9) main_sp_fs_ribbon_pane_t

0xe999,	// (0x0007a195) main_sp_fs_ribbon_scheduler_pane

0xe9a1,	// (0x0007a19d) bg_main_sp_fs_ribbon_pane_g1

0xe9aa,	// (0x0007a1a6) bg_main_sp_fs_ribbon_pane_g2

0xe9b3,	// (0x0007a1af) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007b5e0) bg_main_sp_fs_ribbon_pane_g

0xe9bb,	// (0x0007a1b7) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c4,	// (0x0007a1c0) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cd,	// (0x0007a1c9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007b5e7) main_sp_fs_ribbon_scheduler_pane_g

0xe9d6,	// (0x0007a1d2) list_cale_mrui_pane

0x86a8,	// (0x00073ea4) sp_fs_scroll_pane_cp07_ParamLimits

0x86a8,	// (0x00073ea4) sp_fs_scroll_pane_cp07

0x86c4,	// (0x00073ec0) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86c4,	// (0x00073ec0) bg_sp_fs_schedule_viewer_highlight

0xe9e3,	// (0x0007a1df) list_single_sp_fs_schedule_track_pane_cp01

0xe9eb,	// (0x0007a1e7) list_sp_fs_schedule_track_pane

0xe9f3,	// (0x0007a1ef) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f3,	// (0x0007a1ef) sp_fs_scroll_pane_cp06

0xcc6f,	// (0x0007846b) bgmain_sp_fs_calendar_pane_g1

0x86d4,	// (0x00073ed0) list_single_cale_mrui_pane_ParamLimits

0x86d4,	// (0x00073ed0) list_single_cale_mrui_pane

0xa8b4,	// (0x000760b0) list_single_cale_mrui_row_pane_ParamLimits

0xa8b4,	// (0x000760b0) list_single_cale_mrui_row_pane

0xa8c1,	// (0x000760bd) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa8c1,	// (0x000760bd) list_single_cale_mrui_row_pane_g1

0xa8f9,	// (0x000760f5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa8f9,	// (0x000760f5) list_single_cale_mrui_row_pane_t1

0x86f5,	// (0x00073ef1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86f5,	// (0x00073ef1) list_single_cale_mrui_row_pane_t2

0xa90b,	// (0x00076107) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa90b,	// (0x00076107) list_single_cale_mrui_row_pane_t3

0xa93a,	// (0x00076136) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa93a,	// (0x00076136) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007b5f5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007b5f5) list_single_cale_mrui_row_pane_t

0x875d,	// (0x00073f59) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x875d,	// (0x00073f59) list_single_cmail_header_editor_pane_bg_cp01

0x8783,	// (0x00073f7f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8783,	// (0x00073f7f) list_single_cmail_header_editor_pane_bg_cp02

0x87a3,	// (0x00073f9f) main_radioblah_text_pane_t1_ParamLimits

0x87a3,	// (0x00073f9f) main_radioblah_text_pane_t1

0xea12,	// (0x0007a20e) cam6_indi_pane_cp01

0xea1a,	// (0x0007a216) cam6_mode_pane_cp01

0xea22,	// (0x0007a21e) cam6_pano_pane

0xea2b,	// (0x0007a227) cam6_zoom_pane_cp01

0xea33,	// (0x0007a22f) cam6_pano_image_pane

0xea3e,	// (0x0007a23a) cam6_pano_pane_g1

0xe34f,	// (0x00079b4b) cam6_pano_pane_g2

0xea47,	// (0x0007a243) cam6_pano_pane_g3

0xea50,	// (0x0007a24c) cam6_pano_pane_g4

0xd25b,	// (0x00078a57) cam6_pano_pane_g5

0xea59,	// (0x0007a255) cam6_pano_pane_g6

0xea63,	// (0x0007a25f) cam6_pano_pane_g7

0xea6b,	// (0x0007a267) cam6_pano_pane_g8

0xea74,	// (0x0007a270) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007b5fe) cam6_pano_pane_g

0x94ba,	// (0x00074cb6) main_browser_tag_pane

0xe8d3,	// (0x0007a0cf) grid_navstr_albumart_pane

0xea7f,	// (0x0007a27b) cell_navstr_albumart_pane_ParamLimits

0xea7f,	// (0x0007a27b) cell_navstr_albumart_pane

0xea9f,	// (0x0007a29b) cell_navstr_albumart_pane_g1

0xc66c,	// (0x00077e68) cell_navstr_albumart_pane_g2

0xc67c,	// (0x00077e78) cell_navstr_albumart_pane_g3

0xc674,	// (0x00077e70) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007b611) cell_navstr_albumart_pane_g

0x87bd,	// (0x00073fb9) bt_list_pane_ParamLimits

0x87bd,	// (0x00073fb9) bt_list_pane

0x87d1,	// (0x00073fcd) bt_list_pane_t1

0x87e0,	// (0x00073fdc) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007b61a) bt_list_pane_t

0x94ba,	// (0x00074cb6) main_cale_prevew_pane

0x87ef,	// (0x00073feb) popup_cale_preview_window_ParamLimits

0x87ef,	// (0x00073feb) popup_cale_preview_window

0xa5b6,	// (0x00075db2) bg_popup_preview_window_pane_cp05_ParamLimits

0xa5b6,	// (0x00075db2) bg_popup_preview_window_pane_cp05

0xeaa7,	// (0x0007a2a3) list_cale_preview_pane_ParamLimits

0xeaa7,	// (0x0007a2a3) list_cale_preview_pane

0x880a,	// (0x00074006) list_double_cale_preview_pane_ParamLimits

0x880a,	// (0x00074006) list_double_cale_preview_pane

0x881c,	// (0x00074018) list_single_cale_preview_pane_ParamLimits

0x881c,	// (0x00074018) list_single_cale_preview_pane

0x8832,	// (0x0007402e) list_single_cale_preview_pane_g1

0x883a,	// (0x00074036) list_single_cale_preview_pane_t1_ParamLimits

0x883a,	// (0x00074036) list_single_cale_preview_pane_t1

0x884f,	// (0x0007404b) list_double_cale_preview_pane_g1

0x8857,	// (0x00074053) list_double_cale_preview_pane_t1_ParamLimits

0x8857,	// (0x00074053) list_double_cale_preview_pane_t1

0x886c,	// (0x00074068) list_double_cale_preview_pane_t2_ParamLimits

0x886c,	// (0x00074068) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007b61f) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007b61f) list_double_cale_preview_pane_t

0x94ba,	// (0x00074cb6) main_ezdial_pane

0xa5b6,	// (0x00075db2) main_sp_fs_email_pane_ParamLimits

0x7d72,	// (0x0007356e) cmail_ddmenu_btn01_pane_ParamLimits

0x7d72,	// (0x0007356e) cmail_ddmenu_btn01_pane

0x7d85,	// (0x00073581) cmail_ddmenu_btn02_pane_ParamLimits

0x7d85,	// (0x00073581) cmail_ddmenu_btn02_pane

0x7da8,	// (0x000735a4) cmail_ddmenu_btn03_pane_ParamLimits

0x7da8,	// (0x000735a4) cmail_ddmenu_btn03_pane

0x7dce,	// (0x000735ca) main_sp_fs_ctrlbar_pane_ParamLimits

0x7df2,	// (0x000735ee) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd743,	// (0x00078f3f) list_cmail_body_pane_ParamLimits

0xe845,	// (0x0007a041) bg_button_pane_cp12

0xe84e,	// (0x0007a04a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe84e,	// (0x0007a04a) list_single_cmail_header_detail_pane_g3

0xa812,	// (0x0007600e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa812,	// (0x0007600e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007b5a2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007b5a2) list_single_cmail_header_detail_pane_t

0xa853,	// (0x0007604f) phacti_term_pane_t2_ParamLimits

0xa853,	// (0x0007604f) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007b5ac) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007b5ac) phacti_term_pane_t

0xeab3,	// (0x0007a2af) aid_size_list_single_double

0x8884,	// (0x00074080) popup_ezdial_listscroll_window

0x88a0,	// (0x0007409c) popup_number_entry_window_cp01

0xb455,	// (0x00076c51) bg_popup_call_pane_cp09

0xeabf,	// (0x0007a2bb) ezdial_list_pane

0xeac7,	// (0x0007a2c3) scroll_pane_cp23

0xc85b,	// (0x00078057) bg_button_pane_cp028_ParamLimits

0xc85b,	// (0x00078057) bg_button_pane_cp028

0x88ae,	// (0x000740aa) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88ae,	// (0x000740aa) cmail_ddmenu_btn01_pane_g1

0x88ba,	// (0x000740b6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88ba,	// (0x000740b6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007b624) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007b624) cmail_ddmenu_btn01_pane_g

0xeacf,	// (0x0007a2cb) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacf,	// (0x0007a2cb) cmail_ddmenu_btn01_pane_t1

0xc85b,	// (0x00078057) bg_button_pane_cp029_ParamLimits

0xc85b,	// (0x00078057) bg_button_pane_cp029

0x88ce,	// (0x000740ca) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88ce,	// (0x000740ca) cmail_ddmenu_btn02_pane_g1

0x88e6,	// (0x000740e2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88e6,	// (0x000740e2) cmail_ddmenu_btn02_pane_t1

0xa5b6,	// (0x00075db2) bg_button_pane_cp031_ParamLimits

0xa5b6,	// (0x00075db2) bg_button_pane_cp031

0x88ce,	// (0x000740ca) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88ce,	// (0x000740ca) cmail_ddmenu_btn03_pane_g1

0x88e6,	// (0x000740e2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88e6,	// (0x000740e2) cmail_ddmenu_btn03_pane_t1

0x5648,	// (0x00070e44) cell_dialer2_keypad_pane_t1_ParamLimits

0x5662,	// (0x00070e5e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5662,	// (0x00070e5e) cell_dialer2_keypad_pane_t1_copy1

0x7591,	// (0x00072d8d) ncimui_group_button_pane

0xa5b6,	// (0x00075db2) main_sp_fs_calendar_pane_ParamLimits

0x8468,	// (0x00073c64) list_single_cmail_header_caption_pane_ParamLimits

0xa868,	// (0x00076064) aid_recal_txt_sm_pane

0x94ba,	// (0x00074cb6) mian_recal_day_pane

0xa8a2,	// (0x0007609e) popup_sp_fs_cale_preview_window_ParamLimits

0xeae5,	// (0x0007a2e1) list_recal_day_pane

0xa984,	// (0x00076180) list_single_recal_day_pane_ParamLimits

0xa984,	// (0x00076180) list_single_recal_day_pane

0xeb0c,	// (0x0007a308) list_single_recal_day_pane_g1_ParamLimits

0xeb0c,	// (0x0007a308) list_single_recal_day_pane_g1

0xa996,	// (0x00076192) list_single_recal_day_pane_g2_ParamLimits

0xa996,	// (0x00076192) list_single_recal_day_pane_g2

0xa9a6,	// (0x000761a2) list_single_recal_day_pane_g3_ParamLimits

0xa9a6,	// (0x000761a2) list_single_recal_day_pane_g3

0x890a,	// (0x00074106) list_single_recal_day_pane_g4_ParamLimits

0x890a,	// (0x00074106) list_single_recal_day_pane_g4

0xa9b2,	// (0x000761ae) list_single_recal_day_pane_g5_ParamLimits

0xa9b2,	// (0x000761ae) list_single_recal_day_pane_g5

0xa9c2,	// (0x000761be) list_single_recal_day_pane_g6_ParamLimits

0xa9c2,	// (0x000761be) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007b633) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007b633) list_single_recal_day_pane_g

0xa9d6,	// (0x000761d2) list_single_recal_day_pane_t1

0xa9e8,	// (0x000761e4) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007b63e) list_single_recal_day_pane_t

0x892a,	// (0x00074126) ncimui_query_button_pane_ParamLimits

0x892a,	// (0x00074126) ncimui_query_button_pane

0x893a,	// (0x00074136) ncimui_query_button_pane_t1_ParamLimits

0x893a,	// (0x00074136) ncimui_query_button_pane_t1

0xeb18,	// (0x0007a314) ncimui_query_button_pane_t2_ParamLimits

0xeb18,	// (0x0007a314) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007b643) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007b643) ncimui_query_button_pane_t

0x894d,	// (0x00074149) query_button_pane_ParamLimits

0x894d,	// (0x00074149) query_button_pane

0x94ba,	// (0x00074cb6) bg_button_pane_cp0028

0xeb2b,	// (0x0007a327) query_button_pane_t1

0x3700,	// (0x0006eefc) main_tport_pane_ParamLimits

0x832c,	// (0x00073b28) bg_popup_window_pane_cp01_ParamLimits

0x832c,	// (0x00073b28) bg_popup_window_pane_cp01

0x8347,	// (0x00073b43) heading_pane_cp08_ParamLimits

0x8347,	// (0x00073b43) heading_pane_cp08

0x835a,	// (0x00073b56) heading_pane_cp07_ParamLimits

0x835a,	// (0x00073b56) heading_pane_cp07

0x8401,	// (0x00073bfd) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007b58f) cell_tport_appsw_pane_g

0xa578,	// (0x00075d74) input_candi_list_open_g1

0xae0b,	// (0x00076607) list_cale_time_pane_g6_ParamLimits

0xae0b,	// (0x00076607) list_cale_time_pane_g6

0x44c9,	// (0x0006fcc5) aid_size_touch_calib_1_ParamLimits

0x44c9,	// (0x0006fcc5) aid_size_touch_calib_1

0x44db,	// (0x0006fcd7) aid_size_touch_calib_2_ParamLimits

0x44db,	// (0x0006fcd7) aid_size_touch_calib_2

0x44f3,	// (0x0006fcef) aid_size_touch_calib_3_ParamLimits

0x44f3,	// (0x0006fcef) aid_size_touch_calib_3

0x4511,	// (0x0006fd0d) aid_size_touch_calib_4_ParamLimits

0x4511,	// (0x0006fd0d) aid_size_touch_calib_4

0x4529,	// (0x0006fd25) main_touch_calib_button_group_pane_ParamLimits

0x4529,	// (0x0006fd25) main_touch_calib_button_group_pane

0x4541,	// (0x0006fd3d) main_touch_calib_pane_g1_ParamLimits

0x4553,	// (0x0006fd4f) main_touch_calib_pane_g2_ParamLimits

0x4565,	// (0x0006fd61) main_touch_calib_pane_g3_ParamLimits

0x4577,	// (0x0006fd73) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0007af4d) main_touch_calib_pane_g_ParamLimits

0x4589,	// (0x0006fd85) main_touch_calib_pane_t1_ParamLimits

0x45a3,	// (0x0006fd9f) main_touch_calib_pane_t2_ParamLimits

0x45bd,	// (0x0006fdb9) main_touch_calib_pane_t3_ParamLimits

0x45d1,	// (0x0006fdcd) main_touch_calib_pane_t4_ParamLimits

0x45e5,	// (0x0006fde1) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0007af56) main_touch_calib_pane_t_ParamLimits

0xcffb,	// (0x000787f7) list_single_fp_cale_pane_g3_ParamLimits

0xcffb,	// (0x000787f7) list_single_fp_cale_pane_g3

0x9532,	// (0x00074d2e) bg_button_pane_cp012_ParamLimits

0x9532,	// (0x00074d2e) bg_vkb2_func_pane_cp03_ParamLimits

0x65d3,	// (0x00071dcf) cell_vitu2_function_top_pane_g1_ParamLimits

0x9532,	// (0x00074d2e) bg_vkb2_func_pane_cp04_ParamLimits

0x751f,	// (0x00072d1b) main_ncimui_button_group_pane_ParamLimits

0x751f,	// (0x00072d1b) main_ncimui_button_group_pane

0x757f,	// (0x00072d7b) main_ncimui_pane_t3_ParamLimits

0x757f,	// (0x00072d7b) main_ncimui_pane_t3

0xe8e9,	// (0x0007a0e5) phacti_button_group_pane

0xeab3,	// (0x0007a2af) aid_size_list_single_double_ParamLimits

0x8884,	// (0x00074080) popup_ezdial_listscroll_window_ParamLimits

0x88a0,	// (0x0007409c) popup_number_entry_window_cp01_ParamLimits

0x8960,	// (0x0007415c) phacti_button_pane_ParamLimits

0x8960,	// (0x0007415c) phacti_button_pane

0x94ba,	// (0x00074cb6) bg_button_pane_cp14

0xeb39,	// (0x0007a335) phacti_button_pane_t1

0x8971,	// (0x0007416d) main_touch_calib_button_pane_ParamLimits

0x8971,	// (0x0007416d) main_touch_calib_button_pane

0xa38c,	// (0x00075b88) bg_button_pane_cp18_ParamLimits

0xa38c,	// (0x00075b88) bg_button_pane_cp18

0xeb47,	// (0x0007a343) main_touch_calib_button_pane_t1_ParamLimits

0xeb47,	// (0x0007a343) main_touch_calib_button_pane_t1

0xeb5d,	// (0x0007a359) main_touch_calib_button_pane_t2_ParamLimits

0xeb5d,	// (0x0007a359) main_touch_calib_button_pane_t2

0x0001,

0x0034,	// (0x0006b830) main_touch_calib_button_pane_t_ParamLimits

0x0034,	// (0x0006b830) main_touch_calib_button_pane_t

0x94ba,	// (0x00074cb6) cell_ncimui_button_pane

0x94ba,	// (0x00074cb6) bg_button_pane_cp032

0xeb7b,	// (0x0007a377) cell_ncimui_button_pane_t1

0x9d75,	// (0x00075571) image3_infobar_pane_ParamLimits

0x9d75,	// (0x00075571) image3_infobar_pane

0x795b,	// (0x00073157) fs_bigclock_status_pane_ParamLimits

0x795b,	// (0x00073157) fs_bigclock_status_pane

0x7968,	// (0x00073164) main_fs_bigclock_clock_pane_ParamLimits

0x7968,	// (0x00073164) main_fs_bigclock_clock_pane

0x7988,	// (0x00073184) main_fs_bigclock_indi_pane_ParamLimits

0x7988,	// (0x00073184) main_fs_bigclock_indi_pane

0x79b2,	// (0x000731ae) main_fs_bigclock_swipe_pane_ParamLimits

0x79b2,	// (0x000731ae) main_fs_bigclock_swipe_pane

0x94ba,	// (0x00074cb6) main_fs_clock_dumped_data

0xe45c,	// (0x00079c58) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe45c,	// (0x00079c58) list_single_fs_bigclock_indicator_pane_g1

0xe477,	// (0x00079c73) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe477,	// (0x00079c73) list_single_fs_bigclock_indicator_pane_g2

0xe491,	// (0x00079c8d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe491,	// (0x00079c8d) list_single_fs_bigclock_indicator_pane_g3

0xe4ab,	// (0x00079ca7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4ab,	// (0x00079ca7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007b470) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007b470) list_single_fs_bigclock_indicator_pane_g

0xe4d6,	// (0x00079cd2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4d6,	// (0x00079cd2) list_single_fs_bigclock_indicator_pane_t1

0xe4fe,	// (0x00079cfa) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4fe,	// (0x00079cfa) list_single_fs_bigclock_indicator_pane_t2

0xe526,	// (0x00079d22) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe526,	// (0x00079d22) list_single_fs_bigclock_indicator_pane_t3

0xe54e,	// (0x00079d4a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe54e,	// (0x00079d4a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007b47b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007b47b) list_single_fs_bigclock_indicator_pane_t

0xeb89,	// (0x0007a385) image3_infobar_fav_pane_ParamLimits

0xeb89,	// (0x0007a385) image3_infobar_fav_pane

0xeb99,	// (0x0007a395) image3_infobar_loc_pane_ParamLimits

0xeb99,	// (0x0007a395) image3_infobar_loc_pane

0xebad,	// (0x0007a3a9) image3_infobar_time_pane_ParamLimits

0xebad,	// (0x0007a3a9) image3_infobar_time_pane

0xcc6f,	// (0x0007846b) image3_infobar_time_pane_g1

0xebbd,	// (0x0007a3b9) image3_infobar_time_pane_t1

0xcc6f,	// (0x0007846b) image3_infobar_loc_pane_g1

0xebcb,	// (0x0007a3c7) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0007b648) image3_infobar_loc_pane_g

0xebd3,	// (0x0007a3cf) image3_infobar_loc_pane_t1

0xcc6f,	// (0x0007846b) image3_infobar_fav_pane_g1

0xebe1,	// (0x0007a3dd) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0007b64d) image3_infobar_fav_pane_g

0xebe9,	// (0x0007a3e5) fs_bigclock_status_battery_pane

0xebf2,	// (0x0007a3ee) fs_bigclock_status_signal_pane

0xebfb,	// (0x0007a3f7) fs_bigclock_status_title_pane

0xec04,	// (0x0007a400) fs_bigclock_status_signal_pane_g1

0xec0d,	// (0x0007a409) fs_bigclock_status_signal_pane_g2

0x0001,

0x0039,	// (0x0006b835) fs_bigclock_status_signal_pane_g

0xec15,	// (0x0007a411) fs_bigclock_status_battery_pane_g1

0xec1e,	// (0x0007a41a) fs_bigclock_status_battery_pane_g2

0x0001,

0x003e,	// (0x0006b83a) fs_bigclock_status_battery_pane_g

0xec26,	// (0x0007a422) fs_bigclock_status_title_pane_t1

0xcc6f,	// (0x0007846b) main_fs_bigclock_clock_pane_g1

0xec34,	// (0x0007a430) main_fs_bigclock_clock_pane_g2

0xec3d,	// (0x0007a439) main_fs_bigclock_clock_pane_g3

0xec3d,	// (0x0007a439) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe56,	// (0x0007b652) main_fs_bigclock_clock_pane_g

0xec45,	// (0x0007a441) main_fs_bigclock_clock_pane_t1

0x8986,	// (0x00074182) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5f,	// (0x0007b65b) main_fs_bigclock_clock_pane_t

0xec53,	// (0x0007a44f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec53,	// (0x0007a44f) list_single_fs_bigclock_indicator_pane

0xec64,	// (0x0007a460) list_single_fs_bigclock_pane_ParamLimits

0xec64,	// (0x0007a460) list_single_fs_bigclock_pane

0xec8a,	// (0x0007a486) main_fs_bigclock_indicator_pane_t1

0xec99,	// (0x0007a495) list_single_fs_bigclock_pane_g1

0xeca1,	// (0x0007a49d) list_single_fs_bigclock_pane_t1

0xcc6f,	// (0x0007846b) main_fs_bigclock_swipe_pane_g1

0xece4,	// (0x0007a4e0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6b,	// (0x0007b667) main_fs_bigclock_swipe_pane_g

0xecec,	// (0x0007a4e8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecec,	// (0x0007a4e8) main_fs_bigclock_swipe_pane_t1

0x25e7,	// (0x0006dde3) call_type_pane_ParamLimits

0x94ba,	// (0x00074cb6) main_btmg_pane

0xa8ed,	// (0x000760e9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa8ed,	// (0x000760e9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007b5ee) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007b5ee) list_single_cale_mrui_row_pane_g

0xa973,	// (0x0007616f) list_recal_vselct_arw_lo_pane

0xeb04,	// (0x0007a300) list_recal_vselct_arw_up_pane

0xa97b,	// (0x00076177) list_recal_vselct_pane

0x89d9,	// (0x000741d5) btmg_button_pane

0x89e3,	// (0x000741df) main_btmg_pane_g1

0x94ba,	// (0x00074cb6) bg_button_pane_cp044

0xed09,	// (0x0007a505) btmg_button_pane_t1

0xc847,	// (0x00078043) aid_listscroll_gen

0xa5b6,	// (0x00075db2) main_cntbar_detail_pane

0xe827,	// (0x0007a023) list_cmail_folder_pane

0xc94c,	// (0x00078148) sp_fs_scroll_pane_cp03_ParamLimits

0x89ed,	// (0x000741e9) list_single_fs_dyc_pane_cp01_ParamLimits

0x89ed,	// (0x000741e9) list_single_fs_dyc_pane_cp01

0xed17,	// (0x0007a513) aid_size_cmail_indent

0xa9fa,	// (0x000761f6) list_single_dyc_row_pane_cp01

0x8a36,	// (0x00074232) cntbar_detail_list_pane_ParamLimits

0x8a36,	// (0x00074232) cntbar_detail_list_pane

0x8a82,	// (0x0007427e) main_cntbar_detail_cont_pane_ParamLimits

0x8a82,	// (0x0007427e) main_cntbar_detail_cont_pane

0xc94c,	// (0x00078148) scroll_pane_cp032_ParamLimits

0xc94c,	// (0x00078148) scroll_pane_cp032

0x8a96,	// (0x00074292) cntbar_detail_list_event_pane_ParamLimits

0x8a96,	// (0x00074292) cntbar_detail_list_event_pane

0x8a46,	// (0x00074242) cntbar_detail_list_shct_pane

0xac96,	// (0x00076492) aid_list_gen

0xed20,	// (0x0007a51c) aid_scroll

0xed29,	// (0x0007a525) aid_size_touch_scroll_bar

0x6cc5,	// (0x000724c1) aid_list_double

0x6cb3,	// (0x000724af) aid_list_single

0x6cb3,	// (0x000724af) aid_list_single_lg

0x8aa6,	// (0x000742a2) aid_list_z_g_a_sm

0x8aae,	// (0x000742aa) aid_list_z_g_d

0x8ab6,	// (0x000742b2) aid_txt_z_prm

0x8ac4,	// (0x000742c0) aid_txt_z_prm_cp01

0x8ad2,	// (0x000742ce) aid_txt_z_sec

0x8ae0,	// (0x000742dc) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ae0,	// (0x000742dc) main_cntbar_detail_cont_pane_g1

0x8af4,	// (0x000742f0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8af4,	// (0x000742f0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe70,	// (0x0007b66c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe70,	// (0x0007b66c) main_cntbar_detail_cont_pane_g

0xed32,	// (0x0007a52e) main_cntbar_detail_cont_pane_t1

0xed40,	// (0x0007a53c) main_cntbar_detail_cont_pane_t2

0xed4e,	// (0x0007a54a) main_cntbar_detail_cont_pane_t3

0x0002,

0x0059,	// (0x0006b855) main_cntbar_detail_cont_pane_t

0x8b04,	// (0x00074300) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b04,	// (0x00074300) cell_cntbar_detail_list_shct_pane

0xed5c,	// (0x0007a558) cntbar_detail_list_shct_pane_g1

0xed65,	// (0x0007a561) cntbar_detail_list_shct_pane_g2

0x0001,

0x0060,	// (0x0006b85c) cntbar_detail_list_shct_pane_g

0x8b18,	// (0x00074314) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b18,	// (0x00074314) cntbar_detail_list_event_pane_g1

0x8b24,	// (0x00074320) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b24,	// (0x00074320) cntbar_detail_list_event_pane_g2

0x0005,

0xfe75,	// (0x0007b671) cntbar_detail_list_event_pane_g_ParamLimits

0xfe75,	// (0x0007b671) cntbar_detail_list_event_pane_g

0x8b90,	// (0x0007438c) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b90,	// (0x0007438c) cntbar_detail_list_event_pane_t1

0x8ba5,	// (0x000743a1) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ba5,	// (0x000743a1) cntbar_detail_list_event_pane_t2

0x0002,

0xfe82,	// (0x0007b67e) cntbar_detail_list_event_pane_t_ParamLimits

0xfe82,	// (0x0007b67e) cntbar_detail_list_event_pane_t

0xcc6f,	// (0x0007846b) cell_cntbar_detail_list_shct_pane_g1

0xb40d,	// (0x00076c09) navi_pane_mv_g3

0xa5b6,	// (0x00075db2) main_cntbar_detail_pane_ParamLimits

0x94ba,	// (0x00074cb6) main_notif_wgt_pane

0x9b8b,	// (0x00075387) aid_tch_main_mp4_pane_g4

0x9d6d,	// (0x00075569) popup_slider_window_cp02

0xa969,	// (0x00076165) list_recal_day_event_pane

0x8a04,	// (0x00074200) cntbar_detail_btn_pane_ParamLimits

0x8a04,	// (0x00074200) cntbar_detail_btn_pane

0x8a1d,	// (0x00074219) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a1d,	// (0x00074219) cntbar_detail_btn_pane_cp01

0x8a46,	// (0x00074242) cntbar_detail_list_shct_pane_ParamLimits

0x8a56,	// (0x00074252) cntbar_detail_pane_g1_ParamLimits

0x8a56,	// (0x00074252) cntbar_detail_pane_g1

0x8a66,	// (0x00074262) cntbar_detail_pane_t1_ParamLimits

0x8a66,	// (0x00074262) cntbar_detail_pane_t1

0x8b30,	// (0x0007432c) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b30,	// (0x0007432c) cntbar_detail_list_event_pane_g3

0x8b48,	// (0x00074344) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b48,	// (0x00074344) cntbar_detail_list_event_pane_g4

0x8b60,	// (0x0007435c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b60,	// (0x0007435c) cntbar_detail_list_event_pane_g5

0x8b78,	// (0x00074374) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b78,	// (0x00074374) cntbar_detail_list_event_pane_g6

0x8bba,	// (0x000743b6) cntbar_detail_list_event_pane_t3_ParamLimits

0x8bba,	// (0x000743b6) cntbar_detail_list_event_pane_t3

0x8bcc,	// (0x000743c8) popup_notif_wgt_window_ParamLimits

0x8bcc,	// (0x000743c8) popup_notif_wgt_window

0x8be5,	// (0x000743e1) popup_submenu_window_cp01_ParamLimits

0x8be5,	// (0x000743e1) popup_submenu_window_cp01

0xb455,	// (0x00076c51) bg_popup_window_pane_cp10

0xed6e,	// (0x0007a56a) listscroll_notif_wgt_pane

0xed80,	// (0x0007a57c) list_notif_wgt_window

0xed89,	// (0x0007a585) scroll_pane_cp033

0x8bfb,	// (0x000743f7) list_notif_wgt_row_pane_ParamLimits

0x8bfb,	// (0x000743f7) list_notif_wgt_row_pane

0xed92,	// (0x0007a58e) aid_size_list_notif_wgt_del

0xed9f,	// (0x0007a59b) list_notif_wgt_row_pane_g1

0xedab,	// (0x0007a5a7) list_notif_wgt_row_pane_g2

0xedbf,	// (0x0007a5bb) list_notif_wgt_row_pane_g3

0x0002,

0x0079,	// (0x0006b875) list_notif_wgt_row_pane_g

0xedcc,	// (0x0007a5c8) list_notif_wgt_row_pane_t1

0xede2,	// (0x0007a5de) list_notif_wgt_row_pane_t2

0xedf4,	// (0x0007a5f0) list_notif_wgt_row_pane_t3

0x0002,

0x0080,	// (0x0006b87c) list_notif_wgt_row_pane_t

0xd949,	// (0x00079145) list_recal_day_event_pane_g1

0xee06,	// (0x0007a602) list_recal_day_event_pane_t1

0x94ba,	// (0x00074cb6) bg_button_pane_cp045

0x8c0b,	// (0x00074407) cntbar_detail_btn_pane_t1

0xc85b,	// (0x00078057) main_callh_pane_ParamLimits

0xc85b,	// (0x00078057) main_callh_pane

0x94ba,	// (0x00074cb6) main_coverflow0_pane

0x94ba,	// (0x00074cb6) main_wgtman_pane

0x79ca,	// (0x000731c6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79ca,	// (0x000731c6) main_fs_bigclock_unlock_btn_pane

0x83f9,	// (0x00073bf5) bg_button_pane_cp16

0x8409,	// (0x00073c05) cell_tport_appsw_pane_g3

0x8c19,	// (0x00074415) cf0_flow_pane_ParamLimits

0x8c19,	// (0x00074415) cf0_flow_pane

0xee15,	// (0x0007a611) listscroll_cf0_pane

0xee20,	// (0x0007a61c) main_cf0_pane_g1

0x8c2e,	// (0x0007442a) main_cf0_pane_t1_ParamLimits

0x8c2e,	// (0x0007442a) main_cf0_pane_t1

0x8c45,	// (0x00074441) main_cf0_pane_t2_ParamLimits

0x8c45,	// (0x00074441) main_cf0_pane_t2

0x0001,

0xfe89,	// (0x0007b685) main_cf0_pane_t_ParamLimits

0xfe89,	// (0x0007b685) main_cf0_pane_t

0xee32,	// (0x0007a62e) scroll_pane_cp11

0x8c5c,	// (0x00074458) cf0_flow_pane_g1

0x8c64,	// (0x00074460) cf0_flow_pane_g2

0x0001,

0xfe8e,	// (0x0007b68a) cf0_flow_pane_g

0x8c6c,	// (0x00074468) cf0_flow_pane_t1

0x94ba,	// (0x00074cb6) main_call6_pane

0x94ba,	// (0x00074cb6) main_calllock_pane

0x8c7a,	// (0x00074476) call6_btn_grp_pane_ParamLimits

0x8c7a,	// (0x00074476) call6_btn_grp_pane

0x8c94,	// (0x00074490) call6_pane_g1_ParamLimits

0x8c94,	// (0x00074490) call6_pane_g1

0x8ca9,	// (0x000744a5) popup_call6_1st_window_ParamLimits

0x8ca9,	// (0x000744a5) popup_call6_1st_window

0x8cba,	// (0x000744b6) popup_call6_2nd_window_ParamLimits

0x8cba,	// (0x000744b6) popup_call6_2nd_window

0x8ccb,	// (0x000744c7) cell_call6_btn_pane_ParamLimits

0x8ccb,	// (0x000744c7) cell_call6_btn_pane

0xb455,	// (0x00076c51) bg_popup_call2_in_pane_cp03

0xee3d,	// (0x0007a639) popup_call6_1st_window_g1

0xee45,	// (0x0007a641) popup_call6_1st_window_g2

0xee4d,	// (0x0007a649) popup_call6_1st_window_g3

0x0002,

0x0096,	// (0x0006b892) popup_call6_1st_window_g

0xee55,	// (0x0007a651) popup_call6_1st_window_t1

0xee64,	// (0x0007a660) popup_call6_1st_window_t2

0xee74,	// (0x0007a670) popup_call6_1st_window_t3

0x0002,

0x009d,	// (0x0006b899) popup_call6_1st_window_t

0xb455,	// (0x00076c51) bg_popup_call2_in_pane_cp04

0xee3d,	// (0x0007a639) popup_call6_2nd_window_g1

0xee45,	// (0x0007a641) popup_call6_2nd_window_g2

0xee4d,	// (0x0007a649) popup_call6_2nd_window_g3

0x0002,

0x0096,	// (0x0006b892) popup_call6_2nd_window_g

0xee55,	// (0x0007a651) popup_call6_2nd_window_t1

0x94ba,	// (0x00074cb6) bg_button_pane_cp15

0xee84,	// (0x0007a680) cell_call6_btn_pane_g1

0xee8d,	// (0x0007a689) cell_call6_btn_pane_t1

0x8cdf,	// (0x000744db) listscroll_wgtman_pane_ParamLimits

0x8cdf,	// (0x000744db) listscroll_wgtman_pane

0x8d00,	// (0x000744fc) wgtman_btn_pane_ParamLimits

0x8d00,	// (0x000744fc) wgtman_btn_pane

0xb214,	// (0x00076a10) aid_scroll_copy1

0xee9c,	// (0x0007a698) list_wgtman_pane

0x8d43,	// (0x0007453f) wgtman_btn_pane_g1_ParamLimits

0x8d43,	// (0x0007453f) wgtman_btn_pane_g1

0x8d6f,	// (0x0007456b) wgtman_btn_pane_t1_ParamLimits

0x8d6f,	// (0x0007456b) wgtman_btn_pane_t1

0xeea6,	// (0x0007a6a2) wgtman_btn_pane_t2_ParamLimits

0xeea6,	// (0x0007a6a2) wgtman_btn_pane_t2

0x0001,

0xfe93,	// (0x0007b68f) wgtman_btn_pane_t_ParamLimits

0xfe93,	// (0x0007b68f) wgtman_btn_pane_t

0x8dac,	// (0x000745a8) listrow_wgtman_pane_ParamLimits

0x8dac,	// (0x000745a8) listrow_wgtman_pane

0x8dbe,	// (0x000745ba) listrow_wgtman_pane_g1

0x8dcb,	// (0x000745c7) listrow_wgtman_pane_g2

0x0001,

0xfe98,	// (0x0007b694) listrow_wgtman_pane_g

0x8de9,	// (0x000745e5) listrow_wgtman_pane_t1

0x8e01,	// (0x000745fd) listrow_wgtman_pane_t2

0x0001,

0xfe9d,	// (0x0007b699) listrow_wgtman_pane_t

0x8e27,	// (0x00074623) wait_bar_pane_cp09

0xeebd,	// (0x0007a6b9) main_calllock_btn_pane

0xeec7,	// (0x0007a6c3) main_calllock_pane_g1

0x94ba,	// (0x00074cb6) bg_button_pane_cp17

0xeed3,	// (0x0007a6cf) main_calllock_btn_pane_g1

0xeedc,	// (0x0007a6d8) main_calllock_btn_pane_t1

0x94ba,	// (0x00074cb6) main_dialer3_pane

0x94ba,	// (0x00074cb6) main_fmrd2_pane

0xcc6f,	// (0x0007846b) main_fs_bigclock_unlock_btn_pane_g1

0xeef3,	// (0x0007a6ef) main_fs_bigclock_unlock_btn_pane_t1

0x8e39,	// (0x00074635) area_fmrd2_info_pane_ParamLimits

0x8e39,	// (0x00074635) area_fmrd2_info_pane

0x8e4a,	// (0x00074646) area_fmrd2_visual_pane_ParamLimits

0x8e4a,	// (0x00074646) area_fmrd2_visual_pane

0x8e58,	// (0x00074654) fmrd2_indi_pane_ParamLimits

0x8e58,	// (0x00074654) fmrd2_indi_pane

0x8e65,	// (0x00074661) area_fmrd2_visual_pane_g1

0x8e6d,	// (0x00074669) area_fmrd2_visual_pane_t1

0x8e7d,	// (0x00074679) area_fmrd2_visual_pane_t2

0x8e8d,	// (0x00074689) area_fmrd2_visual_pane_t3

0x0002,

0xfea7,	// (0x0007b6a3) area_fmrd2_visual_pane_t

0x8e9d,	// (0x00074699) area_fmrd2_info_pane_g1

0x8ea5,	// (0x000746a1) area_fmrd2_info_pane_t1

0x8eb5,	// (0x000746b1) area_fmrd2_info_pane_t2

0x8ec5,	// (0x000746c1) area_fmrd2_info_pane_t3

0x8ed5,	// (0x000746d1) area_fmrd2_info_pane_t4

0x0003,

0xfeae,	// (0x0007b6aa) area_fmrd2_info_pane_t

0x8ee3,	// (0x000746df) fmrd2_indi_pane_t1

0x8ef3,	// (0x000746ef) fmrd2_indi_pane_t2

0x8f03,	// (0x000746ff) fmrd2_indi_pane_t3

0x0002,

0xfeb7,	// (0x0007b6b3) fmrd2_indi_pane_t

0xe4ba,	// (0x00079cb6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4ba,	// (0x00079cb6) list_single_fs_bigclock_indicator_pane_g5

0xe56a,	// (0x00079d66) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe56a,	// (0x00079d66) list_single_fs_bigclock_indicator_pane_t5

0x85d8,	// (0x00073dd4) aid_cell_bcale_month_pane_ParamLimits

0x85d8,	// (0x00073dd4) aid_cell_bcale_month_pane

0x85f6,	// (0x00073df2) bcale_month_pane_ParamLimits

0x85f6,	// (0x00073df2) bcale_month_pane

0x861a,	// (0x00073e16) bcale_preview_pane_ParamLimits

0x861a,	// (0x00073e16) bcale_preview_pane

0xeca1,	// (0x0007a49d) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc0,	// (0x0007a4bc) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc0,	// (0x0007a4bc) list_single_fs_bigclock_pane_t2

0x0001,

0x004f,	// (0x0006b84b) list_single_fs_bigclock_pane_t_ParamLimits

0x004f,	// (0x0006b84b) list_single_fs_bigclock_pane_t

0xeeeb,	// (0x0007a6e7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfea2,	// (0x0007b69e) main_fs_bigclock_unlock_btn_pane_g

0x8f13,	// (0x0007470f) aid_dia3_key_size_ParamLimits

0x8f13,	// (0x0007470f) aid_dia3_key_size

0x8f22,	// (0x0007471e) aid_dia3_listrow_size_ParamLimits

0x8f22,	// (0x0007471e) aid_dia3_listrow_size

0x8f37,	// (0x00074733) dia3_keypad_fun_pane_ParamLimits

0x8f37,	// (0x00074733) dia3_keypad_fun_pane

0x8f53,	// (0x0007474f) dia3_keypad_num_pane_ParamLimits

0x8f53,	// (0x0007474f) dia3_keypad_num_pane

0x8f6e,	// (0x0007476a) dia3_listscroll_pane_ParamLimits

0x8f6e,	// (0x0007476a) dia3_listscroll_pane

0x8f81,	// (0x0007477d) dia3_numentry_pane_ParamLimits

0x8f81,	// (0x0007477d) dia3_numentry_pane

0xef01,	// (0x0007a6fd) dia3_list_pane

0xef0c,	// (0x0007a708) scroll_pane_cp12

0x94ba,	// (0x00074cb6) bg_dia3_numentry_pane

0x8f95,	// (0x00074791) dia3_numentry_pane_t1

0x8fa4,	// (0x000747a0) cell_dia3_key_num_pane

0x8fac,	// (0x000747a8) cell_dia3_key0_fun_pane_ParamLimits

0x8fac,	// (0x000747a8) cell_dia3_key0_fun_pane

0x8fc0,	// (0x000747bc) cell_dia3_key1_fun_pane_ParamLimits

0x8fc0,	// (0x000747bc) cell_dia3_key1_fun_pane

0x8fd8,	// (0x000747d4) dia3_listrow_pane

0xe1c9,	// (0x000799c5) bg_dia3_numentry_pane_g1

0x94ba,	// (0x00074cb6) bg_button_pane_cp21

0xef17,	// (0x0007a713) cell_dia3_key_num_pane_t1

0xef25,	// (0x0007a721) cell_dia3_key_num_pane_t2

0xef34,	// (0x0007a730) cell_dia3_key_num_pane_t3

0xef43,	// (0x0007a73f) cell_dia3_key_num_pane_t4

0x0003,

0x00ca,	// (0x0006b8c6) cell_dia3_key_num_pane_t

0x94ba,	// (0x00074cb6) bg_button_pane_cp19

0x8fea,	// (0x000747e6) cell_dia3_key0_fun_pane_g1

0x94ba,	// (0x00074cb6) bg_button_pane_cp20

0x8ff2,	// (0x000747ee) cell_dia3_key1_fun_pane_g1

0x8ffa,	// (0x000747f6) area_left_week_number_pane

0x9006,	// (0x00074802) area_top_day_name_pane

0x9019,	// (0x00074815) frame_month_view_pane

0xef52,	// (0x0007a74e) grid_month_view_pane

0x902c,	// (0x00074828) cell_top_day_name_pane_ParamLimits

0x902c,	// (0x00074828) cell_top_day_name_pane

0x9059,	// (0x00074855) cell_area_left_week_number_pane_ParamLimits

0x9059,	// (0x00074855) cell_area_left_week_number_pane

0x906d,	// (0x00074869) cell_month_view_pane_ParamLimits

0x906d,	// (0x00074869) cell_month_view_pane

0xef60,	// (0x0007a75c) frm_month_g1

0x909a,	// (0x00074896) frm_month_g2

0x90ad,	// (0x000748a9) frm_month_g3

0x90c0,	// (0x000748bc) frm_month_g4

0x90d3,	// (0x000748cf) frm_month_g5

0x90e6,	// (0x000748e2) frm_month_g6

0x90f9,	// (0x000748f5) frm_month_g7

0xef6d,	// (0x0007a769) frm_month_g8

0x910c,	// (0x00074908) frm_month_g9

0x911c,	// (0x00074918) frm_month_g10

0x912c,	// (0x00074928) frm_month_g11

0x913c,	// (0x00074938) frm_month_g12

0x914e,	// (0x0007494a) frm_month_g13

0x9160,	// (0x0007495c) frm_month_g14

0x9174,	// (0x00074970) frm_month_g15

0x9188,	// (0x00074984) frm_month_g16

0x000f,

0xfebe,	// (0x0007b6ba) frm_month_g

0xef7a,	// (0x0007a776) cell_top_day_name_pane_t1

0x919c,	// (0x00074998) cell_area_left_week_number_pane_g1

0x91a8,	// (0x000749a4) cell_area_left_week_number_pane_t1

0xcedb,	// (0x000786d7) cell_month_view_pane_g1

0x91bb,	// (0x000749b7) cell_month_view_pane_t1

0x94ba,	// (0x00074cb6) main_fps_pane

0xe73f,	// (0x00079f3b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe73f,	// (0x00079f3b) cmail_ddmenu_btn02_pane_cp1

0xe75b,	// (0x00079f57) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe75b,	// (0x00079f57) cmail_ddmenu_btn02_pane_cp2

0x88da,	// (0x000740d6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88da,	// (0x000740d6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007b629) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007b629) cmail_ddmenu_btn02_pane_g

0x88f8,	// (0x000740f4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88f8,	// (0x000740f4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007b62e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007b62e) cmail_ddmenu_btn02_pane_t

0x91ce,	// (0x000749ca) fps_text_pane_ParamLimits

0x91ce,	// (0x000749ca) fps_text_pane

0x91e5,	// (0x000749e1) main_fps_pane_g1_ParamLimits

0x91e5,	// (0x000749e1) main_fps_pane_g1

0x91ff,	// (0x000749fb) wait_bar_pane_cp010_ParamLimits

0x91ff,	// (0x000749fb) wait_bar_pane_cp010

0x9210,	// (0x00074a0c) fps_text_pane_t1_ParamLimits

0x9210,	// (0x00074a0c) fps_text_pane_t1

0xde11,	// (0x0007960d) cam4_image_uncrop_pane_g1

0xde1a,	// (0x00079616) cam4_image_uncrop_pane_g2

0x5aee,	// (0x000712ea) cam4_image_uncrop_pane_g3

0x5af7,	// (0x000712f3) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007b0ea) cam4_image_uncrop_pane_g

0x8fd8,	// (0x000747d4) dia3_listrow_pane_ParamLimits

0x94ba,	// (0x00074cb6) main_phob2_pane

0x83ca,	// (0x00073bc6) cell_tport_appsw_pane_cp02_ParamLimits

0x83ca,	// (0x00073bc6) cell_tport_appsw_pane_cp02

0x83de,	// (0x00073bda) cell_tport_appsw_pane_cp03_ParamLimits

0x83de,	// (0x00073bda) cell_tport_appsw_pane_cp03

0x94ba,	// (0x00074cb6) phob2_contact_card_pane

0x94ba,	// (0x00074cb6) phob2_listscroll_pane

0xef8d,	// (0x0007a789) phob2_list_pane

0xef95,	// (0x0007a791) scroll_pane_cp034

0x9228,	// (0x00074a24) phob2_cc_data_pane_ParamLimits

0x9228,	// (0x00074a24) phob2_cc_data_pane

0x9247,	// (0x00074a43) phob2_cc_listscroll_pane_ParamLimits

0x9247,	// (0x00074a43) phob2_cc_listscroll_pane

0x9265,	// (0x00074a61) list_double_large_graphic_phob2_pane_ParamLimits

0x9265,	// (0x00074a61) list_double_large_graphic_phob2_pane

0x9277,	// (0x00074a73) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9277,	// (0x00074a73) list_double_large_graphic_phob2_pane_g1

0x928d,	// (0x00074a89) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x928d,	// (0x00074a89) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfedf,	// (0x0007b6db) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfedf,	// (0x0007b6db) list_double_large_graphic_phob2_pane_g

0x9299,	// (0x00074a95) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9299,	// (0x00074a95) list_double_large_graphic_phob2_pane_t1

0x92ae,	// (0x00074aaa) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92ae,	// (0x00074aaa) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee4,	// (0x0007b6e0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee4,	// (0x0007b6e0) list_double_large_graphic_phob2_pane_t

0x94ba,	// (0x00074cb6) list_highlight_pane_cp024

0x92c0,	// (0x00074abc) phob2_cc_button_pane

0x92c8,	// (0x00074ac4) phob2_cc_data_pane_g1_ParamLimits

0x92c8,	// (0x00074ac4) phob2_cc_data_pane_g1

0x92dd,	// (0x00074ad9) phob2_cc_data_pane_g2_ParamLimits

0x92dd,	// (0x00074ad9) phob2_cc_data_pane_g2

0x0001,

0xfee9,	// (0x0007b6e5) phob2_cc_data_pane_g_ParamLimits

0xfee9,	// (0x0007b6e5) phob2_cc_data_pane_g

0x92ed,	// (0x00074ae9) phob2_cc_data_pane_t1_ParamLimits

0x92ed,	// (0x00074ae9) phob2_cc_data_pane_t1

0x9305,	// (0x00074b01) phob2_cc_data_pane_t2_ParamLimits

0x9305,	// (0x00074b01) phob2_cc_data_pane_t2

0x931d,	// (0x00074b19) phob2_cc_data_pane_t3_ParamLimits

0x931d,	// (0x00074b19) phob2_cc_data_pane_t3

0x0002,

0xfeee,	// (0x0007b6ea) phob2_cc_data_pane_t_ParamLimits

0xfeee,	// (0x0007b6ea) phob2_cc_data_pane_t

0xef9d,	// (0x0007a799) phob2_cc_list_pane_ParamLimits

0xef9d,	// (0x0007a799) phob2_cc_list_pane

0xd9e0,	// (0x000791dc) scroll_pane_cp035_ParamLimits

0xd9e0,	// (0x000791dc) scroll_pane_cp035

0xa5b6,	// (0x00075db2) bg_button_pane_cp033

0xefa9,	// (0x0007a7a5) phob2_cc_button_pane_g1

0xefb5,	// (0x0007a7b1) phob2_cc_button_pane_t1

0xefca,	// (0x0007a7c6) phob2_cc_button_pane_t2

0x0001,

0x010a,	// (0x0006b906) phob2_cc_button_pane_t

0x9335,	// (0x00074b31) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9335,	// (0x00074b31) list_double_large_graphic_phob2_cc_pane

0x9347,	// (0x00074b43) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9347,	// (0x00074b43) list_double_large_graphic_phob2_cc_pane_g1

0x9353,	// (0x00074b4f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9353,	// (0x00074b4f) list_double_large_graphic_phob2_cc_pane_g2

0x935f,	// (0x00074b5b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x935f,	// (0x00074b5b) list_double_large_graphic_phob2_cc_pane_g3

0x936b,	// (0x00074b67) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x936b,	// (0x00074b67) list_double_large_graphic_phob2_cc_pane_g4

0xaa03,	// (0x000761ff) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaa03,	// (0x000761ff) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfef5,	// (0x0007b6f1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfef5,	// (0x0007b6f1) list_double_large_graphic_phob2_cc_pane_g

0x9377,	// (0x00074b73) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9377,	// (0x00074b73) list_double_large_graphic_phob2_cc_pane_t1

0x93a0,	// (0x00074b9c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93a0,	// (0x00074b9c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff00,	// (0x0007b6fc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff00,	// (0x0007b6fc) list_double_large_graphic_phob2_cc_pane_t

0xefdc,	// (0x0007a7d8) list_highlight_pane_cp025_ParamLimits

0xefdc,	// (0x0007a7d8) list_highlight_pane_cp025

0xa5b6,	// (0x00075db2) bg_button_pane_cp033_ParamLimits

0xefa9,	// (0x0007a7a5) phob2_cc_button_pane_g1_ParamLimits

0xefb5,	// (0x0007a7b1) phob2_cc_button_pane_t1_ParamLimits

0xefca,	// (0x0007a7c6) phob2_cc_button_pane_t2_ParamLimits

0x010a,	// (0x0006b906) phob2_cc_button_pane_t_ParamLimits

0x0447,	// (0x0006bc43) popup_wgtman_window

0xd825,	// (0x00079021) scroll_pane_cp038

0x8d25,	// (0x00074521) wgtman_btn_pane_cp_01_ParamLimits

0x8d25,	// (0x00074521) wgtman_btn_pane_cp_01

0xefea,	// (0x0007a7e6) wgtman_content_pane

0xeff3,	// (0x0007a7ef) wgtman_heading_pane

0x94ba,	// (0x00074cb6) bg_heading_pane_cp02

0xeffc,	// (0x0007a7f8) wgtman_heading_pane_g1

0xf004,	// (0x0007a800) wgtman_heading_pane_t1

0xf012,	// (0x0007a80e) scroll_pane_cp036

0xf01a,	// (0x0007a816) wgtman_list_pane

0xf022,	// (0x0007a81e) wgtman_list_pane_t1_ParamLimits

0xf022,	// (0x0007a81e) wgtman_list_pane_t1

0x9dc7,	// (0x000755c3) cam4_grid_pane

0x67ac,	// (0x00071fa8) bg_button_pane_cp015_ParamLimits

0x67be,	// (0x00071fba) bg_button_pane_cp016_ParamLimits

0x67d1,	// (0x00071fcd) bg_button_pane_cp017_ParamLimits

0x6829,	// (0x00072025) popup_vitu2_query_window_g3_ParamLimits

0x6829,	// (0x00072025) popup_vitu2_query_window_g3

0x68e6,	// (0x000720e2) popup_vitu2_query_window_t6_ParamLimits

0x68e6,	// (0x000720e2) popup_vitu2_query_window_t6

0x6911,	// (0x0007210d) popup_vitu2_query_window_t7_ParamLimits

0x6911,	// (0x0007210d) popup_vitu2_query_window_t7

0xde11,	// (0x0007960d) cam4_grid_pane_g1

0xde1a,	// (0x00079616) cam4_grid_pane_g2

0xf03c,	// (0x0007a838) cam4_grid_pane_g3

0xf045,	// (0x0007a841) cam4_grid_pane_g4

0x0003,

0xff05,	// (0x0007b701) cam4_grid_pane_g

0x147b,	// (0x0006cc77) aid_placing_vt_slider_lsc_ParamLimits

0x1786,	// (0x0006cf82) vidtel_button_pane_ParamLimits

0x1786,	// (0x0006cf82) vidtel_button_pane

0xf050,	// (0x0007a84c) bg_button_pane_cp034

0x93c9,	// (0x00074bc5) vidtel_button_pane_g1

0xf05a,	// (0x0007a856) vidtel_button_pane_t1

0xd927,	// (0x00079123) aid_size_vtel_slider_touch

0xd9e0,	// (0x000791dc) scroll_pane_cp039

0xe207,	// (0x00079a03) ncim_query_button_pane_cp01_ParamLimits

0xe226,	// (0x00079a22) ncimui_query_pane_g1_ParamLimits

0xa5b6,	// (0x00075db2) input_focus_pane_cp012_ParamLimits

0xe24b,	// (0x00079a47) ncim_query_entry_pane_t1_ParamLimits

0xd9e0,	// (0x000791dc) scroll_pane_cp039_ParamLimits

0xb2f8,	// (0x00076af4) navi_pane_bcale_mc_g1

0xb300,	// (0x00076afc) navi_pane_bcale_mc_t1

0xe7a4,	// (0x00079fa0) main_sp_fs_email_pane_g1

0xe7b0,	// (0x00079fac) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007b4e1) main_sp_fs_email_pane_g

0xea05,	// (0x0007a201) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea05,	// (0x0007a201) list_single_cale_mrui_row_pane_g3

0x8920,	// (0x0007411c) list_single_recal_day_pane_g5_event_pane

0xa9ce,	// (0x000761ca) list_single_recal_day_pane_g7

0xf068,	// (0x0007a864) list_recal_day_event_pane_cp01

0xf071,	// (0x0007a86d) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0007a875) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0007a87d) list_recal_vselct_pane_cp01

0xd949,	// (0x00079145) list_recal_day_event_pane_cp01_g1

0xaa0f,	// (0x0007620b) list_recal_day_event_pane_cp01_t1

0xa9d6,	// (0x000761d2) list_single_recal_day_pane_t1_ParamLimits

0xa9e8,	// (0x000761e4) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007b63e) list_single_recal_day_pane_t_ParamLimits

0xa2c7,	// (0x00075ac3) bg_notes_pane_ParamLimits

0xa36a,	// (0x00075b66) list_notes_pane_ParamLimits

0x0790,	// (0x0006bf8c) scroll_pane_cp06_ParamLimits

0xa38c,	// (0x00075b88) main_notes_pane_ParamLimits

0x94ba,	// (0x00074cb6) main_welc_pane

0x93d1,	// (0x00074bcd) main_welc_body_pane_ParamLimits

0x93d1,	// (0x00074bcd) main_welc_body_pane

0x93ef,	// (0x00074beb) main_welc_opti_pane_ParamLimits

0x93ef,	// (0x00074beb) main_welc_opti_pane

0x9434,	// (0x00074c30) main_welc_pane_t1_ParamLimits

0x9434,	// (0x00074c30) main_welc_pane_t1

0x9452,	// (0x00074c4e) main_welc_body_row_pane_ParamLimits

0x9452,	// (0x00074c4e) main_welc_body_row_pane

0xe869,	// (0x0007a065) main_welc_opti_row_pane_ParamLimits

0xe869,	// (0x0007a065) main_welc_opti_row_pane

0xf08b,	// (0x0007a887) main_welc_opti_row_pane_g1

0x9466,	// (0x00074c62) main_welc_opti_row_pane_t1

0xf093,	// (0x0007a88f) main_welc_body_row_pane_t1

0xed78,	// (0x0007a574) popup_notif_wgt_heading_pane

0xed92,	// (0x0007a58e) aid_size_list_notif_wgt_del_ParamLimits

0xed9f,	// (0x0007a59b) list_notif_wgt_row_pane_g1_ParamLimits

0xedab,	// (0x0007a5a7) list_notif_wgt_row_pane_g2_ParamLimits

0xedbf,	// (0x0007a5bb) list_notif_wgt_row_pane_g3_ParamLimits

0x0079,	// (0x0006b875) list_notif_wgt_row_pane_g_ParamLimits

0xedcc,	// (0x0007a5c8) list_notif_wgt_row_pane_t1_ParamLimits

0xede2,	// (0x0007a5de) list_notif_wgt_row_pane_t2_ParamLimits

0xedf4,	// (0x0007a5f0) list_notif_wgt_row_pane_t3_ParamLimits

0x0080,	// (0x0006b87c) list_notif_wgt_row_pane_t_ParamLimits

0x8dbe,	// (0x000745ba) listrow_wgtman_pane_g1_ParamLimits

0x8dcb,	// (0x000745c7) listrow_wgtman_pane_g2_ParamLimits

0xfe98,	// (0x0007b694) listrow_wgtman_pane_g_ParamLimits

0x8de9,	// (0x000745e5) listrow_wgtman_pane_t1_ParamLimits

0x8e01,	// (0x000745fd) listrow_wgtman_pane_t2_ParamLimits

0xfe9d,	// (0x0007b699) listrow_wgtman_pane_t_ParamLimits

0x8e27,	// (0x00074623) wait_bar_pane_cp09_ParamLimits

0x94ba,	// (0x00074cb6) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0007a89e) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0007a8a6) popup_notif_wgt_heading_pane_t1

0x94ba,	// (0x00074cb6) main_vids_pane

0x94ba,	// (0x00074cb6) vids_listscroll_pane

0x9475,	// (0x00074c71) scroll_pane_cp040

0x94ba,	// (0x00074cb6) vids_list_pane

0x9480,	// (0x00074c7c) vids_list_double_pane_ParamLimits

0x9480,	// (0x00074c7c) vids_list_double_pane

0x9491,	// (0x00074c8d) vids_list_double_pane_g1

0x949a,	// (0x00074c96) vids_list_double_pane_t1

0x94aa,	// (0x00074ca6) vids_list_double_pane_t2

0x0001,

0xff13,	// (0x0007b70f) vids_list_double_pane_t

0x9532,	// (0x00074d2e) main_ncimui_pane_ParamLimits

0x7533,	// (0x00072d2f) main_ncimui_pane_g1_ParamLimits

0x753f,	// (0x00072d3b) main_ncimui_pane_g2_ParamLimits

0x753f,	// (0x00072d3b) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007b3e6) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007b3e6) main_ncimui_pane_g

0x940a,	// (0x00074c06) main_welc_pane_g1_ParamLimits

0x940a,	// (0x00074c06) main_welc_pane_g1

0x941f,	// (0x00074c1b) main_welc_pane_g2_ParamLimits

0x941f,	// (0x00074c1b) main_welc_pane_g2

0x0001,

0xff0e,	// (0x0007b70a) main_welc_pane_g_ParamLimits

0xff0e,	// (0x0007b70a) main_welc_pane_g

0xa2c7,	// (0x00075ac3) listscroll_mce_pane_ParamLimits

0xb44d,	// (0x00076c49) wait_bar_pane_cp10

0xc84f,	// (0x0007804b) main_cale_day_pane_ParamLimits

0xc84f,	// (0x0007804b) main_cale_week_pane_ParamLimits

0xa2c7,	// (0x00075ac3) main_messa_pane_ParamLimits

0x4e2a,	// (0x00070626) main_clock2_btn_pane_ParamLimits

0x4e2a,	// (0x00070626) main_clock2_btn_pane

0xd083,	// (0x0007887f) main_clock2_btn_pane_cp01_ParamLimits

0xd083,	// (0x0007887f) main_clock2_btn_pane_cp01

0xe9d6,	// (0x0007a1d2) list_cale_mrui_pane_ParamLimits

0xee2a,	// (0x0007a626) main_cf0_pane_g2

0x0001,

0x0087,	// (0x0006b883) main_cf0_pane_g

0x8ffa,	// (0x000747f6) area_left_week_number_pane_ParamLimits

0x9006,	// (0x00074802) area_top_day_name_pane_ParamLimits

0x9019,	// (0x00074815) frame_month_view_pane_ParamLimits

0xef52,	// (0x0007a74e) grid_month_view_pane_ParamLimits

0xef60,	// (0x0007a75c) frm_month_g1_ParamLimits

0x909a,	// (0x00074896) frm_month_g2_ParamLimits

0x90ad,	// (0x000748a9) frm_month_g3_ParamLimits

0x90c0,	// (0x000748bc) frm_month_g4_ParamLimits

0x90d3,	// (0x000748cf) frm_month_g5_ParamLimits

0x90e6,	// (0x000748e2) frm_month_g6_ParamLimits

0x90f9,	// (0x000748f5) frm_month_g7_ParamLimits

0xef6d,	// (0x0007a769) frm_month_g8_ParamLimits

0x910c,	// (0x00074908) frm_month_g9_ParamLimits

0x911c,	// (0x00074918) frm_month_g10_ParamLimits

0x912c,	// (0x00074928) frm_month_g11_ParamLimits

0x913c,	// (0x00074938) frm_month_g12_ParamLimits

0x914e,	// (0x0007494a) frm_month_g13_ParamLimits

0x9160,	// (0x0007495c) frm_month_g14_ParamLimits

0x9174,	// (0x00074970) frm_month_g15_ParamLimits

0x9188,	// (0x00074984) frm_month_g16_ParamLimits

0xfebe,	// (0x0007b6ba) frm_month_g_ParamLimits

0xef7a,	// (0x0007a776) cell_top_day_name_pane_t1_ParamLimits

0x919c,	// (0x00074998) cell_area_left_week_number_pane_g1_ParamLimits

0x91a8,	// (0x000749a4) cell_area_left_week_number_pane_t1_ParamLimits

0xcedb,	// (0x000786d7) cell_month_view_pane_g1_ParamLimits

0x91bb,	// (0x000749b7) cell_month_view_pane_t1_ParamLimits

0xa2bf,	// (0x00075abb) main_clock2_btn_pane_g1

0xf0b8,	// (0x0007a8b4) main_clock2_btn_pane_t1

0xa5b6,	// (0x00075db2) listscroll_cmail_pane_ParamLimits

0xe7a4,	// (0x00079fa0) main_sp_fs_email_pane_g1_ParamLimits

0xe7b0,	// (0x00079fac) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007b4e1) main_sp_fs_email_pane_g_ParamLimits

0xeae5,	// (0x0007a2e1) list_recal_day_pane_ParamLimits

0xeaf6,	// (0x0007a2f2) mian_recal_day_pane_t1

0x804d,	// (0x00073849) list_single_dyc_row_text_pane_t4_ParamLimits

0x804d,	// (0x00073849) list_single_dyc_row_text_pane_t4

0x8096,	// (0x00073892) list_single_dyc_row_text_pane_t5_ParamLimits

0x8096,	// (0x00073892) list_single_dyc_row_text_pane_t5

0xa78f,	// (0x00075f8b) list_single_dyc_row_text_pane_t6_ParamLimits

0xa78f,	// (0x00075f8b) list_single_dyc_row_text_pane_t6

0x2452,	// (0x0006dc4e) aid_mgn_list_cale_time_pane

0x9532,	// (0x00074d2e) main_gallery2_pane_ParamLimits

0xd099,	// (0x00078895) main_clock2_pane_cp01_t1

0xd0a9,	// (0x000788a5) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0007afc0) main_clock2_pane_cp01_t

0x0b4a,	// (0x0006c346) cale_week_scroll_pane_g16_ParamLimits

0x0b4a,	// (0x0006c346) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
