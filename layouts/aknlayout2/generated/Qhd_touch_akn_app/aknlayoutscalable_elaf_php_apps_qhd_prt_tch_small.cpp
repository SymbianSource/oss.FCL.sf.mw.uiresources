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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002fa0f };

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
0x64bf,	// (0x00035ece) Screen

0x64cb,	// (0x00035eda) application_window

0x650b,	// (0x00035f1a) area_bottom_pane_ParamLimits

0x650b,	// (0x00035f1a) area_bottom_pane

0x6540,	// (0x00035f4f) area_top_pane_ParamLimits

0x6540,	// (0x00035f4f) area_top_pane

0xdace,	// (0x0003d4dd) call_video_uplink_pane_ParamLimits

0xdace,	// (0x0003d4dd) call_video_uplink_pane

0x65ce,	// (0x00035fdd) main_pane_ParamLimits

0x65ce,	// (0x00035fdd) main_pane

0x1391,	// (0x00030da0) context_pane

0x9394,	// (0x00038da3) navi_pane

0x93b4,	// (0x00038dc3) popup_cale_events_window_ParamLimits

0x93b4,	// (0x00038dc3) popup_cale_events_window

0x13a4,	// (0x00030db3) popup_mup_playback_window

0x93cc,	// (0x00038ddb) signal_pane

0xe231,	// (0x0003dc40) main_browser_pane

0xed18,	// (0x0003e727) main_burst_pane

0x925e,	// (0x00038c6d) main_calc_pane

0xed18,	// (0x0003e727) main_cale_day_pane

0xe231,	// (0x0003dc40) main_cale_month_pane

0xed18,	// (0x0003e727) main_cale_week_pane

0xed18,	// (0x0003e727) main_call_pane

0xdeff,	// (0x0003d90e) main_call_poc_pane

0xed18,	// (0x0003e727) main_camera_pane

0xed18,	// (0x0003e727) main_chi_dic_pane

0xeb9d,	// (0x0003e5ac) main_clock_pane

0xdeff,	// (0x0003d90e) main_fmradio_pane

0xed18,	// (0x0003e727) main_graph_messa_pane

0xdeff,	// (0x0003d90e) main_help_pane

0xe231,	// (0x0003dc40) main_im_pane

0xe15a,	// (0x0003db69) main_image_pane_ParamLimits

0xe15a,	// (0x0003db69) main_image_pane

0xdeff,	// (0x0003d90e) main_location2_pane

0xed18,	// (0x0003e727) main_location_pane

0xdeff,	// (0x0003d90e) main_messa_pane

0xdeff,	// (0x0003d90e) main_mp2_pane

0xed18,	// (0x0003e727) main_mp_pane

0xdeff,	// (0x0003d90e) main_msg_pane

0xdeff,	// (0x0003d90e) main_mup_eq_pane

0xdeff,	// (0x0003d90e) main_mup_pane

0xed18,	// (0x0003e727) main_notes_pane

0xdeff,	// (0x0003d90e) main_pec_pane

0xdeff,	// (0x0003d90e) main_phob_pane

0xdeff,	// (0x0003d90e) main_pinb_pane

0xdeff,	// (0x0003d90e) main_postcard_pane

0xdeff,	// (0x0003d90e) main_qdial_pane

0xed18,	// (0x0003e727) main_skin_pane

0xdeff,	// (0x0003d90e) main_smil2_pane

0xed18,	// (0x0003e727) main_smil_pane

0xed18,	// (0x0003e727) main_video_pane

0xed18,	// (0x0003e727) main_video_tele_pane

0xe15a,	// (0x0003db69) main_viewer_pane_ParamLimits

0xe15a,	// (0x0003db69) main_viewer_pane

0xed18,	// (0x0003e727) main_vorec_pane

0x9294,	// (0x00038ca3) popup_blid_sat_info_window_ParamLimits

0x9294,	// (0x00038ca3) popup_blid_sat_info_window

0x92aa,	// (0x00038cb9) popup_dyc_status_message_window_ParamLimits

0x92aa,	// (0x00038cb9) popup_dyc_status_message_window

0x92ba,	// (0x00038cc9) popup_grid_large_graphic_window_ParamLimits

0x92ba,	// (0x00038cc9) popup_grid_large_graphic_window

0x9330,	// (0x00038d3f) popup_loc_request_window_ParamLimits

0x9330,	// (0x00038d3f) popup_loc_request_window

0x936c,	// (0x00038d7b) popup_wml_address_window_ParamLimits

0x936c,	// (0x00038d7b) popup_wml_address_window

0x9136,	// (0x00038b45) call_muted_g1

0x8df8,	// (0x00038807) popup_call_audio_conf_window_ParamLimits

0x8df8,	// (0x00038807) popup_call_audio_conf_window

0x9146,	// (0x00038b55) popup_call_audio_first_window_ParamLimits

0x9146,	// (0x00038b55) popup_call_audio_first_window

0x9186,	// (0x00038b95) popup_call_audio_in_window_ParamLimits

0x9186,	// (0x00038b95) popup_call_audio_in_window

0x91aa,	// (0x00038bb9) popup_call_audio_out_window_ParamLimits

0x91aa,	// (0x00038bb9) popup_call_audio_out_window

0x91cc,	// (0x00038bdb) popup_call_audio_second_window_ParamLimits

0x91cc,	// (0x00038bdb) popup_call_audio_second_window

0x91fc,	// (0x00038c0b) popup_call_audio_wait_window_ParamLimits

0x91fc,	// (0x00038c0b) popup_call_audio_wait_window

0x921d,	// (0x00038c2c) popup_number_entry_window_ParamLimits

0x921d,	// (0x00038c2c) popup_number_entry_window

0xdaec,	// (0x0003d4fb) bg_popup_call_pane_cp05_ParamLimits

0xdaec,	// (0x0003d4fb) bg_popup_call_pane_cp05

0xdb0c,	// (0x0003d51b) popup_number_entry_window_t1

0xdb1f,	// (0x0003d52e) popup_number_entry_window_t2

0xdb31,	// (0x0003d540) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0003eb0a) popup_number_entry_window_t

0xdb43,	// (0x0003d552) text_title_cp2

0xdb56,	// (0x0003d565) bg_popup_call_pane_cp_ParamLimits

0xdb56,	// (0x0003d565) bg_popup_call_pane_cp

0xdb64,	// (0x0003d573) call_thumbnail_pane

0xdb6c,	// (0x0003d57b) popup_call_audio_in_window_g1_ParamLimits

0xdb6c,	// (0x0003d57b) popup_call_audio_in_window_g1

0xdb78,	// (0x0003d587) popup_call_audio_in_window_g2_ParamLimits

0xdb78,	// (0x0003d587) popup_call_audio_in_window_g2

0xdb84,	// (0x0003d593) popup_call_audio_in_window_g3_ParamLimits

0xdb84,	// (0x0003d593) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0003eb13) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0003eb13) popup_call_audio_in_window_g

0xdb90,	// (0x0003d59f) popup_call_audio_in_window_t1_ParamLimits

0xdb90,	// (0x0003d59f) popup_call_audio_in_window_t1

0xdbac,	// (0x0003d5bb) popup_call_audio_in_window_t2_ParamLimits

0xdbac,	// (0x0003d5bb) popup_call_audio_in_window_t2

0xdbc8,	// (0x0003d5d7) popup_call_audio_in_window_t3_ParamLimits

0xdbc8,	// (0x0003d5d7) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0003eb1a) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0003eb1a) popup_call_audio_in_window_t

0xdb56,	// (0x0003d565) bg_popup_call_pane_cp01_ParamLimits

0xdb56,	// (0x0003d565) bg_popup_call_pane_cp01

0xdb64,	// (0x0003d573) call_thumbnail_pane_cp02

0xdbdb,	// (0x0003d5ea) call_type_pane_cp022

0xdbe3,	// (0x0003d5f2) popup_call_audio_out_window_g1_ParamLimits

0xdbe3,	// (0x0003d5f2) popup_call_audio_out_window_g1

0xdbf5,	// (0x0003d604) popup_call_audio_out_window_g2_ParamLimits

0xdbf5,	// (0x0003d604) popup_call_audio_out_window_g2

0xdc01,	// (0x0003d610) popup_call_audio_out_window_g3_ParamLimits

0xdc01,	// (0x0003d610) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0003eb21) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0003eb21) popup_call_audio_out_window_g

0xdc13,	// (0x0003d622) popup_call_audio_out_window_t1_ParamLimits

0xdc13,	// (0x0003d622) popup_call_audio_out_window_t1

0xdc2b,	// (0x0003d63a) popup_call_audio_out_window_t2_ParamLimits

0xdc2b,	// (0x0003d63a) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0003eb28) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0003eb28) popup_call_audio_out_window_t

0xdc40,	// (0x0003d64f) bg_popup_call_pane_ParamLimits

0xdc40,	// (0x0003d64f) bg_popup_call_pane

0x67ce,	// (0x000361dd) call_thumbnail_pane_cp_ParamLimits

0x67ce,	// (0x000361dd) call_thumbnail_pane_cp

0xdcc4,	// (0x0003d6d3) call_type_pane_cp01_ParamLimits

0xdcc4,	// (0x0003d6d3) call_type_pane_cp01

0xdd08,	// (0x0003d717) popup_call_audio_first_window_g1_ParamLimits

0xdd08,	// (0x0003d717) popup_call_audio_first_window_g1

0xdd54,	// (0x0003d763) popup_call_audio_first_window_g2_ParamLimits

0xdd54,	// (0x0003d763) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0003eb2d) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0003eb2d) popup_call_audio_first_window_g

0xdd98,	// (0x0003d7a7) popup_call_audio_first_window_t1_ParamLimits

0xdd98,	// (0x0003d7a7) popup_call_audio_first_window_t1

0xde44,	// (0x0003d853) popup_call_audio_first_window_t4_ParamLimits

0xde44,	// (0x0003d853) popup_call_audio_first_window_t4

0xded0,	// (0x0003d8df) popup_call_audio_first_window_t5_ParamLimits

0xded0,	// (0x0003d8df) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0003eb32) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0003eb32) popup_call_audio_first_window_t

0xdeff,	// (0x0003d90e) bg_popup_call_pane_cp02

0xdf09,	// (0x0003d918) call_type_pane_cp023

0xdf11,	// (0x0003d920) popup_call_audio_wait_window_g1

0xdf19,	// (0x0003d928) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0003eb39) popup_call_audio_wait_window_g

0xdf21,	// (0x0003d930) popup_call_audio_wait_window_t3

0xdf2f,	// (0x0003d93e) bg_popup_call_pane_cp03_ParamLimits

0xdf2f,	// (0x0003d93e) bg_popup_call_pane_cp03

0xdf8f,	// (0x0003d99e) call_thumbnail_pane_cp011_ParamLimits

0xdf8f,	// (0x0003d99e) call_thumbnail_pane_cp011

0xdf9b,	// (0x0003d9aa) call_type_pane_cp034_ParamLimits

0xdf9b,	// (0x0003d9aa) call_type_pane_cp034

0xdfd7,	// (0x0003d9e6) popup_call_audio_second_window_g1_ParamLimits

0xdfd7,	// (0x0003d9e6) popup_call_audio_second_window_g1

0xe013,	// (0x0003da22) popup_call_audio_second_window_g2_ParamLimits

0xe013,	// (0x0003da22) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0003eb3e) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0003eb3e) popup_call_audio_second_window_g

0xe04f,	// (0x0003da5e) popup_call_audio_second_window_t1_ParamLimits

0xe04f,	// (0x0003da5e) popup_call_audio_second_window_t1

0xe0d0,	// (0x0003dadf) popup_call_audio_second_window_t2_ParamLimits

0xe0d0,	// (0x0003dadf) popup_call_audio_second_window_t2

0xe106,	// (0x0003db15) popup_call_audio_second_window_t3_ParamLimits

0xe106,	// (0x0003db15) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0003eb43) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0003eb43) popup_call_audio_second_window_t

0xdeff,	// (0x0003d90e) bg_popup_call_pane_cp04

0xe13c,	// (0x0003db4b) list_conf_pane

0xe144,	// (0x0003db53) popup_call_audio_conf_window_t1

0xe152,	// (0x0003db61) call_thumbnail_pane_g1

0xe15a,	// (0x0003db69) bg_pinb_pane_ParamLimits

0xe15a,	// (0x0003db69) bg_pinb_pane

0xe168,	// (0x0003db77) find_pinb_pane

0xe171,	// (0x0003db80) listscroll_pinb_pane_ParamLimits

0xe171,	// (0x0003db80) listscroll_pinb_pane

0xe180,	// (0x0003db8f) pinb_bg_pane_g1

0x67f2,	// (0x00036201) pinb_bg_pane_g2

0x67fe,	// (0x0003620d) pinb_bg_pane_g3

0x680a,	// (0x00036219) pinb_bg_pane_g4

0x6816,	// (0x00036225) pinb_bg_pane_g5

0x6822,	// (0x00036231) pinb_bg_pane_g6

0x682d,	// (0x0003623c) pinb_bg_pane_g7

0x6838,	// (0x00036247) pinb_bg_pane_g8

0x6843,	// (0x00036252) pinb_bg_pane_g9

0x684d,	// (0x0003625c) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0003eb4a) pinb_bg_pane_g

0x686a,	// (0x00036279) grid_pinb_pane

0x6875,	// (0x00036284) list_pinb_pane

0x6880,	// (0x0003628f) scroll_pane_cp01_ParamLimits

0x6880,	// (0x0003628f) scroll_pane_cp01

0xe18a,	// (0x0003db99) find_pinb_pane_g1_ParamLimits

0xe18a,	// (0x0003db99) find_pinb_pane_g1

0xe1a2,	// (0x0003dbb1) find_pinb_pane_t1

0xe1b4,	// (0x0003dbc3) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0003eb64) find_pinb_pane_t

0xe1c9,	// (0x0003dbd8) input_focus_pane_cp01_ParamLimits

0xe1c9,	// (0x0003dbd8) input_focus_pane_cp01

0x6892,	// (0x000362a1) cell_pinb_pane_ParamLimits

0x6892,	// (0x000362a1) cell_pinb_pane

0x68b7,	// (0x000362c6) cell_pinb_pane_g1_ParamLimits

0x68b7,	// (0x000362c6) cell_pinb_pane_g1

0x68cc,	// (0x000362db) cell_pinb_pane_g2_ParamLimits

0x68cc,	// (0x000362db) cell_pinb_pane_g2

0xe1d5,	// (0x0003dbe4) cell_pinb_pane_g3_ParamLimits

0xe1d5,	// (0x0003dbe4) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0003eb69) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0003eb69) cell_pinb_pane_g

0xdeff,	// (0x0003d90e) grid_highlight_pane_cp01

0x68d8,	// (0x000362e7) list_pinb_item_pane_ParamLimits

0x68d8,	// (0x000362e7) list_pinb_item_pane

0xdeff,	// (0x0003d90e) list_highlight_pane_cp02

0x68f8,	// (0x00036307) list_pinb_item_pane_g1_ParamLimits

0x68f8,	// (0x00036307) list_pinb_item_pane_g1

0xe1e1,	// (0x0003dbf0) list_pinb_item_pane_g2_ParamLimits

0xe1e1,	// (0x0003dbf0) list_pinb_item_pane_g2

0x6905,	// (0x00036314) list_pinb_item_pane_g3_ParamLimits

0x6905,	// (0x00036314) list_pinb_item_pane_g3

0x6916,	// (0x00036325) list_pinb_item_pane_g4_ParamLimits

0x6916,	// (0x00036325) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0003eb70) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0003eb70) list_pinb_item_pane_g

0x6922,	// (0x00036331) list_pinb_item_pane_t1_ParamLimits

0x6922,	// (0x00036331) list_pinb_item_pane_t1

0x6953,	// (0x00036362) calc_display_pane

0x6971,	// (0x00036380) calc_paper_pane

0x698d,	// (0x0003639c) grid_calc_pane

0xdeff,	// (0x0003d90e) bg_list_pane_cp01

0x69b7,	// (0x000363c6) clock_g1

0x69bf,	// (0x000363ce) clock_g2

0x0001,

0xf16a,	// (0x0003eb79) clock_g

0x69c9,	// (0x000363d8) clock_t1_ParamLimits

0x69c9,	// (0x000363d8) clock_t1

0x69de,	// (0x000363ed) clock_t2_ParamLimits

0x69de,	// (0x000363ed) clock_t2

0x69f0,	// (0x000363ff) clock_t3_ParamLimits

0x69f0,	// (0x000363ff) clock_t3

0x6a02,	// (0x00036411) clock_t4_ParamLimits

0x6a02,	// (0x00036411) clock_t4

0x6a14,	// (0x00036423) clock_t5_ParamLimits

0x6a14,	// (0x00036423) clock_t5

0x6a29,	// (0x00036438) clock_t6_ParamLimits

0x6a29,	// (0x00036438) clock_t6

0x6a3b,	// (0x0003644a) clock_t7_ParamLimits

0x6a3b,	// (0x0003644a) clock_t7

0x6a4d,	// (0x0003645c) clock_t8_ParamLimits

0x6a4d,	// (0x0003645c) clock_t8

0x6a63,	// (0x00036472) clock_t9_ParamLimits

0x6a63,	// (0x00036472) clock_t9

0x0008,

0xf16f,	// (0x0003eb7e) clock_t_ParamLimits

0xf16f,	// (0x0003eb7e) clock_t

0xe1ed,	// (0x0003dbfc) popup_clock_analogue_window_cp02

0xe1ed,	// (0x0003dbfc) popup_clock_digital_window_cp01

0xe1f5,	// (0x0003dc04) listscroll_help_pane

0xdeff,	// (0x0003d90e) phob_pre_status_pane

0xe1ff,	// (0x0003dc0e) grid_qdial_pane

0xdeff,	// (0x0003d90e) listscroll_mce_pane

0xe209,	// (0x0003dc18) bg_notes_pane

0xe213,	// (0x0003dc22) list_notes_pane

0x6a79,	// (0x00036488) scroll_pane_cp06

0xe21d,	// (0x0003dc2c) bg_calc_paper_pane

0x6a84,	// (0x00036493) list_calc_pane

0xe231,	// (0x0003dc40) bg_calc_display_pane

0x6a9e,	// (0x000364ad) calc_display_pane_t1

0x6ab3,	// (0x000364c2) calc_display_pane_t2

0x6ac8,	// (0x000364d7) calc_display_pane_t3

0x0002,

0xf182,	// (0x0003eb91) calc_display_pane_t

0x6ada,	// (0x000364e9) cell_calc_pane_ParamLimits

0x6ada,	// (0x000364e9) cell_calc_pane

0xe23d,	// (0x0003dc4c) bg_calc_paper_pane_g1

0xe249,	// (0x0003dc58) bg_calc_paper_pane_g2

0xe255,	// (0x0003dc64) bg_calc_paper_pane_g3

0xe261,	// (0x0003dc70) bg_calc_paper_pane_g4

0xe26d,	// (0x0003dc7c) bg_calc_paper_pane_g5

0x6b07,	// (0x00036516) bg_calc_paper_pane_g6

0x6b18,	// (0x00036527) bg_calc_paper_pane_g7

0x6b29,	// (0x00036538) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0003eb98) bg_calc_paper_pane_g

0x6b3a,	// (0x00036549) calc_bg_paper_pane_g9

0x6b4b,	// (0x0003655a) list_calc_item_pane_ParamLimits

0x6b4b,	// (0x0003655a) list_calc_item_pane

0xe279,	// (0x0003dc88) list_calc_item_pane_g1

0x6b7a,	// (0x00036589) list_calc_item_pane_t1_ParamLimits

0x6b7a,	// (0x00036589) list_calc_item_pane_t1

0x6b8c,	// (0x0003659b) list_calc_item_pane_t2_ParamLimits

0x6b8c,	// (0x0003659b) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0003eba9) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0003eba9) list_calc_item_pane_t

0xe286,	// (0x0003dc95) cell_calc_pane_g1

0xe290,	// (0x0003dc9f) grid_highlight_pane_cp02

0x1873,	// (0x00031282) bg_calc_display_pane_g1

0x6bbc,	// (0x000365cb) bg_calc_display_pane_g2

0x6bc6,	// (0x000365d5) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0003ebb3) bg_calc_display_pane_g

0x6bcf,	// (0x000365de) cell_qdial_pane_ParamLimits

0x6bcf,	// (0x000365de) cell_qdial_pane

0x6be3,	// (0x000365f2) cell_qdial_pane_g1_ParamLimits

0x6be3,	// (0x000365f2) cell_qdial_pane_g1

0x6bf0,	// (0x000365ff) cell_qdial_pane_g2_ParamLimits

0x6bf0,	// (0x000365ff) cell_qdial_pane_g2

0xe2b2,	// (0x0003dcc1) cell_qdial_pane_g3_ParamLimits

0xe2b2,	// (0x0003dcc1) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0003ebba) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0003ebba) cell_qdial_pane_g

0x6c0e,	// (0x0003661d) cell_qdial_pane_t1_ParamLimits

0x6c0e,	// (0x0003661d) cell_qdial_pane_t1

0x6c26,	// (0x00036635) cell_qdial_pane_t2_ParamLimits

0x6c26,	// (0x00036635) cell_qdial_pane_t2

0x6c39,	// (0x00036648) cell_qdial_pane_t3_ParamLimits

0x6c39,	// (0x00036648) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0003ebc3) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0003ebc3) cell_qdial_pane_t

0xdeff,	// (0x0003d90e) grid_highlight_pane_cp04

0xe2be,	// (0x0003dccd) thumbnail_qdial_pane_ParamLimits

0xe2be,	// (0x0003dccd) thumbnail_qdial_pane

0xe31a,	// (0x0003dd29) list_help_pane

0xe323,	// (0x0003dd32) scroll_pane_cp02

0x6c4c,	// (0x0003665b) help_list_pane_t1_ParamLimits

0x6c4c,	// (0x0003665b) help_list_pane_t1

0x6c7f,	// (0x0003668e) bg_notes_pane_g2

0x6c87,	// (0x00036696) bg_notes_pane_g3

0x6c8f,	// (0x0003669e) notes_bg_pane_g1

0x6c97,	// (0x000366a6) notes_bg_pane_g4

0x6c9f,	// (0x000366ae) notes_bg_pane_g5

0x6ca7,	// (0x000366b6) notes_bg_pane_g6

0x6caf,	// (0x000366be) notes_bg_pane_g7

0x6cb7,	// (0x000366c6) notes_bg_pane_g8

0x6cbf,	// (0x000366ce) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0003ebe1) notes_bg_pane_g

0x6cc7,	// (0x000366d6) list_notes_text_pane_ParamLimits

0x6cc7,	// (0x000366d6) list_notes_text_pane

0xe32c,	// (0x0003dd3b) list_notes_text_pane_g1

0x53b9,	// (0x00034dc8) list_notes_text_pane_t1

0xe231,	// (0x0003dc40) listscroll_cale_week_pane

0x6d09,	// (0x00036718) bg_cale_heading_pane

0xe346,	// (0x0003dd55) bg_cale_pane_cp01

0x6d1d,	// (0x0003672c) cale_week_corner_pane

0x6d33,	// (0x00036742) cale_week_day_heading_pane

0x6d47,	// (0x00036756) cale_week_scroll_pane_g1

0x6d58,	// (0x00036767) cale_week_scroll_pane_g2

0x6d69,	// (0x00036778) cale_week_scroll_pane_g3

0x6d7a,	// (0x00036789) cale_week_scroll_pane_g4

0x6d8b,	// (0x0003679a) cale_week_scroll_pane_g5

0x6d9c,	// (0x000367ab) cale_week_scroll_pane_g6

0x6dad,	// (0x000367bc) cale_week_scroll_pane_g7

0x6dc0,	// (0x000367cf) cale_week_scroll_pane_g8

0x6dd3,	// (0x000367e2) cale_week_scroll_pane_g9

0x6de4,	// (0x000367f3) cale_week_scroll_pane_g10

0x6df5,	// (0x00036804) cale_week_scroll_pane_g11

0x6e06,	// (0x00036815) cale_week_scroll_pane_g12

0x6e17,	// (0x00036826) cale_week_scroll_pane_g13

0x6e28,	// (0x00036837) cale_week_scroll_pane_g14

0x6e39,	// (0x00036848) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0003ebf0) cale_week_scroll_pane_g

0x6e4a,	// (0x00036859) cale_week_time_pane

0x6e5d,	// (0x0003686c) grid_cale_week_pane

0x6e72,	// (0x00036881) scroll_pane_cp08

0x6e8c,	// (0x0003689b) cell_cale_week_pane_ParamLimits

0x6e8c,	// (0x0003689b) cell_cale_week_pane

0x6ec8,	// (0x000368d7) cale_week_day_heading_pane_t1

0x6ef5,	// (0x00036904) cale_week_day_heading_pane_t2

0x6f22,	// (0x00036931) cale_week_day_heading_pane_t3

0x6f4f,	// (0x0003695e) cale_week_day_heading_pane_t4

0x6f7c,	// (0x0003698b) cale_week_day_heading_pane_t5

0x6fa9,	// (0x000369b8) cale_week_day_heading_pane_t6

0x6fd6,	// (0x000369e5) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0003ec0f) cale_week_day_heading_pane_t

0xe371,	// (0x0003dd80) bg_cale_side_pane

0x7003,	// (0x00036a12) cale_week_time_pane_t1

0x701b,	// (0x00036a2a) cale_week_time_pane_t2

0x7033,	// (0x00036a42) cale_week_time_pane_t3

0x704b,	// (0x00036a5a) cale_week_time_pane_t4

0x7063,	// (0x00036a72) cale_week_time_pane_t5

0x707b,	// (0x00036a8a) cale_week_time_pane_t6

0x7093,	// (0x00036aa2) cale_week_time_pane_t7

0x70ab,	// (0x00036aba) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0003ec1e) cale_week_time_pane_t

0x70c3,	// (0x00036ad2) cell_cale_week_pane_g2

0x70dc,	// (0x00036aeb) cell_cale_week_pane_g3_ParamLimits

0x70dc,	// (0x00036aeb) cell_cale_week_pane_g3

0xe37f,	// (0x0003dd8e) grid_highlight_pane_cp07

0xe387,	// (0x0003dd96) listscroll_gms_pane

0xe391,	// (0x0003dda0) grid_gms_pane

0xe39a,	// (0x0003dda9) listscroll_gms_pane_g1

0xe3a2,	// (0x0003ddb1) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0003ec2f) listscroll_gms_pane_g

0x70f4,	// (0x00036b03) scroll_pane_cp010

0x70ff,	// (0x00036b0e) cell_gms_pane_ParamLimits

0x70ff,	// (0x00036b0e) cell_gms_pane

0x7112,	// (0x00036b21) cell_gms_pane_g1

0xe3aa,	// (0x0003ddb9) cell_gms_pane_g2

0xe3b2,	// (0x0003ddc1) cell_gms_pane_g3

0xe3bb,	// (0x0003ddca) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0003ec34) cell_gms_pane_g

0xe3c4,	// (0x0003ddd3) grid_highlight_pane_cp09

0x90de,	// (0x00038aed) phob_pre_status_pane_g1

0x90e6,	// (0x00038af5) phob_pre_status_pane_g2

0x90ee,	// (0x00038afd) phob_pre_status_pane_g3

0x90f6,	// (0x00038b05) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0003f023) phob_pre_status_pane_g

0x9106,	// (0x00038b15) phob_pre_status_pane_t1

0x9116,	// (0x00038b25) phob_pre_status_pane_t2

0x9126,	// (0x00038b35) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0003f02e) phob_pre_status_pane_t

0xdeff,	// (0x0003d90e) bg_list_pane_cp05

0x7122,	// (0x00036b31) grid_vorec_pane

0x712c,	// (0x00036b3b) vorec_t1

0x713a,	// (0x00036b49) vorec_t2

0x7148,	// (0x00036b57) vorec_t3

0x7156,	// (0x00036b65) vorec_t4

0x7164,	// (0x00036b73) vorec_t5

0x7172,	// (0x00036b81) vorec_t6

0x0006,

0xf22e,	// (0x0003ec3d) vorec_t

0x718e,	// (0x00036b9d) wait_bar_pane_cp01

0x7196,	// (0x00036ba5) cell_vorec_pane_ParamLimits

0x7196,	// (0x00036ba5) cell_vorec_pane

0xe3cc,	// (0x0003dddb) cell_vorec_pane_g1

0xdeff,	// (0x0003d90e) grid_highlight_pane_cp05

0x71b9,	// (0x00036bc8) cams_zoom_pane

0x71c5,	// (0x00036bd4) image_vga_pane

0x71d4,	// (0x00036be3) main_camera_pane_g1

0x71e2,	// (0x00036bf1) main_camera_pane_g2

0x71ee,	// (0x00036bfd) main_camera_pane_g3

0x71fa,	// (0x00036c09) main_camera_pane_g4

0x7206,	// (0x00036c15) main_camera_pane_g5

0x7212,	// (0x00036c21) main_camera_pane_g6

0x721e,	// (0x00036c2d) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0003ec4c) main_camera_pane_g

0x722a,	// (0x00036c39) main_camera_pane_t1

0x723c,	// (0x00036c4b) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0003ec5d) main_camera_pane_t

0x725d,	// (0x00036c6c) cams_zoom_pane_cp_ParamLimits

0x725d,	// (0x00036c6c) cams_zoom_pane_cp

0x7281,	// (0x00036c90) image_cif_pane_ParamLimits

0x7281,	// (0x00036c90) image_cif_pane

0x729f,	// (0x00036cae) image_subqcif_pane

0x72a7,	// (0x00036cb6) main_video_pane_g1_ParamLimits

0x72a7,	// (0x00036cb6) main_video_pane_g1

0x72c7,	// (0x00036cd6) main_video_pane_g2_ParamLimits

0x72c7,	// (0x00036cd6) main_video_pane_g2

0x72f7,	// (0x00036d06) main_video_pane_g3_ParamLimits

0x72f7,	// (0x00036d06) main_video_pane_g3

0x7320,	// (0x00036d2f) main_video_pane_g4_ParamLimits

0x7320,	// (0x00036d2f) main_video_pane_g4

0x7349,	// (0x00036d58) main_video_pane_g5_ParamLimits

0x7349,	// (0x00036d58) main_video_pane_g5

0xe3e2,	// (0x0003ddf1) main_video_pane_g6_ParamLimits

0xe3e2,	// (0x0003ddf1) main_video_pane_g6

0x0006,

0xf253,	// (0x0003ec62) main_video_pane_g_ParamLimits

0xf253,	// (0x0003ec62) main_video_pane_g

0x736d,	// (0x00036d7c) main_video_pane_t1_ParamLimits

0x736d,	// (0x00036d7c) main_video_pane_t1

0xe3fc,	// (0x0003de0b) cams_zoom_pane_g1

0xe405,	// (0x0003de14) cams_zoom_pane_g2

0xe40e,	// (0x0003de1d) cams_zoom_pane_g3

0xe417,	// (0x0003de26) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0003ec71) cams_zoom_pane_g

0x73b7,	// (0x00036dc6) grid_cams_pane

0x73c5,	// (0x00036dd4) linegrid_cams_pane

0x73d3,	// (0x00036de2) cell_cams_pane_ParamLimits

0x73d3,	// (0x00036de2) cell_cams_pane

0xe420,	// (0x0003de2f) cams_burst_image_pane

0xe428,	// (0x0003de37) cell_cams_pane_g1

0xdeff,	// (0x0003d90e) grid_highlight_pane_cp03

0xe286,	// (0x0003dc95) mp_bg_pane_g1

0xdeff,	// (0x0003d90e) bg_list_pane_cp03

0x1269,	// (0x00030c78) bg_mp_pane

0x1271,	// (0x00030c80) grid_mp_pane

0x1279,	// (0x00030c88) media_player_g1

0x1281,	// (0x00030c90) media_player_t1

0x128f,	// (0x00030c9e) media_player_t2

0x129d,	// (0x00030cac) media_player_t3

0x12ab,	// (0x00030cba) media_player_t4

0x12b9,	// (0x00030cc8) media_player_t5

0x12c7,	// (0x00030cd6) media_player_t6

0x12d5,	// (0x00030ce4) media_player_t7

0x0006,

0xf5fe,	// (0x0003f00d) media_player_t

0x12e3,	// (0x00030cf2) wait_bar_pane_cp02

0xf5e3,	// (0x0003eff2) main_usb_pane_t

0x90d5,	// (0x00038ae4) cell_mp_pane

0xe286,	// (0x0003dc95) cell_mp_pane_g1

0xdeff,	// (0x0003d90e) grid_highlight_pane_cp06

0xe430,	// (0x0003de3f) grid_skin_colour_pane

0xe438,	// (0x0003de47) list_highlight_pane_cp03

0x73e6,	// (0x00036df5) skin_g1

0xe440,	// (0x0003de4f) skin_t1

0xe44f,	// (0x0003de5e) skin_t2

0x0001,

0xf297,	// (0x0003eca6) skin_t

0x73f0,	// (0x00036dff) cell_skin_colour_pane_ParamLimits

0x73f0,	// (0x00036dff) cell_skin_colour_pane

0xe45d,	// (0x0003de6c) cell_skin_colour_pane_g1

0x743d,	// (0x00036e4c) call_video_g1_ParamLimits

0x743d,	// (0x00036e4c) call_video_g1

0x744d,	// (0x00036e5c) call_video_g2_ParamLimits

0x744d,	// (0x00036e5c) call_video_g2

0x0001,

0xf29c,	// (0x0003ecab) call_video_g_ParamLimits

0xf29c,	// (0x0003ecab) call_video_g

0x748b,	// (0x00036e9a) call_video_uplink_pane_cp1_ParamLimits

0x748b,	// (0x00036e9a) call_video_uplink_pane_cp1

0xe477,	// (0x0003de86) call_video_uplink_pane_cp2

0x7537,	// (0x00036f46) video_down_crop_pane_ParamLimits

0x7537,	// (0x00036f46) video_down_crop_pane

0x761b,	// (0x0003702a) video_down_pane_ParamLimits

0x761b,	// (0x0003702a) video_down_pane

0xe47f,	// (0x0003de8e) video_down_subqcif_pane_ParamLimits

0xe47f,	// (0x0003de8e) video_down_subqcif_pane

0xe497,	// (0x0003dea6) video_down_subqcif_pane_cp_ParamLimits

0xe497,	// (0x0003dea6) video_down_subqcif_pane_cp

0xe4bb,	// (0x0003deca) im_reading_pane_ParamLimits

0xe4bb,	// (0x0003deca) im_reading_pane

0x76fd,	// (0x0003710c) im_writing_pane_ParamLimits

0x76fd,	// (0x0003710c) im_writing_pane

0x771b,	// (0x0003712a) im_reading_pane_t1

0xe4d5,	// (0x0003dee4) list_im_pane

0xe4e6,	// (0x0003def5) scroll_pane_cp07

0x776f,	// (0x0003717e) im_writing_pane_t1_ParamLimits

0x776f,	// (0x0003717e) im_writing_pane_t1

0xe4ff,	// (0x0003df0e) im_writing_pane_t2_ParamLimits

0xe4ff,	// (0x0003df0e) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0003ecb5) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0003ecb5) im_writing_pane_t

0xdeff,	// (0x0003d90e) input_focus_pane_cp04

0xdeff,	// (0x0003d90e) input_focus_pane_cp05

0x7784,	// (0x00037193) list_im_single_pane_ParamLimits

0x7784,	// (0x00037193) list_im_single_pane

0x77a8,	// (0x000371b7) list_single_im_pane_t1

0x9099,	// (0x00038aa8) blid_accuracy_pane

0x90a1,	// (0x00038ab0) blid_compass_pane

0x90ab,	// (0x00038aba) main_location_t1

0x90b9,	// (0x00038ac8) main_location_t2

0x90c7,	// (0x00038ad6) main_location_t3

0x0002,

0xf60d,	// (0x0003f01c) main_location_t

0xdeff,	// (0x0003d90e) aid_levels_location

0xe286,	// (0x0003dc95) blid_accuracy_pane_g1

0xe286,	// (0x0003dc95) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0003ed17) blid_accuracy_pane_g

0xe547,	// (0x0003df56) wml_content_pane

0xe585,	// (0x0003df94) wml_button_pane_ParamLimits

0xe585,	// (0x0003df94) wml_button_pane

0x77b7,	// (0x000371c6) wml_list_single_large_pane_ParamLimits

0x77b7,	// (0x000371c6) wml_list_single_large_pane

0x77e1,	// (0x000371f0) wml_list_single_medium_pane_ParamLimits

0x77e1,	// (0x000371f0) wml_list_single_medium_pane

0x7812,	// (0x00037221) wml_list_single_small_pane_ParamLimits

0x7812,	// (0x00037221) wml_list_single_small_pane

0xe599,	// (0x0003dfa8) wml_selection_box_pane_ParamLimits

0xe599,	// (0x0003dfa8) wml_selection_box_pane

0xe5ac,	// (0x0003dfbb) wml_list_single_pane_t1

0xe5bb,	// (0x0003dfca) wml_list_single_medium_pane_t1

0xe5ca,	// (0x0003dfd9) wml_list_single_large_pane_t1

0xe5d9,	// (0x0003dfe8) input_focus_pane_cp02_ParamLimits

0xe5d9,	// (0x0003dfe8) input_focus_pane_cp02

0xe5ec,	// (0x0003dffb) wml_selection_box_pane_g1

0xe5f5,	// (0x0003e004) wml_selection_box_pane_t1_ParamLimits

0xe5f5,	// (0x0003e004) wml_selection_box_pane_t1

0xe15a,	// (0x0003db69) bg_wml_button_pane_ParamLimits

0xe15a,	// (0x0003db69) bg_wml_button_pane

0xe60d,	// (0x0003e01c) wml_button_pane_g1

0xe615,	// (0x0003e024) wml_button_pane_t1

0xe60d,	// (0x0003e01c) wml_button_bg_pane_g1

0xe625,	// (0x0003e034) wml_button_bg_pane_g2

0xe62d,	// (0x0003e03c) wml_button_bg_pane_g3

0xe635,	// (0x0003e044) wml_button_bg_pane_g4

0xe63d,	// (0x0003e04c) wml_button_bg_pane_g5

0xe645,	// (0x0003e054) wml_button_bg_pane_g6

0xe64d,	// (0x0003e05c) wml_button_bg_pane_g7

0xe655,	// (0x0003e064) wml_button_bg_pane_g8

0xe65d,	// (0x0003e06c) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0003ecba) wml_button_bg_pane_g

0x784c,	// (0x0003725b) bg_list_pane_cp02

0xe665,	// (0x0003e074) mce_header_pane_ParamLimits

0xe665,	// (0x0003e074) mce_header_pane

0xe67b,	// (0x0003e08a) mce_icon_pane

0xe67b,	// (0x0003e08a) mce_image_pane

0xe684,	// (0x0003e093) mce_text_pane_ParamLimits

0xe684,	// (0x0003e093) mce_text_pane

0x7856,	// (0x00037265) scroll_pane_cp03

0xe57d,	// (0x0003df8c) scroll_pane_cp04

0xe697,	// (0x0003e0a6) scroll_pane_cp05_ParamLimits

0xe697,	// (0x0003e0a6) scroll_pane_cp05

0x7860,	// (0x0003726f) mce_header_field_pane_ParamLimits

0x7860,	// (0x0003726f) mce_header_field_pane

0x7880,	// (0x0003728f) mce_header_field_pane_2_ParamLimits

0x7880,	// (0x0003728f) mce_header_field_pane_2

0x7896,	// (0x000372a5) mce_header_field_pane_3

0x789e,	// (0x000372ad) list_single_mce_message_pane_ParamLimits

0x789e,	// (0x000372ad) list_single_mce_message_pane

0x78c3,	// (0x000372d2) list_single_mce_smart_pane_ParamLimits

0x78c3,	// (0x000372d2) list_single_mce_smart_pane

0xe6a3,	// (0x0003e0b2) input_focus_pane_cp03

0xe6ac,	// (0x0003e0bb) list_header_data_pane

0x78f3,	// (0x00037302) mce_header_field_pane_t1

0x7901,	// (0x00037310) list_single_mce_header_pane_ParamLimits

0x7901,	// (0x00037310) list_single_mce_header_pane

0xe6b4,	// (0x0003e0c3) list_single_mce_header_pane_t1

0xe6c3,	// (0x0003e0d2) list_single_mce_message_pane_g1

0xe6cb,	// (0x0003e0da) list_single_mce_message_pane_t1

0x7945,	// (0x00037354) bg_cale_heading_pane_cp01_ParamLimits

0x7945,	// (0x00037354) bg_cale_heading_pane_cp01

0xe6d9,	// (0x0003e0e8) bg_cale_pane_cp02_ParamLimits

0xe6d9,	// (0x0003e0e8) bg_cale_pane_cp02

0x7968,	// (0x00037377) cale_month_corner_pane

0x797e,	// (0x0003738d) cale_month_day_heading_pane_ParamLimits

0x797e,	// (0x0003738d) cale_month_day_heading_pane

0x79b1,	// (0x000373c0) cale_month_pane_g1_ParamLimits

0x79b1,	// (0x000373c0) cale_month_pane_g1

0x79cd,	// (0x000373dc) cale_month_pane_g2_ParamLimits

0x79cd,	// (0x000373dc) cale_month_pane_g2

0x79e8,	// (0x000373f7) cale_month_pane_g3_ParamLimits

0x79e8,	// (0x000373f7) cale_month_pane_g3

0x7a14,	// (0x00037423) cale_month_pane_g4_ParamLimits

0x7a14,	// (0x00037423) cale_month_pane_g4

0x7a40,	// (0x0003744f) cale_month_pane_g5_ParamLimits

0x7a40,	// (0x0003744f) cale_month_pane_g5

0x7a6c,	// (0x0003747b) cale_month_pane_g6_ParamLimits

0x7a6c,	// (0x0003747b) cale_month_pane_g6

0x7a98,	// (0x000374a7) cale_month_pane_g7_ParamLimits

0x7a98,	// (0x000374a7) cale_month_pane_g7

0x7ad4,	// (0x000374e3) cale_month_pane_g8_ParamLimits

0x7ad4,	// (0x000374e3) cale_month_pane_g8

0x7b10,	// (0x0003751f) cale_month_pane_g9_ParamLimits

0x7b10,	// (0x0003751f) cale_month_pane_g9

0x7b4a,	// (0x00037559) cale_month_pane_g10_ParamLimits

0x7b4a,	// (0x00037559) cale_month_pane_g10

0x7b84,	// (0x00037593) cale_month_pane_g11_ParamLimits

0x7b84,	// (0x00037593) cale_month_pane_g11

0x7bbe,	// (0x000375cd) cale_month_pane_g12_ParamLimits

0x7bbe,	// (0x000375cd) cale_month_pane_g12

0x7bf8,	// (0x00037607) cale_month_pane_g13_ParamLimits

0x7bf8,	// (0x00037607) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0003eccd) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0003eccd) cale_month_pane_g

0x7c32,	// (0x00037641) cale_month_week_pane

0x7c45,	// (0x00037654) grid_cale_month_pane_ParamLimits

0x7c45,	// (0x00037654) grid_cale_month_pane

0x7c73,	// (0x00037682) cale_month_day_heading_pane_t1

0x7cd1,	// (0x000376e0) cale_month_day_heading_pane_t2

0x7d36,	// (0x00037745) cale_month_day_heading_pane_t3

0x7d9b,	// (0x000377aa) cale_month_day_heading_pane_t4

0x7e00,	// (0x0003780f) cale_month_day_heading_pane_t5

0x7e65,	// (0x00037874) cale_month_day_heading_pane_t6

0x7eca,	// (0x000378d9) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0003ece8) cale_month_day_heading_pane_t

0xe371,	// (0x0003dd80) bg_cale_side_pane_cp01

0x7f3f,	// (0x0003794e) cale_month_week_pane_t1

0x7f56,	// (0x00037965) cale_month_week_pane_t2

0x7f6d,	// (0x0003797c) cale_month_week_pane_t3

0x7f84,	// (0x00037993) cale_month_week_pane_t4

0x7f9b,	// (0x000379aa) cale_month_week_pane_t5

0x7fb2,	// (0x000379c1) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0003ecf7) cale_month_week_pane_t

0x7fc9,	// (0x000379d8) cell_cale_month_pane_ParamLimits

0x7fc9,	// (0x000379d8) cell_cale_month_pane

0x807f,	// (0x00037a8e) cell_cale_month_pane_g1

0x808b,	// (0x00037a9a) cell_cale_month_pane_t1_ParamLimits

0x808b,	// (0x00037a9a) cell_cale_month_pane_t1

0xe37f,	// (0x0003dd8e) grid_highlight_pane_cp08

0xe286,	// (0x0003dc95) main_smil_g1

0x80a7,	// (0x00037ab6) smil_status_pane

0xe70e,	// (0x0003e11d) smil_text_pane

0x1189,	// (0x00030b98) bg_popup_call3_rect_pane_g8

0x1191,	// (0x00030ba0) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003efb0) bg_popup_call3_rect_pane_g

0x141e,	// (0x00030e2d) smil_status_volume_pane_g1

0xe718,	// (0x0003e127) smil_status_pane_t1

0x947f,	// (0x00038e8e) volume_smil_pane

0xe72f,	// (0x0003e13e) list_smil_text_pane

0x80ba,	// (0x00037ac9) scroll_pane_cp011

0x80c5,	// (0x00037ad4) smil_text_list_pane_t1_ParamLimits

0x80c5,	// (0x00037ad4) smil_text_list_pane_t1

0x813d,	// (0x00037b4c) aid_volume_smil_ParamLimits

0x813d,	// (0x00037b4c) aid_volume_smil

0xe286,	// (0x0003dc95) smil_volume_pane_g1

0xe286,	// (0x0003dc95) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0003ed17) smil_volume_pane_g

0xe231,	// (0x0003dc40) listscroll_cale_day_pane

0xe739,	// (0x0003e148) bg_cale_pane

0xe751,	// (0x0003e160) list_cale_pane

0xe762,	// (0x0003e171) scroll_pane_cp09

0xe773,	// (0x0003e182) cale_bg_pane_g1

0xe77b,	// (0x0003e18a) cale_bg_pane_g2

0xe783,	// (0x0003e192) cale_bg_pane_g3

0xe78b,	// (0x0003e19a) cale_bg_pane_g4

0xe793,	// (0x0003e1a2) cale_bg_pane_g5

0xe79b,	// (0x0003e1aa) cale_bg_pane_g6

0xe7a3,	// (0x0003e1b2) cale_bg_pane_g7

0xe7ab,	// (0x0003e1ba) cale_bg_pane_g8

0xe7b3,	// (0x0003e1c2) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0003ed1c) cale_bg_pane_g

0x815f,	// (0x00037b6e) list_cale_time_pane_ParamLimits

0x815f,	// (0x00037b6e) list_cale_time_pane

0xe7bb,	// (0x0003e1ca) list_cale_time_pane_g1_ParamLimits

0xe7bb,	// (0x0003e1ca) list_cale_time_pane_g1

0xe7c7,	// (0x0003e1d6) list_cale_time_pane_g2_ParamLimits

0xe7c7,	// (0x0003e1d6) list_cale_time_pane_g2

0x817b,	// (0x00037b8a) list_cale_time_pane_g3_ParamLimits

0x817b,	// (0x00037b8a) list_cale_time_pane_g3

0x8189,	// (0x00037b98) list_cale_time_pane_g4_ParamLimits

0x8189,	// (0x00037b98) list_cale_time_pane_g4

0x8197,	// (0x00037ba6) list_cale_time_pane_g5_ParamLimits

0x8197,	// (0x00037ba6) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0003ed2f) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0003ed2f) list_cale_time_pane_g

0xe7e1,	// (0x0003e1f0) list_cale_time_pane_t1_ParamLimits

0xe7e1,	// (0x0003e1f0) list_cale_time_pane_t1

0xe809,	// (0x0003e218) list_cale_time_pane_t2_ParamLimits

0xe809,	// (0x0003e218) list_cale_time_pane_t2

0x8462,	// (0x00037e71) aid_blid_cardinal_pane

0x84a4,	// (0x00037eb3) compass_pane_t4

0xe831,	// (0x0003e240) list_cale_time_pane_t4_ParamLimits

0xe831,	// (0x0003e240) list_cale_time_pane_t4

0x84b2,	// (0x00037ec1) compass_pane_t5

0x84c2,	// (0x00037ed1) compass_pane_t6

0x84d0,	// (0x00037edf) compass_pane_t7

0xec6a,	// (0x0003e679) navi_pane_cc_t1

0xedbf,	// (0x0003e7ce) aid_phob_thumbnail_center_pane

0x8b9f,	// (0x000385ae) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0003ed3c) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0003ed3c) list_cale_time_pane_t

0xdb56,	// (0x0003d565) bg_popup_window_pane_cp02_ParamLimits

0xdb56,	// (0x0003d565) bg_popup_window_pane_cp02

0xe859,	// (0x0003e268) heading_pane_cp01_ParamLimits

0xe859,	// (0x0003e268) heading_pane_cp01

0xe865,	// (0x0003e274) loc_req_pane_ParamLimits

0xe865,	// (0x0003e274) loc_req_pane

0xe875,	// (0x0003e284) loc_type_pane_ParamLimits

0xe875,	// (0x0003e284) loc_type_pane

0xe887,	// (0x0003e296) loc_type_pane_t1_ParamLimits

0xe887,	// (0x0003e296) loc_type_pane_t1

0xe899,	// (0x0003e2a8) loc_type_pane_t2_ParamLimits

0xe899,	// (0x0003e2a8) loc_type_pane_t2

0xe8ab,	// (0x0003e2ba) loc_type_pane_t3_ParamLimits

0xe8ab,	// (0x0003e2ba) loc_type_pane_t3

0x0002,

0xf334,	// (0x0003ed43) loc_type_pane_t_ParamLimits

0xf334,	// (0x0003ed43) loc_type_pane_t

0xe8bd,	// (0x0003e2cc) list_loc_req_pane

0xe8c7,	// (0x0003e2d6) scroll_pane_cp012

0x81a5,	// (0x00037bb4) list_single_loc_request_popup_menu_pane_ParamLimits

0x81a5,	// (0x00037bb4) list_single_loc_request_popup_menu_pane

0xe8d2,	// (0x0003e2e1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe8d2,	// (0x0003e2e1) list_single_loc_request_popup_menu_pane_g1

0xe8de,	// (0x0003e2ed) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe8de,	// (0x0003e2ed) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0003ed4a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0003ed4a) list_single_loc_request_popup_menu_pane_g

0xe8ea,	// (0x0003e2f9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe8ea,	// (0x0003e2f9) list_single_loc_request_popup_menu_pane_t1

0x81b7,	// (0x00037bc6) bg_popup_window_pane_cp03_ParamLimits

0x81b7,	// (0x00037bc6) bg_popup_window_pane_cp03

0x81c5,	// (0x00037bd4) heading_loc_req_pane_ParamLimits

0x81c5,	// (0x00037bd4) heading_loc_req_pane

0x81d1,	// (0x00037be0) popup_dyc_status_message_window_g1_ParamLimits

0x81d1,	// (0x00037be0) popup_dyc_status_message_window_g1

0x81dd,	// (0x00037bec) popup_dyc_status_message_window_t1_ParamLimits

0x81dd,	// (0x00037bec) popup_dyc_status_message_window_t1

0x81ef,	// (0x00037bfe) popup_dyc_status_message_window_t2_ParamLimits

0x81ef,	// (0x00037bfe) popup_dyc_status_message_window_t2

0x8201,	// (0x00037c10) popup_dyc_status_message_window_t3_ParamLimits

0x8201,	// (0x00037c10) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0003ed4f) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0003ed4f) popup_dyc_status_message_window_t

0xdeff,	// (0x0003d90e) bg_heading_pane_cp01

0xe900,	// (0x0003e30f) heading_loc_req_pane_g1

0xe908,	// (0x0003e317) heading_loc_req_pane_g2

0xe910,	// (0x0003e31f) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0003ed56) heading_loc_req_pane_g

0xe918,	// (0x0003e327) heading_loc_req_pane_t1

0xe927,	// (0x0003e336) bg_popup_sub_pane_cp01_ParamLimits

0xe927,	// (0x0003e336) bg_popup_sub_pane_cp01

0xe935,	// (0x0003e344) popup_cale_events_window_g1_ParamLimits

0xe935,	// (0x0003e344) popup_cale_events_window_g1

0xe955,	// (0x0003e364) popup_cale_events_window_g2_ParamLimits

0xe955,	// (0x0003e364) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0003ed8a) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0003ed8a) popup_cale_events_window_g

0xe975,	// (0x0003e384) popup_cale_events_window_t1_ParamLimits

0xe975,	// (0x0003e384) popup_cale_events_window_t1

0xe987,	// (0x0003e396) popup_cale_events_window_t2_ParamLimits

0xe987,	// (0x0003e396) popup_cale_events_window_t2

0xe9c5,	// (0x0003e3d4) popup_cale_events_window_t3_ParamLimits

0xe9c5,	// (0x0003e3d4) popup_cale_events_window_t3

0xe9ff,	// (0x0003e40e) popup_cale_events_window_t4_ParamLimits

0xe9ff,	// (0x0003e40e) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0003ed8f) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0003ed8f) popup_cale_events_window_t

0x822b,	// (0x00037c3a) call_type_pane

0xea35,	// (0x0003e444) popup_call_status_window_g1

0x8237,	// (0x00037c46) popup_call_status_window_g2

0x8243,	// (0x00037c52) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0003ed98) popup_call_status_window_g

0xea43,	// (0x0003e452) call_type_pane_g1

0xea4c,	// (0x0003e45b) call_type_pane_g2

0x0001,

0xf390,	// (0x0003ed9f) call_type_pane_g

0xdeff,	// (0x0003d90e) bg_popup_sub_pane_cp02

0xea55,	// (0x0003e464) listscroll_popup_wml_pane

0xea5d,	// (0x0003e46c) list_wml_pane

0xea67,	// (0x0003e476) scroll_pane_cp013

0xea72,	// (0x0003e481) list_single_graphic_popup_wml_pane_ParamLimits

0xea72,	// (0x0003e481) list_single_graphic_popup_wml_pane

0xe286,	// (0x0003dc95) list_single_graphic_popup_wml_pane_g1

0xea86,	// (0x0003e495) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0003eda4) list_single_graphic_popup_wml_pane_g

0xea8e,	// (0x0003e49d) list_single_graphic_popup_wml_pane_t1

0xeaa4,	// (0x0003e4b3) aid_call_pane

0xe152,	// (0x0003db61) popup_clock_analogue_window_g1

0xe152,	// (0x0003db61) popup_clock_analogue_window_g2

0x824f,	// (0x00037c5e) popup_clock_analogue_window_g3

0x824f,	// (0x00037c5e) popup_clock_analogue_window_g4

0xe286,	// (0x0003dc95) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0003eda9) popup_clock_analogue_window_g

0x8257,	// (0x00037c66) popup_clock_analogue_window_t1

0x8265,	// (0x00037c74) clock_digital_number_pane_ParamLimits

0x8265,	// (0x00037c74) clock_digital_number_pane

0x8271,	// (0x00037c80) clock_digital_number_pane_cp02_ParamLimits

0x8271,	// (0x00037c80) clock_digital_number_pane_cp02

0x827d,	// (0x00037c8c) clock_digital_number_pane_cp03_ParamLimits

0x827d,	// (0x00037c8c) clock_digital_number_pane_cp03

0x8289,	// (0x00037c98) clock_digital_number_pane_cp04_ParamLimits

0x8289,	// (0x00037c98) clock_digital_number_pane_cp04

0x8299,	// (0x00037ca8) clock_digital_separator_pane_ParamLimits

0x8299,	// (0x00037ca8) clock_digital_separator_pane

0x82a5,	// (0x00037cb4) popup_clock_digital_window_t1

0xe286,	// (0x0003dc95) clock_digital_number_pane_g1

0xe286,	// (0x0003dc95) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0003ed17) clock_digital_number_pane_g

0xe286,	// (0x0003dc95) clock_digital_separator_pane_g1

0xe286,	// (0x0003dc95) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0003ed17) clock_digital_separator_pane_g

0xdeff,	// (0x0003d90e) bg_popup_window_pane_cp04

0xeaac,	// (0x0003e4bb) heading_pane_cp03

0xeab4,	// (0x0003e4c3) listscroll_popup_gms_pane

0xeabc,	// (0x0003e4cb) grid_large_graphic_popup_pane

0xeac6,	// (0x0003e4d5) listscroll_popup_gms_pane_g1

0xeace,	// (0x0003e4dd) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0003edb4) listscroll_popup_gms_pane_g

0xe57d,	// (0x0003df8c) scroll_pane_cp014

0x82c2,	// (0x00037cd1) cell_large_graphic_popup_pane_ParamLimits

0x82c2,	// (0x00037cd1) cell_large_graphic_popup_pane

0x82da,	// (0x00037ce9) cell_large_graphic_popup_pane_g1_ParamLimits

0x82da,	// (0x00037ce9) cell_large_graphic_popup_pane_g1

0xead6,	// (0x0003e4e5) cell_large_graphic_popup_pane_g2_ParamLimits

0xead6,	// (0x0003e4e5) cell_large_graphic_popup_pane_g2

0xeae2,	// (0x0003e4f1) cell_large_graphic_popup_pane_g3_ParamLimits

0xeae2,	// (0x0003e4f1) cell_large_graphic_popup_pane_g3

0xeaef,	// (0x0003e4fe) cell_large_graphic_popup_pane_g4_ParamLimits

0xeaef,	// (0x0003e4fe) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0003edb9) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0003edb9) cell_large_graphic_popup_pane_g

0xeaff,	// (0x0003e50e) grid_highlight_pane_cp010

0xe286,	// (0x0003dc95) bg_popup_call_pane_g1

0xeb09,	// (0x0003e518) list_single_graphic_popup_conf_pane_ParamLimits

0xeb09,	// (0x0003e518) list_single_graphic_popup_conf_pane

0xeb1c,	// (0x0003e52b) list_highlight_pane_cp01

0xeb25,	// (0x0003e534) list_single_graphic_popup_conf_pane_g1

0xeb2d,	// (0x0003e53c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0003edc2) list_single_graphic_popup_conf_pane_g

0xeb35,	// (0x0003e544) list_single_graphic_popup_conf_pane_t1

0xeb43,	// (0x0003e552) linegrid_cams_pane_g1

0x82e6,	// (0x00037cf5) linegrid_cams_pane_g2

0xe3b2,	// (0x0003ddc1) linegrid_cams_pane_g3

0xeb4c,	// (0x0003e55b) linegrid_cams_pane_g4

0x82ef,	// (0x00037cfe) linegrid_cams_pane_g5

0x82f8,	// (0x00037d07) linegrid_cams_pane_g6

0xe3bb,	// (0x0003ddca) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0003edc7) linegrid_cams_pane_g

0xeb55,	// (0x0003e564) popup_clock_analogue_window

0xeb55,	// (0x0003e564) popup_clock_digital_window

0xdeff,	// (0x0003d90e) popup_phob_thumbnail_window

0xe286,	// (0x0003dc95) call_video_uplink_pane_g1

0xeb5e,	// (0x0003e56d) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0003edd6) call_video_uplink_pane_g

0xeb66,	// (0x0003e575) video_uplink_pane

0xeb6e,	// (0x0003e57d) mce_image_pane_g1

0x8301,	// (0x00037d10) mce_image_pane_g2

0x830b,	// (0x00037d1a) mce_image_pane_g3

0x8313,	// (0x00037d22) mce_image_pane_g4

0x831b,	// (0x00037d2a) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0003eddb) mce_image_pane_g

0xeb78,	// (0x0003e587) control_top_pane_stacon_cp01_ParamLimits

0xeb78,	// (0x0003e587) control_top_pane_stacon_cp01

0xeb8c,	// (0x0003e59b) uni_indicator_pane_stacon_cp01_ParamLimits

0xeb8c,	// (0x0003e59b) uni_indicator_pane_stacon_cp01

0xeb9d,	// (0x0003e5ac) bg_popup_sub_pane_cp03

0x8323,	// (0x00037d32) chi_dic_find_pane

0x832b,	// (0x00037d3a) listscroll_chi_dic_pane

0x8334,	// (0x00037d43) main_pane_chidic_g1

0xeba7,	// (0x0003e5b6) chi_dic_find_pane_t1

0xebb5,	// (0x0003e5c4) find_chidic_pane

0xebbe,	// (0x0003e5cd) chi_dic_list_pane_ParamLimits

0xebbe,	// (0x0003e5cd) chi_dic_list_pane

0xebcf,	// (0x0003e5de) scroll_pane_cp020

0xebd7,	// (0x0003e5e6) find_chidic_pane_t1

0xdeff,	// (0x0003d90e) input_focus_pane_cp06

0x8347,	// (0x00037d56) list_chi_dic_pane_ParamLimits

0x8347,	// (0x00037d56) list_chi_dic_pane

0x8361,	// (0x00037d70) list_chi_dic_pane_t1_ParamLimits

0x8361,	// (0x00037d70) list_chi_dic_pane_t1

0xdeff,	// (0x0003d90e) list_highlight_pane_cp020

0xebe6,	// (0x0003e5f5) bg_cale_heading_pane_g1

0x8374,	// (0x00037d83) bg_cale_heading_pane_g2

0x837c,	// (0x00037d8b) bg_cale_heading_pane_g3

0x8384,	// (0x00037d93) bg_cale_heading_pane_g4

0x838e,	// (0x00037d9d) bg_cale_heading_pane_g5

0x8398,	// (0x00037da7) bg_cale_heading_pane_g6

0x83a0,	// (0x00037daf) bg_cale_heading_pane_g7

0x83a8,	// (0x00037db7) bg_cale_heading_pane_g8

0x83b2,	// (0x00037dc1) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0003ede6) bg_cale_heading_pane_g

0xebe6,	// (0x0003e5f5) bg_cale_side_pane_g1

0x83bc,	// (0x00037dcb) bg_cale_side_pane_g2

0x83c4,	// (0x00037dd3) bg_cale_side_pane_g3

0x83cc,	// (0x00037ddb) bg_cale_side_pane_g4

0x83d4,	// (0x00037de3) bg_cale_side_pane_g5

0x83dc,	// (0x00037deb) bg_cale_side_pane_g6

0x83e4,	// (0x00037df3) bg_cale_side_pane_g7

0x83ec,	// (0x00037dfb) bg_cale_side_pane_g8

0x83f4,	// (0x00037e03) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0003edf9) bg_cale_side_pane_g

0x83fc,	// (0x00037e0b) popup_call_status_window_ParamLimits

0x83fc,	// (0x00037e0b) popup_call_status_window

0xebee,	// (0x0003e5fd) stacon_top_pane

0xebf6,	// (0x0003e605) status_pane_ParamLimits

0xebf6,	// (0x0003e605) status_pane

0xec0b,	// (0x0003e61a) status_small_pane

0xec13,	// (0x0003e622) control_pane

0xdeff,	// (0x0003d90e) stacon_bottom_pane

0xec1b,	// (0x0003e62a) list_single_mce_smart_pane_t1_ParamLimits

0xec1b,	// (0x0003e62a) list_single_mce_smart_pane_t1

0xec2e,	// (0x0003e63d) list_single_mce_smart_pane_t2_ParamLimits

0xec2e,	// (0x0003e63d) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0003ee0c) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0003ee0c) list_single_mce_smart_pane_t

0x8408,	// (0x00037e17) compass_pane

0x8414,	// (0x00037e23) main_location2_pane_t1

0x8428,	// (0x00037e37) main_location2_pane_t2

0x843c,	// (0x00037e4b) main_location2_pane_t3

0x0003,

0xf402,	// (0x0003ee11) main_location2_pane_t

0xec4d,	// (0x0003e65c) compass_pane_g1_ParamLimits

0xec4d,	// (0x0003e65c) compass_pane_g1

0x8486,	// (0x00037e95) compass_pane_t1

0x8495,	// (0x00037ea4) compass_pane_t2

0x0005,

0xf40b,	// (0x0003ee1a) compass_pane_t

0x84e0,	// (0x00037eef) text_secondary_cp61

0xec61,	// (0x0003e670) navi_pane_cams_g5

0xec84,	// (0x0003e693) navi_pane_im_t1

0xec92,	// (0x0003e6a1) navi_pane_mp_g1_ParamLimits

0xec92,	// (0x0003e6a1) navi_pane_mp_g1

0xeca6,	// (0x0003e6b5) navi_pane_mp_g2_ParamLimits

0xeca6,	// (0x0003e6b5) navi_pane_mp_g2

0xecb2,	// (0x0003e6c1) navi_pane_mp_g3_ParamLimits

0xecb2,	// (0x0003e6c1) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0003ee2e) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0003ee2e) navi_pane_mp_g

0xecbe,	// (0x0003e6cd) navi_pane_mp_t1

0xeccc,	// (0x0003e6db) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0003ee35) navi_pane_mp_t

0xed08,	// (0x0003e717) navi_pane_vt_g1

0xecbe,	// (0x0003e6cd) navi_pane_vt_t1

0xed10,	// (0x0003e71f) navi_slider_pane

0xed18,	// (0x0003e727) zooming_pane

0xed20,	// (0x0003e72f) navi_slider_pane_g1

0x85f5,	// (0x00038004) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0003ee3c) navi_slider_pane_g

0xed44,	// (0x0003e753) aid_levels_zoom

0xed4c,	// (0x0003e75b) zooming_pane_g1

0xed54,	// (0x0003e763) zooming_pane_g2

0xed54,	// (0x0003e763) zooming_pane_g3

0x0002,

0xf43c,	// (0x0003ee4b) zooming_pane_g

0xed5c,	// (0x0003e76b) level_10_zoom

0xed65,	// (0x0003e774) level_11_zoom

0xed6e,	// (0x0003e77d) level_1_zoom

0xed77,	// (0x0003e786) level_2_zoom

0xed80,	// (0x0003e78f) level_3_zoom

0xed89,	// (0x0003e798) level_4_zoom

0xed92,	// (0x0003e7a1) level_5_zoom

0xed9b,	// (0x0003e7aa) level_6_zoom

0xeda4,	// (0x0003e7b3) level_7_zoom

0xedad,	// (0x0003e7bc) level_8_zoom

0xedb6,	// (0x0003e7c5) level_9_zoom

0xedc7,	// (0x0003e7d6) popup_phob_thumbnail_window_g1

0xedcf,	// (0x0003e7de) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0003ee52) popup_phob_thumbnail_window_g

0x12eb,	// (0x00030cfa) level_1_location

0x12f3,	// (0x00030d02) level_2_location

0x12fb,	// (0x00030d0a) level_3_location

0x1303,	// (0x00030d12) level_4_location

0xed18,	// (0x0003e727) level_5_location

0x8607,	// (0x00038016) mce_icon_pane_g1

0x860f,	// (0x0003801e) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0003ee57) mce_icon_pane_g

0x8617,	// (0x00038026) main_mup_pane_g1_ParamLimits

0x8617,	// (0x00038026) main_mup_pane_g1

0x862f,	// (0x0003803e) main_mup_pane_g2_ParamLimits

0x862f,	// (0x0003803e) main_mup_pane_g2

0x864b,	// (0x0003805a) main_mup_pane_g3_ParamLimits

0x864b,	// (0x0003805a) main_mup_pane_g3

0x8667,	// (0x00038076) main_mup_pane_g4_ParamLimits

0x8667,	// (0x00038076) main_mup_pane_g4

0x8683,	// (0x00038092) main_mup_pane_g5_ParamLimits

0x8683,	// (0x00038092) main_mup_pane_g5

0x86a4,	// (0x000380b3) main_mup_pane_g6_ParamLimits

0x86a4,	// (0x000380b3) main_mup_pane_g6

0x86c0,	// (0x000380cf) main_mup_pane_g7_ParamLimits

0x86c0,	// (0x000380cf) main_mup_pane_g7

0x86dc,	// (0x000380eb) main_mup_pane_g8_ParamLimits

0x86dc,	// (0x000380eb) main_mup_pane_g8

0x86fc,	// (0x0003810b) main_mup_pane_g9_ParamLimits

0x86fc,	// (0x0003810b) main_mup_pane_g9

0x871b,	// (0x0003812a) main_mup_pane_g10_ParamLimits

0x871b,	// (0x0003812a) main_mup_pane_g10

0x873a,	// (0x00038149) main_mup_pane_g11_ParamLimits

0x873a,	// (0x00038149) main_mup_pane_g11

0x8752,	// (0x00038161) main_mup_pane_g12_ParamLimits

0x8752,	// (0x00038161) main_mup_pane_g12

0x8760,	// (0x0003816f) main_mup_pane_g13_ParamLimits

0x8760,	// (0x0003816f) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0003ee5c) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0003ee5c) main_mup_pane_g

0x8776,	// (0x00038185) main_mup_pane_t1_ParamLimits

0x8776,	// (0x00038185) main_mup_pane_t1

0x8793,	// (0x000381a2) main_mup_pane_t2_ParamLimits

0x8793,	// (0x000381a2) main_mup_pane_t2

0x87ad,	// (0x000381bc) main_mup_pane_t3_ParamLimits

0x87ad,	// (0x000381bc) main_mup_pane_t3

0x87c7,	// (0x000381d6) main_mup_pane_t4_ParamLimits

0x87c7,	// (0x000381d6) main_mup_pane_t4

0x87d9,	// (0x000381e8) main_mup_pane_t5_ParamLimits

0x87d9,	// (0x000381e8) main_mup_pane_t5

0x87eb,	// (0x000381fa) main_mup_pane_t6_ParamLimits

0x87eb,	// (0x000381fa) main_mup_pane_t6

0x0005,

0xf468,	// (0x0003ee77) main_mup_pane_t_ParamLimits

0xf468,	// (0x0003ee77) main_mup_pane_t

0x8801,	// (0x00038210) mup_progress_pane_ParamLimits

0x8801,	// (0x00038210) mup_progress_pane

0x880d,	// (0x0003821c) mup_visualizer_pane_ParamLimits

0x880d,	// (0x0003821c) mup_visualizer_pane

0x8847,	// (0x00038256) mup_volume_pane_ParamLimits

0x8847,	// (0x00038256) mup_volume_pane

0xea35,	// (0x0003e444) mup_visualizer_pane_g1_ParamLimits

0xea35,	// (0x0003e444) mup_visualizer_pane_g1

0xea35,	// (0x0003e444) mup_visualizer_pane_g2_ParamLimits

0xea35,	// (0x0003e444) mup_visualizer_pane_g2

0xec4d,	// (0x0003e65c) mup_visualizer_pane_g3_ParamLimits

0xec4d,	// (0x0003e65c) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0003ee84) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0003ee84) mup_visualizer_pane_g

0xe286,	// (0x0003dc95) mup_volume_pane_g1

0xeddf,	// (0x0003e7ee) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0003ee8b) mup_volume_pane_g

0xe286,	// (0x0003dc95) mup_progress_pane_g1

0xede8,	// (0x0003e7f7) mup_progress_pane_g2

0xedf1,	// (0x0003e800) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0003ee90) mup_progress_pane_g

0xdeff,	// (0x0003d90e) bg_popup_window_pane_cp05

0xedfa,	// (0x0003e809) heading_pane_cp02_ParamLimits

0xedfa,	// (0x0003e809) heading_pane_cp02

0xee14,	// (0x0003e823) list_popup_blid_pane

0xee1c,	// (0x0003e82b) list_blid_sat_info_pane_ParamLimits

0xee1c,	// (0x0003e82b) list_blid_sat_info_pane

0xee2f,	// (0x0003e83e) list_blid_sat_info_pane_g1

0xee37,	// (0x0003e846) list_blid_sat_info_pane_t1

0x8954,	// (0x00038363) mup_equalizer_pane_ParamLimits

0x8954,	// (0x00038363) mup_equalizer_pane

0x8975,	// (0x00038384) mup_equalizer_pane_cp1_ParamLimits

0x8975,	// (0x00038384) mup_equalizer_pane_cp1

0x8996,	// (0x000383a5) mup_equalizer_pane_cp2_ParamLimits

0x8996,	// (0x000383a5) mup_equalizer_pane_cp2

0x89b7,	// (0x000383c6) mup_equalizer_pane_cp3_ParamLimits

0x89b7,	// (0x000383c6) mup_equalizer_pane_cp3

0x89d8,	// (0x000383e7) mup_equalizer_pane_cp4_ParamLimits

0x89d8,	// (0x000383e7) mup_equalizer_pane_cp4

0x89f9,	// (0x00038408) mup_equalizer_pane_cp5

0x8a0f,	// (0x0003841e) mup_equalizer_pane_cp6

0x8a27,	// (0x00038436) mup_equalizer_pane_cp7

0x1209,	// (0x00030c18) bg_popup_call_poc_act_pane_g9

0x1211,	// (0x00030c20) bg_popup_call_poc_act_pane_g10

0x1219,	// (0x00030c28) bg_popup_call_poc_act_pane_g11

0x000a,

0xe15a,	// (0x0003db69) mup_scale_pane

0xe286,	// (0x0003dc95) mup_scale_pane_g1

0xee45,	// (0x0003e854) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0003eeac) mup_scale_pane_g

0xee69,	// (0x0003e878) msg_data_pane

0xee71,	// (0x0003e880) scroll_pane_cp017

0x55b7,	// (0x00034fc6) bg_list_pane_cp04_ParamLimits

0x55b7,	// (0x00034fc6) bg_list_pane_cp04

0xee79,	// (0x0003e888) msg_data_pane_g1

0x8a51,	// (0x00038460) msg_data_pane_g2

0x8a5b,	// (0x0003846a) msg_data_pane_g3

0x8a63,	// (0x00038472) msg_data_pane_g4

0x8a6b,	// (0x0003847a) msg_data_pane_g5

0x8a73,	// (0x00038482) msg_data_pane_g6

0x8a7b,	// (0x0003848a) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0003eebb) msg_data_pane_g

0x55db,	// (0x00034fea) msg_text_pane_ParamLimits

0x55db,	// (0x00034fea) msg_text_pane

0x8a83,	// (0x00038492) qrid_highlight_pane_cp011_ParamLimits

0x8a83,	// (0x00038492) qrid_highlight_pane_cp011

0xdeff,	// (0x0003d90e) msg_body_pane

0xdeff,	// (0x0003d90e) msg_header_pane

0xee8a,	// (0x0003e899) input_focus_pane_cp07

0x5627,	// (0x00035036) msg_header_pane_t1_ParamLimits

0x5627,	// (0x00035036) msg_header_pane_t1

0x5639,	// (0x00035048) msg_header_pane_t2_ParamLimits

0x5639,	// (0x00035048) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0003eecf) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0003eecf) msg_header_pane_t

0xee9f,	// (0x0003e8ae) msg_body_pane_g1

0x564b,	// (0x0003505a) msg_body_pane_t1_ParamLimits

0x564b,	// (0x0003505a) msg_body_pane_t1

0x567c,	// (0x0003508b) msg_body_pane_t2_ParamLimits

0x567c,	// (0x0003508b) msg_body_pane_t2

0x568e,	// (0x0003509d) msg_body_pane_t3_ParamLimits

0x568e,	// (0x0003509d) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0003eed4) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0003eed4) msg_body_pane_t

0x8aef,	// (0x000384fe) main_viewer_pane_g1_ParamLimits

0x8aef,	// (0x000384fe) main_viewer_pane_g1

0x8afb,	// (0x0003850a) main_viewer_pane_g2_ParamLimits

0x8afb,	// (0x0003850a) main_viewer_pane_g2

0x8b07,	// (0x00038516) main_viewer_pane_g3_ParamLimits

0x8b07,	// (0x00038516) main_viewer_pane_g3

0x8b18,	// (0x00038527) main_viewer_pane_g4_ParamLimits

0x8b18,	// (0x00038527) main_viewer_pane_g4

0x8b29,	// (0x00038538) main_viewer_pane_g5_ParamLimits

0x8b29,	// (0x00038538) main_viewer_pane_g5

0x8b29,	// (0x00038538) main_viewer_pane_g7_ParamLimits

0x8b29,	// (0x00038538) main_viewer_pane_g7

0x8b3b,	// (0x0003854a) main_viewer_pane_g8_ParamLimits

0x8b3b,	// (0x0003854a) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0003eee4) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0003eee4) main_viewer_pane_g

0xeea7,	// (0x0003e8b6) viewer_content_pane_ParamLimits

0xeea7,	// (0x0003e8b6) viewer_content_pane

0x8b73,	// (0x00038582) main_postcard_pane_g1_ParamLimits

0x8b73,	// (0x00038582) main_postcard_pane_g1

0x8b81,	// (0x00038590) main_postcard_pane_g2_ParamLimits

0x8b81,	// (0x00038590) main_postcard_pane_g2

0x8b8f,	// (0x0003859e) main_postcard_pane_g3_ParamLimits

0x8b8f,	// (0x0003859e) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0003eef5) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0003eef5) main_postcard_pane_g

0x8b9f,	// (0x000385ae) main_postcard_pane_g4

0x140b,	// (0x00030e1a) smil_status_volume_pane_g2

0x8bcb,	// (0x000385da) postcard_pane_ParamLimits

0x8bcb,	// (0x000385da) postcard_pane

0xea35,	// (0x0003e444) postcard_pane_g1_ParamLimits

0xea35,	// (0x0003e444) postcard_pane_g1

0x8bfd,	// (0x0003860c) postcard_pane_g2_ParamLimits

0x8bfd,	// (0x0003860c) postcard_pane_g2

0x8c09,	// (0x00038618) postcard_pane_g3_ParamLimits

0x8c09,	// (0x00038618) postcard_pane_g3

0xeeb5,	// (0x0003e8c4) postcard_pane_g4_ParamLimits

0xeeb5,	// (0x0003e8c4) postcard_pane_g4

0x8c15,	// (0x00038624) postcard_pane_g5_ParamLimits

0x8c15,	// (0x00038624) postcard_pane_g5

0x8c21,	// (0x00038630) postcard_pane_g6_ParamLimits

0x8c21,	// (0x00038630) postcard_pane_g6

0xeec3,	// (0x0003e8d2) postcard_pane_g7_ParamLimits

0xeec3,	// (0x0003e8d2) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0003ef02) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0003ef02) postcard_pane_g

0x8c2d,	// (0x0003863c) main_mp2_pane_g1_ParamLimits

0x8c2d,	// (0x0003863c) main_mp2_pane_g1

0x8c39,	// (0x00038648) main_mp2_pane_g2_ParamLimits

0x8c39,	// (0x00038648) main_mp2_pane_g2

0x8c45,	// (0x00038654) main_mp2_pane_g3_ParamLimits

0x8c45,	// (0x00038654) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0003ef11) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0003ef11) main_mp2_pane_g

0x8c51,	// (0x00038660) main_mp2_pane_t1_ParamLimits

0x8c51,	// (0x00038660) main_mp2_pane_t1

0x8c68,	// (0x00038677) main_mp2_pane_t2_ParamLimits

0x8c68,	// (0x00038677) main_mp2_pane_t2

0x8c7c,	// (0x0003868b) main_mp2_pane_t3_ParamLimits

0x8c7c,	// (0x0003868b) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0003ef18) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0003ef18) main_mp2_pane_t

0xeed1,	// (0x0003e8e0) pec_content_pane_ParamLimits

0xeed1,	// (0x0003e8e0) pec_content_pane

0xe57d,	// (0x0003df8c) scroll_pane_cp015

0xeee3,	// (0x0003e8f2) pec_attribute_pane_ParamLimits

0xeee3,	// (0x0003e8f2) pec_attribute_pane

0x8c8e,	// (0x0003869d) pec_content_pane_g1_ParamLimits

0x8c8e,	// (0x0003869d) pec_content_pane_g1

0xeef3,	// (0x0003e902) pec_content_pane_t1_ParamLimits

0xeef3,	// (0x0003e902) pec_content_pane_t1

0xef05,	// (0x0003e914) pec_content_pane_t2_ParamLimits

0xef05,	// (0x0003e914) pec_content_pane_t2

0x0001,

0xf510,	// (0x0003ef1f) pec_content_pane_t_ParamLimits

0xf510,	// (0x0003ef1f) pec_content_pane_t

0x8c9a,	// (0x000386a9) list_single_graphic_pane_cp01_ParamLimits

0x8c9a,	// (0x000386a9) list_single_graphic_pane_cp01

0xe15a,	// (0x0003db69) bg_popup_sub_pane_cp04

0xef17,	// (0x0003e926) popup_mup_playback_window_g1

0xef23,	// (0x0003e932) popup_mup_playback_window_t1

0xef38,	// (0x0003e947) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0003ef24) popup_mup_playback_window_t

0xef6f,	// (0x0003e97e) main_image_pane_g1_ParamLimits

0xef6f,	// (0x0003e97e) main_image_pane_g1

0xefb2,	// (0x0003e9c1) scroll_pane_cp018_ParamLimits

0xefb2,	// (0x0003e9c1) scroll_pane_cp018

0xefca,	// (0x0003e9d9) scroll_pane_cp016_ParamLimits

0xefca,	// (0x0003e9d9) scroll_pane_cp016

0x8d33,	// (0x00038742) smil2_image_pane_ParamLimits

0x8d33,	// (0x00038742) smil2_image_pane

0x8d63,	// (0x00038772) smil2_root_pane_ParamLimits

0x8d63,	// (0x00038772) smil2_root_pane

0x8d8f,	// (0x0003879e) smil2_text_pane_ParamLimits

0x8d8f,	// (0x0003879e) smil2_text_pane

0xdeff,	// (0x0003d90e) bg_list_pane_cp06

0xf006,	// (0x0003ea15) grid_radio_pane

0xdeff,	// (0x0003d90e) bg_popup_window_pane_cp06

0xf00e,	// (0x0003ea1d) main_fmradio_pane_t1

0xeaac,	// (0x0003e4bb) heading_pane_cp04

0xf01c,	// (0x0003ea2b) main_fmradio_pane_t2

0x1221,	// (0x00030c30) popup_cale_lunar_info_window_g1

0xf02a,	// (0x0003ea39) main_fmradio_pane_t3

0x1229,	// (0x00030c38) popup_cale_lunar_info_window_g2

0xf038,	// (0x0003ea47) main_fmradio_pane_t4

0x0001,

0xf046,	// (0x0003ea55) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0003efff) popup_cale_lunar_info_window_g

0xf52a,	// (0x0003ef39) main_fmradio_pane_t

0xf054,	// (0x0003ea63) wait_bar_pane_cp03

0xf05c,	// (0x0003ea6b) cell_fmradio_pane_ParamLimits

0xf05c,	// (0x0003ea6b) cell_fmradio_pane

0xeec3,	// (0x0003e8d2) cell_fmradio_pane_g1_ParamLimits

0xeec3,	// (0x0003e8d2) cell_fmradio_pane_g1

0xdeff,	// (0x0003d90e) grid_highlight_pane_cp011

0xf06f,	// (0x0003ea7e) poc_content_pane_ParamLimits

0xf06f,	// (0x0003ea7e) poc_content_pane

0xf081,	// (0x0003ea90) scroll_pane_cp019

0x8dcf,	// (0x000387de) popup_call_poc_act_window_ParamLimits

0x8dcf,	// (0x000387de) popup_call_poc_act_window

0x8ddc,	// (0x000387eb) popup_call_poc_inact_window_ParamLimits

0x8ddc,	// (0x000387eb) popup_call_poc_inact_window

0xf5c7,	// (0x0003efd6) bg_popup_call_poc_act_pane_g

0x1199,	// (0x00030ba8) bg_popup_call_poc_inact_pane_g1

0x11a1,	// (0x00030bb0) bg_popup_call_poc_inact_pane_g2

0xf089,	// (0x0003ea98) popup_call_poc_act_window_g2

0x11a9,	// (0x00030bb8) bg_popup_call_poc_inact_pane_g3

0x11b1,	// (0x00030bc0) bg_popup_call_poc_inact_pane_g4

0x11b9,	// (0x00030bc8) bg_popup_call_poc_inact_pane_g5

0xf091,	// (0x0003eaa0) popup_call_poc_act_window_t1_ParamLimits

0xf091,	// (0x0003eaa0) popup_call_poc_act_window_t1

0xf0b9,	// (0x0003eac8) popup_call_poc_act_window_t2_ParamLimits

0xf0b9,	// (0x0003eac8) popup_call_poc_act_window_t2

0x0321,	// (0x0002fd30) popup_call_poc_act_window_t3_ParamLimits

0x0321,	// (0x0002fd30) popup_call_poc_act_window_t3

0x0349,	// (0x0002fd58) popup_call_poc_act_window_t4_ParamLimits

0x0349,	// (0x0002fd58) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0003ef44) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0003ef44) popup_call_poc_act_window_t

0x11c1,	// (0x00030bd0) bg_popup_call_poc_inact_pane_g6

0x11c9,	// (0x00030bd8) bg_popup_call_poc_inact_pane_g7

0x11d1,	// (0x00030be0) bg_popup_call_poc_inact_pane_g8

0x035b,	// (0x0002fd6a) popup_call_poc_inact_window_g2

0x11d9,	// (0x00030be8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0003efc3) bg_popup_call_poc_inact_pane_g

0x0363,	// (0x0002fd72) popup_call_poc_inact_window_t1_ParamLimits

0x0363,	// (0x0002fd72) popup_call_poc_inact_window_t1

0x0378,	// (0x0002fd87) popup_call_poc_inact_window_t2_ParamLimits

0x0378,	// (0x0002fd87) popup_call_poc_inact_window_t2

0x038d,	// (0x0002fd9c) popup_call_poc_inact_window_t3_ParamLimits

0x038d,	// (0x0002fd9c) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0003ef4d) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0003ef4d) popup_call_poc_inact_window_t

0x1391,	// (0x00030da0) context_pane_ParamLimits

0x93cc,	// (0x00038ddb) signal_pane_ParamLimits

0xed18,	// (0x0003e727) main_call2_pane

0x137f,	// (0x00030d8e) popup_phob_thumbnail2_window_ParamLimits

0x137f,	// (0x00030d8e) popup_phob_thumbnail2_window

0x8a9d,	// (0x000384ac) aid_hotspot_pointer_arrow_pane

0x8aa5,	// (0x000384b4) aid_hotspot_pointer_hand_pane

0x90fe,	// (0x00038b0d) phob_pre_status_pane_g5

0x71b9,	// (0x00036bc8) cams_zoom_pane_ParamLimits

0x71c5,	// (0x00036bd4) image_vga_pane_ParamLimits

0x71d4,	// (0x00036be3) main_camera_pane_g1_ParamLimits

0x71e2,	// (0x00036bf1) main_camera_pane_g2_ParamLimits

0x71ee,	// (0x00036bfd) main_camera_pane_g3_ParamLimits

0x71fa,	// (0x00036c09) main_camera_pane_g4_ParamLimits

0x7206,	// (0x00036c15) main_camera_pane_g5_ParamLimits

0x7212,	// (0x00036c21) main_camera_pane_g6_ParamLimits

0x721e,	// (0x00036c2d) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0003ec4c) main_camera_pane_g_ParamLimits

0x722a,	// (0x00036c39) main_camera_pane_t1_ParamLimits

0x723c,	// (0x00036c4b) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0003ec5d) main_camera_pane_t_ParamLimits

0xe15a,	// (0x0003db69) bg_popup_preview_window_pane_cp01_ParamLimits

0xe15a,	// (0x0003db69) bg_popup_preview_window_pane_cp01

0x03a2,	// (0x0002fdb1) popup_phob_thumbnail2_window_g1_ParamLimits

0x03a2,	// (0x0002fdb1) popup_phob_thumbnail2_window_g1

0xdeff,	// (0x0003d90e) call2_cli_visual_pane

0x8df8,	// (0x00038807) popup_call2_audio_conf_window_ParamLimits

0x8df8,	// (0x00038807) popup_call2_audio_conf_window

0x8e0d,	// (0x0003881c) popup_call2_audio_first_window_ParamLimits

0x8e0d,	// (0x0003881c) popup_call2_audio_first_window

0x8eab,	// (0x000388ba) popup_call2_audio_in_window_ParamLimits

0x8eab,	// (0x000388ba) popup_call2_audio_in_window

0x8eed,	// (0x000388fc) popup_call2_audio_out_window_ParamLimits

0x8eed,	// (0x000388fc) popup_call2_audio_out_window

0x8f4f,	// (0x0003895e) popup_call2_audio_second_window_ParamLimits

0x8f4f,	// (0x0003895e) popup_call2_audio_second_window

0x8fad,	// (0x000389bc) popup_call2_audio_wait_window_ParamLimits

0x8fad,	// (0x000389bc) popup_call2_audio_wait_window

0xdeff,	// (0x0003d90e) bg_popup_call2_act_pane_cp03

0xe13c,	// (0x0003db4b) list_conf_pane_cp

0x03ae,	// (0x0002fdbd) popup_call2_audio_conf_window_t1

0xeb09,	// (0x0003e518) list_single_graphic_popup_conf2_pane_ParamLimits

0xeb09,	// (0x0003e518) list_single_graphic_popup_conf2_pane

0xeb1c,	// (0x0003e52b) list_highlight_pane_cp04

0x03bc,	// (0x0002fdcb) list_single_graphic_popup_conf2_pane_g1

0xeb2d,	// (0x0003e53c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0003ef54) list_single_graphic_popup_conf2_pane_g

0x03c6,	// (0x0002fdd5) list_single_graphic_popup_conf2_pane_t1

0x03d4,	// (0x0002fde3) bg_popup_call2_act_pane_cp01_ParamLimits

0x03d4,	// (0x0002fde3) bg_popup_call2_act_pane_cp01

0x045e,	// (0x0002fe6d) call_type_pane_cp05_ParamLimits

0x045e,	// (0x0002fe6d) call_type_pane_cp05

0x04b2,	// (0x0002fec1) popup_call2_audio_second_window_g1_ParamLimits

0x04b2,	// (0x0002fec1) popup_call2_audio_second_window_g1

0x0506,	// (0x0002ff15) popup_call2_audio_second_window_g2_ParamLimits

0x0506,	// (0x0002ff15) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0003ef59) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0003ef59) popup_call2_audio_second_window_g

0x056b,	// (0x0002ff7a) popup_call2_audio_second_window_t1_ParamLimits

0x056b,	// (0x0002ff7a) popup_call2_audio_second_window_t1

0x0626,	// (0x00030035) popup_call2_audio_second_window_t2_ParamLimits

0x0626,	// (0x00030035) popup_call2_audio_second_window_t2

0x0679,	// (0x00030088) popup_call2_audio_second_window_t3_ParamLimits

0x0679,	// (0x00030088) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0003ef60) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0003ef60) popup_call2_audio_second_window_t

0xdeff,	// (0x0003d90e) bg_popup_call2_in_pane_cp02

0xdf09,	// (0x0003d918) call_type_pane_cp04

0xdf11,	// (0x0003d920) popup_call2_audio_wait_window_g1

0xdf19,	// (0x0003d928) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0003eb39) popup_call2_audio_wait_window_g

0xdf21,	// (0x0003d930) popup_call2_audio_wait_window_t3

0x076c,	// (0x0003017b) bg_popup_call2_act_pane_ParamLimits

0x076c,	// (0x0003017b) bg_popup_call2_act_pane

0x082c,	// (0x0003023b) call_type_pane_cp03_ParamLimits

0x082c,	// (0x0003023b) call_type_pane_cp03

0x0890,	// (0x0003029f) popup_call2_audio_first_window_g1_ParamLimits

0x0890,	// (0x0003029f) popup_call2_audio_first_window_g1

0x0900,	// (0x0003030f) popup_call2_audio_first_window_g2_ParamLimits

0x0900,	// (0x0003030f) popup_call2_audio_first_window_g2

0xea35,	// (0x0003e444) popup_call2_audio_first_window_g3_ParamLimits

0xea35,	// (0x0003e444) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0003ef69) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0003ef69) popup_call2_audio_first_window_g

0x09de,	// (0x000303ed) popup_call2_audio_first_window_t1_ParamLimits

0x09de,	// (0x000303ed) popup_call2_audio_first_window_t1

0x0ae1,	// (0x000304f0) popup_call2_audio_first_window_t4_ParamLimits

0x0ae1,	// (0x000304f0) popup_call2_audio_first_window_t4

0x0bc4,	// (0x000305d3) popup_call2_audio_first_window_t5_ParamLimits

0x0bc4,	// (0x000305d3) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0003ef74) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0003ef74) popup_call2_audio_first_window_t

0xe152,	// (0x0003db61) bg_popup_call2_act_pane_g1

0x1231,	// (0x00030c40) popup_cale_lunar_info_window_t1

0x123f,	// (0x00030c4e) popup_cale_lunar_info_window_t2

0x124d,	// (0x00030c5c) popup_cale_lunar_info_window_t3

0xdeff,	// (0x0003d90e) bg_popup_call2_bubble_pane

0x0cc5,	// (0x000306d4) bg_popup_call2_in_pane_cp01_ParamLimits

0x0cc5,	// (0x000306d4) bg_popup_call2_in_pane_cp01

0xdbdb,	// (0x0003d5ea) call_type_pane_cp02

0x0d0d,	// (0x0003071c) popup_call2_audio_out_window_g1_ParamLimits

0x0d0d,	// (0x0003071c) popup_call2_audio_out_window_g1

0x0d39,	// (0x00030748) popup_call2_audio_out_window_g2_ParamLimits

0x0d39,	// (0x00030748) popup_call2_audio_out_window_g2

0x0d61,	// (0x00030770) popup_call2_audio_out_window_g3_ParamLimits

0x0d61,	// (0x00030770) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0003ef7d) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0003ef7d) popup_call2_audio_out_window_g

0x0d9c,	// (0x000307ab) popup_call2_audio_out_window_t1_ParamLimits

0x0d9c,	// (0x000307ab) popup_call2_audio_out_window_t1

0x0dfb,	// (0x0003080a) popup_call2_audio_out_window_t2_ParamLimits

0x0dfb,	// (0x0003080a) popup_call2_audio_out_window_t2

0x0e4f,	// (0x0003085e) popup_call2_audio_out_window_t3_ParamLimits

0x0e4f,	// (0x0003085e) popup_call2_audio_out_window_t3

0x0e65,	// (0x00030874) popup_call2_audio_out_window_t4_ParamLimits

0x0e65,	// (0x00030874) popup_call2_audio_out_window_t4

0x0e7b,	// (0x0003088a) popup_call2_audio_out_window_t5_ParamLimits

0x0e7b,	// (0x0003088a) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0003ef86) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0003ef86) popup_call2_audio_out_window_t

0x0edf,	// (0x000308ee) bg_popup_call2_in_pane_ParamLimits

0x0edf,	// (0x000308ee) bg_popup_call2_in_pane

0x0f3b,	// (0x0003094a) popup_call2_audio_in_window_g1_ParamLimits

0x0f3b,	// (0x0003094a) popup_call2_audio_in_window_g1

0x0f73,	// (0x00030982) popup_call2_audio_in_window_g2_ParamLimits

0x0f73,	// (0x00030982) popup_call2_audio_in_window_g2

0x0fab,	// (0x000309ba) popup_call2_audio_in_window_g3_ParamLimits

0x0fab,	// (0x000309ba) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0003ef93) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0003ef93) popup_call2_audio_in_window_g

0x1003,	// (0x00030a12) popup_call2_audio_in_window_t1_ParamLimits

0x1003,	// (0x00030a12) popup_call2_audio_in_window_t1

0x1083,	// (0x00030a92) popup_call2_audio_in_window_t2_ParamLimits

0x1083,	// (0x00030a92) popup_call2_audio_in_window_t2

0x1103,	// (0x00030b12) popup_call2_audio_in_window_t3_ParamLimits

0x1103,	// (0x00030b12) popup_call2_audio_in_window_t3

0x111d,	// (0x00030b2c) popup_call2_audio_in_window_t4_ParamLimits

0x111d,	// (0x00030b2c) popup_call2_audio_in_window_t4

0x112f,	// (0x00030b3e) popup_call2_audio_in_window_t5_ParamLimits

0x112f,	// (0x00030b3e) popup_call2_audio_in_window_t5

0x1144,	// (0x00030b53) popup_call2_audio_in_window_t6_ParamLimits

0x1144,	// (0x00030b53) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0003ef9c) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0003ef9c) popup_call2_audio_in_window_t

0xe152,	// (0x0003db61) bg_popup_call2_in_pane_g1

0x125b,	// (0x00030c6a) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0003f004) popup_cale_lunar_info_window_t

0xe15a,	// (0x0003db69) bg_popup_call2_rect_pane_ParamLimits

0xe15a,	// (0x0003db69) bg_popup_call2_rect_pane

0xdeff,	// (0x0003d90e) call2_cli_visual_graphic_pane

0xdeff,	// (0x0003d90e) call2_cli_visual_text_pane

0x9472,	// (0x00038e81) smil_status_volume_pane_g3

0x0002,

0xe286,	// (0x0003dc95) call2_cli_visual_graphic_pane_g1

0xe286,	// (0x0003dc95) call2_cli_visual_graphic_pane_g2

0xe286,	// (0x0003dc95) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0003efa9) call2_cli_visual_graphic_pane_g

0x1159,	// (0x00030b68) bg_popup_call2_rect_pane_g1

0xe312,	// (0x0003dd21) bg_popup_call2_rect_pane_g2

0x1161,	// (0x00030b70) bg_popup_call2_rect_pane_g3

0x1169,	// (0x00030b78) bg_popup_call2_rect_pane_g4

0x1171,	// (0x00030b80) bg_popup_call2_rect_pane_g5

0x1179,	// (0x00030b88) bg_popup_call2_rect_pane_g6

0x1181,	// (0x00030b90) bg_popup_call2_rect_pane_g7

0x1189,	// (0x00030b98) bg_popup_call2_rect_pane_g8

0x1191,	// (0x00030ba0) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003efb0) bg_popup_call2_rect_pane_g

0x1199,	// (0x00030ba8) bg_popup_call2_bubble_pane_g1

0x11a1,	// (0x00030bb0) bg_popup_call2_bubble_pane_g2

0x11a9,	// (0x00030bb8) bg_popup_call2_bubble_pane_g3

0x11b1,	// (0x00030bc0) bg_popup_call2_bubble_pane_g4

0x11b9,	// (0x00030bc8) bg_popup_call2_bubble_pane_g5

0x11c1,	// (0x00030bd0) bg_popup_call2_bubble_pane_g6

0x11c9,	// (0x00030bd8) bg_popup_call2_bubble_pane_g7

0x11d1,	// (0x00030be0) bg_popup_call2_bubble_pane_g8

0x11d9,	// (0x00030be8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0003efc3) bg_popup_call2_bubble_pane_g

0x6cf6,	// (0x00036705) aid_cale_week_size_cell_pane

0x724e,	// (0x00036c5d) aid_cams_cif_uncrop_pane_ParamLimits

0x724e,	// (0x00036c5d) aid_cams_cif_uncrop_pane

0x73ab,	// (0x00036dba) aid_cams_size_cell_ParamLimits

0x73ab,	// (0x00036dba) aid_cams_size_cell

0x73b7,	// (0x00036dc6) grid_cams_pane_ParamLimits

0x73c5,	// (0x00036dd4) linegrid_cams_pane_ParamLimits

0x7459,	// (0x00036e68) call_video_pane_t1

0x7472,	// (0x00036e81) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0003ecb0) call_video_pane_t

0x7927,	// (0x00037336) aid_cale_month_size_cell_pane_ParamLimits

0x7927,	// (0x00037336) aid_cale_month_size_cell_pane

0xf63e,	// (0x0003f04d) smil_status_volume_pane_g

0x947f,	// (0x00038e8e) volume_smil_pane_ParamLimits

0xda96,	// (0x0003d4a5) aid_popup2_width_pane

0x6c01,	// (0x00036610) cell_qdial_pane_g4_ParamLimits

0x6c01,	// (0x00036610) cell_qdial_pane_g4

0x8462,	// (0x00037e71) aid_blid_cardinal_pane_ParamLimits

0x8472,	// (0x00037e81) aid_blid_destination_pane_ParamLimits

0x8472,	// (0x00037e81) aid_blid_destination_pane

0xe15a,	// (0x0003db69) bg_popup_call_poc_act_pane_ParamLimits

0xe15a,	// (0x0003db69) bg_popup_call_poc_act_pane

0xe15a,	// (0x0003db69) bg_popup_call_poc_inact_pane_ParamLimits

0xe15a,	// (0x0003db69) bg_popup_call_poc_inact_pane

0x11e1,	// (0x00030bf0) bg_popup_call_poc_act_pane_g1

0x11e9,	// (0x00030bf8) bg_popup_call_poc_act_pane_g2

0x11f1,	// (0x00030c00) bg_popup_call_poc_act_pane_g3

0x11b1,	// (0x00030bc0) bg_popup_call_poc_act_pane_g4

0x11b9,	// (0x00030bc8) bg_popup_call_poc_act_pane_g5

0x11f9,	// (0x00030c08) bg_popup_call_poc_act_pane_g6

0x11c9,	// (0x00030bd8) bg_popup_call_poc_act_pane_g7

0x1201,	// (0x00030c10) bg_popup_call_poc_act_pane_g8

0xdeff,	// (0x0003d90e) main_usb_pane

0x135a,	// (0x00030d69) popup_cale_lunar_info_window

0x771b,	// (0x0003712a) im_reading_pane_t1_ParamLimits

0xe4d5,	// (0x0003dee4) list_im_pane_ParamLimits

0xe4e6,	// (0x0003def5) scroll_pane_cp07_ParamLimits

0xdeff,	// (0x0003d90e) grid_highlight_pane_cp012

0xe15a,	// (0x0003db69) mup_scale_pane_ParamLimits

0xea35,	// (0x0003e444) main_usb_pane_g1_ParamLimits

0xea35,	// (0x0003e444) main_usb_pane_g1

0x9021,	// (0x00038a30) main_usb_pane_g2_ParamLimits

0x9021,	// (0x00038a30) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0003efed) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0003efed) main_usb_pane_g

0x902d,	// (0x00038a3c) main_usb_pane_t1_ParamLimits

0x902d,	// (0x00038a3c) main_usb_pane_t1

0x903f,	// (0x00038a4e) main_usb_pane_t2_ParamLimits

0x903f,	// (0x00038a4e) main_usb_pane_t2

0x9051,	// (0x00038a60) main_usb_pane_t3_ParamLimits

0x9051,	// (0x00038a60) main_usb_pane_t3

0x9063,	// (0x00038a72) main_usb_pane_t4_ParamLimits

0x9063,	// (0x00038a72) main_usb_pane_t4

0x9075,	// (0x00038a84) main_usb_pane_t5_ParamLimits

0x9075,	// (0x00038a84) main_usb_pane_t5

0x9087,	// (0x00038a96) main_usb_pane_t6_ParamLimits

0x9087,	// (0x00038a96) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0003eff2) main_usb_pane_t_ParamLimits

0x8408,	// (0x00037e17) aid_text_placing

0x8414,	// (0x00037e23) main_location2_pane_t1_ParamLimits

0x8428,	// (0x00037e37) main_location2_pane_t2_ParamLimits

0x843c,	// (0x00037e4b) main_location2_pane_t3_ParamLimits

0x8450,	// (0x00037e5f) main_location2_pane_t4_ParamLimits

0x8450,	// (0x00037e5f) main_location2_pane_t4

0xf402,	// (0x0003ee11) main_location2_pane_t_ParamLimits

0xe196,	// (0x0003dba5) find_pinb_pane_g2_ParamLimits

0xe196,	// (0x0003dba5) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0003eb5f) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0003eb5f) find_pinb_pane_g

0xe1a2,	// (0x0003dbb1) find_pinb_pane_t1_ParamLimits

0xe1b4,	// (0x0003dbc3) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0003eb64) find_pinb_pane_t_ParamLimits

0xdeff,	// (0x0003d90e) main_call3_pane

0x7c73,	// (0x00037682) cale_month_day_heading_pane_t1_ParamLimits

0x7cd1,	// (0x000376e0) cale_month_day_heading_pane_t2_ParamLimits

0x7d36,	// (0x00037745) cale_month_day_heading_pane_t3_ParamLimits

0x7d9b,	// (0x000377aa) cale_month_day_heading_pane_t4_ParamLimits

0x7e00,	// (0x0003780f) cale_month_day_heading_pane_t5_ParamLimits

0x7e65,	// (0x00037874) cale_month_day_heading_pane_t6_ParamLimits

0x7eca,	// (0x000378d9) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0003ece8) cale_month_day_heading_pane_t_ParamLimits

0xe726,	// (0x0003e135) smil_status_volume_pane

0x8be5,	// (0x000385f4) postcard_address_pane_ParamLimits

0x8be5,	// (0x000385f4) postcard_address_pane

0x8bf1,	// (0x00038600) postcard_message_pane_ParamLimits

0x8bf1,	// (0x00038600) postcard_message_pane

0x8fec,	// (0x000389fb) call2_cli_visual_pane_t1_ParamLimits

0x8fec,	// (0x000389fb) call2_cli_visual_pane_t1

0x95d6,	// (0x00038fe5) postcard_message_pane_t1_ParamLimits

0x95d6,	// (0x00038fe5) postcard_message_pane_t1

0x95bf,	// (0x00038fce) postcard_address_pane_t1_ParamLimits

0x95bf,	// (0x00038fce) postcard_address_pane_t1

0x95b0,	// (0x00038fbf) popup_call3_audio_in_window_ParamLimits

0x95b0,	// (0x00038fbf) popup_call3_audio_in_window

0x9494,	// (0x00038ea3) bg_popup_call3_in_pane_ParamLimits

0x9494,	// (0x00038ea3) bg_popup_call3_in_pane

0x94f6,	// (0x00038f05) popup_call3_audio_in_window_g1_ParamLimits

0x94f6,	// (0x00038f05) popup_call3_audio_in_window_g1

0x950e,	// (0x00038f1d) popup_call3_audio_in_window_g2_ParamLimits

0x950e,	// (0x00038f1d) popup_call3_audio_in_window_g2

0x9526,	// (0x00038f35) popup_call3_audio_in_window_g3_ParamLimits

0x9526,	// (0x00038f35) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0003f054) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0003f054) popup_call3_audio_in_window_g

0x954e,	// (0x00038f5d) popup_call3_audio_in_window_t1_ParamLimits

0x954e,	// (0x00038f5d) popup_call3_audio_in_window_t1

0x9576,	// (0x00038f85) popup_call3_audio_in_window_t2_ParamLimits

0x9576,	// (0x00038f85) popup_call3_audio_in_window_t2

0x959e,	// (0x00038fad) popup_call3_audio_in_window_t3_ParamLimits

0x959e,	// (0x00038fad) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0003f05d) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0003f05d) popup_call3_audio_in_window_t

0xed18,	// (0x0003e727) bg_popup_call3_rect_pane

0x1159,	// (0x00030b68) bg_popup_call3_rect_pane_g1

0xe312,	// (0x0003dd21) bg_popup_call3_rect_pane_g2

0x1161,	// (0x00030b70) bg_popup_call3_rect_pane_g3

0x1169,	// (0x00030b78) bg_popup_call3_rect_pane_g4

0x1171,	// (0x00030b80) bg_popup_call3_rect_pane_g5

0x1179,	// (0x00030b88) bg_popup_call3_rect_pane_g6

0x1181,	// (0x00030b90) bg_popup_call3_rect_pane_g7

0x8862,	// (0x00038271) mup_visualizer_osc_pane

0xedd7,	// (0x0003e7e6) mup_visualizer_spec_pane

0x94b4,	// (0x00038ec3) call3_video_qcif_pane_ParamLimits

0x94b4,	// (0x00038ec3) call3_video_qcif_pane

0x94c6,	// (0x00038ed5) call3_video_qcif_uncrop_pane_ParamLimits

0x94c6,	// (0x00038ed5) call3_video_qcif_uncrop_pane

0x94d4,	// (0x00038ee3) call3_video_subqcif_pane_ParamLimits

0x94d4,	// (0x00038ee3) call3_video_subqcif_pane

0x94e6,	// (0x00038ef5) call3_video_subqcif_uncrop_pane_ParamLimits

0x94e6,	// (0x00038ef5) call3_video_subqcif_uncrop_pane

0x953e,	// (0x00038f4d) popup_call3_audio_in_window_g4_ParamLimits

0x953e,	// (0x00038f4d) popup_call3_audio_in_window_g4

0x9461,	// (0x00038e70) mup_spec_half_pane

0x946a,	// (0x00038e79) mup_spec_half_pane_cp

0x13f1,	// (0x00030e00) mup_osc_middle_pane

0x13fa,	// (0x00030e09) mup_visualizer_osc_pane_g1

0x9442,	// (0x00038e51) mup_spec_bar_pane_ParamLimits

0x9442,	// (0x00038e51) mup_spec_bar_pane

0x13de,	// (0x00030ded) mup_spec_bar_pane_g1

0x13e8,	// (0x00030df7) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0003f048) mup_spec_bar_pane_g

0x6cf6,	// (0x00036705) aid_cale_week_size_cell_pane_ParamLimits

0x6d09,	// (0x00036718) bg_cale_heading_pane_ParamLimits

0xe346,	// (0x0003dd55) bg_cale_pane_cp01_ParamLimits

0x6d1d,	// (0x0003672c) cale_week_corner_pane_ParamLimits

0x6d33,	// (0x00036742) cale_week_day_heading_pane_ParamLimits

0x6d47,	// (0x00036756) cale_week_scroll_pane_g1_ParamLimits

0x6d58,	// (0x00036767) cale_week_scroll_pane_g2_ParamLimits

0x6d69,	// (0x00036778) cale_week_scroll_pane_g3_ParamLimits

0x6d7a,	// (0x00036789) cale_week_scroll_pane_g4_ParamLimits

0x6d8b,	// (0x0003679a) cale_week_scroll_pane_g5_ParamLimits

0x6d9c,	// (0x000367ab) cale_week_scroll_pane_g6_ParamLimits

0x6dad,	// (0x000367bc) cale_week_scroll_pane_g7_ParamLimits

0x6dc0,	// (0x000367cf) cale_week_scroll_pane_g8_ParamLimits

0x6dd3,	// (0x000367e2) cale_week_scroll_pane_g9_ParamLimits

0x6de4,	// (0x000367f3) cale_week_scroll_pane_g10_ParamLimits

0x6df5,	// (0x00036804) cale_week_scroll_pane_g11_ParamLimits

0x6e06,	// (0x00036815) cale_week_scroll_pane_g12_ParamLimits

0x6e17,	// (0x00036826) cale_week_scroll_pane_g13_ParamLimits

0x6e28,	// (0x00036837) cale_week_scroll_pane_g14_ParamLimits

0x6e39,	// (0x00036848) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0003ebf0) cale_week_scroll_pane_g_ParamLimits

0x6e4a,	// (0x00036859) cale_week_time_pane_ParamLimits

0x6e5d,	// (0x0003686c) grid_cale_week_pane_ParamLimits

0xe35f,	// (0x0003dd6e) listscroll_cale_week_pane_t1

0x6e72,	// (0x00036881) scroll_pane_cp08_ParamLimits

0x7968,	// (0x00037377) cale_month_corner_pane_ParamLimits

0xe6fc,	// (0x0003e10b) cale_month_pane_t1

0x7c32,	// (0x00037641) cale_month_week_pane_ParamLimits

0xea35,	// (0x0003e444) popup_call_status_window_g1_ParamLimits

0x8237,	// (0x00037c46) popup_call_status_window_g2_ParamLimits

0x8243,	// (0x00037c52) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0003ed98) popup_call_status_window_g_ParamLimits

0xea9c,	// (0x0003e4ab) aid_call2_pane

0x561b,	// (0x0003502a) msg_header_pane_g1

0x8be5,	// (0x000385f4) postcard_address2_pane_ParamLimits

0x8be5,	// (0x000385f4) postcard_address2_pane

0x8bf1,	// (0x00038600) postcard_message2_pane_ParamLimits

0x8bf1,	// (0x00038600) postcard_message2_pane

0x93da,	// (0x00038de9) message2_row_pane_ParamLimits

0x93da,	// (0x00038de9) message2_row_pane

0x93f5,	// (0x00038e04) address2_row_pane_ParamLimits

0x93f5,	// (0x00038e04) address2_row_pane

0x13ac,	// (0x00030dbb) postcard_message2_row_pane_g1

0x13b4,	// (0x00030dc3) postcard_message2_row_pane_t1

0x13ac,	// (0x00030dbb) address2_row_pane_g1

0x13b4,	// (0x00030dc3) address2_row_pane_t1

0x711a,	// (0x00036b29) aid_size_cell_vorec

0xdeff,	// (0x0003d90e) main_rss_pane

0x9408,	// (0x00038e17) rss_list_single_pane_ParamLimits

0x9408,	// (0x00038e17) rss_list_single_pane

0x13c2,	// (0x00030dd1) rss_list_single_pane_t1

0x13d0,	// (0x00030ddf) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0003f043) rss_list_single_pane_t

0xdeff,	// (0x0003d90e) main_camera2_pane

0xdeff,	// (0x0003d90e) main_video2_pane

0x963a,	// (0x00039049) cams_zoom_pane_cp2_ParamLimits

0x963a,	// (0x00039049) cams_zoom_pane_cp2

0x9646,	// (0x00039055) image2_vga_pane_ParamLimits

0x9646,	// (0x00039055) image2_vga_pane

0x9655,	// (0x00039064) main_camera2_pane_g1_ParamLimits

0x9655,	// (0x00039064) main_camera2_pane_g1

0x9661,	// (0x00039070) main_camera2_pane_g2_ParamLimits

0x9661,	// (0x00039070) main_camera2_pane_g2

0x966d,	// (0x0003907c) main_camera2_pane_g3_ParamLimits

0x966d,	// (0x0003907c) main_camera2_pane_g3

0x9679,	// (0x00039088) main_camera2_pane_g4_ParamLimits

0x9679,	// (0x00039088) main_camera2_pane_g4

0x9685,	// (0x00039094) main_camera2_pane_g5_ParamLimits

0x9685,	// (0x00039094) main_camera2_pane_g5

0x9691,	// (0x000390a0) main_camera2_pane_g6_ParamLimits

0x9691,	// (0x000390a0) main_camera2_pane_g6

0x969d,	// (0x000390ac) main_camera2_pane_g7_ParamLimits

0x969d,	// (0x000390ac) main_camera2_pane_g7

0x96a9,	// (0x000390b8) main_camera2_pane_g8_ParamLimits

0x96a9,	// (0x000390b8) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0003f064) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0003f064) main_camera2_pane_g

0x96c1,	// (0x000390d0) main_camera2_pane_t1_ParamLimits

0x96c1,	// (0x000390d0) main_camera2_pane_t1

0x96d3,	// (0x000390e2) main_camera2_pane_t2_ParamLimits

0x96d3,	// (0x000390e2) main_camera2_pane_t2

0x96e5,	// (0x000390f4) main_camera2_pane_t3_ParamLimits

0x96e5,	// (0x000390f4) main_camera2_pane_t3

0x96f7,	// (0x00039106) main_camera2_pane_t4_ParamLimits

0x96f7,	// (0x00039106) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0003f077) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0003f077) main_camera2_pane_t

0x9759,	// (0x00039168) cams_zoom_pane_cp4_ParamLimits

0x9759,	// (0x00039168) cams_zoom_pane_cp4

0x9769,	// (0x00039178) image2_cif_pane_ParamLimits

0x9769,	// (0x00039178) image2_cif_pane

0x977e,	// (0x0003918d) image2_subqcif_pane_ParamLimits

0x977e,	// (0x0003918d) image2_subqcif_pane

0x978d,	// (0x0003919c) main_video2_pane_g1_ParamLimits

0x978d,	// (0x0003919c) main_video2_pane_g1

0x979f,	// (0x000391ae) main_video2_pane_g2_ParamLimits

0x979f,	// (0x000391ae) main_video2_pane_g2

0x97af,	// (0x000391be) main_video2_pane_g3_ParamLimits

0x97af,	// (0x000391be) main_video2_pane_g3

0x97bf,	// (0x000391ce) main_video2_pane_g4_ParamLimits

0x97bf,	// (0x000391ce) main_video2_pane_g4

0x97cf,	// (0x000391de) main_video2_pane_g5_ParamLimits

0x97cf,	// (0x000391de) main_video2_pane_g5

0x97df,	// (0x000391ee) main_video2_pane_g6_ParamLimits

0x97df,	// (0x000391ee) main_video2_pane_g6

0x0005,

0xf677,	// (0x0003f086) main_video2_pane_g_ParamLimits

0xf677,	// (0x0003f086) main_video2_pane_g

0x97f1,	// (0x00039200) main_video2_pane_t1_ParamLimits

0x97f1,	// (0x00039200) main_video2_pane_t1

0x980b,	// (0x0003921a) main_video2_pane_t2_ParamLimits

0x980b,	// (0x0003921a) main_video2_pane_t2

0x9831,	// (0x00039240) main_video2_pane_t3_ParamLimits

0x9831,	// (0x00039240) main_video2_pane_t3

0x0002,

0xf684,	// (0x0003f093) main_video2_pane_t_ParamLimits

0xf684,	// (0x0003f093) main_video2_pane_t

0x913e,	// (0x00038b4d) call_muted_g2

0x0001,

0xf626,	// (0x0003f035) call_muted_g

0xdeff,	// (0x0003d90e) main_mup2_pane

0x14b1,	// (0x00030ec0) main_mup2_pane_g1_ParamLimits

0x14b1,	// (0x00030ec0) main_mup2_pane_g1

0x9857,	// (0x00039266) main_mup2_pane_g2_ParamLimits

0x9857,	// (0x00039266) main_mup2_pane_g2

0x9ad9,	// (0x000394e8) main_mup_pane_g13_cp1

0x9ae1,	// (0x000394f0) mup_volume_pane_cp1

0x9877,	// (0x00039286) main_mup2_pane_g4_ParamLimits

0x9877,	// (0x00039286) main_mup2_pane_g4

0x988c,	// (0x0003929b) main_mup2_pane_g5_ParamLimits

0x988c,	// (0x0003929b) main_mup2_pane_g5

0x98a1,	// (0x000392b0) main_mup2_pane_g6_ParamLimits

0x98a1,	// (0x000392b0) main_mup2_pane_g6

0x98b6,	// (0x000392c5) main_mup2_pane_g7_ParamLimits

0x98b6,	// (0x000392c5) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0003f09a) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0003f09a) main_mup2_pane_g

0x98d2,	// (0x000392e1) main_mup2_pane_t1_ParamLimits

0x98d2,	// (0x000392e1) main_mup2_pane_t1

0x98e9,	// (0x000392f8) main_mup2_pane_t2_ParamLimits

0x98e9,	// (0x000392f8) main_mup2_pane_t2

0x9900,	// (0x0003930f) main_mup2_pane_t3_ParamLimits

0x9900,	// (0x0003930f) main_mup2_pane_t3

0x9917,	// (0x00039326) main_mup2_pane_t4_ParamLimits

0x9917,	// (0x00039326) main_mup2_pane_t4

0x9931,	// (0x00039340) main_mup2_pane_t5_ParamLimits

0x9931,	// (0x00039340) main_mup2_pane_t5

0x994b,	// (0x0003935a) main_mup2_pane_t6_ParamLimits

0x994b,	// (0x0003935a) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0003f0a9) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0003f0a9) main_mup2_pane_t

0x9983,	// (0x00039392) mup2_visualizer_pane_ParamLimits

0x9983,	// (0x00039392) mup2_visualizer_pane

0x99b9,	// (0x000393c8) mup_progress_pane_cp_ParamLimits

0x99b9,	// (0x000393c8) mup_progress_pane_cp

0x9ac4,	// (0x000394d3) mup_volume_pane_cp_ParamLimits

0x9ac4,	// (0x000394d3) mup_volume_pane_cp

0x99d0,	// (0x000393df) mup2_visualizer_pane_g1_ParamLimits

0x99d0,	// (0x000393df) mup2_visualizer_pane_g1

0x1483,	// (0x00030e92) mup2_visualizer_pane_g2_ParamLimits

0x1483,	// (0x00030e92) mup2_visualizer_pane_g2

0x99e5,	// (0x000393f4) mup2_visualizer_pane_g3_ParamLimits

0x99e5,	// (0x000393f4) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0003f0b6) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0003f0b6) mup2_visualizer_pane_g

0xeffe,	// (0x0003ea0d) aid_size_cell_fmradio

0x9254,	// (0x00038c63) aid_height_parent_landcape

0xe564,	// (0x0003df73) wml_content_pane_cp

0xe56c,	// (0x0003df7b) wml_tabs_pane

0xe575,	// (0x0003df84) popup_wml_miniature_window

0xe57d,	// (0x0003df8c) scroll_pane_cp021

0xe591,	// (0x0003dfa0) wml_content_pane_comp8

0xdeff,	// (0x0003d90e) bg_popup_sub_pane_cp05

0x14a1,	// (0x00030eb0) popup_wml_miniature_window_g1

0x14a9,	// (0x00030eb8) wml_miniature_view_pane

0x99f3,	// (0x00039402) aid_size_wml_view

0x99fb,	// (0x0003940a) wml_miniature_view_pane_g1

0x9a04,	// (0x00039413) wml_miniature_view_pane_g2

0x9a0d,	// (0x0003941c) wml_miniature_view_pane_g3

0x9a15,	// (0x00039424) wml_miniature_view_pane_g4

0x9a1d,	// (0x0003942c) wml_miniature_view_pane_g5

0x9a25,	// (0x00039434) wml_miniature_view_pane_g6

0x9a2d,	// (0x0003943c) wml_miniature_view_pane_g7

0x9a35,	// (0x00039444) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0003f0bd) wml_miniature_view_pane_g

0x14b1,	// (0x00030ec0) background_graphic_ParamLimits

0x14b1,	// (0x00030ec0) background_graphic

0x14bd,	// (0x00030ecc) wml_tabs_2_pane

0x14c6,	// (0x00030ed5) wml_tabs_3_pane_ParamLimits

0x14c6,	// (0x00030ed5) wml_tabs_3_pane

0x14d8,	// (0x00030ee7) wml_tabs_4_pane_ParamLimits

0x14d8,	// (0x00030ee7) wml_tabs_4_pane

0x14ee,	// (0x00030efd) wml_tabs_5_pane_ParamLimits

0x14ee,	// (0x00030efd) wml_tabs_5_pane

0x1508,	// (0x00030f17) wml_tabs_pane_g2_ParamLimits

0x1508,	// (0x00030f17) wml_tabs_pane_g2

0x151c,	// (0x00030f2b) wml_tabs_pane_g3_ParamLimits

0x151c,	// (0x00030f2b) wml_tabs_pane_g3

0x9a3d,	// (0x0003944c) wml_tabs_2_active_pane_ParamLimits

0x9a3d,	// (0x0003944c) wml_tabs_2_active_pane

0x9a4d,	// (0x0003945c) wml_tabs_2_passive_pane_ParamLimits

0x9a4d,	// (0x0003945c) wml_tabs_2_passive_pane

0x9a5d,	// (0x0003946c) wml_tabs_3_active_pane_cp_ParamLimits

0x9a5d,	// (0x0003946c) wml_tabs_3_active_pane_cp

0x9a6e,	// (0x0003947d) wml_tabs_3_passive_pane_ParamLimits

0x9a6e,	// (0x0003947d) wml_tabs_3_passive_pane

0x9a7f,	// (0x0003948e) wml_tabs_3_passive_pane_cp_ParamLimits

0x9a7f,	// (0x0003948e) wml_tabs_3_passive_pane_cp

0x9a90,	// (0x0003949f) tabs_4_active_pane

0x9a98,	// (0x000394a7) tabs_4_passive_pane

0x9aa0,	// (0x000394af) tabs_4_passive_pane_cp

0x9aa8,	// (0x000394b7) tabs_4_passive_pane_cp2

0x9019,	// (0x00038a28) aid_height_text

0x882f,	// (0x0003823e) mup_volume_cont_pane_ParamLimits

0x882f,	// (0x0003823e) mup_volume_cont_pane

0x6858,	// (0x00036267) aid_size_cell_pinb

0x6862,	// (0x00036271) aid_size_list_pinb

0x99a2,	// (0x000393b1) mup2_volume_cont_pane_ParamLimits

0x99a2,	// (0x000393b1) mup2_volume_cont_pane

0x9ab0,	// (0x000394bf) mup2_volume_cont_pane_g1_ParamLimits

0x9ab0,	// (0x000394bf) mup2_volume_cont_pane_g1

0x64d7,	// (0x00035ee6) aid_size_cell_touch_ParamLimits

0x64d7,	// (0x00035ee6) aid_size_cell_touch

0x673e,	// (0x0003614d) touch_pane_ParamLimits

0x673e,	// (0x0003614d) touch_pane

0xda84,	// (0x0003d493) main_rss2_pane

0x1572,	// (0x00030f81) listscroll_rss2_pane

0x157b,	// (0x00030f8a) rss2_navigation_pane

0x1583,	// (0x00030f92) list_rss2_pane

0xebcf,	// (0x0003e5de) scroll_pane_cp22

0x158b,	// (0x00030f9a) rss2_navigation_pane_g1

0x1594,	// (0x00030fa3) rss2_navigation_pane_g2

0x159c,	// (0x00030fab) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0003f0ce) rss2_navigation_pane_g

0x15a4,	// (0x00030fb3) rss2_navigation_pane_t1

0x9ae9,	// (0x000394f8) rss2_list_single_pane_ParamLimits

0x9ae9,	// (0x000394f8) rss2_list_single_pane

0x15b2,	// (0x00030fc1) rss2_list_single_pane_t2

0x15c0,	// (0x00030fcf) rss2_list_single_pane_t3_ParamLimits

0x15c0,	// (0x00030fcf) rss2_list_single_pane_t3

0x15dd,	// (0x00030fec) rss2_list_single_pane_t4

0x80b2,	// (0x00037ac1) smil_status_pane_g1

0xf0e1,	// (0x0003eaf0) main_image2_pane_ParamLimits

0xf0e1,	// (0x0003eaf0) main_image2_pane

0x96b5,	// (0x000390c4) main_camera2_pane_g9_ParamLimits

0x96b5,	// (0x000390c4) main_camera2_pane_g9

0x9709,	// (0x00039118) main_camera2_pane_t5_ParamLimits

0x9709,	// (0x00039118) main_camera2_pane_t5

0x971b,	// (0x0003912a) main_camera2_pane_t6_ParamLimits

0x971b,	// (0x0003912a) main_camera2_pane_t6

0x9b1a,	// (0x00039529) main_image2_pane_g1_ParamLimits

0x9b1a,	// (0x00039529) main_image2_pane_g1

0x8db9,	// (0x000387c8) smil2_video_pane_ParamLimits

0x8db9,	// (0x000387c8) smil2_video_pane

0x53b1,	// (0x00034dc0) aid_zoom_text_primary_cp

0xdae2,	// (0x0003d4f1) popup_preview_fixed_window

0xe4cd,	// (0x0003dedc) im_reading_pane_g1

0x95ff,	// (0x0003900e) cams2_bc_adjust_pane_cp_ParamLimits

0x95ff,	// (0x0003900e) cams2_bc_adjust_pane_cp

0x974b,	// (0x0003915a) cams2_bc_adjust_pane_ParamLimits

0x974b,	// (0x0003915a) cams2_bc_adjust_pane

0x9b26,	// (0x00039535) cams2_bc_adjust_pane_g1

0x9b2e,	// (0x0003953d) cams2_slider_pane

0x9b37,	// (0x00039546) cams2_slider_pane_g1

0x9b40,	// (0x0003954f) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0003f0d5) cams2_slider_pane_g

0x6953,	// (0x00036362) calc_display_pane_ParamLimits

0x6971,	// (0x00036380) calc_paper_pane_ParamLimits

0x698d,	// (0x0003639c) grid_calc_pane_ParamLimits

0x82a5,	// (0x00037cb4) popup_clock_digital_window_t1_ParamLimits

0xef9b,	// (0x0003e9aa) main_image_pane_t1

0x6939,	// (0x00036348) aid_size_cell_calc_ParamLimits

0x6939,	// (0x00036348) aid_size_cell_calc

0x9286,	// (0x00038c95) popup_blid_sat_info2_window_ParamLimits

0x9286,	// (0x00038c95) popup_blid_sat_info2_window

0x1627,	// (0x00031036) aid_size_cell_blid

0x162f,	// (0x0003103e) bg_popup_window_pane_cp07

0x1652,	// (0x00031061) grid_popup_blid_pane

0x165c,	// (0x0003106b) heading_pane_cp05_ParamLimits

0x165c,	// (0x0003106b) heading_pane_cp05

0x1726,	// (0x00031135) cell_popup_blid_pane_ParamLimits

0x1726,	// (0x00031135) cell_popup_blid_pane

0x174a,	// (0x00031159) cell_popup_blid_pane_g1

0x1752,	// (0x00031161) cell_popup_blid_pane_t1

0x9968,	// (0x00039377) mup2_indicator_pane_ParamLimits

0x9968,	// (0x00039377) mup2_indicator_pane

0xed18,	// (0x0003e727) mup2_visualizer_osc_pane

0x148f,	// (0x00030e9e) mup2_visualizer_spec_pane_ParamLimits

0x148f,	// (0x00030e9e) mup2_visualizer_spec_pane

0x9b5a,	// (0x00039569) mup2_spec_half_pane

0x9b63,	// (0x00039572) mup2_spec_half_pane_cp

0x9b6d,	// (0x0003957c) mup2_spec_bar_pane_ParamLimits

0x9b6d,	// (0x0003957c) mup2_spec_bar_pane

0x13de,	// (0x00030ded) mup2_spec_bar_pane_g1

0x13e8,	// (0x00030df7) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0003f048) mup2_spec_bar_pane_g

0x9b8c,	// (0x0003959b) mup2_osc_middle_pane

0x13fa,	// (0x00030e09) mup2_visualizer_osc_pane_g1

0xdb0c,	// (0x0003d51b) popup_number_entry_window_t1_ParamLimits

0xdb1f,	// (0x0003d52e) popup_number_entry_window_t2_ParamLimits

0xdb31,	// (0x0003d540) popup_number_entry_window_t3_ParamLimits

0x6795,	// (0x000361a4) popup_number_entry_window_t5_ParamLimits

0x6795,	// (0x000361a4) popup_number_entry_window_t5

0xf0fb,	// (0x0003eb0a) popup_number_entry_window_t_ParamLimits

0xdb43,	// (0x0003d552) text_title_cp2_ParamLimits

0x8aad,	// (0x000384bc) aid_hotspot_pointer_text2_pane

0x8b47,	// (0x00038556) main_viewer_pane_g9_ParamLimits

0x8b47,	// (0x00038556) main_viewer_pane_g9

0xe6fc,	// (0x0003e10b) cale_month_pane_t1_ParamLimits

0xe739,	// (0x0003e148) bg_cale_pane_ParamLimits

0xe751,	// (0x0003e160) list_cale_pane_ParamLimits

0xe35f,	// (0x0003dd6e) listscroll_cale_day_pane_t1

0xe762,	// (0x0003e171) scroll_pane_cp09_ParamLimits

0x886a,	// (0x00038279) main_mup_eq_pane_t1_ParamLimits

0x886a,	// (0x00038279) main_mup_eq_pane_t1

0x8884,	// (0x00038293) main_mup_eq_pane_t2_ParamLimits

0x8884,	// (0x00038293) main_mup_eq_pane_t2

0x889e,	// (0x000382ad) main_mup_eq_pane_t3_ParamLimits

0x889e,	// (0x000382ad) main_mup_eq_pane_t3

0x88b6,	// (0x000382c5) main_mup_eq_pane_t4_ParamLimits

0x88b6,	// (0x000382c5) main_mup_eq_pane_t4

0x88ce,	// (0x000382dd) main_mup_eq_pane_t5_ParamLimits

0x88ce,	// (0x000382dd) main_mup_eq_pane_t5

0x88e6,	// (0x000382f5) main_mup_eq_pane_t6_ParamLimits

0x88e6,	// (0x000382f5) main_mup_eq_pane_t6

0x88fa,	// (0x00038309) main_mup_eq_pane_t7_ParamLimits

0x88fa,	// (0x00038309) main_mup_eq_pane_t7

0x890e,	// (0x0003831d) main_mup_eq_pane_t8_ParamLimits

0x890e,	// (0x0003831d) main_mup_eq_pane_t8

0x8924,	// (0x00038333) main_mup_eq_pane_t9_ParamLimits

0x8924,	// (0x00038333) main_mup_eq_pane_t9

0x893c,	// (0x0003834b) main_mup_eq_pane_t10_ParamLimits

0x893c,	// (0x0003834b) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0003ee97) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0003ee97) main_mup_eq_pane_t

0x89f9,	// (0x00038408) mup_equalizer_pane_cp5_ParamLimits

0x8a0f,	// (0x0003841e) mup_equalizer_pane_cp6_ParamLimits

0x8a27,	// (0x00038436) mup_equalizer_pane_cp7_ParamLimits

0xda84,	// (0x0003d493) main_gallery_pane

0x1403,	// (0x00030e12) smil2_volume_pane

0x141e,	// (0x00030e2d) smil_status_volume_pane_g1_ParamLimits

0x140b,	// (0x00030e1a) smil_status_volume_pane_g2_ParamLimits

0x9472,	// (0x00038e81) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0003f04d) smil_status_volume_pane_g_ParamLimits

0x162f,	// (0x0003103e) bg_popup_window_pane_cp07_ParamLimits

0x163d,	// (0x0003104c) blid_firmament_pane

0x9b95,	// (0x000395a4) aid_size_cell_gallery_ParamLimits

0x9b95,	// (0x000395a4) aid_size_cell_gallery

0x9ba3,	// (0x000395b2) grid_gallery_pane_ParamLimits

0x9ba3,	// (0x000395b2) grid_gallery_pane

0x9bb3,	// (0x000395c2) cell_gallery_pane_ParamLimits

0x9bb3,	// (0x000395c2) cell_gallery_pane

0x1760,	// (0x0003116f) bg_cell_gallery_focus_pane_ParamLimits

0x1760,	// (0x0003116f) bg_cell_gallery_focus_pane

0x1772,	// (0x00031181) cell_gallery_pane_g1_ParamLimits

0x1772,	// (0x00031181) cell_gallery_pane_g1

0x9c01,	// (0x00039610) cell_gallery_pane_g2_ParamLimits

0x9c01,	// (0x00039610) cell_gallery_pane_g2

0x9c0e,	// (0x0003961d) cell_gallery_pane_g3_ParamLimits

0x9c0e,	// (0x0003961d) cell_gallery_pane_g3

0x177e,	// (0x0003118d) cell_gallery_pane_g4_ParamLimits

0x177e,	// (0x0003118d) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0003f0fb) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0003f0fb) cell_gallery_pane_g

0x178a,	// (0x00031199) bg_cell_gallery_focus_pane_g1

0x1792,	// (0x000311a1) bg_cell_gallery_focus_pane_g2

0x179a,	// (0x000311a9) bg_cell_gallery_focus_pane_g3

0x17a2,	// (0x000311b1) bg_cell_gallery_focus_pane_g4

0x17aa,	// (0x000311b9) bg_cell_gallery_focus_pane_g5

0x17b2,	// (0x000311c1) bg_cell_gallery_focus_pane_g6

0x17ba,	// (0x000311c9) bg_cell_gallery_focus_pane_g7

0x17c2,	// (0x000311d1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0003f104) bg_cell_gallery_focus_pane_g

0x17ca,	// (0x000311d9) aid_firma_cardinal

0x17de,	// (0x000311ed) blid_firmament_pane_t1

0x17f5,	// (0x00031204) blid_firmament_pane_t2

0x180c,	// (0x0003121b) blid_firmament_pane_t3

0x1823,	// (0x00031232) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0003f115) blid_firmament_pane_t

0x183a,	// (0x00031249) blid_sat_info_pane

0x184a,	// (0x00031259) blid_sat_info_pane_g1

0x184a,	// (0x00031259) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0003f11e) blid_sat_info_pane_g

0x1854,	// (0x00031263) blid_sat_info_pane_t1

0x1862,	// (0x00031271) smil2_volume_content_pane

0x186b,	// (0x0003127a) smil2_volume_pane_g1

0x1873,	// (0x00031282) smil2_volume_content_pane_g1

0x187c,	// (0x0003128b) smil2_volume_content_pane_g2

0x1885,	// (0x00031294) smil2_volume_content_pane_g3

0x188e,	// (0x0003129d) smil2_volume_content_pane_g4

0x1897,	// (0x000312a6) smil2_volume_content_pane_g5

0x18a0,	// (0x000312af) smil2_volume_content_pane_g6

0x18a9,	// (0x000312b8) smil2_volume_content_pane_g7

0x18b2,	// (0x000312c1) smil2_volume_content_pane_g8

0x18bb,	// (0x000312ca) smil2_volume_content_pane_g9

0x18c4,	// (0x000312d3) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0003f123) smil2_volume_content_pane_g

0x6ec8,	// (0x000368d7) cale_week_day_heading_pane_t1_ParamLimits

0x6ef5,	// (0x00036904) cale_week_day_heading_pane_t2_ParamLimits

0x6f22,	// (0x00036931) cale_week_day_heading_pane_t3_ParamLimits

0x6f4f,	// (0x0003695e) cale_week_day_heading_pane_t4_ParamLimits

0x6f7c,	// (0x0003698b) cale_week_day_heading_pane_t5_ParamLimits

0x6fa9,	// (0x000369b8) cale_week_day_heading_pane_t6_ParamLimits

0x6fd6,	// (0x000369e5) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0003ec0f) cale_week_day_heading_pane_t_ParamLimits

0xe371,	// (0x0003dd80) bg_cale_side_pane_ParamLimits

0x7003,	// (0x00036a12) cale_week_time_pane_t1_ParamLimits

0x701b,	// (0x00036a2a) cale_week_time_pane_t2_ParamLimits

0x7033,	// (0x00036a42) cale_week_time_pane_t3_ParamLimits

0x704b,	// (0x00036a5a) cale_week_time_pane_t4_ParamLimits

0x7063,	// (0x00036a72) cale_week_time_pane_t5_ParamLimits

0x707b,	// (0x00036a8a) cale_week_time_pane_t6_ParamLimits

0x7093,	// (0x00036aa2) cale_week_time_pane_t7_ParamLimits

0x70ab,	// (0x00036aba) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0003ec1e) cale_week_time_pane_t_ParamLimits

0x70c3,	// (0x00036ad2) cell_cale_week_pane_g2_ParamLimits

0xe371,	// (0x0003dd80) bg_cale_side_pane_cp01_ParamLimits

0x7f3f,	// (0x0003794e) cale_month_week_pane_t1_ParamLimits

0x7f56,	// (0x00037965) cale_month_week_pane_t2_ParamLimits

0x7f6d,	// (0x0003797c) cale_month_week_pane_t3_ParamLimits

0x7f84,	// (0x00037993) cale_month_week_pane_t4_ParamLimits

0x7f9b,	// (0x000379aa) cale_month_week_pane_t5_ParamLimits

0x7fb2,	// (0x000379c1) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0003ecf7) cale_month_week_pane_t_ParamLimits

0x807f,	// (0x00037a8e) cell_cale_month_pane_g1_ParamLimits

0xda84,	// (0x0003d493) main_cale_event_viewer_pane

0xda84,	// (0x0003d493) listscroll_cale_event_viewer_pane

0x18cd,	// (0x000312dc) list_cale_ev_pane

0x18d5,	// (0x000312e4) scroll_pane_cp023

0x18e1,	// (0x000312f0) field_cale_ev_pane_ParamLimits

0x18e1,	// (0x000312f0) field_cale_ev_pane

0x18ff,	// (0x0003130e) field_cale_ev_content_pane_ParamLimits

0x18ff,	// (0x0003130e) field_cale_ev_content_pane

0x190b,	// (0x0003131a) field_cale_ev_pane_g1_ParamLimits

0x190b,	// (0x0003131a) field_cale_ev_pane_g1

0x1917,	// (0x00031326) field_cale_ev_pane_g2_ParamLimits

0x1917,	// (0x00031326) field_cale_ev_pane_g2

0x192f,	// (0x0003133e) field_cale_ev_pane_g3_ParamLimits

0x192f,	// (0x0003133e) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0003f138) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0003f138) field_cale_ev_pane_g

0x1947,	// (0x00031356) field_cale_ev_pane_t1_ParamLimits

0x1947,	// (0x00031356) field_cale_ev_pane_t1

0x195e,	// (0x0003136d) field_cale_ev_content_pane_t1_ParamLimits

0x195e,	// (0x0003136d) field_cale_ev_content_pane_t1

0xee81,	// (0x0003e890) bg_button_pane_cp01

0xe231,	// (0x0003dc40) listscroll_cale_week_pane_ParamLimits

0x6cec,	// (0x000366fb) popup_toolbar_window_cp01

0xe35f,	// (0x0003dd6e) listscroll_cale_week_pane_t1_ParamLimits

0xe231,	// (0x0003dc40) listscroll_cale_day_pane_ParamLimits

0x6cec,	// (0x000366fb) popup_toolbar_window_cp02

0xe35f,	// (0x0003dd6e) listscroll_cale_day_pane_t1_ParamLimits

0xe231,	// (0x0003dc40) main_cale_month_pane_ParamLimits

0x9356,	// (0x00038d65) popup_toolbar_window_cp03_ParamLimits

0x9356,	// (0x00038d65) popup_toolbar_window_cp03

0x8ccf,	// (0x000386de) main_image_pane_g2_ParamLimits

0x8ccf,	// (0x000386de) main_image_pane_g2

0x8cdb,	// (0x000386ea) main_image_pane_g3_ParamLimits

0x8cdb,	// (0x000386ea) main_image_pane_g3

0x0002,

0xf51a,	// (0x0003ef29) main_image_pane_g_ParamLimits

0xf51a,	// (0x0003ef29) main_image_pane_g

0xef9b,	// (0x0003e9aa) main_image_pane_t1_ParamLimits

0x8ce7,	// (0x000386f6) main_image_pane_t2_ParamLimits

0x8ce7,	// (0x000386f6) main_image_pane_t2

0x8cf9,	// (0x00038708) main_image_pane_t3_ParamLimits

0x8cf9,	// (0x00038708) main_image_pane_t3

0x8d0b,	// (0x0003871a) main_image_pane_t4_ParamLimits

0x8d0b,	// (0x0003871a) main_image_pane_t4

0x0003,

0xf521,	// (0x0003ef30) main_image_pane_t_ParamLimits

0xf521,	// (0x0003ef30) main_image_pane_t

0x8d1d,	// (0x0003872c) popup_image_details_window_cp01

0x8d27,	// (0x00038736) popup_toobar_trans_pane_cp01_ParamLimits

0x8d27,	// (0x00038736) popup_toobar_trans_pane_cp01

0x92d3,	// (0x00038ce2) popup_image_details_window_ParamLimits

0x92d3,	// (0x00038ce2) popup_image_details_window

0x1364,	// (0x00030d73) popup_image_focus_window

0x95f1,	// (0x00039000) camera2_autofocus_pane_ParamLimits

0x95f1,	// (0x00039000) camera2_autofocus_pane

0xda84,	// (0x0003d493) bg_popup_sub_pane_cp06

0x197c,	// (0x0003138b) popup_image_focus_window_g1

0x1984,	// (0x00031393) popup_image_focus_window_g2

0x198c,	// (0x0003139b) popup_image_focus_window_g3

0x1994,	// (0x000313a3) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0003f13f) popup_image_focus_window_g

0x199c,	// (0x000313ab) popup_image_focus_window_t1

0x19aa,	// (0x000313b9) popup_image_focus_window_t2

0x19ba,	// (0x000313c9) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0003f148) popup_image_focus_window_t

0x19c8,	// (0x000313d7) camera2_autofocus_pane_g1

0xf0e1,	// (0x0003eaf0) bg_tb_trans_pane_cp01

0x19d6,	// (0x000313e5) popup_image_details_window_g1

0x19e9,	// (0x000313f8) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0003f15a) popup_image_details_window_g

0x1a12,	// (0x00031421) popup_image_details_window_t1

0x1a24,	// (0x00031433) popup_image_details_window_t2

0x1a3d,	// (0x0003144c) popup_image_details_window_t3

0x1a51,	// (0x00031460) popup_image_details_window_t4

0x1a6c,	// (0x0003147b) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0003f161) popup_image_details_window_t

0xe21d,	// (0x0003dc2c) bg_calc_paper_pane_ParamLimits

0xda84,	// (0x0003d493) grid_highlight_pane_cp013

0x6a84,	// (0x00036493) list_calc_pane_ParamLimits

0x6a96,	// (0x000364a5) scroll_pane_cp024

0xe231,	// (0x0003dc40) bg_calc_display_pane_ParamLimits

0x6a9e,	// (0x000364ad) calc_display_pane_t1_ParamLimits

0x6ab3,	// (0x000364c2) calc_display_pane_t2_ParamLimits

0x6ac8,	// (0x000364d7) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0003eb91) calc_display_pane_t_ParamLimits

0x6ba4,	// (0x000365b3) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0003ebae) cell_calc_pane_g

0x6bad,	// (0x000365bc) cell_calc_pane_t1

0xe290,	// (0x0003dc9f) grid_highlight_pane_cp02_ParamLimits

0xe2a6,	// (0x0003dcb5) toolbar_button_pane_cp01_ParamLimits

0xe2a6,	// (0x0003dcb5) toolbar_button_pane_cp01

0xefe0,	// (0x0003e9ef) temp_image_control_pane_ParamLimits

0xefe0,	// (0x0003e9ef) temp_image_control_pane

0xf0e1,	// (0x0003eaf0) main_mp3_pane

0x1a86,	// (0x00031495) temp_image_control_pane_g1_ParamLimits

0x1a86,	// (0x00031495) temp_image_control_pane_g1

0x1a94,	// (0x000314a3) temp_image_control_pane_g2_ParamLimits

0x1a94,	// (0x000314a3) temp_image_control_pane_g2

0x1aa6,	// (0x000314b5) temp_image_control_pane_g3_ParamLimits

0x1aa6,	// (0x000314b5) temp_image_control_pane_g3

0x9c4b,	// (0x0003965a) temp_image_control_pane_g4_ParamLimits

0x9c4b,	// (0x0003965a) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0003f16c) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0003f16c) temp_image_control_pane_g

0x1a86,	// (0x00031495) main_mp3_pane_g1

0x9c5c,	// (0x0003966b) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0003f175) main_mp3_pane_g

0x1ae9,	// (0x000314f8) main_mp3_pane_t1

0xe3d6,	// (0x0003dde5) main_camera_pane_g8_ParamLimits

0xe3d6,	// (0x0003dde5) main_camera_pane_g8

0x7361,	// (0x00036d70) main_video_pane_g7_ParamLimits

0x7361,	// (0x00036d70) main_video_pane_g7

0x9739,	// (0x00039148) main_camera2_pane_t7_ParamLimits

0x9739,	// (0x00039148) main_camera2_pane_t7

0xe524,	// (0x0003df33) scroll_pane_cp025_ParamLimits

0xe524,	// (0x0003df33) scroll_pane_cp025

0xe538,	// (0x0003df47) scroll_pane_cp026_ParamLimits

0xe538,	// (0x0003df47) scroll_pane_cp026

0xe547,	// (0x0003df56) wml_content_pane_ParamLimits

0xda84,	// (0x0003d493) main_touch_calib_pane

0x9d00,	// (0x0003970f) main_touch_calib_pane_g1

0x9d0c,	// (0x0003971b) main_touch_calib_pane_g2

0x9d18,	// (0x00039727) main_touch_calib_pane_g3

0x9d24,	// (0x00039733) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0003f193) main_touch_calib_pane_g

0x9d30,	// (0x0003973f) main_touch_calib_pane_t1

0x9d47,	// (0x00039756) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0003f19c) main_touch_calib_pane_t

0xec59,	// (0x0003e668) mup_progress_pane_cp02

0xec78,	// (0x0003e687) navi_pane_g1

0xecda,	// (0x0003e6e9) navi_pane_mp_t3

0xf0e1,	// (0x0003eaf0) main_mp3_pane_ParamLimits

0x9394,	// (0x00038da3) navi_pane_ParamLimits

0x1a86,	// (0x00031495) main_mp3_pane_g1_ParamLimits

0x9c5c,	// (0x0003966b) main_mp3_pane_g2_ParamLimits

0x9c68,	// (0x00039677) main_mp3_pane_g3_ParamLimits

0x9c68,	// (0x00039677) main_mp3_pane_g3

0x9c74,	// (0x00039683) main_mp3_pane_g4_ParamLimits

0x9c74,	// (0x00039683) main_mp3_pane_g4

0x1ab6,	// (0x000314c5) main_mp3_pane_g5_ParamLimits

0x1ab6,	// (0x000314c5) main_mp3_pane_g5

0x1ac4,	// (0x000314d3) main_mp3_pane_g6_ParamLimits

0x1ac4,	// (0x000314d3) main_mp3_pane_g6

0x1ad1,	// (0x000314e0) main_mp3_pane_g7_ParamLimits

0x1ad1,	// (0x000314e0) main_mp3_pane_g7

0x1add,	// (0x000314ec) main_mp3_pane_g8_ParamLimits

0x1add,	// (0x000314ec) main_mp3_pane_g8

0xf766,	// (0x0003f175) main_mp3_pane_g_ParamLimits

0x9c80,	// (0x0003968f) main_mp3_pane_t2

0x9c90,	// (0x0003969f) main_mp3_pane_t3

0x1af7,	// (0x00031506) main_mp3_pane_t4

0x1b05,	// (0x00031514) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0003f186) main_mp3_pane_t

0x1b13,	// (0x00031522) mup_progress_pane_cp01

0x53b1,	// (0x00034dc0) aid_zoom_text_secondary2

0x18cd,	// (0x000312dc) list_cale_ev2_pane

0x18d5,	// (0x000312e4) scroll_pane_cp023_ParamLimits

0x9d9c,	// (0x000397ab) field_cale_ev2_pane_ParamLimits

0x9d9c,	// (0x000397ab) field_cale_ev2_pane

0x56a0,	// (0x000350af) field_cale_ev2_pane_g1_ParamLimits

0x56a0,	// (0x000350af) field_cale_ev2_pane_g1

0x56ac,	// (0x000350bb) field_cale_ev2_pane_g2_ParamLimits

0x56ac,	// (0x000350bb) field_cale_ev2_pane_g2

0x56c4,	// (0x000350d3) field_cale_ev2_pane_g3_ParamLimits

0x56c4,	// (0x000350d3) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0003f1a7) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0003f1a7) field_cale_ev2_pane_g

0x56e8,	// (0x000350f7) field_cale_ev2_pane_t1_ParamLimits

0x56e8,	// (0x000350f7) field_cale_ev2_pane_t1

0x56ff,	// (0x0003510e) field_cale_ev2_pane_t2_ParamLimits

0x56ff,	// (0x0003510e) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0003f1b0) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0003f1b0) field_cale_ev2_pane_t

0x8baf,	// (0x000385be) main_postcard_pane_g5_ParamLimits

0x8baf,	// (0x000385be) main_postcard_pane_g5

0x8bbd,	// (0x000385cc) main_postcard_pane_g6_ParamLimits

0x8bbd,	// (0x000385cc) main_postcard_pane_g6

0x71a9,	// (0x00036bb8) camera2_autofocus_pane_cp_ParamLimits

0x71a9,	// (0x00036bb8) camera2_autofocus_pane_cp

0xf0e1,	// (0x0003eaf0) main_mup3_pane

0x9de5,	// (0x000397f4) main_mup3_pane_g1_ParamLimits

0x9de5,	// (0x000397f4) main_mup3_pane_g1

0x9e06,	// (0x00039815) main_mup3_pane_g2_ParamLimits

0x9e06,	// (0x00039815) main_mup3_pane_g2

0x9e7e,	// (0x0003988d) main_mup3_pane_g3_ParamLimits

0x9e7e,	// (0x0003988d) main_mup3_pane_g3

0x9ebd,	// (0x000398cc) main_mup3_pane_g4_ParamLimits

0x9ebd,	// (0x000398cc) main_mup3_pane_g4

0x9efc,	// (0x0003990b) main_mup3_pane_g5_ParamLimits

0x9efc,	// (0x0003990b) main_mup3_pane_g5

0x9f3b,	// (0x0003994a) main_mup3_pane_g6_ParamLimits

0x9f3b,	// (0x0003994a) main_mup3_pane_g6

0x1b27,	// (0x00031536) main_mup3_pane_g7_ParamLimits

0x1b27,	// (0x00031536) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0003f1c0) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0003f1c0) main_mup3_pane_g

0x9fad,	// (0x000399bc) main_mup3_pane_t1_ParamLimits

0x9fad,	// (0x000399bc) main_mup3_pane_t1

0xa018,	// (0x00039a27) main_mup3_pane_t2_ParamLimits

0xa018,	// (0x00039a27) main_mup3_pane_t2

0xa0dd,	// (0x00039aec) main_mup3_pane_t4_ParamLimits

0xa0dd,	// (0x00039aec) main_mup3_pane_t4

0xa12b,	// (0x00039b3a) main_mup3_pane_t5_ParamLimits

0xa12b,	// (0x00039b3a) main_mup3_pane_t5

0xa1d3,	// (0x00039be2) main_mup3_pane_t6_ParamLimits

0xa1d3,	// (0x00039be2) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0003f1d1) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0003f1d1) main_mup3_pane_t

0xa27b,	// (0x00039c8a) mup3_progress_pane_ParamLimits

0xa27b,	// (0x00039c8a) mup3_progress_pane

0xa2e6,	// (0x00039cf5) popup_mup3_control_window_ParamLimits

0xa2e6,	// (0x00039cf5) popup_mup3_control_window

0x1b35,	// (0x00031544) popup_mup3_text_window

0xa2ff,	// (0x00039d0e) mup3_progress_pane_t1

0xa316,	// (0x00039d25) mup3_progress_pane_t2

0x1b3d,	// (0x0003154c) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0003f1de) mup3_progress_pane_t

0x1b54,	// (0x00031563) mup_progress_pane_cp03

0xda84,	// (0x0003d493) bg_tb_trans_pane_cp04

0xa32d,	// (0x00039d3c) mup3_volume_pane

0xa335,	// (0x00039d44) popup_mup3_control_window_g1

0xa33e,	// (0x00039d4d) mup3_volume_pane_g1

0xa347,	// (0x00039d56) mup3_volume_pane_g2

0xa350,	// (0x00039d5f) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0003f1e5) mup3_volume_pane_g

0xda84,	// (0x0003d493) bg_tb_trans_pane_cp03

0x1b64,	// (0x00031573) popup_mup3_text_window_g1

0x1b6c,	// (0x0003157b) popup_mup3_text_window_t1

0xe279,	// (0x0003dc88) list_calc_item_pane_g1_ParamLimits

0x1559,	// (0x00030f68) mup_volume_pane_cp_g1

0x9d5e,	// (0x0003976d) main_touch_calib_pane_t3

0x9d72,	// (0x00039781) main_touch_calib_pane_t4

0x9d86,	// (0x00039795) main_touch_calib_pane_t5

0xda8e,	// (0x0003d49d) aid_cell_size_toolbar2

0xda96,	// (0x0003d4a5) aid_popup3_width_pane

0x53a9,	// (0x00034db8) aid_zoom_text_msg_primary

0x7180,	// (0x00036b8f) vorec_t7

0xe23d,	// (0x0003dc4c) bg_calc_paper_pane_g1_ParamLimits

0xe249,	// (0x0003dc58) bg_calc_paper_pane_g2_ParamLimits

0xe255,	// (0x0003dc64) bg_calc_paper_pane_g3_ParamLimits

0xe261,	// (0x0003dc70) bg_calc_paper_pane_g4_ParamLimits

0xe26d,	// (0x0003dc7c) bg_calc_paper_pane_g5_ParamLimits

0x6b07,	// (0x00036516) bg_calc_paper_pane_g6_ParamLimits

0x6b18,	// (0x00036527) bg_calc_paper_pane_g7_ParamLimits

0x6b29,	// (0x00036538) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0003eb98) bg_calc_paper_pane_g_ParamLimits

0x6b3a,	// (0x00036549) calc_bg_paper_pane_g9_ParamLimits

0x7290,	// (0x00036c9f) image_qvga_pane_ParamLimits

0x7290,	// (0x00036c9f) image_qvga_pane

0xe15a,	// (0x0003db69) bg_popup_sub_pane_cp04_ParamLimits

0xef17,	// (0x0003e926) popup_mup_playback_window_g1_ParamLimits

0xef23,	// (0x0003e932) popup_mup_playback_window_t1_ParamLimits

0xef38,	// (0x0003e947) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0003ef24) popup_mup_playback_window_t_ParamLimits

0x9868,	// (0x00039277) main_mup2_pane_g3_ParamLimits

0x9868,	// (0x00039277) main_mup2_pane_g3

0x74d7,	// (0x00036ee6) popup_toolbar_window_cp04

0x055a,	// (0x0002ff69) popup_call2_audio_second_window_g3_ParamLimits

0x055a,	// (0x0002ff69) popup_call2_audio_second_window_g3

0x0964,	// (0x00030373) popup_call2_audio_first_window_g4_ParamLimits

0x0964,	// (0x00030373) popup_call2_audio_first_window_g4

0x0fe3,	// (0x000309f2) popup_call2_audio_in_window_g4_ParamLimits

0x0fe3,	// (0x000309f2) popup_call2_audio_in_window_g4

0x8cc2,	// (0x000386d1) aid_area_sk_bg_cut_ParamLimits

0x8cc2,	// (0x000386d1) aid_area_sk_bg_cut

0xef4d,	// (0x0003e95c) aid_area_sk_bg_cut_2_ParamLimits

0xef4d,	// (0x0003e95c) aid_area_sk_bg_cut_2

0x9bf1,	// (0x00039600) aid_placing_details_win

0x9bf9,	// (0x00039608) aid_placing_details_win_2

0x19c8,	// (0x000313d7) camera2_autofocus_pane_g1_ParamLimits

0x66de,	// (0x000360ed) popup_fixed_preview_cale_window_ParamLimits

0x66de,	// (0x000360ed) popup_fixed_preview_cale_window

0xed29,	// (0x0003e738) navi_slider_pane_g3

0xed32,	// (0x0003e741) navi_slider_pane_g4

0xed3b,	// (0x0003e74a) navi_slider_pane_g5

0xed29,	// (0x0003e738) navi_slider_pane_g6

0x85fe,	// (0x0003800d) navi_slider_pane_g7

0xee4e,	// (0x0003e85d) mup_scale_pane_g3

0xee57,	// (0x0003e866) mup_scale_pane_g4

0xee60,	// (0x0003e86f) mup_scale_pane_g5

0x8a3f,	// (0x0003844e) mup_scale_pane_g6

0x8a48,	// (0x00038457) mup_scale_pane_g7

0xed29,	// (0x0003e738) cams2_slider_pane_g3

0x160e,	// (0x0003101d) cams2_slider_pane_g4

0x9b49,	// (0x00039558) cams2_slider_pane_g5

0xed29,	// (0x0003e738) cams2_slider_pane_g6

0x9b51,	// (0x00039560) cams2_slider_pane_g7

0x184a,	// (0x00031259) camera2_autofocus_pane_cp_g1

0x1b7a,	// (0x00031589) bg_popup_preview_window_pane_cp02_ParamLimits

0x1b7a,	// (0x00031589) bg_popup_preview_window_pane_cp02

0x1b86,	// (0x00031595) list_fp_cale_pane_ParamLimits

0x1b86,	// (0x00031595) list_fp_cale_pane

0x1b92,	// (0x000315a1) popup_fixed_preview_cale_window_t1_ParamLimits

0x1b92,	// (0x000315a1) popup_fixed_preview_cale_window_t1

0xa359,	// (0x00039d68) popup_fixed_preview_cale_window_t2_ParamLimits

0xa359,	// (0x00039d68) popup_fixed_preview_cale_window_t2

0xa36e,	// (0x00039d7d) popup_fixed_preview_cale_window_t3_ParamLimits

0xa36e,	// (0x00039d7d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0003f1ec) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0003f1ec) popup_fixed_preview_cale_window_t

0xa383,	// (0x00039d92) list_single_fp_cale_pane_ParamLimits

0xa383,	// (0x00039d92) list_single_fp_cale_pane

0x1bb0,	// (0x000315bf) list_single_fp_cale_pane_g1_ParamLimits

0x1bb0,	// (0x000315bf) list_single_fp_cale_pane_g1

0x1bbc,	// (0x000315cb) list_single_fp_cale_pane_g2_ParamLimits

0x1bbc,	// (0x000315cb) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0003f1f3) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0003f1f3) list_single_fp_cale_pane_g

0x1bd5,	// (0x000315e4) list_single_fp_cale_pane_t1_ParamLimits

0x1bd5,	// (0x000315e4) list_single_fp_cale_pane_t1

0x1be7,	// (0x000315f6) list_single_fp_cale_pane_t2_ParamLimits

0x1be7,	// (0x000315f6) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0003f1fa) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0003f1fa) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xda84,	// (0x0003d493) main_dialer_pane

0xa395,	// (0x00039da4) aid_cell_size_keypad

0xa39f,	// (0x00039dae) dialer_ne_pane

0xa3a9,	// (0x00039db8) grid_dialer_command_1_pane

0xa3b1,	// (0x00039dc0) grid_dialer_command_2_pane

0xa3b9,	// (0x00039dc8) grid_dialer_keypad_pane

0xa3cb,	// (0x00039dda) bg_popup_call_pane_cp06_ParamLimits

0xa3cb,	// (0x00039dda) bg_popup_call_pane_cp06

0xa3d7,	// (0x00039de6) dialer_ne_clear_pane_ParamLimits

0xa3d7,	// (0x00039de6) dialer_ne_clear_pane

0x1c1a,	// (0x00031629) dialer_ne_pane_g1

0x1c22,	// (0x00031631) dialer_ne_pane_t1_ParamLimits

0x1c22,	// (0x00031631) dialer_ne_pane_t1

0xa3e3,	// (0x00039df2) dialer_ne_pane_t2_ParamLimits

0xa3e3,	// (0x00039df2) dialer_ne_pane_t2

0xa400,	// (0x00039e0f) dialer_ne_pane_t3_ParamLimits

0xa400,	// (0x00039e0f) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0003f1ff) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0003f1ff) dialer_ne_pane_t

0xa424,	// (0x00039e33) dialer_ne_pane_t3_copy1_ParamLimits

0xa424,	// (0x00039e33) dialer_ne_pane_t3_copy1

0xa448,	// (0x00039e57) cell_dialer_keypad_pane_ParamLimits

0xa448,	// (0x00039e57) cell_dialer_keypad_pane

0xa45f,	// (0x00039e6e) cell_dialer_command_1_pane_ParamLimits

0xa45f,	// (0x00039e6e) cell_dialer_command_1_pane

0xa475,	// (0x00039e84) cell_dialer_command_2_pane_ParamLimits

0xa475,	// (0x00039e84) cell_dialer_command_2_pane

0x1c34,	// (0x00031643) bg_button_pane_cp02_ParamLimits

0x1c34,	// (0x00031643) bg_button_pane_cp02

0xa484,	// (0x00039e93) cell_dialer_keypad_pane_g1_ParamLimits

0xa484,	// (0x00039e93) cell_dialer_keypad_pane_g1

0x1c34,	// (0x00031643) bg_button_pane_cp03_ParamLimits

0x1c34,	// (0x00031643) bg_button_pane_cp03

0xa499,	// (0x00039ea8) cell_dialer_command_1_pane_g1_ParamLimits

0xa499,	// (0x00039ea8) cell_dialer_command_1_pane_g1

0x1c40,	// (0x0003164f) bg_button_pane_cp04

0xa4ad,	// (0x00039ebc) cell_dialer_command_2_pane_g1

0xed18,	// (0x0003e727) bg_button_pane_cp06

0x1c48,	// (0x00031657) dialer_ne_clear_pane_g1

0x8541,	// (0x00037f50) navi_pane_g2

0x856f,	// (0x00037f7e) navi_pane_g3

0x0002,

0xf418,	// (0x0003ee27) navi_pane_g

0x859a,	// (0x00037fa9) navi_pane_mv_g2

0x85c1,	// (0x00037fd0) navi_pane_mv_g5

0x85c9,	// (0x00037fd8) navi_pane_mv_t1

0xe231,	// (0x0003dc40) main_clock2_pane

0xa4dc,	// (0x00039eeb) main_clock2_list_pane_ParamLimits

0xa4dc,	// (0x00039eeb) main_clock2_list_pane

0xa504,	// (0x00039f13) main_clock2_pane_t1_ParamLimits

0xa504,	// (0x00039f13) main_clock2_pane_t1

0xa532,	// (0x00039f41) main_clock2_pane_t2_ParamLimits

0xa532,	// (0x00039f41) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0003f206) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0003f206) main_clock2_pane_t

0xa599,	// (0x00039fa8) popup_clock_analogue_window_cp03_ParamLimits

0xa599,	// (0x00039fa8) popup_clock_analogue_window_cp03

0xa5b7,	// (0x00039fc6) popup_clock_digital_window_cp02_ParamLimits

0xa5b7,	// (0x00039fc6) popup_clock_digital_window_cp02

0xa624,	// (0x0003a033) main_clock2_list_single_pane_ParamLimits

0xa624,	// (0x0003a033) main_clock2_list_single_pane

0xed18,	// (0x0003e727) list_highlight_pane_cp05

0x1c50,	// (0x0003165f) main_clock2_list_single_pane_t1

0x74d7,	// (0x00036ee6) popup_toolbar_window_cp04_ParamLimits

0x9c1b,	// (0x0003962a) camera2_autofocus_pane_g2_ParamLimits

0x9c1b,	// (0x0003962a) camera2_autofocus_pane_g2

0x9c27,	// (0x00039636) camera2_autofocus_pane_g3_ParamLimits

0x9c27,	// (0x00039636) camera2_autofocus_pane_g3

0x9c33,	// (0x00039642) camera2_autofocus_pane_g4_ParamLimits

0x9c33,	// (0x00039642) camera2_autofocus_pane_g4

0x9c3f,	// (0x0003964e) camera2_autofocus_pane_g5_ParamLimits

0x9c3f,	// (0x0003964e) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0003f14f) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0003f14f) camera2_autofocus_pane_g

0x9dc5,	// (0x000397d4) camera2_autofocus_pane_cp_g2

0x9dcd,	// (0x000397dc) camera2_autofocus_pane_cp_g3

0x9dd5,	// (0x000397e4) camera2_autofocus_pane_cp_g4

0x9ddd,	// (0x000397ec) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0003f1b5) camera2_autofocus_pane_cp_g

0xa3c3,	// (0x00039dd2) popup_dialer_spcha_window

0xda84,	// (0x0003d493) bg_popup_sub_pane_cp07

0x1c5e,	// (0x0003166d) list_spcha_pane

0x1c66,	// (0x00031675) list_single_spcha_pane_ParamLimits

0x1c66,	// (0x00031675) list_single_spcha_pane

0xda84,	// (0x0003d493) list_highlight_pane_cp06

0x1c77,	// (0x00031686) list_single_spcha_pane_t1

0x0d8d,	// (0x0003079c) popup_call2_audio_out_window_g4_ParamLimits

0x0d8d,	// (0x0003079c) popup_call2_audio_out_window_g4

0xda84,	// (0x0003d493) main_imed2_pane

0x136c,	// (0x00030d7b) popup_imed_adjust2_window

0x92e1,	// (0x00038cf0) popup_imed_trans_window_ParamLimits

0x92e1,	// (0x00038cf0) popup_imed_trans_window

0x1688,	// (0x00031097) popup_blid_sat_info2_window_t1

0x1696,	// (0x000310a5) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0003f0e4) popup_blid_sat_info2_window_t

0xa6ce,	// (0x0003a0dd) aid_size_cell_colour_35

0xa6e8,	// (0x0003a0f7) aid_size_cell_colour_112

0xa6ff,	// (0x0003a10e) aid_size_cell_effect

0xf0e1,	// (0x0003eaf0) bg_tb_trans_pane_cp02

0xf0ef,	// (0x0003eafe) heading_imed_pane

0xa719,	// (0x0003a128) listscroll_imed_pane

0x1c85,	// (0x00031694) heading_imed_pane_g1

0x1c8d,	// (0x0003169c) heading_imed_pane_t1

0x1c9b,	// (0x000316aa) grid_imed_colour_35_pane_ParamLimits

0x1c9b,	// (0x000316aa) grid_imed_colour_35_pane

0xa725,	// (0x0003a134) grid_imed_effect_pane

0x1cb2,	// (0x000316c1) list_imed_aspect_pane

0xa735,	// (0x0003a144) scroll_pane_cp027_ParamLimits

0xa735,	// (0x0003a144) scroll_pane_cp027

0xa741,	// (0x0003a150) cell_imed_effect_pane_ParamLimits

0xa741,	// (0x0003a150) cell_imed_effect_pane

0x1cba,	// (0x000316c9) cell_imed_colour_pane_ParamLimits

0x1cba,	// (0x000316c9) cell_imed_colour_pane

0x1cfc,	// (0x0003170b) cell_imed_colour_pane_g1_ParamLimits

0x1cfc,	// (0x0003170b) cell_imed_colour_pane_g1

0x1d0d,	// (0x0003171c) hgihlgiht_grid_pane_cp016_ParamLimits

0x1d0d,	// (0x0003171c) hgihlgiht_grid_pane_cp016

0xa759,	// (0x0003a168) cell_imed_effect_pane_g1

0xa761,	// (0x0003a170) grid_highlight_pane_cp017

0x1d1e,	// (0x0003172d) list_imed_single_pane_ParamLimits

0x1d1e,	// (0x0003172d) list_imed_single_pane

0xda84,	// (0x0003d493) list_highlight_pane_cp07

0x1d33,	// (0x00031742) list_imed_aspect_pane_comp1_t1

0x1344,	// (0x00030d53) bg_tb_trans_pane_cp05

0x1d55,	// (0x00031764) popup_imed_adjust2_window_g1

0x1d7c,	// (0x0003178b) popup_imed_adjust2_window_t1

0x1d94,	// (0x000317a3) slider_imed_adjust_pane

0x1da8,	// (0x000317b7) slider_imed_adjust_pane_g1

0x1db8,	// (0x000317c7) slider_imed_adjust_pane_g2

0x1dc8,	// (0x000317d7) slider_imed_adjust_pane_g3

0x1dd9,	// (0x000317e8) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0003f223) slider_imed_adjust_pane_g

0xa76a,	// (0x0003a179) aid_size_cell_clipart2

0xa776,	// (0x0003a185) grid_imed_clipart_pane

0x1dea,	// (0x000317f9) scroll_pane_cp031

0xa780,	// (0x0003a18f) cell_imed_clipart_pane_ParamLimits

0xa780,	// (0x0003a18f) cell_imed_clipart_pane

0xa7a2,	// (0x0003a1b1) cell_imed_clipart_pane_g1

0xda84,	// (0x0003d493) grid_highlight_pane_cp014

0xa4e8,	// (0x00039ef7) main_clock2_pane_g1_ParamLimits

0xa4e8,	// (0x00039ef7) main_clock2_pane_g1

0xa5cf,	// (0x00039fde) aid_call2_pane_cp10

0xa5e1,	// (0x00039ff0) aid_call_pane_cp10

0xec4d,	// (0x0003e65c) popup_clock_analogue_window_cp10_g1

0xec4d,	// (0x0003e65c) popup_clock_analogue_window_cp10_g2

0xa5f3,	// (0x0003a002) popup_clock_analogue_window_cp10_g3

0xa5f3,	// (0x0003a002) popup_clock_analogue_window_cp10_g4

0xec4d,	// (0x0003e65c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0003f211) popup_clock_analogue_window_cp10_g

0xa605,	// (0x0003a014) popup_clock_analogue_window_cp10_t1

0xa636,	// (0x0003a045) clock_digital_number_pane_cp10_ParamLimits

0xa636,	// (0x0003a045) clock_digital_number_pane_cp10

0xa64e,	// (0x0003a05d) clock_digital_number_pane_cp11_ParamLimits

0xa64e,	// (0x0003a05d) clock_digital_number_pane_cp11

0xa666,	// (0x0003a075) clock_digital_number_pane_cp12_ParamLimits

0xa666,	// (0x0003a075) clock_digital_number_pane_cp12

0xa67e,	// (0x0003a08d) clock_digital_number_pane_cp13_ParamLimits

0xa67e,	// (0x0003a08d) clock_digital_number_pane_cp13

0xa696,	// (0x0003a0a5) clock_digital_separator_pane_cp10_ParamLimits

0xa696,	// (0x0003a0a5) clock_digital_separator_pane_cp10

0xa6ae,	// (0x0003a0bd) popup_clock_digital_window_cp02_t1_ParamLimits

0xa6ae,	// (0x0003a0bd) popup_clock_digital_window_cp02_t1

0xe152,	// (0x0003db61) clock_digital_number_pane_cp10_g1

0xe152,	// (0x0003db61) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0003f22c) clock_digital_number_pane_cp10_g

0xe152,	// (0x0003db61) clock_digital_separator_pane_cp10_g1

0xe152,	// (0x0003db61) clock_digital_separator_pane_g2_cp10

0xece8,	// (0x0003e6f7) navi_pane_vded_g4

0xecf1,	// (0x0003e700) navi_pane_vded_g5

0xecfa,	// (0x0003e709) navi_pane_vded_t1

0xda84,	// (0x0003d493) main_vded_pane

0xa7ab,	// (0x0003a1ba) main_vded_pane_g1

0xa7b7,	// (0x0003a1c6) main_vded_pane_g2

0xa7c1,	// (0x0003a1d0) main_vded_pane_g3

0x0002,

0xf822,	// (0x0003f231) main_vded_pane_g

0xa7cb,	// (0x0003a1da) main_vded_pane_t1

0xa7d9,	// (0x0003a1e8) main_vded_pane_t2

0x0001,

0xf829,	// (0x0003f238) main_vded_pane_t

0xa7e7,	// (0x0003a1f6) vded_slider_pane

0xa7f1,	// (0x0003a200) vded_video_pane

0x1df2,	// (0x00031801) vded_video_pane_g1

0xa7fb,	// (0x0003a20a) vded_video_pane_g2

0x184a,	// (0x00031259) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0003f23d) vded_video_pane_g

0x1dfc,	// (0x0003180b) vded_slider_pane_g1

0x1559,	// (0x00030f68) vded_slider_pane_g2

0x1e05,	// (0x00031814) vded_slider_pane_g3

0x1e0e,	// (0x0003181d) vded_slider_pane_g4

0x1e17,	// (0x00031826) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0003f244) vded_slider_pane_g

0xa2d8,	// (0x00039ce7) mup3_rocker_pane_ParamLimits

0xa2d8,	// (0x00039ce7) mup3_rocker_pane

0xa804,	// (0x0003a213) mup3_control_keys_pane_g1

0xa80c,	// (0x0003a21b) mup3_control_keys_pane_g2

0xa814,	// (0x0003a223) mup3_control_keys_pane_g3

0xa81c,	// (0x0003a22b) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0003f24f) mup3_control_keys_pane_g

0x66fc,	// (0x0003610b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x66fc,	// (0x0003610b) popup_toolbar2_fixed_window_cp01

0xa2f2,	// (0x00039d01) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa2f2,	// (0x00039d01) popup_toolbar2_fixed_window_cp02

0x06cc,	// (0x000300db) popup_call2_audio_second_window_t4_ParamLimits

0x06cc,	// (0x000300db) popup_call2_audio_second_window_t4

0x0bfa,	// (0x00030609) popup_call2_audio_first_window_t6_ParamLimits

0x0bfa,	// (0x00030609) popup_call2_audio_first_window_t6

0x0e90,	// (0x0003089f) popup_call2_audio_out_window_t6_ParamLimits

0x0e90,	// (0x0003089f) popup_call2_audio_out_window_t6

0xda84,	// (0x0003d493) main_vitu_pane

0xa82c,	// (0x0003a23b) aid_size_cell_itu_ParamLimits

0xa82c,	// (0x0003a23b) aid_size_cell_itu

0x6724,	// (0x00036133) bg_popup_window_pane_cp08_ParamLimits

0x6724,	// (0x00036133) bg_popup_window_pane_cp08

0xa83a,	// (0x0003a249) field_vitu_entry_pane_ParamLimits

0xa83a,	// (0x0003a249) field_vitu_entry_pane

0xa849,	// (0x0003a258) grid_vitu_function_pane_ParamLimits

0xa849,	// (0x0003a258) grid_vitu_function_pane

0xa859,	// (0x0003a268) grid_vitu_itu_pane_ParamLimits

0xa859,	// (0x0003a268) grid_vitu_itu_pane

0xa869,	// (0x0003a278) cell_vitu_itu_pane_ParamLimits

0xa869,	// (0x0003a278) cell_vitu_itu_pane

0xa87e,	// (0x0003a28d) cell_vitu_function_pane_ParamLimits

0xa87e,	// (0x0003a28d) cell_vitu_function_pane

0xf0e1,	// (0x0003eaf0) bg_popup_sub_pane_cp08_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_popup_sub_pane_cp08

0xa890,	// (0x0003a29f) field_vitu_entry_pane_t1_ParamLimits

0xa890,	// (0x0003a29f) field_vitu_entry_pane_t1

0x1e38,	// (0x00031847) field_vitu_entry_pane_t2_ParamLimits

0x1e38,	// (0x00031847) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0003f25d) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0003f25d) field_vitu_entry_pane_t

0x1e55,	// (0x00031864) bg_button_pane_cp05_ParamLimits

0x1e55,	// (0x00031864) bg_button_pane_cp05

0xa8ab,	// (0x0003a2ba) cell_vitu_itu_pane_g1

0xa8c3,	// (0x0003a2d2) cell_vitu_itu_pane_t1_ParamLimits

0xa8c3,	// (0x0003a2d2) cell_vitu_itu_pane_t1

0xa8d5,	// (0x0003a2e4) cell_vitu_itu_pane_t2_ParamLimits

0xa8d5,	// (0x0003a2e4) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0003f262) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0003f262) cell_vitu_itu_pane_t

0x1e63,	// (0x00031872) bg_button_pane_cp07

0xa90a,	// (0x0003a319) cell_vitu_function_pane_g1

0x69af,	// (0x000363be) main_calc_pane_g1

0x64ff,	// (0x00035f0e) aid_visual_content_pane

0xda84,	// (0x0003d493) main_vradio_pane

0xa913,	// (0x0003a322) main_vradio_pane_g1_ParamLimits

0xa913,	// (0x0003a322) main_vradio_pane_g1

0x1e6d,	// (0x0003187c) main_vradio_pane_g2_ParamLimits

0x1e6d,	// (0x0003187c) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0003f269) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0003f269) main_vradio_pane_g

0xa923,	// (0x0003a332) main_vradio_pane_t1_ParamLimits

0xa923,	// (0x0003a332) main_vradio_pane_t1

0xa935,	// (0x0003a344) main_vradio_pane_t2_ParamLimits

0xa935,	// (0x0003a344) main_vradio_pane_t2

0x1e7a,	// (0x00031889) main_vradio_pane_t3_ParamLimits

0x1e7a,	// (0x00031889) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0003f26e) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0003f26e) main_vradio_pane_t

0xa947,	// (0x0003a356) vradio_rocker_control_pane_ParamLimits

0xa947,	// (0x0003a356) vradio_rocker_control_pane

0xa953,	// (0x0003a362) vradio_station_info_pane_ParamLimits

0xa953,	// (0x0003a362) vradio_station_info_pane

0x1e8e,	// (0x0003189d) vradio_frequency_info_pane_ParamLimits

0x1e8e,	// (0x0003189d) vradio_frequency_info_pane

0x184a,	// (0x00031259) vradio_station_info_pane_g1

0x1e9d,	// (0x000318ac) vradio_station_info_pane_t1_ParamLimits

0x1e9d,	// (0x000318ac) vradio_station_info_pane_t1

0x1ebf,	// (0x000318ce) vradio_station_info_pane_t2_ParamLimits

0x1ebf,	// (0x000318ce) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0003f275) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0003f275) vradio_station_info_pane_t

0x1ed1,	// (0x000318e0) vradio_tuning_pane

0x1ed9,	// (0x000318e8) vradio_rocker_control_pane_g1

0x1ee1,	// (0x000318f0) vradio_rocker_control_pane_g2

0x1ee9,	// (0x000318f8) vradio_rocker_control_pane_g3

0x1ef1,	// (0x00031900) vradio_rocker_control_pane_g4

0x1ef9,	// (0x00031908) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0003f27a) vradio_rocker_control_pane_g

0xa962,	// (0x0003a371) vradio_frequency_info_pane_g1

0x1f01,	// (0x00031910) vradio_frequency_info_pane_t1_ParamLimits

0x1f01,	// (0x00031910) vradio_frequency_info_pane_t1

0xa96c,	// (0x0003a37b) vradio_tuning_pane_g1

0xa975,	// (0x0003a384) vradio_tuning_pane_t1

0xdaaa,	// (0x0003d4b9) area_side_right_pane_ParamLimits

0xdaaa,	// (0x0003d4b9) area_side_right_pane

0x130b,	// (0x00030d1a) status_small_pane_g1

0x1313,	// (0x00030d22) status_small_pane_g2

0x131c,	// (0x00030d2b) status_small_pane_g3

0x1325,	// (0x00030d34) status_small_pane_g4

0x0003,

0xf62b,	// (0x0003f03a) status_small_pane_g

0x132e,	// (0x00030d3d) status_small_pane_t1

0xda84,	// (0x0003d493) main_video3_pane

0x1f15,	// (0x00031924) cams_zoom_vslider_pane

0x1f1d,	// (0x0003192c) image3_wide_pane_ParamLimits

0x1f1d,	// (0x0003192c) image3_wide_pane

0x1f37,	// (0x00031946) image3_wide_small_pane

0x1f43,	// (0x00031952) main_video3_pane_g1_ParamLimits

0x1f43,	// (0x00031952) main_video3_pane_g1

0x1f5f,	// (0x0003196e) main_video3_pane_g2_ParamLimits

0x1f5f,	// (0x0003196e) main_video3_pane_g2

0x0001,

0xf876,	// (0x0003f285) main_video3_pane_g_ParamLimits

0xf876,	// (0x0003f285) main_video3_pane_g

0x1f7b,	// (0x0003198a) main_video3_pane_t1_ParamLimits

0x1f7b,	// (0x0003198a) main_video3_pane_t1

0x1fa6,	// (0x000319b5) main_video3_pane_t2_ParamLimits

0x1fa6,	// (0x000319b5) main_video3_pane_t2

0x1fd1,	// (0x000319e0) main_video3_pane_t3_ParamLimits

0x1fd1,	// (0x000319e0) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0003f28a) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0003f28a) main_video3_pane_t

0x1ffe,	// (0x00031a0d) cams_zoom_vslider_pane_g1

0x2007,	// (0x00031a16) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0003f291) cams_zoom_vslider_pane_g

0x200f,	// (0x00031a1e) small_slider_vertical_pane

0x184a,	// (0x00031259) small_slider_vertical_pane_g1

0x184a,	// (0x00031259) small_slider_vertical_pane_g2

0x2017,	// (0x00031a26) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0003f296) small_slider_vertical_pane_g

0xda84,	// (0x0003d493) main_hwr_training_pane

0x2020,	// (0x00031a2f) hwr_training_instruct_pane_ParamLimits

0x2020,	// (0x00031a2f) hwr_training_instruct_pane

0xa984,	// (0x0003a393) hwr_training_navi_pane_ParamLimits

0xa984,	// (0x0003a393) hwr_training_navi_pane

0xa99e,	// (0x0003a3ad) hwr_training_write_pane_ParamLimits

0xa99e,	// (0x0003a3ad) hwr_training_write_pane

0xda84,	// (0x0003d493) bg_frame_shadow_pane

0x2057,	// (0x00031a66) hwr_training_write_pane_g1

0x205f,	// (0x00031a6e) hwr_training_write_pane_g2

0x2067,	// (0x00031a76) hwr_training_write_pane_g3

0x206f,	// (0x00031a7e) hwr_training_write_pane_g4

0x2077,	// (0x00031a86) hwr_training_write_pane_g5

0x207f,	// (0x00031a8e) hwr_training_write_pane_g6

0x2087,	// (0x00031a96) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0003f29d) hwr_training_write_pane_g

0xa9d6,	// (0x0003a3e5) hwr_training_navi_pane_g1_ParamLimits

0xa9d6,	// (0x0003a3e5) hwr_training_navi_pane_g1

0xa9e8,	// (0x0003a3f7) hwr_training_navi_pane_g2_ParamLimits

0xa9e8,	// (0x0003a3f7) hwr_training_navi_pane_g2

0xa9fa,	// (0x0003a409) hwr_training_navi_pane_g3_ParamLimits

0xa9fa,	// (0x0003a409) hwr_training_navi_pane_g3

0xaa0a,	// (0x0003a419) hwr_training_navi_pane_g4_ParamLimits

0xaa0a,	// (0x0003a419) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0003f2ac) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0003f2ac) hwr_training_navi_pane_g

0xaa24,	// (0x0003a433) hwr_training_navi_pane_t1

0xaa32,	// (0x0003a441) list_single_hwr_training_instruct_pane_ParamLimits

0xaa32,	// (0x0003a441) list_single_hwr_training_instruct_pane

0x20de,	// (0x00031aed) list_single_hwr_training_instruct_pane_t1

0x178a,	// (0x00031199) bg_frame_shadow_pane_g1

0x20ed,	// (0x00031afc) bg_frame_shadow_pane_g2

0x20f5,	// (0x00031b04) bg_frame_shadow_pane_g3

0x20fd,	// (0x00031b0c) bg_frame_shadow_pane_g4

0x2105,	// (0x00031b14) bg_frame_shadow_pane_g5

0x210d,	// (0x00031b1c) bg_frame_shadow_pane_g6

0x2115,	// (0x00031b24) bg_frame_shadow_pane_g7

0xe2ea,	// (0x0003dcf9) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0003f2b7) bg_frame_shadow_pane_g

0xda84,	// (0x0003d493) main_video_tele_dialer_pane

0xaa57,	// (0x0003a466) aid_size_cell_video_keypad_ParamLimits

0xaa57,	// (0x0003a466) aid_size_cell_video_keypad

0xaa67,	// (0x0003a476) grid_video_dialer_keypad_pane_ParamLimits

0xaa67,	// (0x0003a476) grid_video_dialer_keypad_pane

0xaa9b,	// (0x0003a4aa) video_down_pane_cp_ParamLimits

0xaa9b,	// (0x0003a4aa) video_down_pane_cp

0xaac5,	// (0x0003a4d4) cell_video_dialer_keypad_pane_ParamLimits

0xaac5,	// (0x0003a4d4) cell_video_dialer_keypad_pane

0x211d,	// (0x00031b2c) bg_button_pane_cp08_ParamLimits

0x211d,	// (0x00031b2c) bg_button_pane_cp08

0xaada,	// (0x0003a4e9) cell_video_dialer_keypad_pane_g1_ParamLimits

0xaada,	// (0x0003a4e9) cell_video_dialer_keypad_pane_g1

0xa2cc,	// (0x00039cdb) mup3_rocker2_pane_ParamLimits

0xa2cc,	// (0x00039cdb) mup3_rocker2_pane

0x184a,	// (0x00031259) mup3_rocker2_pane_g1

0x926b,	// (0x00038c7a) main_dialer2_pane

0xda84,	// (0x0003d493) main_mp4_pane

0xab19,	// (0x0003a528) main_mp4_pane_g1_ParamLimits

0xab19,	// (0x0003a528) main_mp4_pane_g1

0xab27,	// (0x0003a536) main_mp4_pane_g2_ParamLimits

0xab27,	// (0x0003a536) main_mp4_pane_g2

0xab35,	// (0x0003a544) main_mp4_pane_g3_ParamLimits

0xab35,	// (0x0003a544) main_mp4_pane_g3

0xab7a,	// (0x0003a589) main_mp4_pane_g4_ParamLimits

0xab7a,	// (0x0003a589) main_mp4_pane_g4

0xaba2,	// (0x0003a5b1) main_mp4_pane_g5_ParamLimits

0xaba2,	// (0x0003a5b1) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0003f2d7) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0003f2d7) main_mp4_pane_g

0xabf2,	// (0x0003a601) main_mp4_pane_t1_ParamLimits

0xabf2,	// (0x0003a601) main_mp4_pane_t1

0xac4e,	// (0x0003a65d) main_mp4_pane_t2_ParamLimits

0xac4e,	// (0x0003a65d) main_mp4_pane_t2

0x2265,	// (0x00031c74) main_mp4_pane_t3_ParamLimits

0x2265,	// (0x00031c74) main_mp4_pane_t3

0xaca0,	// (0x0003a6af) main_mp4_pane_t4_ParamLimits

0xaca0,	// (0x0003a6af) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0003f2e4) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0003f2e4) main_mp4_pane_t

0xace4,	// (0x0003a6f3) mp4_progress_pane_ParamLimits

0xace4,	// (0x0003a6f3) mp4_progress_pane

0xad2e,	// (0x0003a73d) mp4_rocker_pane_ParamLimits

0xad2e,	// (0x0003a73d) mp4_rocker_pane

0x233b,	// (0x00031d4a) mp4_progress_pane_t1

0x2354,	// (0x00031d63) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0003f2ed) mp4_progress_pane_t

0x236d,	// (0x00031d7c) mup_progress_pane_cp04

0x184a,	// (0x00031259) mp4_rocker_pane_g1

0xad4e,	// (0x0003a75d) aid_cell_size_keypad2_ParamLimits

0xad4e,	// (0x0003a75d) aid_cell_size_keypad2

0xad5e,	// (0x0003a76d) dialer2_ne_pane_ParamLimits

0xad5e,	// (0x0003a76d) dialer2_ne_pane

0xad6c,	// (0x0003a77b) grid_dialer2_keypad_pane_ParamLimits

0xad6c,	// (0x0003a77b) grid_dialer2_keypad_pane

0x2e98,	// (0x000328a7) bg_popup_call_pane_cp07_ParamLimits

0x2e98,	// (0x000328a7) bg_popup_call_pane_cp07

0xad7c,	// (0x0003a78b) dialer2_ne_pane_t1_ParamLimits

0xad7c,	// (0x0003a78b) dialer2_ne_pane_t1

0xada1,	// (0x0003a7b0) cell_dialer2_keypad_pane_ParamLimits

0xada1,	// (0x0003a7b0) cell_dialer2_keypad_pane

0x2395,	// (0x00031da4) bg_button_pane_pane_cp04_ParamLimits

0x2395,	// (0x00031da4) bg_button_pane_pane_cp04

0xadb6,	// (0x0003a7c5) cell_dialer2_keypad_pane_g1_ParamLimits

0xadb6,	// (0x0003a7c5) cell_dialer2_keypad_pane_g1

0x740c,	// (0x00036e1b) aid_placing_vt_set_content_ParamLimits

0x740c,	// (0x00036e1b) aid_placing_vt_set_content

0x7426,	// (0x00036e35) aid_placing_vt_set_title_ParamLimits

0x7426,	// (0x00036e35) aid_placing_vt_set_title

0xda84,	// (0x0003d493) main_image3_pane

0xae50,	// (0x0003a85f) area_side_right_pane_cp01_ParamLimits

0xae50,	// (0x0003a85f) area_side_right_pane_cp01

0x3436,	// (0x00032e45) main_image3_pane_g1_ParamLimits

0x3436,	// (0x00032e45) main_image3_pane_g1

0xae7d,	// (0x0003a88c) main_image3_pane_g2_ParamLimits

0xae7d,	// (0x0003a88c) main_image3_pane_g2

0xae96,	// (0x0003a8a5) main_image3_pane_g3_ParamLimits

0xae96,	// (0x0003a8a5) main_image3_pane_g3

0xaeaf,	// (0x0003a8be) main_image3_pane_g4_ParamLimits

0xaeaf,	// (0x0003a8be) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0003f2fc) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0003f2fc) main_image3_pane_g

0xaec8,	// (0x0003a8d7) main_image3_pane_t1_ParamLimits

0xaec8,	// (0x0003a8d7) main_image3_pane_t1

0xaeed,	// (0x0003a8fc) main_image3_pane_t2_ParamLimits

0xaeed,	// (0x0003a8fc) main_image3_pane_t2

0xaf0c,	// (0x0003a91b) main_image3_pane_t3_ParamLimits

0xaf0c,	// (0x0003a91b) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0003f305) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0003f305) main_image3_pane_t

0x6724,	// (0x00036133) grid_sctrl_middle_pane_cp01_ParamLimits

0x6724,	// (0x00036133) grid_sctrl_middle_pane_cp01

0xaf6d,	// (0x0003a97c) cell_sctrl_middle_pane_cp01_ParamLimits

0xaf6d,	// (0x0003a97c) cell_sctrl_middle_pane_cp01

0xaf7e,	// (0x0003a98d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaf7e,	// (0x0003a98d) cell_sctrl_middle_pane_cp01_g1

0xda84,	// (0x0003d493) main_call4_pane

0xaf8b,	// (0x0003a99a) aid_size_button_call4_ParamLimits

0xaf8b,	// (0x0003a99a) aid_size_button_call4

0xafbb,	// (0x0003a9ca) call4_windows_pane_ParamLimits

0xafbb,	// (0x0003a9ca) call4_windows_pane

0xafd5,	// (0x0003a9e4) grid_call4_button_pane_ParamLimits

0xafd5,	// (0x0003a9e4) grid_call4_button_pane

0x23d3,	// (0x00031de2) call4_windows_conf_pane

0x23ea,	// (0x00031df9) popup_call4_audio_first_window_ParamLimits

0x23ea,	// (0x00031df9) popup_call4_audio_first_window

0x2436,	// (0x00031e45) popup_call4_audio_second_window_ParamLimits

0x2436,	// (0x00031e45) popup_call4_audio_second_window

0x244a,	// (0x00031e59) popup_call4_audio_wait_window_ParamLimits

0x244a,	// (0x00031e59) popup_call4_audio_wait_window

0xaff9,	// (0x0003aa08) cell_call4_button_pane_ParamLimits

0xaff9,	// (0x0003aa08) cell_call4_button_pane

0xb01e,	// (0x0003aa2d) bg_button_pane_cp09_ParamLimits

0xb01e,	// (0x0003aa2d) bg_button_pane_cp09

0xb02a,	// (0x0003aa39) cell_call4_button_pane_g1_ParamLimits

0xb02a,	// (0x0003aa39) cell_call4_button_pane_g1

0xb037,	// (0x0003aa46) cell_call4_button_pane_t1_ParamLimits

0xb037,	// (0x0003aa46) cell_call4_button_pane_t1

0x2492,	// (0x00031ea1) popup_call4_audio_conf_window_ParamLimits

0x2492,	// (0x00031ea1) popup_call4_audio_conf_window

0xa2ff,	// (0x00039d0e) mup3_progress_pane_t1_ParamLimits

0xa316,	// (0x00039d25) mup3_progress_pane_t2_ParamLimits

0x1b3d,	// (0x0003154c) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0003f1de) mup3_progress_pane_t_ParamLimits

0x1b54,	// (0x00031563) mup_progress_pane_cp03_ParamLimits

0xa824,	// (0x0003a233) mup3_control_keys_pane_g4_copy1

0xad12,	// (0x0003a721) mp4_rocker2_pane_ParamLimits

0xad12,	// (0x0003a721) mp4_rocker2_pane

0x24ae,	// (0x00031ebd) mp4_rocker2_pane_g1

0x24a6,	// (0x00031eb5) mp4_rocker2_pane_g2

0xb049,	// (0x0003aa58) mp4_rocker2_pane_g3

0xb051,	// (0x0003aa60) mp4_rocker2_pane_g4

0xb059,	// (0x0003aa68) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0003f30e) mp4_rocker2_pane_g

0xda84,	// (0x0003d493) main_camera4_pane

0xda84,	// (0x0003d493) main_video4_pane

0xaa77,	// (0x0003a486) main_video_tele_dialer_pane_t1_ParamLimits

0xaa77,	// (0x0003a486) main_video_tele_dialer_pane_t1

0xaa89,	// (0x0003a498) main_video_tele_dialer_pane_t2_ParamLimits

0xaa89,	// (0x0003a498) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0003f2c8) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0003f2c8) main_video_tele_dialer_pane_t

0xb079,	// (0x0003aa88) cam4_autofocus_pane_ParamLimits

0xb079,	// (0x0003aa88) cam4_autofocus_pane

0xb087,	// (0x0003aa96) cam4_image_uncrop_pane_ParamLimits

0xb087,	// (0x0003aa96) cam4_image_uncrop_pane

0xb09e,	// (0x0003aaad) cam4_indicators_pane_ParamLimits

0xb09e,	// (0x0003aaad) cam4_indicators_pane

0xb0ba,	// (0x0003aac9) main_camera4_pane_g1_ParamLimits

0xb0ba,	// (0x0003aac9) main_camera4_pane_g1

0xb0c6,	// (0x0003aad5) main_camera4_pane_g2_ParamLimits

0xb0c6,	// (0x0003aad5) main_camera4_pane_g2

0xb0c6,	// (0x0003aad5) main_camera4_pane_g3_ParamLimits

0xb0c6,	// (0x0003aad5) main_camera4_pane_g3

0xb0d2,	// (0x0003aae1) main_camera4_pane_g4_ParamLimits

0xb0d2,	// (0x0003aae1) main_camera4_pane_g4

0xb0de,	// (0x0003aaed) main_camera4_pane_g5_ParamLimits

0xb0de,	// (0x0003aaed) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0003f319) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0003f319) main_camera4_pane_g

0xb0f8,	// (0x0003ab07) main_camera4_pane_t1_ParamLimits

0xb0f8,	// (0x0003ab07) main_camera4_pane_t1

0x1ab6,	// (0x000314c5) bg_tb_trans_pane_cp06

0xb148,	// (0x0003ab57) cam4_indicators_pane_g1

0xb159,	// (0x0003ab68) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0003f334) cam4_indicators_pane_g

0xb177,	// (0x0003ab86) cam4_indicators_pane_t1

0xb1a1,	// (0x0003abb0) main_video4_pane_g1_ParamLimits

0xb1a1,	// (0x0003abb0) main_video4_pane_g1

0xb1ad,	// (0x0003abbc) main_video4_pane_g2_ParamLimits

0xb1ad,	// (0x0003abbc) main_video4_pane_g2

0xb1b9,	// (0x0003abc8) main_video4_pane_g3_ParamLimits

0xb1b9,	// (0x0003abc8) main_video4_pane_g3

0xb1c5,	// (0x0003abd4) main_video4_pane_g4_ParamLimits

0xb1c5,	// (0x0003abd4) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0003f33b) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0003f33b) main_video4_pane_g

0xb1e5,	// (0x0003abf4) vid4_indicators_pane_ParamLimits

0xb1e5,	// (0x0003abf4) vid4_indicators_pane

0xb203,	// (0x0003ac12) video4_image_uncrop_cif_pane_ParamLimits

0xb203,	// (0x0003ac12) video4_image_uncrop_cif_pane

0xb212,	// (0x0003ac21) video4_image_uncrop_nhd_pane_ParamLimits

0xb212,	// (0x0003ac21) video4_image_uncrop_nhd_pane

0xb087,	// (0x0003aa96) video4_image_uncrop_vga_pane_ParamLimits

0xb087,	// (0x0003aa96) video4_image_uncrop_vga_pane

0xf0e1,	// (0x0003eaf0) bg_tb_trans_pane_cp07

0xb229,	// (0x0003ac38) vid4_indicators_pane_g1

0xb23a,	// (0x0003ac49) vid4_indicators_pane_g2

0xb24b,	// (0x0003ac5a) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0003f346) vid4_indicators_pane_g

0xb278,	// (0x0003ac87) vid4_indicators_pane_t1

0xb291,	// (0x0003aca0) cam4_autofocus_pane_g1

0xb299,	// (0x0003aca8) cam4_autofocus_pane_g2

0xb2a1,	// (0x0003acb0) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0003f351) cam4_autofocus_pane_g

0xb2a9,	// (0x0003acb8) cam4_autofocus_pane_g3_copy1

0xaaa9,	// (0x0003a4b8) video_down_pane_cp_t1

0xaab7,	// (0x0003a4c6) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0003f2cd) video_down_pane_cp_t

0x6724,	// (0x00036133) popup_vitu2_window_ParamLimits

0x6724,	// (0x00036133) popup_vitu2_window

0xb2b1,	// (0x0003acc0) aid_size_cell2_itu2_ParamLimits

0xb2b1,	// (0x0003acc0) aid_size_cell2_itu2

0xb2d3,	// (0x0003ace2) aid_size_cell_itu2_ParamLimits

0xb2d3,	// (0x0003ace2) aid_size_cell_itu2

0x2e98,	// (0x000328a7) bg_popup_window_pane_cp09_ParamLimits

0x2e98,	// (0x000328a7) bg_popup_window_pane_cp09

0xb317,	// (0x0003ad26) field_vitu2_entry_pane_ParamLimits

0xb317,	// (0x0003ad26) field_vitu2_entry_pane

0xb337,	// (0x0003ad46) grid_vitu2_function_pane_ParamLimits

0xb337,	// (0x0003ad46) grid_vitu2_function_pane

0xb37b,	// (0x0003ad8a) grid_vitu2_itu_pane_ParamLimits

0xb37b,	// (0x0003ad8a) grid_vitu2_itu_pane

0xb3f3,	// (0x0003ae02) cell_vitu2_itu_pane_ParamLimits

0xb3f3,	// (0x0003ae02) cell_vitu2_itu_pane

0xb408,	// (0x0003ae17) cell_vitu2_function_pane_ParamLimits

0xb408,	// (0x0003ae17) cell_vitu2_function_pane

0x255d,	// (0x00031f6c) bg_popup_call_pane_cp08_ParamLimits

0x255d,	// (0x00031f6c) bg_popup_call_pane_cp08

0x2576,	// (0x00031f85) field_vitu2_entry_pane_g1

0x2582,	// (0x00031f91) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0003f358) field_vitu2_entry_pane_g

0x5714,	// (0x00035123) field_vitu2_entry_pane_t1_ParamLimits

0x5714,	// (0x00035123) field_vitu2_entry_pane_t1

0x5744,	// (0x00035153) field_vitu2_entry_pane_t2_ParamLimits

0x5744,	// (0x00035153) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0003f35f) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0003f35f) field_vitu2_entry_pane_t

0xb447,	// (0x0003ae56) bg_button_pane_cp010_ParamLimits

0xb447,	// (0x0003ae56) bg_button_pane_cp010

0xb455,	// (0x0003ae64) cell_vitu2_itu_pane_g1

0xb473,	// (0x0003ae82) cell_vitu2_itu_pane_t1_ParamLimits

0xb473,	// (0x0003ae82) cell_vitu2_itu_pane_t1

0x5761,	// (0x00035170) cell_vitu2_itu_pane_t2_ParamLimits

0x5761,	// (0x00035170) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0003f369) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0003f369) cell_vitu2_itu_pane_t

0xf0e1,	// (0x0003eaf0) bg_button_pane_cp011

0xb4c5,	// (0x0003aed4) cell_vitu2_function_pane_g1

0xda84,	// (0x0003d493) main_myfav_hc_pane

0xaf4e,	// (0x0003a95d) popup_image3_note_pane_ParamLimits

0xaf4e,	// (0x0003a95d) popup_image3_note_pane

0xaf5c,	// (0x0003a96b) popup_image3_tool_bar_pane_ParamLimits

0xaf5c,	// (0x0003a96b) popup_image3_tool_bar_pane

0x57cf,	// (0x000351de) cell_vitu2_itu_pane_t3_ParamLimits

0x57cf,	// (0x000351de) cell_vitu2_itu_pane_t3

0xda84,	// (0x0003d493) bg_popup_trans_pane

0x25fe,	// (0x0003200d) grid_image3_tool_bar_pane

0x2608,	// (0x00032017) bg_popup_trans_pane_g1

0xe62d,	// (0x0003e03c) bg_popup_trans_pane_g2

0x2610,	// (0x0003201f) bg_popup_trans_pane_g3

0x2618,	// (0x00032027) bg_popup_trans_pane_g4

0x2620,	// (0x0003202f) bg_popup_trans_pane_g5

0x2628,	// (0x00032037) bg_popup_trans_pane_g6

0x2630,	// (0x0003203f) bg_popup_trans_pane_g7

0x2638,	// (0x00032047) bg_popup_trans_pane_g8

0xe60d,	// (0x0003e01c) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0003f370) bg_popup_trans_pane_g

0x2640,	// (0x0003204f) cell_image3_tool_bar_pane_ParamLimits

0x2640,	// (0x0003204f) cell_image3_tool_bar_pane

0x184a,	// (0x00031259) cell_image3_tool_bar_pane_g1

0xda84,	// (0x0003d493) bg_popup_trans_pane_cp1

0x2654,	// (0x00032063) popup_image3_note_pane_t1

0x2662,	// (0x00032071) popup_image3_note_pane_t2

0x2670,	// (0x0003207f) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0003f383) popup_image3_note_pane_t

0x267e,	// (0x0003208d) popup_image3_note_pane_t3_copy1

0xb4d9,	// (0x0003aee8) bg_myfav_hc_instruction_pane_ParamLimits

0xb4d9,	// (0x0003aee8) bg_myfav_hc_instruction_pane

0xb4f1,	// (0x0003af00) cell_myfav_contact_pane_ParamLimits

0xb4f1,	// (0x0003af00) cell_myfav_contact_pane

0xb50b,	// (0x0003af1a) cell_myfav_contact_pane_cp1_ParamLimits

0xb50b,	// (0x0003af1a) cell_myfav_contact_pane_cp1

0xb523,	// (0x0003af32) cell_myfav_contact_pane_cp2_ParamLimits

0xb523,	// (0x0003af32) cell_myfav_contact_pane_cp2

0xb53b,	// (0x0003af4a) cell_myfav_contact_pane_cp3_ParamLimits

0xb53b,	// (0x0003af4a) cell_myfav_contact_pane_cp3

0xb552,	// (0x0003af61) cell_myfav_contact_pane_cp4_ParamLimits

0xb552,	// (0x0003af61) cell_myfav_contact_pane_cp4

0xb568,	// (0x0003af77) cell_myfav_contact_pane_cp5_ParamLimits

0xb568,	// (0x0003af77) cell_myfav_contact_pane_cp5

0xb57c,	// (0x0003af8b) cell_myfav_contact_pane_cp6_ParamLimits

0xb57c,	// (0x0003af8b) cell_myfav_contact_pane_cp6

0xb590,	// (0x0003af9f) cell_myfav_contact_pane_cp7_ParamLimits

0xb590,	// (0x0003af9f) cell_myfav_contact_pane_cp7

0x268c,	// (0x0003209b) listscroll_gen_pane_cp05

0xb5a8,	// (0x0003afb7) main_myfav_hc_pane_g1_ParamLimits

0xb5a8,	// (0x0003afb7) main_myfav_hc_pane_g1

0xb5be,	// (0x0003afcd) main_myfav_hc_pane_g2_ParamLimits

0xb5be,	// (0x0003afcd) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0003f38a) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0003f38a) main_myfav_hc_pane_g

0xb5ec,	// (0x0003affb) main_myfav_hc_pane_t1_ParamLimits

0xb5ec,	// (0x0003affb) main_myfav_hc_pane_t1

0x2695,	// (0x000320a4) main_myfav_hc_pane_t2_ParamLimits

0x2695,	// (0x000320a4) main_myfav_hc_pane_t2

0x26a7,	// (0x000320b6) main_myfav_hc_pane_t3_ParamLimits

0x26a7,	// (0x000320b6) main_myfav_hc_pane_t3

0xb603,	// (0x0003b012) main_myfav_hc_pane_t4_ParamLimits

0xb603,	// (0x0003b012) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0003f391) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0003f391) main_myfav_hc_pane_t

0x184a,	// (0x00031259) bg_myfav_hc_instruction_pane_g1

0x26b9,	// (0x000320c8) cell_myfav_contact_pane_g1_ParamLimits

0x26b9,	// (0x000320c8) cell_myfav_contact_pane_g1

0x26b9,	// (0x000320c8) cell_myfav_contact_pane_g2_ParamLimits

0x26b9,	// (0x000320c8) cell_myfav_contact_pane_g2

0x26c5,	// (0x000320d4) cell_myfav_contact_pane_g3_ParamLimits

0x26c5,	// (0x000320d4) cell_myfav_contact_pane_g3

0x1b27,	// (0x00031536) cell_myfav_contact_pane_g4_ParamLimits

0x1b27,	// (0x00031536) cell_myfav_contact_pane_g4

0x26d2,	// (0x000320e1) cell_myfav_contact_pane_g5_ParamLimits

0x26d2,	// (0x000320e1) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0003f39c) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0003f39c) cell_myfav_contact_pane_g

0xb5d4,	// (0x0003afe3) main_myfav_hc_pane_g3_ParamLimits

0xb5d4,	// (0x0003afe3) main_myfav_hc_pane_g3

0x6640,	// (0x0003604f) popup_adpt_find_window

0xb62d,	// (0x0003b03c) afind_page_pane_ParamLimits

0xb62d,	// (0x0003b03c) afind_page_pane

0xb63a,	// (0x0003b049) aid_size_cell_afind_ParamLimits

0xb63a,	// (0x0003b049) aid_size_cell_afind

0xb654,	// (0x0003b063) bg_popup_sub_pane_cp09_ParamLimits

0xb654,	// (0x0003b063) bg_popup_sub_pane_cp09

0xb661,	// (0x0003b070) find_pane_cp01_ParamLimits

0xb661,	// (0x0003b070) find_pane_cp01

0x26de,	// (0x000320ed) grid_afind_control_pane_ParamLimits

0x26de,	// (0x000320ed) grid_afind_control_pane

0xb66e,	// (0x0003b07d) grid_afind_pane_ParamLimits

0xb66e,	// (0x0003b07d) grid_afind_pane

0xb68a,	// (0x0003b099) cell_afind_pane_ParamLimits

0xb68a,	// (0x0003b099) cell_afind_pane

0x184a,	// (0x00031259) afind_page_pane_g1

0xb6d0,	// (0x0003b0df) afind_page_pane_g2

0xb6d9,	// (0x0003b0e8) afind_page_pane_g3

0x0002,

0xf998,	// (0x0003f3a7) afind_page_pane_g

0xb6e2,	// (0x0003b0f1) afind_page_pane_t1

0x26f2,	// (0x00032101) cell_afind_grid_control_pane_ParamLimits

0x26f2,	// (0x00032101) cell_afind_grid_control_pane

0x2395,	// (0x00031da4) bg_button_pane_cp69_ParamLimits

0x2395,	// (0x00031da4) bg_button_pane_cp69

0xb702,	// (0x0003b111) cell_afind_pane_g1_ParamLimits

0xb702,	// (0x0003b111) cell_afind_pane_g1

0xb70f,	// (0x0003b11e) cell_afind_pane_t1_ParamLimits

0xb70f,	// (0x0003b11e) cell_afind_pane_t1

0xe420,	// (0x0003de2f) bg_button_pane_cp72

0x2701,	// (0x00032110) cell_afind_grid_control_pane_g1

0x8de9,	// (0x000387f8) aid_image_placing_area_ParamLimits

0x8de9,	// (0x000387f8) aid_image_placing_area

0x1e20,	// (0x0003182f) field_vitu_entry_pane_g1_ParamLimits

0x1e20,	// (0x0003182f) field_vitu_entry_pane_g1

0x1e2c,	// (0x0003183b) field_vitu_entry_pane_g2_ParamLimits

0x1e2c,	// (0x0003183b) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0003f258) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0003f258) field_vitu_entry_pane_g

0xa8ab,	// (0x0003a2ba) cell_vitu_itu_pane_g1_ParamLimits

0xa8ed,	// (0x0003a2fc) cell_vitu_itu_pane_t3_ParamLimits

0xa8ed,	// (0x0003a2fc) cell_vitu_itu_pane_t3

0x233b,	// (0x00031d4a) mp4_progress_pane_t1_ParamLimits

0x2354,	// (0x00031d63) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0003f2ed) mp4_progress_pane_t_ParamLimits

0x236d,	// (0x00031d7c) mup_progress_pane_cp04_ParamLimits

0xb617,	// (0x0003b026) main_myfav_hc_pane_t5_ParamLimits

0xb617,	// (0x0003b026) main_myfav_hc_pane_t5

0xdaa2,	// (0x0003d4b1) aid_zoom_text_primary

0x6640,	// (0x0003604f) popup_adpt_find_window_ParamLimits

0xf0e1,	// (0x0003eaf0) main_cam_set_pane

0xb0ac,	// (0x0003aabb) cam4_zoom_pane_ParamLimits

0xb0ac,	// (0x0003aabb) cam4_zoom_pane

0xb721,	// (0x0003b130) main_cam_set_pane_g1_ParamLimits

0xb721,	// (0x0003b130) main_cam_set_pane_g1

0xb72f,	// (0x0003b13e) main_cam_set_pane_g2_ParamLimits

0xb72f,	// (0x0003b13e) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0003f3ae) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0003f3ae) main_cam_set_pane_g

0xb73b,	// (0x0003b14a) main_cam_set_pane_t1_ParamLimits

0xb73b,	// (0x0003b14a) main_cam_set_pane_t1

0xb757,	// (0x0003b166) main_cset_listscroll_pane_ParamLimits

0xb757,	// (0x0003b166) main_cset_listscroll_pane

0xb782,	// (0x0003b191) main_cset_slider_pane_ParamLimits

0xb782,	// (0x0003b191) main_cset_slider_pane

0x2712,	// (0x00032121) main_cset_list_pane_ParamLimits

0x2712,	// (0x00032121) main_cset_list_pane

0x2722,	// (0x00032131) scroll_pane_cp028

0xb7a1,	// (0x0003b1b0) aid_area_touch_slider

0xb7bd,	// (0x0003b1cc) cset_slider_pane

0xb7e7,	// (0x0003b1f6) main_cset_slider_pane_g1

0xb7fc,	// (0x0003b20b) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0003f3b3) main_cset_slider_pane_g

0x275b,	// (0x0003216a) main_cset_slider_pane_t1

0xb8be,	// (0x0003b2cd) main_cset_slider_pane_t2

0xb8d8,	// (0x0003b2e7) main_cset_slider_pane_t3

0xb8f2,	// (0x0003b301) main_cset_slider_pane_t4

0xb90c,	// (0x0003b31b) main_cset_slider_pane_t5

0xb92a,	// (0x0003b339) main_cset_slider_pane_t6

0xb941,	// (0x0003b350) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0003f3d8) main_cset_slider_pane_t

0xba4d,	// (0x0003b45c) cset_list_set_pane_ParamLimits

0xba4d,	// (0x0003b45c) cset_list_set_pane

0xba63,	// (0x0003b472) aid_position_infowindow_above

0xba6b,	// (0x0003b47a) aid_position_infowindow_below

0x581c,	// (0x0003522b) cset_list_set_pane_g1_ParamLimits

0x581c,	// (0x0003522b) cset_list_set_pane_g1

0x5828,	// (0x00035237) cset_list_set_pane_g3_ParamLimits

0x5828,	// (0x00035237) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0003f3f7) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0003f3f7) cset_list_set_pane_g

0x5837,	// (0x00035246) cset_list_set_pane_t1_ParamLimits

0x5837,	// (0x00035246) cset_list_set_pane_t1

0xf0e1,	// (0x0003eaf0) list_highlight_pane_cp021_ParamLimits

0xf0e1,	// (0x0003eaf0) list_highlight_pane_cp021

0xee4e,	// (0x0003e85d) cset_slider_pane_g1

0xee60,	// (0x0003e86f) cset_slider_pane_g2

0xee57,	// (0x0003e866) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0003f3fc) cset_slider_pane_g

0xba73,	// (0x0003b482) aid_area_touch_cam4_zoom

0xba7b,	// (0x0003b48a) cam4_zoom_cont_pane

0xba83,	// (0x0003b492) cam4_zoom_pane_g1

0xba8b,	// (0x0003b49a) cam4_zoom_pane_g2

0xba93,	// (0x0003b4a2) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0003f403) cam4_zoom_pane_g

0x31e7,	// (0x00032bf6) cam4_zoom_cont_pane_g1

0x31f0,	// (0x00032bff) cam4_zoom_cont_pane_g2

0x31f9,	// (0x00032c08) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0003f40a) cam4_zoom_cont_pane_g

0xafa5,	// (0x0003a9b4) call4_image_pane_ParamLimits

0xafa5,	// (0x0003a9b4) call4_image_pane

0x23d3,	// (0x00031de2) call4_windows_conf_pane_ParamLimits

0x2414,	// (0x00031e23) popup_call4_audio_in_window_ParamLimits

0x2414,	// (0x00031e23) popup_call4_audio_in_window

0xda84,	// (0x0003d493) bg_popup_call2_act_pane_cp02

0x248a,	// (0x00031e99) call4_list_conf_pane

0x184a,	// (0x00031259) call4_image_pane_g1

0x184a,	// (0x00031259) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0003f11e) call4_image_pane_g

0x285a,	// (0x00032269) list_single_graphic_popup_conf4_pane_ParamLimits

0x285a,	// (0x00032269) list_single_graphic_popup_conf4_pane

0xda84,	// (0x0003d493) list_highlight_pane_cp022

0x286d,	// (0x0003227c) list_single_graphic_popup_conf4_pane_g1

0xeb2d,	// (0x0003e53c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0003f411) list_single_graphic_popup_conf4_pane_g

0x2875,	// (0x00032284) list_single_graphic_popup_conf4_pane_t1

0x7529,	// (0x00036f38) popup_vtel_slider_window_ParamLimits

0x7529,	// (0x00036f38) popup_vtel_slider_window

0x2383,	// (0x00031d92) dialer2_ne_pane_t2_ParamLimits

0x2383,	// (0x00031d92) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0003f2f2) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0003f2f2) dialer2_ne_pane_t

0xf0e1,	// (0x0003eaf0) bg_popup_sub_pane_cp010_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_popup_sub_pane_cp010

0xba9b,	// (0x0003b4aa) popup_vtel_slider_window_g1_ParamLimits

0xba9b,	// (0x0003b4aa) popup_vtel_slider_window_g1

0xbaa7,	// (0x0003b4b6) popup_vtel_slider_window_g2_ParamLimits

0xbaa7,	// (0x0003b4b6) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0003f416) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0003f416) popup_vtel_slider_window_g

0xbaef,	// (0x0003b4fe) vtel_slider_pane_ParamLimits

0xbaef,	// (0x0003b4fe) vtel_slider_pane

0xbafe,	// (0x0003b50d) vtel_slider_pane_g1_ParamLimits

0xbafe,	// (0x0003b50d) vtel_slider_pane_g1

0xbb0b,	// (0x0003b51a) vtel_slider_pane_g2_ParamLimits

0xbb0b,	// (0x0003b51a) vtel_slider_pane_g2

0xbb18,	// (0x0003b527) vtel_slider_pane_g3_ParamLimits

0xbb18,	// (0x0003b527) vtel_slider_pane_g3

0xbafe,	// (0x0003b50d) vtel_slider_pane_g4_ParamLimits

0xbafe,	// (0x0003b50d) vtel_slider_pane_g4

0xbb25,	// (0x0003b534) vtel_slider_pane_g5_ParamLimits

0xbb25,	// (0x0003b534) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0003f41f) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0003f41f) vtel_slider_pane_g

0xda84,	// (0x0003d493) main_gallery2_pane

0xb2f9,	// (0x0003ad08) aid_size_row_itut2_dropdow_list_ParamLimits

0xb2f9,	// (0x0003ad08) aid_size_row_itut2_dropdow_list

0xb359,	// (0x0003ad68) grid_vitu2_function_top_pane_ParamLimits

0xb359,	// (0x0003ad68) grid_vitu2_function_top_pane

0xb3af,	// (0x0003adbe) popup_vitu2_dropdown_list_window_ParamLimits

0xb3af,	// (0x0003adbe) popup_vitu2_dropdown_list_window

0xb3cf,	// (0x0003adde) popup_vitu2_match_list_window

0xbb32,	// (0x0003b541) cell_vitu2_function_top_pane_ParamLimits

0xbb32,	// (0x0003b541) cell_vitu2_function_top_pane

0xbb52,	// (0x0003b561) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbb52,	// (0x0003b561) cell_vitu2_function_top_pane_cp01

0xbb70,	// (0x0003b57f) cell_vitu2_function_top_wide_pane_ParamLimits

0xbb70,	// (0x0003b57f) cell_vitu2_function_top_wide_pane

0xf0e1,	// (0x0003eaf0) bg_button_pane_cp012

0xbb8e,	// (0x0003b59d) cell_vitu2_function_top_pane_g1

0xbb9d,	// (0x0003b5ac) bg_button_pane_cp013_ParamLimits

0xbb9d,	// (0x0003b5ac) bg_button_pane_cp013

0xbbb9,	// (0x0003b5c8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbbb9,	// (0x0003b5c8) cell_vitu2_function_top_wide_pane_g1

0x6724,	// (0x00036133) bg_popup_sub_pane_cp20

0xbbd1,	// (0x0003b5e0) list_vitu2_match_list_pane

0x2608,	// (0x00032017) bg_popup_sub_pane_cp20_g1

0x2610,	// (0x0003201f) bg_popup_sub_pane_cp20_g2

0xe62d,	// (0x0003e03c) bg_popup_sub_pane_cp20_g3

0x2618,	// (0x00032027) bg_popup_sub_pane_cp20_g4

0xe60d,	// (0x0003e01c) bg_popup_sub_pane_cp20_g5

0x28ad,	// (0x000322bc) bg_popup_sub_pane_cp20_g6

0x2628,	// (0x00032037) bg_popup_sub_pane_cp20_g7

0x2630,	// (0x0003203f) bg_popup_sub_pane_cp20_g8

0x2638,	// (0x00032047) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0003f42a) bg_popup_sub_pane_cp20_g

0xbbe9,	// (0x0003b5f8) list_vitu2_match_list_item_pane_ParamLimits

0xbbe9,	// (0x0003b5f8) list_vitu2_match_list_item_pane

0xbbfb,	// (0x0003b60a) list_vitu2_match_list_item_pane_t1

0xda84,	// (0x0003d493) bg_popup_sub_pane_cp21

0xea55,	// (0x0003e464) grid_vitu2_dropdown_list_pane

0xbc09,	// (0x0003b618) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbc09,	// (0x0003b618) cell_vitu2_dropdown_list_char_pane

0xbc2a,	// (0x0003b639) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbc2a,	// (0x0003b639) cell_vitu2_dropdown_list_ctrl_pane

0x2907,	// (0x00032316) cell_vitu2_dropdown_list_char_pane_g1

0x28fe,	// (0x0003230d) cell_vitu2_dropdown_list_char_pane_g2

0x28f5,	// (0x00032304) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0003f447) cell_vitu2_dropdown_list_char_pane_g

0xbc56,	// (0x0003b665) cell_vitu2_dropdown_list_char_pane_t1

0xbc64,	// (0x0003b673) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbc64,	// (0x0003b673) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbc74,	// (0x0003b683) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbc74,	// (0x0003b683) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbc85,	// (0x0003b694) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbc85,	// (0x0003b694) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbc95,	// (0x0003b6a4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbc95,	// (0x0003b6a4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1ab6,	// (0x000314c5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1ab6,	// (0x000314c5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0003f44e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0003f44e) cell_vitu2_dropdown_list_ctrl_pane_g

0xbcb1,	// (0x0003b6c0) aid_size_cell_gallery2_ParamLimits

0xbcb1,	// (0x0003b6c0) aid_size_cell_gallery2

0xbcbf,	// (0x0003b6ce) grid_gallery2_pane_ParamLimits

0xbcbf,	// (0x0003b6ce) grid_gallery2_pane

0xbcce,	// (0x0003b6dd) scroll_pane_cp029_ParamLimits

0xbcce,	// (0x0003b6dd) scroll_pane_cp029

0xbcda,	// (0x0003b6e9) cell_gallery2_pane_ParamLimits

0xbcda,	// (0x0003b6e9) cell_gallery2_pane

0x2910,	// (0x0003231f) cell_gallery2_pane_g2

0x3fdc,	// (0x000339eb) cell_gallery2_pane_g3

0x291a,	// (0x00032329) cell_gallery2_pane_g4

0x2922,	// (0x00032331) cell_gallery2_pane_g5

0xed18,	// (0x0003e727) grid_highlight_pane_cp10

0xb3cf,	// (0x0003adde) popup_vitu2_match_list_window_ParamLimits

0xb3e3,	// (0x0003adf2) popup_vitu2_query_window_ParamLimits

0xb3e3,	// (0x0003adf2) popup_vitu2_query_window

0xda84,	// (0x0003d493) bg_vitu2_candi_button_pane

0x2907,	// (0x00032316) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x28fe,	// (0x0003230d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x28f5,	// (0x00032304) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x58a1,	// (0x000352b0) bg_button_pane_cp015

0xbd08,	// (0x0003b717) bg_button_pane_cp016

0xbd12,	// (0x0003b721) bg_button_pane_cp017

0xf0e1,	// (0x0003eaf0) bg_popup_sub_pane_cp22

0x292a,	// (0x00032339) popup_vitu2_query_window_g1

0x58b8,	// (0x000352c7) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0003f459) popup_vitu2_query_window_g

0x58c6,	// (0x000352d5) popup_vitu2_query_window_t1_ParamLimits

0x58c6,	// (0x000352d5) popup_vitu2_query_window_t1

0x58ee,	// (0x000352fd) popup_vitu2_query_window_t2_ParamLimits

0x58ee,	// (0x000352fd) popup_vitu2_query_window_t2

0x5900,	// (0x0003530f) popup_vitu2_query_window_t3_ParamLimits

0x5900,	// (0x0003530f) popup_vitu2_query_window_t3

0xbd2d,	// (0x0003b73c) popup_vitu2_query_window_t4_ParamLimits

0xbd2d,	// (0x0003b73c) popup_vitu2_query_window_t4

0xbd41,	// (0x0003b750) popup_vitu2_query_window_t5_ParamLimits

0xbd41,	// (0x0003b750) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0003f45e) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0003f45e) popup_vitu2_query_window_t

0x270a,	// (0x00032119) main_cset_text_pane

0xb7a1,	// (0x0003b1b0) aid_area_touch_slider_ParamLimits

0xb7bd,	// (0x0003b1cc) cset_slider_pane_ParamLimits

0xb7e7,	// (0x0003b1f6) main_cset_slider_pane_g1_ParamLimits

0xb7fc,	// (0x0003b20b) main_cset_slider_pane_g2_ParamLimits

0x272b,	// (0x0003213a) main_cset_slider_pane_g3_ParamLimits

0x272b,	// (0x0003213a) main_cset_slider_pane_g3

0xb811,	// (0x0003b220) main_cset_slider_pane_g4_ParamLimits

0xb811,	// (0x0003b220) main_cset_slider_pane_g4

0xb820,	// (0x0003b22f) main_cset_slider_pane_g5_ParamLimits

0xb820,	// (0x0003b22f) main_cset_slider_pane_g5

0xb82e,	// (0x0003b23d) main_cset_slider_pane_g6_ParamLimits

0xb82e,	// (0x0003b23d) main_cset_slider_pane_g6

0xf9a4,	// (0x0003f3b3) main_cset_slider_pane_g_ParamLimits

0x275b,	// (0x0003216a) main_cset_slider_pane_t1_ParamLimits

0xb8be,	// (0x0003b2cd) main_cset_slider_pane_t2_ParamLimits

0xb8d8,	// (0x0003b2e7) main_cset_slider_pane_t3_ParamLimits

0xb8f2,	// (0x0003b301) main_cset_slider_pane_t4_ParamLimits

0xb90c,	// (0x0003b31b) main_cset_slider_pane_t5_ParamLimits

0xb92a,	// (0x0003b339) main_cset_slider_pane_t6_ParamLimits

0xb941,	// (0x0003b350) main_cset_slider_pane_t7_ParamLimits

0xb96f,	// (0x0003b37e) main_cset_slider_pane_t8_ParamLimits

0xb96f,	// (0x0003b37e) main_cset_slider_pane_t8

0xb997,	// (0x0003b3a6) main_cset_slider_pane_t9_ParamLimits

0xb997,	// (0x0003b3a6) main_cset_slider_pane_t9

0xb9bf,	// (0x0003b3ce) main_cset_slider_pane_t10_ParamLimits

0xb9bf,	// (0x0003b3ce) main_cset_slider_pane_t10

0xb9e7,	// (0x0003b3f6) main_cset_slider_pane_t11_ParamLimits

0xb9e7,	// (0x0003b3f6) main_cset_slider_pane_t11

0xba11,	// (0x0003b420) main_cset_slider_pane_t12_ParamLimits

0xba11,	// (0x0003b420) main_cset_slider_pane_t12

0xba2e,	// (0x0003b43d) main_cset_slider_pane_t13_ParamLimits

0xba2e,	// (0x0003b43d) main_cset_slider_pane_t13

0xf9c9,	// (0x0003f3d8) main_cset_slider_pane_t_ParamLimits

0xda84,	// (0x0003d493) bg_popup_sub_pane_cp011

0x2936,	// (0x00032345) main_cset_text_pane_g1

0x293e,	// (0x0003234d) main_cset_text_pane_t1

0x294c,	// (0x0003235b) main_cset_text_pane_t2

0x295a,	// (0x00032369) main_cset_text_pane_t3

0x2968,	// (0x00032377) main_cset_text_pane_t4

0x2976,	// (0x00032385) main_cset_text_pane_t5

0x2984,	// (0x00032393) main_cset_text_pane_t6

0x2992,	// (0x000323a1) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0003f469) main_cset_text_pane_t

0xda84,	// (0x0003d493) main_cam4_burst_pane

0xda84,	// (0x0003d493) main_cam5_pane

0xb6f0,	// (0x0003b0ff) bg_button_pane_cp019

0xb6f9,	// (0x0003b108) bg_button_pane_cp020

0x2737,	// (0x00032146) main_cset_slider_pane_g7_ParamLimits

0x2737,	// (0x00032146) main_cset_slider_pane_g7

0x2743,	// (0x00032152) main_cset_slider_pane_g8_ParamLimits

0x2743,	// (0x00032152) main_cset_slider_pane_g8

0xb842,	// (0x0003b251) main_cset_slider_pane_g9_ParamLimits

0xb842,	// (0x0003b251) main_cset_slider_pane_g9

0xb84e,	// (0x0003b25d) main_cset_slider_pane_g10_ParamLimits

0xb84e,	// (0x0003b25d) main_cset_slider_pane_g10

0xb85a,	// (0x0003b269) main_cset_slider_pane_g11_ParamLimits

0xb85a,	// (0x0003b269) main_cset_slider_pane_g11

0xb866,	// (0x0003b275) main_cset_slider_pane_g12_ParamLimits

0xb866,	// (0x0003b275) main_cset_slider_pane_g12

0xb872,	// (0x0003b281) main_cset_slider_pane_g13_ParamLimits

0xb872,	// (0x0003b281) main_cset_slider_pane_g13

0xb87e,	// (0x0003b28d) main_cset_slider_pane_g14_ParamLimits

0xb87e,	// (0x0003b28d) main_cset_slider_pane_g14

0xb88a,	// (0x0003b299) main_cset_slider_pane_g15_ParamLimits

0xb88a,	// (0x0003b299) main_cset_slider_pane_g15

0x2789,	// (0x00032198) main_cset_slider_pane_t14_ParamLimits

0x2789,	// (0x00032198) main_cset_slider_pane_t14

0x27c2,	// (0x000321d1) main_cset_slider_pane_t15_ParamLimits

0x27c2,	// (0x000321d1) main_cset_slider_pane_t15

0xbd55,	// (0x0003b764) aid_cam4_burst_size_cell_ParamLimits

0xbd55,	// (0x0003b764) aid_cam4_burst_size_cell

0xbd71,	// (0x0003b780) grid_cam4_burst_pane_ParamLimits

0xbd71,	// (0x0003b780) grid_cam4_burst_pane

0xbda1,	// (0x0003b7b0) linegrid_cam4_burst_pane_ParamLimits

0xbda1,	// (0x0003b7b0) linegrid_cam4_burst_pane

0xbdc1,	// (0x0003b7d0) scroll_pane_cp30_ParamLimits

0xbdc1,	// (0x0003b7d0) scroll_pane_cp30

0xbdcd,	// (0x0003b7dc) cell_cam4_burst_pane_ParamLimits

0xbdcd,	// (0x0003b7dc) cell_cam4_burst_pane

0x29a0,	// (0x000323af) linegrid_cam4_burst_pane_g1_ParamLimits

0x29a0,	// (0x000323af) linegrid_cam4_burst_pane_g1

0xbe09,	// (0x0003b818) linegrid_cam4_burst_pane_g2_ParamLimits

0xbe09,	// (0x0003b818) linegrid_cam4_burst_pane_g2

0x29ad,	// (0x000323bc) linegrid_cam4_burst_pane_g3_ParamLimits

0x29ad,	// (0x000323bc) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0003f478) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0003f478) linegrid_cam4_burst_pane_g

0xbe1a,	// (0x0003b829) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbe1a,	// (0x0003b829) linegrid_cam4_burst_pane_g3_copy1

0x29ba,	// (0x000323c9) linegrid_cam4_burst_pane_g4_ParamLimits

0x29ba,	// (0x000323c9) linegrid_cam4_burst_pane_g4

0xbe34,	// (0x0003b843) linegrid_cam4_burst_pane_g5_ParamLimits

0xbe34,	// (0x0003b843) linegrid_cam4_burst_pane_g5

0xbe45,	// (0x0003b854) linegrid_cam4_burst_pane_g6_ParamLimits

0xbe45,	// (0x0003b854) linegrid_cam4_burst_pane_g6

0x29c7,	// (0x000323d6) linegrid_cam4_burst_pane_g7_ParamLimits

0x29c7,	// (0x000323d6) linegrid_cam4_burst_pane_g7

0xbe56,	// (0x0003b865) cell_cam4_burst_pane_g1

0x29e0,	// (0x000323ef) main_cam5_pane_t1_ParamLimits

0x29e0,	// (0x000323ef) main_cam5_pane_t1

0x29f2,	// (0x00032401) main_cam5_pane_t2_ParamLimits

0x29f2,	// (0x00032401) main_cam5_pane_t2

0x2a04,	// (0x00032413) main_cam5_pane_t3_ParamLimits

0x2a04,	// (0x00032413) main_cam5_pane_t3

0x2a16,	// (0x00032425) main_cam5_pane_t4_ParamLimits

0x2a16,	// (0x00032425) main_cam5_pane_t4

0x2a2e,	// (0x0003243d) main_cam5_pane_t5_ParamLimits

0x2a2e,	// (0x0003243d) main_cam5_pane_t5

0x2a42,	// (0x00032451) main_cam5_pane_t6_ParamLimits

0x2a42,	// (0x00032451) main_cam5_pane_t6

0x2a56,	// (0x00032465) main_cam5_pane_t7_ParamLimits

0x2a56,	// (0x00032465) main_cam5_pane_t7

0x2a68,	// (0x00032477) main_cam5_pane_t8_ParamLimits

0x2a68,	// (0x00032477) main_cam5_pane_t8

0x2a84,	// (0x00032493) main_cam5_pane_t9_ParamLimits

0x2a84,	// (0x00032493) main_cam5_pane_t9

0x2a96,	// (0x000324a5) main_cam5_pane_t10_ParamLimits

0x2a96,	// (0x000324a5) main_cam5_pane_t10

0x2aa8,	// (0x000324b7) main_cam5_pane_t11_ParamLimits

0x2aa8,	// (0x000324b7) main_cam5_pane_t11

0x2aba,	// (0x000324c9) main_cam5_pane_t12_ParamLimits

0x2aba,	// (0x000324c9) main_cam5_pane_t12

0x2acf,	// (0x000324de) main_cam5_pane_t13_ParamLimits

0x2acf,	// (0x000324de) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0003f484) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0003f484) main_cam5_pane_t

0x66ed,	// (0x000360fc) popup_scut_keymap_window_ParamLimits

0x66ed,	// (0x000360fc) popup_scut_keymap_window

0xbe69,	// (0x0003b878) aid_size_cell_brow_shortcut

0xed18,	// (0x0003e727) bg_popup_window_pane_cp010

0xbe75,	// (0x0003b884) grid_scut_pane

0xbe81,	// (0x0003b890) cell_scut_pane_ParamLimits

0xbe81,	// (0x0003b890) cell_scut_pane

0xbe98,	// (0x0003b8a7) cell_scut_pane_g1

0x2aec,	// (0x000324fb) cell_scut_pane_t1

0x2afb,	// (0x0003250a) cell_scut_pane_t2

0xbea1,	// (0x0003b8b0) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0003f49f) cell_scut_pane_t

0x9f49,	// (0x00039958) main_mup3_pane_g8_ParamLimits

0x9f49,	// (0x00039958) main_mup3_pane_g8

0xb307,	// (0x0003ad16) area_vitu2_query_pane_ParamLimits

0xb307,	// (0x0003ad16) area_vitu2_query_pane

0x58ab,	// (0x000352ba) input_focus_pane_cp08

0x2b0a,	// (0x00032519) area_vitu2_query_pane_g1

0x5928,	// (0x00035337) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0003f4a6) area_vitu2_query_pane_g

0xbeaf,	// (0x0003b8be) area_vitu2_query_pane_t1_ParamLimits

0xbeaf,	// (0x0003b8be) area_vitu2_query_pane_t1

0xbec3,	// (0x0003b8d2) area_vitu2_query_pane_t2_ParamLimits

0xbec3,	// (0x0003b8d2) area_vitu2_query_pane_t2

0x5939,	// (0x00035348) area_vitu2_query_pane_t3_ParamLimits

0x5939,	// (0x00035348) area_vitu2_query_pane_t3

0x5961,	// (0x00035370) area_vitu2_query_pane_t4_ParamLimits

0x5961,	// (0x00035370) area_vitu2_query_pane_t4

0x5989,	// (0x00035398) area_vitu2_query_pane_t5_ParamLimits

0x5989,	// (0x00035398) area_vitu2_query_pane_t5

0x59b1,	// (0x000353c0) area_vitu2_query_pane_t6_ParamLimits

0x59b1,	// (0x000353c0) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0003f4ab) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0003f4ab) area_vitu2_query_pane_t

0xbed7,	// (0x0003b8e6) bg_button_pane_cp018

0xbee5,	// (0x0003b8f4) bg_button_pane_cp021

0x59fd,	// (0x0003540c) bg_button_pane_cp022

0x5a0e,	// (0x0003541d) input_focus_pane_cp09

0x84ef,	// (0x00037efe) aid_size_touch_mv_arrow_left

0x8518,	// (0x00037f27) aid_size_touch_mv_arrow_right

0xb8a2,	// (0x0003b2b1) main_cset_slider_pane_g16_ParamLimits

0xb8a2,	// (0x0003b2b1) main_cset_slider_pane_g16

0xb8b0,	// (0x0003b2bf) main_cset_slider_pane_g17_ParamLimits

0xb8b0,	// (0x0003b2bf) main_cset_slider_pane_g17

0xbe56,	// (0x0003b865) cell_cam4_burst_pane_g1_ParamLimits

0xda84,	// (0x0003d493) compa_mode_pane

0xbab3,	// (0x0003b4c2) popup_vtel_slider_window_g3_ParamLimits

0xbab3,	// (0x0003b4c2) popup_vtel_slider_window_g3

0xbac7,	// (0x0003b4d6) popup_vtel_slider_window_g4_ParamLimits

0xbac7,	// (0x0003b4d6) popup_vtel_slider_window_g4

0xbadb,	// (0x0003b4ea) popup_vtel_slider_window_t1_ParamLimits

0xbadb,	// (0x0003b4ea) popup_vtel_slider_window_t1

0xda84,	// (0x0003d493) main_cl_pane

0x136c,	// (0x00030d7b) popup_imed_adjust2_window_ParamLimits

0x1344,	// (0x00030d53) bg_tb_trans_pane_cp05_ParamLimits

0x1d55,	// (0x00031764) popup_imed_adjust2_window_g1_ParamLimits

0x1d64,	// (0x00031773) popup_imed_adjust2_window_g2_ParamLimits

0x1d64,	// (0x00031773) popup_imed_adjust2_window_g2

0x1d70,	// (0x0003177f) popup_imed_adjust2_window_g3_ParamLimits

0x1d70,	// (0x0003177f) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0003f21c) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0003f21c) popup_imed_adjust2_window_g

0x1d7c,	// (0x0003178b) popup_imed_adjust2_window_t1_ParamLimits

0x1d94,	// (0x000317a3) slider_imed_adjust_pane_ParamLimits

0x1da8,	// (0x000317b7) slider_imed_adjust_pane_g1_ParamLimits

0x1db8,	// (0x000317c7) slider_imed_adjust_pane_g2_ParamLimits

0x1dc8,	// (0x000317d7) slider_imed_adjust_pane_g3_ParamLimits

0x1dd9,	// (0x000317e8) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0003f223) slider_imed_adjust_pane_g_ParamLimits

0xb061,	// (0x0003aa70) aid_touch_area_cam4_ParamLimits

0xb061,	// (0x0003aa70) aid_touch_area_cam4

0xb071,	// (0x0003aa80) battery_pane_cp01

0xb0ec,	// (0x0003aafb) main_camera4_pane_g6_ParamLimits

0xb0ec,	// (0x0003aafb) main_camera4_pane_g6

0xb10a,	// (0x0003ab19) main_camera4_pane_t2_ParamLimits

0xb10a,	// (0x0003ab19) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0003f326) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0003f326) main_camera4_pane_t

0xb191,	// (0x0003aba0) aid_touch_area_vid4_ParamLimits

0xb191,	// (0x0003aba0) aid_touch_area_vid4

0xb1d1,	// (0x0003abe0) main_video4_pane_g5_ParamLimits

0xb1d1,	// (0x0003abe0) main_video4_pane_g5

0xb1f3,	// (0x0003ac02) vid4_progress_pane_ParamLimits

0xb1f3,	// (0x0003ac02) vid4_progress_pane

0x274f,	// (0x0003215e) main_cset_slider_pane_g18_ParamLimits

0x274f,	// (0x0003215e) main_cset_slider_pane_g18

0x29d4,	// (0x000323e3) cell_cam4_burst_pane_g2_ParamLimits

0x29d4,	// (0x000323e3) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0003f47f) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0003f47f) cell_cam4_burst_pane_g

0xbef1,	// (0x0003b900) bg_cl_pane_ParamLimits

0xbef1,	// (0x0003b900) bg_cl_pane

0xbefd,	// (0x0003b90c) cl_header_pane_ParamLimits

0xbefd,	// (0x0003b90c) cl_header_pane

0xbf09,	// (0x0003b918) cl_listscroll_pane_ParamLimits

0xbf09,	// (0x0003b918) cl_listscroll_pane

0x2bb2,	// (0x000325c1) bg_cl_pane_g1

0x2bba,	// (0x000325c9) bg_cl_pane_g2

0x2bc2,	// (0x000325d1) bg_cl_pane_g3

0x2bca,	// (0x000325d9) bg_cl_pane_g4

0x2bd2,	// (0x000325e1) bg_cl_pane_g5

0x2bda,	// (0x000325e9) bg_cl_pane_g6

0x2be2,	// (0x000325f1) bg_cl_pane_g7

0x2bea,	// (0x000325f9) bg_cl_pane_g8

0x2bf2,	// (0x00032601) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0003f4ba) bg_cl_pane_g

0xbf15,	// (0x0003b924) aid_height_cl_leading_ParamLimits

0xbf15,	// (0x0003b924) aid_height_cl_leading

0xbf21,	// (0x0003b930) aid_height_cl_text_ParamLimits

0xbf21,	// (0x0003b930) aid_height_cl_text

0x6724,	// (0x00036133) bg_cl_header_pane_ParamLimits

0x6724,	// (0x00036133) bg_cl_header_pane

0xbf39,	// (0x0003b948) cl_header_pane_g1_ParamLimits

0xbf39,	// (0x0003b948) cl_header_pane_g1

0xbf46,	// (0x0003b955) cl_header_pane_t1_ParamLimits

0xbf46,	// (0x0003b955) cl_header_pane_t1

0x2bfa,	// (0x00032609) cl_list_pane

0x2722,	// (0x00032131) hc_scroll_pane_cp01

0xe60d,	// (0x0003e01c) bg_cl_header_pane_g1

0x2608,	// (0x00032017) bg_cl_header_pane_g2

0xe62d,	// (0x0003e03c) bg_cl_header_pane_g3

0x2618,	// (0x00032027) bg_cl_header_pane_g4

0x2610,	// (0x0003201f) bg_cl_header_pane_g5

0x28ad,	// (0x000322bc) bg_cl_header_pane_g6

0x2630,	// (0x0003203f) bg_cl_header_pane_g7

0x2638,	// (0x00032047) bg_cl_header_pane_g8

0x2628,	// (0x00032037) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0003f4cd) bg_cl_header_pane_g

0xbf58,	// (0x0003b967) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbf58,	// (0x0003b967) hc_cl_list_double_graphic_heading_pane

0xbf69,	// (0x0003b978) hc_cl_list_single_graphic_pane_ParamLimits

0xbf69,	// (0x0003b978) hc_cl_list_single_graphic_pane

0xbf82,	// (0x0003b991) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbf82,	// (0x0003b991) hc_cl_list_single_graphic_pane_g1

0xbf8e,	// (0x0003b99d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbf8e,	// (0x0003b99d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0003f4e0) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0003f4e0) hc_cl_list_single_graphic_pane_g

0xbfa2,	// (0x0003b9b1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbfa2,	// (0x0003b9b1) hc_cl_list_single_graphic_pane_t1

0xbf82,	// (0x0003b991) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbf82,	// (0x0003b991) hc_cl_list_double_graphic_heading_pane_g1

0xbfb7,	// (0x0003b9c6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbfb7,	// (0x0003b9c6) hc_cl_list_double_graphic_heading_pane_g2

0xbfcb,	// (0x0003b9da) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbfcb,	// (0x0003b9da) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0003f4e5) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0003f4e5) hc_cl_list_double_graphic_heading_pane_g

0xbfdf,	// (0x0003b9ee) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbfdf,	// (0x0003b9ee) hc_cl_list_double_graphic_heading_pane_t1

0xbff4,	// (0x0003ba03) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbff4,	// (0x0003ba03) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0003f4ec) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0003f4ec) hc_cl_list_double_graphic_heading_pane_t

0xc011,	// (0x0003ba20) vid4_progress_pane_g1

0xc021,	// (0x0003ba30) vid4_progress_pane_g2

0x8b3b,	// (0x0003854a) vid4_progress_pane_g3

0xc031,	// (0x0003ba40) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0003f4f1) vid4_progress_pane_g

0xc04f,	// (0x0003ba5e) vid4_progress_pane_t1

0xc064,	// (0x0003ba73) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0003f4fc) vid4_progress_pane_t

0xc08f,	// (0x0003ba9e) wait_bar_pane_cp07

0x163d,	// (0x0003104c) blid_firmament_pane_ParamLimits

0x1680,	// (0x0003108f) popup_blid_sat_info2_window_g1

0x16a4,	// (0x000310b3) popup_blid_sat_info2_window_t3

0x16b2,	// (0x000310c1) popup_blid_sat_info2_window_t4

0x16c0,	// (0x000310cf) popup_blid_sat_info2_window_t5

0x16ce,	// (0x000310dd) popup_blid_sat_info2_window_t6

0x16de,	// (0x000310ed) popup_blid_sat_info2_window_t7

0x16ec,	// (0x000310fb) popup_blid_sat_info2_window_t8

0x16fa,	// (0x00031109) popup_blid_sat_info2_window_t9

0x1708,	// (0x00031117) popup_blid_sat_info2_window_t10

0x17ca,	// (0x000311d9) aid_firma_cardinal_ParamLimits

0x17de,	// (0x000311ed) blid_firmament_pane_t1_ParamLimits

0x17f5,	// (0x00031204) blid_firmament_pane_t2_ParamLimits

0x180c,	// (0x0003121b) blid_firmament_pane_t3_ParamLimits

0x1823,	// (0x00031232) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0003f115) blid_firmament_pane_t_ParamLimits

0x183a,	// (0x00031249) blid_sat_info_pane_ParamLimits

0xf0e1,	// (0x0003eaf0) main_cam_set_pane_ParamLimits

0xa6ce,	// (0x0003a0dd) aid_size_cell_colour_35_ParamLimits

0xa6e8,	// (0x0003a0f7) aid_size_cell_colour_112_ParamLimits

0xa6ff,	// (0x0003a10e) aid_size_cell_effect_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_tb_trans_pane_cp02_ParamLimits

0xf0ef,	// (0x0003eafe) heading_imed_pane_ParamLimits

0xa719,	// (0x0003a128) listscroll_imed_pane_ParamLimits

0x0976,	// (0x00030385) popup_call2_audio_first_window_g5_ParamLimits

0x0976,	// (0x00030385) popup_call2_audio_first_window_g5

0xae1e,	// (0x0003a82d) aid_size_touch_image3_arrow_left_ParamLimits

0xae1e,	// (0x0003a82d) aid_size_touch_image3_arrow_left

0xae34,	// (0x0003a843) aid_size_touch_image3_arrow_right_ParamLimits

0xae34,	// (0x0003a843) aid_size_touch_image3_arrow_right

0xc07a,	// (0x0003ba89) vid4_progress_pane_t3

0xa9b6,	// (0x0003a3c5) main_hwr_training_symbol_option_pane_ParamLimits

0xa9b6,	// (0x0003a3c5) main_hwr_training_symbol_option_pane

0x2042,	// (0x00031a51) popup_hwr_training_preview_window_ParamLimits

0x2042,	// (0x00031a51) popup_hwr_training_preview_window

0xaa17,	// (0x0003a426) hwr_training_navi_pane_g5_ParamLimits

0xaa17,	// (0x0003a426) hwr_training_navi_pane_g5

0x25e8,	// (0x00031ff7) popup_char_count_window

0x6724,	// (0x00036133) bg_popup_sub_pane_cp20_ParamLimits

0xbbd1,	// (0x0003b5e0) list_vitu2_match_list_pane_ParamLimits

0xbbdd,	// (0x0003b5ec) vitu2_page_scroll_pane_ParamLimits

0xbbdd,	// (0x0003b5ec) vitu2_page_scroll_pane

0x2cf5,	// (0x00032704) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2cf5,	// (0x00032704) list_single_hwr_training_symbol_option_pane

0x2d08,	// (0x00032717) list_single_hwr_training_symbol_option_pane_g1

0x2d10,	// (0x0003271f) list_single_hwr_training_symbol_option_pane_t1

0x2d1e,	// (0x0003272d) bg_button_pane_cp023

0x2d27,	// (0x00032736) bg_button_pane_cp024

0xc0a1,	// (0x0003bab0) vitu2_page_scroll_pane_g1

0xc0a9,	// (0x0003bab8) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0003f503) vitu2_page_scroll_pane_g

0xc0b1,	// (0x0003bac0) vitu2_page_scroll_pane_t1

0x2d5a,	// (0x00032769) popup_char_count_window_g1

0x2d63,	// (0x00032772) popup_char_count_window_g2

0x2d6c,	// (0x0003277b) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0003f508) popup_char_count_window_g

0x2d75,	// (0x00032784) popup_char_count_window_t1

0xda84,	// (0x0003d493) main_vded2_pane

0x1d41,	// (0x00031750) aid_size_cell_imed_line

0x1d4b,	// (0x0003175a) grid_imed_line_width_pane

0xb25c,	// (0x0003ac6b) vid4_indicators_pane_g4

0x2d83,	// (0x00032792) cell_imed_line_width_pane_ParamLimits

0x2d83,	// (0x00032792) cell_imed_line_width_pane

0x2d97,	// (0x000327a6) cell_imed_line_width_pane_g1

0x15eb,	// (0x00030ffa) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0003f50f) cell_imed_line_width_pane_g

0xc0c0,	// (0x0003bacf) main_vded2_pane_g1_ParamLimits

0xc0c0,	// (0x0003bacf) main_vded2_pane_g1

0xc0cd,	// (0x0003badc) main_vded2_pane_g2_ParamLimits

0xc0cd,	// (0x0003badc) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0003f514) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0003f514) main_vded2_pane_g

0xc0db,	// (0x0003baea) vded2_slider_pane_ParamLimits

0xc0db,	// (0x0003baea) vded2_slider_pane

0xc0e8,	// (0x0003baf7) aid_size_touch_vded2_end

0xc0f2,	// (0x0003bb01) aid_size_touch_vded2_playhead

0x2da0,	// (0x000327af) aid_size_touch_vded2_start

0x2da8,	// (0x000327b7) vded2_slider_bg_pane

0x2db1,	// (0x000327c0) vded2_slider_pane_g1

0x2dba,	// (0x000327c9) vded2_slider_pane_g2

0xc0fa,	// (0x0003bb09) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0003f519) vded2_slider_pane_g

0x2dc2,	// (0x000327d1) vded2_slider_bg_pane_g1

0x2dcb,	// (0x000327da) vded2_slider_bg_pane_g2

0x2dd4,	// (0x000327e3) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0003f520) vded2_slider_bg_pane_g

0x8b53,	// (0x00038562) aid_postcard_touch_down_pane_ParamLimits

0x8b53,	// (0x00038562) aid_postcard_touch_down_pane

0x8b63,	// (0x00038572) aid_postcard_touch_up_pane_ParamLimits

0x8b63,	// (0x00038572) aid_postcard_touch_up_pane

0xda84,	// (0x0003d493) main_blid2_pane

0x1352,	// (0x00030d61) popup_blid2_search_window

0xda84,	// (0x0003d493) blid2_gps_pane

0xda84,	// (0x0003d493) blid2_navig_pane

0xda84,	// (0x0003d493) blid2_search_pane

0xda84,	// (0x0003d493) blid2_tripm_pane

0xc103,	// (0x0003bb12) blid2_search_pane_g1_ParamLimits

0xc103,	// (0x0003bb12) blid2_search_pane_g1

0xc113,	// (0x0003bb22) blid2_search_pane_t1_ParamLimits

0xc113,	// (0x0003bb22) blid2_search_pane_t1

0xc125,	// (0x0003bb34) aid_size_cell_blid2_gps_ParamLimits

0xc125,	// (0x0003bb34) aid_size_cell_blid2_gps

0xc135,	// (0x0003bb44) blid2_gps_pane_g1_ParamLimits

0xc135,	// (0x0003bb44) blid2_gps_pane_g1

0xc141,	// (0x0003bb50) grid_blid2_satellite_pane_ParamLimits

0xc141,	// (0x0003bb50) grid_blid2_satellite_pane

0xc151,	// (0x0003bb60) blid2_navig_pane_g1_ParamLimits

0xc151,	// (0x0003bb60) blid2_navig_pane_g1

0xc15d,	// (0x0003bb6c) blid2_navig_pane_t1_ParamLimits

0xc15d,	// (0x0003bb6c) blid2_navig_pane_t1

0xc16f,	// (0x0003bb7e) blid2_navig_pane_t2_ParamLimits

0xc16f,	// (0x0003bb7e) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0003f527) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0003f527) blid2_navig_pane_t

0xc181,	// (0x0003bb90) blid2_navig_ring_pane_ParamLimits

0xc181,	// (0x0003bb90) blid2_navig_ring_pane

0xc191,	// (0x0003bba0) blid2_speed_pane_ParamLimits

0xc191,	// (0x0003bba0) blid2_speed_pane

0xc19d,	// (0x0003bbac) blid2_tripm_pane_g1_ParamLimits

0xc19d,	// (0x0003bbac) blid2_tripm_pane_g1

0xc1ad,	// (0x0003bbbc) blid2_tripm_pane_g2_ParamLimits

0xc1ad,	// (0x0003bbbc) blid2_tripm_pane_g2

0xc1b9,	// (0x0003bbc8) blid2_tripm_pane_g3_ParamLimits

0xc1b9,	// (0x0003bbc8) blid2_tripm_pane_g3

0xc1c5,	// (0x0003bbd4) blid2_tripm_pane_g4_ParamLimits

0xc1c5,	// (0x0003bbd4) blid2_tripm_pane_g4

0xc1d1,	// (0x0003bbe0) blid2_tripm_pane_g5_ParamLimits

0xc1d1,	// (0x0003bbe0) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0003f52c) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0003f52c) blid2_tripm_pane_g

0xc1ed,	// (0x0003bbfc) blid2_tripm_pane_t1_ParamLimits

0xc1ed,	// (0x0003bbfc) blid2_tripm_pane_t1

0xc201,	// (0x0003bc10) blid2_tripm_pane_t2_ParamLimits

0xc201,	// (0x0003bc10) blid2_tripm_pane_t2

0xc213,	// (0x0003bc22) blid2_tripm_pane_t3_ParamLimits

0xc213,	// (0x0003bc22) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0003f539) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0003f539) blid2_tripm_pane_t

0xc245,	// (0x0003bc54) cell_blid2_satellite_pane_ParamLimits

0xc245,	// (0x0003bc54) cell_blid2_satellite_pane

0xc25f,	// (0x0003bc6e) cell_blid2_satellite_pane_g1

0x2ddd,	// (0x000327ec) cell_blid2_satellite_pane_t1

0x184a,	// (0x00031259) blid2_speed_pane_g1

0x2deb,	// (0x000327fa) blid2_speed_pane_t1

0x2df9,	// (0x00032808) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0003f542) blid2_speed_pane_t

0x184a,	// (0x00031259) blid2_navig_ring_pane_g1

0xc268,	// (0x0003bc77) blid2_navig_ring_pane_g2

0xc270,	// (0x0003bc7f) blid2_navig_ring_pane_g3

0xc278,	// (0x0003bc87) blid2_navig_ring_pane_g4

0xc280,	// (0x0003bc8f) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0003f547) blid2_navig_ring_pane_g

0xda84,	// (0x0003d493) bg_popup_window_pane_cp011

0x2e07,	// (0x00032816) popup_blid2_search_window_g1

0x2e0f,	// (0x0003281e) popup_blid2_search_window_t1

0x2e1d,	// (0x0003282c) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0003f552) popup_blid2_search_window_t

0xe51c,	// (0x0003df2b) main_browser_pane_g1

0xe231,	// (0x0003dc40) main_browser_pane_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_button_pane_cp011_ParamLimits

0xb4c5,	// (0x0003aed4) cell_vitu2_function_pane_g1_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_popup_sub_pane_cp22_ParamLimits

0x58ab,	// (0x000352ba) input_focus_pane_cp08_ParamLimits

0xbd1c,	// (0x0003b72b) popup_vitu2_query_button_pane_ParamLimits

0xbd1c,	// (0x0003b72b) popup_vitu2_query_button_pane

0x58a1,	// (0x000352b0) popup_vitu2_query_input_button_pane

0x292a,	// (0x00032339) popup_vitu2_query_window_g1_ParamLimits

0x58b8,	// (0x000352c7) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0003f459) popup_vitu2_query_window_g_ParamLimits

0xda84,	// (0x0003d493) bg_button_pane_cp026

0xc288,	// (0x0003bc97) popup_vitu2_query_input_button_pane_g1

0xda84,	// (0x0003d493) bg_button_pane_cp025

0x2e2b,	// (0x0003283a) popup_vitu2_query_button_pane_t1

0x9ca0,	// (0x000396af) main_mp3_pane_t6

0x9cb0,	// (0x000396bf) popup_slider_window_cp01

0xb140,	// (0x0003ab4f) cam4_battery_pane

0xb21f,	// (0x0003ac2e) cam4_battery_pane_cp02

0xc009,	// (0x0003ba18) cam4_battery_pane_cp01

0xc009,	// (0x0003ba18) cam4_battery_pane_cp03

0x184a,	// (0x00031259) cam4_battery_pane_g1

0x2379,	// (0x00031d88) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0003f557) cam4_battery_pane_g

0x1716,	// (0x00031125) popup_blid_sat_info2_window_t11

0x84ef,	// (0x00037efe) aid_size_touch_mv_arrow_left_ParamLimits

0x8518,	// (0x00037f27) aid_size_touch_mv_arrow_right_ParamLimits

0xec78,	// (0x0003e687) navi_pane_g1_ParamLimits

0x8541,	// (0x00037f50) navi_pane_g2_ParamLimits

0x856f,	// (0x00037f7e) navi_pane_g3_ParamLimits

0xf418,	// (0x0003ee27) navi_pane_g_ParamLimits

0x85c9,	// (0x00037fd8) navi_pane_mv_t1_ParamLimits

0xa725,	// (0x0003a134) grid_imed_effect_pane_ParamLimits

0xe465,	// (0x0003de74) aid_placing_vt_slider_lsc

0xe46d,	// (0x0003de7c) aid_placing_vt_slider_prt

0xf0e1,	// (0x0003eaf0) bg_tb_trans_pane_cp01_ParamLimits

0x19d6,	// (0x000313e5) popup_image_details_window_g1_ParamLimits

0x19e9,	// (0x000313f8) popup_image_details_window_g2_ParamLimits

0x19fe,	// (0x0003140d) popup_image_details_window_g3_ParamLimits

0x19fe,	// (0x0003140d) popup_image_details_window_g3

0xf74b,	// (0x0003f15a) popup_image_details_window_g_ParamLimits

0x1a12,	// (0x00031421) popup_image_details_window_t1_ParamLimits

0x1a24,	// (0x00031433) popup_image_details_window_t2_ParamLimits

0x1a3d,	// (0x0003144c) popup_image_details_window_t3_ParamLimits

0x1a51,	// (0x00031460) popup_image_details_window_t4_ParamLimits

0x1a6c,	// (0x0003147b) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0003f161) popup_image_details_window_t_ParamLimits

0xbf2d,	// (0x0003b93c) cl_header_name_pane_ParamLimits

0xbf2d,	// (0x0003b93c) cl_header_name_pane

0xc290,	// (0x0003bc9f) cl_header_name_pane_t1_ParamLimits

0xc290,	// (0x0003bc9f) cl_header_name_pane_t1

0xc2a7,	// (0x0003bcb6) cl_header_name_pane_t2_ParamLimits

0xc2a7,	// (0x0003bcb6) cl_header_name_pane_t2

0xc2d1,	// (0x0003bce0) cl_header_name_pane_t3_ParamLimits

0xc2d1,	// (0x0003bce0) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0003f55c) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0003f55c) cl_header_name_pane_t

0x859a,	// (0x00037fa9) navi_pane_mv_g2_ParamLimits

0x2576,	// (0x00031f85) field_vitu2_entry_pane_g1_ParamLimits

0x2582,	// (0x00031f91) field_vitu2_entry_pane_g2_ParamLimits

0x258e,	// (0x00031f9d) field_vitu2_entry_pane_g3_ParamLimits

0x258e,	// (0x00031f9d) field_vitu2_entry_pane_g3

0xf949,	// (0x0003f358) field_vitu2_entry_pane_g_ParamLimits

0xb455,	// (0x0003ae64) cell_vitu2_itu_pane_g1_ParamLimits

0xb465,	// (0x0003ae74) cell_vitu2_itu_pane_g2_ParamLimits

0xb465,	// (0x0003ae74) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0003f364) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0003f364) cell_vitu2_itu_pane_g

0xf0e1,	// (0x0003eaf0) bg_vkb2_func_pane_cp05_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_vkb2_func_pane_cp05

0xf0e1,	// (0x0003eaf0) bg_vkb2_func_pane_cp03

0xf0e1,	// (0x0003eaf0) bg_vkb2_func_pane_cp04

0xf0e1,	// (0x0003eaf0) bg_vkb2_func_pane_cp10_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_vkb2_func_pane_cp10

0x59fd,	// (0x0003540c) bg_vkb2_func_pane_cp08

0xbed7,	// (0x0003b8e6) bg_vkb2_func_pane_cp06

0xbee5,	// (0x0003b8f4) bg_vkb2_func_pane_cp07

0x2d30,	// (0x0003273f) bg_vkb2_func_pane_cp11_ParamLimits

0x2d30,	// (0x0003273f) bg_vkb2_func_pane_cp11

0x2d45,	// (0x00032754) bg_vkb2_func_pane_cp12_ParamLimits

0x2d45,	// (0x00032754) bg_vkb2_func_pane_cp12

0xda84,	// (0x0003d493) bg_vkb2_func_pane_cp09

0x2608,	// (0x00032017) bg_vkb2_func_pane_g1

0xe62d,	// (0x0003e03c) bg_vkb2_func_pane_g2

0x2610,	// (0x0003201f) bg_vkb2_func_pane_g3

0x2618,	// (0x00032027) bg_vkb2_func_pane_g4

0x28ad,	// (0x000322bc) bg_vkb2_func_pane_g5

0x2630,	// (0x0003203f) bg_vkb2_func_pane_g6

0x2638,	// (0x00032047) bg_vkb2_func_pane_g7

0x2628,	// (0x00032037) bg_vkb2_func_pane_g8

0xe60d,	// (0x0003e01c) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0003f563) bg_vkb2_func_pane_g

0xc1df,	// (0x0003bbee) blid2_tripm_pane_g6_ParamLimits

0xc1df,	// (0x0003bbee) blid2_tripm_pane_g6

0x2333,	// (0x00031d42) mp4_progress_pane_g1

0xc239,	// (0x0003bc48) blid2_tripm_values_pane_ParamLimits

0xc239,	// (0x0003bc48) blid2_tripm_values_pane

0xc2f6,	// (0x0003bd05) blid2_tripm_values_pane_t1

0xc304,	// (0x0003bd13) blid2_tripm_values_pane_t2

0xc312,	// (0x0003bd21) blid2_tripm_values_pane_t3

0xc320,	// (0x0003bd2f) blid2_tripm_values_pane_t4

0xc32e,	// (0x0003bd3d) blid2_tripm_values_pane_t5

0xc33c,	// (0x0003bd4b) blid2_tripm_values_pane_t6

0xc34a,	// (0x0003bd59) blid2_tripm_values_pane_t7

0xc358,	// (0x0003bd67) blid2_tripm_values_pane_t8

0xc366,	// (0x0003bd75) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0003f576) blid2_tripm_values_pane_t

0x7459,	// (0x00036e68) call_video_pane_t1_ParamLimits

0x7472,	// (0x00036e81) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0003ecb0) call_video_pane_t_ParamLimits

0x561b,	// (0x0003502a) msg_header_pane_g1_ParamLimits

0xee93,	// (0x0003e8a2) msg_header_pane_g2_ParamLimits

0xee93,	// (0x0003e8a2) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0003eeca) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0003eeca) msg_header_pane_g

0xe231,	// (0x0003dc40) main_clock2_pane_ParamLimits

0xa4b5,	// (0x00039ec4) grid_clock2_toolbar_pane_ParamLimits

0xa4b5,	// (0x00039ec4) grid_clock2_toolbar_pane

0xa4b5,	// (0x00039ec4) listscroll_clock2_pane_ParamLimits

0xa4b5,	// (0x00039ec4) listscroll_clock2_pane

0xa562,	// (0x00039f71) main_clock2_pane_t3_ParamLimits

0xa562,	// (0x00039f71) main_clock2_pane_t3

0xa574,	// (0x00039f83) main_clock2_pane_t4_ParamLimits

0xa574,	// (0x00039f83) main_clock2_pane_t4

0x2e39,	// (0x00032848) cell_clock2_toolbar_pane

0x2e41,	// (0x00032850) cell_clock2_toolbar_pane_cp01

0x2e41,	// (0x00032850) cell_clock2_toolbar_pane_cp02

0x2e49,	// (0x00032858) cell_clock2_toolbar_pane_cp03

0x2e51,	// (0x00032860) list_clock2_pane

0xebcf,	// (0x0003e5de) scroll_pane_cp10

0x2e59,	// (0x00032868) list_single_clock2_pane_ParamLimits

0x2e59,	// (0x00032868) list_single_clock2_pane

0xed18,	// (0x0003e727) list_highlight_pane_cp08

0x2e66,	// (0x00032875) list_single_clock2_pane_t1

0x2e74,	// (0x00032883) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0003f589) list_single_clock2_pane_t

0xda84,	// (0x0003d493) bg_button_pane_cp10

0x2e82,	// (0x00032891) cell_clock2_toolbar_pane_g1

0x8ab5,	// (0x000384c4) aid_main_viewer_pane_g1_ParamLimits

0x8ab5,	// (0x000384c4) aid_main_viewer_pane_g1

0x8ac1,	// (0x000384d0) aid_main_viewer_pane_g2_ParamLimits

0x8ac1,	// (0x000384d0) aid_main_viewer_pane_g2

0x8acd,	// (0x000384dc) aid_main_viewer_pane_g3_ParamLimits

0x8acd,	// (0x000384dc) aid_main_viewer_pane_g3

0x8ade,	// (0x000384ed) aid_main_viewer_pane_g4_ParamLimits

0x8ade,	// (0x000384ed) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0003eedb) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0003eedb) aid_main_viewer_pane_g

0x925e,	// (0x00038c6d) main_calc_pane_ParamLimits

0x926b,	// (0x00038c7a) main_dialer2_pane_ParamLimits

0xda84,	// (0x0003d493) main_cam6_pane

0xda84,	// (0x0003d493) main_vid6_pane

0xa4c1,	// (0x00039ed0) listscroll_gen_pane_cp06_ParamLimits

0xa4c1,	// (0x00039ed0) listscroll_gen_pane_cp06

0xa586,	// (0x00039f95) main_clock2_pane_t5_ParamLimits

0xa586,	// (0x00039f95) main_clock2_pane_t5

0xa5cf,	// (0x00039fde) aid_call2_pane_cp10_ParamLimits

0xa5e1,	// (0x00039ff0) aid_call_pane_cp10_ParamLimits

0xec4d,	// (0x0003e65c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xec4d,	// (0x0003e65c) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa5f3,	// (0x0003a002) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa5f3,	// (0x0003a002) popup_clock_analogue_window_cp10_g4_ParamLimits

0xec4d,	// (0x0003e65c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0003f211) popup_clock_analogue_window_cp10_g_ParamLimits

0xa605,	// (0x0003a014) popup_clock_analogue_window_cp10_t1_ParamLimits

0xadcb,	// (0x0003a7da) cell_dialer2_keypad_pane_g2_ParamLimits

0xadcb,	// (0x0003a7da) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0003f2f7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0003f2f7) cell_dialer2_keypad_pane_g

0xade7,	// (0x0003a7f6) cell_dialer2_keypad_pane_t1

0xb78e,	// (0x0003b19d) main_cset_text2_pane_ParamLimits

0xb78e,	// (0x0003b19d) main_cset_text2_pane

0x2b0a,	// (0x00032519) area_vitu2_query_pane_g1_ParamLimits

0x5928,	// (0x00035337) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0003f4a6) area_vitu2_query_pane_g_ParamLimits

0x59d9,	// (0x000353e8) area_vitu2_query_pane_t7_ParamLimits

0x59d9,	// (0x000353e8) area_vitu2_query_pane_t7

0xbed7,	// (0x0003b8e6) bg_button_pane_cp018_ParamLimits

0xbee5,	// (0x0003b8f4) bg_button_pane_cp021_ParamLimits

0x59fd,	// (0x0003540c) bg_button_pane_cp022_ParamLimits

0x59fd,	// (0x0003540c) bg_vkb2_func_pane_cp08_ParamLimits

0xbed7,	// (0x0003b8e6) bg_vkb2_func_pane_cp06_ParamLimits

0xbee5,	// (0x0003b8f4) bg_vkb2_func_pane_cp07_ParamLimits

0x5a0e,	// (0x0003541d) input_focus_pane_cp09_ParamLimits

0xc374,	// (0x0003bd83) cam6_autofocus_pane_ParamLimits

0xc374,	// (0x0003bd83) cam6_autofocus_pane

0xc396,	// (0x0003bda5) cam6_image_uncrop_pane_ParamLimits

0xc396,	// (0x0003bda5) cam6_image_uncrop_pane

0xc3c3,	// (0x0003bdd2) cam6_indi_pane_ParamLimits

0xc3c3,	// (0x0003bdd2) cam6_indi_pane

0xc3dd,	// (0x0003bdec) cam6_mode_pane_ParamLimits

0xc3dd,	// (0x0003bdec) cam6_mode_pane

0xc3f1,	// (0x0003be00) cam6_timer_pane_ParamLimits

0xc3f1,	// (0x0003be00) cam6_timer_pane

0xc3fd,	// (0x0003be0c) cam6_zoom_pane_ParamLimits

0xc3fd,	// (0x0003be0c) cam6_zoom_pane

0xb1a1,	// (0x0003abb0) cam6_mode_pane_g1_ParamLimits

0xb1a1,	// (0x0003abb0) cam6_mode_pane_g1

0xb1b9,	// (0x0003abc8) cam6_mode_pane_g2_ParamLimits

0xb1b9,	// (0x0003abc8) cam6_mode_pane_g2

0xb1c5,	// (0x0003abd4) cam6_mode_pane_g3_ParamLimits

0xb1c5,	// (0x0003abd4) cam6_mode_pane_g3

0xb1d1,	// (0x0003abe0) cam6_mode_pane_g4_ParamLimits

0xb1d1,	// (0x0003abe0) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0003f58e) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0003f58e) cam6_mode_pane_g

0x2e98,	// (0x000328a7) bg_tb_trans_pane_cp08_ParamLimits

0x2e98,	// (0x000328a7) bg_tb_trans_pane_cp08

0x2ea6,	// (0x000328b5) cam6_battery_pane_ParamLimits

0x2ea6,	// (0x000328b5) cam6_battery_pane

0x2ebc,	// (0x000328cb) cam6_indi_pane_g1_ParamLimits

0x2ebc,	// (0x000328cb) cam6_indi_pane_g1

0x2ece,	// (0x000328dd) cam6_indi_pane_g2_ParamLimits

0x2ece,	// (0x000328dd) cam6_indi_pane_g2

0x2ee0,	// (0x000328ef) cam6_indi_pane_g3_ParamLimits

0x2ee0,	// (0x000328ef) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0003f597) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0003f597) cam6_indi_pane_g

0x2ef2,	// (0x00032901) cam6_indi_pane_t1_ParamLimits

0x2ef2,	// (0x00032901) cam6_indi_pane_t1

0xb291,	// (0x0003aca0) cam6_autofocus_pane_g1

0xb299,	// (0x0003aca8) cam6_autofocus_pane_g2

0xb2a1,	// (0x0003acb0) cam6_autofocus_pane_g3

0xb2a9,	// (0x0003acb8) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0003f59e) cam6_autofocus_pane_g

0x2f18,	// (0x00032927) cam6_timer_pane_g1

0x2f20,	// (0x0003292f) cam6_timer_pane_t1

0x2f2e,	// (0x0003293d) cam6_zoom_cont_pane

0x2f36,	// (0x00032945) cam6_zoom_pane_g1

0x2f3e,	// (0x0003294d) cam6_zoom_pane_g2

0xc415,	// (0x0003be24) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0003f5a7) cam6_zoom_pane_g

0x184a,	// (0x00031259) cam6_battery_pane_g1

0x184a,	// (0x00031259) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0003f11e) cam6_battery_pane_g

0x2f46,	// (0x00032955) cam6_zoom_cont_pane_g1

0x2f4f,	// (0x0003295e) cam6_zoom_cont_pane_g2

0x2f58,	// (0x00032967) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0003f5ae) cam6_zoom_cont_pane_g

0xc432,	// (0x0003be41) cam6_mode_pane_cp_ParamLimits

0xc432,	// (0x0003be41) cam6_mode_pane_cp

0xc3fd,	// (0x0003be0c) cam6_zoom_pane_cp_ParamLimits

0xc3fd,	// (0x0003be0c) cam6_zoom_pane_cp

0xc446,	// (0x0003be55) vid6_image_uncrop_cif_pane_ParamLimits

0xc446,	// (0x0003be55) vid6_image_uncrop_cif_pane

0xc472,	// (0x0003be81) vid6_image_uncrop_nhd_pane_ParamLimits

0xc472,	// (0x0003be81) vid6_image_uncrop_nhd_pane

0xc396,	// (0x0003bda5) vid6_image_uncrop_vga_pane_ParamLimits

0xc396,	// (0x0003bda5) vid6_image_uncrop_vga_pane

0xc48f,	// (0x0003be9e) vid6_image_uncrop_wvga_pane_ParamLimits

0xc48f,	// (0x0003be9e) vid6_image_uncrop_wvga_pane

0xc4ac,	// (0x0003bebb) vid6_indi_pane_ParamLimits

0xc4ac,	// (0x0003bebb) vid6_indi_pane

0x2e98,	// (0x000328a7) bg_tb_trans_pane_cp09_ParamLimits

0x2e98,	// (0x000328a7) bg_tb_trans_pane_cp09

0x2f70,	// (0x0003297f) cam6_battery_pane_cp_ParamLimits

0x2f70,	// (0x0003297f) cam6_battery_pane_cp

0x2f7c,	// (0x0003298b) vid6_indi_pane_g1_ParamLimits

0x2f7c,	// (0x0003298b) vid6_indi_pane_g1

0x2f8e,	// (0x0003299d) vid6_indi_pane_g2_ParamLimits

0x2f8e,	// (0x0003299d) vid6_indi_pane_g2

0x2fa0,	// (0x000329af) vid6_indi_pane_g3_ParamLimits

0x2fa0,	// (0x000329af) vid6_indi_pane_g3

0x2fb5,	// (0x000329c4) vid6_indi_pane_g4_ParamLimits

0x2fb5,	// (0x000329c4) vid6_indi_pane_g4

0x2fca,	// (0x000329d9) vid6_indi_pane_g5_ParamLimits

0x2fca,	// (0x000329d9) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0003f5b5) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0003f5b5) vid6_indi_pane_g

0x2fe4,	// (0x000329f3) vid6_indi_pane_t1_ParamLimits

0x2fe4,	// (0x000329f3) vid6_indi_pane_t1

0x2ffa,	// (0x00032a09) vid6_indi_pane_t2_ParamLimits

0x2ffa,	// (0x00032a09) vid6_indi_pane_t2

0x3022,	// (0x00032a31) vid6_indi_pane_t3_ParamLimits

0x3022,	// (0x00032a31) vid6_indi_pane_t3

0x304a,	// (0x00032a59) vid6_indi_pane_t4_ParamLimits

0x304a,	// (0x00032a59) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0003f5c0) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0003f5c0) vid6_indi_pane_t

0x306e,	// (0x00032a7d) wait_bar_pane_cp08

0xc4d1,	// (0x0003bee0) main_cset_text2_pane_t1_ParamLimits

0xc4d1,	// (0x0003bee0) main_cset_text2_pane_t1

0xc41d,	// (0x0003be2c) listscroll_gen_pane_cp06_t1_ParamLimits

0xc41d,	// (0x0003be2c) listscroll_gen_pane_cp06_t1

0xda84,	// (0x0003d493) main_cam6_set_pane

0x1ab6,	// (0x000314c5) bg_tb_trans_pane_cp06_ParamLimits

0xb148,	// (0x0003ab57) cam4_indicators_pane_g1_ParamLimits

0xb159,	// (0x0003ab68) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0003f334) cam4_indicators_pane_g_ParamLimits

0xb177,	// (0x0003ab86) cam4_indicators_pane_t1_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_tb_trans_pane_cp07_ParamLimits

0xb229,	// (0x0003ac38) vid4_indicators_pane_g1_ParamLimits

0xb23a,	// (0x0003ac49) vid4_indicators_pane_g2_ParamLimits

0xb24b,	// (0x0003ac5a) vid4_indicators_pane_g3_ParamLimits

0xb25c,	// (0x0003ac6b) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0003f346) vid4_indicators_pane_g_ParamLimits

0xb278,	// (0x0003ac87) vid4_indicators_pane_t1_ParamLimits

0xc011,	// (0x0003ba20) vid4_progress_pane_g1_ParamLimits

0xc021,	// (0x0003ba30) vid4_progress_pane_g2_ParamLimits

0x8b3b,	// (0x0003854a) vid4_progress_pane_g3_ParamLimits

0xc031,	// (0x0003ba40) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0003f4f1) vid4_progress_pane_g_ParamLimits

0xc04f,	// (0x0003ba5e) vid4_progress_pane_t1_ParamLimits

0xc064,	// (0x0003ba73) vid4_progress_pane_t2_ParamLimits

0xc07a,	// (0x0003ba89) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0003f4fc) vid4_progress_pane_t_ParamLimits

0xc08f,	// (0x0003ba9e) wait_bar_pane_cp07_ParamLimits

0xc504,	// (0x0003bf13) main_cam6_set_pane_g2_ParamLimits

0xc504,	// (0x0003bf13) main_cam6_set_pane_g2

0xc510,	// (0x0003bf1f) main_cset6_listscroll_pane_ParamLimits

0xc510,	// (0x0003bf1f) main_cset6_listscroll_pane

0xc53b,	// (0x0003bf4a) main_cset6_slider_pane_ParamLimits

0xc53b,	// (0x0003bf4a) main_cset6_slider_pane

0xc547,	// (0x0003bf56) main_cset6_text2_pane_ParamLimits

0xc547,	// (0x0003bf56) main_cset6_text2_pane

0x307d,	// (0x00032a8c) main_cset6_text_pane

0x3085,	// (0x00032a94) main_cset_list_pane_copy1_ParamLimits

0x3085,	// (0x00032a94) main_cset_list_pane_copy1

0x3095,	// (0x00032aa4) scroll_pane_cp028_copy1

0xc55a,	// (0x0003bf69) cset_list_set_pane_copy1

0xc56d,	// (0x0003bf7c) aid_position_infowindow_above_copy1

0xc575,	// (0x0003bf84) aid_position_infowindow_below_copy1

0x5a67,	// (0x00035476) cset_list_set_pane_g1_copy1

0x5828,	// (0x00035237) cset_list_set_pane_g3_copy1_ParamLimits

0x5828,	// (0x00035237) cset_list_set_pane_g3_copy1

0x5837,	// (0x00035246) cset_list_set_pane_t1_copy1_ParamLimits

0x5837,	// (0x00035246) cset_list_set_pane_t1_copy1

0xf0e1,	// (0x0003eaf0) list_highlight_pane_cp021_copy1_ParamLimits

0xf0e1,	// (0x0003eaf0) list_highlight_pane_cp021_copy1

0x309e,	// (0x00032aad) cset6_slider_pane_ParamLimits

0x309e,	// (0x00032aad) cset6_slider_pane

0x30ca,	// (0x00032ad9) main_cset6_slider_pane_g1_ParamLimits

0x30ca,	// (0x00032ad9) main_cset6_slider_pane_g1

0xc57d,	// (0x0003bf8c) main_cset6_slider_pane_g2_ParamLimits

0xc57d,	// (0x0003bf8c) main_cset6_slider_pane_g2

0x30f2,	// (0x00032b01) main_cset6_slider_pane_g3_ParamLimits

0x30f2,	// (0x00032b01) main_cset6_slider_pane_g3

0xc5a5,	// (0x0003bfb4) main_cset6_slider_pane_g4_ParamLimits

0xc5a5,	// (0x0003bfb4) main_cset6_slider_pane_g4

0xc5b1,	// (0x0003bfc0) main_cset6_slider_pane_g5_ParamLimits

0xc5b1,	// (0x0003bfc0) main_cset6_slider_pane_g5

0x2737,	// (0x00032146) main_cset6_slider_pane_g7_ParamLimits

0x2737,	// (0x00032146) main_cset6_slider_pane_g7

0x2743,	// (0x00032152) main_cset6_slider_pane_g8_ParamLimits

0x2743,	// (0x00032152) main_cset6_slider_pane_g8

0xc5bf,	// (0x0003bfce) main_cset6_slider_pane_g9_ParamLimits

0xc5bf,	// (0x0003bfce) main_cset6_slider_pane_g9

0xc5cb,	// (0x0003bfda) main_cset6_slider_pane_g10_ParamLimits

0xc5cb,	// (0x0003bfda) main_cset6_slider_pane_g10

0xc5d7,	// (0x0003bfe6) main_cset6_slider_pane_g11_ParamLimits

0xc5d7,	// (0x0003bfe6) main_cset6_slider_pane_g11

0xc5e3,	// (0x0003bff2) main_cset6_slider_pane_g12_ParamLimits

0xc5e3,	// (0x0003bff2) main_cset6_slider_pane_g12

0xc5ef,	// (0x0003bffe) main_cset6_slider_pane_g13_ParamLimits

0xc5ef,	// (0x0003bffe) main_cset6_slider_pane_g13

0xc5fb,	// (0x0003c00a) main_cset6_slider_pane_g14_ParamLimits

0xc5fb,	// (0x0003c00a) main_cset6_slider_pane_g14

0xc607,	// (0x0003c016) main_cset6_slider_pane_g15_ParamLimits

0xc607,	// (0x0003c016) main_cset6_slider_pane_g15

0xc61f,	// (0x0003c02e) main_cset6_slider_pane_g16_ParamLimits

0xc61f,	// (0x0003c02e) main_cset6_slider_pane_g16

0xc62d,	// (0x0003c03c) main_cset6_slider_pane_g17_ParamLimits

0xc62d,	// (0x0003c03c) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0003f5c9) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0003f5c9) main_cset6_slider_pane_g

0x30fe,	// (0x00032b0d) main_cset6_slider_pane_t1_ParamLimits

0x30fe,	// (0x00032b0d) main_cset6_slider_pane_t1

0xc653,	// (0x0003c062) main_cset6_slider_pane_t2_ParamLimits

0xc653,	// (0x0003c062) main_cset6_slider_pane_t2

0xc67e,	// (0x0003c08d) main_cset6_slider_pane_t3_ParamLimits

0xc67e,	// (0x0003c08d) main_cset6_slider_pane_t3

0xc6a9,	// (0x0003c0b8) main_cset6_slider_pane_t4_ParamLimits

0xc6a9,	// (0x0003c0b8) main_cset6_slider_pane_t4

0xc6d4,	// (0x0003c0e3) main_cset6_slider_pane_t5_ParamLimits

0xc6d4,	// (0x0003c0e3) main_cset6_slider_pane_t5

0x313f,	// (0x00032b4e) main_cset6_slider_pane_t7_ParamLimits

0x313f,	// (0x00032b4e) main_cset6_slider_pane_t7

0xc701,	// (0x0003c110) main_cset6_slider_pane_t8_ParamLimits

0xc701,	// (0x0003c110) main_cset6_slider_pane_t8

0xc725,	// (0x0003c134) main_cset6_slider_pane_t9_ParamLimits

0xc725,	// (0x0003c134) main_cset6_slider_pane_t9

0xc749,	// (0x0003c158) main_cset6_slider_pane_t10_ParamLimits

0xc749,	// (0x0003c158) main_cset6_slider_pane_t10

0xc76d,	// (0x0003c17c) main_cset6_slider_pane_t11_ParamLimits

0xc76d,	// (0x0003c17c) main_cset6_slider_pane_t11

0x3175,	// (0x00032b84) main_cset6_slider_pane_t14_ParamLimits

0x3175,	// (0x00032b84) main_cset6_slider_pane_t14

0x31ae,	// (0x00032bbd) main_cset6_slider_pane_t15_ParamLimits

0x31ae,	// (0x00032bbd) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0003f5ee) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0003f5ee) main_cset6_slider_pane_t

0x31e7,	// (0x00032bf6) cset_slider_pane_g1_copy1

0x31f0,	// (0x00032bff) cset_slider_pane_g2_copy1

0x31f9,	// (0x00032c08) cset_slider_pane_g3_copy1

0xda84,	// (0x0003d493) bg_popup_sub_pane_cp011_copy1

0x2936,	// (0x00032345) main_cset_text_pane_g1_copy1

0x293e,	// (0x0003234d) main_cset_text_pane_t1_copy1

0x294c,	// (0x0003235b) main_cset_text_pane_t2_copy1

0x295a,	// (0x00032369) main_cset_text_pane_t3_copy1

0x2968,	// (0x00032377) main_cset_text_pane_t4_copy1

0x2976,	// (0x00032385) main_cset_text_pane_t5_copy1

0x2984,	// (0x00032393) main_cset_text_pane_t6_copy1

0x2992,	// (0x000323a1) main_cset_text_pane_t7_copy1

0xc791,	// (0x0003c1a0) main_cset_text2_pane_t1_copy1

0xda84,	// (0x0003d493) main_ncimui_pane

0x92aa,	// (0x00038cb9) popup_query_ncimui_window_ParamLimits

0x92aa,	// (0x00038cb9) popup_query_ncimui_window

0x56dc,	// (0x000350eb) field_cale_ev2_pane_g4_ParamLimits

0x56dc,	// (0x000350eb) field_cale_ev2_pane_g4

0xaaeb,	// (0x0003a4fa) cell_video_dialer_keypad_pane_g2_ParamLimits

0xaaeb,	// (0x0003a4fa) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0003f2d2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0003f2d2) cell_video_dialer_keypad_pane_g

0xab03,	// (0x0003a512) cell_video_dialer_keypad_pane_t1

0xda84,	// (0x0003d493) bg_popup_window_pane_cp012

0xeaac,	// (0x0003e4bb) heading_pane_cp06

0x32f1,	// (0x00032d00) ncim_query_content_pane

0xda84,	// (0x0003d493) bg_popup_heading_pane_cp01

0x32f9,	// (0x00032d08) ncim_heading_pane_t1

0x3307,	// (0x00032d16) ncim_indicator_popup_pane

0x3319,	// (0x00032d28) ncim_query_button_pane

0x332d,	// (0x00032d3c) ncim_query_content_pane_t1

0x333f,	// (0x00032d4e) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0003f62d) ncim_query_content_pane_t

0x3379,	// (0x00032d88) ncim_query_list_pane

0x338b,	// (0x00032d9a) ncim_query_popup_pane

0x3307,	// (0x00032d16) ncim_indicator_popup_pane_ParamLimits

0xc881,	// (0x0003c290) ncim_query_content_pane_g1_ParamLimits

0xc881,	// (0x0003c290) ncim_query_content_pane_g1

0x332d,	// (0x00032d3c) ncim_query_content_pane_t1_ParamLimits

0x333f,	// (0x00032d4e) ncim_query_content_pane_t2_ParamLimits

0xc88d,	// (0x0003c29c) ncim_query_content_pane_t3_ParamLimits

0xc88d,	// (0x0003c29c) ncim_query_content_pane_t3

0xc8aa,	// (0x0003c2b9) ncim_query_content_pane_t4_ParamLimits

0xc8aa,	// (0x0003c2b9) ncim_query_content_pane_t4

0xc8c7,	// (0x0003c2d6) ncim_query_content_pane_t5_ParamLimits

0xc8c7,	// (0x0003c2d6) ncim_query_content_pane_t5

0x3351,	// (0x00032d60) ncim_query_content_pane_t6_ParamLimits

0x3351,	// (0x00032d60) ncim_query_content_pane_t6

0xfc1e,	// (0x0003f62d) ncim_query_content_pane_t_ParamLimits

0x3379,	// (0x00032d88) ncim_query_list_pane_ParamLimits

0x338b,	// (0x00032d9a) ncim_query_popup_pane_ParamLimits

0x339f,	// (0x00032dae) wait_bar_pane_cp04

0xda84,	// (0x0003d493) input_focus_pane_cp011

0x33a7,	// (0x00032db6) ncim_query_popup_pane_t1

0x33b5,	// (0x00032dc4) ncim_list_query_list_pane_ParamLimits

0x33b5,	// (0x00032dc4) ncim_list_query_list_pane

0xda84,	// (0x0003d493) bg_button_pane_cp027

0x33c2,	// (0x00032dd1) ncim_query_button_pane_g1

0xda84,	// (0x0003d493) list_highlight_pane_cp012

0x33cc,	// (0x00032ddb) ncim_list_query_list_pane_g1

0x33d4,	// (0x00032de3) ncim_list_query_list_pane_t1

0xb168,	// (0x0003ab77) cam4_indicators_pane_g3_ParamLimits

0xb168,	// (0x0003ab77) cam4_indicators_pane_g3

0xb268,	// (0x0003ac77) vid4_indicators_pane_g5_ParamLimits

0xb268,	// (0x0003ac77) vid4_indicators_pane_g5

0xc040,	// (0x0003ba4f) vid4_progress_pane_g5_ParamLimits

0xc040,	// (0x0003ba4f) vid4_progress_pane_g5

0xc7c9,	// (0x0003c1d8) main_ncimui_pane_g1

0xc80f,	// (0x0003c21e) ncimui_group_query_pane_ParamLimits

0xc80f,	// (0x0003c21e) ncimui_group_query_pane

0xc843,	// (0x0003c252) ncimui_list_pane_ParamLimits

0xc843,	// (0x0003c252) ncimui_list_pane

0xc85d,	// (0x0003c26c) ncimui_text_pane_ParamLimits

0xc85d,	// (0x0003c26c) ncimui_text_pane

0xc8e4,	// (0x0003c2f3) ncimui_text_pane_t1_ParamLimits

0xc8e4,	// (0x0003c2f3) ncimui_text_pane_t1

0x33e2,	// (0x00032df1) ncimui_list_single_graphic_pane_ParamLimits

0x33e2,	// (0x00032df1) ncimui_list_single_graphic_pane

0xc903,	// (0x0003c312) ncimui_query_pane_ParamLimits

0xc903,	// (0x0003c312) ncimui_query_pane

0xda84,	// (0x0003d493) list_highlight_pane_cp013

0x33f2,	// (0x00032e01) ncim_list_query_list_pane_t1_copy1

0x33cc,	// (0x00032ddb) ncim_list_single_graphic_pane_g1

0x3400,	// (0x00032e0f) ncim_query_button_pane_cp01

0x3408,	// (0x00032e17) ncim_query_entry_pane_ParamLimits

0x3408,	// (0x00032e17) ncim_query_entry_pane

0x3418,	// (0x00032e27) ncimui_query_pane_g1

0x3420,	// (0x00032e2f) ncimui_query_pane_t1_ParamLimits

0x3420,	// (0x00032e2f) ncimui_query_pane_t1

0xda84,	// (0x0003d493) input_focus_pane_cp012

0x33a7,	// (0x00032db6) ncim_query_entry_pane_t1

0xe231,	// (0x0003dc40) main_im_pane_ParamLimits

0xf0e1,	// (0x0003eaf0) main_mobtv_pane_ParamLimits

0xf0e1,	// (0x0003eaf0) main_mobtv_pane

0xc63b,	// (0x0003c04a) main_cset6_slider_pane_g18_ParamLimits

0xc63b,	// (0x0003c04a) main_cset6_slider_pane_g18

0xc647,	// (0x0003c056) main_cset6_slider_pane_g19_ParamLimits

0xc647,	// (0x0003c056) main_cset6_slider_pane_g19

0x258e,	// (0x00031f9d) bg_main_mobtv_pane_ParamLimits

0x258e,	// (0x00031f9d) bg_main_mobtv_pane

0xc913,	// (0x0003c322) main_mobtv_info_pane

0xc91e,	// (0x0003c32d) main_mobtv_loading_pane_ParamLimits

0xc91e,	// (0x0003c32d) main_mobtv_loading_pane

0x3444,	// (0x00032e53) main_mobtv_pg_channel_list_pane

0x344e,	// (0x00032e5d) main_mobtv_pg_hdr_pane

0xc92b,	// (0x0003c33a) main_mobtv_programe_curr_pane_ParamLimits

0xc92b,	// (0x0003c33a) main_mobtv_programe_curr_pane

0xc938,	// (0x0003c347) main_mobtv_programe_next_pane_ParamLimits

0xc938,	// (0x0003c347) main_mobtv_programe_next_pane

0x3457,	// (0x00032e66) popup_mobtv_noti_window

0x184a,	// (0x00031259) main_tv_pg_hdr_pane_g1

0x345f,	// (0x00032e6e) main_tv_pg_hdr_pane_g2

0x3467,	// (0x00032e76) main_tv_pg_hdr_pane_g3

0x346f,	// (0x00032e7e) main_tv_pg_hdr_pane_g4

0x3477,	// (0x00032e86) main_tv_pg_hdr_pane_g5

0x3481,	// (0x00032e90) main_tv_pg_hdr_pane_g6

0x348b,	// (0x00032e9a) main_tv_pg_hdr_pane_g7

0x3495,	// (0x00032ea4) main_tv_pg_hdr_pane_g8

0x349f,	// (0x00032eae) main_tv_pg_hdr_pane_g9

0x34a9,	// (0x00032eb8) main_tv_pg_hdr_pane_g10

0x34b3,	// (0x00032ec2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0003f63a) main_tv_pg_hdr_pane_g

0x34bd,	// (0x00032ecc) main_tv_pg_hdr_pane_t1

0x34cb,	// (0x00032eda) main_tv_pg_hdr_pane_t2

0x34d9,	// (0x00032ee8) main_tv_pg_hdr_pane_t3

0x34e9,	// (0x00032ef8) main_tv_pg_hdr_pane_t4

0x34f9,	// (0x00032f08) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0003f651) main_tv_pg_hdr_pane_t

0x3509,	// (0x00032f18) single_mobtv_pg_channel_pane_ParamLimits

0x3509,	// (0x00032f18) single_mobtv_pg_channel_pane

0x351b,	// (0x00032f2a) single_mobtv_pg_channel_table_pane

0x3524,	// (0x00032f33) single_mobtv_pg_channel_thumb_pane

0x352d,	// (0x00032f3c) single_tv_pg_channel_pane_g1

0x3536,	// (0x00032f45) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0003f65c) single_tv_pg_channel_pane_g

0x1ab6,	// (0x000314c5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1ab6,	// (0x000314c5) bg_single_mobtv_pg_channel_thumb_pane

0x353f,	// (0x00032f4e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x353f,	// (0x00032f4e) single_mobtv_pg_channel_thumb_pane_g1

0x354d,	// (0x00032f5c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x354d,	// (0x00032f5c) single_mobtv_pg_channel_thumb_pane_g2

0x3559,	// (0x00032f68) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3559,	// (0x00032f68) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0003f661) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0003f661) single_mobtv_pg_channel_thumb_pane_g

0x3565,	// (0x00032f74) single_mobtv_pg_channel_thumb_pane_t1

0x3573,	// (0x00032f82) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0003f668) single_mobtv_pg_channel_thumb_pane_t

0x184a,	// (0x00031259) bg_single_mobtv_pg_channel_table_pane_g1

0x184a,	// (0x00031259) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0003f11e) bg_single_mobtv_pg_channel_table_pane_g

0x3581,	// (0x00032f90) single_mobtv_pg_channel_table_pane_t1

0x358f,	// (0x00032f9e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0003f66d) single_mobtv_pg_channel_table_pane_t

0xc94d,	// (0x0003c35c) main_mobtv_info_pane_g1_ParamLimits

0xc94d,	// (0x0003c35c) main_mobtv_info_pane_g1

0xc969,	// (0x0003c378) main_mobtv_info_pane_t1_ParamLimits

0xc969,	// (0x0003c378) main_mobtv_info_pane_t1

0xc9e1,	// (0x0003c3f0) main_mobtv_info_pane_t2_ParamLimits

0xc9e1,	// (0x0003c3f0) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0003f677) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0003f677) main_mobtv_info_pane_t

0xca70,	// (0x0003c47f) wait_bar_pane_cp05

0xca82,	// (0x0003c491) main_mobtv_loading_pane_g1_ParamLimits

0xca82,	// (0x0003c491) main_mobtv_loading_pane_g1

0xca90,	// (0x0003c49f) main_mobtv_loading_pane_g2_ParamLimits

0xca90,	// (0x0003c49f) main_mobtv_loading_pane_g2

0xca9c,	// (0x0003c4ab) main_mobtv_loading_pane_g3_ParamLimits

0xca9c,	// (0x0003c4ab) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0003f67e) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0003f67e) main_mobtv_loading_pane_g

0x359d,	// (0x00032fac) main_mobtv_loading_pane_t1_ParamLimits

0x359d,	// (0x00032fac) main_mobtv_loading_pane_t1

0x35b5,	// (0x00032fc4) main_mobtv_loading_pane_t2_ParamLimits

0x35b5,	// (0x00032fc4) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0003f685) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0003f685) main_mobtv_loading_pane_t

0xcaaa,	// (0x0003c4b9) wait_bar_pane_cp06_ParamLimits

0xcaaa,	// (0x0003c4b9) wait_bar_pane_cp06

0x35d9,	// (0x00032fe8) main_mobtv_programe_curr_pane_t1

0x35e7,	// (0x00032ff6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0003f68a) main_mobtv_programe_curr_pane_t

0x35f5,	// (0x00033004) main_mobtv_programe_next_pane_t1

0x3603,	// (0x00033012) main_mobtv_programe_next_pane_t2

0x3611,	// (0x00033020) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0003f68f) main_mobtv_programe_next_pane_t

0xda84,	// (0x0003d493) bg_popup_mobtv_noti_window_pane

0x361f,	// (0x0003302e) popup_mobtv_noti_window_g1

0x3627,	// (0x00033036) popup_mobtv_noti_window_t1

0x3635,	// (0x00033044) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0003f696) popup_mobtv_noti_window_t

0x184a,	// (0x00031259) bg_popup_mobtv_noti_window_pane_g1

0xda84,	// (0x0003d493) sc_clock_pane

0xda84,	// (0x0003d493) main_fs_bigclock_pane

0xc227,	// (0x0003bc36) blid2_tripm_pane_t4_ParamLimits

0xc227,	// (0x0003bc36) blid2_tripm_pane_t4

0xcab6,	// (0x0003c4c5) sc_clock_pane_g1_ParamLimits

0xcab6,	// (0x0003c4c5) sc_clock_pane_g1

0xcac4,	// (0x0003c4d3) sc_clock_pane_t1_ParamLimits

0xcac4,	// (0x0003c4d3) sc_clock_pane_t1

0xcad7,	// (0x0003c4e6) sc_clock_pane_t2_ParamLimits

0xcad7,	// (0x0003c4e6) sc_clock_pane_t2

0xcae9,	// (0x0003c4f8) sc_clock_pane_t3_ParamLimits

0xcae9,	// (0x0003c4f8) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0003f69b) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0003f69b) sc_clock_pane_t

0xd2bb,	// (0x0003ccca) main_fs_bigclock_indicator_pane_ParamLimits

0xd2bb,	// (0x0003ccca) main_fs_bigclock_indicator_pane

0xcb6d,	// (0x0003c57c) main_fs_bigclock_pane_g1_ParamLimits

0xcb6d,	// (0x0003c57c) main_fs_bigclock_pane_g1

0xd2c7,	// (0x0003ccd6) main_fs_bigclock_pane_t1_ParamLimits

0xd2c7,	// (0x0003ccd6) main_fs_bigclock_pane_t1

0xd2d9,	// (0x0003cce8) main_fs_bigclock_pane_t2_ParamLimits

0xd2d9,	// (0x0003cce8) main_fs_bigclock_pane_t2

0xd2ed,	// (0x0003ccfc) main_fs_bigclock_pane_t3_ParamLimits

0xd2ed,	// (0x0003ccfc) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0003f89a) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0003f89a) main_fs_bigclock_pane_t

0x4244,	// (0x00033c53) main_fs_bigclock_indicator_pane_g1

0x3321,	// (0x00032d30) ncim_query_content_pane_g2_ParamLimits

0x3321,	// (0x00032d30) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0003f628) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0003f628) ncim_query_content_pane_g

0xcafd,	// (0x0003c50c) sc_clock_pane_t4_ParamLimits

0xcafd,	// (0x0003c50c) sc_clock_pane_t4

0xf0e1,	// (0x0003eaf0) main_radioblah_pane

0x2458,	// (0x00031e67) cell_call4_button_pane_t1_copy1_ParamLimits

0x2458,	// (0x00031e67) cell_call4_button_pane_t1_copy1

0xc7d1,	// (0x0003c1e0) main_ncimui_pane_t1_ParamLimits

0xc7d1,	// (0x0003c1e0) main_ncimui_pane_t1

0xc7e3,	// (0x0003c1f2) main_ncimui_pane_t2_ParamLimits

0xc7e3,	// (0x0003c1f2) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0003f621) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0003f621) main_ncimui_pane_t

0x3763,	// (0x00033172) main_radioblah_anim_pane_ParamLimits

0x3763,	// (0x00033172) main_radioblah_anim_pane

0x3774,	// (0x00033183) main_radioblah_info_pane_ParamLimits

0x3774,	// (0x00033183) main_radioblah_info_pane

0x3788,	// (0x00033197) main_radioblah_pane_t1_ParamLimits

0x3788,	// (0x00033197) main_radioblah_pane_t1

0x37a4,	// (0x000331b3) main_radioblah_pane_t2_ParamLimits

0x37a4,	// (0x000331b3) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0003f6bc) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0003f6bc) main_radioblah_pane_t

0xcbbf,	// (0x0003c5ce) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcbbf,	// (0x0003c5ce) main_radioblah_rocker_ctrl_pane

0x37ec,	// (0x000331fb) main_radioblah_info_pane_t1_ParamLimits

0x37ec,	// (0x000331fb) main_radioblah_info_pane_t1

0xcc04,	// (0x0003c613) main_radioblah_info_pane_t2_ParamLimits

0xcc04,	// (0x0003c613) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0003f6c5) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0003f6c5) main_radioblah_info_pane_t

0x184a,	// (0x00031259) main_radioblah_rocker_ctrl_pane_g1

0xccb4,	// (0x0003c6c3) main_radioblah_rocker_ctrl_pane_g2

0xccbc,	// (0x0003c6cb) main_radioblah_rocker_ctrl_pane_g3

0xccc4,	// (0x0003c6d3) main_radioblah_rocker_ctrl_pane_g4

0xcccc,	// (0x0003c6db) main_radioblah_rocker_ctrl_pane_g5

0xccd4,	// (0x0003c6e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0003f6ce) main_radioblah_rocker_ctrl_pane_g

0xc791,	// (0x0003c1a0) main_cset_text2_pane_t1_copy1_ParamLimits

0xb096,	// (0x0003aaa5) cam4_image_uncrop_qvga_pane

0xb1dd,	// (0x0003abec) vid4_image_uncrop_qcif_pane

0xc3b5,	// (0x0003bdc4) cam6_image_uncrop_qvga_pane_ParamLimits

0xc3b5,	// (0x0003bdc4) cam6_image_uncrop_qvga_pane

0x2f60,	// (0x0003296f) vid6_image_uncrop_qcif_pane_ParamLimits

0x2f60,	// (0x0003296f) vid6_image_uncrop_qcif_pane

0xda84,	// (0x0003d493) bg_popup_preview_window_pane_cp03

0x32d3,	// (0x00032ce2) list_cset_text2_pane

0x32db,	// (0x00032cea) main_cset6_text2_pane_g1

0x32e3,	// (0x00032cf2) main_cset6_text2_pane_t1

0xccdc,	// (0x0003c6eb) list_cset_text2_pane_t1_ParamLimits

0xccdc,	// (0x0003c6eb) list_cset_text2_pane_t1

0xf0e1,	// (0x0003eaf0) main_radioblah_pane_ParamLimits

0xca5c,	// (0x0003c46b) main_mobtv_info_pane_t3_ParamLimits

0xca5c,	// (0x0003c46b) main_mobtv_info_pane_t3

0xcbad,	// (0x0003c5bc) main_radioblah_pane_g1

0xcbd8,	// (0x0003c5e7) main_radioblah_info_pane_g1

0xcc59,	// (0x0003c668) main_radioblah_info_pane_t3_ParamLimits

0xcc59,	// (0x0003c668) main_radioblah_info_pane_t3

0x8061,	// (0x00037a70) highlight_cell_cale_month_pane_ParamLimits

0x8061,	// (0x00037a70) highlight_cell_cale_month_pane

0xda84,	// (0x0003d493) main_phob_fisheye_pane

0x1ba4,	// (0x000315b3) scroll_pane_cp0031_ParamLimits

0x1ba4,	// (0x000315b3) scroll_pane_cp0031

0x306e,	// (0x00032a7d) wait_bar_pane_cp08_ParamLimits

0xc55a,	// (0x0003bf69) cset_list_set_pane_copy1_ParamLimits

0x3826,	// (0x00033235) highlight_cell_cale_month_pane_g1

0xccf9,	// (0x0003c708) highlight_cell_cale_month_pane_t1

0x2bfa,	// (0x00032609) list_gen_pane_cp01

0x2722,	// (0x00032131) scroll_pane_01

0xcd07,	// (0x0003c716) list_single_double_fisheye_pane

0x5b40,	// (0x0003554f) list_double_fisheye_pane_g1_ParamLimits

0x5b40,	// (0x0003554f) list_double_fisheye_pane_g1

0x5b4c,	// (0x0003555b) list_double_fisheye_pane_g2_ParamLimits

0x5b4c,	// (0x0003555b) list_double_fisheye_pane_g2

0xcd10,	// (0x0003c71f) list_double_fisheye_pane_g3_ParamLimits

0xcd10,	// (0x0003c71f) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0003f6db) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0003f6db) list_double_fisheye_pane_g

0x5b7d,	// (0x0003558c) list_double_fisheye_pane_t1_ParamLimits

0x5b7d,	// (0x0003558c) list_double_fisheye_pane_t1

0x5b98,	// (0x000355a7) list_double_fisheye_pane_t2_ParamLimits

0x5b98,	// (0x000355a7) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0003f6e6) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0003f6e6) list_double_fisheye_pane_t

0xda84,	// (0x0003d493) main_call5_pane

0xcb23,	// (0x0003c532) sc_swipe_pane_ParamLimits

0xcb23,	// (0x0003c532) sc_swipe_pane

0xcd28,	// (0x0003c737) call5_image_pane_ParamLimits

0xcd28,	// (0x0003c737) call5_image_pane

0xcd38,	// (0x0003c747) call5_swipe_1_pane_ParamLimits

0xcd38,	// (0x0003c747) call5_swipe_1_pane

0xcd44,	// (0x0003c753) call5_swipe_2_pane_ParamLimits

0xcd44,	// (0x0003c753) call5_swipe_2_pane

0xcd5e,	// (0x0003c76d) popup_call5_audio_first_window_ParamLimits

0xcd5e,	// (0x0003c76d) popup_call5_audio_first_window

0x1ab6,	// (0x000314c5) call5_swipe_1_pane_g1_ParamLimits

0x1ab6,	// (0x000314c5) call5_swipe_1_pane_g1

0x3837,	// (0x00033246) call5_swipe_1_pane_g2_ParamLimits

0x3837,	// (0x00033246) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0003f6eb) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0003f6eb) call5_swipe_1_pane_g

0x3843,	// (0x00033252) call5_swipe_1_pane_t1_ParamLimits

0x3843,	// (0x00033252) call5_swipe_1_pane_t1

0x1ab6,	// (0x000314c5) call5_swipe_2_pane_g1_ParamLimits

0x1ab6,	// (0x000314c5) call5_swipe_2_pane_g1

0x3858,	// (0x00033267) call5_swipe_2_pane_g2_ParamLimits

0x3858,	// (0x00033267) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0003f6f0) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0003f6f0) call5_swipe_2_pane_g

0x3864,	// (0x00033273) call5_swipe_2_pane_t1_ParamLimits

0x3864,	// (0x00033273) call5_swipe_2_pane_t1

0x3879,	// (0x00033288) sc_swipe_pane_g1_ParamLimits

0x3879,	// (0x00033288) sc_swipe_pane_g1

0x3886,	// (0x00033295) sc_swipe_pane_g2_ParamLimits

0x3886,	// (0x00033295) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0003f6f5) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0003f6f5) sc_swipe_pane_g

0x3892,	// (0x000332a1) sc_swipe_pane_t1_ParamLimits

0x3892,	// (0x000332a1) sc_swipe_pane_t1

0xda84,	// (0x0003d493) main_cmail_launcher_pane

0xcd6c,	// (0x0003c77b) aid_size_cell_cmail_l_ParamLimits

0xcd6c,	// (0x0003c77b) aid_size_cell_cmail_l

0xcd7c,	// (0x0003c78b) grid_cmail_l_pane_ParamLimits

0xcd7c,	// (0x0003c78b) grid_cmail_l_pane

0xcd8c,	// (0x0003c79b) cell_cmail_l_pane_ParamLimits

0xcd8c,	// (0x0003c79b) cell_cmail_l_pane

0xcda0,	// (0x0003c7af) cell_cmail_l_pane_g1_ParamLimits

0xcda0,	// (0x0003c7af) cell_cmail_l_pane_g1

0xcdac,	// (0x0003c7bb) cell_cmail_l_pane_t1_ParamLimits

0xcdac,	// (0x0003c7bb) cell_cmail_l_pane_t1

0x38a7,	// (0x000332b6) cell_cmail_l_pane_t2_ParamLimits

0x38a7,	// (0x000332b6) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0003f6fa) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0003f6fa) cell_cmail_l_pane_t

0xf0e1,	// (0x0003eaf0) grid_highlight_pane_cp018_ParamLimits

0xf0e1,	// (0x0003eaf0) grid_highlight_pane_cp018

0x65a4,	// (0x00035fb3) main2_pane_ParamLimits

0x65a4,	// (0x00035fb3) main2_pane

0xe2ca,	// (0x0003dcd9) popup_sp_fs_action_menu_bg_pane_g1

0xe2d2,	// (0x0003dce1) popup_sp_fs_action_menu_bg_pane_g2

0xe2da,	// (0x0003dce9) popup_sp_fs_action_menu_bg_pane_g3

0xe2e2,	// (0x0003dcf1) popup_sp_fs_action_menu_bg_pane_g4

0xe2ea,	// (0x0003dcf9) popup_sp_fs_action_menu_bg_pane_g5

0xe2f2,	// (0x0003dd01) popup_sp_fs_action_menu_bg_pane_g6

0xe2fa,	// (0x0003dd09) popup_sp_fs_action_menu_bg_pane_g7

0xe302,	// (0x0003dd11) popup_sp_fs_action_menu_bg_pane_g8

0xe30a,	// (0x0003dd19) popup_sp_fs_action_menu_bg_pane_g9

0xe312,	// (0x0003dd21) popup_sp_fs_action_menu_bg_pane_g10

0xe312,	// (0x0003dd21) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0003ebca) popup_sp_fs_action_menu_bg_pane_g

0x53c7,	// (0x00034dd6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x2_t3_g3_g1

0x53d3,	// (0x00034de2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x53d3,	// (0x00034de2) list_medium_line_x2_t3_g3_g2

0x53df,	// (0x00034dee) list_medium_line_x2_t3_g3_g3_ParamLimits

0x53df,	// (0x00034dee) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0003ec7a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0003ec7a) list_medium_line_x2_t3_g3_g

0x53eb,	// (0x00034dfa) list_medium_line_x2_t3_g3_t1_ParamLimits

0x53eb,	// (0x00034dfa) list_medium_line_x2_t3_g3_t1

0x5400,	// (0x00034e0f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5400,	// (0x00034e0f) list_medium_line_x2_t3_g3_t2

0x5412,	// (0x00034e21) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5412,	// (0x00034e21) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0003ec81) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0003ec81) list_medium_line_x2_t3_g3_t

0x53c7,	// (0x00034dd6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x2_t3_g2_g1

0x53df,	// (0x00034dee) list_medium_line_x2_t3_g2_g2_ParamLimits

0x53df,	// (0x00034dee) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0003ec88) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0003ec88) list_medium_line_x2_t3_g2_g

0x5427,	// (0x00034e36) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5427,	// (0x00034e36) list_medium_line_x2_t3_g2_t1

0x543d,	// (0x00034e4c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x543d,	// (0x00034e4c) list_medium_line_x2_t3_g2_t2

0x5412,	// (0x00034e21) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5412,	// (0x00034e21) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0003ec8d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0003ec8d) list_medium_line_x2_t3_g2_t

0x53c7,	// (0x00034dd6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x2_t4_g4_g1

0x544f,	// (0x00034e5e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x544f,	// (0x00034e5e) list_medium_line_x2_t4_g4_g2

0x53d3,	// (0x00034de2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x53d3,	// (0x00034de2) list_medium_line_x2_t4_g4_g3

0x545b,	// (0x00034e6a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x545b,	// (0x00034e6a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0003ec94) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0003ec94) list_medium_line_x2_t4_g4_g

0x5467,	// (0x00034e76) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5467,	// (0x00034e76) list_medium_line_x2_t4_g4_t1

0x5481,	// (0x00034e90) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5481,	// (0x00034e90) list_medium_line_x2_t4_g4_t2

0x5497,	// (0x00034ea6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5497,	// (0x00034ea6) list_medium_line_x2_t4_g4_t3

0x54ac,	// (0x00034ebb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x54ac,	// (0x00034ebb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0003ec9d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0003ec9d) list_medium_line_x2_t4_g4_t

0x53c7,	// (0x00034dd6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x2_t2_g4_g1

0x544f,	// (0x00034e5e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x544f,	// (0x00034e5e) list_medium_line_x2_t2_g4_g2

0x53d3,	// (0x00034de2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x53d3,	// (0x00034de2) list_medium_line_x2_t2_g4_g3

0x53df,	// (0x00034dee) list_medium_line_x2_t2_g4_g4_ParamLimits

0x53df,	// (0x00034dee) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0003ed04) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0003ed04) list_medium_line_x2_t2_g4_g

0x54be,	// (0x00034ecd) list_medium_line_x2_t2_g4_t1_ParamLimits

0x54be,	// (0x00034ecd) list_medium_line_x2_t2_g4_t1

0x5412,	// (0x00034e21) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5412,	// (0x00034e21) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0003ed0d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0003ed0d) list_medium_line_x2_t2_g4_t

0x53c7,	// (0x00034dd6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x2_t2_g3_g1

0x53d3,	// (0x00034de2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x53d3,	// (0x00034de2) list_medium_line_x2_t2_g3_g2

0x53df,	// (0x00034dee) list_medium_line_x2_t2_g3_g3_ParamLimits

0x53df,	// (0x00034dee) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0003ec7a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0003ec7a) list_medium_line_x2_t2_g3_g

0x54d3,	// (0x00034ee2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x54d3,	// (0x00034ee2) list_medium_line_x2_t2_g3_t1

0x5412,	// (0x00034e21) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5412,	// (0x00034e21) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0003ed12) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0003ed12) list_medium_line_x2_t2_g3_t

0x8213,	// (0x00037c22) main_sp_fs_list_pane_ParamLimits

0x8213,	// (0x00037c22) main_sp_fs_list_pane

0x821f,	// (0x00037c2e) sp_fs_scroll_pane_ParamLimits

0x821f,	// (0x00037c2e) sp_fs_scroll_pane

0x54e8,	// (0x00034ef7) list_medium_line_x2_t3_t1

0x54f8,	// (0x00034f07) list_medium_line_x2_t3_t2

0x5506,	// (0x00034f15) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0003ed5d) list_medium_line_x2_t3_t

0x5514,	// (0x00034f23) list_medium_line_x3_t4_t1

0x5524,	// (0x00034f33) list_medium_line_x3_t4_t2

0x5532,	// (0x00034f41) list_medium_line_x3_t4_t3

0x5506,	// (0x00034f15) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0003ed64) list_medium_line_x3_t4_t

0x5540,	// (0x00034f4f) list_medium_line_x4_t5_t1

0x5550,	// (0x00034f5f) list_medium_line_x4_t5_t2

0x5532,	// (0x00034f41) list_medium_line_x4_t5_t3

0x555e,	// (0x00034f6d) list_medium_line_x4_t5_t4

0x5506,	// (0x00034f15) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0003ed6d) list_medium_line_x4_t5_t

0x53c7,	// (0x00034dd6) list_medium_line_t4_g4_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_t4_g4_g1

0x545b,	// (0x00034e6a) list_medium_line_t4_g4_g2_ParamLimits

0x545b,	// (0x00034e6a) list_medium_line_t4_g4_g2

0x556c,	// (0x00034f7b) list_medium_line_t4_g4_g3_ParamLimits

0x556c,	// (0x00034f7b) list_medium_line_t4_g4_g3

0x53df,	// (0x00034dee) list_medium_line_t4_g4_g4_ParamLimits

0x53df,	// (0x00034dee) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0003ed78) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0003ed78) list_medium_line_t4_g4_g

0x5578,	// (0x00034f87) list_medium_line_t4_g4_t1_ParamLimits

0x5578,	// (0x00034f87) list_medium_line_t4_g4_t1

0x558d,	// (0x00034f9c) list_medium_line_t4_g4_t2_ParamLimits

0x558d,	// (0x00034f9c) list_medium_line_t4_g4_t2

0x55a2,	// (0x00034fb1) list_medium_line_t4_g4_t3_ParamLimits

0x55a2,	// (0x00034fb1) list_medium_line_t4_g4_t3

0x5412,	// (0x00034e21) list_medium_line_t4_g4_t4_ParamLimits

0x5412,	// (0x00034e21) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0003ed81) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0003ed81) list_medium_line_t4_g4_t

0x833c,	// (0x00037d4b) chi_dic_find_pane_g1

0x9279,	// (0x00038c88) main_tport_pane

0x584c,	// (0x0003525b) list_medium_line_plain_t1

0x585a,	// (0x00035269) list_medium_line_t2_g2_g1_ParamLimits

0x585a,	// (0x00035269) list_medium_line_t2_g2_g1

0x5866,	// (0x00035275) list_medium_line_t2_g2_g2_ParamLimits

0x5866,	// (0x00035275) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0003f43d) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0003f43d) list_medium_line_t2_g2_g

0x5872,	// (0x00035281) list_medium_line_t2_g2_t1_ParamLimits

0x5872,	// (0x00035281) list_medium_line_t2_g2_t1

0x588c,	// (0x0003529b) list_medium_line_t2_g2_t2_ParamLimits

0x588c,	// (0x0003529b) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0003f442) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0003f442) list_medium_line_t2_g2_t

0x5a1f,	// (0x0003542e) aid_sp_fs_list_icon_a_sm

0x5a27,	// (0x00035436) aid_sp_fs_list_icon_d

0x4079,	// (0x00033a88) aid_sp_fs_text_primary

0x3dd7,	// (0x000337e6) aid_sp_fs_text_secondary

0x5a2f,	// (0x0003543e) list_medium_line

0x5a2f,	// (0x0003543e) list_medium_line_g2

0x5a2f,	// (0x0003543e) list_medium_line_g3

0x5a2f,	// (0x0003543e) list_medium_line_plain

0x5a2f,	// (0x0003543e) list_medium_line_plain_t2

0x5a2f,	// (0x0003543e) list_medium_line_plain_t3

0x5a2f,	// (0x0003543e) list_medium_line_right_icon

0x5a2f,	// (0x0003543e) list_medium_line_right_iconx2

0x5a2f,	// (0x0003543e) list_medium_line_t2

0x5a2f,	// (0x0003543e) list_medium_line_t2_g2

0x5a2f,	// (0x0003543e) list_medium_line_t2_g3

0x5a2f,	// (0x0003543e) list_medium_line_t2_right_icon

0x5a2f,	// (0x0003543e) list_medium_line_t2_right_iconx2

0x5a2f,	// (0x0003543e) list_medium_line_t3

0x5a2f,	// (0x0003543e) list_medium_line_t3_g2

0x5a2f,	// (0x0003543e) list_medium_line_t3_g3

0x5a2f,	// (0x0003543e) list_medium_line_t3_right_iconx2

0x5a38,	// (0x00035447) list_medium_line_t4_g4

0x5a41,	// (0x00035450) list_medium_line_x2

0x5a41,	// (0x00035450) list_medium_line_x2_t2_g2

0x5a41,	// (0x00035450) list_medium_line_x2_t2_g3

0x5a41,	// (0x00035450) list_medium_line_x2_t2_g4

0x5a41,	// (0x00035450) list_medium_line_x2_t3

0x5a41,	// (0x00035450) list_medium_line_x2_t3_g2

0x5a41,	// (0x00035450) list_medium_line_x2_t3_g3

0x5a41,	// (0x00035450) list_medium_line_x2_t3_g4

0x5a41,	// (0x00035450) list_medium_line_x2_t4_g2

0x5a41,	// (0x00035450) list_medium_line_x2_t4_g4

0x5a4a,	// (0x00035459) list_medium_line_x3

0x5a4a,	// (0x00035459) list_medium_line_x3_t4

0x5a4a,	// (0x00035459) list_medium_line_x3_t4_g4

0x5a38,	// (0x00035447) list_medium_line_x4_t4

0x5a38,	// (0x00035447) list_medium_line_x4_t4_g7

0x5a38,	// (0x00035447) list_medium_line_x4_t5

0x5a53,	// (0x00035462) list_single_fs_dyc_pane_ParamLimits

0x5a53,	// (0x00035462) list_single_fs_dyc_pane

0x53c7,	// (0x00034dd6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x4_t4_g7_g1

0x5a6f,	// (0x0003547e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5a6f,	// (0x0003547e) list_medium_line_x4_t4_g7_g2

0x5a7b,	// (0x0003548a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5a7b,	// (0x0003548a) list_medium_line_x4_t4_g7_g3

0x5a8a,	// (0x00035499) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5a8a,	// (0x00035499) list_medium_line_x4_t4_g7_g4

0x5a96,	// (0x000354a5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5a96,	// (0x000354a5) list_medium_line_x4_t4_g7_g5

0x5aa5,	// (0x000354b4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5aa5,	// (0x000354b4) list_medium_line_x4_t4_g7_g6

0x5ab4,	// (0x000354c3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5ab4,	// (0x000354c3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0003f607) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0003f607) list_medium_line_x4_t4_g7_g

0x5ac0,	// (0x000354cf) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5ac0,	// (0x000354cf) list_medium_line_x4_t4_g7_t1

0x5ad5,	// (0x000354e4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5ad5,	// (0x000354e4) list_medium_line_x4_t4_g7_t2

0x5aea,	// (0x000354f9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5aea,	// (0x000354f9) list_medium_line_x4_t4_g7_t3

0x5aff,	// (0x0003550e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5aff,	// (0x0003550e) list_medium_line_x4_t4_g7_t4

0x5b11,	// (0x00035520) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5b11,	// (0x00035520) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0003f616) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0003f616) list_medium_line_x4_t4_g7_t

0x5b23,	// (0x00035532) list_single_dyc_row_pane_ParamLimits

0x5b23,	// (0x00035532) list_single_dyc_row_pane

0xcd1c,	// (0x0003c72b) call5_gesture_pane_ParamLimits

0xcd1c,	// (0x0003c72b) call5_gesture_pane

0xcd50,	// (0x0003c75f) call5_windows_pane_ParamLimits

0xcd50,	// (0x0003c75f) call5_windows_pane

0xcdc2,	// (0x0003c7d1) call5_swipe_1_pane_cp_ParamLimits

0xcdc2,	// (0x0003c7d1) call5_swipe_1_pane_cp

0xcdce,	// (0x0003c7dd) call5_swipe_2_pane_cp_ParamLimits

0xcdce,	// (0x0003c7dd) call5_swipe_2_pane_cp

0xed18,	// (0x0003e727) call5_image_pane_cp

0xcdda,	// (0x0003c7e9) popup_call5_audio_first_window_cp_ParamLimits

0xcdda,	// (0x0003c7e9) popup_call5_audio_first_window_cp

0x3879,	// (0x00033288) call5_swipe_1_pane_g1_cp_ParamLimits

0x3879,	// (0x00033288) call5_swipe_1_pane_g1_cp

0x38b9,	// (0x000332c8) call5_swipe_1_pane_g2_cp

0x3892,	// (0x000332a1) call5_swipe_1_pane_t1_cp_ParamLimits

0x3892,	// (0x000332a1) call5_swipe_1_pane_t1_cp

0x3879,	// (0x00033288) call5_swipe_2_pane_g1_cp_ParamLimits

0x3879,	// (0x00033288) call5_swipe_2_pane_g1_cp

0x38c1,	// (0x000332d0) call5_swipe_2_pane_g2_cp

0x38c9,	// (0x000332d8) call5_swipe_2_pane_t1_cp_ParamLimits

0x38c9,	// (0x000332d8) call5_swipe_2_pane_t1_cp

0xf0e1,	// (0x0003eaf0) main_sp_fs_email_pane

0x38de,	// (0x000332ed) main_sp_fs_listscroll_pane_te

0x5bba,	// (0x000355c9) popup_sp_fs_action_menu_pane_ParamLimits

0x5bba,	// (0x000355c9) popup_sp_fs_action_menu_pane

0x184a,	// (0x00031259) bg_sp_fs_ctrlbar_pane_g1

0x392b,	// (0x0003333a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3934,	// (0x00033343) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x393d,	// (0x0003334c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x184a,	// (0x00031259) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0003f6ff) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x162f,	// (0x0003103e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x162f,	// (0x0003103e) bg_sp_fs_ctrlbar_ddmenu_pane

0x3946,	// (0x00033355) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3946,	// (0x00033355) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3952,	// (0x00033361) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3952,	// (0x00033361) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0003f708) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0003f708) main_sp_fs_ctrlbar_ddmenu_pane_g

0x395e,	// (0x0003336d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x395e,	// (0x0003336d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5bfe,	// (0x0003560d) list_medium_line_t2_right_icon_g1

0x5c06,	// (0x00035615) list_medium_line_t2_right_icon_t1

0x5c16,	// (0x00035625) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0003f70d) list_medium_line_t2_right_icon_t

0x1344,	// (0x00030d53) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1344,	// (0x00030d53) bg_sp_fs_ctrlbar_pane

0xce3f,	// (0x0003c84e) main_sp_fs_ctrlbar_button_pane_cp01

0xce47,	// (0x0003c856) main_sp_fs_ctrlbar_ddmenu_pane

0x39b8,	// (0x000333c7) main_sp_fs_ctrlbar_pane_g1

0x39c4,	// (0x000333d3) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0003f712) main_sp_fs_ctrlbar_pane_g

0x39d0,	// (0x000333df) main_sp_fs_ctrlbar_pane_t1

0x5c24,	// (0x00035633) main_sp_fs_ctrlbar_pane

0x5c40,	// (0x0003564f) main_sp_fs_listscroll_pane_te_cp01

0x5c51,	// (0x00035660) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5c51,	// (0x00035660) popup_sp_fs_action_menu_pane_cp01

0xf0e1,	// (0x0003eaf0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_sp_fs_highlight_list_pane_cp01

0x5c69,	// (0x00035678) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5c69,	// (0x00035678) sp_fs_action_menu_list_gene_pane_g1

0x39f4,	// (0x00033403) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x39f4,	// (0x00033403) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0003f717) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0003f717) sp_fs_action_menu_list_gene_pane_g

0x5c78,	// (0x00035687) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5c78,	// (0x00035687) sp_fs_action_menu_list_gene_pane_t1

0x5c90,	// (0x0003569f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5c90,	// (0x0003569f) sp_fs_action_menu_list_gene_pane

0x3a3a,	// (0x00033449) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3a3a,	// (0x00033449) popup_sp_fs_action_menu_bg_pane

0x5caf,	// (0x000356be) sp_fs_action_menu_list_pane_ParamLimits

0x5caf,	// (0x000356be) sp_fs_action_menu_list_pane

0x3a6a,	// (0x00033479) sp_fs_scroll_pane_cp01_ParamLimits

0x3a6a,	// (0x00033479) sp_fs_scroll_pane_cp01

0x5ccf,	// (0x000356de) list_medium_line_plain_t2_t1

0x5cdf,	// (0x000356ee) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0003f71c) list_medium_line_plain_t2_t

0x5ced,	// (0x000356fc) list_medium_line_plain_t3_t1

0x5cfd,	// (0x0003570c) list_medium_line_plain_t3_t2

0x5d0b,	// (0x0003571a) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0003f721) list_medium_line_plain_t3_t

0x53c7,	// (0x00034dd6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x2_t2_g2_g1

0x53df,	// (0x00034dee) list_medium_line_x2_t2_g2_g2_ParamLimits

0x53df,	// (0x00034dee) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0003ec88) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0003ec88) list_medium_line_x2_t2_g2_g

0x5578,	// (0x00034f87) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5578,	// (0x00034f87) list_medium_line_x2_t2_g2_t1

0x5412,	// (0x00034e21) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5412,	// (0x00034e21) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0003f728) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0003f728) list_medium_line_x2_t2_g2_t

0x53c7,	// (0x00034dd6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x2_t4_g2_g1

0x5d19,	// (0x00035728) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5d19,	// (0x00035728) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0003f72d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0003f72d) list_medium_line_x2_t4_g2_g

0x5d2b,	// (0x0003573a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5d2b,	// (0x0003573a) list_medium_line_x2_t4_g2_t1

0x5d45,	// (0x00035754) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5d45,	// (0x00035754) list_medium_line_x2_t4_g2_t2

0x5d5a,	// (0x00035769) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5d5a,	// (0x00035769) list_medium_line_x2_t4_g2_t3

0x5412,	// (0x00034e21) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5412,	// (0x00034e21) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x0003f732) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x0003f732) list_medium_line_x2_t4_g2_t

0x5d6f,	// (0x0003577e) list_medium_line_t3_right_iconx2_g1

0x5bfe,	// (0x0003560d) list_medium_line_t3_right_iconx2_g2

0x5d77,	// (0x00035786) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0003f73b) list_medium_line_t3_right_iconx2_g

0x5d7f,	// (0x0003578e) list_medium_line_t3_right_iconx2_t1

0x5d8f,	// (0x0003579e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x0003f742) list_medium_line_t3_right_iconx2_t

0x53c7,	// (0x00034dd6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x3_t4_g4_g1

0x53d3,	// (0x00034de2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x53d3,	// (0x00034de2) list_medium_line_x3_t4_g4_g2

0x545b,	// (0x00034e6a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x545b,	// (0x00034e6a) list_medium_line_x3_t4_g4_g3

0x5d9d,	// (0x000357ac) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5d9d,	// (0x000357ac) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x0003f747) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x0003f747) list_medium_line_x3_t4_g4_g

0x5da9,	// (0x000357b8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5da9,	// (0x000357b8) list_medium_line_x3_t4_g4_t1

0x5dc0,	// (0x000357cf) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5dc0,	// (0x000357cf) list_medium_line_x3_t4_g4_t2

0x558d,	// (0x00034f9c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x558d,	// (0x00034f9c) list_medium_line_x3_t4_g4_t3

0x5dd5,	// (0x000357e4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5dd5,	// (0x000357e4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x0003f750) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x0003f750) list_medium_line_x3_t4_g4_t

0x5df2,	// (0x00035801) list_single_dyc_row_text_pane_t1_ParamLimits

0x5df2,	// (0x00035801) list_single_dyc_row_text_pane_t1

0x5e29,	// (0x00035838) list_single_dyc_row_text_pane_t2_ParamLimits

0x5e29,	// (0x00035838) list_single_dyc_row_text_pane_t2

0x5e83,	// (0x00035892) list_single_dyc_row_text_pane_t3_ParamLimits

0x5e83,	// (0x00035892) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x0003f759) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x0003f759) list_single_dyc_row_text_pane_t

0x5e95,	// (0x000358a4) list_single_dyc_row_pane_g1_ParamLimits

0x5e95,	// (0x000358a4) list_single_dyc_row_pane_g1

0x5ea1,	// (0x000358b0) list_single_dyc_row_pane_g2_ParamLimits

0x5ea1,	// (0x000358b0) list_single_dyc_row_pane_g2

0x5ead,	// (0x000358bc) list_single_dyc_row_pane_g3_ParamLimits

0x5ead,	// (0x000358bc) list_single_dyc_row_pane_g3

0x5eb9,	// (0x000358c8) list_single_dyc_row_pane_g4_ParamLimits

0x5eb9,	// (0x000358c8) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x0003f760) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x0003f760) list_single_dyc_row_pane_g

0x5ec5,	// (0x000358d4) list_single_dyc_row_text_pane_ParamLimits

0x5ec5,	// (0x000358d4) list_single_dyc_row_text_pane

0xda84,	// (0x0003d493) bg_sp_fs_scroll_pane

0x3b22,	// (0x00033531) thumb_sp_fs_scroll_pane

0x585a,	// (0x00035269) list_medium_line_g1_ParamLimits

0x585a,	// (0x00035269) list_medium_line_g1

0x5ee4,	// (0x000358f3) list_medium_line_t1_ParamLimits

0x5ee4,	// (0x000358f3) list_medium_line_t1

0x53c7,	// (0x00034dd6) list_medium_line_x2_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x2_g1

0x53d3,	// (0x00034de2) list_medium_line_x2_g2_ParamLimits

0x53d3,	// (0x00034de2) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x0003f769) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x0003f769) list_medium_line_x2_g

0x5ef9,	// (0x00035908) list_medium_line_x2_t1_ParamLimits

0x5ef9,	// (0x00035908) list_medium_line_x2_t1

0x53c7,	// (0x00034dd6) list_medium_line_x3_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x3_g1

0x53d3,	// (0x00034de2) list_medium_line_x3_g2_ParamLimits

0x53d3,	// (0x00034de2) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x0003f769) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x0003f769) list_medium_line_x3_g

0x5ef9,	// (0x00035908) list_medium_line_x3_t1_ParamLimits

0x5ef9,	// (0x00035908) list_medium_line_x3_t1

0x3b56,	// (0x00033565) thumb_sp_fs_scroll_pane_g1

0x3b5f,	// (0x0003356e) thumb_sp_fs_scroll_pane_g2

0x3b68,	// (0x00033577) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0003f76e) thumb_sp_fs_scroll_pane_g

0x3b56,	// (0x00033565) bg_sp_fs_scroll_pane_g1

0x3b5f,	// (0x0003356e) bg_sp_fs_scroll_pane_g2

0x3b68,	// (0x00033577) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0003f76e) bg_sp_fs_scroll_pane_g

0x53c7,	// (0x00034dd6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x53c7,	// (0x00034dd6) list_medium_line_x2_t3_g4_g1

0x544f,	// (0x00034e5e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x544f,	// (0x00034e5e) list_medium_line_x2_t3_g4_g2

0x53d3,	// (0x00034de2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x53d3,	// (0x00034de2) list_medium_line_x2_t3_g4_g3

0x53df,	// (0x00034dee) list_medium_line_x2_t3_g4_g4_ParamLimits

0x53df,	// (0x00034dee) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0003ed04) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0003ed04) list_medium_line_x2_t3_g4_g

0x5f0f,	// (0x0003591e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5f0f,	// (0x0003591e) list_medium_line_x2_t3_g4_t1

0x5f25,	// (0x00035934) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5f25,	// (0x00035934) list_medium_line_x2_t3_g4_t2

0x5412,	// (0x00034e21) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5412,	// (0x00034e21) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0003f775) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0003f775) list_medium_line_x2_t3_g4_t

0x585a,	// (0x00035269) list_medium_line_g2_g1_ParamLimits

0x585a,	// (0x00035269) list_medium_line_g2_g1

0x5866,	// (0x00035275) list_medium_line_g2_g2_ParamLimits

0x5866,	// (0x00035275) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0003f43d) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0003f43d) list_medium_line_g2_g

0x5f3f,	// (0x0003594e) list_medium_line_g2_t1_ParamLimits

0x5f3f,	// (0x0003594e) list_medium_line_g2_t1

0x585a,	// (0x00035269) list_medium_line_t3_g2_g1_ParamLimits

0x585a,	// (0x00035269) list_medium_line_t3_g2_g1

0x5866,	// (0x00035275) list_medium_line_t3_g2_g2_ParamLimits

0x5866,	// (0x00035275) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0003f43d) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0003f43d) list_medium_line_t3_g2_g

0x5f54,	// (0x00035963) list_medium_line_t3_g2_t1_ParamLimits

0x5f54,	// (0x00035963) list_medium_line_t3_g2_t1

0x5f6b,	// (0x0003597a) list_medium_line_t3_g2_t2_ParamLimits

0x5f6b,	// (0x0003597a) list_medium_line_t3_g2_t2

0x5f80,	// (0x0003598f) list_medium_line_t3_g2_t3_ParamLimits

0x5f80,	// (0x0003598f) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0003f77c) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0003f77c) list_medium_line_t3_g2_t

0x5bfe,	// (0x0003560d) list_medium_line_right_icon_g1

0x5f95,	// (0x000359a4) list_medium_line_right_icon_t1

0x585a,	// (0x00035269) list_medium_line_t2_g1_ParamLimits

0x585a,	// (0x00035269) list_medium_line_t2_g1

0x5fa3,	// (0x000359b2) list_medium_line_t2_t1_ParamLimits

0x5fa3,	// (0x000359b2) list_medium_line_t2_t1

0x5fbd,	// (0x000359cc) list_medium_line_t2_t2_ParamLimits

0x5fbd,	// (0x000359cc) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0003f783) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0003f783) list_medium_line_t2_t

0x585a,	// (0x00035269) list_medium_line_t3_g1_ParamLimits

0x585a,	// (0x00035269) list_medium_line_t3_g1

0x5fd2,	// (0x000359e1) list_medium_line_t3_t1_ParamLimits

0x5fd2,	// (0x000359e1) list_medium_line_t3_t1

0x5fe9,	// (0x000359f8) list_medium_line_t3_t2_ParamLimits

0x5fe9,	// (0x000359f8) list_medium_line_t3_t2

0x5ffe,	// (0x00035a0d) list_medium_line_t3_t3_ParamLimits

0x5ffe,	// (0x00035a0d) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0003f788) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0003f788) list_medium_line_t3_t

0x585a,	// (0x00035269) list_medium_line_g3_g1_ParamLimits

0x585a,	// (0x00035269) list_medium_line_g3_g1

0x6010,	// (0x00035a1f) list_medium_line_g3_g2_ParamLimits

0x6010,	// (0x00035a1f) list_medium_line_g3_g2

0x5866,	// (0x00035275) list_medium_line_g3_g3_ParamLimits

0x5866,	// (0x00035275) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0003f78f) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0003f78f) list_medium_line_g3_g

0x601c,	// (0x00035a2b) list_medium_line_g3_t1_ParamLimits

0x601c,	// (0x00035a2b) list_medium_line_g3_t1

0x585a,	// (0x00035269) list_medium_line_t2_g3_g1_ParamLimits

0x585a,	// (0x00035269) list_medium_line_t2_g3_g1

0x6010,	// (0x00035a1f) list_medium_line_t2_g3_g2_ParamLimits

0x6010,	// (0x00035a1f) list_medium_line_t2_g3_g2

0x5866,	// (0x00035275) list_medium_line_t2_g3_g3_ParamLimits

0x5866,	// (0x00035275) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0003f78f) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0003f78f) list_medium_line_t2_g3_g

0x6031,	// (0x00035a40) list_medium_line_t2_g3_t1_ParamLimits

0x6031,	// (0x00035a40) list_medium_line_t2_g3_t1

0x604b,	// (0x00035a5a) list_medium_line_t2_g3_t2_ParamLimits

0x604b,	// (0x00035a5a) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0003f796) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0003f796) list_medium_line_t2_g3_t

0x585a,	// (0x00035269) list_medium_line_t3_g3_g1_ParamLimits

0x585a,	// (0x00035269) list_medium_line_t3_g3_g1

0x6010,	// (0x00035a1f) list_medium_line_t3_g3_g2_ParamLimits

0x6010,	// (0x00035a1f) list_medium_line_t3_g3_g2

0x5866,	// (0x00035275) list_medium_line_t3_g3_g3_ParamLimits

0x5866,	// (0x00035275) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0003f78f) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0003f78f) list_medium_line_t3_g3_g

0x6060,	// (0x00035a6f) list_medium_line_t3_g3_t1_ParamLimits

0x6060,	// (0x00035a6f) list_medium_line_t3_g3_t1

0x6074,	// (0x00035a83) list_medium_line_t3_g3_t2_ParamLimits

0x6074,	// (0x00035a83) list_medium_line_t3_g3_t2

0x6086,	// (0x00035a95) list_medium_line_t3_g3_t3_ParamLimits

0x6086,	// (0x00035a95) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0003f79b) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0003f79b) list_medium_line_t3_g3_t

0x5d6f,	// (0x0003577e) list_medium_line_right_iconx2_g1

0x5bfe,	// (0x0003560d) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0003f7a2) list_medium_line_right_iconx2_g

0x6098,	// (0x00035aa7) list_medium_line_right_iconx2_t1

0x5d6f,	// (0x0003577e) list_medium_line_t2_right_iconx2_g1

0x5bfe,	// (0x0003560d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0003f7a2) list_medium_line_t2_right_iconx2_g

0x60a6,	// (0x00035ab5) list_medium_line_t2_right_iconx2_t1

0x60b6,	// (0x00035ac5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x0003f7a7) list_medium_line_t2_right_iconx2_t

0x60c4,	// (0x00035ad3) list_medium_line_x4_t4_t1

0x60d2,	// (0x00035ae1) list_medium_line_x4_t4_t2

0x60e2,	// (0x00035af1) list_medium_line_x4_t4_t3

0x60f2,	// (0x00035b01) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0003f7ac) list_medium_line_x4_t4_t

0xce7a,	// (0x0003c889) tport_appsw_pane_ParamLimits

0xce7a,	// (0x0003c889) tport_appsw_pane

0xce86,	// (0x0003c895) tport_contact_pane_ParamLimits

0xce86,	// (0x0003c895) tport_contact_pane

0xce96,	// (0x0003c8a5) tport_listscroll_pane_ParamLimits

0xce96,	// (0x0003c8a5) tport_listscroll_pane

0xcea6,	// (0x0003c8b5) cell_tport_appsw_pane_ParamLimits

0xcea6,	// (0x0003c8b5) cell_tport_appsw_pane

0x1b27,	// (0x00031536) tport_appsw_pane_g1_ParamLimits

0x1b27,	// (0x00031536) tport_appsw_pane_g1

0x3bd1,	// (0x000335e0) tport_contact_pane_g1

0x33a7,	// (0x00032db6) tport_contact_pane_t1

0x3bda,	// (0x000335e9) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0003f7b5) tport_contact_pane_t

0x3be8,	// (0x000335f7) list_tport_pane

0x3bf1,	// (0x00033600) scroll_pane_cp_030

0x3c02,	// (0x00033611) cell_tport_appsw_pane_g1

0x3c12,	// (0x00033621) cell_tport_appsw_pane_t1

0xda84,	// (0x0003d493) grid_highlight_pane_cp019

0xced1,	// (0x0003c8e0) list_tport_double_graphic_pane_ParamLimits

0xced1,	// (0x0003c8e0) list_tport_double_graphic_pane

0xf0e1,	// (0x0003eaf0) list_highlight_pane_cp023_ParamLimits

0xf0e1,	// (0x0003eaf0) list_highlight_pane_cp023

0xcee3,	// (0x0003c8f2) list_tport_double_graphic_pane_g1_ParamLimits

0xcee3,	// (0x0003c8f2) list_tport_double_graphic_pane_g1

0xcef0,	// (0x0003c8ff) list_tport_double_graphic_pane_t1_ParamLimits

0xcef0,	// (0x0003c8ff) list_tport_double_graphic_pane_t1

0xcf05,	// (0x0003c914) list_tport_double_graphic_pane_t2_ParamLimits

0xcf05,	// (0x0003c914) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0003f7c1) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0003f7c1) list_tport_double_graphic_pane_t

0xda84,	// (0x0003d493) main_cale_note_pane

0xb42d,	// (0x0003ae3c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb42d,	// (0x0003ae3c) cell_vitu2_function_top_wide_pane_cp01

0xca70,	// (0x0003c47f) wait_bar_pane_cp05_ParamLimits

0xda84,	// (0x0003d493) listscroll_cmail_pane

0x3c28,	// (0x00033637) list_cmail_pane

0xcf21,	// (0x0003c930) list_cmail_body_pane

0xcf3e,	// (0x0003c94d) list_single_cmail_header_caption_pane

0xcf63,	// (0x0003c972) list_single_cmail_header_detail_pane_ParamLimits

0xcf63,	// (0x0003c972) list_single_cmail_header_detail_pane

0xcf96,	// (0x0003c9a5) list_single_cmail_header_caption_pane_t1

0x6102,	// (0x00035b11) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6102,	// (0x00035b11) list_single_cmail_header_detail_pane_g1

0x6118,	// (0x00035b27) list_single_cmail_header_detail_pane_g2_ParamLimits

0x6118,	// (0x00035b27) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0003f7c6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0003f7c6) list_single_cmail_header_detail_pane_g

0x6124,	// (0x00035b33) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6124,	// (0x00035b33) list_single_cmail_header_detail_pane_t1

0x617e,	// (0x00035b8d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x617e,	// (0x00035b8d) list_single_cmail_header_editor_pane_bg

0x3536,	// (0x00032f45) list_cmail_body_pane_g1

0x3cc3,	// (0x000336d2) list_cmail_body_pane_t1

0x2608,	// (0x00032017) list_single_cmail_header_editor_pane_bg_g1

0xe62d,	// (0x0003e03c) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2618,	// (0x00032027) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2610,	// (0x0003201f) list_single_cmail_header_editor_pane_bg_g1_copy3

0x28ad,	// (0x000322bc) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2638,	// (0x00032047) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2628,	// (0x00032037) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2630,	// (0x0003203f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe60d,	// (0x0003e01c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcfa4,	// (0x0003c9b3) calenote_gesture_pane_ParamLimits

0xcfa4,	// (0x0003c9b3) calenote_gesture_pane

0xcfbe,	// (0x0003c9cd) calenote_window_pane_ParamLimits

0xcfbe,	// (0x0003c9cd) calenote_window_pane

0x3cd1,	// (0x000336e0) popup_note_window_cp01

0xcfd6,	// (0x0003c9e5) calenote_swipe_1_pane_ParamLimits

0xcfd6,	// (0x0003c9e5) calenote_swipe_1_pane

0xcdce,	// (0x0003c7dd) calenote_swipe_2_pane_ParamLimits

0xcdce,	// (0x0003c7dd) calenote_swipe_2_pane

0x3879,	// (0x00033288) calenote_swipe_1_pane_g1_ParamLimits

0x3879,	// (0x00033288) calenote_swipe_1_pane_g1

0x3886,	// (0x00033295) calenote_swipe_1_pane_g2_ParamLimits

0x3886,	// (0x00033295) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0003f6f5) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0003f6f5) calenote_swipe_1_pane_g

0x3ce3,	// (0x000336f2) calenote_swipe_1_pane_t1_ParamLimits

0x3ce3,	// (0x000336f2) calenote_swipe_1_pane_t1

0x3879,	// (0x00033288) calenote_swipe_2_pane_g1_ParamLimits

0x3879,	// (0x00033288) calenote_swipe_2_pane_g1

0x3d02,	// (0x00033711) calenote_swipe_2_pane_g2_ParamLimits

0x3d02,	// (0x00033711) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0003f7d2) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0003f7d2) calenote_swipe_2_pane_g

0x3d0e,	// (0x0003371d) calenote_swipe_2_pane_t1_ParamLimits

0x3d0e,	// (0x0003371d) calenote_swipe_2_pane_t1

0xda84,	// (0x0003d493) main_mup_navstr_pane

0xa1e5,	// (0x00039bf4) main_mup3_pane_t7_ParamLimits

0xa1e5,	// (0x00039bf4) main_mup3_pane_t7

0xabca,	// (0x0003a5d9) main_mp4_pane_g6_ParamLimits

0xabca,	// (0x0003a5d9) main_mp4_pane_g6

0xaf3c,	// (0x0003a94b) main_image3_pane_t4_ParamLimits

0xaf3c,	// (0x0003a94b) main_image3_pane_t4

0xcfe9,	// (0x0003c9f8) popup_navstr_preview_pane_ParamLimits

0xcfe9,	// (0x0003c9f8) popup_navstr_preview_pane

0xcff5,	// (0x0003ca04) scroll_navstr_pane_ParamLimits

0xcff5,	// (0x0003ca04) scroll_navstr_pane

0xda84,	// (0x0003d493) bg_popup_preview_window_pane_cp04

0x3d35,	// (0x00033744) popup_navstr_preview_pane_t1

0xd001,	// (0x0003ca10) scroll_navstr_pane_g1_ParamLimits

0xd001,	// (0x0003ca10) scroll_navstr_pane_g1

0xd00e,	// (0x0003ca1d) scroll_navstr_pane_t1_ParamLimits

0xd00e,	// (0x0003ca1d) scroll_navstr_pane_t1

0x3cda,	// (0x000336e9) bg_button_pane_cp014

0x3cda,	// (0x000336e9) bg_button_pane_cp030

0x5b60,	// (0x0003556f) list_double_fisheye_pane_g4_ParamLimits

0x5b60,	// (0x0003556f) list_double_fisheye_pane_g4

0x5b6c,	// (0x0003557b) list_double_fisheye_pane_g5_ParamLimits

0x5b6c,	// (0x0003557b) list_double_fisheye_pane_g5

0x3c30,	// (0x0003363f) sp_fs_scroll_pane_cp03

0x39b8,	// (0x000333c7) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x39c4,	// (0x000333d3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0003f712) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x39d0,	// (0x000333df) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcf17,	// (0x0003c926) sp_fs_scroll_pane_cp02

0xe335,	// (0x0003dd44) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe335,	// (0x0003dd44) popup_sp_fs_calendar_preview_list_single_pane

0xda84,	// (0x0003d493) main_cam6_pano_pane

0xf0e1,	// (0x0003eaf0) main_mup3_pane_ParamLimits

0xda84,	// (0x0003d493) main_phacti_pane

0xc945,	// (0x0003c354) bg_button_pane_cp11

0xc95d,	// (0x0003c36c) main_mobtv_info_pane_g2_ParamLimits

0xc95d,	// (0x0003c36c) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0003f672) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0003f672) main_mobtv_info_pane_g

0xcb0f,	// (0x0003c51e) sc_clock_pane_t5_ParamLimits

0xcb0f,	// (0x0003c51e) sc_clock_pane_t5

0xcbad,	// (0x0003c5bc) main_radioblah_pane_g1_ParamLimits

0x37bc,	// (0x000331cb) main_radioblah_pane_t3_ParamLimits

0x37bc,	// (0x000331cb) main_radioblah_pane_t3

0x37d4,	// (0x000331e3) main_radioblah_pane_t4_ParamLimits

0x37d4,	// (0x000331e3) main_radioblah_pane_t4

0xcbcb,	// (0x0003c5da) main_radioblah_text_pane_ParamLimits

0xcbcb,	// (0x0003c5da) main_radioblah_text_pane

0xcbd8,	// (0x0003c5e7) main_radioblah_info_pane_g1_ParamLimits

0xcc6d,	// (0x0003c67c) main_radioblah_info_pane_t4_ParamLimits

0xcc6d,	// (0x0003c67c) main_radioblah_info_pane_t4

0xf0e1,	// (0x0003eaf0) main_sp_fs_calendar_pane

0xd020,	// (0x0003ca2f) main_phacti_pane_g1

0xd028,	// (0x0003ca37) phacti_note_pane_ParamLimits

0xd028,	// (0x0003ca37) phacti_note_pane

0x3d4c,	// (0x0003375b) phacti_term_pane_ParamLimits

0x3d4c,	// (0x0003375b) phacti_term_pane

0x3d61,	// (0x00033770) phacti_note_pane_t1_ParamLimits

0x3d61,	// (0x00033770) phacti_note_pane_t1

0x6190,	// (0x00035b9f) phacti_term_pane_g1

0x6198,	// (0x00035ba7) phacti_term_pane_t1_ParamLimits

0x6198,	// (0x00035ba7) phacti_term_pane_t1

0x3daa,	// (0x000337b9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe428,	// (0x0003de37) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0003f7dc) popup_sp_fs_calendar_preview_list_single_pane_g

0x3db2,	// (0x000337c1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3db2,	// (0x000337c1) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3dc7,	// (0x000337d6) aid_popup_sp_fs_bg_corner_pane

0x184a,	// (0x00031259) popup_sp_fs_calendar_preview_bg_pane_g1

0xda84,	// (0x0003d493) popup_sp_fs_calendar_preview_bg_pane

0x3dcf,	// (0x000337de) popup_sp_fs_calendar_preview_list_pane

0xf0e1,	// (0x0003eaf0) bg_main_sp_fs_cale_pane_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_main_sp_fs_cale_pane

0x61c2,	// (0x00035bd1) listscroll_cale_mrui_pane_ParamLimits

0x61c2,	// (0x00035bd1) listscroll_cale_mrui_pane

0x61d6,	// (0x00035be5) listscroll_sp_fs_schedule_track_pane

0x61df,	// (0x00035bee) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x61df,	// (0x00035bee) main_sp_fs_ctrlbar_pane_cp01

0x3e0e,	// (0x0003381d) main_sp_fs_ribbon_pane

0x3e16,	// (0x00033825) popup_sp_fs_cale_preview_window

0x3c40,	// (0x0003364f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x3c40,	// (0x0003364f) list_single_sp_fs_schedule_track_pane

0x6724,	// (0x00036133) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6724,	// (0x00036133) bg_sp_fs_highlight_list_pane_cp03

0xd067,	// (0x0003ca76) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd067,	// (0x0003ca76) list_single_sp_fs_schedule_track_pane_g1

0xd073,	// (0x0003ca82) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd073,	// (0x0003ca82) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0003f7e1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0003f7e1) list_single_sp_fs_schedule_track_pane_g

0xd07f,	// (0x0003ca8e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd07f,	// (0x0003ca8e) list_single_sp_fs_schedule_track_pane_t1

0xd097,	// (0x0003caa6) sp_fs_schedule_track_pane_ParamLimits

0xd097,	// (0x0003caa6) sp_fs_schedule_track_pane

0x3e28,	// (0x00033837) sp_fs_schedule_track_pane_g1

0x3e30,	// (0x0003383f) sp_fs_schedule_track_pane_g2

0x3e38,	// (0x00033847) sp_fs_schedule_track_pane_g3

0x3e40,	// (0x0003384f) sp_fs_schedule_track_pane_g4

0x3e48,	// (0x00033857) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0003f7e6) sp_fs_schedule_track_pane_g

0x2608,	// (0x00032017) bg_sp_fs_schedule_viewer_highlight_g1

0xe62d,	// (0x0003e03c) bg_sp_fs_schedule_viewer_highlight_g2

0x2610,	// (0x0003201f) bg_sp_fs_schedule_viewer_highlight_g3

0x2618,	// (0x00032027) bg_sp_fs_schedule_viewer_highlight_g4

0x28ad,	// (0x000322bc) bg_sp_fs_schedule_viewer_highlight_g5

0x2628,	// (0x00032037) bg_sp_fs_schedule_viewer_highlight_g6

0x2630,	// (0x0003203f) bg_sp_fs_schedule_viewer_highlight_g7

0x2638,	// (0x00032047) bg_sp_fs_schedule_viewer_highlight_g8

0xe60d,	// (0x0003e01c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0003f7f1) bg_sp_fs_schedule_viewer_highlight_g

0xda84,	// (0x0003d493) bg_main_sp_fs_ribbon_pane

0xd0a7,	// (0x0003cab6) main_sp_fs_ribbon_pane_g1

0x3e50,	// (0x0003385f) main_sp_fs_ribbon_pane_t1

0xd0b0,	// (0x0003cabf) main_sp_fs_ribbon_pane_t2

0x3e5f,	// (0x0003386e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0003f804) main_sp_fs_ribbon_pane_t

0x3e6e,	// (0x0003387d) main_sp_fs_ribbon_scheduler_pane

0x3e76,	// (0x00033885) bg_main_sp_fs_ribbon_pane_g1

0x3e7f,	// (0x0003388e) bg_main_sp_fs_ribbon_pane_g2

0x3e88,	// (0x00033897) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0003f80b) bg_main_sp_fs_ribbon_pane_g

0x3e90,	// (0x0003389f) main_sp_fs_ribbon_scheduler_pane_g1

0x3e99,	// (0x000338a8) main_sp_fs_ribbon_scheduler_pane_g2

0x3ea2,	// (0x000338b1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0003f812) main_sp_fs_ribbon_scheduler_pane_g

0x3eab,	// (0x000338ba) list_cale_mrui_pane

0xd0bf,	// (0x0003cace) sp_fs_scroll_pane_cp07_ParamLimits

0xd0bf,	// (0x0003cace) sp_fs_scroll_pane_cp07

0xd0d5,	// (0x0003cae4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd0d5,	// (0x0003cae4) bg_sp_fs_schedule_viewer_highlight

0x3eb4,	// (0x000338c3) list_single_sp_fs_schedule_track_pane_cp01

0x3ebc,	// (0x000338cb) list_sp_fs_schedule_track_pane

0x3ec4,	// (0x000338d3) sp_fs_scroll_pane_cp06_ParamLimits

0x3ec4,	// (0x000338d3) sp_fs_scroll_pane_cp06

0x184a,	// (0x00031259) bgmain_sp_fs_calendar_pane_g1

0x61f0,	// (0x00035bff) list_single_cale_mrui_pane_ParamLimits

0x61f0,	// (0x00035bff) list_single_cale_mrui_pane

0x6218,	// (0x00035c27) list_single_cale_mrui_row_pane_ParamLimits

0x6218,	// (0x00035c27) list_single_cale_mrui_row_pane

0x6225,	// (0x00035c34) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6225,	// (0x00035c34) list_single_cale_mrui_row_pane_g1

0x625d,	// (0x00035c6c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x625d,	// (0x00035c6c) list_single_cale_mrui_row_pane_t1

0x626f,	// (0x00035c7e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x626f,	// (0x00035c7e) list_single_cale_mrui_row_pane_t2

0x62d5,	// (0x00035ce4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x62d5,	// (0x00035ce4) list_single_cale_mrui_row_pane_t3

0x6304,	// (0x00035d13) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6304,	// (0x00035d13) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0003f81e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0003f81e) list_single_cale_mrui_row_pane_t

0x6333,	// (0x00035d42) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6333,	// (0x00035d42) list_single_cmail_header_editor_pane_bg_cp01

0x6353,	// (0x00035d62) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6353,	// (0x00035d62) list_single_cmail_header_editor_pane_bg_cp02

0xd0e2,	// (0x0003caf1) main_radioblah_text_pane_t1_ParamLimits

0xd0e2,	// (0x0003caf1) main_radioblah_text_pane_t1

0x3f8b,	// (0x0003399a) cam6_indi_pane_cp01

0x3f93,	// (0x000339a2) cam6_mode_pane_cp01

0x3f9b,	// (0x000339aa) cam6_pano_pane

0x3fa4,	// (0x000339b3) cam6_zoom_pane_cp01

0x3fac,	// (0x000339bb) cam6_pano_image_pane

0x3fb7,	// (0x000339c6) cam6_pano_pane_g1

0x3536,	// (0x00032f45) cam6_pano_pane_g2

0x3fc0,	// (0x000339cf) cam6_pano_pane_g3

0x3fc9,	// (0x000339d8) cam6_pano_pane_g4

0x1df2,	// (0x00031801) cam6_pano_pane_g5

0x3fd2,	// (0x000339e1) cam6_pano_pane_g6

0x3fdc,	// (0x000339eb) cam6_pano_pane_g7

0x3fe4,	// (0x000339f3) cam6_pano_pane_g8

0x3fed,	// (0x000339fc) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x0003f827) cam6_pano_pane_g

0xda84,	// (0x0003d493) main_browser_tag_pane

0x3d2d,	// (0x0003373c) grid_navstr_albumart_pane

0x3ff8,	// (0x00033a07) cell_navstr_albumart_pane_ParamLimits

0x3ff8,	// (0x00033a07) cell_navstr_albumart_pane

0x401b,	// (0x00033a2a) cell_navstr_albumart_pane_g1

0x1161,	// (0x00030b70) cell_navstr_albumart_pane_g2

0x1171,	// (0x00030b80) cell_navstr_albumart_pane_g3

0x1169,	// (0x00030b78) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0003f83a) cell_navstr_albumart_pane_g

0xd0fd,	// (0x0003cb0c) bt_list_pane_ParamLimits

0xd0fd,	// (0x0003cb0c) bt_list_pane

0xd11d,	// (0x0003cb2c) bt_list_pane_t1

0xd12c,	// (0x0003cb3b) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0003f843) bt_list_pane_t

0xda84,	// (0x0003d493) main_cale_prevew_pane

0xd13b,	// (0x0003cb4a) popup_cale_preview_window_ParamLimits

0xd13b,	// (0x0003cb4a) popup_cale_preview_window

0xf0e1,	// (0x0003eaf0) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_popup_preview_window_pane_cp05

0x4023,	// (0x00033a32) list_cale_preview_pane_ParamLimits

0x4023,	// (0x00033a32) list_cale_preview_pane

0x4382,	// (0x00033d91) list_double_cale_preview_pane_ParamLimits

0x4382,	// (0x00033d91) list_double_cale_preview_pane

0xd154,	// (0x0003cb63) list_single_cale_preview_pane_ParamLimits

0xd154,	// (0x0003cb63) list_single_cale_preview_pane

0xd16a,	// (0x0003cb79) list_single_cale_preview_pane_g1

0xd172,	// (0x0003cb81) list_single_cale_preview_pane_t1_ParamLimits

0xd172,	// (0x0003cb81) list_single_cale_preview_pane_t1

0xd187,	// (0x0003cb96) list_double_cale_preview_pane_g1

0xd18f,	// (0x0003cb9e) list_double_cale_preview_pane_t1_ParamLimits

0xd18f,	// (0x0003cb9e) list_double_cale_preview_pane_t1

0xd1a4,	// (0x0003cbb3) list_double_cale_preview_pane_t2_ParamLimits

0xd1a4,	// (0x0003cbb3) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0003f848) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0003f848) list_double_cale_preview_pane_t

0xda84,	// (0x0003d493) main_ezdial_pane

0xf0e1,	// (0x0003eaf0) main_sp_fs_email_pane_ParamLimits

0xcde8,	// (0x0003c7f7) cmail_ddmenu_btn01_pane_ParamLimits

0xcde8,	// (0x0003c7f7) cmail_ddmenu_btn01_pane

0xce05,	// (0x0003c814) cmail_ddmenu_btn02_pane_ParamLimits

0xce05,	// (0x0003c814) cmail_ddmenu_btn02_pane

0xce23,	// (0x0003c832) cmail_ddmenu_btn03_pane_ParamLimits

0xce23,	// (0x0003c832) cmail_ddmenu_btn03_pane

0x5c24,	// (0x00035633) main_sp_fs_ctrlbar_pane_ParamLimits

0x5c40,	// (0x0003564f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcf21,	// (0x0003c930) list_cmail_body_pane_ParamLimits

0x3c59,	// (0x00033668) bg_button_pane_cp12

0x3c6e,	// (0x0003367d) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3c6e,	// (0x0003367d) list_single_cmail_header_detail_pane_g3

0x615a,	// (0x00035b69) list_single_cmail_header_detail_pane_t2_ParamLimits

0x615a,	// (0x00035b69) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0003f7cd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0003f7cd) list_single_cmail_header_detail_pane_t

0x61ad,	// (0x00035bbc) phacti_term_pane_t2_ParamLimits

0x61ad,	// (0x00035bbc) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x0003f7d7) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x0003f7d7) phacti_term_pane_t

0x402f,	// (0x00033a3e) aid_size_list_single_double

0xd1bc,	// (0x0003cbcb) popup_ezdial_listscroll_window

0xd1dc,	// (0x0003cbeb) popup_number_entry_window_cp01

0xed18,	// (0x0003e727) bg_popup_call_pane_cp09

0x403b,	// (0x00033a4a) ezdial_list_pane

0x4043,	// (0x00033a52) scroll_pane_cp23

0x162f,	// (0x0003103e) bg_button_pane_cp028_ParamLimits

0x162f,	// (0x0003103e) bg_button_pane_cp028

0xd1ea,	// (0x0003cbf9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd1ea,	// (0x0003cbf9) cmail_ddmenu_btn01_pane_g1

0xd1fa,	// (0x0003cc09) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd1fa,	// (0x0003cc09) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0003f84d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0003f84d) cmail_ddmenu_btn01_pane_g

0x404b,	// (0x00033a5a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x404b,	// (0x00033a5a) cmail_ddmenu_btn01_pane_t1

0x1344,	// (0x00030d53) bg_button_pane_cp029_ParamLimits

0x1344,	// (0x00030d53) bg_button_pane_cp029

0xd1fa,	// (0x0003cc09) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd1fa,	// (0x0003cc09) cmail_ddmenu_btn02_pane_g1

0xd212,	// (0x0003cc21) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd212,	// (0x0003cc21) cmail_ddmenu_btn02_pane_t1

0x6724,	// (0x00036133) bg_button_pane_cp031_ParamLimits

0x6724,	// (0x00036133) bg_button_pane_cp031

0xd1fa,	// (0x0003cc09) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd1fa,	// (0x0003cc09) cmail_ddmenu_btn03_pane_g1

0xd212,	// (0x0003cc21) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd212,	// (0x0003cc21) cmail_ddmenu_btn03_pane_t1

0xade7,	// (0x0003a7f6) cell_dialer2_keypad_pane_t1_ParamLimits

0xae01,	// (0x0003a810) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xae01,	// (0x0003a810) cell_dialer2_keypad_pane_t1_copy1

0xc807,	// (0x0003c216) ncimui_group_button_pane

0xf0e1,	// (0x0003eaf0) main_sp_fs_calendar_pane_ParamLimits

0xcf3e,	// (0x0003c94d) list_single_cmail_header_caption_pane_ParamLimits

0x3dd7,	// (0x000337e6) aid_recal_txt_sm_pane

0xda84,	// (0x0003d493) mian_recal_day_pane

0x3e16,	// (0x00033825) popup_sp_fs_cale_preview_window_ParamLimits

0xda84,	// (0x0003d493) list_recal_day_pane

0x4082,	// (0x00033a91) list_single_recal_day_pane_ParamLimits

0x4082,	// (0x00033a91) list_single_recal_day_pane

0x4094,	// (0x00033aa3) list_single_recal_day_pane_g1_ParamLimits

0x4094,	// (0x00033aa3) list_single_recal_day_pane_g1

0x40a0,	// (0x00033aaf) list_single_recal_day_pane_g2_ParamLimits

0x40a0,	// (0x00033aaf) list_single_recal_day_pane_g2

0x40af,	// (0x00033abe) list_single_recal_day_pane_g3_ParamLimits

0x40af,	// (0x00033abe) list_single_recal_day_pane_g3

0xd236,	// (0x0003cc45) list_single_recal_day_pane_g4_ParamLimits

0xd236,	// (0x0003cc45) list_single_recal_day_pane_g4

0x40bb,	// (0x00033aca) list_single_recal_day_pane_g5_ParamLimits

0x40bb,	// (0x00033aca) list_single_recal_day_pane_g5

0x40ca,	// (0x00033ad9) list_single_recal_day_pane_g6_ParamLimits

0x40ca,	// (0x00033ad9) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0003f85c) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0003f85c) list_single_recal_day_pane_g

0x40d6,	// (0x00033ae5) list_single_recal_day_pane_t1

0x40e4,	// (0x00033af3) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x0003f869) list_single_recal_day_pane_t

0xd249,	// (0x0003cc58) ncimui_query_button_pane_ParamLimits

0xd249,	// (0x0003cc58) ncimui_query_button_pane

0xd259,	// (0x0003cc68) ncimui_query_button_pane_t1_ParamLimits

0xd259,	// (0x0003cc68) ncimui_query_button_pane_t1

0x40f2,	// (0x00033b01) ncimui_query_button_pane_t2_ParamLimits

0x40f2,	// (0x00033b01) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0003f86e) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0003f86e) ncimui_query_button_pane_t

0xd26c,	// (0x0003cc7b) query_button_pane_ParamLimits

0xd26c,	// (0x0003cc7b) query_button_pane

0xda84,	// (0x0003d493) bg_button_pane_cp0028

0x4105,	// (0x00033b14) query_button_pane_t1

0x9279,	// (0x00038c88) main_tport_pane_ParamLimits

0xce51,	// (0x0003c860) bg_popup_window_pane_cp01_ParamLimits

0xce51,	// (0x0003c860) bg_popup_window_pane_cp01

0xce5e,	// (0x0003c86d) heading_pane_cp08_ParamLimits

0xce5e,	// (0x0003c86d) heading_pane_cp08

0xce6c,	// (0x0003c87b) heading_pane_cp07_ParamLimits

0xce6c,	// (0x0003c87b) heading_pane_cp07

0x3c02,	// (0x00033611) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0003f7ba) cell_tport_appsw_pane_g

0x55d3,	// (0x00034fe2) input_candi_list_open_g1

0xe7d4,	// (0x0003e1e3) list_cale_time_pane_g6_ParamLimits

0xe7d4,	// (0x0003e1e3) list_cale_time_pane_g6

0x9cba,	// (0x000396c9) aid_size_touch_calib_1_ParamLimits

0x9cba,	// (0x000396c9) aid_size_touch_calib_1

0x9cc6,	// (0x000396d5) aid_size_touch_calib_2_ParamLimits

0x9cc6,	// (0x000396d5) aid_size_touch_calib_2

0x9cd4,	// (0x000396e3) aid_size_touch_calib_3_ParamLimits

0x9cd4,	// (0x000396e3) aid_size_touch_calib_3

0x9ce4,	// (0x000396f3) aid_size_touch_calib_4_ParamLimits

0x9ce4,	// (0x000396f3) aid_size_touch_calib_4

0x9cf2,	// (0x00039701) main_touch_calib_button_group_pane_ParamLimits

0x9cf2,	// (0x00039701) main_touch_calib_button_group_pane

0x9d00,	// (0x0003970f) main_touch_calib_pane_g1_ParamLimits

0x9d0c,	// (0x0003971b) main_touch_calib_pane_g2_ParamLimits

0x9d18,	// (0x00039727) main_touch_calib_pane_g3_ParamLimits

0x9d24,	// (0x00039733) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0003f193) main_touch_calib_pane_g_ParamLimits

0x9d30,	// (0x0003973f) main_touch_calib_pane_t1_ParamLimits

0x9d47,	// (0x00039756) main_touch_calib_pane_t2_ParamLimits

0x9d5e,	// (0x0003976d) main_touch_calib_pane_t3_ParamLimits

0x9d72,	// (0x00039781) main_touch_calib_pane_t4_ParamLimits

0x9d86,	// (0x00039795) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0003f19c) main_touch_calib_pane_t_ParamLimits

0x1bc8,	// (0x000315d7) list_single_fp_cale_pane_g3_ParamLimits

0x1bc8,	// (0x000315d7) list_single_fp_cale_pane_g3

0xf0e1,	// (0x0003eaf0) bg_button_pane_cp012_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_vkb2_func_pane_cp03_ParamLimits

0xbb8e,	// (0x0003b59d) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0e1,	// (0x0003eaf0) bg_vkb2_func_pane_cp04_ParamLimits

0xc7b8,	// (0x0003c1c7) main_ncimui_button_group_pane_ParamLimits

0xc7b8,	// (0x0003c1c7) main_ncimui_button_group_pane

0xc7f5,	// (0x0003c204) main_ncimui_pane_t3_ParamLimits

0xc7f5,	// (0x0003c204) main_ncimui_pane_t3

0x3d43,	// (0x00033752) phacti_button_group_pane

0x402f,	// (0x00033a3e) aid_size_list_single_double_ParamLimits

0xd1bc,	// (0x0003cbcb) popup_ezdial_listscroll_window_ParamLimits

0xd1dc,	// (0x0003cbeb) popup_number_entry_window_cp01_ParamLimits

0xd279,	// (0x0003cc88) phacti_button_pane_ParamLimits

0xd279,	// (0x0003cc88) phacti_button_pane

0xda84,	// (0x0003d493) bg_button_pane_cp14

0x4113,	// (0x00033b22) phacti_button_pane_t1

0xd28a,	// (0x0003cc99) main_touch_calib_button_pane_ParamLimits

0xd28a,	// (0x0003cc99) main_touch_calib_button_pane

0xe231,	// (0x0003dc40) bg_button_pane_cp18_ParamLimits

0xe231,	// (0x0003dc40) bg_button_pane_cp18

0x4121,	// (0x00033b30) main_touch_calib_button_pane_t1_ParamLimits

0x4121,	// (0x00033b30) main_touch_calib_button_pane_t1

0x4137,	// (0x00033b46) main_touch_calib_button_pane_t2_ParamLimits

0x4137,	// (0x00033b46) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0003f873) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0003f873) main_touch_calib_button_pane_t

0xda84,	// (0x0003d493) cell_ncimui_button_pane

0xda84,	// (0x0003d493) bg_button_pane_cp032

0x4155,	// (0x00033b64) cell_ncimui_button_pane_t1

0xae5d,	// (0x0003a86c) image3_infobar_pane_ParamLimits

0xae5d,	// (0x0003a86c) image3_infobar_pane

0xcb31,	// (0x0003c540) fs_bigclock_status_pane_ParamLimits

0xcb31,	// (0x0003c540) fs_bigclock_status_pane

0xcb3e,	// (0x0003c54d) main_fs_bigclock_clock_pane_ParamLimits

0xcb3e,	// (0x0003c54d) main_fs_bigclock_clock_pane

0xcb4e,	// (0x0003c55d) main_fs_bigclock_indi_pane_ParamLimits

0xcb4e,	// (0x0003c55d) main_fs_bigclock_indi_pane

0xcb7b,	// (0x0003c58a) main_fs_bigclock_swipe_pane_ParamLimits

0xcb7b,	// (0x0003c58a) main_fs_bigclock_swipe_pane

0xda84,	// (0x0003d493) main_fs_clock_dumped_data

0x3643,	// (0x00033052) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3643,	// (0x00033052) list_single_fs_bigclock_indicator_pane_g1

0x365f,	// (0x0003306e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x365f,	// (0x0003306e) list_single_fs_bigclock_indicator_pane_g2

0x3679,	// (0x00033088) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3679,	// (0x00033088) list_single_fs_bigclock_indicator_pane_g3

0x3693,	// (0x000330a2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3693,	// (0x000330a2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0003f6a6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0003f6a6) list_single_fs_bigclock_indicator_pane_g

0x36b9,	// (0x000330c8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x36b9,	// (0x000330c8) list_single_fs_bigclock_indicator_pane_t1

0x36e1,	// (0x000330f0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x36e1,	// (0x000330f0) list_single_fs_bigclock_indicator_pane_t2

0x3709,	// (0x00033118) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3709,	// (0x00033118) list_single_fs_bigclock_indicator_pane_t3

0x3731,	// (0x00033140) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3731,	// (0x00033140) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0003f6b1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0003f6b1) list_single_fs_bigclock_indicator_pane_t

0x4163,	// (0x00033b72) image3_infobar_fav_pane_ParamLimits

0x4163,	// (0x00033b72) image3_infobar_fav_pane

0x4173,	// (0x00033b82) image3_infobar_loc_pane_ParamLimits

0x4173,	// (0x00033b82) image3_infobar_loc_pane

0x4187,	// (0x00033b96) image3_infobar_time_pane_ParamLimits

0x4187,	// (0x00033b96) image3_infobar_time_pane

0x184a,	// (0x00031259) image3_infobar_time_pane_g1

0x4197,	// (0x00033ba6) image3_infobar_time_pane_t1

0x184a,	// (0x00031259) image3_infobar_loc_pane_g1

0x41a5,	// (0x00033bb4) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x0003f878) image3_infobar_loc_pane_g

0x41ad,	// (0x00033bbc) image3_infobar_loc_pane_t1

0x184a,	// (0x00031259) image3_infobar_fav_pane_g1

0x41bb,	// (0x00033bca) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0003f87d) image3_infobar_fav_pane_g

0x41c3,	// (0x00033bd2) fs_bigclock_status_battery_pane

0x41cc,	// (0x00033bdb) fs_bigclock_status_signal_pane

0x41d5,	// (0x00033be4) fs_bigclock_status_title_pane

0x41de,	// (0x00033bed) fs_bigclock_status_signal_pane_g1

0x41e7,	// (0x00033bf6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0003f882) fs_bigclock_status_signal_pane_g

0x41ef,	// (0x00033bfe) fs_bigclock_status_battery_pane_g1

0x41f8,	// (0x00033c07) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x0003f887) fs_bigclock_status_battery_pane_g

0x4200,	// (0x00033c0f) fs_bigclock_status_title_pane_t1

0x184a,	// (0x00031259) main_fs_bigclock_clock_pane_g1

0x420e,	// (0x00033c1d) main_fs_bigclock_clock_pane_g2

0x420e,	// (0x00033c1d) main_fs_bigclock_clock_pane_g3

0x420e,	// (0x00033c1d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0003f88c) main_fs_bigclock_clock_pane_g

0x4216,	// (0x00033c25) main_fs_bigclock_clock_pane_t1

0x4224,	// (0x00033c33) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0003f895) main_fs_bigclock_clock_pane_t

0x4233,	// (0x00033c42) list_single_fs_bigclock_indicator_pane_ParamLimits

0x4233,	// (0x00033c42) list_single_fs_bigclock_indicator_pane

0xd29c,	// (0x0003ccab) list_single_fs_bigclock_pane_ParamLimits

0xd29c,	// (0x0003ccab) list_single_fs_bigclock_pane

0x424d,	// (0x00033c5c) main_fs_bigclock_indicator_pane_t1

0x425c,	// (0x00033c6b) list_single_fs_bigclock_pane_g1

0x4264,	// (0x00033c73) list_single_fs_bigclock_pane_t1

0x184a,	// (0x00031259) main_fs_bigclock_swipe_pane_g1

0x42a2,	// (0x00033cb1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0003f8a6) main_fs_bigclock_swipe_pane_g

0x42aa,	// (0x00033cb9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x42aa,	// (0x00033cb9) main_fs_bigclock_swipe_pane_t1

0x822b,	// (0x00037c3a) call_type_pane_ParamLimits

0xda84,	// (0x0003d493) main_btmg_pane

0x6251,	// (0x00035c60) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6251,	// (0x00035c60) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0003f819) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0003f819) list_single_cale_mrui_row_pane_g

0x4069,	// (0x00033a78) list_recal_vselct_arw_lo_pane

0x4071,	// (0x00033a80) list_recal_vselct_arw_up_pane

0x4079,	// (0x00033a88) list_recal_vselct_pane

0x42c7,	// (0x00033cd6) btmg_button_pane

0xd2ff,	// (0x0003cd0e) main_btmg_pane_g1

0xda84,	// (0x0003d493) bg_button_pane_cp044

0x42d1,	// (0x00033ce0) btmg_button_pane_t1

0x133c,	// (0x00030d4b) aid_listscroll_gen

0xf0e1,	// (0x0003eaf0) main_cntbar_detail_pane

0x3c20,	// (0x0003362f) list_cmail_folder_pane

0x3c30,	// (0x0003363f) sp_fs_scroll_pane_cp03_ParamLimits

0x636f,	// (0x00035d7e) list_single_fs_dyc_pane_cp01_ParamLimits

0x636f,	// (0x00035d7e) list_single_fs_dyc_pane_cp01

0x42df,	// (0x00033cee) aid_size_cmail_indent

0x6395,	// (0x00035da4) list_single_dyc_row_pane_cp01

0xd327,	// (0x0003cd36) cntbar_detail_list_pane_ParamLimits

0xd327,	// (0x0003cd36) cntbar_detail_list_pane

0xd361,	// (0x0003cd70) main_cntbar_detail_cont_pane_ParamLimits

0xd361,	// (0x0003cd70) main_cntbar_detail_cont_pane

0x821f,	// (0x00037c2e) scroll_pane_cp032_ParamLimits

0x821f,	// (0x00037c2e) scroll_pane_cp032

0xd36d,	// (0x0003cd7c) cntbar_detail_list_event_pane_ParamLimits

0xd36d,	// (0x0003cd7c) cntbar_detail_list_event_pane

0xd333,	// (0x0003cd42) cntbar_detail_list_shct_pane

0xe67b,	// (0x0003e08a) aid_list_gen

0x42f1,	// (0x00033d00) aid_scroll

0x42fa,	// (0x00033d09) aid_size_touch_scroll_bar

0x382e,	// (0x0003323d) aid_list_double

0x4303,	// (0x00033d12) aid_list_single

0x2cbd,	// (0x000326cc) aid_list_single_lg

0x639e,	// (0x00035dad) aid_list_z_g_a_sm

0x63a6,	// (0x00035db5) aid_list_z_g_d

0x63ae,	// (0x00035dbd) aid_txt_z_prm

0x63bc,	// (0x00035dcb) aid_txt_z_prm_cp01

0x63ca,	// (0x00035dd9) aid_txt_z_sec

0xd381,	// (0x0003cd90) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd381,	// (0x0003cd90) main_cntbar_detail_cont_pane_g1

0xd38e,	// (0x0003cd9d) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd38e,	// (0x0003cd9d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0003f8ab) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0003f8ab) main_cntbar_detail_cont_pane_g

0x432a,	// (0x00033d39) main_cntbar_detail_cont_pane_t1

0x4338,	// (0x00033d47) main_cntbar_detail_cont_pane_t2

0x4346,	// (0x00033d55) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0003f8b0) main_cntbar_detail_cont_pane_t

0xd39a,	// (0x0003cda9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd39a,	// (0x0003cda9) cell_cntbar_detail_list_shct_pane

0x4354,	// (0x00033d63) cntbar_detail_list_shct_pane_g1

0x435d,	// (0x00033d6c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x0003f8b7) cntbar_detail_list_shct_pane_g

0xd3ae,	// (0x0003cdbd) cntbar_detail_list_event_pane_g1_ParamLimits

0xd3ae,	// (0x0003cdbd) cntbar_detail_list_event_pane_g1

0xd3ba,	// (0x0003cdc9) cntbar_detail_list_event_pane_g2_ParamLimits

0xd3ba,	// (0x0003cdc9) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0003f8bc) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0003f8bc) cntbar_detail_list_event_pane_g

0xd426,	// (0x0003ce35) cntbar_detail_list_event_pane_t1_ParamLimits

0xd426,	// (0x0003ce35) cntbar_detail_list_event_pane_t1

0xd43b,	// (0x0003ce4a) cntbar_detail_list_event_pane_t2_ParamLimits

0xd43b,	// (0x0003ce4a) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0003f8c9) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0003f8c9) cntbar_detail_list_event_pane_t

0x184a,	// (0x00031259) cell_cntbar_detail_list_shct_pane_g1

0x85b9,	// (0x00037fc8) navi_pane_mv_g3

0xf0e1,	// (0x0003eaf0) main_cntbar_detail_pane_ParamLimits

0xda84,	// (0x0003d493) main_notif_wgt_pane

0xab11,	// (0x0003a520) aid_tch_main_mp4_pane_g4

0xad46,	// (0x0003a755) popup_slider_window_cp02

0x4060,	// (0x00033a6f) list_recal_day_event_pane

0xd307,	// (0x0003cd16) cntbar_detail_btn_pane_ParamLimits

0xd307,	// (0x0003cd16) cntbar_detail_btn_pane

0xd317,	// (0x0003cd26) cntbar_detail_btn_pane_cp01_ParamLimits

0xd317,	// (0x0003cd26) cntbar_detail_btn_pane_cp01

0xd333,	// (0x0003cd42) cntbar_detail_list_shct_pane_ParamLimits

0xd33f,	// (0x0003cd4e) cntbar_detail_pane_g1_ParamLimits

0xd33f,	// (0x0003cd4e) cntbar_detail_pane_g1

0xd34b,	// (0x0003cd5a) cntbar_detail_pane_t1_ParamLimits

0xd34b,	// (0x0003cd5a) cntbar_detail_pane_t1

0xd3c6,	// (0x0003cdd5) cntbar_detail_list_event_pane_g3_ParamLimits

0xd3c6,	// (0x0003cdd5) cntbar_detail_list_event_pane_g3

0xd3de,	// (0x0003cded) cntbar_detail_list_event_pane_g4_ParamLimits

0xd3de,	// (0x0003cded) cntbar_detail_list_event_pane_g4

0xd3f6,	// (0x0003ce05) cntbar_detail_list_event_pane_g5_ParamLimits

0xd3f6,	// (0x0003ce05) cntbar_detail_list_event_pane_g5

0xd40e,	// (0x0003ce1d) cntbar_detail_list_event_pane_g6_ParamLimits

0xd40e,	// (0x0003ce1d) cntbar_detail_list_event_pane_g6

0xd450,	// (0x0003ce5f) cntbar_detail_list_event_pane_t3_ParamLimits

0xd450,	// (0x0003ce5f) cntbar_detail_list_event_pane_t3

0xd462,	// (0x0003ce71) popup_notif_wgt_window_ParamLimits

0xd462,	// (0x0003ce71) popup_notif_wgt_window

0xd472,	// (0x0003ce81) popup_submenu_window_cp01_ParamLimits

0xd472,	// (0x0003ce81) popup_submenu_window_cp01

0xed18,	// (0x0003e727) bg_popup_window_pane_cp10

0x4366,	// (0x00033d75) listscroll_notif_wgt_pane

0x4370,	// (0x00033d7f) list_notif_wgt_window

0x4379,	// (0x00033d88) scroll_pane_cp033

0x4382,	// (0x00033d91) list_notif_wgt_row_pane_ParamLimits

0x4382,	// (0x00033d91) list_notif_wgt_row_pane

0x4394,	// (0x00033da3) aid_size_list_notif_wgt_del

0x439d,	// (0x00033dac) list_notif_wgt_row_pane_g1

0x43a5,	// (0x00033db4) list_notif_wgt_row_pane_g2

0x43ad,	// (0x00033dbc) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0003f8d0) list_notif_wgt_row_pane_g

0x43b6,	// (0x00033dc5) list_notif_wgt_row_pane_t1

0x43c4,	// (0x00033dd3) list_notif_wgt_row_pane_t2

0x43d2,	// (0x00033de1) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x0003f8d7) list_notif_wgt_row_pane_t

0x2907,	// (0x00032316) list_recal_day_event_pane_g1

0x43e0,	// (0x00033def) list_recal_day_event_pane_t1

0xda84,	// (0x0003d493) bg_button_pane_cp045

0x43ef,	// (0x00033dfe) cntbar_detail_btn_pane_t1

0x1344,	// (0x00030d53) main_callh_pane_ParamLimits

0x1344,	// (0x00030d53) main_callh_pane

0xda84,	// (0x0003d493) main_coverflow0_pane

0xda84,	// (0x0003d493) main_wgtman_pane

0xcb93,	// (0x0003c5a2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcb93,	// (0x0003c5a2) main_fs_bigclock_unlock_btn_pane

0x3bfa,	// (0x00033609) bg_button_pane_cp16

0x3c0a,	// (0x00033619) cell_tport_appsw_pane_g3

0xd480,	// (0x0003ce8f) cf0_flow_pane_ParamLimits

0xd480,	// (0x0003ce8f) cf0_flow_pane

0x43fd,	// (0x00033e0c) listscroll_cf0_pane

0x4406,	// (0x00033e15) main_cf0_pane_g1

0xd48f,	// (0x0003ce9e) main_cf0_pane_t1_ParamLimits

0xd48f,	// (0x0003ce9e) main_cf0_pane_t1

0xd4a3,	// (0x0003ceb2) main_cf0_pane_t2_ParamLimits

0xd4a3,	// (0x0003ceb2) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0003f8de) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0003f8de) main_cf0_pane_t

0x4410,	// (0x00033e1f) scroll_pane_cp11

0xd4b7,	// (0x0003cec6) cf0_flow_pane_g1

0xd4bf,	// (0x0003cece) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0003f8e3) cf0_flow_pane_g

0xd4c7,	// (0x0003ced6) cf0_flow_pane_t1

0xda84,	// (0x0003d493) main_call6_pane

0xda84,	// (0x0003d493) main_calllock_pane

0xd4d5,	// (0x0003cee4) call6_btn_grp_pane_ParamLimits

0xd4d5,	// (0x0003cee4) call6_btn_grp_pane

0xd4e4,	// (0x0003cef3) call6_pane_g1_ParamLimits

0xd4e4,	// (0x0003cef3) call6_pane_g1

0xd4f3,	// (0x0003cf02) popup_call6_1st_window_ParamLimits

0xd4f3,	// (0x0003cf02) popup_call6_1st_window

0xd501,	// (0x0003cf10) popup_call6_2nd_window_ParamLimits

0xd501,	// (0x0003cf10) popup_call6_2nd_window

0xd50f,	// (0x0003cf1e) cell_call6_btn_pane_ParamLimits

0xd50f,	// (0x0003cf1e) cell_call6_btn_pane

0xed18,	// (0x0003e727) bg_popup_call2_in_pane_cp03

0x441b,	// (0x00033e2a) popup_call6_1st_window_g1

0x4423,	// (0x00033e32) popup_call6_1st_window_g2

0x442b,	// (0x00033e3a) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0003f8e8) popup_call6_1st_window_g

0x4433,	// (0x00033e42) popup_call6_1st_window_t1

0x4442,	// (0x00033e51) popup_call6_1st_window_t2

0x4452,	// (0x00033e61) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0003f8ef) popup_call6_1st_window_t

0xed18,	// (0x0003e727) bg_popup_call2_in_pane_cp04

0x441b,	// (0x00033e2a) popup_call6_2nd_window_g1

0x4423,	// (0x00033e32) popup_call6_2nd_window_g2

0x442b,	// (0x00033e3a) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0003f8e8) popup_call6_2nd_window_g

0x4433,	// (0x00033e42) popup_call6_2nd_window_t1

0xda84,	// (0x0003d493) bg_button_pane_cp15

0x4462,	// (0x00033e71) cell_call6_btn_pane_g1

0x446b,	// (0x00033e7a) cell_call6_btn_pane_t1

0xd51e,	// (0x0003cf2d) listscroll_wgtman_pane_ParamLimits

0xd51e,	// (0x0003cf2d) listscroll_wgtman_pane

0xd53c,	// (0x0003cf4b) wgtman_btn_pane_ParamLimits

0xd53c,	// (0x0003cf4b) wgtman_btn_pane

0xebcf,	// (0x0003e5de) aid_scroll_copy1

0x447a,	// (0x00033e89) list_wgtman_pane

0xd571,	// (0x0003cf80) wgtman_btn_pane_g1_ParamLimits

0xd571,	// (0x0003cf80) wgtman_btn_pane_g1

0xd599,	// (0x0003cfa8) wgtman_btn_pane_t1_ParamLimits

0xd599,	// (0x0003cfa8) wgtman_btn_pane_t1

0x4484,	// (0x00033e93) wgtman_btn_pane_t2_ParamLimits

0x4484,	// (0x00033e93) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0003f8f6) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0003f8f6) wgtman_btn_pane_t

0xd5d0,	// (0x0003cfdf) listrow_wgtman_pane_ParamLimits

0xd5d0,	// (0x0003cfdf) listrow_wgtman_pane

0xd5eb,	// (0x0003cffa) listrow_wgtman_pane_g1

0xd5f4,	// (0x0003d003) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0003f8fb) listrow_wgtman_pane_g

0x63d8,	// (0x00035de7) listrow_wgtman_pane_t1

0x63e6,	// (0x00035df5) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0003f900) listrow_wgtman_pane_t

0x63f4,	// (0x00035e03) wait_bar_pane_cp09

0x449b,	// (0x00033eaa) main_calllock_btn_pane

0x44a5,	// (0x00033eb4) main_calllock_pane_g1

0xda84,	// (0x0003d493) bg_button_pane_cp17

0x44b1,	// (0x00033ec0) main_calllock_btn_pane_g1

0x44ba,	// (0x00033ec9) main_calllock_btn_pane_t1

0xda84,	// (0x0003d493) main_dialer3_pane

0xda84,	// (0x0003d493) main_fmrd2_pane

0x184a,	// (0x00031259) main_fs_bigclock_unlock_btn_pane_g1

0x44d1,	// (0x00033ee0) main_fs_bigclock_unlock_btn_pane_t1

0xd5fe,	// (0x0003d00d) area_fmrd2_info_pane_ParamLimits

0xd5fe,	// (0x0003d00d) area_fmrd2_info_pane

0xd60c,	// (0x0003d01b) area_fmrd2_visual_pane_ParamLimits

0xd60c,	// (0x0003d01b) area_fmrd2_visual_pane

0xd61a,	// (0x0003d029) fmrd2_indi_pane_ParamLimits

0xd61a,	// (0x0003d029) fmrd2_indi_pane

0xd627,	// (0x0003d036) area_fmrd2_visual_pane_g1

0xd62f,	// (0x0003d03e) area_fmrd2_visual_pane_t1

0xd63f,	// (0x0003d04e) area_fmrd2_visual_pane_t2

0xd64f,	// (0x0003d05e) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0003f90a) area_fmrd2_visual_pane_t

0xd65f,	// (0x0003d06e) area_fmrd2_info_pane_g1

0xd667,	// (0x0003d076) area_fmrd2_info_pane_t1

0xd677,	// (0x0003d086) area_fmrd2_info_pane_t2

0xd687,	// (0x0003d096) area_fmrd2_info_pane_t3

0xd697,	// (0x0003d0a6) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0003f911) area_fmrd2_info_pane_t

0xd6a5,	// (0x0003d0b4) fmrd2_indi_pane_t1

0xd6b5,	// (0x0003d0c4) fmrd2_indi_pane_t2

0xd6c5,	// (0x0003d0d4) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0003f91a) fmrd2_indi_pane_t

0x36a2,	// (0x000330b1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x36a2,	// (0x000330b1) list_single_fs_bigclock_indicator_pane_g5

0x3746,	// (0x00033155) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3746,	// (0x00033155) list_single_fs_bigclock_indicator_pane_t5

0xd03e,	// (0x0003ca4d) aid_cell_bcale_month_pane_ParamLimits

0xd03e,	// (0x0003ca4d) aid_cell_bcale_month_pane

0xd04a,	// (0x0003ca59) bcale_month_pane_ParamLimits

0xd04a,	// (0x0003ca59) bcale_month_pane

0xd058,	// (0x0003ca67) bcale_preview_pane_ParamLimits

0xd058,	// (0x0003ca67) bcale_preview_pane

0x4264,	// (0x00033c73) list_single_fs_bigclock_pane_t1_ParamLimits

0x427e,	// (0x00033c8d) list_single_fs_bigclock_pane_t2_ParamLimits

0x427e,	// (0x00033c8d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0003f8a1) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0003f8a1) list_single_fs_bigclock_pane_t

0x44c9,	// (0x00033ed8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0003f905) main_fs_bigclock_unlock_btn_pane_g

0xd6d3,	// (0x0003d0e2) aid_dia3_key_size_ParamLimits

0xd6d3,	// (0x0003d0e2) aid_dia3_key_size

0xd6df,	// (0x0003d0ee) aid_dia3_listrow_size_ParamLimits

0xd6df,	// (0x0003d0ee) aid_dia3_listrow_size

0xd6ef,	// (0x0003d0fe) dia3_keypad_fun_pane_ParamLimits

0xd6ef,	// (0x0003d0fe) dia3_keypad_fun_pane

0xd701,	// (0x0003d110) dia3_keypad_num_pane_ParamLimits

0xd701,	// (0x0003d110) dia3_keypad_num_pane

0xd713,	// (0x0003d122) dia3_listscroll_pane_ParamLimits

0xd713,	// (0x0003d122) dia3_listscroll_pane

0xd721,	// (0x0003d130) dia3_numentry_pane_ParamLimits

0xd721,	// (0x0003d130) dia3_numentry_pane

0x44df,	// (0x00033eee) dia3_list_pane

0x44ea,	// (0x00033ef9) scroll_pane_cp12

0xda84,	// (0x0003d493) bg_dia3_numentry_pane

0xd72f,	// (0x0003d13e) dia3_numentry_pane_t1

0xd73e,	// (0x0003d14d) cell_dia3_key_num_pane

0xd746,	// (0x0003d155) cell_dia3_key0_fun_pane_ParamLimits

0xd746,	// (0x0003d155) cell_dia3_key0_fun_pane

0xd753,	// (0x0003d162) cell_dia3_key1_fun_pane_ParamLimits

0xd753,	// (0x0003d162) cell_dia3_key1_fun_pane

0xd760,	// (0x0003d16f) dia3_listrow_pane

0x33c2,	// (0x00032dd1) bg_dia3_numentry_pane_g1

0xda84,	// (0x0003d493) bg_button_pane_cp21

0x44f5,	// (0x00033f04) cell_dia3_key_num_pane_t1

0x4503,	// (0x00033f12) cell_dia3_key_num_pane_t2

0x4512,	// (0x00033f21) cell_dia3_key_num_pane_t3

0x4521,	// (0x00033f30) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0003f921) cell_dia3_key_num_pane_t

0xda84,	// (0x0003d493) bg_button_pane_cp19

0xd76d,	// (0x0003d17c) cell_dia3_key0_fun_pane_g1

0xda84,	// (0x0003d493) bg_button_pane_cp20

0xd775,	// (0x0003d184) cell_dia3_key1_fun_pane_g1

0xd77d,	// (0x0003d18c) area_left_week_number_pane

0xd786,	// (0x0003d195) area_top_day_name_pane

0xd78f,	// (0x0003d19e) frame_month_view_pane

0xd799,	// (0x0003d1a8) grid_month_view_pane

0xd7a3,	// (0x0003d1b2) cell_top_day_name_pane_ParamLimits

0xd7a3,	// (0x0003d1b2) cell_top_day_name_pane

0xd7bd,	// (0x0003d1cc) cell_area_left_week_number_pane_ParamLimits

0xd7bd,	// (0x0003d1cc) cell_area_left_week_number_pane

0xd7d1,	// (0x0003d1e0) cell_month_view_pane_ParamLimits

0xd7d1,	// (0x0003d1e0) cell_month_view_pane

0x4530,	// (0x00033f3f) frm_month_g1

0xd7ee,	// (0x0003d1fd) frm_month_g2

0xd7f8,	// (0x0003d207) frm_month_g3

0xd802,	// (0x0003d211) frm_month_g4

0xd80c,	// (0x0003d21b) frm_month_g5

0xd816,	// (0x0003d225) frm_month_g6

0xd820,	// (0x0003d22f) frm_month_g7

0x4539,	// (0x00033f48) frm_month_g8

0xd82a,	// (0x0003d239) frm_month_g9

0xd833,	// (0x0003d242) frm_month_g10

0xd83c,	// (0x0003d24b) frm_month_g11

0xd845,	// (0x0003d254) frm_month_g12

0xd84e,	// (0x0003d25d) frm_month_g13

0xd857,	// (0x0003d266) frm_month_g14

0xd860,	// (0x0003d26f) frm_month_g15

0xd86b,	// (0x0003d27a) frm_month_g16

0x000f,

0xff1b,	// (0x0003f92a) frm_month_g

0xd876,	// (0x0003d285) cell_top_day_name_pane_t1

0xd885,	// (0x0003d294) cell_area_left_week_number_pane_g1

0xd876,	// (0x0003d285) cell_area_left_week_number_pane_t1

0x184a,	// (0x00031259) cell_month_view_pane_g1

0xd88d,	// (0x0003d29c) cell_month_view_pane_t1

0xda84,	// (0x0003d493) main_fps_pane

0x3980,	// (0x0003338f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3980,	// (0x0003338f) cmail_ddmenu_btn02_pane_cp1

0x399c,	// (0x000333ab) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x399c,	// (0x000333ab) cmail_ddmenu_btn02_pane_cp2

0xd206,	// (0x0003cc15) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd206,	// (0x0003cc15) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x0003f852) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x0003f852) cmail_ddmenu_btn02_pane_g

0xd224,	// (0x0003cc33) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd224,	// (0x0003cc33) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x0003f857) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x0003f857) cmail_ddmenu_btn02_pane_t

0xd89c,	// (0x0003d2ab) fps_text_pane_ParamLimits

0xd89c,	// (0x0003d2ab) fps_text_pane

0xd8a9,	// (0x0003d2b8) main_fps_pane_g1_ParamLimits

0xd8a9,	// (0x0003d2b8) main_fps_pane_g1

0xd8b7,	// (0x0003d2c6) wait_bar_pane_cp010_ParamLimits

0xd8b7,	// (0x0003d2c6) wait_bar_pane_cp010

0xd8c3,	// (0x0003d2d2) fps_text_pane_t1_ParamLimits

0xd8c3,	// (0x0003d2d2) fps_text_pane_t1

0xb11c,	// (0x0003ab2b) cam4_image_uncrop_pane_g1

0xb125,	// (0x0003ab34) cam4_image_uncrop_pane_g2

0xb12e,	// (0x0003ab3d) cam4_image_uncrop_pane_g3

0xb137,	// (0x0003ab46) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0003f32b) cam4_image_uncrop_pane_g

0xd760,	// (0x0003d16f) dia3_listrow_pane_ParamLimits

0xda84,	// (0x0003d493) main_phob2_pane

0xceb3,	// (0x0003c8c2) cell_tport_appsw_pane_cp02_ParamLimits

0xceb3,	// (0x0003c8c2) cell_tport_appsw_pane_cp02

0xcec2,	// (0x0003c8d1) cell_tport_appsw_pane_cp03_ParamLimits

0xcec2,	// (0x0003c8d1) cell_tport_appsw_pane_cp03

0xda84,	// (0x0003d493) phob2_contact_card_pane

0xda84,	// (0x0003d493) phob2_listscroll_pane

0xd8dc,	// (0x0003d2eb) phob2_list_pane

0xd8e4,	// (0x0003d2f3) scroll_pane_cp034

0xd8ec,	// (0x0003d2fb) phob2_cc_data_pane_ParamLimits

0xd8ec,	// (0x0003d2fb) phob2_cc_data_pane

0xd906,	// (0x0003d315) phob2_cc_listscroll_pane_ParamLimits

0xd906,	// (0x0003d315) phob2_cc_listscroll_pane

0xd920,	// (0x0003d32f) list_double_large_graphic_phob2_pane_ParamLimits

0xd920,	// (0x0003d32f) list_double_large_graphic_phob2_pane

0xd93e,	// (0x0003d34d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd93e,	// (0x0003d34d) list_double_large_graphic_phob2_pane_g1

0x63fc,	// (0x00035e0b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x63fc,	// (0x00035e0b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0003f94b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0003f94b) list_double_large_graphic_phob2_pane_g

0x6408,	// (0x00035e17) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6408,	// (0x00035e17) list_double_large_graphic_phob2_pane_t1

0x641d,	// (0x00035e2c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x641d,	// (0x00035e2c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0003f950) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0003f950) list_double_large_graphic_phob2_pane_t

0xda84,	// (0x0003d493) list_highlight_pane_cp024

0xd94b,	// (0x0003d35a) phob2_cc_button_pane

0xd953,	// (0x0003d362) phob2_cc_data_pane_g1_ParamLimits

0xd953,	// (0x0003d362) phob2_cc_data_pane_g1

0xd95f,	// (0x0003d36e) phob2_cc_data_pane_g2_ParamLimits

0xd95f,	// (0x0003d36e) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0003f955) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0003f955) phob2_cc_data_pane_g

0xd96b,	// (0x0003d37a) phob2_cc_data_pane_t1_ParamLimits

0xd96b,	// (0x0003d37a) phob2_cc_data_pane_t1

0xd97d,	// (0x0003d38c) phob2_cc_data_pane_t2_ParamLimits

0xd97d,	// (0x0003d38c) phob2_cc_data_pane_t2

0xd98f,	// (0x0003d39e) phob2_cc_data_pane_t3_ParamLimits

0xd98f,	// (0x0003d39e) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0003f95a) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0003f95a) phob2_cc_data_pane_t

0xd9a1,	// (0x0003d3b0) phob2_cc_list_pane_ParamLimits

0xd9a1,	// (0x0003d3b0) phob2_cc_list_pane

0xd9ad,	// (0x0003d3bc) scroll_pane_cp035_ParamLimits

0xd9ad,	// (0x0003d3bc) scroll_pane_cp035

0xf0e1,	// (0x0003eaf0) bg_button_pane_cp033

0xd9b9,	// (0x0003d3c8) phob2_cc_button_pane_g1

0xd9c5,	// (0x0003d3d4) phob2_cc_button_pane_t1

0xd9da,	// (0x0003d3e9) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0003f961) phob2_cc_button_pane_t

0xd9ec,	// (0x0003d3fb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd9ec,	// (0x0003d3fb) list_double_large_graphic_phob2_cc_pane

0xda13,	// (0x0003d422) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xda13,	// (0x0003d422) list_double_large_graphic_phob2_cc_pane_g1

0x642f,	// (0x00035e3e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x642f,	// (0x00035e3e) list_double_large_graphic_phob2_cc_pane_g2

0x643e,	// (0x00035e4d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x643e,	// (0x00035e4d) list_double_large_graphic_phob2_cc_pane_g3

0x644d,	// (0x00035e5c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x644d,	// (0x00035e5c) list_double_large_graphic_phob2_cc_pane_g4

0x645e,	// (0x00035e6d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x645e,	// (0x00035e6d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0003f966) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0003f966) list_double_large_graphic_phob2_cc_pane_g

0x646d,	// (0x00035e7c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x646d,	// (0x00035e7c) list_double_large_graphic_phob2_cc_pane_t1

0x6496,	// (0x00035ea5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6496,	// (0x00035ea5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0003f971) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0003f971) list_double_large_graphic_phob2_cc_pane_t

0xda24,	// (0x0003d433) list_highlight_pane_cp025_ParamLimits

0xda24,	// (0x0003d433) list_highlight_pane_cp025

0xf0e1,	// (0x0003eaf0) bg_button_pane_cp033_ParamLimits

0xd9b9,	// (0x0003d3c8) phob2_cc_button_pane_g1_ParamLimits

0xd9c5,	// (0x0003d3d4) phob2_cc_button_pane_t1_ParamLimits

0xd9da,	// (0x0003d3e9) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0003f961) phob2_cc_button_pane_t_ParamLimits

0x6732,	// (0x00036141) popup_wgtman_window

0x2722,	// (0x00032131) scroll_pane_cp038

0xd559,	// (0x0003cf68) wgtman_btn_pane_cp_01_ParamLimits

0xd559,	// (0x0003cf68) wgtman_btn_pane_cp_01

0xda32,	// (0x0003d441) wgtman_content_pane

0xda3b,	// (0x0003d44a) wgtman_heading_pane

0xda84,	// (0x0003d493) bg_heading_pane_cp02

0xda44,	// (0x0003d453) wgtman_heading_pane_g1

0xda4c,	// (0x0003d45b) wgtman_heading_pane_t1

0xda5a,	// (0x0003d469) scroll_pane_cp036

0xda62,	// (0x0003d471) wgtman_list_pane

0xda6a,	// (0x0003d479) wgtman_list_pane_t1_ParamLimits

0xda6a,	// (0x0003d479) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
