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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001684c };

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
0x8612,	// (0x0001ee5e) Screen

0x861e,	// (0x0001ee6a) application_window

0x862a,	// (0x0001ee76) area_bottom_pane_ParamLimits

0x862a,	// (0x0001ee76) area_bottom_pane

0x6e86,	// (0x0001d6d2) area_top_pane_ParamLimits

0x6e86,	// (0x0001d6d2) area_top_pane

0x6eea,	// (0x0001d736) call_video_uplink_pane_ParamLimits

0x6eea,	// (0x0001d736) call_video_uplink_pane

0x6f29,	// (0x0001d775) main_pane_ParamLimits

0x6f29,	// (0x0001d775) main_pane

0x2c16,	// (0x00019462) context_pane

0xad25,	// (0x00021571) navi_pane

0xad4b,	// (0x00021597) popup_cale_events_window_ParamLimits

0xad4b,	// (0x00021597) popup_cale_events_window

0x2c29,	// (0x00019475) popup_mup_playback_window

0xad63,	// (0x000215af) signal_pane

0x0a5d,	// (0x000172a9) main_browser_pane

0x0ca2,	// (0x000174ee) main_burst_pane

0x74e7,	// (0x0001dd33) main_calc_pane

0x2bb6,	// (0x00019402) main_cale_day_pane

0x890e,	// (0x0001f15a) main_cale_month_pane

0x2bb6,	// (0x00019402) main_cale_week_pane

0x0ca2,	// (0x000174ee) main_call_pane

0x06f3,	// (0x00016f3f) main_call_poc_pane

0x0ca2,	// (0x000174ee) main_camera_pane

0x0ca2,	// (0x000174ee) main_chi_dic_pane

0x1517,	// (0x00017d63) main_clock_pane

0x06f3,	// (0x00016f3f) main_fmradio_pane

0x0ca2,	// (0x000174ee) main_graph_messa_pane

0x06f3,	// (0x00016f3f) main_help_pane

0x0a5d,	// (0x000172a9) main_im_pane

0x094e,	// (0x0001719a) main_image_pane_ParamLimits

0x094e,	// (0x0001719a) main_image_pane

0x06f3,	// (0x00016f3f) main_location2_pane

0x0ca2,	// (0x000174ee) main_location_pane

0x094e,	// (0x0001719a) main_messa_pane

0x06f3,	// (0x00016f3f) main_mp2_pane

0x0ca2,	// (0x000174ee) main_mp_pane

0x06f3,	// (0x00016f3f) main_msg_pane

0x06f3,	// (0x00016f3f) main_mup_eq_pane

0x06f3,	// (0x00016f3f) main_mup_pane

0x0a5d,	// (0x000172a9) main_notes_pane

0x06f3,	// (0x00016f3f) main_pec_pane

0x06f3,	// (0x00016f3f) main_phob_pane

0x06f3,	// (0x00016f3f) main_pinb_pane

0x06f3,	// (0x00016f3f) main_postcard_pane

0x06f3,	// (0x00016f3f) main_qdial_pane

0x0ca2,	// (0x000174ee) main_skin_pane

0x06f3,	// (0x00016f3f) main_smil2_pane

0x0ca2,	// (0x000174ee) main_smil_pane

0x0ca2,	// (0x000174ee) main_video_pane

0x0ca2,	// (0x000174ee) main_video_tele_pane

0x094e,	// (0x0001719a) main_viewer_pane_ParamLimits

0x094e,	// (0x0001719a) main_viewer_pane

0x0ca2,	// (0x000174ee) main_vorec_pane

0x7533,	// (0x0001dd7f) popup_blid_sat_info_window_ParamLimits

0x7533,	// (0x0001dd7f) popup_blid_sat_info_window

0x7553,	// (0x0001dd9f) popup_dyc_status_message_window_ParamLimits

0x7553,	// (0x0001dd9f) popup_dyc_status_message_window

0x7563,	// (0x0001ddaf) popup_grid_large_graphic_window_ParamLimits

0x7563,	// (0x0001ddaf) popup_grid_large_graphic_window

0x75f4,	// (0x0001de40) popup_loc_request_window_ParamLimits

0x75f4,	// (0x0001de40) popup_loc_request_window

0x7641,	// (0x0001de8d) popup_wml_address_window_ParamLimits

0x7641,	// (0x0001de8d) popup_wml_address_window

0xac07,	// (0x00021453) call_muted_g1

0xa882,	// (0x000210ce) popup_call_audio_conf_window_ParamLimits

0xa882,	// (0x000210ce) popup_call_audio_conf_window

0xac17,	// (0x00021463) popup_call_audio_first_window_ParamLimits

0xac17,	// (0x00021463) popup_call_audio_first_window

0xac57,	// (0x000214a3) popup_call_audio_in_window_ParamLimits

0xac57,	// (0x000214a3) popup_call_audio_in_window

0xac7b,	// (0x000214c7) popup_call_audio_out_window_ParamLimits

0xac7b,	// (0x000214c7) popup_call_audio_out_window

0xac9d,	// (0x000214e9) popup_call_audio_second_window_ParamLimits

0xac9d,	// (0x000214e9) popup_call_audio_second_window

0xaccd,	// (0x00021519) popup_call_audio_wait_window_ParamLimits

0xaccd,	// (0x00021519) popup_call_audio_wait_window

0xacee,	// (0x0002153a) popup_number_entry_window_ParamLimits

0xacee,	// (0x0002153a) popup_number_entry_window

0x02e0,	// (0x00016b2c) bg_popup_call_pane_cp05_ParamLimits

0x02e0,	// (0x00016b2c) bg_popup_call_pane_cp05

0x0300,	// (0x00016b4c) popup_number_entry_window_t1

0x0313,	// (0x00016b5f) popup_number_entry_window_t2

0x0325,	// (0x00016b71) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000258b7) popup_number_entry_window_t

0x0337,	// (0x00016b83) text_title_cp2

0x034a,	// (0x00016b96) bg_popup_call_pane_cp_ParamLimits

0x034a,	// (0x00016b96) bg_popup_call_pane_cp

0x0358,	// (0x00016ba4) call_thumbnail_pane

0x0360,	// (0x00016bac) popup_call_audio_in_window_g1_ParamLimits

0x0360,	// (0x00016bac) popup_call_audio_in_window_g1

0x036c,	// (0x00016bb8) popup_call_audio_in_window_g2_ParamLimits

0x036c,	// (0x00016bb8) popup_call_audio_in_window_g2

0x0378,	// (0x00016bc4) popup_call_audio_in_window_g3_ParamLimits

0x0378,	// (0x00016bc4) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x000258c0) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x000258c0) popup_call_audio_in_window_g

0x0384,	// (0x00016bd0) popup_call_audio_in_window_t1_ParamLimits

0x0384,	// (0x00016bd0) popup_call_audio_in_window_t1

0x03a0,	// (0x00016bec) popup_call_audio_in_window_t2_ParamLimits

0x03a0,	// (0x00016bec) popup_call_audio_in_window_t2

0x03bc,	// (0x00016c08) popup_call_audio_in_window_t3_ParamLimits

0x03bc,	// (0x00016c08) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x000258c7) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x000258c7) popup_call_audio_in_window_t

0x034a,	// (0x00016b96) bg_popup_call_pane_cp01_ParamLimits

0x034a,	// (0x00016b96) bg_popup_call_pane_cp01

0x0358,	// (0x00016ba4) call_thumbnail_pane_cp02

0x03cf,	// (0x00016c1b) call_type_pane_cp022

0x03d7,	// (0x00016c23) popup_call_audio_out_window_g1_ParamLimits

0x03d7,	// (0x00016c23) popup_call_audio_out_window_g1

0x03e9,	// (0x00016c35) popup_call_audio_out_window_g2_ParamLimits

0x03e9,	// (0x00016c35) popup_call_audio_out_window_g2

0x03f5,	// (0x00016c41) popup_call_audio_out_window_g3_ParamLimits

0x03f5,	// (0x00016c41) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x000258ce) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x000258ce) popup_call_audio_out_window_g

0x0407,	// (0x00016c53) popup_call_audio_out_window_t1_ParamLimits

0x0407,	// (0x00016c53) popup_call_audio_out_window_t1

0x041f,	// (0x00016c6b) popup_call_audio_out_window_t2_ParamLimits

0x041f,	// (0x00016c6b) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x000258d5) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x000258d5) popup_call_audio_out_window_t

0x0434,	// (0x00016c80) bg_popup_call_pane_ParamLimits

0x0434,	// (0x00016c80) bg_popup_call_pane

0x86a4,	// (0x0001eef0) call_thumbnail_pane_cp_ParamLimits

0x86a4,	// (0x0001eef0) call_thumbnail_pane_cp

0x04b8,	// (0x00016d04) call_type_pane_cp01_ParamLimits

0x04b8,	// (0x00016d04) call_type_pane_cp01

0x04fc,	// (0x00016d48) popup_call_audio_first_window_g1_ParamLimits

0x04fc,	// (0x00016d48) popup_call_audio_first_window_g1

0x0548,	// (0x00016d94) popup_call_audio_first_window_g2_ParamLimits

0x0548,	// (0x00016d94) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x000258da) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x000258da) popup_call_audio_first_window_g

0x058c,	// (0x00016dd8) popup_call_audio_first_window_t1_ParamLimits

0x058c,	// (0x00016dd8) popup_call_audio_first_window_t1

0x0638,	// (0x00016e84) popup_call_audio_first_window_t4_ParamLimits

0x0638,	// (0x00016e84) popup_call_audio_first_window_t4

0x06c4,	// (0x00016f10) popup_call_audio_first_window_t5_ParamLimits

0x06c4,	// (0x00016f10) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x000258df) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x000258df) popup_call_audio_first_window_t

0x06f3,	// (0x00016f3f) bg_popup_call_pane_cp02

0x06fd,	// (0x00016f49) call_type_pane_cp023

0x0705,	// (0x00016f51) popup_call_audio_wait_window_g1

0x070d,	// (0x00016f59) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x000258e6) popup_call_audio_wait_window_g

0x0715,	// (0x00016f61) popup_call_audio_wait_window_t3

0x0723,	// (0x00016f6f) bg_popup_call_pane_cp03_ParamLimits

0x0723,	// (0x00016f6f) bg_popup_call_pane_cp03

0x0783,	// (0x00016fcf) call_thumbnail_pane_cp011_ParamLimits

0x0783,	// (0x00016fcf) call_thumbnail_pane_cp011

0x078f,	// (0x00016fdb) call_type_pane_cp034_ParamLimits

0x078f,	// (0x00016fdb) call_type_pane_cp034

0x07cb,	// (0x00017017) popup_call_audio_second_window_g1_ParamLimits

0x07cb,	// (0x00017017) popup_call_audio_second_window_g1

0x0807,	// (0x00017053) popup_call_audio_second_window_g2_ParamLimits

0x0807,	// (0x00017053) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x000258eb) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x000258eb) popup_call_audio_second_window_g

0x0843,	// (0x0001708f) popup_call_audio_second_window_t1_ParamLimits

0x0843,	// (0x0001708f) popup_call_audio_second_window_t1

0x08c4,	// (0x00017110) popup_call_audio_second_window_t2_ParamLimits

0x08c4,	// (0x00017110) popup_call_audio_second_window_t2

0x08fa,	// (0x00017146) popup_call_audio_second_window_t3_ParamLimits

0x08fa,	// (0x00017146) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x000258f0) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x000258f0) popup_call_audio_second_window_t

0x06f3,	// (0x00016f3f) bg_popup_call_pane_cp04

0x0930,	// (0x0001717c) list_conf_pane

0x0938,	// (0x00017184) popup_call_audio_conf_window_t1

0x0946,	// (0x00017192) call_thumbnail_pane_g1

0x094e,	// (0x0001719a) bg_pinb_pane_ParamLimits

0x094e,	// (0x0001719a) bg_pinb_pane

0x095c,	// (0x000171a8) find_pinb_pane

0x094e,	// (0x0001719a) listscroll_pinb_pane_ParamLimits

0x094e,	// (0x0001719a) listscroll_pinb_pane

0x0966,	// (0x000171b2) pinb_bg_pane_g1

0x0966,	// (0x000171b2) pinb_bg_pane_g2

0x0966,	// (0x000171b2) pinb_bg_pane_g3

0x0966,	// (0x000171b2) pinb_bg_pane_g4

0x0966,	// (0x000171b2) pinb_bg_pane_g5

0x0966,	// (0x000171b2) pinb_bg_pane_g6

0x0966,	// (0x000171b2) pinb_bg_pane_g7

0x0966,	// (0x000171b2) pinb_bg_pane_g8

0x0966,	// (0x000171b2) pinb_bg_pane_g9

0x0966,	// (0x000171b2) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x000258f7) pinb_bg_pane_g

0x0263,	// (0x00016aaf) grid_pinb_pane

0x0263,	// (0x00016aaf) list_pinb_pane

0x02d2,	// (0x00016b1e) scroll_pane_cp01_ParamLimits

0x02d2,	// (0x00016b1e) scroll_pane_cp01

0x0970,	// (0x000171bc) find_pinb_pane_g1_ParamLimits

0x0970,	// (0x000171bc) find_pinb_pane_g1

0x0988,	// (0x000171d4) find_pinb_pane_t1

0x099a,	// (0x000171e6) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00025911) find_pinb_pane_t

0x09af,	// (0x000171fb) input_focus_pane_cp01_ParamLimits

0x09af,	// (0x000171fb) input_focus_pane_cp01

0x09bb,	// (0x00017207) cell_pinb_pane_ParamLimits

0x09bb,	// (0x00017207) cell_pinb_pane

0x09c9,	// (0x00017215) cell_pinb_pane_g1_ParamLimits

0x09c9,	// (0x00017215) cell_pinb_pane_g1

0x09d7,	// (0x00017223) cell_pinb_pane_g2_ParamLimits

0x09d7,	// (0x00017223) cell_pinb_pane_g2

0x09d7,	// (0x00017223) cell_pinb_pane_g3_ParamLimits

0x09d7,	// (0x00017223) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00025916) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00025916) cell_pinb_pane_g

0x06f3,	// (0x00016f3f) grid_highlight_pane_cp01

0x09bb,	// (0x00017207) list_pinb_item_pane_ParamLimits

0x09bb,	// (0x00017207) list_pinb_item_pane

0x0263,	// (0x00016aaf) list_highlight_pane_cp02

0x09e5,	// (0x00017231) list_pinb_item_pane_g1_ParamLimits

0x09e5,	// (0x00017231) list_pinb_item_pane_g1

0x09d7,	// (0x00017223) list_pinb_item_pane_g2_ParamLimits

0x09d7,	// (0x00017223) list_pinb_item_pane_g2

0x09c9,	// (0x00017215) list_pinb_item_pane_g3_ParamLimits

0x09c9,	// (0x00017215) list_pinb_item_pane_g3

0x09d7,	// (0x00017223) list_pinb_item_pane_g4_ParamLimits

0x09d7,	// (0x00017223) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0002591d) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0002591d) list_pinb_item_pane_g

0x09f3,	// (0x0001723f) list_pinb_item_pane_t1_ParamLimits

0x09f3,	// (0x0001723f) list_pinb_item_pane_t1

0x7117,	// (0x0001d963) calc_display_pane

0x7135,	// (0x0001d981) calc_paper_pane

0x7151,	// (0x0001d99d) grid_calc_pane

0x06f3,	// (0x00016f3f) bg_list_pane_cp01

0x86c8,	// (0x0001ef14) clock_g1

0x86d0,	// (0x0001ef1c) clock_g2

0x0001,

0xf0da,	// (0x00025926) clock_g

0x86da,	// (0x0001ef26) clock_t1_ParamLimits

0x86da,	// (0x0001ef26) clock_t1

0x86ef,	// (0x0001ef3b) clock_t2_ParamLimits

0x86ef,	// (0x0001ef3b) clock_t2

0x8701,	// (0x0001ef4d) clock_t3_ParamLimits

0x8701,	// (0x0001ef4d) clock_t3

0x8713,	// (0x0001ef5f) clock_t4_ParamLimits

0x8713,	// (0x0001ef5f) clock_t4

0x8725,	// (0x0001ef71) clock_t5_ParamLimits

0x8725,	// (0x0001ef71) clock_t5

0x873a,	// (0x0001ef86) clock_t6_ParamLimits

0x873a,	// (0x0001ef86) clock_t6

0x874c,	// (0x0001ef98) clock_t7_ParamLimits

0x874c,	// (0x0001ef98) clock_t7

0x875e,	// (0x0001efaa) clock_t8_ParamLimits

0x875e,	// (0x0001efaa) clock_t8

0x8774,	// (0x0001efc0) clock_t9_ParamLimits

0x8774,	// (0x0001efc0) clock_t9

0x0008,

0xf0df,	// (0x0002592b) clock_t_ParamLimits

0xf0df,	// (0x0002592b) clock_t

0x0a0f,	// (0x0001725b) popup_clock_analogue_window_cp02

0x0a0f,	// (0x0001725b) popup_clock_digital_window_cp01

0x06f3,	// (0x00016f3f) listscroll_help_pane

0x06f3,	// (0x00016f3f) phob_pre_status_pane

0x0a17,	// (0x00017263) grid_qdial_pane

0x878a,	// (0x0001efd6) listscroll_mce_pane

0x094e,	// (0x0001719a) bg_notes_pane

0x0a21,	// (0x0001726d) list_notes_pane

0x87a8,	// (0x0001eff4) scroll_pane_cp06

0x0a2f,	// (0x0001727b) bg_calc_paper_pane

0x717d,	// (0x0001d9c9) list_calc_pane

0x0a5d,	// (0x000172a9) bg_calc_display_pane

0x7197,	// (0x0001d9e3) calc_display_pane_t1

0x71ac,	// (0x0001d9f8) calc_display_pane_t2

0x71c1,	// (0x0001da0d) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0002593e) calc_display_pane_t

0x71d3,	// (0x0001da1f) cell_calc_pane_ParamLimits

0x71d3,	// (0x0001da1f) cell_calc_pane

0x0a7b,	// (0x000172c7) bg_calc_paper_pane_g1

0x0a93,	// (0x000172df) bg_calc_paper_pane_g2

0x0a87,	// (0x000172d3) bg_calc_paper_pane_g3

0x0aab,	// (0x000172f7) bg_calc_paper_pane_g4

0x0a9f,	// (0x000172eb) bg_calc_paper_pane_g5

0x87b7,	// (0x0001f003) bg_calc_paper_pane_g6

0x87c8,	// (0x0001f014) bg_calc_paper_pane_g7

0x87d9,	// (0x0001f025) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00025945) bg_calc_paper_pane_g

0x87ea,	// (0x0001f036) calc_bg_paper_pane_g9

0x87fb,	// (0x0001f047) list_calc_item_pane_ParamLimits

0x87fb,	// (0x0001f047) list_calc_item_pane

0x0ab7,	// (0x00017303) list_calc_item_pane_g1

0x7200,	// (0x0001da4c) list_calc_item_pane_t1_ParamLimits

0x7200,	// (0x0001da4c) list_calc_item_pane_t1

0x7212,	// (0x0001da5e) list_calc_item_pane_t2_ParamLimits

0x7212,	// (0x0001da5e) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00025956) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00025956) list_calc_item_pane_t

0x0966,	// (0x000171b2) cell_calc_pane_g1

0x0ad6,	// (0x00017322) grid_highlight_pane_cp02

0x8827,	// (0x0001f073) bg_calc_display_pane_g1

0x7242,	// (0x0001da8e) bg_calc_display_pane_g2

0x8830,	// (0x0001f07c) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00025960) bg_calc_display_pane_g

0x724c,	// (0x0001da98) cell_qdial_pane_ParamLimits

0x724c,	// (0x0001da98) cell_qdial_pane

0x8839,	// (0x0001f085) cell_qdial_pane_g1_ParamLimits

0x8839,	// (0x0001f085) cell_qdial_pane_g1

0x8846,	// (0x0001f092) cell_qdial_pane_g2_ParamLimits

0x8846,	// (0x0001f092) cell_qdial_pane_g2

0x0b01,	// (0x0001734d) cell_qdial_pane_g3_ParamLimits

0x0b01,	// (0x0001734d) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00025967) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00025967) cell_qdial_pane_g

0x8864,	// (0x0001f0b0) cell_qdial_pane_t1_ParamLimits

0x8864,	// (0x0001f0b0) cell_qdial_pane_t1

0x887c,	// (0x0001f0c8) cell_qdial_pane_t2_ParamLimits

0x887c,	// (0x0001f0c8) cell_qdial_pane_t2

0x888f,	// (0x0001f0db) cell_qdial_pane_t3_ParamLimits

0x888f,	// (0x0001f0db) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00025970) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00025970) cell_qdial_pane_t

0x06f3,	// (0x00016f3f) grid_highlight_pane_cp04

0x0b0d,	// (0x00017359) thumbnail_qdial_pane_ParamLimits

0x0b0d,	// (0x00017359) thumbnail_qdial_pane

0x0b69,	// (0x000173b5) list_help_pane

0x0b72,	// (0x000173be) scroll_pane_cp02

0x88a2,	// (0x0001f0ee) help_list_pane_t1_ParamLimits

0x88a2,	// (0x0001f0ee) help_list_pane_t1

0x7260,	// (0x0001daac) bg_notes_pane_g2

0x7268,	// (0x0001dab4) bg_notes_pane_g3

0x7270,	// (0x0001dabc) notes_bg_pane_g1

0x7278,	// (0x0001dac4) notes_bg_pane_g4

0x7280,	// (0x0001dacc) notes_bg_pane_g5

0x7288,	// (0x0001dad4) notes_bg_pane_g6

0x7290,	// (0x0001dadc) notes_bg_pane_g7

0x7298,	// (0x0001dae4) notes_bg_pane_g8

0x72a0,	// (0x0001daec) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0002598e) notes_bg_pane_g

0x88d8,	// (0x0001f124) list_notes_text_pane_ParamLimits

0x88d8,	// (0x0001f124) list_notes_text_pane

0x0be1,	// (0x0001742d) list_notes_text_pane_g1

0x8900,	// (0x0001f14c) list_notes_text_pane_t1

0x890e,	// (0x0001f15a) listscroll_cale_week_pane

0x8933,	// (0x0001f17f) bg_cale_heading_pane

0x0c04,	// (0x00017450) bg_cale_pane_cp01

0x8953,	// (0x0001f19f) cale_week_corner_pane

0x896d,	// (0x0001f1b9) cale_week_day_heading_pane

0x898d,	// (0x0001f1d9) cale_week_scroll_pane_g1

0x89a8,	// (0x0001f1f4) cale_week_scroll_pane_g2

0x89bb,	// (0x0001f207) cale_week_scroll_pane_g3

0x89ce,	// (0x0001f21a) cale_week_scroll_pane_g4

0x89e1,	// (0x0001f22d) cale_week_scroll_pane_g5

0x89f4,	// (0x0001f240) cale_week_scroll_pane_g6

0x8a07,	// (0x0001f253) cale_week_scroll_pane_g7

0x8a1c,	// (0x0001f268) cale_week_scroll_pane_g8

0x8a31,	// (0x0001f27d) cale_week_scroll_pane_g9

0x8a44,	// (0x0001f290) cale_week_scroll_pane_g10

0x8a57,	// (0x0001f2a3) cale_week_scroll_pane_g11

0x8a6a,	// (0x0001f2b6) cale_week_scroll_pane_g12

0x8a81,	// (0x0001f2cd) cale_week_scroll_pane_g13

0x8a9c,	// (0x0001f2e8) cale_week_scroll_pane_g14

0x8ab7,	// (0x0001f303) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0002599d) cale_week_scroll_pane_g

0x8ae7,	// (0x0001f333) cale_week_time_pane

0x8afc,	// (0x0001f348) grid_cale_week_pane

0x0c33,	// (0x0001747f) scroll_pane_cp08

0x8b1b,	// (0x0001f367) cell_cale_week_pane_ParamLimits

0x8b1b,	// (0x0001f367) cell_cale_week_pane

0x8b7d,	// (0x0001f3c9) cale_week_day_heading_pane_t1

0x8b98,	// (0x0001f3e4) cale_week_day_heading_pane_t2

0x8bb3,	// (0x0001f3ff) cale_week_day_heading_pane_t3

0x8bce,	// (0x0001f41a) cale_week_day_heading_pane_t4

0x8be9,	// (0x0001f435) cale_week_day_heading_pane_t5

0x8c04,	// (0x0001f450) cale_week_day_heading_pane_t6

0x8c1f,	// (0x0001f46b) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x000259be) cale_week_day_heading_pane_t

0x0c50,	// (0x0001749c) bg_cale_side_pane

0x72a8,	// (0x0001daf4) cale_week_time_pane_t1

0x72c2,	// (0x0001db0e) cale_week_time_pane_t2

0x72dc,	// (0x0001db28) cale_week_time_pane_t3

0x72f6,	// (0x0001db42) cale_week_time_pane_t4

0x7310,	// (0x0001db5c) cale_week_time_pane_t5

0x732a,	// (0x0001db76) cale_week_time_pane_t6

0x7348,	// (0x0001db94) cale_week_time_pane_t7

0x736a,	// (0x0001dbb6) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x000259cd) cale_week_time_pane_t

0x8c3a,	// (0x0001f486) cell_cale_week_pane_g2

0x8c5e,	// (0x0001f4aa) cell_cale_week_pane_g3_ParamLimits

0x8c5e,	// (0x0001f4aa) cell_cale_week_pane_g3

0x0c5e,	// (0x000174aa) grid_highlight_pane_cp07

0x0c66,	// (0x000174b2) listscroll_gms_pane

0x0c70,	// (0x000174bc) grid_gms_pane

0x0c79,	// (0x000174c5) listscroll_gms_pane_g1

0x0c81,	// (0x000174cd) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x000259de) listscroll_gms_pane_g

0x8c76,	// (0x0001f4c2) scroll_pane_cp010

0x8c81,	// (0x0001f4cd) cell_gms_pane_ParamLimits

0x8c81,	// (0x0001f4cd) cell_gms_pane

0x8c94,	// (0x0001f4e0) cell_gms_pane_g1

0x0c89,	// (0x000174d5) cell_gms_pane_g2

0x0be1,	// (0x0001742d) cell_gms_pane_g3

0x0c91,	// (0x000174dd) cell_gms_pane_g4

0x0003,

0xf197,	// (0x000259e3) cell_gms_pane_g

0x0c9a,	// (0x000174e6) grid_highlight_pane_cp09

0xab8b,	// (0x000213d7) phob_pre_status_pane_g1

0xab93,	// (0x000213df) phob_pre_status_pane_g2

0xab9b,	// (0x000213e7) phob_pre_status_pane_g3

0xaba3,	// (0x000213ef) phob_pre_status_pane_g4

0x0004,

0xf560,	// (0x00025dac) phob_pre_status_pane_g

0xabb3,	// (0x000213ff) phob_pre_status_pane_t1

0xabc3,	// (0x0002140f) phob_pre_status_pane_t2

0xabd3,	// (0x0002141f) phob_pre_status_pane_t3

0x0002,

0xf56b,	// (0x00025db7) phob_pre_status_pane_t

0x0ca2,	// (0x000174ee) bg_list_pane_cp05

0x8ca4,	// (0x0001f4f0) grid_vorec_pane

0x8cae,	// (0x0001f4fa) vorec_t1

0x8cbc,	// (0x0001f508) vorec_t2

0x8cca,	// (0x0001f516) vorec_t3

0x8cd8,	// (0x0001f524) vorec_t4

0x85ec,	// (0x0001ee38) vorec_t5

0x85fa,	// (0x0001ee46) vorec_t6

0x0004,

0xf1a0,	// (0x000259ec) vorec_t

0x8608,	// (0x0001ee54) wait_bar_pane_cp01

0x8cf4,	// (0x0001f540) cell_vorec_pane_ParamLimits

0x8cf4,	// (0x0001f540) cell_vorec_pane

0x738e,	// (0x0001dbda) cell_vorec_pane_g1

0x06f3,	// (0x00016f3f) grid_highlight_pane_cp05

0x09bb,	// (0x00017207) cams_zoom_pane

0x09bb,	// (0x00017207) image_vga_pane

0x09d7,	// (0x00017223) main_camera_pane_g1

0x09d7,	// (0x00017223) main_camera_pane_g2

0x09d7,	// (0x00017223) main_camera_pane_g3

0x09d7,	// (0x00017223) main_camera_pane_g4

0x09d7,	// (0x00017223) main_camera_pane_g5

0x09d7,	// (0x00017223) main_camera_pane_g6

0x09d7,	// (0x00017223) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x000259f7) main_camera_pane_g

0x1885,	// (0x000180d1) main_camera_pane_t1

0x1885,	// (0x000180d1) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00025a08) main_camera_pane_t

0x8d07,	// (0x0001f553) cams_zoom_pane_cp_ParamLimits

0x8d07,	// (0x0001f553) cams_zoom_pane_cp

0x8d35,	// (0x0001f581) image_cif_pane_ParamLimits

0x8d35,	// (0x0001f581) image_cif_pane

0x0263,	// (0x00016aaf) image_subqcif_pane

0x8d43,	// (0x0001f58f) main_video_pane_g1_ParamLimits

0x8d43,	// (0x0001f58f) main_video_pane_g1

0x8d6b,	// (0x0001f5b7) main_video_pane_g2_ParamLimits

0x8d6b,	// (0x0001f5b7) main_video_pane_g2

0x8d9e,	// (0x0001f5ea) main_video_pane_g3_ParamLimits

0x8d9e,	// (0x0001f5ea) main_video_pane_g3

0x8d9e,	// (0x0001f5ea) main_video_pane_g4_ParamLimits

0x8d9e,	// (0x0001f5ea) main_video_pane_g4

0x8dcc,	// (0x0001f618) main_video_pane_g5_ParamLimits

0x8dcc,	// (0x0001f618) main_video_pane_g5

0x0cc8,	// (0x00017514) main_video_pane_g6_ParamLimits

0x0cc8,	// (0x00017514) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00025a0d) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00025a0d) main_video_pane_g

0x8de8,	// (0x0001f634) main_video_pane_t1_ParamLimits

0x8de8,	// (0x0001f634) main_video_pane_t1

0x0ce2,	// (0x0001752e) cams_zoom_pane_g1

0x0ce2,	// (0x0001752e) cams_zoom_pane_g2

0x0ce2,	// (0x0001752e) cams_zoom_pane_g3

0x0ce2,	// (0x0001752e) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00025a1c) cams_zoom_pane_g

0x8e2e,	// (0x0001f67a) grid_cams_pane

0x8e3c,	// (0x0001f688) linegrid_cams_pane

0x8e4a,	// (0x0001f696) cell_cams_pane_ParamLimits

0x8e4a,	// (0x0001f696) cell_cams_pane

0x0cec,	// (0x00017538) cams_burst_image_pane

0x0cf4,	// (0x00017540) cell_cams_pane_g1

0x06f3,	// (0x00016f3f) grid_highlight_pane_cp03

0x0966,	// (0x000171b2) mp_bg_pane_g1

0x0263,	// (0x00016aaf) bg_list_pane_cp03

0x0263,	// (0x00016aaf) bg_mp_pane

0x0263,	// (0x00016aaf) grid_mp_pane

0x0ce2,	// (0x0001752e) media_player_g1

0x1238,	// (0x00017a84) media_player_t1

0x1238,	// (0x00017a84) media_player_t2

0x1238,	// (0x00017a84) media_player_t3

0x1238,	// (0x00017a84) media_player_t4

0x1238,	// (0x00017a84) media_player_t5

0x1238,	// (0x00017a84) media_player_t6

0x1238,	// (0x00017a84) media_player_t7

0x0006,

0xf54a,	// (0x00025d96) media_player_t

0x0263,	// (0x00016aaf) wait_bar_pane_cp02

0xf52f,	// (0x00025d7b) main_usb_pane_t

0x1517,	// (0x00017d63) cell_mp_pane

0x0966,	// (0x000171b2) cell_mp_pane_g1

0x06f3,	// (0x00016f3f) grid_highlight_pane_cp06

0x0cfc,	// (0x00017548) grid_skin_colour_pane

0x0d04,	// (0x00017550) list_highlight_pane_cp03

0x8e5d,	// (0x0001f6a9) skin_g1

0x0d0c,	// (0x00017558) skin_t1

0x0d1b,	// (0x00017567) skin_t2

0x0001,

0xf1fe,	// (0x00025a4a) skin_t

0x8e67,	// (0x0001f6b3) cell_skin_colour_pane_ParamLimits

0x8e67,	// (0x0001f6b3) cell_skin_colour_pane

0x0d29,	// (0x00017575) cell_skin_colour_pane_g1

0x8eeb,	// (0x0001f737) call_video_g1_ParamLimits

0x8eeb,	// (0x0001f737) call_video_g1

0x8efb,	// (0x0001f747) call_video_g2_ParamLimits

0x8efb,	// (0x0001f747) call_video_g2

0x0001,

0xf203,	// (0x00025a4f) call_video_g_ParamLimits

0xf203,	// (0x00025a4f) call_video_g

0x8f55,	// (0x0001f7a1) call_video_uplink_pane_cp1_ParamLimits

0x8f55,	// (0x0001f7a1) call_video_uplink_pane_cp1

0x0d3b,	// (0x00017587) call_video_uplink_pane_cp2

0x9021,	// (0x0001f86d) video_down_crop_pane_ParamLimits

0x9021,	// (0x0001f86d) video_down_crop_pane

0x911f,	// (0x0001f96b) video_down_pane_ParamLimits

0x911f,	// (0x0001f96b) video_down_pane

0x0d43,	// (0x0001758f) video_down_subqcif_pane_ParamLimits

0x0d43,	// (0x0001758f) video_down_subqcif_pane

0x0d5b,	// (0x000175a7) video_down_subqcif_pane_cp_ParamLimits

0x0d5b,	// (0x000175a7) video_down_subqcif_pane_cp

0x0d81,	// (0x000175cd) im_reading_pane_ParamLimits

0x0d81,	// (0x000175cd) im_reading_pane

0x923f,	// (0x0001fa8b) im_writing_pane_ParamLimits

0x923f,	// (0x0001fa8b) im_writing_pane

0x925d,	// (0x0001faa9) im_reading_pane_t1

0x0d9b,	// (0x000175e7) list_im_pane

0x0dac,	// (0x000175f8) scroll_pane_cp07

0x92b1,	// (0x0001fafd) im_writing_pane_t1_ParamLimits

0x92b1,	// (0x0001fafd) im_writing_pane_t1

0x0dc5,	// (0x00017611) im_writing_pane_t2_ParamLimits

0x0dc5,	// (0x00017611) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00025a59) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00025a59) im_writing_pane_t

0x06f3,	// (0x00016f3f) input_focus_pane_cp04

0x06f3,	// (0x00016f3f) input_focus_pane_cp05

0x92c6,	// (0x0001fb12) list_im_single_pane_ParamLimits

0x92c6,	// (0x0001fb12) list_im_single_pane

0x92ea,	// (0x0001fb36) list_single_im_pane_t1

0x0ca2,	// (0x000174ee) blid_accuracy_pane

0x0ca2,	// (0x000174ee) blid_compass_pane

0x2b6e,	// (0x000193ba) main_location_t1

0x2b6e,	// (0x000193ba) main_location_t2

0x2b6e,	// (0x000193ba) main_location_t3

0x0002,

0xf559,	// (0x00025da5) main_location_t

0x06f3,	// (0x00016f3f) aid_levels_location

0x0966,	// (0x000171b2) blid_accuracy_pane_g1

0x0966,	// (0x000171b2) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x00025aad) blid_accuracy_pane_g

0x0e0d,	// (0x00017659) wml_content_pane

0x0e4b,	// (0x00017697) wml_button_pane_ParamLimits

0x0e4b,	// (0x00017697) wml_button_pane

0x92f9,	// (0x0001fb45) wml_list_single_large_pane_ParamLimits

0x92f9,	// (0x0001fb45) wml_list_single_large_pane

0x9323,	// (0x0001fb6f) wml_list_single_medium_pane_ParamLimits

0x9323,	// (0x0001fb6f) wml_list_single_medium_pane

0x9354,	// (0x0001fba0) wml_list_single_small_pane_ParamLimits

0x9354,	// (0x0001fba0) wml_list_single_small_pane

0x0e5f,	// (0x000176ab) wml_selection_box_pane_ParamLimits

0x0e5f,	// (0x000176ab) wml_selection_box_pane

0x0e72,	// (0x000176be) wml_list_single_pane_t1

0x0e81,	// (0x000176cd) wml_list_single_medium_pane_t1

0x0e90,	// (0x000176dc) wml_list_single_large_pane_t1

0x0e9f,	// (0x000176eb) input_focus_pane_cp02_ParamLimits

0x0e9f,	// (0x000176eb) input_focus_pane_cp02

0x0eb2,	// (0x000176fe) wml_selection_box_pane_g1

0x0ebb,	// (0x00017707) wml_selection_box_pane_t1_ParamLimits

0x0ebb,	// (0x00017707) wml_selection_box_pane_t1

0x094e,	// (0x0001719a) bg_wml_button_pane_ParamLimits

0x094e,	// (0x0001719a) bg_wml_button_pane

0x0ed3,	// (0x0001771f) wml_button_pane_g1

0x0edb,	// (0x00017727) wml_button_pane_t1

0x0ed3,	// (0x0001771f) wml_button_bg_pane_g1

0x0eeb,	// (0x00017737) wml_button_bg_pane_g2

0x0ef3,	// (0x0001773f) wml_button_bg_pane_g3

0x0efb,	// (0x00017747) wml_button_bg_pane_g4

0x0f03,	// (0x0001774f) wml_button_bg_pane_g5

0x0f0b,	// (0x00017757) wml_button_bg_pane_g6

0x0f13,	// (0x0001775f) wml_button_bg_pane_g7

0x0f1b,	// (0x00017767) wml_button_bg_pane_g8

0x0f23,	// (0x0001776f) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00025a5e) wml_button_bg_pane_g

0x938e,	// (0x0001fbda) bg_list_pane_cp02

0x0f2b,	// (0x00017777) mce_header_pane_ParamLimits

0x0f2b,	// (0x00017777) mce_header_pane

0x0f41,	// (0x0001778d) mce_icon_pane

0x0f41,	// (0x0001778d) mce_image_pane

0x9396,	// (0x0001fbe2) mce_text_pane_ParamLimits

0x9396,	// (0x0001fbe2) mce_text_pane

0x93a9,	// (0x0001fbf5) scroll_pane_cp03

0x0e43,	// (0x0001768f) scroll_pane_cp04

0x0f4a,	// (0x00017796) scroll_pane_cp05_ParamLimits

0x0f4a,	// (0x00017796) scroll_pane_cp05

0x93b1,	// (0x0001fbfd) mce_header_field_pane_ParamLimits

0x93b1,	// (0x0001fbfd) mce_header_field_pane

0x93d1,	// (0x0001fc1d) mce_header_field_pane_2_ParamLimits

0x93d1,	// (0x0001fc1d) mce_header_field_pane_2

0x93e7,	// (0x0001fc33) mce_header_field_pane_3

0x93ef,	// (0x0001fc3b) list_single_mce_message_pane_ParamLimits

0x93ef,	// (0x0001fc3b) list_single_mce_message_pane

0x93ff,	// (0x0001fc4b) list_single_mce_smart_pane_ParamLimits

0x93ff,	// (0x0001fc4b) list_single_mce_smart_pane

0x0f56,	// (0x000177a2) input_focus_pane_cp03

0x0f5f,	// (0x000177ab) list_header_data_pane

0x941a,	// (0x0001fc66) mce_header_field_pane_t1

0x9428,	// (0x0001fc74) list_single_mce_header_pane_ParamLimits

0x9428,	// (0x0001fc74) list_single_mce_header_pane

0x0f67,	// (0x000177b3) list_single_mce_header_pane_t1

0x0f76,	// (0x000177c2) list_single_mce_message_pane_g1

0x0f7e,	// (0x000177ca) list_single_mce_message_pane_t1

0x945f,	// (0x0001fcab) bg_cale_heading_pane_cp01_ParamLimits

0x945f,	// (0x0001fcab) bg_cale_heading_pane_cp01

0x0f8c,	// (0x000177d8) bg_cale_pane_cp02_ParamLimits

0x0f8c,	// (0x000177d8) bg_cale_pane_cp02

0x94ad,	// (0x0001fcf9) cale_month_corner_pane

0x94cc,	// (0x0001fd18) cale_month_day_heading_pane_ParamLimits

0x94cc,	// (0x0001fd18) cale_month_day_heading_pane

0x9532,	// (0x0001fd7e) cale_month_pane_g1_ParamLimits

0x9532,	// (0x0001fd7e) cale_month_pane_g1

0x9575,	// (0x0001fdc1) cale_month_pane_g2_ParamLimits

0x9575,	// (0x0001fdc1) cale_month_pane_g2

0x95ad,	// (0x0001fdf9) cale_month_pane_g3_ParamLimits

0x95ad,	// (0x0001fdf9) cale_month_pane_g3

0x95f9,	// (0x0001fe45) cale_month_pane_g4_ParamLimits

0x95f9,	// (0x0001fe45) cale_month_pane_g4

0x9645,	// (0x0001fe91) cale_month_pane_g5_ParamLimits

0x9645,	// (0x0001fe91) cale_month_pane_g5

0x9691,	// (0x0001fedd) cale_month_pane_g6_ParamLimits

0x9691,	// (0x0001fedd) cale_month_pane_g6

0x96dd,	// (0x0001ff29) cale_month_pane_g7_ParamLimits

0x96dd,	// (0x0001ff29) cale_month_pane_g7

0x9741,	// (0x0001ff8d) cale_month_pane_g8_ParamLimits

0x9741,	// (0x0001ff8d) cale_month_pane_g8

0x97a5,	// (0x0001fff1) cale_month_pane_g9_ParamLimits

0x97a5,	// (0x0001fff1) cale_month_pane_g9

0x9803,	// (0x0002004f) cale_month_pane_g10_ParamLimits

0x9803,	// (0x0002004f) cale_month_pane_g10

0x985f,	// (0x000200ab) cale_month_pane_g11_ParamLimits

0x985f,	// (0x000200ab) cale_month_pane_g11

0x98b3,	// (0x000200ff) cale_month_pane_g12_ParamLimits

0x98b3,	// (0x000200ff) cale_month_pane_g12

0x9909,	// (0x00020155) cale_month_pane_g13_ParamLimits

0x9909,	// (0x00020155) cale_month_pane_g13

0x000c,

0xf225,	// (0x00025a71) cale_month_pane_g_ParamLimits

0xf225,	// (0x00025a71) cale_month_pane_g

0x995f,	// (0x000201ab) cale_month_week_pane

0x9983,	// (0x000201cf) grid_cale_month_pane_ParamLimits

0x9983,	// (0x000201cf) grid_cale_month_pane

0x99dc,	// (0x00020228) cale_month_day_heading_pane_t1

0x9a62,	// (0x000202ae) cale_month_day_heading_pane_t2

0x9adb,	// (0x00020327) cale_month_day_heading_pane_t3

0x9b54,	// (0x000203a0) cale_month_day_heading_pane_t4

0x9bcd,	// (0x00020419) cale_month_day_heading_pane_t5

0x9c46,	// (0x00020492) cale_month_day_heading_pane_t6

0x9cbf,	// (0x0002050b) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00025a8c) cale_month_day_heading_pane_t

0x0c50,	// (0x0001749c) bg_cale_side_pane_cp01

0x9d50,	// (0x0002059c) cale_month_week_pane_t1

0x9d69,	// (0x000205b5) cale_month_week_pane_t2

0x9d82,	// (0x000205ce) cale_month_week_pane_t3

0x9d9b,	// (0x000205e7) cale_month_week_pane_t4

0x9db4,	// (0x00020600) cale_month_week_pane_t5

0x9dd5,	// (0x00020621) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00025a9b) cale_month_week_pane_t

0x9df6,	// (0x00020642) cell_cale_month_pane_ParamLimits

0x9df6,	// (0x00020642) cell_cale_month_pane

0x7398,	// (0x0001dbe4) cell_cale_month_pane_g1

0x73a4,	// (0x0001dbf0) cell_cale_month_pane_t1_ParamLimits

0x73a4,	// (0x0001dbf0) cell_cale_month_pane_t1

0x0c5e,	// (0x000174aa) grid_highlight_pane_cp08

0x0966,	// (0x000171b2) main_smil_g1

0x9f18,	// (0x00020764) smil_status_pane

0x0fd7,	// (0x00017823) smil_text_pane

0x2a86,	// (0x000192d2) bg_popup_call3_rect_pane_g8

0x2a8e,	// (0x000192da) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x00025d39) bg_popup_call3_rect_pane_g

0x2c9e,	// (0x000194ea) smil_status_volume_pane_g1

0x0fe1,	// (0x0001782d) smil_status_pane_t1

0x7676,	// (0x0001dec2) volume_smil_pane

0x0ff8,	// (0x00017844) list_smil_text_pane

0x9f2b,	// (0x00020777) scroll_pane_cp011

0x9f36,	// (0x00020782) smil_text_list_pane_t1_ParamLimits

0x9f36,	// (0x00020782) smil_text_list_pane_t1

0x73d0,	// (0x0001dc1c) aid_volume_smil_ParamLimits

0x73d0,	// (0x0001dc1c) aid_volume_smil

0x0966,	// (0x000171b2) smil_volume_pane_g1

0x0966,	// (0x000171b2) smil_volume_pane_g2

0x0001,

0xf261,	// (0x00025aad) smil_volume_pane_g

0x890e,	// (0x0001f15a) listscroll_cale_day_pane

0x1024,	// (0x00017870) bg_cale_pane

0x103c,	// (0x00017888) list_cale_pane

0x105f,	// (0x000178ab) scroll_pane_cp09

0x1070,	// (0x000178bc) cale_bg_pane_g1

0x1078,	// (0x000178c4) cale_bg_pane_g2

0x1080,	// (0x000178cc) cale_bg_pane_g3

0x1088,	// (0x000178d4) cale_bg_pane_g4

0x1090,	// (0x000178dc) cale_bg_pane_g5

0x1098,	// (0x000178e4) cale_bg_pane_g6

0x10a0,	// (0x000178ec) cale_bg_pane_g7

0x10a8,	// (0x000178f4) cale_bg_pane_g8

0x10b0,	// (0x000178fc) cale_bg_pane_g9

0x0008,

0xf266,	// (0x00025ab2) cale_bg_pane_g

0x9fae,	// (0x000207fa) list_cale_time_pane_ParamLimits

0x9fae,	// (0x000207fa) list_cale_time_pane

0x10c0,	// (0x0001790c) list_cale_time_pane_g1_ParamLimits

0x10c0,	// (0x0001790c) list_cale_time_pane_g1

0x10cc,	// (0x00017918) list_cale_time_pane_g2_ParamLimits

0x10cc,	// (0x00017918) list_cale_time_pane_g2

0x9fd0,	// (0x0002081c) list_cale_time_pane_g3_ParamLimits

0x9fd0,	// (0x0002081c) list_cale_time_pane_g3

0x9fde,	// (0x0002082a) list_cale_time_pane_g4_ParamLimits

0x9fde,	// (0x0002082a) list_cale_time_pane_g4

0x9fec,	// (0x00020838) list_cale_time_pane_g5_ParamLimits

0x9fec,	// (0x00020838) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x00025ac5) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x00025ac5) list_cale_time_pane_g

0x10e6,	// (0x00017932) list_cale_time_pane_t1_ParamLimits

0x10e6,	// (0x00017932) list_cale_time_pane_t1

0x110e,	// (0x0001795a) list_cale_time_pane_t2_ParamLimits

0x110e,	// (0x0001795a) list_cale_time_pane_t2

0xa21c,	// (0x00020a68) aid_blid_cardinal_pane

0xa25e,	// (0x00020aaa) compass_pane_t4

0x1136,	// (0x00017982) list_cale_time_pane_t4_ParamLimits

0x1136,	// (0x00017982) list_cale_time_pane_t4

0xa26c,	// (0x00020ab8) compass_pane_t5

0xa27c,	// (0x00020ac8) compass_pane_t6

0xa28a,	// (0x00020ad6) compass_pane_t7

0x165c,	// (0x00017ea8) navi_pane_cc_t1

0x184b,	// (0x00018097) aid_phob_thumbnail_center_pane

0xa629,	// (0x00020e75) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x00025ad2) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x00025ad2) list_cale_time_pane_t

0x034a,	// (0x00016b96) bg_popup_window_pane_cp02_ParamLimits

0x034a,	// (0x00016b96) bg_popup_window_pane_cp02

0x115e,	// (0x000179aa) heading_pane_cp01_ParamLimits

0x115e,	// (0x000179aa) heading_pane_cp01

0x116a,	// (0x000179b6) loc_req_pane_ParamLimits

0x116a,	// (0x000179b6) loc_req_pane

0x117a,	// (0x000179c6) loc_type_pane_ParamLimits

0x117a,	// (0x000179c6) loc_type_pane

0x118c,	// (0x000179d8) loc_type_pane_t1_ParamLimits

0x118c,	// (0x000179d8) loc_type_pane_t1

0x119e,	// (0x000179ea) loc_type_pane_t2_ParamLimits

0x119e,	// (0x000179ea) loc_type_pane_t2

0x11b0,	// (0x000179fc) loc_type_pane_t3_ParamLimits

0x11b0,	// (0x000179fc) loc_type_pane_t3

0x0002,

0xf28d,	// (0x00025ad9) loc_type_pane_t_ParamLimits

0xf28d,	// (0x00025ad9) loc_type_pane_t

0x11c2,	// (0x00017a0e) list_loc_req_pane

0x11cc,	// (0x00017a18) scroll_pane_cp012

0x9ffa,	// (0x00020846) list_single_loc_request_popup_menu_pane_ParamLimits

0x9ffa,	// (0x00020846) list_single_loc_request_popup_menu_pane

0x11d7,	// (0x00017a23) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x11d7,	// (0x00017a23) list_single_loc_request_popup_menu_pane_g1

0x11e3,	// (0x00017a2f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x11e3,	// (0x00017a2f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x00025ae0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x00025ae0) list_single_loc_request_popup_menu_pane_g

0x11ef,	// (0x00017a3b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x11ef,	// (0x00017a3b) list_single_loc_request_popup_menu_pane_t1

0xa00c,	// (0x00020858) bg_popup_window_pane_cp03_ParamLimits

0xa00c,	// (0x00020858) bg_popup_window_pane_cp03

0xa01a,	// (0x00020866) heading_loc_req_pane_ParamLimits

0xa01a,	// (0x00020866) heading_loc_req_pane

0xa026,	// (0x00020872) popup_dyc_status_message_window_g1_ParamLimits

0xa026,	// (0x00020872) popup_dyc_status_message_window_g1

0xa032,	// (0x0002087e) popup_dyc_status_message_window_t1_ParamLimits

0xa032,	// (0x0002087e) popup_dyc_status_message_window_t1

0xa044,	// (0x00020890) popup_dyc_status_message_window_t2_ParamLimits

0xa044,	// (0x00020890) popup_dyc_status_message_window_t2

0xa056,	// (0x000208a2) popup_dyc_status_message_window_t3_ParamLimits

0xa056,	// (0x000208a2) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x00025ae5) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x00025ae5) popup_dyc_status_message_window_t

0x06f3,	// (0x00016f3f) bg_heading_pane_cp01

0x1211,	// (0x00017a5d) heading_loc_req_pane_g1

0x1219,	// (0x00017a65) heading_loc_req_pane_g2

0x1221,	// (0x00017a6d) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x00025aec) heading_loc_req_pane_g

0x1229,	// (0x00017a75) heading_loc_req_pane_t1

0x1248,	// (0x00017a94) bg_popup_sub_pane_cp01_ParamLimits

0x1248,	// (0x00017a94) bg_popup_sub_pane_cp01

0x1256,	// (0x00017aa2) popup_cale_events_window_g1_ParamLimits

0x1256,	// (0x00017aa2) popup_cale_events_window_g1

0x1276,	// (0x00017ac2) popup_cale_events_window_g2_ParamLimits

0x1276,	// (0x00017ac2) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x00025b0e) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x00025b0e) popup_cale_events_window_g

0x1296,	// (0x00017ae2) popup_cale_events_window_t1_ParamLimits

0x1296,	// (0x00017ae2) popup_cale_events_window_t1

0x12a8,	// (0x00017af4) popup_cale_events_window_t2_ParamLimits

0x12a8,	// (0x00017af4) popup_cale_events_window_t2

0x12e6,	// (0x00017b32) popup_cale_events_window_t3_ParamLimits

0x12e6,	// (0x00017b32) popup_cale_events_window_t3

0x1320,	// (0x00017b6c) popup_cale_events_window_t4_ParamLimits

0x1320,	// (0x00017b6c) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x00025b13) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x00025b13) popup_cale_events_window_t

0xa080,	// (0x000208cc) call_type_pane

0x22ab,	// (0x00018af7) popup_call_status_window_g1

0xa08c,	// (0x000208d8) popup_call_status_window_g2

0xa098,	// (0x000208e4) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x00025b1c) popup_call_status_window_g

0x1356,	// (0x00017ba2) call_type_pane_g1

0x135f,	// (0x00017bab) call_type_pane_g2

0x0001,

0xf2d7,	// (0x00025b23) call_type_pane_g

0x06f3,	// (0x00016f3f) bg_popup_sub_pane_cp02

0x1368,	// (0x00017bb4) listscroll_popup_wml_pane

0x1370,	// (0x00017bbc) list_wml_pane

0x137a,	// (0x00017bc6) scroll_pane_cp013

0x1385,	// (0x00017bd1) list_single_graphic_popup_wml_pane_ParamLimits

0x1385,	// (0x00017bd1) list_single_graphic_popup_wml_pane

0x0966,	// (0x000171b2) list_single_graphic_popup_wml_pane_g1

0x1399,	// (0x00017be5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x00025b28) list_single_graphic_popup_wml_pane_g

0x13a1,	// (0x00017bed) list_single_graphic_popup_wml_pane_t1

0x13af,	// (0x00017bfb) aid_call_pane

0x0946,	// (0x00017192) popup_clock_analogue_window_g1

0x0946,	// (0x00017192) popup_clock_analogue_window_g2

0x73f2,	// (0x0001dc3e) popup_clock_analogue_window_g3

0x73f2,	// (0x0001dc3e) popup_clock_analogue_window_g4

0x0966,	// (0x000171b2) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x00025b2d) popup_clock_analogue_window_g

0x73fa,	// (0x0001dc46) popup_clock_analogue_window_t1

0x7408,	// (0x0001dc54) clock_digital_number_pane_ParamLimits

0x7408,	// (0x0001dc54) clock_digital_number_pane

0x7414,	// (0x0001dc60) clock_digital_number_pane_cp02_ParamLimits

0x7414,	// (0x0001dc60) clock_digital_number_pane_cp02

0x7420,	// (0x0001dc6c) clock_digital_number_pane_cp03_ParamLimits

0x7420,	// (0x0001dc6c) clock_digital_number_pane_cp03

0x742c,	// (0x0001dc78) clock_digital_number_pane_cp04_ParamLimits

0x742c,	// (0x0001dc78) clock_digital_number_pane_cp04

0x743c,	// (0x0001dc88) clock_digital_separator_pane_ParamLimits

0x743c,	// (0x0001dc88) clock_digital_separator_pane

0x7448,	// (0x0001dc94) popup_clock_digital_window_t1

0x0966,	// (0x000171b2) clock_digital_number_pane_g1

0x0966,	// (0x000171b2) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x00025aad) clock_digital_number_pane_g

0x0966,	// (0x000171b2) clock_digital_separator_pane_g1

0x0966,	// (0x000171b2) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x00025aad) clock_digital_separator_pane_g

0x06f3,	// (0x00016f3f) bg_popup_window_pane_cp04

0x1432,	// (0x00017c7e) heading_pane_cp03

0x0ca2,	// (0x000174ee) listscroll_popup_gms_pane

0x06f3,	// (0x00016f3f) grid_large_graphic_popup_pane

0x143b,	// (0x00017c87) listscroll_popup_gms_pane_g1

0x1444,	// (0x00017c90) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x00025b38) listscroll_popup_gms_pane_g

0x144d,	// (0x00017c99) scroll_pane_cp014

0x09bb,	// (0x00017207) cell_large_graphic_popup_pane_ParamLimits

0x09bb,	// (0x00017207) cell_large_graphic_popup_pane

0x09c9,	// (0x00017215) cell_large_graphic_popup_pane_g1_ParamLimits

0x09c9,	// (0x00017215) cell_large_graphic_popup_pane_g1

0x1456,	// (0x00017ca2) cell_large_graphic_popup_pane_g2_ParamLimits

0x1456,	// (0x00017ca2) cell_large_graphic_popup_pane_g2

0x1464,	// (0x00017cb0) cell_large_graphic_popup_pane_g3_ParamLimits

0x1464,	// (0x00017cb0) cell_large_graphic_popup_pane_g3

0x1472,	// (0x00017cbe) cell_large_graphic_popup_pane_g4_ParamLimits

0x1472,	// (0x00017cbe) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x00025b3d) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x00025b3d) cell_large_graphic_popup_pane_g

0x06f3,	// (0x00016f3f) grid_highlight_pane_cp010

0x0966,	// (0x000171b2) bg_popup_call_pane_g1

0x1483,	// (0x00017ccf) list_single_graphic_popup_conf_pane_ParamLimits

0x1483,	// (0x00017ccf) list_single_graphic_popup_conf_pane

0x1496,	// (0x00017ce2) list_highlight_pane_cp01

0x149f,	// (0x00017ceb) list_single_graphic_popup_conf_pane_g1

0x14a7,	// (0x00017cf3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x00025b46) list_single_graphic_popup_conf_pane_g

0x14af,	// (0x00017cfb) list_single_graphic_popup_conf_pane_t1

0x14bd,	// (0x00017d09) linegrid_cams_pane_g1

0xa0a4,	// (0x000208f0) linegrid_cams_pane_g2

0x0be1,	// (0x0001742d) linegrid_cams_pane_g3

0x14c6,	// (0x00017d12) linegrid_cams_pane_g4

0xa0ad,	// (0x000208f9) linegrid_cams_pane_g5

0xa0b6,	// (0x00020902) linegrid_cams_pane_g6

0x0c91,	// (0x000174dd) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x00025b4b) linegrid_cams_pane_g

0x14cf,	// (0x00017d1b) popup_clock_analogue_window

0x14cf,	// (0x00017d1b) popup_clock_digital_window

0x06f3,	// (0x00016f3f) popup_phob_thumbnail_window

0x0966,	// (0x000171b2) call_video_uplink_pane_g1

0x14d8,	// (0x00017d24) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x00025b5a) call_video_uplink_pane_g

0x14e0,	// (0x00017d2c) video_uplink_pane

0x14e8,	// (0x00017d34) mce_image_pane_g1

0xa0bf,	// (0x0002090b) mce_image_pane_g2

0xa0c9,	// (0x00020915) mce_image_pane_g3

0xa0d1,	// (0x0002091d) mce_image_pane_g4

0xa0d9,	// (0x00020925) mce_image_pane_g5

0x0004,

0xf313,	// (0x00025b5f) mce_image_pane_g

0x14f2,	// (0x00017d3e) control_top_pane_stacon_cp01_ParamLimits

0x14f2,	// (0x00017d3e) control_top_pane_stacon_cp01

0x1506,	// (0x00017d52) uni_indicator_pane_stacon_cp01_ParamLimits

0x1506,	// (0x00017d52) uni_indicator_pane_stacon_cp01

0x1517,	// (0x00017d63) bg_popup_sub_pane_cp03

0x1521,	// (0x00017d6d) chi_dic_find_pane

0xa0e1,	// (0x0002092d) listscroll_chi_dic_pane

0x1529,	// (0x00017d75) main_pane_chidic_g1

0x1531,	// (0x00017d7d) chi_dic_find_pane_t1

0x153f,	// (0x00017d8b) find_chidic_pane

0x1548,	// (0x00017d94) chi_dic_list_pane_ParamLimits

0x1548,	// (0x00017d94) chi_dic_list_pane

0x1559,	// (0x00017da5) scroll_pane_cp020

0x1561,	// (0x00017dad) find_chidic_pane_t1

0x06f3,	// (0x00016f3f) input_focus_pane_cp06

0xa0f5,	// (0x00020941) list_chi_dic_pane_ParamLimits

0xa0f5,	// (0x00020941) list_chi_dic_pane

0xa10f,	// (0x0002095b) list_chi_dic_pane_t1_ParamLimits

0xa10f,	// (0x0002095b) list_chi_dic_pane_t1

0x06f3,	// (0x00016f3f) list_highlight_pane_cp020

0x1570,	// (0x00017dbc) bg_cale_heading_pane_g1

0xa122,	// (0x0002096e) bg_cale_heading_pane_g2

0xa12a,	// (0x00020976) bg_cale_heading_pane_g3

0xa132,	// (0x0002097e) bg_cale_heading_pane_g4

0xa13c,	// (0x00020988) bg_cale_heading_pane_g5

0xa146,	// (0x00020992) bg_cale_heading_pane_g6

0xa14e,	// (0x0002099a) bg_cale_heading_pane_g7

0xa156,	// (0x000209a2) bg_cale_heading_pane_g8

0xa160,	// (0x000209ac) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00025b6a) bg_cale_heading_pane_g

0x1570,	// (0x00017dbc) bg_cale_side_pane_g1

0xa16a,	// (0x000209b6) bg_cale_side_pane_g2

0xa174,	// (0x000209c0) bg_cale_side_pane_g3

0xa17e,	// (0x000209ca) bg_cale_side_pane_g4

0xa188,	// (0x000209d4) bg_cale_side_pane_g5

0xa192,	// (0x000209de) bg_cale_side_pane_g6

0xa19c,	// (0x000209e8) bg_cale_side_pane_g7

0xa1a6,	// (0x000209f2) bg_cale_side_pane_g8

0xa1ae,	// (0x000209fa) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x00025b7d) bg_cale_side_pane_g

0xa1b6,	// (0x00020a02) popup_call_status_window_ParamLimits

0xa1b6,	// (0x00020a02) popup_call_status_window

0x1578,	// (0x00017dc4) stacon_top_pane

0x1580,	// (0x00017dcc) status_pane_ParamLimits

0x1580,	// (0x00017dcc) status_pane

0x1595,	// (0x00017de1) status_small_pane

0x159d,	// (0x00017de9) control_pane

0x06f3,	// (0x00016f3f) stacon_bottom_pane

0x15a5,	// (0x00017df1) list_single_mce_smart_pane_t1_ParamLimits

0x15a5,	// (0x00017df1) list_single_mce_smart_pane_t1

0x15b8,	// (0x00017e04) list_single_mce_smart_pane_t2_ParamLimits

0x15b8,	// (0x00017e04) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x00025b90) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x00025b90) list_single_mce_smart_pane_t

0xa1c2,	// (0x00020a0e) compass_pane

0xa1ce,	// (0x00020a1a) main_location2_pane_t1

0xa1e2,	// (0x00020a2e) main_location2_pane_t2

0xa1f6,	// (0x00020a42) main_location2_pane_t3

0x0003,

0xf349,	// (0x00025b95) main_location2_pane_t

0x15d7,	// (0x00017e23) compass_pane_g1_ParamLimits

0x15d7,	// (0x00017e23) compass_pane_g1

0xa240,	// (0x00020a8c) compass_pane_t1

0xa24f,	// (0x00020a9b) compass_pane_t2

0x0005,

0xf352,	// (0x00025b9e) compass_pane_t

0xa29a,	// (0x00020ae6) text_secondary_cp61

0x1653,	// (0x00017e9f) navi_pane_cams_g5

0x16cf,	// (0x00017f1b) navi_pane_im_t1

0x16dd,	// (0x00017f29) navi_pane_mp_g1_ParamLimits

0x16dd,	// (0x00017f29) navi_pane_mp_g1

0x16f1,	// (0x00017f3d) navi_pane_mp_g2_ParamLimits

0x16f1,	// (0x00017f3d) navi_pane_mp_g2

0x16fd,	// (0x00017f49) navi_pane_mp_g3_ParamLimits

0x16fd,	// (0x00017f49) navi_pane_mp_g3

0x0002,

0xf366,	// (0x00025bb2) navi_pane_mp_g_ParamLimits

0xf366,	// (0x00025bb2) navi_pane_mp_g

0x1709,	// (0x00017f55) navi_pane_mp_t1

0x1717,	// (0x00017f63) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x00025bb9) navi_pane_mp_t

0x1782,	// (0x00017fce) navi_pane_vt_g1

0x1709,	// (0x00017f55) navi_pane_vt_t1

0x178a,	// (0x00017fd6) navi_slider_pane

0x0ca2,	// (0x000174ee) zooming_pane

0x179a,	// (0x00017fe6) navi_slider_pane_g1

0x7465,	// (0x0001dcb1) navi_slider_pane_g2

0x0006,

0xf374,	// (0x00025bc0) navi_slider_pane_g

0x17d0,	// (0x0001801c) aid_levels_zoom

0x17d8,	// (0x00018024) zooming_pane_g1

0x17e0,	// (0x0001802c) zooming_pane_g2

0x17e0,	// (0x0001802c) zooming_pane_g3

0x0002,

0xf383,	// (0x00025bcf) zooming_pane_g

0x17e8,	// (0x00018034) level_10_zoom

0x17f1,	// (0x0001803d) level_11_zoom

0x17fa,	// (0x00018046) level_1_zoom

0x1803,	// (0x0001804f) level_2_zoom

0x180c,	// (0x00018058) level_3_zoom

0x1815,	// (0x00018061) level_4_zoom

0x181e,	// (0x0001806a) level_5_zoom

0x1827,	// (0x00018073) level_6_zoom

0x1830,	// (0x0001807c) level_7_zoom

0x1839,	// (0x00018085) level_8_zoom

0x1842,	// (0x0001808e) level_9_zoom

0x1853,	// (0x0001809f) popup_phob_thumbnail_window_g1

0x185b,	// (0x000180a7) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x00025bd6) popup_phob_thumbnail_window_g

0xabe3,	// (0x0002142f) level_1_location

0xabeb,	// (0x00021437) level_2_location

0xabf3,	// (0x0002143f) level_3_location

0xabfd,	// (0x00021449) level_4_location

0x0ca2,	// (0x000174ee) level_5_location

0xa2d5,	// (0x00020b21) mce_icon_pane_g1

0xa2dd,	// (0x00020b29) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x00025bdb) mce_icon_pane_g

0xa2e5,	// (0x00020b31) main_mup_pane_g1_ParamLimits

0xa2e5,	// (0x00020b31) main_mup_pane_g1

0x09e5,	// (0x00017231) main_mup_pane_g2_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g2

0x09e5,	// (0x00017231) main_mup_pane_g3_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g3

0x09e5,	// (0x00017231) main_mup_pane_g4_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g4

0x09e5,	// (0x00017231) main_mup_pane_g5_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g5

0x09e5,	// (0x00017231) main_mup_pane_g6_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g6

0x09e5,	// (0x00017231) main_mup_pane_g7_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g7

0x09e5,	// (0x00017231) main_mup_pane_g8_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g8

0x09e5,	// (0x00017231) main_mup_pane_g9_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g9

0x09e5,	// (0x00017231) main_mup_pane_g10_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g10

0x09e5,	// (0x00017231) main_mup_pane_g11_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g11

0x09d7,	// (0x00017223) main_mup_pane_g12_ParamLimits

0x09d7,	// (0x00017223) main_mup_pane_g12

0x09e5,	// (0x00017231) main_mup_pane_g13_ParamLimits

0x09e5,	// (0x00017231) main_mup_pane_g13

0x000c,

0xf394,	// (0x00025be0) main_mup_pane_g_ParamLimits

0xf394,	// (0x00025be0) main_mup_pane_g

0x09f3,	// (0x0001723f) main_mup_pane_t1_ParamLimits

0x09f3,	// (0x0001723f) main_mup_pane_t1

0x09f3,	// (0x0001723f) main_mup_pane_t2_ParamLimits

0x09f3,	// (0x0001723f) main_mup_pane_t2

0x09f3,	// (0x0001723f) main_mup_pane_t3_ParamLimits

0x09f3,	// (0x0001723f) main_mup_pane_t3

0x1885,	// (0x000180d1) main_mup_pane_t4_ParamLimits

0x1885,	// (0x000180d1) main_mup_pane_t4

0x1885,	// (0x000180d1) main_mup_pane_t5_ParamLimits

0x1885,	// (0x000180d1) main_mup_pane_t5

0x0cb4,	// (0x00017500) main_mup_pane_t6_ParamLimits

0x0cb4,	// (0x00017500) main_mup_pane_t6

0x0005,

0xf3af,	// (0x00025bfb) main_mup_pane_t_ParamLimits

0xf3af,	// (0x00025bfb) main_mup_pane_t

0x02d2,	// (0x00016b1e) mup_progress_pane_ParamLimits

0x02d2,	// (0x00016b1e) mup_progress_pane

0x2d37,	// (0x00019583) mup_visualizer_pane_ParamLimits

0x2d37,	// (0x00019583) mup_visualizer_pane

0x2d37,	// (0x00019583) mup_volume_pane_ParamLimits

0x2d37,	// (0x00019583) mup_volume_pane

0x09d7,	// (0x00017223) mup_visualizer_pane_g1_ParamLimits

0x09d7,	// (0x00017223) mup_visualizer_pane_g1

0x18a7,	// (0x000180f3) mup_visualizer_pane_g2_ParamLimits

0x18a7,	// (0x000180f3) mup_visualizer_pane_g2

0x09c9,	// (0x00017215) mup_visualizer_pane_g3_ParamLimits

0x09c9,	// (0x00017215) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x00025c08) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x00025c08) mup_visualizer_pane_g

0x0ce2,	// (0x0001752e) mup_volume_pane_g1

0x0ce2,	// (0x0001752e) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x00025c0f) mup_volume_pane_g

0x0ce2,	// (0x0001752e) mup_progress_pane_g1

0x0ce2,	// (0x0001752e) mup_progress_pane_g2

0x0ce2,	// (0x0001752e) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x00025c14) mup_progress_pane_g

0x06f3,	// (0x00016f3f) bg_popup_window_pane_cp05

0x18b5,	// (0x00018101) heading_pane_cp02_ParamLimits

0x18b5,	// (0x00018101) heading_pane_cp02

0x18cf,	// (0x0001811b) list_popup_blid_pane

0x18d7,	// (0x00018123) list_blid_sat_info_pane_ParamLimits

0x18d7,	// (0x00018123) list_blid_sat_info_pane

0x18ea,	// (0x00018136) list_blid_sat_info_pane_g1

0x18f2,	// (0x0001813e) list_blid_sat_info_pane_t1

0xa3e2,	// (0x00020c2e) mup_equalizer_pane_ParamLimits

0xa3e2,	// (0x00020c2e) mup_equalizer_pane

0xa403,	// (0x00020c4f) mup_equalizer_pane_cp1_ParamLimits

0xa403,	// (0x00020c4f) mup_equalizer_pane_cp1

0xa424,	// (0x00020c70) mup_equalizer_pane_cp2_ParamLimits

0xa424,	// (0x00020c70) mup_equalizer_pane_cp2

0xa445,	// (0x00020c91) mup_equalizer_pane_cp3_ParamLimits

0xa445,	// (0x00020c91) mup_equalizer_pane_cp3

0xa466,	// (0x00020cb2) mup_equalizer_pane_cp4_ParamLimits

0xa466,	// (0x00020cb2) mup_equalizer_pane_cp4

0xa487,	// (0x00020cd3) mup_equalizer_pane_cp5

0xa49d,	// (0x00020ce9) mup_equalizer_pane_cp6

0xa4b5,	// (0x00020d01) mup_equalizer_pane_cp7

0x2b06,	// (0x00019352) bg_popup_call_poc_act_pane_g9

0x2b0e,	// (0x0001935a) bg_popup_call_poc_act_pane_g10

0x2b16,	// (0x00019362) bg_popup_call_poc_act_pane_g11

0x000a,

0x094e,	// (0x0001719a) mup_scale_pane

0x0966,	// (0x000171b2) mup_scale_pane_g1

0x1900,	// (0x0001814c) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x00025c30) mup_scale_pane_g

0x1924,	// (0x00018170) msg_data_pane

0x192c,	// (0x00018178) scroll_pane_cp017

0xa4df,	// (0x00020d2b) bg_list_pane_cp04_ParamLimits

0xa4df,	// (0x00020d2b) bg_list_pane_cp04

0x193c,	// (0x00018188) msg_data_pane_g1

0xa4fb,	// (0x00020d47) msg_data_pane_g2

0xa505,	// (0x00020d51) msg_data_pane_g3

0xa50d,	// (0x00020d59) msg_data_pane_g4

0xa515,	// (0x00020d61) msg_data_pane_g5

0xa51d,	// (0x00020d69) msg_data_pane_g6

0xa525,	// (0x00020d71) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x00025c3f) msg_data_pane_g

0xa52d,	// (0x00020d79) msg_text_pane_ParamLimits

0xa52d,	// (0x00020d79) msg_text_pane

0xa573,	// (0x00020dbf) qrid_highlight_pane_cp011_ParamLimits

0xa573,	// (0x00020dbf) qrid_highlight_pane_cp011

0x06f3,	// (0x00016f3f) msg_body_pane

0x06f3,	// (0x00016f3f) msg_header_pane

0x194d,	// (0x00018199) input_focus_pane_cp07

0x1962,	// (0x000181ae) msg_header_pane_t1_ParamLimits

0x1962,	// (0x000181ae) msg_header_pane_t1

0x1978,	// (0x000181c4) msg_header_pane_t2_ParamLimits

0x1978,	// (0x000181c4) msg_header_pane_t2

0x0001,

0xf407,	// (0x00025c53) msg_header_pane_t_ParamLimits

0xf407,	// (0x00025c53) msg_header_pane_t

0x198f,	// (0x000181db) msg_body_pane_g1

0x1997,	// (0x000181e3) msg_body_pane_t1_ParamLimits

0x1997,	// (0x000181e3) msg_body_pane_t1

0x19c8,	// (0x00018214) msg_body_pane_t2_ParamLimits

0x19c8,	// (0x00018214) msg_body_pane_t2

0x19da,	// (0x00018226) msg_body_pane_t3_ParamLimits

0x19da,	// (0x00018226) msg_body_pane_t3

0x0002,

0xf40c,	// (0x00025c58) msg_body_pane_t_ParamLimits

0xf40c,	// (0x00025c58) msg_body_pane_t

0x74a7,	// (0x0001dcf3) main_viewer_pane_g1_ParamLimits

0x74a7,	// (0x0001dcf3) main_viewer_pane_g1

0x74b3,	// (0x0001dcff) main_viewer_pane_g2_ParamLimits

0x74b3,	// (0x0001dcff) main_viewer_pane_g2

0xa5bb,	// (0x00020e07) main_viewer_pane_g3_ParamLimits

0xa5bb,	// (0x00020e07) main_viewer_pane_g3

0xa5cc,	// (0x00020e18) main_viewer_pane_g4_ParamLimits

0xa5cc,	// (0x00020e18) main_viewer_pane_g4

0x74bf,	// (0x0001dd0b) main_viewer_pane_g5_ParamLimits

0x74bf,	// (0x0001dd0b) main_viewer_pane_g5

0x74bf,	// (0x0001dd0b) main_viewer_pane_g7_ParamLimits

0x74bf,	// (0x0001dd0b) main_viewer_pane_g7

0x11d7,	// (0x00017a23) main_viewer_pane_g8_ParamLimits

0x11d7,	// (0x00017a23) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x00025c68) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x00025c68) main_viewer_pane_g

0x1a2e,	// (0x0001827a) viewer_content_pane_ParamLimits

0x1a2e,	// (0x0001827a) viewer_content_pane

0xa5fd,	// (0x00020e49) main_postcard_pane_g1_ParamLimits

0xa5fd,	// (0x00020e49) main_postcard_pane_g1

0xa60b,	// (0x00020e57) main_postcard_pane_g2_ParamLimits

0xa60b,	// (0x00020e57) main_postcard_pane_g2

0xa619,	// (0x00020e65) main_postcard_pane_g3_ParamLimits

0xa619,	// (0x00020e65) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x00025c79) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x00025c79) main_postcard_pane_g

0xa629,	// (0x00020e75) main_postcard_pane_g4

0x2c8b,	// (0x000194d7) smil_status_volume_pane_g2

0xa655,	// (0x00020ea1) postcard_pane_ParamLimits

0xa655,	// (0x00020ea1) postcard_pane

0x22ab,	// (0x00018af7) postcard_pane_g1_ParamLimits

0x22ab,	// (0x00018af7) postcard_pane_g1

0xa687,	// (0x00020ed3) postcard_pane_g2_ParamLimits

0xa687,	// (0x00020ed3) postcard_pane_g2

0xa693,	// (0x00020edf) postcard_pane_g3_ParamLimits

0xa693,	// (0x00020edf) postcard_pane_g3

0x1a4a,	// (0x00018296) postcard_pane_g4_ParamLimits

0x1a4a,	// (0x00018296) postcard_pane_g4

0xa69f,	// (0x00020eeb) postcard_pane_g5_ParamLimits

0xa69f,	// (0x00020eeb) postcard_pane_g5

0xa6ab,	// (0x00020ef7) postcard_pane_g6_ParamLimits

0xa6ab,	// (0x00020ef7) postcard_pane_g6

0x1a3c,	// (0x00018288) postcard_pane_g7_ParamLimits

0x1a3c,	// (0x00018288) postcard_pane_g7

0x0006,

0xf43a,	// (0x00025c86) postcard_pane_g_ParamLimits

0xf43a,	// (0x00025c86) postcard_pane_g

0xa6b7,	// (0x00020f03) main_mp2_pane_g1_ParamLimits

0xa6b7,	// (0x00020f03) main_mp2_pane_g1

0xa6c3,	// (0x00020f0f) main_mp2_pane_g2_ParamLimits

0xa6c3,	// (0x00020f0f) main_mp2_pane_g2

0xa6cf,	// (0x00020f1b) main_mp2_pane_g3_ParamLimits

0xa6cf,	// (0x00020f1b) main_mp2_pane_g3

0x0002,

0xf449,	// (0x00025c95) main_mp2_pane_g_ParamLimits

0xf449,	// (0x00025c95) main_mp2_pane_g

0xa6db,	// (0x00020f27) main_mp2_pane_t1_ParamLimits

0xa6db,	// (0x00020f27) main_mp2_pane_t1

0xa6f2,	// (0x00020f3e) main_mp2_pane_t2_ParamLimits

0xa6f2,	// (0x00020f3e) main_mp2_pane_t2

0xa706,	// (0x00020f52) main_mp2_pane_t3_ParamLimits

0xa706,	// (0x00020f52) main_mp2_pane_t3

0x0002,

0xf450,	// (0x00025c9c) main_mp2_pane_t_ParamLimits

0xf450,	// (0x00025c9c) main_mp2_pane_t

0x1a58,	// (0x000182a4) pec_content_pane_ParamLimits

0x1a58,	// (0x000182a4) pec_content_pane

0x0e43,	// (0x0001768f) scroll_pane_cp015

0x1a6a,	// (0x000182b6) pec_attribute_pane_ParamLimits

0x1a6a,	// (0x000182b6) pec_attribute_pane

0xa718,	// (0x00020f64) pec_content_pane_g1_ParamLimits

0xa718,	// (0x00020f64) pec_content_pane_g1

0x1a7a,	// (0x000182c6) pec_content_pane_t1_ParamLimits

0x1a7a,	// (0x000182c6) pec_content_pane_t1

0x1a8c,	// (0x000182d8) pec_content_pane_t2_ParamLimits

0x1a8c,	// (0x000182d8) pec_content_pane_t2

0x0001,

0xf457,	// (0x00025ca3) pec_content_pane_t_ParamLimits

0xf457,	// (0x00025ca3) pec_content_pane_t

0xa724,	// (0x00020f70) list_single_graphic_pane_cp01_ParamLimits

0xa724,	// (0x00020f70) list_single_graphic_pane_cp01

0x094e,	// (0x0001719a) bg_popup_sub_pane_cp04

0x1a9e,	// (0x000182ea) popup_mup_playback_window_g1

0x1aaa,	// (0x000182f6) popup_mup_playback_window_t1

0x1abf,	// (0x0001830b) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x00025ca8) popup_mup_playback_window_t

0x1af6,	// (0x00018342) main_image_pane_g1_ParamLimits

0x1af6,	// (0x00018342) main_image_pane_g1

0x1b39,	// (0x00018385) scroll_pane_cp018_ParamLimits

0x1b39,	// (0x00018385) scroll_pane_cp018

0x1b51,	// (0x0001839d) scroll_pane_cp016_ParamLimits

0x1b51,	// (0x0001839d) scroll_pane_cp016

0xa7bd,	// (0x00021009) smil2_image_pane_ParamLimits

0xa7bd,	// (0x00021009) smil2_image_pane

0xa7ed,	// (0x00021039) smil2_root_pane_ParamLimits

0xa7ed,	// (0x00021039) smil2_root_pane

0xa819,	// (0x00021065) smil2_text_pane_ParamLimits

0xa819,	// (0x00021065) smil2_text_pane

0x06f3,	// (0x00016f3f) bg_list_pane_cp06

0x1b8d,	// (0x000183d9) grid_radio_pane

0x06f3,	// (0x00016f3f) bg_popup_window_pane_cp06

0x1b95,	// (0x000183e1) main_fmradio_pane_t1

0x2b1e,	// (0x0001936a) heading_pane_cp04

0x1ba3,	// (0x000183ef) main_fmradio_pane_t2

0x2b26,	// (0x00019372) popup_cale_lunar_info_window_g1

0x1bb1,	// (0x000183fd) main_fmradio_pane_t3

0x2b2e,	// (0x0001937a) popup_cale_lunar_info_window_g2

0x1bbf,	// (0x0001840b) main_fmradio_pane_t4

0x0001,

0x1bcd,	// (0x00018419) main_fmradio_pane_t5

0x0004,

0xf53c,	// (0x00025d88) popup_cale_lunar_info_window_g

0xf471,	// (0x00025cbd) main_fmradio_pane_t

0x1bdb,	// (0x00018427) wait_bar_pane_cp03

0x1be3,	// (0x0001842f) cell_fmradio_pane_ParamLimits

0x1be3,	// (0x0001842f) cell_fmradio_pane

0x1a3c,	// (0x00018288) cell_fmradio_pane_g1_ParamLimits

0x1a3c,	// (0x00018288) cell_fmradio_pane_g1

0x06f3,	// (0x00016f3f) grid_highlight_pane_cp011

0x1bf6,	// (0x00018442) poc_content_pane_ParamLimits

0x1bf6,	// (0x00018442) poc_content_pane

0x1c08,	// (0x00018454) scroll_pane_cp019

0xa859,	// (0x000210a5) popup_call_poc_act_window_ParamLimits

0xa859,	// (0x000210a5) popup_call_poc_act_window

0xa866,	// (0x000210b2) popup_call_poc_inact_window_ParamLimits

0xa866,	// (0x000210b2) popup_call_poc_inact_window

0xf513,	// (0x00025d5f) bg_popup_call_poc_act_pane_g

0x2a96,	// (0x000192e2) bg_popup_call_poc_inact_pane_g1

0x2a9e,	// (0x000192ea) bg_popup_call_poc_inact_pane_g2

0x1c10,	// (0x0001845c) popup_call_poc_act_window_g2

0x2aa6,	// (0x000192f2) bg_popup_call_poc_inact_pane_g3

0x2aae,	// (0x000192fa) bg_popup_call_poc_inact_pane_g4

0x2ab6,	// (0x00019302) bg_popup_call_poc_inact_pane_g5

0x1c18,	// (0x00018464) popup_call_poc_act_window_t1_ParamLimits

0x1c18,	// (0x00018464) popup_call_poc_act_window_t1

0x1c40,	// (0x0001848c) popup_call_poc_act_window_t2_ParamLimits

0x1c40,	// (0x0001848c) popup_call_poc_act_window_t2

0x1c68,	// (0x000184b4) popup_call_poc_act_window_t3_ParamLimits

0x1c68,	// (0x000184b4) popup_call_poc_act_window_t3

0x1c90,	// (0x000184dc) popup_call_poc_act_window_t4_ParamLimits

0x1c90,	// (0x000184dc) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x00025cc8) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x00025cc8) popup_call_poc_act_window_t

0x2abe,	// (0x0001930a) bg_popup_call_poc_inact_pane_g6

0x2ac6,	// (0x00019312) bg_popup_call_poc_inact_pane_g7

0x2ace,	// (0x0001931a) bg_popup_call_poc_inact_pane_g8

0x1ca2,	// (0x000184ee) popup_call_poc_inact_window_g2

0x2ad6,	// (0x00019322) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf500,	// (0x00025d4c) bg_popup_call_poc_inact_pane_g

0x1caa,	// (0x000184f6) popup_call_poc_inact_window_t1_ParamLimits

0x1caa,	// (0x000184f6) popup_call_poc_inact_window_t1

0x1cbf,	// (0x0001850b) popup_call_poc_inact_window_t2_ParamLimits

0x1cbf,	// (0x0001850b) popup_call_poc_inact_window_t2

0x1cd4,	// (0x00018520) popup_call_poc_inact_window_t3_ParamLimits

0x1cd4,	// (0x00018520) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x00025cd1) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x00025cd1) popup_call_poc_inact_window_t

0x2c16,	// (0x00019462) context_pane_ParamLimits

0xad63,	// (0x000215af) signal_pane_ParamLimits

0x0ca2,	// (0x000174ee) main_call2_pane

0x761a,	// (0x0001de66) popup_phob_thumbnail2_window_ParamLimits

0x761a,	// (0x0001de66) popup_phob_thumbnail2_window

0x7477,	// (0x0001dcc3) aid_hotspot_pointer_arrow_pane

0x747f,	// (0x0001dccb) aid_hotspot_pointer_hand_pane

0xabab,	// (0x000213f7) phob_pre_status_pane_g5

0x09bb,	// (0x00017207) cams_zoom_pane_ParamLimits

0x09bb,	// (0x00017207) image_vga_pane_ParamLimits

0x09d7,	// (0x00017223) main_camera_pane_g1_ParamLimits

0x09d7,	// (0x00017223) main_camera_pane_g2_ParamLimits

0x09d7,	// (0x00017223) main_camera_pane_g3_ParamLimits

0x09d7,	// (0x00017223) main_camera_pane_g4_ParamLimits

0x09d7,	// (0x00017223) main_camera_pane_g5_ParamLimits

0x09d7,	// (0x00017223) main_camera_pane_g6_ParamLimits

0x09d7,	// (0x00017223) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x000259f7) main_camera_pane_g_ParamLimits

0x1885,	// (0x000180d1) main_camera_pane_t1_ParamLimits

0x1885,	// (0x000180d1) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00025a08) main_camera_pane_t_ParamLimits

0x094e,	// (0x0001719a) bg_popup_preview_window_pane_cp01_ParamLimits

0x094e,	// (0x0001719a) bg_popup_preview_window_pane_cp01

0x1ce9,	// (0x00018535) popup_phob_thumbnail2_window_g1_ParamLimits

0x1ce9,	// (0x00018535) popup_phob_thumbnail2_window_g1

0x06f3,	// (0x00016f3f) call2_cli_visual_pane

0xa882,	// (0x000210ce) popup_call2_audio_conf_window_ParamLimits

0xa882,	// (0x000210ce) popup_call2_audio_conf_window

0xa897,	// (0x000210e3) popup_call2_audio_first_window_ParamLimits

0xa897,	// (0x000210e3) popup_call2_audio_first_window

0xa935,	// (0x00021181) popup_call2_audio_in_window_ParamLimits

0xa935,	// (0x00021181) popup_call2_audio_in_window

0xa977,	// (0x000211c3) popup_call2_audio_out_window_ParamLimits

0xa977,	// (0x000211c3) popup_call2_audio_out_window

0xa9d9,	// (0x00021225) popup_call2_audio_second_window_ParamLimits

0xa9d9,	// (0x00021225) popup_call2_audio_second_window

0xaa37,	// (0x00021283) popup_call2_audio_wait_window_ParamLimits

0xaa37,	// (0x00021283) popup_call2_audio_wait_window

0x06f3,	// (0x00016f3f) bg_popup_call2_act_pane_cp03

0x0930,	// (0x0001717c) list_conf_pane_cp

0x1cf5,	// (0x00018541) popup_call2_audio_conf_window_t1

0x1483,	// (0x00017ccf) list_single_graphic_popup_conf2_pane_ParamLimits

0x1483,	// (0x00017ccf) list_single_graphic_popup_conf2_pane

0x1496,	// (0x00017ce2) list_highlight_pane_cp04

0x1d03,	// (0x0001854f) list_single_graphic_popup_conf2_pane_g1

0x14a7,	// (0x00017cf3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x00025cd8) list_single_graphic_popup_conf2_pane_g

0x1d0d,	// (0x00018559) list_single_graphic_popup_conf2_pane_t1

0x1d1b,	// (0x00018567) bg_popup_call2_act_pane_cp01_ParamLimits

0x1d1b,	// (0x00018567) bg_popup_call2_act_pane_cp01

0x1da5,	// (0x000185f1) call_type_pane_cp05_ParamLimits

0x1da5,	// (0x000185f1) call_type_pane_cp05

0x1df9,	// (0x00018645) popup_call2_audio_second_window_g1_ParamLimits

0x1df9,	// (0x00018645) popup_call2_audio_second_window_g1

0x1e4d,	// (0x00018699) popup_call2_audio_second_window_g2_ParamLimits

0x1e4d,	// (0x00018699) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x00025cdd) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x00025cdd) popup_call2_audio_second_window_g

0x1eb2,	// (0x000186fe) popup_call2_audio_second_window_t1_ParamLimits

0x1eb2,	// (0x000186fe) popup_call2_audio_second_window_t1

0x1f6d,	// (0x000187b9) popup_call2_audio_second_window_t2_ParamLimits

0x1f6d,	// (0x000187b9) popup_call2_audio_second_window_t2

0x1fc0,	// (0x0001880c) popup_call2_audio_second_window_t3_ParamLimits

0x1fc0,	// (0x0001880c) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x00025ce4) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x00025ce4) popup_call2_audio_second_window_t

0x06f3,	// (0x00016f3f) bg_popup_call2_in_pane_cp02

0x06fd,	// (0x00016f49) call_type_pane_cp04

0xaa76,	// (0x000212c2) popup_call2_audio_wait_window_g1

0xaa7e,	// (0x000212ca) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x00025ced) popup_call2_audio_wait_window_g

0x0715,	// (0x00016f61) popup_call2_audio_wait_window_t3

0x20b3,	// (0x000188ff) bg_popup_call2_act_pane_ParamLimits

0x20b3,	// (0x000188ff) bg_popup_call2_act_pane

0x2173,	// (0x000189bf) call_type_pane_cp03_ParamLimits

0x2173,	// (0x000189bf) call_type_pane_cp03

0x21d7,	// (0x00018a23) popup_call2_audio_first_window_g1_ParamLimits

0x21d7,	// (0x00018a23) popup_call2_audio_first_window_g1

0x2247,	// (0x00018a93) popup_call2_audio_first_window_g2_ParamLimits

0x2247,	// (0x00018a93) popup_call2_audio_first_window_g2

0x22ab,	// (0x00018af7) popup_call2_audio_first_window_g3_ParamLimits

0x22ab,	// (0x00018af7) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x00025cf2) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x00025cf2) popup_call2_audio_first_window_g

0x2333,	// (0x00018b7f) popup_call2_audio_first_window_t1_ParamLimits

0x2333,	// (0x00018b7f) popup_call2_audio_first_window_t1

0x2436,	// (0x00018c82) popup_call2_audio_first_window_t4_ParamLimits

0x2436,	// (0x00018c82) popup_call2_audio_first_window_t4

0x2519,	// (0x00018d65) popup_call2_audio_first_window_t5_ParamLimits

0x2519,	// (0x00018d65) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x00025cfd) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x00025cfd) popup_call2_audio_first_window_t

0x0946,	// (0x00017192) bg_popup_call2_act_pane_g1

0x2b36,	// (0x00019382) popup_cale_lunar_info_window_t1

0x2b44,	// (0x00019390) popup_cale_lunar_info_window_t2

0x2b52,	// (0x0001939e) popup_cale_lunar_info_window_t3

0x06f3,	// (0x00016f3f) bg_popup_call2_bubble_pane

0x261a,	// (0x00018e66) bg_popup_call2_in_pane_cp01_ParamLimits

0x261a,	// (0x00018e66) bg_popup_call2_in_pane_cp01

0x03cf,	// (0x00016c1b) call_type_pane_cp02

0xaa86,	// (0x000212d2) popup_call2_audio_out_window_g1_ParamLimits

0xaa86,	// (0x000212d2) popup_call2_audio_out_window_g1

0x2662,	// (0x00018eae) popup_call2_audio_out_window_g2_ParamLimits

0x2662,	// (0x00018eae) popup_call2_audio_out_window_g2

0xaab2,	// (0x000212fe) popup_call2_audio_out_window_g3_ParamLimits

0xaab2,	// (0x000212fe) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x00025d06) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x00025d06) popup_call2_audio_out_window_g

0x2699,	// (0x00018ee5) popup_call2_audio_out_window_t1_ParamLimits

0x2699,	// (0x00018ee5) popup_call2_audio_out_window_t1

0x26f8,	// (0x00018f44) popup_call2_audio_out_window_t2_ParamLimits

0x26f8,	// (0x00018f44) popup_call2_audio_out_window_t2

0x274c,	// (0x00018f98) popup_call2_audio_out_window_t3_ParamLimits

0x274c,	// (0x00018f98) popup_call2_audio_out_window_t3

0x2762,	// (0x00018fae) popup_call2_audio_out_window_t4_ParamLimits

0x2762,	// (0x00018fae) popup_call2_audio_out_window_t4

0x2778,	// (0x00018fc4) popup_call2_audio_out_window_t5_ParamLimits

0x2778,	// (0x00018fc4) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x00025d0f) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x00025d0f) popup_call2_audio_out_window_t

0x27dc,	// (0x00019028) bg_popup_call2_in_pane_ParamLimits

0x27dc,	// (0x00019028) bg_popup_call2_in_pane

0x2838,	// (0x00019084) popup_call2_audio_in_window_g1_ParamLimits

0x2838,	// (0x00019084) popup_call2_audio_in_window_g1

0x2870,	// (0x000190bc) popup_call2_audio_in_window_g2_ParamLimits

0x2870,	// (0x000190bc) popup_call2_audio_in_window_g2

0x28a8,	// (0x000190f4) popup_call2_audio_in_window_g3_ParamLimits

0x28a8,	// (0x000190f4) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x00025d1c) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x00025d1c) popup_call2_audio_in_window_g

0x2900,	// (0x0001914c) popup_call2_audio_in_window_t1_ParamLimits

0x2900,	// (0x0001914c) popup_call2_audio_in_window_t1

0x2980,	// (0x000191cc) popup_call2_audio_in_window_t2_ParamLimits

0x2980,	// (0x000191cc) popup_call2_audio_in_window_t2

0x2a00,	// (0x0001924c) popup_call2_audio_in_window_t3_ParamLimits

0x2a00,	// (0x0001924c) popup_call2_audio_in_window_t3

0x2a1a,	// (0x00019266) popup_call2_audio_in_window_t4_ParamLimits

0x2a1a,	// (0x00019266) popup_call2_audio_in_window_t4

0x2a2c,	// (0x00019278) popup_call2_audio_in_window_t5_ParamLimits

0x2a2c,	// (0x00019278) popup_call2_audio_in_window_t5

0x2a41,	// (0x0001928d) popup_call2_audio_in_window_t6_ParamLimits

0x2a41,	// (0x0001928d) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x00025d25) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x00025d25) popup_call2_audio_in_window_t

0x0946,	// (0x00017192) bg_popup_call2_in_pane_g1

0x2b60,	// (0x000193ac) popup_cale_lunar_info_window_t4

0x0003,

0xf541,	// (0x00025d8d) popup_cale_lunar_info_window_t

0x094e,	// (0x0001719a) bg_popup_call2_rect_pane_ParamLimits

0x094e,	// (0x0001719a) bg_popup_call2_rect_pane

0x06f3,	// (0x00016f3f) call2_cli_visual_graphic_pane

0x06f3,	// (0x00016f3f) call2_cli_visual_text_pane

0x7669,	// (0x0001deb5) smil_status_volume_pane_g3

0x0002,

0x0966,	// (0x000171b2) call2_cli_visual_graphic_pane_g1

0x0966,	// (0x000171b2) call2_cli_visual_graphic_pane_g2

0x0966,	// (0x000171b2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x00025d32) call2_cli_visual_graphic_pane_g

0x2a56,	// (0x000192a2) bg_popup_call2_rect_pane_g1

0x0b61,	// (0x000173ad) bg_popup_call2_rect_pane_g2

0x2a5e,	// (0x000192aa) bg_popup_call2_rect_pane_g3

0x2a66,	// (0x000192b2) bg_popup_call2_rect_pane_g4

0x2a6e,	// (0x000192ba) bg_popup_call2_rect_pane_g5

0x2a76,	// (0x000192c2) bg_popup_call2_rect_pane_g6

0x2a7e,	// (0x000192ca) bg_popup_call2_rect_pane_g7

0x2a86,	// (0x000192d2) bg_popup_call2_rect_pane_g8

0x2a8e,	// (0x000192da) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x00025d39) bg_popup_call2_rect_pane_g

0x2a96,	// (0x000192e2) bg_popup_call2_bubble_pane_g1

0x2a9e,	// (0x000192ea) bg_popup_call2_bubble_pane_g2

0x2aa6,	// (0x000192f2) bg_popup_call2_bubble_pane_g3

0x2aae,	// (0x000192fa) bg_popup_call2_bubble_pane_g4

0x2ab6,	// (0x00019302) bg_popup_call2_bubble_pane_g5

0x2abe,	// (0x0001930a) bg_popup_call2_bubble_pane_g6

0x2ac6,	// (0x00019312) bg_popup_call2_bubble_pane_g7

0x2ace,	// (0x0001931a) bg_popup_call2_bubble_pane_g8

0x2ad6,	// (0x00019322) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x00025d4c) bg_popup_call2_bubble_pane_g

0x891e,	// (0x0001f16a) aid_cale_week_size_cell_pane

0x094e,	// (0x0001719a) aid_cams_cif_uncrop_pane_ParamLimits

0x094e,	// (0x0001719a) aid_cams_cif_uncrop_pane

0x8e22,	// (0x0001f66e) aid_cams_size_cell_ParamLimits

0x8e22,	// (0x0001f66e) aid_cams_size_cell

0x8e2e,	// (0x0001f67a) grid_cams_pane_ParamLimits

0x8e3c,	// (0x0001f688) linegrid_cams_pane_ParamLimits

0x8f13,	// (0x0001f75f) call_video_pane_t1

0x8f34,	// (0x0001f780) call_video_pane_t2

0x0001,

0xf208,	// (0x00025a54) call_video_pane_t

0x9439,	// (0x0001fc85) aid_cale_month_size_cell_pane_ParamLimits

0x9439,	// (0x0001fc85) aid_cale_month_size_cell_pane

0xf585,	// (0x00025dd1) smil_status_volume_pane_g

0x7676,	// (0x0001dec2) volume_smil_pane_ParamLimits

0x6e13,	// (0x0001d65f) aid_popup2_width_pane

0x8857,	// (0x0001f0a3) cell_qdial_pane_g4_ParamLimits

0x8857,	// (0x0001f0a3) cell_qdial_pane_g4

0xa21c,	// (0x00020a68) aid_blid_cardinal_pane_ParamLimits

0xa22c,	// (0x00020a78) aid_blid_destination_pane_ParamLimits

0xa22c,	// (0x00020a78) aid_blid_destination_pane

0x094e,	// (0x0001719a) bg_popup_call_poc_act_pane_ParamLimits

0x094e,	// (0x0001719a) bg_popup_call_poc_act_pane

0x094e,	// (0x0001719a) bg_popup_call_poc_inact_pane_ParamLimits

0x094e,	// (0x0001719a) bg_popup_call_poc_inact_pane

0x2ade,	// (0x0001932a) bg_popup_call_poc_act_pane_g1

0x2ae6,	// (0x00019332) bg_popup_call_poc_act_pane_g2

0x2aee,	// (0x0001933a) bg_popup_call_poc_act_pane_g3

0x2aae,	// (0x000192fa) bg_popup_call_poc_act_pane_g4

0x2ab6,	// (0x00019302) bg_popup_call_poc_act_pane_g5

0x2af6,	// (0x00019342) bg_popup_call_poc_act_pane_g6

0x2ac6,	// (0x00019312) bg_popup_call_poc_act_pane_g7

0x2afe,	// (0x0001934a) bg_popup_call_poc_act_pane_g8

0x06f3,	// (0x00016f3f) main_usb_pane

0x7549,	// (0x0001dd95) popup_cale_lunar_info_window

0x925d,	// (0x0001faa9) im_reading_pane_t1_ParamLimits

0x0d9b,	// (0x000175e7) list_im_pane_ParamLimits

0x0dac,	// (0x000175f8) scroll_pane_cp07_ParamLimits

0x06f3,	// (0x00016f3f) grid_highlight_pane_cp012

0x094e,	// (0x0001719a) mup_scale_pane_ParamLimits

0x22ab,	// (0x00018af7) main_usb_pane_g1_ParamLimits

0x22ab,	// (0x00018af7) main_usb_pane_g1

0xab13,	// (0x0002135f) main_usb_pane_g2_ParamLimits

0xab13,	// (0x0002135f) main_usb_pane_g2

0x0001,

0xf52a,	// (0x00025d76) main_usb_pane_g_ParamLimits

0xf52a,	// (0x00025d76) main_usb_pane_g

0xab1f,	// (0x0002136b) main_usb_pane_t1_ParamLimits

0xab1f,	// (0x0002136b) main_usb_pane_t1

0xab31,	// (0x0002137d) main_usb_pane_t2_ParamLimits

0xab31,	// (0x0002137d) main_usb_pane_t2

0xab43,	// (0x0002138f) main_usb_pane_t3_ParamLimits

0xab43,	// (0x0002138f) main_usb_pane_t3

0xab55,	// (0x000213a1) main_usb_pane_t4_ParamLimits

0xab55,	// (0x000213a1) main_usb_pane_t4

0xab67,	// (0x000213b3) main_usb_pane_t5_ParamLimits

0xab67,	// (0x000213b3) main_usb_pane_t5

0xab79,	// (0x000213c5) main_usb_pane_t6_ParamLimits

0xab79,	// (0x000213c5) main_usb_pane_t6

0x0005,

0xf52f,	// (0x00025d7b) main_usb_pane_t_ParamLimits

0xa1c2,	// (0x00020a0e) aid_text_placing

0xa1ce,	// (0x00020a1a) main_location2_pane_t1_ParamLimits

0xa1e2,	// (0x00020a2e) main_location2_pane_t2_ParamLimits

0xa1f6,	// (0x00020a42) main_location2_pane_t3_ParamLimits

0xa20a,	// (0x00020a56) main_location2_pane_t4_ParamLimits

0xa20a,	// (0x00020a56) main_location2_pane_t4

0xf349,	// (0x00025b95) main_location2_pane_t_ParamLimits

0x097c,	// (0x000171c8) find_pinb_pane_g2_ParamLimits

0x097c,	// (0x000171c8) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0002590c) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0002590c) find_pinb_pane_g

0x0988,	// (0x000171d4) find_pinb_pane_t1_ParamLimits

0x099a,	// (0x000171e6) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00025911) find_pinb_pane_t_ParamLimits

0x06f3,	// (0x00016f3f) main_call3_pane

0x99dc,	// (0x00020228) cale_month_day_heading_pane_t1_ParamLimits

0x9a62,	// (0x000202ae) cale_month_day_heading_pane_t2_ParamLimits

0x9adb,	// (0x00020327) cale_month_day_heading_pane_t3_ParamLimits

0x9b54,	// (0x000203a0) cale_month_day_heading_pane_t4_ParamLimits

0x9bcd,	// (0x00020419) cale_month_day_heading_pane_t5_ParamLimits

0x9c46,	// (0x00020492) cale_month_day_heading_pane_t6_ParamLimits

0x9cbf,	// (0x0002050b) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00025a8c) cale_month_day_heading_pane_t_ParamLimits

0x0fef,	// (0x0001783b) smil_status_volume_pane

0xa66f,	// (0x00020ebb) postcard_address_pane_ParamLimits

0xa66f,	// (0x00020ebb) postcard_address_pane

0xa67b,	// (0x00020ec7) postcard_message_pane_ParamLimits

0xa67b,	// (0x00020ec7) postcard_message_pane

0xaade,	// (0x0002132a) call2_cli_visual_pane_t1_ParamLimits

0xaade,	// (0x0002132a) call2_cli_visual_pane_t1

0x2ceb,	// (0x00019537) postcard_message_pane_t1_ParamLimits

0x2ceb,	// (0x00019537) postcard_message_pane_t1

0x2cd3,	// (0x0001951f) postcard_address_pane_t1_ParamLimits

0x2cd3,	// (0x0001951f) postcard_address_pane_t1

0xaebb,	// (0x00021707) popup_call3_audio_in_window_ParamLimits

0xaebb,	// (0x00021707) popup_call3_audio_in_window

0xad9f,	// (0x000215eb) bg_popup_call3_in_pane_ParamLimits

0xad9f,	// (0x000215eb) bg_popup_call3_in_pane

0xae01,	// (0x0002164d) popup_call3_audio_in_window_g1_ParamLimits

0xae01,	// (0x0002164d) popup_call3_audio_in_window_g1

0xae19,	// (0x00021665) popup_call3_audio_in_window_g2_ParamLimits

0xae19,	// (0x00021665) popup_call3_audio_in_window_g2

0xae31,	// (0x0002167d) popup_call3_audio_in_window_g3_ParamLimits

0xae31,	// (0x0002167d) popup_call3_audio_in_window_g3

0x0003,

0xf58c,	// (0x00025dd8) popup_call3_audio_in_window_g_ParamLimits

0xf58c,	// (0x00025dd8) popup_call3_audio_in_window_g

0xae59,	// (0x000216a5) popup_call3_audio_in_window_t1_ParamLimits

0xae59,	// (0x000216a5) popup_call3_audio_in_window_t1

0xae81,	// (0x000216cd) popup_call3_audio_in_window_t2_ParamLimits

0xae81,	// (0x000216cd) popup_call3_audio_in_window_t2

0xaea9,	// (0x000216f5) popup_call3_audio_in_window_t3_ParamLimits

0xaea9,	// (0x000216f5) popup_call3_audio_in_window_t3

0x0002,

0xf595,	// (0x00025de1) popup_call3_audio_in_window_t_ParamLimits

0xf595,	// (0x00025de1) popup_call3_audio_in_window_t

0x0ca2,	// (0x000174ee) bg_popup_call3_rect_pane

0x2a56,	// (0x000192a2) bg_popup_call3_rect_pane_g1

0x0b61,	// (0x000173ad) bg_popup_call3_rect_pane_g2

0x2a5e,	// (0x000192aa) bg_popup_call3_rect_pane_g3

0x2a66,	// (0x000192b2) bg_popup_call3_rect_pane_g4

0x2a6e,	// (0x000192ba) bg_popup_call3_rect_pane_g5

0x2a76,	// (0x000192c2) bg_popup_call3_rect_pane_g6

0x2a7e,	// (0x000192ca) bg_popup_call3_rect_pane_g7

0x0263,	// (0x00016aaf) mup_visualizer_osc_pane

0x0263,	// (0x00016aaf) mup_visualizer_spec_pane

0xadbf,	// (0x0002160b) call3_video_qcif_pane_ParamLimits

0xadbf,	// (0x0002160b) call3_video_qcif_pane

0xadd1,	// (0x0002161d) call3_video_qcif_uncrop_pane_ParamLimits

0xadd1,	// (0x0002161d) call3_video_qcif_uncrop_pane

0xaddf,	// (0x0002162b) call3_video_subqcif_pane_ParamLimits

0xaddf,	// (0x0002162b) call3_video_subqcif_pane

0xadf1,	// (0x0002163d) call3_video_subqcif_uncrop_pane_ParamLimits

0xadf1,	// (0x0002163d) call3_video_subqcif_uncrop_pane

0xae49,	// (0x00021695) popup_call3_audio_in_window_g4_ParamLimits

0xae49,	// (0x00021695) popup_call3_audio_in_window_g4

0x0263,	// (0x00016aaf) mup_spec_half_pane

0x0263,	// (0x00016aaf) mup_spec_half_pane_cp

0x0263,	// (0x00016aaf) mup_osc_middle_pane

0x0ce2,	// (0x0001752e) mup_visualizer_osc_pane_g1

0x2c64,	// (0x000194b0) mup_spec_bar_pane_ParamLimits

0x2c64,	// (0x000194b0) mup_spec_bar_pane

0x0ce2,	// (0x0001752e) mup_spec_bar_pane_g1

0x0ce2,	// (0x0001752e) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x00025c0f) mup_spec_bar_pane_g

0x891e,	// (0x0001f16a) aid_cale_week_size_cell_pane_ParamLimits

0x8933,	// (0x0001f17f) bg_cale_heading_pane_ParamLimits

0x0c04,	// (0x00017450) bg_cale_pane_cp01_ParamLimits

0x8953,	// (0x0001f19f) cale_week_corner_pane_ParamLimits

0x896d,	// (0x0001f1b9) cale_week_day_heading_pane_ParamLimits

0x898d,	// (0x0001f1d9) cale_week_scroll_pane_g1_ParamLimits

0x89a8,	// (0x0001f1f4) cale_week_scroll_pane_g2_ParamLimits

0x89bb,	// (0x0001f207) cale_week_scroll_pane_g3_ParamLimits

0x89ce,	// (0x0001f21a) cale_week_scroll_pane_g4_ParamLimits

0x89e1,	// (0x0001f22d) cale_week_scroll_pane_g5_ParamLimits

0x89f4,	// (0x0001f240) cale_week_scroll_pane_g6_ParamLimits

0x8a07,	// (0x0001f253) cale_week_scroll_pane_g7_ParamLimits

0x8a1c,	// (0x0001f268) cale_week_scroll_pane_g8_ParamLimits

0x8a31,	// (0x0001f27d) cale_week_scroll_pane_g9_ParamLimits

0x8a44,	// (0x0001f290) cale_week_scroll_pane_g10_ParamLimits

0x8a57,	// (0x0001f2a3) cale_week_scroll_pane_g11_ParamLimits

0x8a6a,	// (0x0001f2b6) cale_week_scroll_pane_g12_ParamLimits

0x8a81,	// (0x0001f2cd) cale_week_scroll_pane_g13_ParamLimits

0x8a9c,	// (0x0001f2e8) cale_week_scroll_pane_g14_ParamLimits

0x8ab7,	// (0x0001f303) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0002599d) cale_week_scroll_pane_g_ParamLimits

0x8ae7,	// (0x0001f333) cale_week_time_pane_ParamLimits

0x8afc,	// (0x0001f348) grid_cale_week_pane_ParamLimits

0x0c21,	// (0x0001746d) listscroll_cale_week_pane_t1

0x0c33,	// (0x0001747f) scroll_pane_cp08_ParamLimits

0x94ad,	// (0x0001fcf9) cale_month_corner_pane_ParamLimits

0x0fb9,	// (0x00017805) cale_month_pane_t1

0x995f,	// (0x000201ab) cale_month_week_pane_ParamLimits

0x22ab,	// (0x00018af7) popup_call_status_window_g1_ParamLimits

0xa08c,	// (0x000208d8) popup_call_status_window_g2_ParamLimits

0xa098,	// (0x000208e4) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x00025b1c) popup_call_status_window_g_ParamLimits

0x13b7,	// (0x00017c03) aid_call2_pane

0xa58d,	// (0x00020dd9) msg_header_pane_g1

0xa66f,	// (0x00020ebb) postcard_address2_pane_ParamLimits

0xa66f,	// (0x00020ebb) postcard_address2_pane

0xa67b,	// (0x00020ec7) postcard_message2_pane_ParamLimits

0xa67b,	// (0x00020ec7) postcard_message2_pane

0xad71,	// (0x000215bd) message2_row_pane_ParamLimits

0xad71,	// (0x000215bd) message2_row_pane

0xad8c,	// (0x000215d8) address2_row_pane_ParamLimits

0xad8c,	// (0x000215d8) address2_row_pane

0x2c31,	// (0x0001947d) postcard_message2_row_pane_g1

0x2c39,	// (0x00019485) postcard_message2_row_pane_t1

0x2c31,	// (0x0001947d) address2_row_pane_g1

0x2c39,	// (0x00019485) address2_row_pane_t1

0x8c9c,	// (0x0001f4e8) aid_size_cell_vorec

0x06f3,	// (0x00016f3f) main_rss_pane

0x2c47,	// (0x00019493) rss_list_single_pane_ParamLimits

0x2c47,	// (0x00019493) rss_list_single_pane

0x2c55,	// (0x000194a1) rss_list_single_pane_t1

0x2c55,	// (0x000194a1) rss_list_single_pane_t2

0x0001,

0xf580,	// (0x00025dcc) rss_list_single_pane_t

0x06f3,	// (0x00016f3f) main_camera2_pane

0x06f3,	// (0x00016f3f) main_video2_pane

0x708e,	// (0x0001d8da) cams_zoom_pane_cp2_ParamLimits

0x708e,	// (0x0001d8da) cams_zoom_pane_cp2

0x708e,	// (0x0001d8da) image2_vga_pane_ParamLimits

0x708e,	// (0x0001d8da) image2_vga_pane

0x1456,	// (0x00017ca2) main_camera2_pane_g1_ParamLimits

0x1456,	// (0x00017ca2) main_camera2_pane_g1

0x1456,	// (0x00017ca2) main_camera2_pane_g2_ParamLimits

0x1456,	// (0x00017ca2) main_camera2_pane_g2

0x1456,	// (0x00017ca2) main_camera2_pane_g3_ParamLimits

0x1456,	// (0x00017ca2) main_camera2_pane_g3

0x1456,	// (0x00017ca2) main_camera2_pane_g4_ParamLimits

0x1456,	// (0x00017ca2) main_camera2_pane_g4

0x1456,	// (0x00017ca2) main_camera2_pane_g5_ParamLimits

0x1456,	// (0x00017ca2) main_camera2_pane_g5

0x1456,	// (0x00017ca2) main_camera2_pane_g6_ParamLimits

0x1456,	// (0x00017ca2) main_camera2_pane_g6

0x1456,	// (0x00017ca2) main_camera2_pane_g7_ParamLimits

0x1456,	// (0x00017ca2) main_camera2_pane_g7

0x1456,	// (0x00017ca2) main_camera2_pane_g8_ParamLimits

0x1456,	// (0x00017ca2) main_camera2_pane_g8

0x0008,

0xf59c,	// (0x00025de8) main_camera2_pane_g_ParamLimits

0xf59c,	// (0x00025de8) main_camera2_pane_g

0x7699,	// (0x0001dee5) main_camera2_pane_t1_ParamLimits

0x7699,	// (0x0001dee5) main_camera2_pane_t1

0x7699,	// (0x0001dee5) main_camera2_pane_t2_ParamLimits

0x7699,	// (0x0001dee5) main_camera2_pane_t2

0x7699,	// (0x0001dee5) main_camera2_pane_t3_ParamLimits

0x7699,	// (0x0001dee5) main_camera2_pane_t3

0x7699,	// (0x0001dee5) main_camera2_pane_t4_ParamLimits

0x7699,	// (0x0001dee5) main_camera2_pane_t4

0x0006,

0xf5af,	// (0x00025dfb) main_camera2_pane_t_ParamLimits

0xf5af,	// (0x00025dfb) main_camera2_pane_t

0x76c1,	// (0x0001df0d) cams_zoom_pane_cp4_ParamLimits

0x76c1,	// (0x0001df0d) cams_zoom_pane_cp4

0x74f4,	// (0x0001dd40) image2_cif_pane_ParamLimits

0x74f4,	// (0x0001dd40) image2_cif_pane

0x708e,	// (0x0001d8da) image2_subqcif_pane_ParamLimits

0x708e,	// (0x0001d8da) image2_subqcif_pane

0x76cf,	// (0x0001df1b) main_video2_pane_g1_ParamLimits

0x76cf,	// (0x0001df1b) main_video2_pane_g1

0x76cf,	// (0x0001df1b) main_video2_pane_g2_ParamLimits

0x76cf,	// (0x0001df1b) main_video2_pane_g2

0x76cf,	// (0x0001df1b) main_video2_pane_g3_ParamLimits

0x76cf,	// (0x0001df1b) main_video2_pane_g3

0x76cf,	// (0x0001df1b) main_video2_pane_g4_ParamLimits

0x76cf,	// (0x0001df1b) main_video2_pane_g4

0x76cf,	// (0x0001df1b) main_video2_pane_g5_ParamLimits

0x76cf,	// (0x0001df1b) main_video2_pane_g5

0x76cf,	// (0x0001df1b) main_video2_pane_g6_ParamLimits

0x76cf,	// (0x0001df1b) main_video2_pane_g6

0x0005,

0xf5be,	// (0x00025e0a) main_video2_pane_g_ParamLimits

0xf5be,	// (0x00025e0a) main_video2_pane_g

0x76dd,	// (0x0001df29) main_video2_pane_t1_ParamLimits

0x76dd,	// (0x0001df29) main_video2_pane_t1

0x76dd,	// (0x0001df29) main_video2_pane_t2_ParamLimits

0x76dd,	// (0x0001df29) main_video2_pane_t2

0x76dd,	// (0x0001df29) main_video2_pane_t3_ParamLimits

0x76dd,	// (0x0001df29) main_video2_pane_t3

0x0002,

0xf5cb,	// (0x00025e17) main_video2_pane_t_ParamLimits

0xf5cb,	// (0x00025e17) main_video2_pane_t

0xac0f,	// (0x0002145b) call_muted_g2

0x0001,

0xf572,	// (0x00025dbe) call_muted_g

0x06f3,	// (0x00016f3f) main_mup2_pane

0x09e5,	// (0x00017231) main_mup2_pane_g1_ParamLimits

0x09e5,	// (0x00017231) main_mup2_pane_g1

0x09e5,	// (0x00017231) main_mup2_pane_g2_ParamLimits

0x09e5,	// (0x00017231) main_mup2_pane_g2

0x452e,	// (0x0001ad7a) main_mup_pane_g13_cp1

0x709c,	// (0x0001d8e8) mup_volume_pane_cp1

0x09e5,	// (0x00017231) main_mup2_pane_g4_ParamLimits

0x09e5,	// (0x00017231) main_mup2_pane_g4

0x09e5,	// (0x00017231) main_mup2_pane_g5_ParamLimits

0x09e5,	// (0x00017231) main_mup2_pane_g5

0x09e5,	// (0x00017231) main_mup2_pane_g6_ParamLimits

0x09e5,	// (0x00017231) main_mup2_pane_g6

0x09e5,	// (0x00017231) main_mup2_pane_g7_ParamLimits

0x09e5,	// (0x00017231) main_mup2_pane_g7

0x0006,

0xf5d2,	// (0x00025e1e) main_mup2_pane_g_ParamLimits

0xf5d2,	// (0x00025e1e) main_mup2_pane_g

0x09f3,	// (0x0001723f) main_mup2_pane_t1_ParamLimits

0x09f3,	// (0x0001723f) main_mup2_pane_t1

0x09f3,	// (0x0001723f) main_mup2_pane_t2_ParamLimits

0x09f3,	// (0x0001723f) main_mup2_pane_t2

0x09f3,	// (0x0001723f) main_mup2_pane_t3_ParamLimits

0x09f3,	// (0x0001723f) main_mup2_pane_t3

0x09f3,	// (0x0001723f) main_mup2_pane_t4_ParamLimits

0x09f3,	// (0x0001723f) main_mup2_pane_t4

0x09f3,	// (0x0001723f) main_mup2_pane_t5_ParamLimits

0x09f3,	// (0x0001723f) main_mup2_pane_t5

0x09f3,	// (0x0001723f) main_mup2_pane_t6_ParamLimits

0x09f3,	// (0x0001723f) main_mup2_pane_t6

0x0005,

0xf5e1,	// (0x00025e2d) main_mup2_pane_t_ParamLimits

0xf5e1,	// (0x00025e2d) main_mup2_pane_t

0x2d37,	// (0x00019583) mup2_visualizer_pane_ParamLimits

0x2d37,	// (0x00019583) mup2_visualizer_pane

0x2d37,	// (0x00019583) mup_progress_pane_cp_ParamLimits

0x2d37,	// (0x00019583) mup_progress_pane_cp

0x7707,	// (0x0001df53) mup_volume_pane_cp_ParamLimits

0x7707,	// (0x0001df53) mup_volume_pane_cp

0x09c9,	// (0x00017215) mup2_visualizer_pane_g1_ParamLimits

0x09c9,	// (0x00017215) mup2_visualizer_pane_g1

0x09d7,	// (0x00017223) mup2_visualizer_pane_g2_ParamLimits

0x09d7,	// (0x00017223) mup2_visualizer_pane_g2

0x09d7,	// (0x00017223) mup2_visualizer_pane_g3_ParamLimits

0x09d7,	// (0x00017223) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00025916) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00025916) mup2_visualizer_pane_g

0x1b85,	// (0x000183d1) aid_size_cell_fmradio

0x74dd,	// (0x0001dd29) aid_height_parent_landcape

0x0e2a,	// (0x00017676) wml_content_pane_cp

0x0e32,	// (0x0001767e) wml_tabs_pane

0x0e3b,	// (0x00017687) popup_wml_miniature_window

0x0e43,	// (0x0001768f) scroll_pane_cp021

0x0e57,	// (0x000176a3) wml_content_pane_comp8

0x06f3,	// (0x00016f3f) bg_popup_sub_pane_cp05

0x2d5b,	// (0x000195a7) popup_wml_miniature_window_g1

0x2d63,	// (0x000195af) wml_miniature_view_pane

0xaeca,	// (0x00021716) aid_size_wml_view

0xaed2,	// (0x0002171e) wml_miniature_view_pane_g1

0xaedb,	// (0x00021727) wml_miniature_view_pane_g2

0xaee4,	// (0x00021730) wml_miniature_view_pane_g3

0xaeec,	// (0x00021738) wml_miniature_view_pane_g4

0xaef4,	// (0x00021740) wml_miniature_view_pane_g5

0xaefc,	// (0x00021748) wml_miniature_view_pane_g6

0xaf04,	// (0x00021750) wml_miniature_view_pane_g7

0xaf0c,	// (0x00021758) wml_miniature_view_pane_g8

0x0007,

0xf5ee,	// (0x00025e3a) wml_miniature_view_pane_g

0x2d6b,	// (0x000195b7) background_graphic_ParamLimits

0x2d6b,	// (0x000195b7) background_graphic

0x2d77,	// (0x000195c3) wml_tabs_2_pane

0x2d80,	// (0x000195cc) wml_tabs_3_pane_ParamLimits

0x2d80,	// (0x000195cc) wml_tabs_3_pane

0x2d92,	// (0x000195de) wml_tabs_4_pane_ParamLimits

0x2d92,	// (0x000195de) wml_tabs_4_pane

0x2da8,	// (0x000195f4) wml_tabs_5_pane_ParamLimits

0x2da8,	// (0x000195f4) wml_tabs_5_pane

0x2dc2,	// (0x0001960e) wml_tabs_pane_g2_ParamLimits

0x2dc2,	// (0x0001960e) wml_tabs_pane_g2

0x2dd7,	// (0x00019623) wml_tabs_pane_g3_ParamLimits

0x2dd7,	// (0x00019623) wml_tabs_pane_g3

0x2dec,	// (0x00019638) wml_tabs_2_active_pane_ParamLimits

0x2dec,	// (0x00019638) wml_tabs_2_active_pane

0x2dec,	// (0x00019638) wml_tabs_2_passive_pane_ParamLimits

0x2dec,	// (0x00019638) wml_tabs_2_passive_pane

0xaf14,	// (0x00021760) wml_tabs_3_active_pane_cp_ParamLimits

0xaf14,	// (0x00021760) wml_tabs_3_active_pane_cp

0xaf25,	// (0x00021771) wml_tabs_3_passive_pane_ParamLimits

0xaf25,	// (0x00021771) wml_tabs_3_passive_pane

0xaf36,	// (0x00021782) wml_tabs_3_passive_pane_cp_ParamLimits

0xaf36,	// (0x00021782) wml_tabs_3_passive_pane_cp

0xaf47,	// (0x00021793) tabs_4_active_pane

0xaf4f,	// (0x0002179b) tabs_4_passive_pane

0xaf57,	// (0x000217a3) tabs_4_passive_pane_cp

0xaf5f,	// (0x000217ab) tabs_4_passive_pane_cp2

0xab0b,	// (0x00021357) aid_height_text

0x2d37,	// (0x00019583) mup_volume_cont_pane_ParamLimits

0x2d37,	// (0x00019583) mup_volume_cont_pane

0x0263,	// (0x00016aaf) aid_size_cell_pinb

0x0263,	// (0x00016aaf) aid_size_list_pinb

0x2d37,	// (0x00019583) mup2_volume_cont_pane_ParamLimits

0x2d37,	// (0x00019583) mup2_volume_cont_pane

0x76f1,	// (0x0001df3d) mup2_volume_cont_pane_g1_ParamLimits

0x76f1,	// (0x0001df3d) mup2_volume_cont_pane_g1

0x6e1f,	// (0x0001d66b) aid_size_cell_touch_ParamLimits

0x6e1f,	// (0x0001d66b) aid_size_cell_touch

0x70a6,	// (0x0001d8f2) touch_pane_ParamLimits

0x70a6,	// (0x0001d8f2) touch_pane

0x709c,	// (0x0001d8e8) main_rss2_pane

0x2e19,	// (0x00019665) listscroll_rss2_pane

0x2e22,	// (0x0001966e) rss2_navigation_pane

0x2e2a,	// (0x00019676) list_rss2_pane

0x1559,	// (0x00017da5) scroll_pane_cp22

0x2e32,	// (0x0001967e) rss2_navigation_pane_g1

0x2e3b,	// (0x00019687) rss2_navigation_pane_g2

0x2e43,	// (0x0001968f) rss2_navigation_pane_g3

0x0002,

0xf5ff,	// (0x00025e4b) rss2_navigation_pane_g

0x2e4b,	// (0x00019697) rss2_navigation_pane_t1

0xaf67,	// (0x000217b3) rss2_list_single_pane_ParamLimits

0xaf67,	// (0x000217b3) rss2_list_single_pane

0x2e59,	// (0x000196a5) rss2_list_single_pane_t2

0x2e67,	// (0x000196b3) rss2_list_single_pane_t3_ParamLimits

0x2e67,	// (0x000196b3) rss2_list_single_pane_t3

0x2e84,	// (0x000196d0) rss2_list_single_pane_t4

0x9f23,	// (0x0002076f) smil_status_pane_g1

0x74f4,	// (0x0001dd40) main_image2_pane_ParamLimits

0x74f4,	// (0x0001dd40) main_image2_pane

0x1456,	// (0x00017ca2) main_camera2_pane_g9_ParamLimits

0x1456,	// (0x00017ca2) main_camera2_pane_g9

0x7699,	// (0x0001dee5) main_camera2_pane_t5_ParamLimits

0x7699,	// (0x0001dee5) main_camera2_pane_t5

0x76ad,	// (0x0001def9) main_camera2_pane_t6_ParamLimits

0x76ad,	// (0x0001def9) main_camera2_pane_t6

0xaf98,	// (0x000217e4) main_image2_pane_g1_ParamLimits

0xaf98,	// (0x000217e4) main_image2_pane_g1

0xa843,	// (0x0002108f) smil2_video_pane_ParamLimits

0xa843,	// (0x0002108f) smil2_video_pane

0x6e53,	// (0x0001d69f) aid_zoom_text_primary_cp

0x7043,	// (0x0001d88f) popup_preview_fixed_window

0x0d93,	// (0x000175df) im_reading_pane_g1

0x768b,	// (0x0001ded7) cams2_bc_adjust_pane_cp_ParamLimits

0x768b,	// (0x0001ded7) cams2_bc_adjust_pane_cp

0x708e,	// (0x0001d8da) cams2_bc_adjust_pane_ParamLimits

0x708e,	// (0x0001d8da) cams2_bc_adjust_pane

0x452e,	// (0x0001ad7a) cams2_bc_adjust_pane_g1

0x709c,	// (0x0001d8e8) cams2_slider_pane

0x452e,	// (0x0001ad7a) cams2_slider_pane_g1

0x452e,	// (0x0001ad7a) cams2_slider_pane_g2

0x0006,

0xf606,	// (0x00025e52) cams2_slider_pane_g

0x7117,	// (0x0001d963) calc_display_pane_ParamLimits

0x7135,	// (0x0001d981) calc_paper_pane_ParamLimits

0x7151,	// (0x0001d99d) grid_calc_pane_ParamLimits

0x7448,	// (0x0001dc94) popup_clock_digital_window_t1_ParamLimits

0x1b22,	// (0x0001836e) main_image_pane_t1

0x70fd,	// (0x0001d949) aid_size_cell_calc_ParamLimits

0x70fd,	// (0x0001d949) aid_size_cell_calc

0x7525,	// (0x0001dd71) popup_blid_sat_info2_window_ParamLimits

0x7525,	// (0x0001dd71) popup_blid_sat_info2_window

0x2e92,	// (0x000196de) aid_size_cell_blid

0x2d37,	// (0x00019583) bg_popup_window_pane_cp07

0x2eaf,	// (0x000196fb) grid_popup_blid_pane

0x2eb9,	// (0x00019705) heading_pane_cp05_ParamLimits

0x2eb9,	// (0x00019705) heading_pane_cp05

0x2f83,	// (0x000197cf) cell_popup_blid_pane_ParamLimits

0x2f83,	// (0x000197cf) cell_popup_blid_pane

0x2fa7,	// (0x000197f3) cell_popup_blid_pane_g1

0x2faf,	// (0x000197fb) cell_popup_blid_pane_t1

0x2d37,	// (0x00019583) mup2_indicator_pane_ParamLimits

0x2d37,	// (0x00019583) mup2_indicator_pane

0x0263,	// (0x00016aaf) mup2_visualizer_osc_pane

0x2d45,	// (0x00019591) mup2_visualizer_spec_pane_ParamLimits

0x2d45,	// (0x00019591) mup2_visualizer_spec_pane

0x0263,	// (0x00016aaf) mup2_spec_half_pane

0x0263,	// (0x00016aaf) mup2_spec_half_pane_cp

0x2fbd,	// (0x00019809) mup2_spec_bar_pane_ParamLimits

0x2fbd,	// (0x00019809) mup2_spec_bar_pane

0x0ce2,	// (0x0001752e) mup2_spec_bar_pane_g1

0x2fdc,	// (0x00019828) mup2_spec_bar_pane_g2

0x0001,

0xf62c,	// (0x00025e78) mup2_spec_bar_pane_g

0x0263,	// (0x00016aaf) mup2_osc_middle_pane

0x0ce2,	// (0x0001752e) mup2_visualizer_osc_pane_g1

0x0300,	// (0x00016b4c) popup_number_entry_window_t1_ParamLimits

0x0313,	// (0x00016b5f) popup_number_entry_window_t2_ParamLimits

0x0325,	// (0x00016b71) popup_number_entry_window_t3_ParamLimits

0x866b,	// (0x0001eeb7) popup_number_entry_window_t5_ParamLimits

0x866b,	// (0x0001eeb7) popup_number_entry_window_t5

0xf06b,	// (0x000258b7) popup_number_entry_window_t_ParamLimits

0x0337,	// (0x00016b83) text_title_cp2_ParamLimits

0x7487,	// (0x0001dcd3) aid_hotspot_pointer_text2_pane

0x74d1,	// (0x0001dd1d) main_viewer_pane_g9_ParamLimits

0x74d1,	// (0x0001dd1d) main_viewer_pane_g9

0x0fb9,	// (0x00017805) cale_month_pane_t1_ParamLimits

0x1024,	// (0x00017870) bg_cale_pane_ParamLimits

0x103c,	// (0x00017888) list_cale_pane_ParamLimits

0x104d,	// (0x00017899) listscroll_cale_day_pane_t1

0x105f,	// (0x000178ab) scroll_pane_cp09_ParamLimits

0xa2f8,	// (0x00020b44) main_mup_eq_pane_t1_ParamLimits

0xa2f8,	// (0x00020b44) main_mup_eq_pane_t1

0xa312,	// (0x00020b5e) main_mup_eq_pane_t2_ParamLimits

0xa312,	// (0x00020b5e) main_mup_eq_pane_t2

0xa32c,	// (0x00020b78) main_mup_eq_pane_t3_ParamLimits

0xa32c,	// (0x00020b78) main_mup_eq_pane_t3

0xa344,	// (0x00020b90) main_mup_eq_pane_t4_ParamLimits

0xa344,	// (0x00020b90) main_mup_eq_pane_t4

0xa35c,	// (0x00020ba8) main_mup_eq_pane_t5_ParamLimits

0xa35c,	// (0x00020ba8) main_mup_eq_pane_t5

0xa374,	// (0x00020bc0) main_mup_eq_pane_t6_ParamLimits

0xa374,	// (0x00020bc0) main_mup_eq_pane_t6

0xa388,	// (0x00020bd4) main_mup_eq_pane_t7_ParamLimits

0xa388,	// (0x00020bd4) main_mup_eq_pane_t7

0xa39c,	// (0x00020be8) main_mup_eq_pane_t8_ParamLimits

0xa39c,	// (0x00020be8) main_mup_eq_pane_t8

0xa3b2,	// (0x00020bfe) main_mup_eq_pane_t9_ParamLimits

0xa3b2,	// (0x00020bfe) main_mup_eq_pane_t9

0xa3ca,	// (0x00020c16) main_mup_eq_pane_t10_ParamLimits

0xa3ca,	// (0x00020c16) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x00025c1b) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x00025c1b) main_mup_eq_pane_t

0xa487,	// (0x00020cd3) mup_equalizer_pane_cp5_ParamLimits

0xa49d,	// (0x00020ce9) mup_equalizer_pane_cp6_ParamLimits

0xa4b5,	// (0x00020d01) mup_equalizer_pane_cp7_ParamLimits

0x709c,	// (0x0001d8e8) main_gallery_pane

0x2c83,	// (0x000194cf) smil2_volume_pane

0x2c9e,	// (0x000194ea) smil_status_volume_pane_g1_ParamLimits

0x2c8b,	// (0x000194d7) smil_status_volume_pane_g2_ParamLimits

0x7669,	// (0x0001deb5) smil_status_volume_pane_g3_ParamLimits

0xf585,	// (0x00025dd1) smil_status_volume_pane_g_ParamLimits

0x2d37,	// (0x00019583) bg_popup_window_pane_cp07_ParamLimits

0x2e9a,	// (0x000196e6) blid_firmament_pane

0x09bb,	// (0x00017207) aid_size_cell_gallery_ParamLimits

0x09bb,	// (0x00017207) aid_size_cell_gallery

0x09bb,	// (0x00017207) grid_gallery_pane_ParamLimits

0x09bb,	// (0x00017207) grid_gallery_pane

0x1899,	// (0x000180e5) cell_gallery_pane_ParamLimits

0x1899,	// (0x000180e5) cell_gallery_pane

0x02d2,	// (0x00016b1e) bg_cell_gallery_focus_pane_ParamLimits

0x02d2,	// (0x00016b1e) bg_cell_gallery_focus_pane

0x09c9,	// (0x00017215) cell_gallery_pane_g1_ParamLimits

0x09c9,	// (0x00017215) cell_gallery_pane_g1

0x09c9,	// (0x00017215) cell_gallery_pane_g2_ParamLimits

0x09c9,	// (0x00017215) cell_gallery_pane_g2

0x09c9,	// (0x00017215) cell_gallery_pane_g3_ParamLimits

0x09c9,	// (0x00017215) cell_gallery_pane_g3

0x09d7,	// (0x00017223) cell_gallery_pane_g4_ParamLimits

0x09d7,	// (0x00017223) cell_gallery_pane_g4

0x0003,

0xf631,	// (0x00025e7d) cell_gallery_pane_g_ParamLimits

0xf631,	// (0x00025e7d) cell_gallery_pane_g

0x2fe6,	// (0x00019832) bg_cell_gallery_focus_pane_g1

0x2fee,	// (0x0001983a) bg_cell_gallery_focus_pane_g2

0x2ff6,	// (0x00019842) bg_cell_gallery_focus_pane_g3

0x2ffe,	// (0x0001984a) bg_cell_gallery_focus_pane_g4

0x3006,	// (0x00019852) bg_cell_gallery_focus_pane_g5

0x300e,	// (0x0001985a) bg_cell_gallery_focus_pane_g6

0x3016,	// (0x00019862) bg_cell_gallery_focus_pane_g7

0x301e,	// (0x0001986a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf63a,	// (0x00025e86) bg_cell_gallery_focus_pane_g

0x3026,	// (0x00019872) aid_firma_cardinal

0x303a,	// (0x00019886) blid_firmament_pane_t1

0x3051,	// (0x0001989d) blid_firmament_pane_t2

0x3068,	// (0x000198b4) blid_firmament_pane_t3

0x307f,	// (0x000198cb) blid_firmament_pane_t4

0x0003,

0xf64b,	// (0x00025e97) blid_firmament_pane_t

0x3096,	// (0x000198e2) blid_sat_info_pane

0x0ce2,	// (0x0001752e) blid_sat_info_pane_g1

0x0ce2,	// (0x0001752e) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x00025c0f) blid_sat_info_pane_g

0x30a6,	// (0x000198f2) blid_sat_info_pane_t1

0x30b4,	// (0x00019900) smil2_volume_content_pane

0x30bd,	// (0x00019909) smil2_volume_pane_g1

0x0af8,	// (0x00017344) smil2_volume_content_pane_g1

0x30c5,	// (0x00019911) smil2_volume_content_pane_g2

0x30ce,	// (0x0001991a) smil2_volume_content_pane_g3

0x30d7,	// (0x00019923) smil2_volume_content_pane_g4

0x30e0,	// (0x0001992c) smil2_volume_content_pane_g5

0x30e9,	// (0x00019935) smil2_volume_content_pane_g6

0x30f2,	// (0x0001993e) smil2_volume_content_pane_g7

0x30fb,	// (0x00019947) smil2_volume_content_pane_g8

0x3104,	// (0x00019950) smil2_volume_content_pane_g9

0x310d,	// (0x00019959) smil2_volume_content_pane_g10

0x0009,

0xf654,	// (0x00025ea0) smil2_volume_content_pane_g

0x8b7d,	// (0x0001f3c9) cale_week_day_heading_pane_t1_ParamLimits

0x8b98,	// (0x0001f3e4) cale_week_day_heading_pane_t2_ParamLimits

0x8bb3,	// (0x0001f3ff) cale_week_day_heading_pane_t3_ParamLimits

0x8bce,	// (0x0001f41a) cale_week_day_heading_pane_t4_ParamLimits

0x8be9,	// (0x0001f435) cale_week_day_heading_pane_t5_ParamLimits

0x8c04,	// (0x0001f450) cale_week_day_heading_pane_t6_ParamLimits

0x8c1f,	// (0x0001f46b) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x000259be) cale_week_day_heading_pane_t_ParamLimits

0x0c50,	// (0x0001749c) bg_cale_side_pane_ParamLimits

0x72a8,	// (0x0001daf4) cale_week_time_pane_t1_ParamLimits

0x72c2,	// (0x0001db0e) cale_week_time_pane_t2_ParamLimits

0x72dc,	// (0x0001db28) cale_week_time_pane_t3_ParamLimits

0x72f6,	// (0x0001db42) cale_week_time_pane_t4_ParamLimits

0x7310,	// (0x0001db5c) cale_week_time_pane_t5_ParamLimits

0x732a,	// (0x0001db76) cale_week_time_pane_t6_ParamLimits

0x7348,	// (0x0001db94) cale_week_time_pane_t7_ParamLimits

0x736a,	// (0x0001dbb6) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x000259cd) cale_week_time_pane_t_ParamLimits

0x8c3a,	// (0x0001f486) cell_cale_week_pane_g2_ParamLimits

0x0c50,	// (0x0001749c) bg_cale_side_pane_cp01_ParamLimits

0x9d50,	// (0x0002059c) cale_month_week_pane_t1_ParamLimits

0x9d69,	// (0x000205b5) cale_month_week_pane_t2_ParamLimits

0x9d82,	// (0x000205ce) cale_month_week_pane_t3_ParamLimits

0x9d9b,	// (0x000205e7) cale_month_week_pane_t4_ParamLimits

0x9db4,	// (0x00020600) cale_month_week_pane_t5_ParamLimits

0x9dd5,	// (0x00020621) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00025a9b) cale_month_week_pane_t_ParamLimits

0x7398,	// (0x0001dbe4) cell_cale_month_pane_g1_ParamLimits

0x709c,	// (0x0001d8e8) main_cale_event_viewer_pane

0x0263,	// (0x00016aaf) listscroll_cale_event_viewer_pane

0x3116,	// (0x00019962) list_cale_ev_pane

0x311e,	// (0x0001996a) scroll_pane_cp023

0x312a,	// (0x00019976) field_cale_ev_pane_ParamLimits

0x312a,	// (0x00019976) field_cale_ev_pane

0x3148,	// (0x00019994) field_cale_ev_content_pane_ParamLimits

0x3148,	// (0x00019994) field_cale_ev_content_pane

0x3154,	// (0x000199a0) field_cale_ev_pane_g1_ParamLimits

0x3154,	// (0x000199a0) field_cale_ev_pane_g1

0x3160,	// (0x000199ac) field_cale_ev_pane_g2_ParamLimits

0x3160,	// (0x000199ac) field_cale_ev_pane_g2

0x3178,	// (0x000199c4) field_cale_ev_pane_g3_ParamLimits

0x3178,	// (0x000199c4) field_cale_ev_pane_g3

0x0002,

0xf669,	// (0x00025eb5) field_cale_ev_pane_g_ParamLimits

0xf669,	// (0x00025eb5) field_cale_ev_pane_g

0x3190,	// (0x000199dc) field_cale_ev_pane_t1_ParamLimits

0x3190,	// (0x000199dc) field_cale_ev_pane_t1

0x0b7b,	// (0x000173c7) field_cale_ev_content_pane_t1_ParamLimits

0x0b7b,	// (0x000173c7) field_cale_ev_content_pane_t1

0x1944,	// (0x00018190) bg_button_pane_cp01

0x890e,	// (0x0001f15a) listscroll_cale_week_pane_ParamLimits

0x0bfb,	// (0x00017447) popup_toolbar_window_cp01

0x0c21,	// (0x0001746d) listscroll_cale_week_pane_t1_ParamLimits

0x890e,	// (0x0001f15a) listscroll_cale_day_pane_ParamLimits

0x0bfb,	// (0x00017447) popup_toolbar_window_cp02

0x104d,	// (0x00017899) listscroll_cale_day_pane_t1_ParamLimits

0x890e,	// (0x0001f15a) main_cale_month_pane_ParamLimits

0x762c,	// (0x0001de78) popup_toolbar_window_cp03_ParamLimits

0x762c,	// (0x0001de78) popup_toolbar_window_cp03

0xa759,	// (0x00020fa5) main_image_pane_g2_ParamLimits

0xa759,	// (0x00020fa5) main_image_pane_g2

0xa765,	// (0x00020fb1) main_image_pane_g3_ParamLimits

0xa765,	// (0x00020fb1) main_image_pane_g3

0x0002,

0xf461,	// (0x00025cad) main_image_pane_g_ParamLimits

0xf461,	// (0x00025cad) main_image_pane_g

0x1b22,	// (0x0001836e) main_image_pane_t1_ParamLimits

0xa771,	// (0x00020fbd) main_image_pane_t2_ParamLimits

0xa771,	// (0x00020fbd) main_image_pane_t2

0xa783,	// (0x00020fcf) main_image_pane_t3_ParamLimits

0xa783,	// (0x00020fcf) main_image_pane_t3

0xa795,	// (0x00020fe1) main_image_pane_t4_ParamLimits

0xa795,	// (0x00020fe1) main_image_pane_t4

0x0003,

0xf468,	// (0x00025cb4) main_image_pane_t_ParamLimits

0xf468,	// (0x00025cb4) main_image_pane_t

0xa7a7,	// (0x00020ff3) popup_image_details_window_cp01

0xa7b1,	// (0x00020ffd) popup_toobar_trans_pane_cp01_ParamLimits

0xa7b1,	// (0x00020ffd) popup_toobar_trans_pane_cp01

0x757c,	// (0x0001ddc8) popup_image_details_window_ParamLimits

0x757c,	// (0x0001ddc8) popup_image_details_window

0x758a,	// (0x0001ddd6) popup_image_focus_window

0x708e,	// (0x0001d8da) camera2_autofocus_pane_ParamLimits

0x708e,	// (0x0001d8da) camera2_autofocus_pane

0x0263,	// (0x00016aaf) bg_popup_sub_pane_cp06

0x31a7,	// (0x000199f3) popup_image_focus_window_g1

0x31af,	// (0x000199fb) popup_image_focus_window_g2

0x31b7,	// (0x00019a03) popup_image_focus_window_g3

0x31bf,	// (0x00019a0b) popup_image_focus_window_g4

0x0003,

0xf670,	// (0x00025ebc) popup_image_focus_window_g

0x31c7,	// (0x00019a13) popup_image_focus_window_t1

0x31d5,	// (0x00019a21) popup_image_focus_window_t2

0x31e5,	// (0x00019a31) popup_image_focus_window_t3

0x0002,

0xf679,	// (0x00025ec5) popup_image_focus_window_t

0x09c9,	// (0x00017215) camera2_autofocus_pane_g1

0x02d2,	// (0x00016b1e) bg_tb_trans_pane_cp01

0x31f3,	// (0x00019a3f) popup_image_details_window_g1

0x3206,	// (0x00019a52) popup_image_details_window_g2

0x0002,

0xf68b,	// (0x00025ed7) popup_image_details_window_g

0x322f,	// (0x00019a7b) popup_image_details_window_t1

0x3241,	// (0x00019a8d) popup_image_details_window_t2

0x325a,	// (0x00019aa6) popup_image_details_window_t3

0x326e,	// (0x00019aba) popup_image_details_window_t4

0x3289,	// (0x00019ad5) popup_image_details_window_t5

0x0004,

0xf692,	// (0x00025ede) popup_image_details_window_t

0x0a2f,	// (0x0001727b) bg_calc_paper_pane_ParamLimits

0x709c,	// (0x0001d8e8) grid_highlight_pane_cp013

0x717d,	// (0x0001d9c9) list_calc_pane_ParamLimits

0x718f,	// (0x0001d9db) scroll_pane_cp024

0x0a5d,	// (0x000172a9) bg_calc_display_pane_ParamLimits

0x7197,	// (0x0001d9e3) calc_display_pane_t1_ParamLimits

0x71ac,	// (0x0001d9f8) calc_display_pane_t2_ParamLimits

0x71c1,	// (0x0001da0d) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0002593e) calc_display_pane_t_ParamLimits

0x722a,	// (0x0001da76) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0002595b) cell_calc_pane_g

0x7233,	// (0x0001da7f) cell_calc_pane_t1

0x0ad6,	// (0x00017322) grid_highlight_pane_cp02_ParamLimits

0x0aec,	// (0x00017338) toolbar_button_pane_cp01_ParamLimits

0x0aec,	// (0x00017338) toolbar_button_pane_cp01

0x1b67,	// (0x000183b3) temp_image_control_pane_ParamLimits

0x1b67,	// (0x000183b3) temp_image_control_pane

0x74f4,	// (0x0001dd40) main_mp3_pane

0x32a3,	// (0x00019aef) temp_image_control_pane_g1_ParamLimits

0x32a3,	// (0x00019aef) temp_image_control_pane_g1

0x32b1,	// (0x00019afd) temp_image_control_pane_g2_ParamLimits

0x32b1,	// (0x00019afd) temp_image_control_pane_g2

0x32c3,	// (0x00019b0f) temp_image_control_pane_g3_ParamLimits

0x32c3,	// (0x00019b0f) temp_image_control_pane_g3

0xafa4,	// (0x000217f0) temp_image_control_pane_g4_ParamLimits

0xafa4,	// (0x000217f0) temp_image_control_pane_g4

0x0003,

0xf69d,	// (0x00025ee9) temp_image_control_pane_g_ParamLimits

0xf69d,	// (0x00025ee9) temp_image_control_pane_g

0x32a3,	// (0x00019aef) main_mp3_pane_g1

0xafb5,	// (0x00021801) main_mp3_pane_g2

0x0007,

0xf6a6,	// (0x00025ef2) main_mp3_pane_g

0x32f8,	// (0x00019b44) main_mp3_pane_t1

0x09d7,	// (0x00017223) main_camera_pane_g8_ParamLimits

0x09d7,	// (0x00017223) main_camera_pane_g8

0x8dda,	// (0x0001f626) main_video_pane_g7_ParamLimits

0x8dda,	// (0x0001f626) main_video_pane_g7

0x7699,	// (0x0001dee5) main_camera2_pane_t7_ParamLimits

0x7699,	// (0x0001dee5) main_camera2_pane_t7

0x0dea,	// (0x00017636) scroll_pane_cp025_ParamLimits

0x0dea,	// (0x00017636) scroll_pane_cp025

0x0dfe,	// (0x0001764a) scroll_pane_cp026_ParamLimits

0x0dfe,	// (0x0001764a) scroll_pane_cp026

0x0e0d,	// (0x00017659) wml_content_pane_ParamLimits

0x709c,	// (0x0001d8e8) main_touch_calib_pane

0xb059,	// (0x000218a5) main_touch_calib_pane_g1

0xb065,	// (0x000218b1) main_touch_calib_pane_g2

0xb071,	// (0x000218bd) main_touch_calib_pane_g3

0xb07d,	// (0x000218c9) main_touch_calib_pane_g4

0x0003,

0xf6c4,	// (0x00025f10) main_touch_calib_pane_g

0xb089,	// (0x000218d5) main_touch_calib_pane_t1

0xb0a2,	// (0x000218ee) main_touch_calib_pane_t2

0x0004,

0xf6cd,	// (0x00025f19) main_touch_calib_pane_t

0x1635,	// (0x00017e81) mup_progress_pane_cp02

0x166a,	// (0x00017eb6) navi_pane_g1

0x1725,	// (0x00017f71) navi_pane_mp_t3

0x74f4,	// (0x0001dd40) main_mp3_pane_ParamLimits

0xad25,	// (0x00021571) navi_pane_ParamLimits

0x32a3,	// (0x00019aef) main_mp3_pane_g1_ParamLimits

0xafb5,	// (0x00021801) main_mp3_pane_g2_ParamLimits

0xafc1,	// (0x0002180d) main_mp3_pane_g3_ParamLimits

0xafc1,	// (0x0002180d) main_mp3_pane_g3

0xafcd,	// (0x00021819) main_mp3_pane_g4_ParamLimits

0xafcd,	// (0x00021819) main_mp3_pane_g4

0x09c9,	// (0x00017215) main_mp3_pane_g5_ParamLimits

0x09c9,	// (0x00017215) main_mp3_pane_g5

0x32d3,	// (0x00019b1f) main_mp3_pane_g6_ParamLimits

0x32d3,	// (0x00019b1f) main_mp3_pane_g6

0x32e0,	// (0x00019b2c) main_mp3_pane_g7_ParamLimits

0x32e0,	// (0x00019b2c) main_mp3_pane_g7

0x32ec,	// (0x00019b38) main_mp3_pane_g8_ParamLimits

0x32ec,	// (0x00019b38) main_mp3_pane_g8

0xf6a6,	// (0x00025ef2) main_mp3_pane_g_ParamLimits

0xafd9,	// (0x00021825) main_mp3_pane_t2

0xafe9,	// (0x00021835) main_mp3_pane_t3

0x3306,	// (0x00019b52) main_mp3_pane_t4

0x3314,	// (0x00019b60) main_mp3_pane_t5

0x0005,

0xf6b7,	// (0x00025f03) main_mp3_pane_t

0x3322,	// (0x00019b6e) mup_progress_pane_cp01

0x6e53,	// (0x0001d69f) aid_zoom_text_secondary2

0x3116,	// (0x00019962) list_cale_ev2_pane

0x311e,	// (0x0001996a) scroll_pane_cp023_ParamLimits

0xb0fd,	// (0x00021949) field_cale_ev2_pane_ParamLimits

0xb0fd,	// (0x00021949) field_cale_ev2_pane

0xb126,	// (0x00021972) field_cale_ev2_pane_g1_ParamLimits

0xb126,	// (0x00021972) field_cale_ev2_pane_g1

0xb132,	// (0x0002197e) field_cale_ev2_pane_g2_ParamLimits

0xb132,	// (0x0002197e) field_cale_ev2_pane_g2

0xb14a,	// (0x00021996) field_cale_ev2_pane_g3_ParamLimits

0xb14a,	// (0x00021996) field_cale_ev2_pane_g3

0x0003,

0xf6d8,	// (0x00025f24) field_cale_ev2_pane_g_ParamLimits

0xf6d8,	// (0x00025f24) field_cale_ev2_pane_g

0xb162,	// (0x000219ae) field_cale_ev2_pane_t1_ParamLimits

0xb162,	// (0x000219ae) field_cale_ev2_pane_t1

0xb179,	// (0x000219c5) field_cale_ev2_pane_t2_ParamLimits

0xb179,	// (0x000219c5) field_cale_ev2_pane_t2

0x0001,

0xf6e1,	// (0x00025f2d) field_cale_ev2_pane_t_ParamLimits

0xf6e1,	// (0x00025f2d) field_cale_ev2_pane_t

0xa639,	// (0x00020e85) main_postcard_pane_g5_ParamLimits

0xa639,	// (0x00020e85) main_postcard_pane_g5

0xa647,	// (0x00020e93) main_postcard_pane_g6_ParamLimits

0xa647,	// (0x00020e93) main_postcard_pane_g6

0x09bb,	// (0x00017207) camera2_autofocus_pane_cp_ParamLimits

0x09bb,	// (0x00017207) camera2_autofocus_pane_cp

0x74f4,	// (0x0001dd40) main_mup3_pane

0xb1cd,	// (0x00021a19) main_mup3_pane_g1_ParamLimits

0xb1cd,	// (0x00021a19) main_mup3_pane_g1

0xb1ee,	// (0x00021a3a) main_mup3_pane_g2_ParamLimits

0xb1ee,	// (0x00021a3a) main_mup3_pane_g2

0xb266,	// (0x00021ab2) main_mup3_pane_g3_ParamLimits

0xb266,	// (0x00021ab2) main_mup3_pane_g3

0xb2a9,	// (0x00021af5) main_mup3_pane_g4_ParamLimits

0xb2a9,	// (0x00021af5) main_mup3_pane_g4

0xb2ec,	// (0x00021b38) main_mup3_pane_g5_ParamLimits

0xb2ec,	// (0x00021b38) main_mup3_pane_g5

0xb32f,	// (0x00021b7b) main_mup3_pane_g6_ParamLimits

0xb32f,	// (0x00021b7b) main_mup3_pane_g6

0x09d7,	// (0x00017223) main_mup3_pane_g7_ParamLimits

0x09d7,	// (0x00017223) main_mup3_pane_g7

0x0007,

0xf6f1,	// (0x00025f3d) main_mup3_pane_g_ParamLimits

0xf6f1,	// (0x00025f3d) main_mup3_pane_g

0xb3a5,	// (0x00021bf1) main_mup3_pane_t1_ParamLimits

0xb3a5,	// (0x00021bf1) main_mup3_pane_t1

0xb414,	// (0x00021c60) main_mup3_pane_t2_ParamLimits

0xb414,	// (0x00021c60) main_mup3_pane_t2

0xb4dd,	// (0x00021d29) main_mup3_pane_t4_ParamLimits

0xb4dd,	// (0x00021d29) main_mup3_pane_t4

0xb52b,	// (0x00021d77) main_mup3_pane_t5_ParamLimits

0xb52b,	// (0x00021d77) main_mup3_pane_t5

0xb5db,	// (0x00021e27) main_mup3_pane_t6_ParamLimits

0xb5db,	// (0x00021e27) main_mup3_pane_t6

0x0005,

0xf702,	// (0x00025f4e) main_mup3_pane_t_ParamLimits

0xf702,	// (0x00025f4e) main_mup3_pane_t

0xb687,	// (0x00021ed3) mup3_progress_pane_ParamLimits

0xb687,	// (0x00021ed3) mup3_progress_pane

0xb705,	// (0x00021f51) popup_mup3_control_window_ParamLimits

0xb705,	// (0x00021f51) popup_mup3_control_window

0x3336,	// (0x00019b82) popup_mup3_text_window

0xb71e,	// (0x00021f6a) mup3_progress_pane_t1

0xb73d,	// (0x00021f89) mup3_progress_pane_t2

0x333e,	// (0x00019b8a) mup3_progress_pane_t3

0x0002,

0xf70f,	// (0x00025f5b) mup3_progress_pane_t

0x335b,	// (0x00019ba7) mup_progress_pane_cp03

0x0263,	// (0x00016aaf) bg_tb_trans_pane_cp04

0xb75c,	// (0x00021fa8) mup3_volume_pane

0xb764,	// (0x00021fb0) popup_mup3_control_window_g1

0xb76d,	// (0x00021fb9) mup3_volume_pane_g1

0xb776,	// (0x00021fc2) mup3_volume_pane_g2

0xb77f,	// (0x00021fcb) mup3_volume_pane_g3

0x0002,

0xf716,	// (0x00025f62) mup3_volume_pane_g

0x0263,	// (0x00016aaf) bg_tb_trans_pane_cp03

0x336b,	// (0x00019bb7) popup_mup3_text_window_g1

0x3373,	// (0x00019bbf) popup_mup3_text_window_t1

0x0ab7,	// (0x00017303) list_calc_item_pane_g1_ParamLimits

0x2e10,	// (0x0001965c) mup_volume_pane_cp_g1

0xb0bb,	// (0x00021907) main_touch_calib_pane_t3

0xb0d1,	// (0x0002191d) main_touch_calib_pane_t4

0xb0e7,	// (0x00021933) main_touch_calib_pane_t5

0x6e0b,	// (0x0001d657) aid_cell_size_toolbar2

0x6e13,	// (0x0001d65f) aid_popup3_width_pane

0x6e53,	// (0x0001d69f) aid_zoom_text_msg_primary

0x8ce6,	// (0x0001f532) vorec_t7

0x0a7b,	// (0x000172c7) bg_calc_paper_pane_g1_ParamLimits

0x0a93,	// (0x000172df) bg_calc_paper_pane_g2_ParamLimits

0x0a87,	// (0x000172d3) bg_calc_paper_pane_g3_ParamLimits

0x0aab,	// (0x000172f7) bg_calc_paper_pane_g4_ParamLimits

0x0a9f,	// (0x000172eb) bg_calc_paper_pane_g5_ParamLimits

0x87b7,	// (0x0001f003) bg_calc_paper_pane_g6_ParamLimits

0x87c8,	// (0x0001f014) bg_calc_paper_pane_g7_ParamLimits

0x87d9,	// (0x0001f025) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00025945) bg_calc_paper_pane_g_ParamLimits

0x87ea,	// (0x0001f036) calc_bg_paper_pane_g9_ParamLimits

0x09bb,	// (0x00017207) image_qvga_pane_ParamLimits

0x09bb,	// (0x00017207) image_qvga_pane

0x094e,	// (0x0001719a) bg_popup_sub_pane_cp04_ParamLimits

0x1a9e,	// (0x000182ea) popup_mup_playback_window_g1_ParamLimits

0x1aaa,	// (0x000182f6) popup_mup_playback_window_t1_ParamLimits

0x1abf,	// (0x0001830b) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x00025ca8) popup_mup_playback_window_t_ParamLimits

0x09c9,	// (0x00017215) main_mup2_pane_g3_ParamLimits

0x09c9,	// (0x00017215) main_mup2_pane_g3

0x8fc1,	// (0x0001f80d) popup_toolbar_window_cp04

0x1ea1,	// (0x000186ed) popup_call2_audio_second_window_g3_ParamLimits

0x1ea1,	// (0x000186ed) popup_call2_audio_second_window_g3

0x22b9,	// (0x00018b05) popup_call2_audio_first_window_g4_ParamLimits

0x22b9,	// (0x00018b05) popup_call2_audio_first_window_g4

0x28e0,	// (0x0001912c) popup_call2_audio_in_window_g4_ParamLimits

0x28e0,	// (0x0001912c) popup_call2_audio_in_window_g4

0xa74c,	// (0x00020f98) aid_area_sk_bg_cut_ParamLimits

0xa74c,	// (0x00020f98) aid_area_sk_bg_cut

0x1ad4,	// (0x00018320) aid_area_sk_bg_cut_2_ParamLimits

0x1ad4,	// (0x00018320) aid_area_sk_bg_cut_2

0x0263,	// (0x00016aaf) aid_placing_details_win

0x0263,	// (0x00016aaf) aid_placing_details_win_2

0x09c9,	// (0x00017215) camera2_autofocus_pane_g1_ParamLimits

0x7034,	// (0x0001d880) popup_fixed_preview_cale_window_ParamLimits

0x7034,	// (0x0001d880) popup_fixed_preview_cale_window

0x17be,	// (0x0001800a) navi_slider_pane_g3

0x17b5,	// (0x00018001) navi_slider_pane_g4

0x17ac,	// (0x00017ff8) navi_slider_pane_g5

0x17be,	// (0x0001800a) navi_slider_pane_g6

0x746e,	// (0x0001dcba) navi_slider_pane_g7

0x1909,	// (0x00018155) mup_scale_pane_g3

0x1912,	// (0x0001815e) mup_scale_pane_g4

0x191b,	// (0x00018167) mup_scale_pane_g5

0xa4cd,	// (0x00020d19) mup_scale_pane_g6

0xa4d6,	// (0x00020d22) mup_scale_pane_g7

0x452e,	// (0x0001ad7a) cams2_slider_pane_g3

0x452e,	// (0x0001ad7a) cams2_slider_pane_g4

0x452e,	// (0x0001ad7a) cams2_slider_pane_g5

0x452e,	// (0x0001ad7a) cams2_slider_pane_g6

0x452e,	// (0x0001ad7a) cams2_slider_pane_g7

0x0ce2,	// (0x0001752e) camera2_autofocus_pane_cp_g1

0x2bb6,	// (0x00019402) bg_popup_preview_window_pane_cp02_ParamLimits

0x2bb6,	// (0x00019402) bg_popup_preview_window_pane_cp02

0x3381,	// (0x00019bcd) list_fp_cale_pane_ParamLimits

0x3381,	// (0x00019bcd) list_fp_cale_pane

0x338d,	// (0x00019bd9) popup_fixed_preview_cale_window_t1_ParamLimits

0x338d,	// (0x00019bd9) popup_fixed_preview_cale_window_t1

0xb788,	// (0x00021fd4) popup_fixed_preview_cale_window_t2_ParamLimits

0xb788,	// (0x00021fd4) popup_fixed_preview_cale_window_t2

0xb79d,	// (0x00021fe9) popup_fixed_preview_cale_window_t3_ParamLimits

0xb79d,	// (0x00021fe9) popup_fixed_preview_cale_window_t3

0x0002,

0xf71d,	// (0x00025f69) popup_fixed_preview_cale_window_t_ParamLimits

0xf71d,	// (0x00025f69) popup_fixed_preview_cale_window_t

0xb7b2,	// (0x00021ffe) list_single_fp_cale_pane_ParamLimits

0xb7b2,	// (0x00021ffe) list_single_fp_cale_pane

0x33ab,	// (0x00019bf7) list_single_fp_cale_pane_g1_ParamLimits

0x33ab,	// (0x00019bf7) list_single_fp_cale_pane_g1

0x33b7,	// (0x00019c03) list_single_fp_cale_pane_g2_ParamLimits

0x33b7,	// (0x00019c03) list_single_fp_cale_pane_g2

0x0002,

0xf724,	// (0x00025f70) list_single_fp_cale_pane_g_ParamLimits

0xf724,	// (0x00025f70) list_single_fp_cale_pane_g

0x33d0,	// (0x00019c1c) list_single_fp_cale_pane_t1_ParamLimits

0x33d0,	// (0x00019c1c) list_single_fp_cale_pane_t1

0x33e2,	// (0x00019c2e) list_single_fp_cale_pane_t2_ParamLimits

0x33e2,	// (0x00019c2e) list_single_fp_cale_pane_t2

0x0001,

0xf72b,	// (0x00025f77) list_single_fp_cale_pane_t_ParamLimits

0xf72b,	// (0x00025f77) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x709c,	// (0x0001d8e8) main_dialer_pane

0x0263,	// (0x00016aaf) aid_cell_size_keypad

0x0263,	// (0x00016aaf) dialer_ne_pane

0x0263,	// (0x00016aaf) grid_dialer_command_1_pane

0x0263,	// (0x00016aaf) grid_dialer_command_2_pane

0x0263,	// (0x00016aaf) grid_dialer_keypad_pane

0x2d37,	// (0x00019583) bg_popup_call_pane_cp06_ParamLimits

0x2d37,	// (0x00019583) bg_popup_call_pane_cp06

0x2d37,	// (0x00019583) dialer_ne_clear_pane_ParamLimits

0x2d37,	// (0x00019583) dialer_ne_clear_pane

0x0ce2,	// (0x0001752e) dialer_ne_pane_g1

0x1885,	// (0x000180d1) dialer_ne_pane_t1_ParamLimits

0x1885,	// (0x000180d1) dialer_ne_pane_t1

0x362e,	// (0x00019e7a) dialer_ne_pane_t2_ParamLimits

0x362e,	// (0x00019e7a) dialer_ne_pane_t2

0xb7c5,	// (0x00022011) dialer_ne_pane_t3_ParamLimits

0xb7c5,	// (0x00022011) dialer_ne_pane_t3

0x0002,

0xf730,	// (0x00025f7c) dialer_ne_pane_t_ParamLimits

0xf730,	// (0x00025f7c) dialer_ne_pane_t

0xb7c5,	// (0x00022011) dialer_ne_pane_t3_copy1_ParamLimits

0xb7c5,	// (0x00022011) dialer_ne_pane_t3_copy1

0x3415,	// (0x00019c61) cell_dialer_keypad_pane_ParamLimits

0x3415,	// (0x00019c61) cell_dialer_keypad_pane

0x02d2,	// (0x00016b1e) cell_dialer_command_1_pane_ParamLimits

0x02d2,	// (0x00016b1e) cell_dialer_command_1_pane

0x342c,	// (0x00019c78) cell_dialer_command_2_pane_ParamLimits

0x342c,	// (0x00019c78) cell_dialer_command_2_pane

0x02d2,	// (0x00016b1e) bg_button_pane_cp02_ParamLimits

0x02d2,	// (0x00016b1e) bg_button_pane_cp02

0x09c9,	// (0x00017215) cell_dialer_keypad_pane_g1_ParamLimits

0x09c9,	// (0x00017215) cell_dialer_keypad_pane_g1

0x02d2,	// (0x00016b1e) bg_button_pane_cp03_ParamLimits

0x02d2,	// (0x00016b1e) bg_button_pane_cp03

0x09c9,	// (0x00017215) cell_dialer_command_1_pane_g1_ParamLimits

0x09c9,	// (0x00017215) cell_dialer_command_1_pane_g1

0x0263,	// (0x00016aaf) bg_button_pane_cp04

0x0ce2,	// (0x0001752e) cell_dialer_command_2_pane_g1

0x0263,	// (0x00016aaf) bg_button_pane_cp06

0x0ce2,	// (0x0001752e) dialer_ne_clear_pane_g1

0x1676,	// (0x00017ec2) navi_pane_g2

0x16a4,	// (0x00017ef0) navi_pane_g3

0x0002,

0xf35f,	// (0x00025bab) navi_pane_g

0x1733,	// (0x00017f7f) navi_pane_mv_g2

0x175a,	// (0x00017fa6) navi_pane_mv_g5

0xa2a9,	// (0x00020af5) navi_pane_mv_t1

0x0a5d,	// (0x000172a9) main_clock2_pane

0x09bb,	// (0x00017207) main_clock2_list_pane_ParamLimits

0x09bb,	// (0x00017207) main_clock2_list_pane

0xb83b,	// (0x00022087) main_clock2_pane_t1_ParamLimits

0xb83b,	// (0x00022087) main_clock2_pane_t1

0xb869,	// (0x000220b5) main_clock2_pane_t2_ParamLimits

0xb869,	// (0x000220b5) main_clock2_pane_t2

0x0004,

0xf73c,	// (0x00025f88) main_clock2_pane_t_ParamLimits

0xf73c,	// (0x00025f88) main_clock2_pane_t

0xb8ce,	// (0x0002211a) popup_clock_analogue_window_cp03_ParamLimits

0xb8ce,	// (0x0002211a) popup_clock_analogue_window_cp03

0xb8ec,	// (0x00022138) popup_clock_digital_window_cp02_ParamLimits

0xb8ec,	// (0x00022138) popup_clock_digital_window_cp02

0xb92c,	// (0x00022178) main_clock2_list_single_pane_ParamLimits

0xb92c,	// (0x00022178) main_clock2_list_single_pane

0x0ca2,	// (0x000174ee) list_highlight_pane_cp05

0x3473,	// (0x00019cbf) main_clock2_list_single_pane_t1

0x8fc1,	// (0x0001f80d) popup_toolbar_window_cp04_ParamLimits

0x09d7,	// (0x00017223) camera2_autofocus_pane_g2_ParamLimits

0x09d7,	// (0x00017223) camera2_autofocus_pane_g2

0x09d7,	// (0x00017223) camera2_autofocus_pane_g3_ParamLimits

0x09d7,	// (0x00017223) camera2_autofocus_pane_g3

0x09d7,	// (0x00017223) camera2_autofocus_pane_g4_ParamLimits

0x09d7,	// (0x00017223) camera2_autofocus_pane_g4

0x09d7,	// (0x00017223) camera2_autofocus_pane_g5_ParamLimits

0x09d7,	// (0x00017223) camera2_autofocus_pane_g5

0x0004,

0xf680,	// (0x00025ecc) camera2_autofocus_pane_g_ParamLimits

0xf680,	// (0x00025ecc) camera2_autofocus_pane_g

0xb18e,	// (0x000219da) camera2_autofocus_pane_cp_g2

0xb196,	// (0x000219e2) camera2_autofocus_pane_cp_g3

0xb19e,	// (0x000219ea) camera2_autofocus_pane_cp_g4

0xb1a6,	// (0x000219f2) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e6,	// (0x00025f32) camera2_autofocus_pane_cp_g

0x0263,	// (0x00016aaf) popup_dialer_spcha_window

0x0263,	// (0x00016aaf) bg_popup_sub_pane_cp07

0x0263,	// (0x00016aaf) list_spcha_pane

0x3481,	// (0x00019ccd) list_single_spcha_pane_ParamLimits

0x3481,	// (0x00019ccd) list_single_spcha_pane

0x0263,	// (0x00016aaf) list_highlight_pane_cp06

0x1238,	// (0x00017a84) list_single_spcha_pane_t1

0x268a,	// (0x00018ed6) popup_call2_audio_out_window_g4_ParamLimits

0x268a,	// (0x00018ed6) popup_call2_audio_out_window_g4

0x709c,	// (0x0001d8e8) main_imed2_pane

0x7592,	// (0x0001ddde) popup_imed_adjust2_window

0x75a5,	// (0x0001ddf1) popup_imed_trans_window_ParamLimits

0x75a5,	// (0x0001ddf1) popup_imed_trans_window

0x2ee5,	// (0x00019731) popup_blid_sat_info2_window_t1

0x2ef3,	// (0x0001973f) popup_blid_sat_info2_window_t2

0x000a,

0xf615,	// (0x00025e61) popup_blid_sat_info2_window_t

0xb93e,	// (0x0002218a) aid_size_cell_colour_35

0xb958,	// (0x000221a4) aid_size_cell_colour_112

0xb96f,	// (0x000221bb) aid_size_cell_effect

0x02d2,	// (0x00016b1e) bg_tb_trans_pane_cp02

0x1205,	// (0x00017a51) heading_imed_pane

0xb989,	// (0x000221d5) listscroll_imed_pane

0x3493,	// (0x00019cdf) heading_imed_pane_g1

0x349b,	// (0x00019ce7) heading_imed_pane_t1

0x34a9,	// (0x00019cf5) grid_imed_colour_35_pane_ParamLimits

0x34a9,	// (0x00019cf5) grid_imed_colour_35_pane

0xb995,	// (0x000221e1) grid_imed_effect_pane

0x34c0,	// (0x00019d0c) list_imed_aspect_pane

0xb9a5,	// (0x000221f1) scroll_pane_cp027_ParamLimits

0xb9a5,	// (0x000221f1) scroll_pane_cp027

0xb9b1,	// (0x000221fd) cell_imed_effect_pane_ParamLimits

0xb9b1,	// (0x000221fd) cell_imed_effect_pane

0x34c8,	// (0x00019d14) cell_imed_colour_pane_ParamLimits

0x34c8,	// (0x00019d14) cell_imed_colour_pane

0x350a,	// (0x00019d56) cell_imed_colour_pane_g1_ParamLimits

0x350a,	// (0x00019d56) cell_imed_colour_pane_g1

0x351b,	// (0x00019d67) hgihlgiht_grid_pane_cp016_ParamLimits

0x351b,	// (0x00019d67) hgihlgiht_grid_pane_cp016

0xb9c9,	// (0x00022215) cell_imed_effect_pane_g1

0xb9d1,	// (0x0002221d) grid_highlight_pane_cp017

0x352c,	// (0x00019d78) list_imed_single_pane_ParamLimits

0x352c,	// (0x00019d78) list_imed_single_pane

0x0263,	// (0x00016aaf) list_highlight_pane_cp07

0x3541,	// (0x00019d8d) list_imed_aspect_pane_comp1_t1

0x1899,	// (0x000180e5) bg_tb_trans_pane_cp05

0x3563,	// (0x00019daf) popup_imed_adjust2_window_g1

0x358a,	// (0x00019dd6) popup_imed_adjust2_window_t1

0x35a2,	// (0x00019dee) slider_imed_adjust_pane

0x35b6,	// (0x00019e02) slider_imed_adjust_pane_g1

0x35c6,	// (0x00019e12) slider_imed_adjust_pane_g2

0x35d6,	// (0x00019e22) slider_imed_adjust_pane_g3

0x35e7,	// (0x00019e33) slider_imed_adjust_pane_g4

0x0003,

0xf759,	// (0x00025fa5) slider_imed_adjust_pane_g

0xb9da,	// (0x00022226) aid_size_cell_clipart2

0xb9e6,	// (0x00022232) grid_imed_clipart_pane

0x35f8,	// (0x00019e44) scroll_pane_cp031

0xb9f0,	// (0x0002223c) cell_imed_clipart_pane_ParamLimits

0xb9f0,	// (0x0002223c) cell_imed_clipart_pane

0xba12,	// (0x0002225e) cell_imed_clipart_pane_g1

0x0263,	// (0x00016aaf) grid_highlight_pane_cp014

0xb81d,	// (0x00022069) main_clock2_pane_g1_ParamLimits

0xb81d,	// (0x00022069) main_clock2_pane_g1

0xb908,	// (0x00022154) aid_call2_pane_cp10

0xb91a,	// (0x00022166) aid_call_pane_cp10

0x15d7,	// (0x00017e23) popup_clock_analogue_window_cp10_g1

0x15d7,	// (0x00017e23) popup_clock_analogue_window_cp10_g2

0x771d,	// (0x0001df69) popup_clock_analogue_window_cp10_g3

0x771d,	// (0x0001df69) popup_clock_analogue_window_cp10_g4

0x15d7,	// (0x00017e23) popup_clock_analogue_window_cp10_g5

0x0004,

0xf747,	// (0x00025f93) popup_clock_analogue_window_cp10_g

0x7733,	// (0x0001df7f) popup_clock_analogue_window_cp10_t1

0x7752,	// (0x0001df9e) clock_digital_number_pane_cp10_ParamLimits

0x7752,	// (0x0001df9e) clock_digital_number_pane_cp10

0x776c,	// (0x0001dfb8) clock_digital_number_pane_cp11_ParamLimits

0x776c,	// (0x0001dfb8) clock_digital_number_pane_cp11

0x7786,	// (0x0001dfd2) clock_digital_number_pane_cp12_ParamLimits

0x7786,	// (0x0001dfd2) clock_digital_number_pane_cp12

0x77a0,	// (0x0001dfec) clock_digital_number_pane_cp13_ParamLimits

0x77a0,	// (0x0001dfec) clock_digital_number_pane_cp13

0x77ba,	// (0x0001e006) clock_digital_separator_pane_cp10_ParamLimits

0x77ba,	// (0x0001e006) clock_digital_separator_pane_cp10

0x77d4,	// (0x0001e020) popup_clock_digital_window_cp02_t1_ParamLimits

0x77d4,	// (0x0001e020) popup_clock_digital_window_cp02_t1

0x0946,	// (0x00017192) clock_digital_number_pane_cp10_g1

0x0946,	// (0x00017192) clock_digital_number_pane_cp10_g2

0x0001,

0xf762,	// (0x00025fae) clock_digital_number_pane_cp10_g

0x0946,	// (0x00017192) clock_digital_separator_pane_cp10_g1

0x0946,	// (0x00017192) clock_digital_separator_pane_g2_cp10

0x1762,	// (0x00017fae) navi_pane_vded_g4

0x176b,	// (0x00017fb7) navi_pane_vded_g5

0x1774,	// (0x00017fc0) navi_pane_vded_t1

0x709c,	// (0x0001d8e8) main_vded_pane

0xba1b,	// (0x00022267) main_vded_pane_g1

0xba27,	// (0x00022273) main_vded_pane_g2

0xba31,	// (0x0002227d) main_vded_pane_g3

0x0002,

0xf767,	// (0x00025fb3) main_vded_pane_g

0xba3b,	// (0x00022287) main_vded_pane_t1

0xba49,	// (0x00022295) main_vded_pane_t2

0x0001,

0xf76e,	// (0x00025fba) main_vded_pane_t

0xba57,	// (0x000222a3) vded_slider_pane

0xba61,	// (0x000222ad) vded_video_pane

0x3600,	// (0x00019e4c) vded_video_pane_g1

0xba6b,	// (0x000222b7) vded_video_pane_g2

0x0ce2,	// (0x0001752e) vded_video_pane_g3

0x0002,

0xf773,	// (0x00025fbf) vded_video_pane_g

0x360a,	// (0x00019e56) vded_slider_pane_g1

0x2e10,	// (0x0001965c) vded_slider_pane_g2

0x3613,	// (0x00019e5f) vded_slider_pane_g3

0x361c,	// (0x00019e68) vded_slider_pane_g4

0x3625,	// (0x00019e71) vded_slider_pane_g5

0x0004,

0xf77a,	// (0x00025fc6) vded_slider_pane_g

0xb6f7,	// (0x00021f43) mup3_rocker_pane_ParamLimits

0xb6f7,	// (0x00021f43) mup3_rocker_pane

0xba74,	// (0x000222c0) mup3_control_keys_pane_g1

0xba7c,	// (0x000222c8) mup3_control_keys_pane_g2

0xba84,	// (0x000222d0) mup3_control_keys_pane_g3

0xba8c,	// (0x000222d8) mup3_control_keys_pane_g4

0x0003,

0xf785,	// (0x00025fd1) mup3_control_keys_pane_g

0x705c,	// (0x0001d8a8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x705c,	// (0x0001d8a8) popup_toolbar2_fixed_window_cp01

0xb711,	// (0x00021f5d) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb711,	// (0x00021f5d) popup_toolbar2_fixed_window_cp02

0x2013,	// (0x0001885f) popup_call2_audio_second_window_t4_ParamLimits

0x2013,	// (0x0001885f) popup_call2_audio_second_window_t4

0x254f,	// (0x00018d9b) popup_call2_audio_first_window_t6_ParamLimits

0x254f,	// (0x00018d9b) popup_call2_audio_first_window_t6

0x278d,	// (0x00018fd9) popup_call2_audio_out_window_t6_ParamLimits

0x278d,	// (0x00018fd9) popup_call2_audio_out_window_t6

0x709c,	// (0x0001d8e8) main_vitu_pane

0x09bb,	// (0x00017207) aid_size_cell_itu_ParamLimits

0x09bb,	// (0x00017207) aid_size_cell_itu

0x09bb,	// (0x00017207) bg_popup_window_pane_cp08_ParamLimits

0x09bb,	// (0x00017207) bg_popup_window_pane_cp08

0x09bb,	// (0x00017207) field_vitu_entry_pane_ParamLimits

0x09bb,	// (0x00017207) field_vitu_entry_pane

0x09bb,	// (0x00017207) grid_vitu_function_pane_ParamLimits

0x09bb,	// (0x00017207) grid_vitu_function_pane

0x09bb,	// (0x00017207) grid_vitu_itu_pane_ParamLimits

0x09bb,	// (0x00017207) grid_vitu_itu_pane

0x09bb,	// (0x00017207) cell_vitu_itu_pane_ParamLimits

0x09bb,	// (0x00017207) cell_vitu_itu_pane

0x09bb,	// (0x00017207) cell_vitu_function_pane_ParamLimits

0x09bb,	// (0x00017207) cell_vitu_function_pane

0x02d2,	// (0x00016b1e) bg_popup_sub_pane_cp08_ParamLimits

0x02d2,	// (0x00016b1e) bg_popup_sub_pane_cp08

0x0cb4,	// (0x00017500) field_vitu_entry_pane_t1_ParamLimits

0x0cb4,	// (0x00017500) field_vitu_entry_pane_t1

0x362e,	// (0x00019e7a) field_vitu_entry_pane_t2_ParamLimits

0x362e,	// (0x00019e7a) field_vitu_entry_pane_t2

0x0001,

0xf78e,	// (0x00025fda) field_vitu_entry_pane_t_ParamLimits

0xf78e,	// (0x00025fda) field_vitu_entry_pane_t

0x2d37,	// (0x00019583) bg_button_pane_cp05_ParamLimits

0x2d37,	// (0x00019583) bg_button_pane_cp05

0x364b,	// (0x00019e97) cell_vitu_itu_pane_g1

0x1871,	// (0x000180bd) cell_vitu_itu_pane_t1_ParamLimits

0x1871,	// (0x000180bd) cell_vitu_itu_pane_t1

0x1871,	// (0x000180bd) cell_vitu_itu_pane_t2_ParamLimits

0x1871,	// (0x000180bd) cell_vitu_itu_pane_t2

0x0002,

0xf793,	// (0x00025fdf) cell_vitu_itu_pane_t_ParamLimits

0xf793,	// (0x00025fdf) cell_vitu_itu_pane_t

0x0263,	// (0x00016aaf) bg_button_pane_cp07

0x0ce2,	// (0x0001752e) cell_vitu_function_pane_g1

0x7175,	// (0x0001d9c1) main_calc_pane_g1

0x6e47,	// (0x0001d693) aid_visual_content_pane

0x709c,	// (0x0001d8e8) main_vradio_pane

0x09d7,	// (0x00017223) main_vradio_pane_g1_ParamLimits

0x09d7,	// (0x00017223) main_vradio_pane_g1

0x09d7,	// (0x00017223) main_vradio_pane_g2_ParamLimits

0x09d7,	// (0x00017223) main_vradio_pane_g2

0x0001,

0xf79a,	// (0x00025fe6) main_vradio_pane_g_ParamLimits

0xf79a,	// (0x00025fe6) main_vradio_pane_g

0x1885,	// (0x000180d1) main_vradio_pane_t1_ParamLimits

0x1885,	// (0x000180d1) main_vradio_pane_t1

0x1885,	// (0x000180d1) main_vradio_pane_t2_ParamLimits

0x1885,	// (0x000180d1) main_vradio_pane_t2

0x1885,	// (0x000180d1) main_vradio_pane_t3_ParamLimits

0x1885,	// (0x000180d1) main_vradio_pane_t3

0x0002,

0xf79f,	// (0x00025feb) main_vradio_pane_t_ParamLimits

0xf79f,	// (0x00025feb) main_vradio_pane_t

0x09bb,	// (0x00017207) vradio_rocker_control_pane_ParamLimits

0x09bb,	// (0x00017207) vradio_rocker_control_pane

0x09bb,	// (0x00017207) vradio_station_info_pane_ParamLimits

0x09bb,	// (0x00017207) vradio_station_info_pane

0x02d2,	// (0x00016b1e) vradio_frequency_info_pane_ParamLimits

0x02d2,	// (0x00016b1e) vradio_frequency_info_pane

0x0ce2,	// (0x0001752e) vradio_station_info_pane_g1

0x1871,	// (0x000180bd) vradio_station_info_pane_t1_ParamLimits

0x1871,	// (0x000180bd) vradio_station_info_pane_t1

0x1885,	// (0x000180d1) vradio_station_info_pane_t2_ParamLimits

0x1885,	// (0x000180d1) vradio_station_info_pane_t2

0x0001,

0xf7a6,	// (0x00025ff2) vradio_station_info_pane_t_ParamLimits

0xf7a6,	// (0x00025ff2) vradio_station_info_pane_t

0x0263,	// (0x00016aaf) vradio_tuning_pane

0xba9c,	// (0x000222e8) vradio_rocker_control_pane_g1

0x3667,	// (0x00019eb3) vradio_rocker_control_pane_g2

0xbaa4,	// (0x000222f0) vradio_rocker_control_pane_g3

0xbaac,	// (0x000222f8) vradio_rocker_control_pane_g4

0xbab4,	// (0x00022300) vradio_rocker_control_pane_g5

0x0004,

0xf7ab,	// (0x00025ff7) vradio_rocker_control_pane_g

0x0ce2,	// (0x0001752e) vradio_frequency_info_pane_g1

0x0cb4,	// (0x00017500) vradio_frequency_info_pane_t1_ParamLimits

0x0cb4,	// (0x00017500) vradio_frequency_info_pane_t1

0xbabc,	// (0x00022308) vradio_tuning_pane_g1

0xbac9,	// (0x00022315) vradio_tuning_pane_t1

0x6e63,	// (0x0001d6af) area_side_right_pane_ParamLimits

0x6e63,	// (0x0001d6af) area_side_right_pane

0x2b7d,	// (0x000193c9) status_small_pane_g1

0x2b85,	// (0x000193d1) status_small_pane_g2

0x2b8e,	// (0x000193da) status_small_pane_g3

0x2b97,	// (0x000193e3) status_small_pane_g4

0x0003,

0xf577,	// (0x00025dc3) status_small_pane_g

0x2ba0,	// (0x000193ec) status_small_pane_t1

0x709c,	// (0x0001d8e8) main_video3_pane

0x366f,	// (0x00019ebb) cams_zoom_vslider_pane

0x3677,	// (0x00019ec3) image3_wide_pane_ParamLimits

0x3677,	// (0x00019ec3) image3_wide_pane

0x3691,	// (0x00019edd) image3_wide_small_pane

0x369d,	// (0x00019ee9) main_video3_pane_g1_ParamLimits

0x369d,	// (0x00019ee9) main_video3_pane_g1

0x36b9,	// (0x00019f05) main_video3_pane_g2_ParamLimits

0x36b9,	// (0x00019f05) main_video3_pane_g2

0x0001,

0xf7b6,	// (0x00026002) main_video3_pane_g_ParamLimits

0xf7b6,	// (0x00026002) main_video3_pane_g

0x36d5,	// (0x00019f21) main_video3_pane_t1_ParamLimits

0x36d5,	// (0x00019f21) main_video3_pane_t1

0x3700,	// (0x00019f4c) main_video3_pane_t2_ParamLimits

0x3700,	// (0x00019f4c) main_video3_pane_t2

0x372b,	// (0x00019f77) main_video3_pane_t3_ParamLimits

0x372b,	// (0x00019f77) main_video3_pane_t3

0x0002,

0xf7bb,	// (0x00026007) main_video3_pane_t_ParamLimits

0xf7bb,	// (0x00026007) main_video3_pane_t

0x3758,	// (0x00019fa4) cams_zoom_vslider_pane_g1

0x3761,	// (0x00019fad) cams_zoom_vslider_pane_g2

0x0001,

0xf7c2,	// (0x0002600e) cams_zoom_vslider_pane_g

0x3769,	// (0x00019fb5) small_slider_vertical_pane

0x0ce2,	// (0x0001752e) small_slider_vertical_pane_g1

0x0ce2,	// (0x0001752e) small_slider_vertical_pane_g2

0x3771,	// (0x00019fbd) small_slider_vertical_pane_g3

0x0002,

0xf7c7,	// (0x00026013) small_slider_vertical_pane_g

0x709c,	// (0x0001d8e8) main_hwr_training_pane

0x377a,	// (0x00019fc6) hwr_training_instruct_pane_ParamLimits

0x377a,	// (0x00019fc6) hwr_training_instruct_pane

0xbad8,	// (0x00022324) hwr_training_navi_pane_ParamLimits

0xbad8,	// (0x00022324) hwr_training_navi_pane

0xbaf2,	// (0x0002233e) hwr_training_write_pane_ParamLimits

0xbaf2,	// (0x0002233e) hwr_training_write_pane

0x0263,	// (0x00016aaf) bg_frame_shadow_pane

0x37b1,	// (0x00019ffd) hwr_training_write_pane_g1

0x37b9,	// (0x0001a005) hwr_training_write_pane_g2

0x37c1,	// (0x0001a00d) hwr_training_write_pane_g3

0x37c9,	// (0x0001a015) hwr_training_write_pane_g4

0x37d1,	// (0x0001a01d) hwr_training_write_pane_g5

0x37d9,	// (0x0001a025) hwr_training_write_pane_g6

0x37e1,	// (0x0001a02d) hwr_training_write_pane_g7

0x0006,

0xf7ce,	// (0x0002601a) hwr_training_write_pane_g

0x77f5,	// (0x0001e041) hwr_training_navi_pane_g1_ParamLimits

0x77f5,	// (0x0001e041) hwr_training_navi_pane_g1

0x7807,	// (0x0001e053) hwr_training_navi_pane_g2_ParamLimits

0x7807,	// (0x0001e053) hwr_training_navi_pane_g2

0x7819,	// (0x0001e065) hwr_training_navi_pane_g3_ParamLimits

0x7819,	// (0x0001e065) hwr_training_navi_pane_g3

0x7829,	// (0x0001e075) hwr_training_navi_pane_g4_ParamLimits

0x7829,	// (0x0001e075) hwr_training_navi_pane_g4

0x0004,

0xf7dd,	// (0x00026029) hwr_training_navi_pane_g_ParamLimits

0xf7dd,	// (0x00026029) hwr_training_navi_pane_g

0x7843,	// (0x0001e08f) hwr_training_navi_pane_t1

0xbb2a,	// (0x00022376) list_single_hwr_training_instruct_pane_ParamLimits

0xbb2a,	// (0x00022376) list_single_hwr_training_instruct_pane

0x3838,	// (0x0001a084) list_single_hwr_training_instruct_pane_t1

0x2fe6,	// (0x00019832) bg_frame_shadow_pane_g1

0x3847,	// (0x0001a093) bg_frame_shadow_pane_g2

0x384f,	// (0x0001a09b) bg_frame_shadow_pane_g3

0x3857,	// (0x0001a0a3) bg_frame_shadow_pane_g4

0x385f,	// (0x0001a0ab) bg_frame_shadow_pane_g5

0x3867,	// (0x0001a0b3) bg_frame_shadow_pane_g6

0x386f,	// (0x0001a0bb) bg_frame_shadow_pane_g7

0x0b39,	// (0x00017385) bg_frame_shadow_pane_g8

0x0007,

0xf7e8,	// (0x00026034) bg_frame_shadow_pane_g

0x709c,	// (0x0001d8e8) main_video_tele_dialer_pane

0x7851,	// (0x0001e09d) aid_size_cell_video_keypad_ParamLimits

0x7851,	// (0x0001e09d) aid_size_cell_video_keypad

0x7861,	// (0x0001e0ad) grid_video_dialer_keypad_pane_ParamLimits

0x7861,	// (0x0001e0ad) grid_video_dialer_keypad_pane

0x7895,	// (0x0001e0e1) video_down_pane_cp_ParamLimits

0x7895,	// (0x0001e0e1) video_down_pane_cp

0x78a3,	// (0x0001e0ef) cell_video_dialer_keypad_pane_ParamLimits

0x78a3,	// (0x0001e0ef) cell_video_dialer_keypad_pane

0x3877,	// (0x0001a0c3) bg_button_pane_cp08_ParamLimits

0x3877,	// (0x0001a0c3) bg_button_pane_cp08

0xbb6b,	// (0x000223b7) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbb6b,	// (0x000223b7) cell_video_dialer_keypad_pane_g1

0xb6eb,	// (0x00021f37) mup3_rocker2_pane_ParamLimits

0xb6eb,	// (0x00021f37) mup3_rocker2_pane

0x0ce2,	// (0x0001752e) mup3_rocker2_pane_g1

0x7502,	// (0x0001dd4e) main_dialer2_pane

0x709c,	// (0x0001d8e8) main_mp4_pane

0x78d6,	// (0x0001e122) main_mp4_pane_g1_ParamLimits

0x78d6,	// (0x0001e122) main_mp4_pane_g1

0x78e4,	// (0x0001e130) main_mp4_pane_g2_ParamLimits

0x78e4,	// (0x0001e130) main_mp4_pane_g2

0x78f2,	// (0x0001e13e) main_mp4_pane_g3_ParamLimits

0x78f2,	// (0x0001e13e) main_mp4_pane_g3

0x7937,	// (0x0001e183) main_mp4_pane_g4_ParamLimits

0x7937,	// (0x0001e183) main_mp4_pane_g4

0x7965,	// (0x0001e1b1) main_mp4_pane_g5_ParamLimits

0x7965,	// (0x0001e1b1) main_mp4_pane_g5

0x0007,

0xf808,	// (0x00026054) main_mp4_pane_g_ParamLimits

0xf808,	// (0x00026054) main_mp4_pane_g

0x79d9,	// (0x0001e225) main_mp4_pane_t1_ParamLimits

0x79d9,	// (0x0001e225) main_mp4_pane_t1

0x7a35,	// (0x0001e281) main_mp4_pane_t2_ParamLimits

0x7a35,	// (0x0001e281) main_mp4_pane_t2

0x39ff,	// (0x0001a24b) main_mp4_pane_t3_ParamLimits

0x39ff,	// (0x0001a24b) main_mp4_pane_t3

0x7a87,	// (0x0001e2d3) main_mp4_pane_t4_ParamLimits

0x7a87,	// (0x0001e2d3) main_mp4_pane_t4

0x0003,

0xf819,	// (0x00026065) main_mp4_pane_t_ParamLimits

0xf819,	// (0x00026065) main_mp4_pane_t

0x7acb,	// (0x0001e317) mp4_progress_pane_ParamLimits

0x7acb,	// (0x0001e317) mp4_progress_pane

0x7b15,	// (0x0001e361) mp4_rocker_pane_ParamLimits

0x7b15,	// (0x0001e361) mp4_rocker_pane

0x3adb,	// (0x0001a327) mp4_progress_pane_t1

0x3af4,	// (0x0001a340) mp4_progress_pane_t2

0x0001,

0xf822,	// (0x0002606e) mp4_progress_pane_t

0x3b0d,	// (0x0001a359) mup_progress_pane_cp04

0x452e,	// (0x0001ad7a) mp4_rocker_pane_g1

0x7b35,	// (0x0001e381) aid_cell_size_keypad2_ParamLimits

0x7b35,	// (0x0001e381) aid_cell_size_keypad2

0x7b45,	// (0x0001e391) dialer2_ne_pane_ParamLimits

0x7b45,	// (0x0001e391) dialer2_ne_pane

0x7b53,	// (0x0001e39f) grid_dialer2_keypad_pane_ParamLimits

0x7b53,	// (0x0001e39f) grid_dialer2_keypad_pane

0x2d29,	// (0x00019575) bg_popup_call_pane_cp07_ParamLimits

0x2d29,	// (0x00019575) bg_popup_call_pane_cp07

0xbba2,	// (0x000223ee) dialer2_ne_pane_t1_ParamLimits

0xbba2,	// (0x000223ee) dialer2_ne_pane_t1

0x7b63,	// (0x0001e3af) cell_dialer2_keypad_pane_ParamLimits

0x7b63,	// (0x0001e3af) cell_dialer2_keypad_pane

0x3b32,	// (0x0001a37e) bg_button_pane_pane_cp04_ParamLimits

0x3b32,	// (0x0001a37e) bg_button_pane_pane_cp04

0xbbc7,	// (0x00022413) cell_dialer2_keypad_pane_g1_ParamLimits

0xbbc7,	// (0x00022413) cell_dialer2_keypad_pane_g1

0x8e83,	// (0x0001f6cf) aid_placing_vt_set_content_ParamLimits

0x8e83,	// (0x0001f6cf) aid_placing_vt_set_content

0x8eaf,	// (0x0001f6fb) aid_placing_vt_set_title_ParamLimits

0x8eaf,	// (0x0001f6fb) aid_placing_vt_set_title

0x709c,	// (0x0001d8e8) main_image3_pane

0x7baa,	// (0x0001e3f6) area_side_right_pane_cp01_ParamLimits

0x7baa,	// (0x0001e3f6) area_side_right_pane_cp01

0x7bd7,	// (0x0001e423) main_image3_pane_g1_ParamLimits

0x7bd7,	// (0x0001e423) main_image3_pane_g1

0x7be5,	// (0x0001e431) main_image3_pane_g2_ParamLimits

0x7be5,	// (0x0001e431) main_image3_pane_g2

0x7bfe,	// (0x0001e44a) main_image3_pane_g3_ParamLimits

0x7bfe,	// (0x0001e44a) main_image3_pane_g3

0x7c17,	// (0x0001e463) main_image3_pane_g4_ParamLimits

0x7c17,	// (0x0001e463) main_image3_pane_g4

0x0003,

0xf831,	// (0x0002607d) main_image3_pane_g_ParamLimits

0xf831,	// (0x0002607d) main_image3_pane_g

0x7c30,	// (0x0001e47c) main_image3_pane_t1_ParamLimits

0x7c30,	// (0x0001e47c) main_image3_pane_t1

0x7c55,	// (0x0001e4a1) main_image3_pane_t2_ParamLimits

0x7c55,	// (0x0001e4a1) main_image3_pane_t2

0x7c74,	// (0x0001e4c0) main_image3_pane_t3_ParamLimits

0x7c74,	// (0x0001e4c0) main_image3_pane_t3

0x0003,

0xf83a,	// (0x00026086) main_image3_pane_t_ParamLimits

0xf83a,	// (0x00026086) main_image3_pane_t

0x09bb,	// (0x00017207) grid_sctrl_middle_pane_cp01_ParamLimits

0x09bb,	// (0x00017207) grid_sctrl_middle_pane_cp01

0xbc2f,	// (0x0002247b) cell_sctrl_middle_pane_cp01_ParamLimits

0xbc2f,	// (0x0002247b) cell_sctrl_middle_pane_cp01

0xbc40,	// (0x0002248c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbc40,	// (0x0002248c) cell_sctrl_middle_pane_cp01_g1

0x709c,	// (0x0001d8e8) main_call4_pane

0x7cd5,	// (0x0001e521) aid_size_button_call4_ParamLimits

0x7cd5,	// (0x0001e521) aid_size_button_call4

0x7d0b,	// (0x0001e557) call4_windows_pane_ParamLimits

0x7d0b,	// (0x0001e557) call4_windows_pane

0x7d20,	// (0x0001e56c) grid_call4_button_pane_ParamLimits

0x7d20,	// (0x0001e56c) grid_call4_button_pane

0xbc59,	// (0x000224a5) call4_windows_conf_pane

0xbc70,	// (0x000224bc) popup_call4_audio_first_window_ParamLimits

0xbc70,	// (0x000224bc) popup_call4_audio_first_window

0xbcc0,	// (0x0002250c) popup_call4_audio_second_window_ParamLimits

0xbcc0,	// (0x0002250c) popup_call4_audio_second_window

0xbcd9,	// (0x00022525) popup_call4_audio_wait_window_ParamLimits

0xbcd9,	// (0x00022525) popup_call4_audio_wait_window

0x7d42,	// (0x0001e58e) cell_call4_button_pane_ParamLimits

0x7d42,	// (0x0001e58e) cell_call4_button_pane

0xbce7,	// (0x00022533) bg_button_pane_cp09_ParamLimits

0xbce7,	// (0x00022533) bg_button_pane_cp09

0x7d65,	// (0x0001e5b1) cell_call4_button_pane_g1_ParamLimits

0x7d65,	// (0x0001e5b1) cell_call4_button_pane_g1

0xbcf3,	// (0x0002253f) cell_call4_button_pane_t1_ParamLimits

0xbcf3,	// (0x0002253f) cell_call4_button_pane_t1

0x3baa,	// (0x0001a3f6) popup_call4_audio_conf_window_ParamLimits

0x3baa,	// (0x0001a3f6) popup_call4_audio_conf_window

0xb71e,	// (0x00021f6a) mup3_progress_pane_t1_ParamLimits

0xb73d,	// (0x00021f89) mup3_progress_pane_t2_ParamLimits

0x333e,	// (0x00019b8a) mup3_progress_pane_t3_ParamLimits

0xf70f,	// (0x00025f5b) mup3_progress_pane_t_ParamLimits

0x335b,	// (0x00019ba7) mup_progress_pane_cp03_ParamLimits

0xba94,	// (0x000222e0) mup3_control_keys_pane_g4_copy1

0x7af9,	// (0x0001e345) mp4_rocker2_pane_ParamLimits

0x7af9,	// (0x0001e345) mp4_rocker2_pane

0x3bc6,	// (0x0001a412) mp4_rocker2_pane_g1

0x3bbe,	// (0x0001a40a) mp4_rocker2_pane_g2

0x7da4,	// (0x0001e5f0) mp4_rocker2_pane_g3

0x7dac,	// (0x0001e5f8) mp4_rocker2_pane_g4

0x7db4,	// (0x0001e600) mp4_rocker2_pane_g5

0x0004,

0xf843,	// (0x0002608f) mp4_rocker2_pane_g

0x709c,	// (0x0001d8e8) main_camera4_pane

0x709c,	// (0x0001d8e8) main_video4_pane

0x7871,	// (0x0001e0bd) main_video_tele_dialer_pane_t1_ParamLimits

0x7871,	// (0x0001e0bd) main_video_tele_dialer_pane_t1

0x7883,	// (0x0001e0cf) main_video_tele_dialer_pane_t2_ParamLimits

0x7883,	// (0x0001e0cf) main_video_tele_dialer_pane_t2

0x0001,

0xf7f9,	// (0x00026045) main_video_tele_dialer_pane_t_ParamLimits

0xf7f9,	// (0x00026045) main_video_tele_dialer_pane_t

0x7dd4,	// (0x0001e620) cam4_autofocus_pane_ParamLimits

0x7dd4,	// (0x0001e620) cam4_autofocus_pane

0x7dee,	// (0x0001e63a) cam4_image_uncrop_pane_ParamLimits

0x7dee,	// (0x0001e63a) cam4_image_uncrop_pane

0x7e05,	// (0x0001e651) cam4_indicators_pane_ParamLimits

0x7e05,	// (0x0001e651) cam4_indicators_pane

0x7e21,	// (0x0001e66d) main_camera4_pane_g1_ParamLimits

0x7e21,	// (0x0001e66d) main_camera4_pane_g1

0x7e2d,	// (0x0001e679) main_camera4_pane_g2_ParamLimits

0x7e2d,	// (0x0001e679) main_camera4_pane_g2

0x7e2d,	// (0x0001e679) main_camera4_pane_g3_ParamLimits

0x7e2d,	// (0x0001e679) main_camera4_pane_g3

0x7e39,	// (0x0001e685) main_camera4_pane_g4_ParamLimits

0x7e39,	// (0x0001e685) main_camera4_pane_g4

0x7e45,	// (0x0001e691) main_camera4_pane_g5_ParamLimits

0x7e45,	// (0x0001e691) main_camera4_pane_g5

0x0005,

0xf84e,	// (0x0002609a) main_camera4_pane_g_ParamLimits

0xf84e,	// (0x0002609a) main_camera4_pane_g

0x7e5f,	// (0x0001e6ab) main_camera4_pane_t1_ParamLimits

0x7e5f,	// (0x0001e6ab) main_camera4_pane_t1

0x5138,	// (0x0001b984) bg_tb_trans_pane_cp06

0x7e8b,	// (0x0001e6d7) cam4_indicators_pane_g1

0x7e9c,	// (0x0001e6e8) cam4_indicators_pane_g2

0x0002,

0xf869,	// (0x000260b5) cam4_indicators_pane_g

0x7eba,	// (0x0001e706) cam4_indicators_pane_t1

0x7ee4,	// (0x0001e730) main_video4_pane_g1_ParamLimits

0x7ee4,	// (0x0001e730) main_video4_pane_g1

0x7ef0,	// (0x0001e73c) main_video4_pane_g2_ParamLimits

0x7ef0,	// (0x0001e73c) main_video4_pane_g2

0x7efc,	// (0x0001e748) main_video4_pane_g3_ParamLimits

0x7efc,	// (0x0001e748) main_video4_pane_g3

0x7f08,	// (0x0001e754) main_video4_pane_g4_ParamLimits

0x7f08,	// (0x0001e754) main_video4_pane_g4

0x0004,

0xf870,	// (0x000260bc) main_video4_pane_g_ParamLimits

0xf870,	// (0x000260bc) main_video4_pane_g

0x7f28,	// (0x0001e774) vid4_indicators_pane_ParamLimits

0x7f28,	// (0x0001e774) vid4_indicators_pane

0x7f47,	// (0x0001e793) video4_image_uncrop_cif_pane_ParamLimits

0x7f47,	// (0x0001e793) video4_image_uncrop_cif_pane

0x7f56,	// (0x0001e7a2) video4_image_uncrop_nhd_pane_ParamLimits

0x7f56,	// (0x0001e7a2) video4_image_uncrop_nhd_pane

0x7dee,	// (0x0001e63a) video4_image_uncrop_vga_pane_ParamLimits

0x7dee,	// (0x0001e63a) video4_image_uncrop_vga_pane

0x74f4,	// (0x0001dd40) bg_tb_trans_pane_cp07

0x7f6d,	// (0x0001e7b9) vid4_indicators_pane_g1

0x7f81,	// (0x0001e7cd) vid4_indicators_pane_g2

0x7f95,	// (0x0001e7e1) vid4_indicators_pane_g3

0x0004,

0xf87b,	// (0x000260c7) vid4_indicators_pane_g

0x7fc4,	// (0x0001e810) vid4_indicators_pane_t1

0xbd29,	// (0x00022575) cam4_autofocus_pane_g1

0xbd31,	// (0x0002257d) cam4_autofocus_pane_g2

0xbd39,	// (0x00022585) cam4_autofocus_pane_g3

0x0002,

0xf886,	// (0x000260d2) cam4_autofocus_pane_g

0xbd41,	// (0x0002258d) cam4_autofocus_pane_g3_copy1

0xbb4f,	// (0x0002239b) video_down_pane_cp_t1

0xbb5d,	// (0x000223a9) video_down_pane_cp_t2

0x0001,

0xf7fe,	// (0x0002604a) video_down_pane_cp_t

0x708e,	// (0x0001d8da) popup_vitu2_window_ParamLimits

0x708e,	// (0x0001d8da) popup_vitu2_window

0x7fdb,	// (0x0001e827) aid_size_cell2_itu2_ParamLimits

0x7fdb,	// (0x0001e827) aid_size_cell2_itu2

0x7ffd,	// (0x0001e849) aid_size_cell_itu2_ParamLimits

0x7ffd,	// (0x0001e849) aid_size_cell_itu2

0x8041,	// (0x0001e88d) bg_popup_window_pane_cp09_ParamLimits

0x8041,	// (0x0001e88d) bg_popup_window_pane_cp09

0x804f,	// (0x0001e89b) field_vitu2_entry_pane_ParamLimits

0x804f,	// (0x0001e89b) field_vitu2_entry_pane

0x806f,	// (0x0001e8bb) grid_vitu2_function_pane_ParamLimits

0x806f,	// (0x0001e8bb) grid_vitu2_function_pane

0x80b3,	// (0x0001e8ff) grid_vitu2_itu_pane_ParamLimits

0x80b3,	// (0x0001e8ff) grid_vitu2_itu_pane

0x812b,	// (0x0001e977) cell_vitu2_itu_pane_ParamLimits

0x812b,	// (0x0001e977) cell_vitu2_itu_pane

0x8144,	// (0x0001e990) cell_vitu2_function_pane_ParamLimits

0x8144,	// (0x0001e990) cell_vitu2_function_pane

0x3ced,	// (0x0001a539) bg_popup_call_pane_cp08_ParamLimits

0x3ced,	// (0x0001a539) bg_popup_call_pane_cp08

0x3d04,	// (0x0001a550) field_vitu2_entry_pane_g1

0x3d10,	// (0x0001a55c) field_vitu2_entry_pane_g2

0x0002,

0xf88d,	// (0x000260d9) field_vitu2_entry_pane_g

0xbd49,	// (0x00022595) field_vitu2_entry_pane_t1_ParamLimits

0xbd49,	// (0x00022595) field_vitu2_entry_pane_t1

0x3d1c,	// (0x0001a568) field_vitu2_entry_pane_t2_ParamLimits

0x3d1c,	// (0x0001a568) field_vitu2_entry_pane_t2

0x0001,

0xf894,	// (0x000260e0) field_vitu2_entry_pane_t_ParamLimits

0xf894,	// (0x000260e0) field_vitu2_entry_pane_t

0x768b,	// (0x0001ded7) bg_button_pane_cp010_ParamLimits

0x768b,	// (0x0001ded7) bg_button_pane_cp010

0x8185,	// (0x0001e9d1) cell_vitu2_itu_pane_g1

0x81ab,	// (0x0001e9f7) cell_vitu2_itu_pane_t1_ParamLimits

0x81ab,	// (0x0001e9f7) cell_vitu2_itu_pane_t1

0x81f7,	// (0x0001ea43) cell_vitu2_itu_pane_t2_ParamLimits

0x81f7,	// (0x0001ea43) cell_vitu2_itu_pane_t2

0x0002,

0xf89e,	// (0x000260ea) cell_vitu2_itu_pane_t_ParamLimits

0xf89e,	// (0x000260ea) cell_vitu2_itu_pane_t

0x74f4,	// (0x0001dd40) bg_button_pane_cp011

0x82bf,	// (0x0001eb0b) cell_vitu2_function_pane_g1

0x709c,	// (0x0001d8e8) main_myfav_hc_pane

0x7cb6,	// (0x0001e502) popup_image3_note_pane_ParamLimits

0x7cb6,	// (0x0001e502) popup_image3_note_pane

0x7cc4,	// (0x0001e510) popup_image3_tool_bar_pane_ParamLimits

0x7cc4,	// (0x0001e510) popup_image3_tool_bar_pane

0x826d,	// (0x0001eab9) cell_vitu2_itu_pane_t3_ParamLimits

0x826d,	// (0x0001eab9) cell_vitu2_itu_pane_t3

0x0263,	// (0x00016aaf) bg_popup_trans_pane

0x3d41,	// (0x0001a58d) grid_image3_tool_bar_pane

0x3d4b,	// (0x0001a597) bg_popup_trans_pane_g1

0x0ef3,	// (0x0001773f) bg_popup_trans_pane_g2

0x3d53,	// (0x0001a59f) bg_popup_trans_pane_g3

0x3d5b,	// (0x0001a5a7) bg_popup_trans_pane_g4

0x3d63,	// (0x0001a5af) bg_popup_trans_pane_g5

0x3d6b,	// (0x0001a5b7) bg_popup_trans_pane_g6

0x3d73,	// (0x0001a5bf) bg_popup_trans_pane_g7

0x3d7b,	// (0x0001a5c7) bg_popup_trans_pane_g8

0x0ed3,	// (0x0001771f) bg_popup_trans_pane_g9

0x0008,

0xf8a5,	// (0x000260f1) bg_popup_trans_pane_g

0x3d83,	// (0x0001a5cf) cell_image3_tool_bar_pane_ParamLimits

0x3d83,	// (0x0001a5cf) cell_image3_tool_bar_pane

0x0ce2,	// (0x0001752e) cell_image3_tool_bar_pane_g1

0x0263,	// (0x00016aaf) bg_popup_trans_pane_cp1

0x3d97,	// (0x0001a5e3) popup_image3_note_pane_t1

0x3da5,	// (0x0001a5f1) popup_image3_note_pane_t2

0x3db3,	// (0x0001a5ff) popup_image3_note_pane_t3

0x0002,

0xf8b8,	// (0x00026104) popup_image3_note_pane_t

0x3dc1,	// (0x0001a60d) popup_image3_note_pane_t3_copy1

0xbd7c,	// (0x000225c8) bg_myfav_hc_instruction_pane_ParamLimits

0xbd7c,	// (0x000225c8) bg_myfav_hc_instruction_pane

0xbd94,	// (0x000225e0) cell_myfav_contact_pane_ParamLimits

0xbd94,	// (0x000225e0) cell_myfav_contact_pane

0xbdae,	// (0x000225fa) cell_myfav_contact_pane_cp1_ParamLimits

0xbdae,	// (0x000225fa) cell_myfav_contact_pane_cp1

0xbdc6,	// (0x00022612) cell_myfav_contact_pane_cp2_ParamLimits

0xbdc6,	// (0x00022612) cell_myfav_contact_pane_cp2

0xbdde,	// (0x0002262a) cell_myfav_contact_pane_cp3_ParamLimits

0xbdde,	// (0x0002262a) cell_myfav_contact_pane_cp3

0xbdf5,	// (0x00022641) cell_myfav_contact_pane_cp4_ParamLimits

0xbdf5,	// (0x00022641) cell_myfav_contact_pane_cp4

0xbe0b,	// (0x00022657) cell_myfav_contact_pane_cp5_ParamLimits

0xbe0b,	// (0x00022657) cell_myfav_contact_pane_cp5

0xbe1f,	// (0x0002266b) cell_myfav_contact_pane_cp6_ParamLimits

0xbe1f,	// (0x0002266b) cell_myfav_contact_pane_cp6

0xbe33,	// (0x0002267f) cell_myfav_contact_pane_cp7_ParamLimits

0xbe33,	// (0x0002267f) cell_myfav_contact_pane_cp7

0x3dcf,	// (0x0001a61b) listscroll_gen_pane_cp05

0xbe4b,	// (0x00022697) main_myfav_hc_pane_g1_ParamLimits

0xbe4b,	// (0x00022697) main_myfav_hc_pane_g1

0xbe61,	// (0x000226ad) main_myfav_hc_pane_g2_ParamLimits

0xbe61,	// (0x000226ad) main_myfav_hc_pane_g2

0x0002,

0xf8bf,	// (0x0002610b) main_myfav_hc_pane_g_ParamLimits

0xf8bf,	// (0x0002610b) main_myfav_hc_pane_g

0xbe8f,	// (0x000226db) main_myfav_hc_pane_t1_ParamLimits

0xbe8f,	// (0x000226db) main_myfav_hc_pane_t1

0x3dd8,	// (0x0001a624) main_myfav_hc_pane_t2_ParamLimits

0x3dd8,	// (0x0001a624) main_myfav_hc_pane_t2

0x3dea,	// (0x0001a636) main_myfav_hc_pane_t3_ParamLimits

0x3dea,	// (0x0001a636) main_myfav_hc_pane_t3

0xbea6,	// (0x000226f2) main_myfav_hc_pane_t4_ParamLimits

0xbea6,	// (0x000226f2) main_myfav_hc_pane_t4

0x0004,

0xf8c6,	// (0x00026112) main_myfav_hc_pane_t_ParamLimits

0xf8c6,	// (0x00026112) main_myfav_hc_pane_t

0x0ce2,	// (0x0001752e) bg_myfav_hc_instruction_pane_g1

0x3dfc,	// (0x0001a648) cell_myfav_contact_pane_g1_ParamLimits

0x3dfc,	// (0x0001a648) cell_myfav_contact_pane_g1

0x3dfc,	// (0x0001a648) cell_myfav_contact_pane_g2_ParamLimits

0x3dfc,	// (0x0001a648) cell_myfav_contact_pane_g2

0x3e08,	// (0x0001a654) cell_myfav_contact_pane_g3_ParamLimits

0x3e08,	// (0x0001a654) cell_myfav_contact_pane_g3

0x09d7,	// (0x00017223) cell_myfav_contact_pane_g4_ParamLimits

0x09d7,	// (0x00017223) cell_myfav_contact_pane_g4

0x3e15,	// (0x0001a661) cell_myfav_contact_pane_g5_ParamLimits

0x3e15,	// (0x0001a661) cell_myfav_contact_pane_g5

0x0004,

0xf8d1,	// (0x0002611d) cell_myfav_contact_pane_g_ParamLimits

0xf8d1,	// (0x0002611d) cell_myfav_contact_pane_g

0xbe77,	// (0x000226c3) main_myfav_hc_pane_g3_ParamLimits

0xbe77,	// (0x000226c3) main_myfav_hc_pane_g3

0x6f97,	// (0x0001d7e3) popup_adpt_find_window

0xbed0,	// (0x0002271c) afind_page_pane_ParamLimits

0xbed0,	// (0x0002271c) afind_page_pane

0xbedd,	// (0x00022729) aid_size_cell_afind_ParamLimits

0xbedd,	// (0x00022729) aid_size_cell_afind

0xbef7,	// (0x00022743) bg_popup_sub_pane_cp09_ParamLimits

0xbef7,	// (0x00022743) bg_popup_sub_pane_cp09

0xbf04,	// (0x00022750) find_pane_cp01_ParamLimits

0xbf04,	// (0x00022750) find_pane_cp01

0x3e21,	// (0x0001a66d) grid_afind_control_pane_ParamLimits

0x3e21,	// (0x0001a66d) grid_afind_control_pane

0xbf11,	// (0x0002275d) grid_afind_pane_ParamLimits

0xbf11,	// (0x0002275d) grid_afind_pane

0xbf2d,	// (0x00022779) cell_afind_pane_ParamLimits

0xbf2d,	// (0x00022779) cell_afind_pane

0x0ce2,	// (0x0001752e) afind_page_pane_g1

0xbf75,	// (0x000227c1) afind_page_pane_g2

0xbf7e,	// (0x000227ca) afind_page_pane_g3

0x0002,

0xf8dc,	// (0x00026128) afind_page_pane_g

0xbf87,	// (0x000227d3) afind_page_pane_t1

0x3e35,	// (0x0001a681) cell_afind_grid_control_pane_ParamLimits

0x3e35,	// (0x0001a681) cell_afind_grid_control_pane

0x3b32,	// (0x0001a37e) bg_button_pane_cp69_ParamLimits

0x3b32,	// (0x0001a37e) bg_button_pane_cp69

0xbfa7,	// (0x000227f3) cell_afind_pane_g1_ParamLimits

0xbfa7,	// (0x000227f3) cell_afind_pane_g1

0xbfb4,	// (0x00022800) cell_afind_pane_t1_ParamLimits

0xbfb4,	// (0x00022800) cell_afind_pane_t1

0x0cec,	// (0x00017538) bg_button_pane_cp72

0x3e44,	// (0x0001a690) cell_afind_grid_control_pane_g1

0xa873,	// (0x000210bf) aid_image_placing_area_ParamLimits

0xa873,	// (0x000210bf) aid_image_placing_area

0x09c9,	// (0x00017215) field_vitu_entry_pane_g1_ParamLimits

0x09c9,	// (0x00017215) field_vitu_entry_pane_g1

0x09c9,	// (0x00017215) field_vitu_entry_pane_g2_ParamLimits

0x09c9,	// (0x00017215) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00025a33) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00025a33) field_vitu_entry_pane_g

0x364b,	// (0x00019e97) cell_vitu_itu_pane_g1_ParamLimits

0x362e,	// (0x00019e7a) cell_vitu_itu_pane_t3_ParamLimits

0x362e,	// (0x00019e7a) cell_vitu_itu_pane_t3

0x3adb,	// (0x0001a327) mp4_progress_pane_t1_ParamLimits

0x3af4,	// (0x0001a340) mp4_progress_pane_t2_ParamLimits

0xf822,	// (0x0002606e) mp4_progress_pane_t_ParamLimits

0x3b0d,	// (0x0001a359) mup_progress_pane_cp04_ParamLimits

0xbeba,	// (0x00022706) main_myfav_hc_pane_t5_ParamLimits

0xbeba,	// (0x00022706) main_myfav_hc_pane_t5

0x6e5b,	// (0x0001d6a7) aid_zoom_text_primary

0x6f97,	// (0x0001d7e3) popup_adpt_find_window_ParamLimits

0x74f4,	// (0x0001dd40) main_cam_set_pane

0x7e13,	// (0x0001e65f) cam4_zoom_pane_ParamLimits

0x7e13,	// (0x0001e65f) cam4_zoom_pane

0xbfc6,	// (0x00022812) main_cam_set_pane_g1_ParamLimits

0xbfc6,	// (0x00022812) main_cam_set_pane_g1

0xbfd4,	// (0x00022820) main_cam_set_pane_g2_ParamLimits

0xbfd4,	// (0x00022820) main_cam_set_pane_g2

0x0001,

0xf8e3,	// (0x0002612f) main_cam_set_pane_g_ParamLimits

0xf8e3,	// (0x0002612f) main_cam_set_pane_g

0xbfe0,	// (0x0002282c) main_cam_set_pane_t1_ParamLimits

0xbfe0,	// (0x0002282c) main_cam_set_pane_t1

0xbffc,	// (0x00022848) main_cset_listscroll_pane_ParamLimits

0xbffc,	// (0x00022848) main_cset_listscroll_pane

0xc02e,	// (0x0002287a) main_cset_slider_pane_ParamLimits

0xc02e,	// (0x0002287a) main_cset_slider_pane

0x3e55,	// (0x0001a6a1) main_cset_list_pane_ParamLimits

0x3e55,	// (0x0001a6a1) main_cset_list_pane

0x3e65,	// (0x0001a6b1) scroll_pane_cp028

0xc04d,	// (0x00022899) aid_area_touch_slider

0xc069,	// (0x000228b5) cset_slider_pane

0xc08c,	// (0x000228d8) main_cset_slider_pane_g1

0xc0a1,	// (0x000228ed) main_cset_slider_pane_g2

0x0011,

0xf8e8,	// (0x00026134) main_cset_slider_pane_g

0x3e9e,	// (0x0001a6ea) main_cset_slider_pane_t1

0xc163,	// (0x000229af) main_cset_slider_pane_t2

0xc17d,	// (0x000229c9) main_cset_slider_pane_t3

0xc197,	// (0x000229e3) main_cset_slider_pane_t4

0xc1b1,	// (0x000229fd) main_cset_slider_pane_t5

0xc1cf,	// (0x00022a1b) main_cset_slider_pane_t6

0xc1e6,	// (0x00022a32) main_cset_slider_pane_t7

0x000e,

0xf90d,	// (0x00026159) main_cset_slider_pane_t

0xc2f2,	// (0x00022b3e) cset_list_set_pane_ParamLimits

0xc2f2,	// (0x00022b3e) cset_list_set_pane

0x3f38,	// (0x0001a784) aid_position_infowindow_above

0x3f40,	// (0x0001a78c) aid_position_infowindow_below

0x3f48,	// (0x0001a794) cset_list_set_pane_g1_ParamLimits

0x3f48,	// (0x0001a794) cset_list_set_pane_g1

0x3f54,	// (0x0001a7a0) cset_list_set_pane_g3_ParamLimits

0x3f54,	// (0x0001a7a0) cset_list_set_pane_g3

0x0001,

0xf92c,	// (0x00026178) cset_list_set_pane_g_ParamLimits

0xf92c,	// (0x00026178) cset_list_set_pane_g

0x3f63,	// (0x0001a7af) cset_list_set_pane_t1_ParamLimits

0x3f63,	// (0x0001a7af) cset_list_set_pane_t1

0x02d2,	// (0x00016b1e) list_highlight_pane_cp021_ParamLimits

0x02d2,	// (0x00016b1e) list_highlight_pane_cp021

0x1909,	// (0x00018155) cset_slider_pane_g1

0x191b,	// (0x00018167) cset_slider_pane_g2

0x1912,	// (0x0001815e) cset_slider_pane_g3

0x0002,

0xf931,	// (0x0002617d) cset_slider_pane_g

0x82d3,	// (0x0001eb1f) aid_area_touch_cam4_zoom

0x82db,	// (0x0001eb27) cam4_zoom_cont_pane

0x82e3,	// (0x0001eb2f) cam4_zoom_pane_g1

0x82eb,	// (0x0001eb37) cam4_zoom_pane_g2

0x82f3,	// (0x0001eb3f) cam4_zoom_pane_g3

0x0002,

0xf938,	// (0x00026184) cam4_zoom_pane_g

0x82fb,	// (0x0001eb47) cam4_zoom_cont_pane_g1

0x8304,	// (0x0001eb50) cam4_zoom_cont_pane_g2

0x830d,	// (0x0001eb59) cam4_zoom_cont_pane_g3

0x0002,

0xf93f,	// (0x0002618b) cam4_zoom_cont_pane_g

0x7cef,	// (0x0001e53b) call4_image_pane_ParamLimits

0x7cef,	// (0x0001e53b) call4_image_pane

0xbc59,	// (0x000224a5) call4_windows_conf_pane_ParamLimits

0xbc9e,	// (0x000224ea) popup_call4_audio_in_window_ParamLimits

0xbc9e,	// (0x000224ea) popup_call4_audio_in_window

0x0263,	// (0x00016aaf) bg_popup_call2_act_pane_cp02

0x3ba2,	// (0x0001a3ee) call4_list_conf_pane

0x0ce2,	// (0x0001752e) call4_image_pane_g1

0x0ce2,	// (0x0001752e) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x00025c0f) call4_image_pane_g

0x3fb3,	// (0x0001a7ff) list_single_graphic_popup_conf4_pane_ParamLimits

0x3fb3,	// (0x0001a7ff) list_single_graphic_popup_conf4_pane

0x0263,	// (0x00016aaf) list_highlight_pane_cp022

0x3fc6,	// (0x0001a812) list_single_graphic_popup_conf4_pane_g1

0x14a7,	// (0x00017cf3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf946,	// (0x00026192) list_single_graphic_popup_conf4_pane_g

0x3fce,	// (0x0001a81a) list_single_graphic_popup_conf4_pane_t1

0x9013,	// (0x0001f85f) popup_vtel_slider_window_ParamLimits

0x9013,	// (0x0001f85f) popup_vtel_slider_window

0x3b20,	// (0x0001a36c) dialer2_ne_pane_t2_ParamLimits

0x3b20,	// (0x0001a36c) dialer2_ne_pane_t2

0x0001,

0xf827,	// (0x00026073) dialer2_ne_pane_t_ParamLimits

0xf827,	// (0x00026073) dialer2_ne_pane_t

0x02d2,	// (0x00016b1e) bg_popup_sub_pane_cp010_ParamLimits

0x02d2,	// (0x00016b1e) bg_popup_sub_pane_cp010

0xc308,	// (0x00022b54) popup_vtel_slider_window_g1_ParamLimits

0xc308,	// (0x00022b54) popup_vtel_slider_window_g1

0xc314,	// (0x00022b60) popup_vtel_slider_window_g2_ParamLimits

0xc314,	// (0x00022b60) popup_vtel_slider_window_g2

0x0003,

0xf94b,	// (0x00026197) popup_vtel_slider_window_g_ParamLimits

0xf94b,	// (0x00026197) popup_vtel_slider_window_g

0xc35c,	// (0x00022ba8) vtel_slider_pane_ParamLimits

0xc35c,	// (0x00022ba8) vtel_slider_pane

0xc36b,	// (0x00022bb7) vtel_slider_pane_g1_ParamLimits

0xc36b,	// (0x00022bb7) vtel_slider_pane_g1

0xc378,	// (0x00022bc4) vtel_slider_pane_g2_ParamLimits

0xc378,	// (0x00022bc4) vtel_slider_pane_g2

0xc385,	// (0x00022bd1) vtel_slider_pane_g3_ParamLimits

0xc385,	// (0x00022bd1) vtel_slider_pane_g3

0xc36b,	// (0x00022bb7) vtel_slider_pane_g4_ParamLimits

0xc36b,	// (0x00022bb7) vtel_slider_pane_g4

0xc392,	// (0x00022bde) vtel_slider_pane_g5_ParamLimits

0xc392,	// (0x00022bde) vtel_slider_pane_g5

0x0004,

0xf954,	// (0x000261a0) vtel_slider_pane_g_ParamLimits

0xf954,	// (0x000261a0) vtel_slider_pane_g

0x74f4,	// (0x0001dd40) main_gallery2_pane

0x8023,	// (0x0001e86f) aid_size_row_itut2_dropdow_list_ParamLimits

0x8023,	// (0x0001e86f) aid_size_row_itut2_dropdow_list

0x8091,	// (0x0001e8dd) grid_vitu2_function_top_pane_ParamLimits

0x8091,	// (0x0001e8dd) grid_vitu2_function_top_pane

0x80eb,	// (0x0001e937) popup_vitu2_dropdown_list_window_ParamLimits

0x80eb,	// (0x0001e937) popup_vitu2_dropdown_list_window

0x8109,	// (0x0001e955) popup_vitu2_match_list_window

0x8316,	// (0x0001eb62) cell_vitu2_function_top_pane_ParamLimits

0x8316,	// (0x0001eb62) cell_vitu2_function_top_pane

0x8330,	// (0x0001eb7c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8330,	// (0x0001eb7c) cell_vitu2_function_top_pane_cp01

0x834c,	// (0x0001eb98) cell_vitu2_function_top_wide_pane_ParamLimits

0x834c,	// (0x0001eb98) cell_vitu2_function_top_wide_pane

0x74f4,	// (0x0001dd40) bg_button_pane_cp012

0x836a,	// (0x0001ebb6) cell_vitu2_function_top_pane_g1

0x837e,	// (0x0001ebca) bg_button_pane_cp013_ParamLimits

0x837e,	// (0x0001ebca) bg_button_pane_cp013

0xc39f,	// (0x00022beb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc39f,	// (0x00022beb) cell_vitu2_function_top_wide_pane_g1

0x708e,	// (0x0001d8da) bg_popup_sub_pane_cp20

0x839a,	// (0x0001ebe6) list_vitu2_match_list_pane

0x3d4b,	// (0x0001a597) bg_popup_sub_pane_cp20_g1

0x3d53,	// (0x0001a59f) bg_popup_sub_pane_cp20_g2

0x0ef3,	// (0x0001773f) bg_popup_sub_pane_cp20_g3

0x3d5b,	// (0x0001a5a7) bg_popup_sub_pane_cp20_g4

0x0ed3,	// (0x0001771f) bg_popup_sub_pane_cp20_g5

0x4000,	// (0x0001a84c) bg_popup_sub_pane_cp20_g6

0x3d6b,	// (0x0001a5b7) bg_popup_sub_pane_cp20_g7

0x3d73,	// (0x0001a5bf) bg_popup_sub_pane_cp20_g8

0x3d7b,	// (0x0001a5c7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95f,	// (0x000261ab) bg_popup_sub_pane_cp20_g

0x83b2,	// (0x0001ebfe) list_vitu2_match_list_item_pane_ParamLimits

0x83b2,	// (0x0001ebfe) list_vitu2_match_list_item_pane

0x83c4,	// (0x0001ec10) list_vitu2_match_list_item_pane_t1

0x709c,	// (0x0001d8e8) bg_popup_sub_pane_cp21

0x0ca2,	// (0x000174ee) grid_vitu2_dropdown_list_pane

0x83d2,	// (0x0001ec1e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x83d2,	// (0x0001ec1e) cell_vitu2_dropdown_list_char_pane

0x83f2,	// (0x0001ec3e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x83f2,	// (0x0001ec3e) cell_vitu2_dropdown_list_ctrl_pane

0x403a,	// (0x0001a886) cell_vitu2_dropdown_list_char_pane_g1

0x4031,	// (0x0001a87d) cell_vitu2_dropdown_list_char_pane_g2

0x4028,	// (0x0001a874) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf972,	// (0x000261be) cell_vitu2_dropdown_list_char_pane_g

0x841a,	// (0x0001ec66) cell_vitu2_dropdown_list_char_pane_t1

0xc3b7,	// (0x00022c03) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc3b7,	// (0x00022c03) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc3c4,	// (0x00022c10) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc3c4,	// (0x00022c10) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc3d1,	// (0x00022c1d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc3d1,	// (0x00022c1d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8428,	// (0x0001ec74) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8428,	// (0x0001ec74) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5138,	// (0x0001b984) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5138,	// (0x0001b984) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf979,	// (0x000261c5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf979,	// (0x000261c5) cell_vitu2_dropdown_list_ctrl_pane_g

0xc3de,	// (0x00022c2a) aid_size_cell_gallery2_ParamLimits

0xc3de,	// (0x00022c2a) aid_size_cell_gallery2

0xc3f8,	// (0x00022c44) grid_gallery2_pane_ParamLimits

0xc3f8,	// (0x00022c44) grid_gallery2_pane

0xc40f,	// (0x00022c5b) scroll_pane_cp029_ParamLimits

0xc40f,	// (0x00022c5b) scroll_pane_cp029

0xc41f,	// (0x00022c6b) cell_gallery2_pane_ParamLimits

0xc41f,	// (0x00022c6b) cell_gallery2_pane

0x4043,	// (0x0001a88f) cell_gallery2_pane_g2

0x521a,	// (0x0001ba66) cell_gallery2_pane_g3

0x404b,	// (0x0001a897) cell_gallery2_pane_g4

0x4053,	// (0x0001a89f) cell_gallery2_pane_g5

0x0ca2,	// (0x000174ee) grid_highlight_pane_cp10

0x8109,	// (0x0001e955) popup_vitu2_match_list_window_ParamLimits

0x811b,	// (0x0001e967) popup_vitu2_query_window_ParamLimits

0x811b,	// (0x0001e967) popup_vitu2_query_window

0x709c,	// (0x0001d8e8) bg_vitu2_candi_button_pane

0x403a,	// (0x0001a886) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x4031,	// (0x0001a87d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4028,	// (0x0001a874) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc474,	// (0x00022cc0) bg_button_pane_cp015

0xc489,	// (0x00022cd5) bg_button_pane_cp016

0xc495,	// (0x00022ce1) bg_button_pane_cp017

0x1899,	// (0x000180e5) bg_popup_sub_pane_cp22

0x405b,	// (0x0001a8a7) popup_vitu2_query_window_g1

0xc4d5,	// (0x00022d21) popup_vitu2_query_window_g2

0x0002,

0xf984,	// (0x000261d0) popup_vitu2_query_window_g

0xc4f9,	// (0x00022d45) popup_vitu2_query_window_t1_ParamLimits

0xc4f9,	// (0x00022d45) popup_vitu2_query_window_t1

0xc52c,	// (0x00022d78) popup_vitu2_query_window_t2_ParamLimits

0xc52c,	// (0x00022d78) popup_vitu2_query_window_t2

0xc53e,	// (0x00022d8a) popup_vitu2_query_window_t3_ParamLimits

0xc53e,	// (0x00022d8a) popup_vitu2_query_window_t3

0xc566,	// (0x00022db2) popup_vitu2_query_window_t4_ParamLimits

0xc566,	// (0x00022db2) popup_vitu2_query_window_t4

0xc57a,	// (0x00022dc6) popup_vitu2_query_window_t5_ParamLimits

0xc57a,	// (0x00022dc6) popup_vitu2_query_window_t5

0x0006,

0xf98b,	// (0x000261d7) popup_vitu2_query_window_t_ParamLimits

0xf98b,	// (0x000261d7) popup_vitu2_query_window_t

0x3e4d,	// (0x0001a699) main_cset_text_pane

0xc04d,	// (0x00022899) aid_area_touch_slider_ParamLimits

0xc069,	// (0x000228b5) cset_slider_pane_ParamLimits

0xc08c,	// (0x000228d8) main_cset_slider_pane_g1_ParamLimits

0xc0a1,	// (0x000228ed) main_cset_slider_pane_g2_ParamLimits

0x3e6e,	// (0x0001a6ba) main_cset_slider_pane_g3_ParamLimits

0x3e6e,	// (0x0001a6ba) main_cset_slider_pane_g3

0xc0b6,	// (0x00022902) main_cset_slider_pane_g4_ParamLimits

0xc0b6,	// (0x00022902) main_cset_slider_pane_g4

0xc0c5,	// (0x00022911) main_cset_slider_pane_g5_ParamLimits

0xc0c5,	// (0x00022911) main_cset_slider_pane_g5

0xc0d3,	// (0x0002291f) main_cset_slider_pane_g6_ParamLimits

0xc0d3,	// (0x0002291f) main_cset_slider_pane_g6

0xf8e8,	// (0x00026134) main_cset_slider_pane_g_ParamLimits

0x3e9e,	// (0x0001a6ea) main_cset_slider_pane_t1_ParamLimits

0xc163,	// (0x000229af) main_cset_slider_pane_t2_ParamLimits

0xc17d,	// (0x000229c9) main_cset_slider_pane_t3_ParamLimits

0xc197,	// (0x000229e3) main_cset_slider_pane_t4_ParamLimits

0xc1b1,	// (0x000229fd) main_cset_slider_pane_t5_ParamLimits

0xc1cf,	// (0x00022a1b) main_cset_slider_pane_t6_ParamLimits

0xc1e6,	// (0x00022a32) main_cset_slider_pane_t7_ParamLimits

0xc214,	// (0x00022a60) main_cset_slider_pane_t8_ParamLimits

0xc214,	// (0x00022a60) main_cset_slider_pane_t8

0xc23c,	// (0x00022a88) main_cset_slider_pane_t9_ParamLimits

0xc23c,	// (0x00022a88) main_cset_slider_pane_t9

0xc264,	// (0x00022ab0) main_cset_slider_pane_t10_ParamLimits

0xc264,	// (0x00022ab0) main_cset_slider_pane_t10

0xc28c,	// (0x00022ad8) main_cset_slider_pane_t11_ParamLimits

0xc28c,	// (0x00022ad8) main_cset_slider_pane_t11

0xc2b6,	// (0x00022b02) main_cset_slider_pane_t12_ParamLimits

0xc2b6,	// (0x00022b02) main_cset_slider_pane_t12

0xc2d3,	// (0x00022b1f) main_cset_slider_pane_t13_ParamLimits

0xc2d3,	// (0x00022b1f) main_cset_slider_pane_t13

0xf90d,	// (0x00026159) main_cset_slider_pane_t_ParamLimits

0x0263,	// (0x00016aaf) bg_popup_sub_pane_cp011

0x4067,	// (0x0001a8b3) main_cset_text_pane_g1

0x406f,	// (0x0001a8bb) main_cset_text_pane_t1

0x407d,	// (0x0001a8c9) main_cset_text_pane_t2

0x408b,	// (0x0001a8d7) main_cset_text_pane_t3

0x4099,	// (0x0001a8e5) main_cset_text_pane_t4

0x40a7,	// (0x0001a8f3) main_cset_text_pane_t5

0x40b5,	// (0x0001a901) main_cset_text_pane_t6

0x40c3,	// (0x0001a90f) main_cset_text_pane_t7

0x0006,

0xf99a,	// (0x000261e6) main_cset_text_pane_t

0x709c,	// (0x0001d8e8) main_cam4_burst_pane

0x709c,	// (0x0001d8e8) main_cam5_pane

0xbf95,	// (0x000227e1) bg_button_pane_cp019

0xbf9e,	// (0x000227ea) bg_button_pane_cp020

0x3e7a,	// (0x0001a6c6) main_cset_slider_pane_g7_ParamLimits

0x3e7a,	// (0x0001a6c6) main_cset_slider_pane_g7

0x3e86,	// (0x0001a6d2) main_cset_slider_pane_g8_ParamLimits

0x3e86,	// (0x0001a6d2) main_cset_slider_pane_g8

0xc0e7,	// (0x00022933) main_cset_slider_pane_g9_ParamLimits

0xc0e7,	// (0x00022933) main_cset_slider_pane_g9

0xc0f3,	// (0x0002293f) main_cset_slider_pane_g10_ParamLimits

0xc0f3,	// (0x0002293f) main_cset_slider_pane_g10

0xc0ff,	// (0x0002294b) main_cset_slider_pane_g11_ParamLimits

0xc0ff,	// (0x0002294b) main_cset_slider_pane_g11

0xc10b,	// (0x00022957) main_cset_slider_pane_g12_ParamLimits

0xc10b,	// (0x00022957) main_cset_slider_pane_g12

0xc117,	// (0x00022963) main_cset_slider_pane_g13_ParamLimits

0xc117,	// (0x00022963) main_cset_slider_pane_g13

0xc123,	// (0x0002296f) main_cset_slider_pane_g14_ParamLimits

0xc123,	// (0x0002296f) main_cset_slider_pane_g14

0xc12f,	// (0x0002297b) main_cset_slider_pane_g15_ParamLimits

0xc12f,	// (0x0002297b) main_cset_slider_pane_g15

0x3ec6,	// (0x0001a712) main_cset_slider_pane_t14_ParamLimits

0x3ec6,	// (0x0001a712) main_cset_slider_pane_t14

0x3eff,	// (0x0001a74b) main_cset_slider_pane_t15_ParamLimits

0x3eff,	// (0x0001a74b) main_cset_slider_pane_t15

0xc5e4,	// (0x00022e30) aid_cam4_burst_size_cell_ParamLimits

0xc5e4,	// (0x00022e30) aid_cam4_burst_size_cell

0xc600,	// (0x00022e4c) grid_cam4_burst_pane_ParamLimits

0xc600,	// (0x00022e4c) grid_cam4_burst_pane

0xc630,	// (0x00022e7c) linegrid_cam4_burst_pane_ParamLimits

0xc630,	// (0x00022e7c) linegrid_cam4_burst_pane

0xc650,	// (0x00022e9c) scroll_pane_cp30_ParamLimits

0xc650,	// (0x00022e9c) scroll_pane_cp30

0xc65c,	// (0x00022ea8) cell_cam4_burst_pane_ParamLimits

0xc65c,	// (0x00022ea8) cell_cam4_burst_pane

0x40dd,	// (0x0001a929) linegrid_cam4_burst_pane_g1_ParamLimits

0x40dd,	// (0x0001a929) linegrid_cam4_burst_pane_g1

0xc698,	// (0x00022ee4) linegrid_cam4_burst_pane_g2_ParamLimits

0xc698,	// (0x00022ee4) linegrid_cam4_burst_pane_g2

0x40ea,	// (0x0001a936) linegrid_cam4_burst_pane_g3_ParamLimits

0x40ea,	// (0x0001a936) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a9,	// (0x000261f5) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a9,	// (0x000261f5) linegrid_cam4_burst_pane_g

0xc6a9,	// (0x00022ef5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc6a9,	// (0x00022ef5) linegrid_cam4_burst_pane_g3_copy1

0x40f7,	// (0x0001a943) linegrid_cam4_burst_pane_g4_ParamLimits

0x40f7,	// (0x0001a943) linegrid_cam4_burst_pane_g4

0xc6c3,	// (0x00022f0f) linegrid_cam4_burst_pane_g5_ParamLimits

0xc6c3,	// (0x00022f0f) linegrid_cam4_burst_pane_g5

0xc6d4,	// (0x00022f20) linegrid_cam4_burst_pane_g6_ParamLimits

0xc6d4,	// (0x00022f20) linegrid_cam4_burst_pane_g6

0x4104,	// (0x0001a950) linegrid_cam4_burst_pane_g7_ParamLimits

0x4104,	// (0x0001a950) linegrid_cam4_burst_pane_g7

0xc6e5,	// (0x00022f31) cell_cam4_burst_pane_g1

0x411d,	// (0x0001a969) main_cam5_pane_t1_ParamLimits

0x411d,	// (0x0001a969) main_cam5_pane_t1

0x412f,	// (0x0001a97b) main_cam5_pane_t2_ParamLimits

0x412f,	// (0x0001a97b) main_cam5_pane_t2

0x4141,	// (0x0001a98d) main_cam5_pane_t3_ParamLimits

0x4141,	// (0x0001a98d) main_cam5_pane_t3

0x4153,	// (0x0001a99f) main_cam5_pane_t4_ParamLimits

0x4153,	// (0x0001a99f) main_cam5_pane_t4

0x416b,	// (0x0001a9b7) main_cam5_pane_t5_ParamLimits

0x416b,	// (0x0001a9b7) main_cam5_pane_t5

0x417f,	// (0x0001a9cb) main_cam5_pane_t6_ParamLimits

0x417f,	// (0x0001a9cb) main_cam5_pane_t6

0x4193,	// (0x0001a9df) main_cam5_pane_t7_ParamLimits

0x4193,	// (0x0001a9df) main_cam5_pane_t7

0x41a5,	// (0x0001a9f1) main_cam5_pane_t8_ParamLimits

0x41a5,	// (0x0001a9f1) main_cam5_pane_t8

0x41c1,	// (0x0001aa0d) main_cam5_pane_t9_ParamLimits

0x41c1,	// (0x0001aa0d) main_cam5_pane_t9

0x41d3,	// (0x0001aa1f) main_cam5_pane_t10_ParamLimits

0x41d3,	// (0x0001aa1f) main_cam5_pane_t10

0x41e5,	// (0x0001aa31) main_cam5_pane_t11_ParamLimits

0x41e5,	// (0x0001aa31) main_cam5_pane_t11

0x41f7,	// (0x0001aa43) main_cam5_pane_t12_ParamLimits

0x41f7,	// (0x0001aa43) main_cam5_pane_t12

0x420c,	// (0x0001aa58) main_cam5_pane_t13_ParamLimits

0x420c,	// (0x0001aa58) main_cam5_pane_t13

0x000c,

0xf9b5,	// (0x00026201) main_cam5_pane_t_ParamLimits

0xf9b5,	// (0x00026201) main_cam5_pane_t

0x704d,	// (0x0001d899) popup_scut_keymap_window_ParamLimits

0x704d,	// (0x0001d899) popup_scut_keymap_window

0xc6f8,	// (0x00022f44) aid_size_cell_brow_shortcut

0x0ca2,	// (0x000174ee) bg_popup_window_pane_cp010

0xc704,	// (0x00022f50) grid_scut_pane

0xc710,	// (0x00022f5c) cell_scut_pane_ParamLimits

0xc710,	// (0x00022f5c) cell_scut_pane

0xc727,	// (0x00022f73) cell_scut_pane_g1

0x4229,	// (0x0001aa75) cell_scut_pane_t1

0x4238,	// (0x0001aa84) cell_scut_pane_t2

0xc730,	// (0x00022f7c) cell_scut_pane_t3

0x0002,

0xf9d0,	// (0x0002621c) cell_scut_pane_t

0xb33d,	// (0x00021b89) main_mup3_pane_g8_ParamLimits

0xb33d,	// (0x00021b89) main_mup3_pane_g8

0x8031,	// (0x0001e87d) area_vitu2_query_pane_ParamLimits

0x8031,	// (0x0001e87d) area_vitu2_query_pane

0xc4a1,	// (0x00022ced) input_focus_pane_cp08

0x4247,	// (0x0001aa93) area_vitu2_query_pane_g1

0xc73e,	// (0x00022f8a) area_vitu2_query_pane_g2

0x0001,

0xf9d7,	// (0x00026223) area_vitu2_query_pane_g

0xc74f,	// (0x00022f9b) area_vitu2_query_pane_t1_ParamLimits

0xc74f,	// (0x00022f9b) area_vitu2_query_pane_t1

0xc763,	// (0x00022faf) area_vitu2_query_pane_t2_ParamLimits

0xc763,	// (0x00022faf) area_vitu2_query_pane_t2

0xc777,	// (0x00022fc3) area_vitu2_query_pane_t3_ParamLimits

0xc777,	// (0x00022fc3) area_vitu2_query_pane_t3

0x4253,	// (0x0001aa9f) area_vitu2_query_pane_t4_ParamLimits

0x4253,	// (0x0001aa9f) area_vitu2_query_pane_t4

0x427b,	// (0x0001aac7) area_vitu2_query_pane_t5_ParamLimits

0x427b,	// (0x0001aac7) area_vitu2_query_pane_t5

0x42a3,	// (0x0001aaef) area_vitu2_query_pane_t6_ParamLimits

0x42a3,	// (0x0001aaef) area_vitu2_query_pane_t6

0x0006,

0xf9dc,	// (0x00026228) area_vitu2_query_pane_t_ParamLimits

0xf9dc,	// (0x00026228) area_vitu2_query_pane_t

0xc489,	// (0x00022cd5) bg_button_pane_cp018

0xc79f,	// (0x00022feb) bg_button_pane_cp021

0xc7ab,	// (0x00022ff7) bg_button_pane_cp022

0xc7ce,	// (0x0002301a) input_focus_pane_cp09

0x15e3,	// (0x00017e2f) aid_size_touch_mv_arrow_left

0x160c,	// (0x00017e58) aid_size_touch_mv_arrow_right

0xc147,	// (0x00022993) main_cset_slider_pane_g16_ParamLimits

0xc147,	// (0x00022993) main_cset_slider_pane_g16

0xc155,	// (0x000229a1) main_cset_slider_pane_g17_ParamLimits

0xc155,	// (0x000229a1) main_cset_slider_pane_g17

0xc6e5,	// (0x00022f31) cell_cam4_burst_pane_g1_ParamLimits

0x0263,	// (0x00016aaf) compa_mode_pane

0xc320,	// (0x00022b6c) popup_vtel_slider_window_g3_ParamLimits

0xc320,	// (0x00022b6c) popup_vtel_slider_window_g3

0xc334,	// (0x00022b80) popup_vtel_slider_window_g4_ParamLimits

0xc334,	// (0x00022b80) popup_vtel_slider_window_g4

0xc348,	// (0x00022b94) popup_vtel_slider_window_t1_ParamLimits

0xc348,	// (0x00022b94) popup_vtel_slider_window_t1

0x709c,	// (0x0001d8e8) main_cl_pane

0x7592,	// (0x0001ddde) popup_imed_adjust2_window_ParamLimits

0x1899,	// (0x000180e5) bg_tb_trans_pane_cp05_ParamLimits

0x3563,	// (0x00019daf) popup_imed_adjust2_window_g1_ParamLimits

0x3572,	// (0x00019dbe) popup_imed_adjust2_window_g2_ParamLimits

0x3572,	// (0x00019dbe) popup_imed_adjust2_window_g2

0x357e,	// (0x00019dca) popup_imed_adjust2_window_g3_ParamLimits

0x357e,	// (0x00019dca) popup_imed_adjust2_window_g3

0x0002,

0xf752,	// (0x00025f9e) popup_imed_adjust2_window_g_ParamLimits

0xf752,	// (0x00025f9e) popup_imed_adjust2_window_g

0x358a,	// (0x00019dd6) popup_imed_adjust2_window_t1_ParamLimits

0x35a2,	// (0x00019dee) slider_imed_adjust_pane_ParamLimits

0x35b6,	// (0x00019e02) slider_imed_adjust_pane_g1_ParamLimits

0x35c6,	// (0x00019e12) slider_imed_adjust_pane_g2_ParamLimits

0x35d6,	// (0x00019e22) slider_imed_adjust_pane_g3_ParamLimits

0x35e7,	// (0x00019e33) slider_imed_adjust_pane_g4_ParamLimits

0xf759,	// (0x00025fa5) slider_imed_adjust_pane_g_ParamLimits

0x7dbc,	// (0x0001e608) aid_touch_area_cam4_ParamLimits

0x7dbc,	// (0x0001e608) aid_touch_area_cam4

0x7dcc,	// (0x0001e618) battery_pane_cp01

0x7e53,	// (0x0001e69f) main_camera4_pane_g6_ParamLimits

0x7e53,	// (0x0001e69f) main_camera4_pane_g6

0x7e71,	// (0x0001e6bd) main_camera4_pane_t2_ParamLimits

0x7e71,	// (0x0001e6bd) main_camera4_pane_t2

0x0001,

0xf85b,	// (0x000260a7) main_camera4_pane_t_ParamLimits

0xf85b,	// (0x000260a7) main_camera4_pane_t

0x7ed4,	// (0x0001e720) aid_touch_area_vid4_ParamLimits

0x7ed4,	// (0x0001e720) aid_touch_area_vid4

0x7f14,	// (0x0001e760) main_video4_pane_g5_ParamLimits

0x7f14,	// (0x0001e760) main_video4_pane_g5

0x7f38,	// (0x0001e784) vid4_progress_pane_ParamLimits

0x7f38,	// (0x0001e784) vid4_progress_pane

0x3e92,	// (0x0001a6de) main_cset_slider_pane_g18_ParamLimits

0x3e92,	// (0x0001a6de) main_cset_slider_pane_g18

0x4111,	// (0x0001a95d) cell_cam4_burst_pane_g2_ParamLimits

0x4111,	// (0x0001a95d) cell_cam4_burst_pane_g2

0x0001,

0xf9b0,	// (0x000261fc) cell_cam4_burst_pane_g_ParamLimits

0xf9b0,	// (0x000261fc) cell_cam4_burst_pane_g

0xc7de,	// (0x0002302a) bg_cl_pane_ParamLimits

0xc7de,	// (0x0002302a) bg_cl_pane

0xc7ea,	// (0x00023036) cl_header_pane_ParamLimits

0xc7ea,	// (0x00023036) cl_header_pane

0xc7f6,	// (0x00023042) cl_listscroll_pane_ParamLimits

0xc7f6,	// (0x00023042) cl_listscroll_pane

0x42ef,	// (0x0001ab3b) bg_cl_pane_g1

0x42f7,	// (0x0001ab43) bg_cl_pane_g2

0x42ff,	// (0x0001ab4b) bg_cl_pane_g3

0x4307,	// (0x0001ab53) bg_cl_pane_g4

0x430f,	// (0x0001ab5b) bg_cl_pane_g5

0x4317,	// (0x0001ab63) bg_cl_pane_g6

0x431f,	// (0x0001ab6b) bg_cl_pane_g7

0x4327,	// (0x0001ab73) bg_cl_pane_g8

0x432f,	// (0x0001ab7b) bg_cl_pane_g9

0x0008,

0xf9eb,	// (0x00026237) bg_cl_pane_g

0xc802,	// (0x0002304e) aid_height_cl_leading_ParamLimits

0xc802,	// (0x0002304e) aid_height_cl_leading

0xc80e,	// (0x0002305a) aid_height_cl_text_ParamLimits

0xc80e,	// (0x0002305a) aid_height_cl_text

0x09bb,	// (0x00017207) bg_cl_header_pane_ParamLimits

0x09bb,	// (0x00017207) bg_cl_header_pane

0xc826,	// (0x00023072) cl_header_pane_g1_ParamLimits

0xc826,	// (0x00023072) cl_header_pane_g1

0xc833,	// (0x0002307f) cl_header_pane_t1_ParamLimits

0xc833,	// (0x0002307f) cl_header_pane_t1

0x4337,	// (0x0001ab83) cl_list_pane

0x3e65,	// (0x0001a6b1) hc_scroll_pane_cp01

0x0ed3,	// (0x0001771f) bg_cl_header_pane_g1

0x3d4b,	// (0x0001a597) bg_cl_header_pane_g2

0x0ef3,	// (0x0001773f) bg_cl_header_pane_g3

0x3d5b,	// (0x0001a5a7) bg_cl_header_pane_g4

0x3d53,	// (0x0001a59f) bg_cl_header_pane_g5

0x4000,	// (0x0001a84c) bg_cl_header_pane_g6

0x3d73,	// (0x0001a5bf) bg_cl_header_pane_g7

0x3d7b,	// (0x0001a5c7) bg_cl_header_pane_g8

0x3d6b,	// (0x0001a5b7) bg_cl_header_pane_g9

0x0008,

0xf9fe,	// (0x0002624a) bg_cl_header_pane_g

0xc845,	// (0x00023091) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc845,	// (0x00023091) hc_cl_list_double_graphic_heading_pane

0xc856,	// (0x000230a2) hc_cl_list_single_graphic_pane_ParamLimits

0xc856,	// (0x000230a2) hc_cl_list_single_graphic_pane

0xc86f,	// (0x000230bb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc86f,	// (0x000230bb) hc_cl_list_single_graphic_pane_g1

0xc87b,	// (0x000230c7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc87b,	// (0x000230c7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa11,	// (0x0002625d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa11,	// (0x0002625d) hc_cl_list_single_graphic_pane_g

0xc88f,	// (0x000230db) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc88f,	// (0x000230db) hc_cl_list_single_graphic_pane_t1

0xc86f,	// (0x000230bb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc86f,	// (0x000230bb) hc_cl_list_double_graphic_heading_pane_g1

0xc8a4,	// (0x000230f0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc8a4,	// (0x000230f0) hc_cl_list_double_graphic_heading_pane_g2

0xc8b8,	// (0x00023104) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc8b8,	// (0x00023104) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa16,	// (0x00026262) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa16,	// (0x00026262) hc_cl_list_double_graphic_heading_pane_g

0xc8cc,	// (0x00023118) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc8cc,	// (0x00023118) hc_cl_list_double_graphic_heading_pane_t1

0xc8e1,	// (0x0002312d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc8e1,	// (0x0002312d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa1d,	// (0x00026269) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa1d,	// (0x00026269) hc_cl_list_double_graphic_heading_pane_t

0x844c,	// (0x0001ec98) vid4_progress_pane_g1

0x845c,	// (0x0001eca8) vid4_progress_pane_g2

0x846c,	// (0x0001ecb8) vid4_progress_pane_g3

0x847e,	// (0x0001ecca) vid4_progress_pane_g4

0x0004,

0xfa22,	// (0x0002626e) vid4_progress_pane_g

0x8496,	// (0x0001ece2) vid4_progress_pane_t1

0x84ac,	// (0x0001ecf8) vid4_progress_pane_t2

0x0002,

0xfa2d,	// (0x00026279) vid4_progress_pane_t

0x84d6,	// (0x0001ed22) wait_bar_pane_cp07

0x2e9a,	// (0x000196e6) blid_firmament_pane_ParamLimits

0x2edd,	// (0x00019729) popup_blid_sat_info2_window_g1

0x2f01,	// (0x0001974d) popup_blid_sat_info2_window_t3

0x2f0f,	// (0x0001975b) popup_blid_sat_info2_window_t4

0x2f1d,	// (0x00019769) popup_blid_sat_info2_window_t5

0x2f2b,	// (0x00019777) popup_blid_sat_info2_window_t6

0x2f3b,	// (0x00019787) popup_blid_sat_info2_window_t7

0x2f49,	// (0x00019795) popup_blid_sat_info2_window_t8

0x2f57,	// (0x000197a3) popup_blid_sat_info2_window_t9

0x2f65,	// (0x000197b1) popup_blid_sat_info2_window_t10

0x3026,	// (0x00019872) aid_firma_cardinal_ParamLimits

0x303a,	// (0x00019886) blid_firmament_pane_t1_ParamLimits

0x3051,	// (0x0001989d) blid_firmament_pane_t2_ParamLimits

0x3068,	// (0x000198b4) blid_firmament_pane_t3_ParamLimits

0x307f,	// (0x000198cb) blid_firmament_pane_t4_ParamLimits

0xf64b,	// (0x00025e97) blid_firmament_pane_t_ParamLimits

0x3096,	// (0x000198e2) blid_sat_info_pane_ParamLimits

0x74f4,	// (0x0001dd40) main_cam_set_pane_ParamLimits

0xb93e,	// (0x0002218a) aid_size_cell_colour_35_ParamLimits

0xb958,	// (0x000221a4) aid_size_cell_colour_112_ParamLimits

0xb96f,	// (0x000221bb) aid_size_cell_effect_ParamLimits

0x02d2,	// (0x00016b1e) bg_tb_trans_pane_cp02_ParamLimits

0x1205,	// (0x00017a51) heading_imed_pane_ParamLimits

0xb989,	// (0x000221d5) listscroll_imed_pane_ParamLimits

0x22cb,	// (0x00018b17) popup_call2_audio_first_window_g5_ParamLimits

0x22cb,	// (0x00018b17) popup_call2_audio_first_window_g5

0x7b78,	// (0x0001e3c4) aid_size_touch_image3_arrow_left_ParamLimits

0x7b78,	// (0x0001e3c4) aid_size_touch_image3_arrow_left

0x7b8e,	// (0x0001e3da) aid_size_touch_image3_arrow_right_ParamLimits

0x7b8e,	// (0x0001e3da) aid_size_touch_image3_arrow_right

0x84c1,	// (0x0001ed0d) vid4_progress_pane_t3

0xbb0a,	// (0x00022356) main_hwr_training_symbol_option_pane_ParamLimits

0xbb0a,	// (0x00022356) main_hwr_training_symbol_option_pane

0x379c,	// (0x00019fe8) popup_hwr_training_preview_window_ParamLimits

0x379c,	// (0x00019fe8) popup_hwr_training_preview_window

0x7836,	// (0x0001e082) hwr_training_navi_pane_g5_ParamLimits

0x7836,	// (0x0001e082) hwr_training_navi_pane_g5

0x3d39,	// (0x0001a585) popup_char_count_window

0x708e,	// (0x0001d8da) bg_popup_sub_pane_cp20_ParamLimits

0x839a,	// (0x0001ebe6) list_vitu2_match_list_pane_ParamLimits

0x83a6,	// (0x0001ebf2) vitu2_page_scroll_pane_ParamLimits

0x83a6,	// (0x0001ebf2) vitu2_page_scroll_pane

0x43cc,	// (0x0001ac18) list_single_hwr_training_symbol_option_pane_ParamLimits

0x43cc,	// (0x0001ac18) list_single_hwr_training_symbol_option_pane

0x43df,	// (0x0001ac2b) list_single_hwr_training_symbol_option_pane_g1

0x43e7,	// (0x0001ac33) list_single_hwr_training_symbol_option_pane_t1

0x43f5,	// (0x0001ac41) bg_button_pane_cp023

0x43fe,	// (0x0001ac4a) bg_button_pane_cp024

0x4431,	// (0x0001ac7d) vitu2_page_scroll_pane_g1

0x4439,	// (0x0001ac85) vitu2_page_scroll_pane_g2

0x0001,

0xfa34,	// (0x00026280) vitu2_page_scroll_pane_g

0x4441,	// (0x0001ac8d) vitu2_page_scroll_pane_t1

0x2e10,	// (0x0001965c) popup_char_count_window_g1

0x4450,	// (0x0001ac9c) popup_char_count_window_g2

0x4459,	// (0x0001aca5) popup_char_count_window_g3

0x0002,

0xfa39,	// (0x00026285) popup_char_count_window_g

0x4462,	// (0x0001acae) popup_char_count_window_t1

0x709c,	// (0x0001d8e8) main_vded2_pane

0x354f,	// (0x00019d9b) aid_size_cell_imed_line

0x3559,	// (0x00019da5) grid_imed_line_width_pane

0x7fa6,	// (0x0001e7f2) vid4_indicators_pane_g4

0x4470,	// (0x0001acbc) cell_imed_line_width_pane_ParamLimits

0x4470,	// (0x0001acbc) cell_imed_line_width_pane

0x4484,	// (0x0001acd0) cell_imed_line_width_pane_g1

0x448d,	// (0x0001acd9) cell_imed_line_width_pane_g2

0x0001,

0xfa40,	// (0x0002628c) cell_imed_line_width_pane_g

0xc90a,	// (0x00023156) main_vded2_pane_g1_ParamLimits

0xc90a,	// (0x00023156) main_vded2_pane_g1

0xc917,	// (0x00023163) main_vded2_pane_g2_ParamLimits

0xc917,	// (0x00023163) main_vded2_pane_g2

0x0001,

0xfa45,	// (0x00026291) main_vded2_pane_g_ParamLimits

0xfa45,	// (0x00026291) main_vded2_pane_g

0xc925,	// (0x00023171) vded2_slider_pane_ParamLimits

0xc925,	// (0x00023171) vded2_slider_pane

0xc932,	// (0x0002317e) aid_size_touch_vded2_end

0xc93c,	// (0x00023188) aid_size_touch_vded2_playhead

0x4495,	// (0x0001ace1) aid_size_touch_vded2_start

0x449d,	// (0x0001ace9) vded2_slider_bg_pane

0x44a6,	// (0x0001acf2) vded2_slider_pane_g1

0x44af,	// (0x0001acfb) vded2_slider_pane_g2

0xc944,	// (0x00023190) vded2_slider_pane_g3

0x0002,

0xfa4a,	// (0x00026296) vded2_slider_pane_g

0x44b7,	// (0x0001ad03) vded2_slider_bg_pane_g1

0x44c0,	// (0x0001ad0c) vded2_slider_bg_pane_g2

0x44c9,	// (0x0001ad15) vded2_slider_bg_pane_g3

0x0002,

0xfa51,	// (0x0002629d) vded2_slider_bg_pane_g

0xa5dd,	// (0x00020e29) aid_postcard_touch_down_pane_ParamLimits

0xa5dd,	// (0x00020e29) aid_postcard_touch_down_pane

0xa5ed,	// (0x00020e39) aid_postcard_touch_up_pane_ParamLimits

0xa5ed,	// (0x00020e39) aid_postcard_touch_up_pane

0x709c,	// (0x0001d8e8) main_blid2_pane

0x751d,	// (0x0001dd69) popup_blid2_search_window

0x0263,	// (0x00016aaf) blid2_gps_pane

0x0263,	// (0x00016aaf) blid2_navig_pane

0x0263,	// (0x00016aaf) blid2_search_pane

0x0263,	// (0x00016aaf) blid2_tripm_pane

0xc94d,	// (0x00023199) blid2_search_pane_g1_ParamLimits

0xc94d,	// (0x00023199) blid2_search_pane_g1

0xc95d,	// (0x000231a9) blid2_search_pane_t1_ParamLimits

0xc95d,	// (0x000231a9) blid2_search_pane_t1

0xc96f,	// (0x000231bb) aid_size_cell_blid2_gps_ParamLimits

0xc96f,	// (0x000231bb) aid_size_cell_blid2_gps

0xc97f,	// (0x000231cb) blid2_gps_pane_g1_ParamLimits

0xc97f,	// (0x000231cb) blid2_gps_pane_g1

0xc98b,	// (0x000231d7) grid_blid2_satellite_pane_ParamLimits

0xc98b,	// (0x000231d7) grid_blid2_satellite_pane

0xc99b,	// (0x000231e7) blid2_navig_pane_g1_ParamLimits

0xc99b,	// (0x000231e7) blid2_navig_pane_g1

0xc9a7,	// (0x000231f3) blid2_navig_pane_t1_ParamLimits

0xc9a7,	// (0x000231f3) blid2_navig_pane_t1

0xc9b9,	// (0x00023205) blid2_navig_pane_t2_ParamLimits

0xc9b9,	// (0x00023205) blid2_navig_pane_t2

0x0001,

0xfa58,	// (0x000262a4) blid2_navig_pane_t_ParamLimits

0xfa58,	// (0x000262a4) blid2_navig_pane_t

0xc9cb,	// (0x00023217) blid2_navig_ring_pane_ParamLimits

0xc9cb,	// (0x00023217) blid2_navig_ring_pane

0xc9db,	// (0x00023227) blid2_speed_pane_ParamLimits

0xc9db,	// (0x00023227) blid2_speed_pane

0xc9e7,	// (0x00023233) blid2_tripm_pane_g1_ParamLimits

0xc9e7,	// (0x00023233) blid2_tripm_pane_g1

0xc9f7,	// (0x00023243) blid2_tripm_pane_g2_ParamLimits

0xc9f7,	// (0x00023243) blid2_tripm_pane_g2

0xca03,	// (0x0002324f) blid2_tripm_pane_g3_ParamLimits

0xca03,	// (0x0002324f) blid2_tripm_pane_g3

0xca0f,	// (0x0002325b) blid2_tripm_pane_g4_ParamLimits

0xca0f,	// (0x0002325b) blid2_tripm_pane_g4

0xca1b,	// (0x00023267) blid2_tripm_pane_g5_ParamLimits

0xca1b,	// (0x00023267) blid2_tripm_pane_g5

0x0005,

0xfa5d,	// (0x000262a9) blid2_tripm_pane_g_ParamLimits

0xfa5d,	// (0x000262a9) blid2_tripm_pane_g

0xca37,	// (0x00023283) blid2_tripm_pane_t1_ParamLimits

0xca37,	// (0x00023283) blid2_tripm_pane_t1

0xca4b,	// (0x00023297) blid2_tripm_pane_t2_ParamLimits

0xca4b,	// (0x00023297) blid2_tripm_pane_t2

0xca5d,	// (0x000232a9) blid2_tripm_pane_t3_ParamLimits

0xca5d,	// (0x000232a9) blid2_tripm_pane_t3

0x0003,

0xfa6a,	// (0x000262b6) blid2_tripm_pane_t_ParamLimits

0xfa6a,	// (0x000262b6) blid2_tripm_pane_t

0xca8f,	// (0x000232db) cell_blid2_satellite_pane_ParamLimits

0xca8f,	// (0x000232db) cell_blid2_satellite_pane

0xcaa9,	// (0x000232f5) cell_blid2_satellite_pane_g1

0x44d2,	// (0x0001ad1e) cell_blid2_satellite_pane_t1

0x0ce2,	// (0x0001752e) blid2_speed_pane_g1

0x44e0,	// (0x0001ad2c) blid2_speed_pane_t1

0x44ee,	// (0x0001ad3a) blid2_speed_pane_t2

0x0001,

0xfa73,	// (0x000262bf) blid2_speed_pane_t

0x0ce2,	// (0x0001752e) blid2_navig_ring_pane_g1

0xcab2,	// (0x000232fe) blid2_navig_ring_pane_g2

0xcaba,	// (0x00023306) blid2_navig_ring_pane_g3

0xcac2,	// (0x0002330e) blid2_navig_ring_pane_g4

0xcaca,	// (0x00023316) blid2_navig_ring_pane_g5

0x0004,

0xfa78,	// (0x000262c4) blid2_navig_ring_pane_g

0x0263,	// (0x00016aaf) bg_popup_window_pane_cp011

0x44fc,	// (0x0001ad48) popup_blid2_search_window_g1

0x4504,	// (0x0001ad50) popup_blid2_search_window_t1

0x4512,	// (0x0001ad5e) popup_blid2_search_window_t2

0x0001,

0xfa83,	// (0x000262cf) popup_blid2_search_window_t

0x0de2,	// (0x0001762e) main_browser_pane_g1

0x0a5d,	// (0x000172a9) main_browser_pane_ParamLimits

0x74f4,	// (0x0001dd40) bg_button_pane_cp011_ParamLimits

0x82bf,	// (0x0001eb0b) cell_vitu2_function_pane_g1_ParamLimits

0x1899,	// (0x000180e5) bg_popup_sub_pane_cp22_ParamLimits

0xc4a1,	// (0x00022ced) input_focus_pane_cp08_ParamLimits

0xc4bc,	// (0x00022d08) popup_vitu2_query_button_pane_ParamLimits

0xc4bc,	// (0x00022d08) popup_vitu2_query_button_pane

0xc4cb,	// (0x00022d17) popup_vitu2_query_input_button_pane

0x405b,	// (0x0001a8a7) popup_vitu2_query_window_g1_ParamLimits

0xc4d5,	// (0x00022d21) popup_vitu2_query_window_g2_ParamLimits

0xf984,	// (0x000261d0) popup_vitu2_query_window_g_ParamLimits

0x0263,	// (0x00016aaf) bg_button_pane_cp026

0xcad2,	// (0x0002331e) popup_vitu2_query_input_button_pane_g1

0x0263,	// (0x00016aaf) bg_button_pane_cp025

0x4520,	// (0x0001ad6c) popup_vitu2_query_button_pane_t1

0xaff9,	// (0x00021845) main_mp3_pane_t6

0xb009,	// (0x00021855) popup_slider_window_cp01

0x7e83,	// (0x0001e6cf) cam4_battery_pane

0x7f63,	// (0x0001e7af) cam4_battery_pane_cp02

0x8444,	// (0x0001ec90) cam4_battery_pane_cp01

0x8444,	// (0x0001ec90) cam4_battery_pane_cp03

0x452e,	// (0x0001ad7a) cam4_battery_pane_g1

0x0ce2,	// (0x0001752e) cam4_battery_pane_g2

0x0001,

0xfa88,	// (0x000262d4) cam4_battery_pane_g

0x2f73,	// (0x000197bf) popup_blid_sat_info2_window_t11

0x15e3,	// (0x00017e2f) aid_size_touch_mv_arrow_left_ParamLimits

0x160c,	// (0x00017e58) aid_size_touch_mv_arrow_right_ParamLimits

0x166a,	// (0x00017eb6) navi_pane_g1_ParamLimits

0x1676,	// (0x00017ec2) navi_pane_g2_ParamLimits

0x16a4,	// (0x00017ef0) navi_pane_g3_ParamLimits

0xf35f,	// (0x00025bab) navi_pane_g_ParamLimits

0xa2a9,	// (0x00020af5) navi_pane_mv_t1_ParamLimits

0xb995,	// (0x000221e1) grid_imed_effect_pane_ParamLimits

0x8ed3,	// (0x0001f71f) aid_placing_vt_slider_lsc

0x0d31,	// (0x0001757d) aid_placing_vt_slider_prt

0x02d2,	// (0x00016b1e) bg_tb_trans_pane_cp01_ParamLimits

0x31f3,	// (0x00019a3f) popup_image_details_window_g1_ParamLimits

0x3206,	// (0x00019a52) popup_image_details_window_g2_ParamLimits

0x321b,	// (0x00019a67) popup_image_details_window_g3_ParamLimits

0x321b,	// (0x00019a67) popup_image_details_window_g3

0xf68b,	// (0x00025ed7) popup_image_details_window_g_ParamLimits

0x322f,	// (0x00019a7b) popup_image_details_window_t1_ParamLimits

0x3241,	// (0x00019a8d) popup_image_details_window_t2_ParamLimits

0x325a,	// (0x00019aa6) popup_image_details_window_t3_ParamLimits

0x326e,	// (0x00019aba) popup_image_details_window_t4_ParamLimits

0x3289,	// (0x00019ad5) popup_image_details_window_t5_ParamLimits

0xf692,	// (0x00025ede) popup_image_details_window_t_ParamLimits

0xc81a,	// (0x00023066) cl_header_name_pane_ParamLimits

0xc81a,	// (0x00023066) cl_header_name_pane

0xcada,	// (0x00023326) cl_header_name_pane_t1_ParamLimits

0xcada,	// (0x00023326) cl_header_name_pane_t1

0xcaf1,	// (0x0002333d) cl_header_name_pane_t2_ParamLimits

0xcaf1,	// (0x0002333d) cl_header_name_pane_t2

0xcb1b,	// (0x00023367) cl_header_name_pane_t3_ParamLimits

0xcb1b,	// (0x00023367) cl_header_name_pane_t3

0x0002,

0xfa8d,	// (0x000262d9) cl_header_name_pane_t_ParamLimits

0xfa8d,	// (0x000262d9) cl_header_name_pane_t

0x1733,	// (0x00017f7f) navi_pane_mv_g2_ParamLimits

0x3d04,	// (0x0001a550) field_vitu2_entry_pane_g1_ParamLimits

0x3d10,	// (0x0001a55c) field_vitu2_entry_pane_g2_ParamLimits

0x1863,	// (0x000180af) field_vitu2_entry_pane_g3_ParamLimits

0x1863,	// (0x000180af) field_vitu2_entry_pane_g3

0xf88d,	// (0x000260d9) field_vitu2_entry_pane_g_ParamLimits

0x8185,	// (0x0001e9d1) cell_vitu2_itu_pane_g1_ParamLimits

0x819d,	// (0x0001e9e9) cell_vitu2_itu_pane_g2_ParamLimits

0x819d,	// (0x0001e9e9) cell_vitu2_itu_pane_g2

0x0001,

0xf899,	// (0x000260e5) cell_vitu2_itu_pane_g_ParamLimits

0xf899,	// (0x000260e5) cell_vitu2_itu_pane_g

0x74f4,	// (0x0001dd40) bg_vkb2_func_pane_cp05_ParamLimits

0x74f4,	// (0x0001dd40) bg_vkb2_func_pane_cp05

0x74f4,	// (0x0001dd40) bg_vkb2_func_pane_cp03

0x74f4,	// (0x0001dd40) bg_vkb2_func_pane_cp04

0x74f4,	// (0x0001dd40) bg_vkb2_func_pane_cp10_ParamLimits

0x74f4,	// (0x0001dd40) bg_vkb2_func_pane_cp10

0xc7bc,	// (0x00023008) bg_vkb2_func_pane_cp08

0xc489,	// (0x00022cd5) bg_vkb2_func_pane_cp06

0xc79f,	// (0x00022feb) bg_vkb2_func_pane_cp07

0x4407,	// (0x0001ac53) bg_vkb2_func_pane_cp11_ParamLimits

0x4407,	// (0x0001ac53) bg_vkb2_func_pane_cp11

0x441c,	// (0x0001ac68) bg_vkb2_func_pane_cp12_ParamLimits

0x441c,	// (0x0001ac68) bg_vkb2_func_pane_cp12

0x0263,	// (0x00016aaf) bg_vkb2_func_pane_cp09

0x3d4b,	// (0x0001a597) bg_vkb2_func_pane_g1

0x0ef3,	// (0x0001773f) bg_vkb2_func_pane_g2

0x3d53,	// (0x0001a59f) bg_vkb2_func_pane_g3

0x3d5b,	// (0x0001a5a7) bg_vkb2_func_pane_g4

0x4000,	// (0x0001a84c) bg_vkb2_func_pane_g5

0x3d73,	// (0x0001a5bf) bg_vkb2_func_pane_g6

0x3d7b,	// (0x0001a5c7) bg_vkb2_func_pane_g7

0x3d6b,	// (0x0001a5b7) bg_vkb2_func_pane_g8

0x0ed3,	// (0x0001771f) bg_vkb2_func_pane_g9

0x0008,

0xfa94,	// (0x000262e0) bg_vkb2_func_pane_g

0xca29,	// (0x00023275) blid2_tripm_pane_g6_ParamLimits

0xca29,	// (0x00023275) blid2_tripm_pane_g6

0x3ad3,	// (0x0001a31f) mp4_progress_pane_g1

0xca83,	// (0x000232cf) blid2_tripm_values_pane_ParamLimits

0xca83,	// (0x000232cf) blid2_tripm_values_pane

0xcb40,	// (0x0002338c) blid2_tripm_values_pane_t1

0xcb4e,	// (0x0002339a) blid2_tripm_values_pane_t2

0xcb5c,	// (0x000233a8) blid2_tripm_values_pane_t3

0xcb6a,	// (0x000233b6) blid2_tripm_values_pane_t4

0xcb78,	// (0x000233c4) blid2_tripm_values_pane_t5

0xcb86,	// (0x000233d2) blid2_tripm_values_pane_t6

0xcb94,	// (0x000233e0) blid2_tripm_values_pane_t7

0xcba2,	// (0x000233ee) blid2_tripm_values_pane_t8

0xcbb0,	// (0x000233fc) blid2_tripm_values_pane_t9

0x0008,

0xfaa7,	// (0x000262f3) blid2_tripm_values_pane_t

0x8f13,	// (0x0001f75f) call_video_pane_t1_ParamLimits

0x8f34,	// (0x0001f780) call_video_pane_t2_ParamLimits

0xf208,	// (0x00025a54) call_video_pane_t_ParamLimits

0xa58d,	// (0x00020dd9) msg_header_pane_g1_ParamLimits

0x1956,	// (0x000181a2) msg_header_pane_g2_ParamLimits

0x1956,	// (0x000181a2) msg_header_pane_g2

0x0001,

0xf402,	// (0x00025c4e) msg_header_pane_g_ParamLimits

0xf402,	// (0x00025c4e) msg_header_pane_g

0x0a5d,	// (0x000172a9) main_clock2_pane_ParamLimits

0xb7e7,	// (0x00022033) grid_clock2_toolbar_pane_ParamLimits

0xb7e7,	// (0x00022033) grid_clock2_toolbar_pane

0xb7e7,	// (0x00022033) listscroll_clock2_pane_ParamLimits

0xb7e7,	// (0x00022033) listscroll_clock2_pane

0xb897,	// (0x000220e3) main_clock2_pane_t3_ParamLimits

0xb897,	// (0x000220e3) main_clock2_pane_t3

0xb8a9,	// (0x000220f5) main_clock2_pane_t4_ParamLimits

0xb8a9,	// (0x000220f5) main_clock2_pane_t4

0x4538,	// (0x0001ad84) cell_clock2_toolbar_pane

0x4540,	// (0x0001ad8c) cell_clock2_toolbar_pane_cp01

0x4540,	// (0x0001ad8c) cell_clock2_toolbar_pane_cp02

0x4548,	// (0x0001ad94) cell_clock2_toolbar_pane_cp03

0x4550,	// (0x0001ad9c) list_clock2_pane

0x1559,	// (0x00017da5) scroll_pane_cp10

0x4558,	// (0x0001ada4) list_single_clock2_pane_ParamLimits

0x4558,	// (0x0001ada4) list_single_clock2_pane

0x0ca2,	// (0x000174ee) list_highlight_pane_cp08

0x4565,	// (0x0001adb1) list_single_clock2_pane_t1

0x4573,	// (0x0001adbf) list_single_clock2_pane_t2

0x0001,

0xfaba,	// (0x00026306) list_single_clock2_pane_t

0x0263,	// (0x00016aaf) bg_button_pane_cp10

0x4581,	// (0x0001adcd) cell_clock2_toolbar_pane_g1

0x748f,	// (0x0001dcdb) aid_main_viewer_pane_g1_ParamLimits

0x748f,	// (0x0001dcdb) aid_main_viewer_pane_g1

0x749b,	// (0x0001dce7) aid_main_viewer_pane_g2_ParamLimits

0x749b,	// (0x0001dce7) aid_main_viewer_pane_g2

0xa599,	// (0x00020de5) aid_main_viewer_pane_g3_ParamLimits

0xa599,	// (0x00020de5) aid_main_viewer_pane_g3

0xa5aa,	// (0x00020df6) aid_main_viewer_pane_g4_ParamLimits

0xa5aa,	// (0x00020df6) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x00025c5f) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x00025c5f) aid_main_viewer_pane_g

0x74e7,	// (0x0001dd33) main_calc_pane_ParamLimits

0x7502,	// (0x0001dd4e) main_dialer2_pane_ParamLimits

0x709c,	// (0x0001d8e8) main_cam6_pane

0x709c,	// (0x0001d8e8) main_vid6_pane

0xb7f3,	// (0x0002203f) listscroll_gen_pane_cp06_ParamLimits

0xb7f3,	// (0x0002203f) listscroll_gen_pane_cp06

0xb8bb,	// (0x00022107) main_clock2_pane_t5_ParamLimits

0xb8bb,	// (0x00022107) main_clock2_pane_t5

0xb908,	// (0x00022154) aid_call2_pane_cp10_ParamLimits

0xb91a,	// (0x00022166) aid_call_pane_cp10_ParamLimits

0x15d7,	// (0x00017e23) popup_clock_analogue_window_cp10_g1_ParamLimits

0x15d7,	// (0x00017e23) popup_clock_analogue_window_cp10_g2_ParamLimits

0x771d,	// (0x0001df69) popup_clock_analogue_window_cp10_g3_ParamLimits

0x771d,	// (0x0001df69) popup_clock_analogue_window_cp10_g4_ParamLimits

0x15d7,	// (0x00017e23) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf747,	// (0x00025f93) popup_clock_analogue_window_cp10_g_ParamLimits

0x7733,	// (0x0001df7f) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbbdc,	// (0x00022428) cell_dialer2_keypad_pane_g2_ParamLimits

0xbbdc,	// (0x00022428) cell_dialer2_keypad_pane_g2

0x0001,

0xf82c,	// (0x00026078) cell_dialer2_keypad_pane_g_ParamLimits

0xf82c,	// (0x00026078) cell_dialer2_keypad_pane_g

0xbbf8,	// (0x00022444) cell_dialer2_keypad_pane_t1

0xc03a,	// (0x00022886) main_cset_text2_pane_ParamLimits

0xc03a,	// (0x00022886) main_cset_text2_pane

0x4247,	// (0x0001aa93) area_vitu2_query_pane_g1_ParamLimits

0xc73e,	// (0x00022f8a) area_vitu2_query_pane_g2_ParamLimits

0xf9d7,	// (0x00026223) area_vitu2_query_pane_g_ParamLimits

0x42cb,	// (0x0001ab17) area_vitu2_query_pane_t7_ParamLimits

0x42cb,	// (0x0001ab17) area_vitu2_query_pane_t7

0xc489,	// (0x00022cd5) bg_button_pane_cp018_ParamLimits

0xc79f,	// (0x00022feb) bg_button_pane_cp021_ParamLimits

0xc7ab,	// (0x00022ff7) bg_button_pane_cp022_ParamLimits

0xc7bc,	// (0x00023008) bg_vkb2_func_pane_cp08_ParamLimits

0xc489,	// (0x00022cd5) bg_vkb2_func_pane_cp06_ParamLimits

0xc79f,	// (0x00022feb) bg_vkb2_func_pane_cp07_ParamLimits

0xc7ce,	// (0x0002301a) input_focus_pane_cp09_ParamLimits

0x84e9,	// (0x0001ed35) cam6_autofocus_pane_ParamLimits

0x84e9,	// (0x0001ed35) cam6_autofocus_pane

0x850b,	// (0x0001ed57) cam6_image_uncrop_pane_ParamLimits

0x850b,	// (0x0001ed57) cam6_image_uncrop_pane

0x8538,	// (0x0001ed84) cam6_indi_pane_ParamLimits

0x8538,	// (0x0001ed84) cam6_indi_pane

0x8552,	// (0x0001ed9e) cam6_mode_pane_ParamLimits

0x8552,	// (0x0001ed9e) cam6_mode_pane

0x8566,	// (0x0001edb2) cam6_timer_pane_ParamLimits

0x8566,	// (0x0001edb2) cam6_timer_pane

0x8572,	// (0x0001edbe) cam6_zoom_pane_ParamLimits

0x8572,	// (0x0001edbe) cam6_zoom_pane

0xcbbe,	// (0x0002340a) cam6_mode_pane_g1_ParamLimits

0xcbbe,	// (0x0002340a) cam6_mode_pane_g1

0xcbca,	// (0x00023416) cam6_mode_pane_g2_ParamLimits

0xcbca,	// (0x00023416) cam6_mode_pane_g2

0xcbd6,	// (0x00023422) cam6_mode_pane_g3_ParamLimits

0xcbd6,	// (0x00023422) cam6_mode_pane_g3

0xcbe2,	// (0x0002342e) cam6_mode_pane_g4_ParamLimits

0xcbe2,	// (0x0002342e) cam6_mode_pane_g4

0x0003,

0xfabf,	// (0x0002630b) cam6_mode_pane_g_ParamLimits

0xfabf,	// (0x0002630b) cam6_mode_pane_g

0x2d29,	// (0x00019575) bg_tb_trans_pane_cp08_ParamLimits

0x2d29,	// (0x00019575) bg_tb_trans_pane_cp08

0x4597,	// (0x0001ade3) cam6_battery_pane_ParamLimits

0x4597,	// (0x0001ade3) cam6_battery_pane

0x45ad,	// (0x0001adf9) cam6_indi_pane_g1_ParamLimits

0x45ad,	// (0x0001adf9) cam6_indi_pane_g1

0x45bf,	// (0x0001ae0b) cam6_indi_pane_g2_ParamLimits

0x45bf,	// (0x0001ae0b) cam6_indi_pane_g2

0x45d1,	// (0x0001ae1d) cam6_indi_pane_g3_ParamLimits

0x45d1,	// (0x0001ae1d) cam6_indi_pane_g3

0x0002,

0xfac8,	// (0x00026314) cam6_indi_pane_g_ParamLimits

0xfac8,	// (0x00026314) cam6_indi_pane_g

0x45e3,	// (0x0001ae2f) cam6_indi_pane_t1_ParamLimits

0x45e3,	// (0x0001ae2f) cam6_indi_pane_t1

0xbd31,	// (0x0002257d) cam6_autofocus_pane_g1

0xbd29,	// (0x00022575) cam6_autofocus_pane_g2

0xbd41,	// (0x0002258d) cam6_autofocus_pane_g3

0xbd39,	// (0x00022585) cam6_autofocus_pane_g4

0x0003,

0xfacf,	// (0x0002631b) cam6_autofocus_pane_g

0x4609,	// (0x0001ae55) cam6_timer_pane_g1

0x4611,	// (0x0001ae5d) cam6_timer_pane_t1

0x461f,	// (0x0001ae6b) cam6_zoom_cont_pane

0x4627,	// (0x0001ae73) cam6_zoom_pane_g1

0x462f,	// (0x0001ae7b) cam6_zoom_pane_g2

0xcbee,	// (0x0002343a) cam6_zoom_pane_g3

0x0002,

0xfad8,	// (0x00026324) cam6_zoom_pane_g

0x0ce2,	// (0x0001752e) cam6_battery_pane_g1

0x0ce2,	// (0x0001752e) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x00025c0f) cam6_battery_pane_g

0x4637,	// (0x0001ae83) cam6_zoom_cont_pane_g1

0x4640,	// (0x0001ae8c) cam6_zoom_cont_pane_g2

0x4649,	// (0x0001ae95) cam6_zoom_cont_pane_g3

0x0002,

0xfadf,	// (0x0002632b) cam6_zoom_cont_pane_g

0xcc0b,	// (0x00023457) cam6_mode_pane_cp_ParamLimits

0xcc0b,	// (0x00023457) cam6_mode_pane_cp

0xcc1f,	// (0x0002346b) cam6_zoom_pane_cp_ParamLimits

0xcc1f,	// (0x0002346b) cam6_zoom_pane_cp

0xcc37,	// (0x00023483) vid6_image_uncrop_cif_pane_ParamLimits

0xcc37,	// (0x00023483) vid6_image_uncrop_cif_pane

0xcc63,	// (0x000234af) vid6_image_uncrop_nhd_pane_ParamLimits

0xcc63,	// (0x000234af) vid6_image_uncrop_nhd_pane

0xcc80,	// (0x000234cc) vid6_image_uncrop_vga_pane_ParamLimits

0xcc80,	// (0x000234cc) vid6_image_uncrop_vga_pane

0xcc9f,	// (0x000234eb) vid6_image_uncrop_wvga_pane_ParamLimits

0xcc9f,	// (0x000234eb) vid6_image_uncrop_wvga_pane

0xccbc,	// (0x00023508) vid6_indi_pane_ParamLimits

0xccbc,	// (0x00023508) vid6_indi_pane

0x2d29,	// (0x00019575) bg_tb_trans_pane_cp09_ParamLimits

0x2d29,	// (0x00019575) bg_tb_trans_pane_cp09

0x4661,	// (0x0001aead) cam6_battery_pane_cp_ParamLimits

0x4661,	// (0x0001aead) cam6_battery_pane_cp

0x466d,	// (0x0001aeb9) vid6_indi_pane_g1_ParamLimits

0x466d,	// (0x0001aeb9) vid6_indi_pane_g1

0x467f,	// (0x0001aecb) vid6_indi_pane_g2_ParamLimits

0x467f,	// (0x0001aecb) vid6_indi_pane_g2

0x4691,	// (0x0001aedd) vid6_indi_pane_g3_ParamLimits

0x4691,	// (0x0001aedd) vid6_indi_pane_g3

0x46a6,	// (0x0001aef2) vid6_indi_pane_g4_ParamLimits

0x46a6,	// (0x0001aef2) vid6_indi_pane_g4

0x46bb,	// (0x0001af07) vid6_indi_pane_g5_ParamLimits

0x46bb,	// (0x0001af07) vid6_indi_pane_g5

0x0004,

0xfae6,	// (0x00026332) vid6_indi_pane_g_ParamLimits

0xfae6,	// (0x00026332) vid6_indi_pane_g

0x46d5,	// (0x0001af21) vid6_indi_pane_t1_ParamLimits

0x46d5,	// (0x0001af21) vid6_indi_pane_t1

0x46eb,	// (0x0001af37) vid6_indi_pane_t2_ParamLimits

0x46eb,	// (0x0001af37) vid6_indi_pane_t2

0x4713,	// (0x0001af5f) vid6_indi_pane_t3_ParamLimits

0x4713,	// (0x0001af5f) vid6_indi_pane_t3

0x473b,	// (0x0001af87) vid6_indi_pane_t4_ParamLimits

0x473b,	// (0x0001af87) vid6_indi_pane_t4

0x0003,

0xfaf1,	// (0x0002633d) vid6_indi_pane_t_ParamLimits

0xfaf1,	// (0x0002633d) vid6_indi_pane_t

0x475f,	// (0x0001afab) wait_bar_pane_cp08

0xcce1,	// (0x0002352d) main_cset_text2_pane_t1_ParamLimits

0xcce1,	// (0x0002352d) main_cset_text2_pane_t1

0xcbf6,	// (0x00023442) listscroll_gen_pane_cp06_t1_ParamLimits

0xcbf6,	// (0x00023442) listscroll_gen_pane_cp06_t1

0x709c,	// (0x0001d8e8) main_cam6_set_pane

0x5138,	// (0x0001b984) bg_tb_trans_pane_cp06_ParamLimits

0x7e8b,	// (0x0001e6d7) cam4_indicators_pane_g1_ParamLimits

0x7e9c,	// (0x0001e6e8) cam4_indicators_pane_g2_ParamLimits

0xf869,	// (0x000260b5) cam4_indicators_pane_g_ParamLimits

0x7eba,	// (0x0001e706) cam4_indicators_pane_t1_ParamLimits

0x74f4,	// (0x0001dd40) bg_tb_trans_pane_cp07_ParamLimits

0x7f6d,	// (0x0001e7b9) vid4_indicators_pane_g1_ParamLimits

0x7f81,	// (0x0001e7cd) vid4_indicators_pane_g2_ParamLimits

0x7f95,	// (0x0001e7e1) vid4_indicators_pane_g3_ParamLimits

0x7fa6,	// (0x0001e7f2) vid4_indicators_pane_g4_ParamLimits

0xf87b,	// (0x000260c7) vid4_indicators_pane_g_ParamLimits

0x7fc4,	// (0x0001e810) vid4_indicators_pane_t1_ParamLimits

0x844c,	// (0x0001ec98) vid4_progress_pane_g1_ParamLimits

0x845c,	// (0x0001eca8) vid4_progress_pane_g2_ParamLimits

0x846c,	// (0x0001ecb8) vid4_progress_pane_g3_ParamLimits

0x847e,	// (0x0001ecca) vid4_progress_pane_g4_ParamLimits

0xfa22,	// (0x0002626e) vid4_progress_pane_g_ParamLimits

0x8496,	// (0x0001ece2) vid4_progress_pane_t1_ParamLimits

0x84ac,	// (0x0001ecf8) vid4_progress_pane_t2_ParamLimits

0x84c1,	// (0x0001ed0d) vid4_progress_pane_t3_ParamLimits

0xfa2d,	// (0x00026279) vid4_progress_pane_t_ParamLimits

0x84d6,	// (0x0001ed22) wait_bar_pane_cp07_ParamLimits

0xcd14,	// (0x00023560) main_cam6_set_pane_g2_ParamLimits

0xcd14,	// (0x00023560) main_cam6_set_pane_g2

0xcd20,	// (0x0002356c) main_cset6_listscroll_pane_ParamLimits

0xcd20,	// (0x0002356c) main_cset6_listscroll_pane

0xcd4b,	// (0x00023597) main_cset6_slider_pane_ParamLimits

0xcd4b,	// (0x00023597) main_cset6_slider_pane

0xcd57,	// (0x000235a3) main_cset6_text2_pane_ParamLimits

0xcd57,	// (0x000235a3) main_cset6_text2_pane

0x476e,	// (0x0001afba) main_cset6_text_pane

0x4776,	// (0x0001afc2) main_cset_list_pane_copy1_ParamLimits

0x4776,	// (0x0001afc2) main_cset_list_pane_copy1

0x4786,	// (0x0001afd2) scroll_pane_cp028_copy1

0xcd6a,	// (0x000235b6) cset_list_set_pane_copy1

0xcd7d,	// (0x000235c9) aid_position_infowindow_above_copy1

0xcd85,	// (0x000235d1) aid_position_infowindow_below_copy1

0xcd8d,	// (0x000235d9) cset_list_set_pane_g1_copy1

0x3f54,	// (0x0001a7a0) cset_list_set_pane_g3_copy1_ParamLimits

0x3f54,	// (0x0001a7a0) cset_list_set_pane_g3_copy1

0x3f63,	// (0x0001a7af) cset_list_set_pane_t1_copy1_ParamLimits

0x3f63,	// (0x0001a7af) cset_list_set_pane_t1_copy1

0x02d2,	// (0x00016b1e) list_highlight_pane_cp021_copy1_ParamLimits

0x02d2,	// (0x00016b1e) list_highlight_pane_cp021_copy1

0x478f,	// (0x0001afdb) cset6_slider_pane_ParamLimits

0x478f,	// (0x0001afdb) cset6_slider_pane

0x47bb,	// (0x0001b007) main_cset6_slider_pane_g1_ParamLimits

0x47bb,	// (0x0001b007) main_cset6_slider_pane_g1

0xcd95,	// (0x000235e1) main_cset6_slider_pane_g2_ParamLimits

0xcd95,	// (0x000235e1) main_cset6_slider_pane_g2

0x47e3,	// (0x0001b02f) main_cset6_slider_pane_g3_ParamLimits

0x47e3,	// (0x0001b02f) main_cset6_slider_pane_g3

0xcdbd,	// (0x00023609) main_cset6_slider_pane_g4_ParamLimits

0xcdbd,	// (0x00023609) main_cset6_slider_pane_g4

0xcdc9,	// (0x00023615) main_cset6_slider_pane_g5_ParamLimits

0xcdc9,	// (0x00023615) main_cset6_slider_pane_g5

0x3e7a,	// (0x0001a6c6) main_cset6_slider_pane_g7_ParamLimits

0x3e7a,	// (0x0001a6c6) main_cset6_slider_pane_g7

0x3e86,	// (0x0001a6d2) main_cset6_slider_pane_g8_ParamLimits

0x3e86,	// (0x0001a6d2) main_cset6_slider_pane_g8

0xcdd7,	// (0x00023623) main_cset6_slider_pane_g9_ParamLimits

0xcdd7,	// (0x00023623) main_cset6_slider_pane_g9

0xcde3,	// (0x0002362f) main_cset6_slider_pane_g10_ParamLimits

0xcde3,	// (0x0002362f) main_cset6_slider_pane_g10

0xcdef,	// (0x0002363b) main_cset6_slider_pane_g11_ParamLimits

0xcdef,	// (0x0002363b) main_cset6_slider_pane_g11

0xcdfb,	// (0x00023647) main_cset6_slider_pane_g12_ParamLimits

0xcdfb,	// (0x00023647) main_cset6_slider_pane_g12

0xce07,	// (0x00023653) main_cset6_slider_pane_g13_ParamLimits

0xce07,	// (0x00023653) main_cset6_slider_pane_g13

0xce13,	// (0x0002365f) main_cset6_slider_pane_g14_ParamLimits

0xce13,	// (0x0002365f) main_cset6_slider_pane_g14

0xce1f,	// (0x0002366b) main_cset6_slider_pane_g15_ParamLimits

0xce1f,	// (0x0002366b) main_cset6_slider_pane_g15

0xce37,	// (0x00023683) main_cset6_slider_pane_g16_ParamLimits

0xce37,	// (0x00023683) main_cset6_slider_pane_g16

0xce45,	// (0x00023691) main_cset6_slider_pane_g17_ParamLimits

0xce45,	// (0x00023691) main_cset6_slider_pane_g17

0x0011,

0xfafa,	// (0x00026346) main_cset6_slider_pane_g_ParamLimits

0xfafa,	// (0x00026346) main_cset6_slider_pane_g

0x47ef,	// (0x0001b03b) main_cset6_slider_pane_t1_ParamLimits

0x47ef,	// (0x0001b03b) main_cset6_slider_pane_t1

0xce6b,	// (0x000236b7) main_cset6_slider_pane_t2_ParamLimits

0xce6b,	// (0x000236b7) main_cset6_slider_pane_t2

0xce96,	// (0x000236e2) main_cset6_slider_pane_t3_ParamLimits

0xce96,	// (0x000236e2) main_cset6_slider_pane_t3

0xcec1,	// (0x0002370d) main_cset6_slider_pane_t4_ParamLimits

0xcec1,	// (0x0002370d) main_cset6_slider_pane_t4

0xceec,	// (0x00023738) main_cset6_slider_pane_t5_ParamLimits

0xceec,	// (0x00023738) main_cset6_slider_pane_t5

0x4830,	// (0x0001b07c) main_cset6_slider_pane_t7_ParamLimits

0x4830,	// (0x0001b07c) main_cset6_slider_pane_t7

0xcf19,	// (0x00023765) main_cset6_slider_pane_t8_ParamLimits

0xcf19,	// (0x00023765) main_cset6_slider_pane_t8

0xcf3d,	// (0x00023789) main_cset6_slider_pane_t9_ParamLimits

0xcf3d,	// (0x00023789) main_cset6_slider_pane_t9

0xcf61,	// (0x000237ad) main_cset6_slider_pane_t10_ParamLimits

0xcf61,	// (0x000237ad) main_cset6_slider_pane_t10

0xcf85,	// (0x000237d1) main_cset6_slider_pane_t11_ParamLimits

0xcf85,	// (0x000237d1) main_cset6_slider_pane_t11

0x4866,	// (0x0001b0b2) main_cset6_slider_pane_t14_ParamLimits

0x4866,	// (0x0001b0b2) main_cset6_slider_pane_t14

0x489f,	// (0x0001b0eb) main_cset6_slider_pane_t15_ParamLimits

0x489f,	// (0x0001b0eb) main_cset6_slider_pane_t15

0x000b,

0xfb1f,	// (0x0002636b) main_cset6_slider_pane_t_ParamLimits

0xfb1f,	// (0x0002636b) main_cset6_slider_pane_t

0x3f98,	// (0x0001a7e4) cset_slider_pane_g1_copy1

0x3fa1,	// (0x0001a7ed) cset_slider_pane_g2_copy1

0x3faa,	// (0x0001a7f6) cset_slider_pane_g3_copy1

0x0263,	// (0x00016aaf) bg_popup_sub_pane_cp011_copy1

0x48d8,	// (0x0001b124) main_cset_text_pane_g1_copy1

0x406f,	// (0x0001a8bb) main_cset_text_pane_t1_copy1

0x407d,	// (0x0001a8c9) main_cset_text_pane_t2_copy1

0x408b,	// (0x0001a8d7) main_cset_text_pane_t3_copy1

0x4099,	// (0x0001a8e5) main_cset_text_pane_t4_copy1

0x40a7,	// (0x0001a8f3) main_cset_text_pane_t5_copy1

0x48e0,	// (0x0001b12c) main_cset_text_pane_t6_copy1

0x48ee,	// (0x0001b13a) main_cset_text_pane_t7_copy1

0xcfc6,	// (0x00023812) main_cset_text2_pane_t1_copy1

0x74f4,	// (0x0001dd40) main_ncimui_pane

0x7553,	// (0x0001dd9f) popup_query_ncimui_window_ParamLimits

0x7553,	// (0x0001dd9f) popup_query_ncimui_window

0x332a,	// (0x00019b76) field_cale_ev2_pane_g4_ParamLimits

0x332a,	// (0x00019b76) field_cale_ev2_pane_g4

0xbb7c,	// (0x000223c8) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbb7c,	// (0x000223c8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf803,	// (0x0002604f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf803,	// (0x0002604f) cell_video_dialer_keypad_pane_g

0xbb94,	// (0x000223e0) cell_video_dialer_keypad_pane_t1

0x0263,	// (0x00016aaf) bg_popup_window_pane_cp012

0x2b1e,	// (0x0001936a) heading_pane_cp06

0x491a,	// (0x0001b166) ncim_query_content_pane

0x0263,	// (0x00016aaf) bg_popup_heading_pane_cp01

0x4922,	// (0x0001b16e) ncim_heading_pane_t1

0x4930,	// (0x0001b17c) ncim_indicator_popup_pane

0x4942,	// (0x0001b18e) ncim_query_button_pane

0x4956,	// (0x0001b1a2) ncim_query_content_pane_t1

0x4968,	// (0x0001b1b4) ncim_query_content_pane_t2

0x0005,

0xfb63,	// (0x000263af) ncim_query_content_pane_t

0x49a2,	// (0x0001b1ee) ncim_query_list_pane

0x49b4,	// (0x0001b200) ncim_query_popup_pane

0x4930,	// (0x0001b17c) ncim_indicator_popup_pane_ParamLimits

0xd119,	// (0x00023965) ncim_query_content_pane_g1_ParamLimits

0xd119,	// (0x00023965) ncim_query_content_pane_g1

0x4956,	// (0x0001b1a2) ncim_query_content_pane_t1_ParamLimits

0x4968,	// (0x0001b1b4) ncim_query_content_pane_t2_ParamLimits

0xd125,	// (0x00023971) ncim_query_content_pane_t3_ParamLimits

0xd125,	// (0x00023971) ncim_query_content_pane_t3

0xd142,	// (0x0002398e) ncim_query_content_pane_t4_ParamLimits

0xd142,	// (0x0002398e) ncim_query_content_pane_t4

0xd15f,	// (0x000239ab) ncim_query_content_pane_t5_ParamLimits

0xd15f,	// (0x000239ab) ncim_query_content_pane_t5

0x497a,	// (0x0001b1c6) ncim_query_content_pane_t6_ParamLimits

0x497a,	// (0x0001b1c6) ncim_query_content_pane_t6

0xfb63,	// (0x000263af) ncim_query_content_pane_t_ParamLimits

0x49a2,	// (0x0001b1ee) ncim_query_list_pane_ParamLimits

0x49b4,	// (0x0001b200) ncim_query_popup_pane_ParamLimits

0x49c8,	// (0x0001b214) wait_bar_pane_cp04

0x0263,	// (0x00016aaf) input_focus_pane_cp011

0x49d0,	// (0x0001b21c) ncim_query_popup_pane_t1

0x49de,	// (0x0001b22a) ncim_list_query_list_pane_ParamLimits

0x49de,	// (0x0001b22a) ncim_list_query_list_pane

0x0263,	// (0x00016aaf) bg_button_pane_cp027

0x49eb,	// (0x0001b237) ncim_query_button_pane_g1

0x0263,	// (0x00016aaf) list_highlight_pane_cp012

0x49f5,	// (0x0001b241) ncim_list_query_list_pane_g1

0x49fd,	// (0x0001b249) ncim_list_query_list_pane_t1

0x7eab,	// (0x0001e6f7) cam4_indicators_pane_g3_ParamLimits

0x7eab,	// (0x0001e6f7) cam4_indicators_pane_g3

0x7fb2,	// (0x0001e7fe) vid4_indicators_pane_g5_ParamLimits

0x7fb2,	// (0x0001e7fe) vid4_indicators_pane_g5

0x848a,	// (0x0001ecd6) vid4_progress_pane_g5_ParamLimits

0x848a,	// (0x0001ecd6) vid4_progress_pane_g5

0xd005,	// (0x00023851) main_ncimui_pane_g1

0xd06d,	// (0x000238b9) ncimui_group_query_pane_ParamLimits

0xd06d,	// (0x000238b9) ncimui_group_query_pane

0xd0b5,	// (0x00023901) ncimui_list_pane_ParamLimits

0xd0b5,	// (0x00023901) ncimui_list_pane

0xd0dc,	// (0x00023928) ncimui_text_pane_ParamLimits

0xd0dc,	// (0x00023928) ncimui_text_pane

0xd17c,	// (0x000239c8) ncimui_text_pane_t1_ParamLimits

0xd17c,	// (0x000239c8) ncimui_text_pane_t1

0x4a0b,	// (0x0001b257) ncimui_list_single_graphic_pane_ParamLimits

0x4a0b,	// (0x0001b257) ncimui_list_single_graphic_pane

0xd19b,	// (0x000239e7) ncimui_query_pane_ParamLimits

0xd19b,	// (0x000239e7) ncimui_query_pane

0x0263,	// (0x00016aaf) list_highlight_pane_cp013

0x4a1b,	// (0x0001b267) ncim_list_query_list_pane_t1_copy1

0x49f5,	// (0x0001b241) ncim_list_single_graphic_pane_g1

0xd1ae,	// (0x000239fa) ncim_query_button_pane_cp01

0xd1ba,	// (0x00023a06) ncim_query_entry_pane_ParamLimits

0xd1ba,	// (0x00023a06) ncim_query_entry_pane

0xd1cd,	// (0x00023a19) ncimui_query_pane_g1

0xd1d9,	// (0x00023a25) ncimui_query_pane_t1_ParamLimits

0xd1d9,	// (0x00023a25) ncimui_query_pane_t1

0x02d2,	// (0x00016b1e) input_focus_pane_cp012

0x4a29,	// (0x0001b275) ncim_query_entry_pane_t1

0x0a5d,	// (0x000172a9) main_im_pane_ParamLimits

0x74f4,	// (0x0001dd40) main_mobtv_pane_ParamLimits

0x74f4,	// (0x0001dd40) main_mobtv_pane

0xce53,	// (0x0002369f) main_cset6_slider_pane_g18_ParamLimits

0xce53,	// (0x0002369f) main_cset6_slider_pane_g18

0xce5f,	// (0x000236ab) main_cset6_slider_pane_g19_ParamLimits

0xce5f,	// (0x000236ab) main_cset6_slider_pane_g19

0x1863,	// (0x000180af) bg_main_mobtv_pane_ParamLimits

0x1863,	// (0x000180af) bg_main_mobtv_pane

0xd1f2,	// (0x00023a3e) main_mobtv_info_pane

0xd1fd,	// (0x00023a49) main_mobtv_loading_pane_ParamLimits

0xd1fd,	// (0x00023a49) main_mobtv_loading_pane

0x4a3b,	// (0x0001b287) main_mobtv_pg_channel_list_pane

0x4a45,	// (0x0001b291) main_mobtv_pg_hdr_pane

0xd20a,	// (0x00023a56) main_mobtv_programe_curr_pane_ParamLimits

0xd20a,	// (0x00023a56) main_mobtv_programe_curr_pane

0xd217,	// (0x00023a63) main_mobtv_programe_next_pane_ParamLimits

0xd217,	// (0x00023a63) main_mobtv_programe_next_pane

0x4a4e,	// (0x0001b29a) popup_mobtv_noti_window

0x0ce2,	// (0x0001752e) main_tv_pg_hdr_pane_g1

0x4a56,	// (0x0001b2a2) main_tv_pg_hdr_pane_g2

0x4a5e,	// (0x0001b2aa) main_tv_pg_hdr_pane_g3

0x4a66,	// (0x0001b2b2) main_tv_pg_hdr_pane_g4

0x4a6e,	// (0x0001b2ba) main_tv_pg_hdr_pane_g5

0x4a78,	// (0x0001b2c4) main_tv_pg_hdr_pane_g6

0x4a82,	// (0x0001b2ce) main_tv_pg_hdr_pane_g7

0x4a8c,	// (0x0001b2d8) main_tv_pg_hdr_pane_g8

0x4a96,	// (0x0001b2e2) main_tv_pg_hdr_pane_g9

0x4aa0,	// (0x0001b2ec) main_tv_pg_hdr_pane_g10

0x4aaa,	// (0x0001b2f6) main_tv_pg_hdr_pane_g11

0x000a,

0xfb70,	// (0x000263bc) main_tv_pg_hdr_pane_g

0x4ab4,	// (0x0001b300) main_tv_pg_hdr_pane_t1

0x4ac2,	// (0x0001b30e) main_tv_pg_hdr_pane_t2

0x4ad0,	// (0x0001b31c) main_tv_pg_hdr_pane_t3

0x4ae0,	// (0x0001b32c) main_tv_pg_hdr_pane_t4

0x4af0,	// (0x0001b33c) main_tv_pg_hdr_pane_t5

0x0004,

0xfb87,	// (0x000263d3) main_tv_pg_hdr_pane_t

0x4b00,	// (0x0001b34c) single_mobtv_pg_channel_pane_ParamLimits

0x4b00,	// (0x0001b34c) single_mobtv_pg_channel_pane

0x4b12,	// (0x0001b35e) single_mobtv_pg_channel_table_pane

0x4b1b,	// (0x0001b367) single_mobtv_pg_channel_thumb_pane

0x4b24,	// (0x0001b370) single_tv_pg_channel_pane_g1

0x4b2d,	// (0x0001b379) single_tv_pg_channel_pane_g2

0x0001,

0xfb92,	// (0x000263de) single_tv_pg_channel_pane_g

0x09c9,	// (0x00017215) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x09c9,	// (0x00017215) bg_single_mobtv_pg_channel_thumb_pane

0x4b36,	// (0x0001b382) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4b36,	// (0x0001b382) single_mobtv_pg_channel_thumb_pane_g1

0x4b44,	// (0x0001b390) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4b44,	// (0x0001b390) single_mobtv_pg_channel_thumb_pane_g2

0x4b50,	// (0x0001b39c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4b50,	// (0x0001b39c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb97,	// (0x000263e3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb97,	// (0x000263e3) single_mobtv_pg_channel_thumb_pane_g

0x4b5c,	// (0x0001b3a8) single_mobtv_pg_channel_thumb_pane_t1

0x4b6a,	// (0x0001b3b6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb9e,	// (0x000263ea) single_mobtv_pg_channel_thumb_pane_t

0x0ce2,	// (0x0001752e) bg_single_mobtv_pg_channel_table_pane_g1

0x0ce2,	// (0x0001752e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x00025c0f) bg_single_mobtv_pg_channel_table_pane_g

0x4b78,	// (0x0001b3c4) single_mobtv_pg_channel_table_pane_t1

0x4b86,	// (0x0001b3d2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfba3,	// (0x000263ef) single_mobtv_pg_channel_table_pane_t

0xd22c,	// (0x00023a78) main_mobtv_info_pane_g1_ParamLimits

0xd22c,	// (0x00023a78) main_mobtv_info_pane_g1

0xd248,	// (0x00023a94) main_mobtv_info_pane_t1_ParamLimits

0xd248,	// (0x00023a94) main_mobtv_info_pane_t1

0xd2c0,	// (0x00023b0c) main_mobtv_info_pane_t2_ParamLimits

0xd2c0,	// (0x00023b0c) main_mobtv_info_pane_t2

0x0002,

0xfbad,	// (0x000263f9) main_mobtv_info_pane_t_ParamLimits

0xfbad,	// (0x000263f9) main_mobtv_info_pane_t

0xd34f,	// (0x00023b9b) wait_bar_pane_cp05

0xd361,	// (0x00023bad) main_mobtv_loading_pane_g1_ParamLimits

0xd361,	// (0x00023bad) main_mobtv_loading_pane_g1

0xd36f,	// (0x00023bbb) main_mobtv_loading_pane_g2_ParamLimits

0xd36f,	// (0x00023bbb) main_mobtv_loading_pane_g2

0xd37b,	// (0x00023bc7) main_mobtv_loading_pane_g3_ParamLimits

0xd37b,	// (0x00023bc7) main_mobtv_loading_pane_g3

0x0002,

0xfbb4,	// (0x00026400) main_mobtv_loading_pane_g_ParamLimits

0xfbb4,	// (0x00026400) main_mobtv_loading_pane_g

0x4b94,	// (0x0001b3e0) main_mobtv_loading_pane_t1_ParamLimits

0x4b94,	// (0x0001b3e0) main_mobtv_loading_pane_t1

0x4bac,	// (0x0001b3f8) main_mobtv_loading_pane_t2_ParamLimits

0x4bac,	// (0x0001b3f8) main_mobtv_loading_pane_t2

0x0001,

0xfbbb,	// (0x00026407) main_mobtv_loading_pane_t_ParamLimits

0xfbbb,	// (0x00026407) main_mobtv_loading_pane_t

0xd389,	// (0x00023bd5) wait_bar_pane_cp06_ParamLimits

0xd389,	// (0x00023bd5) wait_bar_pane_cp06

0x4bd0,	// (0x0001b41c) main_mobtv_programe_curr_pane_t1

0x4bde,	// (0x0001b42a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbc0,	// (0x0002640c) main_mobtv_programe_curr_pane_t

0x4bec,	// (0x0001b438) main_mobtv_programe_next_pane_t1

0x4bfa,	// (0x0001b446) main_mobtv_programe_next_pane_t2

0x4c08,	// (0x0001b454) main_mobtv_programe_next_pane_t3

0x0002,

0xfbc5,	// (0x00026411) main_mobtv_programe_next_pane_t

0x0263,	// (0x00016aaf) bg_popup_mobtv_noti_window_pane

0x4c16,	// (0x0001b462) popup_mobtv_noti_window_g1

0x4c1e,	// (0x0001b46a) popup_mobtv_noti_window_t1

0x4c2c,	// (0x0001b478) popup_mobtv_noti_window_t2

0x0001,

0xfbcc,	// (0x00026418) popup_mobtv_noti_window_t

0x0ce2,	// (0x0001752e) bg_popup_mobtv_noti_window_pane_g1

0x709c,	// (0x0001d8e8) sc_clock_pane

0x709c,	// (0x0001d8e8) main_fs_bigclock_pane

0xca71,	// (0x000232bd) blid2_tripm_pane_t4_ParamLimits

0xca71,	// (0x000232bd) blid2_tripm_pane_t4

0xd395,	// (0x00023be1) sc_clock_pane_g1_ParamLimits

0xd395,	// (0x00023be1) sc_clock_pane_g1

0xd3a3,	// (0x00023bef) sc_clock_pane_t1_ParamLimits

0xd3a3,	// (0x00023bef) sc_clock_pane_t1

0xd3b6,	// (0x00023c02) sc_clock_pane_t2_ParamLimits

0xd3b6,	// (0x00023c02) sc_clock_pane_t2

0xd3c8,	// (0x00023c14) sc_clock_pane_t3_ParamLimits

0xd3c8,	// (0x00023c14) sc_clock_pane_t3

0x0004,

0xfbd1,	// (0x0002641d) sc_clock_pane_t_ParamLimits

0xfbd1,	// (0x0002641d) sc_clock_pane_t

0xdf9d,	// (0x000247e9) main_fs_bigclock_indicator_pane_ParamLimits

0xdf9d,	// (0x000247e9) main_fs_bigclock_indicator_pane

0xd44b,	// (0x00023c97) main_fs_bigclock_pane_g1_ParamLimits

0xd44b,	// (0x00023c97) main_fs_bigclock_pane_g1

0xdfa9,	// (0x000247f5) main_fs_bigclock_pane_t1_ParamLimits

0xdfa9,	// (0x000247f5) main_fs_bigclock_pane_t1

0xdfbb,	// (0x00024807) main_fs_bigclock_pane_t2_ParamLimits

0xdfbb,	// (0x00024807) main_fs_bigclock_pane_t2

0xdfcf,	// (0x0002481b) main_fs_bigclock_pane_t3_ParamLimits

0xdfcf,	// (0x0002481b) main_fs_bigclock_pane_t3

0x0002,

0xfd62,	// (0x000265ae) main_fs_bigclock_pane_t_ParamLimits

0xfd62,	// (0x000265ae) main_fs_bigclock_pane_t

0x580b,	// (0x0001c057) main_fs_bigclock_indicator_pane_g1

0x494a,	// (0x0001b196) ncim_query_content_pane_g2_ParamLimits

0x494a,	// (0x0001b196) ncim_query_content_pane_g2

0x0001,

0xfb5e,	// (0x000263aa) ncim_query_content_pane_g_ParamLimits

0xfb5e,	// (0x000263aa) ncim_query_content_pane_g

0xd3dc,	// (0x00023c28) sc_clock_pane_t4_ParamLimits

0xd3dc,	// (0x00023c28) sc_clock_pane_t4

0x74f4,	// (0x0001dd40) main_radioblah_pane

0x7d72,	// (0x0001e5be) cell_call4_button_pane_t1_copy1_ParamLimits

0x7d72,	// (0x0001e5be) cell_call4_button_pane_t1_copy1

0xd01f,	// (0x0002386b) main_ncimui_pane_t1_ParamLimits

0xd01f,	// (0x0002386b) main_ncimui_pane_t1

0xd039,	// (0x00023885) main_ncimui_pane_t2_ParamLimits

0xd039,	// (0x00023885) main_ncimui_pane_t2

0x0002,

0xfb57,	// (0x000263a3) main_ncimui_pane_t_ParamLimits

0xfb57,	// (0x000263a3) main_ncimui_pane_t

0x4d71,	// (0x0001b5bd) main_radioblah_anim_pane_ParamLimits

0x4d71,	// (0x0001b5bd) main_radioblah_anim_pane

0x4d82,	// (0x0001b5ce) main_radioblah_info_pane_ParamLimits

0x4d82,	// (0x0001b5ce) main_radioblah_info_pane

0x4d96,	// (0x0001b5e2) main_radioblah_pane_t1_ParamLimits

0x4d96,	// (0x0001b5e2) main_radioblah_pane_t1

0x4db2,	// (0x0001b5fe) main_radioblah_pane_t2_ParamLimits

0x4db2,	// (0x0001b5fe) main_radioblah_pane_t2

0x0003,

0xfbf2,	// (0x0002643e) main_radioblah_pane_t_ParamLimits

0xfbf2,	// (0x0002643e) main_radioblah_pane_t

0xd4a1,	// (0x00023ced) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd4a1,	// (0x00023ced) main_radioblah_rocker_ctrl_pane

0x4dfa,	// (0x0001b646) main_radioblah_info_pane_t1_ParamLimits

0x4dfa,	// (0x0001b646) main_radioblah_info_pane_t1

0xd4e6,	// (0x00023d32) main_radioblah_info_pane_t2_ParamLimits

0xd4e6,	// (0x00023d32) main_radioblah_info_pane_t2

0x0003,

0xfbfb,	// (0x00026447) main_radioblah_info_pane_t_ParamLimits

0xfbfb,	// (0x00026447) main_radioblah_info_pane_t

0x0ce2,	// (0x0001752e) main_radioblah_rocker_ctrl_pane_g1

0xd596,	// (0x00023de2) main_radioblah_rocker_ctrl_pane_g2

0xd59e,	// (0x00023dea) main_radioblah_rocker_ctrl_pane_g3

0xd5a6,	// (0x00023df2) main_radioblah_rocker_ctrl_pane_g4

0xd5ae,	// (0x00023dfa) main_radioblah_rocker_ctrl_pane_g5

0xd5b6,	// (0x00023e02) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc04,	// (0x00026450) main_radioblah_rocker_ctrl_pane_g

0xcfc6,	// (0x00023812) main_cset_text2_pane_t1_copy1_ParamLimits

0x7dfd,	// (0x0001e649) cam4_image_uncrop_qvga_pane

0x7f20,	// (0x0001e76c) vid4_image_uncrop_qcif_pane

0x852a,	// (0x0001ed76) cam6_image_uncrop_qvga_pane_ParamLimits

0x852a,	// (0x0001ed76) cam6_image_uncrop_qvga_pane

0x4651,	// (0x0001ae9d) vid6_image_uncrop_qcif_pane_ParamLimits

0x4651,	// (0x0001ae9d) vid6_image_uncrop_qcif_pane

0x0263,	// (0x00016aaf) bg_popup_preview_window_pane_cp03

0x48fc,	// (0x0001b148) list_cset_text2_pane

0x4904,	// (0x0001b150) main_cset6_text2_pane_g1

0x490c,	// (0x0001b158) main_cset6_text2_pane_t1

0xd5be,	// (0x00023e0a) list_cset_text2_pane_t1_ParamLimits

0xd5be,	// (0x00023e0a) list_cset_text2_pane_t1

0x74f4,	// (0x0001dd40) main_radioblah_pane_ParamLimits

0xd33b,	// (0x00023b87) main_mobtv_info_pane_t3_ParamLimits

0xd33b,	// (0x00023b87) main_mobtv_info_pane_t3

0xd48f,	// (0x00023cdb) main_radioblah_pane_g1

0xd4ba,	// (0x00023d06) main_radioblah_info_pane_g1

0xd53b,	// (0x00023d87) main_radioblah_info_pane_t3_ParamLimits

0xd53b,	// (0x00023d87) main_radioblah_info_pane_t3

0x9ef2,	// (0x0002073e) highlight_cell_cale_month_pane_ParamLimits

0x9ef2,	// (0x0002073e) highlight_cell_cale_month_pane

0x709c,	// (0x0001d8e8) main_phob_fisheye_pane

0x339f,	// (0x00019beb) scroll_pane_cp0031_ParamLimits

0x339f,	// (0x00019beb) scroll_pane_cp0031

0x475f,	// (0x0001afab) wait_bar_pane_cp08_ParamLimits

0xcd6a,	// (0x000235b6) cset_list_set_pane_copy1_ParamLimits

0x4e34,	// (0x0001b680) highlight_cell_cale_month_pane_g1

0xd5db,	// (0x00023e27) highlight_cell_cale_month_pane_t1

0x4337,	// (0x0001ab83) list_gen_pane_cp01

0x3e65,	// (0x0001a6b1) scroll_pane_01

0xd5e9,	// (0x00023e35) list_single_double_fisheye_pane

0xd5f2,	// (0x00023e3e) list_double_fisheye_pane_g1_ParamLimits

0xd5f2,	// (0x00023e3e) list_double_fisheye_pane_g1

0xd5fe,	// (0x00023e4a) list_double_fisheye_pane_g2_ParamLimits

0xd5fe,	// (0x00023e4a) list_double_fisheye_pane_g2

0xd612,	// (0x00023e5e) list_double_fisheye_pane_g3_ParamLimits

0xd612,	// (0x00023e5e) list_double_fisheye_pane_g3

0x0004,

0xfc11,	// (0x0002645d) list_double_fisheye_pane_g_ParamLimits

0xfc11,	// (0x0002645d) list_double_fisheye_pane_g

0xd63b,	// (0x00023e87) list_double_fisheye_pane_t1_ParamLimits

0xd63b,	// (0x00023e87) list_double_fisheye_pane_t1

0xd656,	// (0x00023ea2) list_double_fisheye_pane_t2_ParamLimits

0xd656,	// (0x00023ea2) list_double_fisheye_pane_t2

0x0001,

0xfc1c,	// (0x00026468) list_double_fisheye_pane_t_ParamLimits

0xfc1c,	// (0x00026468) list_double_fisheye_pane_t

0x709c,	// (0x0001d8e8) main_call5_pane

0xd402,	// (0x00023c4e) sc_swipe_pane_ParamLimits

0xd402,	// (0x00023c4e) sc_swipe_pane

0xd684,	// (0x00023ed0) call5_image_pane_ParamLimits

0xd684,	// (0x00023ed0) call5_image_pane

0xd694,	// (0x00023ee0) call5_swipe_1_pane_ParamLimits

0xd694,	// (0x00023ee0) call5_swipe_1_pane

0xd6a0,	// (0x00023eec) call5_swipe_2_pane_ParamLimits

0xd6a0,	// (0x00023eec) call5_swipe_2_pane

0xd6ba,	// (0x00023f06) popup_call5_audio_first_window_ParamLimits

0xd6ba,	// (0x00023f06) popup_call5_audio_first_window

0x09c9,	// (0x00017215) call5_swipe_1_pane_g1_ParamLimits

0x09c9,	// (0x00017215) call5_swipe_1_pane_g1

0x4e3c,	// (0x0001b688) call5_swipe_1_pane_g2_ParamLimits

0x4e3c,	// (0x0001b688) call5_swipe_1_pane_g2

0x0001,

0xfc21,	// (0x0002646d) call5_swipe_1_pane_g_ParamLimits

0xfc21,	// (0x0002646d) call5_swipe_1_pane_g

0x4e48,	// (0x0001b694) call5_swipe_1_pane_t1_ParamLimits

0x4e48,	// (0x0001b694) call5_swipe_1_pane_t1

0x09c9,	// (0x00017215) call5_swipe_2_pane_g1_ParamLimits

0x09c9,	// (0x00017215) call5_swipe_2_pane_g1

0x4e5d,	// (0x0001b6a9) call5_swipe_2_pane_g2_ParamLimits

0x4e5d,	// (0x0001b6a9) call5_swipe_2_pane_g2

0x0001,

0xfc26,	// (0x00026472) call5_swipe_2_pane_g_ParamLimits

0xfc26,	// (0x00026472) call5_swipe_2_pane_g

0x4e69,	// (0x0001b6b5) call5_swipe_2_pane_t1_ParamLimits

0x4e69,	// (0x0001b6b5) call5_swipe_2_pane_t1

0x4e7e,	// (0x0001b6ca) sc_swipe_pane_g1_ParamLimits

0x4e7e,	// (0x0001b6ca) sc_swipe_pane_g1

0x4e8b,	// (0x0001b6d7) sc_swipe_pane_g2_ParamLimits

0x4e8b,	// (0x0001b6d7) sc_swipe_pane_g2

0x0001,

0xfc2b,	// (0x00026477) sc_swipe_pane_g_ParamLimits

0xfc2b,	// (0x00026477) sc_swipe_pane_g

0x4e97,	// (0x0001b6e3) sc_swipe_pane_t1_ParamLimits

0x4e97,	// (0x0001b6e3) sc_swipe_pane_t1

0x709c,	// (0x0001d8e8) main_cmail_launcher_pane

0xd6c8,	// (0x00023f14) aid_size_cell_cmail_l_ParamLimits

0xd6c8,	// (0x00023f14) aid_size_cell_cmail_l

0xd6d6,	// (0x00023f22) grid_cmail_l_pane_ParamLimits

0xd6d6,	// (0x00023f22) grid_cmail_l_pane

0xd6e6,	// (0x00023f32) cell_cmail_l_pane_ParamLimits

0xd6e6,	// (0x00023f32) cell_cmail_l_pane

0x4eac,	// (0x0001b6f8) cell_cmail_l_pane_g1_ParamLimits

0x4eac,	// (0x0001b6f8) cell_cmail_l_pane_g1

0x4eb8,	// (0x0001b704) cell_cmail_l_pane_t1_ParamLimits

0x4eb8,	// (0x0001b704) cell_cmail_l_pane_t1

0x4ece,	// (0x0001b71a) cell_cmail_l_pane_t2_ParamLimits

0x4ece,	// (0x0001b71a) cell_cmail_l_pane_t2

0x0001,

0xfc30,	// (0x0002647c) cell_cmail_l_pane_t_ParamLimits

0xfc30,	// (0x0002647c) cell_cmail_l_pane_t

0x02d2,	// (0x00016b1e) grid_highlight_pane_cp018_ParamLimits

0x02d2,	// (0x00016b1e) grid_highlight_pane_cp018

0x6efe,	// (0x0001d74a) main2_pane_ParamLimits

0x6efe,	// (0x0001d74a) main2_pane

0x0b19,	// (0x00017365) popup_sp_fs_action_menu_bg_pane_g1

0x0b21,	// (0x0001736d) popup_sp_fs_action_menu_bg_pane_g2

0x0b29,	// (0x00017375) popup_sp_fs_action_menu_bg_pane_g3

0x0b31,	// (0x0001737d) popup_sp_fs_action_menu_bg_pane_g4

0x0b39,	// (0x00017385) popup_sp_fs_action_menu_bg_pane_g5

0x0b41,	// (0x0001738d) popup_sp_fs_action_menu_bg_pane_g6

0x0b49,	// (0x00017395) popup_sp_fs_action_menu_bg_pane_g7

0x0b51,	// (0x0001739d) popup_sp_fs_action_menu_bg_pane_g8

0x0b59,	// (0x000173a5) popup_sp_fs_action_menu_bg_pane_g9

0x0b61,	// (0x000173ad) popup_sp_fs_action_menu_bg_pane_g10

0x0b61,	// (0x000173ad) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00025977) popup_sp_fs_action_menu_bg_pane_g

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g3_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g3_g1

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g3_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g3_g2

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g3_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00025a25) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00025a25) list_medium_line_x2_t3_g3_g

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g3_t1

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g3_t2

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00025a2c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00025a2c) list_medium_line_x2_t3_g3_t

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g2_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g2_g1

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g2_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00025a33) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00025a33) list_medium_line_x2_t3_g2_g

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g2_t1

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g2_t2

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00025a2c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00025a2c) list_medium_line_x2_t3_g2_t

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g4_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g4_g1

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g4_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g4_g2

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g4_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g4_g3

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g4_g4_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00025a38) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00025a38) list_medium_line_x2_t4_g4_g

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g4_t1

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g4_t2

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g4_t3

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00025a41) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00025a41) list_medium_line_x2_t4_g4_t

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g4_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g4_g1

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g4_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g4_g2

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g4_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g4_g3

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g4_g4_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00025a38) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00025a38) list_medium_line_x2_t2_g4_g

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g4_t1

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x00025aa8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x00025aa8) list_medium_line_x2_t2_g4_t

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g3_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g3_g1

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g3_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g3_g2

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g3_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00025a25) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00025a25) list_medium_line_x2_t2_g3_g

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g3_t1

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x00025aa8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x00025aa8) list_medium_line_x2_t2_g3_t

0xa068,	// (0x000208b4) main_sp_fs_list_pane_ParamLimits

0xa068,	// (0x000208b4) main_sp_fs_list_pane

0xa074,	// (0x000208c0) sp_fs_scroll_pane_ParamLimits

0xa074,	// (0x000208c0) sp_fs_scroll_pane

0x1238,	// (0x00017a84) list_medium_line_x2_t3_t1

0x1238,	// (0x00017a84) list_medium_line_x2_t3_t2

0x1238,	// (0x00017a84) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x00025af3) list_medium_line_x2_t3_t

0x1238,	// (0x00017a84) list_medium_line_x3_t4_t1

0x1238,	// (0x00017a84) list_medium_line_x3_t4_t2

0x1238,	// (0x00017a84) list_medium_line_x3_t4_t3

0x1238,	// (0x00017a84) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x00025afa) list_medium_line_x3_t4_t

0x1238,	// (0x00017a84) list_medium_line_x4_t5_t1

0x1238,	// (0x00017a84) list_medium_line_x4_t5_t2

0x1238,	// (0x00017a84) list_medium_line_x4_t5_t3

0x1238,	// (0x00017a84) list_medium_line_x4_t5_t4

0x1238,	// (0x00017a84) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x00025b03) list_medium_line_x4_t5_t

0x09c9,	// (0x00017215) list_medium_line_t4_g4_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t4_g4_g1

0x09c9,	// (0x00017215) list_medium_line_t4_g4_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t4_g4_g2

0x09c9,	// (0x00017215) list_medium_line_t4_g4_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t4_g4_g3

0x09c9,	// (0x00017215) list_medium_line_t4_g4_g4_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00025a38) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00025a38) list_medium_line_t4_g4_g

0x0cb4,	// (0x00017500) list_medium_line_t4_g4_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t4_g4_t1

0x0cb4,	// (0x00017500) list_medium_line_t4_g4_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t4_g4_t2

0x0cb4,	// (0x00017500) list_medium_line_t4_g4_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t4_g4_t3

0x0cb4,	// (0x00017500) list_medium_line_t4_g4_t4_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00025a41) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00025a41) list_medium_line_t4_g4_t

0xa0ea,	// (0x00020936) chi_dic_find_pane_g1

0x7510,	// (0x0001dd5c) main_tport_pane

0x1238,	// (0x00017a84) list_medium_line_plain_t1

0x09c9,	// (0x00017215) list_medium_line_t2_g2_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t2_g2_g1

0x09c9,	// (0x00017215) list_medium_line_t2_g2_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00025a33) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00025a33) list_medium_line_t2_g2_g

0x0cb4,	// (0x00017500) list_medium_line_t2_g2_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t2_g2_t1

0x0cb4,	// (0x00017500) list_medium_line_t2_g2_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x00025aa8) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x00025aa8) list_medium_line_t2_g2_t

0x43aa,	// (0x0001abf6) aid_sp_fs_list_icon_a_sm

0x43b2,	// (0x0001abfe) aid_sp_fs_list_icon_d

0x43ba,	// (0x0001ac06) aid_sp_fs_text_primary

0x43c3,	// (0x0001ac0f) aid_sp_fs_text_secondary

0x0263,	// (0x00016aaf) list_medium_line

0x0263,	// (0x00016aaf) list_medium_line_g2

0x0263,	// (0x00016aaf) list_medium_line_g3

0x0263,	// (0x00016aaf) list_medium_line_plain

0x0263,	// (0x00016aaf) list_medium_line_plain_t2

0x0263,	// (0x00016aaf) list_medium_line_plain_t3

0x0263,	// (0x00016aaf) list_medium_line_right_icon

0x0263,	// (0x00016aaf) list_medium_line_right_iconx2

0x0263,	// (0x00016aaf) list_medium_line_t2

0x0263,	// (0x00016aaf) list_medium_line_t2_g2

0x0263,	// (0x00016aaf) list_medium_line_t2_g3

0x0263,	// (0x00016aaf) list_medium_line_t2_right_icon

0x0263,	// (0x00016aaf) list_medium_line_t2_right_iconx2

0x0263,	// (0x00016aaf) list_medium_line_t3

0x0263,	// (0x00016aaf) list_medium_line_t3_g2

0x0263,	// (0x00016aaf) list_medium_line_t3_g3

0x0263,	// (0x00016aaf) list_medium_line_t3_right_iconx2

0x0263,	// (0x00016aaf) list_medium_line_t4_g4

0x0263,	// (0x00016aaf) list_medium_line_x2

0x0263,	// (0x00016aaf) list_medium_line_x2_t2_g2

0x0263,	// (0x00016aaf) list_medium_line_x2_t2_g3

0x0263,	// (0x00016aaf) list_medium_line_x2_t2_g4

0x0263,	// (0x00016aaf) list_medium_line_x2_t3

0x0263,	// (0x00016aaf) list_medium_line_x2_t3_g2

0x0263,	// (0x00016aaf) list_medium_line_x2_t3_g3

0x0263,	// (0x00016aaf) list_medium_line_x2_t3_g4

0x0263,	// (0x00016aaf) list_medium_line_x2_t4_g2

0x0263,	// (0x00016aaf) list_medium_line_x2_t4_g4

0x0263,	// (0x00016aaf) list_medium_line_x3

0x0263,	// (0x00016aaf) list_medium_line_x3_t4

0x0263,	// (0x00016aaf) list_medium_line_x3_t4_g4

0x0263,	// (0x00016aaf) list_medium_line_x4_t4

0x0263,	// (0x00016aaf) list_medium_line_x4_t4_g7

0x0263,	// (0x00016aaf) list_medium_line_x4_t5

0xc8f6,	// (0x00023142) list_single_fs_dyc_pane_ParamLimits

0xc8f6,	// (0x00023142) list_single_fs_dyc_pane

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g1

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g2

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g3

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g4_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g4

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g5_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g5

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g6_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x4_t4_g7_g6

0x09d7,	// (0x00017223) list_medium_line_x4_t4_g7_g7_ParamLimits

0x09d7,	// (0x00017223) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb38,	// (0x00026384) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb38,	// (0x00026384) list_medium_line_x4_t4_g7_g

0x0cb4,	// (0x00017500) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x4_t4_g7_t1

0x0cb4,	// (0x00017500) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x4_t4_g7_t2

0x0cb4,	// (0x00017500) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x4_t4_g7_t3

0x1885,	// (0x000180d1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1885,	// (0x000180d1) list_medium_line_x4_t4_g7_t4

0x1885,	// (0x000180d1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1885,	// (0x000180d1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb47,	// (0x00026393) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb47,	// (0x00026393) list_medium_line_x4_t4_g7_t

0xcfa9,	// (0x000237f5) list_single_dyc_row_pane_ParamLimits

0xcfa9,	// (0x000237f5) list_single_dyc_row_pane

0xd678,	// (0x00023ec4) call5_gesture_pane_ParamLimits

0xd678,	// (0x00023ec4) call5_gesture_pane

0xd6ac,	// (0x00023ef8) call5_windows_pane_ParamLimits

0xd6ac,	// (0x00023ef8) call5_windows_pane

0xd6ff,	// (0x00023f4b) call5_swipe_1_pane_cp_ParamLimits

0xd6ff,	// (0x00023f4b) call5_swipe_1_pane_cp

0xd70b,	// (0x00023f57) call5_swipe_2_pane_cp_ParamLimits

0xd70b,	// (0x00023f57) call5_swipe_2_pane_cp

0x0ca2,	// (0x000174ee) call5_image_pane_cp

0xd717,	// (0x00023f63) popup_call5_audio_first_window_cp_ParamLimits

0xd717,	// (0x00023f63) popup_call5_audio_first_window_cp

0x4e7e,	// (0x0001b6ca) call5_swipe_1_pane_g1_cp_ParamLimits

0x4e7e,	// (0x0001b6ca) call5_swipe_1_pane_g1_cp

0x4eeb,	// (0x0001b737) call5_swipe_1_pane_g2_cp

0x4e97,	// (0x0001b6e3) call5_swipe_1_pane_t1_cp_ParamLimits

0x4e97,	// (0x0001b6e3) call5_swipe_1_pane_t1_cp

0x4e7e,	// (0x0001b6ca) call5_swipe_2_pane_g1_cp_ParamLimits

0x4e7e,	// (0x0001b6ca) call5_swipe_2_pane_g1_cp

0x4ef3,	// (0x0001b73f) call5_swipe_2_pane_g2_cp

0x4efb,	// (0x0001b747) call5_swipe_2_pane_t1_cp_ParamLimits

0x4efb,	// (0x0001b747) call5_swipe_2_pane_t1_cp

0x02d2,	// (0x00016b1e) main_sp_fs_email_pane

0x4f10,	// (0x0001b75c) main_sp_fs_listscroll_pane_te

0x4f19,	// (0x0001b765) popup_sp_fs_action_menu_pane_ParamLimits

0x4f19,	// (0x0001b765) popup_sp_fs_action_menu_pane

0x0ce2,	// (0x0001752e) bg_sp_fs_ctrlbar_pane_g1

0x4f5d,	// (0x0001b7a9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4f66,	// (0x0001b7b2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x4f6f,	// (0x0001b7bb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0ce2,	// (0x0001752e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc35,	// (0x00026481) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2d37,	// (0x00019583) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2d37,	// (0x00019583) bg_sp_fs_ctrlbar_ddmenu_pane

0x4f78,	// (0x0001b7c4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4f78,	// (0x0001b7c4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4f84,	// (0x0001b7d0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4f84,	// (0x0001b7d0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc3e,	// (0x0002648a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc3e,	// (0x0002648a) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4f90,	// (0x0001b7dc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4f90,	// (0x0001b7dc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0ce2,	// (0x0001752e) list_medium_line_t2_right_icon_g1

0x1238,	// (0x00017a84) list_medium_line_t2_right_icon_t1

0x1238,	// (0x00017a84) list_medium_line_t2_right_icon_t2

0x0001,

0xfc43,	// (0x0002648f) list_medium_line_t2_right_icon_t

0x1899,	// (0x000180e5) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1899,	// (0x000180e5) bg_sp_fs_ctrlbar_pane

0xd77c,	// (0x00023fc8) main_sp_fs_ctrlbar_button_pane_cp01

0xd784,	// (0x00023fd0) main_sp_fs_ctrlbar_ddmenu_pane

0x4fe2,	// (0x0001b82e) main_sp_fs_ctrlbar_pane_g1

0x4fee,	// (0x0001b83a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc48,	// (0x00026494) main_sp_fs_ctrlbar_pane_g

0xd7c0,	// (0x0002400c) main_sp_fs_ctrlbar_pane_t1

0xd7fb,	// (0x00024047) main_sp_fs_ctrlbar_pane

0xd811,	// (0x0002405d) main_sp_fs_listscroll_pane_te_cp01

0xd822,	// (0x0002406e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd822,	// (0x0002406e) popup_sp_fs_action_menu_pane_cp01

0x02d2,	// (0x00016b1e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x02d2,	// (0x00016b1e) bg_sp_fs_highlight_list_pane_cp01

0x5015,	// (0x0001b861) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5015,	// (0x0001b861) sp_fs_action_menu_list_gene_pane_g1

0x5024,	// (0x0001b870) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5024,	// (0x0001b870) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc56,	// (0x000264a2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc56,	// (0x000264a2) sp_fs_action_menu_list_gene_pane_g

0x5031,	// (0x0001b87d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5031,	// (0x0001b87d) sp_fs_action_menu_list_gene_pane_t1

0x5049,	// (0x0001b895) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5049,	// (0x0001b895) sp_fs_action_menu_list_gene_pane

0x5068,	// (0x0001b8b4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5068,	// (0x0001b8b4) popup_sp_fs_action_menu_bg_pane

0x5076,	// (0x0001b8c2) sp_fs_action_menu_list_pane_ParamLimits

0x5076,	// (0x0001b8c2) sp_fs_action_menu_list_pane

0x5096,	// (0x0001b8e2) sp_fs_scroll_pane_cp01_ParamLimits

0x5096,	// (0x0001b8e2) sp_fs_scroll_pane_cp01

0x1238,	// (0x00017a84) list_medium_line_plain_t2_t1

0x1238,	// (0x00017a84) list_medium_line_plain_t2_t2

0x0001,

0xfc43,	// (0x0002648f) list_medium_line_plain_t2_t

0x1238,	// (0x00017a84) list_medium_line_plain_t3_t1

0x1238,	// (0x00017a84) list_medium_line_plain_t3_t2

0x1238,	// (0x00017a84) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x00025af3) list_medium_line_plain_t3_t

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g2_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g2_g1

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g2_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00025a33) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00025a33) list_medium_line_x2_t2_g2_g

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g2_t1

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x00025aa8) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x00025aa8) list_medium_line_x2_t2_g2_t

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g2_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g2_g1

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g2_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00025a33) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00025a33) list_medium_line_x2_t4_g2_g

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g2_t1

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g2_t2

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g2_t3

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00025a41) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00025a41) list_medium_line_x2_t4_g2_t

0x0ce2,	// (0x0001752e) list_medium_line_t3_right_iconx2_g1

0x0ce2,	// (0x0001752e) list_medium_line_t3_right_iconx2_g2

0x0ce2,	// (0x0001752e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x00025c14) list_medium_line_t3_right_iconx2_g

0x1238,	// (0x00017a84) list_medium_line_t3_right_iconx2_t1

0x1238,	// (0x00017a84) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc43,	// (0x0002648f) list_medium_line_t3_right_iconx2_t

0x09c9,	// (0x00017215) list_medium_line_x3_t4_g4_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x3_t4_g4_g1

0x09c9,	// (0x00017215) list_medium_line_x3_t4_g4_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x3_t4_g4_g2

0x09c9,	// (0x00017215) list_medium_line_x3_t4_g4_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x3_t4_g4_g3

0x09c9,	// (0x00017215) list_medium_line_x3_t4_g4_g4_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00025a38) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00025a38) list_medium_line_x3_t4_g4_g

0x0cb4,	// (0x00017500) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x3_t4_g4_t1

0x0cb4,	// (0x00017500) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x3_t4_g4_t2

0x0cb4,	// (0x00017500) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x3_t4_g4_t3

0x0cb4,	// (0x00017500) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00025a41) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00025a41) list_medium_line_x3_t4_g4_t

0xd842,	// (0x0002408e) list_single_dyc_row_text_pane_t1_ParamLimits

0xd842,	// (0x0002408e) list_single_dyc_row_text_pane_t1

0xd879,	// (0x000240c5) list_single_dyc_row_text_pane_t2_ParamLimits

0xd879,	// (0x000240c5) list_single_dyc_row_text_pane_t2

0x50bc,	// (0x0001b908) list_single_dyc_row_text_pane_t3_ParamLimits

0x50bc,	// (0x0001b908) list_single_dyc_row_text_pane_t3

0x0005,

0xfc5b,	// (0x000264a7) list_single_dyc_row_text_pane_t_ParamLimits

0xfc5b,	// (0x000264a7) list_single_dyc_row_text_pane_t

0x50e0,	// (0x0001b92c) list_single_dyc_row_pane_g1_ParamLimits

0x50e0,	// (0x0001b92c) list_single_dyc_row_pane_g1

0x50ec,	// (0x0001b938) list_single_dyc_row_pane_g2_ParamLimits

0x50ec,	// (0x0001b938) list_single_dyc_row_pane_g2

0x50f8,	// (0x0001b944) list_single_dyc_row_pane_g3_ParamLimits

0x50f8,	// (0x0001b944) list_single_dyc_row_pane_g3

0x5104,	// (0x0001b950) list_single_dyc_row_pane_g4_ParamLimits

0x5104,	// (0x0001b950) list_single_dyc_row_pane_g4

0x0003,

0xfc68,	// (0x000264b4) list_single_dyc_row_pane_g_ParamLimits

0xfc68,	// (0x000264b4) list_single_dyc_row_pane_g

0x5110,	// (0x0001b95c) list_single_dyc_row_text_pane_ParamLimits

0x5110,	// (0x0001b95c) list_single_dyc_row_text_pane

0x0263,	// (0x00016aaf) bg_sp_fs_scroll_pane

0x512f,	// (0x0001b97b) thumb_sp_fs_scroll_pane

0x09c9,	// (0x00017215) list_medium_line_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_g1

0x0cb4,	// (0x00017500) list_medium_line_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t1

0x09c9,	// (0x00017215) list_medium_line_x2_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_g1

0x09c9,	// (0x00017215) list_medium_line_x2_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00025a33) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00025a33) list_medium_line_x2_g

0x0cb4,	// (0x00017500) list_medium_line_x2_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t1

0x09c9,	// (0x00017215) list_medium_line_x3_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x3_g1

0x5138,	// (0x0001b984) list_medium_line_x3_g2_ParamLimits

0x5138,	// (0x0001b984) list_medium_line_x3_g2

0x0001,

0xfc71,	// (0x000264bd) list_medium_line_x3_g_ParamLimits

0xfc71,	// (0x000264bd) list_medium_line_x3_g

0x5146,	// (0x0001b992) list_medium_line_x3_t1_ParamLimits

0x5146,	// (0x0001b992) list_medium_line_x3_t1

0x515a,	// (0x0001b9a6) thumb_sp_fs_scroll_pane_g1

0x5163,	// (0x0001b9af) thumb_sp_fs_scroll_pane_g2

0x516c,	// (0x0001b9b8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc76,	// (0x000264c2) thumb_sp_fs_scroll_pane_g

0x515a,	// (0x0001b9a6) bg_sp_fs_scroll_pane_g1

0x5163,	// (0x0001b9af) bg_sp_fs_scroll_pane_g2

0x516c,	// (0x0001b9b8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc76,	// (0x000264c2) bg_sp_fs_scroll_pane_g

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g4_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g4_g1

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g4_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g4_g2

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g4_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g4_g3

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g4_g4_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00025a38) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00025a38) list_medium_line_x2_t3_g4_g

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g4_t1

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g4_t2

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00025a2c) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00025a2c) list_medium_line_x2_t3_g4_t

0x09c9,	// (0x00017215) list_medium_line_g2_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_g2_g1

0x09c9,	// (0x00017215) list_medium_line_g2_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00025a33) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00025a33) list_medium_line_g2_g

0x0cb4,	// (0x00017500) list_medium_line_g2_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_g2_t1

0x09c9,	// (0x00017215) list_medium_line_t3_g2_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t3_g2_g1

0x09c9,	// (0x00017215) list_medium_line_t3_g2_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00025a33) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00025a33) list_medium_line_t3_g2_g

0x0cb4,	// (0x00017500) list_medium_line_t3_g2_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t3_g2_t1

0x0cb4,	// (0x00017500) list_medium_line_t3_g2_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t3_g2_t2

0x0cb4,	// (0x00017500) list_medium_line_t3_g2_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00025a2c) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00025a2c) list_medium_line_t3_g2_t

0x0ce2,	// (0x0001752e) list_medium_line_right_icon_g1

0x1238,	// (0x00017a84) list_medium_line_right_icon_t1

0x09c9,	// (0x00017215) list_medium_line_t2_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t2_g1

0x0cb4,	// (0x00017500) list_medium_line_t2_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t2_t1

0x0cb4,	// (0x00017500) list_medium_line_t2_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x00025aa8) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x00025aa8) list_medium_line_t2_t

0x09c9,	// (0x00017215) list_medium_line_t3_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t3_g1

0x0cb4,	// (0x00017500) list_medium_line_t3_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t3_t1

0x0cb4,	// (0x00017500) list_medium_line_t3_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t3_t2

0x0cb4,	// (0x00017500) list_medium_line_t3_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00025a2c) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00025a2c) list_medium_line_t3_t

0x09c9,	// (0x00017215) list_medium_line_g3_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_g3_g1

0x09c9,	// (0x00017215) list_medium_line_g3_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_g3_g2

0x09c9,	// (0x00017215) list_medium_line_g3_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00025a25) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00025a25) list_medium_line_g3_g

0x0cb4,	// (0x00017500) list_medium_line_g3_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_g3_t1

0x09c9,	// (0x00017215) list_medium_line_t2_g3_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t2_g3_g1

0x09c9,	// (0x00017215) list_medium_line_t2_g3_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t2_g3_g2

0x09c9,	// (0x00017215) list_medium_line_t2_g3_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00025a25) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00025a25) list_medium_line_t2_g3_g

0x0cb4,	// (0x00017500) list_medium_line_t2_g3_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t2_g3_t1

0x0cb4,	// (0x00017500) list_medium_line_t2_g3_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x00025aa8) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x00025aa8) list_medium_line_t2_g3_t

0x09c9,	// (0x00017215) list_medium_line_t3_g3_g1_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t3_g3_g1

0x09c9,	// (0x00017215) list_medium_line_t3_g3_g2_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t3_g3_g2

0x09c9,	// (0x00017215) list_medium_line_t3_g3_g3_ParamLimits

0x09c9,	// (0x00017215) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00025a25) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00025a25) list_medium_line_t3_g3_g

0x0cb4,	// (0x00017500) list_medium_line_t3_g3_t1_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t3_g3_t1

0x0cb4,	// (0x00017500) list_medium_line_t3_g3_t2_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t3_g3_t2

0x0cb4,	// (0x00017500) list_medium_line_t3_g3_t3_ParamLimits

0x0cb4,	// (0x00017500) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00025a2c) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00025a2c) list_medium_line_t3_g3_t

0x0ce2,	// (0x0001752e) list_medium_line_right_iconx2_g1

0x0ce2,	// (0x0001752e) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00025c0f) list_medium_line_right_iconx2_g

0x1238,	// (0x00017a84) list_medium_line_right_iconx2_t1

0x0ce2,	// (0x0001752e) list_medium_line_t2_right_iconx2_g1

0x0ce2,	// (0x0001752e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00025c0f) list_medium_line_t2_right_iconx2_g

0x1238,	// (0x00017a84) list_medium_line_t2_right_iconx2_t1

0x1238,	// (0x00017a84) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc43,	// (0x0002648f) list_medium_line_t2_right_iconx2_t

0x1238,	// (0x00017a84) list_medium_line_x4_t4_t1

0x1238,	// (0x00017a84) list_medium_line_x4_t4_t2

0x1238,	// (0x00017a84) list_medium_line_x4_t4_t3

0x1238,	// (0x00017a84) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x00025afa) list_medium_line_x4_t4_t

0xd9c6,	// (0x00024212) tport_appsw_pane_ParamLimits

0xd9c6,	// (0x00024212) tport_appsw_pane

0xd9d4,	// (0x00024220) tport_contact_pane_ParamLimits

0xd9d4,	// (0x00024220) tport_contact_pane

0xd9e4,	// (0x00024230) tport_listscroll_pane_ParamLimits

0xd9e4,	// (0x00024230) tport_listscroll_pane

0xd9f4,	// (0x00024240) cell_tport_appsw_pane_ParamLimits

0xd9f4,	// (0x00024240) cell_tport_appsw_pane

0x09d7,	// (0x00017223) tport_appsw_pane_g1_ParamLimits

0x09d7,	// (0x00017223) tport_appsw_pane_g1

0x5175,	// (0x0001b9c1) tport_contact_pane_g1

0x49d0,	// (0x0001b21c) tport_contact_pane_t1

0x517e,	// (0x0001b9ca) tport_contact_pane_t2

0x0001,

0xfc7d,	// (0x000264c9) tport_contact_pane_t

0x518c,	// (0x0001b9d8) list_tport_pane

0x5195,	// (0x0001b9e1) scroll_pane_cp_030

0xda27,	// (0x00024273) cell_tport_appsw_pane_g1

0xda37,	// (0x00024283) cell_tport_appsw_pane_t1

0xda45,	// (0x00024291) grid_highlight_pane_cp019

0xda4d,	// (0x00024299) list_tport_double_graphic_pane_ParamLimits

0xda4d,	// (0x00024299) list_tport_double_graphic_pane

0x02d2,	// (0x00016b1e) list_highlight_pane_cp023_ParamLimits

0x02d2,	// (0x00016b1e) list_highlight_pane_cp023

0xda5e,	// (0x000242aa) list_tport_double_graphic_pane_g1_ParamLimits

0xda5e,	// (0x000242aa) list_tport_double_graphic_pane_g1

0xda6b,	// (0x000242b7) list_tport_double_graphic_pane_t1_ParamLimits

0xda6b,	// (0x000242b7) list_tport_double_graphic_pane_t1

0xda80,	// (0x000242cc) list_tport_double_graphic_pane_t2_ParamLimits

0xda80,	// (0x000242cc) list_tport_double_graphic_pane_t2

0x0001,

0xfc89,	// (0x000264d5) list_tport_double_graphic_pane_t_ParamLimits

0xfc89,	// (0x000264d5) list_tport_double_graphic_pane_t

0x0263,	// (0x00016aaf) main_cale_note_pane

0x816b,	// (0x0001e9b7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x816b,	// (0x0001e9b7) cell_vitu2_function_top_wide_pane_cp01

0xd34f,	// (0x00023b9b) wait_bar_pane_cp05_ParamLimits

0x02d2,	// (0x00016b1e) listscroll_cmail_pane

0x519e,	// (0x0001b9ea) list_cmail_pane

0xda92,	// (0x000242de) list_cmail_body_pane

0xdab9,	// (0x00024305) list_single_cmail_header_caption_pane

0xdae2,	// (0x0002432e) list_single_cmail_header_detail_pane_ParamLimits

0xdae2,	// (0x0002432e) list_single_cmail_header_detail_pane

0x51ae,	// (0x0001b9fa) list_single_cmail_header_caption_pane_t1

0xdb18,	// (0x00024364) list_single_cmail_header_detail_pane_g1_ParamLimits

0xdb18,	// (0x00024364) list_single_cmail_header_detail_pane_g1

0x51c5,	// (0x0001ba11) list_single_cmail_header_detail_pane_g2_ParamLimits

0x51c5,	// (0x0001ba11) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc8e,	// (0x000264da) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc8e,	// (0x000264da) list_single_cmail_header_detail_pane_g

0x51de,	// (0x0001ba2a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x51de,	// (0x0001ba2a) list_single_cmail_header_detail_pane_t1

0x5246,	// (0x0001ba92) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5246,	// (0x0001ba92) list_single_cmail_header_editor_pane_bg

0x4b2d,	// (0x0001b379) list_cmail_body_pane_g1

0x525d,	// (0x0001baa9) list_cmail_body_pane_t1

0x3d4b,	// (0x0001a597) list_single_cmail_header_editor_pane_bg_g1

0x0ef3,	// (0x0001773f) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3d5b,	// (0x0001a5a7) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3d53,	// (0x0001a59f) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4000,	// (0x0001a84c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3d7b,	// (0x0001a5c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3d6b,	// (0x0001a5b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3d73,	// (0x0001a5bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0ed3,	// (0x0001771f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdb2e,	// (0x0002437a) calenote_gesture_pane_ParamLimits

0xdb2e,	// (0x0002437a) calenote_gesture_pane

0xdb48,	// (0x00024394) calenote_window_pane_ParamLimits

0xdb48,	// (0x00024394) calenote_window_pane

0x526b,	// (0x0001bab7) popup_note_window_cp01

0xdb60,	// (0x000243ac) calenote_swipe_1_pane_ParamLimits

0xdb60,	// (0x000243ac) calenote_swipe_1_pane

0xd70b,	// (0x00023f57) calenote_swipe_2_pane_ParamLimits

0xd70b,	// (0x00023f57) calenote_swipe_2_pane

0x4e7e,	// (0x0001b6ca) calenote_swipe_1_pane_g1_ParamLimits

0x4e7e,	// (0x0001b6ca) calenote_swipe_1_pane_g1

0x4e8b,	// (0x0001b6d7) calenote_swipe_1_pane_g2_ParamLimits

0x4e8b,	// (0x0001b6d7) calenote_swipe_1_pane_g2

0x0001,

0xfc2b,	// (0x00026477) calenote_swipe_1_pane_g_ParamLimits

0xfc2b,	// (0x00026477) calenote_swipe_1_pane_g

0x527d,	// (0x0001bac9) calenote_swipe_1_pane_t1_ParamLimits

0x527d,	// (0x0001bac9) calenote_swipe_1_pane_t1

0x4e7e,	// (0x0001b6ca) calenote_swipe_2_pane_g1_ParamLimits

0x4e7e,	// (0x0001b6ca) calenote_swipe_2_pane_g1

0x529c,	// (0x0001bae8) calenote_swipe_2_pane_g2_ParamLimits

0x529c,	// (0x0001bae8) calenote_swipe_2_pane_g2

0x0001,

0xfc9a,	// (0x000264e6) calenote_swipe_2_pane_g_ParamLimits

0xfc9a,	// (0x000264e6) calenote_swipe_2_pane_g

0x52a8,	// (0x0001baf4) calenote_swipe_2_pane_t1_ParamLimits

0x52a8,	// (0x0001baf4) calenote_swipe_2_pane_t1

0x0263,	// (0x00016aaf) main_mup_navstr_pane

0xb5ed,	// (0x00021e39) main_mup3_pane_t7_ParamLimits

0xb5ed,	// (0x00021e39) main_mup3_pane_t7

0x7993,	// (0x0001e1df) main_mp4_pane_g6_ParamLimits

0x7993,	// (0x0001e1df) main_mp4_pane_g6

0x7ca4,	// (0x0001e4f0) main_image3_pane_t4_ParamLimits

0x7ca4,	// (0x0001e4f0) main_image3_pane_t4

0xdb73,	// (0x000243bf) popup_navstr_preview_pane_ParamLimits

0xdb73,	// (0x000243bf) popup_navstr_preview_pane

0xdb7f,	// (0x000243cb) scroll_navstr_pane_ParamLimits

0xdb7f,	// (0x000243cb) scroll_navstr_pane

0x0263,	// (0x00016aaf) bg_popup_preview_window_pane_cp04

0x52cf,	// (0x0001bb1b) popup_navstr_preview_pane_t1

0xdb8b,	// (0x000243d7) scroll_navstr_pane_g1_ParamLimits

0xdb8b,	// (0x000243d7) scroll_navstr_pane_g1

0xdb98,	// (0x000243e4) scroll_navstr_pane_t1_ParamLimits

0xdb98,	// (0x000243e4) scroll_navstr_pane_t1

0x5274,	// (0x0001bac0) bg_button_pane_cp014

0x5274,	// (0x0001bac0) bg_button_pane_cp030

0xd61e,	// (0x00023e6a) list_double_fisheye_pane_g4_ParamLimits

0xd61e,	// (0x00023e6a) list_double_fisheye_pane_g4

0xd62a,	// (0x00023e76) list_double_fisheye_pane_g5_ParamLimits

0xd62a,	// (0x00023e76) list_double_fisheye_pane_g5

0x3bfa,	// (0x0001a446) sp_fs_scroll_pane_cp03

0x4fe2,	// (0x0001b82e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4fee,	// (0x0001b83a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc48,	// (0x00026494) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd7c0,	// (0x0002400c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x51a6,	// (0x0001b9f2) sp_fs_scroll_pane_cp02

0x0bea,	// (0x00017436) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0bea,	// (0x00017436) popup_sp_fs_calendar_preview_list_single_pane

0x0263,	// (0x00016aaf) main_cam6_pano_pane

0x74f4,	// (0x0001dd40) main_mup3_pane_ParamLimits

0x0263,	// (0x00016aaf) main_phacti_pane

0xd224,	// (0x00023a70) bg_button_pane_cp11

0xd23c,	// (0x00023a88) main_mobtv_info_pane_g2_ParamLimits

0xd23c,	// (0x00023a88) main_mobtv_info_pane_g2

0x0001,

0xfba8,	// (0x000263f4) main_mobtv_info_pane_g_ParamLimits

0xfba8,	// (0x000263f4) main_mobtv_info_pane_g

0xd3ee,	// (0x00023c3a) sc_clock_pane_t5_ParamLimits

0xd3ee,	// (0x00023c3a) sc_clock_pane_t5

0xd48f,	// (0x00023cdb) main_radioblah_pane_g1_ParamLimits

0x4dca,	// (0x0001b616) main_radioblah_pane_t3_ParamLimits

0x4dca,	// (0x0001b616) main_radioblah_pane_t3

0x4de2,	// (0x0001b62e) main_radioblah_pane_t4_ParamLimits

0x4de2,	// (0x0001b62e) main_radioblah_pane_t4

0xd4ad,	// (0x00023cf9) main_radioblah_text_pane_ParamLimits

0xd4ad,	// (0x00023cf9) main_radioblah_text_pane

0xd4ba,	// (0x00023d06) main_radioblah_info_pane_g1_ParamLimits

0xd54f,	// (0x00023d9b) main_radioblah_info_pane_t4_ParamLimits

0xd54f,	// (0x00023d9b) main_radioblah_info_pane_t4

0x02d2,	// (0x00016b1e) main_sp_fs_calendar_pane

0xdbaa,	// (0x000243f6) main_phacti_pane_g1

0xdbb2,	// (0x000243fe) phacti_note_pane_ParamLimits

0xdbb2,	// (0x000243fe) phacti_note_pane

0x52e6,	// (0x0001bb32) phacti_term_pane_ParamLimits

0x52e6,	// (0x0001bb32) phacti_term_pane

0x52fb,	// (0x0001bb47) phacti_note_pane_t1_ParamLimits

0x52fb,	// (0x0001bb47) phacti_note_pane_t1

0x5312,	// (0x0001bb5e) phacti_term_pane_g1

0x531a,	// (0x0001bb66) phacti_term_pane_t1_ParamLimits

0x531a,	// (0x0001bb66) phacti_term_pane_t1

0x5344,	// (0x0001bb90) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0c89,	// (0x000174d5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfca4,	// (0x000264f0) popup_sp_fs_calendar_preview_list_single_pane_g

0x534c,	// (0x0001bb98) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x534c,	// (0x0001bb98) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5362,	// (0x0001bbae) aid_popup_sp_fs_bg_corner_pane

0x0ce2,	// (0x0001752e) popup_sp_fs_calendar_preview_bg_pane_g1

0x0263,	// (0x00016aaf) popup_sp_fs_calendar_preview_bg_pane

0x536a,	// (0x0001bbb6) popup_sp_fs_calendar_preview_list_pane

0x1899,	// (0x000180e5) bg_main_sp_fs_cale_pane_ParamLimits

0x1899,	// (0x000180e5) bg_main_sp_fs_cale_pane

0x537b,	// (0x0001bbc7) listscroll_cale_mrui_pane_ParamLimits

0x537b,	// (0x0001bbc7) listscroll_cale_mrui_pane

0x5390,	// (0x0001bbdc) listscroll_sp_fs_schedule_track_pane

0x5399,	// (0x0001bbe5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5399,	// (0x0001bbe5) main_sp_fs_ctrlbar_pane_cp01

0x53ac,	// (0x0001bbf8) main_sp_fs_ribbon_pane

0x53b4,	// (0x0001bc00) popup_sp_fs_cale_preview_window

0xdc15,	// (0x00024461) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdc15,	// (0x00024461) list_single_sp_fs_schedule_track_pane

0x09bb,	// (0x00017207) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x09bb,	// (0x00017207) bg_sp_fs_highlight_list_pane_cp03

0xdc35,	// (0x00024481) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdc35,	// (0x00024481) list_single_sp_fs_schedule_track_pane_g1

0xdc41,	// (0x0002448d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdc41,	// (0x0002448d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca9,	// (0x000264f5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca9,	// (0x000264f5) list_single_sp_fs_schedule_track_pane_g

0xdc4d,	// (0x00024499) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdc4d,	// (0x00024499) list_single_sp_fs_schedule_track_pane_t1

0xdc65,	// (0x000244b1) sp_fs_schedule_track_pane_ParamLimits

0xdc65,	// (0x000244b1) sp_fs_schedule_track_pane

0x53c6,	// (0x0001bc12) sp_fs_schedule_track_pane_g1

0x53ce,	// (0x0001bc1a) sp_fs_schedule_track_pane_g2

0x53d6,	// (0x0001bc22) sp_fs_schedule_track_pane_g3

0x53de,	// (0x0001bc2a) sp_fs_schedule_track_pane_g4

0x53e6,	// (0x0001bc32) sp_fs_schedule_track_pane_g5

0x0004,

0xfcae,	// (0x000264fa) sp_fs_schedule_track_pane_g

0x3d4b,	// (0x0001a597) bg_sp_fs_schedule_viewer_highlight_g1

0x0ef3,	// (0x0001773f) bg_sp_fs_schedule_viewer_highlight_g2

0x3d53,	// (0x0001a59f) bg_sp_fs_schedule_viewer_highlight_g3

0x3d5b,	// (0x0001a5a7) bg_sp_fs_schedule_viewer_highlight_g4

0x4000,	// (0x0001a84c) bg_sp_fs_schedule_viewer_highlight_g5

0x3d6b,	// (0x0001a5b7) bg_sp_fs_schedule_viewer_highlight_g6

0x3d73,	// (0x0001a5bf) bg_sp_fs_schedule_viewer_highlight_g7

0x3d7b,	// (0x0001a5c7) bg_sp_fs_schedule_viewer_highlight_g8

0x0ed3,	// (0x0001771f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb9,	// (0x00026505) bg_sp_fs_schedule_viewer_highlight_g

0x0263,	// (0x00016aaf) bg_main_sp_fs_ribbon_pane

0xdc75,	// (0x000244c1) main_sp_fs_ribbon_pane_g1

0x53ee,	// (0x0001bc3a) main_sp_fs_ribbon_pane_t1

0xdc7e,	// (0x000244ca) main_sp_fs_ribbon_pane_t2

0x53fd,	// (0x0001bc49) main_sp_fs_ribbon_pane_t3

0x0002,

0xfccc,	// (0x00026518) main_sp_fs_ribbon_pane_t

0x540c,	// (0x0001bc58) main_sp_fs_ribbon_scheduler_pane

0x5414,	// (0x0001bc60) bg_main_sp_fs_ribbon_pane_g1

0x541d,	// (0x0001bc69) bg_main_sp_fs_ribbon_pane_g2

0x5426,	// (0x0001bc72) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcd3,	// (0x0002651f) bg_main_sp_fs_ribbon_pane_g

0x542e,	// (0x0001bc7a) main_sp_fs_ribbon_scheduler_pane_g1

0x5437,	// (0x0001bc83) main_sp_fs_ribbon_scheduler_pane_g2

0x5440,	// (0x0001bc8c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcda,	// (0x00026526) main_sp_fs_ribbon_scheduler_pane_g

0x5449,	// (0x0001bc95) list_cale_mrui_pane

0xdc8d,	// (0x000244d9) sp_fs_scroll_pane_cp07_ParamLimits

0xdc8d,	// (0x000244d9) sp_fs_scroll_pane_cp07

0xdca9,	// (0x000244f5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdca9,	// (0x000244f5) bg_sp_fs_schedule_viewer_highlight

0x5456,	// (0x0001bca2) list_single_sp_fs_schedule_track_pane_cp01

0x545e,	// (0x0001bcaa) list_sp_fs_schedule_track_pane

0x5466,	// (0x0001bcb2) sp_fs_scroll_pane_cp06_ParamLimits

0x5466,	// (0x0001bcb2) sp_fs_scroll_pane_cp06

0x0ce2,	// (0x0001752e) bgmain_sp_fs_calendar_pane_g1

0xdcb6,	// (0x00024502) list_single_cale_mrui_pane_ParamLimits

0xdcb6,	// (0x00024502) list_single_cale_mrui_pane

0x5478,	// (0x0001bcc4) list_single_cale_mrui_row_pane_ParamLimits

0x5478,	// (0x0001bcc4) list_single_cale_mrui_row_pane

0x5485,	// (0x0001bcd1) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5485,	// (0x0001bcd1) list_single_cale_mrui_row_pane_g1

0x54ca,	// (0x0001bd16) list_single_cale_mrui_row_pane_t1_ParamLimits

0x54ca,	// (0x0001bd16) list_single_cale_mrui_row_pane_t1

0xdce0,	// (0x0002452c) list_single_cale_mrui_row_pane_t2_ParamLimits

0xdce0,	// (0x0002452c) list_single_cale_mrui_row_pane_t2

0x54dc,	// (0x0001bd28) list_single_cale_mrui_row_pane_t3_ParamLimits

0x54dc,	// (0x0001bd28) list_single_cale_mrui_row_pane_t3

0x550b,	// (0x0001bd57) list_single_cale_mrui_row_pane_t4_ParamLimits

0x550b,	// (0x0001bd57) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce8,	// (0x00026534) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce8,	// (0x00026534) list_single_cale_mrui_row_pane_t

0xdd46,	// (0x00024592) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xdd46,	// (0x00024592) list_single_cmail_header_editor_pane_bg_cp01

0xdd66,	// (0x000245b2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xdd66,	// (0x000245b2) list_single_cmail_header_editor_pane_bg_cp02

0xdd82,	// (0x000245ce) main_radioblah_text_pane_t1_ParamLimits

0xdd82,	// (0x000245ce) main_radioblah_text_pane_t1

0x553a,	// (0x0001bd86) cam6_indi_pane_cp01

0x5542,	// (0x0001bd8e) cam6_mode_pane_cp01

0x554a,	// (0x0001bd96) cam6_pano_pane

0x5553,	// (0x0001bd9f) cam6_zoom_pane_cp01

0x555b,	// (0x0001bda7) cam6_pano_image_pane

0x5566,	// (0x0001bdb2) cam6_pano_pane_g1

0x4b2d,	// (0x0001b379) cam6_pano_pane_g2

0x556f,	// (0x0001bdbb) cam6_pano_pane_g3

0x5578,	// (0x0001bdc4) cam6_pano_pane_g4

0x3600,	// (0x00019e4c) cam6_pano_pane_g5

0x5581,	// (0x0001bdcd) cam6_pano_pane_g6

0x521a,	// (0x0001ba66) cam6_pano_pane_g7

0x558b,	// (0x0001bdd7) cam6_pano_pane_g8

0x5594,	// (0x0001bde0) cam6_pano_pane_g9

0x0008,

0xfcf1,	// (0x0002653d) cam6_pano_pane_g

0x0263,	// (0x00016aaf) main_browser_tag_pane

0x52c7,	// (0x0001bb13) grid_navstr_albumart_pane

0x559f,	// (0x0001bdeb) cell_navstr_albumart_pane_ParamLimits

0x559f,	// (0x0001bdeb) cell_navstr_albumart_pane

0x55bf,	// (0x0001be0b) cell_navstr_albumart_pane_g1

0x2a5e,	// (0x000192aa) cell_navstr_albumart_pane_g2

0x2a6e,	// (0x000192ba) cell_navstr_albumart_pane_g3

0x2a66,	// (0x000192b2) cell_navstr_albumart_pane_g4

0x0003,

0xfd04,	// (0x00026550) cell_navstr_albumart_pane_g

0xdd9d,	// (0x000245e9) bt_list_pane_ParamLimits

0xdd9d,	// (0x000245e9) bt_list_pane

0xddbd,	// (0x00024609) bt_list_pane_t1

0xddcc,	// (0x00024618) bt_list_pane_t2

0x0001,

0xfd0d,	// (0x00026559) bt_list_pane_t

0x0263,	// (0x00016aaf) main_cale_prevew_pane

0xdddb,	// (0x00024627) popup_cale_preview_window_ParamLimits

0xdddb,	// (0x00024627) popup_cale_preview_window

0x02d2,	// (0x00016b1e) bg_popup_preview_window_pane_cp05_ParamLimits

0x02d2,	// (0x00016b1e) bg_popup_preview_window_pane_cp05

0x55c7,	// (0x0001be13) list_cale_preview_pane_ParamLimits

0x55c7,	// (0x0001be13) list_cale_preview_pane

0xddf4,	// (0x00024640) list_double_cale_preview_pane_ParamLimits

0xddf4,	// (0x00024640) list_double_cale_preview_pane

0xde06,	// (0x00024652) list_single_cale_preview_pane_ParamLimits

0xde06,	// (0x00024652) list_single_cale_preview_pane

0xde1c,	// (0x00024668) list_single_cale_preview_pane_g1

0xde24,	// (0x00024670) list_single_cale_preview_pane_t1_ParamLimits

0xde24,	// (0x00024670) list_single_cale_preview_pane_t1

0xde39,	// (0x00024685) list_double_cale_preview_pane_g1

0xde41,	// (0x0002468d) list_double_cale_preview_pane_t1_ParamLimits

0xde41,	// (0x0002468d) list_double_cale_preview_pane_t1

0xde56,	// (0x000246a2) list_double_cale_preview_pane_t2_ParamLimits

0xde56,	// (0x000246a2) list_double_cale_preview_pane_t2

0x0001,

0xfd12,	// (0x0002655e) list_double_cale_preview_pane_t_ParamLimits

0xfd12,	// (0x0002655e) list_double_cale_preview_pane_t

0x0263,	// (0x00016aaf) main_ezdial_pane

0x02d2,	// (0x00016b1e) main_sp_fs_email_pane_ParamLimits

0xd725,	// (0x00023f71) cmail_ddmenu_btn01_pane_ParamLimits

0xd725,	// (0x00023f71) cmail_ddmenu_btn01_pane

0xd742,	// (0x00023f8e) cmail_ddmenu_btn02_pane_ParamLimits

0xd742,	// (0x00023f8e) cmail_ddmenu_btn02_pane

0xd760,	// (0x00023fac) cmail_ddmenu_btn03_pane_ParamLimits

0xd760,	// (0x00023fac) cmail_ddmenu_btn03_pane

0xd7fb,	// (0x00024047) main_sp_fs_ctrlbar_pane_ParamLimits

0xd811,	// (0x0002405d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xda92,	// (0x000242de) list_cmail_body_pane_ParamLimits

0x51bc,	// (0x0001ba08) bg_button_pane_cp12

0x51d1,	// (0x0001ba1d) list_single_cmail_header_detail_pane_g3_ParamLimits

0x51d1,	// (0x0001ba1d) list_single_cmail_header_detail_pane_g3

0x5222,	// (0x0001ba6e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5222,	// (0x0001ba6e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc95,	// (0x000264e1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc95,	// (0x000264e1) list_single_cmail_header_detail_pane_t

0x532f,	// (0x0001bb7b) phacti_term_pane_t2_ParamLimits

0x532f,	// (0x0001bb7b) phacti_term_pane_t2

0x0001,

0xfc9f,	// (0x000264eb) phacti_term_pane_t_ParamLimits

0xfc9f,	// (0x000264eb) phacti_term_pane_t

0x55d3,	// (0x0001be1f) aid_size_list_single_double

0xde6e,	// (0x000246ba) popup_ezdial_listscroll_window

0xde8f,	// (0x000246db) popup_number_entry_window_cp01

0x0ca2,	// (0x000174ee) bg_popup_call_pane_cp09

0x55df,	// (0x0001be2b) ezdial_list_pane

0x55e7,	// (0x0001be33) scroll_pane_cp23

0x2d37,	// (0x00019583) bg_button_pane_cp028_ParamLimits

0x2d37,	// (0x00019583) bg_button_pane_cp028

0xde9d,	// (0x000246e9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xde9d,	// (0x000246e9) cmail_ddmenu_btn01_pane_g1

0xdead,	// (0x000246f9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdead,	// (0x000246f9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd17,	// (0x00026563) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd17,	// (0x00026563) cmail_ddmenu_btn01_pane_g

0x55ef,	// (0x0001be3b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x55ef,	// (0x0001be3b) cmail_ddmenu_btn01_pane_t1

0x1899,	// (0x000180e5) bg_button_pane_cp029_ParamLimits

0x1899,	// (0x000180e5) bg_button_pane_cp029

0xdeb9,	// (0x00024705) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdeb9,	// (0x00024705) cmail_ddmenu_btn02_pane_g1

0xded1,	// (0x0002471d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xded1,	// (0x0002471d) cmail_ddmenu_btn02_pane_t1

0x09bb,	// (0x00017207) bg_button_pane_cp031_ParamLimits

0x09bb,	// (0x00017207) bg_button_pane_cp031

0xdeb9,	// (0x00024705) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdeb9,	// (0x00024705) cmail_ddmenu_btn03_pane_g1

0xded1,	// (0x0002471d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xded1,	// (0x0002471d) cmail_ddmenu_btn03_pane_t1

0xbbf8,	// (0x00022444) cell_dialer2_keypad_pane_t1_ParamLimits

0xbc12,	// (0x0002245e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbc12,	// (0x0002245e) cell_dialer2_keypad_pane_t1_copy1

0xd065,	// (0x000238b1) ncimui_group_button_pane

0x02d2,	// (0x00016b1e) main_sp_fs_calendar_pane_ParamLimits

0xdab9,	// (0x00024305) list_single_cmail_header_caption_pane_ParamLimits

0x5372,	// (0x0001bbbe) aid_recal_txt_sm_pane

0x0263,	// (0x00016aaf) mian_recal_day_pane

0x53b4,	// (0x0001bc00) popup_sp_fs_cale_preview_window_ParamLimits

0x5605,	// (0x0001be51) list_recal_day_pane

0x5647,	// (0x0001be93) list_single_recal_day_pane_ParamLimits

0x5647,	// (0x0001be93) list_single_recal_day_pane

0x5659,	// (0x0001bea5) list_single_recal_day_pane_g1_ParamLimits

0x5659,	// (0x0001bea5) list_single_recal_day_pane_g1

0x5665,	// (0x0001beb1) list_single_recal_day_pane_g2_ParamLimits

0x5665,	// (0x0001beb1) list_single_recal_day_pane_g2

0x5671,	// (0x0001bebd) list_single_recal_day_pane_g3_ParamLimits

0x5671,	// (0x0001bebd) list_single_recal_day_pane_g3

0xdef5,	// (0x00024741) list_single_recal_day_pane_g4_ParamLimits

0xdef5,	// (0x00024741) list_single_recal_day_pane_g4

0x567d,	// (0x0001bec9) list_single_recal_day_pane_g5_ParamLimits

0x567d,	// (0x0001bec9) list_single_recal_day_pane_g5

0x5689,	// (0x0001bed5) list_single_recal_day_pane_g6_ParamLimits

0x5689,	// (0x0001bed5) list_single_recal_day_pane_g6

0x0004,

0xfd26,	// (0x00026572) list_single_recal_day_pane_g_ParamLimits

0xfd26,	// (0x00026572) list_single_recal_day_pane_g

0x569d,	// (0x0001bee9) list_single_recal_day_pane_t1

0x56af,	// (0x0001befb) list_single_recal_day_pane_t2

0x0001,

0xfd31,	// (0x0002657d) list_single_recal_day_pane_t

0xdf0d,	// (0x00024759) ncimui_query_button_pane_ParamLimits

0xdf0d,	// (0x00024759) ncimui_query_button_pane

0xdf1d,	// (0x00024769) ncimui_query_button_pane_t1_ParamLimits

0xdf1d,	// (0x00024769) ncimui_query_button_pane_t1

0x56c1,	// (0x0001bf0d) ncimui_query_button_pane_t2_ParamLimits

0x56c1,	// (0x0001bf0d) ncimui_query_button_pane_t2

0x0001,

0xfd36,	// (0x00026582) ncimui_query_button_pane_t_ParamLimits

0xfd36,	// (0x00026582) ncimui_query_button_pane_t

0xdf30,	// (0x0002477c) query_button_pane_ParamLimits

0xdf30,	// (0x0002477c) query_button_pane

0x0263,	// (0x00016aaf) bg_button_pane_cp0028

0x56d4,	// (0x0001bf20) query_button_pane_t1

0x7510,	// (0x0001dd5c) main_tport_pane_ParamLimits

0xd99c,	// (0x000241e8) bg_popup_window_pane_cp01_ParamLimits

0xd99c,	// (0x000241e8) bg_popup_window_pane_cp01

0xd9aa,	// (0x000241f6) heading_pane_cp08_ParamLimits

0xd9aa,	// (0x000241f6) heading_pane_cp08

0xd9b8,	// (0x00024204) heading_pane_cp07_ParamLimits

0xd9b8,	// (0x00024204) heading_pane_cp07

0xda27,	// (0x00024273) cell_tport_appsw_pane_g2

0x0002,

0xfc82,	// (0x000264ce) cell_tport_appsw_pane_g

0x1934,	// (0x00018180) input_candi_list_open_g1

0x10d9,	// (0x00017925) list_cale_time_pane_g6_ParamLimits

0x10d9,	// (0x00017925) list_cale_time_pane_g6

0xb013,	// (0x0002185f) aid_size_touch_calib_1_ParamLimits

0xb013,	// (0x0002185f) aid_size_touch_calib_1

0xb01f,	// (0x0002186b) aid_size_touch_calib_2_ParamLimits

0xb01f,	// (0x0002186b) aid_size_touch_calib_2

0xb02d,	// (0x00021879) aid_size_touch_calib_3_ParamLimits

0xb02d,	// (0x00021879) aid_size_touch_calib_3

0xb03d,	// (0x00021889) aid_size_touch_calib_4_ParamLimits

0xb03d,	// (0x00021889) aid_size_touch_calib_4

0xb04b,	// (0x00021897) main_touch_calib_button_group_pane_ParamLimits

0xb04b,	// (0x00021897) main_touch_calib_button_group_pane

0xb059,	// (0x000218a5) main_touch_calib_pane_g1_ParamLimits

0xb065,	// (0x000218b1) main_touch_calib_pane_g2_ParamLimits

0xb071,	// (0x000218bd) main_touch_calib_pane_g3_ParamLimits

0xb07d,	// (0x000218c9) main_touch_calib_pane_g4_ParamLimits

0xf6c4,	// (0x00025f10) main_touch_calib_pane_g_ParamLimits

0xb089,	// (0x000218d5) main_touch_calib_pane_t1_ParamLimits

0xb0a2,	// (0x000218ee) main_touch_calib_pane_t2_ParamLimits

0xb0bb,	// (0x00021907) main_touch_calib_pane_t3_ParamLimits

0xb0d1,	// (0x0002191d) main_touch_calib_pane_t4_ParamLimits

0xb0e7,	// (0x00021933) main_touch_calib_pane_t5_ParamLimits

0xf6cd,	// (0x00025f19) main_touch_calib_pane_t_ParamLimits

0x33c3,	// (0x00019c0f) list_single_fp_cale_pane_g3_ParamLimits

0x33c3,	// (0x00019c0f) list_single_fp_cale_pane_g3

0x74f4,	// (0x0001dd40) bg_button_pane_cp012_ParamLimits

0x74f4,	// (0x0001dd40) bg_vkb2_func_pane_cp03_ParamLimits

0x836a,	// (0x0001ebb6) cell_vitu2_function_top_pane_g1_ParamLimits

0x74f4,	// (0x0001dd40) bg_vkb2_func_pane_cp04_ParamLimits

0xcfed,	// (0x00023839) main_ncimui_button_group_pane_ParamLimits

0xcfed,	// (0x00023839) main_ncimui_button_group_pane

0xd053,	// (0x0002389f) main_ncimui_pane_t3_ParamLimits

0xd053,	// (0x0002389f) main_ncimui_pane_t3

0x52dd,	// (0x0001bb29) phacti_button_group_pane

0x55d3,	// (0x0001be1f) aid_size_list_single_double_ParamLimits

0xde6e,	// (0x000246ba) popup_ezdial_listscroll_window_ParamLimits

0xde8f,	// (0x000246db) popup_number_entry_window_cp01_ParamLimits

0xdf3d,	// (0x00024789) phacti_button_pane_ParamLimits

0xdf3d,	// (0x00024789) phacti_button_pane

0x0263,	// (0x00016aaf) bg_button_pane_cp14

0x56e2,	// (0x0001bf2e) phacti_button_pane_t1

0xdf4e,	// (0x0002479a) main_touch_calib_button_pane_ParamLimits

0xdf4e,	// (0x0002479a) main_touch_calib_button_pane

0x0a5d,	// (0x000172a9) bg_button_pane_cp18_ParamLimits

0x0a5d,	// (0x000172a9) bg_button_pane_cp18

0x56f0,	// (0x0001bf3c) main_touch_calib_button_pane_t1_ParamLimits

0x56f0,	// (0x0001bf3c) main_touch_calib_button_pane_t1

0x5706,	// (0x0001bf52) main_touch_calib_button_pane_t2_ParamLimits

0x5706,	// (0x0001bf52) main_touch_calib_button_pane_t2

0x0001,

0xfd3b,	// (0x00026587) main_touch_calib_button_pane_t_ParamLimits

0xfd3b,	// (0x00026587) main_touch_calib_button_pane_t

0x0263,	// (0x00016aaf) cell_ncimui_button_pane

0x0263,	// (0x00016aaf) bg_button_pane_cp032

0x5724,	// (0x0001bf70) cell_ncimui_button_pane_t1

0x7bb7,	// (0x0001e403) image3_infobar_pane_ParamLimits

0x7bb7,	// (0x0001e403) image3_infobar_pane

0xd410,	// (0x00023c5c) fs_bigclock_status_pane_ParamLimits

0xd410,	// (0x00023c5c) fs_bigclock_status_pane

0xd41d,	// (0x00023c69) main_fs_bigclock_clock_pane_ParamLimits

0xd41d,	// (0x00023c69) main_fs_bigclock_clock_pane

0xd431,	// (0x00023c7d) main_fs_bigclock_indi_pane_ParamLimits

0xd431,	// (0x00023c7d) main_fs_bigclock_indi_pane

0xd459,	// (0x00023ca5) main_fs_bigclock_swipe_pane_ParamLimits

0xd459,	// (0x00023ca5) main_fs_bigclock_swipe_pane

0x0263,	// (0x00016aaf) main_fs_clock_dumped_data

0x4c3a,	// (0x0001b486) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4c3a,	// (0x0001b486) list_single_fs_bigclock_indicator_pane_g1

0x4c55,	// (0x0001b4a1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4c55,	// (0x0001b4a1) list_single_fs_bigclock_indicator_pane_g2

0x4c6f,	// (0x0001b4bb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4c6f,	// (0x0001b4bb) list_single_fs_bigclock_indicator_pane_g3

0x4c89,	// (0x0001b4d5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4c89,	// (0x0001b4d5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbdc,	// (0x00026428) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbdc,	// (0x00026428) list_single_fs_bigclock_indicator_pane_g

0x4cb4,	// (0x0001b500) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4cb4,	// (0x0001b500) list_single_fs_bigclock_indicator_pane_t1

0x4cdc,	// (0x0001b528) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4cdc,	// (0x0001b528) list_single_fs_bigclock_indicator_pane_t2

0x4d04,	// (0x0001b550) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4d04,	// (0x0001b550) list_single_fs_bigclock_indicator_pane_t3

0x4d2c,	// (0x0001b578) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4d2c,	// (0x0001b578) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe7,	// (0x00026433) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe7,	// (0x00026433) list_single_fs_bigclock_indicator_pane_t

0x5732,	// (0x0001bf7e) image3_infobar_fav_pane_ParamLimits

0x5732,	// (0x0001bf7e) image3_infobar_fav_pane

0x5742,	// (0x0001bf8e) image3_infobar_loc_pane_ParamLimits

0x5742,	// (0x0001bf8e) image3_infobar_loc_pane

0x5756,	// (0x0001bfa2) image3_infobar_time_pane_ParamLimits

0x5756,	// (0x0001bfa2) image3_infobar_time_pane

0x0ce2,	// (0x0001752e) image3_infobar_time_pane_g1

0x5766,	// (0x0001bfb2) image3_infobar_time_pane_t1

0x0ce2,	// (0x0001752e) image3_infobar_loc_pane_g1

0x5774,	// (0x0001bfc0) image3_infobar_loc_pane_g2

0x0001,

0xfd40,	// (0x0002658c) image3_infobar_loc_pane_g

0x577c,	// (0x0001bfc8) image3_infobar_loc_pane_t1

0x0ce2,	// (0x0001752e) image3_infobar_fav_pane_g1

0x578a,	// (0x0001bfd6) image3_infobar_fav_pane_g2

0x0001,

0xfd45,	// (0x00026591) image3_infobar_fav_pane_g

0x5792,	// (0x0001bfde) fs_bigclock_status_battery_pane

0x579b,	// (0x0001bfe7) fs_bigclock_status_signal_pane

0x57a4,	// (0x0001bff0) fs_bigclock_status_title_pane

0x57ad,	// (0x0001bff9) fs_bigclock_status_signal_pane_g1

0x57b6,	// (0x0001c002) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd4a,	// (0x00026596) fs_bigclock_status_signal_pane_g

0x57be,	// (0x0001c00a) fs_bigclock_status_battery_pane_g1

0x57c7,	// (0x0001c013) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd4f,	// (0x0002659b) fs_bigclock_status_battery_pane_g

0x57cf,	// (0x0001c01b) fs_bigclock_status_title_pane_t1

0xdf5e,	// (0x000247aa) main_fs_bigclock_clock_pane_g1

0xdf5e,	// (0x000247aa) main_fs_bigclock_clock_pane_g2

0xdf6b,	// (0x000247b7) main_fs_bigclock_clock_pane_g3

0xdf6b,	// (0x000247b7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd54,	// (0x000265a0) main_fs_bigclock_clock_pane_g

0xdf77,	// (0x000247c3) main_fs_bigclock_clock_pane_t1

0xdf8a,	// (0x000247d6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd5d,	// (0x000265a9) main_fs_bigclock_clock_pane_t

0x57dd,	// (0x0001c029) list_single_fs_bigclock_indicator_pane_ParamLimits

0x57dd,	// (0x0001c029) list_single_fs_bigclock_indicator_pane

0x57ee,	// (0x0001c03a) list_single_fs_bigclock_pane_ParamLimits

0x57ee,	// (0x0001c03a) list_single_fs_bigclock_pane

0x5814,	// (0x0001c060) main_fs_bigclock_indicator_pane_t1

0x5823,	// (0x0001c06f) list_single_fs_bigclock_pane_g1

0x582b,	// (0x0001c077) list_single_fs_bigclock_pane_t1

0x0ce2,	// (0x0001752e) main_fs_bigclock_swipe_pane_g1

0x586e,	// (0x0001c0ba) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd6e,	// (0x000265ba) main_fs_bigclock_swipe_pane_g

0x5876,	// (0x0001c0c2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5876,	// (0x0001c0c2) main_fs_bigclock_swipe_pane_t1

0xa080,	// (0x000208cc) call_type_pane_ParamLimits

0x0263,	// (0x00016aaf) main_btmg_pane

0x54b1,	// (0x0001bcfd) list_single_cale_mrui_row_pane_g2_ParamLimits

0x54b1,	// (0x0001bcfd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfce1,	// (0x0002652d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfce1,	// (0x0002652d) list_single_cale_mrui_row_pane_g

0x562e,	// (0x0001be7a) list_recal_vselct_arw_lo_pane

0x5636,	// (0x0001be82) list_recal_vselct_arw_up_pane

0x563e,	// (0x0001be8a) list_recal_vselct_pane

0xdfe1,	// (0x0002482d) btmg_button_pane

0xdfed,	// (0x00024839) main_btmg_pane_g1

0x0263,	// (0x00016aaf) bg_button_pane_cp044

0x5893,	// (0x0001c0df) btmg_button_pane_t1

0x2bae,	// (0x000193fa) aid_listscroll_gen

0x02d2,	// (0x00016b1e) main_cntbar_detail_pane

0x519e,	// (0x0001b9ea) list_cmail_folder_pane

0x3bfa,	// (0x0001a446) sp_fs_scroll_pane_cp03_ParamLimits

0xdab9,	// (0x00024305) list_single_fs_dyc_pane_cp01_ParamLimits

0xdab9,	// (0x00024305) list_single_fs_dyc_pane_cp01

0x58a1,	// (0x0001c0ed) aid_size_cmail_indent

0x58aa,	// (0x0001c0f6) list_single_dyc_row_pane_cp01

0xe015,	// (0x00024861) cntbar_detail_list_pane_ParamLimits

0xe015,	// (0x00024861) cntbar_detail_list_pane

0xe04f,	// (0x0002489b) main_cntbar_detail_cont_pane_ParamLimits

0xe04f,	// (0x0002489b) main_cntbar_detail_cont_pane

0xa074,	// (0x000208c0) scroll_pane_cp032_ParamLimits

0xa074,	// (0x000208c0) scroll_pane_cp032

0xe05b,	// (0x000248a7) cntbar_detail_list_event_pane_ParamLimits

0xe05b,	// (0x000248a7) cntbar_detail_list_event_pane

0xe021,	// (0x0002486d) cntbar_detail_list_shct_pane

0x0f41,	// (0x0001778d) aid_list_gen

0x58b3,	// (0x0001c0ff) aid_scroll

0x58bc,	// (0x0001c108) aid_size_touch_scroll_bar

0xd5e9,	// (0x00023e35) aid_list_double

0x58c5,	// (0x0001c111) aid_list_single

0x58c5,	// (0x0001c111) aid_list_single_lg

0x58ce,	// (0x0001c11a) aid_list_z_g_a_sm

0x58d6,	// (0x0001c122) aid_list_z_g_d

0x58de,	// (0x0001c12a) aid_txt_z_prm

0xe06f,	// (0x000248bb) aid_txt_z_prm_cp01

0xe07d,	// (0x000248c9) aid_txt_z_sec

0xe08b,	// (0x000248d7) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe08b,	// (0x000248d7) main_cntbar_detail_cont_pane_g1

0xe098,	// (0x000248e4) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe098,	// (0x000248e4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd73,	// (0x000265bf) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd73,	// (0x000265bf) main_cntbar_detail_cont_pane_g

0x58ec,	// (0x0001c138) main_cntbar_detail_cont_pane_t1

0x58fa,	// (0x0001c146) main_cntbar_detail_cont_pane_t2

0x5908,	// (0x0001c154) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd78,	// (0x000265c4) main_cntbar_detail_cont_pane_t

0xe0a4,	// (0x000248f0) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe0a4,	// (0x000248f0) cell_cntbar_detail_list_shct_pane

0x5916,	// (0x0001c162) cntbar_detail_list_shct_pane_g1

0x591f,	// (0x0001c16b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd7f,	// (0x000265cb) cntbar_detail_list_shct_pane_g

0xe0b8,	// (0x00024904) cntbar_detail_list_event_pane_g1_ParamLimits

0xe0b8,	// (0x00024904) cntbar_detail_list_event_pane_g1

0xe0c4,	// (0x00024910) cntbar_detail_list_event_pane_g2_ParamLimits

0xe0c4,	// (0x00024910) cntbar_detail_list_event_pane_g2

0x0005,

0xfd84,	// (0x000265d0) cntbar_detail_list_event_pane_g_ParamLimits

0xfd84,	// (0x000265d0) cntbar_detail_list_event_pane_g

0xe130,	// (0x0002497c) cntbar_detail_list_event_pane_t1_ParamLimits

0xe130,	// (0x0002497c) cntbar_detail_list_event_pane_t1

0xe145,	// (0x00024991) cntbar_detail_list_event_pane_t2_ParamLimits

0xe145,	// (0x00024991) cntbar_detail_list_event_pane_t2

0x0002,

0xfd91,	// (0x000265dd) cntbar_detail_list_event_pane_t_ParamLimits

0xfd91,	// (0x000265dd) cntbar_detail_list_event_pane_t

0x0ce2,	// (0x0001752e) cell_cntbar_detail_list_shct_pane_g1

0x1752,	// (0x00017f9e) navi_pane_mv_g3

0x02d2,	// (0x00016b1e) main_cntbar_detail_pane_ParamLimits

0x0263,	// (0x00016aaf) main_notif_wgt_pane

0x78ce,	// (0x0001e11a) aid_tch_main_mp4_pane_g4

0x7b2d,	// (0x0001e379) popup_slider_window_cp02

0x5624,	// (0x0001be70) list_recal_day_event_pane

0xdff5,	// (0x00024841) cntbar_detail_btn_pane_ParamLimits

0xdff5,	// (0x00024841) cntbar_detail_btn_pane

0xe005,	// (0x00024851) cntbar_detail_btn_pane_cp01_ParamLimits

0xe005,	// (0x00024851) cntbar_detail_btn_pane_cp01

0xe021,	// (0x0002486d) cntbar_detail_list_shct_pane_ParamLimits

0xe02d,	// (0x00024879) cntbar_detail_pane_g1_ParamLimits

0xe02d,	// (0x00024879) cntbar_detail_pane_g1

0xe039,	// (0x00024885) cntbar_detail_pane_t1_ParamLimits

0xe039,	// (0x00024885) cntbar_detail_pane_t1

0xe0d0,	// (0x0002491c) cntbar_detail_list_event_pane_g3_ParamLimits

0xe0d0,	// (0x0002491c) cntbar_detail_list_event_pane_g3

0xe0e8,	// (0x00024934) cntbar_detail_list_event_pane_g4_ParamLimits

0xe0e8,	// (0x00024934) cntbar_detail_list_event_pane_g4

0xe100,	// (0x0002494c) cntbar_detail_list_event_pane_g5_ParamLimits

0xe100,	// (0x0002494c) cntbar_detail_list_event_pane_g5

0xe118,	// (0x00024964) cntbar_detail_list_event_pane_g6_ParamLimits

0xe118,	// (0x00024964) cntbar_detail_list_event_pane_g6

0xe15a,	// (0x000249a6) cntbar_detail_list_event_pane_t3_ParamLimits

0xe15a,	// (0x000249a6) cntbar_detail_list_event_pane_t3

0xe16c,	// (0x000249b8) popup_notif_wgt_window_ParamLimits

0xe16c,	// (0x000249b8) popup_notif_wgt_window

0xe17c,	// (0x000249c8) popup_submenu_window_cp01_ParamLimits

0xe17c,	// (0x000249c8) popup_submenu_window_cp01

0x0ca2,	// (0x000174ee) bg_popup_window_pane_cp10

0x5928,	// (0x0001c174) listscroll_notif_wgt_pane

0x593a,	// (0x0001c186) list_notif_wgt_window

0x5943,	// (0x0001c18f) scroll_pane_cp033

0xe18e,	// (0x000249da) list_notif_wgt_row_pane_ParamLimits

0xe18e,	// (0x000249da) list_notif_wgt_row_pane

0x594c,	// (0x0001c198) aid_size_list_notif_wgt_del

0x5959,	// (0x0001c1a5) list_notif_wgt_row_pane_g1

0x5965,	// (0x0001c1b1) list_notif_wgt_row_pane_g2

0x5974,	// (0x0001c1c0) list_notif_wgt_row_pane_g3

0x0002,

0xfd98,	// (0x000265e4) list_notif_wgt_row_pane_g

0x5981,	// (0x0001c1cd) list_notif_wgt_row_pane_t1

0x5997,	// (0x0001c1e3) list_notif_wgt_row_pane_t2

0x59a9,	// (0x0001c1f5) list_notif_wgt_row_pane_t3

0x0002,

0xfd9f,	// (0x000265eb) list_notif_wgt_row_pane_t

0x4028,	// (0x0001a874) list_recal_day_event_pane_g1

0x59bb,	// (0x0001c207) list_recal_day_event_pane_t1

0x0263,	// (0x00016aaf) bg_button_pane_cp045

0x59ca,	// (0x0001c216) cntbar_detail_btn_pane_t1

0x1899,	// (0x000180e5) main_callh_pane_ParamLimits

0x1899,	// (0x000180e5) main_callh_pane

0x0263,	// (0x00016aaf) main_coverflow0_pane

0x0263,	// (0x00016aaf) main_wgtman_pane

0xd471,	// (0x00023cbd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd471,	// (0x00023cbd) main_fs_bigclock_unlock_btn_pane

0xda1f,	// (0x0002426b) bg_button_pane_cp16

0xda2f,	// (0x0002427b) cell_tport_appsw_pane_g3

0xe1a0,	// (0x000249ec) cf0_flow_pane_ParamLimits

0xe1a0,	// (0x000249ec) cf0_flow_pane

0x59d8,	// (0x0001c224) listscroll_cf0_pane

0x59e3,	// (0x0001c22f) main_cf0_pane_g1

0xe1af,	// (0x000249fb) main_cf0_pane_t1_ParamLimits

0xe1af,	// (0x000249fb) main_cf0_pane_t1

0xe1c3,	// (0x00024a0f) main_cf0_pane_t2_ParamLimits

0xe1c3,	// (0x00024a0f) main_cf0_pane_t2

0x0001,

0xfdab,	// (0x000265f7) main_cf0_pane_t_ParamLimits

0xfdab,	// (0x000265f7) main_cf0_pane_t

0x59f5,	// (0x0001c241) scroll_pane_cp11

0xe1d7,	// (0x00024a23) cf0_flow_pane_g1

0xe1df,	// (0x00024a2b) cf0_flow_pane_g2

0x0001,

0xfdb0,	// (0x000265fc) cf0_flow_pane_g

0xe1e7,	// (0x00024a33) cf0_flow_pane_t1

0x0263,	// (0x00016aaf) main_call6_pane

0x0263,	// (0x00016aaf) main_calllock_pane

0x858a,	// (0x0001edd6) call6_btn_grp_pane_ParamLimits

0x858a,	// (0x0001edd6) call6_btn_grp_pane

0x8599,	// (0x0001ede5) call6_pane_g1_ParamLimits

0x8599,	// (0x0001ede5) call6_pane_g1

0x85a9,	// (0x0001edf5) popup_call6_1st_window_ParamLimits

0x85a9,	// (0x0001edf5) popup_call6_1st_window

0x85b7,	// (0x0001ee03) popup_call6_2nd_window_ParamLimits

0x85b7,	// (0x0001ee03) popup_call6_2nd_window

0x85c5,	// (0x0001ee11) cell_call6_btn_pane_ParamLimits

0x85c5,	// (0x0001ee11) cell_call6_btn_pane

0x0ca2,	// (0x000174ee) bg_popup_call2_in_pane_cp03

0x5a00,	// (0x0001c24c) popup_call6_1st_window_g1

0x5a08,	// (0x0001c254) popup_call6_1st_window_g2

0x5a10,	// (0x0001c25c) popup_call6_1st_window_g3

0x0002,

0xfdb5,	// (0x00026601) popup_call6_1st_window_g

0x5a18,	// (0x0001c264) popup_call6_1st_window_t1

0x5a27,	// (0x0001c273) popup_call6_1st_window_t2

0x5a35,	// (0x0001c281) popup_call6_1st_window_t3

0x0002,

0xfdbc,	// (0x00026608) popup_call6_1st_window_t

0x0ca2,	// (0x000174ee) bg_popup_call2_in_pane_cp04

0x5a43,	// (0x0001c28f) popup_call6_2nd_window_g1

0x5a4b,	// (0x0001c297) popup_call6_2nd_window_g2

0x5a53,	// (0x0001c29f) popup_call6_2nd_window_g3

0x0002,

0xfdc3,	// (0x0002660f) popup_call6_2nd_window_g

0x5a5b,	// (0x0001c2a7) popup_call6_2nd_window_t1

0x709c,	// (0x0001d8e8) bg_button_pane_cp15

0x85d4,	// (0x0001ee20) cell_call6_btn_pane_g1

0x85dd,	// (0x0001ee29) cell_call6_btn_pane_t1

0xe1f5,	// (0x00024a41) listscroll_wgtman_pane_ParamLimits

0xe1f5,	// (0x00024a41) listscroll_wgtman_pane

0xe211,	// (0x00024a5d) wgtman_btn_pane_ParamLimits

0xe211,	// (0x00024a5d) wgtman_btn_pane

0x1559,	// (0x00017da5) aid_scroll_copy1

0x5a82,	// (0x0001c2ce) list_wgtman_pane

0xe246,	// (0x00024a92) wgtman_btn_pane_g1_ParamLimits

0xe246,	// (0x00024a92) wgtman_btn_pane_g1

0xe26e,	// (0x00024aba) wgtman_btn_pane_t1_ParamLimits

0xe26e,	// (0x00024aba) wgtman_btn_pane_t1

0x5a8c,	// (0x0001c2d8) wgtman_btn_pane_t2_ParamLimits

0x5a8c,	// (0x0001c2d8) wgtman_btn_pane_t2

0x0001,

0xfdca,	// (0x00026616) wgtman_btn_pane_t_ParamLimits

0xfdca,	// (0x00026616) wgtman_btn_pane_t

0xe2a5,	// (0x00024af1) listrow_wgtman_pane_ParamLimits

0xe2a5,	// (0x00024af1) listrow_wgtman_pane

0xe2c0,	// (0x00024b0c) listrow_wgtman_pane_g1

0xe2cd,	// (0x00024b19) listrow_wgtman_pane_g2

0x0001,

0xfdcf,	// (0x0002661b) listrow_wgtman_pane_g

0xe2eb,	// (0x00024b37) listrow_wgtman_pane_t1

0xe303,	// (0x00024b4f) listrow_wgtman_pane_t2

0x0001,

0xfdd4,	// (0x00026620) listrow_wgtman_pane_t

0xe329,	// (0x00024b75) wait_bar_pane_cp09

0x5aa3,	// (0x0001c2ef) main_calllock_btn_pane

0x5aad,	// (0x0001c2f9) main_calllock_pane_g1

0x0263,	// (0x00016aaf) bg_button_pane_cp17

0x5a6a,	// (0x0001c2b6) main_calllock_btn_pane_g1

0x5ab5,	// (0x0001c301) main_calllock_btn_pane_t1

0x0263,	// (0x00016aaf) main_dialer3_pane

0x0263,	// (0x00016aaf) main_fmrd2_pane

0x0ce2,	// (0x0001752e) main_fs_bigclock_unlock_btn_pane_g1

0xe343,	// (0x00024b8f) main_fs_bigclock_unlock_btn_pane_t1

0xe351,	// (0x00024b9d) area_fmrd2_info_pane_ParamLimits

0xe351,	// (0x00024b9d) area_fmrd2_info_pane

0xe35f,	// (0x00024bab) area_fmrd2_visual_pane_ParamLimits

0xe35f,	// (0x00024bab) area_fmrd2_visual_pane

0xe36d,	// (0x00024bb9) fmrd2_indi_pane_ParamLimits

0xe36d,	// (0x00024bb9) fmrd2_indi_pane

0xe37a,	// (0x00024bc6) area_fmrd2_visual_pane_g1

0xe382,	// (0x00024bce) area_fmrd2_visual_pane_t1

0xe392,	// (0x00024bde) area_fmrd2_visual_pane_t2

0xe3a2,	// (0x00024bee) area_fmrd2_visual_pane_t3

0x0002,

0xfdde,	// (0x0002662a) area_fmrd2_visual_pane_t

0xe3b2,	// (0x00024bfe) area_fmrd2_info_pane_g1

0xe3ba,	// (0x00024c06) area_fmrd2_info_pane_t1

0xe3ca,	// (0x00024c16) area_fmrd2_info_pane_t2

0xe3da,	// (0x00024c26) area_fmrd2_info_pane_t3

0xe3ea,	// (0x00024c36) area_fmrd2_info_pane_t4

0x0003,

0xfde5,	// (0x00026631) area_fmrd2_info_pane_t

0xe3f8,	// (0x00024c44) fmrd2_indi_pane_t1

0xe408,	// (0x00024c54) fmrd2_indi_pane_t2

0xe418,	// (0x00024c64) fmrd2_indi_pane_t3

0x0002,

0xfdee,	// (0x0002663a) fmrd2_indi_pane_t

0x4c98,	// (0x0001b4e4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4c98,	// (0x0001b4e4) list_single_fs_bigclock_indicator_pane_g5

0x4d49,	// (0x0001b595) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4d49,	// (0x0001b595) list_single_fs_bigclock_indicator_pane_t5

0xdbc8,	// (0x00024414) aid_cell_bcale_month_pane_ParamLimits

0xdbc8,	// (0x00024414) aid_cell_bcale_month_pane

0xdbe6,	// (0x00024432) bcale_month_pane_ParamLimits

0xdbe6,	// (0x00024432) bcale_month_pane

0xdc04,	// (0x00024450) bcale_preview_pane_ParamLimits

0xdc04,	// (0x00024450) bcale_preview_pane

0x582b,	// (0x0001c077) list_single_fs_bigclock_pane_t1_ParamLimits

0x584a,	// (0x0001c096) list_single_fs_bigclock_pane_t2_ParamLimits

0x584a,	// (0x0001c096) list_single_fs_bigclock_pane_t2

0x0001,

0xfd69,	// (0x000265b5) list_single_fs_bigclock_pane_t_ParamLimits

0xfd69,	// (0x000265b5) list_single_fs_bigclock_pane_t

0xe33b,	// (0x00024b87) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd9,	// (0x00026625) main_fs_bigclock_unlock_btn_pane_g

0xe426,	// (0x00024c72) aid_dia3_key_size_ParamLimits

0xe426,	// (0x00024c72) aid_dia3_key_size

0xe432,	// (0x00024c7e) aid_dia3_listrow_size_ParamLimits

0xe432,	// (0x00024c7e) aid_dia3_listrow_size

0xe442,	// (0x00024c8e) dia3_keypad_fun_pane_ParamLimits

0xe442,	// (0x00024c8e) dia3_keypad_fun_pane

0xe454,	// (0x00024ca0) dia3_keypad_num_pane_ParamLimits

0xe454,	// (0x00024ca0) dia3_keypad_num_pane

0xe466,	// (0x00024cb2) dia3_listscroll_pane_ParamLimits

0xe466,	// (0x00024cb2) dia3_listscroll_pane

0xe474,	// (0x00024cc0) dia3_numentry_pane_ParamLimits

0xe474,	// (0x00024cc0) dia3_numentry_pane

0x5ac4,	// (0x0001c310) dia3_list_pane

0x5acf,	// (0x0001c31b) scroll_pane_cp12

0x0263,	// (0x00016aaf) bg_dia3_numentry_pane

0xe482,	// (0x00024cce) dia3_numentry_pane_t1

0xe491,	// (0x00024cdd) cell_dia3_key_num_pane

0xe499,	// (0x00024ce5) cell_dia3_key0_fun_pane_ParamLimits

0xe499,	// (0x00024ce5) cell_dia3_key0_fun_pane

0xe4a6,	// (0x00024cf2) cell_dia3_key1_fun_pane_ParamLimits

0xe4a6,	// (0x00024cf2) cell_dia3_key1_fun_pane

0xe4b3,	// (0x00024cff) dia3_listrow_pane

0x49eb,	// (0x0001b237) bg_dia3_numentry_pane_g1

0x0263,	// (0x00016aaf) bg_button_pane_cp21

0x5ada,	// (0x0001c326) cell_dia3_key_num_pane_t1

0x5ae8,	// (0x0001c334) cell_dia3_key_num_pane_t2

0x5af7,	// (0x0001c343) cell_dia3_key_num_pane_t3

0x5b06,	// (0x0001c352) cell_dia3_key_num_pane_t4

0x0003,

0xfdf5,	// (0x00026641) cell_dia3_key_num_pane_t

0x0263,	// (0x00016aaf) bg_button_pane_cp19

0xe4c0,	// (0x00024d0c) cell_dia3_key0_fun_pane_g1

0x0263,	// (0x00016aaf) bg_button_pane_cp20

0xe4c8,	// (0x00024d14) cell_dia3_key1_fun_pane_g1

0xe4d0,	// (0x00024d1c) area_left_week_number_pane

0xe4e3,	// (0x00024d2f) area_top_day_name_pane

0xe4f1,	// (0x00024d3d) frame_month_view_pane

0x5b15,	// (0x0001c361) grid_month_view_pane

0xe506,	// (0x00024d52) cell_top_day_name_pane_ParamLimits

0xe506,	// (0x00024d52) cell_top_day_name_pane

0xe520,	// (0x00024d6c) cell_area_left_week_number_pane_ParamLimits

0xe520,	// (0x00024d6c) cell_area_left_week_number_pane

0xe543,	// (0x00024d8f) cell_month_view_pane_ParamLimits

0xe543,	// (0x00024d8f) cell_month_view_pane

0x5b23,	// (0x0001c36f) frm_month_g1

0xe56f,	// (0x00024dbb) frm_month_g2

0xe580,	// (0x00024dcc) frm_month_g3

0xe591,	// (0x00024ddd) frm_month_g4

0xe5a2,	// (0x00024dee) frm_month_g5

0xe5b5,	// (0x00024e01) frm_month_g6

0xe5c8,	// (0x00024e14) frm_month_g7

0x5b30,	// (0x0001c37c) frm_month_g8

0xe5db,	// (0x00024e27) frm_month_g9

0xe5e8,	// (0x00024e34) frm_month_g10

0xe5f5,	// (0x00024e41) frm_month_g11

0xe602,	// (0x00024e4e) frm_month_g12

0xe60f,	// (0x00024e5b) frm_month_g13

0xe61c,	// (0x00024e68) frm_month_g14

0xe62b,	// (0x00024e77) frm_month_g15

0xe63a,	// (0x00024e86) frm_month_g16

0x000f,

0xfdfe,	// (0x0002664a) frm_month_g

0x5b3d,	// (0x0001c389) cell_top_day_name_pane_t1

0xe649,	// (0x00024e95) cell_area_left_week_number_pane_g1

0xe658,	// (0x00024ea4) cell_area_left_week_number_pane_t1

0x09c9,	// (0x00017215) cell_month_view_pane_g1

0xe66e,	// (0x00024eba) cell_month_view_pane_t1

0x0263,	// (0x00016aaf) main_fps_pane

0x4faa,	// (0x0001b7f6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4faa,	// (0x0001b7f6) cmail_ddmenu_btn02_pane_cp1

0x4fc6,	// (0x0001b812) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4fc6,	// (0x0001b812) cmail_ddmenu_btn02_pane_cp2

0xdec5,	// (0x00024711) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdec5,	// (0x00024711) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd1c,	// (0x00026568) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd1c,	// (0x00026568) cmail_ddmenu_btn02_pane_g

0xdee3,	// (0x0002472f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdee3,	// (0x0002472f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd21,	// (0x0002656d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd21,	// (0x0002656d) cmail_ddmenu_btn02_pane_t

0xe684,	// (0x00024ed0) fps_text_pane_ParamLimits

0xe684,	// (0x00024ed0) fps_text_pane

0xe691,	// (0x00024edd) main_fps_pane_g1_ParamLimits

0xe691,	// (0x00024edd) main_fps_pane_g1

0xe69f,	// (0x00024eeb) wait_bar_pane_cp010_ParamLimits

0xe69f,	// (0x00024eeb) wait_bar_pane_cp010

0xe6ab,	// (0x00024ef7) fps_text_pane_t1_ParamLimits

0xe6ab,	// (0x00024ef7) fps_text_pane_t1

0xbd05,	// (0x00022551) cam4_image_uncrop_pane_g1

0xbd0e,	// (0x0002255a) cam4_image_uncrop_pane_g2

0xbd17,	// (0x00022563) cam4_image_uncrop_pane_g3

0xbd20,	// (0x0002256c) cam4_image_uncrop_pane_g4

0x0003,

0xf860,	// (0x000260ac) cam4_image_uncrop_pane_g

0xe4b3,	// (0x00024cff) dia3_listrow_pane_ParamLimits

0x0263,	// (0x00016aaf) main_phob2_pane

0xda01,	// (0x0002424d) cell_tport_appsw_pane_cp02_ParamLimits

0xda01,	// (0x0002424d) cell_tport_appsw_pane_cp02

0xda10,	// (0x0002425c) cell_tport_appsw_pane_cp03_ParamLimits

0xda10,	// (0x0002425c) cell_tport_appsw_pane_cp03

0x0263,	// (0x00016aaf) phob2_contact_card_pane

0x0263,	// (0x00016aaf) phob2_listscroll_pane

0x5b50,	// (0x0001c39c) phob2_list_pane

0x5b58,	// (0x0001c3a4) scroll_pane_cp034

0xe6c4,	// (0x00024f10) phob2_cc_data_pane_ParamLimits

0xe6c4,	// (0x00024f10) phob2_cc_data_pane

0xe6de,	// (0x00024f2a) phob2_cc_listscroll_pane_ParamLimits

0xe6de,	// (0x00024f2a) phob2_cc_listscroll_pane

0xe2a5,	// (0x00024af1) list_double_large_graphic_phob2_pane_ParamLimits

0xe2a5,	// (0x00024af1) list_double_large_graphic_phob2_pane

0xe6f8,	// (0x00024f44) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe6f8,	// (0x00024f44) list_double_large_graphic_phob2_pane_g1

0xe705,	// (0x00024f51) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe705,	// (0x00024f51) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe1f,	// (0x0002666b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1f,	// (0x0002666b) list_double_large_graphic_phob2_pane_g

0xe72b,	// (0x00024f77) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xe72b,	// (0x00024f77) list_double_large_graphic_phob2_pane_t1

0xe740,	// (0x00024f8c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xe740,	// (0x00024f8c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe28,	// (0x00026674) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe28,	// (0x00026674) list_double_large_graphic_phob2_pane_t

0x0263,	// (0x00016aaf) list_highlight_pane_cp024

0x5b60,	// (0x0001c3ac) phob2_cc_button_pane

0xe755,	// (0x00024fa1) phob2_cc_data_pane_g1_ParamLimits

0xe755,	// (0x00024fa1) phob2_cc_data_pane_g1

0xe764,	// (0x00024fb0) phob2_cc_data_pane_g2_ParamLimits

0xe764,	// (0x00024fb0) phob2_cc_data_pane_g2

0x0001,

0xfe2d,	// (0x00026679) phob2_cc_data_pane_g_ParamLimits

0xfe2d,	// (0x00026679) phob2_cc_data_pane_g

0xe773,	// (0x00024fbf) phob2_cc_data_pane_t1_ParamLimits

0xe773,	// (0x00024fbf) phob2_cc_data_pane_t1

0xe788,	// (0x00024fd4) phob2_cc_data_pane_t2_ParamLimits

0xe788,	// (0x00024fd4) phob2_cc_data_pane_t2

0xe79d,	// (0x00024fe9) phob2_cc_data_pane_t3_ParamLimits

0xe79d,	// (0x00024fe9) phob2_cc_data_pane_t3

0x0002,

0xfe32,	// (0x0002667e) phob2_cc_data_pane_t_ParamLimits

0xfe32,	// (0x0002667e) phob2_cc_data_pane_t

0x5b7a,	// (0x0001c3c6) phob2_cc_list_pane_ParamLimits

0x5b7a,	// (0x0001c3c6) phob2_cc_list_pane

0x40d1,	// (0x0001a91d) scroll_pane_cp035_ParamLimits

0x40d1,	// (0x0001a91d) scroll_pane_cp035

0x02d2,	// (0x00016b1e) bg_button_pane_cp033

0x5b86,	// (0x0001c3d2) phob2_cc_button_pane_g1

0x5b92,	// (0x0001c3de) phob2_cc_button_pane_t1

0x5ba7,	// (0x0001c3f3) phob2_cc_button_pane_t2

0x0001,

0xfe39,	// (0x00026685) phob2_cc_button_pane_t

0xe7b2,	// (0x00024ffe) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe7b2,	// (0x00024ffe) list_double_large_graphic_phob2_cc_pane

0xe820,	// (0x0002506c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe820,	// (0x0002506c) list_double_large_graphic_phob2_cc_pane_g1

0xe831,	// (0x0002507d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe831,	// (0x0002507d) list_double_large_graphic_phob2_cc_pane_g2

0xe840,	// (0x0002508c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xe840,	// (0x0002508c) list_double_large_graphic_phob2_cc_pane_g3

0xe84f,	// (0x0002509b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xe84f,	// (0x0002509b) list_double_large_graphic_phob2_cc_pane_g4

0xe860,	// (0x000250ac) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xe860,	// (0x000250ac) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe3e,	// (0x0002668a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe3e,	// (0x0002668a) list_double_large_graphic_phob2_cc_pane_g

0xe86f,	// (0x000250bb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xe86f,	// (0x000250bb) list_double_large_graphic_phob2_cc_pane_t1

0xe898,	// (0x000250e4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xe898,	// (0x000250e4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe49,	// (0x00026695) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe49,	// (0x00026695) list_double_large_graphic_phob2_cc_pane_t

0x5bb9,	// (0x0001c405) list_highlight_pane_cp025_ParamLimits

0x5bb9,	// (0x0001c405) list_highlight_pane_cp025

0x02d2,	// (0x00016b1e) bg_button_pane_cp033_ParamLimits

0x5b86,	// (0x0001c3d2) phob2_cc_button_pane_g1_ParamLimits

0x5b92,	// (0x0001c3de) phob2_cc_button_pane_t1_ParamLimits

0x5ba7,	// (0x0001c3f3) phob2_cc_button_pane_t2_ParamLimits

0xfe39,	// (0x00026685) phob2_cc_button_pane_t_ParamLimits

0x865f,	// (0x0001eeab) popup_wgtman_window

0x3e65,	// (0x0001a6b1) scroll_pane_cp038

0xe22e,	// (0x00024a7a) wgtman_btn_pane_cp_01_ParamLimits

0xe22e,	// (0x00024a7a) wgtman_btn_pane_cp_01

0x5bc7,	// (0x0001c413) wgtman_content_pane

0x5bd0,	// (0x0001c41c) wgtman_heading_pane

0x0263,	// (0x00016aaf) bg_heading_pane_cp02

0x5bd9,	// (0x0001c425) wgtman_heading_pane_g1

0x5be1,	// (0x0001c42d) wgtman_heading_pane_t1

0x5bef,	// (0x0001c43b) scroll_pane_cp036

0x5bf7,	// (0x0001c443) wgtman_list_pane

0x5bff,	// (0x0001c44b) wgtman_list_pane_t1_ParamLimits

0x5bff,	// (0x0001c44b) wgtman_list_pane_t1

0x7de2,	// (0x0001e62e) cam4_grid_pane

0xc474,	// (0x00022cc0) bg_button_pane_cp015_ParamLimits

0xc489,	// (0x00022cd5) bg_button_pane_cp016_ParamLimits

0xc495,	// (0x00022ce1) bg_button_pane_cp017_ParamLimits

0xc4ed,	// (0x00022d39) popup_vitu2_query_window_g3_ParamLimits

0xc4ed,	// (0x00022d39) popup_vitu2_query_window_g3

0xc58e,	// (0x00022dda) popup_vitu2_query_window_t6_ParamLimits

0xc58e,	// (0x00022dda) popup_vitu2_query_window_t6

0xc5b9,	// (0x00022e05) popup_vitu2_query_window_t7_ParamLimits

0xc5b9,	// (0x00022e05) popup_vitu2_query_window_t7

0x5b68,	// (0x0001c3b4) cam4_grid_pane_g1

0x5b71,	// (0x0001c3bd) cam4_grid_pane_g2

0x5c19,	// (0x0001c465) cam4_grid_pane_g3

0x5c22,	// (0x0001c46e) cam4_grid_pane_g4

0x0003,

0xfe4e,	// (0x0002669a) cam4_grid_pane_g

0x8ed3,	// (0x0001f71f) aid_placing_vt_slider_lsc_ParamLimits

0x921f,	// (0x0001fa6b) vidtel_button_pane_ParamLimits

0x921f,	// (0x0001fa6b) vidtel_button_pane

0x0263,	// (0x00016aaf) bg_button_pane_cp034

0x5c2d,	// (0x0001c479) vidtel_button_pane_g1

0x5c35,	// (0x0001c481) vidtel_button_pane_t1

0x3fdc,	// (0x0001a828) aid_size_vtel_slider_touch

0x40d1,	// (0x0001a91d) scroll_pane_cp039

0xd1ae,	// (0x000239fa) ncim_query_button_pane_cp01_ParamLimits

0xd1cd,	// (0x00023a19) ncimui_query_pane_g1_ParamLimits

0x02d2,	// (0x00016b1e) input_focus_pane_cp012_ParamLimits

0x4a29,	// (0x0001b275) ncim_query_entry_pane_t1_ParamLimits

0x40d1,	// (0x0001a91d) scroll_pane_cp039_ParamLimits

0x163d,	// (0x00017e89) navi_pane_bcale_mc_g1

0x1645,	// (0x00017e91) navi_pane_bcale_mc_t1

0x4ffa,	// (0x0001b846) main_sp_fs_email_pane_g1

0x5006,	// (0x0001b852) main_sp_fs_email_pane_g2

0x0001,

0xfc51,	// (0x0002649d) main_sp_fs_email_pane_g

0x54bd,	// (0x0001bd09) list_single_cale_mrui_row_pane_g3_ParamLimits

0x54bd,	// (0x0001bd09) list_single_cale_mrui_row_pane_g3

0xdf03,	// (0x0002474f) list_single_recal_day_pane_g5_event_pane

0x5695,	// (0x0001bee1) list_single_recal_day_pane_g7

0x5c4b,	// (0x0001c497) list_recal_day_event_pane_cp01

0x5c54,	// (0x0001c4a0) list_recal_vselct_arw_lo_pane_cp01

0x5c5c,	// (0x0001c4a8) list_recal_vselct_arw_up_pane_cp01

0x5c64,	// (0x0001c4b0) list_recal_vselct_pane_cp01

0x4028,	// (0x0001a874) list_recal_day_event_pane_cp01_g1

0x5c6e,	// (0x0001c4ba) list_recal_day_event_pane_cp01_t1

0x569d,	// (0x0001bee9) list_single_recal_day_pane_t1_ParamLimits

0x56af,	// (0x0001befb) list_single_recal_day_pane_t2_ParamLimits

0xfd31,	// (0x0002657d) list_single_recal_day_pane_t_ParamLimits

0x094e,	// (0x0001719a) bg_notes_pane_ParamLimits

0x0a21,	// (0x0001726d) list_notes_pane_ParamLimits

0x87a8,	// (0x0001eff4) scroll_pane_cp06_ParamLimits

0x0a5d,	// (0x000172a9) main_notes_pane_ParamLimits

0x02d2,	// (0x00016b1e) main_welc_pane

0xe8e2,	// (0x0002512e) main_welc_body_pane_ParamLimits

0xe8e2,	// (0x0002512e) main_welc_body_pane

0xe8fc,	// (0x00025148) main_welc_opti_pane_ParamLimits

0xe8fc,	// (0x00025148) main_welc_opti_pane

0xe95b,	// (0x000251a7) main_welc_pane_t1_ParamLimits

0xe95b,	// (0x000251a7) main_welc_pane_t1

0xeae3,	// (0x0002532f) main_welc_body_row_pane_ParamLimits

0xeae3,	// (0x0002532f) main_welc_body_row_pane

0x09bb,	// (0x00017207) main_welc_opti_row_pane_ParamLimits

0x09bb,	// (0x00017207) main_welc_opti_row_pane

0x5c8c,	// (0x0001c4d8) main_welc_opti_row_pane_g1

0xeb08,	// (0x00025354) main_welc_opti_row_pane_t1

0x5c94,	// (0x0001c4e0) main_welc_body_row_pane_t1

0x5932,	// (0x0001c17e) popup_notif_wgt_heading_pane

0x594c,	// (0x0001c198) aid_size_list_notif_wgt_del_ParamLimits

0x5959,	// (0x0001c1a5) list_notif_wgt_row_pane_g1_ParamLimits

0x5965,	// (0x0001c1b1) list_notif_wgt_row_pane_g2_ParamLimits

0x5974,	// (0x0001c1c0) list_notif_wgt_row_pane_g3_ParamLimits

0xfd98,	// (0x000265e4) list_notif_wgt_row_pane_g_ParamLimits

0x5981,	// (0x0001c1cd) list_notif_wgt_row_pane_t1_ParamLimits

0x5997,	// (0x0001c1e3) list_notif_wgt_row_pane_t2_ParamLimits

0x59a9,	// (0x0001c1f5) list_notif_wgt_row_pane_t3_ParamLimits

0xfd9f,	// (0x000265eb) list_notif_wgt_row_pane_t_ParamLimits

0xe2c0,	// (0x00024b0c) listrow_wgtman_pane_g1_ParamLimits

0xe2cd,	// (0x00024b19) listrow_wgtman_pane_g2_ParamLimits

0xfdcf,	// (0x0002661b) listrow_wgtman_pane_g_ParamLimits

0xe2eb,	// (0x00024b37) listrow_wgtman_pane_t1_ParamLimits

0xe303,	// (0x00024b4f) listrow_wgtman_pane_t2_ParamLimits

0xfdd4,	// (0x00026620) listrow_wgtman_pane_t_ParamLimits

0xe329,	// (0x00024b75) wait_bar_pane_cp09_ParamLimits

0x0263,	// (0x00016aaf) bg_popup_heading_pane_cp02

0x5ca3,	// (0x0001c4ef) popup_notif_wgt_heading_pane_g1

0x5cab,	// (0x0001c4f7) popup_notif_wgt_heading_pane_t1

0x0263,	// (0x00016aaf) main_vids_pane

0x0263,	// (0x00016aaf) vids_listscroll_pane

0xeb17,	// (0x00025363) scroll_pane_cp040

0x0263,	// (0x00016aaf) vids_list_pane

0xeb22,	// (0x0002536e) vids_list_double_pane_ParamLimits

0xeb22,	// (0x0002536e) vids_list_double_pane

0xeb39,	// (0x00025385) vids_list_double_pane_g1

0xeb42,	// (0x0002538e) vids_list_double_pane_t1

0xeb52,	// (0x0002539e) vids_list_double_pane_t2

0x0001,

0xfe6d,	// (0x000266b9) vids_list_double_pane_t

0x74f4,	// (0x0001dd40) main_ncimui_pane_ParamLimits

0xd005,	// (0x00023851) main_ncimui_pane_g1_ParamLimits

0xd011,	// (0x0002385d) main_ncimui_pane_g2_ParamLimits

0xd011,	// (0x0002385d) main_ncimui_pane_g2

0x0001,

0xfb52,	// (0x0002639e) main_ncimui_pane_g_ParamLimits

0xfb52,	// (0x0002639e) main_ncimui_pane_g

0xe915,	// (0x00025161) main_welc_pane_g1_ParamLimits

0xe915,	// (0x00025161) main_welc_pane_g1

0xe921,	// (0x0002516d) main_welc_pane_g2_ParamLimits

0xe921,	// (0x0002516d) main_welc_pane_g2

0x0003,

0xfe57,	// (0x000266a3) main_welc_pane_g_ParamLimits

0xfe57,	// (0x000266a3) main_welc_pane_g

0x878a,	// (0x0001efd6) listscroll_mce_pane_ParamLimits

0x1792,	// (0x00017fde) wait_bar_pane_cp10

0x2bb6,	// (0x00019402) main_cale_day_pane_ParamLimits

0x2bb6,	// (0x00019402) main_cale_week_pane_ParamLimits

0x094e,	// (0x0001719a) main_messa_pane_ParamLimits

0xb811,	// (0x0002205d) main_clock2_btn_pane_ParamLimits

0xb811,	// (0x0002205d) main_clock2_btn_pane

0x343d,	// (0x00019c89) main_clock2_btn_pane_cp01_ParamLimits

0x343d,	// (0x00019c89) main_clock2_btn_pane_cp01

0x5449,	// (0x0001bc95) list_cale_mrui_pane_ParamLimits

0x59ed,	// (0x0001c239) main_cf0_pane_g2

0x0001,

0xfda6,	// (0x000265f2) main_cf0_pane_g

0xe4d0,	// (0x00024d1c) area_left_week_number_pane_ParamLimits

0xe4e3,	// (0x00024d2f) area_top_day_name_pane_ParamLimits

0xe4f1,	// (0x00024d3d) frame_month_view_pane_ParamLimits

0x5b15,	// (0x0001c361) grid_month_view_pane_ParamLimits

0x5b23,	// (0x0001c36f) frm_month_g1_ParamLimits

0xe56f,	// (0x00024dbb) frm_month_g2_ParamLimits

0xe580,	// (0x00024dcc) frm_month_g3_ParamLimits

0xe591,	// (0x00024ddd) frm_month_g4_ParamLimits

0xe5a2,	// (0x00024dee) frm_month_g5_ParamLimits

0xe5b5,	// (0x00024e01) frm_month_g6_ParamLimits

0xe5c8,	// (0x00024e14) frm_month_g7_ParamLimits

0x5b30,	// (0x0001c37c) frm_month_g8_ParamLimits

0xe5db,	// (0x00024e27) frm_month_g9_ParamLimits

0xe5e8,	// (0x00024e34) frm_month_g10_ParamLimits

0xe5f5,	// (0x00024e41) frm_month_g11_ParamLimits

0xe602,	// (0x00024e4e) frm_month_g12_ParamLimits

0xe60f,	// (0x00024e5b) frm_month_g13_ParamLimits

0xe61c,	// (0x00024e68) frm_month_g14_ParamLimits

0xe62b,	// (0x00024e77) frm_month_g15_ParamLimits

0xe63a,	// (0x00024e86) frm_month_g16_ParamLimits

0xfdfe,	// (0x0002664a) frm_month_g_ParamLimits

0x5b3d,	// (0x0001c389) cell_top_day_name_pane_t1_ParamLimits

0xe649,	// (0x00024e95) cell_area_left_week_number_pane_g1_ParamLimits

0xe658,	// (0x00024ea4) cell_area_left_week_number_pane_t1_ParamLimits

0x09c9,	// (0x00017215) cell_month_view_pane_g1_ParamLimits

0xe66e,	// (0x00024eba) cell_month_view_pane_t1_ParamLimits

0x0946,	// (0x00017192) main_clock2_btn_pane_g1

0x5cb9,	// (0x0001c505) main_clock2_btn_pane_t1

0x02d2,	// (0x00016b1e) listscroll_cmail_pane_ParamLimits

0x4ffa,	// (0x0001b846) main_sp_fs_email_pane_g1_ParamLimits

0x5006,	// (0x0001b852) main_sp_fs_email_pane_g2_ParamLimits

0xfc51,	// (0x0002649d) main_sp_fs_email_pane_g_ParamLimits

0x5605,	// (0x0001be51) list_recal_day_pane_ParamLimits

0x5616,	// (0x0001be62) mian_recal_day_pane_t1

0xd8ef,	// (0x0002413b) list_single_dyc_row_text_pane_t4_ParamLimits

0xd8ef,	// (0x0002413b) list_single_dyc_row_text_pane_t4

0xd926,	// (0x00024172) list_single_dyc_row_text_pane_t5_ParamLimits

0xd926,	// (0x00024172) list_single_dyc_row_text_pane_t5

0x50ce,	// (0x0001b91a) list_single_dyc_row_text_pane_t6_ParamLimits

0x50ce,	// (0x0001b91a) list_single_dyc_row_text_pane_t6

0x10b8,	// (0x00017904) aid_mgn_list_cale_time_pane

0x74f4,	// (0x0001dd40) main_gallery2_pane_ParamLimits

0x3453,	// (0x00019c9f) main_clock2_pane_cp01_t1

0x3463,	// (0x00019caf) main_clock2_pane_cp01_t3

0x0001,

0xf737,	// (0x00025f83) main_clock2_pane_cp01_t

0x8ad2,	// (0x0001f31e) cale_week_scroll_pane_g16_ParamLimits

0x8ad2,	// (0x0001f31e) cale_week_scroll_pane_g16

0x0ca2,	// (0x000174ee) vorec_slider_pane

0x5c35,	// (0x0001c481) vidtel_button_pane_t1_ParamLimits

0xdf5e,	// (0x000247aa) main_fs_bigclock_clock_pane_g1_ParamLimits

0xdf5e,	// (0x000247aa) main_fs_bigclock_clock_pane_g2_ParamLimits

0xdf6b,	// (0x000247b7) main_fs_bigclock_clock_pane_g3_ParamLimits

0xdf6b,	// (0x000247b7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd54,	// (0x000265a0) main_fs_bigclock_clock_pane_g_ParamLimits

0xdf77,	// (0x000247c3) main_fs_bigclock_clock_pane_t1_ParamLimits

0xdf8a,	// (0x000247d6) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd5d,	// (0x000265a9) main_fs_bigclock_clock_pane_t_ParamLimits

0xb1ae,	// (0x000219fa) main_mup3_lyrics_pane_ParamLimits

0xb1ae,	// (0x000219fa) main_mup3_lyrics_pane

0xeb60,	// (0x000253ac) main_mup3_lyrics_pane_t1_ParamLimits

0xeb60,	// (0x000253ac) main_mup3_lyrics_pane_t1

0x78b8,	// (0x0001e104) aid_main_mp4_pane_t1_area

0x78c2,	// (0x0001e10e) aid_main_mp4_pane_t2_area

0x79c1,	// (0x0001e20d) main_mp4_pane_g7_ParamLimits

0x79c1,	// (0x0001e20d) main_mp4_pane_g7

0x79cd,	// (0x0001e219) main_mp4_pane_g8_ParamLimits

0x79cd,	// (0x0001e219) main_mp4_pane_g8

0xbc4d,	// (0x00022499) aid_call6_pane_g1_size

0xe7f4,	// (0x00025040) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe7f4,	// (0x00025040) list_double_large_graphic_phob2_other_pane

0x1070,	// (0x000178bc) list_double_large_graphic_phob2_other_pane_g1

0x0263,	// (0x00016aaf) list_highlight_pane_cp026

0x02d2,	// (0x00016b1e) main_welc_pane_ParamLimits

0xd78e,	// (0x00023fda) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xd78e,	// (0x00023fda) main_sp_fs_ctrlbar_pane_g3

0xd7a6,	// (0x00023ff2) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xd7a6,	// (0x00023ff2) main_sp_fs_ctrlbar_pane_g4

0xd7d8,	// (0x00024024) toolbar2_fixed_button_pane_cp01

0xd7e3,	// (0x0002402f) toolbar2_fixed_button_pane_cp02

0xd7ee,	// (0x0002403a) toolbar2_fixed_button_pane_cp03

0xe8d3,	// (0x0002511f) list_welc_entry_pane_ParamLimits

0xe8d3,	// (0x0002511f) list_welc_entry_pane

0xe92f,	// (0x0002517b) main_welc_pane_g3_ParamLimits

0xe92f,	// (0x0002517b) main_welc_pane_g3

0xe975,	// (0x000251c1) main_welc_pane_t2_ParamLimits

0xe975,	// (0x000251c1) main_welc_pane_t2

0xe989,	// (0x000251d5) main_welc_pane_t3_ParamLimits

0xe989,	// (0x000251d5) main_welc_pane_t3

0x0005,

0xfe60,	// (0x000266ac) main_welc_pane_t_ParamLimits

0xfe60,	// (0x000266ac) main_welc_pane_t

0xea85,	// (0x000252d1) welc_button_pane_ParamLimits

0xea85,	// (0x000252d1) welc_button_pane

0xead5,	// (0x00025321) welc_service_logo_pane_ParamLimits

0xead5,	// (0x00025321) welc_service_logo_pane

0xeb92,	// (0x000253de) list_single_welc_entry_pane_ParamLimits

0xeb92,	// (0x000253de) list_single_welc_entry_pane

0xeba3,	// (0x000253ef) list_single_welc_entry_pane_g1

0xebab,	// (0x000253f7) list_single_welc_entry_pane_t1

0xebb9,	// (0x00025405) list_single_welc_entry_pane_t2

0x0001,

0xfe72,	// (0x000266be) list_single_welc_entry_pane_t

0x0263,	// (0x00016aaf) bg_button_pane_cp035

0x5cc7,	// (0x0001c513) welc_button_pane_t1

0x5cd5,	// (0x0001c521) welc_service_logo_pane_g1

0x5cde,	// (0x0001c52a) welc_service_logo_pane_g2

0x0001,

0xfe77,	// (0x000266c3) welc_service_logo_pane_g

0x709c,	// (0x0001d8e8) main_int_radio_pane

0x0af8,	// (0x00017344) list_single_fs_dyc_pane_g1

0xe711,	// (0x00024f5d) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xe711,	// (0x00024f5d) list_double_large_graphic_phob2_pane_g3

0xe71d,	// (0x00024f69) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe71d,	// (0x00024f69) list_double_large_graphic_phob2_pane_g4

0xebc7,	// (0x00025413) main_int_radio1_pane_ParamLimits

0xebc7,	// (0x00025413) main_int_radio1_pane

0x5ce7,	// (0x0001c533) find_pane_cp02

0xebd9,	// (0x00025425) input_focus_pane_cp12_ParamLimits

0xebd9,	// (0x00025425) input_focus_pane_cp12

0xebe5,	// (0x00025431) input_focus_pane_cp13_ParamLimits

0xebe5,	// (0x00025431) input_focus_pane_cp13

0xebfd,	// (0x00025449) input_focus_pane_cp14_ParamLimits

0xebfd,	// (0x00025449) input_focus_pane_cp14

0x5cf0,	// (0x0001c53c) int_radio1_listscroll_pane

0xec15,	// (0x00025461) main_int_radio1_pane_g1_ParamLimits

0xec15,	// (0x00025461) main_int_radio1_pane_g1

0xec25,	// (0x00025471) main_int_radio1_pane_t1_ParamLimits

0xec25,	// (0x00025471) main_int_radio1_pane_t1

0xec39,	// (0x00025485) main_int_radio1_pane_t2_ParamLimits

0xec39,	// (0x00025485) main_int_radio1_pane_t2

0xec4d,	// (0x00025499) main_int_radio1_pane_t3_ParamLimits

0xec4d,	// (0x00025499) main_int_radio1_pane_t3

0xec61,	// (0x000254ad) main_int_radio1_pane_t4_ParamLimits

0xec61,	// (0x000254ad) main_int_radio1_pane_t4

0x5cfa,	// (0x0001c546) main_int_radio1_pane_t5_ParamLimits

0x5cfa,	// (0x0001c546) main_int_radio1_pane_t5

0xec78,	// (0x000254c4) main_int_radio1_pane_t6_ParamLimits

0xec78,	// (0x000254c4) main_int_radio1_pane_t6

0xec8a,	// (0x000254d6) main_int_radio1_pane_t7_ParamLimits

0xec8a,	// (0x000254d6) main_int_radio1_pane_t7

0xec9c,	// (0x000254e8) main_int_radio1_pane_t8_ParamLimits

0xec9c,	// (0x000254e8) main_int_radio1_pane_t8

0xecb0,	// (0x000254fc) main_int_radio1_pane_t9_ParamLimits

0xecb0,	// (0x000254fc) main_int_radio1_pane_t9

0xecc2,	// (0x0002550e) main_int_radio1_pane_t10_ParamLimits

0xecc2,	// (0x0002550e) main_int_radio1_pane_t10

0xecf3,	// (0x0002553f) main_int_radio1_pane_t11_ParamLimits

0xecf3,	// (0x0002553f) main_int_radio1_pane_t11

0xed24,	// (0x00025570) main_int_radio1_pane_t12_ParamLimits

0xed24,	// (0x00025570) main_int_radio1_pane_t12

0x000b,

0xfe7c,	// (0x000266c8) main_int_radio1_pane_t_ParamLimits

0xfe7c,	// (0x000266c8) main_int_radio1_pane_t

0x5d0c,	// (0x0001c558) int_radio_list_pane

0x5b58,	// (0x0001c3a4) scroll_pane_cp037

0x5d14,	// (0x0001c560) list_double_large_graphic_int_radio_pane_ParamLimits

0x5d14,	// (0x0001c560) list_double_large_graphic_int_radio_pane

0x5d2c,	// (0x0001c578) list_double_large_graphic_int_radio_pane_g1

0x5d35,	// (0x0001c581) list_double_large_graphic_int_radio_pane_t1

0x5d43,	// (0x0001c58f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe95,	// (0x000266e1) list_double_large_graphic_int_radio_pane_t

0x0263,	// (0x00016aaf) list_highlight_pane_cp027

0x5c7c,	// (0x0001c4c8) main_button_pane_4

0xe93b,	// (0x00025187) main_welc_pane_g4_ParamLimits

0xe93b,	// (0x00025187) main_welc_pane_g4

0xe99b,	// (0x000251e7) main_welc_pane_t4_ParamLimits

0xe99b,	// (0x000251e7) main_welc_pane_t4

0xe9ad,	// (0x000251f9) main_welc_pane_t5_ParamLimits

0xe9ad,	// (0x000251f9) main_welc_pane_t5

0xe9dd,	// (0x00025229) main_welc_pane_t6_ParamLimits

0xe9dd,	// (0x00025229) main_welc_pane_t6

0xea93,	// (0x000252df) welc_button_pane_2_ParamLimits

0xea93,	// (0x000252df) welc_button_pane_2

0xeaab,	// (0x000252f7) welc_button_pane_3_ParamLimits

0xeaab,	// (0x000252f7) welc_button_pane_3

0x5c84,	// (0x0001c4d0) welc_button_pane_4

0xeac5,	// (0x00025311) welc_button_pane_5_ParamLimits

0xeac5,	// (0x00025311) welc_button_pane_5

0x6e47,	// (0x0001d693) main_popup_welc_pane

0x5d60,	// (0x0001c5ac) main_welc_sk_g3

0x5d6a,	// (0x0001c5b6) main_welc_sk_g4

0x5d74,	// (0x0001c5c0) main_welc_sk_t3

0x5d84,	// (0x0001c5d0) main_welc_sk_t4

0x5d94,	// (0x0001c5e0) popup_welc_pane_t4

0x5da2,	// (0x0001c5ee) popup_welc_pane_t5

0x5db2,	// (0x0001c5fe) popup_welc_pane_t6

0x709c,	// (0x0001d8e8) main_acti_pane

0x0263,	// (0x00016aaf) main_sso_pane

0xed3b,	// (0x00025587) sso_body_pane_ParamLimits

0xed3b,	// (0x00025587) sso_body_pane

0xed49,	// (0x00025595) sso_logo_pane_ParamLimits

0xed49,	// (0x00025595) sso_logo_pane

0xed70,	// (0x000255bc) sso_sk_pane_ParamLimits

0xed70,	// (0x000255bc) sso_sk_pane

0x0ce2,	// (0x0001752e) main_sso_logo_pane_g1

0xed7d,	// (0x000255c9) sso_sk_pane_t1_ParamLimits

0xed7d,	// (0x000255c9) sso_sk_pane_t1

0xed91,	// (0x000255dd) sso_sk_pane_t2_ParamLimits

0xed91,	// (0x000255dd) sso_sk_pane_t2

0x0001,

0xfe9a,	// (0x000266e6) sso_sk_pane_t_ParamLimits

0xfe9a,	// (0x000266e6) sso_sk_pane_t

0x5df0,	// (0x0001c63c) aid_sso_gap

0x5df9,	// (0x0001c645) aid_sso_txt1

0x5e03,	// (0x0001c64f) aid_sso_txt2

0x5e0d,	// (0x0001c659) aid_sso_txt3

0x0002,

0xfe9f,	// (0x000266eb) aid_sso_txt

0x5e17,	// (0x0001c663) aid_sso_widget

0xedf0,	// (0x0002563c) sso_btn_pane_ParamLimits

0xedf0,	// (0x0002563c) sso_btn_pane

0xee69,	// (0x000256b5) sso_option_pane_ParamLimits

0xee69,	// (0x000256b5) sso_option_pane

0xeee3,	// (0x0002572f) sso_query_pane_ParamLimits

0xeee3,	// (0x0002572f) sso_query_pane

0xef33,	// (0x0002577f) sso_query_pane_cp01_ParamLimits

0xef33,	// (0x0002577f) sso_query_pane_cp01

0xef85,	// (0x000257d1) sso_t_hdr_pane_ParamLimits

0xef85,	// (0x000257d1) sso_t_hdr_pane

0xefa4,	// (0x000257f0) sso_t_nml_pane_ParamLimits

0xefa4,	// (0x000257f0) sso_t_nml_pane

0x5e0d,	// (0x0001c659) sso_t_sub_pane

0xed56,	// (0x000255a2) sso_popup_window_ParamLimits

0xed56,	// (0x000255a2) sso_popup_window

0xeda3,	// (0x000255ef) sso_apps_pane_ParamLimits

0xeda3,	// (0x000255ef) sso_apps_pane

0xedc6,	// (0x00025612) sso_body_pane_g1

0xedd0,	// (0x0002561c) sso_body_pane_t1

0xede0,	// (0x0002562c) sso_body_pane_t2

0x0001,

0xfea6,	// (0x000266f2) sso_body_pane_t

0xee3b,	// (0x00025687) sso_btn_pane_cp01_ParamLimits

0xee3b,	// (0x00025687) sso_btn_pane_cp01

0xeeb5,	// (0x00025701) sso_prog_pane_ParamLimits

0xeeb5,	// (0x00025701) sso_prog_pane

0x5e21,	// (0x0001c66d) sso_t_hdr_pane_t1_ParamLimits

0x5e21,	// (0x0001c66d) sso_t_hdr_pane_t1

0x5e34,	// (0x0001c680) input_focus_pane_cp10_ParamLimits

0x5e34,	// (0x0001c680) input_focus_pane_cp10

0x5e4a,	// (0x0001c696) sso_query_pane_t1_ParamLimits

0x5e4a,	// (0x0001c696) sso_query_pane_t1

0x5e5d,	// (0x0001c6a9) sso_query_pane_t2_ParamLimits

0x5e5d,	// (0x0001c6a9) sso_query_pane_t2

0x5e78,	// (0x0001c6c4) sso_query_pane_t3_ParamLimits

0x5e78,	// (0x0001c6c4) sso_query_pane_t3

0x5ea2,	// (0x0001c6ee) sso_query_pane_t4_ParamLimits

0x5ea2,	// (0x0001c6ee) sso_query_pane_t4

0x0003,

0xfeab,	// (0x000266f7) sso_query_pane_t_ParamLimits

0xfeab,	// (0x000266f7) sso_query_pane_t

0x0263,	// (0x00016aaf) bg_button_pane_cp22

0x5d51,	// (0x0001c59d) sso_btn_pane_t1

0xeff4,	// (0x00025840) sso_t_nml_pane_t1_ParamLimits

0xeff4,	// (0x00025840) sso_t_nml_pane_t1

0x5ec6,	// (0x0001c712) sso_option_row_pane_ParamLimits

0x5ec6,	// (0x0001c712) sso_option_row_pane

0x5ed3,	// (0x0001c71f) sso_t_sub_pane_t1_ParamLimits

0x5ed3,	// (0x0001c71f) sso_t_sub_pane_t1

0x02d2,	// (0x00016b1e) bg_popup_window_pane_cp11_ParamLimits

0x02d2,	// (0x00016b1e) bg_popup_window_pane_cp11

0x5ee6,	// (0x0001c732) popup_sk_window_cp01_ParamLimits

0x5ee6,	// (0x0001c732) popup_sk_window_cp01

0x5ef3,	// (0x0001c73f) sso_popup_body_pane_ParamLimits

0x5ef3,	// (0x0001c73f) sso_popup_body_pane

0x5f00,	// (0x0001c74c) scroll_pane_cp21_ParamLimits

0x5f00,	// (0x0001c74c) scroll_pane_cp21

0x5f0d,	// (0x0001c759) sso_popup_body_t_pane_ParamLimits

0x5f0d,	// (0x0001c759) sso_popup_body_t_pane

0x5f1a,	// (0x0001c766) sso_popup_body_t_hdr_pane_ParamLimits

0x5f1a,	// (0x0001c766) sso_popup_body_t_hdr_pane

0x5f28,	// (0x0001c774) sso_popup_body_t_nml_pane_ParamLimits

0x5f28,	// (0x0001c774) sso_popup_body_t_nml_pane

0x5f43,	// (0x0001c78f) sso_popup_body_t_sub_pane_ParamLimits

0x5f43,	// (0x0001c78f) sso_popup_body_t_sub_pane

0x5f66,	// (0x0001c7b2) sso_popup_body_t_hdr_pane_t1

0xf011,	// (0x0002585d) sso_popup_body_t_nml_pane_t1_ParamLimits

0xf011,	// (0x0002585d) sso_popup_body_t_nml_pane_t1

0x5f76,	// (0x0001c7c2) sso_popup_body_t_sub_pane_t1_ParamLimits

0x5f76,	// (0x0001c7c2) sso_popup_body_t_sub_pane_t1

0x0ce2,	// (0x0001752e) sso_prog_pane_g1

0xf052,	// (0x0002589e) sso_apps_pane_comp1_ParamLimits

0xf052,	// (0x0002589e) sso_apps_pane_comp1

0x5f9b,	// (0x0001c7e7) sso_apps_pane_comp1_g1

0x5fa3,	// (0x0001c7ef) sso_apps_pane_comp1_t1

0x5fb1,	// (0x0001c7fd) sso_option_row_pane_g1

0x5fb9,	// (0x0001c805) sso_option_row_pane_t1

0xe8c1,	// (0x0002510d) bg_welc_area_ParamLimits

0xe8c1,	// (0x0002510d) bg_welc_area

0xea13,	// (0x0002525f) sso_t_hdr_pane_a_t1_ParamLimits

0xea13,	// (0x0002525f) sso_t_hdr_pane_a_t1

0xea27,	// (0x00025273) sso_t_nml_pane_a_t1_ParamLimits

0xea27,	// (0x00025273) sso_t_nml_pane_a_t1

0xea51,	// (0x0002529d) sso_t_sub_pane_a_t1_ParamLimits

0xea51,	// (0x0002529d) sso_t_sub_pane_a_t1

0x5d51,	// (0x0001c59d) sso_btn_pane_t1_copy1

0x0263,	// (0x00016aaf) welc_button_pane_2_comp1

0x5dc0,	// (0x0001c60c) sso_t_hdr_pane_p_t1

0x5dd0,	// (0x0001c61c) sso_t_nml_pane_p_t1

0x5de0,	// (0x0001c62c) sso_t_sub_pane_p_t1
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
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
