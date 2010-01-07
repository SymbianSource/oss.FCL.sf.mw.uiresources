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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00021c79 };

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
0x3359,	// (0x00024fd2) Screen

0x3363,	// (0x00024fdc) application_window

0x33bc,	// (0x00025035) area_bottom_pane_ParamLimits

0x33bc,	// (0x00025035) area_bottom_pane

0x33fc,	// (0x00025075) area_top_pane_ParamLimits

0x33fc,	// (0x00025075) area_top_pane

0x3451,	// (0x000250ca) call_video_uplink_pane_ParamLimits

0x3451,	// (0x000250ca) call_video_uplink_pane

0x3481,	// (0x000250fa) main_pane_ParamLimits

0x3481,	// (0x000250fa) main_pane

0xc9b2,	// (0x0002e62b) context_pane

0x688a,	// (0x00028503) navi_pane

0x68b3,	// (0x0002852c) popup_cale_events_window_ParamLimits

0x68b3,	// (0x0002852c) popup_cale_events_window

0xc9c5,	// (0x0002e63e) popup_mup_playback_window

0x68cb,	// (0x00028544) signal_pane

0x3f6f,	// (0x00025be8) main_browser_pane

0xb473,	// (0x0002d0ec) main_burst_pane

0x3597,	// (0x00025210) main_calc_pane

0xb473,	// (0x0002d0ec) main_cale_day_pane

0x418c,	// (0x00025e05) main_cale_month_pane

0xb473,	// (0x0002d0ec) main_cale_week_pane

0xb473,	// (0x0002d0ec) main_call_pane

0x3a5e,	// (0x000256d7) main_call_poc_pane

0xb473,	// (0x0002d0ec) main_camera_pane

0xb473,	// (0x0002d0ec) main_chi_dic_pane

0xb272,	// (0x0002ceeb) main_clock_pane

0x3a5e,	// (0x000256d7) main_fmradio_pane

0xb473,	// (0x0002d0ec) main_graph_messa_pane

0x3a5e,	// (0x000256d7) main_help_pane

0x3f6f,	// (0x00025be8) main_im_pane

0x3cb9,	// (0x00025932) main_image_pane_ParamLimits

0x3cb9,	// (0x00025932) main_image_pane

0x3a5e,	// (0x000256d7) main_location2_pane

0xb473,	// (0x0002d0ec) main_location_pane

0x3a5e,	// (0x000256d7) main_messa_pane

0x3a5e,	// (0x000256d7) main_mp2_pane

0xb473,	// (0x0002d0ec) main_mp_pane

0x3a5e,	// (0x000256d7) main_msg_pane

0x3a5e,	// (0x000256d7) main_mup_eq_pane

0x3a5e,	// (0x000256d7) main_mup_pane

0xb473,	// (0x0002d0ec) main_notes_pane

0x3a5e,	// (0x000256d7) main_pec_pane

0x3a5e,	// (0x000256d7) main_phob_pane

0x3a5e,	// (0x000256d7) main_pinb_pane

0x3a5e,	// (0x000256d7) main_postcard_pane

0x3a5e,	// (0x000256d7) main_qdial_pane

0xb473,	// (0x0002d0ec) main_skin_pane

0x3a5e,	// (0x000256d7) main_smil2_pane

0xb473,	// (0x0002d0ec) main_smil_pane

0xb473,	// (0x0002d0ec) main_video_pane

0xb473,	// (0x0002d0ec) main_video_tele_pane

0x3cb9,	// (0x00025932) main_viewer_pane_ParamLimits

0x3cb9,	// (0x00025932) main_viewer_pane

0xb473,	// (0x0002d0ec) main_vorec_pane

0x666a,	// (0x000282e3) popup_blid_sat_info_window_ParamLimits

0x666a,	// (0x000282e3) popup_blid_sat_info_window

0x66c0,	// (0x00028339) popup_dyc_status_message_window_ParamLimits

0x66c0,	// (0x00028339) popup_dyc_status_message_window

0x66d6,	// (0x0002834f) popup_grid_large_graphic_window_ParamLimits

0x66d6,	// (0x0002834f) popup_grid_large_graphic_window

0x676c,	// (0x000283e5) popup_loc_request_window_ParamLimits

0x676c,	// (0x000283e5) popup_loc_request_window

0x6864,	// (0x000284dd) popup_wml_address_window_ParamLimits

0x6864,	// (0x000284dd) popup_wml_address_window

0x64c0,	// (0x00028139) call_muted_g1

0x61e5,	// (0x00027e5e) popup_call_audio_conf_window_ParamLimits

0x61e5,	// (0x00027e5e) popup_call_audio_conf_window

0x64d0,	// (0x00028149) popup_call_audio_first_window_ParamLimits

0x64d0,	// (0x00028149) popup_call_audio_first_window

0x652e,	// (0x000281a7) popup_call_audio_in_window_ParamLimits

0x652e,	// (0x000281a7) popup_call_audio_in_window

0x655a,	// (0x000281d3) popup_call_audio_out_window_ParamLimits

0x655a,	// (0x000281d3) popup_call_audio_out_window

0x6588,	// (0x00028201) popup_call_audio_second_window_ParamLimits

0x6588,	// (0x00028201) popup_call_audio_second_window

0x65ce,	// (0x00028247) popup_call_audio_wait_window_ParamLimits

0x65ce,	// (0x00028247) popup_call_audio_wait_window

0x6601,	// (0x0002827a) popup_number_entry_window_ParamLimits

0x6601,	// (0x0002827a) popup_number_entry_window

0x35f5,	// (0x0002526e) bg_popup_call_pane_cp05_ParamLimits

0x35f5,	// (0x0002526e) bg_popup_call_pane_cp05

0x3615,	// (0x0002528e) popup_number_entry_window_t1

0x3628,	// (0x000252a1) popup_number_entry_window_t2

0x363a,	// (0x000252b3) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00030d74) popup_number_entry_window_t

0x3680,	// (0x000252f9) text_title_cp2

0x3693,	// (0x0002530c) bg_popup_call_pane_cp_ParamLimits

0x3693,	// (0x0002530c) bg_popup_call_pane_cp

0x36a1,	// (0x0002531a) call_thumbnail_pane

0x36a9,	// (0x00025322) popup_call_audio_in_window_g1_ParamLimits

0x36a9,	// (0x00025322) popup_call_audio_in_window_g1

0x36b5,	// (0x0002532e) popup_call_audio_in_window_g2_ParamLimits

0x36b5,	// (0x0002532e) popup_call_audio_in_window_g2

0x36c1,	// (0x0002533a) popup_call_audio_in_window_g3_ParamLimits

0x36c1,	// (0x0002533a) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00030d7d) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00030d7d) popup_call_audio_in_window_g

0x36cd,	// (0x00025346) popup_call_audio_in_window_t1_ParamLimits

0x36cd,	// (0x00025346) popup_call_audio_in_window_t1

0x36e8,	// (0x00025361) popup_call_audio_in_window_t2_ParamLimits

0x36e8,	// (0x00025361) popup_call_audio_in_window_t2

0x3703,	// (0x0002537c) popup_call_audio_in_window_t3_ParamLimits

0x3703,	// (0x0002537c) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00030d84) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00030d84) popup_call_audio_in_window_t

0x3693,	// (0x0002530c) bg_popup_call_pane_cp01_ParamLimits

0x3693,	// (0x0002530c) bg_popup_call_pane_cp01

0x36a1,	// (0x0002531a) call_thumbnail_pane_cp02

0x3716,	// (0x0002538f) call_type_pane_cp022

0x371e,	// (0x00025397) popup_call_audio_out_window_g1_ParamLimits

0x371e,	// (0x00025397) popup_call_audio_out_window_g1

0x3730,	// (0x000253a9) popup_call_audio_out_window_g2_ParamLimits

0x3730,	// (0x000253a9) popup_call_audio_out_window_g2

0x373c,	// (0x000253b5) popup_call_audio_out_window_g3_ParamLimits

0x373c,	// (0x000253b5) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00030d8b) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00030d8b) popup_call_audio_out_window_g

0x374e,	// (0x000253c7) popup_call_audio_out_window_t1_ParamLimits

0x374e,	// (0x000253c7) popup_call_audio_out_window_t1

0x3766,	// (0x000253df) popup_call_audio_out_window_t2_ParamLimits

0x3766,	// (0x000253df) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00030d92) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00030d92) popup_call_audio_out_window_t

0x377b,	// (0x000253f4) bg_popup_call_pane_ParamLimits

0x377b,	// (0x000253f4) bg_popup_call_pane

0x37ff,	// (0x00025478) call_thumbnail_pane_cp_ParamLimits

0x37ff,	// (0x00025478) call_thumbnail_pane_cp

0x3823,	// (0x0002549c) call_type_pane_cp01_ParamLimits

0x3823,	// (0x0002549c) call_type_pane_cp01

0x3867,	// (0x000254e0) popup_call_audio_first_window_g1_ParamLimits

0x3867,	// (0x000254e0) popup_call_audio_first_window_g1

0x38b3,	// (0x0002552c) popup_call_audio_first_window_g2_ParamLimits

0x38b3,	// (0x0002552c) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00030d97) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00030d97) popup_call_audio_first_window_g

0x38f7,	// (0x00025570) popup_call_audio_first_window_t1_ParamLimits

0x38f7,	// (0x00025570) popup_call_audio_first_window_t1

0x39a3,	// (0x0002561c) popup_call_audio_first_window_t4_ParamLimits

0x39a3,	// (0x0002561c) popup_call_audio_first_window_t4

0x3a2f,	// (0x000256a8) popup_call_audio_first_window_t5_ParamLimits

0x3a2f,	// (0x000256a8) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00030d9c) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00030d9c) popup_call_audio_first_window_t

0x3a5e,	// (0x000256d7) bg_popup_call_pane_cp02

0x3a68,	// (0x000256e1) call_type_pane_cp023

0x3a70,	// (0x000256e9) popup_call_audio_wait_window_g1

0x3a78,	// (0x000256f1) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00030da3) popup_call_audio_wait_window_g

0x3a80,	// (0x000256f9) popup_call_audio_wait_window_t3

0x3a8e,	// (0x00025707) bg_popup_call_pane_cp03_ParamLimits

0x3a8e,	// (0x00025707) bg_popup_call_pane_cp03

0x3aee,	// (0x00025767) call_thumbnail_pane_cp011_ParamLimits

0x3aee,	// (0x00025767) call_thumbnail_pane_cp011

0x3afa,	// (0x00025773) call_type_pane_cp034_ParamLimits

0x3afa,	// (0x00025773) call_type_pane_cp034

0x3b36,	// (0x000257af) popup_call_audio_second_window_g1_ParamLimits

0x3b36,	// (0x000257af) popup_call_audio_second_window_g1

0x3b72,	// (0x000257eb) popup_call_audio_second_window_g2_ParamLimits

0x3b72,	// (0x000257eb) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00030da8) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00030da8) popup_call_audio_second_window_g

0x3bae,	// (0x00025827) popup_call_audio_second_window_t1_ParamLimits

0x3bae,	// (0x00025827) popup_call_audio_second_window_t1

0x3c2f,	// (0x000258a8) popup_call_audio_second_window_t2_ParamLimits

0x3c2f,	// (0x000258a8) popup_call_audio_second_window_t2

0x3c65,	// (0x000258de) popup_call_audio_second_window_t3_ParamLimits

0x3c65,	// (0x000258de) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00030dad) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00030dad) popup_call_audio_second_window_t

0x3a5e,	// (0x000256d7) bg_popup_call_pane_cp04

0x3c9b,	// (0x00025914) list_conf_pane

0x3ca3,	// (0x0002591c) popup_call_audio_conf_window_t1

0x3cb1,	// (0x0002592a) call_thumbnail_pane_g1

0x3cb9,	// (0x00025932) bg_pinb_pane_ParamLimits

0x3cb9,	// (0x00025932) bg_pinb_pane

0x3cc7,	// (0x00025940) find_pinb_pane

0x3cd0,	// (0x00025949) listscroll_pinb_pane_ParamLimits

0x3cd0,	// (0x00025949) listscroll_pinb_pane

0x3cdf,	// (0x00025958) pinb_bg_pane_g1

0x3ce9,	// (0x00025962) pinb_bg_pane_g2

0x3cf3,	// (0x0002596c) pinb_bg_pane_g3

0x3cfd,	// (0x00025976) pinb_bg_pane_g4

0x3d07,	// (0x00025980) pinb_bg_pane_g5

0x3d11,	// (0x0002598a) pinb_bg_pane_g6

0x3d1a,	// (0x00025993) pinb_bg_pane_g7

0x3d23,	// (0x0002599c) pinb_bg_pane_g8

0x3d2e,	// (0x000259a7) pinb_bg_pane_g9

0x3d38,	// (0x000259b1) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00030db4) pinb_bg_pane_g

0x3d53,	// (0x000259cc) grid_pinb_pane

0x3d5c,	// (0x000259d5) list_pinb_pane

0x3d65,	// (0x000259de) scroll_pane_cp01_ParamLimits

0x3d65,	// (0x000259de) scroll_pane_cp01

0x3d77,	// (0x000259f0) find_pinb_pane_g1_ParamLimits

0x3d77,	// (0x000259f0) find_pinb_pane_g1

0x3d8f,	// (0x00025a08) find_pinb_pane_t1

0x3da1,	// (0x00025a1a) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00030dce) find_pinb_pane_t

0x3db6,	// (0x00025a2f) input_focus_pane_cp01_ParamLimits

0x3db6,	// (0x00025a2f) input_focus_pane_cp01

0x3dc2,	// (0x00025a3b) cell_pinb_pane_ParamLimits

0x3dc2,	// (0x00025a3b) cell_pinb_pane

0x3ddd,	// (0x00025a56) cell_pinb_pane_g1_ParamLimits

0x3ddd,	// (0x00025a56) cell_pinb_pane_g1

0x3ded,	// (0x00025a66) cell_pinb_pane_g2_ParamLimits

0x3ded,	// (0x00025a66) cell_pinb_pane_g2

0x3df9,	// (0x00025a72) cell_pinb_pane_g3_ParamLimits

0x3df9,	// (0x00025a72) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00030dd3) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00030dd3) cell_pinb_pane_g

0x3a5e,	// (0x000256d7) grid_highlight_pane_cp01

0x3e05,	// (0x00025a7e) list_pinb_item_pane_ParamLimits

0x3e05,	// (0x00025a7e) list_pinb_item_pane

0x3a5e,	// (0x000256d7) list_highlight_pane_cp02

0x3e17,	// (0x00025a90) list_pinb_item_pane_g1_ParamLimits

0x3e17,	// (0x00025a90) list_pinb_item_pane_g1

0x3e24,	// (0x00025a9d) list_pinb_item_pane_g2_ParamLimits

0x3e24,	// (0x00025a9d) list_pinb_item_pane_g2

0x3e30,	// (0x00025aa9) list_pinb_item_pane_g3_ParamLimits

0x3e30,	// (0x00025aa9) list_pinb_item_pane_g3

0x3e41,	// (0x00025aba) list_pinb_item_pane_g4_ParamLimits

0x3e41,	// (0x00025aba) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00030dda) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00030dda) list_pinb_item_pane_g

0x3e4d,	// (0x00025ac6) list_pinb_item_pane_t1_ParamLimits

0x3e4d,	// (0x00025ac6) list_pinb_item_pane_t1

0x22cf,	// (0x00023f48) calc_display_pane

0x22eb,	// (0x00023f64) calc_paper_pane

0x230c,	// (0x00023f85) grid_calc_pane

0x3a5e,	// (0x000256d7) bg_list_pane_cp01

0x3e64,	// (0x00025add) clock_g1

0x3e6c,	// (0x00025ae5) clock_g2

0x0001,

0xf16a,	// (0x00030de3) clock_g

0x3e74,	// (0x00025aed) clock_t1_ParamLimits

0x3e74,	// (0x00025aed) clock_t1

0x3e89,	// (0x00025b02) clock_t2_ParamLimits

0x3e89,	// (0x00025b02) clock_t2

0x3e9b,	// (0x00025b14) clock_t3_ParamLimits

0x3e9b,	// (0x00025b14) clock_t3

0x3ead,	// (0x00025b26) clock_t4_ParamLimits

0x3ead,	// (0x00025b26) clock_t4

0x3ebf,	// (0x00025b38) clock_t5_ParamLimits

0x3ebf,	// (0x00025b38) clock_t5

0x3ed4,	// (0x00025b4d) clock_t6_ParamLimits

0x3ed4,	// (0x00025b4d) clock_t6

0x3ee6,	// (0x00025b5f) clock_t7_ParamLimits

0x3ee6,	// (0x00025b5f) clock_t7

0x3ef8,	// (0x00025b71) clock_t8_ParamLimits

0x3ef8,	// (0x00025b71) clock_t8

0x3f0a,	// (0x00025b83) clock_t9_ParamLimits

0x3f0a,	// (0x00025b83) clock_t9

0x0008,

0xf16f,	// (0x00030de8) clock_t_ParamLimits

0xf16f,	// (0x00030de8) clock_t

0x3f1c,	// (0x00025b95) popup_clock_analogue_window_cp02

0x3f1c,	// (0x00025b95) popup_clock_digital_window_cp01

0x3f24,	// (0x00025b9d) listscroll_help_pane

0x3a5e,	// (0x000256d7) phob_pre_status_pane

0x3f2e,	// (0x00025ba7) grid_qdial_pane

0x3a5e,	// (0x000256d7) listscroll_mce_pane

0x3f38,	// (0x00025bb1) bg_notes_pane

0x3f42,	// (0x00025bbb) list_notes_pane

0x3f4c,	// (0x00025bc5) scroll_pane_cp06

0x3f57,	// (0x00025bd0) bg_calc_paper_pane

0xa99b,	// (0x0002c614) list_calc_pane

0x3f6f,	// (0x00025be8) bg_calc_display_pane

0xa9b5,	// (0x0002c62e) calc_display_pane_t1

0xa9ca,	// (0x0002c643) calc_display_pane_t2

0xa9df,	// (0x0002c658) calc_display_pane_t3

0x0002,

0xf182,	// (0x00030dfb) calc_display_pane_t

0x2328,	// (0x00023fa1) cell_calc_pane_ParamLimits

0x2328,	// (0x00023fa1) cell_calc_pane

0x3f7b,	// (0x00025bf4) bg_calc_paper_pane_g1

0x3f87,	// (0x00025c00) bg_calc_paper_pane_g2

0x3f93,	// (0x00025c0c) bg_calc_paper_pane_g3

0x3f9f,	// (0x00025c18) bg_calc_paper_pane_g4

0x3fab,	// (0x00025c24) bg_calc_paper_pane_g5

0x3fb7,	// (0x00025c30) bg_calc_paper_pane_g6

0x3fc6,	// (0x00025c3f) bg_calc_paper_pane_g7

0x3fd5,	// (0x00025c4e) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00030e02) bg_calc_paper_pane_g

0x3fe4,	// (0x00025c5d) calc_bg_paper_pane_g9

0x3ff3,	// (0x00025c6c) list_calc_item_pane_ParamLimits

0x3ff3,	// (0x00025c6c) list_calc_item_pane

0x4007,	// (0x00025c80) list_calc_item_pane_g1

0xa9f1,	// (0x0002c66a) list_calc_item_pane_t1_ParamLimits

0xa9f1,	// (0x0002c66a) list_calc_item_pane_t1

0x235b,	// (0x00023fd4) list_calc_item_pane_t2_ParamLimits

0x235b,	// (0x00023fd4) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00030e13) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00030e13) list_calc_item_pane_t

0x4014,	// (0x00025c8d) cell_calc_pane_g1

0x401e,	// (0x00025c97) grid_highlight_pane_cp02

0x4040,	// (0x00025cb9) bg_calc_display_pane_g1

0xaa03,	// (0x0002c67c) bg_calc_display_pane_g2

0x4049,	// (0x00025cc2) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00030e1d) bg_calc_display_pane_g

0x2389,	// (0x00024002) cell_qdial_pane_ParamLimits

0x2389,	// (0x00024002) cell_qdial_pane

0x4052,	// (0x00025ccb) cell_qdial_pane_g1_ParamLimits

0x4052,	// (0x00025ccb) cell_qdial_pane_g1

0x4068,	// (0x00025ce1) cell_qdial_pane_g2_ParamLimits

0x4068,	// (0x00025ce1) cell_qdial_pane_g2

0x4079,	// (0x00025cf2) cell_qdial_pane_g3_ParamLimits

0x4079,	// (0x00025cf2) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00030e24) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00030e24) cell_qdial_pane_g

0x409b,	// (0x00025d14) cell_qdial_pane_t1_ParamLimits

0x409b,	// (0x00025d14) cell_qdial_pane_t1

0x40b3,	// (0x00025d2c) cell_qdial_pane_t2_ParamLimits

0x40b3,	// (0x00025d2c) cell_qdial_pane_t2

0x40c6,	// (0x00025d3f) cell_qdial_pane_t3_ParamLimits

0x40c6,	// (0x00025d3f) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00030e2d) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00030e2d) cell_qdial_pane_t

0x3a5e,	// (0x000256d7) grid_highlight_pane_cp04

0x40d9,	// (0x00025d52) thumbnail_qdial_pane_ParamLimits

0x40d9,	// (0x00025d52) thumbnail_qdial_pane

0x4135,	// (0x00025dae) list_help_pane

0x413f,	// (0x00025db8) scroll_pane_cp02

0x4148,	// (0x00025dc1) help_list_pane_t1_ParamLimits

0x4148,	// (0x00025dc1) help_list_pane_t1

0xaa0d,	// (0x0002c686) bg_notes_pane_g2

0xaa15,	// (0x0002c68e) bg_notes_pane_g3

0xaa1d,	// (0x0002c696) notes_bg_pane_g1

0xaa25,	// (0x0002c69e) notes_bg_pane_g4

0xaa2d,	// (0x0002c6a6) notes_bg_pane_g5

0xaa35,	// (0x0002c6ae) notes_bg_pane_g6

0xaa3d,	// (0x0002c6b6) notes_bg_pane_g7

0xaa45,	// (0x0002c6be) notes_bg_pane_g8

0xaa4d,	// (0x0002c6c6) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00030e4b) notes_bg_pane_g

0xaa55,	// (0x0002c6ce) list_notes_text_pane_ParamLimits

0xaa55,	// (0x0002c6ce) list_notes_text_pane

0x4164,	// (0x00025ddd) list_notes_text_pane_g1

0x416d,	// (0x00025de6) list_notes_text_pane_t1

0x418c,	// (0x00025e05) listscroll_cale_week_pane

0x41b6,	// (0x00025e2f) bg_cale_heading_pane

0x41ca,	// (0x00025e43) bg_cale_pane_cp01

0x41e3,	// (0x00025e5c) cale_week_corner_pane

0x41f9,	// (0x00025e72) cale_week_day_heading_pane

0x420d,	// (0x00025e86) cale_week_scroll_pane_g1

0x421e,	// (0x00025e97) cale_week_scroll_pane_g2

0x422f,	// (0x00025ea8) cale_week_scroll_pane_g3

0x4240,	// (0x00025eb9) cale_week_scroll_pane_g4

0x4251,	// (0x00025eca) cale_week_scroll_pane_g5

0x4262,	// (0x00025edb) cale_week_scroll_pane_g6

0x4273,	// (0x00025eec) cale_week_scroll_pane_g7

0x4284,	// (0x00025efd) cale_week_scroll_pane_g8

0x4297,	// (0x00025f10) cale_week_scroll_pane_g9

0x42a8,	// (0x00025f21) cale_week_scroll_pane_g10

0x42b9,	// (0x00025f32) cale_week_scroll_pane_g11

0x42ca,	// (0x00025f43) cale_week_scroll_pane_g12

0x42db,	// (0x00025f54) cale_week_scroll_pane_g13

0x42ec,	// (0x00025f65) cale_week_scroll_pane_g14

0x42fd,	// (0x00025f76) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00030e5a) cale_week_scroll_pane_g

0x430e,	// (0x00025f87) cale_week_time_pane

0x4321,	// (0x00025f9a) grid_cale_week_pane

0x4346,	// (0x00025fbf) scroll_pane_cp08

0x4360,	// (0x00025fd9) cell_cale_week_pane_ParamLimits

0x4360,	// (0x00025fd9) cell_cale_week_pane

0x439c,	// (0x00026015) cale_week_day_heading_pane_t1

0x43c6,	// (0x0002603f) cale_week_day_heading_pane_t2

0x43f0,	// (0x00026069) cale_week_day_heading_pane_t3

0x441a,	// (0x00026093) cale_week_day_heading_pane_t4

0x4444,	// (0x000260bd) cale_week_day_heading_pane_t5

0x446e,	// (0x000260e7) cale_week_day_heading_pane_t6

0x4498,	// (0x00026111) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00030e79) cale_week_day_heading_pane_t

0x44c2,	// (0x0002613b) bg_cale_side_pane

0x239b,	// (0x00024014) cale_week_time_pane_t1

0x23c7,	// (0x00024040) cale_week_time_pane_t2

0x23f3,	// (0x0002406c) cale_week_time_pane_t3

0x241f,	// (0x00024098) cale_week_time_pane_t4

0x244b,	// (0x000240c4) cale_week_time_pane_t5

0x2477,	// (0x000240f0) cale_week_time_pane_t6

0x24a3,	// (0x0002411c) cale_week_time_pane_t7

0x24cf,	// (0x00024148) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00030e88) cale_week_time_pane_t

0x44d0,	// (0x00026149) cell_cale_week_pane_g2

0x44e9,	// (0x00026162) cell_cale_week_pane_g3_ParamLimits

0x44e9,	// (0x00026162) cell_cale_week_pane_g3

0x4501,	// (0x0002617a) grid_highlight_pane_cp07

0x4509,	// (0x00026182) listscroll_gms_pane

0x4513,	// (0x0002618c) grid_gms_pane

0x451c,	// (0x00026195) listscroll_gms_pane_g1

0x4524,	// (0x0002619d) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00030e99) listscroll_gms_pane_g

0x452c,	// (0x000261a5) scroll_pane_cp010

0x4537,	// (0x000261b0) cell_gms_pane_ParamLimits

0x4537,	// (0x000261b0) cell_gms_pane

0x4547,	// (0x000261c0) cell_gms_pane_g1

0x454f,	// (0x000261c8) cell_gms_pane_g2

0x4164,	// (0x00025ddd) cell_gms_pane_g3

0x4557,	// (0x000261d0) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00030e9e) cell_gms_pane_g

0x4560,	// (0x000261d9) grid_highlight_pane_cp09

0x646e,	// (0x000280e7) phob_pre_status_pane_g1

0x6476,	// (0x000280ef) phob_pre_status_pane_g2

0x647e,	// (0x000280f7) phob_pre_status_pane_g3

0x6486,	// (0x000280ff) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x000312a0) phob_pre_status_pane_g

0x6496,	// (0x0002810f) phob_pre_status_pane_t1

0x64a4,	// (0x0002811d) phob_pre_status_pane_t2

0x64b2,	// (0x0002812b) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x000312ab) phob_pre_status_pane_t

0x3a5e,	// (0x000256d7) bg_list_pane_cp05

0x2503,	// (0x0002417c) grid_vorec_pane

0xaa69,	// (0x0002c6e2) vorec_t1

0xaa77,	// (0x0002c6f0) vorec_t2

0xaa85,	// (0x0002c6fe) vorec_t3

0xaa93,	// (0x0002c70c) vorec_t4

0xaaa1,	// (0x0002c71a) vorec_t5

0xaaaf,	// (0x0002c728) vorec_t6

0x0006,

0xf22e,	// (0x00030ea7) vorec_t

0xaacb,	// (0x0002c744) wait_bar_pane_cp01

0x4568,	// (0x000261e1) cell_vorec_pane_ParamLimits

0x4568,	// (0x000261e1) cell_vorec_pane

0x457b,	// (0x000261f4) cell_vorec_pane_g1

0x3a5e,	// (0x000256d7) grid_highlight_pane_cp05

0x4597,	// (0x00026210) cams_zoom_pane

0x45a6,	// (0x0002621f) image_vga_pane

0x45be,	// (0x00026237) main_camera_pane_g1

0x45ce,	// (0x00026247) main_camera_pane_g2

0x45de,	// (0x00026257) main_camera_pane_g3

0x45ee,	// (0x00026267) main_camera_pane_g4

0x45fe,	// (0x00026277) main_camera_pane_g5

0x460e,	// (0x00026287) main_camera_pane_g6

0x461e,	// (0x00026297) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00030eb6) main_camera_pane_g

0x463a,	// (0x000262b3) main_camera_pane_t1

0x4650,	// (0x000262c9) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00030ec7) main_camera_pane_t

0x4682,	// (0x000262fb) cams_zoom_pane_cp_ParamLimits

0x4682,	// (0x000262fb) cams_zoom_pane_cp

0x46aa,	// (0x00026323) image_cif_pane_ParamLimits

0x46aa,	// (0x00026323) image_cif_pane

0x46db,	// (0x00026354) image_subqcif_pane

0x46e3,	// (0x0002635c) main_video_pane_g1_ParamLimits

0x46e3,	// (0x0002635c) main_video_pane_g1

0x4707,	// (0x00026380) main_video_pane_g2_ParamLimits

0x4707,	// (0x00026380) main_video_pane_g2

0x473b,	// (0x000263b4) main_video_pane_g3_ParamLimits

0x473b,	// (0x000263b4) main_video_pane_g3

0x4769,	// (0x000263e2) main_video_pane_g4_ParamLimits

0x4769,	// (0x000263e2) main_video_pane_g4

0x4797,	// (0x00026410) main_video_pane_g5_ParamLimits

0x4797,	// (0x00026410) main_video_pane_g5

0x47af,	// (0x00026428) main_video_pane_g6_ParamLimits

0x47af,	// (0x00026428) main_video_pane_g6

0x0006,

0xf253,	// (0x00030ecc) main_video_pane_g_ParamLimits

0xf253,	// (0x00030ecc) main_video_pane_g

0x47d8,	// (0x00026451) main_video_pane_t1_ParamLimits

0x47d8,	// (0x00026451) main_video_pane_t1

0x4821,	// (0x0002649a) cams_zoom_pane_g1

0x482a,	// (0x000264a3) cams_zoom_pane_g2

0x4833,	// (0x000264ac) cams_zoom_pane_g3

0x483c,	// (0x000264b5) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00030edb) cams_zoom_pane_g

0x4859,	// (0x000264d2) grid_cams_pane

0x486e,	// (0x000264e7) linegrid_cams_pane

0x487f,	// (0x000264f8) cell_cams_pane_ParamLimits

0x487f,	// (0x000264f8) cell_cams_pane

0x489d,	// (0x00026516) cams_burst_image_pane

0x48a5,	// (0x0002651e) cell_cams_pane_g1

0x3a5e,	// (0x000256d7) grid_highlight_pane_cp03

0x4014,	// (0x00025c8d) mp_bg_pane_g1

0x3a5e,	// (0x000256d7) bg_list_pane_cp03

0xc88e,	// (0x0002e507) bg_mp_pane

0xc896,	// (0x0002e50f) grid_mp_pane

0xc89e,	// (0x0002e517) media_player_g1

0xc8a6,	// (0x0002e51f) media_player_t1

0xc8b4,	// (0x0002e52d) media_player_t2

0xc8c2,	// (0x0002e53b) media_player_t3

0xc8d0,	// (0x0002e549) media_player_t4

0xc8de,	// (0x0002e557) media_player_t5

0xc8ec,	// (0x0002e565) media_player_t6

0xc8fa,	// (0x0002e573) media_player_t7

0x0006,

0xf611,	// (0x0003128a) media_player_t

0xc908,	// (0x0002e581) wait_bar_pane_cp02

0xf5f6,	// (0x0003126f) main_usb_pane_t

0x6465,	// (0x000280de) cell_mp_pane

0x4014,	// (0x00025c8d) cell_mp_pane_g1

0x3a5e,	// (0x000256d7) grid_highlight_pane_cp06

0x499d,	// (0x00026616) grid_skin_colour_pane

0x49a5,	// (0x0002661e) list_highlight_pane_cp03

0x49ad,	// (0x00026626) skin_g1

0x49b5,	// (0x0002662e) skin_t1

0x49c4,	// (0x0002663d) skin_t2

0x0001,

0xf297,	// (0x00030f10) skin_t

0x49d2,	// (0x0002664b) cell_skin_colour_pane_ParamLimits

0x49d2,	// (0x0002664b) cell_skin_colour_pane

0x49ec,	// (0x00026665) cell_skin_colour_pane_g1

0x4a3e,	// (0x000266b7) call_video_g1_ParamLimits

0x4a3e,	// (0x000266b7) call_video_g1

0x4a54,	// (0x000266cd) call_video_g2_ParamLimits

0x4a54,	// (0x000266cd) call_video_g2

0x0001,

0xf29c,	// (0x00030f15) call_video_g_ParamLimits

0xf29c,	// (0x00030f15) call_video_g

0x4a8a,	// (0x00026703) call_video_uplink_pane_cp1_ParamLimits

0x4a8a,	// (0x00026703) call_video_uplink_pane_cp1

0x4ac1,	// (0x0002673a) call_video_uplink_pane_cp2

0x4af9,	// (0x00026772) video_down_crop_pane_ParamLimits

0x4af9,	// (0x00026772) video_down_crop_pane

0x4ba1,	// (0x0002681a) video_down_pane_ParamLimits

0x4ba1,	// (0x0002681a) video_down_pane

0x4c31,	// (0x000268aa) video_down_subqcif_pane_ParamLimits

0x4c31,	// (0x000268aa) video_down_subqcif_pane

0x4c49,	// (0x000268c2) video_down_subqcif_pane_cp_ParamLimits

0x4c49,	// (0x000268c2) video_down_subqcif_pane_cp

0x4c6d,	// (0x000268e6) im_reading_pane_ParamLimits

0x4c6d,	// (0x000268e6) im_reading_pane

0x4c7f,	// (0x000268f8) im_writing_pane_ParamLimits

0x4c7f,	// (0x000268f8) im_writing_pane

0x4c9d,	// (0x00026916) im_reading_pane_t1

0x4cd3,	// (0x0002694c) list_im_pane

0x4ce4,	// (0x0002695d) scroll_pane_cp07

0x4cfd,	// (0x00026976) im_writing_pane_t1_ParamLimits

0x4cfd,	// (0x00026976) im_writing_pane_t1

0x4d12,	// (0x0002698b) im_writing_pane_t2_ParamLimits

0x4d12,	// (0x0002698b) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00030f1f) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00030f1f) im_writing_pane_t

0x3a5e,	// (0x000256d7) input_focus_pane_cp04

0x3a5e,	// (0x000256d7) input_focus_pane_cp05

0x4d2f,	// (0x000269a8) list_im_single_pane_ParamLimits

0x4d2f,	// (0x000269a8) list_im_single_pane

0x4d45,	// (0x000269be) list_single_im_pane_t1

0x642b,	// (0x000280a4) blid_accuracy_pane

0x6433,	// (0x000280ac) blid_compass_pane

0x643b,	// (0x000280b4) main_location_t1

0x6449,	// (0x000280c2) main_location_t2

0x6457,	// (0x000280d0) main_location_t3

0x0002,

0xf620,	// (0x00031299) main_location_t

0x3a5e,	// (0x000256d7) aid_levels_location

0x4014,	// (0x00025c8d) blid_accuracy_pane_g1

0x4014,	// (0x00025c8d) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00030f81) blid_accuracy_pane_g

0xaae2,	// (0x0002c75b) wml_content_pane

0xab20,	// (0x0002c799) wml_button_pane_ParamLimits

0xab20,	// (0x0002c799) wml_button_pane

0x4d70,	// (0x000269e9) wml_list_single_large_pane_ParamLimits

0x4d70,	// (0x000269e9) wml_list_single_large_pane

0x4d84,	// (0x000269fd) wml_list_single_medium_pane_ParamLimits

0x4d84,	// (0x000269fd) wml_list_single_medium_pane

0x4d99,	// (0x00026a12) wml_list_single_small_pane_ParamLimits

0x4d99,	// (0x00026a12) wml_list_single_small_pane

0xab34,	// (0x0002c7ad) wml_selection_box_pane_ParamLimits

0xab34,	// (0x0002c7ad) wml_selection_box_pane

0xab47,	// (0x0002c7c0) wml_list_single_pane_t1

0xab56,	// (0x0002c7cf) wml_list_single_medium_pane_t1

0xab65,	// (0x0002c7de) wml_list_single_large_pane_t1

0xab74,	// (0x0002c7ed) input_focus_pane_cp02_ParamLimits

0xab74,	// (0x0002c7ed) input_focus_pane_cp02

0xab87,	// (0x0002c800) wml_selection_box_pane_g1

0xab90,	// (0x0002c809) wml_selection_box_pane_t1_ParamLimits

0xab90,	// (0x0002c809) wml_selection_box_pane_t1

0x3cb9,	// (0x00025932) bg_wml_button_pane_ParamLimits

0x3cb9,	// (0x00025932) bg_wml_button_pane

0xaba8,	// (0x0002c821) wml_button_pane_g1

0xabb0,	// (0x0002c829) wml_button_pane_t1

0xaba8,	// (0x0002c821) wml_button_bg_pane_g1

0xabc0,	// (0x0002c839) wml_button_bg_pane_g2

0xabc8,	// (0x0002c841) wml_button_bg_pane_g3

0xabd0,	// (0x0002c849) wml_button_bg_pane_g4

0xabd8,	// (0x0002c851) wml_button_bg_pane_g5

0xabe0,	// (0x0002c859) wml_button_bg_pane_g6

0xabe8,	// (0x0002c861) wml_button_bg_pane_g7

0xabf0,	// (0x0002c869) wml_button_bg_pane_g8

0xabf8,	// (0x0002c871) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00030f24) wml_button_bg_pane_g

0x4db0,	// (0x00026a29) bg_list_pane_cp02

0xac00,	// (0x0002c879) mce_header_pane_ParamLimits

0xac00,	// (0x0002c879) mce_header_pane

0xac14,	// (0x0002c88d) mce_icon_pane

0xac14,	// (0x0002c88d) mce_image_pane

0xac1d,	// (0x0002c896) mce_text_pane_ParamLimits

0xac1d,	// (0x0002c896) mce_text_pane

0x4db9,	// (0x00026a32) scroll_pane_cp03

0x4db9,	// (0x00026a32) scroll_pane_cp04

0xac31,	// (0x0002c8aa) scroll_pane_cp05_ParamLimits

0xac31,	// (0x0002c8aa) scroll_pane_cp05

0x4dc3,	// (0x00026a3c) mce_header_field_pane_ParamLimits

0x4dc3,	// (0x00026a3c) mce_header_field_pane

0x4dda,	// (0x00026a53) mce_header_field_pane_2_ParamLimits

0x4dda,	// (0x00026a53) mce_header_field_pane_2

0x4df0,	// (0x00026a69) mce_header_field_pane_3

0x4df8,	// (0x00026a71) list_single_mce_message_pane_ParamLimits

0x4df8,	// (0x00026a71) list_single_mce_message_pane

0x4e0d,	// (0x00026a86) list_single_mce_smart_pane_ParamLimits

0x4e0d,	// (0x00026a86) list_single_mce_smart_pane

0xac3d,	// (0x0002c8b6) input_focus_pane_cp03

0xac46,	// (0x0002c8bf) list_header_data_pane

0x4e2d,	// (0x00026aa6) mce_header_field_pane_t1

0x4e3b,	// (0x00026ab4) list_single_mce_header_pane_ParamLimits

0x4e3b,	// (0x00026ab4) list_single_mce_header_pane

0xac4e,	// (0x0002c8c7) list_single_mce_header_pane_t1

0xac5d,	// (0x0002c8d6) list_single_mce_message_pane_g1

0xac66,	// (0x0002c8df) list_single_mce_message_pane_t1

0x4e6d,	// (0x00026ae6) bg_cale_heading_pane_cp01_ParamLimits

0x4e6d,	// (0x00026ae6) bg_cale_heading_pane_cp01

0xac75,	// (0x0002c8ee) bg_cale_pane_cp02_ParamLimits

0xac75,	// (0x0002c8ee) bg_cale_pane_cp02

0x4e90,	// (0x00026b09) cale_month_corner_pane

0x4ea6,	// (0x00026b1f) cale_month_day_heading_pane_ParamLimits

0x4ea6,	// (0x00026b1f) cale_month_day_heading_pane

0x4ed9,	// (0x00026b52) cale_month_pane_g1_ParamLimits

0x4ed9,	// (0x00026b52) cale_month_pane_g1

0x4ef5,	// (0x00026b6e) cale_month_pane_g2_ParamLimits

0x4ef5,	// (0x00026b6e) cale_month_pane_g2

0x4f10,	// (0x00026b89) cale_month_pane_g3_ParamLimits

0x4f10,	// (0x00026b89) cale_month_pane_g3

0x4f3c,	// (0x00026bb5) cale_month_pane_g4_ParamLimits

0x4f3c,	// (0x00026bb5) cale_month_pane_g4

0x4f68,	// (0x00026be1) cale_month_pane_g5_ParamLimits

0x4f68,	// (0x00026be1) cale_month_pane_g5

0x4f94,	// (0x00026c0d) cale_month_pane_g6_ParamLimits

0x4f94,	// (0x00026c0d) cale_month_pane_g6

0x4fc0,	// (0x00026c39) cale_month_pane_g7_ParamLimits

0x4fc0,	// (0x00026c39) cale_month_pane_g7

0x4fec,	// (0x00026c65) cale_month_pane_g8_ParamLimits

0x4fec,	// (0x00026c65) cale_month_pane_g8

0x5028,	// (0x00026ca1) cale_month_pane_g9_ParamLimits

0x5028,	// (0x00026ca1) cale_month_pane_g9

0x5062,	// (0x00026cdb) cale_month_pane_g10_ParamLimits

0x5062,	// (0x00026cdb) cale_month_pane_g10

0x509c,	// (0x00026d15) cale_month_pane_g11_ParamLimits

0x509c,	// (0x00026d15) cale_month_pane_g11

0x50d6,	// (0x00026d4f) cale_month_pane_g12_ParamLimits

0x50d6,	// (0x00026d4f) cale_month_pane_g12

0x5110,	// (0x00026d89) cale_month_pane_g13_ParamLimits

0x5110,	// (0x00026d89) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00030f37) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00030f37) cale_month_pane_g

0x514a,	// (0x00026dc3) cale_month_week_pane

0x515d,	// (0x00026dd6) grid_cale_month_pane_ParamLimits

0x515d,	// (0x00026dd6) grid_cale_month_pane

0x518b,	// (0x00026e04) cale_month_day_heading_pane_t1

0x51e9,	// (0x00026e62) cale_month_day_heading_pane_t2

0x524e,	// (0x00026ec7) cale_month_day_heading_pane_t3

0x52b3,	// (0x00026f2c) cale_month_day_heading_pane_t4

0x5318,	// (0x00026f91) cale_month_day_heading_pane_t5

0x537d,	// (0x00026ff6) cale_month_day_heading_pane_t6

0x53e2,	// (0x0002705b) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00030f52) cale_month_day_heading_pane_t

0x44c2,	// (0x0002613b) bg_cale_side_pane_cp01

0x544f,	// (0x000270c8) cale_month_week_pane_t1

0x5466,	// (0x000270df) cale_month_week_pane_t2

0x547d,	// (0x000270f6) cale_month_week_pane_t3

0x5494,	// (0x0002710d) cale_month_week_pane_t4

0x54ab,	// (0x00027124) cale_month_week_pane_t5

0x54c2,	// (0x0002713b) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00030f61) cale_month_week_pane_t

0x54d9,	// (0x00027152) cell_cale_month_pane_ParamLimits

0x54d9,	// (0x00027152) cell_cale_month_pane

0xacd4,	// (0x0002c94d) cell_cale_month_pane_g1

0x250b,	// (0x00024184) cell_cale_month_pane_t1_ParamLimits

0x250b,	// (0x00024184) cell_cale_month_pane_t1

0x4501,	// (0x0002617a) grid_highlight_pane_cp08

0x4014,	// (0x00025c8d) main_smil_g1

0x5587,	// (0x00027200) smil_status_pane

0xace0,	// (0x0002c959) smil_text_pane

0xc76e,	// (0x0002e3e7) bg_popup_call3_rect_pane_g8

0xc776,	// (0x0002e3ef) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003121a) bg_popup_call3_rect_pane_g

0xca2c,	// (0x0002e6a5) smil_status_volume_pane_g1

0xacea,	// (0x0002c963) smil_status_pane_t1

0xca5f,	// (0x0002e6d8) volume_smil_pane

0xad01,	// (0x0002c97a) list_smil_text_pane

0x5598,	// (0x00027211) scroll_pane_cp011

0x55a3,	// (0x0002721c) smil_text_list_pane_t1_ParamLimits

0x55a3,	// (0x0002721c) smil_text_list_pane_t1

0xad0b,	// (0x0002c984) aid_volume_smil_ParamLimits

0xad0b,	// (0x0002c984) aid_volume_smil

0x4014,	// (0x00025c8d) smil_volume_pane_g1

0x4014,	// (0x00025c8d) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00030f81) smil_volume_pane_g

0x3f6f,	// (0x00025be8) listscroll_cale_day_pane

0xad2d,	// (0x0002c9a6) bg_cale_pane

0xad45,	// (0x0002c9be) list_cale_pane

0xad56,	// (0x0002c9cf) scroll_pane_cp09

0xad67,	// (0x0002c9e0) cale_bg_pane_g1

0xad6f,	// (0x0002c9e8) cale_bg_pane_g2

0xad77,	// (0x0002c9f0) cale_bg_pane_g3

0xad7f,	// (0x0002c9f8) cale_bg_pane_g4

0xad87,	// (0x0002ca00) cale_bg_pane_g5

0xad8f,	// (0x0002ca08) cale_bg_pane_g6

0xad97,	// (0x0002ca10) cale_bg_pane_g7

0xad9f,	// (0x0002ca18) cale_bg_pane_g8

0xada7,	// (0x0002ca20) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00030f86) cale_bg_pane_g

0x55e1,	// (0x0002725a) list_cale_time_pane_ParamLimits

0x55e1,	// (0x0002725a) list_cale_time_pane

0xadaf,	// (0x0002ca28) list_cale_time_pane_g1_ParamLimits

0xadaf,	// (0x0002ca28) list_cale_time_pane_g1

0xadbb,	// (0x0002ca34) list_cale_time_pane_g2_ParamLimits

0xadbb,	// (0x0002ca34) list_cale_time_pane_g2

0x55f6,	// (0x0002726f) list_cale_time_pane_g3_ParamLimits

0x55f6,	// (0x0002726f) list_cale_time_pane_g3

0x5604,	// (0x0002727d) list_cale_time_pane_g4_ParamLimits

0x5604,	// (0x0002727d) list_cale_time_pane_g4

0x5612,	// (0x0002728b) list_cale_time_pane_g5_ParamLimits

0x5612,	// (0x0002728b) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00030f99) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00030f99) list_cale_time_pane_g

0xadd5,	// (0x0002ca4e) list_cale_time_pane_t1_ParamLimits

0xadd5,	// (0x0002ca4e) list_cale_time_pane_t1

0xadfd,	// (0x0002ca76) list_cale_time_pane_t2_ParamLimits

0xadfd,	// (0x0002ca76) list_cale_time_pane_t2

0x5916,	// (0x0002758f) aid_blid_cardinal_pane

0x5954,	// (0x000275cd) compass_pane_t4

0xae25,	// (0x0002ca9e) list_cale_time_pane_t4_ParamLimits

0xae25,	// (0x0002ca9e) list_cale_time_pane_t4

0x5962,	// (0x000275db) compass_pane_t5

0x5970,	// (0x000275e9) compass_pane_t6

0x597e,	// (0x000275f7) compass_pane_t7

0xb376,	// (0x0002cfef) navi_pane_cc_t1

0xb52c,	// (0x0002d1a5) aid_phob_thumbnail_center_pane

0x5edd,	// (0x00027b56) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00030fa6) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00030fa6) list_cale_time_pane_t

0x3693,	// (0x0002530c) bg_popup_window_pane_cp02_ParamLimits

0x3693,	// (0x0002530c) bg_popup_window_pane_cp02

0xae4d,	// (0x0002cac6) heading_pane_cp01_ParamLimits

0xae4d,	// (0x0002cac6) heading_pane_cp01

0xae59,	// (0x0002cad2) loc_req_pane_ParamLimits

0xae59,	// (0x0002cad2) loc_req_pane

0xae69,	// (0x0002cae2) loc_type_pane_ParamLimits

0xae69,	// (0x0002cae2) loc_type_pane

0xae7b,	// (0x0002caf4) loc_type_pane_t1_ParamLimits

0xae7b,	// (0x0002caf4) loc_type_pane_t1

0xae8d,	// (0x0002cb06) loc_type_pane_t2_ParamLimits

0xae8d,	// (0x0002cb06) loc_type_pane_t2

0xae9f,	// (0x0002cb18) loc_type_pane_t3_ParamLimits

0xae9f,	// (0x0002cb18) loc_type_pane_t3

0x0002,

0xf334,	// (0x00030fad) loc_type_pane_t_ParamLimits

0xf334,	// (0x00030fad) loc_type_pane_t

0xaeb1,	// (0x0002cb2a) list_loc_req_pane

0xaebb,	// (0x0002cb34) scroll_pane_cp012

0x561e,	// (0x00027297) list_single_loc_request_popup_menu_pane_ParamLimits

0x561e,	// (0x00027297) list_single_loc_request_popup_menu_pane

0xaec4,	// (0x0002cb3d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaec4,	// (0x0002cb3d) list_single_loc_request_popup_menu_pane_g1

0xaed0,	// (0x0002cb49) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaed0,	// (0x0002cb49) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00030fb4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00030fb4) list_single_loc_request_popup_menu_pane_g

0xaedc,	// (0x0002cb55) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaedc,	// (0x0002cb55) list_single_loc_request_popup_menu_pane_t1

0x3cb9,	// (0x00025932) bg_popup_window_pane_cp03_ParamLimits

0x3cb9,	// (0x00025932) bg_popup_window_pane_cp03

0xaef2,	// (0x0002cb6b) heading_loc_req_pane_ParamLimits

0xaef2,	// (0x0002cb6b) heading_loc_req_pane

0x562b,	// (0x000272a4) popup_dyc_status_message_window_g1_ParamLimits

0x562b,	// (0x000272a4) popup_dyc_status_message_window_g1

0x563f,	// (0x000272b8) popup_dyc_status_message_window_t1_ParamLimits

0x563f,	// (0x000272b8) popup_dyc_status_message_window_t1

0x5654,	// (0x000272cd) popup_dyc_status_message_window_t2_ParamLimits

0x5654,	// (0x000272cd) popup_dyc_status_message_window_t2

0x5669,	// (0x000272e2) popup_dyc_status_message_window_t3_ParamLimits

0x5669,	// (0x000272e2) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00030fb9) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00030fb9) popup_dyc_status_message_window_t

0x3a5e,	// (0x000256d7) bg_heading_pane_cp01

0xaefe,	// (0x0002cb77) heading_loc_req_pane_g1

0xaf06,	// (0x0002cb7f) heading_loc_req_pane_g2

0xaf0e,	// (0x0002cb87) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00030fc0) heading_loc_req_pane_g

0xaf16,	// (0x0002cb8f) heading_loc_req_pane_t1

0xafbd,	// (0x0002cc36) bg_popup_sub_pane_cp01_ParamLimits

0xafbd,	// (0x0002cc36) bg_popup_sub_pane_cp01

0xafcb,	// (0x0002cc44) popup_cale_events_window_g1_ParamLimits

0xafcb,	// (0x0002cc44) popup_cale_events_window_g1

0xafeb,	// (0x0002cc64) popup_cale_events_window_g2_ParamLimits

0xafeb,	// (0x0002cc64) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00030ff4) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00030ff4) popup_cale_events_window_g

0xb00b,	// (0x0002cc84) popup_cale_events_window_t1_ParamLimits

0xb00b,	// (0x0002cc84) popup_cale_events_window_t1

0xb01d,	// (0x0002cc96) popup_cale_events_window_t2_ParamLimits

0xb01d,	// (0x0002cc96) popup_cale_events_window_t2

0xb05b,	// (0x0002ccd4) popup_cale_events_window_t3_ParamLimits

0xb05b,	// (0x0002ccd4) popup_cale_events_window_t3

0xb095,	// (0x0002cd0e) popup_cale_events_window_t4_ParamLimits

0xb095,	// (0x0002cd0e) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00030ff9) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00030ff9) popup_cale_events_window_t

0x56f9,	// (0x00027372) call_type_pane

0x5709,	// (0x00027382) popup_call_status_window_g1

0x571d,	// (0x00027396) popup_call_status_window_g2

0x5731,	// (0x000273aa) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00031002) popup_call_status_window_g

0xb0cb,	// (0x0002cd44) call_type_pane_g1

0xb0d4,	// (0x0002cd4d) call_type_pane_g2

0x0001,

0xf390,	// (0x00031009) call_type_pane_g

0x3a5e,	// (0x000256d7) bg_popup_sub_pane_cp02

0xb0dd,	// (0x0002cd56) listscroll_popup_wml_pane

0xb0e5,	// (0x0002cd5e) list_wml_pane

0xb0ef,	// (0x0002cd68) scroll_pane_cp013

0x5741,	// (0x000273ba) list_single_graphic_popup_wml_pane_ParamLimits

0x5741,	// (0x000273ba) list_single_graphic_popup_wml_pane

0x4014,	// (0x00025c8d) list_single_graphic_popup_wml_pane_g1

0xb0f8,	// (0x0002cd71) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0003100e) list_single_graphic_popup_wml_pane_g

0xb100,	// (0x0002cd79) list_single_graphic_popup_wml_pane_t1

0xb116,	// (0x0002cd8f) aid_call_pane

0x3cb1,	// (0x0002592a) popup_clock_analogue_window_g1

0x3cb1,	// (0x0002592a) popup_clock_analogue_window_g2

0xb11e,	// (0x0002cd97) popup_clock_analogue_window_g3

0xb11e,	// (0x0002cd97) popup_clock_analogue_window_g4

0x4014,	// (0x00025c8d) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00031013) popup_clock_analogue_window_g

0xb126,	// (0x0002cd9f) popup_clock_analogue_window_t1

0xb134,	// (0x0002cdad) clock_digital_number_pane_ParamLimits

0xb134,	// (0x0002cdad) clock_digital_number_pane

0xb140,	// (0x0002cdb9) clock_digital_number_pane_cp02_ParamLimits

0xb140,	// (0x0002cdb9) clock_digital_number_pane_cp02

0xb14c,	// (0x0002cdc5) clock_digital_number_pane_cp03_ParamLimits

0xb14c,	// (0x0002cdc5) clock_digital_number_pane_cp03

0xb158,	// (0x0002cdd1) clock_digital_number_pane_cp04_ParamLimits

0xb158,	// (0x0002cdd1) clock_digital_number_pane_cp04

0xb164,	// (0x0002cddd) clock_digital_separator_pane_ParamLimits

0xb164,	// (0x0002cddd) clock_digital_separator_pane

0xb170,	// (0x0002cde9) popup_clock_digital_window_t1

0x4014,	// (0x00025c8d) clock_digital_number_pane_g1

0x4014,	// (0x00025c8d) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00030f81) clock_digital_number_pane_g

0x4014,	// (0x00025c8d) clock_digital_separator_pane_g1

0x4014,	// (0x00025c8d) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00030f81) clock_digital_separator_pane_g

0x3a5e,	// (0x000256d7) bg_popup_window_pane_cp04

0xb18d,	// (0x0002ce06) heading_pane_cp03

0xb195,	// (0x0002ce0e) listscroll_popup_gms_pane

0xb19d,	// (0x0002ce16) grid_large_graphic_popup_pane

0xb1a7,	// (0x0002ce20) listscroll_popup_gms_pane_g1

0xb1af,	// (0x0002ce28) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0003101e) listscroll_popup_gms_pane_g

0xab18,	// (0x0002c791) scroll_pane_cp014

0x5754,	// (0x000273cd) cell_large_graphic_popup_pane_ParamLimits

0x5754,	// (0x000273cd) cell_large_graphic_popup_pane

0x576a,	// (0x000273e3) cell_large_graphic_popup_pane_g1_ParamLimits

0x576a,	// (0x000273e3) cell_large_graphic_popup_pane_g1

0xb1b7,	// (0x0002ce30) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1b7,	// (0x0002ce30) cell_large_graphic_popup_pane_g2

0xb1c3,	// (0x0002ce3c) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1c3,	// (0x0002ce3c) cell_large_graphic_popup_pane_g3

0xb1d0,	// (0x0002ce49) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1d0,	// (0x0002ce49) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00031023) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00031023) cell_large_graphic_popup_pane_g

0xb1e0,	// (0x0002ce59) grid_highlight_pane_cp010

0x4014,	// (0x00025c8d) bg_popup_call_pane_g1

0xb1ea,	// (0x0002ce63) list_single_graphic_popup_conf_pane_ParamLimits

0xb1ea,	// (0x0002ce63) list_single_graphic_popup_conf_pane

0xb1fd,	// (0x0002ce76) list_highlight_pane_cp01

0xb206,	// (0x0002ce7f) list_single_graphic_popup_conf_pane_g1

0xb20e,	// (0x0002ce87) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0003102c) list_single_graphic_popup_conf_pane_g

0xb216,	// (0x0002ce8f) list_single_graphic_popup_conf_pane_t1

0xb224,	// (0x0002ce9d) linegrid_cams_pane_g1

0x5776,	// (0x000273ef) linegrid_cams_pane_g2

0x4164,	// (0x00025ddd) linegrid_cams_pane_g3

0xb22d,	// (0x0002cea6) linegrid_cams_pane_g4

0x577f,	// (0x000273f8) linegrid_cams_pane_g5

0x5788,	// (0x00027401) linegrid_cams_pane_g6

0x4557,	// (0x000261d0) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00031031) linegrid_cams_pane_g

0xb236,	// (0x0002ceaf) popup_clock_analogue_window

0xb236,	// (0x0002ceaf) popup_clock_digital_window

0x3a5e,	// (0x000256d7) popup_phob_thumbnail_window

0x4014,	// (0x00025c8d) call_video_uplink_pane_g1

0xb23f,	// (0x0002ceb8) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00031040) call_video_uplink_pane_g

0x4501,	// (0x0002617a) video_uplink_pane

0xb247,	// (0x0002cec0) mce_image_pane_g1

0x5791,	// (0x0002740a) mce_image_pane_g2

0x5799,	// (0x00027412) mce_image_pane_g3

0x57a1,	// (0x0002741a) mce_image_pane_g4

0x57a9,	// (0x00027422) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00031045) mce_image_pane_g

0xb251,	// (0x0002ceca) control_top_pane_stacon_cp01_ParamLimits

0xb251,	// (0x0002ceca) control_top_pane_stacon_cp01

0xb261,	// (0x0002ceda) uni_indicator_pane_stacon_cp01_ParamLimits

0xb261,	// (0x0002ceda) uni_indicator_pane_stacon_cp01

0xb272,	// (0x0002ceeb) bg_popup_sub_pane_cp03

0xb27c,	// (0x0002cef5) chi_dic_find_pane

0x57b1,	// (0x0002742a) listscroll_chi_dic_pane

0xb284,	// (0x0002cefd) main_pane_chidic_g1

0xb28c,	// (0x0002cf05) chi_dic_find_pane_t1

0xb29a,	// (0x0002cf13) find_chidic_pane

0xb2a3,	// (0x0002cf1c) chi_dic_list_pane_ParamLimits

0xb2a3,	// (0x0002cf1c) chi_dic_list_pane

0xb2b4,	// (0x0002cf2d) scroll_pane_cp020

0xb2bc,	// (0x0002cf35) find_chidic_pane_t1

0x3a5e,	// (0x000256d7) input_focus_pane_cp06

0x57c5,	// (0x0002743e) list_chi_dic_pane_ParamLimits

0x57c5,	// (0x0002743e) list_chi_dic_pane

0x57d7,	// (0x00027450) list_chi_dic_pane_t1_ParamLimits

0x57d7,	// (0x00027450) list_chi_dic_pane_t1

0x3a5e,	// (0x000256d7) list_highlight_pane_cp020

0xb2cb,	// (0x0002cf44) bg_cale_heading_pane_g1

0x57ea,	// (0x00027463) bg_cale_heading_pane_g2

0x57f2,	// (0x0002746b) bg_cale_heading_pane_g3

0x57fa,	// (0x00027473) bg_cale_heading_pane_g4

0x5804,	// (0x0002747d) bg_cale_heading_pane_g5

0x580e,	// (0x00027487) bg_cale_heading_pane_g6

0x5816,	// (0x0002748f) bg_cale_heading_pane_g7

0x581e,	// (0x00027497) bg_cale_heading_pane_g8

0x5828,	// (0x000274a1) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00031050) bg_cale_heading_pane_g

0xb2cb,	// (0x0002cf44) bg_cale_side_pane_g1

0x5832,	// (0x000274ab) bg_cale_side_pane_g2

0x583a,	// (0x000274b3) bg_cale_side_pane_g3

0x5842,	// (0x000274bb) bg_cale_side_pane_g4

0x584a,	// (0x000274c3) bg_cale_side_pane_g5

0x5852,	// (0x000274cb) bg_cale_side_pane_g6

0x585a,	// (0x000274d3) bg_cale_side_pane_g7

0x5862,	// (0x000274db) bg_cale_side_pane_g8

0x586a,	// (0x000274e3) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00031063) bg_cale_side_pane_g

0x5872,	// (0x000274eb) popup_call_status_window_ParamLimits

0x5872,	// (0x000274eb) popup_call_status_window

0xb2d3,	// (0x0002cf4c) stacon_top_pane

0xb2db,	// (0x0002cf54) status_pane_ParamLimits

0xb2db,	// (0x0002cf54) status_pane

0xb2f5,	// (0x0002cf6e) status_small_pane

0xb2fd,	// (0x0002cf76) control_pane

0x3a5e,	// (0x000256d7) stacon_bottom_pane

0xb305,	// (0x0002cf7e) list_single_mce_smart_pane_t1_ParamLimits

0xb305,	// (0x0002cf7e) list_single_mce_smart_pane_t1

0xb318,	// (0x0002cf91) list_single_mce_smart_pane_t2_ParamLimits

0xb318,	// (0x0002cf91) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00031076) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00031076) list_single_mce_smart_pane_t

0x58b9,	// (0x00027532) compass_pane

0x58c2,	// (0x0002753b) main_location2_pane_t1

0x58d8,	// (0x00027551) main_location2_pane_t2

0x58ee,	// (0x00027567) main_location2_pane_t3

0x0003,

0xf402,	// (0x0003107b) main_location2_pane_t

0xb340,	// (0x0002cfb9) compass_pane_g1_ParamLimits

0xb340,	// (0x0002cfb9) compass_pane_g1

0x5936,	// (0x000275af) compass_pane_t1

0x5945,	// (0x000275be) compass_pane_t2

0x0005,

0xf40b,	// (0x00031084) compass_pane_t

0x598c,	// (0x00027605) text_secondary_cp61

0xb36d,	// (0x0002cfe6) navi_pane_cams_g5

0xb3ae,	// (0x0002d027) navi_pane_im_t1

0xb3bc,	// (0x0002d035) navi_pane_mp_g1_ParamLimits

0xb3bc,	// (0x0002d035) navi_pane_mp_g1

0xb3d0,	// (0x0002d049) navi_pane_mp_g2_ParamLimits

0xb3d0,	// (0x0002d049) navi_pane_mp_g2

0xb3dc,	// (0x0002d055) navi_pane_mp_g3_ParamLimits

0xb3dc,	// (0x0002d055) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00031098) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00031098) navi_pane_mp_g

0xb3e8,	// (0x0002d061) navi_pane_mp_t1

0xb3f6,	// (0x0002d06f) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0003109f) navi_pane_mp_t

0xb463,	// (0x0002d0dc) navi_pane_vt_g1

0xb3e8,	// (0x0002d061) navi_pane_vt_t1

0xb46b,	// (0x0002d0e4) navi_slider_pane

0xb473,	// (0x0002d0ec) zooming_pane

0xb47b,	// (0x0002d0f4) navi_slider_pane_g1

0xb484,	// (0x0002d0fd) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x000310a6) navi_slider_pane_g

0xb4b1,	// (0x0002d12a) aid_levels_zoom

0xb4b9,	// (0x0002d132) zooming_pane_g1

0xb4c1,	// (0x0002d13a) zooming_pane_g2

0xb4c1,	// (0x0002d13a) zooming_pane_g3

0x0002,

0xf43c,	// (0x000310b5) zooming_pane_g

0xb4c9,	// (0x0002d142) level_10_zoom

0xb4d2,	// (0x0002d14b) level_11_zoom

0xb4db,	// (0x0002d154) level_1_zoom

0xb4e4,	// (0x0002d15d) level_2_zoom

0xb4ed,	// (0x0002d166) level_3_zoom

0xb4f6,	// (0x0002d16f) level_4_zoom

0xb4ff,	// (0x0002d178) level_5_zoom

0xb508,	// (0x0002d181) level_6_zoom

0xb511,	// (0x0002d18a) level_7_zoom

0xb51a,	// (0x0002d193) level_8_zoom

0xb523,	// (0x0002d19c) level_9_zoom

0xb534,	// (0x0002d1ad) popup_phob_thumbnail_window_g1

0xb53c,	// (0x0002d1b5) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x000310bc) popup_phob_thumbnail_window_g

0xc910,	// (0x0002e589) level_1_location

0xc918,	// (0x0002e591) level_2_location

0xc920,	// (0x0002e599) level_3_location

0xc928,	// (0x0002e5a1) level_4_location

0xb473,	// (0x0002d0ec) level_5_location

0x5a17,	// (0x00027690) mce_icon_pane_g1

0x5a1f,	// (0x00027698) mce_icon_pane_g2

0x0001,

0xf448,	// (0x000310c1) mce_icon_pane_g

0x5a27,	// (0x000276a0) main_mup_pane_g1_ParamLimits

0x5a27,	// (0x000276a0) main_mup_pane_g1

0x5a3d,	// (0x000276b6) main_mup_pane_g2_ParamLimits

0x5a3d,	// (0x000276b6) main_mup_pane_g2

0x5a55,	// (0x000276ce) main_mup_pane_g3_ParamLimits

0x5a55,	// (0x000276ce) main_mup_pane_g3

0x5a6d,	// (0x000276e6) main_mup_pane_g4_ParamLimits

0x5a6d,	// (0x000276e6) main_mup_pane_g4

0x5a85,	// (0x000276fe) main_mup_pane_g5_ParamLimits

0x5a85,	// (0x000276fe) main_mup_pane_g5

0x5a9f,	// (0x00027718) main_mup_pane_g6_ParamLimits

0x5a9f,	// (0x00027718) main_mup_pane_g6

0x5ab7,	// (0x00027730) main_mup_pane_g7_ParamLimits

0x5ab7,	// (0x00027730) main_mup_pane_g7

0x5acf,	// (0x00027748) main_mup_pane_g8_ParamLimits

0x5acf,	// (0x00027748) main_mup_pane_g8

0x5ae7,	// (0x00027760) main_mup_pane_g9_ParamLimits

0x5ae7,	// (0x00027760) main_mup_pane_g9

0x5afb,	// (0x00027774) main_mup_pane_g10_ParamLimits

0x5afb,	// (0x00027774) main_mup_pane_g10

0x5b0f,	// (0x00027788) main_mup_pane_g11_ParamLimits

0x5b0f,	// (0x00027788) main_mup_pane_g11

0x5b21,	// (0x0002779a) main_mup_pane_g12_ParamLimits

0x5b21,	// (0x0002779a) main_mup_pane_g12

0x5b35,	// (0x000277ae) main_mup_pane_g13_ParamLimits

0x5b35,	// (0x000277ae) main_mup_pane_g13

0x000c,

0xf44d,	// (0x000310c6) main_mup_pane_g_ParamLimits

0xf44d,	// (0x000310c6) main_mup_pane_g

0x5b47,	// (0x000277c0) main_mup_pane_t1_ParamLimits

0x5b47,	// (0x000277c0) main_mup_pane_t1

0x5b61,	// (0x000277da) main_mup_pane_t2_ParamLimits

0x5b61,	// (0x000277da) main_mup_pane_t2

0x5b79,	// (0x000277f2) main_mup_pane_t3_ParamLimits

0x5b79,	// (0x000277f2) main_mup_pane_t3

0x5b91,	// (0x0002780a) main_mup_pane_t4_ParamLimits

0x5b91,	// (0x0002780a) main_mup_pane_t4

0x5baf,	// (0x00027828) main_mup_pane_t5_ParamLimits

0x5baf,	// (0x00027828) main_mup_pane_t5

0x5bc4,	// (0x0002783d) main_mup_pane_t6_ParamLimits

0x5bc4,	// (0x0002783d) main_mup_pane_t6

0x0005,

0xf468,	// (0x000310e1) main_mup_pane_t_ParamLimits

0xf468,	// (0x000310e1) main_mup_pane_t

0x5bd6,	// (0x0002784f) mup_progress_pane_ParamLimits

0x5bd6,	// (0x0002784f) mup_progress_pane

0x5be2,	// (0x0002785b) mup_visualizer_pane_ParamLimits

0x5be2,	// (0x0002785b) mup_visualizer_pane

0x5c0a,	// (0x00027883) mup_volume_pane_ParamLimits

0x5c0a,	// (0x00027883) mup_volume_pane

0xb544,	// (0x0002d1bd) mup_visualizer_pane_g1_ParamLimits

0xb544,	// (0x0002d1bd) mup_visualizer_pane_g1

0xb544,	// (0x0002d1bd) mup_visualizer_pane_g2_ParamLimits

0xb544,	// (0x0002d1bd) mup_visualizer_pane_g2

0xb340,	// (0x0002cfb9) mup_visualizer_pane_g3_ParamLimits

0xb340,	// (0x0002cfb9) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x000310ee) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x000310ee) mup_visualizer_pane_g

0x4014,	// (0x00025c8d) mup_volume_pane_g1

0xb55a,	// (0x0002d1d3) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x000310f5) mup_volume_pane_g

0x4014,	// (0x00025c8d) mup_progress_pane_g1

0xb563,	// (0x0002d1dc) mup_progress_pane_g2

0xb56c,	// (0x0002d1e5) mup_progress_pane_g3

0x0002,

0xf481,	// (0x000310fa) mup_progress_pane_g

0x3a5e,	// (0x000256d7) bg_popup_window_pane_cp05

0xb575,	// (0x0002d1ee) heading_pane_cp02_ParamLimits

0xb575,	// (0x0002d1ee) heading_pane_cp02

0xb58f,	// (0x0002d208) list_popup_blid_pane

0xb597,	// (0x0002d210) list_blid_sat_info_pane_ParamLimits

0xb597,	// (0x0002d210) list_blid_sat_info_pane

0xb5aa,	// (0x0002d223) list_blid_sat_info_pane_g1

0xb5b2,	// (0x0002d22b) list_blid_sat_info_pane_t1

0x5cfa,	// (0x00027973) mup_equalizer_pane_ParamLimits

0x5cfa,	// (0x00027973) mup_equalizer_pane

0x5d13,	// (0x0002798c) mup_equalizer_pane_cp1_ParamLimits

0x5d13,	// (0x0002798c) mup_equalizer_pane_cp1

0x5d2c,	// (0x000279a5) mup_equalizer_pane_cp2_ParamLimits

0x5d2c,	// (0x000279a5) mup_equalizer_pane_cp2

0x5d45,	// (0x000279be) mup_equalizer_pane_cp3_ParamLimits

0x5d45,	// (0x000279be) mup_equalizer_pane_cp3

0x5d5e,	// (0x000279d7) mup_equalizer_pane_cp4_ParamLimits

0x5d5e,	// (0x000279d7) mup_equalizer_pane_cp4

0x5d77,	// (0x000279f0) mup_equalizer_pane_cp5

0x5d89,	// (0x00027a02) mup_equalizer_pane_cp6

0x5d9b,	// (0x00027a14) mup_equalizer_pane_cp7

0xc7ee,	// (0x0002e467) bg_popup_call_poc_act_pane_g9

0xc7f6,	// (0x0002e46f) bg_popup_call_poc_act_pane_g10

0xc7fe,	// (0x0002e477) bg_popup_call_poc_act_pane_g11

0x000a,

0x3cb9,	// (0x00025932) mup_scale_pane

0x4014,	// (0x00025c8d) mup_scale_pane_g1

0xb5c0,	// (0x0002d239) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00031116) mup_scale_pane_g

0xb5e4,	// (0x0002d25d) msg_data_pane

0xb5ec,	// (0x0002d265) scroll_pane_cp017

0x5dc1,	// (0x00027a3a) bg_list_pane_cp04_ParamLimits

0x5dc1,	// (0x00027a3a) bg_list_pane_cp04

0xb5fc,	// (0x0002d275) msg_data_pane_g1

0x5791,	// (0x0002740a) msg_data_pane_g2

0x5799,	// (0x00027412) msg_data_pane_g3

0x5dd9,	// (0x00027a52) msg_data_pane_g4

0x57a9,	// (0x00027422) msg_data_pane_g5

0x5a17,	// (0x00027690) msg_data_pane_g6

0x5de1,	// (0x00027a5a) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00031125) msg_data_pane_g

0x5de9,	// (0x00027a62) msg_text_pane_ParamLimits

0x5de9,	// (0x00027a62) msg_text_pane

0x5e0d,	// (0x00027a86) qrid_highlight_pane_cp011_ParamLimits

0x5e0d,	// (0x00027a86) qrid_highlight_pane_cp011

0x3a5e,	// (0x000256d7) msg_body_pane

0x3a5e,	// (0x000256d7) msg_header_pane

0xb60d,	// (0x0002d286) input_focus_pane_cp07

0x5e2f,	// (0x00027aa8) msg_header_pane_t1_ParamLimits

0x5e2f,	// (0x00027aa8) msg_header_pane_t1

0xb622,	// (0x0002d29b) msg_header_pane_t2_ParamLimits

0xb622,	// (0x0002d29b) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00031139) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00031139) msg_header_pane_t

0xb634,	// (0x0002d2ad) msg_body_pane_g1

0xb63c,	// (0x0002d2b5) msg_body_pane_t1_ParamLimits

0xb63c,	// (0x0002d2b5) msg_body_pane_t1

0xb667,	// (0x0002d2e0) msg_body_pane_t2_ParamLimits

0xb667,	// (0x0002d2e0) msg_body_pane_t2

0xb679,	// (0x0002d2f2) msg_body_pane_t3_ParamLimits

0xb679,	// (0x0002d2f2) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0003113e) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0003113e) msg_body_pane_t

0x253f,	// (0x000241b8) main_viewer_pane_g1_ParamLimits

0x253f,	// (0x000241b8) main_viewer_pane_g1

0x254b,	// (0x000241c4) main_viewer_pane_g2_ParamLimits

0x254b,	// (0x000241c4) main_viewer_pane_g2

0x5e5f,	// (0x00027ad8) main_viewer_pane_g3_ParamLimits

0x5e5f,	// (0x00027ad8) main_viewer_pane_g3

0x5e6e,	// (0x00027ae7) main_viewer_pane_g4_ParamLimits

0x5e6e,	// (0x00027ae7) main_viewer_pane_g4

0xb6a3,	// (0x0002d31c) main_viewer_pane_g5_ParamLimits

0xb6a3,	// (0x0002d31c) main_viewer_pane_g5

0xb6a3,	// (0x0002d31c) main_viewer_pane_g7_ParamLimits

0xb6a3,	// (0x0002d31c) main_viewer_pane_g7

0xb6b5,	// (0x0002d32e) main_viewer_pane_g8_ParamLimits

0xb6b5,	// (0x0002d32e) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0003114e) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0003114e) main_viewer_pane_g

0xb6cd,	// (0x0002d346) viewer_content_pane_ParamLimits

0xb6cd,	// (0x0002d346) viewer_content_pane

0x5ea2,	// (0x00027b1b) main_postcard_pane_g1_ParamLimits

0x5ea2,	// (0x00027b1b) main_postcard_pane_g1

0x5eb6,	// (0x00027b2f) main_postcard_pane_g2_ParamLimits

0x5eb6,	// (0x00027b2f) main_postcard_pane_g2

0x5eca,	// (0x00027b43) main_postcard_pane_g3_ParamLimits

0x5eca,	// (0x00027b43) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0003115f) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0003115f) main_postcard_pane_g

0x5edd,	// (0x00027b56) main_postcard_pane_g4

0xca3f,	// (0x0002e6b8) smil_status_volume_pane_g2

0x5f18,	// (0x00027b91) postcard_pane_ParamLimits

0x5f18,	// (0x00027b91) postcard_pane

0xb6db,	// (0x0002d354) postcard_pane_g1_ParamLimits

0xb6db,	// (0x0002d354) postcard_pane_g1

0x5f58,	// (0x00027bd1) postcard_pane_g2_ParamLimits

0x5f58,	// (0x00027bd1) postcard_pane_g2

0x5f64,	// (0x00027bdd) postcard_pane_g3_ParamLimits

0x5f64,	// (0x00027bdd) postcard_pane_g3

0xb6e9,	// (0x0002d362) postcard_pane_g4_ParamLimits

0xb6e9,	// (0x0002d362) postcard_pane_g4

0x5f70,	// (0x00027be9) postcard_pane_g5_ParamLimits

0x5f70,	// (0x00027be9) postcard_pane_g5

0x5f85,	// (0x00027bfe) postcard_pane_g6_ParamLimits

0x5f85,	// (0x00027bfe) postcard_pane_g6

0xb6db,	// (0x0002d354) postcard_pane_g7_ParamLimits

0xb6db,	// (0x0002d354) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0003116c) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0003116c) postcard_pane_g

0x5f99,	// (0x00027c12) main_mp2_pane_g1_ParamLimits

0x5f99,	// (0x00027c12) main_mp2_pane_g1

0x5fa5,	// (0x00027c1e) main_mp2_pane_g2_ParamLimits

0x5fa5,	// (0x00027c1e) main_mp2_pane_g2

0x5fb1,	// (0x00027c2a) main_mp2_pane_g3_ParamLimits

0x5fb1,	// (0x00027c2a) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0003117b) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0003117b) main_mp2_pane_g

0x5fbd,	// (0x00027c36) main_mp2_pane_t1_ParamLimits

0x5fbd,	// (0x00027c36) main_mp2_pane_t1

0x5fd2,	// (0x00027c4b) main_mp2_pane_t2_ParamLimits

0x5fd2,	// (0x00027c4b) main_mp2_pane_t2

0x5fe4,	// (0x00027c5d) main_mp2_pane_t3_ParamLimits

0x5fe4,	// (0x00027c5d) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00031182) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00031182) main_mp2_pane_t

0xb6f7,	// (0x0002d370) pec_content_pane_ParamLimits

0xb6f7,	// (0x0002d370) pec_content_pane

0xab18,	// (0x0002c791) scroll_pane_cp015

0xb709,	// (0x0002d382) pec_attribute_pane_ParamLimits

0xb709,	// (0x0002d382) pec_attribute_pane

0x5ff6,	// (0x00027c6f) pec_content_pane_g1_ParamLimits

0x5ff6,	// (0x00027c6f) pec_content_pane_g1

0xb719,	// (0x0002d392) pec_content_pane_t1_ParamLimits

0xb719,	// (0x0002d392) pec_content_pane_t1

0xb72b,	// (0x0002d3a4) pec_content_pane_t2_ParamLimits

0xb72b,	// (0x0002d3a4) pec_content_pane_t2

0x0001,

0xf510,	// (0x00031189) pec_content_pane_t_ParamLimits

0xf510,	// (0x00031189) pec_content_pane_t

0x6002,	// (0x00027c7b) list_single_graphic_pane_cp01_ParamLimits

0x6002,	// (0x00027c7b) list_single_graphic_pane_cp01

0x3cb9,	// (0x00025932) bg_popup_sub_pane_cp04

0xb73d,	// (0x0002d3b6) popup_mup_playback_window_g1

0xb749,	// (0x0002d3c2) popup_mup_playback_window_t1

0xb75e,	// (0x0002d3d7) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0003118e) popup_mup_playback_window_t

0xb795,	// (0x0002d40e) main_image_pane_g1_ParamLimits

0xb795,	// (0x0002d40e) main_image_pane_g1

0xb7d8,	// (0x0002d451) scroll_pane_cp018_ParamLimits

0xb7d8,	// (0x0002d451) scroll_pane_cp018

0xb7f0,	// (0x0002d469) scroll_pane_cp016_ParamLimits

0xb7f0,	// (0x0002d469) scroll_pane_cp016

0x60cd,	// (0x00027d46) smil2_image_pane_ParamLimits

0x60cd,	// (0x00027d46) smil2_image_pane

0x60f5,	// (0x00027d6e) smil2_root_pane_ParamLimits

0x60f5,	// (0x00027d6e) smil2_root_pane

0x612d,	// (0x00027da6) smil2_text_pane_ParamLimits

0x612d,	// (0x00027da6) smil2_text_pane

0x3a5e,	// (0x000256d7) bg_list_pane_cp06

0xb82c,	// (0x0002d4a5) grid_radio_pane

0x3a5e,	// (0x000256d7) bg_popup_window_pane_cp06

0xb834,	// (0x0002d4ad) main_fmradio_pane_t1

0xb18d,	// (0x0002ce06) heading_pane_cp04

0xb842,	// (0x0002d4bb) main_fmradio_pane_t2

0xc846,	// (0x0002e4bf) popup_cale_lunar_info_window_g1

0xb850,	// (0x0002d4c9) main_fmradio_pane_t3

0xc84e,	// (0x0002e4c7) popup_cale_lunar_info_window_g2

0xb85e,	// (0x0002d4d7) main_fmradio_pane_t4

0x0001,

0xb86c,	// (0x0002d4e5) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x0003127c) popup_cale_lunar_info_window_g

0xf52a,	// (0x000311a3) main_fmradio_pane_t

0xb87a,	// (0x0002d4f3) wait_bar_pane_cp03

0xb882,	// (0x0002d4fb) cell_fmradio_pane_ParamLimits

0xb882,	// (0x0002d4fb) cell_fmradio_pane

0xb6db,	// (0x0002d354) cell_fmradio_pane_g1_ParamLimits

0xb6db,	// (0x0002d354) cell_fmradio_pane_g1

0x3a5e,	// (0x000256d7) grid_highlight_pane_cp011

0xb895,	// (0x0002d50e) poc_content_pane_ParamLimits

0xb895,	// (0x0002d50e) poc_content_pane

0xb8a8,	// (0x0002d521) scroll_pane_cp019

0x6199,	// (0x00027e12) popup_call_poc_act_window_ParamLimits

0x6199,	// (0x00027e12) popup_call_poc_act_window

0x61b9,	// (0x00027e32) popup_call_poc_inact_window_ParamLimits

0x61b9,	// (0x00027e32) popup_call_poc_inact_window

0xf5c7,	// (0x00031240) bg_popup_call_poc_act_pane_g

0xc806,	// (0x0002e47f) bg_popup_call_poc_inact_pane_g1

0xc80e,	// (0x0002e487) bg_popup_call_poc_inact_pane_g2

0xb8b0,	// (0x0002d529) popup_call_poc_act_window_g2

0xc816,	// (0x0002e48f) bg_popup_call_poc_inact_pane_g3

0xc796,	// (0x0002e40f) bg_popup_call_poc_inact_pane_g4

0xc81e,	// (0x0002e497) bg_popup_call_poc_inact_pane_g5

0xb8b8,	// (0x0002d531) popup_call_poc_act_window_t1_ParamLimits

0xb8b8,	// (0x0002d531) popup_call_poc_act_window_t1

0xb8e0,	// (0x0002d559) popup_call_poc_act_window_t2_ParamLimits

0xb8e0,	// (0x0002d559) popup_call_poc_act_window_t2

0xb908,	// (0x0002d581) popup_call_poc_act_window_t3_ParamLimits

0xb908,	// (0x0002d581) popup_call_poc_act_window_t3

0xb930,	// (0x0002d5a9) popup_call_poc_act_window_t4_ParamLimits

0xb930,	// (0x0002d5a9) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x000311ae) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x000311ae) popup_call_poc_act_window_t

0xc826,	// (0x0002e49f) bg_popup_call_poc_inact_pane_g6

0xc82e,	// (0x0002e4a7) bg_popup_call_poc_inact_pane_g7

0xc836,	// (0x0002e4af) bg_popup_call_poc_inact_pane_g8

0xb942,	// (0x0002d5bb) popup_call_poc_inact_window_g2

0xc83e,	// (0x0002e4b7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x00031257) bg_popup_call_poc_inact_pane_g

0xb94a,	// (0x0002d5c3) popup_call_poc_inact_window_t1_ParamLimits

0xb94a,	// (0x0002d5c3) popup_call_poc_inact_window_t1

0xb95f,	// (0x0002d5d8) popup_call_poc_inact_window_t2_ParamLimits

0xb95f,	// (0x0002d5d8) popup_call_poc_inact_window_t2

0xb974,	// (0x0002d5ed) popup_call_poc_inact_window_t3_ParamLimits

0xb974,	// (0x0002d5ed) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x000311b7) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x000311b7) popup_call_poc_inact_window_t

0xc9b2,	// (0x0002e62b) context_pane_ParamLimits

0x68cb,	// (0x00028544) signal_pane_ParamLimits

0xb473,	// (0x0002d0ec) main_call2_pane

0xc9a0,	// (0x0002e619) popup_phob_thumbnail2_window_ParamLimits

0xc9a0,	// (0x0002e619) popup_phob_thumbnail2_window

0xb68b,	// (0x0002d304) aid_hotspot_pointer_arrow_pane

0xb693,	// (0x0002d30c) aid_hotspot_pointer_hand_pane

0x648e,	// (0x00028107) phob_pre_status_pane_g5

0x4597,	// (0x00026210) cams_zoom_pane_ParamLimits

0x45a6,	// (0x0002621f) image_vga_pane_ParamLimits

0x45be,	// (0x00026237) main_camera_pane_g1_ParamLimits

0x45ce,	// (0x00026247) main_camera_pane_g2_ParamLimits

0x45de,	// (0x00026257) main_camera_pane_g3_ParamLimits

0x45ee,	// (0x00026267) main_camera_pane_g4_ParamLimits

0x45fe,	// (0x00026277) main_camera_pane_g5_ParamLimits

0x460e,	// (0x00026287) main_camera_pane_g6_ParamLimits

0x461e,	// (0x00026297) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00030eb6) main_camera_pane_g_ParamLimits

0x463a,	// (0x000262b3) main_camera_pane_t1_ParamLimits

0x4650,	// (0x000262c9) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00030ec7) main_camera_pane_t_ParamLimits

0x3cb9,	// (0x00025932) bg_popup_preview_window_pane_cp01_ParamLimits

0x3cb9,	// (0x00025932) bg_popup_preview_window_pane_cp01

0xb989,	// (0x0002d602) popup_phob_thumbnail2_window_g1_ParamLimits

0xb989,	// (0x0002d602) popup_phob_thumbnail2_window_g1

0x3a5e,	// (0x000256d7) call2_cli_visual_pane

0x61e5,	// (0x00027e5e) popup_call2_audio_conf_window_ParamLimits

0x61e5,	// (0x00027e5e) popup_call2_audio_conf_window

0x6203,	// (0x00027e7c) popup_call2_audio_first_window_ParamLimits

0x6203,	// (0x00027e7c) popup_call2_audio_first_window

0x6279,	// (0x00027ef2) popup_call2_audio_in_window_ParamLimits

0x6279,	// (0x00027ef2) popup_call2_audio_in_window

0x62ad,	// (0x00027f26) popup_call2_audio_out_window_ParamLimits

0x62ad,	// (0x00027f26) popup_call2_audio_out_window

0x62ff,	// (0x00027f78) popup_call2_audio_second_window_ParamLimits

0x62ff,	// (0x00027f78) popup_call2_audio_second_window

0x6351,	// (0x00027fca) popup_call2_audio_wait_window_ParamLimits

0x6351,	// (0x00027fca) popup_call2_audio_wait_window

0x3a5e,	// (0x000256d7) bg_popup_call2_act_pane_cp03

0x3c9b,	// (0x00025914) list_conf_pane_cp

0xb995,	// (0x0002d60e) popup_call2_audio_conf_window_t1

0xb1ea,	// (0x0002ce63) list_single_graphic_popup_conf2_pane_ParamLimits

0xb1ea,	// (0x0002ce63) list_single_graphic_popup_conf2_pane

0xb1fd,	// (0x0002ce76) list_highlight_pane_cp04

0xb9a3,	// (0x0002d61c) list_single_graphic_popup_conf2_pane_g1

0xb20e,	// (0x0002ce87) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x000311be) list_single_graphic_popup_conf2_pane_g

0xb9ab,	// (0x0002d624) list_single_graphic_popup_conf2_pane_t1

0xb9b9,	// (0x0002d632) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9b9,	// (0x0002d632) bg_popup_call2_act_pane_cp01

0xba43,	// (0x0002d6bc) call_type_pane_cp05_ParamLimits

0xba43,	// (0x0002d6bc) call_type_pane_cp05

0xba97,	// (0x0002d710) popup_call2_audio_second_window_g1_ParamLimits

0xba97,	// (0x0002d710) popup_call2_audio_second_window_g1

0xbaeb,	// (0x0002d764) popup_call2_audio_second_window_g2_ParamLimits

0xbaeb,	// (0x0002d764) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x000311c3) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x000311c3) popup_call2_audio_second_window_g

0xbb50,	// (0x0002d7c9) popup_call2_audio_second_window_t1_ParamLimits

0xbb50,	// (0x0002d7c9) popup_call2_audio_second_window_t1

0xbc0b,	// (0x0002d884) popup_call2_audio_second_window_t2_ParamLimits

0xbc0b,	// (0x0002d884) popup_call2_audio_second_window_t2

0xbc5e,	// (0x0002d8d7) popup_call2_audio_second_window_t3_ParamLimits

0xbc5e,	// (0x0002d8d7) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x000311ca) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x000311ca) popup_call2_audio_second_window_t

0x3a5e,	// (0x000256d7) bg_popup_call2_in_pane_cp02

0x3a68,	// (0x000256e1) call_type_pane_cp04

0x3a70,	// (0x000256e9) popup_call2_audio_wait_window_g1

0x3a78,	// (0x000256f1) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00030da3) popup_call2_audio_wait_window_g

0x3a80,	// (0x000256f9) popup_call2_audio_wait_window_t3

0xbd51,	// (0x0002d9ca) bg_popup_call2_act_pane_ParamLimits

0xbd51,	// (0x0002d9ca) bg_popup_call2_act_pane

0xbe11,	// (0x0002da8a) call_type_pane_cp03_ParamLimits

0xbe11,	// (0x0002da8a) call_type_pane_cp03

0xbe75,	// (0x0002daee) popup_call2_audio_first_window_g1_ParamLimits

0xbe75,	// (0x0002daee) popup_call2_audio_first_window_g1

0xbee5,	// (0x0002db5e) popup_call2_audio_first_window_g2_ParamLimits

0xbee5,	// (0x0002db5e) popup_call2_audio_first_window_g2

0xb544,	// (0x0002d1bd) popup_call2_audio_first_window_g3_ParamLimits

0xb544,	// (0x0002d1bd) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x000311d3) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x000311d3) popup_call2_audio_first_window_g

0xbfc3,	// (0x0002dc3c) popup_call2_audio_first_window_t1_ParamLimits

0xbfc3,	// (0x0002dc3c) popup_call2_audio_first_window_t1

0xc0c6,	// (0x0002dd3f) popup_call2_audio_first_window_t4_ParamLimits

0xc0c6,	// (0x0002dd3f) popup_call2_audio_first_window_t4

0xc1a9,	// (0x0002de22) popup_call2_audio_first_window_t5_ParamLimits

0xc1a9,	// (0x0002de22) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x000311de) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x000311de) popup_call2_audio_first_window_t

0x3cb1,	// (0x0002592a) bg_popup_call2_act_pane_g1

0xc856,	// (0x0002e4cf) popup_cale_lunar_info_window_t1

0xc864,	// (0x0002e4dd) popup_cale_lunar_info_window_t2

0xc872,	// (0x0002e4eb) popup_cale_lunar_info_window_t3

0x3a5e,	// (0x000256d7) bg_popup_call2_bubble_pane

0xc2aa,	// (0x0002df23) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2aa,	// (0x0002df23) bg_popup_call2_in_pane_cp01

0x3716,	// (0x0002538f) call_type_pane_cp02

0xc2f2,	// (0x0002df6b) popup_call2_audio_out_window_g1_ParamLimits

0xc2f2,	// (0x0002df6b) popup_call2_audio_out_window_g1

0xc31e,	// (0x0002df97) popup_call2_audio_out_window_g2_ParamLimits

0xc31e,	// (0x0002df97) popup_call2_audio_out_window_g2

0xc346,	// (0x0002dfbf) popup_call2_audio_out_window_g3_ParamLimits

0xc346,	// (0x0002dfbf) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x000311e7) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x000311e7) popup_call2_audio_out_window_g

0xc381,	// (0x0002dffa) popup_call2_audio_out_window_t1_ParamLimits

0xc381,	// (0x0002dffa) popup_call2_audio_out_window_t1

0xc3e0,	// (0x0002e059) popup_call2_audio_out_window_t2_ParamLimits

0xc3e0,	// (0x0002e059) popup_call2_audio_out_window_t2

0xc434,	// (0x0002e0ad) popup_call2_audio_out_window_t3_ParamLimits

0xc434,	// (0x0002e0ad) popup_call2_audio_out_window_t3

0xc44a,	// (0x0002e0c3) popup_call2_audio_out_window_t4_ParamLimits

0xc44a,	// (0x0002e0c3) popup_call2_audio_out_window_t4

0xc460,	// (0x0002e0d9) popup_call2_audio_out_window_t5_ParamLimits

0xc460,	// (0x0002e0d9) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x000311f0) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x000311f0) popup_call2_audio_out_window_t

0xc4c4,	// (0x0002e13d) bg_popup_call2_in_pane_ParamLimits

0xc4c4,	// (0x0002e13d) bg_popup_call2_in_pane

0xc520,	// (0x0002e199) popup_call2_audio_in_window_g1_ParamLimits

0xc520,	// (0x0002e199) popup_call2_audio_in_window_g1

0xc558,	// (0x0002e1d1) popup_call2_audio_in_window_g2_ParamLimits

0xc558,	// (0x0002e1d1) popup_call2_audio_in_window_g2

0xc590,	// (0x0002e209) popup_call2_audio_in_window_g3_ParamLimits

0xc590,	// (0x0002e209) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x000311fd) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x000311fd) popup_call2_audio_in_window_g

0xc5e8,	// (0x0002e261) popup_call2_audio_in_window_t1_ParamLimits

0xc5e8,	// (0x0002e261) popup_call2_audio_in_window_t1

0xc668,	// (0x0002e2e1) popup_call2_audio_in_window_t2_ParamLimits

0xc668,	// (0x0002e2e1) popup_call2_audio_in_window_t2

0xc6e8,	// (0x0002e361) popup_call2_audio_in_window_t3_ParamLimits

0xc6e8,	// (0x0002e361) popup_call2_audio_in_window_t3

0xc702,	// (0x0002e37b) popup_call2_audio_in_window_t4_ParamLimits

0xc702,	// (0x0002e37b) popup_call2_audio_in_window_t4

0xc714,	// (0x0002e38d) popup_call2_audio_in_window_t5_ParamLimits

0xc714,	// (0x0002e38d) popup_call2_audio_in_window_t5

0xc729,	// (0x0002e3a2) popup_call2_audio_in_window_t6_ParamLimits

0xc729,	// (0x0002e3a2) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00031206) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00031206) popup_call2_audio_in_window_t

0x3cb1,	// (0x0002592a) bg_popup_call2_in_pane_g1

0xc880,	// (0x0002e4f9) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x00031281) popup_cale_lunar_info_window_t

0x3cb9,	// (0x00025932) bg_popup_call2_rect_pane_ParamLimits

0x3cb9,	// (0x00025932) bg_popup_call2_rect_pane

0x3a5e,	// (0x000256d7) call2_cli_visual_graphic_pane

0x3a5e,	// (0x000256d7) call2_cli_visual_text_pane

0xca52,	// (0x0002e6cb) smil_status_volume_pane_g3

0x0002,

0x4014,	// (0x00025c8d) call2_cli_visual_graphic_pane_g1

0x4014,	// (0x00025c8d) call2_cli_visual_graphic_pane_g2

0x4014,	// (0x00025c8d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00031213) call2_cli_visual_graphic_pane_g

0xc73e,	// (0x0002e3b7) bg_popup_call2_rect_pane_g1

0x412d,	// (0x00025da6) bg_popup_call2_rect_pane_g2

0xc746,	// (0x0002e3bf) bg_popup_call2_rect_pane_g3

0xc74e,	// (0x0002e3c7) bg_popup_call2_rect_pane_g4

0xc756,	// (0x0002e3cf) bg_popup_call2_rect_pane_g5

0xc75e,	// (0x0002e3d7) bg_popup_call2_rect_pane_g6

0xc766,	// (0x0002e3df) bg_popup_call2_rect_pane_g7

0xc76e,	// (0x0002e3e7) bg_popup_call2_rect_pane_g8

0xc776,	// (0x0002e3ef) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003121a) bg_popup_call2_rect_pane_g

0xc77e,	// (0x0002e3f7) bg_popup_call2_bubble_pane_g1

0xc786,	// (0x0002e3ff) bg_popup_call2_bubble_pane_g2

0xc78e,	// (0x0002e407) bg_popup_call2_bubble_pane_g3

0xc796,	// (0x0002e40f) bg_popup_call2_bubble_pane_g4

0xc79e,	// (0x0002e417) bg_popup_call2_bubble_pane_g5

0xc7a6,	// (0x0002e41f) bg_popup_call2_bubble_pane_g6

0xc7ae,	// (0x0002e427) bg_popup_call2_bubble_pane_g7

0xc7b6,	// (0x0002e42f) bg_popup_call2_bubble_pane_g8

0xc7be,	// (0x0002e437) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0003122d) bg_popup_call2_bubble_pane_g

0x41a3,	// (0x00025e1c) aid_cale_week_size_cell_pane

0x4666,	// (0x000262df) aid_cams_cif_uncrop_pane_ParamLimits

0x4666,	// (0x000262df) aid_cams_cif_uncrop_pane

0x4845,	// (0x000264be) aid_cams_size_cell_ParamLimits

0x4845,	// (0x000264be) aid_cams_size_cell

0x4859,	// (0x000264d2) grid_cams_pane_ParamLimits

0x486e,	// (0x000264e7) linegrid_cams_pane_ParamLimits

0x4a66,	// (0x000266df) call_video_pane_t1

0x4a78,	// (0x000266f1) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00030f1a) call_video_pane_t

0x4e4f,	// (0x00026ac8) aid_cale_month_size_cell_pane_ParamLimits

0x4e4f,	// (0x00026ac8) aid_cale_month_size_cell_pane

0xf651,	// (0x000312ca) smil_status_volume_pane_g

0xca5f,	// (0x0002e6d8) volume_smil_pane_ParamLimits

0x337f,	// (0x00024ff8) aid_popup2_width_pane

0x4085,	// (0x00025cfe) cell_qdial_pane_g4_ParamLimits

0x4085,	// (0x00025cfe) cell_qdial_pane_g4

0x5916,	// (0x0002758f) aid_blid_cardinal_pane_ParamLimits

0x5922,	// (0x0002759b) aid_blid_destination_pane_ParamLimits

0x5922,	// (0x0002759b) aid_blid_destination_pane

0x3cb9,	// (0x00025932) bg_popup_call_poc_act_pane_ParamLimits

0x3cb9,	// (0x00025932) bg_popup_call_poc_act_pane

0x3cb9,	// (0x00025932) bg_popup_call_poc_inact_pane_ParamLimits

0x3cb9,	// (0x00025932) bg_popup_call_poc_inact_pane

0xc7c6,	// (0x0002e43f) bg_popup_call_poc_act_pane_g1

0xc7ce,	// (0x0002e447) bg_popup_call_poc_act_pane_g2

0xc7d6,	// (0x0002e44f) bg_popup_call_poc_act_pane_g3

0xc796,	// (0x0002e40f) bg_popup_call_poc_act_pane_g4

0xc79e,	// (0x0002e417) bg_popup_call_poc_act_pane_g5

0xc7de,	// (0x0002e457) bg_popup_call_poc_act_pane_g6

0xc7ae,	// (0x0002e427) bg_popup_call_poc_act_pane_g7

0xc7e6,	// (0x0002e45f) bg_popup_call_poc_act_pane_g8

0x3a5e,	// (0x000256d7) main_usb_pane

0xc97f,	// (0x0002e5f8) popup_cale_lunar_info_window

0x4c9d,	// (0x00026916) im_reading_pane_t1_ParamLimits

0x4cd3,	// (0x0002694c) list_im_pane_ParamLimits

0x4ce4,	// (0x0002695d) scroll_pane_cp07_ParamLimits

0x3a5e,	// (0x000256d7) grid_highlight_pane_cp012

0x3cb9,	// (0x00025932) mup_scale_pane_ParamLimits

0xb6db,	// (0x0002d354) main_usb_pane_g1_ParamLimits

0xb6db,	// (0x0002d354) main_usb_pane_g1

0x63ab,	// (0x00028024) main_usb_pane_g2_ParamLimits

0x63ab,	// (0x00028024) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x0003126a) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x0003126a) main_usb_pane_g

0x63bf,	// (0x00028038) main_usb_pane_t1_ParamLimits

0x63bf,	// (0x00028038) main_usb_pane_t1

0x63d1,	// (0x0002804a) main_usb_pane_t2_ParamLimits

0x63d1,	// (0x0002804a) main_usb_pane_t2

0x63e3,	// (0x0002805c) main_usb_pane_t3_ParamLimits

0x63e3,	// (0x0002805c) main_usb_pane_t3

0x63f5,	// (0x0002806e) main_usb_pane_t4_ParamLimits

0x63f5,	// (0x0002806e) main_usb_pane_t4

0x6407,	// (0x00028080) main_usb_pane_t5_ParamLimits

0x6407,	// (0x00028080) main_usb_pane_t5

0x6419,	// (0x00028092) main_usb_pane_t6_ParamLimits

0x6419,	// (0x00028092) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x0003126f) main_usb_pane_t_ParamLimits

0xb337,	// (0x0002cfb0) aid_text_placing

0x58c2,	// (0x0002753b) main_location2_pane_t1_ParamLimits

0x58d8,	// (0x00027551) main_location2_pane_t2_ParamLimits

0x58ee,	// (0x00027567) main_location2_pane_t3_ParamLimits

0x5904,	// (0x0002757d) main_location2_pane_t4_ParamLimits

0x5904,	// (0x0002757d) main_location2_pane_t4

0xf402,	// (0x0003107b) main_location2_pane_t_ParamLimits

0x3d83,	// (0x000259fc) find_pinb_pane_g2_ParamLimits

0x3d83,	// (0x000259fc) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00030dc9) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00030dc9) find_pinb_pane_g

0x3d8f,	// (0x00025a08) find_pinb_pane_t1_ParamLimits

0x3da1,	// (0x00025a1a) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00030dce) find_pinb_pane_t_ParamLimits

0x3a5e,	// (0x000256d7) main_call3_pane

0x518b,	// (0x00026e04) cale_month_day_heading_pane_t1_ParamLimits

0x51e9,	// (0x00026e62) cale_month_day_heading_pane_t2_ParamLimits

0x524e,	// (0x00026ec7) cale_month_day_heading_pane_t3_ParamLimits

0x52b3,	// (0x00026f2c) cale_month_day_heading_pane_t4_ParamLimits

0x5318,	// (0x00026f91) cale_month_day_heading_pane_t5_ParamLimits

0x537d,	// (0x00026ff6) cale_month_day_heading_pane_t6_ParamLimits

0x53e2,	// (0x0002705b) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00030f52) cale_month_day_heading_pane_t_ParamLimits

0xacf8,	// (0x0002c971) smil_status_volume_pane

0x5f34,	// (0x00027bad) postcard_address_pane_ParamLimits

0x5f34,	// (0x00027bad) postcard_address_pane

0x5f46,	// (0x00027bbf) postcard_message_pane_ParamLimits

0x5f46,	// (0x00027bbf) postcard_message_pane

0x6389,	// (0x00028002) call2_cli_visual_pane_t1_ParamLimits

0x6389,	// (0x00028002) call2_cli_visual_pane_t1

0x6ae7,	// (0x00028760) postcard_message_pane_t1_ParamLimits

0x6ae7,	// (0x00028760) postcard_message_pane_t1

0x6ad0,	// (0x00028749) postcard_address_pane_t1_ParamLimits

0x6ad0,	// (0x00028749) postcard_address_pane_t1

0x6abe,	// (0x00028737) popup_call3_audio_in_window_ParamLimits

0x6abe,	// (0x00028737) popup_call3_audio_in_window

0x694d,	// (0x000285c6) bg_popup_call3_in_pane_ParamLimits

0x694d,	// (0x000285c6) bg_popup_call3_in_pane

0x69bf,	// (0x00028638) popup_call3_audio_in_window_g1_ParamLimits

0x69bf,	// (0x00028638) popup_call3_audio_in_window_g1

0x69df,	// (0x00028658) popup_call3_audio_in_window_g2_ParamLimits

0x69df,	// (0x00028658) popup_call3_audio_in_window_g2

0x69ff,	// (0x00028678) popup_call3_audio_in_window_g3_ParamLimits

0x69ff,	// (0x00028678) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x000312d1) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x000312d1) popup_call3_audio_in_window_g

0x6a30,	// (0x000286a9) popup_call3_audio_in_window_t1_ParamLimits

0x6a30,	// (0x000286a9) popup_call3_audio_in_window_t1

0x6a6e,	// (0x000286e7) popup_call3_audio_in_window_t2_ParamLimits

0x6a6e,	// (0x000286e7) popup_call3_audio_in_window_t2

0x6aac,	// (0x00028725) popup_call3_audio_in_window_t3_ParamLimits

0x6aac,	// (0x00028725) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x000312da) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x000312da) popup_call3_audio_in_window_t

0xb473,	// (0x0002d0ec) bg_popup_call3_rect_pane

0xc73e,	// (0x0002e3b7) bg_popup_call3_rect_pane_g1

0x412d,	// (0x00025da6) bg_popup_call3_rect_pane_g2

0xc746,	// (0x0002e3bf) bg_popup_call3_rect_pane_g3

0xc74e,	// (0x0002e3c7) bg_popup_call3_rect_pane_g4

0xc756,	// (0x0002e3cf) bg_popup_call3_rect_pane_g5

0xc75e,	// (0x0002e3d7) bg_popup_call3_rect_pane_g6

0xc766,	// (0x0002e3df) bg_popup_call3_rect_pane_g7

0x5c20,	// (0x00027899) mup_visualizer_osc_pane

0xb552,	// (0x0002d1cb) mup_visualizer_spec_pane

0x697d,	// (0x000285f6) call3_video_qcif_pane_ParamLimits

0x697d,	// (0x000285f6) call3_video_qcif_pane

0x698e,	// (0x00028607) call3_video_qcif_uncrop_pane_ParamLimits

0x698e,	// (0x00028607) call3_video_qcif_uncrop_pane

0x699a,	// (0x00028613) call3_video_subqcif_pane_ParamLimits

0x699a,	// (0x00028613) call3_video_subqcif_pane

0x69ae,	// (0x00028627) call3_video_subqcif_uncrop_pane_ParamLimits

0x69ae,	// (0x00028627) call3_video_subqcif_uncrop_pane

0x6a1f,	// (0x00028698) popup_call3_audio_in_window_g4_ParamLimits

0x6a1f,	// (0x00028698) popup_call3_audio_in_window_g4

0x693c,	// (0x000285b5) mup_spec_half_pane

0x6945,	// (0x000285be) mup_spec_half_pane_cp

0xca12,	// (0x0002e68b) mup_osc_middle_pane

0xca1b,	// (0x0002e694) mup_visualizer_osc_pane_g1

0x691d,	// (0x00028596) mup_spec_bar_pane_ParamLimits

0x691d,	// (0x00028596) mup_spec_bar_pane

0xc9ff,	// (0x0002e678) mup_spec_bar_pane_g1

0xca09,	// (0x0002e682) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x000312c5) mup_spec_bar_pane_g

0x41a3,	// (0x00025e1c) aid_cale_week_size_cell_pane_ParamLimits

0x41b6,	// (0x00025e2f) bg_cale_heading_pane_ParamLimits

0x41ca,	// (0x00025e43) bg_cale_pane_cp01_ParamLimits

0x41e3,	// (0x00025e5c) cale_week_corner_pane_ParamLimits

0x41f9,	// (0x00025e72) cale_week_day_heading_pane_ParamLimits

0x420d,	// (0x00025e86) cale_week_scroll_pane_g1_ParamLimits

0x421e,	// (0x00025e97) cale_week_scroll_pane_g2_ParamLimits

0x422f,	// (0x00025ea8) cale_week_scroll_pane_g3_ParamLimits

0x4240,	// (0x00025eb9) cale_week_scroll_pane_g4_ParamLimits

0x4251,	// (0x00025eca) cale_week_scroll_pane_g5_ParamLimits

0x4262,	// (0x00025edb) cale_week_scroll_pane_g6_ParamLimits

0x4273,	// (0x00025eec) cale_week_scroll_pane_g7_ParamLimits

0x4284,	// (0x00025efd) cale_week_scroll_pane_g8_ParamLimits

0x4297,	// (0x00025f10) cale_week_scroll_pane_g9_ParamLimits

0x42a8,	// (0x00025f21) cale_week_scroll_pane_g10_ParamLimits

0x42b9,	// (0x00025f32) cale_week_scroll_pane_g11_ParamLimits

0x42ca,	// (0x00025f43) cale_week_scroll_pane_g12_ParamLimits

0x42db,	// (0x00025f54) cale_week_scroll_pane_g13_ParamLimits

0x42ec,	// (0x00025f65) cale_week_scroll_pane_g14_ParamLimits

0x42fd,	// (0x00025f76) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00030e5a) cale_week_scroll_pane_g_ParamLimits

0x430e,	// (0x00025f87) cale_week_time_pane_ParamLimits

0x4321,	// (0x00025f9a) grid_cale_week_pane_ParamLimits

0x4334,	// (0x00025fad) listscroll_cale_week_pane_t1

0x4346,	// (0x00025fbf) scroll_pane_cp08_ParamLimits

0x4e90,	// (0x00026b09) cale_month_corner_pane_ParamLimits

0xac98,	// (0x0002c911) cale_month_pane_t1

0x514a,	// (0x00026dc3) cale_month_week_pane_ParamLimits

0x5709,	// (0x00027382) popup_call_status_window_g1_ParamLimits

0x571d,	// (0x00027396) popup_call_status_window_g2_ParamLimits

0x5731,	// (0x000273aa) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00031002) popup_call_status_window_g_ParamLimits

0xb10e,	// (0x0002cd87) aid_call2_pane

0x5e23,	// (0x00027a9c) msg_header_pane_g1

0x5f34,	// (0x00027bad) postcard_address2_pane_ParamLimits

0x5f34,	// (0x00027bad) postcard_address2_pane

0x5f46,	// (0x00027bbf) postcard_message2_pane_ParamLimits

0x5f46,	// (0x00027bbf) postcard_message2_pane

0x68d9,	// (0x00028552) message2_row_pane_ParamLimits

0x68d9,	// (0x00028552) message2_row_pane

0x68f3,	// (0x0002856c) address2_row_pane_ParamLimits

0x68f3,	// (0x0002856c) address2_row_pane

0xc9cd,	// (0x0002e646) postcard_message2_row_pane_g1

0xc9d5,	// (0x0002e64e) postcard_message2_row_pane_t1

0xc9cd,	// (0x0002e646) address2_row_pane_g1

0xc9d5,	// (0x0002e64e) address2_row_pane_t1

0x24fb,	// (0x00024174) aid_size_cell_vorec

0x3a5e,	// (0x000256d7) main_rss_pane

0x6906,	// (0x0002857f) rss_list_single_pane_ParamLimits

0x6906,	// (0x0002857f) rss_list_single_pane

0xc9e3,	// (0x0002e65c) rss_list_single_pane_t1

0xc9f1,	// (0x0002e66a) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x000312c0) rss_list_single_pane_t

0x3a5e,	// (0x000256d7) main_camera2_pane

0x3a5e,	// (0x000256d7) main_video2_pane

0x2595,	// (0x0002420e) cams_zoom_pane_cp2_ParamLimits

0x2595,	// (0x0002420e) cams_zoom_pane_cp2

0x25ac,	// (0x00024225) image2_vga_pane_ParamLimits

0x25ac,	// (0x00024225) image2_vga_pane

0x25e2,	// (0x0002425b) main_camera2_pane_g1_ParamLimits

0x25e2,	// (0x0002425b) main_camera2_pane_g1

0x2602,	// (0x0002427b) main_camera2_pane_g2_ParamLimits

0x2602,	// (0x0002427b) main_camera2_pane_g2

0x2619,	// (0x00024292) main_camera2_pane_g3_ParamLimits

0x2619,	// (0x00024292) main_camera2_pane_g3

0x2630,	// (0x000242a9) main_camera2_pane_g4_ParamLimits

0x2630,	// (0x000242a9) main_camera2_pane_g4

0x2647,	// (0x000242c0) main_camera2_pane_g5_ParamLimits

0x2647,	// (0x000242c0) main_camera2_pane_g5

0x265e,	// (0x000242d7) main_camera2_pane_g6_ParamLimits

0x265e,	// (0x000242d7) main_camera2_pane_g6

0x2675,	// (0x000242ee) main_camera2_pane_g7_ParamLimits

0x2675,	// (0x000242ee) main_camera2_pane_g7

0x268c,	// (0x00024305) main_camera2_pane_g8_ParamLimits

0x268c,	// (0x00024305) main_camera2_pane_g8

0x0008,

0xf668,	// (0x000312e1) main_camera2_pane_g_ParamLimits

0xf668,	// (0x000312e1) main_camera2_pane_g

0x26ba,	// (0x00024333) main_camera2_pane_t1_ParamLimits

0x26ba,	// (0x00024333) main_camera2_pane_t1

0x26e9,	// (0x00024362) main_camera2_pane_t2_ParamLimits

0x26e9,	// (0x00024362) main_camera2_pane_t2

0x2706,	// (0x0002437f) main_camera2_pane_t3_ParamLimits

0x2706,	// (0x0002437f) main_camera2_pane_t3

0x2752,	// (0x000243cb) main_camera2_pane_t4_ParamLimits

0x2752,	// (0x000243cb) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x000312f4) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x000312f4) main_camera2_pane_t

0x27c7,	// (0x00024440) cams_zoom_pane_cp4_ParamLimits

0x27c7,	// (0x00024440) cams_zoom_pane_cp4

0x27dd,	// (0x00024456) image2_cif_pane_ParamLimits

0x27dd,	// (0x00024456) image2_cif_pane

0x2800,	// (0x00024479) image2_subqcif_pane_ParamLimits

0x2800,	// (0x00024479) image2_subqcif_pane

0x2816,	// (0x0002448f) main_video2_pane_g1_ParamLimits

0x2816,	// (0x0002448f) main_video2_pane_g1

0x2830,	// (0x000244a9) main_video2_pane_g2_ParamLimits

0x2830,	// (0x000244a9) main_video2_pane_g2

0x2846,	// (0x000244bf) main_video2_pane_g3_ParamLimits

0x2846,	// (0x000244bf) main_video2_pane_g3

0x285c,	// (0x000244d5) main_video2_pane_g4_ParamLimits

0x285c,	// (0x000244d5) main_video2_pane_g4

0x2872,	// (0x000244eb) main_video2_pane_g5_ParamLimits

0x2872,	// (0x000244eb) main_video2_pane_g5

0x2888,	// (0x00024501) main_video2_pane_g6_ParamLimits

0x2888,	// (0x00024501) main_video2_pane_g6

0x0005,

0xf68a,	// (0x00031303) main_video2_pane_g_ParamLimits

0xf68a,	// (0x00031303) main_video2_pane_g

0x28a2,	// (0x0002451b) main_video2_pane_t1_ParamLimits

0x28a2,	// (0x0002451b) main_video2_pane_t1

0x28c6,	// (0x0002453f) main_video2_pane_t2_ParamLimits

0x28c6,	// (0x0002453f) main_video2_pane_t2

0x2910,	// (0x00024589) main_video2_pane_t3_ParamLimits

0x2910,	// (0x00024589) main_video2_pane_t3

0x0002,

0xf697,	// (0x00031310) main_video2_pane_t_ParamLimits

0xf697,	// (0x00031310) main_video2_pane_t

0x64c8,	// (0x00028141) call_muted_g2

0x0001,

0xf639,	// (0x000312b2) call_muted_g

0x3a5e,	// (0x000256d7) main_mup2_pane

0x6b02,	// (0x0002877b) main_mup2_pane_g1_ParamLimits

0x6b02,	// (0x0002877b) main_mup2_pane_g1

0x6b0e,	// (0x00028787) main_mup2_pane_g2_ParamLimits

0x6b0e,	// (0x00028787) main_mup2_pane_g2

0xcb7e,	// (0x0002e7f7) main_mup_pane_g13_cp1

0xcb86,	// (0x0002e7ff) mup_volume_pane_cp1

0x6b2a,	// (0x000287a3) main_mup2_pane_g4_ParamLimits

0x6b2a,	// (0x000287a3) main_mup2_pane_g4

0x6b3a,	// (0x000287b3) main_mup2_pane_g5_ParamLimits

0x6b3a,	// (0x000287b3) main_mup2_pane_g5

0x6b4a,	// (0x000287c3) main_mup2_pane_g6_ParamLimits

0x6b4a,	// (0x000287c3) main_mup2_pane_g6

0x6b5a,	// (0x000287d3) main_mup2_pane_g7_ParamLimits

0x6b5a,	// (0x000287d3) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x00031317) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x00031317) main_mup2_pane_g

0x6b72,	// (0x000287eb) main_mup2_pane_t1_ParamLimits

0x6b72,	// (0x000287eb) main_mup2_pane_t1

0x6b88,	// (0x00028801) main_mup2_pane_t2_ParamLimits

0x6b88,	// (0x00028801) main_mup2_pane_t2

0x6b9e,	// (0x00028817) main_mup2_pane_t3_ParamLimits

0x6b9e,	// (0x00028817) main_mup2_pane_t3

0x6bb4,	// (0x0002882d) main_mup2_pane_t4_ParamLimits

0x6bb4,	// (0x0002882d) main_mup2_pane_t4

0x6bcc,	// (0x00028845) main_mup2_pane_t5_ParamLimits

0x6bcc,	// (0x00028845) main_mup2_pane_t5

0x6be4,	// (0x0002885d) main_mup2_pane_t6_ParamLimits

0x6be4,	// (0x0002885d) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x00031326) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x00031326) main_mup2_pane_t

0x6c14,	// (0x0002888d) mup2_visualizer_pane_ParamLimits

0x6c14,	// (0x0002888d) mup2_visualizer_pane

0x6c3f,	// (0x000288b8) mup_progress_pane_cp_ParamLimits

0x6c3f,	// (0x000288b8) mup_progress_pane_cp

0xcb60,	// (0x0002e7d9) mup_volume_pane_cp_ParamLimits

0xcb60,	// (0x0002e7d9) mup_volume_pane_cp

0x6c53,	// (0x000288cc) mup2_visualizer_pane_g1_ParamLimits

0x6c53,	// (0x000288cc) mup2_visualizer_pane_g1

0xca9f,	// (0x0002e718) mup2_visualizer_pane_g2_ParamLimits

0xca9f,	// (0x0002e718) mup2_visualizer_pane_g2

0x6c68,	// (0x000288e1) mup2_visualizer_pane_g3_ParamLimits

0x6c68,	// (0x000288e1) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x00031333) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x00031333) mup2_visualizer_pane_g

0xb824,	// (0x0002d49d) aid_size_cell_fmradio

0x6624,	// (0x0002829d) aid_height_parent_landcape

0xaaff,	// (0x0002c778) wml_content_pane_cp

0xab07,	// (0x0002c780) wml_tabs_pane

0xab10,	// (0x0002c789) popup_wml_miniature_window

0xab18,	// (0x0002c791) scroll_pane_cp021

0xab2c,	// (0x0002c7a5) wml_content_pane_comp8

0x3a5e,	// (0x000256d7) bg_popup_sub_pane_cp05

0xcabd,	// (0x0002e736) popup_wml_miniature_window_g1

0xcac5,	// (0x0002e73e) wml_miniature_view_pane

0x6c74,	// (0x000288ed) aid_size_wml_view

0x6c7c,	// (0x000288f5) wml_miniature_view_pane_g1

0x6c85,	// (0x000288fe) wml_miniature_view_pane_g2

0x6c8e,	// (0x00028907) wml_miniature_view_pane_g3

0x6c96,	// (0x0002890f) wml_miniature_view_pane_g4

0x6c9e,	// (0x00028917) wml_miniature_view_pane_g5

0x6ca6,	// (0x0002891f) wml_miniature_view_pane_g6

0x6cae,	// (0x00028927) wml_miniature_view_pane_g7

0x6cb6,	// (0x0002892f) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x0003133a) wml_miniature_view_pane_g

0xcacd,	// (0x0002e746) background_graphic_ParamLimits

0xcacd,	// (0x0002e746) background_graphic

0xcad9,	// (0x0002e752) wml_tabs_2_pane

0xcae2,	// (0x0002e75b) wml_tabs_3_pane_ParamLimits

0xcae2,	// (0x0002e75b) wml_tabs_3_pane

0xcaf4,	// (0x0002e76d) wml_tabs_4_pane_ParamLimits

0xcaf4,	// (0x0002e76d) wml_tabs_4_pane

0xcb0a,	// (0x0002e783) wml_tabs_5_pane_ParamLimits

0xcb0a,	// (0x0002e783) wml_tabs_5_pane

0xcb24,	// (0x0002e79d) wml_tabs_pane_g2_ParamLimits

0xcb24,	// (0x0002e79d) wml_tabs_pane_g2

0xcb38,	// (0x0002e7b1) wml_tabs_pane_g3_ParamLimits

0xcb38,	// (0x0002e7b1) wml_tabs_pane_g3

0x6cbe,	// (0x00028937) wml_tabs_2_active_pane_ParamLimits

0x6cbe,	// (0x00028937) wml_tabs_2_active_pane

0x6cce,	// (0x00028947) wml_tabs_2_passive_pane_ParamLimits

0x6cce,	// (0x00028947) wml_tabs_2_passive_pane

0x6cde,	// (0x00028957) wml_tabs_3_active_pane_cp_ParamLimits

0x6cde,	// (0x00028957) wml_tabs_3_active_pane_cp

0x6cef,	// (0x00028968) wml_tabs_3_passive_pane_ParamLimits

0x6cef,	// (0x00028968) wml_tabs_3_passive_pane

0x6d00,	// (0x00028979) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d00,	// (0x00028979) wml_tabs_3_passive_pane_cp

0x6d11,	// (0x0002898a) tabs_4_active_pane

0x6d19,	// (0x00028992) tabs_4_passive_pane

0x6d21,	// (0x0002899a) tabs_4_passive_pane_cp

0x6d29,	// (0x000289a2) tabs_4_passive_pane_cp2

0x63a3,	// (0x0002801c) aid_height_text

0x5bf6,	// (0x0002786f) mup_volume_cont_pane_ParamLimits

0x5bf6,	// (0x0002786f) mup_volume_cont_pane

0x3d41,	// (0x000259ba) aid_size_cell_pinb

0x3d4b,	// (0x000259c4) aid_size_list_pinb

0x6c2b,	// (0x000288a4) mup2_volume_cont_pane_ParamLimits

0x6c2b,	// (0x000288a4) mup2_volume_cont_pane

0xcb4c,	// (0x0002e7c5) mup2_volume_cont_pane_g1_ParamLimits

0xcb4c,	// (0x0002e7c5) mup2_volume_cont_pane_g1

0x3387,	// (0x00025000) aid_size_cell_touch_ParamLimits

0x3387,	// (0x00025000) aid_size_cell_touch

0x35ad,	// (0x00025226) touch_pane_ParamLimits

0x35ad,	// (0x00025226) touch_pane

0x336d,	// (0x00024fe6) main_rss2_pane

0xcb8e,	// (0x0002e807) listscroll_rss2_pane

0xcb97,	// (0x0002e810) rss2_navigation_pane

0xcb9f,	// (0x0002e818) list_rss2_pane

0xb2b4,	// (0x0002cf2d) scroll_pane_cp22

0xcba7,	// (0x0002e820) rss2_navigation_pane_g1

0xcbb0,	// (0x0002e829) rss2_navigation_pane_g2

0xcbb8,	// (0x0002e831) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x0003134b) rss2_navigation_pane_g

0xcbc0,	// (0x0002e839) rss2_navigation_pane_t1

0x6d31,	// (0x000289aa) rss2_list_single_pane_ParamLimits

0x6d31,	// (0x000289aa) rss2_list_single_pane

0xcbce,	// (0x0002e847) rss2_list_single_pane_t2

0xcbdc,	// (0x0002e855) rss2_list_single_pane_t3_ParamLimits

0xcbdc,	// (0x0002e855) rss2_list_single_pane_t3

0xcbf9,	// (0x0002e872) rss2_list_single_pane_t4

0x5590,	// (0x00027209) smil_status_pane_g1

0x3597,	// (0x00025210) main_image2_pane_ParamLimits

0x3597,	// (0x00025210) main_image2_pane

0x26a3,	// (0x0002431c) main_camera2_pane_g9_ParamLimits

0x26a3,	// (0x0002431c) main_camera2_pane_g9

0x2795,	// (0x0002440e) main_camera2_pane_t5_ParamLimits

0x2795,	// (0x0002440e) main_camera2_pane_t5

0xca74,	// (0x0002e6ed) main_camera2_pane_t6_ParamLimits

0xca74,	// (0x0002e6ed) main_camera2_pane_t6

0x6d45,	// (0x000289be) main_image2_pane_g1_ParamLimits

0x6d45,	// (0x000289be) main_image2_pane_g1

0x615b,	// (0x00027dd4) smil2_video_pane_ParamLimits

0x615b,	// (0x00027dd4) smil2_video_pane

0x33ac,	// (0x00025025) aid_zoom_text_primary_cp

0x3555,	// (0x000251ce) popup_preview_fixed_window

0x4c95,	// (0x0002690e) im_reading_pane_g1

0x2589,	// (0x00024202) cams2_bc_adjust_pane_cp_ParamLimits

0x2589,	// (0x00024202) cams2_bc_adjust_pane_cp

0x27bb,	// (0x00024434) cams2_bc_adjust_pane_ParamLimits

0x27bb,	// (0x00024434) cams2_bc_adjust_pane

0xcc07,	// (0x0002e880) cams2_bc_adjust_pane_g1

0xcc0f,	// (0x0002e888) cams2_slider_pane

0xcc18,	// (0x0002e891) cams2_slider_pane_g1

0xcc21,	// (0x0002e89a) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x00031352) cams2_slider_pane_g

0x22cf,	// (0x00023f48) calc_display_pane_ParamLimits

0x22eb,	// (0x00023f64) calc_paper_pane_ParamLimits

0x230c,	// (0x00023f85) grid_calc_pane_ParamLimits

0xb170,	// (0x0002cde9) popup_clock_digital_window_t1_ParamLimits

0xb7c1,	// (0x0002d43a) main_image_pane_t1

0x22b1,	// (0x00023f2a) aid_size_cell_calc_ParamLimits

0x22b1,	// (0x00023f2a) aid_size_cell_calc

0x6654,	// (0x000282cd) popup_blid_sat_info2_window_ParamLimits

0x6654,	// (0x000282cd) popup_blid_sat_info2_window

0xcc43,	// (0x0002e8bc) aid_size_cell_blid

0xcc4b,	// (0x0002e8c4) bg_popup_window_pane_cp07

0xcc6e,	// (0x0002e8e7) grid_popup_blid_pane

0xcc76,	// (0x0002e8ef) heading_pane_cp05_ParamLimits

0xcc76,	// (0x0002e8ef) heading_pane_cp05

0xcd3e,	// (0x0002e9b7) cell_popup_blid_pane_ParamLimits

0xcd3e,	// (0x0002e9b7) cell_popup_blid_pane

0xcd5e,	// (0x0002e9d7) cell_popup_blid_pane_g1

0xcd66,	// (0x0002e9df) cell_popup_blid_pane_t1

0x6bfe,	// (0x00028877) mup2_indicator_pane_ParamLimits

0x6bfe,	// (0x00028877) mup2_indicator_pane

0xb473,	// (0x0002d0ec) mup2_visualizer_osc_pane

0xcaab,	// (0x0002e724) mup2_visualizer_spec_pane_ParamLimits

0xcaab,	// (0x0002e724) mup2_visualizer_spec_pane

0x6d59,	// (0x000289d2) mup2_spec_half_pane

0x6d62,	// (0x000289db) mup2_spec_half_pane_cp

0x6d6a,	// (0x000289e3) mup2_spec_bar_pane_ParamLimits

0x6d6a,	// (0x000289e3) mup2_spec_bar_pane

0xc9ff,	// (0x0002e678) mup2_spec_bar_pane_g1

0xca09,	// (0x0002e682) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x000312c5) mup2_spec_bar_pane_g

0x6d89,	// (0x00028a02) mup2_osc_middle_pane

0xca1b,	// (0x0002e694) mup2_visualizer_osc_pane_g1

0x3615,	// (0x0002528e) popup_number_entry_window_t1_ParamLimits

0x3628,	// (0x000252a1) popup_number_entry_window_t2_ParamLimits

0x363a,	// (0x000252b3) popup_number_entry_window_t3_ParamLimits

0x364c,	// (0x000252c5) popup_number_entry_window_t5_ParamLimits

0x364c,	// (0x000252c5) popup_number_entry_window_t5

0xf0fb,	// (0x00030d74) popup_number_entry_window_t_ParamLimits

0x3680,	// (0x000252f9) text_title_cp2_ParamLimits

0xb69b,	// (0x0002d314) aid_hotspot_pointer_text2_pane

0xb6c1,	// (0x0002d33a) main_viewer_pane_g9_ParamLimits

0xb6c1,	// (0x0002d33a) main_viewer_pane_g9

0xac98,	// (0x0002c911) cale_month_pane_t1_ParamLimits

0xad2d,	// (0x0002c9a6) bg_cale_pane_ParamLimits

0xad45,	// (0x0002c9be) list_cale_pane_ParamLimits

0x4334,	// (0x00025fad) listscroll_cale_day_pane_t1

0xad56,	// (0x0002c9cf) scroll_pane_cp09_ParamLimits

0x5c28,	// (0x000278a1) main_mup_eq_pane_t1_ParamLimits

0x5c28,	// (0x000278a1) main_mup_eq_pane_t1

0x5c40,	// (0x000278b9) main_mup_eq_pane_t2_ParamLimits

0x5c40,	// (0x000278b9) main_mup_eq_pane_t2

0x5c56,	// (0x000278cf) main_mup_eq_pane_t3_ParamLimits

0x5c56,	// (0x000278cf) main_mup_eq_pane_t3

0x5c6c,	// (0x000278e5) main_mup_eq_pane_t4_ParamLimits

0x5c6c,	// (0x000278e5) main_mup_eq_pane_t4

0x5c82,	// (0x000278fb) main_mup_eq_pane_t5_ParamLimits

0x5c82,	// (0x000278fb) main_mup_eq_pane_t5

0x5c98,	// (0x00027911) main_mup_eq_pane_t6_ParamLimits

0x5c98,	// (0x00027911) main_mup_eq_pane_t6

0x5caa,	// (0x00027923) main_mup_eq_pane_t7_ParamLimits

0x5caa,	// (0x00027923) main_mup_eq_pane_t7

0x5cbc,	// (0x00027935) main_mup_eq_pane_t8_ParamLimits

0x5cbc,	// (0x00027935) main_mup_eq_pane_t8

0x5cce,	// (0x00027947) main_mup_eq_pane_t9_ParamLimits

0x5cce,	// (0x00027947) main_mup_eq_pane_t9

0x5ce4,	// (0x0002795d) main_mup_eq_pane_t10_ParamLimits

0x5ce4,	// (0x0002795d) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00031101) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00031101) main_mup_eq_pane_t

0x5d77,	// (0x000279f0) mup_equalizer_pane_cp5_ParamLimits

0x5d89,	// (0x00027a02) mup_equalizer_pane_cp6_ParamLimits

0x5d9b,	// (0x00027a14) mup_equalizer_pane_cp7_ParamLimits

0x336d,	// (0x00024fe6) main_gallery_pane

0xca24,	// (0x0002e69d) smil2_volume_pane

0xca2c,	// (0x0002e6a5) smil_status_volume_pane_g1_ParamLimits

0xca3f,	// (0x0002e6b8) smil_status_volume_pane_g2_ParamLimits

0xca52,	// (0x0002e6cb) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x000312ca) smil_status_volume_pane_g_ParamLimits

0xcc4b,	// (0x0002e8c4) bg_popup_window_pane_cp07_ParamLimits

0xcc59,	// (0x0002e8d2) blid_firmament_pane

0x6d92,	// (0x00028a0b) aid_size_cell_gallery_ParamLimits

0x6d92,	// (0x00028a0b) aid_size_cell_gallery

0x6da8,	// (0x00028a21) grid_gallery_pane_ParamLimits

0x6da8,	// (0x00028a21) grid_gallery_pane

0x6dbc,	// (0x00028a35) cell_gallery_pane_ParamLimits

0x6dbc,	// (0x00028a35) cell_gallery_pane

0xcd74,	// (0x0002e9ed) bg_cell_gallery_focus_pane_ParamLimits

0xcd74,	// (0x0002e9ed) bg_cell_gallery_focus_pane

0xcd86,	// (0x0002e9ff) cell_gallery_pane_g1_ParamLimits

0xcd86,	// (0x0002e9ff) cell_gallery_pane_g1

0x6e03,	// (0x00028a7c) cell_gallery_pane_g2_ParamLimits

0x6e03,	// (0x00028a7c) cell_gallery_pane_g2

0x6e10,	// (0x00028a89) cell_gallery_pane_g3_ParamLimits

0x6e10,	// (0x00028a89) cell_gallery_pane_g3

0xcd92,	// (0x0002ea0b) cell_gallery_pane_g4_ParamLimits

0xcd92,	// (0x0002ea0b) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x00031378) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x00031378) cell_gallery_pane_g

0xcd9e,	// (0x0002ea17) bg_cell_gallery_focus_pane_g1

0xcda6,	// (0x0002ea1f) bg_cell_gallery_focus_pane_g2

0xcdae,	// (0x0002ea27) bg_cell_gallery_focus_pane_g3

0xcdb6,	// (0x0002ea2f) bg_cell_gallery_focus_pane_g4

0xcdbe,	// (0x0002ea37) bg_cell_gallery_focus_pane_g5

0xcdc6,	// (0x0002ea3f) bg_cell_gallery_focus_pane_g6

0xcdce,	// (0x0002ea47) bg_cell_gallery_focus_pane_g7

0xcdd6,	// (0x0002ea4f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x00031381) bg_cell_gallery_focus_pane_g

0xcdde,	// (0x0002ea57) aid_firma_cardinal

0xcdf2,	// (0x0002ea6b) blid_firmament_pane_t1

0xce09,	// (0x0002ea82) blid_firmament_pane_t2

0xce20,	// (0x0002ea99) blid_firmament_pane_t3

0xce37,	// (0x0002eab0) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x00031392) blid_firmament_pane_t

0xce4e,	// (0x0002eac7) blid_sat_info_pane

0xce5e,	// (0x0002ead7) blid_sat_info_pane_g1

0xce5e,	// (0x0002ead7) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x0003139b) blid_sat_info_pane_g

0xce68,	// (0x0002eae1) blid_sat_info_pane_t1

0xce76,	// (0x0002eaef) smil2_volume_content_pane

0xce7f,	// (0x0002eaf8) smil2_volume_pane_g1

0xce87,	// (0x0002eb00) smil2_volume_content_pane_g1

0xce90,	// (0x0002eb09) smil2_volume_content_pane_g2

0xce99,	// (0x0002eb12) smil2_volume_content_pane_g3

0xcea2,	// (0x0002eb1b) smil2_volume_content_pane_g4

0xceab,	// (0x0002eb24) smil2_volume_content_pane_g5

0xceb4,	// (0x0002eb2d) smil2_volume_content_pane_g6

0xcebd,	// (0x0002eb36) smil2_volume_content_pane_g7

0xcec6,	// (0x0002eb3f) smil2_volume_content_pane_g8

0xcecf,	// (0x0002eb48) smil2_volume_content_pane_g9

0xced8,	// (0x0002eb51) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x000313a0) smil2_volume_content_pane_g

0x439c,	// (0x00026015) cale_week_day_heading_pane_t1_ParamLimits

0x43c6,	// (0x0002603f) cale_week_day_heading_pane_t2_ParamLimits

0x43f0,	// (0x00026069) cale_week_day_heading_pane_t3_ParamLimits

0x441a,	// (0x00026093) cale_week_day_heading_pane_t4_ParamLimits

0x4444,	// (0x000260bd) cale_week_day_heading_pane_t5_ParamLimits

0x446e,	// (0x000260e7) cale_week_day_heading_pane_t6_ParamLimits

0x4498,	// (0x00026111) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00030e79) cale_week_day_heading_pane_t_ParamLimits

0x44c2,	// (0x0002613b) bg_cale_side_pane_ParamLimits

0x239b,	// (0x00024014) cale_week_time_pane_t1_ParamLimits

0x23c7,	// (0x00024040) cale_week_time_pane_t2_ParamLimits

0x23f3,	// (0x0002406c) cale_week_time_pane_t3_ParamLimits

0x241f,	// (0x00024098) cale_week_time_pane_t4_ParamLimits

0x244b,	// (0x000240c4) cale_week_time_pane_t5_ParamLimits

0x2477,	// (0x000240f0) cale_week_time_pane_t6_ParamLimits

0x24a3,	// (0x0002411c) cale_week_time_pane_t7_ParamLimits

0x24cf,	// (0x00024148) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00030e88) cale_week_time_pane_t_ParamLimits

0x44d0,	// (0x00026149) cell_cale_week_pane_g2_ParamLimits

0x44c2,	// (0x0002613b) bg_cale_side_pane_cp01_ParamLimits

0x544f,	// (0x000270c8) cale_month_week_pane_t1_ParamLimits

0x5466,	// (0x000270df) cale_month_week_pane_t2_ParamLimits

0x547d,	// (0x000270f6) cale_month_week_pane_t3_ParamLimits

0x5494,	// (0x0002710d) cale_month_week_pane_t4_ParamLimits

0x54ab,	// (0x00027124) cale_month_week_pane_t5_ParamLimits

0x54c2,	// (0x0002713b) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00030f61) cale_month_week_pane_t_ParamLimits

0xacd4,	// (0x0002c94d) cell_cale_month_pane_g1_ParamLimits

0x336d,	// (0x00024fe6) main_cale_event_viewer_pane

0x336d,	// (0x00024fe6) listscroll_cale_event_viewer_pane

0xcee1,	// (0x0002eb5a) list_cale_ev_pane

0xcee9,	// (0x0002eb62) scroll_pane_cp023

0x6e1d,	// (0x00028a96) field_cale_ev_pane_ParamLimits

0x6e1d,	// (0x00028a96) field_cale_ev_pane

0xcef5,	// (0x0002eb6e) field_cale_ev_content_pane_ParamLimits

0xcef5,	// (0x0002eb6e) field_cale_ev_content_pane

0xcf01,	// (0x0002eb7a) field_cale_ev_pane_g1_ParamLimits

0xcf01,	// (0x0002eb7a) field_cale_ev_pane_g1

0xcf0d,	// (0x0002eb86) field_cale_ev_pane_g2_ParamLimits

0xcf0d,	// (0x0002eb86) field_cale_ev_pane_g2

0xcf25,	// (0x0002eb9e) field_cale_ev_pane_g3_ParamLimits

0xcf25,	// (0x0002eb9e) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x000313b5) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x000313b5) field_cale_ev_pane_g

0xcf3d,	// (0x0002ebb6) field_cale_ev_pane_t1_ParamLimits

0xcf3d,	// (0x0002ebb6) field_cale_ev_pane_t1

0x6e37,	// (0x00028ab0) field_cale_ev_content_pane_t1_ParamLimits

0x6e37,	// (0x00028ab0) field_cale_ev_content_pane_t1

0xb604,	// (0x0002d27d) bg_button_pane_cp01

0x418c,	// (0x00025e05) listscroll_cale_week_pane_ParamLimits

0x419b,	// (0x00025e14) popup_toolbar_window_cp01

0x4334,	// (0x00025fad) listscroll_cale_week_pane_t1_ParamLimits

0x3f6f,	// (0x00025be8) listscroll_cale_day_pane_ParamLimits

0x419b,	// (0x00025e14) popup_toolbar_window_cp02

0x4334,	// (0x00025fad) listscroll_cale_day_pane_t1_ParamLimits

0x418c,	// (0x00025e05) main_cale_month_pane_ParamLimits

0x6850,	// (0x000284c9) popup_toolbar_window_cp03_ParamLimits

0x6850,	// (0x000284c9) popup_toolbar_window_cp03

0x6035,	// (0x00027cae) main_image_pane_g2_ParamLimits

0x6035,	// (0x00027cae) main_image_pane_g2

0x6046,	// (0x00027cbf) main_image_pane_g3_ParamLimits

0x6046,	// (0x00027cbf) main_image_pane_g3

0x0002,

0xf51a,	// (0x00031193) main_image_pane_g_ParamLimits

0xf51a,	// (0x00031193) main_image_pane_g

0xb7c1,	// (0x0002d43a) main_image_pane_t1_ParamLimits

0x6057,	// (0x00027cd0) main_image_pane_t2_ParamLimits

0x6057,	// (0x00027cd0) main_image_pane_t2

0x6069,	// (0x00027ce2) main_image_pane_t3_ParamLimits

0x6069,	// (0x00027ce2) main_image_pane_t3

0x6091,	// (0x00027d0a) main_image_pane_t4_ParamLimits

0x6091,	// (0x00027d0a) main_image_pane_t4

0x0003,

0xf521,	// (0x0003119a) main_image_pane_t_ParamLimits

0xf521,	// (0x0003119a) main_image_pane_t

0x60b1,	// (0x00027d2a) popup_image_details_window_cp01

0x60b9,	// (0x00027d32) popup_toobar_trans_pane_cp01_ParamLimits

0x60b9,	// (0x00027d32) popup_toobar_trans_pane_cp01

0x671d,	// (0x00028396) popup_image_details_window_ParamLimits

0x671d,	// (0x00028396) popup_image_details_window

0xc987,	// (0x0002e600) popup_image_focus_window

0x2557,	// (0x000241d0) camera2_autofocus_pane_ParamLimits

0x2557,	// (0x000241d0) camera2_autofocus_pane

0x336d,	// (0x00024fe6) bg_popup_sub_pane_cp06

0xcf54,	// (0x0002ebcd) popup_image_focus_window_g1

0xcf5c,	// (0x0002ebd5) popup_image_focus_window_g2

0xcf64,	// (0x0002ebdd) popup_image_focus_window_g3

0xcf6c,	// (0x0002ebe5) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x000313bc) popup_image_focus_window_g

0xcf74,	// (0x0002ebed) popup_image_focus_window_t1

0xcf82,	// (0x0002ebfb) popup_image_focus_window_t2

0xcf91,	// (0x0002ec0a) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x000313c5) popup_image_focus_window_t

0xcf9f,	// (0x0002ec18) camera2_autofocus_pane_g1

0x3597,	// (0x00025210) bg_tb_trans_pane_cp01

0xcfad,	// (0x0002ec26) popup_image_details_window_g1

0xcfc0,	// (0x0002ec39) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x000313d7) popup_image_details_window_g

0xcfe9,	// (0x0002ec62) popup_image_details_window_t1

0xcffb,	// (0x0002ec74) popup_image_details_window_t2

0xd014,	// (0x0002ec8d) popup_image_details_window_t3

0xd028,	// (0x0002eca1) popup_image_details_window_t4

0xd043,	// (0x0002ecbc) popup_image_details_window_t5

0x0004,

0xf765,	// (0x000313de) popup_image_details_window_t

0x3f57,	// (0x00025bd0) bg_calc_paper_pane_ParamLimits

0xa991,	// (0x0002c60a) grid_highlight_pane_cp013

0xa99b,	// (0x0002c614) list_calc_pane_ParamLimits

0xa9ad,	// (0x0002c626) scroll_pane_cp024

0x3f6f,	// (0x00025be8) bg_calc_display_pane_ParamLimits

0xa9b5,	// (0x0002c62e) calc_display_pane_t1_ParamLimits

0xa9ca,	// (0x0002c643) calc_display_pane_t2_ParamLimits

0xa9df,	// (0x0002c658) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00030dfb) calc_display_pane_t_ParamLimits

0x2371,	// (0x00023fea) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00030e18) cell_calc_pane_g

0x237a,	// (0x00023ff3) cell_calc_pane_t1

0x401e,	// (0x00025c97) grid_highlight_pane_cp02_ParamLimits

0x4034,	// (0x00025cad) toolbar_button_pane_cp01_ParamLimits

0x4034,	// (0x00025cad) toolbar_button_pane_cp01

0xb806,	// (0x0002d47f) temp_image_control_pane_ParamLimits

0xb806,	// (0x0002d47f) temp_image_control_pane

0x3597,	// (0x00025210) main_mp3_pane

0xd05d,	// (0x0002ecd6) temp_image_control_pane_g1_ParamLimits

0xd05d,	// (0x0002ecd6) temp_image_control_pane_g1

0xd06b,	// (0x0002ece4) temp_image_control_pane_g2_ParamLimits

0xd06b,	// (0x0002ece4) temp_image_control_pane_g2

0xd07d,	// (0x0002ecf6) temp_image_control_pane_g3_ParamLimits

0xd07d,	// (0x0002ecf6) temp_image_control_pane_g3

0x6e84,	// (0x00028afd) temp_image_control_pane_g4_ParamLimits

0x6e84,	// (0x00028afd) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x000313e9) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x000313e9) temp_image_control_pane_g

0xd05d,	// (0x0002ecd6) main_mp3_pane_g1

0x6e95,	// (0x00028b0e) main_mp3_pane_g2

0x0007,

0xf779,	// (0x000313f2) main_mp3_pane_g

0xd0c0,	// (0x0002ed39) main_mp3_pane_t1

0x462e,	// (0x000262a7) main_camera_pane_g8_ParamLimits

0x462e,	// (0x000262a7) main_camera_pane_g8

0x47c9,	// (0x00026442) main_video_pane_g7_ParamLimits

0x47c9,	// (0x00026442) main_video_pane_g7

0xca8d,	// (0x0002e706) main_camera2_pane_t7_ParamLimits

0xca8d,	// (0x0002e706) main_camera2_pane_t7

0x4d5c,	// (0x000269d5) scroll_pane_cp025_ParamLimits

0x4d5c,	// (0x000269d5) scroll_pane_cp025

0xaad3,	// (0x0002c74c) scroll_pane_cp026_ParamLimits

0xaad3,	// (0x0002c74c) scroll_pane_cp026

0xaae2,	// (0x0002c75b) wml_content_pane_ParamLimits

0x336d,	// (0x00024fe6) main_touch_calib_pane

0x6f4b,	// (0x00028bc4) main_touch_calib_pane_g1

0x6f57,	// (0x00028bd0) main_touch_calib_pane_g2

0x6f63,	// (0x00028bdc) main_touch_calib_pane_g3

0x6f6f,	// (0x00028be8) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x00031410) main_touch_calib_pane_g

0x6f7b,	// (0x00028bf4) main_touch_calib_pane_t1

0x6f93,	// (0x00028c0c) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x00031419) main_touch_calib_pane_t

0xb365,	// (0x0002cfde) mup_progress_pane_cp02

0xb384,	// (0x0002cffd) navi_pane_g1

0xb404,	// (0x0002d07d) navi_pane_mp_t3

0x3597,	// (0x00025210) main_mp3_pane_ParamLimits

0x688a,	// (0x00028503) navi_pane_ParamLimits

0xd05d,	// (0x0002ecd6) main_mp3_pane_g1_ParamLimits

0x6e95,	// (0x00028b0e) main_mp3_pane_g2_ParamLimits

0x6ea1,	// (0x00028b1a) main_mp3_pane_g3_ParamLimits

0x6ea1,	// (0x00028b1a) main_mp3_pane_g3

0x6ead,	// (0x00028b26) main_mp3_pane_g4_ParamLimits

0x6ead,	// (0x00028b26) main_mp3_pane_g4

0xd08d,	// (0x0002ed06) main_mp3_pane_g5_ParamLimits

0xd08d,	// (0x0002ed06) main_mp3_pane_g5

0xd09b,	// (0x0002ed14) main_mp3_pane_g6_ParamLimits

0xd09b,	// (0x0002ed14) main_mp3_pane_g6

0xd0a8,	// (0x0002ed21) main_mp3_pane_g7_ParamLimits

0xd0a8,	// (0x0002ed21) main_mp3_pane_g7

0xd0b4,	// (0x0002ed2d) main_mp3_pane_g8_ParamLimits

0xd0b4,	// (0x0002ed2d) main_mp3_pane_g8

0xf779,	// (0x000313f2) main_mp3_pane_g_ParamLimits

0x6eb9,	// (0x00028b32) main_mp3_pane_t2

0x6ec7,	// (0x00028b40) main_mp3_pane_t3

0xd0ce,	// (0x0002ed47) main_mp3_pane_t4

0xd0dc,	// (0x0002ed55) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x00031403) main_mp3_pane_t

0xd0ea,	// (0x0002ed63) mup_progress_pane_cp01

0x33ac,	// (0x00025025) aid_zoom_text_secondary2

0xcee1,	// (0x0002eb5a) list_cale_ev2_pane

0xcee9,	// (0x0002eb62) scroll_pane_cp023_ParamLimits

0x09e5,	// (0x0002265e) field_cale_ev2_pane_ParamLimits

0x09e5,	// (0x0002265e) field_cale_ev2_pane

0xd0f2,	// (0x0002ed6b) field_cale_ev2_pane_g1_ParamLimits

0xd0f2,	// (0x0002ed6b) field_cale_ev2_pane_g1

0xd0fe,	// (0x0002ed77) field_cale_ev2_pane_g2_ParamLimits

0xd0fe,	// (0x0002ed77) field_cale_ev2_pane_g2

0xd116,	// (0x0002ed8f) field_cale_ev2_pane_g3_ParamLimits

0xd116,	// (0x0002ed8f) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x00031424) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x00031424) field_cale_ev2_pane_g

0xd13a,	// (0x0002edb3) field_cale_ev2_pane_t1_ParamLimits

0xd13a,	// (0x0002edb3) field_cale_ev2_pane_t1

0xd151,	// (0x0002edca) field_cale_ev2_pane_t2_ParamLimits

0xd151,	// (0x0002edca) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x0003142d) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x0003142d) field_cale_ev2_pane_t

0x5ef0,	// (0x00027b69) main_postcard_pane_g5_ParamLimits

0x5ef0,	// (0x00027b69) main_postcard_pane_g5

0x5f04,	// (0x00027b7d) main_postcard_pane_g6_ParamLimits

0x5f04,	// (0x00027b7d) main_postcard_pane_g6

0x4585,	// (0x000261fe) camera2_autofocus_pane_cp_ParamLimits

0x4585,	// (0x000261fe) camera2_autofocus_pane_cp

0x3597,	// (0x00025210) main_mup3_pane

0x7001,	// (0x00028c7a) main_mup3_pane_g1_ParamLimits

0x7001,	// (0x00028c7a) main_mup3_pane_g1

0x7023,	// (0x00028c9c) main_mup3_pane_g2_ParamLimits

0x7023,	// (0x00028c9c) main_mup3_pane_g2

0x708b,	// (0x00028d04) main_mup3_pane_g3_ParamLimits

0x708b,	// (0x00028d04) main_mup3_pane_g3

0x70c9,	// (0x00028d42) main_mup3_pane_g4_ParamLimits

0x70c9,	// (0x00028d42) main_mup3_pane_g4

0x7107,	// (0x00028d80) main_mup3_pane_g5_ParamLimits

0x7107,	// (0x00028d80) main_mup3_pane_g5

0x7145,	// (0x00028dbe) main_mup3_pane_g6_ParamLimits

0x7145,	// (0x00028dbe) main_mup3_pane_g6

0xd166,	// (0x0002eddf) main_mup3_pane_g7_ParamLimits

0xd166,	// (0x0002eddf) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x0003143d) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x0003143d) main_mup3_pane_g

0x71bb,	// (0x00028e34) main_mup3_pane_t1_ParamLimits

0x71bb,	// (0x00028e34) main_mup3_pane_t1

0x7223,	// (0x00028e9c) main_mup3_pane_t2_ParamLimits

0x7223,	// (0x00028e9c) main_mup3_pane_t2

0x72eb,	// (0x00028f64) main_mup3_pane_t4_ParamLimits

0x72eb,	// (0x00028f64) main_mup3_pane_t4

0x7339,	// (0x00028fb2) main_mup3_pane_t5_ParamLimits

0x7339,	// (0x00028fb2) main_mup3_pane_t5

0x73e7,	// (0x00029060) main_mup3_pane_t6_ParamLimits

0x73e7,	// (0x00029060) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x0003144e) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x0003144e) main_mup3_pane_t

0x749b,	// (0x00029114) mup3_progress_pane_ParamLimits

0x749b,	// (0x00029114) mup3_progress_pane

0x74f7,	// (0x00029170) popup_mup3_control_window_ParamLimits

0x74f7,	// (0x00029170) popup_mup3_control_window

0xd174,	// (0x0002eded) popup_mup3_text_window

0x7525,	// (0x0002919e) mup3_progress_pane_t1

0x753b,	// (0x000291b4) mup3_progress_pane_t2

0xd17c,	// (0x0002edf5) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x0003145b) mup3_progress_pane_t

0xd193,	// (0x0002ee0c) mup_progress_pane_cp03

0x336d,	// (0x00024fe6) bg_tb_trans_pane_cp04

0x7551,	// (0x000291ca) mup3_volume_pane

0x7559,	// (0x000291d2) popup_mup3_control_window_g1

0x7562,	// (0x000291db) mup3_volume_pane_g1

0x756b,	// (0x000291e4) mup3_volume_pane_g2

0x7574,	// (0x000291ed) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x00031462) mup3_volume_pane_g

0x336d,	// (0x00024fe6) bg_tb_trans_pane_cp03

0xd1a3,	// (0x0002ee1c) popup_mup3_text_window_g1

0xd1ab,	// (0x0002ee24) popup_mup3_text_window_t1

0x4007,	// (0x00025c80) list_calc_item_pane_g1_ParamLimits

0xcb75,	// (0x0002e7ee) mup_volume_pane_cp_g1

0x6fab,	// (0x00028c24) main_touch_calib_pane_t3

0x6fbd,	// (0x00028c36) main_touch_calib_pane_t4

0x6fcf,	// (0x00028c48) main_touch_calib_pane_t5

0x3377,	// (0x00024ff0) aid_cell_size_toolbar2

0x337f,	// (0x00024ff8) aid_popup3_width_pane

0x33ac,	// (0x00025025) aid_zoom_text_msg_primary

0xaabd,	// (0x0002c736) vorec_t7

0x3f7b,	// (0x00025bf4) bg_calc_paper_pane_g1_ParamLimits

0x3f87,	// (0x00025c00) bg_calc_paper_pane_g2_ParamLimits

0x3f93,	// (0x00025c0c) bg_calc_paper_pane_g3_ParamLimits

0x3f9f,	// (0x00025c18) bg_calc_paper_pane_g4_ParamLimits

0x3fab,	// (0x00025c24) bg_calc_paper_pane_g5_ParamLimits

0x3fb7,	// (0x00025c30) bg_calc_paper_pane_g6_ParamLimits

0x3fc6,	// (0x00025c3f) bg_calc_paper_pane_g7_ParamLimits

0x3fd5,	// (0x00025c4e) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00030e02) bg_calc_paper_pane_g_ParamLimits

0x3fe4,	// (0x00025c5d) calc_bg_paper_pane_g9_ParamLimits

0x46c5,	// (0x0002633e) image_qvga_pane_ParamLimits

0x46c5,	// (0x0002633e) image_qvga_pane

0x3cb9,	// (0x00025932) bg_popup_sub_pane_cp04_ParamLimits

0xb73d,	// (0x0002d3b6) popup_mup_playback_window_g1_ParamLimits

0xb749,	// (0x0002d3c2) popup_mup_playback_window_t1_ParamLimits

0xb75e,	// (0x0002d3d7) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0003118e) popup_mup_playback_window_t_ParamLimits

0x6b1e,	// (0x00028797) main_mup2_pane_g3_ParamLimits

0x6b1e,	// (0x00028797) main_mup2_pane_g3

0x4ac9,	// (0x00026742) popup_toolbar_window_cp04

0xbb3f,	// (0x0002d7b8) popup_call2_audio_second_window_g3_ParamLimits

0xbb3f,	// (0x0002d7b8) popup_call2_audio_second_window_g3

0xbf49,	// (0x0002dbc2) popup_call2_audio_first_window_g4_ParamLimits

0xbf49,	// (0x0002dbc2) popup_call2_audio_first_window_g4

0xc5c8,	// (0x0002e241) popup_call2_audio_in_window_g4_ParamLimits

0xc5c8,	// (0x0002e241) popup_call2_audio_in_window_g4

0x6017,	// (0x00027c90) aid_area_sk_bg_cut_ParamLimits

0x6017,	// (0x00027c90) aid_area_sk_bg_cut

0xb773,	// (0x0002d3ec) aid_area_sk_bg_cut_2_ParamLimits

0xb773,	// (0x0002d3ec) aid_area_sk_bg_cut_2

0x6df3,	// (0x00028a6c) aid_placing_details_win

0x6dfb,	// (0x00028a74) aid_placing_details_win_2

0xcf9f,	// (0x0002ec18) camera2_autofocus_pane_g1_ParamLimits

0x353e,	// (0x000251b7) popup_fixed_preview_cale_window_ParamLimits

0x353e,	// (0x000251b7) popup_fixed_preview_cale_window

0xb48d,	// (0x0002d106) navi_slider_pane_g3

0xb496,	// (0x0002d10f) navi_slider_pane_g4

0xb49f,	// (0x0002d118) navi_slider_pane_g5

0xb48d,	// (0x0002d106) navi_slider_pane_g6

0xb4a8,	// (0x0002d121) navi_slider_pane_g7

0xb5c9,	// (0x0002d242) mup_scale_pane_g3

0xb5d2,	// (0x0002d24b) mup_scale_pane_g4

0xb5db,	// (0x0002d254) mup_scale_pane_g5

0x5daf,	// (0x00027a28) mup_scale_pane_g6

0x5db8,	// (0x00027a31) mup_scale_pane_g7

0xb48d,	// (0x0002d106) cams2_slider_pane_g3

0xcc2a,	// (0x0002e8a3) cams2_slider_pane_g4

0xcc32,	// (0x0002e8ab) cams2_slider_pane_g5

0xb48d,	// (0x0002d106) cams2_slider_pane_g6

0xcc3a,	// (0x0002e8b3) cams2_slider_pane_g7

0xce5e,	// (0x0002ead7) camera2_autofocus_pane_cp_g1

0xd1b9,	// (0x0002ee32) bg_popup_preview_window_pane_cp02_ParamLimits

0xd1b9,	// (0x0002ee32) bg_popup_preview_window_pane_cp02

0x757d,	// (0x000291f6) list_fp_cale_pane_ParamLimits

0x757d,	// (0x000291f6) list_fp_cale_pane

0xd1c5,	// (0x0002ee3e) popup_fixed_preview_cale_window_t1_ParamLimits

0xd1c5,	// (0x0002ee3e) popup_fixed_preview_cale_window_t1

0x7589,	// (0x00029202) popup_fixed_preview_cale_window_t2_ParamLimits

0x7589,	// (0x00029202) popup_fixed_preview_cale_window_t2

0x759e,	// (0x00029217) popup_fixed_preview_cale_window_t3_ParamLimits

0x759e,	// (0x00029217) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x00031469) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x00031469) popup_fixed_preview_cale_window_t

0x75b3,	// (0x0002922c) list_single_fp_cale_pane_ParamLimits

0x75b3,	// (0x0002922c) list_single_fp_cale_pane

0x75c7,	// (0x00029240) list_single_fp_cale_pane_g1_ParamLimits

0x75c7,	// (0x00029240) list_single_fp_cale_pane_g1

0xd1e3,	// (0x0002ee5c) list_single_fp_cale_pane_g2_ParamLimits

0xd1e3,	// (0x0002ee5c) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x00031470) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x00031470) list_single_fp_cale_pane_g

0x75d3,	// (0x0002924c) list_single_fp_cale_pane_t1_ParamLimits

0x75d3,	// (0x0002924c) list_single_fp_cale_pane_t1

0x75e5,	// (0x0002925e) list_single_fp_cale_pane_t2_ParamLimits

0x75e5,	// (0x0002925e) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x00031477) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x00031477) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x336d,	// (0x00024fe6) main_dialer_pane

0x7618,	// (0x00029291) aid_cell_size_keypad

0x7622,	// (0x0002929b) dialer_ne_pane

0x762a,	// (0x000292a3) grid_dialer_command_1_pane

0x7632,	// (0x000292ab) grid_dialer_command_2_pane

0x763a,	// (0x000292b3) grid_dialer_keypad_pane

0x764a,	// (0x000292c3) bg_popup_call_pane_cp06_ParamLimits

0x764a,	// (0x000292c3) bg_popup_call_pane_cp06

0x7656,	// (0x000292cf) dialer_ne_clear_pane_ParamLimits

0x7656,	// (0x000292cf) dialer_ne_clear_pane

0xd1fc,	// (0x0002ee75) dialer_ne_pane_g1

0xd204,	// (0x0002ee7d) dialer_ne_pane_t1_ParamLimits

0xd204,	// (0x0002ee7d) dialer_ne_pane_t1

0x7662,	// (0x000292db) dialer_ne_pane_t2_ParamLimits

0x7662,	// (0x000292db) dialer_ne_pane_t2

0x768c,	// (0x00029305) dialer_ne_pane_t3_ParamLimits

0x768c,	// (0x00029305) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x0003147c) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x0003147c) dialer_ne_pane_t

0x76bc,	// (0x00029335) dialer_ne_pane_t3_copy1_ParamLimits

0x76bc,	// (0x00029335) dialer_ne_pane_t3_copy1

0x76eb,	// (0x00029364) cell_dialer_keypad_pane_ParamLimits

0x76eb,	// (0x00029364) cell_dialer_keypad_pane

0x7700,	// (0x00029379) cell_dialer_command_1_pane_ParamLimits

0x7700,	// (0x00029379) cell_dialer_command_1_pane

0x7716,	// (0x0002938f) cell_dialer_command_2_pane_ParamLimits

0x7716,	// (0x0002938f) cell_dialer_command_2_pane

0xd216,	// (0x0002ee8f) bg_button_pane_cp02_ParamLimits

0xd216,	// (0x0002ee8f) bg_button_pane_cp02

0x7725,	// (0x0002939e) cell_dialer_keypad_pane_g1_ParamLimits

0x7725,	// (0x0002939e) cell_dialer_keypad_pane_g1

0xd216,	// (0x0002ee8f) bg_button_pane_cp03_ParamLimits

0xd216,	// (0x0002ee8f) bg_button_pane_cp03

0x773a,	// (0x000293b3) cell_dialer_command_1_pane_g1_ParamLimits

0x773a,	// (0x000293b3) cell_dialer_command_1_pane_g1

0xd222,	// (0x0002ee9b) bg_button_pane_cp04

0x774e,	// (0x000293c7) cell_dialer_command_2_pane_g1

0xb473,	// (0x0002d0ec) bg_button_pane_cp06

0xd22a,	// (0x0002eea3) dialer_ne_clear_pane_g1

0xb390,	// (0x0002d009) navi_pane_g2

0x59b4,	// (0x0002762d) navi_pane_g3

0x0002,

0xf418,	// (0x00031091) navi_pane_g

0xb412,	// (0x0002d08b) navi_pane_mv_g2

0xb43a,	// (0x0002d0b3) navi_pane_mv_g5

0x59d9,	// (0x00027652) navi_pane_mv_t1

0x3f6f,	// (0x00025be8) main_clock2_pane

0x7782,	// (0x000293fb) main_clock2_list_pane_ParamLimits

0x7782,	// (0x000293fb) main_clock2_list_pane

0x77b4,	// (0x0002942d) main_clock2_pane_t1_ParamLimits

0x77b4,	// (0x0002942d) main_clock2_pane_t1

0x77eb,	// (0x00029464) main_clock2_pane_t2_ParamLimits

0x77eb,	// (0x00029464) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x00031483) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x00031483) main_clock2_pane_t

0x786d,	// (0x000294e6) popup_clock_analogue_window_cp03_ParamLimits

0x786d,	// (0x000294e6) popup_clock_analogue_window_cp03

0x7890,	// (0x00029509) popup_clock_digital_window_cp02_ParamLimits

0x7890,	// (0x00029509) popup_clock_digital_window_cp02

0x7901,	// (0x0002957a) main_clock2_list_single_pane_ParamLimits

0x7901,	// (0x0002957a) main_clock2_list_single_pane

0xb473,	// (0x0002d0ec) list_highlight_pane_cp05

0xd232,	// (0x0002eeab) main_clock2_list_single_pane_t1

0x4ac9,	// (0x00026742) popup_toolbar_window_cp04_ParamLimits

0x6e54,	// (0x00028acd) camera2_autofocus_pane_g2_ParamLimits

0x6e54,	// (0x00028acd) camera2_autofocus_pane_g2

0x6e60,	// (0x00028ad9) camera2_autofocus_pane_g3_ParamLimits

0x6e60,	// (0x00028ad9) camera2_autofocus_pane_g3

0x6e6c,	// (0x00028ae5) camera2_autofocus_pane_g4_ParamLimits

0x6e6c,	// (0x00028ae5) camera2_autofocus_pane_g4

0x6e78,	// (0x00028af1) camera2_autofocus_pane_g5_ParamLimits

0x6e78,	// (0x00028af1) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x000313cc) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x000313cc) camera2_autofocus_pane_g

0x6fe1,	// (0x00028c5a) camera2_autofocus_pane_cp_g2

0x6fe9,	// (0x00028c62) camera2_autofocus_pane_cp_g3

0x6ff1,	// (0x00028c6a) camera2_autofocus_pane_cp_g4

0x6ff9,	// (0x00028c72) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x00031432) camera2_autofocus_pane_cp_g

0x7642,	// (0x000292bb) popup_dialer_spcha_window

0x336d,	// (0x00024fe6) bg_popup_sub_pane_cp07

0xd240,	// (0x0002eeb9) list_spcha_pane

0xd248,	// (0x0002eec1) list_single_spcha_pane_ParamLimits

0xd248,	// (0x0002eec1) list_single_spcha_pane

0x336d,	// (0x00024fe6) list_highlight_pane_cp06

0xd259,	// (0x0002eed2) list_single_spcha_pane_t1

0xc372,	// (0x0002dfeb) popup_call2_audio_out_window_g4_ParamLimits

0xc372,	// (0x0002dfeb) popup_call2_audio_out_window_g4

0x336d,	// (0x00024fe6) main_imed2_pane

0xc98f,	// (0x0002e608) popup_imed_adjust2_window

0x6733,	// (0x000283ac) popup_imed_trans_window_ParamLimits

0x6733,	// (0x000283ac) popup_imed_trans_window

0xcca2,	// (0x0002e91b) popup_blid_sat_info2_window_t1

0xccb0,	// (0x0002e929) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x00031361) popup_blid_sat_info2_window_t

0x7933,	// (0x000295ac) aid_size_cell_colour_35

0x7953,	// (0x000295cc) aid_size_cell_colour_112

0x7973,	// (0x000295ec) aid_size_cell_effect

0xc969,	// (0x0002e5e2) bg_tb_trans_pane_cp02

0xae4d,	// (0x0002cac6) heading_imed_pane

0x7993,	// (0x0002960c) listscroll_imed_pane

0xd267,	// (0x0002eee0) heading_imed_pane_g1

0xd26f,	// (0x0002eee8) heading_imed_pane_t1

0xd27d,	// (0x0002eef6) grid_imed_colour_35_pane_ParamLimits

0xd27d,	// (0x0002eef6) grid_imed_colour_35_pane

0x799f,	// (0x00029618) grid_imed_effect_pane

0xd290,	// (0x0002ef09) list_imed_aspect_pane

0x79b2,	// (0x0002962b) scroll_pane_cp027_ParamLimits

0x79b2,	// (0x0002962b) scroll_pane_cp027

0x79be,	// (0x00029637) cell_imed_effect_pane_ParamLimits

0x79be,	// (0x00029637) cell_imed_effect_pane

0xd298,	// (0x0002ef11) cell_imed_colour_pane_ParamLimits

0xd298,	// (0x0002ef11) cell_imed_colour_pane

0xd2d2,	// (0x0002ef4b) cell_imed_colour_pane_g1_ParamLimits

0xd2d2,	// (0x0002ef4b) cell_imed_colour_pane_g1

0xd2e3,	// (0x0002ef5c) hgihlgiht_grid_pane_cp016_ParamLimits

0xd2e3,	// (0x0002ef5c) hgihlgiht_grid_pane_cp016

0x79e3,	// (0x0002965c) cell_imed_effect_pane_g1

0x79eb,	// (0x00029664) grid_highlight_pane_cp017

0xd2f4,	// (0x0002ef6d) list_imed_single_pane_ParamLimits

0xd2f4,	// (0x0002ef6d) list_imed_single_pane

0x336d,	// (0x00024fe6) list_highlight_pane_cp07

0xd307,	// (0x0002ef80) list_imed_aspect_pane_comp1_t1

0xc969,	// (0x0002e5e2) bg_tb_trans_pane_cp05

0xd327,	// (0x0002efa0) popup_imed_adjust2_window_g1

0xd34e,	// (0x0002efc7) popup_imed_adjust2_window_t1

0xd366,	// (0x0002efdf) slider_imed_adjust_pane

0xd37a,	// (0x0002eff3) slider_imed_adjust_pane_g1

0xd38a,	// (0x0002f003) slider_imed_adjust_pane_g2

0xd39a,	// (0x0002f013) slider_imed_adjust_pane_g3

0xd3ab,	// (0x0002f024) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x000314a0) slider_imed_adjust_pane_g

0x79f4,	// (0x0002966d) aid_size_cell_clipart2

0x7a00,	// (0x00029679) grid_imed_clipart_pane

0xd3bc,	// (0x0002f035) scroll_pane_cp031

0x7a0a,	// (0x00029683) cell_imed_clipart_pane_ParamLimits

0x7a0a,	// (0x00029683) cell_imed_clipart_pane

0x7a22,	// (0x0002969b) cell_imed_clipart_pane_g1

0x336d,	// (0x00024fe6) grid_highlight_pane_cp014

0x7795,	// (0x0002940e) main_clock2_pane_g1_ParamLimits

0x7795,	// (0x0002940e) main_clock2_pane_g1

0x78ac,	// (0x00029525) aid_call2_pane_cp10

0x78be,	// (0x00029537) aid_call_pane_cp10

0xb340,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g1

0xb340,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g2

0x78d0,	// (0x00029549) popup_clock_analogue_window_cp10_g3

0x78d0,	// (0x00029549) popup_clock_analogue_window_cp10_g4

0xb340,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x0003148e) popup_clock_analogue_window_cp10_g

0x78e2,	// (0x0002955b) popup_clock_analogue_window_cp10_t1

0x2952,	// (0x000245cb) clock_digital_number_pane_cp10_ParamLimits

0x2952,	// (0x000245cb) clock_digital_number_pane_cp10

0x296a,	// (0x000245e3) clock_digital_number_pane_cp11_ParamLimits

0x296a,	// (0x000245e3) clock_digital_number_pane_cp11

0x2982,	// (0x000245fb) clock_digital_number_pane_cp12_ParamLimits

0x2982,	// (0x000245fb) clock_digital_number_pane_cp12

0x299a,	// (0x00024613) clock_digital_number_pane_cp13_ParamLimits

0x299a,	// (0x00024613) clock_digital_number_pane_cp13

0x29b2,	// (0x0002462b) clock_digital_separator_pane_cp10_ParamLimits

0x29b2,	// (0x0002462b) clock_digital_separator_pane_cp10

0x7913,	// (0x0002958c) popup_clock_digital_window_cp02_t1_ParamLimits

0x7913,	// (0x0002958c) popup_clock_digital_window_cp02_t1

0x3cb1,	// (0x0002592a) clock_digital_number_pane_cp10_g1

0x3cb1,	// (0x0002592a) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x000314a9) clock_digital_number_pane_cp10_g

0x3cb1,	// (0x0002592a) clock_digital_separator_pane_cp10_g1

0x3cb1,	// (0x0002592a) clock_digital_separator_pane_g2_cp10

0xb443,	// (0x0002d0bc) navi_pane_vded_g4

0xb44c,	// (0x0002d0c5) navi_pane_vded_g5

0xb455,	// (0x0002d0ce) navi_pane_vded_t1

0x336d,	// (0x00024fe6) main_vded_pane

0x7a2b,	// (0x000296a4) main_vded_pane_g1

0x7a35,	// (0x000296ae) main_vded_pane_g2

0x7a3d,	// (0x000296b6) main_vded_pane_g3

0x0002,

0xf835,	// (0x000314ae) main_vded_pane_g

0x7a45,	// (0x000296be) main_vded_pane_t1

0x7a53,	// (0x000296cc) main_vded_pane_t2

0x0001,

0xf83c,	// (0x000314b5) main_vded_pane_t

0x7a61,	// (0x000296da) vded_slider_pane

0x7a69,	// (0x000296e2) vded_video_pane

0xd3c4,	// (0x0002f03d) vded_video_pane_g1

0x7a71,	// (0x000296ea) vded_video_pane_g2

0xce5e,	// (0x0002ead7) vded_video_pane_g3

0x0002,

0xf841,	// (0x000314ba) vded_video_pane_g

0xd3ce,	// (0x0002f047) vded_slider_pane_g1

0xcb75,	// (0x0002e7ee) vded_slider_pane_g2

0xd3d7,	// (0x0002f050) vded_slider_pane_g3

0xd3e0,	// (0x0002f059) vded_slider_pane_g4

0xd3e9,	// (0x0002f062) vded_slider_pane_g5

0x0004,

0xf848,	// (0x000314c1) vded_slider_pane_g

0x74e1,	// (0x0002915a) mup3_rocker_pane_ParamLimits

0x74e1,	// (0x0002915a) mup3_rocker_pane

0x7a7a,	// (0x000296f3) mup3_control_keys_pane_g1

0x7a82,	// (0x000296fb) mup3_control_keys_pane_g2

0x7a8a,	// (0x00029703) mup3_control_keys_pane_g3

0x7a92,	// (0x0002970b) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x000314cc) mup3_control_keys_pane_g

0x3579,	// (0x000251f2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3579,	// (0x000251f2) popup_toolbar2_fixed_window_cp01

0x750f,	// (0x00029188) popup_toolbar2_fixed_window_cp02_ParamLimits

0x750f,	// (0x00029188) popup_toolbar2_fixed_window_cp02

0xbcb1,	// (0x0002d92a) popup_call2_audio_second_window_t4_ParamLimits

0xbcb1,	// (0x0002d92a) popup_call2_audio_second_window_t4

0xc1df,	// (0x0002de58) popup_call2_audio_first_window_t6_ParamLimits

0xc1df,	// (0x0002de58) popup_call2_audio_first_window_t6

0xc475,	// (0x0002e0ee) popup_call2_audio_out_window_t6_ParamLimits

0xc475,	// (0x0002e0ee) popup_call2_audio_out_window_t6

0x336d,	// (0x00024fe6) main_vitu_pane

0x7aa2,	// (0x0002971b) aid_size_cell_itu_ParamLimits

0x7aa2,	// (0x0002971b) aid_size_cell_itu

0x3597,	// (0x00025210) bg_popup_window_pane_cp08_ParamLimits

0x3597,	// (0x00025210) bg_popup_window_pane_cp08

0x7ab8,	// (0x00029731) field_vitu_entry_pane_ParamLimits

0x7ab8,	// (0x00029731) field_vitu_entry_pane

0x7acb,	// (0x00029744) grid_vitu_function_pane_ParamLimits

0x7acb,	// (0x00029744) grid_vitu_function_pane

0x7ae0,	// (0x00029759) grid_vitu_itu_pane_ParamLimits

0x7ae0,	// (0x00029759) grid_vitu_itu_pane

0x7af6,	// (0x0002976f) cell_vitu_itu_pane_ParamLimits

0x7af6,	// (0x0002976f) cell_vitu_itu_pane

0x7b18,	// (0x00029791) cell_vitu_function_pane_ParamLimits

0x7b18,	// (0x00029791) cell_vitu_function_pane

0x3597,	// (0x00025210) bg_popup_sub_pane_cp08_ParamLimits

0x3597,	// (0x00025210) bg_popup_sub_pane_cp08

0x7b31,	// (0x000297aa) field_vitu_entry_pane_t1_ParamLimits

0x7b31,	// (0x000297aa) field_vitu_entry_pane_t1

0xd40a,	// (0x0002f083) field_vitu_entry_pane_t2_ParamLimits

0xd40a,	// (0x0002f083) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x000314da) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x000314da) field_vitu_entry_pane_t

0xd427,	// (0x0002f0a0) bg_button_pane_cp05_ParamLimits

0xd427,	// (0x0002f0a0) bg_button_pane_cp05

0x7b4d,	// (0x000297c6) cell_vitu_itu_pane_g1

0x7b65,	// (0x000297de) cell_vitu_itu_pane_t1_ParamLimits

0x7b65,	// (0x000297de) cell_vitu_itu_pane_t1

0x7b77,	// (0x000297f0) cell_vitu_itu_pane_t2_ParamLimits

0x7b77,	// (0x000297f0) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x000314df) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x000314df) cell_vitu_itu_pane_t

0xd435,	// (0x0002f0ae) bg_button_pane_cp07

0x7bac,	// (0x00029825) cell_vitu_function_pane_g1

0xa989,	// (0x0002c602) main_calc_pane_g1

0x33a4,	// (0x0002501d) aid_visual_content_pane

0x336d,	// (0x00024fe6) main_vradio_pane

0x7bb5,	// (0x0002982e) main_vradio_pane_g1_ParamLimits

0x7bb5,	// (0x0002982e) main_vradio_pane_g1

0xd43f,	// (0x0002f0b8) main_vradio_pane_g2_ParamLimits

0xd43f,	// (0x0002f0b8) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x000314e6) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x000314e6) main_vradio_pane_g

0x7bcb,	// (0x00029844) main_vradio_pane_t1_ParamLimits

0x7bcb,	// (0x00029844) main_vradio_pane_t1

0x7be0,	// (0x00029859) main_vradio_pane_t2_ParamLimits

0x7be0,	// (0x00029859) main_vradio_pane_t2

0xd44c,	// (0x0002f0c5) main_vradio_pane_t3_ParamLimits

0xd44c,	// (0x0002f0c5) main_vradio_pane_t3

0x0002,

0xf872,	// (0x000314eb) main_vradio_pane_t_ParamLimits

0xf872,	// (0x000314eb) main_vradio_pane_t

0x7bf5,	// (0x0002986e) vradio_rocker_control_pane_ParamLimits

0x7bf5,	// (0x0002986e) vradio_rocker_control_pane

0x7c07,	// (0x00029880) vradio_station_info_pane_ParamLimits

0x7c07,	// (0x00029880) vradio_station_info_pane

0xd45e,	// (0x0002f0d7) vradio_frequency_info_pane_ParamLimits

0xd45e,	// (0x0002f0d7) vradio_frequency_info_pane

0xce5e,	// (0x0002ead7) vradio_station_info_pane_g1

0xd46d,	// (0x0002f0e6) vradio_station_info_pane_t1_ParamLimits

0xd46d,	// (0x0002f0e6) vradio_station_info_pane_t1

0xd48f,	// (0x0002f108) vradio_station_info_pane_t2_ParamLimits

0xd48f,	// (0x0002f108) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x000314f2) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x000314f2) vradio_station_info_pane_t

0xd4a1,	// (0x0002f11a) vradio_tuning_pane

0xd4a9,	// (0x0002f122) vradio_rocker_control_pane_g1

0xd4b1,	// (0x0002f12a) vradio_rocker_control_pane_g2

0xd4b9,	// (0x0002f132) vradio_rocker_control_pane_g3

0xd4c1,	// (0x0002f13a) vradio_rocker_control_pane_g4

0xd4c9,	// (0x0002f142) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x000314f7) vradio_rocker_control_pane_g

0x7c17,	// (0x00029890) vradio_frequency_info_pane_g1

0xd4d1,	// (0x0002f14a) vradio_frequency_info_pane_t1_ParamLimits

0xd4d1,	// (0x0002f14a) vradio_frequency_info_pane_t1

0x7c21,	// (0x0002989a) vradio_tuning_pane_g1

0x7c2a,	// (0x000298a3) vradio_tuning_pane_t1

0x33ef,	// (0x00025068) area_side_right_pane_ParamLimits

0x33ef,	// (0x00025068) area_side_right_pane

0xc930,	// (0x0002e5a9) status_small_pane_g1

0xc938,	// (0x0002e5b1) status_small_pane_g2

0xc941,	// (0x0002e5ba) status_small_pane_g3

0xc94a,	// (0x0002e5c3) status_small_pane_g4

0x0003,

0xf63e,	// (0x000312b7) status_small_pane_g

0xc953,	// (0x0002e5cc) status_small_pane_t1

0x336d,	// (0x00024fe6) main_video3_pane

0xd4e5,	// (0x0002f15e) cams_zoom_vslider_pane

0xd4ed,	// (0x0002f166) image3_wide_pane_ParamLimits

0xd4ed,	// (0x0002f166) image3_wide_pane

0xd507,	// (0x0002f180) image3_wide_small_pane

0xd511,	// (0x0002f18a) main_video3_pane_g1_ParamLimits

0xd511,	// (0x0002f18a) main_video3_pane_g1

0xd52d,	// (0x0002f1a6) main_video3_pane_g2_ParamLimits

0xd52d,	// (0x0002f1a6) main_video3_pane_g2

0x0001,

0xf889,	// (0x00031502) main_video3_pane_g_ParamLimits

0xf889,	// (0x00031502) main_video3_pane_g

0xd549,	// (0x0002f1c2) main_video3_pane_t1_ParamLimits

0xd549,	// (0x0002f1c2) main_video3_pane_t1

0xd574,	// (0x0002f1ed) main_video3_pane_t2_ParamLimits

0xd574,	// (0x0002f1ed) main_video3_pane_t2

0xd59f,	// (0x0002f218) main_video3_pane_t3_ParamLimits

0xd59f,	// (0x0002f218) main_video3_pane_t3

0x0002,

0xf88e,	// (0x00031507) main_video3_pane_t_ParamLimits

0xf88e,	// (0x00031507) main_video3_pane_t

0xd5ca,	// (0x0002f243) cams_zoom_vslider_pane_g1

0xd5d3,	// (0x0002f24c) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x0003150e) cams_zoom_vslider_pane_g

0xd5db,	// (0x0002f254) small_slider_vertical_pane

0xce5e,	// (0x0002ead7) small_slider_vertical_pane_g1

0xce5e,	// (0x0002ead7) small_slider_vertical_pane_g2

0xd5e3,	// (0x0002f25c) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x00031513) small_slider_vertical_pane_g

0x336d,	// (0x00024fe6) main_hwr_training_pane

0xd5ec,	// (0x0002f265) hwr_training_instruct_pane_ParamLimits

0xd5ec,	// (0x0002f265) hwr_training_instruct_pane

0x7c39,	// (0x000298b2) hwr_training_navi_pane_ParamLimits

0x7c39,	// (0x000298b2) hwr_training_navi_pane

0x7c50,	// (0x000298c9) hwr_training_write_pane_ParamLimits

0x7c50,	// (0x000298c9) hwr_training_write_pane

0x336d,	// (0x00024fe6) bg_frame_shadow_pane

0xd61b,	// (0x0002f294) hwr_training_write_pane_g1

0xd623,	// (0x0002f29c) hwr_training_write_pane_g2

0xd62b,	// (0x0002f2a4) hwr_training_write_pane_g3

0xd633,	// (0x0002f2ac) hwr_training_write_pane_g4

0xd63b,	// (0x0002f2b4) hwr_training_write_pane_g5

0xd643,	// (0x0002f2bc) hwr_training_write_pane_g6

0xd64b,	// (0x0002f2c4) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x0003151a) hwr_training_write_pane_g

0xd653,	// (0x0002f2cc) hwr_training_navi_pane_g1_ParamLimits

0xd653,	// (0x0002f2cc) hwr_training_navi_pane_g1

0xd665,	// (0x0002f2de) hwr_training_navi_pane_g2_ParamLimits

0xd665,	// (0x0002f2de) hwr_training_navi_pane_g2

0xd677,	// (0x0002f2f0) hwr_training_navi_pane_g3_ParamLimits

0xd677,	// (0x0002f2f0) hwr_training_navi_pane_g3

0xd687,	// (0x0002f300) hwr_training_navi_pane_g4_ParamLimits

0xd687,	// (0x0002f300) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x00031529) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x00031529) hwr_training_navi_pane_g

0xd694,	// (0x0002f30d) hwr_training_navi_pane_t1

0x7c83,	// (0x000298fc) list_single_hwr_training_instruct_pane_ParamLimits

0x7c83,	// (0x000298fc) list_single_hwr_training_instruct_pane

0xd6a2,	// (0x0002f31b) list_single_hwr_training_instruct_pane_t1

0xcd9e,	// (0x0002ea17) bg_frame_shadow_pane_g1

0xd6b1,	// (0x0002f32a) bg_frame_shadow_pane_g2

0xd6b9,	// (0x0002f332) bg_frame_shadow_pane_g3

0xd6c1,	// (0x0002f33a) bg_frame_shadow_pane_g4

0xd6c9,	// (0x0002f342) bg_frame_shadow_pane_g5

0xd6d1,	// (0x0002f34a) bg_frame_shadow_pane_g6

0xd6d9,	// (0x0002f352) bg_frame_shadow_pane_g7

0x4105,	// (0x00025d7e) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x00031534) bg_frame_shadow_pane_g

0x336d,	// (0x00024fe6) main_video_tele_dialer_pane

0x29d7,	// (0x00024650) aid_size_cell_video_keypad_ParamLimits

0x29d7,	// (0x00024650) aid_size_cell_video_keypad

0x29f1,	// (0x0002466a) grid_video_dialer_keypad_pane_ParamLimits

0x29f1,	// (0x0002466a) grid_video_dialer_keypad_pane

0x2a33,	// (0x000246ac) video_down_pane_cp_ParamLimits

0x2a33,	// (0x000246ac) video_down_pane_cp

0x2a47,	// (0x000246c0) cell_video_dialer_keypad_pane_ParamLimits

0x2a47,	// (0x000246c0) cell_video_dialer_keypad_pane

0xd6e1,	// (0x0002f35a) bg_button_pane_cp08_ParamLimits

0xd6e1,	// (0x0002f35a) bg_button_pane_cp08

0x7cb7,	// (0x00029930) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7cb7,	// (0x00029930) cell_video_dialer_keypad_pane_g1

0x74cb,	// (0x00029144) mup3_rocker2_pane_ParamLimits

0x74cb,	// (0x00029144) mup3_rocker2_pane

0xce5e,	// (0x0002ead7) mup3_rocker2_pane_g1

0x662c,	// (0x000282a5) main_dialer2_pane

0x336d,	// (0x00024fe6) main_mp4_pane

0xd6f5,	// (0x0002f36e) main_mp4_pane_g1_ParamLimits

0xd6f5,	// (0x0002f36e) main_mp4_pane_g1

0xd6f5,	// (0x0002f36e) main_mp4_pane_g2_ParamLimits

0xd6f5,	// (0x0002f36e) main_mp4_pane_g2

0x2a69,	// (0x000246e2) main_mp4_pane_g3_ParamLimits

0x2a69,	// (0x000246e2) main_mp4_pane_g3

0xd703,	// (0x0002f37c) main_mp4_pane_g4_ParamLimits

0xd703,	// (0x0002f37c) main_mp4_pane_g4

0xd731,	// (0x0002f3aa) main_mp4_pane_g5_ParamLimits

0xd731,	// (0x0002f3aa) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x00031554) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x00031554) main_mp4_pane_g

0xd78d,	// (0x0002f406) main_mp4_pane_t1_ParamLimits

0xd78d,	// (0x0002f406) main_mp4_pane_t1

0xd7e5,	// (0x0002f45e) main_mp4_pane_t2_ParamLimits

0xd7e5,	// (0x0002f45e) main_mp4_pane_t2

0xd837,	// (0x0002f4b0) main_mp4_pane_t3_ParamLimits

0xd837,	// (0x0002f4b0) main_mp4_pane_t3

0xd85d,	// (0x0002f4d6) main_mp4_pane_t4_ParamLimits

0xd85d,	// (0x0002f4d6) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x00031561) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x00031561) main_mp4_pane_t

0xd89d,	// (0x0002f516) mp4_progress_pane_ParamLimits

0xd89d,	// (0x0002f516) mp4_progress_pane

0xd8e1,	// (0x0002f55a) mp4_rocker_pane_ParamLimits

0xd8e1,	// (0x0002f55a) mp4_rocker_pane

0xd907,	// (0x0002f580) mp4_progress_pane_t1

0xd91e,	// (0x0002f597) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x0003156a) mp4_progress_pane_t

0xd935,	// (0x0002f5ae) mup_progress_pane_cp04

0xd941,	// (0x0002f5ba) mp4_rocker_pane_g1

0x2a99,	// (0x00024712) aid_cell_size_keypad2_ParamLimits

0x2a99,	// (0x00024712) aid_cell_size_keypad2

0x2ab3,	// (0x0002472c) dialer2_ne_pane_ParamLimits

0x2ab3,	// (0x0002472c) dialer2_ne_pane

0x2ac8,	// (0x00024741) grid_dialer2_keypad_pane_ParamLimits

0x2ac8,	// (0x00024741) grid_dialer2_keypad_pane

0xcc4b,	// (0x0002e8c4) bg_popup_call_pane_cp07_ParamLimits

0xcc4b,	// (0x0002e8c4) bg_popup_call_pane_cp07

0x7cf2,	// (0x0002996b) dialer2_ne_pane_t1_ParamLimits

0x7cf2,	// (0x0002996b) dialer2_ne_pane_t1

0x2ade,	// (0x00024757) cell_dialer2_keypad_pane_ParamLimits

0x2ade,	// (0x00024757) cell_dialer2_keypad_pane

0xd95d,	// (0x0002f5d6) bg_button_pane_pane_cp04_ParamLimits

0xd95d,	// (0x0002f5d6) bg_button_pane_pane_cp04

0x7d2f,	// (0x000299a8) cell_dialer2_keypad_pane_g1_ParamLimits

0x7d2f,	// (0x000299a8) cell_dialer2_keypad_pane_g1

0x49f4,	// (0x0002666d) aid_placing_vt_set_content_ParamLimits

0x49f4,	// (0x0002666d) aid_placing_vt_set_content

0x4a12,	// (0x0002668b) aid_placing_vt_set_title_ParamLimits

0x4a12,	// (0x0002668b) aid_placing_vt_set_title

0x336d,	// (0x00024fe6) main_image3_pane

0x2b44,	// (0x000247bd) area_side_right_pane_cp01_ParamLimits

0x2b44,	// (0x000247bd) area_side_right_pane_cp01

0xd6f5,	// (0x0002f36e) main_image3_pane_g1_ParamLimits

0xd6f5,	// (0x0002f36e) main_image3_pane_g1

0x2b5b,	// (0x000247d4) main_image3_pane_g2_ParamLimits

0x2b5b,	// (0x000247d4) main_image3_pane_g2

0x2b81,	// (0x000247fa) main_image3_pane_g3_ParamLimits

0x2b81,	// (0x000247fa) main_image3_pane_g3

0x2ba7,	// (0x00024820) main_image3_pane_g4_ParamLimits

0x2ba7,	// (0x00024820) main_image3_pane_g4

0x0003,

0xf900,	// (0x00031579) main_image3_pane_g_ParamLimits

0xf900,	// (0x00031579) main_image3_pane_g

0x2bcd,	// (0x00024846) main_image3_pane_t1_ParamLimits

0x2bcd,	// (0x00024846) main_image3_pane_t1

0x2c25,	// (0x0002489e) main_image3_pane_t2_ParamLimits

0x2c25,	// (0x0002489e) main_image3_pane_t2

0x2c77,	// (0x000248f0) main_image3_pane_t3_ParamLimits

0x2c77,	// (0x000248f0) main_image3_pane_t3

0x0003,

0xf909,	// (0x00031582) main_image3_pane_t_ParamLimits

0xf909,	// (0x00031582) main_image3_pane_t

0x3597,	// (0x00025210) grid_sctrl_middle_pane_cp01_ParamLimits

0x3597,	// (0x00025210) grid_sctrl_middle_pane_cp01

0x7d7a,	// (0x000299f3) cell_sctrl_middle_pane_cp01_ParamLimits

0x7d7a,	// (0x000299f3) cell_sctrl_middle_pane_cp01

0x7d97,	// (0x00029a10) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7d97,	// (0x00029a10) cell_sctrl_middle_pane_cp01_g1

0x336d,	// (0x00024fe6) main_call4_pane

0x7dad,	// (0x00029a26) aid_size_button_call4_ParamLimits

0x7dad,	// (0x00029a26) aid_size_button_call4

0x7dda,	// (0x00029a53) call4_windows_pane_ParamLimits

0x7dda,	// (0x00029a53) call4_windows_pane

0x7df0,	// (0x00029a69) grid_call4_button_pane_ParamLimits

0x7df0,	// (0x00029a69) grid_call4_button_pane

0xd9b3,	// (0x0002f62c) call4_windows_conf_pane

0x7e0f,	// (0x00029a88) popup_call4_audio_first_window_ParamLimits

0x7e0f,	// (0x00029a88) popup_call4_audio_first_window

0x7e2f,	// (0x00029aa8) popup_call4_audio_second_window_ParamLimits

0x7e2f,	// (0x00029aa8) popup_call4_audio_second_window

0xd9e6,	// (0x0002f65f) popup_call4_audio_wait_window_ParamLimits

0xd9e6,	// (0x0002f65f) popup_call4_audio_wait_window

0x7e41,	// (0x00029aba) cell_call4_button_pane_ParamLimits

0x7e41,	// (0x00029aba) cell_call4_button_pane

0x7e66,	// (0x00029adf) bg_button_pane_cp09_ParamLimits

0x7e66,	// (0x00029adf) bg_button_pane_cp09

0x7e72,	// (0x00029aeb) cell_call4_button_pane_g1_ParamLimits

0x7e72,	// (0x00029aeb) cell_call4_button_pane_g1

0x7e98,	// (0x00029b11) cell_call4_button_pane_t1_ParamLimits

0x7e98,	// (0x00029b11) cell_call4_button_pane_t1

0xda2c,	// (0x0002f6a5) popup_call4_audio_conf_window_ParamLimits

0xda2c,	// (0x0002f6a5) popup_call4_audio_conf_window

0x7525,	// (0x0002919e) mup3_progress_pane_t1_ParamLimits

0x753b,	// (0x000291b4) mup3_progress_pane_t2_ParamLimits

0xd17c,	// (0x0002edf5) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x0003145b) mup3_progress_pane_t_ParamLimits

0xd193,	// (0x0002ee0c) mup_progress_pane_cp03_ParamLimits

0x7a9a,	// (0x00029713) mup3_control_keys_pane_g4_copy1

0xd8cb,	// (0x0002f544) mp4_rocker2_pane_ParamLimits

0xd8cb,	// (0x0002f544) mp4_rocker2_pane

0xda40,	// (0x0002f6b9) mp4_rocker2_pane_g1

0xda48,	// (0x0002f6c1) mp4_rocker2_pane_g2

0xda50,	// (0x0002f6c9) mp4_rocker2_pane_g3

0xda58,	// (0x0002f6d1) mp4_rocker2_pane_g4

0xda60,	// (0x0002f6d9) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x0003158b) mp4_rocker2_pane_g

0x336d,	// (0x00024fe6) main_camera4_pane

0x336d,	// (0x00024fe6) main_video4_pane

0x2a05,	// (0x0002467e) main_video_tele_dialer_pane_t1_ParamLimits

0x2a05,	// (0x0002467e) main_video_tele_dialer_pane_t1

0x2a1c,	// (0x00024695) main_video_tele_dialer_pane_t2_ParamLimits

0x2a1c,	// (0x00024695) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x00031545) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x00031545) main_video_tele_dialer_pane_t

0x2d0b,	// (0x00024984) cam4_autofocus_pane_ParamLimits

0x2d0b,	// (0x00024984) cam4_autofocus_pane

0x2d1f,	// (0x00024998) cam4_image_uncrop_pane_ParamLimits

0x2d1f,	// (0x00024998) cam4_image_uncrop_pane

0x2d36,	// (0x000249af) cam4_indicators_pane_ParamLimits

0x2d36,	// (0x000249af) cam4_indicators_pane

0x2d5a,	// (0x000249d3) main_camera4_pane_g1_ParamLimits

0x2d5a,	// (0x000249d3) main_camera4_pane_g1

0x2d66,	// (0x000249df) main_camera4_pane_g2_ParamLimits

0x2d66,	// (0x000249df) main_camera4_pane_g2

0x2d66,	// (0x000249df) main_camera4_pane_g3_ParamLimits

0x2d66,	// (0x000249df) main_camera4_pane_g3

0x2d72,	// (0x000249eb) main_camera4_pane_g4_ParamLimits

0x2d72,	// (0x000249eb) main_camera4_pane_g4

0x2d7e,	// (0x000249f7) main_camera4_pane_g5_ParamLimits

0x2d7e,	// (0x000249f7) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x00031596) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x00031596) main_camera4_pane_g

0x2d9b,	// (0x00024a14) main_camera4_pane_t1_ParamLimits

0x2d9b,	// (0x00024a14) main_camera4_pane_t1

0xda78,	// (0x0002f6f1) bg_tb_trans_pane_cp06

0xda8e,	// (0x0002f707) cam4_indicators_pane_g1

0xda9e,	// (0x0002f717) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x000315b1) cam4_indicators_pane_g

0xdabe,	// (0x0002f737) cam4_indicators_pane_t1

0x2dde,	// (0x00024a57) main_video4_pane_g1_ParamLimits

0x2dde,	// (0x00024a57) main_video4_pane_g1

0x2df0,	// (0x00024a69) main_video4_pane_g2_ParamLimits

0x2df0,	// (0x00024a69) main_video4_pane_g2

0x2df0,	// (0x00024a69) main_video4_pane_g3_ParamLimits

0x2df0,	// (0x00024a69) main_video4_pane_g3

0x2dff,	// (0x00024a78) main_video4_pane_g4_ParamLimits

0x2dff,	// (0x00024a78) main_video4_pane_g4

0x0004,

0xf93f,	// (0x000315b8) main_video4_pane_g_ParamLimits

0xf93f,	// (0x000315b8) main_video4_pane_g

0x2e1d,	// (0x00024a96) vid4_indicators_pane_ParamLimits

0x2e1d,	// (0x00024a96) vid4_indicators_pane

0x2e45,	// (0x00024abe) video4_image_uncrop_cif_pane_ParamLimits

0x2e45,	// (0x00024abe) video4_image_uncrop_cif_pane

0x2e5d,	// (0x00024ad6) video4_image_uncrop_nhd_pane_ParamLimits

0x2e5d,	// (0x00024ad6) video4_image_uncrop_nhd_pane

0x2e71,	// (0x00024aea) video4_image_uncrop_vga_pane_ParamLimits

0x2e71,	// (0x00024aea) video4_image_uncrop_vga_pane

0xdae0,	// (0x0002f759) bg_tb_trans_pane_cp07

0x2e89,	// (0x00024b02) vid4_indicators_pane_g1

0x2e96,	// (0x00024b0f) vid4_indicators_pane_g2

0x2ea3,	// (0x00024b1c) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x000315c3) vid4_indicators_pane_g

0x2ec8,	// (0x00024b41) vid4_indicators_pane_t1

0x7ee6,	// (0x00029b5f) cam4_autofocus_pane_g1

0x7eee,	// (0x00029b67) cam4_autofocus_pane_g2

0x7ef6,	// (0x00029b6f) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x000315ce) cam4_autofocus_pane_g

0x7efe,	// (0x00029b77) cam4_autofocus_pane_g3_copy1

0x7c9b,	// (0x00029914) video_down_pane_cp_t1

0x7ca9,	// (0x00029922) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x0003154a) video_down_pane_cp_t

0x3597,	// (0x00025210) popup_vitu2_window_ParamLimits

0x3597,	// (0x00025210) popup_vitu2_window

0x2eda,	// (0x00024b53) aid_size_cell2_itu2_ParamLimits

0x2eda,	// (0x00024b53) aid_size_cell2_itu2

0x2f00,	// (0x00024b79) aid_size_cell_itu2_ParamLimits

0x2f00,	// (0x00024b79) aid_size_cell_itu2

0x2f52,	// (0x00024bcb) bg_popup_window_pane_cp09_ParamLimits

0x2f52,	// (0x00024bcb) bg_popup_window_pane_cp09

0x2f60,	// (0x00024bd9) field_vitu2_entry_pane_ParamLimits

0x2f60,	// (0x00024bd9) field_vitu2_entry_pane

0x2f7a,	// (0x00024bf3) grid_vitu2_function_pane_ParamLimits

0x2f7a,	// (0x00024bf3) grid_vitu2_function_pane

0x2fb5,	// (0x00024c2e) grid_vitu2_itu_pane_ParamLimits

0x2fb5,	// (0x00024c2e) grid_vitu2_itu_pane

0x301a,	// (0x00024c93) cell_vitu2_itu_pane_ParamLimits

0x301a,	// (0x00024c93) cell_vitu2_itu_pane

0x303c,	// (0x00024cb5) cell_vitu2_function_pane_ParamLimits

0x303c,	// (0x00024cb5) cell_vitu2_function_pane

0xdaee,	// (0x0002f767) bg_popup_call_pane_cp08_ParamLimits

0xdaee,	// (0x0002f767) bg_popup_call_pane_cp08

0xdb07,	// (0x0002f780) field_vitu2_entry_pane_g1

0xdb13,	// (0x0002f78c) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x000315d5) field_vitu2_entry_pane_g

0x7f06,	// (0x00029b7f) field_vitu2_entry_pane_t1_ParamLimits

0x7f06,	// (0x00029b7f) field_vitu2_entry_pane_t1

0xdb2d,	// (0x0002f7a6) field_vitu2_entry_pane_t2_ParamLimits

0xdb2d,	// (0x0002f7a6) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x000315dc) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x000315dc) field_vitu2_entry_pane_t

0x307b,	// (0x00024cf4) bg_button_pane_cp010_ParamLimits

0x307b,	// (0x00024cf4) bg_button_pane_cp010

0x3089,	// (0x00024d02) cell_vitu2_itu_pane_g1

0x30a7,	// (0x00024d20) cell_vitu2_itu_pane_t1_ParamLimits

0x30a7,	// (0x00024d20) cell_vitu2_itu_pane_t1

0x310d,	// (0x00024d86) cell_vitu2_itu_pane_t2_ParamLimits

0x310d,	// (0x00024d86) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x000315e6) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x000315e6) cell_vitu2_itu_pane_t

0xdb52,	// (0x0002f7cb) bg_button_pane_cp011

0x31e9,	// (0x00024e62) cell_vitu2_function_pane_g1

0x336d,	// (0x00024fe6) main_myfav_hc_pane

0x2cc3,	// (0x0002493c) popup_image3_note_pane_ParamLimits

0x2cc3,	// (0x0002493c) popup_image3_note_pane

0x2cdd,	// (0x00024956) popup_image3_tool_bar_pane_ParamLimits

0x2cdd,	// (0x00024956) popup_image3_tool_bar_pane

0x3191,	// (0x00024e0a) cell_vitu2_itu_pane_t3_ParamLimits

0x3191,	// (0x00024e0a) cell_vitu2_itu_pane_t3

0x336d,	// (0x00024fe6) bg_popup_trans_pane

0xdb60,	// (0x0002f7d9) grid_image3_tool_bar_pane

0xdb6a,	// (0x0002f7e3) bg_popup_trans_pane_g1

0xabc8,	// (0x0002c841) bg_popup_trans_pane_g2

0xdb72,	// (0x0002f7eb) bg_popup_trans_pane_g3

0xdb7a,	// (0x0002f7f3) bg_popup_trans_pane_g4

0xdb82,	// (0x0002f7fb) bg_popup_trans_pane_g5

0xdb8a,	// (0x0002f803) bg_popup_trans_pane_g6

0xdb92,	// (0x0002f80b) bg_popup_trans_pane_g7

0xdb9a,	// (0x0002f813) bg_popup_trans_pane_g8

0xaba8,	// (0x0002c821) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x000315ed) bg_popup_trans_pane_g

0xaa55,	// (0x0002c6ce) cell_image3_tool_bar_pane_ParamLimits

0xaa55,	// (0x0002c6ce) cell_image3_tool_bar_pane

0xce5e,	// (0x0002ead7) cell_image3_tool_bar_pane_g1

0x336d,	// (0x00024fe6) bg_popup_trans_pane_cp1

0xdba2,	// (0x0002f81b) popup_image3_note_pane_t1

0xdbb0,	// (0x0002f829) popup_image3_note_pane_t2

0xdbbe,	// (0x0002f837) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x00031600) popup_image3_note_pane_t

0xdbcc,	// (0x0002f845) popup_image3_note_pane_t3_copy1

0x7f22,	// (0x00029b9b) bg_myfav_hc_instruction_pane_ParamLimits

0x7f22,	// (0x00029b9b) bg_myfav_hc_instruction_pane

0x7f34,	// (0x00029bad) cell_myfav_contact_pane_ParamLimits

0x7f34,	// (0x00029bad) cell_myfav_contact_pane

0x7f4e,	// (0x00029bc7) cell_myfav_contact_pane_cp1_ParamLimits

0x7f4e,	// (0x00029bc7) cell_myfav_contact_pane_cp1

0x7f64,	// (0x00029bdd) cell_myfav_contact_pane_cp2_ParamLimits

0x7f64,	// (0x00029bdd) cell_myfav_contact_pane_cp2

0x7f7a,	// (0x00029bf3) cell_myfav_contact_pane_cp3_ParamLimits

0x7f7a,	// (0x00029bf3) cell_myfav_contact_pane_cp3

0x7f8f,	// (0x00029c08) cell_myfav_contact_pane_cp4_ParamLimits

0x7f8f,	// (0x00029c08) cell_myfav_contact_pane_cp4

0x7fa3,	// (0x00029c1c) cell_myfav_contact_pane_cp5_ParamLimits

0x7fa3,	// (0x00029c1c) cell_myfav_contact_pane_cp5

0x7fb7,	// (0x00029c30) cell_myfav_contact_pane_cp6_ParamLimits

0x7fb7,	// (0x00029c30) cell_myfav_contact_pane_cp6

0x7fcb,	// (0x00029c44) cell_myfav_contact_pane_cp7_ParamLimits

0x7fcb,	// (0x00029c44) cell_myfav_contact_pane_cp7

0xdbda,	// (0x0002f853) listscroll_gen_pane_cp05

0x7fe3,	// (0x00029c5c) main_myfav_hc_pane_g1_ParamLimits

0x7fe3,	// (0x00029c5c) main_myfav_hc_pane_g1

0x7ff9,	// (0x00029c72) main_myfav_hc_pane_g2_ParamLimits

0x7ff9,	// (0x00029c72) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x00031607) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x00031607) main_myfav_hc_pane_g

0x8023,	// (0x00029c9c) main_myfav_hc_pane_t1_ParamLimits

0x8023,	// (0x00029c9c) main_myfav_hc_pane_t1

0xdbe3,	// (0x0002f85c) main_myfav_hc_pane_t2_ParamLimits

0xdbe3,	// (0x0002f85c) main_myfav_hc_pane_t2

0xdbf5,	// (0x0002f86e) main_myfav_hc_pane_t3_ParamLimits

0xdbf5,	// (0x0002f86e) main_myfav_hc_pane_t3

0x8038,	// (0x00029cb1) main_myfav_hc_pane_t4_ParamLimits

0x8038,	// (0x00029cb1) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x0003160e) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x0003160e) main_myfav_hc_pane_t

0xce5e,	// (0x0002ead7) bg_myfav_hc_instruction_pane_g1

0xdc07,	// (0x0002f880) cell_myfav_contact_pane_g1_ParamLimits

0xdc07,	// (0x0002f880) cell_myfav_contact_pane_g1

0xdc07,	// (0x0002f880) cell_myfav_contact_pane_g2_ParamLimits

0xdc07,	// (0x0002f880) cell_myfav_contact_pane_g2

0xdc13,	// (0x0002f88c) cell_myfav_contact_pane_g3_ParamLimits

0xdc13,	// (0x0002f88c) cell_myfav_contact_pane_g3

0xd166,	// (0x0002eddf) cell_myfav_contact_pane_g4_ParamLimits

0xd166,	// (0x0002eddf) cell_myfav_contact_pane_g4

0xdc20,	// (0x0002f899) cell_myfav_contact_pane_g5_ParamLimits

0xdc20,	// (0x0002f899) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x00031619) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x00031619) cell_myfav_contact_pane_g

0x800f,	// (0x00029c88) main_myfav_hc_pane_g3_ParamLimits

0x800f,	// (0x00029c88) main_myfav_hc_pane_g3

0x34f7,	// (0x00025170) popup_adpt_find_window

0x805c,	// (0x00029cd5) afind_page_pane_ParamLimits

0x805c,	// (0x00029cd5) afind_page_pane

0x8071,	// (0x00029cea) aid_size_cell_afind_ParamLimits

0x8071,	// (0x00029cea) aid_size_cell_afind

0x808f,	// (0x00029d08) bg_popup_sub_pane_cp09_ParamLimits

0x808f,	// (0x00029d08) bg_popup_sub_pane_cp09

0x809c,	// (0x00029d15) find_pane_cp01_ParamLimits

0x809c,	// (0x00029d15) find_pane_cp01

0xdc2c,	// (0x0002f8a5) grid_afind_control_pane_ParamLimits

0xdc2c,	// (0x0002f8a5) grid_afind_control_pane

0x80a9,	// (0x00029d22) grid_afind_pane_ParamLimits

0x80a9,	// (0x00029d22) grid_afind_pane

0x80c7,	// (0x00029d40) cell_afind_pane_ParamLimits

0x80c7,	// (0x00029d40) cell_afind_pane

0xce5e,	// (0x0002ead7) afind_page_pane_g1

0x8114,	// (0x00029d8d) afind_page_pane_g2

0x811d,	// (0x00029d96) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x00031624) afind_page_pane_g

0x8126,	// (0x00029d9f) afind_page_pane_t1

0xdc40,	// (0x0002f8b9) cell_afind_grid_control_pane_ParamLimits

0xdc40,	// (0x0002f8b9) cell_afind_grid_control_pane

0xd95d,	// (0x0002f5d6) bg_button_pane_cp69_ParamLimits

0xd95d,	// (0x0002f5d6) bg_button_pane_cp69

0x8146,	// (0x00029dbf) cell_afind_pane_g1_ParamLimits

0x8146,	// (0x00029dbf) cell_afind_pane_g1

0x8153,	// (0x00029dcc) cell_afind_pane_t1_ParamLimits

0x8153,	// (0x00029dcc) cell_afind_pane_t1

0x489d,	// (0x00026516) bg_button_pane_cp72

0xdc4f,	// (0x0002f8c8) cell_afind_grid_control_pane_g1

0x61ce,	// (0x00027e47) aid_image_placing_area_ParamLimits

0x61ce,	// (0x00027e47) aid_image_placing_area

0xd3f2,	// (0x0002f06b) field_vitu_entry_pane_g1_ParamLimits

0xd3f2,	// (0x0002f06b) field_vitu_entry_pane_g1

0xd3fe,	// (0x0002f077) field_vitu_entry_pane_g2_ParamLimits

0xd3fe,	// (0x0002f077) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x000314d5) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x000314d5) field_vitu_entry_pane_g

0x7b4d,	// (0x000297c6) cell_vitu_itu_pane_g1_ParamLimits

0x7b8f,	// (0x00029808) cell_vitu_itu_pane_t3_ParamLimits

0x7b8f,	// (0x00029808) cell_vitu_itu_pane_t3

0xd907,	// (0x0002f580) mp4_progress_pane_t1_ParamLimits

0xd91e,	// (0x0002f597) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x0003156a) mp4_progress_pane_t_ParamLimits

0xd935,	// (0x0002f5ae) mup_progress_pane_cp04_ParamLimits

0x804a,	// (0x00029cc3) main_myfav_hc_pane_t5_ParamLimits

0x804a,	// (0x00029cc3) main_myfav_hc_pane_t5

0x33b4,	// (0x0002502d) aid_zoom_text_primary

0x34f7,	// (0x00025170) popup_adpt_find_window_ParamLimits

0x3597,	// (0x00025210) main_cam_set_pane

0x2d48,	// (0x000249c1) cam4_zoom_pane_ParamLimits

0x2d48,	// (0x000249c1) cam4_zoom_pane

0x8165,	// (0x00029dde) main_cam_set_pane_g1_ParamLimits

0x8165,	// (0x00029dde) main_cam_set_pane_g1

0x8173,	// (0x00029dec) main_cam_set_pane_g2_ParamLimits

0x8173,	// (0x00029dec) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x0003162b) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x0003162b) main_cam_set_pane_g

0x8192,	// (0x00029e0b) main_cam_set_pane_t1_ParamLimits

0x8192,	// (0x00029e0b) main_cam_set_pane_t1

0x81a4,	// (0x00029e1d) main_cset_listscroll_pane_ParamLimits

0x81a4,	// (0x00029e1d) main_cset_listscroll_pane

0x81c2,	// (0x00029e3b) main_cset_slider_pane_ParamLimits

0x81c2,	// (0x00029e3b) main_cset_slider_pane

0xdc60,	// (0x0002f8d9) main_cset_list_pane_ParamLimits

0xdc60,	// (0x0002f8d9) main_cset_list_pane

0xdc70,	// (0x0002f8e9) scroll_pane_cp028

0x81e6,	// (0x00029e5f) aid_area_touch_slider

0x8202,	// (0x00029e7b) cset_slider_pane

0x822c,	// (0x00029ea5) main_cset_slider_pane_g1

0x8241,	// (0x00029eba) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x00031630) main_cset_slider_pane_g

0xdca9,	// (0x0002f922) main_cset_slider_pane_t1

0x82fd,	// (0x00029f76) main_cset_slider_pane_t2

0x8317,	// (0x00029f90) main_cset_slider_pane_t3

0x8331,	// (0x00029faa) main_cset_slider_pane_t4

0x834b,	// (0x00029fc4) main_cset_slider_pane_t5

0x8365,	// (0x00029fde) main_cset_slider_pane_t6

0x837a,	// (0x00029ff3) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x00031655) main_cset_slider_pane_t

0x847e,	// (0x0002a0f7) cset_list_set_pane_ParamLimits

0x847e,	// (0x0002a0f7) cset_list_set_pane

0x848f,	// (0x0002a108) aid_position_infowindow_above

0x8497,	// (0x0002a110) aid_position_infowindow_below

0x849f,	// (0x0002a118) cset_list_set_pane_g1_ParamLimits

0x849f,	// (0x0002a118) cset_list_set_pane_g1

0xdd49,	// (0x0002f9c2) cset_list_set_pane_g3_ParamLimits

0xdd49,	// (0x0002f9c2) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x00031674) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x00031674) cset_list_set_pane_g

0xdd58,	// (0x0002f9d1) cset_list_set_pane_t1_ParamLimits

0xdd58,	// (0x0002f9d1) cset_list_set_pane_t1

0x3597,	// (0x00025210) list_highlight_pane_cp021_ParamLimits

0x3597,	// (0x00025210) list_highlight_pane_cp021

0xb5c9,	// (0x0002d242) cset_slider_pane_g1

0xb5db,	// (0x0002d254) cset_slider_pane_g2

0xb5d2,	// (0x0002d24b) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x00031679) cset_slider_pane_g

0xdd6d,	// (0x0002f9e6) aid_area_touch_cam4_zoom

0xdd75,	// (0x0002f9ee) cam4_zoom_cont_pane

0xdd7d,	// (0x0002f9f6) cam4_zoom_pane_g1

0xdd85,	// (0x0002f9fe) cam4_zoom_pane_g2

0x31fd,	// (0x00024e76) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x00031680) cam4_zoom_pane_g

0xdd8d,	// (0x0002fa06) cam4_zoom_cont_pane_g1

0xdd96,	// (0x0002fa0f) cam4_zoom_cont_pane_g2

0xdd9f,	// (0x0002fa18) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x00031687) cam4_zoom_cont_pane_g

0x7dcb,	// (0x00029a44) call4_image_pane_ParamLimits

0x7dcb,	// (0x00029a44) call4_image_pane

0xd9b3,	// (0x0002f62c) call4_windows_conf_pane_ParamLimits

0xd9c6,	// (0x0002f63f) popup_call4_audio_in_window_ParamLimits

0xd9c6,	// (0x0002f63f) popup_call4_audio_in_window

0x336d,	// (0x00024fe6) bg_popup_call2_act_pane_cp02

0xda24,	// (0x0002f69d) call4_list_conf_pane

0xce5e,	// (0x0002ead7) call4_image_pane_g1

0xce5e,	// (0x0002ead7) call4_image_pane_g2

0x0001,

0xf722,	// (0x0003139b) call4_image_pane_g

0xdda8,	// (0x0002fa21) list_single_graphic_popup_conf4_pane_ParamLimits

0xdda8,	// (0x0002fa21) list_single_graphic_popup_conf4_pane

0x336d,	// (0x00024fe6) list_highlight_pane_cp022

0xddbb,	// (0x0002fa34) list_single_graphic_popup_conf4_pane_g1

0xb20e,	// (0x0002ce87) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x0003168e) list_single_graphic_popup_conf4_pane_g

0xddc3,	// (0x0002fa3c) list_single_graphic_popup_conf4_pane_t1

0x4ae3,	// (0x0002675c) popup_vtel_slider_window_ParamLimits

0x4ae3,	// (0x0002675c) popup_vtel_slider_window

0xd94b,	// (0x0002f5c4) dialer2_ne_pane_t2_ParamLimits

0xd94b,	// (0x0002f5c4) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x0003156f) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x0003156f) dialer2_ne_pane_t

0xcc4b,	// (0x0002e8c4) bg_popup_sub_pane_cp010_ParamLimits

0xcc4b,	// (0x0002e8c4) bg_popup_sub_pane_cp010

0x84ab,	// (0x0002a124) popup_vtel_slider_window_g1_ParamLimits

0x84ab,	// (0x0002a124) popup_vtel_slider_window_g1

0x84be,	// (0x0002a137) popup_vtel_slider_window_g2_ParamLimits

0x84be,	// (0x0002a137) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x00031693) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x00031693) popup_vtel_slider_window_g

0x8512,	// (0x0002a18b) vtel_slider_pane_ParamLimits

0x8512,	// (0x0002a18b) vtel_slider_pane

0x8534,	// (0x0002a1ad) vtel_slider_pane_g1_ParamLimits

0x8534,	// (0x0002a1ad) vtel_slider_pane_g1

0x8548,	// (0x0002a1c1) vtel_slider_pane_g2_ParamLimits

0x8548,	// (0x0002a1c1) vtel_slider_pane_g2

0x8560,	// (0x0002a1d9) vtel_slider_pane_g3_ParamLimits

0x8560,	// (0x0002a1d9) vtel_slider_pane_g3

0x8534,	// (0x0002a1ad) vtel_slider_pane_g4_ParamLimits

0x8534,	// (0x0002a1ad) vtel_slider_pane_g4

0x8576,	// (0x0002a1ef) vtel_slider_pane_g5_ParamLimits

0x8576,	// (0x0002a1ef) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x0003169c) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x0003169c) vtel_slider_pane_g

0x336d,	// (0x00024fe6) main_gallery2_pane

0x2f2c,	// (0x00024ba5) aid_size_row_itut2_dropdow_list_ParamLimits

0x2f2c,	// (0x00024ba5) aid_size_row_itut2_dropdow_list

0x2f96,	// (0x00024c0f) grid_vitu2_function_top_pane_ParamLimits

0x2f96,	// (0x00024c0f) grid_vitu2_function_top_pane

0x2fd9,	// (0x00024c52) popup_vitu2_dropdown_list_window_ParamLimits

0x2fd9,	// (0x00024c52) popup_vitu2_dropdown_list_window

0x2ff8,	// (0x00024c71) popup_vitu2_match_list_window

0x3205,	// (0x00024e7e) cell_vitu2_function_top_pane_ParamLimits

0x3205,	// (0x00024e7e) cell_vitu2_function_top_pane

0x3225,	// (0x00024e9e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x3225,	// (0x00024e9e) cell_vitu2_function_top_pane_cp01

0x3245,	// (0x00024ebe) cell_vitu2_function_top_wide_pane_ParamLimits

0x3245,	// (0x00024ebe) cell_vitu2_function_top_wide_pane

0xdb52,	// (0x0002f7cb) bg_button_pane_cp012

0x3263,	// (0x00024edc) cell_vitu2_function_top_pane_g1

0xdddf,	// (0x0002fa58) bg_button_pane_cp013_ParamLimits

0xdddf,	// (0x0002fa58) bg_button_pane_cp013

0x858c,	// (0x0002a205) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x858c,	// (0x0002a205) cell_vitu2_function_top_wide_pane_g1

0xdb52,	// (0x0002f7cb) bg_popup_sub_pane_cp20

0x3277,	// (0x00024ef0) list_vitu2_match_list_pane

0xdb6a,	// (0x0002f7e3) bg_popup_sub_pane_cp20_g1

0xdb72,	// (0x0002f7eb) bg_popup_sub_pane_cp20_g2

0xabc8,	// (0x0002c841) bg_popup_sub_pane_cp20_g3

0xdb7a,	// (0x0002f7f3) bg_popup_sub_pane_cp20_g4

0xaba8,	// (0x0002c821) bg_popup_sub_pane_cp20_g5

0xddfb,	// (0x0002fa74) bg_popup_sub_pane_cp20_g6

0xdb8a,	// (0x0002f803) bg_popup_sub_pane_cp20_g7

0xdb92,	// (0x0002f80b) bg_popup_sub_pane_cp20_g8

0xdb9a,	// (0x0002f813) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x000316a7) bg_popup_sub_pane_cp20_g

0xde03,	// (0x0002fa7c) list_vitu2_match_list_item_pane_ParamLimits

0xde03,	// (0x0002fa7c) list_vitu2_match_list_item_pane

0xde15,	// (0x0002fa8e) list_vitu2_match_list_item_pane_t1

0xa991,	// (0x0002c60a) bg_popup_sub_pane_cp21

0xde23,	// (0x0002fa9c) grid_vitu2_dropdown_list_pane

0x3295,	// (0x00024f0e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x3295,	// (0x00024f0e) cell_vitu2_dropdown_list_char_pane

0x32b6,	// (0x00024f2f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x32b6,	// (0x00024f2f) cell_vitu2_dropdown_list_ctrl_pane

0xde2b,	// (0x0002faa4) cell_vitu2_dropdown_list_char_pane_g1

0xde34,	// (0x0002faad) cell_vitu2_dropdown_list_char_pane_g2

0xde3d,	// (0x0002fab6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x000316c4) cell_vitu2_dropdown_list_char_pane_g

0x32e2,	// (0x00024f5b) cell_vitu2_dropdown_list_char_pane_t1

0x85d0,	// (0x0002a249) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x85d0,	// (0x0002a249) cell_vitu2_dropdown_list_ctrl_pane_g1

0x85dd,	// (0x0002a256) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x85dd,	// (0x0002a256) cell_vitu2_dropdown_list_ctrl_pane_g2

0x85ea,	// (0x0002a263) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x85ea,	// (0x0002a263) cell_vitu2_dropdown_list_ctrl_pane_g3

0x32f0,	// (0x00024f69) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x32f0,	// (0x00024f69) cell_vitu2_dropdown_list_ctrl_pane_g4

0xda78,	// (0x0002f6f1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xda78,	// (0x0002f6f1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x000316cb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x000316cb) cell_vitu2_dropdown_list_ctrl_pane_g

0x85f7,	// (0x0002a270) aid_size_cell_gallery2_ParamLimits

0x85f7,	// (0x0002a270) aid_size_cell_gallery2

0x860d,	// (0x0002a286) grid_gallery2_pane_ParamLimits

0x860d,	// (0x0002a286) grid_gallery2_pane

0x861f,	// (0x0002a298) scroll_pane_cp029_ParamLimits

0x861f,	// (0x0002a298) scroll_pane_cp029

0x862b,	// (0x0002a2a4) cell_gallery2_pane_ParamLimits

0x862b,	// (0x0002a2a4) cell_gallery2_pane

0xde46,	// (0x0002fabf) cell_gallery2_pane_g2

0x865d,	// (0x0002a2d6) cell_gallery2_pane_g3

0xde50,	// (0x0002fac9) cell_gallery2_pane_g4

0xde58,	// (0x0002fad1) cell_gallery2_pane_g5

0xb473,	// (0x0002d0ec) grid_highlight_pane_cp10

0x2ff8,	// (0x00024c71) popup_vitu2_match_list_window_ParamLimits

0x3009,	// (0x00024c82) popup_vitu2_query_window_ParamLimits

0x3009,	// (0x00024c82) popup_vitu2_query_window

0xa991,	// (0x0002c60a) bg_vitu2_candi_button_pane

0xde2b,	// (0x0002faa4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xde34,	// (0x0002faad) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xde3d,	// (0x0002fab6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8665,	// (0x0002a2de) bg_button_pane_cp015

0x866d,	// (0x0002a2e6) bg_button_pane_cp016

0x8676,	// (0x0002a2ef) bg_button_pane_cp017

0x3597,	// (0x00025210) bg_popup_sub_pane_cp22

0xde60,	// (0x0002fad9) popup_vitu2_query_window_g1

0x869c,	// (0x0002a315) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x000316d6) popup_vitu2_query_window_g

0x86a8,	// (0x0002a321) popup_vitu2_query_window_t1_ParamLimits

0x86a8,	// (0x0002a321) popup_vitu2_query_window_t1

0x86d0,	// (0x0002a349) popup_vitu2_query_window_t2_ParamLimits

0x86d0,	// (0x0002a349) popup_vitu2_query_window_t2

0x86e2,	// (0x0002a35b) popup_vitu2_query_window_t3_ParamLimits

0x86e2,	// (0x0002a35b) popup_vitu2_query_window_t3

0x870a,	// (0x0002a383) popup_vitu2_query_window_t4_ParamLimits

0x870a,	// (0x0002a383) popup_vitu2_query_window_t4

0x871c,	// (0x0002a395) popup_vitu2_query_window_t5_ParamLimits

0x871c,	// (0x0002a395) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x000316db) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x000316db) popup_vitu2_query_window_t

0xdc58,	// (0x0002f8d1) main_cset_text_pane

0x81e6,	// (0x00029e5f) aid_area_touch_slider_ParamLimits

0x8202,	// (0x00029e7b) cset_slider_pane_ParamLimits

0x822c,	// (0x00029ea5) main_cset_slider_pane_g1_ParamLimits

0x8241,	// (0x00029eba) main_cset_slider_pane_g2_ParamLimits

0xdc79,	// (0x0002f8f2) main_cset_slider_pane_g3_ParamLimits

0xdc79,	// (0x0002f8f2) main_cset_slider_pane_g3

0x8256,	// (0x00029ecf) main_cset_slider_pane_g4_ParamLimits

0x8256,	// (0x00029ecf) main_cset_slider_pane_g4

0x8265,	// (0x00029ede) main_cset_slider_pane_g5_ParamLimits

0x8265,	// (0x00029ede) main_cset_slider_pane_g5

0x8271,	// (0x00029eea) main_cset_slider_pane_g6_ParamLimits

0x8271,	// (0x00029eea) main_cset_slider_pane_g6

0xf9b7,	// (0x00031630) main_cset_slider_pane_g_ParamLimits

0xdca9,	// (0x0002f922) main_cset_slider_pane_t1_ParamLimits

0x82fd,	// (0x00029f76) main_cset_slider_pane_t2_ParamLimits

0x8317,	// (0x00029f90) main_cset_slider_pane_t3_ParamLimits

0x8331,	// (0x00029faa) main_cset_slider_pane_t4_ParamLimits

0x834b,	// (0x00029fc4) main_cset_slider_pane_t5_ParamLimits

0x8365,	// (0x00029fde) main_cset_slider_pane_t6_ParamLimits

0x837a,	// (0x00029ff3) main_cset_slider_pane_t7_ParamLimits

0x83a4,	// (0x0002a01d) main_cset_slider_pane_t8_ParamLimits

0x83a4,	// (0x0002a01d) main_cset_slider_pane_t8

0x83cc,	// (0x0002a045) main_cset_slider_pane_t9_ParamLimits

0x83cc,	// (0x0002a045) main_cset_slider_pane_t9

0x83f4,	// (0x0002a06d) main_cset_slider_pane_t10_ParamLimits

0x83f4,	// (0x0002a06d) main_cset_slider_pane_t10

0x841c,	// (0x0002a095) main_cset_slider_pane_t11_ParamLimits

0x841c,	// (0x0002a095) main_cset_slider_pane_t11

0x8444,	// (0x0002a0bd) main_cset_slider_pane_t12_ParamLimits

0x8444,	// (0x0002a0bd) main_cset_slider_pane_t12

0x8461,	// (0x0002a0da) main_cset_slider_pane_t13_ParamLimits

0x8461,	// (0x0002a0da) main_cset_slider_pane_t13

0xf9dc,	// (0x00031655) main_cset_slider_pane_t_ParamLimits

0x336d,	// (0x00024fe6) bg_popup_sub_pane_cp011

0xde6c,	// (0x0002fae5) main_cset_text_pane_g1

0xde74,	// (0x0002faed) main_cset_text_pane_t1

0xde82,	// (0x0002fafb) main_cset_text_pane_t2

0xde90,	// (0x0002fb09) main_cset_text_pane_t3

0xde9e,	// (0x0002fb17) main_cset_text_pane_t4

0xdeac,	// (0x0002fb25) main_cset_text_pane_t5

0xdeba,	// (0x0002fb33) main_cset_text_pane_t6

0xdec8,	// (0x0002fb41) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x000316e6) main_cset_text_pane_t

0x336d,	// (0x00024fe6) main_cam4_burst_pane

0x336d,	// (0x00024fe6) main_cam5_pane

0x8134,	// (0x00029dad) bg_button_pane_cp019

0x813d,	// (0x00029db6) bg_button_pane_cp020

0xdc85,	// (0x0002f8fe) main_cset_slider_pane_g7_ParamLimits

0xdc85,	// (0x0002f8fe) main_cset_slider_pane_g7

0xdc91,	// (0x0002f90a) main_cset_slider_pane_g8_ParamLimits

0xdc91,	// (0x0002f90a) main_cset_slider_pane_g8

0x8285,	// (0x00029efe) main_cset_slider_pane_g9_ParamLimits

0x8285,	// (0x00029efe) main_cset_slider_pane_g9

0x8291,	// (0x00029f0a) main_cset_slider_pane_g10_ParamLimits

0x8291,	// (0x00029f0a) main_cset_slider_pane_g10

0x829d,	// (0x00029f16) main_cset_slider_pane_g11_ParamLimits

0x829d,	// (0x00029f16) main_cset_slider_pane_g11

0x82a9,	// (0x00029f22) main_cset_slider_pane_g12_ParamLimits

0x82a9,	// (0x00029f22) main_cset_slider_pane_g12

0x82b5,	// (0x00029f2e) main_cset_slider_pane_g13_ParamLimits

0x82b5,	// (0x00029f2e) main_cset_slider_pane_g13

0x82c1,	// (0x00029f3a) main_cset_slider_pane_g14_ParamLimits

0x82c1,	// (0x00029f3a) main_cset_slider_pane_g14

0x82cd,	// (0x00029f46) main_cset_slider_pane_g15_ParamLimits

0x82cd,	// (0x00029f46) main_cset_slider_pane_g15

0xdcd7,	// (0x0002f950) main_cset_slider_pane_t14_ParamLimits

0xdcd7,	// (0x0002f950) main_cset_slider_pane_t14

0xdd10,	// (0x0002f989) main_cset_slider_pane_t15_ParamLimits

0xdd10,	// (0x0002f989) main_cset_slider_pane_t15

0x872e,	// (0x0002a3a7) aid_cam4_burst_size_cell_ParamLimits

0x872e,	// (0x0002a3a7) aid_cam4_burst_size_cell

0x874e,	// (0x0002a3c7) grid_cam4_burst_pane_ParamLimits

0x874e,	// (0x0002a3c7) grid_cam4_burst_pane

0x8774,	// (0x0002a3ed) linegrid_cam4_burst_pane_ParamLimits

0x8774,	// (0x0002a3ed) linegrid_cam4_burst_pane

0x8796,	// (0x0002a40f) scroll_pane_cp30_ParamLimits

0x8796,	// (0x0002a40f) scroll_pane_cp30

0x87a2,	// (0x0002a41b) cell_cam4_burst_pane_ParamLimits

0x87a2,	// (0x0002a41b) cell_cam4_burst_pane

0xded6,	// (0x0002fb4f) linegrid_cam4_burst_pane_g1_ParamLimits

0xded6,	// (0x0002fb4f) linegrid_cam4_burst_pane_g1

0x87e9,	// (0x0002a462) linegrid_cam4_burst_pane_g2_ParamLimits

0x87e9,	// (0x0002a462) linegrid_cam4_burst_pane_g2

0xdee3,	// (0x0002fb5c) linegrid_cam4_burst_pane_g3_ParamLimits

0xdee3,	// (0x0002fb5c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x000316f5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x000316f5) linegrid_cam4_burst_pane_g

0x87fa,	// (0x0002a473) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x87fa,	// (0x0002a473) linegrid_cam4_burst_pane_g3_copy1

0xdef0,	// (0x0002fb69) linegrid_cam4_burst_pane_g4_ParamLimits

0xdef0,	// (0x0002fb69) linegrid_cam4_burst_pane_g4

0x8814,	// (0x0002a48d) linegrid_cam4_burst_pane_g5_ParamLimits

0x8814,	// (0x0002a48d) linegrid_cam4_burst_pane_g5

0x8825,	// (0x0002a49e) linegrid_cam4_burst_pane_g6_ParamLimits

0x8825,	// (0x0002a49e) linegrid_cam4_burst_pane_g6

0xdefd,	// (0x0002fb76) linegrid_cam4_burst_pane_g7_ParamLimits

0xdefd,	// (0x0002fb76) linegrid_cam4_burst_pane_g7

0x8836,	// (0x0002a4af) cell_cam4_burst_pane_g1

0xdf16,	// (0x0002fb8f) main_cam5_pane_t1_ParamLimits

0xdf16,	// (0x0002fb8f) main_cam5_pane_t1

0xdf28,	// (0x0002fba1) main_cam5_pane_t2_ParamLimits

0xdf28,	// (0x0002fba1) main_cam5_pane_t2

0xdf3a,	// (0x0002fbb3) main_cam5_pane_t3_ParamLimits

0xdf3a,	// (0x0002fbb3) main_cam5_pane_t3

0xdf4c,	// (0x0002fbc5) main_cam5_pane_t4_ParamLimits

0xdf4c,	// (0x0002fbc5) main_cam5_pane_t4

0xdf62,	// (0x0002fbdb) main_cam5_pane_t5_ParamLimits

0xdf62,	// (0x0002fbdb) main_cam5_pane_t5

0xdf74,	// (0x0002fbed) main_cam5_pane_t6_ParamLimits

0xdf74,	// (0x0002fbed) main_cam5_pane_t6

0xdf86,	// (0x0002fbff) main_cam5_pane_t7_ParamLimits

0xdf86,	// (0x0002fbff) main_cam5_pane_t7

0xdf98,	// (0x0002fc11) main_cam5_pane_t8_ParamLimits

0xdf98,	// (0x0002fc11) main_cam5_pane_t8

0xdfb4,	// (0x0002fc2d) main_cam5_pane_t9_ParamLimits

0xdfb4,	// (0x0002fc2d) main_cam5_pane_t9

0xdfc6,	// (0x0002fc3f) main_cam5_pane_t10_ParamLimits

0xdfc6,	// (0x0002fc3f) main_cam5_pane_t10

0xdfd8,	// (0x0002fc51) main_cam5_pane_t11_ParamLimits

0xdfd8,	// (0x0002fc51) main_cam5_pane_t11

0xdfea,	// (0x0002fc63) main_cam5_pane_t12_ParamLimits

0xdfea,	// (0x0002fc63) main_cam5_pane_t12

0xdfff,	// (0x0002fc78) main_cam5_pane_t13_ParamLimits

0xdfff,	// (0x0002fc78) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x00031701) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x00031701) main_cam5_pane_t

0x355d,	// (0x000251d6) popup_scut_keymap_window_ParamLimits

0x355d,	// (0x000251d6) popup_scut_keymap_window

0x884b,	// (0x0002a4c4) aid_size_cell_brow_shortcut

0xb473,	// (0x0002d0ec) bg_popup_window_pane_cp010

0x8857,	// (0x0002a4d0) grid_scut_pane

0x8861,	// (0x0002a4da) cell_scut_pane_ParamLimits

0x8861,	// (0x0002a4da) cell_scut_pane

0x8876,	// (0x0002a4ef) cell_scut_pane_g1

0xe01c,	// (0x0002fc95) cell_scut_pane_t1

0xe02b,	// (0x0002fca4) cell_scut_pane_t2

0x887f,	// (0x0002a4f8) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x0003171c) cell_scut_pane_t

0x7154,	// (0x00028dcd) main_mup3_pane_g8_ParamLimits

0x7154,	// (0x00028dcd) main_mup3_pane_g8

0x2f40,	// (0x00024bb9) area_vitu2_query_pane_ParamLimits

0x2f40,	// (0x00024bb9) area_vitu2_query_pane

0x867f,	// (0x0002a2f8) input_focus_pane_cp08

0xe03a,	// (0x0002fcb3) area_vitu2_query_pane_g1

0x888d,	// (0x0002a506) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x00031723) area_vitu2_query_pane_g

0x889c,	// (0x0002a515) area_vitu2_query_pane_t1_ParamLimits

0x889c,	// (0x0002a515) area_vitu2_query_pane_t1

0x88ae,	// (0x0002a527) area_vitu2_query_pane_t2_ParamLimits

0x88ae,	// (0x0002a527) area_vitu2_query_pane_t2

0x88c0,	// (0x0002a539) area_vitu2_query_pane_t3_ParamLimits

0x88c0,	// (0x0002a539) area_vitu2_query_pane_t3

0xe046,	// (0x0002fcbf) area_vitu2_query_pane_t4_ParamLimits

0xe046,	// (0x0002fcbf) area_vitu2_query_pane_t4

0xe06e,	// (0x0002fce7) area_vitu2_query_pane_t5_ParamLimits

0xe06e,	// (0x0002fce7) area_vitu2_query_pane_t5

0xe096,	// (0x0002fd0f) area_vitu2_query_pane_t6_ParamLimits

0xe096,	// (0x0002fd0f) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x00031728) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x00031728) area_vitu2_query_pane_t

0x88e8,	// (0x0002a561) bg_button_pane_cp018

0x88f5,	// (0x0002a56e) bg_button_pane_cp021

0x8901,	// (0x0002a57a) bg_button_pane_cp022

0x8910,	// (0x0002a589) input_focus_pane_cp09

0x599b,	// (0x00027614) aid_size_touch_mv_arrow_left

0xb34c,	// (0x0002cfc5) aid_size_touch_mv_arrow_right

0x82e5,	// (0x00029f5e) main_cset_slider_pane_g16_ParamLimits

0x82e5,	// (0x00029f5e) main_cset_slider_pane_g16

0x82f1,	// (0x00029f6a) main_cset_slider_pane_g17_ParamLimits

0x82f1,	// (0x00029f6a) main_cset_slider_pane_g17

0x8836,	// (0x0002a4af) cell_cam4_burst_pane_g1_ParamLimits

0x336d,	// (0x00024fe6) compa_mode_pane

0x84ce,	// (0x0002a147) popup_vtel_slider_window_g3_ParamLimits

0x84ce,	// (0x0002a147) popup_vtel_slider_window_g3

0x84e5,	// (0x0002a15e) popup_vtel_slider_window_g4_ParamLimits

0x84e5,	// (0x0002a15e) popup_vtel_slider_window_g4

0x84fc,	// (0x0002a175) popup_vtel_slider_window_t1_ParamLimits

0x84fc,	// (0x0002a175) popup_vtel_slider_window_t1

0x336d,	// (0x00024fe6) main_cl_pane

0xc98f,	// (0x0002e608) popup_imed_adjust2_window_ParamLimits

0xc969,	// (0x0002e5e2) bg_tb_trans_pane_cp05_ParamLimits

0xd327,	// (0x0002efa0) popup_imed_adjust2_window_g1_ParamLimits

0xd336,	// (0x0002efaf) popup_imed_adjust2_window_g2_ParamLimits

0xd336,	// (0x0002efaf) popup_imed_adjust2_window_g2

0xd342,	// (0x0002efbb) popup_imed_adjust2_window_g3_ParamLimits

0xd342,	// (0x0002efbb) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x00031499) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x00031499) popup_imed_adjust2_window_g

0xd34e,	// (0x0002efc7) popup_imed_adjust2_window_t1_ParamLimits

0xd366,	// (0x0002efdf) slider_imed_adjust_pane_ParamLimits

0xd37a,	// (0x0002eff3) slider_imed_adjust_pane_g1_ParamLimits

0xd38a,	// (0x0002f003) slider_imed_adjust_pane_g2_ParamLimits

0xd39a,	// (0x0002f013) slider_imed_adjust_pane_g3_ParamLimits

0xd3ab,	// (0x0002f024) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x000314a0) slider_imed_adjust_pane_g_ParamLimits

0x2cf7,	// (0x00024970) aid_touch_area_cam4_ParamLimits

0x2cf7,	// (0x00024970) aid_touch_area_cam4

0xda68,	// (0x0002f6e1) battery_pane_cp01

0x2d8f,	// (0x00024a08) main_camera4_pane_g6_ParamLimits

0x2d8f,	// (0x00024a08) main_camera4_pane_g6

0x2db0,	// (0x00024a29) main_camera4_pane_t2_ParamLimits

0x2db0,	// (0x00024a29) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x000315a3) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x000315a3) main_camera4_pane_t

0x2dcc,	// (0x00024a45) aid_touch_area_vid4_ParamLimits

0x2dcc,	// (0x00024a45) aid_touch_area_vid4

0x2e0e,	// (0x00024a87) main_video4_pane_g5_ParamLimits

0x2e0e,	// (0x00024a87) main_video4_pane_g5

0x2e2f,	// (0x00024aa8) vid4_progress_pane_ParamLimits

0x2e2f,	// (0x00024aa8) vid4_progress_pane

0xdc9d,	// (0x0002f916) main_cset_slider_pane_g18_ParamLimits

0xdc9d,	// (0x0002f916) main_cset_slider_pane_g18

0xdf0a,	// (0x0002fb83) cell_cam4_burst_pane_g2_ParamLimits

0xdf0a,	// (0x0002fb83) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x000316fc) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x000316fc) cell_cam4_burst_pane_g

0x3f6f,	// (0x00025be8) bg_cl_pane_ParamLimits

0x3f6f,	// (0x00025be8) bg_cl_pane

0x891f,	// (0x0002a598) cl_header_pane_ParamLimits

0x891f,	// (0x0002a598) cl_header_pane

0x8933,	// (0x0002a5ac) cl_listscroll_pane_ParamLimits

0x8933,	// (0x0002a5ac) cl_listscroll_pane

0xe0e2,	// (0x0002fd5b) bg_cl_pane_g1

0xe0ea,	// (0x0002fd63) bg_cl_pane_g2

0xe0f2,	// (0x0002fd6b) bg_cl_pane_g3

0xe0fa,	// (0x0002fd73) bg_cl_pane_g4

0xe102,	// (0x0002fd7b) bg_cl_pane_g5

0xe10a,	// (0x0002fd83) bg_cl_pane_g6

0xe112,	// (0x0002fd8b) bg_cl_pane_g7

0xe11a,	// (0x0002fd93) bg_cl_pane_g8

0xe122,	// (0x0002fd9b) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x00031737) bg_cl_pane_g

0x8943,	// (0x0002a5bc) aid_height_cl_leading_ParamLimits

0x8943,	// (0x0002a5bc) aid_height_cl_leading

0x894f,	// (0x0002a5c8) aid_height_cl_text_ParamLimits

0x894f,	// (0x0002a5c8) aid_height_cl_text

0x3597,	// (0x00025210) bg_cl_header_pane_ParamLimits

0x3597,	// (0x00025210) bg_cl_header_pane

0x896e,	// (0x0002a5e7) cl_header_pane_g1_ParamLimits

0x896e,	// (0x0002a5e7) cl_header_pane_g1

0x8984,	// (0x0002a5fd) cl_header_pane_t1_ParamLimits

0x8984,	// (0x0002a5fd) cl_header_pane_t1

0xe12a,	// (0x0002fda3) cl_list_pane

0xe133,	// (0x0002fdac) hc_scroll_pane_cp01

0xaba8,	// (0x0002c821) bg_cl_header_pane_g1

0xdb6a,	// (0x0002f7e3) bg_cl_header_pane_g2

0xabc8,	// (0x0002c841) bg_cl_header_pane_g3

0xdb7a,	// (0x0002f7f3) bg_cl_header_pane_g4

0xdb72,	// (0x0002f7eb) bg_cl_header_pane_g5

0xddfb,	// (0x0002fa74) bg_cl_header_pane_g6

0xdb92,	// (0x0002f80b) bg_cl_header_pane_g7

0xdb9a,	// (0x0002f813) bg_cl_header_pane_g8

0xdb8a,	// (0x0002f803) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x0003174a) bg_cl_header_pane_g

0x899d,	// (0x0002a616) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x899d,	// (0x0002a616) hc_cl_list_double_graphic_heading_pane

0x89ad,	// (0x0002a626) hc_cl_list_single_graphic_pane_ParamLimits

0x89ad,	// (0x0002a626) hc_cl_list_single_graphic_pane

0x89c0,	// (0x0002a639) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x89c0,	// (0x0002a639) hc_cl_list_single_graphic_pane_g1

0x89cc,	// (0x0002a645) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x89cc,	// (0x0002a645) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x0003175d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x0003175d) hc_cl_list_single_graphic_pane_g

0x89e0,	// (0x0002a659) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x89e0,	// (0x0002a659) hc_cl_list_single_graphic_pane_t1

0x89c0,	// (0x0002a639) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x89c0,	// (0x0002a639) hc_cl_list_double_graphic_heading_pane_g1

0x89f5,	// (0x0002a66e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x89f5,	// (0x0002a66e) hc_cl_list_double_graphic_heading_pane_g2

0x8a09,	// (0x0002a682) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8a09,	// (0x0002a682) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x00031762) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x00031762) hc_cl_list_double_graphic_heading_pane_g

0x8a1d,	// (0x0002a696) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8a1d,	// (0x0002a696) hc_cl_list_double_graphic_heading_pane_t1

0x8a32,	// (0x0002a6ab) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8a32,	// (0x0002a6ab) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x00031769) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x00031769) hc_cl_list_double_graphic_heading_pane_t

0xe13c,	// (0x0002fdb5) vid4_progress_pane_g1

0xe14b,	// (0x0002fdc4) vid4_progress_pane_g2

0xe15a,	// (0x0002fdd3) vid4_progress_pane_g3

0xe169,	// (0x0002fde2) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x0003176e) vid4_progress_pane_g

0xe181,	// (0x0002fdfa) vid4_progress_pane_t1

0xe197,	// (0x0002fe10) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x00031779) vid4_progress_pane_t

0xe1c1,	// (0x0002fe3a) wait_bar_pane_cp07

0xcc59,	// (0x0002e8d2) blid_firmament_pane_ParamLimits

0xcc9a,	// (0x0002e913) popup_blid_sat_info2_window_g1

0xccbe,	// (0x0002e937) popup_blid_sat_info2_window_t3

0xcccc,	// (0x0002e945) popup_blid_sat_info2_window_t4

0xccda,	// (0x0002e953) popup_blid_sat_info2_window_t5

0xcce8,	// (0x0002e961) popup_blid_sat_info2_window_t6

0xccf8,	// (0x0002e971) popup_blid_sat_info2_window_t7

0xcd06,	// (0x0002e97f) popup_blid_sat_info2_window_t8

0xcd14,	// (0x0002e98d) popup_blid_sat_info2_window_t9

0xcd22,	// (0x0002e99b) popup_blid_sat_info2_window_t10

0xcdde,	// (0x0002ea57) aid_firma_cardinal_ParamLimits

0xcdf2,	// (0x0002ea6b) blid_firmament_pane_t1_ParamLimits

0xce09,	// (0x0002ea82) blid_firmament_pane_t2_ParamLimits

0xce20,	// (0x0002ea99) blid_firmament_pane_t3_ParamLimits

0xce37,	// (0x0002eab0) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x00031392) blid_firmament_pane_t_ParamLimits

0xce4e,	// (0x0002eac7) blid_sat_info_pane_ParamLimits

0x3597,	// (0x00025210) main_cam_set_pane_ParamLimits

0x7933,	// (0x000295ac) aid_size_cell_colour_35_ParamLimits

0x7953,	// (0x000295cc) aid_size_cell_colour_112_ParamLimits

0x7973,	// (0x000295ec) aid_size_cell_effect_ParamLimits

0xc969,	// (0x0002e5e2) bg_tb_trans_pane_cp02_ParamLimits

0xae4d,	// (0x0002cac6) heading_imed_pane_ParamLimits

0x7993,	// (0x0002960c) listscroll_imed_pane_ParamLimits

0xbf5b,	// (0x0002dbd4) popup_call2_audio_first_window_g5_ParamLimits

0xbf5b,	// (0x0002dbd4) popup_call2_audio_first_window_g5

0x2b00,	// (0x00024779) aid_size_touch_image3_arrow_left_ParamLimits

0x2b00,	// (0x00024779) aid_size_touch_image3_arrow_left

0x2b20,	// (0x00024799) aid_size_touch_image3_arrow_right_ParamLimits

0x2b20,	// (0x00024799) aid_size_touch_image3_arrow_right

0xe1ac,	// (0x0002fe25) vid4_progress_pane_t3

0x7c67,	// (0x000298e0) main_hwr_training_symbol_option_pane_ParamLimits

0x7c67,	// (0x000298e0) main_hwr_training_symbol_option_pane

0xd606,	// (0x0002f27f) popup_hwr_training_preview_window_ParamLimits

0xd606,	// (0x0002f27f) popup_hwr_training_preview_window

0x29ca,	// (0x00024643) hwr_training_navi_pane_g5_ParamLimits

0x29ca,	// (0x00024643) hwr_training_navi_pane_g5

0xdb4a,	// (0x0002f7c3) popup_char_count_window

0xdb52,	// (0x0002f7cb) bg_popup_sub_pane_cp20_ParamLimits

0x3277,	// (0x00024ef0) list_vitu2_match_list_pane_ParamLimits

0x3286,	// (0x00024eff) vitu2_page_scroll_pane_ParamLimits

0x3286,	// (0x00024eff) vitu2_page_scroll_pane

0xe22b,	// (0x0002fea4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe22b,	// (0x0002fea4) list_single_hwr_training_symbol_option_pane

0xe23e,	// (0x0002feb7) list_single_hwr_training_symbol_option_pane_g1

0xe246,	// (0x0002febf) list_single_hwr_training_symbol_option_pane_t1

0xe254,	// (0x0002fecd) bg_button_pane_cp023

0xe25d,	// (0x0002fed6) bg_button_pane_cp024

0x8a47,	// (0x0002a6c0) vitu2_page_scroll_pane_g1

0x8a4f,	// (0x0002a6c8) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x00031780) vitu2_page_scroll_pane_g

0x8a57,	// (0x0002a6d0) vitu2_page_scroll_pane_t1

0xcb75,	// (0x0002e7ee) popup_char_count_window_g1

0xe290,	// (0x0002ff09) popup_char_count_window_g2

0xe299,	// (0x0002ff12) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x00031785) popup_char_count_window_g

0xe2a2,	// (0x0002ff1b) popup_char_count_window_t1

0x336d,	// (0x00024fe6) main_vded2_pane

0xd315,	// (0x0002ef8e) aid_size_cell_imed_line

0xd31f,	// (0x0002ef98) grid_imed_line_width_pane

0x2eb0,	// (0x00024b29) vid4_indicators_pane_g4

0xe2b0,	// (0x0002ff29) cell_imed_line_width_pane_ParamLimits

0xe2b0,	// (0x0002ff29) cell_imed_line_width_pane

0xe2c2,	// (0x0002ff3b) cell_imed_line_width_pane_g1

0xcc07,	// (0x0002e880) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x0003178c) cell_imed_line_width_pane_g

0x8a66,	// (0x0002a6df) main_vded2_pane_g1_ParamLimits

0x8a66,	// (0x0002a6df) main_vded2_pane_g1

0x8a7c,	// (0x0002a6f5) main_vded2_pane_g2_ParamLimits

0x8a7c,	// (0x0002a6f5) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x00031791) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x00031791) main_vded2_pane_g

0x8a8c,	// (0x0002a705) vded2_slider_pane_ParamLimits

0x8a8c,	// (0x0002a705) vded2_slider_pane

0x8a9f,	// (0x0002a718) aid_size_touch_vded2_end

0x8aa7,	// (0x0002a720) aid_size_touch_vded2_playhead

0x8aaf,	// (0x0002a728) aid_size_touch_vded2_start

0x8ab7,	// (0x0002a730) vded2_slider_bg_pane

0x8ac0,	// (0x0002a739) vded2_slider_pane_g1

0x8ac9,	// (0x0002a742) vded2_slider_pane_g2

0x8ad1,	// (0x0002a74a) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x00031796) vded2_slider_pane_g

0x8ada,	// (0x0002a753) vded2_slider_bg_pane_g1

0x8ae3,	// (0x0002a75c) vded2_slider_bg_pane_g2

0x8aec,	// (0x0002a765) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x0003179d) vded2_slider_bg_pane_g

0x5e7d,	// (0x00027af6) aid_postcard_touch_down_pane_ParamLimits

0x5e7d,	// (0x00027af6) aid_postcard_touch_down_pane

0x5e8f,	// (0x00027b08) aid_postcard_touch_up_pane_ParamLimits

0x5e8f,	// (0x00027b08) aid_postcard_touch_up_pane

0x336d,	// (0x00024fe6) main_blid2_pane

0xc977,	// (0x0002e5f0) popup_blid2_search_window

0x336d,	// (0x00024fe6) blid2_gps_pane

0x336d,	// (0x00024fe6) blid2_navig_pane

0x336d,	// (0x00024fe6) blid2_search_pane

0x336d,	// (0x00024fe6) blid2_tripm_pane

0x8af5,	// (0x0002a76e) blid2_search_pane_g1_ParamLimits

0x8af5,	// (0x0002a76e) blid2_search_pane_g1

0x8b09,	// (0x0002a782) blid2_search_pane_t1_ParamLimits

0x8b09,	// (0x0002a782) blid2_search_pane_t1

0x8b1b,	// (0x0002a794) aid_size_cell_blid2_gps_ParamLimits

0x8b1b,	// (0x0002a794) aid_size_cell_blid2_gps

0x8b33,	// (0x0002a7ac) blid2_gps_pane_g1_ParamLimits

0x8b33,	// (0x0002a7ac) blid2_gps_pane_g1

0x8b47,	// (0x0002a7c0) grid_blid2_satellite_pane_ParamLimits

0x8b47,	// (0x0002a7c0) grid_blid2_satellite_pane

0x8b5b,	// (0x0002a7d4) blid2_navig_pane_g1_ParamLimits

0x8b5b,	// (0x0002a7d4) blid2_navig_pane_g1

0x8b67,	// (0x0002a7e0) blid2_navig_pane_t1_ParamLimits

0x8b67,	// (0x0002a7e0) blid2_navig_pane_t1

0x8b80,	// (0x0002a7f9) blid2_navig_pane_t2_ParamLimits

0x8b80,	// (0x0002a7f9) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x000317a4) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x000317a4) blid2_navig_pane_t

0x8b99,	// (0x0002a812) blid2_navig_ring_pane_ParamLimits

0x8b99,	// (0x0002a812) blid2_navig_ring_pane

0x8bae,	// (0x0002a827) blid2_speed_pane_ParamLimits

0x8bae,	// (0x0002a827) blid2_speed_pane

0x8bba,	// (0x0002a833) blid2_tripm_pane_g1_ParamLimits

0x8bba,	// (0x0002a833) blid2_tripm_pane_g1

0x8bcf,	// (0x0002a848) blid2_tripm_pane_g2_ParamLimits

0x8bcf,	// (0x0002a848) blid2_tripm_pane_g2

0x8be3,	// (0x0002a85c) blid2_tripm_pane_g3_ParamLimits

0x8be3,	// (0x0002a85c) blid2_tripm_pane_g3

0x8bf7,	// (0x0002a870) blid2_tripm_pane_g4_ParamLimits

0x8bf7,	// (0x0002a870) blid2_tripm_pane_g4

0x8c0b,	// (0x0002a884) blid2_tripm_pane_g5_ParamLimits

0x8c0b,	// (0x0002a884) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x000317a9) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x000317a9) blid2_tripm_pane_g

0x8c2d,	// (0x0002a8a6) blid2_tripm_pane_t1_ParamLimits

0x8c2d,	// (0x0002a8a6) blid2_tripm_pane_t1

0x8c44,	// (0x0002a8bd) blid2_tripm_pane_t2_ParamLimits

0x8c44,	// (0x0002a8bd) blid2_tripm_pane_t2

0x8c5b,	// (0x0002a8d4) blid2_tripm_pane_t3_ParamLimits

0x8c5b,	// (0x0002a8d4) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x000317b6) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x000317b6) blid2_tripm_pane_t

0x8c9e,	// (0x0002a917) cell_blid2_satellite_pane_ParamLimits

0x8c9e,	// (0x0002a917) cell_blid2_satellite_pane

0x8cb6,	// (0x0002a92f) cell_blid2_satellite_pane_g1

0xe2cb,	// (0x0002ff44) cell_blid2_satellite_pane_t1

0xce5e,	// (0x0002ead7) blid2_speed_pane_g1

0xe2d9,	// (0x0002ff52) blid2_speed_pane_t1

0xe2e7,	// (0x0002ff60) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x000317bf) blid2_speed_pane_t

0xce5e,	// (0x0002ead7) blid2_navig_ring_pane_g1

0x8cbf,	// (0x0002a938) blid2_navig_ring_pane_g2

0x8cc7,	// (0x0002a940) blid2_navig_ring_pane_g3

0x8ccf,	// (0x0002a948) blid2_navig_ring_pane_g4

0x8cd7,	// (0x0002a950) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x000317c4) blid2_navig_ring_pane_g

0x336d,	// (0x00024fe6) bg_popup_window_pane_cp011

0xe2f5,	// (0x0002ff6e) popup_blid2_search_window_g1

0xe2fd,	// (0x0002ff76) popup_blid2_search_window_t1

0xe30b,	// (0x0002ff84) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x000317cf) popup_blid2_search_window_t

0x4d54,	// (0x000269cd) main_browser_pane_g1

0x3f6f,	// (0x00025be8) main_browser_pane_ParamLimits

0xdb52,	// (0x0002f7cb) bg_button_pane_cp011_ParamLimits

0x31e9,	// (0x00024e62) cell_vitu2_function_pane_g1_ParamLimits

0x3597,	// (0x00025210) bg_popup_sub_pane_cp22_ParamLimits

0x867f,	// (0x0002a2f8) input_focus_pane_cp08_ParamLimits

0x868c,	// (0x0002a305) popup_vitu2_query_button_pane_ParamLimits

0x868c,	// (0x0002a305) popup_vitu2_query_button_pane

0x8665,	// (0x0002a2de) popup_vitu2_query_input_button_pane

0xde60,	// (0x0002fad9) popup_vitu2_query_window_g1_ParamLimits

0x869c,	// (0x0002a315) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x000316d6) popup_vitu2_query_window_g_ParamLimits

0x336d,	// (0x00024fe6) bg_button_pane_cp026

0x8cdf,	// (0x0002a958) popup_vitu2_query_input_button_pane_g1

0x336d,	// (0x00024fe6) bg_button_pane_cp025

0xe319,	// (0x0002ff92) popup_vitu2_query_button_pane_t1

0x6ed5,	// (0x00028b4e) main_mp3_pane_t6

0x6ee3,	// (0x00028b5c) popup_slider_window_cp01

0xda86,	// (0x0002f6ff) cam4_battery_pane

0xda86,	// (0x0002f6ff) cam4_battery_pane_cp02

0xda86,	// (0x0002f6ff) cam4_battery_pane_cp01

0xda86,	// (0x0002f6ff) cam4_battery_pane_cp03

0xd941,	// (0x0002f5ba) cam4_battery_pane_g1

0xce5e,	// (0x0002ead7) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x000317d4) cam4_battery_pane_g

0xcd30,	// (0x0002e9a9) popup_blid_sat_info2_window_t11

0x599b,	// (0x00027614) aid_size_touch_mv_arrow_left_ParamLimits

0xb34c,	// (0x0002cfc5) aid_size_touch_mv_arrow_right_ParamLimits

0xb384,	// (0x0002cffd) navi_pane_g1_ParamLimits

0xb390,	// (0x0002d009) navi_pane_g2_ParamLimits

0x59b4,	// (0x0002762d) navi_pane_g3_ParamLimits

0xf418,	// (0x00031091) navi_pane_g_ParamLimits

0x59d9,	// (0x00027652) navi_pane_mv_t1_ParamLimits

0x799f,	// (0x00029618) grid_imed_effect_pane_ParamLimits

0x4a2c,	// (0x000266a5) aid_placing_vt_slider_lsc

0x4a34,	// (0x000266ad) aid_placing_vt_slider_prt

0x3597,	// (0x00025210) bg_tb_trans_pane_cp01_ParamLimits

0xcfad,	// (0x0002ec26) popup_image_details_window_g1_ParamLimits

0xcfc0,	// (0x0002ec39) popup_image_details_window_g2_ParamLimits

0xcfd5,	// (0x0002ec4e) popup_image_details_window_g3_ParamLimits

0xcfd5,	// (0x0002ec4e) popup_image_details_window_g3

0xf75e,	// (0x000313d7) popup_image_details_window_g_ParamLimits

0xcfe9,	// (0x0002ec62) popup_image_details_window_t1_ParamLimits

0xcffb,	// (0x0002ec74) popup_image_details_window_t2_ParamLimits

0xd014,	// (0x0002ec8d) popup_image_details_window_t3_ParamLimits

0xd028,	// (0x0002eca1) popup_image_details_window_t4_ParamLimits

0xd043,	// (0x0002ecbc) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x000313de) popup_image_details_window_t_ParamLimits

0x895b,	// (0x0002a5d4) cl_header_name_pane_ParamLimits

0x895b,	// (0x0002a5d4) cl_header_name_pane

0x8ce7,	// (0x0002a960) cl_header_name_pane_t1_ParamLimits

0x8ce7,	// (0x0002a960) cl_header_name_pane_t1

0x8d08,	// (0x0002a981) cl_header_name_pane_t2_ParamLimits

0x8d08,	// (0x0002a981) cl_header_name_pane_t2

0x8d4a,	// (0x0002a9c3) cl_header_name_pane_t3_ParamLimits

0x8d4a,	// (0x0002a9c3) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x000317d9) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x000317d9) cl_header_name_pane_t

0xb412,	// (0x0002d08b) navi_pane_mv_g2_ParamLimits

0xdb07,	// (0x0002f780) field_vitu2_entry_pane_g1_ParamLimits

0xdb13,	// (0x0002f78c) field_vitu2_entry_pane_g2_ParamLimits

0xdb1f,	// (0x0002f798) field_vitu2_entry_pane_g3_ParamLimits

0xdb1f,	// (0x0002f798) field_vitu2_entry_pane_g3

0xf95c,	// (0x000315d5) field_vitu2_entry_pane_g_ParamLimits

0x3089,	// (0x00024d02) cell_vitu2_itu_pane_g1_ParamLimits

0x3099,	// (0x00024d12) cell_vitu2_itu_pane_g2_ParamLimits

0x3099,	// (0x00024d12) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x000315e1) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x000315e1) cell_vitu2_itu_pane_g

0xdb52,	// (0x0002f7cb) bg_vkb2_func_pane_cp05_ParamLimits

0xdb52,	// (0x0002f7cb) bg_vkb2_func_pane_cp05

0xdb52,	// (0x0002f7cb) bg_vkb2_func_pane_cp03

0xdb52,	// (0x0002f7cb) bg_vkb2_func_pane_cp04

0xdb52,	// (0x0002f7cb) bg_vkb2_func_pane_cp10_ParamLimits

0xdb52,	// (0x0002f7cb) bg_vkb2_func_pane_cp10

0x8901,	// (0x0002a57a) bg_vkb2_func_pane_cp08

0x88e8,	// (0x0002a561) bg_vkb2_func_pane_cp06

0x88f5,	// (0x0002a56e) bg_vkb2_func_pane_cp07

0xe266,	// (0x0002fedf) bg_vkb2_func_pane_cp11_ParamLimits

0xe266,	// (0x0002fedf) bg_vkb2_func_pane_cp11

0xe27b,	// (0x0002fef4) bg_vkb2_func_pane_cp12_ParamLimits

0xe27b,	// (0x0002fef4) bg_vkb2_func_pane_cp12

0x336d,	// (0x00024fe6) bg_vkb2_func_pane_cp09

0xdb6a,	// (0x0002f7e3) bg_vkb2_func_pane_g1

0xabc8,	// (0x0002c841) bg_vkb2_func_pane_g2

0xdb72,	// (0x0002f7eb) bg_vkb2_func_pane_g3

0xdb7a,	// (0x0002f7f3) bg_vkb2_func_pane_g4

0xddfb,	// (0x0002fa74) bg_vkb2_func_pane_g5

0xdb92,	// (0x0002f80b) bg_vkb2_func_pane_g6

0xdb9a,	// (0x0002f813) bg_vkb2_func_pane_g7

0xdb8a,	// (0x0002f803) bg_vkb2_func_pane_g8

0xaba8,	// (0x0002c821) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x000317e0) bg_vkb2_func_pane_g

0x8c1d,	// (0x0002a896) blid2_tripm_pane_g6_ParamLimits

0x8c1d,	// (0x0002a896) blid2_tripm_pane_g6

0xd8ff,	// (0x0002f578) mp4_progress_pane_g1

0x8c8c,	// (0x0002a905) blid2_tripm_values_pane_ParamLimits

0x8c8c,	// (0x0002a905) blid2_tripm_values_pane

0x8d7b,	// (0x0002a9f4) blid2_tripm_values_pane_t1

0x8d89,	// (0x0002aa02) blid2_tripm_values_pane_t2

0x8d97,	// (0x0002aa10) blid2_tripm_values_pane_t3

0x8da5,	// (0x0002aa1e) blid2_tripm_values_pane_t4

0x8db3,	// (0x0002aa2c) blid2_tripm_values_pane_t5

0x8dc1,	// (0x0002aa3a) blid2_tripm_values_pane_t6

0x8dcf,	// (0x0002aa48) blid2_tripm_values_pane_t7

0x8ddd,	// (0x0002aa56) blid2_tripm_values_pane_t8

0x8deb,	// (0x0002aa64) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x000317f3) blid2_tripm_values_pane_t

0x4a66,	// (0x000266df) call_video_pane_t1_ParamLimits

0x4a78,	// (0x000266f1) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00030f1a) call_video_pane_t_ParamLimits

0x5e23,	// (0x00027a9c) msg_header_pane_g1_ParamLimits

0xb616,	// (0x0002d28f) msg_header_pane_g2_ParamLimits

0xb616,	// (0x0002d28f) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00031134) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00031134) msg_header_pane_g

0x3f6f,	// (0x00025be8) main_clock2_pane_ParamLimits

0x7756,	// (0x000293cf) grid_clock2_toolbar_pane_ParamLimits

0x7756,	// (0x000293cf) grid_clock2_toolbar_pane

0x7756,	// (0x000293cf) listscroll_clock2_pane_ParamLimits

0x7756,	// (0x000293cf) listscroll_clock2_pane

0x7825,	// (0x0002949e) main_clock2_pane_t3_ParamLimits

0x7825,	// (0x0002949e) main_clock2_pane_t3

0x783e,	// (0x000294b7) main_clock2_pane_t4_ParamLimits

0x783e,	// (0x000294b7) main_clock2_pane_t4

0xe327,	// (0x0002ffa0) cell_clock2_toolbar_pane

0xe32f,	// (0x0002ffa8) cell_clock2_toolbar_pane_cp01

0xe32f,	// (0x0002ffa8) cell_clock2_toolbar_pane_cp02

0xe337,	// (0x0002ffb0) cell_clock2_toolbar_pane_cp03

0xe33f,	// (0x0002ffb8) list_clock2_pane

0xb2b4,	// (0x0002cf2d) scroll_pane_cp10

0xe347,	// (0x0002ffc0) list_single_clock2_pane_ParamLimits

0xe347,	// (0x0002ffc0) list_single_clock2_pane

0xb473,	// (0x0002d0ec) list_highlight_pane_cp08

0xe354,	// (0x0002ffcd) list_single_clock2_pane_t1

0xe362,	// (0x0002ffdb) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x00031806) list_single_clock2_pane_t

0x336d,	// (0x00024fe6) bg_button_pane_cp10

0xe370,	// (0x0002ffe9) cell_clock2_toolbar_pane_g1

0x2527,	// (0x000241a0) aid_main_viewer_pane_g1_ParamLimits

0x2527,	// (0x000241a0) aid_main_viewer_pane_g1

0x2533,	// (0x000241ac) aid_main_viewer_pane_g2_ParamLimits

0x2533,	// (0x000241ac) aid_main_viewer_pane_g2

0x5e41,	// (0x00027aba) aid_main_viewer_pane_g3_ParamLimits

0x5e41,	// (0x00027aba) aid_main_viewer_pane_g3

0x5e50,	// (0x00027ac9) aid_main_viewer_pane_g4_ParamLimits

0x5e50,	// (0x00027ac9) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00031145) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00031145) aid_main_viewer_pane_g

0x3597,	// (0x00025210) main_calc_pane_ParamLimits

0x662c,	// (0x000282a5) main_dialer2_pane_ParamLimits

0x336d,	// (0x00024fe6) main_cam6_pane

0x336d,	// (0x00024fe6) main_vid6_pane

0x7762,	// (0x000293db) listscroll_gen_pane_cp06_ParamLimits

0x7762,	// (0x000293db) listscroll_gen_pane_cp06

0x7857,	// (0x000294d0) main_clock2_pane_t5_ParamLimits

0x7857,	// (0x000294d0) main_clock2_pane_t5

0x78ac,	// (0x00029525) aid_call2_pane_cp10_ParamLimits

0x78be,	// (0x00029537) aid_call_pane_cp10_ParamLimits

0xb340,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb340,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x78d0,	// (0x00029549) popup_clock_analogue_window_cp10_g3_ParamLimits

0x78d0,	// (0x00029549) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb340,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x0003148e) popup_clock_analogue_window_cp10_g_ParamLimits

0x78e2,	// (0x0002955b) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd969,	// (0x0002f5e2) cell_dialer2_keypad_pane_g2_ParamLimits

0xd969,	// (0x0002f5e2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x00031574) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x00031574) cell_dialer2_keypad_pane_g

0x7d43,	// (0x000299bc) cell_dialer2_keypad_pane_t1

0x81d8,	// (0x00029e51) main_cset_text2_pane_ParamLimits

0x81d8,	// (0x00029e51) main_cset_text2_pane

0xe03a,	// (0x0002fcb3) area_vitu2_query_pane_g1_ParamLimits

0x888d,	// (0x0002a506) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x00031723) area_vitu2_query_pane_g_ParamLimits

0xe0be,	// (0x0002fd37) area_vitu2_query_pane_t7_ParamLimits

0xe0be,	// (0x0002fd37) area_vitu2_query_pane_t7

0x88e8,	// (0x0002a561) bg_button_pane_cp018_ParamLimits

0x88f5,	// (0x0002a56e) bg_button_pane_cp021_ParamLimits

0x8901,	// (0x0002a57a) bg_button_pane_cp022_ParamLimits

0x8901,	// (0x0002a57a) bg_vkb2_func_pane_cp08_ParamLimits

0x88e8,	// (0x0002a561) bg_vkb2_func_pane_cp06_ParamLimits

0x88f5,	// (0x0002a56e) bg_vkb2_func_pane_cp07_ParamLimits

0x8910,	// (0x0002a589) input_focus_pane_cp09_ParamLimits

0xe378,	// (0x0002fff1) cam6_autofocus_pane_ParamLimits

0xe378,	// (0x0002fff1) cam6_autofocus_pane

0x330c,	// (0x00024f85) cam6_image_uncrop_pane_ParamLimits

0x330c,	// (0x00024f85) cam6_image_uncrop_pane

0x3319,	// (0x00024f92) cam6_indi_pane_ParamLimits

0x3319,	// (0x00024f92) cam6_indi_pane

0x332f,	// (0x00024fa8) cam6_mode_pane_ParamLimits

0x332f,	// (0x00024fa8) cam6_mode_pane

0x3341,	// (0x00024fba) cam6_timer_pane_ParamLimits

0x3341,	// (0x00024fba) cam6_timer_pane

0x334d,	// (0x00024fc6) cam6_zoom_pane_ParamLimits

0x334d,	// (0x00024fc6) cam6_zoom_pane

0x8df9,	// (0x0002aa72) cam6_mode_pane_g1_ParamLimits

0x8df9,	// (0x0002aa72) cam6_mode_pane_g1

0x8e09,	// (0x0002aa82) cam6_mode_pane_g2_ParamLimits

0x8e09,	// (0x0002aa82) cam6_mode_pane_g2

0x8e19,	// (0x0002aa92) cam6_mode_pane_g3_ParamLimits

0x8e19,	// (0x0002aa92) cam6_mode_pane_g3

0x8e29,	// (0x0002aaa2) cam6_mode_pane_g4_ParamLimits

0x8e29,	// (0x0002aaa2) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x0003180b) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x0003180b) cam6_mode_pane_g

0xe384,	// (0x0002fffd) bg_tb_trans_pane_cp08_ParamLimits

0xe384,	// (0x0002fffd) bg_tb_trans_pane_cp08

0xe392,	// (0x0003000b) cam6_battery_pane_ParamLimits

0xe392,	// (0x0003000b) cam6_battery_pane

0xe3a8,	// (0x00030021) cam6_indi_pane_g1_ParamLimits

0xe3a8,	// (0x00030021) cam6_indi_pane_g1

0xe3ba,	// (0x00030033) cam6_indi_pane_g2_ParamLimits

0xe3ba,	// (0x00030033) cam6_indi_pane_g2

0xe3cc,	// (0x00030045) cam6_indi_pane_g3_ParamLimits

0xe3cc,	// (0x00030045) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x00031814) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x00031814) cam6_indi_pane_g

0xe3de,	// (0x00030057) cam6_indi_pane_t1_ParamLimits

0xe3de,	// (0x00030057) cam6_indi_pane_t1

0x7eee,	// (0x00029b67) cam6_autofocus_pane_g1

0x7ee6,	// (0x00029b5f) cam6_autofocus_pane_g2

0x7efe,	// (0x00029b77) cam6_autofocus_pane_g3

0x7ef6,	// (0x00029b6f) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x0003181b) cam6_autofocus_pane_g

0xe404,	// (0x0003007d) cam6_timer_pane_g1

0xe40c,	// (0x00030085) cam6_timer_pane_t1

0xe41a,	// (0x00030093) cam6_zoom_cont_pane

0xe422,	// (0x0003009b) cam6_zoom_pane_g1

0xe42a,	// (0x000300a3) cam6_zoom_pane_g2

0x8e39,	// (0x0002aab2) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x00031824) cam6_zoom_pane_g

0xce5e,	// (0x0002ead7) cam6_battery_pane_g1

0xce5e,	// (0x0002ead7) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x0003139b) cam6_battery_pane_g

0xe432,	// (0x000300ab) cam6_zoom_cont_pane_g1

0xe43b,	// (0x000300b4) cam6_zoom_cont_pane_g2

0xe444,	// (0x000300bd) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x0003182b) cam6_zoom_cont_pane_g

0x8e56,	// (0x0002aacf) cam6_mode_pane_cp_ParamLimits

0x8e56,	// (0x0002aacf) cam6_mode_pane_cp

0x8e68,	// (0x0002aae1) cam6_zoom_pane_cp_ParamLimits

0x8e68,	// (0x0002aae1) cam6_zoom_pane_cp

0x8e74,	// (0x0002aaed) vid6_image_uncrop_cif_pane_ParamLimits

0x8e74,	// (0x0002aaed) vid6_image_uncrop_cif_pane

0x8e82,	// (0x0002aafb) vid6_image_uncrop_nhd_pane_ParamLimits

0x8e82,	// (0x0002aafb) vid6_image_uncrop_nhd_pane

0x8e8f,	// (0x0002ab08) vid6_image_uncrop_vga_pane_ParamLimits

0x8e8f,	// (0x0002ab08) vid6_image_uncrop_vga_pane

0x8e9c,	// (0x0002ab15) vid6_image_uncrop_wvga_pane_ParamLimits

0x8e9c,	// (0x0002ab15) vid6_image_uncrop_wvga_pane

0x8ea9,	// (0x0002ab22) vid6_indi_pane_ParamLimits

0x8ea9,	// (0x0002ab22) vid6_indi_pane

0xe384,	// (0x0002fffd) bg_tb_trans_pane_cp09_ParamLimits

0xe384,	// (0x0002fffd) bg_tb_trans_pane_cp09

0xe458,	// (0x000300d1) cam6_battery_pane_cp_ParamLimits

0xe458,	// (0x000300d1) cam6_battery_pane_cp

0xe464,	// (0x000300dd) vid6_indi_pane_g1_ParamLimits

0xe464,	// (0x000300dd) vid6_indi_pane_g1

0xe476,	// (0x000300ef) vid6_indi_pane_g2_ParamLimits

0xe476,	// (0x000300ef) vid6_indi_pane_g2

0xe488,	// (0x00030101) vid6_indi_pane_g3_ParamLimits

0xe488,	// (0x00030101) vid6_indi_pane_g3

0xe49d,	// (0x00030116) vid6_indi_pane_g4_ParamLimits

0xe49d,	// (0x00030116) vid6_indi_pane_g4

0xe4b2,	// (0x0003012b) vid6_indi_pane_g5_ParamLimits

0xe4b2,	// (0x0003012b) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x00031832) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x00031832) vid6_indi_pane_g

0xe4cc,	// (0x00030145) vid6_indi_pane_t1_ParamLimits

0xe4cc,	// (0x00030145) vid6_indi_pane_t1

0xe4e2,	// (0x0003015b) vid6_indi_pane_t2_ParamLimits

0xe4e2,	// (0x0003015b) vid6_indi_pane_t2

0xe50a,	// (0x00030183) vid6_indi_pane_t3_ParamLimits

0xe50a,	// (0x00030183) vid6_indi_pane_t3

0xe532,	// (0x000301ab) vid6_indi_pane_t4_ParamLimits

0xe532,	// (0x000301ab) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x0003183d) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x0003183d) vid6_indi_pane_t

0xe556,	// (0x000301cf) wait_bar_pane_cp08

0x8ec0,	// (0x0002ab39) main_cset_text2_pane_t1_ParamLimits

0x8ec0,	// (0x0002ab39) main_cset_text2_pane_t1

0x8e41,	// (0x0002aaba) listscroll_gen_pane_cp06_t1_ParamLimits

0x8e41,	// (0x0002aaba) listscroll_gen_pane_cp06_t1

0x336d,	// (0x00024fe6) main_cam6_set_pane

0xda78,	// (0x0002f6f1) bg_tb_trans_pane_cp06_ParamLimits

0xda8e,	// (0x0002f707) cam4_indicators_pane_g1_ParamLimits

0xda9e,	// (0x0002f717) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x000315b1) cam4_indicators_pane_g_ParamLimits

0xdabe,	// (0x0002f737) cam4_indicators_pane_t1_ParamLimits

0xdae0,	// (0x0002f759) bg_tb_trans_pane_cp07_ParamLimits

0x2e89,	// (0x00024b02) vid4_indicators_pane_g1_ParamLimits

0x2e96,	// (0x00024b0f) vid4_indicators_pane_g2_ParamLimits

0x2ea3,	// (0x00024b1c) vid4_indicators_pane_g3_ParamLimits

0x2eb0,	// (0x00024b29) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x000315c3) vid4_indicators_pane_g_ParamLimits

0x2ec8,	// (0x00024b41) vid4_indicators_pane_t1_ParamLimits

0xe13c,	// (0x0002fdb5) vid4_progress_pane_g1_ParamLimits

0xe14b,	// (0x0002fdc4) vid4_progress_pane_g2_ParamLimits

0xe15a,	// (0x0002fdd3) vid4_progress_pane_g3_ParamLimits

0xe169,	// (0x0002fde2) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x0003176e) vid4_progress_pane_g_ParamLimits

0xe181,	// (0x0002fdfa) vid4_progress_pane_t1_ParamLimits

0xe197,	// (0x0002fe10) vid4_progress_pane_t2_ParamLimits

0xe1ac,	// (0x0002fe25) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x00031779) vid4_progress_pane_t_ParamLimits

0xe1c1,	// (0x0002fe3a) wait_bar_pane_cp07_ParamLimits

0x8eda,	// (0x0002ab53) main_cam6_set_pane_g2_ParamLimits

0x8eda,	// (0x0002ab53) main_cam6_set_pane_g2

0x8efc,	// (0x0002ab75) main_cset6_listscroll_pane_ParamLimits

0x8efc,	// (0x0002ab75) main_cset6_listscroll_pane

0x8f16,	// (0x0002ab8f) main_cset6_slider_pane_ParamLimits

0x8f16,	// (0x0002ab8f) main_cset6_slider_pane

0x8f2c,	// (0x0002aba5) main_cset6_text2_pane_ParamLimits

0x8f2c,	// (0x0002aba5) main_cset6_text2_pane

0xe566,	// (0x000301df) main_cset6_text_pane

0xdc60,	// (0x0002f8d9) main_cset_list_pane_copy1_ParamLimits

0xdc60,	// (0x0002f8d9) main_cset_list_pane_copy1

0xdc70,	// (0x0002f8e9) scroll_pane_cp028_copy1

0x8f3a,	// (0x0002abb3) cset_list_set_pane_copy1

0x8f4c,	// (0x0002abc5) aid_position_infowindow_above_copy1

0x8f54,	// (0x0002abcd) aid_position_infowindow_below_copy1

0x8f5c,	// (0x0002abd5) cset_list_set_pane_g1_copy1

0x8f64,	// (0x0002abdd) cset_list_set_pane_g3_copy1_ParamLimits

0x8f64,	// (0x0002abdd) cset_list_set_pane_g3_copy1

0x8f73,	// (0x0002abec) cset_list_set_pane_t1_copy1_ParamLimits

0x8f73,	// (0x0002abec) cset_list_set_pane_t1_copy1

0x3597,	// (0x00025210) list_highlight_pane_cp021_copy1_ParamLimits

0x3597,	// (0x00025210) list_highlight_pane_cp021_copy1

0xe56e,	// (0x000301e7) cset6_slider_pane_ParamLimits

0xe56e,	// (0x000301e7) cset6_slider_pane

0xe59a,	// (0x00030213) main_cset6_slider_pane_g1_ParamLimits

0xe59a,	// (0x00030213) main_cset6_slider_pane_g1

0x8f88,	// (0x0002ac01) main_cset6_slider_pane_g2_ParamLimits

0x8f88,	// (0x0002ac01) main_cset6_slider_pane_g2

0xdc85,	// (0x0002f8fe) main_cset6_slider_pane_g3_ParamLimits

0xdc85,	// (0x0002f8fe) main_cset6_slider_pane_g3

0x829d,	// (0x00029f16) main_cset6_slider_pane_g4_ParamLimits

0x829d,	// (0x00029f16) main_cset6_slider_pane_g4

0x82e5,	// (0x00029f5e) main_cset6_slider_pane_g5_ParamLimits

0x82e5,	// (0x00029f5e) main_cset6_slider_pane_g5

0xdc85,	// (0x0002f8fe) main_cset6_slider_pane_g7_ParamLimits

0xdc85,	// (0x0002f8fe) main_cset6_slider_pane_g7

0xdc91,	// (0x0002f90a) main_cset6_slider_pane_g8_ParamLimits

0xdc91,	// (0x0002f90a) main_cset6_slider_pane_g8

0x8285,	// (0x00029efe) main_cset6_slider_pane_g9_ParamLimits

0x8285,	// (0x00029efe) main_cset6_slider_pane_g9

0x8291,	// (0x00029f0a) main_cset6_slider_pane_g10_ParamLimits

0x8291,	// (0x00029f0a) main_cset6_slider_pane_g10

0x829d,	// (0x00029f16) main_cset6_slider_pane_g11_ParamLimits

0x829d,	// (0x00029f16) main_cset6_slider_pane_g11

0x82a9,	// (0x00029f22) main_cset6_slider_pane_g12_ParamLimits

0x82a9,	// (0x00029f22) main_cset6_slider_pane_g12

0x82b5,	// (0x00029f2e) main_cset6_slider_pane_g13_ParamLimits

0x82b5,	// (0x00029f2e) main_cset6_slider_pane_g13

0x82c1,	// (0x00029f3a) main_cset6_slider_pane_g14_ParamLimits

0x82c1,	// (0x00029f3a) main_cset6_slider_pane_g14

0x8fb0,	// (0x0002ac29) main_cset6_slider_pane_g15_ParamLimits

0x8fb0,	// (0x0002ac29) main_cset6_slider_pane_g15

0x82e5,	// (0x00029f5e) main_cset6_slider_pane_g16_ParamLimits

0x82e5,	// (0x00029f5e) main_cset6_slider_pane_g16

0x82f1,	// (0x00029f6a) main_cset6_slider_pane_g17_ParamLimits

0x82f1,	// (0x00029f6a) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x00031846) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x00031846) main_cset6_slider_pane_g

0xe5c2,	// (0x0003023b) main_cset6_slider_pane_t1_ParamLimits

0xe5c2,	// (0x0003023b) main_cset6_slider_pane_t1

0xe603,	// (0x0003027c) main_cset6_slider_pane_t2_ParamLimits

0xe603,	// (0x0003027c) main_cset6_slider_pane_t2

0xe62e,	// (0x000302a7) main_cset6_slider_pane_t3_ParamLimits

0xe62e,	// (0x000302a7) main_cset6_slider_pane_t3

0x8fc8,	// (0x0002ac41) main_cset6_slider_pane_t4_ParamLimits

0x8fc8,	// (0x0002ac41) main_cset6_slider_pane_t4

0x8ff3,	// (0x0002ac6c) main_cset6_slider_pane_t5_ParamLimits

0x8ff3,	// (0x0002ac6c) main_cset6_slider_pane_t5

0xe659,	// (0x000302d2) main_cset6_slider_pane_t7_ParamLimits

0xe659,	// (0x000302d2) main_cset6_slider_pane_t7

0x901e,	// (0x0002ac97) main_cset6_slider_pane_t8_ParamLimits

0x901e,	// (0x0002ac97) main_cset6_slider_pane_t8

0x9042,	// (0x0002acbb) main_cset6_slider_pane_t9_ParamLimits

0x9042,	// (0x0002acbb) main_cset6_slider_pane_t9

0x9066,	// (0x0002acdf) main_cset6_slider_pane_t10_ParamLimits

0x9066,	// (0x0002acdf) main_cset6_slider_pane_t10

0x908a,	// (0x0002ad03) main_cset6_slider_pane_t11_ParamLimits

0x908a,	// (0x0002ad03) main_cset6_slider_pane_t11

0xe68f,	// (0x00030308) main_cset6_slider_pane_t14_ParamLimits

0xe68f,	// (0x00030308) main_cset6_slider_pane_t14

0xe6c8,	// (0x00030341) main_cset6_slider_pane_t15_ParamLimits

0xe6c8,	// (0x00030341) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x0003186b) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x0003186b) main_cset6_slider_pane_t

0xe701,	// (0x0003037a) cset_slider_pane_g1_copy1

0xe70a,	// (0x00030383) cset_slider_pane_g2_copy1

0xe713,	// (0x0003038c) cset_slider_pane_g3_copy1

0x336d,	// (0x00024fe6) bg_popup_sub_pane_cp011_copy1

0xde6c,	// (0x0002fae5) main_cset_text_pane_g1_copy1

0xde74,	// (0x0002faed) main_cset_text_pane_t1_copy1

0xde82,	// (0x0002fafb) main_cset_text_pane_t2_copy1

0xde90,	// (0x0002fb09) main_cset_text_pane_t3_copy1

0xde9e,	// (0x0002fb17) main_cset_text_pane_t4_copy1

0xdeac,	// (0x0002fb25) main_cset_text_pane_t5_copy1

0xdeba,	// (0x0002fb33) main_cset_text_pane_t6_copy1

0xdec8,	// (0x0002fb41) main_cset_text_pane_t7_copy1

0x90ae,	// (0x0002ad27) main_cset_text2_pane_t1_copy1

0x336d,	// (0x00024fe6) main_ncimui_pane

0x683a,	// (0x000284b3) popup_query_ncimui_window_ParamLimits

0x683a,	// (0x000284b3) popup_query_ncimui_window

0xd12e,	// (0x0002eda7) field_cale_ev2_pane_g4_ParamLimits

0xd12e,	// (0x0002eda7) field_cale_ev2_pane_g4

0x7ccc,	// (0x00029945) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7ccc,	// (0x00029945) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x0003154f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x0003154f) cell_video_dialer_keypad_pane_g

0x7ce4,	// (0x0002995d) cell_video_dialer_keypad_pane_t1

0x336d,	// (0x00024fe6) bg_popup_window_pane_cp012

0xb18d,	// (0x0002ce06) heading_pane_cp06

0xe805,	// (0x0003047e) ncim_query_content_pane

0x336d,	// (0x00024fe6) bg_popup_heading_pane_cp01

0xe80d,	// (0x00030486) ncim_heading_pane_t1

0xe81b,	// (0x00030494) ncim_indicator_popup_pane

0xe82d,	// (0x000304a6) ncim_query_button_pane

0xe841,	// (0x000304ba) ncim_query_content_pane_t1

0xe853,	// (0x000304cc) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x000318aa) ncim_query_content_pane_t

0xe88d,	// (0x00030506) ncim_query_list_pane

0xe89f,	// (0x00030518) ncim_query_popup_pane

0xe81b,	// (0x00030494) ncim_indicator_popup_pane_ParamLimits

0x918e,	// (0x0002ae07) ncim_query_content_pane_g1_ParamLimits

0x918e,	// (0x0002ae07) ncim_query_content_pane_g1

0xe841,	// (0x000304ba) ncim_query_content_pane_t1_ParamLimits

0xe853,	// (0x000304cc) ncim_query_content_pane_t2_ParamLimits

0x919a,	// (0x0002ae13) ncim_query_content_pane_t3_ParamLimits

0x919a,	// (0x0002ae13) ncim_query_content_pane_t3

0x91c2,	// (0x0002ae3b) ncim_query_content_pane_t4_ParamLimits

0x91c2,	// (0x0002ae3b) ncim_query_content_pane_t4

0x91ea,	// (0x0002ae63) ncim_query_content_pane_t5_ParamLimits

0x91ea,	// (0x0002ae63) ncim_query_content_pane_t5

0xe865,	// (0x000304de) ncim_query_content_pane_t6_ParamLimits

0xe865,	// (0x000304de) ncim_query_content_pane_t6

0xfc31,	// (0x000318aa) ncim_query_content_pane_t_ParamLimits

0xe88d,	// (0x00030506) ncim_query_list_pane_ParamLimits

0xe89f,	// (0x00030518) ncim_query_popup_pane_ParamLimits

0xe8b3,	// (0x0003052c) wait_bar_pane_cp04

0x336d,	// (0x00024fe6) input_focus_pane_cp011

0xe8bb,	// (0x00030534) ncim_query_popup_pane_t1

0xe8c9,	// (0x00030542) ncim_list_query_list_pane_ParamLimits

0xe8c9,	// (0x00030542) ncim_list_query_list_pane

0x336d,	// (0x00024fe6) bg_button_pane_cp027

0xe8dc,	// (0x00030555) ncim_query_button_pane_g1

0x336d,	// (0x00024fe6) list_highlight_pane_cp012

0xe8e6,	// (0x0003055f) ncim_list_query_list_pane_g1

0xe8ee,	// (0x00030567) ncim_list_query_list_pane_t1

0xdaae,	// (0x0002f727) cam4_indicators_pane_g3_ParamLimits

0xdaae,	// (0x0002f727) cam4_indicators_pane_g3

0x2ebc,	// (0x00024b35) vid4_indicators_pane_g5_ParamLimits

0x2ebc,	// (0x00024b35) vid4_indicators_pane_g5

0xe175,	// (0x0002fdee) vid4_progress_pane_g5_ParamLimits

0xe175,	// (0x0002fdee) vid4_progress_pane_g5

0x90d8,	// (0x0002ad51) main_ncimui_pane_g1

0x911e,	// (0x0002ad97) ncimui_group_query_pane_ParamLimits

0x911e,	// (0x0002ad97) ncimui_group_query_pane

0x9152,	// (0x0002adcb) ncimui_list_pane_ParamLimits

0x9152,	// (0x0002adcb) ncimui_list_pane

0x916a,	// (0x0002ade3) ncimui_text_pane_ParamLimits

0x916a,	// (0x0002ade3) ncimui_text_pane

0x9212,	// (0x0002ae8b) ncimui_text_pane_t1_ParamLimits

0x9212,	// (0x0002ae8b) ncimui_text_pane_t1

0xe905,	// (0x0003057e) ncimui_list_single_graphic_pane_ParamLimits

0xe905,	// (0x0003057e) ncimui_list_single_graphic_pane

0x9238,	// (0x0002aeb1) ncimui_query_pane_ParamLimits

0x9238,	// (0x0002aeb1) ncimui_query_pane

0x336d,	// (0x00024fe6) list_highlight_pane_cp013

0xe912,	// (0x0003058b) ncim_list_query_list_pane_t1_copy1

0xe920,	// (0x00030599) ncim_list_single_graphic_pane_g1

0xe928,	// (0x000305a1) ncim_query_button_pane_cp01

0xe930,	// (0x000305a9) ncim_query_entry_pane_ParamLimits

0xe930,	// (0x000305a9) ncim_query_entry_pane

0xe940,	// (0x000305b9) ncimui_query_pane_g1

0xe948,	// (0x000305c1) ncimui_query_pane_t1_ParamLimits

0xe948,	// (0x000305c1) ncimui_query_pane_t1

0x336d,	// (0x00024fe6) input_focus_pane_cp012

0xe8bb,	// (0x00030534) ncim_query_entry_pane_t1

0x3f6f,	// (0x00025be8) main_im_pane_ParamLimits

0x3597,	// (0x00025210) main_mobtv_pane_ParamLimits

0x3597,	// (0x00025210) main_mobtv_pane

0x8285,	// (0x00029efe) main_cset6_slider_pane_g18_ParamLimits

0x8285,	// (0x00029efe) main_cset6_slider_pane_g18

0x82b5,	// (0x00029f2e) main_cset6_slider_pane_g19_ParamLimits

0x82b5,	// (0x00029f2e) main_cset6_slider_pane_g19

0xe95e,	// (0x000305d7) bg_main_mobtv_pane_ParamLimits

0xe95e,	// (0x000305d7) bg_main_mobtv_pane

0x9248,	// (0x0002aec1) main_mobtv_info_pane

0x9251,	// (0x0002aeca) main_mobtv_loading_pane_ParamLimits

0x9251,	// (0x0002aeca) main_mobtv_loading_pane

0xe96c,	// (0x000305e5) main_mobtv_pg_channel_list_pane

0xe976,	// (0x000305ef) main_mobtv_pg_hdr_pane

0x925e,	// (0x0002aed7) main_mobtv_programe_curr_pane_ParamLimits

0x925e,	// (0x0002aed7) main_mobtv_programe_curr_pane

0x926b,	// (0x0002aee4) main_mobtv_programe_next_pane_ParamLimits

0x926b,	// (0x0002aee4) main_mobtv_programe_next_pane

0xe97f,	// (0x000305f8) popup_mobtv_noti_window

0xce5e,	// (0x0002ead7) main_tv_pg_hdr_pane_g1

0xe987,	// (0x00030600) main_tv_pg_hdr_pane_g2

0xe98f,	// (0x00030608) main_tv_pg_hdr_pane_g3

0xe997,	// (0x00030610) main_tv_pg_hdr_pane_g4

0xe99f,	// (0x00030618) main_tv_pg_hdr_pane_g5

0xe9a7,	// (0x00030620) main_tv_pg_hdr_pane_g6

0xe9af,	// (0x00030628) main_tv_pg_hdr_pane_g7

0xe9b7,	// (0x00030630) main_tv_pg_hdr_pane_g8

0xe9bf,	// (0x00030638) main_tv_pg_hdr_pane_g9

0xe9c7,	// (0x00030640) main_tv_pg_hdr_pane_g10

0xe9d1,	// (0x0003064a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x000318b7) main_tv_pg_hdr_pane_g

0xe9db,	// (0x00030654) main_tv_pg_hdr_pane_t1

0xe9e9,	// (0x00030662) main_tv_pg_hdr_pane_t2

0xe9f7,	// (0x00030670) main_tv_pg_hdr_pane_t3

0xea05,	// (0x0003067e) main_tv_pg_hdr_pane_t4

0xea13,	// (0x0003068c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x000318ce) main_tv_pg_hdr_pane_t

0xea21,	// (0x0003069a) single_mobtv_pg_channel_pane_ParamLimits

0xea21,	// (0x0003069a) single_mobtv_pg_channel_pane

0xea33,	// (0x000306ac) single_mobtv_pg_channel_table_pane

0xea3c,	// (0x000306b5) single_mobtv_pg_channel_thumb_pane

0xea45,	// (0x000306be) single_tv_pg_channel_pane_g1

0xea4e,	// (0x000306c7) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x000318d9) single_tv_pg_channel_pane_g

0xd08d,	// (0x0002ed06) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd08d,	// (0x0002ed06) bg_single_mobtv_pg_channel_thumb_pane

0xea57,	// (0x000306d0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xea57,	// (0x000306d0) single_mobtv_pg_channel_thumb_pane_g1

0xea65,	// (0x000306de) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xea65,	// (0x000306de) single_mobtv_pg_channel_thumb_pane_g2

0xea71,	// (0x000306ea) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xea71,	// (0x000306ea) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x000318de) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x000318de) single_mobtv_pg_channel_thumb_pane_g

0xea7d,	// (0x000306f6) single_mobtv_pg_channel_thumb_pane_t1

0xea8b,	// (0x00030704) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x000318e5) single_mobtv_pg_channel_thumb_pane_t

0xce5e,	// (0x0002ead7) bg_single_mobtv_pg_channel_table_pane_g1

0xce5e,	// (0x0002ead7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x0003139b) bg_single_mobtv_pg_channel_table_pane_g

0xea99,	// (0x00030712) single_mobtv_pg_channel_table_pane_t1

0xeaa7,	// (0x00030720) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x000318ea) single_mobtv_pg_channel_table_pane_t

0x9280,	// (0x0002aef9) main_mobtv_info_pane_g1_ParamLimits

0x9280,	// (0x0002aef9) main_mobtv_info_pane_g1

0x929c,	// (0x0002af15) main_mobtv_info_pane_t1_ParamLimits

0x929c,	// (0x0002af15) main_mobtv_info_pane_t1

0x9302,	// (0x0002af7b) main_mobtv_info_pane_t2_ParamLimits

0x9302,	// (0x0002af7b) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x000318f4) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x000318f4) main_mobtv_info_pane_t

0x9385,	// (0x0002affe) wait_bar_pane_cp05

0x9395,	// (0x0002b00e) main_mobtv_loading_pane_g1_ParamLimits

0x9395,	// (0x0002b00e) main_mobtv_loading_pane_g1

0x93a6,	// (0x0002b01f) main_mobtv_loading_pane_g2_ParamLimits

0x93a6,	// (0x0002b01f) main_mobtv_loading_pane_g2

0x93b2,	// (0x0002b02b) main_mobtv_loading_pane_g3_ParamLimits

0x93b2,	// (0x0002b02b) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x000318fb) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x000318fb) main_mobtv_loading_pane_g

0xeab5,	// (0x0003072e) main_mobtv_loading_pane_t1_ParamLimits

0xeab5,	// (0x0003072e) main_mobtv_loading_pane_t1

0xeacd,	// (0x00030746) main_mobtv_loading_pane_t2_ParamLimits

0xeacd,	// (0x00030746) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x00031902) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x00031902) main_mobtv_loading_pane_t

0x93c3,	// (0x0002b03c) wait_bar_pane_cp06_ParamLimits

0x93c3,	// (0x0002b03c) wait_bar_pane_cp06

0xeaf1,	// (0x0003076a) main_mobtv_programe_curr_pane_t1

0xeaff,	// (0x00030778) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x00031907) main_mobtv_programe_curr_pane_t

0xeb0d,	// (0x00030786) main_mobtv_programe_next_pane_t1

0xeb1b,	// (0x00030794) main_mobtv_programe_next_pane_t2

0xeb29,	// (0x000307a2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x0003190c) main_mobtv_programe_next_pane_t

0x336d,	// (0x00024fe6) bg_popup_mobtv_noti_window_pane

0xeb37,	// (0x000307b0) popup_mobtv_noti_window_g1

0xeb3f,	// (0x000307b8) popup_mobtv_noti_window_t1

0xeb4d,	// (0x000307c6) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x00031913) popup_mobtv_noti_window_t

0xce5e,	// (0x0002ead7) bg_popup_mobtv_noti_window_pane_g1

0x336d,	// (0x00024fe6) sc_clock_pane

0x336d,	// (0x00024fe6) main_fs_bigclock_pane

0x8c76,	// (0x0002a8ef) blid2_tripm_pane_t4_ParamLimits

0x8c76,	// (0x0002a8ef) blid2_tripm_pane_t4

0x93d2,	// (0x0002b04b) sc_clock_pane_g1_ParamLimits

0x93d2,	// (0x0002b04b) sc_clock_pane_g1

0x93e4,	// (0x0002b05d) sc_clock_pane_t1_ParamLimits

0x93e4,	// (0x0002b05d) sc_clock_pane_t1

0x9406,	// (0x0002b07f) sc_clock_pane_t2_ParamLimits

0x9406,	// (0x0002b07f) sc_clock_pane_t2

0x941c,	// (0x0002b095) sc_clock_pane_t3_ParamLimits

0x941c,	// (0x0002b095) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x00031918) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x00031918) sc_clock_pane_t

0xa0ff,	// (0x0002bd78) main_fs_bigclock_indicator_pane_ParamLimits

0xa0ff,	// (0x0002bd78) main_fs_bigclock_indicator_pane

0xd05d,	// (0x0002ecd6) main_fs_bigclock_pane_g1_ParamLimits

0xd05d,	// (0x0002ecd6) main_fs_bigclock_pane_g1

0xa10b,	// (0x0002bd84) main_fs_bigclock_pane_t1_ParamLimits

0xa10b,	// (0x0002bd84) main_fs_bigclock_pane_t1

0xa11d,	// (0x0002bd96) main_fs_bigclock_pane_t2_ParamLimits

0xa11d,	// (0x0002bd96) main_fs_bigclock_pane_t2

0xa12f,	// (0x0002bda8) main_fs_bigclock_pane_t3_ParamLimits

0xa12f,	// (0x0002bda8) main_fs_bigclock_pane_t3

0x0002,

0xfe94,	// (0x00031b0d) main_fs_bigclock_pane_t_ParamLimits

0xfe94,	// (0x00031b0d) main_fs_bigclock_pane_t

0x0944,	// (0x000225bd) main_fs_bigclock_indicator_pane_g1

0xe835,	// (0x000304ae) ncim_query_content_pane_g2_ParamLimits

0xe835,	// (0x000304ae) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x000318a5) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x000318a5) ncim_query_content_pane_g

0x9431,	// (0x0002b0aa) sc_clock_pane_t4_ParamLimits

0x9431,	// (0x0002b0aa) sc_clock_pane_t4

0x3597,	// (0x00025210) main_radioblah_pane

0xd9f2,	// (0x0002f66b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd9f2,	// (0x0002f66b) cell_call4_button_pane_t1_copy1

0x90e0,	// (0x0002ad59) main_ncimui_pane_t1_ParamLimits

0x90e0,	// (0x0002ad59) main_ncimui_pane_t1

0x90f2,	// (0x0002ad6b) main_ncimui_pane_t2_ParamLimits

0x90f2,	// (0x0002ad6b) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x0003189e) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x0003189e) main_ncimui_pane_t

0xec77,	// (0x000308f0) main_radioblah_anim_pane_ParamLimits

0xec77,	// (0x000308f0) main_radioblah_anim_pane

0xec88,	// (0x00030901) main_radioblah_info_pane_ParamLimits

0xec88,	// (0x00030901) main_radioblah_info_pane

0xec9c,	// (0x00030915) main_radioblah_pane_t1_ParamLimits

0xec9c,	// (0x00030915) main_radioblah_pane_t1

0xecb8,	// (0x00030931) main_radioblah_pane_t2_ParamLimits

0xecb8,	// (0x00030931) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x00031939) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x00031939) main_radioblah_pane_t

0x94c8,	// (0x0002b141) main_radioblah_rocker_ctrl_pane_ParamLimits

0x94c8,	// (0x0002b141) main_radioblah_rocker_ctrl_pane

0xed00,	// (0x00030979) main_radioblah_info_pane_t1_ParamLimits

0xed00,	// (0x00030979) main_radioblah_info_pane_t1

0x951c,	// (0x0002b195) main_radioblah_info_pane_t2_ParamLimits

0x951c,	// (0x0002b195) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x00031942) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x00031942) main_radioblah_info_pane_t

0xce5e,	// (0x0002ead7) main_radioblah_rocker_ctrl_pane_g1

0x95ca,	// (0x0002b243) main_radioblah_rocker_ctrl_pane_g2

0x95d2,	// (0x0002b24b) main_radioblah_rocker_ctrl_pane_g3

0x95da,	// (0x0002b253) main_radioblah_rocker_ctrl_pane_g4

0x95e2,	// (0x0002b25b) main_radioblah_rocker_ctrl_pane_g5

0x95ea,	// (0x0002b263) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x0003194b) main_radioblah_rocker_ctrl_pane_g

0x90ae,	// (0x0002ad27) main_cset_text2_pane_t1_copy1_ParamLimits

0xda70,	// (0x0002f6e9) cam4_image_uncrop_qvga_pane

0xdad8,	// (0x0002f751) vid4_image_uncrop_qcif_pane

0xe378,	// (0x0002fff1) cam6_image_uncrop_qvga_pane_ParamLimits

0xe378,	// (0x0002fff1) cam6_image_uncrop_qvga_pane

0xe44c,	// (0x000300c5) vid6_image_uncrop_qcif_pane_ParamLimits

0xe44c,	// (0x000300c5) vid6_image_uncrop_qcif_pane

0x336d,	// (0x00024fe6) bg_popup_preview_window_pane_cp03

0xe7e7,	// (0x00030460) list_cset_text2_pane

0xe7ef,	// (0x00030468) main_cset6_text2_pane_g1

0xe7f7,	// (0x00030470) main_cset6_text2_pane_t1

0x95f2,	// (0x0002b26b) list_cset_text2_pane_t1_ParamLimits

0x95f2,	// (0x0002b26b) list_cset_text2_pane_t1

0x3597,	// (0x00025210) main_radioblah_pane_ParamLimits

0x9373,	// (0x0002afec) main_mobtv_info_pane_t3_ParamLimits

0x9373,	// (0x0002afec) main_mobtv_info_pane_t3

0x94b6,	// (0x0002b12f) main_radioblah_pane_g1

0x94f0,	// (0x0002b169) main_radioblah_info_pane_g1

0x956f,	// (0x0002b1e8) main_radioblah_info_pane_t3_ParamLimits

0x956f,	// (0x0002b1e8) main_radioblah_info_pane_t3

0x5569,	// (0x000271e2) highlight_cell_cale_month_pane_ParamLimits

0x5569,	// (0x000271e2) highlight_cell_cale_month_pane

0x336d,	// (0x00024fe6) main_phob_fisheye_pane

0xd1d7,	// (0x0002ee50) scroll_pane_cp0031_ParamLimits

0xd1d7,	// (0x0002ee50) scroll_pane_cp0031

0xe556,	// (0x000301cf) wait_bar_pane_cp08_ParamLimits

0x8f3a,	// (0x0002abb3) cset_list_set_pane_copy1_ParamLimits

0xed3a,	// (0x000309b3) highlight_cell_cale_month_pane_g1

0x960b,	// (0x0002b284) highlight_cell_cale_month_pane_t1

0xed42,	// (0x000309bb) list_gen_pane_cp01

0xdc70,	// (0x0002f8e9) scroll_pane_01

0x9619,	// (0x0002b292) list_single_double_fisheye_pane

0x9622,	// (0x0002b29b) list_double_fisheye_pane_g1_ParamLimits

0x9622,	// (0x0002b29b) list_double_fisheye_pane_g1

0x962e,	// (0x0002b2a7) list_double_fisheye_pane_g2_ParamLimits

0x962e,	// (0x0002b2a7) list_double_fisheye_pane_g2

0x963a,	// (0x0002b2b3) list_double_fisheye_pane_g3_ParamLimits

0x963a,	// (0x0002b2b3) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x00031958) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x00031958) list_double_fisheye_pane_g

0x965e,	// (0x0002b2d7) list_double_fisheye_pane_t1_ParamLimits

0x965e,	// (0x0002b2d7) list_double_fisheye_pane_t1

0x9679,	// (0x0002b2f2) list_double_fisheye_pane_t2_ParamLimits

0x9679,	// (0x0002b2f2) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x00031963) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x00031963) list_double_fisheye_pane_t

0x336d,	// (0x00024fe6) main_call5_pane

0x945a,	// (0x0002b0d3) sc_swipe_pane_ParamLimits

0x945a,	// (0x0002b0d3) sc_swipe_pane

0x96ac,	// (0x0002b325) call5_image_pane_ParamLimits

0x96ac,	// (0x0002b325) call5_image_pane

0x96c1,	// (0x0002b33a) call5_swipe_1_pane_ParamLimits

0x96c1,	// (0x0002b33a) call5_swipe_1_pane

0x96d2,	// (0x0002b34b) call5_swipe_2_pane_ParamLimits

0x96d2,	// (0x0002b34b) call5_swipe_2_pane

0x96f7,	// (0x0002b370) popup_call5_audio_first_window_ParamLimits

0x96f7,	// (0x0002b370) popup_call5_audio_first_window

0xd08d,	// (0x0002ed06) call5_swipe_1_pane_g1_ParamLimits

0xd08d,	// (0x0002ed06) call5_swipe_1_pane_g1

0xed4b,	// (0x000309c4) call5_swipe_1_pane_g2_ParamLimits

0xed4b,	// (0x000309c4) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x00031968) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x00031968) call5_swipe_1_pane_g

0xed57,	// (0x000309d0) call5_swipe_1_pane_t1_ParamLimits

0xed57,	// (0x000309d0) call5_swipe_1_pane_t1

0xd08d,	// (0x0002ed06) call5_swipe_2_pane_g1_ParamLimits

0xd08d,	// (0x0002ed06) call5_swipe_2_pane_g1

0xed6c,	// (0x000309e5) call5_swipe_2_pane_g2_ParamLimits

0xed6c,	// (0x000309e5) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x0003196d) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x0003196d) call5_swipe_2_pane_g

0xed78,	// (0x000309f1) call5_swipe_2_pane_t1_ParamLimits

0xed78,	// (0x000309f1) call5_swipe_2_pane_t1

0xed8d,	// (0x00030a06) sc_swipe_pane_g1_ParamLimits

0xed8d,	// (0x00030a06) sc_swipe_pane_g1

0xed9a,	// (0x00030a13) sc_swipe_pane_g2_ParamLimits

0xed9a,	// (0x00030a13) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x00031972) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x00031972) sc_swipe_pane_g

0xeda6,	// (0x00030a1f) sc_swipe_pane_t1_ParamLimits

0xeda6,	// (0x00030a1f) sc_swipe_pane_t1

0x336d,	// (0x00024fe6) main_cmail_launcher_pane

0x9706,	// (0x0002b37f) aid_size_cell_cmail_l_ParamLimits

0x9706,	// (0x0002b37f) aid_size_cell_cmail_l

0x971f,	// (0x0002b398) grid_cmail_l_pane_ParamLimits

0x971f,	// (0x0002b398) grid_cmail_l_pane

0x9734,	// (0x0002b3ad) cell_cmail_l_pane_ParamLimits

0x9734,	// (0x0002b3ad) cell_cmail_l_pane

0x9756,	// (0x0002b3cf) cell_cmail_l_pane_g1_ParamLimits

0x9756,	// (0x0002b3cf) cell_cmail_l_pane_g1

0x9766,	// (0x0002b3df) cell_cmail_l_pane_t1_ParamLimits

0x9766,	// (0x0002b3df) cell_cmail_l_pane_t1

0xedbb,	// (0x00030a34) cell_cmail_l_pane_t2_ParamLimits

0xedbb,	// (0x00030a34) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x00031977) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x00031977) cell_cmail_l_pane_t

0x3597,	// (0x00025210) grid_highlight_pane_cp018_ParamLimits

0x3597,	// (0x00025210) grid_highlight_pane_cp018

0x3465,	// (0x000250de) main2_pane_ParamLimits

0x3465,	// (0x000250de) main2_pane

0x40e5,	// (0x00025d5e) popup_sp_fs_action_menu_bg_pane_g1

0x40ed,	// (0x00025d66) popup_sp_fs_action_menu_bg_pane_g2

0x40f5,	// (0x00025d6e) popup_sp_fs_action_menu_bg_pane_g3

0x40fd,	// (0x00025d76) popup_sp_fs_action_menu_bg_pane_g4

0x4105,	// (0x00025d7e) popup_sp_fs_action_menu_bg_pane_g5

0x410d,	// (0x00025d86) popup_sp_fs_action_menu_bg_pane_g6

0x4115,	// (0x00025d8e) popup_sp_fs_action_menu_bg_pane_g7

0x411d,	// (0x00025d96) popup_sp_fs_action_menu_bg_pane_g8

0x4125,	// (0x00025d9e) popup_sp_fs_action_menu_bg_pane_g9

0x412d,	// (0x00025da6) popup_sp_fs_action_menu_bg_pane_g10

0x412d,	// (0x00025da6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00030e34) popup_sp_fs_action_menu_bg_pane_g

0x48ad,	// (0x00026526) list_medium_line_x2_t3_g3_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x2_t3_g3_g1

0x48b9,	// (0x00026532) list_medium_line_x2_t3_g3_g2_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_x2_t3_g3_g2

0x48c5,	// (0x0002653e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x48c5,	// (0x0002653e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00030ee4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00030ee4) list_medium_line_x2_t3_g3_g

0x48d1,	// (0x0002654a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x48d1,	// (0x0002654a) list_medium_line_x2_t3_g3_t1

0x48e6,	// (0x0002655f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x48e6,	// (0x0002655f) list_medium_line_x2_t3_g3_t2

0x48f8,	// (0x00026571) list_medium_line_x2_t3_g3_t3_ParamLimits

0x48f8,	// (0x00026571) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00030eeb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00030eeb) list_medium_line_x2_t3_g3_t

0x48ad,	// (0x00026526) list_medium_line_x2_t3_g2_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x2_t3_g2_g1

0x48c5,	// (0x0002653e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x48c5,	// (0x0002653e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00030ef2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00030ef2) list_medium_line_x2_t3_g2_g

0x490d,	// (0x00026586) list_medium_line_x2_t3_g2_t1_ParamLimits

0x490d,	// (0x00026586) list_medium_line_x2_t3_g2_t1

0x4923,	// (0x0002659c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4923,	// (0x0002659c) list_medium_line_x2_t3_g2_t2

0x48f8,	// (0x00026571) list_medium_line_x2_t3_g2_t3_ParamLimits

0x48f8,	// (0x00026571) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00030ef7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00030ef7) list_medium_line_x2_t3_g2_t

0x48ad,	// (0x00026526) list_medium_line_x2_t4_g4_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x2_t4_g4_g1

0x4935,	// (0x000265ae) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4935,	// (0x000265ae) list_medium_line_x2_t4_g4_g2

0x48b9,	// (0x00026532) list_medium_line_x2_t4_g4_g3_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_x2_t4_g4_g3

0x4941,	// (0x000265ba) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4941,	// (0x000265ba) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00030efe) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00030efe) list_medium_line_x2_t4_g4_g

0x494d,	// (0x000265c6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x494d,	// (0x000265c6) list_medium_line_x2_t4_g4_t1

0x4964,	// (0x000265dd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4964,	// (0x000265dd) list_medium_line_x2_t4_g4_t2

0x4979,	// (0x000265f2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4979,	// (0x000265f2) list_medium_line_x2_t4_g4_t3

0x498b,	// (0x00026604) list_medium_line_x2_t4_g4_t4_ParamLimits

0x498b,	// (0x00026604) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00030f07) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00030f07) list_medium_line_x2_t4_g4_t

0x48ad,	// (0x00026526) list_medium_line_x2_t2_g4_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x2_t2_g4_g1

0x4935,	// (0x000265ae) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4935,	// (0x000265ae) list_medium_line_x2_t2_g4_g2

0x48b9,	// (0x00026532) list_medium_line_x2_t2_g4_g3_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_x2_t2_g4_g3

0x48c5,	// (0x0002653e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x48c5,	// (0x0002653e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00030f6e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00030f6e) list_medium_line_x2_t2_g4_g

0xacaa,	// (0x0002c923) list_medium_line_x2_t2_g4_t1_ParamLimits

0xacaa,	// (0x0002c923) list_medium_line_x2_t2_g4_t1

0x48f8,	// (0x00026571) list_medium_line_x2_t2_g4_t2_ParamLimits

0x48f8,	// (0x00026571) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00030f77) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00030f77) list_medium_line_x2_t2_g4_t

0x48ad,	// (0x00026526) list_medium_line_x2_t2_g3_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x2_t2_g3_g1

0x48b9,	// (0x00026532) list_medium_line_x2_t2_g3_g2_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_x2_t2_g3_g2

0x48c5,	// (0x0002653e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x48c5,	// (0x0002653e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00030ee4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00030ee4) list_medium_line_x2_t2_g3_g

0xacbf,	// (0x0002c938) list_medium_line_x2_t2_g3_t1_ParamLimits

0xacbf,	// (0x0002c938) list_medium_line_x2_t2_g3_t1

0x48f8,	// (0x00026571) list_medium_line_x2_t2_g3_t2_ParamLimits

0x48f8,	// (0x00026571) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00030f7c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00030f7c) list_medium_line_x2_t2_g3_t

0x5685,	// (0x000272fe) main_sp_fs_list_pane_ParamLimits

0x5685,	// (0x000272fe) main_sp_fs_list_pane

0x5692,	// (0x0002730b) sp_fs_scroll_pane_ParamLimits

0x5692,	// (0x0002730b) sp_fs_scroll_pane

0x569f,	// (0x00027318) list_medium_line_x2_t3_t1

0x56af,	// (0x00027328) list_medium_line_x2_t3_t2

0xaf25,	// (0x0002cb9e) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00030fc7) list_medium_line_x2_t3_t

0x56bd,	// (0x00027336) list_medium_line_x3_t4_t1

0x56cd,	// (0x00027346) list_medium_line_x3_t4_t2

0xaf33,	// (0x0002cbac) list_medium_line_x3_t4_t3

0xaf41,	// (0x0002cbba) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00030fce) list_medium_line_x3_t4_t

0x56db,	// (0x00027354) list_medium_line_x4_t5_t1

0x56eb,	// (0x00027364) list_medium_line_x4_t5_t2

0xaf33,	// (0x0002cbac) list_medium_line_x4_t5_t3

0xaf4f,	// (0x0002cbc8) list_medium_line_x4_t5_t4

0xaf41,	// (0x0002cbba) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00030fd7) list_medium_line_x4_t5_t

0x48ad,	// (0x00026526) list_medium_line_t4_g4_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_t4_g4_g1

0x4941,	// (0x000265ba) list_medium_line_t4_g4_g2_ParamLimits

0x4941,	// (0x000265ba) list_medium_line_t4_g4_g2

0xaf5d,	// (0x0002cbd6) list_medium_line_t4_g4_g3_ParamLimits

0xaf5d,	// (0x0002cbd6) list_medium_line_t4_g4_g3

0x48c5,	// (0x0002653e) list_medium_line_t4_g4_g4_ParamLimits

0x48c5,	// (0x0002653e) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00030fe2) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00030fe2) list_medium_line_t4_g4_g

0xaf69,	// (0x0002cbe2) list_medium_line_t4_g4_t1_ParamLimits

0xaf69,	// (0x0002cbe2) list_medium_line_t4_g4_t1

0xaf7e,	// (0x0002cbf7) list_medium_line_t4_g4_t2_ParamLimits

0xaf7e,	// (0x0002cbf7) list_medium_line_t4_g4_t2

0xaf93,	// (0x0002cc0c) list_medium_line_t4_g4_t3_ParamLimits

0xaf93,	// (0x0002cc0c) list_medium_line_t4_g4_t3

0xafa8,	// (0x0002cc21) list_medium_line_t4_g4_t4_ParamLimits

0xafa8,	// (0x0002cc21) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00030feb) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00030feb) list_medium_line_t4_g4_t

0x57ba,	// (0x00027433) chi_dic_find_pane_g1

0x6640,	// (0x000282b9) main_tport_pane

0xddd1,	// (0x0002fa4a) list_medium_line_plain_t1

0x48ad,	// (0x00026526) list_medium_line_t2_g2_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_t2_g2_g1

0x48b9,	// (0x00026532) list_medium_line_t2_g2_g2_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x000316ba) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x000316ba) list_medium_line_t2_g2_g

0x85a4,	// (0x0002a21d) list_medium_line_t2_g2_t1_ParamLimits

0x85a4,	// (0x0002a21d) list_medium_line_t2_g2_t1

0x85bb,	// (0x0002a234) list_medium_line_t2_g2_t2_ParamLimits

0x85bb,	// (0x0002a234) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x000316bf) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x000316bf) list_medium_line_t2_g2_t

0xe1d1,	// (0x0002fe4a) aid_sp_fs_list_icon_a_sm

0xe1d9,	// (0x0002fe52) aid_sp_fs_list_icon_d

0xe1e1,	// (0x0002fe5a) aid_sp_fs_text_primary

0xe1ea,	// (0x0002fe63) aid_sp_fs_text_secondary

0xe1f3,	// (0x0002fe6c) list_medium_line

0xe1f3,	// (0x0002fe6c) list_medium_line_g2

0xe1f3,	// (0x0002fe6c) list_medium_line_g3

0xe1f3,	// (0x0002fe6c) list_medium_line_plain

0xe1f3,	// (0x0002fe6c) list_medium_line_plain_t2

0xe1f3,	// (0x0002fe6c) list_medium_line_plain_t3

0xe1f3,	// (0x0002fe6c) list_medium_line_right_icon

0xe1f3,	// (0x0002fe6c) list_medium_line_right_iconx2

0xe1f3,	// (0x0002fe6c) list_medium_line_t2

0xe1f3,	// (0x0002fe6c) list_medium_line_t2_g2

0xe1f3,	// (0x0002fe6c) list_medium_line_t2_g3

0xe1f3,	// (0x0002fe6c) list_medium_line_t2_right_icon

0xe1f3,	// (0x0002fe6c) list_medium_line_t2_right_iconx2

0xe1f3,	// (0x0002fe6c) list_medium_line_t3

0xe1f3,	// (0x0002fe6c) list_medium_line_t3_g2

0xe1f3,	// (0x0002fe6c) list_medium_line_t3_g3

0xe1f3,	// (0x0002fe6c) list_medium_line_t3_right_iconx2

0xe1fc,	// (0x0002fe75) list_medium_line_t4_g4

0xe205,	// (0x0002fe7e) list_medium_line_x2

0xe205,	// (0x0002fe7e) list_medium_line_x2_t2_g2

0xe205,	// (0x0002fe7e) list_medium_line_x2_t2_g3

0xe205,	// (0x0002fe7e) list_medium_line_x2_t2_g4

0xe205,	// (0x0002fe7e) list_medium_line_x2_t3

0xe205,	// (0x0002fe7e) list_medium_line_x2_t3_g2

0xe205,	// (0x0002fe7e) list_medium_line_x2_t3_g3

0xe205,	// (0x0002fe7e) list_medium_line_x2_t3_g4

0xe205,	// (0x0002fe7e) list_medium_line_x2_t4_g2

0xe205,	// (0x0002fe7e) list_medium_line_x2_t4_g4

0xe20e,	// (0x0002fe87) list_medium_line_x3

0xe20e,	// (0x0002fe87) list_medium_line_x3_t4

0xe20e,	// (0x0002fe87) list_medium_line_x3_t4_g4

0xe1fc,	// (0x0002fe75) list_medium_line_x4_t4

0xe1fc,	// (0x0002fe75) list_medium_line_x4_t4_g7

0xe1fc,	// (0x0002fe75) list_medium_line_x4_t5

0xe217,	// (0x0002fe90) list_single_fs_dyc_pane_ParamLimits

0xe217,	// (0x0002fe90) list_single_fs_dyc_pane

0x48ad,	// (0x00026526) list_medium_line_x4_t4_g7_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x4_t4_g7_g1

0xe71c,	// (0x00030395) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe71c,	// (0x00030395) list_medium_line_x4_t4_g7_g2

0xe728,	// (0x000303a1) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe728,	// (0x000303a1) list_medium_line_x4_t4_g7_g3

0xe737,	// (0x000303b0) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe737,	// (0x000303b0) list_medium_line_x4_t4_g7_g4

0xe743,	// (0x000303bc) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe743,	// (0x000303bc) list_medium_line_x4_t4_g7_g5

0xe752,	// (0x000303cb) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe752,	// (0x000303cb) list_medium_line_x4_t4_g7_g6

0xe761,	// (0x000303da) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe761,	// (0x000303da) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x00031884) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x00031884) list_medium_line_x4_t4_g7_g

0xe76d,	// (0x000303e6) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe76d,	// (0x000303e6) list_medium_line_x4_t4_g7_t1

0xe782,	// (0x000303fb) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe782,	// (0x000303fb) list_medium_line_x4_t4_g7_t2

0xe797,	// (0x00030410) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe797,	// (0x00030410) list_medium_line_x4_t4_g7_t3

0xe7ac,	// (0x00030425) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe7ac,	// (0x00030425) list_medium_line_x4_t4_g7_t4

0xe7be,	// (0x00030437) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe7be,	// (0x00030437) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x00031893) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x00031893) list_medium_line_x4_t4_g7_t

0xe7d0,	// (0x00030449) list_single_dyc_row_pane_ParamLimits

0xe7d0,	// (0x00030449) list_single_dyc_row_pane

0x969b,	// (0x0002b314) call5_gesture_pane_ParamLimits

0x969b,	// (0x0002b314) call5_gesture_pane

0x96e3,	// (0x0002b35c) call5_windows_pane_ParamLimits

0x96e3,	// (0x0002b35c) call5_windows_pane

0x977c,	// (0x0002b3f5) call5_swipe_1_pane_cp_ParamLimits

0x977c,	// (0x0002b3f5) call5_swipe_1_pane_cp

0x9788,	// (0x0002b401) call5_swipe_2_pane_cp_ParamLimits

0x9788,	// (0x0002b401) call5_swipe_2_pane_cp

0xb473,	// (0x0002d0ec) call5_image_pane_cp

0x9794,	// (0x0002b40d) popup_call5_audio_first_window_cp_ParamLimits

0x9794,	// (0x0002b40d) popup_call5_audio_first_window_cp

0xed8d,	// (0x00030a06) call5_swipe_1_pane_g1_cp_ParamLimits

0xed8d,	// (0x00030a06) call5_swipe_1_pane_g1_cp

0xedcd,	// (0x00030a46) call5_swipe_1_pane_g2_cp

0xeda6,	// (0x00030a1f) call5_swipe_1_pane_t1_cp_ParamLimits

0xeda6,	// (0x00030a1f) call5_swipe_1_pane_t1_cp

0xed8d,	// (0x00030a06) call5_swipe_2_pane_g1_cp_ParamLimits

0xed8d,	// (0x00030a06) call5_swipe_2_pane_g1_cp

0xedd5,	// (0x00030a4e) call5_swipe_2_pane_g2_cp

0xeddd,	// (0x00030a56) call5_swipe_2_pane_t1_cp_ParamLimits

0xeddd,	// (0x00030a56) call5_swipe_2_pane_t1_cp

0x3597,	// (0x00025210) main_sp_fs_email_pane

0xedf2,	// (0x00030a6b) main_sp_fs_listscroll_pane_te

0x97a0,	// (0x0002b419) popup_sp_fs_action_menu_pane_ParamLimits

0x97a0,	// (0x0002b419) popup_sp_fs_action_menu_pane

0xce5e,	// (0x0002ead7) bg_sp_fs_ctrlbar_pane_g1

0xedfb,	// (0x00030a74) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xee04,	// (0x00030a7d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xee0d,	// (0x00030a86) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce5e,	// (0x0002ead7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x0003197c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc4b,	// (0x0002e8c4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc4b,	// (0x0002e8c4) bg_sp_fs_ctrlbar_ddmenu_pane

0xee16,	// (0x00030a8f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xee16,	// (0x00030a8f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x48ad,	// (0x00026526) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x48ad,	// (0x00026526) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x00031985) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x00031985) main_sp_fs_ctrlbar_ddmenu_pane_g

0xee22,	// (0x00030a9b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xee22,	// (0x00030a9b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xee3c,	// (0x00030ab5) list_medium_line_t2_right_icon_g1

0xee44,	// (0x00030abd) list_medium_line_t2_right_icon_t1

0x97d0,	// (0x0002b449) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x0003198a) list_medium_line_t2_right_icon_t

0xc969,	// (0x0002e5e2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc969,	// (0x0002e5e2) bg_sp_fs_ctrlbar_pane

0x9827,	// (0x0002b4a0) main_sp_fs_ctrlbar_button_pane_cp01

0x982f,	// (0x0002b4a8) main_sp_fs_ctrlbar_ddmenu_pane

0xee8c,	// (0x00030b05) main_sp_fs_ctrlbar_pane_g1

0xee98,	// (0x00030b11) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x0003198f) main_sp_fs_ctrlbar_pane_g

0xeea4,	// (0x00030b1d) main_sp_fs_ctrlbar_pane_t1

0x9839,	// (0x0002b4b2) main_sp_fs_ctrlbar_pane

0x985a,	// (0x0002b4d3) main_sp_fs_listscroll_pane_te_cp01

0x987a,	// (0x0002b4f3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x987a,	// (0x0002b4f3) popup_sp_fs_action_menu_pane_cp01

0x3597,	// (0x00025210) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3597,	// (0x00025210) bg_sp_fs_highlight_list_pane_cp01

0x9899,	// (0x0002b512) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9899,	// (0x0002b512) sp_fs_action_menu_list_gene_pane_g1

0xeeb9,	// (0x00030b32) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xeeb9,	// (0x00030b32) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x00031994) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x00031994) sp_fs_action_menu_list_gene_pane_g

0x98a8,	// (0x0002b521) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x98a8,	// (0x0002b521) sp_fs_action_menu_list_gene_pane_t1

0x98c0,	// (0x0002b539) sp_fs_action_menu_list_gene_pane_ParamLimits

0x98c0,	// (0x0002b539) sp_fs_action_menu_list_gene_pane

0xeec6,	// (0x00030b3f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xeec6,	// (0x00030b3f) popup_sp_fs_action_menu_bg_pane

0x98dd,	// (0x0002b556) sp_fs_action_menu_list_pane_ParamLimits

0x98dd,	// (0x0002b556) sp_fs_action_menu_list_pane

0xeed4,	// (0x00030b4d) sp_fs_scroll_pane_cp01_ParamLimits

0xeed4,	// (0x00030b4d) sp_fs_scroll_pane_cp01

0x98f9,	// (0x0002b572) list_medium_line_plain_t2_t1

0x9909,	// (0x0002b582) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x00031999) list_medium_line_plain_t2_t

0x9917,	// (0x0002b590) list_medium_line_plain_t3_t1

0x9927,	// (0x0002b5a0) list_medium_line_plain_t3_t2

0x9935,	// (0x0002b5ae) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x0003199e) list_medium_line_plain_t3_t

0x48ad,	// (0x00026526) list_medium_line_x2_t2_g2_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x2_t2_g2_g1

0x48c5,	// (0x0002653e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x48c5,	// (0x0002653e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00030ef2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00030ef2) list_medium_line_x2_t2_g2_g

0xaf69,	// (0x0002cbe2) list_medium_line_x2_t2_g2_t1_ParamLimits

0xaf69,	// (0x0002cbe2) list_medium_line_x2_t2_g2_t1

0x48f8,	// (0x00026571) list_medium_line_x2_t2_g2_t2_ParamLimits

0x48f8,	// (0x00026571) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x000319a5) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x000319a5) list_medium_line_x2_t2_g2_t

0x48ad,	// (0x00026526) list_medium_line_x2_t4_g2_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x2_t4_g2_g1

0x48c5,	// (0x0002653e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x48c5,	// (0x0002653e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x00030ef2) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x00030ef2) list_medium_line_x2_t4_g2_g

0x9943,	// (0x0002b5bc) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9943,	// (0x0002b5bc) list_medium_line_x2_t4_g2_t1

0x995d,	// (0x0002b5d6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x995d,	// (0x0002b5d6) list_medium_line_x2_t4_g2_t2

0x9972,	// (0x0002b5eb) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9972,	// (0x0002b5eb) list_medium_line_x2_t4_g2_t3

0x48f8,	// (0x00026571) list_medium_line_x2_t4_g2_t4_ParamLimits

0x48f8,	// (0x00026571) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd31,	// (0x000319aa) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd31,	// (0x000319aa) list_medium_line_x2_t4_g2_t

0xeefa,	// (0x00030b73) list_medium_line_t3_right_iconx2_g1

0xee3c,	// (0x00030ab5) list_medium_line_t3_right_iconx2_g2

0x9987,	// (0x0002b600) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3a,	// (0x000319b3) list_medium_line_t3_right_iconx2_g

0x998f,	// (0x0002b608) list_medium_line_t3_right_iconx2_t1

0x999f,	// (0x0002b618) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd41,	// (0x000319ba) list_medium_line_t3_right_iconx2_t

0x48ad,	// (0x00026526) list_medium_line_x3_t4_g4_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x3_t4_g4_g1

0x48b9,	// (0x00026532) list_medium_line_x3_t4_g4_g2_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_x3_t4_g4_g2

0x4941,	// (0x000265ba) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4941,	// (0x000265ba) list_medium_line_x3_t4_g4_g3

0xef02,	// (0x00030b7b) list_medium_line_x3_t4_g4_g4_ParamLimits

0xef02,	// (0x00030b7b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd46,	// (0x000319bf) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd46,	// (0x000319bf) list_medium_line_x3_t4_g4_g

0x85a4,	// (0x0002a21d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x85a4,	// (0x0002a21d) list_medium_line_x3_t4_g4_t1

0x85bb,	// (0x0002a234) list_medium_line_x3_t4_g4_t2_ParamLimits

0x85bb,	// (0x0002a234) list_medium_line_x3_t4_g4_t2

0xaf7e,	// (0x0002cbf7) list_medium_line_x3_t4_g4_t3_ParamLimits

0xaf7e,	// (0x0002cbf7) list_medium_line_x3_t4_g4_t3

0xef0e,	// (0x00030b87) list_medium_line_x3_t4_g4_t4_ParamLimits

0xef0e,	// (0x00030b87) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4f,	// (0x000319c8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4f,	// (0x000319c8) list_medium_line_x3_t4_g4_t

0x99ad,	// (0x0002b626) list_single_dyc_row_text_pane_t1_ParamLimits

0x99ad,	// (0x0002b626) list_single_dyc_row_text_pane_t1

0x99e4,	// (0x0002b65d) list_single_dyc_row_text_pane_t2_ParamLimits

0x99e4,	// (0x0002b65d) list_single_dyc_row_text_pane_t2

0xef2b,	// (0x00030ba4) list_single_dyc_row_text_pane_t3_ParamLimits

0xef2b,	// (0x00030ba4) list_single_dyc_row_text_pane_t3

0x0002,

0xfd58,	// (0x000319d1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd58,	// (0x000319d1) list_single_dyc_row_text_pane_t

0xef3d,	// (0x00030bb6) list_single_dyc_row_pane_g1_ParamLimits

0xef3d,	// (0x00030bb6) list_single_dyc_row_pane_g1

0xef49,	// (0x00030bc2) list_single_dyc_row_pane_g2_ParamLimits

0xef49,	// (0x00030bc2) list_single_dyc_row_pane_g2

0xef55,	// (0x00030bce) list_single_dyc_row_pane_g3_ParamLimits

0xef55,	// (0x00030bce) list_single_dyc_row_pane_g3

0xef61,	// (0x00030bda) list_single_dyc_row_pane_g4_ParamLimits

0xef61,	// (0x00030bda) list_single_dyc_row_pane_g4

0x0003,

0xfd5f,	// (0x000319d8) list_single_dyc_row_pane_g_ParamLimits

0xfd5f,	// (0x000319d8) list_single_dyc_row_pane_g

0xef6d,	// (0x00030be6) list_single_dyc_row_text_pane_ParamLimits

0xef6d,	// (0x00030be6) list_single_dyc_row_text_pane

0x336d,	// (0x00024fe6) bg_sp_fs_scroll_pane

0xef8c,	// (0x00030c05) thumb_sp_fs_scroll_pane

0x48ad,	// (0x00026526) list_medium_line_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_g1

0xaf69,	// (0x0002cbe2) list_medium_line_t1_ParamLimits

0xaf69,	// (0x0002cbe2) list_medium_line_t1

0x48ad,	// (0x00026526) list_medium_line_x2_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x2_g1

0x48b9,	// (0x00026532) list_medium_line_x2_g2_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x000316ba) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x000316ba) list_medium_line_x2_g

0xef95,	// (0x00030c0e) list_medium_line_x2_t1_ParamLimits

0xef95,	// (0x00030c0e) list_medium_line_x2_t1

0x48ad,	// (0x00026526) list_medium_line_x3_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x3_g1

0x48b9,	// (0x00026532) list_medium_line_x3_g2_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x000316ba) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x000316ba) list_medium_line_x3_g

0xef95,	// (0x00030c0e) list_medium_line_x3_t1_ParamLimits

0xef95,	// (0x00030c0e) list_medium_line_x3_t1

0xefab,	// (0x00030c24) thumb_sp_fs_scroll_pane_g1

0xefb4,	// (0x00030c2d) thumb_sp_fs_scroll_pane_g2

0xefbd,	// (0x00030c36) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd68,	// (0x000319e1) thumb_sp_fs_scroll_pane_g

0xefab,	// (0x00030c24) bg_sp_fs_scroll_pane_g1

0xefb4,	// (0x00030c2d) bg_sp_fs_scroll_pane_g2

0xefbd,	// (0x00030c36) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd68,	// (0x000319e1) bg_sp_fs_scroll_pane_g

0x48ad,	// (0x00026526) list_medium_line_x2_t3_g4_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_x2_t3_g4_g1

0x4935,	// (0x000265ae) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4935,	// (0x000265ae) list_medium_line_x2_t3_g4_g2

0x48b9,	// (0x00026532) list_medium_line_x2_t3_g4_g3_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_x2_t3_g4_g3

0x48c5,	// (0x0002653e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x48c5,	// (0x0002653e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00030f6e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00030f6e) list_medium_line_x2_t3_g4_g

0x9a3e,	// (0x0002b6b7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9a3e,	// (0x0002b6b7) list_medium_line_x2_t3_g4_t1

0x9a54,	// (0x0002b6cd) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9a54,	// (0x0002b6cd) list_medium_line_x2_t3_g4_t2

0x48f8,	// (0x00026571) list_medium_line_x2_t3_g4_t3_ParamLimits

0x48f8,	// (0x00026571) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6f,	// (0x000319e8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6f,	// (0x000319e8) list_medium_line_x2_t3_g4_t

0x48ad,	// (0x00026526) list_medium_line_g2_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_g2_g1

0x48b9,	// (0x00026532) list_medium_line_g2_g2_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x000316ba) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x000316ba) list_medium_line_g2_g

0xacbf,	// (0x0002c938) list_medium_line_g2_t1_ParamLimits

0xacbf,	// (0x0002c938) list_medium_line_g2_t1

0x48ad,	// (0x00026526) list_medium_line_t3_g2_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_t3_g2_g1

0x48b9,	// (0x00026532) list_medium_line_t3_g2_g2_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x000316ba) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x000316ba) list_medium_line_t3_g2_g

0x9a6d,	// (0x0002b6e6) list_medium_line_t3_g2_t1_ParamLimits

0x9a6d,	// (0x0002b6e6) list_medium_line_t3_g2_t1

0x9a84,	// (0x0002b6fd) list_medium_line_t3_g2_t2_ParamLimits

0x9a84,	// (0x0002b6fd) list_medium_line_t3_g2_t2

0x9a99,	// (0x0002b712) list_medium_line_t3_g2_t3_ParamLimits

0x9a99,	// (0x0002b712) list_medium_line_t3_g2_t3

0x0002,

0xfd76,	// (0x000319ef) list_medium_line_t3_g2_t_ParamLimits

0xfd76,	// (0x000319ef) list_medium_line_t3_g2_t

0xee3c,	// (0x00030ab5) list_medium_line_right_icon_g1

0xefc6,	// (0x00030c3f) list_medium_line_right_icon_t1

0x48ad,	// (0x00026526) list_medium_line_t2_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_t2_g1

0x9aae,	// (0x0002b727) list_medium_line_t2_t1_ParamLimits

0x9aae,	// (0x0002b727) list_medium_line_t2_t1

0x9ac8,	// (0x0002b741) list_medium_line_t2_t2_ParamLimits

0x9ac8,	// (0x0002b741) list_medium_line_t2_t2

0x0001,

0xfd7d,	// (0x000319f6) list_medium_line_t2_t_ParamLimits

0xfd7d,	// (0x000319f6) list_medium_line_t2_t

0x48ad,	// (0x00026526) list_medium_line_t3_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_t3_g1

0x9943,	// (0x0002b5bc) list_medium_line_t3_t1_ParamLimits

0x9943,	// (0x0002b5bc) list_medium_line_t3_t1

0x995d,	// (0x0002b5d6) list_medium_line_t3_t2_ParamLimits

0x995d,	// (0x0002b5d6) list_medium_line_t3_t2

0x9972,	// (0x0002b5eb) list_medium_line_t3_t3_ParamLimits

0x9972,	// (0x0002b5eb) list_medium_line_t3_t3

0x0002,

0xfd82,	// (0x000319fb) list_medium_line_t3_t_ParamLimits

0xfd82,	// (0x000319fb) list_medium_line_t3_t

0x48ad,	// (0x00026526) list_medium_line_g3_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_g3_g1

0x4935,	// (0x000265ae) list_medium_line_g3_g2_ParamLimits

0x4935,	// (0x000265ae) list_medium_line_g3_g2

0x48b9,	// (0x00026532) list_medium_line_g3_g3_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_g3_g3

0x0002,

0xfd89,	// (0x00031a02) list_medium_line_g3_g_ParamLimits

0xfd89,	// (0x00031a02) list_medium_line_g3_g

0xacaa,	// (0x0002c923) list_medium_line_g3_t1_ParamLimits

0xacaa,	// (0x0002c923) list_medium_line_g3_t1

0x48ad,	// (0x00026526) list_medium_line_t2_g3_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_t2_g3_g1

0x4935,	// (0x000265ae) list_medium_line_t2_g3_g2_ParamLimits

0x4935,	// (0x000265ae) list_medium_line_t2_g3_g2

0x48b9,	// (0x00026532) list_medium_line_t2_g3_g3_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_t2_g3_g3

0x0002,

0xfd89,	// (0x00031a02) list_medium_line_t2_g3_g_ParamLimits

0xfd89,	// (0x00031a02) list_medium_line_t2_g3_g

0x9add,	// (0x0002b756) list_medium_line_t2_g3_t1_ParamLimits

0x9add,	// (0x0002b756) list_medium_line_t2_g3_t1

0x9af4,	// (0x0002b76d) list_medium_line_t2_g3_t2_ParamLimits

0x9af4,	// (0x0002b76d) list_medium_line_t2_g3_t2

0x0001,

0xfd90,	// (0x00031a09) list_medium_line_t2_g3_t_ParamLimits

0xfd90,	// (0x00031a09) list_medium_line_t2_g3_t

0x48ad,	// (0x00026526) list_medium_line_t3_g3_g1_ParamLimits

0x48ad,	// (0x00026526) list_medium_line_t3_g3_g1

0x4935,	// (0x000265ae) list_medium_line_t3_g3_g2_ParamLimits

0x4935,	// (0x000265ae) list_medium_line_t3_g3_g2

0x48b9,	// (0x00026532) list_medium_line_t3_g3_g3_ParamLimits

0x48b9,	// (0x00026532) list_medium_line_t3_g3_g3

0x0002,

0xfd89,	// (0x00031a02) list_medium_line_t3_g3_g_ParamLimits

0xfd89,	// (0x00031a02) list_medium_line_t3_g3_g

0x9b09,	// (0x0002b782) list_medium_line_t3_g3_t1_ParamLimits

0x9b09,	// (0x0002b782) list_medium_line_t3_g3_t1

0x9b22,	// (0x0002b79b) list_medium_line_t3_g3_t2_ParamLimits

0x9b22,	// (0x0002b79b) list_medium_line_t3_g3_t2

0x9b38,	// (0x0002b7b1) list_medium_line_t3_g3_t3_ParamLimits

0x9b38,	// (0x0002b7b1) list_medium_line_t3_g3_t3

0x0002,

0xfd95,	// (0x00031a0e) list_medium_line_t3_g3_t_ParamLimits

0xfd95,	// (0x00031a0e) list_medium_line_t3_g3_t

0xeefa,	// (0x00030b73) list_medium_line_right_iconx2_g1

0xee3c,	// (0x00030ab5) list_medium_line_right_iconx2_g2

0x0001,

0xfd9c,	// (0x00031a15) list_medium_line_right_iconx2_g

0xefd4,	// (0x00030c4d) list_medium_line_right_iconx2_t1

0xeefa,	// (0x00030b73) list_medium_line_t2_right_iconx2_g1

0xee3c,	// (0x00030ab5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd9c,	// (0x00031a15) list_medium_line_t2_right_iconx2_g

0x9b4e,	// (0x0002b7c7) list_medium_line_t2_right_iconx2_t1

0x9b5e,	// (0x0002b7d7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda1,	// (0x00031a1a) list_medium_line_t2_right_iconx2_t

0xddd1,	// (0x0002fa4a) list_medium_line_x4_t4_t1

0x9b6c,	// (0x0002b7e5) list_medium_line_x4_t4_t2

0x9b7c,	// (0x0002b7f5) list_medium_line_x4_t4_t3

0x9b8c,	// (0x0002b805) list_medium_line_x4_t4_t4

0x0003,

0xfda6,	// (0x00031a1f) list_medium_line_x4_t4_t

0x9bd7,	// (0x0002b850) tport_appsw_pane_ParamLimits

0x9bd7,	// (0x0002b850) tport_appsw_pane

0x9be8,	// (0x0002b861) tport_contact_pane_ParamLimits

0x9be8,	// (0x0002b861) tport_contact_pane

0x9bfd,	// (0x0002b876) tport_listscroll_pane_ParamLimits

0x9bfd,	// (0x0002b876) tport_listscroll_pane

0x9c16,	// (0x0002b88f) cell_tport_appsw_pane_ParamLimits

0x9c16,	// (0x0002b88f) cell_tport_appsw_pane

0xdb1f,	// (0x0002f798) tport_appsw_pane_g1_ParamLimits

0xdb1f,	// (0x0002f798) tport_appsw_pane_g1

0xefe2,	// (0x00030c5b) tport_contact_pane_g1

0xefeb,	// (0x00030c64) tport_contact_pane_t1

0xeff9,	// (0x00030c72) tport_contact_pane_t2

0x0001,

0xfdaf,	// (0x00031a28) tport_contact_pane_t

0xf007,	// (0x00030c80) list_tport_pane

0x413f,	// (0x00025db8) scroll_pane_cp_030

0xf018,	// (0x00030c91) cell_tport_appsw_pane_g1

0xf028,	// (0x00030ca1) cell_tport_appsw_pane_t1

0x336d,	// (0x00024fe6) grid_highlight_pane_cp019

0x9c4c,	// (0x0002b8c5) list_tport_double_graphic_pane_ParamLimits

0x9c4c,	// (0x0002b8c5) list_tport_double_graphic_pane

0x3597,	// (0x00025210) list_highlight_pane_cp023_ParamLimits

0x3597,	// (0x00025210) list_highlight_pane_cp023

0x9c59,	// (0x0002b8d2) list_tport_double_graphic_pane_g1_ParamLimits

0x9c59,	// (0x0002b8d2) list_tport_double_graphic_pane_g1

0x9c66,	// (0x0002b8df) list_tport_double_graphic_pane_t1_ParamLimits

0x9c66,	// (0x0002b8df) list_tport_double_graphic_pane_t1

0x9c7b,	// (0x0002b8f4) list_tport_double_graphic_pane_t2_ParamLimits

0x9c7b,	// (0x0002b8f4) list_tport_double_graphic_pane_t2

0x0001,

0xfdbb,	// (0x00031a34) list_tport_double_graphic_pane_t_ParamLimits

0xfdbb,	// (0x00031a34) list_tport_double_graphic_pane_t

0x336d,	// (0x00024fe6) main_cale_note_pane

0x3061,	// (0x00024cda) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x3061,	// (0x00024cda) cell_vitu2_function_top_wide_pane_cp01

0x9385,	// (0x0002affe) wait_bar_pane_cp05_ParamLimits

0x336d,	// (0x00024fe6) listscroll_cmail_pane

0xf036,	// (0x00030caf) list_cmail_pane

0x9c8d,	// (0x0002b906) list_cmail_body_pane

0x9c8d,	// (0x0002b906) list_single_cmail_header_caption_pane

0x9ca3,	// (0x0002b91c) list_single_cmail_header_detail_pane_ParamLimits

0x9ca3,	// (0x0002b91c) list_single_cmail_header_detail_pane

0xf071,	// (0x00030cea) list_single_cmail_header_caption_pane_t1

0x9ccb,	// (0x0002b944) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9ccb,	// (0x0002b944) list_single_cmail_header_detail_pane_g1

0xf087,	// (0x00030d00) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf087,	// (0x00030d00) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc0,	// (0x00031a39) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc0,	// (0x00031a39) list_single_cmail_header_detail_pane_g

0xf0a0,	// (0x00030d19) list_single_cmail_header_detail_pane_t1_ParamLimits

0xf0a0,	// (0x00030d19) list_single_cmail_header_detail_pane_t1

0xf0d2,	// (0x00030d4b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xf0d2,	// (0x00030d4b) list_single_cmail_header_editor_pane_bg

0xf0e4,	// (0x00030d5d) list_cmail_body_pane_g1

0xf0ed,	// (0x00030d66) list_cmail_body_pane_t1

0xdb6a,	// (0x0002f7e3) list_single_cmail_header_editor_pane_bg_g1

0xabc8,	// (0x0002c841) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdb7a,	// (0x0002f7f3) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdb72,	// (0x0002f7eb) list_single_cmail_header_editor_pane_bg_g1_copy3

0xddfb,	// (0x0002fa74) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdb9a,	// (0x0002f813) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdb8a,	// (0x0002f803) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdb92,	// (0x0002f80b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaba8,	// (0x0002c821) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9d05,	// (0x0002b97e) calenote_gesture_pane_ParamLimits

0x9d05,	// (0x0002b97e) calenote_gesture_pane

0x9d21,	// (0x0002b99a) calenote_window_pane_ParamLimits

0x9d21,	// (0x0002b99a) calenote_window_pane

0x0015,	// (0x00021c8e) popup_note_window_cp01

0x9d3d,	// (0x0002b9b6) calenote_swipe_1_pane_ParamLimits

0x9d3d,	// (0x0002b9b6) calenote_swipe_1_pane

0x9788,	// (0x0002b401) calenote_swipe_2_pane_ParamLimits

0x9788,	// (0x0002b401) calenote_swipe_2_pane

0xed8d,	// (0x00030a06) calenote_swipe_1_pane_g1_ParamLimits

0xed8d,	// (0x00030a06) calenote_swipe_1_pane_g1

0xed9a,	// (0x00030a13) calenote_swipe_1_pane_g2_ParamLimits

0xed9a,	// (0x00030a13) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x00031972) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x00031972) calenote_swipe_1_pane_g

0x003a,	// (0x00021cb3) calenote_swipe_1_pane_t1_ParamLimits

0x003a,	// (0x00021cb3) calenote_swipe_1_pane_t1

0xed8d,	// (0x00030a06) calenote_swipe_2_pane_g1_ParamLimits

0xed8d,	// (0x00030a06) calenote_swipe_2_pane_g1

0x0059,	// (0x00021cd2) calenote_swipe_2_pane_g2_ParamLimits

0x0059,	// (0x00021cd2) calenote_swipe_2_pane_g2

0x0001,

0xfdcc,	// (0x00031a45) calenote_swipe_2_pane_g_ParamLimits

0xfdcc,	// (0x00031a45) calenote_swipe_2_pane_g

0x0065,	// (0x00021cde) calenote_swipe_2_pane_t1_ParamLimits

0x0065,	// (0x00021cde) calenote_swipe_2_pane_t1

0x336d,	// (0x00024fe6) main_mup_navstr_pane

0x73f9,	// (0x00029072) main_mup3_pane_t7_ParamLimits

0x73f9,	// (0x00029072) main_mup3_pane_t7

0xd75f,	// (0x0002f3d8) main_mp4_pane_g6_ParamLimits

0xd75f,	// (0x0002f3d8) main_mp4_pane_g6

0xd9a1,	// (0x0002f61a) main_image3_pane_t4_ParamLimits

0xd9a1,	// (0x0002f61a) main_image3_pane_t4

0x9d52,	// (0x0002b9cb) popup_navstr_preview_pane_ParamLimits

0x9d52,	// (0x0002b9cb) popup_navstr_preview_pane

0x9d62,	// (0x0002b9db) scroll_navstr_pane_ParamLimits

0x9d62,	// (0x0002b9db) scroll_navstr_pane

0x336d,	// (0x00024fe6) bg_popup_preview_window_pane_cp04

0x00a4,	// (0x00021d1d) popup_navstr_preview_pane_t1

0x9d76,	// (0x0002b9ef) scroll_navstr_pane_g1_ParamLimits

0x9d76,	// (0x0002b9ef) scroll_navstr_pane_g1

0x9d8a,	// (0x0002ba03) scroll_navstr_pane_t1_ParamLimits

0x9d8a,	// (0x0002ba03) scroll_navstr_pane_t1

0x0031,	// (0x00021caa) bg_button_pane_cp014

0x0031,	// (0x00021caa) bg_button_pane_cp030

0x9646,	// (0x0002b2bf) list_double_fisheye_pane_g4_ParamLimits

0x9646,	// (0x0002b2bf) list_double_fisheye_pane_g4

0x9652,	// (0x0002b2cb) list_double_fisheye_pane_g5_ParamLimits

0x9652,	// (0x0002b2cb) list_double_fisheye_pane_g5

0xf046,	// (0x00030cbf) sp_fs_scroll_pane_cp03

0xee8c,	// (0x00030b05) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xee98,	// (0x00030b11) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x0003198f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xeea4,	// (0x00030b1d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xf03e,	// (0x00030cb7) sp_fs_scroll_pane_cp02

0x417b,	// (0x00025df4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x417b,	// (0x00025df4) popup_sp_fs_calendar_preview_list_single_pane

0x336d,	// (0x00024fe6) main_cam6_pano_pane

0x3597,	// (0x00025210) main_mup3_pane_ParamLimits

0x336d,	// (0x00024fe6) main_phacti_pane

0x9278,	// (0x0002aef1) bg_button_pane_cp11

0x9290,	// (0x0002af09) main_mobtv_info_pane_g2_ParamLimits

0x9290,	// (0x0002af09) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x000318ef) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x000318ef) main_mobtv_info_pane_g

0x9443,	// (0x0002b0bc) sc_clock_pane_t5_ParamLimits

0x9443,	// (0x0002b0bc) sc_clock_pane_t5

0x94b6,	// (0x0002b12f) main_radioblah_pane_g1_ParamLimits

0xecd0,	// (0x00030949) main_radioblah_pane_t3_ParamLimits

0xecd0,	// (0x00030949) main_radioblah_pane_t3

0xece8,	// (0x00030961) main_radioblah_pane_t4_ParamLimits

0xece8,	// (0x00030961) main_radioblah_pane_t4

0x94de,	// (0x0002b157) main_radioblah_text_pane_ParamLimits

0x94de,	// (0x0002b157) main_radioblah_text_pane

0x94f0,	// (0x0002b169) main_radioblah_info_pane_g1_ParamLimits

0x9583,	// (0x0002b1fc) main_radioblah_info_pane_t4_ParamLimits

0x9583,	// (0x0002b1fc) main_radioblah_info_pane_t4

0x3597,	// (0x00025210) main_sp_fs_calendar_pane

0x9da0,	// (0x0002ba19) main_phacti_pane_g1

0x9da8,	// (0x0002ba21) phacti_note_pane_ParamLimits

0x9da8,	// (0x0002ba21) phacti_note_pane

0x00f6,	// (0x00021d6f) phacti_term_pane_ParamLimits

0x00f6,	// (0x00021d6f) phacti_term_pane

0x010b,	// (0x00021d84) phacti_note_pane_t1_ParamLimits

0x010b,	// (0x00021d84) phacti_note_pane_t1

0x0122,	// (0x00021d9b) phacti_term_pane_g1

0x012a,	// (0x00021da3) phacti_term_pane_t1_ParamLimits

0x012a,	// (0x00021da3) phacti_term_pane_t1

0x0154,	// (0x00021dcd) popup_sp_fs_calendar_preview_list_single_pane_g1

0x015c,	// (0x00021dd5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd6,	// (0x00031a4f) popup_sp_fs_calendar_preview_list_single_pane_g

0x0164,	// (0x00021ddd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0164,	// (0x00021ddd) popup_sp_fs_calendar_preview_list_single_pane_t1

0x017a,	// (0x00021df3) aid_popup_sp_fs_bg_corner_pane

0xce5e,	// (0x0002ead7) popup_sp_fs_calendar_preview_bg_pane_g1

0x336d,	// (0x00024fe6) popup_sp_fs_calendar_preview_bg_pane

0x0182,	// (0x00021dfb) popup_sp_fs_calendar_preview_list_pane

0x3597,	// (0x00025210) bg_main_sp_fs_cale_pane_ParamLimits

0x3597,	// (0x00025210) bg_main_sp_fs_cale_pane

0x01ba,	// (0x00021e33) listscroll_cale_mrui_pane_ParamLimits

0x01ba,	// (0x00021e33) listscroll_cale_mrui_pane

0x01ce,	// (0x00021e47) listscroll_sp_fs_schedule_track_pane

0x01d7,	// (0x00021e50) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x01d7,	// (0x00021e50) main_sp_fs_ctrlbar_pane_cp01

0x01e8,	// (0x00021e61) main_sp_fs_ribbon_pane

0x01f0,	// (0x00021e69) popup_sp_fs_cale_preview_window

0x9df7,	// (0x0002ba70) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9df7,	// (0x0002ba70) list_single_sp_fs_schedule_track_pane

0x3597,	// (0x00025210) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3597,	// (0x00025210) bg_sp_fs_highlight_list_pane_cp03

0x9e0a,	// (0x0002ba83) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9e0a,	// (0x0002ba83) list_single_sp_fs_schedule_track_pane_g1

0x9e16,	// (0x0002ba8f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9e16,	// (0x0002ba8f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfddb,	// (0x00031a54) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfddb,	// (0x00031a54) list_single_sp_fs_schedule_track_pane_g

0x9e22,	// (0x0002ba9b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9e22,	// (0x0002ba9b) list_single_sp_fs_schedule_track_pane_t1

0x9e3c,	// (0x0002bab5) sp_fs_schedule_track_pane_ParamLimits

0x9e3c,	// (0x0002bab5) sp_fs_schedule_track_pane

0x0257,	// (0x00021ed0) sp_fs_schedule_track_pane_g1

0x025f,	// (0x00021ed8) sp_fs_schedule_track_pane_g2

0x0267,	// (0x00021ee0) sp_fs_schedule_track_pane_g3

0x026f,	// (0x00021ee8) sp_fs_schedule_track_pane_g4

0x0277,	// (0x00021ef0) sp_fs_schedule_track_pane_g5

0x0004,

0xfde0,	// (0x00031a59) sp_fs_schedule_track_pane_g

0xdb6a,	// (0x0002f7e3) bg_sp_fs_schedule_viewer_highlight_g1

0xabc8,	// (0x0002c841) bg_sp_fs_schedule_viewer_highlight_g2

0xdb72,	// (0x0002f7eb) bg_sp_fs_schedule_viewer_highlight_g3

0xdb7a,	// (0x0002f7f3) bg_sp_fs_schedule_viewer_highlight_g4

0xddfb,	// (0x0002fa74) bg_sp_fs_schedule_viewer_highlight_g5

0xdb8a,	// (0x0002f803) bg_sp_fs_schedule_viewer_highlight_g6

0xdb92,	// (0x0002f80b) bg_sp_fs_schedule_viewer_highlight_g7

0xdb9a,	// (0x0002f813) bg_sp_fs_schedule_viewer_highlight_g8

0xaba8,	// (0x0002c821) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdeb,	// (0x00031a64) bg_sp_fs_schedule_viewer_highlight_g

0x336d,	// (0x00024fe6) bg_main_sp_fs_ribbon_pane

0x9e4d,	// (0x0002bac6) main_sp_fs_ribbon_pane_g1

0x027f,	// (0x00021ef8) main_sp_fs_ribbon_pane_t1

0x9e56,	// (0x0002bacf) main_sp_fs_ribbon_pane_t2

0x029d,	// (0x00021f16) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfe,	// (0x00031a77) main_sp_fs_ribbon_pane_t

0x02ac,	// (0x00021f25) main_sp_fs_ribbon_scheduler_pane

0x02b4,	// (0x00021f2d) bg_main_sp_fs_ribbon_pane_g1

0x02bd,	// (0x00021f36) bg_main_sp_fs_ribbon_pane_g2

0x02c6,	// (0x00021f3f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe05,	// (0x00031a7e) bg_main_sp_fs_ribbon_pane_g

0x02ce,	// (0x00021f47) main_sp_fs_ribbon_scheduler_pane_g1

0x02d7,	// (0x00021f50) main_sp_fs_ribbon_scheduler_pane_g2

0x02e0,	// (0x00021f59) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe0c,	// (0x00031a85) main_sp_fs_ribbon_scheduler_pane_g

0xed42,	// (0x000309bb) list_cale_mrui_pane

0x02e9,	// (0x00021f62) sp_fs_scroll_pane_cp07_ParamLimits

0x02e9,	// (0x00021f62) sp_fs_scroll_pane_cp07

0x9e65,	// (0x0002bade) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9e65,	// (0x0002bade) bg_sp_fs_schedule_viewer_highlight

0x030b,	// (0x00021f84) list_single_sp_fs_schedule_track_pane_cp01

0x0313,	// (0x00021f8c) list_sp_fs_schedule_track_pane

0x031b,	// (0x00021f94) sp_fs_scroll_pane_cp06_ParamLimits

0x031b,	// (0x00021f94) sp_fs_scroll_pane_cp06

0xce5e,	// (0x0002ead7) bgmain_sp_fs_calendar_pane_g1

0x9e75,	// (0x0002baee) list_single_cale_mrui_pane_ParamLimits

0x9e75,	// (0x0002baee) list_single_cale_mrui_pane

0x0353,	// (0x00021fcc) list_single_cale_mrui_row_pane_ParamLimits

0x0353,	// (0x00021fcc) list_single_cale_mrui_row_pane

0x0360,	// (0x00021fd9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0360,	// (0x00021fd9) list_single_cale_mrui_row_pane_g1

0x0398,	// (0x00022011) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0398,	// (0x00022011) list_single_cale_mrui_row_pane_t1

0x9e98,	// (0x0002bb11) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9e98,	// (0x0002bb11) list_single_cale_mrui_row_pane_t2

0x0410,	// (0x00022089) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0410,	// (0x00022089) list_single_cale_mrui_row_pane_t3

0x043f,	// (0x000220b8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x043f,	// (0x000220b8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe18,	// (0x00031a91) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe18,	// (0x00031a91) list_single_cale_mrui_row_pane_t

0x9efe,	// (0x0002bb77) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9efe,	// (0x0002bb77) list_single_cmail_header_editor_pane_bg_cp01

0x9f22,	// (0x0002bb9b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9f22,	// (0x0002bb9b) list_single_cmail_header_editor_pane_bg_cp02

0x9f40,	// (0x0002bbb9) main_radioblah_text_pane_t1_ParamLimits

0x9f40,	// (0x0002bbb9) main_radioblah_text_pane_t1

0x04c9,	// (0x00022142) cam6_indi_pane_cp01

0x04d1,	// (0x0002214a) cam6_mode_pane_cp01

0x04d9,	// (0x00022152) cam6_pano_pane

0x04e2,	// (0x0002215b) cam6_zoom_pane_cp01

0x04ea,	// (0x00022163) cam6_pano_image_pane

0x04f3,	// (0x0002216c) cam6_pano_pane_g1

0xea4e,	// (0x000306c7) cam6_pano_pane_g2

0x04fc,	// (0x00022175) cam6_pano_pane_g3

0x0505,	// (0x0002217e) cam6_pano_pane_g4

0xd3c4,	// (0x0002f03d) cam6_pano_pane_g5

0x050e,	// (0x00022187) cam6_pano_pane_g6

0x0516,	// (0x0002218f) cam6_pano_pane_g7

0x051e,	// (0x00022197) cam6_pano_pane_g8

0x0527,	// (0x000221a0) cam6_pano_pane_g9

0x0008,

0xfe21,	// (0x00031a9a) cam6_pano_pane_g

0x336d,	// (0x00024fe6) main_browser_tag_pane

0x0084,	// (0x00021cfd) grid_navstr_albumart_pane

0x0530,	// (0x000221a9) cell_navstr_albumart_pane_ParamLimits

0x0530,	// (0x000221a9) cell_navstr_albumart_pane

0xb5fc,	// (0x0002d275) cell_navstr_albumart_pane_g1

0xc746,	// (0x0002e3bf) cell_navstr_albumart_pane_g2

0xc756,	// (0x0002e3cf) cell_navstr_albumart_pane_g3

0xc74e,	// (0x0002e3c7) cell_navstr_albumart_pane_g4

0x0003,

0xfe34,	// (0x00031aad) cell_navstr_albumart_pane_g

0x9f59,	// (0x0002bbd2) bt_list_pane_ParamLimits

0x9f59,	// (0x0002bbd2) bt_list_pane

0x9f6c,	// (0x0002bbe5) bt_list_pane_t1

0x9f7b,	// (0x0002bbf4) bt_list_pane_t2

0x0001,

0xfe3d,	// (0x00031ab6) bt_list_pane_t

0x336d,	// (0x00024fe6) main_cale_prevew_pane

0x9f8a,	// (0x0002bc03) popup_cale_preview_window_ParamLimits

0x9f8a,	// (0x0002bc03) popup_cale_preview_window

0x3597,	// (0x00025210) bg_popup_preview_window_pane_cp05_ParamLimits

0x3597,	// (0x00025210) bg_popup_preview_window_pane_cp05

0x058f,	// (0x00022208) list_cale_preview_pane_ParamLimits

0x058f,	// (0x00022208) list_cale_preview_pane

0x9f9f,	// (0x0002bc18) list_double_cale_preview_pane_ParamLimits

0x9f9f,	// (0x0002bc18) list_double_cale_preview_pane

0x9fb0,	// (0x0002bc29) list_single_cale_preview_pane_ParamLimits

0x9fb0,	// (0x0002bc29) list_single_cale_preview_pane

0x05dd,	// (0x00022256) list_single_cale_preview_pane_g1

0x05e5,	// (0x0002225e) list_single_cale_preview_pane_t1_ParamLimits

0x05e5,	// (0x0002225e) list_single_cale_preview_pane_t1

0x9fc4,	// (0x0002bc3d) list_double_cale_preview_pane_g1

0x9fcc,	// (0x0002bc45) list_double_cale_preview_pane_t1_ParamLimits

0x9fcc,	// (0x0002bc45) list_double_cale_preview_pane_t1

0x9fe1,	// (0x0002bc5a) list_double_cale_preview_pane_t2_ParamLimits

0x9fe1,	// (0x0002bc5a) list_double_cale_preview_pane_t2

0x0001,

0xfe42,	// (0x00031abb) list_double_cale_preview_pane_t_ParamLimits

0xfe42,	// (0x00031abb) list_double_cale_preview_pane_t

0x336d,	// (0x00024fe6) main_ezdial_pane

0x3597,	// (0x00025210) main_sp_fs_email_pane_ParamLimits

0x97de,	// (0x0002b457) cmail_ddmenu_btn01_pane_ParamLimits

0x97de,	// (0x0002b457) cmail_ddmenu_btn01_pane

0x97f1,	// (0x0002b46a) cmail_ddmenu_btn02_pane_ParamLimits

0x97f1,	// (0x0002b46a) cmail_ddmenu_btn02_pane

0x9814,	// (0x0002b48d) cmail_ddmenu_btn03_pane_ParamLimits

0x9814,	// (0x0002b48d) cmail_ddmenu_btn03_pane

0x9839,	// (0x0002b4b2) main_sp_fs_ctrlbar_pane_ParamLimits

0x985a,	// (0x0002b4d3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9c8d,	// (0x0002b906) list_cmail_body_pane_ParamLimits

0xf07f,	// (0x00030cf8) bg_button_pane_cp12

0xf093,	// (0x00030d0c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xf093,	// (0x00030d0c) list_single_cmail_header_detail_pane_g3

0x9ce1,	// (0x0002b95a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9ce1,	// (0x0002b95a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc7,	// (0x00031a40) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc7,	// (0x00031a40) list_single_cmail_header_detail_pane_t

0x013f,	// (0x00021db8) phacti_term_pane_t2_ParamLimits

0x013f,	// (0x00021db8) phacti_term_pane_t2

0x0001,

0xfdd1,	// (0x00031a4a) phacti_term_pane_t_ParamLimits

0xfdd1,	// (0x00031a4a) phacti_term_pane_t

0x0612,	// (0x0002228b) aid_size_list_single_double

0x9ff9,	// (0x0002bc72) popup_ezdial_listscroll_window

0xa00f,	// (0x0002bc88) popup_number_entry_window_cp01

0xb473,	// (0x0002d0ec) bg_popup_call_pane_cp09

0x0643,	// (0x000222bc) ezdial_list_pane

0x064b,	// (0x000222c4) scroll_pane_cp23

0xc969,	// (0x0002e5e2) bg_button_pane_cp028_ParamLimits

0xc969,	// (0x0002e5e2) bg_button_pane_cp028

0xa01b,	// (0x0002bc94) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa01b,	// (0x0002bc94) cmail_ddmenu_btn01_pane_g1

0xa02a,	// (0x0002bca3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa02a,	// (0x0002bca3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe47,	// (0x00031ac0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe47,	// (0x00031ac0) cmail_ddmenu_btn01_pane_g

0x0671,	// (0x000222ea) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0671,	// (0x000222ea) cmail_ddmenu_btn01_pane_t1

0xc969,	// (0x0002e5e2) bg_button_pane_cp029_ParamLimits

0xc969,	// (0x0002e5e2) bg_button_pane_cp029

0xa03a,	// (0x0002bcb3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa03a,	// (0x0002bcb3) cmail_ddmenu_btn02_pane_g1

0xa055,	// (0x0002bcce) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa055,	// (0x0002bcce) cmail_ddmenu_btn02_pane_t1

0x3597,	// (0x00025210) bg_button_pane_cp031_ParamLimits

0x3597,	// (0x00025210) bg_button_pane_cp031

0xa03a,	// (0x0002bcb3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa03a,	// (0x0002bcb3) cmail_ddmenu_btn03_pane_g1

0xa055,	// (0x0002bcce) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa055,	// (0x0002bcce) cmail_ddmenu_btn03_pane_t1

0x7d43,	// (0x000299bc) cell_dialer2_keypad_pane_t1_ParamLimits

0x7d5d,	// (0x000299d6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7d5d,	// (0x000299d6) cell_dialer2_keypad_pane_t1_copy1

0x9116,	// (0x0002ad8f) ncimui_group_button_pane

0x3597,	// (0x00025210) main_sp_fs_calendar_pane_ParamLimits

0x9c8d,	// (0x0002b906) list_single_cmail_header_caption_pane_ParamLimits

0x0196,	// (0x00021e0f) aid_recal_txt_sm_pane

0x336d,	// (0x00024fe6) mian_recal_day_pane

0x01f0,	// (0x00021e69) popup_sp_fs_cale_preview_window_ParamLimits

0x336d,	// (0x00024fe6) list_recal_day_pane

0x06cf,	// (0x00022348) list_single_recal_day_pane_ParamLimits

0x06cf,	// (0x00022348) list_single_recal_day_pane

0x06e1,	// (0x0002235a) list_single_recal_day_pane_g1_ParamLimits

0x06e1,	// (0x0002235a) list_single_recal_day_pane_g1

0x06ed,	// (0x00022366) list_single_recal_day_pane_g2_ParamLimits

0x06ed,	// (0x00022366) list_single_recal_day_pane_g2

0x06f9,	// (0x00022372) list_single_recal_day_pane_g3_ParamLimits

0x06f9,	// (0x00022372) list_single_recal_day_pane_g3

0xa07c,	// (0x0002bcf5) list_single_recal_day_pane_g4_ParamLimits

0xa07c,	// (0x0002bcf5) list_single_recal_day_pane_g4

0x0711,	// (0x0002238a) list_single_recal_day_pane_g5_ParamLimits

0x0711,	// (0x0002238a) list_single_recal_day_pane_g5

0x071d,	// (0x00022396) list_single_recal_day_pane_g6_ParamLimits

0x071d,	// (0x00022396) list_single_recal_day_pane_g6

0x0005,

0xfe56,	// (0x00031acf) list_single_recal_day_pane_g_ParamLimits

0xfe56,	// (0x00031acf) list_single_recal_day_pane_g

0x0729,	// (0x000223a2) list_single_recal_day_pane_t1

0x0737,	// (0x000223b0) list_single_recal_day_pane_t2

0x0001,

0xfe63,	// (0x00031adc) list_single_recal_day_pane_t

0xa08a,	// (0x0002bd03) ncimui_query_button_pane_ParamLimits

0xa08a,	// (0x0002bd03) ncimui_query_button_pane

0xa09a,	// (0x0002bd13) ncimui_query_button_pane_t1_ParamLimits

0xa09a,	// (0x0002bd13) ncimui_query_button_pane_t1

0x0768,	// (0x000223e1) ncimui_query_button_pane_t2_ParamLimits

0x0768,	// (0x000223e1) ncimui_query_button_pane_t2

0x0001,

0xfe68,	// (0x00031ae1) ncimui_query_button_pane_t_ParamLimits

0xfe68,	// (0x00031ae1) ncimui_query_button_pane_t

0xa0ad,	// (0x0002bd26) query_button_pane_ParamLimits

0xa0ad,	// (0x0002bd26) query_button_pane

0x336d,	// (0x00024fe6) bg_button_pane_cp0028

0x0788,	// (0x00022401) query_button_pane_t1

0x6640,	// (0x000282b9) main_tport_pane_ParamLimits

0x9b9c,	// (0x0002b815) bg_popup_window_pane_cp01_ParamLimits

0x9b9c,	// (0x0002b815) bg_popup_window_pane_cp01

0x9bb4,	// (0x0002b82d) heading_pane_cp08_ParamLimits

0x9bb4,	// (0x0002b82d) heading_pane_cp08

0x9bc6,	// (0x0002b83f) heading_pane_cp07_ParamLimits

0x9bc6,	// (0x0002b83f) heading_pane_cp07

0xf018,	// (0x00030c91) cell_tport_appsw_pane_g2

0x0002,

0xfdb4,	// (0x00031a2d) cell_tport_appsw_pane_g

0xb5f4,	// (0x0002d26d) input_candi_list_open_g1

0xadc8,	// (0x0002ca41) list_cale_time_pane_g6_ParamLimits

0xadc8,	// (0x0002ca41) list_cale_time_pane_g6

0x6eeb,	// (0x00028b64) aid_size_touch_calib_1_ParamLimits

0x6eeb,	// (0x00028b64) aid_size_touch_calib_1

0x6ef7,	// (0x00028b70) aid_size_touch_calib_2_ParamLimits

0x6ef7,	// (0x00028b70) aid_size_touch_calib_2

0x6f0b,	// (0x00028b84) aid_size_touch_calib_3_ParamLimits

0x6f0b,	// (0x00028b84) aid_size_touch_calib_3

0x6f23,	// (0x00028b9c) aid_size_touch_calib_4_ParamLimits

0x6f23,	// (0x00028b9c) aid_size_touch_calib_4

0x6f35,	// (0x00028bae) main_touch_calib_button_group_pane_ParamLimits

0x6f35,	// (0x00028bae) main_touch_calib_button_group_pane

0x6f4b,	// (0x00028bc4) main_touch_calib_pane_g1_ParamLimits

0x6f57,	// (0x00028bd0) main_touch_calib_pane_g2_ParamLimits

0x6f63,	// (0x00028bdc) main_touch_calib_pane_g3_ParamLimits

0x6f6f,	// (0x00028be8) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x00031410) main_touch_calib_pane_g_ParamLimits

0x6f7b,	// (0x00028bf4) main_touch_calib_pane_t1_ParamLimits

0x6f93,	// (0x00028c0c) main_touch_calib_pane_t2_ParamLimits

0x6fab,	// (0x00028c24) main_touch_calib_pane_t3_ParamLimits

0x6fbd,	// (0x00028c36) main_touch_calib_pane_t4_ParamLimits

0x6fcf,	// (0x00028c48) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x00031419) main_touch_calib_pane_t_ParamLimits

0xd1ef,	// (0x0002ee68) list_single_fp_cale_pane_g3_ParamLimits

0xd1ef,	// (0x0002ee68) list_single_fp_cale_pane_g3

0xdb52,	// (0x0002f7cb) bg_button_pane_cp012_ParamLimits

0xdb52,	// (0x0002f7cb) bg_vkb2_func_pane_cp03_ParamLimits

0x3263,	// (0x00024edc) cell_vitu2_function_top_pane_g1_ParamLimits

0xdb52,	// (0x0002f7cb) bg_vkb2_func_pane_cp04_ParamLimits

0x90cc,	// (0x0002ad45) main_ncimui_button_group_pane_ParamLimits

0x90cc,	// (0x0002ad45) main_ncimui_button_group_pane

0x9104,	// (0x0002ad7d) main_ncimui_pane_t3_ParamLimits

0x9104,	// (0x0002ad7d) main_ncimui_pane_t3

0x00d9,	// (0x00021d52) phacti_button_group_pane

0x0612,	// (0x0002228b) aid_size_list_single_double_ParamLimits

0x9ff9,	// (0x0002bc72) popup_ezdial_listscroll_window_ParamLimits

0xa00f,	// (0x0002bc88) popup_number_entry_window_cp01_ParamLimits

0xa0bf,	// (0x0002bd38) phacti_button_pane_ParamLimits

0xa0bf,	// (0x0002bd38) phacti_button_pane

0x336d,	// (0x00024fe6) bg_button_pane_cp14

0x07a5,	// (0x0002241e) phacti_button_pane_t1

0xa0ce,	// (0x0002bd47) main_touch_calib_button_pane_ParamLimits

0xa0ce,	// (0x0002bd47) main_touch_calib_button_pane

0x3f6f,	// (0x00025be8) bg_button_pane_cp18_ParamLimits

0x3f6f,	// (0x00025be8) bg_button_pane_cp18

0x07c3,	// (0x0002243c) main_touch_calib_button_pane_t1_ParamLimits

0x07c3,	// (0x0002243c) main_touch_calib_button_pane_t1

0x07d9,	// (0x00022452) main_touch_calib_button_pane_t2_ParamLimits

0x07d9,	// (0x00022452) main_touch_calib_button_pane_t2

0x0001,

0xfe6d,	// (0x00031ae6) main_touch_calib_button_pane_t_ParamLimits

0xfe6d,	// (0x00031ae6) main_touch_calib_button_pane_t

0x336d,	// (0x00024fe6) cell_ncimui_button_pane

0x336d,	// (0x00024fe6) bg_button_pane_cp032

0x07f7,	// (0x00022470) cell_ncimui_button_pane_t1

0xd981,	// (0x0002f5fa) image3_infobar_pane_ParamLimits

0xd981,	// (0x0002f5fa) image3_infobar_pane

0x946b,	// (0x0002b0e4) fs_bigclock_status_pane_ParamLimits

0x946b,	// (0x0002b0e4) fs_bigclock_status_pane

0x9478,	// (0x0002b0f1) main_fs_bigclock_clock_pane_ParamLimits

0x9478,	// (0x0002b0f1) main_fs_bigclock_clock_pane

0x9487,	// (0x0002b100) main_fs_bigclock_indi_pane_ParamLimits

0x9487,	// (0x0002b100) main_fs_bigclock_indi_pane

0x949b,	// (0x0002b114) main_fs_bigclock_swipe_pane_ParamLimits

0x949b,	// (0x0002b114) main_fs_bigclock_swipe_pane

0x336d,	// (0x00024fe6) main_fs_clock_dumped_data

0xeb5b,	// (0x000307d4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xeb5b,	// (0x000307d4) list_single_fs_bigclock_indicator_pane_g1

0xeb75,	// (0x000307ee) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xeb75,	// (0x000307ee) list_single_fs_bigclock_indicator_pane_g2

0xeb8f,	// (0x00030808) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xeb8f,	// (0x00030808) list_single_fs_bigclock_indicator_pane_g3

0xeba9,	// (0x00030822) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xeba9,	// (0x00030822) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x00031923) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x00031923) list_single_fs_bigclock_indicator_pane_g

0xebcd,	// (0x00030846) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xebcd,	// (0x00030846) list_single_fs_bigclock_indicator_pane_t1

0xebf5,	// (0x0003086e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xebf5,	// (0x0003086e) list_single_fs_bigclock_indicator_pane_t2

0xec1d,	// (0x00030896) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xec1d,	// (0x00030896) list_single_fs_bigclock_indicator_pane_t3

0xec45,	// (0x000308be) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xec45,	// (0x000308be) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x0003192e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x0003192e) list_single_fs_bigclock_indicator_pane_t

0x0805,	// (0x0002247e) image3_infobar_fav_pane_ParamLimits

0x0805,	// (0x0002247e) image3_infobar_fav_pane

0x0815,	// (0x0002248e) image3_infobar_loc_pane_ParamLimits

0x0815,	// (0x0002248e) image3_infobar_loc_pane

0x0829,	// (0x000224a2) image3_infobar_time_pane_ParamLimits

0x0829,	// (0x000224a2) image3_infobar_time_pane

0xce5e,	// (0x0002ead7) image3_infobar_time_pane_g1

0x0839,	// (0x000224b2) image3_infobar_time_pane_t1

0xce5e,	// (0x0002ead7) image3_infobar_loc_pane_g1

0x0847,	// (0x000224c0) image3_infobar_loc_pane_g2

0x0001,

0xfe72,	// (0x00031aeb) image3_infobar_loc_pane_g

0x084f,	// (0x000224c8) image3_infobar_loc_pane_t1

0xce5e,	// (0x0002ead7) image3_infobar_fav_pane_g1

0x085d,	// (0x000224d6) image3_infobar_fav_pane_g2

0x0001,

0xfe77,	// (0x00031af0) image3_infobar_fav_pane_g

0x0865,	// (0x000224de) fs_bigclock_status_battery_pane

0x086e,	// (0x000224e7) fs_bigclock_status_signal_pane

0x0877,	// (0x000224f0) fs_bigclock_status_title_pane

0x0880,	// (0x000224f9) fs_bigclock_status_signal_pane_g1

0x0889,	// (0x00022502) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe7c,	// (0x00031af5) fs_bigclock_status_signal_pane_g

0x0891,	// (0x0002250a) fs_bigclock_status_battery_pane_g1

0x089a,	// (0x00022513) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe81,	// (0x00031afa) fs_bigclock_status_battery_pane_g

0x08a2,	// (0x0002251b) fs_bigclock_status_title_pane_t1

0xce5e,	// (0x0002ead7) main_fs_bigclock_clock_pane_g1

0x08b0,	// (0x00022529) main_fs_bigclock_clock_pane_g2

0x08b0,	// (0x00022529) main_fs_bigclock_clock_pane_g3

0x08b0,	// (0x00022529) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe86,	// (0x00031aff) main_fs_bigclock_clock_pane_g

0x08b8,	// (0x00022531) main_fs_bigclock_clock_pane_t1

0x08c6,	// (0x0002253f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8f,	// (0x00031b08) main_fs_bigclock_clock_pane_t

0x08d5,	// (0x0002254e) list_single_fs_bigclock_indicator_pane_ParamLimits

0x08d5,	// (0x0002254e) list_single_fs_bigclock_indicator_pane

0xa0e1,	// (0x0002bd5a) list_single_fs_bigclock_pane_ParamLimits

0xa0e1,	// (0x0002bd5a) list_single_fs_bigclock_pane

0x094d,	// (0x000225c6) main_fs_bigclock_indicator_pane_t1

0x095c,	// (0x000225d5) list_single_fs_bigclock_pane_g1

0x0964,	// (0x000225dd) list_single_fs_bigclock_pane_t1

0xce5e,	// (0x0002ead7) main_fs_bigclock_swipe_pane_g1

0x09a2,	// (0x0002261b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea0,	// (0x00031b19) main_fs_bigclock_swipe_pane_g

0x09aa,	// (0x00022623) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x09aa,	// (0x00022623) main_fs_bigclock_swipe_pane_t1

0x56f9,	// (0x00027372) call_type_pane_ParamLimits

0x336d,	// (0x00024fe6) main_btmg_pane

0x038c,	// (0x00022005) list_single_cale_mrui_row_pane_g2_ParamLimits

0x038c,	// (0x00022005) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe13,	// (0x00031a8c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe13,	// (0x00031a8c) list_single_cale_mrui_row_pane_g

0x06bf,	// (0x00022338) list_recal_vselct_arw_lo_pane

0x06c7,	// (0x00022340) list_recal_vselct_arw_up_pane

0x06b6,	// (0x0002232f) list_recal_vselct_pane

0x09c7,	// (0x00022640) btmg_button_pane

0xa141,	// (0x0002bdba) main_btmg_pane_g1

0x336d,	// (0x00024fe6) bg_button_pane_cp044

0x09d7,	// (0x00022650) btmg_button_pane_t1

0xc961,	// (0x0002e5da) aid_listscroll_gen

0x3597,	// (0x00025210) main_cntbar_detail_pane

0xf036,	// (0x00030caf) list_cmail_folder_pane

0xf046,	// (0x00030cbf) sp_fs_scroll_pane_cp03_ParamLimits

0xf052,	// (0x00030ccb) list_single_fs_dyc_pane_cp01_ParamLimits

0xf052,	// (0x00030ccb) list_single_fs_dyc_pane_cp01

0x09fd,	// (0x00022676) aid_size_cmail_indent

0xe1f3,	// (0x0002fe6c) list_single_dyc_row_pane_cp01

0xa171,	// (0x0002bdea) cntbar_detail_list_pane_ParamLimits

0xa171,	// (0x0002bdea) cntbar_detail_list_pane

0xa1b7,	// (0x0002be30) main_cntbar_detail_cont_pane_ParamLimits

0xa1b7,	// (0x0002be30) main_cntbar_detail_cont_pane

0xa1cb,	// (0x0002be44) scroll_pane_cp032_ParamLimits

0xa1cb,	// (0x0002be44) scroll_pane_cp032

0xa1d7,	// (0x0002be50) cntbar_detail_list_event_pane_ParamLimits

0xa1d7,	// (0x0002be50) cntbar_detail_list_event_pane

0xa181,	// (0x0002bdfa) cntbar_detail_list_shct_pane

0x0a7e,	// (0x000226f7) aid_list_gen

0x413f,	// (0x00025db8) aid_scroll

0xe133,	// (0x0002fdac) aid_size_touch_scroll_bar

0xf068,	// (0x00030ce1) aid_list_double

0xa1e8,	// (0x0002be61) aid_list_single

0xe205,	// (0x0002fe7e) aid_list_single_lg

0xa1f1,	// (0x0002be6a) aid_list_z_g_a_sm

0xa1f9,	// (0x0002be72) aid_list_z_g_d

0xa201,	// (0x0002be7a) aid_txt_z_prm

0xa20f,	// (0x0002be88) aid_txt_z_prm_cp01

0xa21d,	// (0x0002be96) aid_txt_z_sec

0xa22b,	// (0x0002bea4) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa22b,	// (0x0002bea4) main_cntbar_detail_cont_pane_g1

0xa23f,	// (0x0002beb8) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa23f,	// (0x0002beb8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea5,	// (0x00031b1e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea5,	// (0x00031b1e) main_cntbar_detail_cont_pane_g

0x0aec,	// (0x00022765) main_cntbar_detail_cont_pane_t1

0x0afa,	// (0x00022773) main_cntbar_detail_cont_pane_t2

0x0b08,	// (0x00022781) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaa,	// (0x00031b23) main_cntbar_detail_cont_pane_t

0xa24f,	// (0x0002bec8) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa24f,	// (0x0002bec8) cell_cntbar_detail_list_shct_pane

0x0b28,	// (0x000227a1) cntbar_detail_list_shct_pane_g1

0x0b31,	// (0x000227aa) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb1,	// (0x00031b2a) cntbar_detail_list_shct_pane_g

0xa261,	// (0x0002beda) cntbar_detail_list_event_pane_g1_ParamLimits

0xa261,	// (0x0002beda) cntbar_detail_list_event_pane_g1

0xa26d,	// (0x0002bee6) cntbar_detail_list_event_pane_g2_ParamLimits

0xa26d,	// (0x0002bee6) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb6,	// (0x00031b2f) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb6,	// (0x00031b2f) cntbar_detail_list_event_pane_g

0xa2d9,	// (0x0002bf52) cntbar_detail_list_event_pane_t1_ParamLimits

0xa2d9,	// (0x0002bf52) cntbar_detail_list_event_pane_t1

0xa2ee,	// (0x0002bf67) cntbar_detail_list_event_pane_t2_ParamLimits

0xa2ee,	// (0x0002bf67) cntbar_detail_list_event_pane_t2

0x0002,

0xfec3,	// (0x00031b3c) cntbar_detail_list_event_pane_t_ParamLimits

0xfec3,	// (0x00031b3c) cntbar_detail_list_event_pane_t

0xce5e,	// (0x0002ead7) cell_cntbar_detail_list_shct_pane_g1

0xb432,	// (0x0002d0ab) navi_pane_mv_g3

0x3597,	// (0x00025210) main_cntbar_detail_pane_ParamLimits

0x336d,	// (0x00024fe6) main_notif_wgt_pane

0xd6ed,	// (0x0002f366) aid_tch_main_mp4_pane_g4

0xd8f7,	// (0x0002f570) popup_slider_window_cp02

0x06b6,	// (0x0002232f) list_recal_day_event_pane

0xa149,	// (0x0002bdc2) cntbar_detail_btn_pane_ParamLimits

0xa149,	// (0x0002bdc2) cntbar_detail_btn_pane

0xa15c,	// (0x0002bdd5) cntbar_detail_btn_pane_cp01_ParamLimits

0xa15c,	// (0x0002bdd5) cntbar_detail_btn_pane_cp01

0xa181,	// (0x0002bdfa) cntbar_detail_list_shct_pane_ParamLimits

0xa191,	// (0x0002be0a) cntbar_detail_pane_g1_ParamLimits

0xa191,	// (0x0002be0a) cntbar_detail_pane_g1

0xa1a1,	// (0x0002be1a) cntbar_detail_pane_t1_ParamLimits

0xa1a1,	// (0x0002be1a) cntbar_detail_pane_t1

0xa279,	// (0x0002bef2) cntbar_detail_list_event_pane_g3_ParamLimits

0xa279,	// (0x0002bef2) cntbar_detail_list_event_pane_g3

0xa291,	// (0x0002bf0a) cntbar_detail_list_event_pane_g4_ParamLimits

0xa291,	// (0x0002bf0a) cntbar_detail_list_event_pane_g4

0xa2a9,	// (0x0002bf22) cntbar_detail_list_event_pane_g5_ParamLimits

0xa2a9,	// (0x0002bf22) cntbar_detail_list_event_pane_g5

0xa2c1,	// (0x0002bf3a) cntbar_detail_list_event_pane_g6_ParamLimits

0xa2c1,	// (0x0002bf3a) cntbar_detail_list_event_pane_g6

0xa303,	// (0x0002bf7c) cntbar_detail_list_event_pane_t3_ParamLimits

0xa303,	// (0x0002bf7c) cntbar_detail_list_event_pane_t3

0xa315,	// (0x0002bf8e) popup_notif_wgt_window_ParamLimits

0xa315,	// (0x0002bf8e) popup_notif_wgt_window

0xa32a,	// (0x0002bfa3) popup_submenu_window_cp01_ParamLimits

0xa32a,	// (0x0002bfa3) popup_submenu_window_cp01

0xb473,	// (0x0002d0ec) bg_popup_window_pane_cp10

0x0c08,	// (0x00022881) listscroll_notif_wgt_pane

0x0c10,	// (0x00022889) list_notif_wgt_window

0x0c19,	// (0x00022892) scroll_pane_cp033

0x0c22,	// (0x0002289b) list_notif_wgt_row_pane_ParamLimits

0x0c22,	// (0x0002289b) list_notif_wgt_row_pane

0x0c34,	// (0x000228ad) aid_size_list_notif_wgt_del

0x0c3d,	// (0x000228b6) list_notif_wgt_row_pane_g1

0x0c45,	// (0x000228be) list_notif_wgt_row_pane_g2

0x0c4d,	// (0x000228c6) list_notif_wgt_row_pane_g3

0x0002,

0xfeca,	// (0x00031b43) list_notif_wgt_row_pane_g

0x0c56,	// (0x000228cf) list_notif_wgt_row_pane_t1

0x0c64,	// (0x000228dd) list_notif_wgt_row_pane_t2

0x0c72,	// (0x000228eb) list_notif_wgt_row_pane_t3

0x0002,

0xfed1,	// (0x00031b4a) list_notif_wgt_row_pane_t

0xde3d,	// (0x0002fab6) list_recal_day_event_pane_g1

0x0c80,	// (0x000228f9) list_recal_day_event_pane_t1

0x336d,	// (0x00024fe6) bg_button_pane_cp045

0xa33a,	// (0x0002bfb3) cntbar_detail_btn_pane_t1

0xc969,	// (0x0002e5e2) main_callh_pane_ParamLimits

0xc969,	// (0x0002e5e2) main_callh_pane

0x336d,	// (0x00024fe6) main_coverflow0_pane

0x336d,	// (0x00024fe6) main_wgtman_pane

0x94a7,	// (0x0002b120) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x94a7,	// (0x0002b120) main_fs_bigclock_unlock_btn_pane

0xf010,	// (0x00030c89) bg_button_pane_cp16

0xf020,	// (0x00030c99) cell_tport_appsw_pane_g3

0xa348,	// (0x0002bfc1) cf0_flow_pane_ParamLimits

0xa348,	// (0x0002bfc1) cf0_flow_pane

0x0cac,	// (0x00022925) listscroll_cf0_pane

0x0cb5,	// (0x0002292e) main_cf0_pane_g1

0xa35d,	// (0x0002bfd6) main_cf0_pane_t1_ParamLimits

0xa35d,	// (0x0002bfd6) main_cf0_pane_t1

0xa373,	// (0x0002bfec) main_cf0_pane_t2_ParamLimits

0xa373,	// (0x0002bfec) main_cf0_pane_t2

0x0001,

0xfed8,	// (0x00031b51) main_cf0_pane_t_ParamLimits

0xfed8,	// (0x00031b51) main_cf0_pane_t

0x0ce3,	// (0x0002295c) scroll_pane_cp11

0xa389,	// (0x0002c002) cf0_flow_pane_g1

0xa391,	// (0x0002c00a) cf0_flow_pane_g2

0x0001,

0xfedd,	// (0x00031b56) cf0_flow_pane_g

0xa399,	// (0x0002c012) cf0_flow_pane_t1

0x336d,	// (0x00024fe6) main_call6_pane

0x336d,	// (0x00024fe6) main_calllock_pane

0xa3a7,	// (0x0002c020) call6_btn_grp_pane_ParamLimits

0xa3a7,	// (0x0002c020) call6_btn_grp_pane

0xa3bd,	// (0x0002c036) call6_pane_g1_ParamLimits

0xa3bd,	// (0x0002c036) call6_pane_g1

0xa3d0,	// (0x0002c049) popup_call6_1st_window_ParamLimits

0xa3d0,	// (0x0002c049) popup_call6_1st_window

0xa3df,	// (0x0002c058) popup_call6_2nd_window_ParamLimits

0xa3df,	// (0x0002c058) popup_call6_2nd_window

0xa3ee,	// (0x0002c067) cell_call6_btn_pane_ParamLimits

0xa3ee,	// (0x0002c067) cell_call6_btn_pane

0xb473,	// (0x0002d0ec) bg_popup_call2_in_pane_cp03

0x0d4b,	// (0x000229c4) popup_call6_1st_window_g1

0x0d53,	// (0x000229cc) popup_call6_1st_window_g2

0x0d5b,	// (0x000229d4) popup_call6_1st_window_g3

0x0002,

0xfee2,	// (0x00031b5b) popup_call6_1st_window_g

0x0d63,	// (0x000229dc) popup_call6_1st_window_t1

0x0d72,	// (0x000229eb) popup_call6_1st_window_t2

0x0d80,	// (0x000229f9) popup_call6_1st_window_t3

0x0002,

0xfee9,	// (0x00031b62) popup_call6_1st_window_t

0xb473,	// (0x0002d0ec) bg_popup_call2_in_pane_cp04

0x0d4b,	// (0x000229c4) popup_call6_2nd_window_g1

0x0d53,	// (0x000229cc) popup_call6_2nd_window_g2

0x0d5b,	// (0x000229d4) popup_call6_2nd_window_g3

0x0002,

0xfee2,	// (0x00031b5b) popup_call6_2nd_window_g

0x0d63,	// (0x000229dc) popup_call6_2nd_window_t1

0x336d,	// (0x00024fe6) bg_button_pane_cp15

0x0d8e,	// (0x00022a07) cell_call6_btn_pane_g1

0x0d97,	// (0x00022a10) cell_call6_btn_pane_t1

0xa402,	// (0x0002c07b) listscroll_wgtman_pane_ParamLimits

0xa402,	// (0x0002c07b) listscroll_wgtman_pane

0xa421,	// (0x0002c09a) wgtman_btn_pane_ParamLimits

0xa421,	// (0x0002c09a) wgtman_btn_pane

0xb2b4,	// (0x0002cf2d) aid_scroll_copy1

0x0df3,	// (0x00022a6c) list_wgtman_pane

0xa461,	// (0x0002c0da) wgtman_btn_pane_g1_ParamLimits

0xa461,	// (0x0002c0da) wgtman_btn_pane_g1

0xa48d,	// (0x0002c106) wgtman_btn_pane_t1_ParamLimits

0xa48d,	// (0x0002c106) wgtman_btn_pane_t1

0x0e5c,	// (0x00022ad5) wgtman_btn_pane_t2_ParamLimits

0x0e5c,	// (0x00022ad5) wgtman_btn_pane_t2

0x0001,

0xfef0,	// (0x00031b69) wgtman_btn_pane_t_ParamLimits

0xfef0,	// (0x00031b69) wgtman_btn_pane_t

0xa4ca,	// (0x0002c143) listrow_wgtman_pane_ParamLimits

0xa4ca,	// (0x0002c143) listrow_wgtman_pane

0xa4db,	// (0x0002c154) listrow_wgtman_pane_g1

0xa4e4,	// (0x0002c15d) listrow_wgtman_pane_g2

0x0001,

0xfef5,	// (0x00031b6e) listrow_wgtman_pane_g

0xa4ec,	// (0x0002c165) listrow_wgtman_pane_t1

0xa4fa,	// (0x0002c173) listrow_wgtman_pane_t2

0x0001,

0xfefa,	// (0x00031b73) listrow_wgtman_pane_t

0xa508,	// (0x0002c181) wait_bar_pane_cp09

0x0eb9,	// (0x00022b32) main_calllock_btn_pane

0x0ec1,	// (0x00022b3a) main_calllock_pane_g1

0x336d,	// (0x00024fe6) bg_button_pane_cp17

0x0eca,	// (0x00022b43) main_calllock_btn_pane_g1

0x0ed3,	// (0x00022b4c) main_calllock_btn_pane_t1

0x336d,	// (0x00024fe6) main_dialer3_pane

0x336d,	// (0x00024fe6) main_fmrd2_pane

0xce5e,	// (0x0002ead7) main_fs_bigclock_unlock_btn_pane_g1

0x0eea,	// (0x00022b63) main_fs_bigclock_unlock_btn_pane_t1

0xa510,	// (0x0002c189) area_fmrd2_info_pane_ParamLimits

0xa510,	// (0x0002c189) area_fmrd2_info_pane

0xa51f,	// (0x0002c198) area_fmrd2_visual_pane_ParamLimits

0xa51f,	// (0x0002c198) area_fmrd2_visual_pane

0xa52d,	// (0x0002c1a6) fmrd2_indi_pane_ParamLimits

0xa52d,	// (0x0002c1a6) fmrd2_indi_pane

0xa53a,	// (0x0002c1b3) area_fmrd2_visual_pane_g1

0xa542,	// (0x0002c1bb) area_fmrd2_visual_pane_t1

0xa550,	// (0x0002c1c9) area_fmrd2_visual_pane_t2

0xa55e,	// (0x0002c1d7) area_fmrd2_visual_pane_t3

0x0002,

0xff04,	// (0x00031b7d) area_fmrd2_visual_pane_t

0xa56c,	// (0x0002c1e5) area_fmrd2_info_pane_g1

0xa574,	// (0x0002c1ed) area_fmrd2_info_pane_t1

0xa582,	// (0x0002c1fb) area_fmrd2_info_pane_t2

0xa590,	// (0x0002c209) area_fmrd2_info_pane_t3

0xa59e,	// (0x0002c217) area_fmrd2_info_pane_t4

0x0003,

0xff0b,	// (0x00031b84) area_fmrd2_info_pane_t

0xa5ac,	// (0x0002c225) fmrd2_indi_pane_t1

0xa5ba,	// (0x0002c233) fmrd2_indi_pane_t2

0xa5c8,	// (0x0002c241) fmrd2_indi_pane_t3

0x0002,

0xff14,	// (0x00031b8d) fmrd2_indi_pane_t

0xebb8,	// (0x00030831) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xebb8,	// (0x00030831) list_single_fs_bigclock_indicator_pane_g5

0xec5a,	// (0x000308d3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xec5a,	// (0x000308d3) list_single_fs_bigclock_indicator_pane_t5

0x9dbc,	// (0x0002ba35) aid_cell_bcale_month_pane_ParamLimits

0x9dbc,	// (0x0002ba35) aid_cell_bcale_month_pane

0x9dce,	// (0x0002ba47) bcale_month_pane_ParamLimits

0x9dce,	// (0x0002ba47) bcale_month_pane

0x9de0,	// (0x0002ba59) bcale_preview_pane_ParamLimits

0x9de0,	// (0x0002ba59) bcale_preview_pane

0x0964,	// (0x000225dd) list_single_fs_bigclock_pane_t1_ParamLimits

0x097e,	// (0x000225f7) list_single_fs_bigclock_pane_t2_ParamLimits

0x097e,	// (0x000225f7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe9b,	// (0x00031b14) list_single_fs_bigclock_pane_t_ParamLimits

0xfe9b,	// (0x00031b14) list_single_fs_bigclock_pane_t

0x0ee2,	// (0x00022b5b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeff,	// (0x00031b78) main_fs_bigclock_unlock_btn_pane_g

0xa5d6,	// (0x0002c24f) aid_dia3_key_size_ParamLimits

0xa5d6,	// (0x0002c24f) aid_dia3_key_size

0xa5e5,	// (0x0002c25e) aid_dia3_listrow_size_ParamLimits

0xa5e5,	// (0x0002c25e) aid_dia3_listrow_size

0xa5f8,	// (0x0002c271) dia3_keypad_fun_pane_ParamLimits

0xa5f8,	// (0x0002c271) dia3_keypad_fun_pane

0xa60c,	// (0x0002c285) dia3_keypad_num_pane_ParamLimits

0xa60c,	// (0x0002c285) dia3_keypad_num_pane

0xa61d,	// (0x0002c296) dia3_listscroll_pane_ParamLimits

0xa61d,	// (0x0002c296) dia3_listscroll_pane

0xa62e,	// (0x0002c2a7) dia3_numentry_pane_ParamLimits

0xa62e,	// (0x0002c2a7) dia3_numentry_pane

0x1005,	// (0x00022c7e) dia3_list_pane

0x100e,	// (0x00022c87) scroll_pane_cp12

0x336d,	// (0x00024fe6) bg_dia3_numentry_pane

0xa640,	// (0x0002c2b9) dia3_numentry_pane_t1

0xa64f,	// (0x0002c2c8) cell_dia3_key_num_pane

0xa657,	// (0x0002c2d0) cell_dia3_key0_fun_pane_ParamLimits

0xa657,	// (0x0002c2d0) cell_dia3_key0_fun_pane

0xa66b,	// (0x0002c2e4) cell_dia3_key1_fun_pane_ParamLimits

0xa66b,	// (0x0002c2e4) cell_dia3_key1_fun_pane

0xa682,	// (0x0002c2fb) dia3_listrow_pane

0xe8dc,	// (0x00030555) bg_dia3_numentry_pane_g1

0x336d,	// (0x00024fe6) bg_button_pane_cp21

0x1055,	// (0x00022cce) cell_dia3_key_num_pane_t1

0x1063,	// (0x00022cdc) cell_dia3_key_num_pane_t2

0x1072,	// (0x00022ceb) cell_dia3_key_num_pane_t3

0x1081,	// (0x00022cfa) cell_dia3_key_num_pane_t4

0x0003,

0xff1b,	// (0x00031b94) cell_dia3_key_num_pane_t

0x336d,	// (0x00024fe6) bg_button_pane_cp19

0x1090,	// (0x00022d09) cell_dia3_key0_fun_pane_g1

0x336d,	// (0x00024fe6) bg_button_pane_cp20

0xa694,	// (0x0002c30d) cell_dia3_key1_fun_pane_g1

0xa69c,	// (0x0002c315) area_left_week_number_pane

0x0a90,	// (0x00022709) area_top_day_name_pane

0xa6a5,	// (0x0002c31e) frame_month_view_pane

0xa6ad,	// (0x0002c326) grid_month_view_pane

0xa6b7,	// (0x0002c330) cell_top_day_name_pane_ParamLimits

0xa6b7,	// (0x0002c330) cell_top_day_name_pane

0xa6cd,	// (0x0002c346) cell_area_left_week_number_pane_ParamLimits

0xa6cd,	// (0x0002c346) cell_area_left_week_number_pane

0xa6e1,	// (0x0002c35a) cell_month_view_pane_ParamLimits

0xa6e1,	// (0x0002c35a) cell_month_view_pane

0x1109,	// (0x00022d82) frm_month_g1

0xa6fc,	// (0x0002c375) frm_month_g2

0xa704,	// (0x0002c37d) frm_month_g3

0xa70c,	// (0x0002c385) frm_month_g4

0xa714,	// (0x0002c38d) frm_month_g5

0xa71c,	// (0x0002c395) frm_month_g6

0xa724,	// (0x0002c39d) frm_month_g7

0x1142,	// (0x00022dbb) frm_month_g8

0xa72c,	// (0x0002c3a5) frm_month_g9

0xa735,	// (0x0002c3ae) frm_month_g10

0xa73e,	// (0x0002c3b7) frm_month_g11

0xa747,	// (0x0002c3c0) frm_month_g12

0xa750,	// (0x0002c3c9) frm_month_g13

0xa759,	// (0x0002c3d2) frm_month_g14

0xa762,	// (0x0002c3db) frm_month_g15

0xa76b,	// (0x0002c3e4) frm_month_g16

0x000f,

0xff24,	// (0x00031b9d) frm_month_g

0xa774,	// (0x0002c3ed) cell_top_day_name_pane_t1

0xa783,	// (0x0002c3fc) cell_area_left_week_number_pane_g1

0xa774,	// (0x0002c3ed) cell_area_left_week_number_pane_t1

0xce5e,	// (0x0002ead7) cell_month_view_pane_g1

0xa78b,	// (0x0002c404) cell_month_view_pane_t1

0x336d,	// (0x00024fe6) main_fps_pane

0xee54,	// (0x00030acd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xee54,	// (0x00030acd) cmail_ddmenu_btn02_pane_cp1

0xee70,	// (0x00030ae9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xee70,	// (0x00030ae9) cmail_ddmenu_btn02_pane_cp2

0xa049,	// (0x0002bcc2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa049,	// (0x0002bcc2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe4c,	// (0x00031ac5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe4c,	// (0x00031ac5) cmail_ddmenu_btn02_pane_g

0xa06a,	// (0x0002bce3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa06a,	// (0x0002bce3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe51,	// (0x00031aca) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe51,	// (0x00031aca) cmail_ddmenu_btn02_pane_t

0xa79a,	// (0x0002c413) fps_text_pane_ParamLimits

0xa79a,	// (0x0002c413) fps_text_pane

0xa7b0,	// (0x0002c429) main_fps_pane_g1_ParamLimits

0xa7b0,	// (0x0002c429) main_fps_pane_g1

0xa7c6,	// (0x0002c43f) wait_bar_pane_cp010_ParamLimits

0xa7c6,	// (0x0002c43f) wait_bar_pane_cp010

0xa7d7,	// (0x0002c450) fps_text_pane_t1_ParamLimits

0xa7d7,	// (0x0002c450) fps_text_pane_t1

0x7ec2,	// (0x00029b3b) cam4_image_uncrop_pane_g1

0x7ecb,	// (0x00029b44) cam4_image_uncrop_pane_g2

0x7ed4,	// (0x00029b4d) cam4_image_uncrop_pane_g3

0x7edd,	// (0x00029b56) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x000315a8) cam4_image_uncrop_pane_g

0xa682,	// (0x0002c2fb) dia3_listrow_pane_ParamLimits

0x336d,	// (0x00024fe6) main_phob2_pane

0x9c27,	// (0x0002b8a0) cell_tport_appsw_pane_cp02_ParamLimits

0x9c27,	// (0x0002b8a0) cell_tport_appsw_pane_cp02

0x9c37,	// (0x0002b8b0) cell_tport_appsw_pane_cp03_ParamLimits

0x9c37,	// (0x0002b8b0) cell_tport_appsw_pane_cp03

0x336d,	// (0x00024fe6) phob2_contact_card_pane

0x336d,	// (0x00024fe6) phob2_listscroll_pane

0x11ee,	// (0x00022e67) phob2_list_pane

0x11f6,	// (0x00022e6f) scroll_pane_cp034

0xa7ef,	// (0x0002c468) phob2_cc_data_pane_ParamLimits

0xa7ef,	// (0x0002c468) phob2_cc_data_pane

0xa80c,	// (0x0002c485) phob2_cc_listscroll_pane_ParamLimits

0xa80c,	// (0x0002c485) phob2_cc_listscroll_pane

0xa828,	// (0x0002c4a1) list_double_large_graphic_phob2_pane_ParamLimits

0xa828,	// (0x0002c4a1) list_double_large_graphic_phob2_pane

0xa83a,	// (0x0002c4b3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa83a,	// (0x0002c4b3) list_double_large_graphic_phob2_pane_g1

0xa847,	// (0x0002c4c0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa847,	// (0x0002c4c0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff45,	// (0x00031bbe) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff45,	// (0x00031bbe) list_double_large_graphic_phob2_pane_g

0xa853,	// (0x0002c4cc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa853,	// (0x0002c4cc) list_double_large_graphic_phob2_pane_t1

0xa868,	// (0x0002c4e1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa868,	// (0x0002c4e1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4a,	// (0x00031bc3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4a,	// (0x00031bc3) list_double_large_graphic_phob2_pane_t

0x336d,	// (0x00024fe6) list_highlight_pane_cp024

0x1281,	// (0x00022efa) phob2_cc_button_pane

0xa87a,	// (0x0002c4f3) phob2_cc_data_pane_g1_ParamLimits

0xa87a,	// (0x0002c4f3) phob2_cc_data_pane_g1

0xa88f,	// (0x0002c508) phob2_cc_data_pane_g2_ParamLimits

0xa88f,	// (0x0002c508) phob2_cc_data_pane_g2

0x0001,

0xff4f,	// (0x00031bc8) phob2_cc_data_pane_g_ParamLimits

0xff4f,	// (0x00031bc8) phob2_cc_data_pane_g

0xa8a1,	// (0x0002c51a) phob2_cc_data_pane_t1_ParamLimits

0xa8a1,	// (0x0002c51a) phob2_cc_data_pane_t1

0xa8b9,	// (0x0002c532) phob2_cc_data_pane_t2_ParamLimits

0xa8b9,	// (0x0002c532) phob2_cc_data_pane_t2

0xa8d1,	// (0x0002c54a) phob2_cc_data_pane_t3_ParamLimits

0xa8d1,	// (0x0002c54a) phob2_cc_data_pane_t3

0x0002,

0xff54,	// (0x00031bcd) phob2_cc_data_pane_t_ParamLimits

0xff54,	// (0x00031bcd) phob2_cc_data_pane_t

0x12d7,	// (0x00022f50) phob2_cc_list_pane_ParamLimits

0x12d7,	// (0x00022f50) phob2_cc_list_pane

0x12e3,	// (0x00022f5c) scroll_pane_cp035_ParamLimits

0x12e3,	// (0x00022f5c) scroll_pane_cp035

0x3597,	// (0x00025210) bg_button_pane_cp033

0x12ef,	// (0x00022f68) phob2_cc_button_pane_g1

0x12fb,	// (0x00022f74) phob2_cc_button_pane_t1

0x1310,	// (0x00022f89) phob2_cc_button_pane_t2

0x0001,

0xff5b,	// (0x00031bd4) phob2_cc_button_pane_t

0xa8e9,	// (0x0002c562) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa8e9,	// (0x0002c562) list_double_large_graphic_phob2_cc_pane

0xa8fb,	// (0x0002c574) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa8fb,	// (0x0002c574) list_double_large_graphic_phob2_cc_pane_g1

0xa907,	// (0x0002c580) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa907,	// (0x0002c580) list_double_large_graphic_phob2_cc_pane_g2

0xa913,	// (0x0002c58c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa913,	// (0x0002c58c) list_double_large_graphic_phob2_cc_pane_g3

0xa91f,	// (0x0002c598) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa91f,	// (0x0002c598) list_double_large_graphic_phob2_cc_pane_g4

0xa92b,	// (0x0002c5a4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa92b,	// (0x0002c5a4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff60,	// (0x00031bd9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff60,	// (0x00031bd9) list_double_large_graphic_phob2_cc_pane_g

0xa937,	// (0x0002c5b0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa937,	// (0x0002c5b0) list_double_large_graphic_phob2_cc_pane_t1

0xa960,	// (0x0002c5d9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa960,	// (0x0002c5d9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff6b,	// (0x00031be4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff6b,	// (0x00031be4) list_double_large_graphic_phob2_cc_pane_t

0x13de,	// (0x00023057) list_highlight_pane_cp025_ParamLimits

0x13de,	// (0x00023057) list_highlight_pane_cp025

0x3597,	// (0x00025210) bg_button_pane_cp033_ParamLimits

0x12ef,	// (0x00022f68) phob2_cc_button_pane_g1_ParamLimits

0x12fb,	// (0x00022f74) phob2_cc_button_pane_t1_ParamLimits

0x1310,	// (0x00022f89) phob2_cc_button_pane_t2_ParamLimits

0xff5b,	// (0x00031bd4) phob2_cc_button_pane_t_ParamLimits

0x35a5,	// (0x0002521e) popup_wgtman_window

0xe8fc,	// (0x00030575) scroll_pane_cp038

0xa443,	// (0x0002c0bc) wgtman_btn_pane_cp_01_ParamLimits

0xa443,	// (0x0002c0bc) wgtman_btn_pane_cp_01

0x13ec,	// (0x00023065) wgtman_content_pane

0x13f5,	// (0x0002306e) wgtman_heading_pane

0x336d,	// (0x00024fe6) bg_heading_pane_cp02

0x13fe,	// (0x00023077) wgtman_heading_pane_g1

0x1406,	// (0x0002307f) wgtman_heading_pane_t1

0x1414,	// (0x0002308d) scroll_pane_cp036

0x141c,	// (0x00023095) wgtman_list_pane

0x1424,	// (0x0002309d) wgtman_list_pane_t1_ParamLimits

0x1424,	// (0x0002309d) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
